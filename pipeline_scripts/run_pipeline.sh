#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"

usage() {
  cat <<EOF
Usage:
  $0

This script builds unobfuscated and obfuscated binaries (Tigress and/or LLVM OLLVM),
runs correctness, collects runtime metrics, and runs headless Ghidra analysis.

Key env vars:
  SRC                C source to compile (default: $SCRIPT_DIR/c_programs/unified.c)
  OUT_ROOT           Output root directory (default: $ROOT_DIR/artifacts)
  LEVELS             Optimization levels (default: "O0 O1 O2 O3")
  CC, BASE_CFLAGS, EXTRA_CFLAGS, STRIP
  MODE               unified (default), split, or split-light
  REPORT             1 to generate unified vs split summary report (default: 0)
  CONFUSION_REPORT   1 to generate confusion report (default: 0)
  OPS                Space-separated ops for split mode (default: "1 2 3 4 5 6 7 8 9 10")
  OBF_ENGINE         tigress (default), llvm, or both

Tigress:
  TIGRESS            Tigress executable (default: tigress)
  TIGRESS_TRANSFORMS Space-separated list (e.g. "Flatten EncodeArithmetic")
  TIGRESS_FUNCTIONS  Functions target (default: main)
  TIGRESS_SEED       Seed value (default: 0)
  TIGRESS_ENV        Optional, e.g. x86_64:Linux:Gcc
  TIGRESS_ARGS       Extra global Tigress args (optional)
  TIGRESS_RAW_ARGS   If set, overrides TIGRESS_TRANSFORMS/FUNCTIONS handling

LLVM Obfuscator (OLLVM):
  LLVM_OBF           Obfuscator-LLVM compiler wrapper (default: llvm_obf)
  LLVM_OBF_PASSES    Space-separated list of passes (e.g. "fla bcf sub" or aliases "flatten bogus substitute")
  LLVM_OBF_SEED      Seed value (optional, passed as -mllvm -seed=VALUE)
  LLVM_OBF_ARGS      Extra args passed to llvm_obf (optional)
  LLVM_OBF_RAW_ARGS  If set, overrides LLVM_OBF_PASSES handling

Ghidra (required if RUN_GHIDRA=1):
  GHIDRA_HOME        Ghidra install dir
  GHIDRA_SCRIPTS     Dir containing decompile_all.py
  FORCE_GHIDRA       1 to force re-analysis (default: 0)

Toggles:
  RUN_BUILD=1        Build unobfuscated (default: 1)
  RUN_OBF=1          Build obfuscated (default: 1)
  RUN_CORRECTNESS=1  Run correctness (default: 1)
  RUN_MEASURE=1      Collect runtime metrics (default: 1)
  RUN_GHIDRA=1       Run Ghidra (default: 1)

Outputs (unified mode):
  \${OUT_ROOT}/runtime.json   Keyed runtime metrics (unobf + obf)
  \${OUT_ROOT}/ghidra.json    Keyed Ghidra metrics (unobf + obf)
  \${OUT_ROOT}/runtime_llvm.json and \${OUT_ROOT}/ghidra_llvm.json (if OBF_ENGINE includes llvm)
  \${OUT_ROOT}/runtime_tigress.json and \${OUT_ROOT}/ghidra_tigress.json (if OBF_ENGINE includes tigress)

Outputs (split mode):
  \${OUT_ROOT}/runtime_split.json  Keyed by op -> {unobf, obf}
  \${OUT_ROOT}/ghidra_split.json   Keyed by op -> {unobf, obf}
  \${OUT_ROOT}/unified_vs_split_report.json (if REPORT=1)
  \${OUT_ROOT}/confusion_report.json and .md (if CONFUSION_REPORT=1)

Examples:
  # Unified (full pipeline)
  TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" OBF_ENGINE=tigress \\
  GHIDRA_HOME=/path/to/ghidra \\
  GHIDRA_SCRIPTS=/path/to/ghidra_scripts \\
  $0

  # Unified (rerun only Ghidra)
  RUN_BUILD=0 RUN_OBF=0 RUN_CORRECTNESS=0 RUN_MEASURE=0 RUN_GHIDRA=1 FORCE_GHIDRA=1 \\
  GHIDRA_HOME=/path/to/ghidra \\
  GHIDRA_SCRIPTS=/path/to/ghidra_scripts \\
  $0

  # Split mode (per-op binaries)
  MODE=split OPS="1 3 7" TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" OBF_ENGINE=tigress \\
  GHIDRA_HOME=/path/to/ghidra \\
  GHIDRA_SCRIPTS=/path/to/ghidra_scripts \\
  $0

  # Split-light (build only)
  MODE=split-light OPS="1 3 7" $0

  # Unified (LLVM Obfuscator)
  OBF_ENGINE=llvm LLVM_OBF_PASSES="fla bcf sub" \\
  GHIDRA_HOME=/path/to/ghidra \\
  GHIDRA_SCRIPTS=/path/to/ghidra_scripts \\
  $0

  # Unified (both obfuscators)
  OBF_ENGINE=both TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" LLVM_OBF_PASSES="fla bcf sub" \\
  GHIDRA_HOME=/path/to/ghidra \\
  GHIDRA_SCRIPTS=/path/to/ghidra_scripts \\
  $0
EOF
}

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
  usage
  exit 0
