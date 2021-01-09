/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 42: Salvage Boat Surface (sal-surfa)
 */

// EN
[0000] (0A) startScript(144,[89,3]);
[0009] (1A) Var[164] = 203;
[000E] (07) setState(492,1);
[0012] (2A) startScript(208,[],F);
[0015] (13) ActorOps(11,[Init(),Costume(44),TalkColor(2),Name("captain")]);
[0026] (5D) setClass(11,[141]);
[002D] (2D) putActorInRoom(11,42);
[0030] (01) putActor(11,82,68);
[0036] (11) animateCostume(11,248);
[0039] (13) ActorOps(12,[Init(),Costume(154),IgnoreBoxes(),SetZClip(2),InitAnimNr(6),StandAnimNr(6)]);
[0046] (0F) VAR_RESULT = getObjectState(488);
[004B] (48) if (VAR_RESULT == 1) {
[0052] (7C)   VAR_RESULT = isSoundRunning(81);
[0056] (28)   if (!VAR_RESULT) {
[005B] (7C)     VAR_RESULT = isSoundRunning(80);
[005F] (28)     if (!VAR_RESULT) {
[0064] (1C)       startSound(157);
[0066] (**)     }
[0066] (**)   }
[0066] (11)   animateCostume(11,248);
[0069] (2D)   putActorInRoom(1,42);
[006C] (01)   putActor(1,150,101);
[0072] (11)   animateCostume(1,1);
[0075] (11)   animateCostume(1,249);
[0078] (2D)   putActorInRoom(2,42);
[007B] (01)   putActor(2,184,101);
[0081] (11)   animateCostume(2,1);
[0084] (11)   animateCostume(2,248);
[0087] (0A)   startScript(204,[]);
[008A] (32)   setCameraAt(160);
[008D] (18) } else {
[0090] (6D)   putActorInRoom(12,VAR_ROOM);
[0094] (01)   putActor(12,298,133);
[009A] (2A)   startScript(201,[],F);
[009D] (0A)   startScript(200,[]);
[00A0] (**) }
[00A0] (00) stopObjectCode();
END

// EX
[0000] (28) if (!Bit[443]) {
[0005] (07)   setState(491,1);
[0009] (5D)   setClass(491,[32]);
[0010] (28)   if (!Bit[23]) {
[0015] (4C)     soundKludge([257,157,0]);
[0020] (4C)     soundKludge([262,157,0]);
[002B] (4C)     soundKludge([269,157,50,180]);
[0039] (4C)     soundKludge([-1]);
[003E] (**)   }
[003E] (**) }
[003E] (5D) setClass(11,[0]);
[0045] (0A) startScript(202,[]);
[0048] (5D) setClass(500,[160]);
[004F] (5D) setClass(1,[32,141]);
[0059] (00) stopObjectCode();
END

Script# 200 // Kerner is Here
[0000] (58) endOverride();
[0002] (32) setCameraAt(248);
[0005] (13) ActorOps(4,[Costume(20)]);
[000A] (2D) putActorInRoom(4,42);
[000D] (01) putActor(4,200,112);
[0013] (2D) putActorInRoom(2,42);
[0016] (01) putActor(2,160,112);
[001C] (11) animateCostume(4,248);
[001F] (11) animateCostume(4,7);
[0022] (11) animateCostume(2,249);
[0025] (80) breakHere();
[0026] (07) setState(490,0);
[002A] (80) breakHere();
[002B] (40) cutscene([1]);
[0030] (58) beginOverride();
[0032] (18) goto 0281;
[0035] (80) breakHere();
[0036] (80) breakHere();
[0037] (80) breakHere();
[0038] (80) breakHere();
[0039] (14) print(2,[Center(),Pos(90,31),Text("Kerner!" + wait() + "Perfect^" + wait() + "^another slimy creature oozing up from the\x10depths!")]);
[0088] (AE) WaitForMessage();
[008A] (14) print(4,[Text("Now now, Fraulein Hapgood, I have no wish to shoot\x10you^ " + startAnim(13) + " " + wait() + "^don't make me change my\x10mind.")]);
[00EB] (AE) WaitForMessage();
[00ED] (14) print(2,[Center(),Pos(90,31),Text("What mind? " + startAnim(13) + " ")]);
[0107] (AE) WaitForMessage();
[0109] (14) print(4,[Text("I see you've acquired some bad manners from your friend\x10Jones. " + startAnim(14) + " " + wait() + "Where is he, may I\x10ask?")]);
[016A] (AE) WaitForMessage();
[016C] (14) print(2,[Center(),Pos(90,31),Text("Back on Thera." + newline() + "You'll never find\x10him. " + startAnim(19) + " ")]);
[01A2] (AE) WaitForMessage();
[01A4] (14) print(4,[Text("Really^")]);
[01AF] (11) animateCostume(2,3);
[01B2] (AE) WaitForMessage();
[01B4] (14) print(4,[Text("^what do you say,\x10Captain?")]);
[01D2] (AE) WaitForMessage();
[01D4] (1E) walkActorTo(11,134,69);
[01DA] (AE) WaitForActor(11);
[01DD] (09) faceActor(11,4);
[01E1] (80) breakHere();
[01E2] (80) breakHere();
[01E3] (09) faceActor(4,11);
[01E7] (80) breakHere();
[01E8] (80) breakHere();
[01E9] (14) print(11,[Text("I brought them both like you told me, Herr\x10Kerner.")]);
[021F] (AE) WaitForMessage();
[0221] (11) animateCostume(4,17);
[0224] (14) print(11,[Text("I tried to keep Jones from\x10diving^")]);
[024A] (AE) WaitForMessage();
[024C] (11) animateCostume(4,12);
[024F] (14) print(11,[Text("^but he's a very determined\x10man.")]);
[0273] (AE) WaitForMessage();
[0275] (11) animateCostume(4,1);
[0278] (1E) walkActorTo(4,245,135);
[027E] (AE) WaitForActor(4);
[0281] (A8) if (VAR_OVERRIDE) {
[0286] (4C)   soundKludge([257,140,0]);
[0291] (4C)   soundKludge([-1]);
[0296] (4C)   soundKludge([269,140,0,360]);
[02A4] (2D)   putActorInRoom(11,42);
[02A7] (01)   putActor(11,134,69);
[02AD] (11)   animateCostume(11,3);
[02B0] (11)   animateCostume(11,249);
[02B3] (2D)   putActorInRoom(4,42);
[02B6] (01)   putActor(4,245,135);
[02BC] (11)   animateCostume(4,3);
[02BF] (11)   animateCostume(4,249);
[02C2] (14)   print(4,[Text("Goodbye, Dr. Jones.")]);
[02D9] (0C)   Resource.loadSound(78);
[02DC] (0C)   Resource.loadSound(79);
[02DF] (4C)   soundKludge([-1]);
[02E4] (4C)   soundKludge([2]);
[02E9] (4C)   soundKludge([8,78]);
[02F1] (4C)   soundKludge([8,79]);
[02F9] (4C)   soundKludge([-1]);
[02FE] (4C)   soundKludge([3]);
[0303] (4C)   soundKludge([262,140,0]);
[030E] (4C)   soundKludge([269,140,0,30]);
[031C] (AE)   WaitForMessage();
[031E] (18) } else {
[0321] (14)   print(4,[Text("Now, he's a dead\x10man^")]);
[033A] (4C)   soundKludge([257,140,0]);
[0345] (4C)   soundKludge([-1]);
[034A] (4C)   soundKludge([269,140,0,360]);
[0358] (AE)   WaitForMessage();
[035A] (14)   print(4,[Text("^one rude archaeologist is quite enough for my\x10purposes.")]);
[0396] (4C)   soundKludge([262,140,0]);
[03A1] (4C)   soundKludge([269,140,0,60]);
[03AF] (0C)   Resource.loadSound(78);
[03B2] (0C)   Resource.loadSound(79);
[03B5] (4C)   soundKludge([-1]);
[03BA] (4C)   soundKludge([2]);
[03BF] (4C)   soundKludge([8,78]);
[03C7] (4C)   soundKludge([8,79]);
[03CF] (4C)   soundKludge([-1]);
[03D4] (4C)   soundKludge([3]);
[03D9] (AE)   WaitForMessage();
[03DB] (**) }
[03DB] (11) animateCostume(4,22);
[03DE] (1C) startSound(185);
[03E0] (1C) startSound(185);
[03E2] (80) breakHere();
[03E3] (80) breakHere();
[03E4] (80) breakHere();
[03E5] (0A) startScript(202,[]);
[03E8] (80) breakHere();
[03E9] (68) VAR_RESULT = isScriptRunning(202);
[03ED] (28) unless (!VAR_RESULT) goto 03E8;
[03F2] (C0) endCutscene();
[03F3] (A0) stopObjectCode();
END

