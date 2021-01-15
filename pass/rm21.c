/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 21: Indy's Office Inner (inner-off)
 */

// EN
[0000] (00) stopObjectCode();
END

// EX
[0000] (13) ActorOps(1,[Elevation(0)]);
[0006] (00) stopObjectCode();
END

Script# 200
[0000] (93) ActorOps(VAR_EGO,[Elevation(-6)]);
[0007] (C3) Local[0] = getActorX(VAR_EGO);
[000C] (A3) Local[1] = getActorY(VAR_EGO);
[0011] (80) breakHere();
[0012] (C3) VAR_RESULT = getActorX(VAR_EGO);
[0017] (88) if (VAR_RESULT != Local[0]) {
[001E] (18) } else {
[0021] (A3)   VAR_RESULT = getActorY(VAR_EGO);
[0026] (88)   if (VAR_RESULT != Local[1]) {
[002D] (18)   } else {
[0030] (18)     goto 0011;
[0033] (**)   }
[0033] (**) }
[0033] (93) ActorOps(VAR_EGO,[Elevation(0)]);
[003A] (A0) stopObjectCode();
END

Script# 201 // Get Package
[0000] (40) cutscene([2]);
[0005] (0A) startScript(200,[]);
[0008] (D0) pickupObject(VAR_ME);
[000B] (87) setState(VAR_ME,0);
[000F] (58) beginOverride();
[0011] (18) goto 0058;
[0014] (D8) printEgo([Text("Hmm, this looks important, but I'll leave this other junk here.")]);
[0056] (AE) WaitForMessage();
[0058] (14) print(255,[]);
[005B] (07) setState(145,1);
[005F] (29) setOwnerOf(145,0);
[0063] (29) setOwnerOf(146,0);
[0067] (29) setOwnerOf(147,0);
[006B] (C0) endCutscene();
[006C] (A0) stopObjectCode();
END

Script# 202 // Don't Need That
[0000] (D8) printEgo([Text("I don't need to take this with me.")]);
[0025] (A0) stopObjectCode();
END

// Object 143: Door
Events:
   1 - 003C
   2 - 0085
   A - 0022
[0022] (8F) if (getState(VAR_ME) == 1) {
[0028] (0C)   Resource.lockCostume(3);
[002B] (0C)   Resource.loadCostume(3);
[002E] (14)   print(255,[]);
[0031] (AE)   WaitForMessage();
[0033] (24)   loadRoomWithEgo(196,23,-1,-1);
[003B] (**) }
[003B] (00) stopObjectCode();
[003C] (1D) if (classOfIs(168,[134])) {
[0045] (D8)   printEgo([Text("I'd better not.  Those kids are still out there.")]);
[0078] (18) } else {
[007B] (0A)   startScript(26,[VAR_ME,196]);
[0084] (**) }
[0084] (00) stopObjectCode();
[0085] (0A) startScript(27,[VAR_ME,196]);
[008E] (00) stopObjectCode();
END

// Object 144: Window
Events:
   1 - 004C
   2 - 006D
   6 - 004C
   7 - 006D
   9 - 002D
   A - 0087
[002D] (D8) printEgo([Text("It's a beautiful day today.")]);
[004B] (00) stopObjectCode();
[004C] (8F) if (getState(VAR_ME) == 0) {
[0052] (87)   setState(VAR_ME,1);
[0056] (07)   setState(197,1);
[005A] (5D)   setClass(197,[6]);
[0061] (1C)   startSound(84);
[0063] (18) } else {
[0066] (0A)   startScript(60,[1]);
[006C] (**) }
[006C] (00) stopObjectCode();
[006D] (8F) if (getState(VAR_ME) == 1) {
[0073] (87)   setState(VAR_ME,0);
[0077] (07)   setState(197,0);
[007B] (1C)   startSound(85);
[007D] (18) } else {
[0080] (0A)   startScript(60,[2]);
[0086] (**) }
[0086] (00) stopObjectCode();
[0087] (8F) if (getState(VAR_ME) == 1) {
[008D] (14)   print(255,[]);
[0090] (AE)   WaitForMessage();
[0092] (24)   loadRoomWithEgo(197,24,-1,-1);
[009A] (**) }
[009A] (00) stopObjectCode();
END

