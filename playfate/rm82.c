/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 82: Salvage Boat Underwater (sal-under)
 */

// EN
[0000] (33) setRoomShadow(200,200,200,16,255);
[000B] (08) if (Var[224] != 82) {
[0012] (0F)   VAR_RESULT = getObjectState(488);
[0017] (48)   if (VAR_RESULT == 1) {
[001E] (4C)     soundKludge([272]);
[0023] (4C)     soundKludge([-1]);
[0028] (4C)     soundKludge([262,157,128]);
[0033] (32)     setCameraAt(384);
[0036] (0A)     startScript(201,[]);
[0039] (18)   } else {
[003C] (33)     setRGBRoomIntensity(100,100,100,192,255);
[0047] (AC)     Exprmode Var[442] = <VAR_RESULT = getRandomNr(6)>;
[0050] (AC)     Exprmode Var[443] = (1096 + Var[442]);
[005B] (DD)     setClass(Var[443],[6]);
[0062] (D2)     actorFollowCamera(VAR_EGO);
[0065] (0A)     startScript(202,[]);
[0068] (**)   }
[0068] (18) } else {
[006B] (33)   screenEffect(257);
[006F] (0A)   startScript(205,[]);
[0072] (80)   breakHere();
[0073] (68)   VAR_RESULT = isScriptRunning(205);
[0077] (28)   unless (!VAR_RESULT) goto 0072;
[007C] (0A)   startScript(200,[Var[452]]);
[0082] (**) }
[0082] (2A) startScript(204,[],F);
[0085] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200 // Countdown to Drowning
[0000] (48) if (Local[0] == 1) {
[0007] (2E)   delay(900);
[000B] (18)   goto 00B5;
[000E] (48) } else if (Local[0] == 2) {
[0018] (2E)   delay(900);
[001C] (18)   goto 0103;
[001F] (48) } else if (Local[0] == 3) {
[0029] (2E)   delay(900);
[002D] (18)   goto 017A;
[0030] (48) } else if (Local[0] == 4) {
[003A] (2E)   delay(900);
[003E] (18)   goto 01C0;
[0041] (48) } else if (Local[0] == 5) {
[004B] (2E)   delay(900);
[004F] (18)   goto 021F;
[0052] (48) } else if (Local[0] == 6) {
[005C] (2E)   delay(900);
[0060] (18)   goto 026D;
[0063] (48) } else if (Local[0] == 7) {
[006D] (2E)   delay(900);
[0071] (18)   goto 02D9;
[0074] (48) } else if (Local[0] == 8) {
[007E] (2E)   delay(900);
[0082] (18)   goto 031F;
[0085] (48) } else if (Local[0] == 9) {
[008F] (2E)   delay(900);
[0093] (18)   goto 0381;
[0096] (48) } else if (Local[0] == 10) {
[00A0] (2E)   delay(900);
[00A4] (18)   goto 03D4;
[00A7] (18)   /* goto 00AA; */
[00AA] (**) }
[00AA] (1A) Var[452] = 1;
[00AF] (AE) WaitForMessage();
[00B1] (2E) delay(1800);
[00B5] (1A) Var[452] = 2;
[00BA] (43) Var[351] = getActorX(1);
[00BF] (23) Var[352] = getActorY(1);
[00C4] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[00CF] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[00DA] (AC) Exprmode Var[443] = (Var[352] - 35);
[00E5] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("*koff*  *koff*")]);
[00FD] (AE) WaitForMessage();
[00FF] (2E) delay(1800);
[0103] (1A) Var[452] = 3;
[0108] (43) Var[351] = getActorX(1);
[010D] (23) Var[352] = getActorY(1);
[0112] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[011D] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[0128] (AC) Exprmode Var[443] = (Var[352] - 35);
[0133] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("Just a couple of minutes\x10left." + wait() + "Where's that entrance!?")]);
[0174] (AE) WaitForMessage();
[0176] (2E) delay(1800);
[017A] (1A) Var[452] = 4;
[017F] (43) Var[351] = getActorX(1);
[0184] (23) Var[352] = getActorY(1);
[0189] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[0194] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[019F] (AC) Exprmode Var[443] = (Var[352] - 35);
[01AA] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("*hakk*")]);
[01BA] (AE) WaitForMessage();
[01BC] (2E) delay(1800);
[01C0] (1A) Var[452] = 5;
[01C5] (43) Var[351] = getActorX(1);
[01CA] (23) Var[352] = getActorY(1);
[01CF] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[01DA] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[01E5] (AC) Exprmode Var[443] = (Var[352] - 35);
[01F0] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("Another minute and I'm a\x10goner!")]);
[0219] (AE) WaitForMessage();
[021B] (2E) delay(1800);
[021F] (1A) Var[452] = 6;
[0224] (43) Var[351] = getActorX(1);
[0229] (23) Var[352] = getActorY(1);
[022E] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[0239] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[0244] (AC) Exprmode Var[443] = (Var[352] - 35);
[024F] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("*pant*  *pant*")]);
[0267] (AE) WaitForMessage();
[0269] (2E) delay(1800);
[026D] (1A) Var[452] = 7;
[0272] (43) Var[351] = getActorX(1);
[0277] (23) Var[352] = getActorY(1);
[027C] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[0287] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[0292] (AC) Exprmode Var[443] = (Var[352] - 35);
[029D] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("That's it^" + wait() + "^better start holding my\x10breath!")]);
[02D3] (AE) WaitForMessage();
[02D5] (2E) delay(900);
[02D9] (1A) Var[452] = 8;
[02DE] (43) Var[351] = getActorX(1);
[02E3] (23) Var[352] = getActorY(1);
[02E8] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[02F3] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[02FE] (AC) Exprmode Var[443] = (Var[352] - 35);
[0309] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("*gasp*")]);
[0319] (AE) WaitForMessage();
[031B] (2E) delay(900);
[031F] (1A) Var[452] = 9;
[0324] (43) Var[351] = getActorX(1);
[0329] (23) Var[352] = getActorY(1);
[032E] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[0339] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[0344] (AC) Exprmode Var[443] = (Var[352] - 35);
[034F] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("*wheeze*" + wait() + "Only a few seconds left!")]);
[037B] (AE) WaitForMessage();
[037D] (2E) delay(600);
[0381] (1A) Var[452] = 10;
[0386] (43) Var[351] = getActorX(1);
[038B] (23) Var[352] = getActorY(1);
[0390] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[039B] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[03A6] (AC) Exprmode Var[443] = (Var[352] - 35);
[03B1] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("Ohh^I feel\x10SO\x10sleeeepy^")]);
[03D2] (AE) WaitForMessage();
[03D4] (2E) delay(480);
[03D8] (4C) soundKludge([257,78,0]);
[03E3] (4C) soundKludge([257,79,0]);
[03EE] (4C) soundKludge([269,78,0,360]);
[03FC] (4C) soundKludge([269,79,0,360]);
[040A] (42) chainScript(57,[31]);
[0410] (A0) stopObjectCode();
END

