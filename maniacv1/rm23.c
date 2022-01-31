/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 23: Dark Room
 */

// EN
[0000] (00) stopObjectCode();
END

// Object 390: Enlarger
Events:
END

// Object 391: Developer Tray
Events:
   B - 0024
[0024] (48) if (VAR_ACTIVE_OBJECT2 == 56) {
[002A] (42)   startScript(77);
[002C] (18) } else {
[002F] (48)   if (VAR_ACTIVE_OBJECT2 == 123) {
[0035] (48)     if (Var[171] == 0) {
[003B] (9A)       Var[171] = Var[168];
[003E] (1A)       Var[168] = 0;
[0042] (18)     } else {
[0045] (9A)       Var[168] = Var[171];
[0048] (1A)       Var[171] = 0;
[004C] (**)     }
[004C] (42)     startScript(80);
[004E] (**)   }
[004E] (48)   if (VAR_ACTIVE_OBJECT2 == 132) {
[0054] (1C)     startSound(41);
[0056] (48)     if (Var[171] == 0) {
[005C] (9A)       Var[171] = Var[166];
[005F] (1A)       Var[166] = 0;
[0063] (48)     } else if (Var[166] == 0) {
[006C] (9A)       Var[166] = Var[171];
[006F] (1A)       Var[171] = 0;
[0073] (18)     } else {
[0076] (3C)       stopSound(41);
[0078] (D8)       printEgo("The tray is already full.");
[008F] (**)     }
[008F] (42)     startScript(79);
[0091] (**)   }
[0091] (42)   startScript(83);
[0093] (**) }
[0093] (00) stopObjectCode();
END

// Object 392: Desk
Events:
END

// Object 393: File Drawers
Events:
   1 - 0021
   8 - 0032
[0021] (D8) printEgo("They're locked.");
[0031] (00) stopObjectCode();
[0032] (D8) printEgo("I don't have a key for this.");
[004A] (00) stopObjectCode();
END

// Object 420: Red Light
Events:
   4 - 001E
   5 - 0028
[001E] (1C) startSound(12);
[0020] (9B) setBitVar(2816,VAR_ROOM,0);
[0025] (42) startScript(55);
[0027] (00) stopObjectCode();
[0028] (1C) startSound(12);
[002A] (9B) setBitVar(2816,VAR_ROOM,1);
[002F] (42) startScript(55);
[0031] (00) stopObjectCode();
END

// Object 459: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(458);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(458);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(458,12,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END
