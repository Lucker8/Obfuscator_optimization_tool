#!/usr/bin/env python3
from itertools import combinations
from typing import List

def powerset_named(items: List[str]) -> List[List[str]]:
    """All subsets including empty, as lists (order preserved by combination length then items)."""
    out: List[List[str]] = [[]]
    for r in range(1, len(items) + 1):
        for comb in combinations(items, r):
            out.append(list(comb))
    return out

def main():
    # ----- Your fixed assumptions -----
    P = 10  # number of benchmark programs
    input_seeds = [1]     # fixed inputs for all programs
    llvm_seeds = [1]      # fixed LLVM seed (or fixed config)
    tigress_seeds = [1]

    # Compiler optimization levels
    opt_levels = ["O0", "O1", "O2", "O3"]

    # Tigress transform sets you will consider (including empty = no Tigress)
    # Keep this list small and explicit for thesis clarity.
    tigress_sets = [
        [],  # none
        ["Flatten"],
        ["EncodeArithmetic"],
        ["Flatten", "EncodeArithmetic"],
    ]

    # LLVM obfuscation pass sets (including empty = no LLVM obfuscation)
    # Option A: explicit list (recommended: keeps space controlled + explainable)
    llvm_sets = [
        [],  # none
        ["fla"],
        ["bcf"],
        ["sub"],
        ["fla", "bcf"],
        ["fla", "sub"],
        ["bcf", "sub"],
        ["fla", "bcf", "sub"],
    ]

    # Option B: generate all subsets automatically from a base list
    # (Uncomment to use; note it grows the space)
    # llvm_base = ["fla", "bcf", "sub"]
    # llvm_sets = powerset_named(llvm_base)

    # ----- Search space calculation -----
    O = len(opt_levels)
    T = len(tigress_sets)
    L = len(llvm_sets)
    Sin = len(input_seeds)
    Sllvm = len(llvm_seeds)
    St = len(tigress_seeds)

    per_program = O * T * L * Sin * Sllvm * St
    total = P * per_program

    print("Assumptions")
    print(f"  programs P              = {P}")
    print(f"  opt levels |O|          = {O}  -> {opt_levels}")
    print(f"  tigress sets |T|        = {T}  -> {tigress_sets}")
    print(f"  llvm pass sets |L|      = {L}  -> {llvm_sets}")
    print(f"  input seeds |S_in|      = {Sin} -> {input_seeds}")
    print(f"  llvm seeds |S_llvm|     = {Sllvm} -> {llvm_seeds}")
    print(f"  tigress seeds |S_t|     = {St} -> {tigress_seeds}")
    print()
    print("Search space sizes")
    print(f"  per program  = |O|*|T|*|L|*|S_in|*|S_llvm| = {O}*{T}*{L}*{Sin}*{Sllvm} * {St}= {per_program}")
    print(f"  total        = P * per_program             = {P}*{per_program} = {total}")

if __name__ == "__main__":
    main()
