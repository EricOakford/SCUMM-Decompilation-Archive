/**
 * Zak McKracken: V2 Retail
 * 
 * Room 19: Katmandu Temple
 */

// EN
[0000] (9A) Var[199] = Var[234];
[0003] (13) ActorOps(10,[TalkColor(7)]);
[0007] (13) ActorOps(10,[Costume(22)]);
[000B] (53) ActorOps(10,[Name("Guru")]);
[0014] (53) ActorOps(10,[Sound(Var[234])]);
[0018] (9A) Var[50] = Var[234];
[001B] (19) doSentence(250,381,0,1);
[0022] (19) doSentence(253,382,0,1);
[0029] (68) VAR_RESULT = isScriptRunning(42);
[002C] (28) if (!VAR_RESULT) {
[0030] (42)   startScript(42);
[0032] (2D)   putActorInRoom(10,19);
[0035] (01)   putActor(10,60,56);
[0039] (11)   animateActor(10,251);
[003C] (**) }
[003C] (00) stopObjectCode();
END

// EX
END

// Object 375
Events:
   D - 0017
[0017] (53) ActorOps(10,[Name()]);
[001C] (9A) Var[199] = Var[235];
[001F] (60) cursorCommand(1, 0);
[0022] (07) setState08(351);
[0025] (17) clearState02(351);
[0028] (24) loadRoomWithEgo(351,17,255,255);
[002E] (00) stopObjectCode();
END

// Object 376
Events:
   C - 0021
[0021] (19) doSentence(12,378,0,0);
[0028] (00) stopObjectCode();
END

// Object 377
Events:
   C - 0018
[0018] (D8) printEgo("Buy `How To Raise Your Consciousness\x01And Lower Your Golf Scores`,\x03available at airports around the world.");
[0075] (00) stopObjectCode();
END

// Object 378
Events:
   C - 001B
[001B] (D8) printEgo("It's a picture of \x02");
[002C] (B1) VAR_RESULT = getBitVar(1458,VAR_EGO);
[0031] (A8) if (VAR_RESULT) {
[0035] (D8)   printEgo("my friend, the Witch\x01Doctor, \x02");
[0051] (18) } else {
[0054] (D8)   printEgo("an African Shaman\x01\x02");
[0067] (**) }
[0067] (D8) printEgo("and the Guru playing golf.");
[007F] (00) stopObjectCode();
END

// Object 379
Events:
END

// Object 380
Events:
   C - 001E
[001E] (D8) printEgo("Awarded to Swami Holanwanda:\x03For a record-shattering score of 19 at\x01Pebble Beach.");
[0067] (00) stopObjectCode();
END

// Object 381
Events:
  FD - 0013
[0013] (80) breakHere();
[0014] (16) Var[49] = getRandomNr(5);
[0017] (5A) Var[49] += 381;
[001B] (85) drawObject(Var[49],55,5);
[001F] (16) Var[49] = getRandomNr(5);
[0022] (5A) Var[49] += 381;
[0026] (85) drawObject(Var[49],65,5);
[002A] (16) Var[49] = getRandomNr(5);
[002D] (5A) Var[49] += 381;
[0031] (85) drawObject(Var[49],51,5);
[0035] (16) Var[49] = getRandomNr(5);
[0038] (5A) Var[49] += 381;
[003C] (85) drawObject(Var[49],69,5);
[0040] (16) Var[49] = getRandomNr(5);
[0043] (5A) Var[49] += 381;
[0047] (85) drawObject(Var[49],53,4);
[004B] (16) Var[49] = getRandomNr(5);
[004E] (5A) Var[49] += 381;
[0052] (85) drawObject(Var[49],67,4);
[0056] (16) Var[49] = getRandomNr(5);
[0059] (5A) Var[49] += 381;
[005D] (85) drawObject(Var[49],56,2);
[0061] (18) goto 0013;
[0064] (00) stopObjectCode();
END

// Object 382
Events:
  FD - 0013
[0013] (9A) Var[203] = Var[235];
[0016] (80) breakHere();
[0017] (48) if (VAR_ACTIVE_VERB == 3) {
[001D] (48)   if (VAR_ACTIVE_OBJECT2 == 10) {
[0023] (BB)     waitForActor(VAR_EGO);
[0025] (48)     if (VAR_ACTIVE_OBJECT1 == 44) {
[002B] (14)       print(10,"I already have a great sand wedge,\x01but I have a friend who needs one.");
[0066] (9D)     } else if (classOfIs(VAR_ACTIVE_OBJECT1,32)) {
[006E] (14)       print(10,"You'd better hold on to that!");
[0089] (18)     } else {
[008C] (14)       print(10,"I have no need of your earthly\x01possessions.");
[00B4] (**)     }
[00B4] (9A)     VAR_ACTIVE_OBJECT2 = Var[234];
[00B7] (AE)     waitForMessage();
[00B8] (11)     animateActor(10,247);
[00BB] (**)   }
[00BB] (**) }
[00BB] (18) goto 0016;
[00BE] (00) stopObjectCode();
END

// Object 383
Events:
  FD - 0013
[0013] (9A) Var[50] = Var[225];
[0016] (2E) delay(600);
[001A] (C6) Var[50]--;
[001C] (28) unless (!Var[50]) goto 0016;
[0020] (9A) Var[225] = Var[234];
[0023] (9A) Var[50] = Var[235];
[0026] (5B) setBitVar(1559,5,Var[235]);
[002B] (42) startScript(42);
[002D] (00) stopObjectCode();
END

// Object 384
Events:
END
