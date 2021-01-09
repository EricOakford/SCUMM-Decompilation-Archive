/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 68: LucasArts Logo (logo)
 */

// EN
[0000] (33) SetScreen(0,200);
[0006] (A8) if (Bit[36]) {
[000B] (42)   chainScript(200,[]);
[000E] (0A)   startScript(201,[]);
[0011] (08) } else if (Var[224] != 68) {
[001B] (25)   pickupObject(20,0);
[001F] (25)   pickupObject(937,0);
[0023] (25)   pickupObject(934,0);
[0027] (25)   pickupObject(933,0);
[002B] (29)   setOwnerOf(933,14);
[002F] (37)   startObject(933,250,[3]);
[0037] (25)   pickupObject(938,0);
[003B] (29)   setOwnerOf(938,2);
[003F] (1A)   Bit[425] = 0;
[0044] (**) }
[0044] (00) stopObjectCode();
END

// EX
[0000] (08) if (VAR_NEW_ROOM != 68) {
[0007] (33)   SetScreen(0,144);
[000D] (4C)   soundKludge([257,150,0]);
[0018] (4C)   soundKludge([269,150,80,180]);
[0026] (4C)   soundKludge([-1]);
[002B] (4C)   soundKludge([9,150]);
[0033] (**) }
[0033] (00) stopObjectCode();
END

Script# 200
[0000] (A0) stopObjectCode();
END

Script# 201
[0000] (7C) VAR_RESULT = isSoundRunning(39);
[0004] (28) unless (!VAR_RESULT) goto 0009;
[0009] (80) breakHere();
[000A] (18) goto 0000;
[000D] (A0) stopObjectCode();
END

// Object 20: Whip
Events:
   3 - 00D2
   4 - 00D2
   5 - 003A
   6 - 00D2
   7 - 00D2
   8 - 0033
   9 - 0058
  5A - 002D
  5A - 00E8
  5B - 0027
[0027] (1A) Var[161] = 1265;
[002C] (00) stopObjectCode();
[002D] (1A) Var[123] = 9;
[0032] (00) stopObjectCode();
[0033] (79) doSentence(8,Local[0],VAR_ME);
[0039] (00) stopObjectCode();
[003A] (D8) printEgo([Text("I can't give my whip\x10away.")]);
[0057] (00) stopObjectCode();
[0058] (16) Var[442] = getRandomNr(2);
[005C] (48) if (Var[442] == 0) {
[0063] (D8)   printEgo([Text("That's my\x10whip.")]);
[0075] (48) } else if (Var[442] == 1) {
[007F] (D8)   printEgo([Text("It's my favorite piece of equipment.")]);
[00A6] (18) } else {
[00A9] (D8)   printEgo([Text("It could be useful in the right\x10spot.")]);
[00D1] (**) }
[00D1] (00) stopObjectCode();
[00D2] (D8) printEgo([Text("That doesn't work.")]);
[00E7] (00) stopObjectCode();
[00E8] (1A) Var[123] = 9;
[00ED] (00) stopObjectCode();
END

// Object 23: National Archeology
Events:
   3 - 003D
   8 - 0064
   9 - 003D
   B - 0027
  5A - 001B
  5B - 0021
[001B] (1A) Var[123] = 9;
[0020] (00) stopObjectCode();
[0021] (1A) Var[161] = 1260;
[0026] (00) stopObjectCode();
[0027] (D8) printEgo([Text("I already have it.")]);
[003C] (00) stopObjectCode();
[003D] (D8) printEgo([Text("It's a popular scientific magazine.")]);
[0063] (00) stopObjectCode();
[0064] (D8) printEgo([Text("I've already read it.")]);
[007C] (00) stopObjectCode();
END

// Object 933: Orichalcum
Events:
   8 - 0143
   9 - 001B
   B - 014A
  5A - 02AA
  5B - 027F
  FA - 019C
