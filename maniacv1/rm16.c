/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 16: Garage
 */

// EN
[0000] (3C) stopSound(32);
[0002] (00) stopObjectCode();
END

// EX
[0000] (01) putActor(1,0,2);
[0004] (00) stopObjectCode();
[0005] (1C) startSound(32);
[0007] (00) stopObjectCode();
END

// Object 59: Cement Slab
Events:
   1 - 0024
   2 - 0034
   A - 0024
   D - 0059
[0024] (D8) printEgo("It won't budge.");
[0033] (00) stopObjectCode();
[0034] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0038] (D8)   printEgo("It's already closed.");
[004C] (18) } else {
[004F] (D8)   printEgo("I can't.");
[0058] (**) }
[0058] (00) stopObjectCode();
[0059] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[005D] (24)   loadRoomWithEgo(177,51,255,255);
[0063] (**) }
[0063] (00) stopObjectCode();
END

// Object 134
Events:
END

// Object 143: Gate
Events:
   1 - 001F
   2 - 0039
   9 - 0039
   A - 001F
   D - 003F
[001F] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0023] (42)   startScript(121);
[0025] (07)   setState08(138);
[0028] (18) } else {
[002B] (D8)   printEgo("It's locked.");
[0038] (**) }
[0038] (00) stopObjectCode();
[0039] (42) startScript(122);
[003B] (47) clearState08(138);
[003E] (00) stopObjectCode();
[003F] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0043] (24)   loadRoomWithEgo(138,6,255,255);
[0049] (**) }
[0049] (00) stopObjectCode();
END

// Object 144: Closed Garage Door
Events:
   1 - 0022
   8 - 0047
   A - 0022
[0022] (B1) VAR_RESULT = getBitVar(2944,VAR_EGO);
[0027] (48) if (VAR_RESULT == 1) {
[002D] (42)   startScript(14);
[002F] (18) } else {
[0032] (D8)   printEgo("Ugh! I can't budge it!");
[0046] (**) }
[0046] (00) stopObjectCode();
[0047] (D8) printEgo("It's stuck.");
[0053] (00) stopObjectCode();
END

// Object 145: Garage Door Part
Events:
   1 - 0022
   8 - 002A
   A - 0022
[0022] (19) doSentence(1,144,0,0);
[0029] (00) stopObjectCode();
[002A] (19) doSentence(8,144,0,0);
[0031] (00) stopObjectCode();
END

// Object 146: Garage Door Part
Events:
   1 - 0022
   8 - 002A
   A - 0022
[0022] (19) doSentence(1,144,0,0);
[0029] (00) stopObjectCode();
[002A] (19) doSentence(8,144,0,0);
[0031] (00) stopObjectCode();
END

// Object 147: Garage Door Part
Events:
   1 - 0022
   8 - 002A
   A - 0022
[0022] (19) doSentence(1,144,0,0);
[0029] (00) stopObjectCode();
[002A] (19) doSentence(8,144,0,0);
[0031] (00) stopObjectCode();
END

// Object 148: Garage Door Part
Events:
   1 - 0022
   8 - 002A
   A - 0022
[0022] (19) doSentence(1,144,0,0);
[0029] (00) stopObjectCode();
[002A] (19) doSentence(8,144,0,0);
[0031] (00) stopObjectCode();
END

// Object 149: Garage Door Part
Events:
   1 - 0022
   8 - 002A
   A - 0022
[0022] (19) doSentence(1,144,0,0);
[0029] (00) stopObjectCode();
[002A] (19) doSentence(8,144,0,0);
[0031] (00) stopObjectCode();
END

// Object 150: Open Garage Door
Events:
   1 - 0024
   2 - 0048
   8 - 009F
   A - 007A
