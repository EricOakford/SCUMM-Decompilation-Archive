/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 75: Map of World (map-world)
 */

// EN
[0000] (9A) VAR_RESULT = VAR_TIMER_NEXT;
[0005] (2C) CursorHide();
[0007] (62) stopScript(199);
[0009] (3C) stopSound(76);
[000B] (68) VAR_RESULT = isScriptRunning(31);
[000F] (A8) if (VAR_RESULT) {
[0014] (62)   stopScript(31);
[0016] (**) }
[0016] (68) VAR_RESULT = isScriptRunning(86);
[001A] (A8) if (VAR_RESULT) {
[001F] (62)   stopScript(86);
[0021] (**) }
[0021] (48) if (Var[315] == 49) {
[0028] (0C)   Resource.loadSound(157);
[002B] (0C)   Resource.loadSound(81);
[002E] (4C)   soundKludge([272]);
[0033] (4C)   soundKludge([257,80,0]);
[003E] (4C)   soundKludge([-1]);
[0043] (4C)   soundKludge([269,82,0,30]);
[0051] (4C)   soundKludge([269,80,0,30]);
[005F] (1C)   startSound(81);
[0061] (4C)   soundKludge([270,81,1]);
[006C] (4C)   soundKludge([271,8,157]);
[0077] (4C)   soundKludge([271,-1]);
[007F] (48) } else if (Var[315] == 42) {
[0089] (0C)   Resource.loadSound(80);
[008C] (0C)   Resource.loadSound(81);
[008F] (4C)   soundKludge([272]);
[0094] (4C)   soundKludge([257,157,0]);
[009F] (4C)   soundKludge([-1]);
[00A4] (4C)   soundKludge([269,157,0,30]);
[00B2] (1C)   startSound(81);
[00B4] (4C)   soundKludge([270,81,1]);
[00BF] (4C)   soundKludge([271,8,80]);
[00CA] (4C)   soundKludge([271,-1]);
[00D2] (18) } else {
[00D5] (08)   if (Var[224] != 15) {
[00DC] (0C)     Resource.loadSound(17);
[00DF] (0C)     Resource.loadSound(18);
[00E2] (28)     if (!Bit[105]) {
[00E7] (4C)       soundKludge([11]);
[00EC] (**)     }
[00EC] (4C)     soundKludge([-1]);
[00F1] (**)   }
[00F1] (28)   if (!Bit[105]) {
[00F6] (08)     if (Var[315] != 15) {
[00FD] (4C)       soundKludge([-1]);
[0102] (**)     }
[0102] (**)   }
[0102] (**) }
[0102] (A8) if (Bit[210]) {
[0107] (48)   if (Var[224] == 2) {
[010E] (07)     setState(1020,0);
[0112] (5D)     setClass(1020,[160]);
[0119] (07)     setState(1022,0);
[011D] (5D)     setClass(1022,[160]);
[0124] (07)     setState(1019,0);
[0128] (5D)     setClass(1019,[160]);
[012F] (07)     setState(1021,0);
[0133] (5D)     setClass(1021,[160]);
[013A] (07)     setState(1023,0);
[013E] (5D)     setClass(1023,[160]);
[0145] (5D)     setClass(1018,[160]);
[014C] (**)   }
[014C] (**) }
[014C] (1A) Bit[86] = 0;
[0151] (1A) VAR_EGO = 1;
[0156] (33) SetScreen(0,200);
[015C] (13) ActorOps(10,[Init(),Costume(58),Scale(255,255),Name("Indy"),IgnoreBoxes(),NeverZClip()]);
[016D] (0A) startScript(19,[3]);
[0173] (68) VAR_RESULT = isScriptRunning(59);
[0177] (A8) if (VAR_RESULT) {
[017C] (62)   stopScript(59);
[017E] (**) }
[017E] (9A) Var[448] = VAR_VERB_SCRIPT;
[0183] (1A) VAR_VERB_SCRIPT = 204;
[0188] (0A) startScript(200,[]);
[018B] (0A) startScript(205,[]);
[018E] (00) stopObjectCode();
END

// EX
[0000] (1A) VAR_TIMER_NEXT = 6;
[0005] (0C) Resource.unlockSound(18);
[0008] (4C) soundKludge([269,17,70,180]);
[0016] (4C) soundKludge([-1]);
[001B] (4C) soundKludge([9,17]);
[0023] (9A) VAR_VERB_SCRIPT = Var[448];
[0028] (68) VAR_RESULT = isScriptRunning(205);
[002C] (A8) if (VAR_RESULT) {
[0031] (62)   stopScript(205);
[0033] (**) }
[0033] (0A) startScript(59,[]);
[0036] (33) SetScreen(0,144);
[003C] (0A) startScript(19,[2]);
[0042] (13) ActorOps(10,[InitAnimNr(1),FollowBoxes()]);
[0048] (5D) setClass(2,[141]);
[004F] (00) stopObjectCode();
END

