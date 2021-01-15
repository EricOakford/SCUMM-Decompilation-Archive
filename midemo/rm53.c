/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 53: Fortune Teller's House (fortune)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(3,8)
[000D] (**) }
[000D] (07) setState(398,0);
[0011] (07) setState(399,0);
[0015] (07) setState(397,1);
[0019] (2A) startScript(200,[],F);
[001C] (2A) startScript(201,[],F);
[001F] (2A) startScript(206,[],F);
[0022] (00) stopObjectCode();
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
[0048] (80) breakHere();
[0049] (48) unless (VAR_CAMERA_POS_X == 336) goto 0048;
[0050] (07) setState(398,1);
[0054] (07) setState(399,1);
[0058] (0A) startScript(203,[]);
[005B] (C0) endCutscene();
[005C] (80) breakHere();
[005D] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[0062] (78) unless (VAR_RESULT < 4) goto 005C;
[0069] (40) cutscene([2]);
[006E] (12) panCameraTo(160);
[0071] (80) breakHere();
[0072] (48) unless (VAR_CAMERA_POS_X == 160) goto 0071;
[0079] (07) setState(397,1);
[007D] (2D) putActorInRoom(4,0);
[0080] (C0) endCutscene();
[0081] (18) goto 001D;
[0084] (A0) stopObjectCode();
END

Script# 201
[0000] (13) ActorOps(3,[Init(),Costume(18),TalkColor(2),Scale(255)]);
[000A] (AC) Exprmode Var[103] = (0 - 100);
[0015] (13) ActorOps(3,[Elevation(Var[103])]);
[001B] (5D) setClass(3,[150,149]);
[0025] (2D) putActorInRoom(3,53);
[0028] (01) putActor(3,360,0);
[002E] (11) animateCostume(3,250);
[0031] (2A) startScript(202,[],F);
[0034] (A0) stopObjectCode();
END

Script# 202
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (11)   animateCostume(3,9);
[000A] (AC)   Exprmode Local[0] = (300 + <VAR_RESULT = getRandomNr(0)>);
[0017] (2B)   delayVariable(Local[0]);
[001A] (11)   animateCostume(3,8);
[001D] (AC)   Exprmode Local[0] = (300 + <VAR_RESULT = getRandomNr(0)>);
[002A] (2B)   delayVariable(Local[0]);
[002D] (18)   goto 0007;
[0030] (**) }
[0030] (A0) stopObjectCode();
END

