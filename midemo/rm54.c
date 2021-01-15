/**
 * The Secret of Monkey Island Demo
 * 
 * Room 54: Jail
 */

// EN
[0000] (6A) startScript(208,[412],F,R);
[0006] (6A) startScript(208,[415],F,R);
[000C] (6A) startScript(208,[418],F,R);
[0012] (28) if (!Bit[15]) {
[0017] (2A)   startScript(201,[],F);
[001A] (**) }
[001A] (28) if (!Bit[32]) {
[001F] (2A)   startScript(206,[],F);
[0022] (**) }
[0022] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (13) ActorOps(4,[TalkAnimNr(4,5)]);
[0006] (07) setState(407,0);
[000A] (1E) walkActorTo(4,73,118);
[0010] (AE) WaitForActor(4);
[0013] (1E) walkActorTo(4,21,122);
[0019] (AE) WaitForActor(4);
[001C] (18) goto 000A;
[001F] (A0) stopObjectCode();
END

Script# 201 // Set up Otis
[0000] (13) ActorOps(4,[Init()]);
[0004] (5D) setClass(4,[0]);
[000B] (13) ActorOps(4,[Costume(16),TalkColor(14),Scale(255)]);
[0014] (A8) if (Bit[16 + 1]) {
[001B] (13)   ActorOps(4,[Name("Otis")]);
[0024] (18) } else {
[0027] (13)   ActorOps(4,[Name("prisoner")]);
[0034] (**) }
[0034] (5D) setClass(4,[150,149]);
[003E] (2D) putActorInRoom(4,54);
[0041] (01) putActor(4,21,122);
[0047] (2A) startScript(200,[],F);
[004A] (A0) stopObjectCode();
END

Script# 202 // Talk to Otis
[0000] (9A) Local[0] = VAR_VERB_SCRIPT;
[0005] (1A) VAR_VERB_SCRIPT = 18;
[000A] (0A) startScript(21,[3]);
[0010] (40) cutscene([2]);
[0015] (B6) walkActorToObject(VAR_EGO,402);
[001A] (AE) WaitForActor(VAR_EGO);
[001E] (91) animateCostume(VAR_EGO,244);
[0022] (1E) walkActorTo(4,54,125);
[0028] (AE) WaitForActor(4);
[002B] (11) animateCostume(4,245);
[002E] (80) breakHere();
[002F] (07) setState(407,1);
[0033] (11) animateCostume(4,10);
[0036] (80) breakHere();
[0037] (80) breakHere();
[0038] (80) breakHere();
[0039] (13) ActorOps(4,[TalkAnimNr(12,13)]);
[003F] (C0) endCutscene();
[0040] (1D) if (classOfIs(406,[134])) {
[0049] (40)   cutscene([2]);
[004E] (58)   beginOverride();
[0050] (18)   goto 0188;
[0053] (A8)   if (Bit[89]) {
[0058] (9E)     walkActorTo(VAR_EGO,95,140);
[005F] (AE)     WaitForActor(VAR_EGO);
[0063] (D8)     printEgo([Text("I'm not talking to him until he does something about his breath.")]);
[00A6] (AE)     WaitForMessage();
[00A8] (18)   } else {
[00AB] (1A)     Bit[89] = 1;
[00B0] (14)     print(4,[Text("You gotta get me out of here!" + wait() + "I'm a victim of society.")]);
[00EB] (AE)     WaitForMessage();
[00ED] (91)     animateCostume(VAR_EGO,246);
[00F1] (AE)     WaitForActor(VAR_EGO);
[00F5] (D8)     printEgo([Text("Not to mention halitosis.")]);
[0111] (AE)     WaitForMessage();
[0113] (9E)     walkActorTo(VAR_EGO,95,140);
[011A] (AE)     WaitForActor(VAR_EGO);
[011E] (D8)     printEgo([Text("Yuck!")]);
[0126] (AE)     WaitForMessage();
[0128] (14)     print(4,[Text("Hey, it's hard to keep my breath minty fresh when there's nothing to eat in here but rats.")]);
[0186] (AE)     WaitForMessage();
[0188] (**)   }
[0188] (C0)   endCutscene();
[0189] (28) } else if (!Bit[49]) {
[0191] (14)   print(4,[Text("I want to be alone with my misery.")]);
[01B7] (AE)   WaitForMessage();
[01B9] (18) } else {
[01BC] (42)   chainScript(209,[Local[0]]);
[01C2] (**) }
[01C2] (9A) VAR_VERB_SCRIPT = Local[0];
[01C7] (0A) startScript(21,[2]);
[01CD] (2C) CursorShow();
[01CF] (2C) UserputOn();
[01D1] (2A) startScript(200,[],F);
[01D4] (A0) stopObjectCode();
END

