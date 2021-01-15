/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 26: Opening Train (train)
 */

// EN
[0000] (5D) setClass(9,[150,148]);
[000A] (13) ActorOps(9,[Elevation(0)]);
[0010] (2D) putActorInRoom(9,26);
[0013] (01) putActor(9,2000,0);
[0019] (48) if (VAR_VIDEOMODE == 4) {
[0020] (33)   RoomColor(3,9)
[0026] (33)   RoomColor(5,4)
[002C] (**) }
[002C] (1C) startSound(114);
[002E] (33) SetScreen(32,168)
[0034] (1A) Var[155] = 0;
[0039] (0A) startScript(200,[]);
[003C] (0A) startScript(203,[]);
[003F] (00) stopObjectCode();
END

// EX
[0000] (33) SetScreen(16,144)
[0006] (5D) setClass(10,[22]);
[000D] (5D) setClass(11,[22]);
[0014] (5D) setClass(12,[22]);
[001B] (33) SetPalColor(10,10)
[0021] (33) SetPalColor(13,13)
[0027] (33) SetPalColor(5,5)
[002D] (07) setState(222,0);
[0031] (00) stopObjectCode();
END

Script# 200
[0000] (1A) Var[155] = 1;
[0005] (32) setCameraAt(160);
[0008] (9A) Local[0] = VAR_CAMERA_FAST_X;
[000D] (48) if (VAR_MACHINE_SPEED == 0) {
[0014] (1A)   VAR_CAMERA_FAST_X = 1;
[0019] (**) }
[0019] (44) if (VAR_MACHINE_SPEED > 0) {
[0020] (0A)   startScript(201,[]);
[0023] (**) }
[0023] (44) if (VAR_MACHINE_SPEED > 0) {
[002A] (0A)   startScript(202,[]);
[002D] (**) }
[002D] (80) breakHere();
[002E] (44) unless (VAR_MUSIC_TIMER > 5) goto 002D;
[0035] (05) drawObject(222,255,255);
[003C] (44) if (VAR_MACHINE_SPEED > 0) {
[0043] (0A)   startScript(205,[]);
[0046] (**) }
[0046] (80) breakHere();
[0047] (14) print(254,[Center(),Pos(160,175),Color(6),Text("\x0F & = 1990 LucasArts Entertainment Company.")]);
[007E] (14) print(254,[Center(),Pos(160,185),Color(6),Text("All Rights Reserved.")]);
[009E] (80) breakHere();
[009F] (38) unless (VAR_MUSIC_TIMER >= 28) goto 009E;
[00A6] (3F) drawBox(5,170,315,199,0);
[00B1] (1A) Var[108] = 1;
[00B6] (9A) VAR_CAMERA_FAST_X = Local[0];
[00BB] (A0) stopObjectCode();
END

Script# 201
[0000] (13) ActorOps(9,[Costume(14)]);
[0005] (11) animateCostume(9,250);
[0008] (11) animateCostume(9,6);
[000B] (38) if (VAR_MUSIC_TIMER >= 3) {
[0012] (80)   breakHere();
[0013] (38)   unless (VAR_MUSIC_TIMER >= 20) goto 0012;
[001A] (**) }
[001A] (AC) Exprmode Local[0] = (VAR_CAMERA_POS_X - 200);
[0025] (AC) Exprmode Local[2] = (<VAR_RESULT = getRandomNr(5)> + 7);
[0032] (51) animateCostume(9,Local[2]);
[0036] (41) putActor(9,Local[0],136);
[003C] (80) breakHere();
[003D] (5A) Local[0] += 50;
[0042] (AC) Exprmode Local[1] = (VAR_CAMERA_POS_X + 320);
[004D] (C4) unless (Local[0] > Local[1]) goto 0036;
[0054] (01) putActor(9,2000,136);
[005A] (16) Local[3] = getRandomNr(2);
[005E] (1A) Local[2] = 1;
[0063] (80) breakHere();
[0064] (46) Local[2]++;
[0067] (C4) unless (Local[2] > Local[3]) goto 0063;
[006E] (18) goto 000B;
[0071] (A0) stopObjectCode();
END

