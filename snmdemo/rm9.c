// EN
[0000] (9B) resourceRoutines.lockSound(7)
[0006] (9B) resourceRoutines.loadSound(7)
[0008] (47) array184[7] = 209
[0011] (47) array185[7] = 274
[001A] (47) array186[7] = 136
[0023] (70) setState(89,1)
[002A] (5D) if (!bitvar16) {
[0031] (5E)   startScript(1,207,[])
[003B] (73) } else {
[003E] (5E)   startScript(0,208,[])
[0048] (99)   setBoxFlags([16],128)
[0052] (99)   setBoxFlags([17],128)
[005C] (**) }
[005C] (9D) actorOps.setCurActor(5)
[0061] (9D) actorOps.init()
[0063] (9D) actorOps.setCostume(28)
[0068] (9D) actorOps.setIgnoreBoxes()
[006A] (9D) actorOps.setAlwayZClip(1)
[006F] (9D) actorOps.setScale(255)
[0074] (7F) putActorInXY(5,310,24,9)
[0081] (47) array184[5] = 215
[008A] (47) array185[5] = 327
[0093] (47) array186[5] = 124
[009C] (0C) dup[1] = var166
[00A0] (5D) if (dup[1] == 8) {
[00A7] (5D)   if (isSoundRunning(6)) {
[00AF] (AC)     soundKludge([19,6,0,1,-1])
[00C2] (AC)     soundKludge([14,6,0,1,0,30])
[00D8] (**)   }
[00D8] (70)   setState(88,1)
[00DF] (AC)   soundKludge([14,2,0,1,0,45])
[00F5] (5D)   if (!isSoundRunning(7)) {
[00FD] (AC)     soundKludge([8,7,0])
[010A] (**)   }
[010A] (73)   /* jump 10e; */
[010D] (**) }
[010D] (5D) if (getState(88) == 0) {
[0119] (99)   setBoxFlags([3],128)
[0123] (**) }
[0123] (99) setBoxFlags([13],128)
[012D] (5D) if (ifClassOfIs(95,[134])) {
[013A] (9D)   actorOps.setCurActor(4)
[013F] (9D)   actorOps.init()
[0141] (9D)   actorOps.setCostume(29)
[0146] (9D)   actorOps.setTalkColor(9)
[014B] (9D)   actorOps.setTalkFrame(7,6)
[0153] (9D)   actorOps.setStandFrame(6)
[0158] (7F)   putActorInXY(4,59,166,9)
[0165] (82)   animateActor(4,250)
[016C] (47)   array184[4] = 206
[0175] (47)   array185[4] = 94
[017E] (47)   array186[4] = 166
[0187] (**) }
[0187] (5D) if (!bitvar67) {
[018E] (5E)   startScript(1,201,[])
[0198] (**) }
[0198] (5E) startScript(1,212,[])
[01A2] (43) var194 = 202
[01A8] (65) stopObjectCodeA()
END

// EX
[0000] (5D) if (VAR_NEW_ROOM == 8) {
[000A] (9B)   resourceRoutines.lockSound(2)
[0010] (9B)   resourceRoutines.loadSound(2)
[0012] (AC)   soundKludge([20,30,8,2,0])
[0025] (AC)   soundKludge([20,32,15,2,0,1])
[003B] (73) } else {
[003E] (9B)   resourceRoutines.unlockSound(2)
[0043] (**) }
[0043] (AC) soundKludge([14,7,0,1,0,90])
[0059] (9B) resourceRoutines.unlockSound(7)
[005E] (65) stopObjectCodeA()
END

Script# 201
[0000] (0C) dup[1] = var166
[0004] (5D) if (dup[1] == 8) {
[000B] (7F)   putActorInXY(3,55,94,9)
[0019] (7E)   walkActorTo(3,128,111)
[0023] (A9)   wait.waitForActor(-7,3)
[002A] (6C)   breakHere()
[002B] (5D)   unless (((getActorWalkBox(2) != 3) && (getActorWalkBox(2) != 4))) jump 2a
[003F] (73) } else {
[0042] (80)   putActorAtObject(3,89,9)
[004D] (**) }
[004D] (43) localvar0 = 0
[0053] (43) bitvar2 = 0
[0059] (43) bitvar3 = 0
[005F] (6C) breakHere()
[0060] (43) localvar1 = getRandomNumberRange(1,2)
[006A] (5D) if (localvar1 == localvar0) {
[0074] (73) } else {
[0077] (43)   bitvar3 = 1
[007D] (0C)   dup[2] = localvar1
[0081] (5D)   if (dup[2] == 1) {
[0088] (7E)     walkActorTo(3,252,145)
[0093] (A9)     wait.waitForActor(-7,3)
[009A] (5D)     if (bitvar2) {
[00A0] (73)       jump 22d
[00A3] (**)     }
[00A3] (82)     animateActor(3,251)
[00AA] (43)     var204 = 0
[00B0] (A4)     array202[0] = [6]
[00BD] (A4)     array203[0] = [-2]
[00CA] (5D)   } else if (dup[2] == 2) {
[00D5] (5D)     if (getObjectX(2) > 240) {
[00E1] (7E)       walkActorTo(3,403,122)
[00EB] (A9)       wait.waitForActor(-7,3)
[00F2] (5D)       if (bitvar2) {
[00F8] (73)         jump 22d
[00FB] (**)       }
[00FB] (82)       animateActor(3,249)
[0102] (73)     } else {
[0105] (7E)       walkActorTo(3,160,171)
[010F] (A9)       wait.waitForActor(-7,3)
[0116] (5D)       if (bitvar2) {
[011C] (73)         jump 22d
[011F] (**)       }
[011F] (82)       animateActor(3,249)
[0126] (**)     }
[0126] (43)     var204 = 1
[012C] (A4)     array202[0] = [6,16]
[013C] (A4)     array203[0] = [-2,2]
[014C] (73)     /* jump 150; */
[014F] (**)   }
[014F] (43)   localvar0 = localvar1
[0156] (**) }
[0156] (43) bitvar3 = 0
[015C] (5D) if (!getRandomNumber(3)) {
[0164] (5D)   if (var204) {
[016A] (43)     localvar1 = getRandomNumber(var204)
[0171] (73)   } else {
[0174] (43)     localvar1 = 0
[017A] (**)   }
[017A] (5D)   if (array202[localvar1] == 16) {
[0187] (82)     animateActor(3,15)
[018E] (CA)     delayFrames(2)
[0192] (**)   }
[0192] (82)   animateActor(3,array202[localvar1])
[019C] (43)   localvar2 = array203[localvar1]
[01A5] (5D)   if (localvar2 > 0) {
[01AF] (CA)     delayFrames(localvar2)
[01B3] (5D)     if (bitvar2) {
[01B9] (82)       animateActor(3,1)
[01C0] (73)       jump 22d
[01C3] (**)     }
[01C3] (5D)     unless (!getRandomNumber(2)) jump 1af
[01CB] (73)   } else {
[01CE] (43)     localvar2 = (localvar2 * -1)
[01D8] (CA)     delayFrames(localvar2)
[01DC] (5D)     if (bitvar2) {
[01E2] (82)       animateActor(3,1)
[01E9] (73)       jump 22d
[01EC] (**)     }
[01EC] (6C)     breakHere()
[01ED] (5D)     unless (!getRandomNumber(10)) jump 1dc
[01F5] (**)   }
[01F5] (82)   animateActor(3,1)
[01FC] (6C)   breakHere()
[01FD] (5D)   if (bitvar2) {
[0203] (82)     animateActor(3,1)
[020A] (73)     jump 22d
[020D] (**)   }
[020D] (73) } else {
[0210] (6C)   breakHere()
[0211] (5D)   if (bitvar2) {
[0217] (73)     jump 22d
[021A] (**)   }
[021A] (5D)   unless (!getRandomNumber(8)) jump 210
[0222] (**) }
[0222] (5D) unless (!getRandomNumber(7)) jump 15c
[022A] (73) jump 5f
[022D] (82) animateActor(3,3)
[0234] (43) bitvar3 = 1
[023A] (6C) breakHere()
[023B] (5D) unless (!bitvar2) jump 23a
[0242] (43) localvar0 = 0
[0248] (73) jump 5f
[024B] (66) stopObjectCodeB()
END

