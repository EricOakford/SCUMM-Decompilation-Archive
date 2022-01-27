/**
 * Maniac Mansion: V2 Retail
 * 
 * Global Scripts
 */

// Script 1: Game initialization
[0000] (1A) VAR_NUM_ACTOR = 25;
[0004] (1A) VAR_BACKUP_VERB = 13;
[0008] (1A) VAR_EGO = 3;
[000C] (1A) VAR_TIMER_NEXT = 4;
[0010] (1A) VAR_CUTSCENEEXIT_KEY = 4;
[0014] (1A) VAR_MACHINE_SPEED = 10;
[0018] (13) ActorOps(0,[TalkColor(9)]);
[001C] (40) cutscene();
[001D] (53) ActorOps(1,[Name("Syd")]);
[0025] (13) ActorOps(1,[Sound(6)]);
[0029] (13) ActorOps(1,[Costume(1)]);
[002D] (13) ActorOps(1,[TalkColor(14)]);
[0031] (53) ActorOps(2,[Name("Razor")]);
[003B] (13) ActorOps(2,[Sound(6)]);
[003F] (13) ActorOps(2,[Costume(2)]);
[0043] (13) ActorOps(2,[TalkColor(12)]);
[0047] (53) ActorOps(3,[Name("Dave")]);
[0050] (13) ActorOps(3,[Sound(6)]);
[0054] (13) ActorOps(3,[Costume(3)]);
[0058] (13) ActorOps(3,[Color(3, 1)]);
[005D] (13) ActorOps(3,[TalkColor(9)]);
[0061] (53) ActorOps(4,[Name("Michael")]);
[006D] (13) ActorOps(4,[Sound(6)]);
[0071] (13) ActorOps(4,[Costume(4)]);
[0075] (13) ActorOps(4,[TalkColor(6)]);
[0079] (53) ActorOps(5,[Name("Bernard")]);
[0085] (13) ActorOps(5,[Sound(6)]);
[0089] (13) ActorOps(5,[Costume(5)]);
[008D] (13) ActorOps(5,[TalkColor(15)]);
[0091] (53) ActorOps(6,[Name("Wendy")]);
[009B] (13) ActorOps(6,[Sound(6)]);
[009F] (13) ActorOps(6,[Costume(6)]);
[00A3] (13) ActorOps(6,[TalkColor(13)]);
[00A7] (53) ActorOps(7,[Name("Jeff")]);
[00B0] (13) ActorOps(7,[Sound(0)]);
[00B4] (13) ActorOps(7,[Costume(7)]);
[00B8] (13) ActorOps(7,[TalkColor(14)]);
[00BC] (53) ActorOps(8,[Name()]);
[00C1] (13) ActorOps(8,[Sound(6)]);
[00C5] (13) ActorOps(8,[Costume(8)]);
[00C9] (13) ActorOps(8,[TalkColor(14)]);
[00CD] (53) ActorOps(23,[Name("Sandy")]);
[00D7] (13) ActorOps(23,[Sound(6)]);
[00DB] (13) ActorOps(23,[Costume(23)]);
[00DF] (13) ActorOps(23,[TalkColor(14)]);
[00E3] (53) ActorOps(9,[Name("Dr Fred")]);
[00EF] (13) ActorOps(9,[Sound(6)]);
[00F3] (13) ActorOps(9,[Costume(9)]);
[00F7] (13) ActorOps(9,[TalkColor(15)]);
[00FB] (53) ActorOps(10,[Name("Nurse Edna")]);
[010A] (13) ActorOps(10,[Sound(6)]);
[010E] (13) ActorOps(10,[Costume(10)]);
[0112] (13) ActorOps(10,[TalkColor(7)]);
[0116] (53) ActorOps(11,[Name("Weird Ed")]);
[0123] (13) ActorOps(11,[Sound(6)]);
[0127] (13) ActorOps(11,[Costume(11)]);
[012B] (13) ActorOps(11,[TalkColor(2)]);
[012F] (53) ActorOps(12,[Name("Dead Cousin Ted")]);
[0143] (13) ActorOps(12,[Sound(6)]);
[0147] (13) ActorOps(12,[Costume(12)]);
[014B] (13) ActorOps(12,[TalkColor(15)]);
[014F] (53) ActorOps(13,[Name("Purple Tentacle")]);
[0163] (13) ActorOps(13,[Sound(63)]);
[0167] (13) ActorOps(13,[Costume(13)]);
[016B] (13) ActorOps(13,[TalkColor(5)]);
[016F] (53) ActorOps(14,[Name("Green Tentacle")]);
[0182] (13) ActorOps(14,[Sound(63)]);
[0186] (13) ActorOps(14,[Costume(14)]);
[018A] (13) ActorOps(14,[TalkColor(10)]);
[018E] (53) ActorOps(15,[Name()]);
[0193] (13) ActorOps(15,[Sound(6)]);
[0197] (13) ActorOps(15,[Costume(15)]);
[019B] (13) ActorOps(15,[TalkColor(10)]);
[019F] (53) ActorOps(16,[Name("Meteor")]);
[01AA] (13) ActorOps(16,[Sound(6)]);
[01AE] (13) ActorOps(16,[Costume(16)]);
[01B2] (13) ActorOps(16,[TalkColor(5)]);
[01B6] (53) ActorOps(17,[Name()]);
[01BB] (13) ActorOps(17,[Sound(6)]);
[01BF] (13) ActorOps(17,[Costume(17)]);
[01C3] (13) ActorOps(17,[TalkColor(9)]);
[01C7] (53) ActorOps(18,[Name()]);
[01CC] (13) ActorOps(18,[Sound(0)]);
[01D0] (13) ActorOps(18,[Costume(18)]);
[01D4] (13) ActorOps(18,[TalkColor(9)]);
[01D8] (53) ActorOps(19,[Name("Plant")]);
[01E2] (13) ActorOps(19,[Sound(0)]);
[01E6] (13) ActorOps(19,[Costume(19)]);
[01EA] (13) ActorOps(19,[TalkColor(10)]);
[01EE] (53) ActorOps(20,[Name()]);
[01F3] (13) ActorOps(20,[Sound(0)]);
[01F7] (13) ActorOps(20,[Costume(20)]);
[01FB] (53) ActorOps(21,[Name()]);
[0200] (13) ActorOps(21,[Sound(0)]);
[0204] (13) ActorOps(21,[Costume(21)]);
[0208] (53) ActorOps(22,[Name()]);
[020D] (13) ActorOps(22,[Costume(22)]);
[0211] (13) ActorOps(22,[Sound(0)]);
[0215] (60) cursorCommand(31, 3);
[0218] (0C) loadSound(58)
[021B] (0C) loadScript(2)
[021E] (0C) lockScript(2)
[0221] (0C) loadScript(4)
[0224] (0C) lockScript(4)
[0227] (0C) loadScript(164)
[022A] (0C) lockScript(164)
[022D] (0C) loadScript(5)
[0230] (0C) lockScript(5)
[0233] (0C) loadSound(6)
[0236] (0C) lockSound(6)
[0239] (0C) loadSound(8)
[023C] (0C) loadSound(9)
[023F] (0C) loadSound(38)
[0242] (0C) loadRoom(44)
[0245] (0C) loadScript(131)
[0248] (1A) Var[47] = 3;
[024C] (72) loadRoom(45);
[024E] (1A) Var[110] = 0;
[0252] (1A) Var[111] = 1;
[0256] (2E) delay(60);
[025A] (14) print(255,"   Copyright 1987, 1988 Lucasfilm Ltd. \x01           All rights reserved.        ");
[029A] (58) beginOverride();
[029B] (18) goto 0303;
[029E] (42) startScript(177);
[02A0] (16) Var[67] = getRandomNr(1);
[02A3] (48) if (VAR_HAVE_MSG == 0) {
[02A9] (2E)   delay(120);
[02AD] (48)   if (VAR_HAVE_MSG == 0) {
[02B3] (48)     if (Var[111] == 1) {
[02B9] (14)       print(255,"      Please select two other kids.");
[02D8] (**)     }
[02D8] (48)     if (Var[111] == 2) {
[02DE] (14)       print(255,"      Please select one other kid.");
[02FC] (**)     }
[02FC] (**)   }
[02FC] (**) }
[02FC] (80) breakHere();
[02FD] (48) unless (Var[110] == 1) goto 02A0;
[0303] (78) if (Var[111] < 3) {
[0309] (19)   doSentence(9,403,0,0);
[0310] (18)   goto 0256;
[0313] (**) }
[0313] (C0) endCutscene();
[0314] (72) loadRoom(0);
[0316] (0C) loadSound(58)
[0319] (0C) lockSound(58)
[031C] (8C) loadCostume(Var[47])
[031F] (8C) loadCostume(Var[48])
[0322] (8C) loadCostume(Var[49])
[0325] (60) cursorCommand(15, 2);
[0328] (48) if (Var[110] == 1) {
[032E] (42)   startScript(120);
[0330] (80)   breakHere();
[0331] (68)   VAR_RESULT = isScriptRunning(120);
[0334] (48)   unless (VAR_RESULT == 0) goto 0330;
[033A] (**) }
[033A] (0C) unlockSound(58)
[033D] (AD) putActorInRoom(Var[47],44);
[0340] (81) putActor(Var[47],24,59);
[0344] (AD) putActorInRoom(Var[48],44);
[0347] (81) putActor(Var[48],29,57);
[034B] (AD) putActorInRoom(Var[49],44);
[034E] (81) putActor(Var[49],34,61);
[0352] (2D) putActorInRoom(12,24);
[0355] (01) putActor(12,30,48);
[0359] (2D) putActorInRoom(11,26);
[035C] (01) putActor(11,10,52);
[0360] (1A) Var[164] = 1;
[0364] (1A) VAR_ACTOR_RANGE_MIN = 1;
[0368] (1A) VAR_ACTOR_RANGE_MAX = 8;
[036C] (1B) setBitVar(2872,44,1);
[0371] (1B) setBitVar(2872,1,1);
[0376] (1B) setBitVar(2872,4,1);
[037B] (1B) setBitVar(2872,6,1);
[0380] (1B) setBitVar(2872,2,1);
[0385] (1B) setBitVar(2872,16,1);
[038A] (1B) setBitVar(2872,30,1);
[038F] (1B) setBitVar(2872,31,1);
[0394] (1B) setBitVar(2872,51,1);
[0399] (1B) setBitVar(2816,8,1);
[039E] (1B) setBitVar(2816,5,1);
[03A3] (1B) setBitVar(2816,9,1);
[03A8] (1B) setBitVar(2816,15,1);
[03AD] (1B) setBitVar(2816,22,1);
[03B2] (1B) setBitVar(2816,23,1);
[03B7] (16) Var[111] = getRandomNr(4);
[03BA] (48) if (Var[111] == 0) {
[03C0] (26)   setVarRange(Var[51],4,[5,2,3,5]);
[03C7] (**) }
[03C7] (48) if (Var[111] == 1) {
[03CD] (26)   setVarRange(Var[51],4,[1,5,4,7]);
[03D4] (07)   setState08(119);
[03D7] (**) }
[03D7] (48) if (Var[111] == 2) {
[03DD] (26)   setVarRange(Var[51],4,[2,2,7,5]);
[03E4] (07)   setState08(120);
[03E7] (**) }
[03E7] (48) if (Var[111] == 3) {
[03ED] (26)   setVarRange(Var[51],4,[3,4,4,4]);
[03F4] (07)   setState08(121);
[03F7] (**) }
[03F7] (48) if (Var[111] == 4) {
[03FD] (26)   setVarRange(Var[51],4,[7,5,3,7]);
[0404] (07)   setState08(122);
[0407] (**) }
[0407] (16) Var[111] = getRandomNr(4);
[040A] (48) if (Var[111] == 0) {
[0410] (26)   setVarRange(Var[55],4,[3,6,2,1]);
[0417] (**) }
[0417] (48) if (Var[111] == 1) {
[041D] (26)   setVarRange(Var[55],4,[0,1,2,0]);
[0424] (07)   setState08(173);
[0427] (**) }
[0427] (48) if (Var[111] == 2) {
[042D] (26)   setVarRange(Var[55],4,[1,2,3,0]);
[0434] (07)   setState08(174);
[0437] (**) }
[0437] (48) if (Var[111] == 3) {
[043D] (26)   setVarRange(Var[55],4,[1,0,2,9]);
[0444] (07)   setState08(175);
[0447] (**) }
[0447] (48) if (Var[111] == 4) {
[044D] (26)   setVarRange(Var[55],4,[4,1,8,6]);
[0454] (07)   setState08(220);
[0457] (**) }
[0457] (16) Var[76] = getRandomNr(4);
[045A] (48) if (Var[76] == 0) {
[0460] (26)   setVarRange(Var[77],4,[3,4,1,2]);
[0467] (**) }
[0467] (48) if (Var[76] == 1) {
[046D] (26)   setVarRange(Var[77],4,[1,1,3,8]);
[0474] (**) }
[0474] (48) if (Var[76] == 2) {
[047A] (26)   setVarRange(Var[77],4,[9,1,1,1]);
[0481] (**) }
[0481] (48) if (Var[76] == 3) {
[0487] (26)   setVarRange(Var[77],4,[1,9,7,7]);
[048E] (**) }
[048E] (48) if (Var[76] == 4) {
[0494] (26)   setVarRange(Var[77],4,[0,5,2,5]);
[049B] (**) }
[049B] (42) startScript(131);
[049D] (A0) stopObjectCode();
END

// Script 2
[0000] (C8) if (Var[203] == VAR_ACTIVE_OBJECT2) {
[0005] (C8)   if (Var[204] == VAR_ACTIVE_OBJECT1) {
[000A] (46)     Var[45]++;
[000C] (44)     if (Var[45] > 6) {
[0012] (1A)       Var[45] = 0;
[0016] (4A)       chainScript(3);
[0018] (**)     }
[0018] (18)     goto 001F;
[001B] (**)   }
[001B] (**) }
[001B] (1A) Var[45] = 0;
[001F] (9A) Var[203] = VAR_ACTIVE_OBJECT1;
[0022] (9A) Var[204] = VAR_ACTIVE_OBJECT2;
[0025] (28) if (!VAR_ACTIVE_OBJECT1) {
[0029] (62)   stopScript(0);
[002B] (**) }
[002B] (48) if (VAR_ACTIVE_VERB == 7) {
[0031] (48) } else if (VAR_ACTIVE_VERB == 3) {
[003A] (04)   if (VAR_ACTIVE_OBJECT2 <= 25) {
[0040] (90)     VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0043] (48)     if (VAR_RESULT == 15) {
[0049] (18)       goto 00EE;
[004C] (**)     }
[004C] (B1)     VAR_RESULT = getBitVar(2952,VAR_EGO);
[0051] (48)     if (VAR_RESULT == 0) {
[0057] (CD)       walkActorToActor(VAR_EGO,VAR_ACTIVE_OBJECT2,4);
[005B] (**)     }
[005B] (BB)     waitForActor(VAR_EGO);
[005D] (F4)     VAR_RESULT = getDist(VAR_EGO,VAR_ACTIVE_OBJECT2);
[0061] (04)     if (VAR_RESULT <= 4) {
[0067] (08)       if (VAR_ACTIVE_OBJECT2 != 19) {
[006D] (C9)         faceActor(VAR_ACTIVE_OBJECT2,VAR_EGO);
[0070] (**)       }
[0070] (C9)       faceActor(VAR_EGO,VAR_ACTIVE_OBJECT2);
[0073] (A8)       if (VAR_VERB_ALLOWED) {
[0077] (79)         doSentence(3,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,1);
[007C] (19)         doSentence(RESET);
[007E] (18)         goto 01AE;
[0081] (78)       } else if (VAR_ACTIVE_OBJECT2 < 8) {
[008A] (E9)         setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[008D] (18)       } else {
[0090] (4A)         chainScript(3);
[0092] (**)       }
[0092] (18)     } else {
[0095] (D8)       printEgo("I'd better get closer.");
[00AA] (**)     }
[00AA] (18)     goto 01AE;
[00AD] (**)   }
[00AD] (**) }
[00AD] (28) if (!VAR_VERB_ALLOWED) {
[00B1] (B1)   VAR_RESULT = getBitVar(2952,VAR_EGO);
[00B6] (48)   if (VAR_RESULT == 0) {
[00BC] (90)     VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[00BF] (48)     if (VAR_RESULT == 15) {
[00C5] (F6)       walkActorToObject(VAR_EGO,VAR_ACTIVE_OBJECT1);
[00C8] (**)     }
[00C8] (**)   }
[00C8] (BB)   waitForActor(VAR_EGO);
[00CA] (08)   if (VAR_ACTIVE_VERB != 13) {
[00D0] (4A)     chainScript(3);
[00D2] (**)   }
[00D2] (18) } else {
[00D5] (08)   if (VAR_ACTIVE_VERB != 12) {
[00DB] (08)     if (VAR_ACTIVE_VERB != 14) {
[00E1] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[00E4] (48)       if (VAR_RESULT == 15) {
[00EA] (FF)         if (getState01(VAR_ACTIVE_OBJECT1)) {
[00EE] (F9)           doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[00F3] (59)           doSentence(14,VAR_ACTIVE_OBJECT1,0,0);
[00F9] (18)           goto 01AE;
[00FC] (**)         }
[00FC] (**)       }
[00FC] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT2);
[00FF] (48)       if (VAR_RESULT == 15) {
[0105] (FF)         if (getState01(VAR_ACTIVE_OBJECT2)) {
[0109] (F9)           doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[010E] (59)           doSentence(14,VAR_ACTIVE_OBJECT2,0,0);
[0114] (18)           goto 01AE;
[0117] (**)         }
[0117] (**)       }
[0117] (**)     }
[0117] (48)   } else if (VAR_CURRENT_LIGHTS == 0) {
[0120] (D8)     printEgo("It's too dark to read.");
[0134] (**)   }
[0134] (08)   if (Var[21] != 3) {
[013A] (08)     if (Var[21] != 4) {
[0140] (9A)       Var[22] = VAR_ACTIVE_OBJECT1;
[0143] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0146] (08)       if (VAR_RESULT != 15) {
[014C] (08)         if (VAR_ACTIVE_OBJECT2 != 0) {
[0152] (90)           VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT2);
[0155] (48)           if (VAR_RESULT == 15) {
[015B] (9A)             Var[22] = VAR_ACTIVE_OBJECT2;
[015E] (**)           }
[015E] (**)         }
[015E] (**)       }
[015E] (B1)       VAR_RESULT = getBitVar(2952,VAR_EGO);
[0163] (48)       if (VAR_RESULT == 0) {
[0169] (90)         VAR_RESULT = getObjectOwner(Var[22]);
[016C] (48)         if (VAR_RESULT == 15) {
[0172] (F6)           walkActorToObject(VAR_EGO,Var[22]);
[0175] (BB)           waitForActor(VAR_EGO);
[0177] (**)         }
[0177] (**)       }
[0177] (F4)       VAR_RESULT = getDist(VAR_EGO,Var[22]);
[017B] (44)       if (VAR_RESULT > 2) {
[0181] (F4)         Var[109] = getDist(VAR_EGO,Var[22]);
[0185] (D8)         printEgo("I can't reach it.");
[0195] (62)         stopScript(2);
[0197] (**)       }
[0197] (B1)       VAR_RESULT = getBitVar(2952,VAR_EGO);
[019C] (A8)       if (VAR_RESULT) {
[01A0] (48)         if (VAR_ACTIVE_VERB == 13) {
[01A6] (18)           goto 01AE;
[01A9] (**)         }
[01A9] (**)       }
[01A9] (**)     }
[01A9] (**)   }
[01A9] (F9)   doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,1);
[01AE] (**) }
[01AE] (F9) doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,2);
[01B3] (A0) stopObjectCode();
END

// Script 3: Verb Defaults
[0000] (48) if (VAR_ACTIVE_VERB == 1) {
[0006] (D8)   printEgo("It doesn't seem to open.");
[001C] (48) } else if (VAR_ACTIVE_VERB == 9) {
[0025] (18)   goto 0031;
[0028] (48) } else if (VAR_ACTIVE_VERB == 10) {
[0031] (D8)   printEgo("I can't move it.");
[0040] (48) } else if (VAR_ACTIVE_VERB == 12) {
[0049] (D8)   printEgo("There's nothing to read on it.");
[0064] (48) } else if (VAR_ACTIVE_VERB == 14) {
[006D] (D8)   printEgo("I can't pick that up.");
[0080] (18) } else {
[0083] (D8)   printEgo("That doesn't seem to work.");
[009B] (**) }
[009B] (19) doSentence(STOP);
[009D] (19) doSentence(RESET);
[009F] (F9) doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,2);
[00A4] (A0) stopObjectCode();
END

// Script 4: Key Commands
[0000] (48) if (VAR_CLICK_AREA == 4) {
[0006] (48)   if (VAR_KEYPRESS == 62) {
[000C] (46)     Var[200]++;
[000E] (14)     print(255,"sound \x04\xC8");
[0018] (20)     stopMusic();
[0019] (20)     stopMusic();
[001A] (9C)     startSound(Var[200]);
[001C] (62)     stopScript(0);
[001E] (**)   }
[001E] (48)   if (VAR_KEYPRESS == 60) {
[0024] (C6)     Var[200]--;
[0026] (14)     print(255,"sound \x04\xC8");
[0030] (20)     stopMusic();
[0031] (20)     stopMusic();
[0032] (9C)     startSound(Var[200]);
[0034] (62)     stopScript(0);
[0036] (**)   }
[0036] (**) }
[0036] (1A) Var[34] = 0;
[003A] (48) if (Var[21] == 3) {
[0040] (1A)   Var[34] = 1;
[0044] (**) }
[0044] (48) if (VAR_CLICK_AREA == 4) {
[004A] (48)   if (VAR_KEYPRESS == 8) {
[0050] (98)     restart();
[0051] (48)   } else if (VAR_KEYPRESS == 13) {
[005A] (1A)     Var[34] = 1;
[005E] (48)   } else if (VAR_KEYPRESS == 5) {
[0067] (48)     if (VAR_ROOM == 45) {
[006D] (4A)       chainScript(163);
[006F] (**)     }
[006F] (48)     if (Var[21] == 1) {
[0075] (48)       if (Var[175] == 0) {
[007B] (4A)         chainScript(163);
[007D] (18)       } else {
[0080] (14)         print(255,"The Meteor has control of your computer\x01and he won't let you save the game.");
[00C1] (**)       }
[00C1] (**)     }
[00C1] (18)     /* goto 00C4; */
[00C4] (**)   }
[00C4] (48)   if (Var[21] == 1) {
[00CA] (48)     if (Var[175] == 0) {
[00D0] (48)       if (VAR_KEYPRESS == 1) {
[00D6] (42)         startScript(164);
[00D8] (9A)         VAR_EGO = Var[47];
[00DB] (D2)         actorFollowCamera(VAR_EGO);
[00DD] (19)         doSentence(STOP);
[00DF] (18)         goto 02EF;
[00E2] (48)       } else if (VAR_KEYPRESS == 2) {
[00EB] (42)         startScript(164);
[00ED] (9A)         VAR_EGO = Var[48];
[00F0] (D2)         actorFollowCamera(VAR_EGO);
[00F2] (19)         doSentence(STOP);
[00F4] (18)         goto 02EF;
[00F7] (48)       } else if (VAR_KEYPRESS == 3) {
[0100] (42)         startScript(164);
[0102] (9A)         VAR_EGO = Var[49];
[0105] (D2)         actorFollowCamera(VAR_EGO);
[0107] (19)         doSentence(STOP);
[0109] (18)         goto 02EF;
[010C] (18)         /* goto 010F; */
[010F] (**)       }
[010F] (**)     }
[010F] (**)   }
[010F] (**) }
[010F] (48) if (VAR_CLICK_AREA == 1) {
[0115] (A8)   if (VAR_SENTENCE_PREPOSITION) {
[0119] (18)   } else {
[011C] (48)     if (VAR_CLICK_VERB == 7) {
[0122] (28)       if (!Var[175]) {
[0126] (42)         startScript(165);
[0128] (18)         goto 02EF;
[012B] (**)       }
[012B] (**)     }
[012B] (48)     unless (VAR_CLICK_VERB == 3) goto 0133;
[0131] (**)   }
[0131] (19)   doSentence(RESET);
[0133] (48)   if (VAR_CLICK_VERB == 15) {
[0139] (1A)     VAR_SENTENCE_VERB = 15;
[013D] (99)     doSentence(VAR_SENTENCE_VERB,0,0,2);
[0144] (78)     if (VAR_VIRT_MOUSE_Y < 67) {
[014A] (F5)       VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[014E] (88)       if (VAR_CLICK_OBJECT != VAR_SENTENCE_OBJECT1) {
[0153] (9A)         VAR_SENTENCE_OBJECT1 = VAR_CLICK_OBJECT;
[0156] (D9)         doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,0,2);
[015C] (**)       }
[015C] (**)     }
[015C] (80)     breakHere();
[015D] (18)     goto 0144;
[0160] (**)   }
[0160] (48)   if (VAR_CLICK_VERB == 7) {
[0166] (1A)     VAR_SENTENCE_PREPOSITION = 4;
[016A] (9A)     VAR_SENTENCE_VERB = VAR_CLICK_VERB;
[016D] (**)   }
[016D] (28)   if (!Var[175]) {
[0171] (48)     if (VAR_CLICK_VERB == 20) {
[0177] (18)       goto 00D6;
[017A] (**)     }
[017A] (48)     if (VAR_CLICK_VERB == 21) {
[0180] (18)       goto 00EB;
[0183] (**)     }
[0183] (48)     if (VAR_CLICK_VERB == 22) {
[0189] (18)       goto 0100;
[018C] (**)     }
[018C] (**)   }
[018C] (C8)   if (VAR_SENTENCE_VERB == VAR_CLICK_VERB) {
[0191] (1A)     Var[34] = 1;
[0195] (18)   } else {
[0198] (9A)     VAR_SENTENCE_VERB = VAR_CLICK_VERB;
[019B] (**)   }
[019B] (18) } else {
[019E] (48)   if (VAR_CLICK_AREA == 2) {
[01A4] (48)     if (VAR_SENTENCE_VERB == 13) {
[01AA] (1A)       Var[34] = 1;
[01AE] (**)     }
[01AE] (48)     if (VAR_SENTENCE_VERB == 15) {
[01B4] (19)       doSentence(RESET);
[01B6] (1A)       Var[34] = 0;
[01BA] (**)     }
[01BA] (48)     if (VAR_SENTENCE_VERB == 3) {
[01C0] (A8)       if (VAR_SENTENCE_PREPOSITION) {
[01C4] (D5)         VAR_CLICK_OBJECT = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01C8] (18)       } else {
[01CB] (F5)         VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01CF] (**)       }
[01CF] (08)     } else if (VAR_SENTENCE_VERB != 7) {
[01D8] (F5)       VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01DC] (**)     }
[01DC] (**)   }
[01DC] (28)   if (!VAR_CLICK_OBJECT) {
[01E0] (48)     if (VAR_SENTENCE_VERB == 13) {
[01E6] (19)       doSentence(RESET);
[01E8] (1A)       Var[34] = 1;
[01EC] (**)     }
[01EC] (A8)   } else if (VAR_SENTENCE_PREPOSITION) {
[01F3] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT2) {
[01F8] (1A)       Var[34] = 1;
[01FC] (**)     }
[01FC] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT1) {
[0201] (1A)       VAR_CLICK_OBJECT = 0;
[0205] (**)     }
[0205] (48)     if (VAR_SENTENCE_VERB == 3) {
[020B] (44)       if (VAR_CLICK_OBJECT > 25) {
[0211] (1A)         VAR_CLICK_OBJECT = 0;
[0215] (**)       }
[0215] (**)     }
[0215] (9A)     VAR_SENTENCE_OBJECT2 = VAR_CLICK_OBJECT;
[0218] (18)   } else {
[021B] (1A)     VAR_SENTENCE_OBJECT2 = 0;
[021F] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT1) {
[0224] (1A)       Var[34] = 1;
[0228] (**)     }
[0228] (9A)     VAR_SENTENCE_OBJECT1 = VAR_CLICK_OBJECT;
[022B] (**)   }
[022B] (**) }
[022B] (48) if (VAR_SENTENCE_VERB == 14) {
[0231] (90)   VAR_RESULT = getObjectOwner(VAR_SENTENCE_OBJECT1);
[0234] (08)   if (VAR_RESULT != 15) {
[023A] (1A)     VAR_SENTENCE_OBJECT1 = 0;
[023E] (**)   }
[023E] (**) }
[023E] (48) if (VAR_SENTENCE_VERB == 11) {
[0244] (A8)   if (VAR_SENTENCE_OBJECT1) {
[0248] (EC)     VAR_SENTENCE_PREPOSITION = getObjPreposition(VAR_SENTENCE_OBJECT1);
[024B] (28)     if (!VAR_SENTENCE_PREPOSITION) {
[024F] (1A)       VAR_SENTENCE_OBJECT2 = 0;
[0253] (**)     }
[0253] (**)   }
[0253] (**) }
[0253] (48) if (VAR_SENTENCE_VERB == 3) {
[0259] (A8)   if (VAR_SENTENCE_OBJECT1) {
[025D] (1A)     VAR_SENTENCE_PREPOSITION = 4;
[0261] (**)   }
[0261] (**) }
[0261] (48) if (VAR_SENTENCE_VERB == 8) {
[0267] (A8)   if (VAR_SENTENCE_OBJECT1) {
[026B] (1A)     VAR_SENTENCE_PREPOSITION = 2;
[026F] (**)   }
[026F] (**) }
[026F] (48) if (VAR_SENTENCE_VERB == 6) {
[0275] (A8)   if (VAR_SENTENCE_OBJECT1) {
[0279] (1A)     VAR_SENTENCE_PREPOSITION = 2;
[027D] (**)   }
[027D] (**) }
[027D] (38) if (VAR_SENTENCE_VERB >= 35) {
[0283] (04)   if (VAR_SENTENCE_VERB <= 44) {
[0289] (18)     goto 02BA;
[028C] (**)   }
[028C] (**) }
[028C] (08) if (Var[21] != 3) {
[0292] (F9)   doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,2);
[0297] (**) }
[0297] (A8) if (Var[34]) {
[029B] (A8)   if (VAR_SENTENCE_VERB) {
[029F] (48)     if (VAR_SENTENCE_VERB == 7) {
[02A5] (18)     } else {
[02A8] (A8)       unless (VAR_SENTENCE_OBJECT1) goto 02C4;
[02AC] (A8)       if (VAR_SENTENCE_PREPOSITION) {
[02B0] (A8)         if (VAR_SENTENCE_OBJECT2) {
[02B4] (18)         } else {
[02B7] (18)           goto 02C1;
[02BA] (**)         }
[02BA] (**)       }
[02BA] (**)     }
[02BA] (19)     doSentence(STOP);
[02BC] (F9)     doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,0);
[02C1] (18)     goto 02E7;
[02C4] (08)     if (Var[21] != 3) {
[02CA] (48)       if (VAR_SENTENCE_VERB == 13) {
[02D0] (B1)         VAR_RESULT = getBitVar(2952,VAR_EGO);
[02D5] (48)         if (VAR_RESULT == 0) {
[02DB] (48)           if (VAR_CLICK_AREA == 2) {
[02E1] (19)             doSentence(STOP);
[02E3] (FE)             walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[02E7] (**)           }
[02E7] (**)         }
[02E7] (**)       }
[02E7] (**)     }
[02E7] (**)   }
[02E7] (08)   if (VAR_SENTENCE_VERB != 13) {
[02ED] (19)     doSentence(RESET);
[02EF] (**)   }
[02EF] (**) }
[02EF] (1A) VAR_CLICK_VERB = 0;
[02F3] (1A) VAR_CLICK_OBJECT = 0;
[02F7] (A0) stopObjectCode();
END

// Script 5: (does nothing)
[0000] (A0) stopObjectCode();
END

// no scripts 6-8

