// EN
[0000] (9C) roomOps.setScreen(0,200)
[0008] (5D) if (var146 != 4) {
[0012] (74)   startSound(1)
[0016] (5E)   startScript(0,200,[])
[0020] (73) } else {
[0023] (5E)   startScript(0,201,[])
[002D] (**) }
[002D] (65) stopObjectCodeA()
END

// EX
[0000] (65) stopObjectCodeA()
END

Script# 200 // Start Demo
[0000] (68) beginCutscene([2])
[0007] (7A) setCameraAt(160)
[000B] (70) setState(36,0)
[0012] (9C) roomOps.darkenPalette(0,0,255)
[001D] (43) localvar0 = 5
[0023] (5D) while (localvar0 <= 255) {
[002D] (9C)   roomOps.darkenPalette(localvar0,0,255)
[0038] (43)   localvar0 = (localvar0 + 12)
[0042] (43)   localvar2 = getRandomNumber(255)
[0049] (6C)   breakHere()
[004A] (4F)   localvar0++
[004D] (**) }
[0050] (9C) roomOps.darkenPalette(255,0,255)
[005B] (B1) delaySeconds(4)
[005F] (43) localvar0 = 250
[0065] (5D) while (localvar0 >= 0) {
[006F] (9C)   roomOps.darkenPalette(localvar0,0,255)
[007A] (43)   localvar0 = (localvar0 - 15)
[0084] (6C)   breakHere()
[0085] (57)   localvar0--
[0088] (**) }
[008B] (9C) roomOps.darkenPalette(0,0,255)
[0096] (73) jump 99
[0099] (67) endCutscene()
[009A] (9C) roomOps.screenEffect(-32383)
[009F] (75) stopSound(1)
[00A3] (7B) loadRoom(5)
[00A7] (66) stopObjectCodeB()
END

Script# 201 // Finish Demo
[0000] (7A) setCameraAt(480)
[0004] (43) VAR_TIMER_NEXT = 6
[000A] (AC) soundKludge([269,4,96,1])
[001A] (CA) delayFrames(10)
[001E] (9B) resourceRoutines.lockSound(3)
[0024] (9B) resourceRoutines.loadSound(3)
[0026] (74) startSound(3)
[002A] (CA) delayFrames(19)
[002E] (6C) breakHere()
[002F] (5D) unless (!isSoundRunning(3)) jump 2e
[0037] (6C) breakHere()
[0038] (AC) soundKludge([269,4,127,10])
[0048] (B1) delaySeconds(2)
[004C] (AC) soundKludge([268,4,0,2])
[005C] (B1) delaySeconds(5)
[0060] (6C) breakHere()
[0061] (9B) resourceRoutines.unlockSound(4)
[0066] (9B) resourceRoutines.unlockSound(3)
[006B] (AE) systemOps.restartGame()
[006D] (66) stopObjectCodeB()
END
