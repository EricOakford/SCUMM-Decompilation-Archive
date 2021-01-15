/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 42: tent
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(15,9)
[000D] (33)   RoomColor(15,11)
[0013] (33)   RoomColor(15,7)
[0019] (33)   RoomColor(0,2)
[001F] (**) }
[001F] (0A) startScript(136,[16]);
[0025] (0A) startScript(126,[0]);
[002B] (0C) Resource.loadCostume(48);
[002E] (5D) setClass(2,[0,148,150]);
[003B] (13) ActorOps(2,[Costume(48),Elevation(0),Palette(13,1)]);
[0046] (11) animateCostume(2,250);
[0049] (2D) putActorInRoom(2,42);
[004C] (01) putActor(2,59,78);
[0052] (11) animateCostume(2,6);
[0055] (0C) Resource.loadCostume(49);
[0058] (A8) if (Bit[97]) {
[005D] (05)   drawObject(564,255,255);
[0064] (05)   drawObject(565,255,255);
[006B] (05)   drawObject(566,255,255);
[0072] (05)   drawObject(567,255,255);
[0079] (18) } else {
[007C] (05)   drawObject(560,255,255);
[0083] (05)   drawObject(561,255,255);
[008A] (05)   drawObject(562,255,255);
[0091] (05)   drawObject(563,255,255);
[0098] (**) }
[0098] (A8) if (Bit[98]) {
[009D] (05)   drawObject(552,255,255);
[00A4] (18) } else {
[00A7] (05)   drawObject(551,255,255);
[00AE] (**) }
[00AE] (A8) if (Bit[99]) {
[00B3] (05)   drawObject(575,255,255);
[00BA] (05)   drawObject(576,255,255);
[00C1] (05)   drawObject(577,255,255);
[00C8] (18) } else {
[00CB] (05)   drawObject(572,255,255);
[00D2] (05)   drawObject(573,255,255);
[00D9] (05)   drawObject(574,255,255);
[00E0] (**) }
[00E0] (A8) if (Bit[100]) {
[00E5] (05)   drawObject(570,255,255);
[00EC] (05)   drawObject(571,255,255);
[00F3] (18) } else {
[00F6] (05)   drawObject(568,255,255);
[00FD] (05)   drawObject(569,255,255);
[0104] (**) }
[0104] (A8) if (Bit[102]) {
[0109] (0A)   startScript(202,[]);
[010C] (05)   drawObject(558,255,255);
[0113] (05)   drawObject(559,255,255);
[011A] (18) } else {
[011D] (05)   drawObject(554,255,255);
[0124] (05)   drawObject(555,255,255);
[012B] (**) }
[012B] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (80) breakHere();
[000B] (28) unless (!Bit[72]) goto 000A;
[0010] (1A) Bit[70] = 0;
[0015] (80) breakHere();
[0016] (28) unless (!Bit[71]) goto 0015;
[001B] (5D) setClass(3,[0,150,148]);
[0028] (13) ActorOps(3,[Costume(31),Elevation(0)]);
[0030] (11) animateCostume(3,250);
[0033] (2D) putActorInRoom(3,42);
[0036] (61) putActor(3,Local[1],Local[2]);
[003C] (51) animateCostume(3,Local[0]);
[0040] (0A) startScript(112,[23]);
[0046] (1A) Local[7] = 1;
[004B] (80) breakHere();
[004C] (46) Local[7]++;
[004F] (44) unless (Local[7] > 6) goto 004B;
[0056] (46) Local[0]++;
[0059] (51) animateCostume(3,Local[0]);
[005D] (1A) Local[7] = 1;
[0062] (80) breakHere();
[0063] (46) Local[7]++;
[0066] (44) unless (Local[7] > 12) goto 0062;
[006D] (A8) if (Local[3]) {
[0072] (85)   drawObject(Local[3],255,255);
[0079] (A8)   if (Local[4]) {
[007E] (85)     drawObject(Local[4],255,255);
[0085] (A8)     if (Local[5]) {
[008A] (85)       drawObject(Local[5],255,255);
[0091] (A8)       if (Local[6]) {
[0096] (85)         drawObject(Local[6],255,255);
[009D] (**)       }
[009D] (**)     }
[009D] (**)   }
[009D] (**) }
[009D] (1A) Local[7] = 1;
[00A2] (80) breakHere();
[00A3] (46) Local[7]++;
[00A6] (44) unless (Local[7] > 12) goto 00A2;
[00AD] (46) Local[0]++;
[00B0] (51) animateCostume(3,Local[0]);
[00B4] (1A) Local[7] = 1;
[00B9] (80) breakHere();
[00BA] (46) Local[7]++;
[00BD] (44) unless (Local[7] > 6) goto 00B9;
[00C4] (2D) putActorInRoom(3,0);
[00C7] (0A) startScript(100,[Var[198]]);
[00CD] (80) breakHere();
[00CE] (C0) endCutscene();
[00CF] (0A) startScript(127,[2]);
[00D5] (28) if (!Bit[76]) {
[00DA] (0A)   startScript(129,[2]);
[00E0] (14)   print(1,[Center(),Text("I changed the color!")]);
[00F9] (0A)   startScript(127,[0]);
[00FF] (A8)   if (Bit[76]) {
[0104] (0A)     startScript(127,[1]);
[010A] (A8)     if (Bit[76]) {
[010F] (28)       if (!Bit[13]) {
[0114] (42)         chainScript(133,[4,3]);
[011D] (11)         animateCostume(1,250);
[0120] (**)       }
[0120] (**)     }
[0120] (**)   }
[0120] (**) }
[0120] (28) if (!Bit[133]) {
[0125] (AE)   WaitForMessage();
[0127] (14)   print(1,[Center(),Text("Maybe there is a way to UNdye something?")]);
[0154] (1A)   Bit[133] = 1;
[0159] (**) }
[0159] (A0) stopObjectCode();
END

