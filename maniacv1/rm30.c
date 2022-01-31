/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 30: Inner Lab
 */

// EN
[0000] (2D) putActorInRoom(23,30);
[0003] (01) putActor(23,36,60);
[0007] (11) animateActor(23,250);
[000A] (11) animateActor(23,24);
[000D] (11) animateActor(23,12);
[0010] (2D) putActorInRoom(9,30);
[0013] (01) putActor(9,38,66);
[0017] (0F) if (!getState08(176)) {
[001C] (1C)   startSound(59);
[001E] (**) }
[001E] (48) if (Var[108] == 1) {
[0024] (42)   startScript(127);
[0026] (**) }
[0026] (48) if (Var[108] == 2) {
[002C] (42)   startScript(127);
[002E] (**) }
[002E] (68) VAR_RESULT = isScriptRunning(43);
[0031] (48) if (VAR_RESULT == 0) {
[0037] (42)   startScript(129);
[0039] (48)   if (Var[108] == 0) {
[003F] (1A)     Var[108] = 1;
[0043] (0C)     loadScript(123)
[0046] (42)     startScript(125);
[0048] (**)   }
[0048] (**) }
[0048] (0C) loadSound(54)
[004B] (00) stopObjectCode();
END

// EX
[0000] (3C) stopSound(59);
[0002] (00) stopObjectCode();
END

// Object 169: Sealed Door
Events:
   1 - 0019
   D - 0019
[0019] (D8) printEgo("It's sealed shut!");
[002A] (00) stopObjectCode();
END

// Object 170: Locker
Events:
   1 - 001B
   2 - 001E
[001B] (87) setState08(VAR_ACTIVE_OBJECT1);
[001D] (00) stopObjectCode();
[001E] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0020] (00) stopObjectCode();
END

// Object 178: Cold Can of Pepsi
Events:
   1 - 002A
   B - 0039
   C - 0051
   E - 004E
[002A] (D8) printEgo("Ok, it's open.");
[0038] (00) stopObjectCode();
[0039] (D8) printEgo("That was refreshing.");
[004D] (00) stopObjectCode();
[004E] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0050] (00) stopObjectCode();
[0051] (D8) printEgo("12 fluid ounces (354 ml)");
[0067] (00) stopObjectCode();
END

// Object 255: Door to Meteor's Room
Events:
   1 - 0021
   2 - 003B
   8 - 004E
   B - 004E
   D - 0043
  10 - 004E
[0021] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0025] (42)   startScript(121);
[0027] (07)   setState08(267);
[002A] (18) } else {
[002D] (D8)   printEgo("It's locked.");
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (42) startScript(122);
[003D] (47) clearState08(267);
[0040] (A7) setState04(VAR_ACTIVE_OBJECT1);
[0042] (00) stopObjectCode();
[0043] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0047] (24)   loadRoomWithEgo(267,51,255,255);
[004D] (**) }
[004D] (00) stopObjectCode();
[004E] (39) doSentence(11,415,VAR_ACTIVE_OBJECT2,0);
[0054] (00) stopObjectCode();
END

// Object 269: Radiation Suit
Events:
   B - 0023
   E - 0023
[0023] (2D) putActorInRoom(8,30);
[0026] (01) putActor(8,65,56);
[002A] (1A) VAR_EGO = 8;
[002E] (91) animateActor(VAR_EGO,16);
[0031] (AD) putActorInRoom(Var[116],0);
[0034] (81) putActor(Var[116],0,0);
[0038] (1A) Var[109] = 1;
[003C] (90) VAR_RESULT = getObjectOwner(Var[109]);
[003F] (C8) if (VAR_RESULT == Var[116]) {
[0044] (A9)   setOwnerOf(Var[109],8);
[0047] (**) }
[0047] (46) Var[109]++;
[0049] (44) unless (Var[109] > 255) goto 003C;
[004F] (60) cursorCommand(0, 0);
[0052] (1A) Var[47] = 0;
[0056] (1A) Var[48] = 0;
[005A] (1A) Var[49] = 0;
[005E] (1A) Var[109] = 1;
[0062] (AD) putActorInRoom(Var[109],0);
[0065] (1A) Var[110] = 1;
[0069] (90) VAR_RESULT = getObjectOwner(Var[110]);
[006C] (C8) if (VAR_RESULT == Var[109]) {
[0071] (A9)   setOwnerOf(Var[110],0);
[0074] (**) }
[0074] (46) Var[110]++;
[0076] (44) unless (Var[110] > 255) goto 0069;
[007C] (46) Var[109]++;
[007E] (44) unless (Var[109] > 7) goto 0062;
[0084] (87) setState08(VAR_ACTIVE_OBJECT1);
[0086] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0088] (D2) actorFollowCamera(VAR_EGO);
[008A] (00) stopObjectCode();
END

// Object 357: Pepsi Machine
Events:
   B - 003C
   C - 0022
[0022] (D8) printEgo("Please insert one quarter.");
[003B] (00) stopObjectCode();
[003C] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[0042] (1C)   startSound(54);
[0044] (47)   clearState08(178);
[0047] (17)   clearState02(178);
[004A] (29)   setOwnerOf(221,0);
[004E] (18) } else {
[0051] (D8)   printEgo("It doesn't work.");
[0061] (**) }
[0061] (00) stopObjectCode();
END

// Object 358: Zom-B-Matic
Events:
   C - 001E
[001E] (D8) printEgo("Please insert one kid.");
[0033] (00) stopObjectCode();
END

// Object 359
Events:
END

// Object 360
Events:
END

// Object 415: Card Slot
Events:
   8 - 003F
   B - 003F
   C - 0022
  10 - 003F
[0022] (D8) printEgo("Insert card key to unlock door.");
[003E] (00) stopObjectCode();
[003F] (48) if (VAR_ACTIVE_OBJECT2 == 104) {
[0045] (67)   clearState04(255);
[0048] (1C)   startSound(54);
[004A] (19)   doSentence(1,255,0,0);
[0051] (18) } else {
[0054] (D8)   printEgo("It doesn't fit.");
[0063] (**) }
[0063] (00) stopObjectCode();
END

// Object 424: Control Panel
Events:
   C - 0020
[0020] (D8) printEgo("To initiate destruct sequence:\x01Press buttons in proper order.");
[0058] (00) stopObjectCode();
END

// Object 425: Button 1
Events:
   9 - 001B
[001B] (D8) printEgo("Button 1 pushed.");
[002B] (1C) startSound(54);
[002D] (19) doSentence(13,424,0,0);
[0034] (00) stopObjectCode();
END

// Object 426: Button 2
Events:
   9 - 001B
[001B] (D8) printEgo("Button 2 pushed.");
[002B] (1C) startSound(54);
[002D] (19) doSentence(13,424,0,0);
[0034] (00) stopObjectCode();
END

// Object 427: Button 3
Events:
   9 - 001B
[001B] (D8) printEgo("Button 3 pushed.");
[002B] (1C) startSound(54);
[002D] (19) doSentence(13,424,0,0);
[0034] (00) stopObjectCode();
END

// Object 428: Button 4
Events:
   9 - 001B
[001B] (D8) printEgo("Button 4 pushed.");
[002B] (1C) startSound(54);
[002D] (19) doSentence(13,424,0,0);
[0034] (00) stopObjectCode();
END
