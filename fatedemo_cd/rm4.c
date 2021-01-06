/**
 * Indiana Jones and the Fate of Atlantis: CD Demo
 * 
 * Room 4: Caswell Hall Attic
 */


// ENCD
[0000] (28) if (!Bit[69]) {
[0005] (2D)   putActorInRoom(1,0);
[0008] (0C)   Resource.lockSound(21);
[000B] (0C)   Resource.loadSound(21);
[000E] (0C)   Resource.lockSound(22);
[0011] (0C)   Resource.loadSound(22);
[0014] (0C)   Resource.lockSound(29);
[0017] (0C)   Resource.loadSound(29);
[001A] (0C)   Resource.lockSound(30);
[001D] (0C)   Resource.loadSound(30);
[0020] (33)   SetScreen(0,200);
[0026] (33)   screenEffect(-32383);
[002A] (0A)   startScript(19,[1]);
[0030] (0A)   startScript(19,[3]);
[0036] (07)   setState(61,0);
[003A] (1A)   Var[307] = 30;
[003F] (1A)   Var[308] = 73;
[0044] (05)   drawObject(74);
[0048] (2C)   InitCharset(2);
[004B] (42)   chainScript(206,[]);
[004E] (18) } else {
[0051] (13)   ActorOps(1,[Elevation(0)]);
[0057] (07)   setState(74,0);
[005B] (5D)   setClass(61,[32]);
[0062] (07)   setState(61,1);
[0066] (1D)   if (classOfIs(66,[6])) {
[006F] (05)     drawObject(66);
[0073] (**)   }
[0073] (0A)   startScript(216,[]);
[0076] (**) }
[0076] (00) stopObjectCode();
END

// EXCD
[0000] (58) endOverride();
[0002] (0C) Resource.unlockCostume(138);
[0005] (28) if (!Bit[69]) {
[000A] (07)   setState(73,0);
[000E] (48) } else if (VAR_NEW_ROOM == 5) {
[0018] (4C)   soundKludge([269,20,70,120]);
[0026] (4C)   soundKludge([262,20,0]);
[0031] (4C)   soundKludge([-1]);
[0036] (1C)   startSound(40);
[0038] (4C)   soundKludge([258,40,100]);
[0043] (4C)   soundKludge([269,20,0,60]);
[0051] (18)   /* goto 0054; */
[0054] (**) }
[0054] (80) breakHere();
[0055] (68) VAR_RESULT = isScriptRunning(200);
[0059] (28) unless (!VAR_RESULT) goto 0054;
[005E] (00) stopObjectCode();
END

Script# 200	// Indy falls down trapdoor
[0000] (1A) Var[209] = 1;
[0005] (80) breakHere();
[0006] (40) cutscene([]);
[0008] (93) ActorOps(VAR_EGO,[IgnoreBoxes(),NeverZClip()]);
[000E] (9E) walkActorTo(VAR_EGO,81,131);
[0015] (AE) WaitForActor(VAR_EGO);
[0019] (11) animateCostume(1,247);
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (11) animateCostume(1,246);
[0021] (0C) Resource.loadSound(106);
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (4C) soundKludge([257,21,0]);
[0031] (0C) Resource.unlockSound(21);
[0034] (4C) soundKludge([9,21]);
[003C] (4C) soundKludge([9,22]);
[0044] (4C) soundKludge([9,29]);
[004C] (4C) soundKludge([9,30]);
[0054] (4C) soundKludge([8,106]);
[005C] (05) drawObject(61);
[0060] (1C) startSound(192);
[0062] (13) ActorOps(1,[Costume(138),IgnoreBoxes(),SetZClip(2)]);
[006A] (11) animateCostume(1,6);
[006D] (80) breakHere();
[006E] (80) breakHere();
[006F] (80) breakHere();
[0070] (80) breakHere();
[0071] (80) breakHere();
[0072] (80) breakHere();
[0073] (80) breakHere();
[0074] (80) breakHere();
[0075] (80) breakHere();
[0076] (80) breakHere();
[0077] (80) breakHere();
[0078] (80) breakHere();
[0079] (80) breakHere();
[007A] (80) breakHere();
[007B] (80) breakHere();
[007C] (80) breakHere();
[007D] (80) breakHere();
[007E] (80) breakHere();
[007F] (80) breakHere();
[0080] (80) breakHere();
[0081] (80) breakHere();
[0082] (80) breakHere();
[0083] (80) breakHere();
[0084] (80) breakHere();
[0085] (80) breakHere();
[0086] (32) setCameraAt(160);
[0089] (2D) putActorInRoom(1,5);
[008C] (01) putActor(1,124,30);
[0092] (C0) endCutscene();
[0093] (D2) actorFollowCamera(VAR_EGO);
[0096] (A0) stopObjectCode();
END

