/**
 * Indiana Jones and the Fate of Atlantis: CD Demo
 * 
 * Global Scripts
 */


// Script 1: Game initialization
[0000] (2C) InitCharset(1);
[0003] (1A) VAR_TIMER_NEXT = 6;
[0008] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[000D] (1A) VAR_RESTART_KEY = 0;
[0012] (1A) VAR_PAUSE_KEY = 32;
[0017] (1A) VAR_TALKSTOP_KEY = 46;
[001C] (27) PutCodeInString(37, "Indy Atlantis, V1.0 10-9-92 H" + getInt(VAR_HEAPSPACE) + " M" + getInt(VAR_MEMORY_PERFORMANCE) + " V" + getInt(VAR_VIDEO_PERFORMANCE) + " J" + getInt(VAR_MACHINE_SPEED));
[0053] (1A) Var[58] = 176;
[0058] (27) PutCodeInString(4, "Game Paused.  Press SPACE to Continue.");
[0082] (27) PutCodeInString(5, "Are you sure you want to restart?  (Y/N)Y");
[00AF] (27) PutCodeInString(6, "Are you sure you want to quit?  (Y/N)Y");
[00D9] (27) PutCodeInString(7, "Save");
[00E1] (27) PutCodeInString(8, "Load");
[00E9] (27) PutCodeInString(9, "Play");
[00F1] (27) PutCodeInString(10, "Cancel");
[00FB] (27) PutCodeInString(11, "Quit");
[0103] (27) PutCodeInString(12, "OK");
[0109] (27) PutCodeInString(13, "Insert save/load game disk");
[0127] (27) PutCodeInString(14, "You must enter a name");
[0140] (27) PutCodeInString(15, "The game was NOT saved");
[015A] (27) PutCodeInString(16, "The game was NOT loaded");
[0175] (27) PutCodeInString(17, "Saving '%s'");
[0184] (27) PutCodeInString(18, "Loading '%s'");
[0194] (27) PutCodeInString(19, "Name your SAVE game");
[01AB] (27) PutCodeInString(20, "Select a game to LOAD");
[01C4] (27) PutCodeInString(28, "Indiana Jones and the Fate of Atlantis");
[01EE] (27) PutCodeInString(21, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0239] (27) PutCodeInString(31, "ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd");
[02E6] (27) PutCodeInString(30, "ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd");
[0393] (27) SetStringChar(21,0,7);
[0398] (27) SetStringChar(21,1,0);
[039D] (27) SetStringChar(21,2,8);
[03A2] (27) SetStringChar(21,3,0);
[03A7] (27) SetStringChar(21,4,7);
[03AC] (27) SetStringChar(21,5,8);
[03B1] (27) SetStringChar(21,6,14);
[03B6] (27) SetStringChar(21,7,7);
[03BB] (27) SetStringChar(21,8,0);
[03C0] (27) SetStringChar(21,9,7);
[03C5] (27) SetStringChar(21,10,8);
[03CA] (27) SetStringChar(21,11,14);
[03CF] (27) SetStringChar(21,12,7);
[03D4] (27) SetStringChar(21,13,15);
[03D9] (27) SetStringChar(21,14,8);
[03DE] (27) SetStringChar(21,15,15);
[03E3] (27) SetStringChar(21,16,8);
[03E8] (27) SetStringChar(21,17,15);
[03ED] (27) SetStringChar(21,18,8);
[03F2] (27) SetStringChar(21,19,15);
[03F7] (27) SetStringChar(21,20,8);
[03FC] (27) SetStringChar(21,21,8);
[0401] (27) SetStringChar(21,22,15);
[0406] (27) SetStringChar(21,23,8);
[040B] (27) SetStringChar(21,24,15);
[0410] (27) SetStringChar(21,25,8);
[0415] (27) SetStringChar(21,26,7);
[041A] (27) SetStringChar(21,27,15);
[041F] (27) SetStringChar(21,28,8);
[0424] (27) SetStringChar(21,29,15);
[0429] (27) SetStringChar(21,30,8);
[042E] (27) SetStringChar(21,31,4);
[0433] (27) SetStringChar(21,32,7);
[0438] (27) SetStringChar(21,33,15);
[043D] (27) SetStringChar(21,34,8);
[0442] (27) SetStringChar(21,35,15);
[0447] (27) SetStringChar(21,36,8);
[044C] (27) SetStringChar(21,37,8);
[0451] (27) SetStringChar(21,38,7);
[0456] (27) SetStringChar(21,39,15);
[045B] (27) SetStringChar(21,40,8);
[0460] (27) SetStringChar(21,41,15);
[0465] (27) SetStringChar(21,42,8);
[046A] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[046F] (1A) VAR_PAUSE_KEY = 32;
[0474] (1A) VAR_MAINMENU_KEY = 0;
[0479] (26) setVarRange(Var[127],7,[0,176,176,176,176,176,176]);
[0484] (26) setVarRange(Var[134],7,[0,156,165,174,183,192,192]);
[048F] (33) loadString(31,"iq-points");
[049C] (1A) VAR_CHARINC = 3;
[04A1] (1A) Var[111] = 10;
[04A6] (1A) Var[163] = 11;
[04AB] (1A) VAR_CUTSCENE_START_SCRIPT = 20;
[04B0] (1A) VAR_CUTSCENE_END_SCRIPT = 21;
[04B5] (1A) VAR_ENTRY_SCRIPT = 33;
[04BA] (1A) VAR_ENTRY_SCRIPT2 = 5;
[04BF] (1A) VAR_EXIT_SCRIPT = 23;
[04C4] (1A) VAR_VERB_SCRIPT = 4;
[04C9] (1A) VAR_SENTENCE_SCRIPT = 2;
[04CE] (1A) VAR_NUM_ACTOR = 12;
[04D3] (1A) Var[321] = 300;
[04D8] (1A) Var[324] = 100;
[04DD] (1A) Var[323] = 5;
[04E2] (1A) Var[325] = 10;
[04E7] (1A) Var[339] = 100;
[04EC] (1A) Var[338] = 5;
[04F1] (1A) Var[342] = 10;
[04F6] (9A) Var[322] = Var[321];
[04FB] (1A) Var[237] = 1;
[0500] (1A) Bit[213] = 0;
[0505] (1A) Bit[214] = 0;
[050A] (0A) startScript(75,[]);
[050D] (CC) PseudoRoom(20,2,3,4);
[0513] (CC) PseudoRoom(20,5,6,7);
[0519] (CC) PseudoRoom(20,8,9,10);
[051F] (CC) PseudoRoom(20,11);
[0523] (CC) PseudoRoom(50,12,13,14);
[0529] (CC) PseudoRoom(50,15,16,17);
[052F] (CC) PseudoRoom(50,18,19,20);
[0535] (CC) PseudoRoom(50,21,22,23);
[053B] (CC) PseudoRoom(50,24,25,26);
[0541] (CC) PseudoRoom(50,27,28,29);
[0547] (CC) PseudoRoom(50,30,31,32);
[054D] (CC) PseudoRoom(50,33);
[0551] (CC) PseudoRoom(51,34,35,36);
[0557] (CC) PseudoRoom(51,37,38,39);
[055D] (CC) PseudoRoom(51,40,41,42);
[0563] (CC) PseudoRoom(51,43,44,45);
[0569] (CC) PseudoRoom(51,46,47,48);
[056F] (CC) PseudoRoom(51,49);
[0573] (CC) PseudoRoom(72,50,51,52,53,54);
[057B] (CC) PseudoRoom(92,64,65,66,67,68,69);
[0584] (CC) PseudoRoom(92,70,71,72,73,74,75);
[058D] (CC) PseudoRoom(92,76,77,78,79,80,81);
[0596] (CC) PseudoRoom(92,82,83,84,85,86,87);
[059F] (CC) PseudoRoom(95,55,56,57);
[05A5] (CC) PseudoRoom(95,58,59,60);
[05AB] (CC) PseudoRoom(95,61,62,63);
[05B1] (CC) PseudoRoom(93,90,91,92,93);
[05B8] (CC) PseudoRoom(94,94,95,96,97);
[05BF] (CC) PseudoRoom(46,98,99,100);
[05C5] (CC) PseudoRoom(46,101,102,103);
[05CB] (1A) Bit[461] = 1;
[05D0] (0C) Resource.clearHeap();
[05D2] (33) screenEffect(257);
[05D6] (1A) VAR_EGO = 1;
[05DB] (13) ActorOps(1,[Init(),Costume(2),TalkColor(15),Name("Indy")]);
[05E9] (13) ActorOps(2,[Init(),Costume(28),TalkColor(13),Name("Sophia")]);
[05F9] (D2) actorFollowCamera(VAR_EGO);
[05FC] (1A) Var[182] = 2;
[0601] (13) ActorOps(4,[TalkColor(14)]);
[0606] (5D) setClass(2,[141]);
[060D] (78) if (VAR_INPUTMODE < 2) {
[0614] (1A)   Bit[107] = 0;
[0619] (18) } else {
[061C] (1A)   Bit[107] = 1;
[0621] (**) }
[0621] (1A) Var[493] = 300;
[0626] (48) if (VAR_TALK_ACTOR == 0) {
[062D] (1A)   Var[493] = 345;
[0632] (**) }
[0632] (F8) if (VAR_HEAPSPACE < Var[493]) {
[0639] (72)   loadRoom(0);
[063B] (AC)   Exprmode Var[442] = (Var[493] - VAR_HEAPSPACE);
[0646] (14)   print(252,[Text("ALERT! " + getInt(Var[442]) + "K more memory needed to run game smoothly.")]);
[067F] (**) }
[067F] (1A) Local[0] = 1162;
[0684] (48) if (Local[0] == 0) {
[068B] (48) } else if (Local[0] == -7873) {
[0695] (18) } else {
[0698] (A8)   if (Local[0]) {
[069D] (48)     if (Local[0] == 2718) {
[06A4] (18)     } else {
[06A7] (1A)       Bit[24] = 1;
[06AC] (33)       SetScreen(0,200);
[06B2] (0A)       startScript(74,[]);
[06B5] (80)       breakHere();
[06B6] (68)       VAR_RESULT = isScriptRunning(74);
[06BA] (28)       unless (!VAR_RESULT) goto 06B5;
[06BF] (2C)       InitCharset(2);
[06C2] (0A)       startScript(19,[2]);
[06C8] (2C)       InitCharset(2);
[06CB] (1A)       Var[315] = 2;
[06D0] (72)       loadRoom(4);
[06D2] (62)       stopScript(0);
[06D4] (27)       PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0829] (48)       if (Local[0] == 9900) {
[0830] (13)         ActorOps(1,[Costume(2)]);
[0835] (25)         pickupObject(20,1);
[0839] (25)         pickupObject(934,68);
[083D] (25)         pickupObject(935,68);
[0841] (25)         pickupObject(936,68);
[0845] (25)         pickupObject(1253,97);
[0849] (25)         pickupObject(1188,92);
[084D] (25)         pickupObject(1189,92);
[0851] (25)         pickupObject(1175,92);
[0855] (25)         pickupObject(583,48);
[0859] (54)         setObjectName(583,"ladder");
[0863] (37)         startObject(933,250,[20]);
[086B] (2D)         putActorInRoom(1,226);
[086E] (0E)         putActorAtObject(1,567);
[0872] (1A)         Var[238] = 3;
[0877] (1A)         Bit[17] = 1;
[087C] (2D)         putActorInRoom(2,18);
[087F] (01)         putActor(2,139,139);
[0885] (0A)         startScript(86,[1,2]);
[088E] (0A)         startScript(31,[1,2,1]);
[089A] (72)         loadRoom(18);
[089C] (**)       }
[089C] (48)       if (Local[0] == 9901) {
[08A3] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[09F5] (1A)         Var[238] = 3;
[09FA] (1A)         Var[417] = 29;
[09FF] (13)         ActorOps(1,[Costume(2)]);
[0A04] (25)         pickupObject(20,1);
[0A08] (25)         pickupObject(934,68);
[0A0C] (25)         pickupObject(935,68);
[0A10] (25)         pickupObject(936,68);
[0A14] (29)         setOwnerOf(937,1);
[0A18] (25)         pickupObject(830,60);
[0A1C] (5D)         setClass(830,[8]);
[0A23] (37)         startObject(933,250,[5000]);
[0A2B] (25)         pickupObject(1253,97);
[0A2F] (25)         pickupObject(1188,92);
[0A33] (25)         pickupObject(1189,92);
[0A37] (25)         pickupObject(1175,92);
[0A3B] (25)         pickupObject(204,18);
[0A3F] (25)         pickupObject(1012,73);
[0A43] (25)         pickupObject(173,16);
[0A47] (25)         pickupObject(586,48);
[0A4B] (25)         pickupObject(1190,92);
[0A4F] (25)         pickupObject(1207,93);
[0A53] (5D)         setClass(1207,[146]);
[0A5A] (25)         pickupObject(1208,93);
[0A5E] (5D)         setClass(1208,[146]);
[0A65] (0A)         startScript(197,[]);
[0A68] (5D)         setClass(576,[146]);
[0A6F] (25)         pickupObject(1191,92);
[0A73] (54)         setObjectName(586,"light-wand");
[0A81] (2D)         putActorInRoom(1,48);
[0A84] (01)         putActor(1,50,100);
[0A8A] (**)       }
[0A8A] (48)       if (Local[0] == 9909) {
[0A91] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0BE3] (1A)         Var[238] = 2;
[0BE8] (1A)         Var[417] = 29;
[0BED] (13)         ActorOps(1,[Costume(2)]);
[0BF2] (25)         pickupObject(20,1);
[0BF6] (25)         pickupObject(934,68);
[0BFA] (25)         pickupObject(935,68);
[0BFE] (25)         pickupObject(936,68);
[0C02] (29)         setOwnerOf(937,1);
[0C06] (25)         pickupObject(868,65);
[0C0A] (25)         pickupObject(456,40);
[0C0E] (25)         pickupObject(432,39);
[0C12] (25)         pickupObject(1012,73);
[0C16] (25)         pickupObject(1001,73);
[0C1A] (25)         pickupObject(999,73);
[0C1E] (25)         pickupObject(830,60);
[0C22] (25)         pickupObject(701,52);
[0C26] (25)         pickupObject(1188,92);
[0C2A] (25)         pickupObject(1189,92);
[0C2E] (25)         pickupObject(1175,92);
[0C32] (25)         pickupObject(1190,92);
[0C36] (25)         pickupObject(1207,93);
[0C3A] (5D)         setClass(1207,[146]);
[0C41] (25)         pickupObject(1208,93);
[0C45] (37)         startObject(933,250,[20]);
[0C4D] (5D)         setClass(1208,[146]);
[0C54] (0A)         startScript(197,[]);
[0C57] (25)         pickupObject(1191,92);
[0C5B] (2D)         putActorInRoom(1,48);
[0C5E] (01)         putActor(1,50,100);
[0C64] (**)       }
[0C64] (48)       if (Local[0] == 9902) {
[0C6B] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0DBE] (1A)         Var[238] = 3;
[0DC3] (13)         ActorOps(1,[Costume(2)]);
[0DC8] (25)         pickupObject(20,1);
[0DCC] (25)         pickupObject(934,68);
[0DD0] (25)         pickupObject(935,68);
[0DD4] (25)         pickupObject(936,68);
[0DD8] (1C)         startSound(74);
[0DDA] (0A)         startScript(146,[]);
[0DDD] (37)         startObject(933,250,[32000]);
[0DE5] (25)         pickupObject(1253,97);
[0DE9] (25)         pickupObject(1188,92);
[0DED] (25)         pickupObject(1189,92);
[0DF1] (25)         pickupObject(1175,92);
[0DF5] (25)         pickupObject(583,48);
[0DF9] (54)         setObjectName(583,"ladder");
[0E03] (25)         pickupObject(204,18);
[0E07] (25)         pickupObject(173,16);
[0E0B] (25)         pickupObject(586,48);
[0E0F] (25)         pickupObject(1190,92);
[0E13] (25)         pickupObject(1207,93);
[0E17] (25)         pickupObject(1208,93);
[0E1B] (5D)         setClass(1208,[146]);
[0E22] (25)         pickupObject(1191,92);
[0E26] (54)         setObjectName(586,"light-wand");
[0E34] (2D)         putActorInRoom(1,88);
[0E37] (01)         putActor(1,103,70);
[0E3D] (1A)         Var[224] = 97;
[0E42] (**)       }
[0E42] (48)       if (Local[0] == 9903) {
[0E49] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0F9E] (1A)         Var[238] = 3;
[0FA3] (13)         ActorOps(1,[Costume(2)]);
[0FA8] (25)         pickupObject(20,1);
[0FAC] (25)         pickupObject(934,68);
[0FB0] (25)         pickupObject(935,68);
[0FB4] (25)         pickupObject(936,68);
[0FB8] (37)         startObject(933,250,[3]);
[0FC0] (69)         setOwnerOf(937,VAR_EGO);
[0FC5] (2D)         putActorInRoom(1,48);
[0FC8] (01)         putActor(1,50,100);
[0FCE] (**)       }
[0FCE] (48)       if (Local[0] == 9904) {
[0FD5] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[10E9] (1A)         Var[238] = 3;
[10EE] (13)         ActorOps(1,[Costume(2)]);
[10F3] (25)         pickupObject(20,1);
[10F7] (25)         pickupObject(934,68);
[10FB] (25)         pickupObject(935,68);
[10FF] (25)         pickupObject(936,68);
[1103] (25)         pickupObject(1253,97);
[1107] (25)         pickupObject(1188,92);
[110B] (25)         pickupObject(1189,92);
[110F] (25)         pickupObject(1175,92);
[1113] (25)         pickupObject(583,48);
[1117] (54)         setObjectName(583,"ladder");
[1121] (25)         pickupObject(204,18);
[1125] (25)         pickupObject(173,16);
[1129] (25)         pickupObject(586,48);
[112D] (25)         pickupObject(1190,92);
[1131] (25)         pickupObject(830,60);
[1135] (25)         pickupObject(1207,93);
[1139] (25)         pickupObject(1208,93);
[113D] (5D)         setClass(1208,[146]);
[1144] (25)         pickupObject(1191,92);
[1148] (54)         setObjectName(586,"light-wand");
[1156] (1A)         Var[224] = 16;
[115B] (2D)         putActorInRoom(1,225);
[115E] (01)         putActor(1,103,70);
[1164] (1A)         Bit[17] = 1;
[1169] (**)       }
[1169] (48)       if (Local[0] == 9905) {
[1170] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[12C2] (1A)         Var[238] = 3;
[12C7] (1A)         Var[417] = 29;
[12CC] (1A)         Var[224] = 66;
[12D1] (13)         ActorOps(1,[Costume(2)]);
[12D6] (25)         pickupObject(20,1);
[12DA] (25)         pickupObject(934,68);
[12DE] (25)         pickupObject(935,68);
[12E2] (25)         pickupObject(936,68);
[12E6] (29)         setOwnerOf(937,1);
[12EA] (25)         pickupObject(830,60);
[12EE] (5D)         setClass(830,[8]);
[12F5] (37)         startObject(933,250,[25]);
[12FD] (2D)         putActorInRoom(1,48);
[1300] (01)         putActor(1,50,100);
[1306] (**)       }
[1306] (48)       unless (Local[0] == 9906) goto 130D;
[130D] (48)       unless (Local[0] == 9907) goto 1314;
[1314] (48)       unless (Local[0] == 9908) goto 131B;
[131B] (48)       if (Local[0] == 1101) {
[1322] (1A)         Bit[69] = 0;
[1327] (72)         loadRoom(1);
[1329] (**)       }
[1329] (48)       if (Local[0] == 4061) {
[1330] (1A)         Bit[17] = 1;
[1335] (1C)         startSound(86);
[1337] (4C)         soundKludge([-1]);
[133C] (2E)         delay(300);
[1340] (1A)         Local[1] = 1;
[1345] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[134D] (46)         Local[1]++;
[1350] (44)         unless (Local[1] > 55) goto 1345;
[1357] (1A)         Local[1] = 100;
[135C] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[1364] (46)         Local[1]++;
[1367] (44)         unless (Local[1] > 128) goto 135C;
[136E] (25)         pickupObject(586,48);
[1372] (1A)         Bit[36] = 1;
[1377] (1C)         startSound(183);
[1379] (4C)         soundKludge([258,183,90]);
[1384] (4C)         soundKludge([-1]);
[1389] (72)         loadRoom(21);
[138B] (62)         stopScript(1);
[138D] (**)       }
[138D] (48)       if (Local[0] == 4062) {
[1394] (62)         stopScript(75);
[1396] (25)         pickupObject(586,48);
[139A] (5D)         setClass(586,[145]);
[13A1] (1C)         startSound(86);
[13A3] (4C)         soundKludge([-1]);
[13A8] (2E)         delay(300);
[13AC] (1A)         Local[1] = 1;
[13B1] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[13B9] (46)         Local[1]++;
[13BC] (44)         unless (Local[1] > 55) goto 13B1;
[13C3] (1A)         Local[1] = 100;
[13C8] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[13D0] (46)         Local[1]++;
[13D3] (44)         unless (Local[1] > 128) goto 13C8;
[13DA] (07)         setState(583,1);
[13DE] (1A)         Bit[17] = 0;
[13E3] (1A)         Bit[36] = 1;
[13E8] (1C)         startSound(183);
[13EA] (4C)         soundKludge([258,183,90]);
[13F5] (4C)         soundKludge([-1]);
[13FA] (72)         loadRoom(21);
[13FC] (62)         stopScript(1);
[13FE] (**)       }
[13FE] (48)       if (Local[0] == 4063) {
[1405] (62)         stopScript(75);
[1407] (25)         pickupObject(586,48);
[140B] (5D)         setClass(586,[145]);
[1412] (07)         setState(583,1);
[1416] (1A)         Var[238] = 2;
[141B] (1A)         Bit[17] = 1;
[1420] (1A)         Bit[36] = 1;
[1425] (72)         loadRoom(21);
[1427] (62)         stopScript(0);
[1429] (**)       }
[1429] (48)       if (Local[0] == 1102) {
[1430] (1A)         Bit[69] = 1;
[1435] (72)         loadRoom(7);
[1437] (0A)         startScript(207,[117]);
[143D] (5D)         setClass(117,[160]);
[1444] (1A)         Var[315] = 2;
[1449] (1A)         Var[316] = 2;
[144E] (1A)         Bit[74] = 1;
[1453] (1A)         Bit[211] = 1;
[1458] (1A)         Bit[17] = 1;
[145D] (1A)         Bit[86] = 0;
[1462] (25)         pickupObject(20,1);
[1466] (29)         setOwnerOf(20,1);
[146A] (1A)         Var[233] = 2;
[146F] (1A)         VAR_ROOM = 75;
[1474] (72)         loadRoom(2);
[1476] (**)       }
[1476] (48)       if (Local[0] == 1103) {
[147D] (1A)         Bit[69] = 1;
[1482] (1A)         Var[315] = 2;
[1487] (1A)         Var[316] = 2;
[148C] (1A)         Bit[74] = 1;
[1491] (1A)         Bit[211] = 1;
[1496] (1A)         Bit[17] = 1;
[149B] (1A)         Bit[86] = 0;
[14A0] (25)         pickupObject(20,1);
[14A4] (1A)         Var[233] = 1;
[14A9] (1A)         Bit[218] = 1;
[14AE] (1A)         VAR_ROOM = 62;
[14B3] (72)         loadRoom(2);
[14B5] (07)         setState(75,3);
[14B9] (07)         setState(115,1);
[14BD] (5D)         setClass(131,[32]);
[14C4] (07)         setState(132,1);
[14C8] (5D)         setClass(132,[32]);
[14CF] (07)         setState(130,1);
[14D3] (5D)         setClass(130,[32]);
[14DA] (07)         setState(115,1);
[14DE] (16)         Var[233] = getRandomNr(4);
[14E2] (5A)         Var[233] += 1;
[14E7] (1A)         Local[1] = 104;
[14EC] (87)         setState(Local[1],0);
[14F0] (DD)         setClass(Local[1],[32]);
[14F7] (46)         Local[1]++;
[14FA] (44)         unless (Local[1] > 108) goto 14EC;
[1501] (5D)         setClass(116,[145]);
[1508] (5D)         setClass(117,[146]);
[150F] (**)       }
[150F] (48)       if (Local[0] == 1104) {
[1516] (13)         ActorOps(1,[Costume(2)]);
[151B] (1A)         Bit[69] = 1;
[1520] (1A)         Var[315] = 2;
[1525] (1A)         Var[316] = 2;
[152A] (1A)         Bit[74] = 1;
[152F] (1A)         Bit[17] = 1;
[1534] (25)         pickupObject(20,1);
[1538] (1A)         Bit[87 + 8] = 1;
[153F] (2D)         putActorInRoom(1,2);
[1542] (01)         putActor(1,350,130);
[1548] (72)         loadRoom(2);
[154A] (**)       }
[154A] (48)       if (Local[0] == 1111) {
[1551] (1A)         Var[316] = 2;
[1556] (1A)         Var[315] = 2;
[155B] (25)         pickupObject(23,1);
[155F] (25)         pickupObject(141,10);
[1563] (1A)         Var[313] = 1;
[1568] (72)         loadRoom(12);
[156A] (**)       }
[156A] (48)       if (Local[0] == 1112) {
[1571] (1A)         Var[316] = 2;
[1576] (1A)         Var[315] = 2;
[157B] (25)         pickupObject(23,1);
[157F] (1A)         Var[313] = 1;
[1584] (72)         loadRoom(15);
[1586] (1A)         Bit[17] = 1;
[158B] (62)         stopScript(0);
[158D] (**)       }
[158D] (48)       if (Local[0] == 1120) {
[1594] (1A)         Var[238] = 1;
[1599] (1A)         VAR_ROOM = 65;
[159E] (25)         pickupObject(20,1);
[15A2] (25)         pickupObject(868,65);
[15A6] (54)         setObjectName(868,"map");
[15AD] (29)         setOwnerOf(937,1);
[15B1] (1A)         Var[250] = 138;
[15B6] (72)         loadRoom(130);
[15B8] (**)       }
[15B8] (48)       if (Local[0] == 1123) {
[15BF] (1A)         Var[238] = 1;
[15C4] (1A)         VAR_ROOM = 67;
[15C9] (25)         pickupObject(20,1);
[15CD] (25)         pickupObject(868,65);
[15D1] (25)         pickupObject(934,68);
[15D5] (54)         setObjectName(868,"map");
[15DC] (29)         setOwnerOf(937,1);
[15E0] (72)         loadRoom(130);
[15E2] (**)       }
[15E2] (48)       if (Local[0] == 1122) {
[15E9] (1A)         Var[238] = 2;
[15EE] (1A)         VAR_ROOM = 65;
[15F3] (25)         pickupObject(20,1);
[15F7] (25)         pickupObject(868,65);
[15FB] (54)         setObjectName(868,"map");
[1602] (29)         setOwnerOf(937,1);
[1606] (72)         loadRoom(130);
[1608] (**)       }
[1608] (48)       unless (Local[0] == 1121) goto 160F;
[160F] (48)       if (Local[0] == 1130) {
[1616] (1A)         Var[238] = 3;
[161B] (25)         pickupObject(20,1);
[161F] (25)         pickupObject(934,68);
[1623] (25)         pickupObject(311,29);
[1627] (2D)         putActorInRoom(1,130);
[162A] (01)         putActor(1,0,0);
[1630] (1A)         VAR_ROOM = 80;
[1635] (25)         pickupObject(868,65);
[1639] (54)         setObjectName(868,"map");
[1640] (29)         setOwnerOf(937,1);
[1644] (72)         loadRoom(130);
[1646] (1A)         Bit[17] = 1;
[164B] (**)       }
[164B] (48)       if (Local[0] == 6665) {
[1652] (1A)         Var[238] = 2;
[1657] (1A)         Bit[210] = 1;
[165C] (29)         setOwnerOf(937,1);
[1660] (25)         pickupObject(20,1);
[1664] (29)         setOwnerOf(20,1);
[1668] (2D)         putActorInRoom(1,67);
[166B] (0E)         putActorAtObject(1,920);
[166F] (**)       }
[166F] (48)       if (Local[0] == 6666) {
[1676] (1A)         Var[238] = 1;
[167B] (1A)         Bit[210] = 1;
[1680] (25)         pickupObject(20,1);
[1684] (69)         setOwnerOf(937,VAR_EGO);
[1689] (2D)         putActorInRoom(1,67);
[168C] (0E)         putActorAtObject(1,920);
[1690] (**)       }
[1690] (48)       if (Local[0] == 6667) {
[1697] (1A)         Var[238] = 3;
[169C] (1A)         Bit[87 + 4] = 1;
[16A3] (1A)         Bit[210] = 1;
[16A8] (25)         pickupObject(934,68);
[16AC] (69)         setOwnerOf(937,VAR_EGO);
[16B1] (0A)         startScript(10,[]);
[16B4] (2D)         putActorInRoom(1,73);
[16B7] (0E)         putActorAtObject(1,996);
[16BB] (**)       }
[16BB] (48)       if (Local[0] == 6668) {
[16C2] (1A)         Var[238] = 3;
[16C7] (25)         pickupObject(934,68);
[16CB] (1A)         Bit[355] = 1;
[16D0] (72)         loadRoom(32);
[16D2] (**)       }
[16D2] (48)       if (Local[0] == 6669) {
[16D9] (1A)         Var[238] = 1;
[16DE] (25)         pickupObject(934,68);
[16E2] (2D)         putActorInRoom(1,130);
[16E5] (01)         putActor(1,0,0);
[16EB] (1A)         Bit[87 + 7] = 1;
[16F2] (72)         loadRoom(130);
[16F4] (**)       }
[16F4] (48)       if (Local[0] == 5555) {
[16FB] (1A)         Var[238] = 3;
[1700] (13)         ActorOps(1,[Costume(2)]);
[1705] (25)         pickupObject(863,64);
[1709] (1A)         Bit[210] = 1;
[170E] (1A)         Bit[17] = 1;
[1713] (1A)         Var[224] = 75;
[1718] (1A)         Var[315] = 27;
[171D] (1A)         Var[316] = 3;
[1722] (1A)         Bit[87 + 5] = 1;
[1729] (1A)         Bit[87 + 4] = 1;
[1730] (2D)         putActorInRoom(2,28);
[1733] (01)         putActor(2,0,0);
[1739] (2D)         putActorInRoom(1,27);
[173C] (01)         putActor(1,0,135);
[1742] (72)         loadRoom(27);
[1744] (**)       }
[1744] (48)       if (Local[0] == 5560) {
[174B] (1A)         Var[238] = 1;
[1750] (1A)         Bit[210] = 1;
[1755] (29)         setOwnerOf(934,1);
[1759] (1A)         Var[315] = 27;
[175E] (1A)         Var[316] = 3;
[1763] (1A)         Bit[87 + 5] = 1;
[176A] (1A)         Bit[87 + 4] = 1;
[1771] (2D)         putActorInRoom(2,27);
[1774] (01)         putActor(2,0,0);
[177A] (2D)         putActorInRoom(1,27);
[177D] (01)         putActor(1,200,100);
[1783] (72)         loadRoom(27);
[1785] (**)       }
[1785] (48)       if (Local[0] == 5561) {
[178C] (1A)         Var[238] = 2;
[1791] (1A)         Bit[210] = 1;
[1796] (2D)         putActorInRoom(1,27);
[1799] (01)         putActor(1,200,100);
[179F] (25)         pickupObject(934,68);
[17A3] (1A)         Var[315] = 27;
[17A8] (1A)         Var[316] = 3;
[17AD] (1A)         Bit[87 + 5] = 1;
[17B4] (1A)         Bit[87 + 4] = 1;
[17BB] (2D)         putActorInRoom(2,27);
[17BE] (01)         putActor(2,0,0);
[17C4] (2D)         putActorInRoom(1,27);
[17C7] (01)         putActor(1,200,100);
[17CD] (72)         loadRoom(27);
[17CF] (**)       }
[17CF] (48)       if (Local[0] == 5562) {
[17D6] (1A)         Var[238] = 2;
[17DB] (1A)         Bit[210] = 1;
[17E0] (2D)         putActorInRoom(1,27);
[17E3] (01)         putActor(1,200,100);
[17E9] (25)         pickupObject(20,1);
[17ED] (25)         pickupObject(926,67);
[17F1] (29)         setOwnerOf(926,1);
[17F5] (1A)         Bit[226] = 1;
[17FA] (1A)         Bit[227] = 1;
[17FF] (1A)         Var[315] = 27;
[1804] (1A)         Var[316] = 3;
[1809] (1A)         Bit[87 + 5] = 1;
[1810] (1A)         Bit[87 + 4] = 1;
[1817] (2D)         putActorInRoom(1,27);
[181A] (01)         putActor(1,200,100);
[1820] (1A)         VAR_ROOM = 75;
[1825] (72)         loadRoom(27);
[1827] (**)       }
[1827] (48)       if (Local[0] == 5999) {
[182E] (1A)         Var[238] = 2;
[1833] (1A)         Bit[210] = 1;
[1838] (29)         setOwnerOf(937,1);
[183C] (25)         pickupObject(20,1);
[1840] (29)         setOwnerOf(20,1);
[1844] (25)         pickupObject(1014,73);
[1848] (29)         setOwnerOf(1014,1);
[184C] (25)         pickupObject(593,49);
[1850] (29)         setOwnerOf(593,1);
[1854] (25)         pickupObject(595,49);
[1858] (29)         setOwnerOf(595,1);
[185C] (25)         pickupObject(591,49);
[1860] (29)         setOwnerOf(591,1);
[1864] (2D)         putActorInRoom(1,69);
[1867] (0E)         putActorAtObject(1,940);
[186B] (**)       }
[186B] (48)       if (Local[0] == 8888) {
[1872] (2D)         putActorInRoom(1,70);
[1875] (01)         putActor(1,0,0);
[187B] (1A)         Var[238] = 2;
[1880] (1A)         Bit[210] = 1;
[1885] (25)         pickupObject(926,67);
[1889] (29)         setOwnerOf(926,8);
[188D] (72)         loadRoom(70);
[188F] (13)         ActorOps(1,[Costume(2)]);
[1894] (**)       }
[1894] (48)       if (Local[0] == 8889) {
[189B] (13)         ActorOps(1,[Costume(2)]);
[18A0] (1A)         Var[281] = 0;
[18A5] (5D)         setClass(968,[6]);
[18AC] (5D)         setClass(969,[6]);
[18B3] (1A)         Bit[252] = 1;
[18B8] (29)         setOwnerOf(937,1);
[18BC] (1A)         Var[279] = 5;
[18C1] (1A)         Var[280] = 6;
[18C6] (25)         pickupObject(926,67);
[18CA] (5D)         setClass(926,[6]);
[18D1] (2D)         putActorInRoom(6,70);
[18D4] (01)         putActor(6,125,65);
[18DA] (1A)         Var[238] = 2;
[18DF] (1A)         Bit[210] = 1;
[18E4] (1A)         Bit[87 + 4] = 1;
[18EB] (72)         loadRoom(70);
[18ED] (**)       }
[18ED] (48)       if (Local[0] == 8890) {
[18F4] (13)         ActorOps(1,[Costume(2)]);
[18F9] (1A)         Var[281] = 0;
[18FE] (5D)         setClass(968,[6]);
[1905] (5D)         setClass(969,[6]);
[190C] (1A)         Bit[252] = 1;
[1911] (1A)         Var[279] = 5;
[1916] (1A)         Var[280] = 6;
[191B] (2D)         putActorInRoom(6,70);
[191E] (01)         putActor(6,125,65);
[1924] (1A)         Var[238] = 2;
[1929] (1A)         Bit[210] = 1;
[192E] (25)         pickupObject(934,68);
[1932] (0A)         startScript(10,[]);
[1935] (72)         loadRoom(70);
[1937] (**)       }
[1937] (48)       if (Local[0] == 5885) {
[193E] (1A)         Bit[74] = 1;
[1943] (1A)         Var[315] = 76;
[1948] (1A)         Var[316] = 2;
[194D] (25)         pickupObject(20,1);
[1951] (1A)         Bit[87 + 8] = 1;
[1958] (1A)         Bit[87 + 3] = 1;
[195F] (1A)         Bit[87 + 1] = 1;
[1966] (2D)         putActorInRoom(2,76);
[1969] (01)         putActor(2,0,0);
[196F] (2D)         putActorInRoom(1,76);
[1972] (01)         putActor(1,0,0);
[1978] (1A)         Bit[17] = 1;
[197D] (72)         loadRoom(76);
[197F] (**)       }
[197F] (48)       if (Local[0] == 5886) {
[1986] (1A)         Bit[74] = 1;
[198B] (1A)         Var[315] = 76;
[1990] (1A)         Var[316] = 2;
[1995] (25)         pickupObject(20,1);
[1999] (25)         pickupObject(277,26);
[199D] (54)         setObjectName(277,"eel figurine");
[19AD] (1A)         Bit[137] = 1;
[19B2] (1A)         Bit[87 + 8] = 1;
[19B9] (1A)         Bit[87 + 3] = 1;
[19C0] (1A)         Bit[87 + 1] = 1;
[19C7] (2D)         putActorInRoom(2,76);
[19CA] (01)         putActor(2,0,0);
[19D0] (2D)         putActorInRoom(1,76);
[19D3] (01)         putActor(1,0,0);
[19D9] (1A)         Bit[17] = 1;
[19DE] (72)         loadRoom(76);
[19E0] (**)       }
[19E0] (48)       if (Local[0] == 5563) {
[19E7] (1A)         Var[315] = 29;
[19EC] (1A)         Var[316] = 3;
[19F1] (1A)         Bit[87 + 5] = 1;
[19F8] (1A)         Bit[87 + 4] = 1;
[19FF] (1A)         Var[238] = 3;
[1A04] (1A)         Bit[210] = 1;
[1A09] (25)         pickupObject(310,29);
[1A0D] (25)         pickupObject(311,29);
[1A11] (25)         pickupObject(23,1);
[1A15] (69)         setOwnerOf(937,VAR_EGO);
[1A1A] (25)         pickupObject(20,1);
[1A1E] (25)         pickupObject(934,68);
[1A22] (0A)         startScript(10,[]);
[1A25] (2D)         putActorInRoom(1,80);
[1A28] (01)         putActor(1,0,0);
[1A2E] (2D)         putActorInRoom(2,80);
[1A31] (01)         putActor(2,0,0);
[1A37] (25)         pickupObject(868,65);
[1A3B] (54)         setObjectName(868,"map");
[1A42] (1C)         startSound(66);
[1A44] (1C)         startSound(67);
[1A46] (1C)         startSound(68);
[1A48] (1C)         startSound(69);
[1A4A] (4C)         soundKludge([-1]);
[1A4F] (4C)         soundKludge([269,66,90,800]);
[1A5D] (4C)         soundKludge([269,67,90,800]);
[1A6B] (4C)         soundKludge([269,68,90,800]);
[1A79] (4C)         soundKludge([269,69,90,800]);
[1A87] (**)       }
[1A87] (48)       if (Local[0] == 5564) {
[1A8E] (1A)         Var[315] = 29;
[1A93] (1A)         Var[316] = 3;
[1A98] (1A)         Bit[87 + 5] = 1;
[1A9F] (1A)         Bit[87 + 4] = 1;
[1AA6] (1A)         Var[238] = 3;
[1AAB] (1A)         Bit[210] = 1;
[1AB0] (25)         pickupObject(310,29);
[1AB4] (0A)         startScript(10,[]);
[1AB7] (2D)         putActorInRoom(1,80);
[1ABA] (01)         putActor(1,0,0);
[1AC0] (2D)         putActorInRoom(2,80);
[1AC3] (01)         putActor(2,0,0);
[1AC9] (1C)         startSound(66);
[1ACB] (1C)         startSound(67);
[1ACD] (1C)         startSound(68);
[1ACF] (1C)         startSound(69);
[1AD1] (4C)         soundKludge([-1]);
[1AD6] (**)       }
[1AD6] (48)       if (Local[0] == 9554) {
[1ADD] (1A)         Var[315] = 29;
[1AE2] (1A)         Var[316] = 3;
[1AE7] (1A)         Var[238] = 3;
[1AEC] (1A)         Bit[17] = 1;
[1AF1] (1A)         Bit[210] = 1;
[1AF6] (25)         pickupObject(20,1);
[1AFA] (29)         setOwnerOf(937,1);
[1AFE] (25)         pickupObject(934,68);
[1B02] (2D)         putActorInRoom(1,64);
[1B05] (01)         putActor(1,32,106);
[1B0B] (2D)         putActorInRoom(2,64);
[1B0E] (01)         putActor(2,32,106);
[1B14] (2A)         startScript(31,[1,2,1],F);
[1B20] (1A)         Bit[87 + 4] = 1;
[1B27] (1A)         Bit[87 + 5] = 1;
[1B2E] (72)         loadRoom(64);
[1B30] (**)       }
[1B30] (48)       if (Local[0] == 9555) {
[1B37] (1A)         Var[315] = 29;
[1B3C] (1A)         Var[316] = 3;
[1B41] (25)         pickupObject(20,1);
[1B45] (25)         pickupObject(934,68);
[1B49] (29)         setOwnerOf(937,1);
[1B4D] (1A)         Var[238] = 3;
[1B52] (1A)         Bit[17] = 1;
[1B57] (1A)         Bit[210] = 1;
[1B5C] (2D)         putActorInRoom(1,64);
[1B5F] (01)         putActor(1,32,106);
[1B65] (2D)         putActorInRoom(2,64);
[1B68] (01)         putActor(2,32,106);
[1B6E] (2A)         startScript(31,[1,2,1],F);
[1B7A] (1A)         Bit[87 + 4] = 1;
[1B81] (1A)         Bit[87 + 5] = 1;
[1B88] (72)         loadRoom(64);
[1B8A] (**)       }
[1B8A] (48)       if (Local[0] == 9556) {
[1B91] (1A)         Var[315] = 29;
[1B96] (1A)         Var[316] = 3;
[1B9B] (1A)         Bit[87 + 5] = 1;
[1BA2] (1A)         Bit[87 + 4] = 1;
[1BA9] (1A)         Var[238] = 2;
[1BAE] (1A)         Bit[210] = 1;
[1BB3] (25)         pickupObject(286,27);
[1BB7] (29)         setOwnerOf(937,1);
[1BBB] (2D)         putActorInRoom(1,64);
[1BBE] (01)         putActor(1,32,106);
[1BC4] (72)         loadRoom(64);
[1BC6] (**)       }
[1BC6] (48)       if (Local[0] == 9557) {
[1BCD] (1A)         Var[315] = 29;
[1BD2] (1A)         Var[316] = 3;
[1BD7] (1A)         Bit[87 + 5] = 1;
[1BDE] (1A)         Bit[87 + 4] = 1;
[1BE5] (1A)         Var[238] = 1;
[1BEA] (1A)         Bit[210] = 1;
[1BEF] (72)         loadRoom(1);
[1BF1] (25)         pickupObject(20,0);
[1BF5] (29)         setOwnerOf(20,1);
[1BF9] (72)         loadRoom(27);
[1BFB] (25)         pickupObject(286,0);
[1BFF] (29)         setOwnerOf(286,1);
[1C03] (29)         setOwnerOf(865,6);
[1C07] (2D)         putActorInRoom(1,64);
[1C0A] (01)         putActor(1,32,106);
[1C10] (72)         loadRoom(64);
[1C12] (**)       }
[1C12] (48)       if (Local[0] == 9558) {
[1C19] (1A)         Var[315] = 29;
[1C1E] (1A)         Var[316] = 3;
[1C23] (1A)         Bit[87 + 5] = 1;
[1C2A] (1A)         Bit[87 + 4] = 1;
[1C31] (1A)         Var[238] = 3;
[1C36] (1A)         Bit[17] = 1;
[1C3B] (1A)         Bit[210] = 0;
[1C40] (1A)         Var[316] = 2;
[1C45] (2D)         putActorInRoom(1,64);
[1C48] (01)         putActor(1,32,106);
[1C4E] (2D)         putActorInRoom(2,64);
[1C51] (01)         putActor(2,32,106);
[1C57] (2A)         startScript(31,[1,2,1],F);
[1C63] (72)         loadRoom(64);
[1C65] (**)       }
[1C65] (48)       if (Local[0] == 9559) {
[1C6C] (1A)         Var[315] = 29;
[1C71] (1A)         Var[316] = 3;
[1C76] (1A)         Bit[87 + 5] = 1;
[1C7D] (1A)         Bit[87 + 4] = 1;
[1C84] (1A)         Var[238] = 2;
[1C89] (1A)         Bit[210] = 1;
[1C8E] (25)         pickupObject(286,27);
[1C92] (29)         setOwnerOf(937,1);
[1C96] (2D)         putActorInRoom(1,64);
[1C99] (01)         putActor(1,32,106);
[1C9F] (72)         loadRoom(64);
[1CA1] (**)       }
[1CA1] (48)       if (Local[0] == 5557) {
[1CA8] (25)         pickupObject(865,64);
[1CAC] (29)         setOwnerOf(865,6);
[1CB0] (1A)         Var[315] = 29;
[1CB5] (1A)         Var[316] = 3;
[1CBA] (1A)         Bit[87 + 5] = 1;
[1CC1] (1A)         Bit[87 + 4] = 1;
[1CC8] (25)         pickupObject(20,1);
[1CCC] (1A)         Var[238] = 1;
[1CD1] (1A)         Bit[210] = 1;
[1CD6] (2D)         putActorInRoom(1,78);
[1CD9] (01)         putActor(1,200,100);
[1CDF] (**)       }
[1CDF] (48)       if (Local[0] == 5559) {
[1CE6] (1A)         Var[315] = 29;
[1CEB] (1A)         Var[316] = 3;
[1CF0] (1A)         Bit[87 + 5] = 1;
[1CF7] (1A)         Bit[87 + 4] = 1;
[1CFE] (1A)         Var[238] = 2;
[1D03] (1A)         Bit[210] = 1;
[1D08] (72)         loadRoom(1);
[1D0A] (25)         pickupObject(20,0);
[1D0E] (24)         loadRoomWithEgo(866,65,-1,-1);
[1D16] (**)       }
[1D16] (48)       if (Local[0] == 5558) {
[1D1D] (1A)         Var[238] = 3;
[1D22] (1A)         Var[315] = 29;
[1D27] (1A)         Var[316] = 3;
[1D2C] (1A)         Bit[87 + 5] = 1;
[1D33] (1A)         Bit[87 + 4] = 1;
[1D3A] (1A)         Var[238] = 2;
[1D3F] (1A)         Bit[210] = 1;
[1D44] (2D)         putActorInRoom(1,29);
[1D47] (01)         putActor(1,200,100);
[1D4D] (**)       }
[1D4D] (48)       if (Local[0] == 666) {
[1D54] (1A)         Var[316] = 2;
[1D59] (1A)         Var[315] = 76;
[1D5E] (72)         loadRoom(1);
[1D60] (25)         pickupObject(20,0);
[1D64] (24)         loadRoomWithEgo(1035,76,-1,-1);
[1D6C] (**)       }
[1D6C] (48)       if (Local[0] == 668) {
[1D73] (1A)         Var[316] = 2;
[1D78] (1A)         Var[315] = 76;
[1D7D] (72)         loadRoom(1);
[1D7F] (25)         pickupObject(20,0);
[1D83] (1A)         Bit[150] = 1;
[1D88] (24)         loadRoomWithEgo(1035,76,-1,-1);
[1D90] (**)       }
[1D90] (48)       if (Local[0] == 2728) {
[1D97] (1A)         Var[316] = 2;
[1D9C] (1A)         Var[315] = 27;
[1DA1] (25)         pickupObject(20,1);
[1DA5] (25)         pickupObject(863,64);
[1DA9] (1A)         Var[238] = 3;
[1DAE] (1A)         Bit[210] = 1;
[1DB3] (24)         loadRoomWithEgo(282,27,92,141);
[1DBB] (**)       }
[1DBB] (48)       if (Local[0] == 667) {
[1DC2] (13)         ActorOps(11,[Costume(62)]);
[1DC7] (1A)         Var[316] = 2;
[1DCC] (1A)         Var[315] = 76;
[1DD1] (72)         loadRoom(1);
[1DD3] (25)         pickupObject(20,0);
[1DD7] (72)         loadRoom(76);
[1DD9] (24)         loadRoomWithEgo(1052,77,-1,-1);
[1DE1] (**)       }
[1DE1] (48)       if (Local[0] == 4950) {
[1DE8] (1A)         Bit[37 + 19] = 1;
[1DEF] (1A)         Bit[37 + 20] = 1;
[1DF6] (1A)         Bit[37 + 21] = 1;
[1DFD] (1A)         Bit[37 + 22] = 1;
[1E04] (5D)         setClass(479,[12]);
[1E0B] (1A)         Local[0] = 0;
[1E10] (1A)         Var[300] = 1;
[1E15] (72)         loadRoom(66);
[1E17] (**)       }
[1E17] (48)       if (Local[0] == 4951) {
[1E1E] (1A)         Bit[37 + 19] = 1;
[1E25] (1A)         Bit[37 + 20] = 1;
[1E2C] (1A)         Bit[37 + 21] = 1;
[1E33] (1A)         Bit[37 + 22] = 1;
[1E3A] (5D)         setClass(479,[12]);
[1E41] (1A)         Local[0] = 0;
[1E46] (1A)         Var[300] = 2;
[1E4B] (72)         loadRoom(66);
[1E4D] (**)       }
[1E4D] (48)       if (Local[0] == 4952) {
[1E54] (1A)         Bit[37 + 19] = 1;
[1E5B] (1A)         Bit[37 + 20] = 1;
[1E62] (1A)         Bit[37 + 21] = 1;
[1E69] (1A)         Bit[37 + 22] = 1;
[1E70] (5D)         setClass(479,[12]);
[1E77] (1A)         Local[0] = 0;
[1E7C] (1A)         Var[300] = 3;
[1E81] (72)         loadRoom(66);
[1E83] (**)       }
[1E83] (48)       if (Local[0] == 4953) {
[1E8A] (1A)         Bit[37 + 19] = 1;
[1E91] (1A)         Bit[37 + 20] = 1;
[1E98] (1A)         Bit[37 + 21] = 1;
[1E9F] (1A)         Bit[37 + 22] = 1;
[1EA6] (5D)         setClass(479,[12]);
[1EAD] (1A)         Local[0] = 0;
[1EB2] (1A)         Var[300] = 4;
[1EB7] (72)         loadRoom(66);
[1EB9] (**)       }
[1EB9] (48)       if (Local[0] == 4954) {
[1EC0] (1A)         Bit[37 + 19] = 1;
[1EC7] (1A)         Bit[37 + 20] = 1;
[1ECE] (1A)         Bit[37 + 21] = 1;
[1ED5] (1A)         Bit[37 + 22] = 1;
[1EDC] (5D)         setClass(479,[12]);
[1EE3] (1A)         Local[0] = 0;
[1EE8] (1A)         Var[300] = 5;
[1EED] (72)         loadRoom(66);
[1EEF] (**)       }
[1EEF] (48)       if (Local[0] == 4955) {
[1EF6] (1A)         Bit[37 + 19] = 1;
[1EFD] (1A)         Bit[37 + 20] = 1;
[1F04] (1A)         Bit[37 + 21] = 1;
[1F0B] (1A)         Bit[37 + 22] = 1;
[1F12] (5D)         setClass(479,[12]);
[1F19] (1A)         Local[0] = 0;
[1F1E] (1A)         Var[300] = 6;
[1F23] (72)         loadRoom(66);
[1F25] (**)       }
[1F25] (48)       if (Local[0] == 4956) {
[1F2C] (1A)         Bit[37 + 19] = 1;
[1F33] (1A)         Bit[37 + 20] = 1;
[1F3A] (1A)         Bit[37 + 21] = 1;
[1F41] (1A)         Bit[37 + 22] = 1;
[1F48] (5D)         setClass(479,[12]);
[1F4F] (25)         pickupObject(20,1);
[1F53] (1A)         Local[0] = 0;
[1F58] (1A)         Var[300] = 7;
[1F5D] (72)         loadRoom(66);
[1F5F] (**)       }
[1F5F] (48)       if (Local[0] == 4957) {
[1F66] (1A)         Bit[37 + 19] = 1;
[1F6D] (1A)         Bit[37 + 20] = 1;
[1F74] (1A)         Bit[37 + 21] = 1;
[1F7B] (1A)         Bit[37 + 22] = 1;
[1F82] (5D)         setClass(479,[12]);
[1F89] (1A)         Local[0] = 0;
[1F8E] (1A)         Var[300] = 8;
[1F93] (72)         loadRoom(66);
[1F95] (**)       }
[1F95] (48)       if (Local[0] == 4958) {
[1F9C] (1A)         Bit[37 + 19] = 1;
[1FA3] (1A)         Bit[37 + 20] = 1;
[1FAA] (1A)         Bit[37 + 21] = 1;
[1FB1] (1A)         Bit[37 + 22] = 1;
[1FB8] (5D)         setClass(479,[12]);
[1FBF] (1A)         Local[0] = 0;
[1FC4] (1A)         Var[300] = 9;
[1FC9] (72)         loadRoom(66);
[1FCB] (**)       }
[1FCB] (48)       if (Local[0] == 5000) {
[1FD2] (1A)         Var[316] = 2;
[1FD7] (72)         loadRoom(1);
[1FD9] (25)         pickupObject(20,0);
[1FDD] (2D)         putActorInRoom(1,149);
[1FE0] (01)         putActor(1,140,110);
[1FE6] (72)         loadRoom(149);
[1FE8] (1A)         Local[0] = 149;
[1FED] (**)       }
[1FED] (48)       if (Local[0] == 5001) {
[1FF4] (1A)         Var[238] = 2;
[1FF9] (1A)         Var[316] = 2;
[1FFE] (72)         loadRoom(72);
[2000] (25)         pickupObject(985,0);
[2004] (69)         setOwnerOf(985,VAR_EGO);
[2009] (37)         startObject(985,3,[]);
[200E] (72)         loadRoom(1);
[2010] (25)         pickupObject(20,0);
[2014] (69)         setOwnerOf(20,VAR_EGO);
[2019] (72)         loadRoom(73);
[201B] (69)         setOwnerOf(1012,VAR_EGO);
[2020] (72)         loadRoom(52);
[2022] (25)         pickupObject(700,52);
[2026] (25)         pickupObject(702,52);
[202A] (25)         pickupObject(701,52);
[202E] (69)         setOwnerOf(700,VAR_EGO);
[2033] (69)         setOwnerOf(702,VAR_EGO);
[2038] (69)         setOwnerOf(701,VAR_EGO);
[203D] (37)         startObject(933,250,[25]);
[2045] (13)         ActorOps(1,[Costume(2)]);
[204A] (2D)         putActorInRoom(1,56);
[204D] (01)         putActor(1,140,110);
[2053] (72)         loadRoom(56);
[2055] (**)       }
[2055] (48)       if (Local[0] == 5002) {
[205C] (1A)         Var[316] = 2;
[2061] (1A)         Var[315] = 2;
[2066] (25)         pickupObject(23,1);
[206A] (1A)         Var[313] = 1;
[206F] (1A)         VAR_ROOM = 75;
[2074] (13)         ActorOps(1,[Costume(1)]);
[2079] (72)         loadRoom(10);
[207B] (**)       }
[207B] (48)       if (Local[0] == 5003) {
[2082] (1A)         Var[316] = 2;
[2087] (1A)         Var[315] = 2;
[208C] (1A)         Var[238] = 1;
[2091] (13)         ActorOps(1,[Costume(2)]);
[2096] (25)         pickupObject(934,68);
[209A] (72)         loadRoom(1);
[209C] (25)         pickupObject(20,0);
[20A0] (72)         loadRoom(73);
[20A2] (25)         pickupObject(1001,0);
[20A6] (25)         pickupObject(501,43);
[20AA] (0A)         startScript(10,[]);
[20AD] (72)         loadRoom(75);
[20AF] (72)         loadRoom(33);
[20B1] (**)       }
[20B1] (48)       if (Local[0] == 5005) {
[20B8] (1A)         Var[238] = 3;
[20BD] (1A)         Var[316] = 2;
[20C2] (25)         pickupObject(985,72);
[20C6] (37)         startObject(985,3,[]);
[20CB] (72)         loadRoom(1);
[20CD] (25)         pickupObject(20,1);
[20D1] (29)         setOwnerOf(938,2);
[20D5] (25)         pickupObject(934,68);
[20D9] (25)         pickupObject(935,68);
[20DD] (25)         pickupObject(1001,73);
[20E1] (25)         pickupObject(1012,73);
[20E5] (25)         pickupObject(830,60);
[20E9] (5D)         setClass(830,[8]);
[20F0] (37)         startObject(933,250,[25]);
[20F8] (13)         ActorOps(1,[Costume(2)]);
[20FD] (2D)         putActorInRoom(1,57);
[2100] (01)         putActor(1,120,120);
[2106] (2D)         putActorInRoom(2,57);
[2109] (01)         putActor(2,70,110);
[210F] (2A)         startScript(31,[1,2,1],F);
[211B] (72)         loadRoom(57);
[211D] (**)       }
[211D] (48)       if (Local[0] == 1162) {
[2124] (1A)         Var[316] = 3;
[2129] (1A)         Var[315] = 15;
[212E] (1A)         Bit[74] = 1;
[2133] (07)         setState(75,3);
[2137] (07)         setState(115,1);
[213B] (5D)         setClass(131,[32]);
[2142] (07)         setState(132,1);
[2146] (5D)         setClass(132,[32]);
[214D] (07)         setState(130,1);
[2151] (5D)         setClass(130,[32]);
[2158] (07)         setState(115,1);
[215C] (AC)         Exprmode Var[444] = (5 - 1);
[2167] (AC)         Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[2175] (9A)         Var[234] = Var[444];
[217A] (1A)         Local[1] = 0;
[217F] (AC)         Exprmode Var[444] = (5 - 1);
[218A] (AC)         Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[2198] (88)         if (Var[444] != Var[234]) {
[219F] (9A)           Var[235] = Var[444];
[21A4] (1A)           Local[1] = 1;
[21A9] (**)         }
[21A9] (A8)         unless (Local[1]) goto 217F;
[21AE] (1A)         Local[1] = 0;
[21B3] (AC)         Exprmode Var[444] = (5 - 1);
[21BE] (AC)         Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[21CC] (88)         if (Var[444] != Var[234]) {
[21D3] (88)           if (Var[444] != Var[235]) {
[21DA] (9A)             Var[236] = Var[444];
[21DF] (1A)             Local[1] = 1;
[21E4] (**)           }
[21E4] (**)         }
[21E4] (A8)         unless (Local[1]) goto 21B3;
[21E9] (48)         if (Var[233] == 1) {
[21F0] (27)           PutCodeInString(39, "Ashkenazy");
[21FD] (48)         } else if (Var[233] == 2) {
[2207] (27)           PutCodeInString(39, "Dunlop");
[2211] (48)         } else if (Var[233] == 3) {
[221B] (27)           PutCodeInString(39, "Pearce");
[2225] (48)         } else if (Var[233] == 4) {
[222F] (27)           PutCodeInString(39, "Sprague");
[223A] (48)         } else if (Var[233] == 5) {
[2244] (27)           PutCodeInString(39, "Ward");
[224C] (18)           /* goto 224F; */
[224F] (**)         }
[224F] (1A)         Bit[218] = 1;
[2254] (9A)         Var[233] = Var[235];
[2259] (27)         PutCodeInString(39, "Ashkenazy");
[2266] (1A)         Var[442] = 116;
[226B] (DD)         setClass(Var[442],[134]);
[2272] (46)         Var[442]++;
[2275] (44)         unless (Var[442] > 119) goto 226B;
[227C] (16)         Var[442] = getRandomNr(3);
[2280] (5A)         Var[442] += 116;
[2285] (DD)         setClass(Var[442],[145]);
[228C] (DD)         setClass(Var[442],[6]);
[2293] (16)         Var[443] = getRandomNr(3);
[2297] (5A)         Var[443] += 116;
[229C] (88)         unless (Var[442] != Var[443]) goto 2293;
[22A3] (DD)         setClass(Var[443],[146]);
[22AA] (DD)         setClass(Var[443],[6]);
[22B1] (72)         loadRoom(62);
[22B3] (62)         stopScript(0);
[22B5] (**)       }
[22B5] (48)       if (Local[0] == 1181) {
[22BC] (1A)         Bit[211] = 1;
[22C1] (25)         pickupObject(20,1);
[22C5] (29)         setOwnerOf(937,1);
[22C9] (13)         ActorOps(1,[Costume(2)]);
[22CE] (1A)         Bit[74] = 1;
[22D3] (1A)         Var[233] = 2;
[22D8] (27)         PutCodeInString(39, "Ashkenazy");
[22E5] (1A)         Var[315] = 2;
[22EA] (1A)         Var[316] = 2;
[22EF] (1A)         Var[233] = 2;
[22F4] (25)         pickupObject(310,29);
[22F8] (25)         pickupObject(311,29);
[22FC] (25)         pickupObject(23,1);
[2300] (25)         pickupObject(934,68);
[2304] (72)         loadRoom(1);
[2306] (**)       }
[2306] (48)       if (Local[0] == 6000) {
[230D] (1A)         Bit[69] = 0;
[2312] (1A)         Var[316] = 2;
[2317] (2D)         putActorInRoom(1,0);
[231A] (1A)         Var[315] = 2;
[231F] (**)       }
[231F] (48)       if (Local[0] == 6001) {
[2326] (1A)         Bit[69] = 0;
[232B] (1A)         Var[316] = 2;
[2330] (1A)         Var[315] = 2;
[2335] (2D)         putActorInRoom(1,5);
[2338] (01)         putActor(1,200,120);
[233E] (**)       }
[233E] (48)       if (Local[0] == 6002) {
[2345] (1A)         Bit[69] = 0;
[234A] (1A)         Var[316] = 2;
[234F] (1A)         Var[315] = 2;
[2354] (24)         loadRoomWithEgo(103,6,-1,-1);
[235C] (**)       }
[235C] (48)       if (Local[0] == 6003) {
[2363] (1A)         Bit[69] = 0;
[2368] (1A)         Var[316] = 2;
[236D] (1A)         Var[315] = 2;
[2372] (24)         loadRoomWithEgo(113,7,-1,-1);
[237A] (**)       }
[237A] (48)       if (Local[0] == 6004) {
[2381] (1A)         Bit[69] = 0;
[2386] (1A)         Var[316] = 2;
[238B] (1A)         Var[315] = 2;
[2390] (24)         loadRoomWithEgo(41,3,-1,-1);
[2398] (**)       }
[2398] (48)       if (Local[0] == 6005) {
[239F] (1A)         Var[316] = 2;
[23A4] (1A)         Var[315] = 2;
[23A9] (13)         ActorOps(1,[Costume(0)]);
[23AE] (2D)         putActorInRoom(1,19);
[23B1] (01)         putActor(1,160,0);
[23B7] (72)         loadRoom(19);
[23B9] (**)       }
[23B9] (48)       if (Local[0] == 8100) {
[23C0] (1A)         Var[315] = 2;
[23C5] (13)         ActorOps(1,[Costume(0)]);
[23CA] (2D)         putActorInRoom(1,81);
[23CD] (01)         putActor(1,160,0);
[23D3] (72)         loadRoom(81);
[23D5] (**)       }
[23D5] (48)       if (Local[0] == 9000) {
[23DC] (1A)         Var[316] = 2;
[23E1] (1A)         Var[238] = 2;
[23E6] (72)         loadRoom(1);
[23E8] (25)         pickupObject(20,0);
[23EC] (2D)         putActorInRoom(1,27);
[23EF] (01)         putActor(1,150,80);
[23F5] (**)       }
[23F5] (48)       if (Local[0] == 9001) {
[23FC] (1A)         Var[238] = 2;
[2401] (13)         ActorOps(1,[Costume(2)]);
[2406] (13)         ActorOps(11,[Costume(32)]);
[240B] (13)         ActorOps(12,[Costume(32)]);
[2410] (1A)         Var[283] = 223;
[2415] (72)         loadRoom(71);
[2417] (**)       }
[2417] (48)       if (Local[0] == 2920) {
[241E] (25)         pickupObject(934,68);
[2422] (72)         loadRoom(73);
[2424] (25)         pickupObject(1001,0);
[2428] (72)         loadRoom(43);
[242A] (25)         pickupObject(501,0);
[242E] (1A)         Var[238] = 3;
[2433] (2D)         putActorInRoom(2,43);
[2436] (0E)         putActorAtObject(2,521);
[243A] (2D)         putActorInRoom(1,43);
[243D] (0E)         putActorAtObject(1,521);
[2441] (14)         print(255,[Text("You're on the TRUST PATH.")]);
[245E] (**)       }
[245E] (48)       if (Local[0] == 3838) {
[2465] (25)         pickupObject(934,68);
[2469] (25)         pickupObject(935,68);
[246D] (25)         pickupObject(936,68);
[2471] (69)         setOwnerOf(937,VAR_EGO);
[2476] (25)         pickupObject(830,60);
[247A] (25)         pickupObject(20,1);
[247E] (25)         pickupObject(1001,73);
[2482] (25)         pickupObject(1012,73);
[2486] (1A)         Var[412] = 2;
[248B] (2D)         putActorInRoom(1,157);
[248E] (01)         putActor(1,160,130);
[2494] (2D)         putActorInRoom(2,157);
[2497] (01)         putActor(2,160,130);
[249D] (13)         ActorOps(1,[Costume(2)]);
[24A2] (13)         ActorOps(2,[Costume(28)]);
[24A7] (1A)         Var[238] = 3;
[24AC] (1A)         Bit[17] = 1;
[24B1] (03)         VAR_RESULT = getActorRoom(2);
[24B5] (C8)         if (VAR_RESULT == VAR_ROOM) {
[24BC] (68)           VAR_RESULT = isScriptRunning(31);
[24C0] (28)           if (!VAR_RESULT) {
[24C5] (2A)             startScript(31,[1,2,1],F);
[24D1] (**)           }
[24D1] (**)         }
[24D1] (**)       }
[24D1] (48)       if (Local[0] == 3939) {
[24D8] (1A)         Bit[69] = 1;
[24DD] (1A)         Var[238] = 3;
[24E2] (25)         pickupObject(934,68);
[24E6] (25)         pickupObject(935,68);
[24EA] (69)         setOwnerOf(937,VAR_EGO);
[24EF] (25)         pickupObject(20,1);
[24F3] (25)         pickupObject(1001,73);
[24F7] (25)         pickupObject(1012,73);
[24FB] (25)         pickupObject(999,73);
[24FF] (1A)         VAR_ROOM = 75;
[2504] (2D)         putActorInRoom(1,33);
[2507] (0E)         putActorAtObject(1,377);
[250B] (2D)         putActorInRoom(2,33);
[250E] (0E)         putActorAtObject(2,377);
[2512] (13)         ActorOps(1,[Costume(2)]);
[2517] (13)         ActorOps(2,[Costume(28)]);
[251C] (1A)         Bit[17] = 1;
[2521] (**)       }
[2521] (48)       if (Local[0] == -26143) {
[2528] (1A)         Bit[69] = 1;
[252D] (25)         pickupObject(934,68);
[2531] (25)         pickupObject(935,68);
[2535] (69)         setOwnerOf(937,VAR_EGO);
[253A] (25)         pickupObject(20,1);
[253E] (25)         pickupObject(1001,73);
[2542] (25)         pickupObject(1012,73);
[2546] (2D)         putActorInRoom(1,33);
[2549] (0E)         putActorAtObject(1,377);
[254D] (2D)         putActorInRoom(2,33);
[2550] (0E)         putActorAtObject(2,377);
[2554] (13)         ActorOps(1,[Costume(2)]);
[2559] (13)         ActorOps(2,[Costume(28)]);
[255E] (1A)         Var[238] = 3;
[2563] (**)       }
[2563] (48)       if (Local[0] == 4040) {
[256A] (25)         pickupObject(934,68);
[256E] (25)         pickupObject(935,68);
[2572] (29)         setOwnerOf(937,1);
[2576] (25)         pickupObject(20,1);
[257A] (25)         pickupObject(1001,73);
[257E] (25)         pickupObject(1013,73);
[2582] (25)         pickupObject(501,43);
[2586] (25)         pickupObject(451,40);
[258A] (25)         pickupObject(985,72);
[258E] (25)         pickupObject(986,72);
[2592] (5D)         setClass(986,[154]);
[2599] (13)         ActorOps(1,[Costume(2)]);
[259E] (1A)         Var[238] = 2;
[25A3] (1A)         VAR_ROOM = 40;
[25A8] (2D)         putActorInRoom(1,33);
[25AB] (0E)         putActorAtObject(1,377);
[25AF] (**)       }
[25AF] (48)       if (Local[0] == 4041) {
[25B6] (25)         pickupObject(934,68);
[25BA] (25)         pickupObject(935,68);
[25BE] (29)         setOwnerOf(937,1);
[25C2] (25)         pickupObject(20,1);
[25C6] (25)         pickupObject(1001,73);
[25CA] (25)         pickupObject(1013,73);
[25CE] (25)         pickupObject(501,43);
[25D2] (25)         pickupObject(451,40);
[25D6] (25)         pickupObject(985,72);
[25DA] (25)         pickupObject(986,72);
[25DE] (5D)         setClass(986,[154]);
[25E5] (13)         ActorOps(1,[Costume(2)]);
[25EA] (1A)         Var[238] = 2;
[25EF] (1A)         VAR_ROOM = 40;
[25F4] (2D)         putActorInRoom(1,53);
[25F7] (01)         putActor(1,300,140);
[25FD] (**)       }
[25FD] (48)       if (Local[0] == 4141) {
[2604] (25)         pickupObject(934,68);
[2608] (25)         pickupObject(935,68);
[260C] (25)         pickupObject(23,1);
[2610] (29)         setOwnerOf(937,1);
[2614] (25)         pickupObject(20,1);
[2618] (25)         pickupObject(1001,73);
[261C] (2D)         putActorInRoom(1,33);
[261F] (0E)         putActorAtObject(1,377);
[2623] (13)         ActorOps(1,[Costume(2)]);
[2628] (1A)         Var[238] = 1;
[262D] (**)       }
[262D] (48)       if (Local[0] == 4242) {
[2634] (25)         pickupObject(934,68);
[2638] (25)         pickupObject(20,1);
[263C] (25)         pickupObject(1001,73);
[2640] (25)         pickupObject(1013,73);
[2644] (29)         setOwnerOf(937,1);
[2648] (25)         pickupObject(985,72);
[264C] (25)         pickupObject(986,72);
[2650] (13)         ActorOps(1,[Costume(2)]);
[2655] (1A)         Var[238] = 2;
[265A] (72)         loadRoom(41);
[265C] (**)       }
[265C] (48)       if (Local[0] == 4343) {
[2663] (69)         setOwnerOf(937,VAR_EGO);
[2668] (25)         pickupObject(20,1);
[266C] (25)         pickupObject(1001,73);
[2670] (25)         pickupObject(1012,73);
[2674] (25)         pickupObject(830,60);
[2678] (25)         pickupObject(999,73);
[267C] (5D)         setClass(380,[6]);
[2683] (13)         ActorOps(1,[Costume(2)]);
[2688] (13)         ActorOps(2,[Costume(28)]);
[268D] (1A)         Var[238] = 3;
[2692] (2D)         putActorInRoom(1,41);
[2695] (01)         putActor(1,0,140);
[269B] (72)         loadRoom(41);
[269D] (**)       }
[269D] (48)       if (Local[0] == 3941) {
[26A4] (25)         pickupObject(934,68);
[26A8] (25)         pickupObject(935,68);
[26AC] (72)         loadRoom(1);
[26AE] (25)         pickupObject(20,0);
[26B2] (72)         loadRoom(73);
[26B4] (25)         pickupObject(1001,0);
[26B8] (25)         pickupObject(1012,0);
[26BC] (29)         setOwnerOf(1012,1);
[26C0] (2D)         putActorInRoom(1,177);
[26C3] (01)         putActor(1,100,100);
[26C9] (2D)         putActorInRoom(2,177);
[26CC] (01)         putActor(2,100,100);
[26D2] (72)         loadRoom(43);
[26D4] (25)         pickupObject(501,0);
[26D8] (2D)         putActorInRoom(1,33);
[26DB] (0E)         putActorAtObject(1,377);
[26DF] (2D)         putActorInRoom(2,33);
[26E2] (0E)         putActorAtObject(2,377);
[26E6] (13)         ActorOps(1,[Costume(2)]);
[26EB] (13)         ActorOps(2,[Costume(28)]);
[26F0] (1A)         Var[238] = 3;
[26F5] (**)       }
[26F5] (48)       if (Local[0] == 3940) {
[26FC] (25)         pickupObject(938,68);
[2700] (29)         setOwnerOf(938,14);
[2704] (25)         pickupObject(934,68);
[2708] (25)         pickupObject(935,68);
[270C] (25)         pickupObject(936,68);
[2710] (25)         pickupObject(830,60);
[2714] (25)         pickupObject(20,1);
[2718] (25)         pickupObject(1012,73);
[271C] (29)         setOwnerOf(1012,14);
[2720] (2D)         putActorInRoom(1,143);
[2723] (0E)         putActorAtObject(1,601);
[2727] (13)         ActorOps(1,[Costume(2)]);
[272C] (1A)         Var[238] = 1;
[2731] (**)       }
[2731] (48)       if (Local[0] == 878) {
[2738] (13)         ActorOps(1,[Costume(2)]);
[273D] (25)         pickupObject(934,68);
[2741] (25)         pickupObject(1014,73);
[2745] (54)         setObjectName(1014,"hose");
[274D] (29)         setOwnerOf(937,1);
[2751] (25)         pickupObject(20,1);
[2755] (1A)         Var[238] = 2;
[275A] (72)         loadRoom(49);
[275C] (**)       }
[275C] (48)       if (Local[0] == 888) {
[2763] (13)         ActorOps(1,[Costume(2)]);
[2768] (25)         pickupObject(934,68);
[276C] (25)         pickupObject(1014,73);
[2770] (54)         setObjectName(1014,"hose");
[2778] (72)         loadRoom(1);
[277A] (25)         pickupObject(20,0);
[277E] (1A)         Var[238] = 3;
[2783] (72)         loadRoom(49);
[2785] (**)       }
[2785] (48)       if (Local[0] == 879) {
[278C] (13)         ActorOps(1,[Costume(2)]);
[2791] (25)         pickupObject(934,68);
[2795] (25)         pickupObject(935,68);
[2799] (25)         pickupObject(936,68);
[279D] (69)         setOwnerOf(937,VAR_EGO);
[27A2] (25)         pickupObject(20,1);
[27A6] (37)         startObject(933,250,[2]);
[27AE] (1A)         Var[238] = 1;
[27B3] (72)         loadRoom(49);
[27B5] (**)       }
[27B5] (48)       if (Local[0] == 787) {
[27BC] (13)         ActorOps(1,[Costume(2)]);
[27C1] (25)         pickupObject(934,68);
[27C5] (72)         loadRoom(1);
[27C7] (25)         pickupObject(20,0);
[27CB] (25)         pickupObject(946,69);
[27CF] (1A)         Bit[443] = 1;
[27D4] (1A)         Var[238] = 1;
[27D9] (72)         loadRoom(42);
[27DB] (**)       }
[27DB] (48)       if (Local[0] == 909) {
[27E2] (1A)         Var[417] = 29;
[27E7] (25)         pickupObject(934,68);
[27EB] (25)         pickupObject(935,68);
[27EF] (72)         loadRoom(1);
[27F1] (25)         pickupObject(20,0);
[27F5] (1A)         Var[238] = 2;
[27FA] (37)         startObject(933,250,[2]);
[2802] (AD)         putActorInRoom(VAR_EGO,35);
[2806] (81)         putActor(VAR_EGO,0,0);
[280D] (72)         loadRoom(35);
[280F] (**)       }
[280F] (48)       if (Local[0] == 9191) {
[2816] (1A)         Var[316] = 2;
[281B] (1A)         Var[315] = 13;
[2820] (72)         loadRoom(1);
[2822] (25)         pickupObject(20,0);
[2826] (13)         ActorOps(1,[Costume(2)]);
[282B] (2D)         putActorInRoom(1,2);
[282E] (01)         putActor(1,225,125);
[2834] (72)         loadRoom(2);
[2836] (**)       }
[2836] (48)       if (Local[0] == 145) {
[283D] (1A)         Bit[17] = 1;
[2842] (25)         pickupObject(204,18);
[2846] (29)         setOwnerOf(204,4);
[284A] (25)         pickupObject(173,16);
[284E] (29)         setOwnerOf(173,4);
[2852] (25)         pickupObject(1012,73);
[2856] (25)         pickupObject(934,68);
[285A] (25)         pickupObject(935,68);
[285E] (25)         pickupObject(936,68);
[2862] (29)         setOwnerOf(937,1);
[2866] (2D)         putActorInRoom(1,45);
[2869] (01)         putActor(1,100,100);
[286F] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[290E] (72)         loadRoom(45);
[2910] (**)       }
[2910] (48)       if (Local[0] == 146) {
[2917] (1A)         Bit[17] = 1;
[291C] (25)         pickupObject(1012,73);
[2920] (25)         pickupObject(204,18);
[2924] (25)         pickupObject(173,16);
[2928] (25)         pickupObject(934,68);
[292C] (25)         pickupObject(935,68);
[2930] (25)         pickupObject(936,68);
[2934] (25)         pickupObject(586,48);
[2938] (37)         startObject(933,250,[10]);
[2940] (5D)         setClass(586,[145]);
[2947] (29)         setOwnerOf(937,1);
[294B] (2D)         putActorInRoom(1,17);
[294E] (01)         putActor(1,0,100);
[2954] (2D)         putActorInRoom(2,17);
[2957] (01)         putActor(2,0,100);
[295D] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[29E3] (72)         loadRoom(17);
[29E5] (**)       }
[29E5] (48)       if (Local[0] == 100) {
[29EC] (72)         loadRoom(4);
[29EE] (1A)         Var[237] = 3;
[29F3] (1A)         Bit[69] = 1;
[29F8] (13)         ActorOps(1,[Costume(2)]);
[29FD] (2D)         putActorInRoom(1,4);
[2A00] (01)         putActor(1,225,125);
[2A06] (5D)         setClass(79,[160]);
[2A0D] (5D)         setClass(82,[160]);
[2A14] (5D)         setClass(80,[32]);
[2A1B] (**)       }
[2A1B] (48)       if (Local[0] == 101) {
[2A22] (1A)         Var[238] = 3;
[2A27] (1A)         Bit[448] = 1;
[2A2C] (1C)         startSound(74);
[2A2E] (4C)         soundKludge([-1]);
[2A33] (1A)         Bit[69] = 1;
[2A38] (13)         ActorOps(1,[Costume(2)]);
[2A3D] (2D)         putActorInRoom(1,59);
[2A40] (01)         putActor(1,0,0);
[2A46] (25)         pickupObject(934,68);
[2A4A] (25)         pickupObject(935,68);
[2A4E] (25)         pickupObject(936,68);
[2A52] (25)         pickupObject(1001,73);
[2A56] (25)         pickupObject(1012,73);
[2A5A] (25)         pickupObject(830,60);
[2A5E] (25)         pickupObject(701,52);
[2A62] (25)         pickupObject(702,52);
[2A66] (25)         pickupObject(462,40);
[2A6A] (29)         setOwnerOf(937,1);
[2A6E] (1A)         VAR_ROOM = 146;
[2A73] (07)         setState(811,0);
[2A77] (1A)         Bit[17] = 1;
[2A7C] (72)         loadRoom(59);
[2A7E] (0A)         startScript(10,[]);
[2A81] (**)       }
[2A81] (48)       if (Local[0] == 4123) {
[2A88] (1A)         Var[417] = 29;
[2A8D] (13)         ActorOps(1,[Costume(2)]);
[2A92] (25)         pickupObject(20,1);
[2A96] (25)         pickupObject(934,68);
[2A9A] (25)         pickupObject(935,68);
[2A9E] (25)         pickupObject(936,68);
[2AA2] (25)         pickupObject(1188,92);
[2AA6] (25)         pickupObject(1189,92);
[2AAA] (25)         pickupObject(1175,92);
[2AAE] (25)         pickupObject(583,48);
[2AB2] (25)         pickupObject(1012,73);
[2AB6] (54)         setObjectName(583,"ladder");
[2AC0] (37)         startObject(933,250,[3]);
[2AC8] (5D)         setClass(576,[146]);
[2ACF] (2D)         putActorInRoom(1,226);
[2AD2] (0E)         putActorAtObject(1,567);
[2AD6] (2D)         putActorInRoom(2,226);
[2AD9] (01)         putActor(2,139,139);
[2ADF] (1A)         Bit[17] = 1;
[2AE4] (03)         VAR_RESULT = getActorRoom(2);
[2AE8] (C8)         if (VAR_RESULT == VAR_ROOM) {
[2AEF] (68)           VAR_RESULT = isScriptRunning(31);
[2AF3] (28)           if (!VAR_RESULT) {
[2AF8] (2A)             startScript(31,[1,2,1],F);
[2B04] (**)           }
[2B04] (**)         }
[2B04] (72)         loadRoom(226);
[2B06] (**)       }
[2B06] (48)       if (Local[0] == 4122) {
[2B0D] (13)         ActorOps(1,[Costume(2)]);
[2B12] (25)         pickupObject(20,1);
[2B16] (25)         pickupObject(934,68);
[2B1A] (25)         pickupObject(935,68);
[2B1E] (25)         pickupObject(936,68);
[2B22] (25)         pickupObject(1253,97);
[2B26] (25)         pickupObject(1188,92);
[2B2A] (25)         pickupObject(1189,92);
[2B2E] (25)         pickupObject(583,48);
[2B32] (54)         setObjectName(583,"ladder");
[2B3C] (37)         startObject(933,250,[3]);
[2B44] (2D)         putActorInRoom(1,226);
[2B47] (0E)         putActorAtObject(1,567);
[2B4B] (72)         loadRoom(226);
[2B4D] (**)       }
[2B4D] (48)       if (Local[0] == 6345) {
[2B54] (13)         ActorOps(1,[Costume(2)]);
[2B59] (25)         pickupObject(1253,97);
[2B5D] (25)         pickupObject(1188,92);
[2B61] (25)         pickupObject(1189,92);
[2B65] (25)         pickupObject(1175,92);
[2B69] (25)         pickupObject(583,48);
[2B6D] (54)         setObjectName(583,"ladder");
[2B77] (37)         startObject(933,250,[3]);
[2B7F] (29)         setOwnerOf(937,1);
[2B83] (25)         pickupObject(830,60);
[2B87] (2D)         putActorInRoom(1,18);
[2B8A] (01)         putActor(1,0,144);
[2B90] (**)       }
[2B90] (48)       if (Local[0] == 4951) {
[2B97] (1A)         Bit[37 + 19] = 1;
[2B9E] (1A)         Bit[37 + 20] = 1;
[2BA5] (1A)         Bit[37 + 21] = 1;
[2BAC] (1A)         Bit[37 + 22] = 1;
[2BB3] (5D)         setClass(479,[12]);
[2BBA] (1A)         Local[0] = 0;
[2BBF] (1A)         Var[300] = 0;
[2BC4] (72)         loadRoom(66);
[2BC6] (**)       }
[2BC6] (48)       if (Local[0] == 4952) {
[2BCD] (1A)         Bit[37 + 19] = 1;
[2BD4] (1A)         Bit[37 + 20] = 1;
[2BDB] (1A)         Bit[37 + 21] = 1;
[2BE2] (1A)         Bit[37 + 22] = 1;
[2BE9] (5D)         setClass(479,[12]);
[2BF0] (1A)         Local[0] = 0;
[2BF5] (1A)         Var[300] = 1;
[2BFA] (72)         loadRoom(66);
[2BFC] (**)       }
[2BFC] (48)       if (Local[0] == 4953) {
[2C03] (1A)         Bit[37 + 19] = 1;
[2C0A] (1A)         Bit[37 + 20] = 1;
[2C11] (1A)         Bit[37 + 21] = 1;
[2C18] (1A)         Bit[37 + 22] = 1;
[2C1F] (5D)         setClass(479,[12]);
[2C26] (1A)         Local[0] = 0;
[2C2B] (1A)         Var[300] = 2;
[2C30] (72)         loadRoom(66);
[2C32] (**)       }
[2C32] (48)       if (Local[0] == 4954) {
[2C39] (1A)         Bit[37 + 19] = 1;
[2C40] (1A)         Bit[37 + 20] = 1;
[2C47] (1A)         Bit[37 + 21] = 1;
[2C4E] (1A)         Bit[37 + 22] = 1;
[2C55] (5D)         setClass(479,[12]);
[2C5C] (1A)         Local[0] = 0;
[2C61] (1A)         Var[300] = 3;
[2C66] (72)         loadRoom(66);
[2C68] (**)       }
[2C68] (48)       if (Local[0] == 4955) {
[2C6F] (1A)         Bit[37 + 19] = 1;
[2C76] (1A)         Bit[37 + 20] = 1;
[2C7D] (1A)         Bit[37 + 21] = 1;
[2C84] (1A)         Bit[37 + 22] = 1;
[2C8B] (5D)         setClass(479,[12]);
[2C92] (1A)         Local[0] = 0;
[2C97] (1A)         Var[300] = 4;
[2C9C] (72)         loadRoom(66);
[2C9E] (**)       }
[2C9E] (48)       if (Local[0] == 4956) {
[2CA5] (1A)         Bit[37 + 19] = 1;
[2CAC] (1A)         Bit[37 + 20] = 1;
[2CB3] (1A)         Bit[37 + 21] = 1;
[2CBA] (1A)         Bit[37 + 22] = 1;
[2CC1] (5D)         setClass(479,[12]);
[2CC8] (1A)         Local[0] = 0;
[2CCD] (1A)         Var[300] = 5;
[2CD2] (72)         loadRoom(66);
[2CD4] (**)       }
[2CD4] (48)       if (Local[0] == 4957) {
[2CDB] (1A)         Bit[37 + 19] = 1;
[2CE2] (1A)         Bit[37 + 20] = 1;
[2CE9] (1A)         Bit[37 + 21] = 1;
[2CF0] (1A)         Bit[37 + 22] = 1;
[2CF7] (5D)         setClass(479,[12]);
[2CFE] (1A)         Local[0] = 0;
[2D03] (1A)         Var[300] = 6;
[2D08] (72)         loadRoom(66);
[2D0A] (**)       }
[2D0A] (48)       if (Local[0] == 4958) {
[2D11] (1A)         Bit[37 + 19] = 1;
[2D18] (1A)         Bit[37 + 20] = 1;
[2D1F] (1A)         Bit[37 + 21] = 1;
[2D26] (1A)         Bit[37 + 22] = 1;
[2D2D] (5D)         setClass(479,[12]);
[2D34] (1A)         Local[0] = 0;
[2D39] (1A)         Var[300] = 7;
[2D3E] (72)         loadRoom(66);
[2D40] (**)       }
[2D40] (48)       if (Local[0] == 4959) {
[2D47] (1A)         Bit[37 + 19] = 1;
[2D4E] (1A)         Bit[37 + 20] = 1;
[2D55] (1A)         Bit[37 + 21] = 1;
[2D5C] (1A)         Bit[37 + 22] = 1;
[2D63] (5D)         setClass(479,[12]);
[2D6A] (1A)         Local[0] = 0;
[2D6F] (1A)         Var[300] = 8;
[2D74] (72)         loadRoom(66);
[2D76] (**)       }
[2D76] (48)       if (Local[0] == 4695) {
[2D7D] (25)         pickupObject(1189,92);
[2D81] (25)         pickupObject(1207,93);
[2D85] (5D)         setClass(1207,[146]);
[2D8C] (2D)         putActorInRoom(1,36);
[2D8F] (0E)         putActorAtObject(1,392);
[2D93] (**)       }
[2D93] (48)       if (Local[0] == 4960) {
[2D9A] (1A)         Var[238] = 3;
[2D9F] (2D)         putActorInRoom(1,41);
[2DA2] (01)         putActor(1,500,0);
[2DA8] (**)       }
[2DA8] (48)       if (Local[0] == 4949) {
[2DAF] (13)         ActorOps(1,[Costume(2)]);
[2DB4] (1A)         Bit[17] = 1;
[2DB9] (25)         pickupObject(934,68);
[2DBD] (25)         pickupObject(935,68);
[2DC1] (25)         pickupObject(936,68);
[2DC5] (25)         pickupObject(23,1);
[2DC9] (69)         setOwnerOf(937,VAR_EGO);
[2DCE] (25)         pickupObject(20,1);
[2DD2] (1A)         VAR_ROOM = 21;
[2DD7] (1A)         Bit[17] = 0;
[2DDC] (72)         loadRoom(55);
[2DDE] (**)       }
[2DDE] (48)       if (Local[0] == 9101) {
[2DE5] (13)         ActorOps(1,[Costume(2)]);
[2DEA] (1A)         Bit[17] = 1;
[2DEF] (25)         pickupObject(934,68);
[2DF3] (25)         pickupObject(935,68);
[2DF7] (25)         pickupObject(936,68);
[2DFB] (25)         pickupObject(23,1);
[2DFF] (69)         setOwnerOf(937,VAR_EGO);
[2E04] (25)         pickupObject(20,1);
[2E08] (1A)         VAR_ROOM = 21;
[2E0D] (72)         loadRoom(55);
[2E0F] (**)       }
[2E0F] (48)       if (Local[0] == 9102) {
[2E16] (13)         ActorOps(1,[Costume(2)]);
[2E1B] (1A)         Bit[17] = 1;
[2E20] (25)         pickupObject(934,68);
[2E24] (25)         pickupObject(935,68);
[2E28] (25)         pickupObject(936,68);
[2E2C] (25)         pickupObject(23,1);
[2E30] (69)         setOwnerOf(937,VAR_EGO);
[2E35] (25)         pickupObject(20,1);
[2E39] (1A)         VAR_ROOM = 21;
[2E3E] (72)         loadRoom(55);
[2E40] (1A)         Var[491] = 2;
[2E45] (**)       }
[2E45] (48)       if (Local[0] == 9103) {
[2E4C] (13)         ActorOps(1,[Costume(2)]);
[2E51] (1A)         Bit[17] = 1;
[2E56] (25)         pickupObject(934,68);
[2E5A] (25)         pickupObject(935,68);
[2E5E] (25)         pickupObject(936,68);
[2E62] (25)         pickupObject(23,1);
[2E66] (69)         setOwnerOf(937,VAR_EGO);
[2E6B] (25)         pickupObject(20,1);
[2E6F] (1A)         VAR_ROOM = 21;
[2E74] (72)         loadRoom(55);
[2E76] (1A)         Var[491] = 3;
[2E7B] (**)       }
[2E7B] (48)       if (Local[0] == 9104) {
[2E82] (13)         ActorOps(1,[Costume(2)]);
[2E87] (1A)         Bit[17] = 1;
[2E8C] (25)         pickupObject(934,68);
[2E90] (25)         pickupObject(935,68);
[2E94] (25)         pickupObject(936,68);
[2E98] (25)         pickupObject(23,1);
[2E9C] (69)         setOwnerOf(937,VAR_EGO);
[2EA1] (25)         pickupObject(20,1);
[2EA5] (1A)         VAR_ROOM = 21;
[2EAA] (72)         loadRoom(55);
[2EAC] (1A)         Var[491] = 4;
[2EB1] (**)       }
[2EB1] (48)       if (Local[0] == 9105) {
[2EB8] (13)         ActorOps(1,[Costume(2)]);
[2EBD] (1A)         Bit[17] = 1;
[2EC2] (25)         pickupObject(934,68);
[2EC6] (25)         pickupObject(935,68);
[2ECA] (25)         pickupObject(936,68);
[2ECE] (25)         pickupObject(23,1);
[2ED2] (69)         setOwnerOf(937,VAR_EGO);
[2ED7] (25)         pickupObject(20,1);
[2EDB] (1A)         VAR_ROOM = 21;
[2EE0] (72)         loadRoom(55);
[2EE2] (1A)         Var[491] = 5;
[2EE7] (**)       }
[2EE7] (48)       if (Local[0] == 9106) {
[2EEE] (13)         ActorOps(1,[Costume(2)]);
[2EF3] (1A)         Bit[17] = 1;
[2EF8] (25)         pickupObject(934,68);
[2EFC] (25)         pickupObject(935,68);
[2F00] (25)         pickupObject(936,68);
[2F04] (25)         pickupObject(23,1);
[2F08] (69)         setOwnerOf(937,VAR_EGO);
[2F0D] (25)         pickupObject(20,1);
[2F11] (1A)         VAR_ROOM = 21;
[2F16] (72)         loadRoom(55);
[2F18] (1A)         Var[491] = 6;
[2F1D] (**)       }
[2F1D] (48)       if (Local[0] == 4962) {
[2F24] (1A)         Bit[17] = 1;
[2F29] (25)         pickupObject(934,68);
[2F2D] (25)         pickupObject(935,68);
[2F31] (25)         pickupObject(936,68);
[2F35] (25)         pickupObject(23,1);
[2F39] (69)         setOwnerOf(937,VAR_EGO);
[2F3E] (25)         pickupObject(20,1);
[2F42] (1A)         Bit[17] = 1;
[2F47] (1A)         VAR_ROOM = 22;
[2F4C] (1A)         Bit[69] = 1;
[2F51] (1A)         Var[247] = 8;
[2F56] (1A)         Var[248] = 8;
[2F5B] (1A)         Var[249] = 7;
[2F60] (1A)         Bit[653] = 0;
[2F65] (72)         loadRoom(23);
[2F67] (**)       }
[2F67] (48)       if (Local[0] == 4963) {
[2F6E] (1A)         Bit[17] = 0;
[2F73] (25)         pickupObject(934,68);
[2F77] (25)         pickupObject(935,68);
[2F7B] (25)         pickupObject(936,68);
[2F7F] (25)         pickupObject(23,1);
[2F83] (69)         setOwnerOf(937,VAR_EGO);
[2F88] (25)         pickupObject(20,1);
[2F8C] (1A)         Bit[17] = 0;
[2F91] (1A)         VAR_ROOM = 22;
[2F96] (1A)         Bit[69] = 1;
[2F9B] (1A)         Var[247] = 8;
[2FA0] (1A)         Var[248] = 8;
[2FA5] (1A)         Var[249] = 7;
[2FAA] (1A)         Bit[653] = 0;
[2FAF] (72)         loadRoom(23);
[2FB1] (**)       }
[2FB1] (48)       if (Local[0] == 4964) {
[2FB8] (1A)         Bit[17] = 1;
[2FBD] (25)         pickupObject(934,68);
[2FC1] (25)         pickupObject(935,68);
[2FC5] (25)         pickupObject(936,68);
[2FC9] (25)         pickupObject(23,1);
[2FCD] (69)         setOwnerOf(937,VAR_EGO);
[2FD2] (25)         pickupObject(20,1);
[2FD6] (1A)         Bit[17] = 1;
[2FDB] (1A)         VAR_ROOM = 22;
[2FE0] (1A)         Bit[69] = 1;
[2FE5] (1A)         Var[247] = 8;
[2FEA] (1A)         Var[248] = 8;
[2FEF] (1A)         Var[224] = 81;
[2FF4] (1A)         Bit[653] = 1;
[2FF9] (72)         loadRoom(23);
[2FFB] (0A)         startScript(166,[]);
[2FFE] (62)         stopScript(0);
[3000] (**)       }
[3000] (48)       if (Local[0] == 5234) {
[3007] (13)         ActorOps(1,[Costume(2)]);
[300C] (25)         pickupObject(1012,73);
[3010] (25)         pickupObject(830,60);
[3014] (25)         pickupObject(204,18);
[3018] (5D)         setClass(830,[8]);
[301F] (25)         pickupObject(586,48);
[3023] (54)         setObjectName(586,"light-wand");
[3031] (5D)         setClass(586,[140]);
[3038] (37)         startObject(933,250,[20]);
[3040] (25)         pickupObject(934,68);
[3044] (25)         pickupObject(935,68);
[3048] (25)         pickupObject(936,68);
[304C] (1A)         VAR_ROOM = 18;
[3051] (2D)         putActorInRoom(1,222);
[3054] (01)         putActor(1,0,0);
[305A] (1A)         Bit[17] = 1;
[305F] (1A)         Var[311] = 1;
[3064] (72)         loadRoom(222);
[3066] (**)       }
[3066] (48)       if (Local[0] == 7456) {
[306D] (13)         ActorOps(1,[Costume(2)]);
[3072] (25)         pickupObject(586,48);
[3076] (54)         setObjectName(586,"light-wand");
[3084] (25)         pickupObject(204,18);
[3088] (1A)         Bit[540] = 0;
[308D] (5D)         setClass(1246,[32]);
[3094] (1A)         VAR_ROOM = 88;
[3099] (1A)         Var[224] = 88;
[309E] (2D)         putActorInRoom(1,97);
[30A1] (01)         putActor(1,439,71);
[30A7] (**)       }
[30A7] (48)       if (Local[0] == 7777) {
[30AE] (13)         ActorOps(1,[Costume(2)]);
[30B3] (25)         pickupObject(586,48);
[30B7] (54)         setObjectName(586,"light-wand");
[30C5] (25)         pickupObject(204,18);
[30C9] (1A)         Bit[540] = 1;
[30CE] (5D)         setClass(1246,[160,6]);
[30D8] (1A)         VAR_ROOM = 88;
[30DD] (1A)         Var[224] = 88;
[30E2] (2D)         putActorInRoom(1,97);
[30E5] (01)         putActor(1,439,71);
[30EB] (**)       }
[30EB] (48)       if (Local[0] == 8567) {
[30F2] (13)         ActorOps(1,[Costume(2)]);
[30F7] (25)         pickupObject(20,1);
[30FB] (25)         pickupObject(934,68);
[30FF] (25)         pickupObject(935,68);
[3103] (25)         pickupObject(936,68);
[3107] (2D)         putActorInRoom(1,33);
[310A] (01)         putActor(1,150,125);
[3110] (**)       }
[3110] (48)       if (Local[0] == 9678) {
[3117] (13)         ActorOps(1,[Costume(2)]);
[311C] (1A)         Bit[69] = 1;
[3121] (1A)         Var[315] = 2;
[3126] (1A)         Var[316] = 2;
[312B] (1A)         Bit[74] = 1;
[3130] (1A)         Bit[211] = 1;
[3135] (1A)         Bit[17] = 1;
[313A] (25)         pickupObject(20,1);
[313E] (1A)         Bit[87 + 8] = 1;
[3145] (1A)         Bit[87 + 3] = 1;
[314C] (2D)         putActorInRoom(1,2);
[314F] (01)         putActor(1,350,130);
[3155] (72)         loadRoom(2);
[3157] (**)       }
[3157] (48)       if (Local[0] == 1432) {
[315E] (13)         ActorOps(1,[Costume(2)]);
[3163] (1A)         Bit[69] = 1;
[3168] (1A)         Bit[355] = 1;
[316D] (1A)         Var[238] = 3;
[3172] (72)         loadRoom(32);
[3174] (**)       }
[3174] (48)       if (Local[0] == 6010) {
[317B] (13)         ActorOps(1,[Costume(2)]);
[3180] (1A)         Bit[69] = 1;
[3185] (25)         pickupObject(1208,93);
[3189] (25)         pickupObject(1214,93);
[318D] (25)         pickupObject(102,6);
[3191] (2D)         putActorInRoom(1,85);
[3194] (01)         putActor(1,70,130);
[319A] (**)       }
[319A] (48)       if (Local[0] == 6011) {
[31A1] (13)         ActorOps(1,[Costume(2)]);
[31A6] (1A)         Bit[69] = 1;
[31AB] (25)         pickupObject(1208,93);
[31AF] (25)         pickupObject(1214,93);
[31B3] (25)         pickupObject(102,6);
[31B7] (5D)         setClass(1208,[146]);
[31BE] (0A)         startScript(197,[]);
[31C1] (2D)         putActorInRoom(1,226);
[31C4] (01)         putActor(1,70,144);
[31CA] (**)       }
[31CA] (48)       if (Local[0] == 2543) {
[31D1] (1A)         Var[238] = 2;
[31D6] (25)         pickupObject(20,1);
[31DA] (2D)         putActorInRoom(1,184);
[31DD] (01)         putActor(1,0,0);
[31E3] (1A)         VAR_ROOM = 63;
[31E8] (1A)         Var[224] = 63;
[31ED] (1C)         startSound(46);
[31EF] (4C)         soundKludge([-1]);
[31F4] (72)         loadRoom(184);
[31F6] (**)       }
[31F6] (48)       if (Local[0] == 3654) {
[31FD] (1A)         Var[315] = 76;
[3202] (1A)         Var[316] = 2;
[3207] (25)         pickupObject(20,1);
[320B] (1A)         Bit[87 + 8] = 1;
[3212] (1A)         Bit[87 + 3] = 1;
[3219] (1A)         Bit[87 + 1] = 1;
[3220] (2D)         putActorInRoom(2,76);
[3223] (01)         putActor(2,0,0);
[3229] (2D)         putActorInRoom(1,76);
[322C] (01)         putActor(1,0,0);
[3232] (1A)         Bit[150] = 1;
[3237] (72)         loadRoom(76);
[3239] (**)       }
[3239] (48)       if (Local[0] == 4765) {
[3240] (25)         pickupObject(1207,93);
[3244] (25)         pickupObject(443,39);
[3248] (5D)         setClass(443,[140]);
[324F] (25)         pickupObject(999,73);
[3253] (5D)         setClass(999,[140]);
[325A] (25)         pickupObject(1190,92);
[325E] (2D)         putActorInRoom(1,37);
[3261] (01)         putActor(1,0,0);
[3267] (**)       }
[3267] (48)       if (Local[0] == 3142) {
[326E] (42)         chainScript(57,[]);
[3271] (**)       }
[3271] (48)       if (Local[0] == 5876) {
[3278] (1A)         Bit[17] = 1;
[327D] (1A)         Bit[36] = 1;
[3282] (29)         setOwnerOf(938,0);
[3286] (29)         setOwnerOf(937,0);
[328A] (29)         setOwnerOf(933,0);
[328E] (1A)         Local[1] = 1;
[3293] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[329B] (46)         Local[1]++;
[329E] (44)         unless (Local[1] > 55) goto 3293;
[32A5] (2D)         putActorInRoom(1,96);
[32A8] (01)         putActor(1,0,0);
[32AE] (72)         loadRoom(96);
[32B0] (62)         stopScript(0);
[32B2] (**)       }
[32B2] (48)       if (Local[0] == 5877) {
[32B9] (1A)         Bit[36] = 1;
[32BE] (29)         setOwnerOf(938,0);
[32C2] (29)         setOwnerOf(937,0);
[32C6] (29)         setOwnerOf(933,0);
[32CA] (2D)         putActorInRoom(1,96);
[32CD] (01)         putActor(1,0,0);
[32D3] (72)         loadRoom(96);
[32D5] (62)         stopScript(0);
[32D7] (**)       }
[32D7] (48)       if (Local[0] == 4851) {
[32DE] (1A)         Var[238] = 1;
[32E3] (1A)         Bit[37 + 31] = 1;
[32EA] (1A)         Bit[37 + 12] = 1;
[32F1] (1A)         Bit[37 + 13] = 1;
[32F8] (1A)         Bit[37 + 14] = 1;
[32FF] (1A)         Bit[37 + 15] = 1;
[3306] (1A)         Bit[37 + 16] = 1;
[330D] (1A)         Bit[37 + 17] = 1;
[3314] (1A)         Bit[37 + 18] = 1;
[331B] (1A)         Var[411] = 176;
[3320] (25)         pickupObject(20,1);
[3324] (25)         pickupObject(1012,73);
[3328] (6D)         putActorInRoom(1,Var[411]);
[332C] (01)         putActor(1,160,130);
[3332] (**)       }
[3332] (48)       if (Local[0] == 4852) {
[3339] (1A)         Var[238] = 1;
[333E] (1A)         Bit[37 + 31] = 1;
[3345] (1A)         Bit[37 + 12] = 1;
[334C] (1A)         Bit[37 + 13] = 1;
[3353] (1A)         Bit[37 + 14] = 1;
[335A] (1A)         Bit[37 + 15] = 1;
[3361] (1A)         Bit[37 + 16] = 1;
[3368] (1A)         Bit[37 + 17] = 1;
[336F] (1A)         Bit[37 + 18] = 1;
[3376] (1A)         Var[411] = 172;
[337B] (25)         pickupObject(20,1);
[337F] (25)         pickupObject(1012,73);
[3383] (6D)         putActorInRoom(1,Var[411]);
[3387] (01)         putActor(1,160,130);
[338D] (**)       }
[338D] (48)       if (Local[0] == 4853) {
[3394] (1A)         Var[238] = 1;
[3399] (1A)         Bit[37 + 31] = 1;
[33A0] (1A)         Bit[37 + 12] = 1;
[33A7] (1A)         Bit[37 + 13] = 1;
[33AE] (1A)         Bit[37 + 14] = 1;
[33B5] (1A)         Bit[37 + 15] = 1;
[33BC] (1A)         Bit[37 + 16] = 1;
[33C3] (1A)         Bit[37 + 17] = 1;
[33CA] (1A)         Bit[37 + 18] = 1;
[33D1] (1A)         Var[411] = 164;
[33D6] (25)         pickupObject(20,1);
[33DA] (25)         pickupObject(1012,73);
[33DE] (6D)         putActorInRoom(1,Var[411]);
[33E2] (01)         putActor(1,160,130);
[33E8] (**)       }
[33E8] (48)       if (Local[0] == 4854) {
[33EF] (1A)         Var[238] = 1;
[33F4] (1A)         Bit[37 + 31] = 1;
[33FB] (1A)         Bit[37 + 12] = 1;
[3402] (1A)         Bit[37 + 13] = 1;
[3409] (1A)         Bit[37 + 14] = 1;
[3410] (1A)         Bit[37 + 15] = 1;
[3417] (1A)         Bit[37 + 16] = 1;
[341E] (1A)         Bit[37 + 17] = 1;
[3425] (1A)         Bit[37 + 18] = 1;
[342C] (1A)         Var[411] = 170;
[3431] (25)         pickupObject(20,1);
[3435] (25)         pickupObject(1012,73);
[3439] (6D)         putActorInRoom(1,Var[411]);
[343D] (01)         putActor(1,160,130);
[3443] (**)       }
[3443] (48)       if (Local[0] == 4855) {
[344A] (1A)         Var[238] = 1;
[344F] (1A)         Bit[37 + 31] = 1;
[3456] (1A)         Bit[37 + 12] = 1;
[345D] (1A)         Bit[37 + 13] = 1;
[3464] (1A)         Bit[37 + 14] = 1;
[346B] (1A)         Bit[37 + 15] = 1;
[3472] (1A)         Bit[37 + 16] = 1;
[3479] (1A)         Bit[37 + 17] = 1;
[3480] (1A)         Bit[37 + 18] = 1;
[3487] (1A)         Var[411] = 155;
[348C] (25)         pickupObject(20,1);
[3490] (25)         pickupObject(1012,73);
[3494] (6D)         putActorInRoom(1,Var[411]);
[3498] (01)         putActor(1,160,130);
[349E] (**)       }
[349E] (0A)       startScript(45,[]);
[34A1] (0A)       startScript(10,[]);
[34A4] (18)       goto 352C;
[34A7] (**)     }
[34A7] (**)   }
[34A7] (1A)   Bit[69] = 0;
[34AC] (72)   loadRoom(81);
[34AE] (48)   if (Local[0] == 2718) {
[34B5] (48)   } else if (Local[0] == -7873) {
[34BF] (18)   } else {
[34C2] (80)     breakHere();
[34C3] (A8)     unless (Var[444]) goto 34C2;
[34C8] (**)   }
[34C8] (**) }
[34C8] (27) PutCodeInString(22, "@@@@@@@@@@@");
[34D7] (27) SetStringChar(22,0,16);
[34DC] (27) SetStringChar(22,1,5);
[34E1] (27) SetStringChar(22,2,6);
[34E6] (27) SetStringChar(22,3,11);
[34EB] (27) SetStringChar(22,4,22);
[34F0] (27) SetStringChar(22,5,10);
[34F5] (27) SetStringChar(22,6,2);
[34FA] (27) SetStringChar(22,7,17);
[34FF] (27) SetStringChar(22,8,254);
[3504] (27) SetStringChar(22,9,9);
[3509] (27) SetStringChar(22,10,0);
[350E] (1A) Bit[653] = 0;
[3513] (0A) startScript(74,[]);
[3516] (80) breakHere();
[3517] (68) VAR_RESULT = isScriptRunning(74);
[351B] (28) unless (!VAR_RESULT) goto 3516;
[3520] (2C) InitCharset(2);
[3523] (1A) Var[315] = 2;
[3528] (72) loadRoom(4);
[352A] (62) stopScript(0);
[352C] (D2) actorFollowCamera(VAR_EGO);
[352F] (2C) CursorShow();
[3531] (2C) UserputOn();
[3533] (A0) stopObjectCode();
END

