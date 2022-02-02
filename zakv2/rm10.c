/**
 * Zak McKracken: V2 Retail
 * 
 * Room 10: Space Cadillac
 */

// EN
[0000] (0C) lockSound(72)
[0003] (0C) lockSound(73)
[0006] (0C) lockSound(74)
[0009] (0C) lockSound(75)
[000C] (0C) lockSound(76)
[000F] (0C) lockSound(77)
[0012] (0C) lockSound(45)
[0015] (1A) Var[51] = 230;
[0019] (C7) clearState08(Var[51]);
[001B] (46) Var[51]++;
[001D] (44) unless (Var[51] > 235) goto 0019;
[0023] (0C) loadScript(64)
[0026] (0C) lockScript(64)
[0029] (0F) if (!getState08(229)) {
[002E] (30)   setBoxFlags(1,0);
[0031] (30)   setBoxFlags(2,0);
[0034] (30)   setBoxFlags(0,128);
[0037] (18) } else {
[003A] (30)   setBoxFlags(1,128);
[003D] (30)   setBoxFlags(2,128);
[0040] (30)   setBoxFlags(0,0);
[0043] (**) }
[0043] (0F) if (!getState08(238)) {
[0048] (17)   clearState02(238);
[004B] (30)   setBoxFlags(4,128);
[004E] (30)   setBoxFlags(5,128);
[0051] (33)   RoomScroll(20,20)
[0055] (0C)   loadScript(100)
[0058] (0C)   loadSound(23)
[005B] (0C)   lockSound(23)
[005E] (0C)   loadCostume(28)
[0061] (18) } else {
[0064] (19)   doSentence(253,240,0,1);
[006B] (31)   VAR_RESULT = getBitVar(1573,0);
[0070] (A8)   if (VAR_RESULT) {
[0074] (19)     doSentence(250,231,0,1);
[007B] (**)   }
[007B] (**) }
[007B] (68) VAR_RESULT = isScriptRunning(64);
[007E] (A8) if (VAR_RESULT) {
[0082] (1C)   startSound(45);
[0084] (18) } else {
[0087] (26)   setVarRange(Var[49],3,[0,0,0]);
[008D] (5B)   setBitVar(1571,0,Var[234]);
[0092] (5B)   setBitVar(1570,0,Var[234]);
[0097] (**) }
[0097] (00) stopObjectCode();
END

