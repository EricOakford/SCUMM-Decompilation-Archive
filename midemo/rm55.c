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
[001A] (0C) Resource.loadSound(4);
[001D] (28) if (!Bit[63]) {
[0022] (0A)   startScript(201,[]);
[0025] (**) }
[0025] (30) setBoxFlags(6,128);
[0029] (2A) startScript(203,[],F);
[002C] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
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

Script# 201 // Demo Opening
[0000] (1C) startSound(4);
[0002] (40) cutscene([1]);
[0007] (58) beginOverride();
[0009] (18) goto 009A;
[000C] (2E) delay(60);
[0010] (05) drawObject(954,255,255);
[0017] (14) print(255,[Color(5),Center(),Pos(160,160),Text("TM & (c) 1990 LucasArts Entertainment Company" + newline() + "All rights reserved." + keepText())]);
[0068] (2E) delay(120);
[006C] (9E) walkActorTo(VAR_EGO,235,132);
[0073] (AE) WaitForActor(VAR_EGO);
[0077] (91) animateCostume(VAR_EGO,250);
[007B] (2E) delay(30);
[007F] (80) breakHere();
[0080] (7C) VAR_RESULT = isSoundRunning(4);
[0084] (28) unless (!VAR_RESULT) goto 007F;
[0089] (07) setState(954,0);
[008D] (14) print(255,[Text(" ")]);
[0092] (14) print(255,[Text(" ")]);
[0097] (18) goto 00B3;
[009A] (07) setState(954,0);
[009E] (14) print(255,[Text(" ")]);
[00A3] (14) print(255,[Text(" ")]);
[00A8] (81) putActor(VAR_EGO,235,132);
[00AF] (91) animateCostume(VAR_EGO,250);
[00B3] (1A) Bit[63] = 1;
[00B8] (C0) endCutscene();
[00B9] (D2) actorFollowCamera(VAR_EGO);
[00BC] (A0) stopObjectCode();
END

