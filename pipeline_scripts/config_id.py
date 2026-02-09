#!/usr/bin/env python3
import argparse
import hashlib
import json
from pathlib import Path


def canonical_json(obj) -> str:
    return json.dumps(obj, sort_keys=True, separators=(",", ":"), ensure_ascii=False)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--in", dest="inp", required=True, help="Input JSON file")
    ap.add_argument("--out", dest="out", help="Write canonical JSON to this path")
    ap.add_argument("--print", dest="print_canon", action="store_true", help="Print canonical JSON to stdout")
    args = ap.parse_args()

    data = json.loads(Path(args.inp).read_text(encoding="utf-8"))
    canon = canonical_json(data)
    config_id = hashlib.sha256(canon.encode("utf-8")).hexdigest()[:12]

    if args.out:
        Path(args.out).write_text(canon, encoding="utf-8")
    if args.print_canon:
        print(canon)
    print(config_id)


if __name__ == "__main__":
    main()
