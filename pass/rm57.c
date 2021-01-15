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
[0013] (1A) VAR_VERB_SCRIPT = 212;
[0018] (1A) Var[155] = 0;
[001D] (2A) startScript(200,[],F);
[0020] (78) if (Var[376] < 3) {
[0027] (13)   ActorOps(10,[Init(),Costume(22),Scale(255)]);
[002F] (5D)   setClass(10,[141,150,148]);
[003C] (2D)   putActorInRoom(10,57);
[003F] (01)   putActor(10,50,123);
[0045] (78)   if (Var[377] < 5) {
[004C] (13)     ActorOps(9,[Init(),Costume(23)]);
[0052] (48)     if (VAR_VIDEOMODE == 30) {
[0059] (13)       ActorOps(9,[Palette(8,15)]);
[005F] (**)     }
[005F] (2D)     putActorInRoom(9,57);
[0062] (01)     putActor(9,72,135);
[0068] (11)     animateCostume(9,248);
[006B] (11)     animateCostume(9,3);
[006E] (0A)     startScript(215,[]);
[0071] (**)   }
[0071] (2A)   startScript(213,[],F);
[0074] (**) }
[0074] (48) if (Var[104] == 56) {
[007B] (40)   cutscene([2]);
[0080] (0A)   startScript(203,[]);
[0083] (80)   breakHere();
[0084] (68)   VAR_RESULT = isScriptRunning(203);
[0088] (28)   unless (!VAR_RESULT) goto 0083;
[008D] (C0)   endCutscene();
[008E] (9E)   walkActorTo(VAR_EGO,160,116);
[0095] (48) } else if (Var[104] == 55) {
[009F] (40)   cutscene([2]);
[00A4] (0A)   startScript(202,[]);
[00A7] (80)   breakHere();
[00A8] (68)   VAR_RESULT = isScriptRunning(202);
[00AC] (28)   unless (!VAR_RESULT) goto 00A7;
[00B1] (C0)   endCutscene();
[00B2] (9E)   walkActorTo(VAR_EGO,413,131);
[00B9] (48) } else if (Var[104] == 2) {
[00C3] (FB)   VAR_RESULT = getActorWalkBox(VAR_EGO);
[00C8] (48)   if (VAR_RESULT == 21) {
[00CF] (2A)     startScript(209,[],F);
[00D2] (**)   }
[00D2] (FB)   VAR_RESULT = getActorWalkBox(VAR_EGO);
[00D7] (48)   if (VAR_RESULT == 22) {
[00DE] (2A)     startScript(209,[],F);
[00E1] (**)   }
[00E1] (18)   /* goto 00E4; */
[00E4] (**) }
[00E4] (1A) Var[374] = 211;
[00E9] (2A) startScript(83,[10,6],F);
[00F2] (00) stopObjectCode();
END

// EX
[0000] (A8) if (Var[155]) {
[0005] (5A)   Var[378] += 1;
[000A] (**) }
[000A] (93) ActorOps(VAR_EGO,[Scale(255)]);
[0010] (DD) setClass(VAR_EGO,[21,22]);
[001A] (1A) VAR_VERB_SCRIPT = 95;
[001F] (62) stopScript(83);
[0021] (0A) startScript(84,[]);
[0024] (00) stopObjectCode();
END

Script# 200 // Set up Map Seller
[0000] (13) ActorOps(3,[Init()]);
[0004] (5D) setClass(3,[0]);
[000B] (13) ActorOps(3,[Costume(17),TalkColor(12),Scale(255),Name("shady looking fellow")]);
[002A] (5D) setClass(3,[141,150,148]);
[0037] (2D) putActorInRoom(3,57);
[003A] (01) putActor(3,323,117);
[0040] (11) animateCostume(3,250);
[0043] (44) if (VAR_MACHINE_SPEED > 0) {
[004A] (11)   animateCostume(3,2);
[004D] (2A)   startScript(201,[],F);
[0050] (**) }
[0050] (A0) stopObjectCode();
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
[0014] (AD) putActorInRoom(Local[0],57);
[0018] (81) putActor(Local[0],155,72);
[001F] (93) ActorOps(Local[0],[Scale(18)]);
[0025] (80) breakHere();
[0026] (80) breakHere();
[0027] (80) breakHere();
[0028] (80) breakHere();
[0029] (80) breakHere();
[002A] (9E) walkActorTo(Local[0],160,72);
[0031] (AE) WaitForActor(Local[0]);
[0035] (91) animateCostume(Local[0],250);
[0039] (91) animateCostume(Local[0],2);
[003D] (1A) Local[2] = 21;
[0042] (93) ActorOps(Local[0],[Scale(Local[2])]);
[0049] (DD) setClass(Local[0],[21,148]);
[0053] (81) putActor(Local[0],160,72);
[005A] (1A) Local[1] = 72;
[005F] (A1) putActor(Local[0],160,Local[1]);
[0066] (93) ActorOps(Local[0],[Scale(Local[2])]);
[006D] (5A) Local[2] += 4;
[0072] (80) breakHere();
[0073] (46) Local[1]++;
[0076] (44) unless (Local[1] > 88) goto 005F;
[007D] (DD) setClass(Local[0],[22,20]);
[0087] (81) putActor(Local[0],160,88);
[008E] (A0) stopObjectCode();
END

Script# 204
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

Script# 205
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_EGO;
[000A] (**) }
[000A] (91) animateCostume(Local[0],2);
[000E] (DD) setClass(Local[0],[150,148]);
[0018] (1A) Local[2] = 85;
[001D] (93) ActorOps(Local[0],[Scale(Local[2])]);
[0024] (A3) Var[103] = getActorY(Local[0]);
[0029] (9A) Local[1] = Var[103];
[002E] (A1) putActor(Local[0],160,Local[1]);
[0035] (93) ActorOps(Local[0],[Scale(Local[2])]);
[003C] (3A) Local[2] -= 4;
[0041] (80) breakHere();
[0042] (C6) Local[1]--;
[0045] (78) unless (Local[1] < 72) goto 002E;
[004C] (80) breakHere();
[004D] (93) ActorOps(Local[0],[Scale(18)]);
[0053] (80) breakHere();
[0054] (DD) setClass(Local[0],[150,149,20]);
[0061] (9E) walkActorTo(Local[0],155,72);
[0068] (AE) WaitForActor(Local[0]);
[006C] (A0) stopObjectCode();
END

Script# 206
[0000] (1A) Local[0] = 5;
[0005] (16) Local[1] = getRandomNr(5);
[0009] (48) unless (Var[365 + Local[1]] == 0) goto 0005;
[0012] (C8) if (Local[1] == Local[0]) {
[0019] (18)   goto 0005;
[001C] (**) }
[001C] (9A) Var[365 + Local[1]] = Local[0];
[0023] (C6) Local[0]--;
[0026] (78) unless (Local[0] < 1) goto 0005;
[002D] (1A) Var[365 + 8] = 1;
[0034] (A0) stopObjectCode();
END

Script# 207
[0000] (48) if (Local[1] == 437) {
[0007] (30)   setBoxFlags(21,0);
[000B] (78)   if (Local[0] < 434) {
[0012] (81)     putActor(VAR_EGO,104,37);
[0019] (9E)     walkActorTo(VAR_EGO,128,37);
[0020] (18)   } else {
[0023] (81)     putActor(VAR_EGO,188,37);
[002A] (9E)     walkActorTo(VAR_EGO,179,37);
[0031] (**)   }
[0031] (18) } else {
[0034] (30)   setBoxFlags(22,0);
[0038] (81)   putActor(VAR_EGO,418,53);
[003F] (9E)   walkActorTo(VAR_EGO,435,53);
[0046] (**) }
[0046] (93) ActorOps(VAR_EGO,[Elevation(0)]);
[004D] (AE) WaitForActor(VAR_EGO);
[0051] (A0) stopObjectCode();
END