// Script 2
[0000] (C8) if (Var[105] == Local[2]) {
[0007] (C8)   if (Var[106] == Local[1]) {
[000E] (46)     Var[104]++;
[0011] (44)     if (Var[104] > 3) {
[0018] (1A)       Var[104] = 0;
[001D] (A8)       if (Var[105]) {
[0022] (42)         chainScript(3,[Local[0]]);
[0028] (**)       }
[0028] (**)     }
[0028] (18)     goto 0030;
[002B] (**)   }
[002B] (**) }
[002B] (1A) Var[104] = 0;
[0030] (9A) Var[116] = Local[0];
[0035] (9A) Var[105] = Local[1];
[003A] (9A) Var[106] = Local[2];
[003F] (9A) Var[113] = Local[1];
[0044] (9A) Var[114] = Local[2];
[0049] (9A) Var[115] = Local[0];
[004E] (9A) Local[3] = VAR_EGO;
[0053] (48) if (Local[0] == 5) {
[005A] (44)   if (Local[2] > 12) {
[0061] (9D)     if (classOfIs(Local[2],[133])) {
[006A] (0A)       startScript(12,[Local[1],Local[2]]);
[0073] (18)       goto 052C;
[0076] (**)     }
[0076] (18)   } else {
[0079] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[007E] (48)     if (VAR_RESULT == 15) {
[0085] (18)       goto 032F;
[0088] (**)     }
[0088] (28)     if (!Bit[0 + Local[3]]) {
[008F] (CD)       walkActorToActor(Local[3],Local[2],40);
[0095] (C3)       Var[465] = getActorX(Local[2]);
[009A] (A3)       Var[466] = getActorY(Local[2]);
[009F] (**)     }
[009F] (AE)     WaitForActor(Local[3]);
[00A3] (AC)     Exprmode Local[7] = ((<VAR_RESULT = getActorWidth(Local[2])> / 2) + 4);
[00B5] (EC)     VAR_RESULT = getActorWidth(Local[3]);
[00BA] (DA)     Local[7] += VAR_RESULT;
[00BF] (5A)     Local[7] += 15;
[00C4] (F4)     VAR_RESULT = getDist(Local[3],Local[2]);
[00CB] (84)     if (VAR_RESULT <= Local[7]) {
[00D2] (8B)       VAR_RESULT = getVerbEntryPoint(Local[1],5);
[00D9] (A8)       if (VAR_RESULT) {
[00DE] (C9)         faceActor(Local[2],Local[3]);
[00E3] (C9)         faceActor(Local[3],Local[2]);
[00E8] (9A)         VAR_ME = Local[1];
[00ED] (B7)         startObject(Local[1],5,[Local[2]]);
[00F5] (0A)         startScript(13,[]);
[00F8] (18)         goto 052C;
[00FB] (9D)       } else if (classOfIs(Local[2],[133])) {
[0107] (8A)         startScript(Var[163],[Local[1],Local[3],Local[2]]);
[0114] (18)       } else {
[0117] (42)         chainScript(3,[Local[0]]);
[011D] (**)       }
[011D] (**)     }
[011D] (18)     goto 052C;
[0120] (**)   }
[0120] (**) }
[0120] (48) if (Local[0] == 9) {
[0127] (48)   if (VAR_CURRENT_LIGHTS == 0) {
[012E] (48)     if (VAR_EGO == 1) {
[0135] (94)       print(VAR_EGO,[Text(sound(0x36, 0x3F8) + "It's too dark to see it.")]);
[0162] (18)     } else {
[0165] (94)       print(VAR_EGO,[Text(sound(0x36, 0x7E0) + "It's too dark to see it.")]);
[0192] (**)     }
[0192] (18)     goto 00F5;
[0195] (**)   }
[0195] (**) }
[0195] (CB) VAR_RESULT = getVerbEntryPoint(Local[1],Local[0]);
[019C] (28) if (!VAR_RESULT) {
[01A1] (9A)   Local[4] = Local[1];
[01A6] (9D)   if (classOfIs(Local[4],[136])) {
[01AF] (08)     if (Local[0] != 10) {
[01B6] (42)       chainScript(3,[Local[0]]);
[01BC] (18)     } else {
[01BF] (18)       goto 052C;
[01C2] (**)     }
[01C2] (**)   }
[01C2] (28)   if (!Bit[0 + Local[3]]) {
[01C9] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[01CE] (48)     if (VAR_RESULT == 15) {
[01D5] (9D)       if (classOfIs(Local[4],[138])) {
[01DE] (48)         if (Local[0] == 10) {
[01E5] (B7)           startObject(Local[4],10,[]);
[01EA] (18)         } else {
[01ED] (FE)           walkActorTo(Local[3],VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01F4] (9A)           Var[465] = VAR_VIRT_MOUSE_X;
[01F9] (9A)           Var[466] = VAR_VIRT_MOUSE_Y;
[01FE] (AE)           WaitForActor(Local[3]);
[0202] (**)         }
[0202] (08)         if (Local[0] != 10) {
[0209] (42)           chainScript(3,[Local[0]]);
[020F] (18)         } else {
[0212] (18)           goto 052C;
[0215] (**)         }
[0215] (18)       } else {
[0218] (F6)         walkActorToObject(Local[3],Local[4]);
[021D] (C3)         Var[465] = getActorX(Local[4]);
[0222] (A3)         Var[466] = getActorY(Local[4]);
[0227] (AE)         WaitForActor(Local[3]);
[022B] (**)       }
[022B] (9D)     } else if (classOfIs(Local[4],[141])) {
[0237] (CD)       walkActorToActor(Local[3],Local[4],30);
[023D] (C3)       Var[465] = getActorX(Local[4]);
[0242] (A3)       Var[466] = getActorY(Local[4]);
[0247] (AE)       WaitForActor(Local[3]);
[024B] (80)       breakHere();
[024C] (**)     }
[024C] (**)   }
[024C] (9D)   if (classOfIs(Local[4],[141])) {
[0255] (18)   } else {
[0258] (F4)     VAR_RESULT = getDist(Local[3],Local[4]);
[025F] (04)     if (VAR_RESULT <= 16) {
[0266] (08)       if (Local[0] != 10) {
[026D] (48)         if (Local[0] == 11) {
[0274] (90)           VAR_RESULT = getObjectOwner(Local[1]);
[0279] (C8)           if (VAR_RESULT == VAR_EGO) {
[0280] (18)             goto 02A5;
[0283] (**)           }
[0283] (**)         }
[0283] (42)         chainScript(3,[Local[0]]);
[0289] (**)       }
[0289] (18)     } else {
[028C] (18)       goto 0424;
[028F] (**)     }
[028F] (**)   }
[028F] (48) } else if (Local[0] == 11) {
[0299] (90)   VAR_RESULT = getObjectOwner(Local[1]);
[029E] (C8)   if (VAR_RESULT == VAR_EGO) {
[02A5] (48)     if (VAR_EGO == 1) {
[02AC] (94)       print(VAR_EGO,[Text(sound(0x36, 0x3F9) + "I already have it.")]);
[02D3] (18)     } else {
[02D6] (94)       print(VAR_EGO,[Text(sound(0x36, 0x7E1) + "I already have it.")]);
[02FD] (**)     }
[02FD] (18)     goto 052C;
[0300] (**)   }
[0300] (**) }
[0300] (1A) Var[442] = 0;
[0305] (08) if (Local[0] != 10) {
[030C] (08)   if (Local[0] != 9) {
[0313] (08)     if (Local[0] != 11) {
[031A] (90)       VAR_RESULT = getObjectOwner(Local[1]);
[031F] (48)       if (VAR_RESULT == 15) {
[0326] (9D)         if (classOfIs(Local[1],[135])) {
[032F] (F9)           doSentence(Local[0],Local[1],Local[2]);
[0336] (59)           doSentence(11,Local[1],0);
[033C] (18)           goto 052C;
[033F] (**)         }
[033F] (46)         Var[442]++;
[0342] (**)       }
[0342] (90)       VAR_RESULT = getObjectOwner(Local[2]);
[0347] (48)       if (VAR_RESULT == 15) {
[034E] (9D)         if (classOfIs(Local[2],[135])) {
[0357] (F9)           doSentence(Local[0],Local[1],Local[2]);
[035E] (59)           doSentence(11,Local[2],0);
[0364] (18)           goto 052C;
[0367] (**)         }
[0367] (46)         Var[442]++;
[036A] (**)       }
[036A] (48)       if (Var[442] == 2) {
[0371] (9D)         if (classOfIs(Local[1],[159])) {
[037A] (9D)           if (classOfIs(Local[2],[159])) {
[0383] (F7)             startObject(Local[1],Local[0],[Local[2]]);
[038C] (18)             goto 052C;
[038F] (**)           }
[038F] (**)         }
[038F] (42)         chainScript(3,[Local[0]]);
[0395] (**)       }
[0395] (**)     }
[0395] (**)   }
[0395] (**) }
[0395] (9A) Local[4] = Local[1];
[039A] (90) VAR_RESULT = getObjectOwner(Local[1]);
[039F] (08) if (VAR_RESULT != 15) {
[03A6] (A8)   if (Local[2]) {
[03AB] (90)     VAR_RESULT = getObjectOwner(Local[2]);
[03B0] (48)     if (VAR_RESULT == 15) {
[03B7] (9A)       Local[4] = Local[2];
[03BC] (**)     }
[03BC] (**)   }
[03BC] (**) }
[03BC] (90) VAR_RESULT = getObjectOwner(Local[4]);
[03C1] (48) if (VAR_RESULT == 15) {
[03C8] (28)   if (!Bit[0 + Local[3]]) {
[03CF] (9D)     if (classOfIs(Local[4],[136])) {
[03D8] (80)       breakHere();
[03D9] (18)       goto 048D;
[03DC] (**)     }
[03DC] (9D)     if (classOfIs(Local[4],[138])) {
[03E5] (18)       goto 048D;
[03E8] (18)     } else {
[03EB] (F6)       walkActorToObject(Local[3],Local[4]);
[03F0] (C3)       Var[465] = getActorX(Local[4]);
[03F5] (A3)       Var[466] = getActorY(Local[4]);
[03FA] (AE)       WaitForActor(Local[3]);
[03FE] (**)     }
[03FE] (**)   }
[03FE] (18) } else {
[0401] (9D)   unless (classOfIs(Local[4],[141])) goto 040A;
[040A] (**) }
[040A] (9D) if (classOfIs(Local[4],[141])) {
[0413] (18) } else {
[0416] (F4)   VAR_RESULT = getDist(Local[3],Local[4]);
[041D] (44)   if (VAR_RESULT > 16) {
[0424] (C9)     faceActor(Local[3],Local[4]);
[0429] (AE)     WaitForActor(Local[3]);
[042D] (48)     if (VAR_EGO == 1) {
[0434] (94)       print(VAR_EGO,[Text(sound(0x36, 0x3FA) + "I can't reach it.")]);
[045A] (18)     } else {
[045D] (94)       print(VAR_EGO,[Text(sound(0x36, 0x7E2) + "I can't reach it.")]);
[0483] (**)     }
[0483] (0A)     startScript(13,[]);
[0486] (0A)     startScript(14,[]);
[0489] (19)     doSentence(STOP);
[048B] (62)     stopScript(0);
[048D] (**)   }
[048D] (**) }
[048D] (A8) if (Bit[0 + Local[3]]) {
[0494] (48)   if (Local[0] == 10) {
[049B] (18)     goto 052C;
[049E] (**)   }
[049E] (**) }
[049E] (A8) if (Local[2]) {
[04A3] (0A)   startScript(9,[Local[1]]);
[04A9] (28)   if (!Var[444]) {
[04AE] (42)     chainScript(3,[Local[0]]);
[04B4] (**)   }
[04B4] (**) }
[04B4] (1A) Local[6] = 0;
[04B9] (9D) if (classOfIs(Local[1],[144])) {
[04C2] (1A)   Local[6] = 12;
[04C7] (9D) } else if (classOfIs(Local[1],[143])) {
[04D3] (1A)   Local[6] = 10;
[04D8] (9D) } else if (classOfIs(Local[1],[142])) {
[04E4] (1A)   Local[6] = 11;
[04E9] (**) }
[04E9] (A8) if (Local[6]) {
[04EE] (90)   VAR_RESULT = getObjectOwner(Local[1]);
[04F3] (48)   if (VAR_RESULT == 15) {
[04FA] (08)     if (Local[0] != 10) {
[0501] (08)       if (Local[0] != 9) {
[0508] (40)         cutscene([2]);
[050D] (D1)         animateCostume(VAR_EGO,Local[6]);
[0512] (2E)         delay(20);
[0516] (91)         animateCostume(VAR_EGO,3);
[051A] (C0)         endCutscene();
[051B] (**)       }
[051B] (**)     }
[051B] (**)   }
[051B] (**) }
[051B] (9A) VAR_ME = Local[1];
[0520] (F7) startObject(Local[1],Local[0],[Local[2],Local[0]]);
[052C] (AE) WaitForActor(VAR_EGO);
[0530] (0A) startScript(14,[]);
[0533] (1A) Var[120] = -1;
[0538] (A0) stopObjectCode();
END

