// EN
[0000] (61) drawObject(47,0)
[0007] (61) drawObject(48,0)
[000E] (5E) startScript(0,11,[])
[0018] (65) stopObjectCodeA()
END

// EX
[0000] (65) stopObjectCodeA()
END

// Object 36: Inn
Events:
   2 - 0015
   3 - 0023
   8 - 0058
   B - 0031
[0015] (5F) startScriptQuick(103,[36,28])
[0022] (65) stopObjectCodeA()
[0023] (5F) startScriptQuick(104,[36,28])
[0030] (65) stopObjectCodeA()
[0031] (5D) if (bitvar151) {
[0037] (5F)   startScriptQuick(83,[28,7,434,56])
[004A] (**) }
[004A] (85) loadRoomWithEgo(28,7,434,56)
[0057] (65) stopObjectCodeA()
[0058] (BA) talkActor("It looks pretty much the same as Dr. Fred's motel.",3)
[008F] (65) stopObjectCodeA()
END

// Object 37: Benjamin Franklin
Events:
   5 - 022F
   6 - 022F
   7 - 022F
   8 - 0258
   A - 0037
  17 - 0042
  1A - 00A7
  3A - 016D
  50 - 018D
  5A - 0030
[0030] (43) var152 = 10
[0036] (65) stopObjectCodeA()
[0037] (5E) startScript(0,12,[])
[0041] (65) stopObjectCodeA()
[0042] (68) beginCutscene([2])
[0049] (5F) startScriptQuick(130,[])
[0050] (BA) talkActor("Boy, that's a real sleeper of a book." + wait() + "What are you, some kind of geek?",6)
[009C] (A9) wait.waitForMessage()
[009E] (5F) startScriptQuick(131,[])
[00A5] (67) endCutscene()
[00A6] (65) stopObjectCodeA()
[00A7] (68) beginCutscene([2])
[00AE] (95) beginOverride()
[00AF] (73) jump 131
[00B2] (5E) startScript(0,14,[2,1])
[00C2] (6C) breakHere()
[00C3] (5D) unless (!isScriptRunning(14)) jump c2
[00CB] (BA) talkActor("Nailed ya dead on, man!",3)
[00E7] (A9) wait.waitForMessage()
[00E9] (BA) talkActor("Unless it's lightning you're talking about, I don't want to know.",6)
[012F] (A9) wait.waitForMessage()
[0131] (96) endOverride()
[0132] (B4) printLine.begin()
[0134] (B4) printLine.msg(" ")
[0138] (7C) stopScript(14)
[013C] (9D) actorOps.setCurActor(3)
[0141] (9D) actorOps.init()
[0143] (9D) actorOps.setTalkPos(0,-85)
[014B] (9D) actorOps.setCostume(307)
[0150] (9D) actorOps.setTalkColor(242)
[0155] (9D) actorOps.setName("Hoagie")
[015E] (9D) actorOps.setWalkSpeed(11,3)
[0166] (9D) actorOps.setWidth(35)
[016B] (67) endCutscene()
[016C] (65) stopObjectCodeA()
[016D] (BA) talkActor("I don't think he'd get it.",3)
[018C] (65) stopObjectCodeA()
[018D] (0C) dup[1] = localvar0
[0191] (5D) if (dup[1] == 117) {
[0198] (BA)   talkActor("Nice rain coat." + wait() + "I wish I needed it, but unfortunately, the sun continues to mock me with its insipid warmth.",6)
[020B] (73) } else {
[020E] (BA)   talkActor("Please, I'm concentrating.",6)
[022E] (**) }
[022E] (65) stopObjectCodeA()
[022F] (BA) talkActor("Sure, push me around while you can.",6)
[0257] (65) stopObjectCodeA()
[0258] (BA) talkActor("If you think I'm something to look at now, just wait.",6)
[0292] (65) stopObjectCodeA()
END