Script# 200
[0000] (2C) CursorShow();
[0002] (48) if (Var[316] == 1) {
[0009] (32)   setCameraAt(160);
[000C] (5D)   setClass(1034,[32]);
[0013] (5D)   setClass(1028,[32]);
[001A] (48)   if (Var[224] == 2) {
[0021] (48)     if (Bit[105] == 1) {
[0028] (40)       cutscene([2]);
[002D] (2D)       putActorInRoom(10,75);
[0030] (0E)       putActorAtObject(10,1028);
[0034] (80)       breakHere();
[0035] (80)       breakHere();
[0036] (80)       breakHere();
[0037] (80)       breakHere();
[0038] (80)       breakHere();
[0039] (80)       breakHere();
[003A] (80)       breakHere();
[003B] (80)       breakHere();
[003C] (1C)       startSound(18);
[003E] (4C)       soundKludge([-1]);
[0043] (4C)       soundKludge([269,17,0,15]);
[0051] (1A)       Bit[105] = 0;
[0056] (43)       Var[445] = getActorX(1034);
[005B] (23)       Var[446] = getActorY(1034);
[0060] (43)       Var[351] = getActorX(10);
[0065] (23)       Var[352] = getActorY(10);
[006A] (3A)       Var[351] -= 1;
[006F] (3A)       Var[352] -= 1;
[0074] (13)       ActorOps(10,[Costume(0)]);
[0079] (0A)       startScript(202,[149,72,226,146,40,1,3]);
[0091] (80)       breakHere();
[0092] (68)       VAR_RESULT = isScriptRunning(202);
[0096] (28)       unless (!VAR_RESULT) goto 0091;
[009B] (4C)       soundKludge([262,33,0]);
[00A6] (4C)       soundKludge([269,33,0,360]);
[00B4] (80)       breakHere();
[00B5] (80)       breakHere();
[00B6] (80)       breakHere();
[00B7] (80)       breakHere();
[00B8] (80)       breakHere();
[00B9] (80)       breakHere();
[00BA] (80)       breakHere();
[00BB] (80)       breakHere();
[00BC] (C0)       endCutscene();
[00BD] (37)       startObject(1034,10,[]);
[00C2] (62)       stopScript(0);
[00C4] (18)     } else {
[00C7] (2D)       putActorInRoom(10,75);
[00CA] (0E)       putActorAtObject(10,1028);
[00CE] (**)     }
[00CE] (48)   } else if (Var[224] == 10) {
[00D8] (2D)     putActorInRoom(10,75);
[00DB] (0E)     putActorAtObject(10,1034);
[00DF] (18)     /* goto 00E2; */
[00E2] (**)   }
[00E2] (48) } else if (Var[316] == 2) {
[00EC] (32)   setCameraAt(480);
[00EF] (07)   setState(1018,1);
[00F3] (5D)   setClass(1018,[32]);
[00FA] (A8)   if (Bit[87 + 8]) {
[0101] (07)     setState(1020,1);
[0105] (5D)     setClass(1020,[32]);
[010C] (**)   }
[010C] (A8)   if (Bit[87 + 0]) {
[0113] (07)     setState(1022,1);
[0117] (5D)     setClass(1022,[32]);
[011E] (**)   }
[011E] (A8)   if (Bit[87 + 1]) {
[0125] (07)     setState(1021,1);
[0129] (5D)     setClass(1021,[32]);
[0130] (**)   }
[0130] (A8)   if (Bit[87 + 3]) {
[0137] (07)     setState(1019,1);
[013B] (5D)     setClass(1019,[32]);
[0142] (**)   }
[0142] (A8)   if (Bit[87 + 2]) {
[0149] (07)     setState(1023,1);
[014D] (5D)     setClass(1023,[32]);
[0154] (**)   }
[0154] (A8)   if (Bit[87 + 4]) {
[015B] (10)     VAR_RESULT = getObjectOwner(937);
[0160] (48)     if (VAR_RESULT == 1) {
[0167] (07)       setState(1025,1);
[016B] (5D)       setClass(1025,[32]);
[0172] (**)     }
[0172] (**)   }
[0172] (A8)   if (Bit[87 + 5]) {
[0179] (10)     VAR_RESULT = getObjectOwner(937);
[017E] (48)     if (VAR_RESULT == 1) {
[0185] (07)       setState(1024,1);
[0189] (5D)       setClass(1024,[32]);
[0190] (**)     }
[0190] (**)   }
[0190] (48)   if (Var[315] == 15) {
[0197] (40)     cutscene([3]);
[019C] (80)     breakHere();
[019D] (80)     breakHere();
[019E] (80)     breakHere();
[019F] (80)     breakHere();
[01A0] (80)     breakHere();
[01A1] (80)     breakHere();
[01A2] (80)     breakHere();
[01A3] (80)     breakHere();
[01A4] (2D)     putActorInRoom(10,75);
[01A7] (0E)     putActorAtObject(10,1034);
[01AB] (80)     breakHere();
[01AC] (80)     breakHere();
[01AD] (80)     breakHere();
[01AE] (80)     breakHere();
[01AF] (80)     breakHere();
[01B0] (80)     breakHere();
[01B1] (80)     breakHere();
[01B2] (80)     breakHere();
[01B3] (43)     Var[445] = getActorX(1018);
[01B8] (23)     Var[446] = getActorY(1018);
[01BD] (9A)     Var[351] = Var[445];
[01C2] (9A)     Var[352] = Var[446];
[01C7] (43)     Var[445] = getActorX(1020);
[01CC] (23)     Var[446] = getActorY(1020);
[01D1] (0A)     startScript(202,[Var[351],Var[352],Var[445],Var[446],40,1,3]);
[01E9] (80)     breakHere();
[01EA] (68)     VAR_RESULT = isScriptRunning(202);
[01EE] (28)     unless (!VAR_RESULT) goto 01E9;
[01F3] (4C)     soundKludge([262,64,0]);
[01FE] (4C)     soundKludge([269,64,0,360]);
[020C] (80)     breakHere();
[020D] (80)     breakHere();
[020E] (80)     breakHere();
[020F] (80)     breakHere();
[0210] (80)     breakHere();
[0211] (80)     breakHere();
[0212] (80)     breakHere();
[0213] (80)     breakHere();
[0214] (C0)     endCutscene();
[0215] (37)     startObject(1020,10,[]);
[021A] (62)     stopScript(0);
[021C] (48)   } else if (Var[315] == 19) {
[0226] (2D)     putActorInRoom(10,75);
[0229] (0E)     putActorAtObject(10,1021);
[022D] (48)   } else if (Var[315] == 13) {
[0237] (2D)     putActorInRoom(10,75);
[023A] (0E)     putActorAtObject(10,1020);
[023E] (48)   } else if (Var[315] == 76) {
[0248] (2D)     putActorInRoom(10,75);
[024B] (0E)     putActorAtObject(10,1019);
[024F] (48)   } else if (Var[315] == 2) {
[0259] (2D)     putActorInRoom(10,75);
[025C] (0E)     putActorAtObject(10,1018);
[0260] (48)   } else if (Var[315] == 29) {
[026A] (2D)     putActorInRoom(10,75);
[026D] (0E)     putActorAtObject(10,1024);
[0271] (48)   } else if (Var[315] == 27) {
[027B] (2D)     putActorInRoom(10,75);
[027E] (0E)     putActorAtObject(10,1025);
[0282] (18)     /* goto 0285; */
[0285] (**)   }
[0285] (48) } else if (Var[316] == 3) {
[028F] (32)   setCameraAt(800);
[0292] (A8)   if (Bit[381]) {
[0297] (07)     setState(1033,1);
[029B] (**)   }
[029B] (A8)   if (Bit[87 + 6]) {
[02A2] (07)     setState(1030,1);
[02A6] (5D)     setClass(1030,[32]);
[02AD] (**)   }
[02AD] (A8)   if (Bit[87 + 7]) {
[02B4] (07)     setState(1029,1);
[02B8] (5D)     setClass(1029,[32]);
[02BF] (**)   }
[02BF] (A8)   if (Bit[87 + 5]) {
[02C6] (07)     setState(1027,1);
[02CA] (5D)     setClass(1027,[32]);
[02D1] (**)   }
[02D1] (A8)   if (Bit[87 + 4]) {
[02D8] (07)     setState(1026,1);
[02DC] (5D)     setClass(1026,[32]);
[02E3] (**)   }
[02E3] (5D)   setClass(1029,[8]);
[02EA] (5D)   setClass(1026,[8]);
[02F1] (48)   if (Var[315] == 67) {
[02F8] (2D)     putActorInRoom(10,75);
[02FB] (0E)     putActorAtObject(10,1033);
[02FF] (5D)     setClass(1029,[136]);
[0306] (5D)     setClass(1026,[136]);
[030D] (10)     VAR_RESULT = getObjectOwner(876);
[0312] (48)     if (VAR_RESULT == 1) {
[0319] (29)       setOwnerOf(876,0);
[031D] (**)     }
[031D] (10)     VAR_RESULT = getObjectOwner(871);
[0322] (48)     if (VAR_RESULT == 1) {
[0329] (29)       setOwnerOf(871,0);
[032D] (**)     }
[032D] (48)   } else if (Var[315] == 27) {
[0337] (2D)     putActorInRoom(10,75);
[033A] (0E)     putActorAtObject(10,1026);
[033E] (48)   } else if (Var[315] == 29) {
[0348] (48)     if (Var[224] == 67) {
[034F] (40)       cutscene([3]);
[0354] (58)       beginOverride();
[0356] (18)       goto 037B;
[0359] (0A)       startScript(202,[803,210,708,101,40,1,1]);
[0371] (80)       breakHere();
[0372] (68)       VAR_RESULT = isScriptRunning(202);
[0376] (28)       unless (!VAR_RESULT) goto 0371;
[037B] (C0)       endCutscene();
[037C] (2D)       putActorInRoom(10,75);
[037F] (0E)       putActorAtObject(10,1027);
[0383] (18)     } else {
[0386] (2D)       putActorInRoom(10,75);
[0389] (0E)       putActorAtObject(10,1027);
[038D] (11)       animateCostume(10,250);
[0390] (80)       breakHere();
[0391] (11)       animateCostume(10,6);
[0394] (80)       breakHere();
[0395] (80)       breakHere();
[0396] (80)       breakHere();
[0397] (80)       breakHere();
[0398] (80)       breakHere();
[0399] (80)       breakHere();
[039A] (80)       breakHere();
[039B] (80)       breakHere();
[039C] (80)       breakHere();
[039D] (80)       breakHere();
[039E] (80)       breakHere();
[039F] (80)       breakHere();
[03A0] (**)     }
[03A0] (48)   } else if (Var[315] == 20) {
[03AA] (40)     cutscene([3]);
[03AF] (58)     beginOverride();
[03B1] (18)     goto 0512;
[03B4] (10)     VAR_RESULT = getObjectOwner(876);
[03B9] (48)     if (VAR_RESULT == 1) {
[03C0] (29)       setOwnerOf(876,0);
[03C4] (**)     }
[03C4] (10)     VAR_RESULT = getObjectOwner(871);
[03C9] (48)     if (VAR_RESULT == 1) {
[03D0] (29)       setOwnerOf(871,0);
[03D4] (**)     }
[03D4] (80)     breakHere();
[03D5] (80)     breakHere();
[03D6] (80)     breakHere();
[03D7] (80)     breakHere();
[03D8] (80)     breakHere();
[03D9] (80)     breakHere();
[03DA] (80)     breakHere();
[03DB] (80)     breakHere();
[03DC] (80)     breakHere();
[03DD] (80)     breakHere();
[03DE] (80)     breakHere();
[03DF] (80)     breakHere();
[03E0] (0A)     startScript(203,[733,118,749,87,40,1,1]);
[03F8] (80)     breakHere();
[03F9] (68)     VAR_RESULT = isScriptRunning(203);
[03FD] (28)     unless (!VAR_RESULT) goto 03F8;
[0402] (0A)     startScript(203,[749,87,778,98,40,1,1]);
[041A] (80)     breakHere();
[041B] (68)     VAR_RESULT = isScriptRunning(203);
[041F] (28)     unless (!VAR_RESULT) goto 041A;
[0424] (0A)     startScript(203,[778,98,755,114,40,1,1]);
[043C] (80)     breakHere();
[043D] (68)     VAR_RESULT = isScriptRunning(203);
[0441] (28)     unless (!VAR_RESULT) goto 043C;
[0446] (0A)     startScript(203,[755,114,785,125,40,1,1]);
[045E] (80)     breakHere();
[045F] (68)     VAR_RESULT = isScriptRunning(203);
[0463] (28)     unless (!VAR_RESULT) goto 045E;
[0468] (0A)     startScript(203,[785,125,752,128,40,1,1]);
[0480] (80)     breakHere();
[0481] (68)     VAR_RESULT = isScriptRunning(203);
[0485] (28)     unless (!VAR_RESULT) goto 0480;
[048A] (0A)     startScript(203,[752,128,828,159,40,1,1]);
[04A2] (80)     breakHere();
[04A3] (68)     VAR_RESULT = isScriptRunning(203);
[04A7] (28)     unless (!VAR_RESULT) goto 04A2;
[04AC] (0A)     startScript(203,[828,159,848,150,40,1,1]);
[04C4] (80)     breakHere();
[04C5] (68)     VAR_RESULT = isScriptRunning(203);
[04C9] (28)     unless (!VAR_RESULT) goto 04C4;
[04CE] (0A)     startScript(203,[848,150,826,131,40,1,1]);
[04E6] (80)     breakHere();
[04E7] (68)     VAR_RESULT = isScriptRunning(203);
[04EB] (28)     unless (!VAR_RESULT) goto 04E6;
[04F0] (0A)     startScript(203,[826,131,876,112,40,1,1]);
[0508] (80)     breakHere();
[0509] (68)     VAR_RESULT = isScriptRunning(203);
[050D] (28)     unless (!VAR_RESULT) goto 0508;
[0512] (0A)     startScript(144,[72,4]);
[051B] (C0)     endCutscene();
[051C] (37)     startObject(1029,10,[]);
[0521] (62)     stopScript(0);
[0523] (18)     /* goto 0526; */
[0526] (**)   }
[0526] (48) } else if (Var[316] == 4) {
[0530] (32)   setCameraAt(1120);
[0533] (48)   if (Var[315] == 33) {
[053A] (40)     cutscene([3]);
[053F] (1C)     startSound(81);
[0541] (0A)     startScript(207,[]);
[0544] (80)     breakHere();
[0545] (68)     VAR_RESULT = isScriptRunning(207);
[0549] (28)     unless (!VAR_RESULT) goto 0544;
[054E] (80)     breakHere();
[054F] (80)     breakHere();
[0550] (80)     breakHere();
[0551] (80)     breakHere();
[0552] (3C)     stopSound(81);
[0554] (1C)     startSound(17);
[0556] (0A)     startScript(203,[1136,177,1164,48,40,1,1]);
[056E] (80)     breakHere();
[056F] (68)     VAR_RESULT = isScriptRunning(203);
[0573] (28)     unless (!VAR_RESULT) goto 056E;
[0578] (13)     ActorOps(1,[Costume(2)]);
[057D] (1A)     Var[238] = 1;
[0582] (1A)     VAR_TIMER_NEXT = 6;
[0587] (C0)     endCutscene();
[0588] (72)     loadRoom(49);
[058A] (48)   } else if (Var[315] == 41) {
[0594] (40)     cutscene([3]);
[0599] (58)     beginOverride();
[059B] (18)     goto 0610;
[059E] (80)     breakHere();
[059F] (80)     breakHere();
[05A0] (80)     breakHere();
[05A1] (80)     breakHere();
[05A2] (80)     breakHere();
[05A3] (80)     breakHere();
[05A4] (80)     breakHere();
[05A5] (80)     breakHere();
[05A6] (80)     breakHere();
[05A7] (80)     breakHere();
[05A8] (80)     breakHere();
[05A9] (80)     breakHere();
[05AA] (0A)     startScript(203,[1137,179,1174,146,40,1,1]);
[05C2] (80)     breakHere();
[05C3] (68)     VAR_RESULT = isScriptRunning(203);
[05C7] (28)     unless (!VAR_RESULT) goto 05C2;
[05CC] (0A)     startScript(203,[1174,146,1112,122,40,1,1]);
[05E4] (80)     breakHere();
[05E5] (68)     VAR_RESULT = isScriptRunning(203);
[05E9] (28)     unless (!VAR_RESULT) goto 05E4;
[05EE] (0A)     startScript(203,[1112,122,1168,97,40,1,1]);
[0606] (80)     breakHere();
[0607] (68)     VAR_RESULT = isScriptRunning(203);
[060B] (28)     unless (!VAR_RESULT) goto 0606;
[0610] (A8)     if (VAR_OVERRIDE) {
[0615] (1A)       VAR_TIMER_NEXT = 6;
[061A] (**)     }
[061A] (C0)     endCutscene();
[061B] (1A)     Bit[37 + 1] = 1;
[0622] (1A)     VAR_TIMER_NEXT = 6;
[0627] (80)     breakHere();
[0628] (72)     loadRoom(66);
[062A] (48)   } else if (Var[315] == 40) {
[0634] (40)     cutscene([3]);
[0639] (58)     beginOverride();
[063B] (18)     goto 06B0;
[063E] (80)     breakHere();
[063F] (80)     breakHere();
[0640] (80)     breakHere();
[0641] (80)     breakHere();
[0642] (80)     breakHere();
[0643] (80)     breakHere();
[0644] (80)     breakHere();
[0645] (80)     breakHere();
[0646] (80)     breakHere();
[0647] (80)     breakHere();
[0648] (80)     breakHere();
[0649] (80)     breakHere();
[064A] (0A)     startScript(203,[1168,97,1112,122,40,1,1]);
[0662] (80)     breakHere();
[0663] (68)     VAR_RESULT = isScriptRunning(203);
[0667] (28)     unless (!VAR_RESULT) goto 0662;
[066C] (0A)     startScript(203,[1112,122,1174,146,40,1,1]);
[0684] (80)     breakHere();
[0685] (68)     VAR_RESULT = isScriptRunning(203);
[0689] (28)     unless (!VAR_RESULT) goto 0684;
[068E] (0A)     startScript(203,[1174,146,1140,181,40,1,1]);
[06A6] (80)     breakHere();
[06A7] (68)     VAR_RESULT = isScriptRunning(203);
[06AB] (28)     unless (!VAR_RESULT) goto 06A6;
[06B0] (A8)     if (VAR_OVERRIDE) {
[06B5] (1A)       VAR_TIMER_NEXT = 6;
[06BA] (**)     }
[06BA] (C0)     endCutscene();
[06BB] (1A)     VAR_TIMER_NEXT = 6;
[06C0] (80)     breakHere();
[06C1] (72)     loadRoom(33);
[06C3] (48)   } else if (Var[315] == 49) {
[06CD] (40)     cutscene([3]);
[06D2] (58)     beginOverride();
[06D4] (18)     goto 07C0;
[06D7] (2D)     putActorInRoom(10,75);
[06DA] (0E)     putActorAtObject(10,1031);
[06DE] (11)     animateCostume(10,250);
[06E1] (80)     breakHere();
[06E2] (11)     animateCostume(10,6);
[06E5] (80)     breakHere();
[06E6] (80)     breakHere();
[06E7] (80)     breakHere();
[06E8] (80)     breakHere();
[06E9] (80)     breakHere();
[06EA] (80)     breakHere();
[06EB] (80)     breakHere();
[06EC] (80)     breakHere();
[06ED] (80)     breakHere();
[06EE] (80)     breakHere();
[06EF] (80)     breakHere();
[06F0] (80)     breakHere();
[06F1] (43)     Var[445] = getActorX(10);
[06F6] (23)     Var[446] = getActorY(10);
[06FB] (AC)     Exprmode Var[317] = (Var[415] * 4);
[0706] (5B)     Var[317] /= 3;
[070B] (48)     if (Var[416] == 1) {
[0712] (AC)       Exprmode Var[445] = (Var[445] - Var[317]);
[071D] (AC)       Exprmode Var[446] = (Var[446] + Var[317]);
[0728] (48)     } else if (Var[416] == 2) {
[0732] (AC)       Exprmode Var[446] = (Var[446] + Var[317]);
[073D] (48)     } else if (Var[416] == 3) {
[0747] (AC)       Exprmode Var[445] = (Var[445] + Var[317]);
[0752] (AC)       Exprmode Var[446] = (Var[446] + Var[317]);
[075D] (18)     } else {
[0760] (14)       print(253,[Text("Shouldn't be here.")]);
[0776] (6B)       debug(0);
[0779] (**)     }
[0779] (9A)     Var[259] = Var[445];
[077E] (9A)     Var[260] = Var[446];
[0783] (43)     Var[351] = getActorX(10);
[0788] (23)     Var[352] = getActorY(10);
[078D] (2D)     putActorInRoom(10,0);
[0790] (13)     ActorOps(10,[Init(),Name(" ")]);
[0797] (5D)     setClass(10,[0]);
[079E] (0A)     startScript(202,[Var[351],Var[352],Var[259],Var[260],40,1,8]);
[07B6] (80)     breakHere();
[07B7] (68)     VAR_RESULT = isScriptRunning(202);
[07BB] (28)     unless (!VAR_RESULT) goto 07B6;
[07C0] (58)     endOverride();
[07C2] (C0)     endCutscene();
[07C3] (1A)     VAR_TIMER_NEXT = 6;
[07C8] (72)     loadRoom(42);
[07CA] (62)     stopScript(0);
[07CC] (48)   } else if (Var[315] == 42) {
[07D6] (40)     cutscene([3]);
[07DB] (58)     beginOverride();
[07DD] (18)     goto 081E;
[07E0] (80)     breakHere();
[07E1] (43)     Var[445] = getActorX(1031);
[07E6] (23)     Var[446] = getActorY(1031);
[07EB] (2D)     putActorInRoom(10,0);
[07EE] (13)     ActorOps(10,[Init(),Name(" ")]);
[07F5] (5D)     setClass(10,[0]);
[07FC] (0A)     startScript(202,[Var[259],Var[260],Var[445],Var[446],40,1,1]);
[0814] (80)     breakHere();
[0815] (68)     VAR_RESULT = isScriptRunning(202);
[0819] (28)     unless (!VAR_RESULT) goto 0814;
[081E] (58)     endOverride();
[0820] (C0)     endCutscene();
[0821] (1A)     VAR_TIMER_NEXT = 6;
[0826] (72)     loadRoom(49);
[0828] (62)     stopScript(0);
[082A] (18)   } else {
[082D] (2D)     putActorInRoom(10,75);
[0830] (0E)     putActorAtObject(10,1031);
[0834] (**)   }
[0834] (18)   /* goto 0837; */
[0837] (**) }
[0837] (11) animateCostume(10,250);
[083A] (80) breakHere();
[083B] (11) animateCostume(10,6);
[083E] (80) breakHere();
[083F] (80) breakHere();
[0840] (80) breakHere();
[0841] (80) breakHere();
[0842] (80) breakHere();
[0843] (80) breakHere();
[0844] (80) breakHere();
[0845] (80) breakHere();
[0846] (80) breakHere();
[0847] (80) breakHere();
[0848] (80) breakHere();
[0849] (80) breakHere();
[084A] (A0) stopObjectCode();
END

