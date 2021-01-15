/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 53: Fortune Teller's House (fortune)
 */

// EN
[0000] (07) setState(398,0);
[0004] (07) setState(399,0);
[0008] (07) setState(397,1);
[000C] (2A) startScript(200,[],F);
[000F] (2A) startScript(201,[],F);
[0012] (2A) startScript(206,[],F);
[0015] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (80) breakHere();
[0001] (12) panCameraTo(160);
[0004] (80) breakHere();
[0005] (48) if (Var[104] == 57) {
[000C] (9E)   walkActorTo(VAR_EGO,122,106);
[0013] (AE)   WaitForActor(VAR_EGO);
[0017] (0A)   startScript(27,[381]);
[001D] (**) }
[001D] (80) breakHere();
[001E] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[0023] (44) unless (VAR_RESULT > 4) goto 001D;
[002A] (40) cutscene([2]);
[002F] (07) setState(397,0);
[0033] (2D) putActorInRoom(4,53);
[0036] (01) putActor(4,327,105);
[003C] (B6) walkActorToObject(VAR_EGO,396);
[0041] (AE) WaitForActor(VAR_EGO);
[0045] (12) panCameraTo(336);
[0048] (AE) WaitForCamera();
[004A] (07) setState(398,1);
[004E] (07) setState(399,1);
[0052] (0A) startScript(203,[]);
[0055] (C0) endCutscene();
[0056] (80) breakHere();
[0057] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[005C] (78) unless (VAR_RESULT < 4) goto 0056;
[0063] (40) cutscene([2]);
[0068] (12) panCameraTo(160);
[006B] (80) breakHere();
[006C] (48) unless (VAR_CAMERA_POS_X == 160) goto 006B;
[0073] (07) setState(397,1);
[0077] (2D) putActorInRoom(4,0);
[007A] (C0) endCutscene();
[007B] (18) goto 001D;
[007E] (A0) stopObjectCode();
END

Script# 201
[0000] (13) ActorOps(3,[Costume(18),TalkColor(2),Scale(255)]);
[0009] (AC) Exprmode Var[103] = (0 - 100);
[0014] (13) ActorOps(3,[Elevation(Var[103])]);
[001A] (5D) setClass(3,[150]);
[0021] (2D) putActorInRoom(3,53);
[0024] (01) putActor(3,360,0);
[002A] (11) animateCostume(3,250);
[002D] (2A) startScript(202,[],F);
[0030] (A0) stopObjectCode();
END

Script# 202
[0000] (11) animateCostume(3,9);
[0003] (AC) Exprmode Local[0] = (300 + <VAR_RESULT = getRandomNr(0)>);
[0010] (2B) delayVariable(Local[0]);
[0013] (11) animateCostume(3,8);
[0016] (AC) Exprmode Local[0] = (300 + <VAR_RESULT = getRandomNr(0)>);
[0023] (2B) delayVariable(Local[0]);
[0026] (18) goto 0000;
[0029] (A0) stopObjectCode();
END

