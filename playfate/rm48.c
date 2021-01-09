/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 48: Atlantis Entrance (a1-darkro)
 */

// EN
[0000] (1A) Var[311] = 2;
[0005] (62) stopScript(199);
[0007] (08) if (Var[238] != 2) {
[000E] (1D)   if (classOfIs(586,[17])) {
[0017] (1A)     Var[442] = 1;
[001C] (FC)     VAR_RESULT = isSoundRunning(Var[442]);
[0021] (A8)     if (VAR_RESULT) {
[0026] (4C)       soundKludge([269,Var[442],0,Var[442]]);
[0034] (4C)       soundKludge([257,Var[442],0]);
[003F] (**)     }
[003F] (46)     Var[442]++;
[0042] (44)     unless (Var[442] > 166) goto 001C;
[0049] (4C)     soundKludge([-1]);
[004E] (1C)     startSound(141);
[0050] (1C)     startSound(1);
[0052] (**)   }
[0052] (**) }
[0052] (2A) startScript(201,[],F);
[0055] (00) stopObjectCode();
END

// EX
[0000] (7A) VerbOps(9,[Text("Look at")]);
[000C] (13) ActorOps(1,[TalkColor(15)]);
[0011] (13) ActorOps(2,[TalkColor(13)]);
[0016] (00) stopObjectCode();
END

Script# 200
[0000] (48) if (Local[0] == 0) {
[0007] (1A)   Var[209] = 1;
[000C] (1A)   Var[211] = 255;
[0011] (33)   RoomIntensity(255,16,255);
[0016] (7A)   VerbOps(9,[Text("Look at")]);
[0022] (5D)   setClass(582,[32]);
[0029] (48) } else if (Local[0] == 1) {
[0033] (1A)   Var[209] = 0;
[0038] (1A)   Var[211] = 9;
[003D] (7A)   VerbOps(9,[Text(" Touch")]);
[0048] (5D)   setClass(937,[12]);
[004F] (5D)   setClass(310,[12]);
[0056] (5D)   setClass(23,[12]);
[005D] (5D)   setClass(868,[12]);
[0064] (33)   RoomIntensity(9,16,116);
[0069] (33)   RoomIntensity(9,144,159);
[006E] (33)   RoomIntensity(0,144,159);
[0073] (33)   RoomIntensity(9,192,255);
[0078] (48) } else if (Local[0] == 2) {
[0082] (0A)   startScript(208,[]);
[0085] (1A)   Var[209] = 1;
[008A] (7A)   VerbOps(9,[Text("Look at")]);
[0096] (5D)   setClass(937,[140]);
[009D] (5D)   setClass(310,[140]);
[00A4] (5D)   setClass(23,[140]);
[00AB] (5D)   setClass(868,[140]);
[00B2] (5D)   setClass(582,[32]);
[00B9] (62)   stopScript(207);
[00BB] (48)   if (Var[211] == 0) {
[00C2] (1A)     Var[211] = 9;
[00C7] (**)   }
[00C7] (9A)   Local[1] = Var[211];
[00CC] (5A)   Local[1] += 5;
[00D1] (33)   RoomIntensity(Local[1],16,116);
[00D7] (33)   RoomIntensity(Local[1],144,159);
[00DD] (33)   RoomIntensity(Local[1],144,159);
[00E3] (33)   RoomIntensity(Local[1],192,255);
[00E9] (80)   breakHere();
[00EA] (46)   Local[1]++;
[00ED] (44)   unless (Local[1] > 255) goto 00CC;
[00F4] (1A)   Var[211] = 255;
[00F9] (48) } else if (Local[0] == 3) {
[0103] (1A)   Var[209] = 0;
[0108] (7A)   VerbOps(9,[Text("Touch")]);
[0112] (48)   if (Var[211] == 0) {
[0119] (1A)     Var[211] = 255;
[011E] (**)   }
[011E] (9A)   Local[1] = Var[211];
[0123] (3A)   Local[1] -= 5;
[0128] (33)   RoomIntensity(Local[1],16,116);
[012E] (33)   RoomIntensity(Local[1],144,159);
[0134] (33)   RoomIntensity(Local[1],144,159);
[013A] (33)   RoomIntensity(Local[1],192,255);
[0140] (80)   breakHere();
[0141] (C6)   Local[1]--;
[0144] (78)   unless (Local[1] < 9) goto 0123;
[014B] (1A)   Var[211] = 9;
[0150] (33)   RoomIntensity(0,144,159);
[0155] (18)   /* goto 0158; */
[0158] (**) }
[0158] (A8) if (Var[209]) {
[015D] (93)   ActorOps(VAR_EGO,[TalkColor(15)]);
[0163] (93)   ActorOps(Var[182],[TalkColor(13)]);
[0169] (18) } else {
[016C] (93)   ActorOps(VAR_EGO,[TalkColor(7)]);
[0172] (93)   ActorOps(Var[182],[TalkColor(8)]);
[0178] (**) }
[0178] (0A) startScript(208,[]);
[017B] (A0) stopObjectCode();
END

