/**
 * Zak McKracken: V2 Retail
 * 
 * Room 9: Airport 2
 */

// EN
[0000] (04) if (VAR_EGO <= 2) {
[0006] (9A)   Var[14] = VAR_EGO;
[0009] (5A)   Var[14] += 171;
[000D] (D3)   ActorOps(VAR_EGO,[Costume(Var[14])]);
[0011] (93)   ActorOps(VAR_EGO,[Sound(6)]);
[0015] (**) }
[0015] (0C) loadScript(115)
[0018] (9A) Var[45] = VAR_ROOM;
[001B] (47) clearState08(222);
[001E] (47) clearState08(221);
[0021] (1A) Var[60] = 220;
[0025] (1A) Var[66] = 224;
[0029] (C7) clearState08(Var[66]);
[002B] (46) Var[66]++;
[002D] (44) unless (Var[66] > 227) goto 0029;
[0033] (7C) VAR_RESULT = isSoundRunning(114);
[0036] (28) if (!VAR_RESULT) {
[003A] (1C)   startSound(114);
[003C] (16)   VAR_RESULT = getRandomNr(1);
[003F] (A8)   if (VAR_RESULT) {
[0043] (47)     clearState08(223);
[0046] (17)     clearState02(223);
[0049] (**)   }
[0049] (**) }
[0049] (48) if (VAR_ROOM == 146) {
[004F] (07)   setState08(222);
[0052] (1A)   Var[46] = 3;
[0056] (A6)   setVarRange(Var[68],4,[666,665,659,661]);
[0061] (A6)   setVarRange(Var[73],4,[1033,644,795,1316]);
[006C] (05)   drawObject(224,255,255);
[0071] (1A)   Var[47] = 390;
[0075] (1A)   Var[48] = 20;
[0079] (**) }
[0079] (48) if (VAR_ROOM == 148) {
[007F] (07)   setState08(221);
[0082] (1A)   Var[46] = 2;
[0086] (A6)   setVarRange(Var[68],3,[664,665,659]);
[008F] (A6)   setVarRange(Var[73],3,[1033,1399,1589]);
[0098] (05)   drawObject(227,255,255);
[009D] (1A)   Var[47] = 352;
[00A1] (1A)   Var[48] = 17;
[00A5] (**) }
[00A5] (48) if (VAR_ROOM == 147) {
[00AB] (9A)   Var[46] = Var[235];
[00AE] (A6)   setVarRange(Var[68],2,[664,666]);
[00B5] (A6)   setVarRange(Var[73],2,[644,1399]);
[00BC] (05)   drawObject(226,255,255);
[00C1] (1A)   Var[47] = 572;
[00C5] (1A)   Var[48] = 170;
[00C9] (9A)   Var[14] = VAR_EGO;
[00CC] (5A)   Var[14] += 219;
[00D0] (0A)   Var[Var[14]] = 576;
[00D4] (9A)   Var[14] = VAR_EGO;
[00D7] (5A)   Var[14] += 222;
[00DB] (0A)   Var[Var[14]] = 150;
[00DF] (9A)   Var[14] = VAR_EGO;
[00E2] (5A)   Var[14] += 216;
[00E6] (0A)   Var[Var[14]] = 5;
[00EA] (**) }
[00EA] (48) if (VAR_ROOM == 149) {
[00F0] (07)   setState08(221);
[00F3] (9A)   Var[46] = Var[235];
[00F6] (A6)   setVarRange(Var[68],2,[660,663]);
[00FD] (A6)   setVarRange(Var[73],2,[691,937]);
[0104] (05)   drawObject(225,255,255);
[0109] (1A)   Var[47] = 572;
[010D] (1A)   Var[48] = 175;
[0111] (9A)   Var[14] = VAR_EGO;
[0114] (5A)   Var[14] += 219;
[0118] (0A)   Var[Var[14]] = 619;
[011C] (9A)   Var[14] = VAR_EGO;
[011F] (5A)   Var[14] += 222;
[0123] (0A)   Var[Var[14]] = 42;
[0127] (9A)   Var[14] = VAR_EGO;
[012A] (5A)   Var[14] += 216;
[012E] (0A)   Var[Var[14]] = 3;
[0132] (**) }
[0132] (00) stopObjectCode();
END

// EX
[0000] (1E) walkActorTo(40,1,6);
[0004] (00) stopObjectCode();
[0005] (07) setState08(223);
[0008] (57) setState02(223);
[000B] (00) stopObjectCode();
END

// Object 217
Events:
   D - 0021
[0021] (42) startScript(115);
[0023] (00) stopObjectCode();
END

// Object 218
Events:
   D - 001A
[001A] (48) if (VAR_ROOM == 147) {
[0020] (18) } else {
[0023] (48)   unless (VAR_ROOM == 149) goto 0034;
[0029] (**) }
[0029] (1A) Var[58] = 572;
[002D] (1A) Var[59] = 218;
[0031] (9A) Var[255] = VAR_ROOM;
[0034] (67) clearState04(219);
[0037] (E4) loadRoomWithEgo(Var[47],Var[48],255,255);
[003C] (00) stopObjectCode();
END

// Object 219
Events:
   B - 001E
   C - 001E
[001E] (42) startScript(80);
[0020] (00) stopObjectCode();
END

// Object 220
Events:
   B - 0028
[0028] (1A) Var[78] = 228;
[002C] (42) startScript(30);
[002E] (00) stopObjectCode();
END

// Object 221
Events:
END

// Object 222
Events:
END

// Object 223
Events:
END

// Object 224
Events:
END

// Object 225
Events:
END

// Object 226
Events:
END

// Object 227
Events:
END

// Object 228
Events:
END
