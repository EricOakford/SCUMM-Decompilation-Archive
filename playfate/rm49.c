/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 49: Thera Dock (th-dock)
 */

// EN
[0000] (7A) VerbOps(53,[Text("Demo")]);
[0009] (13) ActorOps(7,[Init(),Costume(234),IgnoreBoxes(),NeverZClip(),Scale(255,255)]);
[0014] (1A) VAR_SCROLL_SCRIPT = 214;
[0019] (0A) startScript(144,[88,2]);
[0022] (48) if (Bit[417 + 1] == 1) {
[002B] (42)   chainScript(213,[]);
[002E] (**) }
[002E] (28) if (!Bit[425]) {
[0033] (1A)   Bit[425] = 1;
[0038] (1C)   startSound(80);
[003A] (18) } else {
[003D] (7C)   VAR_RESULT = isSoundRunning(81);
[0041] (28)   if (!VAR_RESULT) {
[0046] (7C)     VAR_RESULT = isSoundRunning(80);
[004A] (28)     if (!VAR_RESULT) {
[004F] (4C)       soundKludge([8,80]);
[0057] (4C)       soundKludge([268,80,0,14]);
[0065] (4C)       soundKludge([-1]);
[006A] (18)       /* goto 006D; */
[006D] (**)     }
[006D] (**)   }
[006D] (**) }
[006D] (2A) startScript(151,[],F);
[0070] (1A) Bit[443] = 0;
[0075] (1A) Var[164] = 204;
[007A] (0A) startScript(200,[]);
[007D] (00) stopObjectCode();
END

// EX
[0000] (5D) setClass(11,[0]);
[0007] (5D) setClass(10,[0]);
[000E] (03) VAR_RESULT = getActorRoom(9);
[0012] (C8) if (VAR_RESULT == VAR_ROOM) {
[0019] (2D)   putActorInRoom(9,0);
[001C] (13)   ActorOps(9,[Init(),Name(" ")]);
[0023] (5D)   setClass(9,[0]);
[002A] (**) }
[002A] (00) stopObjectCode();
END

Script# 200 // Entered Thera
[0000] (30) setBoxFlags(12,128);
[0004] (30) setBoxFlags(20,128);
[0008] (48) if (Var[238] == 1) {
[000F] (13)   ActorOps(11,[Init(),Costume(44),TalkColor(2),Name("captain"),FollowBoxes(),Elevation(0)]);
[0024] (5D)   setClass(11,[141]);
[002B] (2D)   putActorInRoom(11,49);
[002E] (01)   putActor(11,334,115);
[0034] (11)   animateCostume(11,248);
[0037] (5D)   setClass(595,[160]);
[003E] (07)   setState(591,1);
[0042] (5D)   setClass(591,[160]);
[0049] (07)   setState(944,1);
[004D] (5D)   setClass(944,[160]);
[0054] (5D)   setClass(594,[160]);
[005B] (5D)   setClass(592,[32]);
[0062] (07)   setState(590,1);
[0066] (48)   if (Var[224] == 63) {
[006D] (1A)     Bit[400 + 2] = 1;
[0074] (AD)     putActorInRoom(VAR_EGO,49);
[0078] (8E)     putActorAtObject(VAR_EGO,596);
[007D] (80)     breakHere();
[007E] (9E)     walkActorTo(VAR_EGO,60,60);
[0085] (0A)     startScript(215,[]);
[0088] (2A)     startScript(209,[],F);
[008B] (48)   } else if (Var[224] == 75) {
[0095] (28)     if (!Bit[400 + 14]) {
[009C] (2D)       putActorInRoom(1,49);
[009F] (01)       putActor(1,421,101);
[00A5] (2D)       putActorInRoom(2,49);
[00A8] (01)       putActor(2,435,101);
[00AE] (D2)       actorFollowCamera(VAR_EGO);
[00B1] (11)       animateCostume(1,251);
[00B4] (11)       animateCostume(2,251);
[00B7] (2A)       startScript(209,[],F);
[00BA] (2A)       startScript(210,[],F);
[00BD] (0A)       startScript(207,[]);
[00C0] (18)     } else {
[00C3] (1A)       Bit[445] = 1;
[00C8] (1A)       Bit[400 + 14] = 0;
[00CF] (2D)       putActorInRoom(2,49);
[00D2] (01)       putActor(2,420,110);
[00D8] (AD)       putActorInRoom(VAR_EGO,49);
[00DC] (81)       putActor(VAR_EGO,399,116);
[00E3] (D2)       actorFollowCamera(VAR_EGO);
[00E6] (11)       animateCostume(1,248);
[00E9] (11)       animateCostume(2,248);
[00EC] (0A)       startScript(212,[]);
[00EF] (**)     }
[00EF] (18)   } else {
[00F2] (2D)     putActorInRoom(1,49);
[00F5] (01)     putActor(1,421,101);
[00FB] (2D)     putActorInRoom(2,49);
[00FE] (01)     putActor(2,435,101);
[0104] (D2)     actorFollowCamera(VAR_EGO);
[0107] (11)     animateCostume(1,251);
[010A] (11)     animateCostume(2,251);
[010D] (2A)     startScript(209,[],F);
[0110] (2A)     startScript(210,[],F);
[0113] (0A)     startScript(207,[]);
[0116] (**)   }
[0116] (18) } else {
[0119] (13)   ActorOps(10,[Costume(45),TalkColor(11),Name("port authority"),FollowBoxes(),Elevation(0)]);
[0134] (5D)   setClass(10,[141,133]);
[013E] (1A)   Var[163] = 217;
[0143] (2D)   putActorInRoom(10,49);
[0146] (01)   putActor(10,583,136);
[014C] (11)   animateCostume(10,249);
[014F] (07)   setState(590,0);
[0153] (5D)   setClass(592,[160]);
[015A] (48)   if (Var[224] == 63) {
[0161] (2A)     startScript(201,[],F);
[0164] (AD)     putActorInRoom(VAR_EGO,49);
[0168] (8E)     putActorAtObject(VAR_EGO,596);
[016D] (D2)     actorFollowCamera(VAR_EGO);
[0170] (80)     breakHere();
[0171] (9E)     walkActorTo(VAR_EGO,60,60);
[0178] (48)   } else if (Var[224] == 178) {
[0182] (2D)     putActorInRoom(10,0);
[0185] (13)     ActorOps(10,[Init(),Name(" ")]);
[018C] (5D)     setClass(10,[0]);
[0193] (18)   } else {
[0196] (2A)     startScript(201,[],F);
[0199] (2D)     putActorInRoom(1,49);
[019C] (01)     putActor(1,399,116);
[01A2] (11)     animateCostume(1,251);
[01A5] (2A)     startScript(210,[],F);
[01A8] (14)     print(1,[Text("Well, here I am on\x10Thera.")]);
[01C5] (D2)     actorFollowCamera(VAR_EGO);
[01C8] (**)   }
[01C8] (**) }
[01C8] (0A) startScript(216,[]);
[01CB] (A0) stopObjectCode();
END

Script# 201
[0000] (63) VAR_RESULT = getActorFacing(10);
[0004] (08) if (VAR_RESULT != 248) {
[000B] (63)   VAR_RESULT = getActorFacing(10);
[000F] (08)   if (VAR_RESULT != 249) {
[0016] (16)     VAR_RESULT = getRandomNr(1);
[001A] (A8)     if (VAR_RESULT) {
[001F] (11)       animateCostume(10,249);
[0022] (18)     } else {
[0025] (11)       animateCostume(10,248);
[0028] (**)     }
[0028] (80)     breakHere();
[0029] (80)     breakHere();
[002A] (**)   }
[002A] (**) }
[002A] (1A) Local[0] = 0;
[002F] (1D) if (classOfIs(594,[6])) {
[0038] (1D)   if (classOfIs(591,[6])) {
[0041] (2D)     putActorInRoom(10,0);
[0044] (13)     ActorOps(10,[Init(),Name(" ")]);
[004B] (5D)     setClass(10,[0]);
[0052] (62)     stopScript(0);
[0054] (14)     print(253,[Text("Shouldn't have been\x10here!!")]);
[0072] (**)   }
[0072] (**) }
[0072] (68) VAR_RESULT = isScriptRunning(11);
[0076] (48) if (VAR_RESULT == 1) {
[007D] (11)   animateCostume(10,255);
[0080] (62)   stopScript(0);
[0082] (**) }
[0082] (16) Var[442] = getRandomNr(3);
[0086] (48) if (Var[442] == 0) {
[008D] (1E)   walkActorTo(10,508,136);
[0093] (48) } else if (Var[442] == 1) {
[009D] (1E)   walkActorTo(10,490,136);
[00A3] (48) } else if (Var[442] == 2) {
[00AD] (1E)   walkActorTo(10,471,136);
[00B3] (48) } else if (Var[442] == 3) {
[00BD] (1E)   walkActorTo(10,358,136);
[00C3] (18)   /* goto 00C6; */
[00C6] (**) }
[00C6] (AE) WaitForActor(10);
[00C9] (11) animateCostume(10,6);
[00CC] (AC) Exprmode Local[0] = (50 - 30);
[00D7] (AC) Exprmode Local[0] = (<VAR_RESULT = getRandomNr(Local[0])> + 30);
[00E5] (1A) Local[1] = 1;
[00EA] (80) breakHere();
[00EB] (46) Local[1]++;
[00EE] (C4) unless (Local[1] > Local[0]) goto 00EA;
[00F5] (11) animateCostume(10,3);
[00F8] (18) goto 0072;
[00FB] (A0) stopObjectCode();
END

Script# 202 // Try to Take Basket
[0000] (68) VAR_RESULT = isScriptRunning(201);
[0004] (A8) if (VAR_RESULT) {
[0009] (62)   stopScript(201);
[000B] (**) }
[000B] (40) cutscene([2]);
[0010] (28) if (!Bit[400 + 3]) {
[0017] (14)   print(10,[Text("Excuse me, you can't take\x10that!")]);
[003A] (18) } else {
[003D] (14)   print(10,[Text("Hey!")]);
[0045] (**) }
[0045] (89) faceActor(VAR_EGO,10);
[004A] (80) breakHere();
[004B] (4D) walkActorToActor(10,VAR_EGO,30);
[0050] (AE) WaitForActor(10);
[0053] (AE) WaitForMessage();
[0055] (28) if (!Bit[400 + 3]) {
[005C] (14)   print(10,[Text("It belongs to the\x10store^" + wait() + "^and the store belongs to\x10me.")]);
[0097] (18) } else {
[009A] (14)   print(10,[Text("I told you^" + wait() + "^that's\x10mine!")]);
[00B8] (**) }
[00B8] (1A) Bit[400 + 3] = 1;
[00BF] (1A) Bit[400 + 9] = 1;
[00C6] (AE) WaitForMessage();
[00C8] (C0) endCutscene();
[00C9] (42) chainScript(205,[591]);
[00CF] (A0) stopObjectCode();
END

Script# 203 // Try to Open Crate
[0000] (62) stopScript(201);
[0002] (11) animateCostume(10,255);
[0005] (11) animateCostume(10,1);
[0008] (40) cutscene([2]);
[000D] (49) faceActor(10,VAR_EGO);
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (14) print(10,[Text("Pardon me^")]);
[0021] (80) breakHere();
[0022] (80) breakHere();
[0023] (11) animateCostume(1,3);
[0026] (80) breakHere();
[0027] (80) breakHere();
[0028] (09) faceActor(1,10);
[002C] (34) VAR_RESULT = getDist(1,10);
[0033] (44) if (VAR_RESULT > 50) {
[003A] (4D)   walkActorToActor(10,VAR_EGO,30);
[003F] (AE)   WaitForActor(10);
[0042] (09)   faceActor(10,1);
[0046] (80)   breakHere();
[0047] (**) }
[0047] (49) faceActor(10,VAR_EGO);
[004B] (11) animateCostume(10,4);
[004E] (AE) WaitForMessage();
[0050] (49) faceActor(10,VAR_EGO);
[0054] (14) print(10,[Text("^I don't think that belongs\x10to\x10you.")]);
[007B] (AE) WaitForMessage();
[007D] (C0) endCutscene();
[007E] (10) VAR_RESULT = getObjectOwner(944);
[0083] (48) if (VAR_RESULT == 1) {
[008A] (1A)   Bit[400 + 0] = 1;
[0091] (**) }
[0091] (48) if (Bit[400 + 0] == 1) {
[009A] (42)   chainScript(205,[203]);
[00A0] (18) } else {
[00A3] (2A)   startScript(201,[],F);
[00A6] (**) }
[00A6] (A0) stopObjectCode();
END

Script# 204
[0000] (48) if (Var[176] == 2) {
[0007] (0A)   startScript(206,[]);
[000A] (48) } else if (Var[176] == 10) {
[0014] (0A)   startScript(205,[]);
[0017] (48) } else if (Var[176] == 11) {
[0021] (0A)   startScript(208,[]);
[0024] (18)   /* goto 0027; */
[0027] (**) }
[0027] (A0) stopObjectCode();
END

