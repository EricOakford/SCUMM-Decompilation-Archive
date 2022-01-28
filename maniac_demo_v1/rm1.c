/**
 * Maniac Mansion: V1 Demo
 * 
 * Room 1: House Exterior
 */

// EN
[0000] (3C) stopSound(32);
[0002] (68) VAR_RESULT = isScriptRunning(63);
[0005] (48) if (VAR_RESULT == 0) {
[000B] (42)   startScript(57);
[000D] (**) }
[000D] (00) stopObjectCode();
END

// EX
[0000] (4F) if (getState08(58)) {
[0005] (48)   if (Var[83] == 1) {
[000B] (48)     if (Var[104] == 1) {
[0011] (0F)       if (!getState08(50)) {
[0016] (4F)         if (getState08(51)) {
[001B] (68)           VAR_RESULT = isScriptRunning(105);
[001E] (48)           if (VAR_RESULT == 0) {
[0024] (42)             startScript(105);
[0026] (**)           }
[0026] (**)         }
[0026] (**)       }
[0026] (**)     }
[0026] (**)   }
[0026] (**) }
[0026] (68) VAR_RESULT = isScriptRunning(12);
[0029] (48) if (VAR_RESULT == 1) {
[002F] (1C)   startSound(32);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 50: Mailbox
Events:
   1 - 001E
   2 - 0021
   B - 0024
[001E] (87) setState08(VAR_ACTIVE_OBJECT1);
[0020] (00) stopObjectCode();
[0021] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0023] (00) stopObjectCode();
[0024] (59) doSentence(11,VAR_ACTIVE_OBJECT2,276,0);
[002A] (00) stopObjectCode();
END

// Object 51: Flag
Events:
   1 - 001F
   2 - 0025
   9 - 002E
   A - 002B
   B - 0031
[001F] (79) doSentence(1,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[0024] (00) stopObjectCode();
[0025] (79) doSentence(2,VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2,0);
[002A] (00) stopObjectCode();
[002B] (87) setState08(VAR_ACTIVE_OBJECT1);
[002D] (00) stopObjectCode();
[002E] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0030] (00) stopObjectCode();
[0031] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0035] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0037] (18) } else {
[003A] (87)   setState08(VAR_ACTIVE_OBJECT1);
[003C] (**) }
[003C] (00) stopObjectCode();
END

// Object 52: Left Bushes
Events:
   1 - 001D
   A - 001D
   E - 001D
[001D] (87) setState08(VAR_ACTIVE_OBJECT1);
[001F] (00) stopObjectCode();
END

// Object 53: Grating
Events:
   1 - 0028
   2 - 006E
   6 - 008A
   8 - 008A
   9 - 0074
   A - 0074
   B - 008A
   D - 009A
[0028] (EF) if (getState04(VAR_ACTIVE_OBJECT1)) {
[002C] (B1)   VAR_RESULT = getBitVar(2944,VAR_EGO);
[0031] (48)   if (VAR_RESULT == 1) {
[0037] (D8)     printEgo("Easy!");
[003E] (18)     goto 0066;
[0041] (18)   } else {
[0044] (D8)     printEgo("I can't budge it. It's rusted shut.");
[0063] (**)   }
[0063] (18) } else {
[0066] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0068] (07)   setState08(234);
[006B] (1C)   startSound(8);
[006D] (**) }
[006D] (00) stopObjectCode();
[006E] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0070] (47) clearState08(234);
[0073] (00) stopObjectCode();
[0074] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0078] (19)   doSentence(1,53,0,0);
[007F] (18) } else {
[0082] (19)   doSentence(2,53,0,0);
[0089] (**) }
[0089] (00) stopObjectCode();
[008A] (48) if (VAR_ACTIVE_OBJECT2 == 152) {
[0090] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0092] (19)   doSentence(1,53,0,0);
[0099] (**) }
[0099] (00) stopObjectCode();
[009A] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[009E] (24)   loadRoomWithEgo(234,29,255,255);
[00A4] (**) }
[00A4] (00) stopObjectCode();
END

// Object 54: Doormat
Events:
   9 - 003B
   A - 001F
   E - 001F
[001F] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0023] (D8)   printEgo("I'll leave it here.");
[0035] (18) } else {
[0038] (87)   setState08(VAR_ACTIVE_OBJECT1);
[003A] (**) }
[003A] (00) stopObjectCode();
[003B] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[003D] (00) stopObjectCode();
END

