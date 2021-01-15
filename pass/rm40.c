/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 40: owlwood
 */

// EN
[0000] (62) stopScript(203);
[0002] (1A) Bit[96] = 1;
[0007] (5C) oldRoomEffect-set(-32512);
[000B] (0A) startScript(136,[16]);
[0011] (0A) startScript(126,[0]);
[0017] (28) if (!Bit[96]) {
[001C] (0C)   Resource.loadCostume(40);
[001F] (5D)   setClass(3,[0,150,148]);
[002C] (13)   ActorOps(3,[Costume(40),Elevation(30),WalkSpeed(8,4),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[003D] (11)   animateCostume(3,250);
[0040] (2D)   putActorInRoom(3,40);
[0043] (01)   putActor(3,175,127);
[0049] (11)   animateCostume(3,3);
[004C] (5D)   setClass(4,[0,150,149]);
[0059] (48)   if (VAR_VIDEOMODE == 4) {
[0060] (13)     ActorOps(4,[Palette(11,4)]);
[0066] (**)   }
[0066] (11)   animateCostume(4,250);
[0069] (2D)   putActorInRoom(4,40);
[006C] (01)   putActor(4,47,130);
[0072] (11)   animateCostume(4,3);
[0075] (2A)   startScript(203,[],F);
[0078] (**) }
[0078] (A6) setVarRange(Var[299],5,[471,159,289,35,121]);
[0086] (26) setVarRange(Var[307],5,[39,8,43,24,31]);
[008F] (2A) startScript(123,[5],F);
[0095] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200 // Look in Hole
[0000] (40) cutscene([]);
[0002] (9D) if (classOfIs(Local[0],[3])) {
[000B] (DD)   setClass(Local[0],[131]);
[0012] (48)   if (Var[315] == 0) {
[0019] (46)     Var[315]++;
[001C] (DD)     setClass(Local[0],[132]);
[0023] (14)     print(1,[Center(),Text("There's an owl in there!")]);
[0040] (48)   } else if (Var[315] == 1) {
[004A] (46)     Var[315]++;
[004D] (DD)     setClass(Local[0],[132]);
[0054] (14)     print(1,[Center(),Text("This hole has an owl too.")]);
[0072] (48)   } else if (Var[315] == 2) {
[007C] (46)     Var[315]++;
[007F] (DD)     setClass(Local[0],[132]);
[0086] (14)     print(1,[Center(),Text("Another owl! The woods must be full of 'em.")]);
[00B6] (9D)   } else if (classOfIs(Local[0],[132])) {
[00C2] (14)     print(1,[Center(),Text("Looks as if all the holes are full.")]);
[00EA] (18)   } else {
[00ED] (14)     print(1,[Center(),Text("This hole is empty.")]);
[0105] (18)     goto 01D9;
[0108] (**)   }
[0108] (9D) } else if (classOfIs(Local[0],[132])) {
[0114] (16)   Local[1] = getRandomNr(2);
[0118] (48)   if (Local[1] == 0) {
[011F] (14)     print(1,[Center(),Text("Still there.")]);
[0130] (48)   } else if (Local[1] == 1) {
[013A] (14)     print(1,[Center(),Text("Hasn't left yet.")]);
[014F] (18)   } else {
[0152] (14)     print(1,[Center(),Text("It's still in there.")]);
[016B] (**)   }
[016B] (18) } else {
[016E] (14)   print(1,[Center(),Text("Still empty.")]);
[017F] (18) } else {
[0182] (0A)   startScript(116,[]);
[0185] (0A)   startScript(127,[3]);
[018B] (1A)   Local[2] = 0;
[0190] (0A)   startScript(201,[Local[0],Local[2]]);
[0199] (80)   breakHere();
[019A] (28)   unless (!Bit[72]) goto 0199;
[019F] (1A)   Local[3] = 517;
[01A4] (88)   if (Local[0] != Local[3]) {
[01AB] (9D)     if (classOfIs(Local[3],[131])) {
[01B4] (9D)       if (classOfIs(Local[3],[132])) {
[01BD] (46)         Local[2]++;
[01C0] (0A)         startScript(201,[Local[3],Local[2]]);
[01C9] (80)         breakHere();
[01CA] (28)         unless (!Bit[72]) goto 01C9;
[01CF] (**)       }
[01CF] (**)     }
[01CF] (**)   }
[01CF] (46)   Local[3]++;
[01D2] (44)   unless (Local[3] > 520) goto 01A4;
[01D9] (**) }
[01D9] (C0) endCutscene();
[01DA] (48) if (Local[2] == 3) {
[01E1] (48)   if (Var[188] == 2) {
[01E8] (0A)     startScript(128,[3]);
[01EE] (**)   }
[01EE] (**) }
[01EE] (A0) stopObjectCode();
END

Script# 201
[0000] (48) if (Local[0] == 517) {
[0007] (1A)   Local[2] = -60;
[000C] (A6)   setVarRange(Local[6],5,[522,523,523,522,521]);
[001A] (48) } else if (Local[0] == 518) {
[0024] (1A)   Local[2] = -20;
[0029] (A6)   setVarRange(Local[6],5,[525,526,526,525,524]);
[0037] (48) } else if (Local[0] == 519) {
[0041] (1A)   Local[2] = 84;
[0046] (A6)   setVarRange(Local[6],5,[528,529,529,528,527]);
[0054] (48) } else if (Local[0] == 520) {
[005E] (1A)   Local[2] = -6;
[0063] (A6)   setVarRange(Local[6],5,[531,532,532,531,530]);
[0071] (18)   /* goto 0074; */
[0074] (**) }
[0074] (C4) if (VAR_CAMERA_POS_X > Local[2]) {
[007B] (9A)   Local[5] = Var[170 + Local[1]];
[0082] (0A)   startScript(113,[Local[5]]);
[0088] (80)   breakHere();
[0089] (80)   breakHere();
[008A] (1A)   Local[3] = 0;
[008F] (9A)   Local[4] = Local[6 + Local[3]];
[0096] (85)   drawObject(Local[4],255,255);
[009D] (80)   breakHere();
[009E] (46)   Local[3]++;
[00A1] (44)   unless (Local[3] > 4) goto 008F;
[00A8] (**) }
[00A8] (A0) stopObjectCode();
END

Script# 202
[0000] (40) cutscene([0]);
[0005] (1A) Bit[96] = 1;
[000A] (62) stopScript(203);
[000C] (11) animateCostume(1,255);
[000F] (1A) Var[199] = 0;
[0014] (0A) startScript(100,[0]);
[001A] (80) breakHere();
[001B] (58) beginOverride();
[001D] (18) goto 00EB;
[0020] (11) animateCostume(4,249);
[0023] (1E) walkActorTo(4,270,130);
[0029] (80) breakHere();
[002A] (80) breakHere();
[002B] (11) animateCostume(1,250);
[002E] (80) breakHere();
[002F] (13) ActorOps(4,[Palette(15,8),Palette(14,7)]);
[0038] (80) breakHere();
[0039] (80) breakHere();
[003A] (80) breakHere();
[003B] (11) animateCostume(3,7);
[003E] (80) breakHere();
[003F] (5D) setClass(4,[0,150,148]);
[004C] (80) breakHere();
[004D] (11) animateCostume(1,249);
[0050] (80) breakHere();
[0051] (80) breakHere();
[0052] (13) ActorOps(3,[Elevation(0)]);
[0058] (2D) putActorInRoom(3,40);
[005B] (01) putActor(3,175,97);
[0061] (80) breakHere();
[0062] (11) animateCostume(3,8);
[0065] (1A) Local[0] = 1;
[006A] (80) breakHere();
[006B] (46) Local[0]++;
[006E] (44) unless (Local[0] > 6) goto 006A;
[0075] (01) putActor(3,183,86);
[007B] (11) animateCostume(3,249);
[007E] (1E) walkActorTo(3,270,122);
[0084] (80) breakHere();
[0085] (80) breakHere();
[0086] (80) breakHere();
[0087] (5D) setClass(4,[0,150,149]);
[0094] (1A) Local[0] = 1;
[0099] (80) breakHere();
[009A] (46) Local[0]++;
[009D] (44) unless (Local[0] > 7) goto 0099;
[00A4] (2D) putActorInRoom(4,0);
[00A7] (5D) setClass(3,[0,150,149]);
[00B4] (13) ActorOps(3,[WalkSpeed(8,2),WalkAnimNr(6),StandAnimNr(6)]);
[00BE] (1E) walkActorTo(3,330,90);
[00C4] (80) breakHere();
[00C5] (1E) walkActorTo(1,128,130);
[00CB] (AE) WaitForActor(3);
[00CE] (2D) putActorInRoom(3,0);
[00D1] (AE) WaitForActor(1);
[00D4] (14) print(1,[Center(),Text("Poor little fella.")]);
[00EB] (A8) if (VAR_OVERRIDE) {
[00F0] (11)   animateCostume(3,255);
[00F3] (11)   animateCostume(4,255);
[00F6] (2D)   putActorInRoom(3,0);
[00F9] (2D)   putActorInRoom(4,0);
[00FC] (11)   animateCostume(1,249);
[00FF] (01)   putActor(1,128,130);
[0105] (**) }
[0105] (1D) if (classOfIs(517,[4])) {
[010E] (5D)   setClass(517,[132]);
[0115] (5D)   setClass(517,[3]);
[011C] (**) }
[011C] (1D) if (classOfIs(518,[4])) {
[0125] (5D)   setClass(518,[132]);
[012C] (5D)   setClass(518,[3]);
[0133] (**) }
[0133] (1D) if (classOfIs(519,[4])) {
[013C] (5D)   setClass(519,[132]);
[0143] (5D)   setClass(519,[3]);
[014A] (**) }
[014A] (1D) if (classOfIs(520,[4])) {
[0153] (5D)   setClass(520,[132]);
[015A] (5D)   setClass(520,[3]);
[0161] (**) }
[0161] (80) breakHere();
[0162] (C0) endCutscene();
[0163] (A0) stopObjectCode();
END

Script# 203
[0000] (16) Local[0] = getRandomNr(32);
[0004] (5A) Local[0] += 4;
[0009] (80) breakHere();
[000A] (C6) Local[0]--;
[000D] (28) unless (!Local[0]) goto 0009;
[0012] (11) animateCostume(4,6);
[0015] (80) breakHere();
[0016] (80) breakHere();
[0017] (80) breakHere();
[0018] (18) goto 0000;
[001B] (A0) stopObjectCode();
END

Script# 204
[0000] (33) RoomScroll(152,160)
[0006] (32) setCameraAt(160);
[0009] (A0) stopObjectCode();
END

Script# 205
[0000] (33) RoomScroll(480,488)
[0006] (32) setCameraAt(480);
[0009] (A0) stopObjectCode();
END

Script# 206 // Draft Won't Work
[0000] (14) print(1,[Center(),Text("That draft won't work on the hole.")]);
[0027] (A0) stopObjectCode();
END

Script# 207 // Already Open
[0000] (14) print(1,[Center(),Text("The hole's already wide open.")]);
[0022] (A0) stopObjectCode();
END

Script# 208 // Won't Like That
[0000] (14) print(1,[Center(),Text("Whatever lives in the hole" + newline() + "might not like that.")]);
[0035] (A0) stopObjectCode();
END

Script# 209
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (80) breakHere();
[000B] (28) unless (!Bit[72]) goto 000A;
[0010] (1A) Bit[70] = 0;
[0015] (80) breakHere();
[0016] (28) unless (!Bit[71]) goto 0015;
[001B] (1A) Var[199] = 0;
[0020] (0A) startScript(100,[0]);
[0026] (80) breakHere();
[0027] (5D) setClass(5,[0,150,148]);
[0034] (13) ActorOps(5,[Costume(31),Elevation(100)]);
[003C] (11) animateCostume(5,250);
[003F] (1A) Local[0] = 112;
[0044] (5A) Local[0] += 100;
[0049] (2D) putActorInRoom(5,40);
[004C] (21) putActor(5,174,Local[0]);
[0052] (2A) startScript(112,[23],F);
[0058] (11) animateCostume(5,6);
[005B] (1A) Local[0] = 1;
[0060] (80) breakHere();
[0061] (46) Local[0]++;
[0064] (44) unless (Local[0] > 6) goto 0060;
[006B] (11) animateCostume(5,7);
[006E] (1A) Local[0] = 1;
[0073] (80) breakHere();
[0074] (46) Local[0]++;
[0077] (44) unless (Local[0] > 24) goto 0073;
[007E] (11) animateCostume(5,8);
[0081] (1A) Local[0] = 1;
[0086] (80) breakHere();
[0087] (46) Local[0]++;
[008A] (44) unless (Local[0] > 6) goto 0086;
[0091] (2D) putActorInRoom(5,0);
[0094] (80) breakHere();
[0095] (80) breakHere();
[0096] (28) unless (!Var[259]) goto 0095;
[009B] (33) ShakeOn();
[009D] (2E) delay(120);
[00A1] (33) ShakeOff();
[00A3] (62) stopScript(112);
[00A5] (BC) stopSound(Var[259]);
[00A8] (1A) Var[259] = 0;
[00AD] (80) breakHere();
[00AE] (14) print(1,[Center(),Text("Maybe I'd better not try that.")]);
[00D1] (80) breakHere();
[00D2] (C0) endCutscene();
[00D3] (A0) stopObjectCode();
END

// Object 516
Events:
   A - 0018
[0018] (80) breakHere();
[0019] (28) unless (!Bit[88]) goto 0018;
[001E] (24) loadRoomWithEgo(511,39,130,64);
[0026] (00) stopObjectCode();
END

// Object 517: Hole 1
Events:
   1 - 0035
   2 - 0045
  36 - 002E
  38 - 0028
  53 - 0055
[0028] (1A) Var[200] = 533;
[002D] (00) stopObjectCode();
[002E] (0A) startScript(200,[517]);
[0034] (00) stopObjectCode();
[0035] (0A) startScript(110,[5,28,56]);
[0041] (0A) startScript(207,[]);
[0044] (00) stopObjectCode();
[0045] (0A) startScript(110,[5,28,56]);
[0051] (0A) startScript(208,[]);
[0054] (00) stopObjectCode();
[0055] (0A) startScript(110,[5,28,56]);
[0061] (0A) startScript(206,[]);
[0064] (00) stopObjectCode();
END

// Object 518: Hole 2
Events:
   1 - 0035
   2 - 0045
  36 - 002E
  38 - 0028
  53 - 0055
[0028] (1A) Var[200] = 534;
[002D] (00) stopObjectCode();
[002E] (0A) startScript(200,[518]);
[0034] (00) stopObjectCode();
[0035] (0A) startScript(110,[5,54,85]);
[0041] (0A) startScript(207,[]);
[0044] (00) stopObjectCode();
[0045] (0A) startScript(110,[5,54,85]);
[0051] (0A) startScript(208,[]);
[0054] (00) stopObjectCode();
[0055] (0A) startScript(110,[5,54,85]);
[0061] (0A) startScript(206,[]);
[0064] (00) stopObjectCode();
END

// Object 519: Hole 3
Events:
   1 - 0035
   2 - 0045
  36 - 002E
  38 - 0028
  53 - 0055
[0028] (1A) Var[200] = 535;
[002D] (00) stopObjectCode();
[002E] (0A) startScript(200,[519]);
[0034] (00) stopObjectCode();
[0035] (0A) startScript(110,[5,156,67]);
[0041] (0A) startScript(207,[]);
[0044] (00) stopObjectCode();
[0045] (0A) startScript(110,[5,156,67]);
[0051] (0A) startScript(208,[]);
[0054] (00) stopObjectCode();
[0055] (0A) startScript(110,[5,156,67]);
[0061] (0A) startScript(206,[]);
[0064] (00) stopObjectCode();
END

// Object 520: Hole 4
Events:
   1 - 0035
   2 - 0045
  36 - 002E
  38 - 0028
  53 - 0055
[0028] (1A) Var[200] = 535;
[002D] (00) stopObjectCode();
[002E] (0A) startScript(200,[519]);
[0034] (00) stopObjectCode();
[0035] (0A) startScript(110,[5,156,67]);
[0041] (0A) startScript(207,[]);
[0044] (00) stopObjectCode();
[0045] (0A) startScript(110,[5,156,67]);
[0051] (0A) startScript(208,[]);
[0054] (00) stopObjectCode();
[0055] (0A) startScript(110,[5,156,67]);
[0061] (0A) startScript(206,[]);
[0064] (00) stopObjectCode();
END

// Objects 521-536
Events:
END

// Object 537: Sky
Events:
  36 - 0027
  38 - 0021
  53 - 004F
[0021] (1A) Var[200] = 538;
[0026] (00) stopObjectCode();
[0027] (14) print(1,[Center(),Text("The view from the cliff is better.")]);
[004E] (00) stopObjectCode();
[004F] (40) cutscene([]);
[0051] (1A) Bit[73] = 1;
[0056] (80) breakHere();
[0057] (28) unless (!Bit[72]) goto 0056;
[005C] (1A) Bit[70] = 0;
[0061] (80) breakHere();
[0062] (28) unless (!Bit[71]) goto 0061;
[0067] (14) print(1,[Center(),Text("Think I'll have to get closer first.")]);
[0090] (80) breakHere();
[0091] (C0) endCutscene();
[0092] (00) stopObjectCode();
END

// Object 538
Events:
END