Script# 201 // Diving In
[0000] (40) cutscene([2]);
[0005] (13) ActorOps(8,[Init(),Costume(192),IgnoreBoxes(),NeverZClip()]);
[000D] (2D) putActorInRoom(8,82);
[0010] (01) putActor(8,335,100);
[0016] (11) animateCostume(1,250);
[0019] (13) ActorOps(1,[Costume(146),IgnoreBoxes(),NeverZClip()]);
[0020] (80) breakHere();
[0021] (2D) putActorInRoom(1,82);
[0024] (01) putActor(1,380,0);
[002A] (11) animateCostume(1,6);
[002D] (80) breakHere();
[002E] (43) Var[351] = getActorX(1);
[0033] (23) Var[352] = getActorY(1);
[0038] (3B) Local[1] = getActorScale(1);
[003C] (1A) Local[0] = 0;
[0041] (16) Var[442] = getRandomNr(2);
[0045] (3A) Var[442] -= 1;
[004A] (DA) Var[351] += Var[442];
[004F] (78) if (Local[0] < 1) {
[0056] (5A)   Var[352] += 2;
[005B] (78) } else if (Local[0] < 3) {
[0065] (5A)   Var[352] += 5;
[006A] (3A)   Local[1] -= 4;
[006F] (78) } else if (Local[0] < 7) {
[0079] (5A)   Var[352] += 4;
[007E] (3A)   Local[1] -= 3;
[0083] (78) } else if (Local[0] < 14) {
[008D] (5A)   Var[352] += 3;
[0092] (3A)   Local[1] -= 2;
[0097] (78) } else if (Local[0] < 24) {
[00A1] (5A)   Var[352] += 2;
[00A6] (3A)   Local[1] -= 1;
[00AB] (18)   goto 00BB;
[00AE] (18) } else {
[00B1] (5A)   Var[352] += 1;
[00B6] (3A)   Local[1] -= 1;
[00BB] (**) }
[00BB] (13) ActorOps(1,[Scale(Local[1],Local[1])]);
[00C3] (61) putActor(1,Var[351],Var[352]);
[00C9] (80) breakHere();
[00CA] (46) Local[0]++;
[00CD] (44) unless (Local[0] > 41) goto 0041;
[00D4] (11) animateCostume(1,250);
[00D7] (13) ActorOps(1,[Costume(147),IgnoreBoxes(),NeverZClip()]);
[00DE] (13) ActorOps(1,[Scale(255,255)]);
[00E4] (2D) putActorInRoom(1,82);
[00E7] (61) putActor(1,Var[351],Var[352]);
[00ED] (13) ActorOps(11,[Init(),Costume(98),IgnoreBoxes(),NeverZClip(),WalkSpeed(3,1),Elevation(100)]);
[00FB] (2D) putActorInRoom(11,82);
[00FE] (01) putActor(11,721,266);
[0104] (1E) walkActorTo(11,428,202);
[010A] (0A) startScript(203,[]);
[010D] (0C) Resource.loadSound(140);
[0110] (80) breakHere();
[0111] (80) breakHere();
[0112] (80) breakHere();
[0113] (80) breakHere();
[0114] (D8) printEgo([Text("Hey-- what\x10happened?" + wait() + "Don't stop^")]);
[0138] (AE) WaitForMessage();
[013A] (4C) soundKludge([257,157,0]);
[0145] (4C) soundKludge([269,157,0,60]);
[0153] (4C) soundKludge([-1]);
[0158] (1C) startSound(140);
[015A] (D8) printEgo([Text("^Atlantis is right below me!")]);
[0179] (AE) WaitForMessage();
[017B] (80) breakHere();
[017C] (80) breakHere();
[017D] (80) breakHere();
[017E] (80) breakHere();
[017F] (80) breakHere();
[0180] (80) breakHere();
[0181] (D8) printEgo([Text("Uh-oh^" + wait() + "^what's that shadow" + newline() + "pulling alongside the\x10boat!?")]);
[01BD] (AE) WaitForMessage();
[01BF] (07) setState(488,0);
[01C3] (C0) endCutscene();
[01C4] (72) loadRoom(42);
[01C6] (A0) stopObjectCode();
END

