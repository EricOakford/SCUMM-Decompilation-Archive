// Script 1: Game Initialization
[0000] (AC) soundKludge([6,100])
[000A] (6B) cursorCommand.cursorOff()
[000C] (6B) cursorCommand.userPutOff()
[000E] (43) VAR_MACHINE_SPEED = 2
[0014] (43) var188 = 1
[001A] (43) VAR_TIMER_NEXT = 0
[0020] (43) VAR_CUTSCENEEXIT_KEY = 27
[0026] (43) VAR_PAUSE_KEY = 0
[002C] (6B) cursorCommand.initCharset(2)
[0031] (A4) array230[0] = "Day of the Tentacle BBS Contest DEMO"
[005D] (43) var122 = 0
[0063] (A4) VAR_PAUSE_MSG[0] = "Game Paused.  Press SPACE to Continue."
[0091] (A4) VAR_GAME_DISK_MSG[0] = "Insert Disk %c and Press Button to Continue."
[00C5] (A4) VAR_OPEN_FAILED_MSG[0] = "Unable to Find %s, (%c%d) Press Button."
[00F4] (A4) VAR_READ_ERROR_MSG[0] = "Error reading disk %c, (%c%d) Press Button."
[0127] (A4) VAR_RESTART_MSG[0] = "Are you sure you want to restart?  (Y/N)Y"
[0158] (A4) VAR_QUIT_MSG[0] = "Are you sure you want to quit?  (Y/N)Y"
[0186] (BC) dimArray.int(VAR_GUI_COLORS,50)
[018D] (5F) startScriptQuick(121,[])
[0194] (9B) resourceRoutines.lockScript(94)
[019A] (9B) resourceRoutines.loadScript(94)
[019C] (9B) resourceRoutines.lockScript(95)
[01A2] (9B) resourceRoutines.loadScript(95)
[01A4] (9B) resourceRoutines.lockScript(98)
[01AA] (9B) resourceRoutines.loadScript(98)
[01AC] (9B) resourceRoutines.lockScript(100)
[01B2] (9B) resourceRoutines.loadScript(100)
[01B4] (9B) resourceRoutines.lockScript(101)
[01BA] (9B) resourceRoutines.loadScript(101)
[01BC] (43) VAR_CUTSCENE_START_SCRIPT = 94
[01C2] (43) VAR_CUTSCENE_END_SCRIPT = 95
[01C8] (43) VAR_ENTRY_SCRIPT = 98
[01CE] (43) VAR_ENTRY_SCRIPT2 = 100
[01D4] (43) VAR_EXIT_SCRIPT = 101
[01DA] (43) var145 = 6
[01E0] (43) VAR_CHARINC = (9 - var145)
[01EA] (43) VAR_NUM_ACTOR = 12
[01F0] (9C) roomOps.screenEffect(-32383)
[01F5] (43) VAR_TIMER_NEXT = 6
[01FB] (BC) dimArray.bit(var240,15)
[0202] (BC) dimArray.bit(var259,25)
[0209] (BC) dimArray.bit(var265,15)
[0210] (BC) dimArray.bit(var266,15)
[0217] (BC) dimArray.bit(var237,2)
[021E] (BC) dimArray.bit(var238,3)
[0225] (BC) dimArray.bit(var239,2)
[022C] (BC) dimArray.bit(var236,13)
[0233] (7B) loadRoom(0)
[0237] (9C) roomOps.setScreen(0,144)
[023F] (43) localvar1 = 1
[0245] (5D) while (localvar1 <= 12) {
[024F] (7F)   putActorInXY(localvar1,0,0,0)
[025C] (4F)   localvar1++
[025F] (**) }
[0262] (43) VAR_EGO = 1
[0268] (5F) startScriptQuick(99,[])
[026F] (B7) printSystem.begin()
[0271] (B7) printSystem.color(9)
[0276] (B7) printSystem.end()
[0278] (5D) if (VAR_HEAPSPACE < 319) {
[0282] (6B)   cursorCommand.cursorOff()
[0284] (6B)   cursorCommand.userPutOff()
[0286] (7B)   loadRoom(61)
[028A] (CA)   delayFrames(10)
[028E] (6B)   cursorCommand.userPutOn()
[0290] (B7)   printSystem.begin()
[0292] (B7)   printSystem.msg("Not enough free memory to run demo.")
[02B8] (AE)   systemOps.shutDown()
[02BA] (**) }
[02BA] (9D) actorOps.setCurActor(1)
[02BF] (9D) actorOps.init()
[02C1] (9D) actorOps.setTalkPos(0,-85)
[02C9] (9D) actorOps.setCostume(305)
[02CE] (9D) actorOps.setTalkColor(15)
[02D3] (9D) actorOps.setName("Bernard")
[02DD] (9D) actorOps.setWalkSpeed(10,2)
[02E5] (9D) actorOps.setWidth(30)
[02EA] (9D) actorOps.setCurActor(2)
[02EF] (9D) actorOps.init()
[02F1] (9D) actorOps.setTalkPos(0,-85)
[02F9] (9D) actorOps.setCostume(306)
[02FE] (9D) actorOps.setTalkColor(14)
[0303] (9D) actorOps.setName("Laverne")
[030D] (9D) actorOps.setWalkSpeed(11,2)
[0315] (9D) actorOps.setWidth(30)
[031A] (9D) actorOps.setCurActor(3)
[031F] (9D) actorOps.init()
[0321] (9D) actorOps.setTalkPos(0,-85)
[0329] (9D) actorOps.setCostume(307)
[032E] (9D) actorOps.setTalkColor(242)
[0333] (9D) actorOps.setName("Hoagie")
[033C] (9D) actorOps.setWalkSpeed(11,3)
[0344] (9D) actorOps.setWidth(35)
[0349] (43) bitvar93 = 0
[034F] (5E) startScript(0,3,[])
[0359] (66) stopObjectCodeB()
END

// Script 2
[0000] (5D) if (localvar0 == 4) {
[000A] (5D)   if (localvar1 == 44) {
[0014] (43)     bitvar93 = 1
[001A] (**)   }
[001A] (**) }
[001A] (66) stopObjectCodeB()
END

// Script 3
[0000] (6B) cursorCommand.cursorOff()
[0002] (6B) cursorCommand.userPutOff()
[0004] (43) var232 = VAR_TIMER_NEXT
[000A] (7B) loadRoom(0)
[000E] (9C) roomOps.setScreen(0,200)
[0016] (43) bitvar93 = 0
[001C] (7B) loadRoom(61)
[0020] (6B) cursorCommand.userPutOn()
[0022] (6C) breakHere()
[0023] (5D) unless (bitvar93) jump 22
[0029] (5D) if (VAR_DEBUGMODE > 1) {
[0033] (43)   VAR_VERB_SCRIPT = 2
[0039] (6B)   cursorCommand.userPutOn()
[003B] (73) } else {
[003E] (6B)   cursorCommand.userPutOff()
[0040] (**) }
[0040] (9C) roomOps.screenEffect(257)
[0045] (43) bitvar93 = 0
[004B] (43) bitvar93 = 0
[0051] (7B) loadRoom(2)
[0055] (9C) roomOps.screenEffect(129)
[005A] (6C) breakHere()
[005B] (5D) unless (bitvar93) jump 5a
[0061] (43) VAR_TIMER_NEXT = var232
[0067] (6B) cursorCommand.initCharset(2)
[006C] (43) bitvar93 = 0
[0072] (7B) loadRoom(3)
[0076] (6C) breakHere()
[0077] (5D) unless (bitvar93) jump 76
[007D] (6B) cursorCommand.initCharset(2)
[0082] (9C) roomOps.screenEffect(257)
[0087] (43) bitvar93 = 0
[008D] (7B) loadRoom(5)
[0091] (6C) breakHere()
[0092] (5D) unless (bitvar93) jump 91
[0098] (43) bitvar93 = 0
[009E] (7B) loadRoom(77)
[00A2] (6C) breakHere()
[00A3] (5D) unless (bitvar93) jump a2
[00A9] (6B) cursorCommand.initCharset(2)
[00AE] (43) VAR_TIMER_NEXT = var232
[00B4] (7C) stopScript(6)
[00B8] (7C) stopScript(139)
[00BC] (6B) cursorCommand.initCharset(2)
[00C1] (7F) putActorInXY(7,0,0,0)
[00CE] (7F) putActorInXY(6,0,0,0)
[00DB] (7F) putActorInXY(2,0,0,0)
[00E8] (7F) putActorInXY(3,0,0,0)
[00F5] (7F) putActorInXY(1,0,0,0)
[0102] (7F) putActorInXY(4,0,0,0)
[010F] (5F) startScriptQuick(137,[])
[0116] (66) stopObjectCodeB()
END

// Script 4
[0000] (9D) actorOps.setCurActor(2)
[0005] (9D) actorOps.setPalette(0,160)
[000D] (9D) actorOps.setPalette(1,161)
[0015] (9D) actorOps.setPalette(2,162)
[001D] (9D) actorOps.setPalette(3,163)
[0025] (9D) actorOps.setPalette(4,164)
[002D] (9D) actorOps.setPalette(5,165)
[0035] (9D) actorOps.setPalette(6,166)
[003D] (9D) actorOps.setPalette(7,167)
[0045] (9D) actorOps.setPalette(8,168)
[004D] (9D) actorOps.setPalette(9,169)
[0055] (9D) actorOps.setPalette(10,170)
[005D] (9D) actorOps.setPalette(11,171)
[0065] (9D) actorOps.setPalette(12,172)
[006D] (9D) actorOps.setPalette(13,173)
[0075] (9D) actorOps.setPalette(14,174)
[007D] (9D) actorOps.setCurActor(3)
[0082] (9D) actorOps.setPalette(0,176)
[008A] (9D) actorOps.setPalette(1,177)
[0092] (9D) actorOps.setPalette(2,178)
[009A] (9D) actorOps.setPalette(3,179)
[00A2] (9D) actorOps.setPalette(4,180)
[00AA] (9D) actorOps.setPalette(5,181)
[00B2] (9D) actorOps.setPalette(6,182)
[00BA] (9D) actorOps.setPalette(7,183)
[00C2] (9D) actorOps.setPalette(8,184)
[00CA] (9D) actorOps.setPalette(9,185)
[00D2] (9D) actorOps.setPalette(10,186)
[00DA] (9D) actorOps.setPalette(11,187)
[00E2] (9D) actorOps.setPalette(12,188)
[00EA] (9D) actorOps.setPalette(13,176)
[00F2] (66) stopObjectCodeB()
END