Script# 201
[0000] (1A) Local[0] = 0;
[0005] (1A) Local[1] = 0;
[000A] (46) Local[0]++;
[000D] (46) Local[1]++;
[0010] (44) if (Local[0] > 3) {
[0017] (1A)   Local[0] = 1;
[001C] (**) }
[001C] (44) if (Local[1] > 4) {
[0023] (1A)   Local[1] = 1;
[0028] (**) }
[0028] (05) drawObject(493setImage(,Local[0]));
[002E] (05) drawObject(498setImage(,Local[1]));
[0034] (16) VAR_RESULT = getRandomNr(1);
[0038] (A8) if (VAR_RESULT) {
[003D] (05)   drawObject(495setImage(,Local[0]));
[0043] (**) }
[0043] (80) breakHere();
[0044] (18) goto 000A;
[0047] (A0) stopObjectCode();
END

Script# 202 // Kerner Cuts Hose
[0000] (62) stopScript(201);
[0002] (07) setState(493,0);
[0006] (07) setState(498,0);
[000A] (07) setState(495,0);
[000E] (28) if (!Local[0]) {
[0013] (11)   animateCostume(12,7);
[0016] (80)   breakHere();
[0017] (80)   breakHere();
[0018] (80)   breakHere();
[0019] (11)   animateCostume(4,3);
[001C] (80)   breakHere();
[001D] (80)   breakHere();
[001E] (80)   breakHere();
[001F] (80)   breakHere();
[0020] (11)   animateCostume(4,20);
[0023] (43)   Var[445] = getActorX(12);
[0028] (23)   Var[446] = getActorY(12);
[002D] (AC)   Exprmode Var[442] = (VAR_CAMERA_POS_X + 35);
[0038] (14)   print(255,[Color(11),Pos(VAR_CAMERA_POS_X,125),Text("BLUB!")]);
[0048] (80)   breakHere();
[0049] (80)   breakHere();
[004A] (80)   breakHere();
[004B] (80)   breakHere();
[004C] (80)   breakHere();
[004D] (80)   breakHere();
[004E] (80)   breakHere();
[004F] (80)   breakHere();
[0050] (80)   breakHere();
[0051] (80)   breakHere();
[0052] (80)   breakHere();
[0053] (80)   breakHere();
[0054] (80)   breakHere();
[0055] (AE)   WaitForMessage();
[0057] (**) }
[0057] (A0) stopObjectCode();
END

Script# 203
[0000] (48) if (Var[176] == 11) {
[0007] (42)   chainScript(206,[]);
[000A] (48) } else if (Var[176] == 2) {
[0014] (42)   chainScript(205,[]);
[0017] (18)   /* goto 001A; */
[001A] (**) }
[001A] (A0) stopObjectCode();
END

Script# 204 // Arrived at Destination
[0000] (48) if (Var[416] == 1) {
[0007] (27)   PutCodeInString(38, "southwest");
[0014] (48) } else if (Var[416] == 2) {
[001E] (27)   PutCodeInString(38, "south");
[0027] (48) } else if (Var[416] == 3) {
[0031] (27)   PutCodeInString(38, "southeast");
[003E] (18)   /* goto 0041; */
[0041] (**) }
[0041] (40) cutscene([2]);
[0046] (48) if (Bit[400 + 9] == 0) {
[004F] (1E)   walkActorTo(11,134,69);
[0055] (AE)   WaitForActor(11);
[0058] (58)   beginOverride();
[005A] (18)   goto 0198;
[005D] (14)   print(11,[Text("Avast, you lubbers.  We've\x10arrived.")]);
[0084] (80)   breakHere();
[0085] (80)   breakHere();
[0086] (1E)   walkActorTo(1,157,101);
[008C] (AE)   WaitForActor(1);
[008F] (09)   faceActor(1,11);
[0093] (80)   breakHere();
[0094] (80)   breakHere();
[0095] (09)   faceActor(11,1);
[0099] (80)   breakHere();
[009A] (80)   breakHere();
[009B] (11)   animateCostume(2,248);
[009E] (AE)   WaitForMessage();
[00A0] (14)   print(1,[Text("Are you sure?")]);
[00B1] (AE)   WaitForMessage();
[00B3] (14)   print(11,[Text("Exactly " + getInt(Var[415]) + " miles " + getString(VAR_WALKTO_OBJ) + " of\x10Thera." + wait() + "There's a diving suit in one of the\x10lockers^" + wait() + "^the rest is up to\x10you.")]);
[011F] (AE)   WaitForMessage();
[0121] (14)   print(1,[Text("Aren't you going to help?")]);
[013E] (AE)   WaitForMessage();
[0140] (58)   endOverride();
[0142] (14)   print(11,[Text("I'm against helping anyone into an early\x10grave^" + wait() + "^from now on, you're on your\x10own.")]);
[0198] (A8)   if (VAR_OVERRIDE) {
[019D] (14)     print(11,[Text("You're on your\x10own.")]);
[01B4] (**)   }
[01B4] (AE)   WaitForMessage();
[01B6] (18) } else {
[01B9] (07)   setState(491,0);
[01BD] (1D)   if (classOfIs(491,[12])) {
[01C6] (54)     setObjectName(491,"diving suit");
[01D5] (**)   }
[01D5] (1D)   if (classOfIs(491,[134])) {
[01DE] (05)     drawObject(500);
[01E2] (54)     setObjectName(491,"broken suit with hose");
[01FB] (**)   }
[01FB] (1D)   if (classOfIs(491,[12])) {
[0204] (1D)     if (classOfIs(491,[134])) {
[020D] (54)       setObjectName(491,"diving suit with hose");
[0226] (5D)       setClass(491,[1,2,3,4]);
[0236] (**)     }
[0236] (**)   }
[0236] (1E)   walkActorTo(11,134,69);
[023C] (AE)   WaitForActor(11);
[023F] (58)   beginOverride();
[0241] (18)   goto 02AA;
[0244] (14)   print(11,[Text("Alright, we're in position^")]);
[0263] (80)   breakHere();
[0264] (80)   breakHere();
[0265] (1E)   walkActorTo(1,157,101);
[026B] (AE)   WaitForActor(1);
[026E] (09)   faceActor(1,11);
[0272] (80)   breakHere();
[0273] (80)   breakHere();
[0274] (09)   faceActor(11,1);
[0278] (80)   breakHere();
[0279] (80)   breakHere();
[027A] (11)   animateCostume(2,248);
[027D] (AE)   WaitForMessage();
[027F] (58)   endOverride();
[0281] (14)   print(11,[Text("^" + getInt(Var[415]) + " miles " + getString(VAR_WALKTO_OBJ) + " of\x10Thera." + wait() + "Go to it.")]);
[02AA] (A8)   if (VAR_OVERRIDE) {
[02AF] (14)     print(11,[Text("Go to it.")]);
[02BC] (**)   }
[02BC] (AE)   WaitForMessage();
[02BE] (**) }
[02BE] (1E) walkActorTo(11,82,68);
[02C4] (AE) WaitForActor(11);
[02C7] (C0) endCutscene();
[02C8] (03) VAR_RESULT = getActorRoom(2);
[02CC] (C8) if (VAR_RESULT == VAR_ROOM) {
[02D3] (68)   VAR_RESULT = isScriptRunning(31);
[02D7] (28)   if (!VAR_RESULT) {
[02DC] (2A)     startScript(31,[1,2,0],F);
[02E8] (**)   }
[02E8] (**) }
[02E8] (A0) stopObjectCode();
END

