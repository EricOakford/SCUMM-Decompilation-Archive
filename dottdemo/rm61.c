// EN
[0000] (5F) startScriptQuick(201,[])
[0007] (74) startSound(43)
[000B] (5F) startScriptQuick(200,[])
[0012] (65) stopObjectCodeA()
END

// EX
[0000] (AC) soundKludge([269,43,0,90])
[0010] (AC) soundKludge([269,44,0,90])
[0020] (AC) soundKludge([269,45,0,90])
[0030] (AC) soundKludge([-1])
[0037] (AC) soundKludge([257,43,0])
[0044] (AC) soundKludge([257,44,0])
[0051] (AC) soundKludge([257,45,0])
[005E] (AC) soundKludge([269,43,0,30])
[006E] (AC) soundKludge([269,44,0,30])
[007E] (AC) soundKludge([269,45,0,30])
[008E] (70) setState(714,0)
[0095] (65) stopObjectCodeA()
END

Script# 200
[0000] (9C) roomOps.setPalette(1)
[0005] (9B) resourceRoutines.loadCostume(325)
[000A] (43) VAR_VERB_SCRIPT = 202
[0010] (9D) actorOps.setCurActor(11)
[0015] (9D) actorOps.init()
[0017] (9D) actorOps.setCostume(325)
[001C] (9D) actorOps.setIgnoreBoxes()
[001E] (9D) actorOps.setNeverZClip()
[0020] (9D) actorOps.setScale(1)
[0025] (9D) actorOps.setWalkSpeed(1,3)
[002D] (82) animateActor(11,250)
[0034] (7F) putActorInXY(11,0,0,0)
[0041] (B1) delaySeconds(2)
[0045] (74) startSound(44)
[0049] (43) localvar1 = 100
[004F] (7F) putActorInXY(11,160,localvar1,61)
[005C] (43) localvar0 = 1
[0062] (9D) actorOps.setCurActor(11)
[0067] (9D) actorOps.setScale(localvar0)
[006C] (43) localvar0 = (getActorScaleX(11) * 2)
[0077] (5D) if (localvar0 > 255) {
[0081] (43)   localvar0 = 255
[0087] (**) }
[0087] (9D) actorOps.setCurActor(11)
[008C] (9D) actorOps.setScale(localvar0)
[0091] (43) localvar1 = (localvar1 - 3)
[009B] (7F) putActorInXY(11,160,localvar1,255)
[00A8] (6C) breakHere()
[00A9] (5D) unless ((localvar0 == 255)) jump 6c
[00B3] (B1) delaySeconds(1)
[00B7] (AC) soundKludge([9,43])
[00C1] (74) startSound(45)
[00C5] (B6) printDebug.begin()
[00C7] (B6) printDebug.msg(sound(0x6A414, 0xA) + " ")
[00DB] (61) drawObject(714,0)
[00E2] (B1) delaySeconds(3)
[00E6] (5F) startScriptQuick(202,[])
[00ED] (66) stopObjectCodeB()
END

Script# 201
[0000] (9C) roomOps.darkenPalette(255,136,175)
[000B] (9C) roomOps.darkenPalette(150,150,750,16,55)
[001C] (6C) breakHere()
[001D] (9C) roomOps.darkenPalette(255,16,55)
[0028] (9C) roomOps.darkenPalette(150,150,750,56,95)
[0039] (6C) breakHere()
[003A] (9C) roomOps.darkenPalette(255,56,95)
[0045] (9C) roomOps.darkenPalette(150,150,750,96,135)
[0056] (6C) breakHere()
[0057] (9C) roomOps.darkenPalette(255,96,135)
[0062] (9C) roomOps.darkenPalette(150,150,750,136,175)
[0073] (6C) breakHere()
[0074] (73) jump 0
[0077] (66) stopObjectCodeB()
END

Script# 202
[0000] (6B) cursorCommand.userPutOff()
[0002] (7C) stopScript(200)
[0006] (61) drawObject(714,2)
[000D] (5D) if (getActorRoom(11) == VAR_ROOM) {
[0018] (43)   localvar3 = getActorScaleX(11)
[001F] (43)   localvar4 = getObjectY(11)
[0026] (5D)   while (localvar3 > 0) {
[0030] (43)     localvar3 = (getActorScaleX(11) / 3)
[003B] (9D)     actorOps.setCurActor(11)
[0040] (9D)     actorOps.setScale(localvar3)
[0045] (43)     localvar4 = (localvar4 + 3)
[004F] (7F)     putActorInXY(11,160,localvar4,255)
[005C] (6C)     breakHere()
[005D] (**)   }
[0060] (7F)   putActorInXY(11,0,0,0)
[006D] (B0)   delay(30)
[0071] (**) }
[0071] (43) bitvar93 = 1
[0077] (66) stopObjectCodeB()
END
