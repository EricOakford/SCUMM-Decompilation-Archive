/**
 * Maniac Mansion: V1 Demo
 * 
 * Global Scripts
 */

// Script 0: Game initialization
[0000] (1A) VAR_NUM_ACTOR = 25;
[0004] (1A) VAR_BACKUP_VERB = 13;
[0008] (1A) VAR_EGO = 3;					// Dave is initial ego
[000C] (1A) VAR_TIMER_NEXT = 4;
[0010] (1A) VAR_CUTSCENEEXIT_KEY = 4;
[0014] (13) ActorOps(0,[TalkColor(14)]);
[0018] (40) cutscene();						// Set up the actors
[0019] (53) ActorOps(1,[Name("Syd")]);
[0021] (13) ActorOps(1,[Sound(6)]);
[0025] (53) ActorOps(2,[Name("Razor")]);
[002F] (13) ActorOps(2,[Sound(6)]);
[0033] (53) ActorOps(3,[Name("Dave")]);
[003C] (13) ActorOps(3,[Sound(6)]);
[0040] (53) ActorOps(4,[Name("Michael")]);
[004C] (13) ActorOps(4,[Sound(6)]);
[0050] (53) ActorOps(5,[Name("Bernard")]);
[005C] (13) ActorOps(5,[Sound(6)]);
[0060] (53) ActorOps(6,[Name("Wendy")]);
[006A] (13) ActorOps(6,[Sound(6)]);
[006E] (53) ActorOps(7,[Name("Jeff")]);
[0077] (13) ActorOps(7,[Sound(0)]);
[007B] (53) ActorOps(8,[Name()]);
[0080] (13) ActorOps(8,[Sound(6)]);
[0084] (53) ActorOps(23,[Name("Sandy")]);
[008E] (13) ActorOps(23,[Sound(6)]);
[0092] (53) ActorOps(9,[Name("Dr Fred")]);
[009E] (13) ActorOps(9,[Sound(6)]);
[00A2] (53) ActorOps(10,[Name("Nurse Edna")]);
[00B1] (13) ActorOps(10,[Sound(6)]);
[00B5] (53) ActorOps(11,[Name("Weird Ed")]);
[00C2] (13) ActorOps(11,[Sound(6)]);
[00C6] (53) ActorOps(12,[Name("Dead Cousin Ted")]);
[00DA] (13) ActorOps(12,[Sound(6)]);
[00DE] (53) ActorOps(13,[Name("Purple Tentacle")]);
[00F2] (13) ActorOps(13,[Sound(63)]);
[00F6] (53) ActorOps(14,[Name("Green Tentacle")]);
[0109] (13) ActorOps(14,[Sound(63)]);
[010D] (53) ActorOps(15,[Name()]);
[0112] (13) ActorOps(15,[Sound(6)]);
[0116] (53) ActorOps(16,[Name("Meteor")]);
[0121] (13) ActorOps(16,[Sound(6)]);
[0125] (53) ActorOps(17,[Name()]);
[012A] (13) ActorOps(17,[Sound(6)]);
[012E] (53) ActorOps(18,[Name()]);
[0133] (13) ActorOps(18,[Sound(0)]);
[0137] (53) ActorOps(19,[Name("Plant")]);
[0141] (13) ActorOps(19,[Sound(0)]);
[0145] (53) ActorOps(20,[Name()]);
[014A] (13) ActorOps(20,[Sound(0)]);
[014E] (53) ActorOps(21,[Name()]);
[0153] (13) ActorOps(21,[Sound(0)]);
[0157] (53) ActorOps(22,[Name()]);
[015C] (13) ActorOps(22,[Sound(0)]);
[0160] (60) cursorCommand(31, 3);
[0163] (0C) loadSound(58)
[0166] (0C) lockSound(58)
[0169] (0C) loadScript(2)
[016C] (0C) lockScript(2)
[016F] (0C) loadScript(4)
[0172] (0C) lockScript(4)
[0175] (0C) loadScript(164)			// set up the verbs
[0178] (0C) lockScript(164)
[017B] (0C) loadSound(6)
[017E] (0C) lockSound(6)
[0181] (0C) loadSound(8)
[0184] (0C) loadSound(9)
[0187] (0C) loadSound(38)
[018A] (0C) loadRoom(44)
[018D] (0C) loadScript(131)
[0190] (0C) loadScript(57)
[0193] (42) startScript(168);
[0195] (1A) Var[47] = 3;
[0199] (72) loadRoom(45);			// go to the kid selection screen
[019B] (1A) Var[110] = 0;
[019F] (1A) Var[111] = 1;
[01A3] (2E) delay(60);
[01A7] (14) print(255,"   Copyright 1987, 1988 Lucasfilm Ltd. \x01           All rights reserved.        ");
[01E7] (58) beginOverride();
[01E8] (18) goto 024E;
[01EB] (16) Var[67] = getRandomNr(1);
[01EE] (48) if (VAR_HAVE_MSG == 0) {
[01F4] (2E)   delay(120);
[01F8] (48)   if (VAR_HAVE_MSG == 0) {
[01FE] (48)     if (Var[111] == 1) {
[0204] (14)       print(255,"      Please select two other kids.");
[0223] (**)     }
[0223] (48)     if (Var[111] == 2) {
[0229] (14)       print(255,"      Please select one other kid.");
[0247] (**)     }
[0247] (**)   }
[0247] (**) }
[0247] (80) breakHere();
[0248] (48) unless (Var[110] == 1) goto 01EB;
[024E] (78) if (Var[111] < 3) {
[0254] (19)   doSentence(9,403,0,0);
[025B] (18)   goto 01A3;
[025E] (**) }
[025E] (C0) endCutscene();
[025F] (72) loadRoom(0);
[0261] (8C) loadCostume(Var[47])
[0264] (8C) loadCostume(Var[48])
[0267] (8C) loadCostume(Var[49])
[026A] (60) cursorCommand(15, 2);
[026D] (48) if (Var[110] == 1) {
[0273] (42)   startScript(120);
[0275] (80)   breakHere();
[0276] (68)   VAR_RESULT = isScriptRunning(120);
[0279] (48)   unless (VAR_RESULT == 0) goto 0275;
[027F] (**) }
[027F] (0C) unlockSound(58)
[0282] (AD) putActorInRoom(Var[47],44);
[0285] (81) putActor(Var[47],24,59);
[0289] (AD) putActorInRoom(Var[48],44);
[028C] (81) putActor(Var[48],29,57);
[0290] (AD) putActorInRoom(Var[49],44);
[0293] (81) putActor(Var[49],34,61);
[0297] (2D) putActorInRoom(12,24);
[029A] (01) putActor(12,30,48);
[029E] (2D) putActorInRoom(11,26);
[02A1] (01) putActor(11,10,52);
[02A5] (1A) Var[164] = 1;
[02A9] (1A) VAR_ACTOR_RANGE_MIN = 1;
[02AD] (1A) VAR_ACTOR_RANGE_MAX = 8;
[02B1] (1B) setBitVar(2872,44,1);
[02B6] (1B) setBitVar(2872,1,1);
[02BB] (1B) setBitVar(2872,4,1);
[02C0] (1B) setBitVar(2872,6,1);
[02C5] (1B) setBitVar(2872,2,1);
[02CA] (1B) setBitVar(2872,16,1);
[02CF] (1B) setBitVar(2872,30,1);
[02D4] (1B) setBitVar(2872,31,1);
[02D9] (1B) setBitVar(2872,51,1);
[02DE] (1B) setBitVar(2816,8,1);
[02E3] (1B) setBitVar(2816,5,1);
[02E8] (1B) setBitVar(2816,9,1);
[02ED] (1B) setBitVar(2816,15,1);
[02F2] (1B) setBitVar(2816,22,1);
[02F7] (1B) setBitVar(2816,23,1);
[02FC] (16) Var[111] = getRandomNr(4);
[02FF] (48) if (Var[111] == 0) {
[0305] (26)   setVarRange(Var[51],4,[5,2,3,5]);
[030C] (**) }
[030C] (48) if (Var[111] == 1) {
[0312] (26)   setVarRange(Var[51],4,[1,5,4,7]);
[0319] (07)   setState08(119);
[031C] (**) }
[031C] (48) if (Var[111] == 2) {
[0322] (26)   setVarRange(Var[51],4,[2,2,7,5]);
[0329] (07)   setState08(120);
[032C] (**) }
[032C] (48) if (Var[111] == 3) {
[0332] (26)   setVarRange(Var[51],4,[3,4,4,4]);
[0339] (07)   setState08(121);
[033C] (**) }
[033C] (48) if (Var[111] == 4) {
[0342] (26)   setVarRange(Var[51],4,[7,5,3,7]);
[0349] (07)   setState08(122);
[034C] (**) }
[034C] (16) Var[111] = getRandomNr(4);
[034F] (48) if (Var[111] == 0) {
[0355] (26)   setVarRange(Var[55],4,[3,6,2,1]);
[035C] (**) }
[035C] (48) if (Var[111] == 1) {
[0362] (26)   setVarRange(Var[55],4,[0,1,2,0]);
[0369] (07)   setState08(173);
[036C] (**) }
[036C] (48) if (Var[111] == 2) {
[0372] (26)   setVarRange(Var[55],4,[1,2,3,0]);
[0379] (07)   setState08(174);
[037C] (**) }
[037C] (48) if (Var[111] == 3) {
[0382] (26)   setVarRange(Var[55],4,[1,0,2,9]);
[0389] (07)   setState08(175);
[038C] (**) }
[038C] (48) if (Var[111] == 4) {
[0392] (26)   setVarRange(Var[55],4,[4,1,8,6]);
[0399] (07)   setState08(220);
[039C] (**) }
[039C] (16) Var[76] = getRandomNr(4);
[039F] (48) if (Var[76] == 0) {
[03A5] (26)   setVarRange(Var[77],4,[3,4,1,2]);
[03AC] (**) }
[03AC] (48) if (Var[76] == 1) {
[03B2] (26)   setVarRange(Var[77],4,[1,1,3,8]);
[03B9] (**) }
[03B9] (48) if (Var[76] == 2) {
[03BF] (26)   setVarRange(Var[77],4,[9,1,1,1]);
[03C6] (**) }
[03C6] (48) if (Var[76] == 3) {
[03CC] (26)   setVarRange(Var[77],4,[1,9,7,7]);
[03D3] (**) }
[03D3] (48) if (Var[76] == 4) {
[03D9] (26)   setVarRange(Var[77],4,[0,5,2,5]);
[03E0] (**) }
[03E0] (42) startScript(131);
[03E2] (A0) stopObjectCode();
END