Script# 201	// Retail title sequence
[0000] (80) breakHere();
[0001] (80) breakHere();
[0002] (32) setCameraAt(160);
[0005] (AD) putActorInRoom(VAR_EGO,0);
[0009] (13) ActorOps(5,[Costume(56),InitAnimNr(1),Scale(0,0),IgnoreBoxes(),NeverZClip()]);
[0015] (13) ActorOps(6,[Costume(56),InitAnimNr(2),Scale(0,0),IgnoreBoxes(),NeverZClip()]);
[0021] (2D) putActorInRoom(5,4);
[0024] (01) putActor(5,165,87);
[002A] (11) animateCostume(5,250);
[002D] (11) animateCostume(6,250);
[0030] (11) animateCostume(5,6);
[0033] (80) breakHere();
[0034] (27) PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[00C5] (1A) Local[6] = 1;
[00CA] (1A) Local[7] = 10;
[00CF] (1A) Local[8] = 2;
[00D4] (9A) Local[4] = Local[6];
[00D9] (AC) Exprmode Local[9] = (Local[5] / 10);
[00E4] (5A) Local[9] += 4;
[00E9] (27) SetStringChar(40,Local[4],Local[9]);
[00F0] (DA) Local[5] += Local[8];
[00F5] (46) Local[4]++;
[00F8] (C4) unless (Local[4] > Local[7]) goto 00D9;
[00FF] (48) if (Local[6] == 1) {
[0106] (1A)   Local[8] = 2;
[010B] (48) } else if (Local[6] == 11) {
[0115] (1A)   Local[8] = 3;
[011A] (48) } else if (Local[6] == 21) {
[0124] (1A)   Local[8] = 5;
[0129] (48) } else if (Local[6] == 31) {
[0133] (1A)   Local[8] = 6;
[0138] (48) } else if (Local[6] == 41) {
[0142] (1A)   Local[8] = 10;
[0147] (48) } else if (Local[6] == 51) {
[0151] (1A)   Local[8] = 13;
[0156] (48) } else if (Local[6] == 61) {
[0160] (1A)   Local[8] = 19;
[0165] (48) } else if (Local[6] == 71) {
[016F] (1A)   Local[8] = 17;
[0174] (48) } else if (Local[6] == 81) {
[017E] (1A)   Local[8] = 37;
[0183] (48) } else if (Local[6] == 91) {
[018D] (1A)   Local[8] = 56;
[0192] (48) } else if (Local[6] == 101) {
[019C] (1A)   Local[8] = 72;
[01A1] (18)   /* goto 01A4; */
[01A4] (**) }
[01A4] (08) if (Local[7] != 120) {
[01AB] (5A)   Local[6] += 10;
[01B0] (5A)   Local[7] += 10;
[01B5] (18)   goto 00D4;
[01B8] (**) }
[01B8] (27) SetStringChar(40,121,255);
[01BD] (1A) VAR_TIMER_NEXT = 1;
[01C2] (1A) Local[11] = 1;
[01C7] (27) Local[0] = GetStringChar(40,1);
[01CD] (1A) Local[4] = 0;
[01D2] (1A) Local[2] = 1;
[01D7] (4C) soundKludge([272]);
[01DC] (1C) startSound(21);
[01DE] (4C) soundKludge([270,21,0]);
[01E9] (4C) soundKludge([271,269,21,0,240]);
[01FA] (4C) soundKludge([271,-1]);
[0202] (4C) soundKludge([270,21,1]);
[020D] (4C) soundKludge([271,2]);
[0215] (4C) soundKludge([271,8,22]);
[0220] (4C) soundKludge([271,8,29]);
[022B] (4C) soundKludge([271,8,30]);
[0236] (4C) soundKludge([271,262,22,138]);
[0244] (4C) soundKludge([271,262,29,138]);
[0252] (4C) soundKludge([271,262,30,138]);
[0260] (4C) soundKludge([271,3]);
[0268] (4C) soundKludge([271,-1]);
[0270] (DA) Local[4] += Local[11];
[0275] (44) if (Local[4] > 121) {
[027C] (1A)   Local[4] = 121;
[0281] (**) }
[0281] (27) Local[0] = GetStringChar(40,Local[4]);
[0288] (1A) VAR_TMR_1 = 0;
[028D] (13) ActorOps(5,[Scale(Local[0],Local[0])]);
[0295] (13) ActorOps(6,[Scale(Local[0],Local[0])]);
[029D] (80) breakHere();
[029E] (9A) Local[3] = VAR_TMR_1;
[02A3] (C4) if (Local[3] > Local[11]) {
[02AA] (48)   if (Local[10] == 1) {
[02B1] (9A)     Local[11] = Local[3];
[02B6] (**)   }
[02B6] (1A)   Local[10] = 1;
[02BB] (18) } else {
[02BE] (1A)   Local[10] = 0;
[02C3] (**) }
[02C3] (48) unless (Local[4] == 121) goto 0270;
[02CA] (1A) VAR_TIMER_NEXT = 6;
[02CF] (2E) delay(60);
[02D3] (05) drawObject(67);
[02D7] (2E) delay(60);
[02DB] (0A) startScript(94,[207,207]);
[02E4] (80) breakHere();
[02E5] (68) VAR_RESULT = isScriptRunning(94);
[02E9] (28) unless (!VAR_RESULT) goto 02E4;
[02EE] (0A) startScript(208,[]);
[02F1] (0A) startScript(94,[210,215]);
[02FA] (80) breakHere();
[02FB] (68) VAR_RESULT = isScriptRunning(94);
[02FF] (28) unless (!VAR_RESULT) goto 02FA;
[0304] (07) setState(67,0);
[0308] (2D) putActorInRoom(5,0);
[030B] (2D) putActorInRoom(6,0);
[030E] (13) ActorOps(5,[Init()]);
[0312] (13) ActorOps(6,[Init()]);
[0316] (80) breakHere();
[0317] (A0) stopObjectCode();
END

