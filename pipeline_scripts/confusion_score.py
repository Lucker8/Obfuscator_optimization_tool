#!/usr/bin/env python3
import argparse
import difflib
import json
from pathlib import Path


def load_json(path: Path):
    with path.open("r", encoding="utf-8") as f:
        return json.load(f)


def extract_level(path_str: str):
    parts = Path(path_str).parts
    for p in parts:
        if p == "Os":
            return p
        if len(p) == 2 and p[0] == "O" and p[1].isdigit():
            return p
    return None


def pick_ghidra_by_level(ghidra_side: dict):
    # Return mapping: level -> record
    by_level = {}
    for path, rec in ghidra_side.items():
        level = extract_level(path)
        if not level:
            continue
        by_level.setdefault(level, []).append(rec)
    picked = {}
    for level, recs in by_level.items():
        # Prefer record whose input_binary ends with "/bench" if available
        rec = None
        for r in recs:
            if str(r.get("input_binary", "")).endswith("/bench"):
                rec = r
                break
        if rec is None:
            rec = recs[0]
        picked[level] = rec
    return picked


def diff_bytes(path_a: Path, path_b: Path):
    if not path_a.exists() or not path_b.exists():
        return None
    try:
        a_lines = path_a.read_text(encoding="utf-8", errors="ignore").splitlines(keepends=True)
        b_lines = path_b.read_text(encoding="utf-8", errors="ignore").splitlines(keepends=True)
        diff = difflib.unified_diff(a_lines, b_lines, fromfile=str(path_a), tofile=str(path_b))
        data = "".join(diff)
        return len(data.encode("utf-8"))
    except Exception:
        return None


def rel_delta(obf_val, unobf_val):
    if obf_val is None or unobf_val is None:
        return None
    denom = abs(unobf_val) if abs(unobf_val) > 0 else 1.0
    return (obf_val - unobf_val) / denom


def clamp0(x):
    if x is None:
        return None
    return x if x > 0 else 0.0


def fmt_sig(x, sig=4):
    if x is None:
        return "None"
    if isinstance(x, bool):
        return str(x)
    try:
        return f"{float(x):.{sig}g}"
    except Exception:
        return str(x)


def parse_threshold(arg):
    if arg is None:
        return None
    try:
        return float(arg)
    except Exception:
        return None


