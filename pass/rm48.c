/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 48: Elder Cutscene (cu-elder)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(2,11)
[000D] (**) }
[000D] (1A) Var[321] = 201;
[0012] (05) drawObject(944,255,255);
[0019] (0A) startScript(200,[]);
[001C] (70) lights(11,0,0);
[0020] (00) stopObjectCode();
END

// EX
[0000] (1A) Bit[88] = 0;
[0005] (00) stopObjectCode();
END

Script# 200
[0000] (1A) Bit[88] = 0;
[0005] (A6) setVarRange(Local[4],5,[273,264,285,277,278]);
[0013] (26) setVarRange(Local[9],5,[16,30,41,45,76]);
[001C] (0C) Resource.loadCostume(32);
[001F] (5D) setClass(12,[0,150,148]);
[002C] (13) ActorOps(12,[Costume(32),Elevation(0),InitAnimNr(1),Palette(13,1)]);
[0039] (11) animateCostume(12,250);
[003C] (1A) Local[0] = 0;
[0041] (80) breakHere();
[0042] (9A) Local[1] = Local[4 + Local[0]];
[0049] (9A) Local[2] = Local[9 + Local[0]];
[0050] (2D) putActorInRoom(12,48);
[0053] (61) putActor(12,Local[1],Local[2]);
[0059] (11) animateCostume(12,6);
[005C] (1A) Bit[88] = 1;
[0061] (1A) Local[3] = 11;
[0066] (C6) Local[3]--;
[0069] (80) breakHere();
[006A] (28) unless (!Local[3]) goto 0066;
[006F] (2D) putActorInRoom(12,0);
[0072] (1A) Bit[88] = 0;
[0077] (46) Local[0]++;
[007A] (44) unless (Local[0] > 4) goto 0041;
[0081] (1A) Local[0] = 3;
[0086] (80) breakHere();
[0087] (9A) Local[1] = Local[4 + Local[0]];
[008E] (9A) Local[2] = Local[9 + Local[0]];
[0095] (2D) putActorInRoom(12,48);
[0098] (61) putActor(12,Local[1],Local[2]);
[009E] (11) animateCostume(12,6);
[00A1] (1A) Bit[88] = 1;
[00A6] (1A) Local[3] = 11;
[00AB] (C6) Local[3]--;
[00AE] (80) breakHere();
[00AF] (28) unless (!Local[3]) goto 00AB;
[00B4] (2D) putActorInRoom(12,0);
[00B7] (1A) Bit[88] = 0;
[00BC] (C6) Local[0]--;
[00BF] (78) unless (Local[0] < 1) goto 0086;
[00C6] (18) goto 003C;
[00C9] (A0) stopObjectCode();
END

Script# 201
[0000] (05) drawObject(945,255,255);
[0007] (80) breakHere();
[0008] (05) drawObject(946,255,255);
[000F] (2E) delay(60);
[0013] (05) drawObject(945,255,255);
[001A] (80) breakHere();
[001B] (05) drawObject(944,255,255);
[0022] (80) breakHere();
[0023] (A0) stopObjectCode();
END

// Object 944
Events:
END

// Object 945
Events:
END

// Object 946
Events:
END