Script# 202	// Indy gets dusty key
[0000] (40) cutscene([2]);
[0005] (11) animateCostume(1,12);
[0008] (D8) printEgo([Text(sound(0x2F, 0x3) + "Feels like there's something loose in\x10here^")]);
[0046] (AE) WaitForMessage();
[0048] (2E) delay(30);
[004C] (D8) printEgo([Text(sound(0x2F, 0x4) + "^a key?")]);
[0066] (11) animateCostume(1,3);
[0069] (AE) WaitForMessage();
[006B] (C0) endCutscene();
[006C] (54) setObjectName(68,"dusty key");
[0079] (25) pickupObject(68,0);
[007D] (29) setOwnerOf(68,1);
[0081] (07) setState(68,0);
[0085] (5D) setClass(68,[134]);
[008C] (5D) setClass(68,[130]);
[0093] (5D) setClass(68,[160]);
[009A] (5D) setClass(65,[18]);
[00A1] (0A) startScript(10,[]);
[00A4] (A0) stopObjectCode();
END

Script# 203	// Indy climbs down
[0000] (40) cutscene([2]);
[0005] (13) ActorOps(1,[Costume(27),IgnoreBoxes(),SetZClip(2)]);
[000D] (01) putActor(1,77,164);
[0013] (11) animateCostume(1,251);
[0016] (58) beginOverride();
[0018] (18) goto 0029;
[001B] (11) animateCostume(1,14);
[001E] (80) breakHere();
[001F] (80) breakHere();
[0020] (80) breakHere();
[0021] (80) breakHere();
[0022] (80) breakHere();
[0023] (80) breakHere();
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (80) breakHere();
[0027] (80) breakHere();
[0028] (80) breakHere();
[0029] (58) endOverride();
[002B] (C0) endCutscene();
[002C] (72) loadRoom(5);
[002E] (A0) stopObjectCode();
END

