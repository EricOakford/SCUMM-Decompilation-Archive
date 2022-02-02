/**
 * Zak McKracken: V2 Retail
 * 
 * Room 4: Phone Company
 */

// EN
[0000] (1A) Var[245] = 24;
[0004] (68) VAR_RESULT = isScriptRunning(75);
[0007] (28) if (!VAR_RESULT) {
[000B] (68)   VAR_RESULT = isScriptRunning(95);
[000E] (28)   if (!VAR_RESULT) {
[0012] (19)     doSentence(253,155,0,1);
[0019] (19)     doSentence(253,152,0,1);
[0020] (0F)     if (!getState08(159)) {
[0025] (2D)       putActorInRoom(7,4);
[0028] (01)       putActor(7,22,52);
[002C] (11)       animateActor(7,250);
[002F] (18)     } else {
[0032] (2D)       putActorInRoom(7,4);
[0035] (01)       putActor(7,38,56);
[0039] (11)       animateActor(7,249);
[003C] (**)     }
[003C] (9A)     Var[203] = Var[235];
[003F] (19)     doSentence(253,159,0,1);
[0046] (**)   }
[0046] (**) }
[0046] (30) setBoxFlags(4,64);
[0049] (4F) if (getState08(155)) {
[004E] (30)   setBoxFlags(4,0);
[0051] (**) }
[0051] (19) doSentence(250,158,0,1);
[0058] (19) doSentence(250,154,0,1);
[005F] (0F) if (!getState08(156)) {
[0064] (30)   setBoxFlags(2,64);
[0067] (18) } else {
[006A] (30)   setBoxFlags(2,0);
[006D] (**) }
[006D] (00) stopObjectCode();
END

// EX
[0000] (9A) Var[203] = Var[234];
[0003] (00) stopObjectCode();
END

// Object 30
Events:
   B - 0025
   C - 0036
   E - 0022
[0022] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0024] (00) stopObjectCode();
[0025] (48) if (VAR_ACTIVE_OBJECT2 == 25) {
[002B] (42)   startScript(61);
[002D] (18) } else {
[0030] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (42) startScript(61);
[0038] (00) stopObjectCode();
END

// Object 151
Events:
   1 - 001D
   2 - 0023
   D - 0029
  FD - 0051
[001D] (42) startScript(10);
[001F] (07) setState08(135);
[0022] (00) stopObjectCode();
[0023] (42) startScript(11);
[0025] (47) clearState08(135);
[0028] (00) stopObjectCode();
[0029] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002D] (7B)   VAR_RESULT = getActorWalkBox(7);
[0030] (48)   if (VAR_RESULT == 3) {
[0036] (60)     cursorCommand(15, 2);
[0039] (49)     faceActor(7,VAR_EGO);
[003C] (80)     breakHere();
[003D] (14)     print(7,"See ya.");
[0046] (AE)     waitForMessage();
[0047] (60)     cursorCommand(247, 1);
[004A] (**)   }
[004A] (24)   loadRoomWithEgo(135,3,255,255);
[0050] (**) }
[0050] (00) stopObjectCode();
[0051] (9A) Var[66] = Var[234];
[0054] (9A) Var[14] = VAR_EGO;
[0057] (5A) Var[14] += 163;
[005B] (48) if (Var[14] == 40) {
[0061] (9A)   Var[14] = VAR_EGO;
[0064] (5A)   Var[14] += 166;
[0068] (48)   if (Var[14] == 48) {
[006E] (46)     Var[66]++;
[0070] (**)   }
[0070] (**) }
[0070] (00) stopObjectCode();
END

// Object 152
Events:
   4 - 002C
   5 - 003D
   B - 0074
   C - 0053
  FD - 007C
[002C] (D8) printEgo("It's already on.");
[003C] (00) stopObjectCode();
[003D] (D8) printEgo("There's no off switch.");
[0052] (00) stopObjectCode();
[0053] (D8) printEgo("It lists what everyone in town owes.");
[0073] (00) stopObjectCode();
[0074] (19) doSentence(253,153,0,1);
[007B] (00) stopObjectCode();
[007C] (1A) Var[47] = 100;
[0080] (80) breakHere();
[0081] (C6) Var[47]--;
[0083] (28) if (!Var[47]) {
[0087] (AE)   waitForMessage();
[0088] (0F)   if (!getState08(159)) {
[008D] (14)     print(7,"Tum de dum.");
[0099] (18)   } else {
[009C] (14)     print(7,"Hello?");
[00A5] (**)   }
[00A5] (1A)   Var[47] = 100;
[00A9] (**) }
[00A9] (18) goto 0080;
[00AC] (00) stopObjectCode();
END

