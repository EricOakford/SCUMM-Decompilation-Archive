/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 49: Hetchel Cutscene (cu-hetch)
 */

// EN
[0000] (1A) Var[321] = 200;
[0005] (05) drawObject(948,255,255);
[000C] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (05) drawObject(948,255,255);
[0007] (2E) delay(60);
[000B] (05) drawObject(947,255,255);
[0012] (80) breakHere();
[0013] (05) drawObject(948,255,255);
[001A] (80) breakHere();
[001B] (05) drawObject(949,255,255);
[0022] (80) breakHere();
[0023] (05) drawObject(950,255,255);
[002A] (80) breakHere();
[002B] (05) drawObject(949,255,255);
[0032] (80) breakHere();
[0033] (05) drawObject(948,255,255);
[003A] (A0) stopObjectCode();
END

// Object 947
Events:
END

// Object 948
Events:
END

// Object 949
Events:
END

// Object 950
Events:
END