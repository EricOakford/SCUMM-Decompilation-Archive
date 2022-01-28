/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 22: Dr. Fred's Office
 */

// Object 208: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(195);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(195);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(195,13,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 209: Desk (drawer)
Events:
   1 - 001D
   2 - 0020
   9 - 0020
   A - 001D
[001D] (87) setState08(VAR_ACTIVE_OBJECT1);
[001F] (00) stopObjectCode();
[0020] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0022] (00) stopObjectCode();
END

// Object 210: Manuscript
Events:
   6 - 0023
   B - 004B
   C - 0048
   E - 0045
[0023] (48) if (VAR_ACTIVE_OBJECT2 == 416) {
[0029] (42)   startScript(16);
[002B] (18) } else {
[002E] (D8)   printEgo("I can't fix it with that!");
[0044] (**) }
[0044] (00) stopObjectCode();
[0045] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0047] (00) stopObjectCode();
[0048] (42) startScript(15);
[004A] (00) stopObjectCode();
[004B] (48) if (VAR_ACTIVE_OBJECT2 == 416) {
[0051] (19)   doSentence(6,210,416,0);
[0058] (18) } else {
[005B] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0060] (**) }
[0060] (00) stopObjectCode();
END

// Object 377: Mail-A-Med Diploma
Events:
   C - 0025
[0025] (D8) printEgo("Presented to Doctor Fred.");
[003D] (00) stopObjectCode();
END

// Object 378: Docs 'R Us Diploma
Events:
   C - 0025
[0025] (D8) printEgo("Degree for mummifying and bandaging.");
[0047] (00) stopObjectCode();
END

// Object 379: Desk Lamp
Events:
   4 - 001E
   5 - 0028
[001E] (1C) startSound(12);
[0020] (9B) setBitVar(2816,VAR_ROOM,0);
[0025] (42) startScript(55);
[0027] (00) stopObjectCode();
[0028] (1C) startSound(12);
[002A] (9B) setBitVar(2816,VAR_ROOM,1);
[002F] (42) startScript(55);
[0031] (00) stopObjectCode();
END

// Object 380: Desk
Events:
   1 - 0019
   2 - 001D
[0019] (07) setState08(209);
[001C] (00) stopObjectCode();
[001D] (47) clearState08(209);
[0020] (00) stopObjectCode();
END

// Object 381: Blackboard
Events:
   C - 001E
[001E] (D8) printEgo("It looks like formulas\x01describing the structure of a meteor!\x03That's strange.");
[0063] (00) stopObjectCode();
END

// Object 382: Examination Table
Events:
   9 - 0026
   A - 0026
[0026] (42) startScript(70);
[0028] (00) stopObjectCode();
END

// Object 383: Real Skeleton
Events:
  FF - 0020
[0020] (D8) printEgo("Oooh! That's scary!");
[0033] (00) stopObjectCode();
END

// Object 384: Medical Diagram
Events:
   C - 0022
[0022] (D8) printEgo("Chewy carmel center.");
[0036] (00) stopObjectCode();
END

// Object 385: Medical Cabinet
Events:
   1 - 0024
   8 - 0024
[0024] (42) startScript(66);
[0026] (00) stopObjectCode();
END

// Object 419: Medical Chart
Events:
   C - 0020
[0020] (48) if (VAR_EGO == 2) {
[0026] (D8)   printEgo("WOW! That's neat!!");
[0038] (18) } else {
[003B] (D8)   printEgo("Yuck. That's disgusting!");
[0053] (**) }
[0053] (00) stopObjectCode();
END
