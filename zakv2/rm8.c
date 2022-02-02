/**
 * Zak McKracken: V2 Retail
 * 
 * Room 8: Airport 1
 */

// EN
[0000] (0C) loadScript(115)
[0003] (9A) Var[45] = VAR_ROOM;
[0006] (1A) Var[60] = 194;
[000A] (19) doSentence(253,190,0,1);
[0011] (16) VAR_RESULT = getRandomNr(1);
[0014] (A8) if (VAR_RESULT) {
[0018] (47)   clearState08(195);
[001B] (17)   clearState02(195);
[001E] (**) }
[001E] (19) doSentence(250,204,0,1);
[0025] (1A) Var[66] = 196;
[0029] (C7) clearState08(Var[66]);
[002B] (46) Var[66]++;
[002D] (44) unless (Var[66] > 200) goto 0029;
[0033] (44) if (VAR_MACHINE_SPEED > 40) {
[0039] (19)   doSentence(250,202,0,1);
[0040] (19)   doSentence(250,203,0,1);
[0047] (**) }
[0047] (05) drawObject(215,6,1);
[004C] (07) setState08(192);
[004F] (57) setState02(192);
[0052] (47) clearState08(214);
[0055] (57) setState02(214);
[0058] (1A) Var[66] = 2;
[005C] (C8) if (VAR_EGO == Var[66]) {
[0061] (1A)   Var[66] = 1;
[0065] (**) }
[0065] (31) VAR_RESULT = getBitVar(1572,0);
[006A] (A8) if (VAR_RESULT) {
[006E] (5B)   setBitVar(1572,0,Var[234]);
[0073] (18) } else {
[0076] (47)   clearState08(191);
[0079] (31)   VAR_RESULT = getBitVar(1569,0);
[007E] (A8)   if (VAR_RESULT) {
[0082] (5B)     setBitVar(1569,0,Var[234]);
[0087] (18)   } else {
[008A] (C3)     VAR_RESULT = getActorX(VAR_EGO);
[008D] (44)     if (VAR_RESULT > 25) {
[0093] (18)       goto 00A7;
[0096] (**)     }
[0096] (**)   }
[0096] (83)   VAR_RESULT = getActorRoom(Var[66]);
[0099] (C8)   unless (VAR_RESULT == VAR_ROOM) goto 00AA;
[009E] (C3)   VAR_RESULT = getActorX(Var[66]);
[00A1] (44)   unless (VAR_RESULT > 25) goto 00AA;
[00A7] (**) }
[00A7] (07) setState08(191);
[00AA] (48) if (VAR_ROOM == 141) {
[00B0] (1A)   Var[46] = 4;
[00B4] (A6)   setVarRange(Var[68],5,[664,666,660,661,663]);
[00C1] (A6)   setVarRange(Var[73],5,[795,1589,779,511,808]);
[00CE] (05)   drawObject(198,255,255);
[00D3] (1A)   Var[47] = 639;
[00D7] (1A)   Var[48] = 133;
[00DB] (**) }
[00DB] (48) if (VAR_ROOM == 142) {
[00E1] (1A)   Var[46] = 3;
[00E5] (A6)   setVarRange(Var[68],4,[667,659,661,663]);
[00F0] (A6)   setVarRange(Var[73],4,[691,779,271,295]);
[00FB] (05)   drawObject(200,255,255);
[0100] (47)   clearState08(192);
[0103] (17)   clearState02(192);
[0106] (1A)   Var[47] = 572;
[010A] (1A)   Var[48] = 168;
[010E] (16)   Var[117] = getRandomNr(1);
[0111] (A8)   if (Var[117]) {
[0115] (9A)     Var[14] = VAR_EGO;
[0118] (5A)     Var[14] += 219;
[011C] (0A)     Var[Var[14]] = 593;
[0120] (18)   } else {
[0123] (9A)     Var[14] = VAR_EGO;
[0126] (5A)     Var[14] += 219;
[012A] (0A)     Var[Var[14]] = 595;
[012E] (**)   }
[012E] (9A)   Var[14] = VAR_EGO;
[0131] (5A)   Var[14] += 222;
[0135] (0A)   Var[Var[14]] = 39;
[0139] (9A)   Var[14] = VAR_EGO;
[013C] (5A)   Var[14] += 216;
[0140] (0A)   Var[Var[14]] = 4;
[0144] (**) }
[0144] (48) if (VAR_ROOM == 143) {
[014A] (1A)   Var[46] = 4;
[014E] (A6)   setVarRange(Var[68],5,[664,659,660,663,668]);
[015B] (A6)   setVarRange(Var[73],5,[1316,511,271,305,99]);
[0168] (05)   drawObject(199,255,255);
[016D] (47)   clearState08(191);
[0170] (07)   setState08(214);
[0173] (17)   clearState02(214);
[0176] (10)   VAR_RESULT = getObjectOwner(46);
[017A] (48)   if (VAR_RESULT == 15) {
[0180] (13)     ActorOps(10,[Costume(23)]);
[0184] (13)     ActorOps(10,[TalkColor(12)]);
[0188] (13)     ActorOps(10,[Sound(6)]);
[018C] (53)     ActorOps(10,[Name("bum")]);
[0194] (2D)     putActorInRoom(10,143);
[0197] (01)     putActor(10,30,46);
[019B] (9A)     Var[44] = Var[234];
[019E] (19)     doSentence(250,211,0,1);
[01A5] (19)     doSentence(253,210,0,1);
[01AC] (18)   } else {
[01AF] (1A)     Var[44] = -1;
[01B3] (03)     VAR_RESULT = getActorRoom(10);
[01B6] (C8)     if (VAR_RESULT == VAR_ROOM) {
[01BB] (19)       doSentence(253,206,0,1);
[01C2] (18)     } else {
[01C5] (3C)       stopSound(96);
[01C7] (**)     }
[01C7] (**)   }
[01C7] (**) }
[01C7] (48) if (VAR_ROOM == 145) {
[01CD] (1A)   Var[46] = 4;
[01D1] (A6)   setVarRange(Var[68],5,[667,659,660,661,662]);
[01DE] (A6)   setVarRange(Var[73],5,[937,808,295,305,260]);
[01EB] (05)   drawObject(196,255,255);
[01F0] (1A)   Var[47] = 144;
[01F4] (1A)   Var[48] = 3;
[01F8] (10)   VAR_RESULT = getObjectOwner(45);
[01FC] (48)   if (VAR_RESULT == 15) {
[0202] (13)     ActorOps(10,[Costume(25)]);
[0206] (13)     ActorOps(10,[TalkColor(12)]);
[020A] (53)     ActorOps(10,[Sound(Var[234])]);
[020E] (53)     ActorOps(10,[Name("devotee")]);
[021A] (68)     VAR_RESULT = isScriptRunning(40);
[021D] (28)     if (!VAR_RESULT) {
[0221] (2D)       putActorInRoom(10,145);
[0224] (01)       putActor(10,10,46);
[0228] (9A)       Var[44] = Var[234];
[022B] (42)       startScript(40);
[022D] (**)     }
[022D] (18)   } else {
[0230] (1A)     Var[44] = -1;
[0234] (**)   }
[0234] (03)   VAR_RESULT = getActorRoom(10);
[0237] (C8)   if (VAR_RESULT == VAR_ROOM) {
[023C] (19)     doSentence(253,205,0,1);
[0243] (0C)     loadScript(43)
[0246] (18)   } else {
[0249] (3C)     stopSound(96);
[024B] (**)   }
[024B] (**) }
[024B] (48) if (VAR_ROOM == 144) {
[0251] (9A)   Var[46] = Var[235];
[0254] (A6)   setVarRange(Var[68],2,[661,663]);
[025B] (A6)   setVarRange(Var[73],2,[407,260]);
[0262] (05)   drawObject(197,255,255);
[0267] (47)   clearState08(192);
[026A] (17)   clearState02(192);
[026D] (1A)   Var[47] = 266;
[0271] (1A)   Var[48] = 12;
[0275] (31)   VAR_RESULT = getBitVar(1557,0);
[027A] (28)   if (!VAR_RESULT) {
[027E] (42)     startScript(140);
[0280] (**)   }
[0280] (**) }
[0280] (08) if (VAR_ROOM != 143) {
[0286] (19)   doSentence(250,201,0,1);
[028D] (**) }
[028D] (00) stopObjectCode();
END

