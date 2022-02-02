/**
 * Zak McKracken: V2 Retail
 * 
 * Room 2: Zak's Apartment
 */

// EN
[0000] (19) doSentence(253,131,0,1);
[0007] (4F) if (getState08(129)) {
[000C] (1C)   startSound(17);
[000E] (4F)   if (getState08(126)) {
[0013] (42)     startScript(22);
[0015] (**)   }
[0015] (**) }
[0015] (6F) if (getState04(122)) {
[001A] (42)   startScript(21);
[001C] (**) }
[001C] (0C) loadScript(29)
[001F] (10) VAR_RESULT = getObjectOwner(20);
[0023] (08) if (VAR_RESULT != 15) {
[0029] (19)   doSentence(250,127,0,1);
[0030] (**) }
[0030] (6F) if (getState04(21)) {
[0035] (05)   drawObject(115,255,255);
[003A] (42)   startScript(102);
[003C] (**) }
[003C] (31) VAR_RESULT = getBitVar(1546,0);
[0041] (28) if (!VAR_RESULT) {
[0045] (42)   startScript(126);
[0047] (**) }
[0047] (00) stopObjectCode();
END

// EX
[0000] (62) stopScript(22);
[0002] (3C) stopSound(18);
[0004] (47) clearState08(119);
[0007] (19) doSentence(253,128,0,1);
[000E] (6F) if (getState04(21)) {
[0013] (19)   doSentence(253,118,0,1);
[001A] (**) }
[001A] (00) stopObjectCode();
END

// Object 20
Events:
   3 - 0033
   A - 0023
   B - 0023
   E - 0029
[0023] (F9) doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0028] (00) stopObjectCode();
[0029] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[002B] (19) doSentence(250,127,0,1);
[0032] (00) stopObjectCode();
[0033] (00) stopObjectCode();
END

// Object 21
Events:
   B - 0026
   E - 0023
[0023] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0025] (00) stopObjectCode();
[0026] (42) startScript(23);
[0028] (00) stopObjectCode();
END

// Object 22
Events:
   B - 001B
   E - 0018
[0018] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001A] (00) stopObjectCode();
[001B] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0020] (00) stopObjectCode();
END

// Object 23
Events:
   B - 0028
   E - 0021
[0021] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0023] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0025] (E7) clearState04(VAR_ACTIVE_OBJECT1);
[0027] (00) stopObjectCode();
[0028] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002D] (00) stopObjectCode();
END

// Object 24
Events:
   B - 0021
   E - 001E
[001E] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0020] (00) stopObjectCode();
[0021] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0026] (00) stopObjectCode();
END

// Object 25: Yellow Crayon
Events:
   B - 002B
   E - 0023
[0023] (19) doSentence(253,117,0,1);
[002A] (00) stopObjectCode();
[002B] (08) if (VAR_ACTIVE_OBJECT2 != 17) {
[0031] (08)   if (VAR_ACTIVE_OBJECT2 != 15) {
[0037] (79)     doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[003C] (18)     goto 0041;
[003F] (**)   }
[003F] (**) }
[003F] (42) startScript(61);
[0041] (00) stopObjectCode();
END

// Object 26
Events:
   B - 0029
   E - 0026
[0026] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0028] (00) stopObjectCode();
[0029] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002E] (00) stopObjectCode();
END

// Object 111
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(84);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(84);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(84,1,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 112
Events:
   1 - 001B
   2 - 001E
   D - 0021
[001B] (42) startScript(10);
[001D] (00) stopObjectCode();
[001E] (42) startScript(11);
[0020] (00) stopObjectCode();
[0021] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0025] (48)   if (VAR_EGO == 1) {
[002B] (42)     startScript(29);
[002D] (18)   } else {
[0030] (03)     VAR_RESULT = getActorRoom(1);
[0033] (88)     if (VAR_RESULT != VAR_ROOM) {
[0038] (C7)       clearState08(VAR_ACTIVE_OBJECT1);
[003A] (**)     }
[003A] (24)     loadRoomWithEgo(134,3,41,53);
[0040] (**)   }
[0040] (**) }
[0040] (00) stopObjectCode();
END

