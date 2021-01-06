/**
 * Indiana Jones and the Fate of Atlantis: CD Demo
 * 
 * Room 68: German Research Lab
 */

// ENCD
[0000] (33) SetScreen(0,200);
[0006] (0A) startScript(19,[1]);
[000C] (62) stopScript(1);
[000E] (05) drawObject(849);
[0012] (13) ActorOps(4,[Costume(20),TalkColor(14),FollowBoxes(),Elevation(0)]);
[001D] (13) ActorOps(12,[Init(),Costume(36),TalkColor(11)]);
[0025] (13) ActorOps(9,[Init(),Costume(16),IgnoreBoxes(),NeverZClip()]);
[002D] (13) ActorOps(8,[Init(),Costume(16),InitAnimNr(8),WalkAnimNr(8),WalkSpeed(6,6)]);
[003A] (5D) setClass(12,[0]);
[0041] (13) ActorOps(11,[Init(),Costume(35),WalkSpeed(16,4),StandAnimNr(3),WalkAnimNr(2),IgnoreBoxes(),SetZClip(1)]);
[0051] (2D) putActorInRoom(12,62);
[0054] (01) putActor(12,360,130);
[005A] (2D) putActorInRoom(4,62);
[005D] (01) putActor(4,80,80);
[0063] (05) drawObject(842setImage(,1));
[0069] (1A) VAR_EGO = 4;
[006E] (42) chainScript(214,[]);
[0071] (00) stopObjectCode();
END

// EXCD
[0000] (13) ActorOps(5,[Init()]);
[0004] (33) SetScreen(0,144);
[000A] (0A) startScript(19,[2]);
[0010] (4C) soundKludge([257,140,0]);
[001B] (4C) soundKludge([-1]);
[0020] (00) stopObjectCode();
END

Script# 200
[0000] (16) Local[1] = getRandomNr(2);
[0004] (48) if (Local[1] == 0) {
[000B] (05)   drawObject(839setImage(,1));
[0011] (48) } else if (Local[1] == 1) {
[001B] (05)   drawObject(839setImage(,2));
[0021] (48) } else if (Local[1] == 2) {
[002B] (05)   drawObject(839setImage(,3));
[0031] (18)   /* goto 0034; */
[0034] (**) }
[0034] (80) breakHere();
[0035] (48) if (Local[1] == 0) {
[003C] (05)   drawObject(839setImage(,3));
[0042] (48) } else if (Local[1] == 1) {
[004C] (05)   drawObject(839setImage(,1));
[0052] (48) } else if (Local[1] == 2) {
[005C] (05)   drawObject(839setImage(,2));
[0062] (18)   /* goto 0065; */
[0065] (**) }
[0065] (80) breakHere();
[0066] (05) drawObject(845);
[006A] (16) Local[0] = getRandomNr(20);
[006E] (5A) Local[0] += 1;
[0073] (9B) Local[0] *= VAR_TIMER_NEXT;
[0078] (2B) delayVariable(Local[0]);
[007B] (18) goto 0000;
[007E] (A0) stopObjectCode();
END

Script# 201
[0000] (16) Local[0] = getRandomNr(2);
[0004] (48) if (Local[0] == 0) {
[000B] (05)   drawObject(839setImage(,1));
[0011] (48) } else if (Local[0] == 1) {
[001B] (05)   drawObject(839setImage(,2));
[0021] (48) } else if (Local[0] == 2) {
[002B] (05)   drawObject(839setImage(,3));
[0031] (18)   /* goto 0034; */
[0034] (**) }
[0034] (80) breakHere();
[0035] (18) goto 0000;
[0038] (A0) stopObjectCode();
END

Script# 202
[0000] (80) breakHere();
[0001] (AC) Exprmode Local[4] = <VAR_RESULT = getActorWalkBox(4)>;
[000A] (48) if (Local[4] == 1) {
[0011] (43)   Local[1] = getActorX(4);
[0016] (44)   if (Local[1] > 100) {
[001D] (AC)     Exprmode Local[2] = (Local[1] - 100);
[0028] (AC)     Exprmode Local[3] = (Local[2] / 2);
[0033] (AC)     Exprmode Local[0] = (Local[3] + 160);
[003E] (**)   }
[003E] (13)   ActorOps(4,[Scale(Local[0],Local[0])]);
[0046] (**) }
[0046] (18) goto 0000;
[0049] (A0) stopObjectCode();
END

Script# 203
[0000] (1A) Local[1] = 1;
[0005] (05) drawObject(842setImage(,2));
[000B] (80) breakHere();
[000C] (05) drawObject(842setImage(,3));
[0012] (80) breakHere();
[0013] (05) drawObject(842setImage(,1));
[0019] (80) breakHere();
[001A] (46) Local[1]++;
[001D] (C4) unless (Local[1] > Local[0]) goto 0005;
[0024] (A0) stopObjectCode();
END

Script# 204
[0000] (48) if (Local[0] == 1) {
[0007] (05)   drawObject(842setImage(,1));
[000D] (80)   breakHere();
[000E] (48) } else if (Local[0] == 2) {
[0018] (05)   drawObject(842setImage(,2));
[001E] (80)   breakHere();
[001F] (48) } else if (Local[0] == 3) {
[0029] (05)   drawObject(842setImage(,3));
[002F] (80)   breakHere();
[0030] (18)   /* goto 0033; */
[0033] (**) }
[0033] (A0) stopObjectCode();
END

