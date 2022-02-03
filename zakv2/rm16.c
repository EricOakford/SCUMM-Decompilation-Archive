/**
 * Zak McKracken: V2 Retail
 * 
 * Room 16: Mindbender Room
 */

// EN
[0000] (9A) Var[56] = Var[234];
[0003] (6F) if (getState04(328)) {
[0008] (47)   clearState08(328);
[000B] (**) }
[000B] (4F) if (getState08(332)) {
[0010] (19)   doSentence(253,332,0,1);
[0017] (18) } else {
[001A] (30)   setBoxFlags(1,0);
[001D] (**) }
[001D] (19) doSentence(250,339,0,1);
[0024] (1A) Var[49] = 53;
[0028] (9A) Var[58] = Var[234];
[002B] (68) VAR_RESULT = isScriptRunning(66);
[002E] (28) if (!VAR_RESULT) {
[0032] (4F)   if (getState08(343)) {
[0037] (19)     doSentence(250,336,0,1);
[003E] (18)   } else {
[0041] (1A)     Var[49] = 60;
[0045] (19)     doSentence(250,335,0,1);
[004C] (**)   }
[004C] (18) } else {
[004F] (19)   doSentence(253,342,0,1);
[0056] (**) }
[0056] (48) if (VAR_ACTIVE_OBJECT1 == 108) {
[005C] (0F)   if (!getState08(333)) {
[0061] (19)     doSentence(250,334,0,1);
[0068] (**)   }
[0068] (**) }
[0068] (00) stopObjectCode();
END

// EX
[0000] (BD) setActorElevation(VAR_EGO,0);
[0003] (A8) if (Var[56]) {
[0007] (19)   doSentence(253,343,0,1);
[000E] (**) }
[000E] (00) stopObjectCode();
END

// Object 328
Events:
   1 - 001C
   2 - 009D
[001C] (42) startScript(10);
[001E] (08) if (VAR_EGO != 7) {
[0024] (EF)   if (getState04(VAR_ACTIVE_OBJECT1)) {
[0028] (60)     cursorCommand(15, 2);
[002B] (2E)     delay(60);
[002F] (E7)     clearState04(VAR_ACTIVE_OBJECT1);
[0031] (9A)     Var[52] = Var[234];
[0034] (1A)     Var[50] = 33;
[0038] (90)     VAR_RESULT = getObjectOwner(Var[50]);
[003B] (48)     if (VAR_RESULT == 7) {
[0041] (E9)       setOwnerOf(Var[50],VAR_EGO);
[0044] (46)       Var[52]++;
[0046] (**)     }
[0046] (46)     Var[50]++;
[0048] (44)     unless (Var[50] > 81) goto 0038;
[004E] (D8)     printEgo("Yay! Here's the \x02");
[005E] (44)     if (Var[52] > 1) {
[0064] (D8)       printEgo("stuff\x02");
[006C] (18)     } else {
[006F] (D8)       printEgo("artifact\x02");
[007A] (**)     }
[007A] (D8)     printEgo(" they took!");
[0086] (60)     cursorCommand(247, 1);
[0089] (18)   } else {
[008C] (2E)     delay(30);
[0090] (D8)     printEgo("It's empty.");
[009C] (**)   }
[009C] (**) }
[009C] (00) stopObjectCode();
[009D] (42) startScript(11);
[009F] (00) stopObjectCode();
END

// Object 329
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(155);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(155);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (A8)   if (Var[56]) {
[002F] (19)     doSentence(253,343,0,1);
[0036] (18)   } else {
[0039] (24)     loadRoomWithEgo(155,4,26,51);
[003F] (**)   }
[003F] (**) }
[003F] (00) stopObjectCode();
END

// Object 330
Events:
   C - 0018
  FD - 002B
[0018] (D8) printEgo("It's a map of Earth.");
[002A] (00) stopObjectCode();
[002B] (9A) Var[58] = Var[235];
[002E] (1C) startSound(27);
[0030] (47) clearState08(338);
[0033] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0037] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0039] (80)   breakHere();
[003A] (19)   doSentence(250,336,0,1);
[0041] (18) } else {
[0044] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0046] (80)   breakHere();
[0047] (19)   doSentence(250,335,0,1);
[004E] (**) }
[004E] (46) Var[56]++;
[0050] (2E) delay(120);
[0054] (9A) Var[58] = Var[234];
[0057] (91) animateActor(VAR_EGO,246);
[005A] (80) breakHere();
[005B] (80) breakHere();
[005C] (D8) printEgo("Oooh! I just felt real stupid.");
[0077] (AE) waitForMessage();
[0078] (19) doSentence(253,343,0,1);
[007F] (00) stopObjectCode();
END

// Object 331
Events:
   4 - 0021
   5 - 0063
   9 - 0080
   A - 0080
   B - 0080
