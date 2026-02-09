#!/usr/bin/env bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"

usage() {
  cat <<EOF2
Usage:
  $0

Runs the pipeline on the simple-c-suite folder (one program per file).
Builds unobfuscated + obfuscated binaries (Tigress/LLVM), generates per-program inputs,
measures runtime, and collects JSON outputs and per-run artifacts.

Key env vars:
  SUITE_DIR          Source folder (default: $SCRIPT_DIR/c_programs/simple-c-suite)
  OUT_ROOT           Output root (default: $ROOT_DIR/artifacts/suite)
  PROGRAMS           Space-separated base names without .c (default: all in SUITE_DIR)
  LEVELS             Optimization levels (default: "O0 O1 O2 O3")
  OBF_ENGINE         tigress (default), llvm, or both
  RUN_GHIDRA         1 to run Ghidra (default: 1)

Input generation:
  SEED               Base seed (default: 1)
  MODE_INPUT         deterministic (default) or random
  N, AVG_N, G         Sizes for arrays/avg/graph (defaults: 1000/1000/40)

Limits (for config_object):
  MAX_RUNTIME_RATIO  e.g. 1.5
  MAX_SIZE_RATIO     e.g. 3.0

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

Examples:
  OBF_ENGINE=both TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" LLVM_OBF_PASSES="fla bcf sub" \
  $0
EOF2
}

if [[ "${1:-}" == "-h" || "${1:-}" == "--help" ]]; then
  usage
  exit 0
fi

log() { echo "[suite] $*"; }
die() { echo "Error: $*" >&2; exit 1; }

require_cmd() {
  command -v "$1" >/dev/null 2>&1 || die "Missing required command: $1"
}

SUITE_DIR="${SUITE_DIR:-$SCRIPT_DIR/c_programs/simple-c-suite}"
OUT_ROOT="${OUT_ROOT:-$ROOT_DIR/artifacts/suite}"
PROGRAMS="${PROGRAMS:-}"
LEVELS_STR="${LEVELS:-O0 O1 O2 O3}"
OBF_ENGINE="${OBF_ENGINE:-tigress}"
RUN_GHIDRA="${RUN_GHIDRA:-1}"

SEED="${SEED:-1}"
MODE_INPUT="${MODE_INPUT:-deterministic}"
N="${N:-1000}"
AVG_N="${AVG_N:-1000}"
G="${G:-40}"

MAX_RUNTIME_RATIO="${MAX_RUNTIME_RATIO:-}"
MAX_SIZE_RATIO="${MAX_SIZE_RATIO:-}"

CC="${CC:-gcc}"
BASE_CFLAGS="${BASE_CFLAGS:- -std=c11 -Wall -Wextra -pedantic}"
EXTRA_CFLAGS="${EXTRA_CFLAGS:-}"
LDFLAGS="${LDFLAGS:-}"
STRIP="${STRIP:-1}"

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

read -r -a LEVELS_ARR <<< "$LEVELS_STR"

mkdir -p "$OUT_ROOT"

if [[ -z "$PROGRAMS" ]]; then
  PROGRAMS="$(find "$SUITE_DIR" -maxdepth 1 -type f -name '*.c' -printf '%f\n' \
    | sed 's/\.c$//' \
    | grep -v '^is_prime$' \
    | sort)"
fi

read -r -a PROGRAMS_ARR <<< "$PROGRAMS"

INPUT_DIR="$OUT_ROOT/inputs"
UNOBF_DIR="$OUT_ROOT/unobf"
OBF_TIGRESS_DIR="$OUT_ROOT/obf_tigress"
OBF_TIGRESS_SRC_DIR="$OUT_ROOT/obf_tigress_src"
OBF_LLVM_DIR="$OUT_ROOT/obf_llvm"
RUNS_DIR="$OUT_ROOT/runs"

RUNTIME_JSON="$OUT_ROOT/runtime_suite.json"
RUNTIME_TIGRESS_JSON="$OUT_ROOT/runtime_suite_tigress.json"
RUNTIME_LLVM_JSON="$OUT_ROOT/runtime_suite_llvm.json"

require_cmd "$CC"
require_cmd jq
require_cmd python3