// Script 2
[0000] (C8) if (Var[42] == VAR_ACTIVE_OBJECT2) {
[0005] (C8)   if (Var[43] == VAR_ACTIVE_OBJECT1) {
[000A] (46)     VAR_TALK_ACTOR++;
[000C] (44)     if (VAR_TALK_ACTOR > 6) {
[0012] (1A)       VAR_TALK_ACTOR = 0;
[0016] (4A)       chainScript(3);
[0018] (**)     }
[0018] (18)     goto 001F;
[001B] (**)   }
[001B] (**) }
[001B] (1A) VAR_TALK_ACTOR = 0;
[001F] (9A) Var[42] = VAR_ACTIVE_OBJECT1;
[0022] (9A) Var[43] = VAR_ACTIVE_OBJECT2;
[0025] (48) if (VAR_ACTIVE_VERB == 7) {
[002B] (48) } else if (VAR_ACTIVE_VERB == 3) {
[0034] (04)   if (VAR_ACTIVE_OBJECT2 <= 25) {
[003A] (90)     VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[003D] (48)     if (VAR_RESULT == 15) {
[0043] (18)       goto 00E8;
[0046] (**)     }
[0046] (B1)     VAR_RESULT = getBitVar(2952,VAR_EGO);
[004B] (48)     if (VAR_RESULT == 0) {
[0051] (CD)       walkActorToActor(VAR_EGO,VAR_ACTIVE_OBJECT2,4);
[0055] (**)     }
[0055] (BB)     waitForActor(VAR_EGO);
[0057] (F4)     VAR_RESULT = getDist(VAR_EGO,VAR_ACTIVE_OBJECT2);
[005B] (04)     if (VAR_RESULT <= 4) {
[0061] (08)       if (VAR_ACTIVE_OBJECT2 != 19) {
[0067] (C9)         faceActor(VAR_ACTIVE_OBJECT2,VAR_EGO);
[006A] (**)       }
[006A] (C9)       faceActor(VAR_EGO,VAR_ACTIVE_OBJECT2);
[006D] (A8)       if (VAR_VERB_ALLOWED) {
[0071] (79)         doSentence(3,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,1);
[0076] (19)         doSentence(RESET);
[0078] (18)         goto 01A4;
[007B] (78)       } else if (VAR_ACTIVE_OBJECT2 < 8) {
[0084] (E9)         setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0087] (18)       } else {
[008A] (4A)         chainScript(3);
[008C] (**)       }
[008C] (18)     } else {
[008F] (D8)       printEgo("I'd better get closer.");
[00A4] (**)     }
[00A4] (18)     goto 01A4;
[00A7] (**)   }
[00A7] (**) }
[00A7] (28) if (!VAR_VERB_ALLOWED) {
[00AB] (B1)   VAR_RESULT = getBitVar(2952,VAR_EGO);
[00B0] (48)   if (VAR_RESULT == 0) {
[00B6] (90)     VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[00B9] (48)     if (VAR_RESULT == 15) {
[00BF] (F6)       walkActorToObject(VAR_EGO,VAR_ACTIVE_OBJECT1);
[00C2] (**)     }
[00C2] (**)   }
[00C2] (BB)   waitForActor(VAR_EGO);
[00C4] (08)   if (VAR_ACTIVE_VERB != 13) {
[00CA] (4A)     chainScript(3);
[00CC] (**)   }
[00CC] (18) } else {
[00CF] (08)   if (VAR_ACTIVE_VERB != 12) {
[00D5] (08)     if (VAR_ACTIVE_VERB != 14) {
[00DB] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[00DE] (48)       if (VAR_RESULT == 15) {
[00E4] (FF)         if (getState01(VAR_ACTIVE_OBJECT1)) {
[00E8] (F9)           doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[00ED] (59)           doSentence(14,VAR_ACTIVE_OBJECT1,0,0);
[00F3] (18)           goto 01A4;
[00F6] (**)         }
[00F6] (**)       }
[00F6] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT2);
[00F9] (48)       if (VAR_RESULT == 15) {
[00FF] (FF)         if (getState01(VAR_ACTIVE_OBJECT2)) {
[0103] (F9)           doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[0108] (59)           doSentence(14,VAR_ACTIVE_OBJECT2,0,0);
[010E] (18)           goto 01A4;
[0111] (**)         }
[0111] (**)       }
[0111] (**)     }
[0111] (48)   } else if (VAR_CURRENT_LIGHTS == 0) {
[011A] (D8)     printEgo("It's too dark to read.");
[012E] (**)   }
[012E] (08)   if (Var[21] != 3) {
[0134] (08)     if (Var[21] != 5) {
[013A] (9A)       Var[22] = VAR_ACTIVE_OBJECT1;
[013D] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0140] (08)       if (VAR_RESULT != 15) {
[0146] (08)         if (VAR_ACTIVE_OBJECT2 != 0) {
[014C] (90)           VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT2);
[014F] (48)           if (VAR_RESULT == 15) {
[0155] (9A)             Var[22] = VAR_ACTIVE_OBJECT2;
[0158] (**)           }
[0158] (**)         }
[0158] (**)       }
[0158] (B1)       VAR_RESULT = getBitVar(2952,VAR_EGO);
[015D] (48)       if (VAR_RESULT == 0) {
[0163] (90)         VAR_RESULT = getObjectOwner(Var[22]);
[0166] (48)         if (VAR_RESULT == 15) {
[016C] (F6)           walkActorToObject(VAR_EGO,Var[22]);
[016F] (BB)           waitForActor(VAR_EGO);
[0171] (**)         }
[0171] (**)       }
[0171] (F4)       VAR_RESULT = getDist(VAR_EGO,Var[22]);
[0175] (44)       if (VAR_RESULT > 2) {
[017B] (D8)         printEgo("I can't reach it.");
[018B] (62)         stopScript(2);
[018D] (**)       }
[018D] (B1)       VAR_RESULT = getBitVar(2952,VAR_EGO);
[0192] (A8)       if (VAR_RESULT) {
[0196] (48)         if (VAR_ACTIVE_VERB == 13) {
[019C] (18)           goto 01A4;
[019F] (**)         }
[019F] (**)       }
[019F] (**)     }
[019F] (**)   }
[019F] (F9)   doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,1);
[01A4] (**) }
[01A4] (F9) doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,2);
[01A9] (A0) stopObjectCode();
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
[0040] (1A)   VAR_SENTENCE_VERB = 9;
[0044] (1A)   Var[34] = 1;
[0048] (**) }
[0048] (48) if (VAR_CLICK_AREA == 4) {
[004E] (48)   if (VAR_KEYPRESS == 8) {
[0054] (98)     restart();
[0055] (48)   } else if (VAR_KEYPRESS == 13) {
[005E] (1A)     Var[34] = 1;
[0062] (48)   } else if (VAR_KEYPRESS == 5) {
[006B] (48)     if (VAR_ROOM == 45) {
[0071] (4A)       chainScript(163);
[0073] (**)     }
[0073] (48)     if (Var[21] == 1) {
[0079] (48)       if (Var[175] == 0) {
[007F] (4A)         chainScript(163);
[0081] (18)       } else {
[0084] (14)         print(255,"The Meteor has control of your computer\x01and he won't let you save the game.");
[00C5] (**)       }
[00C5] (**)     }
[00C5] (18)     /* goto 00C8; */
[00C8] (**)   }
[00C8] (48)   if (Var[21] == 1) {
[00CE] (48)     if (Var[175] == 0) {
[00D4] (48)       if (VAR_KEYPRESS == 1) {
[00DA] (42)         startScript(164);
[00DC] (9A)         VAR_EGO = Var[47];
[00DF] (D2)         actorFollowCamera(VAR_EGO);
[00E1] (18)         goto 0299;
[00E4] (48)       } else if (VAR_KEYPRESS == 2) {
[00ED] (42)         startScript(164);
[00EF] (9A)         VAR_EGO = Var[48];
[00F2] (D2)         actorFollowCamera(VAR_EGO);
[00F4] (18)         goto 0299;
[00F7] (48)       } else if (VAR_KEYPRESS == 3) {
[0100] (42)         startScript(164);
[0102] (9A)         VAR_EGO = Var[49];
[0105] (D2)         actorFollowCamera(VAR_EGO);
[0107] (18)         goto 0299;
[010A] (18)         /* goto 010D; */
[010D] (**)       }
[010D] (**)     }
[010D] (**)   }
[010D] (**) }
[010D] (48) if (VAR_CLICK_AREA == 1) {
[0113] (A8)   if (VAR_SENTENCE_PREPOSITION) {
[0117] (48)   } else if (VAR_CLICK_VERB == 7) {
[0120] (28)     if (!Var[175]) {
[0124] (42)       startScript(165);
[0126] (18)       goto 012F;
[0129] (**)     }
[0129] (**)   }
[0129] (48)   if (VAR_CLICK_VERB == 3) {
[012F] (19)     doSentence(RESET);
[0131] (**)   }
[0131] (48)   if (VAR_CLICK_VERB == 15) {
[0137] (1A)     VAR_SENTENCE_VERB = 15;
[013B] (99)     doSentence(VAR_SENTENCE_VERB,0,0,2);
[0142] (78)     if (VAR_VIRT_MOUSE_Y < 67) {
[0148] (F5)       VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[014C] (88)       if (VAR_CLICK_OBJECT != VAR_SENTENCE_OBJECT1) {
[0151] (9A)         VAR_SENTENCE_OBJECT1 = VAR_CLICK_OBJECT;
[0154] (D9)         doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,0,2);
[015A] (**)       }
[015A] (**)     }
[015A] (80)     breakHere();
[015B] (18)     goto 0142;
[015E] (**)   }
[015E] (48)   if (VAR_CLICK_VERB == 7) {
[0164] (1A)     VAR_SENTENCE_PREPOSITION = 4;
[0168] (9A)     VAR_SENTENCE_VERB = VAR_CLICK_VERB;
[016B] (**)   }
[016B] (28)   if (!Var[175]) {
[016F] (48)     if (VAR_CLICK_VERB == 20) {
[0175] (18)       goto 00DA;
[0178] (**)     }
[0178] (48)     if (VAR_CLICK_VERB == 21) {
[017E] (18)       goto 00ED;
[0181] (**)     }
[0181] (48)     if (VAR_CLICK_VERB == 22) {
[0187] (18)       goto 0100;
[018A] (**)     }
[018A] (**)   }
[018A] (C8)   if (VAR_SENTENCE_VERB == VAR_CLICK_VERB) {
[018F] (1A)     Var[34] = 1;
[0193] (18)   } else {
[0196] (9A)     VAR_SENTENCE_VERB = VAR_CLICK_VERB;
[0199] (**)   }
[0199] (18) } else {
[019C] (48)   if (VAR_CLICK_AREA == 2) {
[01A2] (48)     if (VAR_SENTENCE_VERB == 13) {
[01A8] (1A)       Var[34] = 1;
[01AC] (**)     }
[01AC] (48)     if (VAR_SENTENCE_VERB == 15) {
[01B2] (19)       doSentence(RESET);
[01B4] (1A)       Var[34] = 0;
[01B8] (**)     }
[01B8] (48)     if (VAR_SENTENCE_VERB == 3) {
[01BE] (A8)       if (VAR_SENTENCE_PREPOSITION) {
[01C2] (D5)         VAR_CLICK_OBJECT = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01C6] (18)       } else {
[01C9] (F5)         VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01CD] (**)       }
[01CD] (08)     } else if (VAR_SENTENCE_VERB != 7) {
[01D6] (F5)       VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01DA] (**)     }
[01DA] (**)   }
[01DA] (28)   if (!VAR_CLICK_OBJECT) {
[01DE] (48)     if (VAR_SENTENCE_VERB == 13) {
[01E4] (19)       doSentence(RESET);
[01E6] (1A)       Var[34] = 1;
[01EA] (**)     }
[01EA] (A8)   } else if (VAR_SENTENCE_PREPOSITION) {
[01F1] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT2) {
[01F6] (1A)       Var[34] = 1;
[01FA] (**)     }
[01FA] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT1) {
[01FF] (1A)       VAR_CLICK_OBJECT = 0;
[0203] (**)     }
[0203] (48)     if (VAR_SENTENCE_VERB == 3) {
[0209] (44)       if (VAR_CLICK_OBJECT > 25) {
[020F] (1A)         VAR_CLICK_OBJECT = 0;
[0213] (**)       }
[0213] (**)     }
[0213] (9A)     VAR_SENTENCE_OBJECT2 = VAR_CLICK_OBJECT;
[0216] (18)   } else {
[0219] (1A)     VAR_SENTENCE_OBJECT2 = 0;
[021D] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT1) {
[0222] (1A)       Var[34] = 1;
[0226] (**)     }
[0226] (9A)     VAR_SENTENCE_OBJECT1 = VAR_CLICK_OBJECT;
[0229] (**)   }
[0229] (**) }
[0229] (48) if (VAR_SENTENCE_VERB == 14) {
[022F] (90)   VAR_RESULT = getObjectOwner(VAR_SENTENCE_OBJECT1);
[0232] (08)   if (VAR_RESULT != 15) {
[0238] (1A)     VAR_SENTENCE_OBJECT1 = 0;
[023C] (**)   }
[023C] (**) }
[023C] (08) if (Var[21] != 3) {
[0242] (F9)   doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,2);
[0247] (**) }
[0247] (A8) if (Var[34]) {
[024B] (A8)   if (VAR_SENTENCE_VERB) {
[024F] (48)     if (VAR_SENTENCE_VERB == 7) {
[0255] (18)     } else {
[0258] (A8)       unless (VAR_SENTENCE_OBJECT1) goto 0274;
[025C] (A8)       if (VAR_SENTENCE_PREPOSITION) {
[0260] (A8)         if (VAR_SENTENCE_OBJECT2) {
[0264] (18)         } else {
[0267] (18)           goto 0271;
[026A] (**)         }
[026A] (**)       }
[026A] (**)     }
[026A] (19)     doSentence(STOP);
[026C] (F9)     doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,0);
[0271] (18)     goto 0291;
[0274] (48)     if (VAR_SENTENCE_VERB == 13) {
[027A] (B1)       VAR_RESULT = getBitVar(2952,VAR_EGO);
[027F] (48)       if (VAR_RESULT == 0) {
[0285] (48)         if (VAR_CLICK_AREA == 2) {
[028B] (19)           doSentence(STOP);
[028D] (FE)           walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0291] (**)         }
[0291] (**)       }
[0291] (**)     }
[0291] (**)   }
[0291] (08)   if (VAR_SENTENCE_VERB != 13) {
[0297] (19)     doSentence(RESET);
[0299] (**)   }
[0299] (**) }
[0299] (1A) VAR_CLICK_VERB = 0;
[029D] (1A) VAR_CLICK_OBJECT = 0;
[02A1] (A0) stopObjectCode();
END

