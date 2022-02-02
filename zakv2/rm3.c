/**
 * Zak McKracken: V2 Retail
 * 
 * Room 3: 13th Avenue
 */

// EN
[0000] (9A) Var[53] = Var[234];
[0003] (9A) Var[46] = Var[234];
[0006] (0C) loadSound(26)
[0009] (30) setBoxFlags(6,0);
[000C] (4F) if (getState08(144)) {
[0011] (30)   setBoxFlags(6,64);
[0014] (**) }
[0014] (0F) if (!getState08(143)) {
[0019] (0F)   if (!getState08(142)) {
[001E] (17)     clearState02(142);
[0021] (**)   }
[0021] (**) }
[0021] (A8) if (Var[159]) {
[0025] (17)   clearState02(28);
[0028] (07)   setState08(28);
[002B] (57)   setState02(139);
[002E] (47)   clearState08(139);
[0031] (18) } else {
[0034] (57)   setState02(28);
[0037] (47)   clearState08(28);
[003A] (**) }
[003A] (19) doSentence(253,144,0,1);
[0041] (19) doSentence(253,139,0,1);
[0048] (48) if (VAR_ACTIVE_OBJECT1 == 191) {
[004E] (19)   doSentence(253,146,0,1);
[0055] (**) }
[0055] (00) stopObjectCode();
END

// EX
[0000] (01) putActor(4,0,18);
[0004] (00) stopObjectCode();
[0005] (03) VAR_RESULT = getActorRoom(2);
[0008] (08) if (VAR_RESULT != 4) {
[000E] (47)   clearState08(135);
[0011] (47)   clearState08(151);
[0014] (47)   clearState08(156);
[0017] (**) }
[0017] (44) if (Var[159] > 10) {
[001D] (42)   startScript(12);
[001F] (**) }
[001F] (47) clearState08(143);
[0022] (07) setState08(144);
[0025] (30) setBoxFlags(6,64);
[0028] (1A) Var[48] = 1;
[002C] (19) doSentence(253,149,0,1);
[0033] (A8) if (Var[47]) {
[0037] (B1)   VAR_RESULT = getBitVar(1464,Var[48]);
[003C] (28)   if (!VAR_RESULT) {
[0040] (81)     putActor(Var[48],90,60);
[0044] (**)   }
[0044] (**) }
[0044] (1A) Var[48] = 2;
[0048] (19) doSentence(253,149,0,1);
[004F] (A8) if (Var[47]) {
[0053] (B1)   VAR_RESULT = getBitVar(1464,Var[48]);
[0058] (28)   if (!VAR_RESULT) {
[005C] (81)     putActor(Var[48],86,60);
[0060] (**)   }
[0060] (**) }
[0060] (68) VAR_RESULT = isScriptRunning(52);
[0063] (A8) if (VAR_RESULT) {
[0067] (62)   stopScript(52);
[0069] (42)   startScript(54);
[006B] (**) }
[006B] (00) stopObjectCode();
END

// Object 27
Events:
   B - 0025
   C - 0022
[0022] (42) startScript(61);
[0024] (00) stopObjectCode();
[0025] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002A] (00) stopObjectCode();
END

// Object 28
Events:
   1 - 0020
   2 - 0090
   B - 005B
   C - 00A5
[0020] (04) if (Var[159] <= 10) {
[0026] (D8)   printEgo("A letter! I need the key.");
[003C] (18) } else {
[003F] (D8)   printEgo("I'll leave it for the mailman.");
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (48) if (VAR_ACTIVE_OBJECT2 == 24) {
[0061] (44)   if (Var[159] > 10) {
[0067] (18)     goto 003F;
[006A] (18)   } else {
[006D] (1C)     startSound(26);
[006F] (C7)     clearState08(VAR_ACTIVE_OBJECT1);
[0071] (D7)     setState02(VAR_ACTIVE_OBJECT1);
[0073] (07)     setState08(139);
[0076] (17)     clearState02(139);
[0079] (**)   }
[0079] (18) } else {
[007C] (D8)   printEgo("That didn't open it.");
[008F] (**) }
[008F] (00) stopObjectCode();
[0090] (D8) printEgo("It's already closed.");
[00A4] (00) stopObjectCode();
[00A5] (19) doSentence(12,138,0,1);
[00AC] (00) stopObjectCode();
END

// Object 29
Events:
   B - 0023
   E - 0020
[0020] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0022] (00) stopObjectCode();
[0023] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0028] (00) stopObjectCode();
END

// Object 134
Events:
   D - 0019
[0019] (07) setState08(112);
[001C] (24) loadRoomWithEgo(112,2,255,255);
[0022] (00) stopObjectCode();
END

