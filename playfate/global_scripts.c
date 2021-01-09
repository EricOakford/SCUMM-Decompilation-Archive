/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Global Scripts
 */

// Script 1: Game Initialization
[0000] (2C) InitCharset(1);
[0003] (1A) VAR_TIMER_NEXT = 6;
[0008] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[000D] (1A) VAR_RESTART_KEY = 0;
[0012] (1A) VAR_PAUSE_KEY = 32;
[0017] (1A) VAR_TALKSTOP_KEY = 46;
[001C] (27) PutCodeInString(37, "Indy Atlantis PLAY DEMO v2 H" + getInt(VAR_HEAPSPACE) + " M" + getInt(VAR_MEMORY_PERFORMANCE) + " V" + getInt(VAR_VIDEO_PERFORMANCE) + " J" + getInt(VAR_MACHINE_SPEED));
[0052] (1A) Var[58] = 176;
[0057] (27) PutCodeInString(4, "Game Paused.  Press SPACE to Continue.");
[0081] (27) PutCodeInString(5, "Are you sure you want to restart?  (Y/N)Y");
[00AE] (27) PutCodeInString(6, "Are you sure you want to quit?  (Y/N)Y");
[00D8] (27) PutCodeInString(7, "Save");
[00E0] (27) PutCodeInString(8, "Load");
[00E8] (27) PutCodeInString(9, "Play");
[00F0] (27) PutCodeInString(10, "Cancel");
[00FA] (27) PutCodeInString(11, "Quit");
[0102] (27) PutCodeInString(12, "OK");
[0108] (27) PutCodeInString(13, "Insert save/load game disk");
[0126] (27) PutCodeInString(14, "You must enter a name");
[013F] (27) PutCodeInString(15, "The game was NOT saved");
[0159] (27) PutCodeInString(16, "The game was NOT loaded");
[0174] (27) PutCodeInString(17, "Saving '%s'");
[0183] (27) PutCodeInString(18, "Loading '%s'");
[0193] (27) PutCodeInString(19, "Name your SAVE game");
[01AA] (27) PutCodeInString(20, "Select a game to LOAD");
[01C3] (27) PutCodeInString(28, "Indiana Jones and the Fate of Atlantis");
[01ED] (27) PutCodeInString(21, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0238] (27) PutCodeInString(31, "ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd");
[02E5] (27) PutCodeInString(30, "ddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd");
[0392] (27) SetStringChar(21,0,7);
[0397] (27) SetStringChar(21,1,0);
[039C] (27) SetStringChar(21,2,8);
[03A1] (27) SetStringChar(21,3,0);
[03A6] (27) SetStringChar(21,4,7);
[03AB] (27) SetStringChar(21,5,8);
[03B0] (27) SetStringChar(21,6,14);
[03B5] (27) SetStringChar(21,7,7);
[03BA] (27) SetStringChar(21,8,0);
[03BF] (27) SetStringChar(21,9,7);
[03C4] (27) SetStringChar(21,10,8);
[03C9] (27) SetStringChar(21,11,14);
[03CE] (27) SetStringChar(21,12,7);
[03D3] (27) SetStringChar(21,13,15);
[03D8] (27) SetStringChar(21,14,8);
[03DD] (27) SetStringChar(21,15,15);
[03E2] (27) SetStringChar(21,16,8);
[03E7] (27) SetStringChar(21,17,15);
[03EC] (27) SetStringChar(21,18,8);
[03F1] (27) SetStringChar(21,19,15);
[03F6] (27) SetStringChar(21,20,8);
[03FB] (27) SetStringChar(21,21,8);
[0400] (27) SetStringChar(21,22,15);
[0405] (27) SetStringChar(21,23,8);
[040A] (27) SetStringChar(21,24,15);
[040F] (27) SetStringChar(21,25,8);
[0414] (27) SetStringChar(21,26,7);
[0419] (27) SetStringChar(21,27,15);
[041E] (27) SetStringChar(21,28,8);
[0423] (27) SetStringChar(21,29,15);
[0428] (27) SetStringChar(21,30,8);
[042D] (27) SetStringChar(21,31,4);
[0432] (27) SetStringChar(21,32,7);
[0437] (27) SetStringChar(21,33,15);
[043C] (27) SetStringChar(21,34,8);
[0441] (27) SetStringChar(21,35,15);
[0446] (27) SetStringChar(21,36,8);
[044B] (27) SetStringChar(21,37,8);
[0450] (27) SetStringChar(21,38,7);
[0455] (27) SetStringChar(21,39,15);
[045A] (27) SetStringChar(21,40,8);
[045F] (27) SetStringChar(21,41,15);
[0464] (27) SetStringChar(21,42,8);
[0469] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[046E] (1A) VAR_PAUSE_KEY = 32;
[0473] (1A) VAR_MAINMENU_KEY = 0;
[0478] (26) setVarRange(Var[127],7,[0,176,176,176,176,176,176]);
[0483] (26) setVarRange(Var[134],7,[0,156,165,174,183,192,192]);
[048E] (33) loadString(31,"iq-points");
[049B] (1A) VAR_CHARINC = 3;
[04A0] (1A) Var[111] = 10;
[04A5] (1A) Var[163] = 11;
[04AA] (1A) VAR_CUTSCENE_START_SCRIPT = 20;
[04AF] (1A) VAR_CUTSCENE_END_SCRIPT = 21;
[04B4] (1A) VAR_ENTRY_SCRIPT = 33;
[04B9] (1A) VAR_ENTRY_SCRIPT2 = 5;
[04BE] (1A) VAR_EXIT_SCRIPT = 23;
[04C3] (1A) VAR_VERB_SCRIPT = 4;
[04C8] (1A) VAR_SENTENCE_SCRIPT = 2;
[04CD] (1A) VAR_NUM_ACTOR = 12;
[04D2] (1A) Var[321] = 300;
[04D7] (1A) Var[324] = 100;
[04DC] (1A) Var[323] = 5;
[04E1] (1A) Var[325] = 10;
[04E6] (1A) Var[339] = 100;
[04EB] (1A) Var[338] = 5;
[04F0] (1A) Var[342] = 10;
[04F5] (9A) Var[322] = Var[321];
[04FA] (1A) Var[237] = 1;
[04FF] (1A) Bit[213] = 0;
[0504] (1A) Bit[214] = 0;
[0509] (0A) startScript(75,[]);
[050C] (CC) PseudoRoom(20,2,3,4);
[0512] (CC) PseudoRoom(20,5,6,7);
[0518] (CC) PseudoRoom(20,8,9,10);
[051E] (CC) PseudoRoom(20,11);
[0522] (CC) PseudoRoom(50,12,13,14);
[0528] (CC) PseudoRoom(50,15,16,17);
[052E] (CC) PseudoRoom(50,18,19,20);
[0534] (CC) PseudoRoom(50,21,22,23);
[053A] (CC) PseudoRoom(50,24,25,26);
[0540] (CC) PseudoRoom(50,27,28,29);
[0546] (CC) PseudoRoom(50,30,31,32);
[054C] (CC) PseudoRoom(50,33);
[0550] (CC) PseudoRoom(51,34,35,36);
[0556] (CC) PseudoRoom(51,37,38,39);
[055C] (CC) PseudoRoom(51,40,41,42);
[0562] (CC) PseudoRoom(51,43,44,45);
[0568] (CC) PseudoRoom(51,46,47,48);
[056E] (CC) PseudoRoom(51,49);
[0572] (CC) PseudoRoom(72,50,51,52,53,54);
[057A] (CC) PseudoRoom(92,64,65,66,67,68,69);
[0583] (CC) PseudoRoom(92,70,71,72,73,74,75);
[058C] (CC) PseudoRoom(92,76,77,78,79,80,81);
[0595] (CC) PseudoRoom(92,82,83,84,85,86,87);
[059E] (CC) PseudoRoom(95,55,56,57);
[05A4] (CC) PseudoRoom(95,58,59,60);
[05AA] (CC) PseudoRoom(95,61,62,63);
[05B0] (CC) PseudoRoom(93,90,91,92,93);
[05B7] (CC) PseudoRoom(94,94,95,96,97);
[05BE] (CC) PseudoRoom(46,98,99,100);
[05C4] (CC) PseudoRoom(46,101,102,103);
[05CA] (1A) Bit[461] = 1;
[05CF] (0C) Resource.clearHeap();
[05D1] (33) screenEffect(257);
[05D5] (1A) VAR_EGO = 1;
[05DA] (13) ActorOps(1,[Init(),Costume(2),TalkColor(15),Name("Indy")]);
[05E8] (13) ActorOps(2,[Init(),Costume(28),TalkColor(13),Name("Sophia")]);
[05F8] (D2) actorFollowCamera(VAR_EGO);
[05FB] (1A) Var[182] = 2;
[0600] (13) ActorOps(4,[TalkColor(14)]);
[0605] (5D) setClass(2,[141]);
[060C] (0A) startScript(18,[]);
[060F] (78) if (VAR_INPUTMODE < 2) {
[0616] (1A)   Bit[107] = 0;
[061B] (18) } else {
[061E] (1A)   Bit[107] = 1;
[0623] (**) }
[0623] (48) if (Local[0] == -7873) {
[062A] (18) } else {
[062D] (A8)   if (Local[0]) {
[0632] (48)     if (Local[0] == 2718) {
[0639] (18)     } else {
[063C] (1A)       Bit[24] = 1;
[0641] (1A)       VAR_MAINMENU_KEY = 0;
[0646] (33)       SetScreen(0,200);
[064C] (0A)       startScript(74,[]);
[064F] (80)       breakHere();
[0650] (68)       VAR_RESULT = isScriptRunning(74);
[0654] (28)       unless (!VAR_RESULT) goto 064F;
[0659] (2C)       InitCharset(2);
[065C] (0A)       startScript(19,[2]);
[0662] (1A)       Bit[69] = 1;
[0667] (27)       PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[07BC] (48)       if (Local[0] == 9900) {
[07C3] (13)         ActorOps(1,[Costume(2)]);
[07C8] (25)         pickupObject(20,1);
[07CC] (25)         pickupObject(934,68);
[07D0] (25)         pickupObject(935,68);
[07D4] (25)         pickupObject(936,68);
[07D8] (25)         pickupObject(1253,97);
[07DC] (25)         pickupObject(1188,92);
[07E0] (25)         pickupObject(1189,92);
[07E4] (25)         pickupObject(1175,92);
[07E8] (25)         pickupObject(583,48);
[07EC] (54)         setObjectName(583,"ladder");
[07F6] (37)         startObject(933,250,[20]);
[07FE] (2D)         putActorInRoom(1,226);
[0801] (0E)         putActorAtObject(1,567);
[0805] (1A)         Var[238] = 3;
[080A] (1A)         Bit[17] = 1;
[080F] (2D)         putActorInRoom(2,18);
[0812] (01)         putActor(2,139,139);
[0818] (0A)         startScript(86,[1,2]);
[0821] (0A)         startScript(31,[1,2,1]);
[082D] (72)         loadRoom(18);
[082F] (**)       }
[082F] (48)       if (Local[0] == 9901) {
[0836] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0988] (1A)         Var[238] = 3;
[098D] (1A)         Var[417] = 29;
[0992] (13)         ActorOps(1,[Costume(2)]);
[0997] (25)         pickupObject(20,1);
[099B] (25)         pickupObject(934,68);
[099F] (25)         pickupObject(935,68);
[09A3] (25)         pickupObject(936,68);
[09A7] (29)         setOwnerOf(937,1);
[09AB] (25)         pickupObject(830,60);
[09AF] (5D)         setClass(830,[8]);
[09B6] (37)         startObject(933,250,[5000]);
[09BE] (25)         pickupObject(1253,97);
[09C2] (25)         pickupObject(1188,92);
[09C6] (25)         pickupObject(1189,92);
[09CA] (25)         pickupObject(1175,92);
[09CE] (25)         pickupObject(204,18);
[09D2] (25)         pickupObject(1012,73);
[09D6] (25)         pickupObject(173,16);
[09DA] (25)         pickupObject(586,48);
[09DE] (25)         pickupObject(1190,92);
[09E2] (25)         pickupObject(1207,93);
[09E6] (5D)         setClass(1207,[146]);
[09ED] (25)         pickupObject(1208,93);
[09F1] (5D)         setClass(1208,[146]);
[09F8] (0A)         startScript(197,[]);
[09FB] (5D)         setClass(576,[146]);
[0A02] (25)         pickupObject(1191,92);
[0A06] (54)         setObjectName(586,"light-wand");
[0A14] (2D)         putActorInRoom(1,48);
[0A17] (01)         putActor(1,50,100);
[0A1D] (**)       }
[0A1D] (48)       if (Local[0] == 9909) {
[0A24] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0B76] (1A)         Var[238] = 2;
[0B7B] (1A)         Var[417] = 29;
[0B80] (13)         ActorOps(1,[Costume(2)]);
[0B85] (25)         pickupObject(20,1);
[0B89] (25)         pickupObject(934,68);
[0B8D] (25)         pickupObject(935,68);
[0B91] (25)         pickupObject(936,68);
[0B95] (29)         setOwnerOf(937,1);
[0B99] (25)         pickupObject(868,65);
[0B9D] (25)         pickupObject(456,40);
[0BA1] (25)         pickupObject(432,39);
[0BA5] (25)         pickupObject(1012,73);
[0BA9] (25)         pickupObject(1001,73);
[0BAD] (25)         pickupObject(999,73);
[0BB1] (25)         pickupObject(830,60);
[0BB5] (25)         pickupObject(701,52);
[0BB9] (25)         pickupObject(1188,92);
[0BBD] (25)         pickupObject(1189,92);
[0BC1] (25)         pickupObject(1175,92);
[0BC5] (25)         pickupObject(1190,92);
[0BC9] (25)         pickupObject(1207,93);
[0BCD] (5D)         setClass(1207,[146]);
[0BD4] (25)         pickupObject(1208,93);
[0BD8] (37)         startObject(933,250,[20]);
[0BE0] (5D)         setClass(1208,[146]);
[0BE7] (0A)         startScript(197,[]);
[0BEA] (25)         pickupObject(1191,92);
[0BEE] (2D)         putActorInRoom(1,48);
[0BF1] (01)         putActor(1,50,100);
[0BF7] (**)       }
[0BF7] (48)       if (Local[0] == 9902) {
[0BFE] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0D51] (1A)         Var[238] = 3;
[0D56] (13)         ActorOps(1,[Costume(2)]);
[0D5B] (25)         pickupObject(20,1);
[0D5F] (25)         pickupObject(934,68);
[0D63] (25)         pickupObject(935,68);
[0D67] (25)         pickupObject(936,68);
[0D6B] (1C)         startSound(74);
[0D6D] (0A)         startScript(146,[]);
[0D70] (37)         startObject(933,250,[32000]);
[0D78] (25)         pickupObject(1253,97);
[0D7C] (25)         pickupObject(1188,92);
[0D80] (25)         pickupObject(1189,92);
[0D84] (25)         pickupObject(1175,92);
[0D88] (25)         pickupObject(583,48);
[0D8C] (54)         setObjectName(583,"ladder");
[0D96] (25)         pickupObject(204,18);
[0D9A] (25)         pickupObject(173,16);
[0D9E] (25)         pickupObject(586,48);
[0DA2] (25)         pickupObject(1190,92);
[0DA6] (25)         pickupObject(1207,93);
[0DAA] (25)         pickupObject(1208,93);
[0DAE] (5D)         setClass(1208,[146]);
[0DB5] (25)         pickupObject(1191,92);
[0DB9] (54)         setObjectName(586,"light-wand");
[0DC7] (2D)         putActorInRoom(1,88);
[0DCA] (01)         putActor(1,103,70);
[0DD0] (1A)         Var[224] = 97;
[0DD5] (**)       }
[0DD5] (48)       if (Local[0] == 9903) {
[0DDC] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[0F31] (1A)         Var[238] = 3;
[0F36] (13)         ActorOps(1,[Costume(2)]);
[0F3B] (25)         pickupObject(20,1);
[0F3F] (25)         pickupObject(934,68);
[0F43] (25)         pickupObject(935,68);
[0F47] (25)         pickupObject(936,68);
[0F4B] (37)         startObject(933,250,[3]);
[0F53] (69)         setOwnerOf(937,VAR_EGO);
[0F58] (2D)         putActorInRoom(1,48);
[0F5B] (01)         putActor(1,50,100);
[0F61] (**)       }
[0F61] (48)       if (Local[0] == 9904) {
[0F68] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[107C] (1A)         Var[238] = 3;
[1081] (13)         ActorOps(1,[Costume(2)]);
[1086] (25)         pickupObject(20,1);
[108A] (25)         pickupObject(934,68);
[108E] (25)         pickupObject(935,68);
[1092] (25)         pickupObject(936,68);
[1096] (25)         pickupObject(1253,97);
[109A] (25)         pickupObject(1188,92);
[109E] (25)         pickupObject(1189,92);
[10A2] (25)         pickupObject(1175,92);
[10A6] (25)         pickupObject(583,48);
[10AA] (54)         setObjectName(583,"ladder");
[10B4] (25)         pickupObject(204,18);
[10B8] (25)         pickupObject(173,16);
[10BC] (25)         pickupObject(586,48);
[10C0] (25)         pickupObject(1190,92);
[10C4] (25)         pickupObject(830,60);
[10C8] (25)         pickupObject(1207,93);
[10CC] (25)         pickupObject(1208,93);
[10D0] (5D)         setClass(1208,[146]);
[10D7] (25)         pickupObject(1191,92);
[10DB] (54)         setObjectName(586,"light-wand");
[10E9] (1A)         Var[224] = 16;
[10EE] (2D)         putActorInRoom(1,225);
[10F1] (01)         putActor(1,103,70);
[10F7] (1A)         Bit[17] = 1;
[10FC] (**)       }
[10FC] (48)       if (Local[0] == 9905) {
[1103] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[1255] (1A)         Var[238] = 3;
[125A] (1A)         Var[417] = 29;
[125F] (1A)         Var[224] = 66;
[1264] (13)         ActorOps(1,[Costume(2)]);
[1269] (25)         pickupObject(20,1);
[126D] (25)         pickupObject(934,68);
[1271] (25)         pickupObject(935,68);
[1275] (25)         pickupObject(936,68);
[1279] (29)         setOwnerOf(937,1);
[127D] (25)         pickupObject(830,60);
[1281] (5D)         setClass(830,[8]);
[1288] (37)         startObject(933,250,[25]);
[1290] (2D)         putActorInRoom(1,48);
[1293] (01)         putActor(1,50,100);
[1299] (**)       }
[1299] (48)       unless (Local[0] == 9906) goto 12A0;
[12A0] (48)       unless (Local[0] == 9907) goto 12A7;
[12A7] (48)       unless (Local[0] == 9908) goto 12AE;
[12AE] (48)       if (Local[0] == 1101) {
[12B5] (1A)         Bit[69] = 0;
[12BA] (72)         loadRoom(1);
[12BC] (**)       }
[12BC] (48)       if (Local[0] == 4061) {
[12C3] (1A)         Bit[17] = 1;
[12C8] (1C)         startSound(86);
[12CA] (4C)         soundKludge([-1]);
[12CF] (2E)         delay(300);
[12D3] (1A)         Local[1] = 1;
[12D8] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[12E0] (46)         Local[1]++;
[12E3] (44)         unless (Local[1] > 55) goto 12D8;
[12EA] (1A)         Local[1] = 100;
[12EF] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[12F7] (46)         Local[1]++;
[12FA] (44)         unless (Local[1] > 128) goto 12EF;
[1301] (25)         pickupObject(586,48);
[1305] (1A)         Bit[36] = 1;
[130A] (1C)         startSound(183);
[130C] (4C)         soundKludge([258,183,90]);
[1317] (4C)         soundKludge([-1]);
[131C] (72)         loadRoom(21);
[131E] (62)         stopScript(1);
[1320] (**)       }
[1320] (48)       if (Local[0] == 4062) {
[1327] (62)         stopScript(75);
[1329] (25)         pickupObject(586,48);
[132D] (5D)         setClass(586,[145]);
[1334] (1C)         startSound(86);
[1336] (4C)         soundKludge([-1]);
[133B] (2E)         delay(300);
[133F] (1A)         Local[1] = 1;
[1344] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[134C] (46)         Local[1]++;
[134F] (44)         unless (Local[1] > 55) goto 1344;
[1356] (1A)         Local[1] = 100;
[135B] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[1363] (46)         Local[1]++;
[1366] (44)         unless (Local[1] > 128) goto 135B;
[136D] (07)         setState(583,1);
[1371] (1A)         Bit[17] = 0;
[1376] (1A)         Bit[36] = 1;
[137B] (1C)         startSound(183);
[137D] (4C)         soundKludge([258,183,90]);
[1388] (4C)         soundKludge([-1]);
[138D] (72)         loadRoom(21);
[138F] (62)         stopScript(1);
[1391] (**)       }
[1391] (48)       if (Local[0] == 4063) {
[1398] (62)         stopScript(75);
[139A] (25)         pickupObject(586,48);
[139E] (5D)         setClass(586,[145]);
[13A5] (07)         setState(583,1);
[13A9] (1A)         Var[238] = 2;
[13AE] (1A)         Bit[17] = 1;
[13B3] (1A)         Bit[36] = 1;
[13B8] (72)         loadRoom(21);
[13BA] (62)         stopScript(0);
[13BC] (**)       }
[13BC] (48)       if (Local[0] == 1102) {
[13C3] (1A)         Bit[69] = 1;
[13C8] (72)         loadRoom(7);
[13CA] (0A)         startScript(207,[117]);
[13D0] (5D)         setClass(117,[160]);
[13D7] (1A)         Var[315] = 2;
[13DC] (1A)         Var[316] = 2;
[13E1] (1A)         Bit[74] = 1;
[13E6] (1A)         Bit[211] = 1;
[13EB] (1A)         Bit[17] = 1;
[13F0] (1A)         Bit[86] = 0;
[13F5] (25)         pickupObject(20,1);
[13F9] (29)         setOwnerOf(20,1);
[13FD] (1A)         Var[233] = 2;
[1402] (1A)         VAR_ROOM = 75;
[1407] (72)         loadRoom(2);
[1409] (**)       }
[1409] (48)       if (Local[0] == 1103) {
[1410] (1A)         Bit[69] = 1;
[1415] (1A)         Var[315] = 2;
[141A] (1A)         Var[316] = 2;
[141F] (1A)         Bit[74] = 1;
[1424] (1A)         Bit[211] = 1;
[1429] (1A)         Bit[17] = 1;
[142E] (1A)         Bit[86] = 0;
[1433] (25)         pickupObject(20,1);
[1437] (1A)         Var[233] = 1;
[143C] (1A)         Bit[218] = 1;
[1441] (1A)         VAR_ROOM = 62;
[1446] (72)         loadRoom(2);
[1448] (07)         setState(75,3);
[144C] (07)         setState(115,1);
[1450] (5D)         setClass(131,[32]);
[1457] (07)         setState(132,1);
[145B] (5D)         setClass(132,[32]);
[1462] (07)         setState(130,1);
[1466] (5D)         setClass(130,[32]);
[146D] (07)         setState(115,1);
[1471] (16)         Var[233] = getRandomNr(4);
[1475] (5A)         Var[233] += 1;
[147A] (1A)         Local[1] = 104;
[147F] (87)         setState(Local[1],0);
[1483] (DD)         setClass(Local[1],[32]);
[148A] (46)         Local[1]++;
[148D] (44)         unless (Local[1] > 108) goto 147F;
[1494] (5D)         setClass(116,[145]);
[149B] (5D)         setClass(117,[146]);
[14A2] (**)       }
[14A2] (48)       if (Local[0] == 1104) {
[14A9] (13)         ActorOps(1,[Costume(2)]);
[14AE] (1A)         Bit[69] = 1;
[14B3] (1A)         Var[315] = 2;
[14B8] (1A)         Var[316] = 2;
[14BD] (1A)         Bit[74] = 1;
[14C2] (1A)         Bit[17] = 1;
[14C7] (25)         pickupObject(20,1);
[14CB] (1A)         Bit[87 + 8] = 1;
[14D2] (2D)         putActorInRoom(1,2);
[14D5] (01)         putActor(1,350,130);
[14DB] (72)         loadRoom(2);
[14DD] (**)       }
[14DD] (48)       if (Local[0] == 1111) {
[14E4] (1A)         Var[316] = 2;
[14E9] (1A)         Var[315] = 2;
[14EE] (25)         pickupObject(23,1);
[14F2] (1A)         Var[313] = 1;
[14F7] (72)         loadRoom(12);
[14F9] (**)       }
[14F9] (48)       if (Local[0] == 1112) {
[1500] (1A)         Var[316] = 2;
[1505] (1A)         Var[315] = 2;
[150A] (25)         pickupObject(23,1);
[150E] (1A)         Var[313] = 1;
[1513] (72)         loadRoom(15);
[1515] (1A)         Bit[17] = 1;
[151A] (62)         stopScript(0);
[151C] (**)       }
[151C] (48)       if (Local[0] == 1120) {
[1523] (1A)         Var[238] = 1;
[1528] (1A)         VAR_ROOM = 65;
[152D] (25)         pickupObject(20,1);
[1531] (25)         pickupObject(868,65);
[1535] (54)         setObjectName(868,"map");
[153C] (29)         setOwnerOf(937,1);
[1540] (1A)         Var[250] = 138;
[1545] (72)         loadRoom(130);
[1547] (**)       }
[1547] (48)       if (Local[0] == 1123) {
[154E] (1A)         Var[238] = 1;
[1553] (1A)         VAR_ROOM = 67;
[1558] (25)         pickupObject(20,1);
[155C] (25)         pickupObject(868,65);
[1560] (25)         pickupObject(934,68);
[1564] (54)         setObjectName(868,"map");
[156B] (29)         setOwnerOf(937,1);
[156F] (72)         loadRoom(130);
[1571] (**)       }
[1571] (48)       if (Local[0] == 1122) {
[1578] (1A)         Var[238] = 2;
[157D] (1A)         VAR_ROOM = 65;
[1582] (25)         pickupObject(20,1);
[1586] (25)         pickupObject(868,65);
[158A] (54)         setObjectName(868,"map");
[1591] (29)         setOwnerOf(937,1);
[1595] (72)         loadRoom(130);
[1597] (**)       }
[1597] (48)       unless (Local[0] == 1121) goto 159E;
[159E] (48)       if (Local[0] == 1130) {
[15A5] (1A)         Var[238] = 3;
[15AA] (25)         pickupObject(20,1);
[15AE] (25)         pickupObject(934,68);
[15B2] (25)         pickupObject(311,29);
[15B6] (2D)         putActorInRoom(1,130);
[15B9] (01)         putActor(1,0,0);
[15BF] (1A)         VAR_ROOM = 80;
[15C4] (25)         pickupObject(868,65);
[15C8] (54)         setObjectName(868,"map");
[15CF] (29)         setOwnerOf(937,1);
[15D3] (72)         loadRoom(130);
[15D5] (1A)         Bit[17] = 1;
[15DA] (**)       }
[15DA] (48)       if (Local[0] == 6665) {
[15E1] (1A)         Var[238] = 2;
[15E6] (1A)         Bit[210] = 1;
[15EB] (29)         setOwnerOf(937,1);
[15EF] (25)         pickupObject(20,1);
[15F3] (29)         setOwnerOf(20,1);
[15F7] (2D)         putActorInRoom(1,67);
[15FA] (0E)         putActorAtObject(1,920);
[15FE] (**)       }
[15FE] (48)       if (Local[0] == 6666) {
[1605] (1A)         Var[238] = 1;
[160A] (1A)         Bit[210] = 1;
[160F] (25)         pickupObject(20,1);
[1613] (69)         setOwnerOf(937,VAR_EGO);
[1618] (2D)         putActorInRoom(1,67);
[161B] (0E)         putActorAtObject(1,920);
[161F] (**)       }
[161F] (48)       if (Local[0] == 6667) {
[1626] (1A)         Var[238] = 3;
[162B] (1A)         Bit[87 + 4] = 1;
[1632] (1A)         Bit[210] = 1;
[1637] (25)         pickupObject(934,68);
[163B] (69)         setOwnerOf(937,VAR_EGO);
[1640] (0A)         startScript(10,[]);
[1643] (2D)         putActorInRoom(1,73);
[1646] (0E)         putActorAtObject(1,996);
[164A] (**)       }
[164A] (48)       if (Local[0] == 6668) {
[1651] (1A)         Var[238] = 3;
[1656] (25)         pickupObject(934,68);
[165A] (1A)         Bit[355] = 1;
[165F] (72)         loadRoom(32);
[1661] (**)       }
[1661] (48)       if (Local[0] == 6669) {
[1668] (1A)         Var[238] = 1;
[166D] (25)         pickupObject(934,68);
[1671] (2D)         putActorInRoom(1,130);
[1674] (01)         putActor(1,0,0);
[167A] (1A)         Bit[87 + 7] = 1;
[1681] (72)         loadRoom(130);
[1683] (**)       }
[1683] (48)       if (Local[0] == 5555) {
[168A] (1A)         Var[238] = 3;
[168F] (13)         ActorOps(1,[Costume(2)]);
[1694] (25)         pickupObject(863,64);
[1698] (1A)         Bit[210] = 1;
[169D] (1A)         Bit[17] = 1;
[16A2] (1A)         Var[224] = 75;
[16A7] (1A)         Var[315] = 27;
[16AC] (1A)         Var[316] = 3;
[16B1] (1A)         Bit[87 + 5] = 1;
[16B8] (1A)         Bit[87 + 4] = 1;
[16BF] (2D)         putActorInRoom(2,28);
[16C2] (01)         putActor(2,0,0);
[16C8] (2D)         putActorInRoom(1,27);
[16CB] (01)         putActor(1,0,135);
[16D1] (72)         loadRoom(27);
[16D3] (**)       }
[16D3] (48)       if (Local[0] == 5560) {
[16DA] (1A)         Var[238] = 1;
[16DF] (1A)         Bit[210] = 1;
[16E4] (29)         setOwnerOf(934,1);
[16E8] (1A)         Var[315] = 27;
[16ED] (1A)         Var[316] = 3;
[16F2] (1A)         Bit[87 + 5] = 1;
[16F9] (1A)         Bit[87 + 4] = 1;
[1700] (2D)         putActorInRoom(2,27);
[1703] (01)         putActor(2,0,0);
[1709] (2D)         putActorInRoom(1,27);
[170C] (01)         putActor(1,200,100);
[1712] (72)         loadRoom(27);
[1714] (**)       }
[1714] (48)       if (Local[0] == 5561) {
[171B] (1A)         Var[238] = 2;
[1720] (1A)         Bit[210] = 1;
[1725] (2D)         putActorInRoom(1,27);
[1728] (01)         putActor(1,200,100);
[172E] (25)         pickupObject(934,68);
[1732] (1A)         Var[315] = 27;
[1737] (1A)         Var[316] = 3;
[173C] (1A)         Bit[87 + 5] = 1;
[1743] (1A)         Bit[87 + 4] = 1;
[174A] (2D)         putActorInRoom(2,27);
[174D] (01)         putActor(2,0,0);
[1753] (2D)         putActorInRoom(1,27);
[1756] (01)         putActor(1,200,100);
[175C] (72)         loadRoom(27);
[175E] (**)       }
[175E] (48)       if (Local[0] == 5562) {
[1765] (1A)         Var[238] = 2;
[176A] (1A)         Bit[210] = 1;
[176F] (2D)         putActorInRoom(1,27);
[1772] (01)         putActor(1,200,100);
[1778] (25)         pickupObject(20,1);
[177C] (25)         pickupObject(926,67);
[1780] (29)         setOwnerOf(926,1);
[1784] (1A)         Bit[226] = 1;
[1789] (1A)         Bit[227] = 1;
[178E] (1A)         Var[315] = 27;
[1793] (1A)         Var[316] = 3;
[1798] (1A)         Bit[87 + 5] = 1;
[179F] (1A)         Bit[87 + 4] = 1;
[17A6] (2D)         putActorInRoom(1,27);
[17A9] (01)         putActor(1,200,100);
[17AF] (1A)         VAR_ROOM = 75;
[17B4] (72)         loadRoom(27);
[17B6] (**)       }
[17B6] (48)       if (Local[0] == 8888) {
[17BD] (2D)         putActorInRoom(1,70);
[17C0] (01)         putActor(1,0,0);
[17C6] (1A)         Var[238] = 2;
[17CB] (1A)         Bit[210] = 1;
[17D0] (25)         pickupObject(926,67);
[17D4] (29)         setOwnerOf(926,8);
[17D8] (72)         loadRoom(70);
[17DA] (13)         ActorOps(1,[Costume(2)]);
[17DF] (**)       }
[17DF] (48)       if (Local[0] == 8889) {
[17E6] (13)         ActorOps(1,[Costume(2)]);
[17EB] (1A)         Var[281] = 0;
[17F0] (5D)         setClass(968,[6]);
[17F7] (5D)         setClass(969,[6]);
[17FE] (1A)         Bit[252] = 1;
[1803] (29)         setOwnerOf(937,1);
[1807] (1A)         Var[279] = 5;
[180C] (1A)         Var[280] = 6;
[1811] (25)         pickupObject(926,67);
[1815] (5D)         setClass(926,[6]);
[181C] (2D)         putActorInRoom(6,70);
[181F] (01)         putActor(6,125,65);
[1825] (1A)         Var[238] = 2;
[182A] (1A)         Bit[210] = 1;
[182F] (1A)         Bit[87 + 4] = 1;
[1836] (72)         loadRoom(70);
[1838] (**)       }
[1838] (48)       if (Local[0] == 8890) {
[183F] (13)         ActorOps(1,[Costume(2)]);
[1844] (1A)         Var[281] = 0;
[1849] (5D)         setClass(968,[6]);
[1850] (5D)         setClass(969,[6]);
[1857] (1A)         Bit[252] = 1;
[185C] (1A)         Var[279] = 5;
[1861] (1A)         Var[280] = 6;
[1866] (2D)         putActorInRoom(6,70);
[1869] (01)         putActor(6,125,65);
[186F] (1A)         Var[238] = 2;
[1874] (1A)         Bit[210] = 1;
[1879] (25)         pickupObject(934,68);
[187D] (0A)         startScript(10,[]);
[1880] (72)         loadRoom(70);
[1882] (**)       }
[1882] (48)       if (Local[0] == 5885) {
[1889] (1A)         Bit[74] = 1;
[188E] (1A)         Var[315] = 76;
[1893] (1A)         Var[316] = 2;
[1898] (25)         pickupObject(20,1);
[189C] (1A)         Bit[87 + 8] = 1;
[18A3] (1A)         Bit[87 + 3] = 1;
[18AA] (1A)         Bit[87 + 1] = 1;
[18B1] (2D)         putActorInRoom(2,76);
[18B4] (01)         putActor(2,0,0);
[18BA] (2D)         putActorInRoom(1,76);
[18BD] (01)         putActor(1,0,0);
[18C3] (1A)         Bit[17] = 1;
[18C8] (72)         loadRoom(76);
[18CA] (**)       }
[18CA] (48)       if (Local[0] == 5886) {
[18D1] (1A)         Bit[74] = 1;
[18D6] (1A)         Var[315] = 76;
[18DB] (1A)         Var[316] = 2;
[18E0] (25)         pickupObject(20,1);
[18E4] (25)         pickupObject(277,26);
[18E8] (54)         setObjectName(277,"eel figurine");
[18F8] (1A)         Bit[137] = 1;
[18FD] (1A)         Bit[87 + 8] = 1;
[1904] (1A)         Bit[87 + 3] = 1;
[190B] (1A)         Bit[87 + 1] = 1;
[1912] (2D)         putActorInRoom(2,76);
[1915] (01)         putActor(2,0,0);
[191B] (2D)         putActorInRoom(1,76);
[191E] (01)         putActor(1,0,0);
[1924] (1A)         Bit[17] = 1;
[1929] (72)         loadRoom(76);
[192B] (**)       }
[192B] (48)       if (Local[0] == 5563) {
[1932] (1A)         Var[315] = 29;
[1937] (1A)         Var[316] = 3;
[193C] (1A)         Bit[87 + 5] = 1;
[1943] (1A)         Bit[87 + 4] = 1;
[194A] (1A)         Var[238] = 3;
[194F] (1A)         Bit[210] = 1;
[1954] (25)         pickupObject(310,29);
[1958] (25)         pickupObject(311,29);
[195C] (25)         pickupObject(23,1);
[1960] (69)         setOwnerOf(937,VAR_EGO);
[1965] (25)         pickupObject(20,1);
[1969] (25)         pickupObject(934,68);
[196D] (0A)         startScript(10,[]);
[1970] (2D)         putActorInRoom(1,80);
[1973] (01)         putActor(1,0,0);
[1979] (2D)         putActorInRoom(2,80);
[197C] (01)         putActor(2,0,0);
[1982] (25)         pickupObject(868,65);
[1986] (54)         setObjectName(868,"map");
[198D] (1C)         startSound(66);
[198F] (1C)         startSound(67);
[1991] (1C)         startSound(68);
[1993] (1C)         startSound(69);
[1995] (4C)         soundKludge([-1]);
[199A] (4C)         soundKludge([269,66,90,800]);
[19A8] (4C)         soundKludge([269,67,90,800]);
[19B6] (4C)         soundKludge([269,68,90,800]);
[19C4] (4C)         soundKludge([269,69,90,800]);
[19D2] (**)       }
[19D2] (48)       if (Local[0] == 5564) {
[19D9] (1A)         Var[315] = 29;
[19DE] (1A)         Var[316] = 3;
[19E3] (1A)         Bit[87 + 5] = 1;
[19EA] (1A)         Bit[87 + 4] = 1;
[19F1] (1A)         Var[238] = 3;
[19F6] (1A)         Bit[210] = 1;
[19FB] (25)         pickupObject(310,29);
[19FF] (0A)         startScript(10,[]);
[1A02] (2D)         putActorInRoom(1,80);
[1A05] (01)         putActor(1,0,0);
[1A0B] (2D)         putActorInRoom(2,80);
[1A0E] (01)         putActor(2,0,0);
[1A14] (1C)         startSound(66);
[1A16] (1C)         startSound(67);
[1A18] (1C)         startSound(68);
[1A1A] (1C)         startSound(69);
[1A1C] (4C)         soundKludge([-1]);
[1A21] (**)       }
[1A21] (48)       if (Local[0] == 9554) {
[1A28] (1A)         Var[315] = 29;
[1A2D] (1A)         Var[316] = 3;
[1A32] (1A)         Var[238] = 3;
[1A37] (1A)         Bit[17] = 1;
[1A3C] (1A)         Bit[210] = 1;
[1A41] (25)         pickupObject(20,1);
[1A45] (29)         setOwnerOf(937,1);
[1A49] (25)         pickupObject(934,68);
[1A4D] (2D)         putActorInRoom(1,64);
[1A50] (01)         putActor(1,32,106);
[1A56] (2D)         putActorInRoom(2,64);
[1A59] (01)         putActor(2,32,106);
[1A5F] (2A)         startScript(31,[1,2,1],F);
[1A6B] (1A)         Bit[87 + 4] = 1;
[1A72] (1A)         Bit[87 + 5] = 1;
[1A79] (72)         loadRoom(64);
[1A7B] (**)       }
[1A7B] (48)       if (Local[0] == 9555) {
[1A82] (1A)         Var[315] = 29;
[1A87] (1A)         Var[316] = 3;
[1A8C] (25)         pickupObject(20,1);
[1A90] (25)         pickupObject(934,68);
[1A94] (29)         setOwnerOf(937,1);
[1A98] (1A)         Var[238] = 3;
[1A9D] (1A)         Bit[17] = 1;
[1AA2] (1A)         Bit[210] = 1;
[1AA7] (2D)         putActorInRoom(1,64);
[1AAA] (01)         putActor(1,32,106);
[1AB0] (2D)         putActorInRoom(2,64);
[1AB3] (01)         putActor(2,32,106);
[1AB9] (2A)         startScript(31,[1,2,1],F);
[1AC5] (1A)         Bit[87 + 4] = 1;
[1ACC] (1A)         Bit[87 + 5] = 1;
[1AD3] (72)         loadRoom(64);
[1AD5] (**)       }
[1AD5] (48)       if (Local[0] == 9556) {
[1ADC] (1A)         Var[315] = 29;
[1AE1] (1A)         Var[316] = 3;
[1AE6] (1A)         Bit[87 + 5] = 1;
[1AED] (1A)         Bit[87 + 4] = 1;
[1AF4] (1A)         Var[238] = 2;
[1AF9] (1A)         Bit[210] = 1;
[1AFE] (25)         pickupObject(286,27);
[1B02] (29)         setOwnerOf(937,1);
[1B06] (2D)         putActorInRoom(1,64);
[1B09] (01)         putActor(1,32,106);
[1B0F] (72)         loadRoom(64);
[1B11] (**)       }
[1B11] (48)       if (Local[0] == 9557) {
[1B18] (1A)         Var[315] = 29;
[1B1D] (1A)         Var[316] = 3;
[1B22] (1A)         Bit[87 + 5] = 1;
[1B29] (1A)         Bit[87 + 4] = 1;
[1B30] (1A)         Var[238] = 1;
[1B35] (1A)         Bit[210] = 1;
[1B3A] (72)         loadRoom(1);
[1B3C] (25)         pickupObject(20,0);
[1B40] (29)         setOwnerOf(20,1);
[1B44] (72)         loadRoom(27);
[1B46] (25)         pickupObject(286,0);
[1B4A] (29)         setOwnerOf(286,1);
[1B4E] (29)         setOwnerOf(865,6);
[1B52] (2D)         putActorInRoom(1,64);
[1B55] (01)         putActor(1,32,106);
[1B5B] (72)         loadRoom(64);
[1B5D] (**)       }
[1B5D] (48)       if (Local[0] == 9558) {
[1B64] (1A)         Var[315] = 29;
[1B69] (1A)         Var[316] = 3;
[1B6E] (1A)         Bit[87 + 5] = 1;
[1B75] (1A)         Bit[87 + 4] = 1;
[1B7C] (1A)         Var[238] = 3;
[1B81] (1A)         Bit[17] = 1;
[1B86] (1A)         Bit[210] = 0;
[1B8B] (1A)         Var[316] = 2;
[1B90] (2D)         putActorInRoom(1,64);
[1B93] (01)         putActor(1,32,106);
[1B99] (2D)         putActorInRoom(2,64);
[1B9C] (01)         putActor(2,32,106);
[1BA2] (2A)         startScript(31,[1,2,1],F);
[1BAE] (72)         loadRoom(64);
[1BB0] (**)       }
[1BB0] (48)       if (Local[0] == 9559) {
[1BB7] (1A)         Var[315] = 29;
[1BBC] (1A)         Var[316] = 3;
[1BC1] (1A)         Bit[87 + 5] = 1;
[1BC8] (1A)         Bit[87 + 4] = 1;
[1BCF] (1A)         Var[238] = 2;
[1BD4] (1A)         Bit[210] = 1;
[1BD9] (25)         pickupObject(286,27);
[1BDD] (29)         setOwnerOf(937,1);
[1BE1] (2D)         putActorInRoom(1,64);
[1BE4] (01)         putActor(1,32,106);
[1BEA] (72)         loadRoom(64);
[1BEC] (**)       }
[1BEC] (48)       if (Local[0] == 5557) {
[1BF3] (25)         pickupObject(865,64);
[1BF7] (29)         setOwnerOf(865,6);
[1BFB] (1A)         Var[315] = 29;
[1C00] (1A)         Var[316] = 3;
[1C05] (1A)         Bit[87 + 5] = 1;
[1C0C] (1A)         Bit[87 + 4] = 1;
[1C13] (25)         pickupObject(20,1);
[1C17] (1A)         Var[238] = 1;
[1C1C] (1A)         Bit[210] = 1;
[1C21] (2D)         putActorInRoom(1,78);
[1C24] (01)         putActor(1,200,100);
[1C2A] (**)       }
[1C2A] (48)       if (Local[0] == 5559) {
[1C31] (1A)         Var[315] = 29;
[1C36] (1A)         Var[316] = 3;
[1C3B] (1A)         Bit[87 + 5] = 1;
[1C42] (1A)         Bit[87 + 4] = 1;
[1C49] (1A)         Var[238] = 2;
[1C4E] (1A)         Bit[210] = 1;
[1C53] (72)         loadRoom(1);
[1C55] (25)         pickupObject(20,0);
[1C59] (24)         loadRoomWithEgo(866,65,-1,-1);
[1C61] (**)       }
[1C61] (48)       if (Local[0] == 5558) {
[1C68] (1A)         Var[238] = 3;
[1C6D] (1A)         Var[315] = 29;
[1C72] (1A)         Var[316] = 3;
[1C77] (1A)         Bit[87 + 5] = 1;
[1C7E] (1A)         Bit[87 + 4] = 1;
[1C85] (1A)         Var[238] = 2;
[1C8A] (1A)         Bit[210] = 1;
[1C8F] (2D)         putActorInRoom(1,29);
[1C92] (01)         putActor(1,200,100);
[1C98] (**)       }
[1C98] (48)       if (Local[0] == 666) {
[1C9F] (1A)         Var[316] = 2;
[1CA4] (1A)         Var[315] = 76;
[1CA9] (72)         loadRoom(1);
[1CAB] (25)         pickupObject(20,0);
[1CAF] (24)         loadRoomWithEgo(1035,76,-1,-1);
[1CB7] (**)       }
[1CB7] (48)       if (Local[0] == 668) {
[1CBE] (1A)         Var[316] = 2;
[1CC3] (1A)         Var[315] = 76;
[1CC8] (72)         loadRoom(1);
[1CCA] (25)         pickupObject(20,0);
[1CCE] (1A)         Bit[150] = 1;
[1CD3] (24)         loadRoomWithEgo(1035,76,-1,-1);
[1CDB] (**)       }
[1CDB] (48)       if (Local[0] == 2728) {
[1CE2] (1A)         Var[316] = 2;
[1CE7] (1A)         Var[315] = 27;
[1CEC] (25)         pickupObject(20,1);
[1CF0] (25)         pickupObject(863,64);
[1CF4] (1A)         Var[238] = 3;
[1CF9] (1A)         Bit[210] = 1;
[1CFE] (24)         loadRoomWithEgo(282,27,92,141);
[1D06] (**)       }
[1D06] (48)       if (Local[0] == 667) {
[1D0D] (13)         ActorOps(11,[Costume(62)]);
[1D12] (1A)         Var[316] = 2;
[1D17] (1A)         Var[315] = 76;
[1D1C] (72)         loadRoom(1);
[1D1E] (25)         pickupObject(20,0);
[1D22] (72)         loadRoom(76);
[1D24] (25)         pickupObject(1050,0);
[1D28] (24)         loadRoomWithEgo(1052,77,-1,-1);
[1D30] (**)       }
[1D30] (48)       if (Local[0] == 4950) {
[1D37] (1A)         Bit[37 + 19] = 1;
[1D3E] (1A)         Bit[37 + 20] = 1;
[1D45] (1A)         Bit[37 + 21] = 1;
[1D4C] (1A)         Bit[37 + 22] = 1;
[1D53] (5D)         setClass(479,[12]);
[1D5A] (1A)         Local[0] = 0;
[1D5F] (1A)         Var[300] = 1;
[1D64] (72)         loadRoom(66);
[1D66] (**)       }
[1D66] (48)       if (Local[0] == 4951) {
[1D6D] (1A)         Bit[37 + 19] = 1;
[1D74] (1A)         Bit[37 + 20] = 1;
[1D7B] (1A)         Bit[37 + 21] = 1;
[1D82] (1A)         Bit[37 + 22] = 1;
[1D89] (5D)         setClass(479,[12]);
[1D90] (1A)         Local[0] = 0;
[1D95] (1A)         Var[300] = 2;
[1D9A] (72)         loadRoom(66);
[1D9C] (**)       }
[1D9C] (48)       if (Local[0] == 4952) {
[1DA3] (1A)         Bit[37 + 19] = 1;
[1DAA] (1A)         Bit[37 + 20] = 1;
[1DB1] (1A)         Bit[37 + 21] = 1;
[1DB8] (1A)         Bit[37 + 22] = 1;
[1DBF] (5D)         setClass(479,[12]);
[1DC6] (1A)         Local[0] = 0;
[1DCB] (1A)         Var[300] = 3;
[1DD0] (72)         loadRoom(66);
[1DD2] (**)       }
[1DD2] (48)       if (Local[0] == 4953) {
[1DD9] (1A)         Bit[37 + 19] = 1;
[1DE0] (1A)         Bit[37 + 20] = 1;
[1DE7] (1A)         Bit[37 + 21] = 1;
[1DEE] (1A)         Bit[37 + 22] = 1;
[1DF5] (5D)         setClass(479,[12]);
[1DFC] (1A)         Local[0] = 0;
[1E01] (1A)         Var[300] = 4;
[1E06] (72)         loadRoom(66);
[1E08] (**)       }
[1E08] (48)       if (Local[0] == 4954) {
[1E0F] (1A)         Bit[37 + 19] = 1;
[1E16] (1A)         Bit[37 + 20] = 1;
[1E1D] (1A)         Bit[37 + 21] = 1;
[1E24] (1A)         Bit[37 + 22] = 1;
[1E2B] (5D)         setClass(479,[12]);
[1E32] (1A)         Local[0] = 0;
[1E37] (1A)         Var[300] = 5;
[1E3C] (72)         loadRoom(66);
[1E3E] (**)       }
[1E3E] (48)       if (Local[0] == 4955) {
[1E45] (1A)         Bit[37 + 19] = 1;
[1E4C] (1A)         Bit[37 + 20] = 1;
[1E53] (1A)         Bit[37 + 21] = 1;
[1E5A] (1A)         Bit[37 + 22] = 1;
[1E61] (5D)         setClass(479,[12]);
[1E68] (1A)         Local[0] = 0;
[1E6D] (1A)         Var[300] = 6;
[1E72] (72)         loadRoom(66);
[1E74] (**)       }
[1E74] (48)       if (Local[0] == 4956) {
[1E7B] (1A)         Bit[37 + 19] = 1;
[1E82] (1A)         Bit[37 + 20] = 1;
[1E89] (1A)         Bit[37 + 21] = 1;
[1E90] (1A)         Bit[37 + 22] = 1;
[1E97] (5D)         setClass(479,[12]);
[1E9E] (25)         pickupObject(20,1);
[1EA2] (1A)         Local[0] = 0;
[1EA7] (1A)         Var[300] = 7;
[1EAC] (72)         loadRoom(66);
[1EAE] (**)       }
[1EAE] (48)       if (Local[0] == 4957) {
[1EB5] (1A)         Bit[37 + 19] = 1;
[1EBC] (1A)         Bit[37 + 20] = 1;
[1EC3] (1A)         Bit[37 + 21] = 1;
[1ECA] (1A)         Bit[37 + 22] = 1;
[1ED1] (5D)         setClass(479,[12]);
[1ED8] (1A)         Local[0] = 0;
[1EDD] (1A)         Var[300] = 8;
[1EE2] (72)         loadRoom(66);
[1EE4] (**)       }
[1EE4] (48)       if (Local[0] == 4958) {
[1EEB] (1A)         Bit[37 + 19] = 1;
[1EF2] (1A)         Bit[37 + 20] = 1;
[1EF9] (1A)         Bit[37 + 21] = 1;
[1F00] (1A)         Bit[37 + 22] = 1;
[1F07] (5D)         setClass(479,[12]);
[1F0E] (1A)         Local[0] = 0;
[1F13] (1A)         Var[300] = 9;
[1F18] (72)         loadRoom(66);
[1F1A] (**)       }
[1F1A] (48)       if (Local[0] == 5000) {
[1F21] (1A)         Var[316] = 2;
[1F26] (72)         loadRoom(1);
[1F28] (25)         pickupObject(20,0);
[1F2C] (2D)         putActorInRoom(1,149);
[1F2F] (01)         putActor(1,140,110);
[1F35] (72)         loadRoom(149);
[1F37] (1A)         Local[0] = 149;
[1F3C] (**)       }
[1F3C] (48)       if (Local[0] == 5001) {
[1F43] (1A)         Var[238] = 2;
[1F48] (1A)         Var[316] = 2;
[1F4D] (72)         loadRoom(72);
[1F4F] (25)         pickupObject(985,0);
[1F53] (69)         setOwnerOf(985,VAR_EGO);
[1F58] (37)         startObject(985,3,[]);
[1F5D] (72)         loadRoom(1);
[1F5F] (25)         pickupObject(20,0);
[1F63] (69)         setOwnerOf(20,VAR_EGO);
[1F68] (72)         loadRoom(73);
[1F6A] (69)         setOwnerOf(1012,VAR_EGO);
[1F6F] (72)         loadRoom(52);
[1F71] (25)         pickupObject(700,52);
[1F75] (25)         pickupObject(702,52);
[1F79] (25)         pickupObject(701,52);
[1F7D] (69)         setOwnerOf(700,VAR_EGO);
[1F82] (69)         setOwnerOf(702,VAR_EGO);
[1F87] (69)         setOwnerOf(701,VAR_EGO);
[1F8C] (37)         startObject(933,250,[25]);
[1F94] (13)         ActorOps(1,[Costume(2)]);
[1F99] (2D)         putActorInRoom(1,56);
[1F9C] (01)         putActor(1,140,110);
[1FA2] (72)         loadRoom(56);
[1FA4] (**)       }
[1FA4] (48)       if (Local[0] == 5002) {
[1FAB] (1A)         Var[316] = 2;
[1FB0] (1A)         Var[315] = 2;
[1FB5] (25)         pickupObject(23,1);
[1FB9] (1A)         Var[313] = 1;
[1FBE] (1A)         VAR_ROOM = 75;
[1FC3] (13)         ActorOps(1,[Costume(1)]);
[1FC8] (72)         loadRoom(10);
[1FCA] (**)       }
[1FCA] (48)       if (Local[0] == 5003) {
[1FD1] (1A)         Var[316] = 2;
[1FD6] (1A)         Var[315] = 2;
[1FDB] (1A)         Var[238] = 1;
[1FE0] (13)         ActorOps(1,[Costume(2)]);
[1FE5] (25)         pickupObject(934,68);
[1FE9] (72)         loadRoom(1);
[1FEB] (25)         pickupObject(20,0);
[1FEF] (72)         loadRoom(73);
[1FF1] (25)         pickupObject(1001,0);
[1FF5] (25)         pickupObject(501,43);
[1FF9] (0A)         startScript(10,[]);
[1FFC] (72)         loadRoom(75);
[1FFE] (72)         loadRoom(33);
[2000] (**)       }
[2000] (48)       if (Local[0] == 5005) {
[2007] (1A)         Var[238] = 3;
[200C] (1A)         Var[316] = 2;
[2011] (25)         pickupObject(985,72);
[2015] (37)         startObject(985,3,[]);
[201A] (72)         loadRoom(1);
[201C] (25)         pickupObject(20,1);
[2020] (29)         setOwnerOf(938,2);
[2024] (25)         pickupObject(934,68);
[2028] (25)         pickupObject(935,68);
[202C] (25)         pickupObject(1001,73);
[2030] (25)         pickupObject(1012,73);
[2034] (25)         pickupObject(830,60);
[2038] (5D)         setClass(830,[8]);
[203F] (37)         startObject(933,250,[25]);
[2047] (13)         ActorOps(1,[Costume(2)]);
[204C] (2D)         putActorInRoom(1,57);
[204F] (01)         putActor(1,120,120);
[2055] (2D)         putActorInRoom(2,57);
[2058] (01)         putActor(2,70,110);
[205E] (2A)         startScript(31,[1,2,1],F);
[206A] (72)         loadRoom(57);
[206C] (**)       }
[206C] (48)       if (Local[0] == 1162) {
[2073] (25)         pickupObject(20,1);
[2077] (1A)         Var[316] = 3;
[207C] (1A)         Var[315] = 15;
[2081] (1A)         Bit[74] = 1;
[2086] (07)         setState(75,3);
[208A] (07)         setState(115,1);
[208E] (5D)         setClass(131,[32]);
[2095] (07)         setState(132,1);
[2099] (5D)         setClass(132,[32]);
[20A0] (07)         setState(130,1);
[20A4] (5D)         setClass(130,[32]);
[20AB] (07)         setState(115,1);
[20AF] (AC)         Exprmode Var[444] = (5 - 1);
[20BA] (AC)         Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[20C8] (9A)         Var[234] = Var[444];
[20CD] (1A)         Local[1] = 0;
[20D2] (AC)         Exprmode Var[444] = (5 - 1);
[20DD] (AC)         Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[20EB] (88)         if (Var[444] != Var[234]) {
[20F2] (9A)           Var[235] = Var[444];
[20F7] (1A)           Local[1] = 1;
[20FC] (**)         }
[20FC] (A8)         unless (Local[1]) goto 20D2;
[2101] (1A)         Local[1] = 0;
[2106] (AC)         Exprmode Var[444] = (5 - 1);
[2111] (AC)         Exprmode Var[444] = (<VAR_RESULT = getRandomNr(Var[444])> + 1);
[211F] (88)         if (Var[444] != Var[234]) {
[2126] (88)           if (Var[444] != Var[235]) {
[212D] (9A)             Var[236] = Var[444];
[2132] (1A)             Local[1] = 1;
[2137] (**)           }
[2137] (**)         }
[2137] (A8)         unless (Local[1]) goto 2106;
[213C] (48)         if (Var[233] == 1) {
[2143] (27)           PutCodeInString(39, "Ashkenazy");
[2150] (48)         } else if (Var[233] == 2) {
[215A] (27)           PutCodeInString(39, "Dunlop");
[2164] (48)         } else if (Var[233] == 3) {
[216E] (27)           PutCodeInString(39, "Pearce");
[2178] (48)         } else if (Var[233] == 4) {
[2182] (27)           PutCodeInString(39, "Sprague");
[218D] (48)         } else if (Var[233] == 5) {
[2197] (27)           PutCodeInString(39, "Wright");
[21A1] (18)           /* goto 21A4; */
[21A4] (**)         }
[21A4] (1A)         Bit[218] = 1;
[21A9] (9A)         Var[233] = Var[235];
[21AE] (27)         PutCodeInString(39, "Ashkenazy");
[21BB] (1A)         Var[442] = 116;
[21C0] (DD)         setClass(Var[442],[134]);
[21C7] (46)         Var[442]++;
[21CA] (44)         unless (Var[442] > 119) goto 21C0;
[21D1] (16)         Var[442] = getRandomNr(3);
[21D5] (5A)         Var[442] += 116;
[21DA] (DD)         setClass(Var[442],[145]);
[21E1] (DD)         setClass(Var[442],[6]);
[21E8] (16)         Var[443] = getRandomNr(3);
[21EC] (5A)         Var[443] += 116;
[21F1] (88)         unless (Var[442] != Var[443]) goto 21E8;
[21F8] (DD)         setClass(Var[443],[146]);
[21FF] (DD)         setClass(Var[443],[6]);
[2206] (72)         loadRoom(62);
[2208] (62)         stopScript(0);
[220A] (**)       }
[220A] (48)       if (Local[0] == 1181) {
[2211] (1A)         Bit[211] = 1;
[2216] (25)         pickupObject(20,1);
[221A] (29)         setOwnerOf(937,1);
[221E] (13)         ActorOps(1,[Costume(2)]);
[2223] (1A)         Bit[74] = 1;
[2228] (1A)         Var[233] = 2;
[222D] (27)         PutCodeInString(39, "Ashkenazy");
[223A] (1A)         Var[315] = 2;
[223F] (1A)         Var[316] = 2;
[2244] (1A)         Var[233] = 2;
[2249] (25)         pickupObject(310,29);
[224D] (25)         pickupObject(311,29);
[2251] (25)         pickupObject(23,1);
[2255] (25)         pickupObject(934,68);
[2259] (72)         loadRoom(1);
[225B] (**)       }
[225B] (48)       if (Local[0] == 6000) {
[2262] (1A)         Bit[69] = 0;
[2267] (1A)         Var[316] = 2;
[226C] (2D)         putActorInRoom(1,0);
[226F] (1A)         Var[315] = 2;
[2274] (**)       }
[2274] (48)       if (Local[0] == 6001) {
[227B] (1A)         Bit[69] = 0;
[2280] (1A)         Var[316] = 2;
[2285] (1A)         Var[315] = 2;
[228A] (2D)         putActorInRoom(1,5);
[228D] (01)         putActor(1,200,120);
[2293] (**)       }
[2293] (48)       if (Local[0] == 6002) {
[229A] (1A)         Bit[69] = 0;
[229F] (1A)         Var[316] = 2;
[22A4] (1A)         Var[315] = 2;
[22A9] (24)         loadRoomWithEgo(103,6,-1,-1);
[22B1] (**)       }
[22B1] (48)       if (Local[0] == 6003) {
[22B8] (1A)         Bit[69] = 0;
[22BD] (1A)         Var[316] = 2;
[22C2] (1A)         Var[315] = 2;
[22C7] (24)         loadRoomWithEgo(113,7,-1,-1);
[22CF] (**)       }
[22CF] (48)       if (Local[0] == 6004) {
[22D6] (1A)         Bit[69] = 0;
[22DB] (1A)         Var[316] = 2;
[22E0] (1A)         Var[315] = 2;
[22E5] (24)         loadRoomWithEgo(41,3,-1,-1);
[22ED] (**)       }
[22ED] (48)       if (Local[0] == 6005) {
[22F4] (1A)         Var[316] = 2;
[22F9] (1A)         Var[315] = 2;
[22FE] (13)         ActorOps(1,[Costume(0)]);
[2303] (2D)         putActorInRoom(1,19);
[2306] (01)         putActor(1,160,0);
[230C] (72)         loadRoom(19);
[230E] (**)       }
[230E] (48)       if (Local[0] == 8100) {
[2315] (1A)         Var[315] = 2;
[231A] (13)         ActorOps(1,[Costume(0)]);
[231F] (2D)         putActorInRoom(1,81);
[2322] (01)         putActor(1,160,0);
[2328] (72)         loadRoom(81);
[232A] (**)       }
[232A] (48)       if (Local[0] == 9000) {
[2331] (1A)         Var[316] = 2;
[2336] (1A)         Var[238] = 2;
[233B] (72)         loadRoom(1);
[233D] (25)         pickupObject(20,0);
[2341] (2D)         putActorInRoom(1,27);
[2344] (01)         putActor(1,150,80);
[234A] (**)       }
[234A] (48)       if (Local[0] == 9001) {
[2351] (1A)         Var[238] = 2;
[2356] (13)         ActorOps(1,[Costume(2)]);
[235B] (13)         ActorOps(11,[Costume(32)]);
[2360] (13)         ActorOps(12,[Costume(32)]);
[2365] (1A)         Var[283] = 223;
[236A] (72)         loadRoom(71);
[236C] (**)       }
[236C] (48)       if (Local[0] == 2920) {
[2373] (25)         pickupObject(934,68);
[2377] (72)         loadRoom(73);
[2379] (25)         pickupObject(1001,0);
[237D] (72)         loadRoom(43);
[237F] (25)         pickupObject(501,0);
[2383] (1A)         Var[238] = 3;
[2388] (2D)         putActorInRoom(2,43);
[238B] (0E)         putActorAtObject(2,521);
[238F] (2D)         putActorInRoom(1,43);
[2392] (0E)         putActorAtObject(1,521);
[2396] (14)         print(255,[Text("You're on the TRUST PATH.")]);
[23B3] (**)       }
[23B3] (48)       if (Local[0] == 3838) {
[23BA] (25)         pickupObject(934,68);
[23BE] (25)         pickupObject(935,68);
[23C2] (25)         pickupObject(936,68);
[23C6] (69)         setOwnerOf(937,VAR_EGO);
[23CB] (25)         pickupObject(830,60);
[23CF] (25)         pickupObject(20,1);
[23D3] (25)         pickupObject(1001,73);
[23D7] (25)         pickupObject(1012,73);
[23DB] (1A)         Var[412] = 2;
[23E0] (2D)         putActorInRoom(1,157);
[23E3] (01)         putActor(1,160,130);
[23E9] (2D)         putActorInRoom(2,157);
[23EC] (01)         putActor(2,160,130);
[23F2] (13)         ActorOps(1,[Costume(2)]);
[23F7] (13)         ActorOps(2,[Costume(28)]);
[23FC] (1A)         Var[238] = 3;
[2401] (1A)         Bit[17] = 1;
[2406] (03)         VAR_RESULT = getActorRoom(2);
[240A] (C8)         if (VAR_RESULT == VAR_ROOM) {
[2411] (68)           VAR_RESULT = isScriptRunning(31);
[2415] (28)           if (!VAR_RESULT) {
[241A] (2A)             startScript(31,[1,2,1],F);
[2426] (**)           }
[2426] (**)         }
[2426] (**)       }
[2426] (48)       if (Local[0] == 3939) {
[242D] (1A)         Bit[69] = 1;
[2432] (1A)         Var[238] = 3;
[2437] (25)         pickupObject(934,68);
[243B] (25)         pickupObject(935,68);
[243F] (69)         setOwnerOf(937,VAR_EGO);
[2444] (25)         pickupObject(20,1);
[2448] (25)         pickupObject(1001,73);
[244C] (25)         pickupObject(1012,73);
[2450] (25)         pickupObject(999,73);
[2454] (1A)         VAR_ROOM = 75;
[2459] (2D)         putActorInRoom(1,33);
[245C] (0E)         putActorAtObject(1,377);
[2460] (2D)         putActorInRoom(2,33);
[2463] (0E)         putActorAtObject(2,377);
[2467] (13)         ActorOps(1,[Costume(2)]);
[246C] (13)         ActorOps(2,[Costume(28)]);
[2471] (1A)         Bit[17] = 1;
[2476] (**)       }
[2476] (48)       if (Local[0] == -26143) {
[247D] (1A)         Bit[69] = 1;
[2482] (25)         pickupObject(934,68);
[2486] (25)         pickupObject(935,68);
[248A] (69)         setOwnerOf(937,VAR_EGO);
[248F] (25)         pickupObject(20,1);
[2493] (25)         pickupObject(1001,73);
[2497] (25)         pickupObject(1012,73);
[249B] (2D)         putActorInRoom(1,33);
[249E] (0E)         putActorAtObject(1,377);
[24A2] (2D)         putActorInRoom(2,33);
[24A5] (0E)         putActorAtObject(2,377);
[24A9] (13)         ActorOps(1,[Costume(2)]);
[24AE] (13)         ActorOps(2,[Costume(28)]);
[24B3] (1A)         Var[238] = 3;
[24B8] (**)       }
[24B8] (48)       if (Local[0] == 4040) {
[24BF] (25)         pickupObject(934,68);
[24C3] (25)         pickupObject(935,68);
[24C7] (29)         setOwnerOf(937,1);
[24CB] (25)         pickupObject(20,1);
[24CF] (25)         pickupObject(1001,73);
[24D3] (25)         pickupObject(1013,73);
[24D7] (25)         pickupObject(501,43);
[24DB] (25)         pickupObject(451,40);
[24DF] (25)         pickupObject(985,72);
[24E3] (25)         pickupObject(986,72);
[24E7] (5D)         setClass(986,[154]);
[24EE] (13)         ActorOps(1,[Costume(2)]);
[24F3] (1A)         Var[238] = 2;
[24F8] (1A)         VAR_ROOM = 40;
[24FD] (2D)         putActorInRoom(1,33);
[2500] (0E)         putActorAtObject(1,377);
[2504] (**)       }
[2504] (48)       if (Local[0] == 4041) {
[250B] (25)         pickupObject(934,68);
[250F] (25)         pickupObject(935,68);
[2513] (29)         setOwnerOf(937,1);
[2517] (25)         pickupObject(20,1);
[251B] (25)         pickupObject(1001,73);
[251F] (25)         pickupObject(1013,73);
[2523] (25)         pickupObject(501,43);
[2527] (25)         pickupObject(451,40);
[252B] (25)         pickupObject(985,72);
[252F] (25)         pickupObject(986,72);
[2533] (5D)         setClass(986,[154]);
[253A] (13)         ActorOps(1,[Costume(2)]);
[253F] (1A)         Var[238] = 2;
[2544] (1A)         VAR_ROOM = 40;
[2549] (2D)         putActorInRoom(1,53);
[254C] (01)         putActor(1,300,140);
[2552] (**)       }
[2552] (48)       if (Local[0] == 4141) {
[2559] (25)         pickupObject(934,68);
[255D] (25)         pickupObject(935,68);
[2561] (29)         setOwnerOf(937,1);
[2565] (25)         pickupObject(20,1);
[2569] (25)         pickupObject(1001,73);
[256D] (2D)         putActorInRoom(1,33);
[2570] (0E)         putActorAtObject(1,377);
[2574] (13)         ActorOps(1,[Costume(2)]);
[2579] (1A)         Var[238] = 1;
[257E] (**)       }
[257E] (48)       if (Local[0] == 4242) {
[2585] (25)         pickupObject(934,68);
[2589] (25)         pickupObject(20,1);
[258D] (25)         pickupObject(1001,73);
[2591] (25)         pickupObject(1013,73);
[2595] (29)         setOwnerOf(937,1);
[2599] (25)         pickupObject(985,72);
[259D] (25)         pickupObject(986,72);
[25A1] (13)         ActorOps(1,[Costume(2)]);
[25A6] (1A)         Var[238] = 2;
[25AB] (72)         loadRoom(41);
[25AD] (**)       }
[25AD] (48)       if (Local[0] == 4343) {
[25B4] (69)         setOwnerOf(937,VAR_EGO);
[25B9] (25)         pickupObject(20,1);
[25BD] (25)         pickupObject(1001,73);
[25C1] (25)         pickupObject(1012,73);
[25C5] (25)         pickupObject(830,60);
[25C9] (25)         pickupObject(999,73);
[25CD] (5D)         setClass(380,[6]);
[25D4] (13)         ActorOps(1,[Costume(2)]);
[25D9] (13)         ActorOps(2,[Costume(28)]);
[25DE] (1A)         Var[238] = 3;
[25E3] (2D)         putActorInRoom(1,41);
[25E6] (01)         putActor(1,0,140);
[25EC] (72)         loadRoom(41);
[25EE] (**)       }
[25EE] (48)       if (Local[0] == 3941) {
[25F5] (25)         pickupObject(934,68);
[25F9] (25)         pickupObject(935,68);
[25FD] (72)         loadRoom(1);
[25FF] (25)         pickupObject(20,0);
[2603] (72)         loadRoom(73);
[2605] (25)         pickupObject(1001,0);
[2609] (25)         pickupObject(1012,0);
[260D] (29)         setOwnerOf(1012,1);
[2611] (2D)         putActorInRoom(1,177);
[2614] (01)         putActor(1,100,100);
[261A] (2D)         putActorInRoom(2,177);
[261D] (01)         putActor(2,100,100);
[2623] (72)         loadRoom(43);
[2625] (25)         pickupObject(501,0);
[2629] (2D)         putActorInRoom(1,33);
[262C] (0E)         putActorAtObject(1,377);
[2630] (2D)         putActorInRoom(2,33);
[2633] (0E)         putActorAtObject(2,377);
[2637] (13)         ActorOps(1,[Costume(2)]);
[263C] (13)         ActorOps(2,[Costume(28)]);
[2641] (1A)         Var[238] = 3;
[2646] (**)       }
[2646] (48)       if (Local[0] == 3940) {
[264D] (25)         pickupObject(938,0);
[2651] (29)         setOwnerOf(938,14);
[2655] (25)         pickupObject(934,68);
[2659] (25)         pickupObject(935,68);
[265D] (25)         pickupObject(936,68);
[2661] (25)         pickupObject(830,60);
[2665] (25)         pickupObject(20,1);
[2669] (25)         pickupObject(1012,73);
[266D] (29)         setOwnerOf(1012,14);
[2671] (2D)         putActorInRoom(1,143);
[2674] (0E)         putActorAtObject(1,601);
[2678] (13)         ActorOps(1,[Costume(2)]);
[267D] (1A)         Var[238] = 1;
[2682] (**)       }
[2682] (48)       if (Local[0] == 878) {
[2689] (13)         ActorOps(1,[Costume(2)]);
[268E] (25)         pickupObject(934,68);
[2692] (25)         pickupObject(1014,73);
[2696] (54)         setObjectName(1014,"hose");
[269E] (29)         setOwnerOf(937,1);
[26A2] (25)         pickupObject(20,1);
[26A6] (1A)         Var[238] = 2;
[26AB] (72)         loadRoom(49);
[26AD] (**)       }
[26AD] (48)       if (Local[0] == 888) {
[26B4] (13)         ActorOps(1,[Costume(2)]);
[26B9] (25)         pickupObject(934,68);
[26BD] (25)         pickupObject(1014,73);
[26C1] (54)         setObjectName(1014,"hose");
[26C9] (72)         loadRoom(1);
[26CB] (25)         pickupObject(20,0);
[26CF] (1A)         Var[238] = 3;
[26D4] (72)         loadRoom(49);
[26D6] (**)       }
[26D6] (48)       if (Local[0] == 879) {
[26DD] (13)         ActorOps(1,[Costume(2)]);
[26E2] (25)         pickupObject(934,68);
[26E6] (25)         pickupObject(935,68);
[26EA] (25)         pickupObject(936,68);
[26EE] (69)         setOwnerOf(937,VAR_EGO);
[26F3] (25)         pickupObject(20,1);
[26F7] (37)         startObject(933,250,[2]);
[26FF] (1A)         Var[238] = 1;
[2704] (72)         loadRoom(49);
[2706] (**)       }
[2706] (48)       if (Local[0] == 787) {
[270D] (13)         ActorOps(1,[Costume(2)]);
[2712] (25)         pickupObject(934,68);
[2716] (72)         loadRoom(1);
[2718] (25)         pickupObject(20,0);
[271C] (25)         pickupObject(946,69);
[2720] (1A)         Bit[443] = 1;
[2725] (1A)         Var[238] = 1;
[272A] (72)         loadRoom(42);
[272C] (**)       }
[272C] (48)       if (Local[0] == 909) {
[2733] (1A)         Var[417] = 29;
[2738] (25)         pickupObject(934,68);
[273C] (25)         pickupObject(935,68);
[2740] (72)         loadRoom(1);
[2742] (25)         pickupObject(20,0);
[2746] (1A)         Var[238] = 2;
[274B] (37)         startObject(933,250,[2]);
[2753] (AD)         putActorInRoom(VAR_EGO,35);
[2757] (81)         putActor(VAR_EGO,0,0);
[275E] (72)         loadRoom(35);
[2760] (**)       }
[2760] (48)       if (Local[0] == 9191) {
[2767] (1A)         Var[316] = 2;
[276C] (1A)         Var[315] = 13;
[2771] (72)         loadRoom(1);
[2773] (25)         pickupObject(20,0);
[2777] (13)         ActorOps(1,[Costume(2)]);
[277C] (2D)         putActorInRoom(1,2);
[277F] (01)         putActor(1,225,125);
[2785] (72)         loadRoom(2);
[2787] (**)       }
[2787] (48)       if (Local[0] == 145) {
[278E] (1A)         Bit[17] = 1;
[2793] (25)         pickupObject(204,18);
[2797] (29)         setOwnerOf(204,4);
[279B] (25)         pickupObject(173,16);
[279F] (29)         setOwnerOf(173,4);
[27A3] (25)         pickupObject(1012,73);
[27A7] (25)         pickupObject(934,68);
[27AB] (25)         pickupObject(935,68);
[27AF] (25)         pickupObject(936,68);
[27B3] (29)         setOwnerOf(937,1);
[27B7] (2D)         putActorInRoom(1,45);
[27BA] (01)         putActor(1,100,100);
[27C0] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[285F] (72)         loadRoom(45);
[2861] (**)       }
[2861] (48)       if (Local[0] == 146) {
[2868] (1A)         Bit[17] = 1;
[286D] (25)         pickupObject(1012,73);
[2871] (25)         pickupObject(204,18);
[2875] (25)         pickupObject(173,16);
[2879] (25)         pickupObject(934,68);
[287D] (25)         pickupObject(935,68);
[2881] (25)         pickupObject(936,68);
[2885] (25)         pickupObject(586,48);
[2889] (37)         startObject(933,250,[10]);
[2891] (5D)         setClass(586,[145]);
[2898] (29)         setOwnerOf(937,1);
[289C] (2D)         putActorInRoom(1,17);
[289F] (01)         putActor(1,0,100);
[28A5] (2D)         putActorInRoom(2,17);
[28A8] (01)         putActor(2,0,100);
[28AE] (27)         PutCodeInString(40, "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
[2934] (72)         loadRoom(17);
[2936] (**)       }
[2936] (48)       if (Local[0] == 100) {
[293D] (72)         loadRoom(4);
[293F] (1A)         Var[237] = 3;
[2944] (1A)         Bit[69] = 1;
[2949] (13)         ActorOps(1,[Costume(2)]);
[294E] (2D)         putActorInRoom(1,4);
[2951] (01)         putActor(1,225,125);
[2957] (5D)         setClass(79,[160]);
[295E] (5D)         setClass(82,[160]);
[2965] (5D)         setClass(80,[32]);
[296C] (**)       }
[296C] (48)       if (Local[0] == 101) {
[2973] (1A)         Var[238] = 1;
[2978] (1A)         Bit[448] = 1;
[297D] (1C)         startSound(74);
[297F] (4C)         soundKludge([-1]);
[2984] (1A)         Bit[69] = 1;
[2989] (13)         ActorOps(1,[Costume(2)]);
[298E] (2D)         putActorInRoom(1,59);
[2991] (01)         putActor(1,0,0);
[2997] (25)         pickupObject(934,68);
[299B] (25)         pickupObject(935,68);
[299F] (25)         pickupObject(936,68);
[29A3] (25)         pickupObject(1001,73);
[29A7] (25)         pickupObject(1012,73);
[29AB] (25)         pickupObject(830,60);
[29AF] (25)         pickupObject(701,52);
[29B3] (25)         pickupObject(702,52);
[29B7] (25)         pickupObject(462,40);
[29BB] (29)         setOwnerOf(937,1);
[29BF] (1A)         VAR_ROOM = 170;
[29C4] (07)         setState(815,0);
[29C8] (1A)         Bit[17] = 1;
[29CD] (72)         loadRoom(59);
[29CF] (0A)         startScript(10,[]);
[29D2] (**)       }
[29D2] (48)       if (Local[0] == 4123) {
[29D9] (1A)         Var[417] = 29;
[29DE] (13)         ActorOps(1,[Costume(2)]);
[29E3] (25)         pickupObject(20,1);
[29E7] (25)         pickupObject(934,68);
[29EB] (25)         pickupObject(935,68);
[29EF] (25)         pickupObject(936,68);
[29F3] (25)         pickupObject(1253,97);
[29F7] (25)         pickupObject(1188,92);
[29FB] (25)         pickupObject(1189,92);
[29FF] (25)         pickupObject(1175,92);
[2A03] (25)         pickupObject(583,48);
[2A07] (25)         pickupObject(1012,73);
[2A0B] (54)         setObjectName(583,"ladder");
[2A15] (37)         startObject(933,250,[3]);
[2A1D] (5D)         setClass(576,[146]);
[2A24] (2D)         putActorInRoom(1,226);
[2A27] (0E)         putActorAtObject(1,567);
[2A2B] (2D)         putActorInRoom(2,226);
[2A2E] (01)         putActor(2,139,139);
[2A34] (1A)         Bit[17] = 1;
[2A39] (03)         VAR_RESULT = getActorRoom(2);
[2A3D] (C8)         if (VAR_RESULT == VAR_ROOM) {
[2A44] (68)           VAR_RESULT = isScriptRunning(31);
[2A48] (28)           if (!VAR_RESULT) {
[2A4D] (2A)             startScript(31,[1,2,1],F);
[2A59] (**)           }
[2A59] (**)         }
[2A59] (72)         loadRoom(226);
[2A5B] (**)       }
[2A5B] (48)       if (Local[0] == 4122) {
[2A62] (13)         ActorOps(1,[Costume(2)]);
[2A67] (25)         pickupObject(20,1);
[2A6B] (25)         pickupObject(934,68);
[2A6F] (25)         pickupObject(935,68);
[2A73] (25)         pickupObject(936,68);
[2A77] (25)         pickupObject(1253,97);
[2A7B] (25)         pickupObject(1188,92);
[2A7F] (25)         pickupObject(1189,92);
[2A83] (25)         pickupObject(583,48);
[2A87] (54)         setObjectName(583,"ladder");
[2A91] (37)         startObject(933,250,[3]);
[2A99] (2D)         putActorInRoom(1,226);
[2A9C] (0E)         putActorAtObject(1,567);
[2AA0] (72)         loadRoom(226);
[2AA2] (**)       }
[2AA2] (48)       if (Local[0] == 6345) {
[2AA9] (13)         ActorOps(1,[Costume(2)]);
[2AAE] (25)         pickupObject(1253,97);
[2AB2] (25)         pickupObject(1188,92);
[2AB6] (25)         pickupObject(1189,92);
[2ABA] (25)         pickupObject(1175,92);
[2ABE] (25)         pickupObject(583,48);
[2AC2] (54)         setObjectName(583,"ladder");
[2ACC] (37)         startObject(933,250,[3]);
[2AD4] (29)         setOwnerOf(937,1);
[2AD8] (25)         pickupObject(830,60);
[2ADC] (2D)         putActorInRoom(1,18);
[2ADF] (01)         putActor(1,0,144);
[2AE5] (**)       }
[2AE5] (48)       if (Local[0] == 4951) {
[2AEC] (1A)         Bit[37 + 19] = 1;
[2AF3] (1A)         Bit[37 + 20] = 1;
[2AFA] (1A)         Bit[37 + 21] = 1;
[2B01] (1A)         Bit[37 + 22] = 1;
[2B08] (5D)         setClass(479,[12]);
[2B0F] (1A)         Local[0] = 0;
[2B14] (1A)         Var[300] = 0;
[2B19] (72)         loadRoom(66);
[2B1B] (**)       }
[2B1B] (48)       if (Local[0] == 4952) {
[2B22] (1A)         Bit[37 + 19] = 1;
[2B29] (1A)         Bit[37 + 20] = 1;
[2B30] (1A)         Bit[37 + 21] = 1;
[2B37] (1A)         Bit[37 + 22] = 1;
[2B3E] (5D)         setClass(479,[12]);
[2B45] (1A)         Local[0] = 0;
[2B4A] (1A)         Var[300] = 1;
[2B4F] (72)         loadRoom(66);
[2B51] (**)       }
[2B51] (48)       if (Local[0] == 4953) {
[2B58] (1A)         Bit[37 + 19] = 1;
[2B5F] (1A)         Bit[37 + 20] = 1;
[2B66] (1A)         Bit[37 + 21] = 1;
[2B6D] (1A)         Bit[37 + 22] = 1;
[2B74] (5D)         setClass(479,[12]);
[2B7B] (1A)         Local[0] = 0;
[2B80] (1A)         Var[300] = 2;
[2B85] (72)         loadRoom(66);
[2B87] (**)       }
[2B87] (48)       if (Local[0] == 4954) {
[2B8E] (1A)         Bit[37 + 19] = 1;
[2B95] (1A)         Bit[37 + 20] = 1;
[2B9C] (1A)         Bit[37 + 21] = 1;
[2BA3] (1A)         Bit[37 + 22] = 1;
[2BAA] (5D)         setClass(479,[12]);
[2BB1] (1A)         Local[0] = 0;
[2BB6] (1A)         Var[300] = 3;
[2BBB] (72)         loadRoom(66);
[2BBD] (**)       }
[2BBD] (48)       if (Local[0] == 4955) {
[2BC4] (1A)         Bit[37 + 19] = 1;
[2BCB] (1A)         Bit[37 + 20] = 1;
[2BD2] (1A)         Bit[37 + 21] = 1;
[2BD9] (1A)         Bit[37 + 22] = 1;
[2BE0] (5D)         setClass(479,[12]);
[2BE7] (1A)         Local[0] = 0;
[2BEC] (1A)         Var[300] = 4;
[2BF1] (72)         loadRoom(66);
[2BF3] (**)       }
[2BF3] (48)       if (Local[0] == 4956) {
[2BFA] (1A)         Bit[37 + 19] = 1;
[2C01] (1A)         Bit[37 + 20] = 1;
[2C08] (1A)         Bit[37 + 21] = 1;
[2C0F] (1A)         Bit[37 + 22] = 1;
[2C16] (5D)         setClass(479,[12]);
[2C1D] (1A)         Local[0] = 0;
[2C22] (1A)         Var[300] = 5;
[2C27] (72)         loadRoom(66);
[2C29] (**)       }
[2C29] (48)       if (Local[0] == 4957) {
[2C30] (1A)         Bit[37 + 19] = 1;
[2C37] (1A)         Bit[37 + 20] = 1;
[2C3E] (1A)         Bit[37 + 21] = 1;
[2C45] (1A)         Bit[37 + 22] = 1;
[2C4C] (5D)         setClass(479,[12]);
[2C53] (1A)         Local[0] = 0;
[2C58] (1A)         Var[300] = 6;
[2C5D] (72)         loadRoom(66);
[2C5F] (**)       }
[2C5F] (48)       if (Local[0] == 4958) {
[2C66] (1A)         Bit[37 + 19] = 1;
[2C6D] (1A)         Bit[37 + 20] = 1;
[2C74] (1A)         Bit[37 + 21] = 1;
[2C7B] (1A)         Bit[37 + 22] = 1;
[2C82] (5D)         setClass(479,[12]);
[2C89] (1A)         Local[0] = 0;
[2C8E] (1A)         Var[300] = 7;
[2C93] (72)         loadRoom(66);
[2C95] (**)       }
[2C95] (48)       if (Local[0] == 4959) {
[2C9C] (1A)         Bit[37 + 19] = 1;
[2CA3] (1A)         Bit[37 + 20] = 1;
[2CAA] (1A)         Bit[37 + 21] = 1;
[2CB1] (1A)         Bit[37 + 22] = 1;
[2CB8] (5D)         setClass(479,[12]);
[2CBF] (1A)         Local[0] = 0;
[2CC4] (1A)         Var[300] = 8;
[2CC9] (72)         loadRoom(66);
[2CCB] (**)       }
[2CCB] (48)       if (Local[0] == 4695) {
[2CD2] (25)         pickupObject(1189,92);
[2CD6] (25)         pickupObject(1207,93);
[2CDA] (5D)         setClass(1207,[146]);
[2CE1] (2D)         putActorInRoom(1,36);
[2CE4] (0E)         putActorAtObject(1,392);
[2CE8] (**)       }
[2CE8] (48)       if (Local[0] == 4960) {
[2CEF] (1A)         Var[238] = 3;
[2CF4] (2D)         putActorInRoom(1,41);
[2CF7] (01)         putActor(1,500,0);
[2CFD] (**)       }
[2CFD] (48)       if (Local[0] == 4949) {
[2D04] (13)         ActorOps(1,[Costume(2)]);
[2D09] (1A)         Bit[17] = 1;
[2D0E] (25)         pickupObject(934,68);
[2D12] (25)         pickupObject(935,68);
[2D16] (25)         pickupObject(936,68);
[2D1A] (25)         pickupObject(23,1);
[2D1E] (69)         setOwnerOf(937,VAR_EGO);
[2D23] (25)         pickupObject(20,1);
[2D27] (1A)         VAR_ROOM = 21;
[2D2C] (1A)         Bit[17] = 0;
[2D31] (72)         loadRoom(55);
[2D33] (**)       }
[2D33] (48)       if (Local[0] == 4961) {
[2D3A] (13)         ActorOps(1,[Costume(2)]);
[2D3F] (1A)         Bit[17] = 1;
[2D44] (25)         pickupObject(934,68);
[2D48] (25)         pickupObject(935,68);
[2D4C] (25)         pickupObject(936,68);
[2D50] (25)         pickupObject(23,1);
[2D54] (69)         setOwnerOf(937,VAR_EGO);
[2D59] (25)         pickupObject(20,1);
[2D5D] (1A)         VAR_ROOM = 21;
[2D62] (72)         loadRoom(55);
[2D64] (**)       }
[2D64] (48)       if (Local[0] == 4962) {
[2D6B] (1A)         Bit[17] = 1;
[2D70] (25)         pickupObject(934,68);
[2D74] (25)         pickupObject(935,68);
[2D78] (25)         pickupObject(936,68);
[2D7C] (25)         pickupObject(23,1);
[2D80] (69)         setOwnerOf(937,VAR_EGO);
[2D85] (25)         pickupObject(20,1);
[2D89] (1A)         Bit[17] = 1;
[2D8E] (1A)         VAR_ROOM = 22;
[2D93] (1A)         Bit[69] = 1;
[2D98] (1A)         Var[247] = 8;
[2D9D] (1A)         Var[248] = 8;
[2DA2] (1A)         Var[249] = 7;
[2DA7] (1A)         Bit[653] = 0;
[2DAC] (72)         loadRoom(23);
[2DAE] (**)       }
[2DAE] (48)       if (Local[0] == 4963) {
[2DB5] (1A)         Bit[17] = 0;
[2DBA] (25)         pickupObject(934,68);
[2DBE] (25)         pickupObject(935,68);
[2DC2] (25)         pickupObject(936,68);
[2DC6] (25)         pickupObject(23,1);
[2DCA] (69)         setOwnerOf(937,VAR_EGO);
[2DCF] (25)         pickupObject(20,1);
[2DD3] (1A)         Bit[17] = 0;
[2DD8] (1A)         VAR_ROOM = 22;
[2DDD] (1A)         Bit[69] = 1;
[2DE2] (1A)         Var[247] = 8;
[2DE7] (1A)         Var[248] = 8;
[2DEC] (1A)         Var[249] = 7;
[2DF1] (1A)         Bit[653] = 0;
[2DF6] (72)         loadRoom(23);
[2DF8] (**)       }
[2DF8] (48)       if (Local[0] == 4964) {
[2DFF] (1A)         Bit[17] = 1;
[2E04] (25)         pickupObject(934,68);
[2E08] (25)         pickupObject(935,68);
[2E0C] (25)         pickupObject(936,68);
[2E10] (25)         pickupObject(23,1);
[2E14] (69)         setOwnerOf(937,VAR_EGO);
[2E19] (25)         pickupObject(20,1);
[2E1D] (1A)         Bit[17] = 1;
[2E22] (1A)         VAR_ROOM = 22;
[2E27] (1A)         Bit[69] = 1;
[2E2C] (1A)         Var[247] = 8;
[2E31] (1A)         Var[248] = 8;
[2E36] (1A)         Var[224] = 81;
[2E3B] (1A)         Bit[653] = 1;
[2E40] (72)         loadRoom(23);
[2E42] (0A)         startScript(166,[]);
[2E45] (62)         stopScript(0);
[2E47] (**)       }
[2E47] (48)       if (Local[0] == 5234) {
[2E4E] (13)         ActorOps(1,[Costume(2)]);
[2E53] (25)         pickupObject(1012,73);
[2E57] (25)         pickupObject(830,60);
[2E5B] (25)         pickupObject(204,18);
[2E5F] (5D)         setClass(830,[8]);
[2E66] (25)         pickupObject(586,48);
[2E6A] (54)         setObjectName(586,"light-wand");
[2E78] (5D)         setClass(586,[140]);
[2E7F] (37)         startObject(933,250,[20]);
[2E87] (25)         pickupObject(934,68);
[2E8B] (25)         pickupObject(935,68);
[2E8F] (25)         pickupObject(936,68);
[2E93] (1A)         VAR_ROOM = 18;
[2E98] (2D)         putActorInRoom(1,222);
[2E9B] (01)         putActor(1,0,0);
[2EA1] (1A)         Bit[17] = 1;
[2EA6] (1A)         Var[311] = 1;
[2EAB] (72)         loadRoom(222);
[2EAD] (**)       }
[2EAD] (48)       if (Local[0] == 7456) {
[2EB4] (13)         ActorOps(1,[Costume(2)]);
[2EB9] (25)         pickupObject(586,48);
[2EBD] (54)         setObjectName(586,"light-wand");
[2ECB] (25)         pickupObject(204,18);
[2ECF] (1A)         Bit[540] = 0;
[2ED4] (5D)         setClass(1246,[32]);
[2EDB] (1A)         VAR_ROOM = 88;
[2EE0] (1A)         Var[224] = 88;
[2EE5] (2D)         putActorInRoom(1,97);
[2EE8] (01)         putActor(1,439,71);
[2EEE] (**)       }
[2EEE] (48)       if (Local[0] == 7777) {
[2EF5] (13)         ActorOps(1,[Costume(2)]);
[2EFA] (25)         pickupObject(586,48);
[2EFE] (54)         setObjectName(586,"light-wand");
[2F0C] (25)         pickupObject(204,18);
[2F10] (1A)         Bit[540] = 1;
[2F15] (5D)         setClass(1246,[160,6]);
[2F1F] (1A)         VAR_ROOM = 88;
[2F24] (1A)         Var[224] = 88;
[2F29] (2D)         putActorInRoom(1,97);
[2F2C] (01)         putActor(1,439,71);
[2F32] (**)       }
[2F32] (48)       if (Local[0] == 8567) {
[2F39] (13)         ActorOps(1,[Costume(2)]);
[2F3E] (25)         pickupObject(20,1);
[2F42] (25)         pickupObject(934,68);
[2F46] (25)         pickupObject(935,68);
[2F4A] (25)         pickupObject(936,68);
[2F4E] (2D)         putActorInRoom(1,33);
[2F51] (01)         putActor(1,150,125);
[2F57] (**)       }
[2F57] (48)       if (Local[0] == 9678) {
[2F5E] (13)         ActorOps(1,[Costume(2)]);
[2F63] (1A)         Bit[69] = 1;
[2F68] (1A)         Var[315] = 2;
[2F6D] (1A)         Var[316] = 2;
[2F72] (1A)         Bit[74] = 1;
[2F77] (1A)         Bit[211] = 1;
[2F7C] (1A)         Bit[17] = 1;
[2F81] (25)         pickupObject(20,1);
[2F85] (1A)         Bit[87 + 8] = 1;
[2F8C] (1A)         Bit[87 + 3] = 1;
[2F93] (2D)         putActorInRoom(1,2);
[2F96] (01)         putActor(1,350,130);
[2F9C] (72)         loadRoom(2);
[2F9E] (**)       }
[2F9E] (48)       if (Local[0] == 1432) {
[2FA5] (13)         ActorOps(1,[Costume(2)]);
[2FAA] (1A)         Bit[69] = 1;
[2FAF] (1A)         Bit[355] = 1;
[2FB4] (1A)         Var[238] = 3;
[2FB9] (72)         loadRoom(32);
[2FBB] (**)       }
[2FBB] (48)       if (Local[0] == 6010) {
[2FC2] (13)         ActorOps(1,[Costume(2)]);
[2FC7] (1A)         Bit[69] = 1;
[2FCC] (25)         pickupObject(1208,93);
[2FD0] (25)         pickupObject(1214,93);
[2FD4] (25)         pickupObject(102,6);
[2FD8] (2D)         putActorInRoom(1,85);
[2FDB] (01)         putActor(1,70,130);
[2FE1] (**)       }
[2FE1] (48)       if (Local[0] == 6011) {
[2FE8] (13)         ActorOps(1,[Costume(2)]);
[2FED] (1A)         Bit[69] = 1;
[2FF2] (25)         pickupObject(1208,93);
[2FF6] (25)         pickupObject(1214,93);
[2FFA] (25)         pickupObject(102,6);
[2FFE] (5D)         setClass(1208,[146]);
[3005] (0A)         startScript(197,[]);
[3008] (2D)         putActorInRoom(1,226);
[300B] (01)         putActor(1,70,144);
[3011] (**)       }
[3011] (48)       if (Local[0] == 2543) {
[3018] (1A)         Var[238] = 2;
[301D] (25)         pickupObject(20,1);
[3021] (2D)         putActorInRoom(1,184);
[3024] (01)         putActor(1,0,0);
[302A] (1A)         VAR_ROOM = 63;
[302F] (1A)         Var[224] = 63;
[3034] (1C)         startSound(46);
[3036] (4C)         soundKludge([-1]);
[303B] (72)         loadRoom(184);
[303D] (**)       }
[303D] (48)       if (Local[0] == 3654) {
[3044] (1A)         Var[315] = 76;
[3049] (1A)         Var[316] = 2;
[304E] (25)         pickupObject(20,1);
[3052] (1A)         Bit[87 + 8] = 1;
[3059] (1A)         Bit[87 + 3] = 1;
[3060] (1A)         Bit[87 + 1] = 1;
[3067] (2D)         putActorInRoom(2,76);
[306A] (01)         putActor(2,0,0);
[3070] (2D)         putActorInRoom(1,76);
[3073] (01)         putActor(1,0,0);
[3079] (1A)         Bit[150] = 1;
[307E] (72)         loadRoom(76);
[3080] (**)       }
[3080] (48)       if (Local[0] == 4765) {
[3087] (25)         pickupObject(1207,93);
[308B] (25)         pickupObject(443,39);
[308F] (5D)         setClass(443,[140]);
[3096] (25)         pickupObject(999,73);
[309A] (5D)         setClass(999,[140]);
[30A1] (25)         pickupObject(1190,92);
[30A5] (2D)         putActorInRoom(1,37);
[30A8] (01)         putActor(1,0,0);
[30AE] (**)       }
[30AE] (48)       if (Local[0] == 3142) {
[30B5] (42)         chainScript(57,[]);
[30B8] (**)       }
[30B8] (48)       if (Local[0] == 5876) {
[30BF] (1A)         Bit[17] = 1;
[30C4] (1A)         Bit[36] = 1;
[30C9] (29)         setOwnerOf(938,0);
[30CD] (29)         setOwnerOf(937,0);
[30D1] (29)         setOwnerOf(933,0);
[30D5] (1A)         Local[1] = 1;
[30DA] (FA)         VerbOps(Local[1],[New(),Text(" ")]);
[30E2] (46)         Local[1]++;
[30E5] (44)         unless (Local[1] > 55) goto 30DA;
[30EC] (2D)         putActorInRoom(1,96);
[30EF] (01)         putActor(1,0,0);
[30F5] (72)         loadRoom(96);
[30F7] (62)         stopScript(0);
[30F9] (**)       }
[30F9] (48)       if (Local[0] == 5877) {
[3100] (1A)         Bit[36] = 1;
[3105] (29)         setOwnerOf(938,0);
[3109] (29)         setOwnerOf(937,0);
[310D] (29)         setOwnerOf(933,0);
[3111] (2D)         putActorInRoom(1,96);
[3114] (01)         putActor(1,0,0);
[311A] (72)         loadRoom(96);
[311C] (62)         stopScript(0);
[311E] (**)       }
[311E] (48)       if (Local[0] == 4851) {
[3125] (1A)         Var[238] = 1;
[312A] (1A)         Bit[37 + 31] = 1;
[3131] (1A)         Bit[37 + 12] = 1;
[3138] (1A)         Bit[37 + 13] = 1;
[313F] (1A)         Bit[37 + 14] = 1;
[3146] (1A)         Bit[37 + 15] = 1;
[314D] (1A)         Bit[37 + 16] = 1;
[3154] (1A)         Bit[37 + 17] = 1;
[315B] (1A)         Bit[37 + 18] = 1;
[3162] (1A)         Var[411] = 176;
[3167] (25)         pickupObject(20,1);
[316B] (25)         pickupObject(1012,73);
[316F] (6D)         putActorInRoom(1,Var[411]);
[3173] (01)         putActor(1,160,130);
[3179] (**)       }
[3179] (48)       if (Local[0] == 4852) {
[3180] (1A)         Var[238] = 1;
[3185] (1A)         Bit[37 + 31] = 1;
[318C] (1A)         Bit[37 + 12] = 1;
[3193] (1A)         Bit[37 + 13] = 1;
[319A] (1A)         Bit[37 + 14] = 1;
[31A1] (1A)         Bit[37 + 15] = 1;
[31A8] (1A)         Bit[37 + 16] = 1;
[31AF] (1A)         Bit[37 + 17] = 1;
[31B6] (1A)         Bit[37 + 18] = 1;
[31BD] (1A)         Var[411] = 172;
[31C2] (25)         pickupObject(20,1);
[31C6] (25)         pickupObject(1012,73);
[31CA] (6D)         putActorInRoom(1,Var[411]);
[31CE] (01)         putActor(1,160,130);
[31D4] (**)       }
[31D4] (48)       if (Local[0] == 4853) {
[31DB] (1A)         Var[238] = 1;
[31E0] (1A)         Bit[37 + 31] = 1;
[31E7] (1A)         Bit[37 + 12] = 1;
[31EE] (1A)         Bit[37 + 13] = 1;
[31F5] (1A)         Bit[37 + 14] = 1;
[31FC] (1A)         Bit[37 + 15] = 1;
[3203] (1A)         Bit[37 + 16] = 1;
[320A] (1A)         Bit[37 + 17] = 1;
[3211] (1A)         Bit[37 + 18] = 1;
[3218] (1A)         Var[411] = 164;
[321D] (25)         pickupObject(20,1);
[3221] (25)         pickupObject(1012,73);
[3225] (6D)         putActorInRoom(1,Var[411]);
[3229] (01)         putActor(1,160,130);
[322F] (**)       }
[322F] (48)       if (Local[0] == 4854) {
[3236] (1A)         Var[238] = 1;
[323B] (1A)         Bit[37 + 31] = 1;
[3242] (1A)         Bit[37 + 12] = 1;
[3249] (1A)         Bit[37 + 13] = 1;
[3250] (1A)         Bit[37 + 14] = 1;
[3257] (1A)         Bit[37 + 15] = 1;
[325E] (1A)         Bit[37 + 16] = 1;
[3265] (1A)         Bit[37 + 17] = 1;
[326C] (1A)         Bit[37 + 18] = 1;
[3273] (1A)         Var[411] = 170;
[3278] (25)         pickupObject(20,1);
[327C] (25)         pickupObject(1012,73);
[3280] (6D)         putActorInRoom(1,Var[411]);
[3284] (01)         putActor(1,160,130);
[328A] (**)       }
[328A] (48)       if (Local[0] == 4855) {
[3291] (1A)         Var[238] = 1;
[3296] (1A)         Bit[37 + 31] = 1;
[329D] (1A)         Bit[37 + 12] = 1;
[32A4] (1A)         Bit[37 + 13] = 1;
[32AB] (1A)         Bit[37 + 14] = 1;
[32B2] (1A)         Bit[37 + 15] = 1;
[32B9] (1A)         Bit[37 + 16] = 1;
[32C0] (1A)         Bit[37 + 17] = 1;
[32C7] (1A)         Bit[37 + 18] = 1;
[32CE] (1A)         Var[411] = 155;
[32D3] (25)         pickupObject(20,1);
[32D7] (25)         pickupObject(1012,73);
[32DB] (6D)         putActorInRoom(1,Var[411]);
[32DF] (01)         putActor(1,160,130);
[32E5] (**)       }
[32E5] (0A)       startScript(45,[]);
[32E8] (0A)       startScript(10,[]);
[32EB] (18)       goto 336F;
[32EE] (**)     }
[32EE] (**)   }
[32EE] (1A)   Bit[69] = 0;
[32F3] (48)   if (Local[0] == 2718) {
[32FA] (18)   } else {
[32FD] (18)     goto 3306;
[3300] (80)     breakHere();
[3301] (A8)     unless (Var[444]) goto 3300;
[3306] (**)   }
[3306] (**) }
[3306] (27) PutCodeInString(22, "@@@@@@@@@@@");
[3315] (27) SetStringChar(22,0,11);
[331A] (27) SetStringChar(22,1,18);
[331F] (27) SetStringChar(22,2,15);
[3324] (27) SetStringChar(22,3,202);
[3329] (27) SetStringChar(22,4,254);
[332E] (27) SetStringChar(22,5,255);
[3333] (27) SetStringChar(22,6,202);
[3338] (27) SetStringChar(22,7,5);
[333D] (27) SetStringChar(22,8,254);
[3342] (27) SetStringChar(22,9,9);
[3347] (27) SetStringChar(22,10,0);
[334C] (1A) Bit[653] = 0;
[3351] (0A) startScript(74,[]);
[3354] (80) breakHere();
[3355] (68) VAR_RESULT = isScriptRunning(74);
[3359] (28) unless (!VAR_RESULT) goto 3354;
[335E] (2C) InitCharset(2);
[3361] (1A) Var[315] = 33;
[3366] (1A) Var[316] = 4;
[336B] (72) loadRoom(75);
[336D] (62) stopScript(0);
[336F] (D2) actorFollowCamera(VAR_EGO);
[3372] (2C) CursorShow();
[3374] (2C) UserputOn();
[3376] (A0) stopObjectCode();
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
[0073] (18)       goto 0464;
[0076] (**)     }
[0076] (18)   } else {
[0079] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[007E] (48)     if (VAR_RESULT == 15) {
[0085] (18)       goto 02A7;
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
[00F8] (18)         goto 0464;
[00FB] (9D)       } else if (classOfIs(Local[2],[133])) {
[0107] (8A)         startScript(Var[163],[Local[1],Local[3],Local[2]]);
[0114] (18)       } else {
[0117] (42)         chainScript(3,[Local[0]]);
[011D] (**)       }
[011D] (**)     }
[011D] (18)     goto 0464;
[0120] (**)   }
[0120] (**) }
[0120] (48) if (Local[0] == 9) {
[0127] (48)   if (VAR_CURRENT_LIGHTS == 0) {
[012E] (94)     print(VAR_EGO,[Text("It's too dark to see it.")]);
[014B] (18)     goto 00F5;
[014E] (**)   }
[014E] (**) }
[014E] (CB) VAR_RESULT = getVerbEntryPoint(Local[1],Local[0]);
[0155] (28) if (!VAR_RESULT) {
[015A] (9A)   Local[4] = Local[1];
[015F] (9D)   if (classOfIs(Local[4],[136])) {
[0168] (08)     if (Local[0] != 10) {
[016F] (42)       chainScript(3,[Local[0]]);
[0175] (18)     } else {
[0178] (18)       goto 0464;
[017B] (**)     }
[017B] (**)   }
[017B] (28)   if (!Bit[0 + Local[3]]) {
[0182] (90)     VAR_RESULT = getObjectOwner(Local[1]);
[0187] (48)     if (VAR_RESULT == 15) {
[018E] (9D)       if (classOfIs(Local[4],[138])) {
[0197] (48)         if (Local[0] == 10) {
[019E] (B7)           startObject(Local[4],10,[]);
[01A3] (18)         } else {
[01A6] (FE)           walkActorTo(Local[3],VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[01AD] (9A)           Var[465] = VAR_VIRT_MOUSE_X;
[01B2] (9A)           Var[466] = VAR_VIRT_MOUSE_Y;
[01B7] (AE)           WaitForActor(Local[3]);
[01BB] (**)         }
[01BB] (08)         if (Local[0] != 10) {
[01C2] (42)           chainScript(3,[Local[0]]);
[01C8] (18)         } else {
[01CB] (18)           goto 0464;
[01CE] (**)         }
[01CE] (18)       } else {
[01D1] (F6)         walkActorToObject(Local[3],Local[4]);
[01D6] (C3)         Var[465] = getActorX(Local[4]);
[01DB] (A3)         Var[466] = getActorY(Local[4]);
[01E0] (AE)         WaitForActor(Local[3]);
[01E4] (**)       }
[01E4] (9D)     } else if (classOfIs(Local[4],[141])) {
[01F0] (CD)       walkActorToActor(Local[3],Local[4],30);
[01F6] (C3)       Var[465] = getActorX(Local[4]);
[01FB] (A3)       Var[466] = getActorY(Local[4]);
[0200] (AE)       WaitForActor(Local[3]);
[0204] (80)       breakHere();
[0205] (**)     }
[0205] (**)   }
[0205] (9D)   if (classOfIs(Local[4],[141])) {
[020E] (18)   } else {
[0211] (F4)     VAR_RESULT = getDist(Local[3],Local[4]);
[0218] (04)     if (VAR_RESULT <= 16) {
[021F] (08)       if (Local[0] != 10) {
[0226] (48)         if (Local[0] == 11) {
[022D] (90)           VAR_RESULT = getObjectOwner(Local[1]);
[0232] (C8)           if (VAR_RESULT == VAR_EGO) {
[0239] (18)             goto 025E;
[023C] (**)           }
[023C] (**)         }
[023C] (42)         chainScript(3,[Local[0]]);
[0242] (**)       }
[0242] (18)     } else {
[0245] (18)       goto 039C;
[0248] (**)     }
[0248] (**)   }
[0248] (48) } else if (Local[0] == 11) {
[0252] (90)   VAR_RESULT = getObjectOwner(Local[1]);
[0257] (C8)   if (VAR_RESULT == VAR_EGO) {
[025E] (94)     print(VAR_EGO,[Text("I already have it.")]);
[0275] (18)     goto 0464;
[0278] (**)   }
[0278] (**) }
[0278] (1A) Var[442] = 0;
[027D] (08) if (Local[0] != 10) {
[0284] (08)   if (Local[0] != 9) {
[028B] (08)     if (Local[0] != 11) {
[0292] (90)       VAR_RESULT = getObjectOwner(Local[1]);
[0297] (48)       if (VAR_RESULT == 15) {
[029E] (9D)         if (classOfIs(Local[1],[135])) {
[02A7] (F9)           doSentence(Local[0],Local[1],Local[2]);
[02AE] (59)           doSentence(11,Local[1],0);
[02B4] (18)           goto 0464;
[02B7] (**)         }
[02B7] (46)         Var[442]++;
[02BA] (**)       }
[02BA] (90)       VAR_RESULT = getObjectOwner(Local[2]);
[02BF] (48)       if (VAR_RESULT == 15) {
[02C6] (9D)         if (classOfIs(Local[2],[135])) {
[02CF] (F9)           doSentence(Local[0],Local[1],Local[2]);
[02D6] (59)           doSentence(11,Local[2],0);
[02DC] (18)           goto 0464;
[02DF] (**)         }
[02DF] (46)         Var[442]++;
[02E2] (**)       }
[02E2] (48)       if (Var[442] == 2) {
[02E9] (9D)         if (classOfIs(Local[1],[159])) {
[02F2] (9D)           if (classOfIs(Local[2],[159])) {
[02FB] (F7)             startObject(Local[1],Local[0],[Local[2]]);
[0304] (18)             goto 0464;
[0307] (**)           }
[0307] (**)         }
[0307] (42)         chainScript(3,[Local[0]]);
[030D] (**)       }
[030D] (**)     }
[030D] (**)   }
[030D] (**) }
[030D] (9A) Local[4] = Local[1];
[0312] (90) VAR_RESULT = getObjectOwner(Local[1]);
[0317] (08) if (VAR_RESULT != 15) {
[031E] (A8)   if (Local[2]) {
[0323] (90)     VAR_RESULT = getObjectOwner(Local[2]);
[0328] (48)     if (VAR_RESULT == 15) {
[032F] (9A)       Local[4] = Local[2];
[0334] (**)     }
[0334] (**)   }
[0334] (**) }
[0334] (90) VAR_RESULT = getObjectOwner(Local[4]);
[0339] (48) if (VAR_RESULT == 15) {
[0340] (28)   if (!Bit[0 + Local[3]]) {
[0347] (9D)     if (classOfIs(Local[4],[136])) {
[0350] (80)       breakHere();
[0351] (18)       goto 03C5;
[0354] (**)     }
[0354] (9D)     if (classOfIs(Local[4],[138])) {
[035D] (18)       goto 03C5;
[0360] (18)     } else {
[0363] (F6)       walkActorToObject(Local[3],Local[4]);
[0368] (C3)       Var[465] = getActorX(Local[4]);
[036D] (A3)       Var[466] = getActorY(Local[4]);
[0372] (AE)       WaitForActor(Local[3]);
[0376] (**)     }
[0376] (**)   }
[0376] (18) } else {
[0379] (9D)   unless (classOfIs(Local[4],[141])) goto 0382;
[0382] (**) }
[0382] (9D) if (classOfIs(Local[4],[141])) {
[038B] (18) } else {
[038E] (F4)   VAR_RESULT = getDist(Local[3],Local[4]);
[0395] (44)   if (VAR_RESULT > 16) {
[039C] (C9)     faceActor(Local[3],Local[4]);
[03A1] (AE)     WaitForActor(Local[3]);
[03A5] (94)     print(VAR_EGO,[Text("I can't reach it.")]);
[03BB] (0A)     startScript(13,[]);
[03BE] (0A)     startScript(14,[]);
[03C1] (19)     doSentence(STOP);
[03C3] (62)     stopScript(0);
[03C5] (**)   }
[03C5] (**) }
[03C5] (A8) if (Bit[0 + Local[3]]) {
[03CC] (48)   if (Local[0] == 10) {
[03D3] (18)     goto 0464;
[03D6] (**)   }
[03D6] (**) }
[03D6] (A8) if (Local[2]) {
[03DB] (0A)   startScript(9,[Local[1]]);
[03E1] (28)   if (!Var[444]) {
[03E6] (42)     chainScript(3,[Local[0]]);
[03EC] (**)   }
[03EC] (**) }
[03EC] (1A) Local[6] = 0;
[03F1] (9D) if (classOfIs(Local[1],[144])) {
[03FA] (1A)   Local[6] = 12;
[03FF] (9D) } else if (classOfIs(Local[1],[143])) {
[040B] (1A)   Local[6] = 10;
[0410] (9D) } else if (classOfIs(Local[1],[142])) {
[041C] (1A)   Local[6] = 11;
[0421] (**) }
[0421] (A8) if (Local[6]) {
[0426] (90)   VAR_RESULT = getObjectOwner(Local[1]);
[042B] (48)   if (VAR_RESULT == 15) {
[0432] (08)     if (Local[0] != 10) {
[0439] (08)       if (Local[0] != 9) {
[0440] (40)         cutscene([2]);
[0445] (D1)         animateCostume(VAR_EGO,Local[6]);
[044A] (2E)         delay(20);
[044E] (91)         animateCostume(VAR_EGO,3);
[0452] (C0)         endCutscene();
[0453] (**)       }
[0453] (**)     }
[0453] (**)   }
[0453] (**) }
[0453] (9A) VAR_ME = Local[1];
[0458] (F7) startObject(Local[1],Local[0],[Local[2],Local[0]]);
[0464] (AE) WaitForActor(VAR_EGO);
[0468] (0A) startScript(14,[]);
[046B] (1A) Var[120] = -1;
[0470] (A0) stopObjectCode();
END

// Script 3: Verb Defaults
[0000] (28) if (!Local[0]) {
[0005] (9A)   Local[0] = Var[107];
[000A] (**) }
[000A] (48) if (Local[0] == 3) {
[0011] (94)   print(VAR_EGO,[Text("It doesn't seem to\x10open.")]);
[002E] (48) } else if (Local[0] == 4) {
[0038] (94)   print(VAR_EGO,[Text("It doesn't seem to\x10close.")]);
[0056] (48) } else if (Local[0] == 6) {
[0060] (18)   goto 006D;
[0063] (48) } else if (Local[0] == 7) {
[006D] (94)   print(VAR_EGO,[Text("I can't move\x10it.")]);
[0082] (48) } else if (Local[0] == 9) {
[008C] (94)   print(VAR_EGO,[Text("I don't see anything special about\x10it.")]);
[00B7] (48) } else if (Local[0] == 11) {
[00C1] (94)   print(VAR_EGO,[Text("I can't pick that\x10up.")]);
[00DB] (48) } else if (Local[0] == 79) {
[00E5] (94)   print(VAR_EGO,[Text("I can't reach that from\x10here.")]);
[0107] (48) } else if (Local[0] == 88) {
[0111] (18)   goto 0192;
[0114] (18) } else {
[0117] (90)   VAR_RESULT = getObjectOwner(Var[105]);
[011C] (C8)   if (VAR_RESULT == VAR_EGO) {
[0123] (9D)   } else if (classOfIs(Var[105],[16])) {
[012F] (9D)     if (classOfIs(Var[105],[15])) {
[0138] (9D)       if (classOfIs(Var[105],[15])) {
[0141] (18)         goto 0192;
[0144] (**)       }
[0144] (**)     }
[0144] (**)   }
[0144] (9D)   if (classOfIs(Var[105],[1])) {
[014D] (9D)     if (classOfIs(Var[105],[2])) {
[0156] (9D)       if (classOfIs(Var[105],[3])) {
[015F] (9D)         if (classOfIs(Var[105],[4])) {
[0168] (A8)           if (Var[106]) {
[016D] (18)             goto 0192;
[0170] (**)           }
[0170] (**)         }
[0170] (**)       }
[0170] (**)     }
[0170] (**)   }
[0170] (94)   print(VAR_EGO,[Text("That doesn't seem to\x10work.")]);
[018F] (18)   goto 01B4;
[0192] (94)   print(VAR_EGO,[Text("I don't think that will\x10work.")]);
[01B4] (**) }
[01B4] (19) doSentence(STOP);
[01B6] (0A) startScript(13,[]);
[01B9] (0A) startScript(14,[]);
[01BC] (A0) stopObjectCode();
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
[024E] (D8)         printEgo([Text("There's nothing to look at.")]);
[026C] (18)       } else {
[026F] (9A)         Var[107] = Var[111];
[0274] (1A)         Var[108] = 0;
[0279] (1A)         Var[109] = 0;
[027E] (1A)         Var[110] = 0;
[0283] (1A)         Var[120] = -1;
[0288] (8A)         startScript(Var[180],[]);
[028C] (62)         stopScript(0);
[028E] (**)       }
[028E] (18)     } else {
[0291] (1A)       Var[181] = 0;
[0296] (**)     }
[0296] (**)   }
[0296] (**) }
[0296] (48) if (Var[107] == 8) {
[029D] (A8)   if (Var[108]) {
[02A2] (0A)     startScript(9,[Var[108]]);
[02A8] (9A)     Var[110] = Var[444];
[02AD] (**)   }
[02AD] (**) }
[02AD] (48) if (Var[107] == 5) {
[02B4] (A8)   if (Var[108]) {
[02B9] (1A)     Var[110] = 132;
[02BE] (**)   }
[02BE] (**) }
[02BE] (48) if (Local[0] == 2) {
[02C5] (1A)   Bit[16] = 1;
[02CA] (A8)   if (Var[110]) {
[02CF] (A8)     if (Var[109]) {
[02D4] (1A)       Local[6] = 1;
[02D9] (A8)     } else if (Bit[18]) {
[02E1] (18)       goto 03A1;
[02E4] (18)     } else {
[02E7] (1A)       Bit[18] = 1;
[02EC] (**)     }
[02EC] (18)   } else {
[02EF] (1A)     Local[6] = 1;
[02F4] (**)   }
[02F4] (**) }
[02F4] (28) if (!Var[107]) {
[02F9] (9A)   Var[107] = Var[111];
[02FE] (**) }
[02FE] (0A) startScript(14,[]);
[0301] (A8) if (Local[6]) {
[0306] (62)   stopScript(69);
[0308] (A8)   if (Var[108]) {
[030D] (A8)     if (Var[110]) {
[0312] (A8)       if (Var[109]) {
[0317] (18)         goto 0354;
[031A] (A8)       } else if (Bit[18]) {
[0322] (18)         goto 03A1;
[0325] (18)       } else {
[0328] (1A)         Bit[18] = 1;
[032D] (18)         goto 03CE;
[0330] (**)       }
[0330] (18)     } else {
[0333] (48)       if (Var[107] == 10) {
[033A] (9D)         if (classOfIs(Var[108],[141])) {
[0343] (18)         } else {
[0346] (90)           VAR_RESULT = getObjectOwner(Var[108]);
[034B] (08)           if (VAR_RESULT != 15) {
[0352] (62)             stopScript(0);
[0354] (**)           }
[0354] (**)         }
[0354] (**)       }
[0354] (19)       doSentence(STOP);
[0356] (1A)       Var[104] = 0;
[035B] (F9)       doSentence(Var[107],Var[108],Var[109]);
[0362] (**)     }
[0362] (18)   } else {
[0365] (48)     if (Var[107] == 10) {
[036C] (28)       if (!Bit[0 + Var[1]]) {
[0373] (48)         if (Local[0] == 2) {
[037A] (19)           doSentence(STOP);
[037C] (2C)           InitCharset(1);
[037F] (7A)           VerbOps(100,[Color(Var[117]);]);
[0385] (2C)           InitCharset(2);
[0388] (1A)           Var[113] = 0;
[038D] (FE)           walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0394] (9A)           Var[465] = VAR_VIRT_MOUSE_X;
[0399] (9A)           Var[466] = VAR_VIRT_MOUSE_Y;
[039E] (**)         }
[039E] (**)       }
[039E] (18)     } else {
[03A1] (0A)       startScript(13,[]);
[03A4] (0A)       startScript(14,[]);
[03A7] (**)     }
[03A7] (AE)     WaitForActor(VAR_EGO);
[03AB] (7A)     VerbOps(100,[Color(Var[118]);]);
[03B1] (**)   }
[03B1] (A8)   if (Var[125]) {
[03B6] (8A)     startScript(Var[125],[]);
[03BA] (**)   }
[03BA] (28)   if (!Var[108]) {
[03BF] (0A)     startScript(14,[]);
[03C2] (18)   } else {
[03C5] (7A)     VerbOps(100,[Color(Var[117]);]);
[03CB] (0A)     startScript(13,[]);
[03CE] (**)   }
[03CE] (**) }
[03CE] (A0) stopObjectCode();
END

