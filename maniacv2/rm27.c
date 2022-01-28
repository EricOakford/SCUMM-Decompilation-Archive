/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 27: Den
 */

// EN
// NOTE: "ERROR: do_actorops_v12: unknown subop 61!"

// Object 99: Door to Hallway
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(464);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(464);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(464,38,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 100: Man-Eating Plant
Events:
   B - 0023
[0023] (39) doSentence(11,304,VAR_ACTIVE_OBJECT2,0);
[0029] (00) stopObjectCode();
END

// Object 101: Paint Blotch
Events:
   B - 001F
[001F] (48) if (VAR_ACTIVE_OBJECT2 == 200) {
[0025] (29)   setOwnerOf(200,14);
[0029] (07)   setState08(101);
[002C] (57)   setState02(101);
[002F] (**) }
[002F] (00) stopObjectCode();
END

// Object 102: Attic Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(223);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(223);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(223,15,255,255);
[0031] (**) }
[0031] (00) stopObjectCode();
END

// Object 232: Hatch
Events:
   D - 0018
[0018] (24) loadRoomWithEgo(252,28,255,255);
[001E] (00) stopObjectCode();
END

// Object 302: Fireplace
Events:
END

// Object 303: Family Portrait
Events:
   1 - 0024
   A - 0024
[0024] (42) startScript(67);
[0026] (00) stopObjectCode();
END

// Object 304: Pot for Plant
Events:
   B - 0020
[0020] (48) if (VAR_ACTIVE_OBJECT2 == 123) {
[0026] (48)   if (Var[168] == 2) {
[002C] (1A)     Var[168] = 0;
[0030] (46)     Var[174]++;
[0032] (**)   }
[0032] (48)   if (Var[168] == 3) {
[0038] (1A)     Var[168] = 0;
[003C] (1A)     Var[174] = 255;
[0040] (**)   }
[0040] (42)   startScript(80);
[0042] (42)   startScript(54);
[0044] (**) }
[0044] (48) if (VAR_ACTIVE_OBJECT2 == 132) {
[004A] (48)   if (Var[166] == 2) {
[0050] (1A)     Var[166] = 0;
[0054] (5A)     Var[174] += 2;
[0058] (**)   }
[0058] (48)   if (Var[166] == 3) {
[005E] (1A)     Var[166] = 0;
[0062] (1A)     Var[174] = 255;
[0066] (**)   }
[0066] (42)   startScript(79);
[0068] (42)   startScript(54);
[006A] (**) }
[006A] (48) if (Var[174] == 255) {
[0070] (D8)   printEgo("I killed it!");
[007C] (18) } else {
[007F] (38)   if (Var[174] >= 3) {
[0085] (1A)     Var[174] = 2;
[0089] (**)   }
[0089] (42)   startScript(54);
[008B] (**) }
[008B] (48) if (VAR_ACTIVE_OBJECT2 == 93) {
[0091] (29)   setOwnerOf(93,0);
[0095] (1A)   Var[193] = 1;
[0099] (42)   startScript(54);
[009B] (**) }
[009B] (00) stopObjectCode();
END

// Object 416: Typewriter
Events:
   6 - 001F
   B - 003E
[001F] (48) if (VAR_ACTIVE_OBJECT2 == 210) {
[0025] (42)   startScript(16);
[0027] (18) } else {
[002A] (D8)   printEgo("That's ridiculous!");
[003D] (**) }
[003D] (00) stopObjectCode();
[003E] (48) if (VAR_ACTIVE_OBJECT2 == 210) {
[0044] (42)   startScript(16);
[0046] (**) }
[0046] (48) if (VAR_ACTIVE_OBJECT2 == 222) {
[004C] (B1)   VAR_RESULT = getBitVar(2968,VAR_EGO);
[0051] (48)   if (VAR_RESULT == 1) {
[0057] (48)     if (Var[104] == 0) {
[005D] (D8)       printEgo("Ok, I'll type the publisher's address.");
[0080] (42)       startScript(113);
[0082] (1A)       Var[104] = 1;
[0086] (18)     } else {
[0089] (D8)       printEgo("It's already addressed.");
[00A0] (**)     }
[00A0] (18)   } else {
[00A3] (D8)     printEgo("I don't know what to type on it!");
[00BE] (**)   }
[00BE] (**) }
[00BE] (00) stopObjectCode();
END

// Object 417: Desk
Events:
END


// Object 418: Plant
Events:
END