Script# 205 //Talk to Sophia
[0000] (62) stopScript(31);
[0002] (0A) startScript(136,[1,2,30,1]);
[0011] (80) breakHere();
[0012] (68) VAR_RESULT = isScriptRunning(136);
[0016] (28) unless (!VAR_RESULT) goto 0011;
[001B] (A8) if (Bit[22]) {
[0020] (03)   VAR_RESULT = getActorRoom(2);
[0024] (C8)   if (VAR_RESULT == VAR_ROOM) {
[002B] (68)     VAR_RESULT = isScriptRunning(31);
[002F] (28)     if (!VAR_RESULT) {
[0034] (2A)       startScript(31,[1,2,1],F);
[0040] (**)     }
[0040] (**)   }
[0040] (62)   stopScript(0);
[0042] (**) }
[0042] (40) cutscene([2]);
[0047] (16) Var[442] = getRandomNr(2);
[004B] (48) if (Var[442] == 0) {
[0052] (14)   print(1,[Text("Listen, Sophia^")]);
[0065] (48) } else if (Var[442] == 1) {
[006F] (14)   print(1,[Text("Hey^")]);
[0077] (48) } else if (Var[442] == 2) {
[0081] (14)   print(1,[Text("Uhh^")]);
[0089] (18)   /* goto 008C; */
[008C] (**) }
[008C] (80) breakHere();
[008D] (80) breakHere();
[008E] (09) faceActor(2,1);
[0092] (AE) WaitForMessage();
[0094] (16) Var[442] = getRandomNr(1);
[0098] (A8) if (Var[442]) {
[009D] (14)   print(2,[Text("Yes?")]);
[00A5] (18) } else {
[00A8] (14)   print(2,[Text("What is it,\x10sailor?")]);
[00BF] (**) }
[00BF] (AE) WaitForMessage();
[00C1] (C0) endCutscene();
[00C2] (0A) startScript(82,[]);
[00C5] (1A) Local[0] = 0;
[00CA] (0A) startScript(68,[]);
[00CD] (48) if (Bit[435 + 0] == 0) {
[00D6] (46)   Local[0]++;
[00D9] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[00E8] (27)   PutCodeInString(Var[443], "If we've found Atlantis, I'll bet it's\x10waterlogged.");
[0120] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[012F] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0138] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0140] (5A)   Var[166] += 10;
[0145] (3A)   Var[442] -= 120;
[014A] (46)   Var[178]++;
[014D] (1A)   Bit[7 + Var[442]] = 1;
[0154] (**) }
[0154] (48) if (Bit[435 + 1] == 0) {
[015D] (46)   Local[0]++;
[0160] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[016F] (27)   PutCodeInString(Var[443], "Think your old pal Sal would be proud of\x10us?");
[01A0] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[01AF] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[01B8] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[01C0] (5A)   Var[166] += 10;
[01C5] (3A)   Var[442] -= 120;
[01CA] (46)   Var[178]++;
[01CD] (1A)   Bit[7 + Var[442]] = 1;
[01D4] (**) }
[01D4] (48) if (Local[1] == 0) {
[01DB] (46)   Local[0]++;
[01DE] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[01ED] (27)   PutCodeInString(Var[443], "What do we do now?");
[0204] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[0213] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[021C] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0224] (5A)   Var[166] += 10;
[0229] (3A)   Var[442] -= 120;
[022E] (46)   Var[178]++;
[0231] (1A)   Bit[7 + Var[442]] = 1;
[0238] (**) }
[0238] (AC) Exprmode Var[443] = ((41 + 4) - 1);
[0247] (27) PutCodeInString(Var[443], "Excuse me.");
[0256] (AC) Exprmode Var[442] = ((120 + 4) - 1);
[0265] (FA) VerbOps(Var[442],[SetXY(2,Var[166])]);
[026E] (FA) VerbOps(Var[442],[On(),Key(Var[178]);]);
[0276] (5A) Var[166] += 10;
[027B] (3A) Var[442] -= 120;
[0280] (46) Var[178]++;
[0283] (1A) Bit[7 + Var[442]] = 1;
[028A] (AC) Exprmode Var[442] = (4 - 1);
[0295] (1A) Var[167 + Var[442]] = 1;
[029C] (1A) Var[165] = 0;
[02A1] (16) Var[442] = getRandomNr(1);
[02A5] (80) breakHere();
[02A6] (A8) unless (Var[165]) goto 02A1;
[02AB] (48) if (Var[165] == 120) {
[02B2] (1A)   Bit[435 + 0] = 1;
[02B9] (14)   print(2,[Text("Don't look at me, I didn't sink\x10it.")]);
[02E0] (48) } else if (Var[165] == 121) {
[02EA] (1A)   Bit[435 + 1] = 1;
[02F1] (14)   print(2,[Text("Sorry, I'm not in contact at the\x10moment.")]);
[031D] (48) } else if (Var[165] == 122) {
[0327] (14)   print(2,[Text("I guess you better try out that\x10suit.")]);
[0350] (48) } else if (Var[165] == 123) {
[035A] (14)   print(2,[Text("Mmm.")]);
[0362] (18)   goto 0377;
[0365] (18)   /* goto 0368; */
[0368] (**) }
[0368] (44) if (Local[0] > 1) {
[036F] (AE)   WaitForMessage();
[0371] (18)   goto 00C5;
[0374] (**) }
[0374] (18) /* goto 0377; */
[0377] (AE) WaitForMessage();
[0379] (0A) startScript(83,[]);
[037C] (03) VAR_RESULT = getActorRoom(2);
[0380] (C8) if (VAR_RESULT == VAR_ROOM) {
[0387] (68)   VAR_RESULT = isScriptRunning(31);
[038B] (28)   if (!VAR_RESULT) {
[0390] (2A)     startScript(31,[1,2,0],F);
[039C] (**)   }
[039C] (**) }
[039C] (A0) stopObjectCode();
END