Script# 204 // Give Something to Otis
[0000] (40) cutscene([]);
[0002] (B6) walkActorToObject(VAR_EGO,402);
[0007] (AE) WaitForActor(VAR_EGO);
[000B] (91) animateCostume(VAR_EGO,244);
[000F] (1E) walkActorTo(4,54,125);
[0015] (AE) WaitForActor(4);
[0018] (11) animateCostume(4,245);
[001B] (80) breakHere();
[001C] (07) setState(407,1);
[0020] (11) animateCostume(4,10);
[0023] (80) breakHere();
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (13) ActorOps(4,[TalkAnimNr(12,13)]);
[002C] (C0) endCutscene();
[002D] (48) if (Local[0] == 458) {
[0034] (29)   setOwnerOf(458,14);
[0038] (5D)   setClass(406,[6]);
[003F] (42)   chainScript(209,[VAR_VERB_SCRIPT]);
[0045] (28) } else if (!Bit[51]) {
[004D] (40)   cutscene([]);
[004F] (58)   beginOverride();
[0051] (18)   goto 0098;
[0054] (14)   print(4,[Text("I don't want anything but my freedom!" + wait() + "^and maybe a breath mint.")]);
[0098] (AE)   WaitForMessage();
[009A] (C0)   endCutscene();
[009B] (18) } else {
[009E] (14)   print(4,[Text("Now that I have good breath," + newline() + "all I want is my freedom!")]);
[00D9] (AE)   WaitForMessage();
[00DB] (**) }
[00DB] (2A) startScript(200,[],F);
[00DE] (A0) stopObjectCode();
END

Script# 205
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (16)   Local[1] = getRandomNr(2);
[000B] (48)   if (Local[1] == 0) {
[0012] (1E)     walkActorTo(9,126,112);
[0018] (48)   } else if (Local[1] == 1) {
[0022] (1E)     walkActorTo(9,150,112);
[0028] (48)   } else if (Local[1] == 2) {
[0032] (1E)     walkActorTo(9,166,112);
[0038] (18)     /* goto 003B; */
[003B] (**)   }
[003B] (AE)   WaitForActor(9);
[003E] (AC)   Exprmode Local[0] = (25 + <VAR_RESULT = getRandomNr(125)>);
[004B] (2B)   delayVariable(Local[0]);
[004E] (16)   Var[103] = getRandomNr(1);
[0052] (A8)   if (Var[103]) {
[0057] (11)     animateCostume(9,248);
[005A] (18)   } else {
[005D] (11)     animateCostume(9,249);
[0060] (**)   }
[0060] (AC)   Exprmode Local[0] = (25 + <VAR_RESULT = getRandomNr(125)>);
[006D] (2B)   delayVariable(Local[0]);
[0070] (18)   goto 0007;
[0073] (**) }
[0073] (A0) stopObjectCode();
END

Script# 206
[0000] (13) ActorOps(9,[Init(),Costume(23),Scale(255)]);
[0008] (5D) setClass(9,[150,149]);
[0012] (2D) putActorInRoom(9,54);
[0015] (01) putActor(9,126,112);
[001B] (11) animateCostume(9,248);
[001E] (48) if (VAR_VIDEOMODE == 30) {
[0025] (13)   ActorOps(9,[Palette(8,15)]);
[002B] (**) }
[002B] (2A) startScript(205,[],F);
[002E] (A0) stopObjectCode();
END