Script# 208
[0000] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[0005] (48) if (VAR_RESULT == 22) {
[000C] (80)   breakHere();
[000D] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[0012] (04)   unless (VAR_RESULT <= 417) goto 000C;
[0019] (18) } else {
[001C] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[0021] (44)   if (VAR_RESULT > 187) {
[0028] (62)     stopScript(0);
[002A] (**)   }
[002A] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[002F] (78)   if (VAR_RESULT < 104) {
[0036] (62)     stopScript(0);
[0038] (**)   }
[0038] (80)   breakHere();
[0039] (18)   goto 001C;
[003C] (**) }
[003C] (A0) stopObjectCode();
END

Script# 209
[0000] (2A) startScript(208,[],F);
[0003] (80) breakHere();
[0004] (68) VAR_RESULT = isScriptRunning(208);
[0008] (28) unless (!VAR_RESULT) goto 0003;
[000D] (FB) Local[0] = getActorWalkBox(VAR_EGO);
[0012] (30) setBoxFlags(Local[0],128);
[0017] (48) if (Local[0] == 21) {
[001E] (0A)   startScript(210,[437]);
[0024] (18) } else {
[0027] (0A)   startScript(210,[438]);
[002D] (**) }
[002D] (A0) stopObjectCode();
END

Script# 210
[0000] (48) if (Var[365 + 8] == 0) {
[0009] (0A)   startScript(206,[]);
[000C] (**) }
[000C] (AC) Exprmode Local[1] = (Local[0] - 433);
[0017] (AC) Exprmode Local[2] = (Var[365 + Local[1]] + 433);
[0024] (40) cutscene([]);
[0026] (78) if (Local[0] < 437) {
[002D] (6A)   startScript(26,[Local[0]],F,R);
[0033] (80)   breakHere();
[0034] (93)   ActorOps(VAR_EGO,[Elevation(300)]);
[003B] (80)   breakHere();
[003C] (80)   breakHere();
[003D] (6A)   startScript(27,[Local[0]],F,R);
[0043] (18) } else {
[0046] (1C)   startSound(82);
[0048] (80)   breakHere();
[0049] (80)   breakHere();
[004A] (80)   breakHere();
[004B] (80)   breakHere();
[004C] (93)   ActorOps(VAR_EGO,[Elevation(300)]);
[0053] (1C)   startSound(83);
[0055] (**) }
[0055] (48) if (Local[2] == 438) {
[005C] (1A)   Local[4] = 320;
[0061] (18) } else {
[0064] (C3)   Local[4] = getActorX(Local[2]);
[0069] (**) }
[0069] (AC) Exprmode Local[3] = (VAR_CAMERA_POS_X - Local[4]);
[0074] (78) if (Local[3] < 0) {
[007B] (1B)   Local[3] *= -1;
[0080] (**) }
[0080] (38) if (Local[3] >= 100) {
[0087] (92)   panCameraTo(Local[4]);
[008A] (**) }
[008A] (2E) delay(30);
[008E] (0A) startScript(70,[]);
[0091] (80) breakHere();
[0092] (68) VAR_RESULT = isScriptRunning(70);
[0096] (28) unless (!VAR_RESULT) goto 0091;
[009B] (78) if (Local[2] < 437) {
[00A2] (6A)   startScript(26,[Local[2]],F,R);
[00A8] (80)   breakHere();
[00A9] (CE)   putActorAtObject(VAR_EGO,Local[2]);
[00AE] (93)   ActorOps(VAR_EGO,[Elevation(0)]);
[00B5] (80)   breakHere();
[00B6] (6A)   startScript(27,[Local[2]],F,R);
[00BC] (18) } else {
[00BF] (1C)   startSound(82);
[00C1] (80)   breakHere();
[00C2] (80)   breakHere();
[00C3] (80)   breakHere();
[00C4] (80)   breakHere();
[00C5] (1C)   startSound(83);
[00C7] (0A)   startScript(207,[Local[0],Local[2]]);
[00D0] (80)   breakHere();
[00D1] (68)   VAR_RESULT = isScriptRunning(207);
[00D5] (28)   unless (!VAR_RESULT) goto 00D0;
[00DA] (2A)   startScript(209,[],F);
[00DD] (**) }
[00DD] (C0) endCutscene();
[00DE] (A0) stopObjectCode();
END

Script# 211
[0000] (AC) Exprmode Local[1] = (<VAR_RESULT = getRandomNr(5)> + 433);
[000D] (AC) Exprmode Local[2] = (<VAR_RESULT = getRandomNr(6)> + 432);
[001A] (88) unless (Local[2] != Local[1]) goto 000D;
[0021] (44) if (Local[1] > 436) {
[0028] (5A)   Local[1] += 1;
[002D] (**) }
[002D] (44) if (Local[2] > 436) {
[0034] (5A)   Local[2] += 1;
[0039] (**) }
[0039] (04) if (Local[1] <= 436) {
[0040] (87)   setState(Local[1],1);
[0044] (1C)   startSound(82);
[0046] (80)   breakHere();
[0047] (AD)   putActorInRoom(Local[0],57);
[004B] (CE)   putActorAtObject(Local[0],Local[1]);
[0050] (80)   breakHere();
[0051] (80)   breakHere();
[0052] (87)   setState(Local[1],0);
[0056] (1C)   startSound(83);
[0058] (48) } else if (Local[1] == 438) {
[0062] (6A)   startScript(202,[Local[0]],F,R);
[0068] (80)   breakHere();
[0069] (68)   VAR_RESULT = isScriptRunning(202);
[006D] (28)   unless (!VAR_RESULT) goto 0068;
[0072] (18) } else {
[0075] (6A)   startScript(203,[Local[0]],F,R);
[007B] (80)   breakHere();
[007C] (68)   VAR_RESULT = isScriptRunning(203);
[0080] (28)   unless (!VAR_RESULT) goto 007B;
[0085] (**) }
[0085] (F6) walkActorToObject(Local[0],Local[2]);
[008A] (AE) WaitForActor(Local[0]);
[008E] (04) if (Local[2] <= 436) {
[0095] (87)   setState(Local[2],1);
[0099] (1C)   startSound(82);
[009B] (80)   breakHere();
[009C] (AD)   putActorInRoom(Local[0],0);
[00A0] (80)   breakHere();
[00A1] (80)   breakHere();
[00A2] (87)   setState(Local[2],0);
[00A6] (1C)   startSound(83);
[00A8] (18) } else {
[00AB] (48)   if (Local[2] == 438) {
[00B2] (6A)     startScript(204,[Local[0]],F,R);
[00B8] (80)     breakHere();
[00B9] (68)     VAR_RESULT = isScriptRunning(204);
[00BD] (28)     unless (!VAR_RESULT) goto 00B8;
[00C2] (18)   } else {
[00C5] (6A)     startScript(205,[Local[0]],F,R);
[00CB] (80)     breakHere();
[00CC] (68)     VAR_RESULT = isScriptRunning(205);
[00D0] (28)     unless (!VAR_RESULT) goto 00CB;
[00D5] (**)   }
[00D5] (AD)   putActorInRoom(Local[0],0);
[00D9] (**) }
[00D9] (A0) stopObjectCode();
END