Script# 206 // Talk to Captain
[0000] (40) cutscene([2]);
[0005] (62) stopScript(31);
[0007] (9E) walkActorTo(VAR_EGO,157,101);
[000E] (AE) WaitForActor(VAR_EGO);
[0012] (08) if (VAR_EGO != 2) {
[0019] (1E)   walkActorTo(2,184,101);
[001F] (AE)   WaitForActor(2);
[0022] (09)   faceActor(2,11);
[0026] (**) }
[0026] (89) faceActor(VAR_EGO,11);
[002B] (80) breakHere();
[002C] (80) breakHere();
[002D] (16) Var[442] = getRandomNr(2);
[0031] (48) if (Var[442] == 0) {
[0038] (94)   print(VAR_EGO,[Text("Say, Captain^")]);
[004A] (48) } else if (Var[442] == 1) {
[0054] (94)   print(VAR_EGO,[Text("Hey, up there^")]);
[0067] (48) } else if (Var[442] == 2) {
[0071] (94)   print(VAR_EGO,[Text("Hello^?")]);
[007D] (18)   /* goto 0080; */
[0080] (**) }
[0080] (1E) walkActorTo(11,134,69);
[0086] (AE) WaitForActor(11);
[0089] (AE) WaitForMessage();
[008B] (89) faceActor(VAR_EGO,11);
[0090] (80) breakHere();
[0091] (80) breakHere();
[0092] (49) faceActor(11,VAR_EGO);
[0096] (80) breakHere();
[0097] (80) breakHere();
[0098] (16) Var[442] = getRandomNr(1);
[009C] (48) if (Var[442] == 0) {
[00A3] (14)   print(11,[Text("What can I do for\x10you?")]);
[00BD] (48) } else if (Var[442] == 1) {
[00C7] (14)   print(11,[Text("Yes?")]);
[00CF] (18)   /* goto 00D2; */
[00D2] (**) }
[00D2] (AE) WaitForMessage();
[00D4] (C0) endCutscene();
[00D5] (0A) startScript(82,[]);
[00D8] (AE) WaitForMessage();
[00DA] (0A) startScript(68,[]);
[00DD] (AC) Exprmode Var[443] = ((41 + 1) - 1);
[00EC] (27) PutCodeInString(Var[443], "Take us back to Thera,\x10please.");
[010F] (AC) Exprmode Var[442] = ((120 + 1) - 1);
[011E] (FA) VerbOps(Var[442],[SetXY(2,Var[166])]);
[0127] (FA) VerbOps(Var[442],[On(),Key(Var[178]);]);
[012F] (5A) Var[166] += 10;
[0134] (3A) Var[442] -= 120;
[0139] (46) Var[178]++;
[013C] (1A) Bit[7 + Var[442]] = 1;
[0143] (AC) Exprmode Var[443] = ((41 + 2) - 1);
[0152] (27) PutCodeInString(Var[443], "Are you sure we're in the right\x10spot?");
[017C] (AC) Exprmode Var[442] = ((120 + 2) - 1);
[018B] (FA) VerbOps(Var[442],[SetXY(2,Var[166])]);
[0194] (FA) VerbOps(Var[442],[On(),Key(Var[178]);]);
[019C] (5A) Var[166] += 10;
[01A1] (3A) Var[442] -= 120;
[01A6] (46) Var[178]++;
[01A9] (1A) Bit[7 + Var[442]] = 1;
[01B0] (AC) Exprmode Var[443] = ((41 + 3) - 1);
[01BF] (27) PutCodeInString(Var[443], "Give us a few more\x10minutes.");
[01DF] (AC) Exprmode Var[442] = ((120 + 3) - 1);
[01EE] (FA) VerbOps(Var[442],[SetXY(2,Var[166])]);
[01F7] (FA) VerbOps(Var[442],[On(),Key(Var[178]);]);
[01FF] (5A) Var[166] += 10;
[0204] (3A) Var[442] -= 120;
[0209] (46) Var[178]++;
[020C] (1A) Bit[7 + Var[442]] = 1;
[0213] (AC) Exprmode Var[442] = (4 - 1);
[021E] (1A) Var[167 + Var[442]] = 1;
[0225] (1A) Var[165] = 0;
[022A] (16) Var[442] = getRandomNr(1);
[022E] (80) breakHere();
[022F] (A8) unless (Var[165]) goto 022A;
[0234] (48) if (Var[165] == 120) {
[023B] (28)   if (!Bit[400 + 9]) {
[0242] (14)     print(11,[Text("Couldn't find the secret city,\x10eh?" + startAnim(6)wait() + "Too bad, I was hoping to dredge up a\x10fortune.")]);
[029B] (18)   } else {
[029E] (14)     print(11,[Text("Aye aye, boss. " + startAnim(8))]);
[02B5] (**)   }
[02B5] (1A)   Local[0] = 1;
[02BA] (18)   goto 0349;
[02BD] (48) } else if (Var[165] == 121) {
[02C7] (14)   print(11,[Text("I'm telling you^" + wait() + "^we're " + getInt(Var[415]) + " miles " + getString(VAR_WALKTO_OBJ) + " of Thera^" + wait() + "^right where you people wanted to\x10go.")]);
[0324] (48) } else if (Var[165] == 122) {
[032E] (14)   print(11,[Text("If you say so.")]);
[0340] (18)   goto 0349;
[0343] (18)   /* goto 0346; */
[0346] (**) }
[0346] (18) goto 00D8;
[0349] (AE) WaitForMessage();
[034B] (0A) startScript(83,[]);
[034E] (28) if (!Local[0]) {
[0353] (1E)   walkActorTo(11,82,68);
[0359] (18) } else {
[035C] (1A)   Var[316] = 4;
[0361] (1A)   Bit[400 + 14] = 1;
[0368] (08)   if (VAR_EGO != 1) {
[036F] (0A)     startScript(80,[1]);
[0375] (**)   }
[0375] (93)   ActorOps(VAR_EGO,[Costume(2),FollowBoxes()]);
[037C] (1A)   Var[315] = 42;
[0381] (72)   loadRoom(75);
[0383] (**) }
[0383] (48) if (VAR_EGO == 1) {
[038A] (03)   VAR_RESULT = getActorRoom(2);
[038E] (C8)   if (VAR_RESULT == VAR_ROOM) {
[0395] (68)     VAR_RESULT = isScriptRunning(31);
[0399] (28)     if (!VAR_RESULT) {
[039E] (2A)       startScript(31,[1,2,0],F);
[03AA] (**)     }
[03AA] (**)   }
[03AA] (**) }
[03AA] (A0) stopObjectCode();
END

