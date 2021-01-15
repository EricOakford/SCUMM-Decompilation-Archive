/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 23: Indy's Office Outer Empty (outer-emp)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(0,6)
[000D] (**) }
[000D] (0C) Resource.lockSound(107);
[0010] (0C) Resource.loadSound(107);
[0013] (13) ActorOps(10,[Costume(3),TalkColor(2),Name("Irene")]);
[0021] (5D) setClass(10,[0,150,149]);
[002E] (2D) putActorInRoom(10,23);
[0031] (01) putActor(10,173,90);
[0037] (11) animateCostume(10,250);
[003A] (2A) startScript(200,[],F);
[003D] (00) stopObjectCode();
END

// EX
[0000] (5D) setClass(10,[0]);
[0007] (13) ActorOps(10,[Name()]);
[000C] (3C) stopSound(107);
[000E] (0C) Resource.unlockSound(107);
[0011] (0C) Resource.unlockCostume(3);
[0014] (00) stopObjectCode();
END

Script# 200
[0000] (1C) startSound(107);
[0002] (11) animateCostume(10,13);
[0005] (AC) Exprmode Local[0] = ((<VAR_RESULT = getRandomNr(9)> + 4) * 60);
[0016] (2B) delayVariable(Local[0]);
[0019] (3C) stopSound(107);
[001B] (11) animateCostume(10,14);
[001E] (2E) delay(120);
[0022] (18) goto 0000;
[0025] (A0) stopObjectCode();
END

// Object 195: Door to Hall
Events:
   1 - 0022
   2 - 002C
   A - 0036
[0022] (0A) startScript(26,[VAR_ME,103]);
[002B] (00) stopObjectCode();
[002C] (0A) startScript(27,[VAR_ME,103]);
[0035] (00) stopObjectCode();
[0036] (8F) if (getState(VAR_ME) == 1) {
[003C] (14)   print(255,[]);
[003F] (AE)   WaitForMessage();
[0041] (24)   loadRoomWithEgo(103,20,-1,-1);
[0049] (**) }
[0049] (00) stopObjectCode();
END

// Object 196: Door to Office
Events:
   1 - 0022
   2 - 002C
   A - 0036
[0022] (0A) startScript(26,[VAR_ME,143]);
[002B] (00) stopObjectCode();
[002C] (0A) startScript(27,[VAR_ME,143]);
[0035] (00) stopObjectCode();
[0036] (8F) if (getState(VAR_ME) == 1) {
[003C] (14)   print(255,[]);
[003F] (AE)   WaitForMessage();
[0041] (24)   loadRoomWithEgo(143,21,-1,-1);
[0049] (**) }
[0049] (00) stopObjectCode();
END
