#!/usr/bin/env bash
set -euo pipefail

# Required env (best-effort defaults):
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
ROOT_DIR="$(cd "$SCRIPT_DIR/.." && pwd)"

if [[ -z "${GHIDRA_HOME:-}" && -d "$ROOT_DIR/ghidra_11.4.2_PUBLIC" ]]; then
  GHIDRA_HOME="$ROOT_DIR/ghidra_11.4.2_PUBLIC"
fi
if [[ -z "${GHIDRA_SCRIPTS:-}" && -d "$SCRIPT_DIR/ghidra_scripts" ]]; then
  GHIDRA_SCRIPTS="$SCRIPT_DIR/ghidra_scripts"
fi

: "${GHIDRA_HOME:?Set GHIDRA_HOME to your Ghidra folder}"
: "${GHIDRA_SCRIPTS:?Set GHIDRA_SCRIPTS to your scripts folder (contains decompile_all.py)}"

ANALYZE="$GHIDRA_HOME/support/analyzeHeadless"
SCRIPT_NAME="decompile_all.py"

FORCE=0
RECURSIVE=0

usage() {
  cat <<EOF
Usage:
  $0 [--force] [--recursive] <binary_or_dir> [out_root]

Env required:
  GHIDRA_HOME     e.g. /path/to/ghidra_11.4.2_PUBLIC
  GHIDRA_SCRIPTS  e.g. /home/peter/ghidra_scripts (must contain decompile_all.py)

Examples:
  GHIDRA_HOME=... GHIDRA_SCRIPTS=... $0 ./mybin ./out
  GHIDRA_HOME=... GHIDRA_SCRIPTS=... $0 ./bin_dir ./out
  GHIDRA_HOME=... GHIDRA_SCRIPTS=... $0 --force ./bin_dir ./out
  GHIDRA_HOME=... GHIDRA_SCRIPTS=... $0 --recursive ./bin_dir ./out
EOF
}

if [[ $# -lt 1 ]]; then usage; exit 1; fi
while [[ "${1:-}" == --* ]]; do
  case "$1" in
    --force) FORCE=1; shift ;;
    --recursive) RECURSIVE=1; shift ;;
    --help|-h) usage; exit 0 ;;
    *) break ;;
  esac
done
TARGET="${1:-}"; shift || true
# OUTROOT="${1:-./ghidra_out}"
OUTROOT="${1:-"$HOME/Desktop/Master Thesis/GHIDRA-OUT"}"


if [[ ! -x "$ANALYZE" ]]; then
  echo "Error: analyzeHeadless not executable at: $ANALYZE"
  exit 1
fi
if [[ ! -f "$GHIDRA_SCRIPTS/$SCRIPT_NAME" ]]; then
  echo "Error: missing $SCRIPT_NAME in GHIDRA_SCRIPTS=$GHIDRA_SCRIPTS"
  exit 1
fi
command -v jq >/dev/null || { echo "Error: jq not found. Install jq."; exit 1; }

mkdir -p "$OUTROOT"
mkdir -p "$OUTROOT/decompiled" "$OUTROOT/metrics" "$OUTROOT/logs"

is_elf() {
  local f="$1"
  file "$f" 2>/dev/null | grep -q 'ELF'
}

sanitize_id() {
  # stable file id for output naming
  local path="$1"
  local base
  base="$(basename "$path")"
  base="${base// /_}"
  base="${base//[^A-Za-z0-9_.-]/_}"
  # add a short hash to avoid collisions
  local h
  h="$(sha256sum "$path" | awk '{print substr($1,1,12)}')"
  echo "${base}__${h}"
}

