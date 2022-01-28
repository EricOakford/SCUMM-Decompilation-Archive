/**
 * Maniac Mansion: V1 Demo
 * 
 * Room 44: Driveway
 */

// EN
[0000] (3C) stopSound(32);
[0002] (42) startScript(57);
[0004] (00) stopObjectCode();
END

// EX
[0000] (68) VAR_RESULT = isScriptRunning(12);
[0003] (48) if (VAR_RESULT == 1) {
[0009] (1C)   startSound(32);
[000B] (**) }
[000B] (00) stopObjectCode();
END

// Object 258: Path to House
Events:
   D - 0013
[0013] (24) loadRoomWithEgo(257,1,255,255);
[0019] (00) stopObjectCode();
END

// Object 278: Warning Sign
Events:
   C - 0017
[0017] (D8) printEgo("WARNING!!\x03Trespassers will be horribly mutilated.");
[0046] (00) stopObjectCode();
END
