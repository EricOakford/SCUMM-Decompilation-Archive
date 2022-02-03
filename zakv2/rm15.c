/**
 * Zak McKracken: V2 Retail
 * 
 * Room 15: Sphinx Map Room
 */

// EN
[0000] (48) if (VAR_ROOM == 188) {
[0006] (46)   Var[154]++;
[0008] (30)   setBoxFlags(0,128);
[000B] (33)   RoomScroll(60,60)
[000F] (4F)   if (getState08(415)) {
[0014] (30)     setBoxFlags(2,64);
[0017] (30)     setBoxFlags(14,1);
[001A] (1A)     Var[66] = 1;
[001E] (FB)     VAR_RESULT = getActorWalkBox(Var[66]);
[0021] (48)     if (VAR_RESULT == 2) {
[0027] (81)       putActor(Var[66],59,60);
[002B] (91)       animateActor(Var[66],244);
[002E] (**)     }
[002E] (46)     Var[66]++;
[0030] (44)     unless (Var[66] > 4) goto 001E;
[0036] (18)   } else {
[0039] (30)     setBoxFlags(2,0);
[003C] (30)     setBoxFlags(14,128);
[003F] (47)     clearState08(311);
[0042] (57)     setState02(311);
[0045] (**)   }
[0045] (4F)   if (getState08(58)) {
[004A] (F0)     lights(Var[234],0,0);
[004E] (18)   } else {
[0051] (19)     doSentence(250,313,0,1);
[0058] (**)   }
[0058] (18) } else {
[005B] (30)   setBoxFlags(1,128);
[005E] (30)   setBoxFlags(5,128);
[0061] (33)   RoomScroll(20,20)
[0065] (31)   VAR_RESULT = getBitVar(1545,0);
[006A] (28)   if (!VAR_RESULT) {
[006E] (19)     doSentence(253,317,0,1);
[0075] (**)   }
[0075] (**) }
[0075] (00) stopObjectCode();
END

// EX
[0000] (46) Var[60]++;
[0002] (47) clearState08(14863);
[0005] (00) stopObjectCode();
[0006] (06) VAR_EGO = getActorElevation(71);
[0009] (38) if (VAR_RESULT >= 17991) {
[000F] (00)   stopObjectCode();
[0010] (00)   stopObjectCode();
[0011] (30)   setBoxFlags(1,0);
[0014] (30)   setBoxFlags(5,0);
[0017] (5B)   setBitVar(1545,0,Var[234]);
[001C] (00)   stopObjectCode();
END

// Object 58
Events:
   B - 002A
   E - 0022
[0022] (19) doSentence(253,314,0,1);
[0029] (00) stopObjectCode();
[002A] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002F] (00) stopObjectCode();
END

// Object 310
Events:
   C - 0023
[0023] (42) startScript(68);
[0025] (00) stopObjectCode();
END

// Object 311
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(420,186,8,44);
[001F] (00) stopObjectCode();
END

// Object 312
Events:
  FD - 0025
[0025] (9A) Var[53] = Var[234];
[0028] (44) if (VAR_MACHINE_SPEED > 40) {
[002E] (2E)   delay(120);
[0032] (18) } else {
[0035] (2E)   delay(210);
[0039] (**) }
[0039] (46) Var[53]++;
[003B] (00) stopObjectCode();
END

// Object 313
Events:
  FD - 0013
[0013] (1C) startSound(70);
[0015] (05) drawObject(313,255,255);
[001A] (80) breakHere();
[001B] (80) breakHere();
[001C] (05) drawObject(314,255,255);
[0021] (80) breakHere();
[0022] (80) breakHere();
[0023] (05) drawObject(315,255,255);
[0028] (80) breakHere();
[0029] (80) breakHere();
[002A] (18) goto 0015;
[002D] (00) stopObjectCode();
END

// Object 314
Events:
  FD - 0013
[0013] (4F) if (getState08(312)) {
[0018] (50)   pickupObject(58);
[001B] (F0)   lights(Var[234],0,0);
[001F] (18) } else {
[0022] (D8)   printEgo("I can't pick it up, it's being held by\x01a crystalinetic force!");
[0057] (19)   doSentence(STOP);
[0059] (**) }
[0059] (00) stopObjectCode();
END

// Object 315
Events:
END

// Object 316
Events:
   9 - 001D
   B - 001D
  FD - 0029