fi

log() { echo "[pipeline] $*"; }
die() { echo "Error: $*" >&2; exit 1; }

require_cmd() {
  command -v "$1" >/dev/null 2>&1 || die "Missing required command: $1"
}

op_func_name() {
  case "$1" in
    1) echo "op_even_odd" ;;
    2) echo "op_armstrong" ;;
    3) echo "op_average" ;;
    4) echo "op_dec2bin" ;;
    5) echo "op_date_diff" ;;
    6) echo "op_array_max" ;;
    7) echo "op_quicksort" ;;
    8) echo "op_tree_traversals" ;;
    9) echo "op_binary_search" ;;
    10) echo "op_dijkstra" ;;
    *) echo "" ;;
  esac
}

SRC="${SRC:-$SCRIPT_DIR/c_programs/unified.c}"
OUT_ROOT="${OUT_ROOT:-$ROOT_DIR/artifacts}"
LEVELS_STR="${LEVELS:-O0 O1 O2 O3}"
CC="${CC:-gcc}"
BASE_CFLAGS="${BASE_CFLAGS:- -std=c11 -Wall -Wextra -pedantic}"
EXTRA_CFLAGS="${EXTRA_CFLAGS:-}"
LDFLAGS="${LDFLAGS:-}"
MODE="${MODE:-unified}"
OPS="${OPS:-1 2 3 4 5 6 7 8 9 10}"
REPORT="${REPORT:-0}"
CONFUSION_REPORT="${CONFUSION_REPORT:-0}"
STRIP="${STRIP:-1}"
OBF_ENGINE="${OBF_ENGINE:-tigress}"

TIGRESS="${TIGRESS:-tigress}"
TIGRESS_TRANSFORMS="${TIGRESS_TRANSFORMS:-}"
TIGRESS_FUNCTIONS="${TIGRESS_FUNCTIONS:-main}"
TIGRESS_SEED="${TIGRESS_SEED:-0}"
TIGRESS_ENV="${TIGRESS_ENV:-}"
TIGRESS_ARGS="${TIGRESS_ARGS:-}"
TIGRESS_RAW_ARGS="${TIGRESS_RAW_ARGS:-}"

LLVM_OBF="${LLVM_OBF:-llvm_obf}"
LLVM_OBF_PASSES="${LLVM_OBF_PASSES:-}"
LLVM_OBF_SEED="${LLVM_OBF_SEED:-}"
LLVM_OBF_ARGS="${LLVM_OBF_ARGS:-}"
LLVM_OBF_RAW_ARGS="${LLVM_OBF_RAW_ARGS:-}"

# Best-effort defaults for Ghidra paths (can be overridden by env)
if [[ -z "${GHIDRA_HOME:-}" ]]; then
  if [[ -d "$ROOT_DIR/ghidra_11.4.2_PUBLIC" ]]; then
    GHIDRA_HOME="$ROOT_DIR/ghidra_11.4.2_PUBLIC"
  fi
fi
if [[ -z "${GHIDRA_SCRIPTS:-}" ]]; then
  if [[ -d "$SCRIPT_DIR/ghidra_scripts" ]]; then
    GHIDRA_SCRIPTS="$SCRIPT_DIR/ghidra_scripts"
  fi
