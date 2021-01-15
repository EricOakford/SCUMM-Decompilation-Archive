/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 57: Melee Low Street (low-stree)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(4,1)
[000D] (33)   RoomColor(2,6)
[0013] (**) }
[0013] (1A) Var[155] = 0;
[0018] (2A) startScript(200,[],F);
[001B] (78) if (Var[186] < 3) {
[0022] (13)   ActorOps(10,[Init(),Costume(22),Scale(255)]);
[002A] (5D)   setClass(10,[141,150,148]);
[0037] (2D)   putActorInRoom(10,57);
[003A] (01)   putActor(10,50,123);
[0040] (78)   if (Var[187] < 5) {
[0047] (13)     ActorOps(9,[Init(),Costume(23)]);
[004D] (2D)     putActorInRoom(9,57);
[0050] (01)     putActor(9,72,135);
[0056] (11)     animateCostume(9,248);
[0059] (11)     animateCostume(9,3);
[005C] (48)     if (VAR_VIDEOMODE == 30) {
[0063] (13)       ActorOps(9,[Palette(8,15)]);
[0069] (**)     }
[0069] (0A)     startScript(206,[]);
[006C] (**)   }
[006C] (2A)   startScript(204,[],F);
[006F] (**) }
[006F] (48) if (Var[104] == 54) {
[0076] (9E)   walkActorTo(VAR_EGO,160,116);
[007D] (48) } else if (Var[104] == 55) {
[0087] (40)   cutscene([2]);
[008C] (0A)   startScript(202,[]);
[008F] (80)   breakHere();
[0090] (68)   VAR_RESULT = isScriptRunning(202);
[0094] (28)   unless (!VAR_RESULT) goto 008F;
[0099] (C0)   endCutscene();
[009A] (9E)   walkActorTo(VAR_EGO,413,131);
[00A1] (18)   /* goto 00A4; */
[00A4] (**) }
[00A4] (00) stopObjectCode();
END

// EX
[0000] (A8) if (Var[155]) {
[0005] (5A)   Var[188] += 1;
[000A] (**) }
[000A] (93) ActorOps(VAR_EGO,[Scale(255)]);
[0010] (DD) setClass(VAR_EGO,[21,22]);
[001A] (00) stopObjectCode();
END

Script# 200 // Set up Map Seller
[0000] (13) ActorOps(3,[Init()]);
[0004] (5D) setClass(3,[0]);
[000B] (13) ActorOps(3,[Costume(17),TalkColor(12),Scale(255),Name("Citizen of M\x88l\x82e")]);
[0026] (5D) setClass(3,[141,150,148]);
[0033] (2D) putActorInRoom(3,57);
[0036] (01) putActor(3,323,117);
[003C] (11) animateCostume(3,250);
[003F] (44) if (VAR_MACHINE_SPEED > 0) {
[0046] (11)   animateCostume(3,2);
[0049] (2A)   startScript(201,[],F);
[004C] (**) }
[004C] (A0) stopObjectCode();
END

Script# 201
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (16)   Var[103] = getRandomNr(200);
[000B] (5A)   Var[103] += 800;
[0010] (2B)   delayVariable(Var[103]);
[0013] (68)   VAR_RESULT = isScriptRunning(91);
[0017] (28)   if (!VAR_RESULT) {
[001C] (44)     if (VAR_CAMERA_POS_X > 180) {
[0023] (9A)       Var[103] = VAR_CAMERA_POS_X;
[0028] (80)       breakHere();
[0029] (C8)       if (VAR_CAMERA_POS_X == Var[103]) {
[0030] (11)         animateCostume(3,9);
[0033] (AE)         WaitForMessage();
[0035] (AC)         Exprmode Local[0] = (472 - VAR_CAMERA_POS_X);
[0040] (80)         breakHere();
[0041] (80)         breakHere();
[0042] (80)         breakHere();
[0043] (80)         breakHere();
[0044] (80)         breakHere();
[0045] (80)         breakHere();
[0046] (80)         breakHere();
[0047] (80)         breakHere();
[0048] (80)         breakHere();
[0049] (80)         breakHere();
[004A] (**)       }
[004A] (**)     }
[004A] (**)   }
[004A] (18)   goto 0007;
[004D] (**) }
[004D] (A0) stopObjectCode();
END

Script# 202
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_EGO;
[000A] (**) }
[000A] (DD) setClass(Local[0],[150,149]);
[0014] (1A) Local[1] = 18;
[0019] (93) ActorOps(Local[0],[Scale(Local[1])]);
[0020] (AD) putActorInRoom(Local[0],57);
[0024] (81) putActor(Local[0],460,108);
[002B] (91) animateCostume(Local[0],250);
[002F] (91) animateCostume(Local[0],2);
[0033] (80) breakHere();
[0034] (80) breakHere();
[0035] (1A) Local[2] = 460;
[003A] (C1) putActor(Local[0],Local[2],108);
[0041] (93) ActorOps(Local[0],[Scale(Local[1])]);
[0048] (5A) Local[1] += 4;
[004D] (AC) Exprmode Local[2] = (Local[2] - ((Local[1] / 255) * 8));
[0060] (80) breakHere();
[0061] (C6) Local[2]--;
[0064] (78) unless (Local[2] < 437) goto 003A;
[006B] (DD) setClass(Local[0],[22,21]);
[0075] (81) putActor(Local[0],437,108);
[007C] (A0) stopObjectCode();
END

Script# 203
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_EGO;
[000A] (**) }
[000A] (DD) setClass(Local[0],[150,149]);
[0014] (1A) Local[1] = 110;
[0019] (93) ActorOps(Local[0],[Scale(Local[1])]);
[0020] (91) animateCostume(Local[0],2);
[0024] (C3) Var[103] = getActorX(Local[0]);
[0029] (9A) Local[2] = Var[103];
[002E] (C1) putActor(Local[0],Local[2],108);
[0035] (93) ActorOps(Local[0],[Scale(Local[1])]);
[003C] (3A) Local[1] -= 4;
[0041] (AC) Exprmode Local[2] = (((Local[1] / 255) * 8) + Local[2]);
[0054] (80) breakHere();
[0055] (46) Local[2]++;
[0058] (44) unless (Local[2] > 460) goto 002E;
[005F] (91) animateCostume(Local[0],3);
[0063] (A0) stopObjectCode();
END