[001D] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0021] (19)   doSentence(253,316,0,1);
[0028] (**) }
[0028] (00) stopObjectCode();
[0029] (9A) Var[46] = VAR_ACTIVE_OBJECT1;
[002C] (87) setState08(Var[46]);
[002E] (1C) startSound(67);
[0030] (9A) Var[14] = Var[192];
[0033] (5A) Var[14] += 110;
[0037] (88) if (Var[14] != Var[46]) {
[003C] (5B)   setBitVar(1450,0,Var[235]);
[0041] (**) }
[0041] (46) Var[192]++;
[0043] (48) if (Var[192] == 3) {
[0049] (60)   cursorCommand(15, 2);
[004C] (2E)   delay(120);
[0050] (31)   VAR_RESULT = getBitVar(1450,0);
[0055] (28)   if (!VAR_RESULT) {
[0059] (1C)     startSound(78);
[005B] (07)     setState08(322);
[005E] (5B)     setBitVar(1559,4,Var[235]);
[0063] (80)     breakHere();
[0064] (19)     doSentence(253,317,0,1);
[006B] (18)   } else {
[006E] (5B)     setBitVar(1450,0,Var[234]);
[0073] (9A)     Var[192] = Var[234];
[0076] (9A)     Var[50] = Var[234];
[0079] (1A)     Var[51] = 2;
[007D] (48)     if (VAR_EGO == 2) {
[0083] (1A)       Var[51] = 1;
[0087] (**)     }
[0087] (83)     VAR_RESULT = getActorRoom(Var[51]);
[008A] (C8)     if (VAR_RESULT == VAR_ROOM) {
[008F] (FB)       VAR_RESULT = getActorWalkBox(Var[51]);
[0092] (48)       if (VAR_RESULT == 15) {
[0098] (9A)         Var[50] = Var[235];
[009B] (**)       }
[009B] (**)     }
[009B] (D8)     printEgo("Hmmm, nothing happened.");
[00B2] (AE)     waitForMessage();
[00B3] (1C)     startSound(78);
[00B5] (07)     setState08(324);
[00B8] (80)     breakHere();
[00B9] (91)     animateActor(VAR_EGO,246);
[00BC] (A8)     if (Var[50]) {
[00C0] (91)       animateActor(Var[51],246);
[00C3] (**)     }
[00C3] (D8)     printEgo("OOOOO NOOOOO\x02");
[00D1] (1A)     Var[48] = 255;
[00D5] (D8)     printEgo("oo\x02");
[00DA] (FD)     setActorElevation(VAR_EGO,Var[48]);
[00DD] (A8)     if (Var[50]) {
[00E1] (FD)       setActorElevation(Var[51],Var[48]);
[00E4] (**)     }
[00E4] (3A)     Var[48] -= 4;
[00E8] (80)     breakHere();
[00E9] (78)     unless (Var[48] < 200) goto 00D5;
[00EF] (D8)     printEgo("");
[00F1] (1C)     startSound(78);
[00F3] (47)     clearState08(324);
[00F6] (2E)     delay(120);
[00FA] (47)     clearState08(316);
[00FD] (47)     clearState08(317);
[0100] (47)     clearState08(318);
[0103] (27)     setState04(408);
[0106] (BD)     setActorElevation(VAR_EGO,0);
[0109] (A8)     if (Var[50]) {
[010D] (BD)       setActorElevation(Var[51],0);
[0110] (AD)       putActorInRoom(Var[51],220);
[0113] (81)       putActor(Var[51],29,44);
[0117] (**)     }
[0117] (5B)     setBitVar(1574,0,Var[235]);
[011C] (24)     loadRoomWithEgo(408,220,255,255);
[0122] (**)   }
[0122] (**) }
[0122] (00) stopObjectCode();
END

// Object 317
Events:
   9 - 001D
   B - 001D
  FD - 0029
[001D] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0021] (19)   doSentence(253,316,0,1);
[0028] (**) }
[0028] (00) stopObjectCode();
[0029] (4F) if (getState08(322)) {
[002E] (03)   VAR_RESULT = getActorRoom(1);
[0031] (48)   if (VAR_RESULT == 152) {
[0037] (31)     VAR_RESULT = getBitVar(1455,1);
[003C] (28)     if (!VAR_RESULT) {
[0040] (5B)       setBitVar(1455,1,Var[235]);
[0045] (36)       walkActorToObject(1,321);
[0049] (3B)       waitForActor(1);
[004B] (14)       print(1,"This is a map of the Martian Face!");
[0069] (**)     }
[0069] (**)   }
[0069] (03)   VAR_RESULT = getActorRoom(2);
[006C] (48)   if (VAR_RESULT == 152) {
[0072] (31)     VAR_RESULT = getBitVar(1455,2);
[0077] (28)     if (!VAR_RESULT) {
[007B] (5B)       setBitVar(1455,2,Var[235]);
[0080] (36)       walkActorToObject(2,320);
[0084] (3B)       waitForActor(2);
[0086] (AE)       waitForMessage();
[0087] (14)       print(2,"This is a map of the Martian Pyramid!");
[00A8] (**)     }
[00A8] (**)   }
[00A8] (48)   if (Var[194] == 2) {
[00AE] (48)   } else if (Var[193] == 2) {
[00B7] (18)   } else {
[00BA] (AE)     waitForMessage();
[00BB] (2E)     delay(120);
[00BF] (C8)     if (Var[194] == Var[235]) {
[00C4] (10)       Var[49] = getObjectOwner(15);
[00C8] (18)     } else {
[00CB] (C8)       unless (Var[193] == Var[235]) goto 011E;
[00D0] (10)       Var[49] = getObjectOwner(17);
[00D4] (**)     }
[00D4] (28)     if (!Var[49]) {
[00D8] (18)     } else {
[00DB] (83)       VAR_RESULT = getActorRoom(Var[49]);
[00DE] (C8)       if (VAR_RESULT == VAR_ROOM) {
[00E3] (9A)         Var[66] = Var[49];
[00E6] (18)       } else {
[00E9] (9A)         Var[66] = VAR_EGO;
[00EC] (**)       }
[00EC] (94)       print(Var[66],"I should add this to \x02");
[0100] (C8)       if (Var[66] == Var[49]) {
[0105] (94)         print(Var[66],"my map.");
[010E] (18)       } else {
[0111] (D8)         printEgo("\x06\x31's map.");
[011B] (**)       }
[011B] (18)     } else {
[011E] (D8)       printEgo("I should draw a map of this.");
[0136] (**)     }
[0136] (**)   }
[0136] (**) }
[0136] (60) cursorCommand(247, 1);
[0139] (00) stopObjectCode();
END

