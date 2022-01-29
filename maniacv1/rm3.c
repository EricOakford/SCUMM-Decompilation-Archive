/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 3: Living Room
 */

// EN
[0000] (15) Var[72] = actorFromPos(1,1);
[0004] (00) stopObjectCode();
[0005] (02) startMusic(0);
[0007] (1C) startSound(25);
[0009] (4F) if (getState08(228)) {
[000E] (48)   if (Var[157] == 44) {
[0014] (1C)     startSound(44);
[0016] (**)   }
[0016] (**) }
[0016] (48) if (Var[173] == 1) {
[001C] (1C)   startSound(20);
[001E] (**) }
[001E] (00) stopObjectCode();
END

// EX
[0000] (3C) stopSound(29);
[0002] (3C) stopSound(44);
[0004] (20) stopMusic();
[0005] (00) stopObjectCode();
END

// Object 71: Door to Foyer
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(70);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(70);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(70,10,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 72: Old Fashion Radio
Events:
   1 - 002E
   2 - 0039
   4 - 006D
   5 - 009D
   6 - 003C
   B - 00BE
[002E] (87) setState08(VAR_ACTIVE_OBJECT1);
[0030] (1A) Var[173] = 0;
[0034] (3C) stopSound(20);
[0036] (3C) stopSound(29);
[0038] (00) stopObjectCode();
[0039] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[003B] (00) stopObjectCode();
[003C] (48) if (VAR_ACTIVE_OBJECT2 == 73) {
[0042] (47)   clearState08(73);
[0045] (17)   clearState02(73);
[0048] (29)   setOwnerOf(73,0);
[004C] (4F) } else if (getState08(73)) {
[0054] (D8)   printEgo("That doesn't seem to work.");
[006C] (**) }
[006C] (00) stopObjectCode();
[006D] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[006F] (0F) if (!getState08(73)) {
[0074] (0F)   if (!getState08(157)) {
[0079] (48)     if (Var[173] == 0) {
[007F] (1A)       Var[173] = 1;
[0083] (1C)       startSound(20);
[0085] (**)     }
[0085] (**)   }
[0085] (18) } else {
[0088] (D8)   printEgo("I can't get it to work.");
[009C] (**) }
[009C] (00) stopObjectCode();
[009D] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[009F] (48) if (Var[173] == 0) {
[00A5] (D8)   printEgo("It wasn't on.");
[00B2] (18) } else {
[00B5] (1A)   Var[173] = 0;
[00B9] (3C)   stopSound(20);
[00BB] (3C)   stopSound(29);
[00BD] (**) }
[00BD] (00) stopObjectCode();
[00BE] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[00C0] (48) if (Var[173] == 0) {
[00C6] (D8)   printEgo("It's not turned on.");
[00D8] (18) } else {
[00DB] (1C)   startSound(29);
[00DD] (**) }
[00DD] (00) stopObjectCode();
END

// Object 73: Radio Tube
Events:
   B - 0049
   E - 001F
[001F] (48) if (VAR_EGO == 5) {
[0025] (D0)   pickupObject(VAR_ACTIVE_OBJECT1);
[0027] (18) } else {
[002A] (D8)   printEgo("I don't know how this stuff works!");
[0048] (**) }
[0048] (00) stopObjectCode();
[0049] (79) doSentence(6,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[004E] (00) stopObjectCode();
END

// Object 74: Glass Chandelier
Events:
END

// Object 75: Broken Chandelier
Events:
END

// Object 76: Old Rusty Key
Events:
   B - 0025
   E - 0022
[0022] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0024] (00) stopObjectCode();
[0025] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002A] (00) stopObjectCode();
END

// Object 77: Cabinet Door
Events:
   1 - 0021
   2 - 0024
[0021] (42) startScript(10);
[0023] (00) stopObjectCode();
[0024] (42) startScript(11);
[0026] (00) stopObjectCode();
END

// Object 78: Left Window
Events:
END

// Object 79: Right Window
Events:
END

// Object 80: Cassette Tape
Events:
   4 - 0048
   5 - 0054
   E - 0024
[0024] (4F) if (getState08(228)) {
[0029] (D8)   printEgo("It's still playing!");
[003C] (18) } else {
[003F] (69)   setOwnerOf(189,VAR_EGO);
[0043] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0045] (D7)   setState02(VAR_ACTIVE_OBJECT1);
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[004C] (19)   doSentence(4,228,0,0);
[0053] (**) }
[0053] (00) stopObjectCode();
[0054] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0058] (19)   doSentence(5,228,0,0);
[005F] (**) }
[005F] (00) stopObjectCode();
END

// Object 126: Door to Library
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(135);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(135);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(135,5,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 228: Cassette Player
Events:
   4 - 0026
   5 - 005C
   B - 006C
[0026] (0F) if (!getState08(80)) {
[002B] (0F)   if (!getState08(157)) {
[0030] (07)     setState08(228);
[0033] (42)     startScript(109);
[0035] (48)     if (Var[157] == 25) {
[003B] (42)       startScript(21);
[003D] (**)     }
[003D] (**)   }
[003D] (18) } else {
[0040] (D8)   printEgo("There's no tape in the player.");
[005B] (**) }
[005B] (00) stopObjectCode();
[005C] (4F) if (getState08(228)) {
[0061] (47)   clearState08(228);
[0064] (3C)   stopSound(25);
[0066] (3C)   stopSound(44);
[0068] (20)   stopMusic();
[0069] (62)   stopScript(21);
[006B] (**) }
[006B] (00) stopObjectCode();
[006C] (48) if (VAR_ACTIVE_OBJECT2 == 189) {
[0072] (29)   setOwnerOf(189,14);
[0076] (47)   clearState08(80);
[0079] (17)   clearState02(80);
[007C] (**) }
[007C] (00) stopObjectCode();
END

// Object 286: Couch
Events:
   9 - 001A
   A - 001A
[001A] (D8) printEgo("I can't budge it.");
[002A] (00) stopObjectCode();
END

// Object 452: Key
Events:
   A - 0018
   E - 0018
[0018] (D8) printEgo("I can't reach it.");
[0028] (00) stopObjectCode();
END
