/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 10: Foyer
 */

// EN
[0000] (0C) loadSound(28)
[0003] (00) stopObjectCode();
END

// Object 67: Front Door
Events:
   1 - 0021
   2 - 0027
   D - 002D
[0021] (42) startScript(10);
[0023] (07) setState08(61);
[0026] (00) stopObjectCode();
[0027] (42) startScript(11);
[0029] (47) clearState08(61);
[002C] (00) stopObjectCode();
[002D] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0031] (24)   loadRoomWithEgo(61,1,255,255);
[0037] (**) }
[0037] (00) stopObjectCode();
END

// Object 68: Door to Kitchen
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(81);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(81);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (68)   VAR_RESULT = isScriptRunning(152);
[002E] (48)   if (VAR_RESULT == 1) {
[0034] (42)     startScript(153);
[0036] (0C)     loadScript(36)
[0039] (0C)     lockScript(36)
[003C] (**)   }
[003C] (24)   loadRoomWithEgo(81,7,255,255);
[0042] (**) }
[0042] (00) stopObjectCode();
END

// Object 69: Basement Door
Events:
   1 - 001B
   2 - 001B
   D - 0032
[001B] (D8) printEgo("There's no handle here!");
[0031] (00) stopObjectCode();
[0032] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0036] (24)   loadRoomWithEgo(154,8,255,255);
[003C] (42)   startScript(154);
[003E] (**) }
[003E] (00) stopObjectCode();
END

// Object 70: Living Room Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(71);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(71);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(71,3,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 230: Stairs
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(179,11,255,255);
[001F] (00) stopObjectCode();
END

// Object 282: Grandfather Clock
Events:
   C - 0024
[0024] (D8) printEgo("It's the correct time.");
[0039] (00) stopObjectCode();
END

// Object 283: Vase (left)
Events:
END

// Object 284: Vase (right)
Events:
END

// Object 332: Front Door
Events:
   1 - 0021
   2 - 0029
   D - 0031
[0021] (19) doSentence(1,67,0,0);
[0028] (00) stopObjectCode();
[0029] (19) doSentence(2,67,0,0);
[0030] (00) stopObjectCode();
[0031] (19) doSentence(13,67,0,0);
[0038] (00) stopObjectCode();
END

// Object 351: Gargoyle (right)
Events:
   9 - 001D
   A - 001D
[001D] (42) startScript(149);
[001F] (00) stopObjectCode();
END

// Object 353: Gargoyle (left)
Events:
END

// Object 454
Events:
END

// Object 455
Events:
END