Script# 201 // Enter Atlantis
[0000] (1A) Local[0] = 0;
[0005] (48) if (Var[224] == 33) {
[000C] (1A)   Var[224] = 0;
[0011] (**) }
[0011] (28) if (!Var[224]) {
[0016] (48)   if (Var[238] == 1) {
[001D] (1A)     Var[224] = 82;
[0022] (48)   } else if (Var[238] == 2) {
[002C] (1A)     Var[224] = 53;
[0031] (48)   } else if (Var[238] == 3) {
[003B] (1A)     Var[224] = 66;
[0040] (18)     /* goto 0043; */
[0043] (**)   }
[0043] (**) }
[0043] (1A) Var[211] = 0;
[0048] (1D) if (classOfIs(586,[17])) {
[0051] (2A)   startScript(200,[1],F);
[0057] (08) } else if (Var[224] != 81) {
[0061] (2A)   startScript(200,[2],F);
[0067] (18) } else {
[006A] (2A)   startScript(200,[0],F);
[0070] (**) }
[0070] (1D) if (classOfIs(583,[134])) {
[0079] (07)   setState(583,1);
[007D] (18) } else {
[0080] (07)   setState(583,0);
[0084] (**) }
[0084] (48) if (Var[224] == 82) {
[008B] (5D)   setClass(1012,[18]);
[0092] (7A)   VerbOps(51,[New(),SetXY(0,144),SetToObject(1352,98),Off(),BackColor(0)]);
[00A2] (0A)   startScript(144,[92,10]);
[00AB] (ED)   putActorInRoom(VAR_EGO,VAR_ROOM);
[00B0] (81)   putActor(VAR_EGO,158,46);
[00B7] (1A)   Var[210] = 0;
[00BC] (2A)   startScript(207,[],F);
[00BF] (1A)   Bit[17] = 0;
[00C4] (40)   cutscene([]);
[00C6] (14)   print(1,[Text("*struggle*" + wait() + "*strain*" + wait() + "It sure feels good to be out of that diving\x10suit.")]);
[0111] (AE)   WaitForMessage();
[0113] (9E)   walkActorTo(VAR_EGO,100,70);
[011A] (AE)   WaitForActor(1);
[011D] (C0)   endCutscene();
[011E] (48) } else if (Var[224] == 53) {
[0128] (5D)   setClass(1012,[18]);
[012F] (7A)   VerbOps(51,[New(),SetXY(0,144),SetToObject(1352,98),Off(),BackColor(0)]);
[013F] (ED)   putActorInRoom(VAR_EGO,VAR_ROOM);
[0144] (81)   putActor(VAR_EGO,291,120);
[014B] (1A)   Var[210] = 0;
[0150] (1A)   Bit[17] = 0;
[0155] (48) } else if (Var[224] == 66) {
[015F] (5D)   setClass(1012,[18]);
[0166] (10)   VAR_RESULT = getObjectOwner(637);
[016B] (48)   if (VAR_RESULT == 1) {
[0172] (29)     setOwnerOf(637,0);
[0176] (**)   }
[0176] (10)   VAR_RESULT = getObjectOwner(638);
[017B] (48)   if (VAR_RESULT == 1) {
[0182] (29)     setOwnerOf(638,0);
[0186] (**)   }
[0186] (10)   VAR_RESULT = getObjectOwner(639);
[018B] (48)   if (VAR_RESULT == 1) {
[0192] (29)     setOwnerOf(639,0);
[0196] (**)   }
[0196] (0A)   startScript(10,[]);
[0199] (7A)   VerbOps(51,[New(),SetXY(0,144),SetToObject(1352,98),Off(),BackColor(0)]);
[01A9] (0A)   startScript(144,[60,15]);
[01B2] (07)   setState(581,1);
[01B6] (ED)   putActorInRoom(VAR_EGO,VAR_ROOM);
[01BB] (81)   putActor(VAR_EGO,150,52);
[01C2] (ED)   putActorInRoom(Var[182],VAR_ROOM);
[01C7] (81)   putActor(Var[182],150,52);
[01CE] (C3)   Var[445] = getActorX(Var[182]);
[01D3] (A3)   Var[446] = getActorY(Var[182]);
[01D8] (5A)   Var[445] += 15;
[01DD] (5A)   Var[446] += 5;
[01E2] (E1)   putActor(Var[182],Var[445],Var[446]);
[01E9] (1A)   Var[212] = 1;
[01EE] (1A)   Var[210] = 0;
[01F3] (48) } else if (Var[224] == 40) {
[01FD] (18)   goto 015F;
[0200] (48) } else if (Var[224] == 85) {
[020A] (1A)   Var[210] = 1;
[020F] (AD)   putActorInRoom(VAR_EGO,48);
[0213] (8E)   putActorAtObject(VAR_EGO,582);
[0218] (48) } else if (Var[224] == 81) {
[0222] (1A)   Var[210] = 1;
[0227] (1A)   Local[0] = 1;
[022C] (18)   /* goto 022F; */
[022F] (**) }
[022F] (10) VAR_RESULT = getObjectOwner(428);
[0234] (48) if (VAR_RESULT == 1) {
[023B] (5D)   setClass(428,[130]);
[0242] (**) }
[0242] (10) VAR_RESULT = getObjectOwner(431);
[0247] (48) if (VAR_RESULT == 1) {
[024E] (10)   VAR_RESULT = getObjectOwner(432);
[0253] (48)   if (VAR_RESULT == 1) {
[025A] (5D)     setClass(428,[130]);
[0261] (**)   }
[0261] (**) }
[0261] (30) setBoxFlags(31,128);
[0265] (30) setBoxFlags(32,128);
[0269] (30) setBoxFlags(33,128);
[026D] (30) setBoxFlags(34,128);
[0271] (48) if (Var[238] == 2) {
[0278] (30)   setBoxFlags(9,128);
[027C] (30)   setBoxFlags(11,128);
[0280] (30)   setBoxFlags(33,0);
[0284] (**) }
[0284] (30) setBoxFlags(12,0);
[0288] (0F) VAR_RESULT = getObjectState(582);
[028D] (48) if (VAR_RESULT == 1) {
[0294] (30)   setBoxFlags(29,0);
[0298] (18) } else {
[029B] (30)   setBoxFlags(29,128);
[029F] (**) }
[029F] (08) if (Var[238] != 3) {
[02A6] (30)   setBoxFlags(35,128);
[02AA] (**) }
[02AA] (30) createBoxMatrix();
[02AC] (C3) Var[445] = getActorX(VAR_EGO);
[02B1] (A3) Var[446] = getActorY(VAR_EGO);
[02B6] (E1) putActor(VAR_EGO,Var[445],Var[446]);
[02BD] (0F) VAR_RESULT = getObjectState(584);
[02C2] (48) if (VAR_RESULT == 1) {
[02C9] (2A)   startScript(211,[],F);
[02CC] (**) }
[02CC] (48) if (Var[224] == 66) {
[02D3] (18) } else {
[02D6] (48)   unless (Var[224] == 82) goto 02ED;
[02DD] (**) }
[02DD] (D2) actorFollowCamera(VAR_EGO);
[02E0] (0A) startScript(202,[]);
[02E3] (80) breakHere();
[02E4] (68) VAR_RESULT = isScriptRunning(202);
[02E8] (28) unless (!VAR_RESULT) goto 02E3;
[02ED] (48) if (Var[224] == 53) {
[02F4] (32)   setCameraAt(328);
[02F7] (2A)   startScript(209,[],F);
[02FA] (**) }
[02FA] (0A) startScript(213,[]);
[02FD] (A8) if (Local[0]) {
[0302] (0A)   startScript(214,[]);
[0305] (**) }
[0305] (A0) stopObjectCode();
END

Script# 202 // Welcome to Atlantis
[0000] (83) VAR_RESULT = getActorRoom(Var[182]);
[0005] (C8) if (VAR_RESULT == VAR_ROOM) {
[000C] (40)   cutscene([1]);
[0011] (1E)   walkActorTo(1,90,73);
[0017] (AE)   WaitForActor(1);
[001A] (0D)   walkActorToActor(2,1,30);
[001E] (AE)   WaitForActor(2);
[0021] (09)   faceActor(1,2);
[0025] (80)   breakHere();
[0026] (80)   breakHere();
[0027] (09)   faceActor(2,1);
[002B] (80)   breakHere();
[002C] (80)   breakHere();
[002D] (14)   print(1,[Text("Amazing!" + wait() + "We're hundreds of feet below sea\x10level^" + wait() + "^yet there's enough air pressure to keep the water\x10out." + wait() + "How is it possible?")]);
[00B0] (AE)   WaitForMessage();
[00B2] (14)   print(2,[Text("Welcome to Atlantis, Indy.")]);
[00D0] (AE)   WaitForMessage();
[00D2] (C0)   endCutscene();
[00D3] (03)   VAR_RESULT = getActorRoom(2);
[00D7] (C8)   if (VAR_RESULT == VAR_ROOM) {
[00DE] (68)     VAR_RESULT = isScriptRunning(31);
[00E2] (28)     if (!VAR_RESULT) {
[00E7] (2A)       startScript(31,[1,2,0],F);
[00F3] (**)     }
[00F3] (**)   }
[00F3] (18) } else {
[00F6] (40)   cutscene([1]);
[00FB] (14)   print(1,[Text("Amazing!" + wait() + "I must be hundreds of feet below sea\x10level^" + wait() + "^yet there's enough air pressure to keep the water\x10out." + wait() + "It's impossible.")]);
[017F] (AE)   WaitForMessage();
[0181] (80)   breakHere();
[0182] (80)   breakHere();
[0183] (80)   breakHere();
[0184] (80)   breakHere();
[0185] (80)   breakHere();
[0186] (80)   breakHere();
[0187] (14)   print(1,[Text("Except, if that were really\x10true^" + wait() + "^I'd be dead.")]);
[01BB] (AE)   WaitForMessage();
[01BD] (C0)   endCutscene();
[01BE] (**) }
[01BE] (A0) stopObjectCode();
END

Script# 203 // Light Up Room
[0000] (0A) startScript(84,[]);
[0003] (80) breakHere();
[0004] (68) VAR_RESULT = isScriptRunning(84);
[0008] (28) unless (!VAR_RESULT) goto 0003;
[000D] (A8) if (Var[444]) {
[0012] (5D)   setClass(586,[145]);
[0019] (37)   startObject(933,250,[-1]);
[0021] (4C)   soundKludge([9,1]);
[0029] (4C)   soundKludge([-1]);
[002E] (1C)   startSound(91);
[0030] (1C)   startSound(2);
[0032] (4C)   soundKludge([-1]);
[0037] (0C)   Resource.loadSound(3);
[003A] (4C)   soundKludge([272]);
[003F] (4C)   soundKludge([-1]);
[0044] (4C)   soundKludge([270,2,1]);
[004F] (4C)   soundKludge([271,8,3]);
[005A] (4C)   soundKludge([271,-1]);
[0062] (2A)   startScript(153,[],F);
[0065] (2A)   startScript(200,[2],F);
[006B] (48)   if (Var[238] == 3) {
[0072] (2E)     delay(120);
[0076] (13)     ActorOps(1,[TalkColor(15)]);
[007B] (40)     cutscene([2]);
[0080] (D8)     printEgo([Text("Sophia!" + wait() + "Where are\x10you?!")]);
[009B] (91)     animateCostume(VAR_EGO,244);
[009F] (80)     breakHere();
[00A0] (80)     breakHere();
[00A1] (80)     breakHere();
[00A2] (80)     breakHere();
[00A3] (91)     animateCostume(VAR_EGO,245);
[00A7] (80)     breakHere();
[00A8] (80)     breakHere();
[00A9] (80)     breakHere();
[00AA] (80)     breakHere();
[00AB] (91)     animateCostume(VAR_EGO,247);
[00AF] (80)     breakHere();
[00B0] (80)     breakHere();
[00B1] (80)     breakHere();
[00B2] (80)     breakHere();
[00B3] (91)     animateCostume(VAR_EGO,246);
[00B7] (80)     breakHere();
[00B8] (80)     breakHere();
[00B9] (80)     breakHere();
[00BA] (80)     breakHere();
[00BB] (AE)     WaitForMessage();
[00BD] (D8)     printEgo([Text("Kerner must have grabbed her\x10somehow.")]);
[00E5] (C0)     endCutscene();
[00E6] (**)   }
[00E6] (48)   if (Var[238] == 1) {
[00ED] (2E)     delay(120);
[00F1] (D8)     printEgo([Text("So this is the Lost\x10City!")]);
[010D] (**)   }
[010D] (**) }
[010D] (A0) stopObjectCode();
END

