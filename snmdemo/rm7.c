// EN
[0000] (43) VAR_VERB_SCRIPT = 48
[0006] (7C) stopScript(var175)
[000A] (43) var175 = 51
[0010] (43) bitvar6 = 1
[0016] (5E) startScript(0,51,[])
[0020] (43) VAR_VERB_SCRIPT = 48
[0026] (5D) if (bitvar226) {
[002C] (9C)   roomOps.darkenPalette(255,0,255)
[0037] (73) } else {
[003A] (9C)   roomOps.darkenPalette(68,17,138)
[0045] (9C)   roomOps.darkenPalette(68,140,146)
[0050] (9C)   roomOps.darkenPalette(68,148,159)
[005B] (9C)   roomOps.darkenPalette(68,192,255)
[0066] (9C)   roomOps.darkenPalette(255,157,157)
[0071] (9C)   roomOps.darkenPalette(255,201,203)
[007C] (9C)   roomOps.darkenPalette(255,207,207)
[0087] (9C)   roomOps.darkenPalette(255,214,214)
[0092] (9C)   roomOps.darkenPalette(255,219,219)
[009D] (9C)   roomOps.darkenPalette(255,223,223)
[00A8] (**) }
[00A8] (5D) if (bitvar229) {
[00AE] (9D)   actorOps.setCurActor(8)
[00B3] (9D)   actorOps.init()
[00B5] (9D)   actorOps.setCostume(11)
[00BA] (9D)   actorOps.setIgnoreBoxes()
[00BC] (9D)   actorOps.setAlwayZClip(1)
[00C1] (9D)   actorOps.setScale(255)
[00C6] (9D)   actorOps.setElevation(100)
[00CB] (C9)   kernelSetFunctions.setActorShadowMode([8,160])
[00D8] (7F)   putActorInXY(8,375,238,7)
[00E5] (82)   animateActor(8,250)
[00EC] (82)   animateActor(8,6)
[00F3] (47)   array184[8] = 215
[00FC] (5D)   if (bitvar226) {
[0102] (9C)     roomOps.setPalColor(165,172,187,16)
[0110] (C9)     kernelSetFunctions.setupShadowPalette([160,191,255,20,255])
[0126] (73)   } else {
[0129] (9C)     roomOps.darkenPalette(255,16,16)
[0134] (C9)     kernelSetFunctions.setupShadowPalette([160,191,255,20,255])
[014A] (**)   }
[014A] (73) } else {
[014D] (9C)   roomOps.setPalColor(165,172,187,16)
[015B] (**) }
[015B] (43) var175 = 51
[0161] (43) VAR_SENTENCE_SCRIPT = 50
[0167] (5E) startScript(0,var175,[])
[0171] (9D) actorOps.setCurActor(5)
[0176] (9D) actorOps.init()
[0178] (9D) actorOps.setCostume(14)
[017D] (9D) actorOps.setIgnoreBoxes()
[017F] (7F) putActorInXY(5,353,117,7)
[018C] (82) animateActor(5,6)
[0193] (5D) if (ifClassOfIs(71,[146])) {
[01A0] (5E)   startScript(0,212,[1])
[01AD] (**) }
[01AD] (5E) startScript(1,203,[])
[01B7] (5E) startScript(1,204,[])
[01C1] (5E) startScript(1,205,[])
[01CB] (5E) startScript(1,208,[])
[01D5] (5D) unless ((var166 == 8)) jump 1df
[01DF] (5D) if (isAnyOf(var166,[1])) {
[01EC] (74)   startSound(5)
[01F0] (75)   stopSound(1)
[01F4] (5E)   startScript(0,65,[])
[01FE] (7C)   stopScript(0)
[0202] (5D) } else if (!isSoundRunning(2)) {
[020D] (74)   startSound(2)
[0211] (**) }
[0211] (7F) putActorInXY(2,0,160,7)
[021E] (7E) walkActorTo(2,105,130)
[0228] (9D) actorOps.setCurActor(3)
[022D] (9D) actorOps.setCostume(5)
[0232] (5D) if (!bitvar67) {
[0239] (7F)   putActorInXY(3,0,160,7)
[0246] (5E)   startScript(0,202,[])
[0250] (**) }
[0250] (5D) if (getState(62) == 0) {
[025B] (99)   setBoxFlags([8],128)
[0265] (**) }
[0265] (65) stopObjectCodeA()
END

// EX
[0000] (9B) resourceRoutines.unlockSound(4)
[0005] (9D) actorOps.setCurActor(3)
[000A] (9D) actorOps.setCostume(3)
[000F] (7C) stopScript(208)
[0013] (7F) putActorInXY(4,0,0,0)
[0020] (82) animateActor(5,255)
[0027] (7F) putActorInXY(5,0,0,0)
[0034] (65) stopObjectCodeA()
END