Script# 202
[0000] (0C) dup[1] = var224
[0004] (5D) if (dup[1] == 5) {
[000B] (BB)   talkEgo("I don't speak pigeon.")
[0023] (A9)   wait.waitForMessage()
[0025] (5D) } else if (dup[1] == 4) {
[0030] (5E)   startScript(0,203,[])
[003B] (7C)   stopScript(0)
[003F] (5D) } else if (dup[1] == 7) {
[004A] (5E)   startScript(0,210,[])
[0055] (7C)   stopScript(0)
[0059] (73) } else {
[005C] (5E)   startScript(0,26,[])
[0067] (7C)   stopScript(0)
[006B] (**) }
[006B] (66) stopObjectCodeB()
END

Script# 203
[0000] (68) beginCutscene([2])
[0007] (81) faceActor(2,4)
[000E] (43) bitvar2 = 1
[0014] (6C) breakHere()
[0015] (5D) unless (bitvar3) jump 14
[001B] (81) faceActor(3,4)
[0022] (6C) breakHere()
[0023] (BB) talkEgo("Hey there, lil' fella.")
[003B] (81) faceActor(4,3)
[0042] (A9) wait.waitForMessage()
[0044] (BA) talkActor("You talkin' to me?",4)
[005B] (A9) wait.waitForMessage()
[005D] (67) endCutscene()
[005E] (9D) actorOps.setCurActor(2)
[0063] (9D) actorOps.setCostume(7)
[0068] (5E) startScript(0,9,[])
[0072] (5E) startScript(0,15,[1])
[007F] (5E) startScript(0,14,[])
[0089] (43) var171 = 0
[008F] (43) var169 = getRandomNumber(1)
[0096] (6C) breakHere()
[0097] (5D) unless (var171) jump 8f
[009D] (0C) dup[1] = var171
[00A1] (5D) if (dup[1] == 999) {
[00A8] (BB)   talkEgo("I guess not.")
[00B7] (A9)   wait.waitForMessage()
[00B9] (73)   jump 6bc
[00BC] (5D) } else if (dup[1] == 1001) {
[00C7] (5D)   if (!bitvar17) {
[00CF] (43)     bitvar17 = 1
[00D5] (BB)     talkEgo("It's times like this that make me want to lash out against a cruel world." + startAnim(15))
[0124] (A9)     wait.waitForMessage()
[0126] (82)     animateActor(2,24)
[012D] (BA)     talkActor("Funny, I feel like that all the time.",3)
[0157] (A9)     wait.waitForMessage()
[0159] (BA)     talkActor("You must be the Freelance Police.",4)
[017F] (82)     animateActor(2,17)
[0186] (73)   } else {
[0189] (BA)     talkActor("Your head is disturbingly disproportionate to your body." + startAnim(14),2)
[01CA] (A9)     wait.waitForMessage()
[01CC] (82)     animateActor(2,24)
[01D3] (BA)     talkActor("It's the vocal cords.  You'd be amazed how much room they take up.",4)
[021A] (A9)     wait.waitForMessage()
[021C] (73)     jump 6bc
[021F] (**)   }
[021F] (5D) } else if (dup[1] == 998) {
[022A] (5D)   if (!bitvar17) {
[0232] (43)     bitvar17 = 1
[0238] (BB)     talkEgo("Wow, a talking cat!")
[024D] (A9)     wait.waitForMessage()
[024F] (BA)     talkActor("Wow, a stupid dog!" + wait() + "You must be the Freelance Police.",4)
[0289] (82)     animateActor(2,17)
[0290] (73)   } else {
[0293] (BB)     talkEgo("Don't get smart with me, bub, or my partner'll" + newline() + "floss every last crevice on his body with your whiskers." + startAnim(15))
[0301] (A9)     wait.waitForMessage()
[0303] (82)     animateActor(2,24)
[030A] (81)     faceActor(3,2)
[0311] (6C)     breakHere()
[0312] (BA)     talkActor("That's unsanitary, Sam!",3)
[032E] (A9)     wait.waitForMessage()
[0330] (81)     faceActor(3,4)
[0337] (73)     jump 6bc
[033A] (**)   }
[033A] (5D) } else if (dup[1] == 997) {
[0345] (5D)   if (!bitvar17) {
[034D] (43)     bitvar17 = 1
[0353] (BB)     talkEgo("Maybe.  Are you a cleverly disguised bonded city courier?" + startAnim(17))
[0392] (A9)     wait.waitForMessage()
[0394] (BA)     talkActor("Maybe.  Are you the Freelance Police?",4)
[03BE] (73)   } else {
[03C1] (BA)     talkActor("Could you try coughing up our orders again?" + startAnim(18),2)
[03F5] (A9)     wait.waitForMessage()
[03F7] (BA)     talkActor("Sure." + wait() + "KAAK-huk-huk-KAAK",4)
[0414] (43)     bitvar2 = 1
[041A] (6C)     breakHere()
[041B] (5D)     unless (bitvar3) jump 41a
[0421] (81)     faceActor(3,4)
[0428] (A9)     wait.waitForMessage()
[042A] (BA)     talkActor("Sorry, no dice.",4)
[043E] (4F)     var231++
[0441] (A9)     wait.waitForMessage()
[0443] (0C)     dup[5] = var231
[0447] (5D)     if (dup[5] == 1) {
[044E] (BA)       talkActor("Maybe I could help, Sam.",3)
[046C] (5D)     } else if (dup[5] == 2) {
[0477] (BA)       talkActor("I really think I could help here, Sam.",3)
[04A3] (5D)     } else if (dup[5] == 3) {
[04AE] (BA)       talkActor("Hey, Sam, let me try something!",3)
[04D3] (73)     } else {
[04D6] (BA)       talkActor("You're not using me to my fullest potential, Sam.",3)
[050D] (**)     }
[050D] (82)     animateActor(2,27)
[0514] (CA)     delayFrames(7)
[0518] (A9)     wait.waitForMessage()
[051A] (43)     bitvar2 = 0
[0520] (73)     jump 6bc
[0523] (**)   }
[0523] (73)   /* jump 527; */
[0526] (**) }
[0526] (A9) wait.waitForMessage()
[0529] (BA) talkActor("Yes, but don't go blabbing it to everybody.",2)
[0559] (A9) wait.waitForMessage()
[055B] (BA) talkActor("I think he's kinda cute, Sam." + wait() + "Can I make a tennis racket out of him?" + startAnim(6),3)
[05A9] (A9) wait.waitForMessage()
[05AB] (82) animateActor(3,7)
[05B2] (BA) talkActor("Maybe later, Max." + wait() + "Right now, we've got a message from the Commissioner to collect." + startAnim(23),2)
[060E] (A9) wait.waitForMessage()
[0610] (82) animateActor(2,22)
[0617] (BA) talkActor("Oh yeah, right." + wait() + "KAFF-KAFF-huk-KAAAAAK",4)
[0642] (A9) wait.waitForMessage()
[0644] (BA) talkActor("Sorry guys^" + wait() + "I swallowed your orders for safekeeping,",4)
[067E] (A9) wait.waitForMessage()
[0680] (BA) talkActor("but now I can't seem to hock them back up.",4)
[06AF] (82) animateActor(2,26)
[06B6] (CA) delayFrames(9)
[06BA] (A9) wait.waitForMessage()
[06BC] (5E) startScript(0,10,[])
[06C6] (9D) actorOps.setCurActor(2)
[06CB] (9D) actorOps.setCostume(2)
[06D0] (43) bitvar2 = 0
[06D6] (66) stopObjectCodeB()
END

