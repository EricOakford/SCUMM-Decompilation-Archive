/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 25: College Gym (gym)
 */

// EN
[0000] (2A) startScript(200,[],F);
[0003] (2A) startScript(201,[],F);
[0006] (2A) startScript(202,[],F);
[0009] (5D) setClass(9,[0]);
[0010] (2D) putActorInRoom(9,25);
[0013] (01) putActor(9,256,86);
[0019] (11) animateCostume(9,248);
[001C] (13) ActorOps(9,[Costume(8),Sound(86),TalkColor(2)]);
[0025] (68) VAR_RESULT = isScriptRunning(56);
[0029] (28) if (!VAR_RESULT) {
[002E] (2A)   startScript(204,[],F);
[0031] (**) }
[0031] (0F) if (getState(219) == 1) {
[0037] (2A)   startScript(205,[],F);
[003A] (**) }
[003A] (30) setBoxFlags(6,128);
[003E] (30) setBoxFlags(7,128);
[0042] (48) if (VAR_WALKTO_OBJ == 211) {
[0049] (0A)   startScript(206,[]);
[004C] (**) }
[004C] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (48) if (VAR_MACHINE_SPEED == 0) {
[0007] (05)   drawObject(208,255,255);
[000E] (62)   stopScript(0);
[0010] (**) }
[0010] (AC) Exprmode Local[2] = (<VAR_RESULT = getRandomNr(4)> + 1);
[001D] (16) VAR_RESULT = getRandomNr(1);
[0021] (A8) if (VAR_RESULT) {
[0026] (1A)   Local[0] = 1;
[002B] (1A)   Local[4] = 208;
[0030] (85)   drawObject(Local[4],255,255);
[0037] (80)   breakHere();
[0038] (80)   breakHere();
[0039] (46)   Local[4]++;
[003C] (44)   unless (Local[4] > 210) goto 0030;
[0043] (05)   drawObject(209,255,255);
[004A] (AC)   Exprmode Local[1] = (<VAR_RESULT = getRandomNr(18)> + 6);
[0057] (2B)   delayVariable(Local[1]);
[005A] (46)   Local[0]++;
[005D] (C4)   unless (Local[0] > Local[2]) goto 002B;
[0064] (18) } else {
[0067] (1A)   Local[0] = 1;
[006C] (1A)   Local[4] = 208;
[0071] (85)   drawObject(Local[4],255,255);
[0078] (80)   breakHere();
[0079] (80)   breakHere();
[007A] (46)   Local[4]++;
[007D] (44)   unless (Local[4] > 209) goto 0071;
[0084] (AC)   Exprmode Local[1] = (<VAR_RESULT = getRandomNr(6)> + 6);
[0091] (2B)   delayVariable(Local[1]);
[0094] (46)   Local[0]++;
[0097] (C4)   unless (Local[0] > Local[2]) goto 006C;
[009E] (**) }
[009E] (18) goto 0010;
[00A1] (A0) stopObjectCode();
END

Script# 201
[0000] (48) if (VAR_MACHINE_SPEED == 0) {
[0007] (05)   drawObject(212,255,255);
[000E] (62)   stopScript(0);
[0010] (**) }
[0010] (05) drawObject(212,255,255);
[0017] (AC) Exprmode Local[0] = ((<VAR_RESULT = getRandomNr(5)> + 3) * 60);
[0028] (2B) delayVariable(Local[0]);
[002B] (05) drawObject(215,255,255);
[0032] (AC) Exprmode Local[0] = ((<VAR_RESULT = getRandomNr(7)> + 2) * 60);
[0043] (2B) delayVariable(Local[0]);
[0046] (18) goto 0010;
[0049] (A0) stopObjectCode();
END

Script# 202
[0000] (48) if (VAR_MACHINE_SPEED == 0) {
[0007] (05)   drawObject(216,255,255);
[000E] (62)   stopScript(0);
[0010] (**) }
[0010] (05) drawObject(216,255,255);
[0017] (AC) Exprmode Local[0] = ((<VAR_RESULT = getRandomNr(5)> + 2) * 60);
[0028] (2B) delayVariable(Local[0]);
[002B] (05) drawObject(211,255,255);
[0032] (2E) delay(120);
[0036] (18) goto 0010;
[0039] (A0) stopObjectCode();
END