Script# 202 // Talk to Troll
[0000] (9A) Local[0] = VAR_VERB_SCRIPT;
[0005] (1A) VAR_VERB_SCRIPT = 18;
[000A] (0A) startScript(21,[3]);
[0010] (40) cutscene([2]);
[0015] (1A) Bit[86] = 0;
[001A] (28) if (!Bit[49]) {
[001F] (1A)   Bit[49] = 1;
[0024] (D8)   printEgo([Text("Hi. I'm Guybrush Threepwood and--")]);
[0048] (AE)   WaitForMessage();
[004A] (14)   print(11,[Text("I don't care who you are or what your business is, you snivelling slimy sliver of scumm!" + wait() + "No one gets by me until they say the magic words.")]);
[00D9] (18) } else {
[00DC] (D8)   printEgo([Text("I'm back, and--")]);
[00EE] (AE)   WaitForMessage();
[00F0] (14)   print(11,[Text("You again?" + wait() + "Listen carefully:" + wait() + "I'm not letting you by until you say the magic words.")]);
[0148] (**) }
[0148] (AE) WaitForMessage();
[014A] (1A) Var[175] = 145;
[014F] (1A) Bit[23] = 0;
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
[017C] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0189] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0196] (28) if (!Bit[52]) {
[019B] (28)   if (!Bit[50]) {
[01A0] (28)     if (!Bit[66]) {
[01A5] (AC)       Exprmode Var[103] = ((120 + 3) - 1);
[01B4] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Pretty please?"),On()]);
[01CE] (5A)       Var[175] += 8;
[01D3] (3A)       Var[103] -= 120;
[01D8] (1A)       Bit[35 + Var[103]] = 1;
[01DF] (18)     } else {
[01E2] (AC)       Exprmode Var[103] = ((120 + 8) - 1);
[01F1] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Pretty please with sugar on top?"),On()]);
[021D] (5A)       Var[175] += 8;
[0222] (3A)       Var[103] -= 120;
[0227] (1A)       Bit[35 + Var[103]] = 1;
[022E] (**)     }
[022E] (**)   }
[022E] (**) }
[022E] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[023D] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("But I want to be a pirate!"),On()]);
[0263] (5A) Var[175] += 8;
[0268] (3A) Var[103] -= 120;
[026D] (1A) Bit[35 + Var[103]] = 1;
[0274] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[0283] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Why not?"),On()]);
[0297] (5A) Var[175] += 8;
[029C] (3A) Var[103] -= 120;
[02A1] (1A) Bit[35 + Var[103]] = 1;
[02A8] (A8) if (Bit[52]) {
[02AD] (A8)   if (Bit[50]) {
[02B2] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[02C1] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Ah, but a new faculty Shadow is nigh."),On()]);
[02F2] (5A)     Var[175] += 8;
[02F7] (3A)     Var[103] -= 120;
[02FC] (1A)     Bit[35 + Var[103]] = 1;
[0303] (18)   } else {
[0306] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[0315] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Did you know that a third Shadow is nigh?"),On()]);
[034A] (5A)     Var[175] += 8;
[034F] (3A)     Var[103] -= 120;
[0354] (1A)     Bit[35 + Var[103]] = 1;
[035B] (AC)     Exprmode Var[103] = ((120 + 9) - 1);
[036A] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("But the prisoner told me I could pass."),On()]);
[039C] (5A)     Var[175] += 8;
[03A1] (3A)     Var[103] -= 120;
[03A6] (1A)     Bit[35 + Var[103]] = 1;
[03AD] (**)   }
[03AD] (A8) } else if (Bit[50]) {
[03B5] (AC)   Exprmode Var[103] = ((120 + 6) - 1);
[03C4] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I need a new faculty advisor."),On()]);
[03ED] (5A)   Var[175] += 8;
[03F2] (3A)   Var[103] -= 120;
[03F7] (1A)   Bit[35 + Var[103]] = 1;
[03FE] (AC)   Exprmode Var[103] = ((120 + 9) - 1);
[040D] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("But the fortune teller told me I could pass."),On()]);
[0445] (5A)   Var[175] += 8;
[044A] (3A)   Var[103] -= 120;
[044F] (1A)   Bit[35 + Var[103]] = 1;
[0456] (A8) } else if (Bit[13]) {
[045E] (AC)   Exprmode Var[103] = ((120 + 7) - 1);
[046D] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("For your information, I once had a barber named Dominique."),On()]);
[04B3] (5A)   Var[175] += 8;
[04B8] (3A)   Var[103] -= 120;
[04BD] (1A)   Bit[35 + Var[103]] = 1;
[04C4] (**) }
[04C4] (1A) Var[173] = 0;
[04C9] (80) breakHere();
[04CA] (A8) unless (Var[173]) goto 04C9;
[04CF] (48) if (Var[173] == 120) {
[04D6] (14)   print(11,[Text("Tough noogies!" + wait() + "No one gets by until I hear the magic words.")]);
[0516] (AE)   WaitForMessage();
[0518] (18)   goto 0AFA;
[051B] (48) } else if (Var[173] == 121) {
[0525] (14)   print(11,[Text("Because I said so." + wait() + "Now scram.")]);
[0547] (AE)   WaitForMessage();
[0549] (18)   goto 0AFA;
[054C] (48) } else if (Var[173] == 122) {
[0556] (1A)   Bit[66] = 1;
[055B] (14)   print(11,[Text("Not those magic words, you pedantic putrefied pinhead, the MAGIC words!" + wait() + "--sigh--")]);
[05B0] (AE)   WaitForMessage();
[05B2] (18)   goto 0AFA;
[05B5] (48) } else if (Var[173] == 123) {
[05BF] (30)   setBoxFlags(6,0);
[05C3] (14)   print(11,[Text("Hmmmm^" + wait() + "I don't know how you did it, but you did it, Creepfood.")]);
[0606] (AE)   WaitForMessage();
[0608] (D8)   printEgo([Text("That's Threepwood!")]);
[061D] (AE)   WaitForMessage();
[061F] (2E)   delay(30);
[0623] (14)   print(11,[Text("Whatever." + wait() + "Awright. You may now pass into the great unknown beyond^" + wait() + "^Peepcrud.")]);
[0676] (AE)   WaitForMessage();
[0678] (D8)   printEgo([Text("THREEPWOOD! My name is THREEP-WOOD!")]);
[069E] (AE)   WaitForMessage();
[06A0] (2E)   delay(30);
[06A4] (14)   print(11,[Text("Whatever.")]);
[06B1] (AE)   WaitForMessage();
[06B3] (D8)   printEgo([Text("--sigh--")]);
[06BE] (AE)   WaitForMessage();
[06C0] (9E)   walkActorTo(VAR_EGO,130,144);
[06C7] (AE)   WaitForActor(VAR_EGO);
[06CB] (9E)   walkActorTo(VAR_EGO,45,144);
[06D2] (AE)   WaitForActor(VAR_EGO);
[06D6] (11)   animateCostume(11,19);
[06D9] (80)   breakHere();
[06DA] (80)   breakHere();
[06DB] (80)   breakHere();
[06DC] (11)   animateCostume(11,250);
[06DF] (80)   breakHere();
[06E0] (11)   animateCostume(11,3);
[06E3] (80)   breakHere();
[06E4] (14)   print(11,[Text("Hey! Do you happen to have any herring?")]);
[070F] (AE)   WaitForMessage();
[0711] (91)   animateCostume(VAR_EGO,249);
[0715] (D8)   printEgo([Text("Yeah, I do.  Here, take it.")]);
[0733] (AE)   WaitForMessage();
[0735] (9E)   walkActorTo(VAR_EGO,60,144);
[073C] (AE)   WaitForActor(VAR_EGO);
[0740] (91)   animateCostume(VAR_EGO,10);
[0744] (80)   breakHere();
[0745] (80)   breakHere();
[0746] (80)   breakHere();
[0747] (80)   breakHere();
[0748] (80)   breakHere();
[0749] (80)   breakHere();
[074A] (11)   animateCostume(11,6);
[074D] (80)   breakHere();
[074E] (80)   breakHere();
[074F] (80)   breakHere();
[0750] (80)   breakHere();
[0751] (80)   breakHere();
[0752] (91)   animateCostume(VAR_EGO,3);
[0756] (9E)   walkActorTo(VAR_EGO,45,144);
[075D] (AE)   WaitForActor(VAR_EGO);
[0761] (91)   animateCostume(VAR_EGO,249);
[0765] (D8)   printEgo([Text("The fortune teller told me that I won't be needing it any more.")]);
[07A7] (AE)   WaitForMessage();
[07A9] (14)   print(11,[Text("Thanks!" + wait() + "Bye!")]);
[07BA] (AE)   WaitForMessage();
[07BC] (D8)   printEgo([Text("See ya in the real Monkey Island\x0F game!")]);
[07E6] (AE)   WaitForMessage();
[07E8] (9E)   walkActorTo(VAR_EGO,0,144);
[07EF] (AE)   WaitForActor(VAR_EGO);
[07F3] (11)   animateCostume(11,8);
[07F6] (80)   breakHere();
[07F7] (80)   breakHere();
[07F8] (80)   breakHere();
[07F9] (80)   breakHere();
[07FA] (80)   breakHere();
[07FB] (80)   breakHere();
[07FC] (80)   breakHere();
[07FD] (80)   breakHere();
[07FE] (80)   breakHere();
[07FF] (80)   breakHere();
[0800] (80)   breakHere();
[0801] (11)   animateCostume(11,9);
[0804] (80)   breakHere();
[0805] (80)   breakHere();
[0806] (80)   breakHere();
[0807] (80)   breakHere();
[0808] (80)   breakHere();
[0809] (80)   breakHere();
[080A] (80)   breakHere();
[080B] (80)   breakHere();
[080C] (80)   breakHere();
[080D] (80)   breakHere();
[080E] (80)   breakHere();
[080F] (80)   breakHere();
[0810] (11)   animateCostume(11,10);
[0813] (80)   breakHere();
[0814] (80)   breakHere();
[0815] (80)   breakHere();
[0816] (80)   breakHere();
[0817] (80)   breakHere();
[0818] (80)   breakHere();
[0819] (80)   breakHere();
[081A] (80)   breakHere();
[081B] (80)   breakHere();
[081C] (80)   breakHere();
[081D] (80)   breakHere();
[081E] (80)   breakHere();
[081F] (80)   breakHere();
[0820] (80)   breakHere();
[0821] (80)   breakHere();
[0822] (80)   breakHere();
[0823] (80)   breakHere();
[0824] (11)   animateCostume(11,11);
[0827] (80)   breakHere();
[0828] (80)   breakHere();
[0829] (80)   breakHere();
[082A] (80)   breakHere();
[082B] (80)   breakHere();
[082C] (80)   breakHere();
[082D] (80)   breakHere();
[082E] (80)   breakHere();
[082F] (80)   breakHere();
[0830] (80)   breakHere();
[0831] (11)   animateCostume(11,13);
[0834] (80)   breakHere();
[0835] (80)   breakHere();
[0836] (80)   breakHere();
[0837] (80)   breakHere();
[0838] (80)   breakHere();
[0839] (80)   breakHere();
[083A] (80)   breakHere();
[083B] (80)   breakHere();
[083C] (80)   breakHere();
[083D] (05)   drawObject(954,255,255);
[0844] (1C)   startSound(4);
[0846] (2E)   delay(120);
[084A] (80)   breakHere();
[084B] (7C)   VAR_RESULT = isSoundRunning(4);
[084F] (28)   unless (!VAR_RESULT) goto 084A;
[0854] (1A)   Bit[86] = 1;
[0859] (18)   goto 0AFA;
[085C] (48) } else if (Var[173] == 124) {
[0866] (14)   print(11,[Text("Did you know that those are only HALF of the magic words you pitiful puny pink-skinned punk?")]);
[08C6] (AE)   WaitForMessage();
[08C8] (18)   goto 0AFA;
[08CB] (48) } else if (Var[173] == 125) {
[08D5] (14)   print(11,[Text("I do too, but you'll need the other HALF of the magic words, you twerpy tiny tongue-tied toad.")]);
[0937] (AE)   WaitForMessage();
[0939] (18)   goto 0AFA;
[093C] (48) } else if (Var[173] == 126) {
[0946] (14)   print(11,[Text("My father ran off with a barber named Dominique." + wait() + "But that doesn't mean I'll let you pass, you ignorant inflammatory idiot.")]);
[09C5] (AE)   WaitForMessage();
[09C7] (18)   goto 0AFA;
[09CA] (48) } else if (Var[173] == 127) {
[09D4] (14)   print(11,[Text("You're obviously more dense than I gave you credit for, you despicably dumb dodo," + wait() + "so I'll make this easy for you:" + wait() + "Seek the fortune teller and the prisoner^" + wait() + "^they can tell you the magic words.")]);
[0A9A] (AE)   WaitForMessage();
[0A9C] (18)   goto 0AFA;
[0A9F] (48) } else if (Var[173] == 128) {
[0AA9] (14)   print(11,[Text("Nobody passes until I say they may pass, you cantankerous caustic creep.")]);
[0AF5] (AE)   WaitForMessage();
[0AF7] (18)   /* goto 0AFA; */
[0AFA] (**) }
[0AFA] (28) if (!Bit[86]) {
[0AFF] (9A)   VAR_VERB_SCRIPT = Local[0];
[0B04] (0A)   startScript(21,[2]);
[0B0A] (**) }
[0B0A] (C0) endCutscene();
[0B0B] (A8) if (Bit[86]) {
[0B10] (33)   SetScreen(0,200)
[0B16] (72)   loadRoom(3);
[0B18] (**) }
[0B18] (A0) stopObjectCode();
END

