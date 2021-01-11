// EN
[0000] (5E) startScript(1,202,[])
[000A] (5D) if (var166 == 7) {
[0014] (AC)   soundKludge([15,2,0,1])
[0024] (AC)   soundKludge([17,2,2,15,2,0])
[003A] (5D)   if (!bitvar14) {
[0041] (5E)     startScript(0,201,[])
[004B] (**)   }
[004B] (5D)   if (getState(84) == 0) {
[0056] (5E)     startScript(0,205,[])
[0060] (**)   }
[0060] (70)   setState(81,1)
[0067] (73) } else {
[006A] (5D)   unless (!isSoundRunning(2)) jump 72
[0072] (AC)   soundKludge([17,2,2,15,2,0])
[0088] (**) }
[0088] (5D) if ((var166 == 7) && !bitvar67) {
[0097] (5D)   if (!bitvar226) {
[009E] (61)     drawObject(81,2)
[00A5] (73)   } else {
[00A8] (70)     setState(81,1)
[00AF] (**)   }
[00AF] (80)   putActorAtObject(3,81,8)
[00B9] (5E)   startScript(1,29,[])
[00C3] (5D) } else if (!bitvar67) {
[00CD] (80)   putActorAtObject(3,82,8)
[00D7] (5E)   startScript(1,29,[])
[00E1] (**) }
[00E1] (65) stopObjectCodeA()
END

// EX
[0000] (9B) resourceRoutines.unlockSound(6)
[0005] (9B) resourceRoutines.unlockSound(2)
[000A] (65) stopObjectCodeA()
END

Script# 201
[0000] (9D) actorOps.setCurActor(4)
[0005] (9D) actorOps.init()
[0007] (9D) actorOps.setCostume(23)
[000C] (9D) actorOps.setIgnoreBoxes()
[000E] (9D) actorOps.setElevation(200)
[0013] (6C) breakHere()
[0014] (5D) unless ((getObjectY(2) >= 130)) jump 13
[001F] (B6) printDebug.begin()
[0021] (B6) printDebug.msg(sound(0x1680D, 0xA) + " ")
[0035] (75) stopSound(2)
[0039] (74) startSound(6)
[003D] (7E) walkActorTo(3,150,120)
[0047] (43) var151 = 125
[004D] (68) beginCutscene([2])
[0054] (82) animateActor(2,255)
[005B] (B3) stopSentence()
[005C] (95) beginOverride()
[005D] (73) jump 192
[0060] (82) animateActor(2,249)
[0067] (B0) delay(20)
[006B] (B4) printLine.begin()
[006D] (B4) printLine.color(10)
[0072] (B4) printLine.XY(270,20)
[007A] (B4) printLine.msg("So, you want a piece of me, huh?" + wait() + "Well, take a piece of this!")
[00BA] (A9) wait.waitForMessage()
[00BC] (82) animateActor(3,249)
[00C3] (7F) putActorInXY(4,135,307,8)
[00D0] (82) animateActor(4,249)
[00D7] (82) animateActor(4,6)
[00DE] (B6) printDebug.begin()
[00E0] (B6) printDebug.msg(sound(0x60A4, 0xA) + " ")
[00F4] (CA) delayFrames(3)
[00F8] (82) animateActor(2,248)
[00FF] (82) animateActor(3,248)
[0106] (CA) delayFrames(1)
[010A] (CA) delayFrames(1)
[010E] (B6) printDebug.begin()
[0110] (B6) printDebug.msg(sound(0x2615E, 0xA) + " ")
[0124] (CA) delayFrames(3)
[0128] (B6) printDebug.begin()
[012A] (B6) printDebug.msg(sound(0x1680D, 0xA) + " ")
[013E] (CA) delayFrames(5)
[0142] (61) drawObject(85,0)
[0149] (6E) setClass(85,[32])
[0153] (61) drawObject(83,0)
[015A] (7F) putActorInXY(4,0,0,0)
[0167] (BA) talkActor("Brutal.",2)
[0173] (A9) wait.waitForMessage()
[0175] (BA) talkActor("But very true to life.",3)
[0190] (A9) wait.waitForMessage()
[0192] (61) drawObject(85,0)
[0199] (6E) setClass(85,[32])
[01A3] (70) setState(83,1)
[01AA] (7F) putActorInXY(4,0,0,0)
[01B7] (43) bitvar14 = 1
[01BD] (67) endCutscene()
[01BE] (6B) cursorCommand.cursorOff()
[01C0] (6B) cursorCommand.userPutOff()
[01C2] (7E) walkActorTo(2,200,190)
[01CC] (66) stopObjectCodeB()
END

Script# 202
[0000] (61) drawObject(86,1)
[0007] (6C) breakHere()
[0008] (5D) unless (!(VAR_VERB_SCRIPT == 60)) jump 7
[0013] (61) drawObject(86,2)
[001A] (6C) breakHere()
[001B] (5D) unless (!(VAR_VERB_SCRIPT == 60)) jump 1a
[0026] (61) drawObject(86,3)
[002D] (6C) breakHere()
[002E] (5D) unless (!(VAR_VERB_SCRIPT == 60)) jump 2d
[0039] (61) drawObject(86,4)
[0040] (6C) breakHere()
[0041] (5D) unless (!(VAR_VERB_SCRIPT == 60)) jump 40
[004C] (61) drawObject(86,5)
[0053] (6C) breakHere()
[0054] (5D) unless (!(VAR_VERB_SCRIPT == 60)) jump 53
[005F] (73) jump 0
[0062] (66) stopObjectCodeB()
END

Script# 203
[0000] (43) localvar0 = (getObjectY(2) + 45)
[000B] (5D) if (localvar0 > 255) {
[0015] (43)   localvar0 = 255
[001B] (**) }
[001B] (9C) roomOps.darkenPalette(localvar0,242,254)
[0026] (43) localvar0 = (getObjectY(3) + 45)
[0031] (5D) if (localvar0 > 255) {
[003B] (43)   localvar0 = 255
[0041] (**) }
[0041] (9C) roomOps.darkenPalette(localvar0,234,241)
[004C] (5D) if (getActorRoom(4) == 8) {
[0057] (43)   localvar0 = (var151 + 45)
[0061] (5D)   if (localvar0 > 255) {
[006B] (43)     localvar0 = 255
[0071] (**)   }
[0071] (9C)   roomOps.darkenPalette(localvar0,242,254)
[007C] (9C)   roomOps.darkenPalette(localvar0,234,241)
[0087] (**) }
[0087] (6C) breakHere()
[0088] (73) jump 0
[008B] (66) stopObjectCodeB()
END

Script# 204
[0000] (68) beginCutscene([])
[0004] (5D) if (isScriptRunning(205)) {
[000B] (7C)   stopScript(205)
[000F] (43)   localvar0 = 1
[0015] (**) }
[0015] (BA) talkActor("Gratuitous acts of senseless violence are MY forte!",3)
[004D] (7E) walkActorTo(3,150,134)
[0057] (A9) wait.waitForMessage()
[0059] (A9) wait.waitForActor(-7,2)
[0060] (82) animateActor(2,248)
[0067] (A9) wait.waitForActor(-7,3)
[006E] (82) animateActor(3,248)
[0075] (6C) breakHere()
[0076] (43) var151 = 133
[007C] (9D) actorOps.setCurActor(4)
[0081] (9D) actorOps.init()
[0083] (9D) actorOps.setCostume(24)
[0088] (9D) actorOps.setIgnoreBoxes()
[008A] (7F) putActorInXY(4,150,135,8)
[0097] (82) animateActor(4,6)
[009E] (82) animateActor(4,249)
[00A5] (9D) actorOps.setCurActor(3)
[00AA] (9D) actorOps.setElevation(255)
[00AF] (70) setState(85,0)
[00B6] (6E) setClass(85,[160])
[00C0] (CA) delayFrames(6)
[00C4] (B6) printDebug.begin()
[00C6] (B6) printDebug.msg(sound(0xCF7C, 0xA) + " ")
[00DA] (CA) delayFrames(5)
[00DE] (B6) printDebug.begin()
[00E0] (B6) printDebug.msg(sound(0x2D7CA, 0xA) + " ")
[00F4] (CA) delayFrames(5)
[00F8] (9D) actorOps.setCurActor(3)
[00FD] (9D) actorOps.setElevation(0)
[0102] (82) animateActor(3,250)
[0109] (7F) putActorInXY(4,0,0,0)
[0116] (43) bitvar15 = 1
[011C] (82) animateActor(2,248)
[0123] (6C) breakHere()
[0124] (BB) talkEgo("You're such an adorable urchin, Max.")
[014A] (A9) wait.waitForMessage()
[014C] (5D) if (localvar0) {
[0152] (5E)   startScript(0,205,[])
[015C] (**) }
[015C] (67) endCutscene()
[015D] (66) stopObjectCodeB()
END

Script# 205
[0000] (6C) breakHere()
[0001] (5D) unless ((getObjectY(2) >= 137)) jump 0
[000C] (7E) walkActorTo(3,145,135)
[0016] (6B) cursorCommand.cursorOn()
[0018] (6B) cursorCommand.userPutOn()
[001A] (68) beginCutscene([])
[001E] (6C) breakHere()
[001F] (5D) unless ((getObjectY(2) >= 149)) jump 1e
[002A] (82) animateActor(2,255)
[0031] (95) beginOverride()
[0032] (73) jump 21a
[0035] (82) animateActor(2,249)
[003C] (B4) printLine.begin()
[003E] (B4) printLine.color(10)
[0043] (B4) printLine.XY(270,20)
[004B] (B4) printLine.msg("An' here's one for your old man!")
[006E] (A9) wait.waitForMessage()
[0070] (9D) actorOps.setCurActor(4)
[0075] (9D) actorOps.init()
[0077] (9D) actorOps.setCostume(25)
[007C] (9D) actorOps.setIgnoreBoxes()
[007E] (43) var151 = 130
[0084] (82) animateActor(3,249)
[008B] (9D) actorOps.setCurActor(2)
[0090] (9D) actorOps.setElevation(255)
[0095] (7F) putActorInXY(4,174,149,8)
[00A2] (82) animateActor(4,249)
[00A9] (B6) printDebug.begin()
[00AB] (B6) printDebug.msg(sound(0x4955, 0xA) + " ")
[00BF] (82) animateActor(4,6)
[00C6] (CA) delayFrames(6)
[00CA] (82) animateActor(4,7)
[00D1] (CA) delayFrames(3)
[00D5] (9D) actorOps.setCurActor(3)
[00DA] (9D) actorOps.setElevation(255)
[00DF] (B6) printDebug.begin()
[00E1] (B6) printDebug.msg(sound(0xAA10, 0xA) + " ")
[00F5] (9B) resourceRoutines.lockSound(2)
[00FB] (9B) resourceRoutines.loadSound(2)
[00FD] (AC) soundKludge([17,6,0,1,8,2,0])
[0116] (CA) delayFrames(14)
[011A] (CA) delayFrames(6)
[011E] (B6) printDebug.begin()
[0120] (B6) printDebug.msg(sound(0x4955, 0xA) + " ")
[0134] (82) animateActor(4,8)
[013B] (CA) delayFrames(3)
[013F] (B6) printDebug.begin()
[0141] (B6) printDebug.msg(sound(0x4955, 0xA) + " ")
[0155] (CA) delayFrames(8)
[0159] (CA) delayFrames(10)
[015D] (7F) putActorInXY(2,175,139,8)
[016A] (7F) putActorInXY(3,145,135,8)
[0177] (9D) actorOps.setCurActor(2)
[017C] (9D) actorOps.setElevation(0)
[0181] (9D) actorOps.setCurActor(3)
[0186] (9D) actorOps.setElevation(0)
[018B] (61) drawObject(84,0)
[0192] (7F) putActorInXY(4,0,0,0)
[019F] (82) animateActor(2,248)
[01A6] (6C) breakHere()
[01A7] (BB) talkEgo("I really respect Flint's business acumen.")
[01D2] (AC) soundKludge([15,6,0,1])
[01E2] (A9) wait.waitForMessage()
[01E4] (BA) talkActor("Please, Sam, don't use the word `acumen` again.",3)
[0218] (A9) wait.waitForMessage()
[021A] (5D) if (VAR_OVERRIDE) {
[0220] (82)   animateActor(3,255)
[0227] (9D)   actorOps.setCurActor(2)
[022C] (9D)   actorOps.setElevation(0)
[0231] (9D)   actorOps.setCurActor(3)
[0236] (9D)   actorOps.setElevation(0)
[023B] (**) }
[023B] (9B) resourceRoutines.lockSound(2)
[0241] (9B) resourceRoutines.loadSound(2)
[0243] (AC) soundKludge([17,6,0,1,8,2,0])
[025C] (61) drawObject(84,0)
[0263] (7F) putActorInXY(4,0,0,0)
[0270] (67) endCutscene()
[0271] (66) stopObjectCodeB()
END

// Object 81: Door
Events:
   3 - 0079
   4 - 006C
   7 - 0015
[0015] (5D) if (getState(var7) != 0) {
[0020] (85)   loadRoomWithEgo(62,7,-1,-1)
[002D] (73) } else {
[0030] (68)   beginCutscene([2])
[0037] (82)   animateActor(2,10)
[003E] (6C)   breakHere()
[003F] (B6)   printDebug.begin()
[0041] (B6)   printDebug.msg(sound(0x1AA59, 0xA) + " ")
[0055] (70)   setState(var7,1)
[005C] (6C)   breakHere()
[005D] (67)   endCutscene()
[005E] (85)   loadRoomWithEgo(62,7,-1,-1)
[006B] (**) }
[006B] (65) stopObjectCodeA()
[006C] (BB) talkEgo("An egress.")
[0078] (65) stopObjectCodeA()
[0079] (5D) if (getState(var7) != 0) {
[0084] (B6)   printDebug.begin()
[0086] (B6)   printDebug.msg(sound(0x1AA59, 0xA) + " ")
[009A] (70)   setState(var7,0)
[00A1] (73) } else {
[00A4] (70)   setState(var7,0)
[00AB] (68)   beginCutscene([2])
[00B2] (82)   animateActor(2,10)
[00B9] (6C)   breakHere()
[00BA] (B6)   printDebug.begin()
[00BC] (B6)   printDebug.msg(sound(0x1AA59, 0xA) + " ")
[00D0] (5D)   if (bitvar226) {
[00D6] (70)     setState(var7,1)
[00DD] (73)   } else {
[00E0] (61)     drawObject(var7,2)
[00E7] (**)   }
[00E7] (6C)   breakHere()
[00E8] (67)   endCutscene()
[00E9] (85)   loadRoomWithEgo(62,7,-1,-1)
[00F6] (**) }
[00F6] (65) stopObjectCodeA()
END

// Object 82: Exit
Events:
   7 - 000C
[000C] (85) loadRoomWithEgo(88,9,155,159)
[0019] (65) stopObjectCodeA()
END

// Object 83: sam-hall-flint-door
Events:
END

// Object 84: sam-hall-bullet-holes
Events:
END

// Object 85: pug-object
Events:
   3 - 0039
   4 - 0018
   5 - 0039
[0018] (BB) talkEgo("Guess he had it coming to him.")
[0038] (65) stopObjectCodeA()
[0039] (5D) if ((localvar0 == 35) || (localvar0 == 0)) {
[004B] (5D)   if (!bitvar67) {
[0052] (5E)     startScript(0,204,[])
[005C] (73)   } else {
[005F] (BB)     talkEgo("Nah.  Max would never forgive me.")
[0082] (**)   }
[0082] (73) } else {
[0085] (5E)   startScript(0,63,[3,var7,localvar0])
[0098] (7C)   stopScript(0)
[009C] (**) }
[009C] (65) stopObjectCodeA()
END

// Object 86: sam-hall-fan
Events:
END

// Object 87: sam-hall-upstairs
Events:
   3 - 001C
   4 - 0012
   7 - 001C
[0012] (BB) talkEgo("Stairs.")
[001B] (65) stopObjectCodeA()
[001C] (5D) if (!bitvar67) {
[0023] (BB)   talkEgo("We don't go upstairs.")
[003A] (A9)   wait.waitForMessage()
[003C] (BA)   talkActor("Not since the accident.",3)
[0058] (A9)   wait.waitForMessage()
[005A] (73) } else {
[005D] (BB)   talkEgo("We don't go upstairs^" + wait() + "^not since the accident.")
[008E] (A9)   wait.waitForMessage()
[0090] (**) }
[0090] (65) stopObjectCodeA()
END
