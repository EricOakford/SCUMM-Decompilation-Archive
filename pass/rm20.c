/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 20: College Hall (col-hall)
 */

// EN
[0000] (68) VAR_RESULT = isScriptRunning(73);
[0004] (28) if (!VAR_RESULT) {
[0009] (13)   ActorOps(1,[Costume(1)]);
[000E] (**) }
[000E] (1D) if (classOfIs(168,[134])) {
[0017] (1A)   Var[155] = 166;
[001C] (1A)   Var[156] = 22;
[0021] (18) } else {
[0024] (1A)   Var[155] = 195;
[0029] (1A)   Var[156] = 23;
[002E] (**) }
[002E] (2A) startScript(203,[],F);
[0031] (2A) startScript(204,[],F);
[0034] (48) if (VAR_MACHINE_SPEED == 1) {
[003B] (6A)   startScript(205,[109,3],F,R);
[0044] (6A)   startScript(205,[112,15],F,R);
[004D] (6A)   startScript(205,[118,3],F,R);
[0056] (6A)   startScript(205,[126,3],F,R);
[005F] (48) } else if (VAR_MACHINE_SPEED == 2) {
[0069] (6A)   startScript(205,[115,20],F,R);
[0072] (6A)   startScript(205,[129,20],F,R);
[007B] (6A)   startScript(205,[132,15],F,R);
[0084] (6A)   startScript(205,[135,15],F,R);
[008D] (6A)   startScript(205,[140,10],F,R);
[0096] (**) }
[0096] (30) setBoxFlags(5,0);
[009A] (03) VAR_RESULT = getActorRoom(4);
[009E] (C8) if (VAR_RESULT == VAR_ROOM) {
[00A5] (30)   setBoxFlags(5,128);
[00A9] (1A)   Var[100] = 28;
[00AE] (0A)   startScript(57,[]);
[00B1] (2A)   startScript(200,[],F);
[00B4] (**) }
[00B4] (00) stopObjectCode();
END

// EX
[0000] (1A) Var[100] = 0;
[0005] (00) stopObjectCode();
END

Script# 200
[0000] (A6) setVarRange(Local[2],2,[700,448]);
[0008] (1A) Local[1] = 0;
[000D] (AC) Exprmode Local[0] = ((<VAR_RESULT = getRandomNr(10)> + 7) * 60);
[001E] (AE) WaitForActor(4);
[0021] (2A) startScript(201,[],F);
[0024] (80) breakHere();
[0025] (68) VAR_RESULT = isScriptRunning(73);
[0029] (28) unless (!VAR_RESULT) goto 0024;
[002E] (2B) delayVariable(Local[0]);
[0031] (62) stopScript(201);
[0033] (5E) walkActorTo(4,Local[2 + Local[1]],106);
[003B] (AE) WaitForActor(4);
[003E] (46) Local[1]++;
[0041] (44) unless (Local[1] > 1) goto 000D;
[0048] (18) goto 0008;
[004B] (A0) stopObjectCode();
END

Script# 201
[0000] (11) animateCostume(4,251);
[0003] (11) animateCostume(4,19);
[0006] (AC) Exprmode Local[0] = ((<VAR_RESULT = getRandomNr(3)> + 1) * 60);
[0017] (2B) delayVariable(Local[0]);
[001A] (11) animateCostume(4,18);
[001D] (AC) Exprmode Local[0] = ((<VAR_RESULT = getRandomNr(2)> + 2) * 60);
[002E] (2B) delayVariable(Local[0]);
[0031] (18) goto 0003;
[0034] (A0) stopObjectCode();
END

Script# 202
[0000] (AE) WaitForActor(1);
[0003] (11) animateCostume(1,6);
[0006] (2E) delay(180);
[000A] (11) animateCostume(12,6);
[000D] (2E) delay(180);
[0011] (11) animateCostume(1,7);
[0014] (11) animateCostume(12,7);
[0017] (2E) delay(180);
[001B] (11) animateCostume(12,8);
[001E] (2E) delay(180);
[0022] (11) animateCostume(1,8);
[0025] (A0) stopObjectCode();
END

Script# 203
[0000] (05) drawObject(138,255,255);
[0007] (2E) delay(20);
[000B] (05) drawObject(139,255,255);
[0012] (2E) delay(20);
[0016] (18) goto 0000;
[0019] (A0) stopObjectCode();
END

