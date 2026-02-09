#!/usr/bin/env python3
import argparse
import hashlib
import random


def stable_seed(base_seed: int, name: str) -> int:
    h = hashlib.sha256(name.encode("utf-8")).digest()
    v = int.from_bytes(h[:4], "little")
    return base_seed + v


def deterministic_seq(n, seed, lo=-10**6, hi=10**6):
    # Deterministic, non-random pattern derived from seed
    span = hi - lo + 1
    return [((seed + i * 1103515245) % span) + lo for i in range(n)]


def rand_date(rng):
    y = rng.randint(1970, 2035)
    m = rng.randint(1, 12)
    # simple month length handling (avoid calendar import)
    dm = [31, 28 + (1 if (y % 400 == 0 or (y % 4 == 0 and y % 100 != 0)) else 0),
          31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    d = rng.randint(1, dm[m - 1])
    return y, m, d


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--prog", required=True, help="Program base name (e.g., is_odd, armstrong)")
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--out", type=str, default="-")
    ap.add_argument("--mode", choices=["deterministic", "random"], default="deterministic")
    ap.add_argument("--n", type=int, default=1000)
    ap.add_argument("--avg_n", type=int, default=1000)
    ap.add_argument("--g", type=int, default=40)
    args = ap.parse_args()

    seed = stable_seed(args.seed, args.prog)
    rng = random.Random(seed)

    out = open(args.out, "w") if args.out != "-" else None
    w = (out.write if out else print)

    def seq(n, lo=-10**6, hi=10**6):
        if args.mode == "random":
            return [rng.randint(lo, hi) for _ in range(n)]
        return deterministic_seq(n, seed, lo, hi)

    def emit_is_odd():
        n = seed if seed % 2 == 0 else seed + 1
        w(f"{n}\n")

    def emit_armstrong():
        arm = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407, 9474]
        w(f"{arm[seed % len(arm)]}\n")

    def emit_avg():
        n = max(1, args.avg_n)
        w(f"{n}\n")
        vals = [float(i - n // 2) for i in range(n)]
        for v in vals:
            w(f"{v}\n")

    def emit_dec_to_bin():
        w(f"{seed & 0xFFFFFFFF}\n")

    def emit_time_between_dates():
        if args.mode == "random":
            y1, m1, d1 = rand_date(rng)
            y2, m2, d2 = rand_date(rng)
        else:
            y1, m1, d1 = 2000, 1, 1
            y2, m2, d2 = 2020, 12, 31
        w(f"{y1} {m1} {d1} {y2} {m2} {d2}\n")

    def emit_max_el():
        n = min(args.n, 10000)
        w(f"{n}\n")
        arr = seq(n)
        w(" ".join(map(str, arr)) + "\n")

    def emit_quicksort():
        n = min(args.n, 10000)
        w(f"{n}\n")
        arr = list(reversed(seq(n)))
        w(" ".join(map(str, arr)) + "\n")

    def emit_bst_traversal():
        n = min(args.n, 10000)
        w(f"{n}\n")
        arr = seq(n)
        w(" ".join(map(str, arr)) + "\n")

    def emit_bin_search():
        n = min(args.n, 10000)
        w(f"{n}\n")
        arr = sorted(seq(n))
        w(" ".join(map(str, arr)) + "\n")
        target = arr[n // 2] if n > 0 else 0
        w(f"{target}\n")

    def emit_dijkstra():
        g = min(args.g, 200)
        w(f"{g}\n")
        if args.mode == "random":
            for i in range(g):
                row = []
                for j in range(g):
                    if i == j:
                        row.append(0)
                    else:
                        row.append(rng.randint(1, 10))
                w(" ".join(map(str, row)) + "\n")
        else:
            for i in range(g):
                row = []
                for j in range(g):
                    if i == j:
                        row.append(0)
                    else:
                        row.append(((i + 1) * (j + 3) + seed) % 10 + 1)
                w(" ".join(map(str, row)) + "\n")
        w("0\n")

    def emit_is_prime():
        primes = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53]
        w(f"{primes[seed % len(primes)]}\n")

    prog = args.prog
    if prog == "is_odd":
        emit_is_odd()
    elif prog == "armstrong":
        emit_armstrong()
    elif prog == "avg_of_n":
        emit_avg()
    elif prog == "dec_to_bin":
        emit_dec_to_bin()
    elif prog == "time_between_dates":
        emit_time_between_dates()
    elif prog == "max_el":
        emit_max_el()
    elif prog == "quicksort":
        emit_quicksort()
    elif prog == "BST_traversal":
        emit_bst_traversal()
    elif prog == "bin_search":
        emit_bin_search()
    elif prog == "dijkstra":
        emit_dijkstra()
    elif prog == "is_prime":
        emit_is_prime()
    else:
        raise SystemExit(f"Unknown program: {prog}")

    if out:
        out.close()


if __name__ == "__main__":
    main()
