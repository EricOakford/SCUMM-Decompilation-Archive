/**
 * Zak McKracken: V2 Retail
 * 
 * Room 13: Mt. Rainier Cave
 */

// EN
[0000] (00) stopObjectCode();
[0001] (00) stopObjectCode();
[0002] (01) putActor(103,33,1);
[0006] (C8) if (Var[147] == Var[235]) {
[000B] (0C)   loadSound(93)
[000E] (48)   if (Var[247] == 285) {
[0014] (19)     doSentence(253,287,0,1);
[001B] (18)   } else {
[001E] (19)     doSentence(250,286,0,1);
[0025] (**)   }
[0025] (**) }
[0025] (48) if (Var[153] == 4) {
[002B] (19)   doSentence(250,277,0,1);
[0032] (19)   doSentence(253,281,0,1);
[0039] (**) }
[0039] (4F) if (getState08(281)) {
[003E] (19)   doSentence(250,283,0,1);
[0045] (**) }
[0045] (19) doSentence(253,291,0,1);
[004C] (00) stopObjectCode();
END

// EX
[0000] (03) VAR_EGO = getActorRoom(15);
[0003] (00) stopObjectCode();
[0004] (6F) if (getState04(289)) {
[0009] (47)   clearState08(276);
[000C] (07)   setState08(275);
[000F] (1A)   Var[153] = 4;
[0013] (**) }
[0013] (68) VAR_RESULT = isScriptRunning(35);
[0016] (A8) if (VAR_RESULT) {
[001A] (62)   stopScript(35);
[001C] (19)   doSentence(253,290,0,1);
[0023] (**) }
[0023] (00) stopObjectCode();
END

// Object 53
Events:
   B - 0030
   E - 0028
[0028] (19) doSentence(253,275,0,1);
[002F] (00) stopObjectCode();
[0030] (90) VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0033] (48) if (VAR_RESULT == 15) {
[0039] (19)   doSentence(253,275,0,1);
[0040] (48) } else if (VAR_ACTIVE_OBJECT2 == 49) {
[0049] (D8)   printEgo("Not in my hands!");
[0058] (18) } else {
[005B] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0060] (**) }
[0060] (00) stopObjectCode();
END

// Object 54
Events:
   B - 002A
   E - 0022
[0022] (19) doSentence(253,276,0,1);
[0029] (00) stopObjectCode();
[002A] (48) if (VAR_ACTIVE_OBJECT2 == 49) {
[0030] (D8)   printEgo("Not in my hands!");
[003F] (18) } else {
[0042] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0047] (**) }
[0047] (00) stopObjectCode();
END

// Object 272
Events:
   D - 001C
[001C] (24) loadRoomWithEgo(267,12,255,255);
[0022] (00) stopObjectCode();
END

// Object 273
Events:
   9 - 0028
   A - 0028
   B - 00AC
   E - 0028
[0028] (48) if (Var[153] == 2) {
[002E] (D8)   printEgo("I'd rather start it on fire.");
[0047] (C8) } else if (Var[153] == Var[235]) {
[004F] (D8)   printEgo("I'll leave it for kindling.");
[0068] (48) } else if (Var[153] == 3) {
[0071] (D8)   printEgo("I just need to burn them.");
[0087] (48) } else if (Var[153] == 4) {
[0090] (D8)   printEgo("No way! I'd burn myself!");
[00A6] (18) } else {
[00A9] (42)   startScript(3);
[00AB] (**) }
[00AB] (00) stopObjectCode();
[00AC] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,1)) {
[00B1] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT2,0);
[00B4] (08)   if (Var[153] != 4) {
[00BA] (07)     setState08(288);
[00BD] (17)     clearState02(288);
[00C0] (68)     VAR_RESULT = isScriptRunning(35);
[00C3] (A8)     if (VAR_RESULT) {
[00C7] (19)       doSentence(253,280,0,1);
[00CE] (**)     }
[00CE] (18)   } else {
[00D1] (D8)     printEgo("It burned up.");
[00DE] (**)   }
[00DE] (18) } else {
[00E1] (48)   if (VAR_ACTIVE_OBJECT2 == 53) {
[00E7] (18)   } else {
[00EA] (48)     unless (VAR_ACTIVE_OBJECT2 == 54) goto 016B;
[00F0] (**)   }
[00F0] (48)   if (Var[153] == 3) {
[00F6] (18)     goto 011A;
[00F9] (08)   } else if (Var[153] != 2) {
[0102] (D8)     printEgo("Now I need some wood!");
[0115] (**)   }
[0115] (C8)   if (Var[153] == Var[235]) {
[011A] (D8)     printEgo("I'll put it behind the first nest.");
[0138] (5A)     Var[47] += 20;
[013C] (27)     setState04(290);
[013F] (**)   }
[013F] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT2,0);
[0142] (48)   if (Var[153] == 4) {
[0148] (18)     goto 00D1;
[014B] (**)   }
[014B] (48)   if (Var[153] == 2) {
[0151] (18)   } else {
[0154] (48)     if (Var[153] == 3) {
[015A] (18)       goto 017A;
[015D] (18)     } else {
[0160] (9A)       Var[153] = Var[235];
[0163] (05)       drawObject(274,255,255);
[0168] (18)       goto 01C0;
[016B] (**)     }
[016B] (48)     unless (VAR_ACTIVE_OBJECT2 == 52) goto 0192;
[0171] (29)     setOwnerOf(52,0);
[0175] (C8)     unless (Var[153] == Var[235]) goto 0186;
[017A] (**)   }
[017A] (1A)   Var[153] = 3;
[017E] (05)   drawObject(276,255,255);
[0183] (18)   goto 018F;
[0186] (1A)   Var[153] = 2;
[018A] (05)   drawObject(275,255,255);
[018F] (18)   goto 01C0;
[0192] (48)   if (VAR_ACTIVE_OBJECT2 == 49) {
[0198] (19)     doSentence(253,288,0,1);
[019F] (18)   } else {
[01A2] (D8)     printEgo("I don't want to put that in the pit.");
[01C0] (**)   }
[01C0] (**) }
[01C0] (19) doSentence(253,291,0,1);
[01C7] (00) stopObjectCode();
END