def compute_engine(engine_name, runtime, ghidra, decomp_metric, weights, max_runtime_ratio, max_size_ratio):
    gh_unobf = pick_ghidra_by_level(ghidra.get("unobf", {}))
    gh_obf = pick_ghidra_by_level(ghidra.get("obf", {}))
    levels = sorted(runtime.get("unobf", {}).keys())

    out_levels = {}
    for level in levels:
        run_u = runtime["unobf"].get(level, {})
        run_o = runtime["obf"].get(level, {})

        sha_u = run_u.get("sha256_stdout")
        sha_o = run_o.get("sha256_stdout")
        correctness = "unknown"
        if sha_u and sha_o:
            correctness = "pass" if sha_u == sha_o else "fail"

        sec_u = run_u.get("seconds")
        sec_o = run_o.get("seconds")
        size_u = run_u.get("bin_bytes")
        size_o = run_o.get("bin_bytes")

        runtime_ratio = None
        size_ratio = None
        if isinstance(sec_u, (int, float)) and isinstance(sec_o, (int, float)) and sec_u != 0:
            runtime_ratio = sec_o / sec_u
        if isinstance(size_u, (int, float)) and isinstance(size_o, (int, float)) and size_u != 0:
            size_ratio = size_o / size_u

        overhead = "unknown"
        if max_runtime_ratio is not None and max_size_ratio is not None:
            if runtime_ratio is None or size_ratio is None:
                overhead = "fail"
            else:
                overhead = "pass" if (runtime_ratio <= max_runtime_ratio and size_ratio <= max_size_ratio) else "fail"

        gh_u = gh_unobf.get(level, {})
        gh_o = gh_obf.get(level, {})
        m_u = gh_u.get("metrics", {}) if isinstance(gh_u.get("metrics", {}), dict) else {}
        m_o = gh_o.get("metrics", {}) if isinstance(gh_o.get("metrics", {}), dict) else {}

        fail_delta = rel_delta(m_o.get("decompile_failures"), m_u.get("decompile_failures"))
        undef_delta = rel_delta(m_o.get("undefined_type_mentions"), m_u.get("undefined_type_mentions"))

        if decomp_metric == "bytes":
            decomp_delta = rel_delta(m_o.get("decompiled_bytes"), m_u.get("decompiled_bytes"))
            base_decomp = m_u.get("decompiled_bytes")
        else:
            decomp_delta = rel_delta(m_o.get("decompiled_lines"), m_u.get("decompiled_lines"))
            base_decomp = m_u.get("decompiled_bytes")

        decomp_u_path = Path(gh_u.get("decompiled_file", "")) if gh_u else Path("")
        decomp_o_path = Path(gh_o.get("decompiled_file", "")) if gh_o else Path("")
        diff_b = diff_bytes(decomp_u_path, decomp_o_path)
        diff_rel = None
        if diff_b is not None and isinstance(base_decomp, (int, float)):
            denom = base_decomp if base_decomp != 0 else 1.0
            diff_rel = diff_b / denom

        comps = {
            "decompile_failures_rel": clamp0(fail_delta),
            "undefined_type_mentions_rel": clamp0(undef_delta),
            f"decompiled_{decomp_metric}_rel": clamp0(decomp_delta),
            "diff_bytes": diff_b,
            "diff_bytes_rel": clamp0(diff_rel),
        }

        weighted_sum = 0.0
        weight_total = 0.0
        for key, w in [
            ("decompile_failures_rel", weights["fail"]),
            ("undefined_type_mentions_rel", weights["undef"]),
            (f"decompiled_{decomp_metric}_rel", weights["decomp"]),
            ("diff_bytes_rel", weights["diff"]),
        ]:
            val = comps.get(key)
            if val is None:
                continue
            weighted_sum += w * val
            weight_total += w

        C_raw = weighted_sum if weight_total > 0 else None
        C = (weighted_sum / weight_total) if weight_total > 0 else None

        score_valid = correctness == "pass" and (overhead in ("pass", "unknown"))

        out_levels[level] = {
            "gates": {
                "correctness": correctness,
                "overhead": overhead,
            },
            "ratios": {
                "runtime_ratio": runtime_ratio,
                "size_ratio": size_ratio,
            },
            "config": {
                "obf": run_o.get("config_object"),
                "unobf": run_u.get("config_object"),
                "config_id_obf": run_o.get("config_id"),
                "config_id_unobf": run_u.get("config_id"),
            },
            "raw": {
                "unobf": {
                    "decompile_failures": m_u.get("decompile_failures"),
                    "undefined_type_mentions": m_u.get("undefined_type_mentions"),
                    "decompiled_lines": m_u.get("decompiled_lines"),
                    "decompiled_bytes": m_u.get("decompiled_bytes"),
                    "decompiled_file": gh_u.get("decompiled_file") if gh_u else None,
                },
                "obf": {
                    "decompile_failures": m_o.get("decompile_failures"),
                    "undefined_type_mentions": m_o.get("undefined_type_mentions"),
                    "decompiled_lines": m_o.get("decompiled_lines"),
                    "decompiled_bytes": m_o.get("decompiled_bytes"),
                    "decompiled_file": gh_o.get("decompiled_file") if gh_o else None,
                },
                "diff_bytes": diff_b,
            },
            "components": comps,
            "score": {
                "C_raw": C_raw,
                "C": C,
                "valid": score_valid,
            },
        }

    return {
        "engine": engine_name,
        "levels": out_levels,
    }


