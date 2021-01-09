/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 63: Thera Landscape (th-landsc)
 */

// EN
[0000] (1D) if (classOfIs(595,[146])) {
[0009] (1D)   if (classOfIs(595,[148])) {
[0012] (4C)     soundKludge([272]);
[0017] (4C)     soundKludge([-1]);
[001C] (4C)     soundKludge([257,80,0]);
[0027] (4C)     soundKludge([269,80,0,30]);
[0035] (4C)     soundKludge([269,153,0,30]);
[0043] (62)     stopScript(151);
[0045] (1C)     startSound(46);
[0047] (4C)     soundKludge([-1]);
[004C] (0A)     startScript(200,[]);
[004F] (**)   }
[004F] (**) }
[004F] (48) if (Var[224] == 49) {
[0056] (ED)   putActorInRoom(VAR_EGO,VAR_ROOM);
[005B] (8E)   putActorAtObject(VAR_EGO,851);
[0060] (91)   animateCostume(VAR_EGO,248);
[0064] (D2)   actorFollowCamera(VAR_EGO);
[0067] (80)   breakHere();
[0068] (9E)   walkActorTo(VAR_EGO,360,130);
[006F] (18)   /* goto 0072; */
[0072] (**) }
[0072] (28) if (!Var[414]) {
[0077] (AC)   Exprmode Var[444] = (855 - 853);
[0082] (AC)   Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 853);
[0090] (9A)   Var[414] = Var[444];
[0095] (**) }
[0095] (7C) VAR_RESULT = isSoundRunning(80);
[0099] (A8) if (VAR_RESULT) {
[009E] (68)   VAR_RESULT = isScriptRunning(151);
[00A2] (28)   if (!VAR_RESULT) {
[00A7] (4C)     soundKludge([268,80,0,8]);
[00B5] (0A)     startScript(151,[]);
[00B8] (**)   }
[00B8] (**) }
[00B8] (7C) VAR_RESULT = isSoundRunning(82);
[00BC] (A8) if (VAR_RESULT) {
[00C1] (4C)   soundKludge([272]);
[00C6] (4C)   soundKludge([-1]);
[00CB] (4C)   soundKludge([269,82,0,120]);
[00D9] (1C)   startSound(80);
[00DB] (0A)   startScript(151,[]);
[00DE] (**) }
[00DE] (2A) startScript(202,[],F);
[00E1] (00) stopObjectCode();
END

// EX
[0000] (13) ActorOps(1,[WalkSpeed(8,2)]);
[0006] (00) stopObjectCode();
END

Script# 200 // Ride Balloon to Sea
[0000] (40) cutscene([3]);
[0005] (1A) Local[0] = 48;
[000A] (13) ActorOps(8,[Init(),Costume(18),Scale(Local[0],Local[0]),IgnoreBoxes(),NeverZClip(),InitAnimNr(8),WalkAnimNr(8),StandAnimNr(8),WalkSpeed(6,6)]);
[0020] (11) animateCostume(8,250);
[0023] (80) breakHere();
[0024] (48) if (Var[414] == 853) {
[002B] (2D)   putActorInRoom(8,63);
[002E] (01)   putActor(8,141,44);
[0034] (48) } else if (Var[414] == 854) {
[003E] (2D)   putActorInRoom(8,63);
[0041] (01)   putActor(8,183,32);
[0047] (48) } else if (Var[414] == 855) {
[0051] (2D)   putActorInRoom(8,63);
[0054] (01)   putActor(8,210,38);
[005A] (18)   /* goto 005D; */
[005D] (**) }
[005D] (1E) walkActorTo(8,210,20);
[0063] (AE) WaitForActor(8);
[0066] (1A) Local[1] = 210;
[006B] (41) putActor(8,Local[1],20);
[0071] (13) ActorOps(8,[Scale(Local[0],Local[0])]);
[0079] (AC) Exprmode Local[0] = (48 - ((Local[1] / 4) - 48));
[008C] (80) breakHere();
[008D] (43) VAR_RESULT = getActorX(8);
[0092] (44) if (VAR_RESULT > 230) {
[0099] (46)   Local[1]++;
[009C] (**) }
[009C] (46) Local[1]++;
[009F] (44) unless (Local[1] > 310) goto 006B;
[00A6] (C0) endCutscene();
[00A7] (2D) putActorInRoom(8,0);
[00AA] (13) ActorOps(8,[Init(),Name(" ")]);
[00B1] (5D) setClass(8,[0]);
[00B8] (0A) startScript(10,[]);
[00BB] (72) loadRoom(184);
[00BD] (A0) stopObjectCode();
END

