/**
 * Zak McKracken: V2 Retail
 * 
 * Global Scripts
 */

// Script 1: Game Initialization
[0000] (1A) VAR_NUM_ACTOR = 13;
[0004] (26) setVarRange(Var[234],2,[0,1]);
[0009] (1A) VAR_TIMER_NEXT = 6;
[000D] (1A) VAR_EGO = 1;
[0011] (13) ActorOps(1,[Costume(30)]);
[0015] (13) ActorOps(1,[Color(9, 0)]);
[001A] (13) ActorOps(1,[Color(14, 0)]);
[001F] (13) ActorOps(1,[TalkColor(10)]);
[0023] (13) ActorOps(0,[TalkColor(9)]);
[0027] (13) ActorOps(1,[Sound(6)]);
[002B] (0C) lockSound(6)
[002E] (0C) lockScript(5)
[0031] (0C) lockScript(6)
[0034] (0C) lockScript(150)
[0037] (1A) Var[66] = 0;
[003B] (FA) VerbOps(Delete(Var[66]););
[003E] (46) Var[66]++;
[0040] (44) unless (Var[66] > 14) goto 003B;
[0046] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[004A] (26) setVarRange(Var[164],2,[44,44]);
[004F] (26) setVarRange(Var[166],5,[0,52,52,32,32]);
[0057] (40) cutscene();
[0058] (72) loadRoom(46);
[005A] (32) setCameraAt(20);
[005C] (50) pickupObject(83);
[005F] (29) setOwnerOf(83,14);
[0063] (50) pickupObject(82);
[0066] (58) beginOverride();
[0067] (18) goto 0527;
[006A] (80) breakHere();
[006B] (60) cursorCommand(6, 0);
[006E] (42) startScript(122);
[0070] (2E) delay(300);
[0074] (58) beginOverride();
[0075] (18) goto 0082;
[0078] (42) startScript(127);
[007A] (80) breakHere();
[007B] (68) VAR_RESULT = isScriptRunning(127);
[007E] (28) unless (!VAR_RESULT) goto 007A;
[0082] (62) stopScript(127);
[0084] (72) loadRoom(0);
[0086] (58) beginOverride();
[0087] (18) goto 0527;
[008A] (9A) VAR_OVERRIDE = Var[234];
[008D] (0C) unlockUnkResType0(0)
[0090] (0C) loadSound(95)
[0093] (0C) lockSound(95)
[0096] (0C) loadCostume(31)
[0099] (0C) lockCostume(31)
[009C] (0C) loadScript(109)
[009F] (0C) lockScript(109)
[00A2] (0C) loadScript(111)
[00A5] (0C) lockScript(111)
[00A8] (0C) loadRoom(55)
[00AB] (0C) loadSound(81)
[00AE] (0C) lockSound(81)
[00B1] (0C) loadRoom(51)
[00B4] (0C) loadRoom(49)
[00B7] (0C) loadRoom(58)
[00BA] (0C) loadRoom(56)
[00BD] (EE) dummy(EE);
[00BE] (14) print(255,"Later that night, Zak's in bed^\x02");
[00DC] (2E) delay(120);
[00E0] (14) print(255,"alone^\x01\x02");
[00EB] (2E) delay(180);
[00EF] (14) print(255,"                                 ^again.");
[010A] (13) ActorOps(10,[Costume(31)]);
[010E] (13) ActorOps(1,[Color(9, 9)]);
[0113] (13) ActorOps(1,[Color(14, 14)]);
[0118] (2E) delay(180);
[011C] (72) loadRoom(58);
[011E] (1C) startSound(81);
[0120] (9A) Var[60] = Var[234];
[0123] (42) startScript(111);
[0125] (2E) delay(180);
[0129] (05) drawObject(766,255,255);
[012E] (2E) delay(180);
[0132] (05) drawObject(767,255,255);
[0137] (2E) delay(240);
[013B] (05) drawObject(768,255,255);
[0140] (80) breakHere();
[0141] (7C) VAR_RESULT = isSoundRunning(81);
[0144] (28) unless (!VAR_RESULT) goto 0140;
[0148] (02) startMusic(95);
[014A] (80) breakHere();
[014B] (72) loadRoom(51);
[014D] (1A) VAR_TIMER_NEXT = 8;
[0151] (32) setCameraAt(60);
[0153] (80) breakHere();
[0154] (12) panCameraTo(20);
[0156] (80) breakHere();
[0157] (44) unless (VAR_MUSIC_TIMER > 4) goto 0156;
[015D] (80) breakHere();
[015E] (78) unless (VAR_CAMERA_POS_X < 21) goto 015D;
[0164] (72) loadRoom(55);
[0166] (1A) Var[46] = 756;
[016A] (85) drawObject(Var[46],255,255);
[016E] (9A) Var[60] = Var[235];
[0171] (44) if (VAR_MACHINE_SPEED > 40) {
[0177] (9A)   Var[49] = VAR_MUSIC_TIMER;
[017A] (80)   breakHere();
[017B] (88)   unless (VAR_MUSIC_TIMER != Var[49]) goto 017A;
[0180] (48)   if (Var[46] == 756) {
[0186] (9A)     Var[49] = VAR_MUSIC_TIMER;
[0189] (80)     breakHere();
[018A] (88)     unless (VAR_MUSIC_TIMER != Var[49]) goto 0189;
[018F] (**)   }
[018F] (48)   if (Var[46] == 760) {
[0195] (2E)     delay(60);
[0199] (9A)     Var[60] = Var[235];
[019C] (9A)     Var[49] = VAR_MUSIC_TIMER;
[019F] (80)     breakHere();
[01A0] (88)     unless (VAR_MUSIC_TIMER != Var[49]) goto 019F;
[01A5] (**)   }
[01A5] (18) } else {
[01A8] (80)   breakHere();
[01A9] (80)   breakHere();
[01AA] (**) }
[01AA] (08) if (Var[46] != 760) {
[01B0] (C7)   clearState08(Var[46]);
[01B2] (**) }
[01B2] (46) Var[46]++;
[01B4] (44) unless (Var[46] > 760) goto 016A;
[01BA] (04) if (VAR_MACHINE_SPEED <= 40) {
[01C0] (2E)   delay(180);
[01C4] (9A)   Var[60] = Var[235];
[01C7] (80)   breakHere();
[01C8] (**) }
[01C8] (72) loadRoom(49);
[01CA] (05) drawObject(701,255,255);
[01CF] (04) if (VAR_MACHINE_SPEED <= 40) {
[01D5] (18) } else {
[01D8] (2D)   putActorInRoom(1,49);
[01DB] (01)   putActor(1,30,56);
[01DF] (2D)   putActorInRoom(10,49);
[01E2] (01)   putActor(10,0,20);
[01E6] (3D)   setActorElevation(10,40);
[01E9] (11)   animateActor(1,248);
[01EC] (80)   breakHere();
[01ED] (9A)   Var[60] = Var[235];
[01F0] (2E)   delay(60);
[01F4] (D8)   printEgo("Hey! That's ME!");
[0203] (2E)   delay(165);
[0207] (11)   animateActor(1,246);
[020A] (80)   breakHere();
[020B] (D8)   printEgo("TABLOID REPORTER `SPACES OUT` IN DREAM.");
[022F] (2E)   delay(225);
[0233] (1E)   walkActorTo(1,14,56);
[0237] (80)   breakHere();
[0238] (43)   VAR_RESULT = getActorX(1);
[023B] (78)   unless (VAR_RESULT < 19) goto 0237;
[0241] (47)   clearState08(701);
[0244] (2E)   delay(30);
[0248] (05)   drawObject(699,10,2);
[024D] (2E)   delay(30);
[0251] (11)   animateActor(1,12);
[0254] (2E)   delay(60);
[0258] (1E)   walkActorTo(1,27,56);
[025C] (80)   breakHere();
[025D] (43)   VAR_RESULT = getActorX(1);
[0260] (44)   unless (VAR_RESULT > 21) goto 025C;
[0266] (05)   drawObject(700,10,6);
[026B] (80)   breakHere();
[026C] (80)   breakHere();
[026D] (80)   breakHere();
[026E] (05)   drawObject(696,30,3);
[0273] (2E)   delay(36);
[0277] (1E)   walkActorTo(1,33,45);
[027B] (3B)   waitForActor(1);
[027D] (11)   animateActor(1,246);
[0280] (2E)   delay(90);
[0284] (47)   clearState08(700);
[0287] (47)   clearState08(699);
[028A] (47)   clearState08(696);
[028D] (2E)   delay(60);
[0291] (1A)   Var[45] = 4;
[0295] (80)   breakHere();
[0296] (45)   drawObject(697,Var[45],6);
[029B] (5A)   Var[45] += 3;
[029F] (44)   unless (Var[45] > 17) goto 0295;
[02A5] (11)   animateActor(1,24);
[02A8] (2E)   delay(42);
[02AC] (1E)   walkActorTo(1,27,55);
[02B0] (3B)   waitForActor(1);
[02B2] (11)   animateActor(1,244);
[02B5] (80)   breakHere();
[02B6] (47)   clearState08(701);
[02B9] (1E)   walkActorTo(1,25,55);
[02BD] (80)   breakHere();
[02BE] (80)   breakHere();
[02BF] (05)   drawObject(698,19,4);
[02C4] (80)   breakHere();
[02C5] (11)   animateActor(1,16);
[02C8] (2E)   delay(120);
[02CC] (47)   clearState08(698);
[02CF] (80)   breakHere();
[02D0] (1E)   walkActorTo(1,19,55);
[02D4] (11)   animateActor(1,24);
[02D7] (3B)   waitForActor(1);
[02D9] (80)   breakHere();
[02DA] (38)   unless (VAR_MUSIC_TIMER >= 24) goto 02D9;
[02E0] (47)   clearState08(697);
[02E3] (2E)   delay(60);
[02E7] (11)   animateActor(1,28);
[02EA] (3D)   setActorElevation(10,0);
[02ED] (1E)   walkActorTo(10,5,55);
[02F1] (1A)   VAR_TIMER_NEXT = 9;
[02F5] (2E)   delay(120);
[02F9] (11)   animateActor(1,12);
[02FC] (3B)   waitForActor(10);
[02FE] (11)   animateActor(10,245);
[0301] (2E)   delay(60);
[0305] (D8)   printEgo("AIEEEEE!");
[030F] (1E)   walkActorTo(1,34,55);
[0313] (42)   startScript(109);
[0315] (3B)   waitForActor(1);
[0317] (11)   animateActor(1,244);
[031A] (80)   breakHere();
[031B] (80)   breakHere();
[031C] (11)   animateActor(1,12);
[031F] (1E)   walkActorTo(1,32,56);
[0323] (2E)   delay(24);
[0327] (1E)   walkActorTo(1,8,56);
[032B] (80)   breakHere();
[032C] (43)   VAR_RESULT = getActorX(1);
[032F] (78)   unless (VAR_RESULT < 18) goto 032B;
[0335] (05)   drawObject(702,255,255);
[033A] (2E)   delay(30);
[033E] (36)   walkActorToObject(1,702);
[0342] (3B)   waitForActor(1);
[0344] (2D)   putActorInRoom(1,56);
[0347] (01)   putActor(1,0,48);
[034B] (62)   stopScript(109);
[034D] (2D)   putActorInRoom(10,56);
[0350] (01)   putActor(10,0,48);
[0354] (3D)   setActorElevation(10,170);
[0357] (72)   loadRoom(56);
[0359] (1A)   VAR_TIMER_NEXT = 8;
[035D] (32)   setCameraAt(20);
[035F] (1E)   walkActorTo(1,26,48);
[0363] (80)   breakHere();
[0364] (43)   VAR_RESULT = getActorX(1);
[0367] (44)   unless (VAR_RESULT > 19) goto 0363;
[036D] (3D)   setActorElevation(10,0);
[0370] (42)   startScript(109);
[0372] (11)   animateActor(10,249);
[0375] (3B)   waitForActor(1);
[0377] (11)   animateActor(1,244);
[037A] (80)   breakHere();
[037B] (80)   breakHere();
[037C] (11)   animateActor(1,12);
[037F] (80)   breakHere();
[0380] (80)   breakHere();
[0381] (1E)   walkActorTo(1,47,48);
[0385] (62)   stopScript(109);
[0387] (1E)   walkActorTo(10,0,48);
[038B] (80)   breakHere();
[038C] (43)   VAR_RESULT = getActorX(10);
[038F] (78)   unless (VAR_RESULT < 6) goto 038B;
[0395] (80)   breakHere();
[0396] (80)   breakHere();
[0397] (12)   panCameraTo(60);
[0399] (80)   breakHere();
[039A] (48)   unless (VAR_CAMERA_POS_X == 60) goto 0399;
[03A0] (9A)   Var[45] = Var[235];
[03A3] (07)   setState08(761);
[03A6] (80)   breakHere();
[03A7] (80)   breakHere();
[03A8] (47)   clearState08(761);
[03AB] (80)   breakHere();
[03AC] (80)   breakHere();
[03AD] (46)   Var[45]++;
[03AF] (44)   unless (Var[45] > 2) goto 03A3;
[03B5] (18) } else {
[03B8] (2D)   putActorInRoom(1,49);
[03BB] (01)   putActor(1,30,55);
[03BF] (2D)   putActorInRoom(10,49);
[03C2] (01)   putActor(10,0,20);
[03C6] (3D)   setActorElevation(10,40);
[03C9] (11)   animateActor(1,248);
[03CC] (80)   breakHere();
[03CD] (9A)   Var[60] = Var[235];
[03D0] (2E)   delay(24);
[03D4] (D8)   printEgo("Hey! That's ME!");
[03E3] (2E)   delay(90);
[03E7] (11)   animateActor(1,246);
[03EA] (80)   breakHere();
[03EB] (D8)   printEgo("TABLOID REPORTER `SPACES OUT` IN DREAM.");
[040F] (2E)   delay(60);
[0413] (1E)   walkActorTo(1,26,55);
[0417] (47)   clearState08(701);
[041A] (80)   breakHere();
[041B] (05)   drawObject(699,10,2);
[0420] (80)   breakHere();
[0421] (14)   print(255,"");
[0424] (80)   breakHere();
[0425] (11)   animateActor(1,12);
[0428] (3B)   waitForActor(1);
[042A] (05)   drawObject(700,10,6);
[042F] (2E)   delay(30);
[0433] (11)   animateActor(1,245);
[0436] (80)   breakHere();
[0437] (05)   drawObject(696,30,3);
[043C] (2E)   delay(60);
[0440] (11)   animateActor(1,246);
[0443] (80)   breakHere();
[0444] (47)   clearState08(700);
[0447] (47)   clearState08(699);
[044A] (47)   clearState08(696);
[044D] (80)   breakHere();
[044E] (1A)   Var[45] = 4;
[0452] (80)   breakHere();
[0453] (45)   drawObject(697,Var[45],6);
[0458] (5A)   Var[45] += 3;
[045C] (44)   unless (Var[45] > 17) goto 0452;
[0462] (11)   animateActor(1,244);
[0465] (80)   breakHere();
[0466] (11)   animateActor(1,24);
[0469] (80)   breakHere();
[046A] (47)   clearState08(701);
[046D] (1E)   walkActorTo(1,25,55);
[0471] (80)   breakHere();
[0472] (80)   breakHere();
[0473] (05)   drawObject(698,19,4);
[0478] (80)   breakHere();
[0479] (11)   animateActor(1,16);
[047C] (2E)   delay(90);
[0480] (47)   clearState08(698);
[0483] (80)   breakHere();
[0484] (1E)   walkActorTo(1,20,55);
[0488] (11)   animateActor(1,24);
[048B] (3B)   waitForActor(1);
[048D] (47)   clearState08(697);
[0490] (80)   breakHere();
[0491] (11)   animateActor(1,28);
[0494] (80)   breakHere();
[0495] (3D)   setActorElevation(10,0);
[0498] (1E)   walkActorTo(10,5,55);
[049C] (2E)   delay(180);
[04A0] (11)   animateActor(1,12);
[04A3] (3B)   waitForActor(10);
[04A5] (11)   animateActor(10,245);
[04A8] (D8)   printEgo("AIEEEEE!");
[04B2] (1E)   walkActorTo(1,34,55);
[04B6] (42)   startScript(109);
[04B8] (3B)   waitForActor(1);
[04BA] (11)   animateActor(1,244);
[04BD] (80)   breakHere();
[04BE] (80)   breakHere();
[04BF] (11)   animateActor(1,12);
[04C2] (1E)   walkActorTo(1,32,58);
[04C6] (2E)   delay(24);
[04CA] (1E)   walkActorTo(1,8,58);
[04CE] (80)   breakHere();
[04CF] (43)   VAR_RESULT = getActorX(1);
[04D2] (78)   unless (VAR_RESULT < 18) goto 04CE;
[04D8] (05)   drawObject(702,255,255);
[04DD] (2E)   delay(30);
[04E1] (36)   walkActorToObject(1,702);
[04E5] (3B)   waitForActor(1);
[04E7] (2D)   putActorInRoom(1,56);
[04EA] (01)   putActor(1,39,48);
[04EE] (62)   stopScript(109);
[04F0] (2D)   putActorInRoom(10,0);
[04F3] (72)   loadRoom(56);
[04F5] (32)   setCameraAt(60);
[04F7] (1E)   walkActorTo(1,47,48);
[04FB] (3B)   waitForActor(1);
[04FD] (11)   animateActor(1,12);
[0500] (07)   setState08(761);
[0503] (80)   breakHere();
[0504] (05)   drawObject(761,255,255);
[0509] (80)   breakHere();
[050A] (**) }
[050A] (11) animateActor(1,246);
[050D] (2E) delay(30);
[0511] (1E) walkActorTo(1,20,48);
[0515] (80) breakHere();
[0516] (7C) VAR_RESULT = isSoundRunning(95);
[0519] (28) unless (!VAR_RESULT) goto 0515;
[051D] (80) breakHere();
[051E] (43) VAR_RESULT = getActorX(1);
[0521] (78) unless (VAR_RESULT < 39) goto 051D;
[0527] (1A) VAR_TIMER_NEXT = 6;
[052B] (AD) putActorInRoom(VAR_EGO,0);
[052E] (9A) Var[122] = VAR_OVERRIDE;
[0531] (62) stopScript(122);
[0533] (C0) endCutscene();
[0534] (3C) stopSound(81);
[0536] (20) stopMusic();
[0537] (72) loadRoom(0);
[0539] (14) print(255,"");
[053C] (14) print(255,"");
[053F] (42) startScript(108);
[0541] (A0) stopObjectCode();
END

// Script 2
[0000] (C8) if (Var[123] == VAR_ACTIVE_OBJECT2) {
[0005] (C8)   if (Var[124] == VAR_ACTIVE_OBJECT1) {
[000A] (46)     Var[197]++;
[000C] (44)     if (Var[197] > 3) {
[0012] (9A)       Var[197] = Var[234];
[0015] (A8)       if (Var[123]) {
[0019] (4A)         chainScript(3);
[001B] (**)       }
[001B] (**)     }
[001B] (18)     goto 0021;
[001E] (**)   }
[001E] (**) }
[001E] (9A) Var[197] = Var[234];
[0021] (9A) Var[123] = VAR_ACTIVE_OBJECT1;
[0024] (9A) Var[124] = VAR_ACTIVE_OBJECT2;
[0027] (48) if (VAR_ACTIVE_VERB == 18) {
[002D] (68)   VAR_RESULT = isScriptRunning(26);
[0030] (28)   if (!VAR_RESULT) {
[0034] (42)     startScript(26);
[0036] (18)     goto 00E7;
[0039] (**)   }
[0039] (**) }
[0039] (38) if (VAR_ACTIVE_VERB >= 30) {
[003F] (78)   if (VAR_ACTIVE_VERB < 45) {
[0045] (18)     goto 00E7;
[0048] (**)   }
[0048] (**) }
[0048] (48) if (VAR_ACTIVE_VERB == 45) {
[004E] (38)   if (VAR_ACTIVE_OBJECT2 >= 1) {
[0054] (04)     if (VAR_ACTIVE_OBJECT2 <= 4) {
[005A] (9A)       VAR_EGO = VAR_ACTIVE_OBJECT2;
[005D] (42)       startScript(19);
[005F] (D2)       actorFollowCamera(VAR_EGO);
[0061] (60)       cursorCommand(247, 1);
[0064] (18)       goto 00E7;
[0067] (**)     }
[0067] (**)   }
[0067] (42)   startScript(59);
[0069] (1A)   VAR_SENTENCE_PREPOSITION = 4;
[006D] (18) } else {
[0070] (9A)   Var[137] = VAR_EGO;
[0073] (48)   if (VAR_ACTIVE_VERB == 3) {
[0079] (44)     if (VAR_ACTIVE_OBJECT2 > 13) {
[007F] (9D)       if (classOfIs(VAR_ACTIVE_OBJECT2,4)) {
[0084] (42)         startScript(32);
[0086] (18)         goto 023A;
[0089] (**)       }
[0089] (18)     } else {
[008C] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[008F] (48)       if (VAR_RESULT == 15) {
[0095] (18)         goto 017C;
[0098] (**)       }
[0098] (B1)       VAR_RESULT = getBitVar(1440,Var[137]);
[009D] (28)       if (!VAR_RESULT) {
[00A1] (48)         if (VAR_TIMER_NEXT == 6) {
[00A7] (CD)           walkActorToActor(Var[137],VAR_ACTIVE_OBJECT2,4);
[00AB] (48)         } else if (VAR_TIMER_NEXT == 8) {
[00B4] (CD)           walkActorToActor(Var[137],VAR_ACTIVE_OBJECT2,3);
[00B8] (18)         } else {
[00BB] (CD)           walkActorToActor(Var[137],VAR_ACTIVE_OBJECT2,1);
[00BF] (**)         }
[00BF] (**)       }
[00BF] (BB)       waitForActor(Var[137]);
[00C1] (F4)       VAR_RESULT = getDist(Var[137],VAR_ACTIVE_OBJECT2);
[00C5] (04)       if (VAR_RESULT <= 4) {
[00CB] (C9)         faceActor(VAR_ACTIVE_OBJECT2,Var[137]);
[00CE] (C9)         faceActor(Var[137],VAR_ACTIVE_OBJECT2);
[00D1] (A8)         if (Var[203]) {
[00D5] (44)           if (VAR_ACTIVE_OBJECT2 > 4) {
[00DB] (18)             goto 00E7;
[00DE] (**)           }
[00DE] (**)         }
[00DE] (A8)         if (VAR_VERB_ALLOWED) {
[00E2] (79)           doSentence(3,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,1);
[00E7] (19)           doSentence(RESET);
[00E9] (18)           goto 023A;
[00EC] (04)         } else if (VAR_ACTIVE_OBJECT2 <= 12) {
[00F5] (42)           startScript(20);
[00F7] (18)         } else {
[00FA] (4A)           chainScript(3);
[00FC] (**)         }
[00FC] (**)       }
[00FC] (18)       goto 023A;
[00FF] (**)     }
[00FF] (**)   }
[00FF] (48)   if (VAR_ACTIVE_VERB == 12) {
[0105] (C8)     if (VAR_CURRENT_LIGHTS == Var[234]) {
[010A] (D8)       printEgo("It's too dark to read.");
[011E] (18)       goto 00E7;
[0121] (**)     }
[0121] (**)   }
[0121] (28)   if (!VAR_VERB_ALLOWED) {
[0125] (9A)     Var[22] = VAR_ACTIVE_OBJECT1;
[0128] (B1)     VAR_RESULT = getBitVar(1440,Var[137]);
[012D] (28)     if (!VAR_RESULT) {
[0131] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0134] (48)       if (VAR_RESULT == 15) {
[013A] (F6)         walkActorToObject(Var[137],Var[22]);
[013D] (**)       }
[013D] (**)     }
[013D] (BB)     waitForActor(Var[137]);
[013F] (F4)     VAR_RESULT = getDist(Var[137],Var[22]);
[0143] (04)     if (VAR_RESULT <= 2) {
[0149] (08)       if (VAR_ACTIVE_VERB != 13) {
[014F] (4A)         chainScript(3);
[0151] (**)       }
[0151] (18)     } else {
[0154] (18)       goto 01F4;
[0157] (**)     }
[0157] (18)   } else {
[015A] (9A)     Var[66] = Var[234];
[015D] (08)     if (VAR_ACTIVE_VERB != 12) {
[0163] (08)       if (VAR_ACTIVE_VERB != 14) {
[0169] (08)         if (VAR_ACTIVE_VERB != 17) {
[016F] (90)           VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0172] (48)           if (VAR_RESULT == 15) {
[0178] (FF)             if (getState01(VAR_ACTIVE_OBJECT1)) {
[017C] (F9)               doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[0181] (59)               doSentence(14,VAR_ACTIVE_OBJECT1,0,0);
[0187] (18)               goto 023A;
[018A] (**)             }
[018A] (46)             Var[66]++;
[018C] (**)           }
[018C] (90)           VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT2);
[018F] (48)           if (VAR_RESULT == 15) {
[0195] (FF)             if (getState01(VAR_ACTIVE_OBJECT2)) {
[0199] (F9)               doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[019E] (59)               doSentence(14,VAR_ACTIVE_OBJECT2,0,0);
[01A4] (18)               goto 023A;
[01A7] (**)             }
[01A7] (46)             Var[66]++;
[01A9] (**)           }
[01A9] (48)           if (Var[66] == 2) {
[01AF] (4A)             chainScript(3);
[01B1] (**)           }
[01B1] (**)         }
[01B1] (**)       }
[01B1] (**)     }
[01B1] (08)     if (Var[21] != 3) {
[01B7] (9A)       Var[22] = VAR_ACTIVE_OBJECT1;
[01BA] (90)       VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[01BD] (08)       if (VAR_RESULT != 15) {
[01C3] (A8)         if (VAR_ACTIVE_OBJECT2) {
[01C7] (90)           VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT2);
[01CA] (48)           if (VAR_RESULT == 15) {
[01D0] (9A)             Var[22] = VAR_ACTIVE_OBJECT2;
[01D3] (**)           }
[01D3] (**)         }
[01D3] (**)       }
[01D3] (B1)       VAR_RESULT = getBitVar(1440,Var[137]);
[01D8] (28)       if (!VAR_RESULT) {
[01DC] (90)         VAR_RESULT = getObjectOwner(Var[22]);
[01DF] (48)         if (VAR_RESULT == 15) {
[01E5] (F6)           walkActorToObject(Var[137],Var[22]);
[01E8] (BB)           waitForActor(Var[137]);
[01EA] (**)         }
[01EA] (**)       }
[01EA] (F4)       VAR_RESULT = getDist(Var[137],Var[22]);
[01EE] (44)       if (VAR_RESULT > 2) {
[01F4] (C9)         faceActor(Var[137],Var[22]);
[01F7] (BB)         waitForActor(Var[137]);
[01F9] (D8)         printEgo("I can't reach it.");
[0209] (19)         doSentence(RESET);
[020B] (AC)         drawSentence();
[020C] (19)         doSentence(STOP);
[020E] (62)         stopScript(0);
[0210] (**)       }
[0210] (B1)       VAR_RESULT = getBitVar(1440,Var[137]);
[0215] (A8)       if (VAR_RESULT) {
[0219] (48)         if (VAR_ACTIVE_VERB == 13) {
[021F] (18)           goto 023A;
[0222] (**)         }
[0222] (**)       }
[0222] (**)     }
[0222] (A8)     if (VAR_ACTIVE_OBJECT2) {
[0226] (EC)       VAR_RESULT = getObjPreposition(VAR_ACTIVE_OBJECT1);
[0229] (28)       if (!VAR_RESULT) {
[022D] (08)         if (VAR_ACTIVE_OBJECT2 != 55) {
[0233] (4A)           chainScript(3);
[0235] (**)         }
[0235] (**)       }
[0235] (**)     }
[0235] (F9)     doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,1);
[023A] (**)   }
[023A] (**) }
[023A] (AC) drawSentence();
[023B] (A0) stopObjectCode();
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
[009F] (AC) drawSentence();
[00A0] (A0) stopObjectCode();
END

// Script 4
[0000] (9A) Var[34] = Var[234];
[0003] (48) if (Var[21] == 3) {
[0009] (9A)   Var[34] = Var[235];
[000C] (**) }
[000C] (48) if (VAR_CLICK_AREA == 4) {
[0012] (48)   if (VAR_KEYPRESS == 8) {
[0018] (98)     restart();
[0019] (**)   }
[0019] (48)   if (Var[21] == 1) {
[001F] (48)     if (VAR_KEYPRESS == 5) {
[0025] (4A)       chainScript(7);
[0027] (**)     }
[0027] (04)     if (VAR_KEYPRESS <= 4) {
[002D] (A8)       if (Var[199]) {
[0031] (6F)         if (getState04(169)) {
[0036] (B1)           VAR_RESULT = getBitVar(1470,VAR_KEYPRESS);
[003B] (28)           if (!VAR_RESULT) {
[003F] (1A)             VAR_SENTENCE_VERB = 45;
[0043] (9A)             VAR_SENTENCE_OBJECT2 = VAR_KEYPRESS;
[0046] (18)             goto 01DA;
[0049] (**)           }
[0049] (**)         }
[0049] (**)       }
[0049] (**)     }
[0049] (**)   }
[0049] (**) }
[0049] (48) if (VAR_CLICK_AREA == 5) {
[004F] (9A)   Var[34] = Var[235];
[0052] (**) }
[0052] (48) if (VAR_CLICK_AREA == 1) {
[0058] (A8)   if (VAR_SENTENCE_PREPOSITION) {
[005C] (08)     if (VAR_SENTENCE_VERB != 45) {
[0062] (18)       goto 007D;
[0065] (**)     }
[0065] (**)   }
[0065] (48)   if (VAR_CLICK_VERB == 30) {
[006B] (48)   } else if (VAR_CLICK_VERB == 45) {
[0074] (18)   } else {
[0077] (48)     unless (VAR_CLICK_VERB == 3) goto 007F;
[007D] (**)   }
[007D] (19)   doSentence(RESET);
[007F] (48)   if (VAR_CLICK_VERB == 15) {
[0085] (1A)     VAR_SENTENCE_VERB = 15;
[0089] (AC)     drawSentence();
[008A] (78)     if (VAR_VIRT_MOUSE_Y < 67) {
[0090] (F5)       VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0094] (88)       if (VAR_CLICK_OBJECT != VAR_SENTENCE_OBJECT1) {
[0099] (9A)         VAR_SENTENCE_OBJECT1 = VAR_CLICK_OBJECT;
[009C] (AC)         drawSentence();
[009D] (**)       }
[009D] (**)     }
[009D] (80)     breakHere();
[009E] (18)     goto 008A;
[00A1] (**)   }
[00A1] (38)   if (VAR_CLICK_VERB >= 46) {
[00A7] (04)     if (VAR_CLICK_VERB <= 49) {
[00AD] (9A)       VAR_SENTENCE_OBJECT2 = VAR_CLICK_VERB;
[00B0] (3A)       VAR_SENTENCE_OBJECT2 -= 45;
[00B4] (1A)       VAR_SENTENCE_VERB = 45;
[00B8] (9A)       Var[34] = Var[235];
[00BB] (18)       goto 0179;
[00BE] (**)     }
[00BE] (**)   }
[00BE] (38)   if (VAR_CLICK_VERB >= 30) {
[00C4] (48)     if (VAR_CLICK_VERB == 45) {
[00CA] (1A)       VAR_SENTENCE_PREPOSITION = 4;
[00CE] (**)     }
[00CE] (9A)     VAR_SENTENCE_VERB = VAR_CLICK_VERB;
[00D1] (**)   }
[00D1] (C8)   if (VAR_SENTENCE_VERB == VAR_CLICK_VERB) {
[00D6] (9A)     Var[34] = Var[235];
[00D9] (18)   } else {
[00DC] (9A)     VAR_SENTENCE_VERB = VAR_CLICK_VERB;
[00DF] (**)   }
[00DF] (18) } else {
[00E2] (48)   if (VAR_CLICK_AREA == 3) {
[00E8] (48)     if (VAR_SENTENCE_VERB == 3) {
[00EE] (9A)       VAR_SENTENCE_PREPOSITION = Var[234];
[00F1] (**)     }
[00F1] (**)   }
[00F1] (48)   if (VAR_CLICK_AREA == 2) {
[00F7] (08)     if (VAR_SENTENCE_VERB != 45) {
[00FD] (48)       if (VAR_SENTENCE_VERB == 13) {
[0103] (9A)         Var[34] = Var[235];
[0106] (**)       }
[0106] (48)       if (VAR_SENTENCE_VERB == 15) {
[010C] (19)         doSentence(RESET);
[010E] (9A)         Var[34] = Var[234];
[0111] (**)       }
[0111] (48)       if (VAR_SENTENCE_VERB == 3) {
[0117] (A8)         if (VAR_SENTENCE_PREPOSITION) {
[011B] (F5)           VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[011F] (A8)           if (VAR_CLICK_OBJECT) {
[0123] (9D)             if (classOfIs(VAR_CLICK_OBJECT,4)) {
[0128] (18)               goto 013F;
[012B] (**)             }
[012B] (**)           }
[012B] (D5)           VAR_CLICK_OBJECT = actorFromPos(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[012F] (38)           if (VAR_CLICK_OBJECT >= 12) {
[0135] (9A)             VAR_CLICK_OBJECT = Var[234];
[0138] (**)           }
[0138] (18)           goto 013F;
[013B] (**)         }
[013B] (**)       }
[013B] (F5)       VAR_CLICK_OBJECT = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[013F] (**)     }
[013F] (**)   }
[013F] (28)   if (!VAR_CLICK_OBJECT) {
[0143] (48)     if (VAR_SENTENCE_VERB == 13) {
[0149] (19)       doSentence(RESET);
[014B] (9A)       Var[34] = Var[235];
[014E] (**)     }
[014E] (A8)   } else if (VAR_SENTENCE_PREPOSITION) {
[0155] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT2) {
[015A] (9A)       Var[34] = Var[235];
[015D] (**)     }
[015D] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT1) {
[0162] (9A)       VAR_CLICK_OBJECT = Var[234];
[0165] (**)     }
[0165] (9A)     VAR_SENTENCE_OBJECT2 = VAR_CLICK_OBJECT;
[0168] (18)   } else {
[016B] (9A)     VAR_SENTENCE_OBJECT2 = Var[234];
[016E] (C8)     if (VAR_CLICK_OBJECT == VAR_SENTENCE_OBJECT1) {
[0173] (9A)       Var[34] = Var[235];
[0176] (**)     }
[0176] (9A)     VAR_SENTENCE_OBJECT1 = VAR_CLICK_OBJECT;
[0179] (**)   }
[0179] (**) }
[0179] (48) if (VAR_SENTENCE_VERB == 14) {
[017F] (90)   VAR_RESULT = getObjectOwner(VAR_SENTENCE_OBJECT1);
[0182] (08)   if (VAR_RESULT != 15) {
[0188] (9A)     VAR_SENTENCE_OBJECT1 = Var[234];
[018B] (**)   }
[018B] (**) }
[018B] (48) if (VAR_SENTENCE_VERB == 11) {
[0191] (A8)   if (VAR_SENTENCE_OBJECT1) {
[0195] (EC)     VAR_SENTENCE_PREPOSITION = getObjPreposition(VAR_SENTENCE_OBJECT1);
[0198] (28)     if (!VAR_SENTENCE_PREPOSITION) {
[019C] (9A)       VAR_SENTENCE_OBJECT2 = Var[234];
[019F] (**)     }
[019F] (**)   }
[019F] (**) }
[019F] (48) if (VAR_SENTENCE_VERB == 3) {
[01A5] (A8)   if (VAR_SENTENCE_OBJECT1) {
[01A9] (1A)     VAR_SENTENCE_PREPOSITION = 4;
[01AD] (**)   }
[01AD] (**) }
[01AD] (28) if (!VAR_SENTENCE_VERB) {
[01B1] (9A)   VAR_SENTENCE_VERB = VAR_BACKUP_VERB;
[01B4] (**) }
[01B4] (AC) drawSentence();
[01B5] (A8) if (Var[34]) {
[01B9] (38)   if (VAR_SENTENCE_VERB >= 30) {
[01BF] (04)     if (VAR_SENTENCE_VERB <= 45) {
[01C5] (18)       goto 01DA;
[01C8] (**)     }
[01C8] (**)   }
[01C8] (A8)   if (VAR_SENTENCE_OBJECT1) {
[01CC] (A8)     if (VAR_SENTENCE_PREPOSITION) {
[01D0] (A8)       if (VAR_SENTENCE_OBJECT2) {
[01D4] (18)       } else {
[01D7] (18)         goto 01E1;
[01DA] (**)       }
[01DA] (**)     }
[01DA] (19)     doSentence(STOP);
[01DC] (F9)     doSentence(VAR_SENTENCE_VERB,VAR_SENTENCE_OBJECT1,VAR_SENTENCE_OBJECT2,0);
[01E1] (48)   } else if (VAR_SENTENCE_VERB == 13) {
[01EA] (B1)     VAR_RESULT = getBitVar(1440,VAR_EGO);
[01EF] (28)     if (!VAR_RESULT) {
[01F3] (48)       if (VAR_CLICK_AREA == 2) {
[01F9] (08)         if (Var[21] != 3) {
[01FF] (19)           doSentence(STOP);
[0201] (FE)           walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0205] (**)         }
[0205] (**)       }
[0205] (**)     }
[0205] (**)   }
[0205] (08)   if (VAR_SENTENCE_VERB != 13) {
[020B] (08)     if (VAR_SENTENCE_VERB != 45) {
[0211] (9A)       Var[66] = VAR_SENTENCE_OBJECT1;
[0214] (19)       doSentence(RESET);
[0216] (28)       if (!Var[66]) {
[021A] (AC)         drawSentence();
[021B] (**)       }
[021B] (**)     }
[021B] (**)   }
[021B] (**) }
[021B] (9A) VAR_CLICK_VERB = Var[234];
[021E] (9A) VAR_CLICK_OBJECT = Var[234];
[0221] (A0) stopObjectCode();
END

// Script 5
[0000] (53) ActorOps(4,[Color(9, Var[196])]);
[0005] (13) ActorOps(3,[Color(5, 3)]);
[000A] (13) ActorOps(3,[Color(11, 9)]);
[000F] (13) ActorOps(3,[Color(3, 1)]);
[0014] (71) VAR_RESULT = getActorCostume(3);
[0017] (48) if (VAR_RESULT == 8) {
[001D] (13)   ActorOps(3,[Color(13, 11)]);
[0022] (13)   ActorOps(3,[Color(9, 6)]);
[0027] (18) } else {
[002A] (13)   ActorOps(3,[Color(9, 11)]);
[002F] (**) }
[002F] (42) startScript(150);
[0031] (1A) VAR_TIMER_NEXT = 6;
[0035] (F1) Var[66] = getActorCostume(VAR_EGO);
[0038] (9A) Var[67] = Var[235];
[003B] (9A) Var[14] = Var[67];
[003E] (5A) Var[14] += 171;
[0042] (C8) if (Var[66] == Var[14]) {
[0047] (18) } else {
[004A] (46)   Var[67]++;
[004C] (44)   unless (Var[67] > 12) goto 003B;
[0052] (**) }
[0052] (38) if (Var[67] >= 5) {
[0058] (04)   if (Var[67] <= 8) {
[005E] (1A)     VAR_TIMER_NEXT = 8;
[0062] (04)   } else if (Var[67] <= 12) {
[006B] (1A)     VAR_TIMER_NEXT = 10;
[006F] (**)   }
[006F] (**) }
[006F] (42) startScript(6);
[0071] (A0) stopObjectCode();
END

// Script 6
[0000] (08) if (VAR_CURRENT_LIGHTS != 11) {
[0006] (9A)   Var[66] = Var[234];
[0009] (9A)   Var[67] = Var[234];
[000C] (6F)   if (getState04(49)) {
[0011] (10)     VAR_RESULT = getObjectOwner(49);
[0015] (C8)     if (VAR_RESULT == VAR_EGO) {
[001A] (1A)       Var[66] = 12;
[001E] (**)     }
[001E] (**)   }
[001E] (6F)   if (getState04(69)) {
[0023] (10)     VAR_RESULT = getObjectOwner(69);
[0027] (C8)     if (VAR_RESULT == VAR_EGO) {
[002C] (46)       Var[67]++;
[002E] (1A)       Var[66] = 12;
[0032] (**)     }
[0032] (**)   }
[0032] (88)   if (VAR_CURRENT_LIGHTS != Var[66]) {
[0037] (A8)     if (Var[66]) {
[003B] (A8)       if (Var[67]) {
[003F] (70)         lights(9,7,1);
[0043] (18)       } else {
[0046] (70)         lights(3,3,1);
[004A] (**)       }
[004A] (**)     }
[004A] (F0)     lights(Var[66],0,0);
[004E] (**)   }
[004E] (**) }
[004E] (88) if (Var[199] != Var[204]) {
[0053] (9A)   Var[204] = Var[199];
[0056] (A8)   if (Var[199]) {
[005A] (6F)     if (getState04(169)) {
[005F] (7A)       VerbOps(New-45(32,21,14,0,"Switch@@"));
[006E] (18)       goto 0074;
[0071] (**)     }
[0071] (**)   }
[0071] (7A)   VerbOps(Delete(14));
[0074] (60)   cursorCommand(0, 0);
[0077] (**) }
[0077] (80) breakHere();
[0078] (18) goto 0000;
[007B] (A0) stopObjectCode();
END

// Script 7
[0000] (68) Var[122] = isScriptRunning(122);
[0003] (47) clearState08(708);
[0006] (17) clearState02(703);
[0009] (62) stopScript(122);
[000B] (40) cutscene();
[000C] (72) loadRoom(50);
[000E] (A8) if (Var[122]) {
[0012] (05)   drawObject(708,255,255);
[0017] (57)   setState02(703);
[001A] (**) }
[001A] (19) doSentence(253,705,0,1);
[0021] (60) cursorCommand(159, 3);
[0024] (1A) Var[117] = 4;
[0028] (22) Var[243] = saveLoadGame(32);
[002B] (42) startScript(8);
[002D] (58) beginOverride();
[002E] (18) goto 0183;
[0031] (9A) VAR_ACTIVE_OBJECT1 = Var[234];
[0034] (80) breakHere();
[0035] (A8) unless (VAR_ACTIVE_OBJECT1) goto 0034;
[0039] (1A) Var[117] = 255;
[003D] (14) print(255,"");
[0040] (85) drawObject(VAR_ACTIVE_OBJECT1,255,255);
[0044] (1C) startSound(16);
[0046] (9A) Var[121] = VAR_ACTIVE_OBJECT1;
[0049] (80) breakHere();
[004A] (80) breakHere();
[004B] (48) if (Var[121] == 705) {
[0051] (18) } else {
[0054] (9A)   VAR_ACTIVE_OBJECT1 = Var[234];
[0057] (9A)   VAR_SENTENCE_OBJECT1 = Var[234];
[005A] (9A)   VAR_ACTIVE_VERB = Var[234];
[005D] (1A)   Var[122] = 10;
[0061] (9A)   Var[67] = Var[234];
[0064] (1A)   Var[66] = 192;
[0068] (DA)   Var[66] += Var[67];
[006B] (A2)   Var[61] = saveLoadGame(Var[66]);
[006E] (48)   if (Var[61] == 6) {
[0074] (DB)     setBitVar(4048,Var[67],Var[235]);
[0079] (C6)     Var[122]--;
[007B] (18)   } else {
[007E] (DB)     setBitVar(4048,Var[67],Var[234]);
[0083] (**)   }
[0083] (46)   Var[67]++;
[0085] (44)   unless (Var[67] > 9) goto 0064;
[008B] (22)   Var[244] = saveLoadGame(7);
[008E] (C4)   if (Var[244] > Var[122]) {
[0093] (9A)     Var[244] = Var[122];
[0096] (**)   }
[0096] (9A)   Var[61] = Var[234];
[0099] (9A)   Var[66] = Var[234];
[009C] (B1)   VAR_RESULT = getBitVar(4048,Var[66]);
[00A1] (A8)   if (VAR_RESULT) {
[00A5] (19)     doSentence(253,708,0,1);
[00AC] (46)     Var[61]++;
[00AE] (**)   }
[00AE] (46)   Var[66]++;
[00B0] (44)   unless (Var[66] > 9) goto 009C;
[00B6] (48)   if (Var[121] == 703) {
[00BC] (A8)     if (Var[244]) {
[00C0] (9A)       Var[67] = Var[244];
[00C3] (9A)       Var[66] = Var[234];
[00C6] (B1)       VAR_RESULT = getBitVar(4048,Var[66]);
[00CB] (28)       if (!VAR_RESULT) {
[00CF] (19)         doSentence(253,707,0,1);
[00D6] (C6)         Var[67]--;
[00D8] (28)         if (!Var[67]) {
[00DC] (18)           goto 00E7;
[00DF] (**)         }
[00DF] (**)       }
[00DF] (46)       Var[66]++;
[00E1] (44)       unless (Var[66] > 9) goto 00C6;
[00E7] (**)     }
[00E7] (**)   }
[00E7] (48)   if (Var[121] == 704) {
[00ED] (28)     if (!Var[61]) {
[00F1] (1A)       Var[117] = 8;
[00F5] (19)       doSentence(253,706,0,1);
[00FC] (18)       goto 0031;
[00FF] (**)     }
[00FF] (**)   }
[00FF] (60)   cursorCommand(0, 0);
[0102] (80)   breakHere();
[0103] (A8)   if (VAR_ACTIVE_OBJECT1) {
[0107] (19)     doSentence(253,706,0,1);
[010E] (19)     doSentence(253,705,0,1);
[0115] (18)     goto 0039;
[0118] (**)   }
[0118] (38)   unless (VAR_ACTIVE_VERB >= 35) goto 0102;
[011E] (9A)   Var[118] = VAR_ACTIVE_VERB;
[0121] (3A)   Var[118] -= 35;
[0125] (1C)   startSound(16);
[0127] (46)   Var[119]++;
[0129] (80)   breakHere();
[012A] (80)   breakHere();
[012B] (48)   if (Var[121] == 703) {
[0131] (19)     doSentence(253,705,0,1);
[0138] (9A)     Var[66] = Var[118];
[013B] (5A)     Var[66] += 128;
[013F] (A2)     Var[117] = saveLoadGame(Var[66]);
[0142] (48)     if (Var[117] == 0) {
[0148] (B1)       VAR_RESULT = getBitVar(4048,Var[118]);
[014D] (28)       if (!VAR_RESULT) {
[0151] (C6)         Var[244]--;
[0153] (DB)         setBitVar(4048,Var[118],Var[235]);
[0158] (**)       }
[0158] (**)     }
[0158] (**)   }
[0158] (48)   if (Var[121] == 704) {
[015E] (62)     stopScript(8);
[0160] (5A)     Var[118] += 64;
[0164] (A2)     Var[117] = saveLoadGame(Var[118]);
[0167] (48)     if (Var[117] == 3) {
[016D] (18)       goto 0183;
[0170] (**)     }
[0170] (42)     startScript(8);
[0172] (**)   }
[0172] (19)   doSentence(253,706,0,1);
[0179] (19)   doSentence(253,705,0,1);
[0180] (18)   goto 0031;
[0183] (**) }
[0183] (62) stopScript(8);
[0185] (C0) endCutscene();
[0186] (71) VAR_RESULT = getActorCostume(1);
[0189] (48) if (VAR_RESULT == 30) {
[018F] (42)   startScript(108);
[0191] (**) }
[0191] (A0) stopObjectCode();
END

// Script 8
[0000] (80) breakHere();
[0001] (9A) Var[119] = Var[117];
[0004] (48) if (Var[117] == 0) {
[000A] (14)   print(255,"           The game was saved.");
[0023] (**) }
[0023] (48) if (Var[117] == 2) {
[0029] (14)   print(255,"         The game was NOT saved.");
[0044] (**) }
[0044] (48) if (Var[117] == 5) {
[004A] (14)   print(255,"        The game was NOT loaded.");
[0065] (**) }
[0065] (48) if (Var[117] == 8) {
[006B] (14)   print(255,"  There are no saved games on the disk.");
[008D] (**) }
[008D] (48) if (Var[117] == 4) {
[0093] (A8)   if (Var[243]) {
[0097] (04)     if (Var[243] <= 2) {
[009D] (14)       print(255," Put a save-load game disk in Drive \x02");
[00BE] (C8)       if (Var[243] == Var[235]) {
[00C3] (14)         print(255,"A.");
[00C8] (**)       }
[00C8] (48)       if (Var[243] == 2) {
[00CE] (14)         print(255,"B.");
[00D3] (**)       }
[00D3] (18)       goto 00D9;
[00D6] (**)     }
[00D6] (**)   }
[00D6] (14)   print(255,"");
[00D9] (**) }
[00D9] (9A) Var[120] = Var[235];
[00DC] (2E) delay(10);
[00E0] (88) if (Var[119] != Var[117]) {
[00E5] (18)   goto 0001;
[00E8] (**) }
[00E8] (46) Var[120]++;
[00EA] (44) unless (Var[120] > 35) goto 00DC;
[00F0] (18) goto 0004;
[00F3] (A0) stopObjectCode();
END

// Script 9
[0000] (2E) delay(60);
[0004] (9A) Var[197] = Var[234];
[0007] (1A) Var[66] = 1;
[000B] (9A) Var[61] = Var[234];
[000E] (48) if (Var[66] == 2) {
[0014] (46)   Var[66]++;
[0016] (**) }
[0016] (B1) VAR_RESULT = getBitVar(1470,Var[66]);
[001B] (A8) if (VAR_RESULT) {
[001F] (18) } else {
[0022] (48)   if (Var[66] == 1) {
[0028] (6F)     if (getState04(39)) {
[002D] (48)       if (Var[167] == 64) {
[0033] (48)         if (Var[164] == 60) {
[0039] (18)           goto 00D1;
[003C] (**)         }
[003C] (46)         Var[61]++;
[003E] (**)       }
[003E] (**)     }
[003E] (18)   } else {
[0041] (9A)     Var[14] = Var[66];
[0044] (5A)     Var[14] += 166;
[0048] (48)     if (Var[14] == 32) {
[004E] (9A)       Var[14] = Var[66];
[0051] (5A)       Var[14] += 203;
[0055] (A8)       if (Var[14]) {
[0059] (18)         goto 00D1;
[005C] (**)       }
[005C] (46)       Var[61]++;
[005E] (**)     }
[005E] (**)   }
[005E] (83)   Var[67] = getActorRoom(Var[66]);
[0061] (48)   if (Var[67] == 181) {
[0067] (18)   } else {
[006A] (48)     unless (Var[67] == 180) goto 007C;
[0070] (4F)     unless (getState08(472)) goto 007C;
[0075] (**)   }
[0075] (4F)   if (getState08(465)) {
[007A] (46)     Var[61]++;
[007C] (**)   }
[007C] (38)   if (Var[67] >= 189) {
[0082] (04)     if (Var[67] <= 205) {
[0088] (18)       goto 00A7;
[008B] (**)     }
[008B] (**)   }
[008B] (48)   if (Var[67] == 30) {
[0091] (4F)     if (getState08(488)) {
[0096] (46)       Var[61]++;
[0098] (**)     }
[0098] (**)   }
[0098] (48)   if (Var[67] == 34) {
[009E] (18)   } else {
[00A1] (48)     unless (Var[67] == 32) goto 00AE;
[00A7] (**)   }
[00A7] (2F)   if (!getState04(558)) {
[00AC] (46)     Var[61]++;
[00AE] (**)   }
[00AE] (38)   if (Var[67] >= 182) {
[00B4] (04)     if (Var[67] <= 188) {
[00BA] (46)       Var[61]++;
[00BC] (**)     }
[00BC] (**)   }
[00BC] (A8)   if (Var[61]) {
[00C0] (DB)     setBitVar(1505,Var[66],Var[235]);
[00C5] (68)     VAR_RESULT = isScriptRunning(82);
[00C8] (28)     if (!VAR_RESULT) {
[00CC] (42)       startScript(82);
[00CE] (**)     }
[00CE] (18)   } else {
[00D1] (DB)     setBitVar(1505,Var[66],Var[234]);
[00D6] (9A)     Var[14] = Var[66];
[00D9] (5A)     Var[14] += 225;
[00DD] (0A)     Var[Var[14]] = 15;
[00E1] (**)   }
[00E1] (**) }
[00E1] (46) Var[66]++;
[00E3] (44) unless (Var[66] > 4) goto 000B;
[00E9] (6F) if (getState04(49)) {
[00EE] (46)   Var[222]++;
[00F0] (44)   if (Var[222] > 45) {
[00F6] (10)     Var[66] = getObjectOwner(49);
[00FA] (94)     print(Var[66],"Ouch! The lighter's hot!");
[0112] (19)     doSentence(5,49,0,1);
[0119] (**)   }
[0119] (A8) } else if (Var[222]) {
[0120] (C6)   Var[222]--;
[0122] (**) }
[0122] (18) goto 0000;
[0125] (A0) stopObjectCode();
END

// Script 10
[0000] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0006] (1C)   startSound(10);
[0008] (**) }
[0008] (A0) stopObjectCode();
END

// Script 11
[0000] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0006] (1C)   startSound(11);
[0008] (**) }
[0008] (A0) stopObjectCode();
END

// Script 12
[0000] (2E) delay(60);
[0004] (08) unless (VAR_ROOM != 3) goto 0000;
[000A] (9A) Var[159] = Var[234];
[000D] (2E) delay(18000);
[0011] (2E) delay(60);
[0015] (B4) VAR_RESULT = getDist(VAR_EGO,138);
[001A] (78) unless (VAR_RESULT < 25) goto 0011;
[0020] (2E) delay(60);
[0024] (08) unless (VAR_ROOM != 3) goto 0020;
[002A] (9A) Var[159] = Var[160];
[002D] (A0) stopObjectCode();
END

// Script 13
[0000] (28) if (!Var[131]) {
[0004] (42)   startScript(48);
[0006] (**) }
[0006] (42) startScript(14);
[0008] (1C) startSound(15);
[000A] (2E) delay(120);
[000E] (3C) stopSound(15);
[0010] (9A) Var[66] = Var[234];
[0013] (9A) Var[14] = Var[66];
[0016] (5A) Var[14] += 139;
[001A] (9A) Var[15] = Var[66];
[001D] (5A) Var[15] += 143;
[0021] (8A) Var[Var[14]] = Var[15];
[0024] (46) Var[66]++;
[0026] (44) unless (Var[66] > 3) goto 0013;
[002C] (1A) Var[119] = 1;
[0030] (42) startScript(15);
[0032] (80) breakHere();
[0033] (31) VAR_RESULT = getBitVar(1470,0);
[0038] (28) unless (!VAR_RESULT) goto 0032;
[003C] (31) VAR_RESULT = getBitVar(1467,0);
[0041] (28) if (!VAR_RESULT) {
[0045] (42)   startScript(17);
[0047] (4A)   chainScript(77);
[0049] (**) }
[0049] (4A) chainScript(16);
[004B] (A0) stopObjectCode();
END

// Script 14
[0000] (50) pickupObject(19);
[0003] (47) clearState08(19);
[0006] (07) setState08(87);
[0009] (0C) loadScript(18)
[000C] (9A) Var[157] = VAR_EGO;
[000F] (80) breakHere();
[0010] (B4) VAR_RESULT = getDist(Var[157],87);
[0015] (A8) unless (VAR_RESULT) goto 000F;
[0019] (48) if (VAR_ROOM == 1) {
[001F] (1C)   startSound(27);
[0021] (**) }
[0021] (68) VAR_RESULT = isScriptRunning(13);
[0024] (A8) if (VAR_RESULT) {
[0028] (4A)   chainScript(18);
[002A] (**) }
[002A] (07) setState08(19);
[002D] (17) clearState02(19);
[0030] (29) setOwnerOf(19,0);
[0034] (29) setOwnerOf(19,15);
[0038] (A0) stopObjectCode();
END

// Script 15
[0000] (5B) setBitVar(1470,0,Var[235]);
[0005] (9A) Var[118] = Var[234];
[0008] (60) cursorCommand(15, 2);
[000B] (80) breakHere();
[000C] (72) loadRoom(52);
[000E] (5B) setBitVar(1467,0,Var[234]);
[0013] (48) if (Var[119] == 3) {
[0019] (32)   setCameraAt(20);
[001B] (2E)   delay(30);
[001F] (9A)   Var[66] = Var[242];
[0022] (5A)   Var[66] += 64;
[0026] (9A)   Var[67] = Var[234];
[0029] (14)   print(255,"Travel key is: Section \x04\xF3 (\x07\x42 \x04\xF1)\x01Enter code: \x02");
[0055] (18) } else {
[0058] (32)   setCameraAt(60);
[005A] (48)   if (Var[119] == 2) {
[0060] (2E)     delay(60);
[0064] (14)     print(255,"Enter four digits: \x02");
[0078] (**)   }
[0078] (**) }
[0078] (19) doSentence(STOP);
[007A] (60) cursorCommand(31, 3);
[007D] (9A) Var[122] = Var[234];
[0080] (9A) Var[117] = Var[234];
[0083] (9A) Var[120] = Var[234];
[0086] (80) breakHere();
[0087] (A8) unless (Var[120]) goto 0086;
[008B] (48) if (Var[119] == 2) {
[0091] (9A)   Var[14] = Var[117];
[0094] (5A)   Var[14] += 208;
[0098] (8A)   Var[Var[14]] = Var[121];
[009B] (9A)   Var[14] = Var[117];
[009E] (5A)   Var[14] += 212;
[00A2] (88)   if (Var[121] != Var[14]) {
[00A7] (5B)     setBitVar(1458,0,Var[234]);
[00AC] (**)   }
[00AC] (18) } else {
[00AF] (9A)   Var[14] = Var[117];
[00B2] (5A)   Var[14] += 139;
[00B6] (88)   if (Var[121] != Var[14]) {
[00BB] (5B)     setBitVar(1467,0,Var[235]);
[00C0] (**)   }
[00C0] (**) }
[00C0] (46) Var[117]++;
[00C2] (44) unless (Var[117] > 3) goto 0083;
[00C8] (60) cursorCommand(2, 0);
[00CB] (5B) setBitVar(1470,0,Var[234]);
[00D0] (2E) delay(90);
[00D4] (14) print(255,"");
[00D7] (08) if (Var[119] != 3) {
[00DD] (60)   cursorCommand(247, 1);
[00E0] (D2)   actorFollowCamera(VAR_EGO);
[00E2] (18) } else {
[00E5] (31)   VAR_RESULT = getBitVar(1467,0);
[00EA] (A8)   if (VAR_RESULT) {
[00EE] (46)     Var[118]++;
[00F0] (14)     print(255,"INCORRECT ENTRY #\x04\x76");
[0104] (AE)     waitForMessage();
[0105] (48)     if (Var[118] == 5) {
[010B] (4A)       chainScript(135);
[010D] (**)     }
[010D] (18)     goto 0008;
[0110] (**)   }
[0110] (14)   print(255,"Successful entry.\x01Thank you for flying Air Airlines.");
[0141] (AE)   waitForMessage();
[0142] (60)   cursorCommand(1, 0);
[0145] (**) }
[0145] (A0) stopObjectCode();
END

// Script 16
[0000] (48) if (VAR_ROOM == 1) {
[0006] (1C)   startSound(12);
[0008] (**) }
[0008] (2E) delay(30);
[000C] (18) goto 0000;
[000F] (A0) stopObjectCode();
END

// Script 17
[0000] (48) if (VAR_ROOM == 1) {
[0006] (1C)   startSound(14);
[0008] (**) }
[0008] (48) if (VAR_ROOM == 4) {
[000E] (1C)   startSound(13);
[0010] (**) }
[0010] (2E) delay(240);
[0014] (18) goto 0000;
[0017] (A0) stopObjectCode();
END

// Script 18
[0000] (29) setOwnerOf(19,0);
[0004] (29) setOwnerOf(19,15);
[0008] (47) clearState08(87);
[000B] (62) stopScript(13);
[000D] (3C) stopSound(15);
[000F] (62) stopScript(16);
[0011] (62) stopScript(17);
[0013] (3C) stopSound(14);
[0015] (3C) stopSound(13);
[0017] (3C) stopSound(12);
[0019] (A0) stopObjectCode();
END

// Script 19
[0000] (7A) VerbOps(New-9(0,19,0,0,"Push@@"));
[000D] (7A) VerbOps(New-10(0,20,5,0,"Pull@@"));
[001A] (7A) VerbOps(New-3(0,21,10,4,"Give@@"));
[0027] (7A) VerbOps(New-1(6,19,1,0,"Open@@@"));
[0035] (7A) VerbOps(New-2(6,20,6,0,"Close@@"));
[0043] (7A) VerbOps(New-12(6,21,11,0,"Read@@@"));
[0051] (7A) VerbOps(New-13(13,19,2,0,"Walk to@@"));
[0061] (7A) VerbOps(New-14(13,20,7,0,"Pick up@@"));
[0071] (7A) VerbOps(New-15(13,21,12,0,"What is@@"));
[0081] (7A) VerbOps(New-6(22,19,3,0,"Put on@@@@"));
[0092] (7A) VerbOps(New-7(22,20,8,0,"Take off@@"));
[00A3] (7A) VerbOps(New-11(22,21,13,255,"Use@@@@@@@"));
[00B4] (7A) VerbOps(New-4(32,19,4,0,"Turn on@"));
[00C3] (7A) VerbOps(New-5(32,20,9,0,"Turn off"));
[00D2] (7A) VerbOps(Delete(14));
[00D5] (A8) if (Var[199]) {
[00D9] (6F)   if (getState04(169)) {
[00DE] (7A)     VerbOps(New-45(32,21,14,0,"Switch@@"));
[00ED] (**)   }
[00ED] (**) }
[00ED] (31) VAR_RESULT = getBitVar(1445,0);
[00F2] (A8) if (VAR_RESULT) {
[00F6] (19)   doSentence(253,183,0,1);
[00FD] (**) }
[00FD] (68) VAR_RESULT = isScriptRunning(49);
[0100] (A8) if (VAR_RESULT) {
[0104] (7A)   VerbOps(New-30(32,21,14,0,"To Zak@@"));
[0113] (48)   if (VAR_EGO == 6) {
[0119] (7A)     VerbOps(New-13(13,19,2,0,"Fly to@@@"));
[0129] (**)   }
[0129] (**) }
[0129] (48) if (VAR_EGO == 1) {
[012F] (9A)   Var[66] = Var[234];
[0132] (B1)   VAR_RESULT = getBitVar(1513,Var[66]);
[0137] (A8)   if (VAR_RESULT) {
[013B] (FA)     VerbOps(Delete(Var[66]););
[013E] (**)   }
[013E] (46)   Var[66]++;
[0140] (44)   unless (Var[66] > 13) goto 0132;
[0146] (**) }
[0146] (48) if (VAR_EGO == 2) {
[014C] (9A)   Var[66] = Var[234];
[014F] (B1)   VAR_RESULT = getBitVar(1527,Var[66]);
[0154] (A8)   if (VAR_RESULT) {
[0158] (FA)     VerbOps(Delete(Var[66]););
[015B] (**)   }
[015B] (46)   Var[66]++;
[015D] (44)   unless (Var[66] > 13) goto 014F;
[0163] (**) }
[0163] (1A) VAR_BACKUP_VERB = 13;
[0167] (19) doSentence(RESET);
[0169] (AC) drawSentence();
[016A] (60) cursorCommand(0, 0);
[016D] (A0) stopObjectCode();
END

// Script 20
[0000] (04) if (VAR_ACTIVE_OBJECT2 <= 4) {
[0006] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0009] (48)   if (VAR_ACTIVE_OBJECT2 == 2) {
[000F] (9D)     if (classOfIs(VAR_ACTIVE_OBJECT1,32)) {
[0014] (42)       startScript(119);
[0016] (**)     }
[0016] (**)   }
[0016] (**) }
[0016] (A0) stopObjectCode();
END

// Script 21
[0000] (1C) startSound(18);
[0002] (2E) delay(22);
[0006] (4F) if (getState08(130)) {
[000B] (47)   clearState08(130);
[000E] (57)   setState02(130);
[0011] (29)   setOwnerOf(29,0);
[0015] (4F)   if (getState08(126)) {
[001A] (68)     VAR_RESULT = isScriptRunning(22);
[001D] (28)     if (!VAR_RESULT) {
[0021] (07)       setState08(23);
[0024] (17)       clearState02(23);
[0027] (18)     } else {
[002A] (D8)       printEgo("Oh no! The crumbs got washed away!");
[0048] (**)     }
[0048] (0F)   } else if (!getState08(129)) {
[0050] (27)     setState04(23);
[0053] (**)   }
[0053] (**) }
[0053] (48) if (Var[138] == 2) {
[0059] (1A)   Var[138] = 3;
[005D] (AE)   waitForMessage();
[005E] (D8)   printEgo("WHOOPS! Shredded Sushi.");
[0075] (5A)   Var[225] += 10;
[0079] (**) }
[0079] (18) goto 0002;
[007C] (A0) stopObjectCode();
END

// Script 22
[0000] (4F) if (getState08(23)) {
[0005] (47)   clearState08(23);
[0008] (57)   setState02(23);
[000B] (D8)   printEgo("Whoops! That washed away the crumbs!");
[002C] (**) }
[002C] (9A) Var[44] = Var[235];
[002F] (4F) if (getState08(121)) {
[0034] (05)   drawObject(127,255,255);
[0039] (**) }
[0039] (80) breakHere();
[003A] (4F) if (getState08(121)) {
[003F] (05)   drawObject(128,255,255);
[0044] (**) }
[0044] (80) breakHere();
[0045] (28) unless (!Var[44]) goto 002F;
[0049] (07) setState08(127);
[004C] (07) setState08(128);
[004F] (A0) stopObjectCode();
END

// Script 23
[0000] (48) if (VAR_ROOM == 129) {
[0006] (0F)   if (!getState08(298)) {
[000B] (1C)     startSound(25);
[000D] (07)     setState08(298);
[0010] (67)     clearState04(298);
[0013] (2E)     delay(120);
[0017] (D8)     printEgo("I guess I chose the right channel!");
[0035] (18)   } else {
[0038] (42)     startScript(3);
[003A] (**)   }
[003A] (48) } else if (VAR_ROOM == 2) {
[0043] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[0046] (78)   if (VAR_RESULT < 45) {
[004C] (4F)     if (getState08(118)) {
[0051] (6F)       if (getState04(21)) {
[0056] (67)         clearState04(21);
[0059] (19)         doSentence(253,118,0,1);
[0060] (18)       } else {
[0063] (27)         setState04(21);
[0066] (42)         startScript(102);
[0068] (**)       }
[0068] (18)     } else {
[006B] (D8)       printEgo("I wonder why it's not working?");
[0086] (**)     }
[0086] (18)   } else {
[0089] (D8)     printEgo("I'm too far away from the TV.");
[00A2] (**)   }
[00A2] (18) } else {
[00A5] (D8)   printEgo("It doesn't seem to work here.");
[00BF] (**) }
[00BF] (A0) stopObjectCode();
END

// Script 24
[0000] (40) cutscene();
[0001] (28) if (!Var[45]) {
[0005] (42)   startScript(25);
[0007] (80)   breakHere();
[0008] (28)   unless (!Var[45]) goto 0007;
[000C] (**) }
[000C] (B1) VAR_RESULT = getBitVar(848,VAR_EGO);
[0011] (A8) if (VAR_RESULT) {
[0015] (19)   doSentence(253,184,0,1);
[001C] (80)   breakHere();
[001D] (48)   unless (Var[51] == 255) goto 001C;
[0023] (14)   print(10,"You can't buy somethin with no CashCard!");
[0048] (AE)   waitForMessage();
[0049] (91)   animateActor(VAR_EGO,246);
[004C] (D8)   printEgo("Oh yeah!");
[0055] (18) } else {
[0058] (9A)   Var[45] = VAR_ACTIVE_OBJECT1;
[005B] (90)   VAR_RESULT = getObjectOwner(Var[45]);
[005E] (C8)   if (VAR_RESULT == VAR_EGO) {
[0063] (14)     print(10,"You already own that!");
[0078] (18)     goto 0048;
[007B] (**)   }
[007B] (D8)   printEgo("I want to buy the \x06\x2D.");
[008D] (19)   doSentence(253,182,0,1);
[0094] (58)   beginOverride();
[0095] (18)   goto 01E6;
[0098] (2E)   delay(60);
[009C] (19)   doSentence(253,185,0,1);
[00A3] (3B)   waitForActor(10);
[00A5] (80)   breakHere();
[00A6] (87)   setState08(Var[45]);
[00A8] (D7)   setState02(Var[45]);
[00AA] (80)   breakHere();
[00AB] (1E)   walkActorTo(10,22,47);
[00AF] (14)   print(10,"Come over here.");
[00BF] (80)   breakHere();
[00C0] (B6)   walkActorToObject(VAR_EGO,181);
[00C4] (3B)   waitForActor(10);
[00C6] (11)   animateActor(10,250);
[00C9] (BB)   waitForActor(VAR_EGO);
[00CB] (AE)   waitForMessage();
[00CC] (14)   print(10,"That'll be \x04\x2F bucks, friend.");
[00E8] (AE)   waitForMessage();
[00E9] (B1)   VAR_RESULT = getBitVar(848,VAR_EGO);
[00EE] (A8)   if (VAR_RESULT) {
[00F2] (D8)     printEgo("Uh, I don't have my CashCard with me.");
[0112] (AE)     waitForMessage();
[0113] (14)     print(10,"Can't ya read? `CashCards only!` Come\x01back when ya have it!");
[0148] (18)   } else {
[014B] (D8)     printEgo("Here's my CashCard.");
[015E] (AE)     waitForMessage();
[015F] (14)     print(10,"Thanks.");
[0169] (AE)     waitForMessage();
[016A] (11)     animateActor(10,247);
[016D] (2E)     delay(60);
[0171] (1C)     startSound(84);
[0173] (2E)     delay(120);
[0177] (11)     animateActor(10,246);
[017A] (9A)     Var[14] = VAR_EGO;
[017D] (5A)     Var[14] += 61;
[0181] (C4)     if (Var[47] > Var[14]) {
[0186] (14)       print(10,"Sorry, ya don't have enough money.\x01Here's yer card back.");
[01B9] (2E)       delay(120);
[01BD] (18)     } else {
[01C0] (14)       print(10,"Here\x02");
[01C8] (48)       if (Var[45] == 42) {
[01CE] (14)         print(10,", and good luck!");
[01DE] (18)       } else {
[01E1] (14)         print(10,".");
[01E5] (**)       }
[01E5] (AE)       waitForMessage();
[01E6] (1A)       Var[49] = 181;
[01EA] (A8)       if (VAR_OVERRIDE) {
[01EE] (11)         animateActor(10,255);
[01F1] (91)         animateActor(VAR_EGO,255);
[01F4] (01)         putActor(10,22,47);
[01F8] (11)         animateActor(10,250);
[01FB] (8E)         putActorAtObject(VAR_EGO,181);
[01FF] (91)         animateActor(VAR_EGO,251);
[0202] (42)         startScript(5);
[0204] (87)         setState08(Var[45]);
[0206] (D7)         setState02(Var[45]);
[0208] (80)         breakHere();
[0209] (B1)         VAR_RESULT = getBitVar(848,VAR_EGO);
[020E] (A8)         if (VAR_RESULT) {
[0212] (18)           goto 0113;
[0215] (**)         }
[0215] (9A)         Var[14] = VAR_EGO;
[0218] (5A)         Var[14] += 61;
[021C] (C4)         if (Var[47] > Var[14]) {
[0221] (18)           goto 0186;
[0224] (**)         }
[0224] (08)         if (Var[45] != 42) {
[022A] (14)           print(10,"It's a bargain at \x04\x2F bucks!");
[0244] (**)         }
[0244] (**)       }
[0244] (FF)       if (getState01(Var[45])) {
[0248] (D0)         pickupObject(Var[45]);
[024A] (18)       } else {
[024D] (E9)         setOwnerOf(Var[46],VAR_EGO);
[0250] (**)       }
[0250] (9A)       Var[14] = VAR_EGO;
[0253] (5A)       Var[14] += 61;
[0257] (EA)       Var[Var[14]] -= Var[47];
[025A] (48)       if (Var[45] == 34) {
[0260] (1A)         Var[66] = 35;
[0264] (90)         VAR_RESULT = getObjectOwner(Var[66]);
[0267] (48)         if (VAR_RESULT == 15) {
[026D] (D0)           pickupObject(Var[66]);
[026F] (A9)           setOwnerOf(Var[66],12);
[0272] (**)         }
[0272] (46)         Var[66]++;
[0274] (44)         unless (Var[66] > 38) goto 0264;
[027A] (**)       }
[027A] (48)       if (Var[45] == 39) {
[0280] (AE)         waitForMessage();
[0281] (14)         print(10,"That's my last \x06\x2D with transparent\x01gloves.");
[02AA] (**)       }
[02AA] (48)       if (Var[45] == 42) {
[02B0] (9A)         Var[45] = Var[234];
[02B3] (5B)         setBitVar(1461,0,Var[235]);
[02B8] (1A)         Var[119] = 2;
[02BC] (42)         startScript(15);
[02BE] (42)         startScript(73);
[02C0] (80)         breakHere();
[02C1] (31)         VAR_RESULT = getBitVar(1470,0);
[02C6] (28)         unless (!VAR_RESULT) goto 02C0;
[02CA] (18)         goto 02EE;
[02CD] (**)       }
[02CD] (9A)       Var[45] = Var[234];
[02D0] (18)       goto 02EE;
[02D3] (**)     }
[02D3] (**)   }
[02D3] (AE)   waitForMessage();
[02D4] (42)   startScript(25);
[02D6] (9E)   walkActorTo(VAR_EGO,24,60);
[02DA] (BB)   waitForActor(VAR_EGO);
[02DC] (D8)   printEgo("How embarrassing!");
[02EE] (**) }
[02EE] (C0) endCutscene();
[02EF] (A0) stopObjectCode();
END

// Script 25
[0000] (9A) Var[50] = Var[235];
[0003] (A8) if (Var[45]) {
[0007] (FF)   if (getState01(Var[45])) {
[000B] (A9)     setOwnerOf(Var[45],0);
[000E] (A9)     setOwnerOf(Var[45],15);
[0011] (**)   }
[0011] (19)   doSentence(253,185,0,1);
[0018] (3B)   waitForActor(10);
[001A] (80)   breakHere();
[001B] (97)   clearState02(Var[45]);
[001D] (C7)   clearState08(Var[45]);
[001F] (9A)   Var[45] = Var[234];
[0022] (11)   animateActor(10,246);
[0025] (**) }
[0025] (9A) Var[50] = Var[234];
[0028] (A0) stopObjectCode();
END

// Script 26
[0000] (80) breakHere();
[0001] (28) unless (!Var[50]) goto 0000;
[0005] (B1) VAR_RESULT = getBitVar(848,VAR_EGO);
[000A] (A8) if (VAR_RESULT) {
[000E] (60)   cursorCommand(15, 2);
[0011] (19)   doSentence(253,184,0,1);
[0018] (80)   breakHere();
[0019] (48)   unless (Var[51] == 255) goto 0018;
[001F] (14)   print(10,"You need a CashCard to sell somethin'!");
[0042] (AE)   waitForMessage();
[0043] (91)   animateActor(VAR_EGO,246);
[0046] (D8)   printEgo("Whoops!");
[004F] (60)   cursorCommand(247, 1);
[0052] (62)   stopScript(0);
[0054] (**) }
[0054] (9A) Var[50] = Var[235];
[0057] (B4) VAR_RESULT = getDist(VAR_EGO,182);
[005C] (44) if (VAR_RESULT > 4) {
[0062] (19)   doSentence(253,184,0,1);
[0069] (80)   breakHere();
[006A] (48)   unless (Var[51] == 255) goto 0069;
[0070] (14)   print(10,"Ya gotta go to the Sell window.");
[008C] (18) } else {
[008F] (1A)   Var[49] = 182;
[0093] (40)   cutscene();
[0094] (B6)   walkActorToObject(VAR_EGO,182);
[0098] (A8)   if (Var[45]) {
[009C] (14)     print(10,"Someone will be with ya in a moment.");
[00BC] (42)     startScript(25);
[00BE] (**)   }
[00BE] (80)   breakHere();
[00BF] (28)   unless (!Var[45]) goto 00BE;
[00C3] (9A)   Var[47] = Var[234];
[00C6] (9A)   Var[45] = VAR_ACTIVE_OBJECT1;
[00C9] (9A)   Var[52] = Var[45];
[00CC] (19)   doSentence(253,182,0,1);
[00D3] (58)   beginOverride();
[00D4] (18)   goto 0141;
[00D7] (1E)   walkActorTo(10,16,47);
[00DB] (3B)   waitForActor(10);
[00DD] (11)   animateActor(10,246);
[00E0] (D8)   printEgo("I'd like to sell this to you.");
[00F9] (AE)   waitForMessage();
[00FA] (90)   VAR_RESULT = getObjectOwner(Var[52]);
[00FD] (88)   if (VAR_RESULT != VAR_EGO) {
[0102] (14)     print(10,"Hey, what are ya trying to pull! I'm\x01not gonna buy my own \x06\x2D!");
[0136] (18)   } else {
[0139] (14)     print(10,"Hmmm.");
[0141] (48)     if (Var[45] == 21) {
[0147] (1A)       Var[45] = 188;
[014B] (1A)       Var[47] = 50;
[014F] (**)     }
[014F] (48)     if (Var[45] == 34) {
[0155] (1A)       Var[47] = 30;
[0159] (**)     }
[0159] (48)     if (Var[45] == 81) {
[015F] (1A)       Var[45] = 185;
[0163] (1A)       Var[47] = 500;
[0167] (**)     }
[0167] (48)     if (Var[45] == 33) {
[016D] (1A)       Var[45] = 183;
[0171] (1A)       Var[47] = 60;
[0175] (**)     }
[0175] (48)     if (Var[45] == 56) {
[017B] (1A)       Var[45] = 184;
[017F] (1A)       Var[47] = 60;
[0183] (**)     }
[0183] (48)     if (Var[45] == 55) {
[0189] (1A)       Var[45] = 186;
[018D] (1A)       Var[47] = 250;
[0191] (**)     }
[0191] (48)     if (Var[45] == 26) {
[0197] (1A)       Var[45] = 187;
[019B] (AE)       waitForMessage();
[019C] (6F)       if (getState04(26)) {
[01A1] (14)         print(10,"Oh!\x03Wow!\x03What a beautiful silver sculpture!\x01I'm adding this to my art collection!");
[01EB] (1A)         Var[47] = 1500;
[01EF] (18)       } else {
[01F2] (14)         print(10,"An antique silver \x06\x2D!");
[0207] (1A)         Var[47] = 100;
[020B] (**)       }
[020B] (AE)       waitForMessage();
[020C] (**)     }
[020C] (48)     if (Var[45] == 41) {
[0212] (1A)       Var[47] = 99;
[0216] (**)     }
[0216] (48)     if (Var[45] == 40) {
[021C] (1A)       Var[47] = 2;
[0220] (19)       doSentence(7,40,0,1);
[0227] (**)     }
[0227] (48)     if (Var[45] == 39) {
[022D] (1A)       Var[47] = 100;
[0231] (19)       doSentence(7,39,0,1);
[0238] (**)     }
[0238] (48)     if (Var[45] == 43) {
[023E] (1A)       Var[47] = 10;
[0242] (19)       doSentence(7,43,0,1);
[0249] (**)     }
[0249] (48)     if (Var[45] == 44) {
[024F] (1A)       Var[47] = 50;
[0253] (**)     }
[0253] (A8)     if (VAR_OVERRIDE) {
[0257] (01)       putActor(10,16,47);
[025B] (11)       animateActor(10,250);
[025E] (18)     } else {
[0261] (58)       beginOverride();
[0262] (18)       goto 031D;
[0265] (AE)       waitForMessage();
[0266] (2E)       delay(60);
[026A] (28)       if (!Var[47]) {
[026E] (14)         print(10,"I don't want yer \x06\x2D.");
[0281] (18)         goto 03C2;
[0284] (**)       }
[0284] (14)       print(10,"Gimme yer CashCard.");
[0298] (AE)       waitForMessage();
[0299] (B1)       VAR_RESULT = getBitVar(848,VAR_EGO);
[029E] (A8)       if (VAR_RESULT) {
[02A2] (D8)         printEgo("Uh, I don't have it with me.");
[02BA] (AE)         waitForMessage();
[02BB] (14)         print(10,"I only deal in CashCards. Come back when\x01ya have one.");
[02EA] (AE)         waitForMessage();
[02EB] (9E)         walkActorTo(VAR_EGO,20,60);
[02EF] (BB)         waitForActor(VAR_EGO);
[02F1] (D8)         printEgo("Whoops!");
[02FA] (18)         goto 03C2;
[02FD] (**)       }
[02FD] (D8)       printEgo("Here.");
[0304] (AE)       waitForMessage();
[0305] (14)       print(10,"Thanks.");
[030F] (AE)       waitForMessage();
[0310] (11)       animateActor(10,247);
[0313] (2E)       delay(60);
[0317] (1C)       startSound(84);
[0319] (2E)       delay(120);
[031D] (**)     }
[031D] (A8)     if (VAR_OVERRIDE) {
[0321] (11)       animateActor(10,250);
[0324] (80)       breakHere();
[0325] (90)       VAR_RESULT = getObjectOwner(Var[52]);
[0328] (88)       if (VAR_RESULT != VAR_EGO) {
[032D] (18)         goto 0102;
[0330] (**)       }
[0330] (B1)       VAR_RESULT = getBitVar(848,VAR_EGO);
[0335] (A8)       if (VAR_RESULT) {
[0339] (18)         goto 02BB;
[033C] (**)       }
[033C] (28)       if (!Var[47]) {
[0340] (18)         goto 026E;
[0343] (**)       }
[0343] (**)     }
[0343] (A9)     setOwnerOf(Var[52],14);
[0346] (48)     if (Var[52] == 34) {
[034C] (27)       setState04(34);
[034F] (1A)       Var[66] = 35;
[0353] (90)       VAR_RESULT = getObjectOwner(Var[66]);
[0356] (48)       if (VAR_RESULT == 12) {
[035C] (A9)         setOwnerOf(Var[66],0);
[035F] (A9)         setOwnerOf(Var[66],15);
[0362] (**)       }
[0362] (46)       Var[66]++;
[0364] (44)       unless (Var[66] > 38) goto 0353;
[036A] (**)     }
[036A] (11)     animateActor(10,246);
[036D] (3B)     waitForActor(10);
[036F] (14)     print(10,"Here's \x04\x2F bucks for it.\x01A pleasure doin' business with ya.");
[03A4] (9A)     Var[14] = VAR_EGO;
[03A7] (5A)     Var[14] += 61;
[03AB] (AA)     Var[Var[14]] += Var[47];
[03AE] (48)     if (Var[47] == 1500) {
[03B4] (A9)       setOwnerOf(Var[52],0);
[03B7] (9A)       Var[45] = Var[234];
[03BA] (18)     } else {
[03BD] (42)       startScript(25);
[03BF] (**)     }
[03BF] (18)   } else {
[03C2] (28)     if (!VAR_OVERRIDE) {
[03C6] (AE)       waitForMessage();
[03C7] (**)     }
[03C7] (11)     animateActor(10,247);
[03CA] (9A)     Var[45] = Var[234];
[03CD] (**)   }
[03CD] (C0)   endCutscene();
[03CE] (**) }
[03CE] (9A) Var[50] = Var[234];
[03D1] (A0) stopObjectCode();
END

// Script 27
[0000] (80) breakHere();
[0001] (28) unless (!Var[50]) goto 0000;
[0005] (AE) waitForMessage();
[0006] (68) VAR_RESULT = isScriptRunning(24);
[0009] (28) if (!VAR_RESULT) {
[000D] (B4)   VAR_RESULT = getDist(VAR_EGO,181);
[0012] (78)   if (VAR_RESULT < 3) {
[0018] (08)     if (Var[49] != 181) {
[001E] (1A)       Var[49] = 181;
[0022] (1E)       walkActorTo(10,22,47);
[0026] (3B)       waitForActor(10);
[0028] (11)       animateActor(10,246);
[002B] (3B)       waitForActor(10);
[002D] (AE)       waitForMessage();
[002E] (B4)       VAR_RESULT = getDist(VAR_EGO,181);
[0033] (78)       if (VAR_RESULT < 3) {
[0039] (B1)         VAR_RESULT = getBitVar(848,VAR_EGO);
[003E] (A8)         if (VAR_RESULT) {
[0042] (14)           print(10,"I told ya, no card, no bizness.");
[005E] (18)           goto 00FC;
[0061] (**)         }
[0061] (14)         print(10,"Show me what ya wanna buy.");
[0079] (**)       }
[0079] (**)     }
[0079] (**)   }
[0079] (**) }
[0079] (68) VAR_RESULT = isScriptRunning(26);
[007C] (28) if (!VAR_RESULT) {
[0080] (B4)   VAR_RESULT = getDist(VAR_EGO,182);
[0085] (78)   if (VAR_RESULT < 3) {
[008B] (08)     if (Var[49] != 182) {
[0091] (1E)       walkActorTo(10,16,47);
[0095] (3B)       waitForActor(10);
[0097] (11)       animateActor(10,246);
[009A] (3B)       waitForActor(10);
[009C] (AE)       waitForMessage();
[009D] (B4)       VAR_RESULT = getDist(VAR_EGO,182);
[00A2] (78)       if (VAR_RESULT < 3) {
[00A8] (1A)         Var[49] = 182;
[00AC] (B1)         VAR_RESULT = getBitVar(848,VAR_EGO);
[00B1] (A8)         if (VAR_RESULT) {
[00B5] (14)           print(10,"Can't help ya without yer card.");
[00D2] (18)           goto 00FC;
[00D5] (**)         }
[00D5] (14)         print(10,"Can I help ya?");
[00E3] (**)       }
[00E3] (**)     }
[00E3] (**)   }
[00E3] (**) }
[00E3] (B4) VAR_RESULT = getDist(VAR_EGO,181);
[00E8] (44) if (VAR_RESULT > 2) {
[00EE] (B4)   VAR_RESULT = getDist(VAR_EGO,182);
[00F3] (44)   if (VAR_RESULT > 2) {
[00F9] (9A)     Var[49] = Var[234];
[00FC] (**)   }
[00FC] (**) }
[00FC] (80) breakHere();
[00FD] (18) goto 0000;
[0100] (A0) stopObjectCode();
END

// Script 28
[0000] (80) breakHere();
[0001] (9A) Var[149] = VAR_ROOM;
[0004] (60) cursorCommand(159, 3);
[0007] (72) loadRoom(48);
[0009] (9A) Var[66] = Var[234];
[000C] (FA) VerbOps(Delete(Var[66]););
[000F] (46) Var[66]++;
[0011] (44) unless (Var[66] > 14) goto 000C;
[0017] (7A) VerbOps(New-30(24,21,14,0,"Finished drawing"));
[002E] (7A) VerbOps(New-13(0,200,12,0,"@"));
[0036] (60) cursorCommand(0, 0);
[0039] (1A) Var[118] = 672;
[003D] (9A) Var[66] = Var[234];
[0040] (B1) VAR_RESULT = getBitVar(1936,Var[66]);
[0045] (A8) if (VAR_RESULT) {
[0049] (87)   setState08(Var[118]);
[004B] (18) } else {
[004E] (C7)   clearState08(Var[118]);
[0050] (**) }
[0050] (46) Var[118]++;
[0052] (46) Var[66]++;
[0054] (44) unless (Var[118] > 695) goto 0040;
[005A] (80) breakHere();
[005B] (48) unless (VAR_ACTIVE_VERB == 30) goto 005A;
[0061] (72) loadRoom(0);
[0063] (5B) setBitVar(1467,0,Var[234]);
[0068] (1A) Var[118] = 672;
[006C] (9A) Var[66] = Var[234];
[006F] (8F) if (!getState08(Var[118])) {
[0073] (DB)   setBitVar(1936,Var[66],Var[234]);
[0078] (B1)   VAR_RESULT = getBitVar(1904,Var[66]);
[007D] (A8)   if (VAR_RESULT) {
[0081] (5B)     setBitVar(1467,0,Var[235]);
[0086] (**)   }
[0086] (18) } else {
[0089] (DB)   setBitVar(1936,Var[66],Var[235]);
[008E] (B1)   VAR_RESULT = getBitVar(1904,Var[66]);
[0093] (28)   if (!VAR_RESULT) {
[0097] (5B)     setBitVar(1467,0,Var[235]);
[009C] (**)   }
[009C] (**) }
[009C] (46) Var[66]++;
[009E] (46) Var[118]++;
[00A0] (44) unless (Var[118] > 695) goto 006F;
[00A6] (48) if (Var[149] == 130) {
[00AC] (9A)   Var[127] = Var[121];
[00AF] (9A)   Var[128] = Var[122];
[00B2] (48) } else if (Var[149] == 139) {
[00BB] (18)   goto 00C7;
[00BE] (48) } else if (Var[149] == 140) {
[00C7] (9A)   Var[125] = Var[121];
[00CA] (9A)   Var[126] = Var[122];
[00CD] (48) } else if (Var[149] == 193) {
[00D6] (9A)   Var[129] = Var[121];
[00D9] (9A)   Var[130] = Var[122];
[00DC] (18)   /* goto 00DF; */
[00DF] (**) }
[00DF] (42) startScript(19);
[00E1] (60) cursorCommand(15, 2);
[00E4] (D2) actorFollowCamera(VAR_EGO);
[00E6] (2E) delay(120);
[00EA] (31) VAR_RESULT = getBitVar(1467,0);
[00EF] (28) if (!VAR_RESULT) {
[00F3] (48)   if (VAR_ROOM_RESOURCE == 22) {
[00F9] (07)     setState08(400);
[00FC] (17)     clearState02(400);
[00FF] (57)     setState02(399);
[0102] (17)     clearState02(389);
[0105] (30)     setBoxFlags(2,0);
[0108] (1C)     startSound(78);
[010A] (**)   }
[010A] (48)   if (VAR_ROOM == 130) {
[0110] (1C)     startSound(25);
[0112] (67)     clearState04(307);
[0115] (57)     setState02(307);
[0118] (07)     setState08(307);
[011B] (**)   }
[011B] (48)   if (VAR_ROOM == 193) {
[0121] (42)     startScript(132);
[0123] (67)     clearState04(293);
[0126] (19)     doSentence(1,301,0,1);
[012D] (19)     doSentence(1,299,0,1);
[0134] (19)     doSentence(1,303,0,1);
[013B] (**)   }
[013B] (18) } else {
[013E] (D8)   printEgo("I guess it didn't work.");
[0153] (**) }
[0153] (60) cursorCommand(247, 1);
[0156] (A0) stopObjectCode();
END

// Script 29
[0000] (2F) if (!getState04(89)) {
[0005] (27)   setState04(89);
[0008] (27)   setState04(87);
[000B] (4F)   if (getState08(88)) {
[0010] (0F)     if (!getState08(19)) {
[0015] (27)       setState04(88);
[0018] (**)     }
[0018] (**)   }
[0018] (**) }
[0018] (2F) if (!getState04(122)) {
[001D] (0F)   if (!getState08(129)) {
[0022] (0F)     if (!getState08(125)) {
[0027] (2F)       if (!getState04(21)) {
[002C] (2F)         if (!getState04(112)) {
[0031] (18)           goto 017B;
[0034] (**)         }
[0034] (**)       }
[0034] (**)     }
[0034] (**)   }
[0034] (**) }
[0034] (40) cutscene();
[0035] (58) beginOverride();
[0036] (18) goto 0147;
[0039] (2E) delay(30);
[003D] (11) animateActor(1,244);
[0040] (2E) delay(60);
[0044] (9A) Var[45] = Var[234];
[0047] (6F) if (getState04(21)) {
[004C] (D8)   printEgo("I need to turn the TV off.");
[0062] (10)   VAR_RESULT = getObjectOwner(21);
[0066] (48)   if (VAR_RESULT == 1) {
[006C] (1E)     walkActorTo(1,32,56);
[0070] (3B)     waitForActor(1);
[0072] (19)     doSentence(11,21,0,0);
[0079] (18)   } else {
[007C] (19)     doSentence(10,118,0,0);
[0083] (**)   }
[0083] (4C)   waitForSentence();
[0084] (2E)   delay(60);
[0088] (46)   Var[45]++;
[008A] (**) }
[008A] (6F) if (getState04(122)) {
[008F] (D8)   printEgo("I don't want to leave the disposal on.");
[00B0] (19)   doSentence(5,122,0,0);
[00B7] (4C)   waitForSentence();
[00B8] (2E)   delay(60);
[00BC] (46)   Var[45]++;
[00BE] (**) }
[00BE] (4F) if (getState08(129)) {
[00C3] (D8)   printEgo("I can't leave with the water running.");
[00E4] (19)   doSentence(5,129,0,0);
[00EB] (4C)   waitForSentence();
[00EC] (2E)   delay(60);
[00F0] (46)   Var[45]++;
[00F2] (**) }
[00F2] (4F) if (getState08(125)) {
[00F7] (D8)   printEgo("I forgot to close the fridge.");
[0111] (19)   doSentence(2,125,0,0);
[0118] (4C)   waitForSentence();
[0119] (2E)   delay(60);
[011D] (46)   Var[45]++;
[011F] (**) }
[011F] (28) if (!Var[45]) {
[0123] (D8)   printEgo("Looks good to me.");
[0133] (67)   clearState04(112);
[0136] (AE)   waitForMessage();
[0137] (11)   animateActor(1,245);
[013A] (18) } else {
[013D] (36)   walkActorToObject(1,112);
[0141] (27)   setState04(112);
[0144] (**) }
[0144] (3B) waitForActor(1);
[0146] (80) breakHere();
[0147] (A8) if (VAR_OVERRIDE) {
[014B] (67)   clearState04(122);
[014E] (47)   clearState08(129);
[0151] (47)   clearState08(123);
[0154] (47)   clearState08(125);
[0157] (6F)   if (getState04(21)) {
[015C] (10)     VAR_RESULT = getObjectOwner(21);
[0160] (48)     if (VAR_RESULT == 1) {
[0166] (67)       clearState04(21);
[0169] (19)       doSentence(253,118,0,1);
[0170] (18)     } else {
[0173] (19)       doSentence(10,118,0,1);
[017A] (**)     }
[017A] (**)   }
[017A] (**) }
[017A] (C0) endCutscene();
[017B] (03) VAR_RESULT = getActorRoom(2);
[017E] (88) if (VAR_RESULT != VAR_ROOM) {
[0183] (47)   clearState08(112);
[0186] (**) }
[0186] (24) loadRoomWithEgo(134,3,41,53);
[018C] (A0) stopObjectCode();
END

// Script 30
[0000] (48) if (VAR_EGO == 1) {
[0006] (1A)   Var[118] = 18;
[000A] (90)   VAR_RESULT = getObjectOwner(Var[118]);
[000D] (48)   if (VAR_RESULT == 1) {
[0013] (1A)     Var[61] = 82;
[0017] (90)     VAR_RESULT = getObjectOwner(Var[61]);
[001A] (48)     if (VAR_RESULT == 1) {
[0020] (18)       goto 0043;
[0023] (**)     }
[0023] (18)     goto 0092;
[0026] (**)   }
[0026] (18) } else {
[0029] (1A)   Var[118] = 32;
[002D] (90)   VAR_RESULT = getObjectOwner(Var[118]);
[0030] (48)   if (VAR_RESULT == 2) {
[0036] (1A)     Var[61] = 83;
[003A] (90)     VAR_RESULT = getObjectOwner(Var[61]);
[003D] (48)     if (VAR_RESULT == 2) {
[0043] (9A)       Var[14] = VAR_EGO;
[0046] (5A)       Var[14] += 61;
[004A] (9A)       Var[15] = VAR_EGO;
[004D] (5A)       Var[15] += 81;
[0051] (AA)       Var[Var[14]] += Var[15];
[0054] (9A)       Var[14] = VAR_EGO;
[0057] (5A)       Var[14] += 154;
[005B] (8A)       Var[Var[14]] = Var[234];
[005E] (60)       cursorCommand(31, 3);
[0061] (72)       loadRoom(45);
[0063] (19)       doSentence(253,670,0,1);
[006A] (18)       goto 0097;
[006D] (**)     }
[006D] (18)     goto 0092;
[0070] (**)   }
[0070] (**) }
[0070] (D8) printEgo("Oops! I don't have my CashCard here.");
[0090] (62) stopScript(0);
[0092] (60) cursorCommand(31, 3);
[0095] (72) loadRoom(45);
[0097] (32) setCameraAt(20);
[0099] (9A) Var[117] = Var[234];
[009C] (1A) Var[120] = 3;
[00A0] (9A) Var[14] = Var[117];
[00A3] (5A) Var[14] += 68;
[00A7] (A5) drawObject(Var[14],7,Var[120]);
[00AB] (9A) Var[14] = Var[117];
[00AE] (5A) Var[14] += 68;
[00B2] (97) clearState02(Var[14]);
[00B4] (5A) Var[120] += 2;
[00B8] (46) Var[117]++;
[00BA] (C4) unless (Var[117] > Var[46]) goto 00A0;
[00BF] (9A) Var[14] = VAR_EGO;
[00C2] (5A) Var[14] += 78;
[00C6] (8A) Var[Var[14]] = Var[234];
[00C9] (9A) Var[14] = VAR_EGO;
[00CC] (5A) Var[14] += 154;
[00D0] (8A) Var[Var[14]] = Var[234];
[00D3] (1A) Var[121] = 1024;
[00D7] (80) breakHere();
[00D8] (08) unless (Var[121] != 1024) goto 00D7;
[00DE] (38) if (Var[121] >= 659) {
[00E4] (9A)   Var[117] = Var[234];
[00E7] (1A)   Var[120] = 3;
[00EB] (9A)   Var[14] = Var[117];
[00EE] (5A)   Var[14] += 68;
[00F2] (C8)   if (Var[121] == Var[14]) {
[00F7] (38)     if (Var[253] >= 3) {
[00FD] (25)       drawObject(773,7,Var[253]);
[0102] (**)     }
[0102] (25)     drawObject(670,7,Var[120]);
[0107] (1C)     startSound(44);
[0109] (9A)     Var[253] = Var[120];
[010C] (14)     print(255,"");
[010F] (80)     breakHere();
[0110] (9A)     Var[14] = VAR_EGO;
[0113] (5A)     Var[14] += 61;
[0117] (9A)     Var[122] = Var[14];
[011A] (9A)     Var[14] = Var[117];
[011D] (5A)     Var[14] += 73;
[0121] (9A)     Var[244] = Var[14];
[0124] (84)     if (Var[244] <= Var[122]) {
[0129] (BA)       Var[122] -= Var[244];
[012C] (4F)       if (getState08(669)) {
[0131] (47)         clearState08(669);
[0134] (**)       }
[0134] (9A)       Var[14] = VAR_EGO;
[0137] (5A)       Var[14] += 78;
[013B] (8A)       Var[Var[14]] = Var[121];
[013E] (18)     } else {
[0141] (05)       drawObject(669,255,255);
[0146] (9A)       Var[14] = VAR_EGO;
[0149] (5A)       Var[14] += 78;
[014D] (8A)       Var[Var[14]] = Var[234];
[0150] (1C)       startSound(16);
[0152] (**)     }
[0152] (80)     breakHere();
[0153] (14)     print(255,"One way fare is $\x04\xF4.00\x01\x02");
[016A] (9A)     Var[244] = Var[234];
[016D] (38)     if (Var[45] >= 143) {
[0173] (04)       if (Var[45] <= 145) {
[0179] (78)         if (Var[121] < 661) {
[017F] (18)         } else {
[0182] (44)           unless (Var[121] > 663) goto 01AB;
[0188] (**)         }
[0188] (14)         print(255,"WARNING: Exit Visa Code Required.\x02");
[01A9] (46)         Var[244]++;
[01AB] (**)       }
[01AB] (**)     }
[01AB] (14)     print(255,"");
[01AE] (18)     goto 00D3;
[01B1] (**)   }
[01B1] (5A)   Var[120] += 2;
[01B5] (46)   Var[117]++;
[01B7] (C4)   unless (Var[117] > Var[46]) goto 00EB;
[01BC] (18)   goto 00D3;
[01BF] (**) }
[01BF] (60) cursorCommand(15, 2);
[01C2] (C8) if (Var[121] == Var[235]) {
[01C7] (9A)   Var[14] = VAR_EGO;
[01CA] (5A)   Var[14] += 78;
[01CE] (A8)   if (Var[14]) {
[01D2] (9A)     Var[14] = VAR_EGO;
[01D5] (5A)     Var[14] += 61;
[01D9] (8A)     Var[Var[14]] = Var[122];
[01DC] (C7)     clearState08(Var[78]);
[01DE] (9A)     Var[14] = VAR_EGO;
[01E1] (5A)     Var[14] += 154;
[01E5] (8A)     Var[Var[14]] = Var[45];
[01E8] (9A)     Var[14] = VAR_EGO;
[01EB] (5A)     Var[14] += 81;
[01EF] (9A)     Var[15] = Var[117];
[01F2] (5A)     Var[15] += 73;
[01F6] (8A)     Var[Var[14]] = Var[15];
[01F9] (**)   }
[01F9] (05)   drawObject(657,255,255);
[01FE] (18) } else {
[0201] (05)   drawObject(658,255,255);
[0206] (**) }
[0206] (1C) startSound(16);
[0208] (80) breakHere();
[0209] (2E) delay(60);
[020D] (8F) if (!getState08(Var[78])) {
[0211] (A8)   if (Var[244]) {
[0215] (42)     startScript(110);
[0217] (1A)     Var[119] = 3;
[021B] (42)     startScript(15);
[021D] (80)     breakHere();
[021E] (**)   }
[021E] (**) }
[021E] (D2) actorFollowCamera(VAR_EGO);
[0220] (2E) delay(30);
[0224] (8F) if (!getState08(Var[78])) {
[0228] (F6)   walkActorToObject(VAR_EGO,Var[78]);
[022B] (BB)   waitForActor(VAR_EGO);
[022D] (87)   setState08(Var[78]);
[022F] (48)   if (VAR_EGO == 2) {
[0235] (29)     setOwnerOf(83,2);
[0239] (18)   } else {
[023C] (29)     setOwnerOf(82,1);
[0240] (2F)     if (!getState04(169)) {
[0245] (0F)       if (!getState08(55)) {
[024A] (08)         if (Var[45] != 144) {
[0250] (1A)           Var[14] = 1;
[0254] (5A)           Var[14] += 78;
[0258] (08)           if (Var[14] != 662) {
[025E] (40)             cutscene();
[025F] (58)             beginOverride();
[0260] (18)             goto 02DD;
[0263] (2E)             delay(30);
[0267] (11)             animateActor(1,246);
[026A] (3B)             waitForActor(1);
[026C] (D8)             printEgo("I should really go \x02");
[027E] (31)             VAR_RESULT = getBitVar(1557,0);
[0283] (A8)             if (VAR_RESULT) {
[0287] (D8)               printEgo("back \x02");
[028E] (**)             }
[028E] (D8)             printEgo("to Seattle.");
[029A] (AE)             waitForMessage();
[029B] (2F)             if (!getState04(657)) {
[02A0] (27)               setState04(657);
[02A3] (D8)               printEgo("I have a strong feeling that there's\x01something that I need there!");
[02DC] (AE)               waitForMessage();
[02DD] (**)             }
[02DD] (14)             print(255,"");
[02E0] (C0)             endCutscene();
[02E1] (**)           }
[02E1] (**)         }
[02E1] (**)       }
[02E1] (**)     }
[02E1] (**)   }
[02E1] (**) }
[02E1] (60) cursorCommand(247, 1);
[02E4] (A0) stopObjectCode();
END

// Script 31
[0000] (9A) Var[14] = VAR_EGO;
[0003] (5A) Var[14] += 61;
[0007] (78) if (Var[14] < 100) {
[000D] (D8)   printEgo("I must not have enough money.");
[0027] (62)   stopScript(0);
[0029] (**) }
[0029] (40) cutscene();
[002A] (9A) Var[14] = VAR_EGO;
[002D] (5A) Var[14] += 61;
[0031] (6A) Var[Var[14]] -= 100;
[0035] (1C) startSound(84);
[0037] (80) breakHere();
[0038] (7C) VAR_RESULT = isSoundRunning(84);
[003B] (28) unless (!VAR_RESULT) goto 0037;
[003F] (48) if (VAR_EGO == 1) {
[0045] (B4)   VAR_RESULT = getDist(VAR_EGO,8);
[004A] (04)   if (VAR_RESULT <= 4) {
[0050] (14)     print(8,"You're not getting away!");
[0068] (18)     goto 0091;
[006B] (**)   }
[006B] (**) }
[006B] (72) loadRoom(0);
[006D] (53) ActorOps(8,[Name()]);
[0072] (EE) dummy(EE);
[0073] (14) print(255,"A long dusty ride later^");
[008A] (AE) waitForMessage();
[008B] (24) loadRoomWithEgo(218,148,34,60);
[0091] (C0) endCutscene();
[0092] (A0) stopObjectCode();
END

// Script 32
[0000] (90) VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0003] (48) if (VAR_RESULT == 15) {
[0009] (FF)   if (getState01(VAR_ACTIVE_OBJECT1)) {
[000D] (F9)     doSentence(VAR_ACTIVE_VERB,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[0012] (59)     doSentence(14,VAR_ACTIVE_OBJECT1,0,0);
[0018] (AC)     drawSentence();
[0019] (62)     stopScript(0);
[001B] (**)   }
[001B] (**) }
[001B] (B1) VAR_RESULT = getBitVar(1440,Var[137]);
[0020] (28) if (!VAR_RESULT) {
[0024] (F6)   walkActorToObject(Var[137],VAR_ACTIVE_OBJECT2);
[0027] (**) }
[0027] (BB) waitForActor(Var[137]);
[0029] (F4) VAR_RESULT = getDist(Var[137],VAR_ACTIVE_OBJECT2);
[002D] (04) if (VAR_RESULT <= 4) {
[0033] (79)   doSentence(19,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,1);
[0038] (**) }
[0038] (A0) stopObjectCode();
END

// Script 33
[0000] (40) cutscene();
[0001] (72) loadRoom(0);
[0003] (07) setState08(267);
[0006] (58) beginOverride();
[0007] (18) goto 0028;
[000A] (EE) dummy(EE);
[000B] (14) print(255,"After digging for a long time^");
[0027] (AE) waitForMessage();
[0028] (14) print(255,"");
[002B] (C0) endCutscene();
[002C] (48) if (VAR_ACTIVE_OBJECT2 == 26) {
[0032] (54)   setObjectName(26,"bent butter knife");
[0047] (27)   setState04(26);
[004A] (**) }
[004A] (2E) delay(60);
[004E] (11) animateActor(1,246);
[0051] (D8) printEgo("Sheesh^ that was a lot of work!");
[006C] (A0) stopObjectCode();
END

// Script 34
[0000] (9A) Var[46] = Var[234];
[0003] (9A) Var[49] = Var[46];
[0006] (2D) putActorInRoom(10,151);
[0009] (01) putActor(10,98,46);
[000D] (3D) setActorElevation(10,250);
[0010] (11) animateActor(10,250);
[0013] (11) animateActor(10,24);
[0016] (48) if (VAR_ACTIVE_OBJECT1 == 578) {
[001C] (DB)   setBitVar(1458,VAR_EGO,Var[235]);
[0021] (2E)   delay(90);
[0025] (7D)   setActorElevation(10,Var[234]);
[0028] (4D)   walkActorToActor(10,VAR_EGO,4);
[002C] (14)   print(10,"Hello, hello! \x02");
[003C] (10)   VAR_RESULT = getObjectOwner(44);
[0040] (48)   if (VAR_RESULT == 0) {
[0046] (14)     print(10,"I cannot help you until\x01you bring the Yellow Crystal.");
[0076] (18)   } else {
[0079] (14)     print(10,"What can I do for you?");
[008D] (**)   }
[008D] (3B)   waitForActor(10);
[008F] (**) }
[008F] (19) doSentence(253,587,0,1);
[0096] (A0) stopObjectCode();
END

// Script 35
[0000] (1A) Var[47] = 20;
[0004] (6F) if (getState04(290)) {
[0009] (1A)   Var[47] = 40;
[000D] (**) }
[000D] (19) doSentence(250,289,0,1);
[0014] (27) setState04(289);
[0017] (2E) delay(60);
[001B] (C6) Var[47]--;
[001D] (28) unless (!Var[47]) goto 0017;
[0021] (67) clearState04(289);
[0024] (19) doSentence(254,289,0,1);
[002B] (19) doSentence(253,290,0,1);
[0032] (48) if (Var[153] == 3) {
[0038] (47)   clearState08(276);
[003B] (07)   setState08(275);
[003E] (1A)   Var[153] = 4;
[0042] (80)   breakHere();
[0043] (19)   doSentence(253,291,0,1);
[004A] (19)   doSentence(250,277,0,1);
[0051] (62)   stopScript(0);
[0053] (**) }
[0053] (48) if (VAR_ROOM == 13) {
[0059] (19)   doSentence(253,284,0,1);
[0060] (19)   doSentence(253,291,0,1);
[0067] (**) }
[0067] (A0) stopObjectCode();
END

// Script 36
[0000] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0004] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0006] (**) }
[0006] (4F) if (getState08(241)) {
[000B] (D8)   printEgo("It's already cooked!");
[001F] (4F) } else if (getState08(262)) {
[0027] (D8)   printEgo("I shouldn't turn on an empty microwave.");
[004A] (18) } else {
[004D] (0C)   loadSound(19)
[0050] (0C)   loadSound(21)
[0053] (0C)   loadSound(20)
[0056] (07)   setState08(261);
[0059] (80)   breakHere();
[005A] (1C)   startSound(19);
[005C] (2E)   delay(600);
[0060] (07)   setState08(262);
[0063] (07)   setState08(241);
[0066] (29)   setOwnerOf(22,0);
[006A] (48)   if (VAR_ROOM == 11) {
[0070] (1C)     startSound(21);
[0072] (**)   }
[0072] (2E)   delay(300);
[0076] (47)   clearState08(261);
[0079] (80)   breakHere();
[007A] (3C)   stopSound(19);
[007C] (48)   if (VAR_ROOM == 11) {
[0082] (1C)     startSound(42);
[0084] (1C)     startSound(20);
[0086] (**)   }
[0086] (**) }
[0086] (A0) stopObjectCode();
END

// Script 37
[0000] (0F) if (!getState08(108)) {
[0005] (48)   if (VAR_ACTIVE_OBJECT2 == 26) {
[000B] (6F)     if (getState04(26)) {
[0010] (D8)       printEgo("It's bent.");
[001B] (18)     } else {
[001E] (27)       setState04(26);
[0021] (54)       setObjectName(26,"bent butter knife");
[0036] (D8)       printEgo("Ooops! I bent it!");
[0046] (**)     }
[0046] (48)   } else if (VAR_ACTIVE_OBJECT2 == 35) {
[004F] (18)     goto 005B;
[0052] (48)   } else if (VAR_ACTIVE_OBJECT2 == 38) {
[005B] (0C)     loadSound(60)
[005E] (1C)     startSound(97);
[0060] (07)     setState08(108);
[0063] (19)     doSentence(253,108,0,1);
[006A] (18)   } else {
[006D] (D8)     printEgo("I can't remove them with that.");
[0088] (**)   }
[0088] (48) } else if (VAR_ACTIVE_OBJECT2 == 37) {
[0091] (4F)   while (getState08(84)) {
[0096] (19)     doSentence(2,84,0,0);
[009D] (4C)     waitForSentence();
[009E] (2E)     delay(60);
[00A2] (**)   }
[00A5] (29)   setOwnerOf(37,14);
[00A9] (07)   setState08(110);
[00AC] (17)   clearState02(110);
[00AF] (07)   setState08(333);
[00B2] (17)   clearState02(333);
[00B5] (18) } else {
[00B8] (4A)   chainScript(3);
[00BA] (**) }
[00BA] (A0) stopObjectCode();
END

// Script 38
[0000] (40) cutscene();
[0001] (58) beginOverride();
[0002] (18) goto 0070;
[0005] (68) VAR_RESULT = isScriptRunning(116);
[0008] (A8) if (VAR_RESULT) {
[000C] (42)   startScript(116);
[000E] (**) }
[000E] (4F) if (getState08(246)) {
[0013] (19)   doSentence(2,247,0,0);
[001A] (4C)   waitForSentence();
[001B] (36)   walkActorToObject(1,243);
[001F] (3B)   waitForActor(1);
[0021] (**) }
[0021] (11) animateActor(1,246);
[0024] (2E) delay(60);
[0028] (14) print(1,"Excuse me!");
[0034] (AE) waitForMessage();
[0035] (12) panCameraTo(33);
[0037] (80) breakHere();
[0038] (48) unless (VAR_CAMERA_POS_X == 33) goto 0037;
[003E] (2E) delay(180);
[0042] (11) animateActor(1,248);
[0045] (1C) startSound(22);
[0047] (80) breakHere();
[0048] (7C) VAR_RESULT = isSoundRunning(22);
[004B] (28) unless (!VAR_RESULT) goto 0047;
[004F] (4F) if (getState08(242)) {
[0054] (1C)   startSound(17);
[0056] (**) }
[0056] (12) panCameraTo(20);
[0058] (80) breakHere();
[0059] (48) unless (VAR_CAMERA_POS_X == 20) goto 0058;
[005F] (11) animateActor(1,246);
[0062] (3B) waitForActor(1);
[0064] (14) print(1,"Thank you.");
[0070] (D2) actorFollowCamera(VAR_EGO);
[0072] (A8) if (VAR_OVERRIDE) {
[0076] (3C)   stopSound(22);
[0078] (11)   animateActor(1,250);
[007B] (4F)   if (getState08(242)) {
[0080] (1C)     startSound(17);
[0082] (**)   }
[0082] (**) }
[0082] (C0) endCutscene();
[0083] (A0) stopObjectCode();
END

// Script 39
[0000] (40) cutscene();
[0001] (46) Var[152]++;
[0003] (58) beginOverride();
[0004] (18) goto 004D;
[0007] (0C) loadSound(24)
[000A] (0C) lockSound(24)
[000D] (0C) loadSound(69)
[0010] (0C) loadCostume(17)
[0013] (0C) loadCostume(18)
[0016] (0C) lockCostume(18)
[0019] (53) ActorOps(10,[Name("baker")]);
[0023] (13) ActorOps(10,[TalkColor(7)]);
[0027] (13) ActorOps(10,[Costume(17)]);
[002B] (13) ActorOps(12,[Costume(0)]);
[002F] (2D) putActorInRoom(10,3);
[0032] (01) putActor(10,18,22);
[0036] (1A) Var[45] = 30;
[003A] (2E) delay(120);
[003E] (1E) walkActorTo(10,23,22);
[0042] (3B) waitForActor(10);
[0044] (11) animateActor(10,246);
[0047] (3B) waitForActor(10);
[0049] (2E) delay(60);
[004D] (A8) if (VAR_OVERRIDE) {
[0051] (01)   putActor(10,23,22);
[0055] (11)   animateActor(10,250);
[0058] (**) }
[0058] (0F) if (!getState08(137)) {
[005D] (07)   setState08(137);
[0060] (1C)   startSound(69);
[0062] (2E)   delay(120);
[0066] (**) }
[0066] (58) beginOverride();
[0067] (18) goto 0139;
[006A] (48) if (Var[152] == 1) {
[0070] (14)   print(10,"We're closed, and we're out of fresh\x01bread anyway.");
[009E] (48) } else if (Var[152] == 2) {
[00A7] (14)   print(10,"Listen, you DON'T want the bread we have\x01left! Go away!");
[00D8] (48) } else if (Var[152] == 3) {
[00E1] (2D)   putActorInRoom(12,3);
[00E4] (01)   putActor(12,23,56);
[00E8] (14)   print(10,"OK, you asked for it!");
[00FC] (A8)   if (VAR_OVERRIDE) {
[0100] (18)   } else {
[0103] (AE)     waitForMessage();
[0104] (13)     ActorOps(12,[Costume(18)]);
[0108] (1C)     startSound(60);
[010A] (7D)     setActorElevation(12,Var[45]);
[010D] (80)     breakHere();
[010E] (3A)     Var[45] -= 5;
[0112] (28)     unless (!Var[45]) goto 010A;
[0116] (**)   }
[0116] (3C)   stopSound(60);
[0118] (05)   drawObject(148,255,255);
[011D] (3D)   setActorElevation(12,65);
[0120] (1C)   startSound(24);
[0122] (80)   breakHere();
[0123] (2D)   putActorInRoom(12,0);
[0126] (28)   if (!VAR_OVERRIDE) {
[012A] (2E)     delay(90);
[012E] (**)   }
[012E] (47)   clearState08(137);
[0131] (1C)   startSound(69);
[0133] (3D)   setActorElevation(12,0);
[0136] (18)   /* goto 0139; */
[0139] (**) }
[0139] (0C) unlockSound(24)
[013C] (0C) unlockCostume(18)
[013F] (28) if (!VAR_OVERRIDE) {
[0143] (AE)   waitForMessage();
[0144] (1E)   walkActorTo(10,18,22);
[0148] (3B)   waitForActor(10);
[014A] (**) }
[014A] (14) print(255,"");
[014D] (2D) putActorInRoom(10,0);
[0150] (48) if (Var[152] == 3) {
[0156] (4F)   if (getState08(137)) {
[015B] (18)     goto 0116;
[015E] (**)   }
[015E] (**) }
[015E] (C0) endCutscene();
[015F] (A0) stopObjectCode();
END

// Script 40
[0000] (28) if (!Var[59]) {
[0004] (26)   setVarRange(Var[49],4,[250,248,251,249]);
[000B] (19)   doSentence(250,212,0,1);
[0012] (19)   doSentence(250,216,0,1);
[0019] (**) }
[0019] (80) breakHere();
[001A] (74) VAR_RESULT = getDist(10,VAR_EGO);
[001F] (78) unless (VAR_RESULT < 9) goto 0019;
[0025] (B1) VAR_RESULT = getBitVar(704,VAR_EGO);
[002A] (A8) if (VAR_RESULT) {
[002E] (18)   goto 0000;
[0031] (**) }
[0031] (19) doSentence(253,190,0,1);
[0038] (11) animateActor(10,255);
[003B] (11) animateActor(10,246);
[003E] (3B) waitForActor(10);
[0040] (1A) Var[54] = 120;
[0044] (48) if (VAR_ACTIVE_VERB == 3) {
[004A] (48)   if (VAR_ACTIVE_OBJECT2 == 10) {
[0050] (14)     print(10,"You want my last book?");
[0065] (BB)     waitForActor(VAR_EGO);
[0067] (18)     goto 0099;
[006A] (**)   }
[006A] (**) }
[006A] (10) VAR_RESULT = getObjectOwner(45);
[006E] (48) if (VAR_RESULT == 15) {
[0074] (14)   print(10,"Want to buy a book on enlightenment?");
[0095] (**) }
[0095] (4D) walkActorToActor(10,VAR_EGO,4);
[0099] (80) breakHere();
[009A] (80) breakHere();
[009B] (C6) Var[54]--;
[009D] (28) if (!Var[54]) {
[00A1] (18)   goto 0040;
[00A4] (**) }
[00A4] (74) VAR_RESULT = getDist(10,VAR_EGO);
[00A9] (04) if (VAR_RESULT <= 4) {
[00AF] (3B)   waitForActor(10);
[00B1] (49)   faceActor(10,VAR_EGO);
[00B4] (18)   goto 0099;
[00B7] (**) }
[00B7] (18) goto 0095;
[00BA] (A0) stopObjectCode();
END

// Script 41
[0000] (48) if (VAR_ROOM == 132) {
[0006] (D8)   printEgo("NOT NOW!");
[000F] (62)   stopScript(0);
[0011] (**) }
[0011] (48) if (VAR_ACTIVE_OBJECT1 == 17) {
[0017] (28)   if (!Var[193]) {
[001B] (D8)     printEgo("There's nothing on it.");
[0030] (62)     stopScript(0);
[0032] (**)   }
[0032] (28) } else if (!Var[194]) {
[0039] (D8)   printEgo("$1138! \x02");
[0042] (48)   if (VAR_EGO == 1) {
[0048] (D8)     printEgo("I'd\x02");
[004E] (18)   } else {
[0051] (D8)     printEgo("Zak\x02");
[0057] (**)   }
[0057] (D8)   printEgo(" better pay this soon!");
[006C] (62)   stopScript(0);
[006E] (**) }
[006E] (40) cutscene();
[006F] (60) cursorCommand(191, 3);
[0072] (48) if (VAR_ACTIVE_OBJECT1 == 17) {
[0078] (72)   loadRoom(153);
[007A] (18) } else {
[007D] (72)   loadRoom(154);
[007F] (**) }
[007F] (19) doSentence(253,487,0,1);
[0086] (58) beginOverride();
[0087] (18) goto 0094;
[008A] (80) breakHere();
[008B] (08) if (VAR_ACTIVE_VERB != 30) {
[0091] (18)   goto 007F;
[0094] (**) }
[0094] (C0) endCutscene();
[0095] (A0) stopObjectCode();
END

// Script 42
[0000] (80) breakHere();
[0001] (08) if (VAR_ROOM != 19) {
[0007] (62)   stopScript(0);
[0009] (**) }
[0009] (B4) VAR_RESULT = getDist(VAR_EGO,10);
[000E] (78) unless (VAR_RESULT < 15) goto 0000;
[0014] (40) cutscene();
[0015] (12) panCameraTo(60);
[0017] (91) animateActor(VAR_EGO,255);
[001A] (80) breakHere();
[001B] (48) unless (VAR_CAMERA_POS_X == 60) goto 001A;
[0021] (4D) walkActorToActor(10,VAR_EGO,4);
[0025] (3B) waitForActor(10);
[0027] (49) faceActor(10,VAR_EGO);
[002A] (89) faceActor(VAR_EGO,10);
[002D] (00) stopObjectCode();
[002E] (3B) waitForActor(10);
[0030] (6F) if (getState04(55)) {
[0035] (48)   if (VAR_EGO == 1) {
[003B] (14)     print(10,"You have already been trained. Use it!");
[005E] (18)     goto 037B;
[0061] (**)   }
[0061] (**) }
[0061] (1C) startSound(79);
[0063] (2E) delay(120);
[0067] (1C) startSound(79);
[0069] (2E) delay(120);
[006D] (48) if (VAR_EGO == 2) {
[0073] (58)   beginOverride();
[0074] (18)   goto 037C;
[0077] (14)   print(10,"My dear, you have no need of my wisdom.\x01You already follow the right path.");
[00B7] (10)   VAR_RESULT = getObjectOwner(55);
[00BB] (48)   if (VAR_RESULT == 2) {
[00C1] (AE)     waitForMessage();
[00C2] (14)     print(10,"I cannot teach you the ways of the\x01Crystal. Give it to your writer friend.");
[0102] (**)   }
[0102] (A8) } else if (Var[225]) {
[0109] (14)   print(10,"I smell bad Karma! You'll have to wait\x01while it burns off. Don't leave!");
[0147] (19)   doSentence(253,383,0,1);
[014E] (18) } else {
[0151] (A8)   if (Var[50]) {
[0155] (14)     print(10,"You have burned off your misdeeds,\x01\x02");
[0177] (18)   } else {
[017A] (14)     print(10,"You've kept yourself Karmically clean,\x01\x02");
[01A1] (**)   }
[01A1] (10)   VAR_RESULT = getObjectOwner(55);
[01A5] (48)   if (VAR_RESULT == 1) {
[01AB] (27)     setState04(55);
[01AE] (58)     beginOverride();
[01AF] (18)     goto 037C;
[01B2] (14)     print(10,"and you have the Blue Crystal with you.\x03I will now teach you how to use it.\x03It will put you into a state of deep\x01rapport with any animal. Simply focus^");
[0230] (AE)     waitForMessage();
[0231] (72)     loadRoom(0);
[0233] (EE)     dummy(EE);
[0234] (14)     print(255,"One hour later^");
[0244] (AE)     waitForMessage();
[0245] (72)     loadRoom(19);
[0247] (2E)     delay(60);
[024B] (14)     print(10,"^then, you saute it in yak butter with\x01a clove of garlic over medium heat^");
[028B] (AE)     waitForMessage();
[028C] (72)     loadRoom(0);
[028E] (EE)     dummy(EE);
[028F] (14)     print(255,"Two hours later^");
[02A0] (AE)     waitForMessage();
[02A1] (72)     loadRoom(19);
[02A3] (2E)     delay(60);
[02A7] (14)     print(10,"^and he says `that was no lady,\x01that was my wife.` Get it? HA HA HA.");
[02E0] (AE)     waitForMessage();
[02E1] (72)     loadRoom(0);
[02E3] (EE)     dummy(EE);
[02E4] (14)     print(255,"Three hours later^");
[02F7] (AE)     waitForMessage();
[02F8] (72)     loadRoom(19);
[02FA] (2E)     delay(60);
[02FE] (14)     print(10,"^and it only works if you are in contact\x01with the Earth. Now go and do some good!");
[0342] (18)   } else {
[0345] (14)     print(10,"but you don't have the Blue Crystal.\x03Return when you have it.");
[037B] (**)   }
[037B] (**) }
[037B] (AE) waitForMessage();
[037C] (A8) if (VAR_OVERRIDE) {
[0380] (14)   print(255,"");
[0383] (72)   loadRoom(19);
[0385] (**) }
[0385] (C0) endCutscene();
[0386] (1E) walkActorTo(10,60,56);
[038A] (3B) waitForActor(10);
[038C] (11) animateActor(10,246);
[038F] (2E) delay(300);
[0393] (48) if (VAR_ROOM == 19) {
[0399] (11)   animateActor(10,247);
[039C] (**) }
[039C] (A0) stopObjectCode();
END

// Script 43
[0000] (10) VAR_RESULT = getObjectOwner(45);
[0004] (08) if (VAR_RESULT != 15) {
[000A] (14)   print(10,"No more books, just let me dance.");
[0028] (9D) } else if (classOfIs(VAR_ACTIVE_OBJECT1,128)) {
[0030] (60)   cursorCommand(15, 2);
[0033] (19)   doSentence(253,190,0,1);
[003A] (BB)   waitForActor(VAR_EGO);
[003C] (3B)   waitForActor(10);
[003E] (4D)   walkActorToActor(10,VAR_EGO,4);
[0042] (3B)   waitForActor(10);
[0044] (49)   faceActor(10,VAR_EGO);
[0047] (89)   faceActor(VAR_EGO,10);
[004A] (00)   stopObjectCode();
[004B] (3B)   waitForActor(10);
[004D] (AE)   waitForMessage();
[004E] (1A)   Var[118] = 42;
[0052] (14)   print(10,"That'll be $\x04\x76.");
[0062] (AE)   waitForMessage();
[0063] (19)   doSentence(253,209,0,1);
[006A] (80)   breakHere();
[006B] (A8)   if (Var[66]) {
[006F] (14)     print(10,"May you find True Enlightenment.");
[008E] (1A)     Var[44] = -1;
[0092] (50)     pickupObject(45);
[0095] (18)     goto 00CE;
[0098] (18)   } else {
[009B] (14)     print(10,"Sorry, you don't have enough money.\x01Peace anyway.");
[00C9] (DB)     setBitVar(704,VAR_EGO,Var[235]);
[00CE] (60)     cursorCommand(247, 1);
[00D1] (AE)     waitForMessage();
[00D2] (1E)     walkActorTo(10,10,46);
[00D6] (3B)     waitForActor(10);
[00D8] (4A)     chainScript(40);
[00DA] (**)   }
[00DA] (18) } else {
[00DD] (14)   print(10,"Sorry, CashCards only.");
[00F4] (**) }
[00F4] (A0) stopObjectCode();
END

// Script 44
[0000] (48) if (Var[158] == 49) {
[0006] (27)   setState04(495);
[0009] (40)   cutscene();
[000A] (58)   beginOverride();
[000B] (18)   goto 0064;
[000E] (2E)   delay(120);
[0012] (91)   animateActor(VAR_EGO,246);
[0015] (BB)   waitForActor(VAR_EGO);
[0017] (D8)   printEgo("ZWOW! Darkeen tones! Razor's a wayhot\x01jamster!\x03She blows poodles over old noizglunk!");
[0063] (AE)   waitForMessage();
[0064] (14)   print(255,"");
[0067] (C0)   endCutscene();
[0068] (**) }
[0068] (A0) stopObjectCode();
END

// Script 45
[0000] (62) stopScript(34);
[0002] (40) cutscene();
[0003] (19) doSentence(254,587,0,1);
[000A] (14) print(10,"Excellent!");
[0017] (4D) walkActorToActor(10,VAR_EGO,4);
[001B] (7D) setActorElevation(10,Var[234]);
[001E] (3B) waitForActor(10);
[0020] (49) faceActor(10,VAR_EGO);
[0023] (89) faceActor(VAR_EGO,10);
[0026] (00) stopObjectCode();
[0027] (80) breakHere();
[0028] (AE) waitForMessage();
[0029] (58) beginOverride();
[002A] (18) goto 01A8;
[002D] (48) if (VAR_EGO == 1) {
[0033] (46)   Var[49]++;
[0035] (14)   print(10,"I will now teach you how to use your\x01Teleportation Crystal.");
[006A] (AE)   waitForMessage();
[006B] (14)   print(10,"You may only travel TO a teleport pad.");
[008D] (AE)   waitForMessage();
[008E] (9A)   Var[66] = Var[234];
[0091] (A8)   if (Var[194]) {
[0095] (10)     VAR_RESULT = getObjectOwner(15);
[0099] (48)     if (VAR_RESULT == 2) {
[009F] (18)       goto 00D7;
[00A2] (**)     }
[00A2] (10)     VAR_RESULT = getObjectOwner(15);
[00A6] (48)     if (VAR_RESULT == 1) {
[00AC] (18)       goto 00BD;
[00AF] (**)     }
[00AF] (**)   }
[00AF] (A8)   if (Var[193]) {
[00B3] (10)     VAR_RESULT = getObjectOwner(17);
[00B7] (48)     if (VAR_RESULT == 1) {
[00BD] (14)       print(10,"Use your\x02");
[00C8] (46)       Var[66]++;
[00CA] (18)       goto 00F4;
[00CD] (**)     }
[00CD] (10)     VAR_RESULT = getObjectOwner(17);
[00D1] (48)     if (VAR_RESULT == 2) {
[00D7] (14)       print(10,"Use Annie's\x02");
[00E5] (46)       Var[66]++;
[00E7] (**)     }
[00E7] (**)   }
[00E7] (28)   if (!Var[66]) {
[00EB] (14)     print(10,"Draw a\x02");
[00F4] (**)   }
[00F4] (14)   print(10," map to focus on your\x01destination.\x03No one can do this but you.");
[012B] (18) } else {
[012E] (14)   print(10,"The Teleport Crystal will not work for\x01you. \x02");
[0157] (03)   VAR_RESULT = getActorRoom(1);
[015A] (C8)   if (VAR_RESULT == VAR_ROOM) {
[015F] (0D)     walkActorToActor(10,1,4);
[0163] (3B)     waitForActor(10);
[0165] (09)     faceActor(1,10);
[0168] (00)     stopObjectCode();
[0169] (14)     print(10,"But it will work for you. Listen:");
[0187] (18)     goto 006A;
[018A] (**)   }
[018A] (14)   print(10,"Give it to Zak and send him here.");
[01A7] (**) }
[01A7] (AE) waitForMessage();
[01A8] (03) VAR_RESULT = getActorRoom(1);
[01AB] (C8) if (VAR_RESULT == VAR_ROOM) {
[01B0] (10)   VAR_EGO = getObjectOwner(81);
[01B4] (83)   VAR_RESULT = getActorRoom(VAR_EGO);
[01B7] (C8)   if (VAR_RESULT == VAR_ROOM) {
[01BC] (27)     setState04(81);
[01BF] (A8)     if (VAR_OVERRIDE) {
[01C3] (14)       print(255,"");
[01C6] (18)     } else {
[01C9] (AE)       waitForMessage();
[01CA] (14)       print(10,"Goodbye, my friend.");
[01DE] (36)       walkActorToObject(10,579);
[01E2] (2E)       delay(60);
[01E6] (B6)       walkActorToObject(VAR_EGO,579);
[01EA] (3B)       waitForActor(10);
[01EC] (**)     }
[01EC] (AD)     putActorInRoom(VAR_EGO,150);
[01EF] (81)     putActor(VAR_EGO,12,56);
[01F3] (91)     animateActor(VAR_EGO,248);
[01F6] (2D)     putActorInRoom(10,150);
[01F9] (01)     putActor(10,6,56);
[01FD] (52)     actorFollowCamera(10);
[01FF] (11)     animateActor(10,248);
[0202] (11)     animateActor(10,24);
[0205] (1A)     Var[119] = 1;
[0209] (48)     if (VAR_EGO == 1) {
[020F] (1A)       Var[119] = 2;
[0213] (**)     }
[0213] (83)     VAR_RESULT = getActorRoom(Var[119]);
[0216] (48)     if (VAR_RESULT == 151) {
[021C] (AD)       putActorInRoom(Var[119],150);
[021F] (81)       putActor(Var[119],10,56);
[0223] (91)       animateActor(Var[119],248);
[0226] (42)       startScript(5);
[0228] (**)     }
[0228] (36)     walkActorToObject(10,577);
[022C] (3B)     waitForActor(10);
[022E] (07)     setState08(577);
[0231] (80)     breakHere();
[0232] (36)     walkActorToObject(10,578);
[0236] (3B)     waitForActor(10);
[0238] (2D)     putActorInRoom(10,0);
[023B] (**)   }
[023B] (18) } else {
[023E] (19)   doSentence(253,587,0,1);
[0245] (**) }
[0245] (C0) endCutscene();
[0246] (A0) stopObjectCode();
END

// Script 46
[0000] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[0006] (C8)   if (Var[138] == Var[234]) {
[000B] (48)     if (VAR_EGO == 1) {
[0011] (1A)       Var[138] = 3;
[0015] (1C)       startSound(36);
[0017] (54)       setObjectName(14,"fish bowl");
[0024] (6F)       if (getState04(14)) {
[0029] (54)         setObjectName(14,"taped fish bowl");
[003C] (**)       }
[003C] (D8)       printEgo("Sorry, Sushi, but you're fertilizer now.");
[0061] (5A)       Var[225] += 5;
[0065] (48)       if (VAR_ROOM_RESOURCE == 8) {
[006B] (80)         breakHere();
[006C] (7C)         VAR_RESULT = isSoundRunning(36);
[006F] (28)         unless (!VAR_RESULT) goto 006B;
[0073] (1C)         startSound(87);
[0075] (**)       }
[0075] (18)     } else {
[0078] (D8)       printEgo("That would kill it!");
[008A] (**)     }
[008A] (62)     stopScript(0);
[008C] (**)   }
[008C] (**) }
[008C] (42) startScript(3);
[008E] (A0) stopObjectCode();
END

// Script 47
[0000] (2D) putActorInRoom(10,195);
[0003] (01) putActor(10,4,58);
[0007] (11) animateActor(10,250);
[000A] (2E) delay(120);
[000E] (11) animateActor(10,245);
[0011] (80) breakHere();
[0012] (AE) waitForMessage();
[0013] (14) print(10,"Greetings!\x03Our race departed this dimension fifty\x01millennia ago.\x03We, the Skolarians, were your guardians.\x03We knew of the corrupt Caponians and\x01took steps to protect you.\x03They will subvert the Earth with their\x01deadly machines.");
[00DB] (AE) waitForMessage();
[00DC] (14) print(10,"We sent you dreams to lead you here.\x03You must construct our device to\x01neutralize the Caponian menace.\x03Use these keys to obtain the Power\x01Crystal.\x03Hurry, before they stop you.");
[0174] (AE) waitForMessage();
[0175] (18) goto 0007;
[0178] (A0) stopObjectCode();
END

// Script 48
[0000] (9A) Var[66] = Var[234];
[0003] (16) Var[67] = getRandomNr(9);
[0006] (9A) Var[14] = Var[66];
[0009] (5A) Var[14] += 212;
[000D] (8A) Var[Var[14]] = Var[67];
[0010] (16) Var[67] = getRandomNr(9);
[0013] (28) if (!Var[66]) {
[0017] (28)   if (!Var[67]) {
[001B] (18)     goto 0010;
[001E] (**)   }
[001E] (**) }
[001E] (9A) Var[14] = Var[66];
[0021] (5A) Var[14] += 143;
[0025] (8A) Var[Var[14]] = Var[67];
[0028] (16) Var[67] = getRandomNr(5);
[002B] (5A) Var[67] += 230;
[002F] (9A) Var[14] = Var[66];
[0032] (5A) Var[14] += 113;
[0036] (8A) Var[Var[14]] = Var[67];
[0039] (46) Var[66]++;
[003B] (44) unless (Var[66] > 3) goto 0003;
[0041] (9A) Var[66] = Var[234];
[0044] (16) Var[67] = getRandomNr(2);
[0047] (5A) Var[67] += 531;
[004B] (9A) Var[14] = Var[66];
[004E] (5A) Var[14] += 131;
[0052] (8A) Var[Var[14]] = Var[67];
[0055] (46) Var[66]++;
[0057] (44) unless (Var[66] > 5) goto 0044;
[005D] (9A) Var[67] = Var[234];
[0060] (1A) Var[61] = 531;
[0064] (9A) Var[66] = Var[234];
[0067] (9A) Var[14] = Var[66];
[006A] (5A) Var[14] += 131;
[006E] (C8) if (Var[14] == Var[61]) {
[0073] (46)   Var[67]++;
[0075] (18) } else {
[0078] (46)   Var[66]++;
[007A] (44)   unless (Var[66] > 5) goto 0067;
[0080] (**) }
[0080] (46) Var[61]++;
[0082] (44) unless (Var[61] > 533) goto 0064;
[0088] (08) if (Var[67] != 3) {
[008E] (18)   goto 0041;
[0091] (**) }
[0091] (16) Var[66] = getRandomNr(5);
[0094] (48) if (Var[66] == 0) {
[009A] (A6)   setVarRange(Var[110],3,[316,317,318]);
[00A3] (48) } else if (Var[66] == 1) {
[00AC] (A6)   setVarRange(Var[110],3,[316,318,317]);
[00B5] (48) } else if (Var[66] == 2) {
[00BE] (A6)   setVarRange(Var[110],3,[317,318,316]);
[00C7] (48) } else if (Var[66] == 3) {
[00D0] (A6)   setVarRange(Var[110],3,[317,316,318]);
[00D9] (48) } else if (Var[66] == 4) {
[00E2] (A6)   setVarRange(Var[110],3,[318,317,316]);
[00EB] (48) } else if (Var[66] == 5) {
[00F4] (A6)   setVarRange(Var[110],3,[318,316,317]);
[00FD] (18)   /* goto 0100; */
[0100] (**) }
[0100] (9A) Var[66] = Var[234];
[0103] (16) Var[61] = getRandomNr(32);
[0106] (9A) Var[14] = Var[66];
[0109] (5A) Var[14] += 50;
[010D] (8A) Var[Var[14]] = Var[61];
[0110] (28) if (!Var[61]) {
[0114] (A6)   setVarRange(Var[53],2,[-21169,227]);
[011B] (**) }
[011B] (C8) if (Var[61] == Var[235]) {
[0120] (A6)   setVarRange(Var[53],2,[-25656,12]);
[0127] (**) }
[0127] (48) if (Var[61] == 2) {
[012D] (A6)   setVarRange(Var[53],2,[23175,225]);
[0134] (**) }
[0134] (48) if (Var[61] == 3) {
[013A] (A6)   setVarRange(Var[53],2,[-17073,242]);
[0141] (**) }
[0141] (48) if (Var[61] == 4) {
[0147] (A6)   setVarRange(Var[53],2,[15487,254]);
[014E] (**) }
[014E] (48) if (Var[61] == 5) {
[0154] (A6)   setVarRange(Var[53],2,[15467,214]);
[015B] (**) }
[015B] (48) if (Var[61] == 6) {
[0161] (A6)   setVarRange(Var[53],2,[-26801,243]);
[0168] (**) }
[0168] (48) if (Var[61] == 7) {
[016E] (A6)   setVarRange(Var[53],2,[-9219,191]);
[0175] (**) }
[0175] (48) if (Var[61] == 8) {
[017B] (A6)   setVarRange(Var[53],2,[32509,191]);
[0182] (**) }
[0182] (48) if (Var[61] == 9) {
[0188] (A6)   setVarRange(Var[53],2,[-6193,243]);
[018F] (**) }
[018F] (48) if (Var[61] == 10) {
[0195] (A6)   setVarRange(Var[53],2,[-121,225]);
[019C] (**) }
[019C] (48) if (Var[61] == 11) {
[01A2] (A6)   setVarRange(Var[53],2,[-19001,242]);
[01A9] (**) }
[01A9] (48) if (Var[61] == 12) {
[01AF] (A6)   setVarRange(Var[53],2,[-32003,76]);
[01B6] (**) }
[01B6] (48) if (Var[61] == 13) {
[01BC] (A6)   setVarRange(Var[53],2,[765,242]);
[01C3] (**) }
[01C3] (48) if (Var[61] == 14) {
[01C9] (A6)   setVarRange(Var[53],2,[-15619,255]);
[01D0] (**) }
[01D0] (48) if (Var[61] == 15) {
[01D6] (A6)   setVarRange(Var[53],2,[7741,46]);
[01DD] (**) }
[01DD] (48) if (Var[61] == 16) {
[01E3] (A6)   setVarRange(Var[53],2,[9597,18]);
[01EA] (**) }
[01EA] (48) if (Var[61] == 17) {
[01F0] (A6)   setVarRange(Var[53],2,[26290,77]);
[01F7] (**) }
[01F7] (48) if (Var[61] == 18) {
[01FD] (A6)   setVarRange(Var[53],2,[-161,250]);
[0204] (**) }
[0204] (48) if (Var[61] == 19) {
[020A] (A6)   setVarRange(Var[53],2,[-78,77]);
[0211] (**) }
[0211] (48) if (Var[61] == 20) {
[0217] (A6)   setVarRange(Var[53],2,[23247,243]);
[021E] (**) }
[021E] (48) if (Var[61] == 21) {
[0224] (A6)   setVarRange(Var[53],2,[-2817,242]);
[022B] (**) }
[022B] (48) if (Var[61] == 22) {
[0231] (A6)   setVarRange(Var[53],2,[32463,225]);
[0238] (**) }
[0238] (48) if (Var[61] == 23) {
[023E] (A6)   setVarRange(Var[53],2,[3855,159]);
[0245] (**) }
[0245] (48) if (Var[61] == 24) {
[024B] (A6)   setVarRange(Var[53],2,[26980,242]);
[0252] (**) }
[0252] (48) if (Var[61] == 25) {
[0258] (A6)   setVarRange(Var[53],2,[-154,102]);
[025F] (**) }
[025F] (48) if (Var[61] == 26) {
[0265] (A6)   setVarRange(Var[53],2,[-222,68]);
[026C] (**) }
[026C] (48) if (Var[61] == 27) {
[0272] (A6)   setVarRange(Var[53],2,[-17511,21]);
[0279] (**) }
[0279] (48) if (Var[61] == 28) {
[027F] (A6)   setVarRange(Var[53],2,[-213,212]);
[0286] (**) }
[0286] (48) if (Var[61] == 29) {
[028C] (A6)   setVarRange(Var[53],2,[-29671,243]);
[0293] (**) }
[0293] (48) if (Var[61] == 30) {
[0299] (A6)   setVarRange(Var[53],2,[23295,255]);
[02A0] (**) }
[02A0] (48) if (Var[61] == 31) {
[02A6] (A6)   setVarRange(Var[53],2,[-24753,191]);
[02AD] (**) }
[02AD] (48) if (Var[61] == 32) {
[02B3] (A6)   setVarRange(Var[53],2,[-17073,190]);
[02BA] (**) }
[02BA] (28) if (!Var[66]) {
[02BE] (9A)   Var[104] = Var[53];
[02C1] (9A)   Var[105] = Var[54];
[02C4] (**) }
[02C4] (C8) if (Var[66] == Var[235]) {
[02C9] (9A)   Var[106] = Var[53];
[02CC] (9A)   Var[107] = Var[54];
[02CF] (**) }
[02CF] (48) if (Var[66] == 2) {
[02D5] (9A)   Var[108] = Var[53];
[02D8] (9A)   Var[109] = Var[54];
[02DB] (**) }
[02DB] (46) Var[66]++;
[02DD] (44) unless (Var[66] > 2) goto 0103;
[02E3] (C8) if (Var[50] == Var[51]) {
[02E8] (18)   goto 0100;
[02EB] (**) }
[02EB] (C8) if (Var[50] == Var[52]) {
[02F0] (18)   goto 0100;
[02F3] (**) }
[02F3] (C8) if (Var[51] == Var[52]) {
[02F8] (18)   goto 0100;
[02FB] (**) }
[02FB] (A0) stopObjectCode();
END

// Script 49
[0000] (48) if (VAR_ROOM == 42) {
[0006] (57)   setState02(630);
[0009] (1A)   VAR_EGO = 6;
[000D] (19)   doSentence(254,629,0,1);
[0014] (19)   doSentence(253,627,0,1);
[001B] (D2)   actorFollowCamera(VAR_EGO);
[001D] (7A)   VerbOps(New-13(13,19,2,0,"Fly to@@@"));
[002D] (48) } else if (VAR_ROOM == 31) {
[0036] (10)   VAR_RESULT = getObjectOwner(48);
[003A] (88)   if (VAR_RESULT != VAR_EGO) {
[003F] (19)     doSentence(253,503,0,1);
[0046] (D8)     printEgo("Glug!");
[004D] (2E)     delay(240);
[0051] (19)     doSentence(253,497,0,1);
[0058] (60)     cursorCommand(15, 2);
[005B] (18)     goto 0121;
[005E] (**)   }
[005E] (57)   setState02(504);
[0061] (1A)   VAR_EGO = 5;
[0065] (1A)   Var[43] = 5;
[0069] (2E)   delay(60);
[006D] (11)   animateActor(5,246);
[0070] (1A)   Var[171] = 3;
[0074] (48) } else if (VAR_ROOM == 17) {
[007D] (19)   doSentence(253,362,0,1);
[0084] (48) } else if (VAR_ROOM == 1) {
[008D] (19)   doSentence(253,99,0,1);
[0094] (48) } else if (VAR_ROOM == 13) {
[009D] (19)   doSentence(253,287,0,1);
[00A4] (18)   /* goto 00A7; */
[00A7] (**) }
[00A7] (9A) Var[199] = Var[234];
[00AA] (42) startScript(6);
[00AC] (7A) VerbOps(New-30(32,21,14,0,"To Zak@@"));
[00BB] (A8) if (Var[247]) {
[00BF] (60)   cursorCommand(150, 3);
[00C2] (7A)   VerbOps(New-34(0,200,1,0,));
[00C9] (1A)   VAR_BACKUP_VERB = 34;
[00CD] (19)   doSentence(RESET);
[00CF] (18) } else {
[00D2] (60)   cursorCommand(247, 1);
[00D5] (**) }
[00D5] (80) breakHere();
[00D6] (48) unless (VAR_ACTIVE_VERB == 30) goto 00D5;
[00DC] (74) VAR_RESULT = getDist(1,VAR_EGO);
[00E1] (44) if (VAR_RESULT > 40) {
[00E7] (D8)   printEgo("My body is too far away.");
[00FC] (9A)   VAR_ACTIVE_VERB = Var[234];
[00FF] (18)   goto 00D5;
[0102] (**) }
[0102] (60) cursorCommand(15, 2);
[0105] (1A) VAR_EGO = 1;
[0109] (48) if (VAR_ROOM == 42) {
[010F] (2E)   delay(60);
[0113] (19)   doSentence(253,627,0,1);
[011A] (19)   doSentence(250,629,0,1);
[0121] (**) }
[0121] (46) Var[199]++;
[0123] (D2) actorFollowCamera(VAR_EGO);
[0125] (08) if (VAR_ROOM != 31) {
[012B] (7A)   VerbOps(New-13(13,19,2,0,"Walk to@@"));
[013B] (2E)   delay(60);
[013F] (11)   animateActor(1,250);
[0142] (11)   animateActor(1,16);
[0145] (11)   animateActor(1,32);
[0148] (9A)   Var[163] = Var[234];
[014B] (42)   startScript(150);
[014D] (2E)   delay(60);
[0151] (D8)   printEgo("Whew!");
[0158] (AE)   waitForMessage();
[0159] (11)   animateActor(1,6);
[015C] (11)   animateActor(1,10);
[015F] (80)   breakHere();
[0160] (2F)   if (!getState04(630)) {
[0165] (D8)     printEgo("That was some experience!");
[017D] (5B)     setBitVar(1559,2,Var[235]);
[0182] (27)     setState04(630);
[0185] (**)   }
[0185] (AE)   waitForMessage();
[0186] (48)   if (VAR_ROOM == 42) {
[018C] (19)     doSentence(253,622,0,1);
[0193] (**)   }
[0193] (A8)   if (Var[247]) {
[0197] (42)     startScript(19);
[0199] (A8)     if (Var[247]) {
[019D] (42)       startScript(130);
[019F] (**)     }
[019F] (**)   }
[019F] (18) } else {
[01A2] (48)   if (Var[171] == 3) {
[01A8] (1E)     walkActorTo(5,28,86);
[01AC] (3B)     waitForActor(5);
[01AE] (11)     animateActor(5,244);
[01B1] (17)     clearState02(504);
[01B4] (1A)     Var[43] = 4;
[01B8] (48)   } else if (Var[171] == 4) {
[01C1] (1E)     walkActorTo(5,41,86);
[01C5] (19)     doSentence(254,498,0,1);
[01CC] (19)     doSentence(250,501,0,1);
[01D3] (46)     Var[171]++;
[01D5] (80)     breakHere();
[01D6] (78)     unless (Var[47] < 12) goto 01D5;
[01DC] (2D)     putActorInRoom(5,0);
[01DF] (18)     /* goto 01E2; */
[01E2] (**)   }
[01E2] (2E)   delay(60);
[01E6] (11)   animateActor(1,246);
[01E9] (19)   doSentence(33,502,0,1);
[01F0] (2E)   delay(60);
[01F4] (**) }
[01F4] (60) cursorCommand(247, 1);
[01F7] (A0) stopObjectCode();
END

// Script 50
[0000] (60) cursorCommand(15, 2);
[0003] (72) loadRoom(0);
[0005] (9A) Var[199] = Var[234];
[0008] (80) breakHere();
[0009] (5B) setBitVar(1441,0,Var[235]);
[000E] (0C) loadRoom(31)
[0011] (0C) loadCostume(9)
[0014] (53) ActorOps(5,[Name()]);
[0019] (53) ActorOps(5,[Sound(Var[234])]);
[001D] (13) ActorOps(5,[TalkColor(10)]);
[0021] (0C) lockCostume(1)
[0024] (6F) if (getState04(39)) {
[0029] (13)   ActorOps(1,[Costume(39)]);
[002D] (18) } else {
[0030] (13)   ActorOps(1,[Costume(9)]);
[0034] (**) }
[0034] (2D) putActorInRoom(5,31);
[0037] (01) putActor(5,1,90);
[003B] (2D) putActorInRoom(1,132);
[003E] (01) putActor(1,19,90);
[0042] (11) animateActor(1,250);
[0045] (53) ActorOps(1,[Sound(Var[234])]);
[0049] (72) loadRoom(132);
[004B] (32) setCameraAt(20);
[004D] (60) cursorCommand(255, 1);
[0050] (80) breakHere();
[0051] (1A) Var[49] = 6;
[0055] (6F) if (getState04(77)) {
[005A] (D8)   printEgo("Geronimo!!!");
[0067] (9A)   Var[48] = Var[235];
[006A] (11)   animateActor(1,72);
[006D] (9A)   Var[49] = Var[235];
[0070] (18) } else {
[0073] (D8)   printEgo("OH NO\x02");
[007A] (1A)   Var[48] = 2;
[007E] (11)   animateActor(1,76);
[0081] (**) }
[0081] (1C) startSound(59);
[0083] (1A) Var[46] = 100;
[0087] (1A) VAR_TIMER_NEXT = 4;
[008B] (7D) setActorElevation(1,Var[46]);
[008E] (BA) Var[46] -= Var[48];
[0091] (48) if (Var[48] == 2) {
[0097] (48)   if (Var[49] == 6) {
[009D] (D8)     printEgo("O\x02");
[00A1] (**)   }
[00A1] (6F)   if (getState04(77)) {
[00A6] (9A)     Var[48] = Var[235];
[00A9] (11)     animateActor(1,72);
[00AC] (11)     animateActor(1,6);
[00AF] (D8)     printEgo("");
[00B1] (D8)     printEgo("Ahhh!");
[00B8] (1A)     Var[49] = 2;
[00BC] (**)   }
[00BC] (**) }
[00BC] (80) breakHere();
[00BD] (44) unless (Var[46] > 100) goto 0087;
[00C3] (C6) Var[49]--;
[00C5] (A8) if (Var[49]) {
[00C9] (18)   goto 0081;
[00CC] (**) }
[00CC] (60) cursorCommand(15, 2);
[00CF] (80) breakHere();
[00D0] (7C) VAR_RESULT = isSoundRunning(59);
[00D3] (28) unless (!VAR_RESULT) goto 00CF;
[00D7] (72) loadRoom(0);
[00D9] (2D) putActorInRoom(1,31);
[00DC] (01) putActor(1,20,90);
[00E0] (1A) Var[46] = 100;
[00E4] (07) setState08(506);
[00E7] (72) loadRoom(31);
[00E9] (2E) delay(30);
[00ED] (53) ActorOps(1,[Costume(Var[172])]);
[00F1] (11) animateActor(1,12);
[00F4] (11) animateActor(1,250);
[00F7] (42) startScript(5);
[00F9] (7D) setActorElevation(1,Var[46]);
[00FC] (3A) Var[46] -= 9;
[0100] (C8) if (Var[46] == Var[235]) {
[0105] (19)   doSentence(253,502,0,1);
[010C] (**) }
[010C] (80) breakHere();
[010D] (44) unless (Var[46] > 100) goto 00F9;
[0113] (9A) Var[46] = Var[234];
[0116] (7D) setActorElevation(1,Var[46]);
[0119] (80) breakHere();
[011A] (44) unless (Var[45] > 503) goto 0119;
[0120] (08) if (Var[171] != 4) {
[0126] (2D)   putActorInRoom(5,31);
[0129] (01)   putActor(5,0,35);
[012D] (3D)   setActorElevation(5,0);
[0130] (19)   doSentence(250,499,0,1);
[0137] (**) }
[0137] (2E) delay(60);
[013B] (14) print(255,"");
[013E] (2F) if (!getState04(77)) {
[0143] (1A)   Var[166] = 1;
[0147] (4A)   chainScript(78);
[0149] (**) }
[0149] (52) actorFollowCamera(1);
[014B] (5B) setBitVar(1441,0,Var[234]);
[0150] (11) animateActor(1,16);
[0153] (2E) delay(300);
[0157] (19) doSentence(250,497,0,1);
[015E] (80) breakHere();
[015F] (44) unless (Var[46] > 12) goto 015E;
[0165] (D8) printEgo("Whew!");
[016C] (AE) waitForMessage();
[016D] (10) VAR_RESULT = getObjectOwner(48);
[0171] (C8) if (VAR_RESULT == VAR_EGO) {
[0176] (D8)   printEgo("I'm glad I have this flotation seat! I\x01should be able to last at least an hour.");
[01B8] (18) } else {
[01BB] (D8)   printEgo("I don't know how long I can tread water!");
[01DD] (**) }
[01DD] (AE) waitForMessage();
[01DE] (60) cursorCommand(247, 1);
[01E1] (9A) Var[199] = Var[235];
[01E4] (4A) chainScript(85);
[01E6] (A0) stopObjectCode();
END

// Script 51
[0000] (6F) if (getState04(445)) {
[0005] (48)   if (VAR_ROOM == 185) {
[000B] (18)     goto 0062;
[000E] (**)   }
[000E] (**) }
[000E] (2E) delay(300);
[0012] (1C) startSound(86);
[0014] (1A) Var[252] = 20;
[0018] (3A) Var[252] -= 5;
[001C] (48) if (VAR_ROOM_RESOURCE == 27) {
[0022] (14)   print(255,"Tram leaving in \x04\xFC seconds.\x02");
[003E] (44)   if (Var[252] > 5) {
[0044] (14)     print(255,"");
[0047] (18)   } else {
[004A] (14)     print(255," All aboard!");
[0058] (**)   }
[0058] (**) }
[0058] (2E) delay(300);
[005C] (48) unless (Var[252] == 5) goto 0018;
[0062] (40) cutscene();
[0063] (1A) VAR_TIMER_NEXT = 10;
[0067] (13) ActorOps(12,[Costume(20)]);
[006B] (0C) loadSound(3)
[006E] (2F) if (!getState04(445)) {
[0073] (1A)   Var[48] = 76;
[0077] (1A)   Var[49] = 26;
[007B] (1A)   Var[50] = 184;
[007F] (27)   setState04(445);
[0082] (18) } else {
[0085] (1A)   Var[48] = 26;
[0089] (1A)   Var[49] = 76;
[008D] (1A)   Var[50] = 185;
[0091] (67)   clearState04(445);
[0094] (**) }
[0094] (2D) putActorInRoom(12,26);
[0097] (41) putActor(12,Var[48],49);
[009B] (11) animateActor(12,248);
[009E] (48) if (Var[48] == 26) {
[00A4] (11)   animateActor(12,249);
[00A7] (**) }
[00A7] (72) loadRoom(26);
[00A9] (52) actorFollowCamera(12);
[00AB] (58) beginOverride();
[00AC] (18) goto 00C1;
[00AF] (2E) delay(120);
[00B3] (1C) startSound(3);
[00B5] (5E) walkActorTo(12,Var[49],49);
[00B9] (3B) waitForActor(12);
[00BB] (3C) stopSound(3);
[00BD] (2E) delay(120);
[00C1] (3C) stopSound(3);
[00C3] (F2) loadRoom(Var[50]);
[00C5] (1A) Var[47] = 1;
[00C9] (B1) VAR_RESULT = getBitVar(1445,Var[47]);
[00CE] (A8) if (VAR_RESULT) {
[00D2] (ED)   putActorInRoom(Var[47],Var[50]);
[00D5] (81)   putActor(Var[47],13,63);
[00D9] (DB)   setBitVar(1445,Var[47],Var[234]);
[00DE] (DB)   setBitVar(1440,Var[47],Var[234]);
[00E3] (1A)   Var[51] = 13;
[00E7] (DA)   Var[51] += Var[47];
[00EA] (DE)   walkActorTo(Var[47],Var[51],51);
[00EE] (**) }
[00EE] (46) Var[47]++;
[00F0] (44) unless (Var[47] > 4) goto 00C9;
[00F6] (42) startScript(5);
[00F8] (C0) endCutscene();
[00F9] (A0) stopObjectCode();
END

// Script 52
[0000] (1A) Var[198] = 1;
[0004] (48) if (VAR_EGO == 1) {
[000A] (1A)   Var[198] = 2;
[000E] (**) }
[000E] (9A) Var[48] = Var[198];
[0011] (83) VAR_RESULT = getActorRoom(Var[198]);
[0014] (48) if (VAR_RESULT == 3) {
[001A] (C3)   VAR_RESULT = getActorX(Var[198]);
[001D] (44)   if (VAR_RESULT > 78) {
[0023] (B1)     VAR_RESULT = getBitVar(848,Var[198]);
[0028] (28)     if (!VAR_RESULT) {
[002C] (19)       doSentence(253,149,0,1);
[0033] (A8)       if (Var[47]) {
[0037] (14)         print(255,"Don't just stand there. Pay your fare.");
[005A] (18)       } else {
[005D] (14)         print(255,"Hey, does your friend wanna come?\x01I'll be leaving in 15 seconds!");
[0096] (**)       }
[0096] (19)       doSentence(253,148,0,1);
[009D] (2E)       delay(900);
[00A1] (**)     }
[00A1] (**)   }
[00A1] (19)   doSentence(253,149,0,1);
[00A8] (A8)   if (Var[47]) {
[00AC] (14)     print(255,"Are ya gonna pay or what?");
[00C3] (19)     doSentence(253,148,0,1);
[00CA] (AE)     waitForMessage();
[00CB] (2E)     delay(300);
[00CF] (19)     doSentence(253,149,0,1);
[00D6] (A8)     if (Var[47]) {
[00DA] (14)       print(255,"OK, outta here ya bum!");
[00EF] (19)       doSentence(253,141,0,1);
[00F6] (80)       breakHere();
[00F7] (**)     }
[00F7] (**)   }
[00F7] (**) }
[00F7] (4A) chainScript(54);
[00F9] (A0) stopObjectCode();
END

// Script 53
[0000] (48) if (VAR_ACTIVE_VERB == 12) {
[0006] (48)   if (Var[67] == 1) {
[000C] (D8)     printEgo("Zachary McKracken\x02");
[001F] (48)   } else if (Var[67] == 2) {
[0028] (D8)     printEgo("Annie Larris\x02");
[0036] (48)   } else if (Var[67] == 3) {
[003F] (10)     VAR_RESULT = getObjectOwner(74);
[0043] (48)     if (VAR_RESULT == 15) {
[0049] (D8)       printEgo("The one in front says:\x01\x02");
[005F] (**)     }
[005F] (D8)     printEgo("Melissa China\x02");
[006E] (48)   } else if (Var[67] == 4) {
[0077] (D8)     printEgo("Leslie Bennett\x02");
[0087] (18)     /* goto 008A; */
[008A] (**)   }
[008A] (9A)   Var[14] = Var[67];
[008D] (5A)   Var[14] += 61;
[0091] (9A)   Var[66] = Var[14];
[0094] (D8)   printEgo(", balance is $\x04\x42");
[00A3] (48) } else if (VAR_ACTIVE_VERB == 3) {
[00AC] (04)   if (VAR_ACTIVE_OBJECT2 <= 4) {
[00B2] (D8)     printEgo("That's useless - it only works for me.");
[00D3] (48)   } else if (VAR_ACTIVE_OBJECT2 == 352) {
[00DC] (79)     doSentence(11,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[00E1] (48)   } else if (VAR_ACTIVE_OBJECT2 == 144) {
[00EA] (1A)     Var[66] = 150;
[00EE] (14)     print(255,"Put it in the \x06\x42.");
[00FE] (19)     doSentence(253,148,0,1);
[0105] (18)   } else {
[0108] (D8)     printEgo("No way!");
[0110] (**)   }
[0110] (48) } else if (VAR_ACTIVE_VERB == 11) {
[0119] (D8)   printEgo("It won't work. It's not mine.");
[0133] (18)   /* goto 0136; */
[0136] (**) }
[0136] (A0) stopObjectCode();
END

// Script 54
[0000] (80) breakHere();
[0001] (48) if (VAR_ROOM == 3) {
[0007] (60)   cursorCommand(15, 2);
[000A] (80)   breakHere();
[000B] (7C)   VAR_RESULT = isSoundRunning(84);
[000E] (28)   unless (!VAR_RESULT) goto 000A;
[0012] (1C)   startSound(47);
[0014] (80)   breakHere();
[0015] (14)   print(255,"All right, let's go!");
[0029] (19)   doSentence(253,148,0,1);
[0030] (2E)   delay(40);
[0034] (47)   clearState08(143);
[0037] (1C)   startSound(65);
[0039] (30)   setBoxFlags(6,64);
[003C] (2E)   delay(180);
[0040] (14)   print(255,"");
[0043] (19)   doSentence(254,148,0,1);
[004A] (60)   cursorCommand(247, 1);
[004D] (**) }
[004D] (42) startScript(63);
[004F] (31) VAR_RESULT = getBitVar(1464,1);
[0054] (A8) if (VAR_RESULT) {
[0058] (2D)   putActorInRoom(1,145);
[005B] (01)   putActor(1,33,60);
[005F] (11)   animateActor(1,248);
[0062] (5B)   setBitVar(1464,1,Var[234]);
[0067] (5B)   setBitVar(1440,1,Var[234]);
[006C] (**) }
[006C] (31) VAR_RESULT = getBitVar(1464,2);
[0071] (A8) if (VAR_RESULT) {
[0075] (2D)   putActorInRoom(2,145);
[0078] (01)   putActor(2,36,60);
[007C] (11)   animateActor(2,248);
[007F] (5B)   setBitVar(1464,2,Var[234]);
[0084] (5B)   setBitVar(1440,2,Var[234]);
[0089] (**) }
[0089] (D2) actorFollowCamera(VAR_EGO);
[008B] (07) setState08(166);
[008E] (57) setState02(166);
[0091] (07) setState08(142);
[0094] (57) setState02(142);
[0097] (57) setState02(144);
[009A] (57) setState02(150);
[009D] (A0) stopObjectCode();
END

// Script 55
[0000] (48) if (VAR_ACTIVE_VERB == 12) {
[0006] (D8)   printEgo("Mitachisoniba DAT Recorder\x01Property of Melissa China - Don't Touch!");
[0043] (48) } else if (VAR_ACTIVE_VERB == 14) {
[004C] (48)   if (VAR_EGO == 3) {
[0052] (B7)     setState01(VAR_ACTIVE_OBJECT1);
[0054] (D0)     pickupObject(VAR_ACTIVE_OBJECT1);
[0056] (6F)     if (getState04(454)) {
[005B] (07)       setState08(495);
[005E] (**)     }
[005E] (18)   } else {
[0061] (D8)     printEgo("No Way! Melissa would KILL me!");
[007C] (19)     doSentence(STOP);
[007E] (**)   }
[007E] (48) } else if (VAR_ACTIVE_VERB == 3) {
[0087] (D8)   printEgo("No way, it's mine!");
[0098] (48) } else if (VAR_ACTIVE_VERB == 11) {
[00A1] (48)   if (VAR_ACTIVE_OBJECT2 == 72) {
[00A7] (47)     clearState08(493);
[00AA] (6F)     if (getState04(493)) {
[00AF] (29)       setOwnerOf(72,0);
[00B3] (18)     } else {
[00B6] (29)       setOwnerOf(72,14);
[00BA] (**)     }
[00BA] (18)   } else {
[00BD] (42)     startScript(3);
[00BF] (**)   }
[00BF] (48) } else if (VAR_ACTIVE_VERB == 4) {
[00C8] (4F)   if (getState08(493)) {
[00CD] (D8)     printEgo("There's no tape in it.");
[00E1] (62)     stopScript(0);
[00E3] (18)   } else {
[00E6] (40)     cutscene();
[00E7] (9A)     Var[66] = Var[234];
[00EA] (FA)     VerbOps(Delete(Var[66]););
[00ED] (46)     Var[66]++;
[00EF] (44)     unless (Var[66] > 14) goto 00EA;
[00F5] (7A)     VerbOps(New-32(0,20,10,0,"        Play@@@@@@@@"));
[0110] (7A)     VerbOps(New-31(20,20,11,0,"      Record@@@@@@@@"));
[012B] (60)     cursorCommand(0, 0);
[012E] (60)     cursorCommand(159, 3);
[0131] (58)     beginOverride();
[0132] (18)     goto 0144;
[0135] (9A)     VAR_ACTIVE_VERB = Var[234];
[0138] (9A)     VAR_SENTENCE_VERB = Var[234];
[013B] (1A)     VAR_BACKUP_VERB = 34;
[013F] (80)     breakHere();
[0140] (A8)     unless (VAR_ACTIVE_VERB) goto 013F;
[0144] (42)     startScript(19);
[0146] (C0)     endCutscene();
[0147] (48)     if (VAR_ACTIVE_VERB == 32) {
[014D] (28)       if (!Var[158]) {
[0151] (D8)         printEgo("The DAT is blank.");
[0161] (62)         stopScript(0);
[0163] (**)       }
[0163] (48)       if (VAR_ROOM == 188) {
[0169] (7C)         VAR_RESULT = isSoundRunning(70);
[016C] (A8)         if (VAR_RESULT) {
[0170] (D8)           printEgo("Hmmm, it won't play in here. Perhaps\x01it's the crystalinetic force!");
[01AB] (62)           stopScript(0);
[01AD] (**)         }
[01AD] (**)       }
[01AD] (5B)       setBitVar(1440,0,Var[235]);
[01B2] (48)       if (VAR_ROOM_RESOURCE == 33) {
[01B8] (08)         if (VAR_ROOM != 182) {
[01BE] (48)           if (Var[158] == 32) {
[01C4] (19)             doSentence(11,520,0,1);
[01CB] (62)             stopScript(0);
[01CD] (**)           }
[01CD] (**)         }
[01CD] (**)       }
[01CD] (9C)       startSound(Var[158]);
[01CF] (2F)       if (!getState04(495)) {
[01D4] (42)         startScript(44);
[01D6] (**)       }
[01D6] (9A)       Var[149] = VAR_ROOM;
[01D9] (9A)       Var[231] = Var[230];
[01DC] (88)       if (Var[149] != VAR_ROOM) {
[01E1] (18)       } else {
[01E4] (80)         breakHere();
[01E5] (C6)         Var[231]--;
[01E7] (28)         unless (!Var[231]) goto 01DC;
[01EB] (**)       }
[01EB] (BC)       stopSound(Var[158]);
[01ED] (5B)       setBitVar(1440,0,Var[234]);
[01F2] (48)     } else if (VAR_ACTIVE_VERB == 31) {
[01FB] (31)       VAR_RESULT = getBitVar(1440,0);
[0200] (A8)       if (VAR_RESULT) {
[0204] (5B)         setBitVar(1440,0,Var[234]);
[0209] (BC)         stopSound(Var[158]);
[020B] (**)       }
[020B] (6F)       if (getState04(493)) {
[0210] (27)         setState04(71);
[0213] (54)         setObjectName(71,"recording boom box");
[0229] (18)       } else {
[022C] (D8)         printEgo("It won't record!\x03I think the DAT is write-protected.");
[025B] (**)       }
[025B] (**)     }
[025B] (6F)     if (getState04(71)) {
[0260] (1A)       Var[230] = 240;
[0264] (9A)       Var[149] = VAR_ROOM;
[0267] (7C)       VAR_RESULT = isSoundRunning(86);
[026A] (A8)       if (VAR_RESULT) {
[026E] (1A)         Var[158] = 86;
[0272] (18)       } else {
[0275] (7C)         VAR_RESULT = isSoundRunning(70);
[0278] (A8)         unless (VAR_RESULT) goto 0287;
[027C] (1A)         Var[158] = 70;
[0280] (**)       }
[0280] (2E)       delay(240);
[0284] (18)       goto 033D;
[0287] (9A)       VAR_LAST_SOUND = Var[234];
[028A] (9A)       Var[158] = VAR_LAST_SOUND;
[028D] (88)       if (Var[149] != VAR_ROOM) {
[0292] (18)         goto 033D;
[0295] (**)       }
[0295] (A8)       if (VAR_LAST_SOUND) {
[0299] (1A)         Var[66] = 6;
[029D] (C8)         if (VAR_LAST_SOUND == Var[66]) {
[02A2] (18)         } else {
[02A5] (46)           Var[66]++;
[02A7] (44)           unless (Var[66] > 9) goto 029D;
[02AD] (9A)           Var[158] = VAR_LAST_SOUND;
[02B0] (9A)           Var[230] = Var[234];
[02B3] (80)           breakHere();
[02B4] (46)           Var[230]++;
[02B6] (FC)           VAR_RESULT = isSoundRunning(VAR_LAST_SOUND);
[02B9] (28)           if (!VAR_RESULT) {
[02BD] (78)             if (Var[230] < 5) {
[02C3] (1A)               Var[230] = 5;
[02C7] (**)             }
[02C7] (18)             goto 033D;
[02CA] (**)           }
[02CA] (48)           unless (Var[230] == 240) goto 02B3;
[02D0] (18)           goto 033D;
[02D3] (**)         }
[02D3] (**)       }
[02D3] (80)       breakHere();
[02D4] (C6)       Var[230]--;
[02D6] (28)       unless (!Var[230]) goto 028D;
[02DA] (18)       goto 033D;
[02DD] (**)     }
[02DD] (**)   }
[02DD] (48) } else if (VAR_ACTIVE_VERB == 1) {
[02E6] (0F)   if (!getState08(493)) {
[02EB] (2F)     if (!getState04(493)) {
[02F0] (07)       setState08(493);
[02F3] (D8)       printEgo("The DAT fell out.");
[0303] (69)       setOwnerOf(72,VAR_EGO);
[0307] (18)     } else {
[030A] (D8)       printEgo("The DAT is stuck inside.");
[0320] (**)     }
[0320] (18)     goto 0331;
[0323] (**)   }
[0323] (48) } else if (VAR_ACTIVE_VERB == 5) {
[032C] (0F)   if (!getState08(493)) {
[0331] (2F)     if (!getState04(71)) {
[0336] (5B)       setBitVar(1440,0,Var[234]);
[033B] (BC)       stopSound(Var[158]);
[033D] (**)     }
[033D] (67)     clearState04(71);
[0340] (54)     setObjectName(71,"boom box");
[034C] (48)     if (VAR_ROOM == 30) {
[0352] (6F)       if (getState04(492)) {
[0357] (19)         doSentence(4,492,0,1);
[035E] (**)       }
[035E] (**)     }
[035E] (**)   }
[035E] (18)   /* goto 0361; */
[0361] (**) }
[0361] (A0) stopObjectCode();
END

// no scripts 56-57

// Script 58
[0000] (48) if (VAR_ACTIVE_VERB == 3) {
[0006] (48)   if (VAR_ACTIVE_OBJECT2 == 2) {
[000C] (10)     VAR_RESULT = getObjectOwner(83);
[0010] (48)     if (VAR_RESULT == 2) {
[0016] (14)       print(2,"I\x02");
[001B] (18)       goto 004D;
[001E] (**)     }
[001E] (29)     setOwnerOf(83,2);
[0022] (1A)     Var[66] = 2;
[0026] (1A)     Var[67] = 1;
[002A] (18)     goto 00A7;
[002D] (48)   } else if (VAR_ACTIVE_OBJECT2 == 1) {
[0036] (10)     VAR_RESULT = getObjectOwner(82);
[003A] (48)     if (VAR_RESULT == 1) {
[0040] (14)       print(2,"No way! You\x02");
[004D] (14)       print(2," already have a ticket,\x01and you know the FAA's new rules:\x03only one ticket per person!");
[0098] (18)     } else {
[009B] (29)       setOwnerOf(82,1);
[009F] (1A)       Var[66] = 1;
[00A3] (1A)       Var[67] = 2;
[00A7] (A9)       setOwnerOf(VAR_ACTIVE_OBJECT1,14);
[00AA] (9A)       Var[14] = Var[66];
[00AD] (5A)       Var[14] += 78;
[00B1] (9A)       Var[15] = Var[67];
[00B4] (5A)       Var[15] += 78;
[00B8] (8A)       Var[Var[14]] = Var[15];
[00BB] (9A)       Var[14] = Var[66];
[00BE] (5A)       Var[14] += 154;
[00C2] (9A)       Var[15] = Var[67];
[00C5] (5A)       Var[15] += 154;
[00C9] (8A)       Var[Var[14]] = Var[15];
[00CC] (9A)       Var[14] = Var[67];
[00CF] (5A)       Var[14] += 154;
[00D3] (8A)       Var[Var[14]] = Var[234];
[00D6] (9A)       Var[14] = Var[66];
[00D9] (5A)       Var[14] += 81;
[00DD] (9A)       Var[15] = Var[67];
[00E0] (5A)       Var[15] += 81;
[00E4] (8A)       Var[Var[14]] = Var[15];
[00E7] (**)     }
[00E7] (18)   } else {
[00EA] (D8)     printEgo("I'll keep it.");
[00F7] (**)   }
[00F7] (**) }
[00F7] (48) if (VAR_ACTIVE_VERB == 12) {
[00FD] (9A)   Var[117] = VAR_ACTIVE_OBJECT1;
[0100] (D8)   printEgo("Point of departure: \x02");
[0114] (9A)   Var[14] = VAR_EGO;
[0117] (5A)   Var[14] += 154;
[011B] (9A)   Var[184] = Var[14];
[011E] (5A)   Var[184] += 518;
[0122] (9A)   Var[185] = Var[234];
[0125] (48)   if (Var[184] == 664) {
[012B] (D8)     printEgo("Cairo, Egypt\x01\x02");
[013A] (48)   } else if (Var[184] == 666) {
[0143] (D8)     printEgo("Katmandu, Nepal\x01\x02");
[0155] (48)   } else if (Var[184] == 665) {
[015E] (D8)     printEgo("Kinshasa, Zaire\x01\x02");
[0170] (48)   } else if (Var[184] == 667) {
[0179] (D8)     printEgo("Lima, Peru\x01\x02");
[0186] (48)   } else if (Var[184] == 659) {
[018F] (D8)     printEgo("London, England\x01\x02");
[01A1] (48)   } else if (Var[184] == 660) {
[01AA] (D8)     printEgo("Mexico City, Mexico\x01\x02");
[01BF] (48)   } else if (Var[184] == 661) {
[01C8] (D8)     printEgo("Miami, FL\x01\x02");
[01D4] (48)   } else if (Var[184] == 663) {
[01DD] (D8)     printEgo("San Francisco, CA\x01\x02");
[01F0] (48)   } else if (Var[184] == 662) {
[01F9] (D8)     printEgo("Seattle, WA\x01\x02");
[0207] (48)   } else if (Var[184] == 668) {
[0210] (D8)     printEgo("Bermuda Triangle\x01\x02");
[0223] (18)     /* goto 0226; */
[0226] (**)   }
[0226] (46)   Var[185]++;
[0228] (C8)   if (Var[185] == Var[235]) {
[022D] (D8)     printEgo("Destination:        \x02");
[0240] (9A)     Var[14] = VAR_EGO;
[0243] (5A)     Var[14] += 78;
[0247] (9A)     Var[184] = Var[14];
[024A] (18)     goto 0125;
[024D] (**)   }
[024D] (D8)   printEgo("");
[024F] (AE)   waitForMessage();
[0250] (C8)   if (VAR_ACTIVE_OBJECT1 == Var[117]) {
[0255] (9A)     Var[14] = VAR_EGO;
[0258] (5A)     Var[14] += 81;
[025C] (9A)     Var[66] = Var[14];
[025F] (D8)     printEgo("Value: $\x04\x42. Ticket is refundable.");
[027E] (**)   }
[027E] (**) }
[027E] (A0) stopObjectCode();
END

// Script 59: Switch Character
[0000] (48) if (Var[21] == 1) {
[0006] (60)   cursorCommand(191, 3);
[0009] (9A)   Var[66] = Var[234];
[000C] (FA)   VerbOps(Delete(Var[66]););
[000F] (46)   Var[66]++;
[0011] (44)   unless (Var[66] > 14) goto 000C;
[0017] (31)   VAR_RESULT = getBitVar(1471,0);
[001C] (28)   if (!VAR_RESULT) {
[0020] (7A)     VerbOps(New-46(0,20,10,0,"Zak@@@@@@@"));
[0031] (**)   }
[0031] (31)   VAR_RESULT = getBitVar(1472,0);
[0036] (28)   if (!VAR_RESULT) {
[003A] (7A)     VerbOps(New-47(10,20,11,0,"Annie@@@@@"));
[004B] (**)   }
[004B] (31)   VAR_RESULT = getBitVar(1473,0);
[0050] (28)   if (!VAR_RESULT) {
[0054] (7A)     VerbOps(New-48(20,20,12,0,"Melissa@@@"));
[0065] (**)   }
[0065] (31)   VAR_RESULT = getBitVar(1474,0);
[006A] (28)   if (!VAR_RESULT) {
[006E] (7A)     VerbOps(New-49(30,20,13,0,"Leslie@@@@"));
[007F] (**)   }
[007F] (7A)   VerbOps(New-45(0,200,14,0,"Switch"));
[008C] (60)   cursorCommand(0, 0);
[008F] (**) }
[008F] (A0) stopObjectCode();
END

// Script 60
[0000] (08) if (VAR_EGO != 1) {
[0006] (18) } else {
[0009] (2F)   unless (!getState04(81)) goto 0035;
[000E] (**) }
[000E] (2E) delay(120);
[0012] (D8) printEgo("It doesn't seem to be doing anything.");
[0033] (62) stopScript(0);
[0035] (48) if (VAR_ROOM == 19) {
[003B] (2E)   delay(120);
[003F] (D8)   printEgo("It doesn't seem to work here.");
[0059] (62)   stopScript(0);
[005B] (**) }
[005B] (10) VAR_RESULT = getObjectOwner(17);
[005F] (48) if (VAR_RESULT == 1) {
[0065] (A8)   if (Var[193]) {
[0069] (1A)     Var[118] = 153;
[006D] (18)     goto 009C;
[0070] (**)   }
[0070] (**) }
[0070] (10) VAR_RESULT = getObjectOwner(15);
[0074] (48) if (VAR_RESULT == 1) {
[007A] (A8)   if (Var[194]) {
[007E] (1A)     Var[118] = 154;
[0082] (18)     goto 009C;
[0085] (**)   }
[0085] (**) }
[0085] (D8) printEgo("I need a map to focus on.");
[009A] (62) stopScript(0);
[009C] (40) cutscene();
[009D] (58) beginOverride();
[009E] (18) goto 0196;
[00A1] (F2) loadRoom(Var[118]);
[00A3] (9A) Var[195] = Var[234];
[00A6] (60) cursorCommand(191, 3);
[00A9] (80) breakHere();
[00AA] (48) if (VAR_ACTIVE_VERB == 30) {
[00B0] (18) } else {
[00B3] (19)   doSentence(253,487,0,1);
[00BA] (28)   if (!Var[195]) {
[00BE] (18)     goto 00A9;
[00C1] (**)   }
[00C1] (58)   beginOverride();
[00C2] (18)   /* goto 00C5; */
[00C5] (60)   cursorCommand(4, 0);
[00C8] (D2)   actorFollowCamera(VAR_EGO);
[00CA] (60)   cursorCommand(15, 2);
[00CD] (80)   breakHere();
[00CE] (11)   animateActor(1,246);
[00D1] (48)   if (Var[195] == 1) {
[00D7] (58)     beginOverride();
[00D8] (18)     goto 0196;
[00DB] (2E)     delay(300);
[00DF] (D8)     printEgo("Nothing's happening!");
[00F4] (18)   } else {
[00F7] (8C)     lockCostume(Var[172])
[00FA] (0C)     loadSound(62)
[00FD] (0C)     lockSound(62)
[0100] (13)     ActorOps(1,[Sound(6)]);
[0104] (9A)     Var[199] = Var[235];
[0107] (57)     setState02(504);
[010A] (62)     stopScript(85);
[010C] (62)     stopScript(86);
[010E] (DB)     setBitVar(1475,VAR_EGO,Var[234]);
[0113] (48)     if (VAR_ROOM == 131) {
[0119] (5B)       setBitVar(1510,0,Var[234]);
[011E] (62)       stopScript(69);
[0120] (**)     }
[0120] (62)     stopScript(50);
[0122] (58)     beginOverride();
[0123] (18)     goto 0165;
[0126] (1C)     startSound(61);
[0128] (2E)     delay(240);
[012C] (1C)     startSound(89);
[012E] (48)     if (VAR_ROOM == 11) {
[0134] (07)       setState08(263);
[0137] (**)     }
[0137] (13)     ActorOps(1,[Costume(0)]);
[013B] (3D)     setActorElevation(1,0);
[013E] (2E)     delay(120);
[0142] (48)     if (VAR_ROOM == 11) {
[0148] (42)       startScript(120);
[014A] (**)     }
[014A] (E4)     loadRoomWithEgo(Var[81],Var[195],255,255);
[014F] (80)     breakHere();
[0150] (1C)     startSound(62);
[0152] (11)     animateActor(1,250);
[0155] (2E)     delay(240);
[0159] (1C)     startSound(89);
[015B] (53)     ActorOps(1,[Costume(Var[172])]);
[015F] (42)     startScript(5);
[0161] (2E)     delay(60);
[0165] (A8)     if (VAR_OVERRIDE) {
[0169] (48)       if (VAR_ROOM == 11) {
[016F] (42)         startScript(120);
[0171] (**)       }
[0171] (3C)       stopSound(61);
[0173] (3C)       stopSound(62);
[0175] (F2)       loadRoom(Var[195]);
[0177] (6D)       putActorInRoom(1,Var[195]);
[017A] (4E)       putActorAtObject(1,Var[81]);
[017D] (11)       animateActor(1,250);
[0180] (3D)       setActorElevation(1,0);
[0183] (53)       ActorOps(1,[Costume(Var[172])]);
[0187] (42)       startScript(5);
[0189] (1C)       startSound(89);
[018B] (**)     }
[018B] (DB)     setBitVar(1440,VAR_EGO,Var[234]);
[0190] (8C)     unlockCostume(Var[172])
[0193] (0C)     unlockSound(62)
[0196] (**)   }
[0196] (**) }
[0196] (C0) endCutscene();
[0197] (A0) stopObjectCode();
END

// Script 61
[0000] (C8) if (VAR_CURRENT_LIGHTS == Var[234]) {
[0005] (D8)   printEgo("It's too dark in here.");
[0019] (18) } else {
[001C] (48)   if (VAR_ACTIVE_OBJECT1 == 27) {
[0022] (D8)     printEgo("THE KING FAN CLUB\x01Member in good standing since 1997.");
[0051] (62)     stopScript(0);
[0053] (**)   }
[0053] (48)   if (VAR_ACTIVE_OBJECT1 == 30) {
[0059] (48)     if (VAR_ACTIVE_OBJECT2 == 25) {
[005F] (9A)       Var[160] = VAR_EGO;
[0062] (2E)       delay(60);
[0066] (D8)       printEgo("Well, it's all filled out and the\x01postage is prepaid.");
[0095] (**)     }
[0095] (48)     if (VAR_ACTIVE_VERB == 12) {
[009B] (D8)       printEgo("   THE KING FAN CLUB\x01DON'T DELAY - JOIN TODAY");
[00C2] (A8)       if (Var[160]) {
[00C6] (AE)         waitForMessage();
[00C7] (D8)         printEgo("And it's filled out in crayon.");
[00E2] (**)       }
[00E2] (**)     }
[00E2] (62)     stopScript(0);
[00E4] (**)   }
[00E4] (48)   if (VAR_ACTIVE_OBJECT2 == 17) {
[00EA] (9A)     Var[66] = Var[234];
[00ED] (54)     setObjectName(17,"wallpaper map");
[00FE] (18)   } else {
[0101] (9A)     Var[66] = Var[235];
[0104] (54)     setObjectName(15,"phone bill map");
[0116] (**)   }
[0116] (9A)   Var[14] = Var[66];
[0119] (5A)   Var[14] += 193;
[011D] (C8)   if (Var[14] == Var[234]) {
[0122] (B1)     VAR_RESULT = getBitVar(1455,VAR_EGO);
[0127] (28)     if (!VAR_RESULT) {
[012B] (D8)       printEgo("I drew the map from my dream on it.");
[0148] (9A)       Var[14] = Var[66];
[014B] (5A)       Var[14] += 193;
[014F] (8A)       Var[Var[14]] = Var[235];
[0152] (18)     } else {
[0155] (D8)       printEgo("I drew my dream map and the Mars map.");
[0174] (9A)       Var[14] = Var[66];
[0177] (5A)       Var[14] += 193;
[017B] (0A)       Var[Var[14]] = 2;
[017F] (**)     }
[017F] (18)   } else {
[0182] (9A)     Var[14] = Var[66];
[0185] (5A)     Var[14] += 193;
[0189] (08)     if (Var[14] != 2) {
[018F] (B1)       VAR_RESULT = getBitVar(1455,VAR_EGO);
[0194] (A8)       if (VAR_RESULT) {
[0198] (D8)         printEgo("I drew the Mars map.");
[01AA] (9A)         Var[14] = Var[66];
[01AD] (5A)         Var[14] += 193;
[01B1] (0A)         Var[Var[14]] = 2;
[01B5] (18)         goto 01CF;
[01B8] (**)       }
[01B8] (**)     }
[01B8] (D8)     printEgo("It already has a map on it.");
[01CF] (**)   }
[01CF] (**) }
[01CF] (A0) stopObjectCode();
END

// Script 62
[0000] (62) stopScript(147);
[0002] (60) cursorCommand(255, 1);
[0005] (9A) Var[119] = VAR_ACTIVE_OBJECT2;
[0008] (9A) Var[45] = Var[234];
[000B] (80) breakHere();
[000C] (03) VAR_RESULT = getActorRoom(1);
[000F] (08) if (VAR_RESULT != 5) {
[0015] (18) } else {
[0018] (46)   Var[45]++;
[001A] (44)   unless (Var[45] > 80) goto 000B;
[0020] (**) }
[0020] (11) animateActor(1,255);
[0023] (60) cursorCommand(134, 0);
[0026] (40) cutscene();
[0027] (67) clearState04(162);
[002A] (58) beginOverride();
[002B] (18) goto 04DC;
[002E] (03) Var[120] = getActorRoom(1);
[0031] (2E) delay(30);
[0035] (12) panCameraTo(45);
[0037] (80) breakHere();
[0038] (48) unless (VAR_CAMERA_POS_X == 45) goto 0037;
[003E] (0C) loadCostume(2)
[0041] (2E) delay(60);
[0045] (30) setBoxFlags(14,0);
[0048] (2D) putActorInRoom(2,5);
[004B] (01) putActor(2,46,36);
[004F] (11) animateActor(2,250);
[0052] (1A) VAR_EGO = 2;
[0056] (52) actorFollowCamera(2);
[0058] (19) doSentence(1,162,0,1);
[005F] (2E) delay(60);
[0063] (1A) Var[117] = 168;
[0067] (08) if (Var[120] != 5) {
[006D] (1E)   walkActorTo(2,46,40);
[0071] (3B)   waitForActor(2);
[0073] (11)   animateActor(2,245);
[0076] (2E)   delay(60);
[007A] (11)   animateActor(2,244);
[007D] (2E)   delay(60);
[0081] (48)   if (Var[120] == 7) {
[0087] (1A)     Var[118] = 161;
[008B] (1A)     Var[117] = 180;
[008F] (48)   } else if (Var[120] == 3) {
[0098] (1A)     Var[118] = 160;
[009C] (1A)     Var[117] = 141;
[00A0] (18)     /* goto 00A3; */
[00A3] (**)   }
[00A3] (76)   walkActorToObject(2,Var[118]);
[00A6] (3B)   waitForActor(2);
[00A8] (E4)   loadRoomWithEgo(Var[117],Var[120],50,56);
[00AD] (2E)   delay(60);
[00B1] (18) } else {
[00B4] (43)   VAR_RESULT = getActorX(1);
[00B7] (78)   if (VAR_RESULT < 24) {
[00BD] (01)     putActor(1,5,56);
[00C1] (42)     startScript(5);
[00C3] (**)   }
[00C3] (**) }
[00C3] (34) VAR_RESULT = getDist(2,1);
[00C9] (44) if (VAR_RESULT > 4) {
[00CF] (0D)   walkActorToActor(2,1,4);
[00D3] (D8)   printEgo("Hey you!");
[00DC] (AE)   waitForMessage();
[00DD] (09)   faceActor(1,2);
[00E0] (00)   stopObjectCode();
[00E1] (3B)   waitForActor(2);
[00E3] (09)   faceActor(2,1);
[00E6] (00)   stopObjectCode();
[00E7] (09)   faceActor(1,2);
[00EA] (00)   stopObjectCode();
[00EB] (18) } else {
[00EE] (48)   if (Var[120] == 5) {
[00F4] (7B)     VAR_RESULT = getActorWalkBox(1);
[00F7] (08)     if (VAR_RESULT != 9) {
[00FD] (1E)       walkActorTo(1,46,40);
[0101] (3B)       waitForActor(1);
[0103] (**)     }
[0103] (**)   }
[0103] (11)   animateActor(1,247);
[0106] (**) }
[0106] (D8) printEgo("Where did you get that artifact?");
[0123] (AE) waitForMessage();
[0124] (14) print(1,"Never mind that! You're the woman who\x01was in my dream!");
[0154] (AE) waitForMessage();
[0155] (D8) printEgo("What a line!\x03Wait a second^ I had a dream too. I was\x01in a strange room with a strange man.");
[019F] (AE) waitForMessage();
[01A0] (08) if (Var[164] != 44) {
[01A6] (11)   animateActor(1,246);
[01A9] (1A)   VAR_EGO = 1;
[01AD] (D8)   printEgo("Hold on!");
[01B6] (AE)   waitForMessage();
[01B7] (19)   doSentence(7,40,0,1);
[01BE] (19)   doSentence(7,50,0,1);
[01C5] (2E)   delay(60);
[01C9] (09)   faceActor(1,2);
[01CC] (00)   stopObjectCode();
[01CD] (3B)   waitForActor(1);
[01CF] (1A)   VAR_EGO = 2;
[01D3] (**) }
[01D3] (D8) printEgo("IT WAS YOU!\x03Come with me.");
[01EA] (AE) waitForMessage();
[01EB] (76) walkActorToObject(2,Var[117]);
[01EE] (74) VAR_RESULT = getDist(1,Var[117]);
[01F3] (44) if (VAR_RESULT > 7) {
[01F9] (80)   breakHere();
[01FA] (34)   VAR_RESULT = getDist(2,1);
[0200] (44)   unless (VAR_RESULT > 6) goto 01F9;
[0206] (18) } else {
[0209] (2E)   delay(30);
[020D] (**) }
[020D] (76) walkActorToObject(1,Var[117]);
[0210] (3B) waitForActor(2);
[0212] (2D) putActorInRoom(2,6);
[0215] (01) putActor(2,10,56);
[0219] (2D) putActorInRoom(1,6);
[021C] (01) putActor(1,3,56);
[0220] (11) animateActor(2,248);
[0223] (11) animateActor(1,249);
[0226] (72) loadRoom(6);
[0228] (2E) delay(60);
[022C] (D8) printEgo("My two friends and I had special dreams\x01sent to us by the Ancient Ones.\x03You're the one they told us about.");
[0285] (AE) waitForMessage();
[0286] (11) animateActor(1,246);
[0289] (80) breakHere();
[028A] (14) print(1,"Give me a break!");
[029A] (AE) waitForMessage();
[029B] (11) animateActor(1,245);
[029E] (D8) printEgo("I see you're skeptical. You'll soon\x01change your mind.");
[02CE] (AE) waitForMessage();
[02CF] (19) doSentence(10,178,0,0);
[02D6] (D8) printEgo("In the dream we shared, we saw a strange\x01device which we must build.");
[0310] (4C) waitForSentence();
[0311] (1E) walkActorTo(2,26,51);
[0315] (3B) waitForActor(2);
[0317] (11) animateActor(2,244);
[031A] (80) breakHere();
[031B] (AE) waitForMessage();
[031C] (D8) printEgo("Here's a drawing of it.");
[0331] (36) walkActorToObject(1,178);
[0335] (3B) waitForActor(1);
[0337] (14) print(1,"Hey! That's it!");
[0347] (AE) waitForMessage();
[0348] (D8) printEgo("The \x06\x77 you brought me is\x01\x02");
[0360] (48) if (Var[119] == 79) {
[0366] (D8)   printEgo("very important to our mission.");
[0382] (AE)   waitForMessage();
[0383] (18) } else {
[0386] (D8)   printEgo("a part of this device.");
[039A] (AE)   waitForMessage();
[039B] (D8)   printEgo("This is another part of it.");
[03B3] (**) }
[03B3] (19) doSentence(3,33,1,0);
[03BA] (4C) waitForSentence();
[03BB] (D8) printEgo("Here.\x03When whole, this yellow crystal shard\x01will let you join my friends on Mars.\x03Of course, you'll need a spacesuit.");
[0421] (AE) waitForMessage();
[0422] (11) animateActor(1,246);
[0425] (14) print(1,"A spacesuit?");
[0433] (2E) delay(60);
[0437] (36) walkActorToObject(2,173);
[043B] (2E) delay(60);
[043F] (59) doSentence(3,Var[119],1,0);
[0445] (D8) printEgo("Oh yes, here's your artifact back.");
[0464] (AE) waitForMessage();
[0465] (D8) printEgo("From now on, we will all share knowledge\x01through our dreams.\x03Be careful! If one of us dies, it will\x01be impossible to complete our mission!");
[04DB] (AE) waitForMessage();
[04DC] (1A) VAR_EGO = 1;
[04E0] (A8) if (VAR_OVERRIDE) {
[04E4] (14)   print(255,"");
[04E7] (2D)   putActorInRoom(2,6);
[04EA] (01)   putActor(2,27,52);
[04EE] (2D)   putActorInRoom(1,6);
[04F1] (01)   putActor(1,23,52);
[04F5] (19)   doSentence(7,40,0,1);
[04FC] (19)   doSentence(7,50,0,1);
[0503] (42)   startScript(5);
[0505] (11)   animateActor(1,249);
[0508] (11)   animateActor(2,248);
[050B] (72)   loadRoom(6);
[050D] (07)   setState08(162);
[0510] (07)   setState08(172);
[0513] (07)   setState08(178);
[0516] (10)   VAR_RESULT = getObjectOwner(33);
[051A] (48)   if (VAR_RESULT == 15) {
[0520] (50)     pickupObject(33);
[0523] (**)   }
[0523] (29)   setOwnerOf(33,1);
[0527] (A9)   setOwnerOf(Var[119],1);
[052A] (**) }
[052A] (9A) Var[66] = Var[234];
[052D] (FA) VerbOps(Delete(Var[66]););
[0530] (46) Var[66]++;
[0532] (44) unless (Var[66] > 13) goto 052D;
[0538] (60) cursorCommand(0, 0);
[053B] (C0) endCutscene();
[053C] (9A) Var[117] = Var[235];
[053F] (2E) delay(15);
[0543] (7A) VerbOps(Delete(14));
[0546] (60) cursorCommand(0, 0);
[0549] (2E) delay(15);
[054D] (7A) VerbOps(New-45(32,21,14,0,"Switch@@"));
[055C] (60) cursorCommand(0, 0);
[055F] (46) Var[117]++;
[0561] (44) unless (Var[117] > 6) goto 053F;
[0567] (9A) Var[199] = Var[235];
[056A] (42) startScript(19);
[056C] (60) cursorCommand(247, 1);
[056F] (A0) stopObjectCode();
END

// Script 63
[0000] (07) setState08(191);
[0003] (2E) delay(10800);
[0007] (2E) delay(30);
[000B] (08) unless (VAR_ROOM != 3) goto 0007;
[0011] (48) if (VAR_ROOM == 5) {
[0017] (18)   goto 0007;
[001A] (**) }
[001A] (47) clearState08(142);
[001D] (17) clearState02(142);
[0020] (47) clearState08(166);
[0023] (17) clearState02(166);
[0026] (17) clearState02(144);
[0029] (17) clearState02(150);
[002C] (A0) stopObjectCode();
END

// Script 64
[0000] (9A) Var[49] = Var[234];
[0003] (2E) delay(60);
[0007] (1C) startSound(45);
[0009] (31) VAR_RESULT = getBitVar(1568,0);
[000E] (28) if (!VAR_RESULT) {
[0012] (19)   doSentence(253,232,0,1);
[0019] (2E)   delay(240);
[001D] (**) }
[001D] (2E) delay(480);
[0021] (9A) Var[66] = Var[234];
[0024] (08) if (VAR_ROOM != 10) {
[002A] (03)   VAR_RESULT = getActorRoom(1);
[002D] (08)   if (VAR_RESULT != 10) {
[0033] (62)     stopScript(0);
[0035] (18)   } else {
[0038] (46)     Var[66]++;
[003A] (**)   }
[003A] (**) }
[003A] (40) cutscene();
[003B] (A8) if (Var[66]) {
[003F] (52)   actorFollowCamera(1);
[0041] (1C)   startSound(45);
[0043] (2E)   delay(120);
[0047] (**) }
[0047] (33) RoomColor(15,7)
[004B] (33) RoomColor(7,8)
[004F] (33) RoomColor(7,0)
[0053] (33) RoomColor(12,4)
[0057] (33) RoomColor(15,12)
[005B] (33) RoomColor(14,6)
[005F] (33) RoomColor(15,14)
[0063] (33) RoomColor(11,3)
[0067] (33) RoomColor(15,11)
[006B] (33) RoomColor(13,5)
[006F] (33) RoomColor(15,13)
[0073] (33) RoomColor(10,2)
[0077] (33) RoomColor(15,10)
[007B] (33) RoomColor(9,1)
[007F] (33) RoomColor(15,9)
[0083] (80) breakHere();
[0084] (80) breakHere();
[0085] (0F) if (!getState08(229)) {
[008A] (19)   doSentence(254,230,0,1);
[0091] (07)   setState08(229);
[0094] (57)   setState02(229);
[0097] (07)   setState08(239);
[009A] (30)   setBoxFlags(1,128);
[009D] (30)   setBoxFlags(2,128);
[00A0] (30)   setBoxFlags(0,0);
[00A3] (0C)   lockCostume(11)
[00A6] (2D)   putActorInRoom(11,0);
[00A9] (3D)   setActorElevation(11,0);
[00AC] (5B)   setBitVar(1510,0,Var[234]);
[00B1] (**) }
[00B1] (9A) Var[118] = Var[234];
[00B4] (03) VAR_RESULT = getActorRoom(1);
[00B7] (48) if (VAR_RESULT == 10) {
[00BD] (7B)   VAR_RESULT = getActorWalkBox(1);
[00C0] (04)   if (VAR_RESULT <= 2) {
[00C6] (1A)     VAR_EGO = 1;
[00CA] (46)     Var[118]++;
[00CC] (0C)     lockCostume(1)
[00CF] (13)     ActorOps(1,[Costume(0)]);
[00D3] (B2)     setCameraAt(VAR_CAMERA_POS_X);
[00D5] (3D)     setActorElevation(1,0);
[00D8] (2D)     putActorInRoom(1,0);
[00DB] (**)   }
[00DB] (**) }
[00DB] (80) breakHere();
[00DC] (80) breakHere();
[00DD] (33) RoomColor(7,7)
[00E1] (33) RoomColor(8,8)
[00E5] (33) RoomColor(0,0)
[00E9] (33) RoomColor(4,4)
[00ED] (33) RoomColor(12,12)
[00F1] (33) RoomColor(6,6)
[00F5] (33) RoomColor(14,14)
[00F9] (33) RoomColor(3,3)
[00FD] (33) RoomColor(11,11)
[0101] (33) RoomColor(5,5)
[0105] (33) RoomColor(13,13)
[0109] (33) RoomColor(2,2)
[010D] (33) RoomColor(10,10)
[0111] (33) RoomColor(1,1)
[0115] (33) RoomColor(9,9)
[0119] (2E) delay(30);
[011D] (3C) stopSound(45);
[011F] (2E) delay(120);
[0123] (A8) if (Var[118]) {
[0127] (A8)   if (Var[233]) {
[012B] (AD)     putActorInRoom(VAR_EGO,143);
[012E] (81)     putActor(VAR_EGO,2,60);
[0132] (91)     animateActor(VAR_EGO,248);
[0135] (2D)     putActorInRoom(11,143);
[0138] (01)     putActor(11,5,60);
[013C] (11)     animateActor(11,248);
[013F] (D3)     ActorOps(VAR_EGO,[Costume(Var[172])]);
[0143] (29)     setOwnerOf(77,0);
[0147] (29)     setOwnerOf(77,15);
[014B] (72)     loadRoom(143);
[014D] (0C)     unlockCostume(1)
[0150] (1E)     walkActorTo(11,22,60);
[0154] (1E)     walkActorTo(1,18,60);
[0158] (2E)     delay(120);
[015C] (3B)     waitForActor(11);
[015E] (11)     animateActor(11,244);
[0161] (3B)     waitForActor(11);
[0163] (14)     print(11,"Hope you had a nice ride!");
[017A] (AE)     waitForMessage();
[017B] (36)     walkActorToObject(11,190);
[017F] (3B)     waitForActor(11);
[0181] (2D)     putActorInRoom(11,0);
[0184] (**)   }
[0184] (**) }
[0184] (0C) unlockCostume(11)
[0187] (C0) endCutscene();
[0188] (9A) Var[199] = Var[235];
[018B] (A8) if (Var[118]) {
[018F] (28)   if (!Var[233]) {
[0193] (31)     VAR_RESULT = getBitVar(1571,0);
[0198] (28)     if (!VAR_RESULT) {
[019C] (40)       cutscene();
[019D] (2D)       putActorInRoom(1,1);
[01A0] (01)       putActor(1,20,60);
[01A4] (52)       actorFollowCamera(1);
[01A6] (0C)       loadSound(89)
[01A9] (11)       animateActor(1,250);
[01AC] (2E)       delay(120);
[01B0] (1C)       startSound(89);
[01B2] (D3)       ActorOps(VAR_EGO,[Costume(Var[172])]);
[01B6] (42)       startScript(5);
[01B8] (0C)       unlockCostume(1)
[01BB] (C0)       endCutscene();
[01BC] (18)     } else {
[01BF] (42)       startScript(50);
[01C1] (**)     }
[01C1] (**)   }
[01C1] (**) }
[01C1] (9A) Var[233] = Var[234];
[01C4] (A0) stopObjectCode();
END

// Script 65
[0000] (80) breakHere();
[0001] (A8) if (Var[200]) {
[0005] (B4)   VAR_RESULT = getDist(Var[200],424);
[000A] (A8)   if (VAR_RESULT) {
[000E] (47)     clearState08(424);
[0011] (9A)     Var[200] = Var[234];
[0014] (18)     goto 002A;
[0017] (**)   }
[0017] (**) }
[0017] (A8) if (Var[201]) {
[001B] (B4)   VAR_RESULT = getDist(Var[201],425);
[0020] (A8)   if (VAR_RESULT) {
[0024] (47)     clearState08(425);
[0027] (9A)     Var[201] = Var[234];
[002A] (1C)     startSound(27);
[002C] (6F)     if (getState04(433)) {
[0031] (67)       clearState04(433);
[0034] (19)       doSentence(254,433,0,1);
[003B] (3C)       stopSound(98);
[003D] (47)       clearState08(433);
[0040] (47)       clearState08(435);
[0043] (**)     }
[0043] (**)   }
[0043] (**) }
[0043] (4F) if (getState08(424)) {
[0048] (4F)   if (getState08(425)) {
[004D] (0F)     if (!getState08(427)) {
[0052] (0F)       if (!getState08(428)) {
[0057] (0F)         if (!getState08(429)) {
[005C] (0F)           if (!getState08(430)) {
[0061] (0F)             if (!getState08(431)) {
[0066] (12)               panCameraTo(24);
[0068] (80)               breakHere();
[0069] (48)               unless (VAR_CAMERA_POS_X == 24) goto 0068;
[006F] (4A)               chainScript(66);
[0071] (**)             }
[0071] (**)           }
[0071] (**)         }
[0071] (**)       }
[0071] (**)     }
[0071] (2F)     if (!getState04(433)) {
[0076] (27)       setState04(433);
[0079] (19)       doSentence(250,433,0,1);
[0080] (1C)       startSound(98);
[0082] (**)     }
[0082] (**)   }
[0082] (**) }
[0082] (18) goto 0000;
[0085] (A0) stopObjectCode();
END

// Script 66
[0000] (60) cursorCommand(15, 2);
[0003] (1A) Var[66] = 14;
[0007] (90) VAR_RESULT = getObjectOwner(Var[66]);
[000A] (08) if (VAR_RESULT != 15) {
[0010] (A9)   setOwnerOf(Var[66],0);
[0013] (**) }
[0013] (46) Var[66]++;
[0015] (44) unless (Var[66] > 83) goto 0007;
[001B] (0C) unlockCostume(37)
[001E] (0C) unlockCostume(39)
[0021] (8C) lockCostume(Var[172])
[0024] (0C) lockCostume(2)
[0027] (0C) unlockScript(2)
[002A] (0C) unlockScript(3)
[002D] (0C) unlockScript(4)
[0030] (0C) unlockScript(10)
[0033] (0C) unlockScript(11)
[0036] (0C) unlockScript(20)
[0039] (62) stopScript(9);
[003B] (62) stopScript(84);
[003D] (62) stopScript(77);
[003F] (0C) unlockSound(10)
[0042] (0C) unlockSound(11)
[0045] (0C) unlockSound(84)
[0048] (0C) unlockSound(89)
[004B] (0C) unlockSound(27)
[004E] (0C) unlockSound(29)
[0051] (0C) unlockSound(78)
[0054] (0C) unlockSound(19)
[0057] (0C) unlockSound(38)
[005A] (0C) unlockSound(44)
[005D] (0C) unlockSound(25)
[0060] (0C) unlockSound(2)
[0063] (0C) unlockScript(59)
[0066] (0C) unlockScript(19)
[0069] (0C) unlockUnkResType0(0)
[006C] (0C) loadSound(99)
[006F] (0C) lockSound(99)
[0072] (0C) loadSound(100)
[0075] (0C) lockSound(100)
[0078] (0C) loadSound(101)
[007B] (0C) lockSound(101)
[007E] (0C) loadRoom(51)
[0081] (0C) loadRoom(57)
[0084] (0C) loadRoom(16)
[0087] (0C) loadSound(83)
[008A] (0C) lockSound(83)
[008D] (0C) loadCostume(28)
[0090] (0C) lockCostume(28)
[0093] (19) doSentence(250,433,0,1);
[009A] (1C) startSound(99);
[009C] (2E) delay(480);
[00A0] (44) if (VAR_MACHINE_SPEED > 40) {
[00A6] (9A)   Var[44] = Var[234];
[00A9] (33)   RoomColor(15,7)
[00AD] (33)   RoomColor(7,8)
[00B1] (33)   RoomColor(7,0)
[00B5] (33)   RoomColor(12,4)
[00B9] (33)   RoomColor(15,12)
[00BD] (33)   RoomColor(14,6)
[00C1] (33)   RoomColor(15,14)
[00C5] (33)   RoomColor(11,3)
[00C9] (33)   RoomColor(15,11)
[00CD] (33)   RoomColor(13,5)
[00D1] (33)   RoomColor(15,13)
[00D5] (33)   RoomColor(10,2)
[00D9] (33)   RoomColor(15,10)
[00DD] (33)   RoomColor(9,1)
[00E1] (33)   RoomColor(15,9)
[00E5] (80)   breakHere();
[00E6] (33)   RoomColor(8,7)
[00EA] (33)   RoomColor(0,8)
[00EE] (33)   RoomColor(0,0)
[00F2] (33)   RoomColor(0,4)
[00F6] (33)   RoomColor(4,12)
[00FA] (33)   RoomColor(0,6)
[00FE] (33)   RoomColor(6,14)
[0102] (33)   RoomColor(0,3)
[0106] (33)   RoomColor(3,11)
[010A] (33)   RoomColor(0,5)
[010E] (33)   RoomColor(5,13)
[0112] (33)   RoomColor(0,2)
[0116] (33)   RoomColor(2,10)
[011A] (33)   RoomColor(0,1)
[011E] (33)   RoomColor(1,9)
[0122] (80)   breakHere();
[0123] (46)   Var[44]++;
[0125] (C4)   unless (Var[44] > Var[235]) goto 00A9;
[012A] (33)   RoomColor(7,7)
[012E] (33)   RoomColor(8,8)
[0132] (33)   RoomColor(0,0)
[0136] (33)   RoomColor(4,4)
[013A] (33)   RoomColor(12,12)
[013E] (33)   RoomColor(6,6)
[0142] (33)   RoomColor(14,14)
[0146] (33)   RoomColor(3,3)
[014A] (33)   RoomColor(11,11)
[014E] (33)   RoomColor(5,5)
[0152] (33)   RoomColor(13,13)
[0156] (33)   RoomColor(2,2)
[015A] (33)   RoomColor(10,10)
[015E] (33)   RoomColor(1,1)
[0162] (33)   RoomColor(9,9)
[0166] (**) }
[0166] (47) clearState08(432);
[0169] (1C) startSound(100);
[016B] (2E) delay(240);
[016F] (72) loadRoom(57);
[0171] (2E) delay(120);
[0175] (1C) startSound(100);
[0177] (05) drawObject(762,255,255);
[017C] (80) breakHere();
[017D] (05) drawObject(763,255,255);
[0182] (80) breakHere();
[0183] (05) drawObject(764,255,255);
[0188] (80) breakHere();
[0189] (05) drawObject(765,255,255);
[018E] (2E) delay(120);
[0192] (72) loadRoom(51);
[0194] (32) setCameraAt(60);
[0196] (2E) delay(30);
[019A] (1C) startSound(100);
[019C] (05) drawObject(709,255,255);
[01A1] (2E) delay(20);
[01A5] (05) drawObject(710,255,255);
[01AA] (2E) delay(20);
[01AE] (05) drawObject(711,255,255);
[01B3] (2E) delay(20);
[01B7] (05) drawObject(771,255,255);
[01BC] (2E) delay(20);
[01C0] (05) drawObject(772,255,255);
[01C5] (2E) delay(120);
[01C9] (3C) stopSound(100);
[01CB] (47) clearState08(332);
[01CE] (72) loadRoom(16);
[01D0] (19) doSentence(253,341,0,1);
[01D7] (01) putActor(7,59,50);
[01DB] (01) putActor(12,40,50);
[01DF] (11) animateActor(12,249);
[01E2] (32) setCameraAt(58);
[01E4] (80) breakHere();
[01E5] (1E) walkActorTo(12,54,50);
[01E9] (2E) delay(60);
[01ED] (14) print(12,"HEY! WHAT'S HAPPENING?");
[0204] (AE) waitForMessage();
[0205] (2E) delay(30);
[0209] (11) animateActor(7,244);
[020C] (14) print(7,"SOMETHING'S VERY, VERY WRONG!");
[0229] (AE) waitForMessage();
[022A] (11) animateActor(7,247);
[022D] (11) animateActor(12,247);
[0230] (2E) delay(120);
[0234] (3C) stopSound(83);
[0236] (19) doSentence(254,342,0,1);
[023D] (19) doSentence(254,339,0,1);
[0244] (2E) delay(30);
[0248] (11) animateActor(7,244);
[024B] (11) animateActor(12,245);
[024E] (14) print(12,"SEE YA^");
[0257] (2E) delay(30);
[025B] (1C) startSound(101);
[025D] (07) setState08(344);
[0260] (2E) delay(30);
[0264] (11) animateActor(7,246);
[0267] (11) animateActor(12,246);
[026A] (80) breakHere();
[026B] (78) if (VAR_MACHINE_SPEED < 40) {
[0271] (18) } else {
[0274] (01)   putActor(7,63,58);
[0278] (01)   putActor(12,52,58);
[027C] (80)   breakHere();
[027D] (01)   putActor(7,69,63);
[0281] (01)   putActor(12,44,63);
[0285] (80)   breakHere();
[0286] (**) }
[0286] (2D) putActorInRoom(7,0);
[0289] (2D) putActorInRoom(12,0);
[028C] (80) breakHere();
[028D] (80) breakHere();
[028E] (05) drawObject(345,255,255);
[0293] (2E) delay(180);
[0297] (72) loadRoom(0);
[0299] (4A) chainScript(149);
[029B] (A0) stopObjectCode();
END

// Script 67
[0000] (68) VAR_RESULT = isScriptRunning(82);
[0003] (A8) if (VAR_RESULT) {
[0007] (62)   stopScript(0);
[0009] (**) }
[0009] (68) VAR_RESULT = isScriptRunning(124);
[000C] (A8) if (VAR_RESULT) {
[0010] (18) } else {
[0013] (68)   VAR_RESULT = isScriptRunning(112);
[0016] (A8)   unless (VAR_RESULT) goto 0042;
[001A] (**) }
[001A] (48) if (VAR_ROOM == 17) {
[0020] (D8)   printEgo("Not now! The policeman might get me!");
[0040] (62)   stopScript(0);
[0042] (**) }
[0042] (48) if (VAR_ROOM == 16) {
[0048] (48) } else if (VAR_ROOM == 19) {
[0051] (18) } else {
[0054] (48)   if (VAR_ROOM == 220) {
[005A] (D8)     printEgo("Not with a monster in here!");
[0072] (62)     stopScript(0);
[0074] (**)   }
[0074] (08)   if (VAR_ROOM_RESOURCE != 40) {
[007A] (08)     if (VAR_ROOM != 11) {
[0080] (08)       if (VAR_ROOM != 10) {
[0086] (18)         goto 00CE;
[0089] (**)       }
[0089] (**)     }
[0089] (**)   }
[0089] (6F)   if (getState04(55)) {
[008E] (D8)     printEgo("It won't work, I'm not on Mother Earth.");
[00B0] (18)     goto 00CC;
[00B3] (**)   }
[00B3] (**) }
[00B3] (2E) delay(120);
[00B7] (D8) printEgo("Nothing's happening.");
[00CC] (62) stopScript(0);
[00CE] (9A) Var[247] = Var[234];
[00D1] (6F) if (getState04(55)) {
[00D6] (48)   if (VAR_ACTIVE_OBJECT2 == 14) {
[00DC] (88)     if (Var[138] != Var[234]) {
[00E1] (18)       goto 0165;
[00E4] (**)     }
[00E4] (48)     if (VAR_ROOM == 1) {
[00EA] (59)       doSentence(11,VAR_ACTIVE_OBJECT2,91,0);
[00F0] (D8)       printEgo("Oops! Better put her down.");
[0108] (4C)       waitForSentence();
[0109] (AE)       waitForMessage();
[010A] (18)       goto 018C;
[010D] (**)     }
[010D] (D8)     printEgo("First I'd better put her on my dresser.");
[012F] (62)     stopScript(0);
[0131] (**)   }
[0131] (48)   if (VAR_ACTIVE_OBJECT2 == 103) {
[0137] (C8)     if (Var[138] == Var[235]) {
[013C] (D8)       printEgo("I can't see her.");
[014B] (62)       stopScript(0);
[014D] (**)     }
[014D] (**)   }
[014D] (08)   if (VAR_ACTIVE_OBJECT2 != 630) {
[0153] (08)     if (VAR_ACTIVE_OBJECT2 != 504) {
[0159] (08)       if (VAR_ACTIVE_OBJECT2 != 352) {
[015F] (08)         if (VAR_ACTIVE_OBJECT2 != 285) {
[0165] (D8)           printEgo("It will only work with animals.");
[0181] (62)           stopScript(0);
[0183] (**)         }
[0183] (18)       } else {
[0186] (0C)         loadSound(18)
[0189] (0C)         lockSound(18)
[018C] (**)       }
[018C] (9A)       Var[247] = VAR_ACTIVE_OBJECT2;
[018F] (1A)       Var[66] = 0;
[0193] (FA)       VerbOps(Delete(Var[66]););
[0196] (46)       Var[66]++;
[0198] (44)       unless (Var[66] > 13) goto 0193;
[019E] (**)     }
[019E] (**)   }
[019E] (60)   cursorCommand(15, 2);
[01A1] (**) }
[01A1] (40) cutscene();
[01A2] (0C) loadScript(123)
[01A5] (0C) loadSound(21)
[01A8] (0C) lockSound(21)
[01AB] (1C) startSound(53);
[01AD] (2E) delay(120);
[01B1] (2F) if (!getState04(55)) {
[01B6] (58)   beginOverride();
[01B7] (18)   goto 0230;
[01BA] (D8)   printEgo("Oooh! I feel dizzy!");
[01CC] (**) }
[01CC] (42) startScript(123);
[01CE] (2E) delay(120);
[01D2] (08) if (VAR_ROOM != 31) {
[01D8] (48)   if (VAR_ROOM == 42) {
[01DE] (1E)     walkActorTo(1,18,52);
[01E2] (18)   } else {
[01E5] (43)     Var[66] = getActorX(1);
[01E8] (3A)     Var[66] -= 3;
[01EC] (23)     Var[67] = getActorY(1);
[01EF] (5A)     Var[67] += 10;
[01F3] (7E)     walkActorTo(1,Var[66],Var[67]);
[01F7] (**)   }
[01F7] (44)   if (Var[117] > 10) {
[01FD] (11)     animateActor(1,255);
[0200] (18)   } else {
[0203] (80)     breakHere();
[0204] (56)     VAR_RESULT = getActorMoving(1);
[0207] (48)     unless (VAR_RESULT == 0) goto 01F7;
[020D] (AE)     waitForMessage();
[020E] (**)   }
[020E] (62)   stopScript(123);
[0210] (11)   animateActor(1,246);
[0213] (3B)   waitForActor(1);
[0215] (1C)   startSound(21);
[0217] (11)   animateActor(1,32);
[021A] (80)   breakHere();
[021B] (1C)   startSound(21);
[021D] (11)   animateActor(1,36);
[0220] (1A)   Var[163] = 36;
[0224] (80)   breakHere();
[0225] (18) } else {
[0228] (AE)   waitForMessage();
[0229] (62)   stopScript(123);
[022B] (11)   animateActor(1,247);
[022E] (3B)   waitForActor(1);
[0230] (**) }
[0230] (0C) unlockSound(21)
[0233] (48) if (VAR_ROOM == 4) {
[0239] (03)   VAR_RESULT = getActorRoom(7);
[023C] (C8)   if (VAR_RESULT == VAR_ROOM) {
[0241] (9A)     Var[120] = Var[234];
[0244] (62)     stopScript(77);
[0246] (47)     clearState08(159);
[0249] (14)     print(7,"An artifact!");
[0257] (09)     faceActor(7,1);
[025A] (00)     stopObjectCode();
[025B] (9A)     Var[239] = VAR_ROOM;
[025E] (27)     setState04(344);
[0261] (AE)     waitForMessage();
[0262] (18)     goto 02B6;
[0265] (**)   }
[0265] (**) }
[0265] (42) startScript(97);
[0267] (2F) if (!getState04(55)) {
[026C] (A8)   if (VAR_OVERRIDE) {
[0270] (18)   } else {
[0273] (58)     beginOverride();
[0274] (18)     goto 027B;
[0277] (2E)     delay(1200);
[027B] (**)   }
[027B] (62)   stopScript(123);
[027D] (48)   if (VAR_ROOM == 31) {
[0283] (11)     animateActor(1,246);
[0286] (18)   } else {
[0289] (11)     animateActor(1,250);
[028C] (11)     animateActor(1,32);
[028F] (**)   }
[028F] (9A)   Var[163] = Var[234];
[0292] (42)   startScript(150);
[0294] (2E)   delay(60);
[0298] (14)   print(1,"What happened?");
[02A8] (AE)   waitForMessage();
[02A9] (11)   animateActor(1,6);
[02AC] (11)   animateActor(1,10);
[02AF] (11)   animateActor(1,16);
[02B2] (2E)   delay(60);
[02B6] (**) }
[02B6] (C0) endCutscene();
[02B7] (48) if (Var[239] == 4) {
[02BD] (03)   VAR_RESULT = getActorRoom(7);
[02C0] (48)   if (VAR_RESULT == 4) {
[02C6] (4A)     chainScript(98);
[02C8] (**)   }
[02C8] (**) }
[02C8] (2F) if (!getState04(344)) {
[02CD] (4A)   chainScript(96);
[02CF] (**) }
[02CF] (6F) if (getState04(55)) {
[02D4] (4A)   chainScript(49);
[02D6] (**) }
[02D6] (A0) stopObjectCode();
END

// Script 68
[0000] (80) breakHere();
[0001] (9A) Var[149] = VAR_ROOM;
[0004] (40) cutscene();
[0005] (1A) Var[122] = -1;
[0009] (72) loadRoom(48);
[000B] (08) if (Var[122] != -1) {
[0011] (9A)   Var[119] = Var[121];
[0014] (9A)   Var[120] = Var[122];
[0017] (**) }
[0017] (1A) Var[118] = 672;
[001B] (9A) Var[66] = Var[234];
[001E] (B1) VAR_RESULT = getBitVar(1904,Var[66]);
[0023] (A8) if (VAR_RESULT) {
[0027] (87)   setState08(Var[118]);
[0029] (18) } else {
[002C] (C7)   clearState08(Var[118]);
[002E] (**) }
[002E] (46) Var[118]++;
[0030] (46) Var[66]++;
[0032] (44) unless (Var[118] > 695) goto 001E;
[0038] (58) beginOverride();
[0039] (18) goto 0040;
[003C] (2E) delay(600);
[0040] (C0) endCutscene();
[0041] (A0) stopObjectCode();
END

// Script 69
[0000] (60) cursorCommand(255, 1);
[0003] (2E) delay(180);
[0007] (14) print(11,"I love the Triangle.");
[001B] (AE) waitForMessage();
[001C] (2E) delay(60);
[0020] (B1) VAR_RESULT = getBitVar(1510,VAR_EGO);
[0025] (28) if (!VAR_RESULT) {
[0029] (14)   print(11,"You never know what to expect.");
[0045] (AE)   waitForMessage();
[0046] (2E)   delay(60);
[004A] (10)   VAR_RESULT = getObjectOwner(77);
[004E] (C8)   if (VAR_RESULT == VAR_EGO) {
[0053] (14)     print(11,"That's why I gave you a chute.");
[006E] (18)   } else {
[0071] (14)     print(11,"Sorry, I'm out of chutes!");
[0089] (**)   }
[0089] (11)   animateActor(11,246);
[008C] (AE)   waitForMessage();
[008D] (11)   animateActor(11,245);
[0090] (18) } else {
[0093] (14)   print(11,"Looks like you love it too.");
[00AC] (10)   VAR_RESULT = getObjectOwner(77);
[00B0] (88)   if (VAR_RESULT != VAR_EGO) {
[00B5] (18)     goto 0045;
[00B8] (**)   }
[00B8] (**) }
[00B8] (AE) waitForMessage();
[00B9] (2E) delay(60);
[00BD] (11) animateActor(11,246);
[00C0] (14) print(11,"Hey, I got a good one for ya.");
[00D9] (AE) waitForMessage();
[00DA] (2E) delay(30);
[00DE] (11) animateActor(11,245);
[00E1] (16) Var[51] = getRandomNr(2);
[00E4] (C8) if (Var[51] == Var[234]) {
[00E9] (14)   print(11,"Y'know why this is called a biplane?");
[010A] (C8) } else if (Var[51] == Var[235]) {
[0112] (14)   print(11,"What do biplanes have in common with\x01drunks?");
[013B] (48) } else if (Var[51] == 2) {
[0144] (14)   print(11,"Heard about our basketball team for\x01small people?");
[0172] (18)   /* goto 0175; */
[0175] (**) }
[0175] (AE) waitForMessage();
[0176] (2E) delay(120);
[017A] (11) animateActor(11,246);
[017D] (C8) if (Var[51] == Var[234]) {
[0182] (14)   print(11,"Cuz ya never know if it's coming back!\x01\x02");
[01A6] (C8) } else if (Var[51] == Var[235]) {
[01AE] (14)   print(11,"They both have to be `propped up`!\x01\x02");
[01CF] (48) } else if (Var[51] == 2) {
[01D8] (14)   print(11,"They're called the `Bermuda Shorts`!\x01\x02");
[01FD] (18)   /* goto 0200; */
[0200] (**) }
[0200] (2E) delay(180);
[0204] (11) animateActor(11,245);
[0207] (14) print(11,"HA HA HA!");
[0211] (AE) waitForMessage();
[0212] (91) animateActor(VAR_EGO,246);
[0215] (2E) delay(30);
[0219] (91) animateActor(VAR_EGO,24);
[021C] (2E) delay(60);
[0220] (91) animateActor(VAR_EGO,16);
[0223] (2E) delay(30);
[0227] (91) animateActor(VAR_EGO,245);
[022A] (48) if (Var[233] == 2) {
[0230] (40)   cutscene();
[0231] (2E)   delay(60);
[0235] (14)   print(11,"Well, time to be heading back. Hope you\x01enjoyed the trip.");
[0268] (AE)   waitForMessage();
[0269] (2D)   putActorInRoom(2,143);
[026C] (01)   putActor(2,2,60);
[0270] (72)   loadRoom(143);
[0272] (1E)   walkActorTo(2,15,60);
[0276] (3B)   waitForActor(2);
[0278] (11)   animateActor(2,246);
[027B] (2E)   delay(60);
[027F] (14)   print(2,"That was fun.");
[028D] (AE)   waitForMessage();
[028E] (2E)   delay(60);
[0292] (5B)   setBitVar(1510,0,Var[234]);
[0297] (DB)   setBitVar(1510,Var[233],Var[235]);
[029C] (29)   setOwnerOf(77,0);
[02A0] (29)   setOwnerOf(77,15);
[02A4] (C0)   endCutscene();
[02A5] (60)   cursorCommand(1, 0);
[02A8] (9A)   Var[199] = Var[235];
[02AB] (62)   stopScript(0);
[02AD] (**) }
[02AD] (19) doSentence(250,599,0,1);
[02B4] (2E) delay(90);
[02B8] (14) print(11,"Uh oh. Not again!");
[02C9] (11) animateActor(11,246);
[02CC] (AE) waitForMessage();
[02CD] (11) animateActor(11,245);
[02D0] (2E) delay(360);
[02D4] (60) cursorCommand(247, 1);
[02D7] (40) cutscene();
[02D8] (58) beginOverride();
[02D9] (18) goto 03A2;
[02DC] (67) clearState04(602);
[02DF] (B1) VAR_RESULT = getBitVar(1510,VAR_EGO);
[02E4] (28) if (!VAR_RESULT) {
[02E8] (DB)   setBitVar(1510,VAR_EGO,Var[235]);
[02ED] (D8)   printEgo("Hey! What's happening? Everything's\x01fading. The water below is shimmering!");
[0331] (18) } else {
[0334] (D8)   printEgo("Here we go!");
[033F] (**) }
[033F] (9A) Var[118] = VAR_EGO;
[0342] (1A) VAR_EGO = 11;
[0346] (91) animateActor(Var[118],247);
[0349] (2E) delay(60);
[034D] (91) animateActor(Var[118],245);
[0350] (80) breakHere();
[0351] (91) animateActor(Var[118],246);
[0354] (2E) delay(60);
[0358] (28) unless (!VAR_HAVE_MSG) goto 0346;
[035C] (2D) putActorInRoom(12,132);
[035F] (01) putActor(12,0,18);
[0363] (3D) setActorElevation(12,0);
[0366] (11) animateActor(12,249);
[0369] (72) loadRoom(132);
[036B] (32) setCameraAt(20);
[036D] (19) doSentence(250,599,0,1);
[0374] (1E) walkActorTo(12,45,18);
[0378] (3B) waitForActor(12);
[037A] (2D) putActorInRoom(12,54);
[037D] (01) putActor(12,18,80);
[0381] (07) setState08(753);
[0384] (72) loadRoom(54);
[0386] (32) setCameraAt(20);
[0388] (2E) delay(120);
[038C] (9A) Var[119] = Var[234];
[038F] (7D) setActorElevation(12,Var[119]);
[0392] (80) breakHere();
[0393] (46) Var[119]++;
[0395] (44) unless (Var[119] > 50) goto 038F;
[039B] (47) clearState08(753);
[039E] (2E) delay(240);
[03A2] (48) if (VAR_ROOM == 10) {
[03A8] (72)   loadRoom(0);
[03AA] (62)   stopScript(64);
[03AC] (**) }
[03AC] (2D) putActorInRoom(12,0);
[03AF] (3D) setActorElevation(12,0);
[03B2] (47) clearState08(229);
[03B5] (17) clearState02(229);
[03B8] (47) clearState08(239);
[03BB] (47) clearState08(238);
[03BE] (17) clearState02(238);
[03C1] (72) loadRoom(10);
[03C3] (32) setCameraAt(20);
[03C5] (AD) putActorInRoom(Var[118],10);
[03C8] (81) putActor(Var[118],8,50);
[03CC] (91) animateActor(Var[118],249);
[03CF] (2D) putActorInRoom(11,10);
[03D2] (01) putActor(11,12,50);
[03D6] (42) startScript(5);
[03D8] (36) walkActorToObject(11,230);
[03DC] (2E) delay(120);
[03E0] (D8) printEgo("I HATE it when this happens!");
[03F9] (3B) waitForActor(11);
[03FB] (9E) walkActorTo(Var[118],25,52);
[03FF] (BB) waitForActor(Var[118]);
[0401] (91) animateActor(Var[118],247);
[0404] (AE) waitForMessage();
[0405] (2E) delay(60);
[0409] (11) animateActor(11,246);
[040C] (3B) waitForActor(11);
[040E] (D8) printEgo("Now, what was the combination?");
[042A] (AE) waitForMessage();
[042B] (2E) delay(60);
[042F] (D8) printEgo("Oh yeah.");
[0438] (AE) waitForMessage();
[0439] (1A) Var[117] = 0;
[043D] (9A) Var[14] = Var[117];
[0440] (5A) Var[14] += 113;
[0444] (59) doSentence(9,Var[14],0,0);
[044A] (4C) waitForSentence();
[044B] (80) breakHere();
[044C] (28) unless (!Var[50]) goto 044B;
[0450] (2E) delay(30);
[0454] (46) Var[117]++;
[0456] (44) unless (Var[117] > 3) goto 043D;
[045C] (1E) walkActorTo(11,0,53);
[0460] (D8) printEgo("You coming or staying?");
[0475] (9A) Var[233] = Var[234];
[0478] (80) breakHere();
[0479] (43) VAR_RESULT = getActorX(11);
[047C] (78) unless (VAR_RESULT < 22) goto 0478;
[0482] (91) animateActor(Var[118],244);
[0485] (2E) delay(60);
[0489] (AE) waitForMessage();
[048A] (91) animateActor(Var[118],246);
[048D] (9A) VAR_EGO = Var[118];
[0490] (C0) endCutscene();
[0491] (3B) waitForActor(11);
[0493] (43) VAR_RESULT = getActorX(11);
[0496] (A8) if (VAR_RESULT) {
[049A] (1E)   walkActorTo(11,0,53);
[049E] (18)   goto 0491;
[04A1] (**) }
[04A1] (1A) Var[117] = 12;
[04A5] (7D) setActorElevation(11,Var[117]);
[04A8] (80) breakHere();
[04A9] (46) Var[117]++;
[04AB] (44) unless (Var[117] > 17) goto 04A5;
[04B1] (11) animateActor(11,250);
[04B4] (A0) stopObjectCode();
END

// Script 70
[0000] (AE) waitForMessage();
[0001] (40) cutscene();
[0002] (BB) waitForActor(VAR_EGO);
[0004] (10) Var[120] = getObjectOwner(44);
[0008] (A8) if (Var[120]) {
[000C] (5B)   setBitVar(1559,8,Var[235]);
[0011] (14)   print(10,"A Golden Boar Sand Wedge! Just what I\x01needed for my set!");
[0042] (29)   setOwnerOf(44,0);
[0046] (AE)   waitForMessage();
[0047] (7D)   setActorElevation(10,Var[234]);
[004A] (36)   walkActorToObject(10,586);
[004E] (3B)   waitForActor(10);
[0050] (2E)   delay(60);
[0054] (18) } else {
[0057] (1C)   startSound(84);
[0059] (2E)   delay(120);
[005D] (14)   print(10,"Thanks!");
[0067] (AE)   waitForMessage();
[0068] (7D)   setActorElevation(10,Var[234]);
[006B] (**) }
[006B] (49) faceActor(10,VAR_EGO);
[006E] (3B) waitForActor(10);
[0070] (14) print(10,"Come, my friend.");
[0081] (AE) waitForMessage();
[0082] (1A) Var[119] = 1;
[0086] (C8) if (VAR_EGO == Var[119]) {
[008B] (1A)   Var[119] = 2;
[008F] (**) }
[008F] (83) VAR_RESULT = getActorRoom(Var[119]);
[0092] (48) if (VAR_RESULT == 150) {
[0098] (AD)   putActorInRoom(Var[119],151);
[009B] (81)   putActor(Var[119],117,52);
[009F] (42)   startScript(5);
[00A1] (CD)   walkActorToActor(Var[119],VAR_EGO,4);
[00A5] (BB)   waitForActor(Var[119]);
[00A7] (C9)   faceActor(Var[119],VAR_EGO);
[00AA] (C9)   faceActor(VAR_EGO,Var[119]);
[00AD] (BB)   waitForActor(Var[119]);
[00AF] (94)   print(Var[119],"What's taking you so long?");
[00C8] (AE)   waitForMessage();
[00C9] (**) }
[00C9] (83) VAR_RESULT = getActorRoom(Var[119]);
[00CC] (C8) if (VAR_RESULT == VAR_ROOM) {
[00D1] (4D)   walkActorToActor(10,Var[119],4);
[00D5] (3B)   waitForActor(10);
[00D7] (49)   faceActor(10,Var[119]);
[00DA] (89)   faceActor(Var[119],10);
[00DD] (00)   stopObjectCode();
[00DE] (3B)   waitForActor(10);
[00E0] (14)   print(10,"Sorry, my friend, but only one outsider\x01may witness this.");
[0114] (AE)   waitForMessage();
[0115] (18) } else {
[0118] (9A)   Var[119] = Var[234];
[011B] (**) }
[011B] (36) walkActorToObject(10,579);
[011F] (B6) walkActorToObject(VAR_EGO,579);
[0123] (3B) waitForActor(10);
[0125] (AD) putActorInRoom(VAR_EGO,150);
[0128] (81) putActor(VAR_EGO,8,56);
[012C] (2D) putActorInRoom(10,150);
[012F] (01) putActor(10,12,56);
[0133] (2D) putActorInRoom(11,150);
[0136] (01) putActor(11,26,43);
[013A] (2D) putActorInRoom(12,150);
[013D] (01) putActor(12,22,43);
[0141] (3D) setActorElevation(12,0);
[0144] (11) animateActor(11,250);
[0147] (11) animateActor(12,250);
[014A] (52) actorFollowCamera(10);
[014C] (11) animateActor(10,24);
[014F] (0C) loadSound(90)
[0152] (0C) lockSound(90)
[0155] (0C) loadSound(91)
[0158] (0C) lockSound(91)
[015B] (0C) loadSound(92)
[015E] (0C) lockSound(92)
[0161] (1E) walkActorTo(10,26,60);
[0165] (9E) walkActorTo(VAR_EGO,20,60);
[0169] (3B) waitForActor(10);
[016B] (A8) if (Var[120]) {
[016F] (11)   animateActor(10,244);
[0172] (3B)   waitForActor(10);
[0174] (14)   print(10,"We will perform the sacred dance taught\x01to us by the Ancient Ones.\x03Watch carefully. It is said to `unlock\x01the door to the head.`");
[01E2] (18) } else {
[01E5] (1E)   walkActorTo(10,26,63);
[01E9] (3B)   waitForActor(10);
[01EB] (11)   animateActor(10,246);
[01EE] (3B)   waitForActor(10);
[01F0] (14)   print(10,"This time, watch more carefully!");
[020F] (**) }
[020F] (AE) waitForMessage();
[0210] (12) panCameraTo(32);
[0212] (80) breakHere();
[0213] (48) unless (VAR_CAMERA_POS_X == 32) goto 0212;
[0219] (19) doSentence(253,582,0,1);
[0220] (1A) Var[117] = 2;
[0224] (1E) walkActorTo(10,26,55);
[0228] (3B) waitForActor(10);
[022A] (1E) walkActorTo(10,32,50);
[022E] (3B) waitForActor(10);
[0230] (28) if (!Var[117]) {
[0234] (18) } else {
[0237] (1E)   walkActorTo(10,38,55);
[023B] (3B)   waitForActor(10);
[023D] (1E)   walkActorTo(10,32,59);
[0241] (3B)   waitForActor(10);
[0243] (C6)   Var[117]--;
[0245] (F8)   unless (Var[117] < Var[234]) goto 0224;
[024A] (**) }
[024A] (19) doSentence(254,582,0,1);
[0251] (36) walkActorToObject(10,582);
[0255] (1E) walkActorTo(11,38,48);
[0259] (1E) walkActorTo(12,41,45);
[025D] (3B) waitForActor(12);
[025F] (1A) Var[117] = 10;
[0263] (91) animateActor(Var[117],246);
[0266] (BB) waitForActor(Var[117]);
[0268] (46) Var[117]++;
[026A] (44) unless (Var[117] > 12) goto 0263;
[0270] (3C) stopSound(85);
[0272] (2E) delay(120);
[0276] (1C) startSound(89);
[0278] (19) doSentence(250,583,0,1);
[027F] (2E) delay(60);
[0283] (1E) walkActorTo(10,35,51);
[0287] (3B) waitForActor(10);
[0289] (11) animateActor(10,246);
[028C] (2E) delay(120);
[0290] (9A) Var[117] = Var[234];
[0293] (9A) Var[14] = Var[117];
[0296] (5A) Var[14] += 131;
[029A] (9A) Var[118] = Var[14];
[029D] (3A) Var[118] -= 521;
[02A1] (91) animateActor(Var[118],32);
[02A4] (5A) Var[118] += 80;
[02A8] (9C) startSound(Var[118]);
[02AA] (2E) delay(120);
[02AE] (46) Var[117]++;
[02B0] (44) unless (Var[117] > 5) goto 0293;
[02B6] (2E) delay(120);
[02BA] (1C) startSound(85);
[02BC] (52) actorFollowCamera(10);
[02BE] (1E) walkActorTo(11,7,43);
[02C2] (1E) walkActorTo(12,7,43);
[02C6] (14) print(10,"Don't forget what you have seen!");
[02E4] (A8) if (Var[120]) {
[02E8] (AE)   waitForMessage();
[02E9] (14)   print(10,"Next time it will cost you!");
[0302] (**) }
[0302] (36) walkActorToObject(10,578);
[0306] (3B) waitForActor(10);
[0308] (AE) waitForMessage();
[0309] (49) faceActor(10,VAR_EGO);
[030C] (3B) waitForActor(10);
[030E] (48) if (VAR_EGO == 1) {
[0314] (14)   print(10,"And come back with the Yellow Crystal!");
[0337] (18) } else {
[033A] (14)   print(10,"Tell your friend to bring me the\x01Yellow Crystal!");
[0366] (**) }
[0366] (2E) delay(60);
[036A] (89) faceActor(VAR_EGO,10);
[036D] (00) stopObjectCode();
[036E] (AE) waitForMessage();
[036F] (11) animateActor(10,247);
[0372] (80) breakHere();
[0373] (2D) putActorInRoom(10,0);
[0376] (3B) waitForActor(12);
[0378] (2D) putActorInRoom(11,0);
[037B] (2D) putActorInRoom(12,0);
[037E] (0C) unlockSound(90)
[0381] (0C) unlockSound(91)
[0384] (0C) unlockSound(92)
[0387] (A8) if (Var[119]) {
[038B] (2E)   delay(60);
[038F] (AD)   putActorInRoom(Var[119],150);
[0392] (8E)   putActorAtObject(Var[119],578);
[0396] (42)   startScript(5);
[0398] (CD)   walkActorToActor(Var[119],VAR_EGO,4);
[039C] (94)   print(Var[119],"Not fair!");
[03A7] (**) }
[03A7] (D2) actorFollowCamera(VAR_EGO);
[03A9] (C0) endCutscene();
[03AA] (A0) stopObjectCode();
END

// Script 71: Check Oxygen Level
[0000] (D8) printEgo("It reads \x02");
[000A] (26) setVarRange(Var[117],3,[0,0,0]);
[0010] (38) if (Var[66] >= 240) {
[0016] (9A)   Var[66] = Var[234];
[0019] (46)   Var[118]++;
[001B] (D8)   printEgo("\x04\x76 hour\x02");
[0025] (46)   Var[119]++;
[0027] (38)   if (Var[66] >= 4) {
[002D] (D8)     printEgo(" and \x02");
[0034] (**)   }
[0034] (**) }
[0034] (38) if (Var[66] >= 4) {
[003A] (3A)   Var[66] -= 4;
[003E] (46)   Var[117]++;
[0040] (78)   unless (Var[66] < 4) goto 003A;
[0046] (D8)   printEgo("\x04\x75 minute\x02");
[0052] (46)   Var[119]++;
[0054] (44)   if (Var[117] > 1) {
[005A] (D8)     printEgo("s\x02");
[005E] (**)   }
[005E] (**) }
[005E] (48) if (Var[119] == 0) {
[0064] (D8)   printEgo("no \x02");
[0069] (48) } else if (Var[119] == 1) {
[0072] (D8)   printEgo(" of \x02");
[0078] (18) } else {
[007B] (D8)   printEgo(" of\x01\x02");
[0082] (**) }
[0082] (D8) printEgo("oxygen left.");
[008F] (A0) stopObjectCode();
END

// Script 72
[0000] (40) cutscene();
[0001] (9A) Var[50] = Var[235];
[0004] (1E) walkActorTo(10,49,47);
[0008] (3B) waitForActor(10);
[000A] (11) animateActor(10,246);
[000D] (11) animateActor(1,247);
[0010] (31) VAR_RESULT = getBitVar(1458,0);
[0015] (A8) if (VAR_RESULT) {
[0019] (46)   Var[232]++;
[001B] (44)   if (Var[232] > 4) {
[0021] (14)     print(10,"Friend, ya won the big one a few too\x01many times. Now, I'm not accusin' ya^\x03I'll pay up this last time, but I ain't\x01sellin' ya another ticket.");
[0098] (18)     goto 0143;
[009B] (**)   }
[009B] (67)   clearState04(237);
[009E] (9A)   Var[66] = Var[234];
[00A1] (16)   Var[67] = getRandomNr(9);
[00A4] (9A)   Var[14] = Var[66];
[00A7] (5A)   Var[14] += 212;
[00AB] (8A)   Var[Var[14]] = Var[67];
[00AE] (46)   Var[66]++;
[00B0] (44)   unless (Var[66] > 3) goto 00A1;
[00B6] (1A)   Var[54] = 10000;
[00BA] (14)   print(10,"Congratulations lucky fella! Ya won the\x01big lotto prize! 10,000 Smackeroos!");
[00FF] (18) } else {
[0102] (16)   Var[66] = getRandomNr(9);
[0105] (48)   unless (Var[66] == 7) goto 01F1;
[010B] (16)   Var[66] = getRandomNr(99);
[010E] (DA)   Var[66] += Var[235];
[0111] (9A)   Var[54] = Var[234];
[0114] (9A)   Var[67] = Var[234];
[0117] (5A)   Var[54] += 10;
[011B] (46)   Var[67]++;
[011D] (C4)   unless (Var[67] > Var[66]) goto 0117;
[0122] (14)   print(10,"Hey bud, yer lotto ticket won ya $\x04\x36!");
[0143] (**) }
[0143] (DA) Var[62] += Var[54];
[0146] (58) beginOverride();
[0147] (18) goto 0248;
[014A] (AE) waitForMessage();
[014B] (1E) walkActorTo(10,16,47);
[014F] (14) print(10,"C'mere, I'll give ya yer winnin's.");
[016F] (80) breakHere();
[0170] (80) breakHere();
[0171] (36) walkActorToObject(1,182);
[0175] (3B) waitForActor(10);
[0177] (11) animateActor(10,250);
[017A] (3B) waitForActor(1);
[017C] (AE) waitForMessage();
[017D] (14) print(10,"Gimme that ticket and yer CashCard.");
[019E] (AE) waitForMessage();
[019F] (11) animateActor(10,247);
[01A2] (2E) delay(60);
[01A6] (1C) startSound(84);
[01A8] (2E) delay(120);
[01AC] (11) animateActor(10,246);
[01AF] (3B) waitForActor(10);
[01B1] (78) if (Var[232] < 5) {
[01B7] (14)   print(10,"Ya sure are one lucky guy!");
[01CF] (18) } else {
[01D2] (14)   print(10,"So tell me, what's yer secret?");
[01EE] (**) }
[01EE] (18) goto 0248;
[01F1] (14) print(10,"Sorry bud, but yer lotto tick's a dud.\x01Give it here and I'll toss it for ya.");
[0231] (58) beginOverride();
[0232] (18) goto 0248;
[0235] (2E) delay(120);
[0239] (43) Var[51] = getActorX(10);
[023C] (46) Var[51]++;
[023E] (5E) walkActorTo(1,Var[51],49);
[0242] (3B) waitForActor(1);
[0244] (11) animateActor(1,247);
[0247] (AE) waitForMessage();
[0248] (A8) if (VAR_OVERRIDE) {
[024C] (11)   animateActor(10,255);
[024F] (11)   animateActor(10,250);
[0252] (**) }
[0252] (29) setOwnerOf(42,0);
[0256] (29) setOwnerOf(42,15);
[025A] (C0) endCutscene();
[025B] (A0) stopObjectCode();
END

// Script 73
[0000] (5B) setBitVar(1455,0,Var[234]);
[0005] (2E) delay(14400);
[0009] (5B) setBitVar(1455,0,Var[235]);
[000E] (A0) stopObjectCode();
END

// Script 74: Pay Phone Bill
[0000] (40) cutscene();
[0001] (B6) walkActorToObject(VAR_EGO,158);
[0005] (36) walkActorToObject(7,152);
[0009] (19) doSentence(253,151,0,1);
[0010] (A8) if (Var[66]) {
[0014] (14)   print(7,"No charge for Brothers!");
[002B] (18) } else {
[002E] (1A)   Var[46] = 1138;
[0032] (14)   print(7,"You owe $\x04\x2E. You calling Mars or\x01something?\x03CashCard please.");
[006A] (AE)   waitForMessage();
[006B] (48)   if (VAR_EGO == 1) {
[0071] (10)     VAR_RESULT = getObjectOwner(18);
[0075] (08)     if (VAR_RESULT != 1) {
[007B] (18)       goto 008B;
[007E] (**)     }
[007E] (18)   } else {
[0081] (10)     VAR_RESULT = getObjectOwner(32);
[0085] (08)     if (VAR_RESULT != 2) {
[008B] (D8)       printEgo("I don't have it here.");
[009E] (AE)       waitForMessage();
[009F] (14)       print(7,"How silly of you. Here's your bill.");
[00BF] (18)       goto 01A3;
[00C2] (**)     }
[00C2] (**)   }
[00C2] (1C)   startSound(66);
[00C4] (A8)   if (Var[194]) {
[00C8] (14)     print(7,"Tsk tsk! Scribbling on your phone bill!\x03An extra $10 charge for defacing phone\x01company property!");
[011E] (AE)     waitForMessage();
[011F] (5A)     Var[46] += 10;
[0123] (9A)     Var[194] = Var[234];
[0126] (**)   }
[0126] (2E)   delay(240);
[012A] (3C)   stopSound(66);
[012C] (80)   breakHere();
[012D] (1C)   startSound(84);
[012F] (80)   breakHere();
[0130] (7C)   VAR_RESULT = isSoundRunning(84);
[0133] (28)   unless (!VAR_RESULT) goto 012F;
[0137] (9A)   Var[14] = VAR_EGO;
[013A] (5A)   Var[14] += 61;
[013E] (F8)   if (Var[14] < Var[46]) {
[0143] (14)     print(7,"You don't have enough money!");
[015E] (18)     goto 009E;
[0161] (**)   }
[0161] (9A)   Var[14] = VAR_EGO;
[0164] (5A)   Var[14] += 61;
[0168] (EA)   Var[Var[14]] -= Var[46];
[016B] (14)   print(7,"Next time be prompt with your payment!");
[018E] (**) }
[018E] (29) setOwnerOf(15,0);
[0192] (27) setState04(152);
[0195] (67) clearState04(87);
[0198] (42) startScript(134);
[019A] (1E) walkActorTo(7,22,52);
[019E] (3B) waitForActor(7);
[01A0] (11) animateActor(7,246);
[01A3] (C0) endCutscene();
[01A4] (A0) stopObjectCode();
END

// Script 75
[0000] (68) VAR_RESULT = isScriptRunning(67);
[0003] (A8) if (VAR_RESULT) {
[0007] (80)   breakHere();
[0008] (18)   goto 0000;
[000B] (**) }
[000B] (28) if (!Var[238]) {
[000F] (62)   stopScript(0);
[0011] (**) }
[0011] (44) if (Var[238] > 2) {
[0017] (62)   stopScript(0);
[0019] (**) }
[0019] (19) doSentence(254,155,0,1);
[0020] (40) cutscene();
[0021] (0C) loadScript(142)
[0024] (0C) loadScript(143)
[0027] (9A) Var[119] = Var[234];
[002A] (42) startScript(141);
[002C] (80) breakHere();
[002D] (68) VAR_RESULT = isScriptRunning(141);
[0030] (28) unless (!VAR_RESULT) goto 002C;
[0034] (A8) if (Var[119]) {
[0038] (18) } else {
[003B] (67)   clearState04(330);
[003E] (58)   beginOverride();
[003F] (18)   goto 0056;
[0042] (42)   startScript(142);
[0044] (80)   breakHere();
[0045] (68)   VAR_RESULT = isScriptRunning(142);
[0048] (28)   unless (!VAR_RESULT) goto 0044;
[004C] (**) }
[004C] (42) startScript(143);
[004E] (80) breakHere();
[004F] (68) VAR_RESULT = isScriptRunning(143);
[0052] (28) unless (!VAR_RESULT) goto 004E;
[0056] (A8) if (VAR_OVERRIDE) {
[005A] (62)   stopScript(143);
[005C] (62)   stopScript(142);
[005E] (DB)   setBitVar(1464,Var[117],Var[234]);
[0063] (AD)   putActorInRoom(Var[117],16);
[0066] (81)   putActor(Var[117],81,44);
[006A] (91)   animateActor(Var[117],250);
[006D] (72)   loadRoom(16);
[006F] (19)   doSentence(STOP);
[0071] (19)   doSentence(253,344,0,1);
[0078] (A8)   if (Var[66]) {
[007C] (81)     putActor(Var[66],45,52);
[0080] (91)     animateActor(Var[66],248);
[0083] (**)   }
[0083] (42)   startScript(5);
[0085] (2D)   putActorInRoom(7,4);
[0088] (01)   putActor(7,22,52);
[008C] (19)   doSentence(4,331,0,1);
[0093] (19)   doSentence(2,328,0,1);
[009A] (2F)   if (!getState04(330)) {
[009F] (19)     doSentence(2,329,0,1);
[00A6] (**)   }
[00A6] (**) }
[00A6] (9A) VAR_EGO = Var[117];
[00A9] (D2) actorFollowCamera(VAR_EGO);
[00AB] (42) startScript(19);
[00AD] (2E) delay(60);
[00B1] (C0) endCutscene();
[00B2] (60) cursorCommand(247, 1);
[00B5] (A0) stopObjectCode();
END

// Script 76: Give Whiskey to Sentry
[0000] (19) doSentence(254,653,0,1);
[0007] (40) cutscene();
[0008] (5B) setBitVar(1559,3,Var[235]);
[000D] (17) clearState02(642);
[0010] (14) print(10,"I'd be HAPPY to join you in a drink.");
[002F] (58) beginOverride();
[0030] (18) goto 0050;
[0033] (AE) waitForMessage();
[0034] (72) loadRoom(0);
[0036] (EE) dummy(EE);
[0037] (2E) delay(60);
[003B] (14) print(255,"Half a bottle later^");
[004F] (AE) waitForMessage();
[0050] (29) setOwnerOf(46,0);
[0054] (C0) endCutscene();
[0055] (43) VAR_RESULT = getActorX(10);
[0058] (A8) if (VAR_RESULT) {
[005C] (19)   doSentence(253,656,0,1);
[0063] (**) }
[0063] (2E) delay(60);
[0067] (11) animateActor(2,246);
[006A] (14) print(2,"That was MOST unpleasant.");
[0083] (A0) stopObjectCode();
END

// Script 77
[0000] (2E) delay(420);
[0004] (40) cutscene();
[0005] (9A) Var[117] = VAR_EGO;
[0008] (72) loadRoom(4);
[000A] (4F) if (getState08(159)) {
[000F] (47)   clearState08(159);
[0012] (18) } else {
[0015] (42)   startScript(17);
[0017] (**) }
[0017] (1A) Var[47] = 5000;
[001B] (2E) delay(120);
[001F] (1A) VAR_EGO = 7;
[0023] (FB) VAR_RESULT = getActorWalkBox(VAR_EGO);
[0026] (48) if (VAR_RESULT == 3) {
[002C] (0F)   if (!getState08(156)) {
[0031] (19)     doSentence(1,157,0,0);
[0038] (4C)     waitForSentence();
[0039] (**)   }
[0039] (**) }
[0039] (36) walkActorToObject(7,159);
[003D] (3B) waitForActor(7);
[003F] (07) setState08(159);
[0042] (62) stopScript(17);
[0044] (3C) stopSound(13);
[0046] (2E) delay(60);
[004A] (D8) printEgo("Hello?\x03Hello, who's there?\x03Is this Edna again?");
[0075] (AE) waitForMessage();
[0076] (2E) delay(120);
[007A] (9A) VAR_EGO = Var[117];
[007D] (C0) endCutscene();
[007E] (80) breakHere();
[007F] (0F) unless (!getState08(87)) goto 007E;
[0084] (40) cutscene();
[0085] (9A) Var[117] = VAR_EGO;
[0088] (2E) delay(60);
[008C] (72) loadRoom(4);
[008E] (2E) delay(120);
[0092] (1A) VAR_EGO = 7;
[0096] (D8) printEgo("They hung up!");
[00A3] (AE) waitForMessage();
[00A4] (19) doSentence(253,157,0,1);
[00AB] (80) breakHere();
[00AC] (A8) unless (Var[48]) goto 00AB;
[00B0] (9A) VAR_EGO = Var[117];
[00B3] (C0) endCutscene();
[00B4] (A0) stopObjectCode();
END

// Script 78: Character Dies
[0000] (40) cutscene();
[0001] (DB) setBitVar(1470,VAR_EGO,Var[235]);
[0006] (DB) setBitVar(1505,VAR_EGO,Var[234]);
[000B] (08) if (Var[166] != 4) {
[0011] (B2)   setCameraAt(VAR_CAMERA_POS_X);
[0013] (AD)   putActorInRoom(VAR_EGO,0);
[0016] (**) }
[0016] (1A) Var[66] = 14;
[001A] (90) VAR_RESULT = getObjectOwner(Var[66]);
[001D] (C8) if (VAR_RESULT == VAR_EGO) {
[0022] (08)   if (Var[66] != 65) {
[0028] (A9)     setOwnerOf(Var[66],0);
[002B] (48)     if (Var[66] == 49) {
[0031] (67)       clearState04(49);
[0034] (**)     }
[0034] (48)     if (Var[66] == 71) {
[003A] (67)       clearState04(71);
[003D] (**)     }
[003D] (**)   }
[003D] (**) }
[003D] (46) Var[66]++;
[003F] (44) unless (Var[66] > 83) goto 001A;
[0045] (48) if (VAR_ROOM == 31) {
[004B] (19)   doSentence(254,499,0,1);
[0052] (19)   doSentence(254,501,0,1);
[0059] (19)   doSentence(254,504,0,1);
[0060] (19)   doSentence(254,498,0,1);
[0067] (2D)   putActorInRoom(5,0);
[006A] (**) }
[006A] (14) print(255,"\x06\x00 \x02");
[0071] (48) if (Var[166] == 1) {
[0077] (14)   print(255,"fell to his death!");
[0089] (48) } else if (Var[166] == 2) {
[0092] (14)   print(255,"drowned.");
[009D] (48) } else if (Var[166] == 3) {
[00A6] (14)   print(255,"suffocated from lack of oxygen!");
[00C4] (48) } else if (Var[166] == 4) {
[00CD] (14)   print(255,"spent his remaining years in jail\x01for crimes against the Nepalese flag.");
[010D] (48) } else if (Var[166] == 5) {
[0116] (14)   print(255,"was viciously ripped to shreds by\x01The Guardian of the Sphinx!");
[014D] (48) } else if (Var[166] == 6) {
[0156] (14)   print(255,"died a horrible death as his blood\x01boiled away.");
[0181] (18)   /* goto 0184; */
[0184] (**) }
[0184] (AE) waitForMessage();
[0185] (6F) if (getState04(169)) {
[018A] (1A)   VAR_EGO = 1;
[018E] (B1)   VAR_RESULT = getBitVar(1505,VAR_EGO);
[0193] (A8)   if (VAR_RESULT) {
[0197] (18)     goto 0218;
[019A] (**)   }
[019A] (46)   VAR_EGO++;
[019C] (44)   unless (VAR_EGO > 4) goto 018E;
[01A2] (1A)   VAR_EGO = 1;
[01A6] (B1)   VAR_RESULT = getBitVar(1470,VAR_EGO);
[01AB] (28)   if (!VAR_RESULT) {
[01AF] (9A)     Var[199] = Var[235];
[01B2] (42)     startScript(19);
[01B4] (D2)     actorFollowCamera(VAR_EGO);
[01B6] (18)     goto 0218;
[01B9] (**)   }
[01B9] (46)   VAR_EGO++;
[01BB] (44)   unless (VAR_EGO > 4) goto 01A6;
[01C1] (**) }
[01C1] (58) beginOverride();
[01C2] (18) goto 0214;
[01C5] (0C) loadSound(103)
[01C8] (0C) lockSound(103)
[01CB] (0C) loadSound(104)
[01CE] (0C) lockSound(104)
[01D1] (02) startMusic(103);
[01D3] (42) startScript(128);
[01D5] (14) print(255,"            THE GAME IS OVER");
[01EB] (2E) delay(300);
[01EF] (14) print(255,"      Press ESCAPE to start again.");
[020D] (2E) delay(300);
[0211] (18) goto 01D5;
[0214] (62) stopScript(128);
[0216] (20) stopMusic();
[0217] (98) restart();
[0218] (C0) endCutscene();
[0219] (60) cursorCommand(247, 1);
[021C] (A0) stopObjectCode();
END

// Script 79
Events:
  FA - 0000
  1A - 0000
   9 - 0000
  D2 - 0000
  1E - 0009
  4E - 0036
  3B - 0009
  11 - 0009
  F4 - 003B
   9 - 00D8
  57 - 00E5
  61 - 0072
  E5 - 006E
  6F - 00F7
  6C - 0061
  6E - 0064
  69 - 006E
  67 - 00AE
  50 - 0072
  65 - 0070
  61 - 0072
  E5 - 0074
  6F - 0001
  64 - 0069
  73 - 0065
  6D - 0062
  61 - 0072
  6B - 002E
[0000] (2A) Var[Var[1]] += 0;
[0004] (40) cutscene();
[0005] (C8) if (VAR_KEYPRESS == VAR_CUTSCENEEXIT_KEY) {
[000A] (18) } else {
[000D] (58)   beginOverride();
[000E] (18)   goto 010B;
[0011] (1A)   VAR_EGO = 9;
[0015] (D2)   actorFollowCamera(VAR_EGO);
[0017] (1E)   walkActorTo(9,78,54);
[001B] (3B)   waitForActor(9);
[001D] (11)   animateActor(9,244);
[0020] (3B)   waitForActor(9);
[0022] (D8)   printEgo("We are now landing. Prepare to\x01disembark.");
[0048] (AE)   waitForMessage();
[0049] (0C)   loadScript(120)
[004C] (4F)   if (getState08(248)) {
[0051] (19)     doSentence(253,251,0,1);
[0058] (**)   }
[0058] (19)   doSentence(1,256,0,0);
[005F] (2E)   delay(120);
[0063] (0F)   if (!getState08(263)) {
[0068] (9E)     walkActorTo(Var[52],85,54);
[006C] (BB)     waitForActor(Var[52]);
[006E] (19)     doSentence(254,258,0,1);
[0075] (**)   }
[0075] (9E)   walkActorTo(Var[52],85,54);
[0079] (4C)   waitForSentence();
[007A] (0F)   if (!getState08(262)) {
[007F] (46)     Var[248]++;
[0081] (19)     doSentence(1,260,0,0);
[0088] (4C)     waitForSentence();
[0089] (19)     doSentence(14,262,0,0);
[0090] (4C)     waitForSentence();
[0091] (69)     setOwnerOf(22,Var[52]);
[0095] (BB)     waitForActor(Var[52]);
[0097] (4D)     walkActorToActor(9,Var[52],4);
[009B] (D8)     printEgo("Here's your egg.");
[00AB] (AE)     waitForMessage();
[00AC] (91)     animateActor(Var[52],245);
[00AF] (80)     breakHere();
[00B0] (D8)     printEgo("Next time cook it at home!");
[00C7] (18)   } else {
[00CA] (1E)     walkActorTo(9,91,54);
[00CE] (3B)     waitForActor(9);
[00D0] (11)     animateActor(9,244);
[00D3] (BB)     waitForActor(Var[52]);
[00D5] (91)     animateActor(Var[52],245);
[00D8] (D8)     printEgo("It's been a JOY having you aboard.\x01Have a nice day.");
[0104] (**)   }
[0104] (AE)   waitForMessage();
[0105] (B6)   walkActorToObject(Var[52],256);
[0109] (BB)   waitForActor(Var[52]);
[010B] (**) }
[010B] (07) setState08(256);
[010E] (0F) if (!getState08(262)) {
[0113] (69)   setOwnerOf(22,Var[52]);
[0117] (**) }
[0117] (9A) VAR_EGO = Var[52];
[011A] (D2) actorFollowCamera(VAR_EGO);
[011C] (60) cursorCommand(247, 1);
[011F] (19) doSentence(STOP);
[0121] (19) doSentence(13,256,0,1);
[0128] (C0) endCutscene();
[0129] (A0) stopObjectCode();
END

// Script 80
[0000] (48) if (VAR_ACTIVE_VERB == 11) {
[0006] (9D)   if (classOfIs(VAR_ACTIVE_OBJECT2,128)) {
[000B] (D8)     printEgo("I don't need to buy one. I can read the\x01headlines from here.");
[003E] (AE)     waitForMessage();
[003F] (18)     goto 028B;
[0042] (18)   } else {
[0045] (4A)     chainScript(3);
[0047] (**)   }
[0047] (**) }
[0047] (2F) if (!getState04(219)) {
[004C] (27)   setState04(219);
[004F] (9A)   Var[66] = Var[234];
[0052] (B1)   VAR_RESULT = getBitVar(1559,Var[66]);
[0057] (A8)   if (VAR_RESULT) {
[005B] (DB)     setBitVar(1559,Var[66],Var[234]);
[0060] (9A)     Var[216] = Var[66];
[0063] (18)   } else {
[0066] (46)     Var[66]++;
[0068] (44)     unless (Var[66] > 8) goto 0052;
[006E] (**)   }
[006E] (**) }
[006E] (48) if (Var[216] == 0) {
[0074] (D8)   printEgo("COEDS DISCOVER MILE-LONG FACE ON MARS!");
[0097] (48) } else if (Var[216] == 1) {
[00A0] (48)   if (Var[147] == 2) {
[00A6] (D8)     printEgo("LAST OF THE TWO-HEADED SQUIRRELS\x01BLUDGEONED BY BUMBLING FOOL!");
[00DE] (18)   } else {
[00E1] (D8)     printEgo("TWO-HEADED SQUIRREL ON RAVENOUS\x01RAMPAGE IN PACIFIC NORTHWEST!");
[011A] (**)   }
[011A] (48) } else if (Var[216] == 2) {
[0123] (D8)   printEgo("REAL LIFE DR. DOOLITTLE\x01YAKS WITH THE ANIMALS!");
[014D] (48) } else if (Var[216] == 3) {
[0156] (D8)   printEgo("SERIOUS SECURITY SLIPPAGE AT STONEHENGE!");
[017C] (48) } else if (Var[216] == 4) {
[0185] (D8)   printEgo("RIDDLE OF THE SILENT SPHINX, SOLVED!");
[01A6] (48) } else if (Var[216] == 5) {
[01AF] (D8)   printEgo("ANGRY GURU MAKES MAN WAIT -- FOUR YEARS!");
[01D2] (48) } else if (Var[216] == 6) {
[01DB] (D8)   printEgo("ALIEN CADILLAC CRUISER CAUSE OF\x01BERMUDA TRIANGLE CATASTROPHES!");
[0215] (48) } else if (Var[216] == 7) {
[021E] (D8)   printEgo("A-MAZE-ING MYSTERY OF THE\x01ANCIENT MAYANS, REVEALED!");
[024E] (48) } else if (Var[216] == 8) {
[0257] (D8)   printEgo("ISOLATED AFRICAN TRIBE\x01WORSHIPS ANCIENT ASTRONAUTS!");
[0288] (18)   /* goto 028B; */
[028B] (**) }
[028B] (A0) stopObjectCode();
END

// Script 81
[0000] (42) startScript(84);
[0002] (1C) startSound(112);
[0004] (80) breakHere();
[0005] (40) cutscene();
[0006] (50) pickupObject(66);
[0009] (50) pickupObject(65);
[000C] (29) setOwnerOf(65,3);
[0010] (29) setOwnerOf(66,4);
[0014] (13) ActorOps(3,[Sound(7)]);
[0018] (13) ActorOps(4,[Sound(7)]);
[001C] (58) beginOverride();
[001D] (18) goto 0051;
[0020] (1A) VAR_TIMER_NEXT = 10;
[0024] (2E) delay(140);
[0028] (12) panCameraTo(90);
[002A] (14) print(255,"The landing site on Mars^");
[0042] (80) breakHere();
[0043] (48) unless (VAR_CAMERA_POS_X == 90) goto 0042;
[0049] (80) breakHere();
[004A] (7C) VAR_RESULT = isSoundRunning(112);
[004D] (28) unless (!VAR_RESULT) goto 0049;
[0051] (A8) if (VAR_OVERRIDE) {
[0055] (3C)   stopSound(112);
[0057] (72)   loadRoom(0);
[0059] (80)   breakHere();
[005A] (**) }
[005A] (13) ActorOps(3,[Costume(7)]);
[005E] (13) ActorOps(4,[Costume(36)]);
[0062] (2D) putActorInRoom(3,185);
[0065] (01) putActor(3,102,36);
[0069] (11) animateActor(3,250);
[006C] (2D) putActorInRoom(4,185);
[006F] (01) putActor(4,106,36);
[0073] (11) animateActor(4,250);
[0076] (D2) actorFollowCamera(VAR_EGO);
[0078] (A8) if (VAR_OVERRIDE) {
[007C] (18) } else {
[007F] (58)   beginOverride();
[0080] (18)   goto 0233;
[0083] (2E)   delay(60);
[0087] (14)   print(3,"I'm getting a little tired of waiting\x01here for instructions.");
[00BE] (11)   animateActor(3,245);
[00C1] (AE)   waitForMessage();
[00C2] (11)   animateActor(4,244);
[00C5] (14)   print(4,"Yeah, this place is boring.");
[00DF] (AE)   waitForMessage();
[00E0] (14)   print(4,"It's got a great beach, but no water^\x01and no guys!");
[010C] (1E)   walkActorTo(4,106,50);
[0110] (2E)   delay(60);
[0114] (11)   animateActor(3,246);
[0117] (3B)   waitForActor(4);
[0119] (2E)   delay(30);
[011D] (1E)   walkActorTo(4,92,48);
[0121] (3B)   waitForActor(4);
[0123] (11)   animateActor(4,245);
[0126] (AE)   waitForMessage();
[0127] (14)   print(3,"We should have gone to Ft. Lauderdale\x01for Spring break like everyone else.");
[0169] (1E)   walkActorTo(3,94,48);
[016D] (3B)   waitForActor(3);
[016F] (11)   animateActor(3,244);
[0172] (AE)   waitForMessage();
[0173] (14)   print(3,"It would have taken us two days instead\x01of two months,");
[01A3] (2E)   delay(180);
[01A7] (1E)   walkActorTo(3,108,48);
[01AB] (3B)   waitForActor(3);
[01AD] (AE)   waitForMessage();
[01AE] (11)   animateActor(3,244);
[01B1] (2E)   delay(30);
[01B5] (14)   print(3,"and I wouldn't have gotten sick every\x01time I looked out the window!");
[01F0] (2E)   delay(240);
[01F4] (1E)   walkActorTo(3,102,36);
[01F8] (3B)   waitForActor(3);
[01FA] (11)   animateActor(3,246);
[01FD] (AE)   waitForMessage();
[01FE] (14)   print(4,"Yeah, and in zero gravity, that sure was\x01a mess!");
[0229] (1E)   walkActorTo(4,106,36);
[022D] (3B)   waitForActor(4);
[022F] (11)   animateActor(4,244);
[0232] (AE)   waitForMessage();
[0233] (**) }
[0233] (A8) if (VAR_OVERRIDE) {
[0237] (14)   print(255,"");
[023A] (01)   putActor(3,102,36);
[023E] (01)   putActor(4,106,36);
[0242] (42)   startScript(5);
[0244] (**) }
[0244] (11) animateActor(3,246);
[0247] (11) animateActor(4,246);
[024A] (14) print(255,"");
[024D] (50) pickupObject(61);
[0250] (29) setOwnerOf(61,14);
[0254] (50) pickupObject(62);
[0257] (29) setOwnerOf(62,14);
[025B] (50) pickupObject(63);
[025E] (29) setOwnerOf(63,14);
[0262] (C0) endCutscene();
[0263] (A0) stopObjectCode();
END

// Script 82
[0000] (9A) Var[199] = Var[234];
[0003] (80) breakHere();
[0004] (68) VAR_RESULT = isScriptRunning(49);
[0007] (28) unless (!VAR_RESULT) goto 0003;
[000B] (B1) VAR_RESULT = getBitVar(1505,VAR_EGO);
[0010] (28) if (!VAR_RESULT) {
[0014] (9A)   Var[66] = Var[235];
[0017] (B1)   VAR_RESULT = getBitVar(1505,Var[66]);
[001C] (A8)   if (VAR_RESULT) {
[0020] (88)     if (VAR_EGO != Var[66]) {
[0025] (9A)       VAR_EGO = Var[66];
[0028] (42)       startScript(19);
[002A] (D2)       actorFollowCamera(VAR_EGO);
[002C] (**)     }
[002C] (2E)     delay(60);
[0030] (18)     goto 000B;
[0033] (**)   }
[0033] (46)   Var[66]++;
[0035] (44)   unless (Var[66] > 4) goto 0017;
[003B] (9A)   Var[199] = Var[235];
[003E] (62)   stopScript(0);
[0040] (**) }
[0040] (91) animateActor(VAR_EGO,246);
[0043] (1A) Var[166] = 3;
[0047] (48) if (VAR_EGO == 1) {
[004D] (2F)   if (!getState04(39)) {
[0052] (D8)     printEgo("My skin's boiling!");
[0064] (1A)     Var[166] = 6;
[0068] (18)     goto 00A4;
[006B] (**)   }
[006B] (48)   if (Var[167] == 56) {
[0071] (D8)     printEgo("The air's leaking from my fish bowl.");
[0091] (18)     goto 00A4;
[0094] (**)   }
[0094] (**) }
[0094] (D8) printEgo("I can't breathe!");
[00A4] (9A) Var[219] = Var[235];
[00A7] (B1) VAR_RESULT = getBitVar(1505,Var[219]);
[00AC] (A8) if (VAR_RESULT) {
[00B0] (9A)   Var[14] = Var[219];
[00B3] (5A)   Var[14] += 225;
[00B7] (EA)   Var[Var[14]] -= Var[235];
[00BA] (9A)   Var[14] = Var[219];
[00BD] (5A)   Var[14] += 225;
[00C1] (28)   if (!Var[14]) {
[00C5] (88)     if (VAR_EGO != Var[219]) {
[00CA] (9A)       VAR_EGO = Var[219];
[00CD] (D2)       actorFollowCamera(VAR_EGO);
[00CF] (2E)       delay(60);
[00D3] (**)     }
[00D3] (08)     if (VAR_EGO != 1) {
[00D9] (1A)       Var[166] = 3;
[00DD] (**)     }
[00DD] (42)     startScript(78);
[00DF] (80)     breakHere();
[00E0] (68)     VAR_RESULT = isScriptRunning(78);
[00E3] (28)     unless (!VAR_RESULT) goto 00DF;
[00E7] (**)   }
[00E7] (**) }
[00E7] (46) Var[219]++;
[00E9] (44) unless (Var[219] > 4) goto 00A7;
[00EF] (2E) delay(60);
[00F3] (18) goto 000B;
[00F6] (A0) stopObjectCode();
END

// Script 83
[0000] (67) clearState04(70);
[0003] (1A) Var[66] = 1;
[0007] (88) if (Var[66] != VAR_EGO) {
[000C] (FB)   VAR_RESULT = getActorWalkBox(Var[66]);
[000F] (C8)   if (VAR_RESULT == Var[60]) {
[0014] (27)     setState04(70);
[0017] (D8)     printEgo("I don't want to hurt my friend!");
[0032] (**)   }
[0032] (**) }
[0032] (46) Var[66]++;
[0034] (44) unless (Var[66] > 4) goto 0007;
[003A] (A0) stopObjectCode();
END

// Script 84
[0000] (2E) delay(900);
[0004] (48) if (Var[169] == 32) {
[000A] (A8)   if (Var[206]) {
[000E] (C6)     Var[206]--;
[0010] (C8)     if (Var[206] == Var[254]) {
[0015] (1A)       Var[118] = 3;
[0019] (C6)       Var[206]--;
[001B] (42)       startScript(146);
[001D] (80)       breakHere();
[001E] (**)     }
[001E] (**)   }
[001E] (**) }
[001E] (48) if (Var[170] == 32) {
[0024] (A8)   if (Var[207]) {
[0028] (C6)     Var[207]--;
[002A] (C8)     if (Var[207] == Var[254]) {
[002F] (C6)       Var[207]--;
[0031] (1A)       Var[118] = 4;
[0035] (42)       startScript(146);
[0037] (**)     }
[0037] (**)   }
[0037] (**) }
[0037] (18) goto 0000;
[003A] (A0) stopObjectCode();
END

// Script 85
[0000] (10) VAR_RESULT = getObjectOwner(48);
[0004] (C8) if (VAR_RESULT == VAR_EGO) {
[0009] (6F)   if (getState04(169)) {
[000E] (2E)     delay(208800);
[0012] (18)   } else {
[0015] (40)     cutscene();
[0016] (72)     loadRoom(0);
[0018] (EE)     dummy(EE);
[0019] (14)     print(255,"58 minutes later^");
[002B] (AE)     waitForMessage();
[002C] (C0)     endCutscene();
[002D] (**)   }
[002D] (**) }
[002D] (2E) delay(7200);
[0031] (68) VAR_RESULT = isScriptRunning(49);
[0034] (A8) if (VAR_RESULT) {
[0038] (18)   goto 002D;
[003B] (**) }
[003B] (4A) chainScript(86);
[003D] (A0) stopObjectCode();
END

// Script 86
[0000] (08) if (VAR_ROOM != 31) {
[0006] (1A)   VAR_EGO = 1;
[000A] (42)   startScript(19);
[000C] (D2)   actorFollowCamera(VAR_EGO);
[000E] (**) }
[000E] (9A) Var[199] = Var[234];
[0011] (2E) delay(120);
[0015] (11) animateActor(1,246);
[0018] (80) breakHere();
[0019] (D8) printEgo("I can't last much longer!");
[0030] (2E) delay(1800);
[0034] (D8) printEgo("This is the end!");
[0043] (19) doSentence(253,503,0,1);
[004A] (2E) delay(480);
[004E] (19) doSentence(253,497,0,1);
[0055] (80) breakHere();
[0056] (44) unless (Var[46] > 10) goto 0055;
[005C] (D8) printEgo("HELP!");
[0063] (19) doSentence(250,504,0,1);
[006A] (2E) delay(600);
[006E] (19) doSentence(253,503,0,1);
[0075] (2E) delay(300);
[0079] (19) doSentence(254,504,0,1);
[0080] (1A) Var[166] = 2;
[0084] (67) clearState04(504);
[0087] (42) startScript(78);
[0089] (A0) stopObjectCode();
END

// Script 87
[0000] (40) cutscene();
[0001] (67) clearState04(504);
[0004] (58) beginOverride();
[0005] (18) goto 0090;
[0008] (19) doSentence(253,497,0,1);
[000F] (0D) walkActorToActor(5,1,2);
[0013] (3B) waitForActor(5);
[0015] (09) faceActor(5,1);
[0018] (00) stopObjectCode();
[0019] (09) faceActor(1,5);
[001C] (00) stopObjectCode();
[001D] (3B) waitForActor(1);
[001F] (2E) delay(60);
[0023] (D8) printEgo("A ride?\x03Sure!");
[0031] (AE) waitForMessage();
[0032] (11) animateActor(5,244);
[0035] (11) animateActor(1,244);
[0038] (1E) walkActorTo(5,0,90);
[003C] (0D) walkActorToActor(1,5,1);
[0040] (80) breakHere();
[0041] (56) VAR_RESULT = getActorMoving(5);
[0044] (48) unless (VAR_RESULT == 0) goto 003C;
[004A] (2D) putActorInRoom(1,1);
[004D] (01) putActor(1,9,52);
[0051] (72) loadRoom(0);
[0053] (EE) dummy(EE);
[0054] (14) print(255,"After 3 days of swimming and a short\x01stay in an EXPENSIVE hospital^");
[008F] (AE) waitForMessage();
[0090] (07) setState08(90);
[0093] (2D) putActorInRoom(1,1);
[0096] (01) putActor(1,9,52);
[009A] (72) loadRoom(1);
[009C] (19) doSentence(11,85,0,1);
[00A3] (44) if (Var[62] > 750) {
[00A9] (3A)   Var[62] -= 750;
[00AD] (18) } else {
[00B0] (9A)   Var[62] = Var[234];
[00B3] (**) }
[00B3] (9A) Var[66] = Var[234];
[00B6] (16) Var[67] = getRandomNr(9);
[00B9] (9A) Var[14] = Var[66];
[00BC] (5A) Var[14] += 212;
[00C0] (8A) Var[Var[14]] = Var[67];
[00C3] (46) Var[66]++;
[00C5] (44) unless (Var[66] > 3) goto 00B6;
[00CB] (67) clearState04(237);
[00CE] (1A) Var[167] = 52;
[00D2] (1A) Var[164] = 44;
[00D6] (6F) if (getState04(39)) {
[00DB] (19)   doSentence(7,39,0,1);
[00E2] (**) }
[00E2] (2E) delay(120);
[00E6] (D8) printEgo("Ohhhhh!");
[00EF] (9A) Var[199] = Var[235];
[00F2] (C0) endCutscene();
[00F3] (A0) stopObjectCode();
END

// Script 88: Zak in Mindbender
[0000] (62) stopScript(89);
[0002] (5A) Var[250] += 300;
[0006] (80) breakHere();
[0007] (48) unless (Var[21] == 1) goto 0006;
[000D] (2E) delay(120);
[0011] (1A) Var[66] = 1;
[0015] (19) doSentence(253,340,0,1);
[001C] (2E) delay(300);
[0020] (48) if (Var[236] == 2) {
[0026] (46)   Var[236]++;
[0028] (**) }
[0028] (03) VAR_RESULT = getActorRoom(1);
[002B] (08) if (VAR_RESULT != 16) {
[0031] (4A)   chainScript(89);
[0033] (**) }
[0033] (DB) setBitVar(1513,Var[236],Var[235]);
[0038] (48) if (VAR_ROOM == 16) {
[003E] (7B)   VAR_RESULT = getActorWalkBox(1);
[0041] (08)   if (VAR_RESULT != 6) {
[0047] (4A)     chainScript(89);
[0049] (**)   }
[0049] (31)   VAR_RESULT = getBitVar(1547,0);
[004E] (A8)   if (VAR_RESULT) {
[0052] (28)     if (!Var[236]) {
[0056] (14)       print(1,"Not again!");
[0062] (18)     } else {
[0065] (14)       print(1,"Ohhh^");
[006D] (**)     }
[006D] (C8)   } else if (Var[236] == Var[234]) {
[0075] (14)     print(1,"I'm losing my mind!");
[0088] (C8)   } else if (Var[236] == Var[235]) {
[0090] (14)     print(1,"SLEAZY TABLOID REPORTER\x01ABDUCTED BY SPACE ALIENS.");
[00BF] (48)   } else if (Var[236] == 4) {
[00C8] (14)     print(1,"TEASING SLABOID, uh, PORTER AB, AB,\x01er, TAKEN BY SPACE ALIASES.");
[0101] (48)   } else if (Var[236] == 6) {
[010A] (14)     print(1,"TEDING SLOBORT, uh, TABES\x01SPADES ALIABUH.");
[0132] (48)   } else if (Var[236] == 8) {
[013B] (5B)     setBitVar(1547,0,Var[235]);
[0140] (14)     print(1,"SLEEBLE DEEDOB, uh,\x01PACEALOO BALEAZZ.");
[0165] (18)     /* goto 0168; */
[0168] (**)   }
[0168] (48)   if (VAR_EGO == 1) {
[016E] (FA)     VerbOps(Delete(Var[236]););
[0171] (60)     cursorCommand(0, 0);
[0174] (**)   }
[0174] (**) }
[0174] (46) Var[236]++;
[0176] (44) unless (Var[236] > 13) goto 001C;
[017C] (42) startScript(92);
[017E] (80) breakHere();
[017F] (03) VAR_RESULT = getActorRoom(1);
[0182] (08) unless (VAR_RESULT != 16) goto 017E;
[0188] (42) startScript(89);
[018A] (A0) stopObjectCode();
END

// Script 89: Zak Recovering
[0000] (46) Var[236]++;
[0002] (44) if (Var[236] > 14) {
[0008] (1A)   Var[236] = 14;
[000C] (**) }
[000C] (2E) delay(900);
[0010] (14) print(1,"I'm feeling better now.");
[0027] (2B) delayVariable(Var[250]);
[0029] (A8) if (Var[236]) {
[002D] (C6)   Var[236]--;
[002F] (**) }
[002F] (48) if (Var[236] == 2) {
[0035] (C6)   Var[236]--;
[0037] (**) }
[0037] (DB) setBitVar(1513,Var[236],Var[234]);
[003C] (03) VAR_RESULT = getActorRoom(1);
[003F] (C8) if (VAR_RESULT == VAR_ROOM) {
[0044] (48)   if (VAR_EGO == 1) {
[004A] (42)     startScript(19);
[004C] (**)   }
[004C] (**) }
[004C] (28) unless (!Var[236]) goto 0027;
[0050] (AE) waitForMessage();
[0051] (14) print(1,"Ah, back to normal!");
[0064] (A0) stopObjectCode();
END

// Script 90: Annie In Mindbender
[0000] (62) stopScript(91);
[0002] (5A) Var[251] += 300;
[0006] (80) breakHere();
[0007] (48) unless (Var[21] == 1) goto 0006;
[000D] (2E) delay(120);
[0011] (1A) Var[66] = 2;
[0015] (19) doSentence(253,340,0,1);
[001C] (2E) delay(300);
[0020] (48) if (Var[237] == 2) {
[0026] (46)   Var[237]++;
[0028] (**) }
[0028] (03) VAR_RESULT = getActorRoom(2);
[002B] (08) if (VAR_RESULT != 16) {
[0031] (4A)   chainScript(91);
[0033] (**) }
[0033] (DB) setBitVar(1527,Var[237],Var[235]);
[0038] (48) if (VAR_ROOM == 16) {
[003E] (7B)   VAR_RESULT = getActorWalkBox(2);
[0041] (08)   if (VAR_RESULT != 6) {
[0047] (4A)     chainScript(91);
[0049] (**)   }
[0049] (28)   if (!Var[237]) {
[004D] (14)     print(2,"My mind is going!");
[005E] (18)   } else {
[0061] (14)     print(2,"Ooo^");
[0068] (**)   }
[0068] (48)   if (VAR_EGO == 2) {
[006E] (FA)     VerbOps(Delete(Var[237]););
[0071] (60)     cursorCommand(0, 0);
[0074] (**)   }
[0074] (**) }
[0074] (46) Var[237]++;
[0076] (44) unless (Var[237] > 13) goto 001C;
[007C] (42) startScript(92);
[007E] (80) breakHere();
[007F] (03) VAR_RESULT = getActorRoom(2);
[0082] (08) unless (VAR_RESULT != 16) goto 007E;
[0088] (42) startScript(91);
[008A] (A0) stopObjectCode();
END

// Script 91: Annie Recovering
[0000] (46) Var[237]++;
[0002] (44) if (Var[237] > 14) {
[0008] (1A)   Var[237] = 14;
[000C] (**) }
[000C] (2E) delay(900);
[0010] (14) print(2,"I'm feeling better now.");
[0027] (2B) delayVariable(Var[251]);
[0029] (A8) if (Var[237]) {
[002D] (C6)   Var[237]--;
[002F] (**) }
[002F] (48) if (Var[237] == 2) {
[0035] (C6)   Var[237]--;
[0037] (**) }
[0037] (DB) setBitVar(1527,Var[237],Var[234]);
[003C] (03) VAR_RESULT = getActorRoom(2);
[003F] (C8) if (VAR_RESULT == VAR_ROOM) {
[0044] (48)   if (VAR_EGO == 2) {
[004A] (42)     startScript(19);
[004C] (**)   }
[004C] (**) }
[004C] (28) unless (!Var[237]) goto 0027;
[0050] (AE) waitForMessage();
[0051] (14) print(2,"Ah, back to normal!");
[0064] (A0) stopObjectCode();
END

// Script 92: Released from Mindbender (Lost Mind)
[0000] (2E) delay(600);
[0004] (80) breakHere();
[0005] (03) VAR_RESULT = getActorRoom(7);
[0008] (48) unless (VAR_RESULT == 4) goto 0004;
[000E] (40) cutscene();
[000F] (1A) VAR_EGO = 7;
[0013] (52) actorFollowCamera(7);
[0015] (2E) delay(60);
[0019] (11) animateActor(7,246);
[001C] (9A) Var[119] = Var[234];
[001F] (D8) printEgo("Hmm. The prisoner's probably lost h\x02");
[0040] (44) if (Var[236] > 13) {
[0046] (1A)   Var[118] = 1;
[004A] (44)   if (Var[237] > 13) {
[0050] (1A)     Var[119] = 2;
[0054] (**)   }
[0054] (D8)   printEgo("is\x01\x02");
[005A] (18) } else {
[005D] (1A)   Var[118] = 2;
[0061] (D8)   printEgo("er\x01\x02");
[0067] (**) }
[0067] (D8) printEgo("mind by now.");
[0073] (AE) waitForMessage();
[0074] (19) doSentence(253,156,0,1);
[007B] (80) breakHere();
[007C] (A8) unless (Var[48]) goto 007B;
[0080] (2D) putActorInRoom(7,16);
[0083] (01) putActor(7,55,60);
[0087] (72) loadRoom(16);
[0089] (32) setCameraAt(80);
[008B] (4F) if (getState08(331)) {
[0090] (19)   doSentence(5,331,0,0);
[0097] (4C)   waitForSentence();
[0098] (**) }
[0098] (1E) walkActorTo(7,84,53);
[009C] (3B) waitForActor(7);
[009E] (D8) printEgo("You are free to go now. Don't come back!");
[00C0] (36) walkActorToObject(7,329);
[00C4] (2E) delay(60);
[00C8] (B6) walkActorToObject(Var[118],329);
[00CC] (A8) if (Var[119]) {
[00D0] (2E)   delay(60);
[00D4] (B6)   walkActorToObject(Var[119],329);
[00D8] (**) }
[00D8] (80) breakHere();
[00D9] (C3) VAR_RESULT = getActorX(Var[118]);
[00DC] (78) unless (VAR_RESULT < 55) goto 00D8;
[00E2] (AD) putActorInRoom(Var[118],3);
[00E5] (81) putActor(Var[118],59,56);
[00E9] (2D) putActorInRoom(7,4);
[00EC] (01) putActor(7,22,52);
[00F0] (91) animateActor(Var[118],250);
[00F3] (A8) if (Var[119]) {
[00F7] (AD)   putActorInRoom(Var[119],3);
[00FA] (81)   putActor(Var[119],63,56);
[00FE] (91)   animateActor(Var[119],250);
[0101] (**) }
[0101] (9A) VAR_EGO = Var[118];
[0104] (42) startScript(19);
[0106] (D2) actorFollowCamera(VAR_EGO);
[0108] (C0) endCutscene();
[0109] (A0) stopObjectCode();
END

// Script 93: Released from Mindbender (Disguise)
[0000] (80) breakHere();
[0001] (40) cutscene();
[0002] (9A) Var[117] = VAR_EGO;
[0005] (1A) VAR_EGO = 7;
[0009] (52) actorFollowCamera(7);
[000B] (58) beginOverride();
[000C] (18) goto 00C5;
[000F] (2E) delay(60);
[0013] (48) if (VAR_ROOM == 4) {
[0019] (11)   animateActor(7,246);
[001C] (D8)   printEgo("I think I'll check on the prisoner.");
[003B] (AE)   waitForMessage();
[003C] (19)   doSentence(253,156,0,1);
[0043] (80)   breakHere();
[0044] (A8)   unless (Var[48]) goto 0043;
[0048] (**) }
[0048] (2D) putActorInRoom(7,16);
[004B] (01) putActor(7,55,60);
[004F] (72) loadRoom(16);
[0051] (42) startScript(5);
[0053] (32) setCameraAt(80);
[0055] (4D) walkActorToActor(7,Var[117],4);
[0059] (3B) waitForActor(7);
[005B] (D8) printEgo("How'd you get in here?");
[006F] (AE) waitForMessage();
[0070] (4F) if (getState08(331)) {
[0075] (19)   doSentence(5,331,0,0);
[007C] (4C)   waitForSentence();
[007D] (**) }
[007D] (4D) walkActorToActor(7,Var[117],4);
[0081] (3B) waitForActor(7);
[0083] (D8) printEgo("Don't you know the Mindbender's not good\x01for your health!");
[00B6] (AE) waitForMessage();
[00B7] (36) walkActorToObject(7,329);
[00BB] (80) breakHere();
[00BC] (43) VAR_RESULT = getActorX(7);
[00BF] (78) unless (VAR_RESULT < 58) goto 00BB;
[00C5] (A8) if (VAR_OVERRIDE) {
[00C9] (D2)   actorFollowCamera(Var[117]);
[00CB] (19)   doSentence(5,331,0,1);
[00D2] (**) }
[00D2] (19) doSentence(1,329,0,1);
[00D9] (9A) VAR_EGO = Var[117];
[00DC] (D2) actorFollowCamera(VAR_EGO);
[00DE] (27) setState04(330);
[00E1] (C0) endCutscene();
[00E2] (2D) putActorInRoom(7,4);
[00E5] (01) putActor(7,22,52);
[00E9] (A0) stopObjectCode();
END

// Script 94: Phone Company Rep. Alerted
[0000] (80) breakHere();
[0001] (40) cutscene();
[0002] (5B) setBitVar(1544,0,Var[234]);
[0007] (52) actorFollowCamera(7);
[0009] (9A) Var[117] = VAR_EGO;
[000C] (1A) VAR_EGO = 7;
[0010] (2E) delay(60);
[0014] (11) animateActor(7,247);
[0017] (2E) delay(60);
[001B] (11) animateActor(7,246);
[001E] (3B) waitForActor(7);
[0020] (D8) printEgo("What was that!");
[002E] (AE) waitForMessage();
[002F] (6F) if (getState04(330)) {
[0034] (11)   animateActor(7,245);
[0037] (D8)   printEgo("Oh, it must be the Brother in the back.");
[0058] (AE)   waitForMessage();
[0059] (11)   animateActor(7,246);
[005C] (3B)   waitForActor(7);
[005E] (1A)   Var[238] = 255;
[0062] (18) } else {
[0065] (19)   doSentence(253,156,0,1);
[006C] (80)   breakHere();
[006D] (A8)   unless (Var[48]) goto 006C;
[0071] (2D)   putActorInRoom(7,16);
[0074] (01)   putActor(7,17,48);
[0078] (52)   actorFollowCamera(7);
[007A] (11)   animateActor(7,250);
[007D] (2E)   delay(30);
[0081] (66)   Var[238] = getClosestObjActor(7);
[0085] (48)   if (Var[238] == 255) {
[008B] (11)     animateActor(7,244);
[008E] (2E)     delay(60);
[0092] (11)     animateActor(7,245);
[0095] (2E)     delay(60);
[0099] (D8)     printEgo("I THOUGHT I heard something!");
[00B3] (AE)     waitForMessage();
[00B4] (11)     animateActor(7,247);
[00B7] (3B)     waitForActor(7);
[00B9] (2D)     putActorInRoom(7,4);
[00BC] (01)     putActor(7,22,52);
[00C0] (2E)     delay(30);
[00C4] (19)     doSentence(2,329,0,1);
[00CB] (2E)     delay(30);
[00CF] (18)   } else {
[00D2] (49)     faceActor(7,Var[238]);
[00D5] (D8)     printEgo("An intruder!");
[00E2] (5B)     setBitVar(1544,0,Var[235]);
[00E7] (AE)     waitForMessage();
[00E8] (9A)     Var[117] = Var[238];
[00EB] (**)   }
[00EB] (**) }
[00EB] (9A) VAR_EGO = Var[117];
[00EE] (42) startScript(19);
[00F0] (C0) endCutscene();
[00F1] (08) if (Var[238] != 255) {
[00F7] (4A)   chainScript(95);
[00F9] (**) }
[00F9] (A0) stopObjectCode();
END

// Script 95
[0000] (9A) Var[238] = VAR_EGO;
[0003] (9A) Var[199] = Var[235];
[0006] (9A) Var[120] = Var[234];
[0009] (48) if (VAR_ROOM == 10) {
[000F] (46)   Var[120]++;
[0011] (18) } else {
[0014] (1A)   Var[245] = 24;
[0018] (**) }
[0018] (80) breakHere();
[0019] (83) Var[66] = getActorRoom(Var[238]);
[001C] (03) VAR_RESULT = getActorRoom(7);
[001F] (88) if (VAR_RESULT != Var[66]) {
[0024] (48)   if (Var[66] == 4) {
[002A] (2E)     delay(120);
[002E] (83)     VAR_RESULT = getActorRoom(Var[238]);
[0031] (48)     if (VAR_RESULT == 4) {
[0037] (D2)       actorFollowCamera(Var[238]);
[0039] (19)       doSentence(1,155,0,1);
[0040] (80)       breakHere();
[0041] (2D)       putActorInRoom(7,4);
[0044] (01)       putActor(7,28,52);
[0048] (11)       animateActor(7,250);
[004B] (42)       startScript(5);
[004D] (18)       goto 00B6;
[0050] (**)     }
[0050] (**)   }
[0050] (2E)   delay(60);
[0054] (40)   cutscene();
[0055] (52)   actorFollowCamera(7);
[0057] (2E)   delay(60);
[005B] (11)   animateActor(7,246);
[005E] (14)   print(7,"Where'd \x02");
[0069] (48)   if (Var[238] == 2) {
[006F] (14)     print(7,"s\x02");
[0074] (**)   }
[0074] (14)   print(7,"he go?");
[007C] (AE)   waitForMessage();
[007D] (2E)   delay(120);
[0081] (08)   if (VAR_ROOM != 4) {
[0087] (1C)     startSound(89);
[0089] (B2)     setCameraAt(VAR_CAMERA_POS_X);
[008B] (2D)     putActorInRoom(7,4);
[008E] (01)     putActor(7,22,52);
[0092] (2E)     delay(120);
[0096] (**)   }
[0096] (C0)   endCutscene();
[0097] (62)   stopScript(0);
[0099] (**) }
[0099] (88) if (VAR_ROOM != Var[66]) {
[009E] (F2)   loadRoom(Var[66]);
[00A0] (C3)   Var[67] = getActorX(Var[238]);
[00A3] (3A)   Var[67] -= 2;
[00A7] (A3)   Var[61] = getActorY(Var[238]);
[00AA] (6D)   putActorInRoom(7,VAR_ROOM);
[00AD] (61)   putActor(7,Var[67],Var[61]);
[00B1] (42)   startScript(5);
[00B3] (18) } else {
[00B6] (4D)   walkActorToActor(7,Var[238],0);
[00BA] (80)   breakHere();
[00BB] (74)   VAR_RESULT = getDist(7,Var[238]);
[00C0] (04)   if (VAR_RESULT <= 2) {
[00C6] (18)   } else {
[00C9] (80)     breakHere();
[00CA] (74)     VAR_RESULT = getDist(7,Var[238]);
[00CF] (04)     unless (VAR_RESULT <= 2) goto 0018;
[00D5] (**)   }
[00D5] (19)   doSentence(STOP);
[00D7] (11)   animateActor(7,255);
[00DA] (91)   animateActor(Var[238],255);
[00DD] (DB)   setBitVar(1440,Var[238],Var[235]);
[00E2] (**) }
[00E2] (89) faceActor(Var[238],7);
[00E5] (00) stopObjectCode();
[00E6] (49) faceActor(7,Var[238]);
[00E9] (4A) chainScript(75);
[00EB] (A0) stopObjectCode();
END

// Script 96
[0000] (40) cutscene();
[0001] (9A) Var[117] = VAR_EGO;
[0004] (27) setState04(344);
[0007] (58) beginOverride();
[0008] (18) goto 01FC;
[000B] (72) loadRoom(0);
[000D] (EE) dummy(EE);
[000E] (14) print(255,"At that very instant in the secret room^");
[0032] (AE) waitForMessage();
[0033] (72) loadRoom(16);
[0035] (03) VAR_RESULT = getActorRoom(2);
[0038] (C8) if (VAR_RESULT == VAR_ROOM) {
[003D] (7B)   VAR_RESULT = getActorWalkBox(2);
[0040] (08)   if (VAR_RESULT != 6) {
[0046] (01)     putActor(2,90,48);
[004A] (11)     animateActor(2,248);
[004D] (**)   }
[004D] (**) }
[004D] (32) setCameraAt(28);
[004F] (19) doSentence(253,341,0,1);
[0056] (19) doSentence(253,347,0,1);
[005D] (2E) delay(120);
[0061] (52) actorFollowCamera(7);
[0063] (D8) printEgo("It's happened!");
[0072] (AE) waitForMessage();
[0073] (11) animateActor(7,249);
[0076] (80) breakHere();
[0077] (80) breakHere();
[0078] (D8) printEgo("IT'S HAPPENED!");
[0087] (AE) waitForMessage();
[0088] (0D) walkActorToActor(12,7,5);
[008C] (2E) delay(60);
[0090] (14) print(12,"WHAT happened?");
[00A0] (AE) waitForMessage();
[00A1] (D8) printEgo("A part of THE DEVICE has been\x01discovered and tested!");
[00CF] (AE) waitForMessage();
[00D0] (14) print(12,"We must recover the artifact at ONCE!");
[00F2] (AE) waitForMessage();
[00F3] (D8) printEgo("Yes, at ONCE!");
[0100] (AE) waitForMessage();
[0101] (19) doSentence(1,329,0,0);
[0108] (4C) waitForSentence();
[0109] (0D) walkActorToActor(12,7,5);
[010D] (14) print(12,"WAIT!");
[0115] (AE) waitForMessage();
[0116] (11) animateActor(7,245);
[0119] (3B) waitForActor(7);
[011B] (14) print(12,"Your disguise!");
[012B] (AE) waitForMessage();
[012C] (D8) printEgo("My disguise?\x03OH! Almost forgot!");
[014A] (AE) waitForMessage();
[014B] (19) doSentence(1,328,0,0);
[0152] (4C) waitForSentence();
[0153] (2E) delay(60);
[0157] (1A) Var[245] = 24;
[015B] (42) startScript(5);
[015D] (D8) printEgo("My hat. \x02");
[0166] (2E) delay(60);
[016A] (D8) printEgo("My nose glasses.");
[017A] (2E) delay(60);
[017E] (19) doSentence(2,328,0,0);
[0185] (80) breakHere();
[0186] (0D) walkActorToActor(7,12,4);
[018A] (3B) waitForActor(7);
[018C] (D8) printEgo("How do I look?");
[0199] (2E) delay(60);
[019D] (11) animateActor(7,247);
[01A0] (2E) delay(30);
[01A4] (11) animateActor(7,244);
[01A7] (2E) delay(30);
[01AB] (11) animateActor(7,246);
[01AE] (2E) delay(30);
[01B2] (11) animateActor(7,245);
[01B5] (2E) delay(60);
[01B9] (14) print(12,"Ugly.\x02");
[01C2] (2E) delay(120);
[01C6] (14) print(12," Just like a human!");
[01D9] (AE) waitForMessage();
[01DA] (D8) printEgo("Good!\x03See ya!");
[01E8] (AE) waitForMessage();
[01E9] (36) walkActorToObject(7,329);
[01ED] (3B) waitForActor(7);
[01EF] (2E) delay(30);
[01F3] (B2) setCameraAt(VAR_CAMERA_POS_X);
[01F5] (2D) putActorInRoom(7,0);
[01F8] (2E) delay(30);
[01FC] (47) clearState08(329);
[01FF] (47) clearState08(155);
[0202] (47) clearState08(328);
[0205] (28) if (!VAR_OVERRIDE) {
[0209] (1C)   startSound(11);
[020B] (2E)   delay(30);
[020F] (**) }
[020F] (19) doSentence(254,347,0,1);
[0216] (05) drawObject(346,255,255);
[021B] (2D) putActorInRoom(12,0);
[021E] (2D) putActorInRoom(7,4);
[0221] (01) putActor(7,22,52);
[0225] (1A) Var[245] = 24;
[0229] (9A) VAR_EGO = Var[117];
[022C] (03) VAR_RESULT = getActorRoom(2);
[022F] (48) if (VAR_RESULT == 16) {
[0235] (52)   actorFollowCamera(2);
[0237] (80)   breakHere();
[0238] (14)   print(2,"Whew!");
[0240] (AE)   waitForMessage();
[0241] (**) }
[0241] (19) doSentence(STOP);
[0243] (C0) endCutscene();
[0244] (6F) if (getState04(55)) {
[0249] (4A)   chainScript(49);
[024B] (**) }
[024B] (A0) stopObjectCode();
END

// Script 97
[0000] (9A) Var[239] = VAR_ROOM;
[0003] (9A) Var[102] = VAR_CAMERA_POS_X;
[0006] (48) if (VAR_ROOM_RESOURCE == 22) {
[000C] (18) } else {
[000F] (48)   unless (Var[239] == 20) goto 0019;
[0015] (**) }
[0015] (1A) Var[239] = 135;
[0019] (48) if (Var[239] == 39) {
[001F] (1A)   Var[239] = 156;
[0023] (**) }
[0023] (48) if (VAR_ROOM_RESOURCE == 40) {
[0029] (1A)   Var[239] = 143;
[002D] (**) }
[002D] (08) if (Var[239] != 32) {
[0033] (08)   if (Var[239] != 30) {
[0039] (08)     if (Var[239] != 151) {
[003F] (18)       goto 0044;
[0042] (**)     }
[0042] (**)   }
[0042] (**) }
[0042] (62) stopScript(0);
[0044] (38) if (Var[239] >= 180) {
[004A] (04)   if (Var[239] <= 205) {
[0050] (62)     stopScript(0);
[0052] (**)   }
[0052] (**) }
[0052] (2E) delay(1800);
[0056] (6F) if (getState04(55)) {
[005B] (2E)   delay(2700);
[005F] (**) }
[005F] (2F) if (!getState04(344)) {
[0064] (18)   goto 0052;
[0067] (**) }
[0067] (48) if (Var[239] == 17) {
[006D] (03)   VAR_RESULT = getActorRoom(8);
[0070] (48)   if (VAR_RESULT == 17) {
[0076] (18)     goto 0052;
[0079] (**)   }
[0079] (**) }
[0079] (68) VAR_RESULT = isScriptRunning(82);
[007C] (A8) if (VAR_RESULT) {
[0080] (18)   goto 0052;
[0083] (**) }
[0083] (62) stopScript(112);
[0085] (68) VAR_RESULT = isScriptRunning(49);
[0088] (A8) if (VAR_RESULT) {
[008C] (48)   if (VAR_EGO == 1) {
[0092] (28)     if (!Var[247]) {
[0096] (80)       breakHere();
[0097] (18)       goto 0067;
[009A] (**)     }
[009A] (**)   }
[009A] (**) }
[009A] (4A) chainScript(98);
[009C] (A0) stopObjectCode();
END

// Script 98
[0000] (40) cutscene();
[0001] (9A) Var[238] = Var[234];
[0004] (68) Var[118] = isScriptRunning(49);
[0007] (48) if (Var[239] == 4) {
[000D] (03)   VAR_RESULT = getActorRoom(7);
[0010] (48)   if (VAR_RESULT == 4) {
[0016] (1A)     Var[118] = 2;
[001A] (1A)     VAR_EGO = 7;
[001E] (7B)     VAR_RESULT = getActorWalkBox(7);
[0021] (08)     if (VAR_RESULT != 3) {
[0027] (7B)       VAR_RESULT = getActorWalkBox(1);
[002A] (48)       if (VAR_RESULT == 3) {
[0030] (18)         goto 0045;
[0033] (**)       }
[0033] (**)     }
[0033] (7B)     VAR_RESULT = getActorWalkBox(1);
[0036] (08)     if (VAR_RESULT != 3) {
[003C] (7B)       VAR_RESULT = getActorWalkBox(7);
[003F] (48)       if (VAR_RESULT == 3) {
[0045] (19)         doSentence(1,157,0,0);
[004C] (4C)         waitForSentence();
[004D] (**)       }
[004D] (**)     }
[004D] (18)     goto 00AB;
[0050] (**)   }
[0050] (**) }
[0050] (0C) loadCostume(28)
[0053] (F2) loadRoom(Var[239]);
[0055] (B2) setCameraAt(Var[102]);
[0057] (13) ActorOps(7,[Costume(0)]);
[005B] (80) breakHere();
[005C] (08) if (Var[239] != 134) {
[0062] (5A)   Var[102] += 6;
[0066] (**) }
[0066] (6D) putActorInRoom(7,Var[239]);
[0069] (41) putActor(7,Var[102],64);
[006D] (52) actorFollowCamera(7);
[006F] (A8) if (Var[118]) {
[0073] (38)   if (VAR_EGO >= 5) {
[0079] (04)     if (VAR_EGO <= 6) {
[007F] (83)       VAR_RESULT = getActorRoom(VAR_EGO);
[0082] (88)       if (VAR_RESULT != Var[239]) {
[0087] (93)         ActorOps(VAR_EGO,[Costume(0)]);
[008B] (ED)         putActorInRoom(VAR_EGO,Var[239]);
[008E] (81)         putActor(VAR_EGO,0,0);
[0092] (**)       }
[0092] (**)     }
[0092] (**)   }
[0092] (1A)   VAR_EGO = 7;
[0096] (**) }
[0096] (42) startScript(5);
[0098] (2E) delay(120);
[009C] (1C) startSound(89);
[009E] (13) ActorOps(7,[Costume(28)]);
[00A2] (11) animateActor(7,250);
[00A5] (42) startScript(5);
[00A7] (2E) delay(120);
[00AB] (03) VAR_RESULT = getActorRoom(1);
[00AE] (C8) if (VAR_RESULT == VAR_ROOM) {
[00B3] (1A)   Var[238] = 1;
[00B7] (18) } else {
[00BA] (03)   VAR_RESULT = getActorRoom(2);
[00BD] (C8)   if (VAR_RESULT == VAR_ROOM) {
[00C2] (1A)     Var[238] = 2;
[00C6] (**)   }
[00C6] (**) }
[00C6] (28) if (!Var[238]) {
[00CA] (11)   animateActor(7,245);
[00CD] (2E)   delay(120);
[00D1] (11)   animateActor(7,244);
[00D4] (2E)   delay(120);
[00D8] (11)   animateActor(7,246);
[00DB] (80)   breakHere();
[00DC] (14)   print(7,"ZLORFIK! I missed him!");
[00F2] (AE)   waitForMessage();
[00F3] (2E)   delay(120);
[00F7] (08)   if (VAR_ROOM != 4) {
[00FD] (1C)     startSound(89);
[00FF] (B2)     setCameraAt(VAR_CAMERA_POS_X);
[0101] (2D)     putActorInRoom(7,4);
[0104] (01)     putActor(7,22,52);
[0108] (2E)     delay(120);
[010C] (**)   }
[010C] (A8) } else if (Var[118]) {
[0113] (0D)   walkActorToActor(7,1,4);
[0117] (3B)   waitForActor(7);
[0119] (09)   faceActor(7,1);
[011C] (00)   stopObjectCode();
[011D] (62)   stopScript(49);
[011F] (D8)   printEgo("Wake up!");
[0128] (AE)   waitForMessage();
[0129] (48)   if (Var[164] == 40) {
[012F] (D8)     printEgo("And give me that disguise! You're not\x01one of us!");
[0159] (29)     setOwnerOf(40,7);
[015D] (1A)     Var[164] = 44;
[0161] (27)     setState04(328);
[0164] (AE)     waitForMessage();
[0165] (**)   }
[0165] (08)   if (VAR_ROOM != 31) {
[016B] (11)     animateActor(1,250);
[016E] (11)     animateActor(1,16);
[0171] (11)     animateActor(1,32);
[0174] (51)     animateActor(1,Var[167]);
[0177] (51)     animateActor(1,Var[164]);
[017A] (2E)     delay(60);
[017E] (11)     animateActor(1,6);
[0181] (11)     animateActor(1,10);
[0184] (9A)     Var[163] = Var[234];
[0187] (18)   } else {
[018A] (11)     animateActor(1,246);
[018D] (**)   }
[018D] (2E)   delay(60);
[0191] (A8)   if (Var[247]) {
[0195] (42)     startScript(130);
[0197] (**)   }
[0197] (14)   print(1,"Oh oh!");
[019F] (AE)   waitForMessage();
[01A0] (3B)   waitForActor(7);
[01A2] (9A)   Var[199] = Var[235];
[01A5] (1A)   Var[43] = 4;
[01A9] (42)   startScript(19);
[01AB] (19)   doSentence(RESET);
[01AD] (AC)   drawSentence();
[01AE] (18) } else {
[01B1] (9A)   VAR_EGO = Var[238];
[01B4] (**) }
[01B4] (C0) endCutscene();
[01B5] (9A) Var[120] = Var[234];
[01B8] (A8) if (Var[118]) {
[01BC] (4A)   chainScript(75);
[01BE] (**) }
[01BE] (A8) if (Var[238]) {
[01C2] (4A)   chainScript(95);
[01C4] (**) }
[01C4] (A0) stopObjectCode();
END

// Script 99
[0000] (40) cutscene();
[0001] (29) setOwnerOf(68,0);
[0005] (58) beginOverride();
[0006] (18) goto 01DE;
[0009] (72) loadRoom(0);
[000B] (67) clearState04(391);
[000E] (EE) dummy(EE);
[000F] (14) print(255,"After sweeping for some time^");
[002B] (AE) waitForMessage();
[002C] (13) ActorOps(10,[Costume(33)]);
[0030] (13) ActorOps(10,[TalkColor(15)]);
[0034] (13) ActorOps(10,[Sound(6)]);
[0038] (2D) putActorInRoom(10,183);
[003B] (01) putActor(10,25,56);
[003F] (11) animateActor(10,249);
[0042] (72) loadRoom(183);
[0044] (2E) delay(18);
[0048] (19) doSentence(253,394,0,1);
[004F] (14) print(10,"AHhhhCHoooo");
[005D] (1E) walkActorTo(10,37,62);
[0061] (2E) delay(30);
[0065] (91) animateActor(VAR_EGO,245);
[0068] (AE) waitForMessage();
[0069] (D8) printEgo("Gesundheit!");
[0076] (11) animateActor(10,244);
[0079] (2E) delay(60);
[007D] (D8) printEgo("You're ALIVE!");
[008B] (AE) waitForMessage();
[008C] (14) print(10,"Ahh \x02");
[0093] (2E) delay(30);
[0097] (1E) walkActorTo(10,25,60);
[009B] (2E) delay(12);
[009F] (14) print(10,"Ahh \x02");
[00A6] (2E) delay(18);
[00AA] (91) animateActor(VAR_EGO,246);
[00AD] (14) print(10,"CHoooooo");
[00B8] (AE) waitForMessage();
[00B9] (14) print(10,"I try to take a nice, peaceful nap^\x01and what happens?");
[00E8] (1E) walkActorTo(10,34,60);
[00EC] (2E) delay(60);
[00F0] (91) animateActor(VAR_EGO,245);
[00F3] (3B) waitForActor(10);
[00F5] (1E) walkActorTo(10,4,62);
[00F9] (2E) delay(60);
[00FD] (91) animateActor(VAR_EGO,246);
[0100] (2E) delay(60);
[0104] (91) animateActor(VAR_EGO,244);
[0107] (3B) waitForActor(10);
[0109] (11) animateActor(10,245);
[010C] (AE) waitForMessage();
[010D] (2E) delay(60);
[0111] (14) print(10,"An inconsiderate alien - and an ugly one\x01at that - sweeps up sand with my HEAD!");
[0154] (2E) delay(180);
[0158] (1E) walkActorTo(10,19,57);
[015C] (2E) delay(30);
[0160] (9E) walkActorTo(VAR_EGO,21,49);
[0164] (BB) waitForActor(VAR_EGO);
[0166] (91) animateActor(VAR_EGO,246);
[0169] (3B) waitForActor(10);
[016B] (11) animateActor(10,247);
[016E] (2E) delay(30);
[0172] (D8) printEgo("I'M SORRY!");
[017D] (1E) walkActorTo(10,20,51);
[0181] (AE) waitForMessage();
[0182] (1E) walkActorTo(10,20,63);
[0186] (3B) waitForActor(10);
[0188] (14) print(10,"The NERVE of some beings!");
[01A0] (AE) waitForMessage();
[01A1] (14) print(10,"I'll go find another planet where I can\x01get some rest.");
[01D1] (11) animateActor(10,247);
[01D4] (2E) delay(180);
[01D8] (1E) walkActorTo(10,0,63);
[01DC] (3B) waitForActor(10);
[01DE] (14) print(255,"");
[01E1] (2D) putActorInRoom(10,0);
[01E4] (C0) endCutscene();
[01E5] (A0) stopObjectCode();
END

// Script 100
[0000] (40) cutscene();
[0001] (2E) delay(120);
[0005] (19) doSentence(253,240,0,1);
[000C] (1C) startSound(25);
[000E] (07) setState08(238);
[0011] (57) setState02(238);
[0014] (2E) delay(60);
[0018] (4D) walkActorToActor(7,VAR_EGO,6);
[001C] (3B) waitForActor(7);
[001E] (33) RoomScroll(20,100)
[0022] (1A) VAR_EGO = 7;
[0026] (D2) actorFollowCamera(VAR_EGO);
[0028] (31) VAR_RESULT = getBitVar(1556,0);
[002D] (28) if (!VAR_RESULT) {
[0031] (11)   animateActor(11,28);
[0034] (**) }
[0034] (31) VAR_RESULT = getBitVar(1505,0);
[0039] (A8) if (VAR_RESULT) {
[003D] (D8)   printEgo("You again? Oh well, come in.");
[0056] (18) } else {
[0059] (A8)   if (Var[54]) {
[005D] (D8)     printEgo("Hello! Here to visit The King? Come in!");
[007F] (18)   } else {
[0082] (D8)     printEgo("A captive!\x03Follow me to The King.");
[00A0] (**)   }
[00A0] (AE)   waitForMessage();
[00A1] (19)   doSentence(250,231,0,1);
[00A8] (1E)   walkActorTo(1,64,56);
[00AC] (3B)   waitForActor(1);
[00AE] (11)   animateActor(1,247);
[00B1] (D8)   printEgo("Oh King, I have brought you a \x02");
[00CB] (A8)   if (Var[54]) {
[00CF] (D8)     printEgo("visitor.");
[00D9] (18)   } else {
[00DC] (D8)     printEgo("captive.");
[00E6] (**)   }
[00E6] (AE)   waitForMessage();
[00E7] (11)   animateActor(11,246);
[00EA] (2E)   delay(120);
[00EE] (31)   VAR_RESULT = getBitVar(1556,0);
[00F3] (28)   if (!VAR_RESULT) {
[00F7] (14)     print(11,"Ooops!");
[0100] (AE)     waitForMessage();
[0101] (11)     animateActor(11,247);
[0104] (2E)     delay(60);
[0108] (11)     animateActor(11,24);
[010B] (5B)     setBitVar(1556,0,Var[235]);
[0110] (2E)     delay(60);
[0114] (18)     goto 00E7;
[0117] (**)   }
[0117] (0C)   loadScript(101)
[011A] (A8)   if (Var[54]) {
[011E] (1E)     walkActorTo(11,64,50);
[0122] (3B)     waitForActor(11);
[0124] (19)     doSentence(254,238,0,1);
[012B] (19)     doSentence(253,234,0,1);
[0132] (2E)     delay(60);
[0136] (1E)     walkActorTo(11,68,50);
[013A] (14)     print(11,"Tuna head! This isn't one of us!");
[0157] (3B)     waitForActor(11);
[0159] (11)     animateActor(11,246);
[015C] (18)   } else {
[015F] (14)     print(11,"Ah see.");
[0168] (**)   }
[0168] (**) }
[0168] (1A) VAR_EGO = 1;
[016C] (AE) waitForMessage();
[016D] (C0) endCutscene();
[016E] (31) VAR_RESULT = getBitVar(1505,0);
[0173] (A8) if (VAR_RESULT) {
[0177] (19)   doSentence(253,235,0,1);
[017E] (19)   doSentence(250,231,0,1);
[0185] (18) } else {
[0188] (4A)   chainScript(101);
[018A] (**) }
[018A] (A0) stopObjectCode();
END

// Script 101
[0000] (9A) Var[199] = Var[234];
[0003] (19) doSentence(253,237,0,1);
[000A] (14) print(11,"Now what shall we do with him?");
[0025] (9A) Var[55] = Var[235];
[0028] (AE) waitForMessage();
[0029] (48) if (Var[55] == 1) {
[002F] (14)   print(11,"Make him clean the meteor slime off\x01our hull?");
[0058] (48) } else if (Var[55] == 2) {
[0061] (14)   print(11,"Make him listen to New Age elevator\x01music?");
[0088] (48) } else if (Var[55] == 3) {
[0091] (14)   print(11,"Make him play Ballblazer with Droid 9?");
[00B4] (48) } else if (Var[55] == 4) {
[00BD] (14)   print(11,"Glue money to him and toss him into a\x01pit full of lawyers?");
[00EF] (18)   /* goto 00F2; */
[00F2] (**) }
[00F2] (2E) delay(240);
[00F6] (AE) waitForMessage();
[00F7] (2E) delay(120);
[00FB] (AE) waitForMessage();
[00FC] (14) print(11,"Naw^");
[0103] (46) Var[55]++;
[0105] (44) unless (Var[55] > 4) goto 0028;
[010B] (2E) delay(300);
[010F] (0C) loadScript(95)
[0112] (19) doSentence(254,237,0,1);
[0119] (11) animateActor(11,255);
[011C] (11) animateActor(11,246);
[011F] (80) breakHere();
[0120] (AE) waitForMessage();
[0121] (14) print(11,"Ah know, let's use the Mindbender.\x03Get him!");
[0149] (AE) waitForMessage();
[014A] (42) startScript(95);
[014C] (2E) delay(60);
[0150] (19) doSentence(250,233,0,1);
[0157] (A0) stopObjectCode();
END

// Script 102
[0000] (53) ActorOps(10,[Name()]);
[0005] (19) doSentence(253,115,0,1);
[000C] (2F) if (!getState04(113)) {
[0011] (2F)   if (!getState04(169)) {
[0016] (0C)     loadCostume(2)
[0019] (0C)     loadCostume(3)
[001C] (**)   }
[001C] (**) }
[001C] (2E) delay(60);
[0020] (2F) if (!getState04(116)) {
[0025] (27)   setState04(116);
[0028] (14)   print(10,"Good morning San Francisco,\x01this is Lori Amore.");
[0054] (AE)   waitForMessage();
[0055] (**) }
[0055] (6F) if (getState04(169)) {
[005A] (27)   setState04(113);
[005D] (**) }
[005D] (14) print(10,"We'll continue with today's top story\x01about the \x02");
[008A] (2F) if (!getState04(113)) {
[008F] (2F)   if (!getState04(169)) {
[0094] (14)     print(10,"Yale coeds' mission to Mars,");
[00AF] (AE)     waitForMessage();
[00B0] (14)     print(10,"after this important message:");
[00CD] (**)   }
[00CD] (18) } else {
[00D0] (14)   print(10,"universal stupidity epidemic,");
[00EE] (AE)   waitForMessage();
[00EF] (1A)   Var[46] = 1;
[00F3] (14)   print(10,"after this^");
[0100] (AE)   waitForMessage();
[0101] (2E)   delay(30);
[0105] (14)   print(10,"uhh^");
[010C] (AE)   waitForMessage();
[010D] (2E)   delay(60);
[0111] (46)   Var[46]++;
[0113] (44)   unless (Var[46] > 2) goto 00F3;
[0119] (14)   print(10,"after this story about the universal\x01stupidity epidemic.");
[014E] (**) }
[014E] (AE) waitForMessage();
[014F] (2F) if (!getState04(113)) {
[0154] (2F)   if (!getState04(169)) {
[0159] (05)     drawObject(114,255,255);
[015E] (13)     ActorOps(10,[Costume(2)]);
[0162] (13)     ActorOps(10,[TalkColor(13)]);
[0166] (2D)     putActorInRoom(10,2);
[0169] (01)     putActor(10,18,48);
[016D] (2E)     delay(60);
[0171] (14)     print(10,"Hello, I'm Annie Larris from The Society\x01for Ancient Wisdom in San Francisco.");
[01B6] (2F)     if (!getState04(114)) {
[01BB] (27)       setState04(114);
[01BE] (40)       cutscene();
[01BF] (58)       beginOverride();
[01C0] (18)       goto 0225;
[01C3] (2E)       delay(60);
[01C7] (1E)       walkActorTo(1,18,60);
[01CB] (3B)       waitForActor(1);
[01CD] (11)       animateActor(1,247);
[01D0] (2E)       delay(180);
[01D4] (36)       walkActorToObject(1,113);
[01D8] (D8)       printEgo("Gosh, she looks VERY familiar.");
[01F4] (2E)       delay(30);
[01F8] (19)       doSentence(253,114,0,1);
[01FF] (AE)       waitForMessage();
[0200] (11)       animateActor(1,246);
[0203] (D8)       printEgo("Where have I seen her before?");
[021D] (AE)       waitForMessage();
[021E] (2E)       delay(30);
[0222] (11)       animateActor(1,247);
[0225] (A8)       if (VAR_OVERRIDE) {
[0229] (14)         print(255,"");
[022C] (**)       }
[022C] (19)       doSentence(254,114,0,1);
[0233] (C0)       endCutscene();
[0234] (**)     }
[0234] (AE)     waitForMessage();
[0235] (2E)     delay(30);
[0239] (14)     print(10,"Our quest for a greater understanding of\x01the past can make a better world today.");
[027F] (AE)     waitForMessage();
[0280] (2E)     delay(30);
[0284] (14)     print(10,"But we need your help! Please deposit\x01artifacts in our 14th Avenue drop slot.");
[02C8] (AE)     waitForMessage();
[02C9] (2E)     delay(30);
[02CD] (14)     print(10,"I promise they will be returned\x01undamaged. Thank you for your time.");
[0309] (AE)     waitForMessage();
[030A] (2E)     delay(60);
[030E] (19)     doSentence(253,115,0,1);
[0315] (2E)     delay(60);
[0319] (05)     drawObject(133,255,255);
[031E] (14)     print(10,"Now from Mars, one of the women who made\x01this dangerous journey, Melissa China.");
[0364] (AE)     waitForMessage();
[0365] (2E)     delay(30);
[0369] (13)     ActorOps(11,[Costume(3)]);
[036D] (53)     ActorOps(11,[Name()]);
[0372] (13)     ActorOps(11,[Color(5, 3)]);
[0377] (13)     ActorOps(11,[Color(9, 11)]);
[037C] (13)     ActorOps(11,[Color(3, 1)]);
[0381] (13)     ActorOps(11,[Color(11, 9)]);
[0386] (13)     ActorOps(11,[TalkColor(3)]);
[038A] (2D)     putActorInRoom(10,0);
[038D] (05)     drawObject(116,255,255);
[0392] (2D)     putActorInRoom(11,2);
[0395] (01)     putActor(11,19,48);
[0399] (11)     animateActor(11,250);
[039C] (11)     animateActor(11,32);
[039F] (2E)     delay(30);
[03A3] (14)     print(11,"Hi there!");
[03AE] (AE)     waitForMessage();
[03AF] (2E)     delay(30);
[03B3] (2D)     putActorInRoom(11,0);
[03B6] (05)     drawObject(115,255,255);
[03BB] (05)     drawObject(133,255,255);
[03C0] (2D)     putActorInRoom(10,2);
[03C3] (01)     putActor(10,16,48);
[03C7] (14)     print(10,"Melissa, why have you and your friend\x01Leslie traveled all the way to Mars?");
[0408] (AE)     waitForMessage();
[0409] (2E)     delay(30);
[040D] (2D)     putActorInRoom(10,0);
[0410] (05)     drawObject(116,255,255);
[0415] (2D)     putActorInRoom(11,2);
[0418] (01)     putActor(11,19,48);
[041C] (11)     animateActor(11,32);
[041F] (14)     print(11,"We had dreams in which an alien told us\x01how to convert our van into a spaceship.\x03We were told to fly to Mars and await\x01further instructions.");
[0496] (AE)     waitForMessage();
[0497] (2E)     delay(18);
[049B] (11)     animateActor(11,244);
[049E] (2E)     delay(60);
[04A2] (11)     animateActor(11,245);
[04A5] (2E)     delay(60);
[04A9] (11)     animateActor(11,246);
[04AC] (2E)     delay(30);
[04B0] (14)     print(11,"So here we are!");
[04BF] (AE)     waitForMessage();
[04C0] (2E)     delay(30);
[04C4] (2D)     putActorInRoom(11,0);
[04C7] (05)     drawObject(115,255,255);
[04CC] (05)     drawObject(133,255,255);
[04D1] (2D)     putActorInRoom(10,2);
[04D4] (01)     putActor(10,16,48);
[04D8] (2E)     delay(30);
[04DC] (14)     print(10,"I see.");
[04E4] (2E)     delay(180);
[04E8] (14)     print(10,"And have you received your, um,\x01`instructions?`");
[0515] (AE)     waitForMessage();
[0516] (2E)     delay(30);
[051A] (2D)     putActorInRoom(10,0);
[051D] (05)     drawObject(116,255,255);
[0522] (2D)     putActorInRoom(11,2);
[0525] (01)     putActor(11,19,48);
[0529] (11)     animateActor(11,32);
[052C] (2E)     delay(30);
[0530] (14)     print(11,"No. We haven't talked to ANY\x01`intelligent beings` since we landed.\x03But we're willing to wait!");
[0583] (AE)     waitForMessage();
[0584] (2E)     delay(30);
[0588] (14)     print(11,"Oops. My helmet says my oxygen level\x01is low. I have to go refill it.");
[05C2] (AE)     waitForMessage();
[05C3] (2E)     delay(30);
[05C7] (2D)     putActorInRoom(11,0);
[05CA] (05)     drawObject(115,255,255);
[05CF] (05)     drawObject(133,255,255);
[05D4] (2D)     putActorInRoom(10,2);
[05D7] (01)     putActor(10,16,48);
[05DB] (2E)     delay(30);
[05DF] (14)     print(10,"OK, Melissa. Thank you, and good luck!");
[0602] (AE)     waitForMessage();
[0603] (47)     clearState08(133);
[0606] (27)     setState04(113);
[0609] (**)   }
[0609] (18) } else {
[060C] (2E)   delay(60);
[0610] (05)   drawObject(120,255,255);
[0615] (14)   print(10,"If you've been feeling increasingly\x01stupid lately, you're not alone!\x03Scientists are baffled by a mysterious\x01buzz that is affecting people worldwide.");
[069A] (AE)   waitForMessage();
[069B] (14)   print(10,"The 60-cycle hum seems to come from\x01every telephone line on the planet.");
[06DA] (AE)   waitForMessage();
[06DB] (2E)   delay(30);
[06DF] (14)   print(10,"A spokesperson for The Phone Company\x01refused to comment.");
[0713] (AE)   waitForMessage();
[0714] (47)   clearState08(120);
[0717] (**) }
[0717] (18) goto 001C;
[071A] (A0) stopObjectCode();
END

// Script 103
[0000] (40) cutscene();
[0001] (62) stopScript(95);
[0003] (11) animateActor(1,255);
[0006] (AE) waitForMessage();
[0007] (48) if (VAR_ACTIVE_OBJECT1 == 41) {
[000D] (0C)   loadSound(113)
[0010] (11)   animateActor(11,246);
[0013] (14)   print(11,"Ooo! Ah think ah feel a song comin' on!");
[0035] (AE)   waitForMessage();
[0036] (2E)   delay(60);
[003A] (1C)   startSound(113);
[003C] (11)   animateActor(11,12);
[003F] (2E)   delay(120);
[0043] (11)   animateActor(11,16);
[0046] (2E)   delay(60);
[004A] (14)   print(11,"Nope. Just an upset stomach.");
[0065] (AE)   waitForMessage();
[0066] (**) }
[0066] (9A) Var[199] = Var[235];
[0069] (68) VAR_RESULT = isScriptRunning(101);
[006C] (28) if (!VAR_RESULT) {
[0070] (18) } else {
[0073] (62)   stopScript(101);
[0075] (14)   print(11,"Ma friend will show ya how to leave.\x01Come back'n visit any time, ya hear?");
[00B4] (AE)   waitForMessage();
[00B5] (19)   doSentence(253,233,0,1);
[00BC] (1A)   VAR_EGO = 7;
[00C0] (0D)   walkActorToActor(7,1,3);
[00C4] (3B)   waitForActor(7);
[00C6] (D8)   printEgo("Come with me.");
[00D3] (1E)   walkActorTo(7,30,50);
[00D7] (2E)   delay(60);
[00DB] (1E)   walkActorTo(1,32,54);
[00DF] (3B)   waitForActor(7);
[00E1] (11)   animateActor(7,246);
[00E4] (3B)   waitForActor(1);
[00E6] (D8)   printEgo("Enter this sequence to return home.");
[0106] (AE)   waitForMessage();
[0107] (1A)   Var[56] = 0;
[010B] (9A)   Var[14] = Var[56];
[010E] (5A)   Var[14] += 113;
[0112] (9A)   Var[66] = Var[14];
[0115] (DA)   Var[66] += Var[56];
[0118] (46)   Var[66]++;
[011A] (44)   if (Var[66] > 235) {
[0120] (3A)     Var[66] -= 235;
[0124] (5A)     Var[66] += 229;
[0128] (**)   }
[0128] (59)   doSentence(9,Var[66],0,0);
[012E] (4C)   waitForSentence();
[012F] (80)   breakHere();
[0130] (28)   unless (!Var[50]) goto 012F;
[0134] (2E)   delay(30);
[0138] (46)   Var[56]++;
[013A] (44)   unless (Var[56] > 3) goto 010B;
[0140] (D8)   printEgo("See ya.");
[0148] (1A)   VAR_EGO = 1;
[014C] (**) }
[014C] (C0) endCutscene();
[014D] (19) doSentence(250,231,0,1);
[0154] (A0) stopObjectCode();
END

// Script 104
[0000] (07) setState08(256);
[0003] (40) cutscene();
[0004] (0C) loadScript(116)
[0007] (0C) loadSound(42)
[000A] (0C) loadSound(105)
[000D] (91) animateActor(Var[52],250);
[0010] (58) beginOverride();
[0011] (18) goto 01D3;
[0014] (2E) delay(60);
[0018] (1A) VAR_EGO = 9;
[001C] (D8) printEgo("You're late! I'll show you to your seat.");
[003F] (AE) waitForMessage();
[0040] (1E) walkActorTo(9,65,54);
[0044] (2E) delay(60);
[0048] (36) walkActorToObject(1,255);
[004C] (3B) waitForActor(9);
[004E] (11) animateActor(9,245);
[0051] (3B) waitForActor(9);
[0053] (D8) printEgo("Here it is.");
[005E] (9A) VAR_EGO = Var[52];
[0061] (19) doSentence(11,255,0,0);
[0068] (4C) waitForSentence();
[0069] (1E) walkActorTo(9,78,54);
[006D] (3B) waitForActor(9);
[006F] (11) animateActor(9,244);
[0072] (3B) waitForActor(9);
[0074] (1A) VAR_EGO = 9;
[0078] (D8) printEgo("Ladies and gentlemen, you've heard this\x01speech before so I'll cut it short.\x03In the likely event of a water landing,");
[00DB] (AE) waitForMessage();
[00DC] (36) walkActorToObject(9,48);
[00E0] (D8) printEgo("your seat cushion may be used as a\x01flotation device.");
[010E] (3B) waitForActor(9);
[0110] (07) setState08(48);
[0113] (2E) delay(60);
[0117] (11) animateActor(9,244);
[011A] (2E) delay(120);
[011E] (AE) waitForMessage();
[011F] (11) animateActor(9,247);
[0122] (47) clearState08(48);
[0125] (2E) delay(60);
[0129] (11) animateActor(9,244);
[012C] (80) breakHere();
[012D] (D8) printEgo("If we lose cabin pressure, oxygen masks\x01should appear. But don't count on it.");
[0170] (AE) waitForMessage();
[0171] (2E) delay(30);
[0175] (D8) printEgo("Enjoy your flight^\x01\x02");
[0189] (2E) delay(120);
[018D] (D8) printEgo("I've a feeling I won't!");
[01A2] (AE) waitForMessage();
[01A3] (52) actorFollowCamera(9);
[01A5] (19) doSentence(2,256,0,0);
[01AC] (4C) waitForSentence();
[01AD] (36) walkActorToObject(9,260);
[01B1] (2E) delay(60);
[01B5] (9A) VAR_EGO = Var[52];
[01B8] (1C) startSound(105);
[01BA] (2E) delay(240);
[01BE] (D2) actorFollowCamera(Var[52]);
[01C0] (1C) startSound(42);
[01C2] (42) startScript(116);
[01C4] (80) breakHere();
[01C5] (10) VAR_RESULT = getObjectOwner(51);
[01C9] (08) unless (VAR_RESULT != 15) goto 01C4;
[01CF] (2E) delay(60);
[01D3] (A8) if (VAR_OVERRIDE) {
[01D7] (14)   print(255,"");
[01DA] (9A)   VAR_EGO = Var[52];
[01DD] (47)   clearState08(48);
[01E0] (68)   VAR_RESULT = isScriptRunning(116);
[01E3] (28)   if (!VAR_RESULT) {
[01E7] (19)     doSentence(253,261,0,1);
[01EE] (**)   }
[01EE] (10)   VAR_RESULT = getObjectOwner(51);
[01F2] (48)   if (VAR_RESULT == 15) {
[01F8] (50)     pickupObject(51);
[01FB] (**)   }
[01FB] (19)   doSentence(2,256,0,1);
[0202] (19)   doSentence(11,255,0,1);
[0209] (3C)   stopSound(105);
[020B] (**) }
[020B] (C0) endCutscene();
[020C] (19) doSentence(253,263,0,1);
[0213] (A0) stopObjectCode();
END

// Script 105
[0000] (40) cutscene();
[0001] (58) beginOverride();
[0002] (18) goto 00AF;
[0005] (91) animateActor(VAR_EGO,255);
[0008] (43) VAR_RESULT = getActorX(9);
[000B] (04) if (VAR_RESULT <= 12) {
[0011] (0F)   if (!getState08(246)) {
[0016] (19)     doSentence(253,251,0,1);
[001D] (**)   }
[001D] (**) }
[001D] (4D) walkActorToActor(9,VAR_EGO,4);
[0021] (74) VAR_RESULT = getDist(9,VAR_EGO);
[0026] (44) if (VAR_RESULT > 20) {
[002C] (14)   print(9,"Hey you!");
[0036] (AE)   waitForMessage();
[0037] (**) }
[0037] (80) breakHere();
[0038] (74) VAR_RESULT = getDist(9,VAR_EGO);
[003D] (78) unless (VAR_RESULT < 15) goto 0037;
[0043] (14) print(9,"You shouldn't be doing that.");
[005E] (3B) waitForActor(9);
[0060] (49) faceActor(9,VAR_EGO);
[0063] (AE) waitForMessage();
[0064] (3B) waitForActor(9);
[0066] (14) print(9,"Get back in your seat right now!");
[0083] (AE) waitForMessage();
[0084] (1E) walkActorTo(9,65,56);
[0088] (2E) delay(30);
[008C] (19) doSentence(11,255,0,0);
[0093] (3B) waitForActor(9);
[0095] (11) animateActor(9,245);
[0098] (4C) waitForSentence();
[0099] (11) animateActor(9,247);
[009C] (AE) waitForMessage();
[009D] (80) breakHere();
[009E] (14) print(9,"Now stay there.");
[00AE] (AE) waitForMessage();
[00AF] (A8) if (VAR_OVERRIDE) {
[00B3] (19)   doSentence(STOP);
[00B5] (19)   doSentence(11,255,0,1);
[00BC] (01)   putActor(9,65,56);
[00C0] (11)   animateActor(9,251);
[00C3] (**) }
[00C3] (C0) endCutscene();
[00C4] (68) VAR_RESULT = isScriptRunning(106);
[00C7] (28) if (!VAR_RESULT) {
[00CB] (19)   doSentence(253,261,0,1);
[00D2] (**) }
[00D2] (A0) stopObjectCode();
END

// Script 106
[0000] (19) doSentence(254,261,0,1);
[0007] (62) stopScript(116);
[0009] (9A) Var[248] = Var[234];
[000C] (36) walkActorToObject(9,246);
[0010] (3B) waitForActor(9);
[0012] (4F) if (getState08(248)) {
[0017] (14)   print(9,"Are you all right in there?");
[0030] (2E)   delay(300);
[0034] (0F)   unless (!getState08(248)) goto 0017;
[0039] (14)   print(9,"Good, now please take your seat.");
[0057] (18) } else {
[005A] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[005D] (44)   if (VAR_RESULT > 20) {
[0063] (18)     goto 008B;
[0066] (**)   }
[0066] (14)   print(9,"Please sit down.");
[0077] (**) }
[0077] (9A) Var[248] = Var[234];
[007A] (60) cursorCommand(15, 2);
[007D] (AE) waitForMessage();
[007E] (19) doSentence(STOP);
[0080] (91) animateActor(VAR_EGO,255);
[0083] (B6) walkActorToObject(VAR_EGO,255);
[0087] (2E) delay(60);
[008B] (0F) if (!getState08(246)) {
[0090] (19)   doSentence(253,246,0,1);
[0097] (**) }
[0097] (4F) if (getState08(242)) {
[009C] (36)   walkActorToObject(9,242);
[00A0] (3B)   waitForActor(9);
[00A2] (43)   VAR_RESULT = getActorX(9);
[00A5] (44)   if (VAR_RESULT > 8) {
[00AB] (18)     goto 008B;
[00AE] (**)   }
[00AE] (47)   clearState08(242);
[00B1] (19)   doSentence(254,242,0,1);
[00B8] (3C)   stopSound(17);
[00BA] (1C)   startSound(42);
[00BC] (**) }
[00BC] (4F) if (getState08(265)) {
[00C1] (43)   VAR_RESULT = getActorX(9);
[00C4] (44)   if (VAR_RESULT > 16) {
[00CA] (18)     goto 0009;
[00CD] (**)   }
[00CD] (14)   print(9,"Oh no! What a mess!");
[00DF] (46)   Var[248]++;
[00E1] (36)   walkActorToObject(9,247);
[00E5] (3B)   waitForActor(9);
[00E7] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[00EA] (78)   if (VAR_RESULT < 20) {
[00F0] (49)     faceActor(9,VAR_EGO);
[00F3] (80)     breakHere();
[00F4] (19)     doSentence(253,251,0,1);
[00FB] (18)     goto 0066;
[00FE] (**)   }
[00FE] (43)   VAR_RESULT = getActorX(9);
[0101] (44)   if (VAR_RESULT > 16) {
[0107] (18)     goto 0009;
[010A] (**)   }
[010A] (19)   doSentence(253,252,0,1);
[0111] (47)   clearState08(265);
[0114] (57)   setState02(265);
[0117] (67)   clearState04(242);
[011A] (10)   VAR_RESULT = getObjectOwner(47);
[011E] (48)   if (VAR_RESULT == 0) {
[0124] (29)     setOwnerOf(47,15);
[0128] (17)     clearState02(47);
[012B] (47)     clearState08(47);
[012E] (**)   }
[012E] (31)   VAR_RESULT = getBitVar(1555,0);
[0133] (28)   if (!VAR_RESULT) {
[0137] (48)     if (Var[52] == 1) {
[013D] (2E)       delay(60);
[0141] (40)       cutscene();
[0142] (5B)       setBitVar(1555,0,Var[235]);
[0147] (58)       beginOverride();
[0148] (18)       goto 018F;
[014B] (AE)       waitForMessage();
[014C] (3B)       waitForActor(1);
[014E] (43)       Var[66] = getActorX(1);
[0151] (5E)       walkActorTo(1,Var[66],56);
[0155] (D8)       printEgo("Hmm^");
[015B] (3B)       waitForActor(1);
[015D] (11)       animateActor(1,246);
[0160] (80)       breakHere();
[0161] (AE)       waitForMessage();
[0162] (D8)       printEgo("SABOTAGED SINK STIFLES\x01SCREECHING STEWARDESS.");
[018E] (AE)       waitForMessage();
[018F] (14)       print(255,"");
[0192] (C0)       endCutscene();
[0193] (**)     }
[0193] (**)   }
[0193] (48)   if (Var[21] == 2) {
[0199] (60)     cursorCommand(247, 1);
[019C] (9A)     VAR_KEYPRESS = Var[234];
[019F] (**)   }
[019F] (44)   if (VAR_MACHINE_SPEED > 40) {
[01A5] (1A)     Var[46] = 26;
[01A9] (18)   } else {
[01AC] (1A)     Var[46] = 34;
[01B0] (**)   }
[01B0] (9A)   Var[103] = Var[235];
[01B3] (2E)   delay(60);
[01B7] (46)   Var[103]++;
[01B9] (C4)   unless (Var[103] > Var[46]) goto 01B3;
[01BE] (**) }
[01BE] (C3) VAR_RESULT = getActorX(Var[52]);
[01C1] (04) if (VAR_RESULT <= 20) {
[01C7] (60)   cursorCommand(15, 2);
[01CA] (**) }
[01CA] (19) doSentence(253,251,0,1);
[01D1] (2E) delay(60);
[01D5] (36) walkActorToObject(9,246);
[01D9] (3B) waitForActor(9);
[01DB] (19) doSentence(253,248,0,1);
[01E2] (9A) Var[248] = Var[234];
[01E5] (48) if (Var[21] == 2) {
[01EB] (60)   cursorCommand(247, 1);
[01EE] (9A)   VAR_KEYPRESS = Var[234];
[01F1] (**) }
[01F1] (80) breakHere();
[01F2] (4F) if (getState08(241)) {
[01F7] (14)   print(9,"What's that awful smell?");
[020F] (18) } else {
[0212] (68)   VAR_RESULT = isScriptRunning(36);
[0215] (28)   if (!VAR_RESULT) {
[0219] (19)     doSentence(253,261,0,1);
[0220] (80)     breakHere();
[0221] (3B)     waitForActor(9);
[0223] (43)     VAR_RESULT = getActorX(9);
[0226] (78)     if (VAR_RESULT < 85) {
[022C] (18)       goto 0219;
[022F] (**)     }
[022F] (19)     doSentence(254,261,0,1);
[0236] (**)   }
[0236] (**) }
[0236] (36) walkActorToObject(9,260);
[023A] (3B) waitForActor(9);
[023C] (43) VAR_RESULT = getActorX(9);
[023F] (78) if (VAR_RESULT < 94) {
[0245] (18)   goto 0236;
[0248] (**) }
[0248] (4F) if (getState08(241)) {
[024D] (14)   print(9,"AIEEEEE! WHO DID THIS!!!");
[0265] (46)   Var[248]++;
[0267] (19)   doSentence(253,265,0,1);
[026E] (2E)   delay(60);
[0272] (19)   doSentence(253,254,0,1);
[0279] (80)   breakHere();
[027A] (80)   breakHere();
[027B] (36)   walkActorToObject(9,262);
[027F] (44)   if (VAR_MACHINE_SPEED > 40) {
[0285] (2E)     delay(10800);
[0289] (18)   } else {
[028C] (2E)     delay(18000);
[0290] (**)   }
[0290] (19)   doSentence(254,265,0,1);
[0297] (5B)   setBitVar(1575,0,Var[234]);
[029C] (9A)   Var[248] = Var[234];
[029F] (47)   clearState08(241);
[02A2] (57)   setState02(241);
[02A5] (18) } else {
[02A8] (68)   VAR_RESULT = isScriptRunning(36);
[02AB] (A8)   if (VAR_RESULT) {
[02AF] (19)     doSentence(253,253,0,1);
[02B6] (**)   }
[02B6] (2E)   delay(60);
[02BA] (0F)   if (!getState08(262)) {
[02BF] (80)     breakHere();
[02C0] (0F)     unless (!getState08(248)) goto 02BF;
[02C5] (19)     doSentence(253,254,0,1);
[02CC] (40)     cutscene();
[02CD] (2E)     delay(60);
[02D1] (19)     doSentence(14,262,0,1);
[02D8] (58)     beginOverride();
[02D9] (18)     goto 0350;
[02DC] (2E)     delay(120);
[02E0] (14)     print(9,"Who left this egg in here?");
[02F8] (2E)     delay(60);
[02FC] (19)     doSentence(253,256,0,1);
[0303] (91)     animateActor(VAR_EGO,255);
[0306] (4D)     walkActorToActor(9,VAR_EGO,4);
[030A] (3B)     waitForActor(9);
[030C] (49)     faceActor(9,VAR_EGO);
[030F] (89)     faceActor(VAR_EGO,9);
[0312] (00)     stopObjectCode();
[0313] (80)     breakHere();
[0314] (14)     print(9,"Is this your egg? Don't let me catch you\x01using the microwave again!");
[034F] (AE)     waitForMessage();
[0350] (14)     print(255,"");
[0353] (C0)     endCutscene();
[0354] (**)   }
[0354] (19)   doSentence(253,256,0,1);
[035B] (AE)   waitForMessage();
[035C] (**) }
[035C] (19) doSentence(253,261,0,1);
[0363] (A0) stopObjectCode();
END

// Script 107
[0000] (07) setState08(89);
[0003] (A8) if (Var[240]) {
[0007] (78)   if (Var[240] < 6) {
[000D] (13)     ActorOps(0,[TalkColor(5)]);
[0011] (14)     print(255,"Zachary darling, this is your mother.\x01Why don't you ever call me?");
[004B] (AE)     waitForMessage();
[004C] (**)   }
[004C] (**) }
[004C] (48) if (Var[240] == 0) {
[0052] (13)   ActorOps(0,[TalkColor(14)]);
[0056] (14)   print(255,"This is The Phone Company calling.\x01Your telephone has been disconnected.\x03Please stop by our office to settle your\x01bill. See ya.");
[00C6] (48) } else if (Var[240] == 1) {
[00CF] (14)   print(255,"Have you seen that girl on TV looking\x01for artifacts?\x03She looks like your type, Zachary, and\x01lives so close to you!\x03Why don't you ever bring home nice girls\x01like her?");
[015D] (48) } else if (Var[240] == 2) {
[0166] (14)   print(255,"So, did you see those cute girls on Mars\x01with their darling little spaceship?\x03You're a smart boy, Zachary, why don't\x01YOU build a spaceship?");
[01DF] (48) } else if (Var[240] == 3) {
[01E8] (14)   print(255,"I just loved your `Vegetarian Vampire`\x01article! Did you REALLY get to meet one?\x03My good friend Jayne was just telling me\x01about a Golfing Guru in Katmandu!\x03You should do a story about him!");
[0288] (48) } else if (Var[240] == 4) {
[0291] (14)   print(255,"My friend Jayne told me that Space\x01Aliens are running The Phone Company!\x03She said they wear big cowboy hats\x01and don't have knees^or was that noses?\x03I know you're doing a story on them.\x01Be careful! They could be DANGEROUS!");
[034E] (48) } else if (Var[240] == 5) {
[0357] (14)   print(255,"My friend Jayne's daughter Sally is home\x01from school, and would like to meet you!\x03She's a nice, polite girl, not like that\x01tramp Sandy you brought home last month!");
[03E3] (48) } else if (Var[240] == 6) {
[03EC] (13)   ActorOps(0,[TalkColor(7)]);
[03F0] (14)   print(255,"Zak, this is your boss calling.\x01How's the squirrel story coming?\x03I'd better see some great copy on my\x01desk soon, or you're out of a job!");
[0464] (48) } else if (Var[240] == 7) {
[046D] (13)   ActorOps(0,[TalkColor(1)]);
[0471] (14)   print(255,"This is Ed calling for Sandy. Are we on\x01for the Monster Truck Show tomorrow?\x03I've got the Edsel all polished up and\x01ready to go! I'll pick you up at 7:30.\x03See ya!");
[04F9] (18)   /* goto 04FC; */
[04FC] (**) }
[04FC] (A8) if (Var[240]) {
[0500] (42)   startScript(134);
[0502] (78)   if (Var[240] < 6) {
[0508] (AE)     waitForMessage();
[0509] (14)     print(255,"Bye dear. Don't forget to call!");
[0526] (AE)     waitForMessage();
[0527] (**)   }
[0527] (**) }
[0527] (19) doSentence(253,88,0,1);
[052E] (A0) stopObjectCode();
END

// Script 108
[0000] (72) loadRoom(0);
[0002] (60) cursorCommand(4, 0);
[0005] (62) stopScript(111);
[0007] (62) stopScript(109);
[0009] (62) stopScript(127);
[000B] (0C) unlockSound(81)
[000E] (0C) unlockSound(95)
[0011] (0C) unlockScript(109)
[0014] (0C) unlockCostume(31)
[0017] (0C) unlockScript(111)
[001A] (3D) setActorElevation(10,0);
[001D] (2D) putActorInRoom(10,0);
[0020] (7A) VerbOps(Delete(1));
[0023] (7A) VerbOps(Delete(2));
[0026] (7A) VerbOps(Delete(3));
[0029] (0C) loadScript(2)
[002C] (0C) lockScript(2)
[002F] (0C) loadScript(4)
[0032] (0C) lockScript(4)
[0035] (0C) lockSound(10)
[0038] (0C) lockSound(11)
[003B] (0C) loadSound(10)
[003E] (0C) loadSound(11)
[0041] (0C) lockScript(59)
[0044] (0C) lockScript(19)
[0047] (0C) loadSound(84)
[004A] (0C) lockSound(84)
[004D] (0C) loadSound(89)
[0050] (0C) lockSound(89)
[0053] (0C) loadSound(27)
[0056] (0C) lockSound(27)
[0059] (0C) loadSound(29)
[005C] (0C) lockSound(29)
[005F] (0C) loadSound(78)
[0062] (0C) lockSound(78)
[0065] (0C) loadSound(19)
[0068] (0C) lockSound(19)
[006B] (0C) loadSound(38)
[006E] (0C) lockSound(38)
[0071] (0C) loadSound(44)
[0074] (0C) lockSound(44)
[0077] (0C) loadSound(25)
[007A] (0C) lockSound(25)
[007D] (0C) loadSound(2)
[0080] (0C) lockSound(2)
[0083] (0C) loadScript(131)
[0086] (0C) lockScript(131)
[0089] (0C) loadScript(3)
[008C] (0C) lockScript(3)
[008F] (0C) loadScript(20)
[0092] (0C) lockScript(20)
[0095] (0C) loadScript(10)
[0098] (0C) lockScript(10)
[009B] (0C) loadScript(11)
[009E] (0C) lockScript(11)
[00A1] (2D) putActorInRoom(2,6);
[00A4] (01) putActor(2,20,16);
[00A8] (2D) putActorInRoom(3,26);
[00AB] (01) putActor(3,0,0);
[00AF] (2D) putActorInRoom(4,26);
[00B2] (01) putActor(4,0,0);
[00B6] (2D) putActorInRoom(7,4);
[00B9] (01) putActor(7,22,52);
[00BD] (11) animateActor(7,250);
[00C0] (2D) putActorInRoom(8,18);
[00C3] (01) putActor(8,10,60);
[00C7] (11) animateActor(8,248);
[00CA] (13) ActorOps(8,[Costume(26)]);
[00CE] (13) ActorOps(8,[TalkColor(7)]);
[00D2] (13) ActorOps(8,[Sound(6)]);
[00D6] (13) ActorOps(9,[Costume(11)]);
[00DA] (53) ActorOps(9,[Sound(Var[234])]);
[00DE] (53) ActorOps(1,[Name("Zak")]);
[00E6] (53) ActorOps(2,[Name("Annie")]);
[00F0] (53) ActorOps(3,[Name("Melissa")]);
[00FC] (53) ActorOps(4,[Name("Leslie")]);
[0107] (53) ActorOps(7,[Name("representative")]);
[011A] (13) ActorOps(1,[Costume(1)]);
[011E] (13) ActorOps(2,[Costume(2)]);
[0122] (13) ActorOps(3,[Costume(0)]);
[0126] (13) ActorOps(4,[Costume(0)]);
[012A] (13) ActorOps(7,[Costume(28)]);
[012E] (1A) Var[196] = 14;
[0132] (13) ActorOps(9,[Color(5, 1)]);
[0137] (13) ActorOps(8,[Color(9, 1)]);
[013C] (13) ActorOps(8,[Color(3, 0)]);
[0141] (13) ActorOps(2,[TalkColor(13)]);
[0145] (13) ActorOps(3,[TalkColor(3)]);
[0149] (13) ActorOps(4,[TalkColor(13)]);
[014D] (13) ActorOps(9,[TalkColor(9)]);
[0151] (13) ActorOps(7,[TalkColor(14)]);
[0155] (13) ActorOps(6,[TalkColor(10)]);
[0159] (13) ActorOps(2,[Sound(6)]);
[015D] (13) ActorOps(3,[Sound(6)]);
[0161] (13) ActorOps(4,[Sound(6)]);
[0165] (13) ActorOps(7,[Sound(6)]);
[0169] (1A) Var[245] = 24;
[016D] (26) setVarRange(Var[171],13,[0,1,2,3,4,5,6,7,36,9,9,8,8]);
[017D] (26) setVarRange(VAR_ACTOR_RANGE_MIN,2,[1,4]);
[0182] (26) setVarRange(Var[42],2,[1,4]);
[0187] (CC) PseudoRoom(33,61,62,63,54);
[018E] (CC) PseudoRoom(14,1,2,64,65);
[0195] (CC) PseudoRoom(40,3,4);
[019A] (CC) PseudoRoom(44,5,6);
[019F] (CC) PseudoRoom(21,55,7);
[01A4] (CC) PseudoRoom(43,8,9,10);
[01AA] (CC) PseudoRoom(22,11,12);
[01AF] (CC) PseudoRoom(27,56,57);
[01B4] (CC) PseudoRoom(35,66,67);
[01B9] (CC) PseudoRoom(8,13,14,15,16,17);
[01C1] (CC) PseudoRoom(9,18,19,20,21);
[01C8] (CC) PseudoRoom(38,22,23);
[01CD] (CC) PseudoRoom(15,24,60);
[01D2] (CC) PseudoRoom(29,25,26);
[01D7] (CC) PseudoRoom(24,27,58);
[01DC] (CC) PseudoRoom(53,28,29,30,31,32,33,34,35,36,37,38,39);
[01EB] (CC) PseudoRoom(28,52,53);
[01F0] (CC) PseudoRoom(37,40,41,42,43,44,45,46,47);
[01FB] (CC) PseudoRoom(23,79,80,81,82,83,84,85,86,87,88,89,90,91,92,78,59);
[020E] (CC) PseudoRoom(36,70,71,72,73,74,75,76,77,68,69);
[021B] (A6) setVarRange(Var[61],5,[0,12250,5405,1138,342]);
[0228] (26) setVarRange(Var[161],2,[57,57]);
[022D] (26) setVarRange(Var[205],3,[60,243,240]);
[0233] (1A) Var[254] = 30;
[0237] (1A) Var[158] = 49;
[023B] (1A) Var[14] = 1;
[023F] (5A) Var[14] += 78;
[0243] (0A) Var[Var[14]] = 662;
[0247] (1A) Var[14] = 1;
[024B] (5A) Var[14] += 154;
[024F] (0A) Var[Var[14]] = 145;
[0253] (1A) Var[14] = 1;
[0257] (5A) Var[14] += 81;
[025B] (0A) Var[Var[14]] = 260;
[025F] (5B) setBitVar(1559,0,Var[235]);
[0264] (42) startScript(9);
[0266] (42) startScript(19);
[0268] (A8) if (Var[122]) {
[026C] (14)   print(255,"");
[026F] (60)   cursorCommand(4, 0);
[0272] (2D)   putActorInRoom(1,1);
[0275] (01)   putActor(1,21,56);
[0279] (11)   animateActor(1,250);
[027C] (07)   setState08(90);
[027F] (68)   VAR_RESULT = isScriptRunning(122);
[0282] (A8)   if (VAR_RESULT) {
[0286] (60)     cursorCommand(247, 1);
[0289] (4A)     chainScript(7);
[028B] (**)   }
[028B] (D2)   actorFollowCamera(VAR_EGO);
[028D] (18) } else {
[0290] (2D)   putActorInRoom(1,1);
[0293] (01)   putActor(1,9,52);
[0297] (D2)   actorFollowCamera(VAR_EGO);
[0299] (11)   animateActor(1,250);
[029C] (2E)   delay(60);
[02A0] (D8)   printEgo("WOW! What a dream!\x03I should make a drawing of that map I\x01saw.");
[02D4] (2E)   delay(60);
[02D8] (19)   doSentence(1,90,0,0);
[02DF] (4C)   waitForSentence();
[02E0] (1E)   walkActorTo(1,21,56);
[02E4] (3B)   waitForActor(1);
[02E6] (**) }
[02E6] (19) doSentence(RESET);
[02E8] (AC) drawSentence();
[02E9] (60) cursorCommand(247, 1);
[02EC] (A0) stopObjectCode();
END

// Script 109
[0000] (43) Var[47] = getActorX(1);
[0003] (23) Var[48] = getActorY(1);
[0006] (7E) walkActorTo(10,Var[47],Var[48]);
[000A] (80) breakHere();
[000B] (80) breakHere();
[000C] (80) breakHere();
[000D] (80) breakHere();
[000E] (18) goto 0000;
[0011] (A0) stopObjectCode();
END

// Script 110
[0000] (16) Var[242] = getRandomNr(7);
[0003] (28) if (!Var[242]) {
[0007] (46)   Var[242]++;
[0009] (**) }
[0009] (16) Var[241] = getRandomNr(30);
[000C] (28) if (!Var[241]) {
[0010] (46)   Var[241]++;
[0012] (**) }
[0012] (16) Var[243] = getRandomNr(7);
[0015] (28) if (!Var[243]) {
[0019] (46)   Var[243]++;
[001B] (**) }
[001B] (9A) Var[66] = Var[242];
[001E] (9A) Var[67] = Var[243];
[0021] (5A) Var[66] += 23;
[0025] (C6) Var[67]--;
[0027] (28) unless (!Var[67]) goto 0021;
[002B] (DA) Var[66] += Var[241];
[002E] (DA) Var[66] += Var[241];
[0031] (38) if (Var[242] >= 3) {
[0037] (3A)   Var[66] -= 2;
[003B] (**) }
[003B] (DA) Var[66] += Var[241];
[003E] (78) if (Var[241] < 5) {
[0044] (5A)   Var[66] += 3;
[0048] (**) }
[0048] (5A) Var[66] += 12;
[004C] (3A) Var[66] -= 9;
[0050] (78) unless (Var[66] < 12) goto 004C;
[0056] (9A) Var[141] = Var[66];
[0059] (DA) Var[66] += Var[242];
[005C] (DA) Var[66] += Var[241];
[005F] (5A) Var[66] += 19;
[0063] (44) if (Var[241] > 7) {
[0069] (3A)   Var[66] -= 3;
[006D] (**) }
[006D] (5A) Var[66] += 7;
[0071] (3A) Var[66] -= 7;
[0075] (78) unless (Var[66] < 8) goto 0071;
[007B] (5A) Var[66] += 19;
[007F] (84) if (Var[66] <= Var[141]) {
[0084] (DA)   Var[66] += Var[141];
[0087] (**) }
[0087] (3A) Var[66] -= 12;
[008B] (04) unless (Var[66] <= 11) goto 0087;
[0091] (9A) Var[142] = Var[66];
[0094] (DA) Var[66] += Var[242];
[0097] (DA) Var[66] += Var[242];
[009A] (DA) Var[66] += Var[241];
[009D] (5A) Var[66] += 14;
[00A1] (78) if (Var[241] < 10) {
[00A7] (DA)   Var[66] += Var[241];
[00AA] (**) }
[00AA] (3A) Var[66] -= 5;
[00AE] (78) unless (Var[66] < 10) goto 00AA;
[00B4] (88) if (Var[66] != Var[142]) {
[00B9] (DA)   Var[66] += Var[141];
[00BC] (**) }
[00BC] (5A) Var[66] += 23;
[00C0] (3A) Var[66] -= 12;
[00C4] (78) unless (Var[66] < 12) goto 00C0;
[00CA] (9A) Var[140] = Var[66];
[00CD] (DA) Var[66] += Var[242];
[00D0] (DA) Var[66] += Var[242];
[00D3] (DA) Var[66] += Var[242];
[00D6] (DA) Var[66] += Var[241];
[00D9] (5A) Var[66] += 11;
[00DD] (44) if (Var[242] > 7) {
[00E3] (5A)   Var[66] += 6;
[00E7] (**) }
[00E7] (3A) Var[66] -= 8;
[00EB] (78) unless (Var[66] < 17) goto 00E7;
[00F1] (C4) if (Var[66] > Var[140]) {
[00F6] (DA)   Var[66] += Var[142];
[00F9] (**) }
[00F9] (5A) Var[66] += 14;
[00FD] (3A) Var[66] -= 12;
[0101] (04) unless (Var[66] <= 11) goto 00FD;
[0107] (9A) Var[139] = Var[66];
[010A] (A0) stopObjectCode();
END

// Script 111
[0000] (80) breakHere();
[0001] (A8) unless (Var[60]) goto 0000;
[0005] (9A) Var[60] = Var[234];
[0008] (80) breakHere();
[0009] (60) cursorCommand(132, 0);
[000C] (7A) VerbOps(New-1(9,19,1,0,"Created and designed by"));
[002A] (7A) VerbOps(New-2(9,20,2,0,"David Fox, Matthew Kane,"));
[0049] (7A) VerbOps(New-3(5,21,3,0,"David Spangler, and Ron Gilbert"));
[006F] (60) cursorCommand(0, 0);
[0072] (80) breakHere();
[0073] (A8) unless (Var[60]) goto 0072;
[0077] (9A) Var[60] = Var[234];
[007A] (7A) VerbOps(Delete(3));
[007D] (7A) VerbOps(New-1(7,19,1,0,"Scripted and programmed by"));
[009E] (7A) VerbOps(New-2(7,20,2,0,"David Fox and Matthew Kane"));
[00BF] (60) cursorCommand(0, 0);
[00C2] (80) breakHere();
[00C3] (A8) unless (Var[60]) goto 00C2;
[00C7] (9A) Var[60] = Var[234];
[00CA] (7A) VerbOps(New-1(10,19,1,0,"Art and Animation by"));
[00E5] (7A) VerbOps(New-2(4,20,2,0,"Mark J. Ferrari, Basilio Amaro,"));
[010B] (7A) VerbOps(New-3(4,21,3,0,"Martin Cameron, and Gary Winnick"));
[0132] (60) cursorCommand(0, 0);
[0135] (80) breakHere();
[0136] (A8) unless (Var[60]) goto 0135;
[013A] (9A) Var[60] = Var[234];
[013D] (7A) VerbOps(New-1(7,19,1,0,"Music and Sound Effects by"));
[015E] (7A) VerbOps(New-2(0,20,2,0,"Matthew Kane, Dave Hayes, & Dave Warhol"));
[018C] (7A) VerbOps(Delete(3));
[018F] (60) cursorCommand(0, 0);
[0192] (80) breakHere();
[0193] (A8) unless (Var[60]) goto 0192;
[0197] (9A) Var[60] = Var[234];
[019A] (80) breakHere();
[019B] (7A) VerbOps(Delete(1));
[019E] (7A) VerbOps(New-2(5,20,2,0,"IBM Version by Aric Wilmunder"));
[01C2] (60) cursorCommand(0, 0);
[01C5] (80) breakHere();
[01C6] (A8) unless (Var[60]) goto 01C5;
[01CA] (9A) Var[60] = Var[234];
[01CD] (7A) VerbOps(Delete(1));
[01D0] (7A) VerbOps(New-2(5,20,2,0,"Project Directed by David Fox"));
[01F4] (60) cursorCommand(0, 0);
[01F7] (80) breakHere();
[01F8] (A8) unless (Var[60]) goto 01F7;
[01FC] (9A) Var[60] = Var[234];
[01FF] (7A) VerbOps(Delete(2));
[0202] (60) cursorCommand(0, 0);
[0205] (60) cursorCommand(4, 0);
[0208] (A0) stopObjectCode();
END

// Script 112
[0000] (68) VAR_RESULT = isScriptRunning(124);
[0003] (A8) if (VAR_RESULT) {
[0007] (62)   stopScript(0);
[0009] (**) }
[0009] (48) if (VAR_ACTIVE_OBJECT1 == 59) {
[000F] (1A)   Var[66] = 24;
[0013] (44)   if (VAR_MACHINE_SPEED > 40) {
[0019] (1A)     Var[66] = 16;
[001D] (**)   }
[001D] (9A)   Var[246] = Var[235];
[0020] (2E)   delay(15);
[0024] (48)   if (VAR_ROOM == 18) {
[002A] (18)   } else {
[002D] (46)     Var[246]++;
[002F] (C4)     unless (Var[246] > Var[66]) goto 0020;
[0034] (**)   }
[0034] (**) }
[0034] (62) stopScript(118);
[0036] (2E) delay(60);
[003A] (83) Var[66] = getActorRoom(VAR_EGO);
[003D] (03) VAR_RESULT = getActorRoom(8);
[0040] (C8) if (VAR_RESULT == Var[66]) {
[0045] (48)   if (VAR_ROOM == 18) {
[004B] (03)     VAR_RESULT = getActorRoom(1);
[004E] (48)     if (VAR_RESULT == 18) {
[0054] (18)       goto 009B;
[0057] (**)     }
[0057] (36)     walkActorToObject(8,363);
[005B] (3B)     waitForActor(8);
[005D] (18)     goto 0075;
[0060] (**)   }
[0060] (18)   goto 009B;
[0063] (18) } else {
[0066] (48)   if (VAR_ROOM == 17) {
[006C] (18)   } else {
[006F] (48)     unless (VAR_ROOM == 18) goto 009B;
[0075] (**)   }
[0075] (42)   startScript(117);
[0077] (80)   breakHere();
[0078] (03)   VAR_RESULT = getActorRoom(1);
[007B] (48)   if (VAR_RESULT == 18) {
[0081] (2D)     putActorInRoom(8,18);
[0084] (01)     putActor(8,2,54);
[0088] (11)     animateActor(8,249);
[008B] (18)   } else {
[008E] (2D)     putActorInRoom(8,17);
[0091] (01)     putActor(8,17,56);
[0095] (52)     actorFollowCamera(1);
[0097] (11)     animateActor(8,250);
[009A] (**)   }
[009A] (80)   breakHere();
[009B] (**) }
[009B] (03) VAR_RESULT = getActorRoom(1);
[009E] (C8) if (VAR_RESULT == VAR_ROOM) {
[00A3] (31)   VAR_RESULT = getBitVar(1541,0);
[00A8] (A8)   if (VAR_RESULT) {
[00AC] (14)     print(8,"There's my prisoner!");
[00C1] (18)   } else {
[00C4] (14)     print(8,"Stop, thief!");
[00D2] (**)   }
[00D2] (**) }
[00D2] (80) breakHere();
[00D3] (03) Var[66] = getActorRoom(1);
[00D6] (03) VAR_RESULT = getActorRoom(8);
[00D9] (88) if (VAR_RESULT != Var[66]) {
[00DE] (48)   if (Var[66] == 18) {
[00E4] (2E)     delay(120);
[00E8] (03)     VAR_RESULT = getActorRoom(1);
[00EB] (48)     if (VAR_RESULT == 18) {
[00F1] (42)       startScript(117);
[00F3] (80)       breakHere();
[00F4] (2D)       putActorInRoom(8,18);
[00F7] (01)       putActor(8,2,54);
[00FB] (11)       animateActor(8,249);
[00FE] (**)     }
[00FE] (18)     goto 00D2;
[0101] (**)   }
[0101] (48)   if (Var[66] == 19) {
[0107] (18)     goto 00D2;
[010A] (**)   }
[010A] (48)   if (Var[66] == 17) {
[0110] (18)     goto 003A;
[0113] (**)   }
[0113] (2D)   putActorInRoom(8,18);
[0116] (01)   putActor(8,15,60);
[011A] (62)   stopScript(0);
[011C] (**) }
[011C] (88) if (VAR_ROOM != Var[66]) {
[0121] (43)   Var[67] = getActorX(1);
[0124] (3A)   Var[67] -= 2;
[0128] (23)   Var[61] = getActorY(1);
[012B] (6D)   putActorInRoom(8,Var[66]);
[012E] (61)   putActor(8,Var[67],Var[61]);
[0132] (18) } else {
[0135] (0D)   walkActorToActor(8,1,0);
[0139] (80)   breakHere();
[013A] (34)   VAR_RESULT = getDist(8,1);
[0140] (04)   if (VAR_RESULT <= 2) {
[0146] (18)   } else {
[0149] (80)     breakHere();
[014A] (34)     VAR_RESULT = getDist(8,1);
[0150] (04)     unless (VAR_RESULT <= 2) goto 00D2;
[0156] (**)   }
[0156] (11)   animateActor(1,255);
[0159] (11)   animateActor(8,255);
[015C] (**) }
[015C] (09) faceActor(8,1);
[015F] (00) stopObjectCode();
[0160] (09) faceActor(1,8);
[0163] (00) stopObjectCode();
[0164] (4A) chainScript(113);
[0166] (A0) stopObjectCode();
END

// Script 113
[0000] (40) cutscene();
[0001] (1A) VAR_EGO = 8;
[0005] (9A) Var[45] = Var[234];
[0008] (4F) if (getState08(59)) {
[000D] (10)   VAR_RESULT = getObjectOwner(59);
[0011] (48)   if (VAR_RESULT == 2) {
[0017] (D8)     printEgo("Where's the flag?");
[0028] (AE)     waitForMessage();
[0029] (**)   }
[0029] (**) }
[0029] (29) setOwnerOf(82,14);
[002D] (9A) Var[48] = Var[234];
[0030] (9A) Var[49] = Var[234];
[0033] (2F) if (!getState04(169)) {
[0038] (2F)   if (!getState04(372)) {
[003D] (46)     Var[48]++;
[003F] (18)   } else {
[0042] (46)     Var[49]++;
[0044] (**)   }
[0044] (18) } else {
[0047] (5B)   setBitVar(1541,0,Var[235]);
[004C] (1A)   Var[66] = 14;
[0050] (08)   if (Var[66] != 49) {
[0056] (08)     if (Var[66] != 61) {
[005C] (90)       VAR_RESULT = getObjectOwner(Var[66]);
[005F] (48)       if (VAR_RESULT == 1) {
[0065] (A9)         setOwnerOf(Var[66],8);
[0068] (08)         if (Var[66] != 59) {
[006E] (46)           Var[45]++;
[0070] (27)           setState04(368);
[0073] (**)         }
[0073] (48)         if (Var[66] == 50) {
[0079] (19)           doSentence(7,50,0,1);
[0080] (**)         }
[0080] (**)       }
[0080] (**)     }
[0080] (**)   }
[0080] (46)   Var[66]++;
[0082] (44)   unless (Var[66] > 81) goto 0050;
[0088] (**) }
[0088] (58) beginOverride();
[0089] (18) goto 02A1;
[008C] (08) if (VAR_ROOM != 18) {
[0092] (D8)   printEgo("You're coming with me!");
[00A7] (AE)   waitForMessage();
[00A8] (2D)   putActorInRoom(1,18);
[00AB] (01)   putActor(1,15,48);
[00AF] (11)   animateActor(1,248);
[00B2] (2D)   putActorInRoom(8,18);
[00B5] (01)   putActor(8,5,48);
[00B9] (D2)   actorFollowCamera(VAR_EGO);
[00BB] (2E)   delay(60);
[00BF] (18) } else {
[00C2] (D8)   printEgo("Don't move!");
[00CE] (AE)   waitForMessage();
[00CF] (**) }
[00CF] (09) faceActor(1,8);
[00D2] (00) stopObjectCode();
[00D3] (0F) if (!getState08(366)) {
[00D8] (10)   VAR_RESULT = getObjectOwner(60);
[00DC] (48)   if (VAR_RESULT == 1) {
[00E2] (D8)     printEgo("I'll take that key!");
[00F4] (AE)     waitForMessage();
[00F5] (18)   } else {
[00F8] (1E)     walkActorTo(8,5,48);
[00FC] (3B)     waitForActor(8);
[00FE] (11)     animateActor(8,247);
[0101] (80)     breakHere();
[0102] (0F)     if (!getState08(60)) {
[0107] (19)       doSentence(14,60,0,0);
[010E] (4C)       waitForSentence();
[010F] (18)     } else {
[0112] (D8)       printEgo("Hmm. I'll have to use my spare.");
[012D] (80)       breakHere();
[012E] (80)       breakHere();
[012F] (**)     }
[012F] (**)   }
[012F] (19)   doSentence(11,60,370,0);
[0136] (4C)   waitForSentence();
[0137] (**) }
[0137] (1E) walkActorTo(8,16,50);
[013B] (3B) waitForActor(8);
[013D] (09) faceActor(8,1);
[0140] (00) stopObjectCode();
[0141] (3B) waitForActor(8);
[0143] (D8) printEgo("OK, get in and make yourself at home,\x01you're in for a LONG\x02");
[0175] (6F) if (getState04(372)) {
[017A] (D8)   printEgo("ER\x02");
[017F] (**) }
[017F] (D8) printEgo(" stay.");
[0187] (2E) delay(120);
[018B] (36) walkActorToObject(1,372);
[018F] (80) breakHere();
[0190] (11) animateActor(8,245);
[0193] (3B) waitForActor(1);
[0195] (9A) Var[66] = Var[48];
[0198] (DA) Var[66] += Var[49];
[019B] (A8) if (Var[66]) {
[019F] (19)   doSentence(2,366,0,0);
[01A6] (80)   breakHere();
[01A7] (0F)   unless (!getState08(366)) goto 01A6;
[01AC] (**) }
[01AC] (A8) if (Var[49]) {
[01B0] (18) } else {
[01B3] (28)   if (!Var[48]) {
[01B7] (A8)     if (Var[45]) {
[01BB] (D8)       printEgo("I'll take your belongings.");
[01D4] (0D)       walkActorToActor(8,1,1);
[01D8] (3B)       waitForActor(8);
[01DA] (11)       animateActor(8,247);
[01DD] (2E)       delay(30);
[01E1] (6F)       if (getState04(39)) {
[01E6] (67)         clearState04(39);
[01E9] (13)         ActorOps(1,[Costume(1)]);
[01ED] (1A)         Var[172] = 1;
[01F1] (1A)         Var[176] = 5;
[01F5] (1A)         Var[180] = 9;
[01F9] (**)       }
[01F9] (1A)       Var[167] = 52;
[01FD] (1A)       Var[164] = 44;
[0201] (42)       startScript(5);
[0203] (**)     }
[0203] (19)     doSentence(2,366,0,0);
[020A] (80)     breakHere();
[020B] (0F)     unless (!getState08(366)) goto 020A;
[0210] (10)     VAR_RESULT = getObjectOwner(49);
[0214] (48)     if (VAR_RESULT == 1) {
[021A] (AE)       waitForMessage();
[021B] (D8)       printEgo("I won't take your lighter in case you\x01want to smoke.");
[0248] (AE)       waitForMessage();
[0249] (**)     }
[0249] (**)   }
[0249] (A8)   if (Var[45]) {
[024D] (19)     doSentence(1,368,0,0);
[0254] (4C)     waitForSentence();
[0255] (2E)     delay(60);
[0259] (19)     doSentence(2,368,0,0);
[0260] (4C)     waitForSentence();
[0261] (**)   }
[0261] (10)   VAR_RESULT = getObjectOwner(60);
[0265] (48)   if (VAR_RESULT == 8) {
[026B] (19)     doSentence(253,366,0,1);
[0272] (80)     breakHere();
[0273] (A8)     unless (Var[46]) goto 0272;
[0277] (**)   }
[0277] (10)   VAR_RESULT = getObjectOwner(59);
[027B] (48)   if (VAR_RESULT == 8) {
[0281] (19)     doSentence(253,369,0,1);
[0288] (80)     breakHere();
[0289] (A8)     unless (Var[46]) goto 0288;
[028D] (**)   }
[028D] (4F)   if (getState08(363)) {
[0292] (19)     doSentence(2,363,0,0);
[0299] (4C)     waitForSentence();
[029A] (**)   }
[029A] (19)   doSentence(253,367,0,1);
[02A1] (A8)   if (VAR_OVERRIDE) {
[02A5] (19)     doSentence(STOP);
[02A7] (2D)     putActorInRoom(1,18);
[02AA] (01)     putActor(1,22,40);
[02AE] (2D)     putActorInRoom(8,18);
[02B1] (01)     putActor(8,10,60);
[02B5] (11)     animateActor(1,250);
[02B8] (11)     animateActor(8,248);
[02BB] (72)     loadRoom(18);
[02BD] (1A)     Var[167] = 52;
[02C1] (1A)     Var[164] = 44;
[02C5] (6F)     if (getState04(39)) {
[02CA] (67)       clearState04(39);
[02CD] (13)       ActorOps(1,[Costume(1)]);
[02D1] (1A)       Var[172] = 1;
[02D5] (1A)       Var[176] = 5;
[02D9] (1A)       Var[180] = 9;
[02DD] (**)     }
[02DD] (42)     startScript(5);
[02DF] (10)     VAR_RESULT = getObjectOwner(59);
[02E3] (48)     if (VAR_RESULT == 8) {
[02E9] (1A)       Var[50] = 59;
[02ED] (19)       doSentence(253,365,0,1);
[02F4] (**)     }
[02F4] (10)     VAR_RESULT = getObjectOwner(60);
[02F8] (48)     if (VAR_RESULT == 8) {
[02FE] (1A)       Var[50] = 60;
[0302] (19)       doSentence(253,365,0,1);
[0309] (**)     }
[0309] (19)     doSentence(2,368,0,1);
[0310] (19)     doSentence(2,363,0,1);
[0317] (19)     doSentence(2,366,0,1);
[031E] (**)   }
[031E] (A8)   if (Var[48]) {
[0322] (10)     VAR_RESULT = getObjectOwner(59);
[0326] (48)     if (VAR_RESULT == 1) {
[032C] (1A)       Var[50] = 59;
[0330] (19)       doSentence(253,365,0,1);
[0337] (**)     }
[0337] (58)     beginOverride();
[0338] (18)     goto 0354;
[033B] (9A)     Var[48] = Var[234];
[033E] (72)     loadRoom(0);
[0340] (EE)     dummy(EE);
[0341] (14)     print(255,"A LONG time later^");
[0353] (AE)     waitForMessage();
[0354] (72)     loadRoom(18);
[0356] (58)     beginOverride();
[0357] (18)     goto 039E;
[035A] (07)     setState08(60);
[035D] (07)     setState08(366);
[0360] (30)     setBoxFlags(5,0);
[0363] (0E)     putActorAtObject(8,366);
[0367] (2E)     delay(60);
[036B] (D8)     printEgo("OK, you can go. But don't EVER steal\x01our flag again!");
[0398] (36)     walkActorToObject(8,60);
[039C] (3B)     waitForActor(8);
[039E] (47)     clearState08(60);
[03A1] (19)     doSentence(253,367,0,1);
[03A8] (**)   }
[03A8] (**) }
[03A8] (27) setState04(372);
[03AB] (1A) VAR_EGO = 1;
[03AF] (42) startScript(19);
[03B1] (C0) endCutscene();
[03B2] (A8) if (Var[49]) {
[03B6] (1A)   Var[166] = 4;
[03BA] (4A)   chainScript(78);
[03BC] (**) }
[03BC] (A0) stopObjectCode();
END

// Script 114
[0000] (68) VAR_RESULT = isScriptRunning(112);
[0003] (28) if (!VAR_RESULT) {
[0007] (2E)   delay(180);
[000B] (**) }
[000B] (62) stopScript(112);
[000D] (80) breakHere();
[000E] (03) VAR_RESULT = getActorRoom(7);
[0011] (08) unless (VAR_RESULT != 17) goto 000D;
[0017] (62) stopScript(118);
[0019] (40) cutscene();
[001A] (9A) Var[117] = VAR_EGO;
[001D] (72) loadRoom(17);
[001F] (52) actorFollowCamera(10);
[0021] (1E) walkActorTo(10,100,58);
[0025] (3B) waitForActor(10);
[0027] (11) animateActor(10,244);
[002A] (14) print(10,"FIRE! FIRE!");
[0037] (AE) waitForMessage();
[0038] (1A) VAR_EGO = 8;
[003C] (52) actorFollowCamera(8);
[003E] (2E) delay(60);
[0042] (11) animateActor(8,255);
[0045] (11) animateActor(8,246);
[0048] (3B) waitForActor(8);
[004A] (D8) printEgo("A fire?");
[0052] (AE) waitForMessage();
[0053] (48) if (VAR_ROOM == 18) {
[0059] (19)   doSentence(1,363,0,0);
[0060] (4C)   waitForSentence();
[0061] (80)   breakHere();
[0062] (7C)   VAR_RESULT = isSoundRunning(10);
[0065] (28)   unless (!VAR_RESULT) goto 0061;
[0069] (83)   VAR_RESULT = getActorRoom(Var[117]);
[006C] (48)   if (VAR_RESULT == 17) {
[0072] (2D)     putActorInRoom(8,17);
[0075] (01)     putActor(8,17,56);
[0079] (D2)     actorFollowCamera(VAR_EGO);
[007B] (18)   } else {
[007E] (2D)     putActorInRoom(8,17);
[0081] (01)     putActor(8,110,56);
[0085] (11)     animateActor(8,251);
[0088] (**)   }
[0088] (18) } else {
[008B] (1E)   walkActorTo(10,80,11);
[008F] (3B)   waitForActor(10);
[0091] (11)   animateActor(10,246);
[0094] (**) }
[0094] (9A) VAR_EGO = Var[117];
[0097] (C0) endCutscene();
[0098] (4A) chainScript(124);
[009A] (A0) stopObjectCode();
END

// Script 115
[0000] (9A) Var[14] = VAR_EGO;
[0003] (5A) Var[14] += 154;
[0007] (C8) if (Var[14] == Var[234]) {
[000C] (D8)   printEgo("I need a ticket first.");
[0020] (F6)   walkActorToObject(VAR_EGO,Var[60]);
[0023] (C8) } else if (Var[14] == VAR_ROOM) {
[002B] (9A)   Var[14] = VAR_EGO;
[002E] (5A)   Var[14] += 78;
[0032] (9A)   Var[66] = Var[14];
[0035] (48)   if (Var[66] == 668) {
[003B] (48)     if (VAR_EGO == 1) {
[0041] (78)       if (Var[62] < 3000) {
[0047] (18)         goto 0052;
[004A] (**)       }
[004A] (**)     }
[004A] (2F)     if (!getState04(55)) {
[004F] (18)     } else {
[0052] (31)       VAR_RESULT = getBitVar(1510,0);
[0057] (A8)       unless (VAR_RESULT) goto 0078;
[005B] (**)     }
[005B] (D8)     printEgo("The plane's not here now.");
[0072] (9E)     walkActorTo(VAR_EGO,10,60);
[0076] (62)     stopScript(0);
[0078] (**)   }
[0078] (48)   if (VAR_EGO == 1) {
[007E] (29)     setOwnerOf(82,14);
[0082] (18)   } else {
[0085] (29)     setOwnerOf(83,14);
[0089] (**)   }
[0089] (9A)   Var[14] = VAR_EGO;
[008C] (5A)   Var[14] += 154;
[0090] (8A)   Var[Var[14]] = Var[234];
[0093] (48)   if (Var[66] == 668) {
[0099] (5B)     setBitVar(1510,0,Var[235]);
[009E] (67)     clearState04(219);
[00A1] (24)     loadRoomWithEgo(604,131,255,255);
[00A7] (18)   } else {
[00AA] (1A)     Var[52] = 1;
[00AE] (48)     if (VAR_EGO == 1) {
[00B4] (1A)       Var[52] = 2;
[00B8] (**)     }
[00B8] (67)     clearState04(219);
[00BB] (83)     VAR_RESULT = getActorRoom(Var[52]);
[00BE] (48)     if (VAR_RESULT == 11) {
[00C4] (42)       startScript(120);
[00C6] (ED)       putActorInRoom(Var[52],Var[44]);
[00C9] (81)       putActor(Var[52],10,56);
[00CD] (**)     }
[00CD] (10)     VAR_RESULT = getObjectOwner(49);
[00D1] (08)     if (VAR_RESULT != 15) {
[00D7] (10)       VAR_RESULT = getObjectOwner(50);
[00DB] (08)       if (VAR_RESULT != 15) {
[00E1] (40)         cutscene();
[00E2] (72)         loadRoom(0);
[00E4] (58)         beginOverride();
[00E5] (18)         goto 0131;
[00E8] (EE)         dummy(EE);
[00E9] (16)         VAR_RESULT = getRandomNr(11);
[00EC] (28)         if (!VAR_RESULT) {
[00F0] (14)           print(255,"A completely miserable flight later^");
[0113] (18)         } else {
[0116] (14)           print(255,"An enjoyable flight later^");
[0130] (**)         }
[0130] (AE)         waitForMessage();
[0131] (9A)         Var[52] = VAR_EGO;
[0134] (42)         startScript(120);
[0136] (ED)         putActorInRoom(VAR_EGO,Var[44]);
[0139] (81)         putActor(VAR_EGO,0,60);
[013D] (91)         animateActor(VAR_EGO,249);
[0140] (C0)         endCutscene();
[0141] (9E)         walkActorTo(VAR_EGO,8,60);
[0145] (62)         stopScript(0);
[0147] (**)       }
[0147] (**)     }
[0147] (AD)     putActorInRoom(VAR_EGO,11);
[014A] (81)     putActor(VAR_EGO,87,52);
[014E] (D2)     actorFollowCamera(VAR_EGO);
[0150] (**)   }
[0150] (18) } else {
[0153] (D8)   printEgo("Whoops! My ticket's from a different\x01airport.");
[017D] (F6)   walkActorToObject(VAR_EGO,Var[60]);
[0180] (**) }
[0180] (A0) stopObjectCode();
END

// Script 116
[0000] (1A) Var[56] = 65;
[0004] (5E) walkActorTo(9,Var[56],54);
[0008] (3B) waitForActor(9);
[000A] (11) animateActor(9,247);
[000D] (80) breakHere();
[000E] (2E) delay(30);
[0012] (48) if (Var[56] == 65) {
[0018] (10)   VAR_RESULT = getObjectOwner(51);
[001C] (08)   if (VAR_RESULT != 15) {
[0022] (18)     goto 0046;
[0025] (**)   }
[0025] (50)   pickupObject(51);
[0028] (**) }
[0028] (43) VAR_RESULT = getActorX(9);
[002B] (88) if (VAR_RESULT != Var[56]) {
[0030] (18)   goto 0004;
[0033] (**) }
[0033] (14) print(9,"Here's your meal.");
[0045] (AE) waitForMessage();
[0046] (3A) Var[56] -= 11;
[004A] (78) unless (Var[56] < 21) goto 0004;
[0050] (19) doSentence(253,261,0,1);
[0057] (A0) stopObjectCode();
END

// Script 117
[0000] (0F) if (!getState08(350)) {
[0005] (07)   setState08(350);
[0008] (07)   setState08(363);
[000B] (48)   if (VAR_ROOM == 18) {
[0011] (1C)     startSound(10);
[0013] (**)   }
[0013] (48)   if (VAR_ROOM == 17) {
[0019] (1C)     startSound(10);
[001B] (**)   }
[001B] (**) }
[001B] (A0) stopObjectCode();
END

// Script 118
[0000] (67) clearState04(359);
[0003] (19) doSentence(254,361,0,1);
[000A] (19) doSentence(254,360,0,1);
[0011] (47) clearState08(360);
[0014] (47) clearState08(361);
[0017] (3C) stopSound(80);
[0019] (2E) delay(120);
[001D] (14) print(8,"Finally!");
[0028] (31) VAR_RESULT = getBitVar(1541,0);
[002D] (A8) if (VAR_RESULT) {
[0031] (31)   VAR_RESULT = getBitVar(1475,0);
[0036] (28)   if (!VAR_RESULT) {
[003A] (03)     Var[66] = getActorRoom(1);
[003D] (48)     if (Var[66] == 17) {
[0043] (4A)       chainScript(112);
[0045] (**)     }
[0045] (48)     if (Var[66] == 18) {
[004B] (4A)       chainScript(112);
[004D] (**)     }
[004D] (**)   }
[004D] (**) }
[004D] (48) if (VAR_ROOM == 17) {
[0053] (36)   walkActorToObject(8,350);
[0057] (3B)   waitForActor(8);
[0059] (**) }
[0059] (42) startScript(117);
[005B] (80) breakHere();
[005C] (2D) putActorInRoom(8,18);
[005F] (01) putActor(8,2,54);
[0063] (19) doSentence(253,367,0,1);
[006A] (A0) stopObjectCode();
END

// Script 119
[0000] (48) if (VAR_ACTIVE_VERB == 14) {
[0006] (D0)   pickupObject(VAR_ACTIVE_OBJECT1);
[0008] (08)   if (VAR_EGO != 2) {
[000E] (2F)     if (!getState04(169)) {
[0013] (6F)       if (getState04(114)) {
[0018] (D8)         printEgo("This looks like an artifact!");
[0032] (18)       } else {
[0035] (D8)         printEgo("I wonder who would know what this is.");
[0055] (**)       }
[0055] (**)     }
[0055] (62)     stopScript(0);
[0057] (**)   }
[0057] (**) }
[0057] (40) cutscene();
[0058] (14) print(2,"Hmm^");
[005F] (2E) delay(60);
[0063] (14) print(2,"This \x06\x09 is \x02");
[0070] (08) if (VAR_ACTIVE_OBJECT1 != 79) {
[0076] (14)   print(2,"part of the\x01device!");
[008A] (18) } else {
[008D] (14)   print(2,"VERY old.");
[0098] (**) }
[0098] (AE) waitForMessage();
[0099] (48) if (VAR_ACTIVE_VERB == 14) {
[009F] (03)   VAR_RESULT = getActorRoom(1);
[00A2] (88)   if (VAR_RESULT != VAR_ROOM) {
[00A7] (18)     goto 02B0;
[00AA] (**)   }
[00AA] (0D)   walkActorToActor(2,1,4);
[00AE] (3B)   waitForActor(2);
[00B0] (09)   faceActor(2,1);
[00B3] (00)   stopObjectCode();
[00B4] (09)   faceActor(1,2);
[00B7] (00)   stopObjectCode();
[00B8] (3B)   waitForActor(1);
[00BA] (**) }
[00BA] (48) if (VAR_ACTIVE_OBJECT1 == 55) {
[00C0] (18)   goto 00CC;
[00C3] (48) } else if (VAR_ACTIVE_OBJECT1 == 81) {
[00CC] (EF)   if (getState04(VAR_ACTIVE_OBJECT1)) {
[00D0] (14)     print(2,"And you already know how to use its\x01power.");
[00F6] (18)   } else {
[00F9] (14)     print(2,"It also has tremendous power if you're\x01trained to use it.");
[012C] (**)   }
[012C] (48) } else if (VAR_ACTIVE_OBJECT1 == 79) {
[0135] (14)   print(2,"There's some writing on it!");
[014F] (48) } else if (VAR_ACTIVE_OBJECT1 == 78) {
[0158] (14)   print(2,"It's the section that generates the\x01device's power.");
[0188] (48) } else if (VAR_ACTIVE_OBJECT1 == 33) {
[0191] (10)   Var[66] = getObjectOwner(56);
[0195] (48)   if (Var[66] == 15) {
[019B] (14)     print(2,"We must acquire its other half.");
[01B8] (18)   } else {
[01BB] (A8)     if (Var[66]) {
[01BF] (18)       goto 0204;
[01C2] (**)     }
[01C2] (18)     goto 01D6;
[01C5] (**)   }
[01C5] (48) } else if (VAR_ACTIVE_OBJECT1 == 56) {
[01CE] (10)   VAR_RESULT = getObjectOwner(33);
[01D2] (28)   if (!VAR_RESULT) {
[01D6] (14)     print(2,"We lost its other half! Our mission\x01has failed!");
[0201] (18)   } else {
[0204] (14)     print(2,"We can't use it until the two halves are\x01fused together!");
[0236] (**)   }
[0236] (48) } else if (VAR_ACTIVE_OBJECT1 == 80) {
[023F] (14)   print(2,"It will hold the crystals when we build\x01the device");
[026C] (48) } else if (VAR_ACTIVE_OBJECT1 == 58) {
[0275] (14)   print(2,"It is the Master Crystal which will\x01focus the device's energy.");
[02AD] (18)   /* goto 02B0; */
[02B0] (**) }
[02B0] (C0) endCutscene();
[02B1] (A0) stopObjectCode();
END

// Script 120
[0000] (07) setState08(262);
[0003] (57) setState02(241);
[0006] (47) clearState08(241);
[0009] (07) setState08(263);
[000C] (47) clearState08(774);
[000F] (47) clearState08(775);
[0012] (47) clearState08(242);
[0015] (67) clearState04(242);
[0018] (47) clearState08(265);
[001B] (57) setState02(265);
[001E] (10) VAR_RESULT = getObjectOwner(47);
[0022] (48) if (VAR_RESULT == 0) {
[0028] (29)   setOwnerOf(47,15);
[002C] (17)   clearState02(47);
[002F] (47)   clearState08(47);
[0032] (**) }
[0032] (BD) setActorElevation(Var[52],0);
[0035] (DB) setBitVar(1440,Var[52],Var[234]);
[003A] (1A) Var[45] = 190;
[003E] (9A) Var[14] = Var[52];
[0041] (5A) Var[14] += 78;
[0045] (9A) Var[66] = Var[14];
[0048] (48) if (Var[66] == 664) {
[004E] (26)   setVarRange(Var[44],2,[146,217]);
[0053] (**) }
[0053] (48) if (Var[66] == 666) {
[0059] (26)   setVarRange(Var[44],2,[148,217]);
[005E] (**) }
[005E] (48) if (Var[66] == 665) {
[0064] (26)   setVarRange(Var[44],2,[147,217]);
[0069] (**) }
[0069] (48) if (Var[66] == 667) {
[006F] (26)   setVarRange(Var[44],2,[149,217]);
[0074] (**) }
[0074] (48) if (Var[66] == 659) {
[007A] (1A)   Var[44] = 141;
[007E] (**) }
[007E] (48) if (Var[66] == 660) {
[0084] (1A)   Var[44] = 142;
[0088] (**) }
[0088] (48) if (Var[66] == 661) {
[008E] (1A)   Var[44] = 143;
[0092] (**) }
[0092] (48) if (Var[66] == 663) {
[0098] (1A)   Var[44] = 145;
[009C] (**) }
[009C] (48) if (Var[66] == 662) {
[00A2] (1A)   Var[44] = 144;
[00A6] (**) }
[00A6] (DB) setBitVar(1475,Var[52],Var[234]);
[00AB] (04) if (Var[44] <= 145) {
[00B1] (5B)   setBitVar(1569,0,Var[235]);
[00B6] (**) }
[00B6] (A0) stopObjectCode();
END

// Script 121
[0000] (70) lights(11,0,0);
[0004] (4F) if (getState08(242)) {
[0009] (1C)   startSound(17);
[000B] (19)   doSentence(253,242,0,1);
[0012] (**) }
[0012] (26) setVarRange(Var[42],2,[9,9]);
[0017] (9A) Var[52] = VAR_EGO;
[001A] (53) ActorOps(9,[Name("stewardess")]);
[0029] (D3) ActorOps(Var[52],[Sound(Var[234])]);
[002D] (19) doSentence(253,247,0,1);
[0034] (17) clearState02(246);
[0037] (17) clearState02(247);
[003A] (B1) VAR_RESULT = getBitVar(1475,VAR_EGO);
[003F] (28) if (!VAR_RESULT) {
[0043] (2D)   putActorInRoom(9,11);
[0046] (01)   putActor(9,91,54);
[004A] (11)   animateActor(9,248);
[004D] (DB)   setBitVar(1475,VAR_EGO,Var[235]);
[0052] (47)   clearState08(48);
[0055] (47)   clearState08(260);
[0058] (47)   clearState08(261);
[005B] (33)   RoomScroll(33,80)
[005F] (47)   clearState08(246);
[0062] (47)   clearState08(248);
[0065] (30)   setBoxFlags(4,128);
[0068] (9A)   Var[248] = Var[234];
[006B] (5B)   setBitVar(1575,0,Var[234]);
[0070] (1A)   Var[101] = 249;
[0074] (9A)   Var[47] = Var[234];
[0077] (C7)   clearState08(Var[101]);
[0079] (97)   clearState02(Var[101]);
[007B] (9A)   Var[14] = Var[47];
[007E] (5A)   Var[14] += 84;
[0082] (8A)   Var[Var[14]] = Var[234];
[0085] (9A)   Var[14] = Var[47];
[0088] (5A)   Var[14] += 186;
[008C] (8A)   Var[Var[14]] = Var[234];
[008F] (46)   Var[47]++;
[0091] (46)   Var[101]++;
[0093] (44)   unless (Var[101] > 254) goto 0077;
[0099] (9A)   Var[101] = Var[234];
[009C] (1A)   Var[47] = 257;
[00A0] (C7)   clearState08(Var[47]);
[00A2] (D7)   setState02(Var[47]);
[00A4] (46)   Var[47]++;
[00A6] (44)   unless (Var[47] > 259) goto 00A0;
[00AC] (47)   clearState08(50);
[00AF] (57)   setState02(50);
[00B2] (1A)   Var[49] = 257;
[00B6] (16)   Var[48] = getRandomNr(4);
[00B9] (9A)   Var[14] = Var[48];
[00BC] (5A)   Var[14] += 186;
[00C0] (A8)   if (Var[14]) {
[00C4] (18)     goto 00B6;
[00C7] (**)   }
[00C7] (9A)   Var[14] = Var[48];
[00CA] (5A)   Var[14] += 186;
[00CE] (8A)   Var[Var[14]] = Var[49];
[00D1] (46)   Var[49]++;
[00D3] (44)   unless (Var[49] > 259) goto 00B6;
[00D9] (9A)   Var[47] = Var[234];
[00DC] (9A)   Var[14] = Var[47];
[00DF] (5A)   Var[14] += 186;
[00E3] (28)   if (!Var[14]) {
[00E7] (9A)     Var[14] = Var[47];
[00EA] (5A)     Var[14] += 186;
[00EE] (8A)     Var[Var[14]] = Var[235];
[00F1] (**)   }
[00F1] (46)   Var[47]++;
[00F3] (44)   unless (Var[47] > 5) goto 00DC;
[00F9] (10)   VAR_RESULT = getObjectOwner(50);
[00FD] (48)   if (VAR_RESULT == 15) {
[0103] (1A)     Var[14] = 5;
[0107] (5A)     Var[14] += 186;
[010B] (0A)     Var[Var[14]] = 50;
[010F] (**)   }
[010F] (10)   VAR_RESULT = getObjectOwner(51);
[0113] (48)   if (VAR_RESULT == 15) {
[0119] (4A)     chainScript(104);
[011B] (**)   }
[011B] (47)   clearState08(256);
[011E] (19)   doSentence(11,255,0,1);
[0125] (D2)   actorFollowCamera(VAR_EGO);
[0127] (19)   doSentence(253,261,0,1);
[012E] (18) } else {
[0131] (1A)   Var[47] = 257;
[0135] (C7)   clearState08(Var[47]);
[0137] (46)   Var[47]++;
[0139] (44)   unless (Var[47] > 259) goto 0135;
[013F] (47)   clearState08(50);
[0142] (1A)   Var[50] = 18;
[0146] (1A)   Var[47] = 249;
[014A] (CF)   if (getState08(Var[47])) {
[014E] (9A)     Var[51] = Var[47];
[0151] (3A)     Var[51] -= 249;
[0155] (9A)     Var[14] = Var[51];
[0158] (5A)     Var[14] += 84;
[015C] (44)     if (Var[14] > 1) {
[0162] (9A)       Var[14] = Var[51];
[0165] (5A)       Var[14] += 84;
[0169] (C5)       drawObject(Var[14],Var[50],4);
[016D] (**)     }
[016D] (**)   }
[016D] (5A)   Var[50] += 11;
[0171] (46)   Var[47]++;
[0173] (44)   unless (Var[47] > 254) goto 014A;
[0179] (68)   VAR_RESULT = isScriptRunning(106);
[017C] (28)   if (!VAR_RESULT) {
[0180] (19)     doSentence(253,261,0,1);
[0187] (18)   } else {
[018A] (31)     VAR_RESULT = getBitVar(1575,0);
[018F] (A8)     if (VAR_RESULT) {
[0193] (19)       doSentence(253,265,0,1);
[019A] (**)     }
[019A] (**)   }
[019A] (0F)   if (!getState08(263)) {
[019F] (19)     doSentence(11,255,0,1);
[01A6] (**)   }
[01A6] (**) }
[01A6] (30) setBoxFlags(1,64);
[01A9] (4F) if (getState08(246)) {
[01AE] (30)   setBoxFlags(1,0);
[01B1] (**) }
[01B1] (19) doSentence(253,263,0,1);
[01B8] (A0) stopObjectCode();
END

// Script 122
[0000] (80) breakHere();
[0001] (48) if (VAR_KEYPRESS == 5) {
[0007] (62)   stopScript(1);
[0009] (3C)   stopSound(81);
[000B] (20)   stopMusic();
[000C] (72)   loadRoom(0);
[000E] (9A)   Var[122] = Var[235];
[0011] (42)   startScript(108);
[0013] (**) }
[0013] (18) goto 0000;
[0016] (A0) stopObjectCode();
END

// Script 123
[0000] (9A) Var[117] = Var[234];
[0003] (11) animateActor(1,249);
[0006] (80) breakHere();
[0007] (11) animateActor(1,251);
[000A] (80) breakHere();
[000B] (11) animateActor(1,248);
[000E] (80) breakHere();
[000F] (11) animateActor(1,250);
[0012] (80) breakHere();
[0013] (46) Var[117]++;
[0015] (18) goto 0003;
[0018] (A0) stopObjectCode();
END

// Script 124
[0000] (07) setState08(359);
[0003] (19) doSentence(250,361,0,1);
[000A] (2E) delay(18000);
[000E] (4A) chainScript(118);
[0010] (A0) stopObjectCode();
END

// Script 125
[0000] (48) if (VAR_ACTIVE_OBJECT1 == 72) {
[0006] (48)   if (VAR_ACTIVE_VERB == 12) {
[000C] (8F)     if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0010] (D8)       printEgo("I can't see the label.");
[0024] (18)     } else {
[0027] (D8)       printEgo("Razor and the Scummettes Greatest Hit,\x01`Inda Glop Oda Krell`");
[005D] (**)     }
[005D] (**)   }
[005D] (**) }
[005D] (A0) stopObjectCode();
END

// Script 126
[0000] (2E) delay(600);
[0004] (40) cutscene();
[0005] (9A) Var[117] = VAR_EGO;
[0008] (5B) setBitVar(1546,0,Var[235]);
[000D] (58) beginOverride();
[000E] (18) goto 01B4;
[0011] (72) loadRoom(0);
[0013] (EE) dummy(EE);
[0014] (14) print(255,"Meanwhile, in a secret room^");
[002F] (AE) waitForMessage();
[0030] (72) loadRoom(16);
[0032] (32) setCameraAt(57);
[0034] (19) doSentence(253,341,0,1);
[003B] (0E) putActorAtObject(7,344);
[003F] (01) putActor(12,30,52);
[0043] (80) breakHere();
[0044] (0D) walkActorToActor(12,7,4);
[0048] (3B) waitForActor(12);
[004A] (14) print(12,"Ahem.");
[0052] (AE) waitForMessage();
[0053] (11) animateActor(7,244);
[0056] (2E) delay(30);
[005A] (14) print(12,"I just talked to The King. He said the\x01machine is working perfectly.");
[0096] (AE) waitForMessage();
[0097] (D8) printEgo("Yeah^ working perfectly.");
[00AF] (AE) waitForMessage();
[00B0] (14) print(12,"He said in just a few more days all\x01earthlings will be stupider than we are.");
[00F1] (AE) waitForMessage();
[00F2] (D8) printEgo("Yeah^ stupider than we are.");
[010B] (AE) waitForMessage();
[010C] (11) animateActor(12,246);
[010F] (2E) delay(120);
[0113] (11) animateActor(12,245);
[0116] (80) breakHere();
[0117] (14) print(12,"I think you've been hanging around the\x01machine too long.");
[014A] (AE) waitForMessage();
[014B] (D8) printEgo("Yeah^ too long.");
[015A] (AE) waitForMessage();
[015B] (1E) walkActorTo(12,34,52);
[015F] (80) breakHere();
[0160] (14) print(12,"I think I need a new partner.");
[017A] (3B) waitForActor(12);
[017C] (11) animateActor(7,246);
[017F] (2E) delay(60);
[0183] (D8) printEgo("Yeah^ new partner.");
[0195] (2E) delay(120);
[0199] (1C) startSound(11);
[019B] (AE) waitForMessage();
[019C] (2E) delay(60);
[01A0] (11) animateActor(7,244);
[01A3] (80) breakHere();
[01A4] (D8) printEgo("See ya.");
[01AC] (AE) waitForMessage();
[01AD] (11) animateActor(7,247);
[01B0] (2E) delay(120);
[01B4] (14) print(255,"");
[01B7] (19) doSentence(STOP);
[01B9] (2D) putActorInRoom(12,0);
[01BC] (2D) putActorInRoom(7,4);
[01BF] (01) putActor(7,22,52);
[01C3] (1A) Var[245] = 24;
[01C7] (9A) VAR_EGO = Var[117];
[01CA] (C0) endCutscene();
[01CB] (A0) stopObjectCode();
END

// Script 127
[0000] (72) loadRoom(0);
[0002] (13) ActorOps(10,[Costume(32)]);
[0006] (13) ActorOps(10,[TalkColor(7)]);
[000A] (2D) putActorInRoom(10,46);
[000D] (01) putActor(10,58,32);
[0011] (2D) putActorInRoom(1,46);
[0014] (01) putActor(1,55,58);
[0018] (11) animateActor(10,250);
[001B] (11) animateActor(1,248);
[001E] (72) loadRoom(46);
[0020] (32) setCameraAt(60);
[0022] (19) doSentence(253,671,0,1);
[0029] (2E) delay(60);
[002D] (14) print(10,"Zak, Zak, Zak.\x03What am I going to do with you?");
[0055] (AE) waitForMessage();
[0056] (D8) printEgo("But Boss! I'll NEVER win a Pulitzer\x01working for this sleazy tabloid!");
[0092] (AE) waitForMessage();
[0093] (11) animateActor(10,28);
[0096] (80) breakHere();
[0097] (43) VAR_RESULT = getActorX(1);
[009A] (78) unless (VAR_RESULT < 50) goto 0096;
[00A0] (19) doSentence(254,671,0,1);
[00A7] (11) animateActor(1,255);
[00AA] (11) animateActor(1,245);
[00AD] (D8) printEgo("I'm SICK of making up STUPID STORIES!");
[00CE] (AE) waitForMessage();
[00CF] (14) print(10,"Then make up stories that AREN'T stupid!");
[00F4] (AE) waitForMessage();
[00F5] (11) animateActor(1,246);
[00F8] (2E) delay(120);
[00FC] (14) print(10,"Look. Just do this last feature, and\x01then you can write your novel.");
[0137] (2E) delay(30);
[013B] (11) animateActor(1,245);
[013E] (AE) waitForMessage();
[013F] (14) print(10,"Here's your ticket to Seattle.");
[015C] (2E) delay(60);
[0160] (47) clearState08(671);
[0163] (AE) waitForMessage();
[0164] (1E) walkActorTo(1,56,52);
[0168] (14) print(10,"I want more on that vicious two-headed\x01squirrel that's been attacking campers.");
[01AF] (3B) waitForActor(1);
[01B1] (11) animateActor(1,247);
[01B4] (AE) waitForMessage();
[01B5] (07) setState08(671);
[01B8] (D8) printEgo("Oh, all right!");
[01C6] (AE) waitForMessage();
[01C7] (1E) walkActorTo(1,66,64);
[01CB] (14) print(10,"And while you're there^");
[01E2] (80) breakHere();
[01E3] (43) VAR_RESULT = getActorX(1);
[01E6] (44) unless (VAR_RESULT > 59) goto 01E2;
[01EC] (11) animateActor(1,255);
[01EF] (AE) waitForMessage();
[01F0] (11) animateActor(1,28);
[01F3] (14) print(10,"The first UFO sighting happened on Mt.\x01Rainier 50 years ago. Write it up too.");
[0236] (2E) delay(120);
[023A] (11) animateActor(1,16);
[023D] (AE) waitForMessage();
[023E] (D8) printEgo("Hmmm^");
[0245] (AE) waitForMessage();
[0246] (D8) printEgo("TABLOID REPORTER STRANGLES\x01BOSS OVER LOUSY ASSIGNMENT.");
[0279] (1E) walkActorTo(1,60,60);
[027D] (AE) waitForMessage();
[027E] (14) print(10,"What was that?");
[028D] (AE) waitForMessage();
[028E] (11) animateActor(1,247);
[0291] (D8) printEgo("Nothing, Boss.");
[02A0] (AE) waitForMessage();
[02A1] (1E) walkActorTo(1,60,64);
[02A5] (2E) delay(30);
[02A9] (A0) stopObjectCode();
END

// Script 128
[0000] (9A) VAR_TIMER_NEXT = Var[234];
[0003] (80) breakHere();
[0004] (7C) VAR_RESULT = isSoundRunning(103);
[0007] (28) unless (!VAR_RESULT) goto 0003;
[000B] (02) startMusic(104);
[000D] (80) breakHere();
[000E] (7C) VAR_RESULT = isSoundRunning(104);
[0011] (28) unless (!VAR_RESULT) goto 000D;
[0015] (18) goto 000B;
[0018] (A0) stopObjectCode();
END

// Script 129
[0000] (40) cutscene();
[0001] (87) setState08(VAR_ACTIVE_OBJECT1);
[0003] (07) setState08(443);
[0006] (58) beginOverride();
[0007] (18) goto 002A;
[000A] (72) loadRoom(0);
[000C] (EE) dummy(EE);
[000D] (14) print(255,"After sweeping for some time^");
[0029] (AE) waitForMessage();
[002A] (D2) actorFollowCamera(VAR_EGO);
[002C] (28) if (!VAR_OVERRIDE) {
[0030] (2E)   delay(60);
[0034] (**) }
[0034] (D8) printEgo("Ta da! Gee, it looks like solar panels.");
[0056] (AE) waitForMessage();
[0057] (19) doSentence(253,451,0,1);
[005E] (C0) endCutscene();
[005F] (A0) stopObjectCode();
END

// Script 130
[0000] (68) Var[66] = isScriptRunning(98);
[0003] (48) if (Var[247] == 352) {
[0009] (19)   doSentence(254,362,0,1);
[0010] (19)   doSentence(253,353,0,1);
[0017] (0C)   unlockSound(18)
[001A] (28)   if (!Var[66]) {
[001E] (31)     VAR_RESULT = getBitVar(1548,0);
[0023] (28)     if (!VAR_RESULT) {
[0027] (D8)       printEgo("ZAK YAKKETY-YAKS YAK.");
[003C] (5B)       setBitVar(1548,0,Var[235]);
[0041] (**)     }
[0041] (**)   }
[0041] (**) }
[0041] (48) if (Var[247] == 285) {
[0047] (19)   doSentence(254,287,0,1);
[004E] (17)   clearState02(285);
[0051] (19)   doSentence(250,286,0,1);
[0058] (28)   if (!Var[66]) {
[005C] (31)     VAR_RESULT = getBitVar(1552,0);
[0061] (28)     if (!VAR_RESULT) {
[0065] (D8)       printEgo("MAN TRADES MINDS WITH TWO-HEADED\x01SQUIRREL; DEVELOPS SPLIT PERSONALITY.");
[00A6] (5B)       setBitVar(1552,0,Var[235]);
[00AB] (**)     }
[00AB] (**)   }
[00AB] (**) }
[00AB] (48) if (Var[247] == 14) {
[00B1] (19)   doSentence(254,99,0,1);
[00B8] (19)   doSentence(254,100,0,1);
[00BF] (19)   doSentence(254,102,0,1);
[00C6] (19)   doSentence(253,101,0,1);
[00CD] (28)   if (!Var[66]) {
[00D1] (31)     VAR_RESULT = getBitVar(1551,0);
[00D6] (28)     if (!VAR_RESULT) {
[00DA] (D8)       printEgo("MAN EXCHANGES MINDS WITH GOLDFISH;\x01BORES HIMSELF TO DEATH.");
[010F] (5B)       setBitVar(1551,0,Var[235]);
[0114] (**)     }
[0114] (**)   }
[0114] (**) }
[0114] (9A) Var[247] = Var[234];
[0117] (A0) stopObjectCode();
END

// Script 131
[0000] (48) if (VAR_ACTIVE_OBJECT2 == 194) {
[0006] (18) } else {
[0009] (48)   unless (VAR_ACTIVE_OBJECT2 == 220) goto 0018;
[000F] (**) }
[000F] (59) doSentence(11,VAR_ACTIVE_OBJECT2,0,0);
[0015] (18) goto 001D;
[0018] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[001D] (A0) stopObjectCode();
END

// Script 132
[0000] (80) breakHere();
[0001] (03) VAR_RESULT = getActorRoom(1);
[0004] (C8) if (VAR_RESULT == VAR_ROOM) {
[0009] (03)   VAR_RESULT = getActorRoom(3);
[000C] (C8)   if (VAR_RESULT == VAR_ROOM) {
[0011] (18)   } else {
[0014] (03)     VAR_RESULT = getActorRoom(4);
[0017] (C8)     unless (VAR_RESULT == VAR_ROOM) goto 001E;
[001C] (**)   }
[001C] (4A)   chainScript(133);
[001E] (**) }
[001E] (18) goto 0000;
[0021] (A0) stopObjectCode();
END

// Script 133
[0000] (80) breakHere();
[0001] (68) VAR_RESULT = isScriptRunning(82);
[0004] (28) unless (!VAR_RESULT) goto 0000;
[0008] (40) cutscene();
[0009] (9A) Var[121] = VAR_EGO;
[000C] (1A) VAR_EGO = 1;
[0010] (58) beginOverride();
[0011] (18) goto 01DD;
[0014] (9A) Var[119] = Var[234];
[0017] (03) Var[120] = getActorRoom(3);
[001A] (03) VAR_RESULT = getActorRoom(4);
[001D] (C8) if (VAR_RESULT == VAR_ROOM) {
[0022] (26)   setVarRange(Var[117],2,[4,3]);
[0027] (C8)   if (Var[120] == VAR_ROOM) {
[002C] (0D)     walkActorToActor(3,1,6);
[0030] (46)     Var[119]++;
[0032] (**)   }
[0032] (18) } else {
[0035] (26)   setVarRange(Var[117],2,[3,4]);
[003A] (**) }
[003A] (8D) walkActorToActor(Var[117],1,4);
[003E] (2E) delay(60);
[0042] (94) print(Var[117],"Hey!");
[0049] (BB) waitForActor(Var[117]);
[004B] (89) faceActor(Var[117],1);
[004E] (00) stopObjectCode();
[004F] (AE) waitForMessage();
[0050] (49) faceActor(1,Var[117]);
[0053] (94) print(Var[117],"It's Zak! Welcome to Mars!\x01It's about time you got here!");
[0085] (A8) if (Var[119]) {
[0089] (BB)   waitForActor(Var[118]);
[008B] (89)   faceActor(Var[118],1);
[008E] (00)   stopObjectCode();
[008F] (**) }
[008F] (AE) waitForMessage();
[0090] (D8) printEgo("Give me a break!\x03I've been busy saving the Earth!");
[00BB] (AE) waitForMessage();
[00BC] (2E) delay(30);
[00C0] (D8) printEgo("You're \x06\x75, right?");
[00D1] (AE) waitForMessage();
[00D2] (94) print(Var[117],"Right!");
[00DB] (AE) waitForMessage();
[00DC] (A8) if (Var[119]) {
[00E0] (49)   faceActor(1,Var[118]);
[00E3] (3B)   waitForActor(1);
[00E5] (D8)   printEgo("And you must be \x06\x76.");
[00F6] (AE)   waitForMessage();
[00F7] (94)   print(Var[118],"That's me!");
[0103] (18) } else {
[0106] (D8)   printEgo("Where's \x06\x76?");
[0112] (11)   animateActor(1,245);
[0115] (2E)   delay(60);
[0119] (11)   animateActor(1,244);
[011C] (2E)   delay(60);
[0120] (49)   faceActor(1,Var[117]);
[0123] (AE)   waitForMessage();
[0124] (B1)   VAR_RESULT = getBitVar(1470,Var[118]);
[0129] (28)   if (!VAR_RESULT) {
[012D] (94)     print(Var[117],"She's around the planet somewhere.");
[014E] (18)   } else {
[0151] (94)     print(Var[117],"You're too late, she died!");
[016A] (AE)     waitForMessage();
[016B] (94)     print(Var[117],"There's no way we can retrieve the\x01Power Crystal without her!");
[01A2] (AE)     waitForMessage();
[01A3] (18)     goto 01DD;
[01A6] (**)   }
[01A6] (**) }
[01A6] (AE) waitForMessage();
[01A7] (94) print(Var[117],"We have lots to do and not much time,\x01so let's hurry!");
[01D5] (2E) delay(60);
[01D9] (49) faceActor(1,Var[117]);
[01DC] (AE) waitForMessage();
[01DD] (14) print(255,"");
[01E0] (9A) VAR_EGO = Var[121];
[01E3] (C0) endCutscene();
[01E4] (A0) stopObjectCode();
END

// Script 134
[0000] (A8) if (Var[240]) {
[0004] (2E)   delay(18000);
[0008] (**) }
[0008] (80) breakHere();
[0009] (03) VAR_RESULT = getActorRoom(1);
[000C] (04) if (VAR_RESULT <= 2) {
[0012] (18)   goto 0008;
[0015] (**) }
[0015] (46) Var[240]++;
[0017] (78) if (Var[240] < 8) {
[001D] (4F)   if (getState08(88)) {
[0022] (0F)     if (!getState08(19)) {
[0027] (27)       setState04(88);
[002A] (**)     }
[002A] (**)   }
[002A] (**) }
[002A] (A0) stopObjectCode();
END

// Script 135
[0000] (40) cutscene();
[0001] (3C) stopSound(87);
[0003] (3C) stopSound(96);
[0005] (58) beginOverride();
[0006] (18) goto 03B0;
[0009] (07) setState08(364);
[000C] (07) setState08(373);
[000F] (07) setState08(60);
[0012] (47) clearState08(363);
[0015] (47) clearState08(368);
[0018] (07) setState08(366);
[001B] (1A) Var[51] = 2;
[001F] (48) if (VAR_EGO == 2) {
[0025] (1A)   Var[51] = 1;
[0029] (**) }
[0029] (AD) putActorInRoom(Var[51],0);
[002C] (13) ActorOps(8,[Color(9, 6)]);
[0031] (13) ActorOps(8,[Color(3, 4)]);
[0036] (13) ActorOps(8,[TalkColor(12)]);
[003A] (2D) putActorInRoom(8,18);
[003D] (01) putActor(8,26,52);
[0041] (11) animateActor(8,251);
[0044] (AD) putActorInRoom(VAR_EGO,18);
[0047] (81) putActor(VAR_EGO,22,40);
[004B] (91) animateActor(VAR_EGO,250);
[004E] (72) loadRoom(18);
[0050] (2E) delay(60);
[0054] (1C) startSound(94);
[0056] (80) breakHere();
[0057] (47) clearState08(366);
[005A] (2E) delay(60);
[005E] (19) doSentence(253,373,0,1);
[0065] (14) print(8,"I just can't understand it. A nice \x02");
[0085] (48) if (Var[51] == 2) {
[008B] (14)   print(8,"boy\x01\x02");
[0093] (18) } else {
[0096] (14)   print(8,"girl\x01\x02");
[009F] (**) }
[009F] (14) print(8,"like you flagrantly breaking the law!");
[00C2] (AE) waitForMessage();
[00C3] (2E) delay(60);
[00C7] (19) doSentence(254,373,0,1);
[00CE] (2E) delay(60);
[00D2] (36) walkActorToObject(8,366);
[00D6] (3B) waitForActor(8);
[00D8] (14) print(8,"I hope you ROT in there!");
[00EE] (AE) waitForMessage();
[00EF] (11) animateActor(8,246);
[00F2] (2E) delay(60);
[00F6] (14) print(8,"As for you^");
[0102] (1E) walkActorTo(8,21,62);
[0106] (3B) waitForActor(8);
[0108] (2E) delay(60);
[010C] (19) doSentence(253,374,0,1);
[0113] (14) print(8,"I'll assume your finger slipped while\x01entering the Exit Visa Code.");
[014F] (AE) waitForMessage();
[0150] (80) breakHere();
[0151] (14) print(8,"But if not, I think it's high time you\x01bought a legitimate copy of this game!");
[0193] (AE) waitForMessage();
[0194] (80) breakHere();
[0195] (14) print(8,"The Designers worked long and hard to\x01bring `Zak McKracken` to life^");
[01D2] (AE) waitForMessage();
[01D3] (80) breakHere();
[01D4] (D8) printEgo("YEAH!");
[01DB] (AE) waitForMessage();
[01DC] (19) doSentence(254,374,0,1);
[01E3] (11) animateActor(8,255);
[01E6] (11) animateActor(8,247);
[01E9] (3B) waitForActor(8);
[01EB] (14) print(8,"Keep quiet, prisoner!");
[0201] (AE) waitForMessage();
[0202] (11) animateActor(8,246);
[0205] (2E) delay(60);
[0209] (19) doSentence(253,374,0,1);
[0210] (14) print(8,"And we want to encourage them to create\x01more exciting adventures, don't we?");
[0253] (AE) waitForMessage();
[0254] (80) breakHere();
[0255] (D8) printEgo("YEAH!");
[025C] (AE) waitForMessage();
[025D] (19) doSentence(254,374,0,1);
[0264] (11) animateActor(8,255);
[0267] (11) animateActor(8,247);
[026A] (2E) delay(60);
[026E] (D8) printEgo("Ooops!\x03Sorry!");
[027D] (AE) waitForMessage();
[027E] (2E) delay(60);
[0282] (11) animateActor(8,246);
[0285] (2E) delay(60);
[0289] (19) doSentence(253,374,0,1);
[0290] (14) print(8,"So hurry on down to your local software\x01store and buy your very own copy.");
[02CF] (AE) waitForMessage();
[02D0] (19) doSentence(254,374,0,1);
[02D7] (11) animateActor(8,255);
[02DA] (11) animateActor(8,246);
[02DD] (2E) delay(30);
[02E1] (14) print(8,"Remember^");
[02ED] (AE) waitForMessage();
[02EE] (2E) delay(30);
[02F2] (14) print(8,"Only YOU can stop worldwide stupidity!");
[0316] (AE) waitForMessage();
[0317] (1A) VAR_EGO = 8;
[031B] (19) doSentence(1,363,0,0);
[0322] (4C) waitForSentence();
[0323] (2E) delay(60);
[0327] (11) animateActor(8,246);
[032A] (14) print(8,"See ya!");
[0333] (AE) waitForMessage();
[0334] (1E) walkActorTo(8,2,56);
[0338] (3B) waitForActor(8);
[033A] (2D) putActorInRoom(8,0);
[033D] (2E) delay(60);
[0341] (19) doSentence(2,363,0,1);
[0348] (2E) delay(30);
[034C] (0C) loadSound(103)
[034F] (0C) lockSound(103)
[0352] (0C) loadSound(104)
[0355] (0C) lockSound(104)
[0358] (02) startMusic(103);
[035A] (42) startScript(128);
[035C] (2E) delay(240);
[0360] (13) ActorOps(0,[TalkColor(15)]);
[0364] (14) print(255,"            THE GAME IS OVER");
[037A] (07) setState08(374);
[037D] (2E) delay(6);
[0381] (47) clearState08(374);
[0384] (2E) delay(6);
[0388] (28) unless (!VAR_HAVE_MSG) goto 037A;
[038C] (2E) delay(300);
[0390] (14) print(255,"      Press ESCAPE to play again.");
[03AD] (18) goto 037A;
[03B0] (62) stopScript(128);
[03B2] (20) stopMusic();
[03B3] (98) restart();
[03B4] (C0) endCutscene();
[03B5] (A0) stopObjectCode();
END

// Script 136
[0000] (48) if (VAR_EGO == 2) {
[0006] (40)   cutscene();
[0007] (91)   animateActor(VAR_EGO,246);
[000A] (58)   beginOverride();
[000B] (18)   goto 004F;
[000E] (BB)   waitForActor(VAR_EGO);
[0010] (2F)   if (!getState04(79)) {
[0015] (D8)     printEgo("Hm. This is difficult.\x03One moment^\x03It has `words of power` on it:");
[004E] (AE)     waitForMessage();
[004F] (**)   }
[004F] (27)   setState04(79);
[0052] (D8)   printEgo("`Gnik Sisi Vle`");
[0061] (C0)   endCutscene();
[0062] (48)   if (VAR_ROOM == 134) {
[0068] (19)     doSentence(253,651,0,1);
[006F] (18)   } else {
[0072] (2E)     delay(180);
[0076] (14)     print(2,"Nothing happened!");
[0089] (**)   }
[0089] (18) } else {
[008C] (D8)   printEgo("I can't read it. It's written in a\x01bizarre language.");
[00BA] (**) }
[00BA] (A0) stopObjectCode();
END

// Script 137
[0000] (48) if (VAR_ACTIVE_VERB == 12) {
[0006] (D8)   printEgo("Key of Sea Kazoo");
[0015] (**) }
[0015] (48) if (VAR_ACTIVE_VERB == 11) {
[001B] (48)   if (VAR_EGO == 1) {
[0021] (48)     if (Var[167] == 64) {
[0027] (18)     } else {
[002A] (48)       unless (Var[167] == 56) goto 0046;
[0030] (**)     }
[0030] (D8)     printEgo("The bowl's in the way.");
[0044] (62)     stopScript(0);
[0046] (48)     if (Var[164] == 60) {
[004C] (D8)       printEgo("The oxygen mask's in the way.");
[0066] (62)       stopScript(0);
[0068] (**)     }
[0068] (7C)     VAR_RESULT = isSoundRunning(33);
[006B] (28)     if (!VAR_RESULT) {
[006F] (1C)       startSound(33);
[0071] (80)       breakHere();
[0072] (08)       if (VAR_ACTIVE_OBJECT1 != 16) {
[0078] (3C)         stopSound(33);
[007A] (62)         stopScript(0);
[007C] (**)       }
[007C] (7C)       VAR_RESULT = isSoundRunning(33);
[007F] (28)       unless (!VAR_RESULT) goto 0071;
[0083] (2F)       if (!getState04(16)) {
[0088] (27)         setState04(16);
[008B] (11)         animateActor(1,246);
[008E] (3B)         waitForActor(1);
[0090] (D8)         printEgo("That's the only song I know.");
[00A9] (**)       }
[00A9] (48)       if (VAR_ROOM == 31) {
[00AF] (C8)         if (Var[171] == Var[234]) {
[00B4] (19)           doSentence(253,500,0,1);
[00BB] (**)         }
[00BB] (**)       }
[00BB] (48)       if (VAR_ROOM == 3) {
[00C1] (0F)         if (!getState08(142)) {
[00C6] (34)           VAR_RESULT = getDist(1,142);
[00CC] (04)           if (VAR_RESULT <= 20) {
[00D2] (19)             doSentence(253,147,0,1);
[00D9] (**)           }
[00D9] (**)         }
[00D9] (**)       }
[00D9] (**)     }
[00D9] (18)   } else {
[00DC] (D8)     printEgo("I can't carry a tune.");
[00EF] (**)   }
[00EF] (**) }
[00EF] (A0) stopObjectCode();
END

// Script 138
[0000] (48) if (VAR_ACTIVE_OBJECT1 == 46) {
[0006] (48)   if (VAR_ACTIVE_VERB == 12) {
[000C] (D8)     printEgo("Old Spitinureye");
[001C] (**)   }
[001C] (48)   if (VAR_ACTIVE_VERB == 11) {
[0022] (48)     if (VAR_EGO == 1) {
[0028] (D8)       printEgo("Glug, glug.\x03It tastes AWFUL!");
[0043] (18)     } else {
[0046] (D8)       printEgo("No thanks.");
[0051] (**)     }
[0051] (**)   }
[0051] (**) }
[0051] (48) if (VAR_ACTIVE_OBJECT1 == 45) {
[0057] (D8)   printEgo("It's `How To Raise Your Consciousness\x01And Lower Your Golf Scores.`");
[0092] (AE)   waitForMessage();
[0093] (D8)   printEgo("It was written by a guru in Nepal named\x01Swami Holanwanda. I'\x02");
[00C8] (48)   if (VAR_EGO == 2) {
[00CE] (D8)     printEgo("ve already read it.");
[00E0] (18)   } else {
[00E3] (D8)     printEgo("ll read it later.");
[00F3] (**)   }
[00F3] (62)   stopScript(0);
[00F5] (**) }
[00F5] (48) if (VAR_ACTIVE_OBJECT1 == 36) {
[00FB] (48)   if (VAR_ACTIVE_OBJECT2 == 14) {
[0101] (C8)     if (Var[138] == Var[234]) {
[0106] (D8)       printEgo("The \x06\x09 will get wet.");
[0119] (18)     } else {
[011C] (54)       setObjectName(14,"taped fish bowl");
[012F] (27)       setState04(14);
[0132] (A9)       setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[0135] (48)       if (Var[167] == 56) {
[013B] (1A)         Var[167] = 64;
[013F] (42)         startScript(150);
[0141] (**)       }
[0141] (**)     }
[0141] (**)   }
[0141] (62)   stopScript(0);
[0143] (**) }
[0143] (48) if (VAR_ACTIVE_OBJECT1 == 39) {
[0149] (48)   if (VAR_ACTIVE_VERB == 6) {
[014F] (90)     VAR_RESULT = getObjectOwner(VAR_ACTIVE_OBJECT1);
[0152] (48)     if (VAR_RESULT == 1) {
[0158] (71)       Var[66] = getActorCostume(1);
[015B] (48)       if (Var[66] == 1) {
[0161] (13)         ActorOps(1,[Costume(37)]);
[0165] (**)       }
[0165] (48)       if (Var[66] == 5) {
[016B] (13)         ActorOps(1,[Costume(38)]);
[016F] (**)       }
[016F] (48)       if (Var[66] == 9) {
[0175] (13)         ActorOps(1,[Costume(39)]);
[0179] (**)       }
[0179] (42)       startScript(150);
[017B] (1A)       Var[172] = 37;
[017F] (1A)       Var[176] = 38;
[0183] (1A)       Var[180] = 39;
[0187] (48)       if (VAR_ROOM == 11) {
[018D] (0F)         if (!getState08(263)) {
[0192] (07)           setState08(774);
[0195] (**)         }
[0195] (**)       }
[0195] (A7)       setState04(VAR_ACTIVE_OBJECT1);
[0197] (D8)       printEgo("It's uncomfortably tight!");
[01B0] (18)     } else {
[01B3] (D8)       printEgo("Not me!");
[01BB] (**)     }
[01BB] (**)   }
[01BB] (48)   if (VAR_ACTIVE_VERB == 12) {
[01C1] (D8)     printEgo("size small");
[01CC] (**)   }
[01CC] (48)   if (VAR_ACTIVE_VERB == 7) {
[01D2] (18)   } else {
[01D5] (48)     unless (VAR_ACTIVE_VERB == 3) goto 0227;
[01DB] (42)     startScript(20);
[01DD] (**)   }
[01DD] (48)   if (VAR_EGO == 1) {
[01E3] (5B)     setBitVar(1506,0,Var[234]);
[01E8] (71)     Var[66] = getActorCostume(1);
[01EB] (48)     if (Var[66] == 37) {
[01F1] (13)       ActorOps(1,[Costume(1)]);
[01F5] (**)     }
[01F5] (48)     if (Var[66] == 38) {
[01FB] (13)       ActorOps(1,[Costume(5)]);
[01FF] (**)     }
[01FF] (48)     if (Var[66] == 39) {
[0205] (13)       ActorOps(1,[Costume(9)]);
[0209] (**)     }
[0209] (1A)     Var[172] = 1;
[020D] (1A)     Var[176] = 5;
[0211] (1A)     Var[180] = 9;
[0215] (42)     startScript(150);
[0217] (48)     if (VAR_ROOM == 11) {
[021D] (0F)       if (!getState08(263)) {
[0222] (47)         clearState08(774);
[0225] (**)       }
[0225] (**)     }
[0225] (E7)     clearState04(VAR_ACTIVE_OBJECT1);
[0227] (**)   }
[0227] (**) }
[0227] (48) if (VAR_ACTIVE_OBJECT1 == 49) {
[022D] (48)   if (VAR_ACTIVE_VERB == 11) {
[0233] (D8)     printEgo("Ouch! It burned up in my hands!");
[024E] (A9)     setOwnerOf(VAR_ACTIVE_OBJECT2,0);
[0251] (**)   }
[0251] (62)   stopScript(0);
[0253] (**) }
[0253] (48) if (VAR_ACTIVE_OBJECT1 == 42) {
[0259] (48)   if (VAR_ACTIVE_VERB == 12) {
[025F] (D8)     printEgo("Super Lucky Lotto - \x02");
[0272] (9A)     Var[67] = Var[234];
[0275] (9A)     Var[14] = Var[67];
[0278] (5A)     Var[14] += 208;
[027C] (9A)     Var[66] = Var[14];
[027F] (D8)     printEgo("\x04\x42 \x02");
[0285] (46)     Var[67]++;
[0287] (44)     unless (Var[67] > 3) goto 0275;
[028D] (D8)     printEgo("");
[028F] (**)   }
[028F] (48)   if (VAR_ACTIVE_VERB == 3) {
[0295] (04)     if (VAR_ACTIVE_OBJECT2 <= 13) {
[029B] (94)       print(VAR_ACTIVE_OBJECT2,"No thanks, I don't gamble.");
[02B4] (18)     } else {
[02B7] (4A)       chainScript(3);
[02B9] (**)     }
[02B9] (**)   }
[02B9] (**) }
[02B9] (48) if (VAR_ACTIVE_OBJECT1 == 34) {
[02BF] (48)   if (VAR_ACTIVE_VERB == 1) {
[02C5] (EF)     if (getState04(VAR_ACTIVE_OBJECT1)) {
[02C9] (D4)       setObjectName(VAR_ACTIVE_OBJECT1,"open tool kit");
[02D9] (E7)       clearState04(VAR_ACTIVE_OBJECT1);
[02DB] (1C)       startSound(26);
[02DD] (2F)       if (!getState04(35)) {
[02E2] (D8)         printEgo("Wow! Look at all this stuff!");
[02FB] (27)         setState04(35);
[02FE] (**)       }
[02FE] (9A)       Var[61] = VAR_EGO;
[0301] (1A)       Var[67] = 12;
[0305] (18)       goto 0328;
[0308] (**)     }
[0308] (**)   }
[0308] (48)   if (VAR_ACTIVE_VERB == 2) {
[030E] (AF)     if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0312] (A7)       setState04(VAR_ACTIVE_OBJECT1);
[0314] (D4)       setObjectName(VAR_ACTIVE_OBJECT1,"tool kit");
[031F] (1C)       startSound(11);
[0321] (1A)       Var[61] = 12;
[0325] (9A)       Var[67] = VAR_EGO;
[0328] (1A)       Var[66] = 35;
[032C] (90)       VAR_RESULT = getObjectOwner(Var[66]);
[032F] (C8)       if (VAR_RESULT == Var[67]) {
[0334] (E9)         setOwnerOf(Var[66],Var[61]);
[0337] (**)       }
[0337] (46)       Var[66]++;
[0339] (44)       unless (Var[66] > 38) goto 032C;
[033F] (**)     }
[033F] (**)   }
[033F] (48)   if (VAR_ACTIVE_VERB == 11) {
[0345] (EF)     if (getState04(VAR_ACTIVE_OBJECT1)) {
[0349] (D8)       printEgo("Maybe I should open it.");
[035E] (18)     } else {
[0361] (4A)       chainScript(3);
[0363] (**)     }
[0363] (**)   }
[0363] (**) }
[0363] (A0) stopObjectCode();
END

// Script 139
[0000] (48) if (VAR_ACTIVE_OBJECT2 == 10) {
[0006] (9A)   VAR_ACTIVE_OBJECT2 = Var[234];
[0009] (48)   if (VAR_ACTIVE_OBJECT1 == 45) {
[000F] (B1)     VAR_RESULT = getBitVar(1478,VAR_EGO);
[0014] (A8)     if (VAR_RESULT) {
[0018] (14)       print(10,"Welcome, devotee!");
[002B] (18)     } else {
[002E] (DB)       setBitVar(1478,VAR_EGO,Var[235]);
[0033] (10)       VAR_RESULT = getObjectOwner(46);
[0037] (08)       if (VAR_RESULT != 15) {
[003D] (29)         setOwnerOf(45,0);
[0041] (**)       }
[0041] (14)       print(10,"Oh! I see you are a follower of Guru!");
[0061] (**)     }
[0061] (27)     setState04(45);
[0064] (AE)     waitForMessage();
[0065] (19)     doSentence(253,351,0,1);
[006C] (18)   } else {
[006F] (14)     print(10,"No, thank you.");
[007E] (AE)     waitForMessage();
[007F] (11)     animateActor(10,246);
[0082] (**)   }
[0082] (48) } else if (VAR_ACTIVE_OBJECT2 == 8) {
[008B] (9A)   VAR_ACTIVE_OBJECT2 = Var[234];
[008E] (68)   VAR_RESULT = isScriptRunning(124);
[0091] (A8)   if (VAR_RESULT) {
[0095] (14)     print(8,"NOT NOW!");
[009F] (48)   } else if (VAR_ACTIVE_OBJECT1 == 59) {
[00A8] (14)     print(8,"The law was still broken.");
[00C0] (29)     setOwnerOf(59,8);
[00C4] (48)   } else if (VAR_ACTIVE_OBJECT1 == 60) {
[00CD] (14)     print(8,"Thank you.");
[00D9] (29)     setOwnerOf(60,8);
[00DD] (18)   } else {
[00E0] (14)     print(8,"No bribes!");
[00EC] (**)   }
[00EC] (**) }
[00EC] (A0) stopObjectCode();
END

// Script 140
[0000] (2E) delay(240);
[0004] (40) cutscene();
[0005] (9A) Var[117] = VAR_EGO;
[0008] (5B) setBitVar(1557,0,Var[235]);
[000D] (58) beginOverride();
[000E] (18) goto 034E;
[0011] (72) loadRoom(0);
[0013] (EE) dummy(EE);
[0014] (14) print(255,"Meanwhile, back in the secret room^");
[0035] (AE) waitForMessage();
[0036] (72) loadRoom(16);
[0038] (32) setCameraAt(57);
[003A] (19) doSentence(253,341,0,1);
[0041] (01) putActor(7,64,60);
[0045] (01) putActor(12,30,54);
[0049] (1A) Var[121] = 64;
[004D] (1A) Var[122] = 60;
[0051] (19) doSentence(253,345,0,1);
[0058] (2E) delay(60);
[005C] (07) setState08(329);
[005F] (D8) printEgo("O BABY - I'M A JAILHOUND DOG LOVIN' MEAT\x01TENDERIZIN' ROCKER IN MY BLUE SUEDE^");
[00A1] (2E) delay(60);
[00A5] (1C) startSound(10);
[00A7] (2E) delay(120);
[00AB] (1E) walkActorTo(12,43,54);
[00AF] (AE) waitForMessage();
[00B0] (2E) delay(30);
[00B4] (14) print(12,"And WHAT do you think you're doing?");
[00D4] (AE) waitForMessage();
[00D5] (D8) printEgo("Grooveling to The King!");
[00EB] (AE) waitForMessage();
[00EC] (14) print(12,"STOP IT THIS INSTANT!");
[0101] (2E) delay(60);
[0105] (19) doSentence(254,345,0,1);
[010C] (2E) delay(60);
[0110] (1E) walkActorTo(7,48,54);
[0114] (14) print(12,"You're SUPPOSED to be watching the\x01machine, not dancing like a gloon!");
[0152] (3B) waitForActor(7);
[0154] (11) animateActor(7,244);
[0157] (AE) waitForMessage();
[0158] (D8) printEgo("Sorry.");
[0160] (AE) waitForMessage();
[0161] (1A) VAR_EGO = 12;
[0165] (D2) actorFollowCamera(VAR_EGO);
[0167] (1E) walkActorTo(12,36,52);
[016B] (D8) printEgo("There is still a chance^");
[0181] (2E) delay(30);
[0185] (1E) walkActorTo(7,40,52);
[0189] (AE) waitForMessage();
[018A] (11) animateActor(12,255);
[018D] (11) animateActor(12,245);
[0190] (D8) printEgo("a very SMALL chance^");
[01A3] (80) breakHere();
[01A4] (80) breakHere();
[01A5] (11) animateActor(7,255);
[01A8] (AE) waitForMessage();
[01A9] (1E) walkActorTo(12,36,56);
[01AD] (D8) printEgo("^that someone will discover and activate\x01the Skolarian Device.");
[01E6] (2E) delay(60);
[01EA] (1E) walkActorTo(7,40,52);
[01EE] (3B) waitForActor(12);
[01F0] (11) animateActor(12,245);
[01F3] (3B) waitForActor(7);
[01F5] (11) animateActor(7,246);
[01F8] (AE) waitForMessage();
[01F9] (1E) walkActorTo(12,60,56);
[01FD] (12) panCameraTo(56);
[01FF] (D8) printEgo("It's the only thing that could stop us!");
[0221] (80) breakHere();
[0222] (43) VAR_RESULT = getActorX(12);
[0225] (44) unless (VAR_RESULT > 43) goto 0221;
[022B] (1E) walkActorTo(7,54,56);
[022F] (AE) waitForMessage();
[0230] (D8) printEgo("Of course, we will soon be in control\x01and won't have to worry.");
[0265] (AE) waitForMessage();
[0266] (3B) waitForActor(12);
[0268] (11) animateActor(12,244);
[026B] (D8) printEgo("But until then^");
[027A] (AE) waitForMessage();
[027B] (1E) walkActorTo(12,57,56);
[027F] (D8) printEgo("KEEP YOUR MIND ON THE JOB!");
[0296] (AE) waitForMessage();
[0297] (1A) VAR_EGO = 7;
[029B] (1E) walkActorTo(12,30,50);
[029F] (D8) printEgo("Whatever you say, boss.");
[02B5] (80) breakHere();
[02B6] (43) VAR_RESULT = getActorX(12);
[02B9] (78) unless (VAR_RESULT < 55) goto 02B5;
[02BF] (11) animateActor(7,247);
[02C2] (80) breakHere();
[02C3] (43) VAR_RESULT = getActorX(12);
[02C6] (78) unless (VAR_RESULT < 53) goto 02C2;
[02CC] (11) animateActor(7,244);
[02CF] (AE) waitForMessage();
[02D0] (80) breakHere();
[02D1] (43) VAR_RESULT = getActorX(12);
[02D4] (78) unless (VAR_RESULT < 32) goto 02D0;
[02DA] (2E) delay(120);
[02DE] (1C) startSound(11);
[02E0] (2E) delay(120);
[02E4] (D8) printEgo("See ya.");
[02EC] (AE) waitForMessage();
[02ED] (2E) delay(30);
[02F1] (11) animateActor(7,246);
[02F4] (2E) delay(120);
[02F8] (1A) Var[121] = 54;
[02FC] (1A) Var[122] = 56;
[0300] (19) doSentence(253,345,0,1);
[0307] (2E) delay(30);
[030B] (14) print(7,"DON'T BE COOL TO MY HEARTACHE HOVEL JUST\x01TREAT MY LICE CUZ I'M ALL SHAKEN UP^");
[034D] (AE) waitForMessage();
[034E] (9A) VAR_EGO = Var[117];
[0351] (14) print(255,"");
[0354] (19) doSentence(254,345,0,1);
[035B] (47) clearState08(329);
[035E] (2D) putActorInRoom(12,0);
[0361] (2D) putActorInRoom(7,4);
[0364] (01) putActor(7,22,52);
[0368] (1A) Var[245] = 24;
[036C] (19) doSentence(STOP);
[036E] (C0) endCutscene();
[036F] (A0) stopObjectCode();
END

// Script 141
[0000] (DB) setBitVar(1440,Var[238],Var[234]);
[0005] (9A) Var[117] = Var[238];
[0008] (1A) VAR_EGO = 7;
[000C] (D2) actorFollowCamera(VAR_EGO);
[000E] (9A) Var[118] = Var[234];
[0011] (1A) Var[66] = 33;
[0015] (90) VAR_RESULT = getObjectOwner(Var[66]);
[0018] (C8) if (VAR_RESULT == Var[117]) {
[001D] (9D)   if (classOfIs(Var[66],32)) {
[0022] (A9)     setOwnerOf(Var[66],7);
[0025] (46)     Var[118]++;
[0027] (**)   }
[0027] (**) }
[0027] (46) Var[66]++;
[0029] (44) unless (Var[66] > 81) goto 0015;
[002F] (A8) if (Var[118]) {
[0033] (27)   setState04(328);
[0036] (**) }
[0036] (AE) waitForMessage();
[0037] (9A) Var[14] = Var[117];
[003A] (5A) Var[14] += 163;
[003E] (48) if (Var[14] == 40) {
[0044] (9A)   Var[14] = Var[117];
[0047] (5A)   Var[14] += 166;
[004B] (48)   if (Var[14] == 48) {
[0051] (31)     VAR_RESULT = getBitVar(1544,0);
[0056] (A8)     if (VAR_RESULT) {
[005A] (D8)       printEgo("Sorry! I thought you were an intruder!");
[007C] (**)     }
[007C] (AE)     waitForMessage();
[007D] (A8)     if (Var[118]) {
[0081] (D8)       printEgo("I'll put your artifact\x02");
[0097] (C4)       if (Var[118] > Var[235]) {
[009C] (D8)         printEgo("s\x02");
[00A0] (**)       }
[00A0] (D8)       printEgo(" in a safe place!");
[00B0] (18)     } else {
[00B3] (D8)       printEgo("I didn't know there was a Brother here.");
[00D5] (**)     }
[00D5] (AE)     waitForMessage();
[00D6] (3B)     waitForActor(7);
[00D8] (49)     faceActor(7,Var[117]);
[00DB] (89)     faceActor(Var[117],7);
[00DE] (00)     stopObjectCode();
[00DF] (48)     if (VAR_ROOM == 31) {
[00E5] (D8)       printEgo("WAIT! You're bobbing up and down!");
[0103] (AE)       waitForMessage();
[0104] (1A)       Var[167] = 52;
[0108] (1A)       Var[164] = 44;
[010C] (42)       startScript(5);
[010E] (2E)       delay(60);
[0112] (D8)       printEgo("You're not one of us!");
[0125] (AE)       waitForMessage();
[0126] (29)       setOwnerOf(40,7);
[012A] (29)       setOwnerOf(43,7);
[012E] (27)       setState04(328);
[0131] (62)       stopScript(0);
[0133] (**)     }
[0133] (48)     if (VAR_ROOM == 16) {
[0139] (27)       setState04(330);
[013C] (FB)       VAR_RESULT = getActorWalkBox(Var[117]);
[013F] (48)       if (VAR_RESULT == 6) {
[0145] (D8)         printEgo("What are you doing in there?");
[015E] (AE)         waitForMessage();
[015F] (4F)         if (getState08(331)) {
[0164] (19)           doSentence(5,331,0,0);
[016B] (4C)           waitForSentence();
[016C] (18)         } else {
[016F] (D8)           printEgo("Oh well.");
[0178] (**)         }
[0178] (**)       }
[0178] (**)     }
[0178] (46)     Var[119]++;
[017A] (62)     stopScript(0);
[017C] (**)   }
[017C] (**) }
[017C] (1A) Var[66] = 1;
[0180] (C8) if (Var[66] == Var[117]) {
[0185] (1A)   Var[66] = 2;
[0189] (**) }
[0189] (08) if (VAR_ROOM != 4) {
[018F] (83)   VAR_RESULT = getActorRoom(Var[66]);
[0192] (C8)   if (VAR_RESULT == VAR_ROOM) {
[0197] (9A)     Var[14] = Var[66];
[019A] (5A)     Var[14] += 163;
[019E] (48)     if (Var[14] == 40) {
[01A4] (9A)       Var[14] = Var[66];
[01A7] (5A)       Var[14] += 166;
[01AB] (48)       if (Var[14] == 48) {
[01B1] (9A)         Var[117] = Var[66];
[01B4] (4D)         walkActorToActor(7,Var[117],4);
[01B8] (18)         goto 00B3;
[01BB] (**)       }
[01BB] (**)     }
[01BB] (**)   }
[01BB] (**) }
[01BB] (A0) stopObjectCode();
END

// Script 142
[0000] (28) if (!Var[118]) {
[0004] (28)   if (!Var[120]) {
[0008] (48)     if (VAR_ROOM == 4) {
[000E] (18)     } else {
[0011] (48)       unless (VAR_ROOM == 16) goto 002E;
[0017] (**)     }
[0017] (D8)     printEgo("How'd you get in here?");
[002B] (18)     goto 0043;
[002E] (D8)     printEgo("Where's the artifact?");
[0043] (**)   }
[0043] (18) } else {
[0046] (D8)   printEgo("Where'd you get the artifact\x02");
[0061] (44)   if (Var[118] > 1) {
[0067] (D8)     printEgo("s\x02");
[006B] (**)   }
[006B] (D8)   printEgo("?");
[006E] (**) }
[006E] (3B) waitForActor(7);
[0070] (AE) waitForMessage();
[0071] (A8) if (Var[120]) {
[0075] (D8)   printEgo("You're coming with me.");
[008A] (18) } else {
[008D] (D8)   printEgo("Not talking? I know what to do with you!");
[00AF] (**) }
[00AF] (48) if (VAR_ROOM == 16) {
[00B5] (1E)   walkActorTo(7,80,54);
[00B9] (18) } else {
[00BC] (AE)   waitForMessage();
[00BD] (08)   if (VAR_ROOM != 4) {
[00C3] (B2)     setCameraAt(VAR_CAMERA_POS_X);
[00C5] (1C)     startSound(89);
[00C7] (**)   }
[00C7] (DB)   setBitVar(1464,Var[117],Var[234]);
[00CC] (2D)   putActorInRoom(7,16);
[00CF] (01)   putActor(7,73,58);
[00D3] (AD)   putActorInRoom(Var[117],16);
[00D6] (81)   putActor(Var[117],72,53);
[00DA] (62)   stopScript(64);
[00DC] (93)   ActorOps(Var[117],[Sound(6)]);
[00E0] (08)   if (VAR_ROOM != 4) {
[00E6] (2E)     delay(120);
[00EA] (**)   }
[00EA] (52)   actorFollowCamera(7);
[00EC] (2E)   delay(30);
[00F0] (1E)   walkActorTo(7,81,55);
[00F4] (**) }
[00F4] (D8) printEgo("Get in!");
[00FC] (2E) delay(60);
[0100] (B6) walkActorToObject(Var[117],332);
[0104] (19) doSentence(253,344,0,1);
[010B] (A8) if (Var[66]) {
[010F] (9E)   walkActorTo(Var[66],45,52);
[0113] (**) }
[0113] (3B) waitForActor(7);
[0115] (11) animateActor(7,247);
[0118] (BB) waitForActor(Var[117]);
[011A] (D8) printEgo("Stay!");
[0121] (4F) if (getState08(331)) {
[0126] (19)   doSentence(5,331,0,0);
[012D] (4C)   waitForSentence();
[012E] (11)   animateActor(7,244);
[0131] (18)   goto 00F4;
[0134] (**) }
[0134] (19) doSentence(4,331,0,0);
[013B] (4C) waitForSentence();
[013C] (4D) walkActorToActor(7,Var[117],2);
[0140] (3B) waitForActor(7);
[0142] (11) animateActor(7,247);
[0145] (3B) waitForActor(7);
[0147] (A8) if (Var[118]) {
[014B] (27)   setState04(328);
[014E] (D8)   printEgo("Oh, thanks for the artifact\x02");
[0168] (44)   if (Var[118] > 1) {
[016E] (D8)     printEgo("s\x02");
[0172] (**)   }
[0172] (D8)   printEgo(".");
[0175] (**) }
[0175] (AE) waitForMessage();
[0176] (D8) printEgo("See ya.");
[017E] (A0) stopObjectCode();
END

// Script 143
[0000] (AE) waitForMessage();
[0001] (48) if (VAR_ROOM == 4) {
[0007] (19)   doSentence(253,156,0,1);
[000E] (80)   breakHere();
[000F] (A8)   unless (Var[48]) goto 000E;
[0013] (2E)   delay(180);
[0017] (2D)   putActorInRoom(7,4);
[001A] (01)   putActor(7,30,48);
[001E] (11)   animateActor(7,248);
[0021] (42)   startScript(5);
[0023] (80)   breakHere();
[0024] (36)   walkActorToObject(7,152);
[0028] (62)   stopScript(0);
[002A] (**) }
[002A] (48) if (VAR_ROOM == 16) {
[0030] (A8)   if (Var[118]) {
[0034] (19)     doSentence(1,328,0,0);
[003B] (4C)     waitForSentence();
[003C] (2E)     delay(60);
[0040] (19)     doSentence(2,328,0,0);
[0047] (4C)     waitForSentence();
[0048] (**)   }
[0048] (A8)   if (Var[120]) {
[004C] (4F)     if (getState08(329)) {
[0051] (19)       doSentence(2,329,0,0);
[0058] (4C)       waitForSentence();
[0059] (**)     }
[0059] (11)     animateActor(7,246);
[005C] (2E)     delay(60);
[0060] (1C)     startSound(89);
[0062] (18)   } else {
[0065] (19)     doSentence(1,329,0,0);
[006C] (4C)     waitForSentence();
[006D] (2E)     delay(30);
[0071] (**)   }
[0071] (B2)   setCameraAt(VAR_CAMERA_POS_X);
[0073] (2D)   putActorInRoom(7,4);
[0076] (01)   putActor(7,22,52);
[007A] (2E)   delay(30);
[007E] (2F)   if (!getState04(330)) {
[0083] (19)     doSentence(2,329,0,1);
[008A] (**)   }
[008A] (2E)   delay(60);
[008E] (18) } else {
[0091] (18)   goto 0059;
[0094] (**) }
[0094] (A0) stopObjectCode();
END

// Script 144
[0000] (DB) setBitVar(1559,Var[235],Var[235]);
[0005] (1A) Var[147] = 2;
[0009] (3C) stopSound(93);
[000B] (80) breakHere();
[000C] (1C) startSound(24);
[000E] (57) setState02(285);
[0011] (2E) delay(30);
[0015] (D8) printEgo("Uh oh, I killed it.");
[0026] (5A) Var[225] += 12;
[002A] (10) VAR_RESULT = getObjectOwner(51);
[002E] (C8) if (VAR_RESULT == VAR_EGO) {
[0033] (80)   breakHere();
[0034] (48)   unless (VAR_ROOM == 144) goto 0033;
[003A] (2E)   delay(180);
[003E] (AE)   waitForMessage();
[003F] (29)   setOwnerOf(51,0);
[0043] (91)   animateActor(VAR_EGO,246);
[0046] (D8)   printEgo("I'm hungry! I think I'll eat these\x01peanuts.");
[006D] (**) }
[006D] (A0) stopObjectCode();
END

// Script 145
[0000] (48) if (VAR_ACTIVE_VERB == 11) {
[0006] (48)   if (VAR_ACTIVE_OBJECT1 == 448) {
[000C] (18)     goto 0051;
[000F] (**)   }
[000F] (**) }
[000F] (48) if (VAR_ACTIVE_VERB == 3) {
[0015] (9A)   Var[14] = VAR_EGO;
[0018] (5A)   Var[14] += 147;
[001C] (EA)   Var[Var[14]] -= Var[235];
[001F] (9A)   Var[14] = VAR_EGO;
[0022] (5A)   Var[14] += 147;
[0026] (9A)   Var[66] = Var[14];
[0029] (D8)   printEgo("Here's one token.");
[003A] (A8)   if (Var[66]) {
[003E] (C8)     if (Var[66] == Var[235]) {
[0043] (D4)       setObjectName(VAR_ACTIVE_OBJECT1,"token");
[004B] (**)     }
[004B] (18)   } else {
[004E] (A9)     setOwnerOf(VAR_ACTIVE_OBJECT1,14);
[0051] (**)   }
[0051] (9A)   Var[14] = VAR_ACTIVE_OBJECT2;
[0054] (5A)   Var[14] += 147;
[0058] (AA)   Var[Var[14]] += Var[235];
[005B] (48)   if (VAR_ACTIVE_OBJECT2 == 1) {
[0061] (1A)     Var[66] = 61;
[0065] (**)   }
[0065] (48)   if (VAR_ACTIVE_OBJECT2 == 3) {
[006B] (1A)     Var[66] = 62;
[006F] (**)   }
[006F] (48)   if (VAR_ACTIVE_OBJECT2 == 4) {
[0075] (1A)     Var[66] = 63;
[0079] (**)   }
[0079] (9A)   Var[14] = VAR_ACTIVE_OBJECT2;
[007C] (5A)   Var[14] += 147;
[0080] (C8)   if (Var[14] == Var[235]) {
[0085] (E9)     setOwnerOf(Var[66],VAR_ACTIVE_OBJECT2);
[0088] (18)   } else {
[008B] (D4)     setObjectName(Var[66],"tokens");
[0094] (**)   }
[0094] (**) }
[0094] (48) if (VAR_ACTIVE_VERB == 12) {
[009A] (9A)   Var[14] = VAR_EGO;
[009D] (5A)   Var[14] += 147;
[00A1] (9A)   Var[66] = Var[14];
[00A4] (D8)   printEgo("`One way fare.`\x01I have \x04\x42 of them.");
[00C3] (**) }
[00C3] (A0) stopObjectCode();
END

// Script 146
[0000] (40) cutscene();
[0001] (9A) Var[117] = VAR_EGO;
[0004] (9A) VAR_EGO = Var[118];
[0007] (58) beginOverride();
[0008] (18) goto 00A1;
[000B] (D2) actorFollowCamera(VAR_EGO);
[000D] (2E) delay(120);
[0011] (91) animateActor(VAR_EGO,246);
[0014] (BB) waitForActor(VAR_EGO);
[0016] (C3) Var[66] = getActorX(VAR_EGO);
[0019] (DE) walkActorTo(VAR_EGO,Var[66],63);
[001D] (D8) printEgo("My helmet reads just \x02");
[0031] (48) if (Var[254] == 30) {
[0037] (D8)   printEgo("7\x02");
[003B] (18) } else {
[003E] (D8)   printEgo("2\x02");
[0042] (**) }
[0042] (D8) printEgo(" minutes of oxygen\x01left!");
[005A] (AE) waitForMessage();
[005B] (48) if (Var[254] == 30) {
[0061] (D8)   printEgo("I'd better hurry and refill it or find\x01a place where I can take it off!");
[009C] (AE)   waitForMessage();
[009D] (**) }
[009D] (2E) delay(60);
[00A1] (14) print(255,"");
[00A4] (9A) VAR_EGO = Var[117];
[00A7] (1A) Var[254] = 10;
[00AB] (C0) endCutscene();
[00AC] (A0) stopObjectCode();
END

// Script 147
[0000] (2E) delay(108000);
[0004] (2E) delay(300);
[0008] (03) VAR_RESULT = getActorRoom(1);
[000B] (48) if (VAR_RESULT == 5) {
[0011] (18)   goto 0004;
[0014] (**) }
[0014] (4A) chainScript(148);
[0016] (A0) stopObjectCode();
END

// Script 148
[0000] (40) cutscene();
[0001] (72) loadRoom(5);
[0003] (32) setCameraAt(45);
[0005] (0C) loadCostume(2)
[0008] (2E) delay(120);
[000C] (30) setBoxFlags(14,0);
[000F] (2D) putActorInRoom(2,5);
[0012] (01) putActor(2,46,36);
[0016] (11) animateActor(2,250);
[0019] (67) clearState04(162);
[001C] (19) doSentence(1,162,0,1);
[0023] (2E) delay(60);
[0027] (1E) walkActorTo(2,45,40);
[002B] (3B) waitForActor(2);
[002D] (9A) Var[121] = Var[234];
[0030] (11) animateActor(2,244);
[0033] (2E) delay(60);
[0037] (11) animateActor(2,245);
[003A] (2E) delay(60);
[003E] (11) animateActor(2,246);
[0041] (2E) delay(30);
[0045] (28) if (!Var[121]) {
[0049] (14)   print(2,"What could be keeping him?");
[0062] (AE)   waitForMessage();
[0063] (46)   Var[121]++;
[0065] (18)   goto 0030;
[0068] (18) } else {
[006B] (14)   print(2,"He should have been here by now!");
[0088] (**) }
[0088] (AE) waitForMessage();
[0089] (2E) delay(60);
[008D] (1E) walkActorTo(2,46,36);
[0091] (3B) waitForActor(2);
[0093] (11) animateActor(2,246);
[0096] (2E) delay(30);
[009A] (1C) startSound(11);
[009C] (47) clearState08(162);
[009F] (27) setState04(162);
[00A2] (2D) putActorInRoom(2,6);
[00A5] (01) putActor(2,20,16);
[00A9] (2E) delay(120);
[00AD] (C0) endCutscene();
[00AE] (A0) stopObjectCode();
END

// Script 149: Win Game
[0000] (0C) unlockUnkResType0(0)
[0003] (0C) loadSound(102)
[0006] (0C) lockSound(102)
[0009] (0C) loadSound(104)
[000C] (0C) lockSound(104)
[000F] (47) clearState08(423);
[0012] (47) clearState08(422);
[0015] (1A) Var[167] = 52;
[0019] (1A) Var[164] = 44;
[001D] (72) loadRoom(25);
[001F] (32) setCameraAt(24);
[0021] (19) doSentence(250,433,0,1);
[0028] (53) ActorOps(1,[Sound(Var[234])]);
[002C] (53) ActorOps(2,[Sound(Var[234])]);
[0030] (80) breakHere();
[0031] (02) startMusic(102);
[0033] (19) doSentence(253,432,0,1);
[003A] (9E) walkActorTo(Var[200],21,53);
[003E] (80) breakHere();
[003F] (80) breakHere();
[0040] (9E) walkActorTo(Var[201],24,53);
[0044] (BB) waitForActor(Var[200]);
[0046] (BB) waitForActor(Var[201]);
[0048] (91) animateActor(Var[200],245);
[004B] (91) animateActor(Var[201],244);
[004E] (2E) delay(60);
[0052] (11) animateActor(1,24);
[0055] (11) animateActor(2,24);
[0058] (2E) delay(420);
[005C] (9E) walkActorTo(Var[201],23,53);
[0060] (91) animateActor(Var[200],12);
[0063] (2E) delay(120);
[0067] (91) animateActor(Var[200],24);
[006A] (14) print(255,"            CONGRATULATIONS!\x01YOU HAVE SAVED THE WORLD FROM STUPIDITY!");
[00A6] (2E) delay(420);
[00AA] (9E) walkActorTo(Var[201],24,63);
[00AE] (80) breakHere();
[00AF] (80) breakHere();
[00B0] (9E) walkActorTo(Var[200],21,63);
[00B4] (BB) waitForActor(Var[200]);
[00B6] (91) animateActor(Var[200],246);
[00B9] (2E) delay(120);
[00BD] (91) animateActor(Var[200],245);
[00C0] (91) animateActor(Var[201],244);
[00C3] (9A) VAR_TIMER_NEXT = Var[234];
[00C6] (2E) delay(120);
[00CA] (14) print(255,"                EPILOGUE");
[00DD] (AE) waitForMessage();
[00DE] (2E) delay(60);
[00E2] (14) print(255,"The King and his Caponian gang left\x01Earth for good^\x03^and continued their galactic search for\x01`stupider` life forms.");
[0149] (AE) waitForMessage();
[014A] (2E) delay(30);
[014E] (14) print(255,"The people of Earth rapidly regained\x01their former level of intelligence^\x03^and traded in good karma for the latest\x01food fad, two-headed squirrel burgers.");
[01D5] (AE) waitForMessage();
[01D6] (2E) delay(30);
[01DA] (14) print(255,"No one trusted The Phone Company\x01anymore^\x03^so telepathic conversations and\x01dream-sharing became the norm^\x03^at $2.50 for the first 3 minutes\x01after 11:00 PM.");
[0265] (AE) waitForMessage();
[0266] (2E) delay(30);
[026A] (9A) Var[117] = Var[234];
[026D] (31) VAR_RESULT = getBitVar(1473,0);
[0272] (28) if (!VAR_RESULT) {
[0276] (46)   Var[117]++;
[0278] (1A)   Var[118] = 3;
[027C] (**) }
[027C] (31) VAR_RESULT = getBitVar(1474,0);
[0281] (28) if (!VAR_RESULT) {
[0285] (46)   Var[117]++;
[0287] (1A)   Var[118] = 4;
[028B] (**) }
[028B] (A8) if (Var[117]) {
[028F] (C8)   if (Var[117] == Var[235]) {
[0294] (14)     print(255,"\x06\x76's\x02");
[029C] (18)   } else {
[029F] (14)     print(255,"The coeds'\x02");
[02AC] (**)   }
[02AC] (14)   print(255," Spring Break became \x02");
[02C2] (C8)   if (Var[117] == Var[235]) {
[02C7] (14)     print(255,"her\x01\x02");
[02CF] (18)   } else {
[02D2] (14)     print(255,"their\x01\x02");
[02DC] (**)   }
[02DC] (14)   print(255,"Big Break.\x03A famous movie producer starred \x02");
[0305] (AE)   waitForMessage();
[0306] (C8)   if (Var[117] == Var[235]) {
[030B] (14)     print(255,"her\x02");
[0312] (18)   } else {
[0315] (14)     print(255,"them\x02");
[031D] (**)   }
[031D] (14)   print(255," in\x01the box office smash, `Mars Needs Men`.");
[0345] (AE)   waitForMessage();
[0346] (2E)   delay(30);
[034A] (**) }
[034A] (AE) waitForMessage();
[034B] (2E) delay(30);
[034F] (14) print(255,"Zak won the Nobel Peace Prize for saving\x01the world.\x03Then he won the Pulitzer for writing a\x01book about it.");
[03AA] (AE) waitForMessage();
[03AB] (2E) delay(30);
[03AF] (91) animateActor(Var[200],246);
[03B2] (91) animateActor(Var[201],246);
[03B5] (80) breakHere();
[03B6] (14) print(255,"Zak and Annie fell in love.\x03And their life together was even better\x01than their wildest dreams.");
[0409] (AE) waitForMessage();
[040A] (2E) delay(60);
[040E] (91) animateActor(Var[200],245);
[0411] (91) animateActor(Var[201],244);
[0414] (2E) delay(30);
[0418] (14) print(255,"                THE  END");
[042A] (AE) waitForMessage();
[042B] (2E) delay(180);
[042F] (14) print(255,"                SEE  YA!");
[0441] (A0) stopObjectCode();
END

// Script 150
[0000] (51) animateActor(7,Var[245]);
[0003] (51) animateActor(2,Var[165]);
[0006] (51) animateActor(2,Var[168]);
[0009] (51) animateActor(3,Var[169]);
[000C] (51) animateActor(4,Var[170]);
[000F] (28) if (!Var[163]) {
[0013] (51)   animateActor(1,Var[164]);
[0016] (51)   animateActor(1,Var[167]);
[0019] (08)   if (Var[167] != 64) {
[001F] (11)     animateActor(1,68);
[0022] (**)   }
[0022] (18) } else {
[0025] (51)   animateActor(1,Var[163]);
[0028] (**) }
[0028] (A0) stopObjectCode();
END