[0024] (4F) if (getState08(149)) {
[0029] (19)   doSentence(1,144,0,0);
[0030] (18) } else {
[0033] (D8)   printEgo("It's already opened.");
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (0F) if (!getState08(149)) {
[004D] (D8)   printEgo("It's too high to reach.");
[0062] (18) } else {
[0065] (D8)   printEgo("It's already closed.");
[0079] (**) }
[0079] (00) stopObjectCode();
[007A] (4F) if (getState08(149)) {
[007F] (19)   doSentence(1,144,0,0);
[0086] (18) } else {
[0089] (D8)   printEgo("It's too high to reach.");
[009E] (**) }
[009E] (00) stopObjectCode();
[009F] (19) doSentence(8,144,0,0);
[00A6] (00) stopObjectCode();
END

// Object 151: Trunk
Events:
   1 - 0020
   2 - 0038
   8 - 003F
   B - 0069
  10 - 0038
[0020] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0024] (D8)   printEgo("The trunk is locked.");
[0037] (**) }
[0037] (00) stopObjectCode();
[0038] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[003A] (3C) stopSound(68);
[003C] (1C) startSound(9);
[003E] (00) stopObjectCode();
[003F] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0043] (48)   if (VAR_ACTIVE_OBJECT2 == 215) {
[0049] (87)     setState08(VAR_ACTIVE_OBJECT1);
[004B] (1C)     startSound(8);
[004D] (48)     if (Var[162] == 2) {
[0053] (42)       startScript(128);
[0055] (**)     }
[0055] (18)   } else {
[0058] (D8)     printEgo("It doesn't work.");
[0068] (**)   }
[0068] (**) }
[0068] (00) stopObjectCode();
[0069] (48) if (VAR_ACTIVE_OBJECT2 == 45) {
[006F] (62)   stopScript(134);
[0071] (11)   animateActor(8,28);
[0074] (29)   setOwnerOf(45,0);
[0078] (07)   setState08(268);
[007B] (17)   clearState02(268);
[007E] (1A)   Var[162] = 2;
[0082] (1C)   startSound(68);
[0084] (18) } else {
[0087] (39)   doSentence(8,151,VAR_ACTIVE_OBJECT2,0);
[008D] (**) }
[008D] (00) stopObjectCode();
END

// Object 152: Tools
Events:
   B - 001D
   E - 001A
[001A] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001C] (00) stopObjectCode();
[001D] (48) if (VAR_ACTIVE_OBJECT2 == 136) {
[0023] (19)   doSentence(6,136,152,0);
[002A] (18) } else {
[002D] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0032] (**) }
[0032] (00) stopObjectCode();
END

// Object 153: Water Faucet Handle
Events:
   B - 002B
   E - 0028
[0028] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[002A] (00) stopObjectCode();
[002B] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0030] (00) stopObjectCode();
END

// Object 186
Events:
END

// Object 268: Meteor
Events:
   E - 0019
[0019] (D8) printEgo("No way!");
[0021] (00) stopObjectCode();
END

// Object 281: License Plate
Events:
   C - 0020
[0020] (D8) printEgo("THX 1138");
[0029] (00) stopObjectCode();
END

// Object 340: Weird Edsel
Events:
   B - 001E
[001E] (48) if (VAR_ACTIVE_OBJECT2 == 215) {
[0024] (4F)   if (getState08(151)) {
[0029] (D8)     printEgo("I'd better close the trunk first.");
[0047] (19)     doSentence(11,340,215,0);
[004E] (19)     doSentence(2,151,0,0);
[0055] (18)   } else {
[0058] (4F)     if (getState08(268)) {
[005D] (62)       stopScript(123);
[005F] (**)     }
[005F] (42)     startScript(130);
[0061] (**)   }
[0061] (18) } else {
[0064] (D8)   printEgo("I can't start it with that.");
[007C] (**) }
[007C] (00) stopObjectCode();
END

// Object 341: Modified Rocket Engine (left)
Events:
   B - 0029
[0029] (39) doSentence(11,340,VAR_ACTIVE_OBJECT2,0);
[002F] (00) stopObjectCode();
END

// Object 342: Modified Rocket Engine (right)
Events:
   B - 0029
[0029] (39) doSentence(11,340,VAR_ACTIVE_OBJECT2,0);
[002F] (00) stopObjectCode();
END

// Object 343: Sign
Events:
   C - 0017
[0017] (D8) printEgo("Tentacle on board!");
[0029] (00) stopObjectCode();
END

// Object 344: Bumper Sticker
Events:
   C - 0021
[0021] (D8) printEgo("I heart Weird Ed.");
[0031] (00) stopObjectCode();
END

// Object 345: Shelf
Events:
END