Script# 202 // Going Down
[0000] (40) cutscene([2]);
[0005] (13) ActorOps(8,[Init(),Costume(192),IgnoreBoxes(),NeverZClip(),WalkSpeed(3,1)]);
[0010] (2D) putActorInRoom(8,82);
[0013] (01) putActor(8,335,100);
[0019] (13) ActorOps(11,[Init(),Costume(98),IgnoreBoxes(),NeverZClip(),WalkSpeed(3,1),Elevation(100)]);
[0027] (2D) putActorInRoom(11,82);
[002A] (01) putActor(11,428,202);
[0030] (11) animateCostume(1,250);
[0033] (13) ActorOps(1,[Costume(147),IgnoreBoxes(),NeverZClip()]);
[003A] (80) breakHere();
[003B] (11) animateCostume(1,6);
[003E] (80) breakHere();
[003F] (11) animateCostume(1,7);
[0042] (80) breakHere();
[0043] (3B) Local[0] = getActorScale(1);
[0047] (AE) WaitForMessage();
[0049] (D8) printEgo([Text("Whoa!")]);
[0051] (9A) Local[1] = Local[0];
[0056] (3A) Local[1] -= 4;
[005B] (13) ActorOps(1,[Scale(Local[1],Local[1])]);
[0063] (C3) Var[351] = getActorX(VAR_EGO);
[0068] (A3) Var[352] = getActorY(VAR_EGO);
[006D] (16) Var[442] = getRandomNr(2);
[0071] (3A) Var[442] -= 1;
[0076] (DA) Var[351] += Var[442];
[007B] (16) Var[442] = getRandomNr(4);
[007F] (3A) Var[442] -= 2;
[0084] (DA) Var[352] += Var[442];
[0089] (44) if (Var[352] > 50) {
[0090] (56)   VAR_RESULT = getActorMoving(8);
[0094] (28)   if (!VAR_RESULT) {
[0099] (1E)     walkActorTo(8,-54,0);
[009F] (**)   }
[009F] (**) }
[009F] (44) if (Var[352] > 70) {
[00A6] (56)   VAR_RESULT = getActorMoving(11);
[00AA] (28)   if (!VAR_RESULT) {
[00AF] (1E)     walkActorTo(11,27,100);
[00B5] (**)   }
[00B5] (**) }
[00B5] (44) if (Var[352] > 135) {
[00BC] (16)   Var[442] = getRandomNr(4);
[00C0] (BA)   Var[352] -= Var[442];
[00C5] (**) }
[00C5] (78) if (Var[352] < 9) {
[00CC] (16)   Var[442] = getRandomNr(4);
[00D0] (DA)   Var[352] += Var[442];
[00D5] (**) }
[00D5] (61) putActor(1,Var[351],Var[352]);
[00DB] (80) breakHere();
[00DC] (C6) Local[1]--;
[00DF] (78) unless (Local[1] < 30) goto 0056;
[00E6] (13) ActorOps(1,[StandAnimNr(3)]);
[00EB] (13) ActorOps(1,[Costume(85),FollowBoxes(),WalkSpeed(2,1),Scale(255,255)]);
[00F7] (43) Var[445] = getActorX(1);
[00FC] (23) Var[446] = getActorY(1);
[0101] (61) putActor(1,Var[445],Var[446]);
[0107] (40) cutscene([2]);
[010C] (80) breakHere();
[010D] (80) breakHere();
[010E] (80) breakHere();
[010F] (80) breakHere();
[0110] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[011B] (AC) Exprmode Var[442] = (Var[351] - Var[443]);
[0126] (AC) Exprmode Var[443] = (Var[352] - 35);
[0131] (14) print(1,[Center(),Pos(Var[442],Var[443]),Text("Oh boy^" + wait() + "I've got maybe three" + newline() + "minutes of air in my\x10suit^" + wait() + "^better start hiking^")]);
[018B] (AE) WaitForMessage();
[018D] (C0) endCutscene();
[018E] (2D) putActorInRoom(8,0);
[0191] (2D) putActorInRoom(11,0);
[0194] (C0) endCutscene();
[0195] (1A) Var[452] = 0;
[019A] (2A) startScript(200,[Var[452]],F);
[01A0] (A0) stopObjectCode();
END