Script# 204
[0000] (5D) if (!bitvar67) {
[0007] (68)   beginCutscene([2])
[000E] (99)   setBoxFlags([13],0)
[0018] (7E)   walkActorTo(2,304,115)
[0022] (43)   bitvar2 = 1
[0028] (6C)   breakHere()
[0029] (5D)   unless (bitvar3) jump 28
[002F] (7E)   walkActorTo(3,304,115)
[0039] (BA)   talkActor("Hey, I don't think Mr. Bosco's voluntarily giving away his money!",2)
[007F] (A9)   wait.waitForMessage()
[0081] (B4)   printLine.begin()
[0083] (B4)   printLine.color(2)
[0088] (B4)   printLine.XY(160,100)
[0090] (B4)   printLine.msg("Oh, I'm real terrified!  A dog and a rabbit.  Ooh, scary!")
[00CC] (A9)   wait.waitForMessage()
[00CE] (A9)   wait.waitForActor(-7,3)
[00D5] (BA)   talkActor("Max, the smartass kid doesn't think we're scary." + wait() + "What do you think about that?",2)
[0129] (A9)   wait.waitForMessage()
[012B] (BA)   talkActor("Grrrr^",3)
[0136] (A9)   wait.waitForMessage()
[0138] (BA)   talkActor("That's telling him, little buddy.",2)
[015E] (A9)   wait.waitForMessage()
[0160] (9D)   actorOps.setCurActor(3)
[0165] (9D)   actorOps.setCostume(6)
[016A] (9C)   roomOps.shakeOn()
[016C] (82)   animateActor(3,17)
[0173] (B4)   printLine.begin()
[0175] (B4)   printLine.color(1)
[017A] (B4)   printLine.XY(160,80)
[0182] (B4)   printLine.msg("BIFF")
[0189] (B6)   printDebug.begin()
[018B] (B6)   printDebug.msg(sound(0x17976, 0xA) + " ")
[019F] (CA)   delayFrames(3)
[01A3] (B6)   printDebug.begin()
[01A5] (B6)   printDebug.msg(sound(0x24EF2, 0xA) + " ")
[01B9] (CA)   delayFrames(3)
[01BD] (B6)   printDebug.begin()
[01BF] (B6)   printDebug.msg(sound(0x17976, 0xA) + " ")
[01D3] (CA)   delayFrames(3)
[01D7] (B6)   printDebug.begin()
[01D9] (B6)   printDebug.msg(sound(0x4955, 0xA) + " ")
[01ED] (B4)   printLine.begin()
[01EF] (B4)   printLine.color(1)
[01F4] (B4)   printLine.XY(180,100)
[01FC] (B4)   printLine.msg("POW")
[0202] (CA)   delayFrames(3)
[0206] (B6)   printDebug.begin()
[0208] (B6)   printDebug.msg(sound(0x3E92A, 0xA) + " ")
[021C] (CA)   delayFrames(4)
[0220] (B6)   printDebug.begin()
[0222] (B6)   printDebug.msg(sound(0xB4, 0xA) + " ")
[0236] (CA)   delayFrames(2)
[023A] (B4)   printLine.begin()
[023C] (B4)   printLine.color(1)
[0241] (B4)   printLine.XY(160,120)
[0249] (B4)   printLine.msg("DUFF")
[0250] (CA)   delayFrames(2)
[0254] (CA)   delayFrames(2)
[0258] (B6)   printDebug.begin()
[025A] (B6)   printDebug.msg(sound(0x40292, 0xA) + " ")
[026E] (CA)   delayFrames(2)
[0272] (B6)   printDebug.begin()
[0274] (B6)   printDebug.msg(sound(0x39C51, 0xA) + " ")
[0288] (CA)   delayFrames(2)
[028C] (CA)   delayFrames(1)
[0290] (B6)   printDebug.begin()
[0292] (B6)   printDebug.msg(sound(0x4955, 0xA) + " ")
[02A6] (CA)   delayFrames(1)
[02AA] (9C)   roomOps.shakeOff()
[02AC] (9D)   actorOps.setCurActor(3)
[02B1] (9D)   actorOps.setCostume(3)
[02B6] (82)   animateActor(3,1)
[02BD] (6C)   breakHere()
[02BE] (7E)   walkActorTo(3,417,126)
[02C8] (CA)   delayFrames(3)
[02CC] (7E)   walkActorTo(2,380,125)
[02D6] (BA)   talkActor("I think that punk learned a valuable lesson, Sam.",3)
[030C] (A9)   wait.waitForMessage()
[030E] (82)   animateActor(3,248)
[0315] (82)   animateActor(2,249)
[031C] (BA)   talkActor("Me too, Max.  I didn't realize that the lower lip could stretch completely over the head." + wait() + "Amazing.",2)
[0384] (A9)   wait.waitForMessage()
[0386] (A9)   wait.waitForActor(-7,2)
[038D] (99)   setBoxFlags([13],128)
[0397] (67)   endCutscene()
[0398] (43)   bitvar2 = 0
[039E] (**) }
[039E] (43) bitvar2 = 0
[03A4] (66) stopObjectCodeB()
END

