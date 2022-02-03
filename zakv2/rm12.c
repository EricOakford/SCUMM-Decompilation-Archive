/**
 * Zak McKracken: V2 Retail
 * 
 * Room 12: Mt. Rainier Cave Entrance
 */

// EN
[0000] (D3) ActorOps(VAR_EGO,[Sound(Var[234])]);
[0004] (C8) if (Var[147] == Var[234]) {
[0009] (19)   doSentence(250,269,0,1);
[0010] (**) }
[0010] (0F) if (!getState08(52)) {
[0015] (30)   setBoxFlags(4,64);
[0018] (18) } else {
[001B] (30)   setBoxFlags(4,0);
[001E] (**) }
[001E] (54) setObjectName(267,"loose dirt");
[002C] (4F) if (getState08(267)) {
[0031] (54)   setObjectName(267,"cave entrance");
[0042] (**) }
[0042] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

// Object 52
Events:
   A - 0022
   B - 002A
   E - 0022
[0022] (19) doSentence(253,266,0,1);
[0029] (00) stopObjectCode();
[002A] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002F] (00) stopObjectCode();
END

// Object 266
Events:
   D - 001C
  FD - 0028
[001C] (5B) setBitVar(1572,0,Var[235]);
[0021] (24) loadRoomWithEgo(191,144,255,255);
[0027] (00) stopObjectCode();
[0028] (30) setBoxFlags(4,0);
[002B] (1C) startSound(97);
[002D] (50) pickupObject(52);
[0030] (00) stopObjectCode();
END

// Object 267
Events:
   9 - 0031
   B - 004D
   D - 0026
   E - 0031
[0026] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002A] (24)   loadRoomWithEgo(272,13,5,48);
[0030] (**) }
[0030] (00) stopObjectCode();
[0031] (D8) printEgo("I don't want to dirty my hands.");
[004C] (00) stopObjectCode();
[004D] (9D) if (classOfIs(VAR_ACTIVE_OBJECT2,2)) {
[0052] (88)   if (Var[147] != Var[234]) {
[0057] (8F)     if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005B] (48)       if (VAR_ACTIVE_OBJECT2 == 26) {
[0061] (6F)         if (getState04(26)) {
[0066] (D8)           printEgo("It's too bent to dig with.");
[007D] (18)           goto 00BD;
[0080] (**)         }
[0080] (**)       }
[0080] (42)       startScript(33);
[0082] (**)     }
[0082] (18)   } else {
[0085] (D8)     printEgo("Not with a vicious squirrel in my way.");
[00A6] (**)   }
[00A6] (18) } else {
[00A9] (D8)   printEgo("I can't dig with that.");
[00BD] (**) }
[00BD] (00) stopObjectCode();
END

// Object 268
Events:
   B - 003F
   E - 002A
  13 - 0083
[002A] (D8) printEgo("No way, it'll bite me!");
[003E] (00) stopObjectCode();
[003F] (48) if (VAR_ACTIVE_OBJECT2 == 51) {
[0045] (18) } else {
[0048] (9D)   if (classOfIs(VAR_ACTIVE_OBJECT2,2)) {
[004D] (48)     if (VAR_EGO == 1) {
[0053] (42)       startScript(144);
[0055] (18)       goto 00A4;
[0058] (**)     }
[0058] (D8)     printEgo("That might kill it!");
[006A] (18)   } else {
[006D] (D8)     printEgo("That won't do any good.");
[0082] (**)   }
[0082] (00)   stopObjectCode();
[0083] (48)   unless (VAR_ACTIVE_OBJECT2 == 51) goto 00BA;
[0089] (**) }
[0089] (9A) Var[147] = Var[235];
[008C] (D8) printEgo("It took them and left!");
[00A0] (29) setOwnerOf(51,0);
[00A4] (19) doSentence(254,269,0,1);
[00AB] (47) clearState08(268);
[00AE] (57) setState02(268);
[00B1] (47) clearState08(269);
[00B4] (47) clearState08(270);
[00B7] (18) goto 00D2;
[00BA] (D8) printEgo("It doesn't seem to want it.");
[00D2] (00) stopObjectCode();
END

// Object 269
Events:
  FD - 0013
