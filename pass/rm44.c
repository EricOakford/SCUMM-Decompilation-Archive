/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 44: Cathedral (cath)
 */

// EN
[0000] (0A) startScript(136,[8]);
[0006] (0A) startScript(126,[1]);
[000C] (0C) Resource.loadCostume(50);
[000F] (0C) Resource.loadCostume(51);
[0012] (0C) Resource.loadCostume(52);
[0015] (13) ActorOps(8,[Costume(50),Elevation(0)]);
[001D] (13) ActorOps(9,[Costume(51),Elevation(0)]);
[0025] (13) ActorOps(10,[Costume(52),Elevation(0)]);
[002D] (1A) Local[0] = 8;
[0032] (DD) setClass(Local[0],[0,148,150]);
[003F] (91) animateCostume(Local[0],250);
[0043] (AD) putActorInRoom(Local[0],44);
[0047] (81) putActor(Local[0],824,116);
[004E] (91) animateCostume(Local[0],6);
[0052] (46) Local[0]++;
[0055] (44) unless (Local[0] > 10) goto 0032;
[005C] (A8) if (Bit[90]) {
[0061] (07)   setState(597,1);
[0065] (30)   setBoxFlags(1,0);
[0069] (30)   setBoxFlags(2,0);
[006D] (18) } else {
[0070] (07)   setState(597,0);
[0074] (30)   setBoxFlags(1,128);
[0078] (30)   setBoxFlags(2,128);
[007C] (**) }
[007C] (A8) if (Bit[91]) {
[0081] (07)   setState(601,1);
[0085] (18) } else {
[0088] (07)   setState(601,0);
[008C] (**) }
[008C] (A8) if (Bit[92]) {
[0091] (07)   setState(602,1);
[0095] (18) } else {
[0098] (07)   setState(602,0);
[009C] (**) }
[009C] (A8) if (Bit[93]) {
[00A1] (07)   setState(603,1);
[00A5] (18) } else {
[00A8] (07)   setState(603,0);
[00AC] (**) }
[00AC] (1D) if (classOfIs(594,[24])) {
[00B5] (0A)   startScript(200,[]);
[00B8] (**) }
[00B8] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (0C) Resource.clearHeap();
[0002] (0C) Resource.loadCostume(56);
[0005] (0C) Resource.loadCostume(54);
[0008] (0C) Resource.loadCostume(55);
[000B] (0C) Resource.loadCostume(53);
[000E] (0C) Resource.loadScript(153);
[0011] (48) if (VAR_SOUNDCARD == 4) {
[0018] (18)   /* goto 001B; */
[001B] (**) }
[001B] (5D) setClass(5,[0,150,149]);
[0028] (13) ActorOps(5,[Costume(56),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(12)]);
[003E] (48) if (VAR_VIDEOMODE == 4) {
[0045] (13)   ActorOps(5,[Palette(4,0),Palette(8,0)]);
[004E] (**) }
[004E] (11) animateCostume(5,250);
[0051] (2D) putActorInRoom(5,44);
[0054] (01) putActor(5,200,124);
[005A] (5D) setClass(2,[0,150,149]);
[0067] (13) ActorOps(2,[Costume(55),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(11)]);
[007D] (11) animateCostume(2,251);
[0080] (2D) putActorInRoom(2,44);
[0083] (01) putActor(2,211,128);
[0089] (5D) setClass(3,[0,150,149]);
[0096] (13) ActorOps(3,[Costume(53),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(10)]);
[00AC] (48) if (VAR_VIDEOMODE == 4) {
[00B3] (13)   ActorOps(3,[Palette(10,15),Palette(7,0)]);
[00BC] (**) }
[00BC] (11) animateCostume(3,249);
[00BF] (2D) putActorInRoom(3,44);
[00C2] (01) putActor(3,185,126);
[00C8] (5D) setClass(4,[0,150,149]);
[00D5] (13) ActorOps(4,[Costume(54),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(14)]);
[00EB] (48) if (VAR_VIDEOMODE == 4) {
[00F2] (13)   ActorOps(4,[Palette(14,15),Palette(7,0),Palette(8,0),Palette(9,0)]);
[0101] (**) }
[0101] (11) animateCostume(4,248);
[0104] (2D) putActorInRoom(4,44);
[0107] (01) putActor(4,220,126);
[010D] (A0) stopObjectCode();
END

