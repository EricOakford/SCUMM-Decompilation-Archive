/**
 * Zak McKracken: V2 Retail
 * 
 * Room 18: Katmandu Jail
 */

// EN
[0000] (68) VAR_RESULT = isScriptRunning(135);
[0003] (A8) if (VAR_RESULT) {
[0007] (18) } else {
[000A] (68)   VAR_RESULT = isScriptRunning(113);
[000D] (28)   if (!VAR_RESULT) {
[0011] (68)     VAR_RESULT = isScriptRunning(112);
[0014] (28)     if (!VAR_RESULT) {
[0018] (68)       VAR_RESULT = isScriptRunning(114);
[001B] (28)       if (!VAR_RESULT) {
[001F] (68)         VAR_RESULT = isScriptRunning(124);
[0022] (28)         if (!VAR_RESULT) {
[0026] (68)           VAR_RESULT = isScriptRunning(118);
[0029] (28)           if (!VAR_RESULT) {
[002D] (2D)             putActorInRoom(8,18);
[0030] (01)             putActor(8,10,60);
[0034] (11)             animateActor(8,248);
[0037] (47)             clearState08(368);
[003A] (03)             VAR_RESULT = getActorRoom(1);
[003D] (48)             if (VAR_RESULT == 18) {
[0043] (7B)               VAR_RESULT = getActorWalkBox(1);
[0046] (48)               if (VAR_RESULT == 7) {
[004C] (18)                 goto 0067;
[004F] (**)               }
[004F] (**)             }
[004F] (03)             VAR_RESULT = getActorRoom(2);
[0052] (48)             if (VAR_RESULT == 18) {
[0058] (7B)               VAR_RESULT = getActorWalkBox(2);
[005B] (48)               if (VAR_RESULT == 7) {
[0061] (18)                 goto 0067;
[0064] (**)               }
[0064] (**)             }
[0064] (47)             clearState08(366);
[0067] (48)             if (VAR_ACTIVE_OBJECT1 == 350) {
[006D] (19)               doSentence(253,364,0,1);
[0074] (**)             }
[0074] (**)           }
[0074] (**)         }
[0074] (**)       }
[0074] (**)     }
[0074] (**)   }
[0074] (0F)   if (!getState08(366)) {
[0079] (30)     setBoxFlags(5,64);
[007C] (18)   } else {
[007F] (30)     setBoxFlags(5,0);
[0082] (**)   }
[0082] (19)   doSentence(253,371,0,1);
[0089] (19)   doSentence(250,372,0,1);
[0090] (**) }
[0090] (00) stopObjectCode();
END

// EX
END

// Object 60
Events:
   B - 002B
   E - 001D
[001D] (19) doSentence(253,370,0,1);
[0024] (A8) if (Var[47]) {
[0028] (D0)   pickupObject(VAR_ACTIVE_OBJECT1);
[002A] (**) }
[002A] (00) stopObjectCode();
[002B] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0030] (00) stopObjectCode();
END

