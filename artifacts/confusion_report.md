# Confusion Score Report

Key gates:
- Correctness gate: stdout hash must match
- Overhead gate: runtime ratio and size ratio

How to read the table:
- `C` is the weighted mean of the normalized deltas listed in `Components` for each obfuscator.
- `fail/undef/decomp/diff_rel` are normalized vs unobf at the same `-O` level; negative values are clamped to 0.
- `diff_rel` is `diff_bytes / decompiled_bytes_unobf` (unified diff size over unobf decompile size).
- `Overhead` is `pass` only when both ratios are within provided thresholds; otherwise it is `fail` or `unknown`.

| Level | Tigress C | LLVM C | Delta C (T-LLVM) | Tigress Runtime Ratio | LLVM Runtime Ratio | Tigress Size Ratio | LLVM Size Ratio |
|---|---:|---:|---:|---:|---:|---:|---:|
| O0 | 0.623 | 3.097 | -2.474 | 1 | 2.971 | 22.62 | 3.209 |
| O1 | 0.5472 | 3.41 | -2.862 | 1 | 1.677 | 28.74 | 2.986 |
| O2 | 0.633 | 1.735 | -1.102 | 0.9375 | 1.656 | 10.58 | 1.906 |
| O3 | 0.6074 | 1.274 | -0.6663 | 1.069 | 1.586 | 10.76 | 1.726 |

Component deltas (obf vs unobf) per level:
**O0**
Tigress: fail=1, undef=0, decomp=0, diff_rel=1.492
LLVM: fail=0, undef=0.5758, decomp=2.963, diff_rel=8.851

**O1**
Tigress: fail=1, undef=0, decomp=0, diff_rel=1.189
LLVM: fail=0, undef=1.5, decomp=4.486, diff_rel=7.652

**O2**
Tigress: fail=1, undef=0, decomp=0, diff_rel=1.532
LLVM: fail=0, undef=0, decomp=2.352, diff_rel=4.589

**O3**
Tigress: fail=1, undef=0, decomp=0, diff_rel=1.429
LLVM: fail=0, undef=0, decomp=1.517, diff_rel=3.577

Raw metrics (unobf -> obf) per level:
**O0**
Tigress: fail=0->1, undef=66->65, lines=1308->1289, bytes=2.609e+04->2.597e+04, diff_bytes=3.893e+04
LLVM: fail=0->0, undef=66->104, lines=1308->5183, bytes=2.609e+04->2.038e+05, diff_bytes=2.309e+05

**O1**
Tigress: fail=0->1, undef=34->22, lines=989->662, bytes=2.233e+04->1.292e+04, diff_bytes=2.654e+04
LLVM: fail=0->0, undef=34->85, lines=989->5426, bytes=2.233e+04->1.466e+05, diff_bytes=1.708e+05

**O2**
Tigress: fail=0->1, undef=318->130, lines=1622->1344, bytes=4.77e+04->3.885e+04, diff_bytes=7.308e+04
LLVM: fail=0->0, undef=318->99, lines=1622->5437, bytes=4.77e+04->1.693e+05, diff_bytes=2.189e+05

**O3**
Tigress: fail=0->1, undef=395->160, lines=1978->1444, bytes=6.111e+04->4.227e+04, diff_bytes=8.736e+04
LLVM: fail=0->0, undef=395->80, lines=1978->4979, bytes=6.111e+04->1.543e+05, diff_bytes=2.186e+05