Script# 205
[0000] (68) beginCutscene([2])
[0007] (99) setBoxFlags([13],0)
[0011] (7E) walkActorTo(2,418,100)
[001B] (43) bitvar2 = 1
[0021] (6C) breakHere()
[0022] (5D) unless (bitvar3) jump 21
[0028] (7E) walkActorTo(3,418,100)
[0032] (A9) wait.waitForActor(-7,3)
[0039] (70) setState(90,0)
[0040] (BA) talkActor("We'd like some fine Bavarian food sprinkled with umlauts, please.",2)
[0086] (A9) wait.waitForMessage()
[0088] (B4) printLine.begin()
[008A] (B4) printLine.color(9)
[008F] (B4) printLine.XY(160,40)
[0097] (B4) printLine.msg("No shoes, no shirt, no service.")
[00B9] (A9) wait.waitForMessage()
[00BB] (BA) talkActor("That's okay, we don't want service." + wait() + "We just want a few schnitzels and some other things that begin with `schnitz.`",3)
[0133] (A9) wait.waitForMessage()
[0135] (B4) printLine.begin()
[0137] (B4) printLine.color(9)
[013C] (B4) printLine.XY(160,40)
[0144] (B4) printLine.msg("OUT!")
[014B] (A9) wait.waitForMessage()
[014D] (70) setState(90,1)
[0154] (7E) walkActorTo(3,380,125)
[015E] (CA) delayFrames(3)
[0162] (7E) walkActorTo(2,417,126)
[016C] (CA) delayFrames(3)
[0170] (70) setState(90,0)
[0177] (99) setBoxFlags([13],128)
[0181] (BA) talkActor("What a sourpuss.",2)
[0196] (A9) wait.waitForMessage()
[0198] (BA) talkActor("I think he just needs a hug.  Or a sharp blow to the head.",3)
[01D7] (A9) wait.waitForMessage()
[01D9] (67) endCutscene()
[01DA] (43) bitvar2 = 0
[01E0] (66) stopObjectCodeB()
END