Script# 212
[0000] (F5) Local[3] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0007] (48) if (Local[0] == 2) {
[000E] (FB)   VAR_RESULT = getActorWalkBox(VAR_EGO);
[0013] (48)   if (VAR_RESULT == 21) {
[001A] (1A)     VAR_VIRT_MOUSE_Y = 37;
[001F] (78)     if (VAR_VIRT_MOUSE_X < 101) {
[0026] (1A)       VAR_VIRT_MOUSE_X = 101;
[002B] (44)     } else if (VAR_VIRT_MOUSE_X > 188) {
[0035] (1A)       VAR_VIRT_MOUSE_X = 188;
[003A] (**)     }
[003A] (18)   } else {
[003D] (FB)     VAR_RESULT = getActorWalkBox(VAR_EGO);
[0042] (48)     if (VAR_RESULT == 22) {
[0049] (1A)       VAR_VIRT_MOUSE_Y = 53;
[004E] (78)       if (VAR_VIRT_MOUSE_X < 417) {
[0055] (1A)         VAR_VIRT_MOUSE_X = 417;
[005A] (44)       } else if (VAR_VIRT_MOUSE_X > 478) {
[0064] (1A)         VAR_VIRT_MOUSE_X = 478;
[0069] (**)       }
[0069] (**)     }
[0069] (**)   }
[0069] (**) }
[0069] (A8) if (Local[3]) {
[006E] (48)   if (Local[3] == 437) {
[0075] (48)     if (Var[110] == 9) {
[007C] (42)       chainScript(95,[Local[0],Local[1],Local[2]]);
[0088] (**)     }
[0088] (FB)     VAR_RESULT = getActorWalkBox(VAR_EGO);
[008D] (48)     if (VAR_RESULT == 21) {
[0094] (42)       chainScript(95,[Local[0],Local[1],Local[2]]);
[00A0] (**)     }
[00A0] (18)   } else {
[00A3] (FB)     VAR_RESULT = getActorWalkBox(VAR_EGO);
[00A8] (04)     if (VAR_RESULT <= 20) {
[00AF] (42)       chainScript(95,[Local[0],Local[1],Local[2]]);
[00BB] (**)     }
[00BB] (**)   }
[00BB] (FE)   walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[00C2] (08)   if (Var[110] != 10) {
[00C9] (0A)     startScript(3,[]);
[00CC] (**)   }
[00CC] (18) } else {
[00CF] (42)   chainScript(95,[Local[0],Local[1],Local[2]]);
[00DB] (**) }
[00DB] (A0) stopObjectCode();
END

Script# 213
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