Script# 205 // Talk to Port Authority
[0000] (68) VAR_RESULT = isScriptRunning(201);
[0004] (A8) if (VAR_RESULT) {
[0009] (62)   stopScript(201);
[000B] (**) }
[000B] (11) animateCostume(10,255);
[000E] (48) if (Local[0] == 591) {
[0015] (18) } else {
[0018] (48)   if (Local[0] == 203) {
[001F] (18)   } else {
[0022] (11)     animateCostume(10,6);
[0025] (0A)     startScript(136,[1,10,30,1]);
[0034] (80)     breakHere();
[0035] (68)     VAR_RESULT = isScriptRunning(136);
[0039] (28)     unless (!VAR_RESULT) goto 0034;
[003E] (A8)     if (Bit[22]) {
[0043] (2A)       startScript(201,[],F);
[0046] (62)       stopScript(0);
[0048] (**)     }
[0048] (43)     Var[442] = getActorX(1);
[004D] (43)     Var[443] = getActorX(10);
[0052] (9A)     Local[1] = Var[443];
[0057] (F8)     if (Var[442] < Var[443]) {
[005E] (3A)       Local[1] -= 15;
[0063] (18)     } else {
[0066] (5A)       Local[1] += 15;
[006B] (**)     }
[006B] (92)     panCameraTo(Local[1]);
[006E] (40)     cutscene([2]);
[0073] (89)     faceActor(VAR_EGO,10);
[0078] (80)     breakHere();
[0079] (80)     breakHere();
[007A] (16)     Var[442] = getRandomNr(2);
[007E] (48)     if (Var[442] == 0) {
[0085] (14)       print(1,[Text("Hello, there^")]);
[0096] (48)     } else if (Var[442] == 1) {
[00A0] (14)       print(1,[Text("Say^")]);
[00A8] (48)     } else if (Var[442] == 2) {
[00B2] (14)       print(1,[Text("Excuse me^")]);
[00C0] (18)       /* goto 00C3; */
[00C3] (**)     }
[00C3] (80)     breakHere();
[00C4] (80)     breakHere();
[00C5] (80)     breakHere();
[00C6] (80)     breakHere();
[00C7] (11)     animateCostume(10,1);
[00CA] (09)     faceActor(10,1);
[00CE] (09)     faceActor(1,10);
[00D2] (AE)     WaitForMessage();
[00D4] (C0)     endCutscene();
[00D5] (48)     if (Local[0] == 203) {
[00DC] (18)     } else {
[00DF] (48)       unless (Local[0] == 944) goto 00F4;
[00E6] (**)     }
[00E6] (**)   }
[00E6] (1A)   Bit[400 + 0] = 1;
[00ED] (1A)   Bit[400 + 2] = 1;
[00F4] (48)   unless (Local[0] == 990) goto 0109;
[00FB] (**) }
[00FB] (1A) Bit[400 + 9] = 1;
[0102] (1A) Bit[400 + 2] = 1;
[0109] (28) if (!Bit[400 + 2]) {
[0110] (40)   cutscene([2]);
[0115] (14)   print(10,[Text("What do you want?")]);
[012A] (1A)   Local[2] = 1;
[012F] (AE)   WaitForMessage();
[0131] (C0)   endCutscene();
[0132] (18) } else {
[0135] (1A)   Local[2] = 0;
[013A] (A8)   if (Bit[400 + 0]) {
[0141] (1D)     if (classOfIs(594,[134])) {
[014A] (46)       Local[2]++;
[014D] (**)     }
[014D] (**)   }
[014D] (A8)   if (Bit[400 + 9]) {
[0154] (1D)     if (classOfIs(591,[134])) {
[015D] (10)       VAR_RESULT = getObjectOwner(990);
[0162] (C8)       if (VAR_RESULT == VAR_EGO) {
[0169] (46)         Local[2]++;
[016C] (A8)       } else if (Bit[400 + 4]) {
[0176] (46)         Local[2]++;
[0179] (18)       } else {
[017C] (46)         Local[2]++;
[017F] (**)       }
[017F] (**)     }
[017F] (**)   }
[017F] (28)   if (!Bit[400 + 5]) {
[0186] (46)     Local[2]++;
[0189] (**)   }
[0189] (48)   if (Bit[400 + 8] == 0) {
[0192] (46)     Local[2]++;
[0195] (48)   } else if (Bit[400 + 13] == 0) {
[01A1] (46)     Local[2]++;
[01A4] (**)   }
[01A4] (48)   if (Bit[400 + 6] == 1) {
[01AD] (48)     if (Bit[400 + 1] == 0) {
[01B6] (46)       Local[2]++;
[01B9] (**)     }
[01B9] (**)   }
[01B9] (40)   cutscene([2]);
[01BE] (48)   if (Local[2] == 0) {
[01C5] (14)     print(10,[Text("Talk to me later, I'm busy right\x10now.")]);
[01EE] (AE)     WaitForMessage();
[01F0] (03)     VAR_RESULT = getActorRoom(10);
[01F4] (C8)     if (VAR_RESULT == VAR_ROOM) {
[01FB] (2A)       startScript(201,[],F);
[01FE] (**)     }
[01FE] (08)   } else if (Local[0] != 203) {
[0208] (08)     if (Local[0] != 591) {
[020F] (14)       print(10,[Text("What now?")]);
[021C] (AE)       WaitForMessage();
[021E] (**)     }
[021E] (**)   }
[021E] (C0)   endCutscene();
[021F] (**) }
[021F] (48) if (Local[2] == 0) {
[0226] (D2)   actorFollowCamera(VAR_EGO);
[0229] (62)   stopScript(0);
[022B] (**) }
[022B] (1A) Local[2] = 0;
[0230] (0A) startScript(82,[]);
[0233] (0A) startScript(68,[]);
[0236] (28) if (!Bit[400 + 2]) {
[023D] (48)   if (Bit[400 + 10] == 0) {
[0246] (AC)     Exprmode Var[443] = ((41 + 1) - 1);
[0255] (27)     PutCodeInString(Var[443], "My name is Indiana\x10Jones.");
[0273] (AC)     Exprmode Var[442] = ((120 + 1) - 1);
[0282] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[028B] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0293] (5A)     Var[166] += 10;
[0298] (3A)     Var[442] -= 120;
[029D] (46)     Var[178]++;
[02A0] (1A)     Bit[7 + Var[442]] = 1;
[02A7] (**)   }
[02A7] (48)   if (Bit[400 + 11] == 0) {
[02B0] (AC)     Exprmode Var[443] = ((41 + 2) - 1);
[02BF] (27)     PutCodeInString(Var[443], "Are you in charge around\x10here?");
[02E2] (AC)     Exprmode Var[442] = ((120 + 2) - 1);
[02F1] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[02FA] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0302] (5A)     Var[166] += 10;
[0307] (3A)     Var[442] -= 120;
[030C] (46)     Var[178]++;
[030F] (1A)     Bit[7 + Var[442]] = 1;
[0316] (**)   }
[0316] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[0325] (27)   PutCodeInString(Var[443], "Do you have any charter\x10planes?");
[0349] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[0358] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0361] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0369] (5A)   Var[166] += 10;
[036E] (3A)   Var[442] -= 120;
[0373] (46)   Var[178]++;
[0376] (1A)   Bit[7 + Var[442]] = 1;
[037D] (48)   if (Bit[400 + 7] == 0) {
[0386] (AC)     Exprmode Var[443] = ((41 + 4) - 1);
[0395] (27)     PutCodeInString(Var[443], "Nice island.");
[03A6] (AC)     Exprmode Var[442] = ((120 + 4) - 1);
[03B5] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[03BE] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[03C6] (5A)     Var[166] += 10;
[03CB] (3A)     Var[442] -= 120;
[03D0] (46)     Var[178]++;
[03D3] (1A)     Bit[7 + Var[442]] = 1;
[03DA] (18)   } else {
[03DD] (AC)     Exprmode Var[443] = ((41 + 5) - 1);
[03EC] (27)     PutCodeInString(Var[443], "Be seeing you.");
[03FF] (AC)     Exprmode Var[442] = ((120 + 5) - 1);
[040E] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0417] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[041F] (5A)     Var[166] += 10;
[0424] (3A)     Var[442] -= 120;
[0429] (46)     Var[178]++;
[042C] (1A)     Bit[7 + Var[442]] = 1;
[0433] (**)   }
[0433] (AC)   Exprmode Var[442] = (4 - 1);
[043E] (1A)   Var[167 + Var[442]] = 1;
[0445] (1A)   Var[165] = 0;
[044A] (16)   Var[442] = getRandomNr(1);
[044E] (80)   breakHere();
[044F] (A8)   unless (Var[165]) goto 044A;
[0454] (48)   if (Var[165] == 120) {
[045B] (1A)     Bit[400 + 10] = 1;
[0462] (14)     print(10,[Text("You don't say.")]);
[0474] (48)   } else if (Var[165] == 121) {
[047E] (1A)     Bit[400 + 11] = 1;
[0485] (14)     print(10,[Text("Mmm.")]);
[048D] (48)   } else if (Var[165] == 122) {
[0497] (1A)     Bit[400 + 2] = 1;
[049E] (14)     print(10,[Text("Not a one.  Sorry.")]);
[04B4] (AE)     WaitForMessage();
[04B6] (48)     if (Bit[400 + 6] == 1) {
[04BF] (18)       goto 0233;
[04C2] (18)     } else {
[04C5] (18)       goto 1112;
[04C8] (**)     }
[04C8] (48)   } else if (Var[165] == 123) {
[04D2] (1A)     Bit[400 + 7] = 1;
[04D9] (14)     print(10,[Text("Yes, very nice^" + wait() + "^the famous old volcano^" + wait() + "^the awful explosion^" + wait() + "^the end of civilization^")]);
[0538] (AE)     WaitForMessage();
[053A] (14)     print(10,[Text("^yes, very nice\x10indeed.")]);
[0555] (18)     goto 1112;
[0558] (48)   } else if (Var[165] == 124) {
[0562] (14)     print(10,[Text("Enjoy your holiday.")]);
[0579] (18)     goto 1112;
[057C] (18)     /* goto 057F; */
[057F] (**)   }
[057F] (AE)   WaitForMessage();
[0581] (48)   if (Bit[400 + 12] == 0) {
[058A] (1A)     Bit[400 + 12] = 1;
[0591] (14)     print(10,[Text("Make this quick, I'm a busy\x10man.")]);
[05B5] (**)   }
[05B5] (AE)   WaitForMessage();
[05B7] (18)   goto 0233;
[05BA] (18) } else {
[05BD] (1A)   Local[2] = 0;
[05C2] (A8)   if (Bit[400 + 0]) {
[05C9] (1D)     if (classOfIs(594,[134])) {
[05D2] (AC)       Exprmode Var[443] = ((41 + 1) - 1);
[05E1] (27)       PutCodeInString(Var[443], "I'd like to claim my balloon. " + startAnim(8) + " ");
[0609] (AC)       Exprmode Var[442] = ((120 + 1) - 1);
[0618] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0621] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0629] (5A)       Var[166] += 10;
[062E] (3A)       Var[442] -= 120;
[0633] (46)       Var[178]++;
[0636] (1A)       Bit[7 + Var[442]] = 1;
[063D] (46)       Local[2]++;
[0640] (**)     }
[0640] (**)   }
[0640] (A8)   if (Bit[400 + 9]) {
[0647] (1D)     if (classOfIs(591,[134])) {
[0650] (10)       VAR_RESULT = getObjectOwner(990);
[0655] (C8)       if (VAR_RESULT == VAR_EGO) {
[065C] (AC)         Exprmode Var[443] = ((41 + 6) - 1);
[066B] (27)         PutCodeInString(Var[443], "Would you accept this ancient sign for the\x10basket? " + startAnim(6) + " ");
[06A8] (AC)         Exprmode Var[442] = ((120 + 6) - 1);
[06B7] (FA)         VerbOps(Var[442],[SetXY(2,Var[166])]);
[06C0] (FA)         VerbOps(Var[442],[On(),Key(Var[178]);]);
[06C8] (5A)         Var[166] += 10;
[06CD] (3A)         Var[442] -= 120;
[06D2] (46)         Var[178]++;
[06D5] (1A)         Bit[7 + Var[442]] = 1;
[06DC] (46)         Local[2]++;
[06DF] (A8)       } else if (Bit[400 + 4]) {
[06E9] (AC)         Exprmode Var[443] = ((41 + 6) - 1);
[06F8] (27)         PutCodeInString(Var[443], "I'll give you anything I've got for the\x10basket. " + startAnim(6) + " ");
[0732] (AC)         Exprmode Var[442] = ((120 + 6) - 1);
[0741] (FA)         VerbOps(Var[442],[SetXY(2,Var[166])]);
[074A] (FA)         VerbOps(Var[442],[On(),Key(Var[178]);]);
[0752] (5A)         Var[166] += 10;
[0757] (3A)         Var[442] -= 120;
[075C] (46)         Var[178]++;
[075F] (1A)         Bit[7 + Var[442]] = 1;
[0766] (46)         Local[2]++;
[0769] (18)       } else {
[076C] (AC)         Exprmode Var[443] = ((41 + 6) - 1);
[077B] (27)         PutCodeInString(Var[443], "What do you want for the\x10basket? " + startAnim(6) + " ");
[07A6] (AC)         Exprmode Var[442] = ((120 + 6) - 1);
[07B5] (FA)         VerbOps(Var[442],[SetXY(2,Var[166])]);
[07BE] (FA)         VerbOps(Var[442],[On(),Key(Var[178]);]);
[07C6] (5A)         Var[166] += 10;
[07CB] (3A)         Var[442] -= 120;
[07D0] (46)         Var[178]++;
[07D3] (1A)         Bit[7 + Var[442]] = 1;
[07DA] (46)         Local[2]++;
[07DD] (**)       }
[07DD] (**)     }
[07DD] (**)   }
[07DD] (28)   if (!Bit[400 + 5]) {
[07E4] (AC)     Exprmode Var[443] = ((41 + 3) - 1);
[07F3] (27)     PutCodeInString(Var[443], "Do you know anything about\x10Atlantis?");
[081C] (AC)     Exprmode Var[442] = ((120 + 3) - 1);
[082B] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0834] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[083C] (5A)     Var[166] += 10;
[0841] (3A)     Var[442] -= 120;
[0846] (46)     Var[178]++;
[0849] (1A)     Bit[7 + Var[442]] = 1;
[0850] (46)     Local[2]++;
[0853] (**)   }
[0853] (48)   if (Bit[400 + 8] == 0) {
[085C] (AC)     Exprmode Var[443] = ((41 + 7) - 1);
[086B] (27)     PutCodeInString(Var[443], "Can you book passage for me on the next\x10boat?");
[089D] (AC)     Exprmode Var[442] = ((120 + 7) - 1);
[08AC] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[08B5] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[08BD] (5A)     Var[166] += 10;
[08C2] (3A)     Var[442] -= 120;
[08C7] (46)     Var[178]++;
[08CA] (1A)     Bit[7 + Var[442]] = 1;
[08D1] (46)     Local[2]++;
[08D4] (48)   } else if (Bit[400 + 13] == 0) {
[08E0] (AC)     Exprmode Var[443] = ((41 + 9) - 1);
[08EF] (27)     PutCodeInString(Var[443], "Isn't there ANY way off this\x10island?");
[0918] (AC)     Exprmode Var[442] = ((120 + 9) - 1);
[0927] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0930] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0938] (5A)     Var[166] += 10;
[093D] (3A)     Var[442] -= 120;
[0942] (46)     Var[178]++;
[0945] (1A)     Bit[7 + Var[442]] = 1;
[094C] (46)     Local[2]++;
[094F] (**)   }
[094F] (48)   if (Bit[400 + 6] == 1) {
[0958] (48)     if (Bit[400 + 1] == 0) {
[0961] (AC)       Exprmode Var[443] = ((41 + 4) - 1);
[0970] (27)       PutCodeInString(Var[443], "Any sign of a German\x10U-boat?");
[0991] (AC)       Exprmode Var[442] = ((120 + 4) - 1);
[09A0] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[09A9] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[09B1] (5A)       Var[166] += 10;
[09B6] (3A)       Var[442] -= 120;
[09BB] (46)       Var[178]++;
[09BE] (1A)       Bit[7 + Var[442]] = 1;
[09C5] (46)       Local[2]++;
[09C8] (**)     }
[09C8] (**)   }
[09C8] (48)   if (Local[2] == 0) {
[09CF] (14)     print(1,[Text("Nice talking to\x10you.")]);
[09E7] (AE)     WaitForMessage();
[09E9] (18)     goto 1112;
[09EC] (**)   }
[09EC] (48)   if (Bit[400 + 7] == 0) {
[09F5] (AC)     Exprmode Var[443] = ((41 + 5) - 1);
[0A04] (27)     PutCodeInString(Var[443], "Nice island.");
[0A15] (AC)     Exprmode Var[442] = ((120 + 5) - 1);
[0A24] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0A2D] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0A35] (5A)     Var[166] += 10;
[0A3A] (3A)     Var[442] -= 120;
[0A3F] (46)     Var[178]++;
[0A42] (1A)     Bit[7 + Var[442]] = 1;
[0A49] (46)     Local[2]++;
[0A4C] (AC)     Exprmode Var[442] = (5 - 1);
[0A57] (1A)     Var[167 + Var[442]] = 1;
[0A5E] (18)   } else {
[0A61] (AC)     Exprmode Var[443] = ((41 + 8) - 1);
[0A70] (27)     PutCodeInString(Var[443], "Excuse me, I can see you're\x10busy.");
[0A96] (AC)     Exprmode Var[442] = ((120 + 8) - 1);
[0AA5] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0AAE] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0AB6] (5A)     Var[166] += 10;
[0ABB] (3A)     Var[442] -= 120;
[0AC0] (46)     Var[178]++;
[0AC3] (1A)     Bit[7 + Var[442]] = 1;
[0ACA] (46)     Local[2]++;
[0ACD] (AC)     Exprmode Var[442] = (8 - 1);
[0AD8] (1A)     Var[167 + Var[442]] = 1;
[0ADF] (**)   }
[0ADF] (**) }
[0ADF] (1A) Var[165] = 0;
[0AE4] (16) Var[442] = getRandomNr(1);
[0AE8] (80) breakHere();
[0AE9] (A8) unless (Var[165]) goto 0AE4;
[0AEE] (48) if (Var[165] == 120) {
[0AF5] (14)   print(10,[Text("You have the invoice^" + wait() + "^of course.")]);
[0B1B] (AE)   WaitForMessage();
[0B1D] (10)   VAR_RESULT = getObjectOwner(944);
[0B22] (C8)   if (VAR_RESULT == VAR_EGO) {
[0B29] (D8)     printEgo([Text("Of course.")]);
[0B36] (91)     animateCostume(VAR_EGO,10);
[0B3A] (11)     animateCostume(10,10);
[0B3D] (80)     breakHere();
[0B3E] (80)     breakHere();
[0B3F] (80)     breakHere();
[0B40] (80)     breakHere();
[0B41] (91)     animateCostume(VAR_EGO,3);
[0B45] (11)     animateCostume(10,3);
[0B48] (80)     breakHere();
[0B49] (80)     breakHere();
[0B4A] (AE)     WaitForMessage();
[0B4C] (14)     print(10,[Text("Hmm^everything seems in\x10order." + wait() + "The balloon is YOURS.")]);
[0B85] (5D)     setClass(594,[6]);
[0B8C] (29)     setOwnerOf(944,0);
[0B90] (1D)     if (classOfIs(591,[6])) {
[0B99] (AE)       WaitForMessage();
[0B9B] (14)       print(10,[Text("Now you must excuse me,^" + wait() + "^I have to study that wonderful inscription you\x10found.")]);
[0BEF] (1E)       walkActorTo(10,536,137);
[0BF5] (5D)       setClass(10,[13]);
[0BFC] (0A)       startScript(83,[]);
[0BFF] (AE)       WaitForActor(10);
[0C02] (13)       ActorOps(10,[IgnoreBoxes(),SetZClip(1)]);
[0C08] (1E)       walkActorTo(10,583,136);
[0C0E] (AE)       WaitForActor(10);
[0C11] (D2)       actorFollowCamera(VAR_EGO);
[0C14] (2D)       putActorInRoom(10,0);
[0C17] (62)       stopScript(0);
[0C19] (**)     }
[0C19] (18)   } else {
[0C1C] (D8)     printEgo([Text("Uhh^")]);
[0C23] (AE)     WaitForMessage();
[0C25] (14)     print(10,[Text("As I thought^" + wait() + "No invoice^" + wait() + "^NO BALLOON!" + wait() + "Good day!")]);
[0C5C] (**)   }
[0C5C] (18)   goto 1112;
[0C5F] (48) } else if (Var[165] == 122) {
[0C69] (1A)   Bit[400 + 5] = 1;
[0C70] (14)   print(10,[Text("You mean about Thera as a colony of the\x10Lost\x10City^")]);
[0CA6] (AE)   WaitForMessage();
[0CA8] (80)   breakHere();
[0CA9] (80)   breakHere();
[0CAA] (14)   print(10,[Text("^sorry, can't help\x10you.")]);
[0CC5] (AE)   WaitForMessage();
[0CC7] (18)   goto 0233;
[0CCA] (48) } else if (Var[165] == 123) {
[0CD4] (1A)   Bit[400 + 1] = 1;
[0CDB] (14)   print(10,[Text("In these waters?  Not in my\x10lifetime!")]);
[0D04] (AE)   WaitForMessage();
[0D06] (18)   goto 0233;
[0D09] (48) } else if (Var[165] == 124) {
[0D13] (18)   goto 04D2;
[0D16] (48) } else if (Var[165] == 125) {
[0D20] (10)   VAR_RESULT = getObjectOwner(990);
[0D25] (C8)   if (VAR_RESULT == VAR_EGO) {
[0D2C] (14)     print(10,[Text("Well, let me\x10see!")]);
[0D41] (91)     animateCostume(VAR_EGO,10);
[0D45] (11)     animateCostume(10,9);
[0D48] (80)     breakHere();
[0D49] (80)     breakHere();
[0D4A] (80)     breakHere();
[0D4B] (80)     breakHere();
[0D4C] (91)     animateCostume(VAR_EGO,3);
[0D50] (29)     setOwnerOf(990,0);
[0D54] (5D)     setClass(591,[6]);
[0D5B] (80)     breakHere();
[0D5C] (14)     print(10,[Text("My, my!" + wait() + "This IS a find!" + wait() + "A perfectly preserved inscription in Minoan Hieroglyphics!")]);
[0DB4] (AE)     WaitForMessage();
[0DB6] (14)     print(1,[Text("Never heard of them.")]);
[0DCE] (AE)     WaitForMessage();
[0DD0] (14)     print(10,[Text("Lucky for you I'm completely\x10fluent." + wait() + "Listen^")]);
[0E01] (AE)     WaitForMessage();
[0E03] (14)     print(255,[Color(12),Center(),Pos(160,20),Text("ROAD CLOSED FOR REPAIRS." + newline() + "TRAVELERS USE ALTERNATE\x10ROUTE" + newline() + "FROM GREATER\x10COLONY ON\x10CRETE.")]);
[0E65] (11)     animateCostume(10,4);
[0E68] (AE)     WaitForMessage();
[0E6A] (11)     animateCostume(10,5);
[0E6D] (14)     print(1,[Text("That's it!  The Greater\x10Colony!" + wait() + "Kerner's on his way to\x10CRETE!")]);
[0EAF] (AE)     WaitForMessage();
[0EB1] (14)     print(10,[Text("My friend, the basket is\x10yours!")]);
[0ED4] (1D)     if (classOfIs(594,[6])) {
[0EDD] (AE)       WaitForMessage();
[0EDF] (14)       print(10,[Text("Excuse me, I must study this\x10further.")]);
[0F08] (11)       animateCostume(10,3);
[0F0B] (1E)       walkActorTo(10,536,137);
[0F11] (5D)       setClass(10,[13]);
[0F18] (0A)       startScript(83,[]);
[0F1B] (AE)       WaitForActor(10);
[0F1E] (13)       ActorOps(10,[IgnoreBoxes(),SetZClip(1)]);
[0F24] (1E)       walkActorTo(10,583,136);
[0F2A] (AE)       WaitForActor(10);
[0F2D] (D2)       actorFollowCamera(VAR_EGO);
[0F30] (2D)       putActorInRoom(10,0);
[0F33] (62)       stopScript(0);
[0F35] (**)     }
[0F35] (28)   } else if (!Bit[400 + 4]) {
[0F3F] (14)     print(10,[Text("There's an archaeological expedition in the\x10mountains^" + wait() + "^I'd be grateful for a little\x10souvenir^" + wait() + "^after all^" + wait() + "^I AM a scholar, and this IS my island.")]);
[0FD8] (18)   } else {
[0FDB] (14)     print(10,[Text("Nothing you have is of any interest to\x10me.")]);
[1009] (**)   }
[1009] (1A)   Bit[400 + 4] = 1;
[1010] (18)   goto 1112;
[1013] (48) } else if (Var[165] == 126) {
[101D] (1A)   Bit[400 + 8] = 1;
[1024] (14)   print(10,[Text("Bad news^" + wait() + "^no boats, no planes^" + wait() + "^until next week.")]);
[105B] (AE)   WaitForMessage();
[105D] (18)   goto 0233;
[1060] (48) } else if (Var[165] == 127) {
[106A] (48)   if (Bit[400 + 14] == 0) {
[1073] (1A)     Bit[400 + 14] = 1;
[107A] (14)     print(10,[Text("Very^" + wait() + "^now go be a happy tourist,\x10please.")]);
[10A8] (18)   } else {
[10AB] (14)     print(10,[Text("Yes.  Goodbye.")]);
[10BD] (**)   }
[10BD] (18)   goto 1112;
[10C0] (48) } else if (Var[165] == 128) {
[10CA] (1A)   Bit[400 + 13] = 1;
[10D1] (14)   print(10,[Text("Unless you grow\x10wings like Icarus^" + wait() + "^I'd say you're\x10stuck.")]);
[110F] (18)   /* goto 1112; */
[1112] (**) }
[1112] (AE) WaitForMessage();
[1114] (0A) startScript(83,[]);
[1117] (D2) actorFollowCamera(VAR_EGO);
[111A] (03) VAR_RESULT = getActorRoom(10);
[111E] (C8) if (VAR_RESULT == VAR_ROOM) {
[1125] (2A)   startScript(201,[],F);
[1128] (**) }
[1128] (A0) stopObjectCode();
END