Script# 206
[0000] (0C) dup[1] = localvar0
[0004] (5D) if (dup[1] == 7) {
[000B] (5D) } else if (dup[1] == 4) {
[0017] (68)   beginCutscene([2])
[001F] (BB)   talkEgo("Aw, it's a cute little hypercephalic kitten.")
[004D] (A9)   wait.waitForMessage()
[004F] (5D)   if (!bitvar67) {
[0056] (43)     bitvar2 = 1
[005C] (6C)     breakHere()
[005D] (5D)     unless (bitvar3) jump 5c
[0063] (81)     faceActor(3,4)
[006A] (0C)     dup[3] = getRandomNumber(2)
[006F] (5D)     if (dup[3] == 0) {
[0076] (BA)       talkActor("I am repulsed by his bulging eyes.",3)
[009E] (5D)     } else if (dup[3] == 1) {
[00A9] (BA)       talkActor("I'll call him `Mittens`, because I think he'd make a fine pair of them.",3)
[00F6] (5D)     } else if (dup[3] == 2) {
[0101] (BA)       talkActor("He's adorable.  Let's take him home and put tape on his feet.",3)
[0144] (73)       /* jump 148; */
[0147] (**)     }
[0147] (A9)     wait.waitForMessage()
[014A] (43)     bitvar2 = 0
[0150] (**)   }
[0150] (67)   endCutscene()
[0151] (5D) } else if (dup[3] == 3) {
[015C] (0C)   dup[7] = localvar1
[0161] (5D)   if (dup[7] == 35) {
[0168] (68)     beginCutscene([2])
[0170] (43)     bitvar2 = 1
[0176] (6C)     breakHere()
[0177] (5D)     unless (bitvar3) jump 176
[017D] (BB)     talkEgo("I'd just love to turn this guy inside-out!")
[01A9] (A9)     wait.waitForMessage()
[01AB] (BA)     talkActor("Ooh, that gives me an idea!",3)
[01CB] (A9)     wait.waitForMessage()
[01CD] (7E)     walkActorTo(3,84,163)
[01D7] (7E)     walkActorTo(2,137,165)
[01E1] (A9)     wait.waitForActor(-7,3)
[01E8] (A9)     wait.waitForActor(-7,2)
[01EF] (82)     animateActor(3,248)
[01F6] (82)     animateActor(2,248)
[01FD] (6C)     breakHere()
[01FE] (9D)     actorOps.setCurActor(4)
[0203] (9D)     actorOps.setCostume(30)
[0208] (82)     animateActor(4,6)
[020F] (6C)     breakHere()
[0210] (9D)     actorOps.setCurActor(3)
[0215] (9D)     actorOps.setElevation(255)
[021A] (9D)     actorOps.setCostume(0)
[021F] (CA)     delayFrames(3)
[0223] (B6)     printDebug.begin()
[0225] (B6)     printDebug.msg(sound(0x3926A, 0xA) + " ")
[0239] (CA)     delayFrames(6)
[023D] (B6)     printDebug.begin()
[023F] (B6)     printDebug.msg(sound(0x4D2F6, 0xA) + " ")
[0253] (CA)     delayFrames(5)
[0257] (B6)     printDebug.begin()
[0259] (B6)     printDebug.msg(sound(0x34D0B, 0xA) + " ")
[026D] (CA)     delayFrames(5)
[0271] (B6)     printDebug.begin()
[0273] (B6)     printDebug.msg(sound(0x24EF2, 0xA) + " ")
[0287] (CA)     delayFrames(8)
[028B] (B6)     printDebug.begin()
[028D] (B6)     printDebug.msg(sound(0x3DAFE, 0xA) + " ")
[02A1] (CA)     delayFrames(5)
[02A5] (B6)     printDebug.begin()
[02A7] (B6)     printDebug.msg(sound(0x19C3E, 0xA) + " ")
[02BB] (82)     animateActor(4,7)
[02C2] (CA)     delayFrames(3)
[02C6] (82)     animateActor(4,8)
[02CD] (CA)     delayFrames(2)
[02D1] (9D)     actorOps.setCurActor(2)
[02D6] (9D)     actorOps.setElevation(255)
[02DB] (6C)     breakHere()
[02DC] (9D)     actorOps.setCurActor(2)
[02E1] (9D)     actorOps.setCostume(36)
[02E6] (9D)     actorOps.setElevation(0)
[02EB] (7F)     putActorInXY(2,134,165,9)
[02F8] (82)     animateActor(2,249)
[02FF] (82)     animateActor(2,6)
[0306] (CA)     delayFrames(3)
[030A] (82)     animateActor(2,249)
[0311] (82)     animateActor(2,7)
[0318] (CA)     delayFrames(20)
[031C] (82)     animateActor(2,249)
[0323] (82)     animateActor(2,8)
[032A] (CA)     delayFrames(3)
[032E] (9D)     actorOps.setCurActor(2)
[0333] (9D)     actorOps.setCostume(2)
[0338] (82)     animateActor(2,248)
[033F] (7F)     putActorInXY(2,137,165,9)
[034C] (82)     animateActor(2,8)
[0353] (CA)     delayFrames(4)
[0357] (82)     animateActor(2,3)
[035E] (6C)     breakHere()
[035F] (5F)     startScriptQuick(54,[95])
[0369] (6E)     setClass(95,[6])
[0373] (9D)     actorOps.setCurActor(3)
[0378] (9D)     actorOps.setElevation(0)
[037D] (9D)     actorOps.setCostume(3)
[0382] (7F)     putActorInXY(4,0,0,0)
[038F] (BA)     talkActor("According to these orders, something bizarre is happening at the carnival.",2)
[03DE] (82)     animateActor(3,249)
[03E5] (A9)     wait.waitForMessage()
[03E7] (BA)     talkActor("I thought that was the whole point.",3)
[040F] (A9)     wait.waitForMessage()
[0411] (BA)     talkActor("Maybe we should check it out when we've got nothing better to do.  Like anytime.",2)
[0466] (A9)     wait.waitForMessage()
[0468] (47)     array184[4] = 0
[0471] (43)     var198 = 1
[0477] (43)     bitvar2 = 0
[047D] (67)     endCutscene()
[047E] (73)   } else {
[0481] (73)     jump 4d5
[0485] (**)   }
[0485] (5D) } else if (dup[7] == 5) {
[0490] (BA)   talkActor("I won't pick that kitten up.  I don't know where he's been.",2)
[04D1] (73) } else {
[04D4] (5E)   startScript(0,63,[localvar0,4,localvar1])
[04E8] (7C)   stopScript(0)
[04EC] (**) }
[04EC] (66) stopObjectCodeB()
END

Script# 207
[0000] (99) setBoxFlags([16],0)
[000A] (99) setBoxFlags([17],0)
[0014] (7F) putActorInXY(8,217,118,9)
[0021] (9D) actorOps.setCurActor(8)
[0026] (9D) actorOps.init()
[0028] (9D) actorOps.setCostume(27)
[002D] (9D) actorOps.setWalkSpeed(10,4)
[0035] (9D) actorOps.setScale(155)
[003A] (7E) walkActorTo(8,330,140)
[0044] (A9) wait.waitForActor(-7,8)
[004B] (7F) putActorInXY(8,0,0,0)
[0058] (43) bitvar16 = 1
[005E] (99) setBoxFlags([16],128)
[0068] (99) setBoxFlags([17],128)
[0072] (66) stopObjectCodeB()
END

Script# 208
[0000] (0C) dup[1] = getRandomNumberRange(1,2)
[0008] (5D) if (dup[1] == 1) {
[000F] (9D)   actorOps.setCurActor(7)
[0015] (9D)   actorOps.init()
[0017] (9D)   actorOps.setCostume(26)
[001C] (9D)   actorOps.setIgnoreBoxes()
[001E] (9D)   actorOps.setTalkColor(13)
[0023] (7F)   putActorInXY(7,246,79,9)
[0030] (82)   animateActor(7,250)
[0037] (5D) } else if (dup[1] == 2) {
[0042] (7F)   putActorInXY(7,0,0,0)
[0050] (73)   /* jump 54; */
[0053] (**) }
[0053] (66) stopObjectCodeB()
END

Script# 209
[0000] (0C) dup[1] = localvar0
[0004] (5D) if (dup[1] == 4) {
[000B] (BA)   talkActor("Look!  It's yet another cat, a nice, round, chubby cat^" + wait() + "Looks like he got caught in a threshing machine.",2)
[007A] (A9)   wait.waitForMessage()
[007C] (5D) } else if (dup[1] == 6) {
[0087] (5E)   startScript(0,210,[])
[0092] (73) } else {
[0095] (5E)   startScript(0,63,[localvar0,var7,localvar1])
[00A9] (7C)   stopScript(0)
[00AD] (**) }
[00AD] (66) stopObjectCodeB()
END

