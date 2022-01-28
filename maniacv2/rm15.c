/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 15: Wire Attic
 */

// Object 223: Hatch
Events:
   1 - 0020
   2 - 0026
   A - 002C
   D - 0038
   E - 0020
[0020] (42) startScript(10);
[0022] (07) setState08(102);
[0025] (00) stopObjectCode();
[0026] (42) startScript(11);
[0028] (47) clearState08(102);
[002B] (00) stopObjectCode();
[002C] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0030] (42)   startScript(11);
[0032] (18) } else {
[0035] (42)   startScript(10);
[0037] (**) }
[0037] (00) stopObjectCode();
[0038] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[003C] (24)   loadRoomWithEgo(102,27,255,255);
[0042] (**) }
[0042] (00) stopObjectCode();
END

// Object 225: Wires (left)
Events:
   1 - 0099
   2 - 0099
   4 - 0099
   5 - 0099
   6 - 0028
   9 - 0099
   A - 0099
   B - 0028
   E - 0099
[0028] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[002C] (4F)   if (getState08(157)) {
[0031] (48)     if (VAR_ACTIVE_OBJECT2 == 152) {
[0037] (10)       VAR_RESULT = getObjectOwner(84);
[003B] (C8)       if (VAR_RESULT == VAR_EGO) {
[0040] (48)         if (Var[156] == 1) {
[0046] (87)           setState08(VAR_ACTIVE_OBJECT1);
[0048] (D8)           printEgo("There, that should do it.");
[005F] (42)           startScript(101);
[0061] (18)         } else {
[0067] (18)           goto 008E;
[006A] (**)         }
[006A] (**)       }
[006A] (D8)       printEgo("It's kind of dark,\x03but I think I fixed it.");
[008E] (**)     }
[008E] (18)   } else {
[0091] (19)     doSentence(1,225,0,0);
[0098] (**)   }
[0098] (**) }
[0098] (00) stopObjectCode();
[0099] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[009D] (0F)   if (!getState08(157)) {
[00A2] (D8)     printEgo("YOWL!!!");
[00AB] (1C)     startSound(27);
[00AD] (18)   } else {
[00B0] (D8)     printEgo("I can't fix it with my bare hands!");
[00CD] (**)   }
[00CD] (**) }
[00CD] (00) stopObjectCode();
END

// Object 407: Boarded Up Window
Events:
   1 - 002A
   6 - 0041
   A - 002A
   B - 0041
[002A] (D8) printEgo("The boards won't budge.");
[0040] (00) stopObjectCode();
[0041] (48) if (VAR_ACTIVE_OBJECT2 == 152) {
[0047] (D8)   printEgo("Hmm. I don't have the right tool.");
[0064] (**) }
[0064] (00) stopObjectCode();
END

// Object 408: Light
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

// Object 422: Wires (right)
Events:
END