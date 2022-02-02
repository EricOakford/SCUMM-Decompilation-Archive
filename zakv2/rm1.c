/**
 * Zak McKracken: V2 Retail
 * 
 * Room 1: Zak's Bedroom
 */

// EN
[0000] (00) stopObjectCode();
[0001] (19) doSentence(250,101,0,1);
[0008] (4F) if (getState08(85)) {
[000D] (19)   doSentence(250,85,0,1);
[0014] (**) }
[0014] (0C) loadSound(27)
[0017] (19) doSentence(253,104,0,1);
[001E] (2F) if (!getState04(95)) {
[0023] (19)   doSentence(250,95,0,1);
[002A] (**) }
[002A] (19) doSentence(253,108,0,1);
[0031] (6F) if (getState04(88)) {
[0036] (19)   doSentence(250,89,0,1);
[003D] (**) }
[003D] (4F) if (getState08(110)) {
[0042] (19)   doSentence(2,84,0,1);
[0049] (**) }
[0049] (19) doSentence(253,109,0,1);
[0050] (19) doSentence(250,107,0,1);
[0057] (00) stopObjectCode();
END

// EX
[0000] (3C) stopSound(12);
[0002] (68) VAR_RESULT = isScriptRunning(107);
[0005] (A8) if (VAR_RESULT) {
[0009] (62)   stopScript(107);
[000B] (19)   doSentence(253,88,0,1);
[0012] (**) }
[0012] (C8) if (Var[138] == Var[235]) {
[0017] (4F)   if (getState08(103)) {
[001C] (1A)     Var[138] = 3;
[0020] (5A)     Var[225] += 8;
[0024] (27)     setState04(103);
[0027] (47)     clearState08(103);
[002A] (**)   }
[002A] (**) }
[002A] (28) if (!Var[131]) {
[002E] (42)   startScript(48);
[0030] (**) }
[0030] (00) stopObjectCode();
END

// Object 14: Sushi in Fish Bowl
Events:
   3 - 00A0
   6 - 003B
   7 - 00A0
   B - 0035
   E - 002D
[002D] (19) doSentence(253,98,0,1);
[0034] (00) stopObjectCode();
[0035] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[003A] (00) stopObjectCode();
[003B] (08) if (VAR_EGO != 1) {
[0041] (D8)   printEgo("Forget it!");
[004C] (C8) } else if (Var[138] == Var[234]) {
[0054] (D8)   printEgo("I have to put Sushi somewhere first.");
[0074] (18) } else {
[0077] (48)   if (Var[167] == 48) {
[007D] (D8)     printEgo("Gotta remove my hat.");
[0090] (**)   }
[0090] (1A)   Var[167] = 56;
[0094] (6F)   if (getState04(14)) {
[0099] (1A)     Var[167] = 64;
[009D] (**)   }
[009D] (42)   startScript(150);
[009F] (**) }
[009F] (00) stopObjectCode();
[00A0] (48) if (Var[167] == 64) {
[00A6] (18) } else {
[00A9] (48)   unless (Var[167] == 56) goto 00B5;
[00AF] (**) }
[00AF] (1A) Var[167] = 52;
[00B3] (42) startScript(150);
[00B5] (48) if (VAR_ACTIVE_VERB == 3) {
[00BB] (42)   startScript(20);
[00BD] (**) }
[00BD] (00) stopObjectCode();
END

// Object 15
Events:
   B - 002B
   C - 0028
   E - 0025
[0025] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0027] (00) stopObjectCode();
[0028] (42) startScript(41);
[002A] (00) stopObjectCode();
[002B] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0030] (00) stopObjectCode();
END

// Object 16
Events:
   B - 001F
   C - 001F
   E - 001C
[001C] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001E] (00) stopObjectCode();
[001F] (42) startScript(137);
[0021] (00) stopObjectCode();
END

// Object 17
Events:
   A - 0027
   B - 0038
   C - 003E
   E - 0027