// Script 9: Demo Tour
[0000] (40) cutscene();
[0001] (1A) VAR_TIMER_NEXT = 4;
[0005] (1A) VAR_CUTSCENEEXIT_KEY = 4;
[0009] (1B) setBitVar(2816,5,1);
[000E] (47) clearState08(106);
[0011] (47) clearState08(44);
[0014] (47) clearState08(43);
[0017] (47) clearState08(42);
[001A] (47) clearState08(41);
[001D] (47) clearState08(40);
[0020] (47) clearState08(70);
[0023] (47) clearState08(71);
[0026] (47) clearState08(126);
[0029] (47) clearState08(135);
[002C] (0C) loadSound(63)
[002F] (0C) lockSound(63)
[0032] (0C) loadSound(12)
[0035] (0C) lockSound(12)
[0038] (0C) loadScript(172)
[003B] (0C) lockScript(172)
[003E] (0C) loadScript(171)
[0041] (0C) lockScript(171)
[0044] (0C) lockScript(55)
[0047] (0C) loadCostume(3)
[004A] (0C) lockCostume(3)
[004D] (0C) loadSound(8)
[0050] (0C) lockSound(8)
[0053] (0C) loadSound(9)
[0056] (0C) lockSound(9)
[0059] (0C) loadScript(10)
[005C] (0C) lockScript(10)
[005F] (0C) loadScript(11)
[0062] (0C) lockScript(11)
[0065] (0C) loadSound(50)
[0068] (0C) lockSound(50)
[006B] (0C) loadSound(57)
[006E] (0C) lockSound(57)
[0071] (0C) loadSound(36)
[0074] (0C) lockSound(36)
[0077] (0C) loadScript(4)
[007A] (0C) loadRoom(33)
[007D] (0C) loadScript(5)
[0080] (0C) loadSound(56)
[0083] (0C) loadSound(58)
[0086] (0C) loadSound(1)
[0089] (0C) loadRoom(1)
[008C] (0C) loadSound(39)
[008F] (0C) loadScript(57)
[0092] (0C) loadRoom(10)
[0095] (0C) loadScript(24)
[0098] (0C) loadScript(55)
[009B] (0C) loadSound(28)
[009E] (0C) loadRoom(31)
[00A1] (0C) loadScript(170)
[00A4] (0C) loadScript(169)
[00A7] (0C) loadCostume(9)
[00AA] (0C) loadCostume(10)
[00AD] (0C) loadCostume(11)
[00B0] (0C) loadCostume(13)
[00B3] (0C) loadRoom(3)
[00B6] (0C) loadCostume(23)
[00B9] (0C) loadScript(21)
[00BC] (0C) loadSound(26)
[00BF] (0C) loadRoom(5)
[00C2] (0C) loadScript(35)
[00C5] (0C) loadScript(31)
[00C8] (0C) loadScript(34)
[00CB] (0C) loadScript(33)
[00CE] (0C) loadSound(21)
[00D1] (0C) loadSound(46)
[00D4] (0C) loadSound(22)
[00D7] (0C) loadSound(23)
[00DA] (0C) loadSound(24)
[00DD] (42) startScript(175);
[00DF] (42) startScript(173);
[00E1] (80) breakHere();
[00E2] (68) VAR_RESULT = isScriptRunning(175);
[00E5] (48) unless (VAR_RESULT == 0) goto 00E1;
[00EB] (62) stopScript(173);
[00ED] (2D) putActorInRoom(3,1);
[00F0] (01) putActor(3,18,58);
[00F4] (72) loadRoom(1);
[00F6] (52) actorFollowCamera(3);
[00F8] (7A) VerbOps(New-3(0,20,2,0,"         Lucasfilm Games Presents"));
[0120] (7A) VerbOps(New-3(0,21,3,0," "));
[0128] (7A) VerbOps(New-3(0,22,4,0,"             MANIAC MANSION"));
[014A] (7A) VerbOps(New-3(0,23,5,0," "));
[0152] (60) cursorCommand(132, 0);
[0155] (11) animateActor(3,250);
[0158] (2E) delay(120);
[015C] (1E) walkActorTo(3,18,70);
[0160] (3B) waitForActor(3);
[0162] (13) ActorOps(3,[TalkColor(1)]);
[0166] (14) print(3,"Hello, and welcome to Maniac Mansion,\x01an exciting new game from Lucasfilm.");
[01A9] (AE) waitForMessage();
[01AA] (14) print(3,"I'm Dave Miller, your personal guide\x01and one of the stars of the adventure.");
[01EC] (AE) waitForMessage();
[01ED] (1E) walkActorTo(3,59,58);
[01F1] (14) print(3,"Here's where Sandy was held captive,\x01and where we rescued her from Dr. Fred.");
[0234] (3B) waitForActor(3);
[0236] (11) animateActor(3,246);
[0239] (14) print(3,"Let's go inside.");
[024A] (AE) waitForMessage();
[024B] (36) walkActorToObject(3,61);
[024F] (3B) waitForActor(3);
[0251] (07) setState08(61);
[0254] (07) setState08(67);
[0257] (1C) startSound(8);
[0259] (2E) delay(30);
[025D] (B2) setCameraAt(VAR_CAMERA_POS_X);
[025F] (2D) putActorInRoom(3,10);
[0262] (01) putActor(3,6,60);
[0266] (11) animateActor(3,249);
[0269] (2E) delay(60);
[026D] (72) loadRoom(10);
[026F] (52) actorFollowCamera(3);
[0271] (2E) delay(30);
[0275] (11) animateActor(3,246);
[0278] (2E) delay(15);
[027C] (14) print(3,"I've arranged for the occupants to be\x01gone during our `tour.`\x03We shouldn't have any problems.");
[02CF] (AE) waitForMessage();
[02D0] (11) animateActor(3,244);
[02D3] (2E) delay(20);
[02D7] (47) clearState08(67);
[02DA] (47) clearState08(61);
[02DD] (1C) startSound(9);
[02DF] (80) breakHere();
[02E0] (80) breakHere();
[02E1] (11) animateActor(3,246);
[02E4] (2E) delay(20);
[02E8] (42) startScript(170);
[02EA] (80) breakHere();
[02EB] (68) VAR_RESULT = isScriptRunning(170);
[02EE] (48) unless (VAR_RESULT == 0) goto 02EA;
[02F4] (72) loadRoom(10);
[02F6] (52) actorFollowCamera(3);
[02F8] (2E) delay(90);
[02FC] (14) print(3,"Oh. That was a `cut-scene.`\x03They let you know what's\x01going on elsewhere in the mansion.");
[0349] (AE) waitForMessage();
[034A] (2E) delay(30);
[034E] (14) print(3,"All these tours make me hungry.");
[036B] (AE) waitForMessage();
[036C] (14) print(3,"Here's the kitchen.");
[0380] (36) walkActorToObject(3,68);
[0384] (3B) waitForActor(3);
[0386] (07) setState08(68);
[0389] (1C) startSound(8);
[038B] (2E) delay(60);
[038F] (11) animateActor(3,246);
[0392] (14) print(3,"I see they haven't cleaned up the, er,\x01uh, um... the mess yet.");
[03C8] (AE) waitForMessage();
[03C9] (11) animateActor(3,247);
[03CC] (3B) waitForActor(3);
[03CE] (14) print(3,"I think I just lost my appetite.");
[03EB] (47) clearState08(68);
[03EE] (1C) startSound(9);
[03F0] (2E) delay(20);
[03F4] (11) animateActor(3,246);
[03F7] (AE) waitForMessage();
[03F8] (2E) delay(60);
[03FC] (14) print(3,"I know, let's go to my favorite room,\x01the basement.");
[042A] (2E) delay(60);
[042E] (1E) walkActorTo(3,56,58);
[0432] (3B) waitForActor(3);
[0434] (AE) waitForMessage();
[0435] (11) animateActor(3,247);
[0438] (80) breakHere();
[0439] (14) print(3,"Oh yes, no handle.");
[044B] (AE) waitForMessage();
[044C] (11) animateActor(3,246);
[044F] (14) print(3,"Now how did I open this door last time?\x03Push it?");
[0479] (AE) waitForMessage();
[047A] (1E) walkActorTo(3,56,40);
[047E] (3B) waitForActor(3);
[0480] (2E) delay(60);
[0484] (14) print(3,"Nope. Maybe I need a running start.");
[04A4] (1E) walkActorTo(3,56,70);
[04A8] (3B) waitForActor(3);
[04AA] (AE) waitForMessage();
[04AB] (1A) VAR_TIMER_NEXT = 0;
[04AF] (1E) walkActorTo(3,56,40);
[04B3] (3B) waitForActor(3);
[04B5] (1C) startSound(57);
[04B7] (11) animateActor(3,12);
[04BA] (14) print(255,"Owwwwwwwwwwwwwwwwwww!   ");
[04D3] (11) animateActor(3,248);
[04D6] (80) breakHere();
[04D7] (11) animateActor(3,250);
[04DA] (80) breakHere();
[04DB] (11) animateActor(3,249);
[04DE] (80) breakHere();
[04DF] (11) animateActor(3,251);
[04E2] (80) breakHere();
[04E3] (16) Var[71] = getRandomNr(112);
[04E6] (16) Var[72] = getRandomNr(12);
[04E9] (5A) Var[72] += 52;
[04ED] (7E) walkActorTo(3,Var[71],Var[72]);
[04F1] (48) unless (VAR_HAVE_MSG == 0) goto 04D3;
[04F7] (1A) VAR_TIMER_NEXT = 4;
[04FB] (80) breakHere();
[04FC] (11) animateActor(3,255);
[04FF] (2E) delay(60);
[0503] (11) animateActor(3,16);
[0506] (80) breakHere();
[0507] (11) animateActor(3,246);
[050A] (2E) delay(60);
[050E] (14) print(3,"Oh well, I'll let you figure it out.");
[052E] (2E) delay(60);
[0532] (36) walkActorToObject(3,70);
[0536] (3B) waitForActor(3);
[0538] (07) setState08(70);
[053B] (07) setState08(71);
[053E] (1C) startSound(8);
[0540] (2E) delay(60);
[0544] (AE) waitForMessage();
[0545] (B2) setCameraAt(VAR_CAMERA_POS_X);
[0547] (2D) putActorInRoom(3,3);
[054A] (01) putActor(3,7,60);
[054E] (2E) delay(60);
[0552] (2D) putActorInRoom(23,3);
[0555] (01) putActor(23,24,56);
[0559] (11) animateActor(23,251);
[055C] (11) animateActor(3,249);
[055F] (72) loadRoom(3);
[0561] (02) startMusic(50);
[0563] (52) actorFollowCamera(3);
[0565] (07) setState08(228);
[0568] (47) clearState08(80);
[056B] (2E) delay(180);
[056F] (14) print(3,"Hi Sandy, could you turn the music down?");
[0593] (AE) waitForMessage();
[0594] (2E) delay(180);
[0598] (14) print(3,"Sandy, the music's too loud!");
[05B3] (AE) waitForMessage();
[05B4] (2E) delay(120);
[05B8] (1E) walkActorTo(3,9,60);
[05BC] (14) print(3,"SANDY, TURN OFF THE MUSIC!");
[05D5] (AE) waitForMessage();
[05D6] (11) animateActor(23,244);
[05D9] (2E) delay(60);
[05DD] (14) print(23,"Oh!");
[05E3] (2E) delay(60);
[05E7] (36) walkActorToObject(23,77);
[05EB] (3B) waitForActor(23);
[05ED] (11) animateActor(23,247);
[05F0] (2E) delay(15);
[05F4] (07) setState08(77);
[05F7] (2E) delay(60);
[05FB] (47) clearState08(228);
[05FE] (80) breakHere();
[05FF] (3C) stopSound(50);
[0601] (2E) delay(30);
[0605] (47) clearState08(77);
[0608] (80) breakHere();
[0609] (1C) startSound(9);
[060B] (2E) delay(30);
[060F] (0D) walkActorToActor(23,3,4);
[0613] (11) animateActor(23,244);
[0616] (14) print(23,"I'm sorry Dave, I couldn't hear you,\x03the music was too loud.");
[064B] (AE) waitForMessage();
[064C] (11) animateActor(3,246);
[064F] (3B) waitForActor(3);
[0651] (14) print(3,"Everybody's a comedian!");
[0669] (AE) waitForMessage();
[066A] (11) animateActor(3,245);
[066D] (14) print(3,"I was just giving a tour to all these\x01future game players. Want to come?");
[06AB] (AE) waitForMessage();
[06AC] (14) print(23,"Sure Dave, I'll go anywhere with you!");
[06CE] (AE) waitForMessage();
[06CF] (36) walkActorToObject(3,126);
[06D3] (2E) delay(30);
[06D7] (1E) walkActorTo(23,69,60);
[06DB] (14) print(3,"Oh yes, in Maniac Mansion,\x03you not only direct my actions,\x01but the actions of two of my friends.");
[072E] (3B) waitForActor(3);
[0730] (AE) waitForMessage();
[0731] (07) setState08(126);
[0734] (07) setState08(135);
[0737] (1C) startSound(8);
[0739] (B2) setCameraAt(VAR_CAMERA_POS_X);
[073B] (7A) VerbOps(New-3(0,19,2,0,"Push   Open    Walk to  Unlock  Turn on "));
[076A] (7A) VerbOps(New-3(0,20,3,0,"Pull   Close   Pick up  New kid Turn off"));
[0799] (7A) VerbOps(New-3(0,21,4,0,"Give   Read    What is  Use     Fix"));
[07C3] (60) cursorCommand(132, 0);
[07C6] (11) animateActor(3,246);
[07C9] (14) print(3,"You point to the verbs you see below to\x01construct sentences.");
[07FF] (80) breakHere();
[0800] (80) breakHere();
[0801] (11) animateActor(23,246);
[0804] (AE) waitForMessage();
[0805] (2E) delay(30);
[0809] (2E) delay(180);
[080D] (2D) putActorInRoom(3,5);
[0810] (01) putActor(3,13,56);
[0814] (1E) walkActorTo(23,73,60);
[0818] (80) breakHere();
[0819] (3B) waitForActor(23);
[081B] (80) breakHere();
[081C] (2D) putActorInRoom(23,5);
[081F] (01) putActor(23,9,56);
[0823] (11) animateActor(23,249);
[0826] (2E) delay(60);
[082A] (72) loadRoom(5);
[082C] (7A) VerbOps(New-3(0,20,2,0,"         Lucasfilm Games Presents"));
[0854] (7A) VerbOps(New-3(0,21,3,0," "));
[085C] (7A) VerbOps(New-3(0,22,4,0,"             MANIAC MANSION"));
[087E] (60) cursorCommand(132, 0);
[0881] (52) actorFollowCamera(3);
[0883] (1E) walkActorTo(23,12,52);
[0887] (14) print(3,"This is the library.");
[089B] (3B) waitForActor(23);
[089D] (70) lights(11,0,0);
[08A1] (1C) startSound(12);
[08A3] (2E) delay(30);
[08A7] (42) startScript(171);
[08A9] (14) print(3,"It's one of the many rooms in the game.");
[08CB] (1E) walkActorTo(3,38,66);
[08CF] (3B) waitForActor(3);
[08D1] (11) animateActor(3,250);
[08D4] (AE) waitForMessage();
[08D5] (42) startScript(31);
[08D7] (14) print(3,"And there are more than 450 objects...");
[08FA] (AE) waitForMessage();
[08FB] (11) animateActor(3,249);
[08FE] (12) panCameraTo(50);
[0900] (2E) delay(120);
[0904] (11) animateActor(3,250);
[0907] (80) breakHere();
[0908] (14) print(3,"...that you can use to solve over...");
[0929] (AE) waitForMessage();
[092A] (11) animateActor(3,249);
[092D] (2E) delay(120);
[0931] (11) animateActor(3,250);
[0934] (80) breakHere();
[0935] (14) print(3,"Just a second.");
[0944] (AE) waitForMessage();
[0945] (1E) walkActorTo(3,50,64);
[0949] (80) breakHere();
[094A] (43) VAR_RESULT = getActorX(3);
[094D] (44) unless (VAR_RESULT > 48) goto 0949;
[0953] (1E) walkActorTo(3,65,64);
[0957] (3B) waitForActor(3);
[0959] (11) animateActor(3,247);
[095C] (80) breakHere();
[095D] (07) setState08(136);
[0960] (62) stopScript(31);
[0962] (3C) stopSound(24);
[0964] (2E) delay(30);
[0968] (14) print(3,"Hello?");
[0971] (2E) delay(180);
[0975] (11) animateActor(3,245);
[0978] (14) print(3,"Hello, who's there?");
[098C] (2D) putActorInRoom(13,5);
[098F] (01) putActor(13,10,60);
[0993] (42) startScript(172);
[0995] (2E) delay(120);
[0999] (11) animateActor(23,244);
[099C] (80) breakHere();
[099D] (11) animateActor(23,12);
[09A0] (80) breakHere();
[09A1] (80) breakHere();
[09A2] (1E) walkActorTo(23,50,50);
[09A6] (80) breakHere();
[09A7] (14) print(3,"Oh, Mom! I asked you not to call me\x01at work.");
[09CD] (3B) waitForActor(23);
[09CF] (1E) walkActorTo(23,50,60);
[09D3] (80) breakHere();
[09D4] (3B) waitForActor(23);
[09D6] (1E) walkActorTo(23,10,50);
[09DA] (80) breakHere();
[09DB] (3B) waitForActor(23);
[09DD] (14) print(3,"I love you too...Mom.");
[09F2] (2E) delay(120);
[09F6] (80) breakHere();
[09F7] (43) VAR_RESULT = getActorX(13);
[09FA] (04) unless (VAR_RESULT <= 28) goto 09F6;
[0A00] (62) stopScript(172);
[0A02] (1C) startSound(36);
[0A04] (2E) delay(30);
[0A08] (11) animateActor(3,247);
[0A0B] (80) breakHere();
[0A0C] (47) clearState08(136);
[0A0F] (80) breakHere();
[0A10] (1C) startSound(9);
[0A12] (2E) delay(30);
[0A16] (11) animateActor(3,248);
[0A19] (80) breakHere();
[0A1A] (14) print(3,"Sandy?");
[0A23] (2E) delay(180);
[0A27] (14) print(3,"SANDY!");
[0A30] (2E) delay(180);
[0A34] (52) actorFollowCamera(3);
[0A36] (11) animateActor(3,250);
[0A39] (80) breakHere();
[0A3A] (14) print(3,"Oh great! Not again!!\x03Time to round up the Gang.");
[0A65] (AE) waitForMessage();
[0A66] (2E) delay(180);
[0A6A] (C0) endCutscene();
[0A6B] (4A) chainScript(9);
[0A6D] (A0) stopObjectCode();
END

// Script 10: Open Door
[0000] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0006] (1C)   startSound(8);
[0008] (**) }
[0008] (A0) stopObjectCode();
END

// Script 11: Close Door
[0000] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0006] (1C)   startSound(9);
[0008] (**) }
[0008] (A0) stopObjectCode();
END

// Script 12: Meltdown Timer
[0000] (0F) if (!getState08(163)) {
[0005] (2E)   delay(300);
[0009] (08)   if (VAR_ROOM != 6) {
[000F] (08)     if (VAR_ROOM != 1) {
[0015] (08)       if (VAR_ROOM != 44) {
[001B] (08)         if (VAR_ROOM != 2) {
[0021] (08)           if (VAR_ROOM != 16) {
[0027] (1C)             startSound(32);
[0029] (1C)             startSound(33);
[002B] (**)           }
[002B] (**)         }
[002B] (**)       }
[002B] (**)     }
[002B] (**)   }
[002B] (2E)   delay(300);
[002F] (3C)   stopSound(33);
[0031] (42)   startScript(47);
[0033] (2E)   delay(7200);
[0037] (3C)   stopSound(32);
[0039] (2E)   delay(180);
[003D] (42)   startScript(62);
[003F] (**) }
[003F] (A0) stopObjectCode();
END

// Script 13: Stop Meltdown Timer
[0000] (62) stopScript(12);
[0002] (03) VAR_RESULT = getActorRoom(13);
[0005] (08) if (VAR_RESULT != 8) {
[000B] (62)   stopScript(48);
[000D] (**) }
[000D] (3C) stopSound(32);
[000F] (3C) stopSound(33);
[0011] (A0) stopObjectCode();
END

// Script 14: Open Garage Door
[0000] (9A) Var[110] = VAR_CAMERA_POS_X;
[0003] (80) breakHere();
[0004] (C8) unless (Var[110] == VAR_CAMERA_POS_X) goto 0000;
[0009] (1C) startSound(40);
[000B] (47) clearState08(144);
[000E] (57) setState02(144);
[0011] (80) breakHere();
[0012] (47) clearState08(145);
[0015] (57) setState02(145);
[0018] (80) breakHere();
[0019] (47) clearState08(146);
[001C] (57) setState02(146);
[001F] (80) breakHere();
[0020] (47) clearState08(147);
[0023] (57) setState02(147);
[0026] (80) breakHere();
[0027] (47) clearState08(148);
[002A] (57) setState02(148);
[002D] (80) breakHere();
[002E] (47) clearState08(149);
[0031] (57) setState02(149);
[0034] (80) breakHere();
[0035] (80) breakHere();
[0036] (3C) stopSound(40);
[0038] (30) setBoxFlags(2,0);
[003B] (30) setBoxFlags(3,0);
[003E] (30) setBoxFlags(4,0);
[0041] (A0) stopObjectCode();
END

// Script 15: Read Manuscript
[0000] (48) if (Var[160] == 0) {
[0006] (D8)   printEgo("It looks like someone's memoir,\x01but the writing is terrible!\x03It's written by a meteor? How strange!");
[005D] (**) }
[005D] (48) if (Var[160] == 1) {
[0063] (D8)   printEgo("This is the worst junk I've ever read.");
[0084] (**) }
[0084] (48) if (Var[160] == 2) {
[008A] (D8)   printEgo("This is great stuff!\x03The whole world should see it.");
[00B7] (**) }
[00B7] (A0) stopObjectCode();
END

// Script 16: Rewrite Manuscript
[0000] (42) startScript(113);
[0002] (80) breakHere();
[0003] (68) VAR_RESULT = isScriptRunning(113);
[0006] (48) unless (VAR_RESULT == 0) goto 0002;
[000C] (48) if (VAR_EGO == 6) {
[0012] (1A)   Var[160] = 2;
[0016] (D8)   printEgo("Ah! That's much better.");
[002C] (18) } else {
[002F] (1A)   Var[160] = 1;
[0033] (D8)   printEgo("Whoops! I think I made it worse.");
[004F] (**) }
[004F] (A0) stopObjectCode();
END

// Script 17: Hamster in Microwave
[0000] (0C) loadSound(15)
[0003] (0C) loadSound(16)
[0006] (0C) loadSound(14)
[0009] (1C) startSound(15);
[000B] (2E) delay(180);
[000F] (47) clearState08(86);
[0012] (57) setState02(86);
[0015] (07) setState08(87);
[0018] (1C) startSound(16);
[001A] (2E) delay(60);
[001E] (3C) stopSound(15);
[0020] (1C) startSound(14);
[0022] (A0) stopObjectCode();
END

// Script 18: Open Shower Curtain
[0000] (1C) startSound(34);
[0002] (1A) Var[165] = 1;
[0006] (47) clearState08(117);
[0009] (57) setState02(117);
[000C] (80) breakHere();
[000D] (47) clearState08(116);
[0010] (57) setState02(116);
[0013] (80) breakHere();
[0014] (47) clearState08(115);
[0017] (57) setState02(115);
[001A] (80) breakHere();
[001B] (80) breakHere();
[001C] (1A) Var[165] = 0;
[0020] (3C) stopSound(34);
[0022] (A0) stopObjectCode();
END

// Script 19: Close Shower Curtain
[0000] (1C) startSound(34);
[0002] (1A) Var[165] = 1;
[0006] (07) setState08(115);
[0009] (17) clearState02(115);
[000C] (80) breakHere();
[000D] (07) setState08(116);
[0010] (17) clearState02(116);
[0013] (80) breakHere();
[0014] (07) setState08(117);
[0017] (17) clearState02(117);
[001A] (80) breakHere();
[001B] (80) breakHere();
[001C] (1A) Var[165] = 0;
[0020] (3C) stopSound(34);
[0022] (A0) stopObjectCode();
END

// Script 20: Tentacle Mating Call Record
[0000] (0C) loadSound(10)
[0003] (1C) startSound(25);
[0005] (2E) delay(120);
[0009] (0F) if (!getState08(187)) {
[000E] (1C)   startSound(10);
[0010] (07)   setState08(187);
[0013] (**) }
[0013] (2E) delay(72000);
[0017] (3C) stopSound(25);
[0019] (1A) Var[167] = 0;
[001D] (A0) stopObjectCode();
END

// Script 21: Cassette Shatters Glass
[0000] (2E) delay(240);
[0004] (4F) if (getState08(78)) {
[0009] (1C)   startSound(26);
[000B] (47)   clearState08(78);
[000E] (**) }
[000E] (2E) delay(60);
[0012] (4F) if (getState08(79)) {
[0017] (1C)   startSound(26);
[0019] (47)   clearState08(79);
[001C] (**) }
[001C] (2E) delay(60);
[0020] (0F) if (!getState08(74)) {
[0025] (1C)   startSound(26);
[0027] (07)   setState08(74);
[002A] (57)   setState02(74);
[002D] (47)   clearState08(75);
[0030] (17)   clearState02(75);
[0033] (47)   clearState08(76);
[0036] (17)   clearState02(76);
[0039] (**) }
[0039] (2E) delay(60);
[003D] (1A) Var[109] = 1;
[0041] (83) VAR_RESULT = getActorRoom(Var[109]);
[0044] (48) if (VAR_RESULT == 3) {
[004A] (C3)   VAR_RESULT = getActorX(Var[109]);
[004D] (44)   if (VAR_RESULT > 33) {
[0053] (C3)     VAR_RESULT = getActorX(Var[109]);
[0056] (78)     if (VAR_RESULT < 46) {
[005C] (D8)       printEgo("Gee, that was close!");
[006F] (18)       goto 007A;
[0072] (**)     }
[0072] (**)   }
[0072] (**) }
[0072] (46) Var[109]++;
[0074] (48) unless (Var[109] == 8) goto 0041;
[007A] (2E) delay(18000);
[007E] (3C) stopSound(25);
[0080] (47) clearState08(228);
[0083] (A0) stopObjectCode();
END

// Script 22: Rotate Telescope
[0000] (1C) startSound(15);
[0002] (2E) delay(60);
[0006] (D8) printEgo("It's rotating.");
[0015] (2E) delay(180);
[0019] (3C) stopSound(15);
[001B] (A0) stopObjectCode();
END

// Script 23: Look in Telescope
[0000] (80) breakHere();
[0001] (40) cutscene();
[0002] (2E) delay(60);
[0006] (48) if (Var[164] == 0) {
[000C] (72)   loadRoom(35);
[000E] (32)   setCameraAt(20);
[0010] (70)   lights(11,0,0);
[0014] (2E)   delay(120);
[0018] (48)   if (Var[169] == 0) {
[001E] (1C)     startSound(27);
[0020] (32)     setCameraAt(60);
[0022] (47)     clearState08(227);
[0025] (80)     breakHere();
[0026] (1A)     Var[111] = 0;
[002A] (07)     setState08(227);
[002D] (80)     breakHere();
[002E] (47)     clearState08(227);
[0031] (80)     breakHere();
[0032] (46)     Var[111]++;
[0034] (48)     unless (Var[111] == 4) goto 002A;
[003A] (1A)     Var[169] = 1;
[003E] (18)   } else {
[0041] (2E)     delay(120);
[0045] (**)   }
[0045] (**) }
[0045] (48) if (Var[164] == 1) {
[004B] (72)   loadRoom(34);
[004D] (32)   setCameraAt(100);
[004F] (70)   lights(11,0,0);
[0053] (2E)   delay(240);
[0057] (**) }
[0057] (48) if (Var[164] == 2) {
[005D] (72)   loadRoom(35);
[005F] (32)   setCameraAt(100);
[0061] (70)   lights(11,0,0);
[0065] (2E)   delay(240);
[0069] (**) }
[0069] (48) if (Var[164] == 3) {
[006F] (72)   loadRoom(34);
[0071] (4F)   if (getState08(218)) {
[0076] (32)     setCameraAt(20);
[0078] (18)   } else {
[007B] (32)     setCameraAt(60);
[007D] (**)   }
[007D] (2E)   delay(240);
[0081] (**) }
[0081] (C0) endCutscene();
[0082] (A0) stopObjectCode();
END

// Script 24: Grandfather Clock Ticking
[0000] (05) drawObject(455,255,255);
[0005] (2E) delay(90);
[0009] (1C) startSound(28);
[000B] (05) drawObject(454,255,255);
[0010] (80) breakHere();
[0011] (2E) delay(90);
[0015] (1C) startSound(28);
[0017] (05) drawObject(455,255,255);
[001C] (80) breakHere();
[001D] (2E) delay(90);
[0021] (18) goto 0009;
[0024] (A0) stopObjectCode();
END

// Script 25: Turn on Arcade Game
[0000] (4F) if (getState08(157)) {
[0005] (D8)   printEgo("The main power's off.");
[0019] (4F) } else if (getState08(225)) {
[0021] (D8)   printEgo("It's already turned on.");
[0037] (18) } else {
[003A] (D8)   printEgo("I think it's on, but there's no power.");
[005B] (**) }
[005B] (A0) stopObjectCode();
END

// Script 26: Turn off Arcade Game
[0000] (4F) if (getState08(157)) {
[0005] (18) } else {
[0008] (0F)   unless (!getState08(225)) goto 0021;
[000D] (**) }
[000D] (D8) printEgo("It looks off to me.");
[001E] (18) goto 0040;
[0021] (D8) printEgo("I can't find a switch to turn it off.");
[0040] (A0) stopObjectCode();
END

// Script 27: Play Meteor Mess
[0000] (4F) if (getState08(157)) {
[0005] (D8)   printEgo("The power must be off.");
[0019] (18) } else {
[001C] (60)   cursorCommand(15, 2);
[001F] (2E)   delay(120);
[0023] (1C)   startSound(35);
[0025] (2E)   delay(300);
[0029] (40)   cutscene();
[002A] (58)   beginOverride();
[002B] (18)   goto 0036;
[002E] (72)   loadRoom(39);
[0030] (32)   setCameraAt(20);
[0032] (2E)   delay(300);
[0036] (C0)   endCutscene();
[0037] (60)   cursorCommand(247, 1);
[003A] (47)   clearState08(206);
[003D] (**) }
[003D] (A0) stopObjectCode();
END

// Script 28: Play Other Arcade Game
[0000] (29) setOwnerOf(221,14);
[0004] (1C) startSound(11);
[0006] (4F) if (getState08(157)) {
[000B] (2E)   delay(60);
[000F] (D8)   printEgo("The power's off.");
[001F] (18) } else {
[0022] (60)   cursorCommand(15, 2);
[0025] (2E)   delay(300);
[0029] (D8)   printEgo("Pretty boring!");
[0038] (60)   cursorCommand(247, 1);
[003B] (47)   clearState08(202);
[003E] (47)   clearState08(203);
[0041] (47)   clearState08(204);
[0044] (47)   clearState08(205);
[0047] (47)   clearState08(207);
[004A] (**) }
[004A] (A0) stopObjectCode();
END

// Script 29: Use Hunk-O-Matic
[0000] (0C) loadSound(30)
[0003] (0C) loadSound(31)
[0006] (58) beginOverride();
[0007] (18) goto 002F;
[000A] (60) cursorCommand(15, 2);
[000D] (1A) Var[111] = 5;
[0011] (07) setState08(111);
[0014] (80) breakHere();
[0015] (1C) startSound(30);
[0017] (2E) delay(45);
[001B] (47) clearState08(111);
[001E] (80) breakHere();
[001F] (1C) startSound(31);
[0021] (2E) delay(45);
[0025] (3A) Var[111] -= 1;
[0029] (48) unless (Var[111] == 0) goto 0011;
[002F] (47) clearState08(111);
[0032] (B1) VAR_RESULT = getBitVar(2944,VAR_EGO);
[0037] (48) if (VAR_RESULT == 0) {
[003D] (9B)   setBitVar(2944,VAR_EGO,1);
[0042] (D8)   printEgo("Ah. I feel much stronger now!");
[005C] (18) } else {
[005F] (D8)   printEgo("I've had enough!");
[006F] (**) }
[006F] (60) cursorCommand(247, 1);
[0072] (A0) stopObjectCode();
END

// Script 30: Phone Input
[0000] (42) startScript(34);
[0002] (1C) startSound(21);
[0004] (2E) delay(120);
[0008] (3C) stopSound(21);
[000A] (9A) Var[63] = Var[51];
[000D] (9A) Var[64] = Var[52];
[0010] (9A) Var[65] = Var[53];
[0013] (9A) Var[66] = Var[54];
[0016] (1A) Var[128] = 0;
[001A] (42) startScript(44);
[001C] (80) breakHere();
[001D] (48) unless (Var[69] == 0) goto 001C;
[0023] (48) if (Var[67] == 0) {
[0029] (42)   startScript(35);
[002B] (18) } else {
[002E] (42)   startScript(32);
[0030] (**) }
[0030] (A0) stopObjectCode();
END

// Script 31: Phone Ringing
[0000] (48) if (VAR_ROOM == 5) {
[0006] (1C)   startSound(24);
[0008] (**) }
[0008] (48) if (VAR_ROOM == 19) {
[000E] (1C)   startSound(23);
[0010] (**) }
[0010] (2E) delay(72000);
[0014] (18) goto 0010;
[0017] (A0) stopObjectCode();
END

// Script 32: Phone Busy Signal
[0000] (48) if (VAR_ROOM == 5) {
[0006] (1C)   startSound(22);
[0008] (**) }
[0008] (2E) delay(72000);
[000C] (18) goto 0008;
[000F] (A0) stopObjectCode();
END

// Script 33: Phone Disconnect
[0000] (47) clearState08(136);
[0003] (62) stopScript(35);
[0005] (1A) Var[161] = 0;
[0009] (62) stopScript(30);
[000B] (62) stopScript(32);
[000D] (62) stopScript(31);
[000F] (3C) stopSound(21);
[0011] (3C) stopSound(24);
[0013] (3C) stopSound(23);
[0015] (3C) stopSound(22);
[0017] (A0) stopObjectCode();
END

// Script 34: Phone Disconnect If Kid Walks Too Far Away
[0000] (07) setState08(136);
[0003] (9A) Var[70] = VAR_EGO;
[0006] (C3) Var[71] = getActorX(Var[70]);
[0009] (A3) Var[72] = getActorY(Var[70]);
[000C] (80) breakHere();
[000D] (C3) VAR_RESULT = getActorX(Var[70]);
[0010] (C8) if (VAR_RESULT == Var[71]) {
[0015] (A3)   VAR_RESULT = getActorY(Var[70]);
[0018] (C8)   if (VAR_RESULT == Var[72]) {
[001D] (18)     goto 000C;
[0020] (**)   }
[0020] (**) }
[0020] (42) startScript(33);
[0022] (A0) stopObjectCode();
END

// Script 35: Prank Phone Call
[0000] (42) startScript(31);
[0002] (2E) delay(420);
[0006] (80) breakHere();
[0007] (03) VAR_RESULT = getActorRoom(10);
[000A] (48) unless (VAR_RESULT == 19) goto 0006;
[0010] (40) cutscene();
[0011] (62) stopScript(36);
[0013] (62) stopScript(39);
[0015] (1A) Var[161] = 1;
[0019] (58) beginOverride();
[001A] (18) goto 010A;
[001D] (11) animateActor(10,250);
[0020] (42) startScript(31);
[0022] (72) loadRoom(19);
[0024] (32) setCameraAt(20);
[0026] (2E) delay(120);
[002A] (48) if (Var[74] == 0) {
[0030] (14)   print(10,"Now who could that be?");
[0045] (2E)   delay(180);
[0049] (**) }
[0049] (36) walkActorToObject(10,105);
[004D] (3B) waitForActor(10);
[004F] (11) animateActor(10,251);
[0052] (80) breakHere();
[0053] (07) setState08(105);
[0056] (62) stopScript(31);
[0058] (3C) stopSound(23);
[005A] (3C) stopSound(24);
[005C] (80) breakHere();
[005D] (48) if (Var[74] == 0) {
[0063] (14)   print(10,"Hello?\x03Hello? Who's there?\x03Is this a prank phone call?\x03It doesn't sound like a prank phone\x01call, there's no heavy breathing.\x03Here, let me show you how to do it^");
[00ED] (18) } else {
[00F0] (14)   print(10,"Hello?  Is this you again?");
[0109] (**) }
[0109] (AE) waitForMessage();
[010A] (2D) putActorInRoom(10,19);
[010D] (01) putActor(10,15,52);
[0111] (11) animateActor(10,251);
[0114] (62) stopScript(31);
[0116] (3C) stopSound(23);
[0118] (3C) stopSound(24);
[011A] (07) setState08(105);
[011D] (C0) endCutscene();
[011E] (1A) Var[74] = 1;
[0122] (2E) delay(1200);
[0126] (83) VAR_RESULT = getActorRoom(VAR_EGO);
[0129] (48) if (VAR_RESULT == 19) {
[012F] (14)   print(10,"If you're not going to do it right,\x01then good bye!");
[015B] (AE)   waitForMessage();
[015C] (**) }
[015C] (47) clearState08(105);
[015F] (83) VAR_RESULT = getActorRoom(VAR_EGO);
[0162] (48) if (VAR_RESULT == 5) {
[0168] (D8)   printEgo("She just hung up.");
[0178] (1C)   startSound(21);
[017A] (**) }
[017A] (1A) Var[161] = 0;
[017E] (68) VAR_RESULT = isScriptRunning(36);
[0181] (48) if (VAR_RESULT == 0) {
[0187] (42)   startScript(39);
[0189] (**) }
[0189] (A0) stopObjectCode();
END