[001B] (1D) if (classOfIs(933,[146])) {
[0024] (1D)   if (classOfIs(830,[134])) {
[002D] (D8)     printEgo([Text("I can't see them through the box.")]);
[0051] (18)     goto 0142;
[0054] (**)   }
[0054] (**) }
[0054] (44) if (Var[229] > 1) {
[005B] (48)   if (Bit[735] == 0) {
[0062] (1A)     Bit[735] = 1;
[0067] (D8)     printEgo([Text("These are beads of orichalcum^" + wait() + "^the mystery metal the Nazis are looking\x10for.")]);
[00B7] (18)   } else {
[00BA] (14)     print(1,[Text("I have " + getInt(Var[229]) + " beads.")]);
[00D0] (**)   }
[00D0] (48) } else if (Bit[735] == 0) {
[00DA] (1A)   Bit[735] = 1;
[00DF] (D8)   printEgo([Text("It's a bead of orichalcum^" + wait() + "^the mystery metal the Nazis are looking\x10for.")]);
[012B] (18) } else {
[012E] (14)   print(1,[Text("I have one bead.")]);
[0142] (**) }
[0142] (00) stopObjectCode();
[0143] (59) doSentence(8,Local[0],933);
[0149] (00) stopObjectCode();
[014A] (1D) if (classOfIs(933,[146])) {
[0153] (1D)   if (classOfIs(830,[6])) {
[015C] (5D)     setClass(933,[18]);
[0163] (37)     startObject(933,250,[0]);
[016B] (18)   } else {
[016E] (D8)     printEgo([Text("The box is closed.")]);
[0183] (**)   }
[0183] (18) } else {
[0186] (D8)   printEgo([Text("I already have\x10it.")]);
[019B] (**) }
[019B] (00) stopObjectCode();
[019C] (AC) Exprmode Var[229] = (Var[229] + Local[0]);
[01A7] (1D) if (classOfIs(933,[146])) {
[01B0] (44)   if (Local[0] > 1) {
[01B7] (14)     print(1,[Text("I'll put them in the box,\x10too.")]);
[01D9] (44)   } else if (Local[0] > 0) {
[01E3] (14)     print(1,[Text("I'll put it in the box,\x10too.")]);
[0203] (**)   }
[0203] (**) }
[0203] (48) if (Var[229] == 0) {
[020A] (29)   setOwnerOf(933,14);
[020E] (18)   goto 027B;
[0211] (48) } else if (Var[229] == 1) {
[021B] (1D)   if (classOfIs(933,[18])) {
[0224] (54)     setObjectName(933,"1 bead@@");
[0230] (18)   } else {
[0233] (54)     setObjectName(933,"1 bead in box");
[0244] (**)   }
[0244] (1D) } else if (classOfIs(933,[18])) {
[0250] (54)   setObjectName(933,getInt(Var[229]) + " beads");
[025E] (18) } else {
[0261] (54)   setObjectName(933,getInt(Var[229]) + " beads in box");
[0276] (**) }
[0276] (69) setOwnerOf(933,VAR_EGO);
[027B] (0A) startScript(10,[]);
[027E] (00) stopObjectCode();
[027F] (48) if (Var[229] == 1) {
[0286] (1A)   Var[161] = 1278;
[028B] (48) } else if (Var[229] == 2) {
[0295] (1A)   Var[161] = 1279;
[029A] (38) } else if (Var[229] >= 3) {
[02A4] (1A)   Var[161] = 1280;
[02A9] (**) }
[02A9] (00) stopObjectCode();
[02AA] (1A) Var[123] = 9;
[02AF] (00) stopObjectCode();
END

// Object 934: Sunstone
Events:
   3 - 00C8
   4 - 00C8
   6 - 00C8
   7 - 00C8
   8 - 0027
   9 - 008A
  5A - 00CF
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
[0091] (D8) printEgo([Text("It's a stone disk with solar images carved into\x10it.")]);
[00C7] (00) stopObjectCode();
[00C8] (42) chainScript(3,[88]);
[00CE] (00) stopObjectCode();
[00CF] (1A) Var[123] = 9;
[00D4] (00) stopObjectCode();
END