// Object 274
Events:
  FD - 0013
[0013] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0015] (D8) printEgo("Got it!");
[001D] (D4) setObjectName(VAR_ACTIVE_OBJECT1,"bird nest");
[0029] (00) stopObjectCode();
END

// Object 275
Events:
  FD - 0013
[0013] (48) if (VAR_ACTIVE_VERB == 14) {
[0019] (D8)   printEgo("I can't reach it.");
[0029] (19)   doSentence(STOP);
[002B] (48) } else if (VAR_ACTIVE_VERB == 11) {
[0034] (48)   if (VAR_ACTIVE_OBJECT2 == 49) {
[003A] (18)     goto 0019;
[003D] (**)   }
[003D] (9D)   if (classOfIs(VAR_ACTIVE_OBJECT2,2)) {
[0042] (19)     doSentence(253,274,0,1);
[0049] (18)   } else {
[004C] (D8)     printEgo("I can't reach it with that.");
[0064] (**)   }
[0064] (**) }
[0064] (00) stopObjectCode();
END

// Object 276
Events:
  FD - 0013
[0013] (48) if (Var[147] == 2) {
[0019] (48)   if (VAR_EGO == 1) {
[001F] (D8)     printEgo("Too bad I had to kill the squirrel.");
[003D] (**)   }
[003D] (D0)   pickupObject(VAR_ACTIVE_OBJECT1);
[003F] (18) } else {
[0042] (D8)   printEgo("The two-headed squirrel is guarding it.");
[0066] (19)   doSentence(STOP);
[0068] (**) }
[0068] (00) stopObjectCode();
END

// Object 277
Events:
  FD - 0013
[0013] (1C) startSound(80);
[0015] (16) Var[46] = getRandomNr(3);
[0018] (5A) Var[46] += 277;
[001C] (85) drawObject(Var[46],255,255);
[0020] (80) breakHere();
[0021] (18) goto 0015;
[0024] (00) stopObjectCode();
END

// Object 278
Events:
END

// Object 279
Events:
END

// Object 280
Events:
  FD - 0013
[0013] (2E) delay(60);
[0017] (19) doSentence(253,281,0,1);
[001E] (1C) startSound(80);
[0020] (1A) Var[44] = 1;
[0024] (16) Var[46] = getRandomNr(2);
[0027] (5A) Var[46] += 289;
[002B] (85) drawObject(Var[46],28,11);
[002F] (80) breakHere();
[0030] (46) Var[44]++;
[0032] (44) unless (Var[44] > 8) goto 0024;
[0038] (47) clearState08(288);
[003B] (57) setState02(288);
[003E] (47) clearState08(289);
[0041] (47) clearState08(290);
[0044] (47) clearState08(291);
[0047] (68) VAR_RESULT = isScriptRunning(35);
[004A] (28) if (!VAR_RESULT) {
[004E] (08)   if (Var[153] != 4) {
[0054] (3C)     stopSound(80);
[0056] (80)     breakHere();
[0057] (19)     doSentence(253,282,0,1);
[005E] (**)   }
[005E] (**) }
[005E] (00) stopObjectCode();
END

// Object 281
Events:
   D - 001E
  FD - 0029
