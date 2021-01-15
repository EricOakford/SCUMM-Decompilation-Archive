/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 55: Melee Island Dock (mi-dock)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(3,1)
[000D] (**) }
[000D] (14) print(255,[Pos(160,8),Center(),Overhead()]);
[0017] (0C) Resource.loadCostume(27);
[001A] (28) if (!Bit[65]) {
[001F] (0A)   startScript(203,[]);
[0022] (**) }
[0022] (30) setBoxFlags(6,128);
[0026] (1A) Var[374] = 200;
[002B] (2A) startScript(205,[],F);
[002E] (2A) startScript(201,[],F);
[0031] (00) stopObjectCode();
END

// EX
[0000] (48) if (VAR_SOUNDCARD == 0) {
[0007] (3C)   stopSound(69);
[0009] (**) }
[0009] (62) stopScript(83);
[000B] (0A) startScript(84,[]);
[000E] (00) stopObjectCode();
END

Script# 200
[0000] (16) Local[1] = getRandomNr(1);
[0004] (A8) if (Local[1]) {
[0009] (0F)   if (getState(422) == 0) {
[000F] (05)     drawObject(422,255,255);
[0016] (1C)     startSound(82);
[0018] (80)     breakHere();
[0019] (AD)     putActorInRoom(Local[0],55);
[001D] (8E)     putActorAtObject(Local[0],422);
[0022] (80)     breakHere();
[0023] (80)     breakHere();
[0024] (07)     setState(422,1);
[0028] (07)     setState(422,0);
[002C] (1C)     startSound(83);
[002E] (18)   } else {
[0031] (AD)     putActorInRoom(Local[0],55);
[0035] (8E)     putActorAtObject(Local[0],422);
[003A] (**)   }
[003A] (B6)   walkActorToObject(Local[0],421);
[003F] (AE)   WaitForActor(Local[0]);
[0043] (AD)   putActorInRoom(Local[0],0);
[0047] (18) } else {
[004A] (AD)   putActorInRoom(Local[0],55);
[004E] (8E)   putActorAtObject(Local[0],421);
[0053] (B6)   walkActorToObject(Local[0],422);
[0058] (AE)   WaitForActor(Local[0]);
[005C] (0F)   if (getState(422) == 0) {
[0062] (05)     drawObject(422,255,255);
[0069] (1C)     startSound(82);
[006B] (80)     breakHere();
[006C] (80)     breakHere();
[006D] (AD)     putActorInRoom(Local[0],0);
[0071] (80)     breakHere();
[0072] (07)     setState(422,1);
[0076] (07)     setState(422,0);
[007A] (1C)     startSound(83);
[007C] (18)   } else {
[007F] (AD)     putActorInRoom(Local[0],0);
[0083] (**)   }
[0083] (**) }
[0083] (A0) stopObjectCode();
END

Script# 201
[0000] (80) breakHere();
[0001] (44) unless (VAR_CAMERA_POS_X > 260) goto 0000;
[0008] (2A) startScript(83,[8,6],F);
[0011] (80) breakHere();
[0012] (78) unless (VAR_CAMERA_POS_X < 260) goto 0011;
[0019] (62) stopScript(83);
[001B] (18) goto 0000;
[001E] (A0) stopObjectCode();
END

Script# 202
[0000] (1A) Local[0] = 0;
[0005] (C3) VAR_RESULT = getActorX(VAR_EGO);
[000A] (48) if (VAR_RESULT == 308) {
[0011] (33)   RoomScroll(0,160)
[0017] (80)   breakHere();
[0018] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[001D] (78)   if (VAR_RESULT < 160) {
[0024] (1A)     Local[0] = 1;
[0029] (**)   }
[0029] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[002E] (44)   if (VAR_RESULT > 308) {
[0035] (1A)     Local[0] = 1;
[003A] (**)   }
[003A] (A8)   unless (Local[0]) goto 0017;
[003F] (18) } else {
[0042] (33)   RoomScroll(712,848)
[0048] (80)   breakHere();
[0049] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[004E] (78)   if (VAR_RESULT < 566) {
[0055] (1A)     Local[0] = 1;
[005A] (**)   }
[005A] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[005F] (44)   if (VAR_RESULT > 726) {
[0066] (1A)     Local[0] = 1;
[006B] (**)   }
[006B] (A8)   unless (Local[0]) goto 0048;
[0070] (**) }
[0070] (33) RoomScroll(0,848)
[0076] (A0) stopObjectCode();
END