Script# 203 // Talk to Fortune Teller
[0000] (9A) Local[0] = VAR_VERB_SCRIPT;
[0005] (1A) VAR_VERB_SCRIPT = 18;
[000A] (0A) startScript(21,[3]);
[0010] (40) cutscene([]);
[0012] (2E) delay(20);
[0016] (10) VAR_RESULT = getObjectOwner(306);
[001B] (88) if (VAR_RESULT != VAR_EGO) {
[0022] (A8)   if (Bit[44]) {
[0027] (14)     print(3,[Text("I thought I told you to bring me a fish.")]);
[0053] (18)   } else {
[0056] (14)     print(3,[Text("Greetings^" + wait() + "^have you brought me a fish?")]);
[0082] (AE)     WaitForMessage();
[0084] (1A)     Var[175] = 145;
[0089] (1A)     Bit[23] = 0;
[008E] (2C)     CursorShow();
[0090] (2C)     UserputOn();
[0092] (7A)     VerbOps(120,[Off()]);
[0096] (7A)     VerbOps(121,[Off()]);
[009A] (7A)     VerbOps(122,[Off()]);
[009E] (7A)     VerbOps(123,[Off()]);
[00A2] (7A)     VerbOps(124,[Off()]);
[00A6] (7A)     VerbOps(125,[Off()]);
[00AA] (7A)     VerbOps(126,[Off()]);
[00AE] (7A)     VerbOps(127,[Off()]);
[00B2] (7A)     VerbOps(128,[Off()]);
[00B6] (26)     setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[00C3] (26)     setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[00D0] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[00DF] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Were you dropped on your head as a child?"),On()]);
[0114] (5A)     Var[175] += 8;
[0119] (3A)     Var[103] -= 120;
[011E] (1A)     Bit[35 + Var[103]] = 1;
[0125] (A8)     if (Bit[13]) {
[012A] (AC)       Exprmode Var[103] = ((120 + 2) - 1);
[0139] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("No, but I have a barber named Dominique."),On()]);
[016D] (5A)       Var[175] += 8;
[0172] (3A)       Var[103] -= 120;
[0177] (1A)       Bit[35 + Var[103]] = 1;
[017E] (**)     }
[017E] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[018D] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("No, but my yak has wax lips."),On()]);
[01B5] (5A)     Var[175] += 8;
[01BA] (3A)     Var[103] -= 120;
[01BF] (1A)     Bit[35 + Var[103]] = 1;
[01C6] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[01D5] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("What are you talking about?"),On()]);
[01FC] (5A)     Var[175] += 8;
[0201] (3A)     Var[103] -= 120;
[0206] (1A)     Bit[35 + Var[103]] = 1;
[020D] (A8)     if (Bit[49]) {
[0212] (28)       if (!Bit[50]) {
[0217] (AC)         Exprmode Var[103] = ((120 + 5) - 1);
[0226] (FA)         VerbOps(Var[103],[SetXY(0,Var[175]),Text("Fish?  What fish?  I need a magic phrase."),On()]);
[025B] (5A)         Var[175] += 8;
[0260] (3A)         Var[103] -= 120;
[0265] (1A)         Bit[35 + Var[103]] = 1;
[026C] (**)       }
[026C] (**)     }
[026C] (1A)     Var[173] = 0;
[0271] (80)     breakHere();
[0272] (A8)     unless (Var[173]) goto 0271;
[0277] (48)     if (Var[173] == 120) {
[027E] (14)       print(3,[Text("I'm ignoring you.")]);
[0293] (48)     } else if (Var[173] == 121) {
[029D] (14)       print(3,[Text("You must have mistaken me for someone else.")]);
[02CC] (48)     } else if (Var[173] == 122) {
[02D6] (14)       print(3,[Text("Flattery will get you nowhere.")]);
[02F8] (48)     } else if (Var[173] == 123) {
[0302] (14)       print(3,[Text("Never mind.")]);
[0311] (48)     } else if (Var[173] == 124) {
[031B] (14)       print(3,[Text("You dare ask me for the magic phrase without a fish?" + wait() + "I cannot believe your audacity.")]);
[0374] (18)       /* goto 0377; */
[0377] (**)     }
[0377] (1A)     Bit[44] = 1;
[037C] (**)   }
[037C] (AE)   WaitForMessage();
[037E] (14)   print(3,[Text("Come back when you have a fish.")]);
[03A1] (AE)   WaitForMessage();
[03A3] (18)   goto 2627;
[03A6] (18) } else {
[03A9] (A8)   if (Bit[45]) {
[03AE] (A8)     if (Bit[46]) {
[03B3] (A8)       if (Bit[48]) {
[03B8] (A8)         if (Bit[47]) {
[03BD] (A8)           if (Bit[84]) {
[03C2] (14)             print(3,[Text("I'm very tired^" + wait() + "^what do you want?")]);
[03E9] (AE)             WaitForMessage();
[03EB] (1A)             Var[175] = 145;
[03F0] (1A)             Bit[23] = 0;
[03F5] (2C)             CursorShow();
[03F7] (2C)             UserputOn();
[03F9] (7A)             VerbOps(120,[Off()]);
[03FD] (7A)             VerbOps(121,[Off()]);
[0401] (7A)             VerbOps(122,[Off()]);
[0405] (7A)             VerbOps(123,[Off()]);
[0409] (7A)             VerbOps(124,[Off()]);
[040D] (7A)             VerbOps(125,[Off()]);
[0411] (7A)             VerbOps(126,[Off()]);
[0415] (7A)             VerbOps(127,[Off()]);
[0419] (7A)             VerbOps(128,[Off()]);
[041D] (26)             setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[042A] (26)             setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0437] (AC)             Exprmode Var[103] = ((120 + 1) - 1);
[0446] (FA)             VerbOps(Var[103],[SetXY(0,Var[175]),Text("I have more questions about the Monkey Island\x0F game."),On()]);
[0486] (5A)             Var[175] += 8;
[048B] (3A)             Var[103] -= 120;
[0490] (1A)             Bit[35 + Var[103]] = 1;
[0497] (A8)             if (Bit[49]) {
[049C] (28)               if (!Bit[50]) {
[04A1] (AC)                 Exprmode Var[103] = ((120 + 2) - 1);
[04B0] (FA)                 VerbOps(Var[103],[SetXY(0,Var[175]),Text("I really want to know about this magic phrase."),On()]);
[04EA] (5A)                 Var[175] += 8;
[04EF] (3A)                 Var[103] -= 120;
[04F4] (1A)                 Bit[35 + Var[103]] = 1;
[04FB] (18)               } else {
[04FE] (AC)                 Exprmode Var[103] = ((120 + 2) - 1);
[050D] (FA)                 VerbOps(Var[103],[SetXY(0,Var[175]),Text("I want to know more about this magic phrase."),On()]);
[0545] (5A)                 Var[175] += 8;
[054A] (3A)                 Var[103] -= 120;
[054F] (1A)                 Bit[35 + Var[103]] = 1;
[0556] (**)               }
[0556] (**)             }
[0556] (1A)             Var[173] = 0;
[055B] (80)             breakHere();
[055C] (A8)             unless (Var[173]) goto 055B;
[0561] (48)             if (Var[173] == 120) {
[0568] (14)               print(3,[Text("Why don't you buy the game and find out for yourself?")]);
[05A1] (AE)               WaitForMessage();
[05A3] (18)               goto 2627;
[05A6] (48)             } else if (Var[173] == 121) {
[05B0] (14)               print(3,[Text("I don't know much about real magic." + wait() + "But `you should get a new faculty advisor.`" + wait() + "Now, begone!")]);
[0612] (1A)               Bit[50] = 1;
[0617] (AE)               WaitForMessage();
[0619] (D8)               printEgo([Text("Thanks, fortune teller.")]);
[0633] (AE)               WaitForMessage();
[0635] (18)               goto 2627;
[0638] (18)               /* goto 063B; */
[063B] (**)             }
[063B] (**)           }
[063B] (**)         }
[063B] (**)       }
[063B] (**)     }
[063B] (48)     if (Var[201] == 1) {
[0642] (14)       print(3,[Text("Hello again, Guybrush Threepwood.")]);
[0667] (48)     } else if (Var[201] == 2) {
[0671] (14)       print(3,[Text("You want to talk more?" + wait() + "You must be awfully lonely.")]);
[06A8] (48)     } else if (Var[201] == 3) {
[06B2] (14)       print(3,[Text("How much information do you think I'll give you?")]);
[06E6] (18)     } else {
[06E9] (14)       print(3,[Text("You again, huh?")]);
[06FC] (**)     }
[06FC] (AC)     Exprmode Var[201] = (Var[201] + 1);
[0707] (AE)     WaitForMessage();
[0709] (14)     print(3,[Text("Have you brought me more fish?")]);
[072B] (AE)     WaitForMessage();
[072D] (1A)     Var[175] = 145;
[0732] (1A)     Bit[23] = 0;
[0737] (2C)     CursorShow();
[0739] (2C)     UserputOn();
[073B] (7A)     VerbOps(120,[Off()]);
[073F] (7A)     VerbOps(121,[Off()]);
[0743] (7A)     VerbOps(122,[Off()]);
[0747] (7A)     VerbOps(123,[Off()]);
[074B] (7A)     VerbOps(124,[Off()]);
[074F] (7A)     VerbOps(125,[Off()]);
[0753] (7A)     VerbOps(126,[Off()]);
[0757] (7A)     VerbOps(127,[Off()]);
[075B] (7A)     VerbOps(128,[Off()]);
[075F] (26)     setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[076C] (26)     setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0779] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[0788] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Yes.  And I want your help again."),On()]);
[07B5] (5A)     Var[175] += 8;
[07BA] (3A)     Var[103] -= 120;
[07BF] (1A)     Bit[35 + Var[103]] = 1;
[07C6] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[07D5] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Yes, but I'll only give you a piece."),On()]);
[0805] (5A)     Var[175] += 8;
[080A] (3A)     Var[103] -= 120;
[080F] (1A)     Bit[35 + Var[103]] = 1;
[0816] (A8)     if (Bit[49]) {
[081B] (28)       if (!Bit[50]) {
[0820] (AC)         Exprmode Var[103] = ((120 + 5) - 1);
[082F] (FA)         VerbOps(Var[103],[SetXY(0,Var[175]),Text("Forget the fish.  I need a magic phrase."),On()]);
[0863] (5A)         Var[175] += 8;
[0868] (3A)         Var[103] -= 120;
[086D] (1A)         Bit[35 + Var[103]] = 1;
[0874] (18)       } else {
[0877] (AC)         Exprmode Var[103] = ((120 + 5) - 1);
[0886] (FA)         VerbOps(Var[103],[SetXY(0,Var[175]),Text("Yeah.  But I just forgot the magic phrase."),On()]);
[08BC] (5A)         Var[175] += 8;
[08C1] (3A)         Var[103] -= 120;
[08C6] (1A)         Bit[35 + Var[103]] = 1;
[08CD] (**)       }
[08CD] (**)     }
[08CD] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[08DC] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Oops.  I didn't mean to talk to you again."),On()]);
[0912] (5A)     Var[175] += 8;
[0917] (3A)     Var[103] -= 120;
[091C] (1A)     Bit[35 + Var[103]] = 1;
[0923] (1A)     Var[173] = 0;
[0928] (80)     breakHere();
[0929] (A8)     unless (Var[173]) goto 0928;
[092E] (48)     if (Var[173] == 120) {
[0935] (14)       print(3,[Text("Yes.  Most people do.")]);
[094E] (AE)       WaitForMessage();
[0950] (48)     } else if (Var[173] == 121) {
[095A] (14)       print(3,[Text("I thought I told you that you don't need anything again in this demo.")]);
[09A3] (AE)       WaitForMessage();
[09A5] (D8)       printEgo([Text("Then why do you want more fish?")]);
[09C7] (AE)       WaitForMessage();
[09C9] (14)       print(3,[Text("Greed." + wait() + "Boy, never give in to greed." + wait() + "It's an ugly thing." + wait() + "Now give me part of your fish.")]);
[0A26] (AE)       WaitForMessage();
[0A28] (48)     } else if (Var[173] == 122) {
[0A32] (14)       print(3,[Text("Then get out of my face.")]);
[0A4E] (AE)       WaitForMessage();
[0A50] (18)       goto 2627;
[0A53] (48)     } else if (Var[173] == 124) {
[0A5D] (14)       print(3,[Text("I'm a lonely fortune teller." + wait() + "Talk to me for a while before I give you the magic phrase.")]);
[0AB9] (AE)       WaitForMessage();
[0ABB] (18)       /* goto 0ABE; */
[0ABE] (**)     }
[0ABE] (1A)     Var[201] = 1;
[0AC3] (1A)     Bit[45] = 1;
[0AC8] (11)     animateCostume(3,7);
[0ACB] (0A)     startScript(204,[]);
[0ACE] (80)     breakHere();
[0ACF] (68)     VAR_RESULT = isScriptRunning(204);
[0AD3] (28)     unless (!VAR_RESULT) goto 0ACE;
[0AD8] (14)     print(3,[Text("Put part of the fish into the cauldron^ Guybrush Threepwood.")]);
[0B18] (AE)     WaitForMessage();
[0B1A] (91)     animateCostume(VAR_EGO,10);
[0B1E] (80)     breakHere();
[0B1F] (80)     breakHere();
[0B20] (80)     breakHere();
[0B21] (54)     setObjectName(306,"remains of fish");
[0B34] (91)     animateCostume(VAR_EGO,3);
[0B38] (18)   } else {
[0B3B] (14)     print(3,[Text("Ah, I smell that you have brought a fish^" + wait() + "Give it to me.")]);
[0B78] (AE)     WaitForMessage();
[0B7A] (1A)     Var[175] = 145;
[0B7F] (1A)     Bit[23] = 0;
[0B84] (2C)     CursorShow();
[0B86] (2C)     UserputOn();
[0B88] (7A)     VerbOps(120,[Off()]);
[0B8C] (7A)     VerbOps(121,[Off()]);
[0B90] (7A)     VerbOps(122,[Off()]);
[0B94] (7A)     VerbOps(123,[Off()]);
[0B98] (7A)     VerbOps(124,[Off()]);
[0B9C] (7A)     VerbOps(125,[Off()]);
[0BA0] (7A)     VerbOps(126,[Off()]);
[0BA4] (7A)     VerbOps(127,[Off()]);
[0BA8] (7A)     VerbOps(128,[Off()]);
[0BAC] (26)     setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0BB9] (26)     setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0BC6] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[0BD5] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Okay, but only a piece."),On()]);
[0BF8] (5A)     Var[175] += 8;
[0BFD] (3A)     Var[103] -= 120;
[0C02] (1A)     Bit[35 + Var[103]] = 1;
[0C09] (A8)     if (Bit[49]) {
[0C0E] (AC)       Exprmode Var[103] = ((120 + 5) - 1);
[0C1D] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("But all I'm looking for is the magic phrase."),On()]);
[0C55] (5A)       Var[175] += 8;
[0C5A] (3A)       Var[103] -= 120;
[0C5F] (1A)       Bit[35 + Var[103]] = 1;
[0C66] (**)     }
[0C66] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[0C75] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("I wouldn't give you the time of day."),On()]);
[0CA5] (5A)     Var[175] += 8;
[0CAA] (3A)     Var[103] -= 120;
[0CAF] (1A)     Bit[35 + Var[103]] = 1;
[0CB6] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[0CC5] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Fish?  I have no fish."),On()]);
[0CE7] (5A)     Var[175] += 8;
[0CEC] (3A)     Var[103] -= 120;
[0CF1] (1A)     Bit[35 + Var[103]] = 1;
[0CF8] (1A)     Var[173] = 0;
[0CFD] (80)     breakHere();
[0CFE] (A8)     unless (Var[173]) goto 0CFD;
[0D03] (48)     if (Var[173] == 121) {
[0D0A] (14)       print(3,[Text("What are you afraid of, boy?" + wait() + "You can't die in the demo^" + wait() + "And you need nothing for later^" + wait() + "^But have it your way.")]);
[0D7F] (AE)       WaitForMessage();
[0D81] (48)     } else if (Var[173] == 122) {
[0D8B] (14)       print(3,[Text("Then get out of my face.")]);
[0DA7] (AE)       WaitForMessage();
[0DA9] (18)       goto 2627;
[0DAC] (48)     } else if (Var[173] == 123) {
[0DB6] (14)       print(3,[Text("No fishie, no talkie.")]);
[0DCF] (AE)       WaitForMessage();
[0DD1] (18)       goto 2627;
[0DD4] (48)     } else if (Var[173] == 124) {
[0DDE] (14)       print(3,[Text("I'm a lonely fortune teller." + wait() + "Talk to me for a while before I give you the magic phrase.")]);
[0E3A] (AE)       WaitForMessage();
[0E3C] (18)       /* goto 0E3F; */
[0E3F] (**)     }
[0E3F] (1A)     Var[201] = 1;
[0E44] (1A)     Bit[45] = 1;
[0E49] (11)     animateCostume(3,7);
[0E4C] (0A)     startScript(204,[]);
[0E4F] (80)     breakHere();
[0E50] (68)     VAR_RESULT = isScriptRunning(204);
[0E54] (28)     unless (!VAR_RESULT) goto 0E4F;
[0E59] (14)     print(3,[Text("Put part of the fish into the cauldron^ Guybrush Threepwood.")]);
[0E99] (AE)     WaitForMessage();
[0E9B] (91)     animateCostume(VAR_EGO,10);
[0E9F] (80)     breakHere();
[0EA0] (80)     breakHere();
[0EA1] (80)     breakHere();
[0EA2] (54)     setObjectName(306,"remains of fish");
[0EB5] (91)     animateCostume(VAR_EGO,3);
[0EB9] (94)     print(VAR_EGO,[Text("Wow, how did you know my name?")]);
[0EDC] (AE)     WaitForMessage();
[0EDE] (14)     print(3,[Text("I am a fortune teller.")]);
[0EF8] (AE)     WaitForMessage();
[0EFA] (1A)     Var[203] = 1;
[0EFF] (1A)     Var[204] = 1;
[0F04] (0A)     startScript(212,[]);
[0F07] (80)     breakHere();
[0F08] (68)     VAR_RESULT = isScriptRunning(212);
[0F0C] (28)     unless (!VAR_RESULT) goto 0F07;
[0F11] (**)   }
[0F11] (16)   Local[1] = getRandomNr(3);
[0F15] (48)   if (Local[1] == 0) {
[0F1C] (14)     print(3,[Text("Eagerness is the meagerness of life.")]);
[0F44] (48)   } else if (Local[1] == 1) {
[0F4E] (14)     print(3,[Text("Patience is the way to knowledge.")]);
[0F73] (48)   } else if (Local[1] == 2) {
[0F7D] (14)     print(3,[Text("Asking is more than half the problem.")]);
[0FA6] (48)   } else if (Local[1] == 3) {
[0FB0] (14)     print(3,[Text("Pick a question.  Any question.")]);
[0FD3] (18)     /* goto 0FD6; */
[0FD6] (**)   }
[0FD6] (AE)   WaitForMessage();
[0FD8] (1A)   Var[175] = 145;
[0FDD] (1A)   Bit[23] = 0;
[0FE2] (2C)   CursorShow();
[0FE4] (2C)   UserputOn();
[0FE6] (7A)   VerbOps(120,[Off()]);
[0FEA] (7A)   VerbOps(121,[Off()]);
[0FEE] (7A)   VerbOps(122,[Off()]);
[0FF2] (7A)   VerbOps(123,[Off()]);
[0FF6] (7A)   VerbOps(124,[Off()]);
[0FFA] (7A)   VerbOps(125,[Off()]);
[0FFE] (7A)   VerbOps(126,[Off()]);
[1002] (7A)   VerbOps(127,[Off()]);
[1006] (7A)   VerbOps(128,[Off()]);
[100A] (26)   setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[1017] (26)   setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[1024] (28)   if (!Bit[46]) {
[1029] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1038] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Is this the fabled Monkey Island\x0F?"),On()]);
[1066] (5A)     Var[175] += 8;
[106B] (3A)     Var[103] -= 120;
[1070] (1A)     Bit[35 + Var[103]] = 1;
[1077] (28)   } else if (!Bit[84]) {
[107F] (AC)     Exprmode Var[103] = ((120 + 6) - 1);
[108E] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Where exactly is Monkey Island\x0F?"),On()]);
[10BA] (5A)     Var[175] += 8;
[10BF] (3A)     Var[103] -= 120;
[10C4] (1A)     Bit[35 + Var[103]] = 1;
[10CB] (**)   }
[10CB] (28)   if (!Bit[47]) {
[10D0] (28)     if (!Bit[61]) {
[10D5] (AC)       Exprmode Var[103] = ((120 + 3) - 1);
[10E4] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Are there ONLY pirates on this island?"),On()]);
[1116] (5A)       Var[175] += 8;
[111B] (3A)       Var[103] -= 120;
[1120] (1A)       Bit[35 + Var[103]] = 1;
[1127] (18)     } else {
[112A] (AC)       Exprmode Var[103] = ((120 + 3) - 1);
[1139] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("Where is everyone?  I've only seen pirates."),On()]);
[1170] (5A)       Var[175] += 8;
[1175] (3A)       Var[103] -= 120;
[117A] (1A)       Bit[35 + Var[103]] = 1;
[1181] (**)     }
[1181] (28)   } else if (!Bit[48]) {
[1189] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[1198] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("How do I get off this island?"),On()]);
[11C1] (5A)     Var[175] += 8;
[11C6] (3A)     Var[103] -= 120;
[11CB] (1A)     Bit[35 + Var[103]] = 1;
[11D2] (**)   }
[11D2] (A8)   if (Bit[49]) {
[11D7] (28)     if (!Bit[50]) {
[11DC] (AC)       Exprmode Var[103] = ((120 + 5) - 1);
[11EB] (FA)       VerbOps(Var[103],[SetXY(0,Var[175]),Text("What do you know about magic phrases?"),On()]);
[121C] (5A)       Var[175] += 8;
[1221] (3A)       Var[103] -= 120;
[1226] (1A)       Bit[35 + Var[103]] = 1;
[122D] (**)     }
[122D] (**)   }
[122D] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[123C] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I think I'll just browse."),On()]);
[1261] (5A)   Var[175] += 8;
[1266] (3A)   Var[103] -= 120;
[126B] (1A)   Bit[35 + Var[103]] = 1;
[1272] (1A)   Var[173] = 0;
[1277] (80)   breakHere();
[1278] (A8)   unless (Var[173]) goto 1277;
[127D] (48)   if (Var[173] == 120) {
[1284] (14)     print(3,[Text("No." + wait() + "This is M\x88l\x82e Island\x0F, home of treasure-hunting, grog-guzzling, timber-shivering pirates.")]);
[12E6] (18)     goto 15E0;
[12E9] (48)   } else if (Var[173] == 121) {
[12F3] (14)     print(3,[Text("You must pass the three trials of M\x88l\x82e Island\x0F.")]);
[1327] (18)     goto 18D6;
[132A] (48)   } else if (Var[173] == 122) {
[1334] (28)     if (!Bit[61]) {
[1339] (14)       print(3,[Text("Actually, there are two beautiful women on this island^" + wait() + "^but you won't meet either of them in this demo.")]);
[13A6] (1A)       Bit[61] = 1;
[13AB] (18)     } else {
[13AE] (14)       print(3,[Text("Like I told you before, you don't get to meet EVERYONE in this demo.")]);
[13F6] (**)     }
[13F6] (18)     goto 2035;
[13F9] (48)   } else if (Var[173] == 123) {
[1403] (14)     print(3,[Text("Take your time." + wait() + "The more time you spend here, the longer the demo will last." + wait() + "Well, I guess I won't be needing this anymore.")]);
[1484] (18)     goto 25DB;
[1487] (48)   } else if (Var[173] == 124) {
[1491] (1A)     Bit[50] = 1;
[1496] (14)     print(3,[Text("My grandmother told me these words upon her deathbed, and I never forgot them^" + wait() + "She said `Dear, maybe you should get a new faculty advisor.`" + wait() + "She was a little batty, but she sure knew her magic phrases." + wait() + "Any other questions?")]);
[157A] (18)     goto 0FD6;
[157D] (48)   } else if (Var[173] == 125) {
[1587] (1A)     Bit[84] = 1;
[158C] (14)     print(3,[Text("That is a question to ask of one who sells maps, not one who sees futures.")]);
[15DA] (18)     goto 0FD6;
[15DD] (18)     /* goto 15E0; */
[15E0] (**)   }
[15E0] (**) }
[15E0] (1A) Bit[46] = 1;
[15E5] (AE) WaitForMessage();
[15E7] (1A) Var[175] = 145;
[15EC] (1A) Bit[23] = 0;
[15F1] (2C) CursorShow();
[15F3] (2C) UserputOn();
[15F5] (7A) VerbOps(120,[Off()]);
[15F9] (7A) VerbOps(121,[Off()]);
[15FD] (7A) VerbOps(122,[Off()]);
[1601] (7A) VerbOps(123,[Off()]);
[1605] (7A) VerbOps(124,[Off()]);
[1609] (7A) VerbOps(125,[Off()]);
[160D] (7A) VerbOps(126,[Off()]);
[1611] (7A) VerbOps(127,[Off()]);
[1615] (7A) VerbOps(128,[Off()]);
[1619] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[1626] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[1633] (28) if (!Bit[48]) {
[1638] (28)   if (!Bit[62]) {
[163D] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[164C] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("How do I get off this island?"),On()]);
[1675] (5A)     Var[175] += 8;
[167A] (3A)     Var[103] -= 120;
[167F] (1A)     Bit[35 + Var[103]] = 1;
[1686] (18)   } else {
[1689] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[1698] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("I want to get off this island!"),On()]);
[16C2] (5A)     Var[175] += 8;
[16C7] (3A)     Var[103] -= 120;
[16CC] (1A)     Bit[35 + Var[103]] = 1;
[16D3] (**)   }
[16D3] (**) }
[16D3] (28) if (!Bit[84]) {
[16D8] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[16E7] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("Where would I find Monkey Island\x0F?"),On()]);
[1715] (5A)   Var[175] += 8;
[171A] (3A)   Var[103] -= 120;
[171F] (1A)   Bit[35 + Var[103]] = 1;
[1726] (**) }
[1726] (28) if (!Bit[47]) {
[172B] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[173A] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("So where are all the people?"),On()]);
[1762] (5A)   Var[175] += 8;
[1767] (3A)   Var[103] -= 120;
[176C] (1A)   Bit[35 + Var[103]] = 1;
[1773] (**) }
[1773] (A8) if (Bit[49]) {
[1778] (28)   if (!Bit[50]) {
[177D] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[178C] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("That's neat, but I really need a magic phrase."),On()]);
[17C6] (5A)     Var[175] += 8;
[17CB] (3A)     Var[103] -= 120;
[17D0] (1A)     Bit[35 + Var[103]] = 1;
[17D7] (**)   }
[17D7] (**) }
[17D7] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[17E6] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Oh well, that's interesting^but I have to leave."),On()]);
[1822] (5A) Var[175] += 8;
[1827] (3A) Var[103] -= 120;
[182C] (1A) Bit[35 + Var[103]] = 1;
[1833] (1A) Var[173] = 0;
[1838] (80) breakHere();
[1839] (A8) unless (Var[173]) goto 1838;
[183E] (48) if (Var[173] == 120) {
[1845] (1A)   Bit[62] = 1;
[184A] (18)   goto 12F3;
[184D] (48) } else if (Var[173] == 121) {
[1857] (14)   print(3,[Text("What's your hurry, honey?" + wait() + "Remember, so long as you have fish, you may see me.")]);
[18A9] (18)   goto 25DB;
[18AC] (48) } else if (Var[173] == 122) {
[18B6] (18)   goto 1334;
[18B9] (48) } else if (Var[173] == 123) {
[18C3] (18)   goto 1587;
[18C6] (48) } else if (Var[173] == 124) {
[18D0] (18)   goto 1491;
[18D3] (18)   /* goto 18D6; */
[18D6] (**) }
[18D6] (AE) WaitForMessage();
[18D8] (1A) Var[175] = 145;
[18DD] (1A) Bit[23] = 0;
[18E2] (2C) CursorShow();
[18E4] (2C) UserputOn();
[18E6] (7A) VerbOps(120,[Off()]);
[18EA] (7A) VerbOps(121,[Off()]);
[18EE] (7A) VerbOps(122,[Off()]);
[18F2] (7A) VerbOps(123,[Off()]);
[18F6] (7A) VerbOps(124,[Off()]);
[18FA] (7A) VerbOps(125,[Off()]);
[18FE] (7A) VerbOps(126,[Off()]);
[1902] (7A) VerbOps(127,[Off()]);
[1906] (7A) VerbOps(128,[Off()]);
[190A] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[1917] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[1924] (28) if (!Bit[46]) {
[1929] (28)   if (!Bit[57]) {
[192E] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[193D] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("You mean this isn't the infamous Monkey Island\x0F?"),On()]);
[1979] (5A)     Var[175] += 8;
[197E] (3A)     Var[103] -= 120;
[1983] (1A)     Bit[35 + Var[103]] = 1;
[198A] (18)   } else {
[198D] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[199C] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("I'm not on Monkey Island\x0F?"),On()]);
[19C2] (5A)     Var[175] += 8;
[19C7] (3A)     Var[103] -= 120;
[19CC] (1A)     Bit[35 + Var[103]] = 1;
[19D3] (**)   }
[19D3] (**) }
[19D3] (28) if (!Bit[48]) {
[19D8] (28)   if (!Bit[59]) {
[19DD] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[19EC] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("What are these three trials?"),On()]);
[1A14] (5A)     Var[175] += 8;
[1A19] (3A)     Var[103] -= 120;
[1A1E] (1A)     Bit[35 + Var[103]] = 1;
[1A25] (18)   } else {
[1A28] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[1A37] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Tell me more about the trials please."),On()]);
[1A68] (5A)     Var[175] += 8;
[1A6D] (3A)     Var[103] -= 120;
[1A72] (1A)     Bit[35 + Var[103]] = 1;
[1A79] (**)   }
[1A79] (**) }
[1A79] (28) if (!Bit[47]) {
[1A7E] (28)   if (!Bit[60]) {
[1A83] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[1A92] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("But I'm lonely.  I want to meet people."),On()]);
[1AC5] (5A)     Var[175] += 8;
[1ACA] (3A)     Var[103] -= 120;
[1ACF] (1A)     Bit[35 + Var[103]] = 1;
[1AD6] (18)   } else {
[1AD9] (AC)     Exprmode Var[103] = ((120 + 3) - 1);
[1AE8] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("I'd rather meet people."),On()]);
[1B0B] (5A)     Var[175] += 8;
[1B10] (3A)     Var[103] -= 120;
[1B15] (1A)     Bit[35 + Var[103]] = 1;
[1B1C] (**)   }
[1B1C] (**) }
[1B1C] (A8) if (Bit[49]) {
[1B21] (28)   if (!Bit[50]) {
[1B26] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[1B35] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Trial?  I want to know the magic phrase."),On()]);
[1B69] (5A)     Var[175] += 8;
[1B6E] (3A)     Var[103] -= 120;
[1B73] (1A)     Bit[35 + Var[103]] = 1;
[1B7A] (**)   }
[1B7A] (**) }
[1B7A] (28) if (!Bit[90]) {
[1B7F] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[1B8E] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("Does that entail WORK?? NO, THANKS!"),On()]);
[1BBD] (5A)   Var[175] += 8;
[1BC2] (3A)   Var[103] -= 120;
[1BC7] (1A)   Bit[35 + Var[103]] = 1;
[1BCE] (18) } else {
[1BD1] (1A)   Bit[90] = 0;
[1BD6] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[1BE5] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("I don't want to worry about ANYTHING now."),On()]);
[1C1A] (5A)   Var[175] += 8;
[1C1F] (3A)   Var[103] -= 120;
[1C24] (1A)   Bit[35 + Var[103]] = 1;
[1C2B] (**) }
[1C2B] (1A) Var[173] = 0;
[1C30] (80) breakHere();
[1C31] (A8) unless (Var[173]) goto 1C30;
[1C36] (48) if (Var[173] == 120) {
[1C3D] (1A)   Bit[57] = 1;
[1C42] (18)   goto 1284;
[1C45] (48) } else if (Var[173] == 121) {
[1C4F] (1A)   Bit[48] = 1;
[1C54] (1A)   Bit[59] = 1;
[1C59] (14)   print(3,[Text("Swordplay, thievery, and treasure huntery." + wait() + "But you don't have to worry about that now." + wait() + "This is ONLY a demo.")]);
[1CCA] (1A)   Bit[90] = 1;
[1CCF] (18)   goto 18D6;
[1CD2] (48) } else if (Var[173] == 122) {
[1CDC] (1A)   Bit[60] = 1;
[1CE1] (18)   goto 1334;
[1CE4] (48) } else if (Var[173] == 123) {
[1CEE] (14)   print(3,[Text("I see^")]);
[1CF8] (11)   animateCostume(3,11);
[1CFB] (14)   print(3,[Text("^Oh, a vision!^" + wait() + "^I see^" + wait() + "^a lazy boy getting eaten by the ghost pirate LeChuck.")]);
[1D4F] (AE)   WaitForMessage();
[1D51] (11)   animateCostume(3,10);
[1D54] (14)   print(3,[Text("It's too gruesome for me to watch.")]);
[1D7A] (AE)   WaitForMessage();
[1D7C] (18)   goto 1D8F;
[1D7F] (48) } else if (Var[173] == 124) {
[1D89] (18)   goto 1491;
[1D8C] (18)   /* goto 1D8F; */
[1D8F] (**) }
[1D8F] (1A) Var[175] = 145;
[1D94] (1A) Bit[23] = 0;
[1D99] (2C) CursorShow();
[1D9B] (2C) UserputOn();
[1D9D] (7A) VerbOps(120,[Off()]);
[1DA1] (7A) VerbOps(121,[Off()]);
[1DA5] (7A) VerbOps(122,[Off()]);
[1DA9] (7A) VerbOps(123,[Off()]);
[1DAD] (7A) VerbOps(124,[Off()]);
[1DB1] (7A) VerbOps(125,[Off()]);
[1DB5] (7A) VerbOps(126,[Off()]);
[1DB9] (7A) VerbOps(127,[Off()]);
[1DBD] (7A) VerbOps(128,[Off()]);
[1DC1] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[1DCE] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[1DDB] (28) if (!Bit[53]) {
[1DE0] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[1DEF] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("Please^tell me more about my future."),On()]);
[1E1F] (5A)   Var[175] += 8;
[1E24] (3A)   Var[103] -= 120;
[1E29] (1A)   Bit[35 + Var[103]] = 1;
[1E30] (**) }
[1E30] (28) if (!Bit[54]) {
[1E35] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[1E44] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("Can you see solutions for the REAL game?"),On()]);
[1E78] (5A)   Var[175] += 8;
[1E7D] (3A)   Var[103] -= 120;
[1E82] (1A)   Bit[35 + Var[103]] = 1;
[1E89] (**) }
[1E89] (A8) if (Bit[49]) {
[1E8E] (28)   if (!Bit[50]) {
[1E93] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[1EA2] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Wait!  What about the magic phrase?"),On()]);
[1ED1] (5A)     Var[175] += 8;
[1ED6] (3A)     Var[103] -= 120;
[1EDB] (1A)     Bit[35 + Var[103]] = 1;
[1EE2] (**)   }
[1EE2] (**) }
[1EE2] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[1EF1] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Thanks for your help, Fortune Teller."),On()]);
[1F22] (5A) Var[175] += 8;
[1F27] (3A) Var[103] -= 120;
[1F2C] (1A) Bit[35 + Var[103]] = 1;
[1F33] (1A) Var[173] = 0;
[1F38] (80) breakHere();
[1F39] (A8) unless (Var[173]) goto 1F38;
[1F3E] (48) if (Var[173] == 120) {
[1F45] (1A)   Bit[53] = 1;
[1F4A] (14)   print(3,[Text("I see^" + wait() + "^a game^" + wait() + "Yes! A game!" + wait() + "AWESOME SCALING!" + wait() + "BEAUTIFUL COLOR PICTURES!" + wait() + "^and^" + wait()newline() + "^and^" + wait() + "HUMOR EVERYWHERE!")]);
[1FBC] (AE)   WaitForMessage();
[1FBE] (18)   goto 1D8F;
[1FC1] (48) } else if (Var[173] == 121) {
[1FCB] (1A)   Bit[54] = 1;
[1FD0] (14)   print(3,[Text("Yes^" + wait() + "I see that you should^" + wait() + "use gunpowder with cannon nozzle.")]);
[2013] (AE)   WaitForMessage();
[2015] (18)   goto 1D8F;
[2018] (48) } else if (Var[173] == 122) {
[2022] (18)   goto 25DB;
[2025] (48) } else if (Var[173] == 124) {
[202F] (18)   goto 1491;
[2032] (18)   /* goto 2035; */
[2035] (**) }
[2035] (AE) WaitForMessage();
[2037] (1A) Var[175] = 145;
[203C] (1A) Bit[23] = 0;
[2041] (2C) CursorShow();
[2043] (2C) UserputOn();
[2045] (7A) VerbOps(120,[Off()]);
[2049] (7A) VerbOps(121,[Off()]);
[204D] (7A) VerbOps(122,[Off()]);
[2051] (7A) VerbOps(123,[Off()]);
[2055] (7A) VerbOps(124,[Off()]);
[2059] (7A) VerbOps(125,[Off()]);
[205D] (7A) VerbOps(126,[Off()]);
[2061] (7A) VerbOps(127,[Off()]);
[2065] (7A) VerbOps(128,[Off()]);
[2069] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[2076] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[2083] (28) if (!Bit[47]) {
[2088] (28)   if (!Bit[58]) {
[208D] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[209C] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Who are these beautiful women?"),On()]);
[20C6] (5A)     Var[175] += 8;
[20CB] (3A)     Var[103] -= 120;
[20D0] (1A)     Bit[35 + Var[103]] = 1;
[20D7] (18)   } else {
[20DA] (AC)     Exprmode Var[103] = ((120 + 2) - 1);
[20E9] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("So^tell me more about these women^"),On()]);
[2117] (5A)     Var[175] += 8;
[211C] (3A)     Var[103] -= 120;
[2121] (1A)     Bit[35 + Var[103]] = 1;
[2128] (**)   }
[2128] (**) }
[2128] (28) if (!Bit[46]) {
[212D] (28)   if (!Bit[56]) {
[2132] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[2141] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("Sounds exciting^so where are the monkeys?"),On()]);
[2176] (5A)     Var[175] += 8;
[217B] (3A)     Var[103] -= 120;
[2180] (1A)     Bit[35 + Var[103]] = 1;
[2187] (18)   } else {
[218A] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[2199] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("HEY!  I want to see the monkeys."),On()]);
[21C5] (5A)     Var[175] += 8;
[21CA] (3A)     Var[103] -= 120;
[21CF] (1A)     Bit[35 + Var[103]] = 1;
[21D6] (**)   }
[21D6] (**) }
[21D6] (28) if (!Bit[48]) {
[21DB] (28)   if (!Bit[55]) {
[21E0] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[21EF] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("That's awful.  How do I get off this island?"),On()]);
[2227] (5A)     Var[175] += 8;
[222C] (3A)     Var[103] -= 120;
[2231] (1A)     Bit[35 + Var[103]] = 1;
[2238] (18)   } else {
[223B] (AC)     Exprmode Var[103] = ((120 + 1) - 1);
[224A] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("So how do I leave this island?"),On()]);
[2274] (5A)     Var[175] += 8;
[2279] (3A)     Var[103] -= 120;
[227E] (1A)     Bit[35 + Var[103]] = 1;
[2285] (**)   }
[2285] (**) }
[2285] (A8) if (Bit[49]) {
[228A] (28)   if (!Bit[50]) {
[228F] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[229E] (FA)     VerbOps(Var[103],[SetXY(0,Var[175]),Text("That's nice, but I really want a magic phrase."),On()]);
[22D8] (5A)     Var[175] += 8;
[22DD] (3A)     Var[103] -= 120;
[22E2] (1A)     Bit[35 + Var[103]] = 1;
[22E9] (**)   }
[22E9] (**) }
[22E9] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[22F8] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("That's depressing.  I want out."),On()]);
[2323] (5A) Var[175] += 8;
[2328] (3A) Var[103] -= 120;
[232D] (1A) Bit[35 + Var[103]] = 1;
[2334] (1A) Var[173] = 0;
[2339] (80) breakHere();
[233A] (A8) unless (Var[173]) goto 2339;
[233F] (48) if (Var[173] == 120) {
[2346] (1A)   Bit[55] = 1;
[234B] (18)   goto 12F3;
[234E] (48) } else if (Var[173] == 121) {
[2358] (1A)   Bit[47] = 1;
[235D] (1A)   Bit[58] = 1;
[2362] (14)   print(3,[Text("Wait^" + wait() + "I'm getting a vision^" + wait() + "One woman you fight with^" + wait() + "One you^" + wait() + "^you^")]);
[23AE] (AE)   WaitForMessage();
[23B0] (11)   animateCostume(3,6);
[23B3] (14)   print(3,[Text("^you fall in love with^" + wait() + "But you won't meet either of them in this demo, so it doesn't matter. ")]);
[2416] (18)   goto 0FD6;
[2419] (48) } else if (Var[173] == 122) {
[2423] (14)   print(3,[Text("We all do, honey." + wait() + "We want to be in the REAL Monkey Island\x0F game." + wait() + "(which you can conveniently buy at a store near you)" + wait() + "Now leave me be.  I will retract my cauldron.")]);
[24CD] (18)   goto 25DB;
[24D0] (48) } else if (Var[173] == 123) {
[24DA] (28)   if (!Bit[56]) {
[24DF] (14)     print(3,[Text("That's Monkey Island\x0F." + wait() + "That's Monkey Island\x0F." + newline() + "This is M\x88l\x82e Island\x0F." + wait() + "That's Monkey Island\x0F." + newline() + "This is M\x88l\x82e Island\x0F." + newline() + "There are no monkeys here.")]);
[2575] (1A)     Bit[56] = 1;
[257A] (18)     goto 15E0;
[257D] (18)   } else {
[2580] (D8)     printEgo([Text("Like I said before" + newline() + "This is M\x88l\x82e Island\x0F" + wait() + "THERE ARE NO MONKEYS HERE.")]);
[25C8] (18)     goto 15E0;
[25CB] (**)   }
[25CB] (48) } else if (Var[173] == 124) {
[25D5] (18)   goto 1491;
[25D8] (18)   /* goto 25DB; */
[25DB] (**) }
[25DB] (AE) WaitForMessage();
[25DD] (11) animateCostume(3,7);
[25E0] (0A) startScript(205,[]);
[25E3] (80) breakHere();
[25E4] (68) VAR_RESULT = isScriptRunning(205);
[25E8] (28) unless (!VAR_RESULT) goto 25E3;
[25ED] (AE) WaitForMessage();
[25EF] (D8) printEgo([Text("Goodbye.")]);
[25FA] (AE) WaitForMessage();
[25FC] (14) print(3,[Text("Come back if you have more questions.")]);
[2625] (AE) WaitForMessage();
[2627] (AE) WaitForMessage();
[2629] (07) setState(398,0);
[262D] (07) setState(399,0);
[2631] (9E) walkActorTo(VAR_EGO,221,120);
[2638] (AE) WaitForActor(VAR_EGO);
[263C] (91) animateCostume(VAR_EGO,250);
[2640] (9A) VAR_VERB_SCRIPT = Local[0];
[2645] (0A) startScript(21,[2]);
[264B] (C0) endCutscene();
[264C] (A0) stopObjectCode();
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
[0018] (44) if (VAR_MACHINE_SPEED > 0) {
[001F] (11)   animateCostume(12,250);
[0022] (AC)   Exprmode Var[103] = (-19 + 24);
[002D] (13)   ActorOps(12,[Init(),Costume(25),Elevation(Var[103])]);
[0036] (5D)   setClass(12,[150,149]);
[0040] (**) }
[0040] (2D) putActorInRoom(4,0);
[0043] (11) animateCostume(4,6);
[0046] (07) setState(400,0);
[004A] (44) if (VAR_MACHINE_SPEED > 0) {
[0051] (2D)   putActorInRoom(12,53);
[0054] (01)   putActor(12,334,106);
[005A] (11)   animateCostume(12,6);
[005D] (**) }
[005D] (A0) stopObjectCode();
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