// Object 135
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(151);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(151);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(151,4,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 136
Events:
END

// Object 137
Events:
END

// Object 138
Events:
   1 - 0020
   2 - 0048
   B - 004B
   C - 00B9
[0020] (D8) printEgo("It's \x02");
[0027] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (D8)   printEgo("locked.");
[0034] (18) } else {
[0037] (D8)   printEgo("already opened.");
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (42) startScript(11);
[004A] (00) stopObjectCode();
[004B] (48) if (VAR_ACTIVE_OBJECT2 == 24) {
[0051] (8F)   if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0055] (87)     setState08(VAR_ACTIVE_OBJECT1);
[0057] (1C)     startSound(26);
[0059] (**)   }
[0059] (CF) } else if (getState08(VAR_ACTIVE_OBJECT1)) {
[0060] (48)   if (VAR_ACTIVE_OBJECT2 == 30) {
[0066] (28)     if (!Var[160]) {
[006A] (D8)       printEgo("It's not filled out.");
[007D] (18)     } else {
[0080] (C7)       clearState08(VAR_ACTIVE_OBJECT1);
[0082] (19)       doSentence(2,139,0,1);
[0089] (9A)       Var[159] = Var[160];
[008C] (5A)       Var[159] += 10;
[0090] (29)       setOwnerOf(30,0);
[0094] (**)     }
[0094] (18)   } else {
[0097] (D8)     printEgo("I can't mail that!");
[00A8] (**)   }
[00A8] (18) } else {
[00AB] (D8)   printEgo("It's locked.");
[00B8] (**) }
[00B8] (00) stopObjectCode();
[00B9] (D8) printEgo("Zachary McKracken, 5858 13th Ave.");
[00D8] (00) stopObjectCode();
END

// Object 139
Events:
   2 - 005A
   C - 001F
   E - 001F
  FD - 0067
[001F] (50) pickupObject(27);
[0022] (D8) printEgo("It's THE KING FAN CLUB card! Wow, that\x01was fast!");
[004C] (9A) Var[159] = Var[234];
[004F] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0051] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0053] (07) setState08(138);
[0056] (17) clearState02(138);
[0059] (00) stopObjectCode();
[005A] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[005C] (D7) setState02(VAR_ACTIVE_OBJECT1);
[005E] (07) setState08(28);
[0061] (17) clearState02(28);
[0064] (1C) startSound(11);
[0066] (00) stopObjectCode();
[0067] (80) breakHere();
[0068] (48) if (VAR_ACTIVE_VERB == 3) {
[006E] (04)   if (VAR_ACTIVE_OBJECT2 <= 2) {
[0074] (78)     if (VAR_CAMERA_POS_X < 69) {
[007A] (18)       goto 0067;
[007D] (**)     }
[007D] (9A)     Var[50] = VAR_ACTIVE_OBJECT1;
[0080] (23)     VAR_RESULT = getActorY(2);
[0083] (78)     if (VAR_RESULT < 57) {
[0089] (18)     } else {
[008C] (23)       VAR_RESULT = getActorY(1);
[008F] (78)       unless (VAR_RESULT < 57) goto 00F3;
[0095] (**)     }
[0095] (19)     doSentence(STOP);
[0097] (11)     animateActor(2,255);
[009A] (11)     animateActor(1,255);
[009D] (43)     Var[66] = getActorX(1);
[00A0] (43)     VAR_RESULT = getActorX(2);
[00A3] (C4)     if (VAR_RESULT > Var[66]) {
[00A8] (26)       setVarRange(Var[51],2,[1,2]);
[00AD] (18)     } else {
[00B0] (26)       setVarRange(Var[51],2,[2,1]);
[00B5] (**)     }
[00B5] (9E)     walkActorTo(Var[51],88,57);
[00B9] (9E)     walkActorTo(Var[52],92,57);
[00BD] (3B)     waitForActor(1);
[00BF] (3B)     waitForActor(2);
[00C1] (90)     VAR_RESULT = getObjectOwner(Var[50]);
[00C4] (88)     if (VAR_RESULT != VAR_ACTIVE_OBJECT2) {
[00C9] (88)       if (VAR_ACTIVE_OBJECT1 != Var[50]) {
[00CE] (18)         goto 0067;
[00D1] (**)       }
[00D1] (08)       if (VAR_ACTIVE_VERB != 3) {
[00D7] (18)         goto 0067;
[00DA] (**)       }
[00DA] (09)       faceActor(1,2);
[00DD] (00)       stopObjectCode();
[00DE] (09)       faceActor(2,1);
[00E1] (00)       stopObjectCode();
[00E2] (A8)       if (VAR_VERB_ALLOWED) {
[00E6] (79)         doSentence(3,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,1);
[00EB] (18)       } else {
[00EE] (42)         startScript(20);
[00F0] (**)       }
[00F0] (**)     }
[00F0] (19)     doSentence(RESET);
[00F2] (AC)     drawSentence();
[00F3] (9A)     VAR_ACTIVE_VERB = Var[234];
[00F6] (**)   }
[00F6] (**) }
[00F6] (18) goto 0067;
[00F9] (00) stopObjectCode();
END