// Script 36: Edna Chases Kid
[0000] (1A) Var[126] = 0;
[0004] (48) if (Var[161] == 0) {
[000A] (66)   Var[73] = getClosestObjActor(10);
[000E] (08)   if (Var[73] != 255) {
[0014] (1A)     Var[126] = 1;
[0018] (68)     VAR_RESULT = isScriptRunning(35);
[001B] (48)     if (VAR_RESULT == 1) {
[0021] (03)       VAR_RESULT = getActorRoom(10);
[0024] (48)       if (VAR_RESULT == 19) {
[002A] (18)         goto 008D;
[002D] (**)       }
[002D] (**)     }
[002D] (03)     VAR_RESULT = getActorRoom(10);
[0030] (88)     if (VAR_RESULT != VAR_ROOM) {
[0035] (18)     } else {
[0038] (48)       if (Var[119] == 1) {
[003E] (14)         print(10,"Oh! An unwelcome visitor!");
[0057] (**)       }
[0057] (48)       if (Var[119] == 2) {
[005D] (14)         print(10,"Come to me, cutie!");
[006F] (**)       }
[006F] (1A)       Var[119] = 0;
[0073] (4D)       walkActorToActor(10,Var[73],2);
[0077] (80)       breakHere();
[0078] (74)       VAR_RESULT = getDist(10,Var[73]);
[007D] (04)       unless (VAR_RESULT <= 2) goto 008D;
[0083] (**)     }
[0083] (62)     stopScript(39);
[0085] (62)     stopScript(40);
[0087] (62)     stopScript(153);
[0089] (42)     startScript(37);
[008B] (62)     stopScript(0);
[008D] (**)   }
[008D] (**) }
[008D] (80) breakHere();
[008E] (18) goto 0000;
[0091] (A0) stopObjectCode();
END

// Script 37: Edna Takes Kid to Dungeon
[0000] (40) cutscene();
[0001] (91) animateActor(Var[73],255);
[0004] (9B) setBitVar(2952,Var[73],1);
[0009] (80) breakHere();
[000A] (80) breakHere();
[000B] (91) animateActor(Var[73],250);
[000E] (11) animateActor(10,250);
[0011] (80) breakHere();
[0012] (03) VAR_RESULT = getActorRoom(10);
[0015] (C8) if (VAR_RESULT == VAR_ROOM) {
[001A] (14)   print(10,"I got you!");
[0025] (AE)   waitForMessage();
[0026] (2E)   delay(60);
[002A] (**) }
[002A] (07) setState08(159);
[002D] (9A) Var[109] = Var[73];
[0030] (42) startScript(146);
[0032] (AD) putActorInRoom(Var[73],4);
[0035] (C1) putActor(Var[73],Var[110],63);
[0039] (91) animateActor(Var[73],249);
[003C] (2D) putActorInRoom(10,4);
[003F] (01) putActor(10,58,63);
[0043] (11) animateActor(10,248);
[0046] (72) loadRoom(4);
[0048] (32) setCameraAt(90);
[004A] (58) beginOverride();
[004B] (18) goto 00CB;
[004E] (2E) delay(120);
[0052] (48) if (Var[73] == 6) {
[0058] (18) } else {
[005B] (48)   unless (Var[73] == 2) goto 0099;
[0061] (**) }
[0061] (14) print(10,"You're lucky you're not a boy\x01or you'd be in BIG trouble now!");
[0096] (18) goto 00C4;
[0099] (14) print(10,"How silly of me!\x03I should have tied you to my bed!");
[00C4] (AE) waitForMessage();
[00C5] (36) walkActorToObject(10,159);
[00C9] (3B) waitForActor(10);
[00CB] (9B) setBitVar(2952,Var[73],0);
[00D0] (1A) Var[175] = 0;
[00D4] (14) print(255," ");
[00D8] (2D) putActorInRoom(10,0);
[00DB] (01) putActor(10,0,0);
[00DF] (42) startScript(56);
[00E1] (2E) delay(120);
[00E5] (C0) endCutscene();
[00E6] (42) startScript(38);
[00E8] (A0) stopObjectCode();
END

// Script 38: Edna Returns to Room (Level 3 Hallway)
[0000] (2D) putActorInRoom(10,0);
[0003] (01) putActor(10,0,0);
[0007] (2E) delay(900);
[000B] (2D) putActorInRoom(10,38);
[000E] (0E) putActorAtObject(10,229);
[0012] (11) animateActor(10,249);
[0015] (42) startScript(40);
[0017] (A0) stopObjectCode();
END

// Script 39: Edna Leaves Room
[0000] (80) breakHere();
[0001] (1A) Var[125] = 1;
[0005] (1A) Var[119] = 1;
[0009] (42) startScript(36);
[000B] (80) breakHere();
[000C] (48) unless (Var[161] == 0) goto 000B;
[0012] (80) breakHere();
[0013] (48) unless (Var[126] == 0) goto 0012;
[0019] (80) breakHere();
[001A] (03) VAR_RESULT = getActorRoom(11);
[001D] (08) unless (VAR_RESULT != 38) goto 0019;
[0023] (2E) delay(120);
[0027] (0F) if (!getState08(461)) {
[002C] (07)   setState08(461);
[002F] (07)   setState08(103);
[0032] (48)   if (VAR_ROOM == 38) {
[0038] (1C)     startSound(8);
[003A] (**)   }
[003A] (**) }
[003A] (2E) delay(60);
[003E] (80) breakHere();
[003F] (03) VAR_RESULT = getActorRoom(11);
[0042] (08) unless (VAR_RESULT != 38) goto 003E;
[0048] (2D) putActorInRoom(10,38);
[004B] (01) putActor(10,31,52);
[004F] (42) startScript(40);
[0051] (A0) stopObjectCode();
END

// Script 40: Edna Returns to Room (Enter Room)
[0000] (1A) Var[125] = 1;
[0004] (1A) Var[119] = 2;
[0008] (42) startScript(36);
[000A] (80) breakHere();
[000B] (48) unless (Var[161] == 0) goto 000A;
[0011] (80) breakHere();
[0012] (48) unless (Var[126] == 0) goto 0011;
[0018] (01) putActor(10,30,52);
[001C] (11) animateActor(10,251);
[001F] (0F) if (!getState08(461)) {
[0024] (07)   setState08(461);
[0027] (07)   setState08(103);
[002A] (48)   if (VAR_ROOM == 19) {
[0030] (1C)     startSound(8);
[0032] (**)   }
[0032] (**) }
[0032] (2E) delay(180);
[0036] (48) unless (Var[126] == 0) goto 000A;
[003C] (2D) putActorInRoom(10,19);
[003F] (01) putActor(10,4,52);
[0043] (11) animateActor(10,249);
[0046] (2E) delay(60);
[004A] (47) clearState08(461);
[004D] (47) clearState08(103);
[0050] (48) if (VAR_ROOM == 19) {
[0056] (1C)   startSound(9);
[0058] (**) }
[0058] (80) breakHere();
[0059] (48) unless (Var[161] == 0) goto 0058;
[005F] (48) if (Var[126] == 1) {
[0065] (42)   startScript(39);
[0067] (**) }
[0067] (1A) Var[125] = 0;
[006B] (62) stopScript(36);
[006D] (A0) stopObjectCode();
END

// Script 41: Radio Input
[0000] (9A) Var[63] = Var[77];
[0003] (9A) Var[64] = Var[78];
[0006] (9A) Var[65] = Var[79];
[0009] (9A) Var[66] = Var[80];
[000C] (1A) Var[128] = 0;
[0010] (42) startScript(44);
[0012] (80) breakHere();
[0013] (48) unless (Var[69] == 0) goto 0012;
[0019] (1C) startSound(29);
[001B] (48) if (Var[67] == 0) {
[0021] (42)   startScript(42);
[0023] (**) }
[0023] (A0) stopObjectCode();
END

// Script 42: Radio Meteor Police
[0000] (2E) delay(240);
[0004] (40) cutscene();
[0005] (0C) lockCostume(15)
[0008] (58) beginOverride();
[0009] (18) goto 0154;
[000C] (2D) putActorInRoom(15,32);
[000F] (01) putActor(15,50,64);
[0013] (11) animateActor(15,250);
[0016] (72) loadRoom(32);
[0018] (48) if (Var[75] == 0) {
[001E] (32)   setCameraAt(20);
[0020] (2E)   delay(120);
[0024] (12)   panCameraTo(60);
[0026] (80)   breakHere();
[0027] (48)   unless (VAR_CAMERA_POS_X == 60) goto 0026;
[002D] (14)   print(15,"This is the Meteor Police.");
[0046] (AE)   waitForMessage();
[0047] (2E)   delay(120);
[004B] (14)   print(15,"Uh huh^");
[0054] (AE)   waitForMessage();
[0055] (2E)   delay(60);
[0059] (14)   print(15,"You found the murderous purple meteor?\x03I'll be there in 5 minutes!\x03Oh, make sure the lab is unlocked.");
[00B1] (AE)   waitForMessage();
[00B2] (11)   animateActor(15,249);
[00B5] (2E)   delay(60);
[00B9] (14)   print(15,"As for you^\x03^keep it under lightspeed!");
[00DD] (**) }
[00DD] (32) setCameraAt(60);
[00DF] (2E) delay(120);
[00E3] (48) if (Var[75] == 1) {
[00E9] (14)   print(15,"Ok, I'll come back,\x01but this time unlock the lab!");
[0115] (**) }
[0115] (48) if (Var[75] == 2) {
[011B] (14)   print(15,"Enough! I'll come back one more time!");
[013D] (**) }
[013D] (48) if (Var[75] == 3) {
[0143] (14)   print(15,"Forget it!");
[014F] (**) }
[014F] (AE) waitForMessage();
[0150] (2E) delay(120);
[0154] (48) if (VAR_OVERRIDE == 1) {
[015A] (72)   loadRoom(0);
[015C] (**) }
[015C] (14) print(255," ");
[0160] (C0) endCutscene();
[0161] (07) setState08(224);
[0164] (46) Var[75]++;
[0166] (48) if (Var[75] == 4) {
[016C] (1A)   Var[75] = 3;
[0170] (18) } else {
[0173] (42)   startScript(136);
[0175] (**) }
[0175] (A0) stopObjectCode();
END

// Script 43: Meteor Police Arrives
[0000] (0C) loadSound(27)
[0003] (0C) lockSound(27)
[0006] (0C) loadCostume(15)
[0009] (0C) lockCostume(15)
[000C] (40) cutscene();
[000D] (72) loadRoom(4);
[000F] (32) setCameraAt(35);
[0011] (2E) delay(180);
[0015] (1C) startSound(27);
[0017] (80) breakHere();
[0018] (2D) putActorInRoom(15,4);
[001B] (01) putActor(15,35,63);
[001F] (11) animateActor(15,250);
[0022] (4F) if (getState08(160)) {
[0027] (4F)   if (getState08(163)) {
[002C] (47)     clearState08(214);
[002F] (17)     clearState02(214);
[0032] (**)   }
[0032] (**) }
[0032] (52) actorFollowCamera(15);
[0034] (2E) delay(180);
[0038] (66) Var[109] = getClosestObjActor(15);
[003C] (08) if (Var[109] != 255) {
[0042] (C3)   VAR_RESULT = getActorX(Var[109]);
[0045] (04)   if (VAR_RESULT <= 55) {
[004B] (4D)     walkActorToActor(15,Var[109],5);
[004F] (80)     breakHere();
[0050] (3B)     waitForActor(15);
[0052] (11)     animateActor(15,250);
[0055] (14)     print(15,"All right! Let's go get 'em!");
[006F] (AE)     waitForMessage();
[0070] (**)   }
[0070] (**) }
[0070] (36) walkActorToObject(15,160);
[0074] (3B) waitForActor(15);
[0076] (0F) if (!getState08(160)) {
[007B] (18) } else {
[007E] (0F)   unless (!getState08(163)) goto 00D9;
[0083] (**) }
[0083] (14) print(15,"How am I supposed to get in there?");
[00A1] (AE) waitForMessage();
[00A2] (14) print(15,"Oh well, maybe next time.");
[00BA] (1E) walkActorTo(15,35,63);
[00BE] (AE) waitForMessage();
[00BF] (3B) waitForActor(15);
[00C1] (11) animateActor(15,250);
[00C4] (2E) delay(60);
[00C8] (1C) startSound(27);
[00CA] (80) breakHere();
[00CB] (2D) putActorInRoom(15,0);
[00CE] (01) putActor(15,0,0);
[00D2] (2E) delay(120);
[00D6] (18) goto 0217;
[00D9] (2D) putActorInRoom(15,31);
[00DC] (01) putActor(15,7,52);
[00E0] (11) animateActor(15,249);
[00E3] (2D) putActorInRoom(9,30);
[00E6] (01) putActor(9,38,66);
[00EA] (2D) putActorInRoom(13,31);
[00ED] (01) putActor(13,45,63);
[00F1] (72) loadRoom(31);
[00F3] (52) actorFollowCamera(15);
[00F5] (0D) walkActorToActor(15,13,5);
[00F9] (0D) walkActorToActor(13,15,5);
[00FD] (80) breakHere();
[00FE] (80) breakHere();
[00FF] (34) VAR_RESULT = getDist(15,13);
[0105] (04) unless (VAR_RESULT <= 5) goto 00FE;
[010B] (11) animateActor(13,255);
[010E] (14) print(15,"Don't bug me, sucker-face!");
[0128] (AE) waitForMessage();
[0129] (36) walkActorToObject(15,168);
[012D] (3B) waitForActor(15);
[012F] (07) setState08(168);
[0132] (07) setState08(169);
[0135] (1C) startSound(8);
[0137] (2E) delay(60);
[013B] (72) loadRoom(0);
[013D] (0C) loadCostume(9)
[0140] (0C) lockCostume(9)
[0143] (0C) loadCostume(23)
[0146] (0C) lockCostume(23)
[0149] (2D) putActorInRoom(15,30);
[014C] (01) putActor(15,9,60);
[0150] (11) animateActor(15,249);
[0153] (72) loadRoom(30);
[0155] (52) actorFollowCamera(15);
[0157] (80) breakHere();
[0158] (36) walkActorToObject(15,255);
[015C] (0D) walkActorToActor(9,15,5);
[0160] (2E) delay(120);
[0164] (14) print(15,"Stand aside!");
[0172] (3B) waitForActor(15);
[0174] (07) setState08(255);
[0177] (07) setState08(267);
[017A] (1C) startSound(8);
[017C] (2E) delay(60);
[0180] (2D) putActorInRoom(15,51);
[0183] (01) putActor(15,6,60);
[0187] (11) animateActor(15,249);
[018A] (72) loadRoom(51);
[018C] (52) actorFollowCamera(15);
[018E] (80) breakHere();
[018F] (1E) walkActorTo(15,36,54);
[0193] (2E) delay(120);
[0197] (14) print(15,"Sooo, it's you, slimy purple meteor.");
[01B9] (AE) waitForMessage();
[01BA] (3B) waitForActor(15);
[01BC] (14) print(255,"Oh no! You found me!");
[01CF] (11) animateActor(16,12);
[01D2] (AE) waitForMessage();
[01D3] (14) print(15,"You're coming with me crater-head!");
[01F4] (AE) waitForMessage();
[01F5] (2E) delay(120);
[01F9] (1C) startSound(27);
[01FB] (80) breakHere();
[01FC] (32) setCameraAt(38);
[01FE] (2D) putActorInRoom(15,0);
[0201] (01) putActor(15,0,0);
[0205] (2D) putActorInRoom(16,0);
[0208] (01) putActor(16,0,0);
[020C] (57) setState02(45);
[020F] (1A) Var[162] = 3;
[0213] (2E) delay(120);
[0217] (C0) endCutscene();
[0218] (0C) unlockSound(27)
[021B] (0C) unlockCostume(15)
[021E] (0C) unlockCostume(9)
[0221] (0C) unlockCostume(23)
[0224] (47) clearState08(168);
[0227] (47) clearState08(169);
[022A] (47) clearState08(255);
[022D] (47) clearState08(267);
[0230] (A0) stopObjectCode();
END

// Script 44: Input Steel Security Door
[0000] (1A) Var[69] = 1;
[0004] (1A) Var[67] = 0;
[0008] (80) breakHere();
[0009] (60) cursorCommand(31, 3);
[000C] (72) loadRoom(43);
[000E] (48) if (Var[128] == 1) {
[0014] (32)   setCameraAt(60);
[0016] (2E)   delay(60);
[001A] (1A)   Var[14] = 0;
[001E] (5A)   Var[14] += 195;
[0022] (8A)   Var[Var[14]] = Var[191];
[0025] (5A)   Var[195] += 64;
[0029] (1A)   Var[14] = 1;
[002D] (5A)   Var[14] += 195;
[0031] (0A)   Var[Var[14]] = 0;
[0035] (14)   print(255,"Access key is: section \x04\xC5 (\x07\xC3 \x04\xBE)\x01Enter code:\x02");
[0061] (18) } else {
[0064] (32)   setCameraAt(20);
[0066] (**) }
[0066] (1A) Var[68] = 255;
[006A] (80) breakHere();
[006B] (08) unless (Var[68] != 255) goto 006A;
[0071] (88) if (Var[68] != Var[63]) {
[0076] (1A)   Var[67] = 1;
[007A] (**) }
[007A] (1A) Var[68] = 255;
[007E] (80) breakHere();
[007F] (08) unless (Var[68] != 255) goto 007E;
[0085] (88) if (Var[68] != Var[64]) {
[008A] (1A)   Var[67] = 1;
[008E] (**) }
[008E] (1A) Var[68] = 255;
[0092] (80) breakHere();
[0093] (08) unless (Var[68] != 255) goto 0092;
[0099] (88) if (Var[68] != Var[65]) {
[009E] (1A)   Var[67] = 1;
[00A2] (**) }
[00A2] (1A) Var[68] = 255;
[00A6] (80) breakHere();
[00A7] (08) unless (Var[68] != 255) goto 00A6;
[00AD] (88) if (Var[68] != Var[66]) {
[00B2] (1A)   Var[67] = 1;
[00B6] (**) }
[00B6] (1A) Var[69] = 0;
[00BA] (14) print(255,"");
[00BD] (60) cursorCommand(247, 1);
[00C0] (D2) actorFollowCamera(VAR_EGO);
[00C2] (A0) stopObjectCode();
END

// Script 45: Input Safe
[0000] (9A) Var[63] = Var[55];
[0003] (9A) Var[64] = Var[56];
[0006] (9A) Var[65] = Var[57];
[0009] (9A) Var[66] = Var[58];
[000C] (1A) Var[128] = 0;
[0010] (42) startScript(44);
[0012] (80) breakHere();
[0013] (48) unless (Var[69] == 0) goto 0012;
[0019] (48) if (Var[67] == 0) {
[001F] (07)   setState08(219);
[0022] (1C)   startSound(8);
[0024] (48)   if (Var[130] == 0) {
[002A] (1A)     Var[130] = 1;
[002E] (42)     startScript(141);
[0030] (**)   }
[0030] (18) } else {
[0033] (2E)   delay(60);
[0037] (D8)   printEgo("That didn't work.");
[0048] (**) }
[0048] (A0) stopObjectCode();
END

// Script 46: Input Lab Keypad
[0000] (0F) if (!getState08(163)) {
[0005] (9A)   Var[63] = Var[59];
[0008] (9A)   Var[64] = Var[60];
[000B] (9A)   Var[65] = Var[61];
[000E] (9A)   Var[66] = Var[62];
[0011] (1A)   Var[128] = 0;
[0015] (42)   startScript(44);
[0017] (80)   breakHere();
[0018] (48)   unless (Var[69] == 0) goto 0017;
[001E] (48)   if (Var[67] == 0) {
[0024] (67)     clearState04(163);
[0027] (07)     setState08(163);
[002A] (07)     setState08(166);
[002D] (1C)     startSound(13);
[002F] (18)   } else {
[0032] (42)     startScript(69);
[0034] (**)   }
[0034] (**) }
[0034] (A0) stopObjectCode();
END

// Script 47: Meltdown Warning
[0000] (80) breakHere();
[0001] (40) cutscene();
[0002] (9A) Var[122] = Var[121];
[0005] (58) beginOverride();
[0006] (18) goto 0276;
[0009] (2D) putActorInRoom(9,31);
[000C] (01) putActor(9,20,63);
[0010] (11) animateActor(9,250);
[0013] (2D) putActorInRoom(13,31);
[0016] (01) putActor(13,45,63);
[001A] (0C) loadSound(63)
[001D] (0C) lockSound(63)
[0020] (72) loadRoom(31);
[0022] (32) setCameraAt(20);
[0024] (80) breakHere();
[0025] (48) if (Var[122] == 3) {
[002B] (14)   print(9,"Not again!");
[0037] (18) } else {
[003A] (4F)   if (getState08(157)) {
[003F] (08)     if (Var[122] != 1) {
[0045] (14)       print(9,"Oh great, someone shut the power off!");
[0067] (5A)       Var[121] += 1;
[006B] (18)     } else {
[006E] (18)       goto 002B;
[0071] (**)     }
[0071] (08)   } else if (Var[122] != 2) {
[007A] (14)     print(9,"Oh no!\x03The pool is empty again!");
[0097] (5A)     Var[121] += 2;
[009B] (18)   } else {
[009E] (18)     goto 002B;
[00A1] (**)   }
[00A1] (AE)   waitForMessage();
[00A2] (14)   print(9,"We're going to have another meltdown!!");
[00C6] (**) }
[00C6] (36) walkActorToObject(9,423);
[00CA] (AE) waitForMessage();
[00CB] (48) if (Var[122] == 0) {
[00D1] (14)   print(9,"How can I take over the world\x01when I'm on a budget?\x03I always get stuck with cheap equipment.\x03Boy is the meteor going to be pissed.");
[013F] (18) } else {
[0142] (14)   print(9,"How will I ever take over the world\x01when things like this keep happening?");
[0182] (**) }
[0182] (80) breakHere();
[0183] (1E) walkActorTo(9,10,63);
[0187] (3B) waitForActor(9);
[0189] (48) if (VAR_HAVE_MSG == 0) {
[018F] (18) } else {
[0192] (1E)   walkActorTo(9,30,63);
[0196] (3B)   waitForActor(9);
[0198] (48)   unless (VAR_HAVE_MSG == 0) goto 0182;
[019E] (**) }
[019E] (1E) walkActorTo(9,20,63);
[01A2] (3B) waitForActor(9);
[01A4] (1E) walkActorTo(9,21,63);
[01A8] (14) print(9,"TENTACLE!!! FRONT AAAAAAAND CENTER!");
[01CB] (AE) waitForMessage();
[01CC] (1E) walkActorTo(13,25,63);
[01D0] (3B) waitForActor(13);
[01D2] (48) if (Var[122] == 0) {
[01D8] (14)   print(13,"Yes sir, Dr. Fred sir,\x03Purple Tentacle at your disposal, sir.");
[020F] (AE)   waitForMessage();
[0210] (14)   print(9,"Quick! Go check out the reactor.");
[022E] (18) } else {
[0231] (14)   print(13,"Here I am!");
[023C] (AE)   waitForMessage();
[023D] (14)   print(9,"We've got problems again!");
[0256] (**) }
[0256] (AE) waitForMessage();
[0257] (14) print(13,"Yes sir!");
[0261] (2E) delay(120);
[0265] (36) walkActorToObject(13,166);
[0269] (36) walkActorToObject(9,423);
[026D] (3B) waitForActor(13);
[026F] (07) setState08(166);
[0272] (2E) delay(60);
[0276] (47) clearState08(166);
[0279] (C0) endCutscene();
[027A] (42) startScript(48);
[027C] (A0) stopObjectCode();
END

// Script 48: Purple Checks Basement
[0000] (2E) delay(1200);
[0004] (2D) putActorInRoom(13,8);
[0007] (01) putActor(13,72,12);
[000B] (1A) Var[200] = 13;
[000F] (42) startScript(174);
[0011] (48) if (Var[200] == 255) {
[0017] (40)   cutscene();
[0018] (58)   beginOverride();
[0019] (18)   goto 006A;
[001C] (72)   loadRoom(8);
[001E] (52)   actorFollowCamera(13);
[0020] (36)   walkActorToObject(13,335);
[0024] (3B)   waitForActor(13);
[0026] (1C)   startSound(12);
[0028] (9B)   setBitVar(2816,VAR_ROOM,0);
[002D] (42)   startScript(55);
[002F] (2E)   delay(120);
[0033] (14)   print(13,"Hmm. There's no one here!");
[004B] (AE)   waitForMessage();
[004C] (1C)   startSound(12);
[004E] (9B)   setBitVar(2816,VAR_ROOM,1);
[0053] (42)   startScript(55);
[0055] (2E)   delay(60);
[0059] (1E)   walkActorTo(13,72,12);
[005D] (3B)   waitForActor(13);
[005F] (2D)   putActorInRoom(13,31);
[0062] (01)   putActor(13,45,63);
[0066] (2E)   delay(60);
[006A] (48)   if (VAR_OVERRIDE == 1) {
[0070] (72)     loadRoom(0);
[0072] (**)   }
[0072] (2D)   putActorInRoom(13,31);
[0075] (01)   putActor(13,45,63);
[0079] (1B)   setBitVar(2816,8,1);
[007E] (C0)   endCutscene();
[007F] (18) } else {
[0082] (08)   if (VAR_ROOM != 8) {
[0088] (9A)     VAR_EGO = Var[200];
[008B] (D2)     actorFollowCamera(VAR_EGO);
[008D] (**)   }
[008D] (2E)   delay(60);
[0091] (14)   print(13,"I'll get you!");
[009F] (42)   startScript(49);
[00A1] (**) }
[00A1] (0C) unlockSound(63)
[00A4] (A0) stopObjectCode();
END

// Script 49: Purple Takes Kid To Dungeon
[0000] (0C) loadSound(36)
[0003] (80) breakHere();
[0004] (80) breakHere();
[0005] (66) Var[112] = getClosestObjActor(13);
[0009] (48) if (Var[112] == 255) {
[000F] (2D)   putActorInRoom(13,31);
[0012] (01)   putActor(13,45,63);
[0016] (62)   stopScript(0);
[0018] (**) }
[0018] (4D) walkActorToActor(13,Var[112],2);
[001C] (74) VAR_RESULT = getDist(13,Var[112]);
[0021] (04) unless (VAR_RESULT <= 2) goto 0003;
[0027] (1C) startSound(36);
[0029] (91) animateActor(Var[112],255);
[002C] (91) animateActor(Var[112],250);
[002F] (9B) setBitVar(2952,Var[112],1);
[0034] (14) print(13,"Ah hah!\x03I caught you sneaking around our house!");
[005F] (AE) waitForMessage();
[0060] (14) print(13,"Dr. Fred isn't paying me for nothing!");
[0082] (AE) waitForMessage();
[0083] (14) print(13,"To the dungeon, intruder!");
[009C] (AE) waitForMessage();
[009D] (2E) delay(180);
[00A1] (9B) setBitVar(2952,Var[112],0);
[00A6] (10) VAR_RESULT = getObjectOwner(214);
[00AA] (88) if (VAR_RESULT != Var[112]) {
[00AF] (10)   VAR_RESULT = getObjectOwner(60);
[00B3] (88)   if (VAR_RESULT != Var[112]) {
[00B8] (48)     if (VAR_ROOM == 31) {
[00BE] (B1)       VAR_RESULT = getBitVar(2960,Var[112]);
[00C3] (48)       if (VAR_RESULT == 1) {
[00C9] (0C)         loadCostume(14)
[00CC] (42)         startScript(115);
[00CE] (62)         stopScript(0);
[00D0] (**)       }
[00D0] (48)       if (Var[93] == 1) {
[00D6] (0C)         loadCostume(11)
[00D9] (42)         startScript(99);
[00DB] (62)         stopScript(0);
[00DD] (**)       }
[00DD] (**)     }
[00DD] (08)   } else if (Var[101] != 1) {
[00E6] (18)     goto 00B8;
[00E9] (**)   }
[00E9] (**) }
[00E9] (40) cutscene();
[00EA] (58) beginOverride();
[00EB] (18) goto 0154;
[00EE] (07) setState08(159);
[00F1] (9A) Var[109] = Var[112];
[00F4] (42) startScript(146);
[00F6] (AD) putActorInRoom(Var[112],4);
[00F9] (C1) putActor(Var[112],Var[110],63);
[00FD] (91) animateActor(Var[112],249);
[0100] (2D) putActorInRoom(13,4);
[0103] (01) putActor(13,61,63);
[0107] (72) loadRoom(4);
[0109] (32) setCameraAt(90);
[010B] (2E) delay(120);
[010F] (14) print(13,"I hope you rot!");
[011E] (4F) if (getState08(163)) {
[0123] (14)   print(13,"And this time I'll make sure you\x01won't get out!");
[014D] (AE)   waitForMessage();
[014E] (42)   startScript(101);
[0150] (**) }
[0150] (2E) delay(120);
[0154] (42) startScript(56);
[0156] (1E) walkActorTo(13,10,63);
[015A] (3B) waitForActor(13);
[015C] (2D) putActorInRoom(13,31);
[015F] (01) putActor(13,45,63);
[0163] (C0) endCutscene();
[0164] (27) setState04(163);
[0167] (47) clearState08(163);
[016A] (47) clearState08(166);
[016D] (47) clearState08(161);
[0170] (47) clearState08(162);
[0173] (27) setState04(160);
[0176] (47) clearState08(160);
[0179] (1A) Var[175] = 0;
[017D] (42) startScript(164);
[017F] (60) cursorCommand(247, 1);
[0182] (A0) stopObjectCode();
END

// no script 50

// Script 51: Green Blocks Kid
[0000] (48) if (Var[105] == 1) {
[0006] (2E)   delay(60);
[000A] (**) }
[000A] (9A) Var[114] = VAR_EGO;
[000D] (42) startScript(161);
[000F] (0C) loadSound(36)
[0012] (1A) Var[105] = 1;
[0016] (9B) setBitVar(2952,Var[114],0);
[001B] (48) if (Var[114] == 5) {
[0021] (34)   VAR_RESULT = getDist(5,14);
[0027] (78)   if (VAR_RESULT < 10) {
[002D] (60)     cursorCommand(15, 2);
[0030] (80)     breakHere();
[0031] (11)     animateActor(5,255);
[0034] (19)     doSentence(STOP);
[0036] (1A)     Var[131] = 1;
[003A] (D8)     printEgo("AAAAAAAAAAAAAAAAAAAEEEEEEEEEEEEEEE!");
[005F] (19)     doSentence(13,456,0,0);
[0066] (80)     breakHere();
[0067] (08)     unless (VAR_ROOM != 12) goto 0066;
[006D] (18)     goto 00D3;
[0070] (**)   }
[0070] (**) }
[0070] (74) VAR_RESULT = getDist(14,Var[114]);
[0075] (04) if (VAR_RESULT <= 3) {
[007B] (78)   if (Var[98] < 7) {
[0081] (14)     print(14,"You can't pass until you feed me!");
[009F] (48)   } else if (Var[99] == 0) {
[00A8] (14)     print(14,"Where's my drink!");
[00BA] (**)   }
[00BA] (**) }
[00BA] (38) if (Var[98] >= 7) {
[00C0] (48)   if (Var[99] == 1) {
[00C6] (18)     goto 00D3;
[00C9] (**)   }
[00C9] (**) }
[00C9] (80) breakHere();
[00CA] (83) VAR_RESULT = getActorRoom(Var[114]);
[00CD] (08) unless (VAR_RESULT != 12) goto 001B;
[00D3] (62) stopScript(161);
[00D5] (9B) setBitVar(2952,Var[114],0);
[00DA] (1A) Var[105] = 0;
[00DE] (1E) walkActorTo(14,17,52);
[00E2] (3B) waitForActor(14);
[00E4] (A0) stopObjectCode();
END

// Script 52: Plant Burps
[0000] (48) if (Var[193] == 0) {
[0006] (80)   breakHere();
[0007] (11)   animateActor(19,12);
[000A] (80)   breakHere();
[000B] (11)   animateActor(19,16);
[000E] (80)   breakHere();
[000F] (48) } else if (Var[193] == 1) {
[0018] (11)   animateActor(19,16);
[001B] (2E)   delay(240);
[001F] (11)   animateActor(19,12);
[0022] (80)   breakHere();
[0023] (48)   if (VAR_HAVE_MSG == 0) {
[0029] (13)     ActorOps(0,[TalkColor(5)]);
[002D] (14)     print(255,"Burp!");
[0035] (13)     ActorOps(0,[TalkColor(14)]);
[0039] (**)   }
[0039] (2E)   delay(30);
[003D] (11)   animateActor(19,16);
[0040] (2E)   delay(300);
[0044] (18)   /* goto 0047; */
[0047] (**) }
[0047] (80) breakHere();
[0048] (18) goto 0000;
[004B] (A0) stopObjectCode();
END