Script# 203 // Talk to Fortune Teller
[0000] (9A) Local[0] = VAR_VERB_SCRIPT;
[0005] (1A) VAR_VERB_SCRIPT = 18;
[000A] (0A) startScript(21,[3]);
[0010] (40) cutscene([]);
[0012] (10) VAR_RESULT = getObjectOwner(306);
[0017] (88) if (VAR_RESULT != VAR_EGO) {
[001E] (A8)   if (Bit[49]) {
[0023] (14)     print(3,[Text("I thought I told you to bring me a fish.")]);
[004F] (18)   } else {
[0052] (14)     print(3,[Text("Greetings^" + wait() + "^have you brought me a fish?")]);
[007E] (AE)     WaitForMessage();
[0080] (1A)     Var[197] = 145;
[0085] (1A)     Bit[28] = 0;
[008A] (2C)     CursorShow();
[008C] (2C)     UserputOn();
[008E] (7A)     VerbOps(120,[Off()]);
[0092] (7A)     VerbOps(121,[Off()]);
[0096] (7A)     VerbOps(122,[Off()]);
[009A] (7A)     VerbOps(123,[Off()]);
[009E] (7A)     VerbOps(124,[Off()]);
[00A2] (7A)     VerbOps(125,[Off()]);
[00A6] (7A)     VerbOps(126,[Off()]);
[00AA] (7A)     VerbOps(127,[Off()]);
[00AE] (7A)     VerbOps(128,[Off()]);
[00B2] (26)     setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[00BF] (26)     setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[00CC] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[00DB] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Were you dropped on your head as a child?"),On()]);
[0110] (5A)     Var[197] += 8;
[0115] (48)     if (Var[364] == 3) {
[011C] (3A)       Var[103] -= 120;
[0121] (1A)       Bit[40 + Var[103]] = 1;
[0128] (**)     }
[0128] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[0137] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, but I have a barber named Dominique."),On()]);
[016B] (5A)     Var[197] += 8;
[0170] (48)     if (Var[364] == 3) {
[0177] (3A)       Var[103] -= 120;
[017C] (1A)       Bit[40 + Var[103]] = 1;
[0183] (**)     }
[0183] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[0192] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, but my yak has wax lips."),On()]);
[01BA] (5A)     Var[197] += 8;
[01BF] (48)     if (Var[364] == 3) {
[01C6] (3A)       Var[103] -= 120;
[01CB] (1A)       Bit[40 + Var[103]] = 1;
[01D2] (**)     }
[01D2] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[01E1] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("What are you talking about?"),On()]);
[0208] (5A)     Var[197] += 8;
[020D] (48)     if (Var[364] == 3) {
[0214] (3A)       Var[103] -= 120;
[0219] (1A)       Bit[40 + Var[103]] = 1;
[0220] (**)     }
[0220] (A8)     if (Bit[129]) {
[0225] (28)       if (!Bit[131]) {
[022A] (AC)         Exprmode Var[103] = ((120 + 5) - 1);
[0239] (FA)         VerbOps(Var[103],[SetXY(0,Var[197]),Text("Fish?  What fish?  I need a magic phrase."),On()]);
[026E] (5A)         Var[197] += 8;
[0273] (48)         if (Var[364] == 3) {
[027A] (3A)           Var[103] -= 120;
[027F] (1A)           Bit[40 + Var[103]] = 1;
[0286] (**)         }
[0286] (**)       }
[0286] (**)     }
[0286] (1A)     Var[190] = 0;
[028B] (80)     breakHere();
[028C] (A8)     unless (Var[190]) goto 028B;
[0291] (48)     if (Var[190] == 120) {
[0298] (14)       print(3,[Text("I'm ignoring you.")]);
[02AD] (48)     } else if (Var[190] == 121) {
[02B7] (14)       print(3,[Text("You must have mistaken me for someone else.")]);
[02E6] (48)     } else if (Var[190] == 122) {
[02F0] (14)       print(3,[Text("Flattery will get you nowhere.")]);
[0312] (48)     } else if (Var[190] == 123) {
[031C] (14)       print(3,[Text("Never mind.")]);
[032B] (48)     } else if (Var[190] == 124) {
[0335] (14)       print(3,[Text("You dare ask me for the magic phrase without a fish?" + wait() + "I cannot believe your audacity.")]);
[038E] (18)       /* goto 0391; */
[0391] (**)     }
[0391] (1A)     Bit[49] = 1;
[0396] (**)   }
[0396] (AE)   WaitForMessage();
[0398] (14)   print(3,[Text("Come back when you have a fish.")]);
[03BB] (AE)   WaitForMessage();
[03BD] (18)   goto 248E;
[03C0] (18) } else {
[03C3] (A8)   if (Bit[50]) {
[03C8] (A8)     if (Bit[51]) {
[03CD] (A8)       if (Bit[53]) {
[03D2] (A8)         if (Bit[52]) {
[03D7] (14)           print(3,[Text("I'm very tired, boy." + wait() + "Here's a magic phrase to tide you over:" + wait() + "\x19Perhaps you should get a new faculty advisor.\x19" + wait() + "Now, begone!")]);
[0457] (1A)           Bit[131] = 1;
[045C] (18)           goto 248E;
[045F] (**)         }
[045F] (**)       }
[045F] (**)     }
[045F] (48)     if (Var[391] == 1) {
[0466] (14)       print(3,[Text("Hello again, Guybrush Threepwood.")]);
[048B] (48)     } else if (Var[391] == 2) {
[0495] (14)       print(3,[Text("You want to talk more?" + wait() + "You must be awfully lonely.")]);
[04CC] (48)     } else if (Var[391] == 3) {
[04D6] (14)       print(3,[Text("How much more information do you think I'll give you?")]);
[050F] (18)     } else {
[0512] (14)       print(3,[Text("You're dense!")]);
[0523] (**)     }
[0523] (AC)     Exprmode Var[391] = (Var[391] + 1);
[052E] (AE)     WaitForMessage();
[0530] (14)     print(3,[Text("Have you brought me more fish?")]);
[0552] (AE)     WaitForMessage();
[0554] (1A)     Var[197] = 145;
[0559] (1A)     Bit[28] = 0;
[055E] (2C)     CursorShow();
[0560] (2C)     UserputOn();
[0562] (7A)     VerbOps(120,[Off()]);
[0566] (7A)     VerbOps(121,[Off()]);
[056A] (7A)     VerbOps(122,[Off()]);
[056E] (7A)     VerbOps(123,[Off()]);
[0572] (7A)     VerbOps(124,[Off()]);
[0576] (7A)     VerbOps(125,[Off()]);
[057A] (7A)     VerbOps(126,[Off()]);
[057E] (7A)     VerbOps(127,[Off()]);
[0582] (7A)     VerbOps(128,[Off()]);
[0586] (26)     setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0593] (26)     setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[05A0] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[05AF] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yes.  And I want your help again."),On()]);
[05DC] (5A)     Var[197] += 8;
[05E1] (48)     if (Var[364] == 3) {
[05E8] (3A)       Var[103] -= 120;
[05ED] (1A)       Bit[40 + Var[103]] = 1;
[05F4] (**)     }
[05F4] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[0603] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yes, but I'll only give you a piece."),On()]);
[0633] (5A)     Var[197] += 8;
[0638] (48)     if (Var[364] == 3) {
[063F] (3A)       Var[103] -= 120;
[0644] (1A)       Bit[40 + Var[103]] = 1;
[064B] (**)     }
[064B] (A8)     if (Bit[129]) {
[0650] (28)       if (!Bit[131]) {
[0655] (AC)         Exprmode Var[103] = ((120 + 5) - 1);
[0664] (FA)         VerbOps(Var[103],[SetXY(0,Var[197]),Text("Forget the fish.  I need a magic phrase."),On()]);
[0698] (5A)         Var[197] += 8;
[069D] (48)         if (Var[364] == 3) {
[06A4] (3A)           Var[103] -= 120;
[06A9] (1A)           Bit[40 + Var[103]] = 1;
[06B0] (**)         }
[06B0] (18)       } else {
[06B3] (AC)         Exprmode Var[103] = ((120 + 5) - 1);
[06C2] (FA)         VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yeah.  But I just forgot the magic phrase."),On()]);
[06F8] (5A)         Var[197] += 8;
[06FD] (48)         if (Var[364] == 3) {
[0704] (3A)           Var[103] -= 120;
[0709] (1A)           Bit[40 + Var[103]] = 1;
[0710] (**)         }
[0710] (**)       }
[0710] (**)     }
[0710] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[071F] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Oops.  I didn't mean to talk to you again."),On()]);
[0755] (5A)     Var[197] += 8;
[075A] (48)     if (Var[364] == 3) {
[0761] (3A)       Var[103] -= 120;
[0766] (1A)       Bit[40 + Var[103]] = 1;
[076D] (**)     }
[076D] (1A)     Var[190] = 0;
[0772] (80)     breakHere();
[0773] (A8)     unless (Var[190]) goto 0772;
[0778] (48)     if (Var[190] == 120) {
[077F] (14)       print(3,[Text("Yes.  Most people do.")]);
[0798] (AE)       WaitForMessage();
[079A] (48)     } else if (Var[190] == 121) {
[07A4] (14)       print(3,[Text("I thought I told you that you don't need anything again in this demo.")]);
[07ED] (AE)       WaitForMessage();
[07EF] (D8)       printEgo([Text("Then why do you want more fish?")]);
[0811] (AE)       WaitForMessage();
[0813] (14)       print(3,[Text("Greed." + wait() + "Boy, never give in to greed." + wait() + "It's an ugly thing." + wait() + "Now give me part of your fish.")]);
[0870] (AE)       WaitForMessage();
[0872] (48)     } else if (Var[190] == 122) {
[087C] (14)       print(3,[Text("Then get out of my face.")]);
[0898] (AE)       WaitForMessage();
[089A] (18)       goto 248E;
[089D] (48)     } else if (Var[190] == 124) {
[08A7] (14)       print(3,[Text("I'm a lonely fortune teller." + wait() + "Talk to me for a while before I give you the magic phrase.")]);
[0903] (AE)       WaitForMessage();
[0905] (18)       /* goto 0908; */
[0908] (**)     }
[0908] (1A)     Var[391] = 1;
[090D] (1A)     Bit[50] = 1;
[0912] (11)     animateCostume(3,7);
[0915] (0A)     startScript(204,[]);
[0918] (80)     breakHere();
[0919] (68)     VAR_RESULT = isScriptRunning(204);
[091D] (28)     unless (!VAR_RESULT) goto 0918;
[0922] (14)     print(3,[Text("Put part of the fish into the cauldron^ Guybrush Threepwood.")]);
[0962] (AE)     WaitForMessage();
[0964] (91)     animateCostume(VAR_EGO,10);
[0968] (80)     breakHere();
[0969] (80)     breakHere();
[096A] (80)     breakHere();
[096B] (91)     animateCostume(VAR_EGO,3);
[096F] (18)   } else {
[0972] (14)     print(3,[Text("Ah, I see you have brought a fish^" + wait() + "Give it to me.")]);
[09A8] (AE)     WaitForMessage();
[09AA] (1A)     Var[197] = 145;
[09AF] (1A)     Bit[28] = 0;
[09B4] (2C)     CursorShow();
[09B6] (2C)     UserputOn();
[09B8] (7A)     VerbOps(120,[Off()]);
[09BC] (7A)     VerbOps(121,[Off()]);
[09C0] (7A)     VerbOps(122,[Off()]);
[09C4] (7A)     VerbOps(123,[Off()]);
[09C8] (7A)     VerbOps(124,[Off()]);
[09CC] (7A)     VerbOps(125,[Off()]);
[09D0] (7A)     VerbOps(126,[Off()]);
[09D4] (7A)     VerbOps(127,[Off()]);
[09D8] (7A)     VerbOps(128,[Off()]);
[09DC] (26)     setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[09E9] (26)     setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[09F6] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[0A05] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Okay, but only a piece."),On()]);
[0A28] (5A)     Var[197] += 8;
[0A2D] (48)     if (Var[364] == 3) {
[0A34] (3A)       Var[103] -= 120;
[0A39] (1A)       Bit[40 + Var[103]] = 1;
[0A40] (**)     }
[0A40] (A8)     if (Bit[129]) {
[0A45] (AC)       Exprmode Var[103] = ((120 + 5) - 1);
[0A54] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("But all I'm looking for is the magic phrase."),On()]);
[0A8C] (5A)       Var[197] += 8;
[0A91] (48)       if (Var[364] == 3) {
[0A98] (3A)         Var[103] -= 120;
[0A9D] (1A)         Bit[40 + Var[103]] = 1;
[0AA4] (**)       }
[0AA4] (**)     }
[0AA4] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[0AB3] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("I wouldn't give you the time of day."),On()]);
[0AE3] (5A)     Var[197] += 8;
[0AE8] (48)     if (Var[364] == 3) {
[0AEF] (3A)       Var[103] -= 120;
[0AF4] (1A)       Bit[40 + Var[103]] = 1;
[0AFB] (**)     }
[0AFB] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[0B0A] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Fish?  I have no fish."),On()]);
[0B2C] (5A)     Var[197] += 8;
[0B31] (48)     if (Var[364] == 3) {
[0B38] (3A)       Var[103] -= 120;
[0B3D] (1A)       Bit[40 + Var[103]] = 1;
[0B44] (**)     }
[0B44] (1A)     Var[190] = 0;
[0B49] (80)     breakHere();
[0B4A] (A8)     unless (Var[190]) goto 0B49;
[0B4F] (48)     if (Var[190] == 121) {
[0B56] (14)       print(3,[Text("What are you afraid of, boy?" + wait() + "You can't die in a demo^" + wait() + "^But have it your way.")]);
[0BA8] (AE)       WaitForMessage();
[0BAA] (48)     } else if (Var[190] == 122) {
[0BB4] (14)       print(3,[Text("Then get out of my face.")]);
[0BD0] (AE)       WaitForMessage();
[0BD2] (18)       goto 248E;
[0BD5] (48)     } else if (Var[190] == 123) {
[0BDF] (14)       print(3,[Text("No fishie, no talkie.")]);
[0BF8] (AE)       WaitForMessage();
[0BFA] (18)       goto 248E;
[0BFD] (48)     } else if (Var[190] == 124) {
[0C07] (14)       print(3,[Text("I'm a lonely fortune teller." + wait() + "Talk to me a while before I give you the magic phrase.")]);
[0C5F] (AE)       WaitForMessage();
[0C61] (18)       /* goto 0C64; */
[0C64] (**)     }
[0C64] (1A)     Var[391] = 1;
[0C69] (1A)     Bit[50] = 1;
[0C6E] (11)     animateCostume(3,7);
[0C71] (0A)     startScript(204,[]);
[0C74] (80)     breakHere();
[0C75] (68)     VAR_RESULT = isScriptRunning(204);
[0C79] (28)     unless (!VAR_RESULT) goto 0C74;
[0C7E] (11)     animateCostume(3,11);
[0C81] (80)     breakHere();
[0C82] (80)     breakHere();
[0C83] (80)     breakHere();
[0C84] (80)     breakHere();
[0C85] (80)     breakHere();
[0C86] (80)     breakHere();
[0C87] (80)     breakHere();
[0C88] (80)     breakHere();
[0C89] (80)     breakHere();
[0C8A] (80)     breakHere();
[0C8B] (80)     breakHere();
[0C8C] (14)     print(3,[Text("Put part of the fish into the cauldron^ Guybrush Threepwood.")]);
[0CCC] (AE)     WaitForMessage();
[0CCE] (91)     animateCostume(VAR_EGO,10);
[0CD2] (80)     breakHere();
[0CD3] (80)     breakHere();
[0CD4] (80)     breakHere();
[0CD5] (54)     setObjectName(306,"remains of fish");
[0CE8] (91)     animateCostume(VAR_EGO,3);
[0CEC] (94)     print(VAR_EGO,[Text("Wow, how did you know my name?")]);
[0D0F] (AE)     WaitForMessage();
[0D11] (14)     print(3,[Text("I am a fortune teller." + wait() + "I know everything.")]);
[0D3F] (AE)     WaitForMessage();
[0D41] (**)   }
[0D41] (16)   Local[1] = getRandomNr(3);
[0D45] (48)   if (Local[1] == 0) {
[0D4C] (14)     print(3,[Text("Eagerness is the meagerness of life.")]);
[0D74] (48)   } else if (Local[1] == 1) {
[0D7E] (14)     print(3,[Text("Patience is the way to knowledge.")]);
[0DA3] (48)   } else if (Local[1] == 2) {
[0DAD] (14)     print(3,[Text("Asking is more than half the problem.")]);
[0DD6] (48)   } else if (Local[1] == 3) {
[0DE0] (14)     print(3,[Text("Pick a question.  Any question.")]);
[0E03] (18)     /* goto 0E06; */
[0E06] (**)   }
[0E06] (AE)   WaitForMessage();
[0E08] (1A)   Var[197] = 145;
[0E0D] (1A)   Bit[28] = 0;
[0E12] (2C)   CursorShow();
[0E14] (2C)   UserputOn();
[0E16] (7A)   VerbOps(120,[Off()]);
[0E1A] (7A)   VerbOps(121,[Off()]);
[0E1E] (7A)   VerbOps(122,[Off()]);
[0E22] (7A)   VerbOps(123,[Off()]);
[0E26] (7A)   VerbOps(124,[Off()]);
[0E2A] (7A)   VerbOps(125,[Off()]);
[0E2E] (7A)   VerbOps(126,[Off()]);
[0E32] (7A)   VerbOps(127,[Off()]);
[0E36] (7A)   VerbOps(128,[Off()]);
[0E3A] (26)   setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0E47] (26)   setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[0E54] (28)   if (!Bit[51]) {
[0E59] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[0E68] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Is this the fabled Monkey Island\x0F?"),On()]);
[0E96] (5A)     Var[197] += 8;
[0E9B] (48)     if (Var[364] == 3) {
[0EA2] (3A)       Var[103] -= 120;
[0EA7] (1A)       Bit[40 + Var[103]] = 1;
[0EAE] (**)     }
[0EAE] (**)   }
[0EAE] (28)   if (!Bit[52]) {
[0EB3] (28)     if (!Bit[63]) {
[0EB8] (AC)       Exprmode Var[103] = ((120 + 3) - 1);
[0EC7] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Are there ONLY pirates on this island?"),On()]);
[0EF9] (5A)       Var[197] += 8;
[0EFE] (48)       if (Var[364] == 3) {
[0F05] (3A)         Var[103] -= 120;
[0F0A] (1A)         Bit[40 + Var[103]] = 1;
[0F11] (**)       }
[0F11] (18)     } else {
[0F14] (AC)       Exprmode Var[103] = ((120 + 3) - 1);
[0F23] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Where is everyone?  I've only seen pirates."),On()]);
[0F5A] (5A)       Var[197] += 8;
[0F5F] (48)       if (Var[364] == 3) {
[0F66] (3A)         Var[103] -= 120;
[0F6B] (1A)         Bit[40 + Var[103]] = 1;
[0F72] (**)       }
[0F72] (**)     }
[0F72] (28)   } else if (!Bit[53]) {
[0F7A] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[0F89] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("How do I get off this stinkin' island?"),On()]);
[0FBB] (5A)     Var[197] += 8;
[0FC0] (48)     if (Var[364] == 3) {
[0FC7] (3A)       Var[103] -= 120;
[0FCC] (1A)       Bit[40 + Var[103]] = 1;
[0FD3] (**)     }
[0FD3] (**)   }
[0FD3] (A8)   if (Bit[129]) {
[0FD8] (28)     if (!Bit[131]) {
[0FDD] (AC)       Exprmode Var[103] = ((120 + 5) - 1);
[0FEC] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("What do you know about magic phrases?"),On()]);
[101D] (5A)       Var[197] += 8;
[1022] (48)       if (Var[364] == 3) {
[1029] (3A)         Var[103] -= 120;
[102E] (1A)         Bit[40 + Var[103]] = 1;
[1035] (**)       }
[1035] (**)     }
[1035] (**)   }
[1035] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[1044] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("I think I'll just browse."),On()]);
[1069] (5A)   Var[197] += 8;
[106E] (48)   if (Var[364] == 3) {
[1075] (3A)     Var[103] -= 120;
[107A] (1A)     Bit[40 + Var[103]] = 1;
[1081] (**)   }
[1081] (1A)   Var[190] = 0;
[1086] (80)   breakHere();
[1087] (A8)   unless (Var[190]) goto 1086;
[108C] (48)   if (Var[190] == 120) {
[1093] (14)     print(3,[Text("No." + wait() + "This is M\x88l\x82e Island\x0F, home of treasure-hunting, grog-guzzling, timber-shivering pirates.")]);
[10F5] (18)     goto 13AC;
[10F8] (48)   } else if (Var[190] == 121) {
[1102] (14)     print(3,[Text("You must pass the three trials of M\x88l\x82e Island\x0F.")]);
[1136] (18)     goto 1665;
[1139] (48)   } else if (Var[190] == 122) {
[1143] (14)     print(3,[Text("What am I, chopped liver?")]);
[1160] (AE)     WaitForMessage();
[1162] (28)     if (!Bit[63]) {
[1167] (14)       print(3,[Text("Actually, there are two beautiful women on this island^" + wait() + "^but you won't meet either of them in this demo.")]);
[11D4] (1A)       Bit[63] = 1;
[11D9] (18)     } else {
[11DC] (14)       print(3,[Text("Like I told you before, you don't get to meet EVERYONE in the demo.")]);
[1223] (**)     }
[1223] (18)     goto 1E71;
[1226] (48)   } else if (Var[190] == 123) {
[1230] (14)     print(3,[Text("Take your time." + wait() + "The more time you spend here, the longer the demo will last." + wait() + "Well I guess I won't be needing this anymore.")]);
[12B0] (18)     goto 2442;
[12B3] (48)   } else if (Var[190] == 124) {
[12BD] (1A)     Bit[131] = 1;
[12C2] (14)     print(3,[Text("My grandmother told me these words upon her deathbed, and I never forgot them^" + wait() + "She said \x19Dear, maybe you should get a new faculty advisor.\x19" + wait() + "She was a little batty, but she sure knew her magic phrases." + wait() + "Any other questions?")]);
[13A6] (18)     goto 0E06;
[13A9] (18)     /* goto 13AC; */
[13AC] (**)   }
[13AC] (**) }
[13AC] (1A) Bit[51] = 1;
[13B1] (AE) WaitForMessage();
[13B3] (1A) Var[197] = 145;
[13B8] (1A) Bit[28] = 0;
[13BD] (2C) CursorShow();
[13BF] (2C) UserputOn();
[13C1] (7A) VerbOps(120,[Off()]);
[13C5] (7A) VerbOps(121,[Off()]);
[13C9] (7A) VerbOps(122,[Off()]);
[13CD] (7A) VerbOps(123,[Off()]);
[13D1] (7A) VerbOps(124,[Off()]);
[13D5] (7A) VerbOps(125,[Off()]);
[13D9] (7A) VerbOps(126,[Off()]);
[13DD] (7A) VerbOps(127,[Off()]);
[13E1] (7A) VerbOps(128,[Off()]);
[13E5] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[13F2] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[13FF] (28) if (!Bit[53]) {
[1404] (28)   if (!Bit[64]) {
[1409] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1418] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("How do I get off this island?"),On()]);
[1441] (5A)     Var[197] += 8;
[1446] (48)     if (Var[364] == 3) {
[144D] (3A)       Var[103] -= 120;
[1452] (1A)       Bit[40 + Var[103]] = 1;
[1459] (**)     }
[1459] (18)   } else {
[145C] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[146B] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to get off this island!"),On()]);
[1495] (5A)     Var[197] += 8;
[149A] (48)     if (Var[364] == 3) {
[14A1] (3A)       Var[103] -= 120;
[14A6] (1A)       Bit[40 + Var[103]] = 1;
[14AD] (**)     }
[14AD] (**)   }
[14AD] (**) }
[14AD] (28) if (!Bit[52]) {
[14B2] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[14C1] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("So where are all the people?"),On()]);
[14E9] (5A)   Var[197] += 8;
[14EE] (48)   if (Var[364] == 3) {
[14F5] (3A)     Var[103] -= 120;
[14FA] (1A)     Bit[40 + Var[103]] = 1;
[1501] (**)   }
[1501] (**) }
[1501] (A8) if (Bit[129]) {
[1506] (28)   if (!Bit[131]) {
[150B] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[151A] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("That's neat, but I really need a magic phrase."),On()]);
[1554] (5A)     Var[197] += 8;
[1559] (48)     if (Var[364] == 3) {
[1560] (3A)       Var[103] -= 120;
[1565] (1A)       Bit[40 + Var[103]] = 1;
[156C] (**)     }
[156C] (**)   }
[156C] (**) }
[156C] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[157B] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Oh well, that's interesting^but I have to leave."),On()]);
[15B7] (5A) Var[197] += 8;
[15BC] (48) if (Var[364] == 3) {
[15C3] (3A)   Var[103] -= 120;
[15C8] (1A)   Bit[40 + Var[103]] = 1;
[15CF] (**) }
[15CF] (1A) Var[190] = 0;
[15D4] (80) breakHere();
[15D5] (A8) unless (Var[190]) goto 15D4;
[15DA] (48) if (Var[190] == 120) {
[15E1] (1A)   Bit[64] = 1;
[15E6] (18)   goto 1102;
[15E9] (48) } else if (Var[190] == 121) {
[15F3] (14)   print(3,[Text("What's your hurry, honey?" + wait() + "Remember, so long as you have fish, you may see me.")]);
[1645] (18)   goto 2442;
[1648] (48) } else if (Var[190] == 122) {
[1652] (18)   goto 1143;
[1655] (48) } else if (Var[190] == 124) {
[165F] (18)   goto 12BD;
[1662] (18)   /* goto 1665; */
[1665] (**) }
[1665] (AE) WaitForMessage();
[1667] (1A) Var[197] = 145;
[166C] (1A) Bit[28] = 0;
[1671] (2C) CursorShow();
[1673] (2C) UserputOn();
[1675] (7A) VerbOps(120,[Off()]);
[1679] (7A) VerbOps(121,[Off()]);
[167D] (7A) VerbOps(122,[Off()]);
[1681] (7A) VerbOps(123,[Off()]);
[1685] (7A) VerbOps(124,[Off()]);
[1689] (7A) VerbOps(125,[Off()]);
[168D] (7A) VerbOps(126,[Off()]);
[1691] (7A) VerbOps(127,[Off()]);
[1695] (7A) VerbOps(128,[Off()]);
[1699] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[16A6] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[16B3] (28) if (!Bit[51]) {
[16B8] (28)   if (!Bit[59]) {
[16BD] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[16CC] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("You mean this isn't the infamous Monkey Island\x0F?"),On()]);
[1708] (5A)     Var[197] += 8;
[170D] (48)     if (Var[364] == 3) {
[1714] (3A)       Var[103] -= 120;
[1719] (1A)       Bit[40 + Var[103]] = 1;
[1720] (**)     }
[1720] (18)   } else {
[1723] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1732] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("I'm not on Monkey Island\x0F?"),On()]);
[1758] (5A)     Var[197] += 8;
[175D] (48)     if (Var[364] == 3) {
[1764] (3A)       Var[103] -= 120;
[1769] (1A)       Bit[40 + Var[103]] = 1;
[1770] (**)     }
[1770] (**)   }
[1770] (**) }
[1770] (28) if (!Bit[53]) {
[1775] (28)   if (!Bit[61]) {
[177A] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[1789] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("What are these three trials?"),On()]);
[17B1] (5A)     Var[197] += 8;
[17B6] (48)     if (Var[364] == 3) {
[17BD] (3A)       Var[103] -= 120;
[17C2] (1A)       Bit[40 + Var[103]] = 1;
[17C9] (**)     }
[17C9] (18)   } else {
[17CC] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[17DB] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Tell me more about the trials please."),On()]);
[180C] (5A)     Var[197] += 8;
[1811] (48)     if (Var[364] == 3) {
[1818] (3A)       Var[103] -= 120;
[181D] (1A)       Bit[40 + Var[103]] = 1;
[1824] (**)     }
[1824] (**)   }
[1824] (**) }
[1824] (28) if (!Bit[52]) {
[1829] (28)   if (!Bit[62]) {
[182E] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[183D] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("But I'm lonely.  I want to meet people."),On()]);
[1870] (5A)     Var[197] += 8;
[1875] (48)     if (Var[364] == 3) {
[187C] (3A)       Var[103] -= 120;
[1881] (1A)       Bit[40 + Var[103]] = 1;
[1888] (**)     }
[1888] (18)   } else {
[188B] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[189A] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("I'd rather meet people."),On()]);
[18BD] (5A)     Var[197] += 8;
[18C2] (48)     if (Var[364] == 3) {
[18C9] (3A)       Var[103] -= 120;
[18CE] (1A)       Bit[40 + Var[103]] = 1;
[18D5] (**)     }
[18D5] (**)   }
[18D5] (**) }
[18D5] (AC) Exprmode Var[103] = ((120 + 4) - 1);
[18E4] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Does that entail WORK?? NO, THANKS!"),On()]);
[1913] (5A) Var[197] += 8;
[1918] (48) if (Var[364] == 3) {
[191F] (3A)   Var[103] -= 120;
[1924] (1A)   Bit[40 + Var[103]] = 1;
[192B] (**) }
[192B] (A8) if (Bit[129]) {
[1930] (28)   if (!Bit[131]) {
[1935] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[1944] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Trial, shmial, what's the magic phrase?"),On()]);
[1977] (5A)     Var[197] += 8;
[197C] (48)     if (Var[364] == 3) {
[1983] (3A)       Var[103] -= 120;
[1988] (1A)       Bit[40 + Var[103]] = 1;
[198F] (**)     }
[198F] (**)   }
[198F] (**) }
[198F] (1A) Var[190] = 0;
[1994] (80) breakHere();
[1995] (A8) unless (Var[190]) goto 1994;
[199A] (48) if (Var[190] == 120) {
[19A1] (1A)   Bit[59] = 1;
[19A6] (18)   goto 1093;
[19A9] (48) } else if (Var[190] == 121) {
[19B3] (1A)   Bit[53] = 1;
[19B8] (1A)   Bit[61] = 1;
[19BD] (14)   print(3,[Text("The three trials consist of:" + wait() + "Swordplay, thievery and treasure^ er" + wait() + "^treasure huntery." + wait() + "But you don't have to worry about that now." + wait() + "This is ONLY a demo.")]);
[1A5A] (18)   goto 1665;
[1A5D] (48) } else if (Var[190] == 122) {
[1A67] (1A)   Bit[62] = 1;
[1A6C] (18)   goto 1143;
[1A6F] (48) } else if (Var[190] == 123) {
[1A79] (14)   print(3,[Text("I see^")]);
[1A83] (11)   animateCostume(3,11);
[1A86] (14)   print(3,[Text("^Oh, a vision!^" + wait() + "^I see^" + wait() + "^a lazy boy getting eaten by the ghost pirate LeChuck.")]);
[1ADA] (AE)   WaitForMessage();
[1ADC] (11)   animateCostume(3,10);
[1ADF] (14)   print(3,[Text("It's too gruesome for me to watch." + wait() + "I^I must close my cauldron.")]);
[1B22] (AE)   WaitForMessage();
[1B24] (18)   goto 1B37;
[1B27] (48) } else if (Var[190] == 124) {
[1B31] (18)   goto 12BD;
[1B34] (18)   /* goto 1B37; */
[1B37] (**) }
[1B37] (1A) Var[197] = 145;
[1B3C] (1A) Bit[28] = 0;
[1B41] (2C) CursorShow();
[1B43] (2C) UserputOn();
[1B45] (7A) VerbOps(120,[Off()]);
[1B49] (7A) VerbOps(121,[Off()]);
[1B4D] (7A) VerbOps(122,[Off()]);
[1B51] (7A) VerbOps(123,[Off()]);
[1B55] (7A) VerbOps(124,[Off()]);
[1B59] (7A) VerbOps(125,[Off()]);
[1B5D] (7A) VerbOps(126,[Off()]);
[1B61] (7A) VerbOps(127,[Off()]);
[1B65] (7A) VerbOps(128,[Off()]);
[1B69] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[1B76] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[1B83] (28) if (!Bit[55]) {
[1B88] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[1B97] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Please^tell me more about my future."),On()]);
[1BC7] (5A)   Var[197] += 8;
[1BCC] (48)   if (Var[364] == 3) {
[1BD3] (3A)     Var[103] -= 120;
[1BD8] (1A)     Bit[40 + Var[103]] = 1;
[1BDF] (**)   }
[1BDF] (**) }
[1BDF] (28) if (!Bit[56]) {
[1BE4] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[1BF3] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Can you see solutions for the REAL game?"),On()]);
[1C27] (5A)   Var[197] += 8;
[1C2C] (48)   if (Var[364] == 3) {
[1C33] (3A)     Var[103] -= 120;
[1C38] (1A)     Bit[40 + Var[103]] = 1;
[1C3F] (**)   }
[1C3F] (**) }
[1C3F] (A8) if (Bit[129]) {
[1C44] (28)   if (!Bit[131]) {
[1C49] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[1C58] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Wait!  What about the magic phrase?"),On()]);
[1C87] (5A)     Var[197] += 8;
[1C8C] (48)     if (Var[364] == 3) {
[1C93] (3A)       Var[103] -= 120;
[1C98] (1A)       Bit[40 + Var[103]] = 1;
[1C9F] (**)     }
[1C9F] (**)   }
[1C9F] (**) }
[1C9F] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[1CAE] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Thanks for your help, Fortune Teller Lady."),On()]);
[1CE4] (5A) Var[197] += 8;
[1CE9] (48) if (Var[364] == 3) {
[1CF0] (3A)   Var[103] -= 120;
[1CF5] (1A)   Bit[40 + Var[103]] = 1;
[1CFC] (**) }
[1CFC] (1A) Var[190] = 0;
[1D01] (80) breakHere();
[1D02] (A8) unless (Var[190]) goto 1D01;
[1D07] (48) if (Var[190] == 120) {
[1D0E] (1A)   Bit[55] = 1;
[1D13] (14)   print(3,[Text("I see^" + wait() + "^a game^" + wait() + "Yes! A game!" + wait() + "AWESOME SCALING!" + wait() + "AWESOME SCALING!" + newline() + "BEAUTIFUL COLORFUL PICTURES!" + wait() + "AWESOME SCALING!" + newline() + "BEAUTIFUL COLORFUL PICTURES!" + newline() + "^and^" + wait() + "AWESOME SCALING!" + newline() + "BEAUTIFUL COLORFUL PICTURES!" + newline() + "^and^" + newline() + "HUMOR EVERYWHERE!")]);
[1DF8] (AE)   WaitForMessage();
[1DFA] (18)   goto 1B37;
[1DFD] (48) } else if (Var[190] == 121) {
[1E07] (1A)   Bit[56] = 1;
[1E0C] (14)   print(3,[Text("Yes^" + wait() + "I see that you should^" + wait() + "use gunpowder with cannon nozzle.")]);
[1E4F] (AE)   WaitForMessage();
[1E51] (18)   goto 1B37;
[1E54] (48) } else if (Var[190] == 122) {
[1E5E] (18)   goto 2442;
[1E61] (48) } else if (Var[190] == 124) {
[1E6B] (18)   goto 12BD;
[1E6E] (18)   /* goto 1E71; */
[1E71] (**) }
[1E71] (AE) WaitForMessage();
[1E73] (1A) Var[197] = 145;
[1E78] (1A) Bit[28] = 0;
[1E7D] (2C) CursorShow();
[1E7F] (2C) UserputOn();
[1E81] (7A) VerbOps(120,[Off()]);
[1E85] (7A) VerbOps(121,[Off()]);
[1E89] (7A) VerbOps(122,[Off()]);
[1E8D] (7A) VerbOps(123,[Off()]);
[1E91] (7A) VerbOps(124,[Off()]);
[1E95] (7A) VerbOps(125,[Off()]);
[1E99] (7A) VerbOps(126,[Off()]);
[1E9D] (7A) VerbOps(127,[Off()]);
[1EA1] (7A) VerbOps(128,[Off()]);
[1EA5] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[1EB2] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[1EBF] (28) if (!Bit[53]) {
[1EC4] (28)   if (!Bit[57]) {
[1EC9] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1ED8] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("That's awful.  How do I get off this miserable island?"),On()]);
[1F1A] (5A)     Var[197] += 8;
[1F1F] (48)     if (Var[364] == 3) {
[1F26] (3A)       Var[103] -= 120;
[1F2B] (1A)       Bit[40 + Var[103]] = 1;
[1F32] (**)     }
[1F32] (18)   } else {
[1F35] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1F44] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("So how do I leave this stinkin' island?"),On()]);
[1F77] (5A)     Var[197] += 8;
[1F7C] (48)     if (Var[364] == 3) {
[1F83] (3A)       Var[103] -= 120;
[1F88] (1A)       Bit[40 + Var[103]] = 1;
[1F8F] (**)     }
[1F8F] (**)   }
[1F8F] (**) }
[1F8F] (28) if (!Bit[52]) {
[1F94] (28)   if (!Bit[60]) {
[1F99] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[1FA8] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Who are these beautiful women?"),On()]);
[1FD2] (5A)     Var[197] += 8;
[1FD7] (48)     if (Var[364] == 3) {
[1FDE] (3A)       Var[103] -= 120;
[1FE3] (1A)       Bit[40 + Var[103]] = 1;
[1FEA] (**)     }
[1FEA] (18)   } else {
[1FED] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[1FFC] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("So^tell me about these women^"),On()]);
[2025] (5A)     Var[197] += 8;
[202A] (48)     if (Var[364] == 3) {
[2031] (3A)       Var[103] -= 120;
[2036] (1A)       Bit[40 + Var[103]] = 1;
[203D] (**)     }
[203D] (**)   }
[203D] (**) }
[203D] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[204C] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("That's depressing.  I want out."),On()]);
[2077] (5A) Var[197] += 8;
[207C] (48) if (Var[364] == 3) {
[2083] (3A)   Var[103] -= 120;
[2088] (1A)   Bit[40 + Var[103]] = 1;
[208F] (**) }
[208F] (28) if (!Bit[51]) {
[2094] (28)   if (!Bit[58]) {
[2099] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[20A8] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Enough about women, where are the monkeys?"),On()]);
[20DE] (5A)     Var[197] += 8;
[20E3] (48)     if (Var[364] == 3) {
[20EA] (3A)       Var[103] -= 120;
[20EF] (1A)       Bit[40 + Var[103]] = 1;
[20F6] (**)     }
[20F6] (18)   } else {
[20F9] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[2108] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("HEY!  I want to see the monkeys!."),On()]);
[2135] (5A)     Var[197] += 8;
[213A] (48)     if (Var[364] == 3) {
[2141] (3A)       Var[103] -= 120;
[2146] (1A)       Bit[40 + Var[103]] = 1;
[214D] (**)     }
[214D] (**)   }
[214D] (**) }
[214D] (A8) if (Bit[129]) {
[2152] (28)   if (!Bit[131]) {
[2157] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[2166] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("That's nice, but I really want a magic phrase."),On()]);
[21A0] (5A)     Var[197] += 8;
[21A5] (48)     if (Var[364] == 3) {
[21AC] (3A)       Var[103] -= 120;
[21B1] (1A)       Bit[40 + Var[103]] = 1;
[21B8] (**)     }
[21B8] (**)   }
[21B8] (**) }
[21B8] (1A) Var[190] = 0;
[21BD] (80) breakHere();
[21BE] (A8) unless (Var[190]) goto 21BD;
[21C3] (48) if (Var[190] == 120) {
[21CA] (1A)   Bit[57] = 1;
[21CF] (18)   goto 1102;
[21D2] (48) } else if (Var[190] == 121) {
[21DC] (1A)   Bit[52] = 1;
[21E1] (1A)   Bit[60] = 1;
[21E6] (14)   print(3,[Text("Wait^" + wait() + "I'm getting a vision^" + wait() + "One woman you fight with^" + wait() + "One you^" + wait() + "^you^")]);
[2232] (AE)   WaitForMessage();
[2234] (11)   animateCostume(3,6);
[2237] (14)   print(3,[Text("^you fall in love with^" + wait() + "But you won't meet either of them in this demo, so it doesn't matter. ")]);
[229A] (18)   goto 0E06;
[229D] (48) } else if (Var[190] == 122) {
[22A7] (14)   print(3,[Text("We all do, honey." + wait() + "We want to be in the REAL Monkey Island\x0F game." + wait() + "(Which you can conveniently buy at a store near you.)" + wait() + "Now leave me be.")]);
[2335] (18)   goto 2442;
[2338] (48) } else if (Var[190] == 123) {
[2342] (28)   if (!Bit[58]) {
[2347] (14)     print(3,[Text("That's Monkey Island\x0F." + wait() + "That's Monkey Island\x0F." + newline() + "This is M\x88l\x82e Island\x0F." + wait() + "That's Monkey Island\x0F." + newline() + "This is M\x88l\x82e Island\x0F." + newline() + "There are no monkeys here.")]);
[23DD] (1A)     Bit[58] = 1;
[23E2] (18)     goto 13AC;
[23E5] (18)   } else {
[23E8] (D8)     printEgo([Text("Like I said before This is M\x88l\x82e Island\x0F" + wait() + "THERE ARE NO MONKEYS HERE.")]);
[242F] (18)     goto 13AC;
[2432] (**)   }
[2432] (48) } else if (Var[190] == 124) {
[243C] (18)   goto 12BD;
[243F] (18)   /* goto 2442; */
[2442] (**) }
[2442] (AE) WaitForMessage();
[2444] (11) animateCostume(3,7);
[2447] (0A) startScript(205,[]);
[244A] (80) breakHere();
[244B] (68) VAR_RESULT = isScriptRunning(205);
[244F] (28) unless (!VAR_RESULT) goto 244A;
[2454] (AE) WaitForMessage();
[2456] (D8) printEgo([Text("Goodbye.")]);
[2461] (AE) WaitForMessage();
[2463] (14) print(3,[Text("Come back if you have more questions.")]);
[248C] (AE) WaitForMessage();
[248E] (AE) WaitForMessage();
[2490] (07) setState(398,0);
[2494] (07) setState(399,0);
[2498] (9E) walkActorTo(VAR_EGO,221,120);
[249F] (AE) WaitForActor(VAR_EGO);
[24A3] (91) animateCostume(VAR_EGO,250);
[24A7] (9A) VAR_VERB_SCRIPT = Local[0];
[24AC] (0A) startScript(21,[2]);
[24B2] (C0) endCutscene();
[24B3] (A0) stopObjectCode();
END