Script# 204
[0000] (A8) if (Var[210]) {
[0005] (9E)   walkActorTo(VAR_EGO,409,77);
[000C] (1A)   Bit[16] = 0;
[0011] (80)   breakHere();
[0012] (A8)   if (Bit[16]) {
[0017] (62)     stopScript(0);
[0019] (**)   }
[0019] (D6)   VAR_RESULT = getActorMoving(VAR_EGO);
[001E] (28)   unless (!VAR_RESULT) goto 0011;
[0023] (C3)   Var[351] = getActorX(VAR_EGO);
[0028] (A3)   Var[352] = getActorY(VAR_EGO);
[002D] (AC)   Exprmode Var[442] = (409 - Var[351]);
[0038] (AC)   Exprmode Var[443] = (77 - Var[352]);
[0043] (78)   if (Var[442] < 0) {
[004A] (AC)     Exprmode Var[442] = (0 - Var[442]);
[0055] (**)   }
[0055] (78)   if (Var[443] < 0) {
[005C] (AC)     Exprmode Var[443] = (0 - Var[443]);
[0067] (**)   }
[0067] (1A)   Var[444] = 0;
[006C] (04)   if (Var[442] <= 10) {
[0073] (04)     if (Var[443] <= 10) {
[007A] (1A)       Var[444] = 1;
[007F] (**)     }
[007F] (**)   }
[007F] (1A)   Local[2] = 12;
[0084] (18) } else {
[0087] (9E)   walkActorTo(VAR_EGO,381,129);
[008E] (1A)   Bit[16] = 0;
[0093] (80)   breakHere();
[0094] (A8)   if (Bit[16]) {
[0099] (62)     stopScript(0);
[009B] (**)   }
[009B] (D6)   VAR_RESULT = getActorMoving(VAR_EGO);
[00A0] (28)   unless (!VAR_RESULT) goto 0093;
[00A5] (C3)   Var[351] = getActorX(VAR_EGO);
[00AA] (A3)   Var[352] = getActorY(VAR_EGO);
[00AF] (AC)   Exprmode Var[442] = (381 - Var[351]);
[00BA] (AC)   Exprmode Var[443] = (129 - Var[352]);
[00C5] (78)   if (Var[442] < 0) {
[00CC] (AC)     Exprmode Var[442] = (0 - Var[442]);
[00D7] (**)   }
[00D7] (78)   if (Var[443] < 0) {
[00DE] (AC)     Exprmode Var[443] = (0 - Var[443]);
[00E9] (**)   }
[00E9] (1A)   Var[444] = 0;
[00EE] (04)   if (Var[442] <= 10) {
[00F5] (04)     if (Var[443] <= 10) {
[00FC] (1A)       Var[444] = 1;
[0101] (**)     }
[0101] (**)   }
[0101] (1A)   Local[2] = 10;
[0106] (**) }
[0106] (A8) if (Var[444]) {
[010B] (43)   Var[445] = getActorX(584);
[0110] (23)   Var[446] = getActorY(584);
[0115] (AC)   Exprmode Var[442] = (Var[445] - <VAR_RESULT = getActorX(VAR_EGO)>);
[0123] (AC)   Exprmode Var[443] = (Var[446] - <VAR_RESULT = getActorY(VAR_EGO)>);
[0131] (78)   if (Var[442] < 0) {
[0138] (AC)     Exprmode Var[442] = (0 - Var[442]);
[0143] (**)   }
[0143] (78)   if (Var[443] < 0) {
[014A] (AC)     Exprmode Var[443] = (0 - Var[443]);
[0155] (**)   }
[0155] (91)   animateCostume(VAR_EGO,255);
[0159] (84)   if (Var[442] <= Var[443]) {
[0160] (A3)     VAR_RESULT = getActorY(VAR_EGO);
[0165] (BA)     Var[446] -= VAR_RESULT;
[016A] (04)     if (Var[446] <= 0) {
[0171] (91)       animateCostume(VAR_EGO,247);
[0175] (18)     } else {
[0178] (91)       animateCostume(VAR_EGO,246);
[017C] (**)     }
[017C] (18)   } else {
[017F] (C3)     VAR_RESULT = getActorX(VAR_EGO);
[0184] (BA)     Var[445] -= VAR_RESULT;
[0189] (04)     if (Var[445] <= 0) {
[0190] (91)       animateCostume(VAR_EGO,244);
[0194] (18)     } else {
[0197] (91)       animateCostume(VAR_EGO,245);
[019B] (**)     }
[019B] (**)   }
[019B] (80)   breakHere();
[019C] (80)   breakHere();
[019D] (48)   if (Local[0] == 10) {
[01A4] (48)   } else if (Local[0] == 8) {
[01AE] (40)     cutscene([2]);
[01B3] (D1)     animateCostume(VAR_EGO,Local[2]);
[01B8] (80)     breakHere();
[01B9] (80)     breakHere();
[01BA] (91)     animateCostume(VAR_EGO,3);
[01BE] (80)     breakHere();
[01BF] (C0)     endCutscene();
[01C0] (0F)     VAR_RESULT = getObjectState(584);
[01C5] (48)     if (VAR_RESULT == 0) {
[01CC] (48)       if (Local[1] == 583) {
[01D3] (0A)         startScript(206,[]);
[01D6] (18)       } else {
[01D9] (D8)         printEgo([Text("That doesn't seem to\x10work.")]);
[01F6] (**)       }
[01F6] (18)     } else {
[01F9] (68)       VAR_RESULT = isScriptRunning(205);
[01FD] (28)       if (!VAR_RESULT) {
[0202] (1E)         walkActorTo(1,390,124);
[0208] (**)       }
[0208] (**)     }
[0208] (48)   } else if (Local[0] == 11) {
[0212] (0F)     VAR_RESULT = getObjectState(584);
[0217] (48)     if (VAR_RESULT == 1) {
[021E] (40)       cutscene([2]);
[0223] (51)       animateCostume(1,Local[2]);
[0227] (80)       breakHere();
[0228] (07)       setState(584,0);
[022C] (5D)       setClass(584,[130,27]);
[0236] (29)       setOwnerOf(583,1);
[023A] (54)       setObjectName(583,"ladder");
[0244] (A8)       if (Var[209]) {
[0249] (54)         setObjectName(584,"broken stairway");
[025C] (18)       } else {
[025F] (5D)         setClass(584,[26,153]);
[0269] (54)         setObjectName(584,"rocky incline");
[027A] (**)       }
[027A] (62)       stopScript(211);
[027C] (30)       setBoxFlags(24,128);
[0280] (30)       createBoxMatrix();
[0282] (0A)       startScript(10,[]);
[0285] (80)       breakHere();
[0286] (11)       animateCostume(1,3);
[0289] (80)       breakHere();
[028A] (C0)       endCutscene();
[028B] (18)     } else {
[028E] (D8)       printEgo([Text("I can't do that.")]);
[02A1] (**)     }
[02A1] (0A)     startScript(208,[]);
[02A4] (48)   } else if (Local[0] == 9) {
[02AE] (A8)     if (Var[209]) {
[02B3] (0F)       VAR_RESULT = getObjectState(584);
[02B8] (48)       if (VAR_RESULT == 0) {
[02BF] (D8)         printEgo([Text("They're broken steps.")]);
[02D7] (18)       } else {
[02DA] (D8)         printEgo([Text("It's a ladder.")]);
[02EB] (**)       }
[02EB] (5D)       setClass(584,[154]);
[02F2] (1D)     } else if (classOfIs(584,[154])) {
[02FE] (0F)       VAR_RESULT = getObjectState(584);
[0303] (48)       if (VAR_RESULT == 0) {
[030A] (D8)         printEgo([Text("They're broken steps.")]);
[0322] (18)       } else {
[0325] (D8)         printEgo([Text("It's a ladder.")]);
[0336] (**)       }
[0336] (1D)     } else if (classOfIs(584,[153])) {
[0342] (0F)       VAR_RESULT = getObjectState(584);
[0347] (48)       if (VAR_RESULT == 0) {
[034E] (D8)         printEgo([Text("It feels like a steep rocky\x10incline.")]);
[0375] (18)       } else {
[0378] (D8)         printEgo([Text("It feels like a ladder.")]);
[0392] (**)       }
[0392] (1D)     } else if (classOfIs(584,[26])) {
[039E] (0F)       VAR_RESULT = getObjectState(584);
[03A3] (48)       if (VAR_RESULT == 0) {
[03AA] (D8)         printEgo([Text("It feels like a steep rocky\x10incline.")]);
[03D1] (54)         setObjectName(584,"rocky incline");
[03E2] (18)       } else {
[03E5] (D8)         printEgo([Text("It feels like a ladder.")]);
[03FF] (**)       }
[03FF] (5D)       setClass(584,[153]);
[0406] (**)     }
[0406] (18)   } else {
[0409] (0A)     startScript(3,[Local[0]]);
[040F] (**)   }
[040F] (18) } else {
[0412] (D8)   printEgo([Text("I can't reach it.")]);
[0426] (**) }
[0426] (A0) stopObjectCode();
END