Script# 207 // Indy Dives In
[0000] (40) cutscene([2]);
[0005] (68) VAR_RESULT = isScriptRunning(201);
[0009] (28) if (!VAR_RESULT) {
[000E] (14)   print(2,[Text("Better turn that compressor on\x10first.")]);
[0037] (19)   doSentence(7,492,0);
[003D] (AE)   WaitForSentence();
[003F] (**) }
[003F] (36) walkActorToObject(2,497);
[0043] (AE) WaitForActor(2);
[0046] (80) breakHere();
[0047] (80) breakHere();
[0048] (48) if (Bit[732] == 0) {
[004F] (14)   print(1,[Text("Watch that\x10hook!")]);
[0063] (AE)   WaitForMessage();
[0065] (14)   print(2,[Text("Okay, okay." + startAnim(13))]);
[0078] (AE)   WaitForMessage();
[007A] (11)   animateCostume(2,1);
[007D] (18) } else {
[0080] (14)   print(1,[Text("Here, I go again!")]);
[0095] (AE)   WaitForMessage();
[0097] (14)   print(2,[Text("Better luck this\x10time!")]);
[00B1] (AE)   WaitForMessage();
[00B3] (**) }
[00B3] (11) animateCostume(2,246);
[00B6] (05) drawObject(499setImage(,1));
[00BC] (80) breakHere();
[00BD] (80) breakHere();
[00BE] (80) breakHere();
[00BF] (80) breakHere();
[00C0] (05) drawObject(499setImage(,2));
[00C6] (80) breakHere();
[00C7] (80) breakHere();
[00C8] (80) breakHere();
[00C9] (80) breakHere();
[00CA] (11) animateCostume(2,244);
[00CD] (05) drawObject(499setImage(,3));
[00D3] (80) breakHere();
[00D4] (80) breakHere();
[00D5] (80) breakHere();
[00D6] (80) breakHere();
[00D7] (4C) soundKludge([263,157,1,4,400]);
[00E8] (4C) soundKludge([270,157,1]);
[00F3] (4C) soundKludge([271,262,157,0]);
[0101] (4C) soundKludge([271,-1]);
[0109] (07) setState(500,0);
[010D] (11) animateCostume(1,6);
[0110] (80) breakHere();
[0111] (80) breakHere();
[0112] (80) breakHere();
[0113] (80) breakHere();
[0114] (80) breakHere();
[0115] (12) panCameraTo(208);
[0118] (AE) WaitForCamera();
[011A] (13) ActorOps(1,[IgnoreBoxes(),SetZClip(2)]);
[0120] (80) breakHere();
[0121] (01) putActor(1,304,102);
[0127] (11) animateCostume(1,9);
[012A] (11) animateCostume(2,245);
[012D] (05) drawObject(499setImage(,2));
[0133] (80) breakHere();
[0134] (01) putActor(1,318,104);
[013A] (11) animateCostume(1,10);
[013D] (05) drawObject(499setImage(,1));
[0143] (80) breakHere();
[0144] (01) putActor(1,318,104);
[014A] (11) animateCostume(1,11);
[014D] (07) setState(499,0);
[0151] (80) breakHere();
[0152] (11) animateCostume(1,8);
[0155] (80) breakHere();
[0156] (80) breakHere();
[0157] (80) breakHere();
[0158] (80) breakHere();
[0159] (80) breakHere();
[015A] (80) breakHere();
[015B] (80) breakHere();
[015C] (80) breakHere();
[015D] (80) breakHere();
[015E] (80) breakHere();
[015F] (80) breakHere();
[0160] (80) breakHere();
[0161] (80) breakHere();
[0162] (80) breakHere();
[0163] (80) breakHere();
[0164] (80) breakHere();
[0165] (80) breakHere();
[0166] (80) breakHere();
[0167] (1A) Bit[444] = 1;
[016C] (C0) endCutscene();
[016D] (A8) if (Bit[443]) {
[0172] (0A)   startScript(144,[90,10]);
[017B] (13)   ActorOps(1,[NeverZClip(),IgnoreBoxes()]);
[0180] (2D)   putActorInRoom(1,82);
[0183] (01)   putActor(1,345,0);
[0189] (0A)   startScript(80,[1]);
[018F] (80)   breakHere();
[0190] (68)   VAR_RESULT = isScriptRunning(80);
[0194] (28)   unless (!VAR_RESULT) goto 018F;
[0199] (72)   loadRoom(82);
[019B] (18) } else {
[019E] (40)   cutscene([3]);
[01A3] (11)   animateCostume(1,13);
[01A6] (80)   breakHere();
[01A7] (80)   breakHere();
[01A8] (80)   breakHere();
[01A9] (80)   breakHere();
[01AA] (80)   breakHere();
[01AB] (48)   if (Bit[732] == 0) {
[01B2] (1A)     Bit[732] = 1;
[01B7] (11)     animateCostume(1,14);
[01BA] (80)     breakHere();
[01BB] (14)     print(255,[Pos(VAR_CAMERA_POS_X,70),Center(),Overhead(),Color(15),Text("Nothing." + wait() + "I must have picked the wrong\x10coordinates.")]);
[01FB] (AE)     WaitForMessage();
[01FD] (11)     animateCostume(1,15);
[0200] (18)   } else {
[0203] (11)     animateCostume(1,14);
[0206] (80)     breakHere();
[0207] (14)     print(255,[Pos(VAR_CAMERA_POS_X,70),Center(),Overhead(),Color(15),Text("Drat!" + wait() + "We got the coordinates wrong\x10again.")]);
[023E] (AE)     WaitForMessage();
[0240] (11)     animateCostume(1,15);
[0243] (**)   }
[0243] (AE)   WaitForMessage();
[0245] (11)   animateCostume(1,14);
[0248] (14)   print(255,[Pos(VAR_CAMERA_POS_X,70),Center(),Overhead(),Color(15),Text("Take us back, Captain!")]);
[026B] (AE)   WaitForMessage();
[026D] (11)   animateCostume(1,15);
[0270] (C0)   endCutscene();
[0271] (1A)   Var[316] = 4;
[0276] (1A)   Bit[400 + 14] = 1;
[027D] (1A)   Var[315] = 42;
[0282] (0A)   startScript(80,[1]);
[0288] (93)   ActorOps(VAR_EGO,[Costume(2),FollowBoxes()]);
[028F] (4C)   soundKludge([262,157,0]);
[029A] (4C)   soundKludge([257,157,0]);
[02A5] (4C)   soundKludge([269,157,40,640]);
[02B3] (72)   loadRoom(75);
[02B5] (**) }
[02B5] (A0) stopObjectCode();
END