Script# 204	// look at urn
[0000] (A8) if (Bit[69]) {
[0005] (40)   cutscene([2]);
[000A] (D8)   printEgo([Text(sound(0x2F, 0x6) + "It's some kind of funeral\x10urn.")]);
[003B] (AE)   WaitForMessage();
[003D] (11)   animateCostume(1,12);
[0040] (80)   breakHere();
[0041] (80)   breakHere();
[0042] (80)   breakHere();
[0043] (80)   breakHere();
[0044] (80)   breakHere();
[0045] (80)   breakHere();
[0046] (80)   breakHere();
[0047] (80)   breakHere();
[0048] (80)   breakHere();
[0049] (80)   breakHere();
[004A] (80)   breakHere();
[004B] (80)   breakHere();
[004C] (0A)   startScript(123,[Var[234]]);
[0052] (80)   breakHere();
[0053] (68)   VAR_RESULT = isScriptRunning(123);
[0057] (28)   unless (!VAR_RESULT) goto 0052;
[005C] (AE)   WaitForMessage();
[005E] (11)   animateCostume(1,3);
[0061] (C0)   endCutscene();
[0062] (18) } else {
[0065] (D8)   printEgo([Text(sound(0x2F, 0x7) + "It's some kind of funeral\x10urn.")]);
[0096] (**) }
[0096] (A0) stopObjectCode();
END

Script# 205	// Indy picks up candlestick
[0000] (40) cutscene([2]);
[0005] (5D) setClass(69,[6]);
[000C] (5D) setClass(69,[160]);
[0013] (07) setState(69,1);
[0017] (29) setOwnerOf(69,1);
[001B] (0A) startScript(10,[]);
[001E] (14) print(1,[Text(sound(0x2F, 0x8) + "It must be made out of\x10lead.")]);
[004E] (AE) WaitForMessage();
[0050] (36) walkActorToObject(1,70);
[0054] (80) breakHere();
[0055] (80) breakHere();
[0056] (80) breakHere();
[0057] (80) breakHere();
[0058] (80) breakHere();
[0059] (80) breakHere();
[005A] (11) animateCostume(1,10);
[005D] (14) print(1,[Text(sound(0x2F, 0x9) + "There!")]);
[0077] (80) breakHere();
[0078] (80) breakHere();
[0079] (80) breakHere();
[007A] (80) breakHere();
[007B] (80) breakHere();
[007C] (11) animateCostume(1,3);
[007F] (07) setState(70,1);
[0083] (5D) setClass(70,[32]);
[008A] (29) setOwnerOf(69,0);
[008E] (29) setOwnerOf(69,15);
[0092] (0A) startScript(10,[]);
[0095] (AE) WaitForMessage();
[0097] (C0) endCutscene();
[0098] (A0) stopObjectCode();
END

Script# 206	// demo title sequence
[0000] (2C) CursorHide();
[0002] (2C) UserputOff();
[0004] (80) breakHere();
[0005] (0C) Resource.clearHeap();
[0007] (80) breakHere();
[0008] (2C) UserputOn();
[000A] (0A) startScript(201,[]);
[000D] (80) breakHere();
[000E] (58) beginOverride();
[0010] (18) goto 0022;
[0013] (1A) VAR_TALKSTOP_KEY = 0;
[0018] (80) breakHere();
[0019] (68) VAR_RESULT = isScriptRunning(201);
[001D] (28) unless (!VAR_RESULT) goto 0018;
[0022] (A8) if (VAR_OVERRIDE) {
[0027] (58)   endOverride();
[0029] (62)   stopScript(201);
[002B] (2D)   putActorInRoom(5,0);
[002E] (2D)   putActorInRoom(6,0);
[0031] (07)   setState(67,0);
[0035] (62)   stopScript(94);
[0037] (62)   stopScript(93);
[0039] (1A)   Local[1] = 207;
[003E] (E2)   stopScript(Local[1]);
[0041] (46)   Local[1]++;
[0044] (44)   unless (Local[1] > 215) goto 003E;
[004B] (14)   print(255,[Text(" ")]);
[0050] (0A)   startScript(129,[]);
[0053] (80)   breakHere();
[0054] (68)   VAR_RESULT = isScriptRunning(129);
[0058] (28)   unless (!VAR_RESULT) goto 0053;
[005D] (1A)   VAR_TIMER_NEXT = 6;
[0062] (33)   RoomIntensity(255,159,159);
[0067] (33)   RoomIntensity(255,11,11);
[006C] (**) }
[006C] (58) endOverride();
[006E] (1A) VAR_TALKSTOP_KEY = 46;
[0073] (80) breakHere();
[0074] (80) breakHere();
[0075] (80) breakHere();
[0076] (80) breakHere();
[0077] (80) breakHere();
[0078] (80) breakHere();
[0079] (80) breakHere();
[007A] (80) breakHere();
[007B] (80) breakHere();
[007C] (80) breakHere();
[007D] (80) breakHere();
[007E] (80) breakHere();
[007F] (80) breakHere();
[0080] (80) breakHere();
[0081] (80) breakHere();
[0082] (80) breakHere();
[0083] (80) breakHere();
[0084] (80) breakHere();
[0085] (80) breakHere();
[0086] (80) breakHere();
[0087] (80) breakHere();
[0088] (80) breakHere();
[0089] (80) breakHere();
[008A] (80) breakHere();
[008B] (80) breakHere();
[008C] (4C) soundKludge([9,21]);
[0094] (4C) soundKludge([9,22]);
[009C] (4C) soundKludge([9,29]);
[00A4] (4C) soundKludge([9,30]);
[00AC] (4C) soundKludge([8,106]);
[00B4] (1A) Bit[69] = 1;
[00B9] (72) loadRoom(62);
[00BB] (62) stopScript(0);
[00BD] (A0) stopObjectCode();
END