Script# 205
[0000] (09) faceActor(4,11);
[0004] (09) faceActor(12,11);
[0008] (80) breakHere();
[0009] (80) breakHere();
[000A] (18) goto 0000;
[000D] (A0) stopObjectCode();
END

Script# 206 // Kerner and Ubermann cutscene
[0000] (40) cutscene([1]);
[0005] (14) print(253,[Text("bts:" + getInt(VAR_CHARINC))]);
[0011] (9A) Local[2] = VAR_CHARINC;
[0016] (1A) VAR_CHARINC = 3;
[001B] (58) beginOverride();
[001D] (18) goto 0AD3;
[0020] (07) setState(840,0);
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (80) breakHere();
[0027] (80) breakHere();
[0028] (80) breakHere();
[0029] (80) breakHere();
[002A] (14) print(255,[Color(127),Center(),Pos(160,130),Text("A RESEARCH LABORATORY" + newline() + "SOMEWHERE IN GERMANY")]);
[0061] (AE) WaitForMessage();
[0063] (80) breakHere();
[0064] (80) breakHere();
[0065] (80) breakHere();
[0066] (80) breakHere();
[0067] (07) setState(840,1);
[006B] (1C) startSound(192);
[006D] (80) breakHere();
[006E] (80) breakHere();
[006F] (80) breakHere();
[0070] (80) breakHere();
[0071] (1E) walkActorTo(4,135,84);
[0077] (AE) WaitForActor(4);
[007A] (11) animateCostume(4,245);
[007D] (14) print(4,[Text(sound(0x8, 0xA) + "Dr. Ubermann!")]);
[009E] (AE) WaitForMessage();
[00A0] (14) print(4,[Text(sound(0x36AC, 0xA) + "Fantastic news^")]);
[00C3] (80) breakHere();
[00C4] (80) breakHere();
[00C5] (80) breakHere();
[00C6] (80) breakHere();
[00C7] (1E) walkActorTo(4,220,115);
[00CD] (1E) walkActorTo(12,250,130);
[00D3] (AE) WaitForActor(12);
[00D6] (AE) WaitForMessage();
[00D8] (14) print(12,[Text(sound(0x5D589, 0x12) + "Kerner^at last!")]);
[00FB] (AE) WaitForMessage();
[00FD] (12) panCameraTo(216);
[0100] (AE) WaitForCamera();
[0102] (AE) WaitForActor(4);
[0105] (09) faceActor(4,12);
[0109] (AE) WaitForMessage();
[010B] (09) faceActor(4,12);
[010F] (80) breakHere();
[0110] (80) breakHere();
[0111] (09) faceActor(12,4);
[0115] (80) breakHere();
[0116] (80) breakHere();
[0117] (14) print(4,[Text(sound(0x7392, 0xE) + "See what Herr Jones" + newline() + "has\x10kindly provided!")]);
[0154] (AE) WaitForMessage();
[0156] (11) animateCostume(4,22);
[0159] (13) ActorOps(11,[Elevation(21),NeverZClip()]);
[0160] (2D) putActorInRoom(11,62);
[0163] (01) putActor(11,235,116);
[0169] (80) breakHere();
[016A] (80) breakHere();
[016B] (80) breakHere();
[016C] (11) animateCostume(4,3);
[016F] (80) breakHere();
[0170] (11) animateCostume(12,247);
[0173] (80) breakHere();
[0174] (14) print(12,[Text(sound(0x63257, 0xA) + "What on earth?")]);
[0196] (AE) WaitForMessage();
[0198] (14) print(4,[Text(sound(0x117A5, 0xA) + "Isn't it amazing?" + startAnim(23))]);
[01C1] (80) breakHere();
[01C2] (80) breakHere();
[01C3] (80) breakHere();
[01C4] (80) breakHere();
[01C5] (80) breakHere();
[01C6] (80) breakHere();
[01C7] (80) breakHere();
[01C8] (80) breakHere();
[01C9] (80) breakHere();
[01CA] (80) breakHere();
[01CB] (80) breakHere();
[01CC] (80) breakHere();
[01CD] (80) breakHere();
[01CE] (80) breakHere();
[01CF] (80) breakHere();
[01D0] (1E) walkActorTo(12,350,120);
[01D6] (AE) WaitForActor(12);
[01D9] (1E) walkActorTo(12,250,115);
[01DF] (AE) WaitForMessage();
[01E1] (AE) WaitForActor(12);
[01E4] (14) print(12,[Text(sound(0x671CA, 0x16) + "You fool!" + wait() + "You've come back to show me this^" + wait() + "^this^this^" + startAnim(9))]);
[0235] (AE) WaitForMessage();
[0237] (11) animateCostume(12,1);
[023A] (14) print(12,[Text(sound(0x71BB1, 0xE) + "^prehistoric knick-knack!?")]);
[0268] (AE) WaitForMessage();
[026A] (14) print(4,[Text(sound(0x15C7C, 0x12) + "Herr Doktor^ " + startAnim(24) + " " + wait() + "I believe this knick-knack, as you call it," + newline() + "comes from the Lost\x10City." + startAnim(25) + " ")]);
[02DD] (AE) WaitForMessage();
[02DF] (11) animateCostume(4,1);
[02E2] (80) breakHere();
[02E3] (09) faceActor(12,4);
[02E7] (80) breakHere();
[02E8] (80) breakHere();
[02E9] (09) faceActor(4,12);
[02ED] (80) breakHere();
[02EE] (80) breakHere();
[02EF] (14) print(12,[Text(sound(0x773F6, 0x12) + "Then we have failed!" + wait() + "I see no evidence here" + newline() + "of the magical metal Plato called^" + wait() + "^ORICHALCUM.")]);
[0361] (AE) WaitForMessage();
[0363] (14) print(4,[Text(sound(0x22082, 0x12) + "Look here!" + startAnim(10)wait() + "Concealed in the base is this" + newline() + "small shiny bead^ " + startAnim(11))]);
[03BC] (AE) WaitForMessage();
[03BE] (11) animateCostume(4,22);
[03C1] (80) breakHere();
[03C2] (80) breakHere();
[03C3] (80) breakHere();
[03C4] (80) breakHere();
[03C5] (11) animateCostume(12,10);
[03C8] (80) breakHere();
[03C9] (80) breakHere();
[03CA] (80) breakHere();
[03CB] (80) breakHere();
[03CC] (80) breakHere();
[03CD] (11) animateCostume(4,3);
[03D0] (80) breakHere();
[03D1] (11) animateCostume(12,3);
[03D4] (80) breakHere();
[03D5] (80) breakHere();
[03D6] (AE) WaitForMessage();
[03D8] (11) animateCostume(12,245);
[03DB] (80) breakHere();
[03DC] (80) breakHere();
[03DD] (11) animateCostume(12,17);
[03E0] (80) breakHere();
[03E1] (13) ActorOps(7,[Init(),Costume(163),IgnoreBoxes(),NeverZClip()]);
[03E9] (2D) putActorInRoom(7,62);
[03EC] (01) putActor(7,258,76);
[03F2] (11) animateCostume(7,250);
[03F5] (11) animateCostume(7,7);
[03F8] (14) print(255,[Color(11),Center(),Pos(180,40),Text(sound(0xB6E2B, 0x12) + "^and it GLITTERS LIKE FIRE^" + wait() + "^exactly as Plato described!")]);
[044D] (4C) soundKludge([267,140,0,1]);
[045B] (4C) soundKludge([278,140,0,0]);
[0469] (4A) startScript(218,[0,127,8,1],R);
[0478] (4A) startScript(218,[102,0,8,0],R);
[0487] (AE) WaitForMessage();
[0489] (2D) putActorInRoom(7,0);
[048C] (11) animateCostume(12,1);
[048F] (14) print(4,[Text(sound(0x2CD00, 0x16) + "It's my guess we've found" + newline() + "the treasure we seek." + startAnim(23))]);
[04D7] (80) breakHere();
[04D8] (11) animateCostume(12,244);
[04DB] (AE) WaitForMessage();
[04DD] (14) print(12,[Center(),Pos(180,40),Text(sound(0xC4419, 0xE) + "I never guess.")]);
[0505] (AE) WaitForMessage();
[0507] (14) print(12,[Text(sound(0x896BD, 0x12) + "We must TEST!")]);
[0528] (AE) WaitForMessage();
[052A] (1E) walkActorTo(12,265,115);
[0530] (AE) WaitForActor(12);
[0533] (2D) putActorInRoom(7,62);
[0536] (01) putActor(7,265,94);
[053C] (11) animateCostume(7,250);
[053F] (11) animateCostume(7,7);
[0542] (11) animateCostume(12,246);
[0545] (80) breakHere();
[0546] (80) breakHere();
[0547] (07) setState(849,0);
[054B] (13) ActorOps(10,[Init(),Costume(143),IgnoreBoxes(),NeverZClip()]);
[0553] (6D) putActorInRoom(10,VAR_ROOM);
[0557] (01) putActor(10,263,94);
[055D] (80) breakHere();
[055E] (80) breakHere();
[055F] (80) breakHere();
[0560] (80) breakHere();
[0561] (2D) putActorInRoom(7,0);
[0564] (2D) putActorInRoom(7,0);
[0567] (13) ActorOps(7,[Init(),Name(" ")]);
[056E] (5D) setClass(7,[0]);
[0575] (13) ActorOps(12,[Costume(142)]);
[057A] (11) animateCostume(12,6);
[057D] (11) animateCostume(10,6);
[0580] (80) breakHere();
[0581] (80) breakHere();
[0582] (80) breakHere();
[0583] (80) breakHere();
[0584] (80) breakHere();
[0585] (80) breakHere();
[0586] (4C) soundKludge([278,140,4,102]);
[0594] (4C) soundKludge([263,140,1,4,400]);
[05A5] (11) animateCostume(10,7);
[05A8] (80) breakHere();
[05A9] (11) animateCostume(4,25);
[05AC] (80) breakHere();
[05AD] (0A) startScript(210,[1]);
[05B3] (0A) startScript(215,[]);
[05B6] (80) breakHere();
[05B7] (80) breakHere();
[05B8] (80) breakHere();
[05B9] (80) breakHere();
[05BA] (80) breakHere();
[05BB] (80) breakHere();
[05BC] (80) breakHere();
[05BD] (80) breakHere();
[05BE] (13) ActorOps(4,[Costume(241)]);
[05C3] (2A) startScript(209,[],F);
[05C6] (80) breakHere();
[05C7] (80) breakHere();
[05C8] (80) breakHere();
[05C9] (80) breakHere();
[05CA] (80) breakHere();
[05CB] (80) breakHere();
[05CC] (80) breakHere();
[05CD] (80) breakHere();
[05CE] (80) breakHere();
[05CF] (80) breakHere();
[05D0] (2A) startScript(211,[],F);
[05D3] (80) breakHere();
[05D4] (80) breakHere();
[05D5] (80) breakHere();
[05D6] (80) breakHere();
[05D7] (80) breakHere();
[05D8] (80) breakHere();
[05D9] (80) breakHere();
[05DA] (80) breakHere();
[05DB] (80) breakHere();
[05DC] (80) breakHere();
[05DD] (80) breakHere();
[05DE] (80) breakHere();
[05DF] (11) animateCostume(12,1);
[05E2] (80) breakHere();
[05E3] (11) animateCostume(12,7);
[05E6] (11) animateCostume(10,8);
[05E9] (80) breakHere();
[05EA] (80) breakHere();
[05EB] (80) breakHere();
[05EC] (80) breakHere();
[05ED] (80) breakHere();
[05EE] (2D) putActorInRoom(10,0);
[05F1] (05) drawObject(849);
[05F5] (62) stopScript(215);
[05F7] (0A) startScript(216,[0]);
[05FD] (13) ActorOps(12,[Costume(36)]);
[0602] (80) breakHere();
[0603] (30) setBoxFlags(5,8);
[0607] (30) setBoxFlags(4,8);
[060B] (1E) walkActorTo(12,235,115);
[0611] (1E) walkActorTo(4,200,115);
[0617] (AE) WaitForActor(12);
[061A] (AE) WaitForActor(4);
[061D] (14) print(4,[Text(sound(0x35A9E, 0xE) + "Mein Gott!")]);
[063B] (30) setBoxFlags(5,0);
[063F] (30) setBoxFlags(4,0);
[0643] (0A) startScript(203,[8]);
[0649] (0A) startScript(200,[]);
[064C] (80) breakHere();
[064D] (80) breakHere();
[064E] (80) breakHere();
[064F] (80) breakHere();
[0650] (80) breakHere();
[0651] (80) breakHere();
[0652] (62) stopScript(200);
[0654] (2A) startScript(201,[],F);
[0657] (07) setState(843,0);
[065B] (11) animateCostume(12,1);
[065E] (80) breakHere();
[065F] (68) VAR_RESULT = isScriptRunning(209);
[0663] (28) unless (!VAR_RESULT) goto 065E;
[0668] (0A) startScript(217,[]);
[066B] (13) ActorOps(4,[Costume(20)]);
[0670] (1E) walkActorTo(12,265,115);
[0676] (AE) WaitForActor(12);
[0679] (11) animateCostume(4,1);
[067C] (80) breakHere();
[067D] (11) animateCostume(12,246);
[0680] (80) breakHere();
[0681] (80) breakHere();
[0682] (14) print(12,[Text(sound(0x8D11E, 0xE) + "We've done it!")]);
[06A4] (11) animateCostume(4,20);
[06A7] (80) breakHere();
[06A8] (80) breakHere();
[06A9] (80) breakHere();
[06AA] (80) breakHere();
[06AB] (80) breakHere();
[06AC] (80) breakHere();
[06AD] (80) breakHere();
[06AE] (80) breakHere();
[06AF] (80) breakHere();
[06B0] (80) breakHere();
[06B1] (80) breakHere();
[06B2] (AE) WaitForMessage();
[06B4] (11) animateCostume(4,1);
[06B7] (80) breakHere();
[06B8] (11) animateCostume(4,245);
[06BB] (AE) WaitForMessage();
[06BD] (62) stopScript(207);
[06BF] (07) setState(846,0);
[06C3] (62) stopScript(201);
[06C5] (05) drawObject(845);
[06C9] (11) animateCostume(12,1);
[06CC] (80) breakHere();
[06CD] (14) print(12,[Text(sound(0x8FBF3, 0xA) + "The energy of URANIUM^" + newline() + "without ANY radioactivity!" + wait() + "And those smug American scientists know\x10nothing!")]);
[0745] (AE) WaitForMessage();
[0747] (1E) walkActorTo(4,225,115);
[074D] (AE) WaitForActor(4);
[0750] (11) animateCostume(4,18);
[0753] (80) breakHere();
[0754] (80) breakHere();
[0755] (80) breakHere();
[0756] (80) breakHere();
[0757] (80) breakHere();
[0758] (80) breakHere();
[0759] (80) breakHere();
[075A] (80) breakHere();
[075B] (80) breakHere();
[075C] (80) breakHere();
[075D] (14) print(4,[Text(sound(0x37FA8, 0xE) + "That gives me an\x10idea!")]);
[0787] (80) breakHere();
[0788] (80) breakHere();
[0789] (80) breakHere();
[078A] (80) breakHere();
[078B] (09) faceActor(12,4);
[078F] (80) breakHere();
[0790] (80) breakHere();
[0791] (80) breakHere();
[0792] (80) breakHere();
[0793] (80) breakHere();
[0794] (80) breakHere();
[0795] (80) breakHere();
[0796] (80) breakHere();
[0797] (1E) walkActorTo(12,250,115);
[079D] (AE) WaitForActor(12);
[07A0] (09) faceActor(12,4);
[07A4] (AE) WaitForMessage();
[07A6] (14) print(4,[Text(sound(0x3CC82, 0x1A) + "Suppose I place the bead inside" + newline() + "the statue's open\x10MOUTH!" + startAnim(22))]);
[07F7] (0A) startScript(219,[]);
[07FA] (80) breakHere();
[07FB] (68) VAR_RESULT = isScriptRunning(219);
[07FF] (28) unless (!VAR_RESULT) goto 07FA;
[0804] (4C) soundKludge([269,140,50,360]);
[0812] (AE) WaitForMessage();
[0814] (11) animateCostume(4,16);
[0817] (80) breakHere();
[0818] (80) breakHere();
[0819] (80) breakHere();
[081A] (80) breakHere();
[081B] (11) animateCostume(4,3);
[081E] (14) print(255,[Text(sound(0xC8FBC, 0xE))]);
[0832] (4C) soundKludge([-1]);
[0837] (4C) soundKludge([258,52,105]);
[0842] (4C) soundKludge([-1]);
[0847] (0A) startScript(213,[11,52]);
[0850] (0A) startScript(212,[11,52]);
[0859] (1E) walkActorTo(11,220,116);
[085F] (AE) WaitForActor(11);
[0862] (1E) walkActorTo(11,275,116);
[0868] (AE) WaitForActor(11);
[086B] (1E) walkActorTo(11,220,116);
[0871] (AE) WaitForActor(11);
[0874] (13) ActorOps(11,[Elevation(0),IgnoreBoxes()]);
[087B] (1E) walkActorTo(11,180,120);
[0881] (AE) WaitForActor(11);
[0884] (2A) startScript(205,[],F);
[0887] (13) ActorOps(11,[Init(),FollowBoxes(),WalkSpeed(16,4)]);
[088F] (1E) walkActorTo(11,265,130);
[0895] (AE) WaitForActor(11);
[0898] (1E) walkActorTo(11,350,120);
[089E] (AE) WaitForActor(11);
[08A1] (1E) walkActorTo(11,265,114);
[08A7] (AE) WaitForActor(11);
[08AA] (1E) walkActorTo(11,180,120);
[08B0] (AE) WaitForActor(11);
[08B3] (1E) walkActorTo(11,280,130);
[08B9] (AE) WaitForActor(11);
[08BC] (1E) walkActorTo(11,200,130);
[08C2] (AE) WaitForActor(11);
[08C5] (12) panCameraTo(296);
[08C8] (1E) walkActorTo(11,422,126);
[08CE] (AE) WaitForActor(11);
[08D1] (14) print(255,[Text(sound(0xE1DAA, 0xA))]);
[08E5] (2D) putActorInRoom(9,62);
[08E8] (01) putActor(9,422,126);
[08EE] (62) stopScript(205);
[08F0] (11) animateCostume(9,10);
[08F3] (2D) putActorInRoom(11,0);
[08F6] (05) drawObject(841);
[08FA] (4C) soundKludge([258,140,127]);
[0905] (4C) soundKludge([263,140,5,4,400]);
[0916] (4C) soundKludge([9,52]);
[091E] (80) breakHere();
[091F] (33) ShakeOn();
[0921] (80) breakHere();
[0922] (80) breakHere();
[0923] (2D) putActorInRoom(9,0);
[0926] (62) stopScript(212);
[0928] (62) stopScript(213);
[092A] (80) breakHere();
[092B] (80) breakHere();
[092C] (80) breakHere();
[092D] (80) breakHere();
[092E] (80) breakHere();
[092F] (33) ShakeOff();
[0931] (AE) WaitForCamera();
[0933] (62) stopScript(205);
[0935] (1E) walkActorTo(4,270,130);
[093B] (11) animateCostume(12,245);
[093E] (80) breakHere();
[093F] (80) breakHere();
[0940] (11) animateCostume(12,14);
[0943] (80) breakHere();
[0944] (80) breakHere();
[0945] (80) breakHere();
[0946] (80) breakHere();
[0947] (80) breakHere();
[0948] (80) breakHere();
[0949] (80) breakHere();
[094A] (14) print(4,[Text(sound(0x4B061, 0xA) + "You saw that?")]);
[096B] (AE) WaitForActor(4);
[096E] (AE) WaitForMessage();
[0970] (14) print(4,[Text(sound(0x4D8C3, 0x1A) + "Think of TRUCKS powered by these beads.")]);
[09AB] (AE) WaitForMessage();
[09AD] (1E) walkActorTo(4,295,130);
[09B3] (AE) WaitForActor(4);
[09B6] (14) print(4,[Text(sound(0x54BE9, 0x12) + "Think of TANKS!")]);
[09D9] (AE) WaitForMessage();
[09DB] (1E) walkActorTo(4,320,130);
[09E1] (AE) WaitForActor(4);
[09E4] (14) print(4,[Text(sound(0x581E3, 0x12) + "Think of AIRPLANES! " + startAnim(15))]);
[0A10] (AE) WaitForMessage();
[0A12] (11) animateCostume(12,15);
[0A15] (80) breakHere();
[0A16] (80) breakHere();
[0A17] (80) breakHere();
[0A18] (80) breakHere();
[0A19] (80) breakHere();
[0A1A] (80) breakHere();
[0A1B] (11) animateCostume(4,16);
[0A1E] (11) animateCostume(12,1);
[0A21] (80) breakHere();
[0A22] (80) breakHere();
[0A23] (1E) walkActorTo(12,390,120);
[0A29] (AE) WaitForActor(12);
[0A2C] (14) print(12,[Text(sound(0xA55DE, 0xA) + "Use your imagination,\x10Kerner!")]);
[0A5D] (AE) WaitForMessage();
[0A5F] (09) faceActor(12,4);
[0A63] (80) breakHere();
[0A64] (80) breakHere();
[0A65] (14) print(12,[Text(sound(0xABFA0, 0xE) + "Think BIG like the\x10Americans^")]);
[0A96] (AE) WaitForMessage();
[0A98] (0A) startScript(219,[]);
[0A9B] (80) breakHere();
[0A9C] (68) VAR_RESULT = isScriptRunning(219);
[0AA0] (28) unless (!VAR_RESULT) goto 0A9B;
[0AA5] (14) print(12,[Text(sound(0xB1ED9, 0x8) + "^think of BOMBS!" + startAnim(22))]);
[0ACD] (AE) WaitForMessage();
[0ACF] (2E) delay(45);
[0AD3] (A8) if (VAR_OVERRIDE) {
[0AD8] (4C)   soundKludge([11]);
[0ADD] (4C)   soundKludge([-1]);
[0AE2] (**) }
[0AE2] (58) endOverride();
[0AE4] (9A) VAR_CHARINC = Local[2];
[0AE9] (C0) endCutscene();
[0AEA] (1A) Bit[211] = 1;
[0AEF] (98) systemOps(1);
[0AF1] (A0) stopObjectCode();
END