// Script 5: (does nothing)
[0000] (A0) stopObjectCode();
END

// Script 7
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

// Script 8
[0000] (62) stopScript(12);
[0002] (03) VAR_RESULT = getActorRoom(13);
[0005] (08) if (VAR_RESULT != 8) {
[000B] (62)   stopScript(48);
[000D] (**) }
[000D] (3C) stopSound(32);
[000F] (3C) stopSound(33);
[0011] (A0) stopObjectCode();
END

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
[089D] (70) lights(2,0,0);
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

// Script 20: Tentacle Mating Call Record
[0000] (0C) loadSound(10)
[0003] (1C) startSound(25);
[0005] (2E) delay(300);
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

// Script 24: Grandfather Clock Ticking
[0000] (2E) delay(120);
[0004] (1C) startSound(28);
[0006] (05) drawObject(454,255,255);
[000B] (80) breakHere();
[000C] (2E) delay(90);
[0010] (1C) startSound(28);
[0012] (05) drawObject(455,255,255);
[0017] (80) breakHere();
[0018] (2E) delay(90);
[001C] (18) goto 0004;
[001F] (A0) stopObjectCode();
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
[0010] (2E) delay(240);
[0014] (18) goto 0000;
[0017] (A0) stopObjectCode();
END

// Script 32: Phone Busy Signal
[0000] (48) if (VAR_ROOM == 5) {
[0006] (1C)   startSound(22);
[0008] (**) }
[0008] (2E) delay(30);
[000C] (18) goto 0000;
[000F] (A0) stopObjectCode();
END