[0021] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0025] (1C)   startSound(27);
[0027] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0029] (48)   if (VAR_EGO == 7) {
[002F] (A7)     setState04(VAR_ACTIVE_OBJECT1);
[0031] (**)   }
[0031] (19)   doSentence(253,332,0,1);
[0038] (07)   setState08(332);
[003B] (57)   setState02(332);
[003E] (7B)   VAR_RESULT = getActorWalkBox(1);
[0041] (48)   if (VAR_RESULT == 6) {
[0047] (68)     VAR_RESULT = isScriptRunning(88);
[004A] (28)     if (!VAR_RESULT) {
[004E] (42)       startScript(88);
[0050] (**)     }
[0050] (**)   }
[0050] (7B)   VAR_RESULT = getActorWalkBox(2);
[0053] (48)   if (VAR_RESULT == 6) {
[0059] (68)     VAR_RESULT = isScriptRunning(90);
[005C] (28)     if (!VAR_RESULT) {
[0060] (42)       startScript(90);
[0062] (**)     }
[0062] (**)   }
[0062] (**) }
[0062] (00) stopObjectCode();
[0063] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0067] (1C)   startSound(27);
[0069] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[006B] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[006D] (3C)   stopSound(19);
[006F] (47)   clearState08(332);
[0072] (30)   setBoxFlags(1,0);
[0075] (17)   clearState02(332);
[0078] (19)   doSentence(254,332,0,1);
[007F] (**) }
[007F] (00) stopObjectCode();
[0080] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0084] (19)   doSentence(5,331,0,0);
[008B] (18) } else {
[008E] (19)   doSentence(4,331,0,0);
[0095] (**) }
[0095] (00) stopObjectCode();
END

// Object 332
Events:
  FD - 0024
[0024] (1C) startSound(19);
[0026] (30) setBoxFlags(1,96);
[0029] (2F) if (!getState04(331)) {
[002E] (18) } else {
[0031] (80)   breakHere();
[0032] (4F)   if (getState08(332)) {
[0037] (19)     doSentence(253,344,0,1);
[003E] (A8)     if (Var[66]) {
[0042] (18)       goto 0048;
[0045] (**)     }
[0045] (**)   }
[0045] (18)   goto 0031;
[0048] (68)   VAR_RESULT = isScriptRunning(93);
[004B] (28)   if (!VAR_RESULT) {
[004F] (42)     startScript(93);
[0051] (**)   }
[0051] (**) }
[0051] (00) stopObjectCode();
END

// Object 333
Events:
   A - 001F
   B - 003B
   D - 003B
   E - 001F
  FD - 004E
[001F] (D8) printEgo("It's securely tied upstairs.");
[003A] (00) stopObjectCode();
[003B] (D8) printEgo("Up we go!!!");
[0046] (19) doSentence(253,333,0,1);
[004D] (00) stopObjectCode();
[004E] (60) cursorCommand(15, 2);
[0051] (D3) ActorOps(VAR_EGO,[Sound(Var[234])]);
[0055] (91) animateActor(VAR_EGO,3);
[0058] (9A) Var[51] = Var[234];
[005B] (FD) setActorElevation(VAR_EGO,Var[51]);
[005E] (80) breakHere();
[005F] (46) Var[51]++;
[0061] (44) unless (Var[51] > 48) goto 005B;
[0067] (93) ActorOps(VAR_EGO,[Sound(6)]);
[006B] (60) cursorCommand(247, 1);
[006E] (07) setState08(107);
[0071] (07) setState08(109);
[0074] (57) setState02(109);
[0077] (24) loadRoomWithEgo(108,1,255,255);
[007D] (00) stopObjectCode();
END

// Object 334
Events:
   D - 0019
  FD - 0039
[0019] (4F) if (getState08(333)) {
[001E] (19)   doSentence(11,333,0,0);
[0025] (18) } else {
[0028] (D8)   printEgo("I can't reach it.");
[0038] (**) }
[0038] (00) stopObjectCode();
[0039] (9A) VAR_ACTIVE_OBJECT1 = Var[234];
[003C] (46) Var[56]++;
[003E] (80) breakHere();
[003F] (11) animateActor(1,32);
[0042] (11) animateActor(1,28);
[0045] (5B) setBitVar(1440,1,Var[235]);
[004A] (2E) delay(60);
[004E] (D8) printEgo("Ouch!");
[0055] (2E) delay(120);
[0059] (11) animateActor(1,6);
[005C] (11) animateActor(1,10);
[005F] (11) animateActor(1,16);
[0062] (5B) setBitVar(1440,1,Var[234]);
[0067] (19) doSentence(253,343,0,1);
[006E] (00) stopObjectCode();
END

// Object 335
Events:
  FD - 0013
