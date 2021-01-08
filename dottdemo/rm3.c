// EN
[0000] (5D) if (isScriptRunning(3)) {
[0007] (AC)   soundKludge([268,4,0,4])
[0017] (5F)   startScriptQuick(200,[])
[001E] (73) } else {
[0021] (5F)   startScriptQuick(93,[1])
[002B] (9C)   roomOps.setScreen(0,200)
[0033] (**) }
[0033] (65) stopObjectCodeA()
END

// EX
[0000] (AC) soundKludge([269,4,70,120])
[0010] (5D) if (!isScriptRunning(3)) {
[0018] (9C)   roomOps.setScreen(0,144)
[0020] (5F)   startScriptQuick(93,[2])
[002A] (**) }
[002A] (AC) soundKludge([257,4,0])
[0037] (AC) soundKludge([269,4,0,60])
[0047] (65) stopObjectCodeA()
END

Script# 200 // Purple Speaks
[0000] (43) bitvar93 = 0
[0006] (9D) actorOps.setCurActor(7)
[000B] (9D) actorOps.init()
[000D] (9D) actorOps.setCostume(14)
[0012] (9D) actorOps.setIgnoreBoxes()
[0014] (9D) actorOps.setNeverZClip()
[0016] (9D) actorOps.setScale(255)
[001B] (9D) actorOps.setTalkColor(5)
[0020] (9D) actorOps.setTalkPos(-25,-98)
[0028] (82) animateActor(7,250)
[002F] (7F) putActorInXY(7,160,100,3)
[003C] (82) animateActor(7,6)
[0043] (6C) breakHere()
[0044] (6B) cursorCommand.initCharset(12)
[0049] (6B) cursorCommand.charsetColors([0,0,0])
[0057] (CA) delayFrames(5)
[005B] (B8) printActor.begin(7)
[0060] (B8) printActor.color(5)
[0065] (B8) printActor.mumble()
[0067] (B8) printActor.msg(sound(0x181E7, 0x16) + "TAKE ON " + wait() + "THE WORLD!!!")
[0090] (CA) delayFrames(8)
[0094] (82) animateActor(7,7)
[009B] (CA) delayFrames(17)
[009F] (82) animateActor(7,8)
[00A6] (CA) delayFrames(6)
[00AA] (9C) roomOps.setPalColor(214,235,255,145)
[00B8] (9C) roomOps.setPalColor(242,105,250,194)
[00C6] (CA) delayFrames(2)
[00CA] (9C) roomOps.darkenPalette(255,145,145)
[00D5] (9C) roomOps.darkenPalette(255,194,194)
[00E0] (6C) breakHere()
[00E1] (9C) roomOps.setPalColor(214,235,255,145)
[00EF] (9C) roomOps.setPalColor(242,105,250,194)
[00FD] (CA) delayFrames(3)
[0101] (9C) roomOps.darkenPalette(255,145,145)
[010C] (9C) roomOps.darkenPalette(255,194,194)
[0117] (CA) delayFrames(2)
[011B] (9C) roomOps.setPalColor(214,235,255,145)
[0129] (9C) roomOps.setPalColor(242,105,250,194)
[0137] (CA) delayFrames(2)
[013B] (9C) roomOps.darkenPalette(255,145,145)
[0146] (9C) roomOps.darkenPalette(255,194,194)
[0151] (CA) delayFrames(18)
[0155] (6B) cursorCommand.initCharset(2)
[015A] (43) bitvar93 = 1
[0160] (66) stopObjectCodeB()
END

// Object 23
Events:
END
