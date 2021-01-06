/**
 * Indiana Jones and the Fate of Atlantis: CD Demo
 * 
 * Room 68: LucasArts Logo
 */

// ENCD
[0000] (33) SetScreen(0,200);
[0006] (A8) if (Bit[36]) {
[000B] (42)   chainScript(200,[]);
[000E] (0A)   startScript(201,[]);
[0011] (18) } else {
[0014] (68)   VAR_RESULT = isScriptRunning(74);
[0018] (A8)   if (VAR_RESULT) {
[001D] (1A)     VAR_RESTART_KEY = 322;
[0022] (1C)     startSound(150);
[0024] (33)     RoomIntensity(0,16,255);
[0029] (**)   }
[0029] (25)   pickupObject(933,0);
[002D] (29)   setOwnerOf(933,14);
[0031] (25)   pickupObject(937,0);
[0035] (25)   pickupObject(938,0);
[0039] (29)   setOwnerOf(937,14);
[003D] (29)   setOwnerOf(938,2);
[0041] (**) }
[0041] (00) stopObjectCode();
END

// EXCD
[0000] (33) SetScreen(0,144);
[0006] (4C) soundKludge([257,150,0]);
[0011] (4C) soundKludge([269,150,80,180]);
[001F] (4C) soundKludge([-1]);
[0024] (4C) soundKludge([9,150]);
[002C] (00) stopObjectCode();
END

Script# 200
[0000] (2C) CursorHide();
[0002] (2C) UserputOff();
[0004] (62) stopScript(193);
[0006] (62) stopScript(194);
[0008] (07) setState(939,0);
[000C] (13) ActorOps(5,[Init(),Costume(54),Elevation(120),IgnoreBoxes(),NeverZClip()]);
[0017] (13) ActorOps(6,[Init(),Costume(75),IgnoreBoxes(),NeverZClip()]);
[001F] (13) ActorOps(7,[Init(),Costume(240),Elevation(120),IgnoreBoxes(),NeverZClip()]);
[002A] (2D) putActorInRoom(6,68);
[002D] (01) putActor(6,136,111);
[0033] (2D) putActorInRoom(5,68);
[0036] (01) putActor(5,174,67);
[003C] (2D) putActorInRoom(7,68);
[003F] (01) putActor(7,174,37);
[0045] (11) animateCostume(5,250);
[0048] (11) animateCostume(5,6);
[004B] (11) animateCostume(6,250);
[004E] (11) animateCostume(6,1);
[0051] (11) animateCostume(7,250);
[0054] (11) animateCostume(7,6);
[0057] (1A) Local[0] = 1;
[005C] (33) RoomIntensity(Local[0],16,255);
[0062] (5A) Local[0] += 7;
[0067] (16) Local[1] = getRandomNr(255);
[006B] (80) breakHere();
[006C] (46) Local[0]++;
[006F] (44) unless (Local[0] > 256) goto 005C;
[0076] (80) breakHere();
[0077] (80) breakHere();
[0078] (80) breakHere();
[0079] (80) breakHere();
[007A] (80) breakHere();
[007B] (80) breakHere();
[007C] (80) breakHere();
[007D] (80) breakHere();
[007E] (1A) Local[0] = 80;
[0083] (13) ActorOps(5,[Elevation(Local[0])]);
[0089] (13) ActorOps(7,[Elevation(Local[0])]);
[008F] (3A) Local[0] -= 20;
[0094] (80) breakHere();
[0095] (C6) Local[0]--;
[0098] (78) unless (Local[0] < -20) goto 0083;
[009F] (11) animateCostume(6,9);
[00A2] (13) ActorOps(5,[Elevation(-40)]);
[00A8] (13) ActorOps(7,[Elevation(-40)]);
[00AE] (80) breakHere();
[00AF] (13) ActorOps(5,[Elevation(-60)]);
[00B5] (13) ActorOps(7,[Elevation(-60)]);
[00BB] (80) breakHere();
[00BC] (13) ActorOps(5,[Elevation(-75)]);
[00C2] (13) ActorOps(7,[Elevation(-75)]);
[00C8] (80) breakHere();
[00C9] (13) ActorOps(5,[Elevation(-90)]);
[00CF] (13) ActorOps(7,[Elevation(-90)]);
[00D5] (11) animateCostume(7,7);
[00D8] (80) breakHere();
[00D9] (11) animateCostume(6,10);
[00DC] (80) breakHere();
[00DD] (80) breakHere();
[00DE] (11) animateCostume(6,11);
[00E1] (11) animateCostume(7,8);
[00E4] (1A) Local[0] = -90;
[00E9] (13) ActorOps(5,[Elevation(Local[0])]);
[00EF] (13) ActorOps(7,[Elevation(Local[0])]);
[00F5] (5A) Local[0] += 30;
[00FA] (80) breakHere();
[00FB] (46) Local[0]++;
[00FE] (44) unless (Local[0] > 100) goto 00E9;
[0105] (2D) putActorInRoom(7,0);
[0108] (80) breakHere();
[0109] (11) animateCostume(6,6);
[010C] (80) breakHere();
[010D] (80) breakHere();
[010E] (80) breakHere();
[010F] (80) breakHere();
[0110] (80) breakHere();
[0111] (80) breakHere();
[0112] (80) breakHere();
[0113] (80) breakHere();
[0114] (80) breakHere();
[0115] (80) breakHere();
[0116] (80) breakHere();
[0117] (80) breakHere();
[0118] (11) animateCostume(6,7);
[011B] (80) breakHere();
[011C] (80) breakHere();
[011D] (80) breakHere();
[011E] (80) breakHere();
[011F] (80) breakHere();
[0120] (80) breakHere();
[0121] (80) breakHere();
[0122] (80) breakHere();
[0123] (11) animateCostume(6,8);
[0126] (11) animateCostume(5,7);
[0129] (1A) Local[0] = 68;
[012E] (13) ActorOps(5,[Elevation(Local[0])]);
[0134] (3A) Local[0] -= 5;
[0139] (80) breakHere();
[013A] (C6) Local[0]--;
[013D] (78) unless (Local[0] < -32) goto 012E;
[0144] (11) animateCostume(6,1);
[0147] (13) ActorOps(5,[Elevation(-40)]);
[014D] (11) animateCostume(5,8);
[0150] (13) ActorOps(7,[Init(),Costume(54),InitAnimNr(9),StandAnimNr(9),WalkAnimNr(9),IgnoreBoxes(),NeverZClip(),Elevation(-40),WalkSpeed(4,4)]);
[0164] (2D) putActorInRoom(7,68);
[0167] (01) putActor(7,105,68);
[016D] (1E) walkActorTo(7,174,68);
[0173] (A0) stopObjectCode();
END