Script# 204
[0000] (43) Local[0] = getActorX(1);
[0005] (04) if (Local[0] <= 510) {
[000C] (1A)   Local[1] = 121;
[0011] (04) } else if (Local[0] <= 581) {
[001B] (1A)   Local[1] = 122;
[0020] (04) } else if (Local[0] <= 652) {
[002A] (1A)   Local[1] = 123;
[002F] (04) } else if (Local[0] <= 722) {
[0039] (1A)   Local[1] = 124;
[003E] (18) } else {
[0041] (1A)   Local[1] = 125;
[0046] (**) }
[0046] (88) if (Local[2] != Local[1]) {
[004D] (9A)   Local[2] = Local[1];
[0052] (85)   drawObject(Local[1],255,255);
[0059] (**) }
[0059] (80) breakHere();
[005A] (18) goto 0000;
[005D] (A0) stopObjectCode();
END

Script# 205
[0000] (AC) Exprmode Local[3] = (<VAR_RESULT = getRandomNr(2)> + Local[0]);
[000D] (85) drawObject(Local[3],255,255);
[0014] (AC) Exprmode Local[2] = ((<VAR_RESULT = getRandomNr(7)> + 3) * Local[1]);
[0025] (2B) delayVariable(Local[2]);
[0028] (18) goto 0000;
[002B] (A0) stopObjectCode();
END

Script# 206 // Open classroom door
[0000] (40) cutscene([]);
[0002] (0A) startScript(26,[]);
[0005] (80) breakHere();
[0006] (D8) printEgo([Text("There's a class in session.")]);
[0024] (2E) delay(60);
[0028] (59) doSentence(2,VAR_ME,0);
[002E] (AE) WaitForSentence();
[0030] (80) breakHere();
[0031] (11) animateCostume(1,246);
[0034] (C0) endCutscene();
[0035] (A0) stopObjectCode();
END

// Object 100: Door to Indy's Office
Events:
   1 - 0036
   2 - 0040
   A - 0022
