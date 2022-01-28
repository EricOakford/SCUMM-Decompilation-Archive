/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 13: Statue Hall
 */

// Object 193: Steel Security Door
Events:
   1 - 002A
   2 - 0059
   D - 005F
[002A] (D8) printEgo("I think I'll need that silly chart again");
[004D] (91) animateActor(VAR_EGO,246);
[0050] (AE) waitForMessage();
[0051] (19) doSentence(11,540,0,0);
[0058] (00) stopObjectCode();
[0059] (42) startScript(11);
[005B] (47) clearState08(182);
[005E] (00) stopObjectCode();
[005F] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0063] (24)   loadRoomWithEgo(182,11,255,255);
[0069] (**) }
[0069] (00) stopObjectCode();
END

// Object 194: Stairs
Events:
   D - 0019
[0019] (48) if (Var[105] == 1) {
[001F] (D8)   printEgo("I'm not going up there\x01that monster's got my friend!");
[004D] (9E)   walkActorTo(VAR_EGO,78,69);
[0051] (18) } else {
[0054] (24)   loadRoomWithEgo(456,12,255,255);
[005A] (**) }
[005A] (00) stopObjectCode();
END

// Object 195: Door to Office
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(208);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(208);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(208,22,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 196: Door to Arcade
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(201);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(201);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(201,18,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 368: Statue
Events:
   9 - 001F
   A - 001F
   C - 0035
   E - 001F
[001F] (D8) printEgo("It's too heavy to move.");
[0034] (00) stopObjectCode();
[0035] (D8) printEgo("Maybe there's a plaque somewhere.");
[0054] (00) stopObjectCode();
END

// Object 369: Plaque on Statue
Events:
   C - 0023
[0023] (D8) printEgo("Si trouve, envoyez-le au Louvre,\x01poste paye.");
[004C] (00) stopObjectCode();
END

// Object 540: Keypad
Events:
   B - 0019
[0019] (4F) if (getState08(193)) {
[001E] (47)   clearState08(193);
[0021] (47)   clearState08(182);
[0024] (1C)   startSound(9);
[0026] (80)   breakHere();
[0027] (80)   breakHere();
[0028] (**) }
[0028] (46) Var[192]++;
[002A] (78) if (Var[192] < 4) {
[0030] (42)   startScript(167);
[0032] (18) } else {
[0035] (42)   startScript(62);
[0037] (**) }
[0037] (00) stopObjectCode();
END