Script# 210
[0000] (B6) printDebug.begin()
[0002] (B6) printDebug.msg("get here?")
[000E] (5E) startScript(0,9,[])
[0018] (5D) if (!bitvar67) {
[001F] (82)   animateActor(3,251)
[0026] (6C)   breakHere()
[0027] (**) }
[0027] (82) animateActor(2,251)
[002E] (6C) breakHere()
[002F] (5E) startScript(0,15,[1])
[003C] (5E) startScript(0,14,[])
[0046] (43) var171 = 0
[004C] (43) var169 = getRandomNumber(1)
[0053] (6C) breakHere()
[0054] (5D) unless (var171) jump 4c
[005A] (0C) dup[1] = var171
[005E] (5D) if (dup[1] == 997) {
[0065] (82)   animateActor(2,251)
[006D] (6C)   breakHere()
[006E] (BA)   talkActor("Hey cute little kitty with the mangled eye." + wait() + "How are you today?",2)
[00B2] (A9)   wait.waitForMessage()
[00B4] (BA)   talkActor("meow.",7)
[00BE] (A9)   wait.waitForMessage()
[00C0] (5D)   if (!bitvar67) {
[00C7] (43)     bitvar2 = 1
[00CD] (6C)     breakHere()
[00CE] (5D)     unless (bitvar3) jump cd
[00D4] (82)     animateActor(3,251)
[00DB] (6C)     breakHere()
[00DC] (BA)     talkActor("Is that all you can say?",3)
[00F9] (A9)     wait.waitForMessage()
[00FB] (BA)     talkActor("Meow, meow.",7)
[010B] (A9)     wait.waitForMessage()
[010D] (73)   } else {
[0110] (BA)     talkActor("Is that all you can say?",2)
[012D] (A9)     wait.waitForMessage()
[012F] (BA)     talkActor("Meow, meow.",7)
[013F] (A9)     wait.waitForMessage()
[0141] (**)   }
[0141] (BA)   talkActor("I guess he just slipped through the cracks of our public school system.",2)
[018D] (A9)   wait.waitForMessage()
[018F] (73)   jump 347
[0192] (5D) } else if (dup[1] == 998) {
[019D] (6C)   breakHere()
[019F] (5D)   if (!bitvar67) {
[01A6] (43)     bitvar2 = 1
[01AC] (6C)     breakHere()
[01AD] (5D)     unless (bitvar3) jump 1ac
[01B3] (82)     animateActor(3,251)
[01BA] (6C)     breakHere()
[01BB] (BA)     talkActor("Here kitty kitty^",3)
[01D1] (A9)     wait.waitForMessage()
[01D3] (BA)     talkActor("MEOW!",7)
[01DD] (A9)     wait.waitForMessage()
[01DF] (BA)     talkActor("Ok, ok.",3)
[01EB] (A9)     wait.waitForMessage()
[01ED] (81)     faceActor(3,2)
[01F4] (6C)     breakHere()
[01F5] (BA)     talkActor("Sam, he's not as friendly as he looks.",3)
[0220] (A9)     wait.waitForMessage()
[0222] (BA)     talkActor("He is obviously bitter and disillusioned.",2)
[0250] (A9)     wait.waitForMessage()
[0252] (BA)     talkActor("What cat isn't?",3)
[0266] (A9)     wait.waitForMessage()
[0268] (73)     jump 347
[026B] (73)   } else {
[026E] (6C)     breakHere()
[026F] (BA)     talkActor("Here kitty kitty^",2)
[0285] (A9)     wait.waitForMessage()
[0287] (BA)     talkActor("MEOW!",7)
[0291] (A9)     wait.waitForMessage()
[0293] (BA)     talkActor("Ok, ok.",2)
[029F] (A9)     wait.waitForMessage()
[02A1] (73)     jump 347
[02A4] (**)   }
[02A4] (5D) } else if (dup[1] == 1001) {
[02AF] (BA)   talkActor("How'd you lose your eye, anyway?",2)
[02D5] (A9)   wait.waitForMessage()
[02D7] (BA)   talkActor("Meow, meow^me-ow, meow." + wait() + "Meeeow, meowmeow, meoooowww, meow.",7)
[0317] (A9)   wait.waitForMessage()
[0319] (73)   jump 347
[031C] (5D) } else if (dup[1] == 999) {
[0327] (BA)   talkActor("Ciao.",2)
[0332] (A9)   wait.waitForMessage()
[0334] (BA)   talkActor("Meow.",7)
[033E] (A9)   wait.waitForMessage()
[0340] (73)   jump 4bb
[0343] (73)   /* jump 347; */
[0346] (**) }
[0346] (43) var301 = 4
[034D] (5D) while (var301 <= var196) {
[0357] (47)   array195[var301] = 0
[0360] (4F)   var301++
[0363] (**) }
[0366] (5E) startScript(0,11,[])
[0370] (43) var196 = 3
[0376] (5E) startScript(0,14,[])
[0380] (43) var171 = 0
[0386] (43) var169 = getRandomNumber(1)
[038D] (6C) breakHere()
[038E] (5D) unless (var171) jump 386
[0394] (0C) dup[5] = var171
[0398] (5D) if (dup[5] == 997) {
[039F] (BA)   talkActor("Are you a pirate?",2)
[03B6] (A9)   wait.waitForMessage()
[03B8] (BA)   talkActor("meeeuw",7)
[03C3] (A9)   wait.waitForMessage()
[03C5] (73)   jump 347
[03C8] (5D) } else if (dup[5] == 998) {
[03D3] (BA)   talkActor("Here kitty kitty^",2)
[03EA] (A9)   wait.waitForMessage()
[03EC] (BA)   talkActor("meow",7)
[03F5] (A9)   wait.waitForMessage()
[03F7] (73)   jump 347
[03FA] (5D) } else if (dup[5] == 1001) {
[0405] (BA)   talkActor("Meow",7)
[040F] (A9)   wait.waitForMessage()
[0411] (5D)   if (!bitvar67) {
[0418] (43)     bitvar2 = 1
[041E] (6C)     breakHere()
[041F] (5D)     unless (bitvar3) jump 41e
[0425] (BA)     talkActor("Sam, I really don't think we're going to get much out of this.",3)
[0468] (A9)     wait.waitForMessage()
[046A] (73)     jump 347
[046D] (73)   } else {
[0470] (BA)     talkActor("What we have here is^a failure to communicate.",2)
[04A3] (A9)     wait.waitForMessage()
[04A5] (73)     jump 347
[04A8] (**)   }
[04A8] (5D) } else if (dup[5] == 999) {
[04B3] (73)   jump 4bb
[04B7] (73)   /* jump 4bb; */
[04BA] (**) }
[04BA] (A9) wait.waitForMessage()
[04BD] (5D) if (!bitvar67) {
[04C4] (43)   bitvar2 = 0
[04CA] (**) }
[04CA] (5E) startScript(0,10,[])
[04D4] (66) stopObjectCodeB()
END