// Script 5
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
[008F] (A8)   if (Local[1]) {
[0094] (1A)     Var[442] = 120;
[0099] (FA)     VerbOps(Var[442],[Off()]);
[009E] (46)     Var[442]++;
[00A1] (44)     unless (Var[442] > 128) goto 0099;
[00A8] (26)     setVarRange(Var[167],9,[0,0,0,0,0,0,0,0,0]);
[00B5] (26)     setVarRange(Bit[7],9,[0,0,0,0,0,0,0,0,0]);
[00C2] (2C)     CursorHide();
[00C4] (2C)     UserputOff();
[00C6] (**)   }
[00C6] (38)   if (Local[1] >= 120) {
[00CD] (04)     if (Local[1] <= 128) {
[00D4] (28)       if (!Bit[5]) {
[00D9] (94)         print(VAR_EGO,[Text(getVerb(Local[1]))]);
[00E2] (28)         if (!Var[179]) {
[00E7] (AE)           WaitForMessage();
[00E9] (**)         }
[00E9] (**)       }
[00E9] (14)       print(255,[]);
[00EC] (9A)       Var[165] = Local[1];
[00F1] (**)     }
[00F1] (**)   }
[00F1] (**) }
[00F1] (48) if (Local[0] == 4) {
[00F8] (42)   chainScript(22,[Local[1]]);
[00FE] (**) }
[00FE] (A0) stopObjectCode();
END