Script# 204
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (AC)   Exprmode Local[0] = ((10 + <VAR_RESULT = getRandomNr(5)>) * 60);
[0018] (2B)   delayVariable(Local[0]);
[001B] (AC)   Exprmode Local[1] = (442 + <VAR_RESULT = getRandomNr(9)>);
[0028] (8F)   if (getState(Local[1]) == 0) {
[002E] (85)     drawObject(Local[1],255,255);
[0035] (18)   } else {
[0038] (87)     setState(Local[1],0);
[003C] (**)   }
[003C] (18)   goto 0007;
[003F] (**) }
[003F] (A0) stopObjectCode();
END

Script# 205 // Look at Clock
[0000] (48) if (Var[188] == 0) {
[0007] (D8)   printEgo([Text("Ten o'clock.")]);
[0016] (48) } else if (Var[188] == 1) {
[0020] (D8)   printEgo([Text("Hmm.  Still ten o'clock.")]);
[003B] (18) } else {
[003E] (D8)   printEgo([Text("Seems like it's ALWAYS ten o'clock on this island.")]);
[0073] (16)   Var[103] = getRandomNr(5);
[0077] (28)   if (!Var[103]) {
[007C] (40)     cutscene([2]);
[0081] (AE)     WaitForMessage();
[0083] (D8)     printEgo([Text("Creepy!")]);
[008D] (C0)     endCutscene();
[008E] (**)   }
[008E] (**) }
[008E] (1A) Var[155] = 1;
[0093] (AE) WaitForMessage();
[0095] (A0) stopObjectCode();
END

Script# 206
[0000] (68) VAR_RESULT = isScriptRunning(208);
[0004] (28) if (!VAR_RESULT) {
[0009] (B4)   VAR_RESULT = getDist(VAR_EGO,9);
[0010] (78)   if (VAR_RESULT < 100) {
[0017] (F5)     Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[001E] (48)     if (Local[0] == 441) {
[0025] (0A)       startScript(15,[]);
[0028] (0A)       startScript(16,[]);
[002B] (5A)       Var[187] += 1;
[0030] (0A)       startScript(207,[]);
[0033] (80)       breakHere();
[0034] (68)       VAR_RESULT = isScriptRunning(207);
[0038] (28)       unless (!VAR_RESULT) goto 0033;
[003D] (80)       breakHere();
[003E] (F5)       Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0045] (08)       unless (Local[0] != 441) goto 003D;
[004C] (**)     }
[004C] (**)   }
[004C] (**) }
[004C] (80) breakHere();
[004D] (18) goto 0000;
[0050] (A0) stopObjectCode();
END

Script# 207 // Mess with Rat
[0000] (40) cutscene([2]);
[0005] (14) print(255,[Pos(110,40),Center(),Overhead()]);
[000F] (11) animateCostume(9,249);
[0012] (48) if (Var[187] == 1) {
[0019] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0021] (14)   print(10,[Text("Hey!!  Don't mess with my rat!")]);
[0043] (11)   animateCostume(10,7);
[0046] (80)   breakHere();
[0047] (80)   breakHere();
[0048] (80)   breakHere();
[0049] (80)   breakHere();
[004A] (11)   animateCostume(9,248);
[004D] (AE)   WaitForMessage();
[004F] (48) } else if (Var[187] == 2) {
[0059] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0061] (14)   print(10,[Text("I said don't pester the rat!")]);
[0081] (80)   breakHere();
[0082] (80)   breakHere();
[0083] (80)   breakHere();
[0084] (80)   breakHere();
[0085] (80)   breakHere();
[0086] (80)   breakHere();
[0087] (11)   animateCostume(9,248);
[008A] (AE)   WaitForMessage();
[008C] (48) } else if (Var[187] == 3) {
[0096] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[009E] (14)   print(10,[Text("I'm not going to warn you again!!" + wait() + "Leave the rat alone!!")]);
[00DA] (11)   animateCostume(10,7);
[00DD] (80)   breakHere();
[00DE] (80)   breakHere();
[00DF] (80)   breakHere();
[00E0] (80)   breakHere();
[00E1] (80)   breakHere();
[00E2] (80)   breakHere();
[00E3] (80)   breakHere();
[00E4] (80)   breakHere();
[00E5] (11)   animateCostume(9,248);
[00E8] (AE)   WaitForMessage();
[00EA] (48) } else if (Var[187] == 4) {
[00F4] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[00FC] (14)   print(10,[Text("Hey, man!!")]);
[010A] (80)   breakHere();
[010B] (80)   breakHere();
[010C] (80)   breakHere();
[010D] (80)   breakHere();
[010E] (80)   breakHere();
[010F] (80)   breakHere();
[0110] (80)   breakHere();
[0111] (80)   breakHere();
[0112] (80)   breakHere();
[0113] (80)   breakHere();
[0114] (11)   animateCostume(9,248);
[0117] (AE)   WaitForMessage();
[0119] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0121] (14)   print(10,[Text("Frank, make him quit it!")]);
[013D] (11)   animateCostume(10,3);
[0140] (11)   animateCostume(10,18);
[0143] (AE)   WaitForMessage();
[0145] (48) } else if (Var[187] == 5) {
[014F] (80)   breakHere();
[0150] (5D)   setClass(441,[152]);
[0157] (13)   ActorOps(9,[WalkAnimNr(6),WalkSpeed(10,2)]);
[015F] (1E)   walkActorTo(9,400,135);
[0165] (80)   breakHere();
[0166] (80)   breakHere();
[0167] (80)   breakHere();
[0168] (80)   breakHere();
[0169] (80)   breakHere();
[016A] (80)   breakHere();
[016B] (80)   breakHere();
[016C] (80)   breakHere();
[016D] (80)   breakHere();
[016E] (80)   breakHere();
[016F] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0177] (14)   print(10,[Text("Aw, now look what you did!")]);
[0195] (11)   animateCostume(10,7);
[0198] (AE)   WaitForActor(9);
[019B] (2D)   putActorInRoom(9,0);
[019E] (62)   stopScript(206);
[01A0] (18)   /* goto 01A3; */
[01A3] (**) }
[01A3] (44) if (VAR_MACHINE_SPEED > 0) {
[01AA] (11)   animateCostume(10,4);
[01AD] (**) }
[01AD] (14) print(255,[Pos(160,8),Center(),Overhead()]);
[01B7] (C0) endCutscene();
[01B8] (A0) stopObjectCode();
END

