/**
 * The Secret of Monkey Island Demo
 * 
 * Global Scripts
 */

// Script 1: Game Initialization
[0000] (1A) VAR_TIMER_NEXT = 6;
[0005] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[000A] (1A) VAR_RESTART_KEY = 322;
[000F] (A8) if (VAR_DEBUGMODE) {
[0014] (1A)   VAR_MAINMENU_KEY = 319;
[0019] (**) }
[0019] (1A) VAR_PAUSE_KEY = 32;
[001E] (2C) InitCharset(2);
[0021] (0C) Resource.loadCharset(4);
[0024] (33) SetScreen(0,200)
[002A] (72) loadRoom(0);
[002C] (80) breakHere();
[002D] (27) PutCodeInString(24, "Monkey Island Demo, version 2.0");
[0050] (27) PutCodeInString(4, "Game Paused.  Press SPACE to Continue.");
[007A] (27) PutCodeInString(1, "Insert Disk %c and Press Button to Continue.");
[00AA] (27) PutCodeInString(2, "Unable to Find %02d.LFL, (%c%d) Press Button.");
[00DB] (27) PutCodeInString(3, "Can't read %02d.LFL, (%c%d) Press Button.");
[0108] (27) PutCodeInString(5, "Are you sure you want to restart?  (Y/N)Y");
[0135] (27) PutCodeInString(6, "Are you sure you want to quit?  (Y/N)Y");
[015F] (27) PutCodeInString(7, "Save");
[0167] (27) PutCodeInString(8, "Load");
[016F] (27) PutCodeInString(9, "Play");
[0177] (27) PutCodeInString(10, "Cancel");
[0181] (27) PutCodeInString(11, "Quit");
[0189] (27) PutCodeInString(12, "Ok");
[018F] (27) PutCodeInString(13, "Insert save/load game disk");
[01AD] (27) PutCodeInString(14, "You must enter a name");
[01C6] (27) PutCodeInString(15, "The game was NOT saved");
[01E0] (27) PutCodeInString(16, "The game was NOT loaded");
[01FB] (27) PutCodeInString(17, "Saving '%s'");
[020A] (27) PutCodeInString(18, "Loading '%s'");
[021A] (27) PutCodeInString(19, "Name your SAVE game");
[0231] (27) PutCodeInString(20, "Select a game to LOAD");
[024A] (27) PutCodeInString(21, "@@@@@@@@@@@@@@@@");
[025E] (27) SetStringChar(21,0,0);
[0263] (27) SetStringChar(21,1,1);
[0268] (27) SetStringChar(21,2,11);
[026D] (27) SetStringChar(21,3,3);
[0272] (27) SetStringChar(21,4,0);
[0277] (27) SetStringChar(21,5,11);
[027C] (27) SetStringChar(21,6,11);
[0281] (27) SetStringChar(21,7,3);
[0286] (27) SetStringChar(21,8,1);
[028B] (27) SetStringChar(21,9,0);
[0290] (27) SetStringChar(21,10,1);
[0295] (27) SetStringChar(21,11,11);
[029A] (27) SetStringChar(21,12,9);
[029F] (0C) Resource.lockScript(95);
[02A2] (0C) Resource.loadScript(95);
[02A5] (0C) Resource.lockScript(2);
[02A8] (0C) Resource.loadScript(2);
[02AB] (0C) Resource.lockScript(28);
[02AE] (0C) Resource.loadScript(28);
[02B1] (26) setVarRange(Var[122],7,[0,176,176,176,176,176,176]);
[02BC] (26) setVarRange(Var[129],7,[0,152,160,168,176,184,192]);
[02C7] (1A) Var[118] = 6;
[02CC] (AC) Exprmode VAR_CHARINC = (9 - Var[118]);
[02D7] (1A) VAR_CUTSCENE_START_SCRIPT = 22;
[02DC] (1A) VAR_CUTSCENE_END_SCRIPT = 23;
[02E1] (1A) VAR_ENTRY_SCRIPT = 5;
[02E6] (1A) VAR_ENTRY_SCRIPT2 = 6;
[02EB] (1A) VAR_EXIT_SCRIPT = 7;
[02F0] (1A) VAR_SENTENCE_SCRIPT = 2;
[02F5] (1A) VAR_INVENTORY_SCRIPT = 12;
[02FA] (1A) VAR_NUM_ACTOR = 12;
[02FF] (0C) Resource.clearHeap();
[0301] (2C) CursorShow();
[0303] (2C) UserputOn();
[0305] (0A) startScript(15,[]);
[0308] (0A) startScript(16,[]);
[030B] (5C) oldRoomEffect-set(-32383);
[030F] (1A) VAR_VERB_SCRIPT = 95;
[0314] (08) if (Local[0] != 0) {
[031B] (18) } else {
[031E] (40)   cutscene([]);
[0320] (0A)   startScript(98,[]);
[0323] (80)   breakHere();
[0324] (68)   VAR_RESULT = isScriptRunning(98);
[0328] (28)   unless (!VAR_RESULT) goto 0323;
[032D] (33)   SetScreen(16,152)
[0333] (0C)   Resource.loadRoom(3);
[0336] (0C)   Resource.loadCostume(2);
[0339] (1A)   Var[108] = 0;
[033E] (72)   loadRoom(3);
[0340] (58)   beginOverride();
[0342] (18)   goto 034B;
[0345] (80)   breakHere();
[0346] (A8)   unless (Var[108]) goto 0345;
[034B] (0C)   Resource.nukeRoom(3);
[034E] (0C)   Resource.nukeCostume(2);
[0351] (C0)   endCutscene();
[0352] (**) }
[0352] (33) SetScreen(0,144)
[0358] (0A) startScript(31,[]);
[035B] (1A) Var[114] = 10;
[0360] (0A) startScript(15,[]);
[0363] (0A) startScript(16,[]);
[0366] (1A) Bit[14] = 0;
[036B] (1A) VAR_EGO = 1;
[0370] (13) ActorOps(1,[Costume(15),TalkColor(15),Name("Guybrush")]);
[0381] (5D) setClass(1,[149,22]);
[038B] (AD) putActorInRoom(VAR_EGO,55);
[038F] (81) putActor(VAR_EGO,360,100);
[0396] (91) animateCostume(VAR_EGO,250);
[039A] (13) ActorOps(11,[Costume(27),Name("Troll")]);
[03A6] (5D) setClass(11,[141,149,150]);
[03B3] (48) if (VAR_VIDEOMODE == 4) {
[03BA] (13)   ActorOps(11,[TalkColor(15)]);
[03BF] (18) } else {
[03C2] (13)   ActorOps(11,[TalkColor(11)]);
[03C7] (**) }
[03C7] (0A) startScript(28,[]);
[03CA] (08) if (Local[0] != 0) {
[03D1] (1A)   VAR_MACHINE_SPEED = 2;
[03D6] (14)   print(255,[Pos(160,8),Center(),Overhead()]);
[03E0] (ED)   putActorInRoom(VAR_EGO,Local[0]);
[03E5] (81)   putActor(VAR_EGO,160,100);
[03EC] (D2)   actorFollowCamera(VAR_EGO);
[03EF] (18) } else {
[03F2] (72)   loadRoom(55);
[03F4] (**) }
[03F4] (A0) stopObjectCode();
END

