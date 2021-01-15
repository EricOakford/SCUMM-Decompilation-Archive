/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 51: SCUMM Bar Kitchen (kitchen)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(2,1)
[000D] (33)   RoomColor(5,4)
[0013] (33)   RoomColor(10,8)
[0019] (**) }
[0019] (2A) startScript(200,[],F);
[001C] (2A) startScript(202,[],F);
[001F] (10) VAR_RESULT = getObjectOwner(306);
[0024] (48) if (VAR_RESULT == 15) {
[002B] (0A)   startScript(206,[]);
[002E] (**) }
[002E] (0F) if (getState(304) == 1) {
[0034] (30)   setBoxFlags(3,0);
[0038] (30)   setBoxFlags(4,0);
[003C] (0A)   startScript(205,[]);
[003F] (18) } else {
[0042] (30)   setBoxFlags(3,128);
[0046] (30)   setBoxFlags(4,128);
[004A] (**) }
[004A] (00) stopObjectCode();
END

// EX
[0000] (2D) putActorInRoom(7,0);
[0003] (00) stopObjectCode();
END

Script# 200
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (1A)   Local[0] = 300;
[000C] (85)   drawObject(Local[0],255,255);
[0013] (80)   breakHere();
[0014] (80)   breakHere();
[0015] (46)   Local[0]++;
[0018] (44)   unless (Local[0] > 302) goto 000C;
[001F] (18)   goto 0007;
[0022] (**) }
[0022] (A0) stopObjectCode();
END

Script# 202
[0000] (44) if (VAR_MACHINE_SPEED > 0) {
[0007] (1A)   Local[0] = 0;
[000C] (16)   Local[1] = getRandomNr(1);
[0010] (28)   if (!Local[1]) {
[0015] (AC)     Exprmode Local[2] = (Local[0] + 345);
[0020] (8F)     if (getState(Local[2]) == 0) {
[0026] (85)       drawObject(Local[2],255,255);
[002D] (18)     } else {
[0030] (5A)       Local[2] += 4;
[0035] (85)       drawObject(Local[2],255,255);
[003C] (**)     }
[003C] (**)   }
[003C] (46)   Local[0]++;
[003F] (44)   unless (Local[0] > 3) goto 000C;
[0046] (80)   breakHere();
[0047] (18)   goto 0007;
[004A] (**) }
[004A] (A0) stopObjectCode();
END

Script# 204 // Step on Plank
[0000] (40) cutscene([2]);
[0005] (AE) WaitForActor(VAR_EGO);
[0009] (91) animateCostume(VAR_EGO,2);
[000D] (80) breakHere();
[000E] (28) if (!Bit[134]) {
[0013] (05)   drawObject(341,255,255);
[001A] (1D)   if (classOfIs(306,[134])) {
[0023] (0A)     startScript(208,[]);
[0026] (**)   }
[0026] (18) } else {
[0029] (D8)   printEgo([Text("The plank's stuck.")]);
[003E] (**) }
[003E] (80) breakHere();
[003F] (91) animateCostume(VAR_EGO,3);
[0043] (80) breakHere();
[0044] (81) putActor(VAR_EGO,294,131);
[004B] (05) drawObject(307,255,255);
[0052] (C0) endCutscene();
[0053] (A0) stopObjectCode();
END

Script# 205
[0000] (80) breakHere();
[0001] (B4) VAR_RESULT = getDist(VAR_EGO,307);
[0008] (78) unless (VAR_RESULT < 3) goto 0000;
[000F] (0A) startScript(204,[]);
[0012] (80) breakHere();
[0013] (68) VAR_RESULT = isScriptRunning(204);
[0017] (28) unless (!VAR_RESULT) goto 0012;
[001C] (18) goto 0000;
[001F] (A0) stopObjectCode();
END

