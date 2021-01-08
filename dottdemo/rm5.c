// EN
[0000] (5D) if (isScriptRunning(3)) {
[0007] (5F)   startScriptQuick(200,[])
[000E] (73) } else {
[0011] (5F)   startScriptQuick(93,[1])
[001B] (9C)   roomOps.setScreen(0,200)
[0023] (**) }
[0023] (65) stopObjectCodeA()
END

// EX
[0000] (5D) if (!isScriptRunning(3)) {
[0008] (9C)   roomOps.setScreen(0,144)
[0010] (5F)   startScriptQuick(93,[2])
[001A] (**) }
[001A] (65) stopObjectCodeA()
END

Script# 200 // Bernard Reads Green's Note
[0000] (43) bitvar93 = 0
[0006] (6B) cursorCommand.initCharset(11)
[000B] (9D) actorOps.setCurActor(1)
[0010] (9D) actorOps.setCostume(17)
[0015] (9D) actorOps.setIgnoreBoxes()
[0017] (9D) actorOps.setNeverZClip()
[0019] (9D) actorOps.setScale(255)
[001E] (9D) actorOps.setTalkPos(103,-49)
[0026] (9D) actorOps.setCurActor(3)
[002B] (9D) actorOps.setCostume(19)
[0030] (9D) actorOps.setIgnoreBoxes()
[0032] (9D) actorOps.setNeverZClip()
[0034] (9D) actorOps.setScale(255)
[0039] (9D) actorOps.setCurActor(2)
[003E] (9D) actorOps.setCostume(20)
[0043] (9D) actorOps.setIgnoreBoxes()
[0045] (9D) actorOps.setNeverZClip()
[0047] (9D) actorOps.setScale(255)
[004C] (9D) actorOps.setCurActor(5)
[0051] (9D) actorOps.setCostume(18)
[0056] (9D) actorOps.setIgnoreBoxes()
[0058] (9D) actorOps.setNeverZClip()
[005A] (9D) actorOps.setScale(255)
[005F] (9D) actorOps.setElevation(0)
[0064] (74) startSound(5)
[0068] (AC) soundKludge([-1])
[006F] (AC) soundKludge([270,5,2])
[007C] (AC) soundKludge([271,262,5,0])
[008C] (AC) soundKludge([271,-1])
[0096] (AC) soundKludge([272])
[009D] (AC) soundKludge([-1])
[00A4] (AC) soundKludge([262,5,127])
[00B1] (82) animateActor(1,250)
[00B8] (7F) putActorInXY(1,137,51,5)
[00C5] (82) animateActor(1,6)
[00CC] (82) animateActor(5,250)
[00D3] (7F) putActorInXY(5,77,150,5)
[00E0] (82) animateActor(5,6)
[00E7] (9D) actorOps.setCurActor(1)
[00EC] (9D) actorOps.setTalkFrame(6,9)
[00F4] (BA) talkActor(sound(0x1E503, 0x16) + "It's from my old friend Green Tentacle^",1)
[0130] (CA) delayFrames(13)
[0134] (6C) breakHere()
[0135] (82) animateActor(3,250)
[013C] (7F) putActorInXY(3,291,136,5)
[0149] (82) animateActor(3,6)
[0150] (82) animateActor(2,250)
[0157] (7F) putActorInXY(2,291,136,5)
[0164] (82) animateActor(2,6)
[016B] (CA) delayFrames(7)
[016F] (A9) wait.waitForMessage()
[0171] (9D) actorOps.setCurActor(1)
[0176] (9D) actorOps.setTalkFrame(7,9)
[017E] (82) animateActor(1,7)
[0185] (BA) talkActor(sound(0x255BF, 0xE) + "He says that Purple Tentacle's mutated into an insane genius^",1)
[01D7] (CA) delayFrames(23)
[01DB] (CA) delayFrames(3)
[01DF] (A9) wait.waitForMessage()
[01E1] (9D) actorOps.setCurActor(1)
[01E6] (9D) actorOps.setTalkFrame(8,9)
[01EE] (82) animateActor(1,8)
[01F5] (BA) talkActor(sound(0x30B96, 0xA) + "^and Doctor Fred's going to kill them both!",1)
[0235] (CA) delayFrames(21)
[0239] (CA) delayFrames(27)
[023D] (6C) breakHere()
[023E] (A9) wait.waitForMessage()
[0240] (43) bitvar93 = 1
[0246] (AC) soundKludge([256,5,8])
[0253] (AC) soundKludge([-1])
[025A] (AC) soundKludge([263,5,0,109,VAR_SOUNDRESULT])
[026D] (66) stopObjectCodeB()
END

// Object 25
Events:
END