Script# 206 // Talk to Sophia
[0000] (11) animateCostume(2,255);
[0003] (11) animateCostume(2,1);
[0006] (0A) startScript(136,[1,2,30,1]);
[0015] (80) breakHere();
[0016] (68) VAR_RESULT = isScriptRunning(136);
[001A] (28) unless (!VAR_RESULT) goto 0015;
[001F] (A8) if (Bit[22]) {
[0024] (62)   stopScript(0);
[0026] (**) }
[0026] (40) cutscene([2]);
[002B] (16) Var[442] = getRandomNr(2);
[002F] (48) if (Var[442] == 0) {
[0036] (14)   print(1,[Text("Listen, Sophia^")]);
[0049] (48) } else if (Var[442] == 1) {
[0053] (14)   print(1,[Text("Hey^")]);
[005B] (48) } else if (Var[442] == 2) {
[0065] (14)   print(1,[Text("Sophia^")]);
[0070] (18)   /* goto 0073; */
[0073] (**) }
[0073] (80) breakHere();
[0074] (80) breakHere();
[0075] (09) faceActor(2,1);
[0079] (AE) WaitForMessage();
[007B] (16) Var[442] = getRandomNr(1);
[007F] (A8) if (Var[442]) {
[0084] (14)   print(2,[Text("What's on your mind?")]);
[009C] (18) } else {
[009F] (14)   print(2,[Text("Yes?")]);
[00A7] (**) }
[00A7] (AE) WaitForMessage();
[00A9] (C0) endCutscene();
[00AA] (0A) startScript(82,[]);
[00AD] (11) animateCostume(2,1);
[00B0] (1A) Local[0] = 0;
[00B5] (0A) startScript(68,[]);
[00B8] (28) if (!Bit[400 + 3]) {
[00BF] (48)   if (Bit[426 + 0] == 0) {
[00C8] (46)     Local[0]++;
[00CB] (AC)     Exprmode Var[443] = ((41 + 1) - 1);
[00DA] (27)     PutCodeInString(Var[443], "What if Atlantis was vaporized when Thera\x10exploded?" + startAnim(6));
[0116] (AC)     Exprmode Var[442] = ((120 + 1) - 1);
[0125] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[012E] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0136] (5A)     Var[166] += 10;
[013B] (3A)     Var[442] -= 120;
[0140] (46)     Var[178]++;
[0143] (1A)     Bit[7 + Var[442]] = 1;
[014A] (**)   }
[014A] (48)   if (Bit[417 + 7] == 1) {
[0153] (48)     if (Bit[426 + 1] == 0) {
[015C] (46)       Local[0]++;
[015F] (AC)       Exprmode Var[443] = ((41 + 2) - 1);
[016E] (27)       PutCodeInString(Var[443], "Kerner was here and left in a hurry.  I wonder\x10why.");
[01A6] (AC)       Exprmode Var[442] = ((120 + 2) - 1);
[01B5] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[01BE] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[01C6] (5A)       Var[166] += 10;
[01CB] (3A)       Var[442] -= 120;
[01D0] (46)       Var[178]++;
[01D3] (1A)       Bit[7 + Var[442]] = 1;
[01DA] (**)     }
[01DA] (48)   } else if (Bit[426 + 2] == 0) {
[01E6] (46)     Local[0]++;
[01E9] (AC)     Exprmode Var[443] = ((41 + 2) - 1);
[01F8] (27)     PutCodeInString(Var[443], "I wonder if that fisherman knows\x10anything. " + startAnim(6) + " ");
[022D] (AC)     Exprmode Var[442] = ((120 + 2) - 1);
[023C] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0245] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[024D] (5A)     Var[166] += 10;
[0252] (3A)     Var[442] -= 120;
[0257] (46)     Var[178]++;
[025A] (1A)     Bit[7 + Var[442]] = 1;
[0261] (**)   }
[0261] (48)   if (Local[1] == 0) {
[0268] (46)     Local[0]++;
[026B] (AC)     Exprmode Var[443] = ((41 + 3) - 1);
[027A] (27)     PutCodeInString(Var[443], "Where do we go from\x10here?");
[0298] (AC)     Exprmode Var[442] = ((120 + 3) - 1);
[02A7] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[02B0] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[02B8] (5A)     Var[166] += 10;
[02BD] (3A)     Var[442] -= 120;
[02C2] (46)     Var[178]++;
[02C5] (1A)     Bit[7 + Var[442]] = 1;
[02CC] (**)   }
[02CC] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[02DB] (27)   PutCodeInString(Var[443], "Excuse me.");
[02EA] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[02F9] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0302] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[030A] (5A)   Var[166] += 10;
[030F] (3A)   Var[442] -= 120;
[0314] (46)   Var[178]++;
[0317] (1A)   Bit[7 + Var[442]] = 1;
[031E] (AC)   Exprmode Var[442] = (4 - 1);
[0329] (1A)   Var[167 + Var[442]] = 1;
[0330] (1A)   Var[165] = 0;
[0335] (16)   Var[442] = getRandomNr(1);
[0339] (80)   breakHere();
[033A] (A8)   unless (Var[165]) goto 0335;
[033F] (48)   if (Var[165] == 120) {
[0346] (1A)     Bit[426 + 0] = 1;
[034D] (14)     print(2,[Text("Nur-Ab-Sal knows the Lost Kingdom still\x10lives." + startAnim(14))]);
[0383] (48)   } else if (Var[165] == 121) {
[038D] (48)     if (Bit[417 + 7] == 1) {
[0396] (1A)       Bit[426 + 1] = 1;
[039D] (14)       print(2,[Text("He's not here now, so either he gave\x10up^" + wait() + "^or he's way ahead of\x10us.")]);
[03E4] (18)     } else {
[03E7] (1A)       Bit[426 + 2] = 1;
[03EE] (14)       print(2,[Text("Why don't you ask\x10him? " + startAnim(19) + " ")]);
[040E] (**)     }
[040E] (48)   } else if (Var[165] == 122) {
[0418] (1A)     Local[1] = 1;
[041D] (48)     if (Bit[426 + 3] == 0) {
[0426] (1A)       Bit[426 + 3] = 1;
[042D] (14)       print(2,[Text("I don't know^ " + startAnim(7) + " " + wait() + "^but we'd better decide pretty\x10soon^ " + startAnim(19) + " " + wait() + "^if we want to beat the Nazis\x10anywhere.")]);
[0499] (18)     } else {
[049C] (14)       print(2,[Text("It's up to\x10you.")]);
[04AF] (**)     }
[04AF] (48)   } else if (Var[165] == 123) {
[04B9] (14)     print(2,[Text("Sure.")]);
[04C2] (18)     goto 0B42;
[04C5] (18)     /* goto 04C8; */
[04C8] (**)   }
[04C8] (18) } else {
[04CB] (48)   if (Bit[445] == 1) {
[04D2] (48)     if (Bit[426 + 4] == 0) {
[04DB] (48)       if (Bit[444] == 1) {
[04E2] (46)         Local[0]++;
[04E5] (AC)         Exprmode Var[443] = ((41 + 1) - 1);
[04F4] (27)         PutCodeInString(Var[443], "I wonder what the coordinates of Atlantis really\x10are.");
[052E] (AC)         Exprmode Var[442] = ((120 + 1) - 1);
[053D] (FA)         VerbOps(Var[442],[SetXY(2,Var[166])]);
[0546] (FA)         VerbOps(Var[442],[On(),Key(Var[178]);]);
[054E] (5A)         Var[166] += 10;
[0553] (3A)         Var[442] -= 120;
[0558] (46)         Var[178]++;
[055B] (1A)         Bit[7 + Var[442]] = 1;
[0562] (**)       }
[0562] (**)     }
[0562] (48)   } else if (Bit[426 + 5] == 0) {
[056E] (46)     Local[0]++;
[0571] (AC)     Exprmode Var[443] = ((41 + 1) - 1);
[0580] (27)     PutCodeInString(Var[443], "I wonder if this guy has ever salvaged\x10anything.");
[05B5] (AC)     Exprmode Var[442] = ((120 + 1) - 1);
[05C4] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[05CD] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[05D5] (5A)     Var[166] += 10;
[05DA] (3A)     Var[442] -= 120;
[05DF] (46)     Var[178]++;
[05E2] (1A)     Bit[7 + Var[442]] = 1;
[05E9] (**)   }
[05E9] (48)   if (Bit[417 + 7] == 1) {
[05F2] (48)     if (Bit[426 + 6] == 0) {
[05FB] (46)       Local[0]++;
[05FE] (AC)       Exprmode Var[443] = ((41 + 2) - 1);
[060D] (27)       PutCodeInString(Var[443], "I wonder what Kerner found up in the\x10hills.");
[063D] (AC)       Exprmode Var[442] = ((120 + 2) - 1);
[064C] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0655] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[065D] (5A)       Var[166] += 10;
[0662] (3A)       Var[442] -= 120;
[0667] (46)       Var[178]++;
[066A] (1A)       Bit[7 + Var[442]] = 1;
[0671] (**)     }
[0671] (48)   } else if (Bit[426 + 7] == 0) {
[067D] (46)     Local[0]++;
[0680] (AC)     Exprmode Var[443] = ((41 + 3) - 1);
[068F] (27)     PutCodeInString(Var[443], "I wonder what Kerner is up to right\x10now.");
[06BC] (AC)     Exprmode Var[442] = ((120 + 3) - 1);
[06CB] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[06D4] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[06DC] (5A)     Var[166] += 10;
[06E1] (3A)     Var[442] -= 120;
[06E6] (46)     Var[178]++;
[06E9] (1A)     Bit[7 + Var[442]] = 1;
[06F0] (48)   } else if (Local[1] == 0) {
[06FA] (46)     Local[0]++;
[06FD] (AC)     Exprmode Var[443] = ((41 + 5) - 1);
[070C] (27)     PutCodeInString(Var[443], "What do we do\x10now?");
[0723] (AC)     Exprmode Var[442] = ((120 + 5) - 1);
[0732] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[073B] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0743] (5A)     Var[166] += 10;
[0748] (3A)     Var[442] -= 120;
[074D] (46)     Var[178]++;
[0750] (1A)     Bit[7 + Var[442]] = 1;
[0757] (**)   }
[0757] (48)   if (Bit[400 + 12] == 0) {
[0760] (48)     if (Bit[446] == 1) {
[0767] (1D)       if (classOfIs(491,[140])) {
[0770] (46)         Local[0]++;
[0773] (AC)         Exprmode Var[443] = ((41 + 6) - 1);
[0782] (27)         PutCodeInString(Var[443], "I wonder how we're supposed to use that\x10suit.");
[07B4] (AC)         Exprmode Var[442] = ((120 + 6) - 1);
[07C3] (FA)         VerbOps(Var[442],[SetXY(2,Var[166])]);
[07CC] (FA)         VerbOps(Var[442],[On(),Key(Var[178]);]);
[07D4] (5A)         Var[166] += 10;
[07D9] (3A)         Var[442] -= 120;
[07DE] (46)         Var[178]++;
[07E1] (1A)         Bit[7 + Var[442]] = 1;
[07E8] (**)       }
[07E8] (**)     }
[07E8] (**)   }
[07E8] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[07F7] (27)   PutCodeInString(Var[443], "Never mind.");
[0807] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[0816] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[081F] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0827] (5A)   Var[166] += 10;
[082C] (3A)   Var[442] -= 120;
[0831] (46)   Var[178]++;
[0834] (1A)   Bit[7 + Var[442]] = 1;
[083B] (AC)   Exprmode Var[442] = (4 - 1);
[0846] (1A)   Var[167 + Var[442]] = 1;
[084D] (1A)   Var[165] = 0;
[0852] (16)   Var[442] = getRandomNr(1);
[0856] (80)   breakHere();
[0857] (A8)   unless (Var[165]) goto 0852;
[085C] (48)   if (Var[165] == 120) {
[0863] (48)     if (Bit[445] == 1) {
[086A] (1A)       Bit[426 + 4] = 1;
[0871] (14)       print(2,[Text("Maybe Plato's lost dialogue will\x10help.")]);
[089B] (18)     } else {
[089E] (1A)       Bit[426 + 5] = 1;
[08A5] (14)       print(2,[Text("Put it this\x10way^" + wait() + "^I don't think he's ready to bring up the\x10Titanic.")]);
[08ED] (**)     }
[08ED] (48)   } else if (Var[165] == 121) {
[08F7] (1A)     Bit[426 + 6] = 1;
[08FE] (14)     print(2,[Text("I've read there were tunnels connecting Atlantis to her\x10colonies^" + wait() + "^maybe he found\x10one." + wait() + "Looks like we're in a real\x10race.")]);
[097B] (48)   } else if (Var[165] == 122) {
[0985] (1A)     Bit[426 + 7] = 1;
[098C] (14)     print(2,[Text("I'll bet he wonders the same thing about\x10us.")]);
[09BC] (48)   } else if (Var[165] == 123) {
[09C6] (14)     print(2,[Text("Okay.")]);
[09CF] (18)     goto 0B42;
[09D2] (48)   } else if (Var[165] == 124) {
[09DC] (1A)     Local[1] = 1;
[09E1] (48)     if (Bit[445] == 0) {
[09E8] (14)       print(2,[Text("Let's hire that\x10boat.")]);
[0A01] (48)       if (Bit[426 + 16] == 0) {
[0A0A] (1A)         Bit[426 + 16] = 1;
[0A11] (AE)         WaitForMessage();
[0A13] (14)         print(2,[Text("I think Atlantis might be out there somewhere^" + wait() + "^underwater.")]);
[0A53] (**)       }
[0A53] (18)     } else {
[0A56] (10)       VAR_RESULT = getObjectOwner(946);
[0A5B] (08)       if (VAR_RESULT != 1) {
[0A62] (A8)         if (Bit[446]) {
[0A67] (14)           print(2,[Text("Let's find a way to fix that\x10suit.")]);
[0A8D] (18)         } else {
[0A93] (18)           goto 0AB5;
[0A96] (**)         }
[0A96] (**)       }
[0A96] (14)       print(2,[Text("Let's hire that boat\x10again.")]);
[0AB5] (**)     }
[0AB5] (48)   } else if (Var[165] == 125) {
[0ABF] (1A)     Bit[400 + 12] = 1;
[0AC6] (10)     VAR_RESULT = getObjectOwner(946);
[0ACB] (08)     if (VAR_RESULT != 1) {
[0AD2] (14)       print(2,[Text("I guess we better find a repair\x10kit.")]);
[0AFA] (18)     } else {
[0AFD] (14)       print(2,[Text("How should I\x10know?" + wait() + "I'm a psychic, not a\x10mechanic.")]);
[0B33] (**)     }
[0B33] (18)     /* goto 0B36; */
[0B36] (**)   }
[0B36] (**) }
[0B36] (44) if (Local[0] > 1) {
[0B3D] (AE)   WaitForMessage();
[0B3F] (18)   goto 00AD;
[0B42] (**) }
[0B42] (AE) WaitForMessage();
[0B44] (11) animateCostume(2,1);
[0B47] (0A) startScript(83,[]);
[0B4A] (0A) startScript(215,[]);
[0B4D] (A0) stopObjectCode();
END

