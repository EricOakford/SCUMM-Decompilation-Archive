/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 27: Henry's House (henrys-ap)
 */

// EN
[0000] (0C) Resource.loadSound(86);
[0003] (1D) if (classOfIs(231,[6])) {
[000C] (0A)   startScript(200,[]);
[000F] (**) }
[000F] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200 // First Entry
[0000] (40) cutscene([]);
[0002] (2E) delay(60);
[0006] (5D) setClass(231,[134]);
[000D] (D8) printEgo([Text("What a mess!  I wonder what they were looking for?")]);
[0042] (AE) WaitForMessage();
[0044] (10) VAR_RESULT = getObjectOwner(148);
[0049] (48) if (VAR_RESULT == 1) {
[0050] (A8)   if (Bit[12]) {
[0055] (AE)     WaitForMessage();
[0057] (D8)     printEgo([Text("I wonder if it's this diary Dad sent me?")]);
[0082] (**)   }
[0082] (**) }
[0082] (C0) endCutscene();
[0083] (A0) stopObjectCode();
END

// Object 229: Painting
Events:
   9 - 0092
   B - 0023
[0023] (D0) pickupObject(VAR_ME);
[0026] (10) VAR_RESULT = getObjectOwner(148);
[002B] (C8) if (VAR_RESULT == VAR_EGO) {
[0032] (10)   VAR_RESULT = getObjectOwner(237);
[0037] (C8)   if (VAR_RESULT == VAR_EGO) {
[003E] (D8)     printEgo([Text("Now I have everything I need to begin my quest for my father and the Holy Grail!")]);
[0091] (**)   }
[0091] (**) }
[0091] (00) stopObjectCode();
[0092] (D8) printEgo([Text("It's a painting I did when I was a little boy." + newline() + "It's of a trophy my father won.")]);
[00E4] (00) stopObjectCode();
END

// Object 230: Bookcase
Events:
   6 - 0023
   7 - 0023
[0023] (8F) if (getState(VAR_ME) == 0) {
[0029] (87)   setState(VAR_ME,1);
[002D] (1C)   startSound(86);
[002F] (DD)   setClass(VAR_ME,[0]);
[0036] (18) } else {
[0039] (D8)   printEgo([Text("I'll clean up later.")]);
[0050] (**) }
[0050] (00) stopObjectCode();
END

// Object 231: Door
Events:
   1 - 0022
   2 - 0022
   A - 0042
[0022] (D8) printEgo([Text("It seems to be a bit broken.")]);
[0041] (00) stopObjectCode();
[0042] (14) print(255,[]);
[0045] (AE) WaitForMessage();
[0047] (24) loadRoomWithEgo(206,24,32,111);
[004F] (00) stopObjectCode();
END

// Object 232: Plant
Events:
   B - 001D
[001D] (40) cutscene([]);
[001F] (D8) printEgo([Text("I'll just put it down over here.")]);
[0042] (87) setState(VAR_ME,1);
[0046] (DD) setClass(VAR_ME,[152]);
[004D] (36) walkActorToObject(1,233);
[0051] (AE) WaitForActor(1);
[0054] (11) animateCostume(1,12);
[0057] (07) setState(233,1);
[005B] (80) breakHere();
[005C] (80) breakHere();
[005D] (80) breakHere();
[005E] (11) animateCostume(1,3);
[0061] (C0) endCutscene();
[0062] (00) stopObjectCode();
END

// Object 233
Events:
END

// Object 234: Sticky Tape
Events:
   1 - 006F
   7 - 006F
   8 - 00AD
   9 - 0033
   B - 002F
[002F] (D0) pickupObject(VAR_ME);
[0032] (00) stopObjectCode();
[0033] (9D) if (classOfIs(VAR_ME,[6])) {
[003C] (D8)   printEgo([Text("It's kind of lumpy.")]);
[0052] (18) } else {
[0055] (D8)   printEgo([Text("It's a very small key.")]);
[006E] (**) }
[006E] (00) stopObjectCode();
[006F] (9D) if (classOfIs(VAR_ME,[6])) {
[0078] (D8)   printEgo([Text("I can't get the tape open.  It's just too sticky.")]);
[00AC] (**) }
[00AC] (00) stopObjectCode();
[00AD] (79) doSentence(8,Local[0],VAR_ME);
[00B3] (00) stopObjectCode();
END

// Object 235: Table Cloth
Events:
   7 - 0026
   B - 0026
[0026] (0F) if (getState(232) == 0) {
[002C] (D8)   printEgo([Text("The plant's in the way.")]);
[0046] (18) } else {
[0049] (DD)   setClass(VAR_ME,[152]);
[0050] (40)   cutscene([]);
[0052] (11)   animateCostume(1,10);
[0055] (80)   breakHere();
[0056] (80)   breakHere();
[0057] (87)   setState(VAR_ME,1);
[005B] (01)   putActor(1,55,123);
[0061] (11)   animateCostume(1,12);
[0064] (80)   breakHere();
[0065] (80)   breakHere();
[0066] (80)   breakHere();
[0067] (11)   animateCostume(1,3);
[006A] (C0)   endCutscene();
[006B] (**) }
[006B] (00) stopObjectCode();
END

