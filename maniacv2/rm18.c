/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 18: Arcade Room
 */

// Object 201: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(196);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(196);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(196,13,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 202: Video Fever
Events:
   4 - 0035
   5 - 0038
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (19)   doSentence(11,438,221,0);
[0034] (**) }
[0034] (00) stopObjectCode();
[0035] (42) startScript(25);
[0037] (00) stopObjectCode();
[0038] (42) startScript(26);
[003A] (00) stopObjectCode();
END

// Object 203: Disco Crazy
Events:
   4 - 0035
   5 - 0038
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (19)   doSentence(11,439,221,0);
[0034] (**) }
[0034] (00) stopObjectCode();
[0035] (42) startScript(25);
[0037] (00) stopObjectCode();
[0038] (42) startScript(26);
[003A] (00) stopObjectCode();
END

// Object 204: Alien Slime
Events:
   4 - 0035
   5 - 0038
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (19)   doSentence(11,440,221,0);
[0034] (**) }
[0034] (00) stopObjectCode();
[0035] (42) startScript(25);
[0037] (00) stopObjectCode();
[0038] (42) startScript(26);
[003A] (00) stopObjectCode();
END

// Object 205: Die Enemy Die
Events:
   4 - 0037
   5 - 003A
   B - 0029
[0029] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002F] (19)   doSentence(11,441,221,0);
[0036] (**) }
[0036] (00) stopObjectCode();
[0037] (42) startScript(25);
[0039] (00) stopObjectCode();
[003A] (42) startScript(26);
[003C] (00) stopObjectCode();
END

// Object 206: Meteor Mess
Events:
   4 - 0035
   5 - 0038
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (19)   doSentence(11,442,221,0);
[0034] (**) }
[0034] (00) stopObjectCode();
[0035] (42) startScript(25);
[0037] (00) stopObjectCode();
[0038] (42) startScript(26);
[003A] (00) stopObjectCode();
END

// Object 207: Kill Thrill
Events:
   4 - 0035
   5 - 0038
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (19)   doSentence(11,443,221,0);
[0034] (**) }
[0034] (00) stopObjectCode();
[0035] (42) startScript(25);
[0037] (00) stopObjectCode();
[0038] (42) startScript(26);
[003A] (00) stopObjectCode();
END

// Object 236: Coin Box 1
Events:
   1 - 005B
   2 - 0062
   8 - 006B
   B - 0040
   E - 0025
  10 - 0062