// Script 18: Set up Verbs
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
[0150] (2C)   InitCharset(1);
[0153] (27)   PutCodeInString(41, "\x10");
[0158] (27)   PutCodeInString(42, "\x10");
[015D] (27)   PutCodeInString(43, "\x10");
[0162] (27)   PutCodeInString(44, "\x10");
[0167] (27)   PutCodeInString(45, "\x10");
[016C] (27)   PutCodeInString(46, "\x10");
[0171] (27)   PutCodeInString(47, "\x10");
[0176] (27)   PutCodeInString(48, "\x10");
[017B] (27)   PutCodeInString(49, "\x10");
[0180] (7A)   VerbOps(120,[New(),SetXY(0,145),Color(178),HiColor(14),Key(49),BackColor(176)]);
[0191] (7A)   VerbOps(121,[New(),SetXY(0,155),Color(178),HiColor(14),Key(50),BackColor(176)]);
[01A2] (7A)   VerbOps(122,[New(),SetXY(0,166),Color(178),HiColor(14),Key(51),BackColor(176)]);
[01B3] (7A)   VerbOps(123,[New(),SetXY(0,175),Color(178),HiColor(14),Key(52),BackColor(176)]);
[01C4] (7A)   VerbOps(124,[New(),SetXY(0,185),Color(178),HiColor(14),Key(53),BackColor(176)]);
[01D5] (7A)   VerbOps(125,[New(),SetXY(0,190),Color(178),HiColor(14),Key(54),BackColor(176)]);
[01E6] (7A)   VerbOps(126,[New(),SetXY(0,190),Color(178),HiColor(14),Key(55),BackColor(176)]);
[01F7] (7A)   VerbOps(127,[New(),SetXY(0,190),Color(178),HiColor(14),Key(56),BackColor(176)]);
[0208] (7A)   VerbOps(128,[New(),SetXY(0,190),Color(178),HiColor(14),Key(57),BackColor(176)]);
[0219] (7A)   VerbOps(120,[Text("" + getString(VAR_TALK_ACTOR))]);
[0223] (7A)   VerbOps(121,[Text("" + getString(VAR_RESTART_KEY))]);
[022D] (7A)   VerbOps(122,[Text("" + getString(VAR_PAUSE_KEY))]);
[0237] (7A)   VerbOps(123,[Text("" + getString(VAR_MOUSE_X))]);
[0241] (7A)   VerbOps(124,[Text("" + getString(VAR_MOUSE_Y))]);
[024B] (7A)   VerbOps(125,[Text("" + getString(VAR_TIMER))]);
[0255] (7A)   VerbOps(126,[Text("" + getString(VAR_TIMER_TOTAL))]);
[025F] (7A)   VerbOps(127,[Text("" + getString(VAR_SOUNDCARD))]);
[0269] (7A)   VerbOps(128,[Text("" + getString(VAR_VIDEOMODE))]);
[0273] (2C)   InitCharset(2);
[0276] (0A)   startScript(19,[1]);
[027C] (18)   /* goto 027F; */
[027F] (**) }
[027F] (A0) stopObjectCode();
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