// Script 2: Sentence Line
[0000] (C8) if (Var[106] == Local[2]) {
[0007] (C8)   if (Var[107] == Local[1]) {
[000E] (46)     Var[105]++;
[0011] (44)     if (Var[105] > 3) {
[0018] (1A)       Var[105] = 0;
[001D] (A8)       if (Var[106]) {
[0022] (42)         chainScript(3,[Local[0]]);
[0028] (**)       }
[0028] (**)     }
[0028] (18)     goto 0030;
[002B] (**)   }
[002B] (**) }
[002B] (1A) Var[105] = 0;
[0030] (9A) Var[106] = Local[1];
[0035] (9A) Var[107] = Local[2];
[003A] (48) if (Local[0] == 13) {
[0041] (A8)   if (Var[100]) {
[0046] (8A)     startScript(Var[100],[Local[2]]);
[004D] (18)     goto 038C;
[0050] (**)   }
[0050] (**) }
[0050] (38) if (Local[0] >= 30) {
[0057] (04)   if (Local[0] <= 40) {
[005E] (AC)     Exprmode Local[5] = (Local[0] - 32);
[0069] (9A)     VAR_EGO = Local[5];
[006E] (D2)     actorFollowCamera(VAR_EGO);
[0071] (18)     goto 010C;
[0074] (**)   }
[0074] (**) }
[0074] (9A) Local[3] = VAR_EGO;
[0079] (48) if (Local[0] == 3) {
[0080] (44)   if (Local[2] > 12) {
[0087] (9D)     if (classOfIs(Local[2],[133])) {
[0090] (0A)       startScript(14,[Local[1],Local[2]]);
[0099] (18)       goto 038C;
[009C] (**)     }
[009C] (18)   } else {
[009F] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[00A4] (48)     if (VAR_RESULT == 15) {
[00AB] (18)       goto 021C;
[00AE] (**)     }
[00AE] (28)     if (!Bit[5 + Local[3]]) {
[00B5] (CD)       walkActorToActor(Local[3],Local[2],255);
[00BB] (**)     }
[00BB] (AE)     WaitForActor(Local[3]);
[00BF] (AC)     Exprmode Local[7] = ((<VAR_RESULT = getActorWidth(Local[2])> / 2) + 4);
[00D1] (EC)     VAR_RESULT = getActorWidth(Local[3]);
[00D6] (DA)     Local[7] += VAR_RESULT;
[00DB] (F4)     VAR_RESULT = getDist(Local[3],Local[2]);
[00E2] (84)     if (VAR_RESULT <= Local[7]) {
[00E9] (8B)       VAR_RESULT = getVerbEntryPoint(Local[1],3);
[00F0] (A8)       if (VAR_RESULT) {
[00F5] (C9)         faceActor(Local[2],Local[3]);
[00FA] (C9)         faceActor(Local[3],Local[2]);
[00FF] (9A)         VAR_ME = Local[1];
[0104] (B7)         startObject(Local[1],3,[Local[2]]);
[010C] (0A)         startScript(15,[]);
[010F] (18)         goto 038C;
[0112] (9D)       } else if (classOfIs(Local[2],[133])) {
[011E] (8A)         startScript(Var[102],[Local[1],Local[3],Local[2]]);
[012B] (18)       } else {
[012E] (42)         chainScript(3,[Local[0]]);
[0134] (**)       }
[0134] (**)     }
[0134] (18)     goto 038C;
[0137] (**)   }
[0137] (**) }
[0137] (48) if (Local[0] == 9) {
[013E] (48)   if (VAR_CURRENT_LIGHTS == 0) {
[0145] (D8)     printEgo([Text("It's too dark to see it.")]);
[0160] (18)     goto 010C;
[0163] (**)   }
[0163] (**) }
[0163] (CB) VAR_RESULT = getVerbEntryPoint(Local[1],Local[0]);
[016A] (28) if (!VAR_RESULT) {
[016F] (9A)   Local[4] = Local[1];
[0174] (9D)   if (classOfIs(Local[4],[136])) {
[017D] (42)     chainScript(3,[Local[0]]);
[0183] (**)   }
[0183] (28)   if (!Bit[5 + Local[3]]) {
[018A] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[018F] (48)     if (VAR_RESULT == 15) {
[0196] (9D)       if (classOfIs(Local[4],[138])) {
[019F] (FE)         walkActorTo(Local[3],VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01A6] (AE)         WaitForActor(Local[3]);
[01AA] (08)         if (Local[0] != 10) {
[01B1] (42)           chainScript(3,[Local[0]]);
[01B7] (18)         } else {
[01BA] (18)           goto 038C;
[01BD] (**)         }
[01BD] (18)       } else {
[01C0] (F6)         walkActorToObject(Local[3],Local[4]);
[01C5] (**)       }
[01C5] (**)     }
[01C5] (**)   }
[01C5] (AE)   WaitForActor(Local[3]);
[01C9] (F4)   VAR_RESULT = getDist(Local[3],Local[4]);
[01D0] (04)   if (VAR_RESULT <= 16) {
[01D7] (08)     if (Local[0] != 10) {
[01DE] (42)       chainScript(3,[Local[0]]);
[01E4] (**)     }
[01E4] (18)   } else {
[01E7] (18)     goto 02DC;
[01EA] (**)   }
[01EA] (18) } else {
[01ED] (1A)   Var[103] = 0;
[01F2] (08)   if (Local[0] != 10) {
[01F9] (08)     if (Local[0] != 9) {
[0200] (08)       if (Local[0] != 11) {
[0207] (90)         VAR_RESULT = getObjectOwner(Local[1]);
[020C] (48)         if (VAR_RESULT == 15) {
[0213] (9D)           if (classOfIs(Local[1],[135])) {
[021C] (F9)             doSentence(Local[0],Local[1],Local[2]);
[0223] (59)             doSentence(11,Local[1],0);
[0229] (18)             goto 038C;
[022C] (**)           }
[022C] (46)           Var[103]++;
[022F] (**)         }
[022F] (90)         VAR_RESULT = getObjectOwner(Local[2]);
[0234] (48)         if (VAR_RESULT == 15) {
[023B] (9D)           if (classOfIs(Local[2],[135])) {
[0244] (F9)             doSentence(Local[0],Local[1],Local[2]);
[024B] (59)             doSentence(11,Local[2],0);
[0251] (18)             goto 038C;
[0254] (**)           }
[0254] (46)           Var[103]++;
[0257] (**)         }
[0257] (48)         if (Var[103] == 2) {
[025E] (42)           chainScript(3,[Local[0]]);
[0264] (**)         }
[0264] (**)       }
[0264] (**)     }
[0264] (**)   }
[0264] (9A)   Local[4] = Local[1];
[0269] (90)   VAR_RESULT = getObjectOwner(Local[1]);
[026E] (08)   if (VAR_RESULT != 15) {
[0275] (A8)     if (Local[2]) {
[027A] (90)       VAR_RESULT = getObjectOwner(Local[2]);
[027F] (48)       if (VAR_RESULT == 15) {
[0286] (9A)         Local[4] = Local[2];
[028B] (**)       }
[028B] (**)     }
[028B] (**)   }
[028B] (90)   VAR_RESULT = getObjectOwner(Local[4]);
[0290] (48)   if (VAR_RESULT == 15) {
[0297] (28)     if (!Bit[5 + Local[3]]) {
[029E] (9D)       if (classOfIs(Local[4],[136])) {
[02A7] (80)         breakHere();
[02A8] (18)         goto 0303;
[02AB] (**)       }
[02AB] (9D)       if (classOfIs(Local[4],[138])) {
[02B4] (FE)         walkActorTo(Local[3],VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[02BB] (AE)         WaitForActor(Local[3]);
[02BF] (18)         goto 0303;
[02C2] (18)       } else {
[02C5] (F6)         walkActorToObject(Local[3],Local[4]);
[02CA] (AE)         WaitForActor(Local[3]);
[02CE] (**)       }
[02CE] (**)     }
[02CE] (**)   }
[02CE] (F4)   VAR_RESULT = getDist(Local[3],Local[4]);
[02D5] (44)   if (VAR_RESULT > 16) {
[02DC] (C9)     faceActor(Local[3],Local[4]);
[02E1] (AE)     WaitForActor(Local[3]);
[02E5] (D8)     printEgo([Text("I can't reach it.")]);
[02F9] (0A)     startScript(15,[]);
[02FC] (0A)     startScript(16,[]);
[02FF] (19)     doSentence(STOP);
[0301] (62)     stopScript(0);
[0303] (**)   }
[0303] (A8)   if (Bit[5 + Local[3]]) {
[030A] (48)     if (Local[0] == 10) {
[0311] (18)       goto 038C;
[0314] (**)     }
[0314] (**)   }
[0314] (1A)   Local[6] = 0;
[0319] (9D)   if (classOfIs(Local[1],[144])) {
[0322] (1A)     Local[6] = 11;
[0327] (9D)   } else if (classOfIs(Local[1],[143])) {
[0333] (1A)     Local[6] = 10;
[0338] (9D)   } else if (classOfIs(Local[1],[142])) {
[0344] (1A)     Local[6] = 12;
[0349] (**)   }
[0349] (A8)   if (Local[6]) {
[034E] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[0353] (48)     if (VAR_RESULT == 15) {
[035A] (08)       if (Local[0] != 10) {
[0361] (08)         if (Local[0] != 9) {
[0368] (40)           cutscene([2]);
[036D] (D1)           animateCostume(VAR_EGO,Local[6]);
[0372] (2E)           delay(20);
[0376] (91)           animateCostume(VAR_EGO,3);
[037A] (C0)           endCutscene();
[037B] (**)         }
[037B] (**)       }
[037B] (**)     }
[037B] (**)   }
[037B] (9A)   VAR_ME = Local[1];
[0380] (F7)   startObject(Local[1],Local[0],[Local[2],Local[0]]);
[038C] (**) }
[038C] (0A) startScript(16,[]);
[038F] (1A) Var[170] = -1;
[0394] (A0) stopObjectCode();
END

// Script 3: Verb Defaults
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = Var[110];
[000A] (**) }
[000A] (48) if (Local[0] == 1) {
[0011] (D8)   printEgo([Text("It doesn't seem to open.")]);
[002C] (48) } else if (Local[0] == 6) {
[0036] (18)   goto 0043;
[0039] (48) } else if (Local[0] == 7) {
[0043] (D8)   printEgo([Text("I can't move it.")]);
[0056] (48) } else if (Local[0] == 9) {
[0060] (D8)   printEgo([Text("I don't see anything special about it.")]);
[0089] (48) } else if (Local[0] == 11) {
[0093] (D8)   printEgo([Text("I can't pick that up.")]);
[00AB] (48) } else if (Local[0] == 79) {
[00B5] (D8)   printEgo([Text("I can't reach that from here.")]);
[00D5] (48) } else if (Local[0] == 8) {
[00DF] (D8)   printEgo([Text("That doesn't seem to work.")]);
[00FC] (18) } else {
[00FF] (D8)   printEgo([Text("That doesn't seem to work.")]);
[011C] (**) }
[011C] (AE) WaitForMessage();
[011E] (14) print(255,[]);
[0121] (19) doSentence(STOP);
[0123] (0A) startScript(15,[]);
[0126] (0A) startScript(16,[]);
[0129] (A0) stopObjectCode();
END