//Script 3: Default verb responses
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = Var[107];
[000A] (**) }
[000A] (48) if (Local[0] == 3) {
[0011] (48)   if (VAR_EGO == 1) {
[0018] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F0) + "It doesn't seem to\x10open.")]);
[0045] (18)   } else {
[0048] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7D8) + "It doesn't seem to\x10open.")]);
[0075] (**)   }
[0075] (48) } else if (Local[0] == 4) {
[007F] (48)   if (VAR_EGO == 1) {
[0086] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F1) + "It doesn't seem to\x10close.")]);
[00B4] (18)   } else {
[00B7] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7D9) + "It doesn't seem to\x10close.")]);
[00E5] (**)   }
[00E5] (48) } else if (Local[0] == 6) {
[00EF] (18)   goto 00FC;
[00F2] (48) } else if (Local[0] == 7) {
[00FC] (48)   if (VAR_EGO == 1) {
[0103] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F2) + "I can't move\x10it.")]);
[0128] (18)   } else {
[012B] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7DA) + "I can't move\x10it.")]);
[0150] (**)   }
[0150] (48) } else if (Local[0] == 9) {
[015A] (48)   if (VAR_EGO == 1) {
[0161] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F3) + "I don't see anything special about\x10it.")]);
[019C] (18)   } else {
[019F] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7DB) + "I don't see anything special about\x10it.")]);
[01DA] (**)   }
[01DA] (48) } else if (Local[0] == 11) {
[01E4] (48)   if (VAR_EGO == 1) {
[01EB] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F4) + "I can't pick that\x10up.")]);
[0215] (18)   } else {
[0218] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7DC) + "I can't pick that\x10up.")]);
[0242] (**)   }
[0242] (48) } else if (Local[0] == 79) {
[024C] (48)   if (VAR_EGO == 1) {
[0253] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F5) + "I can't reach that from\x10here.")]);
[0285] (18)   } else {
[0288] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7DD) + "I can't reach that from\x10here.")]);
[02BA] (**)   }
[02BA] (48) } else if (Local[0] == 88) {
[02C4] (18)   goto 038E;
[02C7] (18) } else {
[02CA] (90)   VAR_RESULT = getObjectOwner(Var[105]);
[02CF] (C8)   if (VAR_RESULT == VAR_EGO) {
[02D6] (9D)   } else if (classOfIs(Var[105],[16])) {
[02E2] (9D)     if (classOfIs(Var[105],[15])) {
[02EB] (9D)       if (classOfIs(Var[105],[15])) {
[02F4] (18)         goto 038E;
[02F7] (**)       }
[02F7] (**)     }
[02F7] (**)   }
[02F7] (9D)   if (classOfIs(Var[105],[1])) {
[0300] (9D)     if (classOfIs(Var[105],[2])) {
[0309] (9D)       if (classOfIs(Var[105],[3])) {
[0312] (9D)         if (classOfIs(Var[105],[4])) {
[031B] (A8)           if (Var[106]) {
[0320] (18)             goto 038E;
[0323] (**)           }
[0323] (**)         }
[0323] (**)       }
[0323] (**)     }
[0323] (**)   }
[0323] (48)   if (VAR_EGO == 1) {
[032A] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F6) + "That doesn't seem to\x10work.")]);
[0359] (18)   } else {
[035C] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7DE) + "That doesn't seem to\x10work.")]);
[038B] (**)   }
[038B] (18)   goto 03FC;
[038E] (48)   if (VAR_EGO == 1) {
[0395] (94)     print(VAR_EGO,[Text(sound(0x36, 0x3F7) + "I don't think that will\x10work.")]);
[03C7] (18)   } else {
[03CA] (94)     print(VAR_EGO,[Text(sound(0x36, 0x7DF) + "I don't think that will\x10work.")]);
[03FC] (**)   }
[03FC] (**) }
[03FC] (19) doSentence(STOP);
[03FE] (0A) startScript(13,[]);
[0401] (0A) startScript(14,[]);
[0404] (A0) stopObjectCode();
END