Script# 212
[0000] (82) animateActor(5,250)
[0007] (6C) breakHere()
[0008] (82) animateActor(5,7)
[000F] (B1) delaySeconds(getRandomNumberRange(1,15))
[0017] (82) animateActor(5,6)
[001E] (CA) delayFrames(11)
[0022] (73) jump 8
[0025] (66) stopObjectCodeB()
END

Script# 214
[0000] (68) beginCutscene([2])
[0007] (43) bitvar2 = 1
[000D] (6C) breakHere()
[000E] (5D) unless (bitvar3) jump d
[0014] (7E) walkActorTo(3,300,136)
[001E] (A9) wait.waitForActor(-7,3)
[0025] (82) animateActor(3,248)
[002C] (AC) soundKludge([15,7,0,1])
[003C] (CA) delayFrames(2)
[0040] (7A) setCameraAt(VAR_CAMERA_POS_X)
[0044] (7F) putActorInXY(2,0,0,0)
[0051] (7F) putActorInXY(3,0,0,0)
[005E] (7F) putActorInXY(4,0,0,0)
[006B] (70) setState(89,0)
[0072] (9D) actorOps.setCurActor(10)
[0077] (9D) actorOps.init()
[0079] (9D) actorOps.setCostume(31)
[007E] (9D) actorOps.setIgnoreBoxes()
[0080] (9D) actorOps.setNeverZClip()
[0082] (9D) actorOps.setScale(255)
[0087] (7F) putActorInXY(10,435,182,9)
[0094] (82) animateActor(10,249)
[009B] (82) animateActor(10,6)
[00A2] (9D) actorOps.setCurActor(9)
[00A7] (9D) actorOps.init()
[00A9] (9D) actorOps.setCostume(32)
[00AE] (9D) actorOps.setIgnoreBoxes()
[00B0] (9D) actorOps.setNeverZClip()
[00B2] (9D) actorOps.setScale(255)
[00B7] (7F) putActorInXY(9,435,182,9)
[00C4] (82) animateActor(9,249)
[00CB] (82) animateActor(9,6)
[00D2] (CA) delayFrames(4)
[00D6] (B6) printDebug.begin()
[00D8] (B6) printDebug.msg(sound(0x3FF16, 0xA) + " ")
[00EC] (CA) delayFrames(1)
[00F0] (B6) printDebug.begin()
[00F2] (B6) printDebug.msg(sound(0x23270, 0xA) + " ")
[0106] (CA) delayFrames(7)
[010A] (B6) printDebug.begin()
[010C] (B6) printDebug.msg(sound(0x40FFE, 0xA) + " ")
[0120] (CA) delayFrames(7)
[0124] (B6) printDebug.begin()
[0126] (B6) printDebug.msg(sound(0x46932, 0xA) + " ")
[013A] (9D) actorOps.setCurActor(10)
[013F] (9D) actorOps.setCostume(33)
[0144] (9D) actorOps.setCurActor(9)
[0149] (9D) actorOps.setCostume(34)
[014E] (82) animateActor(10,6)
[0155] (82) animateActor(9,6)
[015C] (CA) delayFrames(16)
[0160] (B6) printDebug.begin()
[0162] (B6) printDebug.msg(sound(0x2EC76, 0xA) + " ")
[0176] (CA) delayFrames(10)
[017A] (7F) putActorInXY(10,0,0,0)
[0187] (CA) delayFrames(1)
[018B] (B6) printDebug.begin()
[018D] (B6) printDebug.msg(sound(0x8, 0xA) + " ")
[01A1] (CA) delayFrames(10)
[01A5] (9D) actorOps.setCurActor(9)
[01AA] (9D) actorOps.setCostume(35)
[01AF] (82) animateActor(9,6)
[01B6] (CA) delayFrames(2)
[01BA] (AC) soundKludge([14,7,0,1,40,150])
[01D0] (B6) printDebug.begin()
[01D2] (B6) printDebug.msg(sound(0x432D1, 0xA) + " ")
[01E6] (CA) delayFrames(8)
[01EA] (B6) printDebug.begin()
[01EC] (B6) printDebug.msg(sound(0x2EC76, 0xA) + " ")
[0200] (82) animateActor(9,7)
[0207] (CA) delayFrames(9)
[020B] (7F) putActorInXY(9,0,0,0)
[0218] (67) endCutscene()
[0219] (7B) loadRoom(10)
[021D] (66) stopObjectCodeB()
END

Script# 215
[0000] (0C) dup[1] = localvar0
[0004] (5D) if (dup[1] == 7) {
[000B] (5D) } else if (dup[1] == 4) {
[0017] (BA)   talkActor("Just a bunch of intoxicated pigeons.",2)
[0041] (5D) } else if (dup[1] == 3) {
[004C] (0C)   dup[4] = localvar1
[0051] (5D)   if (dup[4] == 35) {
[0058] (BA)     talkActor("Nah, Max'd just see how many of them he could stuff into his gaping maw.",2)
[00A6] (5D)   } else if (dup[4] == 0) {
[00B1] (BA)     talkActor("I have no use for pigeons.",2)
[00D1] (73)   } else {
[00D4] (5E)     startScript(0,63,[3,5,localvar1])
[00E8] (7C)     stopScript(0)
[00EC] (**)   }
[00EC] (5D) } else if (dup[4] == 5) {
[00F7] (BA)   talkActor("I'd rather not handle those winged rats.",2)
[0125] (73)   /* jump 129; */
[0128] (**) }
[0128] (66) stopObjectCodeB()
END

// Object 88: street-hall-door
Events:
   3 - 0095
   4 - 0012
   7 - 0029