Script# 201
[0000] (7C) VAR_RESULT = isSoundRunning(39);
[0004] (28) if (!VAR_RESULT) {
[0009] (1C)   startSound(39);
[000B] (**) }
[000B] (80) breakHere();
[000C] (18) goto 0000;
[000F] (A0) stopObjectCode();
END

// Object 933: Orichalcum beads
Events:
   8 - 01B8
   9 - 001B
   B - 01BF
  5A - 035F
  5B - 0334
  FA - 0231
[001B] (1D) if (classOfIs(933,[146])) {
[0024] (1D)   if (classOfIs(830,[134])) {
[002D] (D8)     printEgo([Text(sound(0x2A, 0x2) + "I can't see them through the box.")]);
[0061] (18)     goto 01B7;
[0064] (**)   }
[0064] (**) }
[0064] (48) if (Var[229] == 1) {
[006B] (14)   print(1,[Text(sound(0x2A, 0x3EC) + "I have one bead.")]);
[008F] (48) } else if (Var[229] == 2) {
[0099] (14)   print(1,[Text(sound(0x2A, 0x7D4) + "I have two beads.")]);
[00BE] (48) } else if (Var[229] == 3) {
[00C8] (14)   print(1,[Text(sound(0x2A, 0xBBC) + "I have three beads.")]);
[00EF] (48) } else if (Var[229] == 4) {
[00F9] (14)   print(1,[Text(sound(0x2A, 0xFA4) + "I have four beads.")]);
[011F] (48) } else if (Var[229] == 5) {
[0129] (14)   print(1,[Text(sound(0x2A, 0x138C) + "I have five beads.")]);
[014F] (44) } else if (Var[229] > 10) {
[0159] (14)   print(1,[Text(sound(0x2A, 0x1774) + "I have a hand full of beads.")]);
[0189] (18) } else {
[018C] (14)   print(1,[Text(sound(0x2A, 0x1B5C) + "I've got alot of beads.")]);
[01B7] (**) }
[01B7] (00) stopObjectCode();
[01B8] (59) doSentence(8,Local[0],933);
[01BE] (00) stopObjectCode();
[01BF] (1D) if (classOfIs(933,[146])) {
[01C8] (1D)   if (classOfIs(830,[6])) {
[01D1] (5D)     setClass(933,[18]);
[01D8] (37)     startObject(933,250,[0]);
[01E0] (18)   } else {
[01E3] (D8)     printEgo([Text(sound(0x2A, 0x5) + "The box is closed.")]);
[0208] (**)   }
[0208] (18) } else {
[020B] (D8)   printEgo([Text(sound(0x2A, 0x6) + "I already have\x10it.")]);
[0230] (**) }
[0230] (00) stopObjectCode();
[0231] (AC) Exprmode Var[229] = (Var[229] + Local[0]);
[023C] (1D) if (classOfIs(933,[146])) {
[0245] (44)   if (Local[0] > 1) {
[024C] (14)     print(1,[Text(sound(0x2A, 0x7) + "I'll put them in the box,\x10too.")]);
[027E] (44)   } else if (Local[0] > 0) {
[0288] (14)     print(1,[Text(sound(0x2A, 0x8) + "I'll put it in the box,\x10too.")]);
[02B8] (**)   }
[02B8] (**) }
[02B8] (48) if (Var[229] == 0) {
[02BF] (29)   setOwnerOf(933,14);
[02C3] (18)   goto 0330;
[02C6] (48) } else if (Var[229] == 1) {
[02D0] (1D)   if (classOfIs(933,[18])) {
[02D9] (54)     setObjectName(933,"1 bead@@");
[02E5] (18)   } else {
[02E8] (54)     setObjectName(933,"1 bead in box");
[02F9] (**)   }
[02F9] (1D) } else if (classOfIs(933,[18])) {
[0305] (54)   setObjectName(933,getInt(Var[229]) + " beads");
[0313] (18) } else {
[0316] (54)   setObjectName(933,getInt(Var[229]) + " beads in box");
[032B] (**) }
[032B] (69) setOwnerOf(933,VAR_EGO);
[0330] (0A) startScript(10,[]);
[0333] (00) stopObjectCode();
[0334] (48) if (Var[229] == 1) {
[033B] (1A)   Var[161] = 1278;
[0340] (48) } else if (Var[229] == 2) {
[034A] (1A)   Var[161] = 1279;
[034F] (38) } else if (Var[229] >= 3) {
[0359] (1A)   Var[161] = 1280;
[035E] (**) }
[035E] (00) stopObjectCode();
[035F] (1A) Var[123] = 9;
[0364] (00) stopObjectCode();
END

