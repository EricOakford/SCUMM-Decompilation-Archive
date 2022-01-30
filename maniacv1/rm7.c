/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 7: Kitchen
 */

// EN
[0000] (00) stopObjectCode();
[0001] (02) startMusic(0);
[0003] (1C) startSound(17);
[0005] (42) startScript(81);
[0007] (00) stopObjectCode();
END

// EX
[0000] (52) actorFollowCamera(0);
END

// Object 31: Sealed Envelope
Events:
   1 - 0027
   B - 0043
   E - 0036
[0027] (19) doSentence(1,222,0,0);
[002E] (19) doSentence(14,31,0,0);
[0035] (00) stopObjectCode();
[0036] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0038] (D7) setState02(VAR_ACTIVE_OBJECT1);
[003A] (69) setOwnerOf(222,VAR_EGO);
[003E] (3A) Var[85] -= 2;
[0042] (00) stopObjectCode();
[0043] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0048] (42) startScript(81);
[004A] (00) stopObjectCode();
END

// Object 81: Door to Foyer
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(68);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(68);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(68,10,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 82: Door to Dining Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(95);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(95);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(95,37,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 83: Jar of Water
Events:
   E - 002B
[002B] (68) VAR_RESULT = isScriptRunning(60);
[002E] (48) if (VAR_RESULT == 1) {
[0034] (D8)   printEgo("Ouch! It's still too hot!");
[004B] (18) } else {
[004E] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0050] (D7)   setState02(VAR_ACTIVE_OBJECT1);
[0052] (69)   setOwnerOf(132,VAR_EGO);
[0056] (3A)   Var[85] -= 4;
[005A] (**) }
[005A] (00) stopObjectCode();
END

// Object 84: Flashlight
Events:
   3 - 006C
   4 - 002C
   5 - 0057
   B - 0066
   E - 0029
[0029] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[002B] (00) stopObjectCode();
[002C] (38) if (Var[50] >= 1) {
[0032] (1A)   Var[156] = 1;
[0036] (42)   startScript(82);
[0038] (48)   if (Var[50] == 1) {
[003E] (42)     startScript(150);
[0040] (**)   }
[0040] (18) } else {
[0043] (D8)   printEgo("It needs batteries.");
[0056] (**) }
[0056] (00) stopObjectCode();
[0057] (38) if (Var[50] >= 1) {
[005D] (1A)   Var[156] = 0;
[0061] (42)   startScript(82);
[0063] (62)   stopScript(150);
[0065] (**) }
[0065] (00) stopObjectCode();
[0066] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[006B] (00) stopObjectCode();
[006C] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[0072] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0075] (18)   goto 0057;
[0078] (**) }
[0078] (00) stopObjectCode();
END

// Object 85: Microwave
Events:
   1 - 0029
   2 - 0082
   4 - 0094
   5 - 0097
   B - 0091
[0029] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[002D] (62)   stopScript(17);
[002F] (62)   stopScript(58);
[0031] (42)   startScript(10);
[0033] (4F)   if (getState08(87)) {
[0038] (17)     clearState02(87);
[003B] (**)   }
[003B] (4F)   if (getState08(86)) {
[0040] (17)     clearState02(86);
[0043] (**)   }
[0043] (4F)   if (getState08(83)) {
[0048] (17)     clearState02(83);
[004B] (48)     if (Var[166] == 4) {
[0051] (D8)       printEgo("Argh! What a smell!!");
[0064] (**)     }
[0064] (48)     if (Var[166] == 2) {
[006A] (68)       VAR_RESULT = isScriptRunning(60);
[006D] (48)       if (VAR_RESULT == 1) {
[0073] (1A)         Var[95] = 1;
[0077] (42)         startScript(61);
[0079] (**)       }
[0079] (**)     }
[0079] (**)   }
[0079] (4F)   if (getState08(31)) {
[007E] (17)     clearState02(31);
[0081] (**)   }
[0081] (**) }
[0081] (00) stopObjectCode();
[0082] (42) startScript(11);
[0084] (57) setState02(87);
[0087] (57) setState02(86);
[008A] (57) setState02(83);
[008D] (57) setState02(31);
[0090] (00) stopObjectCode();
[0091] (42) startScript(59);
[0093] (00) stopObjectCode();
[0094] (42) startScript(74);
[0096] (00) stopObjectCode();
[0097] (62) stopScript(17);
[0099] (62) stopScript(58);
[009B] (4F) if (getState08(87)) {
[00A0] (D8)   printEgo("I think it's too late!");
[00B4] (**) }
[00B4] (00) stopObjectCode();
END

// Object 86: Hamster
Events:
   E - 001A
[001A] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[001C] (D7) setState02(VAR_ACTIVE_OBJECT1);
[001E] (69) setOwnerOf(34,VAR_EGO);
[0022] (1A) Var[85] = 0;
[0026] (00) stopObjectCode();
END

// Object 87: Exploded Hamster
Events:
   3 - 0067
   E - 0025
