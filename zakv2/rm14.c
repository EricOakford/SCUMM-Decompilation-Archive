/**
 * Zak McKracken: V2 Retail
 * 
 * Room 14: Blue Crystal Room
 */

// EN
[0000] (30) setBoxFlags(12,128);
[0003] (30) setBoxFlags(13,128);
[0006] (57) setState02(56);
[0009] (47) clearState08(56);
[000C] (57) setState02(57);
[000F] (47) clearState08(57);
[0012] (1A) Var[45] = 292;
[0016] (D7) setState02(Var[45]);
[0018] (38) if (Var[45] >= 294) {
[001E] (C7)   clearState08(Var[45]);
[0020] (**) }
[0020] (46) Var[45]++;
[0022] (44) unless (Var[45] > 309) goto 0016;
[0028] (48) if (VAR_ROOM == 129) {
[002E] (17)   clearState02(297);
[0031] (1A)   Var[46] = 281;
[0035] (1A)   Var[47] = 13;
[0039] (17)   clearState02(292);
[003C] (17)   clearState02(295);
[003F] (2F)   if (!getState04(298)) {
[0044] (07)     setState08(298);
[0047] (**)   }
[0047] (10)   VAR_RESULT = getObjectOwner(55);
[004B] (08)   if (VAR_RESULT != 15) {
[0051] (F0)     lights(Var[234],0,0);
[0055] (33)     RoomColor(9,3)
[0059] (33)     RoomColor(9,11)
[005D] (18)   } else {
[0060] (17)     clearState02(55);
[0063] (**)   }
[0063] (07)   setState08(309);
[0066] (17)   clearState02(309);
[0069] (**) }
[0069] (48) if (VAR_ROOM == 192) {
[006F] (2F)   if (!getState04(558)) {
[0074] (46)     Var[154]++;
[0076] (**)   }
[0076] (33)   RoomColor(4,1)
[007A] (33)   RoomColor(6,8)
[007E] (33)   RoomColor(14,7)
[0082] (33)   RoomColor(12,9)
[0086] (1A)   Var[46] = 568;
[008A] (1A)   Var[47] = 197;
[008E] (07)   setState08(306);
[0091] (10)   VAR_RESULT = getObjectOwner(57);
[0095] (48)   if (VAR_RESULT == 15) {
[009B] (07)     setState08(57);
[009E] (17)     clearState02(57);
[00A1] (18)   } else {
[00A4] (07)     setState08(308);
[00A7] (**)   }
[00A7] (18) } else {
[00AA] (48)   unless (VAR_ROOM == 130) goto 00F4;
[00B0] (33)   RoomColor(4,1)
[00B4] (33)   RoomColor(6,9)
[00B8] (2F)   if (!getState04(307)) {
[00BD] (07)     setState08(307);
[00C0] (**)   }
[00C0] (10)   VAR_RESULT = getObjectOwner(56);
[00C4] (48)   if (VAR_RESULT == 15) {
[00CA] (17)     clearState02(56);
[00CD] (18)   } else {
[00D0] (07)     setState08(56);
[00D3] (F0)     lights(Var[234],0,0);
[00D7] (**)   }
[00D7] (07)   setState08(309);
[00DA] (17)   clearState02(309);
[00DD] (1A)   Var[46] = 741;
[00E1] (1A)   Var[47] = 166;
[00E5] (17)   clearState02(294);
[00E8] (07)   setState08(294);
[00EB] (**) }
[00EB] (17) clearState02(297);
[00EE] (07) setState08(305);
[00F1] (17) clearState02(305);
[00F4] (48) if (VAR_ROOM == 193) {
[00FA] (33)   RoomColor(4,1)
[00FE] (33)   RoomColor(6,9)
[0102] (33)   RoomColor(7,3)
[0106] (33)   RoomColor(12,7)
[010A] (2F)   if (!getState04(558)) {
[010F] (46)     Var[154]++;
[0111] (**)   }
[0111] (07)   setState08(297);
[0114] (07)   setState08(299);
[0117] (6F)   if (getState04(299)) {
[011C] (17)     clearState02(299);
[011F] (18)   } else {
[0122] (07)     setState08(300);
[0125] (17)     clearState02(300);
[0128] (**)   }
[0128] (07)   setState08(301);
[012B] (6F)   if (getState04(301)) {
[0130] (17)     clearState02(301);
[0133] (17)     clearState02(293);
[0136] (18)   } else {
[0139] (07)     setState08(302);
[013C] (17)     clearState02(302);
[013F] (**)   }
[013F] (07)   setState08(303);
[0142] (6F)   if (getState04(303)) {
[0147] (17)     clearState02(303);
[014A] (18)   } else {
[014D] (07)     setState08(304);
[0150] (17)     clearState02(304);
[0153] (**)   }
[0153] (17)   clearState02(296);
[0156] (30)   setBoxFlags(12,0);
[0159] (30)   setBoxFlags(13,0);
[015C] (**) }
[015C] (00) stopObjectCode();
END

// EX
[0000] (04) if (Var[193] <= 3072) {
[0006] (27)   setState04(3105);
[0009] (27)   setState04(3107);
[000C] (25)   drawObject(3105,37,VAR_CLICK_OBJECT);
[0011] (00)   stopObjectCode();
END

// Object 55
Events:
   B - 0029
   E - 0021
[0021] (19) doSentence(253,298,0,1);
[0028] (00) stopObjectCode();
[0029] (48) if (VAR_ACTIVE_OBJECT2 == 169) {
[002F] (48) } else if (VAR_ACTIVE_OBJECT2 == 428) {
[0038] (48) } else if (VAR_EGO == 1) {
[0041] (42)   startScript(67);
[0043] (18) } else {
[0046] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[004B] (**) }
[004B] (00) stopObjectCode();
END

// Object 56
Events:
   B - 002A
   E - 0022
[0022] (19) doSentence(253,307,0,1);
[0029] (00) stopObjectCode();
[002A] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002F] (00) stopObjectCode();
END