Script# 203
[0000] (40) cutscene([1]);
[0005] (30) setBoxFlags(7,0);
[0009] (1E) walkActorTo(1,88,73);
[000F] (2E) delay(120);
[0013] (71) VAR_RESULT = getActorCostume(1);
[0017] (48) if (VAR_RESULT == 1) {
[001E] (13)   ActorOps(1,[Costume(7)]);
[0023] (1E)   walkActorTo(1,148,104);
[0029] (AE)   WaitForActor(1);
[002C] (5D)   setClass(1,[150]);
[0033] (01)   putActor(1,148,104);
[0039] (13)   ActorOps(1,[Costume(12)]);
[003E] (11)   animateCostume(1,6);
[0041] (1A)   Local[0] = 1;
[0046] (80)   breakHere();
[0047] (46)   Local[0]++;
[004A] (44)   unless (Local[0] > 10) goto 0046;
[0051] (5D)   setClass(1,[22]);
[0058] (01)   putActor(1,170,85);
[005E] (13)   ActorOps(1,[Costume(7)]);
[0063] (80)   breakHere();
[0064] (62)   stopScript(204);
[0066] (11)   animateCostume(9,3);
[0069] (80)   breakHere();
[006A] (1E)   walkActorTo(1,224,86);
[0070] (AE)   WaitForActor(1);
[0073] (11)   animateCostume(1,249);
[0076] (13)   ActorOps(1,[Costume(9),Sound(86)]);
[007D] (18) } else {
[0080] (13)   ActorOps(1,[Costume(1),Sound(74)]);
[0087] (1E)   walkActorTo(1,120,85);
[008D] (AE)   WaitForActor(1);
[0090] (**) }
[0090] (30) setBoxFlags(7,128);
[0094] (C0) endCutscene();
[0095] (71) VAR_RESULT = getActorCostume(1);
[0099] (08) if (VAR_RESULT != 1) {
[00A0] (42)   chainScript(56,[]);
[00A3] (**) }
[00A3] (A0) stopObjectCode();
END

Script# 204
[0000] (AC) Exprmode Local[1] = (<VAR_RESULT = getRandomNr(5)> + 6);
[000D] (51) animateCostume(9,Local[1]);
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (18) goto 0000;
[0017] (A0) stopObjectCode();
END

Script# 205
[0000] (80) breakHere();
[0001] (34) VAR_RESULT = getDist(1,218);
[0008] (44) unless (VAR_RESULT > 5) goto 0000;
[000F] (40) cutscene([1]);
[0014] (11) animateCostume(1,255);
[0017] (29) setOwnerOf(219,0);
[001B] (29) setOwnerOf(219,15);
[001F] (36) walkActorToObject(1,219);
[0023] (D8) printEgo([Text("The mallet's chained to the bell.")]);
[0047] (AE) WaitForActor(1);
[004A] (01) putActor(1,178,125);
[0050] (11) animateCostume(1,10);
[0053] (80) breakHere();
[0054] (80) breakHere();
[0055] (07) setState(219,0);
[0059] (1C) startSound(93);
[005B] (80) breakHere();
[005C] (11) animateCostume(1,3);
[005F] (5D) setClass(219,[24]);
[0066] (C0) endCutscene();
[0067] (A0) stopObjectCode();
END

Script# 206
[0000] (40) cutscene([]);
[0002] (30) setBoxFlags(6,0);
[0006] (5D) setClass(1,[150,149]);
[0010] (80) breakHere();
[0011] (AE) WaitForActor(1);
[0014] (30) setBoxFlags(6,128);
[0018] (5D) setClass(1,[22,21]);
[0022] (43) Local[0] = getActorX(1);
[0027] (23) Local[1] = getActorY(1);
[002C] (61) putActor(1,Local[0],Local[1]);
[0032] (C0) endCutscene();
[0033] (A0) stopObjectCode();
END

// Object 208
Events:
END

// Object 209
Events:
END

// Object 210
Events:
END

// Object 211
Events:
END

// Object 212
Events:
END

// Object 213: Door
Events:
   1 - 0022
   2 - 003F
   A - 006A
[0022] (8F) if (getState(VAR_ME) == 0) {
[0028] (40)   cutscene([]);
[002A] (11)   animateCostume(1,10);
[002D] (80)   breakHere();
[002E] (11)   animateCostume(1,3);
[0031] (0A)   startScript(26,[]);
[0034] (C0)   endCutscene();
[0035] (18) } else {
[0038] (0A)   startScript(60,[1]);
[003E] (**) }
[003E] (00) stopObjectCode();
[003F] (8F) if (getState(VAR_ME) == 1) {
[0045] (40)   cutscene([]);
[0047] (1E)   walkActorTo(1,49,116);
[004D] (AE)   WaitForActor(1);
[0050] (11)   animateCostume(1,244);
[0053] (80)   breakHere();
[0054] (11)   animateCostume(1,10);
[0057] (80)   breakHere();
[0058] (80)   breakHere();
[0059] (11)   animateCostume(1,3);
[005C] (0A)   startScript(27,[]);
[005F] (C0)   endCutscene();
[0060] (18) } else {
[0063] (0A)   startScript(60,[2]);
[0069] (**) }
[0069] (00) stopObjectCode();
[006A] (8F) if (getState(VAR_ME) == 1) {
[0070] (40)   cutscene([]);
[0072] (5D)   setClass(1,[150,149]);
[007C] (1E)   walkActorTo(1,10,104);
[0082] (AE)   WaitForActor(1);
[0085] (14)   print(255,[Text(" ")]);
[008A] (AE)   WaitForMessage();
[008C] (5D)   setClass(1,[22,21]);
[0096] (C0)   endCutscene();
[0097] (24)   loadRoomWithEgo(108,20,-1,-1);
[009F] (**) }
[009F] (00) stopObjectCode();
END