Script# 208 // Talk to Men of Low Moral Fiber
[0000] (9A) Local[0] = VAR_VERB_SCRIPT;
[0005] (1A) VAR_VERB_SCRIPT = 18;
[000A] (0A) startScript(21,[3]);
[0010] (14) print(255,[Pos(110,40),Center(),Overhead()]);
[001A] (1A) Var[175] = 145;
[001F] (1A) Bit[23] = 0;
[0024] (2C) CursorShow();
[0026] (2C) UserputOn();
[0028] (7A) VerbOps(120,[Off()]);
[002C] (7A) VerbOps(121,[Off()]);
[0030] (7A) VerbOps(122,[Off()]);
[0034] (7A) VerbOps(123,[Off()]);
[0038] (7A) VerbOps(124,[Off()]);
[003C] (7A) VerbOps(125,[Off()]);
[0040] (7A) VerbOps(126,[Off()]);
[0044] (7A) VerbOps(127,[Off()]);
[0048] (7A) VerbOps(128,[Off()]);
[004C] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0059] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0066] (28) if (!Bit[25 + 0]) {
[006D] (A8)   if (Bit[25 + 4]) {
[0074] (AC)     Exprmode Var[103] = ((120 + 7) - 1);
[0083] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("I apologize for what I said about rats."),On()]);
[00B6] (5A)     Var[175] += 8;
[00BB] (3A)     Var[103] -= 120;
[00C0] (1A)     Bit[35 + Var[103]] = 1;
[00C7] (18)   } else {
[00CA] (68)     VAR_RESULT = isScriptRunning(206);
[00CE] (28)     if (!VAR_RESULT) {
[00D3] (AC)       Exprmode Var[103] = ((120 + 1) - 1);
[00E2] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Sorry about the rat^"),On()]);
[0102] (5A)       Var[175] += 8;
[0107] (3A)       Var[103] -= 120;
[010C] (1A)       Bit[35 + Var[103]] = 1;
[0113] (AC)       Exprmode Var[103] = ((120 + 2) - 1);
[0122] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Now that that fearsome beast is gone, we can talk."),On()]);
[0160] (5A)       Var[175] += 8;
[0165] (3A)       Var[103] -= 120;
[016A] (1A)       Bit[35 + Var[103]] = 1;
[0171] (18)     } else {
[0174] (AC)       Exprmode Var[103] = ((120 + 1) - 1);
[0183] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Hey, nice rat!"),On()]);
[019D] (5A)       Var[175] += 8;
[01A2] (3A)       Var[103] -= 120;
[01A7] (1A)       Bit[35 + Var[103]] = 1;
[01AE] (AC)       Exprmode Var[103] = ((120 + 2) - 1);
[01BD] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("How can you stand to be near this vermin?"),On()]);
[01F2] (5A)       Var[175] += 8;
[01F7] (3A)       Var[103] -= 120;
[01FC] (1A)       Bit[35 + Var[103]] = 1;
[0203] (**)     }
[0203] (**)   }
[0203] (**) }
[0203] (28) if (!Bit[25 + 5]) {
[020A] (A8)   if (Bit[14]) {
[020F] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[021E] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Do you guys know the sneaky-looking man on the opposite corner?"),On()]);
[0269] (5A)     Var[175] += 8;
[026E] (3A)     Var[103] -= 120;
[0273] (1A)     Bit[35 + Var[103]] = 1;
[027A] (**)   }
[027A] (**) }
[027A] (28) if (!Bit[25 + 1]) {
[0281] (A8)   if (Bit[25 + 2]) {
[0288] (AC)     Exprmode Var[103] = ((120 + 6) - 1);
[0297] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("I'm really interested in this pirating thing."),On()]);
[02D0] (5A)     Var[175] += 8;
[02D5] (3A)     Var[103] -= 120;
[02DA] (1A)     Bit[35 + Var[103]] = 1;
[02E1] (18)   } else {
[02E4] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[02F3] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Say, are you guys pirates?"),On()]);
[0319] (5A)     Var[175] += 8;
[031E] (3A)     Var[103] -= 120;
[0323] (1A)     Bit[35 + Var[103]] = 1;
[032A] (**)   }
[032A] (**) }
[032A] (A8) if (Bit[49]) {
[032F] (28)   if (!Bit[25 + 6]) {
[0336] (AC)     Exprmode Var[103] = ((120 + 8) - 1);
[0345] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Do you know anything about a magic phrase?"),On()]);
[037B] (5A)     Var[175] += 8;
[0380] (3A)     Var[103] -= 120;
[0385] (1A)     Bit[35 + Var[103]] = 1;
[038C] (18)   } else {
[038F] (AC)     Exprmode Var[103] = ((120 + 8) - 1);
[039E] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Could you tell me again about the magic phrase?"),On()]);
[03D9] (5A)     Var[175] += 8;
[03DE] (3A)     Var[103] -= 120;
[03E3] (1A)     Bit[35 + Var[103]] = 1;
[03EA] (**)   }
[03EA] (**) }
[03EA] (AC) Exprmode Var[103] = ((120 + 5) - 1);
[03F9] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("I'll just be running along, now."),On()]);
[0425] (5A) Var[175] += 8;
[042A] (3A) Var[103] -= 120;
[042F] (1A) Bit[35 + Var[103]] = 1;
[0436] (AC) Exprmode Var[103] = (5 - 1);
[0441] (1A) Var[189 + Var[103]] = 1;
[0448] (1A) Var[173] = 0;
[044D] (80) breakHere();
[044E] (A8) unless (Var[173]) goto 044D;
[0453] (48) if (Var[173] == 120) {
[045A] (18)   goto 08C6;
[045D] (48) } else if (Var[173] == 121) {
[0467] (18)   goto 0A63;
[046A] (48) } else if (Var[173] == 122) {
[0474] (18)   goto 0520;
[0477] (48) } else if (Var[173] == 123) {
[0481] (1A)   Bit[25 + 2] = 1;
[0488] (18)   goto 0EC7;
[048B] (48) } else if (Var[173] == 124) {
[0495] (18)   goto 1719;
[0498] (48) } else if (Var[173] == 125) {
[04A2] (18)   goto 1010;
[04A5] (48) } else if (Var[173] == 126) {
[04AF] (18)   goto 0B53;
[04B2] (48) } else if (Var[173] == 127) {
[04BC] (28)   if (!Bit[25 + 6]) {
[04C3] (18)     goto 1558;
[04C6] (18)   } else {
[04C9] (13)     ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[04D1] (14)     print(10,[Text("We ALREADY TOLD you to talk to the fortune teller and the prisoner!")]);
[0518] (AE)     WaitForMessage();
[051A] (18)     goto 001A;
[051D] (**)   }
[051D] (18)   /* goto 0520; */
[0520] (**) }
[0520] (1A) Bit[25 + 5] = 1;
[0527] (A8) if (Bit[14]) {
[052C] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0534] (14)   print(10,[Text("Saw you buying a map from that fellow over there.")]);
[0569] (80)   breakHere();
[056A] (80)   breakHere();
[056B] (80)   breakHere();
[056C] (11)   animateCostume(10,14);
[056F] (AE)   WaitForMessage();
[0571] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0579] (14)   print(10,[Text("Have you looked at it yet?")]);
[0597] (AE)   WaitForMessage();
[0599] (13)   ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[05A1] (14)   print(10,[Text("Ha ha ha ha ha ha ha ha ha ha ha ha")]);
[05C8] (2E)   delay(30);
[05CC] (0A)   startScript(209,[]);
[05CF] (80)   breakHere();
[05D0] (68)   VAR_RESULT = isScriptRunning(209);
[05D4] (28)   unless (!VAR_RESULT) goto 05CF;
[05D9] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[05E1] (14)   print(10,[Text("Perhaps you should consider an alternate source^")]);
[0615] (18) } else {
[0618] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0620] (14)   print(10,[Text("Wanna buy a map, eh?")]);
[0638] (**) }
[0638] (AE) WaitForMessage();
[063A] (11) animateCostume(10,15);
[063D] (80) breakHere();
[063E] (80) breakHere();
[063F] (80) breakHere();
[0640] (80) breakHere();
[0641] (80) breakHere();
[0642] (80) breakHere();
[0643] (80) breakHere();
[0644] (80) breakHere();
[0645] (14) print(10,[Text("OUR maps are top quality, not like the birdcage liners you get from that clown across the street.")]);
[06AA] (AE) WaitForMessage();
[06AC] (11) animateCostume(10,18);
[06AF] (11) animateCostume(10,3);
[06B2] (11) animateCostume(10,10);
[06B5] (2E) delay(180);
[06B9] (11) animateCostume(10,9);
[06BC] (11) animateCostume(10,5);
[06BF] (11) animateCostume(10,13);
[06C2] (2E) delay(120);
[06C6] (14) print(10,[Text("No, just kidding.")]);
[06DB] (AE) WaitForMessage();
[06DD] (11) animateCostume(10,15);
[06E0] (80) breakHere();
[06E1] (80) breakHere();
[06E2] (80) breakHere();
[06E3] (80) breakHere();
[06E4] (80) breakHere();
[06E5] (80) breakHere();
[06E6] (80) breakHere();
[06E7] (80) breakHere();
[06E8] (14) print(10,[Text("These are actually copies of an old article by Ron Gilbert on the subject of computer games." + wait() + "Can't even GIVE them away.")]);
[0764] (AE) WaitForMessage();
[0766] (2E) delay(60);
[076A] (11) animateCostume(10,18);
[076D] (2E) delay(30);
[0771] (0A) startScript(209,[]);
[0774] (80) breakHere();
[0775] (68) VAR_RESULT = isScriptRunning(209);
[0779] (28) unless (!VAR_RESULT) goto 0774;
[077E] (14) print(10,[Text("Want one?")]);
[078B] (AE) WaitForMessage();
[078D] (1A) Var[175] = 145;
[0792] (1A) Bit[23] = 0;
[0797] (2C) CursorShow();
[0799] (2C) UserputOn();
[079B] (7A) VerbOps(120,[Off()]);
[079F] (7A) VerbOps(121,[Off()]);
[07A3] (7A) VerbOps(122,[Off()]);
[07A7] (7A) VerbOps(123,[Off()]);
[07AB] (7A) VerbOps(124,[Off()]);
[07AF] (7A) VerbOps(125,[Off()]);
[07B3] (7A) VerbOps(126,[Off()]);
[07B7] (7A) VerbOps(127,[Off()]);
[07BB] (7A) VerbOps(128,[Off()]);
[07BF] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[07CC] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[07D9] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[07E8] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("No, thanks."),On()]);
[07FF] (5A) Var[175] += 8;
[0804] (3A) Var[103] -= 120;
[0809] (1A) Bit[35 + Var[103]] = 1;
[0810] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[081F] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("No, but I'll take one if you give me two pieces of eight."),On()]);
[0864] (5A) Var[175] += 8;
[0869] (3A) Var[103] -= 120;
[086E] (1A) Bit[35 + Var[103]] = 1;
[0875] (1A) Var[173] = 0;
[087A] (80) breakHere();
[087B] (A8) unless (Var[173]) goto 087A;
[0880] (48) if (Var[173] == 120) {
[0887] (14)   print(10,[Text("See?  Told you so.")]);
[089D] (48) } else if (Var[173] == 121) {
[08A7] (14)   print(10,[Text("OK, that's fair.")]);
[08BB] (50)   pickupObject(452);
[08BE] (18)   /* goto 08C1; */
[08C1] (**) }
[08C1] (AE) WaitForMessage();
[08C3] (18) goto 001A;
[08C6] (13) ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[08CE] (14) print(10,[Text("Do you like rats?")]);
[08E3] (AE) WaitForMessage();
[08E5] (1A) Var[175] = 145;
[08EA] (1A) Bit[23] = 0;
[08EF] (2C) CursorShow();
[08F1] (2C) UserputOn();
[08F3] (7A) VerbOps(120,[Off()]);
[08F7] (7A) VerbOps(121,[Off()]);
[08FB] (7A) VerbOps(122,[Off()]);
[08FF] (7A) VerbOps(123,[Off()]);
[0903] (7A) VerbOps(124,[Off()]);
[0907] (7A) VerbOps(125,[Off()]);
[090B] (7A) VerbOps(126,[Off()]);
[090F] (7A) VerbOps(127,[Off()]);
[0913] (7A) VerbOps(128,[Off()]);
[0917] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0924] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0931] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[0940] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Yes, I love rats!"),On()]);
[095D] (5A) Var[175] += 8;
[0962] (3A) Var[103] -= 120;
[0967] (1A) Bit[35 + Var[103]] = 1;
[096E] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[097D] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("No, I can't stand them."),On()]);
[09A0] (5A) Var[175] += 8;
[09A5] (3A) Var[103] -= 120;
[09AA] (1A) Bit[35 + Var[103]] = 1;
[09B1] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[09C0] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Yes, especially in a light wine sauce."),On()]);
[09F2] (5A) Var[175] += 8;
[09F7] (3A) Var[103] -= 120;
[09FC] (1A) Bit[35 + Var[103]] = 1;
[0A03] (1A) Var[173] = 0;
[0A08] (80) breakHere();
[0A09] (A8) unless (Var[173]) goto 0A08;
[0A0E] (48) if (Var[173] == 122) {
[0A15] (1A)   Bit[25 + 4] = 1;
[0A1C] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0A24] (14)   print(10,[Text("AIEEE!!!  Get away!!!")]);
[0A3D] (11)   animateCostume(10,9);
[0A40] (80)   breakHere();
[0A41] (80)   breakHere();
[0A42] (80)   breakHere();
[0A43] (80)   breakHere();
[0A44] (11)   animateCostume(10,7);
[0A47] (80)   breakHere();
[0A48] (80)   breakHere();
[0A49] (80)   breakHere();
[0A4A] (80)   breakHere();
[0A4B] (80)   breakHere();
[0A4C] (80)   breakHere();
[0A4D] (0A)   startScript(209,[]);
[0A50] (80)   breakHere();
[0A51] (68)   VAR_RESULT = isScriptRunning(209);
[0A55] (28)   unless (!VAR_RESULT) goto 0A50;
[0A5A] (18)   goto 1719;
[0A5D] (18) } else {
[0A63] (1A)   Bit[25 + 4] = 1;
[0A6A] (58)   beginOverride();
[0A6C] (18)   goto 0B48;
[0A6F] (68)   VAR_RESULT = isScriptRunning(206);
[0A73] (28)   if (!VAR_RESULT) {
[0A78] (13)     ActorOps(10,[TalkAnimNr(3,5),TalkColor(13)]);
[0A80] (14)     print(10,[Text("Frank, this bozo scared off my rat!")]);
[0AA7] (80)     breakHere();
[0AA8] (80)     breakHere();
[0AA9] (80)     breakHere();
[0AAA] (11)     animateCostume(10,18);
[0AAD] (AE)     WaitForMessage();
[0AAF] (11)     animateCostume(10,20);
[0AB2] (2E)     delay(60);
[0AB6] (11)     animateCostume(10,18);
[0AB9] (18)   } else {
[0ABC] (14)     print(255,[Color(7),Pos(80,110),Text("Oh, they're not so bad.")]);
[0ADE] (AE)     WaitForMessage();
[0AE0] (14)     print(255,[Color(7),Pos(80,110),Text("-- squeak --")]);
[0AF7] (AE)     WaitForMessage();
[0AF9] (2E)     delay(30);
[0AFD] (13)     ActorOps(10,[TalkAnimNr(3,5),TalkColor(13)]);
[0B05] (14)     print(10,[Text("Sounds like this guy don't like rats!")]);
[0B2E] (AE)     WaitForMessage();
[0B30] (**)   }
[0B30] (14)   print(10,[Text("Let's saut\x82 him now!")]);
[0B48] (AE)   WaitForMessage();
[0B4A] (80)   breakHere();
[0B4B] (80)   breakHere();
[0B4C] (80)   breakHere();
[0B4D] (80)   breakHere();
[0B4E] (80)   breakHere();
[0B4F] (80)   breakHere();
[0B50] (18) } else {
[0B53] (1A)   Bit[25 + 0] = 1;
[0B5A] (58)   beginOverride();
[0B5C] (18)   goto 0C78;
[0B5F] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0B67] (14)   print(10,[Text("They're very intelligent creatures!")]);
[0B8E] (AE)   WaitForMessage();
[0B90] (13)   ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[0B98] (14)   print(10,[Text("Ha ha ha ha!!")]);
[0BA9] (2E)   delay(30);
[0BAD] (0A)   startScript(209,[]);
[0BB0] (80)   breakHere();
[0BB1] (68)   VAR_RESULT = isScriptRunning(209);
[0BB5] (28)   unless (!VAR_RESULT) goto 0BB0;
[0BBA] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0BC2] (14)   print(10,[Text("More intelligent than FRED, here.")]);
[0BE7] (11)   animateCostume(10,8);
[0BEA] (AE)   WaitForMessage();
[0BEC] (2E)   delay(30);
[0BF0] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0BF8] (14)   print(10,[Text("Why, there's a story around these parts that a bunch of rats  actually crewed a ship here from fabled Monkey Island\x0F.")]);
[0C71] (2E)   delay(60);
[0C75] (11)   animateCostume(10,14);
[0C78] (AE)   WaitForMessage();
[0C7A] (1A)   Var[175] = 145;
[0C7F] (1A)   Bit[23] = 0;
[0C84] (2C)   CursorShow();
[0C86] (2C)   UserputOn();
[0C88] (7A)   VerbOps(120,[Off()]);
[0C8C] (7A)   VerbOps(121,[Off()]);
[0C90] (7A)   VerbOps(122,[Off()]);
[0C94] (7A)   VerbOps(123,[Off()]);
[0C98] (7A)   VerbOps(124,[Off()]);
[0C9C] (7A)   VerbOps(125,[Off()]);
[0CA0] (7A)   VerbOps(126,[Off()]);
[0CA4] (7A)   VerbOps(127,[Off()]);
[0CA8] (7A)   VerbOps(128,[Off()]);
[0CAC] (26)   setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0CB9] (26)   setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0CC6] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[0CD5] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("That's amazing!"),On()]);
[0CF0] (5A)   Var[175] += 8;
[0CF5] (3A)   Var[103] -= 120;
[0CFA] (1A)   Bit[35 + Var[103]] = 1;
[0D01] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[0D10] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("That's difficult to believe."),On()]);
[0D38] (5A)   Var[175] += 8;
[0D3D] (3A)   Var[103] -= 120;
[0D42] (1A)   Bit[35 + Var[103]] = 1;
[0D49] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[0D58] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("No way could a bunch of stupid rats crew a ship!"),On()]);
[0D94] (5A)   Var[175] += 8;
[0D99] (3A)   Var[103] -= 120;
[0D9E] (1A)   Bit[35 + Var[103]] = 1;
[0DA5] (1A)   Var[173] = 0;
[0DAA] (80)   breakHere();
[0DAB] (A8)   unless (Var[173]) goto 0DAA;
[0DB0] (48)   if (Var[173] == 122) {
[0DB7] (11)     animateCostume(10,18);
[0DBA] (11)     animateCostume(10,3);
[0DBD] (2E)     delay(120);
[0DC1] (11)     animateCostume(10,6);
[0DC4] (11)     animateCostume(10,5);
[0DC7] (18)     goto 16AC;
[0DCA] (18)   } else {
[0DCD] (13)     ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0DD5] (14)     print(10,[Text("Not if you know rats.")]);
[0DEE] (AE)     WaitForMessage();
[0DF0] (**)   }
[0DF0] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0DF8] (14)   print(10,[Text("Yeah, would've made a pretty penny on the ship, too," + wait() + "except they got waylaid by a bunch of chimps, and they were all too drunk to fight back!")]);
[0E8A] (AE)   WaitForMessage();
[0E8C] (13)   ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[0E94] (14)   print(10,[Text("Ha ha ha ha ha ha ha ha")]);
[0EAF] (80)   breakHere();
[0EB0] (80)   breakHere();
[0EB1] (80)   breakHere();
[0EB2] (80)   breakHere();
[0EB3] (80)   breakHere();
[0EB4] (80)   breakHere();
[0EB5] (80)   breakHere();
[0EB6] (80)   breakHere();
[0EB7] (0A)   startScript(209,[]);
[0EBA] (80)   breakHere();
[0EBB] (68)   VAR_RESULT = isScriptRunning(209);
[0EBF] (28)   unless (!VAR_RESULT) goto 0EBA;
[0EC4] (18)   goto 001A;
[0EC7] (58)   beginOverride();
[0EC9] (18)   goto 1010;
[0ECC] (11)   animateCostume(10,18);
[0ECF] (11)   animateCostume(10,3);
[0ED2] (11)   animateCostume(10,10);
[0ED5] (2E)   delay(120);
[0ED9] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0EE1] (14)   print(10,[Text("No, we're a wandering circus troupe.")]);
[0F09] (2E)   delay(60);
[0F0D] (11)   animateCostume(10,9);
[0F10] (AE)   WaitForMessage();
[0F12] (78)   if (Var[187] < 5) {
[0F19] (13)     ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0F21] (14)     print(10,[Text("But this rat scared away the elephant.")]);
[0F4B] (18)   } else {
[0F4E] (13)     ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0F56] (14)     print(10,[Text("But some idiot chased our trained rat away.")]);
[0F85] (**)   }
[0F85] (AE)   WaitForMessage();
[0F87] (80)   breakHere();
[0F88] (80)   breakHere();
[0F89] (80)   breakHere();
[0F8A] (80)   breakHere();
[0F8B] (80)   breakHere();
[0F8C] (11)   animateCostume(10,18);
[0F8F] (11)   animateCostume(10,3);
[0F92] (2E)   delay(60);
[0F96] (13)   ActorOps(10,[TalkAnimNr(17,18),TalkColor(10)]);
[0F9E] (14)   print(10,[Text("Shut up!!")]);
[0FAB] (80)   breakHere();
[0FAC] (80)   breakHere();
[0FAD] (0A)   startScript(209,[]);
[0FB0] (80)   breakHere();
[0FB1] (68)   VAR_RESULT = isScriptRunning(209);
[0FB5] (28)   unless (!VAR_RESULT) goto 0FB0;
[0FBA] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0FC2] (14)   print(10,[Text("Of course we're pirates!" + wait() + "You can't buy clothes like these off the rack!")]);
[100E] (AE)   WaitForMessage();
[1010] (11)   animateCostume(10,1);
[1013] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[101B] (14)   print(10,[Text("What do you want?")]);
[1030] (AE)   WaitForMessage();
[1032] (1A)   Var[175] = 145;
[1037] (1A)   Bit[23] = 0;
[103C] (2C)   CursorShow();
[103E] (2C)   UserputOn();
[1040] (7A)   VerbOps(120,[Off()]);
[1044] (7A)   VerbOps(121,[Off()]);
[1048] (7A)   VerbOps(122,[Off()]);
[104C] (7A)   VerbOps(123,[Off()]);
[1050] (7A)   VerbOps(124,[Off()]);
[1054] (7A)   VerbOps(125,[Off()]);
[1058] (7A)   VerbOps(126,[Off()]);
[105C] (7A)   VerbOps(127,[Off()]);
[1060] (7A)   VerbOps(128,[Off()]);
[1064] (26)   setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[1071] (26)   setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[107E] (28)   if (!Bit[25 + 3]) {
[1085] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1094] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("What's in the keg?"),On()]);
[10B2] (5A)     Var[175] += 8;
[10B7] (3A)     Var[103] -= 120;
[10BC] (1A)     Bit[35 + Var[103]] = 1;
[10C3] (**)   }
[10C3] (28)   if (!Bit[25 + 0]) {
[10CA] (A8)     if (Bit[25 + 4]) {
[10D1] (AC)       Exprmode Var[103] = ((120 + 4) - 1);
[10E0] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Sorry I verbally abused your rat."),On()]);
[110D] (5A)       Var[175] += 8;
[1112] (3A)       Var[103] -= 120;
[1117] (1A)       Bit[35 + Var[103]] = 1;
[111E] (18)     } else {
[1121] (AC)       Exprmode Var[103] = ((120 + 2) - 1);
[1130] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Where'd you get that rat?"),On()]);
[1155] (5A)       Var[175] += 8;
[115A] (3A)       Var[103] -= 120;
[115F] (1A)       Bit[35 + Var[103]] = 1;
[1166] (**)     }
[1166] (**)   }
[1166] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[1175] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("How come you're on this street corner and not on a ship," + newline() + "  looting, pillaging, sacking, that sort of thing?"),On()]);
[11ED] (5A)   Var[175] += 8;
[11F2] (3A)   Var[103] -= 120;
[11F7] (1A)   Bit[35 + Var[103]] = 1;
[11FE] (1A)   Var[173] = 0;
[1203] (80)   breakHere();
[1204] (A8)   unless (Var[173]) goto 1203;
[1209] (48)   if (Var[173] == 120) {
[1210] (1A)     Bit[25 + 3] = 1;
[1217] (14)     print(255,[Left(),Pos(20,50),Color(13),Text("Rum." + keepText())]);
[1229] (14)     print(255,[Left(),Color(10),Text("       Jam.")]);
[123B] (11)     animateCostume(10,6);
[123E] (11)     animateCostume(10,12);
[1241] (11)     animateCostume(10,10);
[1244] (AE)     WaitForMessage();
[1246] (11)     animateCostume(10,18);
[1249] (11)     animateCostume(10,3);
[124C] (2E)     delay(120);
[1250] (14)     print(255,[Left(),Pos(20,50),Color(13),Text("Jam." + keepText())]);
[1262] (14)     print(255,[Left(),Color(10),Text("       Rum.")]);
[1274] (11)     animateCostume(10,6);
[1277] (11)     animateCostume(10,12);
[127A] (AE)     WaitForMessage();
[127C] (11)     animateCostume(10,18);
[127F] (11)     animateCostume(10,3);
[1282] (2E)     delay(120);
[1286] (11)     animateCostume(10,11);
[1289] (13)     ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1291] (14)     print(10,[Text("Er^rum and jam." + wait() + "It's an old pirate favorite, everybody knows that.")]);
[12D8] (AE)     WaitForMessage();
[12DA] (18)     goto 001A;
[12DD] (48)   } else if (Var[173] == 121) {
[12E7] (18)     goto 08C6;
[12EA] (48)   } else if (Var[173] == 122) {
[12F4] (18)     goto 1307;
[12F7] (48)   } else if (Var[173] == 123) {
[1301] (18)     goto 0B53;
[1304] (18)     /* goto 1307; */
[1307] (**)   }
[1307] (1A)   Bit[25 + 1] = 1;
[130E] (58)   beginOverride();
[1310] (18)   goto 150F;
[1313] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[131B] (14)   print(10,[Text("Well, pirating hasn't been panning out so well for us^")]);
[1355] (11)   animateCostume(10,3);
[1358] (AE)   WaitForMessage();
[135A] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[1362] (14)   print(10,[Text("There are some UNNATURALLY talented pirates in the area right now^")]);
[13A8] (11)   animateCostume(10,18);
[13AB] (11)   animateCostume(10,10);
[13AE] (AE)   WaitForMessage();
[13B0] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[13B8] (14)   print(10,[Text("^operating out of Monkey Island\x0F.")]);
[13DD] (11)   animateCostume(10,3);
[13E0] (AE)   WaitForMessage();
[13E2] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[13EA] (14)   print(10,[Text("So we've been pursuing alternate means of self-support.")]);
[1425] (11)   animateCostume(10,18);
[1428] (AE)   WaitForMessage();
[142A] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1432] (14)   print(10,[Text("^Fin's idea, actually.")]);
[144C] (11)   animateCostume(10,3);
[144F] (AE)   WaitForMessage();
[1451] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[1459] (14)   print(10,[Text("We're trying to start up a circus.")]);
[147F] (11)   animateCostume(10,18);
[1482] (AE)   WaitForMessage();
[1484] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[148C] (14)   print(10,[Text("It was working out well, until the rat scared off the elephant.")]);
[14CF] (11)   animateCostume(10,3);
[14D2] (AE)   WaitForMessage();
[14D4] (38)   if (Var[187] >= 5) {
[14DB] (13)     ActorOps(10,[TalkAnimNr(3,5),TalkColor(13)]);
[14E3] (14)     print(10,[Text("^and now some jerk scared off the rat!")]);
[150D] (AE)     WaitForMessage();
[150F] (**)   }
[150F] (11)   animateCostume(10,1);
[1512] (11)   animateCostume(10,18);
[1515] (11)   animateCostume(10,3);
[1518] (11)   animateCostume(10,10);
[151B] (2E)   delay(180);
[151F] (11)   animateCostume(10,11);
[1522] (11)   animateCostume(10,5);
[1525] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[152D] (14)   print(10,[Text("Now you've depressed us." + wait() + "Go home.")]);
[1553] (AE)   WaitForMessage();
[1555] (18)   goto 1719;
[1558] (1A)   Bit[25 + 6] = 1;
[155F] (58)   beginOverride();
[1561] (18)   goto 16A7;
[1564] (11)   animateCostume(10,18);
[1567] (11)   animateCostume(10,3);
[156A] (11)   animateCostume(10,10);
[156D] (2E)   delay(60);
[1571] (11)   animateCostume(10,1);
[1574] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[157C] (14)   print(10,[Text("Er^")]);
[1583] (AE)   WaitForMessage();
[1585] (2E)   delay(30);
[1589] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1591] (14)   print(10,[Text("Well^")]);
[159A] (11)   animateCostume(10,3);
[159D] (AE)   WaitForMessage();
[159F] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[15A7] (14)   print(10,[Text("Well, yes, we KNEW about that.")]);
[15C9] (AE)   WaitForMessage();
[15CB] (11)   animateCostume(10,18);
[15CE] (11)   animateCostume(10,3);
[15D1] (11)   animateCostume(10,10);
[15D4] (2E)   delay(180);
[15D8] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[15E0] (14)   print(10,[Text("But we forgot!")]);
[15F2] (AE)   WaitForMessage();
[15F4] (11)   animateCostume(10,9);
[15F7] (2E)   delay(60);
[15FB] (0A)   startScript(209,[]);
[15FE] (80)   breakHere();
[15FF] (68)   VAR_RESULT = isScriptRunning(209);
[1603] (28)   unless (!VAR_RESULT) goto 15FE;
[1608] (11)   animateCostume(10,1);
[160B] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1613] (14)   print(10,[Text("Actually your best bet would be to talk to the fortune teller or the prisoner." + wait() + "They've both been here a long time and might remember something.")]);
[16A7] (AE)   WaitForMessage();
[16A9] (18)   goto 001A;
[16AC] (**) }
[16AC] (13) ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[16B4] (14) print(10,[Text("I think you'd best leave, boy.")]);
[16D6] (AE) WaitForMessage();
[16D8] (13) ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[16E0] (14) print(10,[Text("Ha ha ha ha ha hoo hoo ha ha ha")]);
[1703] (80) breakHere();
[1704] (80) breakHere();
[1705] (80) breakHere();
[1706] (80) breakHere();
[1707] (80) breakHere();
[1708] (80) breakHere();
[1709] (0A) startScript(209,[]);
[170C] (80) breakHere();
[170D] (68) VAR_RESULT = isScriptRunning(209);
[1711] (28) unless (!VAR_RESULT) goto 170C;
[1716] (18) /* goto 1719; */
[1719] (11) animateCostume(10,1);
[171C] (14) print(255,[Pos(160,8),Center(),Overhead()]);
[1726] (9A) VAR_VERB_SCRIPT = Local[0];
[172B] (0A) startScript(21,[2]);
[1731] (2C) CursorShow();
[1733] (2C) UserputOn();
[1735] (A0) stopObjectCode();
END

