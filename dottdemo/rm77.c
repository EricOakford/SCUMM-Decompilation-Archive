// EN
[0000] (5D) if (isScriptRunning(3)) {
[0007] (5E)   startScript(0,139,[])
[0011] (73) } else {
[0014] (5F)   startScriptQuick(93,[1])
[001E] (9C)   roomOps.setScreen(0,200)
[0026] (**) }
[0026] (65) stopObjectCodeA()
END

// EX
[0000] (5D) if (!isScriptRunning(3)) {
[0008] (9C)   roomOps.setScreen(0,144)
[0010] (5F)   startScriptQuick(93,[2])
[001A] (**) }
[001A] (65) stopObjectCodeA()
END

// Object 751
Events:
END