// Object 153
Events:
   B - 001A
  FD - 001D
[001A] (42) startScript(46);
[001C] (00) stopObjectCode();
[001D] (48) if (VAR_EGO == 1) {
[0023] (2F)   if (!getState04(152)) {
[0028] (10)     VAR_RESULT = getObjectOwner(15);
[002C] (48)     if (VAR_RESULT == 1) {
[0032] (1C)       startSound(66);
[0034] (9A)       Var[45] = Var[234];
[0037] (80)       breakHere();
[0038] (34)       VAR_RESULT = getDist(1,152);
[003E] (44)       if (VAR_RESULT > 0) {
[0044] (18)         goto 00FB;
[0047] (**)       }
[0047] (46)       Var[45]++;
[0049] (44)       unless (Var[45] > 30) goto 0037;
[004F] (27)       setState04(152);
[0052] (D8)       printEgo("There, now my bill is zero. I'll stamp\x01it paid and leave it here.");
[0089] (29)       setOwnerOf(15,0);
[008D] (67)       clearState04(87);
[0090] (42)       startScript(134);
[0092] (18)     } else {
[0095] (D8)       printEgo("I don't remember my account number!");
[00B5] (**)     }
[00B5] (18)   } else {
[00B8] (D8)     printEgo("I've already taken care of my bill.");
[00D7] (**)   }
[00D7] (18) } else {
[00DA] (D8)   printEgo("I don't know a thing about computers.");
[00FB] (**) }
[00FB] (3C) stopSound(66);
[00FD] (00) stopObjectCode();
END

// Object 154
Events:
   C - 0019
  FD - 003F
[0019] (D8) printEgo("THE PHONE COMPANY\x01Please pay bills here.");
[003E] (00) stopObjectCode();
[003F] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[0042] (48) if (VAR_RESULT == 3) {
[0048] (57)   setState02(156);
[004B] (17)   clearState02(157);
[004E] (18) } else {
[0051] (57)   setState02(157);
[0054] (17)   clearState02(156);
[0057] (**) }
[0057] (80) breakHere();
[0058] (18) goto 003F;
[005B] (00) stopObjectCode();
END

// Object 155
Events:
   1 - 001D
   2 - 0023
   D - 0029
  FD - 006A
[001D] (42) startScript(10);
[001F] (07) setState08(329);
[0022] (00) stopObjectCode();
[0023] (42) startScript(11);
[0025] (47) clearState08(329);
[0028] (00) stopObjectCode();
[0029] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002D] (30)   setBoxFlags(4,0);
[0030] (9E)   walkActorTo(VAR_EGO,30,48);
[0034] (BB)   waitForActor(VAR_EGO);
[0036] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[0039] (08)   if (VAR_RESULT != 30) {
[003F] (18)   } else {
[0042] (A3)     VAR_RESULT = getActorY(VAR_EGO);
[0045] (08)     if (VAR_RESULT != 48) {
[004B] (18)     } else {
[004E] (19)       doSentence(253,151,0,1);
[0055] (A8)       if (Var[66]) {
[0059] (68)         VAR_RESULT = isScriptRunning(77);
[005C] (28)         if (!VAR_RESULT) {
[0060] (27)           setState04(330);
[0063] (**)         }
[0063] (**)       }
[0063] (24)       loadRoomWithEgo(329,16,255,255);
[0069] (**)     }
[0069] (**)   }
[0069] (**) }
[0069] (00) stopObjectCode();
[006A] (80) breakHere();
[006B] (68) VAR_RESULT = isScriptRunning(77);
[006E] (28) unless (!VAR_RESULT) goto 006A;
[0072] (7B) VAR_RESULT = getActorWalkBox(1);
[0075] (48) if (VAR_RESULT == 3) {
[007B] (48)   if (Var[167] == 48) {
[0081] (48)     if (Var[164] == 40) {
[0087] (18)       goto 008D;
[008A] (**)     }
[008A] (**)   }
[008A] (18) } else {
[008D] (7B)   VAR_RESULT = getActorWalkBox(2);
[0090] (48)   unless (VAR_RESULT == 3) goto 00B5;
[0096] (48)   if (Var[168] == 48) {
[009C] (48)     if (Var[165] == 40) {
[00A2] (18)       goto 006A;
[00A5] (**)     }
[00A5] (**)   }
[00A5] (**) }
[00A5] (68) VAR_RESULT = isScriptRunning(95);
[00A8] (28) if (!VAR_RESULT) {
[00AC] (68)   VAR_RESULT = isScriptRunning(75);
[00AF] (28)   if (!VAR_RESULT) {
[00B3] (42)     startScript(95);
[00B5] (**)   }
[00B5] (**) }
[00B5] (18) goto 006A;
[00B8] (00) stopObjectCode();
END