Script# 209
[0000] (11) animateCostume(10,16);
[0003] (80) breakHere();
[0004] (80) breakHere();
[0005] (80) breakHere();
[0006] (80) breakHere();
[0007] (80) breakHere();
[0008] (80) breakHere();
[0009] (27) PutCodeInString(26, "-- aak --");
[0016] (AC) Exprmode Local[0] = (<VAR_RESULT = getRandomNr(25)> + 97);
[0023] (27) SetStringChar(26,3,Local[0]);
[0029] (AC) Exprmode Local[0] = (<VAR_RESULT = getRandomNr(25)> + 97);
[0036] (27) SetStringChar(26,4,Local[0]);
[003C] (14) print(255,[Pos(70,70),Color(11),Text(getString(VAR_CAMERA_FAST_X))]);
[004B] (AE) WaitForMessage();
[004D] (A0) stopObjectCode();
END

// Object 428: Shady Looking Fellow
Events:
   6 - 003B
   7 - 003B
   8 - 003B
   D - 0037
  5A - 007C
  FF - 0082
[0037] (0A) startScript(91,[]);
[003A] (00) stopObjectCode();
[003B] (D8) printEgo([Text("I'd better not^" + wait() + "Who knows what he's hiding under his coat.")]);
[0079] (AE) WaitForMessage();
[007B] (00) stopObjectCode();
[007C] (1A) Var[171] = 13;
[0081] (00) stopObjectCode();
[0082] (00) stopObjectCode();
END