Script# 207
[0000] (40) cutscene([2]);
[0005] (DD) setClass(Local[0],[149,150]);
[000F] (9E) walkActorTo(VAR_EGO,266,124);
[0016] (AE) WaitForActor(Local[0]);
[001A] (9E) walkActorTo(VAR_EGO,266,116);
[0021] (AE) WaitForActor(Local[0]);
[0025] (9E) walkActorTo(VAR_EGO,285,116);
[002C] (AE) WaitForActor(Local[0]);
[0030] (DD) setClass(Local[0],[0]);
[0037] (C0) endCutscene();
[0038] (C8) if (Local[0] == VAR_EGO) {
[003F] (24)   loadRoomWithEgo(439,57,-1,-1);
[0047] (18) } else {
[004A] (AD)   putActorInRoom(Local[0],0);
[004E] (**) }
[004E] (A0) stopObjectCode();
END

Script# 208
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (AC)   Exprmode Local[1] = (Local[0] + <VAR_RESULT = getRandomNr(2)>);
[0014] (8F)   unless (getState(Local[1]) == 0) goto 0007;
[001A] (85)   drawObject(Local[1],255,255);
[0021] (80)   breakHere();
[0022] (18)   goto 0007;
[0025] (**) }
[0025] (A0) stopObjectCode();
END

