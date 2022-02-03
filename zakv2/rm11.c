/**
 * Zak McKracken: V2 Retail
 * 
 * Room 11: Airplane
 */

// EX
[0000] (00) stopObjectCode();
[0001] (3C) stopSound(17);
[0003] (3C) stopSound(42);
[0005] (3C) stopSound(109);
[0007] (3C) stopSound(105);
[0009] (3C) stopSound(19);
[000B] (83) VAR_RESULT = getActorRoom(VAR_EGO);
[000E] (08) if (VAR_RESULT != 11) {
[0014] (62)   stopScript(36);
[0016] (62)   stopScript(116);
[0018] (62)   stopScript(106);
[001A] (9A)   Var[248] = Var[234];
[001D] (**) }
[001D] (62) stopScript(104);
[001F] (93) ActorOps(Var[52],[Sound(6)]);
[0023] (9A) Var[203] = Var[234];
[0026] (26) setVarRange(Var[42],2,[1,4]);
[002B] (00) stopObjectCode();
END

// Object 47
Events:
   B - 0024
   E - 0021
[0021] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0023] (00) stopObjectCode();
[0024] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0029] (00) stopObjectCode();
END

// Object 48
Events:
   A - 001E
   B - 0026
   E - 001E
[001E] (19) doSentence(253,259,0,1);
[0025] (00) stopObjectCode();
[0026] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002B] (00) stopObjectCode();
END

// Object 49
Events:
   4 - 0054
   5 - 009A
   B - 0027
   E - 0024
[0024] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0026] (00) stopObjectCode();
[0027] (08) if (VAR_ROOM != 31) {
[002D] (A8)   if (Var[154]) {
[0031] (18)     goto 0061;
[0034] (**)   }
[0034] (9D)   if (classOfIs(VAR_ACTIVE_OBJECT2,1)) {
[0039] (42)     startScript(138);
[003B] (18)   } else {
[003E] (79)     doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0043] (**)   }
[0043] (18) } else {
[0046] (D8)   printEgo("It's too wet!");
[0053] (**) }
[0053] (00) stopObjectCode();
[0054] (48) if (VAR_ROOM == 31) {
[005A] (18)   goto 0046;
[005D] (**) }
[005D] (A8) if (Var[154]) {
[0061] (D8)   printEgo("There's no air!");
[0070] (78) } else if (Var[222] < 30) {
[0079] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[007B] (D4)   setObjectName(VAR_ACTIVE_OBJECT1,"lit lighter");
[0089] (18) } else {
[008C] (D8)   printEgo("It's too hot!");
[0099] (**) }
[0099] (00) stopObjectCode();
[009A] (67) clearState04(49);
[009D] (54) setObjectName(49,"lighter");
[00A8] (48) if (VAR_CURRENT_LIGHTS == 12) {
[00AE] (F0)   lights(Var[234],0,0);
[00B2] (**) }
[00B2] (00) stopObjectCode();
END

// Object 50
Events:
   3 - 0076
   6 - 0032
   7 - 0076
   B - 0032
   C - 0093
   E - 002A
  FD - 0099
[002A] (19) doSentence(253,262,0,1);
[0031] (00) stopObjectCode();
[0032] (08) if (VAR_EGO != 1) {
[0038] (D8)   printEgo("No way!");
[0040] (18) } else {
[0043] (28)   if (!Var[205]) {
[0047] (18)     goto 00A3;
[004A] (**)   }
[004A] (48)   if (Var[164] == 40) {
[0050] (D8)     printEgo("Gotta remove my glasses.");
[0067] (**)   }
[0067] (1A)   Var[164] = 60;
[006B] (51)   animateActor(1,Var[164]);
[006E] (19)   doSentence(253,50,0,1);
[0075] (**) }
[0075] (00) stopObjectCode();
[0076] (48) if (Var[164] == 60) {
[007C] (1A)   Var[164] = 44;
[0080] (51)   animateActor(1,Var[164]);
[0083] (19)   doSentence(254,50,0,1);
[008A] (**) }
[008A] (48) if (VAR_ACTIVE_VERB == 3) {
[0090] (42)   startScript(20);
[0092] (**) }
[0092] (00) stopObjectCode();
[0093] (9A) Var[66] = Var[205];
[0096] (42) startScript(71);
[0098] (00) stopObjectCode();
[0099] (2E) delay(900);
[009D] (C6) Var[205]--;
[009F] (28) unless (!Var[205]) goto 0099;
[00A3] (14) print(1,"I'm out of oxygen!");
[00B5] (18) goto 0076;
[00B8] (00) stopObjectCode();
END