Script# 204
[0000] (05) drawObject(400,255,255);
[0007] (11) animateCostume(4,7);
[000A] (2A) startScript(209,[],F);
[000D] (1A) Local[0] = -19;
[0012] (13) ActorOps(4,[Elevation(Local[0])]);
[0018] (AC) Exprmode Var[103] = (<VAR_RESULT = getActorElevation(12)> + 1);
[0025] (13) ActorOps(12,[Elevation(Var[103])]);
[002B] (80) breakHere();
[002C] (46) Local[0]++;
[002F] (44) unless (Local[0] > 0) goto 0012;
[0036] (07) setState(400,0);
[003A] (80) breakHere();
[003B] (80) breakHere();
[003C] (80) breakHere();
[003D] (80) breakHere();
[003E] (A0) stopObjectCode();
END

Script# 205
[0000] (05) drawObject(400,255,255);
[0007] (2A) startScript(210,[],F);
[000A] (1A) Local[0] = 0;
[000F] (13) ActorOps(4,[Elevation(Local[0])]);
[0015] (AC) Exprmode Var[103] = (<VAR_RESULT = getActorElevation(12)> - 1);
[0022] (13) ActorOps(12,[Elevation(Var[103])]);
[0028] (80) breakHere();
[0029] (C6) Local[0]--;
[002C] (78) unless (Local[0] < -19) goto 000F;
[0033] (11) animateCostume(4,6);
[0036] (07) setState(400,0);
[003A] (80) breakHere();
[003B] (80) breakHere();
[003C] (80) breakHere();
[003D] (80) breakHere();
[003E] (A0) stopObjectCode();
END