Script# 201
[0000] (AC) Exprmode Local[4] = (Local[0] - (Local[3] / 2));
[000F] (AC) Exprmode Local[6] = (Local[4] + Local[3]);
[001A] (AC) Exprmode Local[5] = (Local[1] - (Local[3] / 2));
[0029] (AC) Exprmode Local[7] = (Local[5] + Local[3]);
[0034] (FF) drawBox(Local[4],Local[5],Local[6],Local[7],Local[2]);
[0040] (A0) stopObjectCode();
END

Script# 202
[0000] (9A) Local[16] = VAR_TIMER_NEXT;
[0005] (9A) VAR_TIMER_NEXT = Local[6];
[000A] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[0015] (BA) Local[0] -= Var[443];
[001A] (BA) Local[2] -= Var[443];
[001F] (B8) if (Local[2] >= Local[0]) {
[0026] (1A)   Local[7] = 1;
[002B] (AC)   Exprmode Local[9] = (Local[2] - Local[0]);
[0036] (18) } else {
[0039] (1A)   Local[7] = -1;
[003E] (AC)   Exprmode Local[9] = (Local[0] - Local[2]);
[0049] (**) }
[0049] (B8) if (Local[3] >= Local[1]) {
[0050] (1A)   Local[8] = 1;
[0055] (AC)   Exprmode Local[10] = (Local[3] - Local[1]);
[0060] (18) } else {
[0063] (1A)   Local[8] = -1;
[0068] (AC)   Exprmode Local[10] = (Local[1] - Local[3]);
[0073] (**) }
[0073] (C4) if (Local[9] > Local[10]) {
[007A] (9A)   Local[11] = Local[9];
[007F] (18) } else {
[0082] (9A)   Local[11] = Local[10];
[0087] (**) }
[0087] (9A) Local[12] = Local[0];
[008C] (9A) Local[13] = Local[1];
[0091] (1A) Local[0] = 0;
[0096] (1A) Local[1] = 0;
[009B] (AC) Exprmode Var[443] = (Local[11] - 2);
[00A6] (1A) Local[14] = 0;
[00AB] (B8) if (Local[14] >= Var[443]) {
[00B2] (18) } else {
[00B5] (2E)   delay(1);
[00B9] (DA)   Local[0] += Local[9];
[00BE] (DA)   Local[1] += Local[10];
[00C3] (1A)   Local[15] = 0;
[00C8] (C4)   if (Local[0] > Local[11]) {
[00CF] (1A)     Local[15] = 1;
[00D4] (BA)     Local[0] -= Local[11];
[00D9] (DA)     Local[12] += Local[7];
[00DE] (**)   }
[00DE] (C4)   if (Local[1] > Local[11]) {
[00E5] (1A)     Local[15] = 1;
[00EA] (BA)     Local[1] -= Local[11];
[00EF] (DA)     Local[13] += Local[8];
[00F4] (**)   }
[00F4] (A8)   if (Local[15]) {
[00F9] (44)     if (Local[14] > 2) {
[0100] (0A)       startScript(201,[Local[12],Local[13],Local[4],Local[5]]);
[010F] (**)     }
[010F] (**)   }
[010F] (46)   Local[14]++;
[0112] (C4)   unless (Local[14] > Local[11]) goto 00AB;
[0119] (**) }
[0119] (9A) VAR_TIMER_NEXT = Local[16];
[011E] (A0) stopObjectCode();
END