// Object 429: Game Players Magazine
Events:
   1 - 003E
   8 - 003E
   9 - 003E
  5A - 0038
[0038] (1A) Var[171] = 9;
[003D] (00) stopObjectCode();
[003E] (40) cutscene([2]);
[0043] (58) beginOverride();
[0045] (18) goto 00D6;
[0048] (D8) printEgo([Text("Wow!  It's got info on just about everything to do with computer games^")]);
[0092] (AE) WaitForMessage();
[0094] (A8) if (Bit[49]) {
[0099] (D8)   printEgo([Text("^except the secret phrase.")]);
[00B6] (18) } else {
[00B9] (D8)   printEgo([Text("^and nice pictures, too.")]);
[00D4] (**) }
[00D4] (AE) WaitForMessage();
[00D6] (14) print(255,[Text(" ")]);
[00DB] (C0) endCutscene();
[00DC] (00) stopObjectCode();
END

// Object 430: Door
Events:
   1 - 0022
   9 - 0022
  5A - 005C
[0022] (D8) printEgo([Text("The door's locked, and the sign says they're closed.")]);
[0059] (AE) WaitForMessage();
[005B] (00) stopObjectCode();
[005C] (1A) Var[171] = 1;
[0061] (00) stopObjectCode();
END

// Object 431: Sign
Events:
   9 - 001F
  5A - 00B6