Script# 209
[0000] (1A) VAR_VERB_SCRIPT = 18;
[0005] (0A) startScript(21,[3]);
[000B] (40) cutscene([2]);
[0010] (28) if (!Bit[51]) {
[0015] (91)   animateCostume(VAR_EGO,10);
[0019] (11)   animateCostume(4,11);
[001C] (80)   breakHere();
[001D] (80)   breakHere();
[001E] (80)   breakHere();
[001F] (91)   animateCostume(VAR_EGO,3);
[0023] (80)   breakHere();
[0024] (1A)   Bit[51] = 1;
[0029] (14)   print(4,[Text("Ooooh!" + wait() + "Grog-o-mint!" + wait() + "How refreshing!" + wait() + "Thanks.")]);
[005B] (AE)   WaitForMessage();
[005D] (D8)   printEgo([Text("Don't mention it.")]);
[0071] (AE)   WaitForMessage();
[0073] (14)   print(4,[Text("OK^I won't.")]);
[0082] (AE)   WaitForMessage();
[0084] (2A)   startScript(200,[],F);
[0087] (2E)   delay(13);
[008B] (B6)   walkActorToObject(VAR_EGO,401);
[0090] (AE)   WaitForActor(VAR_EGO);
[0094] (2E)   delay(54);
[0098] (D8)   printEgo([Text("Wait a minute^")]);
[00A9] (AE)   WaitForMessage();
[00AB] (B6)   walkActorToObject(VAR_EGO,402);
[00B0] (AE)   WaitForActor(VAR_EGO);
[00B4] (91)   animateCostume(VAR_EGO,244);
[00B8] (80)   breakHere();
[00B9] (62)   stopScript(200);
[00BB] (1E)   walkActorTo(4,54,125);
[00C1] (AE)   WaitForActor(4);
[00C4] (11)   animateCostume(4,245);
[00C7] (80)   breakHere();
[00C8] (07)   setState(407,1);
[00CC] (11)   animateCostume(4,10);
[00CF] (80)   breakHere();
[00D0] (80)   breakHere();
[00D1] (80)   breakHere();
[00D2] (13)   ActorOps(4,[TalkAnimNr(12,13)]);
[00D8] (1A)   Var[175] = 145;
[00DD] (1A)   Bit[23] = 0;
[00E2] (2C)   CursorShow();
[00E4] (2C)   UserputOn();
[00E6] (7A)   VerbOps(120,[Off()]);
[00EA] (7A)   VerbOps(121,[Off()]);
[00EE] (7A)   VerbOps(122,[Off()]);
[00F2] (7A)   VerbOps(123,[Off()]);
[00F6] (7A)   VerbOps(124,[Off()]);
[00FA] (7A)   VerbOps(125,[Off()]);
[00FE] (7A)   VerbOps(126,[Off()]);
[0102] (7A)   VerbOps(127,[Off()]);
[0106] (7A)   VerbOps(128,[Off()]);
[010A] (26)   setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0117] (26)   setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0124] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[0133] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I wanted to say goodbye."),On()]);
[0157] (5A)   Var[175] += 8;
[015C] (3A)   Var[103] -= 120;
[0161] (1A)   Bit[35 + Var[103]] = 1;
[0168] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[0177] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("Won't you help me now?"),On()]);
[0199] (5A)   Var[175] += 8;
[019E] (3A)   Var[103] -= 120;
[01A3] (1A)   Bit[35 + Var[103]] = 1;
[01AA] (18) } else {
[01AD] (14)   print(4,[Text("Why've you come back?  I don't need any more breath mints.")]);
[01EB] (AE)   WaitForMessage();
[01ED] (1A)   Var[175] = 145;
[01F2] (1A)   Bit[23] = 0;
[01F7] (2C)   CursorShow();
[01F9] (2C)   UserputOn();
[01FB] (7A)   VerbOps(120,[Off()]);
[01FF] (7A)   VerbOps(121,[Off()]);
[0203] (7A)   VerbOps(122,[Off()]);
[0207] (7A)   VerbOps(123,[Off()]);
[020B] (7A)   VerbOps(124,[Off()]);
[020F] (7A)   VerbOps(125,[Off()]);
[0213] (7A)   VerbOps(126,[Off()]);
[0217] (7A)   VerbOps(127,[Off()]);
[021B] (7A)   VerbOps(128,[Off()]);
[021F] (26)   setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[022C] (26)   setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0239] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[0248] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I haven't said a proper goodbye."),On()]);
[0274] (5A)   Var[175] += 8;
[0279] (3A)   Var[103] -= 120;
[027E] (1A)   Bit[35 + Var[103]] = 1;
[0285] (AC)   Exprmode Var[103] = ((120 + 5) - 1);
[0294] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("Do I get a reward for giving you a breath mint?"),On()]);
[02CF] (5A)   Var[175] += 8;
[02D4] (3A)   Var[103] -= 120;
[02D9] (1A)   Bit[35 + Var[103]] = 1;
[02E0] (**) }
[02E0] (A8) if (Bit[49]) {
[02E5] (28)   if (!Bit[52]) {
[02EA] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[02F9] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Do you know anything about a magic phrase?"),On()]);
[032F] (5A)     Var[175] += 8;
[0334] (3A)     Var[103] -= 120;
[0339] (1A)     Bit[35 + Var[103]] = 1;
[0340] (18)   } else {
[0343] (AC)     Exprmode Var[103] = ((120 + 6) - 1);
[0352] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Tell me again about the magic phrase."),On()]);
[0383] (5A)     Var[175] += 8;
[0388] (3A)     Var[103] -= 120;
[038D] (1A)     Bit[35 + Var[103]] = 1;
[0394] (**)   }
[0394] (**) }
[0394] (1A) Var[173] = 0;
[0399] (80) breakHere();
[039A] (A8) unless (Var[173]) goto 0399;
[039F] (48) if (Var[173] == 120) {
[03A6] (14)   print(4,[Text("Goodbye." + wait() + "And give my regards to the outside world.")]);
[03DD] (AE)   WaitForMessage();
[03DF] (D8)   printEgo([Text("Bye.")]);
[03E6] (18)   goto 09C1;
[03E9] (48) } else if (Var[173] == 121) {
[03F3] (14)   print(4,[Text("Well^" + wait() + "What do you want?")]);
[040F] (AE)   WaitForMessage();
[0411] (18)   goto 05E2;
[0414] (48) } else if (Var[173] == 122) {
[041E] (1A)   Bit[52] = 1;
[0423] (14)   print(4,[Text("No.")]);
[042A] (AE)   WaitForMessage();
[042C] (D8)   printEgo([Text("OK.  Thanks anyway.")]);
[0442] (AE)   WaitForMessage();
[0444] (2A)   startScript(200,[],F);
[0447] (2E)   delay(13);
[044B] (B6)   walkActorToObject(VAR_EGO,401);
[0450] (62)   stopScript(200);
[0452] (1E)   walkActorTo(4,54,125);
[0458] (AE)   WaitForActor(4);
[045B] (11)   animateCostume(4,245);
[045E] (80)   breakHere();
[045F] (07)   setState(407,1);
[0463] (11)   animateCostume(4,10);
[0466] (80)   breakHere();
[0467] (80)   breakHere();
[0468] (80)   breakHere();
[0469] (13)   ActorOps(4,[TalkAnimNr(12,13)]);
[046F] (14)   print(4,[Text("Wait!")]);
[0478] (AE)   WaitForMessage();
[047A] (B6)   walkActorToObject(VAR_EGO,402);
[047F] (AE)   WaitForActor(VAR_EGO);
[0483] (91)   animateCostume(VAR_EGO,244);
[0487] (80)   breakHere();
[0488] (14)   print(4,[Text("Tim once told me that Dave said that Ron wanted to know why `a third Shadow is nigh.`")]);
[04E1] (18)   goto 09C1;
[04E4] (48) } else if (Var[173] == 123) {
[04EE] (14)   print(4,[Text("That's nice, but I really have some intense pacing to do.   So, goodbye.")]);
[053A] (AE)   WaitForMessage();
[053C] (D8)   printEgo([Text("Bye.")]);
[0543] (18)   goto 09C1;
[0546] (48) } else if (Var[173] == 124) {
[0550] (14)   print(4,[Text("What kind of reward do you want?")]);
[0574] (AE)   WaitForMessage();
[0576] (18)   goto 05E2;
[0579] (48) } else if (Var[173] == 125) {
[0583] (14)   print(4,[Text("Tim once told me that Dave said that Ron wanted to know why `a third Shadow is nigh.`")]);
[05DC] (18)   goto 09C1;
[05DF] (18)   /* goto 05E2; */
[05E2] (**) }
[05E2] (1A) Var[175] = 145;
[05E7] (1A) Bit[23] = 0;
[05EC] (2C) CursorShow();
[05EE] (2C) UserputOn();
[05F0] (7A) VerbOps(120,[Off()]);
[05F4] (7A) VerbOps(121,[Off()]);
[05F8] (7A) VerbOps(122,[Off()]);
[05FC] (7A) VerbOps(123,[Off()]);
[0600] (7A) VerbOps(124,[Off()]);
[0604] (7A) VerbOps(125,[Off()]);
[0608] (7A) VerbOps(126,[Off()]);
[060C] (7A) VerbOps(127,[Off()]);
[0610] (7A) VerbOps(128,[Off()]);
[0614] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0621] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[062E] (28) if (!Bit[82]) {
[0633] (AC)   Exprmode Var[103] = ((120 + 7) - 1);
[0642] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I want to go home."),On()]);
[0660] (5A)   Var[175] += 8;
[0665] (3A)   Var[103] -= 120;
[066A] (1A)   Bit[35 + Var[103]] = 1;
[0671] (**) }
[0671] (28) if (!Bit[83]) {
[0676] (AC)   Exprmode Var[103] = ((120 + 5) - 1);
[0685] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I want to be in a circus."),On()]);
[06AA] (5A)   Var[175] += 8;
[06AF] (3A)   Var[103] -= 120;
[06B4] (1A)   Bit[35 + Var[103]] = 1;
[06BB] (**) }
[06BB] (A8) if (Bit[49]) {
[06C0] (AC)   Exprmode Var[103] = ((120 + 8) - 1);
[06CF] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I want the magic phrase."),On()]);
[06F3] (5A)   Var[175] += 8;
[06F8] (3A)   Var[103] -= 120;
[06FD] (1A)   Bit[35 + Var[103]] = 1;
[0704] (**) }
[0704] (AC) Exprmode Var[103] = ((120 + 9) - 1);
[0713] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("I want to be a pirate."),On()]);
[0735] (5A) Var[175] += 8;
[073A] (3A) Var[103] -= 120;
[073F] (1A) Bit[35 + Var[103]] = 1;
[0746] (1A) Var[173] = 0;
[074B] (80) breakHere();
[074C] (A8) unless (Var[173]) goto 074B;
[0751] (48) if (Var[173] == 124) {
[0758] (1A)   Bit[83] = 1;
[075D] (14)   print(4,[Text("You ought to talk to those guys who hang out on the street corner." + wait() + "They want to be in a circus, too.")]);
[07C6] (48) } else if (Var[173] == 126) {
[07D0] (1A)   Bit[82] = 1;
[07D5] (14)   print(4,[Text("I know what you mean." + wait() + "There's no place like home^" + wait() + "There's no place like home^" + newline() + "There's no place like home^" + wait() + "There's no place like home^" + newline() + "There's no place like home^" + newline() + "There's no place like home^")]);
[089C] (48) } else if (Var[173] == 127) {
[08A6] (1A)   Bit[52] = 1;
[08AB] (14)   print(4,[Text("I don't know a magic phrase.")]);
[08CB] (AE)   WaitForMessage();
[08CD] (D8)   printEgo([Text("Thanks anyway.")]);
[08DE] (AE)   WaitForMessage();
[08E0] (2A)   startScript(200,[],F);
[08E3] (2E)   delay(13);
[08E7] (B6)   walkActorToObject(VAR_EGO,401);
[08EC] (62)   stopScript(200);
[08EE] (1E)   walkActorTo(4,54,125);
[08F4] (AE)   WaitForActor(4);
[08F7] (11)   animateCostume(4,245);
[08FA] (80)   breakHere();
[08FB] (07)   setState(407,1);
[08FF] (11)   animateCostume(4,10);
[0902] (80)   breakHere();
[0903] (80)   breakHere();
[0904] (80)   breakHere();
[0905] (13)   ActorOps(4,[TalkAnimNr(12,13)]);
[090B] (14)   print(4,[Text("Wait!")]);
[0914] (AE)   WaitForActor(VAR_EGO);
[0918] (AE)   WaitForMessage();
[091A] (B6)   walkActorToObject(VAR_EGO,402);
[091F] (AE)   WaitForActor(VAR_EGO);
[0923] (91)   animateCostume(VAR_EGO,244);
[0927] (80)   breakHere();
[0928] (14)   print(4,[Text("But^" + wait() + "Tim once told me that Dave said that Ron wanted to know why `a third Shadow is nigh.`")]);
[0987] (48) } else if (Var[173] == 128) {
[0991] (14)   print(4,[Text("Then buy the real Monkey Island\x0F game!")]);
[09BB] (18)   /* goto 09BE; */
[09BE] (**) }
[09BE] (18) /* goto 09C1; */
[09C1] (AE) WaitForMessage();
[09C3] (14) print(4,[Text("Now leave me alone.")]);
[09DA] (AE) WaitForMessage();
[09DC] (C0) endCutscene();
[09DD] (9A) VAR_VERB_SCRIPT = Local[0];
[09E2] (0A) startScript(21,[2]);
[09E8] (2A) startScript(200,[],F);
[09EB] (A0) stopObjectCode();
END