// Object 57
Events:
   B - 0021
   E - 0019
[0019] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001B] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[001D] (07) setState08(308);
[0020] (00) stopObjectCode();
[0021] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0026] (00) stopObjectCode();
END

// Object 292
Events:
END

// Object 293
Events:
   B - 0027
   C - 003F
  FD - 0042
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 25) {
[002D] (EF)   if (getState04(VAR_ACTIVE_OBJECT1)) {
[0031] (42)     startScript(28);
[0033] (18)   } else {
[0036] (18)     goto 0042;
[0039] (**)   }
[0039] (18) } else {
[003C] (42)   startScript(3);
[003E] (**) }
[003E] (00) stopObjectCode();
[003F] (42) startScript(68);
[0041] (00) stopObjectCode();
[0042] (D8) printEgo("It looks fine the way it is.");
[005A] (00) stopObjectCode();
END

// Object 294
Events:
   B - 0025
   C - 0042
[0025] (48) if (VAR_ACTIVE_OBJECT2 == 25) {
[002B] (0F)   if (!getState08(307)) {
[0030] (42)     startScript(28);
[0032] (18)   } else {
[0035] (19)     doSentence(253,293,0,1);
[003C] (**)   }
[003C] (18) } else {
[003F] (42)   startScript(3);
[0041] (**) }
[0041] (00) stopObjectCode();
[0042] (42) startScript(68);
[0044] (00) stopObjectCode();
END

// Object 295
Events:
END

// Object 296
Events:
END

// Object 297
Events:
   D - 0017
[0017] (E4) loadRoomWithEgo(Var[46],Var[47],255,255);
[001C] (00) stopObjectCode();
END

// Object 298
Events:
  FD - 0013
[0013] (4F) if (getState08(298)) {
[0018] (F0)   lights(Var[234],0,0);
[001C] (33)   RoomColor(9,3)
[0020] (33)   RoomColor(9,11)
[0024] (47)   clearState08(283);
[0027] (47)   clearState08(284);
[002A] (42)   startScript(147);
[002C] (42)   startScript(119);
[002E] (18) } else {
[0031] (D8)   printEgo("It's locked into the pedestal.");
[004D] (19)   doSentence(STOP);
[004F] (**) }
[004F] (00) stopObjectCode();
END

// Object 299
Events:
   1 - 001B
   2 - 0031
  FD - 0046
[001B] (2F) if (!getState04(293)) {
[0020] (1C)   startSound(10);
[0022] (17)   clearState02(300);
[0025] (07)   setState08(300);
[0028] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[002A] (18) } else {
[0030] (00)   stopObjectCode();
[0031] (D8)   printEgo("It's already closed.");
[0045] (00)   stopObjectCode();
[0046] (**) }
[0046] (D8) printEgo("It seems to be locked.");
[005A] (00) stopObjectCode();
END

// Object 300
Events:
   1 - 0022
   D - 001B
[001B] (24) loadRoomWithEgo(564,202,255,255);
[0021] (00) stopObjectCode();
[0022] (D8) printEgo("It's already open.");
[0034] (00) stopObjectCode();
END

// Object 301
Events:
   1 - 0019
   2 - 0036
[0019] (2F) if (!getState04(293)) {
[001E] (1C)   startSound(10);
[0020] (17)   clearState02(302);
[0023] (07)   setState08(302);
[0026] (57)   setState02(293);
[0029] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[002B] (18) } else {
[002E] (19)   doSentence(253,299,0,1);
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (19) doSentence(2,299,0,1);
[003D] (00) stopObjectCode();
END

// Object 302
Events:
   1 - 0022
   D - 001B
[001B] (24) loadRoomWithEgo(565,199,255,255);
[0021] (00) stopObjectCode();
[0022] (19) doSentence(1,300,0,1);
[0029] (00) stopObjectCode();
END

// Object 303
Events:
   1 - 0019
   2 - 0033
[0019] (2F) if (!getState04(293)) {
[001E] (1C)   startSound(10);
[0020] (17)   clearState02(304);
[0023] (07)   setState08(304);
[0026] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0028] (18) } else {
[002B] (19)   doSentence(253,299,0,1);
[0032] (**) }
[0032] (00) stopObjectCode();
[0033] (19) doSentence(2,299,0,1);
[003A] (00) stopObjectCode();
END

// Object 304
Events:
   1 - 0022
   D - 001B
[001B] (24) loadRoomWithEgo(564,204,255,255);
[0021] (00) stopObjectCode();
[0022] (19) doSentence(1,300,0,1);
[0029] (00) stopObjectCode();
END

// Object 305
Events:
END

// Object 306
Events:
END

// Object 307
Events:
  FD - 0013
[0013] (4F) if (getState08(307)) {
[0018] (F0)   lights(Var[234],0,0);
[001C] (5B)   setBitVar(1559,7,Var[235]);
[0021] (42)   startScript(119);
[0023] (18) } else {
[0026] (D8)   printEgo("I can't get it out.");
[0037] (19)   doSentence(STOP);
[0039] (**) }
[0039] (00) stopObjectCode();
END

// Object 308
Events:
END

// Object 309
Events:
END
