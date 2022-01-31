/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 25: Ted's Room
 */

// EN
[0000] (61) putActor(12,VAR_VIRT_MOUSE_Y,Var[97]);
[0004] (00) stopObjectCode();
END

// Object 109: Door to Hallway
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(463);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(463);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(463,38,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 110: Sarcophagus
Events:
   1 - 0020
   2 - 0023
[0020] (87) setState08(VAR_ACTIVE_OBJECT1);
[0022] (00) stopObjectCode();
[0023] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0025] (00) stopObjectCode();
END

// Object 111: Hunk-O-Matic
Events:
   B - 002C
[002C] (42) startScript(29);
[002E] (00) stopObjectCode();
END

// Object 112: Bathroom Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(113);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(113);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (0F)   if (!getState08(233)) {
[0030] (2D)     putActorInRoom(12,24);
[0033] (01)     putActor(12,30,48);
[0037] (18)   } else {
[003A] (2D)     putActorInRoom(12,24);
[003D] (01)     putActor(12,24,48);
[0041] (**)   }
[0041] (24)   loadRoomWithEgo(113,24,255,255);
[0047] (**) }
[0047] (00) stopObjectCode();
END

// Object 316: TV
Events:
   4 - 0015
[0015] (48) if (VAR_EGO == 5) {
[001B] (D8)   printEgo("It doesn't work, cable's not hooked up.");
[003E] (18) } else {
[0041] (D8)   printEgo("All I get is fuzz.");
[0051] (**) }
[0051] (00) stopObjectCode();
END

// Object 317: Pillow
Events:
END

// Object 318: Playboy Calendar
Events:
   A - 004C
   C - 0027
   E - 004C
[0027] (D8) printEgo("May 1972, and Ted's Deathday is circled!");
[004B] (00) stopObjectCode();
[004C] (D8) printEgo("It's nailed, stapled,\x01and glued to the wall.");
[0074] (00) stopObjectCode();
END

// Object 319: Poster
Events:
   C - 0019
[0019] (D8) printEgo("Miss Mummy of 982 BC.");
[002C] (00) stopObjectCode();
END

// Object 320: Surplus Body Parts
Events:
  FF - 0025
[0025] (D8) printEgo("Yuck!");
[002C] (00) stopObjectCode();
END