fi
export GHIDRA_HOME
export GHIDRA_SCRIPTS

RUN_BUILD="${RUN_BUILD:-1}"
RUN_OBF="${RUN_OBF:-1}"
RUN_CORRECTNESS="${RUN_CORRECTNESS:-1}"
RUN_MEASURE="${RUN_MEASURE:-1}"
RUN_GHIDRA="${RUN_GHIDRA:-1}"
FORCE_GHIDRA="${FORCE_GHIDRA:-0}"

read -r -a LEVELS_ARR <<< "$LEVELS_STR"
read -r -a OPS_ARR <<< "$OPS"

UNOBF_DIR="$OUT_ROOT/unobf"
OBF_DIR="$OUT_ROOT/obf"
OBF_SRC_DIR="$OUT_ROOT/obf_src"
OBF_TIGRESS_DIR="$OUT_ROOT/obf_tigress"
OBF_TIGRESS_SRC_DIR="$OUT_ROOT/obf_tigress_src"
OBF_LLVM_DIR="$OUT_ROOT/obf_llvm"
GHIDRA_UNOBF_DIR="$OUT_ROOT/ghidra/unobf"
GHIDRA_OBF_DIR="$OUT_ROOT/ghidra/obf"
GHIDRA_TIGRESS_DIR="$OUT_ROOT/ghidra/obf_tigress"
GHIDRA_LLVM_DIR="$OUT_ROOT/ghidra/obf_llvm"
RUNTIME_JSON="$OUT_ROOT/runtime.json"
GHIDRA_JSON="$OUT_ROOT/ghidra.json"
RUNTIME_TIGRESS_JSON="$OUT_ROOT/runtime_tigress.json"
GHIDRA_TIGRESS_JSON="$OUT_ROOT/ghidra_tigress.json"
RUNTIME_LLVM_JSON="$OUT_ROOT/runtime_llvm.json"
GHIDRA_LLVM_JSON="$OUT_ROOT/ghidra_llvm.json"
RUNTIME_SPLIT_JSON="$OUT_ROOT/runtime_split.json"
GHIDRA_SPLIT_JSON="$OUT_ROOT/ghidra_split.json"
REPORT_JSON="$OUT_ROOT/unified_vs_split_report.json"
CONFUSION_JSON="$OUT_ROOT/confusion_report.json"
CONFUSION_MD="$OUT_ROOT/confusion_report.md"

mkdir -p "$OUT_ROOT"

build_unobf() {
  log "Building unobfuscated binaries"
  SRC="$SRC" OUT="$UNOBF_DIR" CC="$CC" BASE_CFLAGS="$BASE_CFLAGS" EXTRA_CFLAGS="$EXTRA_CFLAGS" LDFLAGS="$LDFLAGS" STRIP="$STRIP" LEVELS="$LEVELS_STR" \
    "$SCRIPT_DIR/build.sh"
}

build_tigress() {
  log "Building obfuscated binaries with Tigress"
  require_cmd "$TIGRESS"

  if [[ -z "$TIGRESS_RAW_ARGS" && -z "$TIGRESS_TRANSFORMS" ]]; then
    die "TIGRESS_TRANSFORMS is required unless TIGRESS_RAW_ARGS is set."
  fi

  local transforms=()
  if [[ -z "$TIGRESS_RAW_ARGS" ]]; then
    read -r -a transforms <<< "$TIGRESS_TRANSFORMS"
  fi

  for L in "${LEVELS_ARR[@]}"; do
    local src_dir="$OBF_TIGRESS_SRC_DIR/$L"
    local obf_src="$src_dir/unified_obf.c"
    mkdir -p "$src_dir"

    local tigress_args=()
    if [[ -n "$TIGRESS_RAW_ARGS" ]]; then
      read -r -a tigress_args <<< "$TIGRESS_RAW_ARGS"
    else
      if [[ -n "$TIGRESS_ENV" ]]; then tigress_args+=(--Environment="$TIGRESS_ENV"); fi
      if [[ -n "$TIGRESS_SEED" ]]; then tigress_args+=(--Seed="$TIGRESS_SEED"); fi
      for t in "${transforms[@]}"; do
        tigress_args+=(--Transform="$t")
        if [[ -n "$TIGRESS_FUNCTIONS" ]]; then
          tigress_args+=(--Functions="$TIGRESS_FUNCTIONS")
        fi
      done
      if [[ -n "$TIGRESS_ARGS" ]]; then
        local extra=()
        read -r -a extra <<< "$TIGRESS_ARGS"
        tigress_args+=("${extra[@]}")
      fi
    fi

    log "Tigress $L -> $obf_src"
    printf '%q ' "$TIGRESS" "${tigress_args[@]}" --out="$obf_src" "$SRC" > "$src_dir/tigress_cmd.txt"
    "$TIGRESS" "${tigress_args[@]}" --out="$obf_src" "$SRC"

    SRC="$obf_src" OUT="$OBF_TIGRESS_DIR" CC="$CC" BASE_CFLAGS="$BASE_CFLAGS" EXTRA_CFLAGS="$EXTRA_CFLAGS" LDFLAGS="$LDFLAGS" STRIP="$STRIP" LEVELS="$L" \
      "$SCRIPT_DIR/build.sh"
  done
}