// Object 51
Events:
END

// Object 241
Events:
   E - 0021
  FD - 003D
[0021] (D8) printEgo("I'm not cleaning up that mess!");
[003C] (00) stopObjectCode();
[003D] (2E) delay(28800);
[0041] (46) Var[53]++;
[0043] (00) stopObjectCode();
END

// Object 242
Events:
   4 - 001D
   5 - 0029
   B - 0037
  FD - 00A2
[001D] (87) setState08(VAR_ACTIVE_OBJECT1);
[001F] (1C) startSound(17);
[0021] (19) doSentence(253,242,0,1);
[0028] (00) stopObjectCode();
[0029] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[002B] (19) doSentence(254,242,0,1);
[0032] (3C) stopSound(17);
[0034] (1C) startSound(42);
[0036] (00) stopObjectCode();
[0037] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[003D] (C8)   if (Var[138] == Var[234]) {
[0042] (D8)     printEgo("I'd never get her back!");
[0057] (18)     goto 00A1;
[005A] (**)   }
[005A] (**) }
[005A] (EF) if (getState04(VAR_ACTIVE_OBJECT1)) {
[005E] (D8)   printEgo("It's already clogged up.");
[0075] (9D) } else if (classOfIs(VAR_ACTIVE_OBJECT2,1)) {
[007D] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT2,0);
[0080] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[0082] (D8)   printEgo("OK, but that could clog it up.");
[009C] (18) } else {
[009F] (42)   startScript(3);
[00A1] (**) }
[00A1] (00) stopObjectCode();
[00A2] (80) breakHere();
[00A3] (6F) unless (getState04(242)) goto 00A2;
[00A8] (C3) VAR_RESULT = getActorX(VAR_EGO);
[00AB] (78) if (VAR_RESULT < 15) {
[00B1] (AE)   waitForMessage();
[00B2] (0F)   if (!getState08(265)) {
[00B7] (D8)     printEgo("It's going to overflow!");
[00CD] (**)   }
[00CD] (**) }
[00CD] (2E) delay(600);
[00D1] (07) setState08(265);
[00D4] (17) clearState02(265);
[00D7] (00) stopObjectCode();
END

// Object 243
Events:
   B - 0019
[0019] (48) if (VAR_EGO == 1) {
[001F] (42)   startScript(38);
[0021] (18) } else {
[0024] (D8)   printEgo("I don't have to!");
[0033] (**) }
[0033] (00) stopObjectCode();
END

// Object 244
Events:
   9 - 0024
   A - 0024
   B - 0024
[0024] (1C) startSound(22);
[0026] (80) breakHere();
[0027] (7C) VAR_RESULT = isSoundRunning(22);
[002A] (28) unless (!VAR_RESULT) goto 0026;
[002E] (4F) if (getState08(242)) {
[0033] (1C)   startSound(17);
[0035] (**) }
[0035] (00) stopObjectCode();
END

// Object 245
Events:
   9 - 0022
   B - 0022
   C - 003B
