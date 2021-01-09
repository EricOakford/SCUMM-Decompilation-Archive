/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 69: Thera Dig Site Exterior (th-dig-ex)
 */

// EN
[0000] (08) if (Var[224] != 69) {
[0007] (13)   ActorOps(5,[Init(),Costume(52),Palette(4,253),Palette(3,252),IgnoreBoxes(),NeverZClip()]);
[0015] (2D)   putActorInRoom(5,69);
[0018] (01)   putActor(5,231,42);
[001E] (**) }
[001E] (11) animateCostume(5,250);
[0021] (11) animateCostume(5,2);
[0024] (48) if (Var[238] == 2) {
[002B] (07)   setState(942,0);
[002F] (18) } else {
[0032] (07)   setState(942,1);
[0036] (54)   setObjectName(942,"collapsed entrance");
[004C] (**) }
[004C] (0A) startScript(200,[]);
[004F] (30) setBoxFlags(1,16);
[0053] (48) if (Var[224] == 63) {
[005A] (2D)   putActorInRoom(1,69);
[005D] (0E)   putActorAtObject(1,945);
[0061] (08)   if (Var[238] != 2) {
[0068] (62)     stopScript(151);
[006A] (7C)     VAR_RESULT = isSoundRunning(80);
[006E] (A8)     if (VAR_RESULT) {
[0073] (4C)       soundKludge([256,80,6]);
[007E] (4C)       soundKludge([-1]);
[0083] (08)       if (VAR_SOUNDRESULT != 2) {
[008A] (4C)         soundKludge([263,80,2,5,0]);
[009B] (**)       }
[009B] (**)     }
[009B] (4C)     soundKludge([268,80,0,0]);
[00A9] (4C)     soundKludge([-1]);
[00AE] (18)   } else {
[00B1] (68)     VAR_RESULT = isScriptRunning(151);
[00B5] (28)     if (!VAR_RESULT) {
[00BA] (0A)       startScript(151,[]);
[00BD] (**)     }
[00BD] (**)   }
[00BD] (11)   animateCostume(1,250);
[00C0] (48) } else if (Var[224] == 72) {
[00CA] (4C)   soundKludge([268,80,0,1]);
[00D8] (0A)   startScript(151,[]);
[00DB] (48) } else if (Var[224] == 69) {
[00E5] (0A)   startScript(201,[]);
[00E8] (1D) } else if (classOfIs(984,[6])) {
[00F4] (1D)   if (classOfIs(984,[145])) {
[00FD] (2A)     startScript(202,[],F);
[0100] (**)   }
[0100] (**) }
[0100] (00) stopObjectCode();
END

// EX
[0000] (1A) Bit[417 + 7] = 1;
[0007] (13) ActorOps(5,[Init()]);
[000B] (5D) setClass(5,[0]);
[0012] (00) stopObjectCode();
END

Script# 200
[0000] (48) if (Var[238] == 1) {
[0007] (07)   setState(944,1);
[000B] (5D)   setClass(944,[160]);
[0012] (10)   VAR_RESULT = getObjectOwner(946);
[0017] (88)   if (VAR_RESULT != VAR_EGO) {
[001E] (1D)     if (classOfIs(491,[140])) {
[0027] (07)       setState(946,1);
[002B] (**)     }
[002B] (**)   }
[002B] (18) } else {
[002E] (07)   setState(946,0);
[0032] (5D)   setClass(946,[160]);
[0039] (07)   setState(940,1);
[003D] (5D)   setClass(940,[160]);
[0044] (**) }
[0044] (A0) stopObjectCode();
END