// Object 318
Events:
   9 - 001B
   B - 001B
[001B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[001F] (19)   doSentence(253,316,0,1);
[0026] (**) }
[0026] (00) stopObjectCode();
END

// Object 319
Events:
   C - 0022
  FD - 007F
[0022] (48) if (VAR_EGO == 2) {
[0028] (9A)   Var[47] = Var[234];
[002B] (14)   print(2,"First\x02");
[0034] (19)   doSentence(253,319,0,1);
[003B] (AE)   waitForMessage();
[003C] (14)   print(2,"Then\x02");
[0044] (19)   doSentence(253,319,0,1);
[004B] (AE)   waitForMessage();
[004C] (14)   print(2,"And finally,\x02");
[005B] (19)   doSentence(253,319,0,1);
[0062] (18) } else {
[0065] (D8)   printEgo("I can't read those symbols!");
[007E] (**) }
[007E] (00) stopObjectCode();
[007F] (14) print(2," push the \x02");
[008B] (9A) Var[14] = Var[47];
[008E] (5A) Var[14] += 110;
[0092] (48) if (Var[14] == 316) {
[0098] (14)   print(2,"left\x02");
[00A0] (48) } else if (Var[14] == 317) {
[00A9] (14)   print(2,"center\x02");
[00B3] (48) } else if (Var[14] == 318) {
[00BC] (14)   print(2,"right\x02");
[00C5] (18)   /* goto 00C8; */
[00C8] (**) }
[00C8] (14) print(2," button.");
[00D3] (46) Var[47]++;
[00D5] (00) stopObjectCode();
END

// Object 320
Events:
   C - 001A
[001A] (D8) printEgo("It looks like there's a special object\x01inside the Martian Pyramid.");
[0055] (00) stopObjectCode();
END

// Object 321
Events:
END

// Object 322
Events:
END

// Object 323
Events:
   D - 0017
[0017] (24) loadRoomWithEgo(408,218,255,255);
[001D] (00) stopObjectCode();
END

// Object 324
Events:
END

// Object 325
Events:
   1 - 002C
   2 - 0046
   B - 001A
[001A] (48) if (VAR_ACTIVE_OBJECT2 == 76) {
[0020] (42)   startScript(10);
[0022] (29)   setOwnerOf(76,0);
[0026] (18) } else {
[0029] (42)   startScript(3);
[002B] (**) }
[002B] (00) stopObjectCode();
[002C] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0030] (D8)   printEgo("I think I'll need a key.");
[0045] (**) }
[0045] (00) stopObjectCode();
[0046] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[004A] (D8)   printEgo("It won't close.");
[0059] (**) }
[0059] (00) stopObjectCode();
END

// Object 326
Events:
   9 - 001D
   B - 001D
  FD - 002D
[001D] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0021] (1C)   startSound(27);
[0023] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0025] (19)   doSentence(253,326,0,1);
[002C] (**) }
[002C] (00) stopObjectCode();
[002D] (9A) Var[52] = VAR_EGO;
[0030] (80) breakHere();
[0031] (0F) if (!getState08(58)) {
[0036] (19)   doSentence(254,313,0,1);
[003D] (07)   setState08(313);
[0040] (3C)   stopSound(70);
[0042] (80)   breakHere();
[0043] (1C)   startSound(71);
[0045] (80)   breakHere();
[0046] (7C)   VAR_RESULT = isSoundRunning(71);
[0049] (28)   unless (!VAR_RESULT) goto 0045;
[004D] (1C)   startSound(111);
[004F] (07)   setState08(312);
[0052] (19)   doSentence(253,312,0,1);
[0059] (80)   breakHere();
[005A] (B4)   VAR_RESULT = getDist(Var[52],58);
[005F] (78)   if (VAR_RESULT < 3) {
[0065] (18)   } else {
[0068] (A8)     unless (Var[53]) goto 0059;
[006C] (**)   }
[006C] (0F)   if (!getState08(58)) {
[0071] (1C)     startSound(111);
[0073] (47)     clearState08(326);
[0076] (47)     clearState08(312);
[0079] (19)     doSentence(250,313,0,1);
[0080] (**)   }
[0080] (**) }
[0080] (00) stopObjectCode();
END

// Object 327
Events:
END
