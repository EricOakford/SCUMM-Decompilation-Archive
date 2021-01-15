/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 46: Dock
 */

// EN
[0000] (5D) setClass(962,[152]);
[0007] (48) if (VAR_VIDEOMODE == 4) {
[000E] (33)   RoomColor(0,7)
[0014] (**) }
[0014] (48) if (VAR_SOUNDCARD == 4) {
[001B] (18)   /* goto 001E; */
[001E] (**) }
[001E] (0A) startScript(136,[112]);
[0024] (07) setState(632,1);
[0028] (28) if (!Bit[79]) {
[002D] (0C)   Resource.loadCostume(43);
[0030] (0C)   Resource.loadCostume(44);
[0033] (0C)   Resource.loadCostume(41);
[0036] (0C)   Resource.loadCostume(42);
[0039] (48)   if (Var[220] == 43) {
[0040] (0A)     startScript(203,[]);
[0043] (11)     animateCostume(1,3);
[0046] (18)   } else {
[0049] (0A)     startScript(204,[]);
[004C] (0A)     startScript(126,[0]);
[0052] (**)   }
[0052] (**) }
[0052] (5D) setClass(6,[0,150,148]);
[005F] (13) ActorOps(6,[Costume(93),Elevation(0),InitAnimNr(1)]);
[0069] (11) animateCostume(6,250);
[006C] (2D) putActorInRoom(6,46);
[006F] (01) putActor(6,65,104);
[0075] (48) if (Var[320] == 647) {
[007C] (11)   animateCostume(6,2);
[007F] (48) } else if (Var[320] == 648) {
[0089] (11)   animateCostume(6,3);
[008C] (18) } else {
[008F] (11)   animateCostume(6,1);
[0092] (**) }
[0092] (07) setState(643,0);
[0096] (07) setState(644,0);
[009A] (07) setState(645,0);
[009E] (A8) if (Bit[114]) {
[00A3] (2D)   putActorInRoom(5,0);
[00A6] (07)   setState(640,0);
[00AA] (07)   setState(641,0);
[00AE] (07)   setState(642,0);
[00B2] (18) } else {
[00B5] (07)   setState(640,1);
[00B9] (07)   setState(641,1);
[00BD] (07)   setState(642,1);
[00C1] (5D)   setClass(5,[0,150,148]);
[00CE] (13)   ActorOps(5,[Costume(92),Elevation(0),WalkSpeed(4,4),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[00DF] (11)   animateCostume(5,249);
[00E2] (A8)   if (Bit[124]) {
[00E7] (2D)     putActorInRoom(5,46);
[00EA] (01)     putActor(5,56,105);
[00F0] (11)     animateCostume(5,8);
[00F3] (18)   } else {
[00F6] (2D)     putActorInRoom(5,46);
[00F9] (01)     putActor(5,37,63);
[00FF] (11)     animateCostume(5,3);
[0102] (**)   }
[0102] (**) }
[0102] (A8) if (Bit[119]) {
[0107] (0A)   startScript(202,[228,120]);
[0110] (18) } else {
[0113] (68)   VAR_RESULT = isScriptRunning(144);
[0117] (28)   if (!VAR_RESULT) {
[011C] (26)     setVarRange(Var[299],5,[176,196,236,205,218]);
[0125] (26)     setVarRange(Var[307],5,[12,17,10,9,14]);
[012E] (2A)     startScript(123,[5],F);
[0134] (**)   }
[0134] (**) }
[0134] (2A) startScript(201,[],F);
[0137] (28) if (!Bit[79]) {
[013C] (0A)   startScript(200,[]);
[013F] (**) }
[013F] (00) stopObjectCode();
END

// EX
[0000] (5D) setClass(623,[24]);
[0007] (5D) setClass(624,[24]);
[000E] (5D) setClass(1,[0]);
[0015] (00) stopObjectCode();
END

Script# 200
[0000] (80) breakHere();
[0001] (7B) Local[0] = getActorWalkBox(1);
[0005] (80) breakHere();
[0006] (7B) Local[1] = getActorWalkBox(1);
[000A] (88) unless (Local[1] != Local[0]) goto 0005;
[0011] (9A) Local[0] = Local[1];
[0016] (48) if (Local[0] == 0) {
[001D] (07)   setState(632,1);
[0021] (48) } else if (Local[0] == 1) {
[002B] (07)   setState(632,0);
[002F] (48) } else if (Local[0] == 3) {
[0039] (40)   cutscene([0]);
[003E] (11)   animateCostume(1,255);
[0041] (43)   Local[3] = getActorX(1);
[0046] (23)   Local[4] = getActorY(1);
[004B] (11)   animateCostume(1,246);
[004E] (80)   breakHere();
[004F] (A8)   if (Bit[67]) {
[0054] (13)     ActorOps(1,[Costume(41)]);
[0059] (18)   } else {
[005C] (13)     ActorOps(1,[Costume(42)]);
[0061] (**)   }
[0061] (48)   if (VAR_VIDEOMODE == 4) {
[0068] (13)     ActorOps(1,[Palette(8,0),Palette(7,15)]);
[0071] (**)   }
[0071] (11)   animateCostume(1,6);
[0074] (80)   breakHere();
[0075] (80)   breakHere();
[0076] (5D)   setClass(1,[0,148]);
[0080] (1A)   Local[2] = 1;
[0085] (80)   breakHere();
[0086] (46)   Local[2]++;
[0089] (44)   unless (Local[2] > 24) goto 0085;
[0090] (5A)   Local[3] += 5;
[0095] (5A)   Local[4] += 60;
[009A] (A8)   if (Bit[119]) {
[009F] (1A)     Local[4] = 120;
[00A4] (5A)     Local[4] += 2;
[00A9] (**)   }
[00A9] (61)   putActor(1,Local[3],Local[4]);
[00AF] (11)   animateCostume(1,249);
[00B2] (9A)   Bit[94] = Bit[67];
[00B7] (0A)   startScript(203,[]);
[00BA] (11)   animateCostume(1,6);
[00BD] (1A)   Local[2] = 1;
[00C2] (80)   breakHere();
[00C3] (46)   Local[2]++;
[00C6] (44)   unless (Local[2] > 13) goto 00C2;
[00CD] (5A)   Local[3] += 32;
[00D2] (7E)   walkActorTo(1,Local[3],Local[4]);
[00D8] (AE)   WaitForActor(1);
[00DB] (11)   animateCostume(1,250);
[00DE] (80)   breakHere();
[00DF] (11)   animateCostume(1,3);
[00E2] (11)   animateCostume(1,255);
[00E5] (07)   setState(632,1);
[00E9] (0A)   startScript(108,[]);
[00EC] (1A)   Var[261] = 96;
[00F1] (14)   print(1,[Center(),Pos(160,Var[261])]);
[00FA] (80)   breakHere();
[00FB] (5D)   setClass(962,[24]);
[0102] (C0)   endCutscene();
[0103] (48) } else if (Local[0] == 7) {
[010D] (11)   animateCostume(1,255);
[0110] (40)   cutscene([0]);
[0115] (1E)   walkActorTo(1,280,120);
[011B] (AE)   WaitForActor(1);
[011E] (11)   animateCostume(1,251);
[0121] (13)   ActorOps(1,[Costume(44),Elevation(0),WalkSpeed(4,2),InitAnimNr(1)]);
[012E] (48)   if (VAR_VIDEOMODE == 4) {
[0135] (13)     ActorOps(1,[Palette(8,0),Palette(7,15)]);
[013E] (**)   }
[013E] (A8)   if (Bit[94]) {
[0143] (13)     ActorOps(1,[WalkAnimNr(2),StandAnimNr(3)]);
[014A] (18)   } else {
[014D] (13)     ActorOps(1,[WalkAnimNr(6),StandAnimNr(7)]);
[0154] (**)   }
[0154] (5D)   setClass(1,[150]);
[015B] (1E)   walkActorTo(1,280,100);
[0161] (1A)   Local[2] = 1;
[0166] (80)   breakHere();
[0167] (46)   Local[2]++;
[016A] (44)   unless (Local[2] > 10) goto 0166;
[0171] (0A)   startScript(204,[]);
[0174] (9A)   Bit[67] = Bit[94];
[0179] (5D)   setClass(1,[0]);
[0180] (0A)   startScript(126,[0,28]);
[0189] (5D)   setClass(1,[22]);
[0190] (1E)   walkActorTo(1,280,90);
[0196] (AE)   WaitForActor(1);
[0199] (11)   animateCostume(1,246);
[019C] (80)   breakHere();
[019D] (80)   breakHere();
[019E] (1A)   Var[261] = 112;
[01A3] (A8)   if (Bit[67]) {
[01A8] (0A)     startScript(134,[2]);
[01AE] (**)   }
[01AE] (14)   print(1,[Center(),Pos(160,Var[261])]);
[01B7] (80)   breakHere();
[01B8] (5D)   setClass(962,[152]);
[01BF] (C0)   endCutscene();
[01C0] (18)   /* goto 01C3; */
[01C3] (**) }
[01C3] (18) goto 0005;
[01C6] (A0) stopObjectCode();
END

Script# 201
[0000] (05) drawObject(626,255,255);
[0007] (80) breakHere();
[0008] (05) drawObject(629,255,255);
[000F] (80) breakHere();
[0010] (05) drawObject(627,255,255);
[0017] (80) breakHere();
[0018] (05) drawObject(630,255,255);
[001F] (80) breakHere();
[0020] (05) drawObject(628,255,255);
[0027] (80) breakHere();
[0028] (05) drawObject(631,255,255);
[002F] (80) breakHere();
[0030] (05) drawObject(627,255,255);
[0037] (80) breakHere();
[0038] (05) drawObject(630,255,255);
[003F] (80) breakHere();
[0040] (18) goto 0000;
[0043] (A0) stopObjectCode();
END

Script# 202
[0000] (0C) Resource.loadCostume(45);
[0003] (5D) setClass(3,[0,148,150]);
[0010] (13) ActorOps(3,[Costume(45),Elevation(0),WalkSpeed(4,2),InitAnimNr(6),WalkAnimNr(6),StandAnimNr(6)]);
[0021] (11) animateCostume(3,248);
[0024] (2D) putActorInRoom(3,46);
[0027] (61) putActor(3,Local[0],Local[1]);
[002D] (A0) stopObjectCode();
END

Script# 203
[0000] (5D) setClass(625,[152]);
[0007] (5D) setClass(633,[152]);
[000E] (A8) if (Bit[119]) {
[0013] (5D)   setClass(634,[24]);
[001A] (18) } else {
[001D] (5D)   setClass(634,[152]);
[0024] (**) }
[0024] (5D) setClass(623,[152]);
[002B] (5D) setClass(624,[152]);
[0032] (5D) setClass(635,[152]);
[0039] (5D) setClass(636,[152]);
[0040] (5D) setClass(637,[152]);
[0047] (5D) setClass(638,[152]);
[004E] (5D) setClass(639,[152]);
[0055] (5D) setClass(1,[0,148]);
[005F] (1A) Bit[67] = 0;
[0064] (1A) Var[220] = 43;
[0069] (1A) Var[219] = 0;
[006E] (13) ActorOps(1,[Costume(43),Elevation(0),WalkSpeed(4,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(15)]);
[0084] (48) if (VAR_VIDEOMODE == 4) {
[008B] (13)   ActorOps(1,[Palette(8,0),Palette(7,15)]);
[0094] (**) }
[0094] (1A) Var[209] = 1;
[0099] (1A) Var[210] = 2;
[009E] (1A) Var[211] = 3;
[00A3] (1A) Var[212] = 4;
[00A8] (1A) Var[213] = 5;
[00AD] (A0) stopObjectCode();
END

Script# 204
[0000] (A8) if (Bit[119]) {
[0005] (5D)   setClass(625,[24]);
[000C] (5D)   setClass(633,[152]);
[0013] (18) } else {
[0016] (5D)   setClass(625,[152]);
[001D] (5D)   setClass(633,[24]);
[0024] (**) }
[0024] (5D) setClass(634,[152]);
[002B] (5D) setClass(623,[24]);
[0032] (5D) setClass(624,[24]);
[0039] (5D) setClass(635,[24]);
[0040] (28) if (!Bit[114]) {
[0045] (A8)   if (Bit[124]) {
[004A] (5D)     setClass(636,[152]);
[0051] (18)   } else {
[0054] (5D)     setClass(636,[24]);
[005B] (**)   }
[005B] (5D)   setClass(637,[24]);
[0062] (5D)   setClass(638,[24]);
[0069] (5D)   setClass(639,[24]);
[0070] (18) } else {
[0073] (5D)   setClass(636,[152]);
[007A] (5D)   setClass(637,[152]);
[0081] (5D)   setClass(638,[152]);
[0088] (5D)   setClass(639,[152]);
[008F] (**) }
[008F] (A0) stopObjectCode();
END

Script# 205
[0000] (40) cutscene([0]);
[0005] (0A) startScript(116,[]);
[0008] (0A) startScript(127,[0]);
[000E] (9A) Local[2] = Var[170 + 0];
[0015] (8A) startScript(Local[0],[Local[2]]);
[001C] (80) breakHere();
[001D] (E8) VAR_RESULT = isScriptRunning(Local[0]);
[0022] (28) unless (!VAR_RESULT) goto 001C;
[0027] (1A) Local[3] = 1;
[002C] (9A) Local[2] = Var[170 + Local[3]];
[0033] (08) if (Local[0] != 206) {
[003A] (0A)   startScript(206,[Local[2]]);
[0040] (80)   breakHere();
[0041] (68)   VAR_RESULT = isScriptRunning(206);
[0045] (28)   unless (!VAR_RESULT) goto 0040;
[004A] (46)   Local[3]++;
[004D] (9A)   Local[2] = Var[170 + Local[3]];
[0054] (**) }
[0054] (08) if (Local[0] != 207) {
[005B] (0A)   startScript(207,[Local[2]]);
[0061] (80)   breakHere();
[0062] (68)   VAR_RESULT = isScriptRunning(207);
[0066] (28)   unless (!VAR_RESULT) goto 0061;
[006B] (46)   Local[3]++;
[006E] (9A)   Local[2] = Var[170 + Local[3]];
[0075] (**) }
[0075] (08) if (Local[0] != 208) {
[007C] (0A)   startScript(208,[Local[2]]);
[0082] (80)   breakHere();
[0083] (68)   VAR_RESULT = isScriptRunning(208);
[0087] (28)   unless (!VAR_RESULT) goto 0082;
[008C] (46)   Local[3]++;
[008F] (9A)   Local[2] = Var[170 + Local[3]];
[0096] (**) }
[0096] (08) if (Local[0] != 209) {
[009D] (0A)   startScript(209,[Local[2]]);
[00A3] (80)   breakHere();
[00A4] (68)   VAR_RESULT = isScriptRunning(209);
[00A8] (28)   unless (!VAR_RESULT) goto 00A3;
[00AD] (**) }
[00AD] (0A) startScript(128,[0]);
[00B3] (C0) endCutscene();
[00B4] (A0) stopObjectCode();
END

Script# 206
[0000] (11) animateCostume(5,4);
[0003] (0A) startScript(113,[Local[0]]);
[0009] (80) breakHere();
[000A] (28) unless (!Bit[72]) goto 0009;
[000F] (A8) if (Bit[124]) {
[0014] (11)   animateCostume(5,8);
[0017] (18) } else {
[001A] (11)   animateCostume(5,3);
[001D] (**) }
[001D] (80) breakHere();
[001E] (A0) stopObjectCode();
END

Script# 207
[0000] (0A) startScript(113,[Local[0]]);
[0006] (80) breakHere();
[0007] (80) breakHere();
[0008] (80) breakHere();
[0009] (05) drawObject(643,255,255);
[0010] (80) breakHere();
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (05) drawObject(640,255,255);
[001B] (80) breakHere();
[001C] (28) unless (!Bit[72]) goto 001B;
[0021] (80) breakHere();
[0022] (A0) stopObjectCode();
END

Script# 208
[0000] (0A) startScript(113,[Local[0]]);
[0006] (80) breakHere();
[0007] (80) breakHere();
[0008] (80) breakHere();
[0009] (05) drawObject(644,255,255);
[0010] (80) breakHere();
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (05) drawObject(641,255,255);
[001B] (80) breakHere();
[001C] (28) unless (!Bit[72]) goto 001B;
[0021] (80) breakHere();
[0022] (A0) stopObjectCode();
END

Script# 209
[0000] (0A) startScript(113,[Local[0]]);
[0006] (80) breakHere();
[0007] (80) breakHere();
[0008] (80) breakHere();
[0009] (05) drawObject(645,255,255);
[0010] (80) breakHere();
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (05) drawObject(642,255,255);
[001B] (80) breakHere();
[001C] (28) unless (!Bit[72]) goto 001B;
[0021] (80) breakHere();
[0022] (A0) stopObjectCode();
END

Script# 210 // Draft Won't Work
[0000] (14) print(1,[Center(),Text("That draft won't work on a gull.")]);
[0025] (A0) stopObjectCode();
END

Script# 211
[0000] (1A) Bit[73] = 1;
[0005] (80) breakHere();
[0006] (28) unless (!Bit[72]) goto 0005;
[000B] (1A) Bit[70] = 0;
[0010] (80) breakHere();
[0011] (28) unless (!Bit[71]) goto 0010;
[0016] (5D) setClass(7,[0,150,148]);
[0023] (13) ActorOps(7,[Costume(31),Elevation(100)]);
[002B] (11) animateCostume(7,250);
[002E] (1A) Local[1] = 101;
[0033] (5A) Local[1] += 100;
[0038] (2D) putActorInRoom(7,46);
[003B] (21) putActor(7,65,Local[1]);
[0041] (2A) startScript(112,[23],F);
[0047] (11) animateCostume(7,6);
[004A] (1A) Local[0] = 1;
[004F] (80) breakHere();
[0050] (46) Local[0]++;
[0053] (44) unless (Local[0] > 6) goto 004F;
[005A] (11) animateCostume(7,7);
[005D] (1A) Local[0] = 1;
[0062] (80) breakHere();
[0063] (46) Local[0]++;
[0066] (44) unless (Local[0] > 24) goto 0062;
[006D] (11) animateCostume(7,8);
[0070] (1A) Local[0] = 1;
[0075] (80) breakHere();
[0076] (46) Local[0]++;
[0079] (44) unless (Local[0] > 6) goto 0075;
[0080] (2D) putActorInRoom(7,0);
[0083] (80) breakHere();
[0084] (A0) stopObjectCode();
END

Script# 212
[0000] (40) cutscene([0]);
[0005] (0A) startScript(211,[]);
[0008] (80) breakHere();
[0009] (68) VAR_RESULT = isScriptRunning(211);
[000D] (28) unless (!VAR_RESULT) goto 0008;
[0012] (A8) if (Bit[123]) {
[0017] (1A)   Var[320] = 648;
[001C] (11)   animateCostume(6,8);
[001F] (80)   breakHere();
[0020] (80)   breakHere();
[0021] (80)   breakHere();
[0022] (18) } else {
[0025] (1A)   Var[320] = 647;
[002A] (11)   animateCostume(6,6);
[002D] (80)   breakHere();
[002E] (80)   breakHere();
[002F] (80)   breakHere();
[0030] (28)   if (!Bit[114]) {
[0035] (1A)     Bit[124] = 1;
[003A] (5D)     setClass(636,[152]);
[0041] (11)     animateCostume(5,250);
[0044] (80)     breakHere();
[0045] (1E)     walkActorTo(5,38,96);
[004B] (AE)     WaitForActor(5);
[004E] (01)     putActor(5,56,105);
[0054] (11)     animateCostume(5,249);
[0057] (11)     animateCostume(5,6);
[005A] (1A)     Local[0] = 1;
[005F] (80)     breakHere();
[0060] (46)     Local[0]++;
[0063] (44)     unless (Local[0] > 7) goto 005F;
[006A] (11)     animateCostume(5,3);
[006D] (80)     breakHere();
[006E] (80)     breakHere();
[006F] (80)     breakHere();
[0070] (80)     breakHere();
[0071] (11)     animateCostume(5,8);
[0074] (80)     breakHere();
[0075] (**)   }
[0075] (**) }
[0075] (0A) startScript(100,[635]);
[007B] (80) breakHere();
[007C] (C0) endCutscene();
[007D] (0A) startScript(127,[0]);
[0083] (28) if (!Bit[76]) {
[0088] (0A)   startScript(129,[0]);
[008E] (0A)   startScript(127,[2]);
[0094] (A8)   if (Bit[76]) {
[0099] (0A)     startScript(127,[1]);
[009F] (A8)     if (Bit[76]) {
[00A4] (28)       if (!Bit[13]) {
[00A9] (0A)         startScript(133,[4,12]);
[00B2] (**)       }
[00B2] (**)     }
[00B2] (**)   }
[00B2] (**) }
[00B2] (A0) stopObjectCode();
END

Script# 213
[0000] (40) cutscene([0]);
[0005] (0A) startScript(211,[]);
[0008] (80) breakHere();
[0009] (68) VAR_RESULT = isScriptRunning(211);
[000D] (28) unless (!VAR_RESULT) goto 0008;
[0012] (A8) if (Bit[123]) {
[0017] (11)   animateCostume(6,9);
[001A] (18) } else {
[001D] (11)   animateCostume(6,7);
[0020] (**) }
[0020] (80) breakHere();
[0021] (80) breakHere();
[0022] (80) breakHere();
[0023] (1A) Var[320] = 646;
[0028] (0A) startScript(100,[635]);
[002E] (80) breakHere();
[002F] (C0) endCutscene();
[0030] (A0) stopObjectCode();
END

Script# 214
[0000] (A8) if (Bit[124]) {
[0005] (1A)   Bit[124] = 0;
[000A] (1A)   Bit[123] = 1;
[000F] (48)   if (Var[320] == 647) {
[0016] (1A)     Var[320] = 648;
[001B] (**)   }
[001B] (**) }
[001B] (A0) stopObjectCode();
END

// Object 623
Events:
   A - 0018
[0018] (0A) startScript(214,[]);
[001B] (24) loadRoomWithEgo(512,39,136,86);
[0023] (00) stopObjectCode();
END

// Object 624
Events:
   A - 0018
[0018] (0A) startScript(214,[]);
[001B] (62) stopScript(123);
[001D] (24) loadRoomWithEgo(542,41,40,128);
[0025] (00) stopObjectCode();
END

// Objects 625-634
Events:
END

// Object 635: Clam
Events:
   1 - 0090
   2 - 00C9
  36 - 002E
  38 - 0028
  53 - 014F
[0028] (9A) Var[200] = Var[320];
[002D] (00) stopObjectCode();
[002E] (48) if (Var[320] == 646) {
[0035] (14)   print(1,[Center(),Text("Closed tight as a ... clam.")]);
[0055] (48) } else if (Var[320] == 647) {
[005F] (14)   print(1,[Center(),Text("Yuck.")]);
[0069] (18) } else {
[006C] (14)   print(1,[Center(),Text("Looks as if breakfast is over.")]);
[008F] (**) }
[008F] (00) stopObjectCode();
[0090] (48) if (Var[320] == 646) {
[0097] (0A)   startScript(212,[]);
[009A] (18) } else {
[009D] (0A)   startScript(110,[7,65,101,100]);
[00AC] (14)   print(1,[Center(),Text("It's already wide open.")]);
[00C8] (**) }
[00C8] (00) stopObjectCode();
[00C9] (08) if (Var[320] != 646) {
[00D0] (A8)   if (Bit[124]) {
[00D5] (40)     cutscene([0]);
[00DA] (1A)     Bit[73] = 1;
[00DF] (80)     breakHere();
[00E0] (28)     unless (!Bit[72]) goto 00DF;
[00E5] (1A)     Bit[70] = 0;
[00EA] (80)     breakHere();
[00EB] (28)     unless (!Bit[71]) goto 00EA;
[00F0] (14)     print(1,[Center(),Text("Shame to ruin the gull's breakfast.")]);
[0118] (C0)     endCutscene();
[0119] (18)   } else {
[011C] (0A)     startScript(213,[]);
[011F] (**)   }
[011F] (18) } else {
[0122] (0A)   startScript(110,[7,65,101,100]);
[0131] (14)   print(1,[Center(),Text("It's already shut tight.")]);
[014E] (**) }
[014E] (00) stopObjectCode();
[014F] (0A) startScript(110,[7,65,101,100]);
[015E] (14) print(1,[Center(),Text("That draft won't work on the clam.")]);
[0185] (00) stopObjectCode();
END

// Object 636: Gull 1
Events:
  36 - 0028
  38 - 0022
  53 - 002F
[0022] (1A) Var[200] = 649;
[0027] (00) stopObjectCode();
[0028] (0A) startScript(205,[206]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(110,[7,37,58,100]);
[003E] (0A) startScript(210,[]);
[0041] (00) stopObjectCode();
END

// Object 637: Gull 2
Events:
  36 - 0028
  38 - 0022
  53 - 002F
[0022] (1A) Var[200] = 649;
[0027] (00) stopObjectCode();
[0028] (0A) startScript(205,[207]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(110,[7,105,47,100]);
[003E] (0A) startScript(210,[]);
[0041] (00) stopObjectCode();
END

// Object 638: Gull 3
Events:
  36 - 0028
  38 - 0022
  53 - 002F
[0022] (1A) Var[200] = 649;
[0027] (00) stopObjectCode();
[0028] (0A) startScript(205,[208]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(110,[7,146,16,100]);
[003E] (0A) startScript(210,[]);
[0041] (00) stopObjectCode();
END

// Object 639: Gull 4
Events:
  36 - 0028
  38 - 0022
  53 - 002F
[0022] (1A) Var[200] = 649;
[0027] (00) stopObjectCode();
[0028] (0A) startScript(205,[209]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(110,[7,228,25,100]);
[003E] (0A) startScript(210,[]);
[0041] (00) stopObjectCode();
END

// Objects 640-649
Events:
END

// Object 962
Events:
END