// Script 53: Read Wanted Poster
[0000] (D8) printEgo("WANTED: For terrible acts of violence.\x01  One murderous purple slimy meteor.");
[0043] (AE) waitForMessage();
[0044] (D8) printEgo("If found, call \x02");
[0053] (48) if (Var[76] == 0) {
[0059] (D8)   printEgo("3412.");
[0060] (**) }
[0060] (48) if (Var[76] == 1) {
[0066] (D8)   printEgo("1138.");
[006D] (**) }
[006D] (48) if (Var[76] == 2) {
[0073] (D8)   printEgo("9111.");
[007A] (**) }
[007A] (48) if (Var[76] == 3) {
[0080] (D8)   printEgo("1977.");
[0087] (**) }
[0087] (48) if (Var[76] == 4) {
[008D] (D8)   printEgo("0525.");
[0094] (**) }
[0094] (AE) waitForMessage();
[0095] (A0) stopObjectCode();
END

// Script 54
[0000] (48) if (Var[174] == 0) {
[0006] (11)   animateActor(19,249);
[0009] (30)   setBoxFlags(4,64);
[000C] (**) }
[000C] (48) if (Var[174] == 1) {
[0012] (11)   animateActor(19,250);
[0015] (30)   setBoxFlags(4,64);
[0018] (**) }
[0018] (48) if (Var[174] == 2) {
[001E] (11)   animateActor(19,251);
[0021] (48)   if (Var[193] == 1) {
[0027] (30)     setBoxFlags(4,5);
[002A] (18)   } else {
[002D] (30)     setBoxFlags(4,64);
[0030] (**)   }
[0030] (**) }
[0030] (48) if (Var[174] == 255) {
[0036] (2D)   putActorInRoom(19,0);
[0039] (01)   putActor(19,0,0);
[003D] (30)   setBoxFlags(4,64);
[0040] (62)   stopScript(52);
[0042] (**) }
[0042] (A0) stopObjectCode();
END

// Script 55: Check Light State
[0000] (70) lights(6,4,1);
[0004] (1A) Var[111] = 0;
[0008] (10) Var[109] = getObjectOwner(84);
[000C] (83) VAR_RESULT = getActorRoom(Var[109]);
[000F] (C8) if (VAR_RESULT == VAR_ROOM) {
[0014] (48)   if (Var[156] == 1) {
[001A] (1A)     Var[111] = 12;
[001E] (**)   }
[001E] (**) }
[001E] (0F) if (!getState08(157)) {
[0023] (B1)   VAR_RESULT = getBitVar(2816,VAR_ROOM);
[0028] (48)   if (VAR_RESULT == 0) {
[002E] (1A)     Var[111] = 11;
[0032] (**)   }
[0032] (**) }
[0032] (B1) VAR_RESULT = getBitVar(2872,VAR_ROOM);
[0037] (48) if (VAR_RESULT == 1) {
[003D] (1A)   Var[111] = 11;
[0041] (18) } else {
[0044] (F0)   lights(Var[111],0,0);
[0048] (**) }
[0048] (A0) stopObjectCode();
END

// Script 56: Close Dungeon Door
[0000] (4F) if (getState08(159)) {
[0005] (47)   clearState08(159);
[0008] (47)   clearState08(155);
[000B] (1C)   startSound(42);
[000D] (**) }
[000D] (1A) Var[214] = 0;
[0011] (A0) stopObjectCode();
END

// Script 57: Play Outside Noise
[0000] (1C) startSound(38);
[0002] (2E) delay(360);
[0006] (18) goto 0000;
[0009] (A0) stopObjectCode();
END

// Script 58: Start Microwave
[0000] (0C) loadSound(15)
[0003] (0C) loadSound(14)
[0006] (1C) startSound(15);
[0008] (2E) delay(240);
[000C] (3C) stopSound(15);
[000E] (1C) startSound(14);
[0010] (48) if (Var[85] == 6) {
[0016] (1A)   Var[81] = 1;
[001A] (42)   startScript(84);
[001C] (42)   startScript(81);
[001E] (**) }
[001E] (4F) if (getState08(83)) {
[0023] (42)   startScript(60);
[0025] (48)   if (Var[166] == 3) {
[002B] (1A)     Var[166] = 4;
[002F] (**)   }
[002F] (**) }
[002F] (A0) stopObjectCode();
END

// Script 59: Put Something In Microwave
[0000] (48) if (VAR_ACTIVE_OBJECT2 == 34) {
[0006] (04)   if (VAR_EGO <= 2) {
[000C] (CF)     if (getState08(VAR_ACTIVE_OBJECT1)) {
[0010] (48)       if (Var[85] == 0) {
[0016] (29)         setOwnerOf(34,14);
[001A] (07)         setState08(86);
[001D] (17)         clearState02(86);
[0020] (1A)         Var[85] = 1;
[0024] (18)         /* goto 0027; */
[0027] (**)       }
[0027] (18)     } else {
[002A] (42)       startScript(68);
[002C] (**)     }
[002C] (18)   } else {
[002F] (D8)     printEgo("How sick!");
[0039] (**)   }
[0039] (48) } else if (VAR_ACTIVE_OBJECT2 == 222) {
[0042] (CF)   if (getState08(VAR_ACTIVE_OBJECT1)) {
[0046] (08)     if (Var[85] != 1) {
[004C] (48)       if (Var[81] == 0) {
[0052] (29)         setOwnerOf(222,14);
[0056] (07)         setState08(31);
[0059] (17)         clearState02(31);
[005C] (5A)         Var[85] += 2;
[0060] (**)       }
[0060] (48)       if (Var[81] == 2) {
[0066] (D8)         printEgo("It's too late for that!");
[007B] (**)       }
[007B] (48)       if (Var[81] == 1) {
[0081] (D8)         printEgo("Not again!");
[008C] (**)       }
[008C] (18)       /* goto 008F; */
[008F] (**)     }
[008F] (18)   } else {
[0092] (42)     startScript(68);
[0094] (**)   }
[0094] (48) } else if (VAR_ACTIVE_OBJECT2 == 132) {
[009D] (CF)   if (getState08(VAR_ACTIVE_OBJECT1)) {
[00A1] (08)     if (Var[85] != 1) {
[00A7] (48)       if (Var[166] == 0) {
[00AD] (D8)         printEgo("I'd better fill it first.");
[00C4] (18)       } else {
[00C7] (29)         setOwnerOf(132,14);
[00CB] (07)         setState08(83);
[00CE] (17)         clearState02(83);
[00D1] (5A)         Var[85] += 4;
[00D5] (**)       }
[00D5] (18)       /* goto 00D8; */
[00D8] (**)     }
[00D8] (18)   } else {
[00DB] (42)     startScript(68);
[00DD] (**)   }
[00DD] (18) } else {
[00E0] (D8)   printEgo("I'd better not.");
[00EF] (**) }
[00EF] (62) stopScript(0);
[00F1] (49) faceActor(116,VAR_KEYPRESS);

// Script 60: 1 Minute Timer
[0000] (2E) delay(3600);
[0004] (A0) stopObjectCode();
END

// Script 61: Kid Dies
[0000] (80) breakHere();
[0001] (40) cutscene();
[0002] (48) if (Var[95] == 1) {
[0008] (D8)   printEgo("Oh no! Radioactive steam! Ahheeeeeeee^");
[002C] (91)   animateActor(VAR_EGO,248);
[002F] (80)   breakHere();
[0030] (91)   animateActor(VAR_EGO,250);
[0033] (80)   breakHere();
[0034] (91)   animateActor(VAR_EGO,249);
[0037] (80)   breakHere();
[0038] (91)   animateActor(VAR_EGO,251);
[003B] (80)   breakHere();
[003C] (16)   Var[71] = getRandomNr(70);
[003F] (16)   Var[72] = getRandomNr(12);
[0042] (5A)   Var[72] += 56;
[0046] (FE)   walkActorTo(VAR_EGO,Var[71],Var[72]);
[004A] (48)   unless (VAR_HAVE_MSG == 0) goto 002C;
[0050] (9A)   Var[96] = VAR_EGO;
[0053] (**) }
[0053] (48) if (Var[95] == 2) {
[0059] (72)   loadRoom(6);
[005B] (32)   setCameraAt(41);
[005D] (2E)   delay(120);
[0061] (14)   print(255,"Glug! Glug! Glug! Glug!");
[0078] (AE)   waitForMessage();
[0079] (2E)   delay(180);
[007D] (**) }
[007D] (48) if (Var[95] == 3) {
[0083] (62)   stopScript(88);
[0085] (AE)   waitForMessage();
[0086] (14)   print(11,"Wait! What IS that?");
[0099] (AE)   waitForMessage();
[009A] (14)   print(11,"It has bits of fur like my hamster's!");
[00BB] (AE)   waitForMessage();
[00BC] (14)   print(11,"Oh no!!! What did you do!!! Argh!!!");
[00DC] (AE)   waitForMessage();
[00DD] (9A)   Var[96] = VAR_EGO;
[00E0] (2D)   putActorInRoom(11,26);
[00E3] (01)   putActor(11,10,52);
[00E7] (**) }
[00E7] (48) if (Var[95] == 6) {
[00ED] (9A)   Var[96] = VAR_EGO;
[00F0] (72)   loadRoom(27);
[00F2] (32)   setCameraAt(28);
[00F4] (2E)   delay(120);
[00F8] (14)   print(255,"YUM!!");
[0100] (2E)   delay(180);
[0104] (**) }
[0104] (48) if (Var[95] == 4) {
[010A] (AE)   waitForMessage();
[010B] (9A)   Var[96] = VAR_EGO;
[010E] (**) }
[010E] (93) ActorOps(Var[96],[Costume(0)]);
[0112] (9B) setBitVar(2952,Var[96],1);
[0117] (1A) Var[109] = 253;
[011B] (90) VAR_RESULT = getObjectOwner(Var[109]);
[011E] (C8) if (VAR_RESULT == Var[96]) {
[0123] (A9)   setOwnerOf(Var[109],0);
[0126] (**) }
[0126] (3A) Var[109] -= 1;
[012A] (48) unless (Var[109] == 0) goto 011B;
[0130] (46) Var[97]++;
[0132] (48) if (Var[96] == 3) {
[0138] (1A)   Var[115] = 1;
[013C] (**) }
[013C] (48) if (Var[97] == 1) {
[0142] (47)   clearState08(62);
[0145] (17)   clearState02(62);
[0148] (AD)   putActorInRoom(Var[96],1);
[014B] (81)   putActor(Var[96],106,64);
[014F] (**) }
[014F] (48) if (Var[97] == 2) {
[0155] (47)   clearState08(63);
[0158] (17)   clearState02(63);
[015B] (AD)   putActorInRoom(Var[96],1);
[015E] (81)   putActor(Var[96],114,64);
[0162] (**) }
[0162] (48) if (Var[97] == 3) {
[0168] (47)   clearState08(64);
[016B] (17)   clearState02(64);
[016E] (AD)   putActorInRoom(Var[96],1);
[0171] (81)   putActor(Var[96],122,64);
[0175] (**) }
[0175] (C3) Var[109] = getActorX(Var[96]);
[0178] (72) loadRoom(1);
[017A] (B2) setCameraAt(Var[109]);
[017C] (2E) delay(360);
[0180] (C0) endCutscene();
[0181] (48) if (Var[97] == 3) {
[0187] (42)   startScript(62);
[0189] (**) }
[0189] (60) cursorCommand(247, 1);
[018C] (A0) stopObjectCode();
END

// Script 62: Lose Game
[0000] (3C) stopSound(32);
[0002] (3C) stopSound(33);
[0004] (2E) delay(60);
[0008] (0C) unlockCostume(9)
[000B] (0C) unlockCostume(23)
[000E] (0C) unlockSound(60)
[0011] (0C) unlockCostume(20)
[0014] (0C) unlockScript(110)
[0017] (40) cutscene();
[0018] (1A) Var[109] = 1;
[001C] (AD) putActorInRoom(Var[109],0);
[001F] (46) Var[109]++;
[0021] (44) unless (Var[109] > 8) goto 001C;
[0027] (1A) Var[110] = 1;
[002B] (90) VAR_RESULT = getObjectOwner(Var[110]);
[002E] (08) if (VAR_RESULT != 15) {
[0034] (A9)   setOwnerOf(Var[110],0);
[0037] (**) }
[0037] (46) Var[110]++;
[0039] (44) unless (Var[110] > 255) goto 002B;
[003F] (72) loadRoom(47);
[0041] (0C) loadSound(55)
[0044] (32) setCameraAt(20);
[0046] (58) beginOverride();
[0047] (18) goto 0223;
[004A] (08) if (Var[97] != 3) {
[0050] (2E)   delay(60);
[0054] (80)   breakHere();
[0055] (1C)   startSound(69);
[0057] (05)   drawObject(46,255,255);
[005C] (2E)   delay(15);
[0060] (05)   drawObject(47,255,255);
[0065] (2E)   delay(15);
[0069] (05)   drawObject(48,255,255);
[006E] (2E)   delay(15);
[0072] (05)   drawObject(49,255,255);
[0077] (2E)   delay(240);
[007B] (**) }
[007B] (80) breakHere();
[007C] (7C) VAR_RESULT = isSoundRunning(69);
[007F] (28) unless (!VAR_RESULT) goto 007B;
[0083] (3C) stopSound(69);
[0085] (02) startMusic(55);
[0087] (2E) delay(120);
[008B] (48) if (Var[97] == 3) {
[0091] (14)   print(255,"        All the kids have died.\x03     The rescue attempt has failed.\x03     Sandy is doomed to zombiehood.");
[00E5] (AE)   waitForMessage();
[00E6] (14)   print(255,"Dr. Fred, still under the evil meteor's\x01influence, is destined to take over the^\x03^world and a small part of the galaxy.\x03Hope you like purple...heh, heh, heh");
[016D] (18) } else {
[0170] (14)   print(255,"         The house and everyone\x01         within a 5 mile radius\x03           have been destroyed\x01       in a massive nuclear meltdown.");
[01D7] (**) }
[01D7] (AE) waitForMessage();
[01D8] (1A) Var[109] = 0;
[01DC] (7C) VAR_RESULT = isSoundRunning(55);
[01DF] (28) if (!VAR_RESULT) {
[01E3] (02)   startMusic(55);
[01E5] (**) }
[01E5] (2E) delay(300);
[01E9] (14) print(255,"            THE GAME IS OVER");
[01FF] (2E) delay(300);
[0203] (14) print(255,"        Press f4 to play again.");
[021D] (48) unless (Var[109] == 1) goto 01DC;
[0223] (72) loadRoom(0);
[0225] (20) stopMusic();
[0226] (98) restart();
[0227] (C0) endCutscene();
[0228] (A0) stopObjectCode();
END


// Script 63: Win Game
[0000] (0C) unlockSound(60)
[0003] (0C) unlockCostume(20)
[0006] (0C) unlockScript(110)
[0009] (0C) unlockScript(3)
[000C] (0C) unlockSound(8)
[000F] (0C) unlockSound(9)
[0012] (2D) putActorInRoom(8,0);
[0015] (01) putActor(8,0,0);
[0019] (3D) setActorElevation(23,0);
[001C] (40) cutscene();
[001D] (58) beginOverride();
[001E] (18) goto 02D8;
[0021] (72) loadRoom(0);
[0023] (1A) Var[109] = 1;
[0027] (AD) putActorInRoom(Var[109],0);
[002A] (46) Var[109]++;
[002C] (44) unless (Var[109] > 8) goto 0027;
[0032] (1A) Var[110] = 1;
[0036] (90) VAR_RESULT = getObjectOwner(Var[110]);
[0039] (08) if (VAR_RESULT != 15) {
[003F] (A9)   setOwnerOf(Var[110],0);
[0042] (**) }
[0042] (46) Var[110]++;
[0044] (44) unless (Var[110] > 255) goto 0036;
[004A] (0C) loadCostume(23)
[004D] (0C) lockCostume(23)
[0050] (0C) loadSound(55)
[0053] (0C) lockSound(55)
[0056] (48) if (Var[115] == 0) {
[005C] (1A)   Var[116] = 3;
[0060] (**) }
[0060] (48) if (Var[101] == 4) {
[0066] (42)   startScript(124);
[0068] (80)   breakHere();
[0069] (68)   VAR_RESULT = isScriptRunning(124);
[006C] (48)   unless (VAR_RESULT == 0) goto 0068;
[0072] (18) } else {
[0075] (11)   animateActor(9,250);
[0078] (48)   if (Var[115] == 1) {
[007E] (AD)     putActorInRoom(Var[116],1);
[0081] (81)     putActor(Var[116],98,64);
[0085] (91)     animateActor(Var[116],250);
[0088] (11)     animateActor(23,250);
[008B] (2D)     putActorInRoom(23,1);
[008E] (01)     putActor(23,94,62);
[0092] (2D)     putActorInRoom(9,1);
[0095] (01)     putActor(9,86,60);
[0099] (18)   } else {
[009C] (AD)     putActorInRoom(Var[116],1);
[009F] (81)     putActor(Var[116],55,40);
[00A3] (91)     animateActor(Var[116],250);
[00A6] (11)     animateActor(23,250);
[00A9] (2D)     putActorInRoom(23,1);
[00AC] (01)     putActor(23,58,40);
[00B0] (2D)     putActorInRoom(9,1);
[00B3] (01)     putActor(9,62,40);
[00B7] (**)   }
[00B7] (72)   loadRoom(1);
[00B9] (D2)   actorFollowCamera(Var[116]);
[00BB] (48)   if (Var[115] == 1) {
[00C1] (2E)     delay(120);
[00C5] (1E)     walkActorTo(9,88,60);
[00C9] (14)     print(9,"I'm sorry my mad, insane plan\x01cost your boyfriend his life.\x03How can I repay you for what I've done?");
[011E] (80)     breakHere();
[011F] (44)     unless (VAR_CHARCOUNT > 30) goto 011E;
[0125] (91)     animateActor(Var[116],248);
[0128] (AE)     waitForMessage();
[0129] (11)     animateActor(23,248);
[012C] (2E)     delay(120);
[0130] (14)     print(9,"Hey!! Wait, I could build a machine\x01that would bring him back to life!");
[016D] (80)     breakHere();
[016E] (44)     unless (VAR_CHARCOUNT > 60) goto 016D;
[0174] (11)     animateActor(23,250);
[0177] (91)     animateActor(Var[116],250);
[017A] (AE)     waitForMessage();
[017B] (1E)     walkActorTo(9,86,80);
[017F] (3B)     waitForActor(9);
[0181] (14)     print(9,"But that's another story.\x03Ha, ha, ha, ha, ha, ha!!");
[01AE] (80)     breakHere();
[01AF] (44)     unless (VAR_CHARCOUNT > 28) goto 01AE;
[01B5] (1E)     walkActorTo(9,40,80);
[01B9] (AE)     waitForMessage();
[01BA] (2E)     delay(60);
[01BE] (14)     print(23,"Great.");
[01C7] (02)     startMusic(55);
[01C9] (2E)     delay(120);
[01CD] (18)   } else {
[01D0] (2E)     delay(60);
[01D4] (11)     animateActor(9,248);
[01D7] (14)     print(9,"I'm sorry my mad, insane plan\x01caused you so much trouble.\x03How can I ever repay you for your help?");
[022A] (80)     breakHere();
[022B] (44)     unless (VAR_CHARCOUNT > 30) goto 022A;
[0231] (91)     animateActor(Var[116],249);
[0234] (2E)     delay(60);
[0238] (11)     animateActor(23,249);
[023B] (AE)     waitForMessage();
[023C] (94)     print(Var[116],"Cash would be nice!!");
[0250] (AE)     waitForMessage();
[0251] (14)     print(9,"Don't be a tuna head!");
[0265] (2E)     delay(30);
[0269] (91)     animateActor(Var[116],250);
[026C] (2E)     delay(30);
[0270] (11)     animateActor(23,250);
[0273] (02)     startMusic(55);
[0275] (AE)     waitForMessage();
[0276] (11)     animateActor(9,250);
[0279] (2E)     delay(120);
[027D] (**)   }
[027D] (**) }
[027D] (72) loadRoom(0);
[027F] (EE) dummy(EE);
[0280] (1A) Var[109] = 0;
[0284] (7C) VAR_RESULT = isSoundRunning(55);
[0287] (28) if (!VAR_RESULT) {
[028B] (02)   startMusic(55);
[028D] (**) }
[028D] (14) print(255,"   Congratulations! You won the game!");
[02B0] (2E) delay(300);
[02B4] (14) print(255,"        Press f4 to play again.");
[02CE] (2E) delay(300);
[02D2] (48) unless (Var[109] == 1) goto 0284;
[02D8] (C0) endCutscene();
[02D9] (20) stopMusic();
[02DA] (98) restart();
[02DB] (A0) stopObjectCode();
END

// Script 64: Say "It seems to be turned off."
[0000] (D8) printEgo("It seems to be turned off.");
[0017] (A0) stopObjectCode();
END

// Script 65: Say "The machine is locked."
[0000] (D8) printEgo("The machine is locked.");
[0015] (A0) stopObjectCode();
END

// Script 66: Say "It must require a special key."
[0000] (D8) printEgo("It must require a special key.");
[001B] (A0) stopObjectCode();
END

// Script 67: Say "It's firmly attached to the wall."
[0000] (D8) printEgo("It's firmly attached to the wall.");
[001E] (A0) stopObjectCode();
END

// Script 68: Say "The door is closed."
[0000] (D8) printEgo("The door is closed.");
[0012] (A0) stopObjectCode();
END

// Script 69: Say "The door is locked."
[0000] (D8) printEgo("The door is locked.");
[0012] (A0) stopObjectCode();
END

// Script 70: Say "It's too heavy!"
[0000] (D8) printEgo("It's too heavy!");
[000F] (A0) stopObjectCode();
END

// Script 71: Say "I can't unlock the door with this."
[0000] (D8) printEgo("I can't unlock the door with this.");
[001E] (A0) stopObjectCode();
END

// no script 72

// Script 73: Say "It's empty."
[0000] (D8) printEgo("It's empty.");
[000C] (A0) stopObjectCode();
END

// Script 74: Turn On Microwave
[0000] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0006] (**) }
[0006] (4F) if (getState08(157)) {
[000B] (D8)   printEgo("The power's off.");
[001B] (4F) } else if (getState08(87)) {
[0023] (D8)   printEgo("It's already cooked!");
[0037] (18) } else {
[003A] (48)   if (Var[85] == 0) {
[0040] (D8)     printEgo("I shouldn't turn on an empty microwave.");
[0063] (**)   }
[0063] (48)   if (Var[85] == 1) {
[0069] (42)     startScript(17);
[006B] (**)   }
[006B] (48)   if (Var[85] == 2) {
[0071] (D8)     printEgo("I need some liquid in here first.");
[008E] (**)   }
[008E] (44)   if (Var[85] > 2) {
[0094] (42)     startScript(58);
[0096] (**)   }
[0096] (**) }
[0096] (A0) stopObjectCode();
END

// Script 75: Pool Valve
[0000] (1A) Var[175] = 1;
[0004] (1C) startSound(43);
[0006] (2E) delay(120);
[000A] (1A) Var[175] = 0;
[000E] (1C) startSound(17);
[0010] (4F) if (getState08(66)) {
[0015] (07)   setState08(139);
[0018] (17)   clearState02(172);
[001B] (68)   VAR_RESULT = isScriptRunning(12);
[001E] (48)   if (VAR_RESULT == 0) {
[0024] (42)     startScript(12);
[0026] (**)   }
[0026] (18) } else {
[0029] (47)   clearState08(139);
[002C] (0F)   if (!getState08(157)) {
[0031] (42)     startScript(13);
[0033] (**)   }
[0033] (57)   setState02(172);
[0036] (1A)   Var[96] = 1;
[003A] (83)   VAR_RESULT = getActorRoom(Var[96]);
[003D] (48)   if (VAR_RESULT == 2) {
[0043] (1A)     Var[95] = 2;
[0047] (42)     startScript(61);
[0049] (**)   }
[0049] (80)   breakHere();
[004A] (68)   VAR_RESULT = isScriptRunning(61);
[004D] (48)   unless (VAR_RESULT == 0) goto 0049;
[0053] (46)   Var[96]++;
[0055] (44)   unless (Var[96] > 7) goto 003A;
[005B] (**) }
[005B] (2E) delay(300);
[005F] (3C) stopSound(17);
[0061] (A0) stopObjectCode();
END

// Script 76: Open Film
[0000] (48) if (Var[155] == 1) {
[0006] (D8)   printEgo("It's already opened.");
[001A] (**) }
[001A] (48) if (Var[155] == 0) {
[0020] (D8)   printEgo("Ok, it's opened.");
[0030] (AE)   waitForMessage();
[0031] (10)   Var[109] = getObjectOwner(56);
[0035] (48)   if (Var[109] == 0) {
[003B] (62)     stopScript(0);
[003D] (**)   }
[003D] (83)   Var[110] = getActorRoom(Var[109]);
[0040] (B1)   VAR_RESULT = getBitVar(2816,Var[110]);
[0045] (48)   if (VAR_RESULT == 0) {
[004B] (0F)     if (!getState08(157)) {
[0050] (C8)       if (VAR_ROOM == Var[110]) {
[0055] (D8)         printEgo("I think I just exposed the film.");
[0071] (**)       }
[0071] (1A)       Var[155] = 1;
[0075] (**)     }
[0075] (**)   }
[0075] (2E)   delay(900);
[0079] (08)   unless (Var[155] != 0) goto 0031;
[007F] (**) }
[007F] (A0) stopObjectCode();
END

// Script 77: Develop Film
[0000] (4F) if (getState08(157)) {
[0005] (D8)   printEgo("The power's off.");
[0015] (48) } else if (VAR_EGO == 4) {
[001E] (38)   if (Var[171] >= 3) {
[0024] (60)     cursorCommand(15, 2);
[0027] (4F)     if (getState08(459)) {
[002C] (B6)       walkActorToObject(VAR_EGO,459);
[0030] (BB)       waitForActor(VAR_EGO);
[0032] (47)       clearState08(459);
[0035] (1C)       startSound(9);
[0037] (80)       breakHere();
[0038] (**)     }
[0038] (B6)     walkActorToObject(VAR_EGO,391);
[003C] (BB)     waitForActor(VAR_EGO);
[003E] (1A)     Var[109] = 2;
[0042] (1C)     startSound(41);
[0044] (2E)     delay(120);
[0048] (3C)     stopSound(41);
[004A] (B6)     walkActorToObject(VAR_EGO,390);
[004E] (BB)     waitForActor(VAR_EGO);
[0050] (91)     animateActor(VAR_EGO,250);
[0053] (2E)     delay(120);
[0057] (B6)     walkActorToObject(VAR_EGO,391);
[005B] (BB)     waitForActor(VAR_EGO);
[005D] (91)     animateActor(VAR_EGO,250);
[0060] (80)     breakHere();
[0061] (3A)     Var[109] -= 1;
[0065] (48)     unless (Var[109] == 0) goto 0042;
[006B] (54)     setObjectName(56,"prints");
[0075] (48)     if (Var[155] == 1) {
[007B] (18)       goto 0087;
[007E] (48)     } else if (Var[171] == 4) {
[0087] (D8)       printEgo("Nobody's going to want ruined prints!");
[00A9] (1A)       Var[155] = 2;
[00AD] (18)     } else {
[00B0] (D8)       printEgo("Perfect!");
[00BA] (1A)       Var[155] = 3;
[00BE] (**)     }
[00BE] (60)     cursorCommand(247, 1);
[00C1] (48)   } else if (Var[171] == 0) {
[00CA] (D8)     printEgo("I need some developer solution first.");
[00EC] (18)   } else {
[00EF] (D8)     printEgo("Water's not going to work!");
[0107] (**)   }
[0107] (18) } else {
[010A] (D8)   printEgo("I don't know how.");
[011A] (**) }
[011A] (A0) stopObjectCode();
END

// Script 78: Get Tap Water
[0000] (48) if (VAR_ACTIVE_OBJECT2 == 123) {
[0006] (1A)   Var[168] = 1;
[000A] (42)   startScript(80);
[000C] (**) }
[000C] (48) if (VAR_ACTIVE_OBJECT2 == 132) {
[0012] (1A)   Var[166] = 1;
[0016] (42)   startScript(79);
[0018] (**) }
[0018] (A0) stopObjectCode();
END

// Script 79: Set Jar Name
[0000] (48) if (Var[166] == 0) {
[0006] (54)   setObjectName(132,"glass jar");
[0013] (**) }
[0013] (48) if (Var[166] == 2) {
[0019] (18) } else {
[001C] (48)   unless (Var[166] == 1) goto 0032;
[0022] (**) }
[0022] (54) setObjectName(132,"jar of water");
[0032] (48) if (Var[166] == 3) {
[0038] (54)   setObjectName(132,"jar of developer");
[004C] (**) }
[004C] (A0) stopObjectCode();
END

// Script 80: Set Sponge Name
[0000] (48) if (Var[168] == 0) {
[0006] (54)   setObjectName(123,"sponge");
[0010] (**) }
[0010] (48) if (Var[168] == 2) {
[0016] (18) } else {
[0019] (48)   unless (Var[168] == 1) goto 0034;
[001F] (**) }
[001F] (54) setObjectName(123,"sponge with water");
[0034] (48) if (Var[168] == 3) {
[003A] (54)   setObjectName(123,"sponge with developer");
[0053] (**) }
[0053] (A0) stopObjectCode();
END

// Script 81: Set Jar and Envelope Names
[0000] (48) if (Var[166] == 2) {
[0006] (18) } else {
[0009] (48)   unless (Var[166] == 1) goto 001F;
[000F] (**) }
[000F] (54) setObjectName(83,"jar of water");
[001F] (48) if (Var[166] == 3) {
[0025] (54)   setObjectName(83,"jar of developer");
[0039] (**) }
[0039] (48) if (Var[81] == 1) {
[003F] (54)   setObjectName(31,"envelope");
[004B] (**) }
[004B] (48) if (Var[83] == 1) {
[0051] (54)   setObjectName(31,"stamped envelope");
[0065] (**) }
[0065] (A0) stopObjectCode();
END

// Script 82: Set Flashlight Name
[0000] (48) if (Var[156] == 1) {
[0006] (54)   setObjectName(84,"lit flashlight");
[0018] (18) } else {
[001B] (54)   setObjectName(84,"flashlight");
[0029] (**) }
[0029] (42) startScript(55);
[002B] (A0) stopObjectCode();
END

// Script 83: Set Developer Tray Name
[0000] (48) if (Var[171] == 0) {
[0006] (54)   setObjectName(391,"developer tray");
[0018] (**) }
[0018] (48) if (Var[171] == 2) {
[001E] (18) } else {
[0021] (48)   unless (Var[171] == 1) goto 0038;
[0027] (**) }
[0027] (54) setObjectName(391,"tray of water");
[0038] (48) if (Var[171] == 3) {
[003E] (54)   setObjectName(391,"tray of developer");
[0053] (**) }
[0053] (A0) stopObjectCode();
END

// Script 84: Set Envelope Name
[0000] (48) if (Var[81] == 2) {
[0006] (54)   setObjectName(222,"ripped envelope");
[0019] (**) }
[0019] (48) if (Var[81] == 1) {
[001F] (54)   setObjectName(222,"envelope");
[002B] (48)   if (Var[82] == 1) {
[0031] (54)     setObjectName(222,"memoir in envelope");
[0047] (48)     if (Var[83] == 1) {
[004D] (54)       setObjectName(222,"memoir in stamped envelope");
[006B] (**)     }
[006B] (38)   } else if (Var[82] >= 2) {
[0074] (54)     setObjectName(222,"tape in envelope");
[0088] (48)     if (Var[83] == 1) {
[008E] (54)       setObjectName(222,"tape in stamped envelope");
[00AA] (**)     }
[00AA] (48)   } else if (Var[83] == 1) {
[00B3] (54)     setObjectName(222,"stamped envelope");
[00C7] (**)   }
[00C7] (**) }
[00C7] (A0) stopObjectCode();
END

// Script 85: Open Envelope
[0000] (48) if (Var[82] == 1) {
[0006] (D8)   printEgo("The manuscript is sealed inside.");
[0024] (38) } else if (Var[82] >= 2) {
[002D] (D8)   printEgo("The cassette is sealed inside.");
[0049] (48) } else if (Var[84] == 1) {
[0052] (D8)   printEgo("It was already opened.");
[0067] (18) } else {
[006A] (48)   if (Var[81] == 0) {
[0070] (1A)     Var[81] = 2;
[0074] (**)   }
[0074] (1A)   Var[84] = 1;
[0078] (42)   startScript(84);
[007A] (2E)   delay(60);
[007E] (69)   setOwnerOf(221,VAR_EGO);
[0082] (D8)   printEgo("There was a quarter inside the envelope.");
[00A6] (**) }
[00A6] (A0) stopObjectCode();
END

// Script 86: Put Something in Envelope
[0000] (48) if (VAR_ACTIVE_OBJECT2 == 210) {
[0006] (18) } else {
[0009] (48)   unless (VAR_ACTIVE_OBJECT2 == 189) goto 007E;
[000F] (**) }
[000F] (48) if (Var[84] == 1) {
[0015] (48)   if (Var[81] == 2) {
[001B] (D8)     printEgo("The envelope's unusable.");
[0033] (48)   } else if (Var[82] == 0) {
[003C] (48)     if (VAR_ACTIVE_OBJECT2 == 210) {
[0042] (1A)       Var[82] = 1;
[0046] (29)       setOwnerOf(210,0);
[004A] (48)     } else if (VAR_ACTIVE_OBJECT2 == 189) {
[0053] (1A)       Var[82] = 2;
[0057] (29)       setOwnerOf(189,0);
[005B] (**)     }
[005B] (42)     startScript(84);
[005D] (18)   } else {
[0060] (42)     startScript(85);
[0062] (**)   }
[0062] (18) } else {
[0065] (D8)   printEgo("The envelope is closed.");
[007B] (**) }
[007B] (18) goto 0083;
[007E] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0083] (A0) stopObjectCode();
END