Script# 207
[0000] (1A) Local[0] = 1;
[0005] (05) drawObject(846setImage(,Local[0]));
[000B] (80) breakHere();
[000C] (46) Local[0]++;
[000F] (44) unless (Local[0] > 4) goto 0005;
[0016] (80) breakHere();
[0017] (80) breakHere();
[0018] (80) breakHere();
[0019] (80) breakHere();
[001A] (80) breakHere();
[001B] (18) goto 0000;
[001E] (A0) stopObjectCode();
END

Script# 208
[0000] (1A) Local[0] = 1;
[0005] (05) drawObject(843setImage(,Local[0]));
[000B] (80) breakHere();
[000C] (46) Local[0]++;
[000F] (44) unless (Local[0] > 3) goto 0005;
[0016] (16) Local[1] = getRandomNr(103);
[001A] (5A) Local[1] += 1;
[001F] (2B) delayVariable(Local[1]);
[0022] (18) goto 0000;
[0025] (A0) stopObjectCode();
END

Script# 209
[0000] (0C) Resource.loadCostume(16);
[0003] (05) drawObject(848setImage(,1));
[0009] (80) breakHere();
[000A] (05) drawObject(848setImage(,10));
[0010] (80) breakHere();
[0011] (05) drawObject(848setImage(,2));
[0017] (80) breakHere();
[0018] (05) drawObject(848setImage(,10));
[001E] (80) breakHere();
[001F] (05) drawObject(848setImage(,1));
[0025] (80) breakHere();
[0026] (05) drawObject(848setImage(,10));
[002C] (80) breakHere();
[002D] (05) drawObject(848setImage(,2));
[0033] (80) breakHere();
[0034] (05) drawObject(848setImage(,10));
[003A] (80) breakHere();
[003B] (05) drawObject(848setImage(,1));
[0041] (80) breakHere();
[0042] (05) drawObject(848setImage(,10));
[0048] (80) breakHere();
[0049] (05) drawObject(848setImage(,2));
[004F] (80) breakHere();
[0050] (05) drawObject(848setImage(,10));
[0056] (80) breakHere();
[0057] (05) drawObject(848setImage(,3));
[005D] (80) breakHere();
[005E] (05) drawObject(848setImage(,10));
[0064] (80) breakHere();
[0065] (05) drawObject(848setImage(,2));
[006B] (80) breakHere();
[006C] (05) drawObject(848setImage(,10));
[0072] (80) breakHere();
[0073] (05) drawObject(848setImage(,3));
[0079] (80) breakHere();
[007A] (05) drawObject(848setImage(,10));
[0080] (80) breakHere();
[0081] (05) drawObject(848setImage(,4));
[0087] (80) breakHere();
[0088] (05) drawObject(848setImage(,10));
[008E] (80) breakHere();
[008F] (05) drawObject(848setImage(,3));
[0095] (80) breakHere();
[0096] (05) drawObject(848setImage(,10));
[009C] (80) breakHere();
[009D] (05) drawObject(848setImage(,4));
[00A3] (80) breakHere();
[00A4] (05) drawObject(848setImage(,10));
[00AA] (80) breakHere();
[00AB] (05) drawObject(848setImage(,5));
[00B1] (80) breakHere();
[00B2] (05) drawObject(848setImage(,10));
[00B8] (80) breakHere();
[00B9] (05) drawObject(848setImage(,6));
[00BF] (80) breakHere();
[00C0] (05) drawObject(848setImage(,10));
[00C6] (80) breakHere();
[00C7] (05) drawObject(848setImage(,5));
[00CD] (80) breakHere();
[00CE] (05) drawObject(848setImage(,10));
[00D4] (80) breakHere();
[00D5] (05) drawObject(848setImage(,6));
[00DB] (80) breakHere();
[00DC] (05) drawObject(848setImage(,10));
[00E2] (80) breakHere();
[00E3] (05) drawObject(848setImage(,7));
[00E9] (80) breakHere();
[00EA] (05) drawObject(848setImage(,10));
[00F0] (80) breakHere();
[00F1] (05) drawObject(848setImage(,6));
[00F7] (80) breakHere();
[00F8] (05) drawObject(848setImage(,10));
[00FE] (80) breakHere();
[00FF] (11) animateCostume(9,250);
[0102] (6D) putActorInRoom(9,VAR_ROOM);
[0106] (01) putActor(9,334,84);
[010C] (80) breakHere();
[010D] (4C) soundKludge([263,140,2,4,400]);
[011E] (11) animateCostume(9,6);
[0121] (05) drawObject(848setImage(,7));
[0127] (80) breakHere();
[0128] (0A) startScript(216,[1]);
[012E] (05) drawObject(848setImage(,8));
[0134] (80) breakHere();
[0135] (05) drawObject(848setImage(,9));
[013B] (0A) startScript(216,[0]);
[0141] (80) breakHere();
[0142] (05) drawObject(850setImage(,1));
[0148] (80) breakHere();
[0149] (05) drawObject(850setImage(,2));
[014F] (80) breakHere();
[0150] (05) drawObject(850setImage(,3));
[0156] (80) breakHere();
[0157] (80) breakHere();
[0158] (80) breakHere();
[0159] (80) breakHere();
[015A] (80) breakHere();
[015B] (80) breakHere();
[015C] (13) ActorOps(5,[Init(),Costume(52),Palette(3,33),Palette(4,35),IgnoreBoxes()]);
[0169] (2D) putActorInRoom(5,62);
[016C] (01) putActor(5,326,68);
[0172] (11) animateCostume(5,250);
[0175] (11) animateCostume(5,2);
[0178] (05) drawObject(848setImage(,8));
[017E] (80) breakHere();
[017F] (05) drawObject(848setImage(,9));
[0185] (80) breakHere();
[0186] (80) breakHere();
[0187] (2D) putActorInRoom(9,0);
[018A] (13) ActorOps(9,[Init(),Name(" ")]);
[0191] (5D) setClass(9,[0]);
[0198] (6D) putActorInRoom(8,VAR_ROOM);
[019C] (01) putActor(8,278,57);
[01A2] (1E) walkActorTo(8,155,35);
[01A8] (11) animateCostume(4,250);
[01AB] (11) animateCostume(12,250);
[01AE] (AE) WaitForActor(8);
[01B1] (13) ActorOps(9,[IgnoreBoxes()]);
[01B5] (11) animateCostume(4,244);
[01B8] (11) animateCostume(12,244);
[01BB] (4C) soundKludge([263,140,3,4,400]);
[01CC] (6D) putActorInRoom(9,VAR_ROOM);
[01D0] (01) putActor(9,145,52);
[01D6] (11) animateCostume(9,7);
[01D9] (80) breakHere();
[01DA] (0A) startScript(216,[1]);
[01E0] (80) breakHere();
[01E1] (0A) startScript(216,[0]);
[01E7] (80) breakHere();
[01E8] (80) breakHere();
[01E9] (05) drawObject(844setImage(,2));
[01EF] (01) putActor(8,155,35);
[01F5] (2D) putActorInRoom(9,0);
[01F8] (13) ActorOps(9,[Init(),Name(" ")]);
[01FF] (5D) setClass(9,[0]);
[0206] (1E) walkActorTo(8,124,7);
[020C] (AE) WaitForActor(8);
[020F] (4C) soundKludge([263,140,4,4,400]);
[0220] (4C) soundKludge([270,140,1]);
[022B] (4C) soundKludge([271,257,140,0]);
[0239] (4C) soundKludge([271,263,140,5,4,400]);
[024D] (4C) soundKludge([271,-1]);
[0255] (6D) putActorInRoom(9,VAR_ROOM);
[0259] (01) putActor(9,105,35);
[025F] (11) animateCostume(9,7);
[0262] (80) breakHere();
[0263] (0A) startScript(216,[1]);
[0269] (80) breakHere();
[026A] (0A) startScript(216,[0]);
[0270] (80) breakHere();
[0271] (80) breakHere();
[0272] (05) drawObject(844setImage(,3));
[0278] (01) putActor(8,124,7);
[027E] (2D) putActorInRoom(9,0);
[0281] (13) ActorOps(9,[Init(),Name(" ")]);
[0288] (5D) setClass(9,[0]);
[028F] (2D) putActorInRoom(8,0);
[0292] (13) ActorOps(8,[Init(),Name(" ")]);
[0299] (5D) setClass(8,[0]);
[02A0] (A0) stopObjectCode();
END