Script# 207 // First Entered Thera (Fists)
[0000] (40) cutscene([2]);
[0005] (58) beginOverride();
[0007] (18) goto 01A7;
[000A] (2E) delay(120);
[000E] (91) animateCostume(VAR_EGO,255);
[0012] (91) animateCostume(VAR_EGO,3);
[0016] (1E) walkActorTo(1,407,138);
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (80) breakHere();
[001F] (80) breakHere();
[0020] (80) breakHere();
[0021] (80) breakHere();
[0022] (1E) walkActorTo(2,360,138);
[0028] (AE) WaitForActor(1);
[002B] (AE) WaitForActor(2);
[002E] (09) faceActor(1,2);
[0032] (80) breakHere();
[0033] (80) breakHere();
[0034] (09) faceActor(2,1);
[0038] (80) breakHere();
[0039] (80) breakHere();
[003A] (14) print(1,[Text("Here we are^" + wait() + "^THERA^" + wait() + "^the whole island is the rim of an extinct\x10volcano." + wait() + "There's a Greek scholar named\x10Marinatos" + newline() + "who claims the place exploded in\x101600\x10BC^" + wait() + "^and wiped out civilization all over the\x10Mediterranean.")]);
[0115] (AE) WaitForMessage();
[0117] (14) print(2,[Text("Kind of like Krakatoa.")]);
[0131] (AE) WaitForMessage();
[0133] (14) print(1,[Text("Exactly, only bigger." + wait() + "Maybe it wiped out Atlantis as\x10well.")]);
[0172] (AE) WaitForMessage();
[0174] (58) endOverride();
[0176] (14) print(2,[Text("It's useless to speculate^" + wait() + "^what's our\x10plan?")]);
[01A7] (A8) if (VAR_OVERRIDE) {
[01AC] (01)   putActor(1,407,138);
[01B2] (01)   putActor(2,360,138);
[01B8] (09)   faceActor(1,2);
[01BC] (80)   breakHere();
[01BD] (80)   breakHere();
[01BE] (09)   faceActor(2,1);
[01C2] (80)   breakHere();
[01C3] (80)   breakHere();
[01C4] (14)   print(2,[Text("What's our plan,\x10Jones?")]);
[01DF] (**) }
[01DF] (AE) WaitForMessage();
[01E1] (C0) endCutscene();
[01E2] (0A) startScript(82,[]);
[01E5] (0A) startScript(68,[]);
[01E8] (AC) Exprmode Var[443] = ((41 + 1) - 1);
[01F7] (27) PutCodeInString(Var[443], "We could talk to the\x10locals. " + startAnim(8) + " ");
[021E] (AC) Exprmode Var[442] = ((120 + 1) - 1);
[022D] (FA) VerbOps(Var[442],[SetXY(2,Var[166])]);
[0236] (FA) VerbOps(Var[442],[On(),Key(Var[178]);]);
[023E] (5A) Var[166] += 10;
[0243] (3A) Var[442] -= 120;
[0248] (46) Var[178]++;
[024B] (1A) Bit[7 + Var[442]] = 1;
[0252] (AC) Exprmode Var[443] = ((41 + 2) - 1);
[0261] (27) PutCodeInString(Var[443], "I don't know, what do you want to\x10do? ");
[028C] (AC) Exprmode Var[442] = ((120 + 2) - 1);
[029B] (FA) VerbOps(Var[442],[SetXY(2,Var[166])]);
[02A4] (FA) VerbOps(Var[442],[On(),Key(Var[178]);]);
[02AC] (5A) Var[166] += 10;
[02B1] (3A) Var[442] -= 120;
[02B6] (46) Var[178]++;
[02B9] (1A) Bit[7 + Var[442]] = 1;
[02C0] (48) if (Bit[400 + 15] == 0) {
[02C9] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[02D8] (27)   PutCodeInString(Var[443], "Plan?  I don't have a\x10plan. " + startAnim(13) + " ");
[02FE] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[030D] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0316] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[031E] (5A)   Var[166] += 10;
[0323] (3A)   Var[442] -= 120;
[0328] (46)   Var[178]++;
[032B] (1A)   Bit[7 + Var[442]] = 1;
[0332] (**) }
[0332] (AC) Exprmode Var[443] = ((41 + 4) - 1);
[0341] (27) PutCodeInString(Var[443], "Let's take a look\x10around. " + startAnim(8) + " ");
[0365] (AC) Exprmode Var[442] = ((120 + 4) - 1);
[0374] (FA) VerbOps(Var[442],[SetXY(2,Var[166])]);
[037D] (FA) VerbOps(Var[442],[On(),Key(Var[178]);]);
[0385] (5A) Var[166] += 10;
[038A] (3A) Var[442] -= 120;
[038F] (46) Var[178]++;
[0392] (1A) Bit[7 + Var[442]] = 1;
[0399] (AC) Exprmode Var[442] = (4 - 1);
[03A4] (1A) Var[167 + Var[442]] = 1;
[03AB] (1A) Var[165] = 0;
[03B0] (16) Var[442] = getRandomNr(1);
[03B4] (80) breakHere();
[03B5] (A8) unless (Var[165]) goto 03B0;
[03BA] (48) if (Var[165] == 120) {
[03C1] (14)   print(2,[Text("That's a good idea. " + startAnim(19) + " ")]);
[03DE] (48) } else if (Var[165] == 121) {
[03E8] (1A)   Bit[426 + 16] = 1;
[03EF] (14)   print(2,[Text("I think Atlantis is somewhere out there\x10underwater." + wait() + "I think we should hire a\x10boat.")]);
[0446] (48) } else if (Var[165] == 122) {
[0450] (1A)   Bit[400 + 15] = 1;
[0457] (11)   animateCostume(1,1);
[045A] (14)   print(2,[Text("Come on, Jones^" + wait() + "^we need one. " + startAnim(19) + " ")]);
[0482] (AE)   WaitForMessage();
[0484] (11)   animateCostume(2,1);
[0487] (18)   goto 01E5;
[048A] (48) } else if (Var[165] == 123) {
[0494] (14)   print(2,[Text("Okay.")]);
[049D] (18)   /* goto 04A0; */
[04A0] (**) }
[04A0] (AE) WaitForMessage();
[04A2] (11) animateCostume(2,1);
[04A5] (0A) startScript(83,[]);
[04A8] (0A) startScript(215,[]);
[04AB] (A0) stopObjectCode();
END

