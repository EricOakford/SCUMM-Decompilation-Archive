/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 41: village
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(5,12)
[000D] (33)   RoomColor(0,3)
[0013] (33)   RoomColor(0,15)
[0019] (**) }
[0019] (0A) startScript(136,[16]);
[001F] (0A) startScript(126,[0]);
[0025] (0C) Resource.loadCostume(39);
[0028] (1A) Local[0] = 2;
[002D] (DD) setClass(Local[0],[0,150,148]);
[003A] (93) ActorOps(Local[0],[Costume(39),Elevation(0),InitAnimNr(1)]);
[0045] (91) animateCostume(Local[0],250);
[0049] (46) Local[0]++;
[004C] (44) unless (Local[0] > 4) goto 002D;
[0053] (2D) putActorInRoom(2,41);
[0056] (01) putActor(2,190,113);
[005C] (2D) putActorInRoom(3,41);
[005F] (01) putActor(3,441,91);
[0065] (2D) putActorInRoom(4,41);
[0068] (01) putActor(4,533,75);
[006E] (11) animateCostume(2,6);
[0071] (11) animateCostume(3,7);
[0074] (11) animateCostume(4,8);
[0077] (33) RoomColor(6,13)
[007D] (32) setCameraAt(400);
[0080] (70) lights(11,0,0);
[0084] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

// Object 539
Events:
   A - 0018
[0018] (28) if (!Bit[101]) {
[001D] (24)   loadRoomWithEgo(951,38,170,100);
[0025] (18) } else {
[0028] (24)   loadRoomWithEgo(543,42,170,100);
[0030] (**) }
[0030] (00) stopObjectCode();
END

// Object 540
Events:
   A - 0018
[0018] (24) loadRoomWithEgo(510,39,220,70);
[0020] (00) stopObjectCode();
END

// Object 541
Events:
   A - 0018
[0018] (24) loadRoomWithEgo(592,44,43,130);
[0020] (00) stopObjectCode();
END

// Object 542
Events:
   A - 0018
[0018] (24) loadRoomWithEgo(624,46,296,92);
[0020] (00) stopObjectCode();
END