// EX
[0000] (EA) Var[Var[60]] -= Var[87];
[0003] (3C) stopSound(96);
[0005] (68) VAR_RESULT = isScriptRunning(30);
[0008] (28) if (!VAR_RESULT) {
[000C] (07)   setState08(195);
[000F] (57)   setState02(195);
[0012] (62)   stopScript(43);
[0014] (62)   stopScript(40);
[0016] (2D)   putActorInRoom(10,0);
[0019] (**) }
[0019] (00) stopObjectCode();
END

// Object 45
Events:
   C - 0017
[0017] (42) startScript(138);
[0019] (00) stopObjectCode();
END

// Object 46
Events:
   B - 001C
   C - 001C
[001C] (42) startScript(138);
[001E] (00) stopObjectCode();
END

// Object 190
Events:
   D - 0023
  FD - 0026
[0023] (42) startScript(115);
[0025] (00) stopObjectCode();
[0026] (19) doSentence(254,212,0,1);
[002D] (19) doSentence(254,216,0,1);
[0034] (3C) stopSound(96);
[0036] (7C) VAR_RESULT = isSoundRunning(87);
[0039] (28) if (!VAR_RESULT) {
[003D] (1C)   startSound(87);
[003F] (**) }
[003F] (9A) Var[59] = Var[234];
[0042] (00) stopObjectCode();
END

