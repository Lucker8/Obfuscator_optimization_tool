#!/usr/bin/env python3
import argparse, random, calendar

# deterministic for ground truth + pseudo optional
# K times with a --seed


def rand_date(rng):
    y = rng.randint(1970, 2035)
    m = rng.randint(1, 12)
    dmax = calendar.monthrange(y, m)[1]
    d = rng.randint(1, dmax)
    return y, m, d

def gen_matrix(rng, g, density=0.30, wmax=50):
    # -1 no edge, diagonal 0
    mat = []
    for i in range(g):
        row = []
        for j in range(g):
            if i == j:
                row.append(0)
            else:
                if rng.random() < density:
                    row.append(rng.randint(1, wmax))
                else:
                    row.append(-1)
        mat.append(row)
    return mat

def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--k", type=int, default=10)
    ap.add_argument("--n", type=int, default=200)     # array sizes
    ap.add_argument("--avg_n", type=int, default=200) # average count
    ap.add_argument("--g", type=int, default=40)      # graph nodes
    ap.add_argument("--seed", type=int, default=1)
    ap.add_argument("--out", type=str, default="-")
    ap.add_argument("--random", action="store_true", help="use PRNG (still deterministic with seed)")
    ap.add_argument("--op", type=int, default=None, help="generate inputs for a single op (1-10)")
    args = ap.parse_args()

    rng = random.Random(args.seed)

    def rint(lo, hi):
        return rng.randint(lo, hi) if args.random else lo  # fully controlled mode if not --random

    out = open(args.out, "w") if args.out != "-" else None
    w = (out.write if out else print)

    def emit_op(op, rep):
        # 1) even/odd
        if op == 1:
            w(f"{rint(-10**9, 10**9)}\n")
            return
        # 2) armstrong
        if op == 2:
            arm = [0,1,2,3,4,5,6,7,8,9,153,370,371,407,9474]
            x = arm[rep % len(arm)] if not args.random else rng.choice(arm + [rng.randint(0, 10**9)])
            w(f"{x}\n")
            return
        # 3) average
        if op == 3:
            w(f"{args.avg_n}\n")
            if args.random:
                nums = [rng.uniform(-1000, 1000) for _ in range(args.avg_n)]
            else:
                nums = [float(i - args.avg_n//2) for i in range(args.avg_n)]
            for v in nums:
                w(f"{v}\n")
            return
        # 4) dec->bin
        if op == 4:
            w(f"{rint(0, 2**31-1)}\n")
            return
        # 5) date diff
        if op == 5:
            y1,m1,d1 = rand_date(rng) if args.random else (2000,1,1)
            y2,m2,d2 = rand_date(rng) if args.random else (2020,12,31)
            w(f"{y1} {m1} {d1} {y2} {m2} {d2}\n")
            return
        # 6) max array
        if op == 6:
            w(f"{args.n}\n")
            arr = [rint(-10**6, 10**6) if args.random else (i - args.n//2) for i in range(args.n)]
            w(" ".join(map(str, arr)) + "\n")
            return
        # 7) quicksort
        if op == 7:
            w(f"{args.n}\n")
            arr2 = [rint(-10**6, 10**6) if args.random else (args.n - i) for i in range(args.n)]
            w(" ".join(map(str, arr2)) + "\n")
            return
        # 8) tree traversals
        if op == 8:
            w(f"{args.n}\n")
            arr3 = [rint(-10**6, 10**6) if args.random else (i*3 % 97) for i in range(args.n)]
            w(" ".join(map(str, arr3)) + "\n")
            return
        # 9) binary search
        if op == 9:
            w(f"{args.n}\n")
            base = sorted([rint(-10**6, 10**6) if args.random else i for i in range(args.n)])
            w(" ".join(map(str, base)) + "\n")
            target = base[args.n//2] if (rep % 2 == 0) else (base[-1] + 1)
            w(f"{target}\n")
            return
        # 10) dijkstra
        if op == 10:
            g = args.g
            w(f"{g}\n")
            mat = gen_matrix(rng, g) if args.random else gen_matrix(rng, g, density=1.0, wmax=10)
            for i in range(g):
                w(" ".join(map(str, mat[i])) + "\n")
            src = rng.randint(0, g-1) if args.random else 0
            w(f"{src}\n")
            return

        raise ValueError("op must be in 1..10")

    for rep in range(args.k):
        if args.op is None:
            # unified format (with opcodes)
            w(f"1 {rint(-10**9, 10**9)}\n")

            arm = [0,1,2,3,4,5,6,7,8,9,153,370,371,407,9474]
            x = arm[rep % len(arm)] if not args.random else rng.choice(arm + [rng.randint(0, 10**9)])
            w(f"2 {x}\n")

            w(f"3 {args.avg_n}\n")
            if args.random:
                nums = [rng.uniform(-1000, 1000) for _ in range(args.avg_n)]
            else:
                nums = [float(i - args.avg_n//2) for i in range(args.avg_n)]
            for v in nums:
                w(f"{v}\n")

            w(f"4 {rint(0, 2**31-1)}\n")

            y1,m1,d1 = rand_date(rng) if args.random else (2000,1,1)
            y2,m2,d2 = rand_date(rng) if args.random else (2020,12,31)
            w(f"5 {y1} {m1} {d1} {y2} {m2} {d2}\n")

            w(f"6 {args.n}\n")
            arr = [rint(-10**6, 10**6) if args.random else (i - args.n//2) for i in range(args.n)]
            w(" ".join(map(str, arr)) + "\n")

            w(f"7 {args.n}\n")
            arr2 = [rint(-10**6, 10**6) if args.random else (args.n - i) for i in range(args.n)]
            w(" ".join(map(str, arr2)) + "\n")

            w(f"8 {args.n}\n")
            arr3 = [rint(-10**6, 10**6) if args.random else (i*3 % 97) for i in range(args.n)]
            w(" ".join(map(str, arr3)) + "\n")

            w(f"9 {args.n}\n")
            base = sorted([rint(-10**6, 10**6) if args.random else i for i in range(args.n)])
            w(" ".join(map(str, base)) + "\n")
            target = base[args.n//2] if (rep % 2 == 0) else (base[-1] + 1)
            w(f"{target}\n")

            g = args.g
            w(f"10 {g}\n")
            mat = gen_matrix(rng, g) if args.random else gen_matrix(rng, g, density=1.0, wmax=10)
            for i in range(g):
                w(" ".join(map(str, mat[i])) + "\n")
            src = rng.randint(0, g-1) if args.random else 0
            w(f"{src}\n")
        else:
            emit_op(args.op, rep)

    if args.op is None:
        w("0\n")
    if out:
        out.close()

if __name__ == "__main__":
    main()
