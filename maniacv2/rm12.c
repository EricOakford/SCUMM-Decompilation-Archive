/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 12: Outside Dark Room
 */

// EN
[0000] (00) stopObjectCode();
[0001] (00) stopObjectCode();
[0002] (18) goto 4805;
[0005] (69) setOwnerOf(0,VAR_CHARCOUNT);
[0009] (00) stopObjectCode();
[000A] (2D) putActorInRoom(14,12);
[000D] (01) putActor(14,17,52);
[0011] (03) VAR_RESULT = getActorRoom(11);
[0014] (08) if (VAR_RESULT != 12) {
[001A] (42)   startScript(51);
[001C] (**) }
[001C] (00) stopObjectCode();
END

// EX
[0000] (48) if (Var[99] == 1) {
[0006] (2D)   putActorInRoom(14,20);
[0009] (01)   putActor(14,68,58);
[000D] (1A)   Var[105] = 0;
[0011] (**) }
[0011] (00) stopObjectCode();
END

// Object 386: Lovely Plant
Events:
END

// Object 387: Window 1
Events:
END

// Object 388: Window 2
Events:
END

// Object 389: Window 3
Events:
END

// Object 456: Downstairs
Events:
   D - 0019
[0019] (1A) Var[105] = 0;
[001D] (60) cursorCommand(247, 1);
[0020] (24) loadRoomWithEgo(194,13,255,255);
[0026] (00) stopObjectCode();
END

// Object 457: Upstairs
Events:
   D - 0019
[0019] (48) if (Var[103] == 0) {
[001F] (1A)   Var[103] = 1;
[0023] (42)   startScript(111);
[0025] (**) }
[0025] (24) loadRoomWithEgo(229,38,255,255);
[002B] (00) stopObjectCode();
END

// Object 458: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(459);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(459);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(459,23,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END