Script# 201
[0000] (B6) printDebug.begin()
[0002] (B6) printDebug.msg(sound(0x12C0C, 0xA) + " ")
[0016] (5D) if (localvar0) {
[001C] (43)   bitvar226 = 0
[0022] (9C)   roomOps.darkenPalette(68,17,138)
[002D] (9C)   roomOps.darkenPalette(68,140,146)
[0038] (9C)   roomOps.darkenPalette(68,148,159)
[0043] (9C)   roomOps.darkenPalette(68,192,255)
[004E] (9C)   roomOps.darkenPalette(255,157,157)
[0059] (9C)   roomOps.darkenPalette(255,201,203)
[0064] (9C)   roomOps.darkenPalette(255,207,207)
[006F] (9C)   roomOps.darkenPalette(255,214,214)
[007A] (9C)   roomOps.darkenPalette(255,219,219)
[0085] (9C)   roomOps.darkenPalette(255,223,223)
[0090] (5D)   if (getActorRoom(8) == 7) {
[009B] (9C)     roomOps.darkenPalette(255,16,16)
[00A6] (C9)     kernelSetFunctions.setupShadowPalette([160,191,255,20,255])
[00BC] (73)   } else {
[00BF] (9C)     roomOps.setPalColor(31,35,37,16)
[00CD] (**)   }
[00CD] (73) } else {
[00D0] (43)   bitvar226 = 1
[00D6] (9C)   roomOps.darkenPalette(255,0,15)
[00E1] (9C)   roomOps.darkenPalette(255,17,138)
[00EC] (9C)   roomOps.darkenPalette(255,140,146)
[00F7] (9C)   roomOps.darkenPalette(255,148,159)
[0102] (9C)   roomOps.darkenPalette(255,192,255)
[010D] (5D)   if (getActorRoom(8) != 7) {
[0118] (9C)     roomOps.setPalColor(165,172,187,16)
[0126] (**)   }
[0126] (**) }
[0126] (66) stopObjectCodeB()
END

Script# 202
[0000] (5E) startScript(1,29,[])
[000A] (66) stopObjectCodeB()
END

Script# 203
[0000] (5D) if (bitvar226) {
[0006] (5D)   if (getDistObjObj(2,72) < 62) {
[0014] (9C)     roomOps.darkenPalette(255,242,254)
[001F] (5D)   } else if (getDistObjObj(2,73) < 58) {
[0030] (9C)     roomOps.darkenPalette(255,242,254)
[003B] (73)   } else {
[003E] (9C)     roomOps.darkenPalette(200,242,254)
[0049] (**)   }
[0049] (5D)   if (!bitvar67) {
[0050] (5D)     if (getDistObjObj(3,72) < 62) {
[005E] (9C)       roomOps.darkenPalette(255,234,241)
[0069] (5D)     } else if (getDistObjObj(3,73) < 58) {
[007A] (9C)       roomOps.darkenPalette(255,234,241)
[0085] (73)     } else {
[0088] (9C)       roomOps.darkenPalette(200,234,241)
[0093] (**)     }
[0093] (**)   }
[0093] (**) }
[0093] (6C) breakHere()
[0094] (73) jump 0
[0097] (66) stopObjectCodeB()
END

Script# 204
[0000] (43) localvar0 = getRandomNumberRange(1,4)
[000A] (0C) dup[1] = localvar0
[000E] (5D) if (dup[1] == 1) {
[0015] (70)   setState(74,1)
[001D] (5D) } else if (dup[1] == 2) {
[0028] (70)   setState(75,1)
[0030] (5D) } else if (dup[1] == 3) {
[003B] (70)   setState(74,0)
[0043] (5D) } else if (dup[1] == 4) {
[004E] (70)   setState(75,0)
[0056] (73)   /* jump 5a; */
[0059] (**) }
[0059] (6C) breakHere()
[005B] (43) localvar0 = getRandomNumberRange(1,3)
[0065] (B1) delaySeconds(localvar0)
[0069] (6C) breakHere()
[006A] (5D) unless (!(VAR_VERB_SCRIPT == 60)) jump 69
[0075] (73) jump 0
[0078] (66) stopObjectCodeB()
END

Script# 205
[0000] (5D) if (!var230) {
[0007] (43)   var230 = getRandomNumberRange(0,1)
[0011] (**) }
[0011] (5D) if (var230) {
[0017] (5D)   if (!(VAR_VERB_SCRIPT == 60)) {
[0022] (61)     drawObject(76,0)
[0029] (**)   }
[0029] (B0)   delay(30)
[002D] (5D)   if (!(VAR_VERB_SCRIPT == 60)) {
[0038] (70)     setState(76,0)
[003F] (**)   }
[003F] (B0)   delay(30)
[0043] (73)   jump 17
[0046] (**) }
[0046] (66) stopObjectCodeB()
END