// EX
[0000] (40) cutscene();
[0001] (52) actorFollowCamera(12);
[0003] (48) if (Var[98] == 18700) {
[0009] (4A)   chainScript(98);
[000B] (0C)   unlockSound(75)
[000E] (0C)   unlockSound(76)
[0011] (0C)   unlockSound(77)
[0014] (0C)   unlockSound(45)
[0017] (3C)   stopSound(45);
[0019] (9A)   Var[203] = Var[234];
[001C] (53)   ActorOps(7,[Name("representative")]);
[002F] (03)   VAR_RESULT = getActorRoom(1);
[0032] (08)   if (VAR_RESULT != 10) {
[0038] (62)     stopScript(100);
[003A] (62)     stopScript(101);
[003C] (62)     stopScript(95);
[003E] (62)     stopScript(103);
[0040] (9A)     Var[199] = Var[235];
[0043] (5B)     setBitVar(1573,0,Var[234]);
[0048] (**)   }
[0048] (00)   stopObjectCode();
END

// Object 229
Events:
   B - 001E
   D - 001E
  FD - 0029
[001E] (9A) Var[233] = VAR_EGO;
[0021] (19) doSentence(253,230,0,1);
[0028] (00) stopObjectCode();
[0029] (A8) if (Var[47]) {
[002D] (2E)   delay(420);
[0031] (**) }
[0031] (9A) Var[49] = Var[234];
[0034] (5B) setBitVar(1570,0,Var[234]);
[0039] (5B) setBitVar(1571,0,Var[234]);
[003E] (1A) Var[51] = 230;
[0042] (87) setState08(Var[51]);
[0044] (46) Var[51]++;
[0046] (44) unless (Var[51] > 235) goto 0042;
[004C] (1A) Var[53] = 77;
[0050] (9C) startSound(Var[53]);
[0052] (80) breakHere();
[0053] (C6) Var[53]--;
[0055] (78) unless (Var[53] < 72) goto 0050;
[005B] (1A) Var[51] = 230;
[005F] (C7) clearState08(Var[51]);
[0061] (46) Var[51]++;
[0063] (44) unless (Var[51] > 235) goto 005F;
[0069] (00) stopObjectCode();
END

// Object 230
Events:
   4 - 0025
   9 - 0025
   B - 0025
   D - 0025
  FD - 003A
[0025] (28) if (!Var[50]) {
[0029] (68)   VAR_RESULT = isScriptRunning(64);
[002C] (28)   if (!VAR_RESULT) {
[0030] (1C)     startSound(72);
[0032] (19)     doSentence(253,239,0,1);
[0039] (**)   }
[0039] (**) }
[0039] (00) stopObjectCode();
[003A] (1A) Var[56] = 12;
[003E] (FD) setActorElevation(Var[233],Var[56]);
[0041] (80) breakHere();
[0042] (46) Var[56]++;
[0044] (44) unless (Var[56] > 17) goto 003E;
[004A] (94) print(Var[233],"I'm on!");
[0053] (80) breakHere();
[0054] (B4) VAR_RESULT = getDist(Var[233],229);
[0059] (44) unless (VAR_RESULT > 0) goto 0053;
[005F] (BD) setActorElevation(Var[233],0);
[0062] (9A) Var[233] = Var[234];
[0065] (00) stopObjectCode();
END

// Object 231
Events:
   4 - 0026
   9 - 0026
   B - 0026
   D - 0026
  FD - 003B
[0026] (28) if (!Var[50]) {
[002A] (68)   VAR_RESULT = isScriptRunning(64);
[002D] (28)   if (!VAR_RESULT) {
[0031] (1C)     startSound(73);
[0033] (19)     doSentence(253,239,0,1);
[003A] (**)   }
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (5B) setBitVar(1573,0,Var[235]);
[0040] (1E) walkActorTo(7,68,56);
[0044] (3B) waitForActor(7);
[0046] (11) animateActor(7,247);
[0049] (5B) setBitVar(1573,0,Var[234]);
[004E] (00) stopObjectCode();
END

// Object 232
Events:
   4 - 0027
   9 - 0027
   B - 0027
   D - 0027
  FD - 003C
[0027] (28) if (!Var[50]) {
[002B] (68)   VAR_RESULT = isScriptRunning(64);
[002E] (28)   if (!VAR_RESULT) {
[0032] (1C)     startSound(74);
[0034] (19)     doSentence(253,239,0,1);
[003B] (**)   }
[003B] (**) }
[003B] (00) stopObjectCode();
[003C] (80) breakHere();
[003D] (68) VAR_RESULT = isScriptRunning(64);
[0040] (28) unless (!VAR_RESULT) goto 003C;
[0044] (03) VAR_RESULT = getActorRoom(1);
[0047] (48) if (VAR_RESULT == 10) {
[004D] (5B)   setBitVar(1568,0,Var[235]);
[0052] (5B)   setBitVar(1559,6,Var[235]);
[0057] (11)   animateActor(1,246);
[005A] (3B)   waitForActor(1);
[005C] (D8)   printEgo("REPORTER BECOMES `SPACE CADET`\x01IN SPACE CADILLAC!");
[008A] (**) }
[008A] (00) stopObjectCode();
END

// Object 233
Events:
   4 - 002C
   9 - 002C
   B - 002C
   D - 002C
  FD - 0041
[002C] (28) if (!Var[50]) {
[0030] (68)   VAR_RESULT = isScriptRunning(64);
[0033] (28)   if (!VAR_RESULT) {
[0037] (1C)     startSound(75);
[0039] (19)     doSentence(253,239,0,1);
[0040] (**)   }
[0040] (**) }
[0040] (00) stopObjectCode();
[0041] (1E) walkActorTo(11,66,36);
[0045] (3B) waitForActor(11);
[0047] (11) animateActor(11,247);
[004A] (00) stopObjectCode();
END

// Object 234
Events:
   4 - 0028
   9 - 0028
   B - 0028
   D - 0028
  FD - 003D
[0028] (28) if (!Var[50]) {
[002C] (68)   VAR_RESULT = isScriptRunning(64);
[002F] (28)   if (!VAR_RESULT) {
[0033] (1C)     startSound(76);
[0035] (19)     doSentence(253,239,0,1);
[003C] (**)   }
[003C] (**) }
[003C] (00) stopObjectCode();
[003D] (1A) Var[167] = 52;
[0041] (1A) Var[164] = 44;
[0045] (29) setOwnerOf(40,7);
[0049] (29) setOwnerOf(43,7);
[004D] (27) setState04(328);
[0050] (42) startScript(5);
[0052] (00) stopObjectCode();
END

// Object 235
Events:
   4 - 0028
   9 - 0028
   B - 0028
   D - 0028
  FD - 003D
[0028] (28) if (!Var[50]) {
[002C] (68)   VAR_RESULT = isScriptRunning(64);
[002F] (28)   if (!VAR_RESULT) {
[0033] (1C)     startSound(77);
[0035] (19)     doSentence(253,239,0,1);
[003C] (**)   }
[003C] (**) }
[003C] (00) stopObjectCode();
[003D] (80) breakHere();
[003E] (C3) VAR_RESULT = getActorX(VAR_EGO);
[0041] (44) unless (VAR_RESULT > 50) goto 003D;
[0047] (40) cutscene();
[0048] (91) animateActor(VAR_EGO,255);
[004B] (4D) walkActorToActor(11,VAR_EGO,4);
[004F] (3B) waitForActor(11);
[0051] (89) faceActor(VAR_EGO,11);
[0054] (00) stopObjectCode();
[0055] (14) print(11,"Glad to see you again! Enjoy the view!");
[0077] (AE) waitForMessage();
[0078] (C0) endCutscene();
[0079] (19) doSentence(250,233,0,1);
[0080] (00) stopObjectCode();
END

// Object 236
Events:
   C - 001F
  FD - 0033
[001F] (D8) printEgo("It looks like Earth!");
[0032] (00) stopObjectCode();
[0033] (46) Var[203]++;
[0035] (80) breakHere();
[0036] (48) if (VAR_ACTIVE_VERB == 3) {
[003C] (BB)   waitForActor(VAR_EGO);
[003E] (89)   faceActor(VAR_EGO,11);
[0041] (00)   stopObjectCode();
[0042] (48)   if (VAR_ACTIVE_OBJECT2 == 11) {
[0048] (19)     doSentence(254,237,0,1);
[004F] (11)     animateActor(11,255);
[0052] (4D)     walkActorToActor(11,VAR_EGO,3);
[0056] (3B)     waitForActor(11);
[0058] (49)     faceActor(11,VAR_EGO);
[005B] (89)     faceActor(VAR_EGO,11);
[005E] (00)     stopObjectCode();
[005F] (80)     breakHere();
[0060] (80)     breakHere();
[0061] (48)     if (VAR_ACTIVE_OBJECT1 == 41) {
[0067] (14)       print(11,"A \x06\x09! It's been SO long since ah've\x01strummed them strings!");
[009B] (18)       goto 00BC;
[009E] (48)     } else if (VAR_ACTIVE_OBJECT1 == 27) {
[00A7] (14)       print(11,"A fan! Ah didn't know!");
[00BC] (9A)       Var[45] = Var[234];
[00BF] (A9)       setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[00C2] (5B)       setBitVar(1505,0,Var[235]);
[00C7] (42)       startScript(103);
[00C9] (48)     } else if (VAR_ACTIVE_OBJECT1 == 16) {
[00D2] (14)       print(11,"Ah don't play no sissy instruments!");
[00F3] (48)     } else if (VAR_ACTIVE_OBJECT1 == 30) {
[00FC] (14)       print(11,"Lazy! You gotta send away for your card.");
[0120] (18)     } else {
[0123] (9D)       if (classOfIs(VAR_ACTIVE_OBJECT1,32)) {
[0128] (14)         print(11,"An artifact!");
[0136] (62)         stopScript(101);
[0138] (9A)         Var[45] = Var[234];
[013B] (AE)         waitForMessage();
[013C] (42)         startScript(95);
[013E] (5B)         setBitVar(1505,0,Var[234]);
[0143] (18)         goto 0180;
[0146] (**)       }
[0146] (A8)       if (Var[45]) {
[014A] (14)         print(11,"Ah don't want it!");
[015B] (18)       } else {
[015E] (14)         print(11,"No thanks.");
[016A] (**)       }
[016A] (**)     }
[016A] (80)     breakHere();
[016B] (68)     VAR_RESULT = isScriptRunning(103);
[016E] (28)     unless (!VAR_RESULT) goto 016A;
[0172] (A8)     if (Var[45]) {
[0176] (19)       doSentence(253,237,0,1);
[017D] (18)     } else {
[0180] (19)       doSentence(250,233,0,1);
[0187] (**)     }
[0187] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[018A] (48)   } else if (VAR_ACTIVE_OBJECT2 == 7) {
[0193] (14)     print(7,"Give it to The King.");
[01A6] (AE)     waitForMessage();
[01A7] (68)     VAR_RESULT = isScriptRunning(95);
[01AA] (28)     if (!VAR_RESULT) {
[01AE] (43)       VAR_RESULT = getActorX(7);
[01B1] (48)       if (VAR_RESULT == 68) {
[01B7] (11)         animateActor(7,247);
[01BA] (**)       }
[01BA] (**)     }
[01BA] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[01BD] (**)   }
[01BD] (**) }
[01BD] (18) goto 0035;
[01C0] (00) stopObjectCode();
END

// Object 237
Events:
   C - 0022
  FD - 007E
[0022] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0026] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[0028] (9A)   Var[66] = Var[234];
[002B] (16)   Var[67] = getRandomNr(9);
[002E] (9A)   Var[14] = Var[66];
[0031] (5A)   Var[14] += 212;
[0035] (8A)   Var[Var[14]] = Var[67];
[0038] (46)   Var[66]++;
[003A] (44)   unless (Var[66] > 3) goto 002B;
[0040] (**) }
[0040] (D8) printEgo("Tomorrow's Winning Lotto Number: \x02");
[0060] (9A) Var[67] = Var[234];
[0063] (9A) Var[14] = Var[67];
[0066] (5A) Var[14] += 212;
[006A] (9A) Var[66] = Var[14];
[006D] (D8) printEgo("\x04\x42 \x02");
[0073] (46) Var[67]++;
[0075] (44) unless (Var[67] > 3) goto 0063;
[007B] (D8) printEgo("");
[007D] (00) stopObjectCode();
[007E] (9A) Var[45] = Var[235];
[0081] (1E) walkActorTo(11,57,36);
[0085] (3B) waitForActor(11);
[0087] (1E) walkActorTo(11,74,36);
[008B] (3B) waitForActor(11);
[008D] (18) goto 0081;
[0090] (00) stopObjectCode();
END