[0027] (90) VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[002A] (48) if (VAR_RESULT == 15) {
[0030] (19)   doSentence(253,97,0,1);
[0037] (**) }
[0037] (00) stopObjectCode();
[0038] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[003D] (00) stopObjectCode();
[003E] (42) startScript(41);
[0040] (00) stopObjectCode();
END

// Object 18: CashCard (Zak)
Events:
   3 - 0029
   B - 001F
   C - 0022
[001F] (42) startScript(131);
[0021] (00) stopObjectCode();
[0022] (1A) Var[67] = 1;
[0026] (42) startScript(53);
[0028] (00) stopObjectCode();
[0029] (48) if (VAR_ACTIVE_OBJECT2 == 1) {
[002F] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT1,1);
[0032] (18) } else {
[0035] (42)   startScript(53);
[0037] (**) }
[0037] (00) stopObjectCode();
END

// Object 19
Events:
   B - 001F
   E - 002C
  FD - 0067
[001F] (48) if (VAR_ACTIVE_OBJECT2 == 87) {
[0025] (18) } else {
[0028] (18)   goto 002C;
[002B] (00)   stopObjectCode();
[002C] (4F)   if (getState08(19)) {
[0031] (B6)     walkActorToObject(VAR_EGO,19);
[0035] (BB)     waitForActor(VAR_EGO);
[0037] (**)   }
[0037] (D8)   printEgo("I'll hang it up.");
[0046] (**) }
[0046] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0048] (D7) setState02(VAR_ACTIVE_OBJECT1);
[004A] (4F) if (getState08(88)) {
[004F] (67)   clearState04(88);
[0052] (47)   clearState08(88);
[0055] (19)   doSentence(4,88,0,1);
[005C] (**) }
[005C] (19) doSentence(STOP);
[005E] (AC) drawSentence();
[005F] (19) doSentence(253,19,0,1);
[0066] (00) stopObjectCode();
[0067] (62) stopScript(14);
[0069] (80) breakHere();
[006A] (B6) walkActorToObject(VAR_EGO,87);
[006E] (BB) waitForActor(VAR_EGO);
[0070] (1C) startSound(27);
[0072] (42) startScript(18);
[0074] (00) stopObjectCode();
END

// Object 84: Door
Events:
   1 - 001D
   2 - 005C
   B - 006D
   D - 0062
[001D] (4F) if (getState08(110)) {
[0022] (D8)   printEgo("I'll remove the rope first.");
[003B] (19)   doSentence(14,110,0,0);
[0042] (4C)   waitForSentence();
[0043] (2E)   delay(60);
[0047] (0F)   if (!getState08(110)) {
[004C] (19)     doSentence(1,84,0,0);
[0053] (**)   }
[0053] (18) } else {
[0056] (42)   startScript(10);
[0058] (07)   setState08(111);
[005B] (**) }
[005B] (00) stopObjectCode();
[005C] (42) startScript(11);
[005E] (47) clearState08(111);
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (24)   loadRoomWithEgo(111,2,255,255);
[006C] (**) }
[006C] (00) stopObjectCode();
[006D] (48) if (VAR_ACTIVE_OBJECT2 == 37) {
[0073] (4F)   if (getState08(108)) {
[0078] (19)     doSentence(11,108,37,0);
[007F] (18)   } else {
[0082] (D8)     printEgo("Not yet.");
[008B] (**)   }
[008B] (18) } else {
[008E] (42)   startScript(3);
[0090] (**) }
[0090] (00) stopObjectCode();
END

// Object 85
Events:
   B - 0018
  FD - 0036
[0018] (48) if (VAR_EGO == 1) {
[001E] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0020] (19)   doSentence(250,85,0,1);
[0027] (18) } else {
[002A] (D8)   printEgo("I'll pass.");
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (3D) setActorElevation(1,210);
[0039] (80) breakHere();
[003A] (34) VAR_RESULT = getDist(1,85);
[0040] (A8) unless (VAR_RESULT) goto 0039;
[0044] (47) clearState08(85);
[0047] (3D) setActorElevation(1,0);
[004A] (00) stopObjectCode();
END

// Object 86
Events:
   B - 0018
[0018] (42) startScript(46);
[001A] (00) stopObjectCode();
END

// Object 87
Events:
   B - 0020
   E - 0020
  FD - 0034
[0020] (42) startScript(18);
[0022] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0026] (80)   breakHere();
[0027] (42)   startScript(13);
[0029] (18) } else {
[002C] (19)   doSentence(253,87,0,1);
[0033] (**) }
[0033] (00) stopObjectCode();
[0034] (42) startScript(14);
[0036] (2E) delay(120);
[003A] (D8) printEgo("It seems to be out of order.");
[0052] (00) stopObjectCode();
END