build_llvm_obf() {
  log "Building obfuscated binaries with LLVM Obfuscator"
  require_cmd "$LLVM_OBF"

  if [[ -z "$LLVM_OBF_RAW_ARGS" && -z "$LLVM_OBF_PASSES" ]]; then
    die "LLVM_OBF_PASSES is required unless LLVM_OBF_RAW_ARGS is set."
  fi

  local passes=()
  if [[ -z "$LLVM_OBF_RAW_ARGS" ]]; then
    read -r -a passes <<< "$LLVM_OBF_PASSES"
  fi

  for L in "${LEVELS_ARR[@]}"; do
    local dir="$OBF_LLVM_DIR/$L"
    mkdir -p "$dir"
    local outbin="$dir/bench"

    local args=()
    if [[ -n "$LLVM_OBF_RAW_ARGS" ]]; then
      read -r -a args <<< "$LLVM_OBF_RAW_ARGS"
    else
      if [[ -n "$LLVM_OBF_SEED" ]]; then args+=(-mllvm -seed="$LLVM_OBF_SEED"); fi
      for p in "${passes[@]}"; do
        case "$p" in
          flatten) p="fla" ;;
          bogus) p="bcf" ;;
          substitute|substitution) p="sub" ;;
        esac
        args+=(-mllvm "-${p}")
      done
      if [[ -n "$LLVM_OBF_ARGS" ]]; then
        local extra=()
        read -r -a extra <<< "$LLVM_OBF_ARGS"
        args+=("${extra[@]}")
      fi
    fi

    log "LLVM OBF $L -> $outbin"
    "$LLVM_OBF" $BASE_CFLAGS -"$L" $EXTRA_CFLAGS "$SRC" -o "$outbin" $LDFLAGS "${args[@]}"

    { "$LLVM_OBF" --version | head -n1; } > "$dir/compiler.txt" || true
    echo "$LLVM_OBF $BASE_CFLAGS -$L $EXTRA_CFLAGS $SRC -o $outbin $LDFLAGS ${args[*]}" > "$dir/build_cmd.txt"

    if [[ "${STRIP:-1}" == "1" ]]; then
      strip -s "$outbin" 2>/dev/null || true
    fi
  done
}

run_correctness() {
  log "Running correctness (unobf)"
  OUT="$UNOBF_DIR" "$SCRIPT_DIR/correctness.sh"
  if [[ "$OBF_ENGINE" == "tigress" || "$OBF_ENGINE" == "both" ]]; then
    log "Running correctness (obf: tigress)"
    OUT="$OBF_TIGRESS_DIR" "$SCRIPT_DIR/correctness.sh"
  fi
  if [[ "$OBF_ENGINE" == "llvm" || "$OBF_ENGINE" == "both" ]]; then
    log "Running correctness (obf: llvm)"
    OUT="$OBF_LLVM_DIR" "$SCRIPT_DIR/correctness.sh"
  fi
}