Script# 206
[0000] (13) ActorOps(7,[Init(),Costume(21),Scale(255)]);
[0008] (5D) setClass(7,[150]);
[000F] (28) if (!Var[388]) {
[0014] (80)   breakHere();
[0015] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[001A] (44)   unless (VAR_RESULT > 170) goto 0014;
[0021] (1A)   Var[388] = 1;
[0026] (0A)   startScript(207,[]);
[0029] (18) } else {
[002C] (5D)   setClass(306,[134]);
[0033] (2D)   putActorInRoom(7,51);
[0036] (01)   putActor(7,252,133);
[003C] (11)   animateCostume(7,248);
[003F] (11)   animateCostume(7,8);
[0042] (**) }
[0042] (A0) stopObjectCode();
END

Script# 207
[0000] (2D) putActorInRoom(7,51);
[0003] (01) putActor(7,340,100);
[0009] (1E) walkActorTo(7,260,120);
[000F] (AE) WaitForActor(7);
[0012] (01) putActor(7,252,133);
[0018] (11) animateCostume(7,6);
[001B] (80) breakHere();
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (80) breakHere();
[001F] (80) breakHere();
[0020] (80) breakHere();
[0021] (5D) setClass(306,[134]);
[0028] (11) animateCostume(7,8);
[002B] (A0) stopObjectCode();
END

Script# 208
[0000] (62) stopScript(213);
[0002] (5D) setClass(306,[6]);
[0009] (5D) setClass(306,[144]);
[0010] (11) animateCostume(7,10);
[0013] (1A) Local[1] = 0;
[0018] (1A) Local[0] = 5;
[001D] (AC) Exprmode Local[1] = (Local[1] + (Local[0] * 6));
[002C] (13) ActorOps(7,[Elevation(Local[1])]);
[0032] (80) breakHere();
[0033] (C6) Local[0]--;
[0036] (78) unless (Local[0] < 1) goto 001D;
[003D] (48) if (Var[389] == 0) {
[0044] (0A)   startScript(209,[]);
[0047] (80)   breakHere();
[0048] (68)   VAR_RESULT = isScriptRunning(209);
[004C] (28)   unless (!VAR_RESULT) goto 0047;
[0051] (48) } else if (Var[389] == 1) {
[005B] (0A)   startScript(210,[]);
[005E] (80)   breakHere();
[005F] (68)   VAR_RESULT = isScriptRunning(210);
[0063] (28)   unless (!VAR_RESULT) goto 005E;
[0068] (18) } else {
[006B] (0A)   startScript(211,[]);
[006E] (80)   breakHere();
[006F] (68)   VAR_RESULT = isScriptRunning(211);
[0073] (28)   unless (!VAR_RESULT) goto 006E;
[0078] (**) }
[0078] (10) VAR_RESULT = getObjectOwner(306);
[007D] (48) if (VAR_RESULT == 15) {
[0084] (11)   animateCostume(7,8);
[0087] (5A)   Var[389] += 1;
[008C] (5D)   setClass(306,[15]);
[0093] (18) } else {
[0096] (0A)   startScript(213,[]);
[0099] (**) }
[0099] (A0) stopObjectCode();
END

Script# 209
[0000] (1A) Local[1] = 90;
[0005] (11) animateCostume(7,3);
[0008] (1A) Local[0] = 1;
[000D] (AC) Exprmode Local[1] = (Local[1] - (Local[0] * 6));
[001C] (13) ActorOps(7,[Elevation(Local[1])]);
[0022] (80) breakHere();
[0023] (46) Local[0]++;
[0026] (44) unless (Local[0] > 5) goto 000D;
[002D] (5D) setClass(306,[134]);
[0034] (A0) stopObjectCode();
END