// Object 88
Events:
   4 - 002A
   5 - 00A9
   B - 002A
  FD - 00F0
[002A] (48) if (VAR_EGO == 1) {
[0030] (EF)   if (getState04(VAR_ACTIVE_OBJECT1)) {
[0034] (E7)     clearState04(VAR_ACTIVE_OBJECT1);
[0036] (19)     doSentence(254,89,0,1);
[003D] (42)     startScript(107);
[003F] (18)   } else {
[0042] (CF)     if (getState08(VAR_ACTIVE_OBJECT1)) {
[0046] (11)       animateActor(1,246);
[0049] (3B)       waitForActor(1);
[004B] (D8)       printEgo("There aren't any messages.");
[0064] (**)     }
[0064] (87)     setState08(VAR_ACTIVE_OBJECT1);
[0066] (A8)     if (Var[240]) {
[006A] (68)       VAR_RESULT = isScriptRunning(134);
[006D] (28)       if (!VAR_RESULT) {
[0071] (42)         startScript(134);
[0073] (**)       }
[0073] (**)     }
[0073] (**)   }
[0073] (18) } else {
[0076] (11)   animateActor(2,246);
[0079] (3B)   waitForActor(2);
[007B] (D8)   printEgo("It wouldn't be polite to listen to Zak's\x01messages.");
[00A8] (**) }
[00A8] (00) stopObjectCode();
[00A9] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[00AD] (48)   if (VAR_EGO == 1) {
[00B3] (E7)     clearState04(VAR_ACTIVE_OBJECT1);
[00B5] (19)     doSentence(254,89,0,1);
[00BC] (62)     stopScript(107);
[00BE] (14)     print(255,"");
[00C1] (47)     clearState08(89);
[00C4] (C7)     clearState08(VAR_ACTIVE_OBJECT1);
[00C6] (18)   } else {
[00C9] (11)     animateActor(2,246);
[00CC] (3B)     waitForActor(2);
[00CE] (D8)     printEgo("I don't want Zak to miss his messages.");
[00EF] (**)   }
[00EF] (**) }
[00EF] (00) stopObjectCode();
[00F0] (13) ActorOps(0,[TalkColor(9)]);
[00F4] (47) clearState08(89);
[00F7] (07) setState08(88);
[00FA] (00) stopObjectCode();
END

// Object 89
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (05) drawObject(89,255,255);
[0019] (80) breakHere();
[001A] (80) breakHere();
[001B] (05) drawObject(88,255,255);
[0020] (18) goto 0013;
[0023] (00) stopObjectCode();
END

// Object 90
Events:
   1 - 003A
   2 - 0042
   A - 0023
[0023] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0027] (1C)   startSound(64);
[0029] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[002B] (18) } else {
[002E] (1C)   startSound(63);
[0030] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0032] (**) }
[0032] (19) doSentence(253,104,0,1);
[0039] (00) stopObjectCode();
[003A] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[003E] (18)   goto 002E;
[0041] (**) }
[0041] (00) stopObjectCode();
[0042] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0046] (18)   goto 0027;
[0049] (**) }
[0049] (00) stopObjectCode();
END

// Object 91
Events:
   1 - 0022
   2 - 0022
   9 - 0022
   A - 0022
   B - 0029