// Object 363
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(350);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(350);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(350,17,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 364
Events:
   C - 0019
  FD - 005A
[0019] (48) if (VAR_EGO == 1) {
[001F] (D8)   printEgo("I think it's the name of a cigarette.");
[003F] (18) } else {
[0042] (D8)   printEgo("It says `JAIL` in Nepali.");
[0059] (**) }
[0059] (00) stopObjectCode();
[005A] (2E) delay(60);
[005E] (48) if (VAR_EGO == 1) {
[0064] (6F)   if (getState04(372)) {
[0069] (14)     print(8,"Better not cause any trouble!");
[0085] (18)     goto 00E9;
[0088] (**)   }
[0088] (**) }
[0088] (14) print(8,"Hello\x02");
[0091] (B1) VAR_RESULT = getBitVar(1541,VAR_EGO);
[0096] (28) if (!VAR_RESULT) {
[009A] (DB)   setBitVar(1541,VAR_EGO,Var[235]);
[009F] (14)   print(8,", and welcome to Katmandu!");
[00B8] (18) } else {
[00BB] (14)   print(8," again.");
[00C5] (**) }
[00C5] (31) VAR_RESULT = getBitVar(1475,0);
[00CA] (A8) if (VAR_RESULT) {
[00CE] (AE)   waitForMessage();
[00CF] (14)   print(8,"Here to visit the prisoner?");
[00E9] (**) }
[00E9] (00) stopObjectCode();
END

// Object 365
Events:
  FD - 001A
[001A] (A9) setOwnerOf(Var[50],0);
[001D] (A9) setOwnerOf(Var[50],15);
[0020] (C7) clearState08(Var[50]);
[0022] (97) clearState02(Var[50]);
[0024] (00) stopObjectCode();
END

// Object 366
Events:
   1 - 0022
   2 - 0054
   B - 0071
  FD - 0082
[0022] (19) doSentence(253,370,0,1);
[0029] (A8) if (Var[47]) {
[002D] (8F)   if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0031] (D8)     printEgo("It's locked.");
[003E] (18)   } else {
[0041] (D8)     printEgo("It's already open.");
[0053] (**)   }
[0053] (**) }
[0053] (00) stopObjectCode();
[0054] (19) doSentence(253,370,0,1);
[005B] (A8) if (Var[47]) {
[005F] (CF)   if (getState08(VAR_ACTIVE_OBJECT1)) {
[0063] (28)     if (!VAR_OVERRIDE) {
[0067] (1C)       startSound(94);
[0069] (80)       breakHere();
[006A] (**)     }
[006A] (47)     clearState08(366);
[006D] (30)     setBoxFlags(5,64);
[0070] (**)   }
[0070] (**) }
[0070] (00) stopObjectCode();
[0071] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0075] (39)   doSentence(11,370,VAR_ACTIVE_OBJECT2,0);
[007B] (18) } else {
[007E] (18)   goto 0041;
[0081] (**) }
[0081] (00) stopObjectCode();
[0082] (9A) Var[46] = Var[234];
[0085] (29) setOwnerOf(60,0);
[0089] (29) setOwnerOf(60,15);
[008D] (36) walkActorToObject(8,60);
[0091] (3B) waitForActor(8);
[0093] (47) clearState08(60);
[0096] (17) clearState02(60);
[0099] (80) breakHere();
[009A] (46) Var[46]++;
[009C] (00) stopObjectCode();
END

// Object 367
Events:
   1 - 0022
   2 - 002A
   9 - 002A
   A - 0022
  FD - 0032
[0022] (19) doSentence(1,368,0,0);
[0029] (00) stopObjectCode();
[002A] (19) doSentence(2,368,0,0);
[0031] (00) stopObjectCode();
[0032] (1E) walkActorTo(8,10,60);
[0036] (3B) waitForActor(8);
[0038] (11) animateActor(8,244);
[003B] (00) stopObjectCode();
END

// Object 368
Events:
   1 - 0027
   2 - 0042
   9 - 0042
   A - 0027
  FD - 0050
[0027] (19) doSentence(253,370,0,1);
[002E] (A8) if (Var[47]) {
[0032] (42)   startScript(10);
[0034] (08)   if (VAR_EGO != 8) {
[003A] (19)     doSentence(253,368,0,1);
[0041] (**)   }
[0041] (**) }
[0041] (00) stopObjectCode();
[0042] (19) doSentence(253,370,0,1);
[0049] (A8) if (Var[47]) {
[004D] (42)   startScript(11);
[004F] (**) }
[004F] (00) stopObjectCode();
[0050] (60) cursorCommand(15, 2);
[0053] (2E) delay(60);
[0057] (6F) if (getState04(368)) {
[005C] (67)   clearState04(368);
[005F] (D8)   printEgo("Here's the stuff he took from \x02");
[007A] (48)   if (VAR_EGO == 1) {
[0080] (D8)     printEgo("me!");
[0085] (18)   } else {
[0088] (D8)     printEgo("Zak!\x01I'll take it for him.");
[00A0] (**)   }
[00A0] (1A)   Var[66] = 14;
[00A4] (90)   VAR_RESULT = getObjectOwner(Var[66]);
[00A7] (48)   if (VAR_RESULT == 8) {
[00AD] (E9)     setOwnerOf(Var[66],VAR_EGO);
[00B0] (**)   }
[00B0] (46)   Var[66]++;
[00B2] (44)   unless (Var[66] > 83) goto 00A4;
[00B8] (18) } else {
[00BB] (D8)   printEgo("It's empty.");
[00C7] (**) }
[00C7] (60) cursorCommand(247, 1);
[00CA] (00) stopObjectCode();
END