// Script 87: Ed Leaves Room
[0000] (2E) delay(180);
[0004] (48) if (Var[143] == 2) {
[000A] (2E)   delay(3600);
[000E] (48)   if (Var[99] == 1) {
[0014] (62)     stopScript(0);
[0016] (**)   }
[0016] (03)   VAR_RESULT = getActorRoom(11);
[0019] (48)   unless (VAR_RESULT == 26) goto 000A;
[001F] (**) }
[001F] (40) cutscene();
[0020] (72) loadRoom(26);
[0022] (32) setCameraAt(25);
[0024] (80) breakHere();
[0025] (58) beginOverride();
[0026] (18) goto 00A5;
[0029] (08) if (Var[143] != 2) {
[002F] (48)   if (Var[87] == 0) {
[0035] (14)     print(11,"Oh, the doorbell!");
[0047] (AE)     waitForMessage();
[0048] (36)     walkActorToObject(11,39);
[004C] (14)     print(11,"I wonder if that's my package?");
[0068] (1A)     Var[87] = 1;
[006C] (18)   } else {
[006F] (14)     print(11,"Again?");
[0078] (**)   }
[0078] (18) } else {
[007B] (14)   print(11,"Gee, I'm hungry!");
[008C] (**) }
[008C] (36) walkActorToObject(11,39);
[0090] (3B) waitForActor(11);
[0092] (11) animateActor(11,251);
[0095] (80) breakHere();
[0096] (AE) waitForMessage();
[0097] (0F) if (!getState08(39)) {
[009C] (07)   setState08(39);
[009F] (1C)   startSound(8);
[00A1] (2E)   delay(60);
[00A5] (**) }
[00A5] (48) if (VAR_OVERRIDE == 1) {
[00AB] (72)   loadRoom(0);
[00AD] (**) }
[00AD] (03) VAR_RESULT = getActorRoom(10);
[00B0] (48) if (VAR_RESULT == 38) {
[00B6] (62)   stopScript(40);
[00B8] (2D)   putActorInRoom(10,19);
[00BB] (01)   putActor(10,4,52);
[00BF] (**) }
[00BF] (14) print(255," ");
[00C3] (2D) putActorInRoom(11,38);
[00C6] (01) putActor(11,44,52);
[00CA] (1A) Var[88] = 44;
[00CE] (1A) Var[89] = 52;
[00D2] (48) if (VAR_OVERRIDE == 0) {
[00D8] (1C)   startSound(9);
[00DA] (**) }
[00DA] (47) clearState08(39);
[00DD] (47) clearState08(462);
[00E0] (48) if (VAR_OVERRIDE == 0) {
[00E6] (2E)   delay(90);
[00EA] (**) }
[00EA] (C0) endCutscene();
[00EB] (42) startScript(91);
[00ED] (1A) Var[90] = 7;
[00F1] (1A) Var[91] = 60;
[00F5] (2E) delay(300);
[00F9] (80) breakHere();
[00FA] (48) unless (Var[118] == 0) goto 00F9;
[0100] (2D) putActorInRoom(11,12);
[0103] (01) putActor(11,9,8);
[0107] (1A) Var[88] = 9;
[010B] (1A) Var[89] = 8;
[010F] (1A) Var[90] = 53;
[0113] (1A) Var[91] = 56;
[0117] (2E) delay(300);
[011B] (80) breakHere();
[011C] (48) unless (Var[118] == 0) goto 011B;
[0122] (2D) putActorInRoom(11,13);
[0125] (01) putActor(11,70,12);
[0129] (1A) Var[88] = 70;
[012D] (1A) Var[89] = 12;
[0131] (1A) Var[90] = 15;
[0135] (1A) Var[91] = 52;
[0139] (2E) delay(300);
[013D] (80) breakHere();
[013E] (48) unless (Var[118] == 0) goto 013D;
[0144] (07) setState08(193);
[0147] (07) setState08(182);
[014A] (2D) putActorInRoom(11,11);
[014D] (01) putActor(11,36,48);
[0151] (1A) Var[88] = 36;
[0155] (1A) Var[89] = 48;
[0159] (1A) Var[90] = 39;
[015D] (1A) Var[91] = 64;
[0161] (80) breakHere();
[0162] (47) clearState08(193);
[0165] (47) clearState08(182);
[0168] (2E) delay(300);
[016C] (80) breakHere();
[016D] (48) unless (Var[118] == 0) goto 016C;
[0173] (2D) putActorInRoom(11,10);
[0176] (01) putActor(11,41,8);
[017A] (1A) Var[88] = 41;
[017E] (1A) Var[89] = 8;
[0182] (48) if (Var[143] == 1) {
[0188] (1A)   Var[90] = 6;
[018C] (1A)   Var[91] = 60;
[0190] (2E)   delay(300);
[0194] (80)   breakHere();
[0195] (48)   unless (Var[118] == 0) goto 0194;
[019B] (42)   startScript(95);
[019D] (18) } else {
[01A0] (42)   startScript(151);
[01A2] (**) }
[01A2] (62) stopScript(97);
[01A4] (A0) stopObjectCode();
END

// Script 88: Ed Catches Kid
[0000] (03) VAR_RESULT = getActorRoom(11);
[0003] (48) if (VAR_RESULT == 12) {
[0009] (1A)   Var[105] = 0;
[000D] (62)   stopScript(51);
[000F] (**) }
[000F] (83) VAR_RESULT = getActorRoom(Var[113]);
[0012] (C8) if (VAR_RESULT == VAR_ROOM) {
[0017] (B1)   VAR_RESULT = getBitVar(2936,Var[113]);
[001C] (48)   if (VAR_RESULT == 1) {
[0022] (14)     print(11,"You have some nerve coming\x01back here again!");
[004A] (18)   } else {
[004D] (14)     print(11,"Intruder, halt!");
[005E] (**)   }
[005E] (80)   breakHere();
[005F] (80)   breakHere();
[0060] (66)   Var[113] = getClosestObjActor(11);
[0064] (48)   if (Var[113] == 255) {
[006A] (42)     startScript(98);
[006C] (62)     stopScript(0);
[006E] (**)   }
[006E] (4D)   walkActorToActor(11,Var[113],2);
[0072] (74)   VAR_RESULT = getDist(11,Var[113]);
[0077] (04)   unless (VAR_RESULT <= 2) goto 005E;
[007D] (91)   animateActor(Var[113],255);
[0080] (91)   animateActor(Var[113],250);
[0083] (9B)   setBitVar(2952,Var[113],1);
[0088] (AE)   waitForMessage();
[0089] (3B)   waitForActor(11);
[008B] (11)   animateActor(11,250);
[008E] (14)   print(11,"What are you doing in my house?\x03Are you an agent of the evil meteor\x01or are you here to help me defeat him?");
[00E6] (AE)   waitForMessage();
[00E7] (14)   print(11,"Not talking, eh?\x03Well to the dungeon, spy!");
[010E] (AE)   waitForMessage();
[010F] (2E)   delay(120);
[0113] (18) } else {
[0116] (80)   breakHere();
[0117] (40)   cutscene();
[0118] (83)   Var[111] = getActorRoom(Var[113]);
[011B] (F2)   loadRoom(Var[111]);
[011D] (52)   actorFollowCamera(11);
[011F] (4D)   walkActorToActor(11,Var[113],2);
[0123] (80)   breakHere();
[0124] (3B)   waitForActor(11);
[0126] (11)   animateActor(11,250);
[0129] (91)   animateActor(Var[113],250);
[012C] (14)   print(11,"I got you! To the dungeon, intruder!");
[014D] (AE)   waitForMessage();
[014E] (2E)   delay(60);
[0152] (C0)   endCutscene();
[0153] (**) }
[0153] (42) startScript(89);
[0155] (A0) stopObjectCode();
END

// Script 89: Ed Takes Kid to Dungeon
[0000] (40) cutscene();
[0001] (58) beginOverride();
[0002] (18) goto 004C;
[0005] (07) setState08(159);
[0008] (9A) Var[109] = Var[113];
[000B] (42) startScript(146);
[000D] (AD) putActorInRoom(Var[113],4);
[0010] (C1) putActor(Var[113],Var[110],63);
[0014] (91) animateActor(Var[113],249);
[0017] (2D) putActorInRoom(11,4);
[001A] (01) putActor(11,61,63);
[001E] (11) animateActor(11,248);
[0021] (72) loadRoom(4);
[0023] (32) setCameraAt(90);
[0025] (2E) delay(120);
[0029] (14) print(11,"Too bad you weren't on my side!");
[0045] (AE) waitForMessage();
[0046] (36) walkActorToObject(11,159);
[004A] (3B) waitForActor(11);
[004C] (14) print(255," ");
[0050] (2D) putActorInRoom(11,0);
[0053] (01) putActor(11,0,0);
[0057] (42) startScript(56);
[0059] (2E) delay(120);
[005D] (C0) endCutscene();
[005E] (1A) Var[175] = 0;
[0062] (42) startScript(98);
[0064] (A0) stopObjectCode();
END

// Script 90: Thanks for Delivering My Package
[0000] (AE) waitForMessage();
[0001] (80) breakHere();
[0002] (66) Var[113] = getClosestObjActor(11);
[0006] (74) VAR_RESULT = getDist(11,Var[113]);
[000B] (78) unless (VAR_RESULT < 20) goto 0001;
[0011] (14) print(11,"Thanks for delivering my package!");
[0031] (A0) stopObjectCode();
END

// Script 91: Ed Says Hello
[0000] (1A) Var[137] = 0;
[0004] (0C) loadScript(88)
[0007] (1A) Var[118] = 0;
[000B] (1A) Var[200] = 11;
[000F] (42) startScript(174);
[0011] (9A) Var[113] = Var[200];
[0014] (08) if (Var[113] != 255) {
[001A] (1A)   Var[118] = 1;
[001E] (03)   VAR_RESULT = getActorRoom(11);
[0021] (C8)   if (VAR_RESULT == VAR_ROOM) {
[0026] (9A)     Var[113] = VAR_EGO;
[0029] (**)   }
[0029] (48)   if (Var[92] == 1) {
[002F] (B1)     VAR_RESULT = getBitVar(2936,Var[113]);
[0034] (48)     if (VAR_RESULT == 0) {
[003A] (03)       VAR_RESULT = getActorRoom(11);
[003D] (C8)       if (VAR_RESULT == VAR_ROOM) {
[0042] (88)         if (Var[137] != VAR_ROOM) {
[0047] (9A)           Var[137] = VAR_ROOM;
[004A] (80)           breakHere();
[004B] (4D)           walkActorToActor(11,Var[113],6);
[004F] (2E)           delay(60);
[0053] (14)           print(11,"Hello.");
[005C] (AE)           waitForMessage();
[005D] (48)           if (Var[93] == 0) {
[0063] (14)             print(11,"Come see me when you have the plans.");
[0083] (18)           } else {
[0086] (14)             print(11,"Getting ready for the big raid?");
[00A3] (**)           }
[00A3] (**)         }
[00A3] (**)       }
[00A3] (68)       VAR_RESULT = isScriptRunning(87);
[00A6] (48)       if (VAR_RESULT == 0) {
[00AC] (1A)         Var[118] = 0;
[00B0] (68)         VAR_RESULT = isScriptRunning(98);
[00B3] (48)         if (VAR_RESULT == 0) {
[00B9] (4A)           chainScript(98);
[00BB] (**)         }
[00BB] (62)         stopScript(0);
[00BD] (**)       }
[00BD] (AE)       waitForMessage();
[00BE] (7E)       walkActorTo(11,Var[90],Var[91]);
[00C2] (3B)       waitForActor(11);
[00C4] (1A)       Var[118] = 0;
[00C8] (80)       breakHere();
[00C9] (18)       goto 0007;
[00CC] (**)     }
[00CC] (**)   }
[00CC] (80)   breakHere();
[00CD] (62)   stopScript(87);
[00CF] (62)   stopScript(98);
[00D1] (62)   stopScript(97);
[00D3] (62)   stopScript(151);
[00D5] (4A)   chainScript(88);
[00D7] (62)   stopScript(0);
[00D9] (**) }
[00D9] (80) breakHere();
[00DA] (18) goto 0007;
[00DD] (A0) stopObjectCode();
END

// Script 92: Give Package to Ed
[0000] (60) cursorCommand(15, 2);
[0003] (9B) setBitVar(2936,VAR_EGO,0);
[0008] (62) stopScript(88);
[000A] (62) stopScript(91);
[000C] (62) stopScript(116);
[000E] (9A) Var[113] = VAR_EGO;
[0011] (1A) Var[92] = 1;
[0015] (29) setOwnerOf(57,0);
[0019] (47) clearState08(56);
[001C] (17) clearState02(56);
[001F] (14) print(11,"Oh! My commando package!");
[0037] (11) animateActor(11,250);
[003A] (91) animateActor(VAR_EGO,250);
[003D] (AE) waitForMessage();
[003E] (42) startScript(96);
[0040] (A0) stopObjectCode();
END

// Script 93: Give Prints to Ed
[0000] (60) cursorCommand(15, 2);
[0003] (9B) setBitVar(2936,VAR_EGO,0);
[0008] (62) stopScript(88);
[000A] (62) stopScript(91);
[000C] (62) stopScript(116);
[000E] (1A) Var[93] = 1;
[0012] (29) setOwnerOf(56,0);
[0016] (11) animateActor(11,250);
[0019] (91) animateActor(VAR_EGO,250);
[001C] (14) print(11,"Great, you developed my prints!");
[003A] (AE) waitForMessage();
[003B] (48) if (Var[155] == 2) {
[0041] (14)   print(11,"Oh no! You ruined them! Now all is lost,\x01the meteor will take over the world!");
[0083] (18) } else {
[0086] (14)   print(11,"Now we can overthrow the meteor!\x03Meet me in the lab in 10 minutes.\x03We'll storm it together!");
[00D5] (**) }
[00D5] (42) startScript(98);
[00D7] (A0) stopObjectCode();
END

// Script 94: Give Hamster to Someone
[0000] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[0006] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0009] (94)   print(VAR_ACTIVE_OBJECT2,"Oh, how cute!");
[0017] (**) }
[0017] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[001D] (94)   print(VAR_ACTIVE_OBJECT2,"How disgusting! I don't eat live food!");
[0040] (**) }
[0040] (48) if (VAR_ACTIVE_OBJECT2 == 19) {
[0046] (42)   startScript(103);
[0048] (**) }
[0048] (48) if (VAR_ACTIVE_OBJECT2 == 11) {
[004E] (60)   cursorCommand(15, 2);
[0051] (80)   breakHere();
[0052] (9B)   setBitVar(2936,VAR_EGO,0);
[0057] (62)   stopScript(88);
[0059] (62)   stopScript(91);
[005B] (62)   stopScript(116);
[005D] (29)   setOwnerOf(34,0);
[0061] (14)   print(11,"Oh! My poor little hamster!");
[007B] (AE)   waitForMessage();
[007C] (14)   print(11,"Thank you soooo much!");
[0091] (48)   if (VAR_ROOM == 26) {
[0097] (1E)     walkActorTo(11,21,52);
[009B] (3B)     waitForActor(11);
[009D] (11)     animateActor(11,251);
[00A0] (2E)     delay(60);
[00A4] (**)   }
[00A4] (47)   clearState08(34);
[00A7] (17)   clearState02(34);
[00AA] (29)   setOwnerOf(34,15);
[00AE] (AE)   waitForMessage();
[00AF] (48)   if (Var[92] == 0) {
[00B5] (14)     print(11,"I hope my package comes soon!");
[00D0] (48)   } else if (Var[93] == 0) {
[00D9] (14)     print(11,"C'mon, help me find my plans!");
[00F4] (**)   }
[00F4] (42)   startScript(98);
[00F6] (**) }
[00F6] (A0) stopObjectCode();
END

// Script 95: Ed Checks Outside
[0000] (62) stopScript(91);
[0002] (80) breakHere();
[0003] (40) cutscene();
[0004] (58) beginOverride();
[0005] (18) goto 00FD;
[0008] (0C) loadCostume(11)
[000B] (0C) lockCostume(11)
[000E] (72) loadRoom(1);
[0010] (32) setCameraAt(59);
[0012] (80) breakHere();
[0013] (48) unless (VAR_CAMERA_POS_X == 59) goto 0012;
[0019] (2E) delay(60);
[001D] (0F) if (!getState08(61)) {
[0022] (07)   setState08(67);
[0025] (07)   setState08(61);
[0028] (1C)   startSound(8);
[002A] (**) }
[002A] (42) startScript(57);
[002C] (2E) delay(30);
[0030] (2D) putActorInRoom(11,1);
[0033] (01) putActor(11,49,43);
[0037] (11) animateActor(11,250);
[003A] (2E) delay(60);
[003E] (0F) if (!getState08(57)) {
[0043] (52)   actorFollowCamera(11);
[0045] (36)   walkActorToObject(11,57);
[0049] (14)   print(11,"My package is here!");
[005C] (42)   startScript(90);
[005E] (3B)   waitForActor(11);
[0060] (2E)   delay(60);
[0064] (07)   setState08(57);
[0067] (57)   setState02(57);
[006A] (1A)   Var[92] = 2;
[006E] (2E)   delay(60);
[0072] (36)   walkActorToObject(11,61);
[0076] (3B)   waitForActor(11);
[0078] (32)   setCameraAt(59);
[007A] (18) } else {
[007D] (66)   Var[113] = getClosestObjActor(11);
[0081] (74)   VAR_RESULT = getDist(11,Var[113]);
[0086] (44)   if (VAR_RESULT > 25) {
[008C] (14)     print(11,"Someone playing tricks on me, eh?\x03I'll get them next time!");
[00C0] (18)   } else {
[00C3] (4D)     walkActorToActor(11,Var[113],4);
[00C7] (80)     breakHere();
[00C8] (80)     breakHere();
[00C9] (11)     animateActor(11,255);
[00CC] (14)     print(11,"Can't you read the sign?\x03NOW GET OUT OF HERE!");
[00F4] (**)   }
[00F4] (AE)   waitForMessage();
[00F5] (11)   animateActor(11,248);
[00F8] (80)   breakHere();
[00F9] (11)   animateActor(11,251);
[00FC] (80)   breakHere();
[00FD] (**) }
[00FD] (14) print(255," ");
[0101] (62) stopScript(90);
[0103] (0C) unlockCostume(11)
[0106] (0F) if (!getState08(57)) {
[010B] (07)   setState08(57);
[010E] (57)   setState02(57);
[0111] (1A)   Var[92] = 2;
[0115] (**) }
[0115] (2D) putActorInRoom(11,0);
[0118] (01) putActor(11,0,0);
[011C] (47) clearState08(67);
[011F] (47) clearState08(61);
[0122] (27) setState04(61);
[0125] (48) if (VAR_OVERRIDE == 0) {
[012B] (1C)   startSound(9);
[012D] (2E)   delay(60);
[0131] (**) }
[0131] (42) startScript(98);
[0133] (C0) endCutscene();
[0134] (A0) stopObjectCode();
END

// Script 96: Ed Wants Plans
[0000] (08) if (VAR_ROOM != 26) {
[0006] (14)   print(11,"Come up to my room with me.");
[001E] (AE)   waitForMessage();
[001F] (2D)   putActorInRoom(11,26);
[0022] (01)   putActor(11,10,52);
[0026] (AD)   putActorInRoom(Var[113],26);
[0029] (81)   putActor(Var[113],14,52);
[002D] (72)   loadRoom(26);
[002F] (11)   animateActor(11,249);
[0032] (91)   animateActor(Var[113],248);
[0035] (2E)   delay(120);
[0039] (**) }
[0039] (9B) setBitVar(2952,Var[113],0);
[003E] (60) cursorCommand(247, 1);
[0041] (14) print(11,"Now you have to find me my plans.\x03I lost them somewhere!");
[0072] (AE) waitForMessage();
[0073] (11) animateActor(11,251);
[0076] (1A) Var[106] = 1;
[007A] (14) print(11,"You see, the evil meteor has\x01turned my father into a madman.\x03I must break into the lab and save him.\x03I need my commando package and plans,\x01but I lost them.");
[00FD] (AE) waitForMessage();
[00FE] (14) print(11,"Come back when you have what I need!");
[011E] (AE) waitForMessage();
[011F] (1E) walkActorTo(11,21,52);
[0123] (4F) if (getState08(34)) {
[0128] (14)   print(11,"By the way, have you seen my hamster?");
[0149] (18) } else {
[014C] (14)   print(11,"Hello, my cute little hamster.");
[0169] (**) }
[0169] (3B) waitForActor(11);
[016B] (11) animateActor(11,251);
[016E] (2E) delay(300);
[0172] (36) walkActorToObject(11,273);
[0176] (3B) waitForActor(11);
[0178] (11) animateActor(11,251);
[017B] (1A) Var[106] = 0;
[017F] (A0) stopObjectCode();
END

// Script 97: Ed's Coming Down
[0000] (2E) delay(180);
[0004] (40) cutscene();
[0005] (03) Var[202] = getActorRoom(11);
[0008] (F2) loadRoom(Var[202]);
[000A] (52) actorFollowCamera(11);
[000C] (7E) walkActorTo(11,Var[90],Var[91]);
[0010] (2E) delay(120);
[0014] (14) print(11,"I'm coming, I'm coming!");
[002B] (AE) waitForMessage();
[002C] (C0) endCutscene();
[002D] (A0) stopObjectCode();
END

// Script 98: Ed Returns to His Room
[0000] (60) cursorCommand(247, 1);
[0003] (9B) setBitVar(2952,Var[113],0);
[0008] (AE) waitForMessage();
[0009] (03) Var[109] = getActorRoom(11);
[000C] (48) if (Var[109] == 26) {
[0012] (18) } else {
[0015] (48)   if (Var[109] == 38) {
[001B] (18)   } else {
[001E] (2D)     putActorInRoom(11,0);
[0021] (01)     putActor(11,0,0);
[0025] (2E)     delay(1500);
[0029] (2D)     putActorInRoom(11,38);
[002C] (0E)     putActorAtObject(11,229);
[0030] (11)     animateActor(11,249);
[0033] (42)     startScript(91);
[0035] (2E)     delay(300);
[0039] (80)     breakHere();
[003A] (48)     unless (Var[118] == 0) goto 0039;
[0040] (48)     unless (VAR_ROOM == 38) goto 004F;
[0046] (**)   }
[0046] (36)   walkActorToObject(11,462);
[004A] (3B)   waitForActor(11);
[004C] (18)   goto 0055;
[004F] (48)   if (VAR_ROOM == 26) {
[0055] (0F)     if (!getState08(39)) {
[005A] (07)       setState08(39);
[005D] (07)       setState08(462);
[0060] (1C)       startSound(8);
[0062] (2E)       delay(60);
[0066] (**)     }
[0066] (**)   }
[0066] (2D)   putActorInRoom(11,26);
[0069] (0E)   putActorAtObject(11,39);
[006D] (11)   animateActor(11,250);
[0070] (2E)   delay(60);
[0074] (42)   startScript(91);
[0076] (47)   clearState08(39);
[0079] (47)   clearState08(462);
[007C] (48)   if (VAR_ROOM == 38) {
[0082] (18)   } else {
[0085] (48)     unless (VAR_ROOM == 26) goto 0091;
[008B] (**)   }
[008B] (1C)   startSound(9);
[008D] (2E)   delay(60);
[0091] (80)   breakHere();
[0092] (48)   unless (Var[118] == 0) goto 0091;
[0098] (AE)   waitForMessage();
[0099] (**) }
[0099] (1E) walkActorTo(11,10,52);
[009D] (3B) waitForActor(11);
[009F] (11) animateActor(11,251);
[00A2] (62) stopScript(91);
[00A4] (A0) stopObjectCode();
END

// Script 99: Ed Storms Lab
[0000] (62) stopScript(42);
[0002] (1A) Var[120] = 1;
[0006] (40) cutscene();
[0007] (07) setState08(163);
[000A] (07) setState08(166);
[000D] (58) beginOverride();
[000E] (18) goto 0109;
[0011] (2D) putActorInRoom(11,31);
[0014] (0E) putActorAtObject(11,166);
[0018] (11) animateActor(11,250);
[001B] (52) actorFollowCamera(11);
[001D] (2E) delay(120);
[0021] (14) print(11,"All right, slime-ball! The game's up.");
[0044] (0D) walkActorToActor(11,13,4);
[0048] (80) breakHere();
[0049] (34) VAR_RESULT = getDist(11,13);
[004F] (78) unless (VAR_RESULT < 8) goto 0048;
[0055] (42) startScript(160);
[0057] (14) print(13,"oh no^");
[005F] (1E) walkActorTo(13,47,57);
[0063] (3B) waitForActor(13);
[0065] (14) print(11,"Come here^");
[0071] (1E) walkActorTo(13,45,66);
[0075] (3B) waitForActor(13);
[0077] (14) print(13,"You'll never get me^");
[008B] (1E) walkActorTo(13,12,66);
[008F] (3B) waitForActor(13);
[0091] (14) print(13,"I'm getting out of here.");
[00A8] (36) walkActorToObject(13,166);
[00AC] (62) stopScript(160);
[00AE] (36) walkActorToObject(11,166);
[00B2] (3B) waitForActor(13);
[00B4] (2D) putActorInRoom(13,0);
[00B7] (01) putActor(13,0,0);
[00BB] (3B) waitForActor(11);
[00BD] (43) Var[109] = getActorX(11);
[00C0] (C3) VAR_RESULT = getActorX(VAR_EGO);
[00C3] (F8) if (VAR_RESULT < Var[109]) {
[00C8] (11)   animateActor(11,248);
[00CB] (91)   animateActor(VAR_EGO,249);
[00CE] (18) } else {
[00D1] (11)   animateActor(11,249);
[00D4] (91)   animateActor(VAR_EGO,248);
[00D7] (**) }
[00D7] (14) print(11,"I'll take care of sucker face\x01you get the meteor.");
[0103] (AE) waitForMessage();
[0104] (11) animateActor(11,251);
[0107] (80) breakHere();
[0108] (80) breakHere();
[0109] (2D) putActorInRoom(13,0);
[010C] (2D) putActorInRoom(11,0);
[010F] (C0) endCutscene();
[0110] (1A) Var[151] = 1;
[0114] (A0) stopObjectCode();
END

// Script 100: Play Piano
[0000] (40) cutscene();
[0001] (48) if (Var[167] == 1) {
[0007] (2E)   delay(60);
[000B] (D8)   printEgo("I have to turn off the Victrola first.");
[002C] (19)   doSentence(5,366,0,0);
[0033] (80)   breakHere();
[0034] (48)   unless (Var[167] == 0) goto 0033;
[003A] (2E)   delay(60);
[003E] (B6)   walkActorToObject(VAR_EGO,365);
[0042] (BB)   waitForActor(VAR_EGO);
[0044] (91)   animateActor(VAR_EGO,249);
[0047] (**) }
[0047] (2E) delay(60);
[004B] (02) startMusic(50);
[004D] (58) beginOverride();
[004E] (18) goto 0059;
[0051] (80) breakHere();
[0052] (7C) VAR_RESULT = isSoundRunning(50);
[0055] (28) unless (!VAR_RESULT) goto 0051;
[0059] (20) stopMusic();
[005A] (C0) endCutscene();
[005B] (4F) if (getState08(191)) {
[0060] (1A)   Var[157] = 50;
[0064] (9A)   Var[86] = VAR_EGO;
[0067] (**) }
[0067] (A0) stopObjectCode();
END

// Script 101: Dr. Fred Plays Meteor Mess
[0000] (2E) delay(10800);
[0004] (2E) delay(3600);
[0008] (1A) Var[128] = 1;
[000C] (1A) Var[127] = 18;
[0010] (42) startScript(138);
[0012] (1A) Var[127] = 13;
[0016] (42) startScript(138);
[0018] (1A) Var[127] = 19;
[001C] (42) startScript(138);
[001E] (1A) Var[127] = 26;
[0022] (42) startScript(138);
[0024] (48) unless (Var[128] == 1) goto 0004;
[002A] (4F) if (getState08(157)) {
[002F] (18)   goto 0004;
[0032] (**) }
[0032] (40) cutscene();
[0033] (2D) putActorInRoom(9,18);
[0036] (01) putActor(9,51,56);
[003A] (11) animateActor(9,250);
[003D] (72) loadRoom(18);
[003F] (52) actorFollowCamera(9);
[0041] (11) animateActor(9,251);
[0044] (0F) if (!getState08(225)) {
[0049] (58)   beginOverride();
[004A] (18)   goto 008B;
[004D] (2E)   delay(180);
[0051] (36)   walkActorToObject(9,201);
[0055] (14)   print(9,"I guess the power's out.");
[006C] (AE)   waitForMessage();
[006D] (2E)   delay(120);
[0071] (18) } else {
[0074] (58)   beginOverride();
[0075] (18)   goto 0081;
[0078] (1C)   startSound(35);
[007A] (07)   setState08(206);
[007D] (2E)   delay(300);
[0081] (48)   if (VAR_OVERRIDE == 1) {
[0087] (72)     loadRoom(0);
[0089] (**)   }
[0089] (42)   startScript(102);
[008B] (**) }
[008B] (47) clearState08(206);
[008E] (14) print(255," ");
[0092] (3C) stopSound(35);
[0094] (2D) putActorInRoom(9,0);
[0097] (01) putActor(9,0,0);
[009B] (C0) endCutscene();
[009C] (A0) stopObjectCode();
END

// Script 102: Set Lab Combination
[0000] (16) Var[111] = getRandomNr(3);
[0003] (47) clearState08(248);
[0006] (47) clearState08(249);
[0009] (47) clearState08(250);
[000C] (47) clearState08(251);
[000F] (48) if (Var[111] == 0) {
[0015] (26)   setVarRange(Var[59],4,[7,5,7,2]);
[001C] (07)   setState08(248);
[001F] (**) }
[001F] (48) if (Var[111] == 1) {
[0025] (26)   setVarRange(Var[59],4,[5,8,5,8]);
[002C] (07)   setState08(249);
[002F] (**) }
[002F] (48) if (Var[111] == 2) {
[0035] (26)   setVarRange(Var[59],4,[3,3,0,1]);
[003C] (07)   setState08(250);
[003F] (**) }
[003F] (48) if (Var[111] == 3) {
[0045] (26)   setVarRange(Var[59],4,[8,6,4,0]);
[004C] (07)   setState08(251);
[004F] (**) }
[004F] (A0) stopObjectCode();
END

// Script 103: Give Food
[0000] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[0006] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0009] (1A)   Var[123] = 0;
[000D] (48) } else if (VAR_ACTIVE_OBJECT2 == 14) {
[0016] (46)   Var[98]++;
[0018] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[001B] (48)   if (Var[123] == 198) {
[0021] (1A)     Var[123] = 0;
[0025] (14)     print(14,"WOW! My favorite! THAT's what I wanted!");
[0049] (1A)     Var[98] = 7;
[004D] (AE)     waitForMessage();
[004E] (**)   }
[004E] (78)   if (Var[98] < 7) {
[0054] (14)     print(14,"Thanks. More food!");
[0067] (48)   } else if (Var[99] == 0) {
[0070] (14)     print(14,"Now I'm thirsty!");
[0081] (**)   }
[0081] (48) } else if (VAR_ACTIVE_OBJECT2 == 19) {
[008A] (14)   print(19,"Yum yum!");
[0094] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[0097] (48) } else if (VAR_ACTIVE_OBJECT2 == 11) {
[00A0] (94)   print(VAR_ACTIVE_OBJECT2,"No thanks.");
[00AC] (18) } else {
[00AF] (94)   print(VAR_ACTIVE_OBJECT2,"No thanks. I'm not hungry.");
[00C8] (**) }
[00C8] (A0) stopObjectCode();
END

// Script 104: Give Drink
[0000] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[0006] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0009] (48) } else if (VAR_ACTIVE_OBJECT2 == 14) {
[0012] (48)   if (Var[150] == 1) {
[0018] (1A)     Var[150] = 0;
[001C] (1A)     Var[166] = 0;
[0020] (42)     startScript(79);
[0022] (18)   } else {
[0025] (A9)     setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[0028] (**)   }
[0028] (78)   if (Var[98] < 7) {
[002E] (14)     print(14,"Thanks! More food!");
[0041] (18)   } else {
[0044] (1A)     Var[99] = 1;
[0048] (14)     print(14,"Thanks!");
[0052] (**)   }
[0052] (48) } else if (VAR_ACTIVE_OBJECT2 == 19) {
[005B] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[005E] (18) } else {
[0061] (94)   print(VAR_ACTIVE_OBJECT2,"I'm not thirsty.");
[0072] (**) }
[0072] (A0) stopObjectCode();
END

// Script 105: Publisher Cutscene Timer
[0000] (2E) delay(3600);
[0004] (2E) delay(1800);
[0008] (08) unless (VAR_ROOM != 1) goto 0004;
[000E] (0F) if (!getState08(58)) {
[0013] (62)   stopScript(0);
[0015] (**) }
[0015] (47) clearState08(58);
[0018] (57) setState02(58);
[001B] (47) clearState08(51);
[001E] (29) setOwnerOf(222,0);
[0022] (2E) delay(10800);
[0026] (40) cutscene();
[0027] (72) loadRoom(0);
[0029] (42) startScript(106);
[002B] (80) breakHere();
[002C] (68) VAR_RESULT = isScriptRunning(106);
[002F] (48) unless (VAR_RESULT == 0) goto 002B;
[0035] (C0) endCutscene();
[0036] (2E) delay(18000);
[003A] (44) if (Var[101] > 0) {
[0040] (2E)   delay(1800);
[0044] (08)   unless (VAR_ROOM != 1) goto 0040;
[004A] (07)   setState08(60);
[004D] (17)   clearState02(60);
[0050] (1C)   startSound(39);
[0052] (**) }
[0052] (A0) stopObjectCode();
END