Script# 206
[0000] (68) beginCutscene([])
[0004] (BB) talkEgo("Oh boy! We've got a message!")
[0022] (A9) wait.waitForMessage()
[0024] (5D) if (!bitvar67) {
[002B] (BA)   talkActor("Gee, I hope it's something eerily provocative.",3)
[005E] (A9)   wait.waitForMessage()
[0060] (**) }
[0060] (7D) walkActorToObj(2,76,0)
[006A] (A9) wait.waitForActor(-7,2)
[0071] (82) animateActor(2,10)
[0078] (CA) delayFrames(3)
[007C] (82) animateActor(2,3)
[0083] (0C) dup[1] = var230
[0087] (5D) if (dup[1] == 1) {
[008E] (0C)   dup[2] = getRandomNumber(4)
[0094] (5D)   if (dup[2] == 0) {
[009B] (B4)     printLine.begin()
[009E] (B4)     printLine.color(4)
[00A3] (B4)     printLine.msg("<beep> Hey!  You're the jerk who sideswiped me on the Queensborough Bridge!" + wait() + "Don't think I didn't get a good look at your long fluffy ears!" + wait() + "See you in court!")
[0144] (A9)     wait.waitForMessage()
[0146] (BA)     talkActor("We may have to go over there and terrify the righteous indignity out of that little fellow.",2)
[01A6] (A9)     wait.waitForMessage()
[01A8] (5D)   } else if (dup[2] == 1) {
[01B3] (B4)     printLine.begin()
[01B6] (B4)     printLine.color(4)
[01BB] (B4)     printLine.msg("<beep> Sam, it's your mother calling to wish you a good morning." + wait() + "Be careful, honey and try not to get shot today, okay?")
[0236] (A9)     wait.waitForMessage()
[0238] (BA)     talkActor("Doesn't she know I'm old enough to make my own decisions about getting shot?",2)
[0289] (A9)     wait.waitForMessage()
[028B] (5D)   } else if (dup[2] == 2) {
[0296] (B4)     printLine.begin()
[0299] (B4)     printLine.color(4)
[029E] (B4)     printLine.msg("<beep> Hi, I'm calling about your upcoming auction of confiscated automatic weapons." + wait() + "Do you sell to convicted felons?")
[0317] (A9)     wait.waitForMessage()
[0319] (BA)     talkActor("Hey, who are we to discriminate?",2)
[033E] (A9)     wait.waitForMessage()
[0340] (5D)   } else if (dup[2] == 3) {
[034B] (B4)     printLine.begin()
[034E] (B4)     printLine.color(4)
[0353] (B4)     printLine.msg("<beep> Hello, is this the Saint Francis Pie Shop?" + wait() + "I'd like to order 200 lemon meringue pies and a small diet cola.")
[03C9] (A9)     wait.waitForMessage()
[03CB] (BA)     talkActor("I wonder if the pie shop gets calls reporting machete-wielding intruders?",2)
[0419] (A9)     wait.waitForMessage()
[041B] (5D)   } else if (dup[2] == 4) {
[0426] (B4)     printLine.begin()
[0429] (B4)     printLine.color(4)
[042E] (B4)     printLine.msg("<beep> Snork! <Grunt>" + wait() + "SQUEEEE!!!!" + wait() + "<Scronk> Yib!" + wait() + "<Click>")
[046B] (A9)     wait.waitForMessage()
[046D] (73)     /* jump 471; */
[0470] (**)   }
[0470] (5D) } else if (dup[2] == 2) {
[047C] (B4)   printLine.begin()
[047F] (B4)   printLine.color(4)
[0484] (B4)   printLine.msg("<beep> I saw what you did at the World-of-Fish^" + wait() + "^don't think I didn't." + wait() + "Send me all your money and I won't call the police.")
[0503] (5D) } else if (dup[2] == 3) {
[050E] (B4)   printLine.begin()
[0511] (B4)   printLine.color(4)
[0516] (B4)   printLine.msg("<beep> Hey! You're the one" + newline() + "who cut me off on highway 364!" + wait() + "You're a jerk!" + wait() + "^Um^" + wait() + "^so there!")
[0575] (73) } else {
[0578] (73)   jump 8f
[057C] (**) }
[057C] (A9) wait.waitForMessage()
[057E] (7C) stopScript(205)
[0582] (70) setState(76,0)
[0589] (67) endCutscene()
[058A] (43) var230 = 0
[0590] (66) stopObjectCodeB()
END

Script# 207
[0000] (68) beginCutscene([])
[0004] (7E) walkActorTo(2,140,120)
[000E] (A9) wait.waitForActor(-7,2)
[0015] (82) animateActor(2,248)
[001C] (CA) delayFrames(5)
[0020] (82) animateActor(2,6)
[0027] (CA) delayFrames(6)
[002B] (5D) if (bitvar226) {
[0031] (7C)   stopScript(203)
[0035] (9C)   roomOps.darkenPalette(255,242,254)
[0040] (**) }
[0040] (9D) actorOps.setCurActor(2)
[0045] (9D) actorOps.setCostume(12)
[004A] (9D) actorOps.setIgnoreBoxes()
[004C] (9D) actorOps.setAlwayZClip(2)
[0051] (9D) actorOps.setScale(212)
[0056] (7F) putActorInXY(2,145,120,255)
[0063] (82) animateActor(2,250)
[006A] (6C) breakHere()
[006B] (82) animateActor(2,6)
[0072] (5D) if (!bitvar67) {
[0079] (82)   animateActor(3,3)
[0080] (6C)   breakHere()
[0081] (81)   faceActor(3,2)
[0088] (**) }
[0088] (CA) delayFrames(10)
[008C] (B6) printDebug.begin()
[008E] (B6) printDebug.msg(sound(0x241BB, 0xA) + " ")
[00A2] (CA) delayFrames(5)
[00A6] (B6) printDebug.begin()
[00A8] (B6) printDebug.msg(sound(0x510CE, 0xA) + " ")
[00BC] (CA) delayFrames(25)
[00C0] (9D) actorOps.setCurActor(2)
[00C5] (9D) actorOps.init()
[00C7] (9D) actorOps.setCostume(2)
[00CC] (9D) actorOps.setTalkColor(6)
[00D1] (9D) actorOps.setTalkPos(0,-110)
[00D9] (7F) putActorInXY(2,132,120,255)
[00E6] (BB) talkEgo("Cash.  Never leave home without it.")
[010B] (A9) wait.waitForMessage()
[010D] (5D) if (!bitvar67) {
[0114] (BA)   talkActor("Yeah.  We may need it to bribe slippery government officials.",3)
[0156] (**) }
[0156] (6E) setClass(var7,[18])
[0160] (5F) startScriptQuick(54,[70])
[016A] (67) endCutscene()
[016B] (5D) if (bitvar226) {
[0171] (5E)   startScript(1,203,[])
[017B] (**) }
[017B] (66) stopObjectCodeB()
END

