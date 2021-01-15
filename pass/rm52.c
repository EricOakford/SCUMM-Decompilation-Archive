/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 52: SCUMM Bar (bar)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(2,8)
[000D] (33)   RoomColor(5,6)
[0013] (**) }
[0013] (07) setState(459,1);
[0017] (AC) Exprmode Var[155] = ((373 - 361) / 3);
[0026] (0A) startScript(200,[]);
[0029] (2A) startScript(201,[],F);
[002C] (80) breakHere();
[002D] (D2) actorFollowCamera(VAR_EGO);
[0030] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (1A) Local[0] = 0;
[0005] (AC) Exprmode Local[1] = (361 + (Local[0] * 3));
[0014] (87) setState(Local[1],1);
[0018] (46) Local[0]++;
[001B] (C4) unless (Local[0] > Var[155]) goto 0005;
[0022] (2A) startScript(202,[],F);
[0025] (2A) startScript(205,[],F);
[0028] (A0) stopObjectCode();
END

Script# 201
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (1A)   Local[1] = 0;
[000C] (1A)   Local[0] = 0;
[0011] (AC)   Exprmode Local[2] = ((355 + Local[0]) + (Local[1] * 3));
[0024] (85)   drawObject(Local[2],255,255);
[002B] (AC)   Exprmode Local[2] = (378 + Local[0]);
[0036] (85)   drawObject(Local[2],255,255);
[003D] (80)   breakHere();
[003E] (46)   Local[0]++;
[0041] (44)   unless (Local[0] > 2) goto 0011;
[0048] (46)   Local[1]++;
[004B] (44)   unless (Local[1] > 1) goto 000C;
[0052] (18)   goto 0007;
[0055] (18) } else {
[0058] (05)   drawObject(355,255,255);
[005F] (**) }
[005F] (A0) stopObjectCode();
END

Script# 202
[0000] (05) drawObject(376,255,255);
[0007] (44) if (VAR_MACHINE_SPEED > 0) {
[000E] (1A)   Local[0] = 1;
[0013] (05)   drawObject(377,255,255);
[001A] (2E)   delay(60);
[001E] (05)   drawObject(376,255,255);
[0025] (2E)   delay(120);
[0029] (46)   Local[0]++;
[002C] (44)   unless (Local[0] > 100) goto 0013;
[0033] (**) }
[0033] (A0) stopObjectCode();
END

Script# 203
[0000] (AC) Exprmode Local[2] = (Local[0] + 2);
[000B] (9A) Local[1] = Local[0];
[0010] (85) drawObject(Local[1],255,255);
[0017] (80) breakHere();
[0018] (46) Local[1]++;
[001B] (C4) unless (Local[1] > Local[2]) goto 0010;
[0022] (9A) Local[1] = Local[2];
[0027] (85) drawObject(Local[1],255,255);
[002E] (80) breakHere();
[002F] (C6) Local[1]--;
[0032] (F8) unless (Local[1] < Local[0]) goto 0027;
[0039] (A0) stopObjectCode();
END

Script# 204
[0000] (AC) Exprmode Local[2] = (Local[0] + 2);
[000B] (8F) if (getState(Local[0]) == 1) {
[0011] (9A)   Local[1] = Local[0];
[0016] (85)   drawObject(Local[1],255,255);
[001D] (80)   breakHere();
[001E] (46)   Local[1]++;
[0021] (C4)   unless (Local[1] > Local[2]) goto 0016;
[0028] (18) } else {
[002B] (9A)   Local[1] = Local[2];
[0030] (85)   drawObject(Local[1],255,255);
[0037] (80)   breakHere();
[0038] (C6)   Local[1]--;
[003B] (F8)   unless (Local[1] < Local[0]) goto 0030;
[0042] (**) }
[0042] (A0) stopObjectCode();
END