[0022] (B9) doSentence(VAR_ACTIVE_VERB,92,VAR_ACTIVE_OBJECT2,1);
[0028] (00) stopObjectCode();
[0029] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[002F] (C8)   if (Var[138] == Var[234]) {
[0034] (47)     clearState08(14);
[0037] (17)     clearState02(14);
[003A] (19)     doSentence(250,101,0,1);
[0041] (29)     setOwnerOf(14,0);
[0045] (29)     setOwnerOf(14,15);
[0049] (6F)     if (getState04(14)) {
[004E] (07)       setState08(93);
[0051] (**)     }
[0051] (18)   } else {
[0054] (D8)     printEgo("Not without Sushi in it!");
[006A] (**)   }
[006A] (18) } else {
[006D] (42)   startScript(3);
[006F] (**) }
[006F] (00) stopObjectCode();
END

// Object 92
Events:
   1 - 0027
   2 - 0030
   9 - 0030
   A - 0027
[0027] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (1C)   startSound(68);
[002D] (87)   setState08(VAR_ACTIVE_OBJECT1);
[002F] (**) }
[002F] (00) stopObjectCode();
[0030] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0034] (1C)   startSound(69);
[0036] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0038] (**) }
[0038] (00) stopObjectCode();
END

// Object 93
Events:
  FD - 0013
[0013] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,1)) {
[0018] (18)   goto 0023;
[001B] (9D) } else if (classOfIs(VAR_ACTIVE_OBJECT2,2)) {
[0023] (07)   setState08(106);
[0026] (57)   setState02(106);
[0029] (50)   pickupObject(18);
[002C] (47)   clearState08(18);
[002F] (2E)   delay(60);
[0033] (D8)   printEgo("Yay, it's my CashCard.");
[0048] (18) } else {
[004B] (D8)   printEgo("I can't reach it with that.");
[0063] (**) }
[0063] (00) stopObjectCode();
END

// Object 94
Events:
   1 - 0024
   2 - 002D
   9 - 002D
   A - 0024
[0024] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0028] (1C)   startSound(68);
[002A] (87)   setState08(VAR_ACTIVE_OBJECT1);
[002C] (**) }
[002C] (00) stopObjectCode();
[002D] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0031] (1C)   startSound(69);
[0033] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0035] (**) }
[0035] (00) stopObjectCode();
END

// Object 95
Events:
   4 - 007D
   5 - 0073
   A - 005C
   C - 0026
   E - 005C
  FD - 0087
[0026] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[002A] (D8)   printEgo("Gosh, it's getting late.");
[0041] (18) } else {
[0044] (D8)   printEgo("It seems to have stopped.");
[005B] (**) }
[005B] (00) stopObjectCode();
[005C] (D8) printEgo("It's nailed to the wall.");
[0072] (00) stopObjectCode();
[0073] (A7) setState04(VAR_ACTIVE_OBJECT1);
[0075] (19) doSentence(254,95,0,1);
[007C] (00) stopObjectCode();
[007D] (E7) clearState04(VAR_ACTIVE_OBJECT1);
[007F] (19) doSentence(250,95,0,1);
[0086] (00) stopObjectCode();
[0087] (05) drawObject(95,255,255);
[008C] (1C) startSound(2);
[008E] (2E) delay(60);
[0092] (05) drawObject(96,255,255);
[0097] (1C) startSound(2);
[0099] (2E) delay(60);
[009D] (18) goto 0087;
[00A0] (00) stopObjectCode();
END

// Object 96
Events:
END

// Object 97
Events:
  FD - 0013
[0013] (1C) startSound(34);
[0015] (50) pickupObject(17);
[0018] (2E) delay(30);
[001C] (D8) printEgo("Whoops!");
[0025] (00) stopObjectCode();
END

// Object 98
Events:
  FD - 0013
[0013] (D8) printEgo("Come with me, Sushi.");
[0026] (19) doSentence(254,101,0,1);
[002D] (50) pickupObject(14);
[0030] (47) clearState08(93);
[0033] (00) stopObjectCode();
END

// Object 99
Events:
  FD - 0013
