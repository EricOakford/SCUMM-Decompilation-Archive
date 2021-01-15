/**
 * Lucasfilm Passport to Adventure
 * 
 * Global Scripts
 */

// Script 1: Game Initialization
[0000] (1A) VAR_TIMER_NEXT = 6;
[0005] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[000A] (1A) VAR_RESTART_KEY = 322;
[000F] (1A) VAR_PAUSE_KEY = 32;
[0014] (2C) InitCharset(2);
[0017] (27) PutCodeInString(24, "Lucasfilm Passport to Adventure Version 1.0 9/14/90");
[004E] (27) PutCodeInString(4, "Game Paused.  Press SPACE to Continue.");
[0078] (27) PutCodeInString(1, "Insert Disk %c and Press Button to Continue.");
[00A8] (27) PutCodeInString(2, "Unable to Find %s, (%c%d) Press Button.");
[00D3] (27) PutCodeInString(3, "Can't read %s, (%c%d) Press Button.");
[00FA] (27) PutCodeInString(5, "Are you sure you want to restart?  (Y/N)Y");
[0127] (27) PutCodeInString(6, "Are you sure you want to quit?  (Y/N)Y");
[0151] (27) PutCodeInString(7, "Save");
[0159] (27) PutCodeInString(8, "Load");
[0161] (27) PutCodeInString(9, "Play");
[0169] (27) PutCodeInString(10, "Cancel");
[0173] (27) PutCodeInString(11, "Quit");
[017B] (27) PutCodeInString(12, "Ok");
[0181] (27) PutCodeInString(13, "Insert save/load game disk");
[019F] (27) PutCodeInString(14, "You must enter a name");
[01B8] (27) PutCodeInString(15, "The game was NOT saved");
[01D2] (27) PutCodeInString(16, "The game was NOT loaded");
[01ED] (27) PutCodeInString(17, "Saving '%s'");
[01FC] (27) PutCodeInString(18, "Loading '%s'");
[020C] (27) PutCodeInString(19, "Name your SAVE game");
[0223] (27) PutCodeInString(20, "Select a game to LOAD");
[023C] (33) SetScreen(0,200)
[0242] (27) PutCodeInString(21, "@@@@@@@@@@@@@@@@");
[0256] (27) SetStringChar(21,0,0);
[025B] (27) SetStringChar(21,1,1);
[0260] (27) SetStringChar(21,2,11);
[0265] (27) SetStringChar(21,3,3);
[026A] (27) SetStringChar(21,4,0);
[026F] (27) SetStringChar(21,5,11);
[0274] (27) SetStringChar(21,6,11);
[0279] (27) SetStringChar(21,7,3);
[027E] (27) SetStringChar(21,8,1);
[0283] (27) SetStringChar(21,9,0);
[0288] (27) SetStringChar(21,10,1);
[028D] (27) SetStringChar(21,11,11);
[0292] (27) SetStringChar(21,12,9);
[0297] (1A) VAR_MAINMENU_KEY = 319;
[029C] (26) setVarRange(Var[122],7,[0,176,176,176,176,176,176]);
[02A7] (26) setVarRange(Var[129],7,[0,152,160,168,176,184,192]);
[02B2] (1A) Var[118] = 6;
[02B7] (AC) Exprmode VAR_CHARINC = (9 - Var[118]);
[02C2] (1A) VAR_CUTSCENE_START_SCRIPT = 22;
[02C7] (1A) VAR_CUTSCENE_END_SCRIPT = 23;
[02CC] (1A) VAR_ENTRY_SCRIPT = 5;
[02D1] (1A) VAR_ENTRY_SCRIPT2 = 6;
[02D6] (1A) VAR_EXIT_SCRIPT = 7;
[02DB] (1A) VAR_SENTENCE_SCRIPT = 2;
[02E0] (1A) VAR_INVENTORY_SCRIPT = 12;
[02E5] (1A) VAR_NUM_ACTOR = 12;
[02EA] (0C) Resource.clearHeap();
[02EC] (2C) CursorShow();
[02EE] (2C) UserputOn();
[02F0] (5C) oldRoomEffect-set(-32383);
[02F4] (1A) Var[118] = 6;
[02F9] (AC) Exprmode VAR_CHARINC = (9 - Var[118]);
[0304] (72) loadRoom(0);
[0306] (28) if (!Bit[54]) {
[030B] (40)   cutscene([]);
[030D] (33)   SetScreen(0,200)
[0313] (0C)   Resource.loadRoom(3);
[0316] (0C)   Resource.loadCostume(2);
[0319] (1A)   Var[108] = 0;
[031E] (5C)   oldRoomEffect-set(129);
[0322] (72)   loadRoom(3);
[0324] (58)   beginOverride();
[0326] (18)   goto 032F;
[0329] (80)   breakHere();
[032A] (A8)   unless (Var[108]) goto 0329;
[032F] (0C)   Resource.nukeRoom(3);
[0332] (0C)   Resource.nukeCostume(2);
[0335] (1A)   Bit[54] = 1;
[033A] (C0)   endCutscene();
[033B] (**) }
[033B] (42) chainScript(66,[]);
[033E] (A0) stopObjectCode();
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
[004D] (18)     goto 03CF;
[0050] (**)   }
[0050] (**) }
[0050] (38) if (Local[0] >= 30) {
[0057] (04)   if (Local[0] <= 40) {
[005E] (48)     if (Local[0] == 32) {
[0065] (8A)       startScript(Var[101],[]);
[0069] (18)     } else {
[006C] (AC)       Exprmode Local[5] = (Local[0] - 32);
[0077] (9A)       VAR_EGO = Local[5];
[007C] (0A)       startScript(57,[]);
[007F] (D2)       actorFollowCamera(VAR_EGO);
[0082] (**)     }
[0082] (18)     goto 011D;
[0085] (**)   }
[0085] (**) }
[0085] (9A) Local[3] = VAR_EGO;
[008A] (48) if (Local[0] == 3) {
[0091] (44)   if (Local[2] > 12) {
[0098] (9D)     if (classOfIs(Local[2],[133])) {
[00A1] (0A)       startScript(14,[Local[1],Local[2]]);
[00AA] (18)       goto 03CF;
[00AD] (**)     }
[00AD] (18)   } else {
[00B0] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[00B5] (48)     if (VAR_RESULT == 15) {
[00BC] (18)       goto 022D;
[00BF] (**)     }
[00BF] (28)     if (!Bit[5 + Local[3]]) {
[00C6] (CD)       walkActorToActor(Local[3],Local[2],255);
[00CC] (**)     }
[00CC] (AE)     WaitForActor(Local[3]);
[00D0] (AC)     Exprmode Local[7] = ((<VAR_RESULT = getActorWidth(Local[2])> / 2) + 4);
[00E2] (EC)     VAR_RESULT = getActorWidth(Local[3]);
[00E7] (DA)     Local[7] += VAR_RESULT;
[00EC] (F4)     VAR_RESULT = getDist(Local[3],Local[2]);
[00F3] (84)     if (VAR_RESULT <= Local[7]) {
[00FA] (8B)       VAR_RESULT = getVerbEntryPoint(Local[1],3);
[0101] (A8)       if (VAR_RESULT) {
[0106] (C9)         faceActor(Local[2],Local[3]);
[010B] (C9)         faceActor(Local[3],Local[2]);
[0110] (9A)         VAR_ME = Local[1];
[0115] (B7)         startObject(Local[1],3,[Local[2]]);
[011D] (0A)         startScript(15,[]);
[0120] (18)         goto 03CF;
[0123] (9D)       } else if (classOfIs(Local[2],[133])) {
[012F] (8A)         startScript(Var[102],[Local[1],Local[3],Local[2]]);
[013C] (18)       } else {
[013F] (42)         chainScript(3,[Local[0]]);
[0145] (**)       }
[0145] (**)     }
[0145] (18)     goto 03CF;
[0148] (**)   }
[0148] (**) }
[0148] (48) if (Local[0] == 9) {
[014F] (48)   if (VAR_CURRENT_LIGHTS == 0) {
[0156] (D8)     printEgo([Text("It's too dark to see it.")]);
[0171] (18)     goto 011D;
[0174] (**)   }
[0174] (**) }
[0174] (CB) VAR_RESULT = getVerbEntryPoint(Local[1],Local[0]);
[017B] (28) if (!VAR_RESULT) {
[0180] (9A)   Local[4] = Local[1];
[0185] (9D)   if (classOfIs(Local[4],[136])) {
[018E] (42)     chainScript(3,[Local[0]]);
[0194] (**)   }
[0194] (28)   if (!Bit[5 + Local[3]]) {
[019B] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[01A0] (48)     if (VAR_RESULT == 15) {
[01A7] (9D)       if (classOfIs(Local[4],[138])) {
[01B0] (FE)         walkActorTo(Local[3],VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01B7] (AE)         WaitForActor(Local[3]);
[01BB] (08)         if (Local[0] != 10) {
[01C2] (42)           chainScript(3,[Local[0]]);
[01C8] (18)         } else {
[01CB] (18)           goto 03CF;
[01CE] (**)         }
[01CE] (18)       } else {
[01D1] (F6)         walkActorToObject(Local[3],Local[4]);
[01D6] (**)       }
[01D6] (**)     }
[01D6] (**)   }
[01D6] (AE)   WaitForActor(Local[3]);
[01DA] (F4)   VAR_RESULT = getDist(Local[3],Local[4]);
[01E1] (04)   if (VAR_RESULT <= 16) {
[01E8] (08)     if (Local[0] != 10) {
[01EF] (42)       chainScript(3,[Local[0]]);
[01F5] (**)     }
[01F5] (18)   } else {
[01F8] (18)     goto 02ED;
[01FB] (**)   }
[01FB] (18) } else {
[01FE] (1A)   Var[103] = 0;
[0203] (08)   if (Local[0] != 10) {
[020A] (08)     if (Local[0] != 9) {
[0211] (08)       if (Local[0] != 11) {
[0218] (90)         VAR_RESULT = getObjectOwner(Local[1]);
[021D] (48)         if (VAR_RESULT == 15) {
[0224] (9D)           if (classOfIs(Local[1],[135])) {
[022D] (F9)             doSentence(Local[0],Local[1],Local[2]);
[0234] (59)             doSentence(11,Local[1],0);
[023A] (18)             goto 03CF;
[023D] (**)           }
[023D] (46)           Var[103]++;
[0240] (**)         }
[0240] (90)         VAR_RESULT = getObjectOwner(Local[2]);
[0245] (48)         if (VAR_RESULT == 15) {
[024C] (9D)           if (classOfIs(Local[2],[135])) {
[0255] (F9)             doSentence(Local[0],Local[1],Local[2]);
[025C] (59)             doSentence(11,Local[2],0);
[0262] (18)             goto 03CF;
[0265] (**)           }
[0265] (46)           Var[103]++;
[0268] (**)         }
[0268] (48)         if (Var[103] == 2) {
[026F] (42)           chainScript(3,[Local[0]]);
[0275] (**)         }
[0275] (**)       }
[0275] (**)     }
[0275] (**)   }
[0275] (9A)   Local[4] = Local[1];
[027A] (90)   VAR_RESULT = getObjectOwner(Local[1]);
[027F] (08)   if (VAR_RESULT != 15) {
[0286] (A8)     if (Local[2]) {
[028B] (90)       VAR_RESULT = getObjectOwner(Local[2]);
[0290] (48)       if (VAR_RESULT == 15) {
[0297] (9A)         Local[4] = Local[2];
[029C] (**)       }
[029C] (**)     }
[029C] (**)   }
[029C] (90)   VAR_RESULT = getObjectOwner(Local[4]);
[02A1] (48)   if (VAR_RESULT == 15) {
[02A8] (28)     if (!Bit[5 + Local[3]]) {
[02AF] (9D)       if (classOfIs(Local[4],[136])) {
[02B8] (80)         breakHere();
[02B9] (18)         goto 0314;
[02BC] (**)       }
[02BC] (9D)       if (classOfIs(Local[4],[138])) {
[02C5] (FE)         walkActorTo(Local[3],VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[02CC] (AE)         WaitForActor(Local[3]);
[02D0] (18)         goto 0314;
[02D3] (18)       } else {
[02D6] (F6)         walkActorToObject(Local[3],Local[4]);
[02DB] (AE)         WaitForActor(Local[3]);
[02DF] (**)       }
[02DF] (**)     }
[02DF] (**)   }
[02DF] (F4)   VAR_RESULT = getDist(Local[3],Local[4]);
[02E6] (44)   if (VAR_RESULT > 16) {
[02ED] (C9)     faceActor(Local[3],Local[4]);
[02F2] (AE)     WaitForActor(Local[3]);
[02F6] (D8)     printEgo([Text("I can't reach it.")]);
[030A] (0A)     startScript(15,[]);
[030D] (0A)     startScript(16,[]);
[0310] (19)     doSentence(STOP);
[0312] (62)     stopScript(0);
[0314] (**)   }
[0314] (A8)   if (Bit[5 + Local[3]]) {
[031B] (48)     if (Local[0] == 10) {
[0322] (18)       goto 03CF;
[0325] (**)     }
[0325] (**)   }
[0325] (1A)   Local[6] = 0;
[032A] (9D)   if (classOfIs(Local[1],[144])) {
[0333] (48)     if (Var[364] == 1) {
[033A] (1A)       Local[6] = 12;
[033F] (48)     } else if (Var[364] == 3) {
[0349] (1A)       Local[6] = 11;
[034E] (18)       /* goto 0351; */
[0351] (**)     }
[0351] (9D)   } else if (classOfIs(Local[1],[143])) {
[035D] (1A)     Local[6] = 10;
[0362] (9D)   } else if (classOfIs(Local[1],[142])) {
[036E] (48)     if (Var[364] == 1) {
[0375] (1A)       Local[6] = 11;
[037A] (48)     } else if (Var[364] == 3) {
[0384] (1A)       Local[6] = 12;
[0389] (18)       /* goto 038C; */
[038C] (**)     }
[038C] (**)   }
[038C] (A8)   if (Local[6]) {
[0391] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[0396] (48)     if (VAR_RESULT == 15) {
[039D] (08)       if (Local[0] != 10) {
[03A4] (08)         if (Local[0] != 9) {
[03AB] (40)           cutscene([2]);
[03B0] (D1)           animateCostume(VAR_EGO,Local[6]);
[03B5] (2E)           delay(20);
[03B9] (91)           animateCostume(VAR_EGO,3);
[03BD] (C0)           endCutscene();
[03BE] (**)         }
[03BE] (**)       }
[03BE] (**)     }
[03BE] (**)   }
[03BE] (9A)   VAR_ME = Local[1];
[03C3] (F7)   startObject(Local[1],Local[0],[Local[2],Local[0]]);
[03CF] (**) }
[03CF] (0A) startScript(16,[]);
[03D2] (1A) Var[193] = -1;
[03D7] (A0) stopObjectCode();
END

// Script 3: Verb defaults
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = Var[110];
[000A] (**) }
[000A] (40) cutscene([2]);
[000F] (48) if (Local[0] == 1) {
[0016] (D8)   printEgo([Text("It doesn't seem to open.")]);
[0031] (48) } else if (Local[0] == 6) {
[003B] (18)   goto 0048;
[003E] (48) } else if (Local[0] == 7) {
[0048] (D8)   printEgo([Text("I can't move it.")]);
[005B] (48) } else if (Local[0] == 9) {
[0065] (D8)   printEgo([Text("I don't see anything special about it.")]);
[008E] (48) } else if (Local[0] == 11) {
[0098] (D8)   printEgo([Text("I can't pick that up.")]);
[00B0] (48) } else if (Local[0] == 79) {
[00BA] (D8)   printEgo([Text("I can't reach that from here.")]);
[00DA] (18) } else {
[00DD] (D8)   printEgo([Text("That doesn't seem to work.")]);
[00FA] (**) }
[00FA] (AE) WaitForMessage();
[00FC] (C0) endCutscene();
[00FD] (14) print(255,[]);
[0100] (19) doSentence(STOP);
[0102] (0A) startScript(15,[]);
[0105] (0A) startScript(16,[]);
[0108] (A0) stopObjectCode();
END

// Script 5: Room Entry
[0000] (70) lights(11,0,0);
[0004] (48) if (Var[364] == 1) {
[000B] (14)   print(255,[Pos(0,0)]);
[0013] (48) } else if (Var[364] == 3) {
[001D] (14)   print(255,[Pos(160,8),Center(),Overhead()]);
[0027] (18)   /* goto 002A; */
[002A] (**) }
[002A] (A0) stopObjectCode();
END

// Script 6: Room Entry 2
[0000] (08) if (Var[364] != 2) {
[0007] (0A)   startScript(15,[]);
[000A] (0A)   startScript(16,[]);
[000D] (9A)   Var[117] = VAR_WALKTO_OBJ;
[0012] (19)   doSentence(STOP);
[0014] (0A)   startScript(57,[]);
[0017] (**) }
[0017] (A0) stopObjectCode();
END

// Script 7: Room Exit
[0000] (9A) Var[104] = VAR_ROOM;
[0005] (48) if (Var[364] == 1) {
[000C] (14)   print(255,[Pos(0,0)]);
[0014] (48) } else if (Var[364] == 2) {
[001E] (1A)   Var[321] = 0;
[0023] (1A)   Bit[88] = 0;
[0028] (62)   stopScript(123);
[002A] (1A)   Var[199] = 0;
[002F] (0A)   startScript(100,[0]);
[0035] (0A)   startScript(116,[]);
[0038] (9A)   Var[104] = VAR_ROOM;
[003D] (48) } else if (Var[364] == 3) {
[0047] (14)   print(255,[Pos(160,8),Center(),Overhead()]);
[0051] (A8)   if (Var[194]) {
[0056] (FA)     VerbOps(Var[194],[Color(2)]);
[005C] (1A)     Var[194] = 0;
[0061] (**)   }
[0061] (A8)   if (Var[195]) {
[0066] (FA)     VerbOps(Var[195],[Color(2)]);
[006C] (1A)     Var[195] = 0;
[0071] (**)   }
[0071] (18)   /* goto 0074; */
[0074] (**) }
[0074] (A0) stopObjectCode();
END

// Script 8
[0000] (A0) stopObjectCode();
END

// Script 10
[0000] (48) if (Local[0] == 4) {
[0007] (48)   if (Local[1] == 319) {
[000E] (2C)     InitCharset(1);
[0011] (2C)     CursorShow();
[0013] (5C)     oldRoomEffect-set(-32383);
[0017] (AD)     putActorInRoom(VAR_EGO,0);
[001B] (**)   }
[001B] (0A)   startScript(24,[Local[1]]);
[0021] (**) }
[0021] (A0) stopObjectCode();
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

// Script 12: Inventory
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
[0014] (1A) Var[193] = 0;
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

// Script 18: Indy Gives Something
[0000] (48) if (Local[0] == 2) {
[0007] (48)   if (Var[364] == 3) {
[000E] (F5)     Local[3] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0015] (1A)     Local[4] = 0;
[001A] (48)     if (Var[379 + Local[4]] == 1) {
[0023] (AC)       Exprmode Local[1] = (120 + Local[4]);
[002E] (1A)       Local[0] = 1;
[0033] (A8)       if (Bit[40 + Local[4]]) {
[003A] (1A)         Bit[28] = 0;
[003F] (18)       } else {
[0042] (1A)         Bit[28] = 1;
[0047] (**)       }
[0047] (A8)     } else if (Local[3]) {
[004F] (C8)       if (Var[379 + Local[4]] == Local[3]) {
[0058] (AC)         Exprmode Local[1] = (120 + Local[4]);
[0063] (1A)         Local[0] = 1;
[0068] (A8)         if (Bit[40 + Local[4]]) {
[006F] (1A)           Bit[28] = 0;
[0074] (18)         } else {
[0077] (1A)           Bit[28] = 1;
[007C] (**)         }
[007C] (**)       }
[007C] (**)     }
[007C] (46)     Local[4]++;
[007F] (44)     unless (Local[4] > 8) goto 001A;
[0086] (**)   }
[0086] (**) }
[0086] (48) if (Local[0] == 1) {
[008D] (48)   if (Var[364] == 1) {
[0094] (48)     if (Local[1] == 107) {
[009B] (3A)       Var[121] -= 2;
[00A0] (42)       chainScript(12,[]);
[00A3] (48)     } else if (Local[1] == 108) {
[00AD] (5A)       Var[121] += 2;
[00B2] (42)       chainScript(12,[]);
[00B5] (**)     }
[00B5] (A8)     if (Local[1]) {
[00BA] (1A)       Var[103] = 101;
[00BF] (FA)       VerbOps(Var[103],[Off()]);
[00C4] (46)       Var[103]++;
[00C7] (44)       unless (Var[103] > 125) goto 00BF;
[00CE] (7A)       VerbOps(14,[Off()]);
[00D2] (2C)       CursorHide();
[00D4] (2C)       UserputOff();
[00D6] (**)     }
[00D6] (48)     if (Local[1] == 14) {
[00DD] (18)     } else {
[00E0] (38)       unless (Local[1] >= 120) goto 0108;
[00E7] (04)       unless (Local[1] <= 125) goto 0108;
[00EE] (04)       if (Local[1] <= 125) {
[00F5] (D8)         printEgo([Text(getVerb(Local[1]))]);
[00FC] (2E)         delay(120);
[0100] (**)       }
[0100] (**)     }
[0100] (14)     print(255,[]);
[0103] (9A)     Var[190] = Local[1];
[0108] (38)     if (Local[1] >= 101) {
[010F] (04)       if (Local[1] <= 106) {
[0116] (AC)         Exprmode Local[2] = (Local[1] - 101);
[0121] (9A)         Local[3] = Var[137 + Local[2]];
[0128] (D8)         printEgo([Text("Take " + keepText())]);
[0132] (9D)         if (classOfIs(Local[3],[137])) {
[013B] (D8)           printEgo([Text("these" + keepText())]);
[0145] (18)         } else {
[0148] (D8)           printEgo([Text("this" + keepText())]);
[0151] (**)         }
[0151] (AE)         WaitForMessage();
[0153] (9A)         Var[190] = Local[3];
[0158] (**)       }
[0158] (**)     }
[0158] (48)   } else if (Var[364] == 3) {
[0162] (48)     if (Local[1] == 107) {
[0169] (9A)       Var[190] = Local[1];
[016E] (62)       stopScript(0);
[0170] (48)     } else if (Local[1] == 108) {
[017A] (9A)       Var[190] = Local[1];
[017F] (62)       stopScript(0);
[0181] (**)     }
[0181] (A8)     if (Local[1]) {
[0186] (1A)       Var[103] = 120;
[018B] (FA)       VerbOps(Var[103],[Off()]);
[0190] (46)       Var[103]++;
[0193] (44)       unless (Var[103] > 128) goto 018B;
[019A] (7A)       VerbOps(107,[Off()]);
[019E] (7A)       VerbOps(108,[Off()]);
[01A2] (26)       setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[01AF] (26)       setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[01BC] (2C)       CursorHide();
[01BE] (2C)       UserputOff();
[01C0] (**)     }
[01C0] (38)     if (Local[1] >= 120) {
[01C7] (04)       if (Local[1] <= 128) {
[01CE] (28)         if (!Bit[28]) {
[01D3] (D8)           printEgo([Text(getVerb(Local[1]))]);
[01DA] (AE)           WaitForMessage();
[01DC] (80)           breakHere();
[01DD] (80)           breakHere();
[01DE] (**)         }
[01DE] (14)         print(255,[]);
[01E1] (9A)         Var[190] = Local[1];
[01E6] (**)       }
[01E6] (**)     }
[01E6] (18)     /* goto 01E9; */
[01E9] (**)   }
[01E9] (**) }
[01E9] (48) if (Local[0] == 4) {
[01F0] (42)   chainScript(24,[Local[1]]);
[01F6] (**) }
[01F6] (A0) stopObjectCode();
END

// Script 19
[0000] (48) if (Local[0] == 4) {
[0007] (48)   if (Local[1] == 13) {
[000E] (9A)     Var[120] = Local[1];
[0013] (62)     stopScript(0);
[0015] (**)   }
[0015] (38)   if (Local[1] >= 327) {
[001C] (04)     if (Local[1] <= 337) {
[0023] (08)       if (Local[1] != 334) {
[002A] (08)         if (Local[1] != 330) {
[0031] (08)           if (Local[1] != 332) {
[0038] (9A)             Var[120] = Local[1];
[003D] (62)             stopScript(0);
[003F] (**)           }
[003F] (**)         }
[003F] (**)       }
[003F] (**)     }
[003F] (**)   }
[003F] (42)   chainScript(24,[Local[1]]);
[0045] (**) }
[0045] (A0) stopObjectCode();
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

// Script 21: Indy Offers Something
[0000] (48) if (Var[109] == 1) {
[0007] (1A)   Var[109] = 0;
[000C] (**) }
[000C] (48) if (Local[0] == 4) {
[0013] (1A)   Var[103] = 1;
[0018] (FA)   VerbOps(Var[103],[Off()]);
[001D] (46)   Var[103]++;
[0020] (44)   unless (Var[103] > 125) goto 0018;
[0027] (E2)   stopScript(Var[362]);
[002A] (48)   if (Var[364] == 3) {
[0031] (1A)     Var[193] = 999;
[0036] (A8)     if (Var[195]) {
[003B] (FA)       VerbOps(Var[195],[Color(2)]);
[0041] (1A)       Var[195] = 0;
[0046] (**)     }
[0046] (**)   }
[0046] (48) } else if (Local[0] == 2) {
[0050] (1A)   Var[193] = 999;
[0055] (1A)   Var[103] = 119;
[005A] (FA)   VerbOps(Var[103],[Delete()]);
[005F] (46)   Var[103]++;
[0062] (44)   unless (Var[103] > 125) goto 005A;
[0069] (7A)   VerbOps(14,[Delete()]);
[006D] (7A)   VerbOps(90,[Delete()]);
[0071] (7A)   VerbOps(91,[Delete()]);
[0075] (7A)   VerbOps(92,[Delete()]);
[0079] (AB)   restoreVerbs(1,100,1);
[007E] (AB)   restoreVerbs(101,108,5);
[0083] (0A)   startScript(57,[]);
[0086] (0A)   startScript(12,[]);
[0089] (48)   if (Var[109] == 0) {
[0090] (1A)     Var[109] = 1;
[0095] (**)   }
[0095] (8A)   startScript(Var[362],[]);
[0099] (48) } else if (Local[0] == 1) {
[00A3] (48)   if (Var[364] == 3) {
[00AA] (1A)     Var[193] = 999;
[00AF] (A8)     if (Var[195]) {
[00B4] (FA)       VerbOps(Var[195],[Color(2)]);
[00BA] (1A)       Var[195] = 0;
[00BF] (**)     }
[00BF] (**)   }
[00BF] (AB)   saveVerbs(1,13,1);
[00C4] (AB)   saveVerbs(101,108,5);
[00C9] (AB)   saveVerbs(32,34,1);
[00CE] (AB)   saveVerbs(100,100,1);
[00D3] (E2)   stopScript(Var[362]);
[00D6] (48) } else if (Local[0] == 3) {
[00E0] (48)   if (Var[364] == 1) {
[00E7] (7A)     VerbOps(120,[New(),SetXY(0,145),Color(2),HiColor(14)]);
[00F4] (7A)     VerbOps(121,[New(),SetXY(0,154),Color(2),HiColor(14)]);
[0101] (7A)     VerbOps(122,[New(),SetXY(0,163),Color(2),HiColor(14)]);
[010E] (7A)     VerbOps(123,[New(),SetXY(0,172),Color(2),HiColor(14)]);
[011B] (7A)     VerbOps(124,[New(),SetXY(0,181),Color(2),HiColor(14)]);
[0128] (7A)     VerbOps(125,[New(),SetXY(160,190),Color(3),HiColor(11)]);
[0135] (7A)     VerbOps(14,[New(),SetXY(0,145),Color(2),HiColor(14)]);
[0142] (7A)     VerbOps(119,[New(),SetXY(0,168),DimColor(14)]);
[014D] (0A)     startScript(21,[1]);
[0153] (48)   } else if (Var[364] == 3) {
[015D] (1A)     Var[193] = 999;
[0162] (A8)     if (Var[195]) {
[0167] (FA)       VerbOps(Var[195],[Color(2)]);
[016D] (1A)       Var[195] = 0;
[0172] (**)     }
[0172] (2C)     InitCharset(1);
[0175] (7A)     VerbOps(120,[New(),SetXY(0,145),Color(2),HiColor(14)]);
[0182] (7A)     VerbOps(121,[New(),SetXY(0,154),Color(2),HiColor(14)]);
[018F] (7A)     VerbOps(122,[New(),SetXY(0,163),Color(2),HiColor(14)]);
[019C] (7A)     VerbOps(123,[New(),SetXY(0,172),Color(2),HiColor(14)]);
[01A9] (7A)     VerbOps(124,[New(),SetXY(0,181),Color(2),HiColor(14)]);
[01B6] (7A)     VerbOps(125,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[01C3] (7A)     VerbOps(126,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[01D0] (7A)     VerbOps(127,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[01DD] (7A)     VerbOps(128,[New(),SetXY(0,190),Color(2),HiColor(14)]);
[01EA] (2C)     InitCharset(2);
[01ED] (0A)     startScript(21,[1]);
[01F3] (18)     /* goto 01F6; */
[01F6] (**)   }
[01F6] (48) } else if (Local[0] == 5) {
[0200] (7A)   VerbOps(90,[New(),SetXY(0,145),Color(2),HiColor(14)]);
[020D] (10)   VAR_RESULT = getObjectOwner(148);
[0212] (C8)   if (VAR_RESULT == VAR_EGO) {
[0219] (10)     VAR_RESULT = getObjectOwner(237);
[021E] (C8)     if (VAR_RESULT == VAR_EGO) {
[0225] (10)       VAR_RESULT = getObjectOwner(229);
[022A] (C8)       if (VAR_RESULT == VAR_EGO) {
[0231] (7A)         VerbOps(91,[New(),SetXY(0,154),Color(2),HiColor(14)]);
[023E] (**)       }
[023E] (**)     }
[023E] (**)   }
[023E] (7A)   VerbOps(92,[New(),SetXY(287,172),Color(4),HiColor(12)]);
[024B] (0A)   startScript(21,[1]);
[0251] (48) } else if (Local[0] == 6) {
[025B] (1A)   Var[103] = 120;
[0260] (FA)   VerbOps(Var[103],[Off()]);
[0265] (46)   Var[103]++;
[0268] (44)   unless (Var[103] > 125) goto 0260;
[026F] (7A)   VerbOps(14,[On(),Text("Never mind.")]);
[0280] (7A)   VerbOps(119,[Dim(),Text("Take this:")]);
[0290] (AB)   restoreVerbs(101,108,5);
[0295] (0A)   startScript(12,[]);
[0298] (18)   /* goto 029B; */
[029B] (**) }
[029B] (A0) stopObjectCode();
END

// Script 22
[0000] (48) if (Var[364] == 2) {
[0007] (68)   VAR_RESULT = isScriptRunning(65);
[000B] (28)   if (!VAR_RESULT) {
[0010] (2C)     CursorSoftOff();
[0012] (2C)     UserputSoftOff();
[0014] (60)     freezeScripts(127);
[0016] (1A)     Bit[79] = 1;
[001B] (1A)     VAR_OVERRIDE = 0;
[0020] (48)     if (Local[0] == 1) {
[0027] (0A)       startScript(108,[]);
[002A] (A8)       if (Var[198]) {
[002F] (1A)         Var[199] = 0;
[0034] (0A)         startScript(100,[0]);
[003A] (**)       }
[003A] (**)     }
[003A] (18)   } else {
[003D] (2C)     CursorShow();
[003F] (2C)     UserputOn();
[0041] (AB)     saveVerbs(1,125,2);
[0046] (**)   }
[0046] (48) } else if (Local[0] == 3) {
[0050] (2C)   CursorShow();
[0052] (2C)   UserputOn();
[0054] (AB)   saveVerbs(1,125,2);
[0059] (60)   freezeScripts(127);
[005B] (18) } else {
[005E] (2C)   CursorSoftOff();
[0060] (2C)   UserputSoftOff();
[0062] (A8)   if (Var[195]) {
[0067] (FA)     VerbOps(Var[195],[Color(2)]);
[006D] (1A)     Var[195] = 0;
[0072] (**)   }
[0072] (48)   if (Local[0] == 1) {
[0079] (AB)     saveVerbs(1,125,2);
[007E] (**)   }
[007E] (60)   freezeScripts(127);
[0080] (**) }
[0080] (A0) stopObjectCode();
END

// Script 23
[0000] (48) if (Var[364] == 2) {
[0007] (68)   VAR_RESULT = isScriptRunning(65);
[000B] (28)   if (!VAR_RESULT) {
[0010] (48)     if (Local[0] == 1) {
[0017] (A8)       if (Bit[67]) {
[001C] (0A)         startScript(134,[2]);
[0022] (**)       }
[0022] (**)     }
[0022] (2C)     CursorSoftOn();
[0024] (2C)     UserputSoftOn();
[0026] (60)     freezeScripts(0);
[0028] (D2)     actorFollowCamera(VAR_EGO);
[002B] (1A)     Bit[79] = 0;
[0030] (18)   } else {
[0033] (AB)     restoreVerbs(1,125,2);
[0038] (60)     freezeScripts(0);
[003A] (**)   }
[003A] (48) } else if (Local[0] == 3) {
[0044] (AB)   restoreVerbs(1,125,2);
[0049] (60)   freezeScripts(0);
[004B] (18) } else {
[004E] (2C)   CursorSoftOn();
[0050] (2C)   UserputSoftOn();
[0052] (48)   if (Local[0] == 1) {
[0059] (AB)     restoreVerbs(1,125,2);
[005E] (**)   }
[005E] (08)   if (Local[0] != 2) {
[0065] (19)     doSentence(STOP);
[0067] (0A)     startScript(15,[]);
[006A] (0A)     startScript(16,[]);
[006D] (0A)     startScript(57,[]);
[0070] (D2)     actorFollowCamera(VAR_EGO);
[0073] (**)   }
[0073] (60)   freezeScripts(0);
[0075] (**) }
[0075] (A0) stopObjectCode();
END

// Script 24
[0000] (9A) Local[1] = Local[0];
[0005] (1A) Local[0] = 0;
[000A] (48) if (Local[1] == 22) {
[0011] (14)   print(255,[Center(),Pos(160,Var[261]),Color(15),Text(getString(VAR_CUTSCENEEXIT_KEY))]);
[0021] (AE)   WaitForMessage();
[0023] (18)   /* goto 0026; */
[0026] (**) }
[0026] (9A) Var[108] = Local[0];
[002B] (A0) stopObjectCode();
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
[0034] (1C)     startSound(82);
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
[002B] (1C)   startSound(83);
[002D] (80)   breakHere();
[002E] (C0)   endCutscene();
[002F] (**) }
[002F] (A0) stopObjectCode();
END

// Script 28: Talk to Marcus
[0000] (40) cutscene([]);
[0002] (62) stopScript(200);
[0004] (62) stopScript(201);
[0006] (56) VAR_RESULT = getActorMoving(4);
[000A] (A8) if (VAR_RESULT) {
[000F] (11)   animateCostume(4,255);
[0012] (11)   animateCostume(4,3);
[0015] (09)   faceActor(4,1);
[0019] (18) } else {
[001C] (11)   animateCostume(4,248);
[001F] (11)   animateCostume(4,3);
[0022] (11)   animateCostume(4,1);
[0025] (**) }
[0025] (0D) walkActorToActor(1,4,32);
[0029] (AE) WaitForActor(1);
[002C] (80) breakHere();
[002D] (09) faceActor(1,4);
[0031] (09) faceActor(4,1);
[0035] (9A) Local[0] = VAR_VERB_SCRIPT;
[003A] (1A) VAR_VERB_SCRIPT = 18;
[003F] (0A) startScript(21,[3]);
[0045] (14) print(1,[Text("Hello again, Marcus!  Did I miss anything while I was gone?")]);
[0084] (AE) WaitForMessage();
[0086] (14) print(4,[Text("Let's see.  Remember last month, Professor Mulbray asked" + newline() + "you to date that expensive Mexican statue he'd bought?")]);
[00FA] (AE) WaitForMessage();
[00FC] (D8) printEgo([Text("Why yes - that cheap imitation.  Of course, he didn't believe" + newline() + "me until I broke it in half to show him the cross section.")]);
[0178] (AE) WaitForMessage();
[017A] (14) print(4,[Text("That may have been a bit harsh, considering his situation!")]);
[01B8] (AE) WaitForMessage();
[01BA] (C0) endCutscene();
[01BB] (7A) VerbOps(120,[Text("Don't be a twit, Marcus.  He had it coming to him."),On()]);
[01F3] (7A) VerbOps(121,[Text("Why Marcus, have you lost your sense of humor?"),On()]);
[0227] (7A) VerbOps(122,[Text("What do you mean, considering his situation?"),On()]);
[0259] (7A) VerbOps(123,[Off()]);
[025D] (1A) Var[190] = 0;
[0262] (80) breakHere();
[0263] (A8) unless (Var[190]) goto 0262;
[0268] (AE) WaitForMessage();
[026A] (48) if (Var[190] == 120) {
[0271] (14)   print(4,[Text("Well, never mind.  Congratulations on obtaining the cross.")]);
[02AF] (AE)   WaitForMessage();
[02B1] (18) } else {
[02B4] (48)   if (Var[190] == 121) {
[02BB] (14)     print(4,[Text("You'll have to be the judge of that." + wait() + "It seems a bit unfair to catch the lad coming and going.")]);
[031D] (AE)     WaitForMessage();
[031F] (2C)     CursorShow();
[0321] (2C)     UserputOn();
[0323] (7A)     VerbOps(120,[Text("Unfair?  How could you say that?"),On()]);
[0349] (7A)     VerbOps(121,[Text("Coming and going?  What do you mean?"),On()]);
[0373] (7A)     VerbOps(122,[Off()]);
[0377] (7A)     VerbOps(123,[Off()]);
[037B] (1A)     Var[190] = 0;
[0380] (80)     breakHere();
[0381] (A8)     unless (Var[190]) goto 0380;
[0386] (AE)     WaitForMessage();
[0388] (48)     if (Var[190] == 120) {
[038F] (18)       goto 0271;
[0392] (**)     }
[0392] (48)     if (Var[190] == 121) {
[0399] (14)       print(4,[Text("You see, we've hired a new geologist who fancies himself" + newline() + "quite the archaeologist." + wait() + "He advised Mulbray to buy that statue.")]);
[0417] (AE)       WaitForMessage();
[0419] (1A)       Var[355] = 1;
[041E] (2C)       CursorShow();
[0420] (2C)       UserputOn();
[0422] (7A)       VerbOps(120,[Text("After my job, eh?  Who is this expert?"),On()]);
[044E] (7A)       VerbOps(121,[Text("Surely you didn't concur with that opinion?"),On()]);
[047F] (7A)       VerbOps(122,[Off()]);
[0483] (7A)       VerbOps(123,[Off()]);
[0487] (1A)       Var[190] = 0;
[048C] (80)       breakHere();
[048D] (A8)       unless (Var[190]) goto 048C;
[0492] (AE)       WaitForMessage();
[0494] (48)       if (Var[190] == 120) {
[049B] (14)         print(4,[Text("His name is John Reid." + wait() + "Don't know what the geology department had" + newline() + "in mind when they picked him up.")]);
[0503] (1A)         Var[355] = 2;
[0508] (AE)         WaitForMessage();
[050A] (18)         goto 0271;
[050D] (**)       }
[050D] (48)       if (Var[190] == 121) {
[0514] (14)         print(4,[Text("Me?  Lead Mulbray on a wild goose chase... why, I...")]);
[054C] (AE)         WaitForMessage();
[054E] (18)         goto 0271;
[0551] (**)       }
[0551] (**)     }
[0551] (**)   }
[0551] (48)   if (Var[190] == 122) {
[0558] (18)     goto 0399;
[055B] (**)   }
[055B] (**) }
[055B] (40) cutscene([]);
[055D] (58) beginOverride();
[055F] (18) goto 05C0;
[0562] (D8) printEgo([Text("Thanks.  We can discuss my honorarium later, over" + newline() + "dinner and champagne.")]);
[05AD] (AE) WaitForMessage();
[05AF] (36) walkActorToObject(4,101);
[05B3] (AE) WaitForActor(4);
[05B6] (0A) startScript(26,[101]);
[05BC] (2E) delay(60);
[05C0] (14) print(255,[]);
[05C3] (11) animateCostume(4,255);
[05C6] (5D) setClass(4,[0]);
[05CD] (2D) putActorInRoom(4,0);
[05D0] (13) ActorOps(4,[Elevation(0)]);
[05D6] (0A) startScript(27,[101]);
[05DC] (C0) endCutscene();
[05DD] (9A) VAR_VERB_SCRIPT = Local[0];
[05E2] (1A) Var[100] = 0;
[05E7] (0A) startScript(21,[2]);
[05ED] (2C) CursorShow();
[05EF] (2C) UserputOn();
[05F1] (A0) stopObjectCode();
END

// Script 29: Talk to Students
[0000] (48) if (Local[0] == 10) {
[0007] (40)   cutscene([]);
[0009] (14)   print(10,[Text("Don't talk to ME, Dr. Jones!" + wait() + "It's the STUDENTS that are upset!")]);
[004C] (AE)   WaitForMessage();
[004E] (C0)   endCutscene();
[004F] (62)   stopScript(0);
[0051] (**) }
[0051] (1A) Local[3] = 1;
[0056] (1A) Local[4] = 0;
[005B] (9A) Local[1] = VAR_VERB_SCRIPT;
[0060] (1A) VAR_VERB_SCRIPT = 18;
[0065] (0A) startScript(21,[3]);
[006B] (2C) CursorShow();
[006D] (2C) UserputOn();
[006F] (7A) VerbOps(120,[Text("Excuse me, but I've got to be going."),On()]);
[0099] (7A) VerbOps(121,[Text("Out of my way, kids!"),On()]);
[00B3] (AC) Exprmode Local[2] = (Var[155] / 2);
[00BE] (7A) VerbOps(122,[Off()]);
[00C2] (48) if (Local[2] == 3) {
[00C9] (7A)   VerbOps(122,[Text("Hey, take it easy, let's talk about this calmly."),On()]);
[00FF] (48) } else if (Local[2] == 2) {
[0109] (7A)   VerbOps(122,[Text("Just a moment, folks.  I'm sure we can work something out."),On()]);
[0149] (48) } else if (Local[2] == 1) {
[0153] (7A)   VerbOps(122,[Text("Please relax.  I have a solution that is fair for everyone."),On()]);
[0194] (48) } else if (Local[2] == 0) {
[019E] (7A)   VerbOps(122,[Text("Irene, take down names and I will see everyone in order."),On()]);
[01DC] (18)   /* goto 01DF; */
[01DF] (**) }
[01DF] (A8) if (Local[3]) {
[01E4] (7A)   VerbOps(123,[Text("Perhaps you all should find another faculty advisor."),On()]);
[021E] (**) }
[021E] (1A) Var[190] = 0;
[0223] (80) breakHere();
[0224] (A8) unless (Var[190]) goto 0223;
[0229] (AE) WaitForMessage();
[022B] (48) if (Var[190] == 120) {
[0232] (18) } else {
[0235] (48)   if (Var[190] == 121) {
[023C] (14)     print(255,[Color(4),Text("HEY!  " + keepText())]);
[024A] (14)     print(255,[Color(10),Text("NOTHING DOING!  " + keepText())]);
[0262] (14)     print(255,[Color(12),Text("WE WANT OUR CARDS SIGNED!")]);
[0281] (5A)     Var[155] += 2;
[0286] (44)     if (Var[155] > 7) {
[028D] (1A)       Var[155] = 7;
[0292] (**)     }
[0292] (AE)     WaitForMessage();
[0294] (18)     goto 006B;
[0297] (**)   }
[0297] (48)   if (Var[190] == 122) {
[029E] (48)     if (Local[2] == 3) {
[02A5] (14)       print(255,[Color(12),Text("I want my card signed NOW!  " + keepText())]);
[02C9] (14)       print(255,[Color(9),Text("Me too!  " + keepText())]);
[02DA] (14)       print(255,[Color(13),Text("That's right!")]);
[02ED] (48)     } else if (Local[2] == 2) {
[02F7] (14)       print(255,[Color(7),Text("What are you going to do?  " + keepText())]);
[031A] (14)       print(255,[Color(2),Text("I was here first.  " + keepText())]);
[0335] (14)       print(255,[Color(11),Text("No, I was!")]);
[0345] (48)     } else if (Local[2] == 1) {
[034F] (14)       print(255,[Color(3),Text("Well, as long as there's a fair way.")]);
[0379] (48)     } else if (Local[2] == 0) {
[0383] (40)       cutscene([]);
[0385] (11)       animateCostume(10,15);
[0388] (80)       breakHere();
[0389] (80)       breakHere();
[038A] (14)       print(255,[Color(4),Text("I was first.  " + keepText())]);
[03A0] (14)       print(255,[Color(10),Text("No, it was me!  " + keepText())]);
[03B8] (14)       print(255,[Color(13),Text("I'm behind him!  " + keepText())]);
[03D1] (14)       print(255,[Color(3),Text("Stop shoving!")]);
[03E4] (AE)       WaitForMessage();
[03E6] (14)       print(255,[Text(" ")]);
[03EB] (AE)       WaitForMessage();
[03ED] (07)       setState(143,1);
[03F1] (24)       loadRoomWithEgo(143,21,-1,-1);
[03F9] (0A)       startScript(21,[4]);
[03FF] (80)       breakHere();
[0400] (80)       breakHere();
[0401] (19)       doSentence(2,143,0);
[0407] (AE)       WaitForSentence();
[0409] (1E)       walkActorTo(1,160,120);
[040F] (AE)       WaitForActor(1);
[0412] (11)       animateCostume(1,246);
[0415] (80)       breakHere();
[0416] (28)       if (!Bit[15]) {
[041B] (1A)         Bit[15] = 1;
[0420] (**)       }
[0420] (D8)       printEgo([Text("That won't hold them for long.  I'd better not go back" + newline() + "in there.")]);
[0464] (C0)       endCutscene();
[0465] (18)       goto 061E;
[0468] (18)       /* goto 046B; */
[046B] (**)     }
[046B] (3A)     Var[155] -= 2;
[0470] (78)     if (Var[155] < 1) {
[0477] (1A)       Var[155] = 1;
[047C] (**)     }
[047C] (AE)     WaitForMessage();
[047E] (18)     goto 006B;
[0481] (**)   }
[0481] (48)   if (Var[190] == 123) {
[0488] (48)     if (Local[4] == 0) {
[048F] (14)       print(255,[Color(12),Text("All the archaeology professors are booked!")]);
[04BF] (AE)       WaitForMessage();
[04C1] (1A)       Local[3] = 0;
[04C6] (7A)       VerbOps(123,[Off()]);
[04CA] (F8)       if (Local[4] < Var[355]) {
[04D1] (7A)         VerbOps(123,[Text("There's a geology professor who knows archaeology."),On()]);
[0509] (**)       }
[0509] (48)     } else if (Local[4] == 1) {
[0513] (14)       print(255,[Color(10),Text("Great, tell us his name!")]);
[0531] (AE)       WaitForMessage();
[0533] (7A)       VerbOps(123,[Off()]);
[0537] (F8)       if (Local[4] < Var[355]) {
[053E] (7A)         VerbOps(123,[Text("Professor John Reid.  Tell him Mulbray recommended him."),On()]);
[057B] (**)       }
[057B] (48)     } else if (Local[4] == 2) {
[0585] (40)       cutscene([]);
[0587] (14)       print(255,[Color(9),Text("Thank you, Dr. Jones.  " + keepText())]);
[05A6] (14)       print(255,[Color(2),Text("See ya!")]);
[05B3] (AE)       WaitForMessage();
[05B5] (14)       print(255,[Text(" ")]);
[05BA] (AE)       WaitForMessage();
[05BC] (5D)       setClass(168,[6]);
[05C3] (07)       setState(143,1);
[05C7] (24)       loadRoomWithEgo(143,21,160,120);
[05CF] (0A)       startScript(21,[4]);
[05D5] (80)       breakHere();
[05D6] (80)       breakHere();
[05D7] (19)       doSentence(2,143,0);
[05DD] (AE)       WaitForSentence();
[05DF] (1E)       walkActorTo(1,160,120);
[05E5] (AE)       WaitForActor(1);
[05E8] (11)       animateCostume(1,246);
[05EB] (80)       breakHere();
[05EC] (D8)       printEgo([Text("I never thought I'd get past them!")]);
[0611] (C0)       endCutscene();
[0612] (18)       goto 061E;
[0615] (18)       /* goto 0618; */
[0618] (**)     }
[0618] (46)     Local[4]++;
[061B] (**)   }
[061B] (18)   goto 006B;
[061E] (**) }
[061E] (9A) VAR_VERB_SCRIPT = Local[1];
[0623] (0A) startScript(21,[2]);
[0629] (2C) CursorShow();
[062B] (2C) UserputOn();
[062D] (A0) stopObjectCode();
END

// Script 30
[0000] (60) freezeScripts(127);
[0002] (19) doSentence(STOP);
[0004] (9A) Var[343] = Local[3];
[0009] (0C) Resource.lockScript(19);
[000C] (0C) Resource.loadScript(19);
[000F] (0C) Resource.lockScript(30);
[0012] (0C) Resource.loadScript(30);
[0015] (0C) Resource.lockScript(31);
[0018] (0C) Resource.loadScript(31);
[001B] (0C) Resource.lockScript(32);
[001E] (0C) Resource.loadScript(32);
[0021] (0C) Resource.lockScript(33);
[0024] (0C) Resource.loadScript(33);
[0027] (0C) Resource.lockScript(34);
[002A] (0C) Resource.loadScript(34);
[002D] (0C) Resource.lockScript(35);
[0030] (0C) Resource.loadScript(35);
[0033] (0C) Resource.lockScript(36);
[0036] (0C) Resource.loadScript(36);
[0039] (0C) Resource.lockScript(37);
[003C] (0C) Resource.loadScript(37);
[003F] (0C) Resource.lockScript(38);
[0042] (0C) Resource.loadScript(38);
[0045] (0C) Resource.lockScript(48);
[0048] (0C) Resource.loadScript(48);
[004B] (0C) Resource.lockScript(47);
[004E] (0C) Resource.loadScript(47);
[0051] (0C) Resource.lockScript(39);
[0054] (0C) Resource.loadScript(39);
[0057] (0C) Resource.lockScript(40);
[005A] (0C) Resource.loadScript(40);
[005D] (9A) Var[342] = Local[0];
[0062] (28) if (!Var[342]) {
[0067] (1A)   Var[342] = 10;
[006C] (**) }
[006C] (93) ActorOps(Var[342],[Sound(86)]);
[0072] (13) ActorOps(1,[Sound(86)]);
[0077] (C3) Local[8] = getActorX(Var[342]);
[007C] (43) Local[9] = getActorX(1);
[0081] (1A) Var[120] = 13;
[0086] (A8) if (Local[1]) {
[008B] (1A)   Var[120] = 329;
[0090] (**) }
[0090] (A8) if (Local[2]) {
[0095] (1A)   Var[323] = 1;
[009A] (18) } else {
[009D] (1A)   Var[323] = 0;
[00A2] (**) }
[00A2] (9A) Var[351] = VAR_VERB_SCRIPT;
[00A7] (0C) Resource.loadSound(89);
[00AA] (1A) VAR_VERB_SCRIPT = 19;
[00AF] (A8) if (Var[343]) {
[00B4] (0A)   startScript(21,[1]);
[00BA] (**) }
[00BA] (2C) CursorHide();
[00BC] (9A) Var[327] = Var[326];
[00C1] (9A) Var[325] = Var[324];
[00C6] (9A) Var[332] = Var[330];
[00CB] (9A) Var[333] = Var[331];
[00D0] (1A) Var[339] = 20;
[00D5] (1A) Var[340] = 140;
[00DA] (0A) startScript(36,[1,Local[4]]);
[00E3] (0A) startScript(41,[]);
[00E6] (0A) startScript(39,[]);
[00E9] (0A) startScript(40,[]);
[00EC] (0A) startScript(31,[]);
[00EF] (0A) startScript(32,[]);
[00F2] (2E) delay(432000);
[00F6] (A0) stopObjectCode();
END

// Script 31
[0000] (28) if (!Var[120]) {
[0005] (46)   Local[5]++;
[0008] (44)   unless (Local[5] > 10) goto 000F;
[000F] (18) } else {
[0012] (AC)   Exprmode Local[0] = (<VAR_RESULT = getActorX(Var[342])> - <VAR_RESULT = getActorX(1)>);
[0023] (44)   if (Local[0] > 32) {
[002A] (48)     if (Var[120] == 329) {
[0031] (1A)       Var[120] = 17;
[0036] (**)     }
[0036] (48)     if (Var[120] == 337) {
[003D] (1A)       Var[120] = 17;
[0042] (**)     }
[0042] (48)     if (Var[120] == 333) {
[0049] (1A)       Var[120] = 17;
[004E] (**)     }
[004E] (**)   }
[004E] (78)   if (Local[0] < 32) {
[0055] (1A)     Var[120] = 327;
[005A] (**)   }
[005A] (48)   if (Var[120] == 328) {
[0061] (1A)     Var[322] = 6;
[0066] (0A)     startScript(37,[10]);
[006C] (51)     animateCostume(1,Var[322]);
[0070] (48)   } else if (Var[120] == 13) {
[007A] (1A)     Var[322] = 7;
[007F] (0A)     startScript(37,[10]);
[0085] (51)     animateCostume(1,Var[322]);
[0089] (48)   } else if (Var[120] == 336) {
[0093] (1A)     Var[322] = 8;
[0098] (0A)     startScript(37,[10]);
[009E] (51)     animateCostume(1,Var[322]);
[00A2] (48)   } else if (Var[120] == 329) {
[00AC] (1A)     Var[322] = 9;
[00B1] (0A)     startScript(37,[30]);
[00B7] (51)     animateCostume(1,Var[322]);
[00BB] (0A)     startScript(33,[]);
[00BE] (80)     breakHere();
[00BF] (0A)     startScript(35,[]);
[00C2] (48)   } else if (Var[120] == 333) {
[00CC] (1A)     Var[322] = 10;
[00D1] (0A)     startScript(37,[30]);
[00D7] (51)     animateCostume(1,Var[322]);
[00DB] (0A)     startScript(33,[]);
[00DE] (80)     breakHere();
[00DF] (0A)     startScript(35,[]);
[00E2] (48)   } else if (Var[120] == 337) {
[00EC] (1A)     Var[322] = 11;
[00F1] (0A)     startScript(37,[30]);
[00F7] (51)     animateCostume(1,Var[322]);
[00FB] (0A)     startScript(33,[]);
[00FE] (80)     breakHere();
[00FF] (0A)     startScript(35,[]);
[0102] (48)   } else if (Var[120] == 327) {
[010C] (18)     goto 0126;
[010F] (48)   } else if (Var[120] == 331) {
[0119] (18)     goto 0126;
[011C] (48)   } else if (Var[120] == 335) {
[0126] (1A)     Var[322] = 16;
[012B] (11)     animateCostume(1,16);
[012E] (80)     breakHere();
[012F] (80)     breakHere();
[0130] (43)     Local[6] = getActorX(1);
[0135] (23)     Local[7] = getActorY(1);
[013A] (3A)     Local[6] -= 8;
[013F] (78)     if (Local[6] < 179) {
[0146] (5A)       Local[6] += 8;
[014B] (**)     }
[014B] (44)     if (Local[6] > 304) {
[0152] (3A)       Local[6] -= 8;
[0157] (**)     }
[0157] (61)     putActor(1,Local[6],Local[7]);
[015D] (80)     breakHere();
[015E] (80)     breakHere();
[015F] (48)   } else if (Var[120] == 17) {
[0169] (1A)     Var[322] = 17;
[016E] (11)     animateCostume(1,17);
[0171] (80)     breakHere();
[0172] (80)     breakHere();
[0173] (43)     Local[6] = getActorX(1);
[0178] (23)     Local[7] = getActorY(1);
[017D] (5A)     Local[6] += 8;
[0182] (78)     if (Local[6] < 179) {
[0189] (5A)       Local[6] += 8;
[018E] (**)     }
[018E] (44)     if (Local[6] > 304) {
[0195] (3A)       Local[6] -= 8;
[019A] (**)     }
[019A] (61)     putActor(1,Local[6],Local[7]);
[01A0] (80)     breakHere();
[01A1] (80)     breakHere();
[01A2] (18)     /* goto 01A5; */
[01A5] (**)   }
[01A5] (1A)   Var[120] = 0;
[01AA] (80)   breakHere();
[01AB] (**) }
[01AB] (80) breakHere();
[01AC] (18) goto 0000;
[01AF] (A0) stopObjectCode();
END

// Script 32
[0000] (A8) if (Var[323]) {
[0005] (18) } else {
[0008] (1A)   Var[323] = 7;
[000D] (B8)   if (Var[341] >= Var[337]) {
[0014] (1A)     Var[341] = 0;
[0019] (1A)     Var[323] = 16;
[001E] (91)     animateCostume(Var[342],16);
[0022] (80)     breakHere();
[0023] (80)     breakHere();
[0024] (C3)     Local[0] = getActorX(Var[342]);
[0029] (A3)     Local[1] = getActorY(Var[342]);
[002E] (3A)     Local[0] -= -8;
[0033] (78)     if (Local[0] < 179) {
[003A] (5A)       Local[0] += 8;
[003F] (**)     }
[003F] (44)     if (Local[0] > 304) {
[0046] (3A)       Local[0] -= 8;
[004B] (**)     }
[004B] (E1)     putActor(Var[342],Local[0],Local[1]);
[0052] (80)     breakHere();
[0053] (80)     breakHere();
[0054] (18)     goto 0008;
[0057] (**)   }
[0057] (16)   VAR_RESULT = getRandomNr(100);
[005B] (F8)   unless (VAR_RESULT < Var[336]) goto 0065;
[0062] (**) }
[0062] (0A) startScript(34,[]);
[0065] (80) breakHere();
[0066] (68) VAR_RESULT = isScriptRunning(34);
[006A] (28) if (!VAR_RESULT) {
[006F] (68)   VAR_RESULT = isScriptRunning(33);
[0073] (28)   if (!VAR_RESULT) {
[0078] (18)     goto 0008;
[007B] (**)   }
[007B] (**) }
[007B] (18) goto 0065;
[007E] (A0) stopObjectCode();
END

// Script 32
[0000] (38) if (Var[323] >= 9) {
[0007] (04)   if (Var[323] <= 12) {
[000E] (16)     VAR_RESULT = getRandomNr(100);
[0012] (C4)     if (VAR_RESULT > Var[334]) {
[0019] (62)       stopScript(0);
[001B] (18)     } else {
[001E] (18)       goto 002E;
[0021] (**)     }
[0021] (**)   }
[0021] (**) }
[0021] (16) VAR_RESULT = getRandomNr(100);
[0025] (C4) if (VAR_RESULT > Var[329]) {
[002C] (62)   stopScript(0);
[002E] (**) }
[002E] (48) if (Var[322] == 9) {
[0035] (1A)   Var[323] = 6;
[003A] (0A)   startScript(38,[10]);
[0040] (D1)   animateCostume(Var[342],Var[323]);
[0045] (48) } else if (Var[322] == 10) {
[004F] (1A)   Var[323] = 7;
[0054] (0A)   startScript(38,[10]);
[005A] (D1)   animateCostume(Var[342],Var[323]);
[005F] (48) } else if (Var[322] == 11) {
[0069] (1A)   Var[323] = 8;
[006E] (0A)   startScript(38,[10]);
[0074] (D1)   animateCostume(Var[342],Var[323]);
[0079] (18)   /* goto 007C; */
[007C] (**) }
[007C] (62) stopScript(34);
[007E] (80) breakHere();
[007F] (A0) stopObjectCode();
END

// Script 34
[0000] (1A) Var[323] = 0;
[0005] (AC) Exprmode Local[0] = (<VAR_RESULT = getActorX(Var[342])> - <VAR_RESULT = getActorX(1)>);
[0016] (44) if (Local[0] > 32) {
[001D] (1A)   Var[323] = 17;
[0022] (91)   animateCostume(Var[342],17);
[0026] (80)   breakHere();
[0027] (80)   breakHere();
[0028] (C3)   Local[2] = getActorX(Var[342]);
[002D] (A3)   Local[3] = getActorY(Var[342]);
[0032] (5A)   Local[2] += -8;
[0037] (78)   if (Local[2] < 179) {
[003E] (5A)     Local[2] += 8;
[0043] (**)   }
[0043] (44)   if (Local[2] > 304) {
[004A] (3A)     Local[2] -= 8;
[004F] (**)   }
[004F] (E1)   putActor(Var[342],Local[2],Local[3]);
[0056] (80)   breakHere();
[0057] (80)   breakHere();
[0058] (62)   stopScript(0);
[005A] (**) }
[005A] (16) Local[1] = getRandomNr(1);
[005E] (48) if (Var[322] == 6) {
[0065] (A8)   if (Local[1]) {
[006A] (1A)     Local[1] = 11;
[006F] (18)   } else {
[0072] (1A)     Local[1] = 10;
[0077] (**)   }
[0077] (48) } else if (Var[322] == 7) {
[0081] (A8)   if (Local[1]) {
[0086] (1A)     Local[1] = 11;
[008B] (18)   } else {
[008E] (1A)     Local[1] = 9;
[0093] (**)   }
[0093] (48) } else if (Var[322] == 8) {
[009D] (A8)   if (Local[1]) {
[00A2] (1A)     Local[1] = 9;
[00A7] (18)   } else {
[00AA] (1A)     Local[1] = 10;
[00AF] (**)   }
[00AF] (18) } else {
[00B2] (1A)   Local[1] = 9;
[00B7] (**) }
[00B7] (0A) startScript(38,[30]);
[00BD] (9A) Local[0] = Local[1];
[00C2] (3A) Local[0] -= 3;
[00C7] (D1) animateCostume(Var[342],Local[0]);
[00CC] (1A) Var[323] = 12;
[00D1] (2B) delayVariable(Var[328]);
[00D4] (9A) Var[323] = Local[1];
[00D9] (D1) animateCostume(Var[342],Var[323]);
[00DE] (80) breakHere();
[00DF] (0A) startScript(35,[]);
[00E2] (A0) stopObjectCode();
END

// Script 35
[0000] (AC) Exprmode Local[0] = (<VAR_RESULT = getActorX(Var[342])> - <VAR_RESULT = getActorX(1)>);
[0011] (04) if (Local[0] <= 32) {
[0018] (48)   if (Var[323] == 9) {
[001F] (48)     if (Var[322] == 6) {
[0026] (18)       goto 00B9;
[0029] (18)     } else {
[002C] (11)       animateCostume(1,13);
[002F] (18)       goto 00D3;
[0032] (**)     }
[0032] (**)   }
[0032] (48)   if (Var[323] == 10) {
[0039] (48)     if (Var[322] == 7) {
[0040] (18)       goto 00B9;
[0043] (18)     } else {
[0046] (11)       animateCostume(1,14);
[0049] (18)       goto 00D3;
[004C] (**)     }
[004C] (**)   }
[004C] (48)   if (Var[323] == 11) {
[0053] (48)     if (Var[322] == 8) {
[005A] (18)       goto 00B9;
[005D] (18)     } else {
[0060] (11)       animateCostume(1,15);
[0063] (18)       goto 00D3;
[0066] (**)     }
[0066] (**)   }
[0066] (48)   if (Var[322] == 9) {
[006D] (48)     if (Var[323] == 6) {
[0074] (18)       goto 00F2;
[0077] (18)     } else {
[007A] (91)       animateCostume(Var[342],13);
[007E] (18)       goto 0111;
[0081] (**)     }
[0081] (**)   }
[0081] (48)   if (Var[322] == 10) {
[0088] (48)     if (Var[323] == 7) {
[008F] (18)       goto 00F2;
[0092] (18)     } else {
[0095] (91)       animateCostume(Var[342],14);
[0099] (18)       goto 0111;
[009C] (**)     }
[009C] (**)   }
[009C] (48)   if (Var[322] == 11) {
[00A3] (48)     if (Var[323] == 8) {
[00AA] (18)       goto 00F2;
[00AD] (18)     } else {
[00B0] (91)       animateCostume(Var[342],15);
[00B4] (18)       goto 0111;
[00B7] (**)     }
[00B7] (**)   }
[00B7] (**) }
[00B7] (62) stopScript(0);
[00B9] (1C) startSound(124);
[00BB] (0A) startScript(37,[Var[332]]);
[00C1] (1A) Var[332] = 1;
[00C6] (1A) Var[333] = 1;
[00CB] (0A) startScript(48,[]);
[00CE] (0A) startScript(40,[]);
[00D1] (62) stopScript(0);
[00D3] (1C) startSound(89);
[00D5] (0A) startScript(37,[Var[333]]);
[00DB] (1A) Var[332] = 1;
[00E0] (1A) Var[333] = 1;
[00E5] (0A) startScript(48,[]);
[00E8] (0A) startScript(40,[]);
[00EB] (1A) Var[341] = 0;
[00F0] (62) stopScript(0);
[00F2] (1C) startSound(124);
[00F4] (0A) startScript(38,[Var[339]]);
[00FA] (1A) Var[339] = 1;
[00FF] (1A) Var[340] = 1;
[0104] (0A) startScript(47,[]);
[0107] (0A) startScript(39,[]);
[010A] (1A) Var[341] = 0;
[010F] (62) stopScript(0);
[0111] (1C) startSound(89);
[0113] (0A) startScript(38,[Var[340]]);
[0119] (1A) Var[339] = 1;
[011E] (1A) Var[340] = 1;
[0123] (0A) startScript(47,[]);
[0126] (0A) startScript(39,[]);
[0129] (46) Var[341]++;
[012C] (16) VAR_RESULT = getRandomNr(100);
[0130] (C4) if (VAR_RESULT > Var[338]) {
[0137] (62)   stopScript(34);
[0139] (**) }
[0139] (62) stopScript(0);
[013B] (A0) stopObjectCode();
END

// Script 36: Fistfight Interface
[0000] (28) if (!Var[343]) {
[0005] (62)   stopScript(0);
[0007] (**) }
[0007] (A8) if (Local[0]) {
[000C] (3F)   drawBox(0,150,320,199,0);
[0017] (14)   print(254,[Pos(5,151),Color(6),Text("Indiana Jones' Health")]);
[0037] (14)   print(254,[Pos(220,151),Color(6),Text("Punch power")]);
[004D] (A8)   if (Local[1]) {
[0052] (14)     print(254,[Pos(5,176),Color(12),Text("Boxing Coach's Health")]);
[0072] (18)   } else {
[0075] (14)     print(254,[Pos(5,176),Color(12),Text("Nazi Guard's Health")]);
[0093] (**)   }
[0093] (14)   print(254,[Pos(220,176),Color(12),Text("Punch power")]);
[00A9] (1A)   Var[344] = 10;
[00AE] (AC)   Exprmode Var[346] = ((Var[324] / 10) + 10);
[00BD] (1A)   Var[348] = 220;
[00C2] (1A)   Var[345] = 10;
[00C7] (AC)   Exprmode Var[347] = ((Var[326] / 10) + 10);
[00D6] (1A)   Var[349] = 220;
[00DB] (**) }
[00DB] (AC) Exprmode Local[2] = ((Var[324] / 10) + 10);
[00EA] (AC) Exprmode Local[3] = ((Var[325] / 10) + Local[2]);
[00F9] (AC) Exprmode Local[4] = ((Var[340] / 10) + 220);
[0108] (F8) if (Local[2] < Var[344]) {
[010F] (BF)   drawBox(Local[2],160,Var[344],165,14);
[011A] (18) } else {
[011D] (BF)   drawBox(Var[344],160,Local[2],165,2);
[0128] (**) }
[0128] (F8) if (Local[3] < Var[346]) {
[012F] (BF)   drawBox(Local[3],160,Var[346],165,0);
[013A] (18) } else {
[013D] (BF)   drawBox(Var[346],160,Local[3],165,14);
[0148] (**) }
[0148] (F8) if (Local[4] < Var[348]) {
[014F] (BF)   drawBox(Local[4],160,Var[348],165,0);
[015A] (18) } else {
[015D] (BF)   drawBox(Var[348],160,Local[4],165,4);
[0168] (**) }
[0168] (9A) Var[344] = Local[2];
[016D] (9A) Var[346] = Local[3];
[0172] (9A) Var[348] = Local[4];
[0177] (AC) Exprmode Local[2] = ((Var[326] / 10) + 10);
[0186] (AC) Exprmode Local[3] = ((Var[327] / 10) + Local[2]);
[0195] (AC) Exprmode Local[4] = ((Var[333] / 10) + 220);
[01A4] (F8) if (Local[2] < Var[345]) {
[01AB] (BF)   drawBox(Local[2],185,Var[345],190,14);
[01B6] (18) } else {
[01B9] (BF)   drawBox(Var[345],185,Local[2],190,2);
[01C4] (**) }
[01C4] (F8) if (Local[3] < Var[347]) {
[01CB] (BF)   drawBox(Local[3],185,Var[347],190,0);
[01D6] (18) } else {
[01D9] (BF)   drawBox(Var[347],185,Local[3],190,14);
[01E4] (**) }
[01E4] (F8) if (Local[4] < Var[349]) {
[01EB] (BF)   drawBox(Local[4],185,Var[349],190,0);
[01F6] (18) } else {
[01F9] (BF)   drawBox(Var[349],185,Local[4],190,4);
[0204] (**) }
[0204] (9A) Var[345] = Local[2];
[0209] (9A) Var[347] = Local[3];
[020E] (9A) Var[349] = Local[4];
[0213] (A0) stopObjectCode();
END

// Script 37
[0000] (28) if (!Local[0]) {
[0005] (1A)   Local[0] = 1;
[000A] (**) }
[000A] (BA) Var[325] -= Local[0];
[000F] (78) if (Var[325] < 0) {
[0016] (1A)   Var[325] = 0;
[001B] (BA)   Var[324] -= Local[0];
[0020] (**) }
[0020] (78) if (Var[324] < 0) {
[0027] (1A)   Var[324] = 0;
[002C] (**) }
[002C] (0A) startScript(36,[]);
[002F] (A0) stopObjectCode();
END

// Script 38
[0000] (28) if (!Local[0]) {
[0005] (1A)   Local[0] = 1;
[000A] (**) }
[000A] (BA) Var[327] -= Local[0];
[000F] (78) if (Var[327] < 0) {
[0016] (1A)   Var[327] = 0;
[001B] (BA)   Var[326] -= Local[0];
[0020] (**) }
[0020] (78) if (Var[326] < 0) {
[0027] (1A)   Var[326] = 0;
[002C] (**) }
[002C] (0A) startScript(36,[]);
[002F] (A0) stopObjectCode();
END

// Script 39
[0000] (80) breakHere();
[0001] (80) breakHere();
[0002] (80) breakHere();
[0003] (78) if (Var[339] < 20) {
[000A] (1A)   Local[0] = 20;
[000F] (5B)   Local[0] /= 4;
[0014] (28)   if (!Local[0]) {
[0019] (1A)     Local[0] = 1;
[001E] (**)   }
[001E] (DA)   Var[339] += Local[0];
[0023] (**) }
[0023] (44) if (Var[339] > 20) {
[002A] (1A)   Var[339] = 20;
[002F] (**) }
[002F] (78) if (Var[340] < 140) {
[0036] (1A)   Local[0] = 140;
[003B] (5B)   Local[0] /= 4;
[0040] (28)   if (!Local[0]) {
[0045] (1A)     Local[0] = 1;
[004A] (**)   }
[004A] (DA)   Var[340] += Local[0];
[004F] (**) }
[004F] (44) if (Var[340] > 140) {
[0056] (1A)   Var[340] = 140;
[005B] (**) }
[005B] (18) goto 0000;
[005E] (A0) stopObjectCode();
END

// Script 40
[0000] (80) breakHere();
[0001] (80) breakHere();
[0002] (80) breakHere();
[0003] (F8) if (Var[332] < Var[330]) {
[000A] (9A)   Local[0] = Var[330];
[000F] (5B)   Local[0] /= 4;
[0014] (28)   if (!Local[0]) {
[0019] (1A)     Local[0] = 1;
[001E] (**)   }
[001E] (DA)   Var[332] += Local[0];
[0023] (**) }
[0023] (C4) if (Var[332] > Var[330]) {
[002A] (9A)   Var[332] = Var[330];
[002F] (**) }
[002F] (F8) if (Var[333] < Var[331]) {
[0036] (9A)   Local[0] = Var[331];
[003B] (5B)   Local[0] /= 4;
[0040] (28)   if (!Local[0]) {
[0045] (1A)     Local[0] = 1;
[004A] (**)   }
[004A] (DA)   Var[333] += Local[0];
[004F] (**) }
[004F] (C4) if (Var[333] > Var[331]) {
[0056] (9A)   Var[333] = Var[331];
[005B] (**) }
[005B] (0A) startScript(36,[]);
[005E] (18) goto 0000;
[0061] (A0) stopObjectCode();
END

// Script 41
[0000] (2E) delay(60);
[0004] (F8) if (Var[327] < Var[326]) {
[000B] (DA)   Var[327] += Var[335];
[0010] (**) }
[0010] (C4) if (Var[327] > Var[326]) {
[0017] (9A)   Var[327] = Var[326];
[001C] (**) }
[001C] (F8) if (Var[325] < Var[324]) {
[0023] (5A)   Var[325] += 10;
[0028] (**) }
[0028] (C4) if (Var[325] > Var[324]) {
[002F] (9A)   Var[325] = Var[324];
[0034] (**) }
[0034] (0A) startScript(36,[]);
[0037] (18) goto 0000;
[003A] (A0) stopObjectCode();
END

// Script 42: Irene and Students
[0000] (40) cutscene([1]);
[0005] (13) ActorOps(10,[Costume(3),TalkColor(2),Sound(86),Name("Irene")]);
[0015] (5D) setClass(10,[0,150,149,141]);
[0025] (11) animateCostume(10,250);
[0028] (AE) WaitForActor(10);
[002B] (2D) putActorInRoom(10,22);
[002E] (01) putActor(10,174,83);
[0034] (72) loadRoom(22);
[0036] (32) setCameraAt(160);
[0039] (58) beginOverride();
[003B] (18) goto 0220;
[003E] (1D) if (classOfIs(170,[6])) {
[0047] (1A)   Var[155] = 4;
[004C] (2E)   delay(30);
[0050] (14)   print(10,[Left(),Pos(0,0),Text("STUDENTS!  STUDENTS!  PLEASE BE PATIENT!" + newline() + "I'm sure Dr. Jones will be back soon!")]);
[00A9] (AE)   WaitForMessage();
[00AB] (14)   print(255,[Color(12),Left(),Pos(0,0),Text("BUT WE'VE BEEN WAITING FOR HIM TO SIGN OUR CARDS ALL DAY!")]);
[00F0] (AE)   WaitForMessage();
[00F2] (14)   print(255,[Color(9),Text("YEAH!!  " + keepText())]);
[0102] (2E)   delay(15);
[0106] (14)   print(255,[Color(13),Text("YEAH!!  " + keepText())]);
[0116] (2E)   delay(15);
[011A] (14)   print(255,[Color(7),Text("YEAH!!  " + keepText())]);
[012A] (2E)   delay(15);
[012E] (14)   print(255,[Color(11),Text("YEAH!!")]);
[013A] (AE)   WaitForMessage();
[013C] (14)   print(10,[Text("ARGHHHH!!!")]);
[014A] (1A)   Local[0] = 1;
[014F] (11)   animateCostume(10,6);
[0152] (80)   breakHere();
[0153] (80)   breakHere();
[0154] (46)   Local[0]++;
[0157] (44)   unless (Local[0] > 6) goto 014F;
[015E] (1A)   Local[0] = 1;
[0163] (11)   animateCostume(10,7);
[0166] (80)   breakHere();
[0167] (80)   breakHere();
[0168] (80)   breakHere();
[0169] (80)   breakHere();
[016A] (80)   breakHere();
[016B] (80)   breakHere();
[016C] (46)   Local[0]++;
[016F] (44)   unless (Local[0] > 3) goto 0163;
[0176] (2E)   delay(120);
[017A] (2D)   putActorInRoom(1,22);
[017D] (01)   putActor(1,243,105);
[0183] (1E)   walkActorTo(1,190,120);
[0189] (2E)   delay(60);
[018D] (D8)   printEgo([Text("Irene!  What's happening here?")]);
[01AE] (AE)   WaitForActor(1);
[01B1] (11)   animateCostume(1,247);
[01B4] (2E)   delay(60);
[01B8] (11)   animateCostume(10,8);
[01BB] (2E)   delay(60);
[01BF] (11)   animateCostume(10,3);
[01C2] (80)   breakHere();
[01C3] (80)   breakHere();
[01C4] (80)   breakHere();
[01C5] (14)   print(10,[Text("Oh!  Dr. Jones!  I'm so glad you're back.")]);
[01F2] (AE)   WaitForMessage();
[01F4] (18) } else {
[01F7] (2E)   delay(30);
[01FB] (2D)   putActorInRoom(1,22);
[01FE] (01)   putActor(1,243,105);
[0204] (1E)   walkActorTo(1,190,120);
[020A] (2E)   delay(60);
[020E] (14)   print(10,[Text("Dr. Jones!  " + keepText())]);
[0220] (**) }
[0220] (14) print(255,[Text(" ")]);
[0225] (5D) setClass(170,[134]);
[022C] (A8) if (VAR_OVERRIDE) {
[0231] (2D)   putActorInRoom(1,22);
[0234] (01)   putActor(1,190,120);
[023A] (11)   animateCostume(1,3);
[023D] (11)   animateCostume(1,248);
[0240] (11)   animateCostume(10,3);
[0243] (14)   print(255,[]);
[0246] (**) }
[0246] (14) print(10,[Text("These students are VERY upset!")]);
[0268] (AE) WaitForMessage();
[026A] (C0) endCutscene();
[026B] (A0) stopObjectCode();
END

// Script 43
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

// Script 44
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

// Script 46: Meet Walter Donovan
[0000] (13) ActorOps(10,[Costume(10),WalkSpeed(4,2),TalkColor(3),Palette(7,0),Palette(9,5),Width(8)]);
[0012] (13) ActorOps(11,[Costume(10),WalkSpeed(4,2),Width(8),Palette(7,0),Palette(0,6),Palette(9,4)]);
[0025] (2D) putActorInRoom(10,24);
[0028] (01) putActor(10,458,107);
[002E] (2D) putActorInRoom(11,24);
[0031] (01) putActor(11,472,101);
[0037] (9A) Local[0] = VAR_WALKTO_OBJ;
[003C] (08) if (VAR_WALKTO_OBJ != 203) {
[0043] (01)   putActor(10,226,119);
[0049] (01)   putActor(11,240,119);
[004F] (**) }
[004F] (11) animateCostume(10,248);
[0052] (11) animateCostume(11,248);
[0055] (0C) Resource.loadScript(43);
[0058] (40) cutscene([1]);
[005D] (58) beginOverride();
[005F] (18) goto 044E;
[0062] (80) breakHere();
[0063] (08) if (Local[0] != 203) {
[006A] (1E)   walkActorTo(1,139,109);
[0070] (18) } else {
[0073] (1E)   walkActorTo(1,389,107);
[0079] (**) }
[0079] (80) breakHere();
[007A] (80) breakHere();
[007B] (30) setBoxFlags(2,128);
[007F] (14) print(10,[Left(),Pos(0,0),Text("Dr. Jones," + keepText())]);
[0095] (0D) walkActorToActor(10,1,8);
[0099] (0D) walkActorToActor(11,1,16);
[009D] (34) VAR_RESULT = getDist(1,10);
[00A4] (04) if (VAR_RESULT <= 16) {
[00AB] (11)   animateCostume(1,255);
[00AE] (**) }
[00AE] (80) breakHere();
[00AF] (34) VAR_RESULT = getDist(1,10);
[00B6] (04) unless (VAR_RESULT <= 9) goto 0095;
[00BD] (14) print(10,[Text(" come with us, please.")]);
[00D7] (11) animateCostume(1,255);
[00DA] (AE) WaitForActor(10);
[00DD] (AE) WaitForActor(11);
[00E0] (2E) delay(30);
[00E4] (AE) WaitForMessage();
[00E6] (1A) VAR_EGO = 10;
[00EB] (4A) startScript(43,[10,1],R);
[00F4] (4A) startScript(43,[1,11],R);
[00FD] (B6) walkActorToObject(VAR_EGO,207);
[0102] (AE) WaitForActor(VAR_EGO);
[0106] (19) doSentence(1,207,0);
[010C] (AE) WaitForSentence();
[010E] (11) animateCostume(10,244);
[0111] (AE) WaitForActor(1);
[0114] (62) stopScript(43);
[0116] (2D) putActorInRoom(1,29);
[0119] (01) putActor(1,532,83);
[011F] (11) animateCostume(1,251);
[0122] (13) ActorOps(1,[Sound(0)]);
[0127] (2D) putActorInRoom(5,29);
[012A] (01) putActor(5,285,122);
[0130] (11) animateCostume(5,249);
[0133] (1A) VAR_EGO = 1;
[0138] (D2) actorFollowCamera(VAR_EGO);
[013B] (2E) delay(60);
[013F] (1E) walkActorTo(5,473,107);
[0145] (2E) delay(30);
[0149] (14) print(5,[Text("Good morning, Dr. Jones.  I hope I didn't alarm you.")]);
[0181] (80) breakHere();
[0182] (80) breakHere();
[0183] (11) animateCostume(1,246);
[0186] (80) breakHere();
[0187] (80) breakHere();
[0188] (80) breakHere();
[0189] (4A) startScript(44,[1,508,107,248],R);
[0198] (AE) WaitForMessage();
[019A] (D8) printEgo([Text("I'm not used to such unorthodox methods of introduction.")]);
[01D5] (AE) WaitForMessage();
[01D7] (14) print(5,[Text("I'm sorry if my men inconvenienced you." + newline() + "My name is Walter Donovan.")]);
[021E] (AE) WaitForMessage();
[0220] (D8) printEgo([Text("I know who you are, Mr. Donovan.  Your contributions" + newline() + "to the museum have been extremely generous." + wait() + "And I must say, some of your pieces here are quite" + newline() + "impressive.")]);
[02C5] (AE) WaitForMessage();
[02C7] (14) print(5,[Text("Like yourself, I have a passion for antiquities.")]);
[02FB] (4A) startScript(44,[5,113,105,246],R);
[030A] (80) breakHere();
[030B] (43) VAR_RESULT = getActorX(5);
[0310] (78) unless (VAR_RESULT < 420) goto 030A;
[0317] (52) actorFollowCamera(5);
[0319] (1E) walkActorTo(1,155,119);
[031F] (AE) WaitForMessage();
[0321] (14) print(5,[Text("Have a look over here.  You may find this interesting.")]);
[035B] (AE) WaitForMessage();
[035D] (1E) walkActorTo(1,75,122);
[0363] (AE) WaitForActor(1);
[0366] (11) animateCostume(1,245);
[0369] (AE) WaitForActor(1);
[036C] (11) animateCostume(1,13);
[036F] (2E) delay(60);
[0373] (13) ActorOps(1,[TalkAnimNr(6,13)]);
[0379] (D8) printEgo([Text("Early Christian symbols^  Middle Twelfth Century, I'd say.")]);
[03B6] (2E) delay(30);
[03BA] (B2) setCameraAt(VAR_CAMERA_POS_X);
[03BD] (4A) startScript(44,[5,155,122,244],R);
[03CC] (AE) WaitForMessage();
[03CE] (2E) delay(30);
[03D2] (11) animateCostume(1,9);
[03D5] (13) ActorOps(1,[TalkAnimNr(4,5)]);
[03DB] (80) breakHere();
[03DC] (D8) printEgo([Text("Where did you find it?")]);
[03F5] (AE) WaitForMessage();
[03F7] (14) print(5,[Text("In the mountains north of Ankara.  Can you translate it?")]);
[0433] (AE) WaitForMessage();
[0435] (1A) Var[108] = 0;
[043A] (A8) if (Bit[13]) {
[043F] (0A)   startScript(200,[]);
[0442] (18) } else {
[0445] (0A)   startScript(201,[]);
[0448] (**) }
[0448] (80) breakHere();
[0449] (A8) unless (Var[108]) goto 0448;
[044E] (14) print(255,[Text(" ")]);
[0453] (AE) WaitForMessage();
[0455] (62) stopScript(200);
[0457] (62) stopScript(201);
[0459] (1A) VAR_EGO = 1;
[045E] (62) stopScript(44);
[0460] (11) animateCostume(1,255);
[0463] (11) animateCostume(5,255);
[0466] (07) setState(204,1);
[046A] (07) setState(207,1);
[046E] (62) stopScript(43);
[0470] (2D) putActorInRoom(10,0);
[0473] (2D) putActorInRoom(11,0);
[0476] (11) animateCostume(1,9);
[0479] (2D) putActorInRoom(1,24);
[047C] (01) putActor(1,389,107);
[0482] (13) ActorOps(1,[Sound(74),TalkAnimNr(4,5)]);
[048A] (11) animateCostume(1,248);
[048D] (14) print(255,[]);
[0490] (14) print(255,[]);
[0493] (C0) endCutscene();
[0494] (A0) stopObjectCode();
END

// Script 47
[0000] (48) if (Var[326] == 0) {
[0007] (48)   if (Var[327] == 0) {
[000E] (62)     stopScript(32);
[0010] (62)     stopScript(31);
[0012] (62)     stopScript(34);
[0014] (62)     stopScript(41);
[0016] (62)     stopScript(39);
[0018] (62)     stopScript(40);
[001A] (62)     stopScript(35);
[001C] (62)     stopScript(36);
[001E] (80)     breakHere();
[001F] (11)     animateCostume(1,7);
[0022] (80)     breakHere();
[0023] (68)     VAR_RESULT = isScriptRunning(55);
[0027] (A8)     if (VAR_RESULT) {
[002C] (62)       stopScript(55);
[002E] (2D)       putActorInRoom(4,0);
[0031] (**)     }
[0031] (91)     animateCostume(Var[342],18);
[0035] (1A)     Local[1] = 1;
[003A] (80)     breakHere();
[003B] (46)     Local[1]++;
[003E] (44)     unless (Local[1] > 10) goto 003A;
[0045] (2E)     delay(60);
[0049] (0C)     Resource.unlockScript(19);
[004C] (0C)     Resource.unlockScript(30);
[004F] (0C)     Resource.unlockScript(31);
[0052] (0C)     Resource.unlockScript(32);
[0055] (0C)     Resource.unlockScript(33);
[0058] (0C)     Resource.unlockScript(34);
[005B] (0C)     Resource.unlockScript(35);
[005E] (0C)     Resource.unlockScript(36);
[0061] (0C)     Resource.unlockScript(37);
[0064] (0C)     Resource.unlockScript(38);
[0067] (0C)     Resource.unlockScript(48);
[006A] (0C)     Resource.unlockScript(47);
[006D] (0C)     Resource.unlockScript(39);
[0070] (0C)     Resource.unlockScript(40);
[0073] (13)     ActorOps(1,[Sound(74)]);
[0078] (62)     stopScript(30);
[007A] (3F)     drawBox(0,150,320,199,0);
[0085] (9A)     VAR_VERB_SCRIPT = Var[351];
[008A] (27)     PutCodeInString(9, );
[008E] (60)     freezeScripts(0);
[0090] (**)   }
[0090] (**) }
[0090] (A0) stopObjectCode();
END

// Script 48
[0000] (48) if (Var[324] == 0) {
[0007] (48)   if (Var[325] == 0) {
[000E] (62)     stopScript(32);
[0010] (62)     stopScript(31);
[0012] (62)     stopScript(34);
[0014] (62)     stopScript(41);
[0016] (62)     stopScript(39);
[0018] (62)     stopScript(40);
[001A] (62)     stopScript(35);
[001C] (62)     stopScript(36);
[001E] (80)     breakHere();
[001F] (91)     animateCostume(Var[342],7);
[0023] (80)     breakHere();
[0024] (11)     animateCostume(1,18);
[0027] (1A)     Local[1] = 1;
[002C] (80)     breakHere();
[002D] (46)     Local[1]++;
[0030] (44)     unless (Local[1] > 10) goto 002C;
[0037] (2E)     delay(120);
[003B] (3F)     drawBox(0,150,320,199,0);
[0046] (62)     stopScript(30);
[0048] (60)     freezeScripts(0);
[004A] (**)   }
[004A] (**) }
[004A] (A0) stopObjectCode();
END

// Script 50
[0000] (AC) Exprmode Local[4] = (Local[0] - (Local[3] / 2));
[000F] (AC) Exprmode Local[6] = (Local[4] + Local[3]);
[001A] (AC) Exprmode Local[5] = (Local[1] - (Local[3] / 2));
[0029] (AC) Exprmode Local[7] = (Local[5] + Local[3]);
[0034] (FF) drawBox(Local[4],Local[5],Local[6],Local[7],Local[2]);
[0040] (A0) stopObjectCode();
END

// Script 51
[0000] (B8) if (Local[2] >= Local[0]) {
[0007] (1A)   Local[7] = 1;
[000C] (AC)   Exprmode Local[9] = (Local[2] - Local[0]);
[0017] (18) } else {
[001A] (1A)   Local[7] = -1;
[001F] (AC)   Exprmode Local[9] = (Local[0] - Local[2]);
[002A] (**) }
[002A] (B8) if (Local[3] >= Local[1]) {
[0031] (1A)   Local[8] = 1;
[0036] (AC)   Exprmode Local[10] = (Local[3] - Local[1]);
[0041] (18) } else {
[0044] (1A)   Local[8] = -1;
[0049] (AC)   Exprmode Local[10] = (Local[1] - Local[3]);
[0054] (**) }
[0054] (C4) if (Local[9] > Local[10]) {
[005B] (9A)   Local[11] = Local[9];
[0060] (18) } else {
[0063] (9A)   Local[11] = Local[10];
[0068] (**) }
[0068] (9A) Local[12] = Local[0];
[006D] (9A) Local[13] = Local[1];
[0072] (1A) Local[0] = 0;
[0077] (1A) Local[1] = 0;
[007C] (0A) startScript(50,[Local[12],Local[13],Local[4],Local[5]]);
[008B] (1A) Local[14] = 0;
[0090] (A8) if (Local[6]) {
[0095] (2B)   delayVariable(Local[6]);
[0098] (**) }
[0098] (DA) Local[0] += Local[9];
[009D] (DA) Local[1] += Local[10];
[00A2] (1A) Local[15] = 0;
[00A7] (C4) if (Local[0] > Local[11]) {
[00AE] (1A)   Local[15] = 1;
[00B3] (BA)   Local[0] -= Local[11];
[00B8] (DA)   Local[12] += Local[7];
[00BD] (**) }
[00BD] (C4) if (Local[1] > Local[11]) {
[00C4] (1A)   Local[15] = 1;
[00C9] (BA)   Local[1] -= Local[11];
[00CE] (DA)   Local[13] += Local[8];
[00D3] (**) }
[00D3] (A8) if (Local[15]) {
[00D8] (0A)   startScript(50,[Local[12],Local[13],Local[4],Local[5]]);
[00E7] (**) }
[00E7] (46) Local[14]++;
[00EA] (C4) unless (Local[14] > Local[11]) goto 0090;
[00F1] (A0) stopObjectCode();
END

// Script 52
[0000] (2C) InitCharset(4);
[0003] (40) cutscene([]);
[0005] (1A) Bit[14] = 1;
[000A] (58) beginOverride();
[000C] (18) goto 01BF;
[000F] (72) loadRoom(28);
[0011] (0A) startScript(51,[20,124,89,99,12,2,1]);
[0029] (2E) delay(30);
[002D] (14) print(255,[Color(15),Center(),Pos(150,30),Clipped(300),Text("...Cheer as Indy and his father do some serious male bonding...")]);
[007B] (80) breakHere();
[007C] (68) VAR_RESULT = isScriptRunning(51);
[0080] (28) unless (!VAR_RESULT) goto 007B;
[0085] (0A) startScript(51,[89,99,197,124,12,2,1]);
[009D] (14) print(255,[Color(15),Center(),Pos(150,30),Clipped(300),Text("...Hiss as Hitler's henchmen hungrily hunt the Holy Grail...")]);
[00E8] (80) breakHere();
[00E9] (68) VAR_RESULT = isScriptRunning(51);
[00ED] (28) unless (!VAR_RESULT) goto 00E8;
[00F2] (0A) startScript(51,[197,124,233,119,12,2,1]);
[010A] (14) print(255,[Color(15),Center(),Pos(150,30),Clipped(300),Text("...and relive those thrilling days of yesteryear...")]);
[014C] (80) breakHere();
[014D] (68) VAR_RESULT = isScriptRunning(51);
[0151] (28) unless (!VAR_RESULT) goto 014C;
[0156] (0A) startScript(51,[233,119,294,98,12,2,1]);
[016E] (14) print(255,[Color(15),Center(),Pos(150,30),Clipped(300),Text("...buy `Indiana Jones and the Last Crusade` today!!!")]);
[01B1] (80) breakHere();
[01B2] (68) VAR_RESULT = isScriptRunning(51);
[01B6] (28) unless (!VAR_RESULT) goto 01B1;
[01BB] (2E) delay(60);
[01BF] (C0) endCutscene();
[01C0] (0C) Resource.nukeSound(82);
[01C3] (0C) Resource.nukeSound(83);
[01C6] (0C) Resource.nukeSound(74);
[01C9] (0C) Resource.nukeSound(106);
[01CC] (0C) Resource.nukeSound(89);
[01CF] (0C) Resource.nukeSound(124);
[01D2] (0C) Resource.nukeSound(86);
[01D5] (0C) Resource.nukeSound(111);
[01D8] (0C) Resource.nukeSound(130);
[01DB] (0C) Resource.nukeSound(125);
[01DE] (0C) Resource.nukeScript(26);
[01E1] (0C) Resource.nukeScript(27);
[01E4] (0C) Resource.nukeScript(VAR_SENTENCE_SCRIPT);
[01E8] (0C) Resource.nukeScript(VAR_INVENTORY_SCRIPT);
[01EC] (0C) Resource.nukeScript(57);
[01EF] (0C) Resource.nukeScript(3);
[01F2] (0C) Resource.nukeScript(60);
[01F5] (0C) Resource.nukeScript(11);
[01F8] (0C) Resource.nukeScript(20);
[01FB] (0C) Resource.nukeScript(15);
[01FE] (0C) Resource.nukeScript(16);
[0201] (0C) Resource.nukeScript(24);
[0204] (0C) Resource.nukeScript(13);
[0207] (0C) Resource.nukeScript(5);
[020A] (0C) Resource.nukeScript(6);
[020D] (0C) Resource.nukeScript(7);
[0210] (0C) Resource.nukeScript(22);
[0213] (0C) Resource.nukeScript(23);
[0216] (0C) Resource.nukeScript(44);
[0219] (0C) Resource.nukeScript(54);
[021C] (0C) Resource.nukeScript(18);
[021F] (0C) Resource.nukeScript(43);
[0222] (62) stopScript(17);
[0224] (2D) putActorInRoom(1,0);
[0227] (01) putActor(1,0,0);
[022D] (1A) VAR_EGO = 0;
[0232] (33) SetScreen(0,200)
[0238] (72) loadRoom(0);
[023A] (62) stopScript(73);
[023C] (1A) Var[364] = 0;
[0241] (7A) VerbOps(13,[Off()]);
[0245] (7A) VerbOps(32,[Off()]);
[0249] (E2) stopScript(Var[362]);
[024C] (0A) startScript(62,[]);
[024F] (1A) VAR_VERB_SCRIPT = 64;
[0254] (0A) startScript(21,[4]);
[025A] (1A) Bit[155] = 1;
[025F] (72) loadRoom(3);
[0261] (A0) stopObjectCode();
END

// Script 53: Set Up Verbs
[0000] (48) if (Var[364] == 1) {
[0007] (2C)   InitCharset(1);
[000A] (7A)   VerbOps(6,[New(),Text("Push"),Key(115),SetXY(0,152),On()]);
[001C] (7A)   VerbOps(7,[New(),Text("Pull"),Key(120),SetXY(0,160),On()]);
[002E] (7A)   VerbOps(3,[New(),Text("Give"),Key(122),SetXY(0,168),On()]);
[0040] (7A)   VerbOps(1,[New(),Text("Open"),Key(111),SetXY(48,152),On()]);
[0052] (7A)   VerbOps(2,[New(),Text("Close"),Key(99),SetXY(48,160),On()]);
[0065] (7A)   VerbOps(9,[New(),Text("Look"),Key(108),SetXY(48,168),On()]);
[0077] (7A)   VerbOps(10,[New(),Text("Walk to"),Key(119),SetXY(104,152),On()]);
[008C] (7A)   VerbOps(11,[New(),Text("Pick up"),Key(112),SetXY(104,160),On()]);
[00A1] (7A)   VerbOps(12,[New(),Text("What is"),Key(99),SetXY(176,168),Off()]);
[00B6] (7A)   VerbOps(8,[New(),Text("Use"),Key(117),SetXY(104,168),On()]);
[00C7] (7A)   VerbOps(4,[New(),Text("Turn on"),Key(110),SetXY(176,152),On()]);
[00DC] (7A)   VerbOps(5,[New(),Text("Turn off"),Key(102),SetXY(176,160),On()]);
[00F2] (7A)   VerbOps(13,[New(),Text("Talk to"),Key(116),SetXY(256,152),Dim()]);
[0107] (7A)   VerbOps(32,[New(),Text("Travel"),Key(103),SetXY(256,160),Dim()]);
[011B] (7A)   VerbOps(33,[New(),Text("To Indy"),Key(98),SetXY(256,168),Off()]);
[0130] (7A)   VerbOps(34,[New(),Text("To Henry"),Key(98),SetXY(256,168),Off()]);
[0146] (1A)   Var[103] = 1;
[014B] (48)   if (VAR_VIDEOMODE == 4) {
[0152] (FA)     VerbOps(Var[103],[Color(2),HiColor(14),DimColor(5)]);
[015C] (18)   } else {
[015F] (FA)     VerbOps(Var[103],[Color(2),HiColor(14),DimColor(8)]);
[0169] (**)   }
[0169] (46)   Var[103]++;
[016C] (44)   unless (Var[103] > 13) goto 014B;
[0173] (7A)   VerbOps(129,[New(),Text("in"),Off()]);
[017C] (7A)   VerbOps(130,[New(),Text("with"),Off()]);
[0187] (7A)   VerbOps(131,[New(),Text("on"),Off()]);
[0190] (7A)   VerbOps(132,[New(),Text("to"),Off()]);
[0199] (7A)   VerbOps(101,[New(),SetXY(Var[122 + 1],Var[129 + 1]),Color(5),HiColor(13),Text(getName(Var[137])),Off(),Key(49)]);
[01B3] (7A)   VerbOps(102,[New(),SetXY(Var[122 + 2],Var[129 + 2]),Color(5),HiColor(13),Text(getName(Var[138])),Off(),Key(50)]);
[01CD] (7A)   VerbOps(103,[New(),SetXY(Var[122 + 3],Var[129 + 3]),Color(5),HiColor(13),Text(getName(Var[139])),Off(),Key(51)]);
[01E7] (7A)   VerbOps(104,[New(),SetXY(Var[122 + 4],Var[129 + 4]),Color(5),HiColor(13),Text(getName(Var[140])),Off(),Key(52)]);
[0201] (7A)   VerbOps(105,[New(),SetXY(Var[122 + 5],Var[129 + 5]),Color(5),HiColor(13),Text(getName(Var[141])),Off(),Key(53)]);
[021B] (7A)   VerbOps(106,[New(),SetXY(Var[122 + 6],Var[129 + 6]),Color(5),HiColor(13),Text(getName(Var[142])),Off(),Key(54)]);
[0235] (7A)   VerbOps(107,[New(),SetXY(152,176),Color(1),HiColor(9),Text("\x01\x02"),Off(),Key(113)]);
[0249] (7A)   VerbOps(108,[New(),SetXY(152,192),Color(1),HiColor(9),Text("\x03\x04"),Off(),Key(97)]);
[025D] (7A)   VerbOps(100,[New(),SetXY(0,144),Color(3),HiColor(11),Off()]);
[026B] (48) } else if (Var[364] == 2) {
[0275] (48) } else if (Var[364] == 3) {
[027F] (2C)   InitCharset(1);
[0282] (7A)   VerbOps(1,[New(),Text("Open"),Key(111),SetXY(2,153),On()]);
[0294] (7A)   VerbOps(2,[New(),Text("Close"),Key(99),SetXY(2,162),On()]);
[02A7] (7A)   VerbOps(6,[New(),Text("Push"),Key(115),SetXY(2,171),On()]);
[02B9] (7A)   VerbOps(7,[New(),Text("Pull"),Key(120),SetXY(2,180),On()]);
[02CB] (7A)   VerbOps(10,[New(),Text("Walk to"),Key(119),SetXY(48,153),On()]);
[02E0] (7A)   VerbOps(11,[New(),Text("Pick up"),Key(112),SetXY(48,162),On()]);
[02F5] (7A)   VerbOps(13,[New(),Text("Talk to"),Key(116),SetXY(48,171),On()]);
[030A] (7A)   VerbOps(3,[New(),Text("Give"),Key(103),SetXY(48,180),On()]);
[031C] (7A)   VerbOps(8,[New(),Text("Use"),Key(117),SetXY(100,153),On()]);
[032D] (7A)   VerbOps(9,[New(),Text("Look at"),Key(108),SetXY(100,162),On()]);
[0342] (7A)   VerbOps(4,[New(),Text("Turn on"),Key(110),SetXY(100,171),On()]);
[0357] (7A)   VerbOps(5,[New(),Text("Turn off"),Key(102),SetXY(100,180),On()]);
[036D] (1A)   Var[103] = 1;
[0372] (FA)   VerbOps(Var[103],[Color(2),HiColor(14),DimColor(8)]);
[037C] (46)   Var[103]++;
[037F] (44)   unless (Var[103] > 13) goto 0372;
[0386] (7A)   VerbOps(129,[New(),Text("in"),Off()]);
[038F] (7A)   VerbOps(130,[New(),Text("with"),Off()]);
[039A] (7A)   VerbOps(131,[New(),Text("on"),Off()]);
[03A3] (7A)   VerbOps(132,[New(),Text("to"),Off()]);
[03AC] (7A)   VerbOps(101,[New(),SetXY(Var[122 + 1],Var[129 + 1]),Color(5),HiColor(13),Text(getName(Var[137])),Off(),Key(49)]);
[03C6] (7A)   VerbOps(102,[New(),SetXY(Var[122 + 2],Var[129 + 2]),Color(5),HiColor(13),Text(getName(Var[138])),Off(),Key(50)]);
[03E0] (7A)   VerbOps(103,[New(),SetXY(Var[122 + 3],Var[129 + 3]),Color(5),HiColor(13),Text(getName(Var[139])),Off(),Key(51)]);
[03FA] (7A)   VerbOps(104,[New(),SetXY(Var[122 + 4],Var[129 + 4]),Color(5),HiColor(13),Text(getName(Var[140])),Off(),Key(52)]);
[0414] (7A)   VerbOps(105,[New(),SetXY(Var[122 + 5],Var[129 + 5]),Color(5),HiColor(13),Text(getName(Var[141])),Off(),Key(53)]);
[042E] (7A)   VerbOps(106,[New(),SetXY(Var[122 + 6],Var[129 + 6]),Color(5),HiColor(13),Text(getName(Var[142])),Off(),Key(54)]);
[0448] (7A)   VerbOps(107,[New(),SetXY(149,153),Color(1),HiColor(9),DimColor(8),Text("\x01\x02" + newline() + "\x05\x06" + newline() + "\x07\x08"),Off(),Key(113)]);
[0466] (7A)   VerbOps(108,[New(),SetXY(149,176),Color(1),HiColor(9),DimColor(8),Text("\x09\x0A\x09\x09" + newline() + "\x05\x06" + newline() + "\x03\x04"),Off(),Key(97)]);
[0486] (7A)   VerbOps(100,[New(),SetXY(160,144),Color(3),Center(),Off()]);
[0493] (2C)   InitCharset(2);
[0496] (18)   /* goto 0499; */
[0499] (**) }
[0499] (A0) stopObjectCode();
END

// Script 54
[0000] (48) if (Local[0] == 4) {
[0007] (42)   chainScript(4,[Local[0],Local[1]]);
[0010] (**) }
[0010] (46) Var[190]++;
[0013] (A0) stopObjectCode();
END

// Script 56: Talk to Boxing Coach
[0000] (40) cutscene([]);
[0002] (1A) VAR_MAINMENU_KEY = 0;
[0007] (12) panCameraTo(240);
[000A] (0A) startScript(21,[3]);
[0010] (80) breakHere();
[0011] (48) unless (VAR_CAMERA_POS_X == 240) goto 0010;
[0018] (14) print(9,[Text("Hi, Dr. Jones.  How would you like me to spar with you?")]);
[0053] (AE) WaitForMessage();
[0055] (C0) endCutscene();
[0056] (2C) CursorHide();
[0058] (2C) UserputOff();
[005A] (1A) VAR_VERB_SCRIPT = 18;
[005F] (2C) CursorShow();
[0061] (2C) UserputOn();
[0063] (1A) Var[197] = 145;
[0068] (1A) Bit[28] = 0;
[006D] (2C) CursorShow();
[006F] (2C) UserputOn();
[0071] (7A) VerbOps(120,[Off()]);
[0075] (7A) VerbOps(121,[Off()]);
[0079] (7A) VerbOps(122,[Off()]);
[007D] (7A) VerbOps(123,[Off()]);
[0081] (7A) VerbOps(124,[Off()]);
[0085] (7A) VerbOps(125,[Off()]);
[0089] (7A) VerbOps(126,[Off()]);
[008D] (7A) VerbOps(127,[Off()]);
[0091] (7A) VerbOps(128,[Off()]);
[0095] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[00A2] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[00AF] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[00BE] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Go easy on me.  I'm a bit out of shape!"),On()]);
[00F1] (5A) Var[197] += 8;
[00F6] (48) if (Var[364] == 3) {
[00FD] (3A)   Var[103] -= 120;
[0102] (1A)   Bit[40 + Var[103]] = 1;
[0109] (**) }
[0109] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[0118] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Let's have a good workout."),On()]);
[013E] (5A) Var[197] += 8;
[0143] (48) if (Var[364] == 3) {
[014A] (3A)   Var[103] -= 120;
[014F] (1A)   Bit[40 + Var[103]] = 1;
[0156] (**) }
[0156] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[0165] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Let me have it with everything you've got!"),On()]);
[019B] (5A) Var[197] += 8;
[01A0] (48) if (Var[364] == 3) {
[01A7] (3A)   Var[103] -= 120;
[01AC] (1A)   Bit[40 + Var[103]] = 1;
[01B3] (**) }
[01B3] (AC) Exprmode Var[103] = ((120 + 4) - 1);
[01C2] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I think I'll pass for now.  Maybe another time."),On()]);
[01FD] (5A) Var[197] += 8;
[0202] (48) if (Var[364] == 3) {
[0209] (3A)   Var[103] -= 120;
[020E] (1A)   Bit[40 + Var[103]] = 1;
[0215] (**) }
[0215] (AC) Exprmode Var[103] = ((120 + 5) - 1);
[0224] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I'd like to learn how to box."),On()]);
[024D] (5A) Var[197] += 8;
[0252] (48) if (Var[364] == 3) {
[0259] (3A)   Var[103] -= 120;
[025E] (1A)   Bit[40 + Var[103]] = 1;
[0265] (**) }
[0265] (1A) Var[190] = 0;
[026A] (80) breakHere();
[026B] (A8) unless (Var[190]) goto 026A;
[0270] (48) if (Var[190] == 120) {
[0277] (1A)   Var[326] = 1000;
[027C] (1A)   Var[328] = 40;
[0281] (1A)   Var[329] = 10;
[0286] (1A)   Var[330] = 10;
[028B] (1A)   Var[331] = 50;
[0290] (1A)   Var[334] = 10;
[0295] (1A)   Var[335] = 8;
[029A] (1A)   Var[336] = 10;
[029F] (1A)   Var[338] = 90;
[02A4] (1A)   Var[337] = 2;
[02A9] (18)   goto 06CA;
[02AC] (48) } else if (Var[190] == 121) {
[02B6] (1A)   Var[326] = 1000;
[02BB] (1A)   Var[328] = 30;
[02C0] (1A)   Var[329] = 10;
[02C5] (1A)   Var[330] = 20;
[02CA] (1A)   Var[331] = 70;
[02CF] (1A)   Var[334] = 50;
[02D4] (1A)   Var[335] = 10;
[02D9] (1A)   Var[336] = 10;
[02DE] (1A)   Var[338] = 100;
[02E3] (1A)   Var[337] = 3;
[02E8] (18)   goto 06CA;
[02EB] (48) } else if (Var[190] == 122) {
[02F5] (1A)   Var[326] = 1000;
[02FA] (1A)   Var[328] = 23;
[02FF] (1A)   Var[329] = 50;
[0304] (1A)   Var[330] = 20;
[0309] (1A)   Var[331] = 100;
[030E] (1A)   Var[334] = 35;
[0313] (1A)   Var[335] = 20;
[0318] (1A)   Var[336] = 15;
[031D] (1A)   Var[338] = 100;
[0322] (1A)   Var[337] = 5;
[0327] (18)   goto 06CA;
[032A] (48) } else if (Var[190] == 123) {
[0334] (18)   goto 0758;
[0337] (48) } else if (Var[190] == 124) {
[0341] (14)   print(9,[Text("What would you like to know?")]);
[0361] (AE)   WaitForMessage();
[0363] (18)   goto 0369;
[0366] (18)   /* goto 0369; */
[0369] (**) }
[0369] (1A) Var[197] = 145;
[036E] (1A) Bit[28] = 0;
[0373] (2C) CursorShow();
[0375] (2C) UserputOn();
[0377] (7A) VerbOps(120,[Off()]);
[037B] (7A) VerbOps(121,[Off()]);
[037F] (7A) VerbOps(122,[Off()]);
[0383] (7A) VerbOps(123,[Off()]);
[0387] (7A) VerbOps(124,[Off()]);
[038B] (7A) VerbOps(125,[Off()]);
[038F] (7A) VerbOps(126,[Off()]);
[0393] (7A) VerbOps(127,[Off()]);
[0397] (7A) VerbOps(128,[Off()]);
[039B] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[03A8] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[03B5] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[03C4] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to learn how to punch."),On()]);
[03ED] (5A) Var[197] += 8;
[03F2] (48) if (Var[364] == 3) {
[03F9] (3A)   Var[103] -= 120;
[03FE] (1A)   Bit[40 + Var[103]] = 1;
[0405] (**) }
[0405] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[0414] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to learn how to block."),On()]);
[043D] (5A) Var[197] += 8;
[0442] (48) if (Var[364] == 3) {
[0449] (3A)   Var[103] -= 120;
[044E] (1A)   Bit[40 + Var[103]] = 1;
[0455] (**) }
[0455] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[0464] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to learn how to retreat."),On()]);
[048F] (5A) Var[197] += 8;
[0494] (48) if (Var[364] == 3) {
[049B] (3A)   Var[103] -= 120;
[04A0] (1A)   Bit[40 + Var[103]] = 1;
[04A7] (**) }
[04A7] (AC) Exprmode Var[103] = ((120 + 4) - 1);
[04B6] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I think I'm ready now."),On()]);
[04D8] (5A) Var[197] += 8;
[04DD] (48) if (Var[364] == 3) {
[04E4] (3A)   Var[103] -= 120;
[04E9] (1A)   Bit[40 + Var[103]] = 1;
[04F0] (**) }
[04F0] (1A) Var[190] = 0;
[04F5] (80) breakHere();
[04F6] (A8) unless (Var[190]) goto 04F5;
[04FB] (48) if (Var[190] == 120) {
[0502] (14)   print(9,[Text("Use key number 9 to punch high.")]);
[0525] (AE)   WaitForMessage();
[0527] (11)   animateCostume(9,9);
[052A] (80)   breakHere();
[052B] (80)   breakHere();
[052C] (14)   print(9,[Text("Use key number 6 to punch medium.")]);
[0551] (AE)   WaitForMessage();
[0553] (11)   animateCostume(9,10);
[0556] (80)   breakHere();
[0557] (80)   breakHere();
[0558] (14)   print(9,[Text("Use key number 3 to punch low.")]);
[057A] (AE)   WaitForMessage();
[057C] (11)   animateCostume(9,11);
[057F] (80)   breakHere();
[0580] (80)   breakHere();
[0581] (14)   print(9,[Text("Anything else?")]);
[0593] (AE)   WaitForMessage();
[0595] (18)   goto 0369;
[0598] (48) } else if (Var[190] == 121) {
[05A2] (14)   print(9,[Text("Use key number 8 to block high.")]);
[05C5] (AE)   WaitForMessage();
[05C7] (11)   animateCostume(9,6);
[05CA] (80)   breakHere();
[05CB] (80)   breakHere();
[05CC] (14)   print(9,[Text("Use key number 5 to block medium.")]);
[05F1] (AE)   WaitForMessage();
[05F3] (11)   animateCostume(9,7);
[05F6] (80)   breakHere();
[05F7] (80)   breakHere();
[05F8] (14)   print(9,[Text("Use key number 2 to block low.")]);
[061A] (AE)   WaitForMessage();
[061C] (11)   animateCostume(9,8);
[061F] (80)   breakHere();
[0620] (80)   breakHere();
[0621] (14)   print(9,[Text("Anything else?")]);
[0633] (AE)   WaitForMessage();
[0635] (18)   goto 0369;
[0638] (48) } else if (Var[190] == 122) {
[0642] (14)   print(9,[Text("Use keys 1, 4, and 7 to retreat.")]);
[0666] (AE)   WaitForMessage();
[0668] (14)   print(9,[Text("Anything else?")]);
[067A] (AE)   WaitForMessage();
[067C] (18)   goto 0369;
[067F] (48) } else if (Var[190] == 123) {
[0689] (14)   print(9,[Text("Well then, Dr. Jones, would you like to spar with me?")]);
[06C2] (AE)   WaitForMessage();
[06C4] (18)   goto 0056;
[06C7] (18)   /* goto 06CA; */
[06CA] (**) }
[06CA] (2C) UserputOn();
[06CC] (27) PutCodeInString(9, "Boxing Coach");
[06DC] (1A) Local[1] = 9;
[06E1] (62) stopScript(200);
[06E3] (78) if (VAR_MACHINE_SPEED < 1) {
[06EA] (62)   stopScript(201);
[06EC] (62)   stopScript(202);
[06EE] (**) }
[06EE] (1A) Var[324] = 1000;
[06F3] (0A) startScript(30,[9,0,0,1,Local[1]]);
[0705] (80) breakHere();
[0706] (68) VAR_RESULT = isScriptRunning(30);
[070A] (28) unless (!VAR_RESULT) goto 0705;
[070F] (2C) UserputOff();
[0711] (40) cutscene([]);
[0713] (72) loadRoom(0);
[0715] (14) print(255,[Color(9),Text("Ten minutes later^")]);
[072D] (AE) WaitForMessage();
[072F] (C0) endCutscene();
[0730] (32) setCameraAt(240);
[0733] (01) putActor(1,224,86);
[0739] (11) animateCostume(1,3);
[073C] (2E) delay(30);
[0740] (14) print(9,[Text("Want to go again?")]);
[0755] (18) goto 0056;
[0758] (40) cutscene([]);
[075A] (13) ActorOps(1,[Costume(7),Sound(74)]);
[0761] (1E) walkActorTo(1,170,85);
[0767] (AE) WaitForActor(1);
[076A] (2A) startScript(204,[],F);
[076D] (11) animateCostume(1,245);
[0770] (80) breakHere();
[0771] (80) breakHere();
[0772] (5D) setClass(1,[150,149]);
[077C] (01) putActor(1,148,104);
[0782] (13) ActorOps(1,[Costume(12)]);
[0787] (11) animateCostume(1,7);
[078A] (1A) Local[0] = 1;
[078F] (80) breakHere();
[0790] (46) Local[0]++;
[0793] (44) unless (Local[0] > 13) goto 078F;
[079A] (13) ActorOps(1,[Costume(7)]);
[079F] (80) breakHere();
[07A0] (11) animateCostume(1,244);
[07A3] (80) breakHere();
[07A4] (80) breakHere();
[07A5] (5D) setClass(1,[22,21]);
[07AF] (01) putActor(1,145,104);
[07B5] (80) breakHere();
[07B6] (19) doSentence(10,217,0);
[07BC] (AE) WaitForSentence();
[07BE] (C0) endCutscene();
[07BF] (0A) startScript(21,[2]);
[07C5] (1A) VAR_VERB_SCRIPT = 72;
[07CA] (0A) startScript(74,[]);
[07CD] (2C) CursorShow();
[07CF] (2C) UserputOn();
[07D1] (27) PutCodeInString(9, "Play");
[07D9] (1A) VAR_MAINMENU_KEY = 319;
[07DE] (A0) stopObjectCode();
END

// Script 57
[0000] (48) if (Var[364] == 1) {
[0007] (A8)   if (Var[100]) {
[000C] (7A)     VerbOps(13,[On()]);
[0010] (18)   } else {
[0013] (7A)     VerbOps(13,[Dim()]);
[0017] (**)   }
[0017] (**) }
[0017] (A8) if (Var[101]) {
[001C] (48)   if (VAR_VIDEOMODE == 4) {
[0023] (7A)     VerbOps(32,[On(),Color(2),HiColor(14),DimColor(5)]);
[002D] (18)   } else {
[0030] (7A)     VerbOps(32,[On(),Color(2),HiColor(14),DimColor(8)]);
[003A] (**)   }
[003A] (18) } else {
[003D] (7A)   VerbOps(32,[Dim()]);
[0041] (**) }
[0041] (7A) VerbOps(34,[Off()]);
[0045] (7A) VerbOps(33,[Off()]);
[0049] (A8) if (Var[116]) {
[004E] (48)   if (VAR_EGO == 1) {
[0055] (1A)     Var[116] = 34;
[005A] (7A)     VerbOps(34,[On()]);
[005E] (**)   }
[005E] (48)   if (VAR_EGO == 2) {
[0065] (1A)     Var[116] = 33;
[006A] (7A)     VerbOps(33,[On()]);
[006E] (**)   }
[006E] (**) }
[006E] (A0) stopObjectCode();
END

// Script 58
[0000] (1A) Local[0] = 1;
[0005] (DD) setClass(Local[0],[0]);
[000C] (93) ActorOps(Local[0],[Elevation(0)]);
[0013] (46) Local[0]++;
[0016] (44) unless (Local[0] > 12) goto 0005;
[001D] (1A) Var[118] = 6;
[0022] (AC) Exprmode VAR_CHARINC = (9 - Var[118]);
[002D] (2C) InitCharset(1);
[0030] (2C) InitCursor(0);
[0033] (13) ActorOps(1,[Costume(6),TalkColor(14),Width(16),Name("Indy")]);
[0042] (13) ActorOps(4,[Costume(4),Sound(74),TalkColor(7),Width(16),Name("Marcus"),Elevation(-1)]);
[0058] (13) ActorOps(5,[Costume(5),WalkSpeed(8,2),Width(16),TalkColor(9),Palette(9,1),Palette(10,0),Palette(14,15),Palette(13,0)]);
[0070] (48) if (VAR_VIDEOMODE == 4) {
[0077] (13)   ActorOps(5,[Palette(7,8)]);
[007D] (**) }
[007D] (5D) setClass(4,[141,150]);
[0087] (2D) putActorInRoom(4,20);
[008A] (01) putActor(4,700,106);
[0090] (11) animateCostume(4,251);
[0093] (1A) Var[102] = 13;
[0098] (1A) VAR_CUTSCENE_START_SCRIPT = 22;
[009D] (1A) VAR_CUTSCENE_END_SCRIPT = 23;
[00A2] (1A) VAR_ENTRY_SCRIPT = 5;
[00A7] (1A) VAR_ENTRY_SCRIPT2 = 6;
[00AC] (1A) VAR_EXIT_SCRIPT = 7;
[00B1] (1A) VAR_SENTENCE_SCRIPT = 2;
[00B6] (1A) VAR_INVENTORY_SCRIPT = 12;
[00BB] (1A) Var[324] = 1000;
[00C0] (1A) Var[355] = 0;
[00C5] (26) setVarRange(Var[122],7,[0,0,168,0,168,0,168]);
[00D0] (26) setVarRange(Var[129],7,[0,176,176,184,184,192,192]);
[00DB] (1A) Var[114] = 10;
[00E0] (0C) Resource.lockSound(82);
[00E3] (0C) Resource.loadSound(82);
[00E6] (0C) Resource.lockSound(83);
[00E9] (0C) Resource.loadSound(83);
[00EC] (0C) Resource.lockSound(74);
[00EF] (0C) Resource.loadSound(74);
[00F2] (0C) Resource.lockSound(106);
[00F5] (0C) Resource.loadSound(106);
[00F8] (0C) Resource.lockSound(89);
[00FB] (0C) Resource.loadSound(89);
[00FE] (0C) Resource.lockSound(124);
[0101] (0C) Resource.loadSound(124);
[0104] (0C) Resource.lockSound(86);
[0107] (0C) Resource.loadSound(86);
[010A] (0C) Resource.lockSound(111);
[010D] (0C) Resource.loadSound(111);
[0110] (0C) Resource.lockSound(130);
[0113] (0C) Resource.loadSound(130);
[0116] (0C) Resource.lockSound(125);
[0119] (0C) Resource.loadSound(125);
[011C] (0C) Resource.lockScript(26);
[011F] (0C) Resource.loadScript(26);
[0122] (0C) Resource.lockScript(27);
[0125] (0C) Resource.loadScript(27);
[0128] (0C) Resource.lockScript(72);
[012B] (0C) Resource.loadScript(72);
[012E] (0C) Resource.lockScript(74);
[0131] (0C) Resource.loadScript(74);
[0134] (0C) Resource.lockScript(VAR_SENTENCE_SCRIPT);
[0138] (0C) Resource.loadScript(VAR_SENTENCE_SCRIPT);
[013C] (0C) Resource.lockScript(VAR_INVENTORY_SCRIPT);
[0140] (0C) Resource.loadScript(VAR_INVENTORY_SCRIPT);
[0144] (0C) Resource.lockScript(57);
[0147] (0C) Resource.loadScript(57);
[014A] (0C) Resource.lockScript(3);
[014D] (0C) Resource.loadScript(3);
[0150] (0C) Resource.lockScript(60);
[0153] (0C) Resource.loadScript(60);
[0156] (0C) Resource.lockScript(11);
[0159] (0C) Resource.loadScript(11);
[015C] (0C) Resource.lockScript(20);
[015F] (0C) Resource.loadScript(20);
[0162] (0C) Resource.lockScript(15);
[0165] (0C) Resource.loadScript(15);
[0168] (0C) Resource.lockScript(16);
[016B] (0C) Resource.loadScript(16);
[016E] (0C) Resource.lockScript(24);
[0171] (0C) Resource.loadScript(24);
[0174] (0C) Resource.lockScript(21);
[0177] (0C) Resource.loadScript(21);
[017A] (0C) Resource.lockScript(13);
[017D] (0C) Resource.loadScript(13);
[0180] (0C) Resource.lockScript(5);
[0183] (0C) Resource.loadScript(5);
[0186] (0C) Resource.lockScript(6);
[0189] (0C) Resource.loadScript(6);
[018C] (0C) Resource.lockScript(7);
[018F] (0C) Resource.loadScript(7);
[0192] (0C) Resource.lockScript(22);
[0195] (0C) Resource.loadScript(22);
[0198] (0C) Resource.lockScript(23);
[019B] (0C) Resource.loadScript(23);
[019E] (0C) Resource.lockScript(44);
[01A1] (0C) Resource.loadScript(44);
[01A4] (0C) Resource.lockScript(54);
[01A7] (0C) Resource.loadScript(54);
[01AA] (0C) Resource.lockScript(18);
[01AD] (0C) Resource.loadScript(18);
[01B0] (0C) Resource.lockScript(43);
[01B3] (0C) Resource.loadScript(43);
[01B6] (0A) startScript(17,[]);
[01B9] (14) print(255,[Pos(0,0),Text(" ")]);
[01C3] (A0) stopObjectCode();
END

// Script 59
[0000] (AC) Exprmode Var[354] = (<VAR_RESULT = getRandomNr(5)> + 1);
[000D] (0C) Resource.clearHeap();
[000F] (2C) CursorShow();
[0011] (2C) UserputOn();
[0013] (0A) startScript(53,[]);
[0016] (0A) startScript(15,[]);
[0019] (0A) startScript(16,[]);
[001C] (5C) oldRoomEffect-set(257);
[0020] (0A) startScript(74,[]);
[0023] (1A) Var[362] = 74;
[0028] (1A) VAR_VERB_SCRIPT = 72;
[002D] (D2) actorFollowCamera(VAR_EGO);
[0030] (80) breakHere();
[0031] (2E) delay(60);
[0035] (14) print(255,[Left(),Pos(0,0)]);
[003E] (A0) stopObjectCode();
END

// Script 60: It's Already Open/Closed
[0000] (D8) printEgo([Text("It's already " + keepText())]);
[0012] (48) if (Local[0] == 1) {
[0019] (D8)   printEgo([Text("open.")]);
[0021] (48) } else if (Local[0] == 2) {
[002B] (D8)   printEgo([Text("closed.")]);
[0035] (18)   /* goto 0038; */
[0038] (**) }
[0038] (A0) stopObjectCode();
END

// Script 62
[0000] (1A) Var[362] = 62;
[0005] (44) if (VAR_MOUSE_Y > 144) {
[000C] (44)   if (VAR_MOUSE_X > 160) {
[0013] (AC)     Exprmode Local[2] = ((VAR_MOUSE_Y - 152) / 8);
[0022] (9A)     Local[0] = Var[137 + Local[2]];
[0029] (18)   } else {
[002C] (F5)     Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0033] (**)   }
[0033] (18) } else {
[0036] (F5)   Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[003D] (**) }
[003D] (48) if (Var[110] == 13) {
[0044] (9D)   if (classOfIs(Local[0],[141])) {
[004D] (18)   } else {
[0050] (D5)     Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0057] (9D)     if (classOfIs(Local[0],[141])) {
[0060] (18)     } else {
[0063] (1A)       Local[0] = 0;
[0068] (**)     }
[0068] (**)   }
[0068] (**) }
[0068] (48) if (Var[110] == 3) {
[006F] (A8)   if (Var[113]) {
[0074] (9D)     if (classOfIs(Local[0],[133])) {
[007D] (18)     } else {
[0080] (D5)       Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0087] (9D)       if (classOfIs(Local[0],[133])) {
[0090] (18)       } else {
[0093] (1A)         Local[0] = 0;
[0098] (**)       }
[0098] (**)     }
[0098] (**)   }
[0098] (**) }
[0098] (88) if (Local[0] != Var[193]) {
[009F] (9A)   Var[193] = Local[0];
[00A4] (A8)   if (Var[113]) {
[00A9] (88)     if (Local[0] != Var[111]) {
[00B0] (9A)       Var[112] = Local[0];
[00B5] (18)     } else {
[00B8] (1A)       Var[112] = 0;
[00BD] (**)     }
[00BD] (18)   } else {
[00C0] (9A)     Var[111] = Local[0];
[00C5] (**)   }
[00C5] (A8)   if (Var[195]) {
[00CA] (FA)     VerbOps(Var[195],[Color(2)]);
[00D0] (**)   }
[00D0] (1A)   Var[194] = 0;
[00D5] (9A)   VAR_ME = Local[0];
[00DA] (B7)   startObject(Local[0],90,[]);
[00DF] (A8)   if (Var[194]) {
[00E4] (FA)     VerbOps(Var[194],[Color(14)]);
[00EA] (**)   }
[00EA] (9A)   Var[195] = Var[194];
[00EF] (48)   if (Var[364] == 3) {
[00F6] (68)     VAR_RESULT = isScriptRunning(2);
[00FA] (28)     if (!VAR_RESULT) {
[00FF] (0A)       startScript(16,[]);
[0102] (**)     }
[0102] (**)   }
[0102] (**) }
[0102] (80) breakHere();
[0103] (18) goto 0005;
[0106] (A0) stopObjectCode();
END

// Script 64
[0000] (48) if (Local[0] == 4) {
[0007] (48)   if (Local[1] == 315) {
[000E] (08)     if (VAR_ROOM != 2) {
[0015] (48)       if (VAR_ROOM == 1) {
[001C] (5C)         oldRoomEffect-set(-32383);
[0020] (**)       }
[0020] (42)       chainScript(65,[]);
[0023] (18)     } else {
[0026] (42)       chainScript(71,[]);
[0029] (**)     }
[0029] (48)   } else if (Local[1] == 22) {
[0033] (14)     print(255,[Center(),Pos(160,Var[261]),Color(15),Text(getString(VAR_CUTSCENEEXIT_KEY))]);
[0043] (AE)     WaitForMessage();
[0045] (18)     /* goto 0048; */
[0048] (**)   }
[0048] (48) } else if (Local[0] == 2) {
[0052] (F5)   Local[3] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0059] (A8)   if (Local[3]) {
[005E] (B7)     startObject(Local[3],6,[]);
[0063] (**)   }
[0063] (**) }
[0063] (A0) stopObjectCode();
END

// Script 65
[0000] (48) if (Var[364] == 3) {
[0007] (A8)   if (Var[194]) {
[000C] (FA)     VerbOps(Var[194],[Color(2)]);
[0012] (**)   }
[0012] (**) }
[0012] (48) if (Var[364] == 2) {
[0019] (0A)   startScript(108,[]);
[001C] (A8)   if (Var[198]) {
[0021] (1A)     Var[199] = 0;
[0026] (0A)     startScript(100,[0]);
[002C] (**)   }
[002C] (62)   stopScript(114);
[002E] (0A)   startScript(119,[]);
[0031] (80)   breakHere();
[0032] (68)   VAR_RESULT = isScriptRunning(119);
[0036] (28)   unless (!VAR_RESULT) goto 0031;
[003B] (18) } else {
[003E] (0A)   startScript(21,[1]);
[0044] (**) }
[0044] (40) cutscene([3]);
[0049] (1A) VAR_MAINMENU_KEY = 0;
[004E] (5C) oldRoomEffect-set(-32383);
[0052] (9A) Var[357] = VAR_ROOM;
[0057] (9A) Var[361] = Var[362];
[005C] (E2) stopScript(Var[362]);
[005F] (0A) startScript(62,[]);
[0062] (9A) Var[358] = VAR_VERB_SCRIPT;
[0067] (1A) VAR_VERB_SCRIPT = 64;
[006C] (72) loadRoom(2);
[006E] (C0) endCutscene();
[006F] (A0) stopObjectCode();
END

// Script 66
[0000] (40) cutscene([3]);
[0005] (1A) VAR_MAINMENU_KEY = 0;
[000A] (1A) VAR_VERB_SCRIPT = 64;
[000F] (32) setCameraAt(160);
[0012] (72) loadRoom(1);
[0014] (80) breakHere();
[0015] (C0) endCutscene();
[0016] (A0) stopObjectCode();
END

// Script 67
[0000] (AC) Exprmode Var[153] = ((160 - VAR_CAMERA_POS_X) + <VAR_RESULT = getActorX(Local[0])>);
[0012] (AC) Exprmode Var[154] = (<VAR_RESULT = getActorY(Local[0])> - 80);
[0020] (78) if (Var[154] < 0) {
[0027] (1A)   Var[154] = 0;
[002C] (**) }
[002C] (78) if (Var[153] < 80) {
[0033] (1A)   Var[153] = 80;
[0038] (**) }
[0038] (44) if (Var[153] > 240) {
[003F] (48)   if (Var[364] == 3) {
[0046] (1A)     Var[153] = 240;
[004B] (**)   }
[004B] (**) }
[004B] (A0) stopObjectCode();
END

// Script 68
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

// Script 69
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

// Script 70
[0000] (9A) Local[0] = VAR_CAMERA_POS_X;
[0005] (80) breakHere();
[0006] (88) if (Local[0] != VAR_CAMERA_POS_X) {
[000D] (18)   goto 0000;
[0010] (**) }
[0010] (A0) stopObjectCode();
END

// Script 71
[0000] (72) loadRoom(0);
[0002] (62) stopScript(62);
[0004] (9A) Var[362] = Var[361];
[0009] (8A) startScript(Var[361],[]);
[000D] (9A) VAR_VERB_SCRIPT = Var[358];
[0012] (5C) oldRoomEffect-set(-32640);
[0016] (48) if (Var[364] == 1) {
[001D] (1A)   VAR_MAINMENU_KEY = 319;
[0022] (33)   SetScreen(16,144)
[0028] (0A)   startScript(21,[2]);
[002E] (2C)   InitCharset(1);
[0031] (1A)   Var[356] = 1;
[0036] (5C)   oldRoomEffect-set(257);
[003A] (48) } else if (Var[364] == 0) {
[0044] (2C)   InitCharset(2);
[0047] (1A)   Var[356] = 0;
[004C] (48) } else if (Var[364] == 2) {
[0056] (1A)   VAR_MAINMENU_KEY = 319;
[005B] (33)   SetScreen(0,144)
[0061] (A8)   if (Bit[67]) {
[0066] (0A)     startScript(134,[2]);
[006C] (**)   }
[006C] (2C)   InitCharset(2);
[006F] (1A)   Var[356] = 2;
[0074] (5C)   oldRoomEffect-set(-32383);
[0078] (48) } else if (Var[364] == 3) {
[0082] (1A)   VAR_MAINMENU_KEY = 319;
[0087] (33)   SetScreen(0,144)
[008D] (0A)   startScript(21,[2]);
[0093] (2C)   InitCharset(2);
[0096] (1A)   Var[356] = 3;
[009B] (1A)   Var[104] = 2;
[00A0] (5C)   oldRoomEffect-set(-32383);
[00A4] (18)   /* goto 00A7; */
[00A7] (**) }
[00A7] (A8) if (VAR_EGO) {
[00AC] (D2)   actorFollowCamera(VAR_EGO);
[00AF] (18) } else {
[00B2] (F2)   loadRoom(Var[357]);
[00B5] (**) }
[00B5] (A0) stopObjectCode();
END

// Script 72
[0000] (48) if (Local[2] == 2) {
[0007] (28)   if (!Var[113]) {
[000C] (9A)     Var[110] = Var[194];
[0011] (**)   }
[0011] (**) }
[0011] (48) if (Local[0] == 4) {
[0018] (48)   if (Local[1] == 315) {
[001F] (08)     if (VAR_ROOM != 2) {
[0026] (42)       chainScript(65,[]);
[0029] (18)     } else {
[002C] (42)       chainScript(71,[]);
[002F] (**)     }
[002F] (18)   } else {
[0032] (0A)     startScript(24,[Local[1]]);
[0038] (9A)     Local[1] = Var[108];
[003D] (A8)     if (Local[1]) {
[0042] (1A)       Local[0] = 1;
[0047] (**)     }
[0047] (**)   }
[0047] (**) }
[0047] (48) if (Local[0] == 1) {
[004E] (48)   if (Local[1] == 100) {
[0055] (62)     stopScript(0);
[0057] (**)   }
[0057] (48)   if (Local[1] == 107) {
[005E] (3A)     Var[121] -= 1;
[0063] (42)     chainScript(12,[]);
[0066] (**)   }
[0066] (48)   if (Local[1] == 108) {
[006D] (5A)     Var[121] += 1;
[0072] (42)     chainScript(12,[]);
[0075] (**)   }
[0075] (38)   if (Local[1] >= 101) {
[007C] (04)     if (Local[1] <= 106) {
[0083] (AC)       Exprmode Local[4] = (Local[1] - 101);
[008E] (A8)       if (Var[113]) {
[0093] (9A)         Var[112] = Var[137 + Local[4]];
[009A] (18)       } else {
[009D] (9A)         Var[111] = Var[137 + Local[4]];
[00A4] (**)       }
[00A4] (1A)       Local[6] = 1;
[00A9] (18)       goto 00C5;
[00AC] (**)     }
[00AC] (**)   }
[00AC] (9A)   Var[110] = Local[1];
[00B1] (1A)   Var[111] = 0;
[00B6] (1A)   Var[112] = 0;
[00BB] (1A)   Var[113] = 0;
[00C0] (1A)   Var[193] = -1;
[00C5] (**) }
[00C5] (48) if (Var[110] == 8) {
[00CC] (A8)   if (Var[111]) {
[00D1] (0A)     startScript(11,[Var[111]]);
[00D7] (9A)     Var[113] = Var[108];
[00DC] (1A)     Var[193] = 0;
[00E1] (**)   }
[00E1] (**) }
[00E1] (48) if (Var[110] == 3) {
[00E8] (A8)   if (Var[111]) {
[00ED] (1A)     Var[113] = 132;
[00F2] (1A)     Var[193] = 0;
[00F7] (**)   }
[00F7] (**) }
[00F7] (38) if (Local[1] >= 30) {
[00FE] (04)   if (Local[1] <= 40) {
[0105] (0A)     startScript(15,[]);
[0108] (9A)     Var[110] = Local[1];
[010D] (46)     Local[7]++;
[0110] (18)     goto 0173;
[0113] (**)   }
[0113] (**) }
[0113] (48) if (Local[0] == 2) {
[011A] (A8)   if (Var[113]) {
[011F] (A8)     if (Var[112]) {
[0124] (1A)       Local[6] = 1;
[0129] (**)     }
[0129] (18)   } else {
[012C] (1A)     Local[6] = 1;
[0131] (**)   }
[0131] (**) }
[0131] (28) if (!Var[110]) {
[0136] (9A)   Var[110] = Var[114];
[013B] (**) }
[013B] (0A) startScript(16,[]);
[013E] (A8) if (Local[6]) {
[0143] (A8)   if (Var[111]) {
[0148] (A8)     if (Var[113]) {
[014D] (A8)       if (Var[112]) {
[0152] (18)         goto 0173;
[0155] (18)       } else {
[0158] (18)         goto 01BE;
[015B] (**)       }
[015B] (18)     } else {
[015E] (48)       if (Var[110] == 10) {
[0165] (90)         VAR_RESULT = getObjectOwner(Var[111]);
[016A] (08)         if (VAR_RESULT != 15) {
[0171] (62)           stopScript(0);
[0173] (**)         }
[0173] (**)       }
[0173] (19)       doSentence(STOP);
[0175] (F9)       doSentence(Var[110],Var[111],Var[112]);
[017C] (1A)       Var[193] = 0;
[0181] (**)     }
[0181] (48)   } else if (Var[110] == 10) {
[018B] (28)     if (!Bit[5 + Var[1]]) {
[0192] (48)       if (Local[0] == 2) {
[0199] (19)         doSentence(STOP);
[019B] (FE)         walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01A2] (1A)         Var[193] = 0;
[01A7] (**)       }
[01A7] (**)     }
[01A7] (**)   }
[01A7] (A8)   if (Var[192]) {
[01AC] (8A)     startScript(Var[192],[]);
[01B0] (**)   }
[01B0] (28)   if (!Var[111]) {
[01B5] (0A)     startScript(16,[]);
[01B8] (18)   } else {
[01BB] (0A)     startScript(15,[]);
[01BE] (**)   }
[01BE] (**) }
[01BE] (A0) stopObjectCode();
END

// Script 73: Indy Initialization
[0000] (1A) VAR_TIMER_NEXT = 6;
[0005] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[000A] (1A) VAR_RESTART_KEY = 322;
[000F] (1A) VAR_MAINMENU_KEY = 319;
[0014] (1A) VAR_PAUSE_KEY = 32;
[0019] (1A) VAR_NUM_ACTOR = 12;
[001E] (2C) InitCharset(1);
[0021] (1A) VAR_EGO = 1;
[0026] (27) PutCodeInString(4, "Game Paused.  Press SPACE to Continue.");
[0050] (27) PutCodeInString(1, "Insert Disk %c and Press Button to Continue.");
[0080] (27) PutCodeInString(2, "Unable to Find %s, (%c%d) Press Button.");
[00AB] (27) PutCodeInString(3, "Can't read %s, (%c%d) Press Button.");
[00D2] (40) cutscene([]);
[00D4] (72) loadRoom(0);
[00D6] (33) SetScreen(16,152)
[00DC] (0C) Resource.loadRoom(26);
[00DF] (0C) Resource.lockRoom(24);
[00E2] (0C) Resource.loadRoom(24);
[00E5] (0C) Resource.lockRoom(20);
[00E8] (0C) Resource.loadRoom(20);
[00EB] (0C) Resource.loadCostume(14);
[00EE] (0C) Resource.loadCostume(11);
[00F1] (0C) Resource.lockSound(114);
[00F4] (0C) Resource.loadSound(114);
[00F7] (1A) VAR_VERB_SCRIPT = 8;
[00FC] (2C) UserputSoftOn();
[00FE] (2C) UserputSoftOn();
[0100] (58) beginOverride();
[0102] (18) goto 011C;
[0105] (1A) Var[108] = 1;
[010A] (5C) oldRoomEffect-set(-32383);
[010E] (1A) Var[108] = 0;
[0113] (72) loadRoom(26);
[0115] (80) breakHere();
[0116] (80) breakHere();
[0117] (A8) unless (Var[108]) goto 0116;
[011C] (A8) if (VAR_OVERRIDE) {
[0121] (3C)   stopSound(114);
[0123] (0C)   Resource.unlockRoom(24);
[0126] (0C)   Resource.unlockRoom(20);
[0129] (0C)   Resource.unlockSound(114);
[012C] (**) }
[012C] (C0) endCutscene();
[012D] (33) SetScreen(0,200)
[0133] (72) loadRoom(0);
[0135] (33) SetScreen(16,144)
[013B] (0A) startScript(58,[]);
[013E] (5C) oldRoomEffect-set(-32383);
[0142] (2D) putActorInRoom(1,20);
[0145] (01) putActor(1,522,107);
[014B] (11) animateCostume(1,249);
[014E] (40) cutscene([1]);
[0153] (58) beginOverride();
[0155] (18) goto 0399;
[0158] (72) loadRoom(24);
[015A] (5C) oldRoomEffect-set(-32383);
[015E] (2C) UserputSoftOn();
[0160] (32) setCameraAt(180);
[0163] (2E) delay(60);
[0167] (12) panCameraTo(288);
[016A] (80) breakHere();
[016B] (38) unless (VAR_CAMERA_POS_X >= 232) goto 016A;
[0172] (2C) InitCharset(1);
[0175] (14) print(254,[Color(14),Center(),Pos(160,160),Text("BARNETT COLLEGE,")]);
[0191] (14) print(254,[Color(14),Center(),Pos(160,170),Text("NEW YORK,")]);
[01A6] (14) print(254,[Color(14),Center(),Pos(160,180),Text("1938")]);
[01B6] (2C) InitCharset(1);
[01B9] (80) breakHere();
[01BA] (48) unless (VAR_CAMERA_POS_X == 288) goto 01B9;
[01C1] (2E) delay(180);
[01C5] (3F) drawBox(0,160,320,190,0);
[01D0] (2E) delay(60);
[01D4] (5D) setClass(12,[0,150]);
[01DE] (13) ActorOps(12,[Costume(13),Elevation(-4)]);
[01E6] (2D) putActorInRoom(12,20);
[01E9] (01) putActor(12,680,103);
[01EF] (11) animateCostume(12,250);
[01F2] (5C) oldRoomEffect-set(129);
[01F6] (72) loadRoom(20);
[01F8] (32) setCameraAt(700);
[01FB] (2E) delay(240);
[01FF] (0D) walkActorToActor(1,4,20);
[0203] (80) breakHere();
[0204] (34) VAR_RESULT = getDist(1,4);
[020B] (04) unless (VAR_RESULT <= 120) goto 0203;
[0212] (14) print(255,[Left(),Pos(0,0)]);
[021B] (D8) printEgo([Left(),Pos(0,0),Text("Hello Marcus!")]);
[0231] (0A) startScript(202,[]);
[0234] (2E) delay(60);
[0238] (62) stopScript(201);
[023A] (11) animateCostume(4,248);
[023D] (11) animateCostume(4,3);
[0240] (11) animateCostume(4,1);
[0243] (80) breakHere();
[0244] (80) breakHere();
[0245] (AE) WaitForMessage();
[0247] (14) print(4,[Text("Indy!!  You're back!")]);
[025F] (AE) WaitForMessage();
[0261] (D8) printEgo([Text("Yes!  And I have the Cross of Coronado!!")]);
[028C] (AE) WaitForMessage();
[028E] (14) print(4,[Text("Wonderful!  I know how long you've been looking for that.")]);
[02CB] (AE) WaitForMessage();
[02CD] (D8) printEgo([Text("All my life!")]);
[02DC] (AE) WaitForMessage();
[02DE] (2E) delay(60);
[02E2] (11) animateCostume(4,13);
[02E5] (2E) delay(120);
[02E9] (11) animateCostume(4,9);
[02EC] (2E) delay(30);
[02F0] (14) print(4,[Text("Indy!  Why are you all wet?")]);
[030F] (AE) WaitForMessage();
[0311] (2E) delay(60);
[0315] (11) animateCostume(1,15);
[0318] (2E) delay(90);
[031C] (11) animateCostume(1,9);
[031F] (2E) delay(60);
[0323] (D8) printEgo([Text("Don't ask!")]);
[0330] (AE) WaitForMessage();
[0332] (2E) delay(60);
[0336] (D8) printEgo([Text("I really have to get out of these wet clothes!")]);
[0367] (AE) WaitForMessage();
[0369] (1E) walkActorTo(1,871,116);
[036F] (80) breakHere();
[0370] (80) breakHere();
[0371] (11) animateCostume(4,9);
[0374] (80) breakHere();
[0375] (80) breakHere();
[0376] (11) animateCostume(4,245);
[0379] (AE) WaitForActor(1);
[037C] (2D) putActorInRoom(1,25);
[037F] (01) putActor(1,75,100);
[0385] (11) animateCostume(1,251);
[0388] (5C) oldRoomEffect-set(129);
[038C] (72) loadRoom(25);
[038E] (32) setCameraAt(160);
[0391] (19) doSentence(10,217,0);
[0397] (AE) WaitForSentence();
[0399] (3C) stopSound(114);
[039B] (0C) Resource.unlockRoom(24);
[039E] (0C) Resource.unlockRoom(20);
[03A1] (0C) Resource.unlockSound(114);
[03A4] (14) print(255,[Text(" ")]);
[03A9] (AE) WaitForMessage();
[03AB] (5D) setClass(12,[0]);
[03B2] (13) ActorOps(12,[Elevation(0)]);
[03B8] (2D) putActorInRoom(12,0);
[03BB] (A8) if (VAR_OVERRIDE) {
[03C0] (2D)   putActorInRoom(1,25);
[03C3] (01)   putActor(1,120,85);
[03C9] (11)   animateCostume(1,250);
[03CC] (13)   ActorOps(1,[Costume(1),Sound(74)]);
[03D3] (48)   if (VAR_ROOM == 24) {
[03DA] (3F)     drawBox(0,160,320,190,0);
[03E5] (80)     breakHere();
[03E6] (**)   }
[03E6] (5C)   oldRoomEffect-set(-32383);
[03EA] (**) }
[03EA] (C0) endCutscene();
[03EB] (42) chainScript(59,[Local[0]]);
[03F1] (A0) stopObjectCode();
END

// Script 74
[0000] (1A) Var[362] = 74;
[0005] (44) if (VAR_MOUSE_Y > 176) {
[000C] (78)   if (VAR_MOUSE_X < 70) {
[0013] (AC)     Exprmode Local[2] = (((VAR_MOUSE_Y - 176) / 8) * 2);
[0026] (9A)     Local[0] = Var[137 + Local[2]];
[002D] (44)   } else if (VAR_MOUSE_X > 168) {
[0037] (78)     if (VAR_MOUSE_X < 238) {
[003E] (AC)       Exprmode Local[2] = ((((VAR_MOUSE_Y - 176) / 8) * 2) + 1);
[0055] (9A)       Local[0] = Var[137 + Local[2]];
[005C] (18)     } else {
[005F] (F5)       Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0066] (**)     }
[0066] (18)   } else {
[0069] (F5)     Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0070] (**)   }
[0070] (18) } else {
[0073] (F5)   Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[007A] (**) }
[007A] (48) if (Var[110] == 13) {
[0081] (9D)   if (classOfIs(Local[0],[141])) {
[008A] (18)   } else {
[008D] (D5)     Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0094] (9D)     if (classOfIs(Local[0],[141])) {
[009D] (18)     } else {
[00A0] (1A)       Local[0] = 0;
[00A5] (**)     }
[00A5] (**)   }
[00A5] (**) }
[00A5] (48) if (Var[110] == 3) {
[00AC] (A8)   if (Var[113]) {
[00B1] (9D)     if (classOfIs(Local[0],[133])) {
[00BA] (18)     } else {
[00BD] (D5)       Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[00C4] (9D)       if (classOfIs(Local[0],[133])) {
[00CD] (18)       } else {
[00D0] (1A)         Local[0] = 0;
[00D5] (**)       }
[00D5] (**)     }
[00D5] (**)   }
[00D5] (**) }
[00D5] (88) if (Local[0] != Var[193]) {
[00DC] (9A)   Var[193] = Local[0];
[00E1] (A8)   if (Var[113]) {
[00E6] (88)     if (Local[0] != Var[111]) {
[00ED] (9A)       Var[112] = Local[0];
[00F2] (18)     } else {
[00F5] (1A)       Var[112] = 0;
[00FA] (**)     }
[00FA] (18)   } else {
[00FD] (9A)     Var[111] = Local[0];
[0102] (**)   }
[0102] (68)   VAR_RESULT = isScriptRunning(2);
[0106] (28)   if (!VAR_RESULT) {
[010B] (0A)     startScript(16,[]);
[010E] (**)   }
[010E] (**) }
[010E] (80) breakHere();
[010F] (18) goto 0005;
[0112] (A0) stopObjectCode();
END

// Script 80: Monkey Initialization
[0000] (1A) VAR_TIMER_NEXT = 6;
[0005] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[000A] (1A) VAR_RESTART_KEY = 322;
[000F] (1A) VAR_MAINMENU_KEY = 319;
[0014] (1A) VAR_PAUSE_KEY = 32;
[0019] (2C) InitCharset(2);
[001C] (27) PutCodeInString(4, "Game Paused.  Press SPACE to Continue.");
[0046] (27) PutCodeInString(1, "Insert Disk %c and Press Button to Continue.");
[0076] (27) PutCodeInString(2, "Unable to Find %02d.LFL, (%c%d) Press Button.");
[00A7] (27) PutCodeInString(3, "Can't read %02d.LFL, (%c%d) Press Button.");
[00D4] (27) PutCodeInString(5, "Are you sure you want to restart?  (Y/N)Y");
[0101] (27) PutCodeInString(11, "Quit");
[0109] (26) setVarRange(Var[122],7,[0,176,176,176,176,176,176]);
[0114] (26) setVarRange(Var[129],7,[0,152,160,168,176,184,192]);
[011F] (1A) Var[118] = 6;
[0124] (AC) Exprmode VAR_CHARINC = (9 - Var[118]);
[012F] (1A) VAR_CUTSCENE_START_SCRIPT = 22;
[0134] (1A) VAR_CUTSCENE_END_SCRIPT = 23;
[0139] (1A) VAR_ENTRY_SCRIPT = 5;
[013E] (1A) VAR_ENTRY_SCRIPT2 = 6;
[0143] (1A) VAR_EXIT_SCRIPT = 7;
[0148] (1A) VAR_SENTENCE_SCRIPT = 2;
[014D] (1A) VAR_INVENTORY_SCRIPT = 12;
[0152] (1A) VAR_NUM_ACTOR = 12;
[0157] (0C) Resource.clearHeap();
[0159] (2C) CursorShow();
[015B] (2C) UserputOn();
[015D] (0A) startScript(15,[]);
[0160] (0A) startScript(16,[]);
[0163] (1A) VAR_VERB_SCRIPT = 95;
[0168] (33) SetScreen(0,200)
[016E] (72) loadRoom(0);
[0170] (5C) oldRoomEffect-set(-32383);
[0174] (33) SetScreen(0,144)
[017A] (0A) startScript(53,[]);
[017D] (1A) Var[114] = 10;
[0182] (0A) startScript(15,[]);
[0185] (0A) startScript(16,[]);
[0188] (1A) Bit[19] = 0;
[018D] (1A) VAR_EGO = 1;
[0192] (13) ActorOps(1,[Costume(15),TalkColor(15),Name("Guybrush")]);
[01A3] (5D) setClass(1,[149,22]);
[01AD] (AD) putActorInRoom(VAR_EGO,55);
[01B1] (81) putActor(VAR_EGO,360,100);
[01B8] (91) animateCostume(VAR_EGO,250);
[01BC] (13) ActorOps(11,[Costume(27),TalkColor(11),Name("Troll")]);
[01CA] (5D) setClass(11,[141,149,150]);
[01D7] (48) if (VAR_VIDEOMODE == 4) {
[01DE] (13)   ActorOps(11,[TalkColor(15)]);
[01E3] (18) } else {
[01E6] (13)   ActorOps(11,[TalkColor(11)]);
[01EB] (**) }
[01EB] (0A) startScript(62,[]);
[01EE] (1A) Var[362] = 62;
[01F3] (72) loadRoom(55);
[01F5] (A0) stopObjectCode();
END

// Script 82
[0000] (AC) Exprmode Local[1] = (<VAR_RESULT = getRandomNr(4)> * 5);
[000D] (AC) Exprmode Local[2] = (Local[1] + 1);
[0018] (AC) Exprmode Local[3] = (Local[1] + 2);
[0023] (AC) Exprmode Local[4] = (Local[1] + 3);
[002E] (AC) Exprmode Local[5] = (Local[1] + 4);
[0039] (AC) Exprmode Local[6] = (Local[1] + 5);
[0044] (DD) setClass(Local[0],[0]);
[004B] (93) ActorOps(Local[0],[Init(),Costume(19),InitAnimNr(Local[2]),WalkAnimNr(Local[3]),StandAnimNr(Local[4]),TalkAnimNr(Local[5],Local[6])]);
[0060] (0A) startScript(88,[Local[0]]);
[0066] (0A) startScript(85,[Local[0]]);
[006C] (0A) startScript(87,[Local[0]]);
[0072] (0A) startScript(89,[Local[0]]);
[0078] (A8) if (Local[1]) {
[007D] (0A)   startScript(86,[Local[0]]);
[0083] (18) } else {
[0086] (93)   ActorOps(Local[0],[Palette(13,15)]);
[008D] (**) }
[008D] (A0) stopObjectCode();
END

// Script 83
[0000] (1A) Local[3] = 4;
[0005] (AC) Exprmode Local[2] = ((<VAR_RESULT = getRandomNr(Local[1])> + Local[0]) * 60);
[0017] (2B) delayVariable(Local[2]);
[001A] (83) VAR_RESULT = getActorRoom(Local[3]);
[001F] (48) if (VAR_RESULT == 0) {
[0026] (0A)   startScript(82,[Local[3]]);
[002C] (EA)   startScript(Var[374],[Local[3]],F,R);
[0033] (**) }
[0033] (5A) Local[3] += 1;
[0038] (44) if (Local[3] > 8) {
[003F] (1A)   Local[3] = 4;
[0044] (**) }
[0044] (18) goto 0005;
[0047] (A0) stopObjectCode();
END

// Script 84
[0000] (1A) Local[0] = 4;
[0005] (AD) putActorInRoom(Local[0],0);
[0009] (46) Local[0]++;
[000C] (44) unless (Local[0] > 8) goto 0005;
[0013] (A0) stopObjectCode();
END

// Script 85
[0000] (16) Local[1] = getRandomNr(14);
[0004] (04) if (Local[1] <= 4) {
[000B] (93)   ActorOps(Local[0],[Palette(14,0)]);
[0012] (04) } else if (Local[1] <= 9) {
[001C] (93)   ActorOps(Local[0],[Palette(14,6)]);
[0023] (48) } else if (Local[1] == 10) {
[002D] (93)   ActorOps(Local[0],[Palette(14,4)]);
[0034] (48) } else if (Local[1] == 11) {
[003E] (93)   ActorOps(Local[0],[Palette(14,14)]);
[0045] (48) } else if (Local[1] == 12) {
[004F] (93)   ActorOps(Local[0],[Palette(14,8)]);
[0056] (48) } else if (Local[1] == 13) {
[0060] (93)   ActorOps(Local[0],[Palette(14,7)]);
[0067] (48) } else if (Local[1] == 14) {
[0071] (93)   ActorOps(Local[0],[Palette(14,15)]);
[0078] (18)   /* goto 007B; */
[007B] (**) }
[007B] (A0) stopObjectCode();
END

// Script 86
[0000] (16) Local[1] = getRandomNr(9);
[0004] (48) if (Local[1] == 5) {
[000B] (1A)   Local[1] = 12;
[0010] (48) } else if (Local[1] == 6) {
[001A] (1A)   Local[1] = 15;
[001F] (**) }
[001F] (93) ActorOps(Local[0],[Palette(13,Local[1])]);
[0027] (A0) stopObjectCode();
END

// Script 87
[0000] (16) Local[1] = getRandomNr(5);
[0004] (44) if (Local[1] > 3) {
[000B] (5A)   Local[1] += 4;
[0010] (**) }
[0010] (93) ActorOps(Local[0],[Palette(10,Local[1])]);
[0018] (A0) stopObjectCode();
END

// Script 88
[0000] (AC) Exprmode Local[1] = (<VAR_RESULT = getRandomNr(4)> + 1);
[000D] (44) if (Local[1] > 3) {
[0014] (5A)   Local[1] += 4;
[0019] (48)   if (Local[1] == 8) {
[0020] (1A)     Local[2] = 7;
[0025] (18)   } else {
[0028] (1A)     Local[2] = 3;
[002D] (**)   }
[002D] (18) } else {
[0030] (AC)   Exprmode Local[2] = (Local[1] + 8);
[003B] (**) }
[003B] (93) ActorOps(Local[0],[Palette(2,Local[1])]);
[0043] (A0) stopObjectCode();
END

// Script 89
[0000] (16) Local[1] = getRandomNr(1);
[0004] (93) ActorOps(Local[0],[Palette(5,Local[1])]);
[000C] (A0) stopObjectCode();
END

// Script 90: Talk to Pirate at Bar
[0000] (9A) Local[0] = VAR_VERB_SCRIPT;
[0005] (5C) oldRoomEffect-set(128);
[0009] (72) loadRoom(58);
[000B] (1A) VAR_VERB_SCRIPT = 18;
[0010] (0A) startScript(21,[3]);
[0016] (40) cutscene([]);
[0018] (AD) putActorInRoom(VAR_EGO,58);
[001C] (81) putActor(VAR_EGO,0,0);
[0023] (93) ActorOps(VAR_EGO,[Elevation(200)]);
[002A] (D8) printEgo([Pos(75,25)]);
[0031] (14) print(255,[Color(6),Pos(75,25)]);
[003B] (80) breakHere();
[003C] (80) breakHere();
[003D] (80) breakHere();
[003E] (14) print(255,[Text("What are you looking at me for?")]);
[0061] (AE) WaitForMessage();
[0063] (0A) startScript(200,[]);
[0066] (C0) endCutscene();
[0067] (1A) Var[197] = 145;
[006C] (1A) Bit[28] = 0;
[0071] (2C) CursorShow();
[0073] (2C) UserputOn();
[0075] (7A) VerbOps(120,[Off()]);
[0079] (7A) VerbOps(121,[Off()]);
[007D] (7A) VerbOps(122,[Off()]);
[0081] (7A) VerbOps(123,[Off()]);
[0085] (7A) VerbOps(124,[Off()]);
[0089] (7A) VerbOps(125,[Off()]);
[008D] (7A) VerbOps(126,[Off()]);
[0091] (7A) VerbOps(127,[Off()]);
[0095] (7A) VerbOps(128,[Off()]);
[0099] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[00A6] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[00B3] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[00C2] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I'd like to introduce myself... my name's Guybrush."),On()]);
[0101] (5A) Var[197] += 8;
[0106] (48) if (Var[364] == 3) {
[010D] (3A)   Var[103] -= 120;
[0112] (1A)   Bit[40 + Var[103]] = 1;
[0119] (**) }
[0119] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[0128] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("What's a nice pirate like you doing in a place like this?"),On()]);
[016D] (5A) Var[197] += 8;
[0172] (48) if (Var[364] == 3) {
[0179] (3A)   Var[103] -= 120;
[017E] (1A)   Bit[40 + Var[103]] = 1;
[0185] (**) }
[0185] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[0194] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Excuse me, but I'm looking for the dart board."),On()]);
[01CE] (5A) Var[197] += 8;
[01D3] (48) if (Var[364] == 3) {
[01DA] (3A)   Var[103] -= 120;
[01DF] (1A)   Bit[40 + Var[103]] = 1;
[01E6] (**) }
[01E6] (AC) Exprmode Var[103] = ((120 + 4) - 1);
[01F5] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Where can I get a drink?"),On()]);
[0219] (5A) Var[197] += 8;
[021E] (48) if (Var[364] == 3) {
[0225] (3A)   Var[103] -= 120;
[022A] (1A)   Bit[40 + Var[103]] = 1;
[0231] (**) }
[0231] (A8) if (Bit[129]) {
[0236] (28)   if (!Local[2]) {
[023B] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[024A] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Do you know anything about a magic phrase?"),On()]);
[0280] (5A)     Var[197] += 8;
[0285] (48)     if (Var[364] == 3) {
[028C] (3A)       Var[103] -= 120;
[0291] (1A)       Bit[40 + Var[103]] = 1;
[0298] (**)     }
[0298] (**)   }
[0298] (**) }
[0298] (1A) Var[190] = 0;
[029D] (80) breakHere();
[029E] (A8) unless (Var[190]) goto 029D;
[02A3] (48) if (Var[190] == 120) {
[02AA] (14)   print(255,[Text("Well, hello, Mr..." + wait() + "...Mr. Brush.")]);
[02CF] (AE)   WaitForMessage();
[02D1] (14)   print(255,[Text("Make yourself at home.")]);
[02EB] (48) } else if (Var[190] == 121) {
[02F5] (14)   print(255,[Text("Trying to relax and enjoy a little grog..." + wait() + "What do you THINK I'm doing here?")]);
[0346] (48) } else if (Var[190] == 122) {
[0350] (14)   print(255,[Text("Er, the dart board, yes..." + wait() + "Well, we used to have one...")]);
[038C] (AE)   WaitForMessage();
[038E] (14)   print(255,[Text("But there was a horrible accident." + wait() + "Drinking and darts don't mix, you know.")]);
[03DD] (AE)   WaitForMessage();
[03DF] (48) } else if (Var[190] == 123) {
[03E9] (14)   print(255,[Text("A drink?" + wait() + "Well, you could wait for the cook to notice you..." + wait() + "...but that could take all day.")]);
[044A] (AE)   WaitForMessage();
[044C] (0A)   startScript(200,[]);
[044F] (80)   breakHere();
[0450] (68)   VAR_RESULT = isScriptRunning(200);
[0454] (28)   unless (!VAR_RESULT) goto 044F;
[0459] (14)   print(255,[Text("Best bet is to sneak into the kitchen and help yourself at the keg.")]);
[04A0] (AE)   WaitForMessage();
[04A2] (14)   print(255,[Text("That is, if you can find a mug.")]);
[04C5] (48) } else if (Var[190] == 124) {
[04CF] (1A)   Local[2] = 1;
[04D4] (14)   print(255,[Text("A magic^" + wait() + "^a magic phrase." + wait() + "No, though you might try asking the fortune teller and the prisoner." + wait() + "Most of us in here^" + wait() + "^Er^never mind.")]);
[055E] (18)   /* goto 0561; */
[0561] (**) }
[0561] (AE) WaitForMessage();
[0563] (0A) startScript(200,[]);
[0566] (80) breakHere();
[0567] (68) VAR_RESULT = isScriptRunning(200);
[056B] (28) unless (!VAR_RESULT) goto 0566;
[0570] (1A) Var[197] = 145;
[0575] (1A) Bit[28] = 0;
[057A] (2C) CursorShow();
[057C] (2C) UserputOn();
[057E] (7A) VerbOps(120,[Off()]);
[0582] (7A) VerbOps(121,[Off()]);
[0586] (7A) VerbOps(122,[Off()]);
[058A] (7A) VerbOps(123,[Off()]);
[058E] (7A) VerbOps(124,[Off()]);
[0592] (7A) VerbOps(125,[Off()]);
[0596] (7A) VerbOps(126,[Off()]);
[059A] (7A) VerbOps(127,[Off()]);
[059E] (7A) VerbOps(128,[Off()]);
[05A2] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[05AF] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[05BC] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[05CB] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Why aren't you out pirating?"),On()]);
[05F3] (5A) Var[197] += 8;
[05F8] (48) if (Var[364] == 3) {
[05FF] (3A)   Var[103] -= 120;
[0604] (1A)   Bit[40 + Var[103]] = 1;
[060B] (**) }
[060B] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[061A] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I want to be a pirate!"),On()]);
[063C] (5A) Var[197] += 8;
[0641] (48) if (Var[364] == 3) {
[0648] (3A)   Var[103] -= 120;
[064D] (1A)   Bit[40 + Var[103]] = 1;
[0654] (**) }
[0654] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[0663] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Why is this place so crowded?"),On()]);
[068C] (5A) Var[197] += 8;
[0691] (48) if (Var[364] == 3) {
[0698] (3A)   Var[103] -= 120;
[069D] (1A)   Bit[40 + Var[103]] = 1;
[06A4] (**) }
[06A4] (1A) Var[190] = 0;
[06A9] (80) breakHere();
[06AA] (A8) unless (Var[190]) goto 06A9;
[06AF] (48) if (Var[190] == 120) {
[06B6] (48) } else if (Var[190] == 121) {
[06C0] (14)   print(255,[Text("Oh, you do, do you?")]);
[06D7] (AE)   WaitForMessage();
[06D9] (14)   print(255,[Text("But there are some dangers to being a pirate that you might not be aware of.  Like...")]);
[0732] (AE)   WaitForMessage();
[0734] (48) } else if (Var[190] == 122) {
[073E] (18)   /* goto 0741; */
[0741] (**) }
[0741] (14) print(255,[Text("Uh..." + wait() + "Let's just say it's safer for us pirates to stay in here.")]);
[0785] (AE) WaitForMessage();
[0787] (0A) startScript(200,[]);
[078A] (80) breakHere();
[078B] (68) VAR_RESULT = isScriptRunning(200);
[078F] (28) unless (!VAR_RESULT) goto 078A;
[0794] (1A) Var[197] = 145;
[0799] (1A) Bit[28] = 0;
[079E] (2C) CursorShow();
[07A0] (2C) UserputOn();
[07A2] (7A) VerbOps(120,[Off()]);
[07A6] (7A) VerbOps(121,[Off()]);
[07AA] (7A) VerbOps(122,[Off()]);
[07AE] (7A) VerbOps(123,[Off()]);
[07B2] (7A) VerbOps(124,[Off()]);
[07B6] (7A) VerbOps(125,[Off()]);
[07BA] (7A) VerbOps(126,[Off()]);
[07BE] (7A) VerbOps(127,[Off()]);
[07C2] (7A) VerbOps(128,[Off()]);
[07C6] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[07D3] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[07E0] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[07EF] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("What do you mean, 'safer'?"),On()]);
[0815] (5A) Var[197] += 8;
[081A] (48) if (Var[364] == 3) {
[0821] (3A)   Var[103] -= 120;
[0826] (1A)   Bit[40 + Var[103]] = 1;
[082D] (**) }
[082D] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[083C] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("You sound like a chicken to me."),On()]);
[0867] (5A) Var[197] += 8;
[086C] (48) if (Var[364] == 3) {
[0873] (3A)   Var[103] -= 120;
[0878] (1A)   Bit[40 + Var[103]] = 1;
[087F] (**) }
[087F] (1A) Var[190] = 0;
[0884] (80) breakHere();
[0885] (A8) unless (Var[190]) goto 0884;
[088A] (48) if (Var[190] == 120) {
[0891] (48) } else if (Var[190] == 121) {
[089B] (14)   print(255,[Text("You would be too, if you were smart.")]);
[08C3] (AE)   WaitForMessage();
[08C5] (18)   /* goto 08C8; */
[08C8] (**) }
[08C8] (14) print(255,[Text("Listen..." + wait() + "There's something out there.")]);
[08F3] (AE) WaitForMessage();
[08F5] (0A) startScript(200,[]);
[08F8] (80) breakHere();
[08F9] (68) VAR_RESULT = isScriptRunning(200);
[08FD] (28) unless (!VAR_RESULT) goto 08F8;
[0902] (1A) Var[197] = 145;
[0907] (1A) Bit[28] = 0;
[090C] (2C) CursorShow();
[090E] (2C) UserputOn();
[0910] (7A) VerbOps(120,[Off()]);
[0914] (7A) VerbOps(121,[Off()]);
[0918] (7A) VerbOps(122,[Off()]);
[091C] (7A) VerbOps(123,[Off()]);
[0920] (7A) VerbOps(124,[Off()]);
[0924] (7A) VerbOps(125,[Off()]);
[0928] (7A) VerbOps(126,[Off()]);
[092C] (7A) VerbOps(127,[Off()]);
[0930] (7A) VerbOps(128,[Off()]);
[0934] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0941] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[094E] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[095D] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("So what, you big kwyjibo!"),On()]);
[0982] (5A) Var[197] += 8;
[0987] (48) if (Var[364] == 3) {
[098E] (3A)   Var[103] -= 120;
[0993] (1A)   Bit[40 + Var[103]] = 1;
[099A] (**) }
[099A] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[09A9] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yeah, lots of treasure!"),On()]);
[09CC] (5A) Var[197] += 8;
[09D1] (48) if (Var[364] == 3) {
[09D8] (3A)   Var[103] -= 120;
[09DD] (1A)   Bit[40 + Var[103]] = 1;
[09E4] (**) }
[09E4] (AC) Exprmode Var[103] = ((120 + 3) - 1);
[09F3] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("What's out there?"),On()]);
[0A10] (5A) Var[197] += 8;
[0A15] (48) if (Var[364] == 3) {
[0A1C] (3A)   Var[103] -= 120;
[0A21] (1A)   Bit[40 + Var[103]] = 1;
[0A28] (**) }
[0A28] (1A) Var[190] = 0;
[0A2D] (80) breakHere();
[0A2E] (A8) unless (Var[190]) goto 0A2D;
[0A33] (48) if (Var[190] == 120) {
[0A3A] (14)   print(255,[Text("I know it sounds like one of those stories that you hear, but it's not." + wait() + "It's...")]);
[0A8E] (AE)   WaitForMessage();
[0A90] (48) } else if (Var[190] == 121) {
[0A9A] (14)   print(255,[Text("No...")]);
[0AA3] (AE)   WaitForMessage();
[0AA5] (48) } else if (Var[190] == 122) {
[0AAF] (18)   /* goto 0AB2; */
[0AB2] (**) }
[0AB2] (05) drawObject(453,255,255);
[0AB9] (14) print(255,[Text("...something horrible.")]);
[0AD3] (AE) WaitForMessage();
[0AD5] (1A) Var[197] = 145;
[0ADA] (1A) Bit[28] = 0;
[0ADF] (2C) CursorShow();
[0AE1] (2C) UserputOn();
[0AE3] (7A) VerbOps(120,[Off()]);
[0AE7] (7A) VerbOps(121,[Off()]);
[0AEB] (7A) VerbOps(122,[Off()]);
[0AEF] (7A) VerbOps(123,[Off()]);
[0AF3] (7A) VerbOps(124,[Off()]);
[0AF7] (7A) VerbOps(125,[Off()]);
[0AFB] (7A) VerbOps(126,[Off()]);
[0AFF] (7A) VerbOps(127,[Off()]);
[0B03] (7A) VerbOps(128,[Off()]);
[0B07] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0B14] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[0B21] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[0B30] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("What?  What?!?"),On()]);
[0B4A] (5A) Var[197] += 8;
[0B4F] (48) if (Var[364] == 3) {
[0B56] (3A)   Var[103] -= 120;
[0B5B] (1A)   Bit[40 + Var[103]] = 1;
[0B62] (**) }
[0B62] (AC) Exprmode Var[103] = ((120 + 2) - 1);
[0B71] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("I don't care.  I'm not afraid of anything."),On()]);
[0BA7] (5A) Var[197] += 8;
[0BAC] (48) if (Var[364] == 3) {
[0BB3] (3A)   Var[103] -= 120;
[0BB8] (1A)   Bit[40 + Var[103]] = 1;
[0BBF] (**) }
[0BBF] (1A) Var[190] = 0;
[0BC4] (80) breakHere();
[0BC5] (A8) unless (Var[190]) goto 0BC4;
[0BCA] (48) if (Var[190] == 120) {
[0BD1] (48) } else if (Var[190] == 121) {
[0BDB] (14)   print(255,[Text("All right, have it your way." + wait() + "But don't be surprised if you meet something out there.")]);
[0C34] (AE)   WaitForMessage();
[0C36] (48) } else if (Var[190] == 122) {
[0C40] (18)   /* goto 0C43; */
[0C43] (**) }
[0C43] (14) print(255,[Text("Something known as...")]);
[0C5C] (AE) WaitForMessage();
[0C5E] (2E) delay(60);
[0C62] (40) cutscene([]);
[0C64] (14) print(255,[Text("LeChuck." + keepText())]);
[0C72] (1C) startSound(129);
[0C74] (2E) delay(180);
[0C78] (14) print(255,[Text(" " + newline() + " ")]);
[0C80] (C0) endCutscene();
[0C81] (14) print(255,[Text("I'm shaking all over now just thinking about it." + wait() + "You'd better leave me be." + wait() + "I'd advise you to stay where it's safe and warm.")]);
[0D02] (AE) WaitForMessage();
[0D04] (18) /* goto 0D07; */
[0D07] (1A) Bit[39] = 1;
[0D0C] (AD) putActorInRoom(VAR_EGO,52);
[0D10] (81) putActor(VAR_EGO,201,129);
[0D17] (93) ActorOps(VAR_EGO,[Elevation(0)]);
[0D1E] (D8) printEgo([Center(),Pos(160,8)]);
[0D26] (14) print(255,[Color(15),Center(),Pos(160,8)]);
[0D31] (5C) oldRoomEffect-set(-32383);
[0D35] (3C) stopSound(129);
[0D37] (72) loadRoom(52);
[0D39] (9A) VAR_VERB_SCRIPT = Local[0];
[0D3E] (0A) startScript(21,[2]);
[0D44] (2C) CursorShow();
[0D46] (2C) UserputOn();
[0D48] (A0) stopObjectCode();
END

// Script 91: Talk to Map Seller
[0000] (62) stopScript(83);
[0002] (9A) Local[0] = VAR_VERB_SCRIPT;
[0007] (1A) VAR_VERB_SCRIPT = 18;
[000C] (0A) startScript(21,[3]);
[0012] (40) cutscene([]);
[0014] (11) animateCostume(3,3);
[0017] (A8) if (Bit[18]) {
[001C] (14)   print(3,[Text("Excuse me, but do--" + wait() + "Oh, it's only you again.")]);
[004D] (AE)   WaitForMessage();
[004F] (A8)   if (Bit[19]) {
[0054] (14)     print(3,[Text("I told you there was only ONE in existence.")]);
[0083] (AE)     WaitForMessage();
[0085] (18)     goto 0756;
[0088] (**)   }
[0088] (18) } else {
[008B] (14)   print(3,[Text("Excuse me, but do you have a cousin named Sven?")]);
[00BE] (AE)   WaitForMessage();
[00C0] (**) }
[00C0] (C0) endCutscene();
[00C1] (1A) Var[197] = 145;
[00C6] (1A) Bit[28] = 0;
[00CB] (2C) CursorShow();
[00CD] (2C) UserputOn();
[00CF] (7A) VerbOps(120,[Off()]);
[00D3] (7A) VerbOps(121,[Off()]);
[00D7] (7A) VerbOps(122,[Off()]);
[00DB] (7A) VerbOps(123,[Off()]);
[00DF] (7A) VerbOps(124,[Off()]);
[00E3] (7A) VerbOps(125,[Off()]);
[00E7] (7A) VerbOps(126,[Off()]);
[00EB] (7A) VerbOps(127,[Off()]);
[00EF] (7A) VerbOps(128,[Off()]);
[00F3] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0100] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[010D] (A8) if (Bit[18]) {
[0112] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[0121] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yeah so?"),On()]);
[0135] (5A)   Var[197] += 8;
[013A] (48)   if (Var[364] == 3) {
[0141] (3A)     Var[103] -= 120;
[0146] (1A)     Bit[40 + Var[103]] = 1;
[014D] (**)   }
[014D] (28)   if (!Bit[154]) {
[0152] (AC)     Exprmode Var[103] = ((120 + 4) - 1);
[0161] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("Yes, but I once had a barber named Dominique!"),On()]);
[019A] (5A)     Var[197] += 8;
[019F] (48)     if (Var[364] == 3) {
[01A6] (3A)       Var[103] -= 120;
[01AB] (1A)       Bit[40 + Var[103]] = 1;
[01B2] (**)     }
[01B2] (**)   }
[01B2] (A8)   if (Bit[129]) {
[01B7] (28)     if (!Bit[144]) {
[01BC] (AC)       Exprmode Var[103] = ((120 + 5) - 1);
[01CB] (FA)       VerbOps(Var[103],[SetXY(0,Var[197]),Text("Umm^Do you know anything about a magic phrase?"),On()]);
[0205] (5A)       Var[197] += 8;
[020A] (48)       if (Var[364] == 3) {
[0211] (3A)         Var[103] -= 120;
[0216] (1A)         Bit[40 + Var[103]] = 1;
[021D] (**)       }
[021D] (**)     }
[021D] (**)   }
[021D] (18) } else {
[0220] (AC)   Exprmode Var[103] = ((120 + 1) - 1);
[022F] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("What?"),On()]);
[0240] (5A)   Var[197] += 8;
[0245] (48)   if (Var[364] == 3) {
[024C] (3A)     Var[103] -= 120;
[0251] (1A)     Bit[40 + Var[103]] = 1;
[0258] (**)   }
[0258] (AC)   Exprmode Var[103] = ((120 + 2) - 1);
[0267] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, I don't"),On()]);
[027E] (5A)   Var[197] += 8;
[0283] (48)   if (Var[364] == 3) {
[028A] (3A)     Var[103] -= 120;
[028F] (1A)     Bit[40 + Var[103]] = 1;
[0296] (**)   }
[0296] (AC)   Exprmode Var[103] = ((120 + 3) - 1);
[02A5] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("What is that?  Some sort of code?"),On()]);
[02D2] (5A)   Var[197] += 8;
[02D7] (48)   if (Var[364] == 3) {
[02DE] (3A)     Var[103] -= 120;
[02E3] (1A)     Bit[40 + Var[103]] = 1;
[02EA] (**)   }
[02EA] (AC)   Exprmode Var[103] = ((120 + 4) - 1);
[02F9] (FA)   VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, but I once had a barber named Dominique."),On()]);
[0331] (5A)   Var[197] += 8;
[0336] (48)   if (Var[364] == 3) {
[033D] (3A)     Var[103] -= 120;
[0342] (1A)     Bit[40 + Var[103]] = 1;
[0349] (**)   }
[0349] (A8)   if (Bit[129]) {
[034E] (AC)     Exprmode Var[103] = ((120 + 5) - 1);
[035D] (FA)     VerbOps(Var[103],[SetXY(0,Var[197]),Text("No, but do you know anything about a magic phrase?"),On()]);
[039B] (5A)     Var[197] += 8;
[03A0] (48)     if (Var[364] == 3) {
[03A7] (3A)       Var[103] -= 120;
[03AC] (1A)       Bit[40 + Var[103]] = 1;
[03B3] (**)     }
[03B3] (**)   }
[03B3] (**) }
[03B3] (1A) Bit[18] = 1;
[03B8] (1A) Var[190] = 0;
[03BD] (80) breakHere();
[03BE] (A8) unless (Var[190]) goto 03BD;
[03C3] (48) if (Var[190] == 120) {
[03CA] (18)   goto 051A;
[03CD] (48) } else if (Var[190] == 121) {
[03D7] (18)   goto 051A;
[03DA] (48) } else if (Var[190] == 122) {
[03E4] (14)   print(3,[Text("Of course it's a code, you idiot.")]);
[0409] (AE)   WaitForMessage();
[040B] (18)   goto 051A;
[040E] (48) } else if (Var[190] == 123) {
[0418] (1A)   Bit[154] = 1;
[041D] (14)   print(3,[Text("Close enough.")]);
[042E] (AE)   WaitForMessage();
[0430] (18)   goto 053B;
[0433] (48) } else if (Var[190] == 124) {
[043D] (1A)   Bit[144] = 1;
[0442] (14)   print(3,[Text("Listen, m'boy.  I need to make a living here." + wait() + "I just can't GIVE information away like that.")]);
[04A2] (AE)   WaitForMessage();
[04A4] (14)   print(3,[Text("Unless^" + wait() + "you have some means of compensation^")]);
[04D5] (AE)   WaitForMessage();
[04D7] (D8)   printEgo([Text("I'm not getting any money in this demo!")]);
[0501] (AE)   WaitForMessage();
[0503] (14)   print(3,[Text("Well, then.")]);
[0512] (AE)   WaitForMessage();
[0514] (18)   goto 051A;
[0517] (18)   /* goto 051A; */
[051A] (**) }
[051A] (14) print(3,[Text("Never mind." + wait() + "Good night.")]);
[0536] (AE) WaitForMessage();
[0538] (18) goto 076A;
[053B] (40) cutscene([2]);
[0540] (58) beginOverride();
[0542] (18) goto 061F;
[0545] (14) print(3,[Text("Let's talk business.")]);
[055D] (AE) WaitForMessage();
[055F] (11) animateCostume(3,7);
[0562] (2E) delay(120);
[0566] (14) print(3,[Text("You want to buy a map to the Legendary Lost Treasure of M\x88l\x82e Island\x0F?")]);
[05B0] (AE) WaitForMessage();
[05B2] (11) animateCostume(3,8);
[05B5] (2E) delay(120);
[05B9] (14) print(3,[Text("Only one in existence.")]);
[05D3] (AE) WaitForMessage();
[05D5] (11) animateCostume(3,6);
[05D8] (2E) delay(60);
[05DC] (14) print(3,[Text("Rare.")]);
[05E5] (AE) WaitForMessage();
[05E7] (14) print(3,[Text("Very rare.")]);
[05F5] (AE) WaitForMessage();
[05F7] (11) animateCostume(3,11);
[05FA] (2E) delay(60);
[05FE] (14) print(3,[Text("Only 100 pieces of eight...")]);
[061D] (AE) WaitForMessage();
[061F] (11) animateCostume(3,3);
[0622] (C0) endCutscene();
[0623] (1A) Var[197] = 145;
[0628] (1A) Bit[28] = 0;
[062D] (2C) CursorShow();
[062F] (2C) UserputOn();
[0631] (7A) VerbOps(120,[Off()]);
[0635] (7A) VerbOps(121,[Off()]);
[0639] (7A) VerbOps(122,[Off()]);
[063D] (7A) VerbOps(123,[Off()]);
[0641] (7A) VerbOps(124,[Off()]);
[0645] (7A) VerbOps(125,[Off()]);
[0649] (7A) VerbOps(126,[Off()]);
[064D] (7A) VerbOps(127,[Off()]);
[0651] (7A) VerbOps(128,[Off()]);
[0655] (26) setVarRange(Var[379],9,[0,0,0,0,0,0,0,0,0]);
[0662] (26) setVarRange(Bit[40],9,[0,0,0,0,0,0,0,0,0]);
[066F] (AC) Exprmode Var[103] = ((120 + 1) - 1);
[067E] (FA) VerbOps(Var[103],[SetXY(0,Var[197]),Text("No thanks, I don't have enough money."),On()]);
[06AF] (5A) Var[197] += 8;
[06B4] (48) if (Var[364] == 3) {
[06BB] (3A)   Var[103] -= 120;
[06C0] (1A)   Bit[40 + Var[103]] = 1;
[06C7] (**) }
[06C7] (1A) Var[190] = 0;
[06CC] (80) breakHere();
[06CD] (A8) unless (Var[190]) goto 06CC;
[06D2] (48) if (Var[190] == 120) {
[06D9] (14)   print(3,[Text("Well then, buzz off kid, it's bad for business.")]);
[070C] (AE)   WaitForMessage();
[070E] (48) } else if (Var[190] == 121) {
[0718] (11)   animateCostume(3,10);
[071B] (14)   print(3,[Text("Here ya go.  You've made a wise decision.")]);
[0748] (50)   pickupObject(429);
[074B] (07)   setState(429,0);
[074F] (1A)   Bit[19] = 1;
[0754] (AE)   WaitForMessage();
[0756] (14)   print(3,[Text("Now get lost.")]);
[0767] (18)   /* goto 076A; */
[076A] (**) }
[076A] (11) animateCostume(3,2);
[076D] (9A) VAR_VERB_SCRIPT = Local[0];
[0772] (0A) startScript(21,[2]);
[0778] (2C) CursorShow();
[077A] (2C) UserputOn();
[077C] (2A) startScript(83,[10,6],F);
[0785] (A0) stopObjectCode();
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
[000C] (9A)     Var[110] = Var[194];
[0011] (**)   }
[0011] (**) }
[0011] (48) if (Local[0] == 4) {
[0018] (48)   if (Local[1] == 49) {
[001F] (14)     print(255,[Text(" ")]);
[0024] (48)   } else if (Local[1] == 315) {
[002E] (08)     if (VAR_ROOM != 2) {
[0035] (42)       chainScript(65,[]);
[0038] (18)     } else {
[003B] (42)       chainScript(71,[]);
[003E] (**)     }
[003E] (18)   } else {
[0041] (0A)     startScript(24,[Local[1]]);
[0047] (9A)     Local[1] = Var[108];
[004C] (A8)     if (Local[1]) {
[0051] (1A)       Local[0] = 1;
[0056] (**)     }
[0056] (**)   }
[0056] (**) }
[0056] (48) if (Local[0] == 1) {
[005D] (48)   if (Local[1] == 100) {
[0064] (62)     stopScript(0);
[0066] (**)   }
[0066] (48)   if (Local[1] == 107) {
[006D] (3A)     Var[121] -= 1;
[0072] (42)     chainScript(12,[]);
[0075] (**)   }
[0075] (48)   if (Local[1] == 108) {
[007C] (5A)     Var[121] += 1;
[0081] (42)     chainScript(12,[]);
[0084] (**)   }
[0084] (38)   if (Local[1] >= 101) {
[008B] (04)     if (Local[1] <= 106) {
[0092] (AC)       Exprmode Local[4] = (Local[1] - 101);
[009D] (A8)       if (Var[113]) {
[00A2] (9A)         Var[112] = Var[137 + Local[4]];
[00A9] (18)       } else {
[00AC] (9A)         Var[111] = Var[137 + Local[4]];
[00B3] (**)       }
[00B3] (1A)       Local[6] = 1;
[00B8] (18)       goto 00D4;
[00BB] (**)     }
[00BB] (**)   }
[00BB] (9A)   Var[110] = Local[1];
[00C0] (1A)   Var[111] = 0;
[00C5] (1A)   Var[112] = 0;
[00CA] (1A)   Var[113] = 0;
[00CF] (1A)   Var[193] = -1;
[00D4] (**) }
[00D4] (48) if (Var[110] == 8) {
[00DB] (A8)   if (Var[111]) {
[00E0] (0A)     startScript(11,[Var[111]]);
[00E6] (9A)     Var[113] = Var[108];
[00EB] (**)   }
[00EB] (**) }
[00EB] (48) if (Var[110] == 3) {
[00F2] (A8)   if (Var[111]) {
[00F7] (1A)     Var[113] = 132;
[00FC] (**)   }
[00FC] (**) }
[00FC] (48) if (Local[0] == 2) {
[0103] (A8)   if (Var[113]) {
[0108] (A8)     if (Var[112]) {
[010D] (1A)       Local[6] = 1;
[0112] (**)     }
[0112] (18)   } else {
[0115] (1A)     Local[6] = 1;
[011A] (**)   }
[011A] (**) }
[011A] (28) if (!Var[110]) {
[011F] (9A)   Var[110] = Var[114];
[0124] (**) }
[0124] (0A) startScript(16,[]);
[0127] (A8) if (Local[6]) {
[012C] (A8)   if (Var[111]) {
[0131] (A8)     if (Var[113]) {
[0136] (A8)       if (Var[112]) {
[013B] (18)         goto 015C;
[013E] (18)       } else {
[0141] (18)         goto 019D;
[0144] (**)       }
[0144] (18)     } else {
[0147] (48)       if (Var[110] == 10) {
[014E] (90)         VAR_RESULT = getObjectOwner(Var[111]);
[0153] (08)         if (VAR_RESULT != 15) {
[015A] (62)           stopScript(0);
[015C] (**)         }
[015C] (**)       }
[015C] (19)       doSentence(STOP);
[015E] (F9)       doSentence(Var[110],Var[111],Var[112]);
[0165] (**)     }
[0165] (48)   } else if (Var[110] == 10) {
[016F] (28)     if (!Bit[5 + Var[1]]) {
[0176] (48)       if (Local[0] == 2) {
[017D] (19)         doSentence(STOP);
[017F] (FE)         walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0186] (**)       }
[0186] (**)     }
[0186] (**)   }
[0186] (A8)   if (Var[192]) {
[018B] (8A)     startScript(Var[192],[]);
[018F] (**)   }
[018F] (28)   if (!Var[111]) {
[0194] (0A)     startScript(16,[]);
[0197] (18)   } else {
[019A] (0A)     startScript(15,[]);
[019D] (**)   }
[019D] (**) }
[019D] (A0) stopObjectCode();
END

// Script 97: Key Commands
[0000] (1A) Local[2] = 0;
[0005] (48) if (Local[0] == 2) {
[000C] (42)   chainScript(98,[1]);
[0012] (48) } else if (Local[0] == 1) {
[001C] (28)   if (!Local[1]) {
[0021] (62)     stopScript(0);
[0023] (**)   }
[0023] (48)   if (Local[1] == 54) {
[002A] (AE)     WaitForActor(VAR_EGO);
[002E] (0A)     startScript(99,[Var[198],54]);
[0037] (48)   } else if (Local[1] == 53) {
[0041] (0A)     startScript(103,[]);
[0044] (48)   } else if (Local[1] == 49) {
[004E] (9A)     Local[2] = VAR_MOUSE_X;
[0053] (3A)     Local[2] -= 48;
[0058] (5B)     Local[2] /= 24;
[005D] (5A)     Local[2] += 2;
[0062] (0A)     startScript(104,[Local[2]]);
[0068] (48)   } else if (Local[1] == 50) {
[0072] (0A)     startScript(104,[1]);
[0078] (48)   } else if (Local[1] == 51) {
[0082] (0A)     startScript(104,[1]);
[0088] (18)   } else {
[008B] (9A)     Local[2] = Local[1];
[0090] (38)     if (Local[2] >= 9) {
[0097] (3A)       Local[2] -= 9;
[009C] (5B)       Local[2] /= 5;
[00A1] (46)       Local[2]++;
[00A4] (**)     }
[00A4] (0A)     startScript(104,[Local[2]]);
[00AA] (**)   }
[00AA] (48) } else if (Local[0] == 4) {
[00B4] (48)   if (Local[1] == 113) {
[00BB] (1A)     Local[2] = 1;
[00C0] (48)   } else if (Local[1] == 119) {
[00CA] (1A)     Local[2] = 2;
[00CF] (48)   } else if (Local[1] == 101) {
[00D9] (1A)     Local[2] = 3;
[00DE] (48)   } else if (Local[1] == 114) {
[00E8] (1A)     Local[2] = 4;
[00ED] (48)   } else if (Local[1] == 116) {
[00F7] (1A)     Local[2] = 5;
[00FC] (48)   } else if (Local[1] == 121) {
[0106] (1A)     Local[2] = 6;
[010B] (48)   } else if (Local[1] == 117) {
[0115] (1A)     Local[2] = 7;
[011A] (48)   } else if (Local[1] == 105) {
[0124] (1A)     Local[2] = 8;
[0129] (48)   } else if (Local[1] == 99) {
[0133] (1A)     Local[2] = 1;
[0138] (48)   } else if (Local[1] == 100) {
[0142] (1A)     Local[2] = 2;
[0147] (48)   } else if (Local[1] == 101) {
[0151] (1A)     Local[2] = 3;
[0156] (48)   } else if (Local[1] == 102) {
[0160] (1A)     Local[2] = 4;
[0165] (48)   } else if (Local[1] == 103) {
[016F] (1A)     Local[2] = 5;
[0174] (48)   } else if (Local[1] == 97) {
[017E] (1A)     Local[2] = 6;
[0183] (48)   } else if (Local[1] == 98) {
[018D] (1A)     Local[2] = 7;
[0192] (48)   } else if (Local[1] == 67) {
[019C] (1A)     Local[2] = 8;
[01A1] (48)   } else if (Local[1] == 27) {
[01AB] (28)     if (!Bit[79]) {
[01B0] (1A)       Var[199] = 0;
[01B5] (0A)       startScript(100,[0]);
[01BB] (A8)       if (Bit[71]) {
[01C0] (40)         cutscene([0]);
[01C5] (80)         breakHere();
[01C6] (28)         unless (!Bit[72]) goto 01C5;
[01CB] (0A)         startScript(116,[]);
[01CE] (0A)         startScript(119,[]);
[01D1] (80)         breakHere();
[01D2] (68)         VAR_RESULT = isScriptRunning(119);
[01D6] (28)         unless (!VAR_RESULT) goto 01D1;
[01DB] (C0)         endCutscene();
[01DC] (**)       }
[01DC] (**)     }
[01DC] (48)   } else if (Local[1] == 60) {
[01E6] (44)     if (Var[260] > 0) {
[01ED] (C6)       Var[260]--;
[01F0] (**)     }
[01F0] (18)     goto 0207;
[01F3] (48)   } else if (Local[1] == 62) {
[01FD] (78)     if (Var[260] < 9) {
[0204] (46)       Var[260]++;
[0207] (**)     }
[0207] (1A)     VAR_CHARINC = 9;
[020C] (BA)     VAR_CHARINC -= Var[260];
[0211] (14)     print(255,[Center(),Pos(160,Var[261]),Color(15),Text("(Text speed " + getInt(Var[260]) + ".)")]);
[022F] (48)   } else if (Local[1] == 315) {
[0239] (08)     if (VAR_ROOM != 2) {
[0240] (42)       chainScript(65,[]);
[0243] (18)     } else {
[0246] (42)       chainScript(71,[]);
[0249] (**)     }
[0249] (48)   } else if (Local[1] == 320) {
[0253] (48)     if (Var[257] == 0) {
[025A] (1A)       Var[257] = 1;
[025F] (A8)       if (Var[259]) {
[0264] (BC)         stopSound(Var[259]);
[0267] (1A)         Var[259] = 0;
[026C] (**)       }
[026C] (14)       print(255,[Center(),Pos(160,Var[261]),Color(15),Text("(Music off. Sound effects on.)")]);
[0296] (48)     } else if (Var[257] == 1) {
[02A0] (1A)       Var[257] = 2;
[02A5] (A8)       if (Var[259]) {
[02AA] (BC)         stopSound(Var[259]);
[02AD] (1A)         Var[259] = 0;
[02B2] (**)       }
[02B2] (14)       print(255,[Center(),Pos(160,Var[261]),Color(15),Text("(Music and sound effects off.)")]);
[02DC] (48)     } else if (Var[257] == 2) {
[02E6] (1A)       Var[257] = 0;
[02EB] (14)       print(255,[Center(),Pos(160,Var[261]),Color(15),Text("(Music and sound effects on.)")]);
[0314] (18)       /* goto 0317; */
[0317] (**)     }
[0317] (80)     breakHere();
[0318] (48)   } else if (Local[1] == 22) {
[0322] (14)     print(255,[Center(),Pos(160,Var[261]),Color(15),Text(getString(VAR_CUTSCENEEXIT_KEY))]);
[0332] (AE)     WaitForMessage();
[0334] (48)     if (Var[352] == 104) {
[033B] (1A)       Var[352] = 22;
[0340] (18)     } else {
[0343] (1A)       Var[352] = 0;
[0348] (**)     }
[0348] (18)     /* goto 034B; */
[034B] (**)   }
[034B] (A8)   if (Local[2]) {
[0350] (0A)     startScript(104,[Local[2]]);
[0356] (**)   }
[0356] (18)   /* goto 0359; */
[0359] (**) }
[0359] (A0) stopObjectCode();
END

// Script 98
[0000] (1A) Local[1] = 0;
[0005] (A8) if (Var[201]) {
[000A] (78)   if (VAR_TMR_2 < 40) {
[0011] (B8)     if (VAR_VIRT_MOUSE_X >= Var[206]) {
[0018] (9A)       Local[3] = VAR_VIRT_MOUSE_X;
[001D] (BA)       Local[3] -= Var[206];
[0022] (18)     } else {
[0025] (9A)       Local[3] = Var[206];
[002A] (BA)       Local[3] -= VAR_VIRT_MOUSE_X;
[002F] (**)     }
[002F] (78)     if (Local[3] < 6) {
[0036] (B8)       if (VAR_VIRT_MOUSE_Y >= Var[207]) {
[003D] (9A)         Local[3] = VAR_VIRT_MOUSE_Y;
[0042] (BA)         Local[3] -= Var[207];
[0047] (18)       } else {
[004A] (9A)         Local[3] = Var[207];
[004F] (BA)         Local[3] -= VAR_VIRT_MOUSE_Y;
[0054] (**)       }
[0054] (78)       if (Local[3] < 3) {
[005B] (46)         Local[1]++;
[005E] (1A)         Var[201] = 0;
[0063] (**)       }
[0063] (**)     }
[0063] (**)   }
[0063] (**) }
[0063] (28) if (!Local[1]) {
[0068] (1A)   VAR_TMR_2 = 0;
[006D] (9A)   Var[206] = VAR_VIRT_MOUSE_X;
[0072] (9A)   Var[207] = VAR_VIRT_MOUSE_Y;
[0077] (46)   Var[201]++;
[007A] (**) }
[007A] (1A) Var[362] = 98;
[007F] (A8) if (Bit[71]) {
[0084] (18) } else {
[0087] (9A)   Var[205] = VAR_VIRT_MOUSE_Y;
[008C] (78)   if (Var[205] < 0) {
[0093] (18)   } else {
[0096] (9A)     Var[204] = VAR_VIRT_MOUSE_X;
[009B] (F5)     Local[2] = findObject(Var[204],Var[205]);
[00A2] (9D)     if (classOfIs(Local[2],[129])) {
[00AB] (A8)       if (Local[0]) {
[00B0] (9A)         Var[199] = Local[2];
[00B5] (88)         if (Local[2] != Var[198]) {
[00BC] (0A)           startScript(100,[Local[2]]);
[00C2] (**)         }
[00C2] (C3)         Var[202] = getActorX(Local[2]);
[00C7] (A3)         Var[203] = getActorY(Local[2]);
[00CC] (9D)         if (classOfIs(Local[2],[130])) {
[00D5] (9A)           Var[208] = Local[2];
[00DA] (**)         }
[00DA] (1A)         Bit[68] = 1;
[00DF] (1A)         Bit[69] = 0;
[00E4] (B7)         startObject(Local[2],55,[]);
[00E9] (28)         if (!Bit[69]) {
[00EE] (F6)           walkActorToObject(VAR_EGO,Local[2]);
[00F3] (AE)           WaitForActor(VAR_EGO);
[00F7] (0A)           startScript(99,[Local[2],10]);
[0100] (**)         }
[0100] (1A)         Bit[68] = 0;
[0105] (A8)         if (Local[1]) {
[010A] (1A)           Local[1] = 0;
[010F] (0A)           startScript(99,[Local[2],54]);
[0118] (**)         }
[0118] (28)       } else if (!Var[199]) {
[0120] (0A)         startScript(100,[Local[2]]);
[0126] (**)       }
[0126] (A8)     } else if (Local[0]) {
[012E] (1A)       Var[199] = 0;
[0133] (0A)       startScript(100,[0]);
[0139] (A8)       if (Local[2]) {
[013E] (C3)         Var[202] = getActorX(Local[2]);
[0143] (A3)         Var[203] = getActorY(Local[2]);
[0148] (9D)         if (classOfIs(Local[2],[130])) {
[0151] (9A)           Var[208] = Local[2];
[0156] (**)         }
[0156] (1A)         Bit[68] = 1;
[015B] (1A)         Bit[69] = 0;
[0160] (B7)         startObject(Local[2],55,[]);
[0165] (28)         if (!Bit[69]) {
[016A] (F6)           walkActorToObject(VAR_EGO,Local[2]);
[016F] (AE)           WaitForActor(VAR_EGO);
[0173] (0A)           startScript(99,[Local[2],10]);
[017C] (**)         }
[017C] (1A)         Bit[68] = 0;
[0181] (A8)         if (Local[1]) {
[0186] (1A)           Local[1] = 0;
[018B] (0A)           startScript(99,[Local[2],54]);
[0194] (**)         }
[0194] (18)       } else {
[0197] (9A)         Var[202] = Var[204];
[019C] (9A)         Var[203] = Var[205];
[01A1] (FE)         walkActorTo(VAR_EGO,Var[202],Var[203]);
[01A8] (AE)         WaitForActor(VAR_EGO);
[01AC] (**)       }
[01AC] (28)     } else if (!Var[199]) {
[01B4] (A8)       if (Var[198]) {
[01B9] (0A)         startScript(100,[0]);
[01BF] (**)       }
[01BF] (**)     }
[01BF] (**)   }
[01BF] (**) }
[01BF] (80) breakHere();
[01C0] (1A) Local[0] = 0;
[01C5] (18) goto 007F;
[01C8] (A0) stopObjectCode();
END

// Script 99
[0000] (F4) Local[2] = getDist(VAR_EGO,Local[0]);
[0007] (78) if (Local[2] < 2) {
[000E] (9D)   if (classOfIs(Local[0],[129])) {
[0017] (C8)     if (Local[0] == Var[199]) {
[001E] (14)       print(254,[Center(),Pos(272,181),Color(15),Text(getName(Local[0]))]);
[002E] (**)     }
[002E] (**)   }
[002E] (F7)   startObject(Local[0],Local[1],[]);
[0034] (9D) } else if (classOfIs(Local[0],[129])) {
[0040] (C8)   if (Local[0] == Var[198]) {
[0047] (1A)     Var[199] = 0;
[004C] (42)     chainScript(100,[0]);
[0052] (**)   }
[0052] (**) }
[0052] (A0) stopObjectCode();
END

// Script 100
[0000] (A8) if (Var[198]) {
[0005] (1A)   Var[200] = 0;
[000A] (7A)   VerbOps(54,[Off()]);
[000E] (3F)   drawBox(228,152,312,192,0);
[0019] (**) }
[0019] (9A) Var[198] = Local[0];
[001E] (A8) if (Local[0]) {
[0023] (B7)   startObject(Local[0],56,[]);
[0028] (A8)   if (Var[200]) {
[002D] (7A)     VerbOps(54,[SetXY(248,152),Image(Var[200]);,On()]);
[0039] (C8)     if (Local[0] == Var[199]) {
[0040] (F4)       Local[1] = getDist(VAR_EGO,Local[0]);
[0047] (78)       if (Local[1] < 2) {
[004E] (14)         print(254,[Center(),Pos(272,181),Color(15),Text(getName(Local[0]))]);
[005E] (**)       }
[005E] (**)     }
[005E] (**)   }
[005E] (**) }
[005E] (A0) stopObjectCode();
END

// Script 101
[0000] (28) if (!Bit[79]) {
[0005] (A8)   if (Bit[67]) {
[000A] (48)     if (Var[188] == 0) {
[0011] (0A)       startScript(134,[2]);
[0017] (**)     }
[0017] (0A)     startScript(134,[]);
[001A] (**)   }
[001A] (**) }
[001A] (A0) stopObjectCode();
END

// Script 102
[0000] (1A) Var[321] = 0;
[0005] (1A) Bit[88] = 0;
[000A] (62) stopScript(123);
[000C] (1A) Var[199] = 0;
[0011] (0A) startScript(100,[0]);
[0017] (0A) startScript(116,[]);
[001A] (9A) Var[104] = VAR_ROOM;
[001F] (A0) stopObjectCode();
END

// Script 103
[0000] (48) if (Var[188] == 2) {
[0007] (28)   if (!Var[199]) {
[000C] (42)     chainScript(106,[]);
[000F] (**)   }
[000F] (F4)   Local[3] = getDist(VAR_EGO,Var[199]);
[0016] (44)   if (Local[3] > 1) {
[001D] (42)     chainScript(105,[]);
[0020] (**)   }
[0020] (48)   if (Var[218] == 0) {
[0027] (A8)     if (Var[187]) {
[002C] (40)       cutscene([0]);
[0031] (9A)       Local[1] = Var[187];
[0036] (C6)       Local[1]--;
[0039] (1A)       Local[0] = 0;
[003E] (28)       if (!Bit[70]) {
[0043] (78)         if (Var[186] < 4) {
[004A] (28)           if (!Var[186]) {
[004F] (2A)             startScript(118,[],F);
[0052] (**)           }
[0052] (9A)           Local[2] = Var[178 + Local[0]];
[0059] (0A)           startScript(115,[Local[2]]);
[005F] (9A)           Var[174 + Var[186]] = Local[2];
[0066] (46)           Var[186]++;
[0069] (**)         }
[0069] (**)       }
[0069] (46)       Local[0]++;
[006C] (C4)       unless (Local[0] > Local[1]) goto 003E;
[0073] (80)       breakHere();
[0074] (28)       unless (!Bit[71]) goto 0073;
[0079] (C0)       endCutscene();
[007A] (**)     }
[007A] (**)   }
[007A] (**) }
[007A] (A0) stopObjectCode();
END

// Script 104
[0000] (48) if (Var[188] == 2) {
[0007] (28)   if (!Var[199]) {
[000C] (42)     chainScript(106,[]);
[000F] (**)   }
[000F] (F4)   Local[1] = getDist(VAR_EGO,Var[199]);
[0016] (44)   if (Local[1] > 1) {
[001D] (42)     chainScript(105,[]);
[0020] (**)   }
[0020] (C4)   if (Local[0] > Var[217]) {
[0027] (42)     chainScript(107,[]);
[002A] (**)   }
[002A] (28)   if (!Bit[70]) {
[002F] (78)     if (Var[186] < 4) {
[0036] (9A)       Var[174 + Var[186]] = Local[0];
[003D] (46)       Var[186]++;
[0040] (48)       if (Var[186] == 1) {
[0047] (1A)         Var[187] = 0;
[004C] (2A)         startScript(118,[],F);
[004F] (**)       }
[004F] (42)       chainScript(115,[Local[0]]);
[0055] (**)     }
[0055] (**)   }
[0055] (**) }
[0055] (A0) stopObjectCode();
END

// Script 105
[0000] (40) cutscene([0]);
[0005] (11) animateCostume(1,255);
[0008] (0A) startScript(116,[]);
[000B] (0A) startScript(119,[]);
[000E] (80) breakHere();
[000F] (68) VAR_RESULT = isScriptRunning(119);
[0013] (28) unless (!VAR_RESULT) goto 000E;
[0018] (80) breakHere();
[0019] (28) if (!Bit[78]) {
[001E] (14)   print(1,[Center(),Pos(160,Var[261]),Text("Maybe I ought to stand a bit closer.")]);
[004C] (**) }
[004C] (80) breakHere();
[004D] (C0) endCutscene();
[004E] (A0) stopObjectCode();
END

// Script 106
[0000] (40) cutscene([0]);
[0005] (11) animateCostume(1,255);
[0008] (0A) startScript(116,[]);
[000B] (0A) startScript(119,[]);
[000E] (80) breakHere();
[000F] (68) VAR_RESULT = isScriptRunning(119);
[0013] (28) unless (!VAR_RESULT) goto 000E;
[0018] (80) breakHere();
[0019] (28) if (!Bit[78]) {
[001E] (14)   print(1,[Center(),Pos(160,Var[261]),Text("I suppose I ought to point" + newline() + "at something first.")]);
[0057] (**) }
[0057] (80) breakHere();
[0058] (C0) endCutscene();
[0059] (A0) stopObjectCode();
END

// Script 107
[0000] (40) cutscene([0]);
[0005] (28) if (!Bit[80]) {
[000A] (2A)   startScript(112,[10],F);
[0010] (**) }
[0010] (0A) startScript(116,[]);
[0013] (0A) startScript(119,[]);
[0016] (80) breakHere();
[0017] (68) VAR_RESULT = isScriptRunning(119);
[001B] (28) unless (!VAR_RESULT) goto 0016;
[0020] (1A) Bit[78] = 1;
[0025] (14) print(1,[Center(),Pos(160,Var[261]),Text("That thread is too high for me!" + newline() + "Guess I need more experience.")]);
[006D] (80) breakHere();
[006E] (C0) endCutscene();
[006F] (A0) stopObjectCode();
END

// Script 108
[0000] (1A) Local[0] = 1;
[0005] (FA) VerbOps(Local[0],[Off()]);
[000A] (46) Local[0]++;
[000D] (44) unless (Local[0] > 48) goto 0005;
[0014] (78) if (Var[218] < 2) {
[001B] (7A)   VerbOps(49,[Off()]);
[001F] (7A)   VerbOps(50,[Off()]);
[0023] (7A)   VerbOps(51,[Off()]);
[0027] (48)   if (Var[218] == 0) {
[002E] (7A)     VerbOps(53,[Off()]);
[0032] (**)   }
[0032] (**) }
[0032] (1A) Var[186] = 0;
[0037] (1A) Var[187] = 0;
[003C] (26) setVarRange(Var[178],4,[0,0,0,0]);
[0044] (1A) Bit[70] = 0;
[0049] (1A) Var[188] = 0;
[004E] (A0) stopObjectCode();
END

// Script 109: Can't Save
[0000] (14) print(1,[Center(),Pos(160,Var[261]),Text("Can't save your game in demo mode. Sorry.")]);
[0033] (A0) stopObjectCode();
END

// Script 110
[0000] (40) cutscene([]);
[0002] (1A) Bit[73] = 1;
[0007] (80) breakHere();
[0008] (28) unless (!Bit[72]) goto 0007;
[000D] (1A) Bit[70] = 0;
[0012] (DD) setClass(Local[0],[0,150,148]);
[001F] (93) ActorOps(Local[0],[Costume(31),Elevation(Local[3]),Palette(11,14),Palette(3,12),Palette(9,4)]);
[0031] (91) animateCostume(Local[0],250);
[0035] (DA) Local[2] += Local[3];
[003A] (ED) putActorInRoom(Local[0],VAR_ROOM);
[003F] (E1) putActor(Local[0],Local[1],Local[2]);
[0046] (0A) startScript(112,[13]);
[004C] (91) animateCostume(Local[0],6);
[0050] (1A) Local[4] = 1;
[0055] (80) breakHere();
[0056] (46) Local[4]++;
[0059] (44) unless (Local[4] > 6) goto 0055;
[0060] (91) animateCostume(Local[0],7);
[0064] (1A) Local[4] = 1;
[0069] (80) breakHere();
[006A] (46) Local[4]++;
[006D] (44) unless (Local[4] > 12) goto 0069;
[0074] (91) animateCostume(Local[0],8);
[0078] (1A) Local[4] = 1;
[007D] (80) breakHere();
[007E] (46) Local[4]++;
[0081] (44) unless (Local[4] > 6) goto 007D;
[0088] (AD) putActorInRoom(Local[0],0);
[008C] (93) ActorOps(Local[0],[Elevation(0)]);
[0093] (80) breakHere();
[0094] (28) unless (!Bit[71]) goto 0093;
[0099] (80) breakHere();
[009A] (C0) endCutscene();
[009B] (A0) stopObjectCode();
END

// Script 111
[0000] (A8) if (Var[259]) {
[0005] (BC)   stopSound(Var[259]);
[0008] (1A)   Var[259] = 0;
[000D] (**) }
[000D] (A8) if (Var[258]) {
[0012] (BC)   stopSound(Var[258]);
[0015] (1A)   Var[258] = 0;
[001A] (**) }
[001A] (48) if (Var[257] == 0) {
[0021] (80)   breakHere();
[0022] (9A)   Var[259] = Local[0];
[0027] (9A)   Var[258] = Local[0];
[002C] (9C)   startSound(Local[0]);
[002F] (80)   breakHere();
[0030] (80)   breakHere();
[0031] (FC)   VAR_RESULT = isSoundRunning(Local[0]);
[0036] (28)   unless (!VAR_RESULT) goto 0030;
[003B] (1A)   Var[259] = 0;
[0040] (1A)   Var[258] = 0;
[0045] (**) }
[0045] (A0) stopObjectCode();
END

// Script 112
[0000] (A8) if (Var[259]) {
[0005] (BC)   stopSound(Var[259]);
[0008] (1A)   Var[259] = 0;
[000D] (**) }
[000D] (A8) if (Var[258]) {
[0012] (BC)   stopSound(Var[258]);
[0015] (1A)   Var[258] = 0;
[001A] (**) }
[001A] (08) if (Var[257] != 2) {
[0021] (80)   breakHere();
[0022] (48)   if (VAR_SOUNDCARD == 4) {
[0029] (5A)     Local[0] += 32;
[002E] (**)   }
[002E] (9A)   Var[259] = Local[0];
[0033] (1A)   Var[258] = 0;
[0038] (9C)   startSound(Local[0]);
[003B] (80)   breakHere();
[003C] (80)   breakHere();
[003D] (FC)   VAR_RESULT = isSoundRunning(Local[0]);
[0042] (28)   unless (!VAR_RESULT) goto 003C;
[0047] (1A)   Var[259] = 0;
[004C] (**) }
[004C] (A0) stopObjectCode();
END

// Script 113
[0000] (1A) Bit[77] = 1;
[0005] (48) if (Var[188] == 2) {
[000C] (0A)   startScript(115,[Local[0]]);
[0012] (**) }
[0012] (42) chainScript(114,[Local[0]]);
[0018] (A0) stopObjectCode();
END

// Script 114
[0000] (1A) Bit[72] = 1;
[0005] (1A) Bit[78] = 0;
[000A] (28) if (!Bit[77]) {
[000F] (C4)   if (Local[0] > Var[217]) {
[0016] (0A)     startScript(107,[]);
[0019] (62)     stopScript(0);
[001B] (**)   }
[001B] (**) }
[001B] (28) if (!Bit[80]) {
[0020] (2A)   startScript(112,[Local[0]],F);
[0026] (**) }
[0026] (48) if (Local[0] == 1) {
[002D] (26)   setVarRange(Local[6],3,[13,5,4]);
[0034] (48)   if (Var[188] == 2) {
[003B] (26)     setVarRange(Var[247],10,[9,10,11,12,13,12,11,10,9,1]);
[0049] (A6)     setVarRange(Var[237],10,[493,494,495,496,497,496,495,494,493,492]);
[0061] (**)   }
[0061] (48) } else if (Local[0] == 2) {
[006B] (26)   setVarRange(Local[6],3,[14,12,4]);
[0072] (48)   if (Var[188] == 2) {
[0079] (26)     setVarRange(Var[247],10,[14,15,16,17,18,17,16,15,14,2]);
[0087] (A6)     setVarRange(Var[237],10,[490,491,467,468,469,468,467,491,490,489]);
[009F] (**)   }
[009F] (48) } else if (Local[0] == 3) {
[00A9] (26)   setVarRange(Local[6],3,[14,10,2]);
[00B0] (48)   if (Var[188] == 2) {
[00B7] (26)     setVarRange(Var[247],10,[19,20,21,22,23,22,21,20,19,3]);
[00C5] (A6)     setVarRange(Var[237],10,[471,472,473,474,475,474,473,472,471,470]);
[00DD] (**)   }
[00DD] (48) } else if (Local[0] == 4) {
[00E7] (26)   setVarRange(Local[6],3,[11,3,2]);
[00EE] (48)   if (Var[188] == 2) {
[00F5] (26)     setVarRange(Var[247],10,[24,25,26,27,28,27,26,25,24,4]);
[0103] (A6)     setVarRange(Var[237],10,[477,478,479,480,481,480,479,478,477,476]);
[011B] (**)   }
[011B] (48) } else if (Local[0] == 5) {
[0125] (26)   setVarRange(Local[6],3,[11,3,1]);
[012C] (48)   if (Var[188] == 2) {
[0133] (26)     setVarRange(Var[247],10,[29,30,31,32,33,32,31,30,29,5]);
[0141] (A6)     setVarRange(Var[237],10,[499,500,501,502,503,502,501,500,499,482]);
[0159] (**)   }
[0159] (48) } else if (Local[0] == 8) {
[0163] (26)   setVarRange(Local[6],3,[11,7,8]);
[016A] (48)   if (Var[188] == 2) {
[0171] (26)     setVarRange(Var[247],10,[44,45,46,47,48,47,46,45,44,8]);
[017F] (A6)     setVarRange(Var[237],10,[504,505,506,507,508,507,506,505,504,485]);
[0197] (**)   }
[0197] (18)   /* goto 019A; */
[019A] (**) }
[019A] (A8) if (Bit[77]) {
[019F] (48)   if (VAR_ROOM == 45) {
[01A6] (28)     if (!Bit[81]) {
[01AB] (13)       ActorOps(12,[Palette(7,Local[6]),Palette(8,Local[7]),Palette(0,Local[8])]);
[01BA] (16)       Local[1] = getRandomNr(80);
[01BE] (5A)       Local[1] += 120;
[01C3] (16)       Local[2] = getRandomNr(12);
[01C7] (5A)       Local[2] += 56;
[01CC] (5A)       Local[2] += 100;
[01D1] (2D)       putActorInRoom(12,45);
[01D4] (61)       putActor(12,Local[1],Local[2]);
[01DA] (11)       animateCostume(12,6);
[01DD] (**)     }
[01DD] (1D)     if (classOfIs(610,[24])) {
[01E6] (13)       ActorOps(11,[Palette(2,15),Palette(10,Local[6]),Palette(13,Local[7]),Palette(5,Local[8])]);
[01F8] (11)       animateCostume(11,7);
[01FB] (**)     }
[01FB] (**)   }
[01FB] (1A)   Bit[77] = 0;
[0200] (48)   if (Var[218] == 2) {
[0207] (1A)     Local[3] = 1;
[020C] (80)     breakHere();
[020D] (46)     Local[3]++;
[0210] (44)     unless (Local[3] > 10) goto 020C;
[0217] (1A)     Bit[72] = 0;
[021C] (1A)     Var[259] = 0;
[0221] (62)     stopScript(0);
[0223] (**)   }
[0223] (**) }
[0223] (A8) if (Bit[67]) {
[0228] (13)   ActorOps(1,[Palette(2,15),Palette(10,Local[6]),Palette(13,Local[7]),Palette(5,Local[8])]);
[023A] (A8)   if (Bit[71]) {
[023F] (11)     animateCostume(1,11);
[0242] (18)   } else {
[0245] (13)     ActorOps(1,[TalkAnimNr(16,16)]);
[024B] (11)     animateCostume(1,12);
[024E] (**)   }
[024E] (**) }
[024E] (48) if (Var[188] == 2) {
[0255] (3A)   Local[0] -= 1;
[025A] (9A)   Local[1] = Var[221 + Local[0]];
[0261] (1A)   Local[2] = 144;
[0266] (48)   if (Var[218] == 2) {
[026D] (5A)     Local[2] += 8;
[0272] (**)   }
[0272] (1A)   Local[3] = 0;
[0277] (9A)   Local[4] = Var[247 + Local[3]];
[027E] (9A)   Local[5] = Var[237 + Local[3]];
[0285] (FA)   VerbOps(Local[4],[SetXY(Local[1],Local[2]),Image(Local[5]);,On()]);
[0292] (9A)   Var[229 + Local[0]] = Local[4];
[0299] (80)   breakHere();
[029A] (46)   Local[3]++;
[029D] (44)   unless (Local[3] > 9) goto 0277;
[02A4] (18) } else {
[02A7] (1A)   Local[3] = 1;
[02AC] (80)   breakHere();
[02AD] (46)   Local[3]++;
[02B0] (44)   unless (Local[3] > 10) goto 02AC;
[02B7] (**) }
[02B7] (A8) if (Bit[67]) {
[02BC] (A8)   if (Bit[71]) {
[02C1] (11)     animateCostume(1,13);
[02C4] (18)   } else {
[02C7] (13)     ActorOps(1,[TalkAnimNr(4,5)]);
[02CD] (51)     animateCostume(1,Var[211]);
[02D1] (**)   }
[02D1] (**) }
[02D1] (48) if (VAR_ROOM == 45) {
[02D8] (28)   if (!Bit[81]) {
[02DD] (2D)     putActorInRoom(12,0);
[02E0] (**)   }
[02E0] (1D)   if (classOfIs(610,[24])) {
[02E9] (11)     animateCostume(11,3);
[02EC] (**)   }
[02EC] (**) }
[02EC] (1A) Var[259] = 0;
[02F1] (1A) Bit[72] = 0;
[02F6] (A0) stopObjectCode();
END

// Script 115
[0000] (78) if (Var[187] < 4) {
[0007] (28)   if (!Var[187]) {
[000C] (0A)     startScript(116,[]);
[000F] (48)     if (Var[218] == 0) {
[0016] (7A)       VerbOps(53,[SetXY(96,184),Image(488),On()]);
[0022] (**)     }
[0022] (**)   }
[0022] (84)   if (Local[0] <= Var[217]) {
[0029] (08)     if (Var[218] != 2) {
[0030] (28)       if (!Bit[77]) {
[0035] (48)         if (Local[0] == 1) {
[003C] (14)           print(254,[Pos(27,169),Color(15),Text("\x10")]);
[0048] (48)         } else if (Local[0] == 2) {
[0052] (14)           print(254,[Pos(51,169),Color(15),Text("\x11")]);
[005E] (48)         } else if (Local[0] == 3) {
[0068] (14)           print(254,[Pos(75,169),Color(15),Text("\x12")]);
[0074] (48)         } else if (Local[0] == 4) {
[007E] (14)           print(254,[Pos(99,169),Color(15),Text("\x13")]);
[008A] (48)         } else if (Local[0] == 5) {
[0094] (14)           print(254,[Pos(123,169),Color(15),Text("\x14")]);
[00A0] (48)         } else if (Local[0] == 6) {
[00AA] (14)           print(254,[Pos(147,169),Color(15),Text("\x15")]);
[00B6] (48)         } else if (Local[0] == 7) {
[00C0] (14)           print(254,[Pos(171,169),Color(15),Text("\x16")]);
[00CC] (48)         } else if (Local[0] == 8) {
[00D6] (14)           print(254,[Pos(195,169),Color(15),Text("\x17")]);
[00E2] (18)           /* goto 00E5; */
[00E5] (**)         }
[00E5] (**)       }
[00E5] (**)     }
[00E5] (**)   }
[00E5] (48)   if (Var[218] == 0) {
[00EC] (1A)     Local[1] = 8;
[00F1] (9B)     Local[1] *= Var[187];
[00F6] (5A)     Local[1] += 104;
[00FB] (48)     if (Local[0] == 1) {
[0102] (14)       print(254,[Pos(Local[1],188),Color(4),Text("\x10")]);
[010E] (48)     } else if (Local[0] == 2) {
[0118] (14)       print(254,[Pos(Local[1],188),Color(12),Text("\x11")]);
[0124] (48)     } else if (Local[0] == 3) {
[012E] (14)       print(254,[Pos(Local[1],188),Color(14),Text("\x12")]);
[013A] (48)     } else if (Local[0] == 4) {
[0144] (14)       print(254,[Pos(Local[1],188),Color(10),Text("\x13")]);
[0150] (48)     } else if (Local[0] == 5) {
[015A] (14)       print(254,[Pos(Local[1],188),Color(11),Text("\x14")]);
[0166] (48)     } else if (Local[0] == 6) {
[0170] (14)       print(254,[Pos(Local[1],188),Color(3),Text("\x15")]);
[017C] (48)     } else if (Local[0] == 7) {
[0186] (14)       print(254,[Pos(Local[1],188),Color(9),Text("\x16")]);
[0192] (48)     } else if (Local[0] == 8) {
[019C] (14)       print(254,[Pos(Local[1],188),Color(15),Text("\x17")]);
[01A8] (18)       /* goto 01AB; */
[01AB] (**)     }
[01AB] (**)   }
[01AB] (9A)   Var[178 + Var[187]] = Local[0];
[01B2] (46)   Var[187]++;
[01B5] (**) }
[01B5] (A0) stopObjectCode();
END

// Script 116
[0000] (48) if (Var[188] == 2) {
[0007] (08)   if (Var[218] != 2) {
[000E] (0A)     startScript(117,[]);
[0011] (48)     if (Var[218] == 0) {
[0018] (7A)       VerbOps(53,[Off()]);
[001C] (**)     }
[001C] (**)   }
[001C] (**) }
[001C] (1A) Var[187] = 0;
[0021] (26) setVarRange(Var[178],4,[0,0,0,0]);
[0029] (A0) stopObjectCode();
END

// Script 117
[0000] (1A) Local[0] = 0;
[0005] (9A) Local[1] = Var[178 + Local[0]];
[000C] (1A) Local[2] = 7;
[0011] (C4) if (Local[1] > Var[217]) {
[0018] (1A)   Local[2] = 8;
[001D] (**) }
[001D] (48) if (Local[1] == 1) {
[0024] (14)   print(254,[Pos(27,169),Color(Local[2]),Text("\x10")]);
[0031] (48) } else if (Local[1] == 2) {
[003B] (14)   print(254,[Pos(51,169),Color(Local[2]),Text("\x11")]);
[0048] (48) } else if (Local[1] == 3) {
[0052] (14)   print(254,[Pos(75,169),Color(Local[2]),Text("\x12")]);
[005F] (48) } else if (Local[1] == 4) {
[0069] (14)   print(254,[Pos(99,169),Color(Local[2]),Text("\x13")]);
[0076] (48) } else if (Local[1] == 5) {
[0080] (14)   print(254,[Pos(123,169),Color(Local[2]),Text("\x14")]);
[008D] (48) } else if (Local[1] == 6) {
[0097] (14)   print(254,[Pos(147,169),Color(Local[2]),Text("\x15")]);
[00A4] (48) } else if (Local[1] == 7) {
[00AE] (14)   print(254,[Pos(171,169),Color(Local[2]),Text("\x16")]);
[00BB] (48) } else if (Local[1] == 8) {
[00C5] (14)   print(254,[Pos(195,169),Color(Local[2]),Text("\x17")]);
[00D2] (18)   /* goto 00D5; */
[00D5] (**) }
[00D5] (46) Local[0]++;
[00D8] (44) unless (Local[0] > 3) goto 0005;
[00DF] (A0) stopObjectCode();
END

// Script 118
[0000] (1A) Bit[71] = 1;
[0005] (11) animateCostume(1,255);
[0008] (80) breakHere();
[0009] (11) animateCostume(1,6);
[000C] (80) breakHere();
[000D] (80) breakHere();
[000E] (80) breakHere();
[000F] (13) ActorOps(1,[TalkAnimNr(16,16)]);
[0015] (1A) Local[0] = 0;
[001A] (9A) Local[1] = Var[174 + Local[0]];
[0021] (2A) startScript(114,[Local[1]],F);
[0027] (80) breakHere();
[0028] (28) unless (!Bit[72]) goto 0027;
[002D] (46) Local[0]++;
[0030] (38) if (Local[0] >= 4) {
[0037] (1A)   Bit[70] = 1;
[003C] (0A)   startScript(120,[]);
[003F] (1A)   VAR_TMR_1 = 0;
[0044] (80)   breakHere();
[0045] (28)   if (!Bit[70]) {
[004A] (42)     chainScript(119,[]);
[004D] (**)   }
[004D] (38)   if (VAR_TMR_1 >= 180) {
[0054] (42)     chainScript(119,[]);
[0057] (**)   }
[0057] (18)   goto 0044;
[005A] (**) }
[005A] (1A) VAR_TMR_1 = 0;
[005F] (80) breakHere();
[0060] (38) if (VAR_TMR_1 >= 180) {
[0067] (0A)   startScript(116,[]);
[006A] (42)   chainScript(119,[]);
[006D] (**) }
[006D] (F8) unless (Local[0] < Var[186]) goto 005F;
[0074] (18) goto 001A;
[0077] (A0) stopObjectCode();
END

// Script 119
[0000] (62) stopScript(118);
[0002] (1A) Bit[70] = 0;
[0007] (A8) if (Bit[71]) {
[000C] (11)   animateCostume(1,7);
[000F] (80)   breakHere();
[0010] (80)   breakHere();
[0011] (80)   breakHere();
[0012] (A8)   if (Bit[67]) {
[0017] (13)     ActorOps(1,[TalkAnimNr(4,5)]);
[001D] (18)   } else {
[0020] (13)     ActorOps(1,[TalkAnimNr(14,15)]);
[0026] (**)   }
[0026] (51)   animateCostume(1,Var[211]);
[002A] (80)   breakHere();
[002B] (1A)   Bit[71] = 0;
[0030] (**) }
[0030] (1A) Var[186] = 0;
[0035] (A0) stopObjectCode();
END

// Script 120: Spin a Draft
[0000] (A8) if (Bit[80]) {
[0005] (40)   cutscene([0]);
[000A] (0A)   startScript(116,[]);
[000D] (80)   breakHere();
[000E] (28)   unless (!Bit[72]) goto 000D;
[0013] (1A)   Bit[70] = 0;
[0018] (80)   breakHere();
[0019] (28)   unless (!Bit[71]) goto 0018;
[001E] (C0)   endCutscene();
[001F] (14)   print(1,[Center(),Pos(160,Var[261]),Text("Can't spin any drafts in here." + newline() + "Too much noise!")]);
[0058] (80)   breakHere();
[0059] (62)   stopScript(0);
[005B] (**) }
[005B] (1A) Local[0] = 0;
[0060] (0A) startScript(127,[Local[0]]);
[0066] (9A) Local[1] = Var[174 + 0];
[006D] (9A) Local[2] = Var[170 + 0];
[0074] (C8) if (Local[1] == Local[2]) {
[007B] (9A)   Local[1] = Var[174 + 1];
[0082] (9A)   Local[2] = Var[170 + 1];
[0089] (C8)   if (Local[1] == Local[2]) {
[0090] (9A)     Local[1] = Var[174 + 2];
[0097] (9A)     Local[2] = Var[170 + 2];
[009E] (C8)     if (Local[1] == Local[2]) {
[00A5] (9A)       Local[1] = Var[174 + 3];
[00AC] (9A)       Local[2] = Var[170 + 3];
[00B3] (C8)       if (Local[1] == Local[2]) {
[00BA] (42)         chainScript(131,[Local[0],0]);
[00C3] (**)       }
[00C3] (**)     }
[00C3] (**)   }
[00C3] (**) }
[00C3] (A8) if (Bit[75]) {
[00C8] (9A)   Local[1] = Var[174 + 0];
[00CF] (9A)   Local[2] = Var[170 + 3];
[00D6] (C8)   if (Local[1] == Local[2]) {
[00DD] (9A)     Local[1] = Var[174 + 1];
[00E4] (9A)     Local[2] = Var[170 + 2];
[00EB] (C8)     if (Local[1] == Local[2]) {
[00F2] (9A)       Local[1] = Var[174 + 2];
[00F9] (9A)       Local[2] = Var[170 + 1];
[0100] (C8)       if (Local[1] == Local[2]) {
[0107] (9A)         Local[1] = Var[174 + 3];
[010E] (9A)         Local[2] = Var[170 + 0];
[0115] (C8)         if (Local[1] == Local[2]) {
[011C] (42)           chainScript(131,[Local[0],1]);
[0125] (**)         }
[0125] (**)       }
[0125] (**)     }
[0125] (**)   }
[0125] (**) }
[0125] (46) Local[0]++;
[0128] (44) unless (Local[0] > 15) goto 0060;
[012F] (40) cutscene([0]);
[0134] (0A) startScript(116,[]);
[0137] (80) breakHere();
[0138] (28) unless (!Bit[72]) goto 0137;
[013D] (1A) Bit[70] = 0;
[0142] (80) breakHere();
[0143] (28) unless (!Bit[71]) goto 0142;
[0148] (C0) endCutscene();
[0149] (14) print(1,[Center(),Pos(160,Var[261]),Text("Hmm. I guess that isn't a draft.")]);
[0173] (80) breakHere();
[0174] (A0) stopObjectCode();
END

// Script 121
[0000] (A8) if (Var[259]) {
[0005] (BC)   stopSound(Var[259]);
[0008] (**) }
[0008] (A8) if (Var[258]) {
[000D] (BC)   stopSound(Var[258]);
[0010] (**) }
[0010] (62) stopScript(112);
[0012] (62) stopScript(111);
[0014] (1A) Var[259] = 0;
[0019] (1A) Var[258] = 0;
[001E] (80) breakHere();
[001F] (A0) stopObjectCode();
END

// Script 122
[0000] (A8) if (Var[258]) {
[0005] (80)   breakHere();
[0006] (9A)   Var[259] = Var[258];
[000B] (9C)   startSound(Var[258]);
[000E] (80)   breakHere();
[000F] (80)   breakHere();
[0010] (FC)   VAR_RESULT = isSoundRunning(Var[258]);
[0015] (28)   unless (!VAR_RESULT) goto 000F;
[001A] (1A)   Var[259] = 0;
[001F] (1A)   Var[258] = 0;
[0024] (**) }
[0024] (A0) stopObjectCode();
END

// Script 123
[0000] (5D) setClass(2,[0,148,150]);
[000D] (13) ActorOps(2,[Costume(32),Elevation(0)]);
[0015] (11) animateCostume(2,250);
[0018] (9A) Local[2] = Local[0];
[001D] (C6) Local[0]--;
[0020] (80) breakHere();
[0021] (28) unless (!VAR_HAVE_MSG) goto 0020;
[0026] (96) Local[1] = getRandomNr(Local[0]);
[002B] (88) unless (Local[1] != Local[2]) goto 0026;
[0032] (9A) Local[2] = Local[1];
[0037] (9A) Local[3] = Var[299 + Local[2]];
[003E] (9A) Local[4] = Var[307 + Local[2]];
[0045] (6D) putActorInRoom(2,VAR_ROOM);
[0049] (61) putActor(2,Local[3],Local[4]);
[004F] (16) Local[6] = getRandomNr(2);
[0053] (5A) Local[6] += 6;
[0058] (1A) Bit[88] = 1;
[005D] (51) animateCostume(2,Local[6]);
[0061] (48) if (Local[6] == 6) {
[0068] (1A)   Local[5] = 11;
[006D] (48) } else if (Local[6] == 7) {
[0077] (1A)   Local[5] = 7;
[007C] (18) } else {
[007F] (1A)   Local[5] = 5;
[0084] (**) }
[0084] (80) breakHere();
[0085] (C6) Local[5]--;
[0088] (28) unless (!Local[5]) goto 0084;
[008D] (2D) putActorInRoom(2,0);
[0090] (80) breakHere();
[0091] (1A) Bit[88] = 0;
[0096] (16) Local[3] = getRandomNr(60);
[009A] (46) Local[3]++;
[009D] (2B) delayVariable(Local[3]);
[00A0] (18) goto 0020;
[00A3] (A0) stopObjectCode();
END

// Script 124
[0000] (1A) Local[2] = 0;
[0005] (93) ActorOps(Local[0],[Palette(Local[2],Local[1])]);
[000E] (46) Local[2]++;
[0011] (44) unless (Local[2] > 15) goto 0005;
[0018] (A0) stopObjectCode();
END

// Script 125
[0000] (1A) Local[1] = 0;
[0005] (93) ActorOps(Local[0],[Palette(Local[1],Local[1])]);
[000E] (46) Local[1]++;
[0011] (44) unless (Local[1] > 15) goto 0005;
[0018] (A0) stopObjectCode();
END

// Script 126
[0000] (48) if (Local[0] == 0) {
[0007] (1A)   Local[2] = 4;
[000C] (1A)   Local[3] = 2;
[0011] (28)   if (!Local[1]) {
[0016] (9A)     Local[1] = Var[214];
[001B] (**)   }
[001B] (48) } else if (Local[0] == 1) {
[0025] (1A)   Local[2] = 2;
[002A] (1A)   Local[3] = 1;
[002F] (28)   if (!Local[1]) {
[0034] (9A)     Local[1] = Var[215];
[0039] (**)   }
[0039] (48) } else if (Local[0] == 2) {
[0043] (1A)   Local[2] = 2;
[0048] (1A)   Local[3] = 1;
[004D] (28)   if (!Local[1]) {
[0052] (9A)     Local[1] = Var[216];
[0057] (**)   }
[0057] (18)   /* goto 005A; */
[005A] (**) }
[005A] (9A) Var[219] = Local[0];
[005F] (9A) Var[220] = Local[1];
[0064] (1A) Var[209] = 1;
[0069] (1A) Var[210] = 2;
[006E] (1A) Var[211] = 3;
[0073] (1A) Var[212] = 4;
[0078] (1A) Var[213] = 5;
[007D] (28) if (!Bit[67]) {
[0082] (1A)   Var[209] = 8;
[0087] (1A)   Var[210] = 9;
[008C] (1A)   Var[211] = 10;
[0091] (1A)   Var[212] = 14;
[0096] (1A)   Var[213] = 15;
[009B] (**) }
[009B] (13) ActorOps(1,[Costume(Local[1]),WalkSpeed(Local[2],Local[3]),Elevation(0),InitAnimNr(Var[209]),WalkAnimNr(Var[210]),StandAnimNr(Var[211]),TalkAnimNr(Var[212],Var[213]),TalkColor(15)]);
[00B9] (48) if (VAR_VIDEOMODE == 4) {
[00C0] (13)   ActorOps(1,[Palette(8,0),Palette(7,15)]);
[00C9] (**) }
[00C9] (28) if (!Bit[79]) {
[00CE] (A8)   if (Bit[67]) {
[00D3] (08)     if (Var[188] != 2) {
[00DA] (0A)       startScript(134,[2]);
[00E0] (**)     }
[00E0] (08)   } else if (Var[188] != 0) {
[00EA] (0A)     startScript(108,[]);
[00ED] (**)   }
[00ED] (**) }
[00ED] (51) animateCostume(1,Var[211]);
[00F1] (A0) stopObjectCode();
END

// Script 127
[0000] (1B) Local[0] *= 2;
[0005] (9A) Local[2] = Var[263 + Local[0]];
[000C] (46) Local[0]++;
[000F] (9A) Var[189] = Var[263 + Local[0]];
[0016] (9A) Local[1] = Local[2];
[001B] (17) Local[1] &= 8192;
[0020] (9A) Bit[74] = Local[1];
[0025] (9A) Local[1] = Local[2];
[002A] (17) Local[1] &= 4096;
[002F] (9A) Bit[75] = Local[1];
[0034] (9A) Local[1] = Local[2];
[0039] (17) Local[1] &= 16384;
[003E] (9A) Bit[76] = Local[1];
[0043] (9A) Local[1] = Local[2];
[0048] (17) Local[1] &= 7;
[004D] (46) Local[1]++;
[0050] (9A) Var[170 + 0] = Local[1];
[0057] (9A) Local[1] = Local[2];
[005C] (17) Local[1] &= 56;
[0061] (5B) Local[1] /= 8;
[0066] (46) Local[1]++;
[0069] (9A) Var[170 + 1] = Local[1];
[0070] (9A) Local[1] = Local[2];
[0075] (17) Local[1] &= 448;
[007A] (5B) Local[1] /= 64;
[007F] (46) Local[1]++;
[0082] (9A) Var[170 + 2] = Local[1];
[0089] (9A) Local[1] = Local[2];
[008E] (17) Local[1] &= 3584;
[0093] (5B) Local[1] /= 512;
[0098] (46) Local[1]++;
[009B] (9A) Var[170 + 3] = Local[1];
[00A2] (A0) stopObjectCode();
END

// Script 128
[0000] (1A) Bit[74] = 1;
[0005] (9A) Local[1] = Local[0];
[000A] (1B) Local[1] *= 2;
[000F] (9A) Local[2] = Var[263 + Local[1]];
[0016] (57) Local[2] |= 8192;
[001B] (9A) Var[263 + Local[1]] = Local[2];
[0022] (A0) stopObjectCode();
END

// Script 129
[0000] (1A) Bit[76] = 1;
[0005] (9A) Local[1] = Local[0];
[000A] (1B) Local[1] *= 2;
[000F] (9A) Local[2] = Var[263 + Local[1]];
[0016] (57) Local[2] |= 16384;
[001B] (9A) Var[263 + Local[1]] = Local[2];
[0022] (A0) stopObjectCode();
END

// Script 130
[0000] (9A) Local[1] = Local[0];
[0005] (1B) Local[1] *= 2;
[000A] (9A) Local[2] = Var[263 + Local[1]];
[0011] (9A) Local[3] = Local[2];
[0016] (17) Local[3] &= 8192;
[001B] (9A) Bit[74] = Local[3];
[0020] (A0) stopObjectCode();
END

// Script 131
[0000] (28) if (!Bit[74]) {
[0005] (0A)   startScript(116,[]);
[0008] (80)   breakHere();
[0009] (28)   unless (!Bit[72]) goto 0008;
[000E] (1A)   Bit[70] = 0;
[0013] (80)   breakHere();
[0014] (28)   unless (!Bit[71]) goto 0013;
[0019] (94)   print(VAR_EGO,[Center(),Pos(160,Var[261]),Text("I don't think I spun that quite right.")]);
[004A] (62)   stopScript(0);
[004C] (**) }
[004C] (9A) Local[3] = Var[189];
[0051] (A8) if (Local[1]) {
[0056] (17)   Local[3] &= -256;
[005B] (5B)   Local[3] /= 256;
[0060] (18) } else {
[0063] (17)   Local[3] &= 255;
[0068] (**) }
[0068] (1A) Bit[73] = 0;
[006D] (0A) startScript(99,[Var[199],82]);
[0076] (28) if (!Bit[73]) {
[007B] (0A)   startScript(99,[Var[199],Local[3]]);
[0084] (28)   if (!Bit[73]) {
[0089] (0A)     startScript(99,[Var[199],83]);
[0092] (**)   }
[0092] (**) }
[0092] (78) if (Var[218] < 2) {
[0099] (0A)   startScript(117,[]);
[009C] (**) }
[009C] (28) if (!Bit[73]) {
[00A1] (80)   breakHere();
[00A2] (28)   unless (!Bit[72]) goto 00A1;
[00A7] (1A)   Bit[70] = 0;
[00AC] (80)   breakHere();
[00AD] (28)   unless (!Bit[71]) goto 00AC;
[00B2] (94)   print(VAR_EGO,[Center(),Pos(160,Var[261]),Text("That didn't do anything useful.")]);
[00DC] (**) }
[00DC] (A0) stopObjectCode();
END

// Script 133
[0000] (40) cutscene([]);
[0002] (A8) if (Bit[13]) {
[0007] (18) } else {
[000A] (0A)   startScript(127,[15]);
[0010] (A8)   unless (Bit[76]) goto 001A;
[0015] (**) }
[0015] (1A) Var[217] = 3;
[001A] (9A) Var[217] = Local[0];
[001F] (A8) if (Local[1]) {
[0024] (DD)   setClass(Local[1],[0,150,148]);
[0031] (93)   ActorOps(Local[1],[Costume(31),Elevation(25)]);
[003A] (91)   animateCostume(Local[1],250);
[003E] (43)   Local[3] = getActorX(1);
[0043] (23)   Local[4] = getActorY(1);
[0048] (46)   Local[4]++;
[004B] (ED)   putActorInRoom(Local[1],VAR_ROOM);
[0050] (E1)   putActor(Local[1],Local[3],Local[4]);
[0057] (1A)   Local[5] = 9;
[005C] (08)   if (Var[219] != 0) {
[0063] (1A)     Local[5] = 6;
[0068] (**)   }
[0068] (D1)   animateCostume(Local[1],Local[5]);
[006D] (**) }
[006D] (A8) if (Local[1]) {
[0072] (1A)   Local[6] = 1;
[0077] (80)   breakHere();
[0078] (46)   Local[6]++;
[007B] (44)   unless (Local[6] > 6) goto 0077;
[0082] (46)   Local[5]++;
[0085] (D1)   animateCostume(Local[1],Local[5]);
[008A] (1A)   Local[6] = 1;
[008F] (80)   breakHere();
[0090] (46)   Local[6]++;
[0093] (44)   unless (Local[6] > 12) goto 008F;
[009A] (46)   Local[5]++;
[009D] (D1)   animateCostume(Local[1],Local[5]);
[00A2] (1A)   Local[6] = 1;
[00A7] (80)   breakHere();
[00A8] (46)   Local[6]++;
[00AB] (44)   unless (Local[6] > 6) goto 00A7;
[00B2] (AD)   putActorInRoom(Local[1],0);
[00B6] (80)   breakHere();
[00B7] (**) }
[00B7] (80) breakHere();
[00B8] (68) VAR_RESULT = isScriptRunning(112);
[00BC] (28) unless (!VAR_RESULT) goto 00B7;
[00C1] (0A) startScript(113,[Local[0]]);
[00C7] (80) breakHere();
[00C8] (28) unless (!Bit[72]) goto 00C7;
[00CD] (A8) if (Bit[67]) {
[00D2] (0A)   startScript(108,[]);
[00D5] (0A)   startScript(134,[2]);
[00DB] (**) }
[00DB] (80) breakHere();
[00DC] (C0) endCutscene();
[00DD] (A0) stopObjectCode();
END

// Script 134
[0000] (9A) Var[188] = Local[0];
[0005] (1A) Local[4] = 144;
[000A] (48) if (Var[218] == 2) {
[0011] (5A)   Local[4] += 8;
[0016] (**) }
[0016] (7A) VerbOps(1,[SetXY(16,Local[4]),Image(492),On()]);
[0022] (7A) VerbOps(2,[SetXY(48,Local[4]),Image(489),On()]);
[002E] (7A) VerbOps(3,[SetXY(72,Local[4]),Image(470),On()]);
[003A] (7A) VerbOps(4,[SetXY(96,Local[4]),Image(476),On()]);
[0046] (7A) VerbOps(5,[SetXY(120,Local[4]),Image(482),On()]);
[0052] (7A) VerbOps(6,[SetXY(144,Local[4]),Image(483),On()]);
[005E] (7A) VerbOps(7,[SetXY(168,Local[4]),Image(484),On()]);
[006A] (7A) VerbOps(8,[SetXY(192,Local[4]),Image(485),On()]);
[0076] (48) if (Var[218] == 2) {
[007D] (62)   stopScript(0);
[007F] (**) }
[007F] (7A) VerbOps(49,[SetXY(48,168),Image(498),On()]);
[008B] (1A) Local[1] = 7;
[0090] (1A) Local[2] = 4;
[0095] (78) if (Var[217] < 1) {
[009C] (1A)   Local[1] = 8;
[00A1] (1A)   Local[2] = 8;
[00A6] (**) }
[00A6] (1A) Local[3] = 36;
[00AB] (7A) VerbOps(50,[SetXY(24,168),Image(486),On()]);
[00B7] (14) print(254,[Pos(27,169),Color(Local[1]),Text("\x10")]);
[00C4] (14) print(254,[Pos(Local[3],177),Color(Local[2]),Text("_")]);
[00D1] (14) print(254,[Pos(Local[3],185),Color(Local[2]),Text("`")]);
[00DE] (1A) Local[1] = 7;
[00E3] (1A) Local[2] = 12;
[00E8] (78) if (Var[217] < 2) {
[00EF] (1A)   Local[1] = 8;
[00F4] (1A)   Local[2] = 8;
[00F9] (**) }
[00F9] (1A) Local[3] = 60;
[00FE] (14) print(254,[Pos(51,169),Color(Local[1]),Text("\x11")]);
[010B] (14) print(254,[Pos(Local[3],175),Color(Local[2]),Text("_")]);
[0118] (14) print(254,[Pos(Local[3],183),Color(Local[2]),Text("`")]);
[0125] (1A) Local[1] = 7;
[012A] (1A) Local[2] = 14;
[012F] (78) if (Var[217] < 3) {
[0136] (1A)   Local[1] = 8;
[013B] (1A)   Local[2] = 8;
[0140] (**) }
[0140] (1A) Local[3] = 84;
[0145] (14) print(254,[Pos(75,169),Color(Local[1]),Text("\x12")]);
[0152] (14) print(254,[Pos(Local[3],174),Color(Local[2]),Text("_")]);
[015F] (14) print(254,[Pos(Local[3],182),Color(Local[2]),Text("`")]);
[016C] (1A) Local[1] = 7;
[0171] (1A) Local[2] = 10;
[0176] (78) if (Var[217] < 4) {
[017D] (1A)   Local[1] = 8;
[0182] (1A)   Local[2] = 8;
[0187] (**) }
[0187] (1A) Local[3] = 108;
[018C] (14) print(254,[Pos(99,169),Color(Local[1]),Text("\x13")]);
[0199] (14) print(254,[Pos(Local[3],172),Color(Local[2]),Text("_")]);
[01A6] (14) print(254,[Pos(Local[3],180),Color(Local[2]),Text("`")]);
[01B3] (1A) Local[1] = 7;
[01B8] (1A) Local[2] = 11;
[01BD] (78) if (Var[217] < 5) {
[01C4] (1A)   Local[1] = 8;
[01C9] (1A)   Local[2] = 8;
[01CE] (**) }
[01CE] (1A) Local[3] = 132;
[01D3] (14) print(254,[Pos(123,169),Color(Local[1]),Text("\x14")]);
[01E0] (14) print(254,[Pos(Local[3],171),Color(Local[2]),Text("_")]);
[01ED] (14) print(254,[Pos(Local[3],179),Color(Local[2]),Text("`")]);
[01FA] (1A) Local[1] = 7;
[01FF] (1A) Local[2] = 3;
[0204] (78) if (Var[217] < 6) {
[020B] (1A)   Local[1] = 8;
[0210] (1A)   Local[2] = 8;
[0215] (**) }
[0215] (1A) Local[3] = 156;
[021A] (14) print(254,[Pos(147,169),Color(Local[1]),Text("\x15")]);
[0227] (14) print(254,[Pos(Local[3],169),Color(Local[2]),Text("_")]);
[0234] (14) print(254,[Pos(Local[3],177),Color(Local[2]),Text("`")]);
[0241] (1A) Local[1] = 7;
[0246] (1A) Local[2] = 1;
[024B] (78) if (Var[217] < 7) {
[0252] (1A)   Local[1] = 8;
[0257] (1A)   Local[2] = 8;
[025C] (**) }
[025C] (1A) Local[3] = 180;
[0261] (14) print(254,[Pos(171,169),Color(Local[1]),Text("\x16")]);
[026E] (14) print(254,[Pos(Local[3],168),Color(Local[2]),Text("_")]);
[027B] (14) print(254,[Pos(Local[3],176),Color(Local[2]),Text("`")]);
[0288] (1A) Local[1] = 7;
[028D] (1A) Local[2] = 15;
[0292] (78) if (Var[217] < 8) {
[0299] (1A)   Local[1] = 8;
[029E] (1A)   Local[2] = 8;
[02A3] (**) }
[02A3] (1A) Local[3] = 204;
[02A8] (14) print(254,[Pos(195,169),Color(Local[1]),Text("\x17")]);
[02B5] (14) print(254,[Pos(Local[3],173),Color(Local[2]),Text("<")]);
[02C2] (14) print(254,[Pos(Local[3],181),Color(Local[2]),Text("=")]);
[02CF] (1A) Var[186] = 0;
[02D4] (1A) Var[187] = 0;
[02D9] (26) setVarRange(Var[178],4,[0,0,0,0]);
[02E1] (48) if (Var[218] == 0) {
[02E8] (7A)   VerbOps(53,[Off()]);
[02EC] (**) }
[02EC] (1A) Bit[70] = 0;
[02F1] (A0) stopObjectCode();
END

// Script 136
[0000] (9A) Var[261] = Local[0];
[0005] (14) print(1,[Center(),Pos(160,Var[261])]);
[000E] (A0) stopObjectCode();
END

// Script 137
[0000] (1A) Bit[73] = 1;
[0005] (80) breakHere();
[0006] (28) unless (!Bit[72]) goto 0005;
[000B] (1A) Bit[70] = 0;
[0010] (80) breakHere();
[0011] (28) unless (!Bit[71]) goto 0010;
[0016] (94) print(VAR_EGO,[Center(),Pos(160,Var[261]),Text("Those threads didn't feel quite right.")]);
[0047] (AE) WaitForMessage();
[0049] (91) animateCostume(VAR_EGO,246);
[004D] (80) breakHere();
[004E] (80) breakHere();
[004F] (94) print(VAR_EGO,[Center(),Pos(160,Var[261]),Text("Think I'm on the right track, though.")]);
[007F] (80) breakHere();
[0080] (A0) stopObjectCode();
END

// Script 138
[0000] (40) cutscene([0]);
[0005] (AE) WaitForMessage();
[0007] (1A) Var[199] = 0;
[000C] (0A) startScript(100,[0]);
[0012] (80) breakHere();
[0013] (13) ActorOps(3,[Costume(45),Elevation(0),WalkSpeed(8,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[0024] (01) putActor(1,390,120);
[002A] (11) animateCostume(3,7);
[002D] (1A) Local[0] = 1;
[0032] (80) breakHere();
[0033] (46) Local[0]++;
[0036] (44) unless (Local[0] > 15) goto 0032;
[003D] (11) animateCostume(3,3);
[0040] (80) breakHere();
[0041] (2E) delay(60);
[0045] (72) loadRoom(36);
[0047] (32) setCameraAt(440);
[004A] (28) if (!Bit[114]) {
[004F] (44)   if (Var[217] > 3) {
[0056] (0C)     Resource.loadCostume(83);
[0059] (1A)     Local[1] = 4;
[005E] (DD)     setClass(Local[1],[0,150,149]);
[006B] (93)     ActorOps(Local[1],[Costume(83),Elevation(0),WalkSpeed(1,1),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),Palette(15,0),Palette(7,0),Palette(8,0),Palette(0,0)]);
[0089] (91)     animateCostume(Local[1],248);
[008D] (46)     Local[1]++;
[0090] (44)     unless (Local[1] > 7) goto 005E;
[0097] (**)   }
[0097] (**) }
[0097] (5D) setClass(3,[0,150,149]);
[00A4] (13) ActorOps(3,[Costume(82),WalkSpeed(1,1)]);
[00AC] (11) animateCostume(3,248);
[00AF] (2D) putActorInRoom(3,36);
[00B2] (01) putActor(3,392,124);
[00B8] (80) breakHere();
[00B9] (80) breakHere();
[00BA] (2A) startScript(111,[25],F);
[00C0] (80) breakHere();
[00C1] (58) beginOverride();
[00C3] (18) goto 00E3;
[00C6] (1E) walkActorTo(3,285,110);
[00CC] (AE) WaitForActor(3);
[00CF] (80) breakHere();
[00D0] (2E) delay(30);
[00D4] (12) panCameraTo(160);
[00D7] (1E) walkActorTo(3,0,110);
[00DD] (AE) WaitForActor(3);
[00E0] (2D) putActorInRoom(3,0);
[00E3] (A8) if (VAR_OVERRIDE) {
[00E8] (62)   stopScript(139);
[00EA] (62)   stopScript(141);
[00EC] (62)   stopScript(142);
[00EE] (62)   stopScript(143);
[00F0] (1A)   Local[1] = 3;
[00F5] (91)   animateCostume(Local[1],255);
[00F9] (AD)   putActorInRoom(Local[1],0);
[00FD] (46)   Local[1]++;
[0100] (44)   unless (Local[1] > 7) goto 00F5;
[0107] (**) }
[0107] (80) breakHere();
[0108] (62) stopScript(111);
[010A] (3C) stopSound(25);
[010C] (1A) Bit[155] = 1;
[0111] (72) loadRoom(3);
[0113] (C0) endCutscene();
[0114] (A0) stopObjectCode();
END

// Script 140
[0000] (72) loadRoom(39);
[0002] (32) setCameraAt(160);
[0005] (5D) setClass(12,[0,150,149]);
[0012] (80) breakHere();
[0013] (A0) stopObjectCode();
END

// Script 144
[0000] (1A) Bit[73] = 1;
[0005] (A8) if (Bit[105]) {
[000A] (14)   print(1,[Center(),Text("Once was plenty for me.")]);
[0026] (80)   breakHere();
[0027] (62)   stopScript(0);
[0029] (**) }
[0029] (28) if (!Bit[127]) {
[002E] (D8)   printEgo([Text("This seems like the right thing to do..." + wait() + "but maybe I should get Hetchel's Book of Drafts first.")]);
[0091] (80)   breakHere();
[0092] (62)   stopScript(0);
[0094] (**) }
[0094] (28) if (!Bit[133]) {
[0099] (D8)   printEgo([Text("Maybe I should do some more exploring first.")]);
[00C8] (80)   breakHere();
[00C9] (62)   stopScript(0);
[00CB] (**) }
[00CB] (40) cutscene([1]);
[00D0] (80) breakHere();
[00D1] (1A) Bit[105] = 1;
[00D6] (5D) setClass(461,[152]);
[00DD] (62) stopScript(145);
[00DF] (80) breakHere();
[00E0] (28) unless (!Bit[72]) goto 00DF;
[00E5] (1A) Bit[70] = 0;
[00EA] (80) breakHere();
[00EB] (28) unless (!Bit[71]) goto 00EA;
[00F0] (80) breakHere();
[00F1] (28) unless (!Bit[88]) goto 00F0;
[00F6] (62) stopScript(123);
[00F8] (0C) Resource.clearHeap();
[00FA] (58) beginOverride();
[00FC] (18) goto 02FE;
[00FF] (0C) Resource.loadCostume(89);
[0102] (0C) Resource.loadCostume(31);
[0105] (0C) Resource.loadCostume(32);
[0108] (0C) Resource.loadScript(140);
[010B] (5D) setClass(2,[0,150,149]);
[0118] (13) ActorOps(2,[Costume(31),Elevation(0)]);
[0120] (11) animateCostume(2,250);
[0123] (2D) putActorInRoom(2,36);
[0126] (01) putActor(2,687,37);
[012C] (11) animateCostume(2,6);
[012F] (1A) Local[0] = 1;
[0134] (80) breakHere();
[0135] (46) Local[0]++;
[0138] (44) unless (Local[0] > 6) goto 0134;
[013F] (11) animateCostume(2,7);
[0142] (1A) Local[0] = 1;
[0147] (80) breakHere();
[0148] (46) Local[0]++;
[014B] (44) unless (Local[0] > 6) goto 0147;
[0152] (33) ShakeOn();
[0154] (11) animateCostume(2,8);
[0157] (1A) Local[0] = 1;
[015C] (80) breakHere();
[015D] (46) Local[0]++;
[0160] (44) unless (Local[0] > 6) goto 015C;
[0167] (13) ActorOps(2,[Costume(89)]);
[016C] (11) animateCostume(2,6);
[016F] (1A) Local[0] = 1;
[0174] (80) breakHere();
[0175] (46) Local[0]++;
[0178] (44) unless (Local[0] > 16) goto 0174;
[017F] (33) RoomColor(15,1)
[0185] (33) RoomColor(15,9)
[018B] (33) RoomColor(15,14)
[0191] (33) RoomColor(15,5)
[0197] (33) RoomColor(15,3)
[019D] (33) RoomColor(7,0)
[01A3] (33) RoomColor(7,8)
[01A9] (33) RoomColor(15,11)
[01AF] (11) animateCostume(4,255);
[01B2] (2D) putActorInRoom(4,0);
[01B5] (13) ActorOps(2,[Elevation(250)]);
[01BB] (13) ActorOps(1,[Elevation(250)]);
[01C1] (80) breakHere();
[01C2] (2E) delay(10);
[01C6] (33) ShakeOff();
[01C8] (5C) oldRoomEffect-set(128);
[01CC] (1A) Var[219] = 0;
[01D1] (72) loadRoom(36);
[01D3] (07) setState(462,1);
[01D7] (32) setCameraAt(800);
[01DA] (5D) setClass(1,[0,150,149,146]);
[01EA] (11) animateCostume(1,250);
[01ED] (2D) putActorInRoom(1,36);
[01F0] (01) putActor(1,817,100);
[01F6] (13) ActorOps(1,[Elevation(0)]);
[01FC] (33) RoomColor(1,1)
[0202] (33) RoomColor(9,9)
[0208] (33) RoomColor(14,14)
[020E] (33) RoomColor(5,5)
[0214] (33) RoomColor(3,3)
[021A] (33) RoomColor(0,0)
[0220] (33) RoomColor(8,8)
[0226] (33) RoomColor(11,11)
[022C] (2E) delay(60);
[0230] (1E) walkActorTo(1,817,83);
[0236] (AE) WaitForActor(1);
[0239] (2E) delay(60);
[023D] (14) print(1,[Center(),Pos(160,88),Text("Wow^you should see the effects" + newline() + "in the real game^" + wait() + "It's got great sound effects, too!" + wait() + "Now^I wonder what happened to the tree^")]);
[02C5] (AE) WaitForMessage();
[02C7] (2E) delay(60);
[02CB] (1E) walkActorTo(1,817,52);
[02D1] (AE) WaitForActor(1);
[02D4] (5D) setClass(1,[0,150,148]);
[02E1] (01) putActor(1,817,52);
[02E7] (1E) walkActorTo(1,817,60);
[02ED] (AE) WaitForActor(1);
[02F0] (5D) setClass(1,[0]);
[02F7] (01) putActor(1,817,60);
[02FD] (80) breakHere();
[02FE] (1A) Bit[119] = 1;
[0303] (33) RoomColor(1,1)
[0309] (33) RoomColor(9,9)
[030F] (33) RoomColor(14,14)
[0315] (33) RoomColor(5,5)
[031B] (33) RoomColor(3,3)
[0321] (33) RoomColor(0,0)
[0327] (33) RoomColor(8,8)
[032D] (5C) oldRoomEffect-set(-32512);
[0331] (A8) if (VAR_OVERRIDE) {
[0336] (33)   ShakeOff();
[0338] (62)   stopScript(140);
[033A] (11)   animateCostume(1,255);
[033D] (11)   animateCostume(3,255);
[0340] (11)   animateCostume(2,255);
[0343] (2D)   putActorInRoom(3,0);
[0346] (2D)   putActorInRoom(2,0);
[0349] (1A)   Bit[119] = 1;
[034E] (08)   if (VAR_ROOM != 36) {
[0355] (1A)     Var[219] = 0;
[035A] (72)     loadRoom(36);
[035C] (32)     setCameraAt(752);
[035F] (18)   } else {
[0362] (07)     setState(462,1);
[0366] (**)   }
[0366] (5D)   setClass(1,[0]);
[036D] (13)   ActorOps(1,[Elevation(0)]);
[0373] (11)   animateCostume(1,250);
[0376] (2D)   putActorInRoom(1,36);
[0379] (01)   putActor(1,817,60);
[037F] (11)   animateCostume(4,255);
[0382] (2D)   putActorInRoom(4,0);
[0385] (BC)   stopSound(Var[259]);
[0388] (1A)   Var[259] = 0;
[038D] (**) }
[038D] (80) breakHere();
[038E] (0C) Resource.clearHeap();
[0390] (14) print(1,[Center(),Pos(160,Var[261])]);
[0399] (80) breakHere();
[039A] (C0) endCutscene();
[039B] (0A) startScript(127,[0]);
[03A1] (28) if (!Bit[76]) {
[03A6] (0A)   startScript(129,[0]);
[03AC] (0A)   startScript(127,[2]);
[03B2] (A8)   if (Bit[76]) {
[03B7] (0A)     startScript(127,[1]);
[03BD] (A8)     if (Bit[76]) {
[03C2] (28)       if (!Bit[13]) {
[03C7] (0A)         startScript(133,[4,12]);
[03D0] (**)       }
[03D0] (**)     }
[03D0] (**)   }
[03D0] (**) }
[03D0] (42) chainScript(145,[]);
[03D3] (A0) stopObjectCode();
END

// Script 145
[0000] (80) breakHere();
[0001] (7B) Local[0] = getActorWalkBox(1);
[0005] (80) breakHere();
[0006] (7B) Local[1] = getActorWalkBox(1);
[000A] (88) unless (Local[1] != Local[0]) goto 0005;
[0011] (9A) Local[0] = Local[1];
[0016] (48) if (Local[0] == 4) {
[001D] (40)   cutscene([0]);
[0022] (12)   panCameraTo(758);
[0025] (11)   animateCostume(1,255);
[0028] (0A)   startScript(126,[1]);
[002E] (01)   putActor(1,798,118);
[0034] (2E)   delay(20);
[0038] (1E)   walkActorTo(1,758,103);
[003E] (AE)   WaitForActor(1);
[0041] (C0)   endCutscene();
[0042] (48) } else if (Local[0] == 5) {
[004C] (40)   cutscene([0]);
[0051] (12)   panCameraTo(1200);
[0054] (11)   animateCostume(1,255);
[0057] (0A)   startScript(126,[0]);
[005D] (01)   putActor(1,890,118);
[0063] (2E)   delay(20);
[0067] (1E)   walkActorTo(1,812,80);
[006D] (AE)   WaitForActor(1);
[0070] (C0)   endCutscene();
[0071] (48) } else if (Local[0] == 10) {
[007B] (40)   cutscene([0]);
[0080] (11)   animateCostume(1,255);
[0083] (0A)   startScript(126,[2]);
[0089] (01)   putActor(1,627,124);
[008F] (1E)   walkActorTo(1,609,110);
[0095] (AE)   WaitForActor(1);
[0098] (C0)   endCutscene();
[0099] (48) } else if (Local[0] == 11) {
[00A3] (40)   cutscene([0]);
[00A8] (11)   animateCostume(1,255);
[00AB] (0A)   startScript(126,[1]);
[00B1] (01)   putActor(1,642,134);
[00B7] (1E)   walkActorTo(1,660,116);
[00BD] (AE)   WaitForActor(1);
[00C0] (C0)   endCutscene();
[00C1] (18)   /* goto 00C4; */
[00C4] (**) }
[00C4] (18) goto 0005;
[00C7] (A0) stopObjectCode();
END

// Script 146
[0000] (A0) stopObjectCode();
END

// Script 147: Loom Intro
[0000] (2C) CursorHide();
[0002] (2C) UserputOff();
[0004] (0C) Resource.clearHeap();
[0006] (0C) Resource.loadRoom(37);
[0009] (0C) Resource.loadCostume(90);
[000C] (0C) Resource.loadRoom(36);
[000F] (0C) Resource.loadCostume(32);
[0012] (0C) Resource.loadCostume(88);
[0015] (0C) Resource.loadCostume(35);
[0018] (0C) Resource.loadCostume(34);
[001B] (0C) Resource.loadCostume(33);
[001E] (0C) Resource.loadScript(145);
[0021] (0C) Resource.loadScript(148);
[0024] (0C) Resource.loadScript(149);
[0027] (80) breakHere();
[0028] (5C) oldRoomEffect-set(128);
[002C] (1A) VAR_OVERRIDE = 0;
[0031] (1A) Local[9] = 0;
[0036] (08) if (VAR_SOUNDCARD != 4) {
[003D] (2A)   startScript(111,[25],F);
[0043] (18) } else {
[0046] (33)   SetPalColor(0,15)
[004C] (80)   breakHere();
[004D] (2A)   startScript(111,[25],F);
[0053] (58)   beginOverride();
[0055] (18)   goto 00B7;
[0058] (80)   breakHere();
[0059] (38)   unless (VAR_MUSIC_TIMER >= 4) goto 0058;
[0060] (33)   SetPalColor(1,15)
[0066] (80)   breakHere();
[0067] (33)   SetPalColor(9,15)
[006D] (80)   breakHere();
[006E] (33)   SetPalColor(11,15)
[0074] (80)   breakHere();
[0075] (33)   SetPalColor(15,15)
[007B] (80)   breakHere();
[007C] (38)   unless (VAR_MUSIC_TIMER >= 198) goto 007B;
[0083] (33)   SetPalColor(11,15)
[0089] (80)   breakHere();
[008A] (33)   SetPalColor(9,15)
[0090] (80)   breakHere();
[0091] (33)   SetPalColor(1,15)
[0097] (80)   breakHere();
[0098] (33)   SetPalColor(0,15)
[009E] (80)   breakHere();
[009F] (80)   breakHere();
[00A0] (33)   SetPalColor(15,15)
[00A6] (80)   breakHere();
[00A7] (38)   unless (VAR_MUSIC_TIMER >= 204) goto 00A6;
[00AE] (72)   loadRoom(36);
[00B0] (32)   setCameraAt(160);
[00B3] (2E)   delay(60);
[00B7] (**) }
[00B7] (0A) startScript(200,[]);
[00BA] (5C) oldRoomEffect-set(0);
[00BE] (32) setCameraAt(160);
[00C1] (1A) Local[0] = 1;
[00C6] (DD) setClass(Local[0],[0,150,148]);
[00D3] (93) ActorOps(Local[0],[Costume(32),Elevation(0)]);
[00DC] (91) animateCostume(Local[0],250);
[00E0] (46) Local[0]++;
[00E3] (44) unless (Local[0] > 10) goto 00C6;
[00EA] (48) if (VAR_SOUNDCARD == 4) {
[00F1] (A8)   if (VAR_OVERRIDE) {
[00F6] (1A)     Local[9] = 1;
[00FB] (62)     stopScript(111);
[00FD] (BC)     stopSound(Var[258]);
[0100] (1A)     Var[258] = 0;
[0105] (33)     SetPalColor(15,15)
[010B] (80)     breakHere();
[010C] (80)     breakHere();
[010D] (2A)     startScript(111,[25],F);
[0113] (**)   }
[0113] (**) }
[0113] (80) breakHere();
[0114] (80) breakHere();
[0115] (1A) VAR_OVERRIDE = 0;
[011A] (58) beginOverride();
[011C] (18) goto 051E;
[011F] (14) print(255,[Center(),Pos(160,112),Color(15),Text("\x0F & \x1C 1990 LucasArts Entertainment Company." + newline() + "All rights reserved.")]);
[016C] (48) if (VAR_SOUNDCARD == 4) {
[0173] (28)   if (!Local[9]) {
[0178] (2E)     delay(60);
[017C] (**)   }
[017C] (**) }
[017C] (72) loadRoom(36);
[017E] (AE) WaitForMessage();
[0180] (80) breakHere();
[0181] (2E) delay(60);
[0185] (72) loadRoom(36);
[0187] (32) setCameraAt(160);
[018A] (2E) delay(60);
[018E] (32) setCameraAt(160);
[0191] (80) breakHere();
[0192] (0A) startScript(148,[]);
[0195] (0A) startScript(149,[]);
[0198] (2E) delay(60);
[019C] (0A) startScript(235,[]);
[019F] (80) breakHere();
[01A0] (68) VAR_RESULT = isScriptRunning(235);
[01A4] (28) unless (!VAR_RESULT) goto 019F;
[01A9] (5D) setClass(12,[0,150,148]);
[01B6] (13) ActorOps(12,[Costume(88),Elevation(0)]);
[01BE] (11) animateCostume(12,250);
[01C1] (2D) putActorInRoom(12,36);
[01C4] (01) putActor(12,433,129);
[01CA] (11) animateCostume(12,3);
[01CD] (0A) startScript(200,[]);
[01D0] (48) if (VAR_SOUNDCARD == 4) {
[01D7] (28)   if (!Local[9]) {
[01DC] (80)     breakHere();
[01DD] (38)     unless (VAR_MUSIC_TIMER >= 278) goto 01DC;
[01E4] (**)   }
[01E4] (**) }
[01E4] (80) breakHere();
[01E5] (2E) delay(60);
[01E9] (72) loadRoom(36);
[01EB] (5C) oldRoomEffect-set(128);
[01EF] (32) setCameraAt(160);
[01F2] (5D) setClass(1,[0]);
[01F9] (13) ActorOps(1,[Costume(33),Elevation(0),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[0207] (48) if (VAR_VIDEOMODE == 4) {
[020E] (13)   ActorOps(1,[Palette(8,0),Palette(7,15)]);
[0217] (**) }
[0217] (11) animateCostume(1,248);
[021A] (2D) putActorInRoom(1,36);
[021D] (01) putActor(1,828,61);
[0223] (2E) delay(60);
[0227] (48) if (VAR_SOUNDCARD == 4) {
[022E] (28)   if (!Local[9]) {
[0233] (2A)     startScript(111,[25],F);
[0239] (**)   }
[0239] (**) }
[0239] (80) breakHere();
[023A] (12) panCameraTo(472);
[023D] (AE) WaitForCamera();
[023F] (2E) delay(60);
[0243] (5D) setClass(3,[0,150,148]);
[0250] (13) ActorOps(3,[Costume(34),Elevation(0),WalkSpeed(4,1),InitAnimNr(7),WalkAnimNr(7),StandAnimNr(7)]);
[0261] (48) if (VAR_VIDEOMODE == 4) {
[0268] (13)   ActorOps(3,[Palette(11,4),Palette(3,4)]);
[0271] (**) }
[0271] (2D) putActorInRoom(3,36);
[0274] (01) putActor(3,431,123);
[027A] (1A) VAR_TIMER_NEXT = 0;
[027F] (1E) walkActorTo(3,559,91);
[0285] (AE) WaitForActor(3);
[0288] (5D) setClass(3,[0,150,149]);
[0295] (1E) walkActorTo(3,440,77);
[029B] (AE) WaitForActor(3);
[029E] (5D) setClass(3,[0,150,148]);
[02AB] (13) ActorOps(3,[InitAnimNr(6),WalkAnimNr(6),StandAnimNr(6)]);
[02B4] (1E) walkActorTo(3,472,73);
[02BA] (AE) WaitForActor(3);
[02BD] (12) panCameraTo(744);
[02C0] (1A) Local[2] = 472;
[02C5] (5A) Local[2] += 8;
[02CA] (41) putActor(3,Local[2],73);
[02D0] (80) breakHere();
[02D1] (38) unless (VAR_CAMERA_POS_X >= 744) goto 02C5;
[02D8] (1A) VAR_TIMER_NEXT = 0;
[02DD] (13) ActorOps(3,[Elevation(100)]);
[02E3] (01) putActor(3,744,173);
[02E9] (1E) walkActorTo(3,871,142);
[02EF] (AE) WaitForActor(3);
[02F2] (5D) setClass(3,[0,150,149]);
[02FF] (13) ActorOps(3,[Elevation(0)]);
[0305] (01) putActor(3,871,42);
[030B] (1E) walkActorTo(3,804,32);
[0311] (AE) WaitForActor(3);
[0314] (1E) walkActorTo(3,812,40);
[031A] (AE) WaitForActor(3);
[031D] (1A) VAR_TIMER_NEXT = 6;
[0322] (80) breakHere();
[0323] (80) breakHere();
[0324] (80) breakHere();
[0325] (80) breakHere();
[0326] (62) stopScript(148);
[0328] (62) stopScript(149);
[032A] (5D) setClass(3,[0,150,148]);
[0337] (13) ActorOps(3,[Costume(34),Elevation(0),WalkSpeed(8,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[0348] (11) animateCostume(3,250);
[034B] (2A) startScript(223,[],F);
[034E] (80) breakHere();
[034F] (14) print(255,[Center(),Pos(100,48),Color(15),Text("Rise, son of Cygna.")]);
[036E] (AE) WaitForMessage();
[0370] (80) breakHere();
[0371] (62) stopScript(223);
[0373] (14) print(255,[Center(),Pos(100,48),Text("It is the dawn of your" + newline() + "seventeenth year.")]);
[03A6] (AE) WaitForActor(3);
[03A9] (80) breakHere();
[03AA] (80) breakHere();
[03AB] (80) breakHere();
[03AC] (2A) startScript(223,[],F);
[03AF] (AE) WaitForMessage();
[03B1] (80) breakHere();
[03B2] (80) breakHere();
[03B3] (80) breakHere();
[03B4] (80) breakHere();
[03B5] (80) breakHere();
[03B6] (14) print(255,[Center(),Pos(100,48),Text("I am sent by the Elders" + newline() + "to summon you.")]);
[03E7] (AE) WaitForMessage();
[03E9] (80) breakHere();
[03EA] (80) breakHere();
[03EB] (80) breakHere();
[03EC] (80) breakHere();
[03ED] (80) breakHere();
[03EE] (14) print(255,[Center(),Pos(100,48),Text("The High Council awaits your" + newline() + "presence in the Sanctuary.")]);
[0430] (AE) WaitForMessage();
[0432] (80) breakHere();
[0433] (5D) setClass(3,[0,150,149]);
[0440] (13) ActorOps(3,[Elevation(0),WalkSpeed(4,1),InitAnimNr(6),WalkAnimNr(6),StandAnimNr(6)]);
[044F] (11) animateCostume(3,6);
[0452] (80) breakHere();
[0453] (11) animateCostume(1,6);
[0456] (1A) Local[4] = 1;
[045B] (80) breakHere();
[045C] (46) Local[4]++;
[045F] (44) unless (Local[4] > 7) goto 045B;
[0466] (0A) startScript(126,[0]);
[046C] (11) animateCostume(1,246);
[046F] (80) breakHere();
[0470] (0A) startScript(201,[]);
[0473] (14) print(1,[Center(),Pos(160,152),Text("A messenger nymph!")]);
[048F] (AE) WaitForMessage();
[0491] (0A) startScript(202,[]);
[0494] (80) breakHere();
[0495] (14) print(1,[Center(),Pos(160,152),Text("Never seen one so bright before.")]);
[04BF] (AE) WaitForMessage();
[04C1] (80) breakHere();
[04C2] (14) print(1,[Center(),Pos(160,152),Text("One of the Elders must've woven it.")]);
[04EF] (AE) WaitForMessage();
[04F1] (80) breakHere();
[04F2] (14) print(1,[Center(),Pos(160,152),Text("Better get down to the village.")]);
[051B] (AE) WaitForMessage();
[051D] (80) breakHere();
[051E] (62) stopScript(235);
[0520] (5D) setClass(12,[0,150,148]);
[052D] (13) ActorOps(12,[Costume(88),Elevation(0)]);
[0535] (11) animateCostume(12,250);
[0538] (2D) putActorInRoom(12,36);
[053B] (01) putActor(12,433,129);
[0541] (11) animateCostume(12,3);
[0544] (80) breakHere();
[0545] (0A) startScript(200,[]);
[0548] (62) stopScript(148);
[054A] (62) stopScript(149);
[054C] (5D) setClass(12,[0,150,148]);
[0559] (13) ActorOps(12,[Costume(88),Elevation(0)]);
[0561] (11) animateCostume(12,250);
[0564] (2D) putActorInRoom(12,36);
[0567] (01) putActor(12,433,129);
[056D] (11) animateCostume(12,3);
[0570] (5C) oldRoomEffect-set(-32512);
[0574] (5D) setClass(1,[0]);
[057B] (A8) if (VAR_OVERRIDE) {
[0580] (1A)   VAR_TIMER_NEXT = 6;
[0585] (2D)   putActorInRoom(3,0);
[0588] (1A)   Var[219] = 0;
[058D] (08)   if (VAR_ROOM != 36) {
[0594] (72)     loadRoom(36);
[0596] (32)     setCameraAt(800);
[0599] (18)   } else {
[059C] (62)     stopScript(223);
[059E] (62)     stopScript(201);
[05A0] (62)     stopScript(202);
[05A2] (**)   }
[05A2] (0A)   startScript(126,[0]);
[05A8] (11)   animateCostume(1,250);
[05AB] (2D)   putActorInRoom(1,36);
[05AE] (01)   putActor(1,828,61);
[05B4] (80)   breakHere();
[05B5] (**) }
[05B5] (0A) startScript(145,[]);
[05B8] (A6) setVarRange(Var[299],5,[660,626,485,541,561]);
[05C6] (26) setVarRange(Var[307],5,[8,17,40,13,9]);
[05CF] (2A) startScript(123,[5],F);
[05D5] (5D) setClass(12,[0,150,148]);
[05E2] (13) ActorOps(12,[Costume(88),Elevation(0)]);
[05EA] (11) animateCostume(12,250);
[05ED] (2D) putActorInRoom(12,36);
[05F0] (01) putActor(12,433,129);
[05F6] (11) animateCostume(12,3);
[05F9] (1A) Var[104] = 0;
[05FE] (14) print(1,[Center(),Pos(160,Var[261])]);
[0607] (80) breakHere();
[0608] (5D) setClass(12,[0,150,148]);
[0615] (13) ActorOps(12,[Costume(88),Elevation(0)]);
[061D] (11) animateCostume(12,250);
[0620] (2D) putActorInRoom(12,36);
[0623] (01) putActor(12,433,129);
[0629] (11) animateCostume(12,3);
[062C] (A0) stopObjectCode();
END

// Script 148
[0000] (0C) Resource.loadCostume(32);
[0003] (5D) setClass(10,[0,148,150]);
[0010] (13) ActorOps(10,[Costume(32),Elevation(0)]);
[0018] (11) animateCostume(10,250);
[001B] (A6) setVarRange(Local[5],5,[28,237,75,290,81]);
[0029] (26) setVarRange(Local[10],5,[35,25,10,48,59]);
[0032] (1A) Local[0] = 5;
[0037] (16) Local[1] = getRandomNr(4);
[003B] (88) unless (Local[0] != Local[1]) goto 0037;
[0042] (9A) Local[0] = Local[1];
[0047] (9A) Local[2] = Local[5 + Local[0]];
[004E] (9A) Local[3] = Local[10 + Local[0]];
[0055] (6D) putActorInRoom(10,VAR_ROOM);
[0059] (61) putActor(10,Local[2],Local[3]);
[005F] (11) animateCostume(10,6);
[0062] (1A) Local[4] = 1;
[0067] (80) breakHere();
[0068] (46) Local[4]++;
[006B] (44) unless (Local[4] > 12) goto 0067;
[0072] (18) goto 0037;
[0075] (A0) stopObjectCode();
END

// Script 149
[0000] (0C) Resource.loadCostume(32);
[0003] (5D) setClass(11,[0,148,150]);
[0010] (13) ActorOps(11,[Costume(32),Elevation(0)]);
[0018] (11) animateCostume(11,250);
[001B] (A6) setVarRange(Local[5],5,[121,280,309,35,170]);
[0029] (26) setVarRange(Local[10],5,[61,63,28,60,22]);
[0032] (1A) Local[0] = 5;
[0037] (1A) Local[4] = 1;
[003C] (80) breakHere();
[003D] (46) Local[4]++;
[0040] (44) unless (Local[4] > 6) goto 003C;
[0047] (16) Local[1] = getRandomNr(4);
[004B] (88) unless (Local[0] != Local[1]) goto 0047;
[0052] (9A) Local[0] = Local[1];
[0057] (9A) Local[2] = Local[5 + Local[0]];
[005E] (9A) Local[3] = Local[10 + Local[0]];
[0065] (6D) putActorInRoom(11,VAR_ROOM);
[0069] (61) putActor(11,Local[2],Local[3]);
[006F] (11) animateCostume(11,6);
[0072] (1A) Local[4] = 1;
[0077] (80) breakHere();
[0078] (46) Local[4]++;
[007B] (44) unless (Local[4] > 12) goto 0077;
[0082] (18) goto 0047;
[0085] (A0) stopObjectCode();
END

// Script 152
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (1A) Bit[101] = 1;
[000F] (80) breakHere();
[0010] (28) unless (!Bit[72]) goto 000F;
[0015] (1A) Bit[70] = 0;
[001A] (80) breakHere();
[001B] (28) unless (!Bit[71]) goto 001A;
[0020] (80) breakHere();
[0021] (43) Local[0] = getActorX(1);
[0026] (23) Local[1] = getActorY(1);
[002B] (9A) Local[2] = Local[1];
[0030] (46) Local[2]++;
[0033] (5D) setClass(2,[0,150,149]);
[0040] (13) ActorOps(2,[Costume(31),Elevation(25)]);
[0048] (11) animateCostume(2,250);
[004B] (2D) putActorInRoom(2,38);
[004E] (61) putActor(2,Local[0],Local[2]);
[0054] (2A) startScript(112,[23],F);
[005A] (11) animateCostume(2,9);
[005D] (1A) Local[3] = 1;
[0062] (80) breakHere();
[0063] (46) Local[3]++;
[0066] (44) unless (Local[3] > 6) goto 0062;
[006D] (11) animateCostume(2,10);
[0070] (1A) Local[3] = 1;
[0075] (80) breakHere();
[0076] (46) Local[3]++;
[0079] (44) unless (Local[3] > 24) goto 0075;
[0080] (11) animateCostume(2,11);
[0083] (1A) Local[3] = 1;
[0088] (80) breakHere();
[0089] (46) Local[3]++;
[008C] (44) unless (Local[3] > 6) goto 0088;
[0093] (2D) putActorInRoom(2,0);
[0096] (80) breakHere();
[0097] (1A) Var[199] = 0;
[009C] (0A) startScript(100,[0]);
[00A2] (0A) startScript(108,[]);
[00A5] (80) breakHere();
[00A6] (2D) putActorInRoom(1,42);
[00A9] (61) putActor(1,Local[0],Local[1]);
[00AF] (5C) oldRoomEffect-set(128);
[00B3] (72) loadRoom(42);
[00B5] (0A) startScript(134,[2]);
[00BB] (5C) oldRoomEffect-set(129);
[00BF] (0A) startScript(129,[3]);
[00C5] (C0) endCutscene();
[00C6] (A0) stopObjectCode();
END

// Script 153
[0000] (40) cutscene([1]);
[0005] (5D) setClass(594,[152]);
[000C] (2A) startScript(111,[25],F);
[0012] (30) setBoxFlags(1,0);
[0016] (30) setBoxFlags(2,0);
[001A] (11) animateCostume(1,255);
[001D] (5C) oldRoomEffect-set(-32512);
[0021] (80) breakHere();
[0022] (58) beginOverride();
[0024] (18) goto 1239;
[0027] (12) panCameraTo(180);
[002A] (AE) WaitForCamera();
[002C] (80) breakHere();
[002D] (11) animateCostume(1,250);
[0030] (80) breakHere();
[0031] (14) print(1,[Center(),Pos(160,152),Text("Looks as if the Elders are busy.")]);
[005B] (AE) WaitForMessage();
[005D] (80) breakHere();
[005E] (14) print(1,[Center(),Pos(160,152),Text("Wouldn't want to interrupt ...")]);
[0086] (1E) walkActorTo(1,130,134);
[008C] (AE) WaitForActor(1);
[008F] (5D) setClass(1,[0,150,149]);
[009C] (0A) startScript(124,[1,8]);
[00A5] (1E) walkActorTo(1,145,125);
[00AB] (AE) WaitForActor(1);
[00AE] (11) animateCostume(1,249);
[00B1] (AE) WaitForMessage();
[00B3] (14) print(2,[Center(),Pos(160,152),Text("You have heard the findings of the" + newline() + "High Council, Dame Hetchel.")]);
[00FC] (AE) WaitForMessage();
[00FE] (80) breakHere();
[00FF] (14) print(2,[Center(),Pos(160,152),Text("What have you to say in your defense?")]);
[012E] (AE) WaitForMessage();
[0130] (80) breakHere();
[0131] (72) loadRoom(45);
[0133] (32) setCameraAt(160);
[0136] (0C) Resource.clearHeap();
[0138] (0C) Resource.loadCostume(74);
[013B] (0C) Resource.loadCostume(60);
[013E] (0C) Resource.loadCostume(61);
[0141] (0C) Resource.loadCostume(62);
[0144] (0C) Resource.loadCostume(63);
[0147] (0C) Resource.loadCostume(64);
[014A] (0C) Resource.loadCostume(66);
[014D] (0C) Resource.loadCostume(67);
[0150] (0C) Resource.loadCostume(71);
[0153] (0C) Resource.loadCostume(69);
[0156] (0C) Resource.loadCostume(70);
[0159] (0C) Resource.loadCostume(68);
[015C] (0C) Resource.loadCostume(73);
[015F] (0C) Resource.loadCostume(31);
[0162] (0C) Resource.loadRoom(49);
[0165] (0C) Resource.loadRoom(48);
[0168] (0C) Resource.loadCostume(32);
[016B] (5D) setClass(5,[0,150,148]);
[0178] (13) ActorOps(5,[Costume(71),Elevation(0),WalkSpeed(4,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(12)]);
[018E] (48) if (VAR_VIDEOMODE == 4) {
[0195] (13)   ActorOps(5,[Palette(6,5),Palette(4,0),Palette(8,0)]);
[01A1] (**) }
[01A1] (11) animateCostume(5,249);
[01A4] (2D) putActorInRoom(5,45);
[01A7] (01) putActor(5,74,132);
[01AD] (5D) setClass(4,[0,150,148]);
[01BA] (13) ActorOps(4,[Costume(69),Elevation(0),WalkSpeed(4,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(14)]);
[01D0] (48) if (VAR_VIDEOMODE == 4) {
[01D7] (13)   ActorOps(4,[Palette(14,0),Palette(7,0)]);
[01E0] (**) }
[01E0] (11) animateCostume(4,250);
[01E3] (2D) putActorInRoom(4,45);
[01E6] (01) putActor(4,184,125);
[01EC] (5D) setClass(2,[0,150,148]);
[01F9] (13) ActorOps(2,[Costume(70),Elevation(0),WalkSpeed(4,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(11)]);
[020F] (11) animateCostume(2,250);
[0212] (2D) putActorInRoom(2,45);
[0215] (01) putActor(2,216,128);
[021B] (5D) setClass(3,[0,150,148]);
[0228] (13) ActorOps(3,[Costume(68),Elevation(0),WalkSpeed(4,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(10)]);
[023E] (48) if (VAR_VIDEOMODE == 4) {
[0245] (13)   ActorOps(3,[Palette(2,0),Palette(10,15)]);
[024E] (**) }
[024E] (11) animateCostume(3,248);
[0251] (2D) putActorInRoom(3,45);
[0254] (01) putActor(3,242,132);
[025A] (80) breakHere();
[025B] (14) print(5,[Center(),Pos(160,152),Text("I have no defense or excuses," + newline() + "Elder Atropos.")]);
[0292] (AE) WaitForMessage();
[0294] (80) breakHere();
[0295] (14) print(5,[Center(),Pos(160,152),Text("My actions speak for themselves.")]);
[02BF] (AE) WaitForMessage();
[02C1] (80) breakHere();
[02C2] (14) print(4,[Center(),Pos(160,152),Text("No defense? Not the slightest remorse?")]);
[02F2] (80) breakHere();
[02F3] (80) breakHere();
[02F4] (11) animateCostume(2,248);
[02F7] (AE) WaitForMessage();
[02F9] (80) breakHere();
[02FA] (11) animateCostume(4,245);
[02FD] (14) print(4,[Center(),Pos(160,152),Text("This reckless defiance is intolerable.")]);
[032D] (AE) WaitForMessage();
[032F] (80) breakHere();
[0330] (11) animateCostume(4,246);
[0333] (14) print(3,[Center(),Pos(160,152),Text("Why do you disobey us, Hetchel?")]);
[035C] (80) breakHere();
[035D] (80) breakHere();
[035E] (11) animateCostume(2,250);
[0361] (AE) WaitForMessage();
[0363] (80) breakHere();
[0364] (1E) walkActorTo(3,194,132);
[036A] (14) print(3,[Center(),Pos(160,152),Text("You have always upheld the" + newline() + "Rules of Membership to the letter.")]);
[03B2] (AE) WaitForActor(3);
[03B5] (11) animateCostume(3,4);
[03B8] (11) animateCostume(2,248);
[03BB] (AE) WaitForMessage();
[03BD] (80) breakHere();
[03BE] (1E) walkActorTo(5,140,134);
[03C4] (14) print(3,[Center(),Pos(160,152),Text("Tell us what is in your heart.")]);
[03EC] (AE) WaitForMessage();
[03EE] (80) breakHere();
[03EF] (AE) WaitForActor(5);
[03F2] (72) loadRoom(49);
[03F4] (32) setCameraAt(160);
[03F7] (80) breakHere();
[03F8] (14) print(255,[Pos(220,48),Color(12),Text("The boy must be told" + newline() + "the truth about his" + newline() + "birth, Elder Clothos.")]);
[0443] (AE) WaitForMessage();
[0445] (80) breakHere();
[0446] (14) print(255,[Pos(220,56),Color(12),Text("His talent awakens!")]);
[0464] (AE) WaitForMessage();
[0466] (80) breakHere();
[0467] (05) drawObject(948,255,255);
[046E] (80) breakHere();
[046F] (05) drawObject(949,255,255);
[0476] (80) breakHere();
[0477] (05) drawObject(950,255,255);
[047E] (80) breakHere();
[047F] (05) drawObject(949,255,255);
[0486] (80) breakHere();
[0487] (05) drawObject(948,255,255);
[048E] (80) breakHere();
[048F] (05) drawObject(947,255,255);
[0496] (80) breakHere();
[0497] (14) print(255,[Pos(220,48),Color(12),Text("Soon he will wield" + newline() + "the power of Weaving" + newline() + "whether we choose" + newline() + "to guide him or not.")]);
[04F3] (AE) WaitForMessage();
[04F5] (80) breakHere();
[04F6] (72) loadRoom(45);
[04F8] (32) setCameraAt(160);
[04FB] (80) breakHere();
[04FC] (14) print(5,[Center(),Pos(160,152),Color(12),Text("We dare not desert Bobbin now.")]);
[0526] (AE) WaitForMessage();
[0528] (80) breakHere();
[0529] (14) print(4,[Center(),Pos(160,152),Text("Stubborn old fool!")]);
[0545] (AE) WaitForMessage();
[0547] (80) breakHere();
[0548] (1E) walkActorTo(3,232,132);
[054E] (1E) walkActorTo(4,172,132);
[0554] (14) print(4,[Center(),Pos(160,152),Text("The secrets you reveal to Cygna's son" + newline() + "may be turned against us.")]);
[059E] (AE) WaitForActor(4);
[05A1] (11) animateCostume(4,248);
[05A4] (11) animateCostume(4,4);
[05A7] (AE) WaitForActor(3);
[05AA] (11) animateCostume(3,244);
[05AD] (AE) WaitForMessage();
[05AF] (80) breakHere();
[05B0] (1E) walkActorTo(2,158,125);
[05B6] (14) print(4,[Center(),Pos(160,152),Text("That is why his training was" + newline() + "forbidden by this Council!")]);
[05F8] (AE) WaitForActor(2);
[05FB] (11) animateCostume(2,246);
[05FE] (AE) WaitForMessage();
[0600] (80) breakHere();
[0601] (11) animateCostume(2,6);
[0604] (80) breakHere();
[0605] (14) print(2,[Center(),Pos(160,152),Text("Enough, Lachesis.")]);
[0620] (80) breakHere();
[0621] (80) breakHere();
[0622] (80) breakHere();
[0623] (80) breakHere();
[0624] (11) animateCostume(2,7);
[0627] (80) breakHere();
[0628] (80) breakHere();
[0629] (80) breakHere();
[062A] (11) animateCostume(2,4);
[062D] (AE) WaitForMessage();
[062F] (80) breakHere();
[0630] (1E) walkActorTo(4,96,125);
[0636] (14) print(2,[Center(),Pos(160,152),Text("We need not explain our decisions.")]);
[0662] (80) breakHere();
[0663] (80) breakHere();
[0664] (80) breakHere();
[0665] (80) breakHere();
[0666] (1E) walkActorTo(2,172,132);
[066C] (AE) WaitForActor(2);
[066F] (11) animateCostume(2,248);
[0672] (11) animateCostume(2,4);
[0675] (AE) WaitForActor(4);
[0678] (11) animateCostume(4,245);
[067B] (AE) WaitForMessage();
[067D] (80) breakHere();
[067E] (72) loadRoom(48);
[0680] (32) setCameraAt(160);
[0683] (80) breakHere();
[0684] (14) print(255,[Pos(80,40),Color(11),Text("It grieves me" + newline() + "to see your many" + newline() + "years of faithful service" + newline() + "end in this disgrace.")]);
[06E0] (AE) WaitForMessage();
[06E2] (80) breakHere();
[06E3] (05) drawObject(945,255,255);
[06EA] (80) breakHere();
[06EB] (05) drawObject(946,255,255);
[06F2] (80) breakHere();
[06F3] (14) print(255,[Pos(80,32),Color(11),Text("But the wisdom" + newline() + "of the Elders" + newline() + "may not be questioned." + newline()newline() + "That is the final" + newline() + "Rule of Membership.")]);
[075D] (80) breakHere();
[075E] (05) drawObject(945,255,255);
[0765] (80) breakHere();
[0766] (05) drawObject(944,255,255);
[076D] (AE) WaitForMessage();
[076F] (80) breakHere();
[0770] (05) drawObject(945,255,255);
[0777] (80) breakHere();
[0778] (05) drawObject(946,255,255);
[077F] (80) breakHere();
[0780] (14) print(255,[Pos(80,24),Color(11),Text("Another one" + newline() + "of your" + newline() + "students, Lady Cygna," + newline() + "learned the terrible" + newline() + "price of defiance" + newline() + "in this very chamber" + newline() + "seventeen years ago." + newline()newline() + "Better that you had" + newline() + "heeded that lesson.")]);
[0837] (80) breakHere();
[0838] (05) drawObject(945,255,255);
[083F] (80) breakHere();
[0840] (05) drawObject(944,255,255);
[0847] (AE) WaitForMessage();
[0849] (80) breakHere();
[084A] (48) unless (Bit[88] == 0) goto 0849;
[0851] (72) loadRoom(45);
[0853] (32) setCameraAt(160);
[0856] (0C) Resource.clearHeap();
[0858] (80) breakHere();
[0859] (1E) walkActorTo(2,160,125);
[085F] (AE) WaitForActor(2);
[0862] (11) animateCostume(2,246);
[0865] (80) breakHere();
[0866] (11) animateCostume(5,247);
[0869] (80) breakHere();
[086A] (14) print(5,[Center(),Pos(160,152),Text("My destiny is in your hands, Elders.")]);
[0898] (1E) walkActorTo(4,132,127);
[089E] (80) breakHere();
[089F] (80) breakHere();
[08A0] (80) breakHere();
[08A1] (1E) walkActorTo(3,188,127);
[08A7] (AE) WaitForActor(4);
[08AA] (11) animateCostume(4,246);
[08AD] (AE) WaitForActor(3);
[08B0] (11) animateCostume(3,246);
[08B3] (AE) WaitForMessage();
[08B5] (80) breakHere();
[08B6] (11) animateCostume(3,8);
[08B9] (80) breakHere();
[08BA] (80) breakHere();
[08BB] (80) breakHere();
[08BC] (14) print(3,[Center(),Pos(160,152),Text("Our hands are empty, Hetchel.")]);
[08E3] (AE) WaitForMessage();
[08E5] (80) breakHere();
[08E6] (11) animateCostume(3,9);
[08E9] (80) breakHere();
[08EA] (80) breakHere();
[08EB] (80) breakHere();
[08EC] (14) print(2,[Center(),Pos(160,152),Text("Gaze once more upon the Great Loom" + newline() + "if you would know your destiny.")]);
[0939] (AE) WaitForMessage();
[093B] (14) print(255,[Center(),Pos(160,152),Color(11),Text("For behold! That destiny is upon you.")]);
[096C] (80) breakHere();
[096D] (80) breakHere();
[096E] (80) breakHere();
[096F] (11) animateCostume(2,6);
[0972] (80) breakHere();
[0973] (80) breakHere();
[0974] (80) breakHere();
[0975] (13) ActorOps(2,[InitAnimNr(12),StandAnimNr(12),Palette(12,15),Palette(14,11),Palette(13,7),Palette(5,8)]);
[0988] (01) putActor(2,160,125);
[098E] (11) animateCostume(2,9);
[0991] (0A) startScript(127,[15]);
[0997] (9A) Local[1] = Var[170 + 0];
[099E] (0A) startScript(113,[Local[1]]);
[09A4] (80) breakHere();
[09A5] (28) unless (!Bit[72]) goto 09A4;
[09AA] (13) ActorOps(2,[Palette(13,3),Palette(5,2)]);
[09B3] (11) animateCostume(2,9);
[09B6] (9A) Local[1] = Var[170 + 1];
[09BD] (0A) startScript(113,[Local[1]]);
[09C3] (80) breakHere();
[09C4] (28) unless (!Bit[72]) goto 09C3;
[09C9] (13) ActorOps(2,[Palette(5,1)]);
[09CF] (11) animateCostume(2,9);
[09D2] (9A) Local[1] = Var[170 + 2];
[09D9] (0A) startScript(113,[Local[1]]);
[09DF] (80) breakHere();
[09E0] (28) unless (!Bit[72]) goto 09DF;
[09E5] (13) ActorOps(2,[Palette(14,13),Palette(13,5),Palette(5,4)]);
[09F1] (11) animateCostume(2,9);
[09F4] (9A) Local[1] = Var[170 + 3];
[09FB] (0A) startScript(113,[Local[1]]);
[0A01] (80) breakHere();
[0A02] (28) unless (!Bit[72]) goto 0A01;
[0A07] (11) animateCostume(2,12);
[0A0A] (80) breakHere();
[0A0B] (5D) setClass(9,[0,150,148]);
[0A18] (13) ActorOps(9,[Costume(31),Elevation(25)]);
[0A20] (11) animateCostume(9,250);
[0A23] (43) Local[2] = getActorX(5);
[0A28] (23) Local[3] = getActorY(5);
[0A2D] (46) Local[3]++;
[0A30] (2D) putActorInRoom(9,45);
[0A33] (61) putActor(9,Local[2],Local[3]);
[0A39] (2A) startScript(112,[23],F);
[0A3F] (11) animateCostume(9,9);
[0A42] (1A) Local[0] = 1;
[0A47] (80) breakHere();
[0A48] (46) Local[0]++;
[0A4B] (44) unless (Local[0] > 6) goto 0A47;
[0A52] (11) animateCostume(9,10);
[0A55] (1A) Local[0] = 1;
[0A5A] (80) breakHere();
[0A5B] (46) Local[0]++;
[0A5E] (44) unless (Local[0] > 12) goto 0A5A;
[0A65] (11) animateCostume(9,11);
[0A68] (1A) Local[0] = 1;
[0A6D] (80) breakHere();
[0A6E] (46) Local[0]++;
[0A71] (44) unless (Local[0] > 6) goto 0A6D;
[0A78] (2D) putActorInRoom(9,0);
[0A7B] (80) breakHere();
[0A7C] (11) animateCostume(5,245);
[0A7F] (80) breakHere();
[0A80] (11) animateCostume(5,6);
[0A83] (1A) Local[0] = 1;
[0A88] (80) breakHere();
[0A89] (46) Local[0]++;
[0A8C] (44) unless (Local[0] > 16) goto 0A88;
[0A93] (11) animateCostume(2,7);
[0A96] (80) breakHere();
[0A97] (80) breakHere();
[0A98] (80) breakHere();
[0A99] (11) animateCostume(2,11);
[0A9C] (1E) walkActorTo(4,124,132);
[0AA2] (80) breakHere();
[0AA3] (80) breakHere();
[0AA4] (80) breakHere();
[0AA5] (1E) walkActorTo(3,156,132);
[0AAB] (AE) WaitForActor(4);
[0AAE] (11) animateCostume(4,245);
[0AB1] (80) breakHere();
[0AB2] (11) animateCostume(4,7);
[0AB5] (80) breakHere();
[0AB6] (AE) WaitForActor(3);
[0AB9] (1E) walkActorTo(2,140,126);
[0ABF] (11) animateCostume(3,244);
[0AC2] (80) breakHere();
[0AC3] (11) animateCostume(3,7);
[0AC6] (AE) WaitForActor(2);
[0AC9] (11) animateCostume(2,250);
[0ACC] (11) animateCostume(2,11);
[0ACF] (14) print(3,[Center(),Pos(160,152),Text("A swan's egg. Curious destiny.")]);
[0AF7] (AE) WaitForMessage();
[0AF9] (80) breakHere();
[0AFA] (1E) walkActorTo(3,232,132);
[0B00] (14) print(4,[Center(),Pos(160,152),Text("That draft has never failed before.")]);
[0B2D] (AE) WaitForActor(3);
[0B30] (AE) WaitForMessage();
[0B32] (80) breakHere();
[0B33] (11) animateCostume(3,246);
[0B36] (80) breakHere();
[0B37] (14) print(3,[Center(),Pos(160,152),Text("Hark!")]);
[0B46] (80) breakHere();
[0B47] (80) breakHere();
[0B48] (80) breakHere();
[0B49] (80) breakHere();
[0B4A] (11) animateCostume(2,3);
[0B4D] (80) breakHere();
[0B4E] (11) animateCostume(2,245);
[0B51] (AE) WaitForMessage();
[0B53] (11) animateCostume(3,244);
[0B56] (80) breakHere();
[0B57] (14) print(3,[Center(),Pos(160,152),Text("I heard a cry. Outside!")]);
[0B78] (AE) WaitForMessage();
[0B7A] (80) breakHere();
[0B7B] (72) loadRoom(39);
[0B7D] (32) setCameraAt(160);
[0B80] (0C) Resource.clearHeap();
[0B82] (0C) Resource.loadCostume(32);
[0B85] (0C) Resource.loadCostume(38);
[0B88] (0C) Resource.loadRoom(44);
[0B8B] (0C) Resource.loadCostume(54);
[0B8E] (0C) Resource.loadCostume(55);
[0B91] (0C) Resource.loadCostume(53);
[0B94] (0C) Resource.loadCostume(54);
[0B97] (0C) Resource.loadCostume(58);
[0B9A] (0C) Resource.loadCostume(57);
[0B9D] (48) if (VAR_SOUNDCARD == 4) {
[0BA4] (0C)   Resource.loadSound(49);
[0BA7] (0C)   Resource.loadSound(48);
[0BAA] (2E)   delay(60);
[0BAE] (2A)   startScript(112,[23],F);
[0BB4] (18) } else {
[0BB7] (0C)   Resource.loadSound(17);
[0BBA] (48)   if (VAR_SOUNDCARD == 3) {
[0BC1] (0C)     Resource.loadSound(23);
[0BC4] (2E)     delay(60);
[0BC8] (2A)     startScript(112,[23],F);
[0BCE] (18)   } else {
[0BD1] (0C)     Resource.loadSound(16);
[0BD4] (2E)     delay(60);
[0BD8] (2A)     startScript(112,[23],F);
[0BDE] (**)   }
[0BDE] (**) }
[0BDE] (5D) setClass(12,[0,150,149]);
[0BEB] (13) ActorOps(12,[Costume(32),WalkSpeed(2,2),Elevation(0),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[0BFC] (11) animateCostume(12,250);
[0BFF] (2D) putActorInRoom(12,39);
[0C02] (01) putActor(12,104,32);
[0C08] (11) animateCostume(12,9);
[0C0B] (1A) Local[0] = 1;
[0C10] (80) breakHere();
[0C11] (46) Local[0]++;
[0C14] (44) unless (Local[0] > 8) goto 0C10;
[0C1B] (1E) walkActorTo(12,32,32);
[0C21] (AE) WaitForActor(12);
[0C24] (13) ActorOps(12,[Costume(38),Elevation(0),WalkSpeed(4,2),InitAnimNr(1),WalkAnimNr(6),StandAnimNr(6)]);
[0C35] (1E) walkActorTo(12,22,32);
[0C3B] (AE) WaitForActor(12);
[0C3E] (5D) setClass(12,[0,150,148]);
[0C4B] (1E) walkActorTo(12,196,64);
[0C51] (AE) WaitForActor(12);
[0C54] (5D) setClass(12,[0,150,149]);
[0C61] (1E) walkActorTo(12,196,102);
[0C67] (AE) WaitForActor(12);
[0C6A] (72) loadRoom(44);
[0C6C] (32) setCameraAt(180);
[0C6F] (5D) setClass(1,[0,150,149]);
[0C7C] (0A) startScript(124,[1,8]);
[0C85] (11) animateCostume(1,249);
[0C88] (2D) putActorInRoom(1,44);
[0C8B] (01) putActor(1,145,125);
[0C91] (5D) setClass(4,[0,150,148]);
[0C9E] (13) ActorOps(4,[Costume(54),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(14)]);
[0CB4] (48) if (VAR_VIDEOMODE == 4) {
[0CBB] (13)   ActorOps(4,[Palette(14,15),Palette(7,0),Palette(8,0),Palette(9,0)]);
[0CCA] (**) }
[0CCA] (11) animateCostume(4,250);
[0CCD] (2D) putActorInRoom(4,44);
[0CD0] (01) putActor(4,200,124);
[0CD6] (5D) setClass(3,[0,150,148]);
[0CE3] (13) ActorOps(3,[Costume(53),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(10)]);
[0CF9] (48) if (VAR_VIDEOMODE == 4) {
[0D00] (13)   ActorOps(3,[Palette(10,15),Palette(7,0)]);
[0D09] (**) }
[0D09] (11) animateCostume(3,251);
[0D0C] (2D) putActorInRoom(3,44);
[0D0F] (01) putActor(3,211,128);
[0D15] (5D) setClass(2,[0,150,148]);
[0D22] (13) ActorOps(2,[Costume(55),Elevation(0),WalkSpeed(2,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(11)]);
[0D38] (11) animateCostume(2,248);
[0D3B] (2D) putActorInRoom(2,44);
[0D3E] (01) putActor(2,220,126);
[0D44] (5D) setClass(7,[0,148,150]);
[0D51] (13) ActorOps(7,[Costume(58),Elevation(0),WalkSpeed(2,2)]);
[0D5C] (11) animateCostume(7,250);
[0D5F] (2D) putActorInRoom(7,0);
[0D62] (5D) setClass(6,[0,148,150]);
[0D6F] (13) ActorOps(6,[Costume(57),Elevation(0),WalkSpeed(2,2)]);
[0D7A] (11) animateCostume(6,250);
[0D7D] (2D) putActorInRoom(6,0);
[0D80] (80) breakHere();
[0D81] (2D) putActorInRoom(6,44);
[0D84] (01) putActor(6,203,40);
[0D8A] (11) animateCostume(6,7);
[0D8D] (1A) Local[0] = 1;
[0D92] (48) if (Local[0] == 3) {
[0D99] (11)   animateCostume(4,247);
[0D9C] (48) } else if (Local[0] == 5) {
[0DA6] (11)   animateCostume(2,247);
[0DA9] (18)   /* goto 0DAC; */
[0DAC] (**) }
[0DAC] (80) breakHere();
[0DAD] (46) Local[0]++;
[0DB0] (44) unless (Local[0] > 11) goto 0D92;
[0DB7] (05) drawObject(597,255,255);
[0DBE] (1A) Bit[90] = 1;
[0DC3] (0A) startScript(201,[]);
[0DC6] (0A) startScript(203,[]);
[0DC9] (0A) startScript(202,[]);
[0DCC] (2D) putActorInRoom(7,44);
[0DCF] (01) putActor(7,203,44);
[0DD5] (80) breakHere();
[0DD6] (1E) walkActorTo(7,203,64);
[0DDC] (1A) Local[0] = 1;
[0DE1] (80) breakHere();
[0DE2] (46) Local[0]++;
[0DE5] (44) unless (Local[0] > 14) goto 0DE1;
[0DEC] (2D) putActorInRoom(6,0);
[0DEF] (11) animateCostume(7,3);
[0DF2] (2E) delay(120);
[0DF6] (5D) setClass(609,[24]);
[0DFD] (72) loadRoom(45);
[0DFF] (32) setCameraAt(160);
[0E02] (0C) Resource.clearHeap();
[0E04] (0C) Resource.loadCostume(81);
[0E07] (0C) Resource.loadCostume(74);
[0E0A] (0C) Resource.loadCostume(60);
[0E0D] (0C) Resource.loadCostume(61);
[0E10] (0C) Resource.loadCostume(62);
[0E13] (0C) Resource.loadCostume(63);
[0E16] (0C) Resource.loadCostume(64);
[0E19] (0C) Resource.loadCostume(66);
[0E1C] (0C) Resource.loadCostume(67);
[0E1F] (0C) Resource.loadCostume(71);
[0E22] (0C) Resource.loadCostume(69);
[0E25] (0C) Resource.loadCostume(70);
[0E28] (0C) Resource.loadCostume(68);
[0E2B] (0C) Resource.loadCostume(31);
[0E2E] (0C) Resource.loadCostume(73);
[0E31] (0C) Resource.loadCostume(72);
[0E34] (0C) Resource.loadCostume(76);
[0E37] (5D) setClass(11,[0]);
[0E3E] (13) ActorOps(11,[Costume(72),Elevation(0)]);
[0E46] (11) animateCostume(11,249);
[0E49] (2D) putActorInRoom(11,0);
[0E4C] (5D) setClass(10,[0,150,149]);
[0E59] (13) ActorOps(10,[Costume(76),Elevation(120),WalkSpeed(8,2)]);
[0E64] (2D) putActorInRoom(10,45);
[0E67] (01) putActor(10,320,120);
[0E6D] (5D) setClass(3,[0,150,148]);
[0E7A] (13) ActorOps(3,[Costume(68),Elevation(0),WalkSpeed(8,2)]);
[0E85] (11) animateCostume(3,249);
[0E88] (2D) putActorInRoom(3,45);
[0E8B] (01) putActor(3,43,128);
[0E91] (5D) setClass(4,[0,150,148]);
[0E9E] (13) ActorOps(4,[Costume(69),Elevation(0),WalkSpeed(8,2)]);
[0EA9] (11) animateCostume(4,248);
[0EAC] (2D) putActorInRoom(4,45);
[0EAF] (01) putActor(4,273,128);
[0EB5] (5D) setClass(2,[0,150,148]);
[0EC2] (13) ActorOps(2,[Costume(70),Elevation(0),WalkSpeed(8,2)]);
[0ECD] (11) animateCostume(2,251);
[0ED0] (2D) putActorInRoom(2,45);
[0ED3] (01) putActor(2,124,134);
[0ED9] (80) breakHere();
[0EDA] (0A) startScript(155,[]);
[0EDD] (14) print(3,[Center(),Pos(160,152),Text("The Guild is under attack!")]);
[0F01] (0A) startScript(156,[]);
[0F04] (AE) WaitForMessage();
[0F06] (14) print(2,[Center(),Pos(160,152),Text("Who dares to desecrate the" + newline() + "Loom of the Weavers?")]);
[0F40] (80) breakHere();
[0F41] (48) unless (Bit[88] == 0) goto 0F40;
[0F48] (11) animateCostume(3,6);
[0F4B] (1A) Local[0] = 1;
[0F50] (80) breakHere();
[0F51] (46) Local[0]++;
[0F54] (44) unless (Local[0] > 8) goto 0F50;
[0F5B] (13) ActorOps(3,[Costume(76),Elevation(100),WalkSpeed(8,2)]);
[0F66] (01) putActor(3,46,197);
[0F6C] (0A) startScript(157,[]);
[0F6F] (0A) startScript(156,[]);
[0F72] (1E) walkActorTo(2,224,130);
[0F78] (AE) WaitForMessage();
[0F7A] (14) print(4,[Center(),Pos(160,152),Text("This is the work of the demon boy.")]);
[0FA6] (AE) WaitForMessage();
[0FA8] (80) breakHere();
[0FA9] (14) print(255,[Center(),Pos(160,152),Color(14),Text("Kill it while you still can, Atropos!")]);
[0FDA] (80) breakHere();
[0FDB] (28) unless (!Bit[88]) goto 0FDA;
[0FE0] (11) animateCostume(4,246);
[0FE3] (80) breakHere();
[0FE4] (80) breakHere();
[0FE5] (11) animateCostume(4,6);
[0FE8] (1A) Local[0] = 1;
[0FED] (80) breakHere();
[0FEE] (46) Local[0]++;
[0FF1] (44) unless (Local[0] > 9) goto 0FED;
[0FF8] (13) ActorOps(4,[Costume(76),Elevation(100),WalkSpeed(8,2)]);
[1003] (01) putActor(4,273,208);
[1009] (11) animateCostume(4,3);
[100C] (80) breakHere();
[100D] (80) breakHere();
[100E] (80) breakHere();
[100F] (80) breakHere();
[1010] (80) breakHere();
[1011] (0A) startScript(159,[]);
[1014] (11) animateCostume(2,246);
[1017] (80) breakHere();
[1018] (11) animateCostume(2,6);
[101B] (80) breakHere();
[101C] (80) breakHere();
[101D] (80) breakHere();
[101E] (11) animateCostume(2,7);
[1021] (80) breakHere();
[1022] (80) breakHere();
[1023] (80) breakHere();
[1024] (0A) startScript(156,[]);
[1027] (14) print(255,[Center(),Pos(160,152),Color(11),Text("Cursed forever be the name of Cygna's son," + newline() + "the Loom-Child ... Bobbin Threadbare!")]);
[1084] (80) breakHere();
[1085] (28) unless (!Bit[88]) goto 1084;
[108A] (11) animateCostume(2,6);
[108D] (80) breakHere();
[108E] (80) breakHere();
[108F] (80) breakHere();
[1090] (11) animateCostume(2,8);
[1093] (1A) Local[0] = 1;
[1098] (80) breakHere();
[1099] (46) Local[0]++;
[109C] (44) unless (Local[0] > 8) goto 1098;
[10A3] (13) ActorOps(2,[Costume(76),Elevation(100),WalkSpeed(8,2)]);
[10AE] (01) putActor(2,224,203);
[10B4] (11) animateCostume(2,3);
[10B7] (5D) setClass(610,[24]);
[10BE] (2D) putActorInRoom(11,45);
[10C1] (0E) putActorAtObject(11,610);
[10C5] (80) breakHere();
[10C6] (80) breakHere();
[10C7] (80) breakHere();
[10C8] (80) breakHere();
[10C9] (80) breakHere();
[10CA] (1E) walkActorTo(2,96,168);
[10D0] (AE) WaitForActor(2);
[10D3] (62) stopScript(155);
[10D5] (43) Local[0] = getActorX(10);
[10DA] (78) if (Local[0] < 160) {
[10E1] (1A)   Local[0] = 320;
[10E6] (18) } else {
[10E9] (1A)   Local[0] = 0;
[10EE] (**) }
[10EE] (5E) walkActorTo(10,Local[0],140);
[10F4] (1E) walkActorTo(2,320,100);
[10FA] (80) breakHere();
[10FB] (80) breakHere();
[10FC] (80) breakHere();
[10FD] (80) breakHere();
[10FE] (80) breakHere();
[10FF] (80) breakHere();
[1100] (80) breakHere();
[1101] (80) breakHere();
[1102] (5D) setClass(2,[0,150,149]);
[110F] (AE) WaitForActor(2);
[1112] (2D) putActorInRoom(2,0);
[1115] (AE) WaitForActor(10);
[1118] (2D) putActorInRoom(10,0);
[111B] (80) breakHere();
[111C] (72) loadRoom(44);
[111E] (32) setCameraAt(200);
[1121] (0C) Resource.clearHeap();
[1123] (0C) Resource.loadRoom(45);
[1126] (0C) Resource.loadCostume(74);
[1129] (0C) Resource.loadCostume(60);
[112C] (0C) Resource.loadCostume(61);
[112F] (0C) Resource.loadCostume(62);
[1132] (0C) Resource.loadCostume(63);
[1135] (0C) Resource.loadCostume(64);
[1138] (0C) Resource.loadCostume(66);
[113B] (0C) Resource.loadCostume(67);
[113E] (0C) Resource.loadCostume(72);
[1141] (0C) Resource.loadCostume(73);
[1144] (0C) Resource.loadCostume(31);
[1147] (5D) setClass(1,[0,150,149]);
[1154] (0A) startScript(124,[1,8]);
[115D] (11) animateCostume(1,249);
[1160] (2D) putActorInRoom(1,44);
[1163] (01) putActor(1,145,125);
[1169] (2E) delay(60);
[116D] (1E) walkActorTo(1,200,130);
[1173] (80) breakHere();
[1174] (14) print(1,[Center(),Pos(160,152),Text("Oh, wonderful.")]);
[118C] (80) breakHere();
[118D] (80) breakHere();
[118E] (0A) startScript(125,[1]);
[1194] (AE) WaitForActor(1);
[1197] (AE) WaitForMessage();
[1199] (80) breakHere();
[119A] (14) print(1,[Center(),Pos(160,152),Text("Everyone's flown away!")]);
[11BA] (AE) WaitForMessage();
[11BC] (80) breakHere();
[11BD] (72) loadRoom(45);
[11BF] (32) setCameraAt(160);
[11C2] (5D) setClass(1,[0,151]);
[11CC] (11) animateCostume(1,251);
[11CF] (2D) putActorInRoom(1,45);
[11D2] (01) putActor(1,160,132);
[11D8] (80) breakHere();
[11D9] (80) breakHere();
[11DA] (14) print(1,[Center(),Pos(160,152),Text("No explanations. No goodbyes.")]);
[1201] (AE) WaitForMessage();
[1203] (80) breakHere();
[1204] (11) animateCostume(1,246);
[1207] (80) breakHere();
[1208] (80) breakHere();
[1209] (14) print(1,[Center(),Pos(160,152),Text("Why do they always leave me behind?")]);
[1236] (AE) WaitForMessage();
[1238] (80) breakHere();
[1239] (26) setVarRange(Var[182],4,[8,4,5,1]);
[1241] (5D) setClass(593,[24]);
[1248] (5C) oldRoomEffect-set(-32512);
[124C] (A8) if (VAR_OVERRIDE) {
[1251] (62)   stopScript(159);
[1253] (62)   stopScript(157);
[1255] (62)   stopScript(156);
[1257] (62)   stopScript(155);
[1259] (11)   animateCostume(5,255);
[125C] (11)   animateCostume(2,255);
[125F] (11)   animateCostume(4,255);
[1262] (11)   animateCostume(3,255);
[1265] (11)   animateCostume(10,255);
[1268] (2D)   putActorInRoom(2,0);
[126B] (2D)   putActorInRoom(3,0);
[126E] (2D)   putActorInRoom(4,0);
[1271] (2D)   putActorInRoom(10,0);
[1274] (2D)   putActorInRoom(5,0);
[1277] (1A)   Bit[90] = 1;
[127C] (5D)   setClass(610,[24]);
[1283] (5D)   setClass(11,[0]);
[128A] (13)   ActorOps(11,[Costume(72),Elevation(0)]);
[1292] (11)   animateCostume(11,249);
[1295] (2D)   putActorInRoom(11,45);
[1298] (0E)   putActorAtObject(11,610);
[129C] (11)   animateCostume(11,3);
[129F] (11)   animateCostume(1,255);
[12A2] (5D)   setClass(1,[0,151]);
[12AC] (0A)   startScript(126,[0]);
[12B2] (11)   animateCostume(1,250);
[12B5] (2D)   putActorInRoom(1,45);
[12B8] (01)   putActor(1,160,132);
[12BE] (BC)   stopSound(Var[259]);
[12C1] (1A)   Var[259] = 0;
[12C6] (5D)   setClass(609,[24]);
[12CD] (08)   if (VAR_ROOM != 45) {
[12D4] (72)     loadRoom(45);
[12D6] (32)     setCameraAt(160);
[12D9] (**)   }
[12D9] (0A)   startScript(158,[]);
[12DC] (80)   breakHere();
[12DD] (**) }
[12DD] (80) breakHere();
[12DE] (C0) endCutscene();
[12DF] (A0) stopObjectCode();
END

// Script 155
[0000] (1E) walkActorTo(10,160,144);
[0006] (AE) WaitForActor(10);
[0009] (1E) walkActorTo(10,60,156);
[000F] (AE) WaitForActor(10);
[0012] (1E) walkActorTo(10,160,168);
[0018] (AE) WaitForActor(10);
[001B] (1E) walkActorTo(10,260,156);
[0021] (AE) WaitForActor(10);
[0024] (18) goto 0000;
[0027] (A0) stopObjectCode();
END

// Script 156
[0000] (1A) Bit[88] = 1;
[0005] (0A) startScript(116,[]);
[0008] (0A) startScript(127,[15]);
[000E] (9A) Local[0] = Var[170 + 0];
[0015] (0A) startScript(113,[Local[0]]);
[001B] (80) breakHere();
[001C] (28) unless (!Bit[72]) goto 001B;
[0021] (9A) Local[0] = Var[170 + 1];
[0028] (0A) startScript(113,[Local[0]]);
[002E] (80) breakHere();
[002F] (28) unless (!Bit[72]) goto 002E;
[0034] (9A) Local[0] = Var[170 + 2];
[003B] (0A) startScript(113,[Local[0]]);
[0041] (80) breakHere();
[0042] (28) unless (!Bit[72]) goto 0041;
[0047] (9A) Local[0] = Var[170 + 3];
[004E] (0A) startScript(113,[Local[0]]);
[0054] (80) breakHere();
[0055] (28) unless (!Bit[72]) goto 0054;
[005A] (1A) Bit[88] = 0;
[005F] (A0) stopObjectCode();
END

// Script 157
[0000] (1E) walkActorTo(3,320,124);
[0006] (1A) Local[0] = 1;
[000B] (80) breakHere();
[000C] (46) Local[0]++;
[000F] (44) unless (Local[0] > 10) goto 000B;
[0016] (5D) setClass(3,[0,150,149]);
[0023] (AE) WaitForActor(3);
[0026] (2D) putActorInRoom(3,0);
[0029] (80) breakHere();
[002A] (A0) stopObjectCode();
END

// Script 158
[0000] (0C) Resource.loadCostume(73);
[0003] (5D) setClass(9,[0,150,148]);
[0010] (13) ActorOps(9,[Costume(73),Elevation(0)]);
[0018] (11) animateCostume(9,250);
[001B] (2D) putActorInRoom(9,45);
[001E] (0E) putActorAtObject(9,609);
[0022] (A8) if (Bit[95]) {
[0027] (11)   animateCostume(9,8);
[002A] (18) } else {
[002D] (11)   animateCostume(9,3);
[0030] (0C)   Resource.loadCostume(75);
[0033] (**) }
[0033] (5D) setClass(609,[24]);
[003A] (A0) stopObjectCode();
END

// Script 159
[0000] (1E) walkActorTo(4,0,124);
[0006] (AE) WaitForActor(4);
[0009] (2D) putActorInRoom(4,0);
[000C] (80) breakHere();
[000D] (A0) stopObjectCode();
END

// Script 160
[0000] (1A) Local[0] = 609;
[0005] (0A) startScript(116,[]);
[0008] (0A) startScript(127,[0]);
[000E] (1A) Local[1] = 0;
[0013] (9A) Local[2] = Var[170 + Local[1]];
[001A] (0A) startScript(113,[Local[2]]);
[0020] (11) animateCostume(9,6);
[0023] (80) breakHere();
[0024] (28) unless (!Bit[72]) goto 0023;
[0029] (11) animateCostume(9,3);
[002C] (80) breakHere();
[002D] (46) Local[1]++;
[0030] (44) unless (Local[1] > 3) goto 0013;
[0037] (48) if (Var[188] == 2) {
[003E] (0A)   startScript(128,[0]);
[0044] (**) }
[0044] (A0) stopObjectCode();
END

// Script 161
[0000] (5D) setClass(6,[0,148,150]);
[000D] (13) ActorOps(6,[Elevation(0)]);
[0013] (11) animateCostume(6,250);
[0016] (16) Local[0] = getRandomNr(1);
[001A] (A8) if (Local[0]) {
[001F] (13)   ActorOps(6,[Costume(60),Elevation(0)]);
[0027] (2D)   putActorInRoom(6,45);
[002A] (01)   putActor(6,92,100);
[0030] (11)   animateCostume(6,6);
[0033] (1A)   Local[1] = 1;
[0038] (80)   breakHere();
[0039] (46)   Local[1]++;
[003C] (44)   unless (Local[1] > 7) goto 0038;
[0043] (13)   ActorOps(6,[Costume(61)]);
[0048] (2D)   putActorInRoom(6,45);
[004B] (01)   putActor(6,146,100);
[0051] (11)   animateCostume(6,6);
[0054] (1A)   Local[1] = 1;
[0059] (80)   breakHere();
[005A] (46)   Local[1]++;
[005D] (44)   unless (Local[1] > 4) goto 0059;
[0064] (13)   ActorOps(6,[Costume(62)]);
[0069] (2D)   putActorInRoom(6,45);
[006C] (01)   putActor(6,168,100);
[0072] (11)   animateCostume(6,6);
[0075] (1A)   Local[1] = 1;
[007A] (80)   breakHere();
[007B] (46)   Local[1]++;
[007E] (44)   unless (Local[1] > 5) goto 007A;
[0085] (13)   ActorOps(6,[Costume(63)]);
[008A] (2D)   putActorInRoom(6,45);
[008D] (01)   putActor(6,232,100);
[0093] (11)   animateCostume(6,6);
[0096] (1A)   Local[1] = 1;
[009B] (80)   breakHere();
[009C] (46)   Local[1]++;
[009F] (44)   unless (Local[1] > 6) goto 009B;
[00A6] (18) } else {
[00A9] (13)   ActorOps(6,[Costume(63)]);
[00AE] (2D)   putActorInRoom(6,45);
[00B1] (01)   putActor(6,232,100);
[00B7] (11)   animateCostume(6,7);
[00BA] (1A)   Local[1] = 1;
[00BF] (80)   breakHere();
[00C0] (46)   Local[1]++;
[00C3] (44)   unless (Local[1] > 6) goto 00BF;
[00CA] (13)   ActorOps(6,[Costume(62)]);
[00CF] (2D)   putActorInRoom(6,45);
[00D2] (01)   putActor(6,168,100);
[00D8] (11)   animateCostume(6,7);
[00DB] (1A)   Local[1] = 1;
[00E0] (80)   breakHere();
[00E1] (46)   Local[1]++;
[00E4] (44)   unless (Local[1] > 5) goto 00E0;
[00EB] (13)   ActorOps(6,[Costume(61)]);
[00F0] (2D)   putActorInRoom(6,45);
[00F3] (01)   putActor(6,146,100);
[00F9] (11)   animateCostume(6,7);
[00FC] (1A)   Local[1] = 1;
[0101] (80)   breakHere();
[0102] (46)   Local[1]++;
[0105] (44)   unless (Local[1] > 4) goto 0101;
[010C] (13)   ActorOps(6,[Costume(60)]);
[0111] (2D)   putActorInRoom(6,45);
[0114] (01)   putActor(6,92,100);
[011A] (11)   animateCostume(6,7);
[011D] (1A)   Local[1] = 1;
[0122] (80)   breakHere();
[0123] (46)   Local[1]++;
[0126] (44)   unless (Local[1] > 7) goto 0122;
[012D] (**) }
[012D] (2D) putActorInRoom(6,0);
[0130] (80) breakHere();
[0131] (18) goto 0016;
[0134] (A0) stopObjectCode();
END

// Script 162
[0000] (5D) setClass(7,[0,150,149]);
[000D] (13) ActorOps(7,[Elevation(0)]);
[0013] (16) Local[0] = getRandomNr(2);
[0017] (48) if (Local[0] == 1) {
[001E] (28)   if (!Bit[79]) {
[0023] (16)     Local[0] = getRandomNr(1);
[0027] (A8)     if (Local[0]) {
[002C] (1A)       Local[0] = 249;
[0031] (18)     } else {
[0034] (1A)       Local[0] = 248;
[0039] (**)     }
[0039] (13)     ActorOps(7,[Costume(64)]);
[003E] (51)     animateCostume(7,Local[0]);
[0042] (2D)     putActorInRoom(7,45);
[0045] (01)     putActor(7,156,109);
[004B] (11)     animateCostume(7,6);
[004E] (**)   }
[004E] (1A)   Local[2] = 1;
[0053] (80)   breakHere();
[0054] (46)   Local[2]++;
[0057] (44)   unless (Local[2] > 9) goto 0053;
[005E] (48) } else if (Local[0] == 2) {
[0068] (28)   if (!Bit[72]) {
[006D] (13)     ActorOps(7,[Costume(66)]);
[0072] (11)     animateCostume(7,250);
[0075] (2D)     putActorInRoom(7,45);
[0078] (01)     putActor(7,146,100);
[007E] (11)     animateCostume(7,6);
[0081] (**)   }
[0081] (1A)   Local[2] = 1;
[0086] (80)   breakHere();
[0087] (46)   Local[2]++;
[008A] (44)   unless (Local[2] > 6) goto 0086;
[0091] (18) } else {
[0094] (28)   if (!Bit[72]) {
[0099] (13)     ActorOps(7,[Costume(67)]);
[009E] (11)     animateCostume(7,250);
[00A1] (2D)     putActorInRoom(7,45);
[00A4] (01)     putActor(7,172,100);
[00AA] (11)     animateCostume(7,6);
[00AD] (**)   }
[00AD] (1A)   Local[2] = 1;
[00B2] (80)   breakHere();
[00B3] (46)   Local[2]++;
[00B6] (44)   unless (Local[2] > 6) goto 00B2;
[00BD] (**) }
[00BD] (2D) putActorInRoom(7,0);
[00C0] (80) breakHere();
[00C1] (18) goto 0013;
[00C4] (A0) stopObjectCode();
END

// Script 163
[0000] (0C) Resource.loadCostume(72);
[0003] (5D) setClass(11,[0]);
[000A] (13) ActorOps(11,[Costume(72),Elevation(0)]);
[0012] (11) animateCostume(11,249);
[0015] (2D) putActorInRoom(11,45);
[0018] (0E) putActorAtObject(11,610);
[001C] (11) animateCostume(11,3);
[001F] (5D) setClass(610,[24]);
[0026] (A0) stopObjectCode();
END

// Script 164
[0000] (40) cutscene([0]);
[0005] (0A) startScript(116,[]);
[0008] (1A) Local[0] = 0;
[000D] (9A) Local[1] = Var[182 + Local[0]];
[0014] (44) if (Local[1] > 8) {
[001B] (18) } else {
[001E] (78)   unless (Local[1] < 1) goto 006C;
[0025] (**) }
[0025] (26) setVarRange(Var[182],4,[0,0,0,0]);
[002D] (14) print(1,[Center(),Text("It's quiet. The echoes in the Loom" + newline() + "have all died away.")]);
[0069] (18) goto 019F;
[006C] (46) Local[0]++;
[006F] (44) unless (Local[0] > 3) goto 000D;
[0076] (1A) Local[0] = 0;
[007B] (9A) Local[1] = Var[182 + Local[0]];
[0082] (0A) startScript(113,[Local[1]]);
[0088] (80) breakHere();
[0089] (28) unless (!Bit[72]) goto 0088;
[008E] (80) breakHere();
[008F] (46) Local[0]++;
[0092] (44) unless (Local[0] > 3) goto 007B;
[0099] (1D) if (classOfIs(611,[3])) {
[00A2] (5D)   setClass(611,[131]);
[00A9] (9A)   Local[1] = Var[182 + 0];
[00B0] (48)   if (Local[1] == 8) {
[00B7] (9A)     Local[1] = Var[182 + 1];
[00BE] (48)     if (Local[1] == 4) {
[00C5] (9A)       Local[1] = Var[182 + 2];
[00CC] (48)       if (Local[1] == 5) {
[00D3] (9A)         Local[1] = Var[182 + 3];
[00DA] (48)         if (Local[1] == 1) {
[00E1] (14)           print(1,[Center(),Pos(160,120),Text("Those are the same four threads" + newline() + "the swan spun on the Elders.")]);
[0128] (18)           goto 0170;
[012B] (**)         }
[012B] (**)       }
[012B] (**)     }
[012B] (**)   }
[012B] (14)   print(1,[Center(),Pos(160,120),Text("Those are the same four threads" + newline() + "I heard a few moments ago.")]);
[0170] (AE)   WaitForMessage();
[0172] (80)   breakHere();
[0173] (14)   print(1,[Center(),Pos(160,120),Text("They're still echoing in the Loom!")]);
[019F] (**) }
[019F] (80) breakHere();
[01A0] (C0) endCutscene();
[01A1] (A8) if (Bit[89]) {
[01A6] (28)   unless (!Bit[125]) goto 01AB;
[01AB] (**) }
[01AB] (A0) stopObjectCode();
END

// Script 165
[0000] (40) cutscene([1]);
[0005] (1A) Bit[95] = 1;
[000A] (1A) Bit[73] = 1;
[000F] (80) breakHere();
[0010] (28) unless (!Bit[72]) goto 000F;
[0015] (1A) Bit[70] = 0;
[001A] (80) breakHere();
[001B] (28) unless (!Bit[71]) goto 001A;
[0020] (5D) setClass(607,[152]);
[0027] (5D) setClass(606,[24]);
[002E] (1A) Var[319] = 2;
[0033] (80) breakHere();
[0034] (5D) setClass(5,[0,150,148]);
[0041] (13) ActorOps(5,[Costume(75),Elevation(102),WalkSpeed(2,1),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(12)]);
[0057] (11) animateCostume(5,249);
[005A] (58) beginOverride();
[005C] (18) goto 0ABF;
[005F] (28) if (!Local[0]) {
[0064] (5D)   setClass(10,[0,150,148]);
[0071] (13)   ActorOps(10,[Costume(31),Elevation(100)]);
[0079] (11)   animateCostume(10,250);
[007C] (1A)   Local[2] = 131;
[0081] (5A)   Local[2] += 100;
[0086] (2D)   putActorInRoom(10,45);
[0089] (21)   putActor(10,140,Local[2]);
[008F] (2A)   startScript(112,[23],F);
[0095] (11)   animateCostume(10,6);
[0098] (1A)   Local[1] = 1;
[009D] (80)   breakHere();
[009E] (46)   Local[1]++;
[00A1] (44)   unless (Local[1] > 6) goto 009D;
[00A8] (11)   animateCostume(10,7);
[00AB] (1A)   Local[1] = 1;
[00B0] (80)   breakHere();
[00B1] (46)   Local[1]++;
[00B4] (44)   unless (Local[1] > 24) goto 00B0;
[00BB] (11)   animateCostume(10,8);
[00BE] (1A)   Local[1] = 1;
[00C3] (80)   breakHere();
[00C4] (46)   Local[1]++;
[00C7] (44)   unless (Local[1] > 6) goto 00C3;
[00CE] (2D)   putActorInRoom(10,0);
[00D1] (80)   breakHere();
[00D2] (**) }
[00D2] (11) animateCostume(9,7);
[00D5] (1A) Local[1] = 1;
[00DA] (80) breakHere();
[00DB] (46) Local[1]++;
[00DE] (44) unless (Local[1] > 15) goto 00DA;
[00E5] (11) animateCostume(9,8);
[00E8] (2D) putActorInRoom(5,45);
[00EB] (01) putActor(5,148,236);
[00F1] (1E) walkActorTo(5,178,232);
[00F7] (AE) WaitForActor(5);
[00FA] (11) animateCostume(5,244);
[00FD] (11) animateCostume(1,245);
[0100] (80) breakHere();
[0101] (80) breakHere();
[0102] (14) print(5,[Center(),Pos(160,152),Color(12),Text("Thank goodness you're still here.")]);
[012F] (AE) WaitForMessage();
[0131] (80) breakHere();
[0132] (14) print(1,[Center(),Pos(160,152),Color(15),Text("Mother Hetchel? Is that you?")]);
[015A] (AE) WaitForMessage();
[015C] (80) breakHere();
[015D] (14) print(5,[Center(),Pos(160,152),Color(12),Text("You know perfectly well it's me." + newline() + "I saw you watching us.")]);
[01A1] (AE) WaitForMessage();
[01A3] (80) breakHere();
[01A4] (14) print(1,[Center(),Pos(160,152),Color(15),Text("What's been happening here, Hetchel?" + newline() + "The whole village has flown away!")]);
[01F7] (AE) WaitForMessage();
[01F9] (80) breakHere();
[01FA] (1E) walkActorTo(5,216,232);
[0200] (80) breakHere();
[0201] (14) print(5,[Center(),Pos(160,152),Color(12),Text("I'd hoped the swan might come" + newline() + "to save you.")]);
[0238] (AE) WaitForActor(5);
[023B] (11) animateCostume(5,244);
[023E] (80) breakHere();
[023F] (80) breakHere();
[0240] (A8) if (VAR_HAVE_MSG) {
[0245] (11)   animateCostume(5,4);
[0248] (**) }
[0248] (AE) WaitForMessage();
[024A] (80) breakHere();
[024B] (14) print(5,[Center(),Pos(160,152),Color(12),Text("But I never expected her to weave" + newline() + "as much mischief as this!")]);
[0293] (AE) WaitForMessage();
[0295] (80) breakHere();
[0296] (14) print(1,[Center(),Pos(160,152),Color(15),Text("Save me? From what?")]);
[02B5] (AE) WaitForMessage();
[02B7] (80) breakHere();
[02B8] (32) setCameraAt(160);
[02BB] (5D) setClass(10,[0,150,148]);
[02C8] (80) breakHere();
[02C9] (14) print(5,[Center(),Pos(160,144),Color(12),Text("From the Elders." + wait() + "They were going to turn you into a swan," + newline() + "as they tried to do to me.")]);
[032B] (AE) WaitForMessage();
[032D] (80) breakHere();
[032E] (80) breakHere();
[032F] (80) breakHere();
[0330] (80) breakHere();
[0331] (80) breakHere();
[0332] (80) breakHere();
[0333] (14) print(5,[Center(),Pos(160,152),Color(12),Text("Looks as if a cygnet was the best" + newline() + "they could manage with these old bones.")]);
[0389] (1A) Local[1] = 1;
[038E] (80) breakHere();
[038F] (46) Local[1]++;
[0392] (44) unless (Local[1] > 10) goto 038E;
[0399] (AE) WaitForMessage();
[039B] (80) breakHere();
[039C] (72) loadRoom(45);
[039E] (32) setCameraAt(160);
[03A1] (0C) Resource.loadCostume(77);
[03A4] (80) breakHere();
[03A5] (14) print(1,[Center(),Pos(160,152),Color(15),Text("Why do the Elders want to get rid of me?" + newline() + "I haven't broken any Rules.")]);
[03F6] (AE) WaitForMessage();
[03F8] (80) breakHere();
[03F9] (14) print(5,[Center(),Pos(160,152),Color(12),Text("They fear you, Bobbin.")]);
[041B] (AE) WaitForMessage();
[041D] (80) breakHere();
[041E] (1E) walkActorTo(1,80,132);
[0424] (80) breakHere();
[0425] (14) print(1,[Center(),Pos(160,152),Color(15),Text("But why should anyone be afraid of me?")]);
[0457] (AE) WaitForActor(1);
[045A] (A8) if (VAR_HAVE_MSG) {
[045F] (11)   animateCostume(1,4);
[0462] (**) }
[0462] (AE) WaitForMessage();
[0464] (80) breakHere();
[0465] (14) print(5,[Center(),Pos(160,144),Color(12),Text("Ever since you came into our world," + newline() + "the Elders have watched chaos spread" + newline() + "across the Pattern in the Loom.")]);
[04DB] (AE) WaitForMessage();
[04DD] (80) breakHere();
[04DE] (14) print(5,[Center(),Pos(160,144),Color(12),Text("They believed - hoped - that your birth" + newline() + "was the cause of this chaos, and that" + newline() + "order might return if you were banished.")]);
[0562] (AE) WaitForMessage();
[0564] (80) breakHere();
[0565] (11) animateCostume(1,246);
[0568] (80) breakHere();
[0569] (80) breakHere();
[056A] (14) print(5,[Center(),Pos(160,152),Color(12),Text("But now the Elders are banished," + newline() + "and you are still here!" + wait() + "This can mean only one thing.")]);
[05CE] (AE) WaitForMessage();
[05D0] (80) breakHere();
[05D1] (5D) setClass(10,[0,150,148]);
[05DE] (14) print(5,[Center(),Pos(160,144),Color(12),Text("The Pattern is failing of its own accord." + wait() + "Soon it will come to an end ..." + newline() + "and with it, all that is hemmed " + newline() + "into its threads.")]);
[0669] (AE) WaitForMessage();
[066B] (80) breakHere();
[066C] (14) print(5,[Center(),Pos(160,152),Color(12),Text("A third Shadow is nigh!")]);
[068F] (1A) Local[1] = 1;
[0694] (80) breakHere();
[0695] (46) Local[1]++;
[0698] (44) unless (Local[1] > 10) goto 0694;
[069F] (AE) WaitForMessage();
[06A1] (32) setCameraAt(160);
[06A4] (11) animateCostume(1,249);
[06A7] (2D) putActorInRoom(1,45);
[06AA] (01) putActor(1,80,156);
[06B0] (80) breakHere();
[06B1] (14) print(1,[Center(),Pos(160,152),Color(15),Text("Is there any way to stop it?")]);
[06D9] (AE) WaitForMessage();
[06DB] (80) breakHere();
[06DC] (1E) walkActorTo(5,140,232);
[06E2] (80) breakHere();
[06E3] (14) print(5,[Center(),Pos(160,152),Color(12),Text("Stop chaos? The Elders thought they could.")]);
[0719] (AE) WaitForActor(5);
[071C] (A8) if (VAR_HAVE_MSG) {
[0721] (11)   animateCostume(5,4);
[0724] (**) }
[0724] (AE) WaitForMessage();
[0726] (80) breakHere();
[0727] (14) print(5,[Center(),Pos(160,152),Color(12),Text("Now they know better. So should you.")]);
[0757] (AE) WaitForMessage();
[0759] (80) breakHere();
[075A] (14) print(1,[Center(),Pos(160,152),Color(15),Text("If we can't stop the chaos," + newline() + "what CAN we do?")]);
[0792] (AE) WaitForMessage();
[0794] (80) breakHere();
[0795] (5D) setClass(10,[0,150,148]);
[07A2] (14) print(5,[Center(),Pos(160,152),Color(12),Text("We can embrace it." + newline() + "Or ... escape!")]);
[07D0] (AE) WaitForMessage();
[07D2] (80) breakHere();
[07D3] (80) breakHere();
[07D4] (A8) if (Bit[67]) {
[07D9] (14)   print(5,[Center(),Pos(160,152),Color(12),Text("You've already found the Elder's distaff." + wait() + "Good." + wait() + "Never let it out of your grasp!")]);
[0836] (18) } else {
[0839] (14)   print(5,[Center(),Pos(160,152),Color(12),Text("Pick up the Elder's distaff lying here." + newline() + "It is yours now." + wait() + "Never let it out of your grasp!")]);
[089F] (**) }
[089F] (AE) WaitForMessage();
[08A1] (80) breakHere();
[08A2] (14) print(5,[Center(),Pos(160,152),Color(12),Text("You won't be able to weave very" + newline() + "much with it at first, I expect." + wait() + "But as you gain practice," + newline() + "more and more of its power" + newline() + "will reveal itself to you.")]);
[0942] (AE) WaitForMessage();
[0944] (80) breakHere();
[0945] (AE) WaitForMessage();
[0947] (80) breakHere();
[0948] (72) loadRoom(45);
[094A] (32) setCameraAt(160);
[094D] (11) animateCostume(1,249);
[0950] (2D) putActorInRoom(1,45);
[0953] (01) putActor(1,80,156);
[0959] (80) breakHere();
[095A] (1E) walkActorTo(5,178,232);
[0960] (80) breakHere();
[0961] (14) print(5,[Center(),Pos(160,152),Color(12),Text("Leave this island, Loom-Child." + newline() + "It's too small for you now.")]);
[09A8] (AE) WaitForActor(5);
[09AB] (11) animateCostume(5,244);
[09AE] (80) breakHere();
[09AF] (80) breakHere();
[09B0] (A8) if (VAR_HAVE_MSG) {
[09B5] (11)   animateCostume(5,4);
[09B8] (**) }
[09B8] (AE) WaitForMessage();
[09BA] (80) breakHere();
[09BB] (1E) walkActorTo(1,140,132);
[09C1] (80) breakHere();
[09C2] (14) print(5,[Center(),Pos(160,152),Color(12),Text("Your destiny lies beyond the sea!")]);
[09EF] (AE) WaitForMessage();
[09F1] (80) breakHere();
[09F2] (11) animateCostume(5,9);
[09F5] (1A) Local[1] = 1;
[09FA] (80) breakHere();
[09FB] (46) Local[1]++;
[09FE] (44) unless (Local[1] > 7) goto 09FA;
[0A05] (13) ActorOps(5,[WalkSpeed(4,1),InitAnimNr(6),WalkAnimNr(6),StandAnimNr(6),TalkAnimNr(14,14)]);
[0A14] (01) putActor(5,169,222);
[0A1A] (1E) walkActorTo(5,56,197);
[0A20] (80) breakHere();
[0A21] (80) breakHere();
[0A22] (80) breakHere();
[0A23] (80) breakHere();
[0A24] (11) animateCostume(1,246);
[0A27] (0A) startScript(185,[]);
[0A2A] (80) breakHere();
[0A2B] (80) breakHere();
[0A2C] (80) breakHere();
[0A2D] (80) breakHere();
[0A2E] (11) animateCostume(1,244);
[0A31] (AE) WaitForActor(5);
[0A34] (1E) walkActorTo(5,159,172);
[0A3A] (1A) Local[1] = 1;
[0A3F] (80) breakHere();
[0A40] (46) Local[1]++;
[0A43] (44) unless (Local[1] > 10) goto 0A3F;
[0A4A] (11) animateCostume(1,247);
[0A4D] (0A) startScript(166,[]);
[0A50] (AE) WaitForActor(5);
[0A53] (1E) walkActorTo(5,160,152);
[0A59] (AE) WaitForActor(5);
[0A5C] (2D) putActorInRoom(5,0);
[0A5F] (11) animateCostume(10,9);
[0A62] (1A) Local[1] = 1;
[0A67] (80) breakHere();
[0A68] (46) Local[1]++;
[0A6B] (44) unless (Local[1] > 12) goto 0A67;
[0A72] (2D) putActorInRoom(10,0);
[0A75] (AE) WaitForMessage();
[0A77] (80) breakHere();
[0A78] (14) print(1,[Center(),Pos(160,152),Color(15),Text("Wish I knew why everyone keeps" + newline() + "calling me 'Loom-Child.'")]);
[0ABC] (AE) WaitForMessage();
[0ABE] (80) breakHere();
[0ABF] (5D) setClass(609,[152]);
[0AC6] (A8) if (VAR_OVERRIDE) {
[0ACB] (14)   print(255,[Text(" ")]);
[0AD0] (2D)   putActorInRoom(10,0);
[0AD3] (11)   animateCostume(5,255);
[0AD6] (2D)   putActorInRoom(5,0);
[0AD9] (11)   animateCostume(1,255);
[0ADC] (11)   animateCostume(1,251);
[0ADF] (2D)   putActorInRoom(1,45);
[0AE2] (01)   putActor(1,140,156);
[0AE8] (08)   if (VAR_ROOM != 45) {
[0AEF] (72)     loadRoom(45);
[0AF1] (32)     setCameraAt(160);
[0AF4] (18)   } else {
[0AF7] (62)     stopScript(185);
[0AF9] (62)     stopScript(166);
[0AFB] (**)   }
[0AFB] (11)   animateCostume(9,8);
[0AFE] (80)   breakHere();
[0AFF] (**) }
[0AFF] (80) breakHere();
[0B00] (C0) endCutscene();
[0B01] (A0) stopObjectCode();
END

// Script 166
[0000] (5D) setClass(10,[0,150,148]);
[000D] (13) ActorOps(10,[Costume(77),Elevation(100),Palette(14,1)]);
[0018] (11) animateCostume(10,250);
[001B] (2D) putActorInRoom(10,45);
[001E] (01) putActor(10,160,150);
[0024] (11) animateCostume(10,8);
[0027] (1A) Local[0] = 1;
[002C] (80) breakHere();
[002D] (46) Local[0]++;
[0030] (44) unless (Local[0] > 12) goto 002C;
[0037] (A0) stopObjectCode();
END

// Script 167
[0000] (1A) Bit[89] = 1;
[0005] (26) setVarRange(Var[182],4,[0,0,0,0]);
[000D] (5D) setClass(606,[152]);
[0014] (5D) setClass(607,[24,3]);
[001E] (1A) Bit[125] = 0;
[0023] (2D) putActorInRoom(9,0);
[0026] (5D) setClass(609,[152]);
[002D] (5D) setClass(610,[152]);
[0034] (0C) Resource.loadCostume(75);
[0037] (0C) Resource.loadCostume(77);
[003A] (0C) Resource.loadCostume(78);
[003D] (A0) stopObjectCode();
END

// Script 168
[0000] (1A) Var[319] = 1;
[0005] (14) print(1,[Center(),Pos(160,11),Text("It's trying to open!")]);
[0023] (A0) stopObjectCode();
END

// Script 169
[0000] (28) if (!Bit[89]) {
[0005] (78)   if (Var[319] < 2) {
[000C] (40)     cutscene([0]);
[0011] (1A)     Bit[69] = 1;
[0016] (36)     walkActorToObject(1,607);
[001A] (AE)     WaitForActor(1);
[001D] (0A)     startScript(160,[]);
[0020] (80)     breakHere();
[0021] (80)     breakHere();
[0022] (28)     unless (!Bit[72]) goto 0021;
[0027] (09)     faceActor(1,9);
[002B] (80)     breakHere();
[002C] (68)     VAR_RESULT = isScriptRunning(160);
[0030] (28)     unless (!VAR_RESULT) goto 002B;
[0035] (28)     if (!Var[319]) {
[003A] (14)       print(1,[Center(),Text("That egg just made a sound.")]);
[005A] (18)     } else {
[005D] (14)       print(1,[Center(),Text("The egg is opening!")]);
[0075] (**)     }
[0075] (80)     breakHere();
[0076] (36)     walkActorToObject(1,609);
[007A] (AE)     WaitForActor(1);
[007D] (A8)     if (VAR_HAVE_MSG) {
[0082] (11)       animateCostume(1,4);
[0085] (**)     }
[0085] (AE)     WaitForMessage();
[0087] (80)     breakHere();
[0088] (C0)     endCutscene();
[0089] (28)     if (!Var[319]) {
[008E] (42)       chainScript(168,[]);
[0091] (**)     }
[0091] (42)     chainScript(165,[1]);
[0097] (**)   }
[0097] (28) } else if (!Bit[125]) {
[009F] (1A)   Bit[69] = 1;
[00A4] (36)   walkActorToObject(1,607);
[00A8] (**) }
[00A8] (A0) stopObjectCode();
END

// Script 170
[0000] (80) breakHere();
[0001] (80) breakHere();
[0002] (09) faceActor(1,5);
[0006] (18) goto 0000;
[0009] (A0) stopObjectCode();
END

// Script 173
[0000] (1A) Bit[107] = 1;
[0005] (1A) Bit[108] = 0;
[000A] (1A) Bit[109] = 0;
[000F] (5D) setClass(612,[24]);
[0016] (5D) setClass(613,[152]);
[001D] (5D) setClass(622,[24]);
[0024] (5D) setClass(5,[0]);
[002B] (13) ActorOps(5,[Costume(75),Elevation(0),WalkSpeed(2,1),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3),TalkAnimNr(4,5),TalkColor(12)]);
[0041] (11) animateCostume(5,248);
[0044] (2D) putActorInRoom(5,45);
[0047] (01) putActor(5,230,132);
[004D] (11) animateCostume(5,4);
[0050] (A0) stopObjectCode();
END

// Script 174
[0000] (1A) Bit[108] = 1;
[0005] (1A) Bit[107] = 0;
[000A] (1A) Bit[109] = 0;
[000F] (5D) setClass(612,[24]);
[0016] (5D) setClass(613,[152]);
[001D] (5D) setClass(622,[24]);
[0024] (5D) setClass(5,[0]);
[002B] (13) ActorOps(5,[Costume(75),Elevation(0),WalkSpeed(2,1),InitAnimNr(12),WalkAnimNr(12),StandAnimNr(12),TalkAnimNr(0,0),TalkColor(12)]);
[0041] (11) animateCostume(5,250);
[0044] (2D) putActorInRoom(5,45);
[0047] (01) putActor(5,230,132);
[004D] (11) animateCostume(5,12);
[0050] (A0) stopObjectCode();
END

// Script 176
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (80) breakHere();
[000B] (28) unless (!Bit[72]) goto 000A;
[0010] (1A) Bit[70] = 0;
[0015] (80) breakHere();
[0016] (28) unless (!Bit[71]) goto 0015;
[001B] (80) breakHere();
[001C] (5D) setClass(8,[0,150,148]);
[0029] (13) ActorOps(8,[Costume(31),Elevation(5),Palette(11,14),Palette(3,12),Palette(9,4)]);
[003A] (11) animateCostume(8,250);
[003D] (43) Local[0] = getActorX(5);
[0042] (23) Local[1] = getActorY(5);
[0047] (46) Local[1]++;
[004A] (2D) putActorInRoom(8,45);
[004D] (61) putActor(8,Local[0],Local[1]);
[0053] (11) animateCostume(8,6);
[0056] (1A) Local[2] = 1;
[005B] (80) breakHere();
[005C] (46) Local[2]++;
[005F] (44) unless (Local[2] > 6) goto 005B;
[0066] (11) animateCostume(8,7);
[0069] (1A) Local[2] = 1;
[006E] (80) breakHere();
[006F] (46) Local[2]++;
[0072] (44) unless (Local[2] > 12) goto 006E;
[0079] (11) animateCostume(8,8);
[007C] (1A) Local[2] = 1;
[0081] (80) breakHere();
[0082] (46) Local[2]++;
[0085] (44) unless (Local[2] > 6) goto 0081;
[008C] (2D) putActorInRoom(8,0);
[008F] (80) breakHere();
[0090] (14) print(1,[Center(),Text("Hmm. That didn't do her any good.")]);
[00B6] (80) breakHere();
[00B7] (C0) endCutscene();
[00B8] (A0) stopObjectCode();
END

// Script 179
[0000] (5D) setClass(8,[0,150,148]);
[000D] (13) ActorOps(8,[Costume(31),Elevation(5)]);
[0015] (11) animateCostume(8,250);
[0018] (43) Local[0] = getActorX(5);
[001D] (23) Local[1] = getActorY(5);
[0022] (46) Local[1]++;
[0025] (2D) putActorInRoom(8,45);
[0028] (61) putActor(8,Local[0],Local[1]);
[002E] (11) animateCostume(8,6);
[0031] (1A) Local[2] = 1;
[0036] (80) breakHere();
[0037] (46) Local[2]++;
[003A] (44) unless (Local[2] > 6) goto 0036;
[0041] (11) animateCostume(8,7);
[0044] (1A) Local[2] = 1;
[0049] (80) breakHere();
[004A] (46) Local[2]++;
[004D] (44) unless (Local[2] > 24) goto 0049;
[0054] (11) animateCostume(8,8);
[0057] (1A) Local[2] = 1;
[005C] (80) breakHere();
[005D] (46) Local[2]++;
[0060] (44) unless (Local[2] > 6) goto 005C;
[0067] (2D) putActorInRoom(8,0);
[006A] (80) breakHere();
[006B] (A0) stopObjectCode();
END

// Script 180
[0000] (14) print(5,[Center(),Text("Unmake the Loom, Bobbin! Quickly!")]);
[0026] (AE) WaitForMessage();
[0028] (80) breakHere();
[0029] (14) print(5,[Center(),Text("I can't distract this creature" + newline() + "much longer!")]);
[005A] (AE) WaitForMessage();
[005C] (80) breakHere();
[005D] (14) print(1,[Center(),Text("I need the threads, Mother Hetchel!" + newline() + "Tell me which four to use!")]);
[00A1] (AE) WaitForMessage();
[00A3] (80) breakHere();
[00A4] (A0) stopObjectCode();
END

// Script 182
[0000] (5D) setClass(8,[0,150,148]);
[000D] (13) ActorOps(8,[Costume(31),Elevation(25),Palette(11,14),Palette(3,12),Palette(9,4)]);
[001E] (11) animateCostume(8,250);
[0021] (2D) putActorInRoom(8,45);
[0024] (01) putActor(8,340,0);
[002A] (11) animateCostume(8,6);
[002D] (1A) Local[1] = 1;
[0032] (80) breakHere();
[0033] (43) Local[0] = getActorX(5);
[0038] (5A) Local[0] += 2;
[003D] (41) putActor(8,Local[0],133);
[0043] (46) Local[1]++;
[0046] (44) unless (Local[1] > 6) goto 0032;
[004D] (11) animateCostume(8,7);
[0050] (1A) Local[1] = 1;
[0055] (80) breakHere();
[0056] (43) Local[0] = getActorX(5);
[005B] (41) putActor(8,Local[0],133);
[0061] (46) Local[1]++;
[0064] (44) unless (Local[1] > 12) goto 0055;
[006B] (11) animateCostume(8,8);
[006E] (1A) Local[1] = 1;
[0073] (80) breakHere();
[0074] (43) Local[0] = getActorX(5);
[0079] (41) putActor(8,Local[0],133);
[007F] (46) Local[1]++;
[0082] (44) unless (Local[1] > 6) goto 0073;
[0089] (2D) putActorInRoom(8,0);
[008C] (80) breakHere();
[008D] (A0) stopObjectCode();
END

// Script 183
[0000] (5D) setClass(8,[0,150,148]);
[000D] (13) ActorOps(8,[Costume(31),Elevation(105),Palette(11,14),Palette(3,12),Palette(9,4)]);
[001E] (11) animateCostume(8,250);
[0021] (2D) putActorInRoom(8,45);
[0024] (01) putActor(8,340,0);
[002A] (2A) startScript(112,[13],F);
[0030] (11) animateCostume(8,6);
[0033] (1A) Local[2] = 1;
[0038] (80) breakHere();
[0039] (43) Local[0] = getActorX(5);
[003E] (23) Local[1] = getActorY(5);
[0043] (46) Local[1]++;
[0046] (61) putActor(8,Local[0],Local[1]);
[004C] (46) Local[2]++;
[004F] (44) unless (Local[2] > 6) goto 0038;
[0056] (11) animateCostume(8,7);
[0059] (1A) Local[2] = 1;
[005E] (80) breakHere();
[005F] (43) Local[0] = getActorX(5);
[0064] (23) Local[1] = getActorY(5);
[0069] (46) Local[1]++;
[006C] (61) putActor(8,Local[0],Local[1]);
[0072] (46) Local[2]++;
[0075] (44) unless (Local[2] > 12) goto 005E;
[007C] (11) animateCostume(8,8);
[007F] (1A) Local[2] = 1;
[0084] (80) breakHere();
[0085] (43) Local[0] = getActorX(5);
[008A] (23) Local[1] = getActorY(5);
[008F] (46) Local[1]++;
[0092] (61) putActor(8,Local[0],Local[1]);
[0098] (46) Local[2]++;
[009B] (44) unless (Local[2] > 6) goto 0084;
[00A2] (2D) putActorInRoom(8,0);
[00A5] (80) breakHere();
[00A6] (A0) stopObjectCode();
END

// Script 185
[0000] (14) print(1,[Center(),Pos(160,144),Text("Mother Hetchel! Where are you going?")]);
[002E] (AE) WaitForMessage();
[0030] (80) breakHere();
[0031] (14) print(5,[Center(),Pos(160,144),Text("To follow the swans!")]);
[004F] (80) breakHere();
[0050] (A0) stopObjectCode();
END

// Script 186
[0000] (40) cutscene([1]);
[0005] (72) loadRoom(46);
[0007] (32) setCameraAt(160);
[000A] (5D) setClass(623,[24]);
[0011] (5D) setClass(624,[24]);
[0018] (5D) setClass(625,[24]);
[001F] (5D) setClass(633,[152]);
[0026] (5D) setClass(634,[152]);
[002D] (5D) setClass(1,[0]);
[0034] (5D) setClass(635,[24]);
[003B] (28) if (!Bit[114]) {
[0040] (5D)   setClass(636,[24]);
[0047] (5D)   setClass(637,[24]);
[004E] (5D)   setClass(638,[24]);
[0055] (5D)   setClass(639,[24]);
[005C] (18) } else {
[005F] (5D)   setClass(636,[152]);
[0066] (5D)   setClass(637,[152]);
[006D] (5D)   setClass(638,[152]);
[0074] (5D)   setClass(639,[152]);
[007B] (**) }
[007B] (11) animateCostume(1,251);
[007E] (2D) putActorInRoom(1,46);
[0081] (01) putActor(1,280,120);
[0087] (13) ActorOps(1,[Costume(44),Elevation(0),WalkSpeed(4,2),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[0098] (48) if (VAR_VIDEOMODE == 4) {
[009F] (13)   ActorOps(1,[Palette(8,0),Palette(7,15)]);
[00A8] (**) }
[00A8] (80) breakHere();
[00A9] (1E) walkActorTo(1,280,100);
[00AF] (1A) Local[0] = 1;
[00B4] (80) breakHere();
[00B5] (46) Local[0]++;
[00B8] (44) unless (Local[0] > 10) goto 00B4;
[00BF] (0A) startScript(126,[0,28]);
[00C8] (1E) walkActorTo(1,280,90);
[00CE] (AE) WaitForActor(1);
[00D1] (11) animateCostume(1,246);
[00D4] (80) breakHere();
[00D5] (80) breakHere();
[00D6] (C0) endCutscene();
[00D7] (42) chainScript(200,[]);
[00DA] (A0) stopObjectCode();
END

// Script 187: Loom Initialization
[0000] (1A) VAR_MAINMENU_KEY = 319;
[0005] (72) loadRoom(0);
[0007] (33) SetScreen(16,152)
[000D] (0C) Resource.clearHeap();
[000F] (33) SetScreen(0,144)
[0015] (1A) VAR_CHARINC = 5;
[001A] (1A) VAR_TIMER_NEXT = 6;
[001F] (2C) InitCharset(2);
[0022] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[0027] (1A) VAR_RESTART_KEY = 322;
[002C] (1A) VAR_PAUSE_KEY = 32;
[0031] (1A) VAR_NUM_ACTOR = 99;
[0036] (1A) Var[218] = 1;
[003B] (1A) Var[257] = 0;
[0040] (26) setVarRange(Var[122],7,[0,176,176,176,176,176,176]);
[004B] (26) setVarRange(Var[129],7,[0,152,160,168,176,184,192]);
[0056] (1A) Var[118] = 6;
[005B] (AC) Exprmode VAR_CHARINC = (9 - Var[118]);
[0066] (1A) VAR_ENTRY_SCRIPT = 5;
[006B] (1A) VAR_ENTRY_SCRIPT2 = 6;
[0070] (1A) VAR_EXIT_SCRIPT = 7;
[0075] (1A) VAR_NUM_ACTOR = 12;
[007A] (0C) Resource.clearHeap();
[007C] (1A) VAR_VERB_SCRIPT = 97;
[0081] (1A) VAR_CUTSCENE_START_SCRIPT = 22;
[0086] (1A) VAR_CUTSCENE_END_SCRIPT = 23;
[008B] (1A) VAR_EGO = 1;
[0090] (1A) Var[214] = 28;
[0095] (1A) Var[215] = 29;
[009A] (1A) Var[216] = 30;
[009F] (1A) Var[320] = 646;
[00A4] (1A) Bit[97] = 1;
[00A9] (1A) Bit[100] = 1;
[00AE] (48) if (VAR_SOUNDCARD == 4) {
[00B5] (1A)   Local[1] = 33;
[00BA] (0C)   Resource.lockSound(Local[1]);
[00BE] (0C)   Resource.loadSound(Local[1]);
[00C2] (46)   Local[1]++;
[00C5] (44)   unless (Local[1] > 40) goto 00BA;
[00CC] (18) } else {
[00CF] (1A)   Local[1] = 1;
[00D4] (0C)   Resource.lockSound(Local[1]);
[00D8] (0C)   Resource.loadSound(Local[1]);
[00DC] (46)   Local[1]++;
[00DF] (44)   unless (Local[1] > 8) goto 00D4;
[00E6] (**) }
[00E6] (1A) Bit[79] = 1;
[00EB] (72) loadRoom(36);
[00ED] (0A) startScript(147,[]);
[00F0] (80) breakHere();
[00F1] (68) VAR_RESULT = isScriptRunning(147);
[00F5] (28) unless (!VAR_RESULT) goto 00F0;
[00FA] (58) endOverride();
[00FC] (60) freezeScripts(0);
[00FE] (D2) actorFollowCamera(VAR_EGO);
[0101] (1A) Bit[71] = 0;
[0106] (1A) Var[201] = 0;
[010B] (1A) Bit[79] = 0;
[0110] (2C) CursorShow();
[0112] (2C) UserputOn();
[0114] (1A) VAR_VERB_SCRIPT = 97;
[0119] (42) chainScript(98,[0]);
[011F] (A0) stopObjectCode();
END