Script# 203
[0000] (9A) Local[16] = VAR_TIMER_NEXT;
[0005] (9A) VAR_TIMER_NEXT = Local[6];
[000A] (AC) Exprmode Var[443] = (VAR_CAMERA_POS_X - 160);
[0015] (BA) Local[0] -= Var[443];
[001A] (BA) Local[2] -= Var[443];
[001F] (B8) if (Local[2] >= Local[0]) {
[0026] (1A)   Local[7] = 1;
[002B] (AC)   Exprmode Local[9] = (Local[2] - Local[0]);
[0036] (18) } else {
[0039] (1A)   Local[7] = -1;
[003E] (AC)   Exprmode Local[9] = (Local[0] - Local[2]);
[0049] (**) }
[0049] (B8) if (Local[3] >= Local[1]) {
[0050] (1A)   Local[8] = 1;
[0055] (AC)   Exprmode Local[10] = (Local[3] - Local[1]);
[0060] (18) } else {
[0063] (1A)   Local[8] = -1;
[0068] (AC)   Exprmode Local[10] = (Local[1] - Local[3]);
[0073] (**) }
[0073] (C4) if (Local[9] > Local[10]) {
[007A] (9A)   Local[11] = Local[9];
[007F] (18) } else {
[0082] (9A)   Local[11] = Local[10];
[0087] (**) }
[0087] (9A) Local[12] = Local[0];
[008C] (9A) Local[13] = Local[1];
[0091] (1A) Local[0] = 0;
[0096] (1A) Local[1] = 0;
[009B] (0A) startScript(201,[Local[12],Local[13],Local[4],Local[5]]);
[00AA] (1A) Local[14] = 0;
[00AF] (B8) if (Local[14] >= Var[443]) {
[00B6] (18) } else {
[00B9] (2E)   delay(1);
[00BD] (DA)   Local[0] += Local[9];
[00C2] (DA)   Local[1] += Local[10];
[00C7] (1A)   Local[15] = 0;
[00CC] (C4)   if (Local[0] > Local[11]) {
[00D3] (1A)     Local[15] = 1;
[00D8] (BA)     Local[0] -= Local[11];
[00DD] (DA)     Local[12] += Local[7];
[00E2] (**)   }
[00E2] (C4)   if (Local[1] > Local[11]) {
[00E9] (1A)     Local[15] = 1;
[00EE] (BA)     Local[1] -= Local[11];
[00F3] (DA)     Local[13] += Local[8];
[00F8] (**)   }
[00F8] (A8)   if (Local[15]) {
[00FD] (0A)     startScript(201,[Local[12],Local[13],Local[4],Local[5]]);
[010C] (**)   }
[010C] (46)   Local[14]++;
[010F] (C4)   unless (Local[14] > Local[11]) goto 00AF;
[0116] (**) }
[0116] (9A) VAR_TIMER_NEXT = Local[16];
[011B] (A0) stopObjectCode();
END