[0013] (19) doSentence(254,101,0,1);
[001A] (7A) VerbOps(New-31(0,19,0,0,"Swim forward@@"));
[002F] (7A) VerbOps(New-33(14,19,2,0,"   Smile@@@"));
[0041] (7A) VerbOps(New-32(25,19,3,0,"  Swim backward"));
[0057] (1A) Var[44] = 97;
[005B] (80) breakHere();
[005C] (A8) unless (VAR_ACTIVE_VERB) goto 005B;
[0060] (48) if (VAR_ACTIVE_VERB == 31) {
[0066] (9A)   VAR_ACTIVE_VERB = Var[234];
[0069] (19)   doSentence(254,102,0,1);
[0070] (19)   doSentence(253,100,0,1);
[0077] (**) }
[0077] (48) if (VAR_ACTIVE_VERB == 33) {
[007D] (9A)   VAR_ACTIVE_VERB = Var[234];
[0080] (19)   doSentence(254,102,0,1);
[0087] (19)   doSentence(253,100,0,1);
[008E] (80)   breakHere();
[008F] (48)   unless (Var[44] == 97) goto 008E;
[0095] (19)   doSentence(254,100,0,1);
[009C] (**) }
[009C] (48) if (VAR_ACTIVE_VERB == 32) {
[00A2] (9A)   VAR_ACTIVE_VERB = Var[234];
[00A5] (19)   doSentence(254,100,0,1);
[00AC] (19)   doSentence(253,102,0,1);
[00B3] (**) }
[00B3] (18) goto 005B;
[00B6] (00) stopObjectCode();
END

// Object 100
Events:
  FD - 0013
[0013] (85) drawObject(Var[44],255,255);
[0017] (80) breakHere();
[0018] (80) breakHere();
[0019] (46) Var[44]++;
[001B] (44) unless (Var[44] > 102) goto 0013;
[0021] (1A) Var[44] = 97;
[0025] (18) goto 0013;
[0028] (00) stopObjectCode();
END

// Object 101
Events:
  FD - 0013
[0013] (16) Var[46] = getRandomNr(6);
[0016] (46) Var[46]++;
[0018] (1A) Var[44] = 97;
[001C] (85) drawObject(Var[44],255,255);
[0020] (80) breakHere();
[0021] (80) breakHere();
[0022] (48) if (Var[44] == 99) {
[0028] (80)   breakHere();
[0029] (B4)   VAR_RESULT = getDist(VAR_EGO,14);
[002E] (44)   unless (VAR_RESULT > 3) goto 0028;
[0034] (**) }
[0034] (46) Var[44]++;
[0036] (44) unless (Var[44] > 102) goto 001C;
[003C] (C6) Var[46]--;
[003E] (28) unless (!Var[46]) goto 0018;
[0042] (05) drawObject(97,255,255);
[0047] (2E) delay(120);
[004B] (18) goto 0013;
[004E] (00) stopObjectCode();
END

// Object 102
Events:
  FD - 0013
[0013] (85) drawObject(Var[44],255,255);
[0017] (80) breakHere();
[0018] (80) breakHere();
[0019] (C6) Var[44]--;
[001B] (78) unless (Var[44] < 97) goto 0013;
[0021] (1A) Var[44] = 102;
[0025] (18) goto 0013;
[0028] (00) stopObjectCode();
END

// Object 103
Events:
   4 - 0024
   5 - 005D
   B - 0074