Script# 201
[0000] (40) cutscene([0]);
[0005] (14) print(1,[Center(),Text("It's bubbling.")]);
[0018] (0A) startScript(116,[]);
[001B] (0A) startScript(127,[2]);
[0021] (1A) Local[0] = 0;
[0026] (9A) Local[1] = Var[170 + Local[0]];
[002D] (0A) startScript(113,[Local[1]]);
[0033] (80) breakHere();
[0034] (28) unless (!Bit[72]) goto 0033;
[0039] (46) Local[0]++;
[003C] (44) unless (Local[0] > 3) goto 0026;
[0043] (48) if (Var[188] == 2) {
[004A] (0A)   startScript(128,[2]);
[0050] (**) }
[0050] (AE) WaitForMessage();
[0052] (14) print(1,[Center(),Text("I wonder if this dye draft will work on the wool.")]);
[0088] (AE) WaitForMessage();
[008A] (80) breakHere();
[008B] (C0) endCutscene();
[008C] (A0) stopObjectCode();
END

Script# 202
[0000] (5D) setClass(4,[0,150,149]);
[000D] (13) ActorOps(4,[Costume(49),Elevation(0)]);
[0015] (11) animateCostume(4,250);
[0018] (2D) putActorInRoom(4,42);
[001B] (01) putActor(4,185,136);
[0021] (11) animateCostume(4,3);
[0024] (A0) stopObjectCode();
END

Script# 203
[0000] (1A) Bit[97] = 0;
[0005] (0A) startScript(213,[]);
[0008] (42) chainScript(200,[12,58,40,560,561,562,563]);
[0020] (A0) stopObjectCode();
END

Script# 204
[0000] (1A) Bit[97] = 1;
[0005] (0A) startScript(214,[]);
[0008] (42) chainScript(200,[12,58,40,564,565,566,567]);
[0020] (A0) stopObjectCode();
END

Script# 205
[0000] (1A) Bit[98] = 0;
[0005] (0A) startScript(213,[]);
[0008] (42) chainScript(200,[6,100,86,551]);
[0017] (A0) stopObjectCode();
END

Script# 206
[0000] (1A) Bit[98] = 1;
[0005] (0A) startScript(214,[]);
[0008] (42) chainScript(200,[6,100,86,552]);
[0017] (A0) stopObjectCode();
END

Script# 207
[0000] (1A) Bit[99] = 0;
[0005] (0A) startScript(213,[]);
[0008] (42) chainScript(200,[12,72,128,572,573,574]);
[001D] (A0) stopObjectCode();
END

Script# 208
[0000] (1A) Bit[99] = 1;
[0005] (0A) startScript(214,[]);
[0008] (42) chainScript(200,[12,72,128,575,576,577]);
[001D] (A0) stopObjectCode();
END

Script# 209
[0000] (1A) Bit[100] = 0;
[0005] (0A) startScript(213,[]);
[0008] (42) chainScript(200,[12,246,80,568,569]);
[001A] (A0) stopObjectCode();
END