Script# 205
[0000] (11) animateCostume(1,5);
[0003] (40) cutscene([2]);
[0008] (9A) Local[0] = Var[116];
[000D] (A8) if (Var[113]) {
[0012] (9A)   Local[1] = Var[113];
[0017] (18) } else {
[001A] (1A)   Local[1] = 0;
[001F] (**) }
[001F] (9A) Local[2] = Var[110];
[0024] (9A) Local[3] = Var[114];
[0029] (19) doSentence(STOP);
[002B] (1A) Local[4] = 2;
[0030] (1A) Local[5] = 14;
[0035] (1A) Local[6] = 13;
[003A] (1A) Local[7] = 12;
[003F] (1A) Local[8] = 15;
[0044] (91) animateCostume(VAR_EGO,247);
[0048] (80) breakHere();
[0049] (80) breakHere();
[004A] (93) ActorOps(VAR_EGO,[Costume(27)]);
[0050] (A8) if (Var[210]) {
[0055] (0A)   startScript(126,[1,Local[8],Local[5],7,79,127]);
[006A] (80)   breakHere();
[006B] (68)   VAR_RESULT = isScriptRunning(126);
[006F] (28)   unless (!VAR_RESULT) goto 006A;
[0074] (13)   ActorOps(1,[Costume(Local[4])]);
[007A] (78)   if (Var[100] < 384) {
[0081] (1E)     walkActorTo(1,363,134);
[0087] (44)   } else if (Var[100] > 405) {
[0091] (1E)     walkActorTo(1,408,137);
[0097] (18)   } else {
[009A] (1A)     Local[6] = -1;
[009F] (1E)     walkActorTo(1,363,134);
[00A5] (**)   }
[00A5] (AE)   WaitForActor(1);
[00A8] (1A)   Var[210] = 0;
[00AD] (18) } else {
[00B0] (0A)   startScript(126,[1,Local[7],Local[6],-7,125,77]);
[00C5] (80)   breakHere();
[00C6] (68)   VAR_RESULT = isScriptRunning(126);
[00CA] (28)   unless (!VAR_RESULT) goto 00C5;
[00CF] (13)   ActorOps(1,[Costume(Local[4])]);
[00D5] (78)   if (Var[100] < 384) {
[00DC] (1E)     walkActorTo(1,384,77);
[00E2] (44)   } else if (Var[100] > 408) {
[00EC] (1E)     walkActorTo(1,420,77);
[00F2] (18)   } else {
[00F5] (1A)     Local[6] = -1;
[00FA] (1E)     walkActorTo(1,420,77);
[0100] (**)   }
[0100] (AE)   WaitForActor(1);
[0103] (1A)   Var[210] = 1;
[0108] (**) }
[0108] (C0) endCutscene();
[0109] (0A) startScript(208,[]);
[010C] (2A) startScript(211,[],F);
[010F] (A8) if (Local[1]) {
[0114] (08)   if (Local[1] != 584) {
[011B] (F9)     doSentence(Local[0],Local[1],Local[3]);
[0122] (AE)     WaitForSentence();
[0124] (**)   }
[0124] (08) } else if (Local[6] != -1) {
[012E] (7E)   walkActorTo(1,Var[100],Var[101]);
[0134] (AE)   WaitForActor(1);
[0137] (**) }
[0137] (A0) stopObjectCode();
END

Script# 206 // Place Ladder
[0000] (40) cutscene([2]);
[0005] (0A) startScript(144,[112,7]);
[000E] (48) if (Var[209] == 0) {
[0015] (D8)   printEgo([Text("The ladder is in\x10place.")]);
[002F] (**) }
[002F] (07) setState(584,1);
[0033] (80) breakHere();
[0034] (5D) setClass(584,[1,2,3,4,153,155]);
[004A] (54) setObjectName(584,"ladder");
[0054] (29) setOwnerOf(583,14);
[0058] (30) setBoxFlags(24,5);
[005C] (30) createBoxMatrix();
[005E] (2A) startScript(211,[],F);
[0061] (0A) startScript(10,[1]);
[0067] (5D) setClass(583,[160]);
[006E] (0A) startScript(208,[]);
[0071] (C0) endCutscene();
[0072] (A0) stopObjectCode();
END

Script# 207
[0000] (1A) Local[0] = 0;
[0005] (44) if (Var[211] > 50) {
[000C] (62)   stopScript(0);
[000E] (**) }
[000E] (80) breakHere();
[000F] (80) breakHere();
[0010] (80) breakHere();
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (80) breakHere();
[0015] (80) breakHere();
[0016] (80) breakHere();
[0017] (80) breakHere();
[0018] (80) breakHere();
[0019] (80) breakHere();
[001A] (80) breakHere();
[001B] (80) breakHere();
[001C] (80) breakHere();
[001D] (80) breakHere();
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
[0029] (80) breakHere();
[002A] (80) breakHere();
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (80) breakHere();
[002E] (80) breakHere();
[002F] (80) breakHere();
[0030] (80) breakHere();
[0031] (80) breakHere();
[0032] (80) breakHere();
[0033] (80) breakHere();
[0034] (80) breakHere();
[0035] (80) breakHere();
[0036] (46) Var[211]++;
[0039] (33) RoomIntensity(Var[211],16,116);
[003F] (33) RoomIntensity(Var[211],192,255);
[0045] (44) if (Var[211] > 50) {
[004C] (1A)   Local[0] = 1;
[0051] (**) }
[0051] (A8) if (Var[209]) {
[0056] (1A)   Local[0] = 1;
[005B] (**) }
[005B] (A8) unless (Local[0]) goto 000E;
[0060] (A0) stopObjectCode();
END