// Script 33: Phone Disconnect
[0000] (47) clearState08(136);
[0003] (62) stopScript(35);
[0005] (1A) Var[161] = 0;
[0009] (62) stopScript(30);
[000B] (3C) stopSound(21);
[000D] (62) stopScript(32);
[000F] (62) stopScript(31);
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
[001A] (18) goto 0106;
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
[0058] (80) breakHere();
[0059] (48) if (Var[74] == 0) {
[005F] (14)   print(10,"Hello?\x03Hello? Who's there?\x03Is this a prank phone call?\x03It doesn't sound like a prank phone\x01call, there's no heavy breathing.\x03Here, let me show you how to do it^");
[00E9] (18) } else {
[00EC] (14)   print(10,"Hello?  Is this you again?");
[0105] (**) }
[0105] (AE) waitForMessage();
[0106] (2D) putActorInRoom(10,19);
[0109] (01) putActor(10,15,52);
[010D] (11) animateActor(10,251);
[0110] (62) stopScript(31);
[0112] (07) setState08(105);
[0115] (C0) endCutscene();
[0116] (1A) Var[74] = 1;
[011A] (2E) delay(1200);
[011E] (83) VAR_RESULT = getActorRoom(VAR_EGO);
[0121] (48) if (VAR_RESULT == 19) {
[0127] (14)   print(10,"If you're not going to do it right,\x01then good bye!");
[0153] (AE)   waitForMessage();
[0154] (**) }
[0154] (47) clearState08(105);
[0157] (83) VAR_RESULT = getActorRoom(VAR_EGO);
[015A] (48) if (VAR_RESULT == 5) {
[0160] (D8)   printEgo("She just hung up.");
[0170] (1C)   startSound(21);
[0172] (**) }
[0172] (1A) Var[161] = 0;
[0176] (68) VAR_RESULT = isScriptRunning(36);
[0179] (48) if (VAR_RESULT == 0) {
[017F] (42)   startScript(39);
[0181] (**) }
[0181] (A0) stopObjectCode();
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
[0000] (9A) Var[63] = Var[59];
[0003] (9A) Var[64] = Var[60];
[0006] (9A) Var[65] = Var[61];
[0009] (9A) Var[66] = Var[62];
[000C] (1A) Var[128] = 0;
[0010] (42) startScript(44);
[0012] (80) breakHere();
[0013] (48) unless (Var[69] == 0) goto 0012;
[0019] (48) if (Var[67] == 0) {
[001F] (67)   clearState04(163);
[0022] (07)   setState08(163);
[0025] (07)   setState08(166);
[0028] (1C)   startSound(13);
[002A] (18) } else {
[002D] (42)   startScript(69);
[002F] (**) }
[002F] (A0) stopObjectCode();
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

