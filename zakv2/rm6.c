/**
 * Zak McKracken: V2 Retail
 * 
 * Room 6: Annie's Apartment
 */

// EN
[0000] (2F) if (!getState04(174)) {
[0005] (70)   lights(11,0,0);
[0009] (**) }
[0009] (00) stopObjectCode();
END

// Object 32
Events:
   3 - 0039
   B - 0024
   C - 0032
   E - 0021
[0021] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0023] (00) stopObjectCode();
[0024] (48) if (VAR_EGO == 2) {
[002A] (42)   startScript(131);
[002C] (18) } else {
[002F] (42)   startScript(53);
[0031] (**) }
[0031] (00) stopObjectCode();
[0032] (1A) Var[67] = 2;
[0036] (42) startScript(53);
[0038] (00) stopObjectCode();
[0039] (48) if (VAR_ACTIVE_OBJECT2 == 2) {
[003F] (A9)   setOwnerOf(VAR_ACTIVE_OBJECT1,2);
[0042] (18) } else {
[0045] (42)   startScript(53);
[0047] (**) }
[0047] (00) stopObjectCode();
END

// Object 33
Events:
   B - 0025
   E - 0022
[0022] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0024] (00) stopObjectCode();
[0025] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002A] (00) stopObjectCode();
END

// Object 172
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(162);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(162);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(168,5,46,36);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 173
Events:
   1 - 0017
[0017] (D8) printEgo("There aren't any drawers.");
[002F] (00) stopObjectCode();
END

// Object 174
Events:
   4 - 001B
   5 - 0028
   B - 0035
[001B] (EF) if (getState04(VAR_ACTIVE_OBJECT1)) {
[001F] (70)   lights(11,0,0);
[0023] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0025] (1C)   startSound(27);
[0027] (**) }
[0027] (00) stopObjectCode();
[0028] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[002C] (1C)   startSound(27);
[002E] (F0)   lights(Var[234],0,0);
[0032] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[0034] (**) }
[0034] (00) stopObjectCode();
[0035] (48) if (VAR_ACTIVE_OBJECT2 == 14) {
[003B] (C8)   if (Var[138] == Var[234]) {
[0040] (D8)     printEgo("There's not enough room in there.");
[005E] (18)     goto 0063;
[0061] (**)   }
[0061] (**) }
[0061] (42) startScript(3);
[0063] (00) stopObjectCode();
END

// Object 175
Events:
   1 - 0022
   2 - 0025
   9 - 0025
   A - 0022
   E - 0022
[0022] (87) setState08(VAR_ACTIVE_OBJECT1);
[0024] (00) stopObjectCode();
[0025] (C7) clearState08(VAR_ACTIVE_OBJECT1);
[0027] (00) stopObjectCode();
END

// Object 176
Events:
   1 - 001E
   A - 001E
   C - 001E
   E - 001E
[001E] (48) if (VAR_EGO == 2) {
[0024] (D8)   printEgo("I've already read them all.");
[003D] (18) } else {
[0040] (D8)   printEgo("It would take YEARS to read them!");
[005D] (**) }
[005D] (00) stopObjectCode();
END

// Object 177
Events:
   1 - 001E
   A - 001E
   C - 001E
   E - 001E
[001E] (19) doSentence(12,176,0,1);
[0025] (00) stopObjectCode();
END

// Object 178
Events:
   1 - 003A
   2 - 0032
   9 - 0042
   A - 0022
   C - 0058
[0022] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0026] (1C)   startSound(64);
[0028] (87)   setState08(VAR_ACTIVE_OBJECT1);
[002A] (18) } else {
[002D] (1C)   startSound(63);
[002F] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0031] (**) }
[0031] (00) stopObjectCode();
[0032] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0036] (18)   goto 002D;
[0039] (**) }
[0039] (00) stopObjectCode();
[003A] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[003E] (18)   goto 0026;
[0041] (**) }
[0041] (00) stopObjectCode();
[0042] (D8) printEgo("Nope, that won't work.");
[0057] (00) stopObjectCode();
[0058] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[005C] (D8)   printEgo("It's the device from my dream!");
[0077] (18) } else {
[007A] (D8)   printEgo("I can't see it.");
[0088] (**) }
[0088] (00) stopObjectCode();
END

// Object 179
Events:
   9 - 0021
   A - 0021
   E - 0021
[0021] (48) if (VAR_EGO == 2) {
[0027] (D8)   printEgo("No, it's VERY fragile.");
[003C] (18) } else {
[003F] (91)   animateActor(VAR_EGO,246);
[0042] (D8)   printEgo("I'm NOT touching it!");
[0055] (**) }
[0055] (00) stopObjectCode();
END