Script# 203 // Demo Opening
[0000] (1C) startSound(69);
[0002] (40) cutscene([1]);
[0007] (58) beginOverride();
[0009] (18) goto 0098;
[000C] (2E) delay(60);
[0010] (05) drawObject(954,255,255);
[0017] (14) print(255,[Color(5),Center(),Pos(160,160),Text("\x0F & \x1C 1990 LucasArts Entertainment Company." + newline() + "All rights reserved." + keepText())]);
[0066] (2E) delay(120);
[006A] (9E) walkActorTo(VAR_EGO,235,132);
[0071] (AE) WaitForActor(VAR_EGO);
[0075] (91) animateCostume(VAR_EGO,250);
[0079] (2E) delay(30);
[007D] (80) breakHere();
[007E] (7C) VAR_RESULT = isSoundRunning(69);
[0082] (28) unless (!VAR_RESULT) goto 007D;
[0087] (07) setState(954,0);
[008B] (14) print(255,[Text(" ")]);
[0090] (14) print(255,[Text(" ")]);
[0095] (18) goto 00B1;
[0098] (07) setState(954,0);
[009C] (14) print(255,[Text(" ")]);
[00A1] (14) print(255,[Text(" ")]);
[00A6] (81) putActor(VAR_EGO,235,132);
[00AD] (91) animateCostume(VAR_EGO,250);
[00B1] (1A) Bit[65] = 1;
[00B6] (C0) endCutscene();
[00B7] (D2) actorFollowCamera(VAR_EGO);
[00BA] (A0) stopObjectCode();
END

