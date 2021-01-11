// EN
[0000] (43) var174 = VAR_VERB_SCRIPT
[0006] (7C) stopScript(var175)
[000A] (43) var176 = var175
[0010] (43) VAR_VERB_SCRIPT = 0
[0016] (43) var175 = 51
[001C] (5D) if (VAR_VERB_SCRIPT != 48) {
[0026] (43)   bitvar6 = 0
[002C] (73) } else {
[002F] (43)   bitvar6 = 1
[0035] (**) }
[0035] (5E) startScript(0,var175,[])
[003F] (5E) startScript(0,201,[])
[0049] (65) stopObjectCodeA()
END

// EX
[0000] (B5) printCursor.begin()
[0002] (B5) printCursor.msg(" ")
[0006] (65) stopObjectCodeA()
END

Script# 201 // Opening Credits
[0000] (68) beginCutscene([2])
[0007] (7A) setCameraAt(480)
[000B] (7F) putActorInXY(1,0,0,0)
[0018] (BC) dimArray.byte(var304,200)
[001F] (BC) dimArray.byte(var305,200)
[0026] (BC) dimArray.byte(var306,200)
[002D] (BC) dimArray.byte(var307,200)
[0034] (BC) dimArray.byte(var308,200)
[003B] (95) beginOverride()
[003C] (73) jump 320
[003F] (6B) cursorCommand.initCharset(5)
[0044] (6B) cursorCommand.charsetColors([0,0,0,9])
[0055] (73) jump 206
[0058] (CA) delayFrames(5)
[005C] (A4) array304[0] = "the lucasarts entertainment consortium"
[008A] (A4) array305[0] = "presents"
[009A] (A4) array306[0] = "in association with"
[00B5] (A4) array307[0] = "illuminati local #421"
[00D2] (5E) startScript(3,66,[var304,40,86,160,30,160,70,10,1])
[00F7] (CA) delayFrames(5)
[00FB] (5E) startScript(3,66,[var306,30,86,-100,85,160,85,10,1])
[0120] (5E) startScript(3,66,[var307,30,86,360,100,160,100,10,1])
[0145] (5E) startScript(3,66,[var305,10,86,160,170,160,115,10,1])
[016A] (CA) delayFrames(40)
[016E] (5E) startScript(3,66,[var304,40,86,160,70,160,30,5,1])
[0193] (5E) startScript(3,66,[var306,30,86,160,85,420,85,5,1])
[01B8] (5E) startScript(3,66,[var307,30,86,160,100,-100,100,5,1])
[01DD] (5E) startScript(3,66,[var305,10,86,160,115,160,170,5,1])
[0202] (CA) delayFrames(8)
[0206] (CA) delayFrames(5)
[020A] (9D) actorOps.setCurActor(4)
[020F] (9D) actorOps.init()
[0211] (9D) actorOps.setCostume(37)
[0216] (9D) actorOps.setIgnoreBoxes()
[0218] (9D) actorOps.setNeverZClip()
[021A] (9D) actorOps.setScale(255)
[021F] (7F) putActorInXY(4,479,99,10)
[022C] (82) animateActor(4,250)
[0233] (82) animateActor(4,6)
[023A] (CA) delayFrames(4)
[023E] (B6) printDebug.begin()
[0240] (B6) printDebug.msg(sound(0x4955, 0xA) + " ")
[0254] (CA) delayFrames(14)
[0258] (B6) printDebug.begin()
[025A] (B6) printDebug.msg(sound(0x4955, 0xA) + " ")
[026E] (CA) delayFrames(2)
[0272] (B6) printDebug.begin()
[0274] (B6) printDebug.msg(sound(0x4955, 0xA) + " ")
[0288] (CA) delayFrames(2)
[028C] (82) animateActor(4,7)
[0293] (B6) printDebug.begin()
[0295] (B6) printDebug.msg(sound(0x4955, 0xA) + " ")
[02A9] (CA) delayFrames(35)
[02AD] (82) animateActor(4,8)
[02B4] (6C) breakHere()
[02B5] (9D) actorOps.setCurActor(5)
[02BA] (9D) actorOps.init()
[02BC] (9D) actorOps.setCostume(38)
[02C1] (9D) actorOps.setIgnoreBoxes()
[02C3] (9D) actorOps.setNeverZClip()
[02C5] (9D) actorOps.setScale(255)
[02CA] (7F) putActorInXY(5,479,99,10)
[02D7] (82) animateActor(5,250)
[02DE] (82) animateActor(5,6)
[02E5] (CA) delayFrames(3)
[02E9] (7F) putActorInXY(4,0,0,0)
[02F6] (7F) putActorInXY(5,0,0,0)
[0303] (73) jump 306
[0306] (CA) delayFrames(5)
[030A] (BC) dimArray.nukeArray(var304)
[030E] (BC) dimArray.nukeArray(var305)
[0312] (BC) dimArray.nukeArray(var306)
[0316] (BC) dimArray.nukeArray(var307)
[031A] (BC) dimArray.nukeArray(var308)
[031E] (AE) systemOps.restartGame()
[0320] (5D) if (VAR_OVERRIDE) {
[0326] (74)   startSound(5)
[032A] (**) }
[032A] (67) endCutscene()
[032B] (6B) cursorCommand.cursorOff()
[032D] (6B) cursorCommand.userPutOff()
[032F] (BC) dimArray.nukeArray(var304)
[0333] (BC) dimArray.nukeArray(var305)
[0337] (BC) dimArray.nukeArray(var306)
[033B] (BC) dimArray.nukeArray(var307)
[033F] (BC) dimArray.nukeArray(var308)
[0343] (6C) breakHere()
[0344] (6B) cursorCommand.initCharset(2)
[0349] (6B) cursorCommand.cursorOn()
[034B] (6B) cursorCommand.userPutOn()
[034D] (7B) loadRoom(7)
[0351] (66) stopObjectCodeB()
END

Script# 202
[0000] (5D) if (localvar2 > localvar1) {
[000A] (43)   localvar5 = 10
[0010] (73) } else {
[0013] (43)   localvar5 = -10
[0019] (**) }
[0019] (43) localvar6 = localvar1
[001F] (43) localvar6 = (localvar6 + localvar5)
[0029] (62) drawObjectAt(localvar0,localvar6,localvar3)
[0033] (5D) if (localvar3 != 0) {
[003D] (43)   localvar8 = 133
[0043] (43)   localvar9 = 779
[0049] (73) } else {
[004C] (43)   localvar9 = 778
[0052] (43)   localvar8 = 0
[0058] (**) }
[0058] (5D) if (localvar2 < localvar1) {
[0062] (43)   localvar7 = (localvar6 * 8)
[006C] (62)   drawObjectAt(localvar9,(localvar6 + 40),localvar3)
[007A] (73) } else {
[007D] (43)   localvar7 = ((localvar6 * 8) - 320)
[008B] (62)   drawObjectAt(localvar9,(localvar6 - 10),localvar3)
[0099] (**) }
[0099] (6C) breakHere()
[009A] (5D) unless ((localvar6 == localvar2)) jump 1f
[00A4] (66) stopObjectCodeB()
END

// Object 774: credit-panel-1
Events:
END

// Object 775: credit-panel-2
Events:
END

// Object 776: credit-panel-3
Events:
END

// Object 777: credit-panel-4
Events:
END

// Object 778: credit-killer
Events:
END

// Object 779: credit-killer-2
Events:
END

// Object 780: credit-panel-5
Events:
END

// Object 781: credit-panel-6
Events:
END