Script# 208
[0000] (A8) if (Var[209]) {
[0005] (48)   if (Var[238] == 2) {
[000C] (54)     setObjectName(580,"cave-in");
[0017] (5D)     setClass(580,[32,154]);
[0021] (5D)     setClass(588,[160]);
[0028] (18)   } else {
[002B] (54)     setObjectName(588,"cave-in");
[0036] (5D)     setClass(588,[32,154]);
[0040] (5D)     setClass(580,[160]);
[0047] (**)   }
[0047] (0F)   VAR_RESULT = getObjectState(584);
[004C] (48)   if (VAR_RESULT == 1) {
[0053] (54)     setObjectName(584,"ladder");
[005D] (18)   } else {
[0060] (30)     setBoxFlags(24,128);
[0064] (30)     createBoxMatrix();
[0066] (54)     setObjectName(584,"broken stairway");
[0079] (**)   }
[0079] (5D)   setClass(584,[32,154,153]);
[0086] (54)   setObjectName(585,"stone box");
[0093] (5D)   setClass(585,[32,154]);
[009D] (5D)   setClass(589,[32]);
[00A4] (0F)   Var[442] = getObjectState(589);
[00A9] (48)   if (Var[442] == 0) {
[00B0] (54)     setObjectName(589,"spindle");
[00BB] (48)   } else if (Var[442] == 1) {
[00C5] (54)     setObjectName(589,"Sunstone");
[00D1] (48)   } else if (Var[442] == 2) {
[00DB] (54)     setObjectName(589,"Moonstone");
[00E8] (48)   } else if (Var[442] == 3) {
[00F2] (54)     setObjectName(589,"Worldstone");
[0100] (18)     /* goto 0103; */
[0103] (**)   }
[0103] (54)   setObjectName(587,"sentry statue");
[0114] (5D)   setClass(587,[32,154]);
[011E] (5D)   setClass(582,[32,154]);
[0128] (54)   setObjectName(582,"bronze door");
[0137] (5D)   setClass(581,[32,154]);
[0141] (5D)   setClass(586,[154]);
[0148] (5D)   setClass(583,[154]);
[014F] (18) } else {
[0152] (5D)   setClass(580,[160]);
[0159] (5D)   setClass(588,[160]);
[0160] (0F)   VAR_RESULT = getObjectState(584);
[0165] (48)   if (VAR_RESULT == 0) {
[016C] (30)     setBoxFlags(24,128);
[0170] (30)     createBoxMatrix();
[0172] (**)   }
[0172] (1D)   if (classOfIs(584,[155])) {
[017B] (5D)     setClass(581,[32]);
[0182] (5D)     setClass(589,[32]);
[0189] (5D)     setClass(582,[32]);
[0190] (5D)     setClass(584,[32]);
[0197] (10)     VAR_RESULT = getObjectOwner(586);
[019C] (08)     if (VAR_RESULT != 1) {
[01A3] (5D)       setClass(586,[32]);
[01AA] (**)     }
[01AA] (5D)     setClass(585,[32]);
[01B1] (5D)     setClass(587,[32]);
[01B8] (18)   } else {
[01BB] (A8)     if (Var[210]) {
[01C0] (5D)       setClass(581,[160]);
[01C7] (18)     } else {
[01CA] (5D)       setClass(589,[160]);
[01D1] (5D)       setClass(582,[160]);
[01D8] (5D)       setClass(585,[160]);
[01DF] (5D)       setClass(586,[160]);
[01E6] (5D)       setClass(587,[160]);
[01ED] (**)     }
[01ED] (5D)     setClass(584,[32]);
[01F4] (**)   }
[01F4] (1D)   if (classOfIs(583,[25])) {
[01FD] (54)     setObjectName(583,"wood thing");
[020B] (**)   }
[020B] (1D)   if (classOfIs(584,[25])) {
[0214] (54)     setObjectName(584,"stone rubble");
[0224] (18)   } else {
[0227] (0F)     VAR_RESULT = getObjectState(584);
[022C] (48)     if (VAR_RESULT == 0) {
[0233] (1D)       if (classOfIs(584,[154])) {
[023C] (54)         setObjectName(584,"broken stairway");
[024F] (18)       } else {
[0252] (54)         setObjectName(584,"rocky incline");
[0263] (**)       }
[0263] (18)     } else {
[0266] (54)       setObjectName(584,"ladder");
[0270] (**)     }
[0270] (**)   }
[0270] (1D)   if (classOfIs(585,[25])) {
[0279] (54)     setObjectName(585,"stone thing");
[0288] (18)   } else {
[028B] (54)     setObjectName(585,"stone box");
[0298] (**)   }
[0298] (1D)   if (classOfIs(586,[25])) {
[02A1] (54)     setObjectName(586,"metal rod");
[02AE] (**)   }
[02AE] (1D)   if (classOfIs(587,[25])) {
[02B7] (54)     setObjectName(587,"stone thing");
[02C6] (18)   } else {
[02C9] (54)     setObjectName(587,"statue");
[02D3] (**)   }
[02D3] (1D)   if (classOfIs(582,[25])) {
[02DC] (54)     setObjectName(582,"metal slab");
[02EA] (1D)   } else if (classOfIs(582,[26])) {
[02F6] (54)     setObjectName(587,"metal door");
[0304] (18)   } else {
[0307] (54)     setObjectName(582,"bronze door");
[0316] (**)   }
[0316] (1D)   if (classOfIs(589,[25])) {
[031F] (54)     setObjectName(589,"stone thing");
[032E] (18)   } else {
[0331] (54)     setObjectName(589,"spindle");
[033C] (**)   }
[033C] (**) }
[033C] (A0) stopObjectCode();
END

Script# 209 // Subway Crashes In
[0000] (40) cutscene([1]);
[0005] (0C) Resource.lockSound(207);
[0008] (0C) Resource.loadSound(207);
[000B] (0C) Resource.lockSound(183);
[000E] (0C) Resource.loadSound(183);
[0011] (32) setCameraAt(328);
[0014] (AE) WaitForCamera();
[0016] (33) ShakeOn();
[0018] (1C) startSound(183);
[001A] (4C) soundKludge([258,183,100]);
[0025] (4C) soundKludge([-1]);
[002A] (80) breakHere();
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (80) breakHere();
[002E] (80) breakHere();
[002F] (0A) startScript(215,[]);
[0032] (33) setRoomShadow(300,300,300,160,191);
[003D] (AC) Exprmode Var[445] = (415 - VAR_CAMERA_POS_X);
[0048] (1A) Var[446] = 5;
[004D] (3C) stopSound(183);
[004F] (1C) startSound(183);
[0051] (4C) soundKludge([-1]);
[0056] (14) print(255,[Color(4),Center(),Pos(Var[445],Var[446]),Text("SMASH!")]);
[0068] (80) breakHere();
[0069] (80) breakHere();
[006A] (13) ActorOps(5,[Init(),Costume(6),IgnoreBoxes(),Scale(255,255),WalkSpeed(10,4),Elevation(100)]);
[007A] (2D) putActorInRoom(5,48);
[007D] (01) putActor(5,350,147);
[0083] (1E) walkActorTo(5,296,175);
[0089] (3A) Var[445] -= 26;
[008E] (1A) Var[446] = 14;
[0093] (14) print(255,[Color(4),Center(),Pos(Var[445],Var[446]),Text("KRASH!")]);
[00A5] (80) breakHere();
[00A6] (80) breakHere();
[00A7] (3A) Var[445] -= 35;
[00AC] (1A) Var[446] = 30;
[00B1] (14) print(255,[Color(4),Center(),Pos(Var[445],Var[446]),Text("KRUMBLE!")]);
[00C5] (4C) soundKludge([257,183,0]);
[00D0] (4C) soundKludge([269,183,0,12]);
[00DE] (1C) startSound(207);
[00E0] (4C) soundKludge([-1]);
[00E5] (80) breakHere();
[00E6] (80) breakHere();
[00E7] (33) ShakeOff();
[00E9] (3A) Var[445] -= 25;
[00EE] (1A) Var[446] = 43;
[00F3] (14) print(255,[Color(4),Center(),Pos(Var[445],Var[446]),Text("PLINK!")]);
[0105] (80) breakHere();
[0106] (80) breakHere();
[0107] (2A) startScript(210,[],F);
[010A] (13) ActorOps(1,[TalkColor(7)]);
[010F] (14) print(1,[Text("Ow.")]);
[0116] (AE) WaitForMessage();
[0118] (0C) Resource.unlockSound(207);
[011B] (0C) Resource.unlockSound(183);
[011E] (D2) actorFollowCamera(VAR_EGO);
[0121] (1E) walkActorTo(1,100,70);
[0127] (80) breakHere();
[0128] (80) breakHere();
[0129] (80) breakHere();
[012A] (80) breakHere();
[012B] (14) print(1,[Text("*stagger*")]);
[0138] (AE) WaitForMessage();
[013A] (14) print(1,[Text("*stumble*")]);
[0147] (AE) WaitForActor(1);
[014A] (AE) WaitForMessage();
[014C] (0A) startScript(202,[]);
[014F] (80) breakHere();
[0150] (68) VAR_RESULT = isScriptRunning(202);
[0154] (28) unless (!VAR_RESULT) goto 014F;
[0159] (2A) startScript(207,[],F);
[015C] (C0) endCutscene();
[015D] (A0) stopObjectCode();
END

Script# 210
[0000] (1A) Local[0] = 300;
[0005] (33) setRoomShadow(Local[0],Local[0],Local[0],160,191);
[0010] (3A) Local[0] -= 10;
[0015] (80) breakHere();
[0016] (C6) Local[0]--;
[0019] (78) unless (Local[0] < 0) goto 0005;
[0020] (2D) putActorInRoom(5,0);
[0023] (05) drawObject(580setImage(,1));
[0029] (A0) stopObjectCode();
END

Script# 211
[0000] (AC) Exprmode Local[1] = <VAR_RESULT = getActorWalkBox(1)>;
[0009] (48) if (Local[1] == 24) {
[0010] (42)   chainScript(205,[]);
[0013] (**) }
[0013] (80) breakHere();
[0014] (18) goto 0000;
[0017] (A0) stopObjectCode();
END

