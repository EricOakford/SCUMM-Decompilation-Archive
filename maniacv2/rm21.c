/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 21: Dr. Fred's Room
 */

// EN
[0000] (01) putActor(0,2,0);
[0004] (1C) startSound(20);
[0006] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

// Object 211: Dime
Events:
   B - 001C
   E - 0019
[0019] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001B] (00) stopObjectCode();
[001C] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0021] (00) stopObjectCode();
END

// Object 212: Radio Tube
Events:
   E - 001D
[001D] (69) setOwnerOf(73,VAR_EGO);
[0021] (87) setState08(VAR_ACTIVE_OBJECT1);
[0023] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0025] (1A) Var[172] = 0;
[0029] (3C) stopSound(20);
[002B] (3C) stopSound(29);
[002D] (00) stopObjectCode();
END

// Object 235: Ladder
Events:
   D - 0019
[0019] (07) setState08(213);
[001C] (24) loadRoomWithEgo(213,20,255,255);
[0022] (00) stopObjectCode();
END

// Object 396: Wanted Poster
Events:
   1 - 002A
   A - 002A
[002A] (42) startScript(67);
[002C] (00) stopObjectCode();
END

// Object 397: Picture of Nurse Edna
Events:
   C - 0020
[0020] (42) startScript(53);
[0022] (00) stopObjectCode();
END

// Object 398: Tube Socket
Events:
   6 - 0020
   B - 0020
[0020] (48) if (VAR_EGO == 5) {
[0026] (48)   if (VAR_ACTIVE_OBJECT2 == 73) {
[002C] (29)     setOwnerOf(73,14);
[0030] (47)     clearState08(212);
[0033] (17)     clearState02(212);
[0036] (4F)   } else if (getState08(212)) {
[003E] (D8)     printEgo("That doesn't seem to work.");
[0056] (**)   }
[0056] (18) } else {
[0059] (D8)   printEgo("I don't know how!");
[0069] (**) }
[0069] (00) stopObjectCode();
END

// Object 399: Radio
Events:
   4 - 002C
   5 - 009B
   6 - 001E
   B - 00BA
[001E] (48) if (VAR_ACTIVE_OBJECT2 == 73) {
[0024] (19)   doSentence(6,398,0,0);
[002B] (**) }
[002B] (00) stopObjectCode();
[002C] (0F) if (!getState08(212)) {
[0031] (0F)   if (!getState08(157)) {
[0036] (48)     if (Var[172] == 0) {
[003C] (1A)       Var[172] = 1;
[0040] (1C)       startSound(20);
[0042] (**)     }
[0042] (**)   }
[0042] (48) } else if (VAR_EGO == 5) {
[004B] (D8)   printEgo("It's missing a type W-88 vacuum tube.");
[006C] (18) } else {
[006F] (D8)   printEgo("I can't get it to work.\x01It might be missing a part.");
[009A] (**) }
[009A] (00) stopObjectCode();
[009B] (48) if (Var[172] == 0) {
[00A1] (D8)   printEgo("It wasn't on.");
[00AE] (18) } else {
[00B1] (1A)   Var[172] = 0;
[00B5] (3C)   stopSound(20);
[00B7] (3C)   stopSound(29);
[00B9] (**) }
[00B9] (00) stopObjectCode();
[00BA] (48) if (Var[172] == 0) {
[00C0] (D8)   printEgo("It's not turned on.");
[00D2] (48) } else if (Var[162] == 3) {
[00DB] (D8)   printEgo("The meteor was already picked up.");
[00F9] (18) } else {
[00FC] (68)   VAR_RESULT = isScriptRunning(136);
[00FF] (48)   if (VAR_RESULT == 0) {
[0105] (42)     startScript(41);
[0107] (18)   } else {
[010A] (D8)     printEgo("The police are on their way.");
[0123] (**)   }
[0123] (**) }
[0123] (00) stopObjectCode();
END

// Object 400
Events:
END

// Object 465: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(460);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(460);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(460,38,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END