// Script 5
[0000] (70) lights(11,0,0);
[0004] (A0) stopObjectCode();
END

// Script 6
[0000] (A0) stopObjectCode();
END

// Script 7
[0000] (9A) Var[104] = VAR_ROOM;
[0005] (A8) if (Var[172]) {
[000A] (FA)   VerbOps(Var[172],[Color(2)]);
[0010] (1A)   Var[172] = 0;
[0015] (**) }
[0015] (A0) stopObjectCode();
END

// Script 11
[0000] (1A) Var[108] = 0;
[0005] (1A) Local[1] = 129;
[000A] (9D) if (classOfIs(Local[0],[Local[1]])) {
[0013] (9A)   Var[108] = Local[1];
[0018] (**) }
[0018] (46) Local[1]++;
[001B] (44) unless (Local[1] > 132) goto 000A;
[0022] (A0) stopObjectCode();
END

// Script 12
[0000] (78) if (Var[121] < 0) {
[0007] (1A)   Var[121] = 0;
[000C] (**) }
[000C] (B1) Local[5] = getInventoryCount(VAR_EGO);
[0011] (04) if (Local[5] <= 6) {
[0018] (1A)   Var[121] = 0;
[001D] (**) }
[001D] (38) if (Local[5] >= 6) {
[0024] (3A)   Local[5] -= 6;
[0029] (**) }
[0029] (1A) Local[6] = 0;
[002E] (B8) if (Var[121] >= Local[5]) {
[0035] (9A)   Var[121] = Local[5];
[003A] (9A)   Local[4] = Local[5];
[003F] (5B)   Local[5] /= 2;
[0044] (1B)   Local[5] *= 2;
[0049] (BA)   Local[4] -= Local[5];
[004E] (A8)   if (Local[4]) {
[0053] (46)     Var[121]++;
[0056] (**)   }
[0056] (46)   Local[6]++;
[0059] (**) }
[0059] (1A) Local[2] = 1;
[005E] (AC) Exprmode Local[1] = (Var[121] + Local[2]);
[0069] (FD) Local[3] = findInventory(VAR_EGO,Local[1]);
[0070] (9A) Var[136 + Local[2]] = Local[3];
[0077] (46) Local[2]++;
[007A] (44) unless (Local[2] > 6) goto 005E;
[0081] (7A) VerbOps(101,[Text(getName(Var[137])),On()]);
[008B] (7A) VerbOps(102,[Text(getName(Var[138])),On()]);
[0095] (7A) VerbOps(103,[Text(getName(Var[139])),On()]);
[009F] (7A) VerbOps(104,[Text(getName(Var[140])),On()]);
[00A9] (7A) VerbOps(105,[Text(getName(Var[141])),On()]);
[00B3] (7A) VerbOps(106,[Text(getName(Var[142])),On()]);
[00BD] (B1) Local[5] = getInventoryCount(VAR_EGO);
[00C2] (44) if (Local[5] > 6) {
[00C9] (A8)   if (Var[121]) {
[00CE] (7A)     VerbOps(107,[On()]);
[00D2] (18)   } else {
[00D5] (7A)     VerbOps(107,[Off()]);
[00D9] (**)   }
[00D9] (28)   if (!Local[6]) {
[00DE] (7A)     VerbOps(108,[On()]);
[00E2] (18)   } else {
[00E5] (7A)     VerbOps(108,[Off()]);
[00E9] (**)   }
[00E9] (18) } else {
[00EC] (7A)   VerbOps(107,[Off()]);
[00F0] (7A)   VerbOps(108,[Off()]);
[00F4] (**) }
[00F4] (A0) stopObjectCode();
END

// Script 13
[0000] (40) cutscene([2]);
[0005] (28) if (!Local[3]) {
[000A] (1A)   Local[3] = 10;
[000F] (**) }
[000F] (C9) faceActor(Local[2],Local[1]);
[0014] (C9) faceActor(Local[1],Local[2]);
[0019] (80) breakHere();
[001A] (80) breakHere();
[001B] (D1) animateCostume(Local[1],Local[3]);
[0020] (2E) delay(15);
[0024] (D1) animateCostume(Local[2],Local[3]);
[0029] (A8) if (Local[0]) {
[002E] (E9)   setOwnerOf(Local[0],Local[2]);
[0033] (**) }
[0033] (2E) delay(15);
[0037] (91) animateCostume(Local[1],3);
[003B] (2E) delay(15);
[003F] (91) animateCostume(Local[2],3);
[0043] (C0) endCutscene();
[0044] (A0) stopObjectCode();
END

// Script 14
[0000] (90) VAR_RESULT = getObjectOwner(Local[0]);
[0005] (48) if (VAR_RESULT == 15) {
[000C] (9D)   if (classOfIs(Local[0],[135])) {
[0015] (79)     doSentence(3,Local[0],Local[1]);
[001B] (59)     doSentence(11,Local[0],0);
[0021] (0A)     startScript(16,[]);
[0024] (62)     stopScript(0);
[0026] (**)   }
[0026] (**) }
[0026] (28) if (!Bit[5 + Var[1]]) {
[002D] (F6)   walkActorToObject(VAR_EGO,Local[1]);
[0032] (**) }
[0032] (AE) WaitForActor(VAR_EGO);
[0036] (F4) VAR_RESULT = getDist(VAR_EGO,Local[1]);
[003D] (04) if (VAR_RESULT <= 32) {
[0044] (B7)   startObject(Local[1],80,[Local[0]]);
[004C] (**) }
[004C] (A0) stopObjectCode();
END

// Script 15
[0000] (9A) Var[110] = Var[114];
[0005] (1A) Var[111] = 0;
[000A] (1A) Var[112] = 0;
[000F] (1A) Var[113] = 0;
[0014] (1A) Var[170] = 0;
[0019] (A0) stopObjectCode();
END