Script# 202
[0000] (80) breakHere();
[0001] (A8) unless (Var[155]) goto 0000;
[0006] (1A) Local[3] = 0;
[000B] (48) if (Var[155] == 1) {
[0012] (1A)   Local[1] = 3;
[0017] (1A)   Local[2] = 28;
[001C] (48) } else if (Var[155] == 2) {
[0026] (1A)   Local[1] = 43;
[002B] (1A)   Local[2] = 68;
[0030] (48) } else if (Var[155] == 3) {
[003A] (1A)   Local[1] = 83;
[003F] (1A)   Local[2] = 108;
[0044] (48) } else if (Var[155] == 4) {
[004E] (1A)   Local[1] = 126;
[0053] (1A)   Local[2] = 145;
[0058] (18)   /* goto 005B; */
[005B] (**) }
[005B] (16) VAR_RESULT = getRandomNr(1);
[005F] (48) if (VAR_RESULT == 0) {
[0066] (16)   VAR_RESULT = getRandomNr(1);
[006A] (48)   if (VAR_RESULT == 0) {
[0071] (9A)     Local[3] = Local[1];
[0076] (18)   } else {
[0079] (9A)     Local[3] = Local[2];
[007E] (**)   }
[007E] (**) }
[007E] (1A) Local[0] = 223;
[0083] (A8) if (Local[3]) {
[0088] (C5)   drawObject(Local[0],Local[3],15);
[008F] (80)   breakHere();
[0090] (46)   Local[0]++;
[0093] (C5)   drawObject(Local[0],Local[3],15);
[009A] (80)   breakHere();
[009B] (46)   Local[0]++;
[009E] (C5)   drawObject(Local[0],Local[3],15);
[00A5] (80)   breakHere();
[00A6] (C6)   Local[0]--;
[00A9] (C5)   drawObject(Local[0],Local[3],15);
[00B0] (**) }
[00B0] (80) breakHere();
[00B1] (18) goto 0000;
[00B4] (A0) stopObjectCode();
END

Script# 203
[0000] (33) SetPalColor(7,10)
[0006] (33) SetPalColor(8,13)
[000C] (33) SetPalColor(8,5)
[0012] (80) breakHere();
[0013] (33) SetPalColor(8,10)
[0019] (33) SetPalColor(7,13)
[001F] (33) SetPalColor(8,5)
[0025] (80) breakHere();
[0026] (33) SetPalColor(8,10)
[002C] (33) SetPalColor(8,13)
[0032] (33) SetPalColor(7,5)
[0038] (80) breakHere();
[0039] (18) goto 0000;
[003C] (A0) stopObjectCode();
END

Script# 204
[0000] (1A) Var[156] = 0;
[0005] (43) Local[1] = getActorX(1);
[000A] (23) Local[2] = getActorY(1);
[000F] (9A) Local[3] = Local[1];
[0014] (61) putActor(1,Local[3],Local[2]);
[001A] (80) breakHere();
[001B] (5A) Local[3] += 9;
[0020] (46) Local[3]++;
[0023] (C4) unless (Local[3] > Local[0]) goto 0014;
[002A] (1A) Var[156] = 1;
[002F] (A0) stopObjectCode();
END

Script# 205
[0000] (5D) setClass(1,[0,148,150]);
[000D] (2D) putActorInRoom(1,26);
[0010] (01) putActor(1,-30,19);
[0016] (11) animateCostume(1,249);
[0019] (13) ActorOps(1,[Costume(11),Elevation(0)]);
[0021] (80) breakHere();
[0022] (38) unless (VAR_MUSIC_TIMER >= 15) goto 0021;
[0029] (11) animateCostume(1,7);
[002C] (0A) startScript(204,[30]);
[0032] (80) breakHere();
[0033] (A8) unless (Var[156]) goto 0032;
[0038] (11) animateCostume(1,8);
[003B] (80) breakHere();
[003C] (11) animateCostume(1,6);
[003F] (0A) startScript(204,[290]);
[0045] (80) breakHere();
[0046] (A8) unless (Var[156]) goto 0045;
[004B] (11) animateCostume(1,7);
[004E] (0A) startScript(204,[360]);
[0054] (80) breakHere();
[0055] (A8) unless (Var[156]) goto 0054;
[005A] (A0) stopObjectCode();
END

// Object 222
Events:
END

// Object 223
Events:
END

// Object 224
Events:
END

// Object 225
Events:
END

// Object 226
Events:
END

// Object 227
Events:
END

// Object 228
Events:
END
