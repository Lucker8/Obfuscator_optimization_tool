#!/usr/bin/env bash
set -euo pipefail

# Script to generate different o levels of compilation
# from a selected dir of c programs, organized in a folder
# structure

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SRC="${SRC:-$SCRIPT_DIR/c_programs/unified.c}"     # multi-op program
OUT="${OUT:-build}"
CC="${CC:-gcc}"
BASE_CFLAGS="${BASE_CFLAGS:- -std=c11 -Wall -Wextra -pedantic}"
EXTRA_CFLAGS="${EXTRA_CFLAGS:-}"  # e.g. "-march=native"
LDFLAGS="${LDFLAGS:-}"
BIN_NAME="${BIN_NAME:-bench}"
LEVELS=(${LEVELS:-O0 O1 O2 O3 Os})

mkdir -p "$OUT"

for L in "${LEVELS[@]}"; do
  dir="$OUT/$L"
  mkdir -p "$dir"

  echo "Building $L -> $dir/$BIN_NAME"
  "$CC" $BASE_CFLAGS -"$L" $EXTRA_CFLAGS "$SRC" -o "$dir/$BIN_NAME" $LDFLAGS

  # record provenance
  { "$CC" --version | head -n1; } > "$dir/compiler.txt" || true
  echo "$CC $BASE_CFLAGS -$L $EXTRA_CFLAGS $SRC -o $dir/$BIN_NAME $LDFLAGS" > "$dir/build_cmd.txt"

  # optional strip (set STRIP=0 to disable)
  if [[ "${STRIP:-1}" == "1" ]]; then
    strip -s "$dir/$BIN_NAME" 2>/dev/null || true
  fi
done