Script# 210
[0000] (1A) Bit[100] = 1;
[0005] (0A) startScript(214,[]);
[0008] (42) chainScript(200,[12,246,80,570,571]);
[001A] (A0) stopObjectCode();
END

Script# 211
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (80) breakHere();
[000B] (28) unless (!Bit[72]) goto 000A;
[0010] (1A) Bit[70] = 0;
[0015] (80) breakHere();
[0016] (28) unless (!Bit[71]) goto 0015;
[001B] (A8) if (Bit[76]) {
[0020] (14)   print(1,[Center(),Text("It's plenty green enough already.")]);
[0046] (80)   breakHere();
[0047] (18) } else {
[004A] (0A)   startScript(137,[]);
[004D] (**) }
[004D] (C0) endCutscene();
[004E] (A0) stopObjectCode();
END

Script# 212
[0000] (40) cutscene([0]);
[0005] (1A) Bit[73] = 1;
[000A] (80) breakHere();
[000B] (28) unless (!Bit[72]) goto 000A;
[0010] (1A) Bit[70] = 0;
[0015] (80) breakHere();
[0016] (28) unless (!Bit[71]) goto 0015;
[001B] (A8) if (Bit[76]) {
[0020] (14)   print(1,[Center(),Text("It already looks about as pale" + newline() + "as it can get.")]);
[0053] (80)   breakHere();
[0054] (18) } else {
[0057] (0A)   startScript(137,[]);
[005A] (**) }
[005A] (C0) endCutscene();
[005B] (A0) stopObjectCode();
END

Script# 213
[0000] (13) ActorOps(3,[Palette(11,11),Palette(3,3),Palette(9,9)]);
[000C] (A0) stopObjectCode();
END

Script# 214
[0000] (13) ActorOps(3,[Palette(11,11),Palette(3,10),Palette(9,2)]);
[000C] (A0) stopObjectCode();
END

Script# 215
[0000] (40) cutscene([0]);
[0005] (28) if (!Bit[102]) {
[000A] (14)   print(1,[Center(),Text("Oops!")]);
[0014] (1A)   Bit[102] = 1;
[0019] (05)   drawObject(556,255,255);
[0020] (05)   drawObject(557,255,255);
[0027] (80)   breakHere();
[0028] (0A)   startScript(202,[]);
[002B] (05)   drawObject(558,255,255);
[0032] (05)   drawObject(559,255,255);
[0039] (80)   breakHere();
[003A] (0A)   startScript(100,[Var[198]]);
[0040] (18) } else {
[0043] (14)   print(1,[Center(),Text("Still dripping. What a mess.")]);
[0064] (**) }
[0064] (0A) startScript(116,[]);
[0067] (0A) startScript(127,[6]);
[006D] (1A) Local[0] = 0;
[0072] (11) animateCostume(4,6);
[0075] (9A) Local[1] = Var[170 + Local[0]];
[007C] (0A) startScript(113,[Local[1]]);
[0082] (80) breakHere();
[0083] (28) unless (!Bit[72]) goto 0082;
[0088] (46) Local[0]++;
[008B] (44) unless (Local[0] > 3) goto 0072;
[0092] (11) animateCostume(4,3);
[0095] (48) if (Var[188] == 2) {
[009C] (0A)   startScript(128,[6]);
[00A2] (AE)   WaitForMessage();
[00A4] (14)   print(1,[Center(),Text("I think that was the emptying draft." + wait() + "Too bad I have nothing to empty in this demo.")]);
[00FC] (18) } else {
[00FF] (AE)   WaitForMessage();
[0101] (14)   print(1,[Center(),Text("That's the emptying draft.")]);
[0120] (**) }
[0120] (AE) WaitForMessage();
[0122] (80) breakHere();
[0123] (C0) endCutscene();
[0124] (A0) stopObjectCode();
END

Script# 216 // Draft Won't Work
[0000] (14) print(1,[Center(),Text("That draft won't work on wool.")]);
[0023] (A0) stopObjectCode();
END

// Object 543: Outside
Events:
   A - 0018
[0018] (24) loadRoomWithEgo(539,41,316,120);
[0020] (00) stopObjectCode();
END

// Object 544: Dye Pot
Events:
   1 - 0035
   2 - 0035
  36 - 0031
  38 - 002B
  53 - 005D
[002B] (1A) Var[200] = 578;
[0030] (00) stopObjectCode();
[0031] (0A) startScript(201,[]);
[0034] (00) stopObjectCode();
[0035] (1A) Bit[73] = 1;
[003A] (14) print(1,[Center(),Text("The pot doesn't have a cover.")]);
[005C] (00) stopObjectCode();
[005D] (0A) startScript(110,[3,59,84]);
[0069] (14) print(1,[Center(),Text("That draft won't work on a pot.")]);
[008D] (00) stopObjectCode();
END