// Script 106: Publisher Gets Something
[0000] (2D) putActorInRoom(17,41);
[0003] (01) putActor(17,34,64);
[0007] (11) animateActor(17,251);
[000A] (72) loadRoom(41);
[000C] (2E) delay(60);
[0010] (48) if (Var[82] == 1) {
[0016] (14)   print(17,"Ah! A manuscript! Let's see^");
[0031] (AE)   waitForMessage();
[0032] (2E)   delay(60);
[0036] (48)   if (Var[160] == 2) {
[003C] (14)     print(17,"Wow!\x03This is hot stuff!\x03It will sell millions maybe\x01even BILLIONS!!\x03I'm going to make Mr. Meteor a\x01million dollar offer!");
[00A7] (1A)     Var[101] = 1;
[00AB] (18)   } else {
[00AE] (14)     print(17,"What is this garbage!\x03I wouldn't even use it to start a fire.");
[00E3] (**)   }
[00E3] (11)   animateActor(17,248);
[00E6] (80)   breakHere();
[00E7] (11)   animateActor(17,250);
[00EA] (2E)   delay(120);
[00EE] (1E)   walkActorTo(17,10,64);
[00F2] (3B)   waitForActor(17);
[00F4] (1E)   walkActorTo(17,30,64);
[00F8] (3B)   waitForActor(17);
[00FA] (48)   unless (VAR_HAVE_MSG == 0) goto 00EE;
[0100] (11)   animateActor(17,250);
[0103] (2E)   delay(30);
[0107] (36)   walkActorToObject(17,259);
[010B] (80)   breakHere();
[010C] (80)   breakHere();
[010D] (3B)   waitForActor(17);
[010F] (**) }
[010F] (38) if (Var[82] >= 2) {
[0115] (14)   print(17,"A cassette tape!\x03Now, where's the play button?");
[0140] (36)   walkActorToObject(17,287);
[0144] (80)   breakHere();
[0145] (80)   breakHere();
[0146] (3B)   waitForActor(17);
[0148] (11)   animateActor(17,250);
[014B] (AE)   waitForMessage();
[014C] (2E)   delay(60);
[0150] (1E)   walkActorTo(17,9,56);
[0154] (80)   breakHere();
[0155] (80)   breakHere();
[0156] (3B)   waitForActor(17);
[0158] (11)   animateActor(17,250);
[015B] (2E)   delay(60);
[015F] (48)   if (Var[157] == 0) {
[0165] (2E)     delay(180);
[0169] (14)     print(17,"A blank tape? Is this a joke?");
[0183] (18)   } else {
[0186] (48)     if (Var[157] == 25) {
[018C] (1C)       startSound(25);
[018E] (2E)       delay(300);
[0192] (1C)       startSound(26);
[0194] (07)       setState08(259);
[0197] (2E)       delay(60);
[019B] (36)       walkActorToObject(17,259);
[019F] (80)       breakHere();
[01A0] (80)       breakHere();
[01A1] (3B)       waitForActor(17);
[01A3] (11)       animateActor(17,251);
[01A6] (80)       breakHere();
[01A7] (14)       print(17,"Oh, Great!");
[01B3] (**)     }
[01B3] (48)     if (Var[157] == 44) {
[01B9] (1C)       startSound(44);
[01BB] (2E)       delay(420);
[01BF] (14)       print(17,"I like the beat, but the melody stinks!");
[01E2] (**)     }
[01E2] (48)     if (Var[157] == 50) {
[01E8] (02)       startMusic(50);
[01EA] (1A)       Var[101] = 2;
[01EE] (18)     } else {
[01F1] (48)       unless (Var[157] == 70) goto 0253;
[01F7] (02)       startMusic(70);
[01F9] (1A)       Var[101] = 3;
[01FD] (**)     }
[01FD] (2E)     delay(300);
[0201] (14)     print(17,"Wonderful!\x03Outrageous!\x03AWESOME!!\x03This will be a MEGAHIT!\x03I've got to sign them right now!");
[0253] (**)   }
[0253] (**) }
[0253] (AE) waitForMessage();
[0254] (2E) delay(120);
[0258] (3C) stopSound(25);
[025A] (3C) stopSound(44);
[025C] (20) stopMusic();
[025D] (A0) stopObjectCode();
END

// Script 107: Give Cassette to Green
[0000] (62) stopScript(108);
[0002] (80) breakHere();
[0003] (48) if (Var[154] == 1) {
[0009] (1A)   Var[154] = 0;
[000D] (60)   cursorCommand(15, 2);
[0010] (36)   walkActorToObject(14,164);
[0014] (B6)   walkActorToObject(VAR_EGO,446);
[0018] (BB)   waitForActor(VAR_EGO);
[001A] (91)   animateActor(VAR_EGO,248);
[001D] (3B)   waitForActor(14);
[001F] (52)   actorFollowCamera(14);
[0021] (18) } else {
[0024] (48)   if (Var[157] == 70) {
[002A] (D8)     printEgo("I don't want my tape back - it's awful!");
[004B] (18)     goto 0208;
[004E] (**)   }
[004E] (60)   cursorCommand(15, 2);
[0051] (29)   setOwnerOf(189,14);
[0055] (14)   print(14,"You made a demo tape? Let's hear it!");
[0075] (52)   actorFollowCamera(14);
[0077] (36)   walkActorToObject(14,164);
[007B] (3B)   waitForActor(14);
[007D] (91)   animateActor(VAR_EGO,248);
[0080] (47)   clearState08(216);
[0083] (17)   clearState02(216);
[0086] (2E)   delay(60);
[008A] (07)   setState08(164);
[008D] (42)   startScript(109);
[008F] (2E)   delay(300);
[0093] (**) }
[0093] (48) if (Var[157] == 50) {
[0099] (14)   print(14,"Hey, this is great stuff!");
[00B1] (AE)   waitForMessage();
[00B2] (14)   print(14,"I could use someone like you in my band!");
[00D5] (4D)   walkActorToActor(14,VAR_EGO,5);
[00D9] (80)   breakHere();
[00DA] (AE)   waitForMessage();
[00DB] (14)   print(14,"I have a demo tape, but it's no use.\x03I'll never get a recording contract,\x01even if we get a band together.");
[0134] (36)   walkActorToObject(14,33);
[0138] (3B)   waitForActor(14);
[013A] (47)   clearState08(33);
[013D] (17)   clearState02(33);
[0140] (47)   clearState08(164);
[0143] (2E)   delay(60);
[0147] (36)   walkActorToObject(14,164);
[014B] (3B)   waitForActor(14);
[014D] (07)   setState08(216);
[0150] (57)   setState02(216);
[0153] (20)   stopMusic();
[0154] (2E)   delay(60);
[0158] (**) }
[0158] (48) if (Var[157] == 0) {
[015E] (14)   print(14,"Not very good!\x03I think you need some work on your\x01dynamic range.");
[0197] (2E)   delay(120);
[019B] (**) }
[019B] (48) if (Var[157] == 25) {
[01A1] (D8)   printEgo("THE TENTACLE MATING CALL!!\x03AGGGGGGGGGGGG!!");
[01CA] (4D)   walkActorToActor(14,VAR_EGO,4);
[01CE] (3B)   waitForActor(14);
[01D0] (72)   loadRoom(0);
[01D2] (1A)   Var[95] = 4;
[01D6] (42)   startScript(61);
[01D8] (**) }
[01D8] (48) if (Var[157] == 44) {
[01DE] (14)   print(14,"Not bad.\x03It needs a bit more work, though.");
[0204] (2E)   delay(120);
[0208] (**) }
[0208] (1E) walkActorTo(14,68,58);
[020C] (3B) waitForActor(14);
[020E] (60) cursorCommand(247, 1);
[0211] (D2) actorFollowCamera(VAR_EGO);
[0213] (A0) stopObjectCode();
END

// Script 108: Green Greets Player
[0000] (2D) putActorInRoom(14,20);
[0003] (01) putActor(14,68,58);
[0007] (80) breakHere();
[0008] (C3) VAR_RESULT = getActorX(VAR_EGO);
[000B] (44) unless (VAR_RESULT > 15) goto 0007;
[0011] (4D) walkActorToActor(14,VAR_EGO,5);
[0015] (80) breakHere();
[0016] (80) breakHere();
[0017] (B4) VAR_RESULT = getDist(VAR_EGO,14);
[001C] (04) unless (VAR_RESULT <= 5) goto 0011;
[0022] (48) if (Var[102] == 0) {
[0028] (42)   startScript(159);
[002A] (14)   print(14,"Oh I'm so depressed.\x03I'm never going to get my band started!\x03My life is going nowhere.\x03I'm never going to amount to anything.\x03Eating all that food didn't even help.");
[00B7] (AE)   waitForMessage();
[00B8] (1A)   Var[102] = 1;
[00BC] (62)   stopScript(159);
[00BE] (18) } else {
[00C1] (48)   if (Var[153] == 1) {
[00C7] (D8)     printEgo("Hi!");
[00CC] (18)   } else {
[00CF] (14)     print(14,"I'm soooooooooooo depressed.");
[00EC] (**)   }
[00EC] (AE)   waitForMessage();
[00ED] (**) }
[00ED] (1E) walkActorTo(14,68,58);
[00F1] (A0) stopObjectCode();
END

// Script 109: Play Cassette
[0000] (80) breakHere();
[0001] (48) if (Var[157] == 0) {
[0007] (D8)   printEgo("It's blank.");
[0013] (**) }
[0013] (48) if (Var[157] == 25) {
[0019] (1C)   startSound(25);
[001B] (**) }
[001B] (48) if (Var[157] == 44) {
[0021] (1C)   startSound(44);
[0023] (**) }
[0023] (48) if (Var[157] == 50) {
[0029] (02)   startMusic(50);
[002B] (48)   if (VAR_ROOM == 20) {
[0031] (03)     VAR_RESULT = getActorRoom(14);
[0034] (48)     if (VAR_RESULT == 20) {
[003A] (68)       VAR_RESULT = isScriptRunning(107);
[003D] (48)       if (VAR_RESULT == 0) {
[0043] (1A)         Var[154] = 1;
[0047] (42)         startScript(107);
[0049] (**)       }
[0049] (**)     }
[0049] (**)   }
[0049] (**) }
[0049] (48) if (Var[157] == 70) {
[004F] (02)   startMusic(70);
[0051] (**) }
[0051] (A0) stopObjectCode();
END

// Script 110: Give Contract to Green
[0000] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[0006] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0009] (18) } else {
[000C] (48)   if (VAR_ACTIVE_OBJECT2 == 14) {
[0012] (62)     stopScript(108);
[0014] (A9)     setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[0017] (48)     if (Var[101] == 2) {
[001D] (60)       cursorCommand(15, 2);
[0020] (14)       print(14,"Oh, so you got a contract for yourself?");
[0043] (AE)       waitForMessage();
[0044] (14)       print(14,"Thanks alot! I think I'll kill myself!");
[0067] (AE)       waitForMessage();
[0068] (2E)       delay(120);
[006C] (14)       print(14,"On second thought^");
[007F] (18)     } else {
[0082] (48)       if (Var[101] == 3) {
[0088] (1A)         Var[153] = 1;
[008C] (42)         startScript(159);
[008E] (9B)         setBitVar(2960,VAR_EGO,1);
[0093] (14)         print(14,"A recording contract for ME??");
[00AF] (AE)         waitForMessage();
[00B0] (2E)         delay(120);
[00B4] (14)         print(14,"This is GREAT!\x03We'll call our band:\x01`GT and the Suction Cups.`\x03We'll be on MTV and everything!\x03And don't forget\x01I'll protect you no matter what!");
[0132] (AE)         waitForMessage();
[0133] (14)         print(14,"Now all we have to do is get rid\x01of that meteor.");
[015C] (**)       }
[015C] (48)       unless (Var[101] == 1) goto 01A2;
[0162] (60)       cursorCommand(15, 2);
[0165] (14)       print(14,"A contract for the evil meteor?\x03You're on IT'S side! GRRRR.");
[019A] (**)     }
[019A] (1A)     Var[95] = 4;
[019E] (42)     startScript(61);
[01A0] (62)     stopScript(0);
[01A2] (**)   }
[01A2] (48)   if (VAR_ACTIVE_OBJECT2 == 13) {
[01A8] (42)     startScript(119);
[01AA] (**)   }
[01AA] (48)   if (VAR_ACTIVE_OBJECT2 == 16) {
[01B0] (42)     startScript(118);
[01B2] (**)   }
[01B2] (**) }
[01B2] (A0) stopObjectCode();
END

// Script 111: Package Has Arrived
[0000] (2E) delay(18000);
[0004] (2E) delay(300);
[0008] (08) if (VAR_ROOM != 1) {
[000E] (08)   if (VAR_ROOM != 26) {
[0014] (03)     VAR_RESULT = getActorRoom(11);
[0017] (48)     if (VAR_RESULT == 26) {
[001D] (18)       goto 0023;
[0020] (**)     }
[0020] (**)   }
[0020] (**) }
[0020] (18) goto 0004;
[0023] (1C) startSound(39);
[0025] (47) clearState08(57);
[0028] (17) clearState02(57);
[002B] (2E) delay(480);
[002F] (03) VAR_RESULT = getActorRoom(11);
[0032] (48) unless (VAR_RESULT == 26) goto 002B;
[0038] (08) if (VAR_ROOM != 1) {
[003E] (1C)   startSound(39);
[0040] (**) }
[0040] (62) stopScript(116);
[0042] (1A) Var[143] = 1;
[0046] (42) startScript(87);
[0048] (A0) stopObjectCode();
END

// Script 112: Publisher Commercial
[0000] (40) cutscene();
[0001] (2E) delay(120);
[0005] (58) beginOverride();
[0006] (18) goto 00CE;
[0009] (72) loadRoom(40);
[000B] (2D) putActorInRoom(17,40);
[000E] (01) putActor(17,17,52);
[0012] (11) animateActor(17,250);
[0015] (2E) delay(60);
[0019] (14) print(17,"Hi all you budding writers, musicians,\x01and game designers!\x03I'm Mark Eteer and my company will\x01publish ANYTHING!\x03Just mail it to the address shown below.");
[009F] (2E) delay(30);
[00A3] (47) clearState08(266);
[00A6] (2E) delay(60);
[00AA] (07) setState08(266);
[00AD] (48) unless (VAR_HAVE_MSG == 0) goto 009F;
[00B3] (14) print(17,"Don't forget the stamp!");
[00CA] (2E) delay(120);
[00CE] (9B) setBitVar(2968,VAR_EGO,1);
[00D3] (C0) endCutscene();
[00D4] (47) clearState08(190);
[00D7] (A0) stopObjectCode();
END

// Script 113: Using Typewriter
[0000] (1C) startSound(45);
[0002] (60) cursorCommand(15, 2);
[0005] (2E) delay(300);
[0009] (60) cursorCommand(247, 1);
[000C] (3C) stopSound(45);
[000E] (A0) stopObjectCode();
END

// Script 114: Kid Selection: Update Var States
[0000] (1C) startSound(54);
[0002] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0006] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0008] (3A)   Var[111] -= 1;
[000C] (48)   if (Var[111] == 2) {
[0012] (88)     if (Var[109] != Var[49]) {
[0017] (9A)       Var[48] = Var[49];
[001A] (**)     }
[001A] (**)   }
[001A] (14)   print(255," ");
[001E] (78) } else if (Var[111] < 3) {
[0027] (46)   Var[111]++;
[0029] (85)   drawObject(VAR_ACTIVE_OBJECT1,255,255);
[002D] (48)   if (Var[111] == 2) {
[0033] (9A)     Var[48] = Var[109];
[0036] (**)   }
[0036] (48)   if (Var[111] == 3) {
[003C] (9A)     Var[49] = Var[109];
[003F] (**)   }
[003F] (**) }
[003F] (A0) stopObjectCode();
END

// Script 115: Green Storms Lab
[0000] (62) stopScript(42);
[0002] (1A) Var[120] = 1;
[0006] (48) if (VAR_ROOM == 8) {
[000C] (0E)   putActorAtObject(14,154);
[0010] (18) } else {
[0013] (07)   setState08(163);
[0016] (07)   setState08(166);
[0019] (2D)   putActorInRoom(14,31);
[001C] (0E)   putActorAtObject(14,166);
[0020] (**) }
[0020] (52) actorFollowCamera(14);
[0022] (14) print(13,"ooops!");
[002B] (0D) walkActorToActor(14,13,5);
[002F] (80) breakHere();
[0030] (3B) waitForActor(14);
[0032] (D2) actorFollowCamera(VAR_EGO);
[0034] (14) print(14,"What are you doing to MY FRIEND!!\x03I've warned you, don't mess around\x01with my band members!\x03NOW GET OUT OF HERE!");
[0094] (AE) waitForMessage();
[0095] (1A) Var[111] = 13;
[0099] (48) if (VAR_ROOM == 8) {
[009F] (B6)   walkActorToObject(Var[111],154);
[00A3] (18) } else {
[00A6] (B6)   walkActorToObject(Var[111],166);
[00AA] (**) }
[00AA] (2E) delay(60);
[00AE] (48) if (Var[111] == 13) {
[00B4] (14)   print(14,"That'll take care of him!");
[00CC] (**) }
[00CC] (BB) waitForActor(Var[111]);
[00CE] (2E) delay(60);
[00D2] (AD) putActorInRoom(Var[111],0);
[00D5] (46) Var[111]++;
[00D7] (48) unless (Var[111] == 15) goto 0099;
[00DD] (1A) Var[151] = 1;
[00E1] (A0) stopObjectCode();
END

// Script 116: Steal Ed's Stuff
[0000] (48) if (Var[123] == 35) {
[0006] (0F)   if (!getState08(35)) {
[000B] (1C)     startSound(10);
[000D] (87)     setState08(VAR_ACTIVE_OBJECT1);
[000F] (2E)     delay(60);
[0013] (D8)     printEgo("Damn! I broke it!");
[0023] (AE)     waitForMessage();
[0024] (**)   }
[0024] (**) }
[0024] (48) if (Var[106] == 1) {
[002A] (18)   goto 0039;
[002D] (18) } else {
[0030] (03)   VAR_RESULT = getActorRoom(11);
[0033] (08)   if (VAR_RESULT != 26) {
[0039] (08)     if (Var[123] != 35) {
[003F] (D0)       pickupObject(VAR_ACTIVE_OBJECT1);
[0041] (**)     }
[0041] (1A)     Var[123] = 0;
[0045] (18)   } else {
[0048] (1A)     Var[175] = 1;
[004C] (42)     startScript(164);
[004E] (9A)     Var[113] = VAR_EGO;
[0051] (9B)     setBitVar(2936,Var[113],1);
[0056] (62)     stopScript(96);
[0058] (62)     stopScript(91);
[005A] (62)     stopScript(88);
[005C] (14)     print(11,"What are you doing!!!\x03You're not supposed to touch that!");
[008F] (4D)     walkActorToActor(11,Var[113],2);
[0093] (80)     breakHere();
[0094] (80)     breakHere();
[0095] (74)     VAR_RESULT = getDist(11,Var[113]);
[009A] (04)     unless (VAR_RESULT <= 2) goto 008F;
[00A0] (9B)     setBitVar(2952,Var[113],1);
[00A5] (91)     animateActor(Var[113],255);
[00A8] (AE)     waitForMessage();
[00A9] (2E)     delay(60);
[00AD] (42)     startScript(89);
[00AF] (1A)     Var[175] = 0;
[00B3] (42)     startScript(164);
[00B5] (**)   }
[00B5] (**) }
[00B5] (1A) Var[123] = 0;
[00B9] (A0) stopObjectCode();
END

// Script 117: Purple Chases Kid
[0000] (0C) loadScript(49)
[0003] (80) breakHere();
[0004] (C3) VAR_RESULT = getActorX(VAR_EGO);
[0007] (38) unless (VAR_RESULT >= 20) goto 0003;
[000D] (14) print(13,"What are YOU doing here?");
[0024] (42) startScript(49);
[0026] (A0) stopObjectCode();
END

// Script 118: Show Contract to Meteor
[0000] (29) setOwnerOf(60,0);
[0004] (0C) unlockScript(110)
[0007] (48) if (Var[101] == 1) {
[000D] (60)   cursorCommand(15, 2);
[0010] (62)   stopScript(126);
[0012] (1A)   Var[108] = 2;
[0016] (1A)   Var[101] = 4;
[001A] (14)   print(255,"Wow! A lucrative publishing contract!");
[003E] (11)   animateActor(16,12);
[0041] (1C)   startSound(67);
[0043] (62)   stopScript(123);
[0045] (62)   stopScript(128);
[0047] (0C)   unlockCostume(20)
[004A] (2D)   putActorInRoom(20,0);
[004D] (01)   putActor(20,0,0);
[0051] (AE)   waitForMessage();
[0052] (14)   print(255,"I'm going to be famous!\x03I don't have to be evil anymore.");
[0083] (1C)   startSound(67);
[0085] (AE)   waitForMessage();
[0086] (14)   print(255,"Dr. Fred, release the women, all\x01the women. We're going to be rich!");
[00C1] (1C)   startSound(67);
[00C3] (80)   breakHere();
[00C4] (44)   unless (VAR_CHARCOUNT > 33) goto 00C3;
[00CA] (1C)   startSound(66);
[00CC] (AE)   waitForMessage();
[00CD] (11)   animateActor(16,16);
[00D0] (1C)   startSound(67);
[00D2] (2E)   delay(120);
[00D6] (3C)   stopSound(67);
[00D8] (42)   startScript(63);
[00DA] (18) } else {
[00DD] (14)   print(255,"I don't want that! Prepare to die!!!");
[00FE] (1C)   startSound(66);
[0100] (11)   animateActor(16,12);
[0103] (AE)   waitForMessage();
[0104] (11)   animateActor(16,16);
[0107] (**) }
[0107] (A0) stopObjectCode();
END

// Script 119: Show Contract to Purple
[0000] (40) cutscene();
[0001] (48) if (Var[101] == 1) {
[0007] (62)   stopScript(117);
[0009] (62)   stopScript(49);
[000B] (62)   stopScript(42);
[000D] (58)   beginOverride();
[000E] (18)   goto 0074;
[0011] (14)   print(13,"A publishing contract for the meteor?\x03It'll be happy to see that!\x01Sorry I bothered you!\x03Move along, move along.");
[0073] (AE)   waitForMessage();
[0074] (1A)   Var[151] = 1;
[0078] (1E)   walkActorTo(13,40,52);
[007C] (14)   print(255," ");
[0080] (9B)   setBitVar(2952,VAR_EGO,0);
[0085] (62)   stopScript(42);
[0087] (18) } else {
[008A] (14)   print(13,"Hah! I don't want that!");
[00A0] (AE)   waitForMessage();
[00A1] (**) }
[00A1] (C0) endCutscene();
[00A2] (A0) stopObjectCode();
END

// Script 120: Opening Credits
[0000] (40) cutscene();
[0001] (58) beginOverride();
[0002] (18) goto 01F7;
[0005] (0C) loadCostume(22)
[0008] (0C) lockCostume(22)
[000B] (0C) loadRoom(49)
[000E] (0C) lockRoom(49)
[0011] (0C) loadScript(135)
[0014] (0C) lockScript(135)
[0017] (0C) loadSound(57)
[001A] (0C) lockSound(57)
[001D] (0C) loadSound(58)
[0020] (72) loadRoom(33);
[0022] (32) setCameraAt(60);
[0024] (1C) startSound(56);
[0026] (2E) delay(120);
[002A] (14) print(255,"Twenty years ago today...");
[0043] (2E) delay(180);
[0047] (42) startScript(135);
[0049] (80) breakHere();
[004A] (68) VAR_RESULT = isScriptRunning(135);
[004D] (48) unless (VAR_RESULT == 0) goto 0049;
[0053] (2E) delay(60);
[0057] (02) startMusic(58);
[0059] (05) drawObject(44,255,255);
[005E] (2E) delay(30);
[0062] (05) drawObject(43,255,255);
[0067] (2E) delay(30);
[006B] (05) drawObject(42,255,255);
[0070] (2E) delay(30);
[0074] (05) drawObject(41,255,255);
[0079] (2E) delay(30);
[007D] (05) drawObject(40,255,255);
[0082] (2E) delay(180);
[0086] (14) print(255,"     A Lucasfilm Games Production");
[00A5] (2E) delay(240);
[00A9] (14) print(255,"       Designed and written by\x01     Ron Gilbert and Gary Winnick");
[00DF] (2E) delay(240);
[00E3] (14) print(255,"              Scripted by\x01       Ron Gilbert and David Fox");
[0110] (2E) delay(240);
[0114] (14) print(255,"             Programmed by\x01     Aric Wilmunder and Ron Gilbert");
[0147] (2E) delay(240);
[014B] (14) print(255,"         Art and animation by\x01             Gary Winnick");
[0176] (2E) delay(240);
[017A] (14) print(255,"             IBM sounds by\x01      Dave Warhol and David Hayes");
[01AA] (2E) delay(240);
[01AE] (14) print(255,"          Original music by\x01    Chris Grigg and David Lawrence");
[01E2] (2E) delay(240);
[01E6] (14) print(255," ");
[01EA] (72) loadRoom(49);
[01EC] (32) setCameraAt(20);
[01EE] (12) panCameraTo(220);
[01F0] (80) breakHere();
[01F1] (38) unless (VAR_CAMERA_POS_X >= 100) goto 01F0;
[01F7] (62) stopScript(135);
[01F9] (0C) unlockRoom(49)
[01FC] (0C) unlockCostume(22)
[01FF] (0C) unlockScript(135)
[0202] (0C) unlockSound(57)
[0205] (C0) endCutscene();
[0206] (A0) stopObjectCode();
END

// Script 121: Open Door
[0000] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0006] (1C)   startSound(8);
[0008] (**) }
[0008] (A0) stopObjectCode();
END

// Script 122: Close Door
[0000] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0006] (1C)   startSound(9);
[0008] (**) }
[0008] (A0) stopObjectCode();
END

// Script 123: Self-Destruct Countdown
[0000] (0C) loadSound(60)
[0003] (0C) lockSound(60)
[0006] (2E) delay(120);
[000A] (AE) waitForMessage();
[000B] (1C) startSound(60);
[000D] (14) print(255,"Time remaining:\x032:00 minutes until meltdown^");
[0038] (2E) delay(1200);
[003C] (1C) startSound(60);
[003E] (48) if (VAR_HAVE_MSG == 0) {
[0044] (14)   print(255,"1:45 minutes^");
[0053] (**) }
[0053] (2E) delay(1200);
[0057] (1C) startSound(60);
[0059] (48) if (VAR_HAVE_MSG == 0) {
[005F] (14)   print(255,"1:30 minutes^");
[006E] (**) }
[006E] (2E) delay(1200);
[0072] (1C) startSound(60);
[0074] (48) if (VAR_HAVE_MSG == 0) {
[007A] (14)   print(255,"1:15 minutes^");
[0089] (**) }
[0089] (2E) delay(1200);
[008D] (1C) startSound(60);
[008F] (48) if (VAR_HAVE_MSG == 0) {
[0095] (14)   print(255,"1:00 minute^");
[00A3] (**) }
[00A3] (2E) delay(1200);
[00A7] (1C) startSound(60);
[00A9] (48) if (VAR_HAVE_MSG == 0) {
[00AF] (14)   print(255,"45 seconds^");
[00BC] (**) }
[00BC] (2E) delay(1200);
[00C0] (1C) startSound(60);
[00C2] (48) if (VAR_HAVE_MSG == 0) {
[00C8] (14)   print(255,"30 seconds^");
[00D5] (**) }
[00D5] (2E) delay(1200);
[00D9] (1C) startSound(60);
[00DB] (48) if (VAR_HAVE_MSG == 0) {
[00E1] (14)   print(255,"15 seconds^");
[00EE] (**) }
[00EE] (2E) delay(300);
[00F2] (1C) startSound(60);
[00F4] (48) if (VAR_HAVE_MSG == 0) {
[00FA] (14)   print(255,"10 seconds^");
[0107] (**) }
[0107] (2E) delay(300);
[010B] (1C) startSound(60);
[010D] (14) print(255,"5");
[0111] (2E) delay(60);
[0115] (1C) startSound(60);
[0117] (14) print(255,"4");
[011B] (2E) delay(60);
[011F] (1C) startSound(60);
[0121] (14) print(255,"3");
[0125] (2E) delay(60);
[0129] (1C) startSound(60);
[012B] (14) print(255,"2");
[012F] (2E) delay(60);
[0133] (1C) startSound(60);
[0135] (14) print(255,"1");
[0139] (2E) delay(60);
[013D] (1C) startSound(60);
[013F] (0C) unlockSound(60)
[0142] (14) print(255,"0 seconds, self-destruct commencing.");
[0166] (2E) delay(180);
[016A] (42) startScript(62);
[016C] (62) stopScript(0);
[016E] (A0) stopObjectCode();
END

// Script 124: Talk Shoe Ending
[0000] (0C) unlockCostume(9)
[0003] (0C) loadRoom(42)
[0006] (0C) lockRoom(42)
[0009] (0C) loadCostume(16)
[000C] (0C) lockCostume(16)
[000F] (0C) loadCostume(18)
[0012] (0C) lockCostume(18)
[0015] (08) if (Var[75] != 0) {
[001B] (0C)   loadCostume(15)
[001E] (0C)   lockCostume(15)
[0021] (**) }
[0021] (0C) loadSound(55)
[0024] (0C) lockSound(55)
[0027] (2D) putActorInRoom(18,42);
[002A] (01) putActor(18,59,61);
[002E] (2D) putActorInRoom(16,42);
[0031] (01) putActor(16,46,62);
[0035] (AD) putActorInRoom(Var[116],42);
[0038] (81) putActor(Var[116],10,60);
[003C] (91) animateActor(Var[116],249);
[003F] (2D) putActorInRoom(23,42);
[0042] (01) putActor(23,13,60);
[0046] (72) loadRoom(42);
[0048] (32) setCameraAt(50);
[004A] (2E) delay(120);
[004E] (11) animateActor(18,250);
[0051] (11) animateActor(16,16);
[0054] (14) print(18,"Welcome back from our break.\x03We've been talking with the celebrity^\x03^rock who gave up a life of crime for\x01a career as a writer.");
[00C1] (AE) waitForMessage();
[00C2] (11) animateActor(18,248);
[00C5] (80) breakHere();
[00C6] (14) print(18,"So, Mr. Meteor, how does it feel\x01to be famous instead of infamous?");
[0100] (AE) waitForMessage();
[0101] (14) print(255,"Well, Wink, it feels great.\x01But, I couldn't have done it alone^");
[0139] (1C) startSound(67);
[013B] (11) animateActor(16,12);
[013E] (2E) delay(180);
[0142] (3C) stopSound(67);
[0144] (12) panCameraTo(20);
[0146] (11) animateActor(16,16);
[0149] (80) breakHere();
[014A] (48) unless (VAR_CAMERA_POS_X == 20) goto 0149;
[0150] (AE) waitForMessage();
[0151] (08) if (Var[75] != 0) {
[0157] (2D)   putActorInRoom(18,0);
[015A] (01)   putActor(18,0,0);
[015E] (2E)   delay(60);
[0162] (1C)   startSound(60);
[0164] (2D)   putActorInRoom(15,42);
[0167] (01)   putActor(15,4,64);
[016B] (2E)   delay(60);
[016F] (1E)   walkActorTo(15,42,64);
[0173] (2E)   delay(120);
[0177] (14)   print(15,"I don't care if you've reformed\x01you're still coming with me!");
[01AD] (12)   panCameraTo(37);
[01AF] (3B)   waitForActor(15);
[01B1] (AE)   waitForMessage();
[01B2] (1C)   startSound(60);
[01B4] (2D)   putActorInRoom(15,0);
[01B7] (01)   putActor(15,0,0);
[01BB] (80)   breakHere();
[01BC] (2D)   putActorInRoom(16,0);
[01BF] (01)   putActor(16,0,0);
[01C3] (2E)   delay(60);
[01C7] (**) }
[01C7] (02) startMusic(55);
[01C9] (2E) delay(180);
[01CD] (A0) stopObjectCode();
END

// Script 125: Entered Inner Lab
[0000] (2E) delay(60);
[0004] (47) clearState08(169);
[0007] (1C) startSound(9);
[0009] (2E) delay(60);
[000D] (1E) walkActorTo(9,26,66);
[0011] (14) print(9,"Purple Tentacle! Invaders!!");
[002D] (AE) waitForMessage();
[002E] (2E) delay(120);
[0032] (1E) walkActorTo(9,24,66);
[0036] (14) print(9,"PURPLE TENTACLE!!");
[0049] (2E) delay(360);
[004D] (C3) VAR_RESULT = getActorX(VAR_EGO);
[0050] (38) unless (VAR_RESULT >= 20) goto 0036;
[0056] (14) print(9,"So^\x03^you've gotten past all my safeguards!\x03There's only one thing left to do!");
[009B] (36) walkActorToObject(9,425);
[009F] (3B) waitForActor(9);
[00A1] (11) animateActor(9,251);
[00A4] (80) breakHere();
[00A5] (C3) VAR_RESULT = getActorX(VAR_EGO);
[00A8] (38) unless (VAR_RESULT >= 37) goto 00A4;
[00AE] (AE) waitForMessage();
[00AF] (14) print(9,"I'm arming the self-destruct mechanism.\x03Only I know the secret code to stop it!");
[00F5] (1A) Var[111] = 12;
[00F9] (2E) delay(30);
[00FD] (1C) startSound(54);
[00FF] (3A) Var[111] -= 1;
[0103] (48) unless (Var[111] == 0) goto 00F9;
[0109] (AE) waitForMessage();
[010A] (14) print(9,"There!\x03The house will blow up in 2 minutes.\x03Heh heh heh!");
[013C] (42) startScript(123);
[013E] (11) animateActor(9,249);
[0141] (80) breakHere();
[0142] (11) animateActor(9,250);
[0145] (42) startScript(127);
[0147] (A0) stopObjectCode();
END