Script# 206
[0000] (80) breakHere();
[0001] (80) breakHere();
[0002] (11) animateCostume(4,250);
[0005] (13) ActorOps(4,[Init(),Costume(20),Elevation(-19)]);
[000E] (5D) setClass(4,[150,149]);
[0018] (11) animateCostume(12,250);
[001B] (AC) Exprmode Var[103] = (-19 + 24);
[0026] (13) ActorOps(12,[Init(),Costume(25),Elevation(Var[103])]);
[002F] (5D) setClass(12,[150,149]);
[0039] (2D) putActorInRoom(4,0);
[003C] (11) animateCostume(4,6);
[003F] (07) setState(400,0);
[0043] (2D) putActorInRoom(12,53);
[0046] (01) putActor(12,334,106);
[004C] (11) animateCostume(12,6);
[004F] (A0) stopObjectCode();
END

Script# 207
[0000] (11) animateCostume(3,7);
[0003] (13) ActorOps(11,[Costume(26),WalkSpeed(5,5)]);
[000B] (5D) setClass(11,[150]);
[0012] (AC) Exprmode Local[0] = (<VAR_RESULT = getActorX(4)> + 3);
[0020] (AC) Exprmode Local[1] = (<VAR_RESULT = getActorY(4)> - 6);
[002E] (2D) putActorInRoom(11,53);
[0031] (61) putActor(11,Local[0],Local[1]);
[0037] (AC) Exprmode Local[1] = (Local[1] - 50);
[0042] (7E) walkActorTo(11,Local[0],Local[1]);
[0048] (AE) WaitForActor(11);
[004B] (13) ActorOps(11,[WalkSpeed(10,10)]);
[0051] (C3) Local[0] = getActorX(VAR_EGO);
[0056] (AC) Exprmode Local[1] = (<VAR_RESULT = getActorY(VAR_EGO)> + 1);
[0064] (7E) walkActorTo(11,Local[0],Local[1]);
[006A] (AE) WaitForActor(11);
[006D] (1A) Var[103] = 0;
[0072] (AC) Exprmode Var[103] = (Var[103] + 12);
[007D] (13) ActorOps(11,[Elevation(Var[103])]);
[0083] (0A) startScript(67,[1]);
[0089] (AC) Exprmode Var[154] = (Var[154] + 45);
[0094] (9A) Var[390] = Var[118];
[0099] (1A) Var[118] = 9;
[009E] (14) print(255,[Center(),Pos(Var[153],Var[154]),Text("Guybrush")]);
[00B0] (AC) Exprmode Local[0] = (Local[0] - 3);
[00BB] (7E) walkActorTo(11,Local[0],Local[1]);
[00C1] (AE) WaitForActor(11);
[00C4] (46) Var[103]++;
[00C7] (44) unless (Var[103] > 20) goto 0072;
[00CE] (AC) Exprmode Local[1] = (Local[1] - 5);
[00D9] (AC) Exprmode Local[0] = (Local[0] + 3);
[00E4] (7E) walkActorTo(11,Local[0],Local[1]);
[00EA] (AE) WaitForActor(11);
[00ED] (1A) Var[103] = 21;
[00F2] (AC) Exprmode Var[103] = (Var[103] + 12);
[00FD] (13) ActorOps(11,[Elevation(Var[103])]);
[0103] (AC) Exprmode Local[0] = (Local[0] + 3);
[010E] (7E) walkActorTo(11,Local[0],Local[1]);
[0114] (AE) WaitForActor(11);
[0117] (46) Var[103]++;
[011A] (44) unless (Var[103] > 36) goto 00F2;
[0121] (1A) Var[103] = 36;
[0126] (AC) Exprmode Var[103] = (Var[103] - 12);
[0131] (13) ActorOps(11,[Elevation(Var[103])]);
[0137] (AC) Exprmode Local[0] = (Local[0] + 3);
[0142] (7E) walkActorTo(11,Local[0],Local[1]);
[0148] (AE) WaitForActor(11);
[014B] (C6) Var[103]--;
[014E] (78) unless (Var[103] < 31) goto 0126;
[0155] (AC) Exprmode Local[1] = (Local[1] + 5);
[0160] (AC) Exprmode Local[0] = (Local[0] - 3);
[016B] (7E) walkActorTo(11,Local[0],Local[1]);
[0171] (AE) WaitForActor(11);
[0174] (AC) Exprmode Local[0] = (<VAR_RESULT = getActorX(4)> + 3);
[0182] (AC) Exprmode Local[1] = ((<VAR_RESULT = getActorY(4)> - 6) - 30);
[0194] (7E) walkActorTo(11,Local[0],Local[1]);
[019A] (AE) WaitForActor(11);
[019D] (1A) Var[103] = 23;
[01A2] (13) ActorOps(11,[Elevation(Var[103])]);
[01A8] (AC) Exprmode Var[103] = (Var[103] - 3);
[01B3] (80) breakHere();
[01B4] (C6) Var[103]--;
[01B7] (78) unless (Var[103] < 0) goto 01A2;
[01BE] (AC) Exprmode Local[1] = (Local[1] + 30);
[01C9] (7E) walkActorTo(11,Local[0],Local[1]);
[01CF] (AE) WaitForActor(11);
[01D2] (2D) putActorInRoom(11,0);
[01D5] (01) putActor(11,0,0);
[01DB] (A0) stopObjectCode();
END