// Object 140
Events:
   D - 0027
  FD - 003F
[0027] (D8) printEgo("That's a bit too far!");
[003A] (9E) walkActorTo(VAR_EGO,92,48);
[003E] (00) stopObjectCode();
[003F] (14) print(255,"Hey! I'm a busy guy! Just put your\x01CashCard in the card reader.");
[0076] (19) doSentence(253,148,0,1);
[007D] (00) stopObjectCode();
END

// Object 141
Events:
  FD - 0027
  FF - 0020
[0020] (24) loadRoomWithEgo(160,5,5,58);
[0026] (00) stopObjectCode();
[0027] (60) cursorCommand(15, 2);
[002A] (19) doSentence(253,148,0,1);
[0031] (2E) delay(60);
[0035] (1A) Var[66] = 90;
[0039] (48) if (Var[48] == 2) {
[003F] (1A)   Var[66] = 86;
[0043] (**) }
[0043] (DE) walkActorTo(Var[48],Var[66],60);
[0047] (BB) waitForActor(Var[48]);
[0049] (60) cursorCommand(247, 1);
[004C] (00) stopObjectCode();
END

// Object 142
Events:
   1 - 001A
   B - 005A
  FD - 0079
[001A] (4F) if (getState08(144)) {
[001F] (D8)   printEgo("The door won't open from the outside,\x01and the bus driver's asleep.");
[0059] (**) }
[0059] (00) stopObjectCode();
[005A] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,2)) {
[005F] (18) } else {
[0062] (9D)   unless (classOfIs(VAR_ACTIVE_OBJECT2,16)) goto 0076;
[0067] (**) }
[0067] (4F) if (getState08(144)) {
[006C] (19)   doSentence(253,147,0,1);
[0073] (**) }
[0073] (18) goto 0078;
[0076] (42) startScript(3);
[0078] (00) stopObjectCode();
[0079] (80) breakHere();
[007A] (B4) VAR_RESULT = getDist(VAR_EGO,142);
[007F] (44) unless (VAR_RESULT > 20) goto 0079;
[0085] (1A) Var[48] = 1;
[0089] (48) if (VAR_EGO == 1) {
[008F] (1A)   Var[48] = 2;
[0093] (**) }
[0093] (19) doSentence(253,149,0,1);
[009A] (A8) if (Var[47]) {
[009E] (18)   goto 0079;
[00A1] (**) }
[00A1] (19) doSentence(254,143,0,1);
[00A8] (1F) if (getState02(142)) {
[00AD] (19)   doSentence(253,145,0,1);
[00B4] (**) }
[00B4] (00) stopObjectCode();
END

// Object 143
Events:
  FD - 0013
[0013] (2E) delay(900);
[0017] (14) print(255,"Well? This ain't a free ride y'know.");
[0038] (19) doSentence(253,148,0,1);
[003F] (AE) waitForMessage();
[0040] (2E) delay(420);
[0044] (19) doSentence(253,140,0,1);
[004B] (AE) waitForMessage();
[004C] (2E) delay(420);
[0050] (9A) Var[48] = VAR_EGO;
[0053] (9A) Var[49] = Var[234];
[0056] (19) doSentence(253,149,0,1);
[005D] (A8) if (Var[47]) {
[0061] (14)   print(255,"OK, off ya go!");
[006F] (46)   Var[49]++;
[0071] (19)   doSentence(253,141,0,1);
[0078] (80)   breakHere();
[0079] (**) }
[0079] (1A) Var[48] = 1;
[007D] (48) if (VAR_EGO == 1) {
[0083] (1A)   Var[48] = 2;
[0087] (**) }
[0087] (19) doSentence(253,149,0,1);
[008E] (A8) if (Var[47]) {
[0092] (A8)   if (Var[49]) {
[0096] (14)     print(255,"You too!");
[00A0] (18)   } else {
[00A3] (14)     print(255,"Off my bus!");
[00AF] (**)   }
[00AF] (19)   doSentence(253,141,0,1);
[00B6] (80)   breakHere();
[00B7] (**) }
[00B7] (19) doSentence(254,142,0,1);
[00BE] (1F) if (getState02(142)) {
[00C3] (19)   doSentence(253,145,0,1);
[00CA] (**) }
[00CA] (00) stopObjectCode();
END