// Object 238
Events:
   1 - 0019
  FD - 0030
[0019] (D8) printEgo("It doesn't seem to open.");
[002F] (00) stopObjectCode();
[0030] (80) breakHere();
[0031] (9A) Var[54] = Var[234];
[0034] (48) if (Var[167] == 48) {
[003A] (48)   if (Var[164] == 40) {
[0040] (46)     Var[54]++;
[0042] (68)     VAR_RESULT = isScriptRunning(100);
[0045] (28)     if (!VAR_RESULT) {
[0049] (62)       stopScript(101);
[004B] (11)       animateActor(11,255);
[004E] (62)       stopScript(95);
[0050] (11)       animateActor(7,255);
[0053] (5B)       setBitVar(1505,0,Var[234]);
[0058] (0C)       loadScript(95)
[005B] (14)       print(11,"Hey! What's THAT ah see?");
[0072] (4D)       walkActorToActor(11,VAR_EGO,2);
[0076] (80)       breakHere();
[0077] (80)       breakHere();
[0078] (B4)       VAR_RESULT = getDist(VAR_EGO,11);
[007D] (04)       unless (VAR_RESULT <= 2) goto 0072;
[0083] (5B)       setBitVar(1441,0,Var[235]);
[0088] (11)       animateActor(1,255);
[008B] (09)       faceActor(1,11);
[008E] (00)       stopObjectCode();
[008F] (19)       doSentence(253,234,0,1);
[0096] (14)       print(11,"Trying to fool us?\x03Take him!");
[00B1] (AE)       waitForMessage();
[00B2] (42)       startScript(95);
[00B4] (80)       breakHere();
[00B5] (68)       VAR_RESULT = isScriptRunning(95);
[00B8] (28)       unless (!VAR_RESULT) goto 00B4;
[00BC] (19)       doSentence(250,233,0,1);
[00C3] (**)     }
[00C3] (**)   }
[00C3] (**) }
[00C3] (18) goto 0030;
[00C6] (00) stopObjectCode();
END