Script# 210
[0000] (9B) Local[0] *= VAR_TIMER_NEXT;
[0005] (1A) Local[1] = 3;
[000A] (05) drawObject(847setImage(,Local[1]));
[0010] (2E) delay(5);
[0014] (C6) Local[1]--;
[0017] (78) unless (Local[1] < 1) goto 000A;
[001E] (18) goto 0005;
[0021] (A0) stopObjectCode();
END

Script# 211
[0000] (62) stopScript(210);
[0002] (1A) Local[0] = 4;
[0007] (05) drawObject(847setImage(,Local[0]));
[000D] (80) breakHere();
[000E] (46) Local[0]++;
[0011] (44) unless (Local[0] > 8) goto 0007;
[0018] (A0) stopObjectCode();
END

Script# 212
[0000] (C3) Local[2] = getActorX(Local[0]);
[0005] (BA) Local[2] -= VAR_CAMERA_POS_X;
[000A] (44) if (Local[2] > 160) {
[0011] (1A)   Local[2] = 160;
[0016] (**) }
[0016] (78) if (Local[2] < -160) {
[001D] (1A)   Local[2] = -160;
[0022] (**) }
[0022] (1B) Local[2] *= 80;
[0027] (5B) Local[2] /= 100;
[002C] (4C) soundKludge([259,Local[1],Local[2]]);
[0037] (80) breakHere();
[0038] (18) goto 0000;
[003B] (A0) stopObjectCode();
END