Script# 208 // Become Indy
[0000] (40) cutscene([2]);
[0005] (91) animateCostume(VAR_EGO,10);
[0009] (80) breakHere();
[000A] (80) breakHere();
[000B] (80) breakHere();
[000C] (80) breakHere();
[000D] (91) animateCostume(VAR_EGO,3);
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (80) breakHere();
[0015] (D8) printEgo([Text("HUH??!^I'm not Indy!^")]);
[002D] (AE) WaitForMessage();
[002F] (91) animateCostume(VAR_EGO,13);
[0033] (13) ActorOps(1,[TalkAnimNr(14,13)]);
[0039] (D8) printEgo([Text("or am I?")]);
[0044] (1C) startSound(130);
[0046] (AE) WaitForMessage();
[0048] (91) animateCostume(VAR_EGO,13);
[004C] (80) breakHere();
[004D] (7C) VAR_RESULT = isSoundRunning(130);
[0051] (28) unless (!VAR_RESULT) goto 004C;
[0056] (80) breakHere();
[0057] (80) breakHere();
[0058] (80) breakHere();
[0059] (91) animateCostume(VAR_EGO,37);
[005D] (91) animateCostume(VAR_EGO,3);
[0061] (93) ActorOps(VAR_EGO,[TalkAnimNr(4,5)]);
[0068] (2E) delay(60);
[006C] (D8) printEgo([Text("Whoa! Identity crisis.")]);
[0085] (C0) endCutscene();
[0086] (A0) stopObjectCode();
END