// Object 934: Sunstone
Events:
   3 - 00D8
   4 - 00D8
   6 - 00D8
   7 - 00D8
   8 - 0027
   9 - 008A
  5A - 00DF
  5B - 0021
[0021] (1A) Var[161] = 1269;
[0026] (00) stopObjectCode();
[0027] (48) if (Local[0] == 1006) {
[002E] (18)   goto 007E;
[0031] (48) } else if (Local[0] == 992) {
[003B] (18)   goto 007E;
[003E] (48) } else if (Local[0] == 377) {
[0048] (18)   goto 007E;
[004B] (48) } else if (Local[0] == 817) {
[0055] (18)   goto 007E;
[0058] (48) } else if (Local[0] == 589) {
[0062] (18)   goto 007E;
[0065] (48) } else if (Local[0] == 264) {
[006F] (18)   goto 007E;
[0072] (18) } else {
[0075] (79)   doSentence(8,Local[0],VAR_ME);
[007B] (**) }
[007B] (18) goto 0089;
[007E] (B7) startObject(Local[0],8,[934,8]);
[0089] (00) stopObjectCode();
[008A] (5D) setClass(934,[154]);
[0091] (D8) printEgo([Text(sound(0x2A, 0xE) + "It's a stone disk with solar images carved into\x10it.")]);
[00D7] (00) stopObjectCode();
[00D8] (42) chainScript(3,[88]);
[00DE] (00) stopObjectCode();
[00DF] (1A) Var[123] = 9;
[00E4] (00) stopObjectCode();
END

// Object 935: Moonstone
Events:
   3 - 00B7
   4 - 00B7
   6 - 00B7
   7 - 00B7
   8 - 0027
   9 - 0070
  5A - 00BE
  5B - 0021
[0021] (1A) Var[161] = 1270;
[0026] (00) stopObjectCode();
[0027] (48) if (Local[0] == 377) {
[002E] (18)   goto 0064;
[0031] (48) } else if (Local[0] == 817) {
[003B] (18)   goto 0064;
[003E] (48) } else if (Local[0] == 589) {
[0048] (18)   goto 0064;
[004B] (48) } else if (Local[0] == 264) {
[0055] (18)   goto 0064;
[0058] (18) } else {
[005B] (79)   doSentence(8,Local[0],VAR_ME);
[0061] (**) }
[0061] (18) goto 006F;
[0064] (B7) startObject(Local[0],8,[935,8]);
[006F] (00) stopObjectCode();
[0070] (D8) printEgo([Text(sound(0x2A, 0x10) + "It's a stone disk with lunar images carved into\x10it.")]);
[00B6] (00) stopObjectCode();
[00B7] (42) chainScript(3,[88]);
[00BD] (00) stopObjectCode();
[00BE] (1A) Var[123] = 9;
[00C3] (00) stopObjectCode();
END

