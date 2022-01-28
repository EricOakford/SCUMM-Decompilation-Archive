/**
 * Maniac Mansion: V2 Demo
 * 
 * Room 19: Edna's Room
 */

// EN
[0000] (01) putActor(19,0,5);
[0004] (00) stopObjectCode();
[0005] (9B) setBitVar(2816,VAR_ROOM,0);
[000A] (42) startScript(55);
[000C] (68) VAR_RESULT = isScriptRunning(31);
[000F] (48) if (VAR_RESULT == 1) {
[0015] (42)   startScript(31);
[0017] (**) }
[0017] (00) stopObjectCode();
END

// Object 103: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(461);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(461);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(461,38,255,255);
[0031] (60)   cursorCommand(247, 1);
[0034] (**) }
[0034] (00) stopObjectCode();
END

// Object 105: Phone
Events:
END

// Object 107: Small Key
Events:
   B - 0021
   E - 001E
[001E] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0020] (00) stopObjectCode();
[0021] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0026] (00) stopObjectCode();
END

// Object 231: Ladder
Events:
   D - 0019
[0019] (07) setState08(217);
[001C] (24) loadRoomWithEgo(217,9,255,255);
[0022] (00) stopObjectCode();
END

// Object 306: Desk
Events:
END

// Object 307: Cracked Mirror
Events:
END

// Object 308: Mirror
Events:
END

// Object 309: Light
Events:
   4 - 001A
   5 - 0024
[001A] (1C) startSound(12);
[001C] (9B) setBitVar(2816,VAR_ROOM,0);
[0021] (42) startScript(55);
[0023] (00) stopObjectCode();
[0024] (1C) startSound(12);
[0026] (9B) setBitVar(2816,VAR_ROOM,1);
[002B] (42) startScript(55);
[002D] (00) stopObjectCode();
END

// Object 310: Bed
Events:
   B - 0016
[0016] (D8) printEgo("No way!!!");
[0020] (00) stopObjectCode();
END

// Object 311: Picture of Dr. Fred
Events:
   1 - 0028
   A - 0028
[0028] (42) startScript(67);
[002A] (00) stopObjectCode();
END

// Object 313: Night Stand
Events:
END

// Object 314: Plant
Events:
END

// Object 444: Perfume
Events:
END

// Object 445: Pillow
Events:
END
