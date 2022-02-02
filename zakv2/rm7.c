/**
 * Zak McKracken: V2 Retail
 * 
 * Room 7: Lou's Loans
 */

// EN
[0000] (5B) setBitVar(1445,0,Var[235]);
[0005] (19) doSentence(253,183,0,1);
[000C] (9A) Var[66] = Var[234];
[000F] (9A) Var[14] = Var[66];
[0012] (5A) Var[14] += 45;
[0016] (8A) Var[Var[14]] = Var[234];
[0019] (46) Var[66]++;
[001B] (44) unless (Var[66] > 8) goto 000F;
[0021] (53) ActorOps(10,[Name("Lou")]);
[0029] (13) ActorOps(10,[Costume(16)]);
[002D] (13) ActorOps(10,[Sound(6)]);
[0031] (13) ActorOps(10,[TalkColor(15)]);
[0035] (31) VAR_RESULT = getBitVar(1461,0);
[003A] (A8) if (VAR_RESULT) {
[003E] (2D)   putActorInRoom(10,7);
[0041] (0E)   putActorAtObject(10,181);
[0045] (18) } else {
[0048] (2D)   putActorInRoom(10,7);
[004B] (01)   putActor(10,30,36);
[004F] (**) }
[004F] (11) animateActor(10,250);
[0052] (0C) loadScript(26)
[0055] (6F) if (getState04(180)) {
[005A] (67)   clearState04(180);
[005D] (48)   if (VAR_EGO == 1) {
[0063] (31)     VAR_RESULT = getBitVar(1455,0);
[0068] (A8)     if (VAR_RESULT) {
[006C] (5B)       setBitVar(1455,0,Var[234]);
[0071] (42)       startScript(72);
[0073] (18)     } else {
[0076] (19)       doSentence(253,187,0,1);
[007D] (**)     }
[007D] (18)   } else {
[0080] (19)     doSentence(253,188,0,1);
[0087] (**)   }
[0087] (**) }
[0087] (31) VAR_RESULT = getBitVar(1461,0);
[008C] (A8) if (VAR_RESULT) {
[0090] (19)   doSentence(253,189,0,1);
[0097] (**) }
[0097] (42) startScript(27);
[0099] (00) stopObjectCode();
END

// EX
[0000] (EA) Var[Var[66]] -= VAR_ACTOR_RANGE_MIN;
[0003] (62) stopScript(24);
[0005] (62) stopScript(25);
[0007] (62) stopScript(26);
[0009] (62) stopScript(27);
[000B] (A8) if (Var[45]) {
[000F] (C7)   clearState08(Var[45]);
[0011] (97)   clearState02(Var[45]);
[0013] (A9)   setOwnerOf(Var[45],0);
[0016] (A9)   setOwnerOf(Var[45],15);
[0019] (**) }
[0019] (53) ActorOps(10,[Name()]);
[001E] (00) stopObjectCode();
END

// Object 34
Events:
   1 - 002D
   2 - 002D
   B - 002D
  11 - 0026
[0026] (1A) Var[47] = 45;
[002A] (42) startScript(24);
[002C] (00) stopObjectCode();
[002D] (42) startScript(138);
[002F] (00) stopObjectCode();
END

// Object 35
Events:
   B - 0020
[0020] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0025] (00) stopObjectCode();
END

// Object 36
Events:
   B - 001C
[001C] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[0022] (42)   startScript(138);
[0024] (18) } else {
[0027] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002C] (**) }
[002C] (00) stopObjectCode();
END

// Object 37
Events:
   B - 0017
[0017] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[001C] (00) stopObjectCode();
END

// Object 38
Events:
   B - 001F
[001F] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0024] (00) stopObjectCode();
END

// Object 39
Events:
   3 - 002A
   6 - 002A
   7 - 002A
   C - 002A
  11 - 0023
[0023] (1A) Var[47] = 145;
[0027] (42) startScript(24);
[0029] (00) stopObjectCode();
[002A] (42) startScript(138);
[002C] (00) stopObjectCode();
END

// Object 40
Events:
   3 - 0062
   6 - 002C
   7 - 0062
  11 - 0025
[0025] (1A) Var[47] = 3;
[0029] (42) startScript(24);
[002B] (00) stopObjectCode();
[002C] (9A) Var[14] = VAR_EGO;
[002F] (5A) Var[14] += 163;
[0033] (48) if (Var[14] == 60) {
[0039] (D8)   printEgo("Gotta remove my mask.");
[004D] (19)   doSentence(7,50,0,1);
[0054] (**) }
[0054] (9A) Var[14] = VAR_EGO;
[0057] (5A) Var[14] += 163;
[005B] (0A) Var[Var[14]] = 40;
[005F] (42) startScript(150);
[0061] (00) stopObjectCode();
[0062] (9A) Var[14] = VAR_EGO;
[0065] (5A) Var[14] += 163;
[0069] (48) if (Var[14] == 40) {
[006F] (9A)   Var[14] = VAR_EGO;
[0072] (5A)   Var[14] += 163;
[0076] (0A)   Var[Var[14]] = 44;
[007A] (42)   startScript(150);
[007C] (**) }
[007C] (48) if (VAR_ACTIVE_VERB == 3) {
[0082] (42)   startScript(20);
[0084] (**) }
[0084] (00) stopObjectCode();
END