// Object 113: TV
Events:
   4 - 0017
   5 - 0017
[0017] (10) VAR_RESULT = getObjectOwner(21);
[001B] (C8) if (VAR_RESULT == VAR_EGO) {
[0020] (D8)   printEgo("I have to use the remote control.");
[003D] (18) } else {
[0040] (D8)   printEgo("It doesn't have any controls on it.");
[005F] (**) }
[005F] (00) stopObjectCode();
END

// Object 114
Events:
  FD - 0013
[0013] (16) Var[66] = getRandomNr(5);
[0016] (5A) Var[66] += 2;
[001A] (9A) Var[47] = Var[234];
[001D] (11) animateActor(10,12);
[0020] (80) breakHere();
[0021] (80) breakHere();
[0022] (11) animateActor(10,16);
[0025] (80) breakHere();
[0026] (80) breakHere();
[0027] (46) Var[47]++;
[0029] (C4) unless (Var[47] > Var[66]) goto 001D;
[002E] (2E) delay(30);
[0032] (18) goto 0013;
[0035] (00) stopObjectCode();
END

// Object 115
Events:
  FD - 0013
[0013] (13) ActorOps(10,[Costume(34)]);
[0017] (13) ActorOps(10,[TalkColor(15)]);
[001B] (05) drawObject(115,255,255);
[0020] (2D) putActorInRoom(10,2);
[0023] (01) putActor(10,16,48);
[0027] (11) animateActor(10,250);
[002A] (00) stopObjectCode();
END

// Object 116
Events:
END

// Object 117: Box of Crayons
Events:
  FD - 0022
[0022] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0024] (17) clearState02(126);
[0027] (54) setObjectName(25,"yellow crayon");
[0038] (2E) delay(120);
[003C] (D8) printEgo("Hmm. Only one yellow crayon left.");
[005A] (00) stopObjectCode();
END

// Object 118
Events:
   A - 008E
   B - 0023
  FD - 00AD
[0023] (48) if (VAR_ACTIVE_OBJECT2 == 20) {
[0029] (87)   setState08(VAR_ACTIVE_OBJECT1);
[002B] (9E)   walkActorTo(VAR_EGO,27,57);
[002F] (19)   doSentence(253,131,0,1);
[0036] (18) } else {
[0039] (48)   if (VAR_ACTIVE_OBJECT2 == 24) {
[003F] (18)   } else {
[0042] (9D)     unless (classOfIs(VAR_ACTIVE_OBJECT2,16)) goto 008B;
[0047] (**)   }
[0047] (48)   if (VAR_EGO == 1) {
[004D] (1C)     startSound(29);
[004F] (2E)     delay(30);
[0053] (11)     animateActor(1,246);
[0056] (D8)     printEgo("YOWL!!!");
[005F] (6F)     if (getState04(122)) {
[0064] (80)       breakHere();
[0065] (7C)       VAR_RESULT = isSoundRunning(29);
[0068] (28)       unless (!VAR_RESULT) goto 0064;
[006C] (42)       startScript(21);
[006E] (**)     }
[006E] (18)   } else {
[0071] (11)     animateActor(2,246);
[0074] (D8)     printEgo("That would be stupid!");
[0088] (**)   }
[0088] (18)   goto 008D;
[008B] (42)   startScript(3);
[008D] (**) }
[008D] (00) stopObjectCode();
[008E] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0090] (19) doSentence(253,131,0,1);
[0097] (47) clearState08(20);
[009A] (17) clearState02(20);
[009D] (6F) if (getState04(21)) {
[00A2] (67)   clearState04(21);
[00A5] (19)   doSentence(253,118,0,1);
[00AC] (**) }
[00AC] (00) stopObjectCode();
[00AD] (62) stopScript(102);
[00AF] (14) print(255,"");
[00B2] (2D) putActorInRoom(10,0);
[00B5] (2D) putActorInRoom(11,0);
[00B8] (47) clearState08(133);
[00BB] (47) clearState08(120);
[00BE] (47) clearState08(114);
[00C1] (47) clearState08(115);
[00C4] (47) clearState08(116);
[00C7] (00) stopObjectCode();
END