// Object 191
Events:
   1 - 0046
   D - 0019
[0019] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[001D] (47)   clearState08(191);
[0020] (48)   if (VAR_ROOM == 142) {
[0026] (1A)     Var[58] = 572;
[002A] (1A)     Var[59] = 191;
[002E] (9A)     Var[255] = VAR_ROOM;
[0031] (**)   }
[0031] (48)   if (VAR_ROOM == 146) {
[0037] (0C)     loadCostume(9)
[003A] (**)   }
[003A] (67)   clearState04(219);
[003D] (E4)   loadRoomWithEgo(Var[47],Var[48],255,255);
[0042] (**) }
[0042] (18) goto 0046;
[0045] (00) stopObjectCode();
[0046] (48) if (VAR_ROOM == 143) {
[004C] (D8)   printEgo("Looks like it's broken.");
[0062] (**) }
[0062] (00) stopObjectCode();
END

// Object 192
Events:
   B - 0018
[0018] (42) startScript(46);
[001A] (00) stopObjectCode();
END

// Object 193
Events:
   B - 001E
   C - 001E
[001E] (80) breakHere();
[001F] (7C) VAR_RESULT = isSoundRunning(19);
[0022] (28) unless (!VAR_RESULT) goto 001E;
[0026] (42) startScript(80);
[0028] (00) stopObjectCode();
END

// Object 194
Events:
   B - 0028
[0028] (80) breakHere();
[0029] (7C) VAR_RESULT = isSoundRunning(19);
[002C] (28) unless (!VAR_RESULT) goto 0028;
[0030] (1A) Var[78] = 213;
[0034] (42) startScript(30);
[0036] (00) stopObjectCode();
END

// Object 195
Events:
END

// Object 196
Events:
END

// Object 197
Events:
END

// Object 198
Events:
END

// Object 199
Events:
END

// Object 200
Events:
END

// Object 201
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (66) Var[66] = getClosestObjActor(191);
[0018] (0F) if (!getState08(191)) {
[001D] (C3)   VAR_RESULT = getActorX(Var[66]);
[0020] (44)   if (VAR_RESULT > 25) {
[0026] (1C)     startSound(19);
[0028] (2E)     delay(30);
[002C] (07)     setState08(191);
[002F] (2E)     delay(60);
[0033] (3C)     stopSound(19);
[0035] (**)   }
[0035] (18) } else {
[0038] (C3)   VAR_RESULT = getActorX(Var[66]);
[003B] (04)   if (VAR_RESULT <= 25) {
[0041] (1C)     startSound(19);
[0043] (2E)     delay(30);
[0047] (47)     clearState08(191);
[004A] (2E)     delay(60);
[004E] (3C)     stopSound(19);
[0050] (**)   }
[0050] (**) }
[0050] (18) goto 0013;
[0053] (00) stopObjectCode();
END

// Object 202
Events:
  FD - 0013