// Script 4
[0000] (9A) Var[100] = VAR_VIRT_MOUSE_X;
[0005] (9A) Var[101] = VAR_VIRT_MOUSE_Y;
[000A] (A8) if (Bit[733]) {
[000F] (1A)   Bit[22] = 1;
[0014] (1A)   Bit[733] = 0;
[0019] (**) }
[0019] (48) if (Local[2] == 2) {
[0020] (28)   if (!Var[110]) {
[0025] (A8)     if (Var[123]) {
[002A] (9A)       Var[107] = Var[123];
[002F] (**)     }
[002F] (**)   }
[002F] (**) }
[002F] (48) if (Local[0] == 4) {
[0036] (48)   if (Local[1] == 109) {
[003D] (48)   } else if (Local[1] == 102) {
[0047] (A8)     if (Bit[107]) {
[004C] (14)       print(252,[Color(8),Text("Keyboard Fighting On")]);
[0066] (1A)       Bit[107] = 0;
[006B] (18)     } else {
[006E] (14)       print(252,[Color(8),Text("Keyboard Fighting Off")]);
[0089] (1A)       Bit[107] = 1;
[008E] (**)     }
[008E] (48)   } else if (Local[1] == 105) {
[0098] (0A)     startScript(150,[]);
[009B] (18)   } else {
[009E] (0A)     startScript(22,[Local[1]]);
[00A4] (9A)     Local[1] = Var[444];
[00A9] (A8)     if (Local[1]) {
[00AE] (1A)       Local[0] = 1;
[00B3] (**)     }
[00B3] (1A)     Bit[6] = 0;
[00B8] (**)   }
[00B8] (**) }
[00B8] (48) if (Local[0] == 1) {
[00BF] (28)   if (!Local[1]) {
[00C4] (62)     stopScript(0);
[00C6] (**)   }
[00C6] (48)   if (Local[1] == 100) {
[00CD] (62)     stopScript(0);
[00CF] (**)   }
[00CF] (48)   if (Local[1] == 52) {
[00D6] (42)     chainScript(150,[]);
[00D9] (**)   }
[00D9] (48)   if (Local[1] == 53) {
[00E0] (42)     chainScript(150,[]);
[00E3] (**)   }
[00E3] (48)   if (Local[1] == 54) {
[00EA] (42)     chainScript(150,[]);
[00ED] (**)   }
[00ED] (48)   if (Local[1] == 55) {
[00F4] (42)     chainScript(150,[]);
[00F7] (**)   }
[00F7] (48)   if (Local[1] == 1) {
[00FE] (A8)     if (Var[103]) {
[0103] (FA)       VerbOps(Var[103],[Color(14)]);
[0109] (9A)       Local[1] = Var[103];
[010E] (18)       goto 01AE;
[0111] (**)     }
[0111] (62)     stopScript(0);
[0113] (**)   }
[0113] (48)   if (Local[1] == 2) {
[011A] (62)     stopScript(0);
[011C] (**)   }
[011C] (48)   if (Local[1] == 111) {
[0123] (48)     if (Local[2] == 2) {
[012A] (1A)       Var[126] = 0;
[012F] (18)     } else {
[0132] (3A)       Var[126] -= 1;
[0137] (**)     }
[0137] (42)     chainScript(10,[1]);
[013D] (**)   }
[013D] (48)   if (Local[1] == 112) {
[0144] (48)     if (Local[2] == 2) {
[014B] (AC)       Exprmode Var[126] = ((<VAR_RESULT = getInventoryCount(VAR_EGO)> - 2) / 5);
[015D] (18)     } else {
[0160] (5A)       Var[126] += 1;
[0165] (**)     }
[0165] (42)     chainScript(10,[1]);
[016B] (**)   }
[016B] (38)   if (Local[1] >= 101) {
[0172] (04)     if (Local[1] <= 110) {
[0179] (08)       if (Var[107] != 10) {
[0180] (AC)         Exprmode Local[4] = (Local[1] - 101);
[018B] (A8)         if (Var[110]) {
[0190] (9A)           Var[109] = Var[141 + Local[4]];
[0197] (18)         } else {
[019A] (9A)           Var[108] = Var[141 + Local[4]];
[01A1] (**)         }
[01A1] (1A)         Local[6] = 1;
[01A6] (18)         goto 01D1;
[01A9] (18)       } else {
[01AC] (62)         stopScript(0);
[01AE] (**)       }
[01AE] (**)     }
[01AE] (**)   }
[01AE] (9A)   Var[107] = Local[1];
[01B3] (9A)   Var[112] = Local[1];
[01B8] (1A)   Var[108] = 0;
[01BD] (1A)   Var[109] = 0;
[01C2] (1A)   Var[110] = 0;
[01C7] (1A)   Var[120] = -1;
[01CC] (1A)   Bit[18] = 0;
[01D1] (**) }
[01D1] (48) if (Var[107] == 12) {
[01D8] (78)   if (Var[108] < 16) {
[01DF] (9D)     if (classOfIs(Var[108],[141])) {
[01E8] (1A)       Bit[16] = 1;
[01ED] (19)       doSentence(STOP);
[01EF] (9A)       Var[176] = Var[108];
[01F4] (0A)       startScript(14,[]);
[01F7] (7A)       VerbOps(100,[Color(Var[117]);]);
[01FD] (C9)       faceActor(VAR_EGO,Var[108]);
[0202] (80)       breakHere();
[0203] (80)       breakHere();
[0204] (9A)       Var[107] = Var[111];
[0209] (1A)       Var[108] = 0;
[020E] (1A)       Var[109] = 0;
[0213] (1A)       Var[110] = 0;
[0218] (1A)       Var[120] = -1;
[021D] (1A)       Bit[18] = 0;
[0222] (8A)       startScript(Var[164],[]);
[0226] (62)       stopScript(0);
[0228] (**)     }
[0228] (**)   }
[0228] (**) }
[0228] (48) if (Var[107] == 9) {
[022F] (44)   if (Var[108] > 0) {
[0236] (04)     if (Var[108] <= 12) {
[023D] (1A)       Bit[16] = 1;
[0242] (9A)       Var[181] = Var[108];
[0247] (48)       if (Var[180] == 0) {
[024E] (48)         if (VAR_EGO == 1) {
[0255] (D8)           printEgo([Text(sound(0x36, 0x3ED) + "There's nothing to look at.")]);
[0283] (18)         } else {
[0286] (D8)           printEgo([Text(sound(0x36, 0x7D5) + "There's nothing to look at.")]);
[02B4] (**)         }
[02B4] (18)       } else {
[02B7] (9A)         Var[107] = Var[111];
[02BC] (1A)         Var[108] = 0;
[02C1] (1A)         Var[109] = 0;
[02C6] (1A)         Var[110] = 0;
[02CB] (1A)         Var[120] = -1;
[02D0] (8A)         startScript(Var[180],[]);
[02D4] (62)         stopScript(0);
[02D6] (**)       }
[02D6] (18)     } else {
[02D9] (1A)       Var[181] = 0;
[02DE] (**)     }
[02DE] (**)   }
[02DE] (**) }
[02DE] (48) if (Var[107] == 8) {
[02E5] (A8)   if (Var[108]) {
[02EA] (0A)     startScript(9,[Var[108]]);
[02F0] (9A)     Var[110] = Var[444];
[02F5] (**)   }
[02F5] (**) }
[02F5] (48) if (Var[107] == 5) {
[02FC] (A8)   if (Var[108]) {
[0301] (1A)     Var[110] = 132;
[0306] (**)   }
[0306] (**) }
[0306] (48) if (Local[0] == 2) {
[030D] (1A)   Bit[16] = 1;
[0312] (A8)   if (Var[110]) {
[0317] (A8)     if (Var[109]) {
[031C] (1A)       Local[6] = 1;
[0321] (A8)     } else if (Bit[18]) {
[0329] (18)       goto 03E9;
[032C] (18)     } else {
[032F] (1A)       Bit[18] = 1;
[0334] (**)     }
[0334] (18)   } else {
[0337] (1A)     Local[6] = 1;
[033C] (**)   }
[033C] (**) }
[033C] (28) if (!Var[107]) {
[0341] (9A)   Var[107] = Var[111];
[0346] (**) }
[0346] (0A) startScript(14,[]);
[0349] (A8) if (Local[6]) {
[034E] (62)   stopScript(69);
[0350] (A8)   if (Var[108]) {
[0355] (A8)     if (Var[110]) {
[035A] (A8)       if (Var[109]) {
[035F] (18)         goto 039C;
[0362] (A8)       } else if (Bit[18]) {
[036A] (18)         goto 03E9;
[036D] (18)       } else {
[0370] (1A)         Bit[18] = 1;
[0375] (18)         goto 0416;
[0378] (**)       }
[0378] (18)     } else {
[037B] (48)       if (Var[107] == 10) {
[0382] (9D)         if (classOfIs(Var[108],[141])) {
[038B] (18)         } else {
[038E] (90)           VAR_RESULT = getObjectOwner(Var[108]);
[0393] (08)           if (VAR_RESULT != 15) {
[039A] (62)             stopScript(0);
[039C] (**)           }
[039C] (**)         }
[039C] (**)       }
[039C] (19)       doSentence(STOP);
[039E] (1A)       Var[104] = 0;
[03A3] (F9)       doSentence(Var[107],Var[108],Var[109]);
[03AA] (**)     }
[03AA] (18)   } else {
[03AD] (48)     if (Var[107] == 10) {
[03B4] (28)       if (!Bit[0 + Var[1]]) {
[03BB] (48)         if (Local[0] == 2) {
[03C2] (19)           doSentence(STOP);
[03C4] (2C)           InitCharset(1);
[03C7] (7A)           VerbOps(100,[Color(Var[117]);]);
[03CD] (2C)           InitCharset(2);
[03D0] (1A)           Var[113] = 0;
[03D5] (FE)           walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[03DC] (9A)           Var[465] = VAR_VIRT_MOUSE_X;
[03E1] (9A)           Var[466] = VAR_VIRT_MOUSE_Y;
[03E6] (**)         }
[03E6] (**)       }
[03E6] (18)     } else {
[03E9] (0A)       startScript(13,[]);
[03EC] (0A)       startScript(14,[]);
[03EF] (**)     }
[03EF] (AE)     WaitForActor(VAR_EGO);
[03F3] (7A)     VerbOps(100,[Color(Var[118]);]);
[03F9] (**)   }
[03F9] (A8)   if (Var[125]) {
[03FE] (8A)     startScript(Var[125],[]);
[0402] (**)   }
[0402] (28)   if (!Var[108]) {
[0407] (0A)     startScript(14,[]);
[040A] (18)   } else {
[040D] (7A)     VerbOps(100,[Color(Var[117]);]);
[0413] (0A)     startScript(13,[]);
[0416] (**)   }
[0416] (**) }
[0416] (A0) stopObjectCode();
END