Script# 205
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (96)   Local[1] = getRandomNr(Var[155]);
[000C] (AC)   Exprmode Local[0] = (361 + (Local[1] * 3));
[001B] (9D)   if (classOfIs(Local[0],[134])) {
[0024] (6A)     startScript(204,[Local[0]],F,R);
[002A] (18)   } else {
[002D] (6A)     startScript(203,[Local[0]],F,R);
[0033] (**)   }
[0033] (AC)   Exprmode Local[2] = (<VAR_RESULT = getRandomNr(18)> + 24);
[0040] (2B)   delayVariable(Local[2]);
[0043] (18)   goto 0007;
[0046] (**) }
[0046] (A0) stopObjectCode();
END

Script# 206 // Take a Mint
[0000] (40) cutscene([]);
[0002] (10) VAR_RESULT = getObjectOwner(458);
[0007] (88) if (VAR_RESULT != VAR_EGO) {
[000E] (91)   animateCostume(VAR_EGO,10);
[0012] (10)   VAR_RESULT = getObjectOwner(458);
[0017] (48)   if (VAR_RESULT == 14) {
[001E] (69)     setOwnerOf(458,VAR_EGO);
[0023] (0A)     startScript(12,[]);
[0026] (18)   } else {
[0029] (50)     pickupObject(458);
[002C] (**)   }
[002C] (91)   animateCostume(VAR_EGO,3);
[0030] (D8)   printEgo([Text("I'll take what I need." + wait() + "I'm not a pirate^")]);
[005C] (91)   animateCostume(VAR_EGO,250);
[0060] (AE)   WaitForMessage();
[0062] (D8)   printEgo([Text("^yet.")]);
[006A] (AE)   WaitForMessage();
[006C] (18) } else {
[006F] (91)   animateCostume(VAR_EGO,250);
[0073] (D8)   printEgo([Text("I don't need any more mints." + wait() + "At least I don't think I do^")]);
[00B0] (AE)   WaitForMessage();
[00B2] (**) }
[00B2] (C0) endCutscene();
[00B3] (A0) stopObjectCode();
END

// Object 353: Door to Outside
Events:
   1 - 0025
   2 - 004F
   A - 0079
  5A - 0092
[0025] (8F) if (getState(VAR_ME) == 0) {
[002B] (40)   cutscene([2]);
[0030] (91)   animateCostume(VAR_EGO,247);
[0034] (80)   breakHere();
[0035] (91)   animateCostume(VAR_EGO,10);
[0039] (80)   breakHere();
[003A] (80)   breakHere();
[003B] (0A)   startScript(26,[353,422]);
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
[0065] (0A)   startScript(27,[353,422]);
[006E] (80)   breakHere();
[006F] (91)   animateCostume(VAR_EGO,3);
[0073] (91)   animateCostume(VAR_EGO,244);
[0077] (C0)   endCutscene();
[0078] (**) }
[0078] (00) stopObjectCode();
[0079] (0F) if (getState(353) == 1) {
[007F] (91)   animateCostume(VAR_EGO,250);
[0083] (AD)   putActorInRoom(VAR_EGO,55);
[0087] (81)   putActor(VAR_EGO,361,132);
[008E] (D2)   actorFollowCamera(VAR_EGO);
[0091] (**) }
[0091] (00) stopObjectCode();
[0092] (0F) if (getState(353) == 0) {
[0098] (1A)   Var[194] = 1;
[009D] (18) } else {
[00A0] (1A)   Var[194] = 2;
[00A5] (**) }
[00A5] (00) stopObjectCode();
END

// Object 354: Door to Kitchen
Events:
   1 - 0025
   2 - 002F
   A - 0039
  5A - 0048
