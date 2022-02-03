/**
 * Zak McKracken: V2 Retail
 * 
 * Room 17: Katmandu
 */

// EN
[0000] (53) ActorOps(8,[Name("policeman")]);
[000E] (48) if (Var[247] == 352) {
[0014] (19)   doSentence(253,362,0,1);
[001B] (18) } else {
[001E] (19)   doSentence(253,353,0,1);
[0025] (**) }
[0025] (0C) loadScript(117)
[0028] (0F) if (!getState08(59)) {
[002D] (19)   doSentence(250,357,0,1);
[0034] (**) }
[0034] (6F) if (getState04(359)) {
[0039] (19)   doSentence(250,360,0,1);
[0040] (03)   VAR_RESULT = getActorRoom(8);
[0043] (48)   if (VAR_RESULT == 17) {
[0049] (19)     doSentence(250,361,0,1);
[0050] (**)   }
[0050] (**) }
[0050] (13) ActorOps(10,[TalkColor(5)]);
[0054] (13) ActorOps(10,[Costume(26)]);
[0058] (13) ActorOps(10,[Color(9, 5)]);
[005D] (13) ActorOps(10,[Color(3, 1)]);
[0062] (13) ActorOps(10,[Sound(6)]);
[0066] (53) ActorOps(10,[Name("guard")]);
[0070] (2D) putActorInRoom(10,17);
[0073] (01) putActor(10,80,11);
[0077] (19) doSentence(253,356,0,1);
[007E] (11) animateActor(10,250);
[0081] (46) Var[203]++;
[0083] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
[0001] (9A) Var[203] = Var[234];
[0004] (07) setState08(362);
[0007] (57) setState02(362);
[000A] (3C) stopSound(80);
[000C] (00) stopObjectCode();
END

// Object 59
Events:
   B - 001D
   E - 0023
[001D] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0022] (00) stopObjectCode();
[0023] (19) doSentence(253,358,0,1);
[002A] (00) stopObjectCode();
END

// Object 348
Events:
   C - 0017
[0017] (48) if (VAR_EGO == 1) {
[001D] (D8)   printEgo("I think it's the name of a cigarette.");
[003D] (18) } else {
[0040] (D8)   printEgo("It obviously says `JAIL.`");
[0058] (**) }
[0058] (00) stopObjectCode();
END

// Object 349
Events:
   1 - 0017
[0017] (B1) VAR_RESULT = getBitVar(1478,VAR_EGO);
[001C] (A8) if (VAR_RESULT) {
[0020] (19)   doSentence(253,351,0,1);
[0027] (18) } else {
[002A] (19)   doSentence(253,354,0,1);
[0031] (A8)   if (Var[45]) {
[0035] (B1)     VAR_RESULT = getBitVar(1478,Var[45]);
[003A] (A8)     if (VAR_RESULT) {
[003E] (18)       goto 0020;
[0041] (**)     }
[0041] (**)   }
[0041] (14)   print(10,"Only devotees of Guru may enter.");
[005F] (**) }
[005F] (00) stopObjectCode();
END

// Object 350
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(363);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(363);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (48)   if (VAR_EGO == 1) {
[0031] (31)     VAR_RESULT = getBitVar(1541,0);
[0036] (A8)     if (VAR_RESULT) {
[003A] (03)       VAR_RESULT = getActorRoom(8);
[003D] (48)       if (VAR_RESULT == 18) {
[0043] (68)         VAR_RESULT = isScriptRunning(112);
[0046] (28)         if (!VAR_RESULT) {
[004A] (42)           startScript(112);
[004C] (**)         }
[004C] (**)       }
[004C] (**)     }
[004C] (**)   }
[004C] (24)   loadRoomWithEgo(363,18,255,255);
[0052] (**) }
[0052] (00) stopObjectCode();
END

// Object 351
Events:
   1 - 001D
   2 - 0030
   D - 0035
  FD - 0056
