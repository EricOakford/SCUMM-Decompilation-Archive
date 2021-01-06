/**
 * Maniac Mansion: V1 Demo
 * 
 * Room 5: Library
 */

// EX
[0000] (00) stopObjectCode();
END

// Object 135: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(126);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(126);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(126,3,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 136: Phone
Events:
   6 - 0060
   B - 001C
   E - 003E
[001C] (EF) if (getState04(VAR_ACTIVE_OBJECT1)) {
[0020] (42)   startScript(34);
[0022] (D8)   printEgo("It seems to be broken.");
[0036] (18) } else {
[0039] (42)   startScript(33);
[003B] (42)   startScript(30);
[003D] (**) }
[003D] (00) stopObjectCode();
[003E] (42) startScript(34);
[0040] (EF) if (getState04(VAR_ACTIVE_OBJECT1)) {
[0044] (D8)   printEgo("It seems to be broken.");
[0058] (18) } else {
[005B] (42)   startScript(34);
[005D] (1C)   startSound(21);
[005F] (**) }
[005F] (00) stopObjectCode();
[0060] (EF) if (getState04(VAR_ACTIVE_OBJECT1)) {
[0064] (48)   if (VAR_EGO == 7) {
[006A] (18)   } else {
[006D] (48)     unless (VAR_EGO == 5) goto 00AF;
[0073] (**)   }
[0073] (48)   if (VAR_ACTIVE_OBJECT2 == 152) {
[0079] (E7)     clearState04(VAR_ACTIVE_OBJECT1);
[007B] (D8)     printEgo("That should do it.");
[008C] (18)   } else {
[008F] (D8)     printEgo("I need some tools or something?!");
[00AC] (**)   }
[00AC] (18)   goto 00D4;
[00AF] (D8)   printEgo("I don't know anything about electronics!");
[00D4] (**) }
[00D4] (00) stopObjectCode();
END

// Object 189: Cassette Tape
Events:
   3 - 002D
   B - 0027
   E - 0024
[0024] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0026] (00) stopObjectCode();
[0027] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002C] (00) stopObjectCode();
[002D] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[0033] (48)   if (VAR_ROOM == 20) {
[0039] (42)     startScript(107);
[003B] (**)   }
[003B] (**) }
[003B] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[0041] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0044] (**) }
[0044] (00) stopObjectCode();
END

// Object 254: Loose Panel
Events:
   1 - 0024
   2 - 0027
   9 - 002A
   A - 002A
[0024] (87) setState08(VAR_ACTIVE_OBJECT1);
[0026] (00) stopObjectCode();
[0027] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0029] (00) stopObjectCode();
[002A] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002E] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0030] (18) } else {
[0033] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0035] (**) }
[0035] (00) stopObjectCode();
END

// Object 327: Lamp (left)
Events:
   4 - 0019
   5 - 0027
[0019] (1C) startSound(12);
[001B] (9B) setBitVar(2816,VAR_ROOM,0);
[0020] (42) startScript(55);
[0022] (1A) Var[133] = 1;
[0026] (00) stopObjectCode();
[0027] (1C) startSound(12);
[0029] (1A) Var[133] = 0;
[002D] (48) if (Var[134] == 0) {
[0033] (9B)   setBitVar(2816,VAR_ROOM,1);
[0038] (42)   startScript(55);
[003A] (**) }
[003A] (00) stopObjectCode();
END

// Object 328: Lamp (right)
Events:
   4 - 0019
   5 - 0027
[0019] (1C) startSound(12);
[001B] (9B) setBitVar(2816,VAR_ROOM,0);
[0020] (42) startScript(55);
[0022] (1A) Var[134] = 1;
[0026] (00) stopObjectCode();
[0027] (1C) startSound(12);
[0029] (1A) Var[134] = 0;
[002D] (48) if (Var[133] == 0) {
[0033] (9B)   setBitVar(2816,VAR_ROOM,1);
[0038] (42)   startScript(55);
[003A] (**) }
[003A] (00) stopObjectCode();
END

// Object 329: Staircase
Events:
   6 - 0037
   B - 0037
   D - 0020
[0020] (D8) printEgo("Staircase out of order.");
[0036] (00) stopObjectCode();
[0037] (D8) printEgo("I can't fix the stairs with that.");
[0054] (00) stopObjectCode();
END

// Object 330: Chuck the Plant
Events:
END

// Object 331: Chair
Events:
END

// Object 447: Sign
Events:
   6 - 0030
   C - 0019
[0019] (D8) printEgo("Staircase out of order.");
[002F] (00) stopObjectCode();
[0030] (48) if (VAR_ACTIVE_OBJECT2 == 152) {
[0036] (D8)   printEgo("I'm not a carpenter.");
[0049] (18) } else {
[004C] (D8)   printEgo("That won't work.");
[005C] (**) }
[005C] (00) stopObjectCode();
END