Script# 204
[0000] (9A) Local[2] = Var[108];
[0005] (C3) Local[3] = getActorX(Local[2]);
[000A] (A3) Local[4] = getActorY(Local[2]);
[000F] (43) Var[351] = getActorX(10);
[0014] (23) Var[352] = getActorY(10);
[0019] (C8) if (Var[351] == Local[3]) {
[0020] (C8)   if (Var[352] == Local[4]) {
[0027] (1A)     Bit[86] = 1;
[002C] (08)     if (Var[224] != 67) {
[0033] (F2)       loadRoom(Var[224]);
[0036] (18)       /* goto 0039; */
[0039] (**)     }
[0039] (62)     stopScript(0);
[003B] (**)   }
[003B] (**) }
[003B] (A8) if (Local[2]) {
[0040] (13)   ActorOps(10,[Costume(0)]);
[0045] (40)   cutscene([2]);
[004A] (1C)   startSound(18);
[004C] (4C)   soundKludge([-1]);
[0051] (4C)   soundKludge([269,17,0,15]);
[005F] (58)   beginOverride();
[0061] (18)   goto 00AD;
[0064] (9D)   if (classOfIs(Local[2],[136])) {
[006D] (18)     goto 00AD;
[0070] (18)   } else {
[0073] (F8)     if (Var[351] < Local[3]) {
[007A] (F8)       if (Var[352] < Local[4]) {
[0081] (3A)         Var[351] -= 1;
[0086] (3A)         Var[352] -= 1;
[008B] (**)       }
[008B] (**)     }
[008B] (0A)     startScript(202,[Var[351],Var[352],Local[3],Local[4],40,1,1]);
[00A3] (80)     breakHere();
[00A4] (68)     VAR_RESULT = isScriptRunning(202);
[00A8] (28)     unless (!VAR_RESULT) goto 00A3;
[00AD] (**)   }
[00AD] (A8)   if (VAR_OVERRIDE) {
[00B2] (1A)     VAR_TIMER_NEXT = 6;
[00B7] (**)   }
[00B7] (C0)   endCutscene();
[00B8] (B7)   startObject(Local[2],10,[]);
[00BD] (62)   stopScript(0);
[00BF] (**) }
[00BF] (A0) stopObjectCode();
END