run_measure() {
  log "Measuring runtime (unobf)"
  local tmp_unobf
  tmp_unobf="$(mktemp)"
  OUT="$UNOBF_DIR" JSON_OUT="$tmp_unobf" "$SCRIPT_DIR/measure.sh" > "$OUT_ROOT/runtime_unobf.csv"

  local tmp_tigress tmp_llvm
  if [[ "$OBF_ENGINE" == "tigress" || "$OBF_ENGINE" == "both" ]]; then
    log "Measuring runtime (obf: tigress)"
    tmp_tigress="$(mktemp)"
    OUT="$OBF_TIGRESS_DIR" JSON_OUT="$tmp_tigress" "$SCRIPT_DIR/measure.sh" > "$OUT_ROOT/runtime_obf_tigress.csv"
    jq -n \
      --arg date_utc "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
      --slurpfile unobf "$tmp_unobf" \
      --slurpfile obf "$tmp_tigress" \
      '{date_utc: $date_utc, unobf: $unobf[0], obf: $obf[0]}' > "$RUNTIME_TIGRESS_JSON"
  fi

  if [[ "$OBF_ENGINE" == "llvm" || "$OBF_ENGINE" == "both" ]]; then
    log "Measuring runtime (obf: llvm)"
    tmp_llvm="$(mktemp)"
    OUT="$OBF_LLVM_DIR" JSON_OUT="$tmp_llvm" "$SCRIPT_DIR/measure.sh" > "$OUT_ROOT/runtime_obf_llvm.csv"
    jq -n \
      --arg date_utc "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
      --slurpfile unobf "$tmp_unobf" \
      --slurpfile obf "$tmp_llvm" \
      '{date_utc: $date_utc, unobf: $unobf[0], obf: $obf[0]}' > "$RUNTIME_LLVM_JSON"
  fi

  # Legacy runtime.json: prefer tigress if present, otherwise llvm.
  if [[ -n "${tmp_tigress:-}" ]]; then
    cp "$RUNTIME_TIGRESS_JSON" "$RUNTIME_JSON"
  elif [[ -n "${tmp_llvm:-}" ]]; then
    cp "$RUNTIME_LLVM_JSON" "$RUNTIME_JSON"
  fi

  rm -f "$tmp_unobf" ${tmp_tigress:+$tmp_tigress} ${tmp_llvm:+$tmp_llvm}
}