// Object 401: Exit
Events:
   1 - 0022
   2 - 0022
   A - 0051
[0022] (D8) printEgo([Text("There's no door here, it's just an opening.")]);
[0050] (00) stopObjectCode();
[0051] (0A) startScript(207,[VAR_EGO]);
[0057] (00) stopObjectCode();
END

// Object 402: Cell 1
Events:
   1 - 001C
[001C] (9D) if (classOfIs(VAR_ME,[140])) {
[0025] (D8)   printEgo([Text("It's locked.")]);
[0034] (18) } else {
[0037] (D8)   printEgo([Text("I think it's welded shut now.")]);
[0057] (**) }
[0057] (00) stopObjectCode();
END

// Object 403: Cell 2
Events:
END

// Object 404: Lock 1
Events:
END

// Object 405: Lock 2
Events:
END

// Object 406: Otis
Events:
   9 - 0029
   D - 0054
  50 - 005A
  5A - 0063
[0029] (D8) printEgo([Text("I don't see anything special about him.")]);
[0053] (00) stopObjectCode();
[0054] (62) stopScript(200);
[0056] (2A) startScript(202,[],F);
[0059] (00) stopObjectCode();
[005A] (62) stopScript(200);
[005C] (2A) startScript(204,[Local[0]],F);
[0062] (00) stopObjectCode();
[0063] (1A) Var[171] = 13;
[0068] (00) stopObjectCode();
END

// Object 407
Events:
END

// Object 408
Events:
END

// Object 409
Events:
END

// Object 410
Events:
END

// Object 411
Events:
END

// Object 412
Events:
END

// Object 413
Events:
END

// Object 414
Events:
END

// Object 415
Events:
END

// Object 416
Events:
END

// Object 417
Events:
END

// Object 418
Events:
END

// Object 419
Events:
END

// Object 420
Events:
END