Script# 209
[0000] (0A) startScript(211,[254,1]);
[0009] (0A) startScript(211,[0,0]);
[0012] (0A) startScript(211,[4,4]);
[001B] (80) breakHere();
[001C] (0A) startScript(211,[254,9]);
[0025] (0A) startScript(211,[0,1]);
[002E] (0A) startScript(211,[4,4]);
[0037] (80) breakHere();
[0038] (0A) startScript(211,[254,3]);
[0041] (0A) startScript(211,[0,9]);
[004A] (0A) startScript(211,[4,4]);
[0053] (80) breakHere();
[0054] (0A) startScript(211,[254,1]);
[005D] (0A) startScript(211,[0,0]);
[0066] (0A) startScript(211,[4,4]);
[006F] (80) breakHere();
[0070] (0A) startScript(211,[255]);
[0076] (A0) stopObjectCode();
END

Script# 210
[0000] (0A) startScript(211,[254,2]);
[0009] (0A) startScript(211,[0,0]);
[0012] (0A) startScript(211,[4,4]);
[001B] (80) breakHere();
[001C] (0A) startScript(211,[254,10]);
[0025] (0A) startScript(211,[0,2]);
[002E] (0A) startScript(211,[4,4]);
[0037] (80) breakHere();
[0038] (0A) startScript(211,[254,15]);
[0041] (0A) startScript(211,[0,10]);
[004A] (0A) startScript(211,[4,4]);
[0053] (80) breakHere();
[0054] (0A) startScript(211,[254,2]);
[005D] (0A) startScript(211,[0,0]);
[0066] (0A) startScript(211,[4,4]);
[006F] (80) breakHere();
[0070] (0A) startScript(211,[255]);
[0076] (A0) stopObjectCode();
END