[0012] (BB) talkEgo("I think it's a door.")
[0028] (65) stopObjectCodeA()
[0029] (5D) if (getState(var7) == 1) {
[0034] (68)   beginCutscene([2])
[003B] (7E)   walkActorTo(2,80,109)
[0045] (A9)   wait.waitForActor(-7,2)
[004C] (67)   endCutscene()
[004D] (85)   loadRoomWithEgo(82,8,188,185)
[005A] (73) } else {
[005D] (70)   setState(var7,1)
[0064] (99)   setBoxFlags([3],0)
[006E] (68)   beginCutscene([2])
[0075] (7E)   walkActorTo(2,80,109)
[007F] (A9)   wait.waitForActor(-7,2)
[0086] (67)   endCutscene()
[0087] (85)   loadRoomWithEgo(82,8,188,185)
[0094] (**) }
[0094] (65) stopObjectCodeA()
[0095] (5D) if (getState(var7) == 1) {
[00A0] (70)   setState(var7,0)
[00A7] (99)   setBoxFlags([3],128)
[00B1] (73) } else {
[00B4] (70)   setState(var7,1)
[00BB] (99)   setBoxFlags([3],0)
[00C5] (68)   beginCutscene([2])
[00CC] (7E)   walkActorTo(2,80,109)
[00D6] (A9)   wait.waitForActor(-7,2)
[00DD] (67)   endCutscene()
[00DE] (85)   loadRoomWithEgo(82,8,188,185)
[00EB] (**) }
[00EB] (65) stopObjectCodeA()
END

// Object 89: Beat up DeSoto
Events:
   3 - 0066
   4 - 000F
[000F] (68) beginCutscene([2])
[0016] (BB) talkEgo("I love this car.")
[0028] (5D) if (!bitvar67) {
[002F] (43)   bitvar2 = 1
[0035] (6C)   breakHere()
[0036] (5D)   unless (bitvar3) jump 35
[003C] (A9)   wait.waitForMessage()
[003E] (BA)   talkActor("You're a sick puppy, Sam.",3)
[005C] (A9)   wait.waitForMessage()
[005E] (43)   bitvar2 = 0
[0064] (**) }
[0064] (67) endCutscene()
[0065] (65) stopObjectCodeA()
[0066] (5D) if (!bitvar67) {
[006D] (5E)   startScript(0,214,[])
[0077] (7C)   stopScript(0)
[007B] (73) } else {
[007E] (7B)   loadRoom(10)
[0082] (**) }
[0082] (65) stopObjectCodeA()
END

// Object 90: street-diner-door
Events:
   3 - 0037
   4 - 0015
   7 - 0054
[0015] (BB) talkEgo("The finest in Bavarian cuisine.")
[0036] (65) stopObjectCodeA()
[0037] (5D) if (getState(var7) == 1) {
[0042] (70)   setState(var7,0)
[0049] (73) } else {
[004C] (70)   setState(var7,1)
[0053] (**) }
[0053] (65) stopObjectCodeA()
[0054] (5D) if (getState(var7) == 1) {
[005F] (5E)   startScript(0,205,[])
[0069] (**) }
[0069] (65) stopObjectCodeA()
END

// Object 91: Liquor Store
Events:
   3 - 00EB
   4 - 0012
   7 - 00EB
[0012] (5D) if (!bitvar174) {
[0019] (43)   bitvar174 = 1
[001F] (BB)   talkEgo("I see that old Mr. Bosco's generously giving away his profits" + newline() + "to the underprivileged, ski-mask-wearing youth of the neighborhood again.")
[00A9] (A9)   wait.waitForMessage()
[00AB] (73) } else {
[00AE] (BB)   talkEgo("I see that old Mr. Bosco's doing his usual rabid business.")
[00EA] (**) }
[00EA] (65) stopObjectCodeA()
[00EB] (5D) if (!bitvar173) {
[00F2] (5D)   if (!bitvar67) {
[00F9] (43)     bitvar173 = 1
[00FF] (5E)     startScript(0,204,[])
[0109] (73)   } else {
[010C] (BB)     talkEgo("I wouldn't want Max to miss all the fun.")
[0136] (**)   }
[0136] (73) } else {
[0139] (BB)   talkEgo("Geez Bosco, aren't you ever going to clean up this mess?")
[0173] (A9)   wait.waitForMessage()
[0175] (**) }
[0175] (65) stopObjectCodeA()
END

// Object 92: Pile of Mail
Events:
   4 - 000F
   5 - 0044
[000F] (BB) talkEgo("Somebody's been ripping off the US Postal Service.")
[0043] (65) stopObjectCodeA()
[0044] (BB) talkEgo("Steal the mail?  Are you nuts?")
[0064] (65) stopObjectCodeA()
END

// Object 93: Road Kill
Events:
   4 - 0012
   5 - 005E
[0012] (BA) talkActor("Another senseless victim of America's love affair with the automobile.",2)
[005D] (65) stopObjectCodeA()
[005E] (BA) talkActor("I'd rather leave it in its natural state.",2)
[008C] (65) stopObjectCodeA()
END

// Object 94: Dead Guy
Events:
   4 - 0012
   5 - 003C
[0012] (BB) talkEgo("That'll teach him to break our antenna.")
[003B] (65) stopObjectCodeA()
[003C] (BB) talkEgo("I don't think he's gonna move until we get our DeSoto off of him.")
[007F] (65) stopObjectCodeA()
END

// Object 95: Carnival Tickets
Events:
   4 - 001C
  5B - 000F
[000F] (43) var182 = 1017
[0015] (65) stopObjectCodeA()
[0016] (BA) talkActor("It's our orders from the Commissioner, telling us to high-tail it down to the carnival.",2)
[0078] (6E) setClass(var7,[147])
[0082] (65) stopObjectCodeA()
END

// Object 96: street-parking-sign
Events:
   4 - 000C
[000C] (BA) talkActor("`Vehicles Will Be Stolen.`",2)
[002B] (A9) wait.waitForMessage()
[002D] (65) stopObjectCodeA()
END

// Object 97: street-space-sign
Events:
   4 - 000C
[000C] (BA) talkActor("`Soiled office space available.`",2)
[0031] (A9) wait.waitForMessage()
[0033] (65) stopObjectCodeA()
END

// Object 98: street-boscos-sign
Events:
   4 - 000C
[000C] (82) animateActor(2,251)
[0013] (6C) breakHere()
[0014] (BA) talkActor("`Bosco's Guns, Liquor, Baby Needs.`",2)
[003C] (A9) wait.waitForMessage()
[003E] (65) stopObjectCodeA()
END

// Object 99: street-food-sign
Events:
   4 - 000C
[000C] (BA) talkActor("`Really Bad Food.`",2)
[0023] (A9) wait.waitForMessage()
[0025] (65) stopObjectCodeA()
END

// Object 100: street-noway-sign
Events:
   4 - 000C
[000C] (BA) talkActor("`No way.`",2)
[001A] (A9) wait.waitForMessage()
[001C] (65) stopObjectCodeA()
END