Script# 213
[0000] (A3) Local[2] = getActorY(Local[0]);
[0005] (3A) Local[2] -= 16;
[000A] (4C) soundKludge([258,Local[1],Local[2]]);
[0015] (80) breakHere();
[0016] (18) goto 0000;
[0019] (A0) stopObjectCode();
END

Script# 214
[0000] (4C) soundKludge([269,43,0,90]);
[000E] (1C) startSound(140);
[0010] (4C) soundKludge([-1]);
[0015] (2A) startScript(202,[],F);
[0018] (2A) startScript(207,[],F);
[001B] (0A) startScript(206,[]);
[001E] (A0) stopObjectCode();
END

Script# 215
[0000] (33) setRGBRoomIntensity(125,125,125,0,13);
[000B] (33) setRGBRoomIntensity(125,125,125,15,89);
[0016] (33) setRGBRoomIntensity(125,125,125,91,91);
[0021] (33) setRGBRoomIntensity(125,125,125,93,94);
[002C] (33) setRGBRoomIntensity(125,125,125,96,126);
[0037] (33) setRGBRoomIntensity(125,125,125,128,142);
[0042] (33) setRGBRoomIntensity(125,125,125,144,255);
[004D] (80) breakHere();
[004E] (33) setRGBRoomIntensity(255,255,255,0,191);
[0059] (80) breakHere();
[005A] (18) goto 0000;
[005D] (A0) stopObjectCode();
END