Script# 201 // Balloon Inflates
[0000] (A8) if (Local[0]) {
[0005] (40)   cutscene([2]);
[000A] (07)   setState(948,0);
[000E] (07)   setState(949,0);
[0012] (07)   setState(950,0);
[0016] (29)   setOwnerOf(595,0);
[001A] (AE)   WaitForMessage();
[001C] (11)   animateCostume(1,12);
[001F] (80)   breakHere();
[0020] (80)   breakHere();
[0021] (80)   breakHere();
[0022] (0A)   startScript(10,[]);
[0025] (05)   drawObject(947);
[0029] (11)   animateCostume(1,3);
[002C] (2D)   putActorInRoom(5,0);
[002F] (13)   ActorOps(5,[Init()]);
[0033] (80)   breakHere();
[0034] (80)   breakHere();
[0035] (C3)   Var[351] = getActorX(VAR_EGO);
[003A] (A3)   Var[352] = getActorY(VAR_EGO);
[003F] (3A)   Var[351] -= 55;
[0044] (7E)   walkActorTo(1,Var[351],Var[352]);
[004A] (AE)   WaitForActor(1);
[004D] (11)   animateCostume(1,245);
[0050] (80)   breakHere();
[0051] (80)   breakHere();
[0052] (80)   breakHere();
[0053] (80)   breakHere();
[0054] (80)   breakHere();
[0055] (80)   breakHere();
[0056] (80)   breakHere();
[0057] (80)   breakHere();
[0058] (33)   screenEffect(134);
[005C] (C0)   endCutscene();
[005D] (72)   loadRoom(69);
[005F] (18) } else {
[0062] (0F)   VAR_RESULT = getObjectState(947);
[0067] (48)   if (VAR_RESULT == 1) {
[006E] (40)     cutscene([2]);
[0073] (07)     setState(947,0);
[0077] (05)     drawObject(948);
[007B] (07)     setState(949,0);
[007F] (11)     animateCostume(1,245);
[0082] (0C)     Resource.loadSound(83);
[0085] (4C)     soundKludge([-1]);
[008A] (4C)     soundKludge([269,80,0,180]);
[0098] (4C)     soundKludge([257,80,0]);
[00A3] (4C)     soundKludge([262,80,0]);
[00AE] (1C)     startSound(153);
[00B0] (4C)     soundKludge([270,153,1]);
[00BB] (4C)     soundKludge([271,8,80]);
[00C6] (4C)     soundKludge([271,-1]);
[00CE] (4C)     soundKludge([-1]);
[00D3] (80)     breakHere();
[00D4] (80)     breakHere();
[00D5] (80)     breakHere();
[00D6] (80)     breakHere();
[00D7] (80)     breakHere();
[00D8] (80)     breakHere();
[00D9] (80)     breakHere();
[00DA] (80)     breakHere();
[00DB] (33)     screenEffect(134);
[00DF] (C0)     endCutscene();
[00E0] (72)     loadRoom(69);
[00E2] (**)   }
[00E2] (**) }
[00E2] (0F) VAR_RESULT = getObjectState(948);
[00E7] (48) if (VAR_RESULT == 1) {
[00EE] (40)   cutscene([2]);
[00F3] (07)   setState(947,0);
[00F7] (07)   setState(948,0);
[00FB] (05)   drawObject(949);
[00FF] (80)   breakHere();
[0100] (80)   breakHere();
[0101] (80)   breakHere();
[0102] (80)   breakHere();
[0103] (80)   breakHere();
[0104] (80)   breakHere();
[0105] (80)   breakHere();
[0106] (80)   breakHere();
[0107] (33)   screenEffect(134);
[010B] (C0)   endCutscene();
[010C] (72)   loadRoom(69);
[010E] (**) }
[010E] (0F) VAR_RESULT = getObjectState(949);
[0113] (48) if (VAR_RESULT == 1) {
[011A] (40)   cutscene([2]);
[011F] (07)   setState(949,0);
[0123] (05)   drawObject(950);
[0127] (5D)   setClass(950,[32]);
[012E] (33)   screenEffect(257);
[0132] (80)   breakHere();
[0133] (80)   breakHere();
[0134] (80)   breakHere();
[0135] (80)   breakHere();
[0136] (14)   print(1,[Text("I ought to be featured" + newline() + "in Modern\x10Mechanix for\x10this.")]);
[016E] (C0)   endCutscene();
[016F] (**) }
[016F] (A0) stopObjectCode();
END

Script# 202 // After Digging Out
[0000] (40) cutscene([2]);
[0005] (4C) soundKludge([272]);
[000A] (4C) soundKludge([-1]);
[000F] (4C) soundKludge([268,155,0,4]);
[001D] (4C) soundKludge([270,155,1]);
[0028] (4C) soundKludge([271,262,155,0]);
[0036] (4C) soundKludge([271,269,155,70,200]);
[0047] (4C) soundKludge([271,-1]);
[004F] (4C) soundKludge([-1]);
[0054] (5D) setClass(984,[17]);
[005B] (80) breakHere();
[005C] (AD) putActorInRoom(VAR_EGO,69);
[0060] (8E) putActorAtObject(VAR_EGO,942);
[0065] (9E) walkActorTo(VAR_EGO,144,144);
[006C] (AE) WaitForActor(VAR_EGO);
[0070] (58) beginOverride();
[0072] (18) goto 00B8;
[0075] (14) print(1,[Text("Somehow Kerner got the jump on\x10me^" + wait() + "^and now he's got\x10Sophia!")]);
[00B6] (AE) WaitForMessage();
[00B8] (4C) soundKludge([272]);
[00BD] (4C) soundKludge([269,155,0,80]);
[00CB] (4C) soundKludge([2]);
[00D0] (1C) startSound(80);
[00D2] (4C) soundKludge([268,80,0,13]);
[00E0] (4C) soundKludge([258,80,1]);
[00EB] (4C) soundKludge([269,80,128,300]);
[00F9] (4C) soundKludge([3]);
[00FE] (0A) startScript(151,[]);
[0101] (C0) endCutscene();
[0102] (A0) stopObjectCode();
END