analyze_one() {
  local bin="$1"
  local id
  id="$(sanitize_id "$bin")"

  local decomp_out="$OUTROOT/decompiled/${id}.c"
  local json_out="$OUTROOT/metrics/${id}.json"
  local log_out="$OUTROOT/logs/${id}.log"

  if [[ -f "$json_out" && $FORCE -eq 0 ]]; then
    echo "[=] Skip (already analyzed): $bin"
    return 0
  fi

  if ! is_elf "$bin"; then
    echo "[!] Skip (not ELF): $bin"
    return 0
  fi

  # Unique temp project root per binary; avoid collisions & keep outroot tidy
  local projroot
  projroot="$(mktemp -d "$OUTROOT/.proj_${id}.XXXXXX")"
  local projname="proj_${id}"

  # Run Ghidra headless and decompile
  local t0_ns t1_ns
  t0_ns="$(date +%s%N)"
  set +e
  "$ANALYZE" "$projroot" "$projname" \
    -import "$bin" \
    -scriptPath "$GHIDRA_SCRIPTS" \
    -postScript "$SCRIPT_NAME" "$decomp_out" \
    -deleteProject \
    >"$log_out" 2>&1
  local rc=$?
  set -e
  t1_ns="$(date +%s%N)"

  local analysis_ms=$(( (t1_ns - t0_ns) / 1000000 ))

  # If Ghidra failed, still produce a JSON with error info
  local bin_bytes dec_bytes funcs fails undef chars words lines
  bin_bytes="$(stat -c%s "$bin")"
  dec_bytes=0 funcs=0 fails=0 undef=0 chars=0 words=0 lines=0

  if [[ -f "$decomp_out" ]]; then
    dec_bytes="$(stat -c%s "$decomp_out")"
    funcs="$(grep -c '^/\* ===== Function:' "$decomp_out" || true)"
    fails="$(grep -c 'decompile failed' "$decomp_out" || true)"
    undef="$(grep -Eo '\bundefined[0-9]*\b' "$decomp_out" | wc -l | tr -d ' ')"
    chars="$(wc -m < "$decomp_out" | tr -d ' ')"
    words="$(wc -w < "$decomp_out" | tr -d ' ')"
    lines="$(wc -l < "$decomp_out" | tr -d ' ')"
  fi

  # Build JSON using jq
  jq -n \
    --arg id "$id" \
    --arg input_binary "$(realpath "$bin")" \
    --arg decompiled_file "$(realpath -m "$decomp_out")" \
    --arg log_file "$(realpath -m "$log_out")" \
    --arg ghidra_home "$(realpath "$GHIDRA_HOME")" \
    --arg ghidra_scripts "$(realpath "$GHIDRA_SCRIPTS")" \
    --arg date_utc "$(date -u +%Y-%m-%dT%H:%M:%SZ)" \
    --argjson exit_code "$rc" \
    --argjson analysis_time_ms "$analysis_ms" \
    --argjson binary_bytes "$bin_bytes" \
    --argjson decompiled_bytes "$dec_bytes" \
    --argjson functions "$funcs" \
    --argjson decompile_failures "$fails" \
    --argjson undefined_type_mentions "$undef" \
    --argjson decompiled_chars "$chars" \
    --argjson decompiled_words "$words" \
    --argjson decompiled_lines "$lines" \
    '{
      id: $id,
      date_utc: $date_utc,
      input_binary: $input_binary,
      decompiled_file: $decompiled_file,
      log_file: $log_file,
      ghidra_home: $ghidra_home,
      ghidra_scripts: $ghidra_scripts,
      exit_code: $exit_code,
      analysis_time_ms: $analysis_time_ms,
      metrics: {
        binary_bytes: $binary_bytes,
        decompiled_bytes: $decompiled_bytes,
        functions: $functions,
        decompile_failures: $decompile_failures,
        undefined_type_mentions: $undefined_type_mentions,
        decompiled_chars: $decompiled_chars,
        decompiled_words: $decompiled_words,
        decompiled_lines: $decompiled_lines
      }
    }' > "$json_out"

  rm -rf "$projroot"

  if [[ $rc -ne 0 ]]; then
    echo "[!] Failed: $bin (exit=$rc)  log=$log_out"
    return 0
  fi

  echo "[+] OK: $bin"
  echo "    Decompiled: $decomp_out"
  echo "    JSON:       $json_out"
}

if [[ -f "$TARGET" ]]; then
  analyze_one "$TARGET"
elif [[ -d "$TARGET" ]]; then
  if [[ "$RECURSIVE" == "1" ]]; then
    while IFS= read -r -d '' f; do
      analyze_one "$f"
    done < <(find "$TARGET" -type f -print0 | sort -z)
  else
    # Iterate regular files only (not recursive). Adjust -maxdepth if you want.
    while IFS= read -r -d '' f; do
      analyze_one "$f"
    done < <(find "$TARGET" -maxdepth 1 -type f -print0 | sort -z)
  fi
else
  echo "Error: not a file/dir: $TARGET"
  exit 1
fi
