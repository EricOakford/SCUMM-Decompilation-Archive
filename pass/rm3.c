/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 3: Lucasfilm Logo (logo)
 */

// EN
[0000] (1A) VAR_TMR_1 = 0;
[0005] (1A) Var[108] = 0;
[000A] (28) if (!Var[108]) {
[000F] (A8)   if (Bit[155]) {
[0014] (42)     chainScript(203,[]);
[0017] (18)   } else {
[001A] (0A)     startScript(201,[]);
[001D] (**)   }
[001D] (**) }
[001D] (00) stopObjectCode();
END

// EX
[0000] (0F) if (getState(942) == 1) {
[0006] (1A)   Local[0] = 1;
[000B] (AD)   putActorInRoom(Local[0],0);
[000F] (46)   Local[0]++;
[0012] (44)   unless (Local[0] > 9) goto 000B;
[0019] (18) } else {
[001C] (14)   print(255,[Text(" ")]);
[0021] (**) }
[0021] (1A) VAR_TIMER_NEXT = 6;
[0026] (00) stopObjectCode();
END

Script# 200
[0000] (80) breakHere();
[0001] (C4) unless (Var[155] > Local[0]) goto 0000;
[0008] (1A) Local[2] = 1;
[000D] (83) VAR_RESULT = getActorRoom(Local[2]);
[0012] (48) if (VAR_RESULT == 0) {
[0019] (DD)   setClass(Local[2],[150]);
[0020] (93)   ActorOps(Local[2],[Costume(2),Palette(5,1)]);
[0029] (AD)   putActorInRoom(Local[2],3);
[002D] (E1)   putActor(Local[2],Local[0],Local[1]);
[0034] (91)   animateCostume(Local[2],250);
[0038] (91)   animateCostume(Local[2],2);
[003C] (80)   breakHere();
[003D] (80)   breakHere();
[003E] (80)   breakHere();
[003F] (80)   breakHere();
[0040] (80)   breakHere();
[0041] (80)   breakHere();
[0042] (80)   breakHere();
[0043] (80)   breakHere();
[0044] (80)   breakHere();
[0045] (80)   breakHere();
[0046] (80)   breakHere();
[0047] (80)   breakHere();
[0048] (80)   breakHere();
[0049] (80)   breakHere();
[004A] (80)   breakHere();
[004B] (80)   breakHere();
[004C] (80)   breakHere();
[004D] (80)   breakHere();
[004E] (AD)   putActorInRoom(Local[2],0);
[0052] (DD)   setClass(Local[2],[22]);
[0059] (18) } else {
[005C] (46)   Local[2]++;
[005F] (44)   unless (Local[2] > 9) goto 000D;
[0066] (**) }
[0066] (A0) stopObjectCode();
END

Script# 201
[0000] (1A) VAR_TIMER_NEXT = 5;
[0005] (1A) Local[0] = 1;
[000A] (AD) putActorInRoom(Local[0],0);
[000E] (46) Local[0]++;
[0011] (44) unless (Local[0] > 9) goto 000A;
[0018] (80) breakHere();
[0019] (80) breakHere();
[001A] (1A) VAR_TMR_1 = 0;
[001F] (07) setState(942,1);
[0023] (80) breakHere();
[0024] (9A) Local[1] = VAR_TMR_1;
[0029] (78) if (Local[1] < 40) {
[0030] (1A)   VAR_MACHINE_SPEED = 2;
[0035] (78) } else if (Local[1] < 100) {
[003F] (1A)   VAR_MACHINE_SPEED = 1;
[0044] (18) } else {
[0047] (1A)   VAR_MACHINE_SPEED = 0;
[004C] (**) }
[004C] (48) if (VAR_MACHINE_SPEED == 0) {
[0053] (1A)   VAR_CAMERA_FAST_X = 1;
[0058] (18) } else {
[005B] (1A)   VAR_CAMERA_FAST_X = 0;
[0060] (**) }
[0060] (44) if (VAR_MACHINE_SPEED > 0) {
[0067] (4A)   startScript(200,[43,51],R);
[0070] (4A)   startScript(200,[78,100],R);
[0079] (4A)   startScript(200,[104,61],R);
[0082] (4A)   startScript(200,[135,87],R);
[008B] (4A)   startScript(200,[167,62],R);
[0094] (4A)   startScript(200,[200,95],R);
[009D] (4A)   startScript(200,[218,51],R);
[00A6] (4A)   startScript(200,[250,109],R);
[00AF] (4A)   startScript(200,[280,51],R);
[00B8] (**) }
[00B8] (44) if (VAR_MACHINE_SPEED > 0) {
[00BF] (1A)   Var[155] = 0;
[00C4] (80)   breakHere();
[00C5] (5A)   Var[155] += 10;
[00CA] (44)   unless (Var[155] > 320) goto 00C4;
[00D1] (80)   breakHere();
[00D2] (68)   VAR_RESULT = isScriptRunning(200);
[00D6] (28)   unless (!VAR_RESULT) goto 00D1;
[00DB] (18) } else {
[00DE] (2E)   delay(160);
[00E2] (**) }
[00E2] (1A) Var[108] = 1;
[00E7] (A0) stopObjectCode();
END

Script# 202 // Loading game
[0000] (14) print(255,[Text("Loading Game^")]);
[0011] (80) breakHere();
[0012] (A8) unless (Var[108]) goto 0000;
[0017] (A0) stopObjectCode();
END

Script# 203 // Opening Credits
[0000] (2C) InitCharset(2);
[0003] (40) cutscene([]);
[0005] (07) setState(942,0);
[0009] (2E) delay(120);
[000D] (58) beginOverride();
[000F] (18) goto 01C7;
[0012] (14) print(254,[Pos(20,14),Color(12),Text("Indiana Jones and the Last Crusade")]);
[003F] (14) print(254,[Pos(20,23),Color(4),Text("   created by Noah Falstein, David Fox," + newline() + "   and Ron Gilbert.")]);
[0086] (14) print(254,[Pos(20,54),Color(12),Text(newline() + "The Secret of Monkey Island")]);
[00AE] (14) print(254,[Pos(20,72),Color(4),Text("   created by Ron Gilbert.")]);
[00D3] (14) print(254,[Pos(20,94),Color(12),Text(newline() + "LOOM")]);
[00E4] (14) print(254,[Pos(20,122),Color(4),Text("   created by Brian Moriarty.")]);
[010C] (14) print(254,[Pos(20,134),Color(12),Text(newline() + "Lucasfilm Games Passport to Adventure")]);
[013E] (14) print(254,[Pos(20,152),Color(4),Text("   pieced together by Tami Borowick," + newline() + "   Sean Clark, Tony Hsieh, and Mike Stemmle." + newline()newline() + "             press \x19esc\x19 to restart^")]);
[01C3] (2E) delay(3600);
[01C7] (33) SetScreen(0,200)
[01CD] (98) systemOps(1);
[01CF] (C0) endCutscene();
[01D0] (A0) stopObjectCode();
END

// Object 942
Events:
END