[001E] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0022] (24)   loadRoomWithEgo(297,129,255,255);
[0028] (**) }
[0028] (00) stopObjectCode();
[0029] (33) RoomColor(1,1)
[002D] (33) RoomColor(9,9)
[0031] (33) RoomColor(4,4)
[0035] (33) RoomColor(6,6)
[0039] (33) RoomColor(12,12)
[003D] (70) lights(11,0,0);
[0041] (00) stopObjectCode();
END

// Object 282
Events:
   B - 0027
   C - 009F
  FD - 00D2
[0027] (48) if (VAR_CURRENT_LIGHTS == 11) {
[002D] (48)   if (VAR_ACTIVE_OBJECT2 == 25) {
[0033] (60)     cursorCommand(15, 2);
[0036] (C7)     clearState08(VAR_ACTIVE_OBJECT1);
[0038] (D7)     setState02(VAR_ACTIVE_OBJECT1);
[003A] (D8)     printEgo("Connect the dots^ la, la, la-la.");
[0057] (2E)     delay(120);
[005B] (07)     setState08(281);
[005E] (1C)     startSound(78);
[0060] (19)     doSentence(250,283,0,1);
[0067] (60)     cursorCommand(247, 1);
[006A] (18)   } else {
[006D] (D8)     printEgo("Hmmm, nothing happened.");
[0084] (**)   }
[0084] (18) } else {
[0087] (D8)   printEgo("I need more light in here.");
[009E] (**) }
[009E] (00) stopObjectCode();
[009F] (D8) printEgo("It looks like an unfinished drawing made\x01of yellow dots.");
[00D1] (00) stopObjectCode();
[00D2] (33) RoomColor(0,1)
[00D6] (33) RoomColor(0,9)
[00DA] (33) RoomColor(8,4)
[00DE] (33) RoomColor(7,6)
[00E2] (33) RoomColor(8,12)
[00E6] (F0) lights(Var[234],0,0);
[00EA] (00) stopObjectCode();
END

// Object 283
Events:
  FD - 0013
[0013] (0F) if (!getState08(55)) {
[0018] (80)   breakHere();
[0019] (05)   drawObject(283,255,255);
[001E] (80)   breakHere();
[001F] (05)   drawObject(284,255,255);
[0024] (18)   goto 0018;
[0027] (**) }
[0027] (00) stopObjectCode();
END

// Object 284
Events:
  FD - 0013
[0013] (19) doSentence(253,282,0,1);
[001A] (2E) delay(60);
[001E] (B6) walkActorToObject(VAR_EGO,273);
[0022] (D8) printEgo("Oh no! The fire has gone out!");
[003B] (00) stopObjectCode();
END

// Object 285
Events:
   9 - 0030
   A - 0030
   B - 0046
   E - 0030
  13 - 0090
  FD - 00AC
[0030] (D8) printEgo("I don't want to get bit.");
[0045] (00) stopObjectCode();
[0046] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,2)) {
[004B] (48)   if (VAR_EGO == 1) {
[0051] (19)     doSentence(254,286,0,1);
[0058] (47)     clearState08(285);
[005B] (47)     clearState08(286);
[005E] (47)     clearState08(287);
[0061] (17)     clearState02(54);
[0064] (42)     startScript(144);
[0066] (18)   } else {
[0069] (D8)     printEgo("That would kill it!");
[007B] (**)   }
[007B] (48) } else if (VAR_ACTIVE_OBJECT2 == 55) {
[0084] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0089] (18) } else {
[008F] (00)   stopObjectCode();
[0090] (**) }
[0090] (D8) printEgo("It just wants to be left alone.");
[00AB] (00) stopObjectCode();
[00AC] (17) clearState02(285);
[00AF] (16) Var[48] = getRandomNr(2);
[00B2] (5A) Var[48] += 285;
[00B6] (48) if (Var[48] == 286) {
[00BC] (1C)   startSound(93);
[00BE] (**) }
[00BE] (85) drawObject(Var[48],255,255);
[00C2] (80) breakHere();
[00C3] (00) stopObjectCode();
END

// Object 286
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (66) Var[45] = getClosestObjActor(54);
[0018] (B4) VAR_RESULT = getDist(Var[45],54);
[001D] (78) if (VAR_RESULT < 6) {
[0023] (19)   doSentence(250,285,0,1);
[002A] (5F) } else if (!getState02(285)) {
[0032] (68)   VAR_RESULT = isScriptRunning(67);
[0035] (28)   if (!VAR_RESULT) {
[0039] (57)     setState02(285);
[003C] (57)     setState02(286);
[003F] (57)     setState02(287);
[0042] (47)     clearState08(285);
[0045] (47)     clearState08(286);
[0048] (47)     clearState08(287);
[004B] (**)   }
[004B] (**) }
[004B] (18) goto 0013;
[004E] (00) stopObjectCode();
END

