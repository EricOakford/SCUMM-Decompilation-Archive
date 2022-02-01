/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 38: Floor 3 Hallway
 */

// Object 229: Stairs
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(457,12,255,255);
[001F] (00) stopObjectCode();
END

// Object 312: Plant 1
Events:
END

// Object 315: Plant 2
Events:
END

// Object 322: Plant 3
Events:
END

// Object 460: Door to Dr. Fred's Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(465);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(465);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(465,21,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 461: Door to Edna's Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(103);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(103);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (03)   VAR_RESULT = getActorRoom(10);
[002E] (48)   if (VAR_RESULT == 19) {
[0034] (48)     if (Var[125] == 0) {
[003A] (68)       VAR_RESULT = isScriptRunning(35);
[003D] (48)       if (VAR_RESULT == 0) {
[0043] (2D)         putActorInRoom(10,19);
[0046] (01)         putActor(10,34,64);
[004A] (11)         animateActor(10,250);
[004D] (**)       }
[004D] (42)       startScript(39);
[004F] (**)     }
[004F] (**)   }
[004F] (24)   loadRoomWithEgo(103,19,255,255);
[0055] (**) }
[0055] (00) stopObjectCode();
END

// Object 462: Door to Ed's Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(39);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(39);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (03)   VAR_RESULT = getActorRoom(11);
[002E] (48)   if (VAR_RESULT == 26) {
[0034] (42)     startScript(91);
[0036] (**)   }
[0036] (24)   loadRoomWithEgo(39,26,255,255);
[003C] (**) }
[003C] (00) stopObjectCode();
END

// Object 463: Door to Ted's Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(109);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(109);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(109,25,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 464: Door to Den
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(99);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(99);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(99,27,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END
