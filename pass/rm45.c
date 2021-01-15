/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 45: Loom Room (looroom)
 */

// EN
[0000] (1A) Var[321] = 167;
[0005] (48) if (VAR_VIDEOMODE == 4) {
[000C] (0A)   startScript(136,[40]);
[0012] (18) } else {
[0015] (0A)   startScript(136,[16]);
[001B] (**) }
[001B] (5D) setClass(1,[0,151]);
[0025] (0A) startScript(126,[0]);
[002B] (13) ActorOps(1,[TalkColor(15)]);
[0030] (30) setBoxFlags(0,0);
[0034] (30) setBoxFlags(1,0);
[0038] (30) setBoxFlags(2,0);
[003C] (30) setBoxFlags(3,160);
[0040] (0C) Resource.loadCostume(74);
[0043] (0C) Resource.loadCostume(60);
[0046] (0C) Resource.loadCostume(61);
[0049] (0C) Resource.loadCostume(62);
[004C] (0C) Resource.loadCostume(63);
[004F] (0C) Resource.loadCostume(64);
[0052] (0C) Resource.loadCostume(66);
[0055] (0C) Resource.loadCostume(67);
[0058] (0C) Resource.loadCostume(31);
[005B] (A8) if (Bit[89]) {
[0060] (5D)   setClass(606,[152]);
[0067] (5D)   setClass(607,[24]);
[006E] (A8)   if (Bit[107]) {
[0073] (0A)     startScript(173,[]);
[0076] (A8)   } else if (Bit[108]) {
[007E] (0A)     startScript(174,[]);
[0081] (A8)   } else if (Bit[109]) {
[0089] (1D)     if (classOfIs(613,[24])) {
[0092] (0A)       startScript(175,[]);
[0095] (18)     } else {
[0098] (5D)       setClass(622,[24]);
[009F] (**)     }
[009F] (**)   }
[009F] (A8)   unless (Bit[125]) goto 00A4;
[00A4] (5D)   setClass(609,[152]);
[00AB] (5D)   setClass(610,[152]);
[00B2] (1D) } else if (classOfIs(609,[24])) {
[00BE] (0A)   startScript(158,[]);
[00C1] (1D)   if (classOfIs(610,[24])) {
[00CA] (0A)     startScript(163,[]);
[00CD] (**)   }
[00CD] (**) }
[00CD] (5D) setClass(12,[0,150,148]);
[00DA] (13) ActorOps(12,[Costume(74),Elevation(100)]);
[00E2] (11) animateCostume(12,250);
[00E5] (2A) startScript(161,[],F);
[00E8] (2A) startScript(162,[],F);
[00EB] (00) stopObjectCode();
END

// EX
[0000] (62) stopScript(161);
[0002] (62) stopScript(162);
[0004] (5D) setClass(1,[0]);
[000B] (00) stopObjectCode();
END

// Object 606
Events:
   A - 0018
[0018] (5D) setClass(593,[24]);
[001F] (24) loadRoomWithEgo(593,44,642,131);
[0027] (00) stopObjectCode();
END

// Object 607
Events:
   A - 0022
  36 - 0022
  37 - 001E
[001E] (0A) startScript(169,[]);
[0021] (00) stopObjectCode();
[0022] (A8) if (Bit[89]) {
[0027] (A8)   if (Bit[125]) {
[002C] (0A)     startScript(171,[]);
[002F] (**)   }
[002F] (**) }
[002F] (00) stopObjectCode();
END

// Object 608
Events:
   A - 0018
[0018] (0A) startScript(171,[]);
[001B] (00) stopObjectCode();
END

// Object 609: Egg
Events:
   1 - 0041
  36 - 002A
  38 - 0024
  53 - 007D
[0024] (1A) Var[200] = 615;
[0029] (00) stopObjectCode();
[002A] (40) cutscene([0]);
[002F] (0A) startScript(160,[]);
[0032] (80) breakHere();
[0033] (68) VAR_RESULT = isScriptRunning(160);
[0037] (28) unless (!VAR_RESULT) goto 0032;
[003C] (0A) startScript(168,[]);
[003F] (C0) endCutscene();
[0040] (00) stopObjectCode();
[0041] (0A) startScript(165,[0]);
[0047] (0A) startScript(127,[0]);
[004D] (28) if (!Bit[76]) {
[0052] (0A)   startScript(129,[0]);
[0058] (0A)   startScript(127,[2]);
[005E] (A8)   if (Bit[76]) {
[0063] (0A)     startScript(127,[1]);
[0069] (A8)     if (Bit[76]) {
[006E] (28)       if (!Bit[13]) {
[0073] (0A)         startScript(133,[4,10]);
[007C] (**)       }
[007C] (**)     }
[007C] (**)   }
[007C] (**) }
[007C] (00) stopObjectCode();
[007D] (0A) startScript(110,[10,140,131]);
[0089] (14) print(1,[Center(),Text("That draft won't work on an egg.")]);
[00AE] (00) stopObjectCode();
END