Script# 208
[0000] (05) drawObject(494setImage(,1));
[0006] (80) breakHere();
[0007] (80) breakHere();
[0008] (80) breakHere();
[0009] (80) breakHere();
[000A] (05) drawObject(494setImage(,2));
[0010] (80) breakHere();
[0011] (80) breakHere();
[0012] (80) breakHere();
[0013] (80) breakHere();
[0014] (05) drawObject(494setImage(,3));
[001A] (80) breakHere();
[001B] (80) breakHere();
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (05) drawObject(494setImage(,2));
[0024] (80) breakHere();
[0025] (80) breakHere();
[0026] (80) breakHere();
[0027] (80) breakHere();
[0028] (18) goto 0000;
[002B] (A0) stopObjectCode();
END

Script# 209 // Indy Wears Diving Suit
[0000] (40) cutscene([2]);
[0005] (36) walkActorToObject(1,490);
[0009] (AE) WaitForActor(1);
[000C] (07) setState(491,1);
[0010] (5D) setClass(491,[160]);
[0017] (11) animateCostume(1,250);
[001A] (13) ActorOps(1,[Costume(86)]);
[001F] (01) putActor(1,232,110);
[0025] (5D) setClass(1,[160,13]);
[002F] (11) animateCostume(1,12);
[0032] (80) breakHere();
[0033] (80) breakHere();
[0034] (80) breakHere();
[0035] (07) setState(490,0);
[0039] (80) breakHere();
[003A] (80) breakHere();
[003B] (80) breakHere();
[003C] (11) animateCostume(1,3);
[003F] (5D) setClass(500,[32]);
[0046] (09) faceActor(2,1);
[004A] (80) breakHere();
[004B] (80) breakHere();
[004C] (48) if (Bit[732] == 0) {
[0053] (D8)   printEgo([Text("I can't move at all in this\x10thing!" + wait() + "You'll have to get me into the\x10water,\x10Sophia.")]);
[00A7] (18) } else {
[00AA] (D8)   printEgo([Text("Sophia, would you do the\x10honors?")]);
[00CD] (**) }
[00CD] (62) stopScript(31);
[00CF] (0A) startScript(80,[2]);
[00D5] (80) breakHere();
[00D6] (68) VAR_RESULT = isScriptRunning(80);
[00DA] (28) unless (!VAR_RESULT) goto 00D5;
[00DF] (12) panCameraTo(160);
[00E2] (AE) WaitForCamera();
[00E4] (AE) WaitForMessage();
[00E6] (C0) endCutscene();
[00E7] (A0) stopObjectCode();
END

Script# 210
[0000] (A0) stopObjectCode();
END

Script# 211 // Talk to Indy in Suit
[0000] (40) cutscene([2]);
[0005] (9E) walkActorTo(VAR_EGO,202,109);
[000C] (AE) WaitForActor(VAR_EGO);
[0010] (91) animateCostume(VAR_EGO,249);
[0014] (80) breakHere();
[0015] (C0) endCutscene();
[0016] (1A) Local[0] = 0;
[001B] (48) if (Bit[435 + 2] == 0) {
[0024] (46)   Local[0]++;
[0027] (**) }
[0027] (48) if (Bit[435 + 3] == 0) {
[0030] (46)   Local[0]++;
[0033] (**) }
[0033] (48) if (Bit[435 + 4] == 0) {
[003C] (46)   Local[0]++;
[003F] (**) }
[003F] (48) if (Local[0] == 0) {
[0046] (14)   print(2,[Text("Here we go.")]);
[0055] (AE)   WaitForMessage();
[0057] (18)   goto 0385;
[005A] (18) } else {
[005D] (94)   print(VAR_EGO,[Text("Can you hear me\x10okay?")]);
[0077] (AE)   WaitForMessage();
[0079] (**) }
[0079] (14) print(255,[Pos(233,29),Center(),Overhead(),Color(15),Text("Barely.")]);
[008D] (AE) WaitForMessage();
[008F] (0A) startScript(82,[]);
[0092] (0A) startScript(68,[]);
[0095] (1A) Local[0] = 0;
[009A] (48) if (Bit[435 + 2] == 0) {
[00A3] (46)   Local[0]++;
[00A6] (AC)   Exprmode Var[443] = ((41 + 1) - 1);
[00B5] (27)   PutCodeInString(Var[443], "Is it hot in\x10there?");
[00CD] (AC)   Exprmode Var[442] = ((120 + 1) - 1);
[00DC] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[00E5] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[00ED] (5A)   Var[166] += 10;
[00F2] (3A)   Var[442] -= 120;
[00F7] (46)   Var[178]++;
[00FA] (1A)   Bit[7 + Var[442]] = 1;
[0101] (**) }
[0101] (48) if (Bit[435 + 3] == 0) {
[010A] (46)   Local[0]++;
[010D] (AC)   Exprmode Var[443] = ((41 + 2) - 1);
[011C] (27)   PutCodeInString(Var[443], "Do you really think we're over the right\x10spot?");
[014F] (AC)   Exprmode Var[442] = ((120 + 2) - 1);
[015E] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0167] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[016F] (5A)   Var[166] += 10;
[0174] (3A)   Var[442] -= 120;
[0179] (46)   Var[178]++;
[017C] (1A)   Bit[7 + Var[442]] = 1;
[0183] (**) }
[0183] (48) if (Bit[435 + 4] == 0) {
[018C] (46)   Local[0]++;
[018F] (AC)   Exprmode Var[443] = ((41 + 3) - 1);
[019E] (27)   PutCodeInString(Var[443], "Just wanted to make sure you're\x10comfortable.");
[01CF] (AC)   Exprmode Var[442] = ((120 + 3) - 1);
[01DE] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[01E7] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[01EF] (5A)   Var[166] += 10;
[01F4] (3A)   Var[442] -= 120;
[01F9] (46)   Var[178]++;
[01FC] (1A)   Bit[7 + Var[442]] = 1;
[0203] (**) }
[0203] (48) if (Local[0] == 0) {
[020A] (14)   print(2,[Text("Here we go.")]);
[0219] (AE)   WaitForMessage();
[021B] (18) } else {
[021E] (AC)   Exprmode Var[443] = ((41 + 4) - 1);
[022D] (27)   PutCodeInString(Var[443], "Ready?");
[0238] (AC)   Exprmode Var[442] = ((120 + 4) - 1);
[0247] (FA)   VerbOps(Var[442],[SetXY(2,Var[166])]);
[0250] (FA)   VerbOps(Var[442],[On(),Key(Var[178]);]);
[0258] (5A)   Var[166] += 10;
[025D] (3A)   Var[442] -= 120;
[0262] (46)   Var[178]++;
[0265] (1A)   Bit[7 + Var[442]] = 1;
[026C] (AC)   Exprmode Var[442] = (4 - 1);
[0277] (1A)   Var[167 + Var[442]] = 1;
[027E] (1A)   Var[165] = 0;
[0283] (16)   Var[442] = getRandomNr(1);
[0287] (80)   breakHere();
[0288] (A8)   unless (Var[165]) goto 0283;
[028D] (48)   if (Var[165] == 120) {
[0294] (1A)     Bit[435 + 2] = 1;
[029B] (14)     print(255,[Pos(233,29),Color(15),Text("Yes.  Hot.")]);
[02B0] (AE)     WaitForMessage();
[02B2] (18)     goto 0092;
[02B5] (48)   } else if (Var[165] == 121) {
[02BF] (1A)     Bit[435 + 3] = 1;
[02C6] (14)     print(255,[Pos(233,29),Color(15),Text("Let's not stand here, let's find\x10out.")]);
[02F6] (AE)     WaitForMessage();
[02F8] (18)     goto 0092;
[02FB] (48)   } else if (Var[165] == 122) {
[0305] (1A)     Bit[435 + 2] = 1;
[030C] (1A)     Bit[435 + 4] = 1;
[0313] (14)     print(255,[Pos(233,29),Color(15),Text("Comfortable?" + wait() + "It's about as comfortable as a\x10coffin.")]);
[0352] (AE)     WaitForMessage();
[0354] (18)     goto 0092;
[0357] (48)   } else if (Var[165] == 123) {
[0361] (14)     print(255,[Pos(233,29),Center(),Color(15),Text("As I'll ever\x10be.")]);
[037D] (18)     /* goto 0380; */
[0380] (**)   }
[0380] (**) }
[0380] (AE) WaitForMessage();
[0382] (0A) startScript(83,[]);
[0385] (A0) stopObjectCode();
END