// Object 936: Worldstone
Events:
   3 - 00B9
   4 - 00B9
   6 - 00B9
   7 - 00B9
   8 - 0027
   9 - 0070
  5A - 00C0
  5B - 0021
[0021] (1A) Var[161] = 1271;
[0026] (00) stopObjectCode();
[0027] (48) if (Local[0] == 377) {
[002E] (18)   goto 0064;
[0031] (48) } else if (Local[0] == 817) {
[003B] (18)   goto 0064;
[003E] (48) } else if (Local[0] == 589) {
[0048] (18)   goto 0064;
[004B] (48) } else if (Local[0] == 264) {
[0055] (18)   goto 0064;
[0058] (18) } else {
[005B] (79)   doSentence(8,Local[0],VAR_ME);
[0061] (**) }
[0061] (18) goto 006F;
[0064] (B7) startObject(Local[0],8,[936,8]);
[006F] (00) stopObjectCode();
[0070] (D8) printEgo([Text(sound(0x2A, 0x12) + "It's a stone disk with earthly images carved into\x10it.")]);
[00B8] (00) stopObjectCode();
[00B9] (42) chainScript(3,[88]);
[00BF] (00) stopObjectCode();
[00C0] (1A) Var[123] = 9;
[00C5] (00) stopObjectCode();
END

// Object 937: Lost Dialogue of Plato
Events:
   3 - 00EF
   4 - 010D
   6 - 0137
   7 - 0137
   8 - 00E8
   9 - 0027
  5A - 013E
  5B - 0021
[0021] (1A) Var[161] = 1268;
[0026] (00) stopObjectCode();
[0027] (48) if (VAR_ROOM == 79) {
[002E] (D8)   printEgo([Text(sound(0x2A, 0x14) + "I can't do that now!")]);
[0055] (48) } else if (VAR_ROOM == 80) {
[005F] (06)   VAR_RESULT = getActorElevation(1);
[0063] (08)   if (VAR_RESULT != 0) {
[006A] (D8)     printEgo([Text(sound(0x2A, 0x15) + "I can't do that now!")]);
[0091] (18)     goto 00E7;
[0094] (**)   }
[0094] (**) }
[0094] (9D) if (classOfIs(VAR_ME,[140])) {
[009D] (28)   if (!Var[239]) {
[00A2] (0A)     startScript(98,[]);
[00A5] (**)   }
[00A5] (0A)   startScript(119,[83,1]);
[00AE] (80)   breakHere();
[00AF] (68)   VAR_RESULT = isScriptRunning(119);
[00B3] (28)   unless (!VAR_RESULT) goto 00AE;
[00B8] (18) } else {
[00BB] (D8)   printEgo([Text(sound(0x2A, 0x16) + "I can't read in the\x10dark.")]);
[00E7] (**) }
[00E7] (00) stopObjectCode();
[00E8] (79) doSentence(8,Local[0],VAR_ME);
[00EE] (00) stopObjectCode();
[00EF] (D8) printEgo([Text(sound(0x2A, 0x17) + "It's open.")]);
[010C] (00) stopObjectCode();
[010D] (D8) printEgo([Text(sound(0x2A, 0x18) + "I better keep it\x10open.")]);
[0136] (00) stopObjectCode();
[0137] (42) chainScript(3,[88]);
[013D] (00) stopObjectCode();
[013E] (1A) Var[123] = 9;
[0143] (00) stopObjectCode();
END

// Object 938: Necklace
Events:
   5 - 0068
   8 - 0061
   9 - 001E
  5A - 008D
  5B - 0018
[0018] (1A) Var[161] = 1363;
[001D] (00) stopObjectCode();
[001E] (D8) printEgo([Text(sound(0x2A, 0x1A) + "It's an old necklace with an unusual medallion.")]);
[0060] (00) stopObjectCode();
[0061] (79) doSentence(8,Local[0],VAR_ME);
[0067] (00) stopObjectCode();
[0068] (D8) printEgo([Text("I'll NEVER give away my\x10necklace!")]);
[008C] (00) stopObjectCode();
[008D] (1A) Var[123] = 9;
[0092] (00) stopObjectCode();
END

// Object 939
Events:
END