[001D] (D8) printEgo("It's already open.");
[002F] (00) stopObjectCode();
[0030] (42) startScript(11);
[0032] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0034] (00) stopObjectCode();
[0035] (68) VAR_RESULT = isScriptRunning(112);
[0038] (A8) if (VAR_RESULT) {
[003C] (48)   if (VAR_EGO == 1) {
[0042] (2D)     putActorInRoom(8,17);
[0045] (01)     putActor(8,83,60);
[0049] (11)     animateActor(8,251);
[004C] (**)   }
[004C] (**) }
[004C] (60) cursorCommand(9, 0);
[004F] (24) loadRoomWithEgo(375,19,5,56);
[0055] (00) stopObjectCode();
[0056] (14) print(10,"You may enter.");
[0065] (AE) waitForMessage();
[0066] (0F) if (!getState08(351)) {
[006B] (1E)   walkActorTo(10,83,11);
[006F] (3B)   waitForActor(10);
[0071] (11)   animateActor(10,247);
[0074] (80)   breakHere();
[0075] (1C)   startSound(10);
[0077] (07)   setState08(351);
[007A] (17)   clearState02(351);
[007D] (80)   breakHere();
[007E] (1E)   walkActorTo(10,80,11);
[0082] (**) }
[0082] (3B) waitForActor(10);
[0084] (11) animateActor(10,246);
[0087] (19) doSentence(253,354,0,1);
[008E] (A8) if (Var[45]) {
[0092] (AE)   waitForMessage();
[0093] (14)   print(10,"Or, if you wish, your friend may enter.\x01But only one may visit Guru at a time.");
[00D5] (**) }
[00D5] (00) stopObjectCode();
END

// Object 352
Events:
   B - 001A
   C - 0035
  13 - 003D
[001A] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,128)) {
[001F] (42)   startScript(31);
[0021] (48) } else if (VAR_ACTIVE_OBJECT2 == 55) {
[002A] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002F] (18) } else {
[0032] (42)   startScript(3);
[0034] (**) }
[0034] (00) stopObjectCode();
[0035] (19) doSentence(12,356,0,0);
[003C] (00) stopObjectCode();
[003D] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,128)) {
[0042] (42)   startScript(31);
[0044] (18) } else {
[0047] (D8)   printEgo("It doesn't want that.");
[005B] (**) }
[005B] (00) stopObjectCode();
END

// Object 353
Events:
  FD - 0013
[0013] (9A) Var[47] = Var[234];
[0016] (05) drawObject(353,255,255);
[001B] (2E) delay(27);
[001F] (05) drawObject(354,255,255);
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (05) drawObject(355,255,255);
[002B] (2E) delay(25);
[002F] (05) drawObject(354,255,255);
[0034] (80) breakHere();
[0035] (80) breakHere();
[0036] (46) Var[47]++;
[0038] (18) goto 0016;
[003B] (00) stopObjectCode();
END

// Object 354
Events:
  FD - 0013
[0013] (1A) Var[45] = 1;
[0017] (48) if (VAR_EGO == 1) {
[001D] (1A)   Var[45] = 2;
[0021] (**) }
[0021] (B4) VAR_RESULT = getDist(Var[45],10);
[0026] (44) if (VAR_RESULT > 20) {
[002C] (9A)   Var[45] = Var[234];
[002F] (**) }
[002F] (00) stopObjectCode();
END

// Object 355
Events:
END

// Object 356
Events:
   B - 004D
   C - 0024
  FD - 0054
[0024] (D8) printEgo("Y A K - 1\x01Insert CashCard for airport transit.");
[004C] (00) stopObjectCode();
[004D] (39) doSentence(11,352,VAR_ACTIVE_OBJECT2,0);
[0053] (00) stopObjectCode();
[0054] (80) breakHere();
[0055] (48) if (VAR_ACTIVE_VERB == 3) {
[005B] (44)   if (VAR_ACTIVE_OBJECT2 > 2) {
[0061] (BB)     waitForActor(VAR_EGO);
[0063] (42)     startScript(139);
[0065] (**)   }
[0065] (**) }
[0065] (18) goto 0054;
[0068] (00) stopObjectCode();
END

// Object 357
Events:
  FD - 0013
[0013] (18) goto 001B;
[0016] (16) Var[66] = getRandomNr(120);
[0019] (2B) delayVariable(Var[66]);
[001B] (05) drawObject(357,255,255);
[0020] (16) Var[66] = getRandomNr(120);
[0023] (2B) delayVariable(Var[66]);
[0025] (05) drawObject(358,255,255);
[002A] (18) goto 0016;
[002D] (00) stopObjectCode();
END

// Object 358
Events:
  FD - 0013