// Script 24: Fighting Commands
[0000] (43) Var[351] = getActorX(1);
[0005] (23) Var[352] = getActorY(1);
[000A] (C3) Var[353] = getActorX(Var[345]);
[000F] (A3) Var[354] = getActorY(Var[345]);
[0014] (AC) Exprmode Local[2] = (Var[353] + <VAR_RESULT = getActorWidth(Var[345])>);
[0022] (AC) Exprmode Local[3] = (Var[353] - <VAR_RESULT = getActorWidth(Var[345])>);
[0030] (9A) Local[4] = Var[354];
[0035] (AC) Exprmode Local[6] = (Var[354] - ((20 * <VAR_RESULT = getActorScale(11)>) / 255));
[004A] (AC) Exprmode Local[7] = (Var[354] - ((35 * <VAR_RESULT = getActorScale(11)>) / 255));
[005F] (AC) Exprmode Local[8] = (Var[354] - ((55 * <VAR_RESULT = getActorScale(11)>) / 255));
[0074] (AC) Exprmode Local[12] = (Var[351] + <VAR_RESULT = getActorWidth(1)>);
[0081] (AC) Exprmode Local[11] = (Var[351] - <VAR_RESULT = getActorWidth(1)>);
[008E] (9A) Local[10] = Var[352];
[0093] (AC) Exprmode Local[13] = (Var[352] - ((20 * <VAR_RESULT = getActorScale(1)>) / 255));
[00A8] (AC) Exprmode Local[14] = (Var[352] - ((35 * <VAR_RESULT = getActorScale(1)>) / 255));
[00BD] (AC) Exprmode Local[15] = (Var[352] - ((55 * <VAR_RESULT = getActorScale(1)>) / 255));
[00D2] (9A) Var[355] = VAR_VIRT_MOUSE_X;
[00D7] (9A) Var[356] = VAR_VIRT_MOUSE_Y;
[00DC] (48) if (Local[0] == 2) {
[00E3] (B8)   if (Var[355] >= Local[3]) {
[00EA] (84)     if (Var[355] <= Local[2]) {
[00F1] (84)       if (Var[356] <= Local[4]) {
[00F8] (B8)         if (Var[356] >= Local[6]) {
[00FF] (9A)           Var[318] = Var[362];
[0104] (B8)         } else if (Var[356] >= Local[7]) {
[010E] (9A)           Var[318] = Var[361];
[0113] (B8)         } else if (Var[356] >= Local[8]) {
[011D] (9A)           Var[318] = Var[360];
[0122] (**)         }
[0122] (62)         stopScript(0);
[0124] (**)       }
[0124] (**)     }
[0124] (**)   }
[0124] (B8)   if (Var[355] >= Local[11]) {
[012B] (84)     if (Var[355] <= Local[12]) {
[0132] (84)       if (Var[356] <= Local[10]) {
[0139] (B8)         if (Var[356] >= Local[13]) {
[0140] (9A)           Var[318] = Var[359];
[0145] (B8)         } else if (Var[356] >= Local[14]) {
[014F] (9A)           Var[318] = Var[358];
[0154] (B8)         } else if (Var[356] >= Local[15]) {
[015E] (9A)           Var[318] = Var[357];
[0163] (**)         }
[0163] (62)         stopScript(0);
[0165] (**)       }
[0165] (**)     }
[0165] (**)   }
[0165] (C4)   if (Var[351] > Var[353]) {
[016C] (AC)     Exprmode Var[442] = (Var[351] + 8);
[0177] (C4)     if (VAR_VIRT_MOUSE_X > Var[442]) {
[017E] (9A)       Var[318] = Var[363];
[0183] (**)     }
[0183] (18)   } else {
[0186] (AC)     Exprmode Var[442] = (Var[351] - 8);
[0191] (F8)     if (VAR_VIRT_MOUSE_X < Var[442]) {
[0198] (9A)       Var[318] = Var[363];
[019D] (**)     }
[019D] (**)   }
[019D] (**) }
[019D] (48) if (Local[0] == 4) {
[01A4] (38)   if (Local[1] >= 327) {
[01AB] (04)     if (Local[1] <= 338) {
[01B2] (9A)       Var[318] = Local[1];
[01B7] (62)       stopScript(0);
[01B9] (**)     }
[01B9] (**)   }
[01B9] (48)   if (Local[1] == 27) {
[01C0] (1A)     Var[343] = 400;
[01C5] (9A)     Var[318] = Var[363];
[01CA] (C8)   } else if (Local[1] == Var[366]) {
[01D4] (9A)     Var[318] = Local[1];
[01D9] (62)     stopScript(0);
[01DB] (48)   } else if (Local[1] == 102) {
[01E5] (A8)     if (Bit[107]) {
[01EA] (14)       print(252,[Color(8),Text("Keyboard Fighting On")]);
[0204] (1A)       Bit[107] = 0;
[0209] (2C)       CursorHide();
[020B] (18)     } else {
[020E] (14)       print(252,[Color(8),Text("Keyboard Fighting Off")]);
[0229] (1A)       Bit[107] = 1;
[022E] (2C)       CursorShow();
[0230] (**)     }
[0230] (48)   } else if (Local[1] == 48) {
[023A] (1A)     Var[318] = 338;
[023F] (18)   } else {
[0242] (42)     chainScript(22,[Local[1]]);
[0248] (**)   }
[0248] (62)   stopScript(0);
[024A] (**) }
[024A] (A0) stopObjectCode();
END