// Object 41
Events:
   B - 0022
  11 - 001B
[001B] (1A) Var[47] = 139;
[001F] (42) startScript(24);
[0021] (00) stopObjectCode();
[0022] (D8) printEgo("I don't know how.");
[0032] (00) stopObjectCode();
END

// Object 42
Events:
   3 - 0021
   C - 0021
[0021] (42) startScript(138);
[0023] (00) stopObjectCode();
END

// Object 43
Events:
   3 - 0066
   6 - 0023
   7 - 0066
  11 - 001C
[001C] (1A) Var[47] = 15;
[0020] (42) startScript(24);
[0022] (00) stopObjectCode();
[0023] (9A) Var[14] = VAR_EGO;
[0026] (5A) Var[14] += 166;
[002A] (48) if (Var[14] == 64) {
[0030] (18) } else {
[0033] (9A)   Var[14] = VAR_EGO;
[0036] (5A)   Var[14] += 166;
[003A] (48)   unless (Var[14] == 56) goto 0058;
[0040] (**) }
[0040] (D8) printEgo("Gotta remove my fishbowl.");
[0058] (9A) Var[14] = VAR_EGO;
[005B] (5A) Var[14] += 166;
[005F] (0A) Var[Var[14]] = 48;
[0063] (42) startScript(150);
[0065] (00) stopObjectCode();
[0066] (9A) Var[14] = VAR_EGO;
[0069] (5A) Var[14] += 166;
[006D] (48) if (Var[14] == 48) {
[0073] (9A)   Var[14] = VAR_EGO;
[0076] (5A)   Var[14] += 166;
[007A] (0A)   Var[Var[14]] = 52;
[007E] (42)   startScript(150);
[0080] (**) }
[0080] (48) if (VAR_ACTIVE_VERB == 3) {
[0086] (42)   startScript(20);
[0088] (**) }
[0088] (00) stopObjectCode();
END

// Object 44
Events:
   B - 003D
   C - 0027
  11 - 0020
[0020] (1A) Var[47] = 75;
[0024] (42) startScript(24);
[0026] (00) stopObjectCode();
[0027] (D8) printEgo("Golden Boar Sand Wedge");
[003C] (00) stopObjectCode();
[003D] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0042] (00) stopObjectCode();
END