// Object 940: Truck
Events:
   9 - 000F
  5A - 005E
[000F] (D8) printEgo([Text("It's a German army truck" + newline() + "with a missing tire." + wait() + "Kerner must have been\x10here!")]);
[005D] (00) stopObjectCode();
[005E] (1A) Var[123] = 9;
[0063] (00) stopObjectCode();
END

// Object 941: Crate
Events:
   3 - 0015
   4 - 003E
   9 - 0069
  5A - 00BD
[0015] (8F) VAR_RESULT = getObjectState(VAR_ME);
[001A] (48) if (VAR_RESULT == 0) {
[0021] (87)   setState(VAR_ME,1);
[0025] (18) } else {
[0028] (D8)   printEgo([Text("It's already open.")]);
[003D] (**) }
[003D] (00) stopObjectCode();
[003E] (8F) VAR_RESULT = getObjectState(VAR_ME);
[0043] (48) if (VAR_RESULT == 1) {
[004A] (87)   setState(VAR_ME,0);
[004E] (18) } else {
[0051] (D8)   printEgo([Text("It's already closed.")]);
[0068] (**) }
[0068] (00) stopObjectCode();
[0069] (8F) VAR_RESULT = getObjectState(VAR_ME);
[006E] (48) if (VAR_RESULT == 0) {
[0075] (D8)   printEgo([Text("It's a plain old wooden\x10box.")]);
[0094] (18) } else {
[0097] (D8)   printEgo([Text("It's a plain old empty wooden\x10box.")]);
[00BC] (**) }
[00BC] (00) stopObjectCode();
[00BD] (1A) Var[123] = 9;
[00C2] (00) stopObjectCode();
END

// Object 942: Entrance
Events:
   9 - 0022
   A - 0018
  5A - 0012
[0012] (1A) Var[123] = 9;
[0017] (00) stopObjectCode();
[0018] (48) if (Var[238] == 2) {
[001F] (72)   loadRoom(179);
[0021] (**) }
[0021] (00) stopObjectCode();
[0022] (48) if (Var[238] == 2) {
[0029] (D8)   printEgo([Text("Looks like the entrance to some underground\x10chamber.")]);
[0060] (18) } else {
[0063] (D8)   printEgo([Text("Looks like the collapsed entrance to an underground\x10chamber." + wait() + "Who knows?  Maybe it led straight to\x10Atlantis.")]);
[00D2] (**) }
[00D2] (00) stopObjectCode();
END

// Object 943: Vent
Events:
   8 - 003C
   9 - 0012
  5A - 01DF
[0012] (D8) printEgo([Text("This looks like a natural gas\x10fissure.")]);
[003B] (00) stopObjectCode();
[003C] (48) if (Local[0] == 1014) {
[0043] (D8)   printEgo([Text("What would I do with a hose spewing natural\x10gas?")]);
[0076] (48) } else if (Local[0] == 593) {
[0080] (1D)   if (classOfIs(593,[147])) {
[0089] (1D)     if (classOfIs(595,[140])) {
[0092] (18)       goto 0167;
[0095] (18)     } else {
[0098] (18)       goto 012A;
[009B] (**)     }
[009B] (18)   } else {
[009E] (18)     goto 01B0;
[00A1] (**)   }
[00A1] (48) } else if (Local[0] == 591) {
[00AB] (42)   chainScript(3,[88]);
[00B1] (48) } else if (Local[0] == 595) {
[00BB] (1D)   if (classOfIs(595,[145])) {
[00C4] (1D)     if (classOfIs(595,[140])) {
[00CD] (1D)       if (classOfIs(595,[147])) {
[00D6] (40)         cutscene([2]);
[00DB] (11)         animateCostume(1,11);
[00DE] (80)         breakHere();
[00DF] (80)         breakHere();
[00E0] (80)         breakHere();
[00E1] (80)         breakHere();
[00E2] (11)         animateCostume(1,1);
[00E5] (D8)         printEgo([Text("It's a long shot, but here\x10goes^")]);
[0108] (5D)         setClass(595,[146]);
[010F] (54)         setObjectName(595,"balloon");
[011A] (C0)         endCutscene();
[011B] (42)         chainScript(201,[1]);
[0121] (18)       } else {
[0124] (18)         goto 01B0;
[0127] (**)       }
[0127] (18)     } else {
[012A] (D8)       printEgo([Text("How am I supposed to ride this\x10thing?")]);
[0152] (**)     }
[0152] (1D)   } else if (classOfIs(595,[140])) {
[015E] (1D)     if (classOfIs(593,[147])) {
[0167] (D8)       printEgo([Text("I don't have all the parts together\x10yet.")]);
[0192] (18)     } else {
[0195] (42)       chainScript(3,[88]);
[019B] (**)     }
[019B] (18)   } else {
[019E] (42)     chainScript(3,[88]);
[01A4] (**)   }
[01A4] (18) } else {
[01A7] (42)   chainScript(3,[88]);
[01AD] (18)   goto 01DE;
[01B0] (D8)   printEgo([Text("I need something to connect it to the\x10vent.")]);
[01DE] (**) }
[01DE] (00) stopObjectCode();
[01DF] (1D) if (classOfIs(595,[145])) {
[01E8] (1D)   if (classOfIs(595,[140])) {
[01F1] (1D)     if (classOfIs(595,[147])) {
[01FA] (1A)       Var[123] = 8;
[01FF] (18)       goto 0207;
[0202] (**)     }
[0202] (**)   }
[0202] (**) }
[0202] (1A) Var[123] = 9;
[0207] (00) stopObjectCode();
END

