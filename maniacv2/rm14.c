/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 14: Art Room
 */

// Object 197: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(180);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(180);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(180,11,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 198: Bowl of Wax Fruit
Events:
   3 - 0029
   E - 0026
[0026] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0028] (00) stopObjectCode();
[0029] (1A) Var[123] = 198;
[002D] (42) startScript(103);
[002F] (00) stopObjectCode();
END

// Object 199: Paint Brush
Events:
   E - 001E
[001E] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0020] (00) stopObjectCode();
END

// Object 200: Paint Remover
Events:
   3 - 004E
   B - 0027
   E - 0024
[0024] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0026] (00) stopObjectCode();
[0027] (A9) setOwnerOf(VAR_ACTIVE_OBJECT1,14);
[002A] (48) if (VAR_ACTIVE_OBJECT2 == 101) {
[0030] (07)   setState08(101);
[0033] (57)   setState02(101);
[0036] (18) } else {
[0039] (D8)   printEgo("That sure was a waste.");
[004D] (**) }
[004D] (00) stopObjectCode();
[004E] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[0054] (D8)   printEgo("Yech! No thanks.");
[0064] (78) } else if (VAR_ACTIVE_OBJECT2 < 8) {
[006D] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0070] (**) }
[0070] (00) stopObjectCode();
END

// Object 370: Easel
Events:
END

// Object 371: Unfinished Painting
Events:
END

// Object 372: Crate
Events:
END

// Object 373: Dried Purple Slime
Events:
  FF - 0025
[0025] (D8) printEgo("I'M not going to touch that slime!");
[0043] (00) stopObjectCode();
END

// Object 374: Sketch
Events:
END