Script# 214 // Look at Clock
[0000] (48) if (Var[378] == 0) {
[0007] (D8)   printEgo([Text("Ten o'clock.")]);
[0016] (48) } else if (Var[378] == 1) {
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
[0093] (A0) stopObjectCode();
END

Script# 215
[0000] (68) VAR_RESULT = isScriptRunning(217);
[0004] (28) if (!VAR_RESULT) {
[0009] (B4)   VAR_RESULT = getDist(VAR_EGO,9);
[0010] (78)   if (VAR_RESULT < 100) {
[0017] (F5)     Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[001E] (48)     if (Local[0] == 441) {
[0025] (0A)       startScript(15,[]);
[0028] (0A)       startScript(16,[]);
[002B] (5A)       Var[377] += 1;
[0030] (0A)       startScript(216,[]);
[0033] (80)       breakHere();
[0034] (68)       VAR_RESULT = isScriptRunning(216);
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

Script# 216 // Mess with Rat
[0000] (40) cutscene([2]);
[0005] (14) print(255,[Pos(110,40)]);
[000D] (11) animateCostume(9,249);
[0010] (48) if (Var[377] == 1) {
[0017] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[001F] (14)   print(10,[Text("Hey!!  Don't mess with my rat!")]);
[0041] (11)   animateCostume(10,7);
[0044] (80)   breakHere();
[0045] (80)   breakHere();
[0046] (80)   breakHere();
[0047] (80)   breakHere();
[0048] (11)   animateCostume(9,248);
[004B] (AE)   WaitForMessage();
[004D] (48) } else if (Var[377] == 2) {
[0057] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[005F] (14)   print(10,[Text("I said don't pester the rat!")]);
[007F] (80)   breakHere();
[0080] (80)   breakHere();
[0081] (80)   breakHere();
[0082] (80)   breakHere();
[0083] (80)   breakHere();
[0084] (80)   breakHere();
[0085] (11)   animateCostume(9,248);
[0088] (AE)   WaitForMessage();
[008A] (48) } else if (Var[377] == 3) {
[0094] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[009C] (14)   print(10,[Text("I'm not going to warn you again!!" + wait() + "Leave the rat alone!!")]);
[00D8] (11)   animateCostume(10,7);
[00DB] (80)   breakHere();
[00DC] (80)   breakHere();
[00DD] (80)   breakHere();
[00DE] (80)   breakHere();
[00DF] (80)   breakHere();
[00E0] (80)   breakHere();
[00E1] (80)   breakHere();
[00E2] (80)   breakHere();
[00E3] (11)   animateCostume(9,248);
[00E6] (AE)   WaitForMessage();
[00E8] (48) } else if (Var[377] == 4) {
[00F2] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[00FA] (14)   print(10,[Text("Hey, man!!")]);
[0108] (80)   breakHere();
[0109] (80)   breakHere();
[010A] (80)   breakHere();
[010B] (80)   breakHere();
[010C] (80)   breakHere();
[010D] (80)   breakHere();
[010E] (80)   breakHere();
[010F] (80)   breakHere();
[0110] (80)   breakHere();
[0111] (80)   breakHere();
[0112] (11)   animateCostume(9,248);
[0115] (AE)   WaitForMessage();
[0117] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[011F] (14)   print(10,[Text("Frank, make him quit it!")]);
[013B] (11)   animateCostume(10,3);
[013E] (11)   animateCostume(10,18);
[0141] (AE)   WaitForMessage();
[0143] (48) } else if (Var[377] == 5) {
[014D] (80)   breakHere();
[014E] (5D)   setClass(441,[152]);
[0155] (13)   ActorOps(9,[WalkAnimNr(6),WalkSpeed(10,2)]);
[015D] (1E)   walkActorTo(9,400,135);
[0163] (80)   breakHere();
[0164] (80)   breakHere();
[0165] (80)   breakHere();
[0166] (80)   breakHere();
[0167] (80)   breakHere();
[0168] (80)   breakHere();
[0169] (80)   breakHere();
[016A] (80)   breakHere();
[016B] (80)   breakHere();
[016C] (80)   breakHere();
[016D] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0175] (14)   print(10,[Text("Aw, now look what you did!")]);
[0193] (11)   animateCostume(10,7);
[0196] (AE)   WaitForActor(9);
[0199] (2D)   putActorInRoom(9,0);
[019C] (62)   stopScript(215);
[019E] (18)   /* goto 01A1; */
[01A1] (**) }
[01A1] (44) if (VAR_MACHINE_SPEED > 0) {
[01A8] (11)   animateCostume(10,4);
[01AB] (**) }
[01AB] (14) print(255,[Pos(160,8),Center(),Overhead()]);
[01B5] (C0) endCutscene();
[01B6] (A0) stopObjectCode();
END

Script# 217 // Talk to Men of Low Moral Fiber
[0000] (62) stopScript(83);
[0002] (9A) Local[0] = VAR_VERB_SCRIPT;
[0007] (1A) VAR_VERB_SCRIPT = 18;
[000C] (0A) startScript(21,[3]);
[0012] (14) print(255,[Pos(110,40)]);
[001A] (1A) Var[197] = 145;
[001F] (1A) Bit[28] = 0;
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
[004C] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0059] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[0066] (28) if (!Bit[30 + 0]) {
[006D] (A8)   if (Bit[30 + 4]) {
[0074] (AC)     Exprmode Var[103] = ((120 + 7) - 1);
[0083] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("I apologize for what I said about rats."),On()]);
[00B6] (5A)     Var[197] += 8;
[00BB] (48)     if (Var[364] == 3) {
[00C2] (3A)       Var[103] -= 120;
[00C7] (1A)       Bit[40 + Var[103]] = 1;
[00CE] (**)     }
[00CE] (18)   } else {
[00D1] (68)     VAR_RESULT = isScriptRunning(215);
[00D5] (28)     if (!VAR_RESULT) {
[00DA] (AC)       Exprmode Var[103] = ((120 + 1) - 1);
[00E9] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Sorry about the rat..."),On()]);
[010B] (5A)       Var[197] += 8;
[0110] (48)       if (Var[364] == 3) {
[0117] (3A)         Var[103] -= 120;
[011C] (1A)         Bit[40 + Var[103]] = 1;
[0123] (**)       }
[0123] (AC)       Exprmode Var[103] = ((120 + 2) - 1);
[0132] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Now that that fearsome beast is gone, we can talk."),On()]);
[0170] (5A)       Var[197] += 8;
[0175] (48)       if (Var[364] == 3) {
[017C] (3A)         Var[103] -= 120;
[0181] (1A)         Bit[40 + Var[103]] = 1;
[0188] (**)       }
[0188] (18)     } else {
[018B] (AC)       Exprmode Var[103] = ((120 + 1) - 1);
[019A] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Hey, nice rat!"),On()]);
[01B4] (5A)       Var[197] += 8;
[01B9] (48)       if (Var[364] == 3) {
[01C0] (3A)         Var[103] -= 120;
[01C5] (1A)         Bit[40 + Var[103]] = 1;
[01CC] (**)       }
[01CC] (AC)       Exprmode Var[103] = ((120 + 2) - 1);
[01DB] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("How can you stand to be near this vermin?"),On()]);
[0210] (5A)       Var[197] += 8;
[0215] (48)       if (Var[364] == 3) {
[021C] (3A)         Var[103] -= 120;
[0221] (1A)         Bit[40 + Var[103]] = 1;
[0228] (**)       }
[0228] (**)     }
[0228] (**)   }
[0228] (**) }
[0228] (28) if (!Bit[30 + 5]) {
[022F] (A8)   if (Bit[19]) {
[0234] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[0243] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Do you guys know the sneaky-looking man on the opposite corner?"),On()]);
[028E] (5A)     Var[197] += 8;
[0293] (48)     if (Var[364] == 3) {
[029A] (3A)       Var[103] -= 120;
[029F] (1A)       Bit[40 + Var[103]] = 1;
[02A6] (**)     }
[02A6] (18)     /* goto 02A9; */
[02A9] (**)   }
[02A9] (**) }
[02A9] (28) if (!Bit[30 + 1]) {
[02B0] (A8)   if (Bit[30 + 2]) {
[02B7] (AC)     Exprmode Var[103] = ((120 + 6) - 1);
[02C6] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("I'm really interested in this pirating thing."),On()]);
[02FF] (5A)     Var[197] += 8;
[0304] (48)     if (Var[364] == 3) {
[030B] (3A)       Var[103] -= 120;
[0310] (1A)       Bit[40 + Var[103]] = 1;
[0317] (**)     }
[0317] (18)   } else {
[031A] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[0329] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Say, are you guys pirates?"),On()]);
[034F] (5A)     Var[197] += 8;
[0354] (48)     if (Var[364] == 3) {
[035B] (3A)       Var[103] -= 120;
[0360] (1A)       Bit[40 + Var[103]] = 1;
[0367] (**)     }
[0367] (**)   }
[0367] (**) }
[0367] (28) if (!Local[1]) {
[036C] (A8)   if (Bit[129]) {
[0371] (28)     if (!Bit[30 + 6]) {
[0378] (AC)       Exprmode Var[103] = ((120 + 8) - 1);
[0387] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Do you know anything about a magic phrase?"),On()]);
[03BD] (5A)       Var[197] += 8;
[03C2] (48)       if (Var[364] == 3) {
[03C9] (3A)         Var[103] -= 120;
[03CE] (1A)         Bit[40 + Var[103]] = 1;
[03D5] (**)       }
[03D5] (18)     } else {
[03D8] (AC)       Exprmode Var[103] = ((120 + 8) - 1);
[03E7] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Tell me again what you know about a magic phrase."),On()]);
[0424] (5A)       Var[197] += 8;
[0429] (48)       if (Var[364] == 3) {
[0430] (3A)         Var[103] -= 120;
[0435] (1A)         Bit[40 + Var[103]] = 1;
[043C] (**)       }
[043C] (**)     }
[043C] (**)   }
[043C] (1A)   Local[1] = 1;
[0441] (**) }
[0441] (AC) Exprmode Var[103] = ((120 + 5) - 1);
[0450] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I'll just be running along, now."),On()]);
[047C] (5A) Var[197] += 8;
[0481] (48) if (Var[364] == 3) {
[0488] (3A)   Var[103] -= 120;
[048D] (1A)   Bit[40 + Var[103]] = 1;
[0494] (**) }
[0494] (AC) Exprmode Var[103] = (5 - 1);
[049F] (1A) Var[379 + Var[103]] = 1;
[04A6] (1A) Var[190] = 0;
[04AB] (80) breakHere();
[04AC] (A8) unless (Var[190]) goto 04AB;
[04B1] (48) if (Var[190] == 120) {
[04B8] (18)   goto 0934;
[04BB] (48) } else if (Var[190] == 121) {
[04C5] (18)   goto 0AE6;
[04C8] (48) } else if (Var[190] == 122) {
[04D2] (18)   goto 057E;
[04D5] (48) } else if (Var[190] == 123) {
[04DF] (1A)   Bit[30 + 2] = 1;
[04E6] (18)   goto 0F55;
[04E9] (48) } else if (Var[190] == 124) {
[04F3] (18)   goto 1796;
[04F6] (48) } else if (Var[190] == 125) {
[0500] (18)   goto 109E;
[0503] (48) } else if (Var[190] == 126) {
[050D] (18)   goto 0BD1;
[0510] (48) } else if (Var[190] == 127) {
[051A] (28)   if (!Bit[30 + 6]) {
[0521] (18)     goto 1614;
[0524] (18)   } else {
[0527] (13)     ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[052F] (14)     print(10,[Text("We ALREADY TOLD you to talk to the fortune teller and the prisoner!")]);
[0576] (AE)     WaitForMessage();
[0578] (18)     goto 001A;
[057B] (**)   }
[057B] (18)   /* goto 057E; */
[057E] (**) }
[057E] (1A) Bit[30 + 5] = 1;
[0585] (A8) if (Bit[19]) {
[058A] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0592] (14)   print(10,[Text("Saw you buying a map from that fellow over there.")]);
[05C7] (80)   breakHere();
[05C8] (80)   breakHere();
[05C9] (80)   breakHere();
[05CA] (11)   animateCostume(10,14);
[05CD] (AE)   WaitForMessage();
[05CF] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[05D7] (14)   print(10,[Text("Have you looked at it yet?")]);
[05F5] (AE)   WaitForMessage();
[05F7] (13)   ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[05FF] (14)   print(10,[Text("Ha ha ha ha ha ha ha ha ha ha ha ha")]);
[0626] (2E)   delay(30);
[062A] (0A)   startScript(218,[]);
[062D] (80)   breakHere();
[062E] (68)   VAR_RESULT = isScriptRunning(218);
[0632] (28)   unless (!VAR_RESULT) goto 062D;
[0637] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[063F] (14)   print(10,[Text("Perhaps you should consider an alternate source...")]);
[0675] (18) } else {
[0678] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0680] (14)   print(10,[Text("Wanna buy a map, eh?")]);
[0698] (**) }
[0698] (AE) WaitForMessage();
[069A] (11) animateCostume(10,15);
[069D] (80) breakHere();
[069E] (80) breakHere();
[069F] (80) breakHere();
[06A0] (80) breakHere();
[06A1] (80) breakHere();
[06A2] (80) breakHere();
[06A3] (80) breakHere();
[06A4] (80) breakHere();
[06A5] (14) print(10,[Text("OUR maps are top quality, not like the birdcage liners you get from that clown across the street.")]);
[070A] (AE) WaitForMessage();
[070C] (11) animateCostume(10,18);
[070F] (11) animateCostume(10,3);
[0712] (11) animateCostume(10,10);
[0715] (2E) delay(180);
[0719] (11) animateCostume(10,9);
[071C] (11) animateCostume(10,5);
[071F] (11) animateCostume(10,13);
[0722] (2E) delay(120);
[0726] (14) print(10,[Text("No, just kidding.")]);
[073B] (AE) WaitForMessage();
[073D] (11) animateCostume(10,15);
[0740] (80) breakHere();
[0741] (80) breakHere();
[0742] (80) breakHere();
[0743] (80) breakHere();
[0744] (80) breakHere();
[0745] (80) breakHere();
[0746] (80) breakHere();
[0747] (80) breakHere();
[0748] (14) print(10,[Text("These are actually copies of an old article by Ron Gilbert on the subject of computer games." + wait() + "Can't even GIVE them away.")]);
[07C4] (AE) WaitForMessage();
[07C6] (2E) delay(60);
[07CA] (11) animateCostume(10,18);
[07CD] (2E) delay(30);
[07D1] (0A) startScript(218,[]);
[07D4] (80) breakHere();
[07D5] (68) VAR_RESULT = isScriptRunning(218);
[07D9] (28) unless (!VAR_RESULT) goto 07D4;
[07DE] (14) print(10,[Text("Want one?")]);
[07EB] (AE) WaitForMessage();
[07ED] (1A) Var[197] = 145;
[07F2] (1A) Bit[28] = 0;
[07F7] (2C) CursorShow();
[07F9] (2C) UserputOn();
[07FB] (7A) VerbOps(120,[Off()]);
[07FF] (7A) VerbOps(121,[Off()]);
[0803] (7A) VerbOps(122,[Off()]);
[0807] (7A) VerbOps(123,[Off()]);
[080B] (7A) VerbOps(124,[Off()]);
[080F] (7A) VerbOps(125,[Off()]);
[0813] (7A) VerbOps(126,[Off()]);
[0817] (7A) VerbOps(127,[Off()]);
[081B] (7A) VerbOps(128,[Off()]);
[081F] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[082C] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[0839] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[0848] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, thanks."),On()]);
[085F] (5A) Var[197] += 8;
[0864] (48) if (Var[364] == 3) {
[086B] (3A)   Var[103] -= 120;
[0870] (1A)   Bit[40 + Var[103]] = 1;
[0877] (**) }
[0877] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[0886] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, but I'll take one if you give me two pieces of eight."),On()]);
[08CB] (5A) Var[197] += 8;
[08D0] (48) if (Var[364] == 3) {
[08D7] (3A)   Var[103] -= 120;
[08DC] (1A)   Bit[40 + Var[103]] = 1;
[08E3] (**) }
[08E3] (1A) Var[190] = 0;
[08E8] (80) breakHere();
[08E9] (A8) unless (Var[190]) goto 08E8;
[08EE] (48) if (Var[190] == 120) {
[08F5] (14)   print(10,[Text("See?  Told you so.")]);
[090B] (48) } else if (Var[190] == 121) {
[0915] (14)   print(10,[Text("OK, that's fair.")]);
[0929] (50)   pickupObject(452);
[092C] (18)   /* goto 092F; */
[092F] (**) }
[092F] (AE) WaitForMessage();
[0931] (18) goto 001A;
[0934] (13) ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[093C] (14) print(10,[Text("Do you like rats?")]);
[0951] (AE) WaitForMessage();
[0953] (1A) Var[197] = 145;
[0958] (1A) Bit[28] = 0;
[095D] (2C) CursorShow();
[095F] (2C) UserputOn();
[0961] (7A) VerbOps(120,[Off()]);
[0965] (7A) VerbOps(121,[Off()]);
[0969] (7A) VerbOps(122,[Off()]);
[096D] (7A) VerbOps(123,[Off()]);
[0971] (7A) VerbOps(124,[Off()]);
[0975] (7A) VerbOps(125,[Off()]);
[0979] (7A) VerbOps(126,[Off()]);
[097D] (7A) VerbOps(127,[Off()]);
[0981] (7A) VerbOps(128,[Off()]);
[0985] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0992] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[099F] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[09AE] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yes, I love rats!"),On()]);
[09CB] (5A) Var[197] += 8;
[09D0] (48) if (Var[364] == 3) {
[09D7] (3A)   Var[103] -= 120;
[09DC] (1A)   Bit[40 + Var[103]] = 1;
[09E3] (**) }
[09E3] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[09F2] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, I can't stand them."),On()]);
[0A15] (5A) Var[197] += 8;
[0A1A] (48) if (Var[364] == 3) {
[0A21] (3A)   Var[103] -= 120;
[0A26] (1A)   Bit[40 + Var[103]] = 1;
[0A2D] (**) }
[0A2D] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[0A3C] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yes, especially in a light wine sauce."),On()]);
[0A6E] (5A) Var[197] += 8;
[0A73] (48) if (Var[364] == 3) {
[0A7A] (3A)   Var[103] -= 120;
[0A7F] (1A)   Bit[40 + Var[103]] = 1;
[0A86] (**) }
[0A86] (1A) Var[190] = 0;
[0A8B] (80) breakHere();
[0A8C] (A8) unless (Var[190]) goto 0A8B;
[0A91] (48) if (Var[190] == 122) {
[0A98] (1A)   Bit[30 + 4] = 1;
[0A9F] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0AA7] (14)   print(10,[Text("AIEEE!!!  Get away!!!")]);
[0AC0] (11)   animateCostume(10,9);
[0AC3] (80)   breakHere();
[0AC4] (80)   breakHere();
[0AC5] (80)   breakHere();
[0AC6] (80)   breakHere();
[0AC7] (11)   animateCostume(10,7);
[0ACA] (80)   breakHere();
[0ACB] (80)   breakHere();
[0ACC] (80)   breakHere();
[0ACD] (80)   breakHere();
[0ACE] (80)   breakHere();
[0ACF] (80)   breakHere();
[0AD0] (0A)   startScript(218,[]);
[0AD3] (80)   breakHere();
[0AD4] (68)   VAR_RESULT = isScriptRunning(218);
[0AD8] (28)   unless (!VAR_RESULT) goto 0AD3;
[0ADD] (18)   goto 1796;
[0AE0] (18) } else {
[0AE6] (1A)   Bit[30 + 4] = 1;
[0AED] (68)   VAR_RESULT = isScriptRunning(215);
[0AF1] (28)   if (!VAR_RESULT) {
[0AF6] (13)     ActorOps(10,[TalkAnimNr(3,5),TalkColor(13)]);
[0AFE] (14)     print(10,[Text("Frank, this bozo scared off my rat!")]);
[0B25] (80)     breakHere();
[0B26] (80)     breakHere();
[0B27] (80)     breakHere();
[0B28] (11)     animateCostume(10,18);
[0B2B] (AE)     WaitForMessage();
[0B2D] (11)     animateCostume(10,20);
[0B30] (2E)     delay(60);
[0B34] (11)     animateCostume(10,18);
[0B37] (18)   } else {
[0B3A] (14)     print(255,[Color(7),Pos(80,110),Text("Oh, they're not so bad.")]);
[0B5C] (AE)     WaitForMessage();
[0B5E] (14)     print(255,[Color(7),Pos(80,110),Text("-- squeak --")]);
[0B75] (AE)     WaitForMessage();
[0B77] (2E)     delay(30);
[0B7B] (13)     ActorOps(10,[TalkAnimNr(3,5),TalkColor(13)]);
[0B83] (14)     print(10,[Text("Sounds like this guy don't like rats!")]);
[0BAC] (AE)     WaitForMessage();
[0BAE] (**)   }
[0BAE] (14)   print(10,[Text("Let's saut\x82 him now!")]);
[0BC6] (AE)   WaitForMessage();
[0BC8] (80)   breakHere();
[0BC9] (80)   breakHere();
[0BCA] (80)   breakHere();
[0BCB] (80)   breakHere();
[0BCC] (80)   breakHere();
[0BCD] (80)   breakHere();
[0BCE] (18) } else {
[0BD1] (1A)   Bit[30 + 0] = 1;
[0BD8] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0BE0] (14)   print(10,[Text("They're very intelligent creatures!")]);
[0C07] (AE)   WaitForMessage();
[0C09] (13)   ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[0C11] (14)   print(10,[Text("Ha ha ha ha!!")]);
[0C22] (2E)   delay(30);
[0C26] (0A)   startScript(218,[]);
[0C29] (80)   breakHere();
[0C2A] (68)   VAR_RESULT = isScriptRunning(218);
[0C2E] (28)   unless (!VAR_RESULT) goto 0C29;
[0C33] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0C3B] (14)   print(10,[Text("More intelligent than FRED, here.")]);
[0C60] (11)   animateCostume(10,8);
[0C63] (AE)   WaitForMessage();
[0C65] (2E)   delay(30);
[0C69] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0C71] (14)   print(10,[Text("Why, there's a story around these parts that a bunch of rats  actually crewed a ship here from fabled Monkey Island\x0F.")]);
[0CEA] (2E)   delay(60);
[0CEE] (11)   animateCostume(10,14);
[0CF1] (AE)   WaitForMessage();
[0CF3] (1A)   Var[197] = 145;
[0CF8] (1A)   Bit[28] = 0;
[0CFD] (2C)   CursorShow();
[0CFF] (2C)   UserputOn();
[0D01] (7A)   VerbOps(120,[Off()]);
[0D05] (7A)   VerbOps(121,[Off()]);
[0D09] (7A)   VerbOps(122,[Off()]);
[0D0D] (7A)   VerbOps(123,[Off()]);
[0D11] (7A)   VerbOps(124,[Off()]);
[0D15] (7A)   VerbOps(125,[Off()]);
[0D19] (7A)   VerbOps(126,[Off()]);
[0D1D] (7A)   VerbOps(127,[Off()]);
[0D21] (7A)   VerbOps(128,[Off()]);
[0D25] (26)   setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0D32] (26)   setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[0D3F] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[0D4E] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("That's amazing!"),On()]);
[0D69] (5A)   Var[197] += 8;
[0D6E] (48)   if (Var[364] == 3) {
[0D75] (3A)     Var[103] -= 120;
[0D7A] (1A)     Bit[40 + Var[103]] = 1;
[0D81] (**)   }
[0D81] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[0D90] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("That's difficult to believe."),On()]);
[0DB8] (5A)   Var[197] += 8;
[0DBD] (48)   if (Var[364] == 3) {
[0DC4] (3A)     Var[103] -= 120;
[0DC9] (1A)     Bit[40 + Var[103]] = 1;
[0DD0] (**)   }
[0DD0] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[0DDF] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("No way could a bunch of stupid rats crew a ship!"),On()]);
[0E1B] (5A)   Var[197] += 8;
[0E20] (48)   if (Var[364] == 3) {
[0E27] (3A)     Var[103] -= 120;
[0E2C] (1A)     Bit[40 + Var[103]] = 1;
[0E33] (**)   }
[0E33] (1A)   Var[190] = 0;
[0E38] (80)   breakHere();
[0E39] (A8)   unless (Var[190]) goto 0E38;
[0E3E] (48)   if (Var[190] == 122) {
[0E45] (11)     animateCostume(10,18);
[0E48] (11)     animateCostume(10,3);
[0E4B] (2E)     delay(120);
[0E4F] (11)     animateCostume(10,6);
[0E52] (11)     animateCostume(10,5);
[0E55] (18)     goto 1729;
[0E58] (18)   } else {
[0E5B] (13)     ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0E63] (14)     print(10,[Text("Not if you know rats.")]);
[0E7C] (AE)     WaitForMessage();
[0E7E] (**)   }
[0E7E] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0E86] (14)   print(10,[Text("Yeah, would've made a pretty penny on the ship, too, except they got  waylaid by a bunch of chimps, and they were all too drunk to fight back!")]);
[0F18] (AE)   WaitForMessage();
[0F1A] (13)   ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[0F22] (14)   print(10,[Text("Ha ha ha ha ha ha ha ha")]);
[0F3D] (80)   breakHere();
[0F3E] (80)   breakHere();
[0F3F] (80)   breakHere();
[0F40] (80)   breakHere();
[0F41] (80)   breakHere();
[0F42] (80)   breakHere();
[0F43] (80)   breakHere();
[0F44] (80)   breakHere();
[0F45] (0A)   startScript(218,[]);
[0F48] (80)   breakHere();
[0F49] (68)   VAR_RESULT = isScriptRunning(218);
[0F4D] (28)   unless (!VAR_RESULT) goto 0F48;
[0F52] (18)   goto 001A;
[0F55] (58)   beginOverride();
[0F57] (18)   goto 109E;
[0F5A] (11)   animateCostume(10,18);
[0F5D] (11)   animateCostume(10,3);
[0F60] (11)   animateCostume(10,10);
[0F63] (2E)   delay(120);
[0F67] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[0F6F] (14)   print(10,[Text("No, we're a wandering circus troupe.")]);
[0F97] (2E)   delay(60);
[0F9B] (11)   animateCostume(10,9);
[0F9E] (AE)   WaitForMessage();
[0FA0] (78)   if (Var[377] < 5) {
[0FA7] (13)     ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0FAF] (14)     print(10,[Text("But this rat scared away the elephant.")]);
[0FD9] (18)   } else {
[0FDC] (13)     ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[0FE4] (14)     print(10,[Text("But some idiot chased our trained rat away.")]);
[1013] (**)   }
[1013] (AE)   WaitForMessage();
[1015] (80)   breakHere();
[1016] (80)   breakHere();
[1017] (80)   breakHere();
[1018] (80)   breakHere();
[1019] (80)   breakHere();
[101A] (11)   animateCostume(10,18);
[101D] (11)   animateCostume(10,3);
[1020] (2E)   delay(60);
[1024] (13)   ActorOps(10,[TalkAnimNr(17,18),TalkColor(10)]);
[102C] (14)   print(10,[Text("Shut Up!!")]);
[1039] (80)   breakHere();
[103A] (80)   breakHere();
[103B] (0A)   startScript(218,[]);
[103E] (80)   breakHere();
[103F] (68)   VAR_RESULT = isScriptRunning(218);
[1043] (28)   unless (!VAR_RESULT) goto 103E;
[1048] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1050] (14)   print(10,[Text("Of course we're pirates!" + wait() + "You can't buy clothes like these off the rack!")]);
[109C] (AE)   WaitForMessage();
[109E] (58)   endOverride();
[10A0] (11)   animateCostume(10,1);
[10A3] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[10AB] (14)   print(10,[Text("What do you want?")]);
[10C0] (AE)   WaitForMessage();
[10C2] (1A)   Var[197] = 145;
[10C7] (1A)   Bit[28] = 0;
[10CC] (2C)   CursorShow();
[10CE] (2C)   UserputOn();
[10D0] (7A)   VerbOps(120,[Off()]);
[10D4] (7A)   VerbOps(121,[Off()]);
[10D8] (7A)   VerbOps(122,[Off()]);
[10DC] (7A)   VerbOps(123,[Off()]);
[10E0] (7A)   VerbOps(124,[Off()]);
[10E4] (7A)   VerbOps(125,[Off()]);
[10E8] (7A)   VerbOps(126,[Off()]);
[10EC] (7A)   VerbOps(127,[Off()]);
[10F0] (7A)   VerbOps(128,[Off()]);
[10F4] (26)   setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[1101] (26)   setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[110E] (28)   if (!Bit[30 + 3]) {
[1115] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1124] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("What's in the keg?"),On()]);
[1142] (5A)     Var[197] += 8;
[1147] (48)     if (Var[364] == 3) {
[114E] (3A)       Var[103] -= 120;
[1153] (1A)       Bit[40 + Var[103]] = 1;
[115A] (**)     }
[115A] (**)   }
[115A] (28)   if (!Bit[30 + 0]) {
[1161] (A8)     if (Bit[30 + 4]) {
[1168] (AC)       Exprmode Var[103] = ((120 + 4) - 1);
[1177] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Sorry I verbally abused your rat."),On()]);
[11A4] (5A)       Var[197] += 8;
[11A9] (48)       if (Var[364] == 3) {
[11B0] (3A)         Var[103] -= 120;
[11B5] (1A)         Bit[40 + Var[103]] = 1;
[11BC] (**)       }
[11BC] (18)     } else {
[11BF] (AC)       Exprmode Var[103] = ((120 + 2) - 1);
[11CE] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Where'd you get that rat?"),On()]);
[11F3] (5A)       Var[197] += 8;
[11F8] (48)       if (Var[364] == 3) {
[11FF] (3A)         Var[103] -= 120;
[1204] (1A)         Bit[40 + Var[103]] = 1;
[120B] (**)       }
[120B] (**)     }
[120B] (**)   }
[120B] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[121A] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("How come you're on this street corner and not on a ship," + newline() + "  looting, pillaging, sacking, that sort of thing?"),On()]);
[1292] (5A)   Var[197] += 8;
[1297] (48)   if (Var[364] == 3) {
[129E] (3A)     Var[103] -= 120;
[12A3] (1A)     Bit[40 + Var[103]] = 1;
[12AA] (**)   }
[12AA] (1A)   Var[190] = 0;
[12AF] (80)   breakHere();
[12B0] (A8)   unless (Var[190]) goto 12AF;
[12B5] (48)   if (Var[190] == 120) {
[12BC] (1A)     Bit[30 + 3] = 1;
[12C3] (14)     print(255,[Left(),Pos(20,50),Color(13),Text("Rum." + keepText())]);
[12D5] (14)     print(255,[Left(),Color(10),Text("       Jam.")]);
[12E7] (11)     animateCostume(10,6);
[12EA] (11)     animateCostume(10,12);
[12ED] (11)     animateCostume(10,10);
[12F0] (AE)     WaitForMessage();
[12F2] (11)     animateCostume(10,18);
[12F5] (11)     animateCostume(10,3);
[12F8] (2E)     delay(120);
[12FC] (14)     print(255,[Left(),Pos(20,50),Color(13),Text("Jam." + keepText())]);
[130E] (14)     print(255,[Left(),Color(10),Text("       Rum.")]);
[1320] (11)     animateCostume(10,6);
[1323] (11)     animateCostume(10,12);
[1326] (AE)     WaitForMessage();
[1328] (11)     animateCostume(10,18);
[132B] (11)     animateCostume(10,3);
[132E] (2E)     delay(120);
[1332] (11)     animateCostume(10,11);
[1335] (13)     ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[133D] (14)     print(10,[Text("Er...  rum and jam." + wait() + "It's an old pirate favorite, everybody knows that.")]);
[1388] (AE)     WaitForMessage();
[138A] (18)     goto 001A;
[138D] (48)   } else if (Var[190] == 121) {
[1397] (18)     goto 0934;
[139A] (48)   } else if (Var[190] == 122) {
[13A4] (18)     goto 13B7;
[13A7] (48)   } else if (Var[190] == 123) {
[13B1] (18)     goto 0BD1;
[13B4] (18)     /* goto 13B7; */
[13B7] (**)   }
[13B7] (1A)   Bit[30 + 1] = 1;
[13BE] (58)   beginOverride();
[13C0] (18)   goto 15C9;
[13C3] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[13CB] (14)   print(10,[Text("Well, pirating hasn't been panning out so well for us...")]);
[1407] (11)   animateCostume(10,3);
[140A] (AE)   WaitForMessage();
[140C] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[1414] (14)   print(10,[Text("There are some UNNATURALLY talented pirates in the area right now...")]);
[145C] (11)   animateCostume(10,18);
[145F] (11)   animateCostume(10,10);
[1462] (AE)   WaitForMessage();
[1464] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[146C] (14)   print(10,[Text("...operating out of Monkey Island\x0F.")]);
[1493] (11)   animateCostume(10,3);
[1496] (AE)   WaitForMessage();
[1498] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[14A0] (14)   print(10,[Text("So we've been pursuing alternate means of self-support.")]);
[14DB] (11)   animateCostume(10,18);
[14DE] (AE)   WaitForMessage();
[14E0] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[14E8] (14)   print(10,[Text("...Fin's idea, actually.")]);
[1504] (11)   animateCostume(10,3);
[1507] (AE)   WaitForMessage();
[1509] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[1511] (14)   print(10,[Text("We're trying to start up a circus.")]);
[1537] (11)   animateCostume(10,18);
[153A] (AE)   WaitForMessage();
[153C] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1544] (14)   print(10,[Text("It was working out well, until the rat scared off the elephant.")]);
[1587] (11)   animateCostume(10,3);
[158A] (AE)   WaitForMessage();
[158C] (38)   if (Var[377] >= 5) {
[1593] (13)     ActorOps(10,[TalkAnimNr(3,5),TalkColor(13)]);
[159B] (14)     print(10,[Text("...and now some jerk scared off the rat!")]);
[15C7] (AE)     WaitForMessage();
[15C9] (**)   }
[15C9] (58)   endOverride();
[15CB] (11)   animateCostume(10,1);
[15CE] (11)   animateCostume(10,18);
[15D1] (11)   animateCostume(10,3);
[15D4] (11)   animateCostume(10,10);
[15D7] (2E)   delay(180);
[15DB] (11)   animateCostume(10,11);
[15DE] (11)   animateCostume(10,5);
[15E1] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[15E9] (14)   print(10,[Text("Now you've depressed us." + wait() + "Go home.")]);
[160F] (AE)   WaitForMessage();
[1611] (18)   goto 1796;
[1614] (1A)   Bit[30 + 6] = 1;
[161B] (11)   animateCostume(10,18);
[161E] (11)   animateCostume(10,3);
[1621] (11)   animateCostume(10,10);
[1624] (2E)   delay(60);
[1628] (11)   animateCostume(10,1);
[162B] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1633] (14)   print(10,[Text("Er^")]);
[163A] (AE)   WaitForMessage();
[163C] (2E)   delay(30);
[1640] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[1648] (14)   print(10,[Text("Well, we^umm^")]);
[1659] (11)   animateCostume(10,3);
[165C] (AE)   WaitForMessage();
[165E] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1666] (14)   print(10,[Text("Well, yes, we KNEW about that.")]);
[1688] (AE)   WaitForMessage();
[168A] (11)   animateCostume(10,18);
[168D] (11)   animateCostume(10,3);
[1690] (11)   animateCostume(10,10);
[1693] (2E)   delay(180);
[1697] (13)   ActorOps(10,[TalkAnimNr(6,5),TalkColor(13)]);
[169F] (14)   print(10,[Text("But we forgot!")]);
[16B1] (AE)   WaitForMessage();
[16B3] (11)   animateCostume(10,9);
[16B6] (2E)   delay(60);
[16BA] (0A)   startScript(218,[]);
[16BD] (80)   breakHere();
[16BE] (68)   VAR_RESULT = isScriptRunning(218);
[16C2] (28)   unless (!VAR_RESULT) goto 16BD;
[16C7] (11)   animateCostume(10,1);
[16CA] (13)   ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[16D2] (14)   print(10,[Text("Actually your best bet would be to talk to the fortune teller or the prisoner.")]);
[1724] (AE)   WaitForMessage();
[1726] (18)   goto 001A;
[1729] (**) }
[1729] (13) ActorOps(10,[TalkAnimNr(12,13),TalkColor(10)]);
[1731] (14) print(10,[Text("I think you'd best leave, boy.")]);
[1753] (AE) WaitForMessage();
[1755] (13) ActorOps(10,[TalkAnimNr(9,11),TalkColor(11)]);
[175D] (14) print(10,[Text("Ha ha ha ha ha hoo hoo ha ha ha")]);
[1780] (80) breakHere();
[1781] (80) breakHere();
[1782] (80) breakHere();
[1783] (80) breakHere();
[1784] (80) breakHere();
[1785] (80) breakHere();
[1786] (0A) startScript(218,[]);
[1789] (80) breakHere();
[178A] (68) VAR_RESULT = isScriptRunning(218);
[178E] (28) unless (!VAR_RESULT) goto 1789;
[1793] (18) /* goto 1796; */
[1796] (11) animateCostume(10,1);
[1799] (14) print(255,[Pos(160,8),Center()]);
[17A2] (9A) VAR_VERB_SCRIPT = Local[0];
[17A7] (0A) startScript(21,[2]);
[17AD] (2C) CursorShow();
[17AF] (2C) UserputOn();
[17B1] (2A) startScript(83,[10,6],F);
[17BA] (A0) stopObjectCode();
END