Script# 205
[0000] (16) Var[442] = getRandomNr(1);
[0004] (D5) Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[000B] (A8) if (Local[0]) {
[0010] (9A)   Var[108] = Local[0];
[0015] (18) } else {
[0018] (F5)   Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[001F] (9A)   Var[108] = Local[0];
[0024] (**) }
[0024] (80) breakHere();
[0025] (18) goto 0000;
[0028] (A0) stopObjectCode();
END

Script# 206
[0000] (40) cutscene([3]);
[0005] (43) Local[1] = getActorX(1033);
[000A] (23) Local[2] = getActorY(1033);
[000F] (43) Local[3] = getActorX(1027);
[0014] (23) Local[4] = getActorY(1027);
[0019] (58) beginOverride();
[001B] (18) goto 0076;
[001E] (0A) startScript(202,[Local[1],Local[2],Local[3],Local[4],40,1,1]);
[0036] (80) breakHere();
[0037] (68) VAR_RESULT = isScriptRunning(202);
[003B] (28) unless (!VAR_RESULT) goto 0036;
[0040] (9A) Local[1] = Local[3];
[0045] (9A) Local[2] = Local[4];
[004A] (C3) Local[3] = getActorX(Local[0]);
[004F] (A3) Local[4] = getActorY(Local[0]);
[0054] (0A) startScript(202,[Local[1],Local[2],Local[3],Local[4],40,1,1]);
[006C] (80) breakHere();
[006D] (68) VAR_RESULT = isScriptRunning(202);
[0071] (28) unless (!VAR_RESULT) goto 006C;
[0076] (1A) Var[316] = 4;
[007B] (48) if (Local[0] == 1026) {
[0082] (1A)   Var[315] = 27;
[0087] (18) } else {
[008A] (1A)   Var[315] = 33;
[008F] (**) }
[008F] (5D) setClass(1029,[8]);
[0096] (5D) setClass(1026,[8]);
[009D] (C0) endCutscene();
[009E] (48) if (Local[0] == 1026) {
[00A5] (72)   loadRoom(27);
[00A7] (18) } else {
[00AA] (72)   loadRoom(33);
[00AC] (**) }
[00AC] (A0) stopObjectCode();
END

