/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 51: Meteor's Room
 */

// EN
[0000] (0C) loadScript(126)
[0003] (48) if (Var[162] == 0) {
[0009] (2D)   putActorInRoom(16,51);
[000C] (01)   putActor(16,40,50);
[0010] (11)   animateActor(16,16);
[0013] (68)   VAR_RESULT = isScriptRunning(43);
[0016] (48)   if (VAR_RESULT == 0) {
[001C] (0C)     loadCostume(20)
[001F] (0C)     lockCostume(20)
[0022] (42)     startScript(128);
[0024] (**)   }
[0024] (**) }
[0024] (0F) if (!getState08(176)) {
[0029] (1C)   startSound(59);
[002B] (0C)   loadScript(126)
[002E] (**) }
[002E] (0C) loadScript(128)
[0031] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
[0001] (01) putActor(20,0,0);
[0005] (62) stopScript(128);
[0007] (00) stopObjectCode();
END

// Object 45: Meteor
Events:
   B - 004C
   E - 001B
[001B] (48) if (Var[108] == 2) {
[0021] (D0)   pickupObject(VAR_ACTIVE_OBJECT1);
[0023] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0025] (D7)   setState02(VAR_ACTIVE_OBJECT1);
[0027] (1A)   Var[162] = 1;
[002B] (42)   startScript(134);
[002D] (2D)   putActorInRoom(16,0);
[0030] (62)   stopScript(128);
[0032] (2D)   putActorInRoom(20,0);
[0035] (18) } else {
[0038] (D8)   printEgo("I can't get it loose!");
[004B] (**) }
[004B] (00) stopObjectCode();
[004C] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0051] (00) stopObjectCode();
END

// Object 176: Switch
Events:
   5 - 001F
   9 - 001F
   A - 001F
   B - 001F
[001F] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0023] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0025] (62)   stopScript(125);
[0027] (3C)   stopSound(59);
[0029] (1C)   startSound(61);
[002B] (42)   startScript(126);
[002D] (**) }
[002D] (00) stopObjectCode();
END

// Object 177: Door to Garage
Events:
   1 - 001B
   2 - 0021
   D - 0024
[001B] (42) startScript(121);
[001D] (07) setState08(59);
[0020] (00) stopObjectCode();
[0021] (42) startScript(122);
[0023] (00) stopObjectCode();
[0024] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0028] (48)   if (Var[152] == 1) {
[002E] (24)     loadRoomWithEgo(108,52,255,255);
[0034] (18)   } else {
[0037] (29)     setOwnerOf(153,15);
[003B] (24)     loadRoomWithEgo(153,16,255,255);
[0041] (**)   }
[0041] (**) }
[0041] (00) stopObjectCode();
END

// Object 267: Door to Inner Lab
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(121);
[001D] (07) setState08(255);
[0020] (00) stopObjectCode();
[0021] (42) startScript(122);
[0023] (47) clearState08(255);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(255,30,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 361: Purple Slime
Events:
  FF - 001F
[001F] (D8) printEgo("I'm not going to touch that slime!");
[003D] (00) stopObjectCode();
END