//Script 5
[0000] (0A) startScript(13,[]);
[0003] (0A) startScript(14,[]);
[0006] (9A) Var[121] = VAR_WALKTO_OBJ;
[000B] (19) doSentence(STOP);
[000D] (0A) startScript(45,[]);
[0010] (A0) stopObjectCode();
END

// Script 9
[0000] (1A) Var[444] = 0;
[0005] (1A) Local[1] = 129;
[000A] (9D) if (classOfIs(Local[0],[Local[1]])) {
[0013] (9A)   Var[444] = Local[1];
[0018] (**) }
[0018] (46) Local[1]++;
[001B] (44) unless (Local[1] > 132) goto 000A;
[0022] (A0) stopObjectCode();
END

// Script 10
[0000] (1A) Local[8] = 0;
[0005] (10) VAR_RESULT = getObjectOwner(933);
[000A] (C8) if (VAR_RESULT == VAR_EGO) {
[0011] (1D)   if (classOfIs(933,[158])) {
[001A] (AC)     Exprmode Var[490] = ((<VAR_RESULT = getInventoryCount(VAR_EGO)> - 2) / 5);
[002C] (1A)     Local[8] = 1;
[0031] (18)     goto 0046;
[0034] (**)   }
[0034] (**) }
[0034] (AC) Exprmode Var[490] = ((<VAR_RESULT = getInventoryCount(VAR_EGO)> - 1) / 5);
[0046] (28) if (!Local[0]) {
[004B] (AC)   Exprmode Var[126] = (Var[490] - 1);
[0056] (**) }
[0056] (C4) if (Var[126] > Var[490]) {
[005D] (9A)   Var[126] = Var[490];
[0062] (**) }
[0062] (78) if (Var[126] < 0) {
[0069] (1A)   Var[126] = 0;
[006E] (**) }
[006E] (28) if (!Bit[21]) {
[0073] (1A)   Local[4] = 1;
[0078] (AC)   Exprmode Var[442] = ((101 + Local[4]) - 1);
[0087] (FA)   VerbOps(Var[442],[Off()]);
[008C] (46)   Local[4]++;
[008F] (44)   unless (Local[4] > 10) goto 0078;
[0096] (10)   VAR_RESULT = getObjectOwner(1208);
[009B] (48)   if (VAR_RESULT == 1) {
[00A2] (7A)     VerbOps(82,[New(),Text(" "),Off()]);
[00AA] (7A)     VerbOps(83,[New(),Text(" "),Off()]);
[00B2] (7A)     VerbOps(84,[New(),Text(" "),Off()]);
[00BA] (7A)     VerbOps(85,[New(),Text(" "),Off()]);
[00C2] (**)   }
[00C2] (0A)   startScript(131,[]);
[00C5] (**) }
[00C5] (AC) Exprmode Local[5] = ((Var[126] * 5) + 1);
[00D4] (AC) Exprmode Local[6] = ((Local[5] + 10) - 1);
[00E3] (A8) if (Local[8]) {
[00E8] (F8)   if (Local[8] < Local[5]) {
[00EF] (46)     Local[5]++;
[00F2] (46)     Local[6]++;
[00F5] (**)   }
[00F5] (**) }
[00F5] (1A) Var[429] = 0;
[00FA] (1A) Local[7] = 0;
[00FF] (1A) Var[443] = 0;
[0104] (9A) Local[1] = Local[5];
[0109] (FD) Local[2] = findInventory(VAR_EGO,Local[1]);
[0110] (9A) Var[141 + Local[7]] = Local[2];
[0117] (A8) if (Local[2]) {
[011C] (9D)   if (classOfIs(Local[2],[30])) {
[0125] (8B)     VAR_RESULT = getVerbEntryPoint(Local[2],91);
[012C] (A8)     if (VAR_RESULT) {
[0131] (B7)       startObject(Local[2],91,[]);
[0136] (9A)       Local[3] = Var[161];
[013B] (18)     } else {
[013E] (1A)       Local[3] = 1261;
[0143] (**)     }
[0143] (AC)     Exprmode Local[9] = (101 + Local[7]);
[014E] (48)     if (Local[2] == 1208) {
[0155] (1D)       if (classOfIs(1208,[146])) {
[015E] (28)         if (!Bit[21]) {
[0163] (9A)           Var[429] = Local[9];
[0168] (0A)           startScript(77,[Local[7],5]);
[0171] (9A)           Local[4] = Var[444];
[0176] (44)           if (Local[7] > 4) {
[017D] (1A)             Var[443] = 1;
[0182] (**)           }
[0182] (AC)           Exprmode Local[4] = ((Local[4] * 32) + 160);
[0191] (AC)           Exprmode Var[443] = ((Var[443] * 24) + 152);
[01A0] (7A)           VerbOps(83,[New(),SetXY(Local[4],Var[443]),SetToObject(1378,98),Off()]);
[01AE] (7A)           VerbOps(84,[New(),SetXY(Local[4],Var[443]),SetToObject(1379,98),Off()]);
[01BC] (7A)           VerbOps(85,[New(),SetXY(Local[4],Var[443]),SetToObject(1381,98),Off()]);
[01CA] (7A)           VerbOps(82,[New(),SetXY(Local[4],Var[443]),SetToObject(1377,98),Dim()]);
[01D8] (**)         }
[01D8] (**)       }
[01D8] (**)     }
[01D8] (28)     if (!Bit[21]) {
[01DD] (FA)       VerbOps(Local[9],[SetToObject(Local[3],98),On()]);
[01E6] (**)     }
[01E6] (18)   } else {
[01E9] (C6)     Local[7]--;
[01EC] (46)     Local[6]++;
[01EF] (**)   }
[01EF] (**) }
[01EF] (46) Local[7]++;
[01F2] (46) Local[1]++;
[01F5] (C4) unless (Local[1] > Local[6]) goto 0109;
[01FC] (28) if (!Var[429]) {
[0201] (1A)   Bit[542] = 0;
[0206] (62)   stopScript(197);
[0208] (08) } else if (VAR_ROOM != 31) {
[0212] (28)   if (!Bit[21]) {
[0217] (1A)     Bit[542] = 1;
[021C] (0A)     startScript(197,[]);
[021F] (**)   }
[021F] (**) }
[021F] (7A) VerbOps(111,[Off()]);
[0223] (7A) VerbOps(112,[Off()]);
[0227] (28) if (!Bit[21]) {
[022C] (44)   if (Var[126] > 0) {
[0233] (7A)     VerbOps(111,[On()]);
[0237] (18)   } else {
[023A] (7A)     VerbOps(111,[Dim()]);
[023E] (**)   }
[023E] (AC)   Exprmode Var[442] = (Var[490] - 1);
[0249] (F8)   if (Var[126] < Var[442]) {
[0250] (7A)     VerbOps(112,[On()]);
[0254] (18)   } else {
[0257] (7A)     VerbOps(112,[Dim()]);
[025B] (**)   }
[025B] (**) }
[025B] (A0) stopObjectCode();
END

// Script 11
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

// Script 12
[0000] (90) VAR_RESULT = getObjectOwner(Local[0]);
[0005] (48) if (VAR_RESULT == 15) {
[000C] (9D)   if (classOfIs(Local[0],[135])) {
[0015] (79)     doSentence(5,Local[0],Local[1]);
[001B] (59)     doSentence(11,Local[0],0);
[0021] (0A)     startScript(14,[]);
[0024] (62)     stopScript(0);
[0026] (18)   } else {
[0029] (42)     chainScript(3,[8]);
[002F] (**)   }
[002F] (**) }
[002F] (28) if (!Bit[0 + Var[1]]) {
[0036] (F6)   walkActorToObject(VAR_EGO,Local[1]);
[003B] (C3)   Var[465] = getActorX(Local[1]);
[0040] (A3)   Var[466] = getActorY(Local[1]);
[0045] (**) }
[0045] (AE) WaitForActor(VAR_EGO);
[0049] (F4) VAR_RESULT = getDist(VAR_EGO,Local[1]);
[0050] (04) if (VAR_RESULT <= 32) {
[0057] (B7)   startObject(Local[1],80,[Local[0]]);
[005F] (9D) } else if (classOfIs(Local[1],[136])) {
[006B] (B7)   startObject(Local[1],80,[Local[0]]);
[0073] (**) }
[0073] (A0) stopObjectCode();
END

// Script 13
[0000] (9A) Var[107] = Var[111];
[0005] (1A) Var[108] = 0;
[000A] (1A) Var[109] = 0;
[000F] (1A) Var[110] = 0;
[0014] (1A) Var[120] = 0;
[0019] (1A) Bit[18] = 0;
[001E] (1A) Var[105] = 0;
[0023] (1A) Var[106] = 0;
[0028] (1A) Var[113] = 0;
[002D] (1A) Var[114] = 0;
[0032] (1A) Var[115] = 0;
[0037] (A0) stopObjectCode();
END

// Script 14
[0000] (48) if (Var[108] == 933) {
[0007] (27)   PutCodeInString(32, "orichalcum");
[0015] (18) } else {
[0018] (27)   PutCodeInString(32, getName(Var[108]));
[0020] (**) }
[0020] (48) if (Var[109] == 933) {
[0027] (27)   PutCodeInString(33, "orichalcum");
[0035] (18) } else {
[0038] (27)   PutCodeInString(33, getName(Var[109]));
[0040] (**) }
[0040] (A8) if (Var[108]) {
[0045] (9D)   if (classOfIs(Var[108],[141])) {
[004E] (7A)     VerbOps(100,[Text(getVerb(Var[107]) + " " + getName(Var[108]) + " " + getVerb(Var[110]) + " " + getName(Var[109])),Color(Var[118]);]);
[0069] (18)   } else {
[006C] (7A)     VerbOps(100,[Text(getVerb(Var[107]) + " " + getString(VAR_VERB_SCRIPT) + " " + getVerb(Var[110]) + " " + getString(VAR_SENTENCE_SCRIPT)),Color(Var[118]);]);
[0087] (**)   }
[0087] (C8) } else if (Var[107] == Var[111]) {
[0091] (08)   if (VAR_ROOM != 79) {
[0098] (A8)     if (Bit[543]) {
[009D] (38)       if (VAR_ROOM >= 226) {
[00A4] (04)         if (VAR_ROOM <= 231) {
[00AB] (7A)           VerbOps(100,[Text("\x10")]);
[00B1] (7A)           VerbOps(100,[Text("Float"),Color(Var[118]);]);
[00BE] (18)           goto 0101;
[00C1] (**)         }
[00C1] (**)       }
[00C1] (**)     }
[00C1] (7A)     VerbOps(100,[Text("\x10")]);
[00C7] (7A)     VerbOps(100,[Text("Walk"),Color(Var[118]);]);
[00D3] (18)   } else {
[00D6] (7A)     VerbOps(100,[Text("\x10")]);
[00DC] (7A)     VerbOps(100,[Text("Look"),Color(Var[118]);]);
[00E8] (**)   }
[00E8] (18) } else {
[00EB] (7A)   VerbOps(100,[Text(getVerb(Var[107]) + " " + getVerb(Var[110]) + " " + getString(VAR_SENTENCE_SCRIPT)),Color(Var[118]);]);
[0101] (**) }
[0101] (A0) stopObjectCode();
END

// Script 15
[0000] (2E) delay(60);
[0004] (16) Local[0] = getRandomNr(10);
[0008] (1A) Var[104] = 0;
[000D] (18) goto 0000;
[0010] (A0) stopObjectCode();
END

// Script 17
[0000] (48) if (Local[0] == 2) {
[0007] (F5)   Local[5] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[000E] (1A)   Local[6] = 0;
[0013] (48)   if (Var[167 + Local[6]] == 1) {
[001C] (AC)     Exprmode Local[1] = (120 + Local[6]);
[0027] (1A)     Local[0] = 1;
[002C] (A8)     if (Bit[7 + Local[6]]) {
[0033] (1A)       Bit[5] = 0;
[0038] (18)     } else {
[003B] (1A)       Bit[5] = 1;
[0040] (**)     }
[0040] (A8)   } else if (Local[5]) {
[0048] (C8)     if (Var[167 + Local[6]] == Local[5]) {
[0051] (AC)       Exprmode Local[1] = (120 + Local[6]);
[005C] (1A)       Local[0] = 1;
[0061] (A8)       if (Bit[7 + Local[6]]) {
[0068] (1A)         Bit[5] = 0;
[006D] (18)       } else {
[0070] (1A)         Bit[5] = 1;
[0075] (**)       }
[0075] (**)     }
[0075] (**)   }
[0075] (46)   Local[6]++;
[0078] (44)   unless (Local[6] > 8) goto 0013;
[007F] (**) }
[007F] (48) if (Local[0] == 1) {
[0086] (48)   if (Local[1] == 50) {
[008D] (62)     stopScript(0);
[008F] (**)   }
[008F] (48)   if (Local[2] == 2) {
[0096] (38)     if (Local[1] >= 120) {
[009D] (04)       if (Local[1] <= 128) {
[00A4] (28)         if (!Bit[5]) {
[00A9] (94)           print(VAR_EGO,[Text(getVerb(Local[1]))]);
[00B2] (28)           if (!Var[179]) {
[00B7] (AE)             WaitForMessage();
[00B9] (**)           }
[00B9] (**)         }
[00B9] (14)         print(255,[]);
[00BC] (**)       }
[00BC] (**)     }
[00BC] (62)     stopScript(0);
[00BE] (**)   }
[00BE] (A8)   if (Local[1]) {
[00C3] (1A)     Var[442] = 120;
[00C8] (FA)     VerbOps(Var[442],[Off()]);
[00CD] (46)     Var[442]++;
[00D0] (44)     unless (Var[442] > 128) goto 00C8;
[00D7] (26)     setVarRange(Var[167],9,[0,0,0,0,0,0,0,0,0]);
[00E4] (26)     setVarRange(Bit[7],9,[0,0,0,0,0,0,0,0,0]);
[00F1] (2C)     CursorHide();
[00F3] (2C)     UserputOff();
[00F5] (**)   }
[00F5] (38)   if (Local[1] >= 120) {
[00FC] (04)     if (Local[1] <= 128) {
[0103] (28)       if (!Bit[5]) {
[0108] (94)         print(VAR_EGO,[Text(getVerb(Local[1]))]);
[0111] (28)         if (!Var[179]) {
[0116] (AE)           WaitForMessage();
[0118] (**)         }
[0118] (**)       }
[0118] (14)       print(255,[]);
[011B] (9A)       Var[165] = Local[1];
[0120] (**)     }
[0120] (**)   }
[0120] (**) }
[0120] (48) if (Local[0] == 4) {
[0127] (42)   chainScript(22,[Local[1]]);
[012D] (**) }
[012D] (A0) stopObjectCode();
END

// Script 18
[0000] (2C) InitCharset(1);
[0003] (7A) VerbOps(1,[New(),SetXY(0,152),SetToObject(1263,98),BackColor(0)]);
[0012] (7A) VerbOps(2,[New(),SetXY(144,152),SetToObject(1264,98),BackColor(0)]);
[0021] (7A) VerbOps(52,[New(),SetXY(144,152),SetToObject(1353,98),Off(),BackColor(0)]);
[0031] (7A) VerbOps(53,[New(),SetXY(261,159),Text("None"),Off()]);
[0041] (7A) VerbOps(54,[New(),SetXY(261,173),Text("0"),Off()]);
[004E] (7A) VerbOps(55,[New(),SetXY(261,187),Text("0"),Off()]);
[005B] (1A) Var[442] = 53;
[0060] (FA) VerbOps(Var[442],[Color(14),HiColor(14),BackColor(176),DimColor(14)]);
[006C] (46) Var[442]++;
[006F] (44) unless (Var[442] > 55) goto 0060;
[0076] (7A) VerbOps(50,[New(),SetXY(0,144),SetToObject(1262,98),Off(),BackColor(0)]);
[0086] (7A) VerbOps(51,[New(),SetXY(0,144),SetToObject(1352,98),Off(),BackColor(0)]);
[0096] (7A) VerbOps(5,[New(),Text("Give"),Key(103),SetXY(15,159)]);
[00A7] (7A) VerbOps(3,[New(),Text("Open"),Key(111),SetXY(14,173)]);
[00B8] (7A) VerbOps(4,[New(),Text("Close"),Key(99),SetXY(12,187)]);
[00CA] (7A) VerbOps(11,[New(),Text("Pick up"),Key(112),SetXY(54,159)]);
[00DE] (7A) VerbOps(12,[New(),Text("Talk to"),Key(116),SetXY(53,173)]);
[00F2] (7A) VerbOps(9,[New(),Text("Look at"),Key(108),SetXY(53,187)]);
[0106] (7A) VerbOps(8,[New(),Text("Use"),Key(117),SetXY(108,159)]);
[0116] (7A) VerbOps(6,[New(),Text("Push"),Key(115),SetXY(106,173)]);
[0127] (7A) VerbOps(7,[New(),Text("Pull"),Key(121),SetXY(108,187)]);
[0138] (7A) VerbOps(10,[New(),Text("Walk to"),Key(119),SetXY(0,210)]);
[014C] (1A) Var[442] = 1;
[0151] (FA) VerbOps(Var[442],[Color(178),HiColor(14),BackColor(176),DimColor(177)]);
[015D] (46) Var[442]++;
[0160] (44) unless (Var[442] > 18) goto 0151;
[0167] (0A) startScript(132,[]);
[016A] (7A) VerbOps(129,[New(),Text("in"),Off()]);
[0173] (7A) VerbOps(130,[New(),Text("with"),Off()]);
[017E] (7A) VerbOps(131,[New(),Text("on"),Off()]);
[0187] (7A) VerbOps(132,[New(),Text("to"),Off()]);
[0190] (7A) VerbOps(111,[New(),SetXY(147,158),Color(178),HiColor(14),Text("\x01"),Off(),Key(62),DimColor(177),BackColor(176)]);
[01A7] (7A) VerbOps(112,[New(),SetXY(147,180),Color(178),HiColor(14),Text("\x02"),Off(),Key(60),DimColor(177),BackColor(176)]);
[01BE] (7A) VerbOps(100,[New(),Text("Walk"),SetXY(160,144),Color(Var[118]);,HiColor(Var[117]);,BackColor(0),Center()]);
[01D6] (1A) Var[118] = 3;
[01DB] (1A) Var[117] = 11;
[01E0] (2C) InitCharset(2);
[01E3] (A0) stopObjectCode();
END

// Script 19
[0000] (48) if (Local[0] == 3) {
[0007] (1A)   Var[120] = -1;
[000C] (1A)   Local[1] = 1;
[0011] (FA)   VerbOps(Local[1],[Off()]);
[0016] (46)   Local[1]++;
[0019] (44)   unless (Local[1] > 128) goto 0011;
[0020] (A8)   if (Bit[542]) {
[0025] (62)     stopScript(197);
[0027] (**)   }
[0027] (0A)   startScript(19,[1]);
[002D] (48) } else if (Local[0] == 2) {
[0037] (1A)   Var[120] = -1;
[003C] (28)   if (!Bit[21]) {
[0041] (AB)     restoreVerbs(1,100,1);
[0046] (AB)     restoreVerbs(101,112,5);
[004B] (18)   } else {
[004E] (AB)     restoreVerbs(101,112,5);
[0053] (AB)     restoreVerbs(1,2,1);
[0058] (AB)     restoreVerbs(3,100,1);
[005D] (AB)     restoreVerbs(111,112,5);
[0062] (**)   }
[0062] (AB)   restoreVerbs(52,55,1);
[0067] (1A)   Local[1] = 3;
[006C] (FA)   VerbOps(Local[1],[On()]);
[0071] (46)   Local[1]++;
[0074] (44)   unless (Local[1] > 12) goto 006C;
[007B] (7A)   VerbOps(1,[On()]);
[007F] (28)   if (!Bit[21]) {
[0084] (7A)     VerbOps(2,[Dim()]);
[0088] (**)   }
[0088] (7A)   VerbOps(51,[Off()]);
[008C] (1A)   Local[1] = 1;
[0091] (FA)   VerbOps(Local[1],[Color(178)]);
[0097] (46)   Local[1]++;
[009A] (44)   unless (Local[1] > 12) goto 0091;
[00A1] (A8)   if (Bit[21]) {
[00A6] (1A)     Local[1] = 52;
[00AB] (FA)     VerbOps(Local[1],[On()]);
[00B0] (46)     Local[1]++;
[00B3] (44)     unless (Local[1] > 55) goto 00AB;
[00BA] (**)   }
[00BA] (7A)   VerbOps(100,[Text("Walk"),On()]);
[00C4] (0A)   startScript(59,[]);
[00C7] (0A)   startScript(45,[]);
[00CA] (0A)   startScript(10,[1]);
[00D0] (A8)   if (Bit[542]) {
[00D5] (0A)     startScript(197,[]);
[00D8] (**)   }
[00D8] (48) } else if (Local[0] == 7) {
[00E2] (1A)   Var[120] = -1;
[00E7] (1A)   Local[1] = 1;
[00EC] (FA)   VerbOps(Local[1],[Dim()]);
[00F1] (46)   Local[1]++;
[00F4] (44)   unless (Local[1] > 128) goto 00EC;
[00FB] (7A)   VerbOps(100,[Off()]);
[00FF] (62)   stopScript(59);
[0101] (48) } else if (Local[0] == 1) {
[010B] (1A)   Var[120] = -1;
[0110] (A8)   if (Bit[542]) {
[0115] (62)     stopScript(197);
[0117] (**)   }
[0117] (AB)   saveVerbs(1,12,1);
[011C] (AB)   saveVerbs(101,112,5);
[0121] (AB)   saveVerbs(100,100,1);
[0126] (AB)   saveVerbs(52,55,1);
[012B] (62)   stopScript(59);
[012D] (7A)   VerbOps(2,[Off()]);
[0131] (48) } else if (Local[0] == 5) {
[013B] (1A)   Var[120] = -1;
[0140] (A8)   if (Var[124]) {
[0145] (FA)     VerbOps(Var[124],[Color(178)]);
[014B] (1A)     Var[124] = 0;
[0150] (**)   }
[0150] (10)   VAR_RESULT = getObjectOwner(1208);
[0155] (48)   if (VAR_RESULT == 1) {
[015C] (62)     stopScript(197);
[015E] (7A)     VerbOps(82,[New(),Text(" "),Off()]);
[0166] (7A)     VerbOps(83,[New(),Text(" "),Off()]);
[016E] (7A)     VerbOps(84,[New(),Text(" "),Off()]);
[0176] (7A)     VerbOps(85,[New(),Text(" "),Off()]);
[017E] (1A)     Bit[542] = 0;
[0183] (**)   }
[0183] (2C)   InitCharset(1);
[0186] (27)   PutCodeInString(41, "\x10");
[018B] (27)   PutCodeInString(42, "\x10");
[0190] (27)   PutCodeInString(43, "\x10");
[0195] (27)   PutCodeInString(44, "\x10");
[019A] (27)   PutCodeInString(45, "\x10");
[019F] (27)   PutCodeInString(46, "\x10");
[01A4] (27)   PutCodeInString(47, "\x10");
[01A9] (27)   PutCodeInString(48, "\x10");
[01AE] (27)   PutCodeInString(49, "\x10");
[01B3] (7A)   VerbOps(120,[New(),SetXY(0,145),Color(178),HiColor(14),Key(49),BackColor(176)]);
[01C4] (7A)   VerbOps(121,[New(),SetXY(0,155),Color(178),HiColor(14),Key(50),BackColor(176)]);
[01D5] (7A)   VerbOps(122,[New(),SetXY(0,166),Color(178),HiColor(14),Key(51),BackColor(176)]);
[01E6] (7A)   VerbOps(123,[New(),SetXY(0,175),Color(178),HiColor(14),Key(52),BackColor(176)]);
[01F7] (7A)   VerbOps(124,[New(),SetXY(0,185),Color(178),HiColor(14),Key(53),BackColor(176)]);
[0208] (7A)   VerbOps(125,[New(),SetXY(0,190),Color(178),HiColor(14),Key(54),BackColor(176)]);
[0219] (7A)   VerbOps(126,[New(),SetXY(0,190),Color(178),HiColor(14),Key(55),BackColor(176)]);
[022A] (7A)   VerbOps(127,[New(),SetXY(0,190),Color(178),HiColor(14),Key(56),BackColor(176)]);
[023B] (7A)   VerbOps(128,[New(),SetXY(0,190),Color(178),HiColor(14),Key(57),BackColor(176)]);
[024C] (7A)   VerbOps(120,[Text("" + getString(VAR_TALK_ACTOR))]);
[0256] (7A)   VerbOps(121,[Text("" + getString(VAR_RESTART_KEY))]);
[0260] (7A)   VerbOps(122,[Text("" + getString(VAR_PAUSE_KEY))]);
[026A] (7A)   VerbOps(123,[Text("" + getString(VAR_MOUSE_X))]);
[0274] (7A)   VerbOps(124,[Text("" + getString(VAR_MOUSE_Y))]);
[027E] (7A)   VerbOps(125,[Text("" + getString(VAR_TIMER))]);
[0288] (7A)   VerbOps(126,[Text("" + getString(VAR_TIMER_TOTAL))]);
[0292] (7A)   VerbOps(127,[Text("" + getString(VAR_SOUNDCARD))]);
[029C] (7A)   VerbOps(128,[Text("" + getString(VAR_VIDEOMODE))]);
[02A6] (2C)   InitCharset(2);
[02A9] (0A)   startScript(19,[1]);
[02AF] (18)   /* goto 02B2; */
[02B2] (**) }
[02B2] (A0) stopObjectCode();
END