// Script 126: Zom-B-Matic Turned Off
[0000] (2E) delay(120);
[0004] (1A) Var[108] = 3;
[0008] (40) cutscene();
[0009] (72) loadRoom(30);
[000B] (2D) putActorInRoom(9,30);
[000E] (01) putActor(9,59,60);
[0012] (1A) Var[108] = 2;
[0016] (52) actorFollowCamera(9);
[0018] (2E) delay(120);
[001C] (11) animateActor(9,250);
[001F] (14) print(9,"Oh^what happened?\x03I feel much better now!\x03I'm free of this machine's control!");
[0065] (AE) waitForMessage();
[0066] (14) print(9,"But wait!\x03The self-destruct sequence was initated!\x03I'll try to turn it off.");
[00AA] (36) walkActorToObject(9,425);
[00AE] (3B) waitForActor(9);
[00B0] (1A) Var[111] = 12;
[00B4] (2E) delay(30);
[00B8] (1C) startSound(54);
[00BA] (3A) Var[111] -= 1;
[00BE] (48) unless (Var[111] == 0) goto 00B4;
[00C4] (AE) waitForMessage();
[00C5] (11) animateActor(9,249);
[00C8] (80) breakHere();
[00C9] (1E) walkActorTo(9,59,64);
[00CD] (08) if (Var[162] != 3) {
[00D3] (14)   print(9,"I can't disable it!\x03The meteor must have control of the\x01entire system!");
[0112] (AE)   waitForMessage();
[0113] (83)   VAR_RESULT = getActorRoom(VAR_EGO);
[0116] (08)   if (VAR_RESULT != 30) {
[011C] (11)     animateActor(9,249);
[011F] (18)   } else {
[0122] (4D)     walkActorToActor(9,VAR_EGO,5);
[0126] (**)   }
[0126] (14)   print(9,"Hey kid!\x03You've got to help me!\x03We have to get rid of that meteor once\x01and for all!");
[016D] (AE)   waitForMessage();
[016E] (42)   startScript(127);
[0170] (2E)   delay(120);
[0174] (18) } else {
[0177] (62)   stopScript(123);
[0179] (14)   print(9,"I did it!");
[0183] (AE)   waitForMessage();
[0184] (11)   animateActor(9,12);
[0187] (2E)   delay(180);
[018B] (42)   startScript(63);
[018D] (62)   stopScript(0);
[018F] (**) }
[018F] (1A) Var[108] = 2;
[0193] (C0) endCutscene();
[0194] (A0) stopObjectCode();
END

// Script 127: Dr. Fred Wanders
[0000] (1E) walkActorTo(9,15,64);
[0004] (80) breakHere();
[0005] (3B) waitForActor(9);
[0007] (1E) walkActorTo(9,55,64);
[000B] (80) breakHere();
[000C] (3B) waitForActor(9);
[000E] (18) goto 0000;
[0011] (A0) stopObjectCode();
END

// Script 128: Meteor Fires Radiation
[0000] (2E) delay(120);
[0004] (2E) delay(60);
[0008] (74) VAR_RESULT = getDist(16,VAR_EGO);
[000D] (44) unless (VAR_RESULT > 3) goto 0004;
[0013] (3C) stopSound(62);
[0015] (1C) startSound(62);
[0017] (1C) startSound(66);
[0019] (2D) putActorInRoom(20,51);
[001C] (01) putActor(20,41,50);
[0020] (4D) walkActorToActor(20,VAR_EGO,1);
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (74) VAR_RESULT = getDist(20,VAR_EGO);
[002B] (04) unless (VAR_RESULT <= 1) goto 0020;
[0031] (2D) putActorInRoom(20,0);
[0034] (3C) stopSound(62);
[0036] (1C) startSound(62);
[0038] (80) breakHere();
[0039] (4F) if (getState08(269)) {
[003E] (18)   goto 0004;
[0041] (**) }
[0041] (60) cursorCommand(15, 2);
[0044] (D8) printEgo("YOWL!");
[004B] (91) animateActor(VAR_EGO,255);
[004E] (2E) delay(60);
[0052] (42) startScript(62);
[0054] (A0) stopObjectCode();
END

// Script 129: Activate Sandy
[0000] (80) breakHere();
[0001] (D6) VAR_RESULT = getActorMoving(VAR_EGO);
[0004] (48) if (VAR_RESULT == 0) {
[000A] (11)   animateActor(23,6);
[000D] (**) }
[000D] (2E) delay(60);
[0011] (18) goto 0001;
[0014] (A0) stopObjectCode();
END

// Script 130: Activate Rocket Engine
[0000] (80) breakHere();
[0001] (40) cutscene();
[0002] (1A) Var[152] = 1;
[0006] (1C) startSound(64);
[0008] (2E) delay(60);
[000C] (07) setState08(134);
[000F] (07) setState08(186);
[0012] (2E) delay(300);
[0016] (3C) stopSound(64);
[0018] (72) loadRoom(0);
[001A] (2D) putActorInRoom(21,46);
[001D] (01) putActor(21,15,68);
[0021] (11) animateActor(21,249);
[0024] (0C) loadCostume(16)
[0027] (0C) lockCostume(16)
[002A] (0C) loadRoom(48)
[002D] (0C) lockRoom(48)
[0030] (72) loadRoom(46);
[0032] (32) setCameraAt(20);
[0034] (2E) delay(60);
[0038] (1C) startSound(65);
[003A] (2E) delay(300);
[003E] (1E) walkActorTo(21,15,1);
[0042] (3B) waitForActor(21);
[0044] (2D) putActorInRoom(21,0);
[0047] (01) putActor(21,0,0);
[004B] (2E) delay(180);
[004F] (3C) stopSound(65);
[0051] (48) if (Var[162] == 2) {
[0057] (07)   setState08(554);
[005A] (72)   loadRoom(48);
[005C] (32)   setCameraAt(20);
[005E] (2E)   delay(60);
[0062] (14)   print(255,"Wheeeee!");
[006D] (2E)   delay(180);
[0071] (**) }
[0071] (1A) Var[96] = 8;
[0075] (83) VAR_RESULT = getActorRoom(Var[96]);
[0078] (48) if (VAR_RESULT == 16) {
[007E] (AD)   putActorInRoom(Var[96],52);
[0081] (C1)   putActor(Var[96],Var[96],60);
[0085] (**) }
[0085] (3A) Var[96] -= 1;
[0089] (48) unless (Var[96] == 0) goto 0075;
[008F] (C0) endCutscene();
[0090] (0C) unlockCostume(16)
[0093] (0C) unlockRoom(48)
[0096] (48) if (Var[162] == 2) {
[009C] (42)   startScript(63);
[009E] (62)   stopScript(0);
[00A0] (**) }
[00A0] (A0) stopObjectCode();
END

// Script 131: Introducing Kids
[0000] (1A) Var[59] = 100;
[0004] (52) actorFollowCamera(3);
[0006] (40) cutscene();
[0007] (58) beginOverride();
[0008] (18) goto 0209;
[000B] (11) animateActor(3,249);
[000E] (91) animateActor(Var[48],248);
[0011] (91) animateActor(Var[49],248);
[0014] (2E) delay(60);
[0018] (14) print(3,"Ok! This looks like the old mansion.");
[0039] (2E) delay(60);
[003D] (1E) walkActorTo(3,18,60);
[0041] (AE) waitForMessage();
[0042] (14) print(3,"I'm sure I saw Dr. Fred take Sandy here.\x03It's up to us to get her out.");
[007C] (2E) delay(120);
[0080] (1E) walkActorTo(3,24,59);
[0084] (AE) waitForMessage();
[0085] (14) print(3,"This could be real dangerous.\x03If anyone wants to back out^");
[00B9] (AE) waitForMessage();
[00BA] (4F) if (getState08(263)) {
[00BF] (14)   print(5,"Ok, I'm outta here!");
[00D2] (43)   Var[71] = getActorX(5);
[00D5] (23)   Var[72] = getActorY(5);
[00D8] (1E)   walkActorTo(5,38,64);
[00DC] (48)   if (Var[48] == 5) {
[00E2] (91)     animateActor(Var[49],250);
[00E5] (18)   } else {
[00E8] (91)     animateActor(Var[48],250);
[00EB] (**)   }
[00EB] (3B)   waitForActor(5);
[00ED] (11)   animateActor(5,249);
[00F0] (AE)   waitForMessage();
[00F1] (14)   print(3,"BERNARD! Don't be a tuna head!\x03It's Sandy we're talking about!");
[0129] (80)   breakHere();
[012A] (44)   unless (VAR_CHARCOUNT > 28) goto 0129;
[0130] (11)   animateActor(5,250);
[0133] (80)   breakHere();
[0134] (11)   animateActor(5,248);
[0137] (AE)   waitForMessage();
[0138] (2E)   delay(120);
[013C] (14)   print(5,"Ok.");
[0142] (7E)   walkActorTo(5,Var[71],Var[72]);
[0146] (80)   breakHere();
[0147] (3B)   waitForActor(5);
[0149] (11)   animateActor(5,250);
[014C] (**) }
[014C] (4F) if (getState08(261)) {
[0151] (14)   print(2,"I heard Dr. Fred was kinda cute.");
[016E] (AE)   waitForMessage();
[016F] (**) }
[016F] (4F) if (getState08(260)) {
[0174] (14)   print(1,"Let's do it.");
[0181] (AE)   waitForMessage();
[0182] (**) }
[0182] (4F) if (getState08(265)) {
[0187] (14)   print(7,"I thought we were going to the beach!");
[01A8] (AE)   waitForMessage();
[01A9] (**) }
[01A9] (4F) if (getState08(262)) {
[01AE] (14)   print(4,"Did any of you guys see that movie?\x03Four kids went into this strange house\x03and...uh...never mind.");
[0204] (AE)   waitForMessage();
[0205] (**) }
[0205] (2E) delay(60);
[0209] (14) print(3,"Ok, let's go rescue Sandy!");
[0222] (2E) delay(60);
[0226] (11) animateActor(3,250);
[0229] (80) breakHere();
[022A] (91) animateActor(Var[48],250);
[022D] (80) breakHere();
[022E] (91) animateActor(Var[49],250);
[0231] (C0) endCutscene();
[0232] (42) startScript(164);
[0234] (A0) stopObjectCode();
END

// Script 132: Read Contract
[0000] (48) if (Var[101] == 2) {
[0006] (C8)   if (Var[86] == VAR_EGO) {
[000B] (D8)     printEgo("Wow! It's a recording contract for ME!");
[002D] (48)   } else if (Var[86] == 1) {
[0036] (D8)     printEgo("It's a recording contract for Syd.");
[0055] (18)   } else {
[0058] (D8)     printEgo("It's a recording contract for Razor.");
[0079] (**)   }
[0079] (48) } else if (Var[101] == 3) {
[0082] (D8)   printEgo("It's a recording contract\x01for Green Tentacle.");
[00AC] (18) } else {
[00AF] (D8)   printEgo("It's a book publishing contract,\x01and it's worth MILLIONS!");
[00E3] (**) }
[00E3] (A0) stopObjectCode();
END

// Script 133: Save/Load Game
[0000] (80) breakHere();
[0001] (9A) Var[204] = Var[203];
[0004] (48) if (Var[203] == 0) {
[000A] (14)   print(255,"           The game was saved.");
[0023] (**) }
[0023] (48) if (Var[203] == 2) {
[0029] (14)   print(255,"         The game was NOT saved.");
[0044] (**) }
[0044] (48) if (Var[203] == 5) {
[004A] (14)   print(255,"        The game was NOT loaded.");
[0065] (**) }
[0065] (48) if (Var[203] == 8) {
[006B] (14)   print(255,"  There are no saved games on the disk.");
[008D] (**) }
[008D] (48) if (Var[203] == 4) {
[0093] (A8)   if (Var[212]) {
[0097] (04)     if (Var[212] <= 2) {
[009D] (14)       print(255," Put a save-load game disk in Drive \x02");
[00BE] (48)       if (Var[212] == 1) {
[00C4] (14)         print(255,"A.");
[00C9] (**)       }
[00C9] (48)       if (Var[212] == 2) {
[00CF] (14)         print(255,"B.");
[00D4] (**)       }
[00D4] (18)       goto 00DA;
[00D7] (**)     }
[00D7] (**)   }
[00D7] (14)   print(255,"");
[00DA] (**) }
[00DA] (1A) Var[205] = 1;
[00DE] (2E) delay(10);
[00E2] (88) if (Var[204] != Var[203]) {
[00E7] (18)   goto 0001;
[00EA] (**) }
[00EA] (46) Var[205]++;
[00EC] (44) unless (Var[205] > 35) goto 00DE;
[00F2] (18) goto 0004;
[00F5] (A0) stopObjectCode();
END

// no script 134

// Script 135: Meteor Crashes to Earth
[0000] (2D) putActorInRoom(22,33);
[0003] (01) putActor(22,80,5);
[0007] (52) actorFollowCamera(22);
[0009] (1E) walkActorTo(22,29,52);
[000D] (80) breakHere();
[000E] (43) VAR_RESULT = getActorX(22);
[0011] (78) unless (VAR_RESULT < 40) goto 000D;
[0017] (12) panCameraTo(20);
[0019] (3B) waitForActor(22);
[001B] (11) animateActor(22,8);
[001E] (01) putActor(22,29,52);
[0022] (80) breakHere();
[0023] (3C) stopSound(56);
[0025] (1C) startSound(57);
[0027] (80) breakHere();
[0028] (80) breakHere();
[0029] (80) breakHere();
[002A] (80) breakHere();
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (80) breakHere();
[002E] (80) breakHere();
[002F] (80) breakHere();
[0030] (80) breakHere();
[0031] (A0) stopObjectCode();
END

// Script 136: Meteor Police Timer
[0000] (2E) delay(18000);
[0004] (1C) startSound(37);
[0006] (2E) delay(600);
[000A] (42) startScript(43);
[000C] (A0) stopObjectCode();
END

// Script 137: Open Dungeon Door with Loose Brick
[0000] (0F) if (!getState08(159)) {
[0005] (1C)   startSound(8);
[0007] (07)   setState08(159);
[000A] (07)   setState08(155);
[000D] (**) }
[000D] (2E) delay(180);
[0011] (42) startScript(56);
[0013] (A0) stopObjectCode();
END

// Script 138: Find Kid in Room
[0000] (1A) Var[109] = 7;
[0004] (83) VAR_RESULT = getActorRoom(Var[109]);
[0007] (C8) if (VAR_RESULT == Var[127]) {
[000C] (1A)   Var[128] = 0;
[0010] (**) }
[0010] (3A) Var[109] -= 1;
[0014] (48) unless (Var[109] == 0) goto 0004;
[001A] (A0) stopObjectCode();
END

// Script 139: Edna and Ed Cutscene Check
[0000] (2E) delay(25200);
[0004] (2E) delay(1800);
[0008] (1A) Var[128] = 1;
[000C] (03) VAR_RESULT = getActorRoom(11);
[000F] (08) if (VAR_RESULT != 26) {
[0015] (1A)   Var[128] = 0;
[0019] (**) }
[0019] (1A) Var[127] = 26;
[001D] (42) startScript(138);
[001F] (1A) Var[127] = 38;
[0023] (42) startScript(138);
[0025] (1A) Var[127] = 19;
[0029] (42) startScript(138);
[002B] (03) VAR_RESULT = getActorRoom(10);
[002E] (08) if (VAR_RESULT != 19) {
[0034] (1A)   Var[128] = 0;
[0038] (**) }
[0038] (31) VAR_RESULT = getBitVar(2816,19);
[003D] (08) if (VAR_RESULT != 0) {
[0043] (1A)   Var[128] = 0;
[0047] (**) }
[0047] (48) unless (Var[128] == 1) goto 0004;
[004D] (42) startScript(140);
[004F] (A0) stopObjectCode();
END

// Script 140: Edna and Ed Cutscene
[0000] (40) cutscene();
[0001] (07) setState08(103);
[0004] (2D) putActorInRoom(11,19);
[0007] (01) putActor(11,18,64);
[000B] (2D) putActorInRoom(10,19);
[000E] (01) putActor(10,24,64);
[0012] (11) animateActor(11,249);
[0015] (11) animateActor(10,248);
[0018] (72) loadRoom(19);
[001A] (32) setCameraAt(20);
[001C] (58) beginOverride();
[001D] (18) goto 0153;
[0020] (2E) delay(60);
[0024] (14) print(11,"Daddy's been acting very strangely ever\x01since his secret project in the lab^");
[0068] (AE) waitForMessage();
[0069] (14) print(10,"YEAH SO!!!");
[0075] (AE) waitForMessage();
[0076] (14) print(11,"Well, Mommy, I'm worried about him.\x03He hasn't been at dinner for 5 years^");
[00B6] (AE) waitForMessage();
[00B7] (14) print(10,"YEAH, SO!!!");
[00C4] (AE) waitForMessage();
[00C5] (14) print(11,"^and he's been bringing those bodies\x01down into the basement late at night.");
[0107] (AE) waitForMessage();
[0108] (14) print(10,"WHAT'S YOUR POINT ED?!\x03I'M A VERY BUSY LADY!");
[0130] (AE) waitForMessage();
[0131] (2E) delay(120);
[0135] (11) animateActor(11,250);
[0138] (2E) delay(120);
[013C] (11) animateActor(11,249);
[013F] (14) print(11,"Never mind.");
[014C] (AE) waitForMessage();
[014D] (36) walkActorToObject(11,103);
[0151] (3B) waitForActor(11);
[0153] (48) if (VAR_OVERRIDE == 1) {
[0159] (72)   loadRoom(0);
[015B] (**) }
[015B] (14) print(255," ");
[015F] (2D) putActorInRoom(11,26);
[0162] (01) putActor(11,10,52);
[0166] (47) clearState08(103);
[0169] (47) clearState08(461);
[016C] (48) if (VAR_OVERRIDE == 0) {
[0172] (1C)   startSound(9);
[0174] (2E)   delay(120);
[0178] (**) }
[0178] (C0) endCutscene();
[0179] (A0) stopObjectCode();
END

// Script 141: Edna and Dr. Fred Cutscene Check
[0000] (2E) delay(18000);
[0004] (2E) delay(1800);
[0008] (1A) Var[128] = 1;
[000C] (1A) Var[127] = 38;
[0010] (42) startScript(138);
[0012] (1A) Var[127] = 19;
[0016] (42) startScript(138);
[0018] (03) VAR_RESULT = getActorRoom(10);
[001B] (08) if (VAR_RESULT != 19) {
[0021] (1A)   Var[128] = 0;
[0025] (**) }
[0025] (48) if (Var[161] == 1) {
[002B] (1A)   Var[128] = 0;
[002F] (**) }
[002F] (31) VAR_RESULT = getBitVar(2816,19);
[0034] (08) if (VAR_RESULT != 0) {
[003A] (1A)   Var[128] = 0;
[003E] (**) }
[003E] (48) unless (Var[128] == 1) goto 0004;
[0044] (42) startScript(142);
[0046] (A0) stopObjectCode();
END

// Script 142: Edna and Dr. Fred Cutscene
[0000] (40) cutscene();
[0001] (07) setState08(103);
[0004] (2D) putActorInRoom(9,19);
[0007] (01) putActor(9,2,52);
[000B] (2D) putActorInRoom(10,19);
[000E] (01) putActor(10,35,64);
[0012] (11) animateActor(9,249);
[0015] (11) animateActor(10,249);
[0018] (72) loadRoom(19);
[001A] (32) setCameraAt(20);
[001C] (58) beginOverride();
[001D] (18) goto 0165;
[0020] (80) breakHere();
[0021] (0D) walkActorToActor(9,10,8);
[0025] (2E) delay(120);
[0029] (14) print(9,"Edna^\x03I'm having trouble with the Zom-B-Matic.\x03I need to shut down the power.\x03It'll be off for 5 or 6 minutes.");
[0088] (AE) waitForMessage();
[0089] (0D) walkActorToActor(10,9,4);
[008D] (80) breakHere();
[008E] (80) breakHere();
[008F] (80) breakHere();
[0090] (14) print(10,"Is this all you have to say to me?\x03You've been in the basement for\x01the past 5 years!\x03Sometimes I think you like that meteor\x01more than me!");
[0104] (AE) waitForMessage();
[0105] (14) print(9,"Don't worry my little Beauty Queen\x01soon everything will be different.");
[0144] (AE) waitForMessage();
[0145] (36) walkActorToObject(9,103);
[0149] (11) animateActor(10,250);
[014C] (2E) delay(60);
[0150] (14) print(10,"Sure.");
[0158] (2E) delay(120);
[015C] (3B) waitForActor(9);
[015E] (2D) putActorInRoom(9,0);
[0161] (01) putActor(9,0,0);
[0165] (47) clearState08(103);
[0168] (47) clearState08(461);
[016B] (48) if (VAR_OVERRIDE == 1) {
[0171] (72)   loadRoom(0);
[0173] (18) } else {
[0176] (1C)   startSound(9);
[0178] (2E)   delay(60);
[017C] (**) }
[017C] (14) print(255," ");
[0180] (2D) putActorInRoom(9,0);
[0183] (01) putActor(9,0,0);
[0187] (42) startScript(143);
[0189] (C0) endCutscene();
[018A] (A0) stopObjectCode();
END

// Script 143: Dr. Fred Plays Meteor Mess Check
[0000] (2E) delay(14400);
[0004] (4F) if (getState08(157)) {
[0009] (62)   stopScript(0);
[000B] (**) }
[000B] (4F) if (getState08(139)) {
[0010] (62)   stopScript(0);
[0012] (**) }
[0012] (07) setState08(157);
[0015] (42) startScript(55);
[0017] (2E) delay(18000);
[001B] (47) clearState08(157);
[001E] (42) startScript(55);
[0020] (42) startScript(101);
[0022] (A0) stopObjectCode();
END

// Script 144: Ed and Dr. Fred Cutscene Check
[0000] (2E) delay(36000);
[0004] (2E) delay(1800);
[0008] (1A) Var[128] = 1;
[000C] (1A) Var[127] = 38;
[0010] (42) startScript(138);
[0012] (1A) Var[127] = 26;
[0016] (42) startScript(138);
[0018] (03) VAR_RESULT = getActorRoom(11);
[001B] (08) if (VAR_RESULT != 26) {
[0021] (1A)   Var[128] = 0;
[0025] (**) }
[0025] (31) VAR_RESULT = getBitVar(2816,26);
[002A] (08) if (VAR_RESULT != 0) {
[0030] (1A)   Var[128] = 0;
[0034] (**) }
[0034] (48) unless (Var[128] == 1) goto 0004;
[003A] (42) startScript(145);
[003C] (A0) stopObjectCode();
END

// Script 145: Ed and Dr. Fred Cutscene
[0000] (40) cutscene();
[0001] (2D) putActorInRoom(11,26);
[0004] (01) putActor(11,6,66);
[0008] (58) beginOverride();
[0009] (18) goto 01A0;
[000C] (11) animateActor(11,250);
[000F] (47) clearState08(39);
[0012] (0C) loadCostume(9)
[0015] (72) loadRoom(26);
[0017] (32) setCameraAt(21);
[0019] (2E) delay(120);
[001D] (07) setState08(39);
[0020] (1C) startSound(8);
[0022] (2E) delay(60);
[0026] (2D) putActorInRoom(9,26);
[0029] (0E) putActorAtObject(9,39);
[002D] (11) animateActor(9,250);
[0030] (11) animateActor(11,249);
[0033] (80) breakHere();
[0034] (11) animateActor(11,251);
[0037] (80) breakHere();
[0038] (0D) walkActorToActor(9,11,6);
[003C] (14) print(9,"Hey Ed!\x03The meteor wants to borrow\x01your hamster and electric cattle prod.");
[007E] (80) breakHere();
[007F] (3B) waitForActor(9);
[0081] (11) animateActor(9,248);
[0084] (11) animateActor(11,249);
[0087] (AE) waitForMessage();
[0088] (14) print(11,"My hamster!! NOBODY touches my HAMSTER!");
[00AD] (AE) waitForMessage();
[00AE] (14) print(9,"Better watch it, Ed\x01you're going to piss-off the meteor.\x03It already thinks you stole\x01my purple card key.");
[010A] (AE) waitForMessage();
[010B] (14) print(11,"Er^\x03I don't know what you're talking about!");
[0133] (AE) waitForMessage();
[0134] (14) print(9,"I can't get to the meteor without it.");
[0155] (2E) delay(120);
[0159] (36) walkActorToObject(9,39);
[015D] (2E) delay(60);
[0161] (11) animateActor(11,250);
[0164] (AE) waitForMessage();
[0165] (14) print(11,"Oh, really?");
[0172] (3B) waitForActor(9);
[0174] (11) animateActor(9,250);
[0177] (AE) waitForMessage();
[0178] (14) print(9,"Shape up, kid!");
[0187] (AE) waitForMessage();
[0188] (11) animateActor(9,247);
[018B] (3B) waitForActor(9);
[018D] (2D) putActorInRoom(9,0);
[0190] (01) putActor(9,0,0);
[0194] (47) clearState08(39);
[0197] (47) clearState08(462);
[019A] (1C) startSound(9);
[019C] (2E) delay(120);
[01A0] (47) clearState08(39);
[01A3] (47) clearState08(462);
[01A6] (14) print(255," ");
[01AA] (2D) putActorInRoom(9,0);
[01AD] (01) putActor(9,0,0);
[01B1] (C0) endCutscene();
[01B2] (42) startScript(101);
[01B4] (A0) stopObjectCode();
END

// Script 146: Check Kid Position in Dungeon
[0000] (1A) Var[110] = 2;
[0004] (C8) if (Var[109] == Var[47]) {
[0009] (1A)   Var[110] = 0;
[000D] (**) }
[000D] (C8) if (Var[109] == Var[48]) {
[0012] (1A)   Var[110] = 1;
[0016] (**) }
[0016] (5A) Var[110] += 52;
[001A] (A0) stopObjectCode();
END

// Script 147: Enter Outer Lab
[0000] (9A) Var[116] = VAR_EGO;
[0003] (80) breakHere();
[0004] (48) if (Var[115] == 1) {
[000A] (8C)   loadCostume(Var[116])
[000D] (8C)   lockCostume(Var[116])
[0010] (18) } else {
[0013] (0C)   loadCostume(3)
[0016] (0C)   lockCostume(3)
[0019] (**) }
[0019] (72) loadRoom(0);
[001B] (47) clearState08(143);
[001E] (27) setState04(143);
[0021] (0C) loadCostume(9)
[0024] (0C) lockCostume(9)
[0027] (0C) loadCostume(23)
[002A] (0C) lockCostume(23)
[002D] (10) VAR_RESULT = getObjectOwner(60);
[0031] (C8) if (VAR_RESULT == VAR_EGO) {
[0036] (0C)   loadScript(110)
[0039] (0C)   lockScript(110)
[003C] (**) }
[003C] (24) loadRoomWithEgo(169,30,255,255);
[0042] (A0) stopObjectCode();
END

// Script 148: Lab Cutscene 1
[0000] (2E) delay(3600);
[0004] (40) cutscene();
[0005] (58) beginOverride();
[0006] (18) goto 0181;
[0009] (07) setState08(168);
[000C] (2D) putActorInRoom(9,31);
[000F] (01) putActor(9,15,58);
[0013] (2D) putActorInRoom(23,31);
[0016] (01) putActor(23,25,58);
[001A] (11) animateActor(9,249);
[001D] (11) animateActor(23,248);
[0020] (72) loadRoom(31);
[0022] (32) setCameraAt(20);
[0024] (2E) delay(60);
[0028] (14) print(9,"Well, my dear. Hope you're having fun!\x03Within minutes it'll all be over.\x03You'll be hooked up to my machine\x01getting your pretty brains sucked out.");
[00A6] (0D) walkActorToActor(9,23,5);
[00AA] (80) breakHere();
[00AB] (44) unless (VAR_CHARCOUNT > 66) goto 00AA;
[00B1] (11) animateActor(23,250);
[00B4] (11) animateActor(23,12);
[00B7] (AE) waitForMessage();
[00B8] (14) print(23,"You'll never get away with this!\x03Dave and his friends will rescue me!\x03You and your meteor can eat slime!");
[0112] (80) breakHere();
[0113] (44) unless (VAR_CHARCOUNT > 45) goto 0112;
[0119] (11) animateActor(23,248);
[011C] (AE) waitForMessage();
[011D] (43) Var[109] = getActorX(9);
[0120] (5E) walkActorTo(9,Var[109],68);
[0124] (2E) delay(60);
[0128] (14) print(9,"That's what she thinks!");
[013F] (AE) waitForMessage();
[0140] (36) walkActorToObject(9,168);
[0144] (14) print(9,"Heh, heh, heh.");
[0153] (3B) waitForActor(9);
[0155] (2D) putActorInRoom(9,0);
[0158] (01) putActor(9,0,0);
[015C] (47) clearState08(168);
[015F] (1C) startSound(9);
[0161] (36) walkActorToObject(23,166);
[0165] (3B) waitForActor(23);
[0167] (11) animateActor(23,251);
[016A] (14) print(23,"Help, help, HELP!");
[017C] (AE) waitForMessage();
[017D] (2E) delay(60);
[0181] (14) print(255," ");
[0185] (47) clearState08(168);
[0188] (C0) endCutscene();
[0189] (2D) putActorInRoom(23,0);
[018C] (01) putActor(23,0,0);
[0190] (42) startScript(156);
[0192] (A0) stopObjectCode();
END

// Script 149: Open Basement Door
[0000] (0F) if (!getState08(69)) {
[0005] (07)   setState08(69);
[0008] (1C)   startSound(8);
[000A] (**) }
[000A] (9A) Var[139] = VAR_EGO;
[000D] (C3) Var[140] = getActorX(Var[139]);
[0010] (A3) Var[141] = getActorY(Var[139]);
[0013] (80) breakHere();
[0014] (C3) VAR_RESULT = getActorX(Var[139]);
[0017] (C8) if (VAR_RESULT == Var[140]) {
[001C] (A3)   VAR_RESULT = getActorY(Var[139]);
[001F] (C8)   if (VAR_RESULT == Var[141]) {
[0024] (18)     goto 0013;
[0027] (**)   }
[0027] (**) }
[0027] (1C) startSound(9);
[0029] (47) clearState08(69);
[002C] (A0) stopObjectCode();
END

// Script 150: Check Flashlight
[0000] (2E) delay(60);
[0004] (3A) Var[142] -= 1;
[0008] (10) Var[109] = getObjectOwner(84);
[000C] (83) VAR_RESULT = getActorRoom(Var[109]);
[000F] (48) if (VAR_RESULT == 15) {
[0015] (1A)   Var[142] = 0;
[0019] (**) }
[0019] (48) unless (Var[142] == 0) goto 0000;
[001F] (48) if (Var[109] == 15) {
[0025] (62)   stopScript(0);
[0027] (**) }
[0027] (80) breakHere();
[0028] (10) VAR_RESULT = getObjectOwner(84);
[002C] (C8) unless (VAR_RESULT == VAR_EGO) goto 0027;
[0031] (1A) Var[156] = 0;
[0035] (42) startScript(82);
[0037] (1A) Var[50] = 0;
[003B] (2E) delay(120);
[003F] (D8) printEgo("Looks like the batteries went dead.\x03Maybe I can find some others.");
[0078] (A0) stopObjectCode();
END

// Script 151: Ed in the Kitchen
[0000] (1A) Var[90] = 20;
[0004] (1A) Var[91] = 52;
[0008] (2E) delay(300);
[000C] (07) setState08(68);
[000F] (07) setState08(81);
[0012] (2E) delay(60);
[0016] (80) breakHere();
[0017] (48) unless (Var[118] == 0) goto 0016;
[001D] (2D) putActorInRoom(11,7);
[0020] (0E) putActorAtObject(11,81);
[0024] (11) animateActor(11,249);
[0027] (2E) delay(120);
[002B] (62) stopScript(91);
[002D] (80) breakHere();
[002E] (40) cutscene();
[002F] (58) beginOverride();
[0030] (18) goto 00BD;
[0033] (72) loadRoom(7);
[0035] (52) actorFollowCamera(11);
[0037] (36) walkActorToObject(11,89);
[003B] (2E) delay(60);
[003F] (14) print(11,"Tum te tum. Dum de dum.");
[0054] (3B) waitForActor(11);
[0056] (11) animateActor(11,251);
[0059] (80) breakHere();
[005A] (0F) if (!getState08(89)) {
[005F] (07)   setState08(89);
[0062] (1C)   startSound(8);
[0064] (**) }
[0064] (2E) delay(60);
[0068] (4F) if (getState08(90)) {
[006D] (14)   print(11,"Where's the cheese!?");
[0082] (18) } else {
[0085] (07)   setState08(90);
[0088] (14)   print(11,"Oh boy! Cheese for my hamster and me!");
[00A9] (**) }
[00A9] (AE) waitForMessage();
[00AA] (47) clearState08(89);
[00AD] (1C) startSound(9);
[00AF] (36) walkActorToObject(11,81);
[00B3] (80) breakHere();
[00B4] (43) VAR_RESULT = getActorX(11);
[00B7] (78) unless (VAR_RESULT < 25) goto 00B3;
[00BD] (07) setState08(90);
[00C0] (2D) putActorInRoom(11,0);
[00C3] (01) putActor(11,0,0);
[00C7] (47) clearState08(68);
[00CA] (47) clearState08(81);
[00CD] (47) clearState08(89);
[00D0] (C0) endCutscene();
[00D1] (42) startScript(98);
[00D3] (A0) stopObjectCode();
END

// Script 152: Edna in Kitchen Check
[0000] (2E) delay(18000);
[0004] (80) breakHere();
[0005] (68) VAR_RESULT = isScriptRunning(153);
[0008] (48) unless (VAR_RESULT == 0) goto 0004;
[000E] (47) clearState08(89);
[0011] (42) startScript(38);
[0013] (A0) stopObjectCode();
END

// Script 153: Edna in Kitchen
[0000] (80) breakHere();
[0001] (66) VAR_RESULT = getClosestObjActor(10);
[0005] (48) if (VAR_RESULT == 255) {
[000B] (62)   stopScript(0);
[000D] (**) }
[000D] (38) unless (VAR_CAMERA_POS_X >= 47) goto 0000;
[0013] (1A) Var[119] = 0;
[0017] (62) stopScript(152);
[0019] (42) startScript(36);
[001B] (47) clearState08(89);
[001E] (1C) startSound(9);
[0020] (80) breakHere();
[0021] (14) print(10,"Want some food? Come here dearie!");
[0040] (80) breakHere();
[0041] (48) unless (Var[126] == 0) goto 0040;
[0047] (62) stopScript(36);
[0049] (42) startScript(38);
[004B] (A0) stopObjectCode();
END

// Script 154: (does nothing)
[0000] (A0) stopObjectCode();
END