Script# 201
[0000] (1E) walkActorTo(3,200,130);
[0006] (AE) WaitForActor(3);
[0009] (11) animateCostume(3,245);
[000C] (A0) stopObjectCode();
END

Script# 202
[0000] (1E) walkActorTo(4,221,121);
[0006] (AE) WaitForActor(4);
[0009] (11) animateCostume(4,246);
[000C] (A0) stopObjectCode();
END

Script# 203
[0000] (1E) walkActorTo(2,209,130);
[0006] (AE) WaitForActor(2);
[0009] (11) animateCostume(2,244);
[000C] (A0) stopObjectCode();
END

Script# 204
[0000] (14) print(1,[Center(),Text("This is a section of the Long Tapestry.")]);
[002C] (A0) stopObjectCode();
END

Script# 205
[0000] (14) print(1,[Center(),Text("Here's another section of" + newline() + "the Long Tapestry.")]);
[0032] (A0) stopObjectCode();
END

Script# 207
[0000] (5D) setClass(11,[0,150,148]);
[000D] (13) ActorOps(11,[Costume(31),Elevation(0),InitAnimNr(1)]);
[0017] (A8) if (Local[2]) {
[001C] (13)   ActorOps(11,[Palette(11,11),Palette(3,10),Palette(9,2)]);
[0028] (**) }
[0028] (11) animateCostume(11,250);
[002B] (2D) putActorInRoom(11,44);
[002E] (61) putActor(11,Local[0],Local[1]);
[0034] (2A) startScript(112,[23],F);
[003A] (11) animateCostume(11,9);
[003D] (1A) Local[3] = 1;
[0042] (80) breakHere();
[0043] (46) Local[3]++;
[0046] (44) unless (Local[3] > 6) goto 0042;
[004D] (11) animateCostume(11,10);
[0050] (1A) Local[3] = 1;
[0055] (80) breakHere();
[0056] (46) Local[3]++;
[0059] (44) unless (Local[3] > 24) goto 0055;
[0060] (11) animateCostume(11,11);
[0063] (1A) Local[3] = 1;
[0068] (80) breakHere();
[0069] (46) Local[3]++;
[006C] (44) unless (Local[3] > 6) goto 0068;
[0073] (2D) putActorInRoom(11,0);
[0076] (80) breakHere();
[0077] (A0) stopObjectCode();
END

Script# 208
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (80) breakHere();
[000B] (28) unless (!Bit[72]) goto 000A;
[0010] (1A) Bit[70] = 0;
[0015] (80) breakHere();
[0016] (28) unless (!Bit[71]) goto 0015;
[001B] (14) print(1,[Center(),Text("This tape\x0Astry's already as colorful" + newline() + "as it can get.")]);
[0054] (80) breakHere();
[0055] (C0) endCutscene();
[0056] (A0) stopObjectCode();
END

Script# 209
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (80) breakHere();
[000B] (28) unless (!Bit[72]) goto 000A;
[0010] (1A) Bit[70] = 0;
[0015] (80) breakHere();
[0016] (28) unless (!Bit[71]) goto 0015;
[001B] (9D) if (classOfIs(Local[0],[132])) {
[0024] (14)   print(1,[Center(),Text("I've already spun all the color out.")]);
[004D] (18) } else {
[0050] (14)   print(1,[Center(),Text("Doubt if I could spin much color" + newline() + "out of it now.")]);
[0085] (**) }
[0085] (80) breakHere();
[0086] (C0) endCutscene();
[0087] (A0) stopObjectCode();
END

Script# 210
[0000] (14) print(1,[Center(),Text("That draft won't work on a tapestry.")]);
[0029] (A0) stopObjectCode();
END