Script# 211
[0000] (48) if (Local[0] == 255) {
[0007] (33)   SetPalColor(0,0)
[000D] (33)   SetPalColor(1,1)
[0013] (33)   SetPalColor(2,2)
[0019] (33)   SetPalColor(3,3)
[001F] (33)   SetPalColor(4,4)
[0025] (33)   SetPalColor(5,5)
[002B] (33)   SetPalColor(6,6)
[0031] (33)   SetPalColor(7,7)
[0037] (33)   SetPalColor(8,8)
[003D] (33)   SetPalColor(9,9)
[0043] (33)   SetPalColor(10,10)
[0049] (33)   SetPalColor(11,11)
[004F] (33)   SetPalColor(12,12)
[0055] (33)   SetPalColor(13,13)
[005B] (33)   SetPalColor(14,14)
[0061] (33)   SetPalColor(15,15)
[0067] (48) } else if (Local[0] == 254) {
[0071] (33)   SetPalColor(Local[1],0)
[0077] (33)   SetPalColor(Local[1],1)
[007D] (33)   SetPalColor(Local[1],2)
[0083] (33)   SetPalColor(Local[1],3)
[0089] (33)   SetPalColor(Local[1],4)
[008F] (33)   SetPalColor(Local[1],5)
[0095] (33)   SetPalColor(Local[1],6)
[009B] (33)   SetPalColor(Local[1],7)
[00A1] (33)   SetPalColor(Local[1],8)
[00A7] (33)   SetPalColor(Local[1],9)
[00AD] (33)   SetPalColor(Local[1],10)
[00B3] (33)   SetPalColor(Local[1],11)
[00B9] (33)   SetPalColor(Local[1],12)
[00BF] (33)   SetPalColor(Local[1],13)
[00C5] (33)   SetPalColor(Local[1],14)
[00CB] (33)   SetPalColor(Local[1],15)
[00D1] (18) } else {
[00D4] (33)   SetPalColor(Local[1],Local[0])
[00DA] (**) }
[00DA] (A0) stopObjectCode();
END

// Object 381: Door
Events:
   1 - 0025
   2 - 004F
   A - 0079
  5A - 0088
[0025] (8F) if (getState(VAR_ME) == 0) {
[002B] (40)   cutscene([2]);
[0030] (91)   animateCostume(VAR_EGO,247);
[0034] (80)   breakHere();
[0035] (91)   animateCostume(VAR_EGO,10);
[0039] (80)   breakHere();
[003A] (80)   breakHere();
[003B] (0A)   startScript(26,[381,432]);
[0044] (80)   breakHere();
[0045] (91)   animateCostume(VAR_EGO,3);
[0049] (91)   animateCostume(VAR_EGO,244);
[004D] (C0)   endCutscene();
[004E] (**) }
[004E] (00) stopObjectCode();
[004F] (8F) if (getState(VAR_ME) == 1) {
[0055] (40)   cutscene([2]);
[005A] (91)   animateCostume(VAR_EGO,247);
[005E] (80)   breakHere();
[005F] (91)   animateCostume(VAR_EGO,10);
[0063] (80)   breakHere();
[0064] (80)   breakHere();
[0065] (0A)   startScript(27,[381,432]);
[006E] (80)   breakHere();
[006F] (91)   animateCostume(VAR_EGO,3);
[0073] (91)   animateCostume(VAR_EGO,244);
[0077] (C0)   endCutscene();
[0078] (**) }
[0078] (00) stopObjectCode();
[0079] (0F) if (getState(381) == 1) {
[007F] (24)   loadRoomWithEgo(432,57,-1,-1);
[0087] (**) }
[0087] (00) stopObjectCode();
[0088] (0F) if (getState(381) == 0) {
[008E] (1A)   Var[194] = 1;
[0093] (18) } else {
[0096] (1A)   Var[194] = 2;
[009B] (**) }
[009B] (00) stopObjectCode();
END