[0025] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0029] (0F)   if (!getState08(242)) {
[002E] (19)     doSentence(14,242,0,0);
[0035] (18)   } else {
[0038] (42)     startScript(73);
[003A] (**)   }
[003A] (18) } else {
[003D] (42)   startScript(70);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[0046] (19)   doSentence(11,438,221,0);
[004D] (**) }
[004D] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0053] (19)   doSentence(8,236,107,0);
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (42)   startScript(65);
[0061] (**) }
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0068] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[006A] (**) }
[006A] (00) stopObjectCode();
[006B] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0071] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0073] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0075] (18) } else {
[0078] (42)   startScript(66);
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 237: Coin Box 2
Events:
   1 - 005B
   2 - 0062
   8 - 006B
   B - 0040
   E - 0025
  10 - 0062
[0025] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0029] (0F)   if (!getState08(243)) {
[002E] (19)     doSentence(14,243,0,0);
[0035] (18)   } else {
[0038] (42)     startScript(73);
[003A] (**)   }
[003A] (18) } else {
[003D] (42)   startScript(70);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[0046] (19)   doSentence(11,439,221,0);
[004D] (**) }
[004D] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0053] (19)   doSentence(8,237,107,0);
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (42)   startScript(65);
[0061] (**) }
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0068] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[006A] (**) }
[006A] (00) stopObjectCode();
[006B] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0071] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0073] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0075] (18) } else {
[0078] (42)   startScript(66);
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 238: Coin Box 3
Events:
   1 - 005B
   2 - 0062
   8 - 006B
   B - 0040
   E - 0025
  10 - 0062
[0025] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0029] (0F)   if (!getState08(244)) {
[002E] (19)     doSentence(14,244,0,0);
[0035] (18)   } else {
[0038] (42)     startScript(73);
[003A] (**)   }
[003A] (18) } else {
[003D] (42)   startScript(70);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[0046] (19)   doSentence(11,440,221,0);
[004D] (**) }
[004D] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0053] (19)   doSentence(8,238,107,0);
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (42)   startScript(65);
[0061] (**) }
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0068] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[006A] (**) }
[006A] (00) stopObjectCode();
[006B] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0071] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0073] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0075] (18) } else {
[0078] (42)   startScript(66);
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 239: Coin Box 4
Events:
   1 - 005B
   2 - 0062
   8 - 006B
   B - 0040
   E - 0025
  10 - 0062
[0025] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0029] (0F)   if (!getState08(245)) {
[002E] (19)     doSentence(14,245,0,0);
[0035] (18)   } else {
[0038] (42)     startScript(73);
[003A] (**)   }
[003A] (18) } else {
[003D] (42)   startScript(70);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[0046] (19)   doSentence(11,441,221,0);
[004D] (**) }
[004D] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0053] (19)   doSentence(8,239,107,0);
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (42)   startScript(65);
[0061] (**) }
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0068] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[006A] (**) }
[006A] (00) stopObjectCode();
[006B] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0071] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0073] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0075] (18) } else {
[0078] (42)   startScript(66);
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 240: Coin Box 5
Events:
   1 - 005B
   2 - 0062
   8 - 006B
   B - 0040
   E - 0025
  10 - 0062
[0025] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0029] (0F)   if (!getState08(246)) {
[002E] (19)     doSentence(14,246,0,0);
[0035] (18)   } else {
[0038] (42)     startScript(73);
[003A] (**)   }
[003A] (18) } else {
[003D] (42)   startScript(70);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[0046] (19)   doSentence(11,442,221,0);
[004D] (**) }
[004D] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0053] (19)   doSentence(8,240,107,0);
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (42)   startScript(65);
[0061] (**) }
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0068] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[006A] (**) }
[006A] (00) stopObjectCode();
[006B] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0071] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0073] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0075] (18) } else {
[0078] (42)   startScript(66);
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 241: Coin Box 6
Events:
   1 - 005B
   2 - 0062
   8 - 006B
   B - 0040
   E - 0025
  10 - 0062
[0025] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0029] (0F)   if (!getState08(247)) {
[002E] (19)     doSentence(14,247,0,0);
[0035] (18)   } else {
[0038] (42)     startScript(73);
[003A] (**)   }
[003A] (18) } else {
[003D] (42)   startScript(70);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[0046] (19)   doSentence(11,443,221,0);
[004D] (**) }
[004D] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0053] (19)   doSentence(8,241,107,0);
[005A] (**) }
[005A] (00) stopObjectCode();
[005B] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (42)   startScript(65);
[0061] (**) }
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (C7)   clearState08(VAR_ACTIVE_OBJECT1);
[0068] (A7)   setState04(VAR_ACTIVE_OBJECT1);
[006A] (**) }
[006A] (00) stopObjectCode();
[006B] (48) if (VAR_ACTIVE_OBJECT2 == 107) {
[0071] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[0073] (87)   setState08(VAR_ACTIVE_OBJECT1);
[0075] (18) } else {
[0078] (42)   startScript(66);
[007A] (**) }
[007A] (00) stopObjectCode();
END

// Object 242
Events:
   E - 001A
[001A] (69) setOwnerOf(221,VAR_EGO);
[001E] (57) setState02(242);
[0021] (07) setState08(242);
[0024] (00) stopObjectCode();
END

// Object 243
Events:
   E - 001A
[001A] (69) setOwnerOf(221,VAR_EGO);
[001E] (57) setState02(243);
[0021] (07) setState08(243);
[0024] (00) stopObjectCode();
END

// Object 244
Events:
   E - 001A
[001A] (69) setOwnerOf(221,VAR_EGO);
[001E] (57) setState02(244);
[0021] (07) setState08(244);
[0024] (00) stopObjectCode();
END

// Object 245
Events:
   E - 001A
[001A] (69) setOwnerOf(221,VAR_EGO);
[001E] (57) setState02(245);
[0021] (07) setState08(245);
[0024] (00) stopObjectCode();
END

// Object 246
Events:
   E - 001A
[001A] (69) setOwnerOf(221,VAR_EGO);
[001E] (57) setState02(246);
[0021] (07) setState08(246);
[0024] (00) stopObjectCode();
END