// Object 935: Moonstone
Events:
   3 - 00A7
   4 - 00A7
   6 - 00A7
   7 - 00A7
   8 - 0027
   9 - 0070
  5A - 00AE
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
[0070] (D8) printEgo([Text("It's a stone disk with lunar images carved into\x10it.")]);
[00A6] (00) stopObjectCode();
[00A7] (42) chainScript(3,[88]);
[00AD] (00) stopObjectCode();
[00AE] (1A) Var[123] = 9;
[00B3] (00) stopObjectCode();
END

// Object 936: Worldstone
Events:
   3 - 009C
   4 - 009C
   6 - 009C
   7 - 009C
   8 - 0027
   9 - 0063
  5A - 00A3
  5B - 0021
[0021] (1A) Var[161] = 1271;
[0026] (00) stopObjectCode();
[0027] (48) if (Local[0] == 817) {
[002E] (18)   goto 0057;
[0031] (48) } else if (Local[0] == 589) {
[003B] (18)   goto 0057;
[003E] (48) } else if (Local[0] == 264) {
[0048] (18)   goto 0057;
[004B] (18) } else {
[004E] (79)   doSentence(8,Local[0],VAR_ME);
[0054] (**) }
[0054] (18) goto 0062;
[0057] (B7) startObject(Local[0],8,[936,8]);
[0062] (00) stopObjectCode();
[0063] (D8) printEgo([Text("It's a stone disk with earthly images carved into\x10it.")]);
[009B] (00) stopObjectCode();
[009C] (42) chainScript(3,[88]);
[00A2] (00) stopObjectCode();
[00A3] (1A) Var[123] = 9;
[00A8] (00) stopObjectCode();
END

// Object 937: Lost Dialogue of Plato
Events:
   3 - 00BF
   4 - 00CD
   6 - 00E7
   7 - 00E7
   8 - 00B8
   9 - 0027
  5A - 00EE
  5B - 0021
[0021] (1A) Var[161] = 1268;
[0026] (00) stopObjectCode();
[0027] (48) if (VAR_ROOM == 79) {
[002E] (D8)   printEgo([Text("I can't do that now!")]);
[0045] (48) } else if (VAR_ROOM == 80) {
[004F] (06)   VAR_RESULT = getActorElevation(1);
[0053] (08)   if (VAR_RESULT != 0) {
[005A] (D8)     printEgo([Text("I can't do that now!")]);
[0071] (18)     goto 00B7;
[0074] (**)   }
[0074] (**) }
[0074] (9D) if (classOfIs(VAR_ME,[140])) {
[007D] (28)   if (!Var[239]) {
[0082] (0A)     startScript(98,[]);
[0085] (**)   }
[0085] (0A)   startScript(119,[83,1]);
[008E] (80)   breakHere();
[008F] (68)   VAR_RESULT = isScriptRunning(119);
[0093] (28)   unless (!VAR_RESULT) goto 008E;
[0098] (18) } else {
[009B] (D8)   printEgo([Text("I can't read in the\x10dark.")]);
[00B7] (**) }
[00B7] (00) stopObjectCode();
[00B8] (79) doSentence(8,Local[0],VAR_ME);
[00BE] (00) stopObjectCode();
[00BF] (D8) printEgo([Text("It's open.")]);
[00CC] (00) stopObjectCode();
[00CD] (D8) printEgo([Text("I better keep it\x10open.")]);
[00E6] (00) stopObjectCode();
[00E7] (42) chainScript(3,[88]);
[00ED] (00) stopObjectCode();
[00EE] (1A) Var[123] = 9;
[00F3] (00) stopObjectCode();
END

// Object 938: Necklace
Events:
   5 - 0058
   8 - 0051
   9 - 001E
  5A - 007D
  5B - 0018
[0018] (1A) Var[161] = 1363;
[001D] (00) stopObjectCode();
[001E] (D8) printEgo([Text("It's an old necklace with an unusual medallion.")]);
[0050] (00) stopObjectCode();
[0051] (79) doSentence(8,Local[0],VAR_ME);
[0057] (00) stopObjectCode();
[0058] (D8) printEgo([Text("I'll NEVER give away my\x10necklace!")]);
[007C] (00) stopObjectCode();
[007D] (1A) Var[123] = 9;
[0082] (00) stopObjectCode();
END

// Object 939
Events:
END