[0024] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0028] (1C)   startSound(27);
[002A] (AF)   if (!getState04(VAR_ACTIVE_OBJECT1)) {
[002E] (87)     setState08(VAR_ACTIVE_OBJECT1);
[0030] (19)     doSentence(253,104,0,1);
[0037] (C8)     if (Var[138] == Var[235]) {
[003C] (19)       doSentence(250,105,0,1);
[0043] (**)     }
[0043] (18)   } else {
[0046] (2E)     delay(60);
[004A] (91)     animateActor(VAR_EGO,246);
[004D] (BB)     waitForActor(VAR_EGO);
[004F] (D8)     printEgo("It's broken.");
[005C] (**)   }
[005C] (**) }
[005C] (00) stopObjectCode();
[005D] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0061] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0063] (19)   doSentence(254,105,0,1);
[006A] (1C)   startSound(27);
[006C] (19)   doSentence(253,104,0,1);
[0073] (**) }
[0073] (00) stopObjectCode();
[0074] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[007A] (C8)   if (Var[138] == Var[234]) {
[007F] (9A)     Var[138] = Var[235];
[0082] (1C)     startSound(36);
[0084] (D8)     printEgo("Hope you're happy in there, Sushi.");
[00A3] (CF)     if (getState08(VAR_ACTIVE_OBJECT1)) {
[00A7] (19)       doSentence(250,105,0,1);
[00AE] (**)     }
[00AE] (C8)   } else if (Var[138] == Var[235]) {
[00B6] (19)     doSentence(254,105,0,1);
[00BD] (19)     doSentence(7,14,0,1);
[00C4] (1C)     startSound(36);
[00C6] (9A)     Var[138] = Var[234];
[00C9] (D8)     printEgo("Isn't it nice to be home, Sushi?");
[00E5] (47)     clearState08(104);
[00E8] (47)     clearState08(105);
[00EB] (18)   } else {
[00EE] (42)     startScript(3);
[00F0] (**)   }
[00F0] (19)   doSentence(253,109,0,1);
[00F7] (18) } else {
[00FA] (42)   startScript(3);
[00FC] (**) }
[00FC] (00) stopObjectCode();
END

// Object 104
Events:
  FD - 0013
[0013] (70) lights(11,0,0);
[0017] (0F) if (!getState08(103)) {
[001C] (0F)   if (!getState08(90)) {
[0021] (F0)     lights(Var[234],0,0);
[0025] (**)   }
[0025] (**) }
[0025] (00) stopObjectCode();
END

// Object 105
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (7C) VAR_RESULT = isSoundRunning(36);
[0017] (28) unless (!VAR_RESULT) goto 0013;
[001B] (9A) Var[46] = Var[234];
[001E] (05) drawObject(104,255,255);
[0023] (80) breakHere();
[0024] (1C) startSound(29);
[0026] (05) drawObject(105,255,255);
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (1C) startSound(29);
[002F] (46) Var[46]++;
[0031] (44) unless (Var[46] > 11) goto 001E;
[0037] (47) clearState08(104);
[003A] (47) clearState08(105);
[003D] (1A) Var[138] = 3;
[0041] (5A) Var[225] += 8;
[0045] (27) setState04(103);
[0048] (47) clearState08(103);
[004B] (19) doSentence(253,104,0,1);
[0052] (19) doSentence(253,109,0,1);
[0059] (2E) delay(60);
[005D] (91) animateActor(VAR_EGO,246);
[0060] (D8) printEgo("Uh oh. Goldfish chowder.");
[0077] (00) stopObjectCode();
END

// Object 106
Events:
   B - 006A
   C - 0072
   E - 0023
[0023] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0027] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0029] (07)   setState08(18);
[002C] (2E)   delay(30);
[0030] (D8)   printEgo("Oh no, I pushed it way under the desk!");
[0050] (18) } else {
[0053] (D8)   printEgo("It's way under the desk.");
[0069] (**) }
[0069] (00) stopObjectCode();
[006A] (19) doSentence(253,93,0,1);
[0071] (00) stopObjectCode();
[0072] (D8) printEgo("I can't make out what it says.");
[008C] (00) stopObjectCode();
END

// Object 107
Events:
   9 - 0027
   A - 0027
   D - 0048
   E - 0027
  FD - 0054
  FF - 0049
[0027] (4F) if (getState08(108)) {
[002C] (91)   animateActor(VAR_EGO,250);
[002F] (80)   breakHere();
[0030] (**) }
[0030] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0034] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0036] (07)   setState08(109);
[0039] (57)   setState02(109);
[003C] (18) } else {
[003F] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0041] (47)   clearState08(109);
[0044] (17)   clearState02(109);
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (00) stopObjectCode();
[0049] (4F) if (getState08(108)) {
[004E] (91)   animateActor(VAR_EGO,250);
[0051] (**) }
[0051] (42) startScript(3);
[0053] (00) stopObjectCode();
[0054] (16) Var[66] = getRandomNr(1);
[0057] (80) breakHere();
[0058] (18) goto 0054;
[005B] (00) stopObjectCode();
END

