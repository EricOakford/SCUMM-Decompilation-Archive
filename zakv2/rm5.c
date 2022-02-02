/**
 * Zak McKracken: V2 Retail
 * 
 * Room 5: 14th Avenue
 */

// EN
[0000] (2F) if (!getState04(169)) {
[0005] (0C)   loadScript(62)
[0008] (**) }
[0008] (30) setBoxFlags(14,128);
[000B] (4F) if (getState08(162)) {
[0010] (30)   setBoxFlags(14,0);
[0013] (**) }
[0013] (19) doSentence(250,170,0,1);
[001A] (00) stopObjectCode();
END

// EX
[0000] (01) putActor(7,0,15);
[0004] (00) stopObjectCode();
[0005] (03) VAR_RESULT = getActorRoom(2);
[0008] (08) if (VAR_RESULT != 7) {
[000E] (47)   clearState08(161);
[0011] (47)   clearState08(180);
[0014] (**) }
[0014] (3C) stopSound(19);
[0016] (00) stopObjectCode();
END

// Object 31
Events:
   B - 002B
   E - 0023
[0023] (19) doSentence(253,165,0,1);
[002A] (00) stopObjectCode();
[002B] (48) if (VAR_ACTIVE_OBJECT2 == 38) {
[0031] (8F)   if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0035] (19)     doSentence(253,167,0,1);
[003C] (18)     goto 0044;
[003F] (**)   }
[003F] (**) }
[003F] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0044] (00) stopObjectCode();
END

// Object 160
Events:
   D - 001E
[001E] (68) VAR_RESULT = isScriptRunning(62);
[0021] (28) if (!VAR_RESULT) {
[0025] (24)   loadRoomWithEgo(141,3,93,46);
[002B] (18) } else {
[002E] (2D)   putActorInRoom(1,3);
[0031] (01)   putActor(1,85,56);
[0035] (11)   animateActor(1,248);
[0038] (**) }
[0038] (00) stopObjectCode();
END

// Object 161
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(180);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(180);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (68)   VAR_RESULT = isScriptRunning(62);
[002E] (28)   if (!VAR_RESULT) {
[0032] (27)     setState04(180);
[0035] (24)     loadRoomWithEgo(180,7,255,255);
[003B] (18)   } else {
[003E] (2D)     putActorInRoom(1,7);
[0041] (01)     putActor(1,31,56);
[0045] (11)     animateActor(1,251);
[0048] (**)   }
[0048] (**) }
[0048] (00) stopObjectCode();
END

// Object 162
Events:
   1 - 0019
   2 - 0036
[0019] (EF) if (getState04(VAR_ACTIVE_OBJECT1)) {
[001D] (D8)   printEgo("It's locked.");
[002A] (18) } else {
[002D] (42)   startScript(10);
[002F] (07)   setState08(172);
[0032] (30)   setBoxFlags(14,0);
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (42) startScript(11);
[0038] (47) clearState08(172);
[003B] (30) setBoxFlags(14,128);
[003E] (00) stopObjectCode();
END

// Object 163
Events:
   1 - 0017
[0017] (D8) printEgo("It's locked.");
[0024] (00) stopObjectCode();
END

// Object 164
Events:
   C - 0017
[0017] (D8) printEgo("We Buy Almost Anything^\x01^From Almost Anyone");
[003F] (00) stopObjectCode();
END

// Object 165
Events:
   C - 0019
  FD - 004B
[0019] (D8) printEgo("Society for Ancient Wisdom\x01Deposit artifacts in slot.");
[004A] (00) stopObjectCode();
[004B] (48) if (VAR_EGO == 1) {
[0051] (D8)   printEgo("It's connected with wires.");
[006A] (18) } else {
[006D] (D8)   printEgo("That would be stealing.");
[0083] (**) }
[0083] (00) stopObjectCode();
END

// Object 166
Events:
   D - 0016
[0016] (68) VAR_RESULT = isScriptRunning(62);
[0019] (28) if (!VAR_RESULT) {
[001D] (24)   loadRoomWithEgo(141,3,93,52);
[0023] (18) } else {
[0026] (2D)   putActorInRoom(1,3);
[0029] (01)   putActor(1,93,60);
[002D] (11)   animateActor(1,249);
[0030] (**) }
[0030] (00) stopObjectCode();
END

// Object 167
Events:
   C - 0019
  FD - 003F
[0019] (D8) printEgo("CLOSED PERMANENTLY\x03Owner `locked` out.");
[003E] (00) stopObjectCode();
[003F] (48) if (VAR_EGO == 1) {
[0045] (1C)   startSound(2);
[0047] (2E)   delay(30);
[004B] (1C)   startSound(2);
[004D] (2E)   delay(18);
[0051] (50)   pickupObject(31);
[0054] (18) } else {
[0057] (D8)   printEgo("I'm not into vandalism!");
[006D] (**) }
[006D] (00) stopObjectCode();
END

// Object 168
Events:
   D - 0019
[0019] (24) loadRoomWithEgo(172,6,255,255);
[001F] (00) stopObjectCode();
END

// Object 169
Events:
   1 - 0022
   2 - 0039
   B - 008B
   C - 003C
[0022] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0026] (42)   startScript(10);
[0028] (18) } else {
[002B] (D8)   printEgo("It's locked.");
[0038] (**) }
[0038] (00) stopObjectCode();
[0039] (42) startScript(11);
[003B] (00) stopObjectCode();
[003C] (D8) printEgo("Artifact Drop Slot:\x01\x02");
[0051] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0055] (D8)   printEgo("Deposit artifacts here.");
[006C] (18) } else {
[006F] (D8)   printEgo("Locked until further notice.");
[008A] (**) }
[008A] (00) stopObjectCode();
[008B] (48) if (VAR_EGO == 1) {
[0091] (8F)   if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0095] (D8)     printEgo("It's closed.");
[00A2] (9D)   } else if (classOfIs(VAR_ACTIVE_OBJECT2,8)) {
[00AA] (D8)     printEgo("It's too big.");
[00B7] (18)   } else {
[00BA] (48)     if (VAR_ACTIVE_OBJECT2 == 18) {
[00C0] (18)       goto 00F1;
[00C3] (**)     }
[00C3] (48)     if (VAR_ACTIVE_OBJECT2 == 82) {
[00C9] (18)       goto 00F1;
[00CC] (**)     }
[00CC] (48)     if (VAR_ACTIVE_OBJECT2 == 42) {
[00D2] (18)       goto 00F1;
[00D5] (18)     } else {
[00D8] (A9)       setOwnerOf(VAR_ACTIVE_OBJECT2,2);
[00DB] (9D)       if (classOfIs(VAR_ACTIVE_OBJECT2,32)) {
[00E0] (A7)         setState04(VAR_ACTIVE_OBJECT1);
[00E2] (9A)         Var[199] = Var[235];
[00E5] (19)         doSentence(2,169,0,0);
[00EC] (42)         startScript(62);
[00EE] (**)       }
[00EE] (**)     }
[00EE] (**)   }
[00EE] (18) } else {
[00F1] (D8)   printEgo("No, I'll hold on to this.");
[0107] (**) }
[0107] (00) stopObjectCode();
END

// Object 170
Events:
  FD - 0013
[0013] (2E) delay(30);
[0017] (05) drawObject(170,255,255);
[001C] (1C) startSound(19);
[001E] (2E) delay(60);
[0022] (05) drawObject(171,255,255);
[0027] (3C) stopSound(19);
[0029] (18) goto 0013;
[002C] (00) stopObjectCode();
END

// Object 171
Events:
END