// Object 55: House key
Events:
   B - 001B
   E - 0018
[0018] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001A] (00) stopObjectCode();
[001B] (48) if (VAR_ACTIVE_OBJECT2 == 61) {
[0021] (67)   clearState04(61);
[0024] (19)   doSentence(1,61,0,0);
[002B] (18) } else {
[002E] (D8)   printEgo("It doesn't work.");
[003E] (**) }
[003E] (00) stopObjectCode();
END

// Object 56: Undeveloped Film
Events:
   1 - 002E
   3 - 0074
   B - 003A
   C - 0040
   E - 002B
[002B] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[002D] (00) stopObjectCode();
[002E] (68) VAR_RESULT = isScriptRunning(76);
[0031] (48) if (VAR_RESULT == 0) {
[0037] (42)   startScript(76);
[0039] (**) }
[0039] (00) stopObjectCode();
[003A] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[003F] (00) stopObjectCode();
[0040] (78) if (Var[155] < 2) {
[0046] (D8)   printEgo("Kodak.");
[004E] (18) } else {
[0051] (D8)   printEgo("Looks like photographs of Ed's plans.");
[0073] (**) }
[0073] (00) stopObjectCode();
[0074] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[007A] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[007D] (**) }
[007D] (48) if (VAR_ACTIVE_OBJECT2 == 11) {
[0083] (78)   if (Var[155] < 2) {
[0089] (14)     print(11,"No! No! You have to develop it for me!");
[00AA] (18)   } else {
[00AD] (42)     startScript(93);
[00AF] (**)   }
[00AF] (**) }
[00AF] (00) stopObjectCode();
END

// Object 57: Package
Events:
   1 - 0051
   3 - 0032
   A - 0051
   C - 0044
   E - 0022
[0022] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0024] (48) if (Var[100] == 0) {
[002A] (50)   pickupObject(165);
[002D] (29)   setOwnerOf(165,14);
[0031] (**) }
[0031] (00) stopObjectCode();
[0032] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[0038] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[003B] (**) }
[003B] (48) if (VAR_ACTIVE_OBJECT2 == 11) {
[0041] (42)   startScript(92);
[0043] (**) }
[0043] (00) stopObjectCode();
[0044] (D8) printEgo("To: Weird Ed");
[0050] (00) stopObjectCode();
[0051] (48) if (Var[100] == 0) {
[0057] (CF)   if (getState08(VAR_ACTIVE_OBJECT1)) {
[005B] (69)     setOwnerOf(165,VAR_EGO);
[005F] (18)   } else {
[0062] (50)     pickupObject(165);
[0065] (**)   }
[0065] (D8)   printEgo("Some uncanceled stamps came off!");
[0083] (1A)   Var[100] = 1;
[0087] (18) } else {
[008A] (D8)   printEgo("That would be illegal.");
[009F] (**) }
[009F] (00) stopObjectCode();
END

// Object 58: Envelope
Events:
   C - 001D
   E - 005F
[001D] (48) if (Var[104] == 0) {
[0023] (D8)   printEgo("It's a blank envelope.");
[0038] (18) } else {
[003B] (D8)   printEgo("It's addressed to: 222 Skyscraper Way.");
[005E] (**) }
[005E] (00) stopObjectCode();
[005F] (57) setState02(58);
[0062] (47) clearState08(58);
[0065] (69) setOwnerOf(222,VAR_EGO);
[0069] (00) stopObjectCode();
END

// Object 60: Contract
Events:
   3 - 0027
   C - 0024
   E - 001F
[001F] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0021] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0023] (00) stopObjectCode();
[0024] (42) startScript(132);
[0026] (00) stopObjectCode();
[0027] (42) startScript(110);
[0029] (00) stopObjectCode();
END

// Object 61: Front Door
Events:
   1 - 0027
   2 - 0036
   8 - 003C
   B - 003C
   D - 005B
  10 - 0051