Script# 212 // Tell Birthday
[0000] (14) print(3,[Text("Now let me tell you your birthday.")]);
[0026] (AE) WaitForMessage();
[0028] (1A) Local[3] = 1;
[002D] (1A) Var[103] = 0;
[0032] (1A) Bit[67 + Var[103]] = 0;
[0039] (46) Var[103]++;
[003C] (44) unless (Var[103] > 12) goto 0032;
[0043] (16) Var[203] = getRandomNr(12);
[0047] (48) if (Var[203] == 0) {
[004E] (1A)   Var[203] = 1;
[0053] (**) }
[0053] (A8) if (Bit[67 + Var[203]]) {
[005A] (1A)   Var[103] = 1;
[005F] (48)   if (Bit[67 + Var[103]] == 0) {
[0068] (18)     goto 0043;
[006B] (**)   }
[006B] (46)   Var[103]++;
[006E] (44)   unless (Var[103] > 12) goto 005F;
[0075] (18) } else {
[007B] (1A)   Var[103] = 0;
[0080] (1A)   Bit[67 + Var[103]] = 0;
[0087] (46)   Var[103]++;
[008A] (44)   unless (Var[103] > 12) goto 0080;
[0091] (18)   goto 0043;
[0094] (**) }
[0094] (1A) Bit[67 + Var[203]] = 1;
[009B] (48) if (Var[203] == 1) {
[00A2] (27)   PutCodeInString(28, "January");
[00AD] (1A)   Local[5] = 31;
[00B2] (48) } else if (Var[203] == 2) {
[00BC] (27)   PutCodeInString(28, "February");
[00C8] (1A)   Local[5] = 29;
[00CD] (48) } else if (Var[203] == 3) {
[00D7] (27)   PutCodeInString(28, "March");
[00E0] (1A)   Local[5] = 31;
[00E5] (48) } else if (Var[203] == 4) {
[00EF] (27)   PutCodeInString(28, "April");
[00F8] (1A)   Local[5] = 30;
[00FD] (48) } else if (Var[203] == 5) {
[0107] (27)   PutCodeInString(28, "May");
[010E] (1A)   Local[5] = 31;
[0113] (48) } else if (Var[203] == 6) {
[011D] (27)   PutCodeInString(28, "June");
[0125] (1A)   Local[5] = 30;
[012A] (48) } else if (Var[203] == 7) {
[0134] (27)   PutCodeInString(28, "July");
[013C] (1A)   Local[5] = 31;
[0141] (48) } else if (Var[203] == 8) {
[014B] (27)   PutCodeInString(28, "August");
[0155] (1A)   Local[5] = 31;
[015A] (48) } else if (Var[203] == 9) {
[0164] (27)   PutCodeInString(28, "September");
[0171] (1A)   Local[5] = 30;
[0176] (48) } else if (Var[203] == 10) {
[0180] (27)   PutCodeInString(28, "October");
[018B] (1A)   Local[5] = 31;
[0190] (48) } else if (Var[203] == 11) {
[019A] (27)   PutCodeInString(28, "November");
[01A6] (1A)   Local[5] = 30;
[01AB] (48) } else if (Var[203] == 12) {
[01B5] (27)   PutCodeInString(28, "December");
[01C1] (1A)   Local[5] = 31;
[01C6] (18)   /* goto 01C9; */
[01C9] (**) }
[01C9] (14) print(3,[Text("Your birthday is in " + getString(VAR_ENTRY_SCRIPT) + "^")]);
[01E6] (AE) WaitForMessage();
[01E8] (1A) Var[175] = 145;
[01ED] (1A) Bit[23] = 0;
[01F2] (2C) CursorShow();
[01F4] (2C) UserputOn();
[01F6] (7A) VerbOps(120,[Off()]);
[01FA] (7A) VerbOps(121,[Off()]);
[01FE] (7A) VerbOps(122,[Off()]);
[0202] (7A) VerbOps(123,[Off()]);
[0206] (7A) VerbOps(124,[Off()]);
[020A] (7A) VerbOps(125,[Off()]);
[020E] (7A) VerbOps(126,[Off()]);
[0212] (7A) VerbOps(127,[Off()]);
[0216] (7A) VerbOps(128,[Off()]);
[021A] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[0227] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[0234] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[0243] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Yes^that's amazing!"),On()]);
[0262] (5A) Var[175] += 8;
[0267] (3A) Var[103] -= 120;
[026C] (1A) Bit[35 + Var[103]] = 1;
[0273] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[0282] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("No^"),On()]);
[0291] (5A) Var[175] += 8;
[0296] (3A) Var[103] -= 120;
[029B] (1A) Bit[35 + Var[103]] = 1;
[02A2] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[02B1] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Could you repeat that, please?"),On()]);
[02DB] (5A) Var[175] += 8;
[02E0] (3A) Var[103] -= 120;
[02E5] (1A) Bit[35 + Var[103]] = 1;
[02EC] (1A) Var[173] = 0;
[02F1] (80) breakHere();
[02F2] (A8) unless (Var[173]) goto 02F1;
[02F7] (48) if (Var[173] == 120) {
[02FE] (18)   goto 0554;
[0301] (48) } else if (Var[173] == 121) {
[030B] (48)   if (Local[3] == 1) {
[0312] (27)     PutCodeInString(30, "Oh, ah, I mean, um^");
[0329] (48)   } else if (Local[3] == 2) {
[0333] (27)     PutCodeInString(30, "Of course not.");
[0345] (48)   } else if (Local[3] == 3) {
[034F] (27)     PutCodeInString(30, "I knew that.");
[035F] (48)   } else if (Local[3] == 4) {
[0369] (27)     PutCodeInString(30, "What I meant was^");
[037E] (48)   } else if (Local[3] == 5) {
[0388] (27)     PutCodeInString(30, "Hmmm.  This is trickier than I thought.");
[03B3] (48)   } else if (Local[3] == 6) {
[03BD] (27)     PutCodeInString(30, "Let me try again.");
[03D2] (48)   } else if (Local[3] == 7) {
[03DC] (27)     PutCodeInString(30, "This is getting embarrassing.");
[03FD] (48)   } else if (Local[3] == 8) {
[0407] (27)     PutCodeInString(30, "Will you excuse my ignorance?");
[0428] (48)   } else if (Local[3] == 9) {
[0432] (27)     PutCodeInString(30, "This is the part of my job that I've always hated.");
[0468] (48)   } else if (Local[3] == 10) {
[0472] (27)     PutCodeInString(30, "I really must be rusty at this.");
[0495] (48)   } else if (Local[3] == 11) {
[049F] (27)     PutCodeInString(30, "I'm sure I know which month you were born in.");
[04D0] (48)   } else if (Local[3] == 12) {
[04DA] (27)     PutCodeInString(30, "Now, I know that this wasn't MY fault^try to pay attention this time.");
[0523] (18)     /* goto 0526; */
[0526] (**)   }
[0526] (14)   print(3,[Text(getString(VAR_EXIT_SCRIPT))]);
[052E] (5A)   Local[3] += 1;
[0533] (48)   if (Local[3] == 13) {
[053A] (1A)     Local[3] = 1;
[053F] (**)   }
[053F] (AE)   WaitForMessage();
[0541] (18)   goto 0043;
[0544] (48) } else if (Var[173] == 122) {
[054E] (18)   goto 0094;
[0551] (18)   /* goto 0554; */
[0554] (**) }
[0554] (1A) Local[3] = 1;
[0559] (1A) Var[103] = 0;
[055E] (1A) Bit[67 + Var[103]] = 0;
[0565] (46) Var[103]++;
[0568] (44) unless (Var[103] > 12) goto 055E;
[056F] (9A) Local[0] = Local[5];
[0574] (1A) Local[1] = 1;
[0579] (1A) Local[4] = 1;
[057E] (AC) Exprmode Var[204] = (<VAR_RESULT = getRandomNr(27)> + 1);
[058B] (48) if (Var[204] == 1) {
[0592] (27)   PutCodeInString(29, "st");
[0598] (48) } else if (Var[204] == 21) {
[05A2] (27)   PutCodeInString(29, "st");
[05A8] (48) } else if (Var[204] == 31) {
[05B2] (27)   PutCodeInString(29, "st");
[05B8] (48) } else if (Var[204] == 22) {
[05C2] (27)   PutCodeInString(29, "nd");
[05C8] (48) } else if (Var[204] == 2) {
[05D2] (27)   PutCodeInString(29, "nd");
[05D8] (48) } else if (Var[204] == 3) {
[05E2] (27)   PutCodeInString(29, "rd");
[05E8] (48) } else if (Var[204] == 23) {
[05F2] (27)   PutCodeInString(29, "rd");
[05F8] (18) } else {
[05FB] (27)   PutCodeInString(29, "th");
[0601] (**) }
[0601] (AC) Exprmode Local[2] = (Local[0] - Local[1]);
[060C] (A8) if (Local[4]) {
[0611] (14)   print(3,[Text("You were born on " + getString(VAR_ENTRY_SCRIPT) + " " + getInt(Var[204])getString(VAR_ENTRY_SCRIPT2) + ".")]);
[0634] (44) } else if (Local[2] > 2) {
[063E] (14)   print(3,[Text("You were born before the " + getInt(Var[204])getString(VAR_ENTRY_SCRIPT2) + ".")]);
[0664] (18) } else {
[0667] (14)   print(3,[Text("You were born on " + getString(VAR_ENTRY_SCRIPT) + " " + getInt(Var[204])getString(VAR_ENTRY_SCRIPT2) + ".")]);
[068A] (**) }
[068A] (AE) WaitForMessage();
[068C] (1A) Var[175] = 145;
[0691] (1A) Bit[23] = 0;
[0696] (2C) CursorShow();
[0698] (2C) UserputOn();
[069A] (7A) VerbOps(120,[Off()]);
[069E] (7A) VerbOps(121,[Off()]);
[06A2] (7A) VerbOps(122,[Off()]);
[06A6] (7A) VerbOps(123,[Off()]);
[06AA] (7A) VerbOps(124,[Off()]);
[06AE] (7A) VerbOps(125,[Off()]);
[06B2] (7A) VerbOps(126,[Off()]);
[06B6] (7A) VerbOps(127,[Off()]);
[06BA] (7A) VerbOps(128,[Off()]);
[06BE] (26) setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[06CB] (26) setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[06D8] (44) if (Local[2] > 2) {
[06DF] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[06EE] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("Yes, I was."),On()]);
[0705] (5A)   Var[175] += 8;
[070A] (3A)   Var[103] -= 120;
[070F] (1A)   Bit[35 + Var[103]] = 1;
[0716] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[0725] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("No^"),On()]);
[0734] (5A)   Var[175] += 8;
[0739] (3A)   Var[103] -= 120;
[073E] (1A)   Bit[35 + Var[103]] = 1;
[0745] (18) } else {
[0748] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[0757] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("That's amazing!"),On()]);
[0772] (5A)   Var[175] += 8;
[0777] (3A)   Var[103] -= 120;
[077C] (1A)   Bit[35 + Var[103]] = 1;
[0783] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[0792] (FA)   VerbOps(Var[103],[SetXY(0,Var[175]),Text("No.  That's not my birthday."),On()]);
[07BA] (5A)   Var[175] += 8;
[07BF] (3A)   Var[103] -= 120;
[07C4] (1A)   Bit[35 + Var[103]] = 1;
[07CB] (**) }
[07CB] (AC) Exprmode Var[103] = ((120 + 5) - 1);
[07DA] (FA) VerbOps(Var[103],[SetXY(0,Var[175]),Text("Could you repeat that, please?"),On()]);
[0804] (5A) Var[175] += 8;
[0809] (3A) Var[103] -= 120;
[080E] (1A) Bit[35 + Var[103]] = 1;
[0815] (1A) Var[173] = 0;
[081A] (80) breakHere();
[081B] (A8) unless (Var[173]) goto 081A;
[0820] (48) if (Var[173] == 120) {
[0827] (A8)   if (Local[4]) {
[082C] (1A)     Local[4] = 0;
[0831] (18)     goto 0A89;
[0834] (18)   } else {
[0837] (9A)     Local[0] = Var[204];
[083C] (AC)     Exprmode Var[204] = (Local[1] + ((Local[0] - Local[1]) / 2));
[084F] (18)     goto 058B;
[0852] (**)   }
[0852] (48) } else if (Var[173] == 121) {
[085C] (A8)   if (Local[4]) {
[0861] (1A)     Var[204] = 15;
[0866] (1A)     Local[4] = 0;
[086B] (18)     goto 058B;
[086E] (18)   } else {
[0871] (9A)     Local[1] = Var[204];
[0876] (AC)     Exprmode Var[204] = (Local[1] + ((Local[0] - Local[1]) / 2));
[0889] (48)     if (Var[203] == 1) {
[0890] (44)       if (Var[204] > 31) {
[0897] (1A)         Var[204] = 31;
[089C] (**)       }
[089C] (48)     } else if (Var[203] == 2) {
[08A6] (44)       if (Var[204] > 29) {
[08AD] (1A)         Var[204] = 29;
[08B2] (**)       }
[08B2] (48)     } else if (Var[203] == 3) {
[08BC] (44)       if (Var[204] > 31) {
[08C3] (1A)         Var[204] = 31;
[08C8] (**)       }
[08C8] (48)     } else if (Var[203] == 4) {
[08D2] (44)       if (Var[204] > 30) {
[08D9] (1A)         Var[204] = 30;
[08DE] (**)       }
[08DE] (48)     } else if (Var[203] == 5) {
[08E8] (44)       if (Var[204] > 31) {
[08EF] (1A)         Var[204] = 31;
[08F4] (**)       }
[08F4] (48)     } else if (Var[203] == 6) {
[08FE] (44)       if (Var[204] > 30) {
[0905] (1A)         Var[204] = 30;
[090A] (**)       }
[090A] (48)     } else if (Var[203] == 7) {
[0914] (44)       if (Var[204] > 31) {
[091B] (1A)         Var[204] = 31;
[0920] (**)       }
[0920] (48)     } else if (Var[203] == 8) {
[092A] (44)       if (Var[204] > 31) {
[0931] (1A)         Var[204] = 31;
[0936] (**)       }
[0936] (48)     } else if (Var[203] == 9) {
[0940] (44)       if (Var[204] > 30) {
[0947] (1A)         Var[204] = 30;
[094C] (**)       }
[094C] (48)     } else if (Var[203] == 10) {
[0956] (44)       if (Var[204] > 31) {
[095D] (1A)         Var[204] = 31;
[0962] (**)       }
[0962] (48)     } else if (Var[203] == 11) {
[096C] (44)       if (Var[204] > 30) {
[0973] (1A)         Var[204] = 30;
[0978] (**)       }
[0978] (48)     } else if (Var[203] == 12) {
[0982] (44)       if (Var[204] > 31) {
[0989] (1A)         Var[204] = 31;
[098E] (**)       }
[098E] (18)       /* goto 0991; */
[0991] (**)     }
[0991] (18)     goto 058B;
[0994] (**)   }
[0994] (48) } else if (Var[173] == 122) {
[099E] (AC)   Exprmode Var[207] = (((Var[203] + 256) * Var[204]) * 4);
[09B1] (AC)   Exprmode Var[207] = (Var[207] / 3);
[09BC] (04)   unless (Var[207] <= 180) goto 09B1;
[09C3] (78)   if (Var[207] < 0) {
[09CA] (AC)     Exprmode Var[207] = (Var[207] + -32768);
[09D5] (**)   }
[09D5] (AC)   Exprmode Var[208] = (((Var[204] + 391) * 12) / Var[203]);
[09E8] (AC)   Exprmode Var[208] = (Var[208] / 5);
[09F3] (04)   unless (Var[208] <= 90) goto 09E8;
[09FA] (18)   goto 0A89;
[09FD] (48) } else if (Var[173] == 123) {
[0A07] (C8)   if (Var[204] == Local[1]) {
[0A0E] (9A)     Var[204] = Local[0];
[0A13] (18)     goto 058B;
[0A16] (C8)   } else if (Var[204] == Local[0]) {
[0A20] (14)     print(3,[Text("Well, I'm just going by the vibes you gave me." + wait() + "Let's try this again.")]);
[0A69] (AE)     WaitForMessage();
[0A6B] (18)     goto 0094;
[0A6E] (18)   } else {
[0A71] (9A)     Var[204] = Local[1];
[0A76] (18)     goto 058B;
[0A79] (**)   }
[0A79] (48) } else if (Var[173] == 124) {
[0A83] (18)   goto 058B;
[0A86] (18)   /* goto 0A89; */
[0A89] (**) }
[0A89] (AE) WaitForMessage();
[0A8B] (A0) stopObjectCode();
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
[008E] (1A)   Var[171] = 1;
[0093] (18) } else {
[0096] (1A)   Var[171] = 2;
[009B] (**) }
[009B] (00) stopObjectCode();
END