// Object 38: Kite
Events:
   5 - 0015
   8 - 0020
  5B - 0055
[0015] (5E) startScript(0,201,[])
[001F] (65) stopObjectCodeA()
[0020] (BA) talkActor("That's the thing I'm supposed to push, I think.",3)
[0054] (65) stopObjectCodeA()
[0055] (5D) if (var215 == 5) {
[005F] (43)   var186 = 708
[0065] (73) } else {
[0068] (43)   var186 = 709
[006E] (**) }
[006E] (65) stopObjectCodeA()
END

// Object 39: Pocket
Events:
   5 - 0063
   8 - 006E
   9 - 0018
[0018] (5D) if (ifClassOfIs(var7,[149])) {
[0025] (71)   setOwner(119,3)
[002C] (6E)   setClass(39,[21])
[0036] (43)   var215 = 4
[003C] (5F)   startScriptQuick(86,[])
[0043] (68)   beginCutscene([2])
[004A] (9D)   actorOps.setCurActor(3)
[004F] (9D)   actorOps.init()
[0051] (9D)   actorOps.setCostume(35)
[0056] (82)   animateActor(3,10)
[005D] (CA)   delayFrames(14)
[0061] (67)   endCutscene()
[0062] (**) }
[0062] (65) stopObjectCodeA()
[0063] (5E) startScript(0,201,[])
[006D] (65) stopObjectCodeA()
[006E] (BA) talkActor("It's the breast pocket from the lab coat.",3)
[009C] (65) stopObjectCodeA()
END

// Object 40: Battery
Events:
   8 - 001F
   9 - 0049
  5A - 0012
[0012] (43) var152 = 8
[0018] (65) stopObjectCodeA()
[0019] (BA) talkActor("The lightning must've charged it up.",3)
[0048] (65) stopObjectCodeA()
[0049] (71) setOwner(119,3)
[0050] (70) setState(40,0)
[0057] (6E) setClass(40,[160])
[0061] (65) stopObjectCodeA()
END

// Object 41: Kumquat Tree
Events:
   B - 000C
[000C] (85) loadRoomWithEgo(60,11,156,116)
[0019] (65) stopObjectCodeA()
END

// Object 42: Outhouse 1
Events:
   8 - 0027
   B - 0019
  5A - 0012
[0012] (43) var152 = -999
[0018] (65) stopObjectCodeA()
[0019] (85) loadRoomWithEgo(65,11,418,111)
[0026] (65) stopObjectCodeA()
[0027] (BA) talkActor("They look, and smell, a lot better from a distance.",3)
[005F] (65) stopObjectCodeA()
END

// Object 43: Outhouse 2
Events:
   8 - 0027
   B - 0019
  5A - 0012
[0012] (43) var152 = -999
[0018] (65) stopObjectCodeA()
[0019] (85) loadRoomWithEgo(64,11,360,108)
[0026] (65) stopObjectCodeA()
[0027] (BA) talkActor("They look, and smell, a lot better from a distance.",3)
[005F] (65) stopObjectCodeA()
END

// Object 44: Outhouse 3
Events:
   8 - 0027
   B - 0019
  5A - 0012
[0012] (43) var152 = -999
[0018] (65) stopObjectCodeA()
[0019] (85) loadRoomWithEgo(66,11,303,111)
[0026] (65) stopObjectCodeA()
[0027] (BA) talkActor("They look, and smell, a lot better from a distance.",3)
[005F] (65) stopObjectCodeA()
END

// Object 45: Path to Inn
Events:
   B - 000C
[000C] (5D) if (bitvar151) {
[0012] (5F)   startScriptQuick(83,[28,7,434,56])
[0025] (**) }
[0025] (85) loadRoomWithEgo(28,7,434,56)
[0032] (65) stopObjectCodeA()
END

// Object 46
Events:
END

// Object 47
Events:
END

// Object 48
Events:
END

// Object 49
Events:
END
