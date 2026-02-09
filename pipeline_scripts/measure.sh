#!/usr/bin/env bash
set -euo pipefail
export LC_ALL=C

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PYTHON="${PYTHON:-python3}"

OUT="${OUT:-build}"
K="${K:-20}"
N="${N:-20000}"
G="${G:-120}"
SEED="${SEED:-1}"
RANDOM_MODE="${RANDOM_MODE:-1}"
OP="${OP:-}"
PERF="${PERF:-0}"
PERF_EVENTS="${PERF_EVENTS:-instructions,cycles,branches,branch-misses,cache-misses}"

tmpdir="$(mktemp -d)"
trap 'rm -rf "$tmpdir"' EXIT
input="$tmpdir/input.txt"

pyflags=(--k "$K" --n "$N" --g "$G" --seed "$SEED" --out "$input")
if [[ "$RANDOM_MODE" == "1" ]]; then pyflags+=(--random); fi
if [[ -n "$OP" ]]; then pyflags+=(--op "$OP"); fi
"$PYTHON" "$SCRIPT_DIR/gen_inputs.py" "${pyflags[@]}"

JSON_OUT="${JSON_OUT:-}"
if [[ -n "$JSON_OUT" ]]; then
  command -v jq >/dev/null || { echo "Error: jq not found. Install jq."; exit 1; }
  json_tmp="$(mktemp)"
  : > "$json_tmp"
fi

echo "level,bin_bytes,seconds,maxrss_kb,sha256_stdout"

for dir in "$OUT"/*; do
  [[ -d "$dir" ]] || continue
  bin="$dir/bench"
  [[ -x "$bin" ]] || continue

  level="$(basename "$dir")"
  bytes="$(stat -c%s "$bin" 2>/dev/null || stat -f%z "$bin")"

  out="$tmpdir/$level.out"
  tsv="$tmpdir/$level.time"
  perf_out="$tmpdir/$level.perf"

  # capture time stats to file, stdout to out
  perf_rc=0
  used_perf=0
  if [[ "$PERF" == "1" ]] && command -v perf >/dev/null 2>&1; then
    used_perf=1
    set +e
    /usr/bin/time -f "%e %M" -o "$tsv" perf stat -x, -e "$PERF_EVENTS" -o "$perf_out" \
      "$bin" < "$input" > "$out"
    perf_rc=$?
    set -e
    # If perf is blocked (common on locked-down systems), fall back to plain timing.
    if [[ $perf_rc -ne 0 ]]; then
      used_perf=0
      /usr/bin/time -f "%e %M" -o "$tsv" "$bin" < "$input" > "$out"
    fi
  else
    /usr/bin/time -f "%e %M" -o "$tsv" "$bin" < "$input" > "$out"
  fi

  sec="$(awk '{print $1}' "$tsv" 2>/dev/null || true)"
  rss="$(awk '{print $2}' "$tsv" 2>/dev/null || true)"
  if [[ ! "$sec" =~ ^[0-9]+([.][0-9]+)?$ ]]; then sec="null"; fi
  if [[ ! "$rss" =~ ^[0-9]+$ ]]; then rss="null"; fi
  h="$(sha256sum "$out" | awk '{print $1}')"

  echo "$level,$bytes,$sec,$rss,$h"

  if [[ -n "$JSON_OUT" ]]; then
    perf_json="{}"
    perf_enabled=0
    if [[ $used_perf -eq 1 && $perf_rc -eq 0 && -s "$perf_out" ]]; then
      perf_enabled=1
      perf_records="$(mktemp)"
      while IFS=, read -r value unit event rest; do
        [[ -z "$event" ]] && continue
        [[ "$value" == \#* ]] && continue
        if [[ "$value" =~ ^[0-9] ]]; then
          value="${value//,/}"
          jq -n --arg key "$event" --argjson value "$value" '{key:$key, value:$value}' >> "$perf_records"
        else
          jq -n --arg key "$event" '{key:$key, value:null}' >> "$perf_records"
        fi
      done < "$perf_out"
      perf_json="$(jq -cs 'reduce .[] as $i ({}; .[$i.key] = $i.value)' "$perf_records")"
      rm -f "$perf_records"
    fi

    jq -n \
      --arg level "$level" \
      --arg binary "$(realpath "$bin")" \
      --argjson bin_bytes "$bytes" \
      --argjson seconds "$sec" \
      --argjson maxrss_kb "$rss" \
      --argjson perf_enabled "$perf_enabled" \
      --argjson perf "$perf_json" \
      --arg sha256_stdout "$h" \
      '{
        key: $level,
        value: {
          binary: $binary,
          bin_bytes: $bin_bytes,
          seconds: $seconds,
          maxrss_kb: $maxrss_kb,
          sha256_stdout: $sha256_stdout,
          perf_enabled: $perf_enabled,
          perf: $perf
        }
      }' >> "$json_tmp"
  fi
done

if [[ -n "$JSON_OUT" ]]; then
  jq -s 'reduce .[] as $i ({}; .[$i.key] = $i.value)' "$json_tmp" > "$JSON_OUT"
  rm -f "$json_tmp"
fi