// Object 236: Chest
Events:
   1 - 0023
   2 - 0042
   8 - 0046
[0023] (9D) if (classOfIs(VAR_ME,[134])) {
[002C] (D8)   printEgo([Text("It's locked.")]);
[003B] (18) } else {
[003E] (0A)   startScript(26,[]);
[0041] (**) }
[0041] (00) stopObjectCode();
[0042] (0A) startScript(27,[]);
[0045] (00) stopObjectCode();
[0046] (48) if (Local[0] == 234) {
[004D] (1D)   if (classOfIs(234,[134])) {
[0056] (DD)     setClass(VAR_ME,[6]);
[005D] (18)     goto 003E;
[0060] (**)   }
[0060] (**) }
[0060] (D8) printEgo([Text("That doesn't unlock it.")]);
[007A] (00) stopObjectCode();
END

// Object 237: Old Book
Events:
   1 - 0095
   9 - 0095
   B - 0026
[0026] (D0) pickupObject(VAR_ME);
[0029] (10) VAR_RESULT = getObjectOwner(148);
[002E] (C8) if (VAR_RESULT == VAR_EGO) {
[0035] (10)   VAR_RESULT = getObjectOwner(229);
[003A] (C8)   if (VAR_RESULT == VAR_EGO) {
[0041] (D8)     printEgo([Text("Now I have everything I need to begin my quest for my father and the Holy Grail!")]);
[0094] (**)   }
[0094] (**) }
[0094] (00) stopObjectCode();
[0095] (48) if (VAR_EGO == 1) {
[009C] (D8)   printEgo([Text("This is the diary I made when I was a little boy. It was" + newline() + "supposed to look like my father's Grail Diary.")]);
[0107] (18) } else {
[010A] (D8)   printEgo([Text("I think Junior made this book when he was a boy.")]);
[013D] (**) }
[013D] (9D) if (classOfIs(VAR_ME,[134])) {
[0146] (40)   cutscene([]);
[0148] (AE)   WaitForMessage();
[014A] (D8)   printEgo([Text("It's signed by Hitler!")]);
[0163] (C0)   endCutscene();
[0164] (**) }
[0164] (00) stopObjectCode();
END

// Object 238: Books
Events:
   1 - 0029
   7 - 0029
   8 - 0029
   9 - 0029
   B - 0029
[0029] (D8) printEgo([Text("They're just a lot of old books." + newline() + "I've read them many times.")]);
[0068] (00) stopObjectCode();
END

// Object 239: Books
Events:
   1 - 0029
   7 - 0029
   8 - 0029
   9 - 0029
   B - 0029
[0029] (D8) printEgo([Text("Oh yes, I remember THESE books!" + wait() + "I'd just as soon forget them!")]);
[006A] (00) stopObjectCode();
END

// Object 240: Typewriter
Events:
   4 - 0059
   5 - 0059
   8 - 002B
   9 - 003E
[002B] (40) cutscene([]);
[002D] (11) animateCostume(1,10);
[0030] (80) breakHere();
[0031] (1C) startSound(107);
[0033] (2E) delay(180);
[0037] (3C) stopSound(107);
[0039] (11) animateCostume(1,3);
[003C] (C0) endCutscene();
[003D] (00) stopObjectCode();
[003E] (D8) printEgo([Text("There's no paper in it.")]);
[0058] (00) stopObjectCode();
[0059] (40) cutscene([]);
[005B] (D8) printEgo([Text("Huh?")]);
[0062] (AE) WaitForMessage();
[0064] (11) animateCostume(1,246);
[0067] (AE) WaitForActor(1);
[006A] (D8) printEgo([Text("This isn't a radio, you know!")]);
[008A] (C0) endCutscene();
[008B] (00) stopObjectCode();
END

// Object 241: Desk
Events:
   1 - 0028
   2 - 0056
   6 - 0028
   7 - 0028
   9 - 005D
[0028] (D8) printEgo([Text("Everything that was in it is on the floor!")]);
[0055] (00) stopObjectCode();
[0056] (0A) startScript(60,[2]);
[005C] (00) stopObjectCode();
[005D] (D8) printEgo([Text("None of those papers on top mean anything.")]);
[008A] (00) stopObjectCode();
END

// Object 242: LeChuck the Plant
Events:
   9 - 0029
[0029] (D8) printEgo([Text("Hi, LeChuck!")]);
[0038] (00) stopObjectCode();
END

// Object 243: Refrigerator
Events:
   1 - 0027
   9 - 005D
[0027] (D8) printEgo([Text("After seeing this mess, I'd rather leave it alone.")]);
[005C] (00) stopObjectCode();
[005D] (D8) printEgo([Text("I'd rather not." + wait() + "There's probably nothing in there but an old egg.")]);
[00A2] (00) stopObjectCode();
END

