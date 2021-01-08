// EN
[0000] (5E) startScript(1,201,[])
[000A] (5F) startScriptQuick(5,[])
[0011] (65) stopObjectCodeA()
END

// EX
[0000] (7C) stopScript(5)
[0004] (65) stopObjectCodeA()
END

Script# 200
[0000] (CA) delayFrames(4)
[0004] (43) bitvar327 = 1
[000A] (6C) breakHere()
[000B] (43) bitvar327 = 0
[0011] (CA) delayFrames(11)
[0015] (73) jump 0
[0018] (66) stopObjectCodeB()
END

Script# 201
[0000] (9D) actorOps.setCurActor(10)
[0005] (9D) actorOps.init()
[0007] (9D) actorOps.setCostume(12)
[000C] (9D) actorOps.setIgnoreBoxes()
[000E] (9D) actorOps.setNeverZClip()
[0010] (9D) actorOps.setElevation(20)
[0015] (82) animateActor(10,250)
[001C] (7F) putActorInXY(10,160,120,2)
[0029] (9D) actorOps.setCurActor(11)
[002E] (9D) actorOps.init()
[0030] (9D) actorOps.setCostume(13)
[0035] (9D) actorOps.setIgnoreBoxes()
[0037] (9D) actorOps.setNeverZClip()
[0039] (82) animateActor(11,250)
[0040] (7F) putActorInXY(11,160,100,2)
[004D] (82) animateActor(10,6)
[0054] (82) animateActor(11,6)
[005B] (5E) startScript(1,200,[])
[0065] (66) stopObjectCodeB()
END

// Object 18
Events:
END

// Object 19
Events:
END

// Object 20
Events:
END

// Object 21
Events:
END

// Object 22
Events:
END
