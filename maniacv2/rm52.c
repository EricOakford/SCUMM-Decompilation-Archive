/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 52: Destroyed Garage
 */

// EN
[0000] (3C) stopSound(32);
[0002] (00) stopObjectCode();
END

// EX
[0000] (01) putActor(1,0,2);
[0004] (00) stopObjectCode();
[0005] (1C) startSound(32);
[0007] (00) stopObjectCode();
END

// Object 108: Gate
Events:
   1 - 001F
   2 - 0038
   9 - 0038
   A - 001F
   D - 003E
[001F] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0023] (42)   startScript(121);
[0025] (07)   setState08(138);
[0028] (18) } else {
[002B] (D8)   printEgo("It's locked");
[0037] (**) }
[0037] (00) stopObjectCode();
[0038] (42) startScript(122);
[003A] (47) clearState08(138);
[003D] (00) stopObjectCode();
[003E] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0042] (24)   loadRoomWithEgo(138,6,255,255);
[0048] (**) }
[0048] (00) stopObjectCode();
END