// Object 180
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(161);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(161);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(161,5,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 181
Events:
   C - 001D
[001D] (D8) printEgo("Pay for goods here. CashCards only.");
[003D] (00) stopObjectCode();
END

// Object 182
Events:
   C - 0020
  FD - 004F
[0020] (D8) printEgo("Cash offered for merchandise.\x01No questions asked.");
[004E] (00) stopObjectCode();
[004F] (48) if (VAR_EGO == 1) {
[0055] (10)   VAR_RESULT = getObjectOwner(18);
[0059] (08)   if (VAR_RESULT != 1) {
[005F] (5B)     setBitVar(848,1,Var[235]);
[0064] (**)   }
[0064] (18) } else {
[0067] (10)   VAR_RESULT = getObjectOwner(32);
[006B] (08)   if (VAR_RESULT != 2) {
[0071] (5B)     setBitVar(848,2,Var[235]);
[0076] (**)   }
[0076] (**) }
[0076] (00) stopObjectCode();
END

// Object 183
Events:
  11 - 0022
  FD - 002D
[0022] (1A) Var[47] = 120;
[0026] (1A) Var[46] = 33;
[002A] (42) startScript(24);
[002C] (00) stopObjectCode();
[002D] (7A) VerbOps(New-17(13,20,7,0,"Buy@@@@@@"));
[003D] (7A) VerbOps(New-18(0,21,10,0,"Sell@@"));
[004A] (60) cursorCommand(0, 0);
[004D] (00) stopObjectCode();
END

// Object 184
Events:
  11 - 0022
  FD - 002D
[0022] (1A) Var[47] = 120;
[0026] (1A) Var[46] = 56;
[002A] (42) startScript(24);
[002C] (00) stopObjectCode();
[002D] (C3) Var[51] = getActorX(VAR_EGO);
[0030] (C6) Var[51]--;
[0032] (78) if (Var[51] < 5) {
[0038] (1A)   Var[51] = 5;
[003C] (**) }
[003C] (44) if (Var[51] > 52) {
[0042] (1A)   Var[51] = 52;
[0046] (**) }
[0046] (5E) walkActorTo(10,Var[51],47);
[004A] (80) breakHere();
[004B] (43) VAR_RESULT = getActorX(10);
[004E] (C8) unless (VAR_RESULT == Var[51]) goto 002D;
[0053] (11) animateActor(10,246);
[0056] (3B) waitForActor(10);
[0058] (1A) Var[51] = 255;
[005C] (00) stopObjectCode();
END

// Object 185
Events:
  11 - 0023
  FD - 002E
[0023] (1A) Var[47] = 750;
[0027] (1A) Var[46] = 81;
[002B] (42) startScript(24);
[002D] (00) stopObjectCode();
[002E] (9A) Var[66] = Var[234];
[0031] (48) if (Var[45] == 44) {
[0037] (1A)   Var[66] = 38;
[003B] (**) }
[003B] (48) if (Var[45] == 184) {
[0041] (1A)   Var[66] = 33;
[0045] (**) }
[0045] (48) if (Var[45] == 188) {
[004B] (1A)   Var[66] = 49;
[004F] (**) }
[004F] (48) if (Var[45] == 187) {
[0055] (1A)   Var[66] = 30;
[0059] (**) }
[0059] (A8) if (Var[66]) {
[005D] (5E)   walkActorTo(10,Var[66],44);
[0061] (3B)   waitForActor(10);
[0063] (11)   animateActor(10,246);
[0066] (18) } else {
[0069] (76)   walkActorToObject(10,Var[45]);
[006C] (**) }
[006C] (00) stopObjectCode();
END

// Object 186
Events:
  11 - 001F
[001F] (1A) Var[47] = 550;
[0023] (1A) Var[46] = 55;
[0027] (42) startScript(24);
[0029] (00) stopObjectCode();
END


// Object 187
Events:
  11 - 0021
  FD - 002C
[0021] (1A) Var[47] = 140;
[0025] (1A) Var[46] = 26;
[0029] (42) startScript(24);
[002B] (00) stopObjectCode();
[002C] (2E) delay(30);
[0030] (11) animateActor(10,245);
[0033] (14) print(10,"Hiya buddy.");
[0040] (AE) waitForMessage();
[0041] (68) VAR_RESULT = isScriptRunning(73);
[0044] (A8) if (VAR_RESULT) {
[0048] (14)   print(10,"Sorry, but today's Super Lucky Lotto\x01numbers ain't been picked.");
[0082] (AE)   waitForMessage();
[0083] (**) }
[0083] (11) animateActor(10,246);
[0086] (00) stopObjectCode();
END

// Object 188
Events:
  11 - 0023
  FD - 002E
[0023] (1A) Var[47] = 75;
[0027] (1A) Var[46] = 21;
[002B] (42) startScript(24);
[002D] (00) stopObjectCode();
[002E] (2E) delay(30);
[0032] (11) animateActor(10,245);
[0035] (14) print(10,"Hello.");
[003E] (AE) waitForMessage();
[003F] (11) animateActor(10,246);
[0042] (00) stopObjectCode();
END

// Object 189
Events:
   C - 00AA
  11 - 001C
  FD - 00D5
[001C] (48) if (VAR_EGO == 1) {
[0022] (78)   if (Var[232] < 5) {
[0028] (10)     VAR_RESULT = getObjectOwner(42);
[002C] (48)     if (VAR_RESULT == 15) {
[0032] (1A)       VAR_ACTIVE_OBJECT1 = 42;
[0036] (1A)       Var[47] = 10;
[003A] (42)       startScript(24);
[003C] (18)     } else {
[003F] (14)       print(10,"Dontcha know the law?\x01Only one Lotto ticket per person.");
[0071] (**)     }
[0071] (18)   } else {
[0074] (14)     print(10,"I told ya, NO MORE LOTTO TICKETS!");
[0092] (**)   }
[0092] (18) } else {
[0095] (11)   animateActor(2,246);
[0098] (3B)   waitForActor(2);
[009A] (D8)   printEgo("I don't gamble.");
[00A9] (**) }
[00A9] (00) stopObjectCode();
[00AA] (D8) printEgo("PLAY LOTTO\x01`If you don't play, you can't lose!`");
[00D4] (00) stopObjectCode();
[00D5] (5B) setBitVar(1461,0,Var[234]);
[00DA] (1E) walkActorTo(1,23,60);
[00DE] (3B) waitForActor(1);
[00E0] (D8) printEgo("Gee, I hope I win!");
[00F0] (AE) waitForMessage();
[00F1] (2F) if (!getState04(189)) {
[00F6] (27)   setState04(189);
[00F9] (14)   print(10,"Come back after the numbers are picked\x01and I'll tell ya if yer a winner.");
[0137] (11)   animateActor(1,247);
[013A] (AE)   waitForMessage();
[013B] (D8)   printEgo("Thanks!");
[0144] (**) }
[0144] (00) stopObjectCode();
END
