#!/usr/bin/env python3
import argparse
import json
from pathlib import Path
from statistics import mean, median


def load_json(path: Path):
    if not path.exists():
        return None
    try:
        with path.open("r", encoding="utf-8") as f:
            return json.load(f)
    except Exception:
        return None


def extract_level(path_str: str):
    parts = Path(path_str).parts
    for p in parts:
        if p == "Os":
            return p
        if len(p) == 2 and p[0] == "O" and p[1].isdigit():
            return p
    return None


def numeric_list(values):
    return [v for v in values if isinstance(v, (int, float))]


def summarize(values):
    vals = numeric_list(values)
    if not vals:
        return {}
    return {
        "count": len(vals),
        "mean": mean(vals),
        "median": median(vals),
        "min": min(vals),
        "max": max(vals),
    }


def summarize_runtime_split(split_data):
    # ops -> opXX -> {unobf, obf} -> levels -> metrics
    if not split_data or "ops" not in split_data:
        return {}
    out = {"unobf": {}, "obf": {}}
    for op_key, op_val in split_data["ops"].items():
        for side in ("unobf", "obf"):
            side_data = op_val.get(side, {})
            for level, metrics in side_data.items():
                bucket = out[side].setdefault(level, {})
                for k in ("bin_bytes", "seconds", "maxrss_kb"):
                    bucket.setdefault(k, []).append(metrics.get(k))
                perf = metrics.get("perf", {}) if isinstance(metrics.get("perf"), dict) else {}
                for pk in ("instructions", "cycles", "branches", "branch-misses", "cache-misses"):
                    bucket.setdefault(f"perf_{pk}", []).append(perf.get(pk))
    # reduce lists to summary stats
    for side in out:
        for level in out[side]:
            out[side][level] = {k: summarize(v) for k, v in out[side][level].items()}
    return out


def summarize_ghidra(data):
    # data: dict of binaries keyed by path
    out = {}
    if not data:
        return out
    for path, rec in data.items():
        level = extract_level(path)
        if not level:
            continue
        bucket = out.setdefault(level, {})
        bucket.setdefault("analysis_time_ms", []).append(rec.get("analysis_time_ms"))
        metrics = rec.get("metrics", {}) if isinstance(rec.get("metrics"), dict) else {}
        for k in (
            "binary_bytes",
            "decompiled_bytes",
            "functions",
            "decompile_failures",
            "undefined_type_mentions",
            "decompiled_chars",
            "decompiled_words",
            "decompiled_lines",
        ):
            bucket.setdefault(k, []).append(metrics.get(k))
    for level in out:
        out[level] = {k: summarize(v) for k, v in out[level].items()}
    return out


def summarize_ghidra_split(split_data):
    if not split_data or "ops" not in split_data:
        return {"unobf": {}, "obf": {}}
    out = {"unobf": {}, "obf": {}}
    for op_key, op_val in split_data["ops"].items():
        for side in ("unobf", "obf"):
            data = op_val.get(side, {})
            summary = summarize_ghidra(data)
            for level, metrics in summary.items():
                bucket = out[side].setdefault(level, {})
                for k, stats in metrics.items():
                    bucket.setdefault(k, []).append(stats)
    # Collapse stats-of-stats by mean of means (keep it simple)
    collapsed = {"unobf": {}, "obf": {}}
    for side in out:
        for level, metrics in out[side].items():
            lvl = collapsed[side].setdefault(level, {})
            for k, stats_list in metrics.items():
                means = [s.get("mean") for s in stats_list if isinstance(s, dict) and "mean" in s]
                lvl[k] = summarize(means)
    return collapsed


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--out-root", required=True)
    ap.add_argument("--out", required=True)
    args = ap.parse_args()

    out_root = Path(args.out_root)
    runtime = load_json(out_root / "runtime.json")
    runtime_split = load_json(out_root / "runtime_split.json")
    ghidra = load_json(out_root / "ghidra.json")
    ghidra_split = load_json(out_root / "ghidra_split.json")

    report = {
        "runtime": {
            "unified": runtime,
            "split_summary": summarize_runtime_split(runtime_split),
        },
        "ghidra": {
            "unified_summary": {
                "unobf": summarize_ghidra(ghidra.get("unobf", {}) if ghidra else {}),
                "obf": summarize_ghidra(ghidra.get("obf", {}) if ghidra else {}),
            },
            "split_summary": summarize_ghidra_split(ghidra_split),
        },
    }

    with Path(args.out).open("w", encoding="utf-8") as f:
        json.dump(report, f, indent=2, sort_keys=True)


if __name__ == "__main__":
    main()
