/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 8: Basement
 */

// EN
[0000] (00) stopObjectCode();
END

// Object 154: Stairs
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(69,10,255,255);
[001F] (00) stopObjectCode();
END

// Object 155: Door
Events:
   1 - 0021
   2 - 0028
   8 - 002B
   B - 002B
   D - 003C
  10 - 0028
[0021] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0025] (42)   startScript(69);
[0027] (**) }
[0027] (00) stopObjectCode();
[0028] (42) startScript(56);
[002A] (00) stopObjectCode();
[002B] (48) if (VAR_ACTIVE_OBJECT2 == 76) {
[0031] (42)   startScript(10);
[0033] (07)   setState08(159);
[0036] (18) } else {
[0039] (42)   startScript(71);
[003B] (**) }
[003B] (00) stopObjectCode();
[003C] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0040] (19)   doSentence(2,155,0,1);
[0047] (24)   loadRoomWithEgo(159,4,255,255);
[004D] (**) }
[004D] (00) stopObjectCode();
END

// Object 156: Fuse Box
Events:
   1 - 001D
   2 - 0022
[001D] (87) setState08(VAR_ACTIVE_OBJECT1);
[001F] (1C) startSound(8);
[0021] (00) stopObjectCode();
[0022] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0024] (00) stopObjectCode();
END

// Object 157: Circuit Breakers
Events:
   2 - 007F
   4 - 0029
   5 - 0049
   C - 0083
[0029] (68) VAR_RESULT = isScriptRunning(143);
[002C] (48) if (VAR_RESULT == 1) {
[0032] (1C)   startSound(12);
[0034] (CF) } else if (getState08(VAR_ACTIVE_OBJECT1)) {
[003B] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[003D] (1C)   startSound(12);
[003F] (42)   startScript(55);
[0041] (0F)   if (!getState08(139)) {
[0046] (42)     startScript(13);
[0048] (**)   }
[0048] (**) }
[0048] (00) stopObjectCode();
[0049] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[004D] (62)   stopScript(143);
[004F] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0051] (1C)   startSound(12);
[0053] (42)   startScript(55);
[0055] (42)   startScript(12);
[0057] (62)   stopScript(143);
[0059] (1A)   Var[173] = 0;
[005D] (47)   clearState08(228);
[0060] (47)   clearState08(190);
[0063] (47)   clearState08(191);
[0066] (47)   clearState08(164);
[0069] (62)   stopScript(21);
[006B] (47)   clearState08(202);
[006E] (47)   clearState08(203);
[0071] (47)   clearState08(204);
[0074] (47)   clearState08(205);
[0077] (47)   clearState08(207);
[007A] (1A)   Var[172] = 0;
[007E] (**) }
[007E] (00) stopObjectCode();
[007F] (47) clearState08(156);
[0082] (00) stopObjectCode();
[0083] (D8) printEgo("MAIN POWER");
[008E] (00) stopObjectCode();
END

// Object 158: Silver Key
Events:
   B - 0022
   E - 001F
[001F] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0021] (00) stopObjectCode();
[0022] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0027] (00) stopObjectCode();
END

// Object 335: Light Switch
Events:
   4 - 0021
   5 - 002B
[0021] (1C) startSound(12);
[0023] (9B) setBitVar(2816,VAR_ROOM,0);
[0028] (42) startScript(55);
[002A] (00) stopObjectCode();
[002B] (1C) startSound(12);
[002D] (9B) setBitVar(2816,VAR_ROOM,1);
[0032] (42) startScript(55);
[0034] (00) stopObjectCode();
END

// Object 346: Radioactive Slime
Events:
  FF - 0024
[0024] (D8) printEgo("Yuck! I'm not touching that!");
[003E] (00) stopObjectCode();
END

// Object 347: Furnace
Events:
   D - 001C
  FF - 001D
[001C] (00) stopObjectCode();
[001D] (D8) printEgo("It's too hot!");
[002A] (00) stopObjectCode();
END

// Object 348: Nuclear Reactor
Events:
   5 - 0029
   C - 0047
   D - 0028
  FF - 0059
[0028] (00) stopObjectCode();
[0029] (D8) printEgo("I don't want to start a melt down!");
[0046] (00) stopObjectCode();
[0047] (D8) printEgo("Made in Chernobyl");
[0058] (00) stopObjectCode();
[0059] (D8) printEgo("It's too hot!");
[0066] (00) stopObjectCode();
END