Script# 201 // Check for dig site
[0000] (F6) walkActorToObject(VAR_EGO,Local[0]);
[0005] (AE) WaitForActor(VAR_EGO);
[0009] (43) Var[351] = getActorX(1);
[000E] (23) Var[352] = getActorY(1);
[0013] (C3) Var[445] = getActorX(Local[0]);
[0018] (A3) Var[446] = getActorY(Local[0]);
[001D] (BA) Var[445] -= Var[351];
[0022] (BA) Var[446] -= Var[352];
[0027] (78) if (Var[445] < 0) {
[002E] (AC)   Exprmode Var[445] = (0 - Var[445]);
[0039] (**) }
[0039] (78) if (Var[446] < 0) {
[0040] (AC)   Exprmode Var[446] = (0 - Var[446]);
[004B] (**) }
[004B] (78) if (Var[445] < 15) {
[0052] (78)   if (Var[446] < 15) {
[0059] (DD)     setClass(Local[0],[140]);
[0060] (C8)     if (Local[0] == Var[414]) {
[0067] (24)       loadRoomWithEgo(945,69,117,57);
[006F] (18)     } else {
[0072] (D8)       printEgo([Text("Nothing here.")]);
[0082] (**)     }
[0082] (**)   }
[0082] (**) }
[0082] (A0) stopObjectCode();
END

Script# 202 // Change walk speed
[0000] (1A) Local[0] = -1;
[0005] (80) breakHere();
[0006] (7B) Local[1] = getActorWalkBox(1);
[000A] (88) if (Local[1] != Local[0]) {
[0011] (48)   if (Local[1] == 2) {
[0018] (13)     ActorOps(1,[WalkSpeed(8,3)]);
[001E] (48)   } else if (Local[1] == 6) {
[0028] (13)     ActorOps(1,[WalkSpeed(16,4)]);
[002E] (48)   } else if (Local[1] == 7) {
[0038] (13)     ActorOps(1,[WalkSpeed(20,6)]);
[003E] (48)   } else if (Local[1] == 8) {
[0048] (13)     ActorOps(1,[WalkSpeed(20,6)]);
[004E] (48)   } else if (Local[1] == 9) {
[0058] (13)     ActorOps(1,[WalkSpeed(20,6)]);
[005E] (48)   } else if (Local[1] == 10) {
[0068] (13)     ActorOps(1,[WalkSpeed(20,6)]);
[006E] (48)   } else if (Local[1] == 11) {
[0078] (13)     ActorOps(1,[WalkSpeed(20,6)]);
[007E] (48)   } else if (Local[1] == 13) {
[0088] (13)     ActorOps(1,[WalkSpeed(20,6)]);
[008E] (48)   } else if (Local[1] == 14) {
[0098] (13)     ActorOps(1,[WalkSpeed(16,4)]);
[009E] (48)   } else if (Local[1] == 15) {
[00A8] (13)     ActorOps(1,[WalkSpeed(16,4)]);
[00AE] (48)   } else if (Local[1] == 16) {
[00B8] (13)     ActorOps(1,[WalkSpeed(16,4)]);
[00BE] (18)   } else {
[00C1] (13)     ActorOps(1,[WalkSpeed(8,2)]);
[00C7] (**)   }
[00C7] (9A)   Local[0] = Local[1];
[00CC] (**) }
[00CC] (18) goto 0005;
[00CF] (A0) stopObjectCode();
END

// Object 851: Path Back to Dock
Events:
   A - 000C
[000C] (24) loadRoomWithEgo(596,49,-1,-1);
[0014] (00) stopObjectCode();
END

// Object 853: Gap in Mountain
Events:
   9 - 0019
   A - 0012
  5A - 0128
[0012] (0A) startScript(201,[853]);
[0018] (00) stopObjectCode();
[0019] (9D) if (classOfIs(VAR_ME,[12])) {
[0022] (D8)   printEgo([Text("Looks like a path into the mountain range.")]);
[004F] (C8) } else if (VAR_ME == Var[414]) {
[0059] (D8)   printEgo([Text("It's the former Nazi dig site.")]);
[007A] (18) } else {
[007D] (D8)   printEgo([Text("It's just a dead-end.")]);
[0095] (**) }
[0095] (43) Var[445] = getActorX(853);
[009A] (23) Var[446] = getActorY(853);
[009F] (AC) Exprmode Var[442] = (Var[445] - <VAR_RESULT = getActorX(VAR_EGO)>);
[00AD] (AC) Exprmode Var[443] = (Var[446] - <VAR_RESULT = getActorY(VAR_EGO)>);
[00BB] (78) if (Var[442] < 0) {
[00C2] (AC)   Exprmode Var[442] = (0 - Var[442]);
[00CD] (**) }
[00CD] (78) if (Var[443] < 0) {
[00D4] (AC)   Exprmode Var[443] = (0 - Var[443]);
[00DF] (**) }
[00DF] (91) animateCostume(VAR_EGO,255);
[00E3] (84) if (Var[442] <= Var[443]) {
[00EA] (A3)   VAR_RESULT = getActorY(VAR_EGO);
[00EF] (BA)   Var[446] -= VAR_RESULT;
[00F4] (04)   if (Var[446] <= 0) {
[00FB] (91)     animateCostume(VAR_EGO,247);
[00FF] (18)   } else {
[0102] (91)     animateCostume(VAR_EGO,246);
[0106] (**)   }
[0106] (18) } else {
[0109] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[010E] (BA)   Var[445] -= VAR_RESULT;
[0113] (04)   if (Var[445] <= 0) {
[011A] (91)     animateCostume(VAR_EGO,244);
[011E] (18)   } else {
[0121] (91)     animateCostume(VAR_EGO,245);
[0125] (**)   }
[0125] (**) }
[0125] (80) breakHere();
[0126] (80) breakHere();
[0127] (00) stopObjectCode();
[0128] (1A) Var[123] = 9;
[012D] (00) stopObjectCode();
END