[0027] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[002B] (42)   startScript(10);
[002D] (07)   setState08(67);
[0030] (18) } else {
[0033] (42)   startScript(69);
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (42) startScript(11);
[0038] (47) clearState08(67);
[003B] (00) stopObjectCode();
[003C] (48) if (VAR_ACTIVE_OBJECT2 == 55) {
[0042] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0044] (19)   doSentence(1,61,0,0);
[004B] (18) } else {
[004E] (42)   startScript(71);
[0050] (**) }
[0050] (00) stopObjectCode();
[0051] (A7) setState04(VAR_ACTIVE_OBJECT1);
[0053] (19) doSentence(2,61,0,0);
[005A] (00) stopObjectCode();
[005B] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (48)   if (Var[138] == 0) {
[0065] (1A)     Var[138] = 1;
[0069] (42)     startScript(148);
[006B] (2D)     putActorInRoom(10,7);
[006E] (01)     putActor(10,62,56);
[0072] (11)     animateActor(10,251);
[0075] (07)     setState08(89);
[0078] (42)     startScript(152);
[007A] (**)   }
[007A] (24)   loadRoomWithEgo(67,10,255,255);
[0080] (**) }
[0080] (00) stopObjectCode();
END

// Object 62: Tombstone 1
Events:
   C - 001C
[001C] (D8) printEgo("And good riddance!");
[002E] (00) stopObjectCode();
END

// Object 63: Tombstone 2
Events:
   C - 001C
[001C] (D8) printEgo("Another one bites the dust!");
[0035] (00) stopObjectCode();
END

// Object 64: Tombstone 3
Events:
END

// Object 165: Stamps
Events:
   A - 001D
   B - 003C
   E - 001D
[001D] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001F] (D8) printEgo("Hmm, they're uncanceled.");
[0037] (1A) Var[100] = 1;
[003B] (00) stopObjectCode();
[003C] (48) if (VAR_ACTIVE_OBJECT2 == 31) {
[0042] (18) } else {
[0045] (48)   unless (VAR_ACTIVE_OBJECT2 == 222) goto 006F;
[004B] (**) }
[004B] (48) if (Var[81] == 1) {
[0051] (1A)   Var[83] = 1;
[0055] (D8)   printEgo("They stick!");
[0061] (42)   startScript(84);
[0063] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT1,0);
[0066] (18) } else {
[006F] (D8)   printEgo("They won't stick.");
[0080] (**) }
[0080] (00) stopObjectCode();
END

// Object 257: Path to Driveway
Events:
   D - 0013
[0013] (24) loadRoomWithEgo(258,44,255,255);
[0019] (00) stopObjectCode();
END

// Object 276: Mailbox
Events:
   1 - 0020
   2 - 0024
   B - 0028
   C - 009A
[0020] (07) setState08(50);
[0023] (00) stopObjectCode();
[0024] (47) clearState08(50);
[0027] (00) stopObjectCode();
[0028] (48) if (VAR_ACTIVE_OBJECT2 == 222) {
[002E] (4F)   if (getState08(50)) {
[0033] (48)     if (Var[104] == 0) {
[0039] (D8)       printEgo("There is no address on it.");
[0050] (48)     } else if (Var[83] == 0) {
[0059] (D8)       printEgo("There's no stamp on it.");
[006E] (48)     } else if (Var[82] == 0) {
[0077] (D8)       printEgo("The envelope is empty.");
[008C] (18)     } else {
[008F] (29)       setOwnerOf(222,14);
[0093] (17)       clearState02(58);
[0096] (07)       setState08(58);
[0099] (**)     }
[0099] (**)   }
[0099] (**) }
[0099] (00) stopObjectCode();
[009A] (D8) printEgo("Solicitors will be eaten.");
[00B2] (00) stopObjectCode();
END

// Object 277: Right Bushes
Events:
END

// Object 394: Doorbell
Events:
   9 - 001F
   B - 001F
   C - 0045
[001F] (1C) startSound(39);
[0021] (48) if (Var[92] == 0) {
[0027] (68)   VAR_RESULT = isScriptRunning(87);
[002A] (48)   if (VAR_RESULT == 0) {
[0030] (03)     VAR_RESULT = getActorRoom(11);
[0033] (48)     if (VAR_RESULT == 26) {
[0039] (1A)       Var[143] = 1;
[003D] (42)       startScript(87);
[003F] (**)     }
[003F] (18)   } else {
[0042] (42)     startScript(97);
[0044] (**)   }
[0044] (**) }
[0044] (00) stopObjectCode();
[0045] (D8) printEgo("This is the home of Dr. Fred,\x03Nurse Edna, Weird Ed, Dead Cousin Ted,\x03Green Tentacle and Purple Tentacle.");
[009F] (00) stopObjectCode();
END