// Object 287
Events:
  FD - 0013
[0013] (19) doSentence(254,286,0,1);
[001A] (7A) VerbOps(New-31(0,19,0,0,"  Left head@@"));
[002E] (7A) VerbOps(New-33(13,19,2,0,"   Chatter@@@"));
[0042] (7A) VerbOps(New-32(26,19,3,0,"  Right head@@"));
[0057] (80) breakHere();
[0058] (A8) unless (VAR_ACTIVE_VERB) goto 0057;
[005C] (05) drawObject(286,255,255);
[0061] (80) breakHere();
[0062] (48) if (VAR_ACTIVE_VERB == 31) {
[0068] (05)   drawObject(287,255,255);
[006D] (9A)   VAR_ACTIVE_VERB = Var[234];
[0070] (**) }
[0070] (48) if (VAR_ACTIVE_VERB == 32) {
[0076] (05)   drawObject(285,255,255);
[007B] (9A)   VAR_ACTIVE_VERB = Var[234];
[007E] (**) }
[007E] (48) if (VAR_ACTIVE_VERB == 33) {
[0084] (9A)   VAR_ACTIVE_VERB = Var[234];
[0087] (1A)   Var[49] = 1;
[008B] (19)   doSentence(253,285,0,1);
[0092] (80)   breakHere();
[0093] (80)   breakHere();
[0094] (46)   Var[49]++;
[0096] (44)   unless (Var[49] > 12) goto 008B;
[009C] (05)   drawObject(286,255,255);
[00A1] (**) }
[00A1] (18) goto 0057;
[00A4] (00) stopObjectCode();
END

// Object 288
Events:
   B - 0035
   E - 001C
  FD - 0048
[001C] (D8) printEgo("No way, it's all dirty now!");
[0034] (00) stopObjectCode();
[0035] (48) if (VAR_ACTIVE_OBJECT2 == 49) {
[003B] (19)   doSentence(253,288,0,1);
[0042] (18) } else {
[0045] (42)   startScript(3);
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (4F) if (getState08(288)) {
[004D] (19)   doSentence(253,280,0,1);
[0054] (**) }
[0054] (C8) if (Var[153] == Var[234]) {
[0059] (0F)   if (!getState08(288)) {
[005E] (D8)     printEgo("There's nothing in there to burn.");
[007C] (**)   }
[007C] (48) } else if (Var[153] == 2) {
[0085] (80)   breakHere();
[0086] (0F)   unless (!getState08(288)) goto 0085;
[008B] (2E)   delay(60);
[008F] (D8)   printEgo("The branch won't catch. I need some\x01kindling.");
[00B8] (C8) } else if (Var[153] == Var[235]) {
[00C0] (18)   goto 00CC;
[00C3] (48) } else if (Var[153] == 3) {
[00CC] (68)   VAR_RESULT = isScriptRunning(35);
[00CF] (28)   if (!VAR_RESULT) {
[00D3] (42)     startScript(35);
[00D5] (**)   }
[00D5] (48) } else if (Var[153] == 4) {
[00DE] (D8)   printEgo("It's already lit.");
[00EF] (18)   /* goto 00F2; */
[00F2] (**) }
[00F2] (00) stopObjectCode();
END

// Object 289
Events:
  FD - 0013
[0013] (19) doSentence(253,281,0,1);
[001A] (1C) startSound(80);
[001C] (16) Var[46] = getRandomNr(2);
[001F] (5A) Var[46] += 289;
[0023] (85) drawObject(Var[46],25,11);
[0027] (80) breakHere();
[0028] (18) goto 001C;
[002B] (00) stopObjectCode();
END

// Object 290
Events:
  FD - 0013
[0013] (3C) stopSound(80);
[0015] (47) clearState08(274);
[0018] (47) clearState08(289);
[001B] (47) clearState08(290);
[001E] (47) clearState08(291);
[0021] (C8) if (Var[153] == Var[235]) {
[0026] (9A)   Var[153] = Var[234];
[0029] (**) }
[0029] (00) stopObjectCode();
END

// Object 291
Events:
  FD - 0013
[0013] (48) if (Var[153] == 2) {
[0019] (54)   setObjectName(273,"branch in pit");
[002A] (C8) } else if (Var[153] == Var[235]) {
[0032] (54)   setObjectName(273,"nest in pit");
[0041] (48) } else if (Var[153] == 3) {
[004A] (54)   setObjectName(273,"nest and branch");
[005D] (48) } else if (Var[153] == 4) {
[0066] (54)   setObjectName(273,"pit of fire");
[0075] (18) } else {
[0078] (54)   setObjectName(273,"fire pit");
[0084] (**) }
[0084] (00) stopObjectCode();
END