// Object 145: Junk Mail
Events:
   1 - 0055
   9 - 003D
   A - 0039
   B - 002A
[002A] (D0) pickupObject(VAR_ME);
[002D] (87) setState(VAR_ME,0);
[0031] (07) setState(146,1);
[0035] (0A) startScript(200,[]);
[0038] (00) stopObjectCode();
[0039] (0A) startScript(200,[]);
[003C] (00) stopObjectCode();
[003D] (D8) printEgo([Text("It's just junk mail.")]);
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("It's nothing important.")]);
[006F] (00) stopObjectCode();
END

// Object 145: Junk Mail
Events:
   1 - 0055
   9 - 003D
   A - 0039
   B - 002A
[002A] (D0) pickupObject(VAR_ME);
[002D] (87) setState(VAR_ME,0);
[0031] (07) setState(146,1);
[0035] (0A) startScript(200,[]);
[0038] (00) stopObjectCode();
[0039] (0A) startScript(200,[]);
[003C] (00) stopObjectCode();
[003D] (D8) printEgo([Text("It's just junk mail.")]);
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("It's nothing important.")]);
[006F] (00) stopObjectCode();
END

// Object 146: Letters
Events:
   1 - 0056
   9 - 003B
   A - 0037
   B - 0028
[0028] (D0) pickupObject(VAR_ME);
[002B] (87) setState(VAR_ME,0);
[002F] (07) setState(147,1);
[0033] (0A) startScript(200,[]);
[0036] (00) stopObjectCode();
[0037] (0A) startScript(200,[]);
[003A] (00) stopObjectCode();
[003B] (D8) printEgo([Text("It's more junk letters.")]);
[0055] (00) stopObjectCode();
[0056] (D8) printEgo([Text("It's nothing important.")]);
[0070] (00) stopObjectCode();
END

// Object 147: Papers
Events:
   9 - 0037
   A - 0033
   B - 0024
[0024] (D0) pickupObject(VAR_ME);
[0027] (87) setState(VAR_ME,0);
[002B] (07) setState(148,1);
[002F] (0A) startScript(200,[]);
[0032] (00) stopObjectCode();
[0033] (0A) startScript(200,[]);
[0036] (00) stopObjectCode();
[0037] (D8) printEgo([Text("It's just papers, nothing important.")]);
[005E] (00) stopObjectCode();
END

// Object 148: Grail Diary
Events:
   1 - 00EA
   3 - 00CC
   9 - 0037
   A - 0033
   B - 002F
[002F] (0A) startScript(201,[]);
[0032] (00) stopObjectCode();
[0033] (0A) startScript(200,[]);
[0036] (00) stopObjectCode();
[0037] (A8) if (Bit[12]) {
[003C] (9D)   if (classOfIs(VAR_ME,[134])) {
[0045] (D8)     printEgo([Text("It has Hitler's autograph in it!")]);
[0068] (28)   } else if (!Bit[16]) {
[0070] (1A)     Bit[16] = 1;
[0075] (D8)     printEgo([Text("It's my father's Grail Diary!")]);
[0095] (**)   }
[0095] (48)   if (Var[115] == 9) {
[009C] (40)     cutscene([2]);
[00A1] (AE)     WaitForMessage();
[00A3] (C0)     endCutscene();
[00A4] (18)     goto 0174;
[00A7] (**)   }
[00A7] (18) } else {
[00AA] (D8)   printEgo([Text("It's a package from my father!")]);
[00CB] (**) }
[00CB] (00) stopObjectCode();
[00CC] (D8) printEgo([Text("No, I'll keep this myself.")]);
[00E9] (00) stopObjectCode();
[00EA] (28) if (!Bit[12]) {
[00EF] (1A)   Bit[12] = 1;
[00F4] (D4)   setObjectName(VAR_ME,"Grail Diary");
[0103] (18)   goto 006B;
[0106] (10)   VAR_RESULT = getObjectOwner(229);
[010B] (C8)   if (VAR_RESULT == VAR_EGO) {
[0112] (10)     VAR_RESULT = getObjectOwner(237);
[0117] (C8)     if (VAR_RESULT == VAR_EGO) {
[011E] (D8)       printEgo([Text("Now I have everything I need to begin my quest for my father and the Holy Grail!")]);
[0171] (**)     }
[0171] (**)   }
[0171] (18) } else {
[0174] (1A)   Local[0] = 0;
[0179] (D8)   printEgo([Text("I don't see anything pertinent right now.")]);
[01A5] (**) }
[01A5] (00) stopObjectCode();
END

