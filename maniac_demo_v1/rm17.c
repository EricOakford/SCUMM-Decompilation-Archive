/**
 * Maniac Mansion: V1 Demo
 * 
 * Room 17: Music Room
 */

// EN
[0000] (01) putActor(0,13,0);
[0004] (48) if (Var[94] == 25) {
[000A] (1C)   startSound(25);
[000C] (18) } else {
[000F] (1C)   startSound(44);
[0011] (**) }
[0011] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

// Object 30: Record
Events:
   4 - 0051
   5 - 005D
   E - 001D
[001D] (48) if (Var[167] == 1) {
[0023] (D8)   printEgo("It's still playing!");
[0036] (18) } else {
[0039] (07)   setState08(30);
[003C] (57)   setState02(30);
[003F] (48)   if (Var[94] == 25) {
[0045] (69)     setOwnerOf(32,VAR_EGO);
[0049] (18)   } else {
[004C] (69)     setOwnerOf(188,VAR_EGO);
[0050] (**)   }
[0050] (**) }
[0050] (00) stopObjectCode();
[0051] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0055] (19)   doSentence(4,366,0,0);
[005C] (**) }
[005C] (00) stopObjectCode();
[005D] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0061] (19)   doSentence(5,366,0,0);
[0068] (**) }
[0068] (00) stopObjectCode();
END

// Object 185: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(181);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(181);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(181,11,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 187: Vase
Events:
   E - 0017
[0017] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[001B] (D8)   printEgo("I'd better not.\x03It's obviously a valuable antique!");
[0049] (18) } else {
[004C] (D8)   printEgo("Ouch!");
[0053] (**) }
[0053] (00) stopObjectCode();
END

// Object 188: Old Record
Events:
   B - 0022
   E - 001F
[001F] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0021] (00) stopObjectCode();
[0022] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0027] (00) stopObjectCode();
END

// Object 190: TV
Events:
   4 - 0019
   5 - 003A
   B - 0019
[0019] (0F) if (!getState08(157)) {
[001E] (8F)   if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0022] (87)     setState08(VAR_ACTIVE_OBJECT1);
[0024] (42)     startScript(112);
[0026] (**)   }
[0026] (18) } else {
[0029] (D8)   printEgo("The power is off.");
[0039] (**) }
[0039] (00) stopObjectCode();
[003A] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[003E] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0040] (**) }
[0040] (00) stopObjectCode();
END

// Object 191: Cassette Recorder
Events:
   4 - 0028
   5 - 0071
   B - 008E
[0028] (0F) if (!getState08(192)) {
[002D] (0F)   if (!getState08(157)) {
[0032] (87)     setState08(VAR_ACTIVE_OBJECT1);
[0034] (D8)     printEgo("Ok, it's recording.");
[0047] (48)     if (Var[167] == 1) {
[004D] (9A)       Var[157] = Var[94];
[0050] (**)     }
[0050] (**)   }
[0050] (18) } else {
[0053] (D8)   printEgo("There's no tape in the recorder.");
[0070] (**) }
[0070] (00) stopObjectCode();
[0071] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0075] (D8)   printEgo("It stopped recording.");
[008A] (47)   clearState08(191);
[008D] (**) }
[008D] (00) stopObjectCode();
[008E] (48) if (VAR_ACTIVE_OBJECT2 == 189) {
[0094] (48)   if (Var[157] == 55) {
[009A] (D8)     printEgo("I can't record on this tape.");
[00B3] (18)   } else {
[00B6] (47)     clearState08(192);
[00B9] (17)     clearState02(192);
[00BC] (29)     setOwnerOf(189,14);
[00C0] (**)   }
[00C0] (**) }
[00C0] (00) stopObjectCode();
END

// Object 192: Cassette Tape
Events:
   4 - 004A
   5 - 0056
   E - 0024
[0024] (4F) if (getState08(191)) {
[0029] (D8)   printEgo("It's still recording!");
[003E] (18) } else {
[0041] (69)   setOwnerOf(189,VAR_EGO);
[0045] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0047] (D7)   setState02(VAR_ACTIVE_OBJECT1);
[0049] (**) }
[0049] (00) stopObjectCode();
[004A] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[004E] (19)   doSentence(4,191,0,0);
[0055] (**) }
[0055] (00) stopObjectCode();
[0056] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005A] (19)   doSentence(5,191,0,0);
[0061] (**) }
[0061] (00) stopObjectCode();
END

// Object 364: Piano Bench
Events:
END

// Object 365: Piano
Events:
   B - 0018
[0018] (04) if (VAR_EGO <= 2) {
[001E] (42)   startScript(100);
[0020] (18) } else {
[0023] (D8)   printEgo("I can't play that thing!");
[0039] (**) }
[0039] (00) stopObjectCode();
END

// Object 366: Victrola
Events:
   4 - 001F
   5 - 0066
   B - 0071
[001F] (0F) if (!getState08(30)) {
[0024] (48)   if (Var[167] == 0) {
[002A] (1A)     Var[167] = 1;
[002E] (4F)     if (getState08(191)) {
[0033] (9A)       Var[157] = Var[94];
[0036] (**)     }
[0036] (48)     if (Var[94] == 25) {
[003C] (42)       startScript(20);
[003E] (18)     } else {
[0041] (1C)       startSound(44);
[0043] (**)     }
[0043] (**)   }
[0043] (18) } else {
[0046] (D8)   printEgo("There's no record on the Victrola.");
[0065] (**) }
[0065] (00) stopObjectCode();
[0066] (1A) Var[167] = 0;
[006A] (3C) stopSound(25);
[006C] (3C) stopSound(44);
[006E] (62) stopScript(20);
[0070] (00) stopObjectCode();
[0071] (0F) if (!getState08(30)) {
[0076] (D8)   printEgo("There's already a record here.");
[0092] (18) } else {
[0095] (48)   if (VAR_ACTIVE_OBJECT2 == 32) {
[009B] (47)     clearState08(30);
[009E] (17)     clearState02(30);
[00A1] (29)     setOwnerOf(32,14);
[00A5] (1A)     Var[94] = 25;
[00A9] (**)   }
[00A9] (48)   if (VAR_ACTIVE_OBJECT2 == 188) {
[00AF] (47)     clearState08(30);
[00B2] (17)     clearState02(30);
[00B5] (29)     setOwnerOf(188,14);
[00B9] (1A)     Var[94] = 44;
[00BD] (**)   }
[00BD] (**) }
[00BD] (00) stopObjectCode();
END

// Object 367: Speaker
Events:
END