// Object 214: Boxing Ring
Events:
   8 - 0029
   9 - 0066
   A - 0029
[0029] (D8) printEgo([Text("Not in my good suit!  I'd get it all wrinkled and sweaty!")]);
[0065] (00) stopObjectCode();
[0066] (D8) printEgo([Text("Sure is a boxing ring.  Yup.")]);
[0085] (00) stopObjectCode();
END

// Object 215
Events:
END

// Object 216
Events:
END

// Object 217: Locker Room
Events:
   1 - 0053
   2 - 0053
   8 - 004F
   9 - 002F
   A - 004F
[002F] (D8) printEgo([Text("The sign says: 'Locker Room'")]);
[004E] (00) stopObjectCode();
[004F] (0A) startScript(203,[]);
[0052] (00) stopObjectCode();
[0053] (D8) printEgo([Text("There's no door here.")]);
[006B] (00) stopObjectCode();
END

// Object 218: Bell
Events:
   4 - 0085
   6 - 0085
   7 - 0085
   8 - 0051
   9 - 0028
[0028] (D8) printEgo([Text("It's a large bell used during fights.")]);
[0050] (00) stopObjectCode();
[0051] (48) if (Local[0] == 219) {
[0058] (40)   cutscene([]);
[005A] (01)   putActor(1,174,125);
[0060] (80)   breakHere();
[0061] (1A)   Local[0] = 1;
[0066] (11)   animateCostume(1,10);
[0069] (1C)   startSound(64);
[006B] (80)   breakHere();
[006C] (11)   animateCostume(1,3);
[006F] (2E)   delay(30);
[0073] (46)   Local[0]++;
[0076] (44)   unless (Local[0] > 3) goto 0066;
[007D] (C0)   endCutscene();
[007E] (18) } else {
[0081] (0A)   startScript(3,[]);
[0084] (**) }
[0084] (00) stopObjectCode();
[0085] (D8) printEgo([Text("I have to use the mallet.")]);
[00A1] (00) stopObjectCode();
END

// Object 219: Mallet
Events:
   8 - 0024
   9 - 0032
   B - 002B
[0024] (79) doSentence(8,Local[0],VAR_ME);
[002A] (00) stopObjectCode();
[002B] (0A) startScript(205,[]);
[002E] (D0) pickupObject(VAR_ME);
[0031] (00) stopObjectCode();
[0032] (D8) printEgo([Text("It's chained to the bell.")]);
[004E] (00) stopObjectCode();
END

// Object 220: Light Switch
Events:
   4 - 00F5
   5 - 0030
   6 - 0030
   7 - 0030
   8 - 0030
[0030] (40) cutscene([]);
[0032] (1C) startSound(93);
[0034] (1A) Local[2] = 1;
[0039] (33) SetPalColor(0,Local[2])
[003F] (46) Local[2]++;
[0042] (44) unless (Local[2] > 15) goto 0039;
[0049] (1A) Local[2] = 1;
[004E] (33) SetPalColor(8,Local[2])
[0054] (AC) Exprmode Local[1] = (Local[2] + 8);
[005F] (33) SetPalColor(7,Local[1])
[0065] (46) Local[2]++;
[0068] (44) unless (Local[2] > 4) goto 004E;
[006F] (58) beginOverride();
[0071] (18) goto 00CB;
[0074] (80) breakHere();
[0075] (80) breakHere();
[0076] (62) stopScript(204);
[0078] (11) animateCostume(9,3);
[007B] (2E) delay(60);
[007F] (13) ActorOps(9,[TalkColor(12)]);
[0084] (14) print(9,[Text("HEY!! WHO TURNED OUT THE LIGHTS!!")]);
[00A9] (AE) WaitForMessage();
[00AB] (14) print(9,[Text("TURN THE LIGHTS BACK ON!!!")]);
[00C9] (AE) WaitForMessage();
[00CB] (13) ActorOps(9,[TalkColor(2)]);
[00D0] (11) animateCostume(1,10);
[00D3] (80) breakHere();
[00D4] (1C) startSound(93);
[00D6] (1A) Local[0] = 0;
[00DB] (33) SetPalColor(Local[0],Local[0])
[00E1] (46) Local[0]++;
[00E4] (44) unless (Local[0] > 255) goto 00DB;
[00EB] (80) breakHere();
[00EC] (80) breakHere();
[00ED] (11) animateCostume(1,3);
[00F0] (2A) startScript(204,[],F);
[00F3] (C0) endCutscene();
[00F4] (00) stopObjectCode();
[00F5] (D8) printEgo([Text("They're already on.")]);
[010B] (00) stopObjectCode();
END

// Object 221: Sign
Events:
   9 - 001C
[001C] (D8) printEgo([Text("It says: `Locker Room`")]);
[0035] (00) stopObjectCode();
END
