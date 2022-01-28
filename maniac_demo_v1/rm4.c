/**
 * Maniac Mansion: V1 Demo
 * 
 * Room 4: Dungeon
 */

// EN
[0000] (00) stopObjectCode();
END

// Object 159: Door to Basement
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
[0033] (07)   setState08(155);
[0036] (18) } else {
[0039] (42)   startScript(71);
[003B] (**) }
[003B] (00) stopObjectCode();
[003C] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0040] (47)   clearState08(159);
[0043] (47)   clearState08(155);
[0046] (24)   loadRoomWithEgo(155,8,255,255);
[004C] (**) }
[004C] (00) stopObjectCode();
END

// Object 160: Outer Door
Events:
   1 - 001F
   2 - 002B
[001F] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0023] (42)   startScript(10);
[0025] (18) } else {
[0028] (42)   startScript(69);
[002A] (**) }
[002A] (00) stopObjectCode();
[002B] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002F] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0031] (1C)   startSound(42);
[0033] (**) }
[0033] (00) stopObjectCode();
END

// Object 161: Top Padlock
Events:
   2 - 0040
   8 - 0024
   B - 0024
  10 - 0040
[0024] (48) if (VAR_ACTIVE_OBJECT2 == 141) {
[002A] (8F)   if (!getState08(VAR_ACTIVE_OBJECT1)) {
[002E] (87)     setState08(VAR_ACTIVE_OBJECT1);
[0030] (1C)     startSound(12);
[0032] (**)   }
[0032] (4F)   if (getState08(162)) {
[0037] (67)     clearState04(160);
[003A] (**)   }
[003A] (18) } else {
[003D] (42)   startScript(71);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0044] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0046] (1C)   startSound(12);
[0048] (**) }
[0048] (27) setState04(160);
[004B] (00) stopObjectCode();
END

// Object 162: Bottom Padlock
Events:
   2 - 0043
   8 - 0027
   B - 0027
  10 - 0043
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 141) {
[002D] (8F)   if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0031] (87)     setState08(VAR_ACTIVE_OBJECT1);
[0033] (1C)     startSound(12);
[0035] (**)   }
[0035] (4F)   if (getState08(161)) {
[003A] (67)     clearState04(160);
[003D] (**)   }
[003D] (18) } else {
[0040] (42)   startScript(71);
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0047] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0049] (1C)   startSound(12);
[004B] (**) }
[004B] (27) setState04(160);
[004E] (00) stopObjectCode();
END

// Object 163: Inner Door
Events:
   1 - 002B
   2 - 002E
   8 - 002B
   9 - 002B
   A - 002B
   B - 002B
   D - 003C
  10 - 002E
[002B] (42) startScript(46);
[002D] (00) stopObjectCode();
[002E] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0032] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0034] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[0036] (47)   clearState08(166);
[0039] (1C)   startSound(42);
[003B] (**) }
[003B] (00) stopObjectCode();
[003C] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0040] (2D)   putActorInRoom(14,0);
[0043] (01)   putActor(14,0,0);
[0047] (2D)   putActorInRoom(9,30);
[004A] (01)   putActor(9,20,20);
[004E] (11)   animateActor(9,250);
[0051] (48)   if (Var[151] == 0) {
[0057] (2D)     putActorInRoom(13,31);
[005A] (01)     putActor(13,44,63);
[005E] (42)     startScript(117);
[0060] (0C)     loadScript(49)
[0063] (0C)     lockScript(49)
[0066] (0C)     loadSound(63)
[0069] (0C)     lockSound(63)
[006C] (**)   }
[006C] (1A)   Var[175] = 1;
[0070] (42)   startScript(164);
[0072] (42)   startScript(13);
[0074] (62)   stopScript(136);
[0076] (62)   stopScript(143);
[0078] (62)   stopScript(101);
[007A] (24)   loadRoomWithEgo(166,31,255,255);
[0080] (**) }
[0080] (00) stopObjectCode();
END

// Object 214: Badge
Events:
   3 - 003E
   C - 001F
   E - 001C
[001C] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001E] (00) stopObjectCode();
[001F] (D8) printEgo("Meteor Police, badge number 714.");
[003D] (00) stopObjectCode();
[003E] (48) if (VAR_ACTIVE_OBJECT2 == 13) {
[0044] (42)   startScript(157);
[0046] (**) }
[0046] (00) stopObjectCode();
END

// Object 349: Skeleton
Events:
   D - 001D
  FF - 001E
[001D] (00) stopObjectCode();
[001E] (48) if (Var[117] == 0) {
[0024] (D8)   printEgo("I wonder if I know him.");
[0038] (1A)   Var[117] = 1;
[003C] (**) }
[003C] (00) stopObjectCode();
END

// Object 350: Barred Window (left)
Events:
END

// Object 352: Barred Window (right)
Events:
END

// Object 354: Candle Holder
Events:
END

// Object 453: Loose Brick
Events:
   9 - 001E
[001E] (42) startScript(137);
[0020] (00) stopObjectCode();
END