Script# 203 // Troll Stops Guybrush
[0000] (03) VAR_RESULT = getActorRoom(11);
[0004] (08) if (VAR_RESULT != 55) {
[000B] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[0010] (78)   if (VAR_RESULT < 190) {
[0017] (83)     VAR_RESULT = getActorRoom(VAR_EGO);
[001C] (48)     if (VAR_RESULT == 55) {
[0023] (40)       cutscene([]);
[0025] (13)       ActorOps(11,[Costume(0)]);
[002A] (2D)       putActorInRoom(11,55);
[002D] (01)       putActor(11,100,132);
[0033] (11)       animateCostume(11,248);
[0036] (13)       ActorOps(11,[Costume(27)]);
[003B] (11)       animateCostume(11,17);
[003E] (80)       breakHere();
[003F] (80)       breakHere();
[0040] (80)       breakHere();
[0041] (80)       breakHere();
[0042] (80)       breakHere();
[0043] (80)       breakHere();
[0044] (80)       breakHere();
[0045] (80)       breakHere();
[0046] (80)       breakHere();
[0047] (80)       breakHere();
[0048] (80)       breakHere();
[0049] (80)       breakHere();
[004A] (AE)       WaitForCamera();
[004C] (14)       print(11,[Text("None shall pass!")]);
[0060] (AE)       WaitForMessage();
[0062] (5D)       setClass(955,[24]);
[0069] (C0)       endCutscene();
[006A] (**)     }
[006A] (**)   }
[006A] (18) } else {
[006D] (83)   VAR_RESULT = getActorRoom(VAR_EGO);
[0072] (48)   if (VAR_RESULT == 55) {
[0079] (C3)     VAR_RESULT = getActorX(VAR_EGO);
[007E] (44)     if (VAR_RESULT > 205) {
[0085] (11)       animateCostume(11,16);
[0088] (80)       breakHere();
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
[0094] (5D)       setClass(955,[152]);
[009B] (2D)       putActorInRoom(11,0);
[009E] (**)     }
[009E] (**)   }
[009E] (**) }
[009E] (80) breakHere();
[009F] (18) goto 0000;
[00A2] (A0) stopObjectCode();
END