// Script 55: Check Light State
[0000] (1A) Var[111] = 0;
[0004] (10) Var[109] = getObjectOwner(84);
[0008] (83) VAR_RESULT = getActorRoom(Var[109]);
[000B] (C8) if (VAR_RESULT == VAR_ROOM) {
[0010] (48)   if (Var[156] == 1) {
[0016] (1A)     Var[111] = 1;
[001A] (**)   }
[001A] (**) }
[001A] (0F) if (!getState08(157)) {
[001F] (B1)   VAR_RESULT = getBitVar(2816,VAR_ROOM);
[0024] (48)   if (VAR_RESULT == 0) {
[002A] (1A)     Var[111] = 2;
[002E] (**)   }
[002E] (**) }
[002E] (B1) VAR_RESULT = getBitVar(2872,VAR_ROOM);
[0033] (48) if (VAR_RESULT == 1) {
[0039] (1A)   Var[111] = 2;
[003D] (18) } else {
[0040] (F0)   lights(Var[111],0,0);
[0044] (**) }
[0044] (A0) stopObjectCode();
END

// Script 56: Close Dungeon Door
[0000] (4F) if (getState08(159)) {
[0005] (47)   clearState08(159);
[0008] (47)   clearState08(155);
[000B] (1C)   startSound(42);
[000D] (**) }
[000D] (A0) stopObjectCode();
END