// Object 108
Events:
   1 - 0083
   A - 0083
   B - 00B0
   D - 0029
   E - 0083
  FD - 00B3
[0029] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002D] (4F)   if (getState08(110)) {
[0032] (19)     doSentence(11,110,0,0);
[0039] (48)   } else if (VAR_EGO == 1) {
[0042] (1C)     startSound(60);
[0044] (D8)     printEgo("AHHHHHHEEEEEEEEeeeeeee^");
[005D] (1A)     Var[49] = 5;
[0061] (19)     doSentence(253,110,0,1);
[0068] (18)   } else {
[006B] (D8)     printEgo("I'm not going down there!");
[0082] (**)   }
[0082] (**) }
[0082] (00) stopObjectCode();
[0083] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0087] (D8)   printEgo("They're not THAT loose. I'll need some\x01help.");
[00AF] (**) }
[00AF] (00) stopObjectCode();
[00B0] (42) startScript(37);
[00B2] (00) stopObjectCode();
[00B3] (0F) if (!getState08(108)) {
[00B8] (54)   setObjectName(108,"loose boards");
[00C8] (30)   setBoxFlags(3,0);
[00CB] (47)   clearState08(334);
[00CE] (57)   setState02(334);
[00D1] (18) } else {
[00D4] (54)   setObjectName(108,"hole");
[00DC] (30)   setBoxFlags(3,128);
[00DF] (07)   setState08(334);
[00E2] (17)   clearState02(334);
[00E5] (0C)   loadSound(60)
[00E8] (**) }
[00E8] (00) stopObjectCode();
END

// Object 109
Events:
  FD - 0027
  FF - 001F
[001F] (99) doSentence(VAR_ACTIVE_VERB,107,0,0);
[0026] (00) stopObjectCode();
[0027] (C8) if (Var[138] == Var[235]) {
[002C] (54)   setObjectName(103,"Sushi in lamp");
[003D] (10)   VAR_RESULT = getObjectOwner(14);
[0041] (A8)   if (VAR_RESULT) {
[0045] (54)     setObjectName(14,"fish bowl");
[0052] (6F)     if (getState04(14)) {
[0057] (54)       setObjectName(14,"taped fish bowl");
[006A] (**)     }
[006A] (**)   }
[006A] (18) } else {
[006D] (54)   setObjectName(103,"lamp");
[0075] (**) }
[0075] (C8) if (Var[138] == Var[234]) {
[007A] (10)   VAR_RESULT = getObjectOwner(14);
[007E] (A8)   if (VAR_RESULT) {
[0082] (54)     setObjectName(14,"Sushi in fish bowl");
[0098] (**)   }
[0098] (**) }
[0098] (00) stopObjectCode();
END

// Object 110
Events:
   B - 002C
   D - 002C
   E - 001D
  FD - 0045
[001D] (69) setOwnerOf(37,VAR_EGO);
[0021] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0023] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0025] (47) clearState08(333);
[0028] (57) setState02(333);
[002B] (00) stopObjectCode();
[002C] (D8) printEgo("Down we go!");
[0037] (9A) Var[49] = Var[235];
[003A] (91) animateActor(VAR_EGO,245);
[003D] (19) doSentence(253,110,0,1);
[0044] (00) stopObjectCode();
[0045] (60) cursorCommand(15, 2);
[0048] (0F) if (!getState08(107)) {
[004D] (19)   doSentence(9,107,0,0);
[0054] (4C)   waitForSentence();
[0055] (**) }
[0055] (1A) Var[48] = 255;
[0059] (FD) setActorElevation(VAR_EGO,Var[48]);
[005C] (BA) Var[48] -= Var[49];
[005F] (80) breakHere();
[0060] (78) unless (Var[48] < 200) goto 0059;
[0066] (BD) setActorElevation(VAR_EGO,0);
[0069] (60) cursorCommand(247, 1);
[006C] (24) loadRoomWithEgo(334,16,255,255);
[0072] (00) stopObjectCode();
END