[0022] (1C) startSound(38);
[0024] (80) breakHere();
[0025] (7C) VAR_RESULT = isSoundRunning(38);
[0028] (28) unless (!VAR_RESULT) goto 0024;
[002C] (80) breakHere();
[002D] (28) unless (!Var[248]) goto 002C;
[0031] (68) VAR_RESULT = isScriptRunning(106);
[0034] (28) if (!VAR_RESULT) {
[0038] (42)   startScript(106);
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (D8) printEgo("In case of emergency, push button.");
[005A] (00) stopObjectCode();
END

// Object 246
Events:
   1 - 001D
   2 - 0025
   D - 002D
  FD - 003A
[001D] (19) doSentence(253,246,0,1);
[0024] (00) stopObjectCode();
[0025] (19) doSentence(253,248,0,1);
[002C] (00) stopObjectCode();
[002D] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0031] (9E)   walkActorTo(VAR_EGO,10,60);
[0035] (1A)   VAR_SENTENCE_OBJECT1 = 247;
[0039] (**) }
[0039] (00) stopObjectCode();
[003A] (0F) if (!getState08(248)) {
[003F] (0F)   if (!getState08(246)) {
[0044] (07)     setState08(246);
[0047] (1C)     startSound(10);
[0049] (**)   }
[0049] (30)   setBoxFlags(1,0);
[004C] (18) } else {
[004F] (D8)   printEgo("It's occupied.");
[005E] (**) }
[005E] (00) stopObjectCode();
END

// Object 247
Events:
   1 - 001B
   2 - 0023
  FD - 002B
[001B] (19) doSentence(253,251,0,1);
[0022] (00) stopObjectCode();
[0023] (19) doSentence(253,252,0,1);
[002A] (00) stopObjectCode();
[002B] (9A) Var[203] = Var[235];
[002E] (80) breakHere();
[002F] (48) if (VAR_ACTIVE_VERB == 3) {
[0035] (48)   if (VAR_ACTIVE_OBJECT2 == 9) {
[003B] (BB)     waitForActor(VAR_EGO);
[003D] (0F)     if (!getState08(248)) {
[0042] (48)       if (VAR_EGO == 1) {
[0048] (14)         print(9,"There's NOTHING I want from you!");
[0066] (18)       } else {
[0069] (14)         print(9,"No, thanks.");
[0076] (**)       }
[0076] (**)     }
[0076] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[0079] (**)   }
[0079] (**) }
[0079] (18) goto 002E;
[007C] (00) stopObjectCode();
END

// Object 248
Events:
   C - 0019
  FD - 0033
[0019] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[001D] (D8)   printEgo("Vacant");
[0025] (18) } else {
[0028] (D8)   printEgo("Occupied");
[0032] (**) }
[0032] (00) stopObjectCode();
[0033] (4F) if (getState08(246)) {
[0038] (47)   clearState08(246);
[003B] (1C)   startSound(11);
[003D] (**) }
[003D] (30) setBoxFlags(1,64);
[0040] (00) stopObjectCode();
END

// Object 249
Events:
   1 - 001A
   2 - 0022
  FD - 002A
[001A] (1A) Var[50] = 18;
[001E] (18) goto 002A;
[0021] (00) stopObjectCode();
[0022] (19) doSentence(253,250,0,1);
[0029] (00) stopObjectCode();
[002A] (9A) Var[51] = VAR_ACTIVE_OBJECT1;
[002D] (3A) Var[51] -= 249;
[0031] (42) startScript(10);
[0033] (78) if (Var[101] < 6) {
[0039] (9A)   Var[14] = Var[51];
[003C] (5A)   Var[14] += 84;
[0040] (28)   if (!Var[14]) {
[0044] (9A)     Var[14] = Var[51];
[0047] (5A)     Var[14] += 84;
[004B] (9A)     Var[15] = Var[101];
[004E] (5A)     Var[15] += 186;
[0052] (8A)     Var[Var[14]] = Var[15];
[0055] (46)     Var[101]++;
[0057] (**)   }
[0057] (**) }
[0057] (9A) Var[14] = Var[51];
[005A] (5A) Var[14] += 84;
[005E] (44) if (Var[14] > 1) {
[0064] (9A)   Var[14] = Var[51];
[0067] (5A)   Var[14] += 84;
[006B] (C5)   drawObject(Var[14],Var[50],4);
[006F] (9A)   Var[14] = Var[51];
[0072] (5A)   Var[14] += 84;
[0076] (97)   clearState02(Var[14]);
[0078] (**) }
[0078] (2E) delay(60);
[007C] (28) if (!Var[248]) {
[0080] (68)   VAR_RESULT = isScriptRunning(105);
[0083] (28)   if (!VAR_RESULT) {
[0087] (42)     startScript(105);
[0089] (**)   }
[0089] (**) }
[0089] (00) stopObjectCode();
END