Script# 204 // Talk to Troll
[0000] (9A) Local[0] = VAR_VERB_SCRIPT;
[0005] (1A) VAR_VERB_SCRIPT = 18;
[000A] (0A) startScript(21,[3]);
[0010] (40) cutscene([2]);
[0015] (1A) Local[2] = 0;
[001A] (28) if (!Bit[129]) {
[001F] (1A)   Bit[129] = 1;
[0024] (D8)   printEgo([Text("Hi. I'm Guybrush Threepwood and--")]);
[0048] (AE)   WaitForMessage();
[004A] (14)   print(11,[Text("I don't care who you are or what your business is you snivelling slimy sliver of scumm!" + wait() + "No one gets by me until they say the magic words.")]);
[00D8] (18) } else {
[00DB] (D8)   printEgo([Text("I'm back, and--")]);
[00ED] (AE)   WaitForMessage();
[00EF] (14)   print(11,[Text("You again??? Listen carefully:" + wait() + "I'm not letting you by until you say the magic words.")]);
[0148] (**) }
[0148] (AE) WaitForMessage();
[014A] (1A) Var[197] = 145;
[014F] (1A) Bit[28] = 0;
[0154] (2C) CursorShow();
[0156] (2C) UserputOn();
[0158] (7A) VerbOps(120,[Off()]);
[015C] (7A) VerbOps(121,[Off()]);
[0160] (7A) VerbOps(122,[Off()]);
[0164] (7A) VerbOps(123,[Off()]);
[0168] (7A) VerbOps(124,[Off()]);
[016C] (7A) VerbOps(125,[Off()]);
[0170] (7A) VerbOps(126,[Off()]);
[0174] (7A) VerbOps(127,[Off()]);
[0178] (7A) VerbOps(128,[Off()]);
[017C] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0189] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[0196] (28) if (!Bit[157]) {
[019B] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[01AA] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Pretty please?"),On()]);
[01C4] (5A)   Var[197] += 8;
[01C9] (48)   if (Var[364] == 3) {
[01D0] (3A)     Var[103] -= 120;
[01D5] (1A)     Bit[40 + Var[103]] = 1;
[01DC] (**)   }
[01DC] (18) } else {
[01DF] (AC)   Exprmode Var[103] = ((120 + 8) - 1);
[01EE] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Pretty please with sugar on top?"),On()]);
[021A] (5A)   Var[197] += 8;
[021F] (48)   if (Var[364] == 3) {
[0226] (3A)     Var[103] -= 120;
[022B] (1A)     Bit[40 + Var[103]] = 1;
[0232] (**)   }
[0232] (**) }
[0232] (28) if (!Bit[136 + 1]) {
[0239] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[0248] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("But I want to be a pirate!"),On()]);
[026E] (5A)   Var[197] += 8;
[0273] (48)   if (Var[364] == 3) {
[027A] (3A)     Var[103] -= 120;
[027F] (1A)     Bit[40 + Var[103]] = 1;
[0286] (**)   }
[0286] (**) }
[0286] (28) if (!Bit[136 + 2]) {
[028D] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[029C] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Why not?"),On()]);
[02B0] (5A)   Var[197] += 8;
[02B5] (48)   if (Var[364] == 3) {
[02BC] (3A)     Var[103] -= 120;
[02C1] (1A)     Bit[40 + Var[103]] = 1;
[02C8] (**)   }
[02C8] (**) }
[02C8] (A8) if (Bit[130]) {
[02CD] (A8)   if (Bit[131]) {
[02D2] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[02E1] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Ah, but a new faculty Shadow is nigh."),On()]);
[0312] (5A)     Var[197] += 8;
[0317] (48)     if (Var[364] == 3) {
[031E] (3A)       Var[103] -= 120;
[0323] (1A)       Bit[40 + Var[103]] = 1;
[032A] (**)     }
[032A] (28)   } else if (!Bit[136 + 5]) {
[0334] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[0343] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Did you know that a third Shadow is nigh?"),On()]);
[0378] (5A)     Var[197] += 8;
[037D] (48)     if (Var[364] == 3) {
[0384] (3A)       Var[103] -= 120;
[0389] (1A)       Bit[40 + Var[103]] = 1;
[0390] (**)     }
[0390] (AC)     Exprmode Var[103] = ((120 + 9) - 1);
[039F] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("But the prisoner told me I could pass."),On()]);
[03D1] (5A)     Var[197] += 8;
[03D6] (48)     if (Var[364] == 3) {
[03DD] (3A)       Var[103] -= 120;
[03E2] (1A)       Bit[40 + Var[103]] = 1;
[03E9] (**)     }
[03E9] (**)   }
[03E9] (A8) } else if (Bit[131]) {
[03F1] (28)   if (!Bit[136 + 6]) {
[03F8] (AC)     Exprmode Var[103] = ((120 + 6) - 1);
[0407] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("I need a new faculty advisor."),On()]);
[0430] (5A)     Var[197] += 8;
[0435] (48)     if (Var[364] == 3) {
[043C] (3A)       Var[103] -= 120;
[0441] (1A)       Bit[40 + Var[103]] = 1;
[0448] (**)     }
[0448] (AC)     Exprmode Var[103] = ((120 + 9) - 1);
[0457] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("But the fortune teller told me I could pass."),On()]);
[048F] (5A)     Var[197] += 8;
[0494] (48)     if (Var[364] == 3) {
[049B] (3A)       Var[103] -= 120;
[04A0] (1A)       Bit[40 + Var[103]] = 1;
[04A7] (**)     }
[04A7] (**)   }
[04A7] (28) } else if (!Bit[136 + 7]) {
[04B1] (A8)   if (Bit[18]) {
[04B6] (AC)     Exprmode Var[103] = ((120 + 7) - 1);
[04C5] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("For your information, I once had a barber named Dominique."),On()]);
[050B] (5A)     Var[197] += 8;
[0510] (48)     if (Var[364] == 3) {
[0517] (3A)       Var[103] -= 120;
[051C] (1A)       Bit[40 + Var[103]] = 1;
[0523] (**)     }
[0523] (**)   }
[0523] (**) }
[0523] (1A) Var[190] = 0;
[0528] (80) breakHere();
[0529] (A8) unless (Var[190]) goto 0528;
[052E] (48) if (Var[190] == 120) {
[0535] (1A)   Bit[136 + 1] = 1;
[053C] (14)   print(11,[Text("Tough noogies!" + wait() + "No one gets by until I hear the magic words.")]);
[057C] (AE)   WaitForMessage();
[057E] (18)   goto 0B16;
[0581] (48) } else if (Var[190] == 121) {
[058B] (1A)   Bit[136 + 2] = 1;
[0592] (14)   print(11,[Text("Because I said so." + wait() + "Now scram.")]);
[05B4] (AE)   WaitForMessage();
[05B6] (18)   goto 0B16;
[05B9] (48) } else if (Var[190] == 122) {
[05C3] (14)   print(11,[Text("Not those magic words, the MAGIC words!" + wait() + "--sigh--")]);
[05F8] (AE)   WaitForMessage();
[05FA] (1A)   Bit[157] = 1;
[05FF] (18)   goto 0B16;
[0602] (48) } else if (Var[190] == 123) {
[060C] (30)   setBoxFlags(6,0);
[0610] (14)   print(11,[Text("Very good, Creepfood.")]);
[0629] (AE)   WaitForMessage();
[062B] (D8)   printEgo([Text("That's Threepwood!")]);
[0640] (AE)   WaitForMessage();
[0642] (2E)   delay(30);
[0646] (14)   print(11,[Text("Whatever." + wait() + "Awright. You may now pass into the great unknown Beyond^" + wait() + "^Peepcrud.")]);
[0699] (AE)   WaitForMessage();
[069B] (D8)   printEgo([Text("THREEPWOOD! My name is THREEP-WOOD!")]);
[06C1] (AE)   WaitForMessage();
[06C3] (D8)   printEgo([Text("T")]);
[06C7] (AE)   WaitForMessage();
[06C9] (D8)   printEgo([Text("H")]);
[06CD] (AE)   WaitForMessage();
[06CF] (D8)   printEgo([Text("R")]);
[06D3] (AE)   WaitForMessage();
[06D5] (D8)   printEgo([Text("double-E")]);
[06E0] (AE)   WaitForMessage();
[06E2] (D8)   printEgo([Text("P")]);
[06E6] (AE)   WaitForMessage();
[06E8] (D8)   printEgo([Text("W")]);
[06EC] (AE)   WaitForMessage();
[06EE] (D8)   printEgo([Text("double-O")]);
[06F9] (AE)   WaitForMessage();
[06FB] (D8)   printEgo([Text("D")]);
[06FF] (AE)   WaitForMessage();
[0701] (D8)   printEgo([Text("Threepwood!")]);
[070F] (AE)   WaitForMessage();
[0711] (2E)   delay(30);
[0715] (14)   print(11,[Text("Whatever.")]);
[0722] (AE)   WaitForMessage();
[0724] (D8)   printEgo([Text("--sigh--")]);
[072F] (AE)   WaitForMessage();
[0731] (9E)   walkActorTo(VAR_EGO,130,144);
[0738] (AE)   WaitForActor(VAR_EGO);
[073C] (9E)   walkActorTo(VAR_EGO,45,144);
[0743] (AE)   WaitForActor(VAR_EGO);
[0747] (11)   animateCostume(11,19);
[074A] (80)   breakHere();
[074B] (80)   breakHere();
[074C] (80)   breakHere();
[074D] (11)   animateCostume(11,250);
[0750] (80)   breakHere();
[0751] (11)   animateCostume(11,3);
[0754] (80)   breakHere();
[0755] (14)   print(11,[Text("Hey! Do you happen to have any herring?")]);
[0780] (AE)   WaitForMessage();
[0782] (91)   animateCostume(VAR_EGO,249);
[0786] (D8)   printEgo([Text("Yeah, I do.  Here, take it.")]);
[07A4] (AE)   WaitForMessage();
[07A6] (9E)   walkActorTo(VAR_EGO,60,144);
[07AD] (AE)   WaitForActor(VAR_EGO);
[07B1] (91)   animateCostume(VAR_EGO,10);
[07B5] (80)   breakHere();
[07B6] (80)   breakHere();
[07B7] (80)   breakHere();
[07B8] (80)   breakHere();
[07B9] (80)   breakHere();
[07BA] (80)   breakHere();
[07BB] (11)   animateCostume(11,6);
[07BE] (80)   breakHere();
[07BF] (80)   breakHere();
[07C0] (80)   breakHere();
[07C1] (80)   breakHere();
[07C2] (80)   breakHere();
[07C3] (91)   animateCostume(VAR_EGO,3);
[07C7] (9E)   walkActorTo(VAR_EGO,45,144);
[07CE] (AE)   WaitForActor(VAR_EGO);
[07D2] (91)   animateCostume(VAR_EGO,249);
[07D6] (D8)   printEgo([Text("The fortune teller told me that I don't need it any more.")]);
[0812] (AE)   WaitForMessage();
[0814] (14)   print(11,[Text("Thanks!" + wait() + "Bye!")]);
[0825] (AE)   WaitForMessage();
[0827] (D8)   printEgo([Text("Be seeing you in the real Monkey Island!")]);
[0852] (AE)   WaitForMessage();
[0854] (9E)   walkActorTo(VAR_EGO,0,144);
[085B] (AE)   WaitForActor(VAR_EGO);
[085F] (11)   animateCostume(11,8);
[0862] (80)   breakHere();
[0863] (80)   breakHere();
[0864] (80)   breakHere();
[0865] (80)   breakHere();
[0866] (80)   breakHere();
[0867] (80)   breakHere();
[0868] (80)   breakHere();
[0869] (80)   breakHere();
[086A] (80)   breakHere();
[086B] (80)   breakHere();
[086C] (80)   breakHere();
[086D] (11)   animateCostume(11,9);
[0870] (80)   breakHere();
[0871] (80)   breakHere();
[0872] (80)   breakHere();
[0873] (80)   breakHere();
[0874] (80)   breakHere();
[0875] (80)   breakHere();
[0876] (80)   breakHere();
[0877] (80)   breakHere();
[0878] (80)   breakHere();
[0879] (80)   breakHere();
[087A] (80)   breakHere();
[087B] (80)   breakHere();
[087C] (11)   animateCostume(11,10);
[087F] (80)   breakHere();
[0880] (80)   breakHere();
[0881] (80)   breakHere();
[0882] (80)   breakHere();
[0883] (80)   breakHere();
[0884] (80)   breakHere();
[0885] (80)   breakHere();
[0886] (80)   breakHere();
[0887] (80)   breakHere();
[0888] (80)   breakHere();
[0889] (80)   breakHere();
[088A] (80)   breakHere();
[088B] (80)   breakHere();
[088C] (80)   breakHere();
[088D] (80)   breakHere();
[088E] (80)   breakHere();
[088F] (80)   breakHere();
[0890] (11)   animateCostume(11,11);
[0893] (80)   breakHere();
[0894] (80)   breakHere();
[0895] (80)   breakHere();
[0896] (80)   breakHere();
[0897] (80)   breakHere();
[0898] (80)   breakHere();
[0899] (80)   breakHere();
[089A] (80)   breakHere();
[089B] (80)   breakHere();
[089C] (80)   breakHere();
[089D] (11)   animateCostume(11,13);
[08A0] (80)   breakHere();
[08A1] (80)   breakHere();
[08A2] (80)   breakHere();
[08A3] (80)   breakHere();
[08A4] (80)   breakHere();
[08A5] (80)   breakHere();
[08A6] (80)   breakHere();
[08A7] (80)   breakHere();
[08A8] (80)   breakHere();
[08A9] (11)   animateCostume(11,14);
[08AC] (80)   breakHere();
[08AD] (80)   breakHere();
[08AE] (80)   breakHere();
[08AF] (80)   breakHere();
[08B0] (80)   breakHere();
[08B1] (80)   breakHere();
[08B2] (80)   breakHere();
[08B3] (80)   breakHere();
[08B4] (80)   breakHere();
[08B5] (80)   breakHere();
[08B6] (14)   print(11,[Text("--ERRph!--" + wait() + "S'cuse me.")]);
[08D0] (AE)   WaitForMessage();
[08D2] (1A)   Local[2] = 1;
[08D7] (18)   goto 0B16;
[08DA] (48) } else if (Var[190] == 124) {
[08E4] (1A)   Bit[136 + 5] = 1;
[08EB] (14)   print(11,[Text("Did you know that those are only HALF of the magic words?")]);
[0928] (AE)   WaitForMessage();
[092A] (18)   goto 0B16;
[092D] (48) } else if (Var[190] == 125) {
[0937] (1A)   Bit[136 + 6] = 1;
[093E] (14)   print(11,[Text("I do too, but you'll need the other HALF of the magic words.")]);
[097E] (AE)   WaitForMessage();
[0980] (18)   goto 0B16;
[0983] (48) } else if (Var[190] == 126) {
[098D] (1A)   Bit[136 + 7] = 1;
[0994] (14)   print(11,[Text("My father ran off with a barber named Dominique." + wait() + "But that doesn't mean I'll let you pass.")]);
[09F2] (AE)   WaitForMessage();
[09F4] (18)   goto 0B16;
[09F7] (48) } else if (Var[190] == 127) {
[0A01] (1A)   Bit[136 + 8] = 1;
[0A08] (14)   print(11,[Text("You're obviously more dense than I gave you credit for, so I'll make this easy for you:" + wait() + "Seek the fortune teller and the prisoner^" + wait() + "^they can tell you the magic words.")]);
[0AB3] (AE)   WaitForMessage();
[0AB5] (18)   goto 0B16;
[0AB8] (48) } else if (Var[190] == 128) {
[0AC2] (14)   print(11,[Text("Nobody passes until I say they may pass, you cantankerous caustic creep.")]);
[0B0E] (AE)   WaitForMessage();
[0B10] (18)   goto 0B16;
[0B13] (18)   /* goto 0B16; */
[0B16] (**) }
[0B16] (28) if (!Local[2]) {
[0B1B] (9A)   VAR_VERB_SCRIPT = Local[0];
[0B20] (0A)   startScript(21,[2]);
[0B26] (**) }
[0B26] (C0) endCutscene();
[0B27] (A8) if (Local[2]) {
[0B2C] (1A)   Bit[155] = 1;
[0B31] (72)   loadRoom(3);
[0B33] (**) }
[0B33] (A0) stopObjectCode();
END