// Script 25: Fistfight
[0000] (44) if (Var[346] > 0) {
[0007] (AC)   Exprmode Local[0] = (<VAR_RESULT = getActorX(Var[345])> - <VAR_RESULT = getActorX(1)>);
[0018] (18) } else {
[001B] (AC)   Exprmode Local[0] = (<VAR_RESULT = getActorX(1)> - <VAR_RESULT = getActorX(Var[345])>);
[002C] (**) }
[002C] (04) if (Local[0] <= 30) {
[0033] (48)   if (Var[320] == 9) {
[003A] (48)     if (Var[319] == 6) {
[0041] (18)       goto 020C;
[0044] (18)     } else {
[0047] (11)       animateCostume(1,13);
[004A] (18)       goto 0224;
[004D] (**)     }
[004D] (**)   }
[004D] (48)   if (Var[320] == 10) {
[0054] (48)     if (Var[319] == 7) {
[005B] (18)       goto 020C;
[005E] (18)     } else {
[0061] (11)       animateCostume(1,14);
[0064] (18)       goto 0224;
[0067] (**)     }
[0067] (**)   }
[0067] (48)   if (Var[320] == 11) {
[006E] (48)     if (Var[319] == 8) {
[0075] (18)       goto 020C;
[0078] (18)     } else {
[007B] (11)       animateCostume(1,15);
[007E] (18)       goto 0224;
[0081] (**)     }
[0081] (**)   }
[0081] (48)   if (Var[319] == 9) {
[0088] (48)     if (Var[320] == 6) {
[008F] (18)       goto 0276;
[0092] (18)     } else {
[0095] (91)       animateCostume(Var[345],13);
[0099] (18)       goto 0293;
[009C] (**)     }
[009C] (**)   }
[009C] (48)   if (Var[319] == 10) {
[00A3] (48)     if (Var[320] == 7) {
[00AA] (18)       goto 0276;
[00AD] (18)     } else {
[00B0] (91)       animateCostume(Var[345],14);
[00B4] (18)       goto 0293;
[00B7] (**)     }
[00B7] (**)   }
[00B7] (48)   if (Var[319] == 11) {
[00BE] (48)     if (Var[320] == 8) {
[00C5] (18)       goto 0276;
[00C8] (18)     } else {
[00CB] (91)       animateCostume(Var[345],15);
[00CF] (18)       goto 0293;
[00D2] (**)     }
[00D2] (**)   }
[00D2] (48)   if (Var[319] == 20) {
[00D9] (08)     if (VAR_ROOM != 97) {
[00E0] (48)       if (VAR_ROOM == 170) {
[00E7] (18)       } else {
[00EA] (40)         cutscene([2]);
[00EF] (1A)         Bit[106] = 1;
[00F4] (1A)         Var[326] = 0;
[00F9] (51)         animateCostume(1,Var[319]);
[00FD] (80)         breakHere();
[00FE] (80)         breakHere();
[00FF] (80)         breakHere();
[0100] (91)         animateCostume(Var[345],13);
[0104] (4C)         soundKludge([263,200,0,13,0]);
[0115] (4C)         soundKludge([-1]);
[011A] (80)         breakHere();
[011B] (C0)         endCutscene();
[011C] (42)         chainScript(54,[]);
[011F] (18)         goto 020A;
[0122] (**)       }
[0122] (**)     }
[0122] (40)     cutscene([2]);
[0127] (51)     animateCostume(1,Var[319]);
[012B] (80)     breakHere();
[012C] (11)     animateCostume(11,6);
[012F] (80)     breakHere();
[0130] (80)     breakHere();
[0131] (80)     breakHere();
[0132] (80)     breakHere();
[0133] (80)     breakHere();
[0134] (28)     if (!Bit[106]) {
[0139] (1A)       Bit[106] = 1;
[013E] (48)       if (VAR_ROOM == 97) {
[0145] (14)         print(11,[Text("You'll never beat me with that pitiful\x10punch!" + wait() + "I was an Olympic champion boxer in\x101936!")]);
[01A0] (18)       } else {
[01A3] (11)         animateCostume(11,1);
[01A6] (80)         breakHere();
[01A7] (14)         print(11,[Text("HA!  That dirty American trick won't work on\x10ME!")]);
[01DB] (**)       }
[01DB] (AE)       WaitForMessage();
[01DD] (18)     } else {
[01E0] (11)       animateCostume(11,1);
[01E3] (80)       breakHere();
[01E4] (14)       print(11,[Text("HA!  You might as well give\x10up!")]);
[0207] (AE)       WaitForMessage();
[0209] (**)     }
[0209] (C0)     endCutscene();
[020A] (**)   }
[020A] (**) }
[020A] (62) stopScript(0);
[020C] (1C) startSound(204);
[020E] (80) breakHere();
[020F] (0A) startScript(27,[Var[331]]);
[0215] (5B) Var[331] /= 2;
[021A] (5B) Var[332] /= 2;
[021F] (0A) startScript(53,[]);
[0222] (62) stopScript(0);
[0224] (48) if (Var[320] == 9) {
[022B] (4C)   soundKludge([263,200,0,13,0]);
[023C] (4C)   soundKludge([-1]);
[0241] (18) } else {
[0244] (4C)   soundKludge([263,180,0,13,0]);
[0255] (4C)   soundKludge([-1]);
[025A] (**) }
[025A] (80) breakHere();
[025B] (80) breakHere();
[025C] (0A) startScript(27,[Var[332]]);
[0262] (1A) Var[331] = 0;
[0267] (1A) Var[332] = 0;
[026C] (0A) startScript(53,[]);
[026F] (1A) Var[344] = 0;
[0274] (62) stopScript(0);
[0276] (1C) startSound(204);
[0278] (80) breakHere();
[0279] (0A) startScript(28,[Var[340]]);
[027F] (5B) Var[340] /= 2;
[0284] (5B) Var[341] /= 2;
[0289] (0A) startScript(54,[]);
[028C] (1A) Var[344] = 0;
[0291] (62) stopScript(0);
[0293] (48) if (Var[319] == 9) {
[029A] (4C)   soundKludge([263,200,0,13,0]);
[02AB] (4C)   soundKludge([-1]);
[02B0] (18) } else {
[02B3] (4C)   soundKludge([263,180,0,13,0]);
[02C4] (4C)   soundKludge([-1]);
[02C9] (**) }
[02C9] (80) breakHere();
[02CA] (80) breakHere();
[02CB] (0A) startScript(28,[Var[341]]);
[02D1] (1A) Var[340] = 0;
[02D6] (1A) Var[341] = 0;
[02DB] (0A) startScript(54,[]);
[02DE] (46) Var[344]++;
[02E1] (16) VAR_RESULT = getRandomNr(100);
[02E5] (C4) if (VAR_RESULT > Var[337]) {
[02EC] (62)   stopScript(52);
[02EE] (**) }
[02EE] (62) stopScript(0);
[02F0] (A0) stopObjectCode();
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