// Object 239
Events:
  FD - 0013
[0013] (9A) Var[51] = VAR_ACTIVE_OBJECT1;
[0016] (9A) Var[50] = Var[235];
[0019] (28) if (!Var[49]) {
[001D] (5B)   setBitVar(1570,0,Var[234]);
[0022] (5B)   setBitVar(1571,0,Var[234]);
[0027] (**) }
[0027] (85) drawObject(Var[51],255,255);
[002B] (2E) delay(36);
[002F] (C7) clearState08(Var[51]);
[0031] (9A) Var[47] = Var[235];
[0034] (19) doSentence(253,229,0,1);
[003B] (9A) Var[14] = Var[49];
[003E] (5A) Var[14] += 113;
[0042] (9A) Var[66] = Var[14];
[0045] (88) if (Var[66] != Var[51]) {
[004A] (5B)   setBitVar(1570,0,Var[235]);
[004F] (**) }
[004F] (46) Var[49]++;
[0051] (DA) Var[66] += Var[49];
[0054] (44) if (Var[66] > 235) {
[005A] (3A)   Var[66] -= 235;
[005E] (5A)   Var[66] += 229;
[0062] (**) }
[0062] (88) if (Var[66] != Var[51]) {
[0067] (5B)   setBitVar(1571,0,Var[235]);
[006C] (**) }
[006C] (48) if (Var[49] == 4) {
[0072] (19)   doSentence(254,229,0,1);
[0079] (31)   VAR_RESULT = getBitVar(1571,0);
[007E] (28)   if (!VAR_RESULT) {
[0082] (18)   } else {
[0085] (31)     VAR_RESULT = getBitVar(1570,0);
[008A] (28)     unless (!VAR_RESULT) goto 0093;
[008E] (**)   }
[008E] (42)   startScript(64);
[0090] (18)   goto 00BF;
[0093] (9A)   Var[47] = Var[234];
[0096] (19)   doSentence(253,229,0,1);
[009D] (2E)   delay(60);
[00A1] (D8)   printEgo("I must have played the wrong tune.");
[00BF] (**) }
[00BF] (9A) Var[50] = Var[234];
[00C2] (00) stopObjectCode();
END