// Object 119
Events:
   1 - 0033
   2 - 0029
   9 - 0041
   A - 0041
   E - 0033
  FD - 004F
[0029] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[002B] (19) doSentence(254,119,0,1);
[0032] (00) stopObjectCode();
[0033] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0037] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0039] (19)   doSentence(250,119,0,1);
[0040] (**) }
[0040] (00) stopObjectCode();
[0041] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0045] (18)   goto 0037;
[0048] (18) } else {
[004B] (18)   goto 0029;
[004E] (**) }
[004E] (00) stopObjectCode();
[004F] (80) breakHere();
[0050] (B4) VAR_RESULT = getDist(VAR_EGO,119);
[0055] (44) unless (VAR_RESULT > 0) goto 004F;
[005B] (47) clearState08(119);
[005E] (00) stopObjectCode();
END

// Object 120
Events:
END

// Object 121
Events:
   1 - 0020
   2 - 0023
   9 - 0023
   A - 0020
[0020] (42) startScript(10);
[0022] (00) stopObjectCode();
[0023] (42) startScript(11);
[0025] (00) stopObjectCode();
END

// Object 122
Events:
   4 - 001B
   5 - 0021
[001B] (27) setState04(122);
[001E] (42) startScript(21);
[0020] (00) stopObjectCode();
[0021] (67) clearState04(122);
[0024] (62) stopScript(21);
[0026] (3C) stopSound(18);
[0028] (00) stopObjectCode();
END

// Object 123
Events:
   4 - 001B
   5 - 001B
[001B] (99) doSentence(VAR_ACTIVE_VERB,129,0,0);
[0022] (00) stopObjectCode();
END

// Object 124
Events:
   1 - 001E
   4 - 001E
   5 - 001E
   B - 001E
[001E] (D8) printEgo("I don't feel like cooking.");
[0036] (00) stopObjectCode();
END

// Object 125
Events:
   1 - 0025
   2 - 0028
   9 - 0028
   A - 0025
[0025] (42) startScript(10);
[0027] (00) stopObjectCode();
[0028] (42) startScript(11);
[002A] (00) stopObjectCode();
END

// Object 126
Events:
   1 - 001B
   2 - 0050
   B - 006C
[001B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[001F] (D8)   printEgo("I'll need some tools for that.");
[003A] (18) } else {
[003D] (D8)   printEgo("It's already open.");
[004F] (**) }
[004F] (00) stopObjectCode();
[0050] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0054] (18)   goto 001F;
[0057] (**) }
[0057] (D8) printEgo("It's already closed.");
[006B] (00) stopObjectCode();
[006C] (48) if (VAR_ACTIVE_OBJECT2 == 35) {
[0072] (1C)   startSound(35);
[0074] (60)   cursorCommand(15, 2);
[0077] (80)   breakHere();
[0078] (7C)   VAR_RESULT = isSoundRunning(35);
[007B] (28)   unless (!VAR_RESULT) goto 0077;
[007F] (60)   cursorCommand(247, 1);
[0082] (0F)   if (!getState08(126)) {
[0087] (07)     setState08(126);
[008A] (6F)     if (getState04(23)) {
[008F] (07)       setState08(23);
[0092] (17)       clearState02(23);
[0095] (67)       clearState04(23);
[0098] (**)     }
[0098] (4F)     if (getState08(129)) {
[009D] (42)       startScript(22);
[009F] (**)     }
[009F] (18)   } else {
[00A2] (47)     clearState08(126);
[00A5] (9A)     Var[44] = Var[234];
[00A8] (**)   }
[00A8] (18) } else {
[00AB] (42)   startScript(3);
[00AD] (**) }
[00AD] (00) stopObjectCode();
END