// Script 46
[0000] (1A) Var[343] = 0;
[0005] (60) freezeScripts(127);
[0007] (19) doSentence(STOP);
[0009] (9A) Var[345] = Local[0];
[000E] (28) if (!Var[345]) {
[0013] (1A)   Var[345] = 11;
[0018] (**) }
[0018] (C3) Local[6] = getActorX(Var[345]);
[001D] (43) Local[7] = getActorX(1);
[0022] (1A) Var[366] = 338;
[0027] (C4) if (Local[6] > Local[7]) {
[002E] (1A)   Var[346] = 8;
[0033] (1A)   Var[347] = -8;
[0038] (1A)   Var[357] = 328;
[003D] (1A)   Var[358] = 332;
[0042] (1A)   Var[359] = 336;
[0047] (1A)   Var[360] = 329;
[004C] (1A)   Var[361] = 333;
[0051] (1A)   Var[362] = 337;
[0056] (1A)   Var[363] = 327;
[005B] (1A)   Var[364] = 331;
[0060] (1A)   Var[365] = 335;
[0065] (18) } else {
[0068] (1A)   Var[346] = -8;
[006D] (1A)   Var[347] = 8;
[0072] (1A)   Var[357] = 328;
[0077] (1A)   Var[358] = 332;
[007C] (1A)   Var[359] = 336;
[0081] (1A)   Var[360] = 327;
[0086] (1A)   Var[361] = 331;
[008B] (1A)   Var[362] = 335;
[0090] (1A)   Var[363] = 329;
[0095] (1A)   Var[364] = 333;
[009A] (1A)   Var[365] = 337;
[009F] (**) }
[009F] (9A) Var[318] = Var[358];
[00A4] (A8) if (Local[2]) {
[00A9] (1A)   Var[320] = 1;
[00AE] (18) } else {
[00B1] (1A)   Var[320] = 0;
[00B6] (**) }
[00B6] (0A) startScript(47,[]);
[00B9] (0A) startScript(48,[]);
[00BC] (0A) startScript(49,[]);
[00BF] (0A) startScript(50,[]);
[00C2] (0A) startScript(29,[]);
[00C5] (2E) delay(432000);
[00C9] (A0) stopObjectCode();
END

// Script 47
[0000] (1A) Local[1] = 0;
[0005] (1A) Local[2] = 7;
[000A] (C8) if (Var[318] == Var[363]) {
[0011] (C8) } else if (Var[318] == Var[364]) {
[001B] (C8) } else if (Var[318] == Var[365]) {
[0025] (18) } else {
[0028] (1A)   Local[1] = 0;
[002D] (1A)   Var[343] = 0;
[0032] (**) }
[0032] (44) if (Var[346] > 0) {
[0039] (AC)   Exprmode Local[0] = (<VAR_RESULT = getActorX(Var[345])> - <VAR_RESULT = getActorX(1)>);
[004A] (18) } else {
[004D] (AC)   Exprmode Local[0] = (<VAR_RESULT = getActorX(1)> - <VAR_RESULT = getActorX(Var[345])>);
[005E] (**) }
[005E] (44) if (Local[0] > 30) {
[0065] (C8)   if (Var[318] == Var[366]) {
[006C] (1A)     Var[318] = 17;
[0071] (**)   }
[0071] (C8)   if (Var[318] == Var[360]) {
[0078] (1A)     Var[318] = 17;
[007D] (**)   }
[007D] (C8)   if (Var[318] == Var[362]) {
[0084] (1A)     Var[318] = 17;
[0089] (**)   }
[0089] (C8)   if (Var[318] == Var[361]) {
[0090] (1A)     Var[318] = 17;
[0095] (**)   }
[0095] (**) }
[0095] (78) if (Local[0] < 22) {
[009C] (9A)   Var[318] = Var[363];
[00A1] (**) }
[00A1] (C8) if (Var[318] == Var[366]) {
[00A8] (1A)   Var[319] = 20;
[00AD] (0A)   startScript(25,[]);
[00B0] (C8) } else if (Var[318] == Var[357]) {
[00BA] (1A)   Var[319] = 6;
[00BF] (1A)   Local[2] = 6;
[00C4] (51)   animateCostume(1,Var[319]);
[00C8] (C8) } else if (Var[318] == Var[358]) {
[00D2] (1A)   Var[319] = 7;
[00D7] (1A)   Local[2] = 7;
[00DC] (51)   animateCostume(1,Var[319]);
[00E0] (C8) } else if (Var[318] == Var[359]) {
[00EA] (1A)   Var[319] = 8;
[00EF] (1A)   Local[2] = 8;
[00F4] (51)   animateCostume(1,Var[319]);
[00F8] (C8) } else if (Var[318] == Var[360]) {
[0102] (16)   Var[442] = getRandomNr(1);
[0106] (1A)   Var[319] = 9;
[010B] (28)   if (!Var[442]) {
[0110] (11)     animateCostume(1,9);
[0113] (18)   } else {
[0116] (11)     animateCostume(1,21);
[0119] (**)   }
[0119] (0A)   startScript(51,[]);
[011C] (80)   breakHere();
[011D] (0A)   startScript(25,[]);
[0120] (C8) } else if (Var[318] == Var[361]) {
[012A] (16)   Var[442] = getRandomNr(1);
[012E] (1A)   Var[319] = 10;
[0133] (28)   if (!Var[442]) {
[0138] (11)     animateCostume(1,10);
[013B] (18)   } else {
[013E] (11)     animateCostume(1,22);
[0141] (**)   }
[0141] (0A)   startScript(51,[]);
[0144] (80)   breakHere();
[0145] (0A)   startScript(25,[]);
[0148] (C8) } else if (Var[318] == Var[362]) {
[0152] (16)   Var[442] = getRandomNr(1);
[0156] (1A)   Var[319] = 11;
[015B] (28)   if (!Var[442]) {
[0160] (11)     animateCostume(1,11);
[0163] (18)   } else {
[0166] (11)     animateCostume(1,23);
[0169] (**)   }
[0169] (0A)   startScript(51,[]);
[016C] (80)   breakHere();
[016D] (0A)   startScript(25,[]);
[0170] (C8) } else if (Var[318] == Var[363]) {
[017A] (18)   goto 0194;
[017D] (C8) } else if (Var[318] == Var[364]) {
[0187] (18)   goto 0194;
[018A] (C8) } else if (Var[318] == Var[365]) {
[0194] (1A)   Var[319] = 16;
[0199] (11)   animateCostume(1,16);
[019C] (80)   breakHere();
[019D] (80)   breakHere();
[019E] (43)   Local[4] = getActorX(1);
[01A3] (23)   Local[5] = getActorY(1);
[01A8] (BA)   Local[4] -= Var[346];
[01AD] (A8)   if (Local[1]) {
[01B2] (46)     Var[343]++;
[01B5] (**)   }
[01B5] (F8)   if (Local[4] < Var[348]) {
[01BC] (5A)     Local[4] += 8;
[01C1] (AC)     Exprmode Var[343] = (2 + 1);
[01CC] (**)   }
[01CC] (C4)   if (Local[4] > Var[349]) {
[01D3] (3A)     Local[4] -= 8;
[01D8] (AC)     Exprmode Var[343] = (2 + 1);
[01E3] (**)   }
[01E3] (61)   putActor(1,Local[4],Local[5]);
[01E9] (44)   if (Var[343] > 2) {
[01F0] (1A)     Var[367] = 3;
[01F5] (62)     stopScript(48);
[01F7] (62)     stopScript(52);
[01F9] (62)     stopScript(25);
[01FB] (62)     stopScript(29);
[01FD] (62)     stopScript(50);
[01FF] (62)     stopScript(49);
[0201] (62)     stopScript(46);
[0203] (60)     freezeScripts(0);
[0205] (62)     stopScript(0);
[0207] (**)   }
[0207] (1A)   Local[1] = 1;
[020C] (48) } else if (Var[318] == 17) {
[0216] (1A)   Var[319] = 17;
[021B] (11)   animateCostume(1,17);
[021E] (80)   breakHere();
[021F] (80)   breakHere();
[0220] (43)   Local[4] = getActorX(1);
[0225] (23)   Local[5] = getActorY(1);
[022A] (DA)   Local[4] += Var[346];
[022F] (1A)   Var[343] = 0;
[0234] (F8)   if (Local[4] < Var[348]) {
[023B] (5A)     Local[4] += 8;
[0240] (**)   }
[0240] (C4)   if (Local[4] > Var[349]) {
[0247] (3A)     Local[4] -= 8;
[024C] (**)   }
[024C] (61)   putActor(1,Local[4],Local[5]);
[0252] (48) } else if (Var[318] == 0) {
[025C] (1A)   Var[319] = 0;
[0261] (18)   /* goto 0264; */
[0264] (**) }
[0264] (48) if (Var[319] == 0) {
[026B] (9A)   Var[319] = Local[2];
[0270] (51)   animateCostume(1,Local[2]);
[0274] (48) } else if (Var[319] == 17) {
[027E] (9A)   Var[319] = Local[2];
[0283] (51)   animateCostume(1,Local[2]);
[0287] (48) } else if (Var[319] == 16) {
[0291] (9A)   Var[319] = Local[2];
[0296] (51)   animateCostume(1,Local[2]);
[029A] (18)   /* goto 029D; */
[029D] (**) }
[029D] (1A) Var[318] = 0;
[02A2] (80) breakHere();
[02A3] (80) breakHere();
[02A4] (80) breakHere();
[02A5] (18) goto 000A;
[02A8] (A0) stopObjectCode();
END

// Script 48
[0000] (A8) if (Var[320]) {
[0005] (18) } else {
[0008] (1A)   Var[320] = 7;
[000D] (B8)   if (Var[344] >= Var[336]) {
[0014] (1A)     Var[344] = 0;
[0019] (1A)     Var[320] = 16;
[001E] (91)     animateCostume(Var[345],16);
[0022] (80)     breakHere();
[0023] (80)     breakHere();
[0024] (C3)     Local[0] = getActorX(Var[345]);
[0029] (A3)     Local[1] = getActorY(Var[345]);
[002E] (BA)     Local[0] -= Var[347];
[0033] (F8)     if (Local[0] < Var[348]) {
[003A] (5A)       Local[0] += 8;
[003F] (**)     }
[003F] (C4)     if (Local[0] > Var[349]) {
[0046] (3A)       Local[0] -= 8;
[004B] (**)     }
[004B] (E1)     putActor(Var[345],Local[0],Local[1]);
[0052] (80)     breakHere();
[0053] (18)     goto 0008;
[0056] (**)   }
[0056] (16)   VAR_RESULT = getRandomNr(100);
[005A] (F8)   unless (VAR_RESULT < Var[335]) goto 0064;
[0061] (**) }
[0061] (0A) startScript(52,[]);
[0064] (80) breakHere();
[0065] (68) VAR_RESULT = isScriptRunning(52);
[0069] (28) if (!VAR_RESULT) {
[006E] (68)   VAR_RESULT = isScriptRunning(51);
[0072] (28)   if (!VAR_RESULT) {
[0077] (18)     goto 0008;
[007A] (**)   }
[007A] (**) }
[007A] (18) goto 0064;
[007D] (A0) stopObjectCode();
END

// Script 49: Fighting Interface
[0000] (2C) InitCharset(1);
[0003] (14) print(254,[Pos(7,160),Color(178),Text("Indy")]);
[0012] (14) print(254,[Pos(55,154),Color(161),Text("power")]);
[0022] (14) print(254,[Pos(55,165),Color(161),Text("health")]);
[0033] (2C) InitCharset(2);
[0036] (AC) Exprmode Local[0] = ((Var[321] / 3) + 96);
[0045] (9A) Local[1] = Local[0];
[004A] (3F) drawBox(95,165,Local[0],171,0);
[0055] (AC) Exprmode Local[2] = (165 + 1);
[0060] (7F) drawBox(96,Local[2],Local[0],171,2);
[006B] (AC) Exprmode Local[3] = ((Var[341] / 3) + 96);
[007A] (9A) Local[4] = Local[3];
[007F] (3F) drawBox(95,155,Local[3],161,0);
[008A] (AC) Exprmode Local[2] = (155 + 1);
[0095] (7F) drawBox(96,Local[2],Local[3],161,9);
[00A0] (80) breakHere();
[00A1] (AC) Exprmode Local[0] = ((Var[322] / 3) + 96);
[00B0] (AC) Exprmode Local[3] = ((Var[341] / 3) + 96);
[00BF] (04) if (Local[0] <= 116) {
[00C6] (AC)   Exprmode Local[2] = (165 + 1);
[00D1] (7F)   drawBox(96,Local[2],Local[1],171,4);
[00DC] (28)   if (!Local[5]) {
[00E1] (4C)     soundKludge([268,37,0,4]);
[00EF] (4C)     soundKludge([-1]);
[00F4] (1A)     Local[5] = 1;
[00F9] (**)   }
[00F9] (04) } else if (Local[0] <= 136) {
[0103] (AC)   Exprmode Local[2] = (165 + 1);
[010E] (7F)   drawBox(96,Local[2],Local[1],171,14);
[0119] (28)   if (!Local[5]) {
[011E] (4C)     soundKludge([268,37,0,4]);
[012C] (4C)     soundKludge([-1]);
[0131] (1A)     Local[5] = 1;
[0136] (**)   }
[0136] (18) } else {
[0139] (AC)   Exprmode Local[2] = (165 + 1);
[0144] (7F)   drawBox(96,Local[2],Local[1],171,2);
[014F] (**) }
[014F] (F8) if (Local[0] < Local[1]) {
[0156] (AC)   Exprmode Var[442] = (Local[1] + 2);
[0161] (BF)   drawBox(Local[0],165,Var[442],171,0);
[016C] (**) }
[016C] (F8) if (Local[3] < Local[4]) {
[0173] (AC)   Exprmode Local[2] = (155 + 1);
[017E] (FF)   drawBox(Local[3],Local[2],Local[4],161,1);
[0189] (C4) } else if (Local[3] > Local[4]) {
[0193] (AC)   Exprmode Local[2] = (155 + 1);
[019E] (FF)   drawBox(Local[4],Local[2],Local[3],161,9);
[01A9] (**) }
[01A9] (9A) Local[1] = Local[0];
[01AE] (9A) Local[4] = Local[3];
[01B3] (18) goto 00A0;
[01B6] (A0) stopObjectCode();
END

// Script 50
[0000] (2C) InitCharset(1);
[0003] (14) print(254,[Pos(7,184),Color(178),Text(getName(Var[345]))]);
[0012] (14) print(254,[Pos(55,179),Color(161),Text("power")]);
[0022] (14) print(254,[Pos(55,190),Color(161),Text("health")]);
[0033] (2C) InitCharset(2);
[0036] (AC) Exprmode Local[0] = ((Var[326] / 3) + 96);
[0045] (9A) Local[1] = Local[0];
[004A] (3F) drawBox(95,190,Local[0],196,0);
[0055] (AC) Exprmode Local[2] = (190 + 1);
[0060] (7F) drawBox(96,Local[2],Local[0],196,2);
[006B] (AC) Exprmode Local[3] = ((Var[332] / 3) + 96);
[007A] (9A) Local[4] = Local[3];
[007F] (3F) drawBox(95,180,Local[3],186,0);
[008A] (AC) Exprmode Local[2] = (180 + 1);
[0095] (7F) drawBox(96,Local[2],Local[3],186,9);
[00A0] (80) breakHere();
[00A1] (AC) Exprmode Local[0] = ((Var[326] / 3) + 96);
[00B0] (AC) Exprmode Local[3] = ((Var[332] / 3) + 96);
[00BF] (04) if (Local[0] <= 116) {
[00C6] (AC)   Exprmode Local[2] = (190 + 1);
[00D1] (7F)   drawBox(96,Local[2],Local[1],196,4);
[00DC] (28)   if (!Local[5]) {
[00E1] (4C)     soundKludge([268,37,0,4]);
[00EF] (4C)     soundKludge([-1]);
[00F4] (1A)     Local[5] = 1;
[00F9] (**)   }
[00F9] (04) } else if (Local[0] <= 136) {
[0103] (AC)   Exprmode Local[2] = (190 + 1);
[010E] (7F)   drawBox(96,Local[2],Local[1],196,14);
[0119] (28)   if (!Local[5]) {
[011E] (4C)     soundKludge([268,37,0,4]);
[012C] (4C)     soundKludge([-1]);
[0131] (1A)     Local[5] = 1;
[0136] (**)   }
[0136] (18) } else {
[0139] (AC)   Exprmode Local[2] = (190 + 1);
[0144] (7F)   drawBox(96,Local[2],Local[1],196,2);
[014F] (**) }
[014F] (F8) if (Local[0] < Local[1]) {
[0156] (AC)   Exprmode Var[442] = (Local[1] + 2);
[0161] (BF)   drawBox(Local[0],190,Var[442],196,0);
[016C] (**) }
[016C] (F8) if (Local[3] < Local[4]) {
[0173] (AC)   Exprmode Local[2] = (180 + 1);
[017E] (FF)   drawBox(Local[3],Local[2],Local[4],186,1);
[0189] (C4) } else if (Local[3] > Local[4]) {
[0193] (AC)   Exprmode Local[2] = (180 + 1);
[019E] (FF)   drawBox(Local[4],Local[2],Local[3],186,9);
[01A9] (**) }
[01A9] (9A) Local[1] = Local[0];
[01AE] (9A) Local[4] = Local[3];
[01B3] (18) goto 00A0;
[01B6] (A0) stopObjectCode();
END

// Script 51
[0000] (38) if (Var[320] >= 9) {
[0007] (04)   if (Var[320] <= 12) {
[000E] (16)     VAR_RESULT = getRandomNr(100);
[0012] (C4)     if (VAR_RESULT > Var[333]) {
[0019] (62)       stopScript(0);
[001B] (18)     } else {
[001E] (18)       goto 002E;
[0021] (**)     }
[0021] (**)   }
[0021] (**) }
[0021] (16) VAR_RESULT = getRandomNr(100);
[0025] (C4) if (VAR_RESULT > Var[328]) {
[002C] (62)   stopScript(0);
[002E] (**) }
[002E] (48) if (Var[319] == 9) {
[0035] (1A)   Var[320] = 6;
[003A] (D1)   animateCostume(Var[345],Var[320]);
[003F] (48) } else if (Var[319] == 10) {
[0049] (1A)   Var[320] = 7;
[004E] (D1)   animateCostume(Var[345],Var[320]);
[0053] (48) } else if (Var[319] == 11) {
[005D] (1A)   Var[320] = 8;
[0062] (D1)   animateCostume(Var[345],Var[320]);
[0067] (18)   /* goto 006A; */
[006A] (**) }
[006A] (62) stopScript(52);
[006C] (80) breakHere();
[006D] (80) breakHere();
[006E] (A0) stopObjectCode();
END

// Script 52
[0000] (1A) Var[320] = 0;
[0005] (44) if (Var[346] > 0) {
[000C] (AC)   Exprmode Local[0] = (<VAR_RESULT = getActorX(Var[345])> - <VAR_RESULT = getActorX(1)>);
[001D] (18) } else {
[0020] (AC)   Exprmode Local[0] = (<VAR_RESULT = getActorX(1)> - <VAR_RESULT = getActorX(Var[345])>);
[0031] (**) }
[0031] (44) if (Local[0] > 30) {
[0038] (1A)   Var[320] = 17;
[003D] (91)   animateCostume(Var[345],17);
[0041] (80)   breakHere();
[0042] (80)   breakHere();
[0043] (C3)   Local[2] = getActorX(Var[345]);
[0048] (A3)   Local[3] = getActorY(Var[345]);
[004D] (DA)   Local[2] += Var[347];
[0052] (F8)   if (Local[2] < Var[348]) {
[0059] (5A)     Local[2] += 8;
[005E] (**)   }
[005E] (C4)   if (Local[2] > Var[349]) {
[0065] (3A)     Local[2] -= 8;
[006A] (**)   }
[006A] (E1)   putActor(Var[345],Local[2],Local[3]);
[0071] (80)   breakHere();
[0072] (62)   stopScript(0);
[0074] (**) }
[0074] (16) Local[1] = getRandomNr(1);
[0078] (48) if (Var[319] == 6) {
[007F] (A8)   if (Local[1]) {
[0084] (1A)     Local[1] = 11;
[0089] (18)   } else {
[008C] (1A)     Local[1] = 10;
[0091] (**)   }
[0091] (48) } else if (Var[319] == 7) {
[009B] (A8)   if (Local[1]) {
[00A0] (1A)     Local[1] = 11;
[00A5] (18)   } else {
[00A8] (1A)     Local[1] = 9;
[00AD] (**)   }
[00AD] (48) } else if (Var[319] == 8) {
[00B7] (A8)   if (Local[1]) {
[00BC] (1A)     Local[1] = 9;
[00C1] (18)   } else {
[00C4] (1A)     Local[1] = 10;
[00C9] (**)   }
[00C9] (18) } else {
[00CC] (1A)   Local[1] = 9;
[00D1] (**) }
[00D1] (9A) Local[0] = Local[1];
[00D6] (3A) Local[0] -= 3;
[00DB] (D1) animateCostume(Var[345],Local[0]);
[00E0] (1A) Var[320] = 12;
[00E5] (2B) delayVariable(Var[327]);
[00E8] (9A) Var[320] = Local[1];
[00ED] (16) Var[442] = getRandomNr(1);
[00F1] (48) if (Local[1] == 9) {
[00F8] (28)   if (!Var[442]) {
[00FD] (91)     animateCostume(Var[345],9);
[0101] (18)   } else {
[0104] (91)     animateCostume(Var[345],21);
[0108] (**)   }
[0108] (48) } else if (Local[1] == 10) {
[0112] (28)   if (!Var[442]) {
[0117] (91)     animateCostume(Var[345],10);
[011B] (18)   } else {
[011E] (91)     animateCostume(Var[345],22);
[0122] (**)   }
[0122] (48) } else if (Local[1] == 11) {
[012C] (28)   if (!Var[442]) {
[0131] (91)     animateCostume(Var[345],11);
[0135] (18)   } else {
[0138] (91)     animateCostume(Var[345],23);
[013C] (**)   }
[013C] (18)   /* goto 013F; */
[013F] (**) }
[013F] (80) breakHere();
[0140] (0A) startScript(25,[]);
[0143] (A0) stopObjectCode();
END

// Script 53
[0000] (04) if (Var[322] <= 0) {
[0007] (1A)   Var[367] = 2;
[000C] (62)   stopScript(48);
[000E] (62)   stopScript(47);
[0010] (62)   stopScript(52);
[0012] (62)   stopScript(25);
[0014] (62)   stopScript(29);
[0016] (62)   stopScript(50);
[0018] (62)   stopScript(49);
[001A] (AC)   Exprmode Local[0] = ((Var[321] / 3) + 96);
[0029] (3F)   drawBox(95,165,Local[0],171,0);
[0034] (91)   animateCostume(Var[345],7);
[0038] (11)   animateCostume(1,18);
[003B] (80)   breakHere();
[003C] (3C)   stopSound(180);
[003E] (3C)   stopSound(200);
[0040] (4C)   soundKludge([263,37,2,5,0]);
[0051] (4C)   soundKludge([272]);
[0056] (4C)   soundKludge([-1]);
[005B] (4C)   soundKludge([270,37,0]);
[0066] (4C)   soundKludge([271,269,37,0,240]);
[0077] (4C)   soundKludge([271,-1]);
[007F] (4C)   soundKludge([-1]);
[0084] (1A)   Local[1] = 1;
[0089] (80)   breakHere();
[008A] (46)   Local[1]++;
[008D] (44)   unless (Local[1] > 7) goto 0089;
[0094] (2E)   delay(120);
[0098] (62)   stopScript(46);
[009A] (60)   freezeScripts(0);
[009C] (**) }
[009C] (A0) stopObjectCode();
END