Script# 208 // Talk to Captain
[0000] (1A) Local[0] = 0;
[0005] (40) cutscene([2]);
[000A] (0C) Resource.loadSound(82);
[000D] (62) stopScript(151);
[000F] (4C) soundKludge([268,80,0,7]);
[001D] (4C) soundKludge([270,80,7]);
[0028] (4C) soundKludge([271,269,80,0,600]);
[0039] (4C) soundKludge([271,-1]);
[0041] (4C) soundKludge([270,80,8]);
[004C] (4C) soundKludge([271,257,80,0]);
[005A] (4C) soundKludge([271,262,80,0]);
[0068] (4C) soundKludge([271,269,80,0,60]);
[0079] (4C) soundKludge([271,8,82]);
[0084] (4C) soundKludge([271,-1]);
[008C] (68) VAR_RESULT = isScriptRunning(209);
[0090] (A8) if (VAR_RESULT) {
[0095] (62)   stopScript(209);
[0097] (**) }
[0097] (11) animateCostume(11,5);
[009A] (80) breakHere();
[009B] (11) animateCostume(11,3);
[009E] (80) breakHere();
[009F] (14) print(1,[Text("Ahoy, there!")]);
[00AF] (09) faceActor(2,11);
[00B3] (1E) walkActorTo(11,334,115);
[00B9] (1E) walkActorTo(1,399,116);
[00BF] (1E) walkActorTo(2,417,136);
[00C5] (AE) WaitForActor(11);
[00C8] (AE) WaitForActor(2);
[00CB] (09) faceActor(2,11);
[00CF] (AE) WaitForActor(1);
[00D2] (09) faceActor(1,11);
[00D6] (80) breakHere();
[00D7] (80) breakHere();
[00D8] (09) faceActor(11,1);
[00DC] (80) breakHere();
[00DD] (80) breakHere();
[00DE] (AE) WaitForMessage();
[00E0] (A8) if (Bit[400 + 5]) {
[00E7] (14)   print(11,[Text("Let's hear your apology." + startAnim(9))]);
[0107] (AE)   WaitForMessage();
[0109] (1A)   Local[1] = 1;
[010E] (18) } else {
[0111] (28)   if (!Bit[400 + 3]) {
[0118] (14)     print(11,[Text("Ahoy, yourself! " + startAnim(9) + " " + wait() + "If it's salvage work you need, I'm your\x10man." + wait() + "No job too big." + wait() + "No job too small.")]);
[0183] (18)   } else {
[0186] (14)     print(11,[Text("You again.  What do you\x10want? " + startAnim(9) + " ")]);
[01AD] (**)   }
[01AD] (AE)   WaitForMessage();
[01AF] (**) }
[01AF] (C0) endCutscene();
[01B0] (0A) startScript(82,[]);
[01B3] (A8) if (Local[1]) {
[01B8] (18) } else {
[01BB] (0A)   startScript(68,[]);
[01BE] (A8)   if (Bit[400 + 10]) {
[01C5] (10)     VAR_RESULT = getObjectOwner(946);
[01CA] (88)     if (VAR_RESULT != VAR_EGO) {
[01D1] (AC)       Exprmode Var[443] = ((41 + 1) - 1);
[01E0] (27)       PutCodeInString(Var[443], "Let's go.");
[01EE] (AC)       Exprmode Var[442] = ((120 + 1) - 1);
[01FD] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0206] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[020E] (5A)       Var[166] += 10;
[0213] (3A)       Var[442] -= 120;
[0218] (46)       Var[178]++;
[021B] (1A)       Bit[7 + Var[442]] = 1;
[0222] (18)     } else {
[0225] (AC)       Exprmode Var[443] = ((41 + 1) - 1);
[0234] (27)       PutCodeInString(Var[443], "Let's go.  I can fix the\x10suit.");
[0257] (AC)       Exprmode Var[442] = ((120 + 1) - 1);
[0266] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[026F] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0277] (5A)       Var[166] += 10;
[027C] (3A)       Var[442] -= 120;
[0281] (46)       Var[178]++;
[0284] (1A)       Bit[7 + Var[442]] = 1;
[028B] (**)     }
[028B] (48)   } else if (Bit[400 + 11] == 0) {
[0297] (AC)     Exprmode Var[443] = ((41 + 5) - 1);
[02A6] (27)     PutCodeInString(Var[443], "You ever hear of Atlantis?");
[02C5] (AC)     Exprmode Var[442] = ((120 + 5) - 1);
[02D4] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[02DD] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[02E5] (5A)     Var[166] += 10;
[02EA] (3A)     Var[442] -= 120;
[02EF] (46)     Var[178]++;
[02F2] (1A)     Bit[7 + Var[442]] = 1;
[02F9] (18)   } else {
[02FC] (AC)     Exprmode Var[443] = ((41 + 5) - 1);
[030B] (27)     PutCodeInString(Var[443], "Can you take us to Atlantis?");
[032C] (AC)     Exprmode Var[442] = ((120 + 5) - 1);
[033B] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0344] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[034C] (5A)     Var[166] += 10;
[0351] (3A)     Var[442] -= 120;
[0356] (46)     Var[178]++;
[0359] (1A)     Bit[7 + Var[442]] = 1;
[0360] (**)   }
[0360] (28)   if (!Bit[400 + 1]) {
[0367] (AC)     Exprmode Var[443] = ((41 + 2) - 1);
[0376] (27)     PutCodeInString(Var[443], "Have you seen any suspicious visitors?");
[03A1] (AC)     Exprmode Var[442] = ((120 + 2) - 1);
[03B0] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[03B9] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[03C1] (5A)     Var[166] += 10;
[03C6] (3A)     Var[442] -= 120;
[03CB] (46)     Var[178]++;
[03CE] (1A)     Bit[7 + Var[442]] = 1;
[03D5] (**)   }
[03D5] (28)   if (!Bit[400 + 4]) {
[03DC] (AC)     Exprmode Var[443] = ((41 + 3) - 1);
[03EB] (27)     PutCodeInString(Var[443], "This is a pretty run-down\x10boat.");
[040F] (AC)     Exprmode Var[442] = ((120 + 3) - 1);
[041E] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0427] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[042F] (5A)     Var[166] += 10;
[0434] (3A)     Var[442] -= 120;
[0439] (46)     Var[178]++;
[043C] (1A)     Bit[7 + Var[442]] = 1;
[0443] (**)   }
[0443] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[0452] (27)   PutCodeInString(Var[443], "I'll talk to you later.");
[046E] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[047D] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0486] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[048E] (5A)   Var[166] += 10;
[0493] (3A)   Var[442] -= 120;
[0498] (46)   Var[178]++;
[049B] (1A)   Bit[7 + Var[442]] = 1;
[04A2] (AC)   Exprmode Var[442] = (4 - 1);
[04AD] (1A)   Var[167 + Var[442]] = 1;
[04B4] (1A)   Var[165] = 0;
[04B9] (16)   Var[442] = getRandomNr(1);
[04BD] (80)   breakHere();
[04BE] (A8)   unless (Var[165]) goto 04B9;
[04C3] (48)   if (Var[165] == 120) {
[04CA] (28)     if (!Bit[400 + 8]) {
[04D1] (1A)       Bit[400 + 8] = 1;
[04D8] (14)       print(11,[Text("To Atlantis? " + startAnim(13) + " ")]);
[04EE] (AE)       WaitForMessage();
[04F0] (14)       print(11,[Text("I can't go anywhere that's not marked on my\x10charts^ " + startAnim(10) + " " + wait() + "^where exactly do you expect to find\x10it?")]);
[0557] (18)     } else {
[055A] (14)       print(11,[Text("Fine by me.  Where are we\x10going?")]);
[057E] (**)     }
[057E] (18)     goto 08C0;
[0581] (48)   } else if (Var[165] == 121) {
[058B] (1A)     Bit[400 + 1] = 1;
[0592] (14)     print(11,[Text("I did see some German gentlemen a while\x10back^" + wait() + "^but not recently.")]);
[05D7] (48)   } else if (Var[165] == 122) {
[05E1] (1A)     Bit[400 + 4] = 1;
[05E8] (54)     setObjectName(592,"old Bessie");
[05F6] (14)     print(11,[Text("Watch what you say about old Bessie\x10here!" + wait() + "She may not look like much, but she's got what it\x10takes.")]);
[065D] (1A)     Bit[400 + 5] = 1;
[0664] (14)     print(11,[Text("Run-down!?" + wait() + "You'd best apologize,\x10mister." + startAnim(9))]);
[0695] (AE)     WaitForMessage();
[0697] (18)     goto 189F;
[069A] (48)   } else if (Var[165] == 123) {
[06A4] (14)     print(11,[Text("Enjoy your stay on\x10Thera.")]);
[06C1] (18)     goto 1B72;
[06C4] (48)   } else if (Var[165] == 124) {
[06CE] (48)     if (Bit[400 + 11] == 0) {
[06D7] (14)       print(11,[Text("Of course.  And dragons and mermaids\x10and^ " + startAnim(13) + " ")]);
[070A] (18)       goto 0761;
[070D] (18)     } else {
[0710] (14)       print(11,[Text("If I knew where it was, I\x10could." + wait() + "Where exactly do you want\x10to\x10go?")]);
[0756] (18)       goto 08C0;
[0759] (**)     }
[0759] (18)     /* goto 075C; */
[075C] (**)   }
[075C] (AE)   WaitForMessage();
[075E] (18)   goto 01BB;
[0761] (AE)   WaitForMessage();
[0763] (1A)   Bit[400 + 11] = 1;
[076A] (0A)   startScript(68,[]);
[076D] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[077C] (27)   PutCodeInString(Var[443], "I want to go there.  Can you take\x10us?");
[07A6] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[07B5] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[07BE] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[07C6] (5A)   Var[166] += 10;
[07CB] (3A)   Var[442] -= 120;
[07D0] (46)   Var[178]++;
[07D3] (1A)   Bit[7 + Var[442]] = 1;
[07DA] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[07E9] (27)   PutCodeInString(Var[443], "So you think it's just\x10a\x10myth?");
[080C] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[081B] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0824] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[082C] (5A)   Var[166] += 10;
[0831] (3A)   Var[442] -= 120;
[0836] (46)   Var[178]++;
[0839] (1A)   Bit[7 + Var[442]] = 1;
[0840] (1A)   Var[165] = 0;
[0845] (16)   Var[442] = getRandomNr(1);
[0849] (80)   breakHere();
[084A] (A8)   unless (Var[165]) goto 0845;
[084F] (48)   if (Var[165] == 120) {
[0856] (18)     goto 04CA;
[0859] (48)   } else if (Var[165] == 121) {
[0863] (14)     print(11,[Text("I've heard tell that down in the tropics they've got fish\x10that\x10fly^" + wait() + "^so who knows.")]);
[08BA] (18)     goto 1B72;
[08BD] (18)     /* goto 08C0; */
[08C0] (**)   }
[08C0] (AE)   WaitForMessage();
[08C2] (1A)   Local[0] = 0;
[08C7] (0A)   startScript(68,[]);
[08CA] (78)   if (Var[239] < 200) {
[08D1] (AC)     Exprmode Var[443] = ((41 + 1) - 1);
[08E0] (27)     PutCodeInString(Var[443], "15 miles from here.");
[08F8] (AC)     Exprmode Var[442] = ((120 + 1) - 1);
[0907] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0910] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0918] (5A)     Var[166] += 10;
[091D] (3A)     Var[442] -= 120;
[0922] (46)     Var[178]++;
[0925] (1A)     Bit[7 + Var[442]] = 1;
[092C] (AC)     Exprmode Var[443] = ((41 + 2) - 1);
[093B] (27)     PutCodeInString(Var[443], "16 miles from here.");
[0953] (AC)     Exprmode Var[442] = ((120 + 2) - 1);
[0962] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[096B] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0973] (5A)     Var[166] += 10;
[0978] (3A)     Var[442] -= 120;
[097D] (46)     Var[178]++;
[0980] (1A)     Bit[7 + Var[442]] = 1;
[0987] (AC)     Exprmode Var[443] = ((41 + 3) - 1);
[0996] (27)     PutCodeInString(Var[443], "17 miles from here.");
[09AE] (AC)     Exprmode Var[442] = ((120 + 3) - 1);
[09BD] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[09C6] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[09CE] (5A)     Var[166] += 10;
[09D3] (3A)     Var[442] -= 120;
[09D8] (46)     Var[178]++;
[09DB] (1A)     Bit[7 + Var[442]] = 1;
[09E2] (AC)     Exprmode Var[443] = ((41 + 4) - 1);
[09F1] (27)     PutCodeInString(Var[443], "18 miles from here.");
[0A09] (AC)     Exprmode Var[442] = ((120 + 4) - 1);
[0A18] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[0A21] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[0A29] (5A)     Var[166] += 10;
[0A2E] (3A)     Var[442] -= 120;
[0A33] (46)     Var[178]++;
[0A36] (1A)     Bit[7 + Var[442]] = 1;
[0A3D] (**)   }
[0A3D] (38)   if (Var[239] >= 200) {
[0A44] (78)     if (Var[239] < 300) {
[0A4B] (AC)       Exprmode Var[443] = ((41 + 1) - 1);
[0A5A] (27)       PutCodeInString(Var[443], "24 miles from here.");
[0A72] (AC)       Exprmode Var[442] = ((120 + 1) - 1);
[0A81] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0A8A] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0A92] (5A)       Var[166] += 10;
[0A97] (3A)       Var[442] -= 120;
[0A9C] (46)       Var[178]++;
[0A9F] (1A)       Bit[7 + Var[442]] = 1;
[0AA6] (AC)       Exprmode Var[443] = ((41 + 2) - 1);
[0AB5] (27)       PutCodeInString(Var[443], "25 miles from here.");
[0ACD] (AC)       Exprmode Var[442] = ((120 + 2) - 1);
[0ADC] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0AE5] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0AED] (5A)       Var[166] += 10;
[0AF2] (3A)       Var[442] -= 120;
[0AF7] (46)       Var[178]++;
[0AFA] (1A)       Bit[7 + Var[442]] = 1;
[0B01] (AC)       Exprmode Var[443] = ((41 + 3) - 1);
[0B10] (27)       PutCodeInString(Var[443], "26 miles from here.");
[0B28] (AC)       Exprmode Var[442] = ((120 + 3) - 1);
[0B37] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0B40] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0B48] (5A)       Var[166] += 10;
[0B4D] (3A)       Var[442] -= 120;
[0B52] (46)       Var[178]++;
[0B55] (1A)       Bit[7 + Var[442]] = 1;
[0B5C] (AC)       Exprmode Var[443] = ((41 + 4) - 1);
[0B6B] (27)       PutCodeInString(Var[443], "27 miles from here.");
[0B83] (AC)       Exprmode Var[442] = ((120 + 4) - 1);
[0B92] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0B9B] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0BA3] (5A)       Var[166] += 10;
[0BA8] (3A)       Var[442] -= 120;
[0BAD] (46)       Var[178]++;
[0BB0] (1A)       Bit[7 + Var[442]] = 1;
[0BB7] (**)     }
[0BB7] (**)   }
[0BB7] (38)   if (Var[239] >= 300) {
[0BBE] (78)     if (Var[239] < 400) {
[0BC5] (AC)       Exprmode Var[443] = ((41 + 1) - 1);
[0BD4] (27)       PutCodeInString(Var[443], "33 miles from here.");
[0BEC] (AC)       Exprmode Var[442] = ((120 + 1) - 1);
[0BFB] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0C04] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0C0C] (5A)       Var[166] += 10;
[0C11] (3A)       Var[442] -= 120;
[0C16] (46)       Var[178]++;
[0C19] (1A)       Bit[7 + Var[442]] = 1;
[0C20] (AC)       Exprmode Var[443] = ((41 + 2) - 1);
[0C2F] (27)       PutCodeInString(Var[443], "34 miles from here.");
[0C47] (AC)       Exprmode Var[442] = ((120 + 2) - 1);
[0C56] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0C5F] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0C67] (5A)       Var[166] += 10;
[0C6C] (3A)       Var[442] -= 120;
[0C71] (46)       Var[178]++;
[0C74] (1A)       Bit[7 + Var[442]] = 1;
[0C7B] (AC)       Exprmode Var[443] = ((41 + 3) - 1);
[0C8A] (27)       PutCodeInString(Var[443], "35 miles from here.");
[0CA2] (AC)       Exprmode Var[442] = ((120 + 3) - 1);
[0CB1] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0CBA] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0CC2] (5A)       Var[166] += 10;
[0CC7] (3A)       Var[442] -= 120;
[0CCC] (46)       Var[178]++;
[0CCF] (1A)       Bit[7 + Var[442]] = 1;
[0CD6] (AC)       Exprmode Var[443] = ((41 + 4) - 1);
[0CE5] (27)       PutCodeInString(Var[443], "36 miles from here.");
[0CFD] (AC)       Exprmode Var[442] = ((120 + 4) - 1);
[0D0C] (FA)       VerbOps(Var[442],[SetXY(2,Var[166])]);
[0D15] (FA)       VerbOps(Var[442],[On(),Key(Var[178]);]);
[0D1D] (5A)       Var[166] += 10;
[0D22] (3A)       Var[442] -= 120;
[0D27] (46)       Var[178]++;
[0D2A] (1A)       Bit[7 + Var[442]] = 1;
[0D31] (**)     }
[0D31] (**)   }
[0D31] (AC)   Exprmode Var[443] = ((41 + 5) - 1);
[0D40] (27)   PutCodeInString(Var[443], "Darn.  I can't\x10remember.");
[0D5D] (AC)   Exprmode Var[442] = ((120 + 5) - 1);
[0D6C] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0D75] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0D7D] (5A)   Var[166] += 10;
[0D82] (3A)   Var[442] -= 120;
[0D87] (46)   Var[178]++;
[0D8A] (1A)   Bit[7 + Var[442]] = 1;
[0D91] (AC)   Exprmode Var[442] = (5 - 1);
[0D9C] (1A)   Var[167 + Var[442]] = 1;
[0DA3] (78)   if (Var[239] < 200) {
[0DAA] (1A)     Var[165] = 0;
[0DAF] (16)     Var[442] = getRandomNr(1);
[0DB3] (80)     breakHere();
[0DB4] (A8)     unless (Var[165]) goto 0DAF;
[0DB9] (48)     if (Var[165] == 120) {
[0DC0] (1A)       Var[415] = 15;
[0DC5] (48)       if (Var[239] == 150) {
[0DCC] (46)         Local[0]++;
[0DCF] (**)       }
[0DCF] (48)     } else if (Var[165] == 121) {
[0DD9] (1A)       Var[415] = 16;
[0DDE] (48)       if (Var[239] == 160) {
[0DE5] (46)         Local[0]++;
[0DE8] (**)       }
[0DE8] (48)     } else if (Var[165] == 122) {
[0DF2] (1A)       Var[415] = 17;
[0DF7] (48)       if (Var[239] == 170) {
[0DFE] (46)         Local[0]++;
[0E01] (**)       }
[0E01] (48)     } else if (Var[165] == 123) {
[0E0B] (1A)       Var[415] = 18;
[0E10] (48)       if (Var[239] == 180) {
[0E17] (46)         Local[0]++;
[0E1A] (**)       }
[0E1A] (48)     } else if (Var[165] == 124) {
[0E24] (18)       goto 117F;
[0E27] (18)       /* goto 0E2A; */
[0E2A] (**)     }
[0E2A] (**)   }
[0E2A] (38)   if (Var[239] >= 200) {
[0E31] (78)     if (Var[239] < 300) {
[0E38] (1A)       Var[165] = 0;
[0E3D] (16)       Var[442] = getRandomNr(1);
[0E41] (80)       breakHere();
[0E42] (A8)       unless (Var[165]) goto 0E3D;
[0E47] (48)       if (Var[165] == 120) {
[0E4E] (1A)         Var[415] = 24;
[0E53] (48)         if (Var[239] == 240) {
[0E5A] (46)           Local[0]++;
[0E5D] (**)         }
[0E5D] (48)       } else if (Var[165] == 121) {
[0E67] (1A)         Var[415] = 25;
[0E6C] (48)         if (Var[239] == 250) {
[0E73] (46)           Local[0]++;
[0E76] (**)         }
[0E76] (48)       } else if (Var[165] == 122) {
[0E80] (1A)         Var[415] = 26;
[0E85] (48)         if (Var[239] == 260) {
[0E8C] (46)           Local[0]++;
[0E8F] (**)         }
[0E8F] (48)       } else if (Var[165] == 123) {
[0E99] (1A)         Var[415] = 27;
[0E9E] (48)         if (Var[239] == 270) {
[0EA5] (46)           Local[0]++;
[0EA8] (**)         }
[0EA8] (48)       } else if (Var[165] == 124) {
[0EB2] (18)         goto 117F;
[0EB5] (18)         /* goto 0EB8; */
[0EB8] (**)       }
[0EB8] (**)     }
[0EB8] (**)   }
[0EB8] (38)   if (Var[239] >= 300) {
[0EBF] (78)     if (Var[239] < 400) {
[0EC6] (1A)       Var[165] = 0;
[0ECB] (16)       Var[442] = getRandomNr(1);
[0ECF] (80)       breakHere();
[0ED0] (A8)       unless (Var[165]) goto 0ECB;
[0ED5] (48)       if (Var[165] == 120) {
[0EDC] (1A)         Var[415] = 33;
[0EE1] (48)         if (Var[239] == 330) {
[0EE8] (46)           Local[0]++;
[0EEB] (**)         }
[0EEB] (48)       } else if (Var[165] == 121) {
[0EF5] (1A)         Var[415] = 34;
[0EFA] (48)         if (Var[239] == 340) {
[0F01] (46)           Local[0]++;
[0F04] (**)         }
[0F04] (48)       } else if (Var[165] == 122) {
[0F0E] (1A)         Var[415] = 35;
[0F13] (48)         if (Var[239] == 350) {
[0F1A] (46)           Local[0]++;
[0F1D] (**)         }
[0F1D] (48)       } else if (Var[165] == 123) {
[0F27] (1A)         Var[415] = 36;
[0F2C] (48)         if (Var[239] == 360) {
[0F33] (46)           Local[0]++;
[0F36] (**)         }
[0F36] (48)       } else if (Var[165] == 124) {
[0F40] (18)         goto 117F;
[0F43] (18)         /* goto 0F46; */
[0F46] (**)       }
[0F46] (**)     }
[0F46] (**)   }
[0F46] (14)   print(11,[Text("In what direction?")]);
[0F5C] (AE)   WaitForMessage();
[0F5E] (0A)   startScript(68,[]);
[0F61] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[0F70] (27)   PutCodeInString(Var[443], "Southeast of Thera.");
[0F88] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[0F97] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0FA0] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0FA8] (5A)   Var[166] += 10;
[0FAD] (3A)   Var[442] -= 120;
[0FB2] (46)   Var[178]++;
[0FB5] (1A)   Bit[7 + Var[442]] = 1;
[0FBC] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[0FCB] (27)   PutCodeInString(Var[443], "Southwest of Thera.");
[0FE3] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[0FF2] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0FFB] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[1003] (5A)   Var[166] += 10;
[1008] (3A)   Var[442] -= 120;
[100D] (46)   Var[178]++;
[1010] (1A)   Bit[7 + Var[442]] = 1;
[1017] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[1026] (27)   PutCodeInString(Var[443], "South of Thera.");
[103A] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[1049] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[1052] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[105A] (5A)   Var[166] += 10;
[105F] (3A)   Var[442] -= 120;
[1064] (46)   Var[178]++;
[1067] (1A)   Bit[7 + Var[442]] = 1;
[106E] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[107D] (27)   PutCodeInString(Var[443], "Uh-oh, I'm not sure.");
[1096] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[10A5] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[10AE] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[10B6] (5A)   Var[166] += 10;
[10BB] (3A)   Var[442] -= 120;
[10C0] (46)   Var[178]++;
[10C3] (1A)   Bit[7 + Var[442]] = 1;
[10CA] (AC)   Exprmode Var[442] = (4 - 1);
[10D5] (1A)   Var[167 + Var[442]] = 1;
[10DC] (1A)   Var[165] = 0;
[10E1] (16)   Var[442] = getRandomNr(1);
[10E5] (80)   breakHere();
[10E6] (A8)   unless (Var[165]) goto 10E1;
[10EB] (48)   if (Var[165] == 120) {
[10F2] (1A)     Var[416] = 3;
[10F7] (27)     PutCodeInString(38, "southeast");
[1104] (48)     if (Var[240] == 3) {
[110B] (46)       Local[0]++;
[110E] (**)     }
[110E] (48)   } else if (Var[165] == 121) {
[1118] (1A)     Var[416] = 1;
[111D] (27)     PutCodeInString(38, "southwest");
[112A] (48)     if (Var[240] == 1) {
[1131] (46)       Local[0]++;
[1134] (**)     }
[1134] (48)   } else if (Var[165] == 122) {
[113E] (1A)     Var[416] = 2;
[1143] (27)     PutCodeInString(38, "south");
[114C] (48)     if (Var[240] == 2) {
[1153] (46)       Local[0]++;
[1156] (**)     }
[1156] (48)   } else if (Var[165] == 123) {
[1160] (18)     goto 117F;
[1163] (18)     /* goto 1166; */
[1166] (**)   }
[1166] (38)   if (Local[0] >= 2) {
[116D] (1A)     Bit[443] = 1;
[1172] (**)   }
[1172] (28)   if (!Bit[400 + 10]) {
[1179] (18)   } else {
[117C] (18)     goto 1769;
[117F] (14)     print(11,[Text("In that case, I can't help\x10you.")]);
[11A2] (1A)     Local[0] = 0;
[11A7] (18)     goto 1B72;
[11AA] (**)   }
[11AA] (1A)   Bit[400 + 10] = 1;
[11B1] (AE)   WaitForMessage();
[11B3] (14)   print(11,[Text("Do you know where that puts\x10us? " + startAnim(9) + " " + wait() + "Since you don't seem to know, I'll tell\x10you-- " + startAnim(7) + " " + wait() + "IN THE MIDDLE OF THE\x10OCEAN!")]);
[122E] (AE)   WaitForMessage();
[1230] (0A)   startScript(68,[]);
[1233] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[1242] (27)   PutCodeInString(Var[443], "I knew that. " + startAnim(8) + " ");
[1259] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[1268] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[1271] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[1279] (5A)   Var[166] += 10;
[127E] (3A)   Var[442] -= 120;
[1283] (46)   Var[178]++;
[1286] (1A)   Bit[7 + Var[442]] = 1;
[128D] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[129C] (27)   PutCodeInString(Var[443], "Are you sure there's not some little island out\x10there? " + startAnim(8) + " ");
[12DD] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[12EC] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[12F5] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[12FD] (5A)   Var[166] += 10;
[1302] (3A)   Var[442] -= 120;
[1307] (46)   Var[178]++;
[130A] (1A)   Bit[7 + Var[442]] = 1;
[1311] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[1320] (27)   PutCodeInString(Var[443], "Umm^do you have a diving suit or\x10something? " + startAnim(8) + " ");
[1356] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[1365] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[136E] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[1376] (5A)   Var[166] += 10;
[137B] (3A)   Var[442] -= 120;
[1380] (46)   Var[178]++;
[1383] (1A)   Bit[7 + Var[442]] = 1;
[138A] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[1399] (27)   PutCodeInString(Var[443], "Details, details^ " + startAnim(6) + " ");
[13B5] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[13C4] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[13CD] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[13D5] (5A)   Var[166] += 10;
[13DA] (3A)   Var[442] -= 120;
[13DF] (46)   Var[178]++;
[13E2] (1A)   Bit[7 + Var[442]] = 1;
[13E9] (AC)   Exprmode Var[442] = (4 - 1);
[13F4] (1A)   Var[167 + Var[442]] = 1;
[13FB] (1A)   Var[165] = 0;
[1400] (16)   Var[442] = getRandomNr(1);
[1404] (80)   breakHere();
[1405] (A8)   unless (Var[165]) goto 1400;
[140A] (48)   if (Var[165] == 120) {
[1411] (14)     print(11,[Text("Then you also know you're going to need a diving\x10suit. " + startAnim(9) + " ")]);
[1451] (48)   } else if (Var[165] == 121) {
[145B] (14)     print(11,[Text("I know an island when I see\x10one. " + startAnim(7) + " " + wait() + "You're going to need a diving suit like\x10mine^" + wait() + "^if you want to stroll around out\x10there^" + wait() + "^but I'm sure a smart fellow like you must have\x10one. " + startAnim(9) + " ")]);
[151A] (48)   } else if (Var[165] == 122) {
[1524] (14)     print(11,[Text("Yes, but there's a hole in\x10it. " + startAnim(7) + " ")]);
[154C] (18)     goto 1769;
[154F] (48)   } else if (Var[165] == 123) {
[1559] (14)     print(11,[Text("Oh." + wait() + "Then I guess you won't need my diving\x10suit. " + startAnim(9) + " ")]);
[1593] (18)     /* goto 1596; */
[1596] (**)   }
[1596] (AE)   WaitForMessage();
[1598] (0A)   startScript(68,[]);
[159B] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[15AA] (27)   PutCodeInString(Var[443], "Actually^could I borrow your diving\x10equipment? " + startAnim(6) + " ");
[15E3] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[15F2] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[15FB] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[1603] (5A)   Var[166] += 10;
[1608] (3A)   Var[442] -= 120;
[160D] (46)   Var[178]++;
[1610] (1A)   Bit[7 + Var[442]] = 1;
[1617] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[1626] (27)   PutCodeInString(Var[443], "If the water is as shallow as I think, I won't need\x10one. " + startAnim(9) + " ");
[1669] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[1678] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[1681] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[1689] (5A)   Var[166] += 10;
[168E] (3A)   Var[442] -= 120;
[1693] (46)   Var[178]++;
[1696] (1A)   Bit[7 + Var[442]] = 1;
[169D] (1A)   Var[165] = 0;
[16A2] (16)   Var[442] = getRandomNr(1);
[16A6] (80)   breakHere();
[16A7] (A8)   unless (Var[165]) goto 16A2;
[16AC] (48)   if (Var[165] == 120) {
[16B3] (14)     print(11,[Text("I guess so^" + wait() + "^but there's a hole in the\x10suit. " + startAnim(7) + " ")]);
[16EA] (48)   } else if (Var[165] == 121) {
[16F4] (14)     print(11,[Text("That's good^ " + startAnim(9) + " " + wait() + "^because there's a hole in my suit\x10anyway^ " + startAnim(7) + " " + wait() + "^and I haven't had time to fix\x10it. " + startAnim(8) + " ")]);
[1766] (18)     /* goto 1769; */
[1769] (**)   }
[1769] (AE)   WaitForMessage();
[176B] (14)   print(11,[Text("Are you sure you know what you're\x10doing? " + startAnim(9) + " ")]);
[179D] (AE)   WaitForMessage();
[179F] (0A)   startScript(68,[]);
[17A2] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[17B1] (27)   PutCodeInString(Var[443], "Yes, of course.");
[17C5] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[17D4] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[17DD] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[17E5] (5A)   Var[166] += 10;
[17EA] (3A)   Var[442] -= 120;
[17EF] (46)   Var[178]++;
[17F2] (1A)   Bit[7 + Var[442]] = 1;
[17F9] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[1808] (27)   PutCodeInString(Var[443], "I guess I better think it\x10over.");
[182C] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[183B] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[1844] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[184C] (5A)   Var[166] += 10;
[1851] (3A)   Var[442] -= 120;
[1856] (46)   Var[178]++;
[1859] (1A)   Bit[7 + Var[442]] = 1;
[1860] (1A)   Var[165] = 0;
[1865] (16)   Var[442] = getRandomNr(1);
[1869] (80)   breakHere();
[186A] (A8)   unless (Var[165]) goto 1865;
[186F] (48)   if (Var[165] == 120) {
[1876] (1A)     Local[0] = 1;
[187B] (48)   } else if (Var[165] == 121) {
[1885] (14)     print(11,[Text("I'd say\x10so.")]);
[1894] (1A)     Local[0] = 0;
[1899] (18)     /* goto 189C; */
[189C] (**)   }
[189C] (18) } else {
[189F] (AE)   WaitForMessage();
[18A1] (0A)   startScript(68,[]);
[18A4] (28)   if (!Bit[400 + 6]) {
[18AB] (AC)     Exprmode Var[443] = ((41 + 1) - 1);
[18BA] (27)     PutCodeInString(Var[443], "Sorry, Captain.");
[18CE] (AC)     Exprmode Var[442] = ((120 + 1) - 1);
[18DD] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[18E6] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[18EE] (5A)     Var[166] += 10;
[18F3] (3A)     Var[442] -= 120;
[18F8] (46)     Var[178]++;
[18FB] (1A)     Bit[7 + Var[442]] = 1;
[1902] (**)   }
[1902] (28)   if (!Bit[400 + 7]) {
[1909] (AC)     Exprmode Var[443] = ((41 + 2) - 1);
[1918] (27)     PutCodeInString(Var[443], "Sorry, old girl.");
[192D] (AC)     Exprmode Var[442] = ((120 + 2) - 1);
[193C] (FA)     VerbOps(Var[442],[SetXY(2,Var[166])]);
[1945] (FA)     VerbOps(Var[442],[On(),Key(Var[178]);]);
[194D] (5A)     Var[166] += 10;
[1952] (3A)     Var[442] -= 120;
[1957] (46)     Var[178]++;
[195A] (1A)     Bit[7 + Var[442]] = 1;
[1961] (**)   }
[1961] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[1970] (27)   PutCodeInString(Var[443], "Sorry, Bessie.");
[1983] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[1992] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[199B] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[19A3] (5A)   Var[166] += 10;
[19A8] (3A)   Var[442] -= 120;
[19AD] (46)   Var[178]++;
[19B0] (1A)   Bit[7 + Var[442]] = 1;
[19B7] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[19C6] (27)   PutCodeInString(Var[443], "Sorry, I can't do it.  It's too\x10ridiculous. " + startAnim(9) + " ");
[19FC] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[1A0B] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[1A14] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[1A1C] (5A)   Var[166] += 10;
[1A21] (3A)   Var[442] -= 120;
[1A26] (46)   Var[178]++;
[1A29] (1A)   Bit[7 + Var[442]] = 1;
[1A30] (AC)   Exprmode Var[442] = (4 - 1);
[1A3B] (1A)   Var[167 + Var[442]] = 1;
[1A42] (1A)   Var[165] = 0;
[1A47] (16)   Var[442] = getRandomNr(1);
[1A4B] (80)   breakHere();
[1A4C] (A8)   unless (Var[165]) goto 1A47;
[1A51] (48)   if (Var[165] == 120) {
[1A58] (1A)     Bit[400 + 6] = 1;
[1A5F] (14)     print(11,[Text("Not to me, you\x10idiot!" + wait() + "^to Bessie\x10here! " + startAnim(7) + " ")]);
[1A90] (48)   } else if (Var[165] == 121) {
[1A9A] (1A)     Bit[400 + 7] = 1;
[1AA1] (14)     print(11,[Text("Old!?" + wait() + "You call her OLD!?" + wait() + "Why, she's younger than you\x10are! " + startAnim(9) + " ")]);
[1AE6] (48)   } else if (Var[165] == 122) {
[1AF0] (14)     print(11,[Text("That's better." + wait() + "Now what were we talking\x10about?  I\x10forget. " + startAnim(8) + " ")]);
[1B34] (1A)     Bit[400 + 5] = 0;
[1B3B] (AE)     WaitForMessage();
[1B3D] (18)     goto 01BB;
[1B40] (48)   } else if (Var[165] == 123) {
[1B4A] (14)     print(11,[Text("Is that so!?")]);
[1B5A] (18)     /* goto 1B5D; */
[1B5D] (**)   }
[1B5D] (AE)   WaitForMessage();
[1B5F] (14)   print(11,[Text("Now goodbye!")]);
[1B6F] (18)   /* goto 1B72; */
[1B72] (**) }
[1B72] (AE) WaitForMessage();
[1B74] (1A) Bit[400 + 3] = 1;
[1B7B] (0A) startScript(83,[]);
[1B7E] (40) cutscene([1]);
[1B83] (28) if (!Local[0]) {
[1B88] (11)   animateCostume(11,244);
[1B8B] (80)   breakHere();
[1B8C] (80)   breakHere();
[1B8D] (2A)   startScript(209,[],F);
[1B90] (18) } else {
[1B93] (28)   if (!Bit[400 + 9]) {
[1B9A] (14)     print(11,[Text("Alright, Mr. All-American explorer\x10type^ " + startAnim(7) + " " + wait() + "^let's find Atlantis.")]);
[1BE3] (AE)     WaitForMessage();
[1BE5] (14)     print(11,[Text("Just remember^" + wait() + "^if it sank like they say it did, I claim the salvage\x10rights!")]);
[1C36] (18)   } else {
[1C39] (14)     print(11,[Text("I guess we can try again^ " + startAnim(8) + " " + wait() + "^if we get lucky I'll be\x10rich! " + startAnim(7) + " ")]);
[1C82] (**)   }
[1C82] (AE)   WaitForMessage();
[1C84] (**) }
[1C84] (C0) endCutscene();
[1C85] (28) if (!Local[0]) {
[1C8A] (18) } else {
[1C8D] (1A)   Var[316] = 4;
[1C92] (1A)   Var[315] = 49;
[1C97] (7C)   VAR_RESULT = isSoundRunning(82);
[1C9B] (A8)   if (VAR_RESULT) {
[1CA0] (4C)     soundKludge([262,82,0]);
[1CAB] (4C)     soundKludge([257,82,0]);
[1CB6] (4C)     soundKludge([269,82,50,180]);
[1CC4] (4C)     soundKludge([257,80,0]);
[1CCF] (4C)     soundKludge([269,80,0,60]);
[1CDD] (4C)     soundKludge([-1]);
[1CE2] (18)   } else {
[1CE5] (4C)     soundKludge([262,80,0]);
[1CF0] (4C)     soundKludge([257,80,0]);
[1CFB] (4C)     soundKludge([269,80,50,180]);
[1D09] (4C)     soundKludge([-1]);
[1D0E] (**)   }
[1D0E] (72)   loadRoom(75);
[1D10] (**) }
[1D10] (A0) stopObjectCode();
END

