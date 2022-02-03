/**
 * Zak McKracken: V2 Retail
 * 
 * Room 20: Cairo
 */

// EN
[0000] (04) if (VAR_EGO <= 2) {
[0006] (93)   ActorOps(VAR_EGO,[Sound(7)]);
[000A] (0C)   loadSound(7)
[000D] (0C)   lockSound(7)
[0010] (9A)   Var[66] = VAR_EGO;
[0013] (5A)   Var[66] += 8;
[0017] (9A)   Var[14] = Var[66];
[001A] (5A)   Var[14] += 171;
[001E] (D3)   ActorOps(VAR_EGO,[Costume(Var[14])]);
[0022] (48)   if (VAR_EGO == 2) {
[0028] (13)     ActorOps(2,[Color(3, 5)]);
[002D] (13)     ActorOps(2,[Color(11, 13)]);
[0032] (13)     ActorOps(2,[Color(15, 13)]);
[0037] (**)   }
[0037] (**) }
[0037] (4F) if (getState08(400)) {
[003C] (6F)   if (getState04(388)) {
[0041] (07)     setState08(389);
[0044] (18)   } else {
[0047] (05)     drawObject(389,77,10);
[004C] (**)   }
[004C] (**) }
[004C] (00) stopObjectCode();
END

// EX
[0000] (12) panCameraTo(0);
[0002] (0C) unlockSound(7)
[0005] (9A) Var[14] = VAR_EGO;
[0008] (5A) Var[14] += 171;
[000C] (D3) ActorOps(VAR_EGO,[Costume(Var[14])]);
[0010] (93) ActorOps(VAR_EGO,[Sound(6)]);
[0014] (00) stopObjectCode();
END

// Object 386
Events:
   D - 001F
[001F] (24) loadRoomWithEgo(397,135,255,255);
[0025] (00) stopObjectCode();
END

// Object 387
Events:
   D - 0016
[0016] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[001A] (27)   setState04(388);
[001D] (**) }
[001D] (24) loadRoomWithEgo(398,139,255,255);
[0023] (00) stopObjectCode();
END

// Object 388
Events:
   D - 0016
[0016] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[001A] (27)   setState04(387);
[001D] (**) }
[001D] (24) loadRoomWithEgo(398,140,255,255);
[0023] (00) stopObjectCode();
END

// Object 389
Events:
   D - 0022
[0022] (24) loadRoomWithEgo(403,207,255,255);
[0028] (00) stopObjectCode();
END

// Object 390
Events:
   D - 0018
[0018] (24) loadRoomWithEgo(218,146,34,60);
[001E] (00) stopObjectCode();
END
