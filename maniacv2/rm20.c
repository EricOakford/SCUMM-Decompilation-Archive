/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 20: Green Tentacle's Room
 */

// EN
[0000] (01) putActor(0,2,0);
[0004] (42) startScript(108);
[0006] (00) stopObjectCode();
END

// EX
[0000] (47) clearState08(164);
[0003] (3C) stopSound(25);
[0005] (3C) stopSound(20);
[0007] (3C) stopSound(44);
[0009] (3C) stopSound(50);
[000B] (3C) stopSound(70);
[000D] (00) stopObjectCode();
END

// Object 32: Record
Events:
   B - 0020
   C - 0026
   E - 001D
[001D] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[001F] (00) stopObjectCode();
[0020] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0025] (00) stopObjectCode();
[0026] (D8) printEgo("Tentacle mating calls.");
[003C] (00) stopObjectCode();
END

// Object 33: Demo Tape
Events:
   E - 001C
[001C] (87) setState08(VAR_ACTIVE_OBJECT1);
[001E] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0020] (69) setOwnerOf(189,VAR_EGO);
[0024] (54) setObjectName(189,"demo tape");
[0031] (1A) Var[157] = 70;
[0035] (00) stopObjectCode();
END

// Object 164: Mondo Stereo
Events:
   4 - 0023
   5 - 0038
   B - 0048
[0023] (0F) if (!getState08(157)) {
[0028] (07)   setState08(164);
[002B] (0F)   if (!getState08(216)) {
[0030] (42)     startScript(109);
[0032] (18)   } else {
[0035] (1C)     startSound(20);
[0037] (**)   }
[0037] (**) }
[0037] (00) stopObjectCode();
[0038] (4F) if (getState08(164)) {
[003D] (47)   clearState08(164);
[0040] (3C)   stopSound(25);
[0042] (3C)   stopSound(20);
[0044] (3C)   stopSound(44);
[0046] (20)   stopMusic();
[0047] (**) }
[0047] (00) stopObjectCode();
[0048] (48) if (VAR_ACTIVE_OBJECT2 == 189) {
[004E] (47)   clearState08(216);
[0051] (17)   clearState02(216);
[0054] (29)   setOwnerOf(189,14);
[0058] (3C)   stopSound(20);
[005A] (4F)   if (getState08(164)) {
[005F] (19)     doSentence(4,164,0,0);
[0066] (**)   }
[0066] (**) }
[0066] (48) if (VAR_ACTIVE_OBJECT2 == 188) {
[006C] (18) } else {
[006F] (48)   unless (VAR_ACTIVE_OBJECT2 == 32) goto 0089;
[0075] (**) }
[0075] (D8) printEgo("Hey, it's a CD player!");
[0089] (00) stopObjectCode();
END

// Object 213: Hatch
Events:
   1 - 0020
   2 - 0023
   A - 0026
   D - 0032
   E - 0020
[0020] (42) startScript(10);
[0022] (00) stopObjectCode();
[0023] (42) startScript(11);
[0025] (00) stopObjectCode();
[0026] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002A] (42)   startScript(11);
[002C] (18) } else {
[002F] (42)   startScript(10);
[0031] (**) }
[0031] (00) stopObjectCode();
[0032] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0036] (24)   loadRoomWithEgo(235,21,255,255);
[003C] (**) }
[003C] (00) stopObjectCode();
END

// Object 215: Yellow Key
Events:
   B - 0022
   E - 001F
[001F] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0021] (00) stopObjectCode();
[0022] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0027] (00) stopObjectCode();
END

// Object 216: Cassette Tape
Events:
   4 - 0037
   5 - 0043
   E - 0024
[0024] (4F) if (getState08(164)) {
[0029] (3C)   stopSound(25);
[002B] (20)   stopMusic();
[002C] (1C)   startSound(20);
[002E] (**) }
[002E] (69) setOwnerOf(189,VAR_EGO);
[0032] (87) setState08(VAR_ACTIVE_OBJECT1);
[0034] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0036] (00) stopObjectCode();
[0037] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[003B] (19)   doSentence(4,164,0,0);
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0047] (19)   doSentence(5,164,0,0);
[004E] (**) }
[004E] (00) stopObjectCode();
END

// Object 401: Left Speaker
Events:
   C - 001F
[001F] (D8) printEgo("THX Sound");
[0029] (00) stopObjectCode();
END

// Object 402: Right Speaker
Events:
   C - 0020
[0020] (D8) printEgo("THX Sound");
[002A] (00) stopObjectCode();
END

// Object 404: Ron Gilbert Poster
Events:
   C - 0019
[0019] (D8) printEgo("See Ron Gilbert Live at the Forum!");
[0037] (00) stopObjectCode();
END

// Object 405: Disco Sucks Poster
Events:
END

// Object 406: Bed
Events:
END