Script# 209
[0000] (16) Local[0] = getRandomNr(3);
[0004] (48) if (Local[0] == 0) {
[000B] (1E)   walkActorTo(11,365,115);
[0011] (AE)   WaitForActor(11);
[0014] (48) } else if (Local[0] == 1) {
[001E] (1E)   walkActorTo(11,334,115);
[0024] (AE)   WaitForActor(11);
[0027] (48) } else if (Local[0] == 2) {
[0031] (1E)   walkActorTo(11,356,95);
[0037] (AE)   WaitForActor(11);
[003A] (48) } else if (Local[0] == 3) {
[0044] (1E)   walkActorTo(11,403,97);
[004A] (AE)   WaitForActor(11);
[004D] (11)   animateCostume(11,245);
[0050] (80)   breakHere();
[0051] (18)   /* goto 0054; */
[0054] (**) }
[0054] (16) Var[442] = getRandomNr(1);
[0058] (28) if (!Var[442]) {
[005D] (11)   animateCostume(11,245);
[0060] (18) } else {
[0063] (11)   animateCostume(11,244);
[0066] (**) }
[0066] (AC) Exprmode Local[1] = (20 - 10);
[0071] (AC) Exprmode Local[1] = (<VAR_RESULT = getRandomNr(Local[1])> + 10);
[007F] (1A) Local[2] = 1;
[0084] (80) breakHere();
[0085] (46) Local[2]++;
[0088] (C4) unless (Local[2] > Local[1]) goto 0084;
[008F] (18) goto 0000;
[0092] (A0) stopObjectCode();
END