// Script 54
[0000] (04) if (Var[326] <= 0) {
[0007] (1A)   Var[367] = 1;
[000C] (62)   stopScript(48);
[000E] (62)   stopScript(47);
[0010] (62)   stopScript(52);
[0012] (62)   stopScript(25);
[0014] (62)   stopScript(29);
[0016] (62)   stopScript(50);
[0018] (62)   stopScript(49);
[001A] (AC)   Exprmode Local[0] = ((Var[350] / 3) + 96);
[0029] (3F)   drawBox(95,190,Local[0],196,0);
[0034] (91)   animateCostume(Var[345],18);
[0038] (2C)   CursorHide();
[003A] (2C)   UserputOff();
[003C] (80)   breakHere();
[003D] (3C)   stopSound(180);
[003F] (3C)   stopSound(200);
[0041] (4C)   soundKludge([263,37,2,5,0]);
[0052] (4C)   soundKludge([272]);
[0057] (4C)   soundKludge([-1]);
[005C] (4C)   soundKludge([270,37,0]);
[0067] (4C)   soundKludge([271,269,37,0,240]);
[0078] (4C)   soundKludge([271,-1]);
[0080] (4C)   soundKludge([-1]);
[0085] (1A)   Local[1] = 1;
[008A] (80)   breakHere();
[008B] (46)   Local[1]++;
[008E] (44)   unless (Local[1] > 7) goto 008A;
[0095] (11)   animateCostume(1,7);
[0098] (80)   breakHere();
[0099] (F1)   VAR_RESULT = getActorCostume(Var[345]);
[009E] (48)   if (VAR_RESULT == 7) {
[00A5] (33)     ShakeOn();
[00A7] (2E)     delay(45);
[00AB] (33)     ShakeOff();
[00AD] (**)   }
[00AD] (2C)   CursorShow();
[00AF] (2C)   UserputOn();
[00B1] (62)   stopScript(46);
[00B3] (60)   freezeScripts(0);
[00B5] (**) }
[00B5] (A0) stopObjectCode();
END

// Script 57: Death
[0000] (40) cutscene([1]);
[0005] (33) screenEffect(257);
[0009] (33) SetScreen(0,200);
[000F] (33) ShakeOff();
[0011] (72) loadRoom(24);
[0013] (1A) VAR_MAINMENU_KEY = 0;
[0018] (4C) soundKludge([11]);
[001D] (4C) soundKludge([-1]);
[0022] (1C) startSound(39);
[0024] (80) breakHere();
[0025] (1A) VAR_VERB_SCRIPT = 58;
[002A] (0A) startScript(145,[]);
[002D] (2C) UserputOn();
[002F] (58) beginOverride();
[0031] (18) goto 0D0E;
[0034] (14) print(254,[Pos(0,0),Color(159)]);
[003E] (48) if (Local[0] == 1) {
[0045] (48)   if (Var[224] == 65) {
[004C] (14)     print(254,[Center(),Pos(115,8),Text("Indy's savage beating convinced")]);
[0075] (14)     print(254,[Center(),Pos(115,19),Text("Omar to cooperate with the Nazis.")]);
[00A0] (14)     print(254,[Center(),Pos(115,30),Text("Later he traded Indy's whip for")]);
[00C9] (14)     print(254,[Center(),Pos(115,41),Text("a clay pot.")]);
[00DE] (48)   } else if (Var[224] == 32) {
[00E8] (14)     print(254,[Center(),Pos(100,8),Text("After losing the fight, Indy")]);
[010E] (14)     print(254,[Center(),Pos(100,19),Text("was devoured by vultures")]);
[0130] (14)     print(254,[Center(),Pos(100,30),Text("and scorpions.")]);
[0148] (48)   } else if (Var[224] == 67) {
[0152] (14)     print(254,[Center(),Pos(100,8),Text("Rolf was easily fooled,")]);
[0173] (14)     print(254,[Center(),Pos(100,19),Text("but not so easily felled.")]);
[0196] (48)   } else if (Var[224] == 33) {
[01A0] (14)     print(254,[Center(),Pos(100,8),Text("Klaus dragged Indy into")]);
[01C1] (14)     print(254,[Center(),Pos(100,19),Text("the Labyrinth, where someday")]);
[01E7] (14)     print(254,[Center(),Pos(100,30),Text("someone will find the bones.")]);
[020D] (48)   } else if (Var[224] == 156) {
[0217] (14)     print(254,[Center(),Pos(115,8),Text("Hans turned Indy over to Kerner")]);
[0240] (14)     print(254,[Center(),Pos(115,19),Text("and was decorated for valor.")]);
[0266] (14)     print(254,[Center(),Pos(115,30),Text("Indy was shot on the spot.")]);
[028A] (48)   } else if (Var[224] == 166) {
[0294] (14)     print(254,[Center(),Pos(100,8),Text("Taking revenge for Hans, Franz")]);
[02BC] (14)     print(254,[Center(),Pos(100,19),Text("hurled Indy into a bottomless")]);
[02E3] (14)     print(254,[Center(),Pos(100,30),Text("pit, where his remains remain")]);
[030A] (14)     print(254,[Center(),Pos(100,41),Text("to this day.")]);
[0320] (48)   } else if (Var[224] == 155) {
[032A] (14)     print(254,[Center(),Pos(100,8),Text("Otto tried to hurl Indy into")]);
[0350] (14)     print(254,[Center(),Pos(100,19),Text("a bottomless pit, but tripped")]);
[0377] (14)     print(254,[Center(),Pos(100,30),Text("and fell in himself.  No one")]);
[039D] (14)     print(254,[Center(),Pos(100,41),Text("knows what happened to Indy.")]);
[03C3] (48)   } else if (Var[224] == 172) {
[03CD] (14)     print(254,[Center(),Pos(100,8),Text("Karl summoned his superiors,")]);
[03F3] (14)     print(254,[Center(),Pos(100,19),Text("who shot Indy on sight.")]);
[0414] (48)   } else if (Var[224] == 152) {
[041E] (14)     print(254,[Center(),Pos(100,8),Text("Kurt summoned his superiors,")]);
[0444] (14)     print(254,[Center(),Pos(100,19),Text("who interrogated Indy, then")]);
[0469] (14)     print(254,[Center(),Pos(100,30),Text("tortured and shot him.  But")]);
[048E] (14)     print(254,[Center(),Pos(100,41),Text("they never did find Atlantis.")]);
[04B5] (48)   } else if (Var[224] == 176) {
[04BF] (14)     print(254,[Center(),Pos(100,8),Text("After flattening Indy, Anton")]);
[04E5] (14)     print(254,[Center(),Pos(100,19),Text("received a field promotion.")]);
[050A] (14)     print(254,[Center(),Pos(100,30),Text("Later he led the charge")]);
[052B] (14)     print(254,[Center(),Pos(100,41),Text("on Stalingrad.")]);
[0543] (48)   } else if (Var[224] == 170) {
[054D] (14)     print(254,[Center(),Pos(100,8),Text("After flattening Indy,")]);
[056D] (14)     print(254,[Center(),Pos(100,19),Text("Arnold went on to become a")]);
[0591] (14)     print(254,[Center(),Pos(100,30),Text("world-famous opera singer.")]);
[05B5] (48)   } else if (Var[224] == 41) {
[05BF] (14)     print(254,[Center(),Pos(100,8),Text("Indy's failure to subdue a")]);
[05E3] (14)     print(254,[Center(),Pos(100,19),Text("sixty-year-old U-Boat captain")]);
[060A] (14)     print(254,[Center(),Pos(100,30),Text("allowed the Nazis to conquer")]);
[0630] (14)     print(254,[Center(),Pos(100,41),Text("the world.")]);
[0644] (48)   } else if (Var[224] == 221) {
[064E] (14)     print(254,[Center(),Pos(100,8),Text("Indy discovered Atlantis, but")]);
[0675] (14)     print(254,[Center(),Pos(100,19),Text("the Nazis won the race to")]);
[0698] (14)     print(254,[Center(),Pos(100,30),Text("unearth its secrets.")]);
[06B6] (48)   } else if (Var[224] == 97) {
[06C0] (14)     print(254,[Center(),Pos(100,8),Text("After defeating Indy, Fritz")]);
[06E5] (14)     print(254,[Center(),Pos(100,19),Text("boxed his way to a gold medal")]);
[070C] (14)     print(254,[Center(),Pos(100,30),Text("in the 1948 Olympic Games.")]);
[0730] (18)   } else {
[0733] (14)     print(254,[Center(),Pos(100,8),Text("Indy lost the fistfight and")]);
[0758] (14)     print(254,[Center(),Pos(100,19),Text("with it his chance to unearth")]);
[077F] (14)     print(254,[Center(),Pos(100,30),Text("the secrets of Atlantis.")]);
[07A1] (**)   }
[07A1] (48) } else if (Local[0] == 31) {
[07AB] (14)   print(254,[Center(),Pos(100,8),Text("Unfortunately, Indy couldn't")]);
[07D1] (14)   print(254,[Center(),Pos(100,19),Text("hold his breath as long as")]);
[07F5] (14)   print(254,[Center(),Pos(100,30),Text("Guybrush Threepwood.")]);
[0813] (48) } else if (Local[0] == 28) {
[081D] (14)   print(254,[Center(),Pos(100,8),Text("Indy was swallowed up just")]);
[0841] (14)   print(254,[Center(),Pos(100,19),Text("moments before discovering")]);
[0865] (14)   print(254,[Center(),Pos(100,30),Text("the final secret of Atlantis.")]);
[088C] (48) } else if (Local[0] == 24) {
[0896] (14)   print(254,[Center(),Pos(100,8),Text("Kerner recovered the stone")]);
[08BA] (14)   print(254,[Center(),Pos(100,19),Text("disks and blew himself up")]);
[08DD] (14)   print(254,[Center(),Pos(100,30),Text("tinkering with the orichalcum")]);
[0904] (14)   print(254,[Center(),Pos(100,41),Text("he found in Atlantis.")]);
[0923] (48) } else if (Local[0] == 29) {
[092D] (14)   print(254,[Center(),Pos(115,8),Text("After Indy's fatal transformation,")]);
[0959] (14)   print(254,[Center(),Pos(115,19),Text("Atlantis shook itself to pieces,")]);
[0983] (14)   print(254,[Center(),Pos(115,30),Text("sealing its secrets and the Nazis")]);
[09AE] (14)   print(254,[Center(),Pos(115,41),Text("in molten lava.")]);
[09C7] (48) } else if (Local[0] == 14) {
[09D1] (14)   print(254,[Center(),Pos(100,8),Text("Indy's overly reckless")]);
[09F1] (14)   print(254,[Center(),Pos(100,19),Text("behavior won Rolf a medal")]);
[0A14] (14)   print(254,[Center(),Pos(100,30),Text("for bravery.")]);
[0A2A] (48) } else if (Local[0] == 13) {
[0A34] (14)   print(254,[Center(),Pos(100,8),Text("Indy's overly passive")]);
[0A53] (14)   print(254,[Center(),Pos(100,19),Text("behavior won Rolf a medal")]);
[0A76] (14)   print(254,[Center(),Pos(100,30),Text("for personal initiative.")]);
[0A98] (48) } else if (Local[0] == 25) {
[0AA2] (14)   print(254,[Center(),Pos(100,8),Text("Because the sailors proved")]);
[0AC6] (14)   print(254,[Center(),Pos(100,19),Text("to be reasonably alert,")]);
[0AE7] (14)   print(254,[Center(),Pos(100,30),Text("Indy soon found himself")]);
[0B08] (14)   print(254,[Center(),Pos(100,41),Text("in deep, deep water.")]);
[0B26] (48) } else if (Local[0] == -26024) {
[0B30] (14)   print(254,[Center(),Pos(115,8),Text("Suddenly, Indy forgot everything")]);
[0B5A] (14)   print(254,[Center(),Pos(115,19),Text("he knew about handling a bullwhip")]);
[0B85] (14)   print(254,[Center(),Pos(115,30),Text("and flogged himself to death.")]);
[0BAC] (48) } else if (Local[0] == 23) {
[0BB6] (14)   print(254,[Center(),Pos(100,8),Text("With the stone disks in his")]);
[0BDB] (14)   print(254,[Center(),Pos(100,19),Text("possession, Kerner discovered")]);
[0C02] (14)   print(254,[Center(),Pos(100,30),Text("Atlantis and drowned.")]);
[0C21] (48) } else if (Local[0] == 32) {
[0C2B] (14)   print(254,[Center(),Pos(100,8),Text("Unfortunately,")]);
[0C43] (14)   print(254,[Center(),Pos(100,19),Text("Sophia's guard knew a")]);
[0C62] (14)   print(254,[Center(),Pos(100,30),Text("wise guy when he met one.")]);
[0C85] (18)   /* goto 0C88; */
[0C88] (**) }
[0C88] (80) breakHere();
[0C89] (80) breakHere();
[0C8A] (80) breakHere();
[0C8B] (80) breakHere();
[0C8C] (80) breakHere();
[0C8D] (80) breakHere();
[0C8E] (80) breakHere();
[0C8F] (80) breakHere();
[0C90] (80) breakHere();
[0C91] (80) breakHere();
[0C92] (80) breakHere();
[0C93] (80) breakHere();
[0C94] (80) breakHere();
[0C95] (80) breakHere();
[0C96] (80) breakHere();
[0C97] (80) breakHere();
[0C98] (80) breakHere();
[0C99] (80) breakHere();
[0C9A] (80) breakHere();
[0C9B] (80) breakHere();
[0C9C] (14) print(254,[Color(99),Left(),Pos(130,66),Text("Indy Quotient^")]);
[0CB6] (14) print(254,[Color(99),Left(),Pos(135,77),Text("current: " + getInt(Var[450]))]);
[0CCF] (14) print(254,[Color(99),Left(),Pos(150,88),Text("total: " + getInt(Var[451]))]);
[0CE6] (4C) soundKludge([256,39,7]);
[0CF1] (4C) soundKludge([-1]);
[0CF6] (44) if (VAR_SOUNDRESULT > 102) {
[0CFD] (4C)   soundKludge([8,39]);
[0D05] (4C)   soundKludge([-1]);
[0D0A] (**) }
[0D0A] (80) breakHere();
[0D0B] (18) goto 0CE6;
[0D0E] (98) systemOps(1);
[0D10] (C0) endCutscene();
[0D11] (A0) stopObjectCode();
END

// Script 58
[0000] (48) if (Local[0] == 4) {
[0007] (0A)   startScript(22,[Local[1]]);
[000D] (**) }
[000D] (A0) stopObjectCode();
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

// Script 62: Open a Door
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
[0040] (D8)     printEgo([Text("Hmm.  This door appears to be locked.")]);
[0068] (**)   }
[0068] (18) } else {
[006B] (D8)   printEgo([Text("It's already\x10open.")]);
[0080] (**) }
[0080] (A0) stopObjectCode();
END

// Script 63: Close a Door
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
[0037] (D8)   printEgo([Text("It's already\x10closed.")]);
[004E] (**) }
[004E] (A0) stopObjectCode();
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

// Script 72
[0000] (0C) Resource.loadSound(200);
[0003] (1C) startSound(200);
[0005] (4C) soundKludge([257,200,60]);
[0010] (4C) soundKludge([-1]);
[0015] (4C) soundKludge([258,200,60]);
[0020] (0C) Resource.loadSound(180);
[0023] (1C) startSound(180);
[0025] (4C) soundKludge([257,180,60]);
[0030] (4C) soundKludge([-1]);
[0035] (4C) soundKludge([258,180,60]);
[0040] (0C) Resource.lockSound(204);
[0043] (0C) Resource.loadSound(204);
[0046] (1C) startSound(37);
[0048] (4C) soundKludge([-1]);
[004D] (1A) VAR_TIMER_NEXT = 6;
[0052] (28) if (!Local[6]) {
[0057] (0A)   startScript(76,[1,Local[0]]);
[0060] (80)   breakHere();
[0061] (68)   VAR_RESULT = isScriptRunning(76);
[0065] (28)   unless (!VAR_RESULT) goto 0060;
[006A] (**) }
[006A] (A8) if (Local[5]) {
[006F] (0A)   startScript(83,[1]);
[0075] (**) }
[0075] (1A) Bit[106] = 0;
[007A] (1A) VAR_MAINMENU_KEY = 0;
[007F] (1A) VAR_CUTSCENEEXIT_KEY = 0;
[0084] (0A) startScript(19,[1]);
[008A] (7A) VerbOps(51,[Dim()]);
[008E] (68) VAR_RESULT = isScriptRunning(75);
[0092] (A8) if (VAR_RESULT) {
[0097] (62)   stopScript(75);
[0099] (**) }
[0099] (43) Var[351] = getActorX(1);
[009E] (AC) Exprmode Var[442] = (Local[2] - Local[3]);
[00A9] (78) if (Var[442] < 0) {
[00B0] (1B)   Var[442] *= -1;
[00B5] (**) }
[00B5] (78) if (Var[442] < 320) {
[00BC] (AC)   Exprmode Var[443] = (VAR_CAMERA_POS_X - Var[351]);
[00C7] (78)   if (Var[443] < 0) {
[00CE] (AC)     Exprmode Var[443] = (0 - Var[443]);
[00D9] (**)   }
[00D9] (44)   if (Var[443] > 32) {
[00E0] (92)     panCameraTo(Var[351]);
[00E3] (AE)     WaitForCamera();
[00E5] (**)   }
[00E5] (18) } else {
[00E8] (52)   actorFollowCamera(1);
[00EA] (AE)   WaitForCamera();
[00EC] (**) }
[00EC] (71) Local[7] = getActorCostume(1);
[00F0] (F1) Local[8] = getActorCostume(Local[0]);
[00F5] (03) VAR_RESULT = getActorRoom(1);
[00F9] (08) if (VAR_RESULT != 10) {
[0100] (13)   ActorOps(1,[Costume(3)]);
[0105] (18) } else {
[0108] (13)   ActorOps(1,[Costume(145)]);
[010D] (**) }
[010D] (93) ActorOps(Local[0],[Costume(Local[1])]);
[0114] (C4) if (Local[2] > Local[3]) {
[011B] (9A)   Var[349] = Local[2];
[0120] (9A)   Var[348] = Local[3];
[0125] (18) } else {
[0128] (9A)   Var[349] = Local[3];
[012D] (9A)   Var[348] = Local[2];
[0132] (**) }
[0132] (28) if (!Bit[108]) {
[0137] (1A)   Var[326] = 300;
[013C] (1A)   Var[327] = 40;
[0141] (1A)   Var[328] = 10;
[0146] (1A)   Var[329] = 10;
[014B] (1A)   Var[330] = 50;
[0150] (1A)   Var[333] = 10;
[0155] (1A)   Var[334] = 8;
[015A] (1A)   Var[335] = 50;
[015F] (1A)   Var[337] = 90;
[0164] (1A)   Var[336] = 1;
[0169] (9A)   Var[338] = Var[323];
[016E] (9A)   Var[339] = Var[324];
[0173] (9A)   Var[342] = Var[325];
[0178] (18) } else {
[017B] (1A)   Bit[108] = 0;
[0180] (**) }
[0180] (9A) Var[340] = Var[338];
[0185] (9A) Var[341] = Var[339];
[018A] (9A) Var[331] = Var[329];
[018F] (9A) Var[332] = Var[330];
[0194] (1A) Var[367] = 0;
[0199] (9A) Var[448] = VAR_VERB_SCRIPT;
[019E] (1A) VAR_VERB_SCRIPT = 24;
[01A3] (9A) Var[350] = Var[326];
[01A8] (A8) if (Bit[107]) {
[01AD] (2C)   CursorShow();
[01AF] (18) } else {
[01B2] (2C)   CursorHide();
[01B4] (**) }
[01B4] (0A) startScript(46,[Local[0],1,0]);
[01C0] (80) breakHere();
[01C1] (68) VAR_RESULT = isScriptRunning(46);
[01C5] (28) unless (!VAR_RESULT) goto 01C0;
[01CA] (7A) VerbOps(51,[Dim()]);
[01CE] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[01D3] (1A) VAR_TIMER_NEXT = 6;
[01D8] (3C) stopSound(200);
[01DA] (3C) stopSound(180);
[01DC] (0C) Resource.unlockSound(204);
[01DF] (28) if (!Bit[107]) {
[01E4] (2C)   CursorShow();
[01E6] (**) }
[01E6] (48) if (Var[367] == 1) {
[01ED] (48) } else if (Var[367] == 3) {
[01F7] (3C)   stopSound(37);
[01F9] (A8)   if (Local[4]) {
[01FE] (0A)     startScript(19,[2]);
[0204] (0A)     startScript(75,[]);
[0207] (9A)     VAR_VERB_SCRIPT = Var[448];
[020C] (2C)     CursorShow();
[020E] (0A)     startScript(13,[]);
[0211] (0A)     startScript(14,[]);
[0214] (80)     breakHere();
[0215] (93)     ActorOps(VAR_EGO,[Costume(Local[7])]);
[021C] (C2)     chainScript(Local[4],[]);
[0220] (18)   } else {
[0223] (40)     cutscene([2]);
[0228] (13)     ActorOps(1,[Costume(Local[7])]);
[022E] (93)     ActorOps(Local[0],[Costume(Local[8])]);
[0235] (9A)     Var[442] = VAR_CAMERA_POS_X;
[023A] (B2)     setCameraAt(Var[442]);
[023D] (C0)     endCutscene();
[023E] (**)   }
[023E] (48) } else if (Var[367] == 2) {
[0248] (48)   if (VAR_ROOM == 10) {
[024F] (93)     ActorOps(Local[0],[Costume(Local[8])]);
[0256] (18)   } else {
[0259] (42)     chainScript(57,[1]);
[025F] (**)   }
[025F] (18)   /* goto 0262; */
[0262] (**) }
[0262] (0A) startScript(19,[2]);
[0268] (62) stopScript(59);
[026A] (0A) startScript(75,[]);
[026D] (9A) VAR_VERB_SCRIPT = Var[448];
[0272] (0A) startScript(13,[]);
[0275] (08) if (VAR_ROOM != 10) {
[027C] (13)   ActorOps(1,[Costume(Local[7])]);
[0282] (**) }
[0282] (D2) actorFollowCamera(VAR_EGO);
[0285] (0A) startScript(59,[]);
[0288] (A0) stopObjectCode();
END

// Script 74
[0000] (40) cutscene([]);
[0002] (2C) InitCharset(1);
[0005] (33) SetScreen(0,200);
[000B] (72) loadRoom(68);
[000D] (33) RoomIntensity(0,16,255);
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (80) breakHere();
[0015] (80) breakHere();
[0016] (80) breakHere();
[0017] (80) breakHere();
[0018] (80) breakHere();
[0019] (80) breakHere();
[001A] (1A) VAR_TIMER_NEXT = 0;
[001F] (72) loadRoom(68);
[0021] (1A) VAR_RESTART_KEY = 322;
[0026] (1C) startSound(150);
[0028] (33) RoomIntensity(0,16,255);
[002D] (1A) VAR_TMR_1 = 0;
[0032] (80) breakHere();
[0033] (05) drawObject(939);
[0037] (80) breakHere();
[0038] (9A) VAR_MACHINE_SPEED = VAR_TMR_1;
[003D] (1A) VAR_TIMER_NEXT = 6;
[0042] (1A) VAR_TIMER_NEXT = 3;
[0047] (58) beginOverride();
[0049] (18) goto 006F;
[004C] (1A) Local[0] = 1;
[0051] (33) RoomIntensity(Local[0],16,255);
[0057] (5A) Local[0] += 7;
[005C] (16) Local[1] = getRandomNr(255);
[0060] (80) breakHere();
[0061] (46) Local[0]++;
[0064] (44) unless (Local[0] > 256) goto 0051;
[006B] (2E) delay(480);
[006F] (1A) VAR_TIMER_NEXT = 6;
[0074] (16) Var[369] = getRandomNr(2);
[0078] (72) loadRoom(0);
[007A] (14) print(255,[Pos(160,8),Center(),Overhead()]);
[0084] (33) SetScreen(0,144);
[008A] (C0) endCutscene();
[008B] (A0) stopObjectCode();
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