Script# 218
[0000] (11) animateCostume(10,16);
[0003] (80) breakHere();
[0004] (80) breakHere();
[0005] (80) breakHere();
[0006] (80) breakHere();
[0007] (80) breakHere();
[0008] (80) breakHere();
[0009] (27) PutCodeInString(26, "--aak--");
[0014] (AC) Exprmode Local[0] = (<VAR_RESULT = getRandomNr(25)> + 97);
[0021] (27) SetStringChar(26,3,Local[0]);
[0027] (AC) Exprmode Local[0] = (<VAR_RESULT = getRandomNr(25)> + 97);
[0034] (27) SetStringChar(26,4,Local[0]);
[003A] (14) print(255,[Pos(70,70),Color(11),Text(getString(VAR_CAMERA_FAST_X))]);
[0049] (AE) WaitForMessage();
[004B] (A0) stopObjectCode();
END

// Object 428: Shady Looking Fellow
Events:
   6 - 003F
   7 - 003F
   8 - 003F
   D - 003B
  5A - 0080
  FF - 0086
[003B] (0A) startScript(91,[]);
[003E] (00) stopObjectCode();
[003F] (D8) printEgo([Text("I'd better not^" + wait() + "Who knows what he's hiding under his coat.")]);
[007D] (AE) WaitForMessage();
[007F] (00) stopObjectCode();
[0080] (1A) Var[194] = 13;
[0085] (00) stopObjectCode();
[0086] (00) stopObjectCode();
END