[0013] (48) if (VAR_EGO == 1) {
[0019] (D0)   pickupObject(VAR_ACTIVE_OBJECT1);
[001B] (19)   doSentence(254,357,0,1);
[0022] (47)   clearState08(357);
[0025] (47)   clearState08(358);
[0028] (68)   VAR_RESULT = isScriptRunning(124);
[002B] (28)   if (!VAR_RESULT) {
[002F] (42)     startScript(112);
[0031] (**)   }
[0031] (18) } else {
[0034] (D8)   printEgo("That would be stealing!");
[004A] (19)   doSentence(STOP);
[004C] (**) }
[004C] (00) stopObjectCode();
END

// Object 359
Events:
   B - 0016
[0016] (48) if (VAR_ACTIVE_OBJECT2 == 49) {
[001C] (EF)   if (getState04(VAR_ACTIVE_OBJECT1)) {
[0020] (D8)     printEgo("It's already on fire.");
[0034] (18)   } else {
[0037] (48)     if (VAR_EGO == 2) {
[003D] (31)       VAR_RESULT = getBitVar(1475,0);
[0042] (A8)       if (VAR_RESULT) {
[0046] (D8)         printEgo("I shouldn't do this, but I have to get\x01Zak out of jail!");
[0074] (18)       } else {
[0077] (D8)         printEgo("I'd need a REALLY good reason to commit\x01arson!");
[00A0] (18)         goto 00B3;
[00A3] (**)       }
[00A3] (**)     }
[00A3] (A7)     setState04(VAR_ACTIVE_OBJECT1);
[00A5] (19)     doSentence(250,360,0,1);
[00AC] (42)     startScript(114);
[00AE] (**)   }
[00AE] (18) } else {
[00B1] (42)   startScript(3);
[00B3] (**) }
[00B3] (00) stopObjectCode();
END

// Object 360
Events:
  FD - 0013
[0013] (1C) startSound(80);
[0015] (05) drawObject(360,255,255);
[001A] (80) breakHere();
[001B] (05) drawObject(361,255,255);
[0020] (80) breakHere();
[0021] (18) goto 0015;
[0024] (00) stopObjectCode();
END

// Object 361
Events:
  FD - 0013
[0013] (1E) walkActorTo(8,108,56);
[0017] (3B) waitForActor(8);
[0019] (11) animateActor(8,247);
[001C] (2E) delay(60);
[0020] (1E) walkActorTo(8,111,56);
[0024] (3B) waitForActor(8);
[0026] (11) animateActor(8,247);
[0029] (2E) delay(60);
[002D] (18) goto 0013;
[0030] (00) stopObjectCode();
END

// Object 362
Events:
   E - 001C
  FD - 002D
[001C] (91) animateActor(VAR_EGO,246);
[001F] (80) breakHere();
[0020] (D8) printEgo("Yeah, sure!");
[002C] (00) stopObjectCode();
[002D] (7A) VerbOps(New-31(0,19,0,0,"Chew@@@@@@@@@"));
[0041] (9A) Var[46] = Var[234];
[0044] (19) doSentence(254,353,0,1);
[004B] (80) breakHere();
[004C] (A8) unless (VAR_ACTIVE_VERB) goto 004B;
[0050] (48) if (VAR_ACTIVE_VERB == 31) {
[0056] (9A)   VAR_ACTIVE_VERB = Var[234];
[0059] (19)   doSentence(253,353,0,1);
[0060] (80)   breakHere();
[0061] (A8)   unless (Var[47]) goto 0060;
[0065] (46)   Var[46]++;
[0067] (48)   if (Var[46] == 16) {
[006D] (4F)     if (getState08(362)) {
[0072] (7A)       VerbOps(New-32(16,19,2,0,"   Poop@@@"));
[0083] (60)       cursorCommand(0, 0);
[0086] (**)     }
[0086] (**)   }
[0086] (**) }
[0086] (48) if (VAR_ACTIVE_VERB == 32) {
[008C] (9A)   VAR_ACTIVE_VERB = Var[234];
[008F] (1C)   startSound(18);
[0091] (80)   breakHere();
[0092] (47)   clearState08(362);
[0095] (17)   clearState02(362);
[0098] (80)   breakHere();
[0099] (3C)   stopSound(18);
[009B] (7A)   VerbOps(Delete(2));
[009E] (60)   cursorCommand(0, 0);
[00A1] (**) }
[00A1] (18) goto 0044;
[00A4] (00) stopObjectCode();
END