Script# 207	// show copyright info
[0000] (1A) Var[452] = 120;
[0005] (2C) InitCharset(1);
[0008] (14) print(255,[Color(9),Center(),Pos(160,155),Text("= & \x0F 1992 LucasArts Entertainment Company" + newline() + "All Rights Reserved.  Indiana Jones is a" + newline() + "registered trademark of Lucasfilm Ltd.")]);
[0090] (2C) InitCharset(3);
[0093] (A0) stopObjectCode();
END

Script# 208	// show demo credits
[0000] (2C) InitCharset(3);
[0003] (33) RoomIntensity(55,159,159);
[0008] (14) print(254,[Color(159),Center(),Pos(160,150),Text("CD-ROM TALKIE:")]);
[0022] (A0) stopObjectCode();
END

Script# 209	// duplicate of 208?
[0000] (2C) InitCharset(3);
[0003] (33) RoomIntensity(55,159,159);
[0008] (14) print(254,[Color(159),Center(),Pos(160,150),Text("CD-ROM TALKIE:")]);
[0022] (A0) stopObjectCode();
END

Script# 210	// demo blurb 1
[0000] (1A) Var[452] = 180;
[0005] (14) print(255,[Color(11),Center(),Pos(160,165),Text("Over 8000 lines of digital dialog")]);
[0032] (A0) stopObjectCode();
END

Script# 211	// demo blurb 2
[0000] (1A) Var[452] = 120;
[0005] (14) print(255,[Color(11),Center(),Pos(160,165),Text("Full of Digitized Sound Effects")]);
[0030] (A0) stopObjectCode();
END

Script# 212	// demo blurb 3
[0000] (1A) Var[452] = 120;
[0005] (14) print(255,[Color(11),Center(),Pos(160,165),Text("iMuse\x0F Interactive Music")]);
[0029] (A0) stopObjectCode();
END

Script# 213	// demo blurb 4
[0000] (1A) Var[452] = 120;
[0005] (14) print(255,[Color(11),Center(),Pos(160,165),Text("'Best Adventure Game of the Year'" + newline() + "Computer Game Review, Games Magazine")]);
[0058] (A0) stopObjectCode();
END

Script# 214	// demo blurb 5
[0000] (1A) Var[452] = 120;
[0005] (14) print(255,[Color(11),Center(),Pos(160,165),Text("'Best Adventure Game of the Year'" + newline() + "Game Players Magazine, Game Informer")]);
[0058] (A0) stopObjectCode();
END

Script# 215	// demo blurb 6
[0000] (1A) Var[452] = 120;
[0005] (14) print(255,[Color(11),Center(),Pos(160,165),Text("CD-Rom Available Spring 1993")]);
[002D] (A0) stopObjectCode();
END

Script# 216
[0000] (40) cutscene([2]);
[0005] (13) ActorOps(1,[IgnoreBoxes(),SetZClip(2),Elevation(0)]);
[000E] (58) beginOverride();
[0010] (18) goto 002D;
[0013] (2D) putActorInRoom(1,4);
[0016] (01) putActor(1,77,164);
[001C] (11) animateCostume(1,251);
[001F] (11) animateCostume(1,13);
[0022] (80) breakHere();
[0023] (80) breakHere();
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (80) breakHere();
[0027] (80) breakHere();
[0028] (80) breakHere();
[0029] (80) breakHere();
[002A] (80) breakHere();
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (58) endOverride();
[002F] (A8) if (VAR_OVERRIDE) {
[0034] (11)   animateCostume(1,1);
[0037] (**) }
[0037] (01) putActor(1,77,136);
[003D] (13) ActorOps(1,[Costume(2),FollowBoxes()]);
[0043] (11) animateCostume(1,246);
[0046] (80) breakHere();
[0047] (80) breakHere();
[0048] (C0) endCutscene();
[0049] (A0) stopObjectCode();
END