// Script 76
[0000] (A3) Var[442] = getActorY(Local[0]);
[0005] (A3) Local[4] = getActorY(Local[1]);
[000A] (88) if (Var[442] != Local[4]) {
[0011] (C3)   Local[2] = getActorX(Local[0]);
[0016] (C3)   Local[3] = getActorX(Local[1]);
[001B] (AC)   Exprmode Local[7] = (Local[2] - Local[3]);
[0026] (78)   if (Local[7] < 0) {
[002D] (1B)     Local[7] *= -1;
[0032] (**)   }
[0032] (EC)   Local[5] = getActorWidth(Local[0]);
[0037] (EC)   Local[6] = getActorWidth(Local[1]);
[003C] (5B)   Local[5] /= 2;
[0041] (5B)   Local[6] /= 2;
[0046] (F8)   if (Local[2] < Local[3]) {
[004D] (3A)     Local[2] -= 10;
[0052] (5A)     Local[3] += 10;
[0057] (18)   } else {
[005A] (5A)     Local[2] += 10;
[005F] (3A)     Local[3] -= 10;
[0064] (**)   }
[0064] (AC)   Exprmode Local[4] = ((Local[4] + Var[442]) / 2);
[0073] (AC)   Exprmode Var[442] = (Local[4] + 1);
[007E] (C8)   if (Local[0] == VAR_EGO) {
[0085] (FE)     walkActorTo(Local[0],Local[2],Var[442]);
[008C] (FE)     walkActorTo(Local[1],Local[3],Local[4]);
[0093] (18)   } else {
[0096] (FE)     walkActorTo(Local[0],Local[2],Local[4]);
[009D] (FE)     walkActorTo(Local[1],Local[3],Var[442]);
[00A4] (**)   }
[00A4] (AE)   WaitForActor(Local[0]);
[00A8] (AE)   WaitForActor(Local[1]);
[00AC] (**) }
[00AC] (C9) faceActor(Local[0],Local[1]);
[00B1] (80) breakHere();
[00B2] (80) breakHere();
[00B3] (C9) faceActor(Local[1],Local[0]);
[00B8] (80) breakHere();
[00B9] (80) breakHere();
[00BA] (A0) stopObjectCode();
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
[0007] (14)   print(255,[Color(15),Pos(170,16),Text("I can't do that!")]);
[0022] (18) } else {
[0025] (40)   cutscene([2]);
[002A] (48)   if (VAR_ROOM == 97) {
[0031] (7B)     VAR_RESULT = getActorWalkBox(1);
[0035] (44)     if (VAR_RESULT > 19) {
[003C] (7B)       VAR_RESULT = getActorWalkBox(1);
[0040] (78)       if (VAR_RESULT < 22) {
[0047] (18)         goto 0087;
[004A] (**)       }
[004A] (**)     }
[004A] (**)   }
[004A] (48)   if (VAR_ROOM == 82) {
[0051] (D8)     printEgo([Text("I can't do that\x10here.")]);
[0069] (18)   } else {
[006C] (48)     if (VAR_ROOM == 41) {
[0073] (48)     } else if (VAR_ROOM == 39) {
[007D] (18)     } else {
[0080] (48)       unless (VAR_ROOM == 40) goto 00B7;
[0087] (**)     }
[0087] (D8)     printEgo([Text("I don't think it's a good time to do\x10that.")]);
[00B4] (18)     goto 0BB7;
[00B7] (48)     if (VAR_ROOM == 45) {
[00BE] (14)       print(255,[Color(15),Pos(170,16),Text("I can't do that\x10now!")]);
[00DD] (18)     } else {
[00E0] (3C)       stopSound(134);
[00E2] (1C)       startSound(134);
[00E4] (0A)       startScript(192,[]);
[00E7] (80)       breakHere();
[00E8] (68)       VAR_RESULT = isScriptRunning(192);
[00EC] (28)       unless (!VAR_RESULT) goto 00E7;
[00F1] (38)       if (VAR_ROOM >= 226) {
[00F8] (04)         if (VAR_ROOM <= 231) {
[00FF] (A8)           if (Bit[543]) {
[0104] (11)             animateCostume(9,255);
[0107] (A8)             if (Bit[544]) {
[010C] (11)               animateCostume(2,255);
[010F] (**)             }
[010F] (**)           }
[010F] (**)         }
[010F] (**)       }
[010F] (48)       if (VAR_ROOM == 169) {
[0116] (7B)         VAR_RESULT = getActorWalkBox(1);
[011A] (48)         if (VAR_RESULT == 5) {
[0121] (1E)           walkActorTo(1,79,130);
[0127] (AE)           WaitForActor(1);
[012A] (11)           animateCostume(1,248);
[012D] (80)           breakHere();
[012E] (**)         }
[012E] (**)       }
[012E] (63)       VAR_RESULT = getActorFacing(1);
[0132] (48)       if (VAR_RESULT == 3) {
[0139] (11)         animateCostume(1,248);
[013C] (**)       }
[013C] (63)       VAR_RESULT = getActorFacing(1);
[0140] (48)       if (VAR_RESULT == 2) {
[0147] (11)         animateCostume(1,249);
[014A] (**)       }
[014A] (80)       breakHere();
[014B] (13)       ActorOps(1,[Costume(171)]);
[0150] (48)       if (Var[238] == 2) {
[0157] (13)         ActorOps(3,[Init(),Costume(173)]);
[015D] (18)       } else {
[0160] (13)         ActorOps(3,[Init(),Costume(172)]);
[0166] (**)       }
[0166] (43)       Local[2] = getActorX(1);
[016B] (23)       Local[3] = getActorY(1);
[0170] (11)       animateCostume(1,6);
[0173] (80)       breakHere();
[0174] (80)       breakHere();
[0175] (80)       breakHere();
[0176] (80)       breakHere();
[0177] (80)       breakHere();
[0178] (80)       breakHere();
[0179] (6D)       putActorInRoom(3,VAR_ROOM);
[017D] (61)       putActor(3,Local[2],Local[3]);
[0183] (63)       VAR_RESULT = getActorFacing(1);
[0187] (48)       if (VAR_RESULT == 0) {
[018E] (1A)         Local[4] = 1;
[0193] (11)         animateCostume(3,248);
[0196] (18)       } else {
[0199] (11)         animateCostume(3,249);
[019C] (**)       }
[019C] (11)       animateCostume(3,6);
[019F] (80)       breakHere();
[01A0] (80)       breakHere();
[01A1] (80)       breakHere();
[01A2] (80)       breakHere();
[01A3] (80)       breakHere();
[01A4] (80)       breakHere();
[01A5] (80)       breakHere();
[01A6] (11)       animateCostume(1,7);
[01A9] (80)       breakHere();
[01AA] (80)       breakHere();
[01AB] (80)       breakHere();
[01AC] (80)       breakHere();
[01AD] (80)       breakHere();
[01AE] (80)       breakHere();
[01AF] (80)       breakHere();
[01B0] (80)       breakHere();
[01B1] (80)       breakHere();
[01B2] (10)       VAR_RESULT = getObjectOwner(933);
[01B7] (C8)       if (VAR_RESULT == VAR_EGO) {
[01BE] (1D)         if (classOfIs(933,[146])) {
[01C7] (1D)           if (classOfIs(830,[6])) {
[01D0] (18)             goto 0AA0;
[01D3] (**)           }
[01D3] (18)         } else {
[01D6] (18)           goto 0AA0;
[01D9] (**)         }
[01D9] (**)       }
[01D9] (10)       VAR_RESULT = getObjectOwner(938);
[01DE] (C8)       if (VAR_RESULT == VAR_EGO) {
[01E5] (1D)         if (classOfIs(938,[146])) {
[01EE] (1D)           if (classOfIs(830,[6])) {
[01F7] (18)             goto 0AA0;
[01FA] (**)           }
[01FA] (18)         } else {
[01FD] (18)           goto 0AA0;
[0200] (**)         }
[0200] (**)       }
[0200] (48)       if (VAR_EGO == 1) {
[0207] (03)         VAR_RESULT = getActorRoom(2);
[020B] (C8)         if (VAR_RESULT == VAR_ROOM) {
[0212] (A8)           if (Var[230]) {
[0217] (18)             goto 0B06;
[021A] (**)           }
[021A] (10)           VAR_RESULT = getObjectOwner(938);
[021F] (48)           if (VAR_RESULT == 2) {
[0226] (1D)             if (classOfIs(938,[146])) {
[022F] (1D)               if (classOfIs(830,[6])) {
[0238] (18)                 goto 0B06;
[023B] (**)               }
[023B] (18)             } else {
[023E] (18)               goto 0B06;
[0241] (**)             }
[0241] (**)           }
[0241] (**)         }
[0241] (**)       }
[0241] (48)       if (VAR_EGO == 2) {
[0248] (1D)         if (classOfIs(938,[146])) {
[0251] (1D)           if (classOfIs(830,[6])) {
[025A] (18)             goto 0AE1;
[025D] (**)           }
[025D] (18)         } else {
[0260] (18)           goto 0AE1;
[0263] (**)         }
[0263] (03)         VAR_RESULT = getActorRoom(1);
[0267] (C8)         if (VAR_RESULT == VAR_ROOM) {
[026E] (A8)           if (Var[229]) {
[0273] (18)             goto 0AE1;
[0276] (**)           }
[0276] (**)         }
[0276] (**)       }
[0276] (48)       if (VAR_ROOM == 36) {
[027D] (1D)         if (classOfIs(409,[146])) {
[0286] (0A)           startScript(135,[409,Local[2],Local[3],Local[4],1]);
[0298] (80)           breakHere();
[0299] (68)           VAR_RESULT = isScriptRunning(135);
[029D] (28)           unless (!VAR_RESULT) goto 0298;
[02A2] (5D)           setClass(1012,[6]);
[02A9] (D8)           printEgo([Text("It's pointing at the dish at the bottom of the\x10machine!")]);
[02E3] (18)           goto 0B92;
[02E6] (**)         }
[02E6] (18)         goto 09FD;
[02E9] (48)       } else if (VAR_ROOM == 53) {
[02F3] (1D)         if (classOfIs(714,[32])) {
[02FC] (0A)           startScript(135,[714,Local[2],Local[3],Local[4],1,1]);
[0311] (80)           breakHere();
[0312] (68)           VAR_RESULT = isScriptRunning(135);
[0316] (28)           unless (!VAR_RESULT) goto 0311;
[031B] (5D)           setClass(1012,[6]);
[0322] (D8)           printEgo([Text("It's pointing at that bead on the\x10floor!")]);
[034D] (18)           goto 0B92;
[0350] (**)         }
[0350] (18)         goto 09FD;
[0353] (48)       } else if (VAR_ROOM == 146) {
[035D] (1D)         if (classOfIs(623,[26])) {
[0366] (0A)           startScript(135,[623,Local[2],Local[3],Local[4],1,1]);
[037B] (80)           breakHere();
[037C] (68)           VAR_RESULT = isScriptRunning(135);
[0380] (28)           unless (!VAR_RESULT) goto 037B;
[0385] (5D)           setClass(1012,[6]);
[038C] (D8)           printEgo([Text("It's pointing at one of those piles of bones on the\x10floor.")]);
[03C9] (18)           goto 0B92;
[03CC] (**)         }
[03CC] (18)         goto 09FD;
[03CF] (48)       } else if (VAR_ROOM == 60) {
[03D9] (10)         VAR_RESULT = getObjectOwner(830);
[03DE] (08)         if (VAR_RESULT != 1) {
[03E5] (0A)           startScript(135,[830,Local[2],Local[3],Local[4],1,4]);
[03FA] (80)           breakHere();
[03FB] (68)           VAR_RESULT = isScriptRunning(135);
[03FF] (28)           unless (!VAR_RESULT) goto 03FA;
[0404] (5D)           setClass(1012,[6]);
[040B] (D8)           printEgo([Text("It's pointing at that gold\x10box!")]);
[042D] (AE)           WaitForMessage();
[042F] (18)           goto 0B92;
[0432] (**)         }
[0432] (18)         goto 09FD;
[0435] (48)       } else if (VAR_ROOM == 159) {
[043F] (0A)         startScript(135,[645,Local[2],Local[3],Local[4],1,4]);
[0454] (80)         breakHere();
[0455] (68)         VAR_RESULT = isScriptRunning(135);
[0459] (28)         unless (!VAR_RESULT) goto 0454;
[045E] (5D)         setClass(1012,[6]);
[0465] (1D)         if (classOfIs(621,[146])) {
[046E] (0A)           startScript(144,[109]);
[0474] (D8)           printEgo([Text("It's pointing toward that wall on the\x10right!")]);
[04A3] (5D)           setClass(645,[32,154]);
[04AD] (18)         } else {
[04B0] (D8)           printEgo([Text("It's pointing toward that door in the\x10back.")]);
[04DE] (**)         }
[04DE] (18)         goto 0B92;
[04E1] (48)       } else if (VAR_ROOM == 160) {
[04EB] (5D)         setClass(1012,[6]);
[04F2] (1D)         if (classOfIs(621,[146])) {
[04FB] (18)           goto 09FD;
[04FE] (18)         } else {
[0501] (0A)           startScript(135,[621,Local[2],Local[3],Local[4],1,1]);
[0516] (80)           breakHere();
[0517] (68)           VAR_RESULT = isScriptRunning(135);
[051B] (28)           unless (!VAR_RESULT) goto 0516;
[0520] (D8)           printEgo([Text("It's pointing at those bones on the\x10floor.")]);
[054D] (**)         }
[054D] (18)         goto 0B92;
[0550] (C8)       } else if (VAR_ROOM == Var[411]) {
[055A] (0A)         startScript(192,[]);
[055D] (80)         breakHere();
[055E] (68)         VAR_RESULT = isScriptRunning(192);
[0562] (28)         unless (!VAR_RESULT) goto 055D;
[0567] (5D)         setClass(1012,[6]);
[056E] (11)         animateCostume(3,9);
[0571] (80)         breakHere();
[0572] (80)         breakHere();
[0573] (11)         animateCostume(3,13);
[0576] (4C)         soundKludge([268,134,0,5]);
[0584] (48)         if (Var[411] == 176) {
[058B] (1A)           Local[1] = 691;
[0590] (48)         } else if (Var[411] == 172) {
[059A] (1A)           Local[1] = 693;
[059F] (48)         } else if (Var[411] == 164) {
[05A9] (1A)           Local[1] = 694;
[05AE] (48)         } else if (Var[411] == 170) {
[05B8] (1A)           Local[1] = 693;
[05BD] (48)         } else if (Var[411] == 155) {
[05C7] (1A)           Local[1] = 646;
[05CC] (18)           /* goto 05CF; */
[05CF] (**)         }
[05CF] (9D)         if (classOfIs(Local[1],[160])) {
[05D8] (0A)           startScript(144,[86,10]);
[05E1] (D8)           printEgo([Text("That's funny, it's pointing\x10downward.")]);
[0609] (DD)           setClass(Local[1],[32,141,146,6]);
[0619] (18)         } else {
[061C] (D8)           printEgo([Text("It's still pointing\x10downward.")]);
[063C] (**)         }
[063C] (AE)         WaitForMessage();
[063E] (18)         goto 0B92;
[0641] (48)       } else if (VAR_ROOM == 157) {
[064B] (48)         if (Var[412] == 1) {
[0652] (1D)           if (classOfIs(623,[26])) {
[065B] (5D)             setClass(1012,[6]);
[0662] (0A)             startScript(135,[647,Local[2],Local[3],Local[4],1,2]);
[0677] (80)             breakHere();
[0678] (68)             VAR_RESULT = isScriptRunning(135);
[067C] (28)             unless (!VAR_RESULT) goto 0677;
[0681] (1D)             if (classOfIs(647,[134])) {
[068A] (D8)               printEgo([Text("Hmmm^it's pointing toward that blank wall in the\x10back.")]);
[06C3] (5D)               setClass(647,[32,154]);
[06CD] (18)             } else {
[06D0] (D8)               printEgo([Text("It's pointing toward that door in the back of the\x10room.")]);
[070A] (**)             }
[070A] (18)             goto 0B92;
[070D] (**)           }
[070D] (**)         }
[070D] (18)         goto 09FD;
[0710] (48)       } else if (VAR_ROOM == 162) {
[071A] (1D)         if (classOfIs(621,[26])) {
[0723] (5D)           setClass(1012,[6]);
[072A] (0A)           startScript(135,[685,Local[2],Local[3],Local[4],0,4]);
[073F] (80)           breakHere();
[0740] (68)           VAR_RESULT = isScriptRunning(135);
[0744] (28)           unless (!VAR_RESULT) goto 073F;
[0749] (D8)           printEgo([Text("It's pointing towards that door on the right.")]);
[0779] (18)           goto 0B92;
[077C] (1D)         } else if (classOfIs(714,[32])) {
[0788] (5D)           setClass(1012,[6]);
[078F] (0A)           startScript(135,[695,Local[2],Local[3],Local[4],1,2]);
[07A4] (80)           breakHere();
[07A5] (68)           VAR_RESULT = isScriptRunning(135);
[07A9] (28)           unless (!VAR_RESULT) goto 07A4;
[07AE] (1D)           if (classOfIs(695,[134])) {
[07B7] (D8)             printEgo([Text("Hmmm^it's pointing towards that blank wall in the\x10back.")]);
[07F1] (5D)             setClass(695,[32,154]);
[07FB] (0A)             startScript(144,[109,9]);
[0804] (18)           } else {
[0807] (D8)             printEgo([Text("It's pointing toward that door in the back of the\x10room.")]);
[0841] (**)           }
[0841] (18)           goto 0B92;
[0844] (**)         }
[0844] (18)         goto 09FD;
[0847] (48)       } else if (VAR_ROOM == 171) {
[0851] (48)         if (Var[412] == 2) {
[0858] (1D)           if (classOfIs(623,[26])) {
[0861] (5D)             setClass(1012,[6]);
[0868] (0A)             startScript(135,[695,Local[2],Local[3],Local[4],1,2]);
[087D] (80)             breakHere();
[087E] (68)             VAR_RESULT = isScriptRunning(135);
[0882] (28)             unless (!VAR_RESULT) goto 087D;
[0887] (1D)             if (classOfIs(695,[134])) {
[0890] (0A)               startScript(144,[49,10]);
[0899] (D8)               printEgo([Text("Hmmm^it's pointing towards that blank wall in the\x10back.")]);
[08D3] (5D)               setClass(695,[32,154]);
[08DD] (18)             } else {
[08E0] (D8)               printEgo([Text("It's pointing toward that door in the back of the\x10room.")]);
[091A] (**)             }
[091A] (18)             goto 0B92;
[091D] (**)           }
[091D] (**)         }
[091D] (18)         goto 09FD;
[0920] (48)       } else if (VAR_ROOM == 174) {
[092A] (48)         if (Var[412] == 3) {
[0931] (1D)           if (classOfIs(623,[26])) {
[093A] (5D)             setClass(1012,[6]);
[0941] (0A)             startScript(135,[695,Local[2],Local[3],Local[4],1,2]);
[0956] (80)             breakHere();
[0957] (68)             VAR_RESULT = isScriptRunning(135);
[095B] (28)             unless (!VAR_RESULT) goto 0956;
[0960] (1D)             if (classOfIs(695,[134])) {
[0969] (0A)               startScript(144,[49,10]);
[0972] (D8)               printEgo([Text("Hmmm^it's pointing towards that blank wall in the back.")]);
[09AC] (5D)               setClass(695,[32,154]);
[09B6] (18)             } else {
[09B9] (D8)               printEgo([Text("It's pointing towards that door in the back of the room.")]);
[09F4] (**)             }
[09F4] (18)             goto 0B92;
[09F7] (**)           }
[09F7] (**)         }
[09F7] (18)         goto 09FD;
[09FA] (18)       } else {
[09FD] (1A)         Local[0] = 1;
[0A02] (11)         animateCostume(3,16);
[0A05] (1D)         if (classOfIs(1012,[6])) {
[0A0E] (1D)           if (classOfIs(1012,[18])) {
[0A17] (5D)             setClass(1012,[146]);
[0A1E] (D8)             printEgo([Text("It's not pointing\x10anywhere." + wait() + "There must not be any orichalcum\x10nearby.")]);
[0A66] (18)           } else {
[0A6C] (18)             goto 0A8D;
[0A6F] (**)           }
[0A6F] (**)         }
[0A6F] (D8)         printEgo([Text("It's not pointing anywhere.")]);
[0A8D] (4C)         soundKludge([268,134,0,4]);
[0A9B] (AE)         WaitForMessage();
[0A9D] (18)       } else {
[0AA0] (0A)         startScript(135,[1,Local[2],Local[3],Local[4]]);
[0AAF] (80)         breakHere();
[0AB0] (68)         VAR_RESULT = isScriptRunning(135);
[0AB4] (28)         unless (!VAR_RESULT) goto 0AAF;
[0AB9] (5D)         setClass(1012,[6]);
[0AC0] (D8)         printEgo([Text("Why, it's pointing at me!")]);
[0ADC] (AE)         WaitForMessage();
[0ADE] (18)         goto 0B92;
[0AE1] (D8)         printEgo([Text("It's pointing at Indy!")]);
[0AFA] (5D)         setClass(1012,[6]);
[0B01] (AE)         WaitForMessage();
[0B03] (18)         goto 0B92;
[0B06] (0A)         startScript(135,[2,Local[2],Local[3],Local[4]]);
[0B15] (80)         breakHere();
[0B16] (68)         VAR_RESULT = isScriptRunning(135);
[0B1A] (28)         unless (!VAR_RESULT) goto 0B15;
[0B1F] (5D)         setClass(1012,[6]);
[0B26] (D8)         printEgo([Text("It's pointing at Sophia's necklace!")]);
[0B4C] (1A)         Bit[26] = 1;
[0B51] (AE)         WaitForMessage();
[0B53] (48)         if (Bit[28] == 0) {
[0B5A] (1A)           Bit[28] = 1;
[0B5F] (14)           print(2,[Text("It must be detecting the orichalcum\x10residue.")]);
[0B8F] (**)         }
[0B8F] (18)         /* goto 0B92; */
[0B92] (**)       }
[0B92] (AE)       WaitForMessage();
[0B94] (11)       animateCostume(3,15);
[0B97] (80)       breakHere();
[0B98] (80)       breakHere();
[0B99] (80)       breakHere();
[0B9A] (11)       animateCostume(1,8);
[0B9D] (2D)       putActorInRoom(3,0);
[0BA0] (80)       breakHere();
[0BA1] (80)       breakHere();
[0BA2] (80)       breakHere();
[0BA3] (80)       breakHere();
[0BA4] (80)       breakHere();
[0BA5] (13)       ActorOps(1,[Costume(2)]);
[0BAA] (11)       animateCostume(1,3);
[0BAD] (48)       if (Var[238] == 2) {
[0BB4] (0A)         startScript(165,[]);
[0BB7] (**)       }
[0BB7] (**)     }
[0BB7] (**)   }
[0BB7] (C0)   endCutscene();
[0BB8] (**) }
[0BB8] (A0) stopObjectCode();
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

// Script 99
[0000] (A0) stopObjectCode();
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
[001F] (1A)     VAR_MAINMENU_KEY = 0;
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

// Script 142: Comb on a String Charged
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
[0007] (78)   if (Local[0] < 153) {
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

// Script 145
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
[005F] (44) unless (Local[0] > 153) goto 001C;
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

// Script 151
[0000] (2E) delay(7200);
[0004] (1A) Local[1] = 6000;
[0009] (7C) VAR_RESULT = isSoundRunning(80);
[000D] (A8) if (VAR_RESULT) {
[0012] (16)   Local[0] = getRandomNr(10);
[0016] (5A)   Local[0] += 1;
[001B] (48)   if (Local[0] == 3) {
[0022] (18)     goto 0009;
[0025] (**)   }
[0025] (4C)   soundKludge([268,80,0,Local[0]]);
[0033] (18) } else {
[0036] (62)   stopScript(0);
[0038] (**) }
[0038] (2B) delayVariable(Local[1]);
[003B] (1A) Local[1] = 7200;
[0040] (18) goto 0009;
[0043] (A0) stopObjectCode();
END

// Script 153
[0000] (16) Local[0] = getRandomNr(2);
[0004] (5A) Local[0] += 1;
[0009] (4C) soundKludge([268,3,0,Local[0]]);
[0017] (2E) delay(2400);
[001B] (7C) VAR_RESULT = isSoundRunning(3);
[001F] (28) if (!VAR_RESULT) {
[0024] (5A)   Local[1] += 1;
[0029] (48)   if (Local[1] == 3) {
[0030] (62)     stopScript(0);
[0032] (**)   }
[0032] (18) } else {
[0035] (1A)   Local[1] = 0;
[003A] (**) }
[003A] (18) goto 0000;
[003D] (A0) stopObjectCode();
END

// Script 156
[0000] (1A) Local[0] = 3;
[0005] (FA) VerbOps(Local[0],[Dim()]);
[000A] (46) Local[0]++;
[000D] (44) unless (Local[0] > 12) goto 0005;
[0014] (7A) VerbOps(100,[Off()]);
[0018] (28) if (!Bit[21]) {
[001D] (7A)   VerbOps(111,[Dim()]);
[0021] (7A)   VerbOps(112,[Dim()]);
[0025] (**) }
[0025] (33) RoomIntensity(180,160,175);
[002A] (33) RoomIntensity(180,179,191);
[002F] (A0) stopObjectCode();
END

// Script 161: Look at Someone
[0000] (48) if (Var[181] == 2) {
[0007] (42)   chainScript(162,[]);
[000A] (18) } else {
[000D] (D8)   printEgo([Text("There's nothing to look at.")]);
[002B] (**) }
[002B] (A0) stopObjectCode();
END

// Script 162: Look at Sophia
[0000] (A8) if (Bit[24]) {
[0005] (48)   if (VAR_ROOM == 40) {
[000C] (48)     if (Var[238] == 2) {
[0013] (D8)       printEgo([Text("I can't see\x10her." + wait() + "I can only hear\x10her.")]);
[003C] (62)       stopScript(0);
[003E] (**)     }
[003E] (**)   }
[003E] (1D)   if (classOfIs(938,[146])) {
[0047] (18)   } else {
[004A] (10)     VAR_RESULT = getObjectOwner(938);
[004F] (08)     unless (VAR_RESULT != 2) goto 0071;
[0056] (**)   }
[0056] (11)   animateCostume(1,255);
[0059] (09)   faceActor(1,2);
[005D] (D8)   printEgo([Text("She looks fine.")]);
[006F] (62)   stopScript(0);
[0071] (68)   VAR_RESULT = isScriptRunning(31);
[0075] (A8)   if (VAR_RESULT) {
[007A] (62)     stopScript(31);
[007C] (1A)     Local[0] = 1;
[0081] (**)   }
[0081] (68)   VAR_RESULT = isScriptRunning(86);
[0085] (A8)   if (VAR_RESULT) {
[008A] (62)     stopScript(86);
[008C] (1A)     Local[1] = 1;
[0091] (**)   }
[0091] (34)   Var[442] = getDist(1,2);
[0098] (3B)   Var[442] = getActorScale(2);
[009C] (AC)   Exprmode Var[443] = ((30 * Var[442]) / 255);
[00AB] (0A)   startScript(136,[1,2,Var[443],1]);
[00BA] (80)   breakHere();
[00BB] (68)   VAR_RESULT = isScriptRunning(136);
[00BF] (28)   unless (!VAR_RESULT) goto 00BA;
[00C4] (A8)   if (Bit[22]) {
[00C9] (18)   } else {
[00CC] (40)     cutscene([2]);
[00D1] (16)     Local[2] = getRandomNr(2);
[00D5] (48)     if (Local[2] == 0) {
[00DC] (14)       print(1,[Text("Sophia?")]);
[00E7] (48)     } else if (Local[2] == 1) {
[00F1] (14)       print(1,[Text("Say^")]);
[00F9] (48)     } else if (Local[2] == 2) {
[0103] (14)       print(1,[Text("Listen^")]);
[010E] (18)       /* goto 0111; */
[0111] (**)     }
[0111] (09)     faceActor(2,1);
[0115] (AE)     WaitForMessage();
[0117] (14)     print(2,[Text("Yes?")]);
[011F] (AE)     WaitForMessage();
[0121] (14)     print(1,[Text("Mind if I look at your\x10necklace?")]);
[0145] (AE)     WaitForMessage();
[0147] (C0)     endCutscene();
[0148] (48)     if (Var[311] == 0) {
[014F] (1A)       Var[311] = 1;
[0154] (**)     }
[0154] (2C)     CursorHide();
[0156] (2C)     UserputOff();
[0158] (0A)     startScript(119,[79,1]);
[0161] (40)     cutscene([2]);
[0166] (10)     VAR_RESULT = getObjectOwner(830);
[016B] (48)     if (VAR_RESULT == 1) {
[0172] (38)       if (Var[99] >= 10) {
[0179] (1D)         if (classOfIs(933,[18])) {
[0182] (5D)           setClass(933,[146]);
[0189] (3A)           Var[99] -= 10;
[018E] (A8)           if (Var[99]) {
[0193] (5D)             setClass(830,[134]);
[019A] (18)             goto 01B8;
[019D] (18)           } else {
[01A0] (5D)             setClass(830,[6]);
[01A7] (18)             goto 01C9;
[01AA] (**)           }
[01AA] (**)         }
[01AA] (**)       }
[01AA] (A8)       if (Var[99]) {
[01AF] (1D)         if (classOfIs(830,[134])) {
[01B8] (37)           startObject(830,3,[]);
[01BD] (**)         }
[01BD] (1D)       } else if (classOfIs(830,[6])) {
[01C9] (37)         startObject(830,4,[]);
[01CE] (**)       }
[01CE] (**)     }
[01CE] (14)     print(1,[Text("Thanks.")]);
[01D9] (AE)     WaitForMessage();
[01DB] (C0)     endCutscene();
[01DC] (2C)     CursorShow();
[01DE] (2C)     UserputOn();
[01E0] (**)   }
[01E0] (A8)   if (Local[0]) {
[01E5] (03)     VAR_RESULT = getActorRoom(2);
[01E9] (C8)     if (VAR_RESULT == VAR_ROOM) {
[01F0] (68)       VAR_RESULT = isScriptRunning(31);
[01F4] (28)       if (!VAR_RESULT) {
[01F9] (2A)         startScript(31,[1,2,1],F);
[0205] (**)       }
[0205] (**)     }
[0205] (**)   }
[0205] (A8)   if (Local[1]) {
[020A] (0A)     startScript(86,[1,2]);
[0213] (**)   }
[0213] (18) } else {
[0216] (14)   print(1,[Text("I don't think this is the time or\x10place.")]);
[0242] (**) }
[0242] (A0) stopObjectCode();
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