Script# 205 // Troll Stops Guybrush
[0000] (03) VAR_RESULT = getActorRoom(11);
[0004] (08) if (VAR_RESULT != 55) {
[000B] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[0010] (78)   if (VAR_RESULT < 190) {
[0017] (83)     VAR_RESULT = getActorRoom(VAR_EGO);
[001C] (48)     if (VAR_RESULT == 55) {
[0023] (13)       ActorOps(11,[Costume(0)]);
[0028] (2D)       putActorInRoom(11,55);
[002B] (01)       putActor(11,100,132);
[0031] (11)       animateCostume(11,248);
[0034] (13)       ActorOps(11,[Costume(27)]);
[0039] (40)       cutscene([2]);
[003E] (11)       animateCostume(11,17);
[0041] (80)       breakHere();
[0042] (80)       breakHere();
[0043] (80)       breakHere();
[0044] (80)       breakHere();
[0045] (80)       breakHere();
[0046] (80)       breakHere();
[0047] (80)       breakHere();
[0048] (80)       breakHere();
[0049] (80)       breakHere();
[004A] (80)       breakHere();
[004B] (80)       breakHere();
[004C] (80)       breakHere();
[004D] (14)       print(11,[Text("None shall pass!")]);
[0061] (AE)       WaitForMessage();
[0063] (5D)       setClass(955,[24]);
[006A] (C0)       endCutscene();
[006B] (**)     }
[006B] (**)   }
[006B] (18) } else {
[006E] (83)   VAR_RESULT = getActorRoom(VAR_EGO);
[0073] (48)   if (VAR_RESULT == 55) {
[007A] (C3)     VAR_RESULT = getActorX(VAR_EGO);
[007F] (44)     if (VAR_RESULT > 200) {
[0086] (11)       animateCostume(11,16);
[0089] (80)       breakHere();
[008A] (80)       breakHere();
[008B] (80)       breakHere();
[008C] (80)       breakHere();
[008D] (80)       breakHere();
[008E] (80)       breakHere();
[008F] (80)       breakHere();
[0090] (80)       breakHere();
[0091] (80)       breakHere();
[0092] (80)       breakHere();
[0093] (80)       breakHere();
[0094] (80)       breakHere();
[0095] (5D)       setClass(955,[152]);
[009C] (2D)       putActorInRoom(11,0);
[009F] (**)     }
[009F] (**)   }
[009F] (**) }
[009F] (80) breakHere();
[00A0] (18) goto 0000;
[00A3] (A0) stopObjectCode();
END

