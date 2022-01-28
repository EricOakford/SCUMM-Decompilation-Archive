/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 26: Ed's Room
 */

// EX
[0000] (01) putActor(1,0,5);
[0004] (00) stopObjectCode();
[0005] (9B) setBitVar(2936,Var[113],1);
[000A] (62) stopScript(96);
[000C] (62) stopScript(116);
[000E] (03) VAR_RESULT = getActorRoom(11);
[0011] (48) if (VAR_RESULT == 26) {
[0017] (62)   stopScript(91);
[0019] (**) }
[0019] (00) stopObjectCode();
END

// Object 34: Hamster
Events:
   3 - 002B
   B - 0025
   E - 001E
[001E] (1A) Var[106] = 0;
[0022] (42) startScript(116);
[0024] (00) stopObjectCode();
[0025] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002A] (00) stopObjectCode();
[002B] (42) startScript(94);
[002D] (00) stopObjectCode();
END

// Object 35: Piggy Bank
Events:
   1 - 0057
   2 - 0062
   6 - 0062
   E - 0023
[0023] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0027] (D8)   printEgo("Ouch!");
[002E] (1A)   Var[123] = 35;
[0032] (42)   startScript(116);
[0034] (18) } else {
[0037] (D8)   printEgo("It's nailed and glued to the table.");
[0056] (**) }
[0056] (00) stopObjectCode();
[0057] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[005B] (1A)   Var[123] = 35;
[005F] (42)   startScript(116);
[0061] (**) }
[0061] (00) stopObjectCode();
[0062] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[0066] (D8)   printEgo("It looks hopeless!");
[0078] (1A)   Var[123] = 35;
[007C] (42)   startScript(116);
[007E] (**) }
[007E] (00) stopObjectCode();
END

// Object 36: Dime 1
Events:
   B - 001C
   E - 0019
[0019] (42) startScript(116);
[001B] (00) stopObjectCode();
[001C] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0021] (00) stopObjectCode();
END

// Object 37: Dime 2
Events:
   B - 001C
   E - 0019
[0019] (42) startScript(116);
[001B] (00) stopObjectCode();
[001C] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0021] (00) stopObjectCode();
END

// Object 38: Dime 3
Events:
   B - 001C
   E - 0019
[0019] (42) startScript(116);
[001B] (00) stopObjectCode();
[001C] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0021] (00) stopObjectCode();
END

// Object 39: Door
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(462);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(462);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (24)   loadRoomWithEgo(462,38,255,255);
[0031] (60)   cursorCommand(247, 1);
[0034] (**) }
[0034] (00) stopObjectCode();
END

// Object 104: Card Key
Events:
   B - 0030
   C - 0022
   E - 001F
[001F] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0021] (00) stopObjectCode();
[0022] (D8) printEgo("This side up.");
[002F] (00) stopObjectCode();
[0030] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[0035] (00) stopObjectCode();
END

// Object 270: Pennant
Events:
   C - 001A
[001A] (D8) printEgo("L.F.L.U. Rah!");
[0028] (00) stopObjectCode();
END

// Object 271: Fighter Jet
Events:
END

// Object 272: X-Wing Model
Events:
END

// Object 273: Strategic Commando Chart
Events:
   C - 002B
[002B] (D8) printEgo("Hmm. It doesn't make any sense.");
[0047] (00) stopObjectCode();
END

// Object 274: Bed
Events:
END

// Object 275: Window
Events:
END