// Object 545: Wool 1
Events:
  36 - 003B
  38 - 0028
  3B - 00A5
  3C - 00B4
  53 - 00CA
[0028] (A8) if (Bit[97]) {
[002D] (1A)   Var[200] = 586;
[0032] (18) } else {
[0035] (1A)   Var[200] = 579;
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (A8) if (Bit[97]) {
[0040] (1D)   if (classOfIs(545,[3])) {
[0049] (14)     print(1,[Center(),Text("Grassy green. Hate that color.")]);
[006C] (18)   } else {
[006F] (14)     print(1,[Center(),Text("Green again. Yuck.")]);
[0086] (**)   }
[0086] (18) } else {
[0089] (14)   print(1,[Center(),Text("Looks better in white.")]);
[00A4] (**) }
[00A4] (00) stopObjectCode();
[00A5] (28) if (!Bit[97]) {
[00AA] (0A)   startScript(204,[]);
[00AD] (18) } else {
[00B0] (0A)   startScript(211,[]);
[00B3] (**) }
[00B3] (00) stopObjectCode();
[00B4] (A8) if (Bit[97]) {
[00B9] (5D)   setClass(545,[131]);
[00C0] (0A)   startScript(203,[]);
[00C3] (18) } else {
[00C6] (0A)   startScript(212,[]);
[00C9] (**) }
[00C9] (00) stopObjectCode();
[00CA] (0A) startScript(110,[3,56,40]);
[00D6] (0A) startScript(216,[]);
[00D9] (00) stopObjectCode();
END

// Object 546: Wool 2
Events:
  36 - 003B
  38 - 0028
  3B - 00B2
  3C - 00CD
  53 - 00E1
[0028] (A8) if (Bit[98]) {
[002D] (1A)   Var[200] = 587;
[0032] (18) } else {
[0035] (1A)   Var[200] = 580;
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (A8) if (Bit[98]) {
[0040] (14)   print(1,[Center(),Text("Yuck. I hate green.")]);
[0058] (1D) } else if (classOfIs(546,[3])) {
[0064] (14)   print(1,[Center(),Text("This wool hasn't been dyed yet.")]);
[0088] (18) } else {
[008B] (14)   print(1,[Center(),Text("White again. That's more like it.")]);
[00B1] (**) }
[00B1] (00) stopObjectCode();
[00B2] (1A) Bit[73] = 1;
[00B7] (28) if (!Bit[98]) {
[00BC] (5D)   setClass(546,[131]);
[00C3] (0A)   startScript(206,[]);
[00C6] (18) } else {
[00C9] (0A)   startScript(211,[]);
[00CC] (**) }
[00CC] (00) stopObjectCode();
[00CD] (1A) Bit[73] = 1;
[00D2] (A8) if (Bit[98]) {
[00D7] (0A)   startScript(205,[]);
[00DA] (18) } else {
[00DD] (0A)   startScript(212,[]);
[00E0] (**) }
[00E0] (00) stopObjectCode();
[00E1] (0A) startScript(110,[3,100,44]);
[00ED] (0A) startScript(216,[]);
[00F0] (00) stopObjectCode();
END

// Object 547
Events:
END

// Object 548: Book
Events:
   1 - 011C
   2 - 00FD
  36 - 002E
  38 - 0028
  53 - 0143
[0028] (1A) Var[200] = 581;
[002D] (00) stopObjectCode();
[002E] (40) cutscene([0]);
[0033] (5D) setClass(548,[152]);
[003A] (14) print(1,[Center(),Text("This is the Book of Patterns that" + newline() + "Hetchel lets me read sometimes." + newline() + "Says something about the sky" + newline() + "opening up...Wonder what it means.")]);
[00C3] (AE) WaitForMessage();
[00C5] (80) breakHere();
[00C6] (05) drawObject(547,255,255);
[00CD] (1A) Var[199] = 0;
[00D2] (0A) startScript(100,[0]);
[00D8] (80) breakHere();
[00D9] (14) print(1,[Center(),Text("Better take it with me.")]);
[00F5] (1A) Bit[127] = 1;
[00FA] (80) breakHere();
[00FB] (C0) endCutscene();
[00FC] (00) stopObjectCode();
[00FD] (1A) Bit[73] = 1;
[0102] (14) print(1,[Center(),Text("It's already closed.")]);
[011B] (00) stopObjectCode();
[011C] (1A) Bit[73] = 1;
[0121] (14) print(1,[Center(),Text("I already know what's in it.")]);
[0142] (00) stopObjectCode();
[0143] (0A) startScript(110,[3,282,112,100]);
[0152] (14) print(1,[Center(),Text("That draft won't work on a book.")]);
[0177] (00) stopObjectCode();
END

// Object 549: Heap
Events:
  36 - 003B
  38 - 0028
  3B - 00B5
  3C - 00D0
  53 - 00E4
[0028] (A8) if (Bit[99]) {
[002D] (1A)   Var[200] = 588;
[0032] (18) } else {
[0035] (1A)   Var[200] = 582;
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (A8) if (Bit[99]) {
[0040] (14)   print(1,[Center(),Text("Green. My least favorite color.")]);
[0064] (1D) } else if (classOfIs(549,[3])) {
[0070] (14)   print(1,[Center(),Text("This pile still needs dyeing.")]);
[0092] (18) } else {
[0095] (14)   print(1,[Center(),Text("I like it better in white.")]);
[00B4] (**) }
[00B4] (00) stopObjectCode();
[00B5] (1A) Bit[73] = 1;
[00BA] (28) if (!Bit[99]) {
[00BF] (5D)   setClass(549,[131]);
[00C6] (0A)   startScript(208,[]);
[00C9] (18) } else {
[00CC] (0A)   startScript(211,[]);
[00CF] (**) }
[00CF] (00) stopObjectCode();
[00D0] (1A) Bit[73] = 1;
[00D5] (A8) if (Bit[99]) {
[00DA] (0A)   startScript(207,[]);
[00DD] (18) } else {
[00E0] (0A)   startScript(212,[]);
[00E3] (**) }
[00E3] (00) stopObjectCode();
[00E4] (0A) startScript(110,[3,70,124]);
[00F0] (0A) startScript(216,[]);
[00F3] (00) stopObjectCode();
END

// Object 550: Cloth Rack
Events:
  36 - 0041
  38 - 002E
  3B - 0098
  3C - 00AC
  53 - 00C7
[002E] (A8) if (Bit[100]) {
[0033] (1A)   Var[200] = 589;
[0038] (18) } else {
[003B] (1A)   Var[200] = 583;
[0040] (**) }
[0040] (00) stopObjectCode();
[0041] (A8) if (Bit[100]) {
[0046] (1D)   if (classOfIs(550,[3])) {
[004F] (14)     print(1,[Center(),Text("Ugly green.")]);
[005F] (18)   } else {
[0062] (14)     print(1,[Center(),Text("Ugly green again.")]);
[0078] (**)   }
[0078] (18) } else {
[007B] (14)   print(1,[Center(),Text("White's an improvement.")]);
[0097] (**) }
[0097] (00) stopObjectCode();
[0098] (1A) Bit[73] = 1;
[009D] (28) if (!Bit[100]) {
[00A2] (0A)   startScript(210,[]);
[00A5] (18) } else {
[00A8] (0A)   startScript(211,[]);
[00AB] (**) }
[00AB] (00) stopObjectCode();
[00AC] (1A) Bit[73] = 1;
[00B1] (A8) if (Bit[100]) {
[00B6] (5D)   setClass(550,[131]);
[00BD] (0A)   startScript(209,[]);
[00C0] (18) } else {
[00C3] (0A)   startScript(212,[]);
[00C6] (**) }
[00C6] (00) stopObjectCode();
[00C7] (0A) startScript(110,[3,244,80]);
[00D3] (0A) startScript(216,[]);
[00D6] (00) stopObjectCode();
END

// Object 551
Events:
END

// Object 552
Events:
END

// Object 553: Flask
Events:
  36 - 0036
  38 - 0023
  53 - 003A
[0023] (A8) if (Bit[102]) {
[0028] (1A)   Var[200] = 585;
[002D] (18) } else {
[0030] (1A)   Var[200] = 584;
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (0A) startScript(215,[]);
[0039] (00) stopObjectCode();
[003A] (A8) if (Bit[102]) {
[003F] (0A)   startScript(110,[3,208,106,100]);
[004E] (18) } else {
[0051] (0A)   startScript(110,[3,212,106,100]);
[0060] (**) }
[0060] (14) print(1,[Center(),Text("That draft won't work on a flask.")]);
[0086] (00) stopObjectCode();
END

// Objects 554-589
Events:
END