Script# 210
[0000] (1A) Local[1] = 88;
[0005] (43) Local[2] = getActorX(7);
[000A] (23) Local[3] = getActorY(7);
[000F] (11) animateCostume(7,3);
[0012] (11) animateCostume(7,249);
[0015] (13) ActorOps(7,[Elevation(Local[1])]);
[001B] (80) breakHere();
[001C] (1A) Local[0] = 1;
[0021] (AC) Exprmode Local[1] = (Local[1] - (Local[0] * 4));
[0030] (13) ActorOps(7,[Elevation(Local[1])]);
[0036] (5A) Local[2] += 6;
[003B] (61) putActor(7,Local[2],Local[3]);
[0041] (80) breakHere();
[0042] (46) Local[0]++;
[0045] (44) unless (Local[0] > 5) goto 0021;
[004C] (13) ActorOps(7,[WalkSpeed(4,3)]);
[0052] (3E) walkActorTo(7,260,Local[3]);
[0058] (1A) Local[0] = 1;
[005D] (AC) Exprmode Local[1] = (Local[1] - (Local[0] * 2));
[006C] (13) ActorOps(7,[Elevation(Local[1])]);
[0072] (80) breakHere();
[0073] (46) Local[0]++;
[0076] (44) unless (Local[0] > 4) goto 005D;
[007D] (13) ActorOps(7,[Elevation(0)]);
[0083] (01) putActor(7,252,133);
[0089] (11) animateCostume(7,6);
[008C] (5D) setClass(306,[134]);
[0093] (80) breakHere();
[0094] (80) breakHere();
[0095] (80) breakHere();
[0096] (80) breakHere();
[0097] (80) breakHere();
[0098] (80) breakHere();
[0099] (A0) stopObjectCode();
END

Script# 211
[0000] (1A) Local[1] = 88;
[0005] (43) Local[2] = getActorX(7);
[000A] (23) Local[3] = getActorY(7);
[000F] (13) ActorOps(7,[WalkSpeed(7,7)]);
[0015] (3E) walkActorTo(7,310,Local[3]);
[001B] (1A) Local[0] = 1;
[0020] (5A) Local[1] += 3;
[0025] (13) ActorOps(7,[Elevation(Local[1])]);
[002B] (80) breakHere();
[002C] (46) Local[0]++;
[002F] (44) unless (Local[0] > 10) goto 0020;
[0036] (13) ActorOps(7,[WalkSpeed(4,4)]);
[003C] (3E) walkActorTo(7,290,Local[3]);
[0042] (13) ActorOps(7,[Elevation(Local[1])]);
[0048] (80) breakHere();
[0049] (1A) Local[0] = 1;
[004E] (AC) Exprmode Local[1] = (Local[1] - (Local[0] * 2));
[005D] (13) ActorOps(7,[Elevation(Local[1])]);
[0063] (80) breakHere();
[0064] (46) Local[0]++;
[0067] (44) unless (Local[0] > 5) goto 004E;
[006E] (3E) walkActorTo(7,250,Local[3]);
[0074] (1A) Local[0] = 1;
[0079] (3A) Local[1] -= 4;
[007E] (13) ActorOps(7,[Elevation(Local[1])]);
[0084] (80) breakHere();
[0085] (46) Local[0]++;
[0088] (44) unless (Local[0] > 3) goto 0079;
[008F] (44) if (Var[389] > 2) {
[0096] (0A)   startScript(212,[]);
[0099] (80)   breakHere();
[009A] (68)   VAR_RESULT = isScriptRunning(212);
[009E] (28)   unless (!VAR_RESULT) goto 0099;
[00A3] (**) }
[00A3] (3E) walkActorTo(7,290,Local[3]);
[00A9] (1A) Local[0] = 1;
[00AE] (3A) Local[1] -= 3;
[00B3] (13) ActorOps(7,[Elevation(Local[1])]);
[00B9] (80) breakHere();
[00BA] (46) Local[0]++;
[00BD] (44) unless (Local[0] > 7) goto 00AE;
[00C4] (3E) walkActorTo(7,260,Local[3]);
[00CA] (1A) Local[0] = 1;
[00CF] (3A) Local[1] -= 5;
[00D4] (13) ActorOps(7,[Elevation(Local[1])]);
[00DA] (80) breakHere();
[00DB] (46) Local[0]++;
[00DE] (44) unless (Local[0] > 8) goto 00CF;
[00E5] (44) if (Var[389] > 3) {
[00EC] (0A)   startScript(212,[]);
[00EF] (80)   breakHere();
[00F0] (68)   VAR_RESULT = isScriptRunning(212);
[00F4] (28)   unless (!VAR_RESULT) goto 00EF;
[00F9] (1A)   Var[389] = 1;
[00FE] (**) }
[00FE] (13) ActorOps(7,[Elevation(0)]);
[0104] (01) putActor(7,252,133);
[010A] (11) animateCostume(7,6);
[010D] (5D) setClass(306,[134]);
[0114] (80) breakHere();
[0115] (80) breakHere();
[0116] (80) breakHere();
[0117] (80) breakHere();
[0118] (80) breakHere();
[0119] (80) breakHere();
[011A] (A0) stopObjectCode();
END