aggregate_ghidra_dir() {
  local root="$1"
  local out="$2"
  if compgen -G "$root/metrics/*.json" > /dev/null; then
    jq -s 'reduce .[] as $i ({}; .[$i.input_binary] = $i)' "$root"/metrics/*.json > "$out"
  else
    jq -n '{}' > "$out"
  fi
}

run_ghidra() {
  require_cmd jq
  [[ -n "${GHIDRA_HOME:-}" ]] || die "GHIDRA_HOME is required for RUN_GHIDRA=1"
  [[ -n "${GHIDRA_SCRIPTS:-}" ]] || die "GHIDRA_SCRIPTS is required for RUN_GHIDRA=1"

  local force_flag=()
  if [[ "$FORCE_GHIDRA" == "1" ]]; then force_flag=(--force); fi

  log "Ghidra analysis (unobf)"
  "$SCRIPT_DIR/evaluate.sh" --recursive "${force_flag[@]}" "$UNOBF_DIR" "$GHIDRA_UNOBF_DIR"

  local tmp_unobf tmp_tigress tmp_llvm
  tmp_unobf="$(mktemp)"
  aggregate_ghidra_dir "$GHIDRA_UNOBF_DIR" "$tmp_unobf"

  if [[ "$OBF_ENGINE" == "tigress" || "$OBF_ENGINE" == "both" ]]; then
    log "Ghidra analysis (obf: tigress)"
    "$SCRIPT_DIR/evaluate.sh" --recursive "${force_flag[@]}" "$OBF_TIGRESS_DIR" "$GHIDRA_TIGRESS_DIR"
    tmp_tigress="$(mktemp)"
    aggregate_ghidra_dir "$GHIDRA_TIGRESS_DIR" "$tmp_tigress"
    jq -n \
      --arg date_utc "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
      --slurpfile unobf "$tmp_unobf" \
      --slurpfile obf "$tmp_tigress" \
      '{date_utc: $date_utc, unobf: $unobf[0], obf: $obf[0]}' > "$GHIDRA_TIGRESS_JSON"
  fi

  if [[ "$OBF_ENGINE" == "llvm" || "$OBF_ENGINE" == "both" ]]; then
    log "Ghidra analysis (obf: llvm)"
    "$SCRIPT_DIR/evaluate.sh" --recursive "${force_flag[@]}" "$OBF_LLVM_DIR" "$GHIDRA_LLVM_DIR"
    tmp_llvm="$(mktemp)"
    aggregate_ghidra_dir "$GHIDRA_LLVM_DIR" "$tmp_llvm"
    jq -n \
      --arg date_utc "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
      --slurpfile unobf "$tmp_unobf" \
      --slurpfile obf "$tmp_llvm" \
      '{date_utc: $date_utc, unobf: $unobf[0], obf: $obf[0]}' > "$GHIDRA_LLVM_JSON"
  fi

  # Legacy ghidra.json: prefer tigress if present, otherwise llvm.
  if [[ -n "${tmp_tigress:-}" ]]; then
    cp "$GHIDRA_TIGRESS_JSON" "$GHIDRA_JSON"
  elif [[ -n "${tmp_llvm:-}" ]]; then
    cp "$GHIDRA_LLVM_JSON" "$GHIDRA_JSON"
  fi

  rm -f "$tmp_unobf" ${tmp_tigress:+$tmp_tigress} ${tmp_llvm:+$tmp_llvm}
}

run_split_pipeline() {
  require_cmd jq
  if [[ "$OBF_ENGINE" == "llvm" ]]; then
    die "split mode currently supports only tigress (OBF_ENGINE=llvm not supported)"
  fi
  if [[ "$OBF_ENGINE" == "both" ]]; then
    log "split mode: using tigress only (llvm not supported in split mode)"
  fi
  local split_root="$OUT_ROOT/split"
  local records_runtime
  local records_ghidra
  records_runtime="$(mktemp)"
  records_ghidra="$(mktemp)"
  : > "$records_runtime"
  : > "$records_ghidra"

  for op in "${OPS_ARR[@]}"; do
    local op_tag
    op_tag="$(printf "op%02d" "$op")"
    local op_root="$split_root/$op_tag"
    local unobf_dir="$op_root/unobf"
    local obf_dir="$op_root/obf"
    local obf_src_dir="$op_root/obf_src"
    local ghidra_unobf_dir="$op_root/ghidra/unobf"
    local ghidra_obf_dir="$op_root/ghidra/obf"

    mkdir -p "$op_root" "$obf_src_dir"

    local split_cflags="$EXTRA_CFLAGS -DSINGLE_OP=$op -ffunction-sections -fdata-sections"
    local split_ldflags="$LDFLAGS -Wl,--gc-sections"

    if [[ "$RUN_BUILD" == "1" ]]; then
      log "Building unobfuscated (split $op_tag)"
      SRC="$SRC" OUT="$unobf_dir" CC="$CC" BASE_CFLAGS="$BASE_CFLAGS" EXTRA_CFLAGS="$split_cflags" LDFLAGS="$split_ldflags" STRIP="$STRIP" LEVELS="$LEVELS_STR" \
        "$SCRIPT_DIR/build.sh"
    fi

    if [[ "$RUN_OBF" == "1" ]]; then
      log "Building obfuscated (split $op_tag) with Tigress"
      require_cmd "$TIGRESS"

      if [[ -z "$TIGRESS_RAW_ARGS" && -z "$TIGRESS_TRANSFORMS" ]]; then
        die "TIGRESS_TRANSFORMS is required unless TIGRESS_RAW_ARGS is set."
      fi

      local op_func
      op_func="$(op_func_name "$op")"
      local tigress_functions="$TIGRESS_FUNCTIONS"
      if [[ -z "$tigress_functions" ]]; then
        tigress_functions="main"
        if [[ -n "$op_func" ]]; then tigress_functions+=",${op_func}"; fi
      fi

      local wrapper="$obf_src_dir/wrapper.c"
      printf '#define SINGLE_OP %s\n#include "%s"\n' "$op" "$SRC" > "$wrapper"

      local transforms=()
      if [[ -z "$TIGRESS_RAW_ARGS" ]]; then
        read -r -a transforms <<< "$TIGRESS_TRANSFORMS"
      fi

      local obf_src="$obf_src_dir/unified_obf.c"
      local tigress_args=()
      if [[ -n "$TIGRESS_RAW_ARGS" ]]; then
        read -r -a tigress_args <<< "$TIGRESS_RAW_ARGS"
      else
        if [[ -n "$TIGRESS_ENV" ]]; then tigress_args+=(--Environment="$TIGRESS_ENV"); fi
        if [[ -n "$TIGRESS_SEED" ]]; then tigress_args+=(--Seed="$TIGRESS_SEED"); fi
        for t in "${transforms[@]}"; do
          tigress_args+=(--Transform="$t")
          if [[ -n "$tigress_functions" ]]; then
            tigress_args+=(--Functions="$tigress_functions")
          fi
        done
        if [[ -n "$TIGRESS_ARGS" ]]; then
          local extra=()
          read -r -a extra <<< "$TIGRESS_ARGS"
          tigress_args+=("${extra[@]}")
        fi
      fi

      log "Tigress $op_tag -> $obf_src"
      printf '%q ' "$TIGRESS" "${tigress_args[@]}" --out="$obf_src" "$wrapper" > "$obf_src_dir/tigress_cmd.txt"
      "$TIGRESS" "${tigress_args[@]}" --out="$obf_src" "$wrapper"

      SRC="$obf_src" OUT="$obf_dir" CC="$CC" BASE_CFLAGS="$BASE_CFLAGS" EXTRA_CFLAGS="$EXTRA_CFLAGS -ffunction-sections -fdata-sections" LDFLAGS="$split_ldflags" STRIP="$STRIP" LEVELS="$LEVELS_STR" \
        "$SCRIPT_DIR/build.sh"
    fi

    if [[ "$RUN_CORRECTNESS" == "1" ]]; then
      log "Running correctness (split $op_tag unobf)"
      OUT="$unobf_dir" OP="$op" "$SCRIPT_DIR/correctness.sh"
      log "Running correctness (split $op_tag obf)"
      OUT="$obf_dir" OP="$op" "$SCRIPT_DIR/correctness.sh"
    fi

    if [[ "$RUN_MEASURE" == "1" ]]; then
      log "Measuring runtime (split $op_tag)"
      local tmp_unobf
      local tmp_obf
      tmp_unobf="$(mktemp)"
      tmp_obf="$(mktemp)"
      OUT="$unobf_dir" OP="$op" JSON_OUT="$tmp_unobf" "$SCRIPT_DIR/measure.sh" > "$op_root/runtime_unobf.csv"
      OUT="$obf_dir" OP="$op" JSON_OUT="$tmp_obf" "$SCRIPT_DIR/measure.sh" > "$op_root/runtime_obf.csv"

      jq -n \
        --arg op "$op_tag" \
        --slurpfile unobf "$tmp_unobf" \
        --slurpfile obf "$tmp_obf" \
        '{key: $op, value: {unobf: $unobf[0], obf: $obf[0]}}' >> "$records_runtime"

      rm -f "$tmp_unobf" "$tmp_obf"
    fi

    if [[ "$RUN_GHIDRA" == "1" ]]; then
      [[ -n "${GHIDRA_HOME:-}" ]] || die "GHIDRA_HOME is required for RUN_GHIDRA=1"
      [[ -n "${GHIDRA_SCRIPTS:-}" ]] || die "GHIDRA_SCRIPTS is required for RUN_GHIDRA=1"
      local force_flag=()
      if [[ "$FORCE_GHIDRA" == "1" ]]; then force_flag=(--force); fi

      log "Ghidra analysis (split $op_tag unobf)"
      "$SCRIPT_DIR/evaluate.sh" --recursive "${force_flag[@]}" "$unobf_dir" "$ghidra_unobf_dir"
      log "Ghidra analysis (split $op_tag obf)"
      "$SCRIPT_DIR/evaluate.sh" --recursive "${force_flag[@]}" "$obf_dir" "$ghidra_obf_dir"

      local tmp_g_unobf tmp_g_obf
      tmp_g_unobf="$(mktemp)"
      tmp_g_obf="$(mktemp)"
      aggregate_ghidra_dir "$ghidra_unobf_dir" "$tmp_g_unobf"
      aggregate_ghidra_dir "$ghidra_obf_dir" "$tmp_g_obf"

      jq -n \
        --arg op "$op_tag" \
        --slurpfile unobf "$tmp_g_unobf" \
        --slurpfile obf "$tmp_g_obf" \
        '{key: $op, value: {unobf: $unobf[0], obf: $obf[0]}}' >> "$records_ghidra"

      rm -f "$tmp_g_unobf" "$tmp_g_obf"
    fi
  done

  if [[ "$RUN_MEASURE" == "1" ]]; then
    local ops_runtime
    ops_runtime="$(mktemp)"
    jq -s 'reduce .[] as $i ({}; .[$i.key] = $i.value)' "$records_runtime" > "$ops_runtime"
    jq -n \
      --arg date_utc "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
      --slurpfile ops "$ops_runtime" \
      '{date_utc: $date_utc, ops: $ops[0]}' > "$RUNTIME_SPLIT_JSON"
    rm -f "$ops_runtime"
    log "Runtime JSON (split): $RUNTIME_SPLIT_JSON"
  fi

  if [[ "$RUN_GHIDRA" == "1" ]]; then
    local ops_ghidra
    ops_ghidra="$(mktemp)"
    jq -s 'reduce .[] as $i ({}; .[$i.key] = $i.value)' "$records_ghidra" > "$ops_ghidra"
    jq -n \
      --arg date_utc "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
      --slurpfile ops "$ops_ghidra" \
      '{date_utc: $date_utc, ops: $ops[0]}' > "$GHIDRA_SPLIT_JSON"
    rm -f "$ops_ghidra"
    log "Ghidra JSON (split):  $GHIDRA_SPLIT_JSON"
  fi

  rm -f "$records_runtime" "$records_ghidra"
}

require_cmd "$CC"

case "$MODE" in
  unified)
    if [[ "$RUN_BUILD" == "1" ]]; then build_unobf; fi
    if [[ "$RUN_OBF" == "1" ]]; then
      if [[ "$OBF_ENGINE" == "tigress" || "$OBF_ENGINE" == "both" ]]; then build_tigress; fi
      if [[ "$OBF_ENGINE" == "llvm" || "$OBF_ENGINE" == "both" ]]; then build_llvm_obf; fi
    fi
    if [[ "$RUN_CORRECTNESS" == "1" ]]; then run_correctness; fi
    if [[ "$RUN_MEASURE" == "1" ]]; then run_measure; fi
    if [[ "$RUN_GHIDRA" == "1" ]]; then run_ghidra; fi

    log "Done."
    log "Runtime JSON: $RUNTIME_JSON"
    log "Ghidra JSON:  $GHIDRA_JSON"
    ;;
  split)
    run_split_pipeline
    log "Done (split mode)."
    ;;
  split-light)
    RUN_OBF=0
    RUN_CORRECTNESS=0
    RUN_MEASURE=0
    RUN_GHIDRA=0
    run_split_pipeline
    log "Done (split-light mode)."
    ;;
  *)
    die "Unknown MODE: $MODE (use unified or split)"
    ;;
esac

if [[ "$REPORT" == "1" ]]; then
  if command -v python3 >/dev/null 2>&1; then
    python3 "$SCRIPT_DIR/report_unified_vs_split.py" --out-root "$OUT_ROOT" --out "$REPORT_JSON"
    log "Report JSON:  $REPORT_JSON"
  else
    die "REPORT=1 requires python3"
  fi
fi

if [[ "$CONFUSION_REPORT" == "1" ]]; then
  if command -v python3 >/dev/null 2>&1; then
    python3 "$SCRIPT_DIR/confusion_score.py" \
      --runtime-tigress "$OUT_ROOT/runtime_tigress.json" \
      --runtime-llvm "$OUT_ROOT/runtime_llvm.json" \
      --ghidra-tigress "$OUT_ROOT/ghidra_tigress.json" \
      --ghidra-llvm "$OUT_ROOT/ghidra_llvm.json" \
      --runtime "$OUT_ROOT/runtime.json" \
      --ghidra "$OUT_ROOT/ghidra.json" \
      --out-json "$CONFUSION_JSON" \
      --out-md "$CONFUSION_MD"
    log "Confusion JSON: $CONFUSION_JSON"
    log "Confusion MD:   $CONFUSION_MD"
  else
    die "CONFUSION_REPORT=1 requires python3"
  fi
fi