Script# 216
[0000] (A8) if (Local[0]) {
[0005] (33)   setRGBRoomIntensity(255,200,200,0,255);
[0010] (18) } else {
[0013] (33)   setRGBRoomIntensity(255,255,255,0,255);
[001E] (33)   setRGBRoomIntensity(125,125,125,2,13);
[0029] (33)   setRGBRoomIntensity(125,125,125,16,89);
[0034] (33)   setRGBRoomIntensity(125,125,125,91,91);
[003F] (33)   setRGBRoomIntensity(125,125,125,93,94);
[004A] (33)   setRGBRoomIntensity(125,125,125,97,126);
[0055] (33)   setRGBRoomIntensity(125,125,125,128,142);
[0060] (33)   setRGBRoomIntensity(125,125,125,144,206);
[006B] (33)   setRGBRoomIntensity(125,125,125,208,218);
[0076] (33)   setRGBRoomIntensity(125,125,125,221,222);
[0081] (33)   setRGBRoomIntensity(125,125,125,224,231);
[008C] (33)   setRGBRoomIntensity(125,125,125,233,233);
[0097] (33)   setRGBRoomIntensity(125,125,125,235,255);
[00A2] (**) }
[00A2] (A0) stopObjectCode();
END

Script# 217
[0000] (1A) Local[0] = 125;
[0005] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],2,13);
[0010] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],16,89);
[001B] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],91,91);
[0026] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],93,94);
[0031] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],97,126);
[003C] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],128,142);
[0047] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],144,206);
[0052] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],208,218);
[005D] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],221,222);
[0068] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],224,231);
[0073] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],233,233);
[007E] (33) setRGBRoomIntensity(Local[0],Local[0],Local[0],235,255);
[0089] (5A) Local[0] += 4;
[008E] (80) breakHere();
[008F] (46) Local[0]++;
[0092] (44) unless (Local[0] > 255) goto 0005;
[0099] (A0) stopObjectCode();
END