Script# 212
[0000] (06) Local[1] = getActorElevation(7);
[0004] (23) Local[2] = getActorY(7);
[0009] (13) ActorOps(7,[WalkSpeed(6,6)]);
[000F] (3E) walkActorTo(7,400,Local[2]);
[0015] (1A) Local[0] = 1;
[001A] (5A) Local[1] += 2;
[001F] (13) ActorOps(7,[Elevation(Local[1])]);
[0025] (80) breakHere();
[0026] (46) Local[0]++;
[0029] (44) unless (Local[0] > 9) goto 001A;
[0030] (13) ActorOps(7,[WalkSpeed(4,4)]);
[0036] (3E) walkActorTo(7,200,Local[2]);
[003C] (1A) Local[0] = 1;
[0041] (3A) Local[1] -= 5;
[0046] (13) ActorOps(7,[Elevation(Local[1])]);
[004C] (80) breakHere();
[004D] (46) Local[0]++;
[0050] (44) unless (Local[0] > 6) goto 0041;
[0057] (13) ActorOps(7,[WalkSpeed(5,5)]);
[005D] (3E) walkActorTo(7,200,Local[2]);
[0063] (1A) Local[0] = 1;
[0068] (5A) Local[1] += 2;
[006D] (13) ActorOps(7,[Elevation(Local[1])]);
[0073] (80) breakHere();
[0074] (46) Local[0]++;
[0077] (44) unless (Local[0] > 6) goto 0068;
[007E] (A0) stopObjectCode();
END

Script# 213
[0000] (11) animateCostume(7,10);
[0003] (2E) delay(30);
[0007] (1A) Bit[134] = 1;
[000C] (11) animateCostume(7,248);
[000F] (2E) delay(20);
[0013] (11) animateCostume(7,250);
[0016] (2E) delay(20);
[001A] (11) animateCostume(7,248);
[001D] (2E) delay(20);
[0021] (11) animateCostume(7,250);
[0024] (2E) delay(20);
[0028] (11) animateCostume(7,249);
[002B] (2E) delay(20);
[002F] (11) animateCostume(7,251);
[0032] (2E) delay(20);
[0036] (11) animateCostume(7,249);
[0039] (2E) delay(20);
[003D] (11) animateCostume(7,7);
[0040] (80) breakHere();
[0041] (80) breakHere();
[0042] (80) breakHere();
[0043] (80) breakHere();
[0044] (80) breakHere();
[0045] (80) breakHere();
[0046] (80) breakHere();
[0047] (01) putActor(7,260,120);
[004D] (1E) walkActorTo(7,340,95);
[0053] (AE) WaitForActor(7);
[0056] (2D) putActorInRoom(7,0);
[0059] (A0) stopObjectCode();
END

// Object 300
Events:
END

// Object 301
Events:
END

// Object 302
Events:
END

// Object 303: Pot
Events:
   3 - 006C
   8 - 0065
   9 - 003D
   B - 002D
  5A - 0027