// Script 20
[0000] (2C) CursorSoftOff();
[0002] (2C) UserputSoftOff();
[0004] (48) if (Local[0] == 1) {
[000B] (7A)   VerbOps(100,[Off()]);
[000F] (1A)   Local[1] = 3;
[0014] (FA)   VerbOps(Local[1],[Dim()]);
[0019] (46)   Local[1]++;
[001C] (44)   unless (Local[1] > 12) goto 0014;
[0023] (28)   if (!Bit[21]) {
[0028] (7A)     VerbOps(111,[Dim()]);
[002C] (7A)     VerbOps(112,[Dim()]);
[0030] (**)   }
[0030] (33)   RoomIntensity(180,160,175);
[0035] (33)   RoomIntensity(180,179,191);
[003A] (**) }
[003A] (48) if (Local[0] == 3) {
[0041] (7A)   VerbOps(100,[Off()]);
[0045] (1A)   Local[1] = 3;
[004A] (FA)   VerbOps(Local[1],[Dim()]);
[004F] (46)   Local[1]++;
[0052] (44)   unless (Local[1] > 12) goto 004A;
[0059] (28)   if (!Bit[21]) {
[005E] (7A)     VerbOps(111,[Dim()]);
[0062] (7A)     VerbOps(112,[Dim()]);
[0066] (**)   }
[0066] (33)   RoomIntensity(180,160,175);
[006B] (33)   RoomIntensity(180,179,191);
[0070] (**) }
[0070] (48) if (Local[0] == 0) {
[0077] (19)   doSentence(STOP);
[0079] (0A)   startScript(13,[]);
[007C] (0A)   startScript(14,[]);
[007F] (1A)   Var[120] = 1399;
[0084] (A8)   if (Var[124]) {
[0089] (FA)     VerbOps(Var[124],[Color(178)]);
[008F] (**)   }
[008F] (**) }
[008F] (60) freezeScripts(127);
[0091] (A0) stopObjectCode();
END

// Script 21
[0000] (2C) CursorSoftOn();
[0002] (2C) UserputSoftOn();
[0004] (58) endOverride();
[0006] (48) if (Local[0] == 1) {
[000D] (7A)   VerbOps(100,[On()]);
[0011] (1A)   Local[1] = 3;
[0016] (FA)   VerbOps(Local[1],[On()]);
[001B] (46)   Local[1]++;
[001E] (44)   unless (Local[1] > 12) goto 0016;
[0025] (33)   RoomIntensity(255,160,191);
[002A] (18)   goto 0054;
[002D] (48) } else if (Local[0] == 3) {
[0037] (7A)   VerbOps(100,[On()]);
[003B] (1A)   Local[1] = 3;
[0040] (FA)   VerbOps(Local[1],[On()]);
[0045] (46)   Local[1]++;
[0048] (44)   unless (Local[1] > 12) goto 0040;
[004F] (33)   RoomIntensity(255,160,191);
[0054] (28)   if (!Bit[21]) {
[0059] (7A)     VerbOps(111,[Off()]);
[005D] (7A)     VerbOps(112,[Off()]);
[0061] (44)     if (Var[126] > 0) {
[0068] (7A)       VerbOps(111,[On()]);
[006C] (18)     } else {
[006F] (7A)       VerbOps(111,[Dim()]);
[0073] (**)     }
[0073] (AC)     Exprmode Var[442] = (Var[490] - 1);
[007E] (F8)     if (Var[126] < Var[442]) {
[0085] (7A)       VerbOps(112,[On()]);
[0089] (18)     } else {
[008C] (7A)       VerbOps(112,[Dim()]);
[0090] (**)     }
[0090] (**)   }
[0090] (**) }
[0090] (60) freezeScripts(0);
[0092] (08) if (Local[0] != 2) {
[0099] (19)   doSentence(STOP);
[009B] (0A)   startScript(13,[]);
[009E] (0A)   startScript(14,[]);
[00A1] (0A)   startScript(45,[]);
[00A4] (08)   if (Local[0] != 3) {
[00AB] (D2)     actorFollowCamera(VAR_EGO);
[00AE] (**)   }
[00AE] (**) }
[00AE] (A0) stopObjectCode();
END

// Script 22
[0000] (9A) Local[1] = Local[0];
[0005] (1A) Local[0] = 0;
[000A] (48) if (Local[1] == 22) {
[0011] (14)   print(252,[Text(getString(VAR_CHARINC))]);
[0019] (48) } else if (Local[1] == 5) {
[0023] (14)   print(252,[Text("H" + getInt(VAR_HEAPSPACE) + " M" + getInt(VAR_MEMORY_PERFORMANCE) + " V" + getInt(VAR_VIDEO_PERFORMANCE))]);
[0038] (18)   /* goto 003B; */
[003B] (**) }
[003B] (9A) Var[444] = Local[0];
[0040] (A0) stopObjectCode();
END

// Script 23
[0000] (1A) Var[231] = 0;
[0005] (1A) Var[164] = 0;
[000A] (1A) Var[180] = 161;
[000F] (1A) VAR_SCROLL_SCRIPT = 0;
[0014] (9A) Var[224] = VAR_ROOM;
[0019] (14) print(255,[Pos(160,8),Center(),Overhead()]);
[0023] (A8) if (Var[124]) {
[0028] (FA)   VerbOps(Var[124],[Color(178)]);
[002E] (1A)   Var[124] = 0;
[0033] (**) }
[0033] (A0) stopObjectCode();
END

// Script 31
[0000] (1A) Var[465] = -32765;
[0005] (1A) Var[466] = -32765;
[000A] (9A) Local[8] = Var[465];
[000F] (9A) Local[9] = Var[466];
[0014] (0A) startScript(133,[Local[0],Local[1],Local[2],Local[3]]);
[0023] (1A) Local[4] = 0;
[0028] (AC) Exprmode Local[7] = (Var[183] * 2);
[0033] (C4) if (Var[187] > Local[7]) {
[003A] (1A)   Local[4] = 1;
[003F] (**) }
[003F] (AC) Exprmode Local[7] = (Var[184] * 2);
[004A] (C4) if (Var[188] > Local[7]) {
[0051] (1A)   Local[4] = 1;
[0056] (**) }
[0056] (A8) if (Local[4]) {
[005B] (FE)   walkActorTo(Local[1],Var[185],Var[186]);
[0062] (18) } else {
[0065] (C9)   faceActor(Local[1],Local[0]);
[006A] (80)   breakHere();
[006B] (18)   goto 0014;
[006E] (**) }
[006E] (0A) startScript(133,[Local[0],Local[1],Local[2],Local[3],1]);
[0080] (D6) VAR_RESULT = getActorMoving(Local[1]);
[0085] (28) if (!VAR_RESULT) {
[008A] (18)   goto 0014;
[008D] (**) }
[008D] (1A) Local[4] = 1;
[0092] (84) if (Var[187] <= Var[183]) {
[0099] (84)   if (Var[188] <= Var[184]) {
[00A0] (1A)     Local[4] = 0;
[00A5] (**)   }
[00A5] (**) }
[00A5] (28) if (!Local[4]) {
[00AA] (0A)   startScript(133,[Local[0],Local[1],Local[2],Local[3]]);
[00B9] (1A)   Local[4] = 0;
[00BE] (84)   if (Var[187] <= Var[183]) {
[00C5] (84)     if (Var[188] <= Var[184]) {
[00CC] (1A)       Local[4] = 1;
[00D1] (**)     }
[00D1] (**)   }
[00D1] (A8)   if (Local[4]) {
[00D6] (91)     animateCostume(Local[1],255);
[00DA] (18)     goto 0014;
[00DD] (**)   }
[00DD] (18) } else {
[00E0] (80)   breakHere();
[00E1] (18)   goto 006E;
[00E4] (**) }
[00E4] (08) if (Var[466] != -32765) {
[00EB] (FE)   walkActorTo(Local[1],Var[465],Var[466]);
[00F2] (9A)   Local[8] = Var[465];
[00F7] (9A)   Local[9] = Var[466];
[00FC] (18) } else {
[00FF] (91)   animateCostume(Local[1],255);
[0103] (18)   goto 0014;
[0106] (**) }
[0106] (88) if (Local[8] != Var[465]) {
[010D] (18)   goto 006E;
[0110] (**) }
[0110] (88) if (Local[9] != Var[466]) {
[0117] (18)   goto 006E;
[011A] (**) }
[011A] (0A) startScript(133,[Local[0],Local[1],Local[2],Local[3]]);
[0129] (1A) Local[4] = 1;
[012E] (84) if (Var[187] <= Var[183]) {
[0135] (84)   if (Var[188] <= Var[184]) {
[013C] (1A)     Local[4] = 0;
[0141] (**)   }
[0141] (**) }
[0141] (A8) if (Local[4]) {
[0146] (80)   breakHere();
[0147] (18)   goto 0106;
[014A] (18) } else {
[014D] (91)   animateCostume(Local[1],255);
[0151] (18)   goto 0014;
[0154] (**) }
[0154] (A0) stopObjectCode();
END

// Script 32
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
[0050] (9A) Var[444] = Local[2];
[0055] (A0) stopObjectCode();
END

// Script 33
[0000] (A0) stopObjectCode();
END

// Script 45
[0000] (A0) stopObjectCode();
END

// Script 59
[0000] (1A) Var[107] = 10;
[0005] (1A) Var[103] = 0;
[000A] (44) if (VAR_CURSORSTATE > 0) {
[0011] (38)   if (VAR_MOUSE_Y >= 153) {
[0018] (44)     if (VAR_MOUSE_X > 160) {
[001F] (28)       if (!Bit[21]) {
[0024] (AC)         Exprmode Local[3] = ((VAR_MOUSE_X - 160) / 32);
[0033] (AC)         Exprmode Local[3] = (Local[3] + (((VAR_MOUSE_Y - 152) / 24) * 5));
[004A] (9A)         Local[0] = Var[141 + Local[3]];
[0051] (88)         if (Local[6] != Var[111]) {
[0058] (FA)           VerbOps(Local[6],[Color(178)]);
[005E] (**)         }
[005E] (48)         if (Var[107] == 10) {
[0065] (9A)           Var[112] = Var[107];
[006A] (1A)           Var[107] = 9;
[006F] (1A)           Local[7] = 1;
[0074] (**)         }
[0074] (18)       } else {
[0077] (18)         goto 030E;
[007A] (**)       }
[007A] (18)     } else {
[007D] (78)       if (VAR_MOUSE_Y < 195) {
[0084] (38)         if (VAR_MOUSE_Y >= 184) {
[008B] (78)           if (VAR_MOUSE_X < 139) {
[0092] (38)             if (VAR_MOUSE_X >= 95) {
[0099] (1A)               Var[103] = 7;
[009E] (18)               goto 0135;
[00A1] (**)             }
[00A1] (38)             if (VAR_MOUSE_X >= 49) {
[00A8] (1A)               Var[103] = 9;
[00AD] (18)               goto 0135;
[00B0] (**)             }
[00B0] (38)             if (VAR_MOUSE_X >= 3) {
[00B7] (1A)               Var[103] = 4;
[00BC] (**)             }
[00BC] (**)           }
[00BC] (38)         } else if (VAR_MOUSE_Y >= 170) {
[00C6] (78)           if (VAR_MOUSE_X < 139) {
[00CD] (38)             if (VAR_MOUSE_X >= 95) {
[00D4] (1A)               Var[103] = 6;
[00D9] (18)               goto 0135;
[00DC] (**)             }
[00DC] (38)             if (VAR_MOUSE_X >= 49) {
[00E3] (1A)               Var[103] = 12;
[00E8] (18)               goto 0135;
[00EB] (**)             }
[00EB] (38)             if (VAR_MOUSE_X >= 3) {
[00F2] (1A)               Var[103] = 3;
[00F7] (**)             }
[00F7] (**)           }
[00F7] (38)         } else if (VAR_MOUSE_Y >= 156) {
[0101] (78)           if (VAR_MOUSE_X < 139) {
[0108] (38)             if (VAR_MOUSE_X >= 95) {
[010F] (1A)               Var[103] = 8;
[0114] (18)               goto 0135;
[0117] (**)             }
[0117] (38)             if (VAR_MOUSE_X >= 49) {
[011E] (1A)               Var[103] = 11;
[0123] (18)               goto 0135;
[0126] (**)             }
[0126] (38)             if (VAR_MOUSE_X >= 3) {
[012D] (1A)               Var[103] = 5;
[0132] (**)             }
[0132] (**)           }
[0132] (18)           /* goto 0135; */
[0135] (**)         }
[0135] (**)       }
[0135] (18)     } else {
[0138] (18)       goto 0208;
[013B] (**)     }
[013B] (**)   }
[013B] (A8)   if (Local[7]) {
[0140] (1A)     Local[7] = 0;
[0145] (48)     if (Var[107] == 9) {
[014C] (1A)       Var[107] = 10;
[0151] (**)     }
[0151] (**)   }
[0151] (08)   if (Local[6] != 10) {
[0158] (FA)     VerbOps(Local[6],[Color(178)]);
[015E] (**)   }
[015E] (A8)   if (Var[103]) {
[0163] (FA)     VerbOps(Var[103],[Color(14)]);
[0169] (9A)     Local[6] = Var[103];
[016E] (18)   } else {
[0171] (9A)     Local[6] = Var[107];
[0176] (**)   }
[0176] (A8)   if (Var[112]) {
[017B] (9A)     Var[107] = Var[112];
[0180] (1A)     Var[112] = 0;
[0185] (**)   }
[0185] (D5)   Local[1] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[018C] (A8)   if (Local[1]) {
[0191] (88)     if (Local[1] != VAR_EGO) {
[0198] (08)       if (Var[107] != 8) {
[019F] (08)         if (Var[107] != 3) {
[01A6] (08)           if (Var[107] != 4) {
[01AD] (08)             if (Var[107] != 11) {
[01B4] (9D)               if (classOfIs(Local[1],[141])) {
[01BD] (9A)                 Local[0] = Local[1];
[01C2] (18)               } else {
[01C5] (F5)                 Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01CC] (**)               }
[01CC] (18)             } else {
[01CF] (F5)               Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01D6] (**)             }
[01D6] (18)           } else {
[01D9] (F5)             Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01E0] (**)           }
[01E0] (18)         } else {
[01E3] (F5)           Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01EA] (**)         }
[01EA] (18)       } else {
[01ED] (F5)         Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01F4] (**)       }
[01F4] (18)     } else {
[01F7] (F5)       Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01FE] (**)     }
[01FE] (18)   } else {
[0201] (F5)     Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0208] (**)   }
[0208] (48)   if (Var[107] == 12) {
[020F] (9D)     if (classOfIs(Local[0],[141])) {
[0218] (18)     } else {
[021B] (1A)       Local[0] = 0;
[0220] (**)     }
[0220] (**)   }
[0220] (48)   if (Var[107] == 5) {
[0227] (A8)     if (Var[110]) {
[022C] (9D)       if (classOfIs(Local[0],[133])) {
[0235] (18)       } else {
[0238] (D5)         Local[0] = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[023F] (9D)         if (classOfIs(Local[0],[133])) {
[0248] (18)         } else {
[024B] (1A)           Local[0] = 0;
[0250] (**)         }
[0250] (**)       }
[0250] (**)     }
[0250] (**)   }
[0250] (88)   if (Local[0] != Var[120]) {
[0257] (9A)     Var[120] = Local[0];
[025C] (A8)     if (Var[110]) {
[0261] (88)       if (Local[0] != Var[108]) {
[0268] (9A)         Var[109] = Local[0];
[026D] (18)       } else {
[0270] (1A)         Var[109] = 0;
[0275] (**)       }
[0275] (48)     } else if (Var[107] == 10) {
[027F] (90)       VAR_RESULT = getObjectOwner(Local[0]);
[0284] (48)       if (VAR_RESULT == 15) {
[028B] (9A)         Var[108] = Local[0];
[0290] (18)       } else {
[0293] (1A)         Var[108] = 0;
[0298] (**)       }
[0298] (9D)       if (classOfIs(Local[0],[141])) {
[02A1] (9A)         Var[108] = Local[0];
[02A6] (**)       }
[02A6] (18)     } else {
[02A9] (9A)       Var[108] = Local[0];
[02AE] (**)     }
[02AE] (A8)     if (Var[124]) {
[02B3] (FA)       VerbOps(Var[124],[Color(178)]);
[02B9] (**)     }
[02B9] (1A)     Var[123] = 0;
[02BE] (9A)     VAR_ME = Local[0];
[02C3] (04)     if (Local[0] <= 12) {
[02CA] (9D)       if (classOfIs(Local[0],[141])) {
[02D3] (7A)         VerbOps(12,[Color(14)]);
[02D8] (1A)         Var[123] = 12;
[02DD] (1A)         Var[124] = 12;
[02E2] (18)       } else {
[02E5] (7A)         VerbOps(12,[Color(178)]);
[02EA] (**)       }
[02EA] (18)     } else {
[02ED] (B7)       startObject(Local[0],90,[]);
[02F2] (A8)       if (Var[123]) {
[02F7] (FA)         VerbOps(Var[123],[Color(14)]);
[02FD] (**)       }
[02FD] (9A)       Var[124] = Var[123];
[0302] (**)     }
[0302] (68)     VAR_RESULT = isScriptRunning(2);
[0306] (28)     if (!VAR_RESULT) {
[030B] (0A)       startScript(14,[]);
[030E] (**)     }
[030E] (**)   }
[030E] (**) }
[030E] (80) breakHere();
[030F] (18) goto 0005;
[0312] (A0) stopObjectCode();
END

// Script 60
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

// Script 61
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

// Script 62: Open Door
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_ME;
[000A] (**) }
[000A] (8F) VAR_RESULT = getObjectState(Local[0]);
[000F] (48) if (VAR_RESULT == 0) {
[0016] (9D)   if (classOfIs(Local[0],[6])) {
[001F] (40)     cutscene([2]);
[0024] (87)     setState(Local[0],1);
[0028] (A8)     if (Local[1]) {
[002D] (9D)       if (classOfIs(Local[1],[11])) {
[0036] (87)         setState(Local[1],1);
[003A] (**)       }
[003A] (**)     }
[003A] (1C)     startSound(192);
[003C] (C0)     endCutscene();
[003D] (18)   } else {
[0040] (D8)     printEgo([Text(sound(0x54, 0x28) + "Hmm.  This door appears to be locked.")]);
[0078] (**)   }
[0078] (18) } else {
[007B] (D8)   printEgo([Text(sound(0x54, 0x29) + "It's already\x10open.")]);
[00A0] (**) }
[00A0] (A0) stopObjectCode();
END

// Script 63: Close door
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_ME;
[000A] (**) }
[000A] (8F) VAR_RESULT = getObjectState(Local[0]);
[000F] (48) if (VAR_RESULT == 1) {
[0016] (40)   cutscene([2]);
[001B] (87)   setState(Local[0],0);
[001F] (A8)   if (Local[1]) {
[0024] (9D)     if (classOfIs(Local[1],[11])) {
[002D] (87)       setState(Local[1],0);
[0031] (**)     }
[0031] (**)   }
[0031] (1C)   startSound(190);
[0033] (C0)   endCutscene();
[0034] (18) } else {
[0037] (D8)   printEgo([Text(sound(0x54, 0x2A) + "It's already\x10closed.")]);
[005E] (**) }
[005E] (A0) stopObjectCode();
END

// Script 64
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = VAR_ME;
[000A] (**) }
[000A] (8F) VAR_RESULT = getObjectState(Local[0]);
[000F] (48) if (VAR_RESULT == 1) {
[0016] (59)   doSentence(4,Local[0],0);
[001C] (18) } else {
[001F] (59)   doSentence(3,Local[0],0);
[0025] (**) }
[0025] (A0) stopObjectCode();
END

// Script 65
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

// Script 66
[0000] (AC) Exprmode Local[3] = (<VAR_RESULT = getActorX(VAR_EGO)> + Local[1]);
[000E] (AC) Exprmode Local[4] = (<VAR_RESULT = getActorY(VAR_EGO)> + Local[2]);
[001C] (ED) putActorInRoom(VAR_EGO,Local[0]);
[0021] (E1) putActor(VAR_EGO,Local[3],Local[4]);
[0028] (D2) actorFollowCamera(VAR_EGO);
[002B] (A0) stopObjectCode();
END

// Script 67
[0000] (48) if (Local[0] == 4) {
[0007] (42)   chainScript(4,[Local[0],Local[1]]);
[0010] (**) }
[0010] (46) Var[165]++;
[0013] (A0) stopObjectCode();
END

// Script 68
[0000] (1A) Local[1] = 151;
[0005] (1A) Local[2] = 159;
[000A] (1A) Var[166] = 152;
[000F] (1A) Var[178] = 49;
[0014] (1A) Bit[5] = 0;
[0019] (2C) CursorShow();
[001B] (2C) UserputOn();
[001D] (7A) VerbOps(50,[Dim()]);
[0021] (1A) Local[0] = 120;
[0026] (FA) VerbOps(Local[0],[Off()]);
[002B] (46) Local[0]++;
[002E] (44) unless (Local[0] > 128) goto 0026;
[0035] (26) setVarRange(Var[167],9,[0,0,0,0,0,0,0,0,0]);
[0042] (26) setVarRange(Bit[7],9,[0,0,0,0,0,0,0,0,0]);
[004F] (A0) stopObjectCode();
END

// Script 69
[0000] (FE) walkActorTo(VAR_EGO,Local[0],Local[1]);
[0007] (AE) WaitForActor(VAR_EGO);
[000B] (A8) if (Local[2]) {
[0010] (F2)   loadRoom(Local[2]);
[0013] (**) }
[0013] (A0) stopObjectCode();
END

// Script 74
[0000] (40) cutscene([]);
[0002] (2C) InitCharset(1);
[0005] (33) SetScreen(0,200);
[000B] (1A) VAR_TIMER_NEXT = 0;
[0010] (72) loadRoom(68);
[0012] (1A) VAR_TMR_1 = 0;
[0017] (80) breakHere();
[0018] (05) drawObject(939);
[001C] (80) breakHere();
[001D] (9A) VAR_MACHINE_SPEED = VAR_TMR_1;
[0022] (1A) VAR_TIMER_NEXT = 6;
[0027] (1A) VAR_TIMER_NEXT = 3;
[002C] (58) beginOverride();
[002E] (18) goto 0054;
[0031] (1A) Local[0] = 1;
[0036] (33) RoomIntensity(Local[0],16,255);
[003C] (5A) Local[0] += 7;
[0041] (16) Local[1] = getRandomNr(255);
[0045] (80) breakHere();
[0046] (46) Local[0]++;
[0049] (44) unless (Local[0] > 256) goto 0036;
[0050] (2E) delay(480);
[0054] (1A) VAR_TIMER_NEXT = 6;
[0059] (16) Var[369] = getRandomNr(2);
[005D] (72) loadRoom(0);
[005F] (14) print(255,[Pos(160,8),Center(),Overhead()]);
[0069] (33) SetScreen(0,144);
[006F] (C0) endCutscene();
[0070] (A0) stopObjectCode();
END

// Script 75
[0000] (16) Var[442] = getRandomNr(255);
[0004] (2B) delayVariable(Var[442]);
[0007] (16) Local[0] = getRandomNr(1);
[000B] (28) if (!Local[0]) {
[0010] (80)   breakHere();
[0011] (F8)   if (Var[322] < Var[321]) {
[0018] (80)     breakHere();
[0019] (5A)     Var[322] += 30;
[001E] (C4)     if (Var[322] > Var[321]) {
[0025] (9A)       Var[322] = Var[321];
[002A] (**)     }
[002A] (**)   }
[002A] (**) }
[002A] (18) goto 0000;
[002D] (A0) stopObjectCode();
END

// Script 77
[0000] (F8) if (Local[0] < Local[1]) {
[0007] (1A)   Var[442] = 0;
[000C] (18)   goto 003B;
[000F] (18) } else {
[0012] (9A)   Local[3] = Local[0];
[0017] (9A)   Local[4] = Local[1];
[001C] (9A)   Local[0] = Local[3];
[0021] (9A)   Local[1] = Local[4];
[0026] (AC)   Exprmode Var[442] = (Local[0] / Local[1]);
[0031] (9B)   Local[1] *= Var[442];
[0036] (BA)   Local[0] -= Local[1];
[003B] (**) }
[003B] (9A) Var[444] = Local[0];
[0040] (A0) stopObjectCode();
END

// Script 78
[0000] (9A) Var[100] = VAR_VIRT_MOUSE_X;
[0005] (9A) Var[101] = VAR_VIRT_MOUSE_Y;
[000A] (48) if (Local[0] == 4) {
[0011] (42)   chainScript(22,[Local[1]]);
[0017] (**) }
[0017] (48) if (Local[0] == 2) {
[001E] (62)   stopScript(69);
[0020] (1A)   Bit[16] = 1;
[0025] (9A)   Var[119] = Var[108];
[002A] (A8)   if (Var[108]) {
[002F] (19)     doSentence(STOP);
[0031] (28)     if (!Bit[69]) {
[0036] (9A)       VAR_ME = Var[119];
[003B] (9D)       if (classOfIs(Var[108],[136])) {
[0044] (B7)         startObject(Var[108],10,[]);
[0049] (18)       } else {
[004C] (F6)         walkActorToObject(VAR_EGO,Var[119]);
[0051] (AE)         WaitForActor(VAR_EGO);
[0055] (8B)         VAR_RESULT = getVerbEntryPoint(Var[119],10);
[005C] (A8)         if (VAR_RESULT) {
[0061] (B7)           startObject(Var[119],10,[]);
[0066] (18)         } else {
[0069] (8B)           VAR_RESULT = getVerbEntryPoint(Var[119],9);
[0070] (A8)           if (VAR_RESULT) {
[0075] (B7)             startObject(Var[119],9,[]);
[007A] (**)           }
[007A] (**)         }
[007A] (**)       }
[007A] (18)     } else {
[007D] (0A)       startScript(2,[10,Var[108]]);
[0086] (**)     }
[0086] (28)   } else if (!Bit[69]) {
[008E] (19)     doSentence(STOP);
[0090] (FE)     walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0097] (AE)     WaitForActor(VAR_EGO);
[009B] (18)   } else {
[009E] (19)     doSentence(STOP);
[00A0] (FE)     walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[00A7] (0A)     startScript(13,[]);
[00AA] (**)   }
[00AA] (**) }
[00AA] (A0) stopObjectCode();
END

// Script 79
[0000] (16) Var[442] = getRandomNr(1);
[0004] (9A) Local[1] = Local[0];
[0009] (F5) Local[0] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0010] (9A) Local[2] = VAR_VIRT_MOUSE_X;
[0015] (9A) Local[3] = VAR_VIRT_MOUSE_Y;
[001A] (9D) if (classOfIs(Local[0],[160])) {
[0023] (1A)   Local[0] = 0;
[0028] (**) }
[0028] (88) if (Var[120] != Local[0]) {
[002F] (9A)   Var[120] = Local[0];
[0034] (9A)   Var[108] = Local[0];
[0039] (9A)   VAR_ME = Local[0];
[003E] (**) }
[003E] (28) if (!Bit[69]) {
[0043] (68)   VAR_RESULT = isScriptRunning(78);
[0047] (28)   if (!VAR_RESULT) {
[004C] (A8)     if (Var[108]) {
[0051] (08)       if (VAR_TALK_ACTOR != 1) {
[0058] (78)         if (Local[2] < 40) {
[005F] (1A)           Local[2] = 40;
[0064] (**)         }
[0064] (44)         if (Local[2] > 280) {
[006B] (1A)           Local[2] = 280;
[0070] (**)         }
[0070] (AC)         Exprmode Var[442] = (VAR_VIRT_MOUSE_Y - 10);
[007B] (14)         print(255,[Color(Var[307]),Pos(Local[2],Var[442]),Text(getName(VAR_ME))]);
[008B] (**)       }
[008B] (18)       /* goto 008E; */
[008E] (**)     }
[008E] (**)   }
[008E] (28)   if (!Local[0]) {
[0093] (A8)     if (Local[1]) {
[0098] (08)       if (VAR_TALK_ACTOR != 1) {
[009F] (14)         print(255,[Text(" ")]);
[00A4] (**)       }
[00A4] (**)     }
[00A4] (**)   }
[00A4] (**) }
[00A4] (80) breakHere();
[00A5] (18) goto 0000;
[00A8] (A0) stopObjectCode();
END

// Script 80
[0000] (0A) startScript(13,[]);
[0003] (0A) startScript(14,[]);
[0006] (68) VAR_RESULT = isScriptRunning(86);
[000A] (A8) if (VAR_RESULT) {
[000F] (62)   stopScript(86);
[0011] (**) }
[0011] (68) VAR_RESULT = isScriptRunning(31);
[0015] (A8) if (VAR_RESULT) {
[001A] (62)   stopScript(31);
[001C] (**) }
[001C] (AE) WaitForMessage();
[001E] (9A) VAR_EGO = Local[0];
[0023] (48) if (Local[0] == 1) {
[002A] (5D)   setClass(2,[141]);
[0031] (5D)   setClass(1,[13,5]);
[003B] (1A)   Var[182] = 2;
[0040] (7A)   VerbOps(100,[Color(9),HiColor(11)]);
[0047] (1A)   Var[118] = 3;
[004C] (1A)   Var[117] = 11;
[0051] (48) } else if (Local[0] == 2) {
[005B] (5D)   setClass(2,[13]);
[0062] (5D)   setClass(1,[141,133]);
[006C] (1A)   Var[182] = 1;
[0071] (7A)   VerbOps(100,[Color(5),HiColor(13)]);
[0078] (1A)   Var[118] = 5;
[007D] (1A)   Var[117] = 13;
[0082] (18)   /* goto 0085; */
[0085] (**) }
[0085] (D2) actorFollowCamera(Local[0]);
[0088] (0A) startScript(14,[]);
[008B] (0A) startScript(10,[]);
[008E] (A0) stopObjectCode();
END

// Script 82
[0000] (08) if (VAR_VERB_SCRIPT != 17) {
[0007] (9A)   Var[448] = VAR_VERB_SCRIPT;
[000C] (**) }
[000C] (1A) Bit[20] = 1;
[0011] (1A) VAR_VERB_SCRIPT = 17;
[0016] (0A) startScript(19,[5]);
[001C] (A0) stopObjectCode();
END

// Script 83
[0000] (A8) if (Bit[20]) {
[0005] (1A)   Bit[20] = 0;
[000A] (9A)   Var[177] = Var[176];
[000F] (1A)   Var[176] = 0;
[0014] (7A)   VerbOps(50,[Off()]);
[0018] (9A)   VAR_VERB_SCRIPT = Var[448];
[001D] (28)   if (!Local[0]) {
[0022] (0A)     startScript(19,[2]);
[0028] (**)   }
[0028] (2C)   CursorShow();
[002A] (2C)   UserputOn();
[002C] (**) }
[002C] (A0) stopObjectCode();
END

// Script 84
[0000] (1A) Var[444] = -1;
[0005] (A0) stopObjectCode();
END

// Script 85
[0000] (1A) Local[0] = 0;
[0005] (1A) Bit[37 + Local[0]] = 0;
[000C] (46) Local[0]++;
[000F] (44) unless (Local[0] > 31) goto 0005;
[0016] (A0) stopObjectCode();
END

// Script 86
[0000] (68) VAR_RESULT = isScriptRunning(31);
[0004] (A8) if (VAR_RESULT) {
[0009] (62)   stopScript(31);
[000B] (**) }
[000B] (91) animateCostume(Local[1],255);
[000F] (91) animateCostume(Local[1],1);
[0013] (80) breakHere();
[0014] (80) breakHere();
[0015] (C9) faceActor(Local[1],Local[0]);
[001A] (80) breakHere();
[001B] (80) breakHere();
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (D6) VAR_RESULT = getActorMoving(Local[1]);
[0023] (A8) unless (VAR_RESULT) goto 0015;
[0028] (A0) stopObjectCode();
END