// Object 382: Beautiful Chicken
Events:
   9 - 002C
   A - 00AA
   B - 003E
  5A - 00A4
  FF - 00AB
[002C] (D8) printEgo([Text("Poor chickens^")]);
[003D] (00) stopObjectCode();
[003E] (D8) printEgo([Text("I'd better not.  They're probably being saved for a pagan ritual, and I wouldn't want to spoil it.")]);
[00A3] (00) stopObjectCode();
[00A4] (1A) Var[171] = 9;
[00A9] (00) stopObjectCode();
[00AA] (00) stopObjectCode();
[00AB] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00F0] (00) stopObjectCode();
END

// Object 383: Ugly Chicken
Events:
   9 - 0029
   A - 003B
  5A - 003C
  FF - 0042
[0029] (D8) printEgo([Text("Poor chickens^")]);
[003A] (00) stopObjectCode();
[003B] (00) stopObjectCode();
[003C] (1A) Var[171] = 9;
[0041] (00) stopObjectCode();
[0042] (D8) printEgo([Text("No thanks.  Haven't you ever heard of salmonella?")]);
[0076] (00) stopObjectCode();
END

// Object 384: Statue
Events:
   9 - 0027
   A - 0054
  5A - 004E
  FF - 0055
[0027] (D8) printEgo([Text("Kind of an emaciated Charles Atlas.")]);
[004D] (00) stopObjectCode();
[004E] (1A) Var[171] = 9;
[0053] (00) stopObjectCode();
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[009A] (00) stopObjectCode();
END