// Object 149: Crystal Shard
Events:
   9 - 0028
   B - 00A5
[0028] (D8) printEgo([Text("It's just a chunk of crystal I found in a Mayan temple.  It's" + newline() + "of no use to me, but some flakes in San Francisco want it.")]);
[00A4] (00) stopObjectCode();
[00A5] (D8) printEgo([Text("It's of no interest to me.")]);
[00C2] (00) stopObjectCode();
END

// Object 150: Statue
Events:
   9 - 0021
   B - 0082
[0021] (40) cutscene([]);
[0023] (58) beginOverride();
[0025] (18) goto 0078;
[0028] (D8) printEgo([Text("It's a statue of a thousand-year-old falcon.")]);
[0057] (AE) WaitForMessage();
[0059] (D8) printEgo([Text("It really means a lot to me^")]);
[0078] (A8) if (VAR_OVERRIDE) {
[007D] (14)   print(255,[]);
[0080] (**) }
[0080] (C0) endCutscene();
[0081] (00) stopObjectCode();
[0082] (0A) startScript(202,[]);
[0085] (00) stopObjectCode();
END

// Script 151: Jar
Events:
   1 - 005B
   2 - 0083
   8 - 00D2
   9 - 0027
   B - 00A5
[0027] (D8) printEgo([Text("It's full of solvent.  I use it to clean things.")]);
[005A] (00) stopObjectCode();
[005B] (9D) if (classOfIs(VAR_ME,[6])) {
[0064] (DD)   setClass(VAR_ME,[134]);
[006B] (D8)   printEgo([Text("Phew!  What a smell!")]);
[0082] (**) }
[0082] (00) stopObjectCode();
[0083] (9D) if (classOfIs(VAR_ME,[134])) {
[008C] (DD)   setClass(VAR_ME,[6]);
[0093] (D8)   printEgo([Text("That's better.")]);
[00A4] (**) }
[00A4] (00) stopObjectCode();
[00A5] (D8) printEgo([Text("It's too dangerous to carry this with me.")]);
[00D1] (00) stopObjectCode();
[00D2] (48) if (Local[0] == 234) {
[00D9] (1D)   if (classOfIs(234,[6])) {
[00E2] (40)     cutscene([]);
[00E4] (58)     beginOverride();
[00E6] (18)     goto 0110;
[00E9] (11)     animateCostume(1,10);
[00EC] (2E)     delay(60);
[00F0] (1C)     startSound(91);
[00F2] (D8)     printEgo([Text("It seems to be working^")]);
[010C] (2E)     delay(120);
[0110] (3C)     stopSound(91);
[0112] (11)     animateCostume(1,3);
[0115] (D8)     printEgo([Text("Hey!  There's a key in here!")]);
[0134] (54)     setObjectName(234,"small key");
[0141] (5D)     setClass(234,[134]);
[0148] (C0)     endCutscene();
[0149] (18)   } else {
[014C] (D8)     printEgo([Text("It's already clean.")]);
[0162] (**)   }
[0162] (18) } else {
[0165] (0A)   startScript(3,[]);
[0168] (**) }
[0168] (00) stopObjectCode();
END

// Object 152: Stones
Events:
   9 - 001E
[001E] (D8) printEgo([Text("These are replicas of the Sankara Stones I recovered" + newline() + "about 3 years ago.")]);
[0069] (00) stopObjectCode();
END

// Object 153: SKulls
Events:
   9 - 0025
   B - 0021