[0013] (16) Var[66] = getRandomNr(255);
[0016] (2B) delayVariable(Var[66]);
[0018] (A8) while (Var[58]) {
[001C] (08)   if (Var[242] != 208) {
[0022] (80)     breakHere();
[0023] (18)     goto 0018;
[0026] (**)   }
[0026] (**) }
[0026] (1A) Var[57] = 6;
[002A] (1A) Var[241] = 201;
[002E] (48) if (Var[241] == 201) {
[0034] (9A)   Var[66] = Var[57];
[0037] (C6)   Var[66]--;
[0039] (38)   if (Var[66] >= 6) {
[003F] (45)     drawObject(215,Var[66],1);
[0044] (**)   }
[0044] (**) }
[0044] (C5) drawObject(Var[241],Var[57],1);
[0048] (80) breakHere();
[0049] (46) Var[241]++;
[004B] (44) unless (Var[241] > 204) goto 002E;
[0051] (46) Var[57]++;
[0053] (44) unless (Var[57] > 33) goto 002A;
[0059] (08) if (Var[58] != 33) {
[005F] (05)   drawObject(215,33,1);
[0064] (**) }
[0064] (18) goto 0013;
[0067] (00) stopObjectCode();
END

// Object 203
Events:
  FD - 0013
[0013] (9A) Var[58] = Var[234];
[0016] (16) Var[66] = getRandomNr(255);
[0019] (16) Var[67] = getRandomNr(255);
[001C] (DA) Var[66] += Var[67];
[001F] (5A) Var[66] += 120;
[0023] (2B) delayVariable(Var[66]);
[0025] (08) while (Var[241] != 201) {
[002B] (80)   breakHere();
[002C] (**) }
[002F] (1A) Var[58] = 33;
[0033] (1A) Var[242] = 205;
[0037] (48) if (Var[242] == 205) {
[003D] (9A)   Var[66] = Var[58];
[0040] (46)   Var[66]++;
[0042] (04)   if (Var[66] <= 33) {
[0048] (88)     if (Var[66] != Var[57]) {
[004D] (45)       drawObject(216,Var[66],1);
[0052] (**)     }
[0052] (**)   }
[0052] (**) }
[0052] (C8) if (Var[58] == Var[57]) {
[0057] (9A)   Var[66] = Var[242];
[005A] (5A)   Var[66] += 4;
[005E] (C5)   drawObject(Var[66],Var[58],1);
[0062] (18) } else {
[0065] (C5)   drawObject(Var[242],Var[58],1);
[0069] (**) }
[0069] (80) breakHere();
[006A] (46) Var[242]++;
[006C] (44) unless (Var[242] > 208) goto 0037;
[0072] (C6) Var[58]--;
[0074] (78) unless (Var[58] < 6) goto 0033;
[007A] (08) if (Var[57] != 6) {
[0080] (05)   drawObject(216,6,1);
[0085] (**) }
[0085] (18) goto 0013;
[0088] (00) stopObjectCode();
END

// Object 204
Events:
  FD - 0013
[0013] (16) Var[66] = getRandomNr(255);
[0016] (80) breakHere();
[0017] (18) goto 0013;
[001A] (00) stopObjectCode();
END

// Object 205
Events:
  FD - 0013
[0013] (9A) Var[203] = Var[235];
[0016] (80) breakHere();
[0017] (48) if (VAR_ACTIVE_VERB == 3) {
[001D] (BB)   waitForActor(VAR_EGO);
[001F] (48)   if (VAR_ACTIVE_OBJECT2 == 10) {
[0025] (42)     startScript(43);
[0027] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[002A] (**)   }
[002A] (**) }
[002A] (18) goto 0016;
[002D] (00) stopObjectCode();
END

// Object 206
Events:
  FD - 0013
[0013] (9A) Var[203] = Var[235];
[0016] (80) breakHere();
[0017] (48) if (VAR_ACTIVE_VERB == 3) {
[001D] (BB)   waitForActor(VAR_EGO);
[001F] (48)   if (VAR_ACTIVE_OBJECT2 == 10) {
[0025] (14)     print(10,"I don't need anything! Let me dance!");
[0046] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[0049] (**)   }
[0049] (**) }
[0049] (18) goto 0016;
[004C] (00) stopObjectCode();
END