Script# 212
[0000] (40) cutscene([2]);
[0005] (0A) startScript(84,[]);
[0008] (80) breakHere();
[0009] (68) VAR_RESULT = isScriptRunning(84);
[000D] (28) unless (!VAR_RESULT) goto 0008;
[0012] (1A) Bit[653] = 1;
[0017] (A8) if (Bit[653]) {
[001C] (11)   animateCostume(1,3);
[001F] (07)   setState(587,1);
[0023] (0F)   VAR_RESULT = getObjectState(582);
[0028] (08)   if (VAR_RESULT != 1) {
[002F] (0A)     startScript(144,[116,5]);
[0038] (7C)     VAR_RESULT = isSoundRunning(2);
[003C] (A8)     if (VAR_RESULT) {
[0041] (0C)       Resource.lockSound(3);
[0044] (0C)       Resource.loadSound(3);
[0047] (4C)       soundKludge([272]);
[004C] (4C)       soundKludge([-1]);
[0051] (4C)       soundKludge([269,2,0,45]);
[005F] (4C)       soundKludge([257,2,0]);
[006A] (4C)       soundKludge([262,2,0]);
[0075] (1C)       startSound(154);
[0077] (4C)       soundKludge([270,154,1]);
[0082] (4C)       soundKludge([271,8,3,128]);
[0090] (4C)       soundKludge([271,-1]);
[0098] (18)     } else {
[009B] (4C)       soundKludge([262,3,0]);
[00A6] (4C)       soundKludge([257,3,0]);
[00B1] (4C)       soundKludge([269,3,50,30]);
[00BF] (1C)       startSound(154);
[00C1] (4C)       soundKludge([270,154,1]);
[00CC] (4C)       soundKludge([271,257,3,128]);
[00DA] (4C)       soundKludge([271,262,3,128]);
[00E8] (4C)       soundKludge([271,269,3,127,30]);
[00F9] (4C)       soundKludge([271,-1]);
[0101] (**)     }
[0101] (1C)     startSound(192);
[0103] (**)   }
[0103] (1A)   Bit[653] = 0;
[0108] (07)   setState(582,1);
[010C] (80)   breakHere();
[010D] (0C)   Resource.unlockSound(3);
[0110] (11)   animateCostume(1,247);
[0113] (80)   breakHere();
[0114] (80)   breakHere();
[0115] (30)   setBoxFlags(29,0);
[0119] (30)   createBoxMatrix();
[011B] (37)   startObject(933,250,[-1]);
[0123] (0A)   startScript(10,[]);
[0126] (**) }
[0126] (C0) endCutscene();
[0127] (A0) stopObjectCode();
END

Script# 213
[0000] (1A) VAR_ROOM_FLAG = 0;
[0005] (80) breakHere();
[0006] (A8) unless (VAR_ROOM_FLAG) goto 0005;
[000B] (0A) startScript(208,[]);
[000E] (18) goto 0000;
[0011] (A0) stopObjectCode();
END

Script# 214 // Used Stone Disks
[0000] (32) setCameraAt(328);
[0003] (40) cutscene([2]);
[0008] (80) breakHere();
[0009] (A8) if (Bit[653]) {
[000E] (1D)   if (classOfIs(587,[134])) {
[0017] (5D)     setClass(587,[6]);
[001E] (D8)     printEgo([Text("The mouth of the statue\x10opened!")]);
[0040] (1C)     startSound(117);
[0042] (1C)     startSound(172);
[0044] (0A)     startScript(144,[115,10]);
[004D] (**)   }
[004D] (1D) } else if (classOfIs(587,[6])) {
[0059] (5D)   setClass(587,[134]);
[0060] (1C)   startSound(172);
[0062] (D8)   printEgo([Text("The mouth of the statue\x10closed!")]);
[0084] (18) } else {
[0087] (D8)   printEgo([Text("That didn't seem to do\x10anything.")]);
[00AA] (**) }
[00AA] (52) actorFollowCamera(1);
[00AC] (C0) endCutscene();
[00AD] (A0) stopObjectCode();
END

Script# 215
[0000] (4C) soundKludge([269,12,90,60]);
[000E] (1A) Local[0] = 128;
[0013] (3A) Local[0] -= 4;
[0018] (9A) Local[1] = Local[0];
[001D] (3A) Local[2] -= 3;
[0022] (4C) soundKludge([262,12,Local[1]]);
[002D] (4C) soundKludge([259,12,Local[2]]);
[0038] (4C) soundKludge([-1]);
[003D] (80) breakHere();
[003E] (C6) Local[0]--;
[0041] (78) unless (Local[0] < 100) goto 0013;
[0048] (4C) soundKludge([269,12,0,180]);
[0056] (9A) Local[1] = Local[0];
[005B] (3A) Local[1] -= 8;
[0060] (4C) soundKludge([262,12,Local[1]]);
[006B] (4C) soundKludge([-1]);
[0070] (80) breakHere();
[0071] (C6) Local[1]--;
[0074] (78) unless (Local[1] < 0) goto 005B;
[007B] (1C) startSound(1);
[007D] (A0) stopObjectCode();
END

// Object 580: Caved-in Tunnel
Events:
END

// Object 581: Archway
Events:
   9 - 005B
   A - 0012
  5A - 00A2