// Object 610: Distaff
Events:
   A - 0028
  38 - 0022
[0022] (1A) Var[200] = 617;
[0027] (00) stopObjectCode();
[0028] (28) if (!Bit[67]) {
[002D] (40)   cutscene([0]);
[0032] (1A)   Bit[67] = 1;
[0037] (5D)   setClass(610,[152]);
[003E] (2D)   putActorInRoom(1,0);
[0041] (11)   animateCostume(11,6);
[0044] (80)   breakHere();
[0045] (80)   breakHere();
[0046] (80)   breakHere();
[0047] (80)   breakHere();
[0048] (80)   breakHere();
[0049] (2D)   putActorInRoom(11,0);
[004C] (2D)   putActorInRoom(1,45);
[004F] (0E)   putActorAtObject(1,610);
[0053] (0A)   startScript(126,[0]);
[0059] (80)   breakHere();
[005A] (1A)   Var[199] = 0;
[005F] (0A)   startScript(100,[0]);
[0065] (0A)   startScript(134,[2]);
[006B] (80)   breakHere();
[006C] (11)   animateCostume(1,250);
[006F] (80)   breakHere();
[0070] (14)   print(1,[Center(),Pos(160,120),Text("Feels heavier than it looks.")]);
[0096] (80)   breakHere();
[0097] (C0)   endCutscene();
[0098] (**) }
[0098] (00) stopObjectCode();
END

// Object 611: Loom
Events:
  36 - 002B
  38 - 0025
  4F - 002F
  53 - 0030
[0025] (1A) Var[200] = 618;
[002A] (00) stopObjectCode();
[002B] (0A) startScript(164,[]);
[002E] (00) stopObjectCode();
[002F] (00) stopObjectCode();
[0030] (0A) startScript(110,[10,160,50]);
[003C] (14) print(1,[Center(),Text("That draft won't work on the Loom.")]);
[0063] (00) stopObjectCode();
END

// Object 612: Hetchel
Events:
  36 - 0041
  38 - 002E
  4A - 00B8
  4C - 009A
  4E - 00A9
  53 - 0136
[002E] (A8) if (Bit[108]) {
[0033] (1A)   Var[200] = 619;
[0038] (18) } else {
[003B] (1A)   Var[200] = 616;
[0040] (**) }
[0040] (00) stopObjectCode();
[0041] (A8) if (Bit[107]) {
[0046] (14)   print(1,[Center(),Text("Strange. Her beak is moving, but" + newline() + "she can't make a sound!")]);
[0084] (18) } else {
[0087] (14)   print(1,[Center(),Text("Poor Hetchel.")]);
[0099] (**) }
[0099] (00) stopObjectCode();
[009A] (A8) if (Bit[107]) {
[009F] (0A)   startScript(177,[]);
[00A2] (18) } else {
[00A5] (0A)   startScript(176,[]);
[00A8] (**) }
[00A8] (00) stopObjectCode();
[00A9] (A8) if (Bit[108]) {
[00AE] (0A)   startScript(178,[]);
[00B1] (18) } else {
[00B4] (0A)   startScript(176,[]);
[00B7] (**) }
[00B7] (00) stopObjectCode();
[00B8] (A8) if (Bit[108]) {
[00BD] (18) } else {
[00C0] (A8)   unless (Bit[107]) goto 0132;
[00C5] (**) }
[00C5] (40) cutscene([]);
[00C7] (1A) Bit[73] = 1;
[00CC] (80) breakHere();
[00CD] (28) unless (!Bit[72]) goto 00CC;
[00D2] (1A) Bit[70] = 0;
[00D7] (80) breakHere();
[00D8] (28) unless (!Bit[71]) goto 00D7;
[00DD] (0A) startScript(179,[]);
[00E0] (80) breakHere();
[00E1] (68) VAR_RESULT = isScriptRunning(179);
[00E5] (28) unless (!VAR_RESULT) goto 00E0;
[00EA] (14) print(1,[Center(),Text("That didn't help. She must be under" + newline() + "some kind of magic spell.")]);
[012D] (80) breakHere();
[012E] (C0) endCutscene();
[012F] (18) goto 0135;
[0132] (0A) startScript(176,[]);
[0135] (00) stopObjectCode();
[0136] (0A) startScript(176,[]);
[0139] (00) stopObjectCode();
END

// Object 613: Feather
Events:
   A - 002B
  36 - 002B
  38 - 0025
[0025] (1A) Var[200] = 620;
[002A] (00) stopObjectCode();
[002B] (28) unless (!Bit[120]) goto 0030;
[0030] (00) stopObjectCode();
END

// Object 614: Dead One
Events:
   A - 002C
  38 - 0026
  53 - 0030
[0026] (1A) Var[200] = 621;
[002B] (00) stopObjectCode();
[002C] (0A) startScript(171,[]);
[002F] (00) stopObjectCode();
[0030] (00) stopObjectCode();
END

// Objects 615-622
Events:
END