// Object 207
Events:
  FD - 0013
[0013] (4D) walkActorToActor(10,VAR_EGO,2);
[0017] (80) breakHere();
[0018] (80) breakHere();
[0019] (80) breakHere();
[001A] (B4) VAR_RESULT = getDist(VAR_EGO,10);
[001F] (78) unless (VAR_RESULT < 3) goto 0013;
[0025] (14) print(10,"Can y'spare a debit?");
[0039] (1A) Var[54] = 80;
[003D] (00) stopObjectCode();
END

// Object 208
Events:
  FD - 0013
[0013] (40) cutscene();
[0014] (58) beginOverride();
[0015] (18) goto 00AC;
[0018] (14) print(10,"I've heard of dis guru. Lemme see what\x01he has t'say.");
[0046] (AE) waitForMessage();
[0047] (11) animateActor(10,247);
[004A] (9A) Var[117] = Var[235];
[004D] (2E) delay(180);
[0051] (14) print(10,"Ah!");
[0057] (46) Var[117]++;
[0059] (44) unless (Var[117] > 3) goto 004D;
[005F] (2E) delay(180);
[0063] (49) faceActor(10,VAR_EGO);
[0066] (3B) waitForActor(10);
[0068] (14) print(10,"I UNDERSTAND now! I don't need this\x01whiskey any longer! Here, and thank you!");
[00AB] (AE) waitForMessage();
[00AC] (6F) if (getState04(45)) {
[00B1] (29)   setOwnerOf(45,0);
[00B5] (**) }
[00B5] (9A) Var[67] = Var[234];
[00B8] (1A) Var[66] = 14;
[00BC] (90) VAR_RESULT = getObjectOwner(Var[66]);
[00BF] (48) if (VAR_RESULT == 10) {
[00C5] (E9)   setOwnerOf(Var[66],VAR_EGO);
[00C8] (46)   Var[67]++;
[00CA] (**) }
[00CA] (46) Var[66]++;
[00CC] (44) unless (Var[66] > 83) goto 00BC;
[00D2] (A8) if (Var[67]) {
[00D6] (14)   print(10,"And here're all my earthly possessions.");
[00FB] (**) }
[00FB] (53) ActorOps(10,[Name("devotee")]);
[0107] (50) pickupObject(46);
[010A] (C0) endCutscene();
[010B] (1A) Var[44] = -1;
[010F] (1E) walkActorTo(10,10,46);
[0113] (3B) waitForActor(10);
[0115] (42) startScript(40);
[0117] (19) doSentence(253,206,0,1);
[011E] (00) stopObjectCode();
END

// Object 209
Events:
  FD - 0013
[0013] (1A) Var[66] = 2;
[0017] (48) if (VAR_ACTIVE_OBJECT1 == 18) {
[001D] (1A)   Var[66] = 1;
[0021] (**) }
[0021] (9A) Var[14] = Var[66];
[0024] (5A) Var[14] += 61;
[0028] (B8) if (Var[14] >= Var[118]) {
[002D] (40)   cutscene();
[002E] (9A)   Var[14] = Var[66];
[0031] (5A)   Var[14] += 61;
[0035] (EA)   Var[Var[14]] -= Var[118];
[0038] (58)   beginOverride();
[0039] (18)   goto 004C;
[003C] (11)   animateActor(10,255);
[003F] (11)   animateActor(10,247);
[0042] (2E)   delay(60);
[0046] (1C)   startSound(84);
[0048] (2E)   delay(120);
[004C] (49)   faceActor(10,VAR_EGO);
[004F] (3B)   waitForActor(10);
[0051] (C0)   endCutscene();
[0052] (18) } else {
[0055] (9A)   Var[66] = Var[234];
[0058] (**) }
[0058] (00) stopObjectCode();
END

// Object 210
Events:
  FD - 0013
