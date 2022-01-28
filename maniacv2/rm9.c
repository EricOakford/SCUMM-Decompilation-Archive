/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 9: Safe Attic
 */

// Object 217: Hatch
Events:
   1 - 0020
   2 - 0023
   A - 0026
   D - 0032
   E - 0020
[0020] (42) startScript(10);
[0022] (00) stopObjectCode();
[0023] (42) startScript(11);
[0025] (00) stopObjectCode();
[0026] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002A] (42)   startScript(11);
[002C] (18) } else {
[002F] (42)   startScript(10);
[0031] (**) }
[0031] (00) stopObjectCode();
[0032] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0036] (48)   if (Var[125] == 0) {
[003C] (48)     if (Var[161] == 0) {
[0042] (2D)       putActorInRoom(10,19);
[0045] (01)       putActor(10,34,64);
[0049] (11)       animateActor(10,250);
[004C] (42)       startScript(39);
[004E] (**)     }
[004E] (**)   }
[004E] (24)   loadRoomWithEgo(231,19,255,255);
[0054] (**) }
[0054] (00) stopObjectCode();
END

// Object 218: Painting
Events:
   1 - 001F
   2 - 0022
   A - 001F
[001F] (42) startScript(10);
[0021] (00) stopObjectCode();
[0022] (42) startScript(11);
[0024] (47) clearState08(219);
[0027] (00) stopObjectCode();
END

// Object 219: Wall Safe
Events:
   1 - 0020
   2 - 0027
   B - 0020
[0020] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0024] (42)   startScript(45);
[0026] (**) }
[0026] (00) stopObjectCode();
[0027] (42) startScript(11);
[0029] (47) clearState08(218);
[002C] (00) stopObjectCode();
END

// Object 221: Quarter
Events:
   B - 001A
[001A] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[001F] (00) stopObjectCode();
END

// Object 222: Envelope
Events:
   1 - 0040
   B - 003D
   C - 0059
   E - 0033
[0033] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0035] (50) pickupObject(221);
[0038] (29) setOwnerOf(221,14);
[003C] (00) stopObjectCode();
[003D] (42) startScript(86);
[003F] (00) stopObjectCode();
[0040] (0F) if (!getState08(222)) {
[0045] (19)   doSentence(1,222,0,0);
[004C] (19)   doSentence(14,222,0,0);
[0053] (18) } else {
[0056] (42)   startScript(85);
[0058] (**) }
[0058] (00) stopObjectCode();
[0059] (48) if (Var[104] == 0) {
[005F] (D8)   printEgo("It's a blank envelope.");
[0074] (18) } else {
[0077] (D8)   printEgo("It's addressed to: 222 Skyscraper Way.");
[009A] (**) }
[009A] (00) stopObjectCode();
END

// Object 305: Light
Events:
   4 - 001C
   5 - 0026
   A - 0030
[001C] (1C) startSound(12);
[001E] (9B) setBitVar(2816,VAR_ROOM,0);
[0023] (42) startScript(55);
[0025] (00) stopObjectCode();
[0026] (1C) startSound(12);
[0028] (9B) setBitVar(2816,VAR_ROOM,1);
[002D] (42) startScript(55);
[002F] (00) stopObjectCode();
[0030] (B1) VAR_RESULT = getBitVar(2816,VAR_ROOM);
[0035] (48) if (VAR_RESULT == 0) {
[003B] (19)   doSentence(5,305,0,0);
[0042] (18) } else {
[0045] (19)   doSentence(4,305,0,0);
[004C] (**) }
[004C] (00) stopObjectCode();
END

// Object 421: Scrawled Number
Events:
   C - 0022
[0022] (D8) printEgo("It's too tiny to read!");
[0036] (00) stopObjectCode();
END