// Object 385: Basket 1
Events:
   1 - 0055
   9 - 002B
   A - 00B4
  5A - 00AE
  FF - 00B5
[002B] (D8) printEgo([Text("Gee, I wonder what's in these baskets.")]);
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("Actually, I'm not THAT curious to find out what's inside." + wait() + "Probably poisonous snakes.")]);
[00AD] (00) stopObjectCode();
[00AE] (1A) Var[171] = 9;
[00B3] (00) stopObjectCode();
[00B4] (00) stopObjectCode();
[00B5] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00FA] (00) stopObjectCode();
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
[0090] (1A) Var[171] = 9;
[0095] (00) stopObjectCode();
[0096] (00) stopObjectCode();
[0097] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00DC] (00) stopObjectCode();
END

// Object 387: Basket 3
Events:
   1 - 0055
   9 - 002B
   A - 00B4
  5A - 00AE
  FF - 00B5
[002B] (D8) printEgo([Text("Gee, I wonder what's in these baskets.")]);
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("Actually, I'm not THAT curious to find out what's inside." + wait() + "Probably poisonous snakes.")]);
[00AD] (00) stopObjectCode();
[00AE] (1A) Var[171] = 9;
[00B3] (00) stopObjectCode();
[00B4] (00) stopObjectCode();
[00B5] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00FA] (00) stopObjectCode();
END