Script# 207
[0000] (80) breakHere();
[0001] (80) breakHere();
[0002] (13) ActorOps(5,[Costume(56),InitAnimNr(1),Scale(0,0),IgnoreBoxes(),NeverZClip()]);
[000E] (13) ActorOps(6,[Costume(56),InitAnimNr(2),Scale(0,0),IgnoreBoxes(),NeverZClip()]);
[001A] (2D) putActorInRoom(5,75);
[001D] (01) putActor(5,1130,90);
[0023] (11) animateCostume(5,250);
[0026] (11) animateCostume(6,250);
[0029] (11) animateCostume(5,6);
[002C] (80) breakHere();
[002D] (27) PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[00BE] (1A) Local[6] = 1;
[00C3] (1A) Local[7] = 10;
[00C8] (1A) Local[8] = 2;
[00CD] (9A) Local[4] = Local[6];
[00D2] (AC) Exprmode Local[9] = (Local[5] / 10);
[00DD] (5A) Local[9] += 4;
[00E2] (27) SetStringChar(40,Local[4],Local[9]);
[00E9] (DA) Local[5] += Local[8];
[00EE] (46) Local[4]++;
[00F1] (C4) unless (Local[4] > Local[7]) goto 00D2;
[00F8] (48) if (Local[6] == 1) {
[00FF] (1A)   Local[8] = 2;
[0104] (48) } else if (Local[6] == 11) {
[010E] (1A)   Local[8] = 3;
[0113] (48) } else if (Local[6] == 21) {
[011D] (1A)   Local[8] = 5;
[0122] (48) } else if (Local[6] == 31) {
[012C] (1A)   Local[8] = 6;
[0131] (48) } else if (Local[6] == 41) {
[013B] (1A)   Local[8] = 10;
[0140] (48) } else if (Local[6] == 51) {
[014A] (1A)   Local[8] = 13;
[014F] (48) } else if (Local[6] == 61) {
[0159] (1A)   Local[8] = 19;
[015E] (48) } else if (Local[6] == 71) {
[0168] (1A)   Local[8] = 17;
[016D] (48) } else if (Local[6] == 81) {
[0177] (1A)   Local[8] = 37;
[017C] (48) } else if (Local[6] == 91) {
[0186] (1A)   Local[8] = 56;
[018B] (48) } else if (Local[6] == 101) {
[0195] (1A)   Local[8] = 72;
[019A] (18)   /* goto 019D; */
[019D] (**) }
[019D] (08) if (Local[7] != 120) {
[01A4] (5A)   Local[6] += 10;
[01A9] (5A)   Local[7] += 10;
[01AE] (18)   goto 00CD;
[01B1] (**) }
[01B1] (27) SetStringChar(40,121,255);
[01B6] (1A) VAR_TIMER_NEXT = 1;
[01BB] (1A) Local[11] = 1;
[01C0] (27) Local[0] = GetStringChar(40,1);
[01C6] (1A) Local[4] = 0;
[01CB] (1A) Local[2] = 1;
[01D0] (DA) Local[4] += Local[11];
[01D5] (44) if (Local[4] > 121) {
[01DC] (1A)   Local[4] = 121;
[01E1] (**) }
[01E1] (27) Local[0] = GetStringChar(40,Local[4]);
[01E8] (1A) VAR_TMR_1 = 0;
[01ED] (13) ActorOps(5,[Scale(Local[0],Local[0])]);
[01F5] (13) ActorOps(6,[Scale(Local[0],Local[0])]);
[01FD] (80) breakHere();
[01FE] (9A) Local[3] = VAR_TMR_1;
[0203] (C4) if (Local[3] > Local[11]) {
[020A] (48)   if (Local[10] == 1) {
[0211] (9A)     Local[11] = Local[3];
[0216] (**)   }
[0216] (1A)   Local[10] = 1;
[021B] (18) } else {
[021E] (1A)   Local[10] = 0;
[0223] (**) }
[0223] (48) unless (Local[4] == 121) goto 01D0;
[022A] (1A) VAR_TIMER_NEXT = 6;
[022F] (2E) delay(60);
[0233] (05) drawObject(67);
[0237] (2E) delay(120);
[023B] (0A) startScript(94,[208,208]);
[0244] (80) breakHere();
[0245] (68) VAR_RESULT = isScriptRunning(94);
[0249] (28) unless (!VAR_RESULT) goto 0244;
[024E] (07) setState(67,0);
[0252] (2D) putActorInRoom(5,0);
[0255] (2D) putActorInRoom(6,0);
[0258] (13) ActorOps(5,[Init()]);
[025C] (13) ActorOps(6,[Init()]);
[0260] (80) breakHere();
[0261] (A0) stopObjectCode();
END