// Script 5: Tentacles at River
[0000] (74) startSound(4)
[0004] (AC) soundKludge([264,4,0,47,0])
[0017] (AC) soundKludge([270,4,3])
[0024] (AC) soundKludge([271,262,4,0])
[0034] (AC) soundKludge([271,-1])
[003E] (AC) soundKludge([-1])
[0045] (43) bitvar93 = 0
[004B] (9D) actorOps.setCurActor(7)
[0050] (9D) actorOps.init()
[0052] (9D) actorOps.setCostume(6)
[0057] (9D) actorOps.setTalkColor(13)
[005C] (9D) actorOps.setName("Purple Tentacle")
[006E] (9D) actorOps.setWalkSpeed(4,2)
[0076] (9D) actorOps.setWalkSpeed(4,1)
[007E] (9D) actorOps.setCurActor(6)
[0083] (9D) actorOps.init()
[0085] (9D) actorOps.setCostume(5)
[008A] (9D) actorOps.setTalkColor(10)
[008F] (9D) actorOps.setName("Green Tentacle")
[00A0] (9D) actorOps.setWalkSpeed(4,2)
[00A8] (9D) actorOps.setWalkSpeed(4,1)
[00B0] (7F) putActorInXY(7,185,100,2)
[00BD] (7F) putActorInXY(6,288,83,2)
[00CA] (82) animateActor(7,248)
[00D1] (82) animateActor(6,248)
[00D8] (B0) delay(60)
[00DC] (BA) talkActor(sound(0x8, 0xE) + "I don't think you should drink that^",6)
[0115] (A9) wait.waitForMessage()
[0117] (6C) breakHere()
[0118] (5D) unless (bitvar327) jump 117
[011E] (82) animateActor(7,250)
[0125] (9D) actorOps.setCurActor(7)
[012A] (9D) actorOps.setCostume(7)
[012F] (82) animateActor(7,6)
[0136] (CA) delayFrames(7)
[013A] (82) animateActor(7,7)
[0141] (CA) delayFrames(4)
[0145] (82) animateActor(7,8)
[014C] (CA) delayFrames(7)
[0150] (CA) delayFrames(10)
[0154] (82) animateActor(7,9)
[015B] (CA) delayFrames(3)
[015F] (B6) printDebug.begin()
[0161] (B6) printDebug.msg(sound(0x78839, 0xA) + " ")
[0175] (CA) delayFrames(7)
[0179] (CA) delayFrames(5)
[017D] (82) animateActor(7,250)
[0184] (9D) actorOps.setCurActor(7)
[0189] (9D) actorOps.init()
[018B] (9D) actorOps.setCostume(6)
[0190] (9D) actorOps.setTalkColor(13)
[0195] (9D) actorOps.setName("Purple Tentacle")
[01A7] (9D) actorOps.setWalkSpeed(4,2)
[01AF] (BA) talkActor(sound(0x47DC, 0xE) + "Nonsense!",7)
[01CD] (A9) wait.waitForMessage()
[01CF] (BA) talkActor(sound(0x8517, 0x26) + "It makes me feel GREAT!" + wait() + "Smarter!  More aggressive!",7)
[0217] (A9) wait.waitForMessage()
[0219] (AC) soundKludge([272])
[0220] (AC) soundKludge([-1])
[0227] (AC) soundKludge([262,4,127])
[0234] (AC) soundKludge([256,4,7])
[0241] (AC) soundKludge([-1])
[0248] (43) localvar1 = (20 + (VAR_SOUNDRESULT - ((VAR_SOUNDRESULT / 4) * 4)))
[025E] (AC) soundKludge([256,4,8])
[026B] (AC) soundKludge([-1])
[0272] (43) localvar2 = VAR_SOUNDRESULT
[0278] (AC) soundKludge([263,4,2,0,0])
[028B] (AC) soundKludge([-1])
[0292] (AC) soundKludge([264,4,2,localvar1,localvar2])
[02A5] (AC) soundKludge([-1])
[02AC] (5E) startScript(2,69,[0,7,7,241,108])
[02C5] (CA) delayFrames(4)
[02C9] (82) animateActor(6,246)
[02D0] (6C) breakHere()
[02D1] (5D) unless ((array236[7] == 0)) jump 2d0
[02DE] (82) animateActor(7,245)
[02E5] (A9) wait.waitForMessage()
[02E7] (82) animateActor(7,246)
[02EE] (BA) talkActor(sound(0x136FC, 0x1E) + "I feel like I could^",7)
[0317] (A9) wait.waitForMessage()
[0319] (AC) soundKludge([269,4,40,5])
[0329] (AC) soundKludge([262,4,0])
[0336] (AC) soundKludge([269,4,127,5])
[0346] (AC) soundKludge([262,4,127])
[0353] (AC) soundKludge([-1])
[035A] (43) bitvar93 = 1
[0360] (66) stopObjectCodeB()
END

// Script 11
[0000] (7A) setCameraAt(471)
[0004] (61) drawObject(49,0)
[000B] (9D) actorOps.setCurActor(6)
[0010] (9D) actorOps.init()
[0012] (9D) actorOps.setCostume(33)
[0017] (9D) actorOps.setStandFrame(8)
[001C] (9D) actorOps.setIgnoreBoxes()
[001E] (9D) actorOps.setNeverZClip()
[0020] (9D) actorOps.setScale(255)
[0025] (9D) actorOps.setTalkColor(240)
[002A] (7F) putActorInXY(6,416,110,9)
[0037] (82) animateActor(6,249)
[003E] (82) animateActor(6,8)
[0045] (9D) actorOps.setCurActor(8)
[004A] (9D) actorOps.init()
[004C] (9D) actorOps.setCostume(39)
[0051] (9D) actorOps.setIgnoreBoxes()
[0053] (9D) actorOps.setNeverZClip()
[0055] (9D) actorOps.setScale(255)
[005A] (9D) actorOps.setElevation(-10)
[005F] (7F) putActorInXY(8,415,121,9)
[006C] (82) animateActor(8,250)
[0073] (82) animateActor(8,6)
[007A] (9D) actorOps.setCurActor(3)
[007F] (9D) actorOps.init()
[0081] (9D) actorOps.setCostume(35)
[0086] (7F) putActorInXY(3,495,110,9)
[0093] (82) animateActor(3,248)
[009A] (B1) delaySeconds(1)
[009E] (82) animateActor(3,6)
[00A5] (CA) delayFrames(4)
[00A9] (82) animateActor(6,14)
[00B0] (82) animateActor(8,7)
[00B7] (CA) delayFrames(2)
[00BB] (82) animateActor(3,8)
[00C2] (CA) delayFrames(3)
[00C6] (9D) actorOps.setCurActor(6)
[00CB] (9D) actorOps.setWalkFrame(2)
[00D0] (9D) actorOps.setStandFrame(3)
[00D5] (9D) actorOps.setTalkFrame(4,5)
[00DD] (7E) walkActorTo(6,250,110)
[00E7] (A9) wait.waitForActor(-7,6)
[00EE] (43) bitvar93 = 1
[00F4] (66) stopObjectCodeB()
END

// Script 69
[0000] (5D) if (localvar4 == 0) {
[000A] (5D)   if (localvar3 > 12) {
[0014] (43)     localvar4 = getObjectY(localvar3)
[001B] (43)     localvar3 = getObjectX(localvar3)
[0022] (73)   } else {
[0025] (43)     localvar4 = getObjectY(localvar3)
[002C] (43)     localvar3 = getObjectX(localvar3)
[0033] (**)   }
[0033] (**) }
[0033] (47) array236[localvar2] = 1
[003C] (5D) if (getActorRoom(12) == VAR_ROOM) {
[0047] (6C)   breakHere()
[0048] (5D)   unless ((getActorRoom(12) != VAR_ROOM)) jump 47
[0053] (**) }
[0053] (9D) actorOps.setCurActor(12)
[0058] (9D) actorOps.init()
[005A] (9D) actorOps.setCostume(0)
[005F] (9D) actorOps.setWalkSpeed(32,8)
[0067] (5D) if (getActorWalkBox(localvar2) == 0) {
[0072] (9D)   actorOps.setCurActor(12)
[0077] (9D)   actorOps.setIgnoreBoxes()
[0079] (**) }
[0079] (7F) putActorInXY(12,localvar3,localvar4,VAR_ROOM)
[0086] (5D) if (getDistObjObj(localvar2,12) < 1) {
[0094] (73) } else {
[0097] (7F)   putActorInXY(12,getObjectX(localvar2),getObjectY(localvar2),255)
[00A6] (82)   animateActor(12,(248 + getObjectDir(localvar2)))
[00B2] (7E)   walkActorTo(12,localvar3,localvar4)
[00BC] (6C)   breakHere()
[00BD] (43)   localvar5 = getObjectX(12)
[00C4] (43)   localvar6 = getObjectY(12)
[00CB] (43)   localvar7 = (248 + getObjectDir(12))
[00D6] (7F)   putActorInXY(12,0,0,0)
[00E3] (82)   animateActor(localvar2,localvar7)
[00EA] (5D)   if (localvar0) {
[00F0] (82)     animateActor(localvar2,localvar0)
[00F7] (5D)   } else if (!getRandomNumber(3)) {
[0102] (82)     animateActor(localvar2,6)
[0109] (CA)     delayFrames(2)
[010D] (73)   } else {
[0110] (82)     animateActor(localvar2,8)
[0117] (**)   }
[0117] (5D)   if (!bitvar203) {
[011E] (B6)     printDebug.begin()
[0120] (B6)     printDebug.msg(sound(0x6D9DA, 0xA) + " ")
[0134] (**)   }
[0134] (6C)   breakHere()
[0135] (5D)   unless (getActorAnimCounter1(localvar2)) jump 134
[013C] (7F)   putActorInXY(localvar2,localvar5,localvar6,255)
[0149] (5D)   if (localvar1) {
[014F] (82)     animateActor(localvar2,localvar1)
[0156] (CA)     delayFrames(2)
[015A] (73)   } else {
[015D] (82)     animateActor(localvar2,7)
[0164] (CA)     delayFrames(2)
[0168] (**)   }
[0168] (5D)   if (!bitvar203) {
[016F] (B6)     printDebug.begin()
[0171] (B6)     printDebug.msg(sound(0x69D95, 0xA) + " ")
[0185] (**)   }
[0185] (6C)   breakHere()
[0186] (5D)   unless (getActorAnimCounter1(localvar2)) jump 185
[018D] (73)   jump 3c
[0190] (**) }
[0190] (7F) putActorInXY(12,0,0,0)
[019D] (82) animateActor(localvar2,3)
[01A4] (47) array236[localvar2] = 0
[01AD] (66) stopObjectCodeB()
END