// Object 244: Window 1
Events:
   1 - 0041
   2 - 006E
   6 - 0041
   7 - 0041
   9 - 002A
[002A] (D8) printEgo([Text("Nice day out there.")]);
[0040] (00) stopObjectCode();
[0041] (D8) printEgo([Text("This window hasn't been opened for years!")]);
[006D] (00) stopObjectCode();
[006E] (0A) startScript(60,[2]);
[0074] (00) stopObjectCode();
END

// Object 245: Chair
Events:
   6 - 0051
   7 - 0051
   9 - 0026
   B - 0051
[0026] (40) cutscene([]);
[0028] (11) animateCostume(1,12);
[002B] (2E) delay(20);
[002F] (11) animateCostume(1,3);
[0032] (D8) printEgo([Text("It's an upside-down chair.")]);
[004F] (C0) endCutscene();
[0050] (00) stopObjectCode();
[0051] (D8) printEgo([Text("I'll clean up another day.")]);
[006E] (00) stopObjectCode();
END

// Object 246: Books
Events:
   1 - 0029
   7 - 0029
   8 - 0029
   9 - 0029
   B - 0029
[0029] (D8) printEgo([Text("Medieval European history^" + wait() + "I'll leave them here.")]);
[005D] (00) stopObjectCode();
END

// Object 247: More Books
Events:
   1 - 002E
   7 - 002E
   8 - 002E
   9 - 002E
   B - 002E
[002E] (D8) printEgo([Text("Greek, German, Latin, Italian, French^" + wait() + "I sure had to learn a lot of languages when I was a kid.")]);
[0091] (00) stopObjectCode();
END

// Object 248: Window 2
Events:
   1 - 00A6
   2 - 00E1
   6 - 00A6
   7 - 00A6
   9 - 002A
[002A] (9D) if (classOfIs(VAR_ME,[6])) {
[0033] (40)   cutscene([]);
[0035] (DD)   setClass(VAR_ME,[134]);
[003C] (D8)   printEgo([Text("I can see into the neighbor's yard." + wait() + "Ooops!")]);
[006A] (AE)   WaitForMessage();
[006C] (11)   animateCostume(1,246);
[006F] (AE)   WaitForActor(1);
[0072] (D8)   printEgo([Text("How embarrassing!")]);
[0086] (C0)   endCutscene();
[0087] (18) } else {
[008A] (40)   cutscene([]);
[008C] (11)   animateCostume(1,246);
[008F] (AE)   WaitForActor(1);
[0092] (D8)   printEgo([Text("I'd rather not.")]);
[00A4] (C0)   endCutscene();
[00A5] (**) }
[00A5] (00) stopObjectCode();
[00A6] (D8) printEgo([Text("If I managed to open it, I'd never get it closed again.")]);
[00E0] (00) stopObjectCode();
[00E1] (0A) startScript(60,[2]);
[00E7] (00) stopObjectCode();
END

// Object 249: Window 3
Events:
   1 - 0038
   2 - 006E
   6 - 0038
   7 - 0038
   9 - 002A
[002A] (D8) printEgo([Text("Nice view!")]);
[0037] (00) stopObjectCode();
[0038] (D8) printEgo([Text("We're already getting enough air through the door!")]);
[006D] (00) stopObjectCode();
[006E] (0A) startScript(60,[2]);
[0074] (00) stopObjectCode();
END

// Object 250: Dresser
Events:
   1 - 0025
   2 - 0050
   9 - 0025
[0025] (D8) printEgo([Text("And go through Dad's underwear?" + wait() + "Never!")]);
[004F] (00) stopObjectCode();
[0050] (0A) startScript(60,[2]);
[0056] (00) stopObjectCode();
END

// Object 251: Yet More Books
Events:
   1 - 0032
   7 - 0032
   8 - 0032
   9 - 0032
   B - 0032
[0032] (D8) printEgo([Text("These are the books Dad used to read while falling asleep.")]);
[006F] (00) stopObjectCode();
END

// Object 252: Bed
Events:
   1 - 0054
   6 - 0054
   7 - 0054
   9 - 0027
   B - 0054
[0027] (40) cutscene([]);
[0029] (58) beginOverride();
[002B] (18) goto 0035;
[002E] (11) animateCostume(1,12);
[0031] (2E) delay(120);
[0035] (11) animateCostume(1,3);
[0038] (80) breakHere();
[0039] (D8) printEgo([Text("Nothing under the bed.")]);
[0052] (C0) endCutscene();
[0053] (00) stopObjectCode();
[0054] (D8) printEgo([Text("No, it's too heavy.")]);
[006A] (00) stopObjectCode();
END

// Object 253: Picture
Events:
   6 - 0052
   7 - 0052
   9 - 0028
   B - 0052
[0028] (D8) printEgo([Text("It's of our old house in Four Corners.")]);
[0051] (00) stopObjectCode();
[0052] (D8) printEgo([Text("No, I'll leave it here.")]);
[006C] (00) stopObjectCode();
END

