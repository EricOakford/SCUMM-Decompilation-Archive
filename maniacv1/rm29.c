/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 29: Under Porch
 */

// Object 65: Puddle of Developer
Events:
   B - 0047
   E - 0028
[0028] (D8) printEgo("I don't have anything to put it in.");
[0046] (00) stopObjectCode();
[0047] (48) if (VAR_ACTIVE_OBJECT2 == 123) {
[004D] (87)   setState08(VAR_ACTIVE_OBJECT1);
[004F] (D7)   setState02(VAR_ACTIVE_OBJECT1);
[0051] (1A)   Var[168] = 3;
[0055] (42)   startScript(80);
[0057] (**) }
[0057] (48) if (VAR_ACTIVE_OBJECT2 == 132) {
[005D] (D8)   printEgo("I can't get it in the jar.");
[0073] (**) }
[0073] (00) stopObjectCode();
END

// Object 66: Water Valve
Events:
   1 - 0024
   2 - 002D
   4 - 0024
   5 - 002D
[0024] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0028] (87)   setState08(VAR_ACTIVE_OBJECT1);
[002A] (42)   startScript(75);
[002C] (**) }
[002C] (00) stopObjectCode();
[002D] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0031] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0033] (42)   startScript(75);
[0035] (**) }
[0035] (00) stopObjectCode();
END

// Object 234: Grate
Events:
   1 - 0020
   2 - 0026
   9 - 0026
   A - 0020
   D - 002C
[0020] (87) setState08(VAR_ACTIVE_OBJECT1);
[0022] (07) setState08(53);
[0025] (00) stopObjectCode();
[0026] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0028] (47) clearState08(53);
[002B] (00) stopObjectCode();
[002C] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0030] (24)   loadRoomWithEgo(53,1,255,255);
[0036] (**) }
[0036] (00) stopObjectCode();
END

// Object 280: Floor Grating
Events:
  FF - 0020
[0020] (D8) printEgo("I can't reach it.");
[0030] (00) stopObjectCode();
END
