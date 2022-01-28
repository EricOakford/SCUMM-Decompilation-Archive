/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 37: Dining Room
 */

// Object 95: Door to Kitchen
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(82);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(82);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(82,7,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 96: Old Rotting Turkey
Events:
   3 - 002A
   E - 0027
[0027] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0029] (00) stopObjectCode();
[002A] (42) startScript(103);
[002C] (00) stopObjectCode();
END

// Object 97: Week Old Roast
Events:
   3 - 0026
   E - 0023
[0023] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0025] (00) stopObjectCode();
[0026] (42) startScript(103);
[0028] (00) stopObjectCode();
END

// Object 98: Door to Pantry
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(124);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(124);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(124,36,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 293: Chair (left)
Events:
END

// Object 294: Chair (right)
Events:
END

// Object 295: Candle 1
Events:
   E - 0019
[0019] (42) startScript(70);
[001B] (00) stopObjectCode();
END

// Object 296: Candle 2
Events:
   E - 0019
[0019] (42) startScript(70);
[001B] (00) stopObjectCode();
END

// Object 297: Candle 3
Events:
   E - 0019
[0019] (42) startScript(70);
[001B] (00) stopObjectCode();
END

// Object 448: Gravy Stain
Events:
   E - 001E
[001E] (D8) printEgo("I don't do table cloths.");
[0034] (00) stopObjectCode();
END