[0013] (05) drawObject(268,255,255);
[0018] (80) breakHere();
[0019] (66) Var[45] = getClosestObjActor(268);
[001D] (C3) VAR_RESULT = getActorX(Var[45]);
[0020] (44) unless (VAR_RESULT > 23) goto 0018;
[0026] (16) Var[46] = getRandomNr(2);
[0029] (5A) Var[46] += 268;
[002D] (48) if (Var[46] == 269) {
[0033] (1C)   startSound(93);
[0035] (31)   VAR_RESULT = getBitVar(1554,0);
[003A] (28)   if (!VAR_RESULT) {
[003E] (48)     if (VAR_EGO == 1) {
[0044] (19)       doSentence(253,270,0,1);
[004B] (**)     }
[004B] (**)   }
[004B] (**) }
[004B] (85) drawObject(Var[46],255,255);
[004F] (80) breakHere();
[0050] (66) Var[45] = getClosestObjActor(268);
[0054] (C3) VAR_RESULT = getActorX(Var[45]);
[0057] (78) unless (VAR_RESULT < 23) goto 0026;
[005D] (18) goto 0013;
[0060] (00) stopObjectCode();
END

// Object 270
Events:
  FD - 0013
[0013] (5B) setBitVar(1554,0,Var[235]);
[0018] (DB) setBitVar(1559,Var[235],Var[235]);
[001D] (48) if (VAR_ACTIVE_OBJECT2 == 268) {
[0023] (18) } else {
[0026] (40)   cutscene();
[0027] (58)   beginOverride();
[0028] (18)   goto 0175;
[002B] (11)   animateActor(1,255);
[002E] (23)   Var[48] = getActorY(1);
[0031] (2E)   delay(60);
[0035] (D8)   printEgo("There's that two-headed squirrel!");
[0055] (AE)   waitForMessage();
[0056] (11)   animateActor(1,246);
[0059] (80)   breakHere();
[005A] (D8)   printEgo("Lemme think^what would be a good\x01headline?");
[0081] (AE)   waitForMessage();
[0082] (2E)   delay(60);
[0086] (D8)   printEgo("How about^ TWO-HEADED SQUIRREL\x01ATTACKS TABLOID REPORTER.");
[00BB] (43)   Var[66] = getActorX(1);
[00BE] (3A)   Var[66] -= 18;
[00C2] (7E)   walkActorTo(1,Var[66],Var[48]);
[00C6] (3B)   waitForActor(1);
[00C8] (11)   animateActor(1,246);
[00CB] (AE)   waitForMessage();
[00CC] (2E)   delay(60);
[00D0] (D8)   printEgo("Maybe^ TWO-HEADED SQUIRREL\x01DEVOURS SEATTLE AND TACOMA.");
[0103] (43)   Var[66] = getActorX(1);
[0106] (5A)   Var[66] += 19;
[010A] (7E)   walkActorTo(1,Var[66],Var[48]);
[010E] (3B)   waitForActor(1);
[0110] (11)   animateActor(1,246);
[0113] (AE)   waitForMessage();
[0114] (2E)   delay(60);
[0118] (D8)   printEgo("VICIOUS TABLOID REPORTER TURNS\x01TWO-HEADED SQUIRREL INTO MONSTER.");
[0154] (3E)   walkActorTo(1,19,Var[48]);
[0158] (3B)   waitForActor(1);
[015A] (11)   animateActor(1,246);
[015D] (AE)   waitForMessage();
[015E] (2E)   delay(60);
[0162] (1E)   walkActorTo(1,19,63);
[0166] (3B)   waitForActor(1);
[0168] (D8)   printEgo("I hate my job!");
[0175] (A8)   if (VAR_OVERRIDE) {
[0179] (14)     print(255,"");
[017C] (**)   }
[017C] (C0)   endCutscene();
[017D] (**) }
[017D] (00) stopObjectCode();
END

// Object 271
Events:
   D - 0020
   E - 0032
[0020] (D8) printEgo("It's way too high!");
[0031] (00) stopObjectCode();
[0032] (2F) if (!getState04(271)) {
[0037] (27)   setState04(271);
[003A] (11)   animateActor(1,246);
[003D] (D8)   printEgo("Come on^ get real.");
[004E] (**) }
[004E] (00) stopObjectCode();
END