// Object 240
Events:
   9 - 001D
   B - 001D
  FD - 003B
[001D] (68) VAR_RESULT = isScriptRunning(64);
[0020] (28) if (!VAR_RESULT) {
[0024] (1C)   startSound(23);
[0026] (0F)   if (!getState08(238)) {
[002B] (80)     breakHere();
[002C] (4F)     unless (getState08(229)) goto 002B;
[0031] (68)     VAR_RESULT = isScriptRunning(100);
[0034] (28)     if (!VAR_RESULT) {
[0038] (42)       startScript(100);
[003A] (**)     }
[003A] (**)   }
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (13) ActorOps(11,[Costume(27)]);
[003F] (13) ActorOps(11,[Sound(6)]);
[0043] (13) ActorOps(11,[TalkColor(15)]);
[0047] (53) ActorOps(11,[Name("The King")]);
[0054] (53) ActorOps(7,[Name("Caponian")]);
[0061] (03) VAR_RESULT = getActorRoom(11);
[0064] (88) if (VAR_RESULT != VAR_ROOM) {
[0069] (2D)   putActorInRoom(11,10);
[006C] (01)   putActor(11,66,36);
[0070] (11)   animateActor(11,251);
[0073] (**) }
[0073] (03) VAR_RESULT = getActorRoom(7);
[0076] (88) if (VAR_RESULT != VAR_ROOM) {
[007B] (2D)   putActorInRoom(7,10);
[007E] (01)   putActor(7,44,56);
[0082] (**) }
[0082] (1A) Var[245] = 28;
[0086] (42) startScript(5);
[0088] (11) animateActor(11,24);
[008B] (30) setBoxFlags(4,0);
[008E] (30) setBoxFlags(5,0);
[0091] (33) RoomScroll(20,100)
[0095] (19) doSentence(250,238,0,1);
[009C] (19) doSentence(253,236,0,1);
[00A3] (9A) Var[45] = Var[234];
[00A6] (68) VAR_RESULT = isScriptRunning(101);
[00A9] (A8) if (VAR_RESULT) {
[00AD] (19)   doSentence(253,237,0,1);
[00B4] (**) }
[00B4] (00) stopObjectCode();
END
