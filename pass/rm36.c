/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 36: pan
 */

// EN
[0000] (0C) Resource.loadCostume(88);
[0003] (5D) setClass(12,[0,150,148]);
[0010] (13) ActorOps(12,[Costume(88),Elevation(0)]);
[0018] (11) animateCostume(12,250);
[001B] (2D) putActorInRoom(12,36);
[001E] (01) putActor(12,433,129);
[0024] (11) animateCostume(12,3);
[0027] (0C) Resource.loadCostume(32);
[002A] (2A) startScript(111,[25],F);
[0030] (28) if (!Bit[66]) {
[0035] (72)   loadRoom(37);
[0037] (**) }
[0037] (48) if (VAR_VIDEOMODE == 4) {
[003E] (33)   RoomColor(5,12)
[0044] (**) }
[0044] (0A) startScript(136,[112]);
[004A] (28) if (!Bit[82]) {
[004F] (28)   if (!Bit[79]) {
[0054] (0A)     startScript(126,[Var[219]]);
[005A] (**)   }
[005A] (07)   setState(464,0);
[005E] (A8)   if (Bit[105]) {
[0063] (07)     setState(462,1);
[0067] (11)     animateCostume(4,255);
[006A] (2D)     putActorInRoom(4,0);
[006D] (18)   } else {
[0070] (07)     setState(462,0);
[0074] (A8)     if (Bit[67]) {
[0079] (0C)       Resource.loadCostume(89);
[007C] (**)     }
[007C] (1D)     if (classOfIs(461,[24])) {
[0085] (0A)       startScript(200,[]);
[0088] (18)     } else {
[008B] (11)       animateCostume(4,255);
[008E] (2D)       putActorInRoom(4,0);
[0091] (**)     }
[0091] (**)   }
[0091] (28)   if (!Bit[79]) {
[0096] (0A)     startScript(145,[]);
[0099] (A6)     setVarRange(Var[299],5,[660,626,485,541,561]);
[00A7] (26)     setVarRange(Var[307],5,[8,17,40,13,9]);
[00B0] (2A)     startScript(123,[5],F);
[00B6] (**)   }
[00B6] (18)   /* goto 00B9; */
[00B9] (**) }
[00B9] (0C) Resource.loadScript(145);
[00BC] (00) stopObjectCode();
END

// EX
[0000] (62) stopScript(111);
[0002] (3C) stopSound(25);
[0004] (62) stopScript(145);
[0006] (00) stopObjectCode();
END

