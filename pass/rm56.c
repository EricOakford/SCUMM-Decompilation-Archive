/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 56: Melee High Street (high-stre)
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(15,2)
[000D] (33)   RoomColor(0,3)
[0013] (33)   RoomColor(3,9)
[0019] (**) }
[0019] (A6) setVarRange(Var[155],6,[0,160,347,39,120,247]);
[0029] (26) setVarRange(Var[161],6,[110,74,130,79,101,120]);
[0033] (1A) Var[374] = 200;
[0038] (2A) startScript(83,[6,3],F);
[0041] (1A) Bit[29] = 1;
[0046] (00) stopObjectCode();
END

// EX
[0000] (62) stopScript(83);
[0002] (0A) startScript(84,[]);
[0005] (00) stopObjectCode();
END

Script# 200
[0000] (16) Local[1] = getRandomNr(5);
[0004] (48) if (Local[1] == 5) {
[000B] (07)   setState(427,1);
[000F] (1C)   startSound(82);
[0011] (80)   breakHere();
[0012] (80)   breakHere();
[0013] (**) }
[0013] (48) if (Local[1] == 4) {
[001A] (07)   setState(426,1);
[001E] (1C)   startSound(82);
[0020] (80)   breakHere();
[0021] (80)   breakHere();
[0022] (**) }
[0022] (AD) putActorInRoom(Local[0],56);
[0026] (E1) putActor(Local[0],Var[155 + Local[1]],Var[161 + Local[1]]);
[0031] (48) if (Local[1] == 5) {
[0038] (80)   breakHere();
[0039] (80)   breakHere();
[003A] (07)   setState(427,0);
[003E] (1C)   startSound(83);
[0040] (80)   breakHere();
[0041] (7C)   VAR_RESULT = isSoundRunning(83);
[0045] (28)   unless (!VAR_RESULT) goto 0040;
[004A] (**) }
[004A] (48) if (Local[1] == 4) {
[0051] (80)   breakHere();
[0052] (80)   breakHere();
[0053] (07)   setState(426,0);
[0057] (1C)   startSound(83);
[0059] (80)   breakHere();
[005A] (7C)   VAR_RESULT = isSoundRunning(83);
[005E] (28)   unless (!VAR_RESULT) goto 0059;
[0063] (**) }
[0063] (16) Local[2] = getRandomNr(5);
[0067] (88) unless (Local[2] != Local[1]) goto 0063;
[006E] (FE) walkActorTo(Local[0],Var[155 + Local[2]],Var[161 + Local[2]]);
[0079] (AE) WaitForActor(Local[0]);
[007D] (48) if (Local[2] == 5) {
[0084] (07)   setState(427,1);
[0088] (1C)   startSound(82);
[008A] (80)   breakHere();
[008B] (80)   breakHere();
[008C] (**) }
[008C] (48) if (Local[2] == 4) {
[0093] (07)   setState(426,1);
[0097] (1C)   startSound(82);
[0099] (80)   breakHere();
[009A] (80)   breakHere();
[009B] (**) }
[009B] (AD) putActorInRoom(Local[0],0);
[009F] (48) if (Local[2] == 5) {
[00A6] (80)   breakHere();
[00A7] (80)   breakHere();
[00A8] (07)   setState(427,0);
[00AC] (1C)   startSound(83);
[00AE] (80)   breakHere();
[00AF] (7C)   VAR_RESULT = isSoundRunning(83);
[00B3] (28)   unless (!VAR_RESULT) goto 00AE;
[00B8] (**) }
[00B8] (48) if (Local[2] == 4) {
[00BF] (80)   breakHere();
[00C0] (80)   breakHere();
[00C1] (07)   setState(426,0);
[00C5] (1C)   startSound(83);
[00C7] (80)   breakHere();
[00C8] (7C)   VAR_RESULT = isSoundRunning(83);
[00CC] (28)   unless (!VAR_RESULT) goto 00C7;
[00D1] (**) }
[00D1] (A0) stopObjectCode();
END

// Object 424: Archway
Events:
   A - 001F
[001F] (24) loadRoomWithEgo(439,57,-1,-1);
[0027] (00) stopObjectCode();
END

// Object 425: Doorway
Events:
   A - 001F
[001F] (24) loadRoomWithEgo(401,54,-1,-1);
[0027] (00) stopObjectCode();
END

// Object 426: Church Door
Events:
   1 - 0032
   8 - 0032
   9 - 0032
  5A - 002C
[002C] (1A) Var[194] = 9;
[0031] (00) stopObjectCode();
[0032] (D8) printEgo([Text("Only real pirates can go in there.")]);
[0057] (00) stopObjectCode();
END

// Object 427: Store Door
Events:
   1 - 0031
   8 - 0031
   9 - 0031
  5A - 002B
[002B] (1A) Var[194] = 9;
[0030] (00) stopObjectCode();
[0031] (D8) printEgo([Text("I can't do that. This is a demo." + wait() + "Darn.")]);
[005B] (00) stopObjectCode();
END