// Script 16
[0000] (A8) if (Var[111]) {
[0005] (7A)   VerbOps(100,[Text(getVerb(Var[110]) + " " + getName(Var[111]) + " " + getVerb(Var[113]) + " " + getName(Var[112])),Color(3),On()]);
[0020] (18) } else {
[0023] (7A)   VerbOps(100,[Text(getVerb(Var[110]) + " " + getVerb(Var[113]) + " " + getName(Var[112])),Color(3),On()]);
[0039] (**) }
[0039] (A0) stopObjectCode();
END

// Script 17
[0000] (2E) delay(60);
[0004] (16) Local[0] = getRandomNr(10);
[0008] (1A) Var[105] = 0;
[000D] (18) goto 0000;
[0010] (A0) stopObjectCode();
END

// Script 18
[0000] (48) if (Local[0] == 2) {
[0007] (F5)   Local[3] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[000E] (1A)   Local[4] = 0;
[0013] (48)   if (Var[189 + Local[4]] == 1) {
[001C] (AC)     Exprmode Local[1] = (120 + Local[4]);
[0027] (1A)     Local[0] = 1;
[002C] (A8)     if (Bit[35 + Local[4]]) {
[0033] (1A)       Bit[23] = 0;
[0038] (18)     } else {
[003B] (1A)       Bit[23] = 1;
[0040] (**)     }
[0040] (A8)   } else if (Local[3]) {
[0048] (C8)     if (Var[189 + Local[4]] == Local[3]) {
[0051] (AC)       Exprmode Local[1] = (120 + Local[4]);
[005C] (1A)       Local[0] = 1;
[0061] (A8)       if (Bit[35 + Local[4]]) {
[0068] (1A)         Bit[23] = 0;
[006D] (18)       } else {
[0070] (1A)         Bit[23] = 1;
[0075] (**)       }
[0075] (**)     }
[0075] (**)   }
[0075] (46)   Local[4]++;
[0078] (44)   unless (Local[4] > 8) goto 0013;
[007F] (**) }
[007F] (48) if (Local[0] == 1) {
[0086] (48)   if (Local[1] == 107) {
[008D] (9A)     Var[173] = Local[1];
[0092] (62)     stopScript(0);
[0094] (48)   } else if (Local[1] == 108) {
[009E] (9A)     Var[173] = Local[1];
[00A3] (62)     stopScript(0);
[00A5] (**)   }
[00A5] (A8)   if (Local[1]) {
[00AA] (1A)     Var[103] = 120;
[00AF] (FA)     VerbOps(Var[103],[Off()]);
[00B4] (46)     Var[103]++;
[00B7] (44)     unless (Var[103] > 128) goto 00AF;
[00BE] (7A)     VerbOps(107,[Off()]);
[00C2] (7A)     VerbOps(108,[Off()]);
[00C6] (26)     setVarRange(Var[189],9,[0,0,0,0,0,0,0,0,0]);
[00D3] (26)     setVarRange(Bit[35],9,[0,0,0,0,0,0,0,0,0]);
[00E0] (2C)     CursorHide();
[00E2] (2C)     UserputOff();
[00E4] (**)   }
[00E4] (38)   if (Local[1] >= 120) {
[00EB] (04)     if (Local[1] <= 128) {
[00F2] (28)       if (!Bit[23]) {
[00F7] (D8)         printEgo([Text(getVerb(Local[1]))]);
[00FE] (AE)         WaitForMessage();
[0100] (80)         breakHere();
[0101] (80)         breakHere();
[0102] (**)       }
[0102] (14)       print(255,[]);
[0105] (9A)       Var[173] = Local[1];
[010A] (**)     }
[010A] (**)   }
[010A] (**) }
[010A] (48) if (Local[0] == 4) {
[0111] (42)   chainScript(24,[Local[1]]);
[0117] (**) }
[0117] (A0) stopObjectCode();
END

// Script 20
[0000] (A8) if (Local[1]) {
[0005] (D5)   Local[2] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[000C] (C8)   if (Local[2] == VAR_EGO) {
[0013] (1A)     Local[2] = 0;
[0018] (**)   }
[0018] (A8)   if (Local[0]) {
[001D] (9D)     if (classOfIs(Local[2],[Local[0]])) {
[0026] (18)       goto 0050;
[0029] (**)     }
[0029] (1A)     Local[2] = 0;
[002E] (**)   }
[002E] (**) }
[002E] (28) if (!Local[2]) {
[0033] (F5)   Local[2] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[003A] (A8)   if (Local[0]) {
[003F] (9D)     if (classOfIs(Local[2],[Local[0]])) {
[0048] (18)     } else {
[004B] (1A)       Local[2] = 0;
[0050] (**)     }
[0050] (**)   }
[0050] (**) }
[0050] (9A) Var[108] = Local[2];
[0055] (A0) stopObjectCode();
END