Script# 206 // Give Something to Troll
[0000] (40) cutscene([]);
[0002] (48) if (Local[0] == 458) {
[0009] (14)   print(11,[Text("Sorry, I like my breath all smelly.")]);
[0030] (AE)   WaitForMessage();
[0032] (48) } else if (Local[0] == 306) {
[003C] (14)   print(11,[Text("I'm not hungry.")]);
[004F] (AE)   WaitForMessage();
[0051] (48) } else if (Local[0] == 429) {
[005B] (14)   print(11,[Text("Hey, thanks.  But I already got my copy this month.")]);
[0092] (AE)   WaitForMessage();
[0094] (18) } else {
[0097] (14)   print(11,[Text("What would I want with that?")]);
[00B7] (AE)   WaitForMessage();
[00B9] (**) }
[00B9] (C0) endCutscene();
[00BA] (A0) stopObjectCode();
END

// Object 421: Archway
Events:
   A - 001F
[001F] (24) loadRoomWithEgo(438,57,-1,-1);
[0027] (00) stopObjectCode();
END

// Object 422: Door
Events:
   1 - 0025
   2 - 002F
   A - 0039
  5A - 004A
[0025] (0A) startScript(26,[422,353]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(27,[422,353]);
[0038] (00) stopObjectCode();
[0039] (0F) if (getState(422) == 1) {
[003F] (AE)   WaitForMessage();
[0041] (24)   loadRoomWithEgo(353,52,-1,-1);
[0049] (**) }
[0049] (00) stopObjectCode();
[004A] (0F) if (getState(422) == 0) {
[0050] (1A)   Var[194] = 1;
[0055] (18) } else {
[0058] (1A)   Var[194] = 2;
[005D] (**) }
[005D] (00) stopObjectCode();
END

// Object 954
Events:
END

// Object 955: Troll
Events:
   6 - 0029
   9 - 005C
   D - 0070
  50 - 0074
  5A - 007B
[0029] (D8) printEgo([Text("I don't want to get into a fight with this guy.")]);
[005B] (00) stopObjectCode();
[005C] (D8) printEgo([Text("He looks mean.")]);
[006D] (AE) WaitForMessage();
[006F] (00) stopObjectCode();
[0070] (0A) startScript(204,[]);
[0073] (00) stopObjectCode();
[0074] (0A) startScript(206,[Local[0]]);
[007A] (00) stopObjectCode();
[007B] (1A) Var[194] = 13;
[0080] (00) stopObjectCode();
END