// Object 382: Beautiful Chicken
Events:
   9 - 002B
   B - 0048
  5A - 0025
[0025] (1A) Var[194] = 9;
[002A] (00) stopObjectCode();
[002B] (D8) printEgo([Text("What a beautiful chicken.")]);
[0047] (00) stopObjectCode();
[0048] (D8) printEgo([Text("Beautiful or not, I still don't want it.")]);
[0073] (00) stopObjectCode();
END

// Object 383: Ugly Chicken
Events:
   9 - 002B
   B - 0044
  5A - 0025
[0025] (1A) Var[194] = 9;
[002A] (00) stopObjectCode();
[002B] (D8) printEgo([Text("What an ugly chicken.")]);
[0043] (00) stopObjectCode();
[0044] (D8) printEgo([Text("I don't want an ugly chicken.")]);
[0064] (00) stopObjectCode();
END

// Object 384: Statue
Events:
   9 - 0027
   A - 0054
  5A - 004E
  FF - 0055
[0027] (D8) printEgo([Text("Kind of an emaciated Charles Atlas.")]);
[004D] (00) stopObjectCode();
[004E] (1A) Var[194] = 9;
[0053] (00) stopObjectCode();
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("No thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[0099] (00) stopObjectCode();
END

// Object 385: Basket 1
Events:
   1 - 0054
   9 - 002A
   A - 00B3
  5A - 00AD
  FF - 00B4
[002A] (D8) printEgo([Text("Gee, I wonder what's in these baskets.")]);
[0053] (00) stopObjectCode();
[0054] (D8) printEgo([Text("Actually, I'm not THAT curious to find out what's inside." + wait() + "Probably poisonous snakes.")]);
[00AC] (00) stopObjectCode();
[00AD] (1A) Var[194] = 9;
[00B2] (00) stopObjectCode();
[00B3] (00) stopObjectCode();
[00B4] (D8) printEgo([Text("No thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00F8] (00) stopObjectCode();
END

// Object 386: Basket 2
Events:
   1 - 0052
   9 - 002A
   A - 0096
  5A - 0090
  FF - 0097
[002A] (D8) printEgo([Text("Gee, I wonder what's in this basket.")]);
[0051] (00) stopObjectCode();
[0052] (D8) printEgo([Text("No thanks.  Something would probably jump out and bite me.")]);
[008F] (00) stopObjectCode();
[0090] (1A) Var[194] = 9;
[0095] (00) stopObjectCode();
[0096] (00) stopObjectCode();
[0097] (D8) printEgo([Text("No thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00DB] (00) stopObjectCode();
END

// Object 387: Basket 3
Events:
   1 - 0054
   9 - 002A
   A - 00B3
  5A - 00AD
  FF - 00B4
[002A] (D8) printEgo([Text("Gee, I wonder what's in these baskets.")]);
[0053] (00) stopObjectCode();
[0054] (D8) printEgo([Text("Actually, I'm not THAT curious to find out what's inside." + wait() + "Probably poisonous snakes.")]);
[00AC] (00) stopObjectCode();
[00AD] (1A) Var[194] = 9;
[00B2] (00) stopObjectCode();
[00B3] (00) stopObjectCode();
[00B4] (D8) printEgo([Text("No thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00F8] (00) stopObjectCode();
END

// Object 388: Voodoo Knick-Knacks
Events:
   9 - 0036
   B - 0073
  5A - 0030
[0030] (1A) Var[194] = 9;
[0035] (00) stopObjectCode();
[0036] (D8) printEgo([Text("Actually there appear to be more knicks than knacks here.")]);
[0072] (00) stopObjectCode();
[0073] (D8) printEgo([Text("I really don't need any knickknacks.")]);
[009A] (00) stopObjectCode();
END

// Object 389: Couch
Events:
   8 - 0060
   9 - 002C
   B - 004B
  5A - 0026
[0026] (1A) Var[194] = 9;
[002B] (00) stopObjectCode();
[002C] (D8) printEgo([Text("What a comfy-looking couch.")]);
[004A] (00) stopObjectCode();
[004B] (D8) printEgo([Text("I don't think so.")]);
[005F] (00) stopObjectCode();
[0060] (D8) printEgo([Text("I don't have time to sit.")]);
[007C] (00) stopObjectCode();
END

// Object 390: Trunk
Events:
   1 - 006E
   9 - 002C
   B - 00AF
  5A - 0026
[0026] (1A) Var[194] = 9;
[002B] (00) stopObjectCode();
[002C] (D8) printEgo([Text("It's your standard, everyday trunk covered with mystic sigils.")]);
[006D] (00) stopObjectCode();
[006E] (D8) printEgo([Text("I can't open the trunk in the REAL game, much less this demo.")]);
[00AE] (00) stopObjectCode();
[00AF] (D8) printEgo([Text("Ooooof.  It's too heavy.")]);
[00CA] (00) stopObjectCode();
END

// Object 391: "Dead" Chicken
Events:
   8 - 00B8
   9 - 002D
   B - 0088
  5A - 0131
[002D] (D8) printEgo([Text("Hmmm^" + wait() + "A rubber chicken with a pulley in the middle" + wait() + "What possible use could that have?")]);
[0087] (00) stopObjectCode();
[0088] (D8) printEgo([Text("It's silly looking, but it may be useful.")]);
[00B4] (50) pickupObject(391);
[00B7] (00) stopObjectCode();
[00B8] (8B) VAR_RESULT = getVerbEntryPoint(Local[0],8);
[00BF] (A8) if (VAR_RESULT) {
[00C4] (79)   doSentence(8,Local[0],VAR_ME);
[00CA] (18) } else {
[00CD] (D8)   printEgo([Text("There surely must be a use for a rubber chicken with a pulley in the middle, but this is not it.")]);
[0130] (**) }
[0130] (00) stopObjectCode();
[0131] (10) VAR_RESULT = getObjectOwner(391);
[0136] (C8) if (VAR_RESULT == VAR_EGO) {
[013D] (18) } else {
[0140] (1A)   Var[194] = 9;
[0145] (**) }
[0145] (00) stopObjectCode();
END

// Object 392: Bones
Events:
   9 - 0029
   B - 004F
  5A - 0023
[0023] (1A) Var[194] = 9;
[0028] (00) stopObjectCode();
[0029] (D8) printEgo([Text("Gosh, these bones are so^bonelike.")]);
[004E] (00) stopObjectCode();
[004F] (D8) printEgo([Text("I'd better not.  It might offend someone.")]);
[007B] (00) stopObjectCode();
END

// Object 393: Chalice
Events:
   8 - 002E
   9 - 0032
   B - 002E
  5A - 0028
[0028] (1A) Var[194] = 9;
[002D] (00) stopObjectCode();
[002E] (0A) startScript(208,[]);
[0031] (00) stopObjectCode();
[0032] (D8) printEgo([Text("Now, THIS is the cup of a carpenter.")]);
[0059] (00) stopObjectCode();
END

// Object 394: Voodoo Love Beads
Events:
   9 - 0035
   B - 0046
  5A - 002F
[002F] (1A) Var[194] = 9;
[0034] (00) stopObjectCode();
[0035] (D8) printEgo([Text("I love beads.")]);
[0045] (00) stopObjectCode();
[0046] (D8) printEgo([Text("I don't love them that much.")]);
[0065] (00) stopObjectCode();
END

// Object 395: Cauldron of Fear
Events:
   A - 002F
  5A - 002E
  FF - 0030
[002E] (00) stopObjectCode();
[002F] (00) stopObjectCode();
[0030] (D8) printEgo([Text("I can't.  I'm o'feared of it.")]);
[0050] (00) stopObjectCode();
END

// Object 396: Fortune Teller
Events:
   3 - 0039
   D - 002F
  50 - 0083
  5A - 0033
[002F] (0A) startScript(203,[]);
[0032] (00) stopObjectCode();
[0033] (1A) Var[194] = 13;
[0038] (00) stopObjectCode();
[0039] (48) if (Local[0] == 306) {
[0040] (91)   animateCostume(VAR_EGO,250);
[0044] (D8)   printEgo([Text("Maybe I should talk to her before I slap her with a fish.")]);
[0080] (AE)   WaitForMessage();
[0082] (**) }
[0082] (00) stopObjectCode();
[0083] (48) if (Local[0] == 306) {
[008A] (91)   animateCostume(VAR_EGO,250);
[008E] (D8)   printEgo([Text("Maybe I should talk to her before I slap her with a fish.")]);
[00CA] (AE)   WaitForMessage();
[00CC] (**) }
[00CC] (00) stopObjectCode();
END

// Object 397
Events:
END

// Object 398
Events:
END

// Object 399
Events:
END

// Object 400
Events:
END