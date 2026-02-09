#@category Decompile
#@menupath Tools.Decompile.AllFunctions

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor

args = getScriptArgs()
out_path = args[0] if len(args) > 0 else "decompiled.c"

monitor = ConsoleTaskMonitor()

ifc = DecompInterface()
ifc.openProgram(currentProgram)

fm = currentProgram.getFunctionManager()
funcs = fm.getFunctions(True)

with open(out_path, "w") as f:
    f.write("/* Ghidra decompiler output (pseudo-C) */\n\n")
    for func in funcs:
        res = ifc.decompileFunction(func, 60, monitor)
        if res and res.decompileCompleted():
            c = res.getDecompiledFunction().getC()
            f.write("\n/* ===== Function: {} ===== */\n".format(func.getName()))
            f.write(c)
            f.write("\n")
        else:
            f.write("\n/* ===== Function: {} (decompile failed) ===== */\n".format(func.getName()))
            f.write("/* reason: {} */\n".format(res.getErrorMessage() if res else "unknown"))