def main():
    ap = argparse.ArgumentParser(description="Compute confusion score from existing runtime + Ghidra metrics.")
    ap.add_argument("--runtime-tigress", default="artifacts/runtime_tigress.json", help="Path to runtime_tigress.json")
    ap.add_argument("--runtime-llvm", default="artifacts/runtime_llvm.json", help="Path to runtime_llvm.json")
    ap.add_argument("--ghidra-tigress", default="artifacts/ghidra_tigress.json", help="Path to ghidra_tigress.json")
    ap.add_argument("--ghidra-llvm", default="artifacts/ghidra_llvm.json", help="Path to ghidra_llvm.json")
    ap.add_argument("--runtime", default="artifacts/runtime.json", help="Fallback runtime.json (single engine)")
    ap.add_argument("--ghidra", default="artifacts/ghidra.json", help="Fallback ghidra.json (single engine)")
    ap.add_argument("--out-json", default="artifacts/confusion_report.json", help="Output JSON report")
    ap.add_argument("--out-md", default="artifacts/confusion_report.md", help="Output Markdown report")
    ap.add_argument("--decomp-metric", choices=["lines", "bytes"], default="lines")
    ap.add_argument("--max-runtime-ratio", default=None, help="Overhead gate: max runtime ratio (obf/unobf)")
    ap.add_argument("--max-size-ratio", default=None, help="Overhead gate: max size ratio (obf/unobf)")
    ap.add_argument("--w-fail", type=float, default=1.0)
    ap.add_argument("--w-undef", type=float, default=1.0)
    ap.add_argument("--w-decomp", type=float, default=1.0)
    ap.add_argument("--w-diff", type=float, default=1.0)
    args = ap.parse_args()

    runtime_tigress = load_json(Path(args.runtime_tigress)) if Path(args.runtime_tigress).exists() else None
    runtime_llvm = load_json(Path(args.runtime_llvm)) if Path(args.runtime_llvm).exists() else None
    ghidra_tigress = load_json(Path(args.ghidra_tigress)) if Path(args.ghidra_tigress).exists() else None
    ghidra_llvm = load_json(Path(args.ghidra_llvm)) if Path(args.ghidra_llvm).exists() else None

    runtime_fallback = load_json(Path(args.runtime)) if Path(args.runtime).exists() else None
    ghidra_fallback = load_json(Path(args.ghidra)) if Path(args.ghidra).exists() else None

    max_runtime_ratio = parse_threshold(args.max_runtime_ratio)
    max_size_ratio = parse_threshold(args.max_size_ratio)

    report = {
        "inputs": {
            "runtime_tigress": str(Path(args.runtime_tigress).resolve()),
            "runtime_llvm": str(Path(args.runtime_llvm).resolve()),
            "ghidra_tigress": str(Path(args.ghidra_tigress).resolve()),
            "ghidra_llvm": str(Path(args.ghidra_llvm).resolve()),
            "runtime_fallback": str(Path(args.runtime).resolve()),
            "ghidra_fallback": str(Path(args.ghidra).resolve()),
        },
        "config": {
            "decomp_metric": args.decomp_metric,
            "weights": {
                "fail": args.w_fail,
                "undef": args.w_undef,
                "decomp": args.w_decomp,
                "diff": args.w_diff,
            },
            "max_runtime_ratio": max_runtime_ratio,
            "max_size_ratio": max_size_ratio,
        },
        "engines": {},
    }

    md_lines = []
    md_lines.append("# Confusion Score Report")
    md_lines.append("")
    md_lines.append("Key gates:")
    md_lines.append("- Correctness gate: stdout hash must match")
    md_lines.append("- Overhead gate: runtime ratio and size ratio")
    md_lines.append("")
    md_lines.append("How to read the table:")
    md_lines.append("- `C` is the weighted mean of the normalized deltas listed in `Components` for each obfuscator.")
    md_lines.append("- `fail/undef/decomp/diff_rel` are normalized vs unobf at the same `-O` level; negative values are clamped to 0.")
    md_lines.append("- `diff_rel` is `diff_bytes / decompiled_bytes_unobf` (unified diff size over unobf decompile size).")
    md_lines.append("- `Overhead` is `pass` only when both ratios are within provided thresholds; otherwise it is `fail` or `unknown`.")
    md_lines.append("")
    engines = {}
    if runtime_tigress and ghidra_tigress:
        engines["tigress"] = compute_engine("tigress", runtime_tigress, ghidra_tigress, args.decomp_metric, report["config"]["weights"], max_runtime_ratio, max_size_ratio)
    if runtime_llvm and ghidra_llvm:
        engines["llvm"] = compute_engine("llvm", runtime_llvm, ghidra_llvm, args.decomp_metric, report["config"]["weights"], max_runtime_ratio, max_size_ratio)
    if not engines and runtime_fallback and ghidra_fallback:
        engines["obf"] = compute_engine("obf", runtime_fallback, ghidra_fallback, args.decomp_metric, report["config"]["weights"], max_runtime_ratio, max_size_ratio)

    report["engines"] = engines
    if "tigress" in engines and "llvm" in engines:
        comparison = {}
        levels = set(engines["tigress"]["levels"].keys()) | set(engines["llvm"]["levels"].keys())
        for level in levels:
            t = engines["tigress"]["levels"].get(level, {})
            l = engines["llvm"]["levels"].get(level, {})
            tC = t.get("score", {}).get("C")
            lC = l.get("score", {}).get("C")
            tR = t.get("ratios", {}).get("runtime_ratio")
            lR = l.get("ratios", {}).get("runtime_ratio")
            tS = t.get("ratios", {}).get("size_ratio")
            lS = l.get("ratios", {}).get("size_ratio")
            tD = t.get("components", {}).get("diff_bytes_rel")
            lD = l.get("components", {}).get("diff_bytes_rel")
            comparison[level] = {
                "delta_C_tigress_minus_llvm": (tC - lC) if isinstance(tC, (int, float)) and isinstance(lC, (int, float)) else None,
                "delta_runtime_ratio_tigress_minus_llvm": (tR - lR) if isinstance(tR, (int, float)) and isinstance(lR, (int, float)) else None,
                "delta_size_ratio_tigress_minus_llvm": (tS - lS) if isinstance(tS, (int, float)) and isinstance(lS, (int, float)) else None,
                "delta_diff_rel_tigress_minus_llvm": (tD - lD) if isinstance(tD, (int, float)) and isinstance(lD, (int, float)) else None,
            }
        report["comparison"] = comparison

    if "tigress" in engines or "llvm" in engines:
        md_lines.append("| Level | Tigress C | LLVM C | Delta C (T-LLVM) | Tigress Runtime Ratio | LLVM Runtime Ratio | Tigress Size Ratio | LLVM Size Ratio |")
        md_lines.append("|---|---:|---:|---:|---:|---:|---:|---:|")
    else:
        md_lines.append("| Level | Obf C | Runtime Ratio | Size Ratio |")
        md_lines.append("|---|---:|---:|---:|")

    # Determine union of levels across engines
    all_levels = set()
    for eng in engines.values():
        all_levels.update(eng["levels"].keys())
    for level in sorted(all_levels):
        if "tigress" in engines or "llvm" in engines:
            t = engines.get("tigress", {}).get("levels", {}).get(level, {})
            l = engines.get("llvm", {}).get("levels", {}).get(level, {})
            tC = t.get("score", {}).get("C")
            lC = l.get("score", {}).get("C")
            tR = t.get("ratios", {}).get("runtime_ratio")
            lR = l.get("ratios", {}).get("runtime_ratio")
            tS = t.get("ratios", {}).get("size_ratio")
            lS = l.get("ratios", {}).get("size_ratio")
            delta_c = None
            if isinstance(tC, (int, float)) and isinstance(lC, (int, float)):
                delta_c = tC - lC
            md_lines.append(
                f"| {level} | {fmt_sig(tC)} | {fmt_sig(lC)} | {fmt_sig(delta_c)} | {fmt_sig(tR)} | {fmt_sig(lR)} | {fmt_sig(tS)} | {fmt_sig(lS)} |"
            )
        else:
            o = engines.get("obf", {}).get("levels", {}).get(level, {})
            oC = o.get("score", {}).get("C")
            oR = o.get("ratios", {}).get("runtime_ratio")
            oS = o.get("ratios", {}).get("size_ratio")
            md_lines.append(f"| {level} | {fmt_sig(oC)} | {fmt_sig(oR)} | {fmt_sig(oS)} |")

    md_lines.append("")
    md_lines.append("Component deltas (obf vs unobf) per level:")
    for level in sorted(all_levels):
        md_lines.append(f"**{level}**")
        if "tigress" in engines and level in engines["tigress"]["levels"]:
            comps = engines["tigress"]["levels"][level]["components"]
            md_lines.append(
                f"Tigress: fail={fmt_sig(comps.get('decompile_failures_rel'))}, "
                f"undef={fmt_sig(comps.get('undefined_type_mentions_rel'))}, "
                f"decomp={fmt_sig(comps.get(f'decompiled_{args.decomp_metric}_rel'))}, "
                f"diff_rel={fmt_sig(comps.get('diff_bytes_rel'))}"
            )
        if "llvm" in engines and level in engines["llvm"]["levels"]:
            comps = engines["llvm"]["levels"][level]["components"]
            md_lines.append(
                f"LLVM: fail={fmt_sig(comps.get('decompile_failures_rel'))}, "
                f"undef={fmt_sig(comps.get('undefined_type_mentions_rel'))}, "
                f"decomp={fmt_sig(comps.get(f'decompiled_{args.decomp_metric}_rel'))}, "
                f"diff_rel={fmt_sig(comps.get('diff_bytes_rel'))}"
            )
        if "obf" in engines and level in engines["obf"]["levels"]:
            comps = engines["obf"]["levels"][level]["components"]
            md_lines.append(
                f"Obf: fail={fmt_sig(comps.get('decompile_failures_rel'))}, "
                f"undef={fmt_sig(comps.get('undefined_type_mentions_rel'))}, "
                f"decomp={fmt_sig(comps.get(f'decompiled_{args.decomp_metric}_rel'))}, "
                f"diff_rel={fmt_sig(comps.get('diff_bytes_rel'))}"
            )
        md_lines.append("")

    md_lines.append("Raw metrics (unobf -> obf) per level:")
    for level in sorted(all_levels):
        md_lines.append(f"**{level}**")
        def _raw_line(label, engine_key):
            if engine_key not in engines:
                return None
            rec = engines[engine_key]["levels"].get(level, {})
            raw = rec.get("raw", {})
            ru = raw.get("unobf", {})
            ro = raw.get("obf", {})
            diff_b = raw.get("diff_bytes")
            return (
                f"{label}: fail={fmt_sig(ru.get('decompile_failures'))}->{fmt_sig(ro.get('decompile_failures'))}, "
                f"undef={fmt_sig(ru.get('undefined_type_mentions'))}->{fmt_sig(ro.get('undefined_type_mentions'))}, "
                f"lines={fmt_sig(ru.get('decompiled_lines'))}->{fmt_sig(ro.get('decompiled_lines'))}, "
                f"bytes={fmt_sig(ru.get('decompiled_bytes'))}->{fmt_sig(ro.get('decompiled_bytes'))}, "
                f"diff_bytes={fmt_sig(diff_b)}"
            )
        line = _raw_line("Tigress", "tigress")
        if line: md_lines.append(line)
        line = _raw_line("LLVM", "llvm")
        if line: md_lines.append(line)
        line = _raw_line("Obf", "obf")
        if line: md_lines.append(line)
        md_lines.append("")

    out_json = Path(args.out_json)
    out_json.parent.mkdir(parents=True, exist_ok=True)
    out_json.write_text(json.dumps(report, indent=2), encoding="utf-8")

    out_md = Path(args.out_md)
    out_md.parent.mkdir(parents=True, exist_ok=True)
    out_md.write_text("\n".join(md_lines) + "\n", encoding="utf-8")


if __name__ == "__main__":
    main()