// Script 21
[0000] (48) if (Local[0] == 4) {
[0007] (1A)   Var[170] = 999;
[000C] (A8)   if (Var[172]) {
[0011] (FA)     VerbOps(Var[172],[Color(2)]);
[0017] (1A)     Var[172] = 0;
[001C] (**)   }
[001C] (1A)   Var[103] = 1;
[0021] (FA)   VerbOps(Var[103],[Off()]);
[0026] (46)   Var[103]++;
[0029] (44)   unless (Var[103] > 125) goto 0021;
[0030] (62)   stopScript(28);
[0032] (48) } else if (Local[0] == 2) {
[003C] (1A)   Var[170] = 999;
[0041] (AB)   restoreVerbs(1,100,1);
[0046] (AB)   restoreVerbs(101,108,5);
[004B] (0A)   startScript(12,[]);
[004E] (0A)   startScript(28,[]);
[0051] (48) } else if (Local[0] == 1) {
[005B] (1A)   Var[170] = 999;
[0060] (A8)   if (Var[172]) {
[0065] (FA)     VerbOps(Var[172],[Color(2)]);
[006B] (1A)     Var[172] = 0;
[0070] (**)   }
[0070] (AB)   saveVerbs(1,13,1);
[0075] (AB)   saveVerbs(101,108,5);
[007A] (AB)   saveVerbs(100,100,1);
[007F] (62)   stopScript(28);
[0081] (48) } else if (Local[0] == 3) {
[008B] (1A)   Var[170] = 999;
[0090] (A8)   if (Var[172]) {
[0095] (FA)     VerbOps(Var[172],[Color(2)]);
[009B] (1A)     Var[172] = 0;
[00A0] (**)   }
[00A0] (2C)   InitCharset(1);
[00A3] (7A)   VerbOps(120,[New(),SetXY(0,145),Color(2),HiColor(14)]);
[00B0] (7A)   VerbOps(121,[New(),SetXY(0,154),Color(2),HiColor(14)]);
[00BD] (7A)   VerbOps(122,[New(),SetXY(0,163),Color(2),HiColor(14)]);
[00CA] (7A)   VerbOps(123,[New(),SetXY(0,172),Color(2),HiColor(14)]);
[00D7] (7A)   VerbOps(124,[New(),SetXY(0,181),Color(2),HiColor(14)]);
[00E4] (7A)   VerbOps(125,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[00F1] (7A)   VerbOps(126,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[00FE] (7A)   VerbOps(127,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[010B] (7A)   VerbOps(128,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[0118] (2C)   InitCharset(2);
[011B] (0A)   startScript(21,[1]);
[0121] (18)   /* goto 0124; */
[0124] (**) }
[0124] (A0) stopObjectCode();
END

// Script 22
[0000] (48) if (Local[0] == 3) {
[0007] (2C)   CursorShow();
[0009] (2C)   UserputOn();
[000B] (AB)   saveVerbs(1,125,2);
[0010] (60)   freezeScripts(127);
[0012] (18) } else {
[0015] (2C)   CursorSoftOff();
[0017] (2C)   UserputSoftOff();
[0019] (A8)   if (Var[172]) {
[001E] (FA)     VerbOps(Var[172],[Color(2)]);
[0024] (1A)     Var[172] = 0;
[0029] (**)   }
[0029] (48)   if (Local[0] == 1) {
[0030] (AB)     saveVerbs(1,125,2);
[0035] (**)   }
[0035] (60)   freezeScripts(127);
[0037] (**) }
[0037] (A0) stopObjectCode();
END

// Script 23
[0000] (48) if (Local[0] == 3) {
[0007] (AB)   restoreVerbs(1,125,2);
[000C] (60)   freezeScripts(0);
[000E] (18) } else {
[0011] (2C)   CursorSoftOn();
[0013] (2C)   UserputSoftOn();
[0015] (48)   if (Local[0] == 1) {
[001C] (AB)     restoreVerbs(1,125,2);
[0021] (**)   }
[0021] (08)   if (Local[0] != 2) {
[0028] (19)     doSentence(STOP);
[002A] (0A)     startScript(15,[]);
[002D] (0A)     startScript(16,[]);
[0030] (D2)     actorFollowCamera(VAR_EGO);
[0033] (**)   }
[0033] (60)   freezeScripts(0);
[0035] (**) }
[0035] (A0) stopObjectCode();
END

// Script 24
[0000] (9A) Local[1] = Local[0];
[0005] (1A) Local[0] = 0;
[000A] (48) if (Local[1] == 60) {
[0011] (A8)   if (Var[118]) {
[0016] (C6)     Var[118]--;
[0019] (**)   }
[0019] (18)   goto 0035;
[001C] (48) } else if (Local[1] == 62) {
[0026] (46)   Var[118]++;
[0029] (44)   if (Var[118] > 9) {
[0030] (1A)     Var[118] = 9;
[0035] (**)   }
[0035] (28)   if (!Var[119]) {
[003A] (AC)     Exprmode VAR_CHARINC = (9 - Var[118]);
[0045] (**)   }
[0045] (14)   print(255,[Pos(0,0),Color(4),Text("Text speed " + getInt(Var[118]))]);
[005F] (48) } else if (Local[1] == 22) {
[0069] (14)   print(252,[Color(9),Text(getString(VAR_CUTSCENEEXIT_KEY))]);
[0073] (18)   /* goto 0076; */
[0076] (**) }
[0076] (9A) Var[108] = Local[0];
[007B] (A0) stopObjectCode();
END

// Script 26: Open a Door
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_ME;
[000A] (**) }
[000A] (8F) if (getState(Local[0]) == 0) {
[0010] (9D)   if (classOfIs(Local[0],[6])) {
[0019] (40)     cutscene([2]);
[001E] (87)     setState(Local[0],1);
[0022] (A8)     if (Local[1]) {
[0027] (9D)       if (classOfIs(Local[1],[11])) {
[0030] (87)         setState(Local[1],1);
[0034] (**)       }
[0034] (**)     }
[0034] (1C)     startSound(2);
[0036] (80)     breakHere();
[0037] (C0)     endCutscene();
[0038] (18)   } else {
[003B] (D8)     printEgo([Text("Hmm.  This door appears to be locked.")]);
[0063] (**)   }
[0063] (**) }
[0063] (A0) stopObjectCode();
END

// Script 27: Close a Door
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_ME;
[000A] (**) }
[000A] (8F) if (getState(Local[0]) == 1) {
[0010] (40)   cutscene([2]);
[0015] (87)   setState(Local[0],0);
[0019] (A8)   if (Local[1]) {
[001E] (9D)     if (classOfIs(Local[1],[11])) {
[0027] (87)       setState(Local[1],0);
[002B] (**)     }
[002B] (**)   }
[002B] (1C)   startSound(3);
[002D] (80)   breakHere();
[002E] (C0)   endCutscene();
[002F] (**) }
[002F] (A0) stopObjectCode();
END

// Script 28
[0000] (44) if (VAR_MOUSE_Y > 144) {
[0007] (44)   if (VAR_MOUSE_X > 160) {
[000E] (AC)     Exprmode Local[2] = ((VAR_MOUSE_Y - 152) / 8);
[001D] (9A)     Local[0] = Var[137 + Local[2]];
[0024] (18)   } else {
[0027] (F5)     Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[002E] (**)   }
[002E] (18) } else {
[0031] (F5)   Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0038] (**) }
[0038] (48) if (Var[110] == 13) {
[003F] (9D)   if (classOfIs(Local[0],[141])) {
[0048] (18)   } else {
[004B] (D5)     Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0052] (9D)     if (classOfIs(Local[0],[141])) {
[005B] (18)     } else {
[005E] (1A)       Local[0] = 0;
[0063] (**)     }
[0063] (**)   }
[0063] (**) }
[0063] (48) if (Var[110] == 3) {
[006A] (A8)   if (Var[113]) {
[006F] (9D)     if (classOfIs(Local[0],[133])) {
[0078] (18)     } else {
[007B] (D5)       Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0082] (9D)       if (classOfIs(Local[0],[133])) {
[008B] (18)       } else {
[008E] (1A)         Local[0] = 0;
[0093] (**)       }
[0093] (**)     }
[0093] (**)   }
[0093] (**) }
[0093] (88) if (Local[0] != Var[170]) {
[009A] (9A)   Var[170] = Local[0];
[009F] (A8)   if (Var[113]) {
[00A4] (88)     if (Local[0] != Var[111]) {
[00AB] (9A)       Var[112] = Local[0];
[00B0] (18)     } else {
[00B3] (1A)       Var[112] = 0;
[00B8] (**)     }
[00B8] (18)   } else {
[00BB] (9A)     Var[111] = Local[0];
[00C0] (**)   }
[00C0] (A8)   if (Var[172]) {
[00C5] (FA)     VerbOps(Var[172],[Color(2)]);
[00CB] (**)   }
[00CB] (1A)   Var[171] = 0;
[00D0] (9A)   VAR_ME = Local[0];
[00D5] (B7)   startObject(Local[0],90,[]);
[00DA] (A8)   if (Var[171]) {
[00DF] (FA)     VerbOps(Var[171],[Color(14)]);
[00E5] (**)   }
[00E5] (9A)   Var[172] = Var[171];
[00EA] (68)   VAR_RESULT = isScriptRunning(2);
[00EE] (28)   if (!VAR_RESULT) {
[00F3] (0A)     startScript(16,[]);
[00F6] (**)   }
[00F6] (**) }
[00F6] (80) breakHere();
[00F7] (18) goto 0000;
[00FA] (A0) stopObjectCode();
END