[0022] (8F) if (getState(VAR_ME) == 1) {
[0028] (14)   print(255,[]);
[002B] (AE)   WaitForMessage();
[002D] (24)   loadRoomWithEgo(203,24,-1,-1);
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (0A) startScript(26,[VAR_ME,203]);
[003F] (00) stopObjectCode();
[0040] (0A) startScript(27,[VAR_ME,203]);
[0049] (00) stopObjectCode();
END

// Object 101: Door to Class 1
Events:
   1 - 001F
   2 - 0023
[001F] (0A) startScript(206,[]);
[0022] (00) stopObjectCode();
[0023] (0A) startScript(27,[]);
[0026] (00) stopObjectCode();
END

// Object 102: Door to Class 2
Events:
   1 - 001F
   2 - 0023
[001F] (0A) startScript(206,[]);
[0022] (00) stopObjectCode();
[0023] (0A) startScript(27,[]);
[0026] (00) stopObjectCode();
END

// Object 103: Door to Outside
Events:
   1 - 004F
   2 - 0059
   A - 0022
[0022] (8F) if (getState(VAR_ME) == 1) {
[0028] (48)   if (Var[156] == 22) {
[002F] (14)     print(255,[]);
[0032] (AE)     WaitForMessage();
[0034] (0A)     startScript(42,[]);
[0037] (18)   } else {
[003A] (14)     print(255,[]);
[003D] (AE)     WaitForMessage();
[003F] (0C)     Resource.lockCostume(3);
[0042] (0C)     Resource.loadCostume(3);
[0045] (E4)     loadRoomWithEgo(Var[155],Var[156],-1,-1);
[004E] (**)   }
[004E] (**) }
[004E] (00) stopObjectCode();
[004F] (0A) startScript(26,[VAR_ME,Var[155]]);
[0058] (00) stopObjectCode();
[0059] (0A) startScript(27,[VAR_ME,Var[155]]);
[0062] (00) stopObjectCode();
END

// Object 104: Drinking Fountain
Events:
   4 - 002C
   8 - 002C
[002C] (A8) if (Local[0]) {
[0031] (40)   cutscene([]);
[0033] (58)   beginOverride();
[0035] (18)   goto 0041;
[0038] (11)   animateCostume(1,10);
[003B] (1C)   startSound(88);
[003D] (2E)   delay(60);
[0041] (3C)   stopSound(88);
[0043] (D8)   printEgo([Text("Well, that didn't work.")]);
[005D] (C0)   endCutscene();
[005E] (18) } else {
[0061] (40)   cutscene([]);
[0063] (58)   beginOverride();
[0065] (18)   goto 0071;
[0068] (11)   animateCostume(1,10);
[006B] (1C)   startSound(88);
[006D] (2E)   delay(180);
[0071] (3C)   stopSound(88);
[0073] (11)   animateCostume(1,3);
[0076] (D8)   printEgo([Text("Tastes great!")]);
[0086] (C0)   endCutscene();
[0087] (**) }
[0087] (00) stopObjectCode();
END

// Object 105: Trophy Case
Events:
   1 - 006E
   6 - 006E
   7 - 006E
   9 - 002C
[002C] (D8) printEgo([Text("It's a bunch of trophies that the Archaeology" + newline() + "Department won.")]);
[006D] (00) stopObjectCode();
[006E] (D8) printEgo([Text("I wouldn't want to take those trophies!")]);
[0098] (00) stopObjectCode();
END

// Object 106: Display Case
Events:
   1 - 0084
   6 - 0084
   7 - 0084
   9 - 002D
[002D] (D8) printEgo([Text("There are various treasures and artifacts that I brought" + newline() + "back from my expeditions.")]);
[0083] (00) stopObjectCode();
[0084] (D8) printEgo([Text("No, they're safe where they are.")]);
[00A7] (00) stopObjectCode();
END

// Object 107: Bulletin Board
Events:
   9 - 0026
[0026] (48) if (Var[354] == 1) {
[002D] (D8)   printEgo([Text("Hmm, build your own rice casserole.")]);
[0053] (48) } else if (Var[354] == 2) {
[005D] (D8)   printEgo([Text("Offered: boxing lessons.  See the coach.")]);
[0088] (48) } else if (Var[354] == 3) {
[0092] (D8)   printEgo([Text("FOR SALE: one space in Dr. Jones' class, best offer.")]);
[00C9] (48) } else if (Var[354] == 4) {
[00D3] (D8)   printEgo([Text("FOR SALE: classic Model T, complete with fuzzy dice.")]);
[010A] (48) } else if (Var[354] == 5) {
[0114] (D8)   printEgo([Text("FOR SALE: complete set of books by Professor Ravenswood.")]);
[014F] (48) } else if (Var[354] == 6) {
[0159] (D8)   printEgo([Text("FOR SALE: 6000 rats, 500 snakes.  Call S. Spielberg.")]);
[0190] (48) } else if (Var[354] == 7) {
[019A] (D8)   printEgo([Text("LOST: Universal peace and love and global unity." + newline() + "If found, please return to T. Hsieh.")]);
[01F3] (48) } else if (Var[354] == 8) {
[01FD] (D8)   printEgo([Text("FOR SALE: 20 rubber ducks. Hardly used. Contact M. Stemmle.")]);
[023B] (48) } else if (Var[354] == 9) {
[0245] (1A)   Var[354] = 0;
[024A] (D8)   printEgo([Text("Help! Tami B. has been kidnapped by Dr. Fred." + newline() + "Meet me at the driveway.  -- Rich.")]);
[029E] (18)   /* goto 02A1; */
[02A1] (**) }
[02A1] (46) Var[354]++;
[02A4] (00) stopObjectCode();
END

// Object 108: Gym
Events:
   A - 001B
[001B] (14) print(255,[]);
[001E] (AE) WaitForMessage();
[0020] (24) loadRoomWithEgo(211,25,70,104);
[0028] (00) stopObjectCode();
END

// Object 109
Events:
END

// Object 110
Events:
END

// Object 111
Events:
END

// Object 112
Events:
END

// Object 113
Events:
END

// Object 114
Events:
END

// Object 115
Events:
END

// Object 116
Events:
END

// Object 117
Events:
END

// Object 118
Events:
END

// Object 119
Events:
END

// Object 120
Events:
END

// Object 121
Events:
END

// Object 122
Events:
END

// Object 123
Events:
END

// Object 124
Events:
END

// Object 125
Events:
END

// Object 126
Events:
END

// Object 127
Events:
END

// Object 128
Events:
END

// Object 129
Events:
END

// Object 130
Events:
END

// Object 131
Events:
END

// Object 132
Events:
END

// Object 133
Events:
END

// Object 134
Events:
END

// Object 135
Events:
END

// Object 136
Events:
END

// Object 137
Events:
END

// Object 138
Events:
END

// Object 139
Events:
END

// Object 140
Events:
END

// Object 141
Events:
END

// Object 142
Events:
END