[0013] (19) doSentence(254,338,0,1);
[001A] (78) if (Var[49] < 61) {
[0020] (45)   drawObject(335,Var[49],5);
[0025] (46)   Var[49]++;
[0027] (45)   drawObject(336,Var[49],5);
[002C] (1C)   startSound(83);
[002E] (80)   breakHere();
[002F] (48)   unless (Var[49] == 61) goto 0020;
[0035] (**) }
[0035] (19) doSentence(250,337,0,1);
[003C] (00) stopObjectCode();
END

// Object 336
Events:
  FD - 0013
[0013] (19) doSentence(254,337,0,1);
[001A] (44) if (Var[49] > 52) {
[0020] (45)   drawObject(335,Var[49],5);
[0025] (C6)   Var[49]--;
[0027] (45)   drawObject(336,Var[49],5);
[002C] (1C)   startSound(83);
[002E] (80)   breakHere();
[002F] (48)   unless (Var[49] == 52) goto 0020;
[0035] (**) }
[0035] (19) doSentence(250,338,0,1);
[003C] (00) stopObjectCode();
END

// Object 337
Events:
  FD - 0013
[0013] (1A) Var[48] = 61;
[0017] (45) drawObject(338,Var[48],7);
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (45) drawObject(337,Var[48],7);
[0023] (C6) Var[48]--;
[0025] (78) unless (Var[48] < 51) goto 0017;
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (18) goto 0013;
[0030] (00) stopObjectCode();
END

// Object 338
Events:
  FD - 0013
[0013] (1A) Var[48] = 51;
[0017] (45) drawObject(338,Var[48],7);
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (45) drawObject(337,Var[48],7);
[0023] (46) Var[48]++;
[0025] (44) unless (Var[48] > 61) goto 0017;
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (18) goto 0013;
[0030] (00) stopObjectCode();
END

// Object 339
Events:
  FD - 0013
[0013] (1A) Var[45] = 53;
[0017] (68) VAR_RESULT = isScriptRunning(66);
[001A] (28) if (!VAR_RESULT) {
[001E] (16)   Var[46] = getRandomNr(16);
[0021] (5A)   Var[46] += 4;
[0025] (80)   breakHere();
[0026] (C6)   Var[46]--;
[0028] (28)   unless (!Var[46]) goto 0025;
[002C] (18) } else {
[002F] (80)   breakHere();
[0030] (80)   breakHere();
[0031] (**) }
[0031] (1A) Var[47] = 339;
[0035] (3C) stopSound(83);
[0037] (1C) startSound(83);
[0039] (C5) drawObject(Var[47],Var[45],9);
[003D] (80) breakHere();
[003E] (46) Var[47]++;
[0040] (44) unless (Var[47] > 342) goto 0039;
[0046] (48) if (Var[45] == 53) {
[004C] (1A)   Var[45] = 57;
[0050] (18)   goto 0017;
[0053] (**) }
[0053] (18) goto 0013;
[0056] (00) stopObjectCode();
END

// Object 340
Events:
  FD - 0013
[0013] (94) print(Var[66],"I can't stand the noise! It's MUCH\x01louder in here!");
[0040] (00) stopObjectCode();
END

// Object 341
Events:
  FD - 0013
[0013] (1A) VAR_EGO = 7;
[0017] (13) ActorOps(12,[Costume(28)]);
[001B] (13) ActorOps(12,[Color(14, 9)]);
[0020] (13) ActorOps(12,[Color(6, 1)]);
[0025] (13) ActorOps(12,[Sound(6)]);
[0029] (13) ActorOps(12,[TalkColor(9)]);
[002D] (1A) Var[245] = 28;
[0031] (2D) putActorInRoom(7,16);
[0034] (01) putActor(7,28,48);
[0038] (11) animateActor(7,251);
[003B] (2D) putActorInRoom(12,16);
[003E] (01) putActor(12,50,48);
[0042] (3D) setActorElevation(12,0);
[0045] (42) startScript(5);
[0047] (47) clearState08(328);
[004A] (47) clearState08(329);
[004D] (47) clearState08(155);
[0050] (00) stopObjectCode();
END

// Object 342
Events:
  FD - 0013
[0013] (9A) Var[55] = Var[49];
[0016] (16) Var[48] = getRandomNr(10);
[0019] (5A) Var[48] += 51;
[001D] (45) drawObject(338,Var[48],7);
[0022] (80) breakHere();
[0023] (45) drawObject(337,Var[48],7);
[0028] (C8) if (Var[55] == Var[49]) {
[002D] (16)   Var[55] = getRandomNr(7);
[0030] (5A)   Var[55] += 53;
[0034] (**) }
[0034] (88) if (Var[55] != Var[49]) {
[0039] (45)   drawObject(335,Var[49],5);
[003E] (C4)   if (Var[55] > Var[49]) {
[0043] (46)     Var[49]++;
[0045] (18)   } else {
[0048] (C6)     Var[49]--;
[004A] (**)   }
[004A] (45)   drawObject(336,Var[49],5);
[004F] (**) }
[004F] (18) goto 0016;
[0052] (00) stopObjectCode();
END

