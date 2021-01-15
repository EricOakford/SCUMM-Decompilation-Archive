/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 54: Jail
 */

// EN
[0000] (6A) startScript(208,[412],F,R);
[0006] (6A) startScript(208,[415],F,R);
[000C] (6A) startScript(208,[418],F,R);
[0012] (28) if (!Bit[20]) {
[0017] (2A)   startScript(201,[],F);
[001A] (**) }
[001A] (28) if (!Bit[37]) {
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
[0014] (A8) if (Bit[21 + 1]) {
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
[0053] (A8)   if (Bit[156]) {
[0058] (9E)     walkActorTo(VAR_EGO,95,140);
[005F] (AE)     WaitForActor(VAR_EGO);
[0063] (D8)     printEgo([Text("I'm not talking to him until he does something about his breath.")]);
[00A6] (AE)     WaitForMessage();
[00A8] (18)   } else {
[00AB] (1A)     Bit[156] = 1;
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
[0189] (28) } else if (!Bit[129]) {
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
[0038] (0A)   startScript(12,[]);
[003B] (5D)   setClass(406,[6]);
[0042] (42)   chainScript(209,[VAR_VERB_SCRIPT]);
[0048] (28) } else if (!Bit[132]) {
[0050] (40)   cutscene([]);
[0052] (58)   beginOverride();
[0054] (18)   goto 009B;
[0057] (14)   print(4,[Text("I don't want anything but my freedom!" + wait() + "^and maybe a breath mint.")]);
[009B] (AE)   WaitForMessage();
[009D] (C0)   endCutscene();
[009E] (18) } else {
[00A1] (14)   print(4,[Text("Now that I have good breath," + newline() + "all I want is my freedom!")]);
[00DC] (AE)   WaitForMessage();
[00DE] (**) }
[00DE] (2A) startScript(200,[],F);
[00E1] (A0) stopObjectCode();
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
[0008] (48) if (VAR_VIDEOMODE == 30) {
[000F] (13)   ActorOps(9,[Palette(8,15)]);
[0015] (**) }
[0015] (5D) setClass(9,[150,149]);
[001F] (2D) putActorInRoom(9,54);
[0022] (01) putActor(9,126,112);
[0028] (11) animateCostume(9,248);
[002B] (2A) startScript(205,[],F);
[002E] (A0) stopObjectCode();
END

Script# 207
[0000] (40) cutscene([2]);
[0005] (DD) setClass(Local[0],[149,150]);
[000F] (9E) walkActorTo(Local[0],266,124);
[0016] (AE) WaitForActor(Local[0]);
[001A] (9E) walkActorTo(Local[0],266,116);
[0021] (AE) WaitForActor(Local[0]);
[0025] (9E) walkActorTo(Local[0],285,116);
[002C] (AE) WaitForActor(Local[0]);
[0030] (DD) setClass(Local[0],[0]);
[0037] (C0) endCutscene();
[0038] (C8) if (Local[0] == VAR_EGO) {
[003F] (24)   loadRoomWithEgo(425,56,-1,-1);
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
[0010] (28) if (!Bit[132]) {
[0015] (91)   animateCostume(VAR_EGO,10);
[0019] (11)   animateCostume(4,11);
[001C] (80)   breakHere();
[001D] (80)   breakHere();
[001E] (80)   breakHere();
[001F] (91)   animateCostume(VAR_EGO,3);
[0023] (80)   breakHere();
[0024] (1A)   Bit[132] = 1;
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
[00D8] (14)   print(4,[Text("Why have you come back?  I don't need any more breath mints.")]);
[0118] (AE)   WaitForMessage();
[011A] (1A)   Var[197] = 145;
[011F] (1A)   Bit[28] = 0;
[0124] (2C)   CursorShow();
[0126] (2C)   UserputOn();
[0128] (7A)   VerbOps(120,[Off()]);
[012C] (7A)   VerbOps(121,[Off()]);
[0130] (7A)   VerbOps(122,[Off()]);
[0134] (7A)   VerbOps(123,[Off()]);
[0138] (7A)   VerbOps(124,[Off()]);
[013C] (7A)   VerbOps(125,[Off()]);
[0140] (7A)   VerbOps(126,[Off()]);
[0144] (7A)   VerbOps(127,[Off()]);
[0148] (7A)   VerbOps(128,[Off()]);
[014C] (26)   setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0159] (26)   setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[0166] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[0175] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("I forgot to say goodbye."),On()]);
[0199] (5A)   Var[197] += 8;
[019E] (48)   if (Var[364] == 3) {
[01A5] (3A)     Var[103] -= 120;
[01AA] (1A)     Bit[40 + Var[103]] = 1;
[01B1] (**)   }
[01B1] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[01C0] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Won't you help me now?"),On()]);
[01E2] (5A)   Var[197] += 8;
[01E7] (48)   if (Var[364] == 3) {
[01EE] (3A)     Var[103] -= 120;
[01F3] (1A)     Bit[40 + Var[103]] = 1;
[01FA] (**)   }
[01FA] (18)   goto 036B;
[01FD] (18) } else {
[0200] (62)   stopScript(200);
[0202] (1E)   walkActorTo(4,54,125);
[0208] (AE)   WaitForActor(4);
[020B] (11)   animateCostume(4,245);
[020E] (80)   breakHere();
[020F] (07)   setState(407,1);
[0213] (11)   animateCostume(4,10);
[0216] (80)   breakHere();
[0217] (80)   breakHere();
[0218] (80)   breakHere();
[0219] (13)   ActorOps(4,[TalkAnimNr(12,13)]);
[021F] (14)   print(4,[Text("Why have you come back?  I don't need any more breath mints.")]);
[025F] (AE)   WaitForMessage();
[0261] (1A)   Var[197] = 145;
[0266] (1A)   Bit[28] = 0;
[026B] (2C)   CursorShow();
[026D] (2C)   UserputOn();
[026F] (7A)   VerbOps(120,[Off()]);
[0273] (7A)   VerbOps(121,[Off()]);
[0277] (7A)   VerbOps(122,[Off()]);
[027B] (7A)   VerbOps(123,[Off()]);
[027F] (7A)   VerbOps(124,[Off()]);
[0283] (7A)   VerbOps(125,[Off()]);
[0287] (7A)   VerbOps(126,[Off()]);
[028B] (7A)   VerbOps(127,[Off()]);
[028F] (7A)   VerbOps(128,[Off()]);
[0293] (26)   setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[02A0] (26)   setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[02AD] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[02BC] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("I still haven't properly said goodbye."),On()]);
[02EE] (5A)   Var[197] += 8;
[02F3] (48)   if (Var[364] == 3) {
[02FA] (3A)     Var[103] -= 120;
[02FF] (1A)     Bit[40 + Var[103]] = 1;
[0306] (**)   }
[0306] (AC)   Exprmode Var[103] = ((120 + 5) - 1);
[0315] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Do I get a reward for giving you a breath mint?"),On()]);
[0350] (5A)   Var[197] += 8;
[0355] (48)   if (Var[364] == 3) {
[035C] (3A)     Var[103] -= 120;
[0361] (1A)     Bit[40 + Var[103]] = 1;
[0368] (**)   }
[0368] (18)   /* goto 036B; */
[036B] (**) }
[036B] (A8) if (Bit[129]) {
[0370] (28)   if (!Bit[130]) {
[0375] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[0384] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Do you know anything about a magic phrase?"),On()]);
[03BA] (5A)     Var[197] += 8;
[03BF] (48)     if (Var[364] == 3) {
[03C6] (3A)       Var[103] -= 120;
[03CB] (1A)       Bit[40 + Var[103]] = 1;
[03D2] (**)     }
[03D2] (18)   } else {
[03D5] (AC)     Exprmode Var[103] = ((120 + 6) - 1);
[03E4] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Tell me again about the magic phrase."),On()]);
[0415] (5A)     Var[197] += 8;
[041A] (48)     if (Var[364] == 3) {
[0421] (3A)       Var[103] -= 120;
[0426] (1A)       Bit[40 + Var[103]] = 1;
[042D] (**)     }
[042D] (**)   }
[042D] (**) }
[042D] (1A) Var[190] = 0;
[0432] (80) breakHere();
[0433] (A8) unless (Var[190]) goto 0432;
[0438] (48) if (Var[190] == 120) {
[043F] (14)   print(4,[Text("Goodbye." + wait() + "And give my regards to the outside world.")]);
[0476] (AE)   WaitForMessage();
[0478] (D8)   printEgo([Text("Bye.")]);
[047F] (18)   goto 0B06;
[0482] (48) } else if (Var[190] == 121) {
[048C] (14)   print(4,[Text("Well^" + wait() + "What do you want?")]);
[04A8] (AE)   WaitForMessage();
[04AA] (18)   goto 067D;
[04AD] (48) } else if (Var[190] == 125) {
[04B7] (1A)   Bit[130] = 1;
[04BC] (14)   print(4,[Text("Tim and Dave told me to tell you that Ron said that I should tell you that \x19a third Shadow is nigh.\x19")]);
[0524] (18)   goto 0B06;
[0527] (48) } else if (Var[190] == 123) {
[0531] (14)   print(4,[Text("That's nice, but I really have some intense pacing to do, so, goodbye.")]);
[057B] (18)   goto 0B06;
[057E] (48) } else if (Var[190] == 124) {
[0588] (14)   print(4,[Text("What kind of reward?")]);
[05A0] (AE)   WaitForMessage();
[05A2] (18)   goto 067D;
[05A5] (48) } else if (Var[190] == 122) {
[05AF] (1A)   Bit[130] = 1;
[05B4] (14)   print(4,[Text("No.")]);
[05BB] (AE)   WaitForMessage();
[05BD] (D8)   printEgo([Text("OK.  Thanks anyway.")]);
[05D3] (AE)   WaitForMessage();
[05D5] (2A)   startScript(200,[],F);
[05D8] (2E)   delay(13);
[05DC] (B6)   walkActorToObject(VAR_EGO,401);
[05E1] (62)   stopScript(200);
[05E3] (1E)   walkActorTo(4,54,125);
[05E9] (AE)   WaitForActor(4);
[05EC] (11)   animateCostume(4,245);
[05EF] (80)   breakHere();
[05F0] (07)   setState(407,1);
[05F4] (11)   animateCostume(4,10);
[05F7] (80)   breakHere();
[05F8] (80)   breakHere();
[05F9] (80)   breakHere();
[05FA] (13)   ActorOps(4,[TalkAnimNr(12,13)]);
[0600] (14)   print(4,[Text("Wait!")]);
[0609] (AE)   WaitForMessage();
[060B] (B6)   walkActorToObject(VAR_EGO,402);
[0610] (AE)   WaitForActor(VAR_EGO);
[0614] (91)   animateCostume(VAR_EGO,244);
[0618] (80)   breakHere();
[0619] (14)   print(4,[Text("Tim once told me that Dave said that Ron wanted you to know that \x19a third Shadow is nigh.\x19")]);
[0677] (18)   goto 0B06;
[067A] (18)   /* goto 067D; */
[067D] (**) }
[067D] (1A) Var[197] = 145;
[0682] (1A) Bit[28] = 0;
[0687] (2C) CursorShow();
[0689] (2C) UserputOn();
[068B] (7A) VerbOps(120,[Off()]);
[068F] (7A) VerbOps(121,[Off()]);
[0693] (7A) VerbOps(122,[Off()]);
[0697] (7A) VerbOps(123,[Off()]);
[069B] (7A) VerbOps(124,[Off()]);
[069F] (7A) VerbOps(125,[Off()]);
[06A3] (7A) VerbOps(126,[Off()]);
[06A7] (7A) VerbOps(127,[Off()]);
[06AB] (7A) VerbOps(128,[Off()]);
[06AF] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[06BC] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[06C9] (28) if (!Bit[145 + 7]) {
[06D0] (AC)   Exprmode Var[103] = ((120 + 7) - 1);
[06DF] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to go home."),On()]);
[06FD] (5A)   Var[197] += 8;
[0702] (48)   if (Var[364] == 3) {
[0709] (3A)     Var[103] -= 120;
[070E] (1A)     Bit[40 + Var[103]] = 1;
[0715] (**)   }
[0715] (**) }
[0715] (28) if (!Bit[145 + 5]) {
[071C] (AC)   Exprmode Var[103] = ((120 + 5) - 1);
[072B] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to be in a circus."),On()]);
[0750] (5A)   Var[197] += 8;
[0755] (48)   if (Var[364] == 3) {
[075C] (3A)     Var[103] -= 120;
[0761] (1A)     Bit[40 + Var[103]] = 1;
[0768] (**)   }
[0768] (**) }
[0768] (A8) if (Bit[129]) {
[076D] (AC)   Exprmode Var[103] = ((120 + 8) - 1);
[077C] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want the magic phrase."),On()]);
[07A0] (5A)   Var[197] += 8;
[07A5] (48)   if (Var[364] == 3) {
[07AC] (3A)     Var[103] -= 120;
[07B1] (1A)     Bit[40 + Var[103]] = 1;
[07B8] (**)   }
[07B8] (**) }
[07B8] (AC) Exprmode Var[103] = ((120 + 9) - 1);
[07C7] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to be a pirate."),On()]);
[07E9] (5A) Var[197] += 8;
[07EE] (48) if (Var[364] == 3) {
[07F5] (3A)   Var[103] -= 120;
[07FA] (1A)   Bit[40 + Var[103]] = 1;
[0801] (**) }
[0801] (1A) Var[190] = 0;
[0806] (80) breakHere();
[0807] (A8) unless (Var[190]) goto 0806;
[080C] (48) if (Var[190] == 120) {
[0813] (14)   print(4,[Text("Then try out for the Olympics.")]);
[0835] (1A)   Bit[145 + 1] = 1;
[083C] (48) } else if (Var[190] == 121) {
[0846] (14)   print(4,[Text("Do I look like the Tooth Fairy?")]);
[0869] (1A)   Bit[145 + 2] = 1;
[0870] (48) } else if (Var[190] == 122) {
[087A] (14)   print(4,[Text("What do you think this is? Loom?")]);
[089E] (1A)   Bit[145 + 3] = 1;
[08A5] (48) } else if (Var[190] == 124) {
[08AF] (14)   print(4,[Text("You should meet those guys on the street corner." + wait() + "They want to be in a circus, too.")]);
[0906] (1A)   Bit[145 + 5] = 1;
[090D] (48) } else if (Var[190] == 126) {
[0917] (14)   print(4,[Text("I know what you mean." + wait() + "There's no place like home^" + wait() + "There's no place like home^" + newline() + "There's no place like home^" + wait() + "There's no place like home^" + newline() + "There's no place like home^" + newline() + "There's no place like home^")]);
[09DE] (1A)   Bit[145 + 7] = 1;
[09E5] (48) } else if (Var[190] == 127) {
[09EF] (1A)   Bit[130] = 1;
[09F4] (14)   print(4,[Text("I don't know a magic phrase.")]);
[0A14] (AE)   WaitForMessage();
[0A16] (D8)   printEgo([Text("Thanks anyway.")]);
[0A27] (AE)   WaitForMessage();
[0A29] (2A)   startScript(200,[],F);
[0A2C] (2E)   delay(13);
[0A30] (B6)   walkActorToObject(VAR_EGO,401);
[0A35] (62)   stopScript(200);
[0A37] (1E)   walkActorTo(4,54,125);
[0A3D] (AE)   WaitForActor(4);
[0A40] (11)   animateCostume(4,245);
[0A43] (80)   breakHere();
[0A44] (07)   setState(407,1);
[0A48] (11)   animateCostume(4,10);
[0A4B] (80)   breakHere();
[0A4C] (80)   breakHere();
[0A4D] (80)   breakHere();
[0A4E] (13)   ActorOps(4,[TalkAnimNr(12,13)]);
[0A54] (14)   print(4,[Text("Wait!")]);
[0A5D] (AE)   WaitForActor(VAR_EGO);
[0A61] (AE)   WaitForMessage();
[0A63] (B6)   walkActorToObject(VAR_EGO,402);
[0A68] (AE)   WaitForActor(VAR_EGO);
[0A6C] (91)   animateCostume(VAR_EGO,244);
[0A70] (80)   breakHere();
[0A71] (14)   print(4,[Text("But^" + wait() + "Tim once told me that Dave said that Ron wanted you to know that \x19a third Shadow is nigh.\x19")]);
[0AD5] (48) } else if (Var[190] == 128) {
[0ADF] (14)   print(4,[Text("And I want my freedom!")]);
[0AF9] (1A)   Bit[145 + 9] = 1;
[0B00] (18)   /* goto 0B03; */
[0B03] (**) }
[0B03] (18) /* goto 0B06; */
[0B06] (AE) WaitForMessage();
[0B08] (14) print(4,[Text("Now leave me alone.")]);
[0B1F] (AE) WaitForMessage();
[0B21] (C0) endCutscene();
[0B22] (9A) VAR_VERB_SCRIPT = Local[0];
[0B27] (0A) startScript(21,[2]);
[0B2D] (2A) startScript(200,[],F);
[0B30] (A0) stopObjectCode();
END

// Object 401: Exit
Events:
   1 - 001F
   A - 0038
[001F] (D8) printEgo([Text("There's no door here.")]);
[0037] (00) stopObjectCode();
[0038] (0A) startScript(207,[VAR_EGO]);
[003E] (00) stopObjectCode();
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
[0063] (1A) Var[194] = 13;
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