// Script 93
[0000] (0C) dup[1] = localvar0
[0004] (5D) if (dup[1] == 2) {
[000B] (43)   var151 = -1
[0012] (A5)   saveRestoreVerbs.restoreVerbs(1,1,1)
[001D] (A5)   saveRestoreVerbs.restoreVerbs(2,11,1)
[0028] (A5)   saveRestoreVerbs.restoreVerbs(100,100,1)
[0033] (A5)   saveRestoreVerbs.restoreVerbs(200,209,1)
[003E] (A5)   saveRestoreVerbs.restoreVerbs(103,105,1)
[0049] (5F)   startScriptQuick(86,[])
[0050] (5E)   startScript(0,87,[])
[005A] (5D) } else if (dup[1] == 1) {
[0065] (43)   var151 = -1
[006C] (5D)   if (var153) {
[0072] (9E)     verbOps.setCurVerb(var153)
[0077] (9E)     verbOps.setColor(6)
[007C] (9E)     verbOps.redraw()
[007E] (43)     var153 = 0
[0084] (**)   }
[0084] (A5)   saveRestoreVerbs.saveVerbs(2,11,1)
[008F] (A5)   saveRestoreVerbs.saveVerbs(1,1,1)
[009A] (A5)   saveRestoreVerbs.saveVerbs(100,100,1)
[00A5] (A5)   saveRestoreVerbs.saveVerbs(200,209,1)
[00B0] (A5)   saveRestoreVerbs.saveVerbs(103,105,1)
[00BB] (7C)   stopScript(87)
[00BF] (5D) } else if (dup[1] == 5) {
[00CA] (43)   var151 = -1
[00D1] (5D)   if (var153) {
[00D7] (9E)     verbOps.setCurVerb(var153)
[00DC] (9E)     verbOps.setColor(6)
[00E1] (9E)     verbOps.redraw()
[00E3] (43)     var153 = 0
[00E9] (**)   }
[00E9] (6B)   cursorCommand.initCharset(1)
[00EE] (9E)   verbOps.setCurVerb(120)
[00F3] (9E)   verbOps.init()
[00F5] (9E)   verbOps.setColor(6)
[00FA] (9E)   verbOps.setHiColor(3)
[00FF] (9E)   verbOps.redraw()
[0101] (9E)   verbOps.setCurVerb(121)
[0106] (9E)   verbOps.init()
[0108] (9E)   verbOps.setColor(6)
[010D] (9E)   verbOps.setHiColor(3)
[0112] (9E)   verbOps.redraw()
[0114] (9E)   verbOps.setCurVerb(122)
[0119] (9E)   verbOps.init()
[011B] (9E)   verbOps.setColor(6)
[0120] (9E)   verbOps.setHiColor(3)
[0125] (9E)   verbOps.redraw()
[0127] (9E)   verbOps.setCurVerb(123)
[012C] (9E)   verbOps.init()
[012E] (9E)   verbOps.setColor(6)
[0133] (9E)   verbOps.setHiColor(3)
[0138] (9E)   verbOps.redraw()
[013A] (9E)   verbOps.setCurVerb(124)
[013F] (9E)   verbOps.init()
[0141] (9E)   verbOps.setColor(6)
[0146] (9E)   verbOps.setHiColor(3)
[014B] (9E)   verbOps.redraw()
[014D] (9E)   verbOps.setCurVerb(125)
[0152] (9E)   verbOps.init()
[0154] (9E)   verbOps.setColor(6)
[0159] (9E)   verbOps.setHiColor(3)
[015E] (9E)   verbOps.redraw()
[0160] (9E)   verbOps.setCurVerb(126)
[0165] (9E)   verbOps.init()
[0167] (9E)   verbOps.setColor(6)
[016C] (9E)   verbOps.setHiColor(3)
[0171] (9E)   verbOps.redraw()
[0173] (9E)   verbOps.setCurVerb(127)
[0178] (9E)   verbOps.init()
[017A] (9E)   verbOps.setColor(6)
[017F] (9E)   verbOps.setHiColor(3)
[0184] (9E)   verbOps.redraw()
[0186] (9E)   verbOps.setCurVerb(128)
[018B] (9E)   verbOps.init()
[018D] (9E)   verbOps.setColor(6)
[0192] (9E)   verbOps.setHiColor(3)
[0197] (9E)   verbOps.redraw()
[0199] (6B)   cursorCommand.initCharset(2)
[019E] (5F)   startScriptQuick(93,[1])
[01A8] (73)   /* jump 1ac; */
[01AB] (**) }
[01AB] (66) stopObjectCodeB()
END

// Script 94
[0000] (43) var183 = (var183 + 1)
[000A] (6B) cursorCommand.softCursorOff()
[000C] (6B) cursorCommand.softUserputOff()
[000E] (5D) if (localvar0 != 2) {
[0018] (B3)   stopSentence()
[0019] (**) }
[0019] (5D) if (localvar0 == 1) {
[0023] (A5)   saveRestoreVerbs.saveVerbs(2,11,2)
[002E] (A5)   saveRestoreVerbs.saveVerbs(1,1,2)
[0039] (A5)   saveRestoreVerbs.saveVerbs(100,100,2)
[0044] (A5)   saveRestoreVerbs.saveVerbs(200,209,2)
[004F] (A5)   saveRestoreVerbs.saveVerbs(103,105,2)
[005A] (**) }
[005A] (5D) if (localvar0 == 3) {
[0064] (A5)   saveRestoreVerbs.saveVerbs(2,11,2)
[006F] (A5)   saveRestoreVerbs.saveVerbs(1,1,2)
[007A] (A5)   saveRestoreVerbs.saveVerbs(100,100,2)
[0085] (A5)   saveRestoreVerbs.saveVerbs(200,209,2)
[0090] (A5)   saveRestoreVerbs.saveVerbs(103,105,2)
[009B] (**) }
[009B] (5D) if (localvar0 == 4) {
[00A5] (A5)   saveRestoreVerbs.saveVerbs(2,11,2)
[00B0] (A5)   saveRestoreVerbs.saveVerbs(1,1,2)
[00BB] (A5)   saveRestoreVerbs.saveVerbs(100,100,2)
[00C6] (A5)   saveRestoreVerbs.saveVerbs(200,209,2)
[00D1] (A5)   saveRestoreVerbs.saveVerbs(103,105,2)
[00DC] (**) }
[00DC] (6A) freezeUnfreeze(127)
[00E0] (66) stopObjectCodeB()
END

// Script 95
[0000] (43) var183 = (var183 - 1)
[000A] (6B) cursorCommand.softCursorOn()
[000C] (6B) cursorCommand.softUserputOn()
[000E] (5D) if (localvar0 == 1) {
[0018] (A5)   saveRestoreVerbs.restoreVerbs(1,1,2)
[0023] (A5)   saveRestoreVerbs.restoreVerbs(2,11,2)
[002E] (A5)   saveRestoreVerbs.restoreVerbs(100,100,2)
[0039] (A5)   saveRestoreVerbs.restoreVerbs(200,209,2)
[0044] (A5)   saveRestoreVerbs.restoreVerbs(103,105,2)
[004F] (**) }
[004F] (5D) if (localvar0 == 3) {
[0059] (A5)   saveRestoreVerbs.restoreVerbs(1,1,2)
[0064] (A5)   saveRestoreVerbs.restoreVerbs(2,11,2)
[006F] (A5)   saveRestoreVerbs.restoreVerbs(100,100,2)
[007A] (A5)   saveRestoreVerbs.restoreVerbs(200,209,2)
[0085] (A5)   saveRestoreVerbs.restoreVerbs(103,105,2)
[0090] (**) }
[0090] (6A) freezeUnfreeze(0)
[0094] (5D) if (localvar0 == 4) {
[009E] (7C)   stopScript(0)
[00A2] (**) }
[00A2] (5D) if (localvar0 != 2) {
[00AC] (B3)   stopSentence()
[00AD] (5D)   if (localvar0 != 3) {
[00B7] (79)     actorFollowCamera(VAR_EGO)
[00BB] (**)   }
[00BB] (**) }
[00BB] (66) stopObjectCodeB()
END