// Object 250
Events:
   1 - 001A
   2 - 0026
  FD - 002E
[001A] (1A) Var[50] = 29;
[001E] (19) doSentence(253,249,0,1);
[0025] (00) stopObjectCode();
[0026] (19) doSentence(253,250,0,1);
[002D] (00) stopObjectCode();
[002E] (42) startScript(11);
[0030] (9A) Var[51] = VAR_ACTIVE_OBJECT1;
[0033] (3A) Var[51] -= 249;
[0037] (9A) Var[14] = Var[51];
[003A] (5A) Var[14] += 84;
[003E] (44) if (Var[14] > 1) {
[0044] (9A)   Var[14] = Var[51];
[0047] (5A)   Var[14] += 84;
[004B] (C7)   clearState08(Var[14]);
[004D] (9A)   Var[14] = Var[51];
[0050] (5A)   Var[14] += 84;
[0054] (D7)   setState02(Var[14]);
[0056] (**) }
[0056] (00) stopObjectCode();
END

// Object 251
Events:
   1 - 001A
   2 - 0026
  FD - 002E
[001A] (1A) Var[50] = 40;
[001E] (19) doSentence(253,249,0,1);
[0025] (00) stopObjectCode();
[0026] (19) doSentence(253,250,0,1);
[002D] (00) stopObjectCode();
[002E] (47) clearState08(248);
[0031] (19) doSentence(253,246,0,1);
[0038] (00) stopObjectCode();
END

// Object 252
Events:
   1 - 001A
   2 - 0026
  FD - 002E
[001A] (1A) Var[50] = 51;
[001E] (19) doSentence(253,249,0,1);
[0025] (00) stopObjectCode();
[0026] (19) doSentence(253,250,0,1);
[002D] (00) stopObjectCode();
[002E] (07) setState08(248);
[0031] (19) doSentence(253,248,0,1);
[0038] (00) stopObjectCode();
END

// Object 253
Events:
   1 - 001A
   2 - 0026
  FD - 002E
[001A] (1A) Var[50] = 62;
[001E] (19) doSentence(253,249,0,1);
[0025] (00) stopObjectCode();
[0026] (19) doSentence(253,250,0,1);
[002D] (00) stopObjectCode();
[002E] (62) stopScript(36);
[0030] (47) clearState08(261);
[0033] (3C) stopSound(19);
[0035] (1C) startSound(42);
[0037] (4F) if (getState08(241)) {
[003C] (D8)   printEgo("I think it's too late!");
[0050] (**) }
[0050] (00) stopObjectCode();
END

// Object 254
Events:
   1 - 001A
   2 - 0026
  FD - 002E
[001A] (1A) Var[50] = 73;
[001E] (19) doSentence(253,249,0,1);
[0025] (00) stopObjectCode();
[0026] (19) doSentence(253,250,0,1);
[002D] (00) stopObjectCode();
[002E] (0F) if (!getState08(260)) {
[0033] (62)   stopScript(36);
[0035] (3C)   stopSound(19);
[0037] (1C)   startSound(42);
[0039] (47)   clearState08(261);
[003C] (07)   setState08(260);
[003F] (1C)   startSound(10);
[0041] (4F)   if (getState08(241)) {
[0046] (17)     clearState02(241);
[0049] (**)   }
[0049] (**) }
[0049] (00) stopObjectCode();
END