Script# 200
[0000] (5D) setClass(461,[24]);
[0007] (5D) setClass(4,[0,150,148]);
[0014] (13) ActorOps(4,[Costume(35),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[0025] (11) animateCostume(4,250);
[0028] (2D) putActorInRoom(4,36);
[002B] (01) putActor(4,807,25);
[0031] (11) animateCostume(4,3);
[0034] (A0) stopObjectCode();
END

Script# 201
[0000] (1E) walkActorTo(3,804,32);
[0006] (AE) WaitForActor(3);
[0009] (1E) walkActorTo(3,925,54);
[000F] (AE) WaitForActor(3);
[0012] (1E) walkActorTo(3,884,63);
[0018] (AE) WaitForActor(3);
[001B] (13) ActorOps(3,[InitAnimNr(7),WalkAnimNr(7),StandAnimNr(7)]);
[0024] (01) putActor(3,775,108);
[002A] (80) breakHere();
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (80) breakHere();
[002E] (80) breakHere();
[002F] (80) breakHere();
[0030] (1E) walkActorTo(3,740,100);
[0036] (AE) WaitForActor(3);
[0039] (1E) walkActorTo(3,685,113);
[003F] (AE) WaitForActor(3);
[0042] (1E) walkActorTo(3,634,113);
[0048] (AE) WaitForActor(3);
[004B] (2D) putActorInRoom(3,0);
[004E] (80) breakHere();
[004F] (A0) stopObjectCode();
END

Script# 202
[0000] (80) breakHere();
[0001] (09) faceActor(1,3);
[0005] (68) VAR_RESULT = isScriptRunning(201);
[0009] (28) unless (!VAR_RESULT) goto 0000;
[000E] (A0) stopObjectCode();
END

Script# 203
[0000] (80) breakHere();
[0001] (A0) stopObjectCode();
END

Script# 204
[0000] (80) breakHere();
[0001] (33) SetPalColor(1,5)
[0007] (80) breakHere();
[0008] (33) SetPalColor(9,5)
[000E] (80) breakHere();
[000F] (33) SetPalColor(11,5)
[0015] (80) breakHere();
[0016] (33) SetPalColor(15,5)
[001C] (2E) delay(360);
[0020] (33) SetPalColor(11,5)
[0026] (80) breakHere();
[0027] (33) SetPalColor(9,5)
[002D] (80) breakHere();
[002E] (33) SetPalColor(1,5)
[0034] (80) breakHere();
[0035] (33) SetPalColor(0,5)
[003B] (80) breakHere();
[003C] (2E) delay(60);
[0040] (1A) Bit[85] = 1;
[0045] (A0) stopObjectCode();
END

Script# 205
[0000] (A0) stopObjectCode();
END

Script# 206
[0000] (A0) stopObjectCode();
END

Script# 207
[0000] (A0) stopObjectCode();
END

Script# 208
[0000] (A0) stopObjectCode();
END

Script# 209
[0000] (48) if (VAR_SOUNDCARD == 3) {
[0007] (48) } else if (VAR_SOUNDCARD == 2) {
[0011] (48) } else if (VAR_SOUNDCARD == 4) {
[001B] (14)   print(255,[Center()]);
[001F] (48) } else if (VAR_VIDEOMODE == 9) {
[0029] (14)   print(255,[Center()]);
[002D] (18) } else {
[0030] (14)   print(255,[Center()]);
[0034] (**) }
[0034] (A0) stopObjectCode();
END

Script# 210
[0000] (A0) stopObjectCode();
END

Script# 211
[0000] (A0) stopObjectCode();
END

Script# 212
[0000] (48) if (VAR_VIDEOMODE == 9) {
[0007] (18)   /* goto 000A; */
[000A] (**) }
[000A] (A0) stopObjectCode();
END

Script# 213
[0000] (A0) stopObjectCode();
END

Script# 214
[0000] (A0) stopObjectCode();
END

Script# 215
[0000] (A0) stopObjectCode();
END

Script# 216
[0000] (A0) stopObjectCode();
END

Script# 217
[0000] (A0) stopObjectCode();
END

Script# 218
[0000] (A0) stopObjectCode();
END

Script# 219
[0000] (A0) stopObjectCode();
END

Script# 220
[0000] (A0) stopObjectCode();
END

Script# 221
[0000] (A0) stopObjectCode();
END

Script# 222
[0000] (A0) stopObjectCode();
END

Script# 223
[0000] (1A) Local[0] = 1;
[0005] (80) breakHere();
[0006] (13) ActorOps(3,[Elevation(Local[0])]);
[000C] (46) Local[0]++;
[000F] (44) unless (Local[0] > 6) goto 0005;
[0016] (1A) Local[0] = 5;
[001B] (80) breakHere();
[001C] (13) ActorOps(3,[Elevation(Local[0])]);
[0022] (C6) Local[0]--;
[0025] (78) unless (Local[0] < 0) goto 001B;
[002C] (18) goto 0000;
[002F] (A0) stopObjectCode();
END

Script# 224
[0000] (5D) setClass(12,[0,150,149]);
[000D] (A0) stopObjectCode();
END

Script# 225
[0000] (2D) putActorInRoom(1,36);
[0003] (61) putActor(1,Local[0],Local[1]);
[0009] (11) animateCostume(1,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(1,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 226
[0000] (2D) putActorInRoom(2,36);
[0003] (61) putActor(2,Local[0],Local[1]);
[0009] (11) animateCostume(2,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(2,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 227
[0000] (2D) putActorInRoom(3,36);
[0003] (61) putActor(3,Local[0],Local[1]);
[0009] (11) animateCostume(3,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(3,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 228
[0000] (2D) putActorInRoom(4,36);
[0003] (61) putActor(4,Local[0],Local[1]);
[0009] (11) animateCostume(4,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(4,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 229
[0000] (2D) putActorInRoom(5,36);
[0003] (61) putActor(5,Local[0],Local[1]);
[0009] (11) animateCostume(5,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(5,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 230
[0000] (2D) putActorInRoom(6,36);
[0003] (61) putActor(6,Local[0],Local[1]);
[0009] (11) animateCostume(6,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(6,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 231
[0000] (2D) putActorInRoom(7,36);
[0003] (61) putActor(7,Local[0],Local[1]);
[0009] (11) animateCostume(7,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(7,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 232
[0000] (2D) putActorInRoom(8,36);
[0003] (61) putActor(8,Local[0],Local[1]);
[0009] (11) animateCostume(8,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(8,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 233
[0000] (2D) putActorInRoom(9,36);
[0003] (61) putActor(9,Local[0],Local[1]);
[0009] (11) animateCostume(9,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(9,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 234
[0000] (2D) putActorInRoom(10,36);
[0003] (61) putActor(10,Local[0],Local[1]);
[0009] (11) animateCostume(10,6);
[000C] (1A) Local[2] = 1;
[0011] (80) breakHere();
[0012] (46) Local[2]++;
[0015] (44) unless (Local[2] > 12) goto 0011;
[001C] (2D) putActorInRoom(10,0);
[001F] (80) breakHere();
[0020] (A0) stopObjectCode();
END

Script# 235
[0000] (1A) Local[0] = 3;
[0005] (DD) setClass(Local[0],[0,150,149]);
[0012] (93) ActorOps(Local[0],[Costume(90),Elevation(0),WalkSpeed(2,1),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[0024] (91) animateCostume(Local[0],248);
[0028] (46) Local[0]++;
[002B] (44) unless (Local[0] > 9) goto 0005;
[0032] (2D) putActorInRoom(3,36);
[0035] (01) putActor(3,264,72);
[003B] (1E) walkActorTo(3,60,72);
[0041] (80) breakHere();
[0042] (80) breakHere();
[0043] (80) breakHere();
[0044] (80) breakHere();
[0045] (2D) putActorInRoom(4,36);
[0048] (01) putActor(4,264,73);
[004E] (1E) walkActorTo(4,60,76);
[0054] (80) breakHere();
[0055] (80) breakHere();
[0056] (80) breakHere();
[0057] (2D) putActorInRoom(5,36);
[005A] (01) putActor(5,264,71);
[0060] (1E) walkActorTo(5,60,68);
[0066] (80) breakHere();
[0067] (80) breakHere();
[0068] (80) breakHere();
[0069] (2D) putActorInRoom(6,36);
[006C] (01) putActor(6,264,74);
[0072] (1E) walkActorTo(6,60,80);
[0078] (80) breakHere();
[0079] (80) breakHere();
[007A] (80) breakHere();
[007B] (2D) putActorInRoom(7,36);
[007E] (01) putActor(7,264,70);
[0084] (1E) walkActorTo(7,60,64);
[008A] (80) breakHere();
[008B] (80) breakHere();
[008C] (80) breakHere();
[008D] (2D) putActorInRoom(8,36);
[0090] (01) putActor(8,264,75);
[0096] (1E) walkActorTo(8,60,84);
[009C] (80) breakHere();
[009D] (80) breakHere();
[009E] (80) breakHere();
[009F] (2D) putActorInRoom(9,36);
[00A2] (01) putActor(9,264,69);
[00A8] (1E) walkActorTo(9,60,60);
[00AE] (AE) WaitForActor(9);
[00B1] (1A) Local[0] = 3;
[00B6] (AD) putActorInRoom(Local[0],0);
[00BA] (80) breakHere();
[00BB] (46) Local[0]++;
[00BE] (44) unless (Local[0] > 9) goto 00B6;
[00C5] (80) breakHere();
[00C6] (A0) stopObjectCode();
END

// Object 460: Path
Events:
   A - 0018
[0018] (1D) if (classOfIs(460,[3])) {
[0021] (40)   cutscene([0]);
[0026] (5D)   setClass(460,[131]);
[002D] (12)   panCameraTo(440);
[0030] (80)   breakHere();
[0031] (04)   unless (VAR_CAMERA_POS_X <= 440) goto 0030;
[0038] (2E)   delay(60);
[003C] (C0)   endCutscene();
[003D] (**) }
[003D] (24) loadRoomWithEgo(509,39,250,68);
[0045] (00) stopObjectCode();
END

// Object 461: Leaf
Events:
  36 - 002E
  38 - 0028
  3E - 002E
  3F - 002E
  53 - 008E
[0028] (1A) Var[200] = 465;
[002D] (00) stopObjectCode();
[002E] (40) cutscene([0]);
[0033] (1A) Bit[73] = 1;
[0038] (5D) setClass(461,[152]);
[003F] (1A) Var[199] = 0;
[0044] (0A) startScript(100,[0]);
[004A] (1E) walkActorTo(4,807,152);
[0050] (1A) Local[2] = 1;
[0055] (80) breakHere();
[0056] (46) Local[2]++;
[0059] (44) unless (Local[2] > 8) goto 0055;
[0060] (11) animateCostume(1,246);
[0063] (80) breakHere();
[0064] (80) breakHere();
[0065] (14) print(1,[Center(),Pos(160,Var[261]),Text("Last leaf of the year.")]);
[0085] (80) breakHere();
[0086] (C0) endCutscene();
[0087] (AE) WaitForActor(4);
[008A] (2D) putActorInRoom(4,0);
[008D] (00) stopObjectCode();
[008E] (0A) startScript(110,[5,807,27,100]);
[009D] (14) print(1,[Center(),Text("That draft won't work on a leaf.")]);
[00C2] (00) stopObjectCode();
END

// Object 462
Events:
END

// Object 463
Events:
   1 - 003B
   2 - 003F
  36 - 0030
  38 - 002A
  3D - 008D
  53 - 00F5
[002A] (1A) Var[200] = 466;
[002F] (00) stopObjectCode();
[0030] (14) print(1,[Center(),Text("Dawn.")]);
[003A] (00) stopObjectCode();
[003B] (0A) startScript(144,[]);
[003E] (00) stopObjectCode();
[003F] (1A) Bit[73] = 1;
[0044] (A8) if (Bit[105]) {
[0049] (14)   print(1,[Center(),Text("Seems to have closed itself.")]);
[006A] (18) } else {
[006D] (14)   print(1,[Center(),Text("I'd have to open it first.")]);
[008C] (**) }
[008C] (00) stopObjectCode();
[008D] (1A) Bit[73] = 1;
[0092] (A8) if (Bit[105]) {
[0097] (14)   print(1,[Center(),Text("Got enough light out of it already!")]);
[00BF] (18) } else {
[00C2] (14)   print(1,[Center(),Text("Didn't work. Oh, well." + newline() + "Dawn's coming anyway.")]);
[00F4] (**) }
[00F4] (00) stopObjectCode();
[00F5] (0A) startScript(110,[5,687,37]);
[0101] (14) print(1,[Center(),Text("That draft won't work on the sky.")]);
[0127] (00) stopObjectCode();
END

// Object 464
Events:
END

// Object 465
Events:
END

// Object 466
Events:
END
