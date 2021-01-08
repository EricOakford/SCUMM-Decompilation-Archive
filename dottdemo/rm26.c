// EN
[0000] (5D) if (var136 == 69) {
[000A] (9C)   roomOps.setScreen(0,144)
[0012] (5E)   startScript(0,215,[])
[001C] (**) }
[001C] (65) stopObjectCodeA()
END

// EX
[0000] (65) stopObjectCodeA()
END

Script# 200
[0000] (79) actorFollowCamera(1)
[0004] (70) setState(191,1)
[000B] (7F) putActorInXY(5,0,0,0)
[0018] (82) animateActor(7,249)
[001F] (9D) actorOps.setCurActor(7)
[0024] (9D) actorOps.init()
[0026] (9D) actorOps.setCostume(107)
[002B] (9D) actorOps.setIgnoreBoxes()
[002D] (9D) actorOps.setNeverZClip()
[002F] (9D) actorOps.setScale(255)
[0034] (9D) actorOps.setTalkColor(217)
[0039] (70) setState(189,0)
[0040] (7F) putActorInXY(7,115,139,26)
[004D] (9D) actorOps.setCurActor(1)
[0052] (9D) actorOps.setCostume(108)
[0057] (A9) wait.waitForCamera()
[0059] (82) animateActor(1,6)
[0060] (CA) delayFrames(8)
[0064] (B6) printDebug.begin()
[0066] (B6) printDebug.msg(sound(0x77B0D, 0xA) + " ")
[007A] (82) animateActor(7,6)
[0081] (CA) delayFrames(6)
[0085] (B6) printDebug.begin()
[0087] (B6) printDebug.msg(sound(0x731A1, 0xA) + " ")
[009B] (CA) delayFrames(8)
[009F] (CA) delayFrames(38)
[00A3] (70) setState(189,1)
[00AA] (7F) putActorInXY(7,0,0,0)
[00B7] (43) bitvar93 = 1
[00BD] (66) stopObjectCodeB()
END

Script# 214 // Use scalpel on cigar salesman
[0000] (43) var132 = (2 - 1)
[000A] (43) var132 = (getRandomNumber(var132) + 1)
[0015] (0C) dup[1] = var132
[0019] (5D) if (dup[1] == 1) {
[0020] (68)   beginCutscene([])
[0025] (9D)   actorOps.setCurActor(1)
[002A] (9D)   actorOps.setCostume(109)
[002F] (82)   animateActor(1,7)
[0036] (CA)   delayFrames(20)
[003A] (82)   animateActor(1,8)
[0041] (6C)   breakHere()
[0042] (82)   animateActor(5,245)
[0049] (BA)   talkActor("Hey, kid.  Can I help you with something?",5)
[0077] (A9)   wait.waitForMessage()
[0079] (9D)   actorOps.setCurActor(1)
[007E] (9D)   actorOps.init()
[0080] (9D)   actorOps.setTalkPos(0,-85)
[0088] (9D)   actorOps.setCostume(305)
[008D] (9D)   actorOps.setTalkColor(15)
[0092] (9D)   actorOps.setName("Bernard")
[009C] (9D)   actorOps.setWalkSpeed(10,2)
[00A4] (9D)   actorOps.setWidth(30)
[00A9] (BA)   talkActor("No.  No.  I think I'll just see what these chattering teeth are up to.",1)
[00F4] (A9)   wait.waitForMessage()
[00F6] (7D)   walkActorToObj(1,186,0)
[0100] (82)   animateActor(5,248)
[0107] (A9)   wait.waitForActor(-7,1)
[010E] (BA)   talkActor("Whew, that was close.",1)
[0128] (67)   endCutscene()
[0129] (5D) } else if (dup[1] == 2) {
[0134] (68)   beginCutscene([])
[0139] (9D)   actorOps.setCurActor(1)
[013E] (9D)   actorOps.setCostume(109)
[0143] (82)   animateActor(1,7)
[014A] (CA)   delayFrames(20)
[014E] (82)   animateActor(1,9)
[0155] (BA)   talkActor("sigh",1)
[015E] (CA)   delayFrames(11)
[0162] (9D)   actorOps.setCurActor(1)
[0167] (9D)   actorOps.init()
[0169] (9D)   actorOps.setTalkPos(0,-85)
[0171] (9D)   actorOps.setCostume(305)
[0176] (9D)   actorOps.setTalkColor(15)
[017B] (9D)   actorOps.setName("Bernard")
[0185] (9D)   actorOps.setWalkSpeed(10,2)
[018D] (9D)   actorOps.setWidth(30)
[0192] (82)   animateActor(1,250)
[0199] (BA)   talkActor("No, that would be wrong.",1)
[01B6] (67)   endCutscene()
[01B7] (73)   /* jump 1bb; */
[01BA] (**) }
[01BA] (66) stopObjectCodeB()
END

Script# 215
[0000] (68) beginCutscene([2])
[0007] (CA) delayFrames(5)
[000B] (7F) putActorInXY(1,222,105,26)
[0018] (82) animateActor(1,250)
[001F] (9D) actorOps.setCurActor(1)
[0024] (9D) actorOps.setCostume(117)
[0029] (9D) actorOps.setIgnoreBoxes()
[002B] (82) animateActor(1,6)
[0032] (B6) printDebug.begin()
[0034] (B6) printDebug.msg(sound(0x875D1, 0xA) + " ")
[0048] (CA) delayFrames(2)
[004C] (CA) delayFrames(11)
[0050] (9D) actorOps.setCurActor(1)
[0055] (9D) actorOps.init()
[0057] (9D) actorOps.setTalkPos(0,-85)
[005F] (9D) actorOps.setCostume(305)
[0064] (9D) actorOps.setTalkColor(15)
[0069] (9D) actorOps.setName("Bernard")
[0073] (9D) actorOps.setWalkSpeed(10,2)
[007B] (9D) actorOps.setWidth(30)
[0080] (67) endCutscene()
[0081] (66) stopObjectCodeB()
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

// Object 194
Events:
END

// Object 195
Events:
END

// Object 196
Events:
END

// Object 197
Events:
END