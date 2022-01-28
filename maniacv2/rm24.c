/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 24: Bathroom
 */

// EN
[0000] (00) stopObjectCode();
[0001] (12) panCameraTo(0);
[0003] (1C) startSound(18);
[0005] (30) setBoxFlags(5,0);
[0008] (2D) putActorInRoom(12,24);
[000B] (01) putActor(12,24,48);
[000F] (30) setBoxFlags(5,128);
[0012] (18) goto 0022;
[0015] (30) setBoxFlags(5,0);
[0018] (2D) putActorInRoom(12,24);
[001B] (01) putActor(12,30,48);
[001F] (30) setBoxFlags(5,128);
[0022] (0F) if (!getState08(253)) {
[0027] (1C)   startSound(17);
[0029] (**) }
[0029] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

// Object 113: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(112);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(112);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(112,25,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 114: Toilet Lid
Events:
   1 - 001F
   2 - 0022
[001F] (87) setState08(VAR_ACTIVE_OBJECT1);
[0021] (00) stopObjectCode();
[0022] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0024] (00) stopObjectCode();
END

// Object 115: Shower Curtain Part
Events:
   1 - 0025
   2 - 0028
   A - 0025
[0025] (42) startScript(18);
[0027] (00) stopObjectCode();
[0028] (42) startScript(19);
[002A] (00) stopObjectCode();
END

// Object 116: Shower Curtain Part
Events:
   1 - 0025
   2 - 0028
   A - 0025
[0025] (42) startScript(18);
[0027] (00) stopObjectCode();
[0028] (42) startScript(19);
[002A] (00) stopObjectCode();
END

// Object 117: Shower Curtain Part
Events:
   1 - 0025
   2 - 0028
   A - 0025
[0025] (42) startScript(18);
[0027] (00) stopObjectCode();
[0028] (42) startScript(19);
[002A] (00) stopObjectCode();
END

// Object 118: Water Faucet
Events:
   1 - 0029
   2 - 0067
   4 - 0029
   5 - 0067
   6 - 0074
   B - 0074
[0029] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[002D] (1C)   startSound(18);
[002F] (07)   setState08(233);
[0032] (17)   clearState02(233);
[0035] (47)   clearState08(256);
[0038] (30)   setBoxFlags(5,0);
[003B] (1E)   walkActorTo(12,24,48);
[003F] (30)   setBoxFlags(5,128);
[0042] (48)   if (Var[132] == 0) {
[0048] (1A)     Var[132] = 1;
[004C] (42)     startScript(144);
[004E] (**)   }
[004E] (18) } else {
[0051] (D8)   printEgo("The handle's missing.");
[0066] (**) }
[0066] (00) stopObjectCode();
[0067] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[006B] (3C)   stopSound(18);
[006D] (47)   clearState08(233);
[0070] (57)   setState02(233);
[0073] (**) }
[0073] (00) stopObjectCode();
[0074] (48) if (VAR_ACTIVE_OBJECT2 == 153) {
[007A] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[007C] (29)   setOwnerOf(153,0);
[0080] (18) } else {
[0083] (D8)   printEgo("That doesn't make sense.");
[009A] (**) }
[009A] (00) stopObjectCode();
END

// Object 119
Events:
END

// Object 120
Events:
END

// Object 121
Events:
END

// Object 122
Events:
END

// Object 123: Sponge
Events:
   3 - 0049
   B - 002F
   E - 002C
[002C] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[002E] (00) stopObjectCode();
[002F] (48) if (VAR_ACTIVE_OBJECT2 == 132) {
[0035] (9A)   Var[168] = Var[166];
[0038] (1A)   Var[166] = 0;
[003C] (42)   startScript(80);
[003E] (42)   startScript(79);
[0040] (18) } else {
[0043] (79)   doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0048] (**) }
[0048] (00) stopObjectCode();
[0049] (48) if (VAR_ACTIVE_OBJECT2 == 19) {
[004F] (19)   doSentence(11,304,123,0);
[0056] (**) }
[0056] (78) if (VAR_ACTIVE_OBJECT2 < 8) {
[005C] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[005F] (**) }
[005F] (00) stopObjectCode();
END

// Object 233: Water
Events:
   B - 0018
[0018] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[001C] (42)   startScript(78);
[001E] (**) }
[001E] (00) stopObjectCode();
END

// Object 253: Sink
Events:
   4 - 001B
   5 - 0020
   B - 0025
[001B] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[001D] (1C) startSound(17);
[001F] (00) stopObjectCode();
[0020] (87) setState08(VAR_ACTIVE_OBJECT1);
[0022] (3C) stopSound(17);
[0024] (00) stopObjectCode();
[0025] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0029] (42)   startScript(78);
[002B] (**) }
[002B] (00) stopObjectCode();
END

// Object 256
Events:
END

// Object 279: Shower Curtain
Events:
   1 - 0025
   2 - 0028
   A - 002B
[0025] (42) startScript(18);
[0027] (00) stopObjectCode();
[0028] (42) startScript(19);
[002A] (00) stopObjectCode();
[002B] (4F) if (getState08(115)) {
[0030] (42)   startScript(18);
[0032] (18) } else {
[0035] (42)   startScript(19);
[0037] (**) }
[0037] (00) stopObjectCode();
END

// Object 321: Cracked Mirror
Events:
END

// Object 323: Toilet
Events:
   1 - 0021
   2 - 0029
   9 - 0021
   A - 0029
   B - 0031
[0021] (19) doSentence(1,114,0,0);
[0028] (00) stopObjectCode();
[0029] (19) doSentence(2,114,0,0);
[0030] (00) stopObjectCode();
[0031] (91) animateActor(VAR_EGO,250);
[0034] (D8) printEgo("I'd like a little more privacy for that!");
[0057] (00) stopObjectCode();
END

// Object 324: Pull Chain
Events:
   A - 001F
   B - 001F
[001F] (1C) startSound(7);
[0021] (00) stopObjectCode();
END

// Object 325: Window
Events:
END