Script# 208
[0000] (0C) dup[1] = getRandomNumberRange(1,8)
[0008] (5D) if (dup[1] == 2) {
[000F] (5D)   if (!isScriptRunning(207)) {
[0018] (9D)     actorOps.setCurActor(4)
[001D] (9D)     actorOps.init()
[001F] (9D)     actorOps.setCostume(13)
[0024] (9D)     actorOps.setIgnoreBoxes()
[0026] (9D)     actorOps.setAlwayZClip(3)
[002B] (9D)     actorOps.setScale(140)
[0030] (7F)     putActorInXY(4,106,106,7)
[003D] (5E)     startScript(1,209,[])
[0047] (7E)     walkActorTo(4,114,113)
[0051] (A9)     wait.waitForActor(-7,4)
[0058] (9D)     actorOps.setCurActor(4)
[005D] (9D)     actorOps.setIgnoreBoxes()
[005F] (9D)     actorOps.setAlwayZClip(2)
[0064] (7E)     walkActorTo(4,140,119)
[006E] (A9)     wait.waitForActor(-7,4)
[0075] (7E)     walkActorTo(4,232,155)
[007F] (A9)     wait.waitForActor(-7,4)
[0086] (9D)     actorOps.setCurActor(4)
[008B] (9D)     actorOps.setIgnoreBoxes()
[008D] (9D)     actorOps.setAlwayZClip(1)
[0092] (7E)     walkActorTo(4,488,179)
[009C] (A9)     wait.waitForActor(-7,4)
[00A3] (**)   }
[00A3] (73)   /* jump a7; */
[00A6] (**) }
[00A6] (7C) stopScript(209)
[00AB] (B1) delaySeconds(4)
[00AF] (73) jump 0
[00B2] (66) stopObjectCodeB()
END

Script# 209
[0000] (5D) if (getObjectY(4) >= 158) {
[000B] (9D)   actorOps.setCurActor(4)
[0010] (9D)   actorOps.setScale(255)
[0015] (73) } else {
[0018] (43)   localvar0 = (((getObjectY(4) - 112) * (25 / 10)) + 139)
[002F] (9D)   actorOps.setCurActor(4)
[0034] (9D)   actorOps.setScale(localvar0)
[0039] (**) }
[0039] (6C) breakHere()
[003A] (73) jump 0
[003D] (66) stopObjectCodeB()
END

Script# 210
[0000] (68) beginCutscene([])
[0004] (43) bitvar13 = 1
[000A] (9D) actorOps.setCurActor(6)
[000F] (9D) actorOps.init()
[0011] (9D) actorOps.setCostume(15)
[0016] (9D) actorOps.setIgnoreBoxes()
[0018] (9D) actorOps.setScale(255)
[001D] (7D) walkActorToObj(3,65,0)
[0027] (A9) wait.waitForMessage()
[0029] (A9) wait.waitForActor(-7,3)
[0030] (82) animateActor(3,3)
[0037] (6C) breakHere()
[0038] (80) putActorAtObject(6,65,7)
[0042] (9D) actorOps.setCurActor(3)
[0047] (9D) actorOps.setElevation(255)
[004C] (82) animateActor(3,6)
[0053] (61) drawObject(65,0)
[005A] (CA) delayFrames(3)
[005E] (B6) printDebug.begin()
[0060] (B6) printDebug.msg(sound(0x599DE, 0xA) + " ")
[0074] (CA) delayFrames(3)
[0078] (B6) printDebug.begin()
[007A] (B6) printDebug.msg(sound(0x599DE, 0xA) + " ")
[008E] (CA) delayFrames(14)
[0092] (B6) printDebug.begin()
[0094] (B6) printDebug.msg(sound(0x1BA85, 0xA) + " ")
[00A8] (7F) putActorInXY(5,0,0,0)
[00B5] (9D) actorOps.setCurActor(3)
[00BA] (9D) actorOps.setElevation(0)
[00BF] (82) animateActor(3,249)
[00C6] (CA) delayFrames(25)
[00CA] (82) animateActor(3,7)
[00D1] (7F) putActorInXY(5,353,117,7)
[00DE] (7F) putActorInXY(6,0,0,0)
[00EB] (CA) delayFrames(3)
[00EF] (6E) setClass(65,[160])
[00F9] (67) endCutscene()
[00FA] (66) stopObjectCodeB()
END