// Object 429: Map
Events:
  5A - 001B
[001B] (1A) Var[194] = 9;
[0020] (00) stopObjectCode();
END

// Object 430: Door
Events:
   1 - 0022
   9 - 0022
  5A - 005C
[0022] (D8) printEgo([Text("The door's locked, and the sign says they're closed.")]);
[0059] (AE) WaitForMessage();
[005B] (00) stopObjectCode();
[005C] (1A) Var[194] = 1;
[0061] (00) stopObjectCode();
END

// Object 431: Sign
Events:
   9 - 001F
  5A - 00AD
[001F] (D8) printEgo([Text("\x19Ye Olde Rubber Chicken With a Pulley in the Middle Shoppe\x19" + wait() + "\x19Serving your rubber-chicken-with-a- pulley-in-the-middle needs for 50 years\x19")]);
[00AC] (00) stopObjectCode();
[00AD] (1A) Var[194] = 9;
[00B2] (00) stopObjectCode();
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
[005F] (1A)   Var[194] = 1;
[0064] (18) } else {
[0067] (1A)   Var[194] = 2;
[006C] (**) }
[006C] (00) stopObjectCode();
END

// Object 433: Door
Events:
   1 - 001F
  5A - 0026
[001F] (0A) startScript(210,[VAR_ME]);
[0025] (00) stopObjectCode();
[0026] (1A) Var[194] = 1;
[002B] (00) stopObjectCode();
END

