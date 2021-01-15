/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 39: cross
 */

// EN
[0000] (48) if (VAR_VIDEOMODE == 4) {
[0007] (33)   RoomColor(5,12)
[000D] (33)   RoomColor(0,3)
[0013] (**) }
[0013] (0A) startScript(136,[16]);
[0019] (28) if (!Bit[79]) {
[001E] (0A)   startScript(126,[2]);
[0024] (**) }
[0024] (0C) Resource.loadCostume(37);
[0027] (5D) setClass(3,[0,150,148]);
[0034] (13) ActorOps(3,[Costume(37),Elevation(0),Palette(13,1)]);
[003F] (11) animateCostume(3,250);
[0042] (2D) putActorInRoom(3,39);
[0045] (01) putActor(3,208,108);
[004B] (11) animateCostume(3,6);
[004E] (0C) Resource.loadCostume(36);
[0051] (1A) Local[0] = 4;
[0056] (DD) setClass(Local[0],[0,150,148]);
[0063] (93) ActorOps(Local[0],[Costume(36),Elevation(0)]);
[006C] (91) animateCostume(Local[0],250);
[0070] (46) Local[0]++;
[0073] (44) unless (Local[0] > 7) goto 0056;
[007A] (2D) putActorInRoom(4,39);
[007D] (01) putActor(4,210,114);
[0083] (2D) putActorInRoom(5,39);
[0086] (01) putActor(5,270,104);
[008C] (2D) putActorInRoom(6,39);
[008F] (01) putActor(6,293,101);
[0095] (2D) putActorInRoom(7,39);
[0098] (01) putActor(7,316,124);
[009E] (11) animateCostume(4,6);
[00A1] (11) animateCostume(5,7);
[00A4] (11) animateCostume(6,8);
[00A7] (11) animateCostume(7,9);
[00AA] (A8) if (Bit[119]) {
[00AF] (0C)   Resource.loadCostume(94);
[00B2] (5D)   setClass(8,[0,150,148]);
[00BF] (13)   ActorOps(8,[Costume(94),Elevation(12),WalkSpeed(1,1),InitAnimNr(1),WalkAnimNr(2),StandAnimNr(3)]);
[00D0] (11)   animateCostume(8,248);
[00D3] (2D)   putActorInRoom(8,39);
[00D6] (01)   putActor(8,83,127);
[00DC] (11)   animateCostume(8,3);
[00DF] (**) }
[00DF] (28) if (!Bit[79]) {
[00E4] (26)   setVarRange(Var[299],5,[122,20,56,164,89]);
[00ED] (26)   setVarRange(Var[307],5,[9,20,17,16,12]);
[00F6] (2A)   startScript(123,[5],F);
[00FC] (28)   if (!Var[258]) {
[0101] (28)     unless (!Bit[116]) goto 0106;
[0106] (**)   }
[0106] (**) }
[0106] (A8) if (Bit[119]) {
[010B] (28)   if (!Bit[135]) {
[0110] (2A)     startScript(203,[],F);
[0113] (**)   }
[0113] (**) }
[0113] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (80) breakHere();
[0001] (28) unless (!Bit[88]) goto 0000;
[0006] (62) stopScript(123);
[0008] (24) loadRoomWithEgo(516,40,580,130);
[0010] (A0) stopObjectCode();
END

Script# 201
[0000] (80) breakHere();
[0001] (28) unless (!Bit[88]) goto 0000;
[0006] (62) stopScript(123);
[0008] (24) loadRoomWithEgo(540,41,300,70);
[0010] (A0) stopObjectCode();
END

Script# 202
[0000] (80) breakHere();
[0001] (28) unless (!Bit[88]) goto 0000;
[0006] (62) stopScript(123);
[0008] (24) loadRoomWithEgo(623,46,260,78);
[0010] (A0) stopObjectCode();
END

Script# 203
[0000] (C3) VAR_RESULT = getActorX(VAR_EGO);
[0005] (78) if (VAR_RESULT < 280) {
[000C] (D8)   printEgo([Center(),Text("Wow, the tree's fallen into the sea by the dock!")]);
[0040] (1A)   Bit[135] = 1;
[0045] (**) }
[0045] (80) breakHere();
[0046] (A8) unless (Bit[135]) goto 0000;
[004B] (A0) stopObjectCode();
END

// Object 509
Events:
   A - 0018
[0018] (1A) Var[219] = 2;
[001D] (24) loadRoomWithEgo(460,36,568,114);
[0025] (00) stopObjectCode();
END

// Object 510
Events:
   A - 001B
  36 - 001B
[001B] (0A) startScript(201,[]);
[001E] (00) stopObjectCode();
END

// Object 511
Events:
   A - 001B
  36 - 001B
[001B] (0A) startScript(200,[]);
[001E] (00) stopObjectCode();
END

// Object 512
Events:
   A - 001B
  36 - 001B
[001B] (0A) startScript(202,[]);
[001E] (00) stopObjectCode();
END

// Object 513
Events:
   A - 0018
[0018] (0A) startScript(202,[]);
[001B] (00) stopObjectCode();
END

// Object 514: Sky
Events:
  36 - 0027
  38 - 0021
  53 - 004F
[0021] (1A) Var[200] = 515;
[0026] (00) stopObjectCode();
[0027] (14) print(1,[Center(),Text("The view from the cliff is better.")]);
[004E] (00) stopObjectCode();
[004F] (40) cutscene([]);
[0051] (1A) Bit[73] = 1;
[0056] (80) breakHere();
[0057] (28) unless (!Bit[72]) goto 0056;
[005C] (1A) Bit[70] = 0;
[0061] (80) breakHere();
[0062] (28) unless (!Bit[71]) goto 0061;
[0067] (14) print(1,[Center(),Text("Think I'll have to get closer first.")]);
[0090] (80) breakHere();
[0091] (C0) endCutscene();
[0092] (00) stopObjectCode();
END

// Object 515
Events:
END