Script# 204 // Give Something to Troll
[0000] (40) cutscene([]);
[0002] (48) if (Local[0] == 458) {
[0009] (14)   print(11,[Text("Sorry, I like my breath all smelly, you unbearably ursine underling.")]);
[0051] (AE)   WaitForMessage();
[0053] (48) } else if (Local[0] == 306) {
[005D] (14)   print(11,[Text("I'm not hungry, you visibly vapid vole.")]);
[0088] (AE)   WaitForMessage();
[008A] (48) } else if (Local[0] == 429) {
[0094] (14)   print(11,[Text("Hey, thanks.  But I already got my copy this month.")]);
[00CB] (AE)   WaitForMessage();
[00CD] (18) } else {
[00D0] (14)   print(11,[Text("What would I want with that?")]);
[00F0] (AE)   WaitForMessage();
[00F2] (**) }
[00F2] (C0) endCutscene();
[00F3] (A0) stopObjectCode();
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
  5A - 0048
[0025] (0A) startScript(26,[422,353]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(27,[422,353]);
[0038] (00) stopObjectCode();
[0039] (0F) if (getState(422) == 1) {
[003F] (24)   loadRoomWithEgo(353,52,-1,-1);
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (0F) if (getState(422) == 0) {
[004E] (1A)   Var[171] = 1;
[0053] (18) } else {
[0056] (1A)   Var[171] = 2;
[005B] (**) }
[005B] (00) stopObjectCode();
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
[0070] (0A) startScript(202,[]);
[0073] (00) stopObjectCode();
[0074] (0A) startScript(204,[Local[0]]);
[007A] (00) stopObjectCode();
[007B] (1A) Var[171] = 13;
[0080] (00) stopObjectCode();
END