[0021] (0A) startScript(202,[]);
[0024] (00) stopObjectCode();
[0025] (D8) printEgo([Text("They're just some old skulls.")]);
[0045] (00) stopObjectCode();
END

// Object 154: Totem Pole
Events:
   9 - 0029
   B - 0025
[0025] (0A) startScript(202,[]);
[0028] (00) stopObjectCode();
[0029] (D8) printEgo([Text("I recovered this from a strange Brazilian tribe that" + newline() + "worships dogs and rabbits.")]);
[007C] (00) stopObjectCode();
END

// Object 155: Ancient Tablet
Events:
   9 - 002D
   B - 0029
[0029] (0A) startScript(202,[]);
[002C] (00) stopObjectCode();
[002D] (D8) printEgo([Text("I haven't finished translating it, but I think it's a warning" + newline() + "about aliens in disguises.")]);
[0089] (00) stopObjectCode();
END

// Object 156: Medal
Events:
   9 - 0024
   B - 0020
[0020] (0A) startScript(202,[]);
[0023] (00) stopObjectCode();
[0024] (D8) printEgo([Text("I won this medal in a boxing tournament.")]);
[004F] (00) stopObjectCode();
END

// Object 157: Globe
Events:
   9 - 0024
   B - 0020
[0020] (0A) startScript(202,[]);
[0023] (00) stopObjectCode();
[0024] (D8) printEgo([Text("It's the Earth.")]);
[0036] (00) stopObjectCode();
END

// Object 158: Hot Water Heater
Events:
   4 - 0041
   5 - 0055
   9 - 002E
[002E] (D8) printEgo([Text("It's very warm.")]);
[0040] (00) stopObjectCode();
[0041] (D8) printEgo([Text("It's already on.")]);
[0054] (00) stopObjectCode();
[0055] (D8) printEgo([Text("I'd better not.  The college needs its hot water.")]);
[0089] (00) stopObjectCode();
END

// Object 159: Map
Events:
   9 - 0022
   B - 001E
[001E] (0A) startScript(202,[]);
[0021] (00) stopObjectCode();
[0022] (D8) printEgo([Text("It's a strange map drawn with crayons.")]);
[004B] (00) stopObjectCode();
END

// Object 160: Statues
Events:
   9 - 0026
   B - 0022
[0022] (0A) startScript(202,[]);
[0025] (00) stopObjectCode();
[0026] (D8) printEgo([Text("These were given to me by a student in Sculpture 101.")]);
[005E] (00) stopObjectCode();
END

// Object 161: Crystal Ball
Events:
   8 - 002E
   9 - 002E
   B - 002A
[002A] (0A) startScript(202,[]);
[002D] (00) stopObjectCode();
[002E] (D8) printEgo([Text("I see some difficult times ahead!")]);
[0052] (00) stopObjectCode();
END

// Object 162: Junk
Events:
   9 - 0023
   B - 001F
[001F] (0A) startScript(202,[]);
[0022] (00) stopObjectCode();
[0023] (D8) printEgo([Text("^just some old books and worthless trinkets.")]);
[0052] (00) stopObjectCode();
END

// Object 163: Halloween Mask
Events:
   9 - 0023
   B - 001F
[001F] (0A) startScript(202,[]);
[0022] (00) stopObjectCode();
[0023] (D8) printEgo([Text("I used this for Halloween when I was a boy.")]);
[0051] (00) stopObjectCode();
END

// Object 164: Kinshasa Mask
Events:
   9 - 0023
   B - 001F
[001F] (0A) startScript(202,[]);
[0022] (00) stopObjectCode();
[0023] (D8) printEgo([Text("I got this from an African shaman near Kinshasa.")]);
[0056] (00) stopObjectCode();
END

// Object 165: Rock
Events:
   9 - 0023
   B - 001F
[001F] (0A) startScript(202,[]);
[0022] (00) stopObjectCode();
[0023] (D8) printEgo([Text("I believe this is a fragment of a meteor.  I don't know why" + newline() + "it oozes purple slime, though^")]);
[0081] (00) stopObjectCode();
END