Script# 211
[0000] (68) beginCutscene([])
[0004] (5D) if (bitvar226) {
[000A] (7C)   stopScript(203)
[000E] (**) }
[000E] (9D) actorOps.setCurActor(7)
[0013] (9D) actorOps.init()
[0015] (9D) actorOps.setCostume(16)
[001A] (9D) actorOps.setIgnoreBoxes()
[001C] (9D) actorOps.setAlwayZClip(2)
[0021] (9D) actorOps.setScale(215)
[0026] (7D) walkActorToObj(2,77,0)
[0030] (43) bitvar2 = 1
[0036] (6C) breakHere()
[0037] (5D) unless (bitvar3) jump 36
[003D] (81) faceActor(3,77)
[0044] (A9) wait.waitForActor(-7,2)
[004B] (82) animateActor(2,249)
[0052] (CA) delayFrames(2)
[0056] (80) putActorAtObject(7,77,7)
[0060] (82) animateActor(7,249)
[0067] (9D) actorOps.setCurActor(2)
[006C] (9D) actorOps.setElevation(255)
[0071] (9D) actorOps.setCostume(10)
[0076] (6C) breakHere()
[0077] (82) animateActor(7,6)
[007E] (CA) delayFrames(2)
[0082] (B6) printDebug.begin()
[0084] (B6) printDebug.msg(sound(0x3E92A, 0xA) + " ")
[0098] (70) setState(77,1)
[009F] (CA) delayFrames(3)
[00A3] (B6) printDebug.begin()
[00A5] (B6) printDebug.msg(sound(0x241BB, 0xA) + " ")
[00B9] (CA) delayFrames(6)
[00BD] (B6) printDebug.begin()
[00BF] (B6) printDebug.msg(sound(0x3FF16, 0xA) + " ")
[00D3] (CA) delayFrames(4)
[00D7] (B6) printDebug.begin()
[00D9] (B6) printDebug.msg(sound(0x3FF16, 0xA) + " ")
[00ED] (CA) delayFrames(4)
[00F1] (B6) printDebug.begin()
[00F3] (B6) printDebug.msg(sound(0x3FF16, 0xA) + " ")
[0107] (CA) delayFrames(3)
[010B] (B6) printDebug.begin()
[010D] (B6) printDebug.msg(sound(0x3FF16, 0xA) + " ")
[0121] (CA) delayFrames(5)
[0125] (CA) delayFrames(2)
[0129] (5D) if (bitvar226) {
[012F] (9C)   roomOps.darkenPalette(255,242,254)
[013A] (**) }
[013A] (CA) delayFrames(15)
[013E] (B6) printDebug.begin()
[0140] (B6) printDebug.msg(sound(0x3CE53, 0xA) + " ")
[0154] (CA) delayFrames(1)
[0158] (B6) printDebug.begin()
[015A] (B6) printDebug.msg(sound(0x18C3D, 0xA) + " ")
[016E] (CA) delayFrames(2)
[0172] (B6) printDebug.begin()
[0174] (B6) printDebug.msg(sound(0x19C3E, 0xA) + " ")
[0188] (CA) delayFrames(1)
[018C] (7F) putActorInXY(2,100,115,7)
[0199] (9D) actorOps.setCurActor(2)
[019E] (9D) actorOps.setElevation(0)
[01A3] (CA) delayFrames(1)
[01A7] (70) setState(77,0)
[01AE] (CA) delayFrames(1)
[01B2] (7F) putActorInXY(7,0,0,0)
[01BF] (9D) actorOps.setCurActor(2)
[01C4] (9D) actorOps.setCostume(2)
[01C9] (43) bitvar2 = 0
[01CF] (5D) if (bitvar226) {
[01D5] (5E)   startScript(1,203,[])
[01DF] (**) }
[01DF] (67) endCutscene()
[01E0] (66) stopObjectCodeB()
END

Script# 212
[0000] (5D) if (localvar0) {
[0006] (5D)   if (!bitvar226) {
[000D] (9C)     roomOps.darkenPalette(255,201,203)
[0018] (9C)     roomOps.darkenPalette(255,207,207)
[0023] (9C)     roomOps.darkenPalette(255,214,214)
[002E] (9C)     roomOps.darkenPalette(255,219,219)
[0039] (9C)     roomOps.darkenPalette(255,223,223)
[0044] (**)   }
[0044] (CA)   delayFrames(2)
[0048] (B6)   printDebug.begin()
[004A] (B6)   printDebug.msg(sound(0x12C0C, 0xA) + " ")
[005E] (CA)   delayFrames(6)
[0062] (9D)   actorOps.setCurActor(2)
[0067] (9D)   actorOps.init()
[0069] (9D)   actorOps.setCostume(2)
[006E] (9D)   actorOps.setTalkColor(6)
[0073] (9D)   actorOps.setTalkPos(0,-110)
[007B] (5D)   if (ifClassOfIs(67,[137])) {
[0088] (43)     localvar1 = 1
[008E] (5D)     while (localvar1 <= 2) {
[0098] (6C)       breakHere()
[0099] (5D)       unless (!(VAR_VERB_SCRIPT == 60)) jump 98
[00A4] (61)       drawObject(78,localvar1)
[00AB] (5D)       if (ifClassOfIs(67,[9])) {
[00B8] (73)         jump c5
[00BB] (**)       }
[00BB] (6C)       breakHere()
[00BC] (4F)       localvar1++
[00BF] (**)     }
[00C2] (73)   } else {
[00C5] (43)     localvar1 = 1
[00CB] (5D)     while (localvar1 <= 15) {
[00D5] (6C)       breakHere()
[00D6] (5D)       unless (!(VAR_VERB_SCRIPT == 60)) jump d5
[00E1] (61)       drawObject(71,localvar1)
[00E8] (5D)       if (ifClassOfIs(67,[137])) {
[00F5] (73)         jump 88
[00F8] (**)       }
[00F8] (6C)       breakHere()
[00F9] (4F)       localvar1++
[00FC] (**)     }
[00FF] (**)   }
[00FF] (6C)   breakHere()
[0100] (73)   jump 7b
[0103] (73) } else {
[0106] (68)   beginCutscene([2])
[010D] (CA)   delayFrames(2)
[0111] (B6)   printDebug.begin()
[0113] (B6)   printDebug.msg(sound(0x12C0C, 0xA) + " ")
[0127] (67)   endCutscene()
[0128] (70)   setState(71,0)
[012F] (70)   setState(78,0)
[0136] (7C)   stopScript(0)
[013A] (**) }
[013A] (66) stopObjectCodeB()
END