[0012] (48) if (Var[224] == 82) {
[0019] (48) } else if (Var[224] == 53) {
[0023] (48) } else if (Var[224] == 66) {
[002D] (D8)   printEgo([Text("I better stay away from that\x10submarine.")]);
[0057] (18)   /* goto 005A; */
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (0F) VAR_RESULT = getObjectState(581);
[0060] (48) if (VAR_RESULT == 1) {
[0067] (D8)   printEgo([Text("There's Kerner's\x10U-boat.")]);
[0082] (18) } else {
[0085] (D8)   printEgo([Text("It's an ancient air\x10lock.")]);
[00A1] (**) }
[00A1] (00) stopObjectCode();
[00A2] (1A) Var[123] = 9;
[00A7] (00) stopObjectCode();
END

// Object 582: Metal Door
Events:
   3 - 0133
   4 - 017E
   9 - 006A
   A - 0018
  5A - 01C0
[0018] (0F) VAR_RESULT = getObjectState(582);
[001D] (48) if (VAR_RESULT == 1) {
[0024] (40)   cutscene([2]);
[0029] (D8)   printEgo([Text("What\x10ancient\x10secrets lie\x10beyond\x10this\x10portal, I\x10wonder^")]);
[0062] (AE)   WaitForMessage();
[0064] (80)   breakHere();
[0065] (80)   breakHere();
[0066] (C0)   endCutscene();
[0067] (98)   systemOps(1);
[0069] (**) }
[0069] (00) stopObjectCode();
[006A] (A8) if (Var[209]) {
[006F] (D8)   printEgo([Text("It's a heavy bronze\x10door.")]);
[008B] (D4)   setObjectName(VAR_ME,"bronze door");
[009A] (5D)   setClass(582,[154]);
[00A1] (1D) } else if (classOfIs(582,[154])) {
[00AD] (D8)   printEgo([Text("It's a heavy bronze\x10door.")]);
[00C9] (1D) } else if (classOfIs(582,[153])) {
[00D5] (D8)   printEgo([Text("It feels like a metal\x10door.")]);
[00F3] (1D) } else if (classOfIs(582,[25])) {
[00FF] (5D)   setClass(582,[153]);
[0106] (D8)   printEgo([Text("It feels like a metal\x10door.")]);
[0124] (D4)   setObjectName(VAR_ME,"metal door");
[0132] (**) }
[0132] (00) stopObjectCode();
[0133] (8F) VAR_RESULT = getObjectState(VAR_ME);
[0138] (48) if (VAR_RESULT == 1) {
[013F] (D8)   printEgo([Text("It's already\x10open.")]);
[0154] (18) } else {
[0157] (D8)   printEgo([Text("I'll never open this door\x10manually.")]);
[017D] (**) }
[017D] (00) stopObjectCode();
[017E] (8F) VAR_RESULT = getObjectState(VAR_ME);
[0183] (48) if (VAR_RESULT == 1) {
[018A] (D8)   printEgo([Text("It's too heavy to\x10close.")]);
[01A5] (18) } else {
[01A8] (D8)   printEgo([Text("It's already\x10closed.")]);
[01BF] (**) }
[01BF] (00) stopObjectCode();
[01C0] (1A) Var[123] = 9;
[01C5] (00) stopObjectCode();
END

// Object 583: Ladder
Events:
   8 - 007B
   9 - 0082
   B - 001E
  5A - 0153
  5B - 0018
[0018] (1A) Var[161] = 1272;
[001D] (00) stopObjectCode();
[001E] (10) VAR_RESULT = getObjectOwner(583);
[0023] (88) if (VAR_RESULT != VAR_EGO) {
[002A] (25)   pickupObject(583,0);
[002E] (54)   setObjectName(583,"ladder");
[0038] (07)   setState(583,0);
[003C] (5D)   setClass(583,[154,153,160,6]);
[004C] (48)   if (VAR_ROOM == 48) {
[0053] (83)     VAR_RESULT = getActorRoom(Var[182]);
[0058] (C8)     unless (VAR_RESULT == VAR_ROOM) goto 005F;
[005F] (**)   }
[005F] (0A)   startScript(10,[]);
[0062] (18) } else {
[0065] (D8)   printEgo([Text("I already have it.")]);
[007A] (**) }
[007A] (00) stopObjectCode();
[007B] (79) doSentence(8,Local[0],VAR_ME);
[0081] (00) stopObjectCode();
[0082] (48) if (VAR_ROOM == 48) {
[0089] (A8)   if (Var[209]) {
[008E] (D8)     printEgo([Text("It's a ladder.")]);
[009F] (54)     setObjectName(583,"ladder");
[00A9] (5D)     setClass(583,[154]);
[00B0] (18)   } else {
[00B3] (1D)     if (classOfIs(583,[25])) {
[00BC] (1D)       if (classOfIs(583,[26])) {
[00C5] (D8)         printEgo([Text("It feels like a\x10ladder.")]);
[00DF] (54)         setObjectName(583,"ladder");
[00E9] (5D)         setClass(583,[153]);
[00F0] (**)       }
[00F0] (**)     }
[00F0] (1D)     if (classOfIs(583,[153])) {
[00F9] (D8)       printEgo([Text("It feels like a\x10ladder.")]);
[0113] (**)     }
[0113] (1D)     if (classOfIs(583,[154])) {
[011C] (D8)       printEgo([Text("It's a ladder.")]);
[012D] (**)     }
[012D] (**)   }
[012D] (18) } else {
[0130] (D8)   printEgo([Text("It's a ladder.")]);
[0141] (54)   setObjectName(583,"ladder");
[014B] (5D)   setClass(583,[154]);
[0152] (**) }
[0152] (00) stopObjectCode();
[0153] (1A) Var[123] = 9;
[0158] (00) stopObjectCode();
END

// Object 584: Broken Stairway
Events:
   8 - 001F
   9 - 0030
   A - 0018
   B - 0029
  5A - 0037
[0018] (0A) startScript(204,[10]);
[001E] (00) stopObjectCode();
[001F] (0A) startScript(204,[8,Local[0]]);
[0028] (00) stopObjectCode();
[0029] (0A) startScript(204,[11]);
[002F] (00) stopObjectCode();
[0030] (0A) startScript(204,[9]);
[0036] (00) stopObjectCode();
[0037] (1A) Var[123] = 9;
[003C] (00) stopObjectCode();
END

// Object 585: Stone Box
Events:
   3 - 0018
   4 - 0088
   8 - 00C2
   9 - 00E0
  5A - 0197
[0018] (0F) VAR_RESULT = getObjectState(585);
[001D] (48) if (VAR_RESULT == 1) {
[0024] (D8)   printEgo([Text("It's already open.")]);
[0039] (18) } else {
[003C] (07)   setState(585,1);
[0040] (1D)   if (classOfIs(585,[25])) {
[0049] (D8)     printEgo([Text("Hey!  It opens!")]);
[005B] (5D)     setClass(585,[153]);
[0062] (18)   } else {
[0065] (D8)     printEgo([Text("It's opened.")]);
[0074] (**)   }
[0074] (10)   VAR_RESULT = getObjectOwner(586);
[0079] (48)   if (VAR_RESULT == 1) {
[0080] (5D)     setClass(586,[160]);
[0087] (**)   }
[0087] (**) }
[0087] (00) stopObjectCode();
[0088] (0F) VAR_RESULT = getObjectState(585);
[008D] (48) if (VAR_RESULT == 0) {
[0094] (D8)   printEgo([Text("It's already closed.")]);
[00AB] (18) } else {
[00AE] (07)   setState(585,0);
[00B2] (D8)   printEgo([Text("It's closed.")]);
[00C1] (**) }
[00C1] (00) stopObjectCode();
[00C2] (D8) printEgo([Text("That doesn't seem to\x10work.")]);
[00DF] (00) stopObjectCode();
[00E0] (A8) if (Var[209]) {
[00E5] (D8)   printEgo([Text("It's a stone box.")]);
[00F9] (5D)   setClass(585,[154]);
[0100] (54)   setObjectName(585,"stone box");
[010D] (18) } else {
[0110] (1D)   if (classOfIs(585,[25])) {
[0119] (1D)     if (classOfIs(585,[26])) {
[0122] (D8)       printEgo([Text("It feels like a stone\x10box.")]);
[013F] (54)       setObjectName(585,"stone box");
[014C] (5D)       setClass(585,[153]);
[0153] (**)     }
[0153] (**)   }
[0153] (1D)   if (classOfIs(585,[153])) {
[015C] (D8)     printEgo([Text("It feels like a stone\x10box.")]);
[0179] (**)   }
[0179] (1D)   if (classOfIs(585,[154])) {
[0182] (D8)     printEgo([Text("It's a stone box.")]);
[0196] (**)   }
[0196] (**) }
[0196] (00) stopObjectCode();
[0197] (1A) Var[123] = 9;
[019C] (00) stopObjectCode();
END

// Object 586: Light Wand
Events:
   8 - 0054
   9 - 0097
   B - 0018
  5A - 01F3
  5B - 01DC
[0018] (10) VAR_RESULT = getObjectOwner(586);
[001D] (88) if (VAR_RESULT != VAR_EGO) {
[0024] (A5)   pickupObject(VAR_ME,0);
[0028] (0A)   startScript(144,[113,7]);
[0031] (5D)   setClass(586,[160]);
[0038] (0A)   startScript(10,[]);
[003B] (18) } else {
[003E] (D8)   printEgo([Text("I already have\x10it.")]);
[0053] (**) }
[0053] (00) stopObjectCode();
[0054] (48) if (Local[0] == 933) {
[005B] (1D)   if (classOfIs(586,[145])) {
[0064] (D8)     printEgo([Text("It's already on.")]);
[0077] (48)   } else if (VAR_ROOM == 48) {
[0081] (0A)     startScript(144,[114,3]);
[008A] (0A)     startScript(203,[]);
[008D] (**)   }
[008D] (18) } else {
[0090] (79)   doSentence(8,Local[0],VAR_ME);
[0096] (**) }
[0096] (00) stopObjectCode();
[0097] (48) if (VAR_ROOM == 48) {
[009E] (A8)   if (Var[209]) {
[00A3] (1D)     if (classOfIs(586,[26])) {
[00AC] (D8)       printEgo([Text("It's some sort of device to control the\x10lights.")]);
[00DE] (18)     } else {
[00E1] (D8)       printEgo([Text("It's a light\x10wand.")]);
[00F6] (**)     }
[00F6] (54)     setObjectName(586,"light wand");
[0104] (5D)     setClass(586,[154]);
[010B] (18)   } else {
[010E] (1D)     if (classOfIs(586,[25])) {
[0117] (D8)       printEgo([Text("It feels like a metal\x10rod^" + wait() + "^with an opening on one\x10end.")]);
[0152] (54)       setObjectName(586,"metal rod");
[015F] (5D)       setClass(586,[153]);
[0166] (**)     }
[0166] (1D)     if (classOfIs(586,[153])) {
[016F] (D8)       printEgo([Text("It's a metal rod with an opening on one\x10end.")]);
[019E] (**)     }
[019E] (1D)     if (classOfIs(586,[154])) {
[01A7] (D8)       printEgo([Text("It's a light\x10wand.")]);
[01BC] (**)     }
[01BC] (**)   }
[01BC] (18) } else {
[01BF] (D8)   printEgo([Text("It's a light wand.")]);
[01D4] (5D)   setClass(586,[154]);
[01DB] (**) }
[01DB] (00) stopObjectCode();
[01DC] (1D) if (classOfIs(586,[145])) {
[01E5] (1A)   Var[161] = 1310;
[01EA] (18) } else {
[01ED] (1A)   Var[161] = 1309;
[01F2] (**) }
[01F2] (00) stopObjectCode();
[01F3] (1A) Var[123] = 9;
[01F8] (00) stopObjectCode();
END

// Object 587: Sentry Statue
Events:
   8 - 0012
   9 - 0081
  5A - 0161
[0012] (A8) if (Var[209]) {
[0017] (48)   if (Local[0] == 933) {
[001E] (0F)     VAR_RESULT = getObjectState(582);
[0023] (48)     if (VAR_RESULT == 1) {
[002A] (D8)       printEgo([Text("I don't want to waste another\x10bead!")]);
[0050] (18)     } else {
[0053] (42)       chainScript(212,[]);
[0056] (**)     }
[0056] (18)   } else {
[0059] (0A)     startScript(3,[8]);
[005F] (**)   }
[005F] (18) } else {
[0062] (D8)   printEgo([Text("I can't see what I'm\x10doing.")]);
[0080] (**) }
[0080] (00) stopObjectCode();
[0081] (A8) if (Var[209]) {
[0086] (9D)   if (classOfIs(VAR_ME,[134])) {
[008F] (D8)     printEgo([Text("It's a statue.")]);
[00A0] (18)   } else {
[00A3] (D8)     printEgo([Text("It's a statue, and its mouth is\x10open!")]);
[00CB] (**)   }
[00CB] (5D)   setClass(587,[154]);
[00D2] (54)   setObjectName(587,"sentry statue");
[00E3] (18) } else {
[00E6] (1D)   if (classOfIs(587,[25])) {
[00EF] (1D)     if (classOfIs(587,[26])) {
[00F8] (D8)       printEgo([Text("It feels like a statue.")]);
[0112] (54)       setObjectName(587,"statue");
[011C] (5D)       setClass(587,[153]);
[0123] (**)     }
[0123] (**)   }
[0123] (1D)   if (classOfIs(587,[153])) {
[012C] (D8)     printEgo([Text("It feels like a\x10statue.")]);
[0146] (**)   }
[0146] (1D)   if (classOfIs(587,[154])) {
[014F] (D8)     printEgo([Text("It's a statue.")]);
[0160] (**)   }
[0160] (**) }
[0160] (00) stopObjectCode();
[0161] (1A) Var[123] = 9;
[0166] (00) stopObjectCode();
END

// Object 588: Cave-in
Events:
   9 - 000F
  5A - 0075
[000F] (48) if (Var[238] == 2) {
[0016] (D8)   printEgo([Text("It's the subway exit I crashed\x10through.")]);
[0040] (18) } else {
[0043] (D8)   printEgo([Text("Looks like some sort of tunnel collapsed\x10here.")]);
[0074] (**) }
[0074] (00) stopObjectCode();
[0075] (1A) Var[123] = 9;
[007A] (00) stopObjectCode();
END

// Object 589: Spindle
Events:
   6 - 012E
   7 - 012E
   8 - 012E
   9 - 0021
   B - 02DB
  5A - 001B
[001B] (1A) Var[123] = 9;
[0020] (00) stopObjectCode();
[0021] (A8) if (Var[209]) {
[0026] (A8)   if (Bit[650]) {
[002B] (D8)     printEgo([Text("If this weren't just a DEMO I'd get a better look, I'll\x10bet.")]);
[006A] (18)   } else {
[006D] (D8)     printEgo([Text("It looks like it a spindle for the stone\x10disks.")]);
[009F] (5D)     setClass(589,[154,153]);
[00A9] (**)   }
[00A9] (18) } else {
[00AC] (40)   cutscene([2]);
[00B1] (11)   animateCostume(1,12);
[00B4] (80)   breakHere();
[00B5] (80)   breakHere();
[00B6] (80)   breakHere();
[00B7] (80)   breakHere();
[00B8] (11)   animateCostume(1,3);
[00BB] (C0)   endCutscene();
[00BC] (0F)   VAR_RESULT = getObjectState(589);
[00C1] (48)   if (VAR_RESULT == 0) {
[00C8] (D8)     printEgo([Text("It feels like a spindle for the stone\x10disks.")]);
[00F7] (54)     setObjectName(589,"spindle");
[0102] (5D)     setClass(589,[154,153]);
[010C] (18)   } else {
[010F] (D8)     printEgo([Text("It feels like a stone\x10disk.")]);
[012D] (**)   }
[012D] (**) }
[012D] (00) stopObjectCode();
[012E] (48) if (Local[0] == 934) {
[0135] (40)   cutscene([2]);
[013A] (11)   animateCostume(1,12);
[013D] (80)   breakHere();
[013E] (80)   breakHere();
[013F] (80)   breakHere();
[0140] (80)   breakHere();
[0141] (11)   animateCostume(1,3);
[0144] (C0)   endCutscene();
[0145] (1A)   Bit[650] = 1;
[014A] (1A)   Var[244] = 2;
[014F] (07)   setState(589,1);
[0153] (29)   setOwnerOf(934,0);
[0157] (29)   setOwnerOf(934,15);
[015B] (54)   setObjectName(589,"Sunstone");
[0167] (0A)   startScript(10,[1]);
[016D] (48) } else if (Local[0] == 935) {
[0177] (40)   cutscene([2]);
[017C] (11)   animateCostume(1,12);
[017F] (80)   breakHere();
[0180] (80)   breakHere();
[0181] (80)   breakHere();
[0182] (80)   breakHere();
[0183] (11)   animateCostume(1,3);
[0186] (C0)   endCutscene();
[0187] (A8)   if (Bit[650]) {
[018C] (1A)     Bit[651] = 1;
[0191] (1A)     Var[245] = 2;
[0196] (07)     setState(589,2);
[019A] (29)     setOwnerOf(935,0);
[019E] (29)     setOwnerOf(935,15);
[01A2] (54)     setObjectName(589,"Moonstone");
[01AF] (0A)     startScript(10,[1]);
[01B5] (18)   } else {
[01B8] (D8)     printEgo([Text("It doesn't seem to fit\x10properly.")]);
[01DB] (**)   }
[01DB] (48) } else if (Local[0] == 936) {
[01E5] (40)   cutscene([2]);
[01EA] (11)   animateCostume(1,12);
[01ED] (80)   breakHere();
[01EE] (80)   breakHere();
[01EF] (80)   breakHere();
[01F0] (80)   breakHere();
[01F1] (11)   animateCostume(1,3);
[01F4] (C0)   endCutscene();
[01F5] (A8)   if (Bit[651]) {
[01FA] (1A)     Bit[652] = 1;
[01FF] (1A)     Var[246] = 1;
[0204] (07)     setState(589,3);
[0208] (29)     setOwnerOf(936,0);
[020C] (29)     setOwnerOf(936,15);
[0210] (54)     setObjectName(589,"Worldstone");
[021E] (0A)     startScript(10,[1]);
[0224] (18)   } else {
[0227] (D8)     printEgo([Text("It doesn't seem to fit\x10properly.")]);
[024A] (**)   }
[024A] (A8) } else if (Bit[650]) {
[0252] (A8)   if (Var[209]) {
[0257] (40)     cutscene([2]);
[025C] (11)     animateCostume(1,12);
[025F] (80)     breakHere();
[0260] (80)     breakHere();
[0261] (80)     breakHere();
[0262] (80)     breakHere();
[0263] (11)     animateCostume(1,3);
[0266] (C0)     endCutscene();
[0267] (D8)     printEgo([Text("If this weren't just a DEMO something would happen, I'll\x10bet.")]);
[02A7] (18)   } else {
[02AA] (D8)     printEgo([Text("It's too dark to see what I'm\x10doing.")]);
[02D1] (**)   }
[02D1] (18) } else {
[02D4] (42)   chainScript(3,[8]);
[02DA] (**) }
[02DA] (00) stopObjectCode();
[02DB] (40) cutscene([2]);
[02E0] (11) animateCostume(1,12);
[02E3] (80) breakHere();
[02E4] (80) breakHere();
[02E5] (80) breakHere();
[02E6] (80) breakHere();
[02E7] (11) animateCostume(1,3);
[02EA] (C0) endCutscene();
[02EB] (10) VAR_RESULT = getObjectOwner(936);
[02F0] (48) if (VAR_RESULT == 15) {
[02F7] (18)   goto 0330;
[02FA] (18) } else {
[02FD] (18)   goto 0330;
[0300] (10)   VAR_RESULT = getObjectOwner(935);
[0305] (48)   if (VAR_RESULT == 15) {
[030C] (25)     pickupObject(935,68);
[0310] (54)     setObjectName(589,"Sunstone");
[031C] (1A)     Bit[651] = 0;
[0321] (1A)     Bit[653] = 0;
[0326] (07)     setState(589,1);
[032A] (0A)     startScript(10,[]);
[032D] (18)   } else {
[0330] (10)     VAR_RESULT = getObjectOwner(934);
[0335] (48)     if (VAR_RESULT == 15) {
[033C] (25)       pickupObject(934,68);
[0340] (54)       setObjectName(589,"spindle");
[034B] (1A)       Bit[650] = 0;
[0350] (1A)       Bit[653] = 0;
[0355] (07)       setState(589,0);
[0359] (0A)       startScript(10,[]);
[035C] (18)     } else {
[035F] (D8)       printEgo([Text("I can't pick that\x10up.")]);
[0377] (**)     }
[0377] (**)   }
[0377] (**) }
[0377] (00) stopObjectCode();
END