// Script 87: Orichalcum Detector
[0000] (48) if (VAR_ROOM == 79) {
[0007] (14)   print(255,[Color(15),Pos(170,16),Text(sound(0x54, 0x2E) + "I can't do that!")]);
[0032] (18) } else {
[0035] (40)   cutscene([2]);
[003A] (48)   if (VAR_ROOM == 97) {
[0041] (7B)     VAR_RESULT = getActorWalkBox(1);
[0045] (44)     if (VAR_RESULT > 19) {
[004C] (7B)       VAR_RESULT = getActorWalkBox(1);
[0050] (78)       if (VAR_RESULT < 22) {
[0057] (18)         goto 00A7;
[005A] (**)       }
[005A] (**)     }
[005A] (**)   }
[005A] (48)   if (VAR_ROOM == 82) {
[0061] (D8)     printEgo([Text(sound(0x54, 0x2F) + "I can't do that\x10here.")]);
[0089] (18)   } else {
[008C] (48)     if (VAR_ROOM == 41) {
[0093] (48)     } else if (VAR_ROOM == 39) {
[009D] (18)     } else {
[00A0] (48)       unless (VAR_ROOM == 40) goto 00E7;
[00A7] (**)     }
[00A7] (D8)     printEgo([Text(sound(0x54, 0x30) + "I don't think it's a good time to do\x10that.")]);
[00E4] (18)     goto 0D80;
[00E7] (48)     if (VAR_ROOM == 45) {
[00EE] (14)       print(255,[Color(15),Pos(170,16),Text(sound(0x54, 0x31) + "I can't do that\x10now!")]);
[011D] (18)     } else {
[0120] (3C)       stopSound(134);
[0122] (1C)       startSound(134);
[0124] (0A)       startScript(192,[]);
[0127] (80)       breakHere();
[0128] (68)       VAR_RESULT = isScriptRunning(192);
[012C] (28)       unless (!VAR_RESULT) goto 0127;
[0131] (38)       if (VAR_ROOM >= 226) {
[0138] (04)         if (VAR_ROOM <= 231) {
[013F] (A8)           if (Bit[543]) {
[0144] (11)             animateCostume(9,255);
[0147] (A8)             if (Bit[544]) {
[014C] (11)               animateCostume(2,255);
[014F] (**)             }
[014F] (**)           }
[014F] (**)         }
[014F] (**)       }
[014F] (48)       if (VAR_ROOM == 169) {
[0156] (7B)         VAR_RESULT = getActorWalkBox(1);
[015A] (48)         if (VAR_RESULT == 5) {
[0161] (1E)           walkActorTo(1,79,130);
[0167] (AE)           WaitForActor(1);
[016A] (11)           animateCostume(1,248);
[016D] (80)           breakHere();
[016E] (**)         }
[016E] (**)       }
[016E] (63)       VAR_RESULT = getActorFacing(1);
[0172] (48)       if (VAR_RESULT == 3) {
[0179] (11)         animateCostume(1,248);
[017C] (**)       }
[017C] (63)       VAR_RESULT = getActorFacing(1);
[0180] (48)       if (VAR_RESULT == 2) {
[0187] (11)         animateCostume(1,249);
[018A] (**)       }
[018A] (80)       breakHere();
[018B] (13)       ActorOps(1,[Costume(171)]);
[0190] (48)       if (Var[238] == 2) {
[0197] (13)         ActorOps(3,[Init(),Costume(173)]);
[019D] (18)       } else {
[01A0] (13)         ActorOps(3,[Init(),Costume(172)]);
[01A6] (**)       }
[01A6] (43)       Local[2] = getActorX(1);
[01AB] (23)       Local[3] = getActorY(1);
[01B0] (11)       animateCostume(1,6);
[01B3] (80)       breakHere();
[01B4] (80)       breakHere();
[01B5] (80)       breakHere();
[01B6] (80)       breakHere();
[01B7] (80)       breakHere();
[01B8] (80)       breakHere();
[01B9] (6D)       putActorInRoom(3,VAR_ROOM);
[01BD] (61)       putActor(3,Local[2],Local[3]);
[01C3] (63)       VAR_RESULT = getActorFacing(1);
[01C7] (48)       if (VAR_RESULT == 0) {
[01CE] (1A)         Local[4] = 1;
[01D3] (11)         animateCostume(3,248);
[01D6] (18)       } else {
[01D9] (11)         animateCostume(3,249);
[01DC] (**)       }
[01DC] (11)       animateCostume(3,6);
[01DF] (80)       breakHere();
[01E0] (80)       breakHere();
[01E1] (80)       breakHere();
[01E2] (80)       breakHere();
[01E3] (80)       breakHere();
[01E4] (80)       breakHere();
[01E5] (80)       breakHere();
[01E6] (11)       animateCostume(1,7);
[01E9] (80)       breakHere();
[01EA] (80)       breakHere();
[01EB] (80)       breakHere();
[01EC] (80)       breakHere();
[01ED] (80)       breakHere();
[01EE] (80)       breakHere();
[01EF] (80)       breakHere();
[01F0] (80)       breakHere();
[01F1] (80)       breakHere();
[01F2] (10)       VAR_RESULT = getObjectOwner(933);
[01F7] (C8)       if (VAR_RESULT == VAR_EGO) {
[01FE] (1D)         if (classOfIs(933,[146])) {
[0207] (1D)           if (classOfIs(830,[6])) {
[0210] (18)             goto 0C29;
[0213] (**)           }
[0213] (18)         } else {
[0216] (18)           goto 0C29;
[0219] (**)         }
[0219] (**)       }
[0219] (10)       VAR_RESULT = getObjectOwner(938);
[021E] (C8)       if (VAR_RESULT == VAR_EGO) {
[0225] (1D)         if (classOfIs(938,[146])) {
[022E] (1D)           if (classOfIs(830,[6])) {
[0237] (18)             goto 0C29;
[023A] (**)           }
[023A] (18)         } else {
[023D] (18)           goto 0C29;
[0240] (**)         }
[0240] (**)       }
[0240] (48)       if (VAR_EGO == 1) {
[0247] (03)         VAR_RESULT = getActorRoom(2);
[024B] (C8)         if (VAR_RESULT == VAR_ROOM) {
[0252] (A8)           if (Var[230]) {
[0257] (18)             goto 0CAF;
[025A] (**)           }
[025A] (10)           VAR_RESULT = getObjectOwner(938);
[025F] (48)           if (VAR_RESULT == 2) {
[0266] (1D)             if (classOfIs(938,[146])) {
[026F] (1D)               if (classOfIs(830,[6])) {
[0278] (18)                 goto 0CAF;
[027B] (**)               }
[027B] (18)             } else {
[027E] (18)               goto 0CAF;
[0281] (**)             }
[0281] (**)           }
[0281] (**)         }
[0281] (**)       }
[0281] (48)       if (VAR_EGO == 2) {
[0288] (1D)         if (classOfIs(938,[146])) {
[0291] (1D)           if (classOfIs(830,[6])) {
[029A] (18)             goto 0C7A;
[029D] (**)           }
[029D] (18)         } else {
[02A0] (18)           goto 0C7A;
[02A3] (**)         }
[02A3] (03)         VAR_RESULT = getActorRoom(1);
[02A7] (C8)         if (VAR_RESULT == VAR_ROOM) {
[02AE] (A8)           if (Var[229]) {
[02B3] (18)             goto 0C7A;
[02B6] (**)           }
[02B6] (**)         }
[02B6] (**)       }
[02B6] (48)       if (VAR_ROOM == 36) {
[02BD] (1D)         if (classOfIs(409,[146])) {
[02C6] (0A)           startScript(135,[409,Local[2],Local[3],Local[4],1]);
[02D8] (80)           breakHere();
[02D9] (68)           VAR_RESULT = isScriptRunning(135);
[02DD] (28)           unless (!VAR_RESULT) goto 02D8;
[02E2] (5D)           setClass(1012,[6]);
[02E9] (D8)           printEgo([Text(sound(0x54, 0x32) + "It's pointing at the dish at the bottom of the\x10machine!")]);
[0333] (18)           goto 0D5B;
[0336] (**)         }
[0336] (18)         goto 0B66;
[0339] (48)       } else if (VAR_ROOM == 53) {
[0343] (1D)         if (classOfIs(714,[32])) {
[034C] (0A)           startScript(135,[714,Local[2],Local[3],Local[4],1,1]);
[0361] (80)           breakHere();
[0362] (68)           VAR_RESULT = isScriptRunning(135);
[0366] (28)           unless (!VAR_RESULT) goto 0361;
[036B] (5D)           setClass(1012,[6]);
[0372] (D8)           printEgo([Text(sound(0x54, 0x33) + "It's pointing at that bead on the\x10floor!")]);
[03AD] (18)           goto 0D5B;
[03B0] (**)         }
[03B0] (18)         goto 0B66;
[03B3] (48)       } else if (VAR_ROOM == 146) {
[03BD] (1D)         if (classOfIs(623,[26])) {
[03C6] (0A)           startScript(135,[623,Local[2],Local[3],Local[4],1,1]);
[03DB] (80)           breakHere();
[03DC] (68)           VAR_RESULT = isScriptRunning(135);
[03E0] (28)           unless (!VAR_RESULT) goto 03DB;
[03E5] (5D)           setClass(1012,[6]);
[03EC] (D8)           printEgo([Text(sound(0x54, 0x34) + "It's pointing at one of those piles of bones on the\x10floor.")]);
[0439] (18)           goto 0D5B;
[043C] (**)         }
[043C] (18)         goto 0B66;
[043F] (48)       } else if (VAR_ROOM == 60) {
[0449] (10)         VAR_RESULT = getObjectOwner(830);
[044E] (08)         if (VAR_RESULT != 1) {
[0455] (0A)           startScript(135,[830,Local[2],Local[3],Local[4],1,4]);
[046A] (80)           breakHere();
[046B] (68)           VAR_RESULT = isScriptRunning(135);
[046F] (28)           unless (!VAR_RESULT) goto 046A;
[0474] (5D)           setClass(1012,[6]);
[047B] (D8)           printEgo([Text(sound(0x54, 0x35) + "It's pointing at that gold\x10box!")]);
[04AD] (AE)           WaitForMessage();
[04AF] (18)           goto 0D5B;
[04B2] (**)         }
[04B2] (18)         goto 0B66;
[04B5] (48)       } else if (VAR_ROOM == 159) {
[04BF] (0A)         startScript(135,[645,Local[2],Local[3],Local[4],1,4]);
[04D4] (80)         breakHere();
[04D5] (68)         VAR_RESULT = isScriptRunning(135);
[04D9] (28)         unless (!VAR_RESULT) goto 04D4;
[04DE] (5D)         setClass(1012,[6]);
[04E5] (1D)         if (classOfIs(621,[146])) {
[04EE] (0A)           startScript(144,[109]);
[04F4] (D8)           printEgo([Text(sound(0x54, 0x36) + "It's pointing toward that wall on the\x10right!")]);
[0533] (5D)           setClass(645,[32,154]);
[053D] (18)         } else {
[0540] (D8)           printEgo([Text(sound(0x54, 0x37) + "It's pointing toward that door in the\x10back.")]);
[057E] (**)         }
[057E] (18)         goto 0D5B;
[0581] (48)       } else if (VAR_ROOM == 160) {
[058B] (5D)         setClass(1012,[6]);
[0592] (1D)         if (classOfIs(621,[146])) {
[059B] (18)           goto 0B66;
[059E] (18)         } else {
[05A1] (0A)           startScript(135,[621,Local[2],Local[3],Local[4],1,1]);
[05B6] (80)           breakHere();
[05B7] (68)           VAR_RESULT = isScriptRunning(135);
[05BB] (28)           unless (!VAR_RESULT) goto 05B6;
[05C0] (D8)           printEgo([Text(sound(0x54, 0x38) + "It's pointing at those bones on the\x10floor.")]);
[05FD] (**)         }
[05FD] (18)         goto 0D5B;
[0600] (C8)       } else if (VAR_ROOM == Var[411]) {
[060A] (0A)         startScript(192,[]);
[060D] (80)         breakHere();
[060E] (68)         VAR_RESULT = isScriptRunning(192);
[0612] (28)         unless (!VAR_RESULT) goto 060D;
[0617] (5D)         setClass(1012,[6]);
[061E] (11)         animateCostume(3,9);
[0621] (80)         breakHere();
[0622] (80)         breakHere();
[0623] (11)         animateCostume(3,13);
[0626] (4C)         soundKludge([268,134,0,5]);
[0634] (48)         if (Var[411] == 176) {
[063B] (1A)           Local[1] = 691;
[0640] (48)         } else if (Var[411] == 172) {
[064A] (1A)           Local[1] = 693;
[064F] (48)         } else if (Var[411] == 164) {
[0659] (1A)           Local[1] = 694;
[065E] (48)         } else if (Var[411] == 170) {
[0668] (1A)           Local[1] = 693;
[066D] (48)         } else if (Var[411] == 155) {
[0677] (1A)           Local[1] = 646;
[067C] (18)           /* goto 067F; */
[067F] (**)         }
[067F] (9D)         if (classOfIs(Local[1],[160])) {
[0688] (0A)           startScript(144,[86,10]);
[0691] (D8)           printEgo([Text(sound(0x54, 0x39) + "That's funny, it's pointing\x10downward.")]);
[06C9] (DD)           setClass(Local[1],[32,141,146,6]);
[06D9] (18)         } else {
[06DC] (D8)           printEgo([Text(sound(0x54, 0x3A) + "It's still pointing\x10downward.")]);
[070C] (**)         }
[070C] (AE)         WaitForMessage();
[070E] (18)         goto 0D5B;
[0711] (48)       } else if (VAR_ROOM == 157) {
[071B] (48)         if (Var[412] == 1) {
[0722] (1D)           if (classOfIs(623,[26])) {
[072B] (5D)             setClass(1012,[6]);
[0732] (0A)             startScript(135,[647,Local[2],Local[3],Local[4],1,2]);
[0747] (80)             breakHere();
[0748] (68)             VAR_RESULT = isScriptRunning(135);
[074C] (28)             unless (!VAR_RESULT) goto 0747;
[0751] (1D)             if (classOfIs(647,[134])) {
[075A] (0A)               startScript(144,[49,10]);
[0763] (D8)               printEgo([Text(sound(0x54, 0x3B) + "Hmmm^it's pointing toward that blank wall in the\x10back.")]);
[07AC] (5D)               setClass(647,[32,154]);
[07B6] (18)             } else {
[07B9] (D8)               printEgo([Text(sound(0x54, 0x3C) + "It's pointing toward that door in the back of the\x10room.")]);
[0803] (**)             }
[0803] (18)             goto 0D5B;
[0806] (**)           }
[0806] (**)         }
[0806] (18)         goto 0B66;
[0809] (48)       } else if (VAR_ROOM == 162) {
[0813] (1D)         if (classOfIs(621,[26])) {
[081C] (5D)           setClass(1012,[6]);
[0823] (0A)           startScript(135,[685,Local[2],Local[3],Local[4],0,4]);
[0838] (80)           breakHere();
[0839] (68)           VAR_RESULT = isScriptRunning(135);
[083D] (28)           unless (!VAR_RESULT) goto 0838;
[0842] (D8)           printEgo([Text(sound(0x54, 0x3D) + "It's pointing towards that door on the right.")]);
[0882] (18)           goto 0D5B;
[0885] (1D)         } else if (classOfIs(714,[32])) {
[0891] (5D)           setClass(1012,[6]);
[0898] (0A)           startScript(135,[695,Local[2],Local[3],Local[4],1,2]);
[08AD] (80)           breakHere();
[08AE] (68)           VAR_RESULT = isScriptRunning(135);
[08B2] (28)           unless (!VAR_RESULT) goto 08AD;
[08B7] (1D)           if (classOfIs(695,[134])) {
[08C0] (D8)             printEgo([Text(sound(0x54, 0x3E) + "Hmmm^it's pointing towards that blank wall in the\x10back.")]);
[090A] (5D)             setClass(695,[32,154]);
[0914] (0A)             startScript(144,[109,9]);
[091D] (18)           } else {
[0920] (D8)             printEgo([Text(sound(0x54, 0x3F) + "It's pointing toward that door in the back of the\x10room.")]);
[096A] (**)           }
[096A] (18)           goto 0D5B;
[096D] (**)         }
[096D] (18)         goto 0B66;
[0970] (48)       } else if (VAR_ROOM == 171) {
[097A] (48)         if (Var[412] == 2) {
[0981] (1D)           if (classOfIs(623,[26])) {
[098A] (5D)             setClass(1012,[6]);
[0991] (0A)             startScript(135,[695,Local[2],Local[3],Local[4],1,2]);
[09A6] (80)             breakHere();
[09A7] (68)             VAR_RESULT = isScriptRunning(135);
[09AB] (28)             unless (!VAR_RESULT) goto 09A6;
[09B0] (1D)             if (classOfIs(695,[134])) {
[09B9] (0A)               startScript(144,[49,10]);
[09C2] (D8)               printEgo([Text(sound(0x54, 0x40) + "Hmmm^it's pointing towards that blank wall in the\x10back.")]);
[0A0C] (5D)               setClass(695,[32,154]);
[0A16] (18)             } else {
[0A19] (D8)               printEgo([Text(sound(0x54, 0x41) + "It's pointing toward that door in the back of the\x10room.")]);
[0A63] (**)             }
[0A63] (18)             goto 0D5B;
[0A66] (**)           }
[0A66] (**)         }
[0A66] (18)         goto 0B66;
[0A69] (48)       } else if (VAR_ROOM == 174) {
[0A73] (48)         if (Var[412] == 3) {
[0A7A] (1D)           if (classOfIs(623,[26])) {
[0A83] (5D)             setClass(1012,[6]);
[0A8A] (0A)             startScript(135,[695,Local[2],Local[3],Local[4],1,2]);
[0A9F] (80)             breakHere();
[0AA0] (68)             VAR_RESULT = isScriptRunning(135);
[0AA4] (28)             unless (!VAR_RESULT) goto 0A9F;
[0AA9] (1D)             if (classOfIs(695,[134])) {
[0AB2] (0A)               startScript(144,[49,10]);
[0ABB] (D8)               printEgo([Text(sound(0x54, 0x42) + "Hmmm^it's pointing towards that blank wall in the back.")]);
[0B05] (5D)               setClass(695,[32,154]);
[0B0F] (18)             } else {
[0B12] (D8)               printEgo([Text(sound(0x54, 0x43) + "It's pointing towards that door in the back of the room.")]);
[0B5D] (**)             }
[0B5D] (18)             goto 0D5B;
[0B60] (**)           }
[0B60] (**)         }
[0B60] (18)         goto 0B66;
[0B63] (18)       } else {
[0B66] (1A)         Local[0] = 1;
[0B6B] (11)         animateCostume(3,16);
[0B6E] (1D)         if (classOfIs(1012,[6])) {
[0B77] (1D)           if (classOfIs(1012,[18])) {
[0B80] (5D)             setClass(1012,[146]);
[0B87] (D8)             printEgo([Text(sound(0x54, 0x44) + "It's not pointing\x10anywhere." + wait() + "There must not be any orichalcum\x10nearby.")]);
[0BDF] (18)           } else {
[0BE5] (18)             goto 0C16;
[0BE8] (**)           }
[0BE8] (**)         }
[0BE8] (D8)         printEgo([Text(sound(0x54, 0x45) + "It's not pointing anywhere.")]);
[0C16] (4C)         soundKludge([268,134,0,4]);
[0C24] (AE)         WaitForMessage();
[0C26] (18)       } else {
[0C29] (0A)         startScript(135,[1,Local[2],Local[3],Local[4]]);
[0C38] (80)         breakHere();
[0C39] (68)         VAR_RESULT = isScriptRunning(135);
[0C3D] (28)         unless (!VAR_RESULT) goto 0C38;
[0C42] (5D)         setClass(1012,[6]);
[0C49] (D8)         printEgo([Text(sound(0x54, 0x46) + "Why, it's pointing at me!")]);
[0C75] (AE)         WaitForMessage();
[0C77] (18)         goto 0D5B;
[0C7A] (D8)         printEgo([Text(sound(0x54, 0x47) + "It's pointing at Indy!")]);
[0CA3] (5D)         setClass(1012,[6]);
[0CAA] (AE)         WaitForMessage();
[0CAC] (18)         goto 0D5B;
[0CAF] (0A)         startScript(135,[2,Local[2],Local[3],Local[4]]);
[0CBE] (80)         breakHere();
[0CBF] (68)         VAR_RESULT = isScriptRunning(135);
[0CC3] (28)         unless (!VAR_RESULT) goto 0CBE;
[0CC8] (5D)         setClass(1012,[6]);
[0CCF] (D8)         printEgo([Text(sound(0x54, 0x48) + "It's pointing at Sophia's necklace!")]);
[0D05] (1A)         Bit[26] = 1;
[0D0A] (AE)         WaitForMessage();
[0D0C] (48)         if (Bit[28] == 0) {
[0D13] (1A)           Bit[28] = 1;
[0D18] (14)           print(2,[Text(sound(0x54, 0x49) + "It must be detecting the orichalcum\x10residue.")]);
[0D58] (**)         }
[0D58] (18)         /* goto 0D5B; */
[0D5B] (**)       }
[0D5B] (AE)       WaitForMessage();
[0D5D] (11)       animateCostume(3,15);
[0D60] (80)       breakHere();
[0D61] (80)       breakHere();
[0D62] (80)       breakHere();
[0D63] (11)       animateCostume(1,8);
[0D66] (2D)       putActorInRoom(3,0);
[0D69] (80)       breakHere();
[0D6A] (80)       breakHere();
[0D6B] (80)       breakHere();
[0D6C] (80)       breakHere();
[0D6D] (80)       breakHere();
[0D6E] (13)       ActorOps(1,[Costume(2)]);
[0D73] (11)       animateCostume(1,3);
[0D76] (48)       if (Var[238] == 2) {
[0D7D] (0A)         startScript(165,[]);
[0D80] (**)       }
[0D80] (**)     }
[0D80] (**)   }
[0D80] (C0)   endCutscene();
[0D81] (**) }
[0D81] (A0) stopObjectCode();
END

// Script 93
[0000] (33) RoomIntensity(0,11,11);
[0005] (1A) Local[1] = 55;
[000A] (33) RoomIntensity(Local[1],11,11);
[0010] (48) if (Local[0] == 1) {
[0017] (33)   RoomIntensity(Local[1],159,159);
[001D] (A8)   if (Var[314]) {
[0022] (33)     RoomIntensity(Local[1],Var[314],Var[314]);
[002A] (**)   }
[002A] (**) }
[002A] (48) if (Local[0] == 3) {
[0031] (33)   RoomIntensity(Local[1],159,159);
[0037] (A8)   if (Var[314]) {
[003C] (33)     RoomIntensity(Local[1],Var[314],Var[314]);
[0044] (**)   }
[0044] (**) }
[0044] (80) breakHere();
[0045] (5A) Local[1] += 40;
[004A] (46) Local[1]++;
[004D] (44) unless (Local[1] > 255) goto 000A;
[0054] (33) RoomIntensity(255,11,11);
[0059] (48) if (Local[0] == 1) {
[0060] (33)   RoomIntensity(255,159,159);
[0065] (A8)   if (Var[314]) {
[006A] (33)     RoomIntensity(255,Var[314],Var[314]);
[0071] (**)   }
[0071] (**) }
[0071] (48) if (Local[0] == 3) {
[0078] (33)   RoomIntensity(255,159,159);
[007D] (A8)   if (Var[314]) {
[0082] (33)     RoomIntensity(255,Var[314],Var[314]);
[0089] (**)   }
[0089] (**) }
[0089] (2B) delayVariable(Var[452]);
[008C] (1A) Local[1] = 255;
[0091] (33) RoomIntensity(Local[1],11,11);
[0097] (48) if (Local[0] == 2) {
[009E] (33)   RoomIntensity(Local[1],159,159);
[00A4] (A8)   if (Var[314]) {
[00A9] (33)     RoomIntensity(Local[1],Var[314],Var[314]);
[00B1] (**)   }
[00B1] (**) }
[00B1] (48) if (Local[0] == 3) {
[00B8] (33)   RoomIntensity(Local[1],159,159);
[00BE] (A8)   if (Var[314]) {
[00C3] (33)     RoomIntensity(Local[1],Var[314],Var[314]);
[00CB] (**)   }
[00CB] (**) }
[00CB] (80) breakHere();
[00CC] (3A) Local[1] -= 49;
[00D1] (C6) Local[1]--;
[00D4] (78) unless (Local[1] < 55) goto 0091;
[00DB] (33) RoomIntensity(55,11,11);
[00E0] (48) if (Local[0] == 2) {
[00E7] (33)   RoomIntensity(55,159,159);
[00EC] (A8)   if (Var[314]) {
[00F1] (33)     RoomIntensity(55,Var[314],Var[314]);
[00F8] (**)   }
[00F8] (0A)   startScript(129,[]);
[00FB] (**) }
[00FB] (48) if (Local[0] == 3) {
[0102] (33)   RoomIntensity(55,159,159);
[0107] (A8)   if (Var[314]) {
[010C] (33)     RoomIntensity(55,Var[314],Var[314]);
[0113] (**)   }
[0113] (0A)   startScript(129,[]);
[0116] (**) }
[0116] (14) print(255,[Text(" ")]);
[011B] (80) breakHere();
[011C] (80) breakHere();
[011D] (80) breakHere();
[011E] (80) breakHere();
[011F] (80) breakHere();
[0120] (1A) Bit[35] = 1;
[0125] (A0) stopObjectCode();
END

// Script 94
[0000] (0A) startScript(107,[]);
[0003] (1A) VAR_CHARINC = 5;
[0008] (33) RoomIntensity(55,11,11);
[000D] (1A) Bit[35] = 0;
[0012] (2C) InitCharset(3);
[0015] (9A) Local[2] = Local[0];
[001A] (C8) if (Local[0] == Local[1]) {
[0021] (1A)   Local[3] = 3;
[0026] (C8) } else if (Local[2] == Local[0]) {
[0030] (1A)   Local[3] = 1;
[0035] (C8) } else if (Local[2] == Local[1]) {
[003F] (1A)   Local[3] = 2;
[0044] (18) } else {
[0047] (1A)   Local[3] = 0;
[004C] (**) }
[004C] (0A) startScript(93,[Local[3]]);
[0052] (8A) startScript(Local[2],[]);
[0056] (80) breakHere();
[0057] (A8) unless (Bit[35]) goto 0056;
[005C] (C8) if (Local[2] == Local[1]) {
[0063] (85)   drawObject(Var[308]);
[0067] (**) }
[0067] (1A) Bit[35] = 0;
[006C] (46) Local[2]++;
[006F] (C4) unless (Local[2] > Local[1]) goto 001A;
[0076] (A0) stopObjectCode();
END

// Script 98
[0000] (16) Var[442] = getRandomNr(2);
[0004] (48) if (Var[442] == 0) {
[000B] (AC)   Exprmode Var[444] = (18 - 15);
[0016] (AC)   Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 15);
[0024] (48) } else if (Var[442] == 1) {
[002E] (AC)   Exprmode Var[444] = (27 - 24);
[0039] (AC)   Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 24);
[0047] (48) } else if (Var[442] == 2) {
[0051] (AC)   Exprmode Var[444] = (36 - 33);
[005C] (AC)   Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 33);
[006A] (18)   /* goto 006D; */
[006D] (**) }
[006D] (9A) Var[239] = Var[444];
[0072] (1B) Var[239] *= 10;
[0077] (AC) Exprmode Var[444] = (3 - 1);
[0082] (AC) Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[0090] (9A) Var[240] = Var[444];
[0095] (AC) Exprmode Var[444] = (4 - 1);
[00A0] (AC) Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[00AE] (9A) Var[241] = Var[444];
[00B3] (AC) Exprmode Var[444] = (4 - 1);
[00BE] (AC) Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[00CC] (9A) Var[242] = Var[444];
[00D1] (AC) Exprmode Local[0] = (2 * Var[242]);
[00DC] (AC) Exprmode Var[442] = (Local[0] - 1);
[00E7] (AC) Exprmode Var[444] = (Local[0] - Var[442]);
[00F2] (AC) Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + Var[442]);
[0100] (9A) Var[243] = Var[444];
[0105] (A0) stopObjectCode();
END

// Script 107
[0000] (1A) VAR_CHARINC = 3;
[0005] (80) breakHere();
[0006] (18) goto 0000;
[0009] (A0) stopObjectCode();
END

// Script 119
[0000] (48) if (Local[1] == 1) {
[0007] (60)   freezeScripts(127);
[0009] (33)   saveLoad(1,26);
[000D] (1A)   Bit[23] = 1;
[0012] (80)   breakHere();
[0013] (48)   if (VAR_GAME_LOADED == 203) {
[001A] (1A)     Bit[23] = 0;
[001F] (1A)     VAR_MAINMENU_KEY = 319;
[0024] (1A)     Var[447] = 1;
[0029] (60)     freezeScripts(0);
[002B] (62)     stopScript(0);
[002D] (18)   } else {
[0030] (1A)     VAR_MAINMENU_KEY = 0;
[0035] (1A)     Var[447] = 0;
[003A] (F2)     loadRoom(Local[0]);
[003D] (**)   }
[003D] (18) } else {
[0040] (1A)   Bit[23] = 0;
[0045] (33)   saveLoad(2,26);
[0049] (80)   breakHere();
[004A] (**) }
[004A] (A0) stopObjectCode();
END

// Script 125
[0000] (A8) if (Local[5]) {
[0005] (18) } else {
[0008] (40)   cutscene([2]);
[000D] (**) }
[000D] (C3) Local[8] = getActorX(Local[0]);
[0012] (28) if (!Local[6]) {
[0017] (F8)   if (Local[3] < Local[4]) {
[001E] (DA)     Local[3] += Local[2];
[0023] (E1)     putActor(Local[0],Local[8],Local[3]);
[002A] (**)   }
[002A] (**) }
[002A] (AC) Exprmode Local[7] = ((Local[4] - Local[3]) / Local[2]);
[0039] (1A) Local[10] = 1;
[003E] (D1) animateCostume(Local[0],Local[1]);
[0043] (80) breakHere();
[0044] (80) breakHere();
[0045] (80) breakHere();
[0046] (80) breakHere();
[0047] (80) breakHere();
[0048] (80) breakHere();
[0049] (A3) Local[9] = getActorY(Local[0]);
[004E] (DA) Local[9] += Local[2];
[0053] (E1) putActor(Local[0],Local[8],Local[9]);
[005A] (C8) if (Local[10] == Local[7]) {
[0061] (F8)   if (Local[4] < Local[3]) {
[0068] (91)     animateCostume(Local[0],17);
[006C] (**)   }
[006C] (**) }
[006C] (46) Local[10]++;
[006F] (C4) unless (Local[10] > Local[7]) goto 003E;
[0076] (A8) if (Local[5]) {
[007B] (18) } else {
[007E] (C0)   endCutscene();
[007F] (**) }
[007F] (A0) stopObjectCode();
END

// Script 126
[0000] (C3) Local[7] = getActorX(Local[0]);
[0005] (C4) if (Local[5] > Local[4]) {
[000C] (AC)   Exprmode Local[6] = (Local[4] + 28);
[0017] (E1)   putActor(Local[0],Local[7],Local[6]);
[001E] (D1)   animateCostume(Local[0],Local[2]);
[0023] (80)   breakHere();
[0024] (80)   breakHere();
[0025] (80)   breakHere();
[0026] (80)   breakHere();
[0027] (80)   breakHere();
[0028] (80)   breakHere();
[0029] (80)   breakHere();
[002A] (80)   breakHere();
[002B] (80)   breakHere();
[002C] (80)   breakHere();
[002D] (80)   breakHere();
[002E] (5A)   Local[6] += 7;
[0033] (5A)   Local[5] += 7;
[0038] (E1)   putActor(Local[0],Local[7],Local[6]);
[003F] (2A)   startScript(125,[Local[0],Local[1],Local[3],Local[6],Local[5],1,1],F);
[0057] (80)   breakHere();
[0058] (68)   VAR_RESULT = isScriptRunning(125);
[005C] (28)   unless (!VAR_RESULT) goto 0057;
[0061] (18) } else {
[0064] (AC)   Exprmode Local[6] = (Local[5] + 28);
[006F] (2A)   startScript(125,[Local[0],Local[1],Local[3],Local[4],Local[6],1,1],F);
[0087] (80)   breakHere();
[0088] (68)   VAR_RESULT = isScriptRunning(125);
[008C] (28)   unless (!VAR_RESULT) goto 0087;
[0091] (D1)   animateCostume(Local[0],Local[2]);
[0096] (80)   breakHere();
[0097] (80)   breakHere();
[0098] (80)   breakHere();
[0099] (80)   breakHere();
[009A] (80)   breakHere();
[009B] (80)   breakHere();
[009C] (80)   breakHere();
[009D] (80)   breakHere();
[009E] (80)   breakHere();
[009F] (80)   breakHere();
[00A0] (80)   breakHere();
[00A1] (E1)   putActor(Local[0],Local[7],Local[5]);
[00A8] (91)   animateCostume(Local[0],3);
[00AC] (**) }
[00AC] (A0) stopObjectCode();
END