Script# 213
[0000] (68) beginCutscene([])
[0004] (7E) walkActorTo(2,122,128)
[000E] (A9) wait.waitForActor(-7,2)
[0015] (9D) actorOps.setCurActor(2)
[001A] (9D) actorOps.init()
[001C] (9D) actorOps.setCostume(18)
[0021] (5D) if (ifClassOfIs(67,[137])) {
[002E] (82)   animateActor(2,7)
[0035] (6C)   breakHere()
[0036] (B6)   printDebug.begin()
[0038] (B6)   printDebug.msg(sound(0x23270, 0xA) + " ")
[004C] (70)   setState(67,3)
[0053] (6E)   setClass(67,[9])
[005D] (5D)   if (ifClassOfIs(71,[146])) {
[006A] (43)     localvar0 = 1
[0070] (5D)     while (localvar0 <= 7) {
[007A] (61)       drawObject(78,3)
[0081] (6C)       breakHere()
[0082] (61)       drawObject(78,4)
[0089] (4F)       localvar0++
[008C] (**)     }
[008F] (73)   } else {
[0092] (CA)     delayFrames(12)
[0096] (**)   }
[0096] (61)   drawObject(67,1)
[009D] (73) } else {
[00A0] (82)   animateActor(2,6)
[00A7] (6C)   breakHere()
[00A8] (B6)   printDebug.begin()
[00AA] (B6)   printDebug.msg(sound(0x23270, 0xA) + " ")
[00BE] (70)   setState(67,3)
[00C5] (6E)   setClass(67,[137])
[00CF] (5D)   if (ifClassOfIs(71,[146])) {
[00DC] (43)     localvar0 = 1
[00E2] (5D)     while (localvar0 <= 6) {
[00EC] (61)       drawObject(78,3)
[00F3] (6C)       breakHere()
[00F4] (61)       drawObject(78,4)
[00FB] (6C)       breakHere()
[00FC] (4F)       localvar0++
[00FF] (**)     }
[0102] (61)     drawObject(78,3)
[0109] (73)   } else {
[010C] (CA)     delayFrames(12)
[0110] (**)   }
[0110] (61)   drawObject(67,2)
[0117] (**) }
[0117] (9D) actorOps.setCurActor(2)
[011C] (9D) actorOps.init()
[011E] (9D) actorOps.setCostume(2)
[0123] (9D) actorOps.setTalkColor(6)
[0128] (9D) actorOps.setTalkPos(0,-110)
[0130] (67) endCutscene()
[0131] (66) stopObjectCodeB()
END

Script# 214
[0000] (B6) printDebug.begin()
[0002] (B6) printDebug.msg(sound(0x12C0C, 0xA) + " ")
[0016] (5D) if (getActorRoom(8) == 7) {
[0021] (7F)   putActorInXY(8,0,0,0)
[002E] (47)   array184[8] = 0
[0037] (43)   bitvar229 = 0
[003D] (5D)   if (bitvar226) {
[0043] (9C)     roomOps.setPalColor(165,172,187,16)
[0051] (73)   } else {
[0054] (9C)     roomOps.setPalColor(31,35,37,16)
[0062] (**)   }
[0062] (73) } else {
[0065] (43)   bitvar229 = 1
[006B] (9D)   actorOps.setCurActor(8)
[0070] (9D)   actorOps.init()
[0072] (9D)   actorOps.setCostume(11)
[0077] (9D)   actorOps.setIgnoreBoxes()
[0079] (9D)   actorOps.setAlwayZClip(1)
[007E] (9D)   actorOps.setScale(255)
[0083] (9D)   actorOps.setElevation(100)
[0088] (C9)   kernelSetFunctions.setActorShadowMode([8,160])
[0095] (7F)   putActorInXY(8,375,238,7)
[00A2] (82)   animateActor(8,250)
[00A9] (82)   animateActor(8,6)
[00B0] (47)   array184[8] = 215
[00B9] (5D)   if (bitvar226) {
[00BF] (9C)     roomOps.setPalColor(165,172,187,16)
[00CD] (C9)     kernelSetFunctions.setupShadowPalette([160,191,255,20,255])
[00E3] (68)     beginCutscene([2])
[00EA] (BA)     talkActor("This would be more impressive in the dark, I think.",2)
[0122] (A9)     wait.waitForMessage()
[0124] (67)     endCutscene()
[0125] (73)   } else {
[0128] (9C)     roomOps.darkenPalette(255,16,16)
[0133] (C9)     kernelSetFunctions.setupShadowPalette([160,191,255,20,255])
[0149] (**)   }
[0149] (**) }
[0149] (66) stopObjectCodeB()
END

Script# 215
[0000] (83) doSentence(localvar0,63,130,localvar1)
[000D] (66) stopObjectCodeB()
END

// Object 62: office-door
Events:
   3 - 00CB
   4 - 00A0
   7 - 0015
