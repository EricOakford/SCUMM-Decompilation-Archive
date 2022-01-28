/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 2: Pool Bottom
 */

// EN
[0000] (3C) stopSound(32);
[0002] (0C) loadSound(27)
[0005] (00) stopObjectCode();
END

// EX
[0000] (01) putActor(1,0,2);
[0004] (00) stopObjectCode();
[0005] (1C) startSound(32);
[0007] (00) stopObjectCode();
END


// Object 141
Events:
   B - 0023
   E - 0020
[0020] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0022] (00) stopObjectCode();
[0023] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0028] (00) stopObjectCode();
END

// Object 142: Radio
Events:
   1 - 002E
   4 - 0061
   5 - 006E
   E - 001E
[001E] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0020] (50) pickupObject(167);
[0023] (29) setOwnerOf(167,14);
[0027] (07) setState08(140);
[002A] (57) setState02(140);
[002D] (00) stopObjectCode();
[002E] (0F) if (!getState08(142)) {
[0033] (19)   doSentence(1,142,0,0);
[003A] (19)   doSentence(14,142,0,0);
[0041] (18) } else {
[0044] (10)   VAR_RESULT = getObjectOwner(167);
[0048] (48)   if (VAR_RESULT == 14) {
[004E] (D8)     printEgo("Batteries!");
[005A] (69)     setOwnerOf(167,VAR_EGO);
[005E] (3C)     stopSound(20);
[0060] (**)   }
[0060] (**) }
[0060] (00) stopObjectCode();
[0061] (10) VAR_RESULT = getObjectOwner(167);
[0065] (48) if (VAR_RESULT == 14) {
[006B] (1C)   startSound(20);
[006D] (**) }
[006D] (00) stopObjectCode();
[006E] (3C) stopSound(20);
[0070] (00) stopObjectCode();
END

// Object 167
Events:
   B - 001C
[001C] (48) if (VAR_ACTIVE_OBJECT2 == 84) {
[0022] (1A)   Var[50] = 2;
[0026] (29)   setOwnerOf(167,0);
[002A] (**) }
[002A] (00) stopObjectCode();
END

// Object 171
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(172,6,255,255);
[001F] (00) stopObjectCode();
END

// Object 288
Events:
   9 - 0021
   B - 0021
   C - 0026
[0021] (1C) startSound(27);
[0023] (42) startScript(62);
[0025] (00) stopObjectCode();
[0026] (D8) printEgo("DO NOT PRESS UNDER ANY CIRCUMSTANCES!");
[0048] (00) stopObjectCode();
END

// Object 336
Events:
   E - 001D
[001D] (42) startScript(70);
[001F] (00) stopObjectCode();
END

// Object 337
Events:
END

// Object 338
Events:
   D - 0029
  FF - 002A
[0029] (00) stopObjectCode();
[002A] (D8) printEgo("I'm not going to touch cooling rods!");
[004A] (00) stopObjectCode();
END

// Object 339
Events:
  FF - 0024
[0024] (D8) printEgo("I'm not going to touch that goo!");
[0040] (00) stopObjectCode();
END