// Object 144
Events:
  13 - 001F
  FD - 0053
[001F] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,128)) {
[0024] (1A)   Var[66] = 150;
[0028] (14)   print(255,"Use it in the \x06\x42.");
[0038] (18) } else {
[003B] (14)   print(255,"I don't want it!");
[004B] (**) }
[004B] (19) doSentence(253,148,0,1);
[0052] (00) stopObjectCode();
[0053] (80) breakHere();
[0054] (83) VAR_RESULT = getActorRoom(VAR_EGO);
[0057] (C8) unless (VAR_RESULT == VAR_ROOM) goto 0053;
[005C] (4F) if (getState08(142)) {
[0061] (18) } else {
[0064] (88)   if (Var[46] != VAR_EGO) {
[0069] (9A)     Var[46] = VAR_EGO;
[006C] (1A)     Var[44] = 3;
[0070] (**)   }
[0070] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[0073] (44)   if (VAR_RESULT > 82) {
[0079] (88)     if (Var[44] != Var[234]) {
[007E] (12)       panCameraTo(100);
[0080] (9A)       Var[44] = Var[234];
[0083] (**)     }
[0083] (18)     goto 0099;
[0086] (**)   }
[0086] (**) }
[0086] (88) if (Var[44] != Var[235]) {
[008B] (83)   VAR_RESULT = getActorRoom(VAR_EGO);
[008E] (48)   if (VAR_RESULT == 3) {
[0094] (D2)     actorFollowCamera(VAR_EGO);
[0096] (**)   }
[0096] (9A)   Var[44] = Var[235];
[0099] (**) }
[0099] (18) goto 0053;
[009C] (00) stopObjectCode();
END

// Object 145
Events:
  FD - 0013
[0013] (17) clearState02(142);
[0016] (30) setBoxFlags(6,64);
[0019] (1C) startSound(47);
[001B] (2E) delay(40);
[001F] (47) clearState08(143);
[0022] (60) cursorCommand(247, 1);
[0025] (2E) delay(120);
[0029] (07) setState08(144);
[002C] (00) stopObjectCode();
END

// Object 146
Events:
  FD - 0013
[0013] (62) stopScript(63);
[0015] (60) cursorCommand(15, 2);
[0018] (47) clearState08(142);
[001B] (47) clearState08(166);
[001E] (17) clearState02(166);
[0021] (47) clearState08(144);
[0024] (17) clearState02(144);
[0027] (17) clearState02(150);
[002A] (2E) delay(60);
[002E] (1C) startSound(47);
[0030] (2E) delay(40);
[0034] (07) setState08(143);
[0037] (30) setBoxFlags(6,0);
[003A] (9E) walkActorTo(VAR_EGO,90,60);
[003E] (BB) waitForActor(VAR_EGO);
[0040] (19) doSentence(253,145,0,1);
[0047] (00) stopObjectCode();
END

// Object 147
Events:
   9 - 001F
   B - 001F
  FD - 006A
[001F] (48) if (VAR_EGO == 2) {
[0025] (D8)   printEgo("I don't want to bother them, they're\x01closed.");
[004D] (18) } else {
[0050] (1C)   startSound(23);
[0052] (78)   if (Var[152] < 3) {
[0058] (68)     VAR_RESULT = isScriptRunning(39);
[005B] (28)     if (!VAR_RESULT) {
[005F] (03)       VAR_RESULT = getActorRoom(7);
[0062] (88)       if (VAR_RESULT != VAR_ROOM) {
[0067] (42)         startScript(39);
[0069] (**)       }
[0069] (**)     }
[0069] (**)   }
[0069] (**) }
[0069] (00) stopObjectCode();
[006A] (4F) if (getState08(144)) {
[006F] (08)   if (VAR_ACTIVE_OBJECT1 != 16) {
[0075] (1C)     startSound(46);
[0077] (2E)     delay(120);
[007B] (**)   }
[007B] (47)   clearState08(144);
[007E] (2E)   delay(60);
[0082] (B1)   VAR_RESULT = getBitVar(1467,VAR_EGO);
[0087] (28)   if (!VAR_RESULT) {
[008B] (DB)     setBitVar(1467,VAR_EGO,Var[235]);
[0090] (19)     doSentence(253,148,0,1);
[0097] (14)     print(255,"Hey! Wadda ya doin' wakin' me up?");
[00B5] (AE)     waitForMessage();
[00B6] (14)     print(255,"I guess ya wanna go to the airport.");
[00D5] (18)   } else {
[00D8] (80)     breakHere();
[00D9] (14)     print(255,"Oh, it's you again.");
[00EC] (**)   }
[00EC] (19)   doSentence(253,148,0,1);
[00F3] (AE)   waitForMessage();
[00F4] (14)   print(255,"Well, climb aboard.");
[0108] (19)   doSentence(253,148,0,1);
[010F] (1C)   startSound(47);
[0111] (2E)   delay(40);
[0115] (07)   setState08(143);
[0118] (30)   setBoxFlags(6,0);
[011B] (57)   setState02(142);
[011E] (19)   doSentence(253,143,0,1);
[0125] (19)   doSentence(253,142,0,1);
[012C] (**) }
[012C] (00) stopObjectCode();
END

