/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 22: Indy's Office Outer (outer-off)
 */

// EN
[0000] (26) setVarRange(Var[156],13,[80,160,100,120,170,130,110,140,150,90,180,190,70]);
[0011] (0C) Resource.loadSound(86);
[0014] (1A) Var[100] = 29;
[0019] (0A) startScript(57,[]);
[001C] (1D) if (classOfIs(170,[6])) {
[0025] (1A)   Var[155] = 1;
[002A] (18) } else {
[002D] (1A)   Var[155] = 4;
[0032] (**) }
[0032] (1A) Local[0] = 0;
[0037] (AC) Exprmode Local[1] = ((Local[0] * 2) + 168);
[0046] (6A) startScript(200,[Local[1],Var[156 + Local[0]]],F,R);
[0051] (46) Local[0]++;
[0054] (44) unless (Local[0] > 9) goto 0037;
[005B] (00) stopObjectCode();
END

// EX
[0000] (5D) setClass(10,[0]);
[0007] (1A) Var[100] = 0;
[000C] (00) stopObjectCode();
END

Script# 200
[0000] (AC) Exprmode Local[2] = (Local[1] / Var[155]);
[000B] (85) drawObject(Local[0],255,255);
[0012] (48) if (VAR_MACHINE_SPEED == 0) {
[0019] (04)   if (Local[1] <= 160) {
[0020] (18)     goto 0052;
[0023] (**)   }
[0023] (**) }
[0023] (48) if (VAR_MACHINE_SPEED == 1) {
[002A] (04)   if (Local[1] <= 130) {
[0031] (18)     goto 0052;
[0034] (**)   }
[0034] (**) }
[0034] (80) breakHere();
[0035] (08) unless (VAR_TALK_ACTOR != 1) goto 0034;
[003C] (2B) delayVariable(Local[2]);
[003F] (46) Local[0]++;
[0042] (85) drawObject(Local[0],255,255);
[0049] (C6) Local[0]--;
[004C] (2B) delayVariable(Local[2]);
[004F] (18) goto 0000;
[0052] (A0) stopObjectCode();
END

// Object 166: Door to Hall
Events:
   1 - 0022
   2 - 002C
   A - 0036
[0022] (0A) startScript(26,[VAR_ME,103]);
[002B] (00) stopObjectCode();
[002C] (0A) startScript(27,[VAR_ME,103]);
[0035] (00) stopObjectCode();
[0036] (8F) if (getState(VAR_ME) == 1) {
[003C] (14)   print(255,[]);
[003F] (AE)   WaitForMessage();
[0041] (24)   loadRoomWithEgo(103,20,-1,-1);
[0049] (**) }
[0049] (00) stopObjectCode();
END

// Object 168
Events:
END

// Object 169
Events:
END

// Object 170
Events:
END

// Object 171
Events:
END

// Object 172
Events:
END

// Object 173
Events:
END

// Object 174
Events:
END

// Object 175
Events:
END

// Object 175
Events:
END

// Object 176
Events:
END

// Object 177
Events:
END

// Object 178
Events:
END

// Object 179
Events:
END

// Object 180
Events:
END

// Object 181
Events:
END

// Object 182
Events:
END

// Object 183
Events:
END

// Object 184
Events:
END

// Object 185
Events:
END

// Object 186
Events:
END

// Object 187
Events:
END

// Object 188
Events:
END

// Object 189
Events:
END

// Object 190
Events:
END

// Object 191
Events:
END

// Object 192
Events:
END

// Object 193
Events:
END

// Object 194: Students
Events:
   1 - 002F
   4 - 002F
   5 - 002F
   6 - 002F
   7 - 002F
   9 - 0066
[002F] (14) print(255,[Color(12),Text("Doctor Jones!  " + keepText())]);
[0046] (14) print(255,[Color(10),Text("HANDS OFF!")]);
[0056] (46) Var[155]++;
[0059] (44) if (Var[155] > 7) {
[0060] (1A)   Var[155] = 7;
[0065] (**) }
[0065] (00) stopObjectCode();
[0066] (16) VAR_RESULT = getRandomNr(25);
[006A] (28) if (!VAR_RESULT) {
[006F] (D8)   printEgo([Text("Boy, do they look pissed!")]);
[008B] (18) } else {
[008E] (D8)   printEgo([Text("They're very angry!")]);
[00A4] (**) }
[00A4] (00) stopObjectCode();
END