[0025] (0A) startScript(26,[354,305]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(27,[354,305]);
[0038] (00) stopObjectCode();
[0039] (0F) if (getState(354) == 1) {
[003F] (24)   loadRoomWithEgo(305,51,-1,-1);
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (0F) if (getState(354) == 0) {
[004E] (1A)   Var[194] = 1;
[0053] (18) } else {
[0056] (1A)   Var[194] = 2;
[005B] (**) }
[005B] (00) stopObjectCode();
END

// Object 355
Events:
END

// Object 356
Events:
END

// Object 357
Events:
END

// Object 358
Events:
END

// Object 359
Events:
END

// Object 360
Events:
END

// Object 361: Pirate
Events:
   9 - 002A
   D - 002A
  5A - 0024
[0024] (1A) Var[194] = 13;
[0029] (00) stopObjectCode();
[002A] (D8) printEgo([Text("I don't want to come between a pirate and his grog." + wait() + "Besides, this is only the demo.")]);
[0081] (AE) WaitForMessage();
[0083] (00) stopObjectCode();
END

// Object 362
Events:
END

// Object 363
Events:
END

// Object 364: Pirate
Events:
   9 - 002A
   D - 002A
  5A - 0024
[0024] (1A) Var[194] = 13;
[0029] (00) stopObjectCode();
[002A] (D8) printEgo([Text("I don't think it's wise to wake a sleeping pirate." + wait() + "He might get mad when he finds out he's only in the demo.")]);
[009A] (AE) WaitForMessage();
[009C] (00) stopObjectCode();
END

// Object 365
Events:
END

// Object 366
Events:
END

// Object 367: Pirate
Events:
   9 - 0083
   D - 002A
  5A - 0024
[0024] (1A) Var[194] = 13;
[0029] (00) stopObjectCode();
[002A] (D8) printEgo([Text("I don't want to talk to him in this demo." + wait() + "I'll catch up with him in the real game.")]);
[0080] (AE) WaitForMessage();
[0082] (00) stopObjectCode();
[0083] (D8) printEgo([Text("They seem busy listening to the guy on the left.")]);
[00B6] (AE) WaitForMessage();
[00B8] (00) stopObjectCode();
END

// Object 368
Events:
END

// Object 369
Events:
END

// Object 370: Pirates
Events:
   9 - 002B
   D - 002B
  5A - 0025
[0025] (1A) Var[194] = 13;
[002A] (00) stopObjectCode();
[002B] (D8) printEgo([Text("I think they're busy.")]);
[0043] (00) stopObjectCode();
END

// Object 371
Events:
END

// Object 372
Events:
END

// Object 373: Pirate
Events:
   9 - 002A
   D - 002A
  5A - 0024
[0024] (1A) Var[194] = 13;
[0029] (00) stopObjectCode();
[002A] (A8) if (Bit[39]) {
[002F] (D8)   printEgo([Text("He looks pretty shaken up^" + wait() + "I'd better leave him alone.")]);
[0069] (AE)   WaitForMessage();
[006B] (18) } else {
[006E] (2A)   startScript(90,[],F);
[0071] (**) }
[0071] (00) stopObjectCode();
END

// Object 374
Events:
END

// Object 375
Events:
END

// Object 376: Pirate
Events:
   9 - 002A
   D - 002A
  5A - 0024
[0024] (1A) Var[194] = 13;
[0029] (00) stopObjectCode();
[002A] (D8) printEgo([Text("I don't think it's wise to wake a sleeping pirate.")]);
[005F] (AE) WaitForMessage();
[0061] (00) stopObjectCode();
END

// Object 377
Events:
END

// Object 378
Events:
END

// Object 379
Events:
END

// Object 380
Events:
END

// Object 458: Breath Mint
Events:
   3 - 0070
   8 - 0051
   9 - 0032
  5A - 002C
[002C] (1A) Var[194] = 9;
[0031] (00) stopObjectCode();
[0032] (D8) printEgo([Text("Yep.  It's a Grog-o-mint.")]);
[004E] (AE) WaitForMessage();
[0050] (00) stopObjectCode();
[0051] (29) setOwnerOf(458,14);
[0055] (0A) startScript(12,[]);
[0058] (D8) printEgo([Text("Ahh.  I needed that.")]);
[006F] (00) stopObjectCode();
[0070] (79) doSentence(3,Local[0],VAR_ME);
[0076] (00) stopObjectCode();
END

// Object 459: Bowl of Mints
Events:
   9 - 0031
   B - 004B
  5A - 002B
[002B] (1A) Var[194] = 9;
[0030] (00) stopObjectCode();
[0031] (D8) printEgo([Text("Oooh^" + wait() + "Grog-o-mints!")]);
[0048] (AE) WaitForMessage();
[004A] (00) stopObjectCode();
[004B] (42) chainScript(206,[]);
[004E] (00) stopObjectCode();
END
