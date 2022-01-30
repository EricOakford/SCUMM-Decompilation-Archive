/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 11: Foyer Upstairs
 */

// Object 179: Stairs
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(230,10,255,255);
[001F] (00) stopObjectCode();
END

// Object 180: Door to Art Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(197);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(197);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(197,14,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 181: Door to Music Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(185);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(185);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(185,17,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 182: Steel Security Door
Events:
   1 - 002A
   2 - 0032
   D - 0038
[002A] (19) doSentence(11,500,0,0);
[0031] (00) stopObjectCode();
[0032] (42) startScript(11);
[0034] (47) clearState08(193);
[0037] (00) stopObjectCode();
[0038] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[003C] (80)   breakHere();
[003D] (80)   breakHere();
[003E] (B4)   VAR_RESULT = getDist(VAR_EGO,11);
[0043] (44)   if (VAR_RESULT > 2) {
[0049] (24)     loadRoomWithEgo(193,13,255,255);
[004F] (**)   }
[004F] (**) }
[004F] (00) stopObjectCode();
END

// Object 183: Painting of Fred
Events:
   1 - 0025
   A - 0025
[0025] (42) startScript(67);
[0027] (00) stopObjectCode();
END

// Object 184: Painting of Edna
Events:
   1 - 0025
   A - 0025
[0025] (42) startScript(67);
[0027] (00) stopObjectCode();
END

// Object 362: Wall Lamp (left)
Events:
   4 - 001E
   5 - 002C
[001E] (1C) startSound(12);
[0020] (9B) setBitVar(2816,VAR_ROOM,0);
[0025] (42) startScript(55);
[0027] (1A) Var[136] = 0;
[002B] (00) stopObjectCode();
[002C] (1C) startSound(12);
[002E] (1A) Var[136] = 1;
[0032] (48) if (Var[135] == 1) {
[0038] (9B)   setBitVar(2816,VAR_ROOM,1);
[003D] (42)   startScript(55);
[003F] (**) }
[003F] (00) stopObjectCode();
END

// Object 500: Keypad
Events:
   B - 0019
[0019] (4F) if (getState08(182)) {
[001E] (47)   clearState08(182);
[0021] (47)   clearState08(193);
[0024] (1C)   startSound(9);
[0026] (80)   breakHere();
[0027] (80)   breakHere();
[0028] (**) }
[0028] (46) Var[192]++;
[002A] (78) if (Var[192] < 4) {
[0030] (42)   startScript(167);
[0032] (18) } else {
[0035] (42)   startScript(62);
[0037] (**) }
[0037] (00) stopObjectCode();
END

// Object 501: Warning Sign
Events:
   C - 001F
[001F] (D8) printEgo("WARNING!\x03Use of unauthorized access codes may\x01cause mondo-damage. Use with caution!\x03Call 1-800-555-NUKM for other fine\x01security products from Nuke'm Alarms.");
[00AC] (AE) waitForMessage();
[00AD] (42) startScript(166);
[00AF] (00) stopObjectCode();
END