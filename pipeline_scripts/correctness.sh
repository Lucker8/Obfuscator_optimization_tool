#!/usr/bin/env bash
set -euo pipefail
export LC_ALL=C

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PYTHON="${PYTHON:-python3}"

OUT="${OUT:-build}"
K="${K:-5}"
N="${N:-200}"
G="${G:-40}"
SEED="${SEED:-1}"
RANDOM_MODE="${RANDOM_MODE:-1}"   # 1 => --random, 0 => fully controlled
OP="${OP:-}"

tmpdir="$(mktemp -d)"
trap 'rm -rf "$tmpdir"' EXIT

input="$tmpdir/input.txt"
refout="$tmpdir/ref.out"

pyflags=(--k "$K" --n "$N" --g "$G" --seed "$SEED" --out "$input")
if [[ "$RANDOM_MODE" == "1" ]]; then pyflags+=(--random); fi
if [[ -n "$OP" ]]; then pyflags+=(--op "$OP"); fi

"$PYTHON" "$SCRIPT_DIR/gen_inputs.py" "${pyflags[@]}"

# baseline
"$OUT/O0/bench" < "$input" > "$refout"
refhash="$(sha256sum "$refout" | awk '{print $1}')"

echo "Baseline: $OUT/O0/bench  sha256=$refhash"

for dir in "$OUT"/*; do
  [[ -d "$dir" ]] || continue
  bin="$dir/bench"
  [[ -x "$bin" ]] || continue

  out="$tmpdir/$(basename "$dir").out"
  "$bin" < "$input" > "$out"
  h="$(sha256sum "$out" | awk '{print $1}')"

  if [[ "$h" == "$refhash" ]]; then
    echo "PASS  $(basename "$dir")  sha256=$h"
  else
    echo "FAIL  $(basename "$dir")  sha256=$h (expected $refhash)"
    # show first mismatch chunk
    diff -u "$refout" "$out" | head -n 80 || true
    exit 1
  fi
done

echo "All optimization levels match baseline output."