// Object 255
Events:
   B - 0019
   D - 0019
[0019] (30) setBoxFlags(4,160);
[001C] (81) putActor(VAR_EGO,63,52);
[0020] (BD) setActorElevation(VAR_EGO,252);
[0023] (91) animateActor(VAR_EGO,249);
[0026] (47) clearState08(263);
[0029] (48) if (VAR_EGO == 2) {
[002F] (07)   setState08(775);
[0032] (6F) } else if (getState04(39)) {
[003A] (07)   setState08(774);
[003D] (**) }
[003D] (42) startScript(150);
[003F] (9A) VAR_ACTIVE_OBJECT1 = Var[234];
[0042] (00) stopObjectCode();
END

// Object 256
Events:
   1 - 001D
   2 - 0043
   D - 0046
  FD - 0055
[001D] (08) if (VAR_EGO != 9) {
[0023] (D8)   printEgo("I'd depressurize the plane!");
[003D] (18) } else {
[0040] (42)   startScript(10);
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (42) startScript(11);
[0045] (00) stopObjectCode();
[0046] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[004A] (9A)   Var[52] = VAR_EGO;
[004D] (42)   startScript(120);
[004F] (E4)   loadRoomWithEgo(Var[45],Var[44],8,60);
[0054] (**) }
[0054] (00) stopObjectCode();
[0055] (4F) if (getState08(260)) {
[005A] (1C)   startSound(11);
[005C] (47)   clearState08(260);
[005F] (**) }
[005F] (57) setState02(241);
[0062] (00) stopObjectCode();
END

// Object 257
Events:
   1 - 0021
   2 - 0021
   A - 0021
   E - 0021
[0021] (D8) printEgo("I'd better not, the owner might get mad.");
[0044] (00) stopObjectCode();
END

// Object 258
Events:
   1 - 0023
   2 - 0023
   A - 0023
   E - 0023
  FD - 002B
[0023] (99) doSentence(VAR_ACTIVE_VERB,257,0,1);
[002A] (00) stopObjectCode();
[002B] (C3) VAR_RESULT = getActorX(Var[52]);
[002E] (04) if (VAR_RESULT <= 12) {
[0034] (5F)   if (!getState02(246)) {
[0039] (57)     setState02(246);
[003C] (17)     clearState02(247);
[003F] (33)     RoomScroll(20,80)
[0043] (**)   }
[0043] (0F)   if (!getState08(246)) {
[0048] (0F)     if (!getState08(248)) {
[004D] (07)       setState08(248);
[0050] (**)     }
[0050] (**)   }
[0050] (18) } else {
[0053] (5F)   if (!getState02(247)) {
[0058] (17)     clearState02(246);
[005B] (57)     setState02(247);
[005E] (33)     RoomScroll(33,80)
[0062] (**)   }
[0062] (0F)   if (!getState08(263)) {
[0067] (30)     setBoxFlags(4,160);
[006A] (80)     breakHere();
[006B] (C3)     VAR_RESULT = getActorX(Var[52]);
[006E] (08)     unless (VAR_RESULT != 63) goto 006A;
[0074] (9A)     Var[57] = VAR_VIRT_MOUSE_X;
[0077] (9A)     Var[58] = VAR_VIRT_MOUSE_Y;
[007A] (F5)     VAR_RESULT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[007E] (28)     if (!VAR_RESULT) {
[0082] (9A)       VAR_ACTIVE_OBJECT1 = Var[234];
[0085] (**)     }
[0085] (07)     setState08(263);
[0088] (47)     clearState08(774);
[008B] (47)     clearState08(775);
[008E] (BD)     setActorElevation(Var[52],0);
[0091] (9E)     walkActorTo(Var[52],68,52);
[0095] (DB)     setBitVar(1440,Var[52],Var[235]);
[009A] (19)     doSentence(STOP);
[009C] (BB)     waitForActor(Var[52]);
[009E] (DB)     setBitVar(1440,Var[52],Var[234]);
[00A3] (30)     setBoxFlags(4,128);
[00A6] (A8)     if (VAR_ACTIVE_OBJECT1) {
[00AA] (C8)       if (Var[137] == Var[52]) {
[00AF] (F9)         doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[00B4] (18)         goto 00BB;
[00B7] (**)       }
[00B7] (**)     }
[00B7] (FE)     walkActorTo(Var[52],Var[57],Var[58]);
[00BB] (**)   }
[00BB] (**) }
[00BB] (80) breakHere();
[00BC] (18) goto 002B;
[00BF] (00) stopObjectCode();
END