// Object 854: Notch in Mountain
Events:
   9 - 0019
   A - 0012
  5A - 0128
[0012] (0A) startScript(201,[854]);
[0018] (00) stopObjectCode();
[0019] (9D) if (classOfIs(VAR_ME,[12])) {
[0022] (D8)   printEgo([Text("Looks like a path into the mountain range.")]);
[004F] (C8) } else if (VAR_ME == Var[414]) {
[0059] (D8)   printEgo([Text("It's the former Nazi dig site.")]);
[007A] (18) } else {
[007D] (D8)   printEgo([Text("It's just a dead-end.")]);
[0095] (**) }
[0095] (43) Var[445] = getActorX(854);
[009A] (23) Var[446] = getActorY(854);
[009F] (AC) Exprmode Var[442] = (Var[445] - <VAR_RESULT = getActorX(VAR_EGO)>);
[00AD] (AC) Exprmode Var[443] = (Var[446] - <VAR_RESULT = getActorY(VAR_EGO)>);
[00BB] (78) if (Var[442] < 0) {
[00C2] (AC)   Exprmode Var[442] = (0 - Var[442]);
[00CD] (**) }
[00CD] (78) if (Var[443] < 0) {
[00D4] (AC)   Exprmode Var[443] = (0 - Var[443]);
[00DF] (**) }
[00DF] (91) animateCostume(VAR_EGO,255);
[00E3] (84) if (Var[442] <= Var[443]) {
[00EA] (A3)   VAR_RESULT = getActorY(VAR_EGO);
[00EF] (BA)   Var[446] -= VAR_RESULT;
[00F4] (04)   if (Var[446] <= 0) {
[00FB] (91)     animateCostume(VAR_EGO,247);
[00FF] (18)   } else {
[0102] (91)     animateCostume(VAR_EGO,246);
[0106] (**)   }
[0106] (18) } else {
[0109] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[010E] (BA)   Var[445] -= VAR_RESULT;
[0113] (04)   if (Var[445] <= 0) {
[011A] (91)     animateCostume(VAR_EGO,244);
[011E] (18)   } else {
[0121] (91)     animateCostume(VAR_EGO,245);
[0125] (**)   }
[0125] (**) }
[0125] (80) breakHere();
[0126] (80) breakHere();
[0127] (00) stopObjectCode();
[0128] (1A) Var[123] = 9;
[012D] (00) stopObjectCode();
END

// Object 855: Cleft in Mountain
Events:
   9 - 0019
   A - 0012
  5A - 0128
[0012] (0A) startScript(201,[855]);
[0018] (00) stopObjectCode();
[0019] (9D) if (classOfIs(VAR_ME,[12])) {
[0022] (D8)   printEgo([Text("Looks like a path into the mountain range.")]);
[004F] (C8) } else if (VAR_ME == Var[414]) {
[0059] (D8)   printEgo([Text("It's the former Nazi dig site.")]);
[007A] (18) } else {
[007D] (D8)   printEgo([Text("It's just a dead-end.")]);
[0095] (**) }
[0095] (43) Var[445] = getActorX(855);
[009A] (23) Var[446] = getActorY(855);
[009F] (AC) Exprmode Var[442] = (Var[445] - <VAR_RESULT = getActorX(VAR_EGO)>);
[00AD] (AC) Exprmode Var[443] = (Var[446] - <VAR_RESULT = getActorY(VAR_EGO)>);
[00BB] (78) if (Var[442] < 0) {
[00C2] (AC)   Exprmode Var[442] = (0 - Var[442]);
[00CD] (**) }
[00CD] (78) if (Var[443] < 0) {
[00D4] (AC)   Exprmode Var[443] = (0 - Var[443]);
[00DF] (**) }
[00DF] (91) animateCostume(VAR_EGO,255);
[00E3] (84) if (Var[442] <= Var[443]) {
[00EA] (A3)   VAR_RESULT = getActorY(VAR_EGO);
[00EF] (BA)   Var[446] -= VAR_RESULT;
[00F4] (04)   if (Var[446] <= 0) {
[00FB] (91)     animateCostume(VAR_EGO,247);
[00FF] (18)   } else {
[0102] (91)     animateCostume(VAR_EGO,246);
[0106] (**)   }
[0106] (18) } else {
[0109] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[010E] (BA)   Var[445] -= VAR_RESULT;
[0113] (04)   if (Var[445] <= 0) {
[011A] (91)     animateCostume(VAR_EGO,244);
[011E] (18)   } else {
[0121] (91)     animateCostume(VAR_EGO,245);
[0125] (**)   }
[0125] (**) }
[0125] (80) breakHere();
[0126] (80) breakHere();
[0127] (00) stopObjectCode();
[0128] (1A) Var[123] = 9;
[012D] (00) stopObjectCode();
END