Script# 217
[0000] (1A) Var[209] = 0;
[0005] (A8) if (Local[0]) {
[000A] (18) } else {
[000D] (58)   beginOverride();
[000F] (18)   goto 001D;
[0012] (80)   breakHere();
[0013] (A8)   unless (Var[209]) goto 0012;
[0018] (58)   endOverride();
[001A] (18)   goto 0095;
[001D] (A8)   unless (VAR_OVERRIDE) goto 0095;
[0022] (**) }
[0022] (58) endOverride();
[0024] (1A) Bit[19] = 1;
[0029] (13) ActorOps(1,[Costume(2),FollowBoxes()]);
[002F] (1A) Var[442] = 116;
[0034] (DD) setClass(Var[442],[134]);
[003B] (46) Var[442]++;
[003E] (44) unless (Var[442] > 119) goto 0034;
[0045] (16) Var[442] = getRandomNr(3);
[0049] (5A) Var[442] += 116;
[004E] (DD) setClass(Var[442],[145]);
[0055] (DD) setClass(Var[442],[6]);
[005C] (16) Var[443] = getRandomNr(3);
[0060] (5A) Var[443] += 116;
[0065] (88) unless (Var[442] != Var[443]) goto 005C;
[006C] (DD) setClass(Var[443],[146]);
[0073] (DD) setClass(Var[442],[6]);
[007A] (07) setState(40,1);
[007E] (07) setState(50,0);
[0082] (5D) setClass(50,[160]);
[0089] (1A) VAR_VERB_SCRIPT = 4;
[008E] (1A) Var[224] = 2;
[0093] (72) loadRoom(1);
[0095] (A0) stopObjectCode();
END

Script# 218
[0000] (A0) stopObjectCode();
END

// Object 60: Shiva Statue
Events:
   9 - 0015
  5A - 000F
[000F] (1A) Var[123] = 9;	// Look at
[0014] (00) stopObjectCode();
[0015] (14) print(1,[Text(sound(0x2F, 0x16) + "It's a stone carving of\x10Shiva.")]);
[0047] (00) stopObjectCode();
END

// Object 61: Trapdoor
Events:
   3 - 0065
   4 - 008B
   9 - 001E
   A - 00AE
  5A - 0018
[0018] (1A) Var[123] = 9;
[001D] (00) stopObjectCode();
[001E] (A8) if (Bit[69]) {
[0023] (D8)   printEgo([Text(sound(0x2F, 0x18) + "I have to be more careful around these\x10things.")]);
[0064] (**) }
[0064] (00) stopObjectCode();
[0065] (D8) printEgo([Text(sound(0x2F, 0x19) + "It's already\x10open.")]);
[008A] (00) stopObjectCode();
[008B] (D8) printEgo([Text(sound(0x2F, 0x1A) + "It won't\x10close.")]);
[00AD] (00) stopObjectCode();
[00AE] (28) if (!Bit[69]) {
[00B3] (0A)   startScript(200,[]);
[00B6] (18) } else {
[00B9] (0A)   startScript(203,[]);
[00BC] (**) }
[00BC] (00) stopObjectCode();
END

// Object 62: Indy logo
Events:
END

// Object 63: Peculiar Statue
Events:
   9 - 0018
   A - 0050
  5A - 0012
[0012] (1A) Var[123] = 9;
[0017] (00) stopObjectCode();
[0018] (D8) printEgo([Text(sound(0x2F, 0x1C) + "It's a crude copy of a Persian\x10idol.")]);
[004F] (00) stopObjectCode();
[0050] (28) if (!Bit[69]) {
[0055] (0A)   startScript(200,[]);
[0058] (18)   /* goto 005B; */
[005B] (**) }
[005B] (00) stopObjectCode();
END

// Object 64: Alleged Masai statue
Events:
   9 - 0015
  5A - 000F