// Object 259
Events:
   1 - 0023
   2 - 0023
   A - 0023
   E - 0023
  FD - 002B
[0023] (99) doSentence(VAR_ACTIVE_VERB,257,0,1);
[002A] (00) stopObjectCode();
[002B] (48) if (VAR_EGO == 1) {
[0031] (A8)   if (Var[248]) {
[0035] (50)     pickupObject(48);
[0038] (47)     clearState08(49);
[003B] (17)     clearState02(49);
[003E] (2E)     delay(60);
[0042] (91)     animateActor(VAR_EGO,244);
[0045] (BB)     waitForActor(VAR_EGO);
[0047] (AE)     waitForMessage();
[0048] (D8)     printEgo("What's that?");
[0055] (18)   } else {
[0058] (68)     VAR_RESULT = isScriptRunning(105);
[005B] (28)     if (!VAR_RESULT) {
[005F] (42)       startScript(105);
[0061] (**)     }
[0061] (**)   }
[0061] (18) } else {
[0064] (D8)   printEgo("That's only for emergencies.");
[007F] (**) }
[007F] (00) stopObjectCode();
END

// Object 260
Events:
   1 - 0031
   2 - 0029
   4 - 0031
   5 - 0031
   B - 0031
[0029] (19) doSentence(253,256,0,1);
[0030] (00) stopObjectCode();
[0031] (A8) if (Var[248]) {
[0035] (48)   if (VAR_ACTIVE_VERB == 1) {
[003B] (19)     doSentence(253,254,0,1);
[0042] (48)   } else if (VAR_ACTIVE_VERB == 11) {
[004B] (48)     if (VAR_ACTIVE_OBJECT2 == 22) {
[0051] (CF)       if (getState08(VAR_ACTIVE_OBJECT1)) {
[0055] (29)         setOwnerOf(22,14);
[0059] (47)         clearState08(262);
[005C] (18)       } else {
[005F] (D8)         printEgo("The door is closed.");
[0071] (**)       }
[0071] (48)     } else if (VAR_ACTIVE_OBJECT2 == 14) {
[007A] (C8)       if (Var[138] == Var[234]) {
[007F] (D8)         printEgo("Not Sushi!");
[008A] (18)         goto 009C;
[008D] (**)       }
[008D] (**)     }
[008D] (D8)     printEgo("I'd better not.");
[009C] (48)   } else if (VAR_ACTIVE_VERB == 4) {
[00A5] (42)     startScript(36);
[00A7] (48)   } else if (VAR_ACTIVE_VERB == 5) {
[00B0] (19)     doSentence(253,253,0,1);
[00B7] (18)     /* goto 00BA; */
[00BA] (**)   }
[00BA] (18) } else {
[00BD] (68)   VAR_RESULT = isScriptRunning(105);
[00C0] (28)   if (!VAR_RESULT) {
[00C4] (42)     startScript(105);
[00C6] (**)   }
[00C6] (**) }
[00C6] (00) stopObjectCode();
END