// Object 148
Events:
  FD - 0013
[0013] (05) drawObject(145,255,255);
[0018] (05) drawObject(146,255,255);
[001D] (80) breakHere();
[001E] (80) breakHere();
[001F] (05) drawObject(145,255,255);
[0024] (80) breakHere();
[0025] (08) if (VAR_TALK_ACTOR != 255) {
[002B] (18) } else {
[002E] (28)   unless (!VAR_HAVE_MSG) goto 0018;
[0032] (**) }
[0032] (47) clearState08(146);
[0035] (47) clearState08(145);
[0038] (00) stopObjectCode();
END

// Object 149
Events:
   C - 0019
  FD - 003B
[0019] (D8) printEgo("CLOSED\x01For service, push doorbell.");
[003A] (00) stopObjectCode();
[003B] (9A) Var[47] = Var[234];
[003E] (FB) VAR_RESULT = getActorWalkBox(Var[48]);
[0041] (48) if (VAR_RESULT == 6) {
[0047] (46)   Var[47]++;
[0049] (**) }
[0049] (FB) VAR_RESULT = getActorWalkBox(Var[48]);
[004C] (48) if (VAR_RESULT == 7) {
[0052] (46)   Var[47]++;
[0054] (**) }
[0054] (00) stopObjectCode();
END

// Object 150
Events:
   B - 0022
[0022] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,128)) {
[0027] (1C)   startSound(84);
[0029] (19)   doSentence(254,143,0,1);
[0030] (19)   doSentence(254,142,0,1);
[0037] (14)   print(255,"");
[003A] (9A)   Var[14] = VAR_EGO;
[003D] (5A)   Var[14] += 61;
[0041] (38)   if (Var[14] >= 8) {
[0047] (9A)     Var[14] = VAR_EGO;
[004A] (5A)     Var[14] += 61;
[004E] (6A)     Var[Var[14]] -= 8;
[0052] (DB)     setBitVar(1440,VAR_EGO,Var[235]);
[0057] (DB)     setBitVar(1464,VAR_EGO,Var[235]);
[005C] (68)     VAR_RESULT = isScriptRunning(52);
[005F] (A8)     if (VAR_RESULT) {
[0063] (1A)       Var[48] = 1;
[0067] (C8)       if (VAR_EGO == Var[48]) {
[006C] (1A)         Var[48] = 2;
[0070] (**)       }
[0070] (19)       doSentence(253,149,0,1);
[0077] (28)       if (!Var[47]) {
[007B] (60)         cursorCommand(15, 2);
[007E] (14)         print(255,"C'mon!");
[0087] (19)         doSentence(253,148,0,1);
[008E] (B6)         walkActorToObject(Var[48],150);
[0092] (BB)         waitForActor(Var[48]);
[0094] (**)       }
[0094] (DB)       setBitVar(1464,Var[48],Var[235]);
[0099] (62)       stopScript(52);
[009B] (42)       startScript(54);
[009D] (18)     } else {
[00A0] (42)       startScript(52);
[00A2] (**)     }
[00A2] (18)   } else {
[00A5] (B1)     VAR_RESULT = getBitVar(848,VAR_EGO);
[00AA] (A8)     if (VAR_RESULT) {
[00AE] (14)       print(255,"Hey! No free rides!");
[00C1] (18)     } else {
[00C4] (14)       print(255,"Sorry bud, but you're low on dough!");
[00E4] (**)     }
[00E4] (DB)     setBitVar(848,VAR_EGO,Var[235]);
[00E9] (**)   }
[00E9] (18) } else {
[00EC] (42)   startScript(3);
[00EE] (**) }
[00EE] (00) stopObjectCode();
END
