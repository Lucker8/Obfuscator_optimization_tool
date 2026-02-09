# Pipeline How-To

This guide lists the different ways to run the pipeline and its components, with flags and examples.

---

**Quick Start**
1. Tigress end-to-end:
   ```bash
   TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" \
   CONFUSION_REPORT=1 \
   pipeline_scripts/run_pipeline.sh
   ```
2. LLVM OLLVM end-to-end:
   ```bash
   OBF_ENGINE=llvm \
   LLVM_OBF_PASSES="fla bcf sub" \
   CONFUSION_REPORT=1 \
   pipeline_scripts/run_pipeline.sh
   ```
3. Both obfuscators:
   ```bash
   OBF_ENGINE=both \
   TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" \
   LLVM_OBF_PASSES="fla bcf sub" \
   CONFUSION_REPORT=1 \
   pipeline_scripts/run_pipeline.sh
   ```

---

**Pipeline Modes**
1. Unified (default): single program with all ops.
   ```bash
   pipeline_scripts/run_pipeline.sh
   ```
2. Split: per-op binaries (Tigress only).
   ```bash
   MODE=split OPS="1 2 3 4 5 6 7 8 9 10" \
   TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" \
   pipeline_scripts/run_pipeline.sh
   ```
3. Split-light: build-only per-op binaries.
   ```bash
   MODE=split-light OPS="1 2 3 4 5 6 7 8 9 10" \
   pipeline_scripts/run_pipeline.sh
   ```
4. Suite mode (simple-c-suite folder):
   ```bash
   pipeline_scripts/run_suite.sh
   ```

Suite outputs now use per-run folders with config IDs:
```
artifacts/suite/runs/<program>/<opt_level>/<config_id>/
  config.json
  binary
  runtime.json
  ghidra.json
  decompiled.c
  diff.patch
  metrics.json
```

---

**Toggles (run only certain stages)**
1. Ghidra-only rerun:
   ```bash
   RUN_BUILD=0 RUN_OBF=0 RUN_CORRECTNESS=0 RUN_MEASURE=0 RUN_GHIDRA=1 FORCE_GHIDRA=1 \
   pipeline_scripts/run_pipeline.sh
   ```
2. Skip Ghidra:
   ```bash
   RUN_GHIDRA=0 pipeline_scripts/run_pipeline.sh
   ```
3. Build + measure only:
   ```bash
   RUN_CORRECTNESS=0 RUN_GHIDRA=0 pipeline_scripts/run_pipeline.sh
   ```

---

**Obfuscator Selection**
1. Tigress only (default):
   ```bash
   OBF_ENGINE=tigress \
   TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" \
   pipeline_scripts/run_pipeline.sh
   ```
2. LLVM only:
   ```bash
   OBF_ENGINE=llvm \
   LLVM_OBF_PASSES="fla bcf sub" \
   pipeline_scripts/run_pipeline.sh
   ```
3. Both:
   ```bash
   OBF_ENGINE=both \
   TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" \
   LLVM_OBF_PASSES="fla bcf sub" \
   pipeline_scripts/run_pipeline.sh
   ```
4. Suite with both obfuscators:
   ```bash
   OBF_ENGINE=both \
   TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" \
   LLVM_OBF_PASSES="fla bcf sub" \
   pipeline_scripts/run_suite.sh
   ```

---

**Tigress Flags**
- `TIGRESS_TRANSFORMS="Flatten EncodeArithmetic"`
- `TIGRESS_FUNCTIONS="main"`
- `TIGRESS_ENV="x86_64:Linux:Gcc"`
- `TIGRESS_SEED=0`
- `TIGRESS_ARGS="..."`
- `TIGRESS_RAW_ARGS="--Transform=... --Functions=..."`

Example:
```bash
TIGRESS_TRANSFORMS="Flatten EncodeArithmetic" \
TIGRESS_FUNCTIONS="main" \
pipeline_scripts/run_pipeline.sh
```

---

**LLVM OLLVM Flags**
- `LLVM_OBF_PASSES="fla bcf sub"`
  - Aliases: `flatten` → `fla`, `bogus` → `bcf`, `substitute` → `sub`
- `LLVM_OBF_SEED=42` (passed as `-mllvm -seed=42`)
- `LLVM_OBF_ARGS="..."` (extra args)
- `LLVM_OBF_RAW_ARGS="..."` (full override)

Example:
```bash
OBF_ENGINE=llvm \
LLVM_OBF_PASSES="flatten bogus substitute" \
LLVM_OBF_SEED=123 \
pipeline_scripts/run_pipeline.sh
```

---

**Ghidra**
Defaults are auto-detected:
- `GHIDRA_HOME=/home/peter/Desktop/Master Thesis/ghidra_11.4.2_PUBLIC`
- `GHIDRA_SCRIPTS=/home/peter/Desktop/Master Thesis/pipeline_scripts/ghidra_scripts`

Override example:
```bash
GHIDRA_HOME=/path/to/ghidra \
GHIDRA_SCRIPTS=/path/to/ghidra_scripts \
pipeline_scripts/run_pipeline.sh
```

Direct (bypass pipeline):
```bash
pipeline_scripts/evaluate.sh --recursive --force artifacts/unobf artifacts/ghidra/unobf
pipeline_scripts/evaluate.sh --recursive --force artifacts/obf_tigress artifacts/ghidra/obf_tigress
pipeline_scripts/evaluate.sh --recursive --force artifacts/obf_llvm artifacts/ghidra/obf_llvm
```

---

**Component Scripts (manual)**
1. Build (unobfuscated):
   ```bash
   SRC=pipeline_scripts/c_programs/unified.c OUT=artifacts/unobf \
   pipeline_scripts/build.sh
   ```
2. Correctness:
   ```bash
   OUT=artifacts/unobf pipeline_scripts/correctness.sh
   OUT=artifacts/obf_tigress pipeline_scripts/correctness.sh
   ```
3. Measure:
   ```bash
   OUT=artifacts/unobf JSON_OUT=/tmp/unobf.json pipeline_scripts/measure.sh
   OUT=artifacts/obf_tigress JSON_OUT=/tmp/obf.json pipeline_scripts/measure.sh
   ```
4. Confusion report:
   ```bash
   pipeline_scripts/confusion_score.py \
     --runtime-tigress artifacts/runtime_tigress.json \
     --runtime-llvm artifacts/runtime_llvm.json \
     --ghidra-tigress artifacts/ghidra_tigress.json \
     --ghidra-llvm artifacts/ghidra_llvm.json \
     --out-json artifacts/confusion_report.json \
     --out-md artifacts/confusion_report.md
   ```

---

**Suite Input Generation (simple-c-suite)**
The suite wrapper uses `pipeline_scripts/gen_inputs_suite.py` and supports:
- `SEED` base seed (default 1)
- `MODE_INPUT=deterministic|random` (default deterministic)
- `N`, `AVG_N`, `G` for sizes
By default, `run_suite.sh` uses all `*.c` in `simple-c-suite` **except** `is_prime.c`
to match the original 10‑program set. Override with `PROGRAMS="..."` if needed.

Example:
```bash
SEED=123 MODE_INPUT=deterministic N=2000 AVG_N=2000 G=60 \
pipeline_scripts/run_suite.sh
```

---

**Reports**
- `CONFUSION_REPORT=1` generates `artifacts/confusion_report.json` and `.md`.
- `REPORT=1` generates `artifacts/unified_vs_split_report.json`.

Example:
```bash
REPORT=1 CONFUSION_REPORT=1 pipeline_scripts/run_pipeline.sh
```
