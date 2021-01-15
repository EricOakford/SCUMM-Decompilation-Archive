// Script 1: Game Initialization
[0000] (1A) VAR_NUM_ACTOR = 13;
[0004] (1A) VAR_MACHINE_SPEED = 13;
[0008] (26) setVarRange(Var[234],2,[0,1]);
[000D] (1A) VAR_TIMER_NEXT = 6;
[0011] (1A) VAR_EGO = 1;
[0015] (13) ActorOps(1,[Color(9, 0)]);
[001A] (13) ActorOps(1,[Color(14, 0)]);
[001F] (13) ActorOps(1,[TalkColor(10)]);
[0023] (13) ActorOps(2,[TalkColor(13)]);
[0027] (13) ActorOps(1,[Sound(6)]);
[002B] (13) ActorOps(1,[Costume(1)]);
[002F] (26) setVarRange(Var[164],2,[44,44]);
[0034] (26) setVarRange(Var[166],5,[0,52,52,36,36]);
[003C] (42) startScript(4);
[003E] (1A) VAR_CUTSCENEEXIT_KEY = 27;
[0042] (72) loadRoom(0);
[0044] (60) cursorCommand(4, 0);
[0047] (80) breakHere();
[0048] (0C) lockScript(150)
[004B] (0C) lockScript(5)
[004E] (0C) lockScript(12)
[0051] (0C) loadCostume(9)
[0054] (0C) lockCostume(9)
[0057] (0C) loadCostume(1)
[005A] (0C) lockCostume(1)
[005D] (0C) loadCostume(2)
[0060] (0C) loadCostume(28)
[0063] (0C) loadCostume(24)
[0066] (0C) loadRoom(58)
[0069] (0C) loadRoom(6)
[006C] (0C) loadRoom(20)
[006F] (0C) loadRoom(44)
[0072] (0C) loadRoom(16)
[0075] (0C) loadRoom(2)
[0078] (0C) loadRoom(1)
[007B] (0C) loadRoom(5)
[007E] (0C) loadSound(95)
[0081] (0C) loadSound(89)
[0084] (0C) lockSound(89)
[0087] (0C) loadSound(6)
[008A] (0C) loadSound(7)
[008D] (0C) loadSound(10)
[0090] (0C) loadSound(19)
[0093] (0C) loadSound(29)
[0096] (0C) loadSound(83)
[0099] (0C) loadSound(2)
[009C] (0C) loadCostume(3)
[009F] (0C) loadCostume(4)
[00A2] (13) ActorOps(2,[Costume(2)]);
[00A6] (40) cutscene();
[00A7] (72) loadRoom(58);
[00A9] (2D) putActorInRoom(1,58);
[00AC] (01) putActor(1,8,59);
[00B0] (05) drawObject(766,255,255);
[00B5] (7A) VerbOps(New-1(8,19,1,0,"Lucasfilm Games presents"));
[00D4] (7A) VerbOps(New-2(0,21,2,0,"Zak McKracken and the Alien Mindbenders"));
[0102] (60) cursorCommand(0, 0);
[0105] (80) breakHere();
[0106] (60) cursorCommand(132, 0);
[0109] (2E) delay(120);
[010D] (05) drawObject(767,255,255);
[0112] (2E) delay(120);
[0116] (11) animateActor(1,24);
[0119] (2E) delay(60);
[011D] (05) drawObject(768,255,255);
[0122] (2E) delay(120);
[0126] (2D) putActorInRoom(1,0);
[0129] (01) putActor(1,10,48);
[012D] (11) animateActor(1,247);
[0130] (60) cursorCommand(4, 0);
[0133] (72) loadRoom(6);
[0135] (32) setCameraAt(20);
[0137] (60) cursorCommand(132, 0);
[013A] (2D) putActorInRoom(1,6);
[013D] (01) putActor(1,10,48);
[0141] (2E) delay(30);
[0145] (14) print(1,"Tum di dum di tum di dum.");
[015B] (2E) delay(55);
[015F] (D8) printEgo(" ");
[0162] (11) animateActor(1,24);
[0165] (80) breakHere();
[0166] (11) animateActor(1,246);
[0169] (80) breakHere();
[016A] (1E) walkActorTo(1,15,62);
[016E] (2E) delay(60);
[0172] (2E) delay(30);
[0176] (14) print(1,"Hi, I'm Zak McKracken. I'm the good guy\x01in this story.");
[01A6] (AE) waitForMessage();
[01A7] (D8) printEgo("With the great graphics and gags galore,\x01there are lots of mindbending puzzles.");
[01ED] (AE) waitForMessage();
[01EE] (11) animateActor(1,245);
[01F1] (80) breakHere();
[01F2] (1E) walkActorTo(1,20,62);
[01F6] (3B) waitForActor(1);
[01F8] (11) animateActor(1,245);
[01FB] (80) breakHere();
[01FC] (11) animateActor(1,246);
[01FF] (80) breakHere();
[0200] (14) print(1,"But you've got to give me a hand. I\x01won't be able to solve them on my own.");
[023D] (AE) waitForMessage();
[023E] (11) animateActor(1,247);
[0241] (80) breakHere();
[0242] (1E) walkActorTo(1,23,50);
[0246] (3B) waitForActor(1);
[0248] (11) animateActor(1,245);
[024B] (80) breakHere();
[024C] (11) animateActor(1,246);
[024F] (80) breakHere();
[0250] (60) cursorCommand(4, 0);
[0253] (9A) Var[66] = Var[234];
[0256] (FA) VerbOps(Delete(Var[66]););
[0259] (46) Var[66]++;
[025B] (44) unless (Var[66] > 2) goto 0256;
[0261] (7A) VerbOps(New-9(0,19,0,0,"Push@@"));
[026E] (7A) VerbOps(New-10(0,20,5,0,"Pull@@"));
[027B] (7A) VerbOps(New-3(0,21,10,4,"Give@@"));
[0288] (7A) VerbOps(New-1(6,19,1,0,"Open@@@"));
[0296] (7A) VerbOps(New-2(6,20,6,0,"Close@@"));
[02A4] (7A) VerbOps(New-12(6,21,11,0,"Read@@@"));
[02B2] (7A) VerbOps(New-13(13,19,2,0,"Walk to@@"));
[02C2] (7A) VerbOps(New-14(13,20,7,0,"Pick up@@"));
[02D2] (7A) VerbOps(New-15(13,21,12,0,"What is@@"));
[02E2] (7A) VerbOps(New-6(22,19,3,0,"Put on@@@@"));
[02F3] (7A) VerbOps(New-7(22,20,8,0,"Take off@@"));
[0304] (7A) VerbOps(New-11(22,21,13,255,"Use@@@@@@@"));
[0315] (7A) VerbOps(New-4(32,19,4,0,"Turn on@"));
[0324] (7A) VerbOps(New-5(32,20,9,0,"Turn off"));
[0333] (7A) VerbOps(Delete(14));
[0336] (60) cursorCommand(0, 0);
[0339] (80) breakHere();
[033A] (60) cursorCommand(132, 0);
[033D] (2E) delay(30);
[0341] (14) print(1,"Actually, it's easy. All you do is\x01point at a verb^ point at an object^");
[037E] (AE) waitForMessage();
[037F] (14) print(1,"^and click! For example, if you click on\x01`open + door`, I will open the door.");
[03C1] (2E) delay(120);
[03C5] (2E) delay(30);
[03C9] (1E) walkActorTo(1,0,55);
[03CD] (3B) waitForActor(1);
[03CF] (07) setState08(172);
[03D2] (1C) startSound(10);
[03D4] (2E) delay(35);
[03D8] (1E) walkActorTo(1,5,55);
[03DC] (3B) waitForActor(1);
[03DE] (11) animateActor(1,246);
[03E1] (2E) delay(15);
[03E5] (14) print(1,"It's that simple. And there's NO typing\x01like in OTHER story games.");
[0420] (AE) waitForMessage();
[0421] (1E) walkActorTo(1,0,55);
[0425] (2E) delay(20);
[0429] (72) loadRoom(5);
[042B] (32) setCameraAt(48);
[042D] (2D) putActorInRoom(1,5);
[0430] (01) putActor(1,50,18);
[0434] (11) animateActor(1,246);
[0437] (80) breakHere();
[0438] (67) clearState04(162);
[043B] (19) doSentence(1,162,0,1);
[0442] (52) actorFollowCamera(1);
[0444] (1E) walkActorTo(1,45,40);
[0448] (3B) waitForActor(1);
[044A] (14) print(1,"The bad guys in this story are the\x01Alien Mindbenders.");
[047A] (AE) waitForMessage();
[047B] (D8) printEgo("They've got a machine to make us all\x01real stupid.");
[04A6] (2E) delay(180);
[04AA] (1E) walkActorTo(1,24,44);
[04AE] (3B) waitForActor(1);
[04B0] (11) animateActor(1,250);
[04B3] (80) breakHere();
[04B4] (AE) waitForMessage();
[04B5] (11) animateActor(1,24);
[04B8] (80) breakHere();
[04B9] (2E) delay(15);
[04BD] (14) print(1,"Listen carefully, here is how to stop\x01those crazy Aliens. First you^");
[04FA] (2E) delay(300);
[04FE] (60) cursorCommand(4, 0);
[0501] (72) loadRoom(16);
[0503] (32) setCameraAt(20);
[0505] (2E) delay(60);
[0509] (52) actorFollowCamera(7);
[050B] (14) print(7,"Hello. This is a `CUT-SCENE`.");
[0527] (AE) waitForMessage();
[0528] (1E) walkActorTo(7,32,52);
[052C] (3B) waitForActor(7);
[052E] (11) animateActor(7,246);
[0531] (80) breakHere();
[0532] (2E) delay(30);
[0536] (14) print(7,"You didn't think we would allow Zak\x01to tell you how to beat us!");
[056C] (AE) waitForMessage();
[056D] (1E) walkActorTo(7,41,52);
[0571] (3B) waitForActor(7);
[0573] (11) animateActor(7,246);
[0576] (80) breakHere();
[0577] (2E) delay(30);
[057B] (14) print(7,"By the way^ let me show you a wonderful\x01machine a BROTHER and I built.");
[05B7] (AE) waitForMessage();
[05B8] (1E) walkActorTo(7,57,52);
[05BC] (3B) waitForActor(7);
[05BE] (11) animateActor(7,246);
[05C1] (80) breakHere();
[05C2] (2E) delay(30);
[05C6] (14) print(7,"Here it is.");
[05D2] (AE) waitForMessage();
[05D3] (14) print(12,"Wanna try to turn it off?");
[05EA] (AE) waitForMessage();
[05EB] (2E) delay(60);
[05EF] (2E) delay(20);
[05F3] (72) loadRoom(5);
[05F5] (32) setCameraAt(25);
[05F7] (80) breakHere();
[05F8] (60) cursorCommand(132, 0);
[05FB] (80) breakHere();
[05FC] (52) actorFollowCamera(1);
[05FE] (11) animateActor(1,250);
[0601] (80) breakHere();
[0602] (2E) delay(5);
[0606] (14) print(1,"^and that's how you defeat them.\x01Easy huh!");
[062D] (AE) waitForMessage();
[062E] (14) print(1,"You also get hints from the March 29th\x01issue of THE NATIONAL INQUISITOR.\x03I know, because I work for that sleazy\x01tabloid.");
[0697] (AE) waitForMessage();
[0698] (1E) walkActorTo(1,5,55);
[069C] (14) print(1,"Let me take you to some of the exotic\x01places we get to visit in this story.");
[06DB] (3B) waitForActor(1);
[06DD] (11) animateActor(1,250);
[06E0] (80) breakHere();
[06E1] (AE) waitForMessage();
[06E2] (14) print(1,"Shall we take the bus?");
[06F7] (2E) delay(10);
[06FB] (11) animateActor(1,247);
[06FE] (2E) delay(60);
[0702] (11) animateActor(1,246);
[0705] (80) breakHere();
[0706] (AE) waitForMessage();
[0707] (14) print(1,"Hmm^ On second thought, no one's\x01looking^");
[072E] (2E) delay(40);
[0732] (11) animateActor(1,244);
[0735] (80) breakHere();
[0736] (2E) delay(25);
[073A] (91) animateActor(VAR_EGO,245);
[073D] (80) breakHere();
[073E] (2E) delay(25);
[0742] (11) animateActor(1,246);
[0745] (80) breakHere();
[0746] (2E) delay(30);
[074A] (14) print(1,"Let's cheat.");
[0758] (AE) waitForMessage();
[0759] (2E) delay(10);
[075D] (2D) putActorInRoom(1,0);
[0760] (01) putActor(1,45,55);
[0764] (1C) startSound(89);
[0766] (2E) delay(40);
[076A] (13) ActorOps(1,[Costume(9)]);
[076E] (60) cursorCommand(4, 0);
[0771] (72) loadRoom(20);
[0773] (32) setCameraAt(60);
[0775] (80) breakHere();
[0776] (9A) Var[66] = Var[234];
[0779] (FA) VerbOps(Delete(Var[66]););
[077C] (46) Var[66]++;
[077E] (44) unless (Var[66] > 14) goto 0779;
[0784] (7A) VerbOps(New-1(8,19,1,0,"Lucasfilm Games presents"));
[07A3] (7A) VerbOps(New-2(0,21,2,0,"Zak McKracken and the Alien Mindbenders"));
[07D1] (60) cursorCommand(0, 0);
[07D4] (80) breakHere();
[07D5] (60) cursorCommand(132, 0);
[07D8] (2E) delay(60);
[07DC] (2D) putActorInRoom(1,20);
[07DF] (01) putActor(1,96,30);
[07E3] (1C) startSound(89);
[07E5] (2E) delay(10);
[07E9] (14) print(1,"HEEELLLOOOOOO. I'M OVER HERE.");
[0806] (2E) delay(10);
[080A] (12) panCameraTo(80);
[080C] (2E) delay(120);
[0810] (14) print(1,"CAN YOU SEE ME. I'M UP HERE.");
[0829] (91) animateActor(VAR_EGO,76);
[082C] (2E) delay(120);
[0830] (11) animateActor(1,6);
[0833] (1E) walkActorTo(1,90,25);
[0837] (3B) waitForActor(1);
[0839] (11) animateActor(1,246);
[083C] (80) breakHere();
[083D] (91) animateActor(VAR_EGO,76);
[0840] (80) breakHere();
[0841] (14) print(1,"LET'S GO TO LONDON.");
[0854] (AE) waitForMessage();
[0855] (11) animateActor(1,6);
[0858] (2E) delay(20);
[085C] (2D) putActorInRoom(1,0);
[085F] (01) putActor(1,10,60);
[0863] (1C) startSound(89);
[0865] (2E) delay(60);
[0869] (60) cursorCommand(4, 0);
[086C] (72) loadRoom(44);
[086E] (60) cursorCommand(132, 0);
[0871] (32) setCameraAt(20);
[0873] (2E) delay(60);
[0877] (2D) putActorInRoom(1,44);
[087A] (01) putActor(1,10,60);
[087E] (1C) startSound(89);
[0880] (2E) delay(60);
[0884] (14) print(1,"The puzzles are pretty hip, too.");
[08A2] (AE) waitForMessage();
[08A3] (52) actorFollowCamera(1);
[08A5] (1E) walkActorTo(1,28,60);
[08A9] (3B) waitForActor(1);
[08AB] (91) animateActor(VAR_EGO,246);
[08AE] (14) print(1,"For instance, could somebody help me get\x01inside this fence^");
[08E4] (AE) waitForMessage();
[08E5] (11) animateActor(1,247);
[08E8] (80) breakHere();
[08E9] (80) breakHere();
[08EA] (1C) startSound(29);
[08EC] (14) print(1,"YOWL!!!");
[08F6] (2E) delay(30);
[08FA] (11) animateActor(1,246);
[08FD] (80) breakHere();
[08FE] (11) animateActor(1,12);
[0901] (2E) delay(40);
[0905] (14) print(1,"^without getting my fingernails fried?");
[092A] (AE) waitForMessage();
[092B] (2E) delay(10);
[092F] (2D) putActorInRoom(1,0);
[0932] (01) putActor(1,20,55);
[0936] (1C) startSound(89);
[0938] (2E) delay(60);
[093C] (60) cursorCommand(4, 0);
[093F] (72) loadRoom(1);
[0941] (32) setCameraAt(20);
[0943] (60) cursorCommand(132, 0);
[0946] (2E) delay(120);
[094A] (2E) delay(30);
[094E] (2D) putActorInRoom(1,1);
[0951] (01) putActor(1,22,57);
[0955] (1C) startSound(89);
[0957] (2E) delay(120);
[095B] (1C) startSound(95);
[095D] (2E) delay(120);
[0961] (11) animateActor(1,245);
[0964] (80) breakHere();
[0965] (14) print(1,"Hey! That's my favorite song.\x01They started the party without me!");
[099F] (2E) delay(180);
[09A3] (11) animateActor(1,246);
[09A6] (80) breakHere();
[09A7] (AE) waitForMessage();
[09A8] (14) print(1,"Hmm^ Where did I put my party hat?");
[09C6] (2E) delay(120);
[09CA] (1E) walkActorTo(1,5,50);
[09CE] (3B) waitForActor(1);
[09D0] (AE) waitForMessage();
[09D1] (07) setState08(92);
[09D4] (14) print(1,"Ah! Found it.\x01Hi Sushi. Having fun today? Great.");
[0A00] (AE) waitForMessage();
[0A01] (07) setState08(15);
[0A04] (80) breakHere();
[0A05] (80) breakHere();
[0A06] (11) animateActor(1,48);
[0A09] (80) breakHere();
[0A0A] (47) clearState08(92);
[0A0D] (1E) walkActorTo(1,40,55);
[0A11] (3B) waitForActor(1);
[0A13] (07) setState08(84);
[0A16] (80) breakHere();
[0A17] (60) cursorCommand(4, 0);
[0A1A] (72) loadRoom(2);
[0A1C] (32) setCameraAt(20);
[0A1E] (60) cursorCommand(132, 0);
[0A21] (2D) putActorInRoom(1,2);
[0A24] (01) putActor(1,0,58);
[0A28] (11) animateActor(1,48);
[0A2B] (80) breakHere();
[0A2C] (1E) walkActorTo(1,8,60);
[0A30] (3B) waitForActor(1);
[0A32] (11) animateActor(1,246);
[0A35] (80) breakHere();
[0A36] (14) print(1,"The spaced-out space aliens in this\x01story are just a couple of the strange^\x03^and wonderful characters you'll meet^");
[0A9B] (AE) waitForMessage();
[0A9C] (2E) delay(20);
[0AA0] (1E) walkActorTo(1,27,60);
[0AA4] (2E) delay(60);
[0AA8] (2E) delay(20);
[0AAC] (12) panCameraTo(32);
[0AAE] (3B) waitForActor(1);
[0AB0] (11) animateActor(1,246);
[0AB3] (80) breakHere();
[0AB4] (2E) delay(15);
[0AB8] (14) print(2,"And Zak is just one of the terrific\x01people you'll control^");
[0AEC] (AE) waitForMessage();
[0AED] (14) print(2,"^along with me and a couple of\x01brilliant Yale coeds in^");
[0B1E] (2E) delay(60);
[0B22] (11) animateActor(4,24);
[0B25] (80) breakHere();
[0B26] (11) animateActor(3,24);
[0B29] (80) breakHere();
[0B2A] (AE) waitForMessage();
[0B2B] (2E) delay(20);
[0B2F] (14) print(2,"             Zak McKracken\x01      and the Alien Mindbenders");
[0B5F] (AE) waitForMessage();
[0B60] (11) animateActor(2,24);
[0B63] (80) breakHere();
[0B64] (11) animateActor(1,245);
[0B67] (80) breakHere();
[0B68] (11) animateActor(1,244);
[0B6B] (80) breakHere();
[0B6C] (11) animateActor(1,245);
[0B6F] (80) breakHere();
[0B70] (1E) walkActorTo(1,25,60);
[0B74] (3B) waitForActor(1);
[0B76] (11) animateActor(1,246);
[0B79] (80) breakHere();
[0B7A] (14) print(1,"OK EVERYBODY. LETS PARTY AND DO THE\x01McKRACKEN TWIST.");
[0BAA] (2E) delay(40);
[0BAE] (11) animateActor(1,247);
[0BB1] (80) breakHere();
[0BB2] (11) animateActor(1,246);
[0BB5] (80) breakHere();
[0BB6] (11) animateActor(1,249);
[0BB9] (80) breakHere();
[0BBA] (11) animateActor(2,248);
[0BBD] (80) breakHere();
[0BBE] (11) animateActor(3,244);
[0BC1] (80) breakHere();
[0BC2] (11) animateActor(4,245);
[0BC5] (80) breakHere();
[0BC6] (11) animateActor(1,248);
[0BC9] (80) breakHere();
[0BCA] (11) animateActor(2,250);
[0BCD] (80) breakHere();
[0BCE] (11) animateActor(4,246);
[0BD1] (80) breakHere();
[0BD2] (11) animateActor(3,245);
[0BD5] (80) breakHere();
[0BD6] (11) animateActor(1,246);
[0BD9] (80) breakHere();
[0BDA] (11) animateActor(2,247);
[0BDD] (80) breakHere();
[0BDE] (11) animateActor(3,244);
[0BE1] (80) breakHere();
[0BE2] (11) animateActor(4,245);
[0BE5] (80) breakHere();
[0BE6] (1E) walkActorTo(1,25,57);
[0BEA] (3B) waitForActor(1);
[0BEC] (1E) walkActorTo(4,22,60);
[0BF0] (3B) waitForActor(4);
[0BF2] (11) animateActor(1,245);
[0BF5] (80) breakHere();
[0BF6] (11) animateActor(2,246);
[0BF9] (80) breakHere();
[0BFA] (11) animateActor(4,244);
[0BFD] (80) breakHere();
[0BFE] (11) animateActor(3,245);
[0C01] (80) breakHere();
[0C02] (1E) walkActorTo(2,27,60);
[0C06] (3B) waitForActor(2);
[0C08] (1E) walkActorTo(1,30,57);
[0C0C] (3B) waitForActor(1);
[0C0E] (1E) walkActorTo(3,33,58);
[0C12] (3B) waitForActor(3);
[0C14] (11) animateActor(1,245);
[0C17] (80) breakHere();
[0C18] (11) animateActor(2,244);
[0C1B] (80) breakHere();
[0C1C] (11) animateActor(4,245);
[0C1F] (80) breakHere();
[0C20] (11) animateActor(3,244);
[0C23] (80) breakHere();
[0C24] (1E) walkActorTo(1,30,60);
[0C28] (14) print(1,"                 SEE YA");
[0C39] (3B) waitForActor(1);
[0C3B] (1E) walkActorTo(4,22,57);
[0C3F] (3B) waitForActor(4);
[0C41] (11) animateActor(3,246);
[0C44] (80) breakHere();
[0C45] (11) animateActor(2,246);
[0C48] (80) breakHere();
[0C49] (11) animateActor(4,246);
[0C4C] (80) breakHere();
[0C4D] (2E) delay(20);
[0C51] (18) goto 00A7;
[0C54] (C0) endCutscene();
[0C55] (A0) stopObjectCode();
END

// Script 2
[0000] (A0) stopObjectCode();
END

// Script 4
[0000] (48) if (VAR_CLICK_AREA == 4) {
[0006] (48)   if (VAR_KEYPRESS == 8) {
[000C] (98)     restart();
[000D] (**)   }
[000D] (**) }
[000D] (A0) stopObjectCode();
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
[006F] (A0) stopObjectCode();
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