// Script 129
[0000] (2C) InitCharset(2);
[0003] (85) drawObject(Var[308]);
[0007] (80) breakHere();
[0008] (33) RoomIntensity(255,159,159);
[000D] (33) RoomIntensity(255,11,11);
[0012] (A8) if (Var[314]) {
[0017] (33)   RoomIntensity(255,Var[314],Var[314]);
[001E] (1A)   Var[314] = 0;
[0023] (**) }
[0023] (62) stopScript(107);
[0025] (A0) stopObjectCode();
END

// Script 130
[0000] (7A) VerbOps(1,[Dim()]);
[0004] (7A) VerbOps(2,[Dim()]);
[0008] (A0) stopObjectCode();
END

// Script 131
[0000] (7A) VerbOps(2,[Dim()]);
[0004] (A0) stopObjectCode();
END

// Script 132
[0000] (1A) Local[2] = 101;
[0005] (1A) Local[0] = 1;
[000A] (1A) Local[1] = 1;
[000F] (AC) Exprmode Local[3] = (((Local[1] - 1) * 32) + 160);
[0022] (AC) Exprmode Local[4] = (((Local[0] - 1) * 24) + 152);
[0035] (FA) VerbOps(Local[2],[New(),SetXY(Local[3],Local[4]),Off()]);
[0040] (46) Local[2]++;
[0043] (46) Local[1]++;
[0046] (44) unless (Local[1] > 5) goto 000F;
[004D] (46) Local[0]++;
[0050] (44) unless (Local[0] > 2) goto 000A;
[0057] (7A) VerbOps(101,[Key(49)]);
[005C] (7A) VerbOps(102,[Key(50)]);
[0061] (7A) VerbOps(103,[Key(51)]);
[0066] (7A) VerbOps(104,[Key(52)]);
[006B] (7A) VerbOps(105,[Key(53)]);
[0070] (7A) VerbOps(106,[Key(54)]);
[0075] (7A) VerbOps(107,[Key(55)]);
[007A] (7A) VerbOps(108,[Key(56)]);
[007F] (7A) VerbOps(109,[Key(57)]);
[0084] (7A) VerbOps(110,[Key(48)]);
[0089] (A0) stopObjectCode();
END

// Script 133
[0000] (28) if (!Local[4]) {
[0005] (C3)   Var[185] = getActorX(Local[0]);
[000A] (A3)   Var[186] = getActorY(Local[0]);
[000F] (18) } else {
[0012] (C3)   Local[8] = getActorX(Local[0]);
[0017] (A3)   Local[9] = getActorY(Local[0]);
[001C] (AC)   Exprmode Local[10] = (<VAR_RESULT = getActorX(Local[1])> - Local[8]);
[002A] (AC)   Exprmode Local[11] = (<VAR_RESULT = getActorY(Local[1])> - Local[9]);
[0038] (78)   if (Local[10] < 0) {
[003F] (AC)     Exprmode Local[10] = (0 - Local[10]);
[004A] (**)   }
[004A] (78)   if (Local[11] < 0) {
[0051] (AC)     Exprmode Local[11] = (0 - Local[11]);
[005C] (**)   }
[005C] (BB)   Local[5] = getActorScale(Local[0]);
[0061] (BB)   VAR_RESULT = getActorScale(Local[1]);
[0066] (F8)   if (VAR_RESULT < Local[5]) {
[006D] (BB)     Local[5] = getActorScale(Local[1]);
[0072] (**)   }
[0072] (1A)   Local[8] = 45;
[0077] (9B)   Local[8] *= Local[5];
[007C] (5B)   Local[8] /= 255;
[0081] (1A)   Local[9] = 45;
[0086] (9B)   Local[9] *= Local[5];
[008B] (5B)   Local[9] /= 255;
[0090] (84)   if (Local[10] <= Local[8]) {
[0097] (84)     if (Local[11] <= Local[9]) {
[009E] (C3)       Var[185] = getActorX(Local[0]);
[00A3] (A3)       Var[186] = getActorY(Local[0]);
[00A8] (1A)       Local[4] = 0;
[00AD] (**)     }
[00AD] (**)   }
[00AD] (**) }
[00AD] (AC) Exprmode Var[187] = (Var[185] - <VAR_RESULT = getActorX(Local[1])>);
[00BB] (AC) Exprmode Var[188] = (Var[186] - <VAR_RESULT = getActorY(Local[1])>);
[00C9] (78) if (Var[187] < 0) {
[00D0] (AC)   Exprmode Var[187] = (0 - Var[187]);
[00DB] (**) }
[00DB] (78) if (Var[188] < 0) {
[00E2] (AC)   Exprmode Var[188] = (0 - Var[188]);
[00ED] (**) }
[00ED] (28) if (!Local[3]) {
[00F2] (BB)   Local[5] = getActorScale(Local[0]);
[00F7] (BB)   VAR_RESULT = getActorScale(Local[1]);
[00FC] (F8)   if (VAR_RESULT < Local[5]) {
[0103] (BB)     Local[5] = getActorScale(Local[1]);
[0108] (**)   }
[0108] (A8)   if (Local[4]) {
[010D] (D6)     VAR_RESULT = getActorMoving(Local[0]);
[0112] (A8)     if (VAR_RESULT) {
[0117] (1A)       Var[183] = 8;
[011C] (1A)       Var[184] = 2;
[0121] (18)     } else {
[0124] (1A)       Var[183] = 45;
[0129] (1A)       Var[184] = 30;
[012E] (**)     }
[012E] (18)   } else {
[0131] (1A)     Var[183] = 45;
[0136] (1A)     Var[184] = 30;
[013B] (**)   }
[013B] (9B)   Var[183] *= Local[5];
[0140] (9B)   Var[184] *= Local[5];
[0145] (5B)   Var[183] /= 255;
[014A] (5B)   Var[184] /= 255;
[014F] (18) } else {
[0152] (9A)   Var[183] = Local[3];
[0157] (9A)   Var[184] = Var[183];
[015C] (**) }
[015C] (A8) if (Local[4]) {
[0161] (28)   if (!Var[183]) {
[0166] (1A)     Var[183] = 1;
[016B] (**)   }
[016B] (28)   if (!Var[184]) {
[0170] (1A)     Var[184] = 1;
[0175] (**)   }
[0175] (**) }
[0175] (1A) Bit[734] = 0;
[017A] (83) Local[6] = getActorRoom(Local[0]);
[017F] (83) VAR_RESULT = getActorRoom(Local[1]);
[0184] (88) if (VAR_RESULT != Local[6]) {
[018B] (A8)   if (Local[2]) {
[0190] (62)     stopScript(31);
[0192] (E3)     Local[7] = getActorFacing(Local[0]);
[0197] (C3)     Local[8] = getActorX(Local[0]);
[019C] (9A)     Local[10] = Local[8];
[01A1] (A3)     Local[9] = getActorY(Local[0]);
[01A6] (9A)     Local[11] = Local[9];
[01AB] (AC)     Exprmode Local[12] = (<VAR_RESULT = getActorWidth(Local[0])> * 2);
[01B9] (48)     if (Local[7] == 0) {
[01C0] (BA)       Local[10] -= Local[12];
[01C5] (48)     } else if (Local[7] == 1) {
[01CF] (DA)       Local[10] += Local[12];
[01D4] (48)     } else if (Local[7] == 2) {
[01DE] (16)       VAR_RESULT = getRandomNr(1);
[01E2] (A8)       if (VAR_RESULT) {
[01E7] (DA)         Local[10] += Local[12];
[01EC] (18)       } else {
[01EF] (BA)         Local[10] -= Local[12];
[01F4] (**)       }
[01F4] (18)       /* goto 01F7; */
[01F7] (**)     }
[01F7] (DA)     Local[11] += Local[12];
[01FC] (D6)     VAR_RESULT = getActorMoving(Local[0]);
[0201] (28)     if (!VAR_RESULT) {
[0206] (FE)       walkActorTo(Local[0],Local[10],Local[11]);
[020D] (**)     }
[020D] (80)     breakHere();
[020E] (80)     breakHere();
[020F] (80)     breakHere();
[0210] (80)     breakHere();
[0211] (80)     breakHere();
[0212] (83)     VAR_RESULT = getActorRoom(Local[0]);
[0217] (88)     if (VAR_RESULT != Local[6]) {
[021E] (1A)       Bit[734] = 1;
[0223] (18)       goto 017A;
[0226] (**)     }
[0226] (C3)     VAR_RESULT = getActorX(Local[0]);
[022B] (C8)     if (VAR_RESULT == Local[8]) {
[0232] (A3)       VAR_RESULT = getActorY(Local[0]);
[0237] (C8)       if (VAR_RESULT == Local[9]) {
[023E] (18)         goto 0197;
[0241] (**)       }
[0241] (**)     }
[0241] (A8)     if (Var[121]) {
[0246] (ED)       putActorInRoom(Local[1],Local[6]);
[024B] (CE)       putActorAtObject(Local[1],Var[121]);
[0250] (18)     } else {
[0253] (ED)       putActorInRoom(Local[1],Local[6]);
[0258] (E1)       putActor(Local[1],Local[8],Local[9]);
[025F] (**)     }
[025F] (28)     if (!Local[7]) {
[0264] (48)       if (Local[7] == 0) {
[026B] (91)         animateCostume(Local[1],248);
[026F] (48)       } else if (Local[7] == 1) {
[0279] (91)         animateCostume(Local[1],249);
[027D] (48)       } else if (Local[7] == 2) {
[0287] (91)         animateCostume(Local[1],250);
[028B] (48)       } else if (Local[7] == 3) {
[0295] (91)         animateCostume(Local[1],251);
[0299] (18)         /* goto 029C; */
[029C] (**)       }
[029C] (80)       breakHere();
[029D] (91)       animateCostume(Local[1],3);
[02A1] (80)       breakHere();
[02A2] (**)     }
[02A2] (42)     chainScript(31,[Local[0],Local[1],Local[2],Local[3]]);
[02B1] (**)   }
[02B1] (A8) } else if (Bit[734]) {
[02B9] (18)   goto 02A2;
[02BC] (**) }
[02BC] (A0) stopObjectCode();
END

// Script 134
[0000] (80) breakHere();
[0001] (FC) VAR_RESULT = isSoundRunning(Local[0]);
[0006] (28) if (!VAR_RESULT) {
[000B] (9C)   startSound(Local[1]);
[000E] (62)   stopScript(134);
[0010] (**) }
[0010] (80) breakHere();
[0011] (18) goto 0001;
[0014] (A0) stopObjectCode();
END

// Script 135
[0000] (A8) if (Local[4]) {
[0005] (4C)   soundKludge([268,134,0,5]);
[0013] (18) } else {
[0016] (4C)   soundKludge([268,134,0,4]);
[0024] (**) }
[0024] (A8) if (Local[5]) {
[0029] (48)   if (Local[5] == 1) {
[0030] (18)     goto 012B;
[0033] (48)   } else if (Local[5] == 2) {
[003D] (18)     goto 0120;
[0040] (48)   } else if (Local[5] == 3) {
[004A] (18)     goto 0114;
[004D] (48)   } else if (Local[5] == 4) {
[0057] (18)     goto 010A;
[005A] (18)     /* goto 005D; */
[005D] (**)   }
[005D] (**) }
[005D] (78) if (Local[0] < 16) {
[0064] (C3)   Local[6] = getActorX(Local[0]);
[0069] (A3)   Local[7] = getActorY(Local[0]);
[006E] (18) } else {
[0071] (C3)   Local[6] = getActorX(Local[0]);
[0076] (A3)   Local[7] = getActorY(Local[0]);
[007B] (**) }
[007B] (AC) Exprmode Local[8] = (Local[6] - Local[1]);
[0086] (AC) Exprmode Local[9] = (Local[7] - Local[2]);
[0091] (9A) Local[10] = Local[8];
[0096] (9A) Local[11] = Local[9];
[009B] (78) if (Local[10] < 0) {
[00A2] (AC)   Exprmode Local[10] = (0 - Local[10]);
[00AD] (**) }
[00AD] (78) if (Local[11] < 0) {
[00B4] (AC)   Exprmode Local[11] = (0 - Local[11]);
[00BF] (**) }
[00BF] (1B) Local[11] *= 2;
[00C4] (48) if (Local[8] == 0) {
[00CB] (48)   if (Local[9] == 0) {
[00D2] (A8)     if (Local[3]) {
[00D7] (18)       goto 010A;
[00DA] (18)     } else {
[00DD] (18)       goto 0114;
[00E0] (**)     }
[00E0] (**)   }
[00E0] (**) }
[00E0] (C4) if (Local[10] > Local[11]) {
[00E7] (44)   if (Local[8] > 0) {
[00EE] (18)     goto 010A;
[00F1] (18)   } else {
[00F4] (18)     goto 0114;
[00F7] (**)   }
[00F7] (44) } else if (Local[9] > 0) {
[0101] (18)   goto 012B;
[0104] (18) } else {
[010A] (11)   animateCostume(3,7);
[010D] (80)   breakHere();
[010E] (11)   animateCostume(3,11);
[0111] (18)   goto 0136;
[0114] (11)   animateCostume(3,10);
[0117] (80)   breakHere();
[0118] (80)   breakHere();
[0119] (80)   breakHere();
[011A] (11)   animateCostume(3,14);
[011D] (18) } else {
[0120] (11)   animateCostume(3,8);
[0123] (80)   breakHere();
[0124] (80)   breakHere();
[0125] (11)   animateCostume(3,12);
[0128] (18)   goto 0136;
[012B] (11)   animateCostume(3,9);
[012E] (80)   breakHere();
[012F] (80)   breakHere();
[0130] (11)   animateCostume(3,13);
[0133] (18)   /* goto 0136; */
[0136] (**) }
[0136] (A8) if (Bit[25]) {
[013B] (AE)   WaitForMessage();
[013D] (1A)   Local[12] = 1;
[0142] (4C)   soundKludge([257,Var[453 + Local[12]],128]);
[014F] (4C)   soundKludge([262,Var[453 + Local[12]],128]);
[015C] (4C)   soundKludge([269,Var[453 + Local[12]],127,180]);
[016C] (46)   Local[12]++;
[016F] (C4)   unless (Local[12] > Var[232]) goto 0142;
[0176] (1A)   Bit[25] = 0;
[017B] (**) }
[017B] (4C) soundKludge([-1]);
[0180] (A0) stopObjectCode();
END

// Script 136
[0000] (9A) Local[8] = Var[100];
[0005] (9A) Local[9] = Var[101];
[000A] (1A) Bit[16] = 0;
[000F] (1A) Bit[22] = 0;
[0014] (1A) Bit[733] = 0;
[0019] (19) doSentence(STOP);
[001B] (C3) Var[442] = getActorX(Local[0]);
[0020] (C3) Var[443] = getActorX(Local[1]);
[0025] (F8) if (Var[442] < Var[443]) {
[002C] (AC)   Exprmode Local[4] = (Var[443] - Local[2]);
[0037] (18) } else {
[003A] (AC)   Exprmode Local[4] = (Var[443] + Local[2]);
[0045] (**) }
[0045] (A3) Var[443] = getActorY(Local[1]);
[004A] (FE) walkActorTo(Local[0],Local[4],Var[443]);
[0051] (D6) VAR_RESULT = getActorMoving(Local[0]);
[0056] (48) if (VAR_RESULT == 0) {
[005D] (18) } else {
[0060] (9A)   Local[7] = Local[5];
[0065] (C3)   Var[442] = getActorX(Local[0]);
[006A] (C3)   Var[443] = getActorX(Local[1]);
[006F] (AC)   Exprmode Local[5] = (Var[442] - Var[443]);
[007A] (78)   if (Local[5] < 0) {
[0081] (AC)     Exprmode Local[5] = (0 - Local[5]);
[008C] (**)   }
[008C] (A3)   Var[442] = getActorY(Local[0]);
[0091] (A3)   Var[443] = getActorY(Local[1]);
[0096] (AC)   Exprmode Local[6] = (Var[442] - Var[443]);
[00A1] (78)   if (Local[6] < 0) {
[00A8] (AC)     Exprmode Local[6] = (0 - Local[6]);
[00B3] (**)   }
[00B3] (F8)   if (Local[5] < Local[2]) {
[00BA] (18)   } else {
[00BD] (F8)     unless (Local[5] < Local[6]) goto 00E0;
[00C4] (**)   }
[00C4] (84)   if (Local[5] <= Local[7]) {
[00CB] (AC)     Exprmode Var[442] = (Local[2] / 2);
[00D6] (F8)     if (Local[6] < Var[442]) {
[00DD] (18)       goto 0114;
[00E0] (**)     }
[00E0] (**)   }
[00E0] (A8)   if (Local[3]) {
[00E5] (88)     if (Local[8] != Var[100]) {
[00EC] (1A)       Bit[22] = 1;
[00F1] (18)       goto 0124;
[00F4] (**)     }
[00F4] (88)     if (Local[9] != Var[101]) {
[00FB] (1A)       Bit[22] = 1;
[0100] (18)       goto 0124;
[0103] (**)     }
[0103] (A8)     if (Bit[16]) {
[0108] (1A)       Bit[22] = 1;
[010D] (18)       goto 0124;
[0110] (**)     }
[0110] (**)   }
[0110] (80)   breakHere();
[0111] (18)   goto 0051;
[0114] (**) }
[0114] (1A) Bit[733] = 1;
[0119] (C9) faceActor(Local[0],Local[1]);
[011E] (80) breakHere();
[011F] (80) breakHere();
[0120] (91) animateCostume(Local[0],255);
[0124] (1A) Bit[733] = 1;
[0129] (A0) stopObjectCode();
END

// Script 142: Charged Comb on a String
[0000] (29) setOwnerOf(451,0);
[0004] (29) setOwnerOf(702,14);
[0008] (25) pickupObject(1012,73);
[000C] (54) setObjectName(1012,"charged comb on a string");
[0028] (0A) startScript(144,[108,10]);
[0031] (0A) startScript(10,[]);
[0034] (A0) stopObjectCode();
END

// Script 144
[0000] (38) if (Local[0] >= 0) {
[0007] (78)   if (Local[0] < 154) {
[000E] (27)     Local[2] = GetStringChar(30,Local[0]);
[0015] (3A)     Local[2] -= 100;
[001A] (28)     if (!Local[2]) {
[001F] (DA)       Var[450] += Local[1];
[0024] (5A)       Local[1] += 100;
[0029] (27)       SetStringChar(30,Local[0],Local[1]);
[0030] (7A)       VerbOps(54,[Text(getInt(Var[450]))]);
[0039] (0A)       startScript(145,[]);
[003C] (**)     }
[003C] (**)   }
[003C] (**) }
[003C] (A0) stopObjectCode();
END

// Script 145: IQ Points File
[0000] (1A) Var[451] = 0;
[0005] (1A) Local[3] = 0;
[000A] (33) loadString(31,"iq-points");
[0017] (1A) Local[0] = 0;
[001C] (27) Local[1] = GetStringChar(31,Local[0]);
[0023] (3A) Local[1] -= 100;
[0028] (A8) if (Local[1]) {
[002D] (DA)   Var[451] += Local[1];
[0032] (18) } else {
[0035] (27)   Local[2] = GetStringChar(30,Local[0]);
[003C] (3A)   Local[2] -= 100;
[0041] (A8)   if (Local[2]) {
[0046] (DA)     Var[451] += Local[2];
[004B] (5A)     Local[2] += 100;
[0050] (27)     SetStringChar(31,Local[0],Local[2]);
[0057] (1A)     Local[3] = 1;
[005C] (**)   }
[005C] (**) }
[005C] (46) Local[0]++;
[005F] (44) unless (Local[0] > 154) goto 001C;
[0066] (7A) VerbOps(55,[Text(getInt(Var[451]))]);
[006F] (A8) if (Local[3]) {
[0074] (33)   saveString(31,"iq-points");
[0081] (**) }
[0081] (A0) stopObjectCode();
END

// Script 150
[0000] (A8) if (Bit[21]) {
[0005] (1A)   Local[0] = 52;
[000A] (FA)   VerbOps(Local[0],[Off()]);
[000F] (46)   Local[0]++;
[0012] (44)   unless (Local[0] > 55) goto 000A;
[0019] (1A)   Bit[21] = 0;
[001E] (0A)   startScript(10,[]);
[0021] (0A)   startScript(13,[]);
[0024] (0A)   startScript(59,[]);
[0027] (18) } else {
[002A] (10)   VAR_RESULT = getObjectOwner(1208);
[002F] (48)   if (VAR_RESULT == 1) {
[0036] (62)     stopScript(197);
[0038] (7A)     VerbOps(82,[New(),Text(" "),Off()]);
[0040] (7A)     VerbOps(83,[New(),Text(" "),Off()]);
[0048] (7A)     VerbOps(84,[New(),Text(" "),Off()]);
[0050] (7A)     VerbOps(85,[New(),Text(" "),Off()]);
[0058] (1A)     Bit[542] = 0;
[005D] (**)   }
[005D] (1A)   Local[0] = 101;
[0062] (FA)   VerbOps(Local[0],[Off()]);
[0067] (46)   Local[0]++;
[006A] (44)   unless (Local[0] > 110) goto 0062;
[0071] (7A)   VerbOps(111,[Off()]);
[0075] (7A)   VerbOps(112,[Off()]);
[0079] (0A)   startScript(145,[]);
[007C] (1A)   Bit[21] = 1;
[0081] (7A)   VerbOps(52,[On()]);
[0085] (7A)   VerbOps(54,[Text(getInt(Var[450]))]);
[008E] (1A)   Local[0] = 53;
[0093] (FA)   VerbOps(Local[0],[On()]);
[0098] (46)   Local[0]++;
[009B] (44)   unless (Local[0] > 55) goto 0093;
[00A2] (0A)   startScript(13,[]);
[00A5] (**) }
[00A5] (A0) stopObjectCode();
END

// Script 161: Look at a person
[0000] (48) if (Var[181] == 2) {
[0007] (42)   chainScript(162,[]);
[000A] (18) } else {
[000D] (D8)   printEgo([Text(sound(0x54, 0x53) + "There's nothing to look at.")]);
[003B] (**) }
[003B] (A0) stopObjectCode();
END

// Script 162: Look at Sophia
[0000] (A8) if (Bit[24]) {
[0005] (48)   if (VAR_ROOM == 40) {
[000C] (48)     if (Var[238] == 2) {
[0013] (D8)       printEgo([Text(sound(0x54, 0x54) + "I can't see\x10her." + wait() + "I can only hear\x10her.")]);
[004C] (62)       stopScript(0);
[004E] (**)     }
[004E] (**)   }
[004E] (1D)   if (classOfIs(938,[146])) {
[0057] (18)   } else {
[005A] (10)     VAR_RESULT = getObjectOwner(938);
[005F] (08)     unless (VAR_RESULT != 2) goto 0091;
[0066] (**)   }
[0066] (11)   animateCostume(1,255);
[0069] (09)   faceActor(1,2);
[006D] (D8)   printEgo([Text(sound(0x54, 0x55) + "She looks fine.")]);
[008F] (62)   stopScript(0);
[0091] (68)   VAR_RESULT = isScriptRunning(31);
[0095] (A8)   if (VAR_RESULT) {
[009A] (62)     stopScript(31);
[009C] (1A)     Local[0] = 1;
[00A1] (**)   }
[00A1] (68)   VAR_RESULT = isScriptRunning(86);
[00A5] (A8)   if (VAR_RESULT) {
[00AA] (62)     stopScript(86);
[00AC] (1A)     Local[1] = 1;
[00B1] (**)   }
[00B1] (34)   Var[442] = getDist(1,2);
[00B8] (3B)   Var[442] = getActorScale(2);
[00BC] (AC)   Exprmode Var[443] = ((30 * Var[442]) / 255);
[00CB] (0A)   startScript(136,[1,2,Var[443],1]);
[00DA] (80)   breakHere();
[00DB] (68)   VAR_RESULT = isScriptRunning(136);
[00DF] (28)   unless (!VAR_RESULT) goto 00DA;
[00E4] (A8)   if (Bit[22]) {
[00E9] (18)   } else {
[00EC] (40)     cutscene([2]);
[00F1] (16)     Local[2] = getRandomNr(2);
[00F5] (48)     if (Local[2] == 0) {
[00FC] (14)       print(1,[Text(sound(0x54, 0x56) + "Sophia?")]);
[0117] (48)     } else if (Local[2] == 1) {
[0121] (14)       print(1,[Text(sound(0x54, 0x57) + "Say^")]);
[0139] (48)     } else if (Local[2] == 2) {
[0143] (14)       print(1,[Text(sound(0x54, 0x58) + "Listen^")]);
[015E] (18)       /* goto 0161; */
[0161] (**)     }
[0161] (09)     faceActor(2,1);
[0165] (AE)     WaitForMessage();
[0167] (14)     print(2,[Text(sound(0x54, 0x59) + "Yes?")]);
[017F] (AE)     WaitForMessage();
[0181] (14)     print(1,[Text(sound(0x54, 0x5A) + "Mind if I look at your\x10necklace?")]);
[01B5] (AE)     WaitForMessage();
[01B7] (C0)     endCutscene();
[01B8] (48)     if (Var[311] == 0) {
[01BF] (1A)       Var[311] = 1;
[01C4] (**)     }
[01C4] (2C)     CursorHide();
[01C6] (2C)     UserputOff();
[01C8] (0A)     startScript(119,[79,1]);
[01D1] (40)     cutscene([2]);
[01D6] (10)     VAR_RESULT = getObjectOwner(830);
[01DB] (48)     if (VAR_RESULT == 1) {
[01E2] (38)       if (Var[99] >= 10) {
[01E9] (1D)         if (classOfIs(933,[18])) {
[01F2] (5D)           setClass(933,[146]);
[01F9] (3A)           Var[99] -= 10;
[01FE] (A8)           if (Var[99]) {
[0203] (5D)             setClass(830,[134]);
[020A] (18)             goto 0228;
[020D] (18)           } else {
[0210] (5D)             setClass(830,[6]);
[0217] (18)             goto 0239;
[021A] (**)           }
[021A] (**)         }
[021A] (**)       }
[021A] (A8)       if (Var[99]) {
[021F] (1D)         if (classOfIs(830,[134])) {
[0228] (37)           startObject(830,3,[]);
[022D] (**)         }
[022D] (1D)       } else if (classOfIs(830,[6])) {
[0239] (37)         startObject(830,4,[]);
[023E] (**)       }
[023E] (**)     }
[023E] (14)     print(1,[Text(sound(0x54, 0x5B) + "Thanks.")]);
[0259] (AE)     WaitForMessage();
[025B] (C0)     endCutscene();
[025C] (2C)     CursorShow();
[025E] (2C)     UserputOn();
[0260] (**)   }
[0260] (A8)   if (Local[0]) {
[0265] (03)     VAR_RESULT = getActorRoom(2);
[0269] (C8)     if (VAR_RESULT == VAR_ROOM) {
[0270] (68)       VAR_RESULT = isScriptRunning(31);
[0274] (28)       if (!VAR_RESULT) {
[0279] (2A)         startScript(31,[1,2,1],F);
[0285] (**)       }
[0285] (**)     }
[0285] (**)   }
[0285] (A8)   if (Local[1]) {
[028A] (0A)     startScript(86,[1,2]);
[0293] (**)   }
[0293] (18) } else {
[0296] (14)   print(1,[Text(sound(0x54, 0x5C) + "I don't think this is the time or\x10place.")]);
[02D2] (**) }
[02D2] (A0) stopObjectCode();
END

// Script 163
[0000] (AC) Exprmode Var[444] = (Local[0] - (VAR_CAMERA_POS_X - 160));
[000F] (A0) stopObjectCode();
END

// Script 164
[0000] (93) ActorOps(Local[0],[Init(),Costume(163),IgnoreBoxes(),Scale(Local[4],Local[4])]);
[000D] (48) if (Local[5] == 0) {
[0014] (93)   ActorOps(Local[0],[NeverZClip()]);
[0019] (48) } else if (Local[5] == 1) {
[0023] (93)   ActorOps(Local[0],[SetZClip(1)]);
[0029] (48) } else if (Local[5] == 2) {
[0033] (93)   ActorOps(Local[0],[SetZClip(2)]);
[0039] (48) } else if (Local[5] == 3) {
[0043] (93)   ActorOps(Local[0],[SetZClip(3)]);
[0049] (18)   /* goto 004C; */
[004C] (**) }
[004C] (ED) putActorInRoom(Local[0],VAR_ROOM);
[0051] (E1) putActor(Local[0],Local[1],Local[2]);
[0058] (91) animateCostume(Local[0],250);
[005C] (16) Local[6] = getRandomNr(100);
[0060] (F8) if (Local[6] < Local[3]) {
[0067] (91)   animateCostume(Local[0],7);
[006B] (**) }
[006B] (80) breakHere();
[006C] (80) breakHere();
[006D] (80) breakHere();
[006E] (80) breakHere();
[006F] (80) breakHere();
[0070] (80) breakHere();
[0071] (80) breakHere();
[0072] (80) breakHere();
[0073] (80) breakHere();
[0074] (91) animateCostume(Local[0],1);
[0078] (18) goto 005C;
[007B] (A0) stopObjectCode();
END

// Script 165
[0000] (69) setOwnerOf(702,VAR_EGO);
[0005] (5D) setClass(702,[28]);
[000C] (29) setOwnerOf(1012,0);
[0010] (29) setOwnerOf(1012,15);
[0014] (0A) startScript(10,[]);
[0017] (A0) stopObjectCode();
END

// Script 192
[0000] (1A) Local[0] = 1;
[0005] (1A) Var[453 + Local[0]] = 0;
[000C] (46) Local[0]++;
[000F] (44) unless (Local[0] > 10) goto 0005;
[0016] (1A) VAR_SOUNDRESULT = 0;
[001B] (1A) Local[1] = 1;
[0020] (1A) Local[0] = 1;
[0025] (48) if (Local[0] == 134) {
[002C] (18) } else {
[002F] (4C)   soundKludge([13,Local[0]]);
[0037] (4C)   soundKludge([-1]);
[003C] (48)   if (VAR_SOUNDRESULT == 1) {
[0043] (9A)     Var[453 + Local[1]] = Local[0];
[004A] (5A)     Local[1] += 1;
[004F] (4C)     soundKludge([257,Local[0],0]);
[005A] (4C)     soundKludge([262,Local[0],0]);
[0065] (4C)     soundKludge([269,Local[0],1,30]);
[0073] (**)   }
[0073] (**) }
[0073] (46) Local[0]++;
[0076] (44) unless (Local[0] > 166) goto 0025;
[007D] (1A) VAR_SOUNDRESULT = 0;
[0082] (4C) soundKludge([279,0]);
[008A] (4C) soundKludge([-1]);
[008F] (A8) if (VAR_SOUNDRESULT) {
[0094] (1A)   Bit[25] = 1;
[0099] (3A)   Local[1] -= 1;
[009E] (9A)   Var[232] = Local[1];
[00A3] (18) } else {
[00A6] (4C)   soundKludge([270,134,1]);
[00B1] (3A)   Local[1] -= 1;
[00B6] (A8)   if (Local[1]) {
[00BB] (1A)     Local[0] = 1;
[00C0] (4C)     soundKludge([271,257,Var[453 + Local[0]],128]);
[00D0] (4C)     soundKludge([271,262,Var[453 + Local[0]],128]);
[00E0] (4C)     soundKludge([271,269,Var[453 + Local[0]],127,180]);
[00F3] (46)     Local[0]++;
[00F6] (C4)     unless (Local[0] > Local[1]) goto 00C0;
[00FD] (**)   }
[00FD] (4C)   soundKludge([271,-1]);
[0105] (**) }
[0105] (4C) soundKludge([-1]);
[010A] (A0) stopObjectCode();
END