// Object 343
Events:
   4 - 0023
   5 - 002F
   9 - 0023
   A - 0023
   B - 0023
  FD - 004E
[0023] (28) if (!Var[58]) {
[0027] (19)   doSentence(253,330,0,1);
[002E] (**) }
[002E] (00) stopObjectCode();
[002F] (D8) printEgo("There isn't any way to turn it off!");
[004D] (00) stopObjectCode();
[004E] (9A) Var[56] = Var[234];
[0051] (04) if (VAR_EGO <= 2) {
[0057] (68)   VAR_RESULT = isScriptRunning(94);
[005A] (28)   if (!VAR_RESULT) {
[005E] (03)     VAR_RESULT = getActorRoom(7);
[0061] (48)     if (VAR_RESULT == 4) {
[0067] (42)       startScript(94);
[0069] (**)     }
[0069] (**)   }
[0069] (**) }
[0069] (00) stopObjectCode();
END

// Object 344
Events:
   C - 001C
  FD - 002B
[001C] (D8) printEgo("It's set to 60.");
[002A] (00) stopObjectCode();
[002B] (9A) Var[66] = Var[234];
[002E] (7B) VAR_RESULT = getActorWalkBox(1);
[0031] (48) if (VAR_RESULT == 6) {
[0037] (48)   if (Var[167] == 48) {
[003D] (48)     if (Var[164] == 40) {
[0043] (1A)       Var[66] = 1;
[0047] (**)     }
[0047] (**)   }
[0047] (**) }
[0047] (7B) VAR_RESULT = getActorWalkBox(2);
[004A] (48) if (VAR_RESULT == 6) {
[0050] (48)   if (Var[168] == 48) {
[0056] (48)     if (Var[165] == 40) {
[005C] (1A)       Var[66] = 2;
[0060] (**)     }
[0060] (**)   }
[0060] (**) }
[0060] (00) stopObjectCode();
END

// Object 345
Events:
  FD - 0013
[0013] (3A) Var[121] -= 3;
[0017] (7E) walkActorTo(7,Var[121],Var[122]);
[001B] (3B) waitForActor(7);
[001D] (9A) Var[53] = Var[234];
[0020] (19) doSentence(253,346,0,1);
[0027] (80) breakHere();
[0028] (A8) unless (Var[53]) goto 0027;
[002C] (3A) Var[121] -= 2;
[0030] (C6) Var[122]--;
[0032] (7E) walkActorTo(7,Var[121],Var[122]);
[0036] (3B) waitForActor(7);
[0038] (9A) Var[53] = Var[234];
[003B] (19) doSentence(253,346,0,1);
[0042] (80) breakHere();
[0043] (A8) unless (Var[53]) goto 0042;
[0047] (5A) Var[121] += 4;
[004B] (7E) walkActorTo(7,Var[121],Var[122]);
[004F] (3B) waitForActor(7);
[0051] (9A) Var[53] = Var[234];
[0054] (19) doSentence(253,346,0,1);
[005B] (80) breakHere();
[005C] (A8) unless (Var[53]) goto 005B;
[0060] (C6) Var[121]--;
[0062] (3A) Var[122] -= 2;
[0066] (7E) walkActorTo(7,Var[121],Var[122]);
[006A] (3B) waitForActor(7);
[006C] (18) goto 0013;
[006F] (00) stopObjectCode();
END

// Object 346
Events:
  FD - 0013
[0013] (9A) Var[50] = Var[234];
[0016] (16) Var[54] = getRandomNr(3);
[0019] (C8) if (Var[54] == Var[234]) {
[001E] (11)   animateActor(7,246);
[0021] (C8) } else if (Var[54] == Var[235]) {
[0029] (11)   animateActor(7,245);
[002C] (48) } else if (Var[54] == 2) {
[0035] (11)   animateActor(7,247);
[0038] (48) } else if (Var[54] == 3) {
[0041] (11)   animateActor(7,244);
[0044] (18)   /* goto 0047; */
[0047] (**) }
[0047] (80) breakHere();
[0048] (80) breakHere();
[0049] (46) Var[50]++;
[004B] (44) unless (Var[50] > 2) goto 0016;
[0051] (9A) Var[53] = Var[235];
[0054] (00) stopObjectCode();
END

// Object 347
Events:
  FD - 0013
[0013] (2E) delay(18);
[0017] (1C) startSound(38);
[0019] (05) drawObject(347,255,255);
[001E] (2E) delay(30);
[0022] (05) drawObject(346,255,255);
[0027] (18) goto 0013;
[002A] (00) stopObjectCode();
END
