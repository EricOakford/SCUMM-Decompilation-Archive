// EN
[0000] (9C) roomOps.setScreen(0,200)
[0008] (43) var174 = VAR_VERB_SCRIPT
[000E] (7C) stopScript(var175)
[0012] (43) var176 = var175
[0018] (43) VAR_VERB_SCRIPT = 0
[001E] (43) var175 = 51
[0024] (5D) if (VAR_VERB_SCRIPT != 48) {
[002E] (43)   bitvar6 = 0
[0034] (73) } else {
[0037] (43)   bitvar6 = 1
[003D] (**) }
[003D] (5E) startScript(0,var175,[])
[0047] (5E) startScript(0,201,[])
[0051] (65) stopObjectCodeA()
END

// EX
[0000] (65) stopObjectCodeA()
END

Script# 201
[0000] (68) beginCutscene([2])
[0007] (43) VAR_RESTART_KEY = 322
[000D] (43) VAR_MAINMENU_KEY = 319
[0013] (6B) cursorCommand.initCharset(2)
[0018] (95) beginOverride()
[0019] (73) jump 25f
[001C] (9C) roomOps.darkenPalette(0,16,255)
[0027] (6C) breakHere()
[0028] (5E) startScript(3,205,[202,80,4,4,128])
[0041] (5E) startScript(3,205,[10,10,4,4,128])
[005A] (5E) startScript(3,205,[150,30,4,4,128])
[0073] (5E) startScript(3,205,[300,170,4,4,128])
[008C] (5E) startScript(3,205,[30,150,3,3,180])
[00A5] (5E) startScript(3,205,[185,100,3,3,180])
[00BE] (5E) startScript(3,205,[220,50,3,3,180])
[00D7] (5E) startScript(3,205,[12,96,3,3,180])
[00F0] (5E) startScript(3,205,[80,90,2,2,225])
[0109] (5E) startScript(3,205,[276,52,2,2,225])
[0122] (5E) startScript(3,205,[105,92,2,3,225])
[013B] (5E) startScript(3,205,[45,2,2,2,225])
[0154] (5E) startScript(3,205,[15,90,1,1,255])
[016D] (5E) startScript(3,205,[83,101,1,1,255])
[0186] (5E) startScript(3,205,[188,180,1,1,255])
[019F] (5E) startScript(3,205,[250,1,1,1,255])
[01B8] (5E) startScript(3,205,[32,24,0,0,255])
[01D1] (43) localvar5 = 0
[01D7] (43) localvar0 = 5
[01DD] (5D) while (localvar0 <= 255) {
[01E7] (9C)   roomOps.darkenPalette(localvar0,16,255)
[01F2] (43)   localvar0 = (localvar0 + 7)
[01FC] (43)   localvar2 = getRandomNumber(255)
[0203] (5D)   if ((localvar0 > 70) && !localvar5) {
[0212] (74)     startSound(1)
[0216] (43)     localvar5 = 1
[021C] (**)   }
[021C] (6C)   breakHere()
[021D] (4F)   localvar0++
[0220] (**) }
[0223] (B1) delaySeconds(3)
[0227] (43) localvar0 = 250
[022D] (5D) while (localvar0 >= 0) {
[0237] (9C)   roomOps.darkenPalette(localvar0,0,255)
[0242] (43)   localvar0 = (localvar0 - 15)
[024C] (6C)   breakHere()
[024D] (57)   localvar0--
[0250] (**) }
[0253] (7C) stopScript(204)
[0257] (7C) stopScript(205)
[025B] (6C) breakHere()
[025C] (73) jump 26a
[025F] (5D) if (VAR_OVERRIDE) {
[0265] (75)   stopSound(1)
[0269] (**) }
[0269] (96) endOverride()
[026A] (67) endCutscene()
[026B] (9D) actorOps.setCurActor(2)
[0270] (9D) actorOps.setFollowBoxes()
[0272] (9D) actorOps.setCurActor(3)
[0277] (9D) actorOps.setFollowBoxes()
[0279] (9C) roomOps.screenEffect(-32383)
[027E] (7B) loadRoom(7)
[0282] (66) stopObjectCodeB()
END