// Object 388: Voodoo Knick-Knacks
Events:
   9 - 0033
   A - 0107
  5A - 0101
  FF - 0108
[0033] (40) cutscene([2]);
[0038] (58) beginOverride();
[003A] (18) goto 00F6;
[003D] (D8) printEgo([Text("Let's see, there's a jar of bat drippings^" + wait() + "^a box that says, `Assorted Scales^`" + wait() + "^a shaker full of monkey flakes^" + wait() + "^and some cat knuckles.")]);
[00CB] (AE) WaitForMessage();
[00CD] (91) animateCostume(VAR_EGO,246);
[00D1] (80) breakHere();
[00D2] (80) breakHere();
[00D3] (D8) printEgo([Text("Cat knuckles?!?" + wait() + "How barbaric!")]);
[00F4] (AE) WaitForMessage();
[00F6] (91) animateCostume(VAR_EGO,250);
[00FA] (14) print(255,[Text(" ")]);
[00FF] (C0) endCutscene();
[0100] (00) stopObjectCode();
[0101] (1A) Var[171] = 9;
[0106] (00) stopObjectCode();
[0107] (00) stopObjectCode();
[0108] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[014D] (00) stopObjectCode();
END

// Object 389: Couch
Events:
   8 - 0058
   9 - 0029
   A - 0098
  5A - 0092
  FF - 0099