// Object 156
Events:
   1 - 0023
   2 - 008D
  FD - 0093
[0023] (68) VAR_RESULT = isScriptRunning(77);
[0026] (28) if (!VAR_RESULT) {
[002A] (FB)   VAR_RESULT = getActorWalkBox(VAR_EGO);
[002D] (08)   if (VAR_RESULT != 3) {
[0033] (04)     if (VAR_EGO <= 2) {
[0039] (49)       faceActor(7,VAR_EGO);
[003C] (80)       breakHere();
[003D] (9A)       Var[14] = VAR_EGO;
[0040] (5A)       Var[14] += 163;
[0044] (48)       if (Var[14] == 40) {
[004A] (9A)         Var[14] = VAR_EGO;
[004D] (5A)         Var[14] += 166;
[0051] (48)         if (Var[14] == 48) {
[0057] (14)           print(7,"Hello.");
[0060] (42)           startScript(10);
[0062] (30)           setBoxFlags(2,0);
[0065] (18)           goto 0080;
[0068] (**)         }
[0068] (**)       }
[0068] (14)       print(7,"You can't come back here!");
[0080] (AE)       waitForMessage();
[0081] (11)       animateActor(7,246);
[0084] (18)       goto 008C;
[0087] (**)     }
[0087] (**)   }
[0087] (**) }
[0087] (42) startScript(10);
[0089] (30) setBoxFlags(2,0);
[008C] (00) stopObjectCode();
[008D] (42) startScript(11);
[008F] (30) setBoxFlags(2,64);
[0092] (00) stopObjectCode();
[0093] (9A) Var[48] = Var[234];
[0096] (62) stopScript(77);
[0098] (47) clearState08(159);
[009B] (80) breakHere();
[009C] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[009F] (08) if (VAR_RESULT != 3) {
[00A5] (19)   doSentence(1,156,0,0);
[00AC] (4C)   waitForSentence();
[00AD] (**) }
[00AD] (4F) if (getState08(156)) {
[00B2] (19)   doSentence(2,157,0,0);
[00B9] (4C)   waitForSentence();
[00BA] (**) }
[00BA] (19) doSentence(1,155,0,0);
[00C1] (4C) waitForSentence();
[00C2] (30) setBoxFlags(4,0);
[00C5] (1E) walkActorTo(7,30,48);
[00C9] (3B) waitForActor(7);
[00CB] (2D) putActorInRoom(7,0);
[00CE] (2E) delay(30);
[00D2] (46) Var[48]++;
[00D4] (00) stopObjectCode();
END

// Object 157
Events:
  FD - 0029
  FF - 0021
[0021] (99) doSentence(VAR_ACTIVE_VERB,156,0,1);
[0028] (00) stopObjectCode();
[0029] (9A) Var[48] = Var[234];
[002C] (4F) if (getState08(87)) {
[0031] (62)   stopScript(77);
[0033] (**) }
[0033] (47) clearState08(159);
[0036] (80) breakHere();
[0037] (19) doSentence(1,156,0,0);
[003E] (4C) waitForSentence();
[003F] (19) doSentence(2,157,0,0);
[0046] (4C) waitForSentence();
[0047] (1E) walkActorTo(7,22,52);
[004B] (3B) waitForActor(7);
[004D] (11) animateActor(7,246);
[0050] (2E) delay(60);
[0054] (46) Var[48]++;
[0056] (00) stopObjectCode();
END

// Object 158
Events:
  FD - 001A
[001A] (80) breakHere();
[001B] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[001E] (48) if (VAR_RESULT == 4) {
[0024] (18)   goto 001A;
[0027] (**) }
[0027] (30) setBoxFlags(4,64);
[002A] (00) stopObjectCode();
END

// Object 159
Events:
   B - 0020
   C - 0037
  FD - 0054