// Script 155: Lab Cutscene 2
[0000] (40) cutscene();
[0001] (58) beginOverride();
[0002] (18) goto 0108;
[0005] (2D) putActorInRoom(9,31);
[0008] (01) putActor(9,50,62);
[000C] (2D) putActorInRoom(23,31);
[000F] (01) putActor(23,30,62);
[0013] (2D) putActorInRoom(13,31);
[0016] (01) putActor(13,40,62);
[001A] (11) animateActor(23,250);
[001D] (72) loadRoom(31);
[001F] (32) setCameraAt(20);
[0021] (2E) delay(60);
[0025] (0D) walkActorToActor(13,23,3);
[0029] (3B) waitForActor(13);
[002B] (11) animateActor(23,248);
[002E] (14) print(23,"Get away from me you purple slime geek.");
[0051] (1E) walkActorTo(23,5,50);
[0055] (80) breakHere();
[0056] (80) breakHere();
[0057] (1E) walkActorTo(13,5,50);
[005B] (3B) waitForActor(23);
[005D] (1E) walkActorTo(23,25,45);
[0061] (14) print(23,"Don't touch me!");
[0071] (3B) waitForActor(13);
[0073] (1E) walkActorTo(13,21,50);
[0077] (3B) waitForActor(23);
[0079] (1E) walkActorTo(9,30,50);
[007D] (3B) waitForActor(9);
[007F] (11) animateActor(9,248);
[0082] (14) print(9,"PURPLE TENTACLE!!\x03Stop playing with the lab experiments.\x03Bring her, the machine is ready.\x03Heh, heh, heh.");
[00E0] (80) breakHere();
[00E1] (44) unless (VAR_CHARCOUNT > 90) goto 00E0;
[00E7] (1E) walkActorTo(9,60,50);
[00EB] (AE) waitForMessage();
[00EC] (11) animateActor(23,250);
[00EF] (14) print(23,"EEEEEEEEEK!!!!");
[0100] (11) animateActor(23,12);
[0103] (AE) waitForMessage();
[0104] (2E) delay(60);
[0108] (14) print(255," ");
[010C] (C0) endCutscene();
[010D] (2D) putActorInRoom(23,0);
[0110] (01) putActor(23,0,0);
[0114] (A0) stopObjectCode();
END

// Script 156: Lab Cutscene 2 Timer
[0000] (2E) delay(162000);
[0004] (42) startScript(155);
[0006] (A0) stopObjectCode();
END

// Script 157: Show Badge to Purple
[0000] (40) cutscene();
[0001] (52) actorFollowCamera(13);
[0003] (62) stopScript(117);
[0005] (62) stopScript(49);
[0007] (62) stopScript(42);
[0009] (58) beginOverride();
[000A] (18) goto 00EA;
[000D] (14) print(13,"You're with the Meteor Police!!\x03Dr. Fred made me do it!\x01He forced me to go along with his plan!");
[005E] (80) breakHere();
[005F] (44) unless (VAR_CHARCOUNT > 40) goto 005E;
[0065] (42) startScript(158);
[0067] (AE) waitForMessage();
[0068] (14) print(13,"It's all his fault, I'm innocent!\x03He's right in there^\x03^get him ^ arrest him ^ kill him.");
[00B4] (AE) waitForMessage();
[00B5] (14) print(13,"He's mad ^ I'll help you.\x03I'm your friend, you can trust me.");
[00E9] (AE) waitForMessage();
[00EA] (62) stopScript(42);
[00EC] (62) stopScript(158);
[00EE] (36) walkActorToObject(13,166);
[00F2] (14) print(13,"AGGGGGGGG!!!!");
[0102] (9B) setBitVar(2952,VAR_EGO,0);
[0107] (3B) waitForActor(13);
[0109] (2D) putActorInRoom(13,0);
[010C] (01) putActor(13,0,0);
[0110] (1A) Var[151] = 1;
[0114] (C0) endCutscene();
[0115] (A0) stopObjectCode();
END

// Script 158: Purple Moves Between Points
[0000] (1E) walkActorTo(13,45,70);
[0004] (3B) waitForActor(13);
[0006] (1E) walkActorTo(13,39,70);
[000A] (3B) waitForActor(13);
[000C] (18) goto 0000;
[000F] (A0) stopObjectCode();
END

// Script 159: Green Walks to Kid
[0000] (4D) walkActorToActor(14,VAR_EGO,3);
[0004] (80) breakHere();
[0005] (80) breakHere();
[0006] (2E) delay(60);
[000A] (83) VAR_RESULT = getActorRoom(VAR_EGO);
[000D] (08) unless (VAR_RESULT != 20) goto 0000;
[0013] (A0) stopObjectCode();
END

// Script 160: Ed Walks Around Lab
[0000] (80) breakHere();
[0001] (3B) waitForActor(11);
[0003] (80) breakHere();
[0004] (34) VAR_RESULT = getDist(11,13);
[000A] (44) unless (VAR_RESULT > 8) goto 0003;
[0010] (1E) walkActorTo(11,47,57);
[0014] (80) breakHere();
[0015] (3B) waitForActor(11);
[0017] (1E) walkActorTo(11,45,66);
[001B] (80) breakHere();
[001C] (3B) waitForActor(11);
[001E] (1E) walkActorTo(11,12,66);
[0022] (A0) stopObjectCode();
END

// Script 161: Green Blocks Passing Kid
[0000] (A3) Var[72] = getActorY(Var[114]);
[0003] (43) Var[109] = getActorX(14);
[0006] (5A) Var[109] += 2;
[000A] (C3) VAR_RESULT = getActorX(Var[114]);
[000D] (84) if (VAR_RESULT <= Var[109]) {
[0012] (1A)   Var[71] = 35;
[0016] (5A)   Var[71] += 3;
[001A] (9B)   setBitVar(2952,Var[114],1);
[001F] (19)   doSentence(STOP);
[0021] (FE)   walkActorTo(Var[114],Var[71],Var[72]);
[0025] (1C)   startSound(36);
[0027] (48)   if (VAR_HAVE_MSG == 0) {
[002D] (D8)     printEgo("Oomph!");
[0035] (**)   }
[0035] (BB)   waitForActor(Var[114]);
[0037] (91)   animateActor(Var[114],244);
[003A] (9B)   setBitVar(2952,Var[114],0);
[003F] (**) }
[003F] (3E) walkActorTo(14,32,Var[72]);
[0043] (80) breakHere();
[0044] (80) breakHere();
[0045] (18) goto 0000;
[0048] (A0) stopObjectCode();
END

// no script 162

// Script 163
[0000] (47) clearState08(546);
[0003] (17) clearState02(541);
[0006] (40) cutscene();
[0007] (72) loadRoom(50);
[0009] (48) if (Var[164] == 0) {
[000F] (05)   drawObject(546,255,255);
[0014] (57)   setState02(541);
[0017] (**) }
[0017] (19) doSentence(253,543,0,1);
[001E] (60) cursorCommand(159, 3);
[0021] (1A) Var[203] = 4;
[0025] (22) Var[212] = saveLoadGame(32);
[0028] (42) startScript(133);
[002A] (58) beginOverride();
[002B] (18) goto 0191;
[002E] (1A) VAR_ACTIVE_OBJECT1 = 0;
[0032] (80) breakHere();
[0033] (A8) unless (VAR_ACTIVE_OBJECT1) goto 0032;
[0037] (1A) Var[203] = 255;
[003B] (14) print(255,"");
[003E] (85) drawObject(VAR_ACTIVE_OBJECT1,255,255);
[0042] (1C) startSound(19);
[0044] (9A) Var[206] = VAR_ACTIVE_OBJECT1;
[0047] (80) breakHere();
[0048] (80) breakHere();
[0049] (48) if (Var[206] == 543) {
[004F] (18) } else {
[0052] (1A)   VAR_ACTIVE_OBJECT1 = 0;
[0056] (1A)   VAR_SENTENCE_OBJECT1 = 0;
[005A] (1A)   VAR_ACTIVE_VERB = 0;
[005E] (1A)   Var[209] = 10;
[0062] (1A)   Var[110] = 0;
[0066] (1A)   Var[109] = 192;
[006A] (DA)   Var[109] += Var[110];
[006D] (A2)   Var[213] = saveLoadGame(Var[109]);
[0070] (48)   if (Var[213] == 6) {
[0076] (9B)     setBitVar(2976,Var[110],1);
[007B] (C6)     Var[209]--;
[007D] (18)   } else {
[0080] (9B)     setBitVar(2976,Var[110],0);
[0085] (**)   }
[0085] (46)   Var[110]++;
[0087] (44)   unless (Var[110] > 9) goto 0066;
[008D] (22)   Var[210] = saveLoadGame(7);
[0090] (C4)   if (Var[210] > Var[209]) {
[0095] (9A)     Var[210] = Var[209];
[0098] (**)   }
[0098] (1A)   Var[213] = 0;
[009C] (1A)   Var[109] = 0;
[00A0] (B1)   VAR_RESULT = getBitVar(2976,Var[109]);
[00A5] (A8)   if (VAR_RESULT) {
[00A9] (19)     doSentence(253,546,0,1);
[00B0] (46)     Var[213]++;
[00B2] (**)   }
[00B2] (46)   Var[109]++;
[00B4] (44)   unless (Var[109] > 9) goto 00A0;
[00BA] (48)   if (Var[206] == 541) {
[00C0] (A8)     if (Var[210]) {
[00C4] (9A)       Var[110] = Var[210];
[00C7] (1A)       Var[109] = 0;
[00CB] (B1)       VAR_RESULT = getBitVar(2976,Var[109]);
[00D0] (28)       if (!VAR_RESULT) {
[00D4] (19)         doSentence(253,545,0,1);
[00DB] (C6)         Var[110]--;
[00DD] (28)         if (!Var[110]) {
[00E1] (18)           goto 00EC;
[00E4] (**)         }
[00E4] (**)       }
[00E4] (46)       Var[109]++;
[00E6] (44)       unless (Var[109] > 9) goto 00CB;
[00EC] (**)     }
[00EC] (**)   }
[00EC] (48)   if (Var[206] == 542) {
[00F2] (28)     if (!Var[213]) {
[00F6] (1A)       Var[203] = 8;
[00FA] (19)       doSentence(253,544,0,1);
[0101] (18)       goto 002E;
[0104] (**)     }
[0104] (**)   }
[0104] (60)   cursorCommand(0, 0);
[0107] (80)   breakHere();
[0108] (A8)   if (VAR_ACTIVE_OBJECT1) {
[010C] (19)     doSentence(253,544,0,1);
[0113] (19)     doSentence(253,543,0,1);
[011A] (18)     goto 0037;
[011D] (**)   }
[011D] (38)   unless (VAR_ACTIVE_VERB >= 35) goto 0107;
[0123] (9A)   Var[208] = VAR_ACTIVE_VERB;
[0126] (3A)   Var[208] -= 35;
[012A] (1C)   startSound(19);
[012C] (46)   Var[204]++;
[012E] (80)   breakHere();
[012F] (80)   breakHere();
[0130] (48)   if (Var[206] == 541) {
[0136] (19)     doSentence(253,543,0,1);
[013D] (9A)     Var[109] = Var[208];
[0140] (5A)     Var[109] += 128;
[0144] (A2)     Var[203] = saveLoadGame(Var[109]);
[0147] (48)     if (Var[203] == 0) {
[014D] (B1)       VAR_RESULT = getBitVar(2976,Var[208]);
[0152] (28)       if (!VAR_RESULT) {
[0156] (C6)         Var[210]--;
[0158] (9B)         setBitVar(2976,Var[208],1);
[015D] (**)       }
[015D] (**)     }
[015D] (48)     if (Var[203] == 3) {
[0163] (18)       goto 0191;
[0166] (**)     }
[0166] (**)   }
[0166] (48)   if (Var[206] == 542) {
[016C] (62)     stopScript(133);
[016E] (5A)     Var[208] += 64;
[0172] (A2)     Var[203] = saveLoadGame(Var[208]);
[0175] (48)     if (Var[203] == 3) {
[017B] (18)       goto 0191;
[017E] (**)     }
[017E] (42)     startScript(133);
[0180] (**)   }
[0180] (19)   doSentence(253,544,0,1);
[0187] (19)   doSentence(253,543,0,1);
[018E] (18)   goto 002E;
[0191] (**) }
[0191] (62) stopScript(133);
[0193] (48) if (Var[164] == 0) {
[0199] (98)   restart();
[019A] (**) }
[019A] (C0) endCutscene();
[019B] (A0) stopObjectCode();
END

// Script 164: Set up verbs
[0000] (1A) Var[111] = 0;
[0004] (FA) VerbOps(Delete(Var[111]););
[0007] (46) Var[111]++;
[0009] (44) unless (Var[111] > 14) goto 0004;
[000F] (7A) VerbOps(New-9(0,19,0,0,"Push@@@"));
[001D] (7A) VerbOps(New-10(0,20,5,0,"Pull@@@"));
[002B] (7A) VerbOps(New-3(0,21,10,4,"Give@@@"));
[0039] (7A) VerbOps(New-1(7,19,1,0,"Open@@@@"));
[0048] (7A) VerbOps(New-2(7,20,6,0,"Close@@@"));
[0057] (7A) VerbOps(New-12(7,21,11,0,"Read@@@@"));
[0066] (7A) VerbOps(New-13(15,19,2,0,"Walk to@@"));
[0076] (7A) VerbOps(New-14(15,20,7,0,"Pick up@@"));
[0086] (7A) VerbOps(New-15(15,21,12,0,"What is@@"));
[0096] (7A) VerbOps(New-8(24,19,3,2,"Unlock@@"));
[00A5] (28) if (!Var[175]) {
[00A9] (7A)   VerbOps(New-7(24,20,8,0,"New kid@"));
[00B8] (**) }
[00B8] (7A) VerbOps(New-11(24,21,13,255,"Use@@@@@"));
[00C7] (7A) VerbOps(New-4(32,19,4,0,"Turn on@"));
[00D6] (7A) VerbOps(New-5(32,20,9,0,"Turn off"));
[00E5] (7A) VerbOps(New-6(32,21,14,2,"Fix@@@@@"));
[00F4] (19) doSentence(RESET);
[00F6] (60) cursorCommand(247, 1);
[00F9] (A0) stopObjectCode();
END

// Script 165: Set up Kids
[0000] (1A) Var[111] = 0;
[0004] (FA) VerbOps(Delete(Var[111]););
[0007] (46) Var[111]++;
[0009] (44) unless (Var[111] > 14) goto 0004;
[000F] (7A) VerbOps(New-20(0,20,0,0,"        Dave "));
[0023] (48) if (Var[48] == 1) {
[0029] (7A)   VerbOps(New-21(13,20,1,0,"     Syd     "));
[003D] (**) }
[003D] (48) if (Var[49] == 1) {
[0043] (7A)   VerbOps(New-22(26,20,2,0,"Syd          "));
[0057] (**) }
[0057] (48) if (Var[48] == 4) {
[005D] (7A)   VerbOps(New-21(13,20,1,0,"   Michael   "));
[0071] (**) }
[0071] (48) if (Var[49] == 4) {
[0077] (7A)   VerbOps(New-22(26,20,2,0,"Michael      "));
[008B] (**) }
[008B] (48) if (Var[48] == 6) {
[0091] (7A)   VerbOps(New-21(13,20,1,0,"    Wendy    "));
[00A5] (**) }
[00A5] (48) if (Var[49] == 6) {
[00AB] (7A)   VerbOps(New-22(26,20,2,0,"Wendy        "));
[00BF] (**) }
[00BF] (48) if (Var[48] == 5) {
[00C5] (7A)   VerbOps(New-21(13,20,1,0,"   Bernard   "));
[00D9] (**) }
[00D9] (48) if (Var[49] == 5) {
[00DF] (7A)   VerbOps(New-22(26,20,2,0,"Bernard      "));
[00F3] (**) }
[00F3] (48) if (Var[48] == 2) {
[00F9] (7A)   VerbOps(New-21(13,20,1,0,"    Razor    "));
[010D] (**) }
[010D] (48) if (Var[49] == 2) {
[0113] (7A)   VerbOps(New-22(26,20,2,0,"Razor        "));
[0127] (**) }
[0127] (48) if (Var[48] == 7) {
[012D] (7A)   VerbOps(New-21(13,20,1,0,"     Jeff    "));
[0141] (**) }
[0141] (48) if (Var[49] == 7) {
[0147] (7A)   VerbOps(New-22(26,20,2,0,"Jeff         "));
[015B] (**) }
[015B] (60) cursorCommand(247, 1);
[015E] (A0) stopObjectCode();
END

//Script 166: Bernard Tries to Crack Alarm System
[0000] (48) if (VAR_EGO == 5) {
[0006] (9E)   walkActorTo(VAR_EGO,40,60);
[000A] (D8)   printEgo("Oh Yeah, Nuke'm Alarms.  I read about\x01them in Geek Weekly.");
[003D] (AE)   waitForMessage();
[003E] (D8)   printEgo("This system should be easy to crack!\x03Here, let me give it a try.");
[0074] (BB)   waitForActor(VAR_EGO);
[0076] (B6)   walkActorToObject(VAR_EGO,500);
[007A] (BB)   waitForActor(VAR_EGO);
[007C] (B4)   VAR_RESULT = getDist(VAR_EGO,500);
[0081] (44)   if (VAR_RESULT > 1) {
[0087] (D8)     printEgo("Awww...I could have cracked it!");
[00A4] (9E)     walkActorTo(VAR_EGO,40,60);
[00A8] (62)     stopScript(0);
[00AA] (**)   }
[00AA] (1C)   startSound(54);
[00AC] (2E)   delay(30);
[00B0] (48)   unless (VAR_HAVE_MSG == 0) goto 007C;
[00B6] (42)   startScript(62);
[00B8] (**) }
[00B8] (A0) stopObjectCode();
END

// Script 167
[0000] (3C) stopSound(32);
[0002] (3C) stopSound(33);
[0004] (16) Var[191] = getRandomNr(9);
[0007] (48) if (Var[191] == 0) {
[000D] (46)   Var[191]++;
[000F] (**) }
[000F] (16) Var[190] = getRandomNr(37);
[0012] (48) if (Var[190] == 0) {
[0018] (46)   Var[190]++;
[001A] (**) }
[001A] (16) Var[197] = getRandomNr(7);
[001D] (48) if (Var[197] == 0) {
[0023] (46)   Var[197]++;
[0025] (**) }
[0025] (9A) Var[111] = Var[191];
[0028] (9A) Var[109] = Var[197];
[002B] (5A) Var[111] += 19;
[002F] (3A) Var[109] -= 1;
[0033] (48) unless (Var[109] == 0) goto 002B;
[0039] (DA) Var[111] += Var[190];
[003C] (DA) Var[111] += Var[190];
[003F] (38) if (Var[191] >= 3) {
[0045] (3A)   Var[111] -= 2;
[0049] (**) }
[0049] (DA) Var[111] += Var[190];
[004C] (78) if (Var[190] < 5) {
[0052] (5A)   Var[111] += 3;
[0056] (**) }
[0056] (5A) Var[111] += 12;
[005A] (3A) Var[111] -= 9;
[005E] (78) unless (Var[111] < 12) goto 005A;
[0064] (9A) Var[65] = Var[111];
[0067] (DA) Var[111] += Var[191];
[006A] (DA) Var[111] += Var[190];
[006D] (5A) Var[111] += 19;
[0071] (44) if (Var[190] > 7) {
[0077] (3A)   Var[111] -= 3;
[007B] (**) }
[007B] (5A) Var[111] += 7;
[007F] (3A) Var[111] -= 7;
[0083] (78) unless (Var[111] < 8) goto 007F;
[0089] (5A) Var[111] += 19;
[008D] (84) if (Var[111] <= Var[65]) {
[0092] (DA)   Var[111] += Var[65];
[0095] (**) }
[0095] (3A) Var[111] -= 12;
[0099] (04) unless (Var[111] <= 11) goto 0095;
[009F] (9A) Var[66] = Var[111];
[00A2] (DA) Var[111] += Var[191];
[00A5] (DA) Var[111] += Var[191];
[00A8] (DA) Var[111] += Var[190];
[00AB] (5A) Var[111] += 14;
[00AF] (78) if (Var[190] < 10) {
[00B5] (DA)   Var[111] += Var[190];
[00B8] (**) }
[00B8] (3A) Var[111] -= 5;
[00BC] (78) unless (Var[111] < 10) goto 00B8;
[00C2] (88) if (Var[111] != Var[66]) {
[00C7] (DA)   Var[111] += Var[65];
[00CA] (**) }
[00CA] (5A) Var[111] += 23;
[00CE] (3A) Var[111] -= 12;
[00D2] (78) unless (Var[111] < 12) goto 00CE;
[00D8] (9A) Var[64] = Var[111];
[00DB] (DA) Var[111] += Var[191];
[00DE] (DA) Var[111] += Var[191];
[00E1] (DA) Var[111] += Var[191];
[00E4] (DA) Var[111] += Var[190];
[00E7] (5A) Var[111] += 13;
[00EB] (44) if (Var[191] > 7) {
[00F1] (5A)   Var[111] += 6;
[00F5] (**) }
[00F5] (3A) Var[111] -= 8;
[00F9] (78) unless (Var[111] < 17) goto 00F5;
[00FF] (C4) if (Var[111] > Var[64]) {
[0104] (DA)   Var[111] += Var[66];
[0107] (**) }
[0107] (5A) Var[111] += 14;
[010B] (3A) Var[111] -= 12;
[010F] (04) unless (Var[111] <= 11) goto 010B;
[0115] (9A) Var[63] = Var[111];
[0118] (1A) Var[128] = 1;
[011C] (42) startScript(44);
[011E] (80) breakHere();
[011F] (48) unless (Var[69] == 0) goto 011E;
[0125] (A8) if (Var[67]) {
[0129] (2E)   delay(60);
[012D] (1C)   startSound(33);
[012F] (2E)   delay(2700);
[0133] (42)   startScript(62);
[0135] (18) } else {
[0138] (2E)   delay(120);
[013C] (07)   setState08(182);
[013F] (07)   setState08(193);
[0142] (1C)   startSound(13);
[0144] (1A)   Var[192] = 0;
[0148] (**) }
[0148] (A0) stopObjectCode();
END

// no script 168

// Script 169
[0000] (1E) walkActorTo(9,30,63);
[0004] (80) breakHere();
[0005] (3B) waitForActor(9);
[0007] (11) animateActor(9,250);
[000A] (80) breakHere();
[000B] (1E) walkActorTo(9,10,63);
[000F] (80) breakHere();
[0010] (3B) waitForActor(9);
[0012] (11) animateActor(9,251);
[0015] (80) breakHere();
[0016] (18) goto 0000;
[0019] (A0) stopObjectCode();
END

// Script 170: Demo Lab
[0000] (0C) loadSound(63)
[0003] (0C) lockSound(63)
[0006] (0C) loadScript(169)
[0009] (2E) delay(120);
[000D] (2D) putActorInRoom(9,31);
[0010] (01) putActor(9,20,63);
[0014] (2D) putActorInRoom(10,31);
[0017] (01) putActor(10,4,68);
[001B] (2D) putActorInRoom(11,31);
[001E] (01) putActor(11,34,50);
[0022] (2D) putActorInRoom(13,31);
[0025] (01) putActor(13,45,63);
[0029] (0C) lockCostume(13)
[002C] (11) animateActor(10,249);
[002F] (11) animateActor(11,251);
[0032] (72) loadRoom(31);
[0034] (32) setCameraAt(20);
[0036] (42) startScript(169);
[0038] (2E) delay(180);
[003C] (14) print(10,"How long do we have to stay down here?");
[005D] (AE) waitForMessage();
[005E] (2E) delay(60);
[0062] (62) stopScript(169);
[0064] (1E) walkActorTo(9,15,63);
[0068] (3B) waitForActor(9);
[006A] (80) breakHere();
[006B] (11) animateActor(9,250);
[006E] (2E) delay(120);
[0072] (11) animateActor(9,248);
[0075] (14) print(9,"Shh... I think I hear something!");
[0093] (AE) waitForMessage();
[0094] (11) animateActor(11,248);
[0097] (14) print(11,"I miss my hamster.");
[00A9] (AE) waitForMessage();
[00AA] (0D) walkActorToActor(9,11,5);
[00AE] (80) breakHere();
[00AF] (80) breakHere();
[00B0] (11) animateActor(9,255);
[00B3] (80) breakHere();
[00B4] (11) animateActor(9,249);
[00B7] (14) print(9,"Quiet! I think I hear someone upstairs!");
[00DB] (AE) waitForMessage();
[00DC] (0D) walkActorToActor(10,11,4);
[00E0] (14) print(10,"Oh great! Who forgot to lock the door?");
[0102] (AE) waitForMessage();
[0103] (11) animateActor(11,251);
[0106] (2E) delay(60);
[010A] (0D) walkActorToActor(9,13,5);
[010E] (14) print(9,"PURPLE TENTACLE!");
[0120] (80) breakHere();
[0121] (80) breakHere();
[0122] (11) animateActor(9,255);
[0125] (AE) waitForMessage();
[0126] (0D) walkActorToActor(13,9,4);
[012A] (3B) waitForActor(13);
[012C] (14) print(13,"Yes sir, Dr. Fred SIR!");
[0141] (AE) waitForMessage();
[0142] (14) print(9,"Go upstairs and check it out!");
[015D] (AE) waitForMessage();
[015E] (14) print(13,"Yes sir!");
[0168] (42) startScript(169);
[016A] (36) walkActorToObject(13,166);
[016E] (3B) waitForActor(13);
[0170] (07) setState08(166);
[0173] (1C) startSound(8);
[0175] (2E) delay(60);
[0179] (2D) putActorInRoom(13,0);
[017C] (01) putActor(13,0,0);
[0180] (47) clearState08(166);
[0183] (1C) startSound(9);
[0185] (1E) walkActorTo(11,34,70);
[0189] (52) actorFollowCamera(11);
[018B] (2E) delay(60);
[018F] (11) animateActor(10,250);
[0192] (3B) waitForActor(11);
[0194] (14) print(11,"I really DO miss my hamster!");
[01AE] (AE) waitForMessage();
[01AF] (2E) delay(60);
[01B3] (72) loadRoom(0);
[01B5] (62) stopScript(169);
[01B7] (A0) stopObjectCode();
END

// Script 171
[0000] (1A) Var[111] = 4;
[0004] (1A) Var[71] = 17;
[0008] (5E) walkActorTo(23,Var[71],50);
[000C] (3B) waitForActor(23);
[000E] (11) animateActor(23,251);
[0011] (5A) Var[71] += 5;
[0015] (3A) Var[111] -= 1;
[0019] (2E) delay(240);
[001D] (48) unless (Var[111] == 0) goto 0008;
[0023] (A0) stopObjectCode();
END

// Script 172
[0000] (80) breakHere();
[0001] (80) breakHere();
[0002] (0D) walkActorToActor(13,23,2);
[0006] (18) goto 0000;
[0009] (A0) stopObjectCode();
END

// Script 173: Demo Blurbs
[0000] (2E) delay(300);
[0004] (7A) VerbOps(New-3(0,20,2,0,"`Game of the Year`"));
[001D] (7A) VerbOps(New-3(0,21,3,0,"       - Analog Science Fiction Magazine"));
[004C] (7A) VerbOps(New-3(0,22,4,0," "));
[0054] (60) cursorCommand(132, 0);
[0057] (2E) delay(360);
[005B] (7A) VerbOps(New-3(0,20,2,0,"`Most innovative game of 1987`"));
[0080] (7A) VerbOps(New-3(0,21,3,0,"                  - Computer Entertainer"));
[00AF] (7A) VerbOps(New-3(0,22,4,0," "));
[00B7] (60) cursorCommand(132, 0);
[00BA] (2E) delay(300);
[00BE] (7A) VerbOps(New-3(0,20,2,0,"`Best of 1987 Award`"));
[00D9] (7A) VerbOps(New-3(0,21,3,0,"                    - Commodore Magazine"));
[0108] (60) cursorCommand(132, 0);
[010B] (2E) delay(240);
[010F] (7A) VerbOps(New-3(0,20,2,0,"`Game of the Year`"));
[0128] (7A) VerbOps(New-3(0,21,3,0," - Isaac Asimov Science Fiction Magazine"));
[0157] (7A) VerbOps(New-3(0,22,4,0," "));
[015F] (60) cursorCommand(132, 0);
[0162] (2E) delay(240);
[0166] (7A) VerbOps(New-3(0,20,2,0,"`Best game idea of 1987`"));
[0185] (7A) VerbOps(New-3(0,21,3,0,"                        - Happy Computer"));
[01B4] (60) cursorCommand(132, 0);
[01B7] (2E) delay(240);
[01BB] (7A) VerbOps(New-3(0,20,2,0,"`Plenty of laughter among the chills^"));
[01E7] (7A) VerbOps(New-3(0,21,3,0,"the animation and graphics are superb^"));
[0214] (7A) VerbOps(New-3(0,22,4,0,"the detail is exceptional.`"));
[0236] (7A) VerbOps(New-3(0,23,5,0,"                    - COMPUTE!'s Gazette"));
[0265] (60) cursorCommand(132, 0);
[0268] (2E) delay(480);
[026C] (7A) VerbOps(New-3(0,20,2,0," "));
[0274] (7A) VerbOps(New-3(0,21,3,0,"`As funny as it is fun.`"));
[0293] (7A) VerbOps(New-3(0,22,4,0,"                           - A+ Magazine"));
[02C2] (7A) VerbOps(New-3(0,23,5,0," "));
[02CA] (60) cursorCommand(132, 0);
[02CD] (2E) delay(180);
[02D1] (7A) VerbOps(New-3(0,20,2,0,"`There are ingenious puzzles to be"));
[02FA] (7A) VerbOps(New-3(0,21,3,0,"solved as you explore the mansion"));
[0322] (7A) VerbOps(New-3(0,22,4,0,"and meet its inhabitants.`"));
[0343] (7A) VerbOps(New-3(0,23,5,0,"                    - The New York Times"));
[0372] (60) cursorCommand(132, 0);
[0375] (2E) delay(480);
[0379] (7A) VerbOps(New-3(0,20,2,0,"`Diabolically fun^wildly entertaining^"));
[03A6] (7A) VerbOps(New-3(0,21,3,0,"a cross between 'The Rocky Horror"));
[03CE] (7A) VerbOps(New-3(0,22,4,0,"Picture Show' and 'The Addams Family'.`"));
[03FC] (7A) VerbOps(New-3(0,23,5,0,"                - Columbia Daily Tribune"));
[042B] (60) cursorCommand(132, 0);
[042E] (2E) delay(480);
[0432] (A0) stopObjectCode();
END

// Script 174
[0000] (E6) Var[201] = getClosestObjActor(Var[200]);
[0003] (48) if (Var[201] == 255) {
[0009] (83)   Var[199] = getActorRoom(Var[200]);
[000C] (08)   if (Var[199] != 0) {
[0012] (1A)     Var[198] = 1;
[0016] (83)     VAR_RESULT = getActorRoom(Var[198]);
[0019] (C8)     if (VAR_RESULT == Var[199]) {
[001E] (9A)       Var[200] = Var[198];
[0021] (62)       stopScript(0);
[0023] (**)     }
[0023] (46)     Var[198]++;
[0025] (44)     unless (Var[198] > 7) goto 0016;
[002B] (**)   }
[002B] (**) }
[002B] (9A) Var[200] = Var[201];
[002E] (A0) stopObjectCode();
END

// Script 175: Demo Intro
[0000] (40) cutscene();
[0001] (58) beginOverride();
[0002] (18) goto 00A3;
[0005] (0C) loadCostume(22)
[0008] (0C) lockCostume(22)
[000B] (0C) loadRoom(49)
[000E] (0C) lockRoom(49)
[0011] (0C) loadScript(135)
[0014] (0C) lockScript(135)
[0017] (0C) loadSound(57)
[001A] (72) loadRoom(33);
[001C] (32) setCameraAt(60);
[001E] (2E) delay(120);
[0022] (14) print(255,"Twenty years ago today...");
[003B] (2E) delay(180);
[003F] (42) startScript(135);
[0041] (80) breakHere();
[0042] (68) VAR_RESULT = isScriptRunning(135);
[0045] (48) unless (VAR_RESULT == 0) goto 0041;
[004B] (2E) delay(60);
[004F] (02) startMusic(58);
[0051] (05) drawObject(44,255,255);
[0056] (2E) delay(30);
[005A] (05) drawObject(43,255,255);
[005F] (2E) delay(30);
[0063] (05) drawObject(42,255,255);
[0068] (2E) delay(30);
[006C] (05) drawObject(41,255,255);
[0071] (2E) delay(30);
[0075] (05) drawObject(40,255,255);
[007A] (2E) delay(180);
[007E] (2E) delay(240);
[0082] (2E) delay(240);
[0086] (2E) delay(240);
[008A] (2E) delay(240);
[008E] (2E) delay(240);
[0092] (2E) delay(240);
[0096] (72) loadRoom(49);
[0098] (32) setCameraAt(20);
[009A] (12) panCameraTo(220);
[009C] (80) breakHere();
[009D] (48) unless (VAR_CAMERA_POS_X == 180) goto 009C;
[00A3] (62) stopScript(135);
[00A5] (0C) unlockRoom(49)
[00A8] (0C) unlockCostume(22)
[00AB] (0C) unlockScript(135)
[00AE] (C0) endCutscene();
[00AF] (A0) stopObjectCode();
END

// no script 176

// Script 177
[0000] (16) Var[213] = getRandomNr(60);
[0003] (5A) Var[213] += 30;
[0007] (2B) delayVariable(Var[213]);
[0009] (16) Var[213] = getRandomNr(6);
[000C] (48) if (Var[213] == 0) {
[0012] (07)   setState08(547);
[0015] (2E)   delay(30);
[0019] (47)   clearState08(547);
[001C] (48) } else if (Var[213] == 1) {
[0025] (07)   setState08(552);
[0028] (2E)   delay(30);
[002C] (47)   clearState08(552);
[002F] (48) } else if (Var[213] == 2) {
[0038] (07)   setState08(548);
[003B] (2E)   delay(30);
[003F] (47)   clearState08(548);
[0042] (48) } else if (Var[213] == 3) {
[004B] (07)   setState08(551);
[004E] (2E)   delay(30);
[0052] (47)   clearState08(551);
[0055] (48) } else if (Var[213] == 4) {
[005E] (07)   setState08(549);
[0061] (2E)   delay(30);
[0065] (47)   clearState08(549);
[0068] (48) } else if (Var[213] == 5) {
[0071] (07)   setState08(553);
[0074] (2E)   delay(30);
[0078] (47)   clearState08(553);
[007B] (48) } else if (Var[213] == 6) {
[0084] (07)   setState08(550);
[0087] (2E)   delay(30);
[008B] (47)   clearState08(550);
[008E] (18)   /* goto 0091; */
[0091] (**) }
[0091] (48) unless (Var[213] == 255) goto 0000;
[0097] (A0) stopObjectCode();
END