// Script 57: Play Outside Noise
[0000] (2E) delay(360000);
[0004] (18) goto 0000;
[0007] (A0) stopObjectCode();
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
[00F1] (A0) stopObjectCode();
END

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
[0005] (18) goto 00FA;
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
[0033] (01) putActor(11,59,43);
[0037] (2E) delay(60);
[003B] (0F) if (!getState08(57)) {
[0040] (52)   actorFollowCamera(11);
[0042] (36)   walkActorToObject(11,57);
[0046] (14)   print(11,"My package is here!");
[0059] (42)   startScript(90);
[005B] (3B)   waitForActor(11);
[005D] (2E)   delay(60);
[0061] (07)   setState08(57);
[0064] (57)   setState02(57);
[0067] (1A)   Var[92] = 2;
[006B] (2E)   delay(60);
[006F] (36)   walkActorToObject(11,61);
[0073] (3B)   waitForActor(11);
[0075] (32)   setCameraAt(59);
[0077] (18) } else {
[007A] (66)   Var[113] = getClosestObjActor(11);
[007E] (74)   VAR_RESULT = getDist(11,Var[113]);
[0083] (44)   if (VAR_RESULT > 25) {
[0089] (14)     print(11,"Someone playing tricks on me, eh?\x03I'll get them next time!");
[00BD] (18)   } else {
[00C0] (4D)     walkActorToActor(11,Var[113],4);
[00C4] (80)     breakHere();
[00C5] (80)     breakHere();
[00C6] (11)     animateActor(11,255);
[00C9] (14)     print(11,"Can't you read the sign?\x03NOW GET OUT OF HERE!");
[00F1] (**)   }
[00F1] (AE)   waitForMessage();
[00F2] (11)   animateActor(11,248);
[00F5] (80)   breakHere();
[00F6] (11)   animateActor(11,251);
[00F9] (80)   breakHere();
[00FA] (**) }
[00FA] (14) print(255," ");
[00FE] (62) stopScript(90);
[0100] (0C) unlockCostume(11)
[0103] (0F) if (!getState08(57)) {
[0108] (07)   setState08(57);
[010B] (57)   setState02(57);
[010E] (1A)   Var[92] = 2;
[0112] (**) }
[0112] (2D) putActorInRoom(11,0);
[0115] (01) putActor(11,0,0);
[0119] (47) clearState08(67);
[011C] (47) clearState08(61);
[011F] (27) setState04(61);
[0122] (48) if (VAR_OVERRIDE == 0) {
[0128] (1C)   startSound(9);
[012A] (2E)   delay(60);
[012E] (**) }
[012E] (42) startScript(98);
[0130] (C0) endCutscene();
[0131] (A0) stopObjectCode();
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
[0002] (18) goto 01B7;
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
[007E] (14) print(255,"     A Lucasfilm Games Production");
[009D] (2E) delay(240);
[00A1] (14) print(255,"       Designed and written by\x01     Ron Gilbert and Gary Winnick");
[00D7] (2E) delay(240);
[00DB] (14) print(255,"              Scripted by\x01       Ron Gilbert and David Fox");
[0108] (2E) delay(240);
[010C] (14) print(255,"             Programmed by\x01    Aric Wilmunder and Ron Gilbert");
[013F] (2E) delay(240);
[0143] (14) print(255,"         Art and animation by\x01             Gary Winnick");
[016E] (2E) delay(240);
[0172] (14) print(255,"          Original music by\x01    Chris Grigg and David Lawrence");
[01A6] (2E) delay(240);
[01AA] (72) loadRoom(49);
[01AC] (32) setCameraAt(20);
[01AE] (12) panCameraTo(220);
[01B0] (80) breakHere();
[01B1] (48) unless (VAR_CAMERA_POS_X == 180) goto 01B0;
[01B7] (62) stopScript(135);
[01B9] (0C) unlockRoom(49)
[01BC] (0C) unlockCostume(22)
[01BF] (0C) unlockScript(135)
[01C2] (C0) endCutscene();
[01C3] (A0) stopObjectCode();
END