Script# 218
[0000] (3A) Local[2] -= 1;
[0005] (A8) if (Local[3]) {
[000A] (08)   if (VAR_SOUNDCARD != 4) {
[0011] (1A)     Local[1] = 70;
[0016] (**)   }
[0016] (C4)   if (Local[4] > Local[1]) {
[001D] (9A)     Local[4] = Local[1];
[0022] (**)   }
[0022] (9A)   Local[4] = Local[0];
[0027] (4C)   soundKludge([278,140,0,Local[4]]);
[0035] (DA)   Local[4] += Local[2];
[003A] (80)   breakHere();
[003B] (46)   Local[4]++;
[003E] (C4)   unless (Local[4] > Local[1]) goto 0027;
[0045] (18) } else {
[0048] (9A)   Local[4] = Local[0];
[004D] (4C)   soundKludge([278,140,4,Local[4]]);
[005B] (BA)   Local[4] -= Local[2];
[0060] (F8)   if (Local[4] < Local[1]) {
[0067] (9A)     Local[4] = Local[1];
[006C] (4C)     soundKludge([267,140,4,0]);
[007A] (**)   }
[007A] (80)   breakHere();
[007B] (C6)   Local[4]--;
[007E] (F8)   unless (Local[4] < Local[1]) goto 004D;
[0085] (**) }
[0085] (A0) stopObjectCode();
END

Script# 219
[0000] (7C) VAR_RESULT = isSoundRunning(140);
[0004] (A8) if (VAR_RESULT) {
[0009] (4C)   soundKludge([268,140,0,1]);
[0017] (4C)   soundKludge([-1]);
[001C] (4C)   soundKludge([256,140,18]);
[0027] (4C)   soundKludge([-1]);
[002C] (28)   if (!VAR_SOUNDRESULT) {
[0031] (18)   } else {
[0034] (80)     breakHere();
[0035] (18)     goto 001C;
[0038] (**)   }
[0038] (**) }
[0038] (A0) stopObjectCode();
END