// Object 434: Door
Events:
   1 - 001F
  5A - 0026
[001F] (0A) startScript(210,[VAR_ME]);
[0025] (00) stopObjectCode();
[0026] (1A) Var[194] = 1;
[002B] (00) stopObjectCode();
END

// Object 435: Door
Events:
   1 - 001F
  5A - 0026
[001F] (0A) startScript(210,[VAR_ME]);
[0025] (00) stopObjectCode();
[0026] (1A) Var[194] = 1;
[002B] (00) stopObjectCode();
END

// Object 436: Door
Events:
   1 - 001F
  5A - 0026
[001F] (0A) startScript(210,[VAR_ME]);
[0025] (00) stopObjectCode();
[0026] (1A) Var[194] = 1;
[002B] (00) stopObjectCode();
END

// Object 437: Clock
Events:
   9 - 0023
   A - 0020
[0020] (62) stopScript(208);
[0022] (00) stopObjectCode();
[0023] (0A) startScript(214,[]);
[0026] (00) stopObjectCode();
END

// Object 438: Archway
Events:
   A - 001F
[001F] (40) cutscene([2]);
[0024] (0A) startScript(204,[]);
[0027] (80) breakHere();
[0028] (68) VAR_RESULT = isScriptRunning(204);
[002C] (28) unless (!VAR_RESULT) goto 0027;
[0031] (C0) endCutscene();
[0032] (24) loadRoomWithEgo(421,55,992,114);
[003A] (00) stopObjectCode();
END

// Object 439: Archway
Events:
   A - 001F
[001F] (40) cutscene([2]);
[0024] (0A) startScript(205,[]);
[0027] (80) breakHere();
[0028] (68) VAR_RESULT = isScriptRunning(205);
[002C] (28) unless (!VAR_RESULT) goto 0027;
[0031] (C0) endCutscene();
[0032] (24) loadRoomWithEgo(424,56,750,128);
[003A] (00) stopObjectCode();
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
[004A] (0A) startScript(217,[]);
[004D] (00) stopObjectCode();
[004E] (D8) printEgo([Text("Not a pleasant sight.")]);
[0066] (AE) WaitForMessage();
[0068] (00) stopObjectCode();
[0069] (D8) printEgo([Text("I'd better not." + wait() + "They look like a rough crew.")]);
[0099] (AE) WaitForMessage();
[009B] (00) stopObjectCode();
[009C] (1A) Var[194] = 13;
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