// Object 944: Invoice
Events:
   9 - 002F
   B - 001B
  5A - 006D
  5B - 0015
[0015] (1A) Var[161] = 1361;
[001A] (00) stopObjectCode();
[001B] (90) VAR_RESULT = getObjectOwner(VAR_ME);
[0020] (88) if (VAR_RESULT != VAR_EGO) {
[0027] (A5)   pickupObject(VAR_ME,0);
[002B] (0A)   startScript(10,[]);
[002E] (**) }
[002E] (00) stopObjectCode();
[002F] (1A) Bit[400 + 0] = 1;
[0036] (D8) printEgo([Text("It's an invoice for an observation balloon\x10bladder.")]);
[006C] (00) stopObjectCode();
[006D] (1A) Var[123] = 9;
[0072] (00) stopObjectCode();
END

// Object 945: Path to Landscape
Events:
   A - 000C
[000C] (33) screenEffect(257);
[0010] (A4) loadRoomWithEgo(Var[414],63,-1,-1);
[0018] (00) stopObjectCode();
END

// Object 946: Tire Repair Kit
Events:
   8 - 0081
   9 - 0060
   B - 001E
  5A - 007B
  5B - 0018
[0018] (1A) Var[161] = 1318;
[001D] (00) stopObjectCode();
[001E] (10) VAR_RESULT = getObjectOwner(946);
[0023] (88) if (VAR_RESULT != VAR_EGO) {
[002A] (40)   cutscene([2]);
[002F] (11)   animateCostume(1,12);
[0032] (1C)   startSound(117);
[0034] (80)   breakHere();
[0035] (80)   breakHere();
[0036] (80)   breakHere();
[0037] (80)   breakHere();
[0038] (11)   animateCostume(1,1);
[003B] (C0)   endCutscene();
[003C] (25)   pickupObject(946,0);
[0040] (07)   setState(946,0);
[0044] (0A)   startScript(10,[]);
[0047] (18) } else {
[004A] (D8)   printEgo([Text("I already have\x10it.")]);
[005F] (**) }
[005F] (00) stopObjectCode();
[0060] (D8) printEgo([Text("It's a tire repair\x10kit.")]);
[007A] (00) stopObjectCode();
[007B] (1A) Var[123] = 9;
[0080] (00) stopObjectCode();
[0081] (48) if (Local[0] == 491) {
[0088] (1D)   if (classOfIs(491,[140])) {
[0091] (0A)     startScript(212,[]);
[0094] (**)   }
[0094] (18) } else {
[0097] (42)   chainScript(3,[8]);
[009D] (**) }
[009D] (00) stopObjectCode();
END

// Object 947: th-dig-balloon-anim-1
Events:
END

// Object 948: th-dig-balloon-anim-2
Events:
END

// Object 949: th-dig-balloon-anim-3
Events:
END

// Object 950: Fully Inflated Balloon
Events:
   8 - 0029
   9 - 0012
  5A - 008D
[0012] (D8) printEgo([Text("It's a ready to\x10go.")]);
[0028] (00) stopObjectCode();
[0029] (5D) setClass(595,[148]);
[0030] (33) screenEffect(257);
[0034] (0A) startScript(144,[101,10]);
[003D] (4C) soundKludge([269,80,50,180]);
[004B] (4C) soundKludge([269,153,50,180]);
[0059] (4C) soundKludge([257,80,0]);
[0064] (4C) soundKludge([257,153,0]);
[006F] (4C) soundKludge([262,80,0]);
[007A] (4C) soundKludge([262,153,0]);
[0085] (4C) soundKludge([-1]);
[008A] (72) loadRoom(63);
[008C] (00) stopObjectCode();
[008D] (1A) Var[123] = 8;
[0092] (00) stopObjectCode();
END