Script# 203
[0000] (43) Var[351] = getActorX(1);
[0005] (23) Var[352] = getActorY(1);
[000A] (16) Var[442] = getRandomNr(2);
[000E] (3A) Var[442] -= 1;
[0013] (DA) Var[351] += Var[442];
[0018] (61) putActor(1,Var[351],Var[352]);
[001E] (11) animateCostume(1,7);
[0021] (80) breakHere();
[0022] (80) breakHere();
[0023] (80) breakHere();
[0024] (80) breakHere();
[0025] (18) goto 0000;
[0028] (A0) stopObjectCode();
END

Script# 204 // Found the Entrance
[0000] (C3) Var[351] = getActorX(VAR_EGO);
[0005] (A3) Var[352] = getActorY(VAR_EGO);
[000A] (78) if (Var[351] < 10) {
[0011] (33)   screenEffect(130);
[0015] (A1)   putActor(VAR_EGO,562,Var[352]);
[001C] (72)   loadRoom(82);
[001E] (**) }
[001E] (44) if (Var[351] > 540) {
[0025] (33)   screenEffect(131);
[0029] (A1)   putActor(VAR_EGO,-7,Var[352]);
[0030] (72)   loadRoom(82);
[0032] (**) }
[0032] (80) breakHere();
[0033] (18) goto 0000;
[0036] (A0) stopObjectCode();
END