// Script 261
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (62) stopScript(116);
[0016] (43) VAR_RESULT = getActorX(9);
[0019] (04) if (VAR_RESULT <= 12) {
[001F] (0F)   if (!getState08(246)) {
[0024] (19)     doSentence(253,251,0,1);
[002B] (**)   }
[002B] (**) }
[002B] (1A) Var[55] = 249;
[002F] (CF) if (getState08(Var[55])) {
[0033] (76)   walkActorToObject(9,Var[55]);
[0036] (3B)   waitForActor(9);
[0038] (74)   VAR_RESULT = getDist(9,Var[55]);
[003D] (A8)   if (VAR_RESULT) {
[0041] (18)     goto 0033;
[0044] (**)   }
[0044] (1C)   startSound(11);
[0046] (C7)   clearState08(Var[55]);
[0048] (9A)   Var[66] = Var[55];
[004B] (3A)   Var[66] -= 249;
[004F] (9A)   Var[14] = Var[66];
[0052] (5A)   Var[14] += 84;
[0056] (44)   if (Var[14] > 1) {
[005C] (9A)     Var[14] = Var[66];
[005F] (5A)     Var[14] += 84;
[0063] (C7)     clearState08(Var[14]);
[0065] (9A)     Var[14] = Var[66];
[0068] (5A)     Var[14] += 84;
[006C] (D7)     setState02(Var[14]);
[006E] (**)   }
[006E] (2E)   delay(30);
[0072] (**) }
[0072] (46) Var[55]++;
[0074] (44) unless (Var[55] > 254) goto 002F;
[007A] (36) walkActorToObject(9,260);
[007E] (3B) waitForActor(9);
[0080] (80) breakHere();
[0081] (C3) VAR_RESULT = getActorX(VAR_EGO);
[0084] (44) if (VAR_RESULT > 84) {
[008A] (60)   cursorCommand(15, 2);
[008D] (19)   doSentence(STOP);
[008F] (91)   animateActor(VAR_EGO,255);
[0092] (11)   animateActor(9,244);
[0095] (80)   breakHere();
[0096] (14)   print(9,"Back to your seat!");
[00A8] (80)   breakHere();
[00A9] (9E)   walkActorTo(VAR_EGO,80,54);
[00AD] (AE)   waitForMessage();
[00AE] (11)   animateActor(9,247);
[00B1] (BB)   waitForActor(VAR_EGO);
[00B3] (60)   cursorCommand(247, 1);
[00B6] (9A)   VAR_KEYPRESS = Var[234];
[00B9] (**) }
[00B9] (43) VAR_RESULT = getActorX(9);
[00BC] (78) unless (VAR_RESULT < 84) goto 0080;
[00C2] (00) stopObjectCode();
END

// Script 262
Events:
   E - 0018
  FD - 001F
[0018] (87) setState08(VAR_ACTIVE_OBJECT1);
[001A] (69) setOwnerOf(22,VAR_EGO);
[001E] (00) stopObjectCode();
[001F] (48) if (VAR_EGO == 1) {
[0025] (A8)   if (Var[248]) {
[0029] (34)     VAR_RESULT = getDist(9,260);
[002F] (78)     if (VAR_RESULT < 4) {
[0035] (50)       pickupObject(50);
[0038] (C7)       clearState08(VAR_ACTIVE_OBJECT1);
[003A] (9A)       Var[66] = Var[234];
[003D] (9A)       Var[14] = Var[66];
[0040] (5A)       Var[14] += 84;
[0044] (48)       if (Var[14] == 50) {
[004A] (9A)         Var[14] = Var[66];
[004D] (5A)         Var[14] += 84;
[0051] (8A)         Var[Var[14]] = Var[235];
[0054] (**)       }
[0054] (46)       Var[66]++;
[0056] (44)       unless (Var[66] > 5) goto 003D;
[005C] (18)     } else {
[005F] (1A)       Var[103] = 26;
[0063] (09)       faceActor(1,9);
[0066] (00)       stopObjectCode();
[0067] (D8)       printEgo("She might catch me!");
[0079] (**)     }
[0079] (18)   } else {
[007C] (68)     VAR_RESULT = isScriptRunning(105);
[007F] (28)     if (!VAR_RESULT) {
[0083] (42)       startScript(105);
[0085] (**)     }
[0085] (**)   }
[0085] (18) } else {
[0088] (D8)   printEgo("That's ILLEGAL!!");
[0099] (**) }
[0099] (00) stopObjectCode();
END

