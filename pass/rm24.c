/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 24: College Exterior (col-ext)
 */

// EN
[0000] (30) setBoxFlags(2,0);
[0004] (1A) Var[101] = 200;
[0009] (68) VAR_RESULT = isScriptRunning(73);
[000D] (28) if (!VAR_RESULT) {
[0012] (13)   ActorOps(1,[Costume(10),WalkSpeed(4,2),Width(8)]);
[001C] (0F)   if (getState(204) == 0) {
[0022] (0A)     startScript(46,[]);
[0025] (**)   }
[0025] (**) }
[0025] (08) if (VAR_WALKTO_OBJ != 203) {
[002C] (07)   setState(203,0);
[0030] (07)   setState(100,0);
[0034] (**) }
[0034] (0A) startScript(21,[5]);
[003A] (7A) VerbOps(90,[Text("To Henry's House"),Off()]);
[0050] (7A) VerbOps(91,[Text("To the Plane to Venice"),Off()]);
[006C] (7A) VerbOps(92,[Text("Cancel"),Off()]);
[0078] (AB) saveVerbs(90,92,6);
[007D] (0A) startScript(21,[2]);
[0083] (00) stopObjectCode();
END

// EX
[0000] (68) VAR_RESULT = isScriptRunning(65);
[0004] (28) if (!VAR_RESULT) {
[0009] (68)   VAR_RESULT = isScriptRunning(73);
[000D] (28)   if (!VAR_RESULT) {
[0012] (13)     ActorOps(1,[Costume(1),WalkSpeed(8,2),Width(16)]);
[001C] (**)   }
[001C] (0A)   startScript(21,[5]);
[0022] (AB)   restoreVerbs(90,92,6);
[0027] (1A)   Var[101] = 0;
[002C] (0A)   startScript(21,[2]);
[0032] (**) }
[0032] (00) stopObjectCode();
END

Script# 200
[0000] (0A) startScript(21,[5]);
[0006] (1A) VAR_VERB_SCRIPT = 201;
[000B] (AB) restoreVerbs(90,92,6);
[0010] (7A) VerbOps(90,[On()]);
[0014] (28) if (!Bit[13]) {
[0019] (7A)   VerbOps(91,[On()]);
[001D] (**) }
[001D] (7A) VerbOps(92,[On()]);
[0021] (1A) Var[190] = 0;
[0026] (80) breakHere();
[0027] (A8) unless (Var[190]) goto 0026;
[002C] (1A) VAR_VERB_SCRIPT = 72;
[0031] (48) if (Var[190] == 90) {
[0038] (24)   loadRoomWithEgo(231,27,-1,-1);
[0040] (48) } else if (Var[190] == 91) {
[004A] (A8)   if (Bit[14]) {
[004F] (2D)     putActorInRoom(1,25);
[0052] (01)     putActor(1,472,120);
[0058] (11)     animateCostume(1,249);
[005B] (52)     actorFollowCamera(1);
[005D] (18)   } else {
[0060] (0A)     startScript(52,[]);
[0063] (**)   }
[0063] (48) } else if (Var[190] == 92) {
[006D] (AB)   saveVerbs(90,92,6);
[0072] (0A)   startScript(21,[2]);
[0078] (18)   /* goto 007B; */
[007B] (**) }
[007B] (A0) stopObjectCode();
END

Script# 201
[0000] (48) if (Local[0] == 1) {
[0007] (9A)   Var[190] = Local[1];
[000C] (**) }
[000C] (A0) stopObjectCode();
END

// Object 197: Window
Events:
   1 - 0038
   2 - 0041
   A - 0024
[0024] (8F) if (getState(VAR_ME) == 1) {
[002A] (14)   print(255,[]);
[002D] (AE)   WaitForMessage();
[002F] (24)   loadRoomWithEgo(144,21,-1,-1);
[0037] (**) }
[0037] (00) stopObjectCode();
[0038] (37) startObject(198,81,[VAR_ME]);
[0040] (00) stopObjectCode();
[0041] (37) startObject(198,82,[VAR_ME]);
[0049] (00) stopObjectCode();
END

// Object 198: Window 2
Events:
  51 - 0021
  52 - 0067
[0021] (9D) if (classOfIs(Local[0],[134])) {
[002A] (D8)   printEgo([Text("It's latched from the other side.")]);
[004E] (8F) } else if (getState(Local[0]) == 0) {
[0057] (87)   setState(Local[0],1);
[005B] (1C)   startSound(85);
[005D] (18) } else {
[0060] (0A)   startScript(60,[1]);
[0066] (**) }
[0066] (00) stopObjectCode();
[0067] (8F) if (getState(Local[0]) == 1) {
[006D] (87)   setState(Local[0],0);
[0071] (1C)   startSound(85);
[0073] (18) } else {
[0076] (0A)   startScript(60,[2]);
[007C] (**) }
[007C] (00) stopObjectCode();
END

// Object 199: Window 3
Events:
   1 - 0021
   2 - 002A
[0021] (37) startObject(198,81,[VAR_ME]);
[0029] (00) stopObjectCode();
[002A] (37) startObject(198,82,[VAR_ME]);
[0032] (00) stopObjectCode();
END

// Object 200: Window 4
Events:
END

// Object 201: Window 5
Events:
   1 - 0021
   2 - 002A
[0021] (37) startObject(198,81,[VAR_ME]);
[0029] (00) stopObjectCode();
[002A] (37) startObject(198,82,[VAR_ME]);
[0032] (00) stopObjectCode();
END

// Object 202: Window 6
Events:
END

// Object 203: Door
Events:
   1 - 0036
   2 - 0040
   A - 0022
[0022] (8F) if (getState(VAR_ME) == 1) {
[0028] (14)   print(255,[]);
[002B] (AE)   WaitForMessage();
[002D] (24)   loadRoomWithEgo(100,20,-1,-1);
[0035] (**) }
[0035] (00) stopObjectCode();
[0036] (0A) startScript(26,[VAR_ME,100]);
[003F] (00) stopObjectCode();
[0040] (0A) startScript(27,[VAR_ME,100]);
[0049] (00) stopObjectCode();
END

// Object 204
Events:
END

// Object 205
Events:
END

// Object 206
Events:
END

// Object 207
Events:
END