[0015] (5D) if (getState(var7) == 1) {
[0020] (68)   beginCutscene([2])
[0027] (7E)   walkActorTo(2,0,160)
[0031] (A9)   wait.waitForActor(-7,2)
[0038] (67)   endCutscene()
[0039] (85)   loadRoomWithEgo(81,8,164,110)
[0046] (73) } else {
[0049] (68)   beginCutscene([2])
[0050] (82)   animateActor(2,10)
[0057] (6C)   breakHere()
[0058] (B6)   printDebug.begin()
[005A] (B6)   printDebug.msg(sound(0x1AA59, 0xA) + " ")
[006E] (70)   setState(var7,1)
[0075] (6C)   breakHere()
[0076] (99)   setBoxFlags([8],0)
[0080] (7E)   walkActorTo(2,0,160)
[008A] (A9)   wait.waitForActor(-7,2)
[0091] (67)   endCutscene()
[0092] (85)   loadRoomWithEgo(81,8,164,110)
[009F] (**) }
[009F] (65) stopObjectCodeA()
[00A0] (BA) talkActor("This is pretty damn self-explanatory.",VAR_EGO)
[00CA] (65) stopObjectCodeA()
[00CB] (5D) if (getState(var7) == 1) {
[00D6] (5D)   if (getActorWalkBox(3) == 8) {
[00E1] (68)     beginCutscene([2])
[00E8] (BA)     talkActor("Get in here, Max.",2)
[00FE] (43)     bitvar2 = 1
[0104] (6C)     breakHere()
[0105] (5D)     unless (bitvar3) jump 104
[010B] (7E)     walkActorTo(3,92,152)
[0115] (A9)     wait.waitForActor(-7,3)
[011C] (82)     animateActor(2,10)
[0123] (CA)     delayFrames(2)
[0127] (A9)     wait.waitForMessage()
[0129] (67)     endCutscene()
[012A] (43)     bitvar2 = 0
[0130] (**)   }
[0130] (B6)   printDebug.begin()
[0132] (B6)   printDebug.msg(sound(0x1AA59, 0xA) + " ")
[0146] (70)   setState(var7,0)
[014D] (99)   setBoxFlags([8],128)
[0157] (82)   animateActor(2,3)
[015E] (73) } else {
[0161] (B6)   printDebug.begin()
[0163] (B6)   printDebug.msg(sound(0x1AA59, 0xA) + " ")
[0177] (70)   setState(var7,1)
[017E] (99)   setBoxFlags([8],0)
[0188] (68)   beginCutscene([2])
[018F] (82)   animateActor(2,10)
[0196] (6C)   breakHere()
[0197] (70)   setState(var7,1)
[019E] (6C)   breakHere()
[019F] (99)   setBoxFlags([8],0)
[01A9] (7E)   walkActorTo(2,0,160)
[01B3] (A9)   wait.waitForActor(-7,2)
[01BA] (67)   endCutscene()
[01BB] (85)   loadRoomWithEgo(81,8,164,110)
[01C8] (**) }
[01C8] (65) stopObjectCodeA()
END

// Object 63: office-black-Light
Events:
   3 - 00ED
   4 - 002B
   5 - 00A8
  5B - 0024
[0024] (43) var182 = 1006
[002A] (65) stopObjectCodeA()
[002B] (5D) if (ifClassOfIs(var7,[24,134])) {
[003B] (6E)   setClass(var7,[152])
[0045] (BA)   talkActor("It's a black light that Max uses to illuminate his rare 60's posters.",2)
[008F] (73) } else {
[0092] (BB)   talkEgo("It's a black light.")
[00A7] (**) }
[00A7] (65) stopObjectCodeA()
[00A8] (5D) if (getActorRoom(8) == 7) {
[00B3] (BA)   talkActor("I'd better turn it off first.",2)
[00D5] (73) } else {
[00D8] (6E)   setClass(63,[6])
[00E2] (5F)   startScriptQuick(54,[63])
[00EC] (**) }
[00EC] (65) stopObjectCodeA()
[00ED] (5D) if (ifClassOfIs(var7,[134])) {
[00FA] (5D)   if (!localvar0) {
[0101] (5E)     startScript(0,214,[])
[010B] (73)   } else {
[010E] (83)     doSentence(3,localvar0,130,var7)
[011B] (**)   }
[011B] (73) } else {
[011E] (83)   doSentence(3,localvar0,130,var7)
[012B] (**) }
[012B] (65) stopObjectCodeA()
END

// Object 64: office-phone
Events:
   3 - 0092
   4 - 0012
   5 - 0092
[0012] (68) beginCutscene([])
[0016] (BB) talkEgo("This phone represents unhindered contact with the outside world.")
[0058] (A9) wait.waitForMessage()
[005A] (5D) if (!bitvar67) {
[0061] (BA)   talkActor("Until they realize we don't pay the bills.",3)
[0090] (**) }
[0090] (67) endCutscene()
[0091] (65) stopObjectCodeA()
[0092] (BB) talkEgo("This is no time for chit-chat.")
[00B2] (65) stopObjectCodeA()
END

// Object 65: Roach Food
Events:
   3 - 008F
   4 - 004A
   5 - 001F
  5B - 0015
[0015] (43) var182 = 1007
[001B] (65) stopObjectCodeA()
[001C] (5D) if (!bitvar67) {
[0026] (BA)   talkActor("ME! ME! ME!",3)
[0036] (5E)   startScript(0,210,[])
[0040] (73) } else {
[0043] (BB)   talkEgo("Nah.")
[0049] (**) }
[0049] (65) stopObjectCodeA()
[004A] (BB) talkEgo("That's the tuna fish sandwich I made last spring.")
[007D] (5D) if (!bitvar67) {
[0084] (5E)   startScript(0,210,[])
[008E] (**) }
[008E] (65) stopObjectCodeA()
[008F] (0C) dup[1] = localvar0
[0093] (5D) if (dup[1] == 0) {
[009A] (5D)   if (!bitvar67) {
[00A2] (BA)     talkActor("ME! ME! ME!",3)
[00B2] (5E)     startScript(0,210,[])
[00BC] (73)   } else {
[00BF] (BB)     talkEgo("Nah.")
[00C5] (**)   }
[00C5] (5D) } else if (dup[1] == 35) {
[00D0] (BA)   talkActor("ME! ME! ME!",3)
[00E1] (5E)   startScript(0,210,[])
[00EB] (73) } else {
[00EE] (5E)   startScript(0,63,[3,var7,localvar0])
[0102] (7C)   stopScript(0)
[0106] (**) }
[0106] (65) stopObjectCodeA()
END

// Object 66: Roach Farm
Events:
   4 - 000C