[001F] (D8) printEgo([Text("`Ye Olde Rubber-Chicken-With-a- Pulley-in-the-Middle Shoppe`" + wait() + "`Serving your rubber-chicken-with-a- pulley-in-the-middle needs for over 50 years.`")]);
[00B3] (AE) WaitForMessage();
[00B5] (00) stopObjectCode();
[00B6] (1A) Var[171] = 9;
[00BB] (00) stopObjectCode();
END

// Object 432: Fortune Teller's Door
Events:
   1 - 0036
   2 - 0040
   A - 004A
  5A - 0059
[0036] (6A) startScript(26,[432,381],F,R);
[003F] (00) stopObjectCode();
[0040] (6A) startScript(27,[432,381],F,R);
[0049] (00) stopObjectCode();
[004A] (0F) if (getState(432) == 1) {
[0050] (24)   loadRoomWithEgo(381,53,-1,-1);
[0058] (**) }
[0058] (00) stopObjectCode();
[0059] (0F) if (getState(432) == 0) {
[005F] (1A)   Var[171] = 1;
[0064] (18) } else {
[0067] (1A)   Var[171] = 2;
[006C] (**) }
[006C] (00) stopObjectCode();
END

// Object 438: Archway
Events:
   A - 001F
[001F] (40) cutscene([2]);
[0024] (0A) startScript(203,[]);
[0027] (80) breakHere();
[0028] (68) VAR_RESULT = isScriptRunning(203);
[002C] (28) unless (!VAR_RESULT) goto 0027;
[0031] (C0) endCutscene();
[0032] (24) loadRoomWithEgo(421,55,992,114);
[003A] (00) stopObjectCode();
END

// Object 439: Archway
Events:
   1 - 002B
   2 - 002B
   A - 0041
[002B] (D8) printEgo([Text("There's no door.")]);
[003E] (AE) WaitForMessage();
[0040] (00) stopObjectCode();
[0041] (24) loadRoomWithEgo(401,54,-1,-1);
[0049] (00) stopObjectCode();
END

// Object 440: Men of Low Moral Fiber (Pirates)
Events:
   6 - 0069
   7 - 0069
   8 - 0069
   9 - 004E
   D - 004A
  5A - 009C
  FF - 00A2
[004A] (0A) startScript(208,[]);
[004D] (00) stopObjectCode();
[004E] (D8) printEgo([Text("Not a pleasant sight.")]);
[0066] (AE) WaitForMessage();
[0068] (00) stopObjectCode();
[0069] (D8) printEgo([Text("I'd better not." + wait() + "They look like a rough crew.")]);
[0099] (AE) WaitForMessage();
[009B] (00) stopObjectCode();
[009C] (1A) Var[171] = 13;
[00A1] (00) stopObjectCode();
[00A2] (00) stopObjectCode();
END

// Object 441
Events:
END

// Object 442
Events:
END

// Object 443
Events:
END

// Object 444
Events:
END

// Object 445
Events:
END

// Object 446
Events:
END

// Object 447
Events:
END

// Object 448
Events:
END

// Object 449
Events:
END

// Object 450
Events:
END

// Object 451
Events:
END

// Object 452: Article
Events:
   9 - 001F
[001F] (D8) printEgo([Text("There sure are a lot of spelling errors in it.")]);
[0050] (00) stopObjectCode();
END

// Object 956: Clock
Events:
   9 - 0024
   A - 0023
  5A - 0028
[0023] (00) stopObjectCode();
[0024] (0A) startScript(205,[]);
[0027] (00) stopObjectCode();
[0028] (1A) Var[171] = 9;
[002D] (00) stopObjectCode();
END