[0020] (D8) printEgo("I don't have any change.");
[0036] (00) stopObjectCode();
[0037] (9A) Var[67] = Var[234];
[003A] (9A) Var[14] = Var[67];
[003D] (5A) Var[14] += 143;
[0041] (9A) Var[66] = Var[14];
[0044] (D8) printEgo("\x04\x42\x02");
[0049] (46) Var[67]++;
[004B] (44) unless (Var[67] > 3) goto 003A;
[0051] (D8) printEgo("");
[0053] (00) stopObjectCode();
[0054] (80) breakHere();
[0055] (48) if (VAR_ACTIVE_VERB == 3) {
[005B] (48)   if (VAR_ACTIVE_OBJECT2 == 7) {
[0061] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[0064] (1A)     Var[47] = 100;
[0068] (9A)     Var[49] = VAR_ACTIVE_OBJECT1;
[006B] (7B)     VAR_RESULT = getActorWalkBox(7);
[006E] (48)     if (VAR_RESULT == 3) {
[0074] (FB)       VAR_RESULT = getActorWalkBox(VAR_EGO);
[0077] (08)       if (VAR_RESULT != 3) {
[007D] (91)         animateActor(VAR_EGO,255);
[0080] (B6)         walkActorToObject(VAR_EGO,158);
[0084] (**)       }
[0084] (18)     } else {
[0087] (BB)       waitForActor(VAR_EGO);
[0089] (B6)       walkActorToObject(VAR_EGO,158);
[008D] (40)       cutscene();
[008E] (9A)       Var[117] = VAR_EGO;
[0091] (1A)       VAR_EGO = 7;
[0095] (19)       doSentence(253,157,0,1);
[009C] (D8)       printEgo("One moment^");
[00A8] (80)       breakHere();
[00A9] (A8)       unless (Var[48]) goto 00A8;
[00AD] (9A)       VAR_EGO = Var[117];
[00B0] (C0)       endCutscene();
[00B1] (**)     }
[00B1] (BB)     waitForActor(VAR_EGO);
[00B3] (9A)     VAR_ACTIVE_OBJECT1 = Var[49];
[00B6] (48)     if (VAR_ACTIVE_OBJECT1 == 15) {
[00BC] (42)       startScript(74);
[00BE] (18)       goto 0054;
[00C1] (**)     }
[00C1] (9D)     if (classOfIs(VAR_ACTIVE_OBJECT1,32)) {
[00C6] (14)       print(7,"Look what you found! How interesting!");
[00E9] (9A)       Var[118] = Var[234];
[00EC] (1A)       Var[66] = 33;
[00F0] (90)       VAR_RESULT = getObjectOwner(Var[66]);
[00F3] (C8)       if (VAR_RESULT == VAR_EGO) {
[00F8] (9D)         if (classOfIs(Var[66],32)) {
[00FD] (46)           Var[118]++;
[00FF] (**)         }
[00FF] (**)       }
[00FF] (46)       Var[66]++;
[0101] (44)       unless (Var[66] > 81) goto 00F0;
[0107] (C4)       if (Var[118] > Var[235]) {
[010C] (AE)         waitForMessage();
[010D] (14)         print(7,"OH! You have MORE than one!");
[0126] (**)       }
[0126] (9A)       Var[238] = VAR_EGO;
[0129] (9A)       Var[120] = Var[234];
[012C] (5B)       setBitVar(1544,0,Var[234]);
[0131] (42)       startScript(75);
[0133] (18)       goto 0054;
[0136] (**)     }
[0136] (9A)     Var[14] = VAR_EGO;
[0139] (5A)     Var[14] += 163;
[013D] (48)     if (Var[14] == 40) {
[0143] (9A)       Var[14] = VAR_EGO;
[0146] (5A)       Var[14] += 166;
[014A] (48)       if (Var[14] == 48) {
[0150] (14)         print(7,"No thanks.");
[015C] (18)         goto 019F;
[015F] (**)       }
[015F] (**)     }
[015F] (9D)     if (classOfIs(VAR_ACTIVE_OBJECT1,128)) {
[0164] (14)       print(7,"Do you have a bill to pay?");
[017B] (18)     } else {
[017E] (14)       print(7,"We can't accept your \x06\x09\x01as payment.");
[019F] (**)     }
[019F] (AE)     waitForMessage();
[01A0] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[01A3] (**)   }
[01A3] (**) }
[01A3] (18) goto 0054;
[01A6] (00) stopObjectCode();
END