// Object 369
Events:
   C - 0022
  FD - 00A0
[0022] (48) if (VAR_EGO == 1) {
[0028] (D8)   printEgo("I can't read the words, but there's a\x01photo of a meteor on it!");
[005C] (18) } else {
[005F] (D8)   printEgo("WANTED: For gobs of terrible things,\x01one murderous purple slimy meteor.");
[009F] (**) }
[009F] (00) stopObjectCode();
[00A0] (9A) Var[46] = Var[234];
[00A3] (1E) walkActorTo(8,2,54);
[00A7] (3B) waitForActor(8);
[00A9] (11) animateActor(8,244);
[00AC] (80) breakHere();
[00AD] (13) ActorOps(8,[Costume(0)]);
[00B1] (2E) delay(120);
[00B5] (1A) Var[50] = 59;
[00B9] (19) doSentence(253,365,0,1);
[00C0] (11) animateActor(8,249);
[00C3] (13) ActorOps(8,[Costume(26)]);
[00C7] (13) ActorOps(8,[Color(9, 1)]);
[00CC] (13) ActorOps(8,[Color(3, 0)]);
[00D1] (46) Var[46]++;
[00D3] (00) stopObjectCode();
END

// Object 370
Events:
   B - 001D
  FD - 003D
[001D] (19) doSentence(253,370,0,1);
[0024] (A8) if (Var[47]) {
[0028] (48)   if (VAR_ACTIVE_OBJECT2 == 60) {
[002E] (1C)     startSound(94);
[0030] (80)     breakHere();
[0031] (07)     setState08(366);
[0034] (30)     setBoxFlags(5,0);
[0037] (18)   } else {
[003A] (42)     startScript(3);
[003C] (**)   }
[003C] (**) }
[003C] (00) stopObjectCode();
[003D] (9A) Var[47] = Var[234];
[0040] (48) if (VAR_EGO == 8) {
[0046] (18) } else {
[0049] (03)   VAR_RESULT = getActorRoom(8);
[004C] (08)   unless (VAR_RESULT != 18) goto 0057;
[0052] (**) }
[0052] (46) Var[47]++;
[0054] (18) goto 0078;
[0057] (49) faceActor(8,VAR_EGO);
[005A] (19) doSentence(STOP);
[005C] (3B) waitForActor(8);
[005E] (14) print(8,"Don't touch that!");
[0070] (AE) waitForMessage();
[0071] (19) doSentence(253,367,0,1);
[0078] (00) stopObjectCode();
END

// Object 371
Events:
   C - 001A
  FD - 009B
