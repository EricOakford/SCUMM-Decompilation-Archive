/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 6: Swimming Pool
 */

// EN
[0000] (3C) stopSound(32);
[0002] (0F) if (!getState08(139)) {
[0007] (30)   setBoxFlags(5,64);
[000A] (18) } else {
[000D] (30)   setBoxFlags(5,5);
[0010] (**) }
[0010] (00) stopObjectCode();
END

// EX
[0000] (01) putActor(1,0,2);
[0004] (00) stopObjectCode();
[0005] (1C) startSound(32);
[0007] (00) stopObjectCode();
END

// Object 137: Door
Events:
   1 - 0021
   2 - 0030
   8 - 0036
   B - 0036
   D - 005B
  10 - 004E
[0021] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0025] (42)   startScript(10);
[0027] (07)   setState08(125);
[002A] (18) } else {
[002D] (42)   startScript(69);
[002F] (**) }
[002F] (00) stopObjectCode();
[0030] (42) startScript(11);
[0032] (47) clearState08(125);
[0035] (00) stopObjectCode();
[0036] (48) if (VAR_ACTIVE_OBJECT2 == 158) {
[003C] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[003E] (67)   clearState04(125);
[0041] (19)   doSentence(1,137,0,0);
[0048] (18) } else {
[004B] (42)   startScript(71);
[004D] (**) }
[004D] (00) stopObjectCode();
[004E] (A7) setState04(VAR_ACTIVE_OBJECT1);
[0050] (27) setState04(125);
[0053] (19) doSentence(2,137,0,0);
[005A] (00) stopObjectCode();
[005B] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (24)   loadRoomWithEgo(125,36,255,255);
[0065] (**) }
[0065] (00) stopObjectCode();
END

// Object 138: Gate
Events:
   1 - 0039
   2 - 0042
   9 - 0042
   A - 0039
   D - 001F
[001F] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0023] (48)   if (Var[152] == 1) {
[0029] (24)     loadRoomWithEgo(108,52,255,255);
[002F] (18)   } else {
[0032] (24)     loadRoomWithEgo(143,16,255,255);
[0038] (**)   }
[0038] (**) }
[0038] (00) stopObjectCode();
[0039] (42) startScript(10);
[003B] (07) setState08(143);
[003E] (07) setState08(108);
[0041] (00) stopObjectCode();
[0042] (42) startScript(11);
[0044] (47) clearState08(143);
[0047] (47) clearState08(108);
[004A] (00) stopObjectCode();
END

// Object 139: Swimming Pool
Events:
   B - 005E
   D - 0022
[0022] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0026] (D8)   printEgo("I don't want to get wet!");
[003B] (18) } else {
[003E] (D8)   printEgo("I'd better use the ladder.");
[0056] (19)   doSentence(13,172,0,0);
[005D] (**) }
[005D] (00) stopObjectCode();
[005E] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0062] (48)   if (VAR_ACTIVE_OBJECT2 == 123) {
[0068] (1A)     Var[168] = 2;
[006C] (42)     startScript(80);
[006E] (**)   }
[006E] (48)   if (VAR_ACTIVE_OBJECT2 == 132) {
[0074] (1A)     Var[166] = 2;
[0078] (42)     startScript(79);
[007A] (**)   }
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 140: Radio
Events:
  FF - 0018
[0018] (D8) printEgo("I can't reach it.");
[0028] (00) stopObjectCode();
END

// Object 172: Ladder (Pool Empty)
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(171,2,255,255);
[001F] (00) stopObjectCode();
END

// Object 285: Ladder (Pool Full)
Events:
   D - 0019
[0019] (D8) printEgo("I'm not going down there.\x01It's full of water!");
[0041] (00) stopObjectCode();
END

// Object 333: Pool Chair
Events:
  FF - 001D
[001D] (D8) printEgo("I can't reach it.");
[002D] (00) stopObjectCode();
END

// Object 334: Old Tree
Events:
END