// Object 247
Events:
   E - 001A
[001A] (69) setOwnerOf(221,VAR_EGO);
[001E] (57) setState02(247);
[0021] (07) setState08(247);
[0024] (00) stopObjectCode();
END

// Object 375: Air Hockey Table
Events:
   B - 0023
[0023] (D8) printEgo("This game is broken.");
[0036] (00) stopObjectCode();
END

// Object 376: Poster
Events:
   C - 0027
[0027] (D8) printEgo("Zak McKracken and the Alien Mindbenders.\x03What a great game!!\x03I never did figure out what to do with\x01the can of gas on Mars.");
[008F] (00) stopObjectCode();
END

// Object 438: Video Fever Quarter
Events:
   4 - 0043
   5 - 0046
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (4F)   if (getState08(225)) {
[0032] (07)     setState08(202);
[0035] (17)     clearState02(242);
[0038] (47)     clearState08(242);
[003B] (42)     startScript(28);
[003D] (18)   } else {
[0040] (42)     startScript(64);
[0042] (**)   }
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (42) startScript(25);
[0045] (00) stopObjectCode();
[0046] (42) startScript(26);
[0048] (00) stopObjectCode();
END

// Object 439: Disco Crazy Quarter
Events:
   4 - 0043
   5 - 0046
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (4F)   if (getState08(225)) {
[0032] (07)     setState08(203);
[0035] (17)     clearState02(243);
[0038] (47)     clearState08(243);
[003B] (42)     startScript(28);
[003D] (18)   } else {
[0040] (42)     startScript(64);
[0042] (**)   }
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (42) startScript(25);
[0045] (00) stopObjectCode();
[0046] (42) startScript(26);
[0048] (00) stopObjectCode();
END

// Object 440: Alien Slime Quarter
Events:
   4 - 0043
   5 - 0046
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (4F)   if (getState08(225)) {
[0032] (07)     setState08(204);
[0035] (17)     clearState02(244);
[0038] (47)     clearState08(244);
[003B] (42)     startScript(28);
[003D] (18)   } else {
[0040] (42)     startScript(64);
[0042] (**)   }
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (42) startScript(25);
[0045] (00) stopObjectCode();
[0046] (42) startScript(26);
[0048] (00) stopObjectCode();
END

// Object 441: Die Enemy Die Quarter
Events:
   4 - 0045
   5 - 0048
   B - 0029
[0029] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002F] (4F)   if (getState08(225)) {
[0034] (07)     setState08(205);
[0037] (17)     clearState02(245);
[003A] (47)     clearState08(245);
[003D] (42)     startScript(28);
[003F] (18)   } else {
[0042] (42)     startScript(64);
[0044] (**)   }
[0044] (**) }
[0044] (00) stopObjectCode();
[0045] (42) startScript(25);
[0047] (00) stopObjectCode();
[0048] (42) startScript(26);
[004A] (00) stopObjectCode();
END

// Object 442: Meteor Mess Quarter
Events:
   4 - 0049
   5 - 004C
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (4F)   if (getState08(225)) {
[0032] (07)     setState08(206);
[0035] (17)     clearState02(246);
[0038] (47)     clearState08(246);
[003B] (29)     setOwnerOf(221,14);
[003F] (1C)     startSound(11);
[0041] (42)     startScript(27);
[0043] (18)   } else {
[0046] (42)     startScript(64);
[0048] (**)   }
[0048] (**) }
[0048] (00) stopObjectCode();
[0049] (42) startScript(25);
[004B] (00) stopObjectCode();
[004C] (42) startScript(26);
[004E] (00) stopObjectCode();
END

// Object 443: kill Thrill Quarter
Events:
   4 - 0043
   5 - 0046
   B - 0027
[0027] (48) if (VAR_ACTIVE_OBJECT2 == 221) {
[002D] (4F)   if (getState08(225)) {
[0032] (07)     setState08(207);
[0035] (17)     clearState02(247);
[0038] (47)     clearState08(247);
[003B] (42)     startScript(28);
[003D] (18)   } else {
[0040] (42)     startScript(64);
[0042] (**)   }
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (42) startScript(25);
[0045] (00) stopObjectCode();
[0046] (42) startScript(26);
[0048] (00) stopObjectCode();
END