Script# 211
[0000] (28) if (!Bit[91]) {
[0005] (42)   chainScript(208,[]);
[0008] (**) }
[0008] (40) cutscene([0]);
[000D] (1A) Bit[91] = 0;
[0012] (5D) setClass(605,[132]);
[0019] (1A) Bit[73] = 1;
[001E] (80) breakHere();
[001F] (28) unless (!Bit[72]) goto 001E;
[0024] (1A) Bit[70] = 0;
[0029] (80) breakHere();
[002A] (28) unless (!Bit[71]) goto 0029;
[002F] (1A) Var[199] = 0;
[0034] (0A) startScript(100,[0]);
[003A] (80) breakHere();
[003B] (0A) startScript(207,[53,74,1]);
[0047] (1A) Local[0] = 1;
[004C] (80) breakHere();
[004D] (46) Local[0]++;
[0050] (44) unless (Local[0] > 18) goto 004C;
[0057] (07) setState(601,0);
[005B] (80) breakHere();
[005C] (68) VAR_RESULT = isScriptRunning(207);
[0060] (28) unless (!VAR_RESULT) goto 005B;
[0065] (80) breakHere();
[0066] (C0) endCutscene();
[0067] (42) chainScript(217,[]);
[006A] (A0) stopObjectCode();
END

Script# 212
[0000] (A8) if (Bit[91]) {
[0005] (42)   chainScript(209,[605]);
[000B] (**) }
[000B] (40) cutscene([0]);
[0010] (1A) Bit[91] = 1;
[0015] (1A) Bit[73] = 1;
[001A] (80) breakHere();
[001B] (28) unless (!Bit[72]) goto 001A;
[0020] (1A) Bit[70] = 0;
[0025] (80) breakHere();
[0026] (28) unless (!Bit[71]) goto 0025;
[002B] (1A) Var[199] = 0;
[0030] (0A) startScript(100,[0]);
[0036] (80) breakHere();
[0037] (0A) startScript(207,[53,74,0]);
[0043] (1A) Local[0] = 1;
[0048] (80) breakHere();
[0049] (46) Local[0]++;
[004C] (44) unless (Local[0] > 18) goto 0048;
[0053] (07) setState(601,1);
[0057] (80) breakHere();
[0058] (68) VAR_RESULT = isScriptRunning(207);
[005C] (28) unless (!VAR_RESULT) goto 0057;
[0061] (80) breakHere();
[0062] (C0) endCutscene();
[0063] (42) chainScript(217,[]);
[0066] (A0) stopObjectCode();
END

Script# 213
[0000] (A8) if (Bit[92]) {
[0005] (42)   chainScript(208,[]);
[0008] (**) }
[0008] (40) cutscene([0]);
[000D] (1A) Bit[92] = 1;
[0012] (5D) setClass(595,[132]);
[0019] (1A) Bit[73] = 1;
[001E] (80) breakHere();
[001F] (28) unless (!Bit[72]) goto 001E;
[0024] (1A) Bit[70] = 0;
[0029] (80) breakHere();
[002A] (28) unless (!Bit[71]) goto 0029;
[002F] (1A) Var[199] = 0;
[0034] (0A) startScript(100,[0]);
[003A] (80) breakHere();
[003B] (0A) startScript(207,[273,74,1]);
[0047] (1A) Local[0] = 1;
[004C] (80) breakHere();
[004D] (46) Local[0]++;
[0050] (44) unless (Local[0] > 18) goto 004C;
[0057] (07) setState(602,1);
[005B] (80) breakHere();
[005C] (68) VAR_RESULT = isScriptRunning(207);
[0060] (28) unless (!VAR_RESULT) goto 005B;
[0065] (80) breakHere();
[0066] (C0) endCutscene();
[0067] (42) chainScript(217,[]);
[006A] (A0) stopObjectCode();
END

Script# 214
[0000] (28) if (!Bit[92]) {
[0005] (42)   chainScript(209,[595]);
[000B] (**) }
[000B] (40) cutscene([0]);
[0010] (1A) Bit[92] = 0;
[0015] (1A) Bit[73] = 1;
[001A] (80) breakHere();
[001B] (28) unless (!Bit[72]) goto 001A;
[0020] (1A) Bit[70] = 0;
[0025] (80) breakHere();
[0026] (28) unless (!Bit[71]) goto 0025;
[002B] (1A) Var[199] = 0;
[0030] (0A) startScript(100,[0]);
[0036] (80) breakHere();
[0037] (0A) startScript(207,[273,74,0]);
[0043] (1A) Local[0] = 1;
[0048] (80) breakHere();
[0049] (46) Local[0]++;
[004C] (44) unless (Local[0] > 18) goto 0048;
[0053] (07) setState(602,0);
[0057] (80) breakHere();
[0058] (68) VAR_RESULT = isScriptRunning(207);
[005C] (28) unless (!VAR_RESULT) goto 0057;
[0061] (80) breakHere();
[0062] (C0) endCutscene();
[0063] (42) chainScript(217,[]);
[0066] (A0) stopObjectCode();
END