Script# 210
[0000] (13) ActorOps(9,[Init(),Costume(39),InitAnimNr(10),WalkAnimNr(10),StandAnimNr(10),WalkSpeed(4,2),IgnoreBoxes(),SetZClip(2)]);
[0012] (2D) putActorInRoom(9,49);
[0015] (01) putActor(9,510,95);
[001B] (1A) Local[1] = 255;
[0020] (1A) Local[0] = 510;
[0025] (1A) Local[2] = 95;
[002A] (1A) Local[3] = 0;
[002F] (61) putActor(9,Local[0],Local[2]);
[0035] (13) ActorOps(9,[Scale(Local[1],Local[1])]);
[003D] (11) animateCostume(9,249);
[0040] (78) if (Local[3] < 5) {
[0047] (3A)   Local[0] -= 10;
[004C] (3A)   Local[1] -= 8;
[0051] (3A)   Local[2] -= 3;
[0056] (78) } else if (Local[3] < 10) {
[0060] (3A)   Local[0] -= 8;
[0065] (3A)   Local[1] -= 7;
[006A] (3A)   Local[2] -= 2;
[006F] (78) } else if (Local[3] < 15) {
[0079] (3A)   Local[0] -= 6;
[007E] (3A)   Local[1] -= 6;
[0083] (3A)   Local[2] -= 2;
[0088] (78) } else if (Local[3] < 20) {
[0092] (3A)   Local[0] -= 4;
[0097] (3A)   Local[1] -= 5;
[009C] (3A)   Local[2] -= 1;
[00A1] (78) } else if (Local[3] < 25) {
[00AB] (3A)   Local[0] -= 3;
[00B0] (3A)   Local[1] -= 4;
[00B5] (3A)   Local[2] -= 1;
[00BA] (18)   goto 00DF;
[00BD] (18) } else {
[00C0] (3A)   Local[0] -= 2;
[00C5] (3A)   Local[1] -= 3;
[00CA] (0A)   startScript(77,[Local[3],2]);
[00D3] (48)   if (Var[444] == 0) {
[00DA] (3A)     Local[2] -= 1;
[00DF] (**)   }
[00DF] (**) }
[00DF] (46) Local[3]++;
[00E2] (80) breakHere();
[00E3] (78) unless (Local[1] < 0) goto 002F;
[00EA] (2D) putActorInRoom(9,0);
[00ED] (13) ActorOps(9,[Init(),Name(" ")]);
[00F4] (5D) setClass(9,[0]);
[00FB] (A0) stopObjectCode();
END

Script# 211 // Go to Thera Landscape
[0000] (62) stopScript(215);
[0002] (62) stopScript(86);
[0004] (11) animateCostume(2,255);
[0007] (11) animateCostume(2,1);
[000A] (11) animateCostume(2,248);
[000D] (1A) Local[0] = 1;
[0012] (48) if (Var[238] == 1) {
[0019] (40)   cutscene([2]);
[001E] (AE)   WaitForActor(2);
[0021] (48)   if (Bit[400 + 2] == 0) {
[002A] (14)     print(2,[Text("HEY!")]);
[0032] (AE)     WaitForMessage();
[0034] (09)     faceActor(2,1);
[0038] (80)     breakHere();
[0039] (80)     breakHere();
[003A] (09)     faceActor(1,2);
[003E] (80)     breakHere();
[003F] (80)     breakHere();
[0040] (14)     print(2,[Text("Where are you\x10going?")]);
[0058] (AE)     WaitForMessage();
[005A] (18)   } else {
[005D] (1A)     Local[0] = 0;
[0062] (**)   }
[0062] (C0)   endCutscene();
[0063] (48)   if (Local[0] == 0) {
[006A] (18)     goto 0263;
[006D] (**)   }
[006D] (0A)   startScript(82,[]);
[0070] (0A)   startScript(68,[]);
[0073] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[0082] (27)   PutCodeInString(Var[443], "I'm off to see the\x10sights." + startAnim(8));
[00A5] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[00B4] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[00BD] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[00C5] (5A)   Var[166] += 10;
[00CA] (3A)   Var[442] -= 120;
[00CF] (46)   Var[178]++;
[00D2] (1A)   Bit[7 + Var[442]] = 1;
[00D9] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[00E8] (27)   PutCodeInString(Var[443], "I want to see if our friend Kerner has been\x10here." + startAnim(6));
[0122] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[0131] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[013A] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0142] (5A)   Var[166] += 10;
[0147] (3A)   Var[442] -= 120;
[014C] (46)   Var[178]++;
[014F] (1A)   Bit[7 + Var[442]] = 1;
[0156] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[0165] (27)   PutCodeInString(Var[443], "Nowhere.  I'm just checking the top of this\x10hill.");
[019B] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[01AA] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[01B3] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[01BB] (5A)   Var[166] += 10;
[01C0] (3A)   Var[442] -= 120;
[01C5] (46)   Var[178]++;
[01C8] (1A)   Bit[7 + Var[442]] = 1;
[01CF] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[01DE] (27)   PutCodeInString(Var[443], "Trust me. " + startAnim(7) + " ");
[01F2] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[0201] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[020A] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0212] (5A)   Var[166] += 10;
[0217] (3A)   Var[442] -= 120;
[021C] (46)   Var[178]++;
[021F] (1A)   Bit[7 + Var[442]] = 1;
[0226] (AC)   Exprmode Var[442] = (4 - 1);
[0231] (1A)   Var[167 + Var[442]] = 1;
[0238] (1A)   Var[165] = 0;
[023D] (16)   Var[442] = getRandomNr(1);
[0241] (80)   breakHere();
[0242] (A8)   unless (Var[165]) goto 023D;
[0247] (48)   if (Var[165] == 122) {
[024E] (1A)     Local[0] = 1;
[0253] (18)   } else {
[0256] (1A)     Local[0] = 0;
[025B] (**)   }
[025B] (18) } else {
[025E] (1A)   Local[0] = 0;
[0263] (**) }
[0263] (48) if (Local[0] == 0) {
[026A] (62)   stopScript(215);
[026C] (62)   stopScript(86);
[026E] (B2)   setCameraAt(VAR_CAMERA_POS_X);
[0271] (28)   if (!Bit[400 + 2]) {
[0278] (11)     animateCostume(2,1);
[027B] (14)     print(2,[Text("I'll wait here." + wait() + "*sigh*")]);
[0296] (AE)     WaitForMessage();
[0298] (0A)     startScript(83,[]);
[029B] (**)   }
[029B] (40)   cutscene([2]);
[02A0] (9E)   walkActorTo(VAR_EGO,28,38);
[02A7] (AE)   WaitForActor(VAR_EGO);
[02AB] (C0)   endCutscene();
[02AC] (7C)   VAR_RESULT = isSoundRunning(82);
[02B0] (A8)   if (VAR_RESULT) {
[02B5] (4C)     soundKludge([262,82,0]);
[02C0] (4C)     soundKludge([257,82,0]);
[02CB] (4C)     soundKludge([269,82,50,120]);
[02D9] (4C)     soundKludge([-1]);
[02DE] (**)   }
[02DE] (24)   loadRoomWithEgo(851,63,-1,-1);
[02E6] (62)   stopScript(0);
[02E8] (48) } else if (Local[0] == 1) {
[02F2] (0A)   startScript(83,[]);
[02F5] (18)   /* goto 02F8; */
[02F8] (**) }
[02F8] (A0) stopObjectCode();
END

Script# 212 // After Failed Salvage
[0000] (40) cutscene([2]);
[0005] (58) beginOverride();
[0007] (18) goto 0139;
[000A] (89) faceActor(VAR_EGO,11);
[000F] (80) breakHere();
[0010] (80) breakHere();
[0011] (49) faceActor(11,VAR_EGO);
[0015] (80) breakHere();
[0016] (80) breakHere();
[0017] (28) if (!Bit[400 + 9]) {
[001E] (14)   print(11,[Text("I don't know why I let you hook me into that\x10trip. " + startAnim(7) + " ")]);
[005A] (AE)   WaitForMessage();
[005C] (14)   print(1,[Text("It's the lure of the\x10unknown^" + wait() + "^take my word for\x10it.")]);
[0094] (18) } else {
[0097] (14)   print(11,[Text("I don't know why I let you hook me\x10again. " + startAnim(9) + " ")]);
[00CA] (AE)   WaitForMessage();
[00CC] (14)   print(1,[Text("That's easy^" + wait() + "Like me, you're\x10obsessed.")]);
[00F7] (**) }
[00F7] (AE) WaitForMessage();
[00F9] (1E) walkActorTo(1,407,138);
[00FF] (80) breakHere();
[0100] (80) breakHere();
[0101] (80) breakHere();
[0102] (80) breakHere();
[0103] (80) breakHere();
[0104] (80) breakHere();
[0105] (1E) walkActorTo(2,360,138);
[010B] (AE) WaitForActor(1);
[010E] (AE) WaitForActor(2);
[0111] (09) faceActor(1,2);
[0115] (80) breakHere();
[0116] (80) breakHere();
[0117] (09) faceActor(2,1);
[011B] (80) breakHere();
[011C] (80) breakHere();
[011D] (14) print(1,[Text("Here we are again. " + startAnim(6) + " ")]);
[0139] (A8) if (VAR_OVERRIDE) {
[013E] (01)   putActor(1,407,138);
[0144] (01)   putActor(2,360,138);
[014A] (09)   faceActor(1,2);
[014E] (80)   breakHere();
[014F] (80)   breakHere();
[0150] (09)   faceActor(2,1);
[0154] (80)   breakHere();
[0155] (80)   breakHere();
[0156] (14)   print(1,[Text("Here we are again. " + startAnim(6) + " ")]);
[0172] (**) }
[0172] (1A) Bit[400 + 9] = 1;
[0179] (2A) startScript(209,[],F);
[017C] (0A) startScript(215,[]);
[017F] (C0) endCutscene();
[0180] (A0) stopObjectCode();
END

Script# 213 // Nazis Go To U-Boat
[0000] (32) setCameraAt(362);
[0003] (40) cutscene([3]);
[0008] (30) setBoxFlags(20,128);
[000C] (03) VAR_RESULT = getActorRoom(10);
[0010] (C8) if (VAR_RESULT == VAR_ROOM) {
[0017] (2D)   putActorInRoom(10,0);
[001A] (**) }
[001A] (07) setState(597,1);
[001E] (13) ActorOps(8,[Init(),Costume(111),IgnoreBoxes(),SetZClip(3),WalkSpeed(3,2),Elevation(-50)]);
[002D] (2D) putActorInRoom(8,49);
[0030] (01) putActor(8,429,58);
[0036] (13) ActorOps(12,[Costume(36),TalkColor(11),FollowBoxes()]);
[003E] (2D) putActorInRoom(12,49);
[0041] (01) putActor(12,180,135);
[0047] (13) ActorOps(4,[Costume(20)]);
[004C] (2D) putActorInRoom(4,49);
[004F] (01) putActor(4,180,135);
[0055] (2D) putActorInRoom(2,49);
[0058] (01) putActor(2,180,135);
[005E] (4C) soundKludge([269,80,0,15]);
[006C] (4C) soundKludge([272]);
[0071] (1C) startSound(155);
[0073] (80) breakHere();
[0074] (58) beginOverride();
[0076] (18) goto 028B;
[0079] (1E) walkActorTo(12,425,104);
[007F] (2E) delay(60);
[0083] (1E) walkActorTo(2,425,104);
[0089] (AE) WaitForActor(12);
[008C] (14) print(2,[Text("Oh no you don't!" + wait() + "I've had enough!")]);
[00B2] (80) breakHere();
[00B3] (80) breakHere();
[00B4] (80) breakHere();
[00B5] (80) breakHere();
[00B6] (1E) walkActorTo(2,353,137);
[00BC] (80) breakHere();
[00BD] (80) breakHere();
[00BE] (80) breakHere();
[00BF] (80) breakHere();
[00C0] (1E) walkActorTo(4,297,297);
[00C6] (11) animateCostume(12,244);
[00C9] (80) breakHere();
[00CA] (AE) WaitForActor(4);
[00CD] (AE) WaitForActor(2);
[00D0] (09) faceActor(4,2);
[00D4] (80) breakHere();
[00D5] (80) breakHere();
[00D6] (09) faceActor(2,4);
[00DA] (80) breakHere();
[00DB] (80) breakHere();
[00DC] (11) animateCostume(4,6);
[00DF] (AE) WaitForMessage();
[00E1] (80) breakHere();
[00E2] (80) breakHere();
[00E3] (14) print(4,[Text("Please, Madame^" + wait() + "^let's try to be civilized about this, shall\x10we? " + startAnim(13) + " ")]);
[012E] (AE) WaitForMessage();
[0130] (14) print(12,[Text("Kerner, don't shoot\x10her!" + startAnim(22))]);
[0150] (80) breakHere();
[0151] (80) breakHere();
[0152] (80) breakHere();
[0153] (11) animateCostume(4,14);
[0156] (80) breakHere();
[0157] (80) breakHere();
[0158] (80) breakHere();
[0159] (80) breakHere();
[015A] (80) breakHere();
[015B] (80) breakHere();
[015C] (AE) WaitForMessage();
[015E] (11) animateCostume(12,1);
[0161] (14) print(12,[Text("We may need\x10her^ " + startAnim(13) + " ")]);
[017B] (11) animateCostume(4,17);
[017E] (AE) WaitForMessage();
[0180] (14) print(12,[Text("^in the Lost\x10City.")]);
[0196] (AE) WaitForMessage();
[0198] (11) animateCostume(4,7);
[019B] (80) breakHere();
[019C] (14) print(4,[Text("Don't tempt me. " + startAnim(8) + " ")]);
[01B5] (AE) WaitForMessage();
[01B7] (11) animateCostume(2,17);
[01BA] (80) breakHere();
[01BB] (80) breakHere();
[01BC] (80) breakHere();
[01BD] (80) breakHere();
[01BE] (80) breakHere();
[01BF] (80) breakHere();
[01C0] (80) breakHere();
[01C1] (1E) walkActorTo(2,425,104);
[01C7] (80) breakHere();
[01C8] (80) breakHere();
[01C9] (11) animateCostume(4,12);
[01CC] (80) breakHere();
[01CD] (80) breakHere();
[01CE] (80) breakHere();
[01CF] (80) breakHere();
[01D0] (13) ActorOps(12,[IgnoreBoxes()]);
[01D4] (1E) walkActorTo(12,425,98);
[01DA] (AE) WaitForActor(12);
[01DD] (13) ActorOps(12,[SetZClip(3)]);
[01E2] (13) ActorOps(12,[Elevation(-5)]);
[01E8] (80) breakHere();
[01E9] (13) ActorOps(12,[Elevation(-10)]);
[01EF] (80) breakHere();
[01F0] (11) animateCostume(8,7);
[01F3] (2D) putActorInRoom(12,0);
[01F6] (1E) walkActorTo(4,425,104);
[01FC] (AE) WaitForActor(2);
[01FF] (13) ActorOps(2,[IgnoreBoxes()]);
[0203] (1E) walkActorTo(2,435,98);
[0209] (AE) WaitForActor(2);
[020C] (13) ActorOps(2,[SetZClip(3)]);
[0211] (13) ActorOps(2,[Elevation(-5)]);
[0217] (80) breakHere();
[0218] (13) ActorOps(2,[Elevation(-10)]);
[021E] (80) breakHere();
[021F] (2D) putActorInRoom(2,0);
[0222] (11) animateCostume(8,6);
[0225] (AE) WaitForActor(4);
[0228] (13) ActorOps(4,[IgnoreBoxes()]);
[022C] (1E) walkActorTo(4,430,98);
[0232] (AE) WaitForActor(4);
[0235] (13) ActorOps(4,[SetZClip(3)]);
[023A] (13) ActorOps(4,[Elevation(-5)]);
[0240] (80) breakHere();
[0241] (13) ActorOps(4,[Elevation(-10)]);
[0247] (80) breakHere();
[0248] (2D) putActorInRoom(4,0);
[024B] (11) animateCostume(8,8);
[024E] (30) setBoxFlags(20,0);
[0252] (13) ActorOps(8,[FollowBoxes(),Elevation(0)]);
[0259] (01) putActor(8,429,108);
[025F] (43) Var[445] = getActorX(8);
[0264] (23) Var[446] = getActorY(8);
[0269] (61) putActor(8,Var[445],Var[446]);
[026F] (36) walkActorToObject(8,597);
[0273] (AE) WaitForActor(8);
[0276] (2D) putActorInRoom(8,0);
[0279] (13) ActorOps(8,[Init(),Name(" ")]);
[0280] (5D) setClass(8,[0]);
[0287] (07) setState(597,0);
[028B] (A8) if (VAR_OVERRIDE) {
[0290] (3C)   stopSound(49);
[0292] (2D)   putActorInRoom(12,0);
[0295] (2D)   putActorInRoom(4,0);
[0298] (2D)   putActorInRoom(8,0);
[029B] (2D)   putActorInRoom(2,0);
[029E] (07)   setState(597,0);
[02A2] (**) }
[02A2] (C0) endCutscene();
[02A3] (1A) Bit[400 + 6] = 1;
[02AA] (1A) Bit[417 + 1] = 0;
[02B1] (24) loadRoomWithEgo(942,69,-1,-1);
[02B9] (A0) stopObjectCode();
END

