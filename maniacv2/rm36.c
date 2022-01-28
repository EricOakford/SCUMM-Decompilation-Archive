/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 36: Pantry
 */

// EN
[0000] (61) putActor(0,VAR_EGO,VAR_EGO);
END

// Object 124: Door to Dining Room
Events:
   1 - 001B
   2 - 0021
   D - 0027
[001B] (42) startScript(10);
[001D] (07) setState08(98);
[0020] (00) stopObjectCode();
[0021] (42) startScript(11);
[0023] (47) clearState08(98);
[0026] (00) stopObjectCode();
[0027] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[002B] (48)   if (Var[129] == 0) {
[0031] (1A)     Var[129] = 1;
[0035] (42)     startScript(139);
[0037] (**)   }
[0037] (24)   loadRoomWithEgo(98,37,255,255);
[003D] (**) }
[003D] (00) stopObjectCode();
END

// Object 125: Door to Pool
Events:
   1 - 0021
   2 - 0030
   8 - 0036
   B - 0036
   D - 005B
  10 - 004E
[0021] (AF) if (!getState04(VAR_ACTIVE_OBJECT1)) {
[0025] (42)   startScript(10);
[0027] (07)   setState08(137);
[002A] (18) } else {
[002D] (42)   startScript(69);
[002F] (**) }
[002F] (00) stopObjectCode();
[0030] (42) startScript(11);
[0032] (47) clearState08(137);
[0035] (00) stopObjectCode();
[0036] (48) if (VAR_ACTIVE_OBJECT2 == 158) {
[003C] (E7)   clearState04(VAR_ACTIVE_OBJECT1);
[003E] (67)   clearState04(137);
[0041] (19)   doSentence(1,125,0,0);
[0048] (18) } else {
[004B] (42)   startScript(71);
[004D] (**) }
[004D] (00) stopObjectCode();
[004E] (A7) setState04(VAR_ACTIVE_OBJECT1);
[0050] (27) setState04(137);
[0053] (19) doSentence(2,125,0,0);
[005A] (00) stopObjectCode();
[005B] (CF) if (getState08(VAR_ACTIVE_OBJECT1)) {
[005F] (24)   loadRoomWithEgo(137,6,255,255);
[0065] (**) }
[0065] (00) stopObjectCode();
END

// Object 127: Bottle of Developer
Events:
   E - 0026
[0026] (47) clearState08(131);
[0029] (47) clearState08(65);
[002C] (17) clearState02(65);
[002F] (87) setState08(VAR_ACTIVE_OBJECT1);
[0031] (D7) setState02(VAR_ACTIVE_OBJECT1);
[0033] (1C) startSound(10);
[0035] (D8) printEgo("Whoops!");
[003E] (00) stopObjectCode();
END

// Object 128: Tentacle Chow
Events:
   3 - 0025
   E - 0022
[0022] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0024] (00) stopObjectCode();
[0025] (42) startScript(103);
[0027] (00) stopObjectCode();
END

// Object 129: Canned Goods
Events:
   3 - 0024
   E - 0021
[0021] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0023] (00) stopObjectCode();
[0024] (42) startScript(103);
[0026] (00) stopObjectCode();
END

// Object 130: Fruit Drinks
Events:
   3 - 0024
   E - 0021
[0021] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0023] (00) stopObjectCode();
[0024] (42) startScript(104);
[0026] (00) stopObjectCode();
END

// Object 131: Grate
Events:
   1 - 001C
   A - 001C
   E - 001C
[001C] (8F) if (!getState08(VAR_ACTIVE_OBJECT1)) {
[0020] (D8)   printEgo("Yech, broken glass!");
[0033] (18) } else {
[0036] (D8)   printEgo("It's welded into the floor.");
[004F] (**) }
[004F] (00) stopObjectCode();
END

// Object 132: Glass Jar
Events:
   3 - 0030
   B - 002A
   E - 0027
[0027] (D0) pickupObject(VAR_ACTIVE_OBJECT1);
[0029] (00) stopObjectCode();
[002A] (79) doSentence(11,VAR_ACTIVE_OBJECT2,VAR_ACTIVE_OBJECT1,0);
[002F] (00) stopObjectCode();
[0030] (48) if (VAR_ACTIVE_OBJECT2 == 19) {
[0036] (19)   doSentence(11,304,132,0);
[003D] (78) } else if (VAR_ACTIVE_OBJECT2 < 8) {
[0046] (E9)   setOwnerOf(VAR_ACTIVE_OBJECT1,VAR_ACTIVE_OBJECT2);
[0049] (44) } else if (Var[166] > 0) {
[0052] (1A)   Var[150] = 1;
[0056] (42)   startScript(104);
[0058] (**) }
[0058] (00) stopObjectCode();
END

// Object 326: Shelves
Events:
END