Script# 215
[0000] (A8) if (Bit[93]) {
[0005] (42)   chainScript(208,[]);
[0008] (**) }
[0008] (40) cutscene([0]);
[000D] (1A) Bit[93] = 1;
[0012] (5D) setClass(596,[132]);
[0019] (1A) Bit[73] = 1;
[001E] (80) breakHere();
[001F] (28) unless (!Bit[72]) goto 001E;
[0024] (1A) Bit[70] = 0;
[0029] (80) breakHere();
[002A] (28) unless (!Bit[71]) goto 0029;
[002F] (1A) Var[199] = 0;
[0034] (0A) startScript(100,[0]);
[003A] (80) breakHere();
[003B] (0A) startScript(207,[493,74,1]);
[0047] (1A) Local[0] = 1;
[004C] (80) breakHere();
[004D] (46) Local[0]++;
[0050] (44) unless (Local[0] > 18) goto 004C;
[0057] (07) setState(603,1);
[005B] (80) breakHere();
[005C] (68) VAR_RESULT = isScriptRunning(207);
[0060] (28) unless (!VAR_RESULT) goto 005B;
[0065] (80) breakHere();
[0066] (C0) endCutscene();
[0067] (42) chainScript(217,[]);
[006A] (A0) stopObjectCode();
END

Script# 216
[0000] (28) if (!Bit[93]) {
[0005] (0A)   startScript(209,[596]);
[000B] (**) }
[000B] (40) cutscene([0]);
[0010] (1A) Bit[93] = 0;
[0015] (1A) Bit[73] = 1;
[001A] (80) breakHere();
[001B] (28) unless (!Bit[72]) goto 001A;
[0020] (1A) Bit[70] = 0;
[0025] (80) breakHere();
[0026] (28) unless (!Bit[71]) goto 0025;
[002B] (1A) Var[199] = 0;
[0030] (0A) startScript(100,[0]);
[0036] (80) breakHere();
[0037] (0A) startScript(207,[493,74,0]);
[0043] (1A) Local[0] = 1;
[0048] (80) breakHere();
[0049] (46) Local[0]++;
[004C] (44) unless (Local[0] > 18) goto 0048;
[0053] (07) setState(603,0);
[0057] (80) breakHere();
[0058] (68) VAR_RESULT = isScriptRunning(207);
[005C] (28) unless (!VAR_RESULT) goto 0057;
[0061] (80) breakHere();
[0062] (C0) endCutscene();
[0063] (42) chainScript(217,[]);
[0066] (A0) stopObjectCode();
END

Script# 217
[0000] (0A) startScript(127,[2]);
[0006] (28) if (!Bit[76]) {
[000B] (0A)   startScript(129,[2]);
[0011] (14)   print(1,[Center(),Text("I changed the color!")]);
[002A] (0A)   startScript(127,[0]);
[0030] (A8)   if (Bit[76]) {
[0035] (0A)     startScript(127,[1]);
[003B] (A8)     if (Bit[76]) {
[0040] (28)       if (!Bit[13]) {
[0045] (42)         chainScript(133,[4,11]);
[004E] (**)       }
[004E] (**)     }
[004E] (**)   }
[004E] (**) }
[004E] (A0) stopObjectCode();
END

// Object 592
Events:
   A - 0018
[0018] (24) loadRoomWithEgo(541,41,160,120);
[0020] (00) stopObjectCode();
END

// Object 593
Events:
   A - 0018
[0018] (24) loadRoomWithEgo(606,45,40,132);
[0020] (00) stopObjectCode();
END

// Object 594
Events:
   A - 0018
[0018] (0A) startScript(153,[]);
[001B] (00) stopObjectCode();
END

// Object 595
Events:
END

// Object 596
Events:
END

// Object 597
Events:
END

// Object 598
Events:
END

// Object 599
Events:
END

// Object 600
Events:
END

// Object 601
Events:
END

// Object 602
Events:
END

// Object 603
Events:
END

// Object 604
Events:
END

// Object 605: Tapestry 3
Events:
END