Script# 202
[0000] (43) localvar3 = (75 + localvar0)
[000A] (43) localvar5 = 255
[0010] (9C) roomOps.darkenPalette(255,localvar3,localvar3)
[001B] (7F) putActorInXY(localvar0,localvar1,localvar2,1)
[0028] (43) localvar4 = 1
[002E] (5D) while (localvar4 <= 6) {
[0038] (6C)   breakHere()
[0039] (43)   localvar1 = (localvar1 - 7)
[0043] (7F)   putActorInXY(localvar0,localvar1,localvar2,255)
[0050] (43)   localvar5 = (localvar5 - 40)
[005A] (9C)   roomOps.darkenPalette(localvar5,localvar3,localvar3)
[0065] (4F)   localvar4++
[0068] (**) }
[006B] (6C) breakHere()
[006C] (7F) putActorInXY(localvar0,0,0,0)
[0079] (66) stopObjectCodeB()
END

Script# 203
[0000] (66) stopObjectCodeB()
END

Script# 204
[0000] (43) localvar2 = -48
[0006] (43) localvar3 = -48
[000C] (43) localvar0 = localvar2
[0012] (43) localvar1 = localvar3
[0018] (43) localvar4 = localvar0
[001E] (5D) while (localvar4 <= (localvar0 + 416)) {
[002C] (43)   localvar5 = localvar1
[0032] (5D)   while (localvar5 <= (localvar1 + 296)) {
[0040] (5D)     if ((localvar4 < 320) && (localvar5 < 200)) {
[0052] (C9)       kernelSetFunctions.superBlastObject([49,localvar4,localvar5,0,0,255,255,0])
[0071] (**)     }
[0071] (43)     localvar5 = (localvar5 + 143)
[007B] (4F)     localvar5++
[007E] (**)   }
[0081] (43)   localvar4 = (localvar4 + 191)
[008B] (4F)   localvar4++
[008E] (**) }
[0091] (6C) breakHere()
[0092] (43) localvar2 = (localvar2 + 6)
[009C] (5D) if (localvar2 >= 0) {
[00A6] (43)   localvar2 = (localvar2 - 48)
[00B0] (**) }
[00B0] (43) localvar3 = (localvar3 + 6)
[00BA] (5D) if (localvar3 >= 0) {
[00C4] (43)   localvar3 = (localvar3 - 48)
[00CE] (**) }
[00CE] (73) jump c
[00D1] (66) stopObjectCodeB()
END

Script# 205
[0000] (43) localvar5 = localvar0
[0006] (43) localvar6 = localvar1
[000C] (5D) if (localvar2 > 0) {
[0016] (C9)   kernelSetFunctions.superBlastObject([49,localvar5,localvar6,0,0,localvar4,localvar4,0])
[0035] (73) } else {
[0038] (C9)   kernelSetFunctions.superBlastObject([36,localvar5,localvar6,0,0,localvar4,localvar4,0])
[0057] (**) }
[0057] (6C) breakHere()
[0058] (43) localvar5 = (localvar5 + localvar2)
[0062] (5D) if (localvar5 > 320) {
[006C] (43)   localvar5 = (localvar5 - 367)
[0076] (**) }
[0076] (5D) if (localvar5 < -48) {
[0080] (43)   localvar5 = (localvar5 + 367)
[008A] (**) }
[008A] (43) localvar6 = (localvar6 + localvar3)
[0094] (5D) if (localvar6 > 200) {
[009E] (43)   localvar6 = (localvar6 - 247)
[00A8] (**) }
[00A8] (5D) if (localvar6 < -48) {
[00B2] (43)   localvar6 = (localvar6 + 247)
[00BC] (**) }
[00BC] (73) jump c
[00BF] (66) stopObjectCodeB()
END

// Object 35: max-the-object
Events:
   3 - 0044
   4 - 001C
  5B - 0015
[0015] (43) var182 = 1008
[001B] (65) stopObjectCodeA()
[001C] (BB) talkEgo("It's my lil' buddy, ready for action.")
[0043] (65) stopObjectCodeA()
[0044] (83) doSentence(3,localvar0,130,var7)
[0051] (65) stopObjectCodeA()
END

// Object 36: our-sainted-logo
Events:
END

// Object 49: logo-medium-blast
Events:
END