[001A] (48) if (VAR_EGO == 1) {
[0020] (D8)   printEgo("It's a picture of a flagpole, but I\x01can't read Nepali.");
[004F] (18) } else {
[0052] (D8)   printEgo("Bulletin: Because of termite problems,\x01all wooden flagpoles have been replaced.");
[009A] (**) }
[009A] (00) stopObjectCode();
[009B] (9A) Var[203] = Var[235];
[009E] (80) breakHere();
[009F] (48) if (VAR_ACTIVE_VERB == 3) {
[00A5] (90)   VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[00A8] (C8)   if (VAR_RESULT == VAR_EGO) {
[00AD] (BB)     waitForActor(VAR_EGO);
[00AF] (48)     if (VAR_ACTIVE_OBJECT2 == 8) {
[00B5] (49)       faceActor(8,VAR_EGO);
[00B8] (48)       if (VAR_ACTIVE_OBJECT1 == 59) {
[00BE] (14)         print(8,"Our flag! Thank you!");
[00D2] (AE)         waitForMessage();
[00D3] (40)         cutscene();
[00D4] (19)         doSentence(253,369,0,1);
[00DB] (80)         breakHere();
[00DC] (A8)         unless (Var[46]) goto 00DB;
[00E0] (C0)         endCutscene();
[00E1] (48)       } else if (VAR_ACTIVE_OBJECT1 == 60) {
[00EA] (14)         print(8,"You found the key!");
[00FC] (AE)         waitForMessage();
[00FD] (40)         cutscene();
[00FE] (19)         doSentence(253,366,0,1);
[0105] (80)         breakHere();
[0106] (A8)         unless (Var[46]) goto 0105;
[010A] (C0)         endCutscene();
[010B] (18)       } else {
[010E] (14)         print(8,"I don't take bribes!");
[0122] (AE)         waitForMessage();
[0123] (**)       }
[0123] (19)       doSentence(253,367,0,1);
[012A] (9A)       VAR_ACTIVE_OBJECT2 = Var[234];
[012D] (**)     }
[012D] (7B)     VAR_RESULT = getActorWalkBox(1);
[0130] (48)     if (VAR_RESULT == 7) {
[0136] (48)       if (VAR_ACTIVE_OBJECT2 == 1) {
[013C] (03)         VAR_RESULT = getActorRoom(8);
[013F] (C8)         if (VAR_RESULT == VAR_ROOM) {
[0144] (49)           faceActor(8,VAR_EGO);
[0147] (14)           print(8,"Don't give anything to the prisoner!");
[0169] (80)           breakHere();
[016A] (90)           VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[016D] (48)           if (VAR_RESULT == 1) {
[0173] (A9)             setOwnerOf(VAR_ACTIVE_OBJECT1,2);
[0176] (**)           }
[0176] (18)           goto 0122;
[0179] (**)         }
[0179] (**)       }
[0179] (48)       if (VAR_ACTIVE_OBJECT2 == 2) {
[017F] (43)         Var[66] = getActorX(1);
[0182] (5E)         walkActorTo(2,Var[66],49);
[0186] (3B)         waitForActor(2);
[0188] (90)         VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[018B] (48)         if (VAR_RESULT == 1) {
[0191] (59)           doSentence(3,VAR_ACTIVE_OBJECT1,2,0);
[0197] (**)         }
[0197] (18)         goto 0122;
[019A] (**)       }
[019A] (**)     }
[019A] (**)   }
[019A] (**) }
[019A] (18) goto 009E;
[019D] (00) stopObjectCode();
END

// Object 372
Events:
   1 - 0039
   2 - 0039
   D - 001D
  FD - 0041
[001D] (48) if (VAR_EGO == 2) {
[0023] (D8)   printEgo("Let me outta here!");
[0034] (1E)   walkActorTo(2,22,58);
[0038] (**) }
[0038] (00) stopObjectCode();
[0039] (99) doSentence(VAR_ACTIVE_VERB,366,0,0);
[0040] (00) stopObjectCode();
[0041] (80) breakHere();
[0042] (7B) VAR_RESULT = getActorWalkBox(1);
[0045] (48) if (VAR_RESULT == 7) {
[004B] (5B)   setBitVar(1475,0,Var[235]);
[0050] (18) } else {
[0053] (5B)   setBitVar(1475,0,Var[234]);
[0058] (**) }
[0058] (18) goto 0041;
[005B] (00) stopObjectCode();
END

// Object 373
Events:
  FD - 0013
[0013] (1E) walkActorTo(8,16,52);
[0017] (3B) waitForActor(8);
[0019] (11) animateActor(8,245);
[001C] (2E) delay(60);
[0020] (1E) walkActorTo(8,29,52);
[0024] (3B) waitForActor(8);
[0026] (11) animateActor(8,244);
[0029] (2E) delay(60);
[002D] (18) goto 0013;
[0030] (00) stopObjectCode();
END

// Object 374
Events:
  FD - 0013
[0013] (1E) walkActorTo(8,14,62);
[0017] (3B) waitForActor(8);
[0019] (11) animateActor(8,246);
[001C] (AE) waitForMessage();
[001D] (1E) walkActorTo(8,29,62);
[0021] (3B) waitForActor(8);
[0023] (11) animateActor(8,246);
[0026] (AE) waitForMessage();
[0027] (18) goto 0013;
[002A] (00) stopObjectCode();
END