Script# 208 // Demo Copyright Info
[0000] (1A) Var[452] = 100;
[0005] (2C) InitCharset(1);
[0008] (14) print(255,[Color(4),Center(),Pos(160,130),Text("= & \x0F 1992 LucasArts Entertainment Company" + newline() + "All Rights Reserved.  Indiana Jones is a" + newline() + "registered trademark of Lucasfilm Ltd.")]);
[0090] (2C) InitCharset(2);
[0093] (A0) stopObjectCode();
END

// Object 67
Events:
END

// Object 1018: New York
Events:
   A - 000C
[000C] (A8) if (Var[233]) {
[0011] (1A)   Var[316] = 3;
[0016] (18) } else {
[0019] (1A)   Var[316] = 2;
[001E] (**) }
[001E] (1A) Var[315] = 2;
[0023] (72) loadRoom(2);
[0025] (00) stopObjectCode();
END

// Object 1019: Yucatan
Events:
   A - 000C
[000C] (1A) Var[316] = 2;
[0011] (1A) Var[315] = 76;
[0016] (24) loadRoomWithEgo(1035,76,-1,-1);
[001E] (00) stopObjectCode();
END

// Object 1020: Iceland
Events:
   A - 000C
[000C] (1A) Var[316] = 2;
[0011] (1A) Var[315] = 13;
[0016] (24) loadRoomWithEgo(161,13,202,116);
[001E] (00) stopObjectCode();
END

// Object 1021: Azores
Events:
   A - 000C
[000C] (1A) Var[316] = 2;
[0011] (1A) Var[315] = 19;
[0016] (72) loadRoom(19);
[0018] (00) stopObjectCode();
END

// Object 1022: Leningrad
Events:
   A - 000C
[000C] (1A) Var[316] = 2;
[0011] (00) stopObjectCode();
END

// Object 1023: Cadiz
Events:
   A - 000C
[000C] (1A) Var[316] = 2;
[0011] (A8) if (Bit[96 + 2]) {
[0018] (52)   actorFollowCamera(1);
[001A] (18) } else {
[001D] (D2)   actorFollowCamera(VAR_EGO);
[0020] (**) }
[0020] (00) stopObjectCode();
END

// Object 1024: Morocco
Events:
   A - 000C
[000C] (29) setOwnerOf(1050,0);
[0010] (10) VAR_RESULT = getObjectOwner(88);
[0015] (48) if (VAR_RESULT == 1) {
[001C] (29)   setOwnerOf(88,0);
[0020] (**) }
[0020] (10) VAR_RESULT = getObjectOwner(22);
[0025] (48) if (VAR_RESULT == 1) {
[002C] (29)   setOwnerOf(22,0);
[0030] (**) }
[0030] (10) VAR_RESULT = getObjectOwner(53);
[0035] (48) if (VAR_RESULT == 1) {
[003C] (29)   setOwnerOf(53,0);
[0040] (**) }
[0040] (10) VAR_RESULT = getObjectOwner(68);
[0045] (48) if (VAR_RESULT == 1) {
[004C] (29)   setOwnerOf(68,0);
[0050] (**) }
[0050] (1A) Var[316] = 2;
[0055] (1A) Var[315] = 29;
[005A] (72) loadRoom(29);
[005C] (00) stopObjectCode();
END

// Object 1025: Monte Carlo
Events:
   A - 000C
[000C] (29) setOwnerOf(1050,0);
[0010] (10) VAR_RESULT = getObjectOwner(88);
[0015] (48) if (VAR_RESULT == 1) {
[001C] (29)   setOwnerOf(88,0);
[0020] (**) }
[0020] (10) VAR_RESULT = getObjectOwner(22);
[0025] (48) if (VAR_RESULT == 1) {
[002C] (29)   setOwnerOf(22,0);
[0030] (**) }
[0030] (10) VAR_RESULT = getObjectOwner(53);
[0035] (48) if (VAR_RESULT == 1) {
[003C] (29)   setOwnerOf(53,0);
[0040] (**) }
[0040] (10) VAR_RESULT = getObjectOwner(68);
[0045] (48) if (VAR_RESULT == 1) {
[004C] (29)   setOwnerOf(68,0);
[0050] (**) }
[0050] (1A) Var[316] = 2;
[0055] (1A) Var[315] = 27;
[005A] (24) loadRoomWithEgo(282,27,92,141);
[0062] (00) stopObjectCode();
END

// Object 1026: Monte Carlo
Events:
   A - 000C
[000C] (1A) Var[316] = 3;
[0011] (1A) Var[315] = 27;
[0016] (1D) if (classOfIs(1026,[136])) {
[001F] (0A)   startScript(206,[1026]);
[0025] (18) } else {
[0028] (24)   loadRoomWithEgo(282,27,92,141);
[0030] (**) }
[0030] (00) stopObjectCode();
END

// Object 1027: Algiers
Events:
   A - 000C
[000C] (1A) Var[316] = 3;
[0011] (1A) Var[315] = 29;
[0016] (72) loadRoom(29);
[0018] (00) stopObjectCode();
END

// Object 1028: Barnett College
Events:
   A - 000C
[000C] (1A) Var[315] = 1;
[0011] (72) loadRoom(2);
[0013] (00) stopObjectCode();
END

// Object 1029: Crete
Events:
   A - 000C
[000C] (1A) Var[316] = 4;
[0011] (1A) Var[315] = 33;
[0016] (1D) if (classOfIs(1029,[136])) {
[001F] (0A)   startScript(206,[1029]);
[0025] (18) } else {
[0028] (72)   loadRoom(33);
[002A] (**) }
[002A] (00) stopObjectCode();
END

// Object 1030: Santorini
Events:
   A - 000C
[000C] (48) if (Var[238] == 2) {
[0013] (29)   setOwnerOf(926,0);
[0017] (**) }
[0017] (1A) Var[316] = 3;
[001C] (1A) Var[315] = 49;
[0021] (72) loadRoom(49);
[0023] (00) stopObjectCode();
END

// Object 1031: Santorini
Events:
   A - 000C
[000C] (1A) Var[316] = 4;
[0011] (1A) Var[315] = 49;
[0016] (72) loadRoom(49);
[0018] (00) stopObjectCode();
END

// Object 1032: Crete
Events:
   A - 000C
[000C] (00) stopObjectCode();
END

// Object 1033
Events:
END

// Object 1034: New York City
Events:
   A - 000C
[000C] (1A) Var[316] = 2;
[0011] (1A) Var[315] = 2;
[0016] (72) loadRoom(10);
[0018] (00) stopObjectCode();
END