[0013] (9A) VAR_ACTIVE_OBJECT2 = Var[234];
[0016] (9A) Var[203] = Var[235];
[0019] (1A) Var[54] = 80;
[001D] (80) breakHere();
[001E] (C6) Var[54]--;
[0020] (28) if (!Var[54]) {
[0024] (19)   doSentence(250,207,0,1);
[002B] (**) }
[002B] (48) if (VAR_ACTIVE_VERB == 3) {
[0031] (48)   if (VAR_ACTIVE_OBJECT2 == 10) {
[0037] (BB)     waitForActor(VAR_EGO);
[0039] (89)     faceActor(VAR_EGO,10);
[003C] (00)     stopObjectCode();
[003D] (19)     doSentence(254,211,0,1);
[0044] (19)     doSentence(254,207,0,1);
[004B] (11)     animateActor(10,255);
[004E] (4D)     walkActorToActor(10,VAR_EGO,4);
[0052] (3B)     waitForActor(10);
[0054] (49)     faceActor(10,VAR_EGO);
[0057] (89)     faceActor(VAR_EGO,10);
[005A] (00)     stopObjectCode();
[005B] (3B)     waitForActor(10);
[005D] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[0060] (1A)     Var[54] = 180;
[0064] (48)     if (VAR_ACTIVE_OBJECT1 == 45) {
[006A] (19)       doSentence(250,208,0,1);
[0071] (18)       goto 00FE;
[0074] (**)     }
[0074] (9D)     if (classOfIs(VAR_ACTIVE_OBJECT1,64)) {
[0079] (A9)       setOwnerOf(VAR_ACTIVE_OBJECT1,10);
[007C] (14)       print(10,"Tanks, but my life shtill ain' got no\x01meanin'.");
[00A6] (9D)     } else if (classOfIs(VAR_ACTIVE_OBJECT1,128)) {
[00AE] (14)       print(10,"One moment^");
[00BB] (AE)       waitForMessage();
[00BC] (1A)       Var[118] = 5;
[00C0] (19)       doSentence(250,209,0,1);
[00C7] (80)       breakHere();
[00C8] (A8)       if (Var[66]) {
[00CC] (18)         goto 007C;
[00CF] (**)       }
[00CF] (14)       print(10,"Hey! You're broke too!");
[00E5] (18)     } else {
[00E8] (14)       print(10,"No tanks.");
[00F3] (**)     }
[00F3] (AE)     waitForMessage();
[00F4] (19)     doSentence(250,211,0,1);
[00FB] (**)   }
[00FB] (**) }
[00FB] (18) goto 001D;
[00FE] (00) stopObjectCode();
END

// Object 211
Events:
  FD - 0013
[0013] (16) Var[55] = getRandomNr(2);
[0016] (16) Var[56] = getRandomNr(2);
[0019] (43) Var[66] = getActorX(10);
[001C] (DA) Var[55] += Var[66];
[001F] (C6) Var[55]--;
[0021] (23) Var[66] = getActorY(10);
[0024] (DA) Var[56] += Var[66];
[0027] (C6) Var[56]--;
[0029] (7E) walkActorTo(10,Var[55],Var[56]);
[002D] (3B) waitForActor(10);
[002F] (18) goto 0013;
[0032] (00) stopObjectCode();
END

// Object 212
Events:
  FD - 0013
[0013] (46) Var[59]++;
[0015] (7C) VAR_RESULT = isSoundRunning(96);
[0018] (28) if (!VAR_RESULT) {
[001C] (1C)   startSound(96);
[001E] (**) }
[001E] (9A) Var[53] = Var[234];
[0021] (9A) Var[14] = Var[53];
[0024] (5A) Var[14] += 49;
[0028] (51) animateActor(10,Var[14]);
[002B] (80) breakHere();
[002C] (9A) Var[14] = Var[53];
[002F] (5A) Var[14] += 49;
[0033] (51) animateActor(10,Var[14]);
[0036] (80) breakHere();
[0037] (46) Var[53]++;
[0039] (44) unless (Var[53] > 3) goto 0021;
[003F] (18) goto 001E;
[0042] (00) stopObjectCode();
END

// Object 213
Events:
END

// Object 214
Events:
   C - 0017
[0017] (D8) printEgo("Miami closed for repairs.");
[002F] (00) stopObjectCode();
END

// Object 215
Events:
END

// Object 216
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (1E) walkActorTo(10,12,46);
[0018] (80) breakHere();
[0019] (3B) waitForActor(10);
[001B] (1E) walkActorTo(10,8,46);
[001F] (80) breakHere();
[0020] (3B) waitForActor(10);
[0022] (18) goto 0013;
[0025] (00) stopObjectCode();
END