// Script 96
[0000] (5D) if (localvar1 == 1) {
[000A] (B4)   printLine.begin()
[000C] (B4)   printLine.msg(" ")
[0010] (6A)   freezeUnfreeze(127)
[0014] (9C)   roomOps.saveLoadRoom(1,0)
[001C] (6C)   breakHere()
[001D] (5D)   if (VAR_GAME_LOADED == 203) {
[0027] (43)     VAR_MAINMENU_KEY = 319
[002D] (43)     var138 = 1
[0033] (6A)     freezeUnfreeze(0)
[0037] (7C)     stopScript(0)
[003B] (73)   } else {
[003E] (43)     VAR_MAINMENU_KEY = 0
[0044] (43)     var138 = 0
[004A] (7B)     loadRoom(localvar0)
[004E] (**)   }
[004E] (73) } else {
[0051] (6B)   cursorCommand.cursorOff()
[0053] (9C)   roomOps.saveLoadRoom(2,0)
[005B] (6C)   breakHere()
[005C] (**) }
[005C] (66) stopObjectCodeB()
END

// Script 98
[0000] (43) var157 = 0
[0006] (43) var158 = 0
[000C] (43) var159 = 0
[0012] (43) var160 = 0
[0018] (43) var161 = 0
[001E] (43) var162 = 0
[0024] (43) var163 = 0
[002A] (43) var164 = 0
[0030] (43) var165 = 0
[0036] (43) var166 = 0
[003C] (43) var167 = 0
[0042] (43) var168 = 0
[0048] (43) var169 = 0
[004E] (43) var170 = 0
[0054] (43) var172 = 0
[005A] (43) var173 = 0
[0060] (43) var174 = 0
[0066] (43) var175 = 0
[006C] (43) var176 = 0
[0072] (66) stopObjectCodeB()
END

// Script 99
[0000] (5D) if (VAR_VIDEOMODE == 19) {
[000A] (0C)   dup[1] = VAR_EGO
[000E] (5D)   if (dup[1] == 3) {
[0015] (43)     var191 = 71
[001C] (43)     var192 = 0
[0022] (43)     var193 = 71
[0028] (43)     var194 = 255
[002E] (43)     var195 = 19
[0034] (43)     var196 = 0
[003A] (43)     var197 = 19
[0040] (43)     var198 = 0
[0046] (43)     var199 = 15
[004C] (43)     var200 = 0
[0052] (43)     var201 = 103
[0058] (43)     var202 = 0
[005E] (5D)   } else if (dup[1] == 1) {
[0069] (5D)     if (bitvar186) {
[0070] (5D)       if (isAnyOf(VAR_ROOM,[25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,89])) {
[00B6] (9C)         roomOps.setPalette(1)
[00BB] (**)       }
[00BB] (**)     }
[00BB] (43)     var191 = 71
[00C1] (43)     var192 = 0
[00C7] (43)     var193 = 71
[00CD] (43)     var194 = 255
[00D3] (43)     var195 = 139
[00D9] (43)     var196 = 39
[00DF] (43)     var197 = 19
[00E5] (43)     var198 = 0
[00EB] (43)     var199 = 15
[00F1] (43)     var200 = 0
[00F7] (43)     var201 = 71
[00FD] (43)     var202 = 143
[0103] (5D)   } else if (dup[1] == 2) {
[010E] (5D)     if (bitvar16) {
[0115] (5D)       if (isAnyOf(VAR_ROOM,[44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59])) {
[014F] (9C)         roomOps.setPalette(1)
[0154] (**)       }
[0154] (**)     }
[0154] (43)     var191 = 95
[015A] (43)     var192 = 0
[0160] (43)     var193 = 99
[0166] (43)     var194 = 255
[016C] (43)     var195 = 255
[0172] (43)     var196 = 0
[0178] (43)     var197 = 19
[017E] (43)     var198 = 0
[0184] (43)     var199 = 15
[018A] (43)     var200 = 0
[0190] (43)     var201 = 111
[0196] (43)     var202 = 127
[019C] (73)     /* jump 1a0; */
[019F] (**)   }
[019F] (9C)   roomOps.setPalColor(var191,var192,var193,2)
[01AE] (9C)   roomOps.setPalColor(var194,var195,var196,3)
[01BC] (9C)   roomOps.setPalColor(var197,var198,var199,1)
[01CA] (9C)   roomOps.setPalColor(var200,var201,var202,6)
[01D8] (5F)   startScriptQuick(121,[])
[01DF] (73) } else {
[01E2] (9C)   roomOps.setPalColor(0,0,0,2)
[01F0] (9C)   roomOps.setPalColor(252,84,252,3)
[01FE] (9C)   roomOps.setPalColor(0,0,0,1)
[020C] (9C)   roomOps.setPalColor(168,0,168,6)
[021A] (5F)   startScriptQuick(121,[])
[0221] (**) }
[0221] (66) stopObjectCodeB()
END

// Script 100
[0000] (5F) startScriptQuick(99,[])
[0007] (43) var144 = VAR_WALKTO_OBJ
[000D] (B3) stopSentence()
[000E] (5D) if (bitvar126) {
[0014] (43)   bitvar126 = 0
[001A] (9C)   roomOps.screenEffect(-32383)
[001F] (**) }
[001F] (66) stopObjectCodeB()
END

// Script 101
[0000] (43) var136 = VAR_ROOM
[0006] (B4) printLine.begin()
[0008] (B4) printLine.color(15)
[000D] (B4) printLine.XY(160,8)
[0015] (B4) printLine.center()
[0017] (B4) printLine.overhead()
[0019] (B4) printLine.right(320)
[001E] (B4) printLine.end()
[0020] (7C) stopScript(111)
[0024] (7C) stopScript(69)
[0028] (7F) putActorInXY(12,0,0,0)
[0035] (43) var132 = 0
[003B] (5D) while (var132 <= 12) {
[0045] (47)   array236[var132] = 0
[004E] (4F)   var132++
[0051] (**) }
[0054] (66) stopObjectCodeB()
END

// Script 102: Set up Verbs
[0000] (6B) cursorCommand.initCharset(5)
[0005] (6B) cursorCommand.charsetColors([0,6,2])
[0013] (9E) verbOps.setCurVerb(1)
[0018] (9E) verbOps.init()
[001A] (9E) verbOps.setToObject(625,60)
[0022] (9E) verbOps.setXY(0,152)
[002A] (9E) verbOps.setBkColor(0)
[002F] (9E) verbOps.setDimmed()
[0031] (9E) verbOps.redraw()
[0033] (9E) verbOps.setCurVerb(11)
[0038] (9E) verbOps.init()
[003A] (9E) verbOps.loadString("Walk to")
[0044] (9E) verbOps.setKey(119)
[0049] (9E) verbOps.setOff()
[004B] (9E) verbOps.redraw()
[004D] (9E) verbOps.setCurVerb(4)
[0052] (9E) verbOps.init()
[0054] (9E) verbOps.loadString("Give")
[005B] (9E) verbOps.setCenter()
[005D] (9E) verbOps.setKey(103)
[0062] (9E) verbOps.setXY(20,152)
[006A] (9E) verbOps.setOn()
[006C] (9E) verbOps.redraw()
[006E] (9E) verbOps.setCurVerb(2)
[0073] (9E) verbOps.init()
[0075] (9E) verbOps.loadString("Open")
[007C] (9E) verbOps.setCenter()
[007E] (9E) verbOps.setKey(111)
[0083] (9E) verbOps.setXY(20,168)
[008B] (9E) verbOps.setOn()
[008D] (9E) verbOps.redraw()
[008F] (9E) verbOps.setCurVerb(3)
[0094] (9E) verbOps.init()
[0096] (9E) verbOps.loadString("Close")
[009E] (9E) verbOps.setCenter()
[00A0] (9E) verbOps.setKey(99)
[00A5] (9E) verbOps.setXY(20,184)
[00AD] (9E) verbOps.setOn()
[00AF] (9E) verbOps.redraw()
[00B1] (9E) verbOps.setCurVerb(9)
[00B6] (9E) verbOps.init()
[00B8] (9E) verbOps.loadString("Pick up")
[00C2] (9E) verbOps.setCenter()
[00C4] (9E) verbOps.setKey(112)
[00C9] (9E) verbOps.setXY(72,152)
[00D1] (9E) verbOps.setOn()
[00D3] (9E) verbOps.redraw()
[00D5] (9E) verbOps.setCurVerb(8)
[00DA] (9E) verbOps.init()
[00DC] (9E) verbOps.loadString("L\xB0k at")
[00E5] (9E) verbOps.setCenter()
[00E7] (9E) verbOps.setKey(108)
[00EC] (9E) verbOps.setXY(72,168)
[00F4] (9E) verbOps.setOn()
[00F6] (9E) verbOps.redraw()
[00F8] (9E) verbOps.setCurVerb(10)
[00FD] (9E) verbOps.init()
[00FF] (9E) verbOps.loadString("Talk to")
[0109] (9E) verbOps.setCenter()
[010B] (9E) verbOps.setKey(116)
[0110] (9E) verbOps.setXY(72,184)
[0118] (9E) verbOps.setOn()
[011A] (9E) verbOps.redraw()
[011C] (9E) verbOps.setCurVerb(7)
[0121] (9E) verbOps.init()
[0123] (9E) verbOps.loadString("Use")
[0129] (9E) verbOps.setCenter()
[012B] (9E) verbOps.setKey(117)
[0130] (9E) verbOps.setXY(124,152)
[0138] (9E) verbOps.setOn()
[013A] (9E) verbOps.redraw()
[013C] (9E) verbOps.setCurVerb(5)
[0141] (9E) verbOps.init()
[0143] (9E) verbOps.loadString("Push")
[014A] (9E) verbOps.setCenter()
[014C] (9E) verbOps.setKey(115)
[0151] (9E) verbOps.setXY(124,168)
[0159] (9E) verbOps.setOn()
[015B] (9E) verbOps.redraw()
[015D] (9E) verbOps.setCurVerb(6)
[0162] (9E) verbOps.init()
[0164] (9E) verbOps.loadString("Pu\xB8")
[016A] (9E) verbOps.setCenter()
[016C] (9E) verbOps.setKey(121)
[0171] (9E) verbOps.setXY(124,184)
[0179] (9E) verbOps.setOn()
[017B] (9E) verbOps.redraw()
[017D] (43) var132 = 2
[0183] (5D) while (var132 <= 11) {
[018D] (9E)   verbOps.setCurVerb(var132)
[0192] (9E)   verbOps.setColor(6)
[0197] (9E)   verbOps.setHiColor(3)
[019C] (9E)   verbOps.setBkColor(1)
[01A1] (9E)   verbOps.redraw()
[01A3] (4F)   var132++
[01A6] (**) }
[01A9] (5F) startScriptQuick(85,[])
[01B0] (9E) verbOps.setCurVerb(103)
[01B5] (9E) verbOps.init()
[01B7] (9E) verbOps.setToObject(693,60)
[01BF] (9E) verbOps.setOff()
[01C1] (9E) verbOps.redraw()
[01C3] (9E) verbOps.setCurVerb(105)
[01C8] (9E) verbOps.init()
[01CA] (9E) verbOps.setToObject(694,60)
[01D2] (9E) verbOps.setXY(288,152)
[01DA] (9E) verbOps.setOff()
[01DC] (9E) verbOps.redraw()
[01DE] (9E) verbOps.setCurVerb(104)
[01E3] (9E) verbOps.init()
[01E5] (9E) verbOps.setToObject(695,60)
[01ED] (9E) verbOps.setXY(288,176)
[01F5] (9E) verbOps.setOff()
[01F7] (9E) verbOps.redraw()
[01F9] (9E) verbOps.setCurVerb(129)
[01FE] (9E) verbOps.init()
[0200] (9E) verbOps.loadString("in")
[0205] (9E) verbOps.setOff()
[0207] (9E) verbOps.redraw()
[0209] (9E) verbOps.setCurVerb(130)
[020E] (9E) verbOps.init()
[0210] (9E) verbOps.loadString("with")
[0217] (9E) verbOps.setOff()
[0219] (9E) verbOps.redraw()
[021B] (9E) verbOps.setCurVerb(131)
[0220] (9E) verbOps.init()
[0222] (9E) verbOps.loadString("on")
[0227] (9E) verbOps.setOff()
[0229] (9E) verbOps.redraw()
[022B] (9E) verbOps.setCurVerb(132)
[0230] (9E) verbOps.init()
[0232] (9E) verbOps.loadString("to")
[0237] (9E) verbOps.setOff()
[0239] (9E) verbOps.redraw()
[023B] (6B) cursorCommand.initCharset(1)
[0240] (9E) verbOps.setCurVerb(100)
[0245] (9E) verbOps.init()
[0247] (9E) verbOps.setXY(160,145)
[024F] (9E) verbOps.setColor(6)
[0254] (9E) verbOps.setDimColor(6)
[0259] (9E) verbOps.setCenter()
[025B] (9E) verbOps.setOff()
[025D] (9E) verbOps.redraw()
[025F] (6B) cursorCommand.initCharset(2)
[0264] (66) stopObjectCodeB()
END

// Script 103: Open a Door
[0000] (5D) if (!localvar0) {
[0007] (43)   localvar0 = var7
[000D] (**) }
[000D] (5D) if (getState(localvar0) != 1) {
[0018] (5D)   if (ifClassOfIs(localvar0,[6])) {
[0025] (70)     setState(localvar0,1)
[002C] (5D)     if (localvar1) {
[0032] (70)       setState(localvar1,1)
[0039] (**)     }
[0039] (B6)     printDebug.begin()
[003B] (B6)     printDebug.msg(" ")
[003F] (73)   } else {
[0042] (0C)     dup[1] = VAR_EGO
[0046] (5D)     if (dup[1] == 3) {
[004D] (BA)       talkActor("Hmm.  This door appears to be locked.",3)
[0078] (5D)     } else if (dup[1] == 1) {
[0083] (BA)       talkActor("Hmm.  This door appears to be locked.",1)
[00AE] (5D)     } else if (dup[1] == 2) {
[00B9] (BA)       talkActor("Hmm.  This door appears to be locked.",2)
[00E4] (73)       /* jump e8; */
[00E7] (**)     }
[00E7] (**)   }
[00E8] (**) }
[00E8] (66) stopObjectCodeB()
END

// Script 104: Close a Door
[0000] (5D) if (!localvar0) {
[0007] (43)   localvar0 = var7
[000D] (**) }
[000D] (5D) if (getState(localvar0) == 1) {
[0018] (5D)   if (ifClassOfIs(localvar0,[139])) {
[0025] (70)     setState(localvar0,2)
[002C] (73)   } else {
[002F] (70)     setState(localvar0,0)
[0036] (**)   }
[0036] (5D)   if (localvar1) {
[003C] (5D)     if (ifClassOfIs(localvar1,[139])) {
[0049] (70)       setState(localvar1,2)
[0050] (73)     } else {
[0053] (70)       setState(localvar1,0)
[005A] (**)     }
[005A] (**)   }
[005A] (B6)   printDebug.begin()
[005C] (B6)   printDebug.msg(" ")
[0060] (**) }
[0060] (66) stopObjectCodeB()
END

// Script 105
[0000] (5D) if (!localvar0) {
[0007] (43)   localvar0 = var7
[000D] (**) }
[000D] (5D) if (getState(localvar0) == 1) {
[0018] (60)   startObject(0,localvar0,3,[0,3])
[002B] (73) } else {
[002E] (60)   startObject(0,localvar0,2,[0,2])
[0041] (**) }
[0041] (66) stopObjectCodeB()
END

// Script 110
[0000] (43) localvar5 = (getObjectX(localvar0) - localvar1)
[000B] (43) localvar6 = (getObjectY(localvar0) - localvar2)
[0016] (43) localvar5 = abs(localvar5)
[001D] (43) localvar6 = abs(localvar6)
[0024] (5D) if (localvar5 > localvar3) {
[002E] (43)   var137 = 0
[0034] (7C)   stopScript(0)
[0038] (**) }
[0038] (5D) if (localvar6 > localvar4) {
[0042] (43)   var137 = 0
[0048] (7C)   stopScript(0)
[004C] (**) }
[004C] (43) localvar7 = (localvar5 * localvar5)
[0056] (43) localvar8 = (localvar6 * localvar6)
[0060] (5D) if (localvar7 < 0) {
[006A] (B6)   printDebug.begin()
[006C] (B6)   printDebug.msg("x2 value overflowing in ellipse check")
[0094] (**) }
[0094] (5D) if (localvar8 < 0) {
[009E] (B6)   printDebug.begin()
[00A0] (B6)   printDebug.msg("y2 value overflowing in ellipse check")
[00C8] (**) }
[00C8] (43) localvar11 = 1
[00CE] (43) localvar12 = 0
[00D4] (5D) if (localvar7 <= 4000) {
[00DE] (43)   localvar7 = (localvar7 * 4)
[00E8] (73) } else {
[00EB] (43)   localvar3 = (localvar3 / 2)
[00F5] (**) }
[00F5] (5D) if (localvar8 <= 4000) {
[00FF] (43)   localvar8 = (localvar8 * 4)
[0109] (73) } else {
[010C] (43)   localvar4 = (localvar4 / 2)
[0116] (**) }
[0116] (43) localvar11 = (localvar11 * 4)
[0120] (5D) if (localvar11 >= 64) {
[012A] (43)   localvar12 = 1
[0130] (**) }
[0130] (5D) unless (localvar12) jump d4
[0136] (5D) if (localvar3 == 0) {
[0140] (43)   localvar3 = 1
[0146] (B6)   printDebug.begin()
[0148] (B6)   printDebug.msg("very skinny ellipse warning")
[0166] (**) }
[0166] (5D) if (localvar4 == 0) {
[0170] (43)   localvar4 = 1
[0176] (B6)   printDebug.begin()
[0178] (B6)   printDebug.msg("very flat ellipse warning")
[0194] (**) }
[0194] (43) var137 = ((localvar7 / (localvar3 * localvar3)) + (localvar8 / (localvar4 * localvar4)))
[01AE] (5D) if (var137 == 0) {
[01B8] (43)   var137 = 1
[01BE] (**) }
[01BE] (5D) if (var137 > localvar11) {
[01C8] (43)   var137 = 0
[01CE] (**) }
[01CE] (66) stopObjectCodeB()
END

// Script 111
[0000] (43) localvar4 = VAR_ROOM
[0006] (5D) if (!localvar1) {
[000D] (43)   localvar1 = 3
[0013] (**) }
[0013] (43) var132 = (localvar1 - 1)
[001D] (43) localvar3 = (getRandomNumber(var132) + 1)
[0028] (5D) unless ((localvar3 != localvar2)) jump 13
[0032] (61) drawObject(localvar0,localvar3)
[0039] (43) localvar2 = localvar3
[003F] (6C) breakHere()
[0040] (5D) unless ((VAR_ROOM != localvar4)) jump 13
[004A] (66) stopObjectCodeB()
END

// Script 112
[0000] (5D) if (localvar1) {
[0006] (84)   pickupObject(localvar0,localvar1)
[000D] (73) } else {
[0010] (84)   pickupObject(localvar0,0)
[0017] (**) }
[0017] (70) setState(localvar0,0)
[001E] (66) stopObjectCodeB()
END

// Script 113
[0000] (5D) if (localvar2) {
[0006] (84)   pickupObject(localvar0,localvar2)
[000D] (73) } else {
[0010] (84)   pickupObject(localvar0,0)
[0017] (**) }
[0017] (70) setState(localvar0,localvar1)
[001E] (66) stopObjectCodeB()
END

// Script 114
[0000] (5D) if (!localvar0) {
[0007] (43)   localvar0 = 6
[000D] (**) }
[000D] (5D) if (!localvar1) {
[0014] (5D)   if (!localvar2) {
[001B] (43)     localvar1 = 255
[0021] (43)     localvar2 = 0
[0027] (**)   }
[0027] (**) }
[0027] (43) localvar3 = ((localvar2 - localvar1) / localvar0)
[0035] (43) localvar4 = localvar1
[003B] (9C) roomOps.darkenPalette(localvar4,208,255)
[0046] (43) localvar5 = 1
[004C] (5D) while (localvar5 <= localvar0) {
[0056] (43)   localvar4 = (localvar4 + localvar3)
[0060] (9C)   roomOps.darkenPalette(localvar4,208,255)
[006B] (6C)   breakHere()
[006C] (4F)   localvar5++
[006F] (**) }
[0072] (66) stopObjectCodeB()
END

// Script 121
[0000] (47) VAR_GUI_COLORS[0] = 0
[0009] (47) VAR_GUI_COLORS[1] = 2
[0012] (47) VAR_GUI_COLORS[2] = 6
[001B] (47) VAR_GUI_COLORS[3] = 2
[0024] (47) VAR_GUI_COLORS[4] = 1
[002D] (47) VAR_GUI_COLORS[5] = 6
[0036] (47) VAR_GUI_COLORS[6] = 3
[003F] (47) VAR_GUI_COLORS[7] = 1
[0048] (47) VAR_GUI_COLORS[8] = 6
[0051] (47) VAR_GUI_COLORS[9] = 1
[005A] (47) VAR_GUI_COLORS[10] = 6
[0063] (47) VAR_GUI_COLORS[11] = 3
[006C] (47) VAR_GUI_COLORS[12] = 1
[0075] (47) VAR_GUI_COLORS[13] = 2
[007E] (47) VAR_GUI_COLORS[14] = 2
[0087] (47) VAR_GUI_COLORS[15] = 2
[0090] (47) VAR_GUI_COLORS[16] = 2
[0099] (47) VAR_GUI_COLORS[17] = 2
[00A2] (47) VAR_GUI_COLORS[18] = 2
[00AB] (47) VAR_GUI_COLORS[19] = 2
[00B4] (47) VAR_GUI_COLORS[20] = 2
[00BD] (47) VAR_GUI_COLORS[21] = 2
[00C6] (47) VAR_GUI_COLORS[22] = 2
[00CF] (47) VAR_GUI_COLORS[23] = 2
[00D8] (47) VAR_GUI_COLORS[24] = 2
[00E1] (47) VAR_GUI_COLORS[25] = 6
[00EA] (47) VAR_GUI_COLORS[26] = 1
[00F3] (47) VAR_GUI_COLORS[27] = 2
[00FC] (47) VAR_GUI_COLORS[28] = 2
[0105] (47) VAR_GUI_COLORS[29] = 2
[010E] (47) VAR_GUI_COLORS[30] = 2
[0117] (47) VAR_GUI_COLORS[31] = 6
[0120] (47) VAR_GUI_COLORS[32] = 1
[0129] (47) VAR_GUI_COLORS[33] = 2
[0132] (47) VAR_GUI_COLORS[34] = 2
[013B] (47) VAR_GUI_COLORS[35] = 2
[0144] (47) VAR_GUI_COLORS[36] = 2
[014D] (47) VAR_GUI_COLORS[37] = 6
[0156] (47) VAR_GUI_COLORS[38] = 1
[015F] (47) VAR_GUI_COLORS[39] = 2
[0168] (47) VAR_GUI_COLORS[40] = 2
[0171] (47) VAR_GUI_COLORS[41] = 2
[017A] (47) VAR_GUI_COLORS[42] = 2
[0183] (66) stopObjectCodeB()
END

// Script 135: Demo Newspaper
[0000] (5D) if (localvar0 > 7) {
[000A] (7C)   stopScript(0)
[000E] (**) }
[000E] (68) beginCutscene([2])
[0015] (95) beginOverride()
[0016] (73) jump f7
[0019] (70) setState(728,0)
[0020] (7B) loadRoom(68)
[0024] (9C) roomOps.darkenPalette(0,16,191)
[002F] (61) drawObject(728,localvar0)
[0036] (6C) breakHere()
[0037] (6B) cursorCommand.initCharset(9)
[003C] (0C) dup[1] = localvar0
[0040] (5D) if (dup[1] == 1) {
[0047] (B5)   printCursor.begin()
[004A] (B5)   printCursor.color(35)
[004F] (B5)   printCursor.left()
[0051] (B5)   printCursor.XY(46,55)
[0059] (B5)   printCursor.msg("Tentacle Amends" + newline() + "Constitution")
[0079] (6B)   cursorCommand.initCharset(10)
[007E] (B5)   printCursor.begin()
[0080] (B5)   printCursor.color(35)
[0085] (B5)   printCursor.left()
[0087] (B5)   printCursor.XY(56,121)
[008F] (B5)   printCursor.msg("Humans Now Slaves")
[00A3] (73)   /* jump a7; */
[00A6] (**) }
[00A6] (6B) cursorCommand.initCharset(2)
[00AC] (9D) actorOps.setCurActor(10)
[00B1] (9D) actorOps.init()
[00B3] (9D) actorOps.setCostume(344)
[00B8] (9D) actorOps.setIgnoreBoxes()
[00BA] (9D) actorOps.setNeverZClip()
[00BC] (7F) putActorInXY(10,170,94,68)
[00C9] (82) animateActor(10,250)
[00D0] (82) animateActor(10,6)
[00D7] (CA) delayFrames(18)
[00DB] (7F) putActorInXY(10,0,0,0)
[00E8] (9C) roomOps.darkenPalette(255,16,191)
[00F3] (B1) delaySeconds(3)
[00F7] (43) bitvar151 = 0
[00FD] (43) var247 = 0
[0103] (67) endCutscene()
[0104] (66) stopObjectCodeB()
END

// Script 136
[0000] (61) drawObject(733,(1 + getRandomNumber(2)))
[000C] (61) drawObject(734,(1 + getRandomNumber(2)))
[0018] (61) drawObject(735,(1 + getRandomNumber(2)))
[0024] (61) drawObject(737,(1 + getRandomNumber(2)))
[0030] (6C) breakHere()
[0031] (73) jump 0
[0034] (66) stopObjectCodeB()
END

// Script 137: Bernard Frees Tentacles
[0000] (43) bitvar246 = 0
[0006] (9D) actorOps.setCurActor(11)
[000B] (9D) actorOps.init()
[000D] (9D) actorOps.setCostume(360)
[0012] (82) animateActor(11,250)
[0019] (7F) putActorInXY(11,197,137,73)
[0026] (7B) loadRoom(73)
[002A] (82) animateActor(11,6)
[0031] (CA) delayFrames(3)
[0035] (82) animateActor(11,7)
[003C] (CA) delayFrames(4)
[0040] (82) animateActor(11,8)
[0047] (CA) delayFrames(5)
[004B] (82) animateActor(11,9)
[0052] (CA) delayFrames(5)
[0056] (82) animateActor(11,10)
[005D] (CA) delayFrames(1)
[0061] (82) animateActor(11,11)
[0068] (CA) delayFrames(1)
[006C] (9D) actorOps.setCurActor(1)
[0071] (9D) actorOps.init()
[0073] (9D) actorOps.setTalkPos(0,-85)
[007B] (9D) actorOps.setCostume(305)
[0080] (9D) actorOps.setTalkColor(15)
[0085] (9D) actorOps.setName("Bernard")
[008F] (9D) actorOps.setWalkSpeed(10,2)
[0097] (9D) actorOps.setWidth(30)
[009C] (82) animateActor(1,249)
[00A3] (7F) putActorInXY(1,197,137,73)
[00B0] (7F) putActorInXY(11,0,0,0)
[00BD] (61) drawObject(745,0)
[00C4] (9D) actorOps.setCurActor(7)
[00C9] (9D) actorOps.init()
[00CB] (9D) actorOps.setCostume(265)
[00D0] (9D) actorOps.setTalkColor(13)
[00D5] (9D) actorOps.setName("Purple Tentacle")
[00E7] (9D) actorOps.setWalkSpeed(4,2)
[00EF] (7F) putActorInXY(7,246,133,73)
[00FC] (82) animateActor(7,248)
[0103] (9D) actorOps.setCurActor(6)
[0108] (9D) actorOps.init()
[010A] (9D) actorOps.setCostume(5)
[010F] (9D) actorOps.setTalkColor(10)
[0114] (9D) actorOps.setName("Green Tentacle")
[0125] (9D) actorOps.setWalkSpeed(4,2)
[012D] (9D) actorOps.setPalette(1,130)
[0135] (9D) actorOps.setPalette(2,131)
[013D] (9D) actorOps.setPalette(3,112)
[0145] (7F) putActorInXY(6,263,138,73)
[0152] (82) animateActor(6,248)
[0159] (43) bitvar203 = 1
[015F] (AC) soundKludge([270,27,4])
[016C] (AC) soundKludge([271,262,27,0])
[017C] (AC) soundKludge([271,-1])
[0186] (BA) talkActor(sound(0x373B2, 0xA) + "Okay, you're free to go!",1)
[01B3] (A9) wait.waitForMessage()
[01B5] (AC) soundKludge([272])
[01BC] (AC) soundKludge([-1])
[01C3] (AC) soundKludge([262,27,127])
[01D0] (AC) soundKludge([270,27,5])
[01DD] (AC) soundKludge([271,262,27,0])
[01ED] (AC) soundKludge([271,269,27,0,180])
[0200] (AC) soundKludge([271,-1])
[020A] (9D) actorOps.setCurActor(7)
[020F] (9D) actorOps.setTalkFrame(0,0)
[0217] (B8) printActor.begin(7)
[021C] (B8) printActor.mumble()
[021E] (B8) printActor.msg(sound(0x4ED1F, 0xA) + "Now I can finish TAKING OVER THE WORLD!" + wait() + "Ha ha ha!")
[0263] (5E) startScript(2,69,[8,7,7,202,147])
[027C] (6C) breakHere()
[027D] (5D) unless ((array236[7] == 0)) jump 27c
[028A] (82) animateActor(1,246)
[0291] (5E) startScript(2,69,[8,7,7,162,137])
[02AA] (82) animateActor(1,244)
[02B1] (6C) breakHere()
[02B2] (5D) unless ((array236[7] == 0)) jump 2b1
[02BF] (5E) startScript(2,69,[8,7,7,162,108])
[02D8] (6C) breakHere()
[02D9] (5D) unless (!isActorInBox(7,2)) jump 2d8
[02E4] (43) localvar1 = 255
[02EA] (43) localvar0 = 1
[02F0] (5D) while (localvar0 <= 8) {
[02FA] (9C)   roomOps.darkenPalette(localvar1,217,217)
[0305] (9C)   roomOps.darkenPalette(localvar1,219,219)
[0310] (9C)   roomOps.darkenPalette(localvar1,211,211)
[031B] (9C)   roomOps.darkenPalette(localvar1,230,230)
[0326] (9C)   roomOps.darkenPalette(localvar1,231,231)
[0331] (9C)   roomOps.darkenPalette(localvar1,254,254)
[033C] (43)   localvar1 = (localvar1 - 32)
[0346] (6C)   breakHere()
[0347] (4F)   localvar0++
[034A] (**) }
[034D] (7C) stopScript(69)
[0351] (7F) putActorInXY(12,0,0,0)
[035E] (47) array236[7] = 0
[0367] (82) animateActor(7,3)
[036E] (7F) putActorInXY(7,0,0,0)
[037B] (A9) wait.waitForMessage()
[037D] (82) animateActor(1,247)
[0384] (82) animateActor(6,244)
[038B] (82) animateActor(1,245)
[0392] (B0) delay(20)
[0396] (BA) talkActor(sound(0x3C00C, 0xA) + "Well, what possible harm could one insane, mutant tentacle do?",1)
[03E9] (A9) wait.waitForMessage()
[03EB] (B4) printLine.begin()
[03ED] (B4) printLine.msg(" ")
[03F1] (7F) putActorInXY(4,0,0,0)
[03FE] (7F) putActorInXY(1,0,0,0)
[040B] (43) bitvar203 = 0
[0411] (5E) startScript(0,135,[1])
[041E] (6C) breakHere()
[041F] (5D) unless (!isScriptRunning(135)) jump 41e
[0427] (5F) startScriptQuick(138,[])
[042E] (66) stopObjectCodeB()
END

// Script 138: Demo Sequence
[0000] (9C) roomOps.setScreen(0,200)
[0008] (9D) actorOps.setCurActor(4)
[000D] (9D) actorOps.init()
[000F] (9D) actorOps.setCostume(124)
[0014] (9D) actorOps.setTalkColor(240)
[0019] (9D) actorOps.setTalkPos(0,-85)
[0021] (9D) actorOps.setIgnoreBoxes()
[0023] (9D) actorOps.setNeverZClip()
[0025] (9D) actorOps.setScale(255)
[002A] (7F) putActorInXY(4,182,79,69)
[0037] (82) animateActor(4,250)
[003E] (9D) actorOps.setCurActor(2)
[0043] (9D) actorOps.setCostume(347)
[0048] (9D) actorOps.setIgnoreBoxes()
[004A] (9D) actorOps.setNeverZClip()
[004C] (9D) actorOps.setScale(255)
[0051] (82) animateActor(2,250)
[0058] (7F) putActorInXY(2,304,130,69)
[0065] (9D) actorOps.setCurActor(1)
[006A] (9D) actorOps.setCostume(345)
[006F] (9D) actorOps.setIgnoreBoxes()
[0071] (9D) actorOps.setNeverZClip()
[0073] (9D) actorOps.setScale(255)
[0078] (82) animateActor(1,250)
[007F] (7F) putActorInXY(1,238,137,69)
[008C] (9D) actorOps.setCurActor(3)
[0091] (9D) actorOps.setCostume(346)
[0096] (9D) actorOps.setIgnoreBoxes()
[0098] (9D) actorOps.setNeverZClip()
[009A] (9D) actorOps.setScale(255)
[009F] (82) animateActor(3,250)
[00A6] (7F) putActorInXY(3,44,129,69)
[00B3] (70) setState(729,1)
[00BA] (70) setState(730,1)
[00C1] (70) setState(731,1)
[00C8] (9C) roomOps.screenEffect(257)
[00CD] (79) actorFollowCamera(1)
[00D1] (82) animateActor(4,7)
[00D8] (9C) roomOps.screenEffect(-32383)
[00DD] (B1) delaySeconds(2)
[00E1] (BA) talkActor(sound(0x47FF7, 0xA) + "Have any people ever been hurt in this thing?",1)
[0123] (A9) wait.waitForMessage()
[0125] (BA) talkActor(sound(0x5DA75, 0x12) + "Of course not!",4)
[0148] (B0) delay(30)
[014C] (82) animateActor(3,11)
[0153] (82) animateActor(2,11)
[015A] (82) animateActor(1,11)
[0161] (A9) wait.waitForMessage()
[0163] (82) animateActor(4,244)
[016A] (BA) talkActor(sound(0x614AC, 0xA) + "This is the first time I've ever tried it on PEOPLE!",4)
[01B3] (B0) delay(120)
[01B7] (82) animateActor(1,6)
[01BE] (82) animateActor(2,12)
[01C5] (82) animateActor(3,12)
[01CC] (A9) wait.waitForMessage()
[01CE] (6C) breakHere()
[01CF] (82) animateActor(2,8)
[01D6] (82) animateActor(3,8)
[01DD] (82) animateActor(1,8)
[01E4] (CA) delayFrames(5)
[01E8] (43) var132 = VAR_CAMERA_POS_X
[01EE] (7A) setCameraAt(var132)
[01F2] (7F) putActorInXY(2,0,0,0)
[01FF] (7F) putActorInXY(1,0,0,0)
[020C] (7F) putActorInXY(3,0,0,0)
[0219] (82) animateActor(4,250)
[0220] (9D) actorOps.setCurActor(4)
[0225] (9D) actorOps.setCostume(350)
[022A] (82) animateActor(4,6)
[0231] (CA) delayFrames(7)
[0235] (61) drawObject(732,1)
[023C] (61) drawObject(738,1)
[0243] (9D) actorOps.setCurActor(11)
[0248] (9D) actorOps.init()
[024A] (9D) actorOps.setCostume(351)
[024F] (9D) actorOps.setIgnoreBoxes()
[0251] (9D) actorOps.setNeverZClip()
[0253] (82) animateActor(11,250)
[025A] (7F) putActorInXY(11,122,39,69)
[0267] (82) animateActor(11,6)
[026E] (6C) breakHere()
[026F] (B6) printDebug.begin()
[0271] (B6) printDebug.msg(sound(0x8353E, 0xA) + " ")
[0285] (9B) resourceRoutines.loadCostume(349)
[028A] (CA) delayFrames(6)
[028E] (9D) actorOps.setCurActor(4)
[0293] (9D) actorOps.setCostume(124)
[0298] (82) animateActor(4,248)
[029F] (6C) breakHere()
[02A0] (82) animateActor(11,8)
[02A7] (82) animateActor(4,7)
[02AE] (9D) actorOps.setCurActor(2)
[02B3] (9D) actorOps.setCostume(349)
[02B8] (7F) putActorInXY(2,313,122,69)
[02C5] (82) animateActor(2,249)
[02CC] (70) setState(741,1)
[02D3] (9D) actorOps.setCurActor(3)
[02D8] (9D) actorOps.setCostume(349)
[02DD] (82) animateActor(3,248)
[02E4] (7F) putActorInXY(3,37,121,69)
[02F1] (70) setState(739,1)
[02F8] (9D) actorOps.setCurActor(1)
[02FD] (9D) actorOps.setCostume(349)
[0302] (7F) putActorInXY(1,235,134,69)
[030F] (82) animateActor(1,250)
[0316] (70) setState(740,1)
[031D] (70) setState(729,0)
[0324] (70) setState(731,0)
[032B] (70) setState(730,0)
[0332] (82) animateActor(4,246)
[0339] (82) animateActor(4,6)
[0340] (82) animateActor(3,8)
[0347] (CA) delayFrames(2)
[034B] (B6) printDebug.begin()
[034D] (B6) printDebug.msg(sound(0x6E505, 0xA) + " ")
[0361] (82) animateActor(2,250)
[0368] (82) animateActor(2,7)
[036F] (CA) delayFrames(2)
[0373] (B6) printDebug.begin()
[0375] (B6) printDebug.msg(sound(0x6E505, 0xA) + " ")
[0389] (CA) delayFrames(2)
[038D] (82) animateActor(1,6)
[0394] (CA) delayFrames(2)
[0398] (B6) printDebug.begin()
[039A] (B6) printDebug.msg(sound(0x6E505, 0xA) + " ")
[03AE] (CA) delayFrames(12)
[03B2] (B6) printDebug.begin()
[03B4] (B6) printDebug.msg(sound(0x79836, 0xA) + " ")
[03C8] (CA) delayFrames(19)
[03CC] (B6) printDebug.begin()
[03CE] (B6) printDebug.msg(sound(0x8853A, 0xA) + " ")
[03E2] (CA) delayFrames(4)
[03E6] (B6) printDebug.begin()
[03E8] (B6) printDebug.msg(sound(0x8853A, 0xA) + " ")
[03FC] (CA) delayFrames(4)
[0400] (B6) printDebug.begin()
[0402] (B6) printDebug.msg(sound(0x8853A, 0xA) + " ")
[0416] (CA) delayFrames(4)
[041A] (B6) printDebug.begin()
[041C] (B6) printDebug.msg(sound(0x8853A, 0xA) + " ")
[0430] (CA) delayFrames(4)
[0434] (B6) printDebug.begin()
[0436] (B6) printDebug.msg(sound(0x8853A, 0xA) + " ")
[044A] (6C) breakHere()
[044B] (70) setState(739,0)
[0452] (CA) delayFrames(2)
[0456] (70) setState(741,0)
[045D] (6C) breakHere()
[045E] (B6) printDebug.begin()
[0460] (B6) printDebug.msg(sound(0x8853A, 0xA) + " ")
[0474] (CA) delayFrames(2)
[0478] (70) setState(740,0)
[047F] (CA) delayFrames(2)
[0483] (B6) printDebug.begin()
[0485] (B6) printDebug.msg(sound(0x854C9, 0xA) + " ")
[0499] (82) animateActor(3,9)
[04A0] (CA) delayFrames(2)
[04A4] (B6) printDebug.begin()
[04A6] (B6) printDebug.msg(sound(0x854C9, 0xA) + " ")
[04BA] (82) animateActor(2,9)
[04C1] (CA) delayFrames(3)
[04C5] (B6) printDebug.begin()
[04C7] (B6) printDebug.msg(sound(0x854C9, 0xA) + " ")
[04DB] (82) animateActor(1,9)
[04E2] (CA) delayFrames(19)
[04E6] (6B) cursorCommand.initCharset(2)
[04EB] (7F) putActorInXY(7,0,0,0)
[04F8] (7F) putActorInXY(6,0,0,0)
[0505] (7F) putActorInXY(2,0,0,0)
[0512] (7F) putActorInXY(3,0,0,0)
[051F] (7F) putActorInXY(1,0,0,0)
[052C] (7F) putActorInXY(4,0,0,0)
[0539] (9D) actorOps.setCurActor(1)
[053E] (9D) actorOps.init()
[0540] (9D) actorOps.setTalkPos(0,-85)
[0548] (9D) actorOps.setCostume(305)
[054D] (9D) actorOps.setTalkColor(15)
[0552] (9D) actorOps.setName("Bernard")
[055C] (9D) actorOps.setWalkSpeed(10,2)
[0564] (9D) actorOps.setWidth(30)
[0569] (43) bitvar93 = 0
[056F] (7B) loadRoom(26)
[0573] (CA) delayFrames(10)
[0577] (7D) walkActorToObj(1,189,0)
[0581] (A9) wait.waitForActor(-7,1)
[0588] (B1) delaySeconds(1)
[058C] (43) bitvar93 = 0
[0592] (7B) loadRoom(9)
[0596] (6C) breakHere()
[0597] (5D) unless (bitvar93) jump 596
[059D] (B0) delay(30)
[05A1] (7B) loadRoom(26)
[05A5] (B0) delay(90)
[05A9] (82) animateActor(1,245)
[05B0] (B0) delay(45)
[05B4] (82) animateActor(1,244)
[05BB] (B0) delay(30)
[05BF] (82) animateActor(1,245)
[05C6] (B0) delay(30)
[05CA] (43) bitvar93 = 0
[05D0] (7B) loadRoom(56)
[05D4] (6C) breakHere()
[05D5] (5D) unless (bitvar93) jump 5d4
[05DB] (B0) delay(30)
[05DF] (43) bitvar93 = 0
[05E5] (7B) loadRoom(26)
[05E9] (B0) delay(60)
[05ED] (82) animateActor(1,244)
[05F4] (CA) delayFrames(4)
[05F8] (60) startObject(0,189,5,[])
[0605] (6C) breakHere()
[0606] (5D) unless (bitvar93) jump 605
[060C] (9C) roomOps.darkenPalette(0,16,255)
[0617] (9C) roomOps.darkenPalette(255,0,15)
[0622] (CA) delayFrames(3)
[0626] (6B) cursorCommand.initCharset(12)
[062B] (6B) cursorCommand.charsetColors([0,0,8])
[0639] (B5) printCursor.begin()
[063B] (B5) printCursor.color(10)
[0640] (B5) printCursor.center()
[0642] (B5) printCursor.XY(160,40)
[064A] (B5) printCursor.msg("Day of the Tentacle")
[0660] (B1) delaySeconds(3)
[0664] (6B) cursorCommand.initCharset(11)
[0669] (B4) printLine.begin()
[066B] (B4) printLine.color(13)
[0670] (B4) printLine.center()
[0672] (B4) printLine.XY(160,100)
[067A] (B4) printLine.msg("From LucasArts" + keepText())
[068D] (B1) delaySeconds(3)
[0691] (B4) printLine.begin()
[0693] (B4) printLine.msg(" ")
[0697] (B4) printLine.begin()
[0699] (B4) printLine.color(13)
[069E] (B4) printLine.center()
[06A0] (B4) printLine.XY(160,100)
[06A8] (B4) printLine.msg("IBM disk-based and full voice talkie CD-ROM versions available Summer 1993" + keepText())
[06F7] (B1) delaySeconds(7)
[06FB] (B4) printLine.begin()
[06FD] (B4) printLine.msg(" ")
[0701] (B4) printLine.begin()
[0703] (B4) printLine.color(13)
[0708] (B4) printLine.center()
[070A] (B4) printLine.XY(160,100)
[0712] (B4) printLine.msg("For pre-orders or more information, dial 1-800-STARWARS" + keepText())
[074E] (B1) delaySeconds(7)
[0752] (B4) printLine.begin()
[0754] (B4) printLine.msg(" ")
[0758] (43) var132 = 1
[075E] (5D) while (var132 <= 12) {
[0768] (7F)   putActorInXY(var132,0,0,0)
[0775] (4F)   var132++
[0778] (**) }
[077B] (AE) systemOps.restartGame()
[077D] (66) stopObjectCodeB()
END

// Script 139
[0000] (9B) resourceRoutines.lockSound(65)
[0006] (9B) resourceRoutines.loadSound(65)
[0008] (6B) cursorCommand.initCharset(11)
[000D] (9D) actorOps.setCurActor(5)
[0012] (9D) actorOps.init()
[0014] (9D) actorOps.setCostume(364)
[0019] (9D) actorOps.setIgnoreBoxes()
[001B] (9D) actorOps.setCurActor(6)
[0020] (9D) actorOps.init()
[0022] (9D) actorOps.setCostume(365)
[0027] (9D) actorOps.setIgnoreBoxes()
[0029] (7F) putActorInXY(5,160,100,VAR_ROOM)
[0036] (82) animateActor(5,250)
[003D] (7F) putActorInXY(6,160,100,VAR_ROOM)
[004A] (82) animateActor(6,250)
[0051] (6B) cursorCommand.charsetColors([0,0])
[005C] (B4) printLine.begin()
[005E] (B4) printLine.center()
[0060] (B4) printLine.color(193)
[0065] (B4) printLine.XY(160,40)
[006D] (B4) printLine.msg("LucasArts Entertainment Company" + newline() + "Presents" + keepText())
[009B] (CA) delayFrames(30)
[009F] (CA) delayFrames(15)
[00A3] (B4) printLine.begin()
[00A5] (B4) printLine.msg(" ")
[00A9] (B4) printLine.begin()
[00AB] (B4) printLine.msg(" ")
[00AF] (CA) delayFrames(5)
[00B3] (CA) delayFrames(9)
[00B7] (61) drawObject(751,0)
[00BE] (B6) printDebug.begin()
[00C0] (B6) printDebug.msg(sound(0x6E505, 0xA) + " ")
[00D4] (CA) delayFrames(7)
[00D8] (B6) printDebug.begin()
[00DA] (B6) printDebug.msg(sound(0x6E505, 0xA) + " ")
[00EE] (CA) delayFrames(2)
[00F2] (9D) actorOps.setCurActor(6)
[00F7] (9D) actorOps.init()
[00F9] (9D) actorOps.setCostume(366)
[00FE] (9D) actorOps.setIgnoreBoxes()
[0100] (7F) putActorInXY(6,160,100,VAR_ROOM)
[010D] (82) animateActor(6,250)
[0114] (43) localvar0 = 1
[011A] (5D) while (localvar0 <= 50) {
[0124] (6C)   breakHere()
[0125] (4F)   localvar0++
[0128] (**) }
[012B] (B6) printDebug.begin()
[012D] (B6) printDebug.msg(sound(0x6E505, 0xA) + " ")
[0141] (43) localvar0 = 1
[0147] (5D) while (localvar0 <= 9) {
[0151] (6C)   breakHere()
[0152] (4F)   localvar0++
[0155] (**) }
[0158] (AC) soundKludge([256,5,8])
[0165] (AC) soundKludge([-1])
[016C] (43) localvar0 = VAR_SOUNDRESULT
[0172] (75) stopSound(5)
[0176] (74) startSound(65)
[017A] (AC) soundKludge([264,65,0,4,localvar0])
[018D] (AC) soundKludge([-1])
[0194] (B6) printDebug.begin()
[0196] (B6) printDebug.msg(sound(0x6FE4D, 0xA) + " ")
[01AA] (43) localvar0 = 1
[01B0] (5D) while (localvar0 <= 9) {
[01BA] (6C)   breakHere()
[01BB] (4F)   localvar0++
[01BE] (**) }
[01C1] (9B) resourceRoutines.unlockSound(65)
[01C6] (B0) delay(85)
[01CA] (6B) cursorCommand.initCharset(2)
[01CF] (43) bitvar93 = 1
[01D5] (66) stopObjectCodeB()
END