// Script 263
Events:
  FD - 0013
[0013] (19) doSentence(250,258,0,1);
[001A] (9A) Var[53] = Var[234];
[001D] (1C) startSound(42);
[001F] (19) doSentence(250,241,0,1);
[0026] (80) breakHere();
[0027] (48) if (VAR_CLICK_AREA == 4) {
[002D] (C8)   if (VAR_KEYPRESS == VAR_CUTSCENEEXIT_KEY) {
[0032] (18)     goto 0065;
[0035] (**)   }
[0035] (**) }
[0035] (A8) unless (Var[53]) goto 0026;
[0039] (80) breakHere();
[003A] (28) unless (!Var[248]) goto 0039;
[003E] (68) VAR_RESULT = isScriptRunning(36);
[0041] (A8) if (VAR_RESULT) {
[0045] (2E)   delay(3600);
[0049] (18)   goto 0039;
[004C] (**) }
[004C] (A8) if (Var[248]) {
[0050] (18)   goto 0039;
[0053] (**) }
[0053] (19) doSentence(254,261,0,1);
[005A] (62) stopScript(105);
[005C] (1C) startSound(109);
[005E] (2E) delay(60);
[0062] (3C) stopSound(42);
[0064] (AE) waitForMessage();
[0065] (42) startScript(79);
[0067] (00) stopObjectCode();
END

// Script 264
Events:
   1 - 002A
   A - 002A
   E - 002A
[002A] (10) VAR_RESULT = getObjectOwner(47);
[002E] (C8) if (VAR_RESULT == VAR_EGO) {
[0033] (D8)   printEgo("I already have some toilet paper.");
[0051] (18) } else {
[0054] (D8)   printEgo("It's empty.");
[0060] (**) }
[0060] (00) stopObjectCode();
END

// Script 265
Events:
  FD - 0018
[0018] (5B) setBitVar(1575,0,Var[235]);
[001D] (1A) Var[54] = 1;
[0021] (80) breakHere();
[0022] (C3) VAR_RESULT = getActorX(VAR_EGO);
[0025] (44) if (VAR_RESULT > 84) {
[002B] (60)   cursorCommand(15, 2);
[002E] (19)   doSentence(STOP);
[0030] (91)   animateActor(VAR_EGO,255);
[0033] (11)   animateActor(9,244);
[0036] (80)   breakHere();
[0037] (14)   print(9,"DID YOU DO THIS? GO SIT DOWN!");
[0051] (AE)   waitForMessage();
[0052] (11)   animateActor(9,247);
[0055] (9E)   walkActorTo(VAR_EGO,80,54);
[0059] (BB)   waitForActor(VAR_EGO);
[005B] (60)   cursorCommand(247, 1);
[005E] (9A)   VAR_KEYPRESS = Var[234];
[0061] (**) }
[0061] (46) Var[54]++;
[0063] (44) unless (Var[54] > 100) goto 0021;
[0069] (16) VAR_RESULT = getRandomNr(2);
[006C] (A8) if (VAR_RESULT) {
[0070] (14)   print(9,"W\x02");
[0075] (18) } else {
[0078] (14)   print(9,"Ohhhh w\x02");
[0082] (**) }
[0082] (14) print(9,"hat a mess!");
[008E] (18) goto 001D;
[0091] (00) stopObjectCode();
END

// Script 774
Events:
END

// Script 775
Events:
END