// Script 131: Introducing Kids
[0000] (1A) Var[59] = 100;
[0004] (52) actorFollowCamera(3);
[0006] (40) cutscene();
[0007] (42) startScript(57);
[0009] (58) beginOverride();
[000A] (18) goto 020B;
[000D] (11) animateActor(3,249);
[0010] (91) animateActor(Var[48],248);
[0013] (91) animateActor(Var[49],248);
[0016] (2E) delay(60);
[001A] (14) print(3,"Ok! This looks like the old mansion.");
[003B] (2E) delay(60);
[003F] (1E) walkActorTo(3,18,60);
[0043] (AE) waitForMessage();
[0044] (14) print(3,"I'm sure I saw Dr. Fred take Sandy here.\x03It's up to us to get her out.");
[007E] (2E) delay(120);
[0082] (1E) walkActorTo(3,24,59);
[0086] (AE) waitForMessage();
[0087] (14) print(3,"This could be real dangerous.\x03If anyone wants to back out^");
[00BB] (AE) waitForMessage();
[00BC] (4F) if (getState08(263)) {
[00C1] (14)   print(5,"Ok, I'm outta here!");
[00D4] (43)   Var[71] = getActorX(5);
[00D7] (23)   Var[72] = getActorY(5);
[00DA] (1E)   walkActorTo(5,38,64);
[00DE] (48)   if (Var[48] == 5) {
[00E4] (91)     animateActor(Var[49],250);
[00E7] (18)   } else {
[00EA] (91)     animateActor(Var[48],250);
[00ED] (**)   }
[00ED] (3B)   waitForActor(5);
[00EF] (11)   animateActor(5,249);
[00F2] (AE)   waitForMessage();
[00F3] (14)   print(3,"BERNARD! Don't be a tuna head!\x03It's Sandy we're talking about!");
[012B] (80)   breakHere();
[012C] (44)   unless (VAR_CHARCOUNT > 28) goto 012B;
[0132] (11)   animateActor(5,250);
[0135] (80)   breakHere();
[0136] (11)   animateActor(5,248);
[0139] (AE)   waitForMessage();
[013A] (2E)   delay(120);
[013E] (14)   print(5,"Ok.");
[0144] (7E)   walkActorTo(5,Var[71],Var[72]);
[0148] (80)   breakHere();
[0149] (3B)   waitForActor(5);
[014B] (11)   animateActor(5,250);
[014E] (**) }
[014E] (4F) if (getState08(261)) {
[0153] (14)   print(2,"I heard Dr. Fred was kinda cute.");
[0170] (AE)   waitForMessage();
[0171] (**) }
[0171] (4F) if (getState08(260)) {
[0176] (14)   print(1,"Let's do it.");
[0183] (AE)   waitForMessage();
[0184] (**) }
[0184] (4F) if (getState08(265)) {
[0189] (14)   print(7,"I thought we were going to the beach!");
[01AA] (AE)   waitForMessage();
[01AB] (**) }
[01AB] (4F) if (getState08(262)) {
[01B0] (14)   print(4,"Did any of you guys see that movie?\x03Four kids went into this strange house\x03and...uh...never mind.");
[0206] (AE)   waitForMessage();
[0207] (**) }
[0207] (2E) delay(60);
[020B] (14) print(3,"Ok, let's go rescue Sandy!");
[0224] (2E) delay(60);
[0228] (11) animateActor(3,250);
[022B] (80) breakHere();
[022C] (91) animateActor(Var[48],250);
[022F] (80) breakHere();
[0230] (91) animateActor(Var[49],250);
[0233] (C0) endCutscene();
[0234] (42) startScript(164);
[0236] (A0) stopObjectCode();
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