Script# 212 // Use Tire Repair Kit on Suit
[0000] (5D) setClass(491,[12]);
[0007] (0A) startScript(144,[91,5]);
[0010] (40) cutscene([2]);
[0015] (11) animateCostume(1,251);
[0018] (11) animateCostume(1,10);
[001B] (80) breakHere();
[001C] (80) breakHere();
[001D] (80) breakHere();
[001E] (80) breakHere();
[001F] (11) animateCostume(1,1);
[0022] (D8) printEgo([Text("There, good as new^" + wait() + "^almost.")]);
[0042] (1D) if (classOfIs(491,[134])) {
[004B] (54)   setObjectName(491,"repaired suit with hose");
[0066] (18) } else {
[0069] (54)   setObjectName(491,"repaired suit");
[007A] (**) }
[007A] (AE) WaitForMessage();
[007C] (C0) endCutscene();
[007D] (29) setOwnerOf(946,0);
[0081] (0A) startScript(10,[]);
[0084] (A0) stopObjectCode();
END

Script# 213
[0000] (1C) startSound(202);
[0002] (2E) delay(60);
[0006] (2A) startScript(201,[],F);
[0009] (1C) startSound(201);
[000B] (80) breakHere();
[000C] (80) breakHere();
[000D] (3C) stopSound(202);
[000F] (2E) delay(240);
[0013] (4C) soundKludge([269,201,0,300]);
[0021] (4C) soundKludge([257,201,0]);
[002C] (A0) stopObjectCode();
END

// Object 488: sal-sub-surf
Events:
END

// Object 489: Door
Events:
   3 - 0015
   4 - 0040
   9 - 006D
  5A - 00B8
[0015] (8F) VAR_RESULT = getObjectState(VAR_ME);
[001A] (48) if (VAR_RESULT == 1) {
[0021] (D8)   printEgo([Text("It's already open.")]);
[0036] (18) } else {
[0039] (87)   setState(VAR_ME,1);
[003D] (1C)   startSound(192);
[003F] (**) }
[003F] (00) stopObjectCode();
[0040] (8F) VAR_RESULT = getObjectState(VAR_ME);
[0045] (48) if (VAR_RESULT == 0) {
[004C] (D8)   printEgo([Text("It's already closed.")]);
[0063] (18) } else {
[0066] (87)   setState(VAR_ME,0);
[006A] (1C)   startSound(190);
[006C] (**) }
[006C] (00) stopObjectCode();
[006D] (8F) VAR_RESULT = getObjectState(VAR_ME);
[0072] (48) if (VAR_RESULT == 1) {
[0079] (D8)   printEgo([Text("It's a convenient place to store\x10things.")]);
[00A4] (18) } else {
[00A7] (D8)   printEgo([Text("It's a hatch.")]);
[00B7] (**) }
[00B7] (00) stopObjectCode();
[00B8] (1A) Var[123] = 9;
[00BD] (00) stopObjectCode();
END

// Object 490: Storage Locker
Events:
   3 - 0015
   4 - 0055
   9 - 0080
  5A - 00FD
[0015] (8F) VAR_RESULT = getObjectState(VAR_ME);
[001A] (48) if (VAR_RESULT == 1) {
[0021] (5D)   setClass(490,[154]);
[0028] (D8)   printEgo([Text("It's already open.")]);
[003D] (18) } else {
[0040] (1D)   if (classOfIs(500,[160])) {
[0049] (5D)     setClass(491,[32]);
[0050] (**)   }
[0050] (87)   setState(VAR_ME,1);
[0054] (**) }
[0054] (00) stopObjectCode();
[0055] (8F) VAR_RESULT = getObjectState(VAR_ME);
[005A] (48) if (VAR_RESULT == 0) {
[0061] (D8)   printEgo([Text("It's already closed.")]);
[0078] (18) } else {
[007B] (87)   setState(VAR_ME,0);
[007F] (**) }
[007F] (00) stopObjectCode();
[0080] (8F) VAR_RESULT = getObjectState(VAR_ME);
[0085] (48) if (VAR_RESULT == 0) {
[008C] (D8)   printEgo([Text("It's a convenient place to stow\x10things.")]);
[00B6] (18) } else {
[00B9] (0F)   VAR_RESULT = getObjectState(491);
[00BE] (48)   if (VAR_RESULT == 0) {
[00C5] (D8)     printEgo([Text("There's an old diving suit in\x10here.")]);
[00EB] (18)   } else {
[00EE] (D8)     printEgo([Text("It's empty.")]);
[00FC] (**)   }
[00FC] (**) }
[00FC] (00) stopObjectCode();
[00FD] (1A) Var[123] = 9;
[0102] (00) stopObjectCode();
END

// Object 491: Diving Suit
Events:
   8 - 004F
   9 - 0111
   B - 0015
  5A - 0211
[0015] (90) VAR_RESULT = getObjectOwner(VAR_ME);
[001A] (88) if (VAR_RESULT != VAR_EGO) {
[0021] (D8)   printEgo([Text("It's too heavy to pick up and move\x10around.")]);
[004E] (**) }
[004E] (00) stopObjectCode();
[004F] (1A) Bit[446] = 1;
[0054] (1D) if (classOfIs(491,[140])) {
[005D] (1D)   if (classOfIs(491,[6])) {
[0066] (D8)     printEgo([Text("I'm not putting that on, it's\x10not\x10rigged\x10yet.")]);
[0096] (18)   } else {
[0099] (D8)     printEgo([Text("I'm not putting that on, it\x10won't\x10hold\x10air.")]);
[00C7] (**)   }
[00C7] (1D) } else if (classOfIs(491,[6])) {
[00D3] (D8)   printEgo([Text("I'm not putting that on, there's\x10no\x10air\x10supply.")]);
[0105] (28) } else if (!Local[0]) {
[010D] (0A)   startScript(209,[]);
[0110] (**) }
[0110] (00) stopObjectCode();
[0111] (9D) if (classOfIs(VAR_ME,[12])) {
[011A] (9D)   if (classOfIs(VAR_ME,[134])) {
[0123] (D8)     printEgo([Text("It's a repaired diving suit with an air hose\x10attached.")]);
[015C] (18)   } else {
[015F] (D8)     printEgo([Text("It's a repaired diving\x10suit.")]);
[017E] (**)   }
[017E] (9D) } else if (classOfIs(VAR_ME,[134])) {
[018A] (D8)   printEgo([Text("It's a punctured diving suit with an air\x10hose\x10attached.")]);
[01C4] (18) } else {
[01C7] (40)   cutscene([2]);
[01CC] (D8)   printEgo([Text("It's an old diving suit." + wait() + "Uh-oh^" + wait() + "^there's a small HOLE in\x10it.")]);
[020D] (AE)   WaitForMessage();
[020F] (C0)   endCutscene();
[0210] (**) }
[0210] (00) stopObjectCode();
[0211] (1A) Var[123] = 9;
[0216] (00) stopObjectCode();
END