[0027] (1A) Var[194] = 9;
[002C] (00) stopObjectCode();
[002D] (10) VAR_RESULT = getObjectOwner(303);
[0032] (48) if (VAR_RESULT == 15) {
[0039] (D0)   pickupObject(VAR_ME);
[003C] (**) }
[003C] (00) stopObjectCode();
[003D] (D8) printEgo([Text("Someone cooked a headcheese in this.")]);
[0064] (00) stopObjectCode();
[0065] (79) doSentence(8,Local[0],VAR_ME);
[006B] (00) stopObjectCode();
[006C] (79) doSentence(3,Local[0],VAR_ME);
[0072] (00) stopObjectCode();
END

// Object 304: Door to Outside
Events:
   1 - 0025
   2 - 0051
   8 - 0025
  5A - 0069
[0025] (5D) setClass(304,[152]);
[002C] (30) setBoxFlags(3,0);
[0030] (30) setBoxFlags(4,0);
[0034] (10) VAR_RESULT = getObjectOwner(306);
[0039] (48) if (VAR_RESULT == 15) {
[0040] (5D)   setClass(306,[24]);
[0047] (**) }
[0047] (0A) startScript(205,[]);
[004A] (0A) startScript(26,[304]);
[0050] (00) stopObjectCode();
[0051] (D8) printEgo([Text("It's already closed.")]);
[0068] (00) stopObjectCode();
[0069] (0F) if (getState(304) == 0) {
[006F] (1A)   Var[194] = 1;
[0074] (18) } else {
[0077] (1A)   Var[194] = 2;
[007C] (**) }
[007C] (00) stopObjectCode();
END

// Object 305: Door to Bar
Events:
   1 - 0025
   2 - 002F
   A - 0039
  5A - 0048