[000F] (1A) Var[123] = 9;
[0014] (00) stopObjectCode();
[0015] (D8) printEgo([Text(sound(0x2F, 0x24) + "Poor Marcus^" + wait() + "^he thought this was a Masai\x10warrior.")]);
[005B] (00) stopObjectCode();
END

// Object 65: Urn
Events:
   3 - 0069
   4 - 00BA
   9 - 0065
   B - 001E
  5A - 0018
[0018] (1A) Var[123] = 9;
[001D] (00) stopObjectCode();
[001E] (D8) printEgo([Text(sound(0x2F, 0x1E) + "I don't want to disturb it any more than\x10necessary.")]);
[0064] (00) stopObjectCode();
[0065] (2A) startScript(204,[],F);
[0068] (00) stopObjectCode();
[0069] (1D) if (classOfIs(65,[134])) {
[0072] (1C)   startSound(172);
[0074] (5D)   setClass(65,[6]);
[007B] (1D)   if (classOfIs(65,[146])) {
[0084] (54)     setObjectName(68,"ashes");
[008D] (**)   }
[008D] (07)   setState(65,1);
[0091] (18) } else {
[0094] (D8)   printEgo([Text(sound(0x2F, 0x20) + "It's already\x10open.")]);
[00B9] (**) }
[00B9] (00) stopObjectCode();
[00BA] (1D) if (classOfIs(65,[6])) {
[00C3] (1C)   startSound(172);
[00C5] (5D)   setClass(65,[134]);
[00CC] (07)   setState(65,0);
[00D0] (1D)   if (classOfIs(68,[6])) {
[00D9] (54)     setObjectName(68,"urn");
[00E0] (**)   }
[00E0] (18) } else {
[00E3] (D8)   printEgo([Text(sound(0x2F, 0x22) + "It's already\x10closed.")]);
[010A] (**) }
[010A] (00) stopObjectCode();
END

// Object 66: Chest
Events:
   3 - 001B
   4 - 00B5
   9 - 0105
  5A - 0015
[0015] (1A) Var[123] = 9;
[001A] (00) stopObjectCode();
[001B] (1D) if (classOfIs(69,[134])) {
[0024] (40)   cutscene([2]);
[0029] (11)   animateCostume(1,12);
[002C] (80)   breakHere();
[002D] (80)   breakHere();
[002E] (80)   breakHere();
[002F] (80)   breakHere();
[0030] (80)   breakHere();
[0031] (11)   animateCostume(1,3);
[0034] (80)   breakHere();
[0035] (D8)   printEgo([Text(sound(0x2F, 0x2D) + "I can't lift the\x10lid.")]);
[005D] (AE)   WaitForMessage();
[005F] (C0)   endCutscene();
[0060] (1D) } else if (classOfIs(66,[134])) {
[006C] (07)   setState(66,1);
[0070] (5D)   setClass(66,[6]);
[0077] (05)   drawObject(66);
[007B] (1C)   startSound(172);
[007D] (80)   breakHere();
[007E] (5D)   setClass(66,[16]);
[0085] (5D)   setClass(66,[143]);
[008C] (18) } else {
[008F] (D8)   printEgo([Text(sound(0x2F, 0x2E) + "It's already\x10open.")]);
[00B4] (**) }
[00B4] (00) stopObjectCode();
[00B5] (1D) if (classOfIs(66,[6])) {
[00BE] (07)   setState(66,0);
[00C2] (5D)   setClass(66,[134]);
[00C9] (1C)   startSound(172);
[00CB] (80)   breakHere();
[00CC] (5D)   setClass(66,[15]);
[00D3] (5D)   setClass(66,[144]);
[00DA] (18) } else {
[00DD] (D8)   printEgo([Text(sound(0x2F, 0x2F) + "It's already\x10closed.")]);
[0104] (**) }
[0104] (00) stopObjectCode();
[0105] (1D) if (classOfIs(66,[134])) {
[010E] (D8)   printEgo([Text(sound(0x2F, 0x30) + "Marcus still thinks this chest belonged to\x10Columbus.")]);
[0155] (18) } else {
[0158] (D8)   printEgo([Text(sound(0x2F, 0x31) + "It's full of^" + wait() + "^air.")]);
[017F] (**) }
[017F] (AE) WaitForMessage();
[0181] (00) stopObjectCode();
END

// Object 67
Events:
END