// Object 127
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (B4) VAR_RESULT = getDist(VAR_EGO,118);
[0019] (44) unless (VAR_RESULT > 0) goto 0013;
[001F] (19) doSentence(253,128,0,1);
[0026] (00) stopObjectCode();
END

// Object 128
Events:
  FD - 0013
[0013] (29) setOwnerOf(20,0);
[0017] (29) setOwnerOf(20,15);
[001B] (0F) if (!getState08(118)) {
[0020] (47)   clearState08(20);
[0023] (17)   clearState02(20);
[0026] (**) }
[0026] (00) stopObjectCode();
END

// Object 129
Events:
   4 - 001B
   5 - 002D
   B - 0038
[001B] (87) setState08(VAR_ACTIVE_OBJECT1);
[001D] (07) setState08(123);
[0020] (1C) startSound(17);
[0022] (4F) if (getState08(126)) {
[0027] (42)   startScript(22);
[0029] (**) }
[0029] (67) clearState04(23);
[002C] (00) stopObjectCode();
[002D] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[002F] (47) clearState08(123);
[0032] (3C) stopSound(17);
[0034] (9A) Var[44] = Var[234];
[0037] (00) stopObjectCode();
[0038] (48) if (VAR_ACTIVE_OBJECT2 == 29) {
[003E] (29)   setOwnerOf(29,14);
[0042] (07)   setState08(130);
[0045] (17)   clearState02(130);
[0048] (48) } else if (VAR_ACTIVE_OBJECT2 == 14) {
[0051] (C8)   if (Var[138] == Var[234]) {
[0056] (54)     setObjectName(14,"fish bowl");
[0063] (6F)     if (getState04(14)) {
[0068] (54)       setObjectName(14,"taped fish bowl");
[007B] (**)     }
[007B] (1A)     Var[138] = 2;
[007F] (1C)     startSound(36);
[0081] (D8)     printEgo("Hey Sushi, hope you're happy there.");
[00A1] (48)   } else if (Var[138] == 2) {
[00AA] (54)     setObjectName(14,"Sushi in fish bowl");
[00C0] (1C)     startSound(36);
[00C2] (9A)     Var[138] = Var[234];
[00C5] (D8)     printEgo("Welcome home, Sushi!");
[00D9] (18)   } else {
[00DC] (D8)     printEgo("Sushi's not here.");
[00ED] (**)   }
[00ED] (48) } else if (VAR_ACTIVE_OBJECT2 == 22) {
[00F6] (D8)   printEgo("It's a perfectly good egg.");
[010E] (18) } else {
[0111] (D8)   printEgo("I don't want to put that in the \x06\x09.");
[012E] (**) }
[012E] (00) stopObjectCode();
END

// Object 130
Events:
   E - 001E
[001E] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0020] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0022] (69) setOwnerOf(29,VAR_EGO);
[0026] (00) stopObjectCode();
END

// Object 131
Events:
   A - 0023
   E - 0023
  FD - 0054
[0023] (60) cursorCommand(15, 2);
[0026] (87) setState08(VAR_ACTIVE_OBJECT1);
[0028] (D7) setState02(VAR_ACTIVE_OBJECT1);
[002A] (D8) printEgo("Good idea! This place is a mess!");
[0046] (80) breakHere();
[0047] (B6) walkActorToObject(VAR_EGO,132);
[004B] (BB) waitForActor(VAR_EGO);
[004D] (47) clearState08(132);
[0050] (60) cursorCommand(247, 1);
[0053] (00) stopObjectCode();
[0054] (4F) if (getState08(118)) {
[0059] (54)   setObjectName(118,"power cord");
[0067] (18) } else {
[006A] (54)   setObjectName(118,"power outlet");
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 132
Events:
END

// Object 133
Events:
END