// Script 135: Meteor Crashes to Earth
[0000] (2D) putActorInRoom(22,33);
[0003] (01) putActor(22,80,5);
[0007] (52) actorFollowCamera(22);
[0009] (1E) walkActorTo(22,29,52);
[000D] (80) breakHere();
[000E] (3B) waitForActor(22);
[0010] (11) animateActor(22,8);
[0013] (05) drawObject(106,255,255);
[0018] (12) panCameraTo(20);
[001A] (01) putActor(22,80,0);
[001E] (1C) startSound(57);
[0020] (80) breakHere();
[0021] (01) putActor(22,29,52);
[0025] (1A) Var[109] = 10;
[0029] (80) breakHere();
[002A] (3A) Var[109] -= 1;
[002E] (48) unless (Var[109] == 0) goto 0029;
[0034] (2D) putActorInRoom(22,0);
[0037] (01) putActor(22,0,0);
[003B] (A0) stopObjectCode();
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


// Script 145
[0000] (0F) if (!getState08(159)) {
[0005] (1C)   startSound(8);
[0007] (07)   setState08(159);
[000A] (07)   setState08(155);
[000D] (**) }
[000D] (2E) delay(180);
[0011] (42) startScript(56);
[0013] (A0) stopObjectCode();
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
[000F] (7A) VerbOps(New-20(0,19,0,0,"        Dave "));
[0023] (48) if (Var[48] == 1) {
[0029] (7A)   VerbOps(New-21(13,19,1,0,"     Syd     "));
[003D] (**) }
[003D] (48) if (Var[49] == 1) {
[0043] (7A)   VerbOps(New-22(26,19,2,0,"Syd          "));
[0057] (**) }
[0057] (48) if (Var[48] == 4) {
[005D] (7A)   VerbOps(New-21(13,19,1,0,"   Michael   "));
[0071] (**) }
[0071] (48) if (Var[49] == 4) {
[0077] (7A)   VerbOps(New-22(26,19,2,0,"Michael      "));
[008B] (**) }
[008B] (48) if (Var[48] == 6) {
[0091] (7A)   VerbOps(New-21(13,19,1,0,"    Wendy    "));
[00A5] (**) }
[00A5] (48) if (Var[49] == 6) {
[00AB] (7A)   VerbOps(New-22(26,19,2,0,"Wendy        "));
[00BF] (**) }
[00BF] (48) if (Var[48] == 5) {
[00C5] (7A)   VerbOps(New-21(13,19,1,0,"   Bernard   "));
[00D9] (**) }
[00D9] (48) if (Var[49] == 5) {
[00DF] (7A)   VerbOps(New-22(26,19,2,0,"Bernard      "));
[00F3] (**) }
[00F3] (48) if (Var[48] == 2) {
[00F9] (7A)   VerbOps(New-21(13,19,1,0,"    Razor    "));
[010D] (**) }
[010D] (48) if (Var[49] == 2) {
[0113] (7A)   VerbOps(New-22(26,19,2,0,"Razor        "));
[0127] (**) }
[0127] (48) if (Var[48] == 7) {
[012D] (7A)   VerbOps(New-21(13,19,1,0,"     Jeff    "));
[0141] (**) }
[0141] (48) if (Var[49] == 7) {
[0147] (7A)   VerbOps(New-22(26,19,2,0,"Jeff         "));
[015B] (**) }
[015B] (60) cursorCommand(191, 5);
[015E] (A0) stopObjectCode();
END

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