Script# 214
[0000] (AC) Exprmode Var[442] = (320 - ((VAR_CAMERA_POS_X - 160) / 2));
[0013] (2D) putActorInRoom(7,49);
[0016] (41) putActor(7,Var[442],143);
[001C] (A0) stopObjectCode();
END

Script# 215
[0000] (34) VAR_RESULT = getDist(1,2);
[0007] (44) if (VAR_RESULT > 100) {
[000E] (62)   stopScript(86);
[0010] (43)   Var[351] = getActorX(1);
[0015] (44)   if (Var[351] > 105) {
[001C] (78)     if (Var[351] < 330) {
[0023] (4D)       walkActorToActor(2,VAR_EGO,50);
[0028] (18)     } else {
[002B] (1E)       walkActorTo(2,417,136);
[0031] (**)     }
[0031] (18)   } else {
[0034] (1E)     walkActorTo(2,120,130);
[003A] (**)   }
[003A] (AE)   WaitForActor(2);
[003D] (0A)   startScript(86,[1,2]);
[0046] (**) }
[0046] (80) breakHere();
[0047] (18) goto 0000;
[004A] (A0) stopObjectCode();
END

Script# 216
[0000] (7B) Var[442] = getActorWalkBox(1);
[0004] (48) if (Var[442] == 7) {
[000B] (30)   setBoxFlags(21,0);
[000F] (48) } else if (Var[442] == 21) {
[0019] (30)   setBoxFlags(21,0);
[001D] (18) } else {
[0020] (30)   setBoxFlags(21,128);
[0024] (**) }
[0024] (80) breakHere();
[0025] (18) goto 0000;
[0028] (A0) stopObjectCode();
END

Script# 217 // Offer Something to Port Authority
[0000] (11) animateCostume(10,255);
[0003] (62) stopScript(201);
[0005] (09) faceActor(10,1);
[0009] (48) if (Local[2] == 10) {
[0010] (40)   cutscene([2]);
[0015] (09)   faceActor(10,1);
[0019] (80)   breakHere();
[001A] (80)   breakHere();
[001B] (C0)   endCutscene();
[001C] (48)   if (Local[0] == 990) {
[0023] (42)     chainScript(205,[990]);
[0029] (48)   } else if (Local[0] == 944) {
[0033] (42)     chainScript(205,[944]);
[0039] (18)   } else {
[003C] (40)     cutscene([2]);
[0041] (14)     print(1,[Text("Excuse me^")]);
[004F] (80)     breakHere();
[0050] (80)     breakHere();
[0051] (80)     breakHere();
[0052] (80)     breakHere();
[0053] (C0)     endCutscene();
[0054] (0A)     startScript(136,[Local[1],Local[2],30,1]);
[0063] (80)     breakHere();
[0064] (68)     VAR_RESULT = isScriptRunning(136);
[0068] (28)     unless (!VAR_RESULT) goto 0063;
[006D] (48)     if (Bit[22] == 1) {
[0074] (62)       stopScript(0);
[0076] (**)     }
[0076] (40)     cutscene([2]);
[007B] (AE)     WaitForMessage();
[007D] (11)     animateCostume(1,10);
[0080] (80)     breakHere();
[0081] (80)     breakHere();
[0082] (11)     animateCostume(1,1);
[0085] (14)     print(10,[Text("No thanks.  I don't want\x10it.")]);
[00A5] (AE)     WaitForMessage();
[00A7] (C0)     endCutscene();
[00A8] (**)   }
[00A8] (2A)   startScript(201,[],F);
[00AB] (18)   /* goto 00AE; */
[00AE] (**) }
[00AE] (A0) stopObjectCode();
END

// Object 590: boat-at-dock
Events:
END

// Object 591: Very Large Basket
Events:
   8 - 001E
   9 - 0025
   B - 0088
  5A - 00B6
  5B - 0018
[0018] (1A) Var[161] = 1368;
[001D] (00) stopObjectCode();
[001E] (79) doSentence(8,Local[0],VAR_ME);
[0024] (00) stopObjectCode();
[0025] (48) if (Bit[400 + 6] == 0) {
[002E] (14)   print(1,[Text("This is a big\x10basket.")]);
[0047] (18) } else {
[004A] (1A)   Bit[400 + 9] = 1;
[0051] (D8)   printEgo([Text("This is a big\x10basket." + wait() + "Big enough to hold a\x10person.")]);
[0087] (**) }
[0087] (00) stopObjectCode();
[0088] (90) VAR_RESULT = getObjectOwner(VAR_ME);
[008D] (88) if (VAR_RESULT != VAR_EGO) {
[0094] (9D)   if (classOfIs(VAR_ME,[6])) {
[009D] (A5)     pickupObject(VAR_ME,0);
[00A1] (0A)     startScript(144,[97,4]);
[00AA] (0A)     startScript(10,[]);
[00AD] (18)   } else {
[00B0] (19)     doSentence(STOP);
[00B2] (0A)     startScript(202,[]);
[00B5] (**)   }
[00B5] (**) }
[00B5] (00) stopObjectCode();
[00B6] (1A) Var[123] = 9;
[00BB] (00) stopObjectCode();
END

// Object 592: Salvage Boat
Events:
   9 - 010D
   A - 0012
  5A - 014C
[0012] (40) cutscene([2]);
[0017] (11) animateCostume(11,255);
[001A] (11) animateCostume(11,3);
[001D] (89) faceActor(VAR_EGO,11);
[0022] (80) breakHere();
[0023] (80) breakHere();
[0024] (49) faceActor(11,VAR_EGO);
[0028] (80) breakHere();
[0029] (80) breakHere();
[002A] (16) Var[442] = getRandomNr(4);
[002E] (48) if (Var[442] == 0) {
[0035] (14)   print(11,[Text("A beauty of a\x10boat. " + startAnim(7) + " ")]);
[0052] (48) } else if (Var[442] == 1) {
[005C] (14)   print(11,[Text("It's clean as a\x10whistle! " + startAnim(7) + " ")]);
[007E] (48) } else if (Var[442] == 2) {
[0088] (14)   print(11,[Text("The pride of the fleet in her\x10time. " + startAnim(7) + " ")]);
[00B5] (48) } else if (Var[442] == 3) {
[00BF] (14)   print(11,[Text("They don't make them like they\x10used\x10to. " + startAnim(7) + " ")]);
[00F0] (18) } else {
[00F3] (14)   print(11,[Text("Nice boat,\x10eh? " + startAnim(7) + " ")]);
[010B] (**) }
[010B] (C0) endCutscene();
[010C] (00) stopObjectCode();
[010D] (28) if (!Bit[400 + 4]) {
[0114] (D8)   printEgo([Text("What a wreck.")]);
[0124] (18) } else {
[0127] (D8)   printEgo([Text("I still think it's a\x10wreck. " + startAnim(13) + " ")]);
[014B] (**) }
[014B] (00) stopObjectCode();
[014C] (1A) Var[123] = 9;
[0151] (00) stopObjectCode();
END

// Object 593: Large Rubber Balloon
Events:
   8 - 0018
   9 - 00A1
   B - 0084
  5A - 0116
  5B - 00FF
[0018] (48) if (Local[0] == 1014) {
[001F] (D8)   printEgo([Text("Now I should be able to inflate the\x10balloon.")]);
[004E] (5D)   setClass(593,[147]);
[0055] (54)   setObjectName(593,"deflated balloon with hose");
[0073] (29)   setOwnerOf(1014,0);
[0077] (0A)   startScript(10,[]);
[007A] (18) } else {
[007D] (79)   doSentence(8,Local[0],VAR_ME);
[0083] (**) }
[0083] (00) stopObjectCode();
[0084] (90) VAR_RESULT = getObjectOwner(VAR_ME);
[0089] (88) if (VAR_RESULT != VAR_EGO) {
[0090] (0A)   startScript(144,[99,4]);
[0099] (A5)   pickupObject(VAR_ME,0);
[009D] (0A)   startScript(10,[]);
[00A0] (**) }
[00A0] (00) stopObjectCode();
[00A1] (1D) if (classOfIs(593,[19])) {
[00AA] (D8)   printEgo([Text("It's the gas-bag for a balloon.")]);
[00CC] (18) } else {
[00CF] (D8)   printEgo([Text("It's a balloon bladder with a hose\x10attached.")]);
[00FE] (**) }
[00FE] (00) stopObjectCode();
[00FF] (1D) if (classOfIs(593,[147])) {
[0108] (1A)   Var[161] = 1376;
[010D] (18) } else {
[0110] (1A)   Var[161] = 1335;
[0115] (**) }
[0115] (00) stopObjectCode();
[0116] (1A) Var[123] = 9;
[011B] (00) stopObjectCode();
END

// Object 594: Crate
Events:
   3 - 0018
   4 - 003E
   9 - 00C4
   B - 00A9
  5A - 0106
[0018] (9D) if (classOfIs(VAR_ME,[134])) {
[0021] (19)   doSentence(STOP);
[0023] (48)   if (Var[238] == 2) {
[002A] (0A)     startScript(203,[]);
[002D] (18)   } else {
[0030] (0A)     startScript(3,[3]);
[0036] (**)   }
[0036] (18) } else {
[0039] (87)   setState(VAR_ME,1);
[003D] (**) }
[003D] (00) stopObjectCode();
[003E] (9D) if (classOfIs(VAR_ME,[134])) {
[0047] (19)   doSentence(STOP);
[0049] (48)   if (Var[238] == 2) {
[0050] (0A)     startScript(203,[]);
[0053] (18)   } else {
[0056] (0A)     startScript(3,[4]);
[005C] (**)   }
[005C] (18) } else {
[005F] (0F)   VAR_RESULT = getObjectState(594);
[0064] (48)   if (VAR_RESULT == 1) {
[006B] (40)     cutscene([2]);
[0070] (87)     setState(VAR_ME,0);
[0074] (2E)     delay(60);
[0078] (87)     setState(VAR_ME,1);
[007C] (80)     breakHere();
[007D] (D8)     printEgo([Text("It won't stay\x10closed.")]);
[0095] (C0)     endCutscene();
[0096] (18)   } else {
[0099] (D8)     printEgo([Text("It's closed.")]);
[00A8] (**)   }
[00A8] (**) }
[00A8] (00) stopObjectCode();
[00A9] (D8) printEgo([Text("The box is too\x10heavy.")]);
[00C1] (19) doSentence(STOP);
[00C3] (00) stopObjectCode();
[00C4] (1A) Bit[400 + 0] = 1;
[00CB] (D8) printEgo([Text("It reads:" + newline() + "`One Standard Observation" + newline() + "Balloon\x10Bladder.`")]);
[0105] (00) stopObjectCode();
[0106] (1A) Var[123] = 9;
[010B] (00) stopObjectCode();
END

// Object 595: Fish Net
Events:
   8 - 0084
   9 - 0260
   B - 0018
  5A - 03C8
  5B - 038F
[0018] (90) VAR_RESULT = getObjectOwner(VAR_ME);
[001D] (88) if (VAR_RESULT != VAR_EGO) {
[0024] (40)   cutscene([2]);
[0029] (0A)   startScript(144,[98,1]);
[0032] (9E)   walkActorTo(VAR_EGO,245,123);
[0039] (91)   animateCostume(VAR_EGO,11);
[003D] (80)   breakHere();
[003E] (80)   breakHere();
[003F] (80)   breakHere();
[0040] (87)   setState(VAR_ME,1);
[0044] (91)   animateCostume(VAR_EGO,3);
[0048] (80)   breakHere();
[0049] (9E)   walkActorTo(VAR_EGO,283,124);
[0050] (91)   animateCostume(VAR_EGO,11);
[0054] (80)   breakHere();
[0055] (80)   breakHere();
[0056] (80)   breakHere();
[0057] (91)   animateCostume(VAR_EGO,3);
[005B] (80)   breakHere();
[005C] (DD)   setClass(VAR_ME,[143]);
[0063] (C0)   endCutscene();
[0064] (A5)   pickupObject(VAR_ME,0);
[0068] (0A)   startScript(10,[]);
[006B] (18) } else {
[006E] (D8)   printEgo([Text("I already have it.")]);
[0083] (**) }
[0083] (00) stopObjectCode();
[0084] (48) if (Local[0] == 943) {
[008B] (79)   doSentence(8,Local[0],VAR_ME);
[0091] (48) } else if (Local[0] == 591) {
[009B] (D8)   printEgo([Text("I'll tie the ends of the fishnet to the\x10basket.")]);
[00CD] (29)   setOwnerOf(591,0);
[00D1] (5D)   setClass(595,[140]);
[00D8] (54)   setObjectName(595,"fishnet tied to basket");
[00F2] (48) } else if (Local[0] == 593) {
[00FC] (D8)   printEgo([Text("I'll harness the balloon with the\x10fishnet.")]);
[0129] (1D)   if (classOfIs(593,[147])) {
[0132] (5D)     setClass(595,[147]);
[0139] (**)   }
[0139] (29)   setOwnerOf(593,0);
[013D] (5D)   setClass(595,[145]);
[0144] (54)   setObjectName(595,"netted balloon");
[0156] (48) } else if (Local[0] == 1014) {
[0160] (1D)   if (classOfIs(595,[145])) {
[0169] (D8)     printEgo([Text("Now it should be possible to inflate the\x10balloon.")]);
[019D] (29)     setOwnerOf(1014,0);
[01A1] (5D)     setClass(595,[147]);
[01A8] (54)     setObjectName(595,"netted balloon with hose");
[01C4] (18)   } else {
[01CA] (18)     goto 01FE;
[01CD] (**)   }
[01CD] (**) }
[01CD] (D8) printEgo([Text("It's going to get all tangled up if I\x10do\x10that!")]);
[01FE] (1D) if (classOfIs(595,[140])) {
[0207] (1D)   if (classOfIs(595,[145])) {
[0210] (54)     setObjectName(595,"deflated balloon rig");
[0228] (0A)     startScript(144,[100,8]);
[0231] (1D)     if (classOfIs(595,[147])) {
[023A] (54)       setObjectName(595,"deflated balloon rig with hose");
[025C] (**)     }
[025C] (**)   }
[025C] (**) }
[025C] (0A) startScript(10,[]);
[025F] (00) stopObjectCode();
[0260] (1D) if (classOfIs(595,[145])) {
[0269] (1D)   if (classOfIs(595,[147])) {
[0272] (D8)     printEgo([Text("It's a fishnet wrapped around a balloon with a\x10hose.")]);
[02A9] (18)   } else {
[02AC] (D8)     printEgo([Text("It's a balloon in a\x10fishnet.")]);
[02CB] (**)   }
[02CB] (**) }
[02CB] (1D) if (classOfIs(595,[140])) {
[02D4] (D8)   printEgo([Text("It's a\x10start.")]);
[02E4] (1D)   if (classOfIs(595,[145])) {
[02ED] (1D)     if (classOfIs(595,[146])) {
[02F6] (D8)       printEgo([Text("It's a fully functional balloon.")]);
[0319] (1D)     } else if (classOfIs(595,[147])) {
[0325] (D8)       printEgo([Text("Now, it should be easy to inflate.")]);
[034A] (18)     } else {
[034D] (D8)       printEgo([Text("It just needs to be inflated.")]);
[036D] (**)     }
[036D] (**)   }
[036D] (18) } else {
[0370] (D8)   printEgo([Text("It's a lightweight fishnet.")]);
[038E] (**) }
[038E] (00) stopObjectCode();
[038F] (1D) if (classOfIs(595,[145])) {
[0398] (1D)   if (classOfIs(595,[140])) {
[03A1] (1A)     Var[161] = 1344;
[03A6] (18)   } else {
[03A9] (1A)     Var[161] = 1369;
[03AE] (**)   }
[03AE] (1D) } else if (classOfIs(595,[140])) {
[03BA] (1A)   Var[161] = 1346;
[03BF] (18) } else {
[03C2] (1A)   Var[161] = 1345;
[03C7] (**) }
[03C7] (00) stopObjectCode();
[03C8] (1A) Var[123] = 9;
[03CD] (00) stopObjectCode();
END

// Object 596: Path Away from Dock
Events:
   A - 000C
[000C] (42) chainScript(211,[]);
[000F] (00) stopObjectCode();
END

// Object 597: th-dock-sub
Events:
END