Script# 205
[0000] (40) cutscene([2]);
[0005] (D2) actorFollowCamera(VAR_EGO);
[0008] (C3) Var[351] = getActorX(VAR_EGO);
[000D] (A3) Var[352] = getActorY(VAR_EGO);
[0012] (78) if (Var[351] < 160) {
[0019] (5A)   Var[351] += 30;
[001E] (18) } else {
[0021] (3A)   Var[351] -= 30;
[0026] (**) }
[0026] (FE) walkActorTo(VAR_EGO,Var[351],Var[352]);
[002D] (AE) WaitForActor(VAR_EGO);
[0031] (C0) endCutscene();
[0032] (A0) stopObjectCode();
END

// Object 1096: Cave
Events:
   9 - 0034
   A - 0012
  5A - 0050
[0012] (9D) if (classOfIs(VAR_ME,[6])) {
[001B] (13)   ActorOps(1,[Costume(2),WalkSpeed(8,2)]);
[0023] (72)   loadRoom(48);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("Nothing.")]);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (D8) printEgo([Text("Looks like a cave to me.")]);
[004F] (00) stopObjectCode();
[0050] (1A) Var[123] = 9;
[0055] (00) stopObjectCode();

// Object 1097: Cave
Events:
   9 - 0034
   A - 0012
  5A - 0050
[0012] (9D) if (classOfIs(VAR_ME,[6])) {
[001B] (13)   ActorOps(1,[Costume(2),WalkSpeed(8,2)]);
[0023] (72)   loadRoom(48);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("Nothing.")]);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (D8) printEgo([Text("Looks like a cave to me.")]);
[004F] (00) stopObjectCode();
[0050] (1A) Var[123] = 9;
[0055] (00) stopObjectCode();

// Object 1098: Cave
Events:
   9 - 0034
   A - 0012
  5A - 0050
[0012] (9D) if (classOfIs(VAR_ME,[6])) {
[001B] (13)   ActorOps(1,[Costume(2),WalkSpeed(8,2)]);
[0023] (72)   loadRoom(48);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("Nothing.")]);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (D8) printEgo([Text("Looks like a cave to me.")]);
[004F] (00) stopObjectCode();
[0050] (1A) Var[123] = 9;
[0055] (00) stopObjectCode();

// Object 1099: Cave
Events:
   9 - 0034
   A - 0012
  5A - 0050
[0012] (9D) if (classOfIs(VAR_ME,[6])) {
[001B] (13)   ActorOps(1,[Costume(2),WalkSpeed(8,2)]);
[0023] (72)   loadRoom(48);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("Nothing.")]);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (D8) printEgo([Text("Looks like a cave to me.")]);
[004F] (00) stopObjectCode();
[0050] (1A) Var[123] = 9;
[0055] (00) stopObjectCode();

// Object 1100: Cave
Events:
   9 - 0034
   A - 0012
  5A - 0050
[0012] (9D) if (classOfIs(VAR_ME,[6])) {
[001B] (13)   ActorOps(1,[Costume(2),WalkSpeed(8,2)]);
[0023] (72)   loadRoom(48);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("Nothing.")]);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (D8) printEgo([Text("Looks like a cave to me.")]);
[004F] (00) stopObjectCode();
[0050] (1A) Var[123] = 9;
[0055] (00) stopObjectCode();

// Object 1101: Cave
Events:
   9 - 0034
   A - 0012
  5A - 0050
[0012] (9D) if (classOfIs(VAR_ME,[6])) {
[001B] (13)   ActorOps(1,[Costume(2),WalkSpeed(8,2)]);
[0023] (72)   loadRoom(48);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("Nothing.")]);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (D8) printEgo([Text("Looks like a cave to me.")]);
[004F] (00) stopObjectCode();
[0050] (1A) Var[123] = 9;
[0055] (00) stopObjectCode();

// Object 1102: Cave
Events:
   9 - 0034
   A - 0012
  5A - 0050
[0012] (9D) if (classOfIs(VAR_ME,[6])) {
[001B] (13)   ActorOps(1,[Costume(2),WalkSpeed(8,2)]);
[0023] (72)   loadRoom(48);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("Nothing.")]);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (D8) printEgo([Text("Looks like a cave to me.")]);
[004F] (00) stopObjectCode();
[0050] (1A) Var[123] = 9;
[0055] (00) stopObjectCode();