// Script 29
[0000] (AC) Exprmode Local[11] = (<VAR_RESULT = getActorWidth(Local[1])> / 2);
[000E] (EC) Local[12] = getActorWidth(Local[0]);
[0013] (DA) Local[11] += Local[12];
[0018] (AC) Exprmode Local[6] = (Local[12] * 2);
[0023] (38) if (Local[12] >= 16) {
[002A] (1B)   Local[6] *= 2;
[002F] (**) }
[002F] (F4) VAR_RESULT = getDist(Local[1],Local[0]);
[0036] (C4) if (VAR_RESULT > Local[6]) {
[003D] (A8)   if (Bit[10]) {
[0042] (CD)     walkActorToActor(Local[1],Local[0],0);
[0048] (18)   } else {
[004B] (CD)     walkActorToActor(Local[1],Local[0],255);
[0051] (**)   }
[0051] (18) } else {
[0054] (D6)   VAR_RESULT = getActorMoving(Local[1]);
[0059] (28)   if (!VAR_RESULT) {
[005E] (C9)     faceActor(Local[1],Local[0]);
[0063] (**)   }
[0063] (**) }
[0063] (80) breakHere();
[0064] (A8) if (Bit[10]) {
[0069] (F4)   VAR_RESULT = getDist(Local[0],Local[1]);
[0070] (84)   if (VAR_RESULT <= Local[11]) {
[0077] (91)     animateCostume(Local[1],255);
[007B] (**)   }
[007B] (80)   breakHere();
[007C] (F4)   VAR_RESULT = getDist(Local[0],Local[1]);
[0083] (84)   if (VAR_RESULT <= Local[11]) {
[008A] (91)     animateCostume(Local[1],255);
[008E] (**)   }
[008E] (18) } else {
[0091] (80)   breakHere();
[0092] (**) }
[0092] (83) Local[4] = getActorRoom(Local[0]);
[0097] (83) VAR_RESULT = getActorRoom(Local[1]);
[009C] (88) unless (VAR_RESULT != Local[4]) goto 002F;
[00A3] (A8) if (Local[2]) {
[00A8] (E3)   Local[5] = getActorFacing(Local[0]);
[00AD] (C3)   Local[7] = getActorX(Local[0]);
[00B2] (9A)   Local[9] = Local[7];
[00B7] (A3)   Local[8] = getActorY(Local[0]);
[00BC] (9A)   Local[10] = Local[8];
[00C1] (AC)   Exprmode Local[6] = (<VAR_RESULT = getActorWidth(Local[0])> * 2);
[00CF] (48)   if (Local[5] == 0) {
[00D6] (BA)     Local[9] -= Local[6];
[00DB] (48)   } else if (Local[5] == 1) {
[00E5] (DA)     Local[9] += Local[6];
[00EA] (48)   } else if (Local[5] == 2) {
[00F4] (16)     VAR_RESULT = getRandomNr(1);
[00F8] (A8)     if (VAR_RESULT) {
[00FD] (DA)       Local[9] += Local[6];
[0102] (18)     } else {
[0105] (BA)       Local[9] -= Local[6];
[010A] (**)     }
[010A] (18)     /* goto 010D; */
[010D] (**)   }
[010D] (DA)   Local[10] += Local[6];
[0112] (D6)   VAR_RESULT = getActorMoving(Local[0]);
[0117] (28)   if (!VAR_RESULT) {
[011C] (FE)     walkActorTo(Local[0],Local[9],Local[10]);
[0123] (**)   }
[0123] (1A)   Local[3] = 1;
[0128] (80)   breakHere();
[0129] (46)   Local[3]++;
[012C] (44)   unless (Local[3] > 10) goto 0128;
[0133] (83)   VAR_RESULT = getActorRoom(Local[0]);
[0138] (88)   if (VAR_RESULT != Local[4]) {
[013F] (18)     goto 0092;
[0142] (**)   }
[0142] (C3)   VAR_RESULT = getActorX(Local[0]);
[0147] (C8)   if (VAR_RESULT == Local[7]) {
[014E] (A3)     VAR_RESULT = getActorY(Local[0]);
[0153] (C8)     if (VAR_RESULT == Local[8]) {
[015A] (18)       goto 00AD;
[015D] (**)     }
[015D] (**)   }
[015D] (A8)   if (Var[117]) {
[0162] (ED)     putActorInRoom(Local[1],Local[4]);
[0167] (CE)     putActorAtObject(Local[1],Var[117]);
[016C] (18)   } else {
[016F] (ED)     putActorInRoom(Local[1],Local[4]);
[0174] (E1)     putActor(Local[1],Local[7],Local[8]);
[017B] (**)   }
[017B] (D1)   animateCostume(Local[1],Local[5]);
[0180] (91)   animateCostume(Local[1],3);
[0184] (18)   goto 0000;
[0187] (**) }
[0187] (A0) stopObjectCode();
END

// Script 30
[0000] (AC) Exprmode Var[153] = ((160 - VAR_CAMERA_POS_X) + <VAR_RESULT = getActorX(Local[0])>);
[0012] (AC) Exprmode Var[154] = (<VAR_RESULT = getActorY(Local[0])> - 80);
[0020] (78) if (Var[154] < 0) {
[0027] (1A)   Var[154] = 0;
[002C] (**) }
[002C] (78) if (Var[153] < 80) {
[0033] (1A)   Var[153] = 80;
[0038] (**) }
[0038] (44) if (Var[153] > 240) {
[003F] (1A)   Var[153] = 240;
[0044] (**) }
[0044] (A0) stopObjectCode();
END

// Script 31: Set up Verbs
[0000] (2C) InitCharset(1);
[0003] (7A) VerbOps(1,[New(),Text("Open"),Key(111),SetXY(2,153),On()]);
[0015] (7A) VerbOps(2,[New(),Text("Close"),Key(99),SetXY(2,162),On()]);
[0028] (7A) VerbOps(6,[New(),Text("Push"),Key(115),SetXY(2,171),On()]);
[003A] (7A) VerbOps(7,[New(),Text("Pull"),Key(120),SetXY(2,180),On()]);
[004C] (7A) VerbOps(10,[New(),Text("Walk to"),Key(119),SetXY(48,153),On()]);
[0061] (7A) VerbOps(11,[New(),Text("Pick up"),Key(112),SetXY(48,162),On()]);
[0076] (7A) VerbOps(13,[New(),Text("Talk to"),Key(116),SetXY(48,171),On()]);
[008B] (7A) VerbOps(3,[New(),Text("Give"),Key(103),SetXY(48,180),On()]);
[009D] (7A) VerbOps(8,[New(),Text("Use"),Key(117),SetXY(100,153),On()]);
[00AE] (7A) VerbOps(9,[New(),Text("Look at"),Key(108),SetXY(100,162),On()]);
[00C3] (7A) VerbOps(4,[New(),Text("Turn on"),Key(110),SetXY(100,171),On()]);
[00D8] (7A) VerbOps(5,[New(),Text("Turn off"),Key(102),SetXY(100,180),On()]);
[00EE] (1A) Var[103] = 1;
[00F3] (FA) VerbOps(Var[103],[Color(2),HiColor(14),DimColor(8)]);
[00FD] (46) Var[103]++;
[0100] (44) unless (Var[103] > 13) goto 00F3;
[0107] (7A) VerbOps(129,[New(),Text("in"),Off()]);
[0110] (7A) VerbOps(130,[New(),Text("with"),Off()]);
[011B] (7A) VerbOps(131,[New(),Text("on"),Off()]);
[0124] (7A) VerbOps(132,[New(),Text("to"),Off()]);
[012D] (48) if (VAR_VIDEOMODE == 4) {
[0134] (7A)   VerbOps(101,[New(),SetXY(Var[122 + 1],Var[129 + 1]),Color(5),HiColor(15),Text(getName(Var[137])),Off(),Key(49)]);
[014E] (7A)   VerbOps(102,[New(),SetXY(Var[122 + 2],Var[129 + 2]),Color(5),HiColor(15),Text(getName(Var[138])),Off(),Key(50)]);
[0168] (7A)   VerbOps(103,[New(),SetXY(Var[122 + 3],Var[129 + 3]),Color(5),HiColor(15),Text(getName(Var[139])),Off(),Key(51)]);
[0182] (7A)   VerbOps(104,[New(),SetXY(Var[122 + 4],Var[129 + 4]),Color(5),HiColor(15),Text(getName(Var[140])),Off(),Key(52)]);
[019C] (7A)   VerbOps(105,[New(),SetXY(Var[122 + 5],Var[129 + 5]),Color(5),HiColor(15),Text(getName(Var[141])),Off(),Key(53)]);
[01B6] (7A)   VerbOps(106,[New(),SetXY(Var[122 + 6],Var[129 + 6]),Color(5),HiColor(15),Text(getName(Var[142])),Off(),Key(54)]);
[01D0] (18) } else {
[01D3] (7A)   VerbOps(101,[New(),SetXY(Var[122 + 1],Var[129 + 1]),Color(5),HiColor(13),Text(getName(Var[137])),Off(),Key(49)]);
[01ED] (7A)   VerbOps(102,[New(),SetXY(Var[122 + 2],Var[129 + 2]),Color(5),HiColor(13),Text(getName(Var[138])),Off(),Key(50)]);
[0207] (7A)   VerbOps(103,[New(),SetXY(Var[122 + 3],Var[129 + 3]),Color(5),HiColor(13),Text(getName(Var[139])),Off(),Key(51)]);
[0221] (7A)   VerbOps(104,[New(),SetXY(Var[122 + 4],Var[129 + 4]),Color(5),HiColor(13),Text(getName(Var[140])),Off(),Key(52)]);
[023B] (7A)   VerbOps(105,[New(),SetXY(Var[122 + 5],Var[129 + 5]),Color(5),HiColor(13),Text(getName(Var[141])),Off(),Key(53)]);
[0255] (7A)   VerbOps(106,[New(),SetXY(Var[122 + 6],Var[129 + 6]),Color(5),HiColor(13),Text(getName(Var[142])),Off(),Key(54)]);
[026F] (**) }
[026F] (7A) VerbOps(107,[New(),SetXY(149,153),Color(1),HiColor(9),DimColor(8),Text("\x01\x02" + newline() + "\x05\x06" + newline() + "\x07\x08"),Off(),Key(113)]);
[028D] (7A) VerbOps(108,[New(),SetXY(149,176),Color(1),HiColor(9),DimColor(8),Text(newline() + "\x05\x06" + newline() + "\x03\x04"),Off(),Key(97)]);
[02A9] (7A) VerbOps(100,[New(),SetXY(160,144),Color(3),Center(),Off()]);
[02B6] (2C) InitCharset(2);
[02B9] (A0) stopObjectCode();
END