// Object 68: Ashes (Dusty Key)
Events:
   3 - 0127
   4 - 0136
   8 - 0145
   9 - 00B3
   B - 002A
  5A - 001E
  5B - 0024
[001E] (1A) Var[123] = 9;
[0023] (00) stopObjectCode();
[0024] (1A) Var[161] = 1364;
[0029] (00) stopObjectCode();
[002A] (1D) if (classOfIs(65,[134])) {
[0033] (D8)   printEgo([Text(sound(0x2F, 0x27) + "I don't want to disturb it any more than\x10necessary.")]);
[0079] (1D) } else if (classOfIs(68,[134])) {
[0085] (D8)   printEgo([Text(sound(0x2F, 0x28) + "I already have it.")]);
[00AA] (18) } else {
[00AD] (0A)   startScript(202,[]);
[00B0] (**) }
[00B0] (AE) WaitForMessage();
[00B2] (00) stopObjectCode();
[00B3] (1D) if (classOfIs(68,[134])) {
[00BC] (D8)   printEgo([Text(sound(0x2F, 0x29) + "It's dusty.")]);
[00DA] (1D) } else if (classOfIs(65,[6])) {
[00E6] (D8)   printEgo([Text(sound(0x2F, 0x2A) + "Looks like someone's ashes in\x10here.")]);
[011C] (18) } else {
[011F] (37)   startObject(65,9,[]);
[0124] (**) }
[0124] (AE) WaitForMessage();
[0126] (00) stopObjectCode();
[0127] (1D) if (classOfIs(68,[6])) {
[0130] (37)   startObject(65,3,[]);
[0135] (**) }
[0135] (00) stopObjectCode();
[0136] (1D) if (classOfIs(68,[6])) {
[013F] (37)   startObject(65,4,[]);
[0144] (**) }
[0144] (00) stopObjectCode();
[0145] (1D) if (classOfIs(68,[134])) {
[014E] (79)   doSentence(8,Local[0],VAR_ME);
[0154] (18) } else {
[0157] (D8)   printEgo([Text(sound(0x2F, 0x2B) + "That doesn't seem to\x10work.")]);
[0184] (AE)   WaitForMessage();
[0186] (**) }
[0186] (00) stopObjectCode();
END

// Object 69: Candlestick (initial)
Events:
   9 - 001C
   B - 0018
  5A - 0012
[0012] (1A) Var[123] = 9;
[0017] (00) stopObjectCode();
[0018] (42) chainScript(205,[]);
[001B] (00) stopObjectCode();
[001C] (D8) printEgo([Text(sound(0x2F, 0x37) + "It's a genuine\x10candlestick.")]);
[004A] (00) stopObjectCode();
END

// Object 70: Candlestick (moved)
Events:
   9 - 0018
   B - 0047
  5A - 0012
[0012] (1A) Var[123] = 9;
[0017] (00) stopObjectCode();
[0018] (D8) printEgo([Text(sound(0x2F, 0x33) + "It's a genuine\x10candlestick.")]);
[0046] (00) stopObjectCode();
[0047] (40) cutscene([2]);
[004C] (11) animateCostume(1,12);
[004F] (80) breakHere();
[0050] (D8) printEgo([Text(sound(0x2F, 0x34) + "Urrrh^")]);
[0069] (AE) WaitForMessage();
[006B] (11) animateCostume(1,3);
[006E] (80) breakHere();
[006F] (D8) printEgo([Text(sound(0x2F, 0x35) + "I think it's fine right where it\x10is.")]);
[00A6] (C0) endCutscene();
[00A7] (00) stopObjectCode();
END

// Object 71: Gargoyle
Events:
   9 - 0015
  5A - 000F
[000F] (1A) Var[123] = 9;
[0014] (00) stopObjectCode();
[0015] (14) print(1,[Text(sound(0x2F, 0x39) + "It's a medieval\x10gargoyle^" + wait() + "^or a good\x10imitation.")]);
[0059] (00) stopObjectCode();
END

// Object 72: Horus Statue
Events:
   9 - 0015
  5A - 000F
[000F] (1A) Var[123] = 9;
[0014] (00) stopObjectCode();
[0015] (D8) printEgo([Text(sound(0x2F, 0x3B) + "It's a copy of an Egyptian statue of\x10Horus.")]);
[0053] (00) stopObjectCode();
END

// Object 73
Events:
END

// Object 74
Events:
END