[0029] (D8) printEgo([Text("Looks comfortable, in a spooky sort of way.")]);
[0057] (00) stopObjectCode();
[0058] (D8) printEgo([Text("No thanks.  I can never fall asleep in strange places.")]);
[0091] (00) stopObjectCode();
[0092] (1A) Var[171] = 9;
[0097] (00) stopObjectCode();
[0098] (00) stopObjectCode();
[0099] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[00DE] (00) stopObjectCode();
END

// Object 390: Trunk
Events:
   9 - 0026
   A - 004A
  5A - 0044
  FF - 004B
[0026] (D8) printEgo([Text("Probably got a body in it.")]);
[0043] (00) stopObjectCode();
[0044] (1A) Var[171] = 9;
[0049] (00) stopObjectCode();
[004A] (00) stopObjectCode();
[004B] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[0090] (00) stopObjectCode();
END

// Object 391: "Dead" Chicken
Events:
   8 - 00EA
   9 - 0036
   B - 00B8
  5A - 0030
[0030] (1A) Var[171] = 9;
[0035] (00) stopObjectCode();
[0036] (40) cutscene([2]);
[003B] (58) beginOverride();
[003D] (18) goto 009F;
[0040] (D8) printEgo([Text("Hmmm..." + wait() + "A rubber chicken with a pulley in the middle^" + wait() + "What possible use could that have?")]);
[009D] (AE) WaitForMessage();
[009F] (54) setObjectName(391,"rubber chicken");
[00B1] (14) print(255,[Text(" ")]);
[00B6] (C0) endCutscene();
[00B7] (00) stopObjectCode();
[00B8] (D0) pickupObject(VAR_ME);
[00BB] (D8) printEgo([Text("Maybe no one will miss just this one thing^")]);
[00E9] (00) stopObjectCode();
[00EA] (8B) VAR_RESULT = getVerbEntryPoint(Local[0],8);
[00F1] (A8) if (VAR_RESULT) {
[00F6] (79)   doSentence(8,Local[0],VAR_ME);
[00FC] (18) } else {
[00FF] (D8)   printEgo([Text("There surely must be a use for a rubber chicken with a pulley in the middle, but this is not it.")]);
[0162] (**) }
[0162] (00) stopObjectCode();
END

// Object 392: Bones
Events:
   9 - 0026
   A - 0054
  5A - 004E
  FF - 0055
[0026] (D8) printEgo([Text("Poor little thing^" + wait() + "Whatever it was.")]);
[004D] (00) stopObjectCode();
[004E] (1A) Var[171] = 9;
[0053] (00) stopObjectCode();
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("No, thanks.  I'd rather not touch any of this creepy voodoo stuff.")]);
[009A] (00) stopObjectCode();
END

// Object 393: Chalice
Events:
   9 - 0025
  5A - 0072
  FF - 004D
[0025] (D8) printEgo([Text("Now, THIS is the cup of a carpenter.")]);
[004C] (00) stopObjectCode();
[004D] (D8) printEgo([Text("Better not^I might choose poorly.")]);
[0071] (00) stopObjectCode();
[0072] (1A) Var[171] = 9;
[0077] (00) stopObjectCode();
END

// Object 394: Voodoo Love Beads
Events:
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
   D - 0029
  5A - 002D
[0029] (0A) startScript(203,[]);
[002C] (00) stopObjectCode();
[002D] (1A) Var[171] = 13;
[0032] (00) stopObjectCode();
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