// Script 32
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_ME;
[000A] (**) }
[000A] (9D) if (classOfIs(Local[0],[134])) {
[0013] (DD)   setClass(Local[0],[6]);
[001A] (A8)   if (Local[1]) {
[001F] (9D)     if (classOfIs(Local[1],[11])) {
[0028] (DD)       setClass(Local[1],[6]);
[002F] (**)     }
[002F] (**)   }
[002F] (**) }
[002F] (A0) stopObjectCode();
END

// Script 33
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_ME;
[000A] (**) }
[000A] (9D) if (classOfIs(Local[0],[6])) {
[0013] (DD)   setClass(Local[0],[134]);
[001A] (A8)   if (Local[1]) {
[001F] (9D)     if (classOfIs(Local[1],[11])) {
[0028] (DD)       setClass(Local[1],[134]);
[002F] (**)     }
[002F] (**)   }
[002F] (**) }
[002F] (A0) stopObjectCode();
END

// Script 34
[0000] (FE) walkActorTo(Local[0],Local[1],Local[2]);
[0007] (AE) WaitForActor(Local[0]);
[000B] (D1) animateCostume(Local[0],Local[3]);
[0010] (AE) WaitForActor(Local[0]);
[0014] (A8) if (Local[4]) {
[0019] (D1)   animateCostume(Local[0],Local[4]);
[001E] (AE)   WaitForActor(Local[0]);
[0022] (**) }
[0022] (A0) stopObjectCode();
END

// Script 35
[0000] (9A) Local[0] = VAR_CAMERA_POS_X;
[0005] (80) breakHere();
[0006] (88) if (Local[0] != VAR_CAMERA_POS_X) {
[000D] (18)   goto 0000;
[0010] (**) }
[0010] (A0) stopObjectCode();
END

// Script 36: Already Open/Closed
[0000] (D8) printEgo([Text("It's already " + keepText())]);
[0012] (48) if (Local[0] == 1) {
[0019] (D8)   printEgo([Text("open.")]);
[0021] (48) } else if (Local[0] == 2) {
[002B] (D8)   printEgo([Text("closed.")]);
[0035] (18)   /* goto 0038; */
[0038] (**) }
[0038] (A0) stopObjectCode();
END

// Script 79
[0000] (48) if (Local[0] == 4) {
[0007] (42)   chainScript(4,[Local[0],Local[1]]);
[0010] (**) }
[0010] (46) Var[173]++;
[0013] (A0) stopObjectCode();
END

// Script 94
[0000] (B1) Local[2] = getInventoryCount(VAR_EGO);
[0005] (1A) Local[1] = 1;
[000A] (FD) Local[0] = findInventory(VAR_EGO,Local[1]);
[0011] (A9) setOwnerOf(Local[0],0);
[0015] (46) Local[1]++;
[0018] (C4) unless (Local[1] > Local[2]) goto 000A;
[001F] (A0) stopObjectCode();
END

// Script 95
[0000] (48) if (Local[2] == 2) {
[0007] (28)   if (!Var[113]) {
[000C] (9A)     Var[110] = Var[171];
[0011] (**)   }
[0011] (**) }
[0011] (48) if (Local[0] == 4) {
[0018] (48)   if (Local[1] == 49) {
[001F] (14)     print(255,[Text(" ")]);
[0024] (18)   } else {
[0027] (0A)     startScript(24,[Local[1]]);
[002D] (9A)     Local[1] = Var[108];
[0032] (A8)     if (Local[1]) {
[0037] (1A)       Local[0] = 1;
[003C] (**)     }
[003C] (**)   }
[003C] (**) }
[003C] (48) if (Local[0] == 1) {
[0043] (48)   if (Local[1] == 100) {
[004A] (62)     stopScript(0);
[004C] (**)   }
[004C] (48)   if (Local[1] == 107) {
[0053] (3A)     Var[121] -= 1;
[0058] (42)     chainScript(12,[]);
[005B] (**)   }
[005B] (48)   if (Local[1] == 108) {
[0062] (5A)     Var[121] += 1;
[0067] (42)     chainScript(12,[]);
[006A] (**)   }
[006A] (38)   if (Local[1] >= 101) {
[0071] (04)     if (Local[1] <= 106) {
[0078] (AC)       Exprmode Local[4] = (Local[1] - 101);
[0083] (A8)       if (Var[113]) {
[0088] (9A)         Var[112] = Var[137 + Local[4]];
[008F] (18)       } else {
[0092] (9A)         Var[111] = Var[137 + Local[4]];
[0099] (**)       }
[0099] (1A)       Local[6] = 1;
[009E] (18)       goto 00BA;
[00A1] (**)     }
[00A1] (**)   }
[00A1] (9A)   Var[110] = Local[1];
[00A6] (1A)   Var[111] = 0;
[00AB] (1A)   Var[112] = 0;
[00B0] (1A)   Var[113] = 0;
[00B5] (1A)   Var[170] = -1;
[00BA] (**) }
[00BA] (48) if (Var[110] == 8) {
[00C1] (A8)   if (Var[111]) {
[00C6] (0A)     startScript(11,[Var[111]]);
[00CC] (9A)     Var[113] = Var[108];
[00D1] (**)   }
[00D1] (**) }
[00D1] (48) if (Var[110] == 3) {
[00D8] (A8)   if (Var[111]) {
[00DD] (1A)     Var[113] = 132;
[00E2] (**)   }
[00E2] (**) }
[00E2] (48) if (Local[0] == 2) {
[00E9] (A8)   if (Var[113]) {
[00EE] (A8)     if (Var[112]) {
[00F3] (1A)       Local[6] = 1;
[00F8] (**)     }
[00F8] (18)   } else {
[00FB] (1A)     Local[6] = 1;
[0100] (**)   }
[0100] (**) }
[0100] (28) if (!Var[110]) {
[0105] (9A)   Var[110] = Var[114];
[010A] (**) }
[010A] (0A) startScript(16,[]);
[010D] (A8) if (Local[6]) {
[0112] (A8)   if (Var[111]) {
[0117] (A8)     if (Var[113]) {
[011C] (A8)       if (Var[112]) {
[0121] (18)         goto 0142;
[0124] (18)       } else {
[0127] (18)         goto 0183;
[012A] (**)       }
[012A] (18)     } else {
[012D] (48)       if (Var[110] == 10) {
[0134] (90)         VAR_RESULT = getObjectOwner(Var[111]);
[0139] (08)         if (VAR_RESULT != 15) {
[0140] (62)           stopScript(0);
[0142] (**)         }
[0142] (**)       }
[0142] (19)       doSentence(STOP);
[0144] (F9)       doSentence(Var[110],Var[111],Var[112]);
[014B] (**)     }
[014B] (48)   } else if (Var[110] == 10) {
[0155] (28)     if (!Bit[5 + Var[1]]) {
[015C] (48)       if (Local[0] == 2) {
[0163] (19)         doSentence(STOP);
[0165] (FE)         walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[016C] (**)       }
[016C] (**)     }
[016C] (**)   }
[016C] (A8)   if (Var[169]) {
[0171] (8A)     startScript(Var[169],[]);
[0175] (**)   }
[0175] (28)   if (!Var[111]) {
[017A] (0A)     startScript(16,[]);
[017D] (18)   } else {
[0180] (0A)     startScript(15,[]);
[0183] (**)   }
[0183] (**) }
[0183] (A0) stopObjectCode();
END

// Script 96: Use Mint
[0000] (40) cutscene([]);
[0002] (29) setOwnerOf(458,14);
[0006] (0A) startScript(12,[]);
[0009] (91) animateCostume(VAR_EGO,250);
[000D] (D8) printEgo([Text("Hmmm.  My mouth feels minty fresh.")]);
[0032] (AE) WaitForMessage();
[0034] (C0) endCutscene();
[0035] (A0) stopObjectCode();
END

// Script 97
[0000] (72) loadRoom(0);
[0002] (32) setCameraAt(160);
[0005] (72) loadRoom(3);
[0007] (32) setCameraAt(160);
[000A] (A0) stopObjectCode();
END

// Script 98: Demo Intro
[0000] (33) SetPalColor(15,10)
[0006] (14) print(255,[Color(15),Pos(160,72),Center()]);
[0011] (2C) InitCharset(2);
[0014] (72) loadRoom(58);
[0016] (32) setCameraAt(160);
[0019] (80) breakHere();
[001A] (14) print(255,[Pos(213,29),Clipped(285),Text("All I ever wanted was to be a pirate.")]);
[004B] (58) beginOverride();
[004D] (18) goto 045C;
[0050] (AE) WaitForMessage();
[0052] (32) setCameraAt(800);
[0055] (2C) InitCharset(4);
[0058] (14) print(255,[Pos(160,72),Clipped(320),Text("Guybrush Threepwood" + keepText())]);
[0079] (0A) startScript(99,[]);
[007C] (80) breakHere();
[007D] (68) VAR_RESULT = isScriptRunning(99);
[0081] (28) unless (!VAR_RESULT) goto 007C;
[0086] (2E) delay(60);
[008A] (0A) startScript(100,[]);
[008D] (80) breakHere();
[008E] (68) VAR_RESULT = isScriptRunning(100);
[0092] (28) unless (!VAR_RESULT) goto 008D;
[0097] (14) print(255,[Text(" ")]);
[009C] (14) print(255,[Text(" ")]);
[00A1] (80) breakHere();
[00A2] (14) print(255,[Pos(160,72),Clipped(320),Text("Pirate-in-training" + keepText())]);
[00C2] (0A) startScript(99,[]);
[00C5] (80) breakHere();
[00C6] (68) VAR_RESULT = isScriptRunning(99);
[00CA] (28) unless (!VAR_RESULT) goto 00C5;
[00CF] (2E) delay(60);
[00D3] (0A) startScript(100,[]);
[00D6] (80) breakHere();
[00D7] (68) VAR_RESULT = isScriptRunning(100);
[00DB] (28) unless (!VAR_RESULT) goto 00D6;
[00E0] (14) print(255,[Text(" ")]);
[00E5] (14) print(255,[Text(" ")]);
[00EA] (80) breakHere();
[00EB] (2C) InitCharset(2);
[00EE] (33) SetPalColor(15,15)
[00F4] (32) setCameraAt(160);
[00F7] (80) breakHere();
[00F8] (14) print(255,[Pos(213,29),Clipped(285),Text("When I first arrived on the island, I was lost." + wait() + "I had no one to turn to for help.")]);
[0156] (AE) WaitForMessage();
[0158] (32) setCameraAt(480);
[015B] (80) breakHere();
[015C] (14) print(255,[Pos(72,32),Clipped(320),Text("When Guybrush first came to us he was frantic.")]);
[0196] (AE) WaitForMessage();
[0198] (32) setCameraAt(800);
[019B] (2C) InitCharset(4);
[019E] (14) print(255,[Pos(160,72),Clipped(320),Text("One-eyed Frank" + keepText())]);
[01BA] (0A) startScript(99,[]);
[01BD] (80) breakHere();
[01BE] (68) VAR_RESULT = isScriptRunning(99);
[01C2] (28) unless (!VAR_RESULT) goto 01BD;
[01C7] (2E) delay(60);
[01CB] (0A) startScript(100,[]);
[01CE] (80) breakHere();
[01CF] (68) VAR_RESULT = isScriptRunning(100);
[01D3] (28) unless (!VAR_RESULT) goto 01CE;
[01D8] (14) print(255,[Text(" ")]);
[01DD] (14) print(255,[Text(" ")]);
[01E2] (80) breakHere();
[01E3] (80) breakHere();
[01E4] (80) breakHere();
[01E5] (14) print(255,[Pos(160,72),Clipped(320),Text("Pirate Leader" + keepText())]);
[0200] (0A) startScript(99,[]);
[0203] (80) breakHere();
[0204] (68) VAR_RESULT = isScriptRunning(99);
[0208] (28) unless (!VAR_RESULT) goto 0203;
[020D] (2E) delay(60);
[0211] (0A) startScript(100,[]);
[0214] (80) breakHere();
[0215] (68) VAR_RESULT = isScriptRunning(100);
[0219] (28) unless (!VAR_RESULT) goto 0214;
[021E] (14) print(255,[Text(" ")]);
[0223] (14) print(255,[Text(" ")]);
[0228] (80) breakHere();
[0229] (2C) InitCharset(2);
[022C] (33) SetPalColor(15,15)
[0232] (32) setCameraAt(480);
[0235] (80) breakHere();
[0236] (14) print(255,[Pos(72,32),Clipped(320),Text("He didn't know where to begin to become a pirate^" + wait() + "^so we helped him out.")]);
[028B] (AE) WaitForMessage();
[028D] (32) setCameraAt(160);
[0290] (80) breakHere();
[0291] (14) print(255,[Pos(213,29),Clipped(285),Text("The Pirate Leaders were great!" + wait() + "They told me what to do^" + wait() + "^who to talk to^" + wait() + "^and where to go.")]);
[02FA] (AE) WaitForMessage();
[02FC] (80) breakHere();
[02FD] (14) print(255,[Pos(213,29),Clipped(285),Text("I'm almost done with the three trials." + wait() + "I don't think I'll have any trouble finishing.")]);
[035F] (AE) WaitForMessage();
[0361] (32) setCameraAt(480);
[0364] (80) breakHere();
[0365] (14) print(255,[Pos(72,32),Clipped(320),Text("Sure, we're taking a risk on Guybrush." + wait() + "But taking risks is what pirating is all about.")]);
[03C8] (AE) WaitForMessage();
[03CA] (80) breakHere();
[03CB] (14) print(255,[Pos(72,32),Clipped(320),Text("I think this risk will be worth it.")]);
[03FA] (AE) WaitForMessage();
[03FC] (80) breakHere();
[03FD] (32) setCameraAt(800);
[0400] (80) breakHere();
[0401] (14) print(255,[Pos(160,72),Clipped(320),Text("Do pirates really help each other out like this?")]);
[043D] (AE) WaitForMessage();
[043F] (2E) delay(10);
[0443] (14) print(255,[Pos(160,72),Clipped(320),Text("Pirates do.")]);
[045A] (AE) WaitForMessage();
[045C] (62) stopScript(99);
[045E] (62) stopScript(100);
[0460] (2C) InitCharset(2);
[0463] (33) SetPalColor(15,15)
[0469] (33) SetPalColor(10,10)
[046F] (72) loadRoom(0);
[0471] (80) breakHere();
[0472] (A0) stopObjectCode();
END

// Script 99
[0000] (33) SetPalColor(0,15)
[0006] (80) breakHere();
[0007] (33) SetPalColor(8,15)
[000D] (80) breakHere();
[000E] (33) SetPalColor(7,15)
[0014] (80) breakHere();
[0015] (33) SetPalColor(15,15)
[001B] (80) breakHere();
[001C] (A0) stopObjectCode();
END

// Script 100
[0000] (33) SetPalColor(15,15)
[0006] (80) breakHere();
[0007] (33) SetPalColor(7,15)
[000D] (80) breakHere();
[000E] (33) SetPalColor(8,15)
[0014] (80) breakHere();
[0015] (33) SetPalColor(0,15)
[001B] (80) breakHere();
[001C] (A0) stopObjectCode();
END