[000C] (BB) talkEgo("It's Max's roach farm.")
[0024] (5D) if (!bitvar13) {
[002B] (5D)   if (!bitvar67) {
[0032] (5E)     startScript(0,210,[])
[003C] (**)   }
[003C] (**) }
[003C] (65) stopObjectCodeA()
END

// Object 67: Antenna
Events:
   3 - 0079
   4 - 001F
  5B - 0018
[0018] (43) var182 = 1007
[001E] (65) stopObjectCodeA()
[001F] (5D) if (ifClassOfIs(var7,[24])) {
[002C] (BA)   talkActor("My coat hanger antenna.  I'm an electronics genius.",2)
[0064] (73) } else {
[0067] (BA)   talkActor("Rabbit ears?",2)
[0078] (**) }
[0078] (65) stopObjectCodeA()
[0079] (5E) startScript(0,213,[])
[0083] (65) stopObjectCodeA()
END

// Object 68: office-light-switch
Events:
   3 - 0032
   4 - 0012
[0012] (BB) talkEgo("One mighty fine light switch.")
[0031] (65) stopObjectCodeA()
[0032] (5D) if (getState(var7) == 0) {
[003D] (70)   setState(var7,1)
[0044] (43)   bitvar226 = 1
[004A] (73) } else {
[004D] (70)   setState(var7,0)
[0054] (43)   bitvar226 = 0
[005A] (**) }
[005A] (5E) startScript(0,201,[getState(var7)])
[0068] (65) stopObjectCodeA()
END

// Object 69: office-rat-hole
Events:
   3 - 0074
   4 - 0015
   5 - 0074
[0015] (5D) if (ifClassOfIs(var7,[146])) {
[0022] (BB)   talkEgo("All our money is invested in that rat hole.")
[004F] (73) } else {
[0052] (BB)   talkEgo("It looks pretty empty in there.")
[0073] (**) }
[0073] (65) stopObjectCodeA()
[0074] (5D) if (ifClassOfIs(var7,[146])) {
[0081] (5E)   startScript(0,207,[])
[008B] (73) } else {
[008E] (BB)   talkEgo("I already cleaned it out.")
[00A9] (**) }
[00A9] (65) stopObjectCodeA()
END

// Object 70: office-money
Events:
   4 - 001C
  5B - 0015
[0015] (43) var182 = 1040
[001B] (65) stopObjectCodeA()
[001C] (BB) talkEgo("It's more money than we'll ever need.")
[0043] (65) stopObjectCodeA()
END

// Object 71: office-tv
Events:
   3 - 0046
   4 - 0012
[0012] (BB) talkEgo("We've been through a lot together, this TV and I.")
[0045] (65) stopObjectCodeA()
[0046] (5D) if (ifClassOfIs(var7,[146])) {
[0053] (68)   beginCutscene([])
[0057] (7D)   walkActorToObj(2,71,0)
[0061] (A9)   wait.waitForActor(-7,2)
[0068] (9D)   actorOps.setCurActor(2)
[006D] (9D)   actorOps.init()
[006F] (9D)   actorOps.setCostume(17)
[0074] (82)   animateActor(2,6)
[007B] (6E)   setClass(var7,[18])
[0085] (5E)   startScript(0,212,[0])
[0092] (CA)   delayFrames(8)
[0096] (9D)   actorOps.setCurActor(2)
[009B] (9D)   actorOps.init()
[009D] (9D)   actorOps.setCostume(2)
[00A2] (9D)   actorOps.setTalkColor(6)
[00A7] (9D)   actorOps.setTalkPos(0,-110)
[00AF] (67)   endCutscene()
[00B0] (73) } else {
[00B3] (68)   beginCutscene([])
[00B7] (7D)   walkActorToObj(2,71,0)
[00C1] (A9)   wait.waitForActor(-7,2)
[00C8] (9D)   actorOps.setCurActor(2)
[00CD] (9D)   actorOps.init()
[00CF] (9D)   actorOps.setCostume(17)
[00D4] (82)   animateActor(2,6)
[00DB] (6E)   setClass(var7,[146])
[00E5] (5E)   startScript(0,212,[1])
[00F2] (CA)   delayFrames(8)
[00F6] (9D)   actorOps.setCurActor(2)
[00FB] (9D)   actorOps.init()
[00FD] (9D)   actorOps.setCostume(2)
[0102] (9D)   actorOps.setTalkColor(6)
[0107] (9D)   actorOps.setTalkPos(0,-110)
[010F] (67)   endCutscene()
[0110] (**) }
[0110] (65) stopObjectCodeA()
END

// Object 72: office-spot-1
Events:
END

// Object 73: office-spot-2
Events:
END

// Object 74: office-eyes-1
Events:
END

// Object 75: office-eyes-2
Events:
END

// Object 76: office-answering-machine
Events:
   3 - 0044
   4 - 000F
[000F] (BB) talkEgo("Our primitive answering machine.  It's an 8-track.")
[0043] (65) stopObjectCodeA()
[0044] (5D) if (var230) {
[004A] (5E)   startScript(0,206,[])
[0054] (73) } else {
[0057] (BB)   talkEgo("Nobody's left a message.")
[0071] (**) }
[0071] (65) stopObjectCodeA()
END

// Object 77: office-dart-board
Events:
   3 - 0031
   4 - 0012
   5 - 0031
[0012] (BB) talkEgo("Vertical silverware storage.")
[0030] (65) stopObjectCodeA()
[0031] (5E) startScript(0,211,[])
[003B] (65) stopObjectCodeA()
END

// Object 78: office-tv-static
Events:
END

// Object 79: office-desk-papers
Events:
END

// Object 80: office-window
Events:
END