// Object 492: Air Compressor Switch
Events:
   6 - 0063
   7 - 003C
   8 - 0018
   9 - 0094
  5A - 00DB
[0018] (68) VAR_RESULT = isScriptRunning(201);
[001C] (A8) if (VAR_RESULT) {
[0021] (07)   setState(492,1);
[0025] (62)   stopScript(213);
[0027] (3C)   stopSound(201);
[0029] (3C)   stopSound(202);
[002B] (0A)   startScript(202,[1]);
[0031] (18) } else {
[0034] (07)   setState(492,0);
[0038] (2A)   startScript(213,[],F);
[003B] (**) }
[003B] (00) stopObjectCode();
[003C] (68) VAR_RESULT = isScriptRunning(201);
[0040] (28) if (!VAR_RESULT) {
[0045] (07)   setState(492,0);
[0049] (2A)   startScript(213,[],F);
[004C] (18) } else {
[004F] (D8)   printEgo([Text("It's already on.")]);
[0062] (**) }
[0062] (00) stopObjectCode();
[0063] (68) VAR_RESULT = isScriptRunning(201);
[0067] (A8) if (VAR_RESULT) {
[006C] (07)   setState(492,1);
[0070] (62)   stopScript(213);
[0072] (3C)   stopSound(201);
[0074] (3C)   stopSound(202);
[0076] (0A)   startScript(202,[1]);
[007C] (18) } else {
[007F] (D8)   printEgo([Text("It's already off.")]);
[0093] (**) }
[0093] (00) stopObjectCode();
[0094] (68) VAR_RESULT = isScriptRunning(201);
[0098] (A8) if (VAR_RESULT) {
[009D] (D8)   printEgo([Text("It's switched\x10on.")]);
[00B1] (18) } else {
[00B4] (D8)   printEgo([Text("This must be the compressor\x10switch.")]);
[00DA] (**) }
[00DA] (00) stopObjectCode();
[00DB] (1A) Var[123] = 9;
[00E0] (00) stopObjectCode();
END

// Object 493: Air Compressor
Events:
   6 - 0018
   7 - 0018
   8 - 0018
   9 - 001C
  5A - 0061
[0018] (42) chainScript(3,[]);
[001B] (00) stopObjectCode();
[001C] (68) VAR_RESULT = isScriptRunning(201);
[0020] (A8) if (VAR_RESULT) {
[0025] (D8)   printEgo([Text("The machine is pumping\x10air.")]);
[0043] (18) } else {
[0046] (D8)   printEgo([Text("It's an air compressor.")]);
[0060] (**) }
[0060] (00) stopObjectCode();
[0061] (1A) Var[123] = 9;
[0066] (00) stopObjectCode();
END

// Object 494: sal-waving-shirt-anim
Events:
END

// Object 495: sal-air-hose-anim
Events:
END

// Object 496: air-hose
Events:
END

// Object 497: Hoist
Events:
   8 - 0012
   9 - 0026
  5A - 004E
[0012] (48) if (Local[0] == 500) {
[0019] (0A)   startScript(207,[]);
[001C] (18) } else {
[001F] (0A)   startScript(3,[8]);
[0025] (**) }
[0025] (00) stopObjectCode();
[0026] (D8) printEgo([Text("It's a device to lift heavy\x10objects.")]);
[004D] (00) stopObjectCode();
[004E] (1A) Var[123] = 9;
[0053] (00) stopObjectCode();
END

// Object 498: sal-air-lights-anim
Events:
END

// Object 499: sal-winch-anim
Events:
END

// Object 500: Indy in Diving Suit
Events:
   8 - 0018
   9 - 00EE
   B - 0043
   C - 00EA
  5A - 011A
[0018] (48) if (Local[0] == 497) {
[001F] (37)   startObject(497,8,[500]);
[0027] (18) } else {
[002A] (D8)   printEgo([Text("That will never\x10work.")]);
[0042] (**) }
[0042] (00) stopObjectCode();
[0043] (D8) printEgo([Text("I can't lift\x10him.")]);
[0057] (43) Var[445] = getActorX(500);
[005C] (23) Var[446] = getActorY(500);
[0061] (AC) Exprmode Var[442] = (Var[445] - <VAR_RESULT = getActorX(VAR_EGO)>);
[006F] (AC) Exprmode Var[443] = (Var[446] - <VAR_RESULT = getActorY(VAR_EGO)>);
[007D] (78) if (Var[442] < 0) {
[0084] (AC)   Exprmode Var[442] = (0 - Var[442]);
[008F] (**) }
[008F] (78) if (Var[443] < 0) {
[0096] (AC)   Exprmode Var[443] = (0 - Var[443]);
[00A1] (**) }
[00A1] (91) animateCostume(VAR_EGO,255);
[00A5] (84) if (Var[442] <= Var[443]) {
[00AC] (A3)   VAR_RESULT = getActorY(VAR_EGO);
[00B1] (BA)   Var[446] -= VAR_RESULT;
[00B6] (04)   if (Var[446] <= 0) {
[00BD] (91)     animateCostume(VAR_EGO,247);
[00C1] (18)   } else {
[00C4] (91)     animateCostume(VAR_EGO,246);
[00C8] (**)   }
[00C8] (18) } else {
[00CB] (C3)   VAR_RESULT = getActorX(VAR_EGO);
[00D0] (BA)   Var[445] -= VAR_RESULT;
[00D5] (04)   if (Var[445] <= 0) {
[00DC] (91)     animateCostume(VAR_EGO,244);
[00E0] (18)   } else {
[00E3] (91)     animateCostume(VAR_EGO,245);
[00E7] (**)   }
[00E7] (**) }
[00E7] (80) breakHere();
[00E8] (80) breakHere();
[00E9] (00) stopObjectCode();
[00EA] (0A) startScript(211,[]);
[00ED] (00) stopObjectCode();
[00EE] (D8) printEgo([Text("I hope this canvas relic holds\x10together.")]);
[0119] (00) stopObjectCode();
[011A] (1A) Var[123] = 9;
[011F] (00) stopObjectCode();
END