[0025] (04) if (VAR_EGO <= 2) {
[002B] (D8)   printEgo("Yum! Should I take white or dark meat?");
[004C] (18) } else {
[004F] (D8)   printEgo("How gross!");
[005A] (**) }
[005A] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[005C] (47) clearState08(87);
[005F] (57) setState02(87);
[0062] (1A) Var[85] = 0;
[0066] (00) stopObjectCode();
[0067] (42) startScript(103);
[0069] (48) if (VAR_ACTIVE_OBJECT2 == 11) {
[006F] (1A)   Var[95] = 3;
[0073] (42)   startScript(61);
[0075] (**) }
[0075] (00) stopObjectCode();
END

// Object 88: Faucet
Events:
   4 - 001D
   5 - 0022
   B - 0027
[001D] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[001F] (1C) startSound(17);
[0021] (00) stopObjectCode();
[0022] (87) setState08(VAR_ACTIVE_OBJECT1);
[0024] (3C) stopSound(17);
[0026] (00) stopObjectCode();
[0027] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (42)   startScript(78);
[002D] (42)   startScript(81);
[002F] (**) }
[002F] (00) stopObjectCode();
END

// Object 89: Refrigerator
Events:
   1 - 0025
   2 - 0038
   9 - 0038
   A - 0025
[0025] (42) startScript(10);
[0027] (48) if (Var[144] == 0) {
[002D] (1A)   Var[144] = 1;
[0031] (1A)   Var[143] = 2;
[0035] (42)   startScript(87);
[0037] (**) }
[0037] (00) stopObjectCode();
[0038] (42) startScript(11);
[003A] (00) stopObjectCode();
END

// Object 90: Cheese
Events:
   3 - 0025
   E - 001B
[001B] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001D] (19) doSentence(13,89,0,0);
[0024] (00) stopObjectCode();
[0025] (42) startScript(103);
[0027] (00) stopObjectCode();
END

// Object 91: Lettuce
Events:
   3 - 0026
   E - 001C
[001C] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001E] (19) doSentence(13,89,0,0);
[0025] (00) stopObjectCode();
[0026] (42) startScript(103);
[0028] (00) stopObjectCode();
END

// Object 92: Broken Bottles of Ketchup
Events:
   3 - 0038
   E - 002E
[002E] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0030] (19) doSentence(13,89,0,0);
[0037] (00) stopObjectCode();
[0038] (42) startScript(103);
[003A] (00) stopObjectCode();
END

// Object 93: Can of Pepsi
Events:
   3 - 004C
   B - 0046
   C - 002F
   E - 0025
[0025] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0027] (19) doSentence(13,89,0,0);
[002E] (00) stopObjectCode();
[002F] (D8) printEgo("12 fluid ounces (354 ml)");
[0045] (00) stopObjectCode();
[0046] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[004B] (00) stopObjectCode();
[004C] (48) if (VAR_ACTIVE_OBJECT2 == 19) {
[0052] (1A)   Var[193] = 1;
[0056] (42)   startScript(54);
[0058] (29)   setOwnerOf(93,0);
[005C] (44) } else if (VAR_ACTIVE_OBJECT2 > 8) {
[0065] (94)   print(VAR_ACTIVE_OBJECT2,"No thanks, it makes me burp.");
[007F] (18) } else {
[0082] (42)   startScript(104);
[0084] (**) }
[0084] (00) stopObjectCode();
END

// Object 94: Chainsaw
Events:
   4 - 0022
   B - 0022
   E - 001F
[001F] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0021] (00) stopObjectCode();
[0022] (D8) printEgo("I think it's out of gas.");
[0037] (48) if (VAR_EGO == 1) {
[003D] (D8)   printEgo("Let's go find some gas!");
[0052] (**) }
[0052] (00) stopObjectCode();
END

// Object 133: Old Batteries
Events:
   B - 002C
   E - 0022
[0022] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0024] (19) doSentence(13,89,0,0);
[002B] (00) stopObjectCode();
[002C] (48) if (VAR_ACTIVE_OBJECT2 == 84) {
[0032] (1A)   Var[50] = 1;
[0036] (1A)   Var[142] = 60;
[003A] (29)   setOwnerOf(133,0);
[003E] (**) }
[003E] (00) stopObjectCode();
END

// Object 289: Window
Events:
END

// Object 290: Very Dull Knives
Events:
   E - 0023
[0023] (D8) printEgo("They're glued to the wall.");
[003B] (00) stopObjectCode();
END

// Object 291: Stove
Events:
   1 - 003E
   2 - 003E
   4 - 003E
   5 - 003E
   B - 0020
[0020] (D8) printEgo("I don't think that's a good idea.");
[003D] (00) stopObjectCode();
[003E] (D8) printEgo("I'd rather use the microwave.");
[0059] (00) stopObjectCode();
END

// Object 292: Blood
Events:
  FF - 0018
[0018] (D8) printEgo("Yuck!");
[001F] (00) stopObjectCode();
END