build_unobf_prog() {
  local prog="$1"
  local src="$SUITE_DIR/$prog.c"
  local out="$UNOBF_DIR/$prog"
  mkdir -p "$out"
  BIN_NAME="$prog" SRC="$src" OUT="$out" CC="$CC" BASE_CFLAGS="$BASE_CFLAGS" EXTRA_CFLAGS="$EXTRA_CFLAGS" LDFLAGS="$LDFLAGS" STRIP="$STRIP" LEVELS="$LEVELS_STR" \
    "$SCRIPT_DIR/build.sh"
}

build_tigress_prog() {
  local prog="$1"
  require_cmd "$TIGRESS"
  if [[ -z "$TIGRESS_RAW_ARGS" && -z "$TIGRESS_TRANSFORMS" ]]; then
    die "TIGRESS_TRANSFORMS is required unless TIGRESS_RAW_ARGS is set."
  fi
  local src="$SUITE_DIR/$prog.c"
  for L in "${LEVELS_ARR[@]}"; do
    local src_dir="$OBF_TIGRESS_SRC_DIR/$prog/$L"
    mkdir -p "$src_dir"
    local obf_src="$src_dir/${prog}_obf.c"

    local tigress_args=()
    if [[ -n "$TIGRESS_RAW_ARGS" ]]; then
      read -r -a tigress_args <<< "$TIGRESS_RAW_ARGS"
    else
      if [[ -n "$TIGRESS_ENV" ]]; then tigress_args+=(--Environment="$TIGRESS_ENV"); fi
      if [[ -n "$TIGRESS_SEED" ]]; then tigress_args+=(--Seed="$TIGRESS_SEED"); fi
      read -r -a transforms <<< "$TIGRESS_TRANSFORMS"
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

    "$TIGRESS" "${tigress_args[@]}" --out="$obf_src" "$src"
    printf '%q ' "$TIGRESS" "${tigress_args[@]}" --out="$obf_src" "$src" > "$src_dir/tigress_cmd.txt"

    BIN_NAME="$prog" SRC="$obf_src" OUT="$OBF_TIGRESS_DIR/$prog" CC="$CC" BASE_CFLAGS="$BASE_CFLAGS" EXTRA_CFLAGS="$EXTRA_CFLAGS" LDFLAGS="$LDFLAGS" STRIP="$STRIP" LEVELS="$L" \
      "$SCRIPT_DIR/build.sh"
  done
}

build_llvm_prog() {
  local prog="$1"
  require_cmd "$LLVM_OBF"
  if [[ -z "$LLVM_OBF_RAW_ARGS" && -z "$LLVM_OBF_PASSES" ]]; then
    die "LLVM_OBF_PASSES is required unless LLVM_OBF_RAW_ARGS is set."
  fi
  local src="$SUITE_DIR/$prog.c"
  for L in "${LEVELS_ARR[@]}"; do
    local dir="$OBF_LLVM_DIR/$prog/$L"
    mkdir -p "$dir"
    local outbin="$dir/$prog"

    local args=()
    if [[ -n "$LLVM_OBF_RAW_ARGS" ]]; then
      read -r -a args <<< "$LLVM_OBF_RAW_ARGS"
    else
      if [[ -n "$LLVM_OBF_SEED" ]]; then args+=(-mllvm -seed="$LLVM_OBF_SEED"); fi
      read -r -a passes <<< "$LLVM_OBF_PASSES"
      for p in "${passes[@]}"; do
        case "$p" in
          flatten) p="fla" ;;
          bogus) p="bcf" ;;
          substitute|substitution) p="sub" ;;
        esac
        args+=(-mllvm "-$p")
      done
      if [[ -n "$LLVM_OBF_ARGS" ]]; then
        local extra=()
        read -r -a extra <<< "$LLVM_OBF_ARGS"
        args+=("${extra[@]}")
      fi
    fi

    "$LLVM_OBF" $BASE_CFLAGS -"$L" $EXTRA_CFLAGS "$src" -o "$outbin" $LDFLAGS "${args[@]}"
    { "$LLVM_OBF" --version | head -n1; } > "$dir/compiler.txt" || true
    echo "$LLVM_OBF $BASE_CFLAGS -$L $EXTRA_CFLAGS $src -o $outbin $LDFLAGS ${args[*]}" > "$dir/build_cmd.txt"
    if [[ "${STRIP:-1}" == "1" ]]; then
      strip -s "$outbin" 2>/dev/null || true
    fi
  done
}

gen_input() {
  local prog="$1"
  mkdir -p "$INPUT_DIR"
  local out="$INPUT_DIR/${prog}.txt"
  python3 "$SCRIPT_DIR/gen_inputs_suite.py" --prog "$prog" --seed "$SEED" --mode "$MODE_INPUT" --n "$N" --avg_n "$AVG_N" --g "$G" --out "$out"
  echo "$out"
}

make_config_json() {
  local prog="$1" level="$2" tool="$3" out="$4"
  local t_enabled="false" l_enabled="false"
  local t_transforms="" t_functions="" t_args="" t_raw="" t_seed=""
  local l_passes="" l_args="" l_raw="" l_seed=""

  if [[ "$tool" == "tigress" ]]; then
    t_enabled="true"
    t_transforms="$TIGRESS_TRANSFORMS"
    t_functions="$TIGRESS_FUNCTIONS"
    t_args="$TIGRESS_ARGS"
    t_raw="$TIGRESS_RAW_ARGS"
    t_seed="$TIGRESS_SEED"
  fi
  if [[ "$tool" == "llvm" ]]; then
    l_enabled="true"
    l_passes="$LLVM_OBF_PASSES"
    l_args="$LLVM_OBF_ARGS"
    l_raw="$LLVM_OBF_RAW_ARGS"
    l_seed="$LLVM_OBF_SEED"
  fi

  jq -n \
    --arg program "$prog" \
    --arg opt_level "$level" \
    --arg seed "$SEED" \
    --arg t_enabled "$t_enabled" \
    --arg t_transforms "$t_transforms" \
    --arg t_functions "$t_functions" \
    --arg t_args "$t_args" \
    --arg t_raw "$t_raw" \
    --arg t_seed "$t_seed" \
    --arg l_enabled "$l_enabled" \
    --arg l_passes "$l_passes" \
    --arg l_args "$l_args" \
    --arg l_raw "$l_raw" \
    --arg l_seed "$l_seed" \
    --arg max_runtime_ratio "$MAX_RUNTIME_RATIO" \
    --arg max_size_ratio "$MAX_SIZE_RATIO" \
    'def split_ws(s): if s=="" then [] else (s|split(" ")|map(select(length>0))) end;
     def split_csv(s): if s=="" then [] else (s|split(",")|map(select(length>0))) end;
     {
       program: $program,
       opt_level: $opt_level,
       seed: (try ($seed|tonumber) catch $seed),
       tigress: {
         enabled: ($t_enabled=="true"),
         transforms: split_ws($t_transforms),
         functions: split_csv($t_functions),
         extra_args: split_ws($t_args),
         raw_args: split_ws($t_raw),
         seed: (if $t_seed=="" then null else ($t_seed|tonumber) end)
       },
       llvm_obf: {
         enabled: ($l_enabled=="true"),
         passes: split_ws($l_passes),
         extra_args: split_ws($l_args),
         raw_args: split_ws($l_raw),
         seed: (if $l_seed=="" then null else ($l_seed|tonumber) end)
       },
       limits: {
         max_runtime_ratio: (if $max_runtime_ratio=="" then null else ($max_runtime_ratio|tonumber) end),
         max_size_ratio: (if $max_size_ratio=="" then null else ($max_size_ratio|tonumber) end)
       }
     }' > "$out"
}

measure_runtime() {
  local bin="$1" input="$2" out_json="$3" config_id="$4" config_path="$5" prog="$6" level="$7" tool="$8"

  local out="$OUT_ROOT/.tmp_${prog}_${tool}_${level}.out"
  local tsv="$OUT_ROOT/.tmp_${prog}_${tool}_${level}.time"

  /usr/bin/time -f "%e %M" -o "$tsv" "$bin" < "$input" > "$out"
  local sec rss h bytes
  sec="$(awk '{print $1}' "$tsv")"
  rss="$(awk '{print $2}' "$tsv")"
  h="$(sha256sum "$out" | awk '{print $1}')"
  bytes="$(stat -c%s "$bin" 2>/dev/null || stat -f%z "$bin")"

  jq -n \
    --slurpfile cfg "$config_path" \
    --arg config_id "$config_id" \
    --arg program "$prog" \
    --arg opt_level "$level" \
    --arg tool "$tool" \
    --arg binary "$(realpath "$bin")" \
    --argjson bin_bytes "$bytes" \
    --argjson seconds "$sec" \
    --argjson maxrss_kb "$rss" \
    --arg sha256_stdout "$h" \
    '{
      config_id: $config_id,
      config_object: $cfg[0],
      program: $program,
      opt_level: $opt_level,
      tool: $tool,
      metrics: {
        binary: $binary,
        bin_bytes: $bin_bytes,
        seconds: $seconds,
        maxrss_kb: $maxrss_kb,
        sha256_stdout: $sha256_stdout
      }
    }' > "$out_json"
}

run_ghidra_one() {
  local bin="$1" run_dir="$2" config_id="$3" config_path="$4"
  if [[ "$RUN_GHIDRA" != "1" ]]; then
    jq -n --slurpfile cfg "$config_path" --arg config_id "$config_id" \
      '{config_id: $config_id, config_object: $cfg[0], skipped: true}' > "$run_dir/ghidra.json"
    return 0
  fi
  if [[ -z "${GHIDRA_HOME:-}" || -z "${GHIDRA_SCRIPTS:-}" ]]; then
    die "GHIDRA_HOME and GHIDRA_SCRIPTS must be set (or auto-detected) for RUN_GHIDRA=1"
  fi

  local outroot="$run_dir/.ghidra"
  mkdir -p "$outroot"
  "$SCRIPT_DIR/evaluate.sh" --force "$bin" "$outroot"

  local metrics_file
  metrics_file="$(find "$outroot/metrics" -type f -name '*.json' | head -n1 || true)"
  local decomp_file
  decomp_file="$(find "$outroot/decompiled" -type f -name '*.c' | head -n1 || true)"

  if [[ -n "$decomp_file" ]]; then
    cp "$decomp_file" "$run_dir/decompiled.c"
  else
    : > "$run_dir/decompiled.c"
  fi

  if [[ -n "$metrics_file" ]]; then
    jq --slurpfile cfg "$config_path" --arg config_id "$config_id" \
      '. + {config_id: $config_id, config_object: $cfg[0]}' "$metrics_file" > "$run_dir/ghidra.json"
  else
    jq -n --slurpfile cfg "$config_path" --arg config_id "$config_id" \
      '{config_id: $config_id, config_object: $cfg[0], error: "ghidra_metrics_missing"}' > "$run_dir/ghidra.json"
  fi

  rm -rf "$outroot"
}

make_metrics_json() {
  local run_dir="$1" config_id="$2" config_path="$3" diff_bytes="$4"
  jq -n \
    --slurpfile cfg "$config_path" \
    --slurpfile rt "$run_dir/runtime.json" \
    --slurpfile gh "$run_dir/ghidra.json" \
    --arg config_id "$config_id" \
    --argjson diff_bytes "$diff_bytes" \
    '{
      config_id: $config_id,
      config_object: $cfg[0],
      runtime: $rt[0],
      ghidra: $gh[0],
      diff: {
        diff_bytes: $diff_bytes,
        diff_patch: "diff.patch"
      }
    }' > "$run_dir/metrics.json"
}

# Map of unobf decompiled files per program+level
declare -A BASE_DECOMP

tmp_all="$(mktemp)"
: > "$tmp_all"

for prog in "${PROGRAMS_ARR[@]}"; do
  log "Program: $prog"
  build_unobf_prog "$prog"

  if [[ "$OBF_ENGINE" == "tigress" || "$OBF_ENGINE" == "both" ]]; then
    build_tigress_prog "$prog"
  fi
  if [[ "$OBF_ENGINE" == "llvm" || "$OBF_ENGINE" == "both" ]]; then
    build_llvm_prog "$prog"
  fi

  input="$(gen_input "$prog")"

  for level in "${LEVELS_ARR[@]}"; do
    for tool in unobf tigress llvm; do
      if [[ "$tool" == "tigress" && !( "$OBF_ENGINE" == "tigress" || "$OBF_ENGINE" == "both" ) ]]; then
        continue
      fi
      if [[ "$tool" == "llvm" && !( "$OBF_ENGINE" == "llvm" || "$OBF_ENGINE" == "both" ) ]]; then
        continue
      fi

      local_dir=""
      case "$tool" in
        unobf) local_dir="$UNOBF_DIR/$prog" ;;
        tigress) local_dir="$OBF_TIGRESS_DIR/$prog" ;;
        llvm) local_dir="$OBF_LLVM_DIR/$prog" ;;
      esac
      bin="$local_dir/$level/$prog"
      [[ -x "$bin" ]] || continue

      cfg_tmp="$(mktemp)"
      make_config_json "$prog" "$level" "$tool" "$cfg_tmp"
      canon_tmp="$(mktemp)"
      config_id="$(python3 "$SCRIPT_DIR/config_id.py" --in "$cfg_tmp" --out "$canon_tmp")"
      run_dir="$RUNS_DIR/$prog/$level/$config_id"
      mkdir -p "$run_dir"
      mv "$canon_tmp" "$run_dir/config.json"
      rm -f "$cfg_tmp"

      cp "$bin" "$run_dir/binary"

      measure_runtime "$run_dir/binary" "$input" "$run_dir/runtime.json" "$config_id" "$run_dir/config.json" "$prog" "$level" "$tool"

      run_ghidra_one "$run_dir/binary" "$run_dir" "$config_id" "$run_dir/config.json"

      diff_bytes=0
      : > "$run_dir/diff.patch"
      key="$prog|$level"
      if [[ "$tool" == "unobf" ]]; then
        if [[ -s "$run_dir/decompiled.c" ]]; then
          BASE_DECOMP["$key"]="$run_dir/decompiled.c"
        fi
      else
        if [[ -n "${BASE_DECOMP[$key]:-}" && -s "$run_dir/decompiled.c" ]]; then
          diff -u "${BASE_DECOMP[$key]}" "$run_dir/decompiled.c" > "$run_dir/diff.patch" || true
          diff_bytes="$(wc -c < "$run_dir/diff.patch" | tr -d ' ')"
        fi
      fi

      make_metrics_json "$run_dir" "$config_id" "$run_dir/config.json" "$diff_bytes"

      jq -n \
        --arg program "$prog" \
        --arg opt_level "$level" \
        --arg tool "$tool" \
        --arg run_dir "$(realpath "$run_dir")" \
        --slurpfile cfg "$run_dir/config.json" \
        --slurpfile rt "$run_dir/runtime.json" \
        --slurpfile gh "$run_dir/ghidra.json" \
        '{
          program: $program,
          opt_level: $opt_level,
          tool: $tool,
          run_dir: $run_dir,
          config_id: $rt[0].config_id,
          config_object: $cfg[0],
          runtime: $rt[0],
          ghidra: $gh[0]
        }' >> "$tmp_all"
    done
  done
done

jq -s '
  reduce .[] as $i ({};
    .[$i.program] //= {} |
    .[$i.program][$i.tool] //= {} |
    .[$i.program][$i.tool][$i.opt_level] = {
      config_id: $i.config_id,
      config_object: $i.config_object,
      run_dir: $i.run_dir,
      runtime: $i.runtime,
      ghidra: $i.ghidra
    }
  )' "$tmp_all" > "$RUNTIME_JSON"

if [[ "$OBF_ENGINE" == "tigress" || "$OBF_ENGINE" == "both" ]]; then
  jq -s '
    reduce .[] as $i ({};
      if $i.tool == "tigress" or $i.tool == "unobf" then
        .[$i.program] //= {} |
        .[$i.program][$i.tool] //= {} |
        .[$i.program][$i.tool][$i.opt_level] = {
          config_id: $i.config_id,
          config_object: $i.config_object,
          run_dir: $i.run_dir,
          runtime: $i.runtime,
          ghidra: $i.ghidra
        }
      else . end
    )' "$tmp_all" > "$RUNTIME_TIGRESS_JSON"
fi

if [[ "$OBF_ENGINE" == "llvm" || "$OBF_ENGINE" == "both" ]]; then
  jq -s '
    reduce .[] as $i ({};
      if $i.tool == "llvm" or $i.tool == "unobf" then
        .[$i.program] //= {} |
        .[$i.program][$i.tool] //= {} |
        .[$i.program][$i.tool][$i.opt_level] = {
          config_id: $i.config_id,
          config_object: $i.config_object,
          run_dir: $i.run_dir,
          runtime: $i.runtime,
          ghidra: $i.ghidra
        }
      else . end
    )' "$tmp_all" > "$RUNTIME_LLVM_JSON"
fi

rm -f "$tmp_all"
log "Done. Runs in: $RUNS_DIR"
log "Runtime JSON: $RUNTIME_JSON"
