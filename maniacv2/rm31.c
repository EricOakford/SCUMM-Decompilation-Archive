/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 31: Outer Lab
 */

// EN
[0000] (00) stopObjectCode();
END

// EX
//NOTE: "ERROR: do_room_ops_old: unknown subop 0!"
[0000] (3F) if (!getState01(25186)) {

// Object 166: Door to Dungeon
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(163);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(163);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (1A)   Var[175] = 0;
[002F] (42)   startScript(164);
[0031] (24)   loadRoomWithEgo(163,4,255,255);
[0037] (**) }
[0037] (00) stopObjectCode();
END

// Object 168: Door to Inner Lab
Events:
   1 - 001B
   2 - 0039
   D - 003F
[001B] (68) VAR_RESULT = isScriptRunning(49);
[001E] (48) if (VAR_RESULT == 0) {
[0024] (42)   startScript(10);
[0026] (07)   setState08(169);
[0029] (18) } else {
[002C] (D8)   printEgo("It's stuck!");
[0038] (**) }
[0038] (00) stopObjectCode();
[0039] (42) startScript(11);
[003B] (47) clearState08(169);
[003E] (00) stopObjectCode();
[003F] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0043] (42)   startScript(147);
[0045] (**) }
[0045] (00) stopObjectCode();
END

// Object 355: Control Panel
Events:
END

// Object 356: Periscope
Events:
   B - 001C
[001C] (D8) printEgo("I see a heart-shaped bed.");
[0033] (00) stopObjectCode();
END

// Object 423: Map of House
Events:
END
