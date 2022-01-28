/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 28: Observatory
 */

// Object 252: Hole
Events:
   D - 0017
[0017] (08) if (Var[174] != 2) {
[001D] (D8)   printEgo("The plant's gone. I'm stuck here!");
[003B] (08) } else if (Var[193] != 1) {
[0044] (1A)   Var[95] = 6;
[0048] (42)   startScript(61);
[004A] (18) } else {
[004D] (24)   loadRoomWithEgo(100,27,255,255);
[0053] (**) }
[0053] (00) stopObjectCode();
END

// Object 409: Astronomy Chart
Events:
   C - 0022
[0022] (D8) printEgo("It shows the trajectory of a meteorite\x01impacting Earth.");
[0054] (00) stopObjectCode();
END

// Object 410: Control Panel
Events:
   C - 0020
[0020] (D8) printEgo("Insert dime.");
[002D] (00) stopObjectCode();
END

// Object 411: Left Button
Events:
   9 - 002E
   C - 0020
[0020] (D8) printEgo("Rotate left.");
[002D] (00) stopObjectCode();
[002E] (08) if (Var[170] != 0) {
[0034] (3A)   Var[164] -= 1;
[0038] (48)   if (Var[164] == -1) {
[003E] (1C)     startSound(12);
[0040] (1A)     Var[164] = 0;
[0044] (18)   } else {
[0047] (3A)     Var[170] -= 1;
[004B] (42)     startScript(22);
[004D] (**)   }
[004D] (18) } else {
[0050] (D8)   printEgo("It's not rotating.");
[0062] (1C)   startSound(11);
[0064] (**) }
[0064] (00) stopObjectCode();
END

// Object 412: Right Button
Events:
   9 - 0030
   C - 0021
[0021] (D8) printEgo("Rotate right.");
[002F] (00) stopObjectCode();
[0030] (08) if (Var[170] != 0) {
[0036] (46)   Var[164]++;
[0038] (48)   if (Var[164] == 4) {
[003E] (1C)     startSound(12);
[0040] (1A)     Var[164] = 3;
[0044] (18)   } else {
[0047] (3A)     Var[170] -= 1;
[004B] (42)     startScript(22);
[004D] (**)   }
[004D] (18) } else {
[0050] (D8)   printEgo("It's not rotating.");
[0062] (1C)   startSound(11);
[0064] (**) }
[0064] (00) stopObjectCode();
END

// Object 413: Really Powerful Telescope
Events:
   B - 002C
[002C] (42) startScript(23);
[002E] (00) stopObjectCode();
END

// Object 414: Coin Slot
Events:
   B - 0039
   C - 001E
[001E] (D8) printEgo("Donations kindly accepted.");
[0038] (00) stopObjectCode();
[0039] (48) if (VAR_ACTIVE_OBJECT2 == 36) {
[003F] (29)   setOwnerOf(36,0);
[0043] (18)   goto 0073;
[0046] (48) } else if (VAR_ACTIVE_OBJECT2 == 37) {
[004F] (29)   setOwnerOf(37,0);
[0053] (18)   goto 0073;
[0056] (48) } else if (VAR_ACTIVE_OBJECT2 == 38) {
[005F] (29)   setOwnerOf(38,0);
[0063] (18)   goto 0073;
[0066] (48) } else if (VAR_ACTIVE_OBJECT2 == 211) {
[006F] (29)   setOwnerOf(211,0);
[0073] (46)   Var[170]++;
[0075] (1C)   startSound(11);
[0077] (18) } else {
[007A] (D8)   printEgo("It doesn't fit.");
[0089] (**) }
[0089] (00) stopObjectCode();
END