[0025] (0A) startScript(26,[305,354]);
[002E] (00) stopObjectCode();
[002F] (0A) startScript(27,[305,354]);
[0038] (00) stopObjectCode();
[0039] (0F) if (getState(305) == 1) {
[003F] (24)   loadRoomWithEgo(354,52,-1,-1);
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (0F) if (getState(305) == 0) {
[004E] (1A)   Var[194] = 1;
[0053] (18) } else {
[0056] (1A)   Var[194] = 2;
[005B] (**) }
[005B] (00) stopObjectCode();
END

// Object 306: Red Herring
Events:
   3 - 01D0
   8 - 0124
   9 - 00AF
   B - 0038
[0038] (0F) if (getState(304) == 1) {
[003E] (10)   VAR_RESULT = getObjectOwner(306);
[0043] (48)   if (VAR_RESULT == 15) {
[004A] (1D)     if (classOfIs(306,[6])) {
[0053] (50)       pickupObject(306);
[0056] (18)     } else {
[0059] (D8)       printEgo([Text("I think that bird will peck my hand off.")]);
[0084] (**)     }
[0084] (**)   }
[0084] (18) } else {
[0087] (D8)   printEgo([Text("It'd be easier if the door was open.")]);
[00AE] (**) }
[00AE] (00) stopObjectCode();
[00AF] (90) VAR_RESULT = getObjectOwner(VAR_ME);
[00B4] (88) if (VAR_RESULT != VAR_EGO) {
[00BB] (0F)   if (getState(304) == 0) {
[00C1] (D8)     printEgo([Text("I can't see through the door.")]);
[00E1] (18)   } else {
[00E4] (D8)     printEgo([Text("I think it's a red herring.")]);
[0102] (**)   }
[0102] (18) } else {
[0105] (D8)   printEgo([Text("I think it's a red herring.")]);
[0123] (**) }
[0123] (00) stopObjectCode();
[0124] (10) VAR_RESULT = getObjectOwner(306);
[0129] (C8) if (VAR_RESULT == VAR_EGO) {
[0130] (48)   if (Local[0] == 343) {
[0137] (D8)     printEgo([Text("I don't like fish soup.")]);
[0151] (48)   } else if (Local[0] == 303) {
[015B] (D8)     printEgo([Text("Yuck!  The pot isn't clean." + wait() + "I think I'll just hold onto this fish.")]);
[01A1] (18)   } else {
[01A4] (0A)     startScript(3,[]);
[01A7] (**)   }
[01A7] (18) } else {
[01AA] (D8)   printEgo([Text("I'd better pick the fish up first.")]);
[01CF] (**) }
[01CF] (00) stopObjectCode();
[01D0] (79) doSentence(3,Local[0],VAR_ME);
[01D6] (00) stopObjectCode();
END

// Object 307
Events:
END

// Object 308: Hunk of Meat
Events:
   8 - 0069
   9 - 0044
   B - 0034
  5A - 00E4
[0034] (10) VAR_RESULT = getObjectOwner(308);
[0039] (48) if (VAR_RESULT == 15) {
[0040] (50)   pickupObject(308);
[0043] (**) }
[0043] (00) stopObjectCode();
[0044] (D8) printEgo([Text("It's some sort of meat substance.")]);
[0068] (00) stopObjectCode();
[0069] (48) if (Local[0] == 303) {
[0070] (D8)   printEgo([Text("The hunk is too big.")]);
[0087] (48) } else if (Local[0] == 343) {
[0091] (91)   animateCostume(VAR_EGO,12);
[0095] (80)   breakHere();
[0096] (80)   breakHere();
[0097] (80)   breakHere();
[0098] (80)   breakHere();
[0099] (29)   setOwnerOf(308,14);
[009D] (54)   setObjectName(343,"hunk of meat soup");
[00B2] (1A)   Var[193] = 0;
[00B7] (91)   animateCostume(VAR_EGO,3);
[00BB] (D8)   printEgo([Text("This will take a while to cook.")]);
[00DD] (18) } else {
[00E0] (0A)   startScript(3,[]);
[00E3] (**) }
[00E3] (00) stopObjectCode();
[00E4] (10) VAR_RESULT = getObjectOwner(308);
[00E9] (48) if (VAR_RESULT == 15) {
[00F0] (1A)   Var[194] = 9;
[00F5] (18) } else {
[00F8] (1A)   Var[194] = 8;
[00FD] (**) }
[00FD] (00) stopObjectCode();
END

// Objects 309-341
Events:
END

// Object 342: Barrel
Events:
   8 - 005B
   9 - 0024
  5A - 00A7
[0024] (D8) printEgo([Text("I think it's full of that foul stuff pirates drink.")]);
[005A] (00) stopObjectCode();
[005B] (48) if (Local[0] == 303) {
[0062] (D8)   printEgo([Text("I don't want that much grog.")]);
[0081] (48) } else if (Local[0] == 458) {
[008B] (D8)   printEgo([Text("That didn't do anything.")]);
[00A6] (**) }
[00A6] (00) stopObjectCode();
[00A7] (1A) Var[194] = 9;
[00AC] (00) stopObjectCode();
END

// Object 343: Pot of Soup
Events:
   6 - 0038
   7 - 0038
   8 - 0078
   9 - 0038
   B - 0038
  5A - 00CC
[0038] (10) VAR_RESULT = getObjectOwner(308);
[003D] (08) if (VAR_RESULT != 14) {
[0044] (D8)   printEgo([Text("It's boiling hot.")]);
[0058] (18) } else {
[005B] (D8)   printEgo([Text("The meat's still cooking.")]);
[0077] (**) }
[0077] (00) stopObjectCode();
[0078] (48) if (Local[0] == 303) {
[007F] (D8)   printEgo([Text("I don't want to put soup in this dirty pot.")]);
[00AD] (18) } else {
[00B0] (D8)   printEgo([Text("It's already being used.")]);
[00CB] (**) }
[00CB] (00) stopObjectCode();
[00CC] (1A) Var[194] = 9;
[00D1] (00) stopObjectCode();
END

// Object 344: Table
Events:
END

// Object 345
Events:
END

// Object 346
Events:
END

// Object 347
Events:
END

// Object 348
Events:
END

// Object 349
Events:
END

// Object 350
Events:
END

// Object 351
Events:
END

// Object 352
Events:
END