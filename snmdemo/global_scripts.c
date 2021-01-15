// Script 1: Game Initialization
[0000] (6B) cursorCommand.initCharset(1)
[0005] (43) VAR_TIMER_NEXT = 6
[000B] (43) VAR_CUTSCENEEXIT_KEY = 27
[0011] (43) VAR_RESTART_KEY = 0
[0017] (43) VAR_PAUSE_KEY = 32
[001D] (43) VAR_TALKSTOP_KEY = 46
[0023] (A4) array150[0] = "Sam & Max Hit the Road, Version 1.0, 10-18-93"
[0058] (A4) VAR_PAUSE_MSG[0] = "Game Paused.  Press SPACE to Continue."
[0086] (A4) VAR_RESTART_MSG[0] = "Are you sure you want to restart?  (Y/N)Y"
[00B7] (A4) VAR_QUIT_MSG[0] = "Are you sure you want to quit?  (Y/N)Y"
[00E5] (A4) VAR_SAVE_BTN[0] = "Save"
[00F1] (A4) VAR_LOAD_BTN[0] = "Load"
[00FD] (A4) VAR_PLAY_BTN[0] = "Play"
[0109] (A4) VAR_CANCEL_BTN[0] = "Cancel"
[0117] (A4) VAR_QUIT_BTN[0] = "Quit"
[0123] (A4) VAR_OK_BTN[0] = "OK"
[012D] (A4) VAR_SAVE_DISK_MSG[0] = "Insert save/load game disk"
[014F] (A4) VAR_ENTER_NAME_MSG[0] = "You must enter a name"
[016C] (A4) VAR_NOT_SAVED_MSG[0] = "The game was NOT saved"
[018A] (A4) VAR_NOT_LOADED_MSG[0] = "The game was NOT loaded"
[01A9] (A4) VAR_SAVE_MSG[0] = "Saving"
[01B7] (A4) VAR_LOAD_MSG[0] = "Loading"
[01C6] (A4) VAR_SAVE_MENU_TITLE[0] = "Name your SAVE game"
[01E1] (A4) VAR_LOAD_MENU_TITLE[0] = "Select a game to LOAD"
[01FE] (A4) VAR_MAIN_MENU_TITLE[0] = "Sam & Max Hit the Road"
[021C] (6E) setClass(995,[150])
[0226] (6E) setClass(996,[150])
[0230] (BC) dimArray.int(VAR_GUI_COLORS,44)
[0237] (47) VAR_GUI_COLORS[0] = 7
[0240] (47) VAR_GUI_COLORS[1] = 0
[0249] (47) VAR_GUI_COLORS[2] = 8
[0252] (47) VAR_GUI_COLORS[3] = 0
[025B] (47) VAR_GUI_COLORS[4] = 7
[0264] (47) VAR_GUI_COLORS[5] = 8
[026D] (47) VAR_GUI_COLORS[6] = 14
[0276] (47) VAR_GUI_COLORS[7] = 7
[027F] (47) VAR_GUI_COLORS[8] = 0
[0288] (47) VAR_GUI_COLORS[9] = 7
[0291] (47) VAR_GUI_COLORS[10] = 8
[029A] (47) VAR_GUI_COLORS[11] = 14
[02A3] (47) VAR_GUI_COLORS[12] = 7
[02AC] (47) VAR_GUI_COLORS[13] = 15
[02B5] (47) VAR_GUI_COLORS[14] = 8
[02BE] (47) VAR_GUI_COLORS[15] = 15
[02C7] (47) VAR_GUI_COLORS[16] = 8
[02D0] (47) VAR_GUI_COLORS[17] = 15
[02D9] (47) VAR_GUI_COLORS[18] = 8
[02E2] (47) VAR_GUI_COLORS[19] = 15
[02EB] (47) VAR_GUI_COLORS[20] = 8
[02F4] (47) VAR_GUI_COLORS[21] = 8
[02FD] (47) VAR_GUI_COLORS[22] = 15
[0306] (47) VAR_GUI_COLORS[23] = 8
[030F] (47) VAR_GUI_COLORS[24] = 15
[0318] (47) VAR_GUI_COLORS[25] = 8
[0321] (47) VAR_GUI_COLORS[26] = 7
[032A] (47) VAR_GUI_COLORS[27] = 15
[0333] (47) VAR_GUI_COLORS[28] = 8
[033C] (47) VAR_GUI_COLORS[29] = 15
[0345] (47) VAR_GUI_COLORS[30] = 8
[034E] (47) VAR_GUI_COLORS[31] = 4
[0357] (47) VAR_GUI_COLORS[32] = 7
[0360] (47) VAR_GUI_COLORS[33] = 15
[0369] (47) VAR_GUI_COLORS[34] = 8
[0372] (47) VAR_GUI_COLORS[35] = 15
[037B] (47) VAR_GUI_COLORS[36] = 8
[0384] (47) VAR_GUI_COLORS[37] = 8
[038D] (47) VAR_GUI_COLORS[38] = 7
[0396] (47) VAR_GUI_COLORS[39] = 15
[039F] (47) VAR_GUI_COLORS[40] = 8
[03A8] (47) VAR_GUI_COLORS[41] = 15
[03B1] (47) VAR_GUI_COLORS[42] = 8
[03BA] (43) VAR_CUTSCENEEXIT_KEY = 27
[03C0] (43) VAR_PAUSE_KEY = 32
[03C6] (43) VAR_MAINMENU_KEY = 0
[03CC] (C9) kernelSetFunctions.setSaveSound([1])
[03D6] (5D) if (VAR_HEAPSPACE < 340) {
[03E0] (B7)   printSystem.begin()
[03E2] (B7)   printSystem.msg("Warning!  More free memory needed!  Consult ref card!")
[041A] (**) }
[041A] (43) VAR_CHARINC = 3
[0420] (43) VAR_CUTSCENE_START_SCRIPT = 2
[0426] (43) VAR_CUTSCENE_END_SCRIPT = 3
[042C] (43) VAR_ENTRY_SCRIPT2 = 4
[0432] (43) VAR_EXIT_SCRIPT = 6
[0438] (43) VAR_VERB_SCRIPT = 0
[043E] (43) var175 = 19
[0444] (43) VAR_SENTENCE_SCRIPT = 50
[044A] (43) VAR_NUM_ACTOR = 19
[0450] (43) VAR_INVENTORY_SCRIPT = 52
[0456] (9C) roomOps.screenEffect(257)
[045B] (43) VAR_MAINMENU_KEY = 319
[0461] (6B) cursorCommand.initCharset(2)
[0466] (43) var177 = 889
[046C] (6B) cursorCommand.setCursorImg(var177,92)
[0474] (47) array178[1] = 879
[047D] (47) array178[2] = 880
[0486] (47) array178[3] = 881
[048F] (47) array178[4] = 882
[0498] (47) array178[5] = 888
[04A1] (43) var132 = 5
[04A7] (43) var130 = VAR_CHARINC
[04AD] (43) var133 = 1
[04B3] (43) var134 = 1
[04B9] (43) var135 = 1
[04BF] (43) var136 = 1
[04C5] (43) var137 = 4
[04CB] (43) var138 = 12
[04D1] (43) var139 = 40
[04D7] (43) var140 = 10
[04DD] (43) var141 = 1
[04E3] (43) var142 = 2
[04E9] (43) VAR_EGO = 2
[04EF] (43) bitvar76 = 1
[04F5] (43) var222 = 55
[04FB] (43) var223 = 30
[0501] (6B) cursorCommand.cursorOn()
[0503] (6B) cursorCommand.userPutOn()
[0505] (9D) actorOps.setCurActor(2)
[050A] (9D) actorOps.init()
[050C] (9D) actorOps.setCostume(2)
[0511] (9D) actorOps.setTalkColor(6)
[0516] (9D) actorOps.setTalkPos(0,-110)
[051E] (9D) actorOps.setCurActor(3)
[0523] (9D) actorOps.init()
[0525] (9D) actorOps.setCostume(3)
[052A] (84) pickupObject(35,1)
[0531] (43) var205 = 6
[0537] (47) array195[0] = 997
[0540] (47) array195[1] = 998
[0549] (47) array195[2] = 1001
[0552] (47) array195[3] = 999
[055B] (47) array188[0] = 997
[0564] (47) array188[1] = 998
[056D] (47) array188[2] = 1001
[0576] (47) array188[3] = 999
[057F] (43) var189 = 3
[0585] (5F) startScriptQuick(17,[2,1008])
[0592] (43) bitvar226 = 1
[0598] (47) array314[1] = 37
[05A1] (47) array314[2] = 80
[05AA] (47) array314[3] = 268
[05B3] (47) array315[1] = 11
[05BC] (47) array315[2] = 190
[05C5] (47) array315[3] = 252
[05CE] (47) array316[1] = 0
[05D7] (47) array316[2] = 174
[05E0] (47) array316[3] = 174
[05E9] (47) array317[1] = 70
[05F2] (47) array317[2] = 100
[05FB] (47) array317[3] = 208
[0604] (47) array318[1] = 40
[060D] (47) array318[2] = 170
[0616] (47) array318[3] = 213
[061F] (47) array319[1] = 124
[0628] (47) array319[2] = 109
[0631] (47) array319[3] = 98
[063A] (47) array319[4] = 68
[0643] (47) array319[5] = 60
[064C] (47) array320[1] = 108
[0655] (47) array320[2] = 97
[065E] (47) array320[3] = 69
[0667] (47) array320[4] = 58
[0670] (47) array320[5] = 46
[0679] (43) var309 = 1
[067F] (43) var310 = 3
[0685] (43) var311 = 3
[068B] (43) var312 = 1
[0691] (43) var313 = 3
[0697] (43) var249 = 3
[069D] (9D) actorOps.setCurActor(1)
[06A2] (9D) actorOps.init()
[06A4] (9D) actorOps.setCostume(1)
[06A9] (9D) actorOps.setIgnoreBoxes()
[06AB] (7F) putActorInXY(1,0,200,7)
[06B8] (82) animateActor(1,250)
[06BF] (43) VAR_SAVELOAD_SCRIPT = 33
[06C5] (43) VAR_SAVELOAD_SCRIPT2 = 34
[06CB] (5E) startScript(0,30,[])
[06D5] (7B) loadRoom(1)
[06D9] (66) stopObjectCodeB()
END

// Script 2
[0000] (6B) cursorCommand.softCursorOff()
[0002] (6B) cursorCommand.softUserputOff()
[0004] (5D) if (localvar0 == 1) {
[000E] (9D)   actorOps.setCurActor(1)
[0013] (9D)   actorOps.setElevation(255)
[0018] (**) }
[0018] (5D) unless ((localvar0 == 3)) jump 22
[0022] (5D) unless ((localvar0 == 0)) jump 2c
[002C] (6A) freezeUnfreeze(127)
[0030] (66) stopObjectCodeB()
END

// Script 3
[0000] (6B) cursorCommand.softCursorOn()
[0002] (6B) cursorCommand.softUserputOn()
[0004] (96) endOverride()
[0005] (5D) if (localvar0 == 1) {
[000F] (9D)   actorOps.setCurActor(1)
[0014] (9D)   actorOps.setElevation(0)
[0019] (73) } else {
[001C] (5D)   unless ((localvar0 == 3)) jump 26
[0026] (**) }
[0026] (5D) if (localvar0 != 2) {
[0030] (5D)   unless ((localvar0 != 3)) jump 3a
[003A] (**) }
[003A] (6A) freezeUnfreeze(0)
[003E] (66) stopObjectCodeB()
END

// Script 4
[0000] (5D) if (bitvar6) {
[0006] (9B)   resourceRoutines.loadFlObject(995,93)
[000E] (5F)   startScriptQuick(5,[])
[0015] (43)   VAR_SCROLL_SCRIPT = 20
[001B] (7F)   putActorInXY(1,(VAR_CAMERA_POS_X - 160),200,VAR_ROOM)
[002C] (**) }
[002C] (5D) if (!var194) {
[0033] (43)   var194 = 26
[0039] (**) }
[0039] (5D) if (bitvar0) {
[003F] (C9)   kernelSetFunctions.noirMode([])
[0046] (**) }
[0046] (5D) if (!array184[3]) {
[0050] (47)   array184[3] = 44
[0059] (**) }
[0059] (66) stopObjectCodeB()
END

// Script 5
[0000] (43) localvar2 = 0
[0006] (43) localvar0 = 1
[000C] (5D) while (localvar0 <= 5) {
[0016] (9B)   resourceRoutines.loadFlObject(array178[localvar0],92)
[0021] (4F)   localvar0++
[0024] (**) }
[0027] (43) localvar0 = 6
[002D] (5D) while (localvar0 <= 80) {
[0037] (5D)   if (array178[localvar0]) {
[0040] (5D)     if (array178[localvar0] == var181) {
[004D] (47)       array178[localvar0] = 0
[0056] (73)     } else {
[0059] (4F)       localvar2++
[005C] (43)       localvar1 = array178[localvar0]
[0065] (60)       startObject(2,localvar1,91,[])
[0072] (9B)       resourceRoutines.loadFlObject(var182,93)
[007A] (5D)       if (localvar2 >= var179) {
[0084] (73)         break
[0087] (**)       }
[0087] (**)     }
[0087] (**)   }
[0087] (4F)   localvar0++
[008A] (**) }
[008D] (66) stopObjectCodeB()
END

// Script 6
[0000] (43) var166 = VAR_ROOM
[0006] (B4) printLine.begin()
[0008] (B4) printLine.color(15)
[000D] (B4) printLine.XY(160,8)
[0015] (B4) printLine.center()
[0017] (B4) printLine.overhead()
[0019] (B4) printLine.end()
[001B] (43) localvar0 = 0
[0021] (5D) while (localvar0 <= 19) {
[002B] (47)   array184[localvar0] = 0
[0034] (47)   array185[localvar0] = 0
[003D] (47)   array186[localvar0] = 0
[0046] (4F)   localvar0++
[0049] (**) }
[004C] (43) var187 = 0
[0052] (43) var211 = 0
[0058] (43) bitvar3 = 1
[005E] (5D) if (getActorRoom(3) == var166) {
[0069] (82)   animateActor(3,1)
[0070] (**) }
[0070] (BC) dimArray.nukeArray(var202)
[0074] (BC) dimArray.nukeArray(var203)
[0078] (7C) stopScript(29)
[007C] (7C) stopScript(23)
[0080] (43) var194 = 0
[0086] (66) stopObjectCodeB()
END

// Script 7
[0000] (5D) if (localvar0 < localvar1) {
[000A] (43)   var169 = 0
[0010] (73)   jump 4c
[0013] (73) } else {
[0016] (43)   localvar3 = localvar0
[001C] (43)   localvar4 = localvar1
[0022] (43)   localvar0 = localvar3
[0028] (43)   localvar1 = localvar4
[002E] (43)   var169 = (localvar0 / localvar1)
[0038] (43)   localvar1 = (localvar1 * var169)
[0042] (43)   localvar0 = (localvar0 - localvar1)
[004C] (**) }
[004C] (43) var170 = localvar0
[0052] (66) stopObjectCodeB()
END

// Script 9
[0000] (68) beginCutscene([2])
[0007] (A9) wait.waitForActor(-7,VAR_EGO)
[000E] (A9) wait.waitForCamera()
[0010] (67) endCutscene()
[0011] (BC) dimArray.bit(var191,50)
[0018] (43) var192 = 0
[001E] (43) var174 = VAR_VERB_SCRIPT
[0024] (43) VAR_VERB_SCRIPT = 16
[002A] (7F) putActorInXY(1,0,0,0)
[0037] (43) localvar0 = (VAR_CAMERA_POS_X - 160)
[0041] (9C) roomOps.setPalColor(255,185,130,180)
[004F] (43) VAR_CHARSET_MASK = 1
[0055] (43) var177 = 874
[005B] (6B) cursorCommand.setCursorImg(var177,92)
[0063] (43) localvar0 = 4
[0069] (5D) while (localvar0 <= var196) {
[0073] (47)   array195[localvar0] = 0
[007C] (4F)   localvar0++
[007F] (**) }
[0082] (66) stopObjectCodeB()
END

// Script 10
[0000] (7F) putActorInXY(1,(VAR_CAMERA_POS_X - 160),200,VAR_ROOM)
[0011] (70) setState(1005,0)
[0018] (70) setState(1004,0)
[001F] (6E) setClass(1005,[22])
[0029] (6E) setClass(1004,[22])
[0033] (43) localvar0 = 1064
[0039] (5D) while (localvar0 <= 1067) {
[0043] (70)   setState(localvar0,0)
[004A] (6E)   setClass(localvar0,[22])
[0054] (4F)   localvar0++
[0057] (**) }
[005A] (43) localvar0 = 0
[0060] (5D) while (localvar0 <= 10) {
[006A] (70)   setState(array190[localvar0],0)
[0074] (6E)   setClass(array190[localvar0],[21,22])
[0084] (47)   array190[localvar0] = 0
[008D] (4F)   localvar0++
[0090] (**) }
[0093] (9C) roomOps.setPalColor(255,0,7,180)
[00A1] (43) VAR_VERB_SCRIPT = var174
[00A7] (BC) dimArray.nukeArray(var191)
[00AB] (43) var193 = 0
[00B1] (6B) cursorCommand.cursorOn()
[00B3] (6B) cursorCommand.userPutOn()
[00B5] (43) bitvar5 = 0
[00BB] (43) var177 = 889
[00C1] (6B) cursorCommand.setCursorImg(var177,92)
[00C9] (C9) kernelSetFunctions.clearCharsetMask([])
[00D0] (6C) breakHere()
[00D1] (66) stopObjectCodeB()
END

// Script 11
[0000] (70) setState(1005,0)
[0007] (70) setState(1004,0)
[000E] (6E) setClass(1005,[22])
[0018] (6E) setClass(1004,[22])
[0022] (43) localvar0 = 1064
[0028] (5D) while (localvar0 <= 1067) {
[0032] (70)   setState(localvar0,0)
[0039] (6E)   setClass(localvar0,[22])
[0043] (4F)   localvar0++
[0046] (**) }
[0049] (43) localvar0 = 0
[004F] (5D) while (localvar0 <= 7) {
[0059] (5D)   if (array190[localvar0]) {
[0062] (70)     setState(array190[localvar0],0)
[006C] (47)     array190[localvar0] = 0
[0075] (**)   }
[0075] (4F)   localvar0++
[0078] (**) }
[007B] (C9) kernelSetFunctions.clearCharsetMask([])
[0082] (66) stopObjectCodeB()
END

// Script 12
[0000] (43) localvar1 = 0
[0006] (43) localvar3 = ((VAR_CAMERA_POS_X - 160) / 8)
[0014] (5D) if (((var193 + 7) < localvar0) || (var193 > 0)) {
[002A] (9B)   resourceRoutines.loadFlObject(1004,93)
[0032] (9B)   resourceRoutines.loadFlObject(1005,93)
[003A] (6E)   setClass(1004,[150])
[0044] (6E)   setClass(1005,[150])
[004E] (62)   drawObjectAt(1004,(localvar3 + 35),19)
[005C] (62)   drawObjectAt(1005,localvar3,19)
[0066] (**) }
[0066] (43) localvar4 = 1064
[006C] (43) localvar2 = 0
[0072] (5D) while (localvar2 <= 7) {
[007C] (5D)   if (array190[localvar2]) {
[0085] (9B)     resourceRoutines.loadFlObject(array190[localvar2],93)
[0090] (6E)     setClass(array190[localvar2],[150])
[009D] (62)     drawObjectAt(array190[localvar2],(localvar3 + localvar1),22)
[00AE] (5D)   } else if (localvar4 <= 1067) {
[00BB] (9B)     resourceRoutines.loadFlObject(localvar4,93)
[00C3] (6E)     setClass(localvar4,[150])
[00CD] (62)     drawObjectAt(localvar4,(localvar3 + localvar1),22)
[00DB] (4F)     localvar4++
[00DE] (**)   }
[00DE] (43)   localvar1 = (localvar1 + 5)
[00E8] (4F)   localvar2++
[00EB] (**) }
[00EE] (6B) cursorCommand.cursorOn()
[00F0] (6B) cursorCommand.userPutOn()
[00F2] (43) bitvar5 = 0
[00F8] (66) stopObjectCodeB()
END

// Script 13
[0000] (43) var197 = var195
[0006] (4F) var196++
[0009] (47) array195[var196] = localvar0
[0012] (66) stopObjectCodeB()
END

// Script 14
[0000] (0C) dup[1] = var197
[0004] (5D) if (dup[1] == 1) {
[000B] (47)   array190[0] = 997
[0015] (47)   array190[1] = 998
[001E] (47)   array190[2] = 1001
[0027] (47)   array190[3] = 999
[0030] (5E)   startScript(0,12,[3])
[003D] (43)   var196 = 3
[0043] (5D) } else if (dup[1] == var188) {
[004E] (43)   localvar0 = 0
[0055] (5D)   if ((var193 + 7) > var189) {
[0063] (43)     var193 = (var189 - 7)
[006D] (**)   }
[006D] (5D)   if (var193 < 0) {
[0077] (43)     var193 = 0
[007D] (**)   }
[007D] (43)   localvar1 = var193
[0083] (5D)   while (localvar0 <= 7) {
[008D] (5D)     if (!array191[localvar1]) {
[0097] (47)       array190[localvar0] = array188[localvar1]
[00A3] (4F)       localvar0++
[00A6] (**)     }
[00A6] (4F)     localvar1++
[00A9] (**)   }
[00AC] (5E)   startScript(0,12,[(var189 - var192)])
[00BD] (5D) } else if (dup[1] == var195) {
[00C8] (43)   localvar0 = 0
[00CF] (5D)   if ((var193 + 7) > var196) {
[00DD] (43)     var193 = (var196 - 7)
[00E7] (**)   }
[00E7] (5D)   if (var193 < 0) {
[00F1] (43)     var193 = 0
[00F7] (**)   }
[00F7] (43)   localvar1 = var193
[00FD] (5D)   while (localvar0 <= 7) {
[0107] (47)     array190[localvar0] = array195[localvar1]
[0113] (4F)     localvar0++
[0116] (4F)     localvar1++
[0119] (**)   }
[011C] (5E)   startScript(0,12,[var196])
[0129] (73)   /* jump 12d; */
[012C] (**) }
[012C] (66) stopObjectCodeB()
END

// Script 15
[0000] (43) var197 = localvar0
[0006] (5E) startScript(0,11,[])
[0010] (5E) startScript(0,14,[])
[001A] (66) stopObjectCodeB()
END

// Script 16
[0000] (5D) if (bitvar5) {
[0006] (7C)   stopScript(0)
[000A] (**) }
[000A] (5D) if (localvar0 == 2) {
[0014] (43)   localvar6 = (VAR_VIRT_MOUSE_X - (VAR_CAMERA_POS_X - 160))
[0022] (5D)   if (((ifClassOfIs(1004,[150]) && (localvar6 > 281)) && (VAR_VIRT_MOUSE_Y > 152)) && (VAR_VIRT_MOUSE_Y < 176)) {
[0047] (43)     localvar7 = 4
[004D] (5D)     if (var197 == var188) {
[0057] (43)       localvar7 = var189
[005D] (5D)     } else if (var197 == var195) {
[006A] (43)       localvar7 = var196
[0070] (**)     }
[0070] (5D)     if (var193 < ((localvar7 - (7 - 2)) - var192)) {
[0086] (43)       var193 = (var193 + (7 + 1))
[0094] (0C)       dup[1] = var197
[0098] (5D)       if (dup[1] == 1) {
[009F] (5E)         startScript(0,15,[1])
[00AD] (5D)       } else if (dup[1] == var188) {
[00B8] (5E)         startScript(0,15,[var188])
[00C6] (5D)       } else if (dup[1] == var195) {
[00D1] (5E)         startScript(0,15,[var195])
[00DF] (73)         /* jump e3; */
[00E2] (**)       }
[00E2] (**)     }
[00E3] (6B)     cursorCommand.cursorOn()
[00E5] (6B)     cursorCommand.userPutOn()
[00E7] (43)     bitvar5 = 0
[00ED] (7C)     stopScript(0)
[00F1] (**)   }
[00F1] (5D)   if (((ifClassOfIs(1005,[150]) && (localvar6 < 39)) && (VAR_VIRT_MOUSE_Y > 152)) && (VAR_VIRT_MOUSE_Y < 176)) {
[0116] (5D)     if (var193 > 0) {
[0120] (43)       var193 = (var193 - (7 + 1))
[012E] (5D)       if (var193 < 0) {
[0138] (43)         var193 = 0
[013E] (**)       }
[013E] (0C)       dup[4] = var197
[0142] (5D)       if (dup[4] == 1) {
[0149] (5E)         startScript(0,15,[1])
[0157] (5D)       } else if (dup[4] == var188) {
[0162] (5E)         startScript(0,15,[var188])
[0170] (5D)       } else if (dup[4] == var195) {
[017B] (5E)         startScript(0,15,[var195])
[0189] (73)         /* jump 18d; */
[018C] (**)       }
[018C] (73)     } else {
[0190] (43)       var193 = 0
[0196] (**)     }
[0196] (6B)     cursorCommand.cursorOn()
[0198] (6B)     cursorCommand.userPutOn()
[019A] (43)     bitvar5 = 0
[01A0] (7C)     stopScript(0)
[01A4] (**)   }
[01A4] (5D)   if (VAR_VIRT_MOUSE_Y >= 176) {
[01AE] (6B)     cursorCommand.cursorOff()
[01B0] (6B)     cursorCommand.userPutOff()
[01B2] (43)     bitvar5 = 1
[01B8] (43)     localvar5 = (localvar6 / (5 * 8))
[01C6] (5D)     if (array190[localvar5]) {
[01CF] (5D)       unless ((array190[localvar5] == 1005)) jump 1dc
[01DC] (5D)       unless ((array190[localvar5] == 1004)) jump 1e9
[01E9] (43)       var171 = array190[localvar5]
[01F2] (43)       localvar1 = 4
[01F8] (5D)       while (localvar1 <= 50) {
[0202] (5D)         if (array188[localvar1] == var171) {
[020F] (47)           array191[localvar1] = 1
[0218] (4F)           var192++
[021B] (**)         }
[021B] (4F)         localvar1++
[021E] (**)       }
[0221] (73)     } else {
[0224] (6B)       cursorCommand.cursorOn()
[0226] (6B)       cursorCommand.userPutOn()
[0228] (43)       bitvar5 = 0
[022E] (7C)       stopScript(0)
[0232] (**)     }
[0232] (73)   } else {
[0235] (43)     var171 = 999
[023B] (**)   }
[023B] (**) }
[023B] (66) stopObjectCodeB()
END

// Script 17
[0000] (0C) dup[1] = localvar0
[0004] (5D) if (dup[1] == 2) {
[000B] (43)   localvar2 = 0
[0012] (5D)   while (localvar2 <= var189) {
[001C] (5D)     if (array188[localvar2] == localvar1) {
[0029] (73)       jump 5a
[002C] (**)     }
[002C] (4F)     localvar2++
[002F] (**)   }
[0032] (4F)   var189++
[0035] (47)   array188[var189] = localvar1
[003E] (5D) } else if (dup[1] == var195) {
[0049] (4F)   var196++
[004D] (47)   array195[var196] = localvar1
[0056] (73)   /* jump 5a; */
[0059] (**) }
[0059] (66) stopObjectCodeB()
END

// Script 18
[0000] (0C) dup[1] = localvar0
[0004] (5D) if (dup[1] == 2) {
[000B] (43)   localvar2 = 0
[0012] (5D)   while (localvar2 <= var189) {
[001C] (5D)     if (array188[localvar2] == localvar1) {
[0029] (43)       localvar3 = localvar2
[002F] (5D)       while (localvar3 <= var189) {
[0039] (47)         array188[localvar3] = array188[(localvar3 + 1)]
[0049] (4F)         localvar3++
[004C] (**)       }
[004F] (57)       var189--
[0052] (**)     }
[0052] (4F)     localvar2++
[0055] (**)   }
[0058] (73)   /* jump 5c; */
[005B] (**) }
[005B] (66) stopObjectCodeB()
END

// Script 19
[0000] (6C) breakHere()
[0001] (43) localvar0 = getRandomNumber(1)
[0008] (73) jump 0
[000B] (66) stopObjectCodeB()
END

// Script 20
[0000] (7F) putActorInXY(1,(VAR_CAMERA_POS_X - 160),200,VAR_ROOM)
[0011] (5D) if (var187) {
[0017] (5E)   startScript(0,var187,[])
[0021] (**) }
[0021] (66) stopObjectCodeB()
END

// Script 21
[0000] (5D) if (getDistObjObj(localvar0,localvar1) > (2 * var212)) {
[0012] (5D)   if (localvar2) {
[0018] (7C)     stopScript(localvar2)
[001C] (**)   }
[001C] (7D)   walkActorToObj(localvar1,localvar0,0)
[0026] (6C)   breakHere()
[0027] (5D)   if (getActorMoving(localvar1)) {
[002E] (5D)     if (getDistObjObj(localvar0,localvar1) > var212) {
[003C] (73)       jump 26
[003F] (73)     } else {
[0042] (82)       animateActor(localvar1,255)
[0049] (5D)       if (localvar2) {
[004F] (5D)         if (!isScriptRunning(localvar2)) {
[0057] (5E)           startScript(0,localvar2,[])
[0061] (**)         }
[0061] (5D)       } else if (getActorScaleX(localvar1) > 243) {
[006F] (81)         faceActor(localvar1,localvar0)
[0076] (5D)       } else if (getObjectDir(localvar1) != 3) {
[0084] (82)         animateActor(localvar1,250)
[008B] (**)       }
[008B] (**)     }
[008B] (5D)   } else if (getActorScaleX(localvar1) > 243) {
[0099] (81)     faceActor(localvar1,localvar0)
[00A0] (5D)   } else if (getObjectDir(localvar1) != 3) {
[00AE] (82)     animateActor(localvar1,250)
[00B5] (**)   }
[00B5] (5D) } else if (getActorScaleX(localvar1) > 243) {
[00C3] (81)   faceActor(localvar1,localvar0)
[00CA] (5D) } else if (getObjectDir(localvar1) != 3) {
[00D8] (82)   animateActor(localvar1,250)
[00DF] (**) }
[00DF] (6C) breakHere()
[00E0] (73) jump 0
[00E3] (66) stopObjectCodeB()
END

// Script 22
[0000] (5D) if (!localvar4) {
[0007] (43)   var217 = getObjectX(localvar0)
[000E] (43)   var218 = getObjectY(localvar0)
[0015] (73) } else {
[0018] (43)   localvar8 = getObjectX(localvar0)
[001F] (43)   localvar9 = getObjectY(localvar0)
[0026] (43)   localvar10 = abs((getObjectX(localvar1) - localvar8))
[0032] (43)   localvar11 = abs((getObjectY(localvar1) - localvar9))
[003E] (43)   localvar5 = getActorScaleX(localvar0)
[0045] (5D)   if (getActorScaleX(localvar1) < localvar5) {
[0050] (43)     localvar5 = getActorScaleX(localvar1)
[0057] (**)   }
[0057] (43)   localvar8 = ((var222 * localvar5) / 255)
[0065] (43)   localvar9 = ((var222 * localvar5) / 255)
[0073] (5D)   if ((localvar10 <= localvar8) && (localvar11 <= localvar9)) {
[0085] (43)     var217 = getObjectX(localvar0)
[008C] (43)     var218 = getObjectY(localvar0)
[0093] (43)     localvar4 = 0
[0099] (**)   }
[0099] (**) }
[0099] (43) var213 = abs((var217 - getObjectX(localvar1)))
[00A5] (43) var214 = abs((var218 - getObjectY(localvar1)))
[00B1] (5D) if (!localvar3) {
[00B8] (43)   localvar5 = getActorScaleX(localvar0)
[00BF] (5D)   if (getActorScaleX(localvar1) < localvar5) {
[00CA] (43)     localvar5 = getActorScaleX(localvar1)
[00D1] (**)   }
[00D1] (5D)   if (localvar4 && getActorMoving(localvar0)) {
[00DC] (43)     var215 = 8
[00E2] (43)     var216 = 2
[00E8] (73)   } else {
[00EB] (43)     var215 = var222
[00F1] (43)     var216 = var223
[00F7] (**)   }
[00F7] (43)   var215 = (var215 * localvar5)
[0101] (43)   var216 = (var216 * localvar5)
[010B] (43)   var215 = (var215 / 255)
[0115] (43)   var216 = (var216 / 255)
[011F] (73) } else {
[0122] (43)   var215 = localvar3
[0128] (43)   var216 = var215
[012E] (**) }
[012E] (5D) if (localvar4) {
[0134] (5D)   if (!var215) {
[013B] (43)     var215 = 1
[0141] (**)   }
[0141] (5D)   if (!var216) {
[0148] (43)     var216 = 1
[014E] (**)   }
[014E] (**) }
[014E] (43) bitvar7 = 0
[0154] (43) localvar6 = getActorRoom(localvar0)
[015B] (5D) if (getActorRoom(localvar1) != localvar6) {
[0166] (5D)   if (localvar2) {
[016C] (7C)     stopScript(23)
[0170] (43)     localvar7 = getObjectDir(localvar0)
[0177] (43)     localvar8 = getObjectX(localvar0)
[017E] (43)     localvar10 = localvar8
[0184] (43)     localvar9 = getObjectY(localvar0)
[018B] (43)     localvar11 = localvar9
[0191] (43)     localvar12 = (getActorWidth(localvar0) * 2)
[019C] (0C)     dup[1] = localvar7
[01A0] (5D)     if (dup[1] == 0) {
[01A7] (43)       localvar10 = (localvar10 - localvar12)
[01B2] (5D)     } else if (dup[1] == 1) {
[01BD] (43)       localvar10 = (localvar10 + localvar12)
[01C8] (5D)     } else if (dup[1] == 2) {
[01D3] (5D)       if (getRandomNumber(1)) {
[01DB] (43)         localvar10 = (localvar10 + localvar12)
[01E5] (73)       } else {
[01E8] (43)         localvar10 = (localvar10 - localvar12)
[01F2] (**)       }
[01F2] (73)       /* jump 1f6; */
[01F5] (**)     }
[01F5] (43)     localvar11 = (localvar11 + localvar12)
[0200] (5D)     if (!getActorMoving(localvar0)) {
[0208] (7E)       walkActorTo(localvar0,localvar10,localvar11)
[0212] (**)     }
[0212] (CA)     delayFrames(5)
[0216] (5D)     if (getActorRoom(localvar0) != localvar6) {
[0221] (43)       bitvar7 = 1
[0227] (73)       jump 154
[022A] (**)     }
[022A] (5D)     if (getObjectX(localvar0) == localvar8) {
[0235] (5D)       if (getObjectY(localvar0) == localvar9) {
[0240] (73)         jump 177
[0243] (**)       }
[0243] (**)     }
[0243] (5D)     if (var219) {
[0249] (80)       putActorAtObject(localvar1,var219,localvar6)
[0253] (73)     } else {
[0256] (7F)       putActorInXY(localvar1,localvar8,localvar9,localvar6)
[0263] (**)     }
[0263] (5D)     if (!localvar7) {
[026A] (0C)       dup[4] = localvar7
[026E] (5D)       if (dup[4] == 0) {
[0275] (82)         animateActor(localvar1,248)
[027D] (5D)       } else if (dup[4] == 1) {
[0288] (82)         animateActor(localvar1,249)
[0290] (5D)       } else if (dup[4] == 2) {
[029B] (82)         animateActor(localvar1,250)
[02A3] (5D)       } else if (dup[4] == 3) {
[02AE] (82)         animateActor(localvar1,251)
[02B6] (73)         /* jump 2ba; */
[02B9] (**)       }
[02B9] (6C)       breakHere()
[02BB] (82)       animateActor(localvar1,3)
[02C2] (6C)       breakHere()
[02C3] (**)     }
[02C3] (5E)     startScript(0,23,[localvar0,localvar1,localvar2,localvar3])
[02D9] (7C)     stopScript(0)
[02DD] (**)   }
[02DD] (5D) } else if (bitvar7) {
[02E6] (73)   jump 2c3
[02E9] (**) }
[02E9] (66) stopObjectCodeB()
END

// Script 23
[0000] (43) var220 = -32765
[0006] (43) var221 = -32765
[000C] (43) localvar8 = var220
[0012] (43) localvar9 = var221
[0018] (5F) startScriptQuick(22,[localvar0,localvar1,localvar2,localvar3])
[002B] (43) localvar4 = 0
[0031] (43) localvar7 = (var215 * 2)
[003B] (5D) if (var213 > localvar7) {
[0045] (43)   localvar4 = 1
[004B] (**) }
[004B] (43) localvar7 = (var216 * 2)
[0055] (5D) if (var214 > localvar7) {
[005F] (43)   localvar4 = 1
[0065] (**) }
[0065] (5D) if (localvar4) {
[006B] (7E)   walkActorTo(localvar1,var217,var218)
[0075] (73) } else {
[0078] (5D)   if (getActorScaleX(localvar1) > 223) {
[0083] (81)     faceActor(localvar1,localvar0)
[008A] (5D)   } else if (getObjectDir(localvar1) != 3) {
[0098] (82)     animateActor(localvar1,250)
[009F] (**)   }
[009F] (6C)   breakHere()
[00A0] (73)   jump 18
[00A3] (**) }
[00A3] (5F) startScriptQuick(22,[localvar0,localvar1,localvar2,localvar3,1])
[00B9] (5D) if (!getActorMoving(localvar1)) {
[00C1] (73)   jump 18
[00C4] (**) }
[00C4] (43) localvar4 = 1
[00CA] (5D) if (var213 <= var215) {
[00D4] (5D)   if (var214 <= var216) {
[00DE] (43)     localvar4 = 0
[00E4] (**)   }
[00E4] (**) }
[00E4] (5D) if (!localvar4) {
[00EB] (5F)   startScriptQuick(22,[localvar0,localvar1,localvar2,localvar3])
[00FE] (43)   localvar4 = 0
[0104] (5D)   if (var213 <= var215) {
[010E] (5D)     if (var214 <= var216) {
[0118] (43)       localvar4 = 1
[011E] (**)     }
[011E] (**)   }
[011E] (5D)   if (localvar4) {
[0124] (82)     animateActor(localvar1,255)
[012B] (73)     jump 18
[012E] (**)   }
[012E] (73) } else {
[0131] (6C)   breakHere()
[0132] (73)   jump a3
[0135] (**) }
[0135] (5D) if (var221 != -32765) {
[013F] (7E)   walkActorTo(localvar1,var220,var221)
[0149] (43)   localvar8 = var220
[014F] (43)   localvar9 = var221
[0155] (73) } else {
[0158] (82)   animateActor(localvar1,255)
[015F] (73)   jump 18
[0162] (**) }
[0162] (5D) if (localvar8 != var220) {
[016C] (73)   jump a3
[016F] (**) }
[016F] (5D) if (localvar9 != var221) {
[0179] (73)   jump a3
[017C] (**) }
[017C] (5F) startScriptQuick(22,[localvar0,localvar1,localvar2,localvar3])
[018F] (43) localvar4 = 1
[0195] (5D) if (var213 <= var215) {
[019F] (5D)   if (var214 <= var216) {
[01A9] (43)     localvar4 = 0
[01AF] (**)   }
[01AF] (**) }
[01AF] (5D) if (localvar4) {
[01B5] (6C)   breakHere()
[01B6] (73)   jump 162
[01B9] (73) } else {
[01BC] (82)   animateActor(localvar1,255)
[01C3] (73)   jump 18
[01C6] (**) }
[01C6] (66) stopObjectCodeB()
END

// Script 24
[0000] (5D) if (localvar1 == 1) {
[000A] (5D)   if (localvar4) {
[0010] (C9)     kernelSetFunctions.setSaveSound([0])
[001A] (**)   }
[001A] (6A)   freezeUnfreeze(127)
[001E] (9C)   roomOps.saveLoadRoom(1,26)
[0026] (43)   bitvar8 = 1
[002C] (6C)   breakHere()
[002D] (5D)   if (VAR_GAME_LOADED == 203) {
[0037] (43)     bitvar8 = 0
[003D] (43)     VAR_MAINMENU_KEY = 319
[0043] (43)     var172 = 1
[0049] (6A)     freezeUnfreeze(0)
[004D] (C9)     kernelSetFunctions.setSaveSound([1])
[0057] (7C)     stopScript(0)
[005B] (73)   } else {
[005E] (43)     VAR_MAINMENU_KEY = 0
[0064] (43)     var172 = 0
[006A] (5D)     if (localvar0 != 0) {
[0074] (7B)       loadRoom(localvar0)
[0078] (73)     } else {
[007B] (43)       var174 = VAR_VERB_SCRIPT
[0081] (7C)       stopScript(var175)
[0085] (43)       var176 = var175
[008B] (43)       VAR_VERB_SCRIPT = localvar2
[0091] (43)       var175 = localvar3
[0097] (5D)       if (VAR_VERB_SCRIPT != 48) {
[00A1] (43)         bitvar6 = 0
[00A7] (73)       } else {
[00AA] (43)         bitvar6 = 1
[00B0] (**)       }
[00B0] (5E)       startScript(0,var175,[])
[00BA] (**)     }
[00BA] (**)   }
[00BA] (73) } else {
[00BD] (43)   bitvar8 = 0
[00C3] (9C)   roomOps.saveLoadRoom(2,26)
[00CB] (6C)   breakHere()
[00CC] (**) }
[00CC] (66) stopObjectCodeB()
END

// Script 25: Lose Inventory
[0000] (6C) breakHere()
[0001] (68) beginCutscene([2])
[0008] (43) bitvar36 = 1
[000E] (5F) startScriptQuick(17,[2,1010])
[001B] (BA) talkActor("Hey, what happened to my carefully-collected box of useless junk?",2)
[0061] (A9) wait.waitForMessage()
[0063] (67) endCutscene()
[0064] (66) stopObjectCodeB()
END

// Script 26
[0000] (0C) dup[1] = var224
[0004] (5D) if (dup[1] == 3) {
[000B] (5E)   startScript(0,27,[])
[0016] (7C)   stopScript(0)
[001A] (73)   /* jump 1e; */
[001D] (**) }
[001D] (66) stopObjectCodeB()
END

// Script 27: Talk to Max
[0000] (5D) if (getActorRoom(3) != VAR_ROOM) {
[000B] (7C)   stopScript(0)
[000F] (**) }
[000F] (68) beginCutscene([2])
[0016] (43) bitvar2 = 1
[001C] (6C) breakHere()
[001D] (5D) unless (bitvar3) jump 1c
[0023] (5D) if (!localvar0) {
[002A] (7D)   walkActorToObj(3,2,55)
[0034] (A9)   wait.waitForActor(-7,3)
[003B] (81)   faceActor(2,3)
[0042] (CA)   delayFrames(2)
[0046] (81)   faceActor(3,2)
[004D] (CA)   delayFrames(2)
[0051] (**) }
[0051] (67) endCutscene()
[0052] (5E) startScript(0,9,[])
[005C] (5E) startScript(0,15,[1])
[0069] (5E) startScript(0,14,[])
[0073] (43) var171 = 0
[0079] (43) var169 = getRandomNumber(1)
[0080] (6C) breakHere()
[0081] (5D) unless (var171) jump 79
[0087] (0C) dup[1] = var171
[008B] (5D) if (dup[1] == 999) {
[0092] (BA)   talkActor("Never mind.",2)
[00A3] (A9)   wait.waitForMessage()
[00A5] (73)   jump 10af
[00A8] (5D) } else if (dup[1] == 998) {
[00B3] (0C)   dup[3] = getRandomNumberRange(1,3)
[00BC] (5D)   if (dup[3] == 1) {
[00C3] (BA)     talkActor("Hey, Max!",2)
[00D2] (5D)   } else if (dup[3] == 2) {
[00DD] (BA)     talkActor("Hey, lil' buddy!",2)
[00F3] (5D)   } else if (dup[3] == 3) {
[00FE] (BA)     talkActor("Hey, Sam!" + wait() + "I mean, Max!",2)
[011B] (73)     /* jump 11f; */
[011E] (**)   }
[011E] (A9)   wait.waitForMessage()
[0121] (BA)   talkActor("What?",3)
[012B] (5D) } else if (dup[3] == 1001) {
[0136] (BA)   talkActor("I'm filled with disgust and an odd sense of foreboding.",2)
[0173] (A9)   wait.waitForMessage()
[0175] (BA)   talkActor("And?",3)
[017E] (5D) } else if (dup[3] == 1000) {
[0189] (BA)   talkActor("I'm angry as all get out.",2)
[01A8] (A9)   wait.waitForMessage()
[01AA] (BA)   talkActor("And?",3)
[01B3] (5D) } else if (dup[3] == 997) {
[01BE] (BA)   talkActor("Are you as confused as I am?",2)
[01E0] (A9)   wait.waitForMessage()
[01E2] (BA)   talkActor("Moreso.",3)
[01EE] (73)   /* jump 1f2; */
[01F1] (**) }
[01F1] (A9) wait.waitForMessage()
[01F4] (5E) startScript(0,15,[var188])
[0201] (43) var301 = 4
[0207] (5D) while (var301 <= var196) {
[0211] (47)   array195[var301] = 0
[021A] (4F)   var301++
[021D] (**) }
[0220] (5E) startScript(0,11,[])
[022A] (43) var196 = 3
[0230] (5E) startScript(0,14,[])
[023A] (43) var171 = 0
[0240] (43) var169 = getRandomNumber(1)
[0247] (6C) breakHere()
[0248] (5D) unless (var171) jump 240
[024E] (0C) dup[9] = var171
[0252] (5D) if (dup[9] == 999) {
[0259] (BA)   talkActor("Well, that's all.",2)
[0270] (A9)   wait.waitForMessage()
[0272] (73)   jump 10af
[0275] (5D) } else if (dup[9] == 998) {
[0280] (BA)   talkActor("I'm excited!",2)
[0292] (A9)   wait.waitForMessage()
[0294] (BA)   talkActor("Who isn't?",3)
[02A3] (5D) } else if (dup[9] == 1001) {
[02AE] (5E)   startScript(0,28,[])
[02B9] (6C)   breakHere()
[02BA] (5D)   unless (!isScriptRunning(28)) jump 2b9
[02C2] (5D) } else if (dup[9] == 1000) {
[02CD] (BA)   talkActor("I'm mad as hell.",2)
[02E3] (A9)   wait.waitForMessage()
[02E5] (BA)   talkActor("Neat.",3)
[02EF] (5D) } else if (dup[9] == 997) {
[02FA] (BA)   talkActor("What should we do now?",2)
[0316] (A9)   wait.waitForMessage()
[0318] (0C)   dup[14] = var198
[031C] (5D)   if (dup[14] == 0) {
[0323] (BA)     talkActor("I'd like to spend the rest of the day harassing pigeons," + wait() + "but we should probably meet the Commissioner's contact.",3)
[039A] (5D)   } else if (dup[14] == 1) {
[03A5] (BA)     talkActor("It'll probably be a big mistake, but let's go to the carnival.",3)
[03E9] (5D)   } else if (dup[14] == 2) {
[03F4] (BA)     talkActor("Let's find the weirdos in charge of this place.",3)
[0429] (5D)   } else if (dup[14] == 3) {
[0434] (BA)     talkActor("Let's find Bruno and Trixie and collect a fat reward.",3)
[046F] (5D)   } else if (dup[14] == 4) {
[047A] (BA)     talkActor("My rabbity senses tell me that we should go to Bumpusville.",3)
[04BB] (5D)   } else if (dup[14] == 5) {
[04C6] (BA)     talkActor("We must free Bruno and Trixie from Conroy's oppressive shackles, so we can return them to their rightful oppressive shackles.",3)
[0549] (5D)   } else if (dup[14] == 6) {
[0554] (BA)     talkActor("I say we go to that bigfoot party and crash it like Skylab.",3)
[0595] (5D)   } else if (dup[14] == 7) {
[05A0] (BA)     talkActor("Maybe we should work on our bigfoot disguise.",3)
[05D3] (5D)   } else if (dup[14] == 8) {
[05DE] (BA)     talkActor("I thought we were doing one of those scavenger hunt deals.",3)
[061E] (73)   } else {
[0621] (BA)     talkActor("How should I know?",3)
[0639] (**)   }
[0639] (5D) } else if (dup[14] == 1012) {
[0644] (BA)   talkActor("What do you think of this handheld video game?",2)
[0678] (A9)   wait.waitForMessage()
[067A] (BA)   talkActor("I think it's a fiendish device that's secretly controlling our minds.",3)
[06C4] (A9)   wait.waitForMessage()
[06C6] (BA)   talkActor("Probably, but it's a pretty color.",2)
[06ED] (A9)   wait.waitForMessage()
[06EF] (BA)   talkActor("Agreed.",3)
[06FB] (5D) } else if (dup[14] == 1014) {
[0706] (BA)   talkActor("What do you think we should do with this flip book?",2)
[073F] (A9)   wait.waitForMessage()
[0741] (BA)   talkActor("I say we go down to the scummy side of town and give a bunch of hoods some paper cuts.",3)
[079C] (5D) } else if (dup[14] == 1013) {
[07A7] (BA)   talkActor("Want to do some painting, Max?",2)
[07CB] (A9)   wait.waitForMessage()
[07CD] (BA)   talkActor("You know us lagomorphs are color-blind, Sam.",3)
[07FE] (A9)   wait.waitForMessage()
[0800] (BA)   talkActor("That's weird, so am I^",2)
[081B] (5D) } else if (dup[14] == 1018) {
[0826] (BA)   talkActor("Why is this game called `Carbomb,` anyway?",2)
[0856] (A9)   wait.waitForMessage()
[0858] (BA)   talkActor("To avoid getting the pants sued off us.",3)
[0884] (A9)   wait.waitForMessage()
[0886] (BA)   talkActor("But you don't wear any pants.",2)
[08A8] (A9)   wait.waitForMessage()
[08AA] (BA)   talkActor("Don't remind me.",3)
[08BF] (5D) } else if (dup[14] == 1071) {
[08CA] (BA)   talkActor("What do you think we should do with these paper dolls?",2)
[0906] (A9)   wait.waitForMessage()
[0908] (BA)   talkActor("I say we go down to the scummy side of town and give a bunch of hoods some paper cuts.",3)
[0963] (5D) } else if (dup[14] == 1008) {
[096E] (BA)   talkActor("You're looking hale and hearty, lil' buddy.",2)
[099F] (A9)   wait.waitForMessage()
[09A1] (BA)   talkActor("I'm a coffee achiever, Sam.",3)
[09C1] (5D) } else if (dup[14] == 1010) {
[09CC] (BA)   talkActor("I wish I knew what happened to all that cool stuff I'd collected.",2)
[0A13] (A9)   wait.waitForMessage()
[0A15] (BA)   talkActor("Maybe it went to inventory heaven.",3)
[0A3C] (A9)   wait.waitForMessage()
[0A3E] (BA)   talkActor("That's the stupidest thing I've ever heard, Max.",2)
[0A73] (5D) } else if (dup[14] == 1076) {
[0A7E] (BA)   talkActor("What do you think that swirly totem pole means?",2)
[0AB3] (A9)   wait.waitForMessage()
[0AB5] (BA)   talkActor("I think it represents a primordial washing machine.",3)
[0AED] (5D) } else if (dup[14] == 1077) {
[0AF8] (BA)   talkActor("I'm not sure what to make of that toothy totem pole.",2)
[0B32] (A9)   wait.waitForMessage()
[0B34] (BA)   talkActor("I think it's a graven idol for tooth fairy worshippers.",3)
[0B70] (5D) } else if (dup[14] == 1078) {
[0B7B] (BA)   talkActor("That guy in the campfire totem pole could be just about anybody.",2)
[0BC1] (A9)   wait.waitForMessage()
[0BC3] (BA)   talkActor("Maybe it's Alan Ludden, the late host of `Password!`",3)
[0BFC] (5D) } else if (dup[14] == 1079) {
[0C07] (BA)   talkActor("That two-headed totem pole is a mystery to me.",2)
[0C3B] (A9)   wait.waitForMessage()
[0C3D] (BA)   talkActor("I think it's the Kushmans.",3)
[0C5C] (A9)   wait.waitForMessage()
[0C5E] (BA)   talkActor("Nah.  Neither one of them is bald.",2)
[0C85] (A9)   wait.waitForMessage()
[0C87] (BA)   talkActor("Maybe it's their wives.",2)
[0CA3] (5D) } else if (dup[14] == 1025) {
[0CAE] (BA)   talkActor("I wonder where Bruno is.",2)
[0CCC] (A9)   wait.waitForMessage()
[0CCE] (0C)   dup[35] = var198
[0CD2] (5D)   if (dup[35] == 5) {
[0CD9] (BA)     talkActor("He's trapped in Conroy's menagerie, dufus.",3)
[0D09] (5D)   } else if (dup[35] == 6) {
[0D14] (BA)     talkActor("I'd bet your life's savings that he's at the bigfoot party at the Savage Jungle Inn.",3)
[0D6E] (5D)   } else if (dup[35] == 7) {
[0D79] (73)     jump d15
[0D7D] (5D)   } else if (dup[35] == 8) {
[0D88] (73)   } else {
[0D8C] (BA)     talkActor("I'm still trying to figure out where I am, Sam.",3)
[0DC1] (**)   }
[0DC1] (5D) } else if (dup[35] == 1062) {
[0DCC] (BA)   talkActor("I wonder where Trixie is.",2)
[0DEB] (A9)   wait.waitForMessage()
[0DED] (5D)   if (!bitvar157) {
[0DF4] (BA)     talkActor("I shudder to think of the indignities she's suffering at the hands of that brute, Bruno.",3)
[0E51] (73)   } else {
[0E54] (BA)     talkActor("I shudder to think of the gross, kissy-poo noises she's making with her boyfriend, Bruno.",3)
[0EB2] (**)   }
[0EB2] (5D) } else if (dup[35] == 1061) {
[0EBD] (0C)   dup[41] = var198
[0EC2] (5D)   if (dup[41] == 8) {
[0EC9] (BA)     talkActor("Do you think it was a good idea to leave Conroy and Lee-Harvey in the freezer like that?",2)
[0F27] (A9)     wait.waitForMessage()
[0F29] (BA)     talkActor("They'll be fine, as long as we put in a fresh box of baking soda every now and then.",3)
[0F82] (5D)   } else if (dup[41] == 5) {
[0F8D] (BA)     talkActor("That Conroy Bumpus is one sick puppy.",2)
[0FB8] (A9)     wait.waitForMessage()
[0FBA] (BA)     talkActor("And yet, there's something in his music that speaks to the brutally sadistic inner child in all of us.",3)
[1025] (73)   } else {
[1028] (BA)     talkActor("I'm concerned about this Conroy Bumpus character.",2)
[105F] (A9)     wait.waitForMessage()
[1061] (BA)     talkActor("Don't worry, Sam.  We'll mop up the floor with his cheap toupee.",3)
[10A6] (**)   }
[10A6] (73)   /* jump 10aa; */
[10A9] (**) }
[10A9] (A9) wait.waitForMessage()
[10AC] (73) jump 201
[10AF] (5E) startScript(0,10,[])
[10B9] (43) bitvar2 = 0
[10BF] (66) stopObjectCodeB()
END

// Script 28: Tell Joke
[0000] (43) localvar0 = getRandomNumberRange(var198,(3 * (var198 + 1)))
[0012] (0C) dup[1] = localvar0
[0016] (5D) if (dup[1] == 0) {
[001D] (BA)   talkActor("I've got something in my eye.",2)
[0040] (A9)   wait.waitForMessage()
[0042] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0081] (5D) } else if (dup[1] == 1) {
[008C] (BA)   talkActor("I'm thinking of a number between one and ten, and I don't know why.",2)
[00D5] (A9)   wait.waitForMessage()
[00D7] (BA)   talkActor("Me too.",3)
[00E3] (5D) } else if (dup[1] == 2) {
[00EE] (BA)   talkActor("What's the good word, lil buddy?",2)
[0114] (A9)   wait.waitForMessage()
[0116] (43)   localvar1 = getRandomNumber(4)
[011D] (0C)   dup[4] = localvar1
[0121] (5D)   if (dup[4] == 0) {
[0128] (BA)     talkActor("`Creosote`.",3)
[0139] (5D)   } else if (dup[4] == 1) {
[0144] (BA)     talkActor("`Lumbar`",3)
[0152] (5D)   } else if (dup[4] == 2) {
[015D] (BA)     talkActor("`Triumvirate`",3)
[0170] (5D)   } else if (dup[4] == 3) {
[017B] (BA)     talkActor("`Gleep`",3)
[0188] (5D)   } else if (dup[4] == 4) {
[0193] (BA)     talkActor("`Synergy`",3)
[01A2] (73)     /* jump 1a6; */
[01A5] (**)   }
[01A5] (5D) } else if (dup[4] == 3) {
[01B1] (BA)   talkActor("My mind is a swirling miasma of scintillating thoughts and turgid ideas.",2)
[01FF] (A9)   wait.waitForMessage()
[0201] (BA)   talkActor("Me too.",3)
[020D] (5D) } else if (dup[4] == 4) {
[0218] (BA)   talkActor("This mission's giving me the heebie-jeebies.",2)
[024A] (A9)   wait.waitForMessage()
[024C] (BA)   talkActor("You can get a lotion for that, Sam.",3)
[0274] (5D) } else if (dup[4] == 5) {
[027F] (BA)   talkActor("I didn't always want to be a cop, you know.",2)
[02B0] (A9)   wait.waitForMessage()
[02B2] (BA)   talkActor("Me neither; I wanted to be a Hun.",3)
[02D8] (5D) } else if (dup[4] == 6) {
[02E3] (BA)   talkActor("The weed of crime bears bitter fruit.",2)
[030E] (A9)   wait.waitForMessage()
[0310] (BA)   talkActor("But it makes a pretty good milkshake.",3)
[033A] (5D) } else if (dup[4] == 7) {
[0345] (BA)   talkActor("I miss my gun.",2)
[0359] (A9)   wait.waitForMessage()
[035B] (BA)   talkActor("Me too.  I wish we hadn't left them at the cleaners.",3)
[0394] (5D) } else if (dup[4] == 8) {
[039F] (BA)   talkActor("I think I've got something in my eye.",2)
[03CA] (A9)   wait.waitForMessage()
[03CC] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[040B] (5D) } else if (dup[4] == 9) {
[0416] (BA)   talkActor("How come I don't get any inventory?",3)
[043F] (A9)   wait.waitForMessage()
[0441] (BA)   talkActor("Where would you keep it?",2)
[045E] (A9)   wait.waitForMessage()
[0460] (BA)   talkActor("That's none of your damn business, Sam.",3)
[048C] (5D) } else if (dup[4] == 10) {
[0497] (BA)   talkActor("Computer games are your best entertainment dollar value!",2)
[04D5] (A9)   wait.waitForMessage()
[04D7] (BA)   talkActor("Go buy some computer games right now.  Especially the funny LucasArts ones.",3)
[0527] (5D) } else if (dup[4] == 11) {
[0532] (BA)   talkActor("I think I've got something in my eye.",2)
[055D] (A9)   wait.waitForMessage()
[055F] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[059E] (5D) } else if (dup[4] == 12) {
[05A9] (BA)   talkActor("I think I've got something in my eye.",2)
[05D4] (A9)   wait.waitForMessage()
[05D6] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0615] (5D) } else if (dup[4] == 13) {
[0620] (BA)   talkActor("I think I've got something in my eye.",2)
[064B] (A9)   wait.waitForMessage()
[064D] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[068C] (5D) } else if (dup[4] == 14) {
[0697] (BA)   talkActor("I think I've got something in my eye.",2)
[06C2] (A9)   wait.waitForMessage()
[06C4] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0703] (5D) } else if (dup[4] == 15) {
[070E] (BA)   talkActor("I think I've got something in my eye.",2)
[0739] (A9)   wait.waitForMessage()
[073B] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[077A] (5D) } else if (dup[4] == 16) {
[0785] (BA)   talkActor("I think I've got something in my eye.",2)
[07B0] (A9)   wait.waitForMessage()
[07B2] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[07F1] (5D) } else if (dup[4] == 17) {
[07FC] (BA)   talkActor("I think I've got something in my eye.",2)
[0827] (A9)   wait.waitForMessage()
[0829] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0868] (5D) } else if (dup[4] == 18) {
[0873] (BA)   talkActor("I think I've got something in my eye.",2)
[089E] (A9)   wait.waitForMessage()
[08A0] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[08DF] (5D) } else if (dup[4] == 19) {
[08EA] (BA)   talkActor("I think I've got something in my eye.",2)
[0915] (A9)   wait.waitForMessage()
[0917] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0956] (5D) } else if (dup[4] == 20) {
[0961] (BA)   talkActor("I think I've got something in my eye.",2)
[098C] (A9)   wait.waitForMessage()
[098E] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[09CD] (5D) } else if (dup[4] == 21) {
[09D8] (BA)   talkActor("I think I've got something in my eye.",2)
[0A03] (A9)   wait.waitForMessage()
[0A05] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0A44] (5D) } else if (dup[4] == 22) {
[0A4F] (BA)   talkActor("I think I've got something in my eye.",2)
[0A7A] (A9)   wait.waitForMessage()
[0A7C] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0ABB] (5D) } else if (dup[4] == 23) {
[0AC6] (BA)   talkActor("I think I've got something in my eye.",2)
[0AF1] (A9)   wait.waitForMessage()
[0AF3] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0B32] (5D) } else if (dup[4] == 24) {
[0B3D] (BA)   talkActor("I think I've got something in my eye.",2)
[0B68] (A9)   wait.waitForMessage()
[0B6A] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0BA9] (5D) } else if (dup[4] == 25) {
[0BB4] (BA)   talkActor("I think I've got something in my eye.",2)
[0BDF] (A9)   wait.waitForMessage()
[0BE1] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0C20] (5D) } else if (dup[4] == 26) {
[0C2B] (BA)   talkActor("I think I've got something in my eye.",2)
[0C56] (A9)   wait.waitForMessage()
[0C58] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0C97] (5D) } else if (dup[4] == 27) {
[0CA2] (BA)   talkActor("I think I've got something in my eye.",2)
[0CCD] (A9)   wait.waitForMessage()
[0CCF] (BA)   talkActor("Try digging it out with a fork.  That always works for me.",3)
[0D0E] (73)   /* jump d12; */
[0D11] (**) }
[0D11] (66) stopObjectCodeB()
END

// Script 29
[0000] (43) bitvar2 = 0
[0006] (43) bitvar3 = 0
[000C] (5E) startScript(0,23,[2,3])
[001C] (6C) breakHere()
[001D] (5D) unless (bitvar2) jump 1c
[0023] (7C) stopScript(23)
[0027] (82) animateActor(3,255)
[002E] (43) bitvar3 = 1
[0034] (6C) breakHere()
[0035] (5D) unless (!bitvar2) jump 34
[003C] (73) jump 6
[003F] (66) stopObjectCodeB()
END

// Script 30
[0000] (43) localvar2 = 1
[0006] (5D) while (localvar2 <= (60 * var132)) {
[0014] (6C)   breakHere()
[0015] (B1)   delaySeconds(1)
[0019] (5D)   if ((VAR_VIRT_MOUSE_X != localvar0) || (VAR_VIRT_MOUSE_Y != localvar1)) {
[002B] (43)     localvar0 = VAR_VIRT_MOUSE_X
[0031] (43)     localvar1 = VAR_VIRT_MOUSE_Y
[0037] (73)     jump 0
[003A] (**)   }
[003A] (5D)   if (bitvar1) {
[0040] (43)     bitvar1 = 0
[0046] (73)     jump 0
[0049] (**)   }
[0049] (4F)   localvar2++
[004C] (**) }
[004F] (5D) if (((!var133 && !var136) && !var135) && !var134) {
[0065] (73)   jump 0
[0068] (**) }
[0068] (0C) dup[1] = getRandomNumber(3)
[006D] (5D) if (dup[1] == 0) {
[0074] (73)   jump 90
[0078] (73) } else {
[007B] (5D)   if ((!var133 && !var136) && !var135) {
[008D] (73)     jump 75
[0090] (**)   }
[0090] (5F)   startScriptQuick(24,[0,1,42,43])
[00A3] (**) }
[00A3] (73) jump 0
[00A6] (66) stopObjectCodeB()
END

// Script 31
[0000] (43) var180 = 0
[0006] (43) var181 = 0
[000C] (66) stopObjectCodeB()
END

// Script 32
[0000] (5D) if (var181 == localvar0) {
[000A] (5F)   startScriptQuick(58,[localvar1,localvar0])
[0017] (**) }
[0017] (43) var180 = 0
[001D] (43) var181 = 0
[0023] (71) setOwner(localvar1,0)
[002A] (5D) if (VAR_VERB_SCRIPT == 60) {
[0034] (43)   var177 = 875
[003A] (5F)   startScriptQuick(53,[])
[0041] (5F)   startScriptQuick(59,[])
[0048] (68)   beginCutscene([2])
[004F] (A9)   wait.waitForMessage()
[0051] (70)   setState(var210,0)
[0058] (6E)   setClass(var210,[160])
[0062] (67)   endCutscene()
[0063] (73) } else {
[0066] (43)   var177 = 889
[006C] (5F)   startScriptQuick(52,[])
[0073] (**) }
[0073] (6B) cursorCommand.setCursorImg(var177,92)
[007B] (66) stopObjectCodeB()
END

// Script 33
[0000] (43) VAR_GAME_LOADED = 0
[0006] (43) var173 = var177
[000C] (43) var177 = 874
[0012] (6B) cursorCommand.setCursorImg(var177,92)
[001A] (66) stopObjectCodeB()
END

// Script 34
[0000] (43) var177 = var173
[0006] (43) VAR_ROOM_FLAG = 1
[000C] (5D) if (var177 >= 995) {
[0016] (6B)   cursorCommand.setCursorImg(var177,93)
[001E] (6B)   cursorCommand.makeCursorColorTransparent(180)
[0023] (6B)   cursorCommand.makeCursorColorTransparent(176)
[0028] (6B)   cursorCommand.makeCursorColorTransparent(178)
[002D] (6B)   cursorCommand.makeCursorColorTransparent(0)
[0032] (6B)   cursorCommand.makeCursorColorTransparent(6)
[0037] (73) } else {
[003A] (6B)   cursorCommand.setCursorImg(var177,92)
[0042] (**) }
[0042] (66) stopObjectCodeB()
END

// Script 35
[0000] (82) animateActor(localvar1,255)
[0007] (82) animateActor(localvar1,1)
[000E] (CA) delayFrames(2)
[0012] (81) faceActor(localvar1,localvar0)
[0019] (CA) delayFrames(4)
[001D] (5D) unless (getActorMoving(localvar1)) jump 12
[0024] (66) stopObjectCodeB()
END

// Script 36
[0000] (7A) setCameraAt(VAR_CAMERA_POS_X)
[0004] (A9) wait.waitForCamera()
[0006] (43) localvar7 = 1
[000C] (5D) while (localvar7 <= 19) {
[0016] (7F)   putActorInXY(localvar7,0,0,0)
[0023] (4F)   localvar7++
[0026] (**) }
[0029] (6C) breakHere()
[002A] (BC) dimArray.byte(var292,5)
[0031] (BC) dimArray.byte(var293,5)
[0038] (43) localvar9 = (VAR_CAMERA_POS_X - 160)
[0042] (43) localvar0 = localvar9
[0048] (43) localvar3 = 0
[004E] (43) localvar2 = (320 + localvar9)
[0058] (43) localvar5 = 199
[005E] (43) localvar6 = getRandomNumber((var137 - 1))
[0069] (43) localvar8 = 1
[006F] (43) localvar7 = 0
[0075] (5D) while (localvar7 <= localvar6) {
[007F] (47)   array292[localvar7] = 0
[0088] (47)   array293[localvar7] = 0
[0091] (43)   localvar1 = (((localvar2 - localvar0) / 2) + localvar0)
[00A3] (5D)   if ((localvar1 - localvar0) == (localvar2 - localvar1)) {
[00B5] (47)     array292[localvar7] = 1
[00BE] (**)   }
[00BE] (43)   localvar4 = (((localvar5 - localvar3) / 2) + localvar3)
[00D0] (5D)   if ((localvar4 - localvar3) == (localvar5 - localvar4)) {
[00E2] (47)     array293[localvar7] = 1
[00EB] (**)   }
[00EB] (5D)   if ((localvar5 - localvar3) < (localvar2 - localvar0)) {
[00FD] (43)     localvar10 = (localvar5 - localvar3)
[0107] (43)     localvar11 = 0
[010D] (73)   } else {
[0110] (43)     localvar10 = (localvar2 - localvar0)
[011A] (43)     localvar11 = 1
[0120] (**)   }
[0120] (43)   localvar12 = getRandomNumberRange(0,7)
[012A] (5D)   if (localvar7 > 0) {
[0134] (5D)     if ((localvar12 > 3) && (array201[(localvar7 - 1)] == localvar12)) {
[014D] (73)       jump 120
[0150] (**)     }
[0150] (**)   }
[0150] (5D)   if ((localvar7 == 0) && (array201[localvar7] == localvar12)) {
[0165] (73)     jump 120
[0168] (**)   }
[0168] (47)   array201[localvar7] = localvar12
[0171] (0C)   dup[1] = array201[localvar7]
[0178] (5D)   if (dup[1] == 0) {
[017F] (5E)     startScript(0,37,[localvar0,localvar2,localvar3,(localvar4 - array293[localvar7]),-1,1,localvar5,(localvar3 - array293[localvar7]),localvar8])
[01B3] (6C)     breakHere()
[01B4] (5D)     unless (!isScriptRunning(37)) jump 1b3
[01BC] (43)     localvar3 = (localvar4 - (array293[localvar7] - 1))
[01CD] (5D)   } else if (dup[1] == 1) {
[01D8] (5E)     startScript(0,37,[localvar0,localvar2,(localvar4 + 1),localvar5,-1,-1,(localvar4 - array293[localvar7]),(localvar4 + 1),localvar8])
[020D] (6C)     breakHere()
[020E] (5D)     unless (!isScriptRunning(37)) jump 20d
[0216] (43)     localvar5 = localvar4
[021C] (5D)   } else if (dup[1] == 2) {
[0227] (5E)     startScript(0,37,[localvar0,(localvar1 - array292[localvar7]),localvar3,localvar5,localvar2,(localvar0 - array292[localvar7]),-1,1,localvar8])
[025B] (6C)     breakHere()
[025C] (5D)     unless (!isScriptRunning(37)) jump 25b
[0264] (43)     localvar0 = (localvar1 - (array292[localvar7] - 1))
[0275] (5D)   } else if (dup[1] == 3) {
[0280] (5E)     startScript(0,37,[(localvar1 + 1),localvar2,localvar3,localvar5,(localvar1 - array292[localvar7]),(localvar1 + 1),-1,-1,localvar8])
[02B5] (6C)     breakHere()
[02B6] (5D)     unless (!isScriptRunning(37)) jump 2b5
[02BE] (43)     localvar2 = localvar1
[02C4] (5D)   } else if (dup[1] == 4) {
[02CF] (5E)     startScript(0,38,[localvar0,localvar3,1,1,localvar10,localvar11])
[02EC] (6C)     breakHere()
[02ED] (5D)     unless (!isScriptRunning(38)) jump 2ec
[02F5] (5D)   } else if (dup[1] == 5) {
[0300] (5E)     startScript(0,38,[localvar0,localvar5,1,-1,localvar10,localvar11])
[031D] (6C)     breakHere()
[031E] (5D)     unless (!isScriptRunning(38)) jump 31d
[0326] (5D)   } else if (dup[1] == 6) {
[0331] (5E)     startScript(0,38,[localvar2,localvar3,-1,1,localvar10,localvar11])
[034E] (6C)     breakHere()
[034F] (5D)     unless (!isScriptRunning(38)) jump 34e
[0357] (5D)   } else if (dup[1] == 7) {
[0362] (5E)     startScript(0,38,[localvar2,localvar5,-1,-1,localvar10,localvar11])
[037F] (6C)     breakHere()
[0380] (5D)     unless (!isScriptRunning(38)) jump 37f
[0388] (73)     /* jump 38c; */
[038B] (**)   }
[038B] (CA)   delayFrames(20)
[0390] (4F)   localvar7++
[0393] (**) }
[0396] (43) localvar8 = 0
[039C] (43) localvar7 = localvar6
[03A2] (5D) while (localvar7 >= 0) {
[03AC] (43)   localvar13 = 0
[03B2] (43)   localvar14 = 0
[03B8] (5D)   if ((localvar5 - localvar3) < (localvar2 - localvar0)) {
[03CA] (43)     localvar10 = (localvar5 - localvar3)
[03D4] (43)     localvar11 = 0
[03DA] (73)   } else {
[03DD] (43)     localvar10 = (localvar2 - localvar0)
[03E7] (43)     localvar11 = 1
[03ED] (**)   }
[03ED] (0C)   dup[9] = array201[localvar7]
[03F4] (5D)   if (dup[9] == 1) {
[03FB] (43)     localvar5 = ((localvar5 + (localvar5 - localvar3)) - (array293[localvar7] - 1))
[0415] (43)     localvar1 = ((((localvar2 - localvar0) / 2) + localvar0) + 0)
[042B] (43)     localvar4 = ((((localvar5 - localvar3) / 2) + localvar3) + 0)
[0441] (5E)     startScript(0,37,[localvar0,localvar2,localvar3,(localvar4 - array293[localvar7]),-1,1,localvar5,(localvar3 - array293[localvar7]),localvar8])
[0474] (6C)     breakHere()
[0475] (5D)     unless (!isScriptRunning(37)) jump 474
[047D] (5D)   } else if (dup[9] == 0) {
[0488] (43)     localvar3 = ((localvar3 - (localvar5 - localvar3)) + (array293[localvar7] - 1))
[04A2] (43)     localvar1 = ((((localvar2 - localvar0) / 2) + localvar0) + 0)
[04B8] (43)     localvar4 = ((((localvar5 - localvar3) / 2) + localvar3) + 0)
[04CE] (5E)     startScript(0,37,[localvar0,localvar2,(localvar4 + 1),localvar5,-1,-1,(localvar4 - array293[localvar7]),(localvar4 + 1),localvar8])
[0502] (6C)     breakHere()
[0503] (5D)     unless (!isScriptRunning(37)) jump 502
[050B] (5D)   } else if (dup[9] == 3) {
[0516] (43)     localvar2 = ((localvar2 + (localvar2 - localvar0)) - (array292[localvar7] - 1))
[0530] (43)     localvar1 = ((((localvar2 - localvar0) / 2) + localvar0) + 0)
[0546] (43)     localvar4 = ((((localvar5 - localvar3) / 2) + localvar3) + 0)
[055C] (5E)     startScript(0,37,[localvar0,(localvar1 - array292[localvar7]),localvar3,localvar5,localvar2,(localvar0 - array292[localvar7]),-1,1,localvar8])
[058F] (6C)     breakHere()
[0590] (5D)     unless (!isScriptRunning(37)) jump 58f
[0598] (5D)   } else if (dup[9] == 2) {
[05A3] (43)     localvar0 = ((localvar0 - (localvar2 - localvar0)) + (array292[localvar7] - 1))
[05BD] (43)     localvar1 = ((((localvar2 - localvar0) / 2) + localvar0) + 0)
[05D3] (43)     localvar4 = ((((localvar5 - localvar3) / 2) + localvar3) + 0)
[05E9] (5E)     startScript(0,37,[(localvar1 + 1),localvar2,localvar3,localvar5,(localvar1 - array292[localvar7]),(localvar1 + 1),-1,-1,localvar8])
[061D] (6C)     breakHere()
[061E] (5D)     unless (!isScriptRunning(37)) jump 61d
[0626] (5D)   } else if (dup[9] == 4) {
[0631] (5D)     if (!localvar11) {
[0639] (5E)       startScript(0,38,[(localvar0 + localvar10),localvar5,-1,-1,localvar10,localvar11,1])
[065C] (73)     } else {
[065F] (5E)       startScript(0,38,[localvar2,(localvar3 + localvar10),-1,-1,localvar10,localvar11,1])
[0682] (**)     }
[0682] (6C)     breakHere()
[0683] (5D)     unless (!isScriptRunning(38)) jump 682
[068B] (5D)   } else if (dup[9] == 5) {
[0696] (5D)     if (!localvar11) {
[069E] (5E)       startScript(0,38,[(localvar0 + localvar10),localvar3,-1,1,localvar10,localvar11,1])
[06C1] (73)     } else {
[06C4] (5E)       startScript(0,38,[localvar2,(localvar5 - localvar10),-1,1,localvar10,localvar11,1])
[06E7] (**)     }
[06E7] (6C)     breakHere()
[06E8] (5D)     unless (!isScriptRunning(38)) jump 6e7
[06F0] (5D)   } else if (dup[9] == 6) {
[06FB] (5D)     if (!localvar11) {
[0703] (5E)       startScript(0,38,[(localvar2 - localvar10),localvar5,1,-1,localvar10,localvar11,1])
[0726] (73)     } else {
[0729] (5E)       startScript(0,38,[localvar0,(localvar3 + localvar10),1,-1,localvar10,localvar11,1])
[074C] (**)     }
[074C] (6C)     breakHere()
[074D] (5D)     unless (!isScriptRunning(38)) jump 74c
[0755] (5D)   } else if (dup[9] == 7) {
[0760] (5D)     if (!localvar11) {
[0768] (5E)       startScript(0,38,[(localvar2 - localvar10),localvar3,1,1,localvar10,localvar11,1])
[078B] (73)     } else {
[078E] (5E)       startScript(0,38,[localvar0,(localvar5 - localvar10),1,1,localvar10,localvar11,1])
[07B1] (**)     }
[07B1] (6C)     breakHere()
[07B2] (5D)     unless (!isScriptRunning(38)) jump 7b1
[07BA] (73)     /* jump 7be; */
[07BD] (**)   }
[07BD] (CA)   delayFrames(20)
[07C2] (57)   localvar7--
[07C5] (**) }
[07C8] (73) jump 42
[07CB] (66) stopObjectCodeB()
END

// Script 37
[0000] (43) localvar9 = localvar2
[0006] (5D) while (localvar9 <= localvar3) {
[0010] (43)   localvar15 = -2
[0016] (43)   localvar10 = localvar0
[001C] (5D)   while (localvar10 <= localvar1) {
[0026] (5D)     if (localvar4 >= 0) {
[0030] (43)       localvar11 = ((localvar4 - (localvar10 - localvar5)) + 0)
[0042] (73)     } else {
[0045] (43)       localvar11 = localvar10
[004B] (**)     }
[004B] (5D)     if (localvar6 >= 0) {
[0055] (43)       localvar12 = ((localvar6 - (localvar9 - localvar7)) + 0)
[0067] (73)     } else {
[006A] (43)       localvar12 = localvar9
[0070] (**)     }
[0070] (5D)     if ((localvar10 == localvar11) && (localvar9 == localvar12)) {
[0082] (73)     } else {
[0085] (43)       localvar13 = kernelGetFunctions.getPixel([localvar10,localvar9])
[0095] (5D)       if (localvar15 == -2) {
[009F] (43)         localvar15 = localvar11
[00A5] (43)         var300 = localvar11
[00AB] (43)         localvar14 = localvar13
[00B1] (**)       }
[00B1] (5D)       if ((localvar10 == localvar1) || (localvar13 != localvar14)) {
[00C3] (5D)         if (localvar14 != 0) {
[00CD] (A6)           drawBox((localvar15 - (VAR_CAMERA_POS_X - 160)),localvar12,(var300 - (VAR_CAMERA_POS_X - 160)),localvar12,localvar14)
[00ED] (**)         }
[00ED] (43)         localvar15 = localvar11
[00F3] (43)         localvar14 = localvar13
[00F9] (**)       }
[00F9] (43)       var300 = localvar11
[00FF] (5D)       if (localvar8) {
[0105] (5D)         if ((localvar10 != localvar11) || (localvar9 != localvar12)) {
[0117] (A6)           drawBox((localvar10 - (VAR_CAMERA_POS_X - 160)),localvar9,(localvar10 - (VAR_CAMERA_POS_X - 160)),localvar9,0)
[0137] (**)         }
[0137] (**)       }
[0137] (**)     }
[0137] (4F)     localvar10++
[013A] (**)   }
[013D] (6C)   breakHere()
[013E] (4F)   localvar9++
[0141] (**) }
[0144] (66) stopObjectCodeB()
END

// Script 38
[0000] (5D) if (localvar5) {
[0006] (43)   localvar11 = 0
[000C] (43)   localvar10 = localvar1
[0012] (43)   localvar7 = (localvar0 + (localvar2 * localvar4))
[0020] (43)   localvar9 = localvar0
[0026] (43)   localvar8 = (localvar1 + (localvar3 * localvar4))
[0034] (43)   localvar12 = 0
[003A] (43)   localvar15 = -2
[0040] (43)   localvar13 = kernelGetFunctions.getPixel([localvar9,localvar10])
[0050] (5D)   if (localvar15 == -2) {
[005A] (43)     localvar15 = localvar8
[0060] (43)     var300 = localvar8
[0066] (43)     localvar14 = localvar13
[006C] (**)   }
[006C] (4F)   localvar12++
[006F] (5D)   if ((localvar12 >= ((localvar4 - localvar11) - 0)) || (localvar13 != localvar14)) {
[0089] (5D)     if (localvar14 != 0) {
[0093] (A6)       drawBox((localvar7 - (VAR_CAMERA_POS_X - 160)),localvar15,(localvar7 - (VAR_CAMERA_POS_X - 160)),var300,localvar14)
[00B3] (**)     }
[00B3] (43)     localvar15 = localvar8
[00B9] (43)     localvar14 = localvar13
[00BF] (**)   }
[00BF] (43)   var300 = localvar8
[00C5] (5D)   if (!localvar6 && (localvar12 < (localvar4 - localvar11))) {
[00D8] (A6)     drawBox((localvar9 - (VAR_CAMERA_POS_X - 160)),localvar10,(localvar9 - (VAR_CAMERA_POS_X - 160)),localvar10,0)
[00F8] (**)   }
[00F8] (43)   localvar9 = (localvar9 + localvar2)
[0102] (43)   localvar8 = (localvar8 - localvar3)
[010C] (5D)   unless ((localvar12 >= (localvar4 - localvar11))) jump 40
[011A] (6C)   breakHere()
[011B] (4F)   localvar11++
[011E] (43)   localvar7 = (localvar7 - localvar2)
[0128] (43)   localvar10 = (localvar10 + localvar3)
[0132] (5D)   unless ((localvar11 >= localvar4)) jump 20
[013C] (73) } else {
[013F] (43)   localvar11 = 0
[0145] (43)   localvar9 = localvar0
[014B] (43)   localvar8 = (localvar1 + (localvar3 * localvar4))
[0159] (43)   localvar10 = localvar1
[015F] (43)   localvar7 = (localvar0 + (localvar2 * localvar4))
[016D] (43)   localvar12 = 0
[0173] (43)   localvar15 = -2
[0179] (43)   localvar13 = kernelGetFunctions.getPixel([localvar9,localvar10])
[0189] (5D)   if (localvar15 == -2) {
[0193] (43)     localvar15 = localvar7
[0199] (43)     var300 = localvar7
[019F] (43)     localvar14 = localvar13
[01A5] (**)   }
[01A5] (4F)   localvar12++
[01A8] (5D)   if ((localvar12 >= ((localvar4 - localvar11) - 0)) || (localvar13 != localvar14)) {
[01C2] (5D)     if (localvar14 != 0) {
[01CC] (A6)       drawBox((localvar15 - (VAR_CAMERA_POS_X - 160)),localvar8,(var300 - (VAR_CAMERA_POS_X - 160)),localvar8,localvar14)
[01EC] (**)     }
[01EC] (43)     localvar15 = localvar7
[01F2] (43)     localvar14 = localvar13
[01F8] (**)   }
[01F8] (43)   var300 = localvar7
[01FE] (5D)   if (!localvar6 && (localvar12 < (localvar4 - localvar11))) {
[0211] (A6)     drawBox((localvar9 - (VAR_CAMERA_POS_X - 160)),localvar10,(localvar9 - (VAR_CAMERA_POS_X - 160)),localvar10,0)
[0231] (**)   }
[0231] (43)   localvar10 = (localvar10 + localvar3)
[023B] (43)   localvar7 = (localvar7 - localvar2)
[0245] (5D)   unless ((localvar12 >= (localvar4 - localvar11))) jump 179
[0253] (6C)   breakHere()
[0254] (4F)   localvar11++
[0257] (43)   localvar8 = (localvar8 - localvar3)
[0261] (43)   localvar9 = (localvar9 + localvar2)
[026B] (5D)   unless ((localvar11 >= localvar4)) jump 159
[0275] (**) }
[0275] (66) stopObjectCodeB()
END

// Script 39
[0000] (43) localvar14 = var140
[0006] (43) localvar15 = (var140 * 2)
[0010] (7A) setCameraAt(VAR_CAMERA_POS_X)
[0014] (A9) wait.waitForCamera()
[0016] (43) localvar6 = 1
[001C] (5D) while (localvar6 <= 19) {
[0026] (7F)   putActorInXY(localvar6,0,0,0)
[0033] (4F)   localvar6++
[0036] (**) }
[0039] (6C) breakHere()
[003A] (43) localvar5 = (VAR_CAMERA_POS_X - 160)
[0044] (43) localvar8 = ((localvar5 / 4) - 4)
[0052] (43) localvar9 = (localvar8 + 82)
[005C] (BC) dimArray.int(var200,75)
[0063] (BC) dimArray.int(var199,75)
[006A] (43) localvar2 = (4 * getRandomNumberRange(localvar8,localvar9))
[0078] (43) localvar3 = getRandomNumberRange(((var140 / 2) + 1),((200 - (var140 / 2)) - 1))
[0096] (43) localvar0 = localvar3
[009C] (43) localvar1 = localvar3
[00A2] (43) localvar10 = 0
[00A8] (43) localvar6 = 0
[00AE] (5D) while (localvar6 <= 74) {
[00B8] (47)   array199[localvar6] = 0
[00C1] (47)   array200[localvar6] = 0
[00CA] (4F)   localvar6++
[00CD] (**) }
[00D0] (43) localvar6 = getRandomNumberRange(localvar10,(localvar10 + (var140 / 2)))
[00E2] (5D) if (localvar6 <= localvar14) {
[00EC] (47)   array200[localvar10] = 1
[00F5] (4F)   localvar1++
[00F8] (5D) } else if (localvar6 >= localvar15) {
[0105] (47)   array200[localvar10] = -1
[010E] (57)   localvar1--
[0111] (**) }
[0111] (43) localvar6 = getRandomNumberRange(localvar10,(localvar10 + (var140 / 2)))
[0123] (5D) if (localvar6 <= localvar14) {
[012D] (47)   array199[localvar10] = -1
[0136] (57)   localvar0--
[0139] (5D) } else if (localvar6 >= localvar15) {
[0146] (47)   array199[localvar10] = 1
[014F] (4F)   localvar0++
[0152] (**) }
[0152] (4F) localvar10++
[0155] (5D) unless ((localvar1 <= localvar0)) jump d0
[015F] (57) localvar10--
[0162] (43) localvar7 = (localvar2 - localvar5)
[016C] (43) localvar0 = localvar3
[0172] (43) localvar1 = localvar3
[0178] (43) localvar6 = 0
[017E] (5D) while (localvar6 <= localvar10) {
[0188] (5D)   if (localvar7 > 320) {
[0192] (73)     jump 6a
[0195] (**)   }
[0195] (43)   localvar1 = (localvar1 + array200[localvar6])
[01A2] (5D)   if (localvar1 > 200) {
[01AC] (43)     localvar1 = 199
[01B2] (**)   }
[01B2] (43)   localvar0 = (localvar0 + array199[localvar6])
[01BF] (5D)   if (localvar0 < 0) {
[01C9] (43)     localvar0 = 0
[01CF] (**)   }
[01CF] (5D)   if (localvar7 < 0) {
[01D9] (73)   } else {
[01DC] (43)     localvar11 = ((localvar1 - localvar0) + 1)
[01EA] (5D)     if (localvar11 <= 0) {
[01F4] (43)       localvar11 = 1
[01FA] (**)     }
[01FA] (43)     localvar12 = (localvar0 - 1)
[0204] (5D)     while (localvar12 >= 0) {
[020E] (43)       localvar4 = kernelGetFunctions.getPixel([(localvar7 + localvar5),localvar12])
[0222] (A6)       drawBox(localvar7,(localvar12 + localvar11),localvar7,(localvar12 + localvar11),localvar4)
[023A] (A6)       drawBox(localvar7,localvar12,localvar7,localvar12,0)
[024A] (57)       localvar12--
[024D] (**)     }
[0250] (6C)     breakHere()
[0251] (**)   }
[0251] (4F)   localvar7++
[0254] (4F)   localvar6++
[0257] (**) }
[025A] (6C) breakHere()
[025B] (73) jump 6a
[025E] (CA) delayFrames(getRandomNumberRange(15,30))
[0266] (66) stopObjectCodeB()
END

// Script 40
[0000] (7A) setCameraAt(VAR_CAMERA_POS_X)
[0004] (A9) wait.waitForCamera()
[0006] (43) localvar0 = (VAR_CAMERA_POS_X - 160)
[0010] (43) localvar6 = 1
[0016] (5D) while (localvar6 <= 19) {
[0020] (7F)   putActorInXY(localvar6,0,0,0)
[002D] (4F)   localvar6++
[0030] (**) }
[0033] (43) VAR_TIMER_NEXT = 1
[0039] (43) localvar10 = getRandomNumber(1)
[0040] (5D) if (localvar10) {
[0046] (43)   localvar1 = (getRandomNumber(159) * 2)
[0051] (43)   localvar6 = (localvar1 + localvar0)
[005B] (43)   localvar2 = getRandomNumber(199)
[0062] (43)   localvar5 = kernelGetFunctions.getPixel([localvar6,localvar2])
[0072] (73) } else {
[0075] (43)   localvar2 = (getRandomNumber(159) * 2)
[0080] (43)   localvar6 = (localvar2 + localvar0)
[008A] (43)   localvar1 = getRandomNumber(199)
[0091] (43)   localvar5 = kernelGetFunctions.getPixel([localvar6,localvar1])
[00A1] (**) }
[00A1] (43) localvar3 = 1
[00A7] (43) localvar11 = 0
[00AD] (43) localvar8 = getRandomNumberRange(1,1)
[00B7] (43) localvar9 = getRandomNumberRange(1,1)
[00C1] (5D) if (localvar10) {
[00C7] (A6)   drawBox(localvar1,(localvar2 + localvar11),(localvar1 + localvar3),(localvar2 + localvar11),localvar5)
[00E3] (73) } else {
[00E6] (A6)   drawBox((localvar2 + localvar11),localvar1,(localvar2 + localvar11),(localvar1 + localvar3),localvar5)
[0102] (**) }
[0102] (4F) localvar11++
[0105] (43) localvar7 = getRandomNumber(localvar11)
[010C] (5D) if (localvar7 < localvar8) {
[0116] (57)   localvar1--
[0119] (5D) } else if (getRandomNumber(1)) {
[0123] (4F)   localvar1++
[0126] (**) }
[0126] (43) localvar7 = getRandomNumber(localvar11)
[012D] (5D) if (localvar7 < localvar9) {
[0137] (4F)   localvar3++
[013A] (5D) } else if (getRandomNumber(1)) {
[0144] (57)   localvar3--
[0147] (**) }
[0147] (6C) breakHere()
[0148] (5D) unless (((localvar1 >= (localvar1 + localvar3)) || ((localvar2 + localvar11) > 200))) jump c1
[0162] (6C) breakHere()
[0163] (73) jump 39
[0166] (66) stopObjectCodeB()
END

// Script 41
[0000] (7A) setCameraAt(VAR_CAMERA_POS_X)
[0004] (A9) wait.waitForCamera()
[0006] (43) localvar4 = (VAR_CAMERA_POS_X - 160)
[0010] (43) localvar0 = 1
[0016] (5D) while (localvar0 <= 19) {
[0020] (7F)   putActorInXY(localvar0,0,0,0)
[002D] (4F)   localvar0++
[0030] (**) }
[0033] (43) VAR_TIMER_NEXT = 1
[0039] (6C) breakHere()
[003A] (43) localvar1 = 0
[0040] (43) localvar2 = 1
[0046] (43) localvar3 = 0
[004C] (43) localvar10 = var141
[0052] (43) localvar9 = (localvar1 + localvar4)
[005C] (5D) if (localvar10 == var141) {
[0066] (43)   localvar0 = getRandomNumberRange((localvar3 - (var142 / 2)),(localvar3 + (var142 / 2)))
[0080] (5D)   if (localvar0 <= 2) {
[008A] (4F)     localvar3++
[008D] (5D)   } else if (localvar0 >= var142) {
[009A] (57)     localvar3--
[009D] (73)     jump a0
[00A0] (**)   }
[00A0] (**) }
[00A0] (57) localvar10--
[00A3] (5D) if (!localvar10) {
[00AA] (43)   localvar10 = var141
[00B0] (**) }
[00B0] (5D) if (localvar3 > 0) {
[00BA] (43)   localvar0 = 0
[00C0] (5D)   while (localvar0 <= (localvar3 - 1)) {
[00CE] (43)     localvar5 = kernelGetFunctions.getPixel([localvar9,localvar0])
[00DE] (43)     localvar7 = localvar0
[00E4] (43)     localvar8 = (localvar0 + localvar3)
[00EE] (43)     localvar6 = kernelGetFunctions.getPixel([localvar9,localvar8])
[00FE] (A6)     drawBox(localvar1,localvar8,localvar1,localvar8,localvar5)
[010E] (43)     localvar5 = localvar6
[0114] (43)     localvar7 = (localvar7 + localvar3)
[011E] (43)     localvar8 = (localvar8 + localvar3)
[0128] (5D)     unless ((localvar8 >= 200)) jump ee
[0132] (A6)     drawBox(localvar1,localvar0,localvar1,localvar0,localvar5)
[0142] (4F)     localvar0++
[0145] (**)   }
[0148] (6C)   breakHere()
[0149] (**) }
[0149] (43) localvar1 = (localvar1 + localvar2)
[0153] (5D) if (localvar1 <= 0) {
[015D] (6C)   breakHere()
[015E] (43)   localvar2 = 1
[0164] (43)   localvar10 = var141
[016A] (5D) } else if (localvar1 >= 320) {
[0177] (6C)   breakHere()
[0178] (43)   localvar2 = -1
[017E] (43)   localvar10 = var141
[0184] (**) }
[0184] (73) jump 52
[0187] (66) stopObjectCodeB()
END

// Script 42
[0000] (BC) dimArray.nukeArray(var200)
[0004] (BC) dimArray.nukeArray(var199)
[0008] (BC) dimArray.nukeArray(var294)
[000C] (5F) startScriptQuick(24,[1,2])
[0019] (66) stopObjectCodeB()
END

// Script 43
[0000] (6C) breakHere()
[0001] (43) localvar0 = VAR_VIRT_MOUSE_X
[0007] (43) localvar1 = VAR_VIRT_MOUSE_Y
[000D] (6B) cursorCommand.cursorOff()
[000F] (6B) cursorCommand.userPutOff()
[0011] (C9) kernelSetFunctions.freezeScripts([])
[0018] (0C) dup[1] = getRandomNumberRange(0,3)
[0020] (5D) if (dup[1] == 0) {
[0027] (5D)   if (var133) {
[002E] (5E)     startScript(1,36,[])
[0038] (73)   } else {
[003B] (73)     jump 18
[003E] (**)   }
[003E] (5D) } else if (dup[1] == 1) {
[0049] (5D)   if (var135) {
[0050] (5E)     startScript(1,39,[])
[005A] (73)   } else {
[005D] (73)     jump 18
[0060] (**)   }
[0060] (5D) } else if (dup[1] == 2) {
[006B] (5D)   if (var136) {
[0072] (5E)     startScript(1,41,[])
[007C] (73)   } else {
[007F] (73)     jump 18
[0082] (**)   }
[0082] (5D) } else if (dup[1] == 3) {
[008D] (5E)   startScript(1,40,[])
[0098] (73)   /* jump 9c; */
[009B] (**) }
[009B] (6C) breakHere()
[009D] (43) localvar2 = getRandomNumber(1)
[00A4] (5D) if ((VAR_VIRT_MOUSE_X != localvar0) || (VAR_VIRT_MOUSE_Y != localvar1)) {
[00B6] (43)   VAR_TIMER_NEXT = 6
[00BC] (7C)   stopScript(41)
[00C0] (7C)   stopScript(39)
[00C4] (7C)   stopScript(36)
[00C8] (7C)   stopScript(38)
[00CC] (7C)   stopScript(37)
[00D0] (BC)   dimArray.nukeArray(var200)
[00D4] (BC)   dimArray.nukeArray(var199)
[00D8] (BC)   dimArray.nukeArray(var292)
[00DC] (BC)   dimArray.nukeArray(var293)
[00E0] (BC)   dimArray.nukeArray(var299)
[00E4] (5F)   startScriptQuick(24,[1,2])
[00F1] (**) }
[00F1] (73) jump 9c
[00F4] (66) stopObjectCodeB()
END

// Script 44: Verb on Max
[0000] (81) faceActor(2,3)
[0007] (CA) delayFrames(2)
[000B] (0C) dup[1] = localvar0
[000F] (5D) if (dup[1] == 4) {
[0016] (BA)   talkActor("It's Max.",2)
[0025] (5D) } else if (dup[1] == 3) {
[0030] (5D)   if (localvar1) {
[0037] (83)     doSentence(3,localvar1,130,35)
[0044] (**)   }
[0044] (5D) } else if (dup[1] == 7) {
[004F] (73) } else {
[0053] (BA)   talkActor("I don't think I want to do that to Max.",2)
[0080] (**) }
[0080] (66) stopObjectCodeB()
END

// Script 45
[0000] (43) var229 = localvar0
[0006] (6B) cursorCommand.cursorOff()
[0008] (6B) cursorCommand.userPutOff()
[000A] (5D) if (var177 >= 995) {
[0014] (6B)   cursorCommand.setCursorImg(var177,93)
[001C] (6B)   cursorCommand.makeCursorColorTransparent(176)
[0021] (6B)   cursorCommand.makeCursorColorTransparent(178)
[0026] (6B)   cursorCommand.makeCursorColorTransparent(0)
[002B] (6B)   cursorCommand.makeCursorColorTransparent(6)
[0030] (73) } else {
[0033] (6B)   cursorCommand.setCursorImg(var177,92)
[003B] (**) }
[003B] (5D) if (!localvar1) {
[0042] (6B)   cursorCommand.cursorOn()
[0044] (6B)   cursorCommand.userPutOn()
[0046] (**) }
[0046] (6E) setClass(localvar0,[147])
[0050] (66) stopObjectCodeB()
END

// Script 46
[0000] (68) beginCutscene([2])
[0007] (CA) delayFrames(4)
[000B] (CA) delayFrames(4)
[000F] (6E) setClass(var229,[147])
[0019] (9C) roomOps.screenEffect(134)
[001E] (CA) delayFrames(18)
[0022] (67) endCutscene()
[0023] (66) stopObjectCodeB()
END

// Script 47
[0000] (6C) breakHere()
[0001] (43) localvar4 = getObjectX(2)
[0008] (43) localvar3 = getObjectX(3)
[000F] (5D) if (getDistObjObj(3,localvar0) < localvar1) {
[001D] (7C)   stopScript(23)
[0021] (5D)   if (localvar4 < getObjectX(localvar0)) {
[002C] (5D)     if (localvar3 < getObjectX(localvar0)) {
[0037] (7E)       walkActorTo(3,(localvar3 - localvar2),getObjectY(3))
[0046] (73)     } else {
[0049] (7E)       walkActorTo(3,(localvar4 + localvar2),getObjectY(3))
[0058] (**)     }
[0058] (5D)   } else if (localvar3 > getObjectX(localvar0)) {
[0066] (7C)     stopScript(23)
[006A] (7E)     walkActorTo(3,(localvar3 + localvar2),getObjectY(3))
[0079] (73)   } else {
[007C] (7E)     walkActorTo(3,(localvar4 - localvar2),getObjectY(3))
[008B] (**)   }
[008B] (A9)   wait.waitForActor(-7,3)
[0092] (5D)   if (!bitvar2) {
[0099] (5E)     startScript(1,23,[2,3])
[00A9] (**)   }
[00A9] (**) }
[00A9] (73) jump 0
[00AC] (66) stopObjectCodeB()
END

// Script 48
[0000] (43) var167 = VAR_VIRT_MOUSE_X
[0006] (43) var168 = VAR_VIRT_MOUSE_Y
[000C] (43) bitvar1 = 1
[0012] (5D) if (localvar0 == 2) {
[001C] (5D)   if (localvar2 == 1) {
[0026] (B3)     stopSentence()
[0027] (43)     localvar5 = getActorFromXY(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y)
[0031] (5D)     if (localvar5) {
[0037] (0C)       dup[1] = localvar5
[003B] (5D)       if (dup[1] == 1) {
[0042] (5D)         if (var177 >= 995) {
[004D] (70)           setState(var177,0)
[0054] (6E)           setClass(var177,[160])
[005E] (5E)           startScript(0,52,[var181])
[006B] (43)           var180 = 0
[0071] (43)           var181 = 0
[0077] (43)           var177 = 889
[007D] (6B)           cursorCommand.setCursorImg(var177,92)
[0085] (43)           var180 = 0
[008B] (7C)           stopScript(0)
[008F] (73)         } else {
[0092] (6B)           cursorCommand.cursorOff()
[0094] (6B)           cursorCommand.userPutOff()
[0096] (A9)           wait.waitForMessage()
[0098] (82)           animateActor(VAR_EGO,255)
[009F] (B3)           stopSentence()
[00A0] (A9)           wait.waitForCamera()
[00A2] (43)           var174 = VAR_VERB_SCRIPT
[00A8] (43)           VAR_VERB_SCRIPT = 60
[00AE] (5E)           startScript(0,59,[])
[00B8] (7C)           stopScript(var175)
[00BC] (43)           var176 = var175
[00C2] (5E)           startScript(0,61,[])
[00CC] (5D)           if (bitvar35) {
[00D2] (5D)             if (!bitvar36) {
[00D9] (5E)               startScript(0,25,[])
[00E3] (7C)               stopScript(0)
[00E7] (**)             }
[00E7] (**)           }
[00E7] (7C)           stopScript(0)
[00EB] (**)         }
[00EB] (5D)       } else if (dup[1] == 2) {
[00F6] (73)         jump 2e8
[00FA] (5D)       } else if (dup[1] == 3) {
[0105] (5D)         if (isAnyOf(var177,[878,876])) {
[0116] (5D)           if (var181) {
[011C] (5D)             if (var205 && !array178[var205]) {
[012A] (47)               array178[var205] = var181
[0133] (4F)               var179++
[0136] (73)             } else {
[0139] (5F)               startScriptQuick(52,[var181])
[0143] (**)             }
[0143] (**)           }
[0143] (5F)           startScriptQuick(56,[35])
[014D] (43)           var181 = 35
[0153] (43)           var180 = 35
[0159] (43)           var177 = 1008
[015F] (6B)           cursorCommand.setCursorImg(var177,93)
[0167] (6B)           cursorCommand.makeCursorColorTransparent(176)
[016C] (6B)           cursorCommand.makeCursorColorTransparent(178)
[0171] (6B)           cursorCommand.makeCursorColorTransparent(0)
[0176] (6B)           cursorCommand.makeCursorColorTransparent(6)
[017B] (7C)           stopScript(0)
[017F] (**)         }
[017F] (5D)       } else if (bitvar18 && (localvar5 == 5)) {
[0191] (73)       } else {
[0194] (0C)         dup[4] = var177
[0198] (5D)         if (dup[4] == 890) {
[019F] (83)           doSentence(7,localvar5,0,0)
[01AD] (5D)         } else if (dup[4] == 875) {
[01B8] (83)           doSentence(4,localvar5,0,0)
[01C6] (5D)         } else if (dup[4] == 876) {
[01D1] (83)           doSentence(5,localvar5,0,0)
[01DF] (5D)         } else if (dup[4] == 878) {
[01EA] (83)           doSentence(3,localvar5,0,0)
[01F8] (5D)         } else if (dup[4] == 877) {
[0203] (5D)           if (localvar5 <= 19) {
[020E] (5D)             if (getActorRoom(localvar5) == VAR_ROOM) {
[0219] (43)               var224 = localvar5
[021F] (5D)               if (array186[localvar5]) {
[0228] (7E)                 walkActorTo(VAR_EGO,array185[localvar5],array186[localvar5])
[0238] (73)               } else {
[023B] (7D)                 walkActorToObj(VAR_EGO,localvar5,0)
[0245] (**)               }
[0245] (A9)               wait.waitForActor(-7,VAR_EGO)
[024C] (81)               faceActor(VAR_EGO,localvar5)
[0253] (CA)               delayFrames(2)
[0257] (5E)               startScript(0,var194,[])
[0261] (**)             }
[0261] (**)           }
[0261] (5D)         } else if (dup[4] == 889) {
[026C] (83)           doSentence(7,localvar5,0,0)
[027A] (5D)         } else if (dup[4] == 883) {
[0285] (83)           doSentence(4,localvar5,0,0)
[0293] (5D)         } else if (dup[4] == 884) {
[029E] (83)           doSentence(5,localvar5,0,0)
[02AC] (5D)         } else if (dup[4] == 885) {
[02B7] (73)           jump 204
[02BB] (5D)         } else if (dup[4] == 886) {
[02C6] (83)           doSentence(3,localvar5,0,0)
[02D4] (73)         } else {
[02D7] (83)           doSentence(3,localvar5,130,var181)
[02E5] (**)         }
[02E5] (73)         jump 44d
[02E8] (**)       }
[02E8] (**)     }
[02E8] (43)     localvar5 = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y)
[02F2] (5D)     if (localvar5) {
[02F8] (0C)       dup[14] = var177
[02FC] (5D)       if (dup[14] == 874) {
[0303] (83)         doSentence(7,localvar5,0,0)
[0311] (5D)       } else if (dup[14] == 890) {
[031C] (83)         doSentence(7,localvar5,0,0)
[032A] (5D)       } else if (dup[14] == 875) {
[0335] (83)         doSentence(4,localvar5,0,0)
[0343] (5D)       } else if (dup[14] == 876) {
[034E] (5D)         unless (var180) jump 355
[0355] (83)         doSentence(5,localvar5,0,0)
[0362] (5D)       } else if (dup[14] == 878) {
[036D] (83)         doSentence(3,localvar5,0,0)
[037B] (5D)       } else if (dup[14] == 877) {
[0386] (83)         doSentence(6,localvar5,0,0)
[0394] (5D)       } else if (dup[14] == 889) {
[039F] (83)         doSentence(7,localvar5,0,0)
[03AD] (5D)       } else if (dup[14] == 883) {
[03B8] (83)         doSentence(4,localvar5,0,0)
[03C6] (5D)       } else if (dup[14] == 884) {
[03D1] (83)         doSentence(5,localvar5,0,0)
[03DF] (5D)       } else if (dup[14] == 885) {
[03EA] (83)         doSentence(6,localvar5,0,0)
[03F8] (5D)       } else if (dup[14] == 886) {
[0403] (83)         doSentence(3,localvar5,0,0)
[0411] (73)       } else {
[0414] (83)         doSentence(3,localvar5,130,var181)
[0422] (**)       }
[0422] (73)     } else {
[0425] (43)       var220 = VAR_VIRT_MOUSE_X
[042B] (43)       var221 = VAR_VIRT_MOUSE_Y
[0431] (43)       var177 = 890
[0437] (6B)       cursorCommand.setCursorImg(var177,92)
[043F] (7E)       walkActorTo(VAR_EGO,VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y)
[0449] (7C)       stopScript(0)
[044D] (**)     }
[044D] (73)   } else {
[0450] (0C)     dup[25] = var177
[0454] (5D)     if (dup[25] == 874) {
[045B] (4F)       var177++
[045F] (5D)     } else if (dup[25] == 890) {
[046A] (43)       var177 = 875
[0471] (5D)     } else if (dup[25] == 875) {
[047C] (43)       var177 = 884
[0483] (5D)     } else if (dup[25] == 876) {
[048E] (43)       var177 = 885
[0495] (5D)     } else if (dup[25] == 877) {
[04A0] (43)       var177 = 886
[04A7] (5D)     } else if (dup[25] == 878) {
[04B2] (5D)       if (var181) {
[04B9] (5D)         if (getOwner(var181) == VAR_EGO) {
[04C4] (60)           startObject(2,var181,91,[])
[04D1] (5D)           if (var177 == var182) {
[04DB] (43)             var177 = 890
[04E1] (73)           } else {
[04E4] (43)             var177 = var182
[04EA] (6B)             cursorCommand.setCursorImg(var177,93)
[04F2] (6B)             cursorCommand.makeCursorColorTransparent(180)
[04F7] (6B)             cursorCommand.makeCursorColorTransparent(176)
[04FC] (6B)             cursorCommand.makeCursorColorTransparent(178)
[0501] (6B)             cursorCommand.makeCursorColorTransparent(0)
[0506] (6B)             cursorCommand.makeCursorColorTransparent(6)
[050B] (7C)             stopScript(0)
[050F] (**)           }
[050F] (73)         } else {
[0512] (43)           var181 = 0
[0518] (43)           var177 = 890
[051E] (**)         }
[051E] (73)       } else {
[0521] (43)         var177 = 890
[0527] (**)       }
[0527] (5D)     } else if (dup[25] == 889) {
[0532] (43)       var177 = 883
[0539] (5D)     } else if (dup[25] == 883) {
[0544] (4F)       var177++
[0548] (5D)     } else if (dup[25] == 884) {
[0553] (4F)       var177++
[0557] (5D)     } else if (dup[25] == 885) {
[0562] (4F)       var177++
[0566] (5D)     } else if (dup[25] == 886) {
[0571] (5D)       if (var181) {
[0578] (5D)         if (getOwner(var181) == VAR_EGO) {
[0583] (60)           startObject(2,var181,91,[])
[0590] (5D)           if (var177 == var182) {
[059A] (43)             var177 = 889
[05A0] (73)           } else {
[05A3] (43)             var177 = var182
[05A9] (6B)             cursorCommand.setCursorImg(var177,93)
[05B1] (6B)             cursorCommand.makeCursorColorTransparent(180)
[05B6] (6B)             cursorCommand.makeCursorColorTransparent(176)
[05BB] (6B)             cursorCommand.makeCursorColorTransparent(178)
[05C0] (6B)             cursorCommand.makeCursorColorTransparent(0)
[05C5] (6B)             cursorCommand.makeCursorColorTransparent(6)
[05CA] (7C)             stopScript(0)
[05CE] (**)           }
[05CE] (73)         } else {
[05D1] (43)           var181 = 0
[05D7] (43)           var177 = 889
[05DD] (**)         }
[05DD] (73)       } else {
[05E0] (43)         var177 = 889
[05E6] (**)       }
[05E6] (73)     } else {
[05E9] (43)       var177 = 889
[05F0] (**)     }
[05F0] (6B)     cursorCommand.setCursorImg(var177,92)
[05F8] (5E)     startScript(0,var175,[])
[0602] (7C)     stopScript(0)
[0606] (**)   }
[0606] (**) }
[0606] (5D) if (localvar0 == 4) {
[0610] (0C)   dup[36] = localvar1
[0614] (5D)   if (dup[36] == 105) {
[061B] (73)     jump 92
[061F] (5D)   } else if (dup[36] == 101) {
[062A] (5D)     if (var181 && (var177 >= 995)) {
[0639] (83)       doSentence(4,var181,0,0)
[0646] (**)     }
[0646] (5D)   } else if (dup[36] == 117) {
[0651] (43)     var177 = 886
[0658] (73)     jump 5f0
[065B] (5D)   } else if (dup[36] == 116) {
[0666] (43)     var177 = 885
[066D] (73)     jump 5f0
[0670] (5D)   } else if (dup[36] == 119) {
[067B] (43)     var177 = 889
[0682] (73)     jump 5f0
[0685] (5D)   } else if (dup[36] == 112) {
[0690] (43)     var177 = 884
[0697] (73)     jump 5f0
[069A] (5D)   } else if (dup[36] == 108) {
[06A5] (43)     var177 = 883
[06AC] (73)     jump 5f0
[06AF] (5D)   } else if (dup[36] == 111) {
[06BA] (73)     jump 572
[06BE] (5D)   } else if (dup[36] == 97) {
[06C9] (5E)     startScript(0,49,[-1])
[06D7] (5D)   } else if (dup[36] == 100) {
[06E2] (5E)     startScript(0,49,[1])
[06F0] (5D)   } else if (dup[36] == 115) {
[06FB] (5E)     startScript(0,49,[2])
[0709] (5D)   } else if (dup[36] == 120) {
[0714] (5E)     startScript(0,49,[-2])
[0722] (73)   } else {
[0725] (5E)     startScript(0,64,[localvar1])
[0733] (7C)     stopScript(0)
[0737] (**)   }
[0737] (**) }
[0737] (66) stopObjectCodeB()
END

// Script 49
[0000] (5D) if (!var179) {
[0007] (7C)   stopScript(0)
[000B] (**) }
[000B] (43) localvar2 = 0
[0011] (5D) if (!var181) {
[0018] (43)   localvar1 = 6
[001E] (43)   localvar2 = 1
[0024] (**) }
[0024] (5D) if (localvar0 == -2) {
[002E] (43)   localvar2 = 1
[0034] (43)   localvar0 = 1
[003A] (43)   localvar1 = 6
[0040] (**) }
[0040] (5D) if (localvar0 == 2) {
[004A] (43)   localvar2 = 1
[0050] (43)   localvar0 = -1
[0056] (43)   localvar1 = 80
[005C] (**) }
[005C] (5D) if (localvar2) {
[0062] (73) } else {
[0065] (43)   localvar1 = var205
[006B] (43)   localvar1 = (localvar1 + localvar0)
[0075] (**) }
[0075] (43) localvar2 = 0
[007B] (5D) if (localvar1 < 6) {
[0085] (43)   localvar1 = 80
[008B] (4F)   localvar2++
[008E] (**) }
[008E] (5D) if (localvar1 > 80) {
[0098] (43)   localvar1 = 6
[009E] (4F)   localvar2++
[00A1] (**) }
[00A1] (5D) if (localvar2 > 1) {
[00AB] (B6)   printDebug.begin()
[00AD] (B6)   printDebug.msg(sound(0x59F89, 0xA) + " ")
[00C1] (7C)   stopScript(0)
[00C5] (**) }
[00C5] (5D) if (array178[localvar1]) {
[00CE] (73) } else {
[00D1] (43)   localvar1 = (localvar1 + localvar0)
[00DB] (73)   jump 7b
[00DE] (**) }
[00DE] (43) localvar3 = array178[localvar1]
[00E7] (5D) if (!var181) {
[00EE] (57)   var179--
[00F1] (**) }
[00F1] (5D) if (((var205 && !array178[var205]) && var181) && (var205 != localvar1)) {
[010B] (47)   array178[var205] = var181
[0114] (47)   array178[localvar1] = 0
[011D] (73) } else {
[0120] (47)   array178[localvar1] = var181
[0129] (**) }
[0129] (43) var205 = localvar1
[012F] (43) var181 = localvar3
[0135] (43) var180 = localvar3
[013B] (60) startObject(2,localvar3,91,[])
[0148] (43) var177 = var182
[014E] (9B) resourceRoutines.loadFlObject(var182,93)
[0156] (6B) cursorCommand.setCursorImg(var177,93)
[015E] (6B) cursorCommand.makeCursorColorTransparent(180)
[0163] (6B) cursorCommand.makeCursorColorTransparent(176)
[0168] (6B) cursorCommand.makeCursorColorTransparent(178)
[016D] (6B) cursorCommand.makeCursorColorTransparent(0)
[0172] (6B) cursorCommand.makeCursorColorTransparent(6)
[0177] (5E) startScript(0,var175,[])
[0181] (66) stopObjectCodeB()
END

// Script 50
[0000] (5D) if (var207 == localvar2) {
[000A] (5D)   if (var208 == localvar1) {
[0014] (4F)     var206++
[0017] (5D)     if (var206 >= 3) {
[0021] (43)       var206 = 0
[0027] (5D)       if (var207) {
[002D] (5E)         startScript(0,63,[localvar0,localvar1,localvar2])
[0040] (7C)         stopScript(0)
[0044] (**)       }
[0044] (**)     }
[0044] (73)     jump 4d
[0047] (**)   }
[0047] (**) }
[0047] (43) var206 = 0
[004D] (43) var209 = localvar0
[0053] (43) var207 = localvar1
[0059] (43) var208 = localvar2
[005F] (5D) if (localvar0 != 5) {
[0069] (5D)   if (isAnyOf(localvar0,[3])) {
[0076] (5D)     if (var183) {
[007C] (5D)       if (getOwner(var183) != VAR_EGO) {
[0087] (5D)         if (var183 == localvar1) {
[0091] (43)           var183 = 0
[0097] (B3)           stopSentence()
[0098] (7C)           stopScript(0)
[009C] (**)         }
[009C] (5D)         if (var183 == localvar2) {
[00A6] (73)           jump 91
[00A9] (**)         }
[00A9] (**)       }
[00A9] (**)     }
[00A9] (**)   }
[00A9] (43)   var183 = 0
[00AF] (**) }
[00AF] (5D) if (localvar1 > 19) {
[00B9] (5D)   if (getVerbEntrypoint(localvar1,13)) {
[00C3] (43)     var7 = localvar1
[00C9] (60)     startObject(0,localvar1,13,[localvar2,localvar0])
[00DC] (**)   }
[00DC] (**) }
[00DC] (5D) if (localvar2 > 19) {
[00E6] (5D)   if (getVerbEntrypoint(localvar2,13)) {
[00F0] (43)     var7 = localvar2
[00F6] (60)     startObject(0,localvar2,13,[localvar1,localvar0])
[0109] (**)   }
[0109] (**) }
[0109] (5D) if (isAnyOf(localvar0,[3])) {
[0116] (43)   localvar4 = 0
[011C] (5D)   if (getOwner(localvar1) != VAR_EGO) {
[0127] (5D)     if (ifClassOfIs(localvar1,[139])) {
[0134] (43)       var183 = localvar1
[013A] (83)       doSentence(localvar0,localvar1,130,localvar2)
[0147] (83)       doSentence(5,localvar1,0,0)
[0154] (73)       jump 3ef
[0157] (**)     }
[0157] (43)     localvar4 = (localvar4 + 1)
[0161] (**)   }
[0161] (5D)   if (localvar2) {
[0167] (5D)     if (getOwner(localvar2) != VAR_EGO) {
[0172] (5D)       if (ifClassOfIs(localvar2,[139])) {
[017F] (43)         var183 = localvar2
[0185] (83)         doSentence(localvar0,localvar1,130,localvar2)
[0192] (83)         doSentence(5,localvar2,0,0)
[019F] (73)         jump 3ef
[01A2] (**)       }
[01A2] (43)       localvar4 = (localvar4 + 1)
[01AC] (**)     }
[01AC] (**)   }
[01AC] (5D)   if (localvar4 == 2) {
[01B6] (5E)     startScript(0,63,[localvar0,localvar1,localvar2])
[01C9] (**)   }
[01C9] (**) }
[01C9] (5D) if (ifClassOfIs(localvar1,[8])) {
[01D6] (5D)   if (getOwner(localvar1) != VAR_EGO) {
[01E1] (5D)     if (ifClassOfIs(localvar1,[138])) {
[01EE] (7E)       walkActorTo(VAR_EGO,var167,var168)
[01F8] (43)       var220 = var167
[01FE] (43)       var221 = var168
[0204] (73)     } else {
[0207] (5D)       if (localvar1 <= 19) {
[0211] (5D)         if (array186[localvar1]) {
[021A] (7E)           walkActorTo(VAR_EGO,array185[localvar1],array186[localvar1])
[022A] (73)         } else {
[022D] (7D)           walkActorToObj(VAR_EGO,localvar1,0)
[0237] (**)         }
[0237] (73)       } else {
[023A] (7D)         walkActorToObj(VAR_EGO,localvar1,0)
[0244] (**)       }
[0244] (43)       var220 = getObjectX(localvar1)
[024B] (43)       var221 = getObjectY(localvar1)
[0252] (**)     }
[0252] (A9)     wait.waitForActor(-7,VAR_EGO)
[0259] (**)   }
[0259] (**) }
[0259] (5D) if (localvar2) {
[025F] (5D)   if (ifClassOfIs(localvar2,[8])) {
[026C] (5D)     if (getOwner(localvar2) != VAR_EGO) {
[0277] (5D)       if (ifClassOfIs(localvar2,[138])) {
[0284] (43)         var220 = var167
[028A] (43)         var221 = var168
[0290] (7E)         walkActorTo(VAR_EGO,var167,var168)
[029A] (73)       } else {
[029D] (7D)         walkActorToObj(VAR_EGO,localvar2,0)
[02A7] (43)         var220 = getObjectX(localvar2)
[02AE] (43)         var221 = getObjectY(localvar2)
[02B5] (**)       }
[02B5] (A9)       wait.waitForActor(-7,VAR_EGO)
[02BC] (**)     }
[02BC] (**)   }
[02BC] (**) }
[02BC] (5D) if (ifClassOfIs(localvar1,[144])) {
[02C9] (43)   localvar5 = 11
[02CF] (5D) } else if (ifClassOfIs(localvar1,[143])) {
[02DF] (43)   localvar5 = 10
[02E5] (5D) } else if (ifClassOfIs(localvar1,[142])) {
[02F5] (43)   localvar5 = 12
[02FB] (73) } else {
[02FE] (43)   localvar5 = 0
[0304] (**) }
[0304] (5D) if (localvar5) {
[030A] (5D)   if (getOwner(localvar1) == 15) {
[0315] (5D)     if (isAnyOf(localvar0,[3,5])) {
[0325] (68)       beginCutscene([2])
[032C] (82)       animateActor(VAR_EGO,localvar5)
[0333] (B0)       delay(20)
[0337] (82)       animateActor(VAR_EGO,3)
[033E] (67)       endCutscene()
[033F] (**)     }
[033F] (**)   }
[033F] (**) }
[033F] (5D) if (localvar1 > 19) {
[0349] (5D)   if (getVerbEntrypoint(localvar1,localvar0)) {
[0353] (43)     var7 = localvar1
[0359] (5D)     if (localvar0 == 3) {
[0363] (5D)       if (localvar2) {
[0369] (5D)         if (ifClassOfIs(localvar1,[2,23])) {
[0379] (5E)           startScript(0,63,[localvar0,localvar1,localvar2])
[038C] (7C)           stopScript(0)
[0390] (**)         }
[0390] (**)       }
[0390] (**)     }
[0390] (60)     startObject(0,localvar1,localvar0,[localvar2,localvar0])
[03A3] (5D)   } else if (localvar0 != 7) {
[03B0] (5E)     startScript(0,63,[localvar0,localvar1,localvar2])
[03C3] (**)   }
[03C3] (73) } else {
[03C6] (43)   var7 = localvar1
[03CC] (5D)   if (array184[localvar1]) {
[03D5] (81)     faceActor(VAR_EGO,localvar1)
[03DC] (5E)     startScript(0,array184[localvar1],[localvar0,localvar2])
[03EF] (**)   }
[03EF] (**) }
[03EF] (66) stopObjectCodeB()
END

// Script 51
[0000] (43) localvar1 = 0
[0006] (43) localvar2 = 0
[000C] (43) localvar3 = 0
[0012] (43) localvar2 = getActorFromXY(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y)
[001C] (43) localvar4 = 1
[0022] (5D) if (localvar2 == 2) {
[002C] (43)   localvar2 = 0
[0032] (**) }
[0032] (5D) if (!localvar2) {
[0039] (43)   localvar4 = 0
[003F] (43)   localvar2 = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y)
[0049] (**) }
[0049] (5D) if ((localvar2 && (localvar2 != localvar1)) || (localvar2 && (localvar3 != var177))) {
[0063] (43)   localvar1 = localvar2
[0069] (0C)   dup[1] = var177
[006D] (5D)   if (dup[1] == 883) {
[0074] (5D)     if (!localvar4) {
[007C] (5D)       if (getVerbEntrypoint(localvar2,4)) {
[0086] (43)         var177 = 875
[008C] (6B)         cursorCommand.setCursorImg(var177,92)
[0094] (**)       }
[0094] (5D)     } else if (array184[localvar2]) {
[00A0] (43)       var177 = 875
[00A6] (6B)       cursorCommand.setCursorImg(var177,92)
[00AE] (**)     }
[00AE] (5D)   } else if (dup[1] == 875) {
[00B9] (5D)     if (!localvar4) {
[00C1] (5D)       if (getVerbEntrypoint(localvar2,4)) {
[00CB] (43)         var177 = 875
[00D1] (6B)         cursorCommand.setCursorImg(var177,92)
[00D9] (73)       } else {
[00DC] (43)         var177 = 883
[00E2] (6B)         cursorCommand.setCursorImg(var177,92)
[00EA] (**)       }
[00EA] (5D)     } else if (array184[localvar2]) {
[00F6] (43)       var177 = 875
[00FC] (6B)       cursorCommand.setCursorImg(var177,92)
[0104] (73)     } else {
[0107] (43)       var177 = 883
[010D] (6B)       cursorCommand.setCursorImg(var177,92)
[0115] (**)     }
[0115] (5D)   } else if (dup[1] == 886) {
[0120] (5D)     if (!localvar4) {
[0128] (5D)       if (getVerbEntrypoint(localvar2,3)) {
[0132] (43)         var177 = 878
[0138] (6B)         cursorCommand.setCursorImg(var177,92)
[0140] (**)       }
[0140] (5D)     } else if (array184[localvar2]) {
[014C] (43)       var177 = 878
[0152] (6B)       cursorCommand.setCursorImg(var177,92)
[015A] (**)     }
[015A] (5D)   } else if (dup[1] == 878) {
[0165] (5D)     if (!localvar4) {
[016D] (5D)       if (getVerbEntrypoint(localvar2,3)) {
[0177] (43)         var177 = 878
[017D] (6B)         cursorCommand.setCursorImg(var177,92)
[0185] (73)       } else {
[0188] (43)         var177 = 886
[018E] (6B)         cursorCommand.setCursorImg(var177,92)
[0196] (**)       }
[0196] (5D)     } else if (array184[localvar2]) {
[01A2] (43)       var177 = 878
[01A8] (6B)       cursorCommand.setCursorImg(var177,92)
[01B0] (73)     } else {
[01B3] (43)       var177 = 886
[01B9] (6B)       cursorCommand.setCursorImg(var177,92)
[01C1] (**)     }
[01C1] (5D)   } else if (dup[1] == 885) {
[01CC] (5D)     if (!localvar4) {
[01D4] (5D)       if (getVerbEntrypoint(localvar2,6)) {
[01DE] (43)         var177 = 877
[01E4] (6B)         cursorCommand.setCursorImg(var177,92)
[01EC] (**)       }
[01EC] (5D)     } else if (array184[localvar2]) {
[01F8] (43)       var177 = 877
[01FE] (6B)       cursorCommand.setCursorImg(var177,92)
[0206] (**)     }
[0206] (5D)   } else if (dup[1] == 877) {
[0211] (5D)     if (!localvar4) {
[0219] (5D)       if (getVerbEntrypoint(localvar2,6)) {
[0223] (43)         var177 = 877
[0229] (6B)         cursorCommand.setCursorImg(var177,92)
[0231] (73)       } else {
[0234] (43)         var177 = 885
[023A] (6B)         cursorCommand.setCursorImg(var177,92)
[0242] (**)       }
[0242] (5D)     } else if (array184[localvar2]) {
[024E] (43)       var177 = 877
[0254] (6B)       cursorCommand.setCursorImg(var177,92)
[025C] (73)     } else {
[025F] (43)       var177 = 885
[0265] (6B)       cursorCommand.setCursorImg(var177,92)
[026D] (**)     }
[026D] (5D)   } else if (dup[1] == 884) {
[0278] (5D)     if (!localvar4) {
[0280] (5D)       if (getVerbEntrypoint(localvar2,5)) {
[028A] (43)         var177 = 876
[0290] (6B)         cursorCommand.setCursorImg(var177,92)
[0298] (**)       }
[0298] (5D)     } else if (array184[localvar2]) {
[02A4] (43)       var177 = 876
[02AA] (6B)       cursorCommand.setCursorImg(var177,92)
[02B2] (**)     }
[02B2] (5D)   } else if (dup[1] == 876) {
[02BD] (5D)     if (!localvar4) {
[02C5] (5D)       if (getVerbEntrypoint(localvar2,5)) {
[02CF] (43)         var177 = 876
[02D5] (6B)         cursorCommand.setCursorImg(var177,92)
[02DD] (73)       } else {
[02E0] (43)         var177 = 884
[02E6] (6B)         cursorCommand.setCursorImg(var177,92)
[02EE] (**)       }
[02EE] (5D)     } else if (array184[localvar2]) {
[02FA] (43)       var177 = 876
[0300] (6B)       cursorCommand.setCursorImg(var177,92)
[0308] (73)     } else {
[030B] (43)       var177 = 884
[0311] (6B)       cursorCommand.setCursorImg(var177,92)
[0319] (**)     }
[0319] (5D)   } else if (dup[1] == 889) {
[0324] (43)     var177 = 890
[032B] (6B)     cursorCommand.setCursorImg(var177,92)
[0333] (5D)   } else if (dup[1] == 874) {
[033E] (5D)   } else if (var177 > 995) {
[034D] (6B)     cursorCommand.setCursorImg(var177,93)
[0355] (6B)     cursorCommand.makeCursorColorTransparent(176)
[035A] (6B)     cursorCommand.makeCursorColorTransparent(178)
[035F] (6B)     cursorCommand.makeCursorColorTransparent(0)
[0364] (6B)     cursorCommand.makeCursorColorTransparent(6)
[0369] (**)   }
[0369] (43)   localvar3 = var177
[036F] (5D) } else if ((localvar1 && !localvar2) || (!localvar2 && (localvar3 != var177))) {
[038A] (43)   localvar1 = 0
[0390] (0C)   dup[11] = var177
[0394] (5D)   if (dup[11] == 875) {
[039B] (43)     var177 = 883
[03A2] (6B)     cursorCommand.setCursorImg(var177,92)
[03AA] (5D)   } else if (dup[11] == 878) {
[03B5] (43)     var177 = 886
[03BC] (6B)     cursorCommand.setCursorImg(var177,92)
[03C4] (5D)   } else if (dup[11] == 877) {
[03CF] (43)     var177 = 885
[03D6] (6B)     cursorCommand.setCursorImg(var177,92)
[03DE] (5D)   } else if (dup[11] == 876) {
[03E9] (43)     var177 = 884
[03F0] (6B)     cursorCommand.setCursorImg(var177,92)
[03F8] (5D)   } else if (dup[11] == 890) {
[0403] (43)     var177 = 889
[040A] (6B)     cursorCommand.setCursorImg(var177,92)
[0412] (5D)   } else if (dup[11] == 874) {
[041D] (5D)   } else if (var177 > 995) {
[042C] (6B)     cursorCommand.makeCursorColorTransparent(180)
[0431] (6B)     cursorCommand.makeCursorColorTransparent(176)
[0436] (6B)     cursorCommand.makeCursorColorTransparent(178)
[043B] (6B)     cursorCommand.makeCursorColorTransparent(0)
[0440] (6B)     cursorCommand.makeCursorColorTransparent(6)
[0445] (**)   }
[0445] (43)   localvar3 = var177
[044B] (5D) } else if (!localvar2) {
[0455] (5D)   if (isAnyOf(var177,[875,878,877,876,890])) {
[046E] (73)     jump 390
[0471] (**)   }
[0471] (**) }
[0471] (43) localvar0 = getRandomNumber(1)
[0478] (6C) breakHere()
[0479] (73) jump 12
[047C] (66) stopObjectCodeB()
END

// Script 52
[0000] (5D) if (getOwner(localvar0) == 2) {
[000B] (43)   localvar1 = 6
[0011] (5D)   while (localvar1 <= 80) {
[001B] (5D)     if (array178[localvar1] == localvar0) {
[0028] (73)       jump 63
[002B] (**)     }
[002B] (4F)     localvar1++
[002E] (**)   }
[0031] (43)   localvar1 = 6
[0037] (5D)   while (localvar1 <= 80) {
[0041] (5D)     if (array178[localvar1] == 0) {
[004E] (47)       array178[localvar1] = localvar0
[0057] (4F)       var179++
[005A] (73)       break
[005D] (**)     }
[005D] (4F)     localvar1++
[0060] (**)   }
[0063] (**) }
[0063] (66) stopObjectCodeB()
END

// Script 53
[0000] (43) localvar5 = getInventoryCount(2)
[0007] (43) localvar9 = 6
[000D] (43) localvar2 = 6
[0013] (5D) while (localvar2 <= 80) {
[001D] (5D)   if (array178[localvar2]) {
[0026] (43)     localvar9 = localvar2
[002C] (**)   }
[002C] (4F)   localvar2++
[002F] (**) }
[0032] (43) localvar2 = 1
[0038] (5D) while (localvar2 <= localvar5) {
[0042] (43)   localvar6 = findInventory(2,localvar2)
[004C] (43)   localvar4 = 6
[0052] (5D)   while (localvar4 <= localvar9) {
[005C] (5D)     if (array178[localvar4] == localvar6) {
[0069] (43)       localvar7 = 1
[006F] (73)       break
[0072] (**)     }
[0072] (4F)     localvar4++
[0075] (**)   }
[0078] (5D)   if (!localvar7) {
[007F] (5D)     if (localvar6 != var181) {
[0089] (43)       localvar4 = 6
[008F] (5D)       while (localvar4 <= 80) {
[0099] (5D)         if (array178[localvar4] == 0) {
[00A6] (47)           array178[localvar4] = localvar6
[00AF] (4F)           var179++
[00B2] (5D)           if (localvar4 > localvar9) {
[00BC] (43)             localvar9 = localvar4
[00C2] (**)           }
[00C2] (73)           break
[00C5] (**)         }
[00C5] (4F)         localvar4++
[00C8] (**)       }
[00CB] (**)     }
[00CB] (**)   }
[00CB] (4F)   localvar2++
[00CE] (**) }
[00D1] (5D) if (localvar5 != (var179 + 4)) {
[00DF] (43)   localvar2 = 6
[00E5] (5D)   while (localvar2 <= localvar9) {
[00EF] (43)     localvar7 = 0
[00F5] (5D)     if (array178[localvar2]) {
[00FE] (43)       localvar4 = 0
[0104] (5D)       while (localvar4 <= localvar5) {
[010E] (43)         localvar6 = findInventory(2,localvar4)
[0118] (5D)         if (array178[localvar2] == localvar6) {
[0125] (43)           localvar7 = 1
[012B] (**)         }
[012B] (4F)         localvar4++
[012E] (**)       }
[0131] (5D)       if (!localvar7) {
[0138] (47)         array178[localvar2] = 0
[0141] (57)         var179--
[0144] (**)       }
[0144] (**)     }
[0144] (4F)     localvar2++
[0147] (**)   }
[014A] (**) }
[014A] (66) stopObjectCodeB()
END

// Script 54
[0000] (5D) if (var181) {
[0006] (5D)   if (var205 && !array178[var205]) {
[0014] (47)     array178[var205] = var181
[001D] (4F)     var179++
[0020] (73)   } else {
[0023] (5F)     startScriptQuick(52,[var181])
[002D] (**)   }
[002D] (**) }
[002D] (84) pickupObject(localvar0,0)
[0034] (5F) startScriptQuick(56,[localvar0])
[003E] (5D) if (getVerbEntrypoint(localvar0,91)) {
[0048] (60)   startObject(2,localvar0,91,[])
[0055] (**) }
[0055] (43) var180 = localvar0
[005B] (43) var181 = localvar0
[0061] (43) var177 = var182
[0067] (6B) cursorCommand.setCursorImg(var177,93)
[006F] (6B) cursorCommand.makeCursorColorTransparent(176)
[0074] (6B) cursorCommand.makeCursorColorTransparent(178)
[0079] (6B) cursorCommand.makeCursorColorTransparent(0)
[007E] (6B) cursorCommand.makeCursorColorTransparent(6)
[0083] (66) stopObjectCodeB()
END

// Script 55
[0000] (5D) if (var181) {
[0006] (5D)   if (var205 && !array178[var205]) {
[0014] (47)     array178[var205] = var181
[001D] (4F)     var179++
[0020] (73)   } else {
[0023] (5F)     startScriptQuick(52,[var181])
[002D] (**)   }
[002D] (**) }
[002D] (84) pickupObject(localvar0,localvar1)
[0034] (5F) startScriptQuick(56,[localvar0])
[003E] (5D) if (getVerbEntrypoint(localvar0,91)) {
[0048] (60)   startObject(2,localvar0,91,[])
[0055] (**) }
[0055] (43) var180 = localvar0
[005B] (43) var181 = localvar0
[0061] (43) var177 = var182
[0067] (6B) cursorCommand.setCursorImg(var177,93)
[006F] (6B) cursorCommand.makeCursorColorTransparent(176)
[0074] (6B) cursorCommand.makeCursorColorTransparent(178)
[0079] (6B) cursorCommand.makeCursorColorTransparent(0)
[007E] (6B) cursorCommand.makeCursorColorTransparent(6)
[0083] (66) stopObjectCodeB()
END

// Script 56
[0000] (5D) if ((var181 == localvar0) || (var180 == localvar0)) {
[0012] (43)   var181 = 0
[0018] (43)   var180 = 0
[001E] (**) }
[001E] (43) localvar1 = 6
[0024] (5D) while (localvar1 <= 80) {
[002E] (5D)   if (array178[localvar1] == localvar0) {
[003B] (47)     array178[localvar1] = 0
[0044] (57)     var179--
[0047] (73)     break
[004A] (**)   }
[004A] (4F)   localvar1++
[004D] (**) }
[0050] (66) stopObjectCodeB()
END

// Script 57: add-inventory
[0000] (5D) if (array178[localvar1]) {
[0009] (B7)   printSystem.begin()
[000B] (B7)   printSystem.msg("Error in add-inventory " + getInt(localvar0) + " : " + getInt(localvar1))
[0030] (73) } else {
[0033] (47)   array178[localvar1] = localvar0
[003C] (**) }
[003C] (66) stopObjectCodeB()
END

// Script 58: replace-inventory
[0000] (43) localvar2 = 6
[0006] (5D) while (localvar2 <= 80) {
[0010] (5D)   if (array178[localvar2] == localvar1) {
[001D] (47)     array178[localvar2] = 0
[0026] (57)     var179--
[0029] (**)   }
[0029] (5D)   if (array178[localvar2] == localvar0) {
[0036] (47)     array178[localvar2] = localvar1
[003F] (73)     jump 73
[0042] (**)   }
[0042] (4F)   localvar2++
[0045] (**) }
[0048] (B7) printSystem.begin()
[004A] (B7) printSystem.msg("Error in replace-inventory : " + getInt(localvar0) + " " + getInt(localvar1))
[0073] (66) stopObjectCodeB()
END

// Script 59
[0000] (7F) putActorInXY(1,0,0,0)
[000D] (9C) roomOps.setPalColor(255,185,130,180)
[001B] (5D) if (!localvar0) {
[0022] (5E)   startScript(0,53,[])
[002C] (**) }
[002C] (43) localvar6 = (VAR_CAMERA_POS_X - 160)
[0036] (B4) printLine.begin()
[0038] (B4) printLine.center()
[003A] (B4) printLine.XY(160,8)
[0042] (B4) printLine.end()
[0044] (9B) resourceRoutines.loadFlObject(995,93)
[004C] (43) VAR_CHARSET_MASK = 1
[0052] (5D) if (!localvar0) {
[0059] (62)   drawObjectAt(995,((localvar6 / 8) + 0),0)
[006B] (**) }
[006B] (43) localvar7 = 0
[0071] (43) localvar1 = 5
[0077] (43) localvar2 = 3
[007D] (5D) if (!localvar0) {
[0084] (43)   localvar3 = 1
[008A] (5D)   while (localvar3 <= 5) {
[0094] (9B)     resourceRoutines.loadFlObject(array178[localvar3],92)
[009F] (62)     drawObjectAt(array178[localvar3],((localvar6 / 8) + localvar1),localvar2)
[00B4] (6E)     setClass(array178[localvar3],[32])
[00C1] (43)     localvar1 = (localvar1 + 5)
[00CB] (5D)     if (localvar1 > 32) {
[00D5] (43)       localvar2 = (localvar2 + 3)
[00DF] (43)       localvar1 = 5
[00E5] (**)     }
[00E5] (4F)     localvar3++
[00E8] (**)   }
[00EB] (43)   localvar3 = 6
[00F1] (5D)   while (localvar3 <= 80) {
[00FB] (5D)     if (array178[localvar3]) {
[0104] (5D)       if (array178[localvar3] == var181) {
[0111] (47)         array178[localvar3] = 0
[011A] (73)       } else {
[011D] (4F)         localvar7++
[0120] (43)         localvar5 = array178[localvar3]
[0129] (60)         startObject(2,localvar5,91,[])
[0136] (9B)         resourceRoutines.loadFlObject(var182,93)
[013E] (6E)         setClass(var182,[32])
[0148] (62)         drawObjectAt(var182,((localvar6 / 8) + localvar1),localvar2)
[015A] (5D)         if (localvar7 >= var179) {
[0164] (73)           break
[0167] (**)         }
[0167] (**)       }
[0167] (**)     }
[0167] (43)     localvar1 = (localvar1 + 5)
[0171] (5D)     if (localvar1 > 32) {
[017B] (43)       localvar2 = (localvar2 + 3)
[0185] (43)       localvar1 = 5
[018B] (**)     }
[018B] (4F)     localvar3++
[018E] (**)   }
[0191] (**) }
[0191] (6B) cursorCommand.cursorOn()
[0193] (6B) cursorCommand.userPutOn()
[0195] (5D) if (bitvar156) {
[019B] (B5)   printCursor.begin()
[019D] (B5)   printCursor.msg(" ")
[01A1] (6C)   breakHere()
[01A2] (B5)   printCursor.begin()
[01A4] (B5)   printCursor.color(14)
[01A9] (B5)   printCursor.XY(45,38)
[01B1] (B5)   printCursor.msg("LOOK    GET    TALK    USE   STOP")
[01D5] (**) }
[01D5] (66) stopObjectCodeB()
END

// Script 60
[0000] (43) localvar8 = 0
[0006] (43) localvar7 = (VAR_CAMERA_POS_X - 160)
[0010] (43) localvar4 = (((VAR_VIRT_MOUSE_X - localvar7) / (5 * 8)) * 5)
[0026] (43) localvar5 = ((VAR_VIRT_MOUSE_Y / (3 * 8)) * 3)
[0038] (43) localvar6 = ((((localvar5 / 3) - 1) * (32 / 5)) + (localvar4 / 5))
[0056] (5D) if ((localvar6 > 0) && (localvar6 < 6)) {
[0068] (5D)   if (var180 < 995) {
[0072] (0C)     dup[1] = array178[localvar6]
[0079] (5D)     if (dup[1] == 879) {
[0080] (43)       var177 = 875
[0087] (5D)     } else if (dup[1] == 880) {
[0092] (43)       var177 = 876
[0099] (5D)     } else if (dup[1] == 881) {
[00A4] (43)       var177 = 877
[00AB] (5D)     } else if (dup[1] == 882) {
[00B6] (43)       var177 = 878
[00BD] (5D)     } else if (dup[1] == 888) {
[00C8] (5E)       startScript(0,62,[0,0])
[00D9] (73)       /* jump dd; */
[00DC] (**)     }
[00DC] (6B)     cursorCommand.setCursorImg(var177,92)
[00E5] (5D)     if (var181) {
[00EB] (5E)       startScript(0,52,[var181])
[00F8] (43)       var181 = 0
[00FE] (43)       var180 = 0
[0104] (5F)       startScriptQuick(59,[])
[010B] (**)     }
[010B] (7C)     stopScript(0)
[010F] (**)   }
[010F] (**) }
[010F] (5D) if (localvar0 == 2) {
[0119] (5D)   if (localvar2 == 2) {
[0123] (43)     localvar8 = 1
[0129] (0C)     dup[6] = var177
[012D] (5D)     if (dup[6] == 874) {
[0134] (4F)       var177++
[0138] (5D)     } else if (dup[6] == 875) {
[0143] (4F)       var177++
[0147] (5D)     } else if (dup[6] == 876) {
[0152] (4F)       var177++
[0156] (5D)     } else if (dup[6] == 877) {
[0161] (4F)       var177++
[0165] (5D)     } else if (dup[6] == 878) {
[0170] (5D)       if (var181) {
[0177] (5D)         if (getOwner(var181) == VAR_EGO) {
[0182] (60)           startObject(2,var181,91,[])
[018F] (5D)           if (var177 == var182) {
[0199] (43)             var177 = 875
[019F] (73)           } else {
[01A2] (43)             var177 = var182
[01A8] (6B)             cursorCommand.setCursorImg(var177,93)
[01B0] (6B)             cursorCommand.makeCursorColorTransparent(180)
[01B5] (6B)             cursorCommand.makeCursorColorTransparent(176)
[01BA] (6B)             cursorCommand.makeCursorColorTransparent(178)
[01BF] (6B)             cursorCommand.makeCursorColorTransparent(0)
[01C4] (6B)             cursorCommand.makeCursorColorTransparent(6)
[01C9] (7C)             stopScript(0)
[01CD] (**)           }
[01CD] (73)         } else {
[01D0] (43)           var181 = 0
[01D6] (43)           var177 = 875
[01DC] (**)         }
[01DC] (73)       } else {
[01DF] (43)         var177 = 875
[01E5] (**)       }
[01E5] (73)     } else {
[01E8] (43)       var177 = 875
[01EF] (**)     }
[01EF] (6B)     cursorCommand.setCursorImg(var177,92)
[01F7] (73)   } else {
[01FA] (5D)     if ((((localvar4 > 32) || (localvar4 < 5)) || (localvar5 < 3)) || (localvar5 > 18)) {
[021C] (7C)       stopScript(0)
[0220] (**)     }
[0220] (B3)     stopSentence()
[0221] (5D)     if (array178[localvar6]) {
[022A] (43)       var7 = array178[localvar6]
[0233] (60)       startObject(2,var7,91,[])
[0240] (43)       localvar3 = var182
[0246] (43)       var210 = localvar3
[024C] (5D)       if (var177 >= 995) {
[0256] (43)         localvar0 = var181
[025C] (5D)         if (getVerbEntrypoint(var7,3)) {
[0266] (43)           localvar8 = 1
[026C] (60)           startObject(2,var7,3,[localvar0])
[027C] (7C)           stopScript(0)
[0280] (73)         } else {
[0283] (5E)           startScript(0,63,[3,var7,localvar0])
[0296] (7C)           stopScript(0)
[029A] (**)         }
[029A] (73)       } else {
[029D] (0C)         dup[11] = var177
[02A1] (5D)         if (dup[11] == 875) {
[02A8] (5D)           if (ifClassOfIs(var7,[131])) {
[02B6] (5E)             startScript(0,62,[var7,4])
[02C6] (73)           } else {
[02C9] (60)             startObject(2,var7,4,[])
[02D6] (43)             localvar8 = 1
[02DC] (**)           }
[02DC] (5D)         } else if (dup[11] == 877) {
[02E7] (5D)           if (ifClassOfIs(var7,[141])) {
[02F5] (60)             startObject(2,var7,6,[])
[0302] (43)             localvar8 = 1
[0308] (73)           } else {
[030B] (5E)             startScript(0,63,[6,var7])
[031B] (7C)             stopScript(0)
[031F] (**)           }
[031F] (5D)         } else if (dup[11] == 878) {
[032A] (43)           localvar0 = 0
[0331] (5D)           if (ifClassOfIs(var7,[130])) {
[033E] (60)             startObject(2,var7,91,[])
[034B] (43)             localvar3 = var182
[0351] (43)             var210 = localvar3
[0357] (B4)             printLine.begin()
[0359] (B4)             printLine.XY(0,0)
[0361] (B4)             printLine.msg(" ")
[0365] (70)             setState(localvar3,0)
[036C] (5D)             if (var181) {
[0372] (43)               localvar9 = var181
[0378] (**)             }
[0378] (43)             var181 = array178[localvar6]
[0381] (43)             var180 = var181
[0387] (47)             array178[localvar6] = 0
[0390] (43)             var177 = localvar3
[0396] (6B)             cursorCommand.setCursorImg(localvar3,93)
[039E] (6B)             cursorCommand.makeCursorColorTransparent(180)
[03A3] (6B)             cursorCommand.makeCursorColorTransparent(176)
[03A8] (6B)             cursorCommand.makeCursorColorTransparent(178)
[03AD] (6B)             cursorCommand.makeCursorColorTransparent(0)
[03B2] (6B)             cursorCommand.makeCursorColorTransparent(6)
[03B7] (5D)             if (localvar9) {
[03BD] (47)               array178[localvar6] = localvar9
[03C6] (4F)               var179++
[03C9] (60)               startObject(2,localvar9,91,[])
[03D6] (9B)               resourceRoutines.loadFlObject(var182,93)
[03DE] (62)               drawObjectAt(var182,((localvar7 / 8) + localvar4),localvar5)
[03F0] (**)             }
[03F0] (43)             localvar8 = 1
[03F6] (B4)             printLine.begin()
[03F8] (B4)             printLine.center()
[03FA] (B4)             printLine.XY(160,8)
[0402] (B4)             printLine.end()
[0404] (5D)           } else if (getVerbEntrypoint(var7,3)) {
[0411] (5D)             if (ifClassOfIs(var7,[3])) {
[041E] (60)               startObject(2,var7,3,[])
[042B] (73)             } else {
[042E] (5E)               startScript(0,62,[var7,3])
[043E] (**)             }
[043E] (73)           } else {
[0441] (5E)             startScript(0,63,[3,var7])
[0451] (7C)             stopScript(0)
[0455] (**)           }
[0455] (5D)         } else if (dup[11] == 876) {
[0460] (60)           startObject(2,var7,91,[])
[046E] (43)           localvar3 = var182
[0474] (43)           var210 = localvar3
[047A] (70)           setState(localvar3,0)
[0481] (5D)           if (var181) {
[0487] (43)             localvar9 = var181
[048D] (**)           }
[048D] (57)           var179--
[0490] (B4)           printLine.begin()
[0492] (B4)           printLine.XY(0,0)
[049A] (B4)           printLine.msg(" ")
[049E] (43)           var181 = array178[localvar6]
[04A7] (43)           var180 = var181
[04AD] (47)           array178[localvar6] = 0
[04B6] (43)           var177 = localvar3
[04BC] (6B)           cursorCommand.setCursorImg(localvar3,93)
[04C4] (6B)           cursorCommand.makeCursorColorTransparent(180)
[04C9] (6B)           cursorCommand.makeCursorColorTransparent(176)
[04CE] (6B)           cursorCommand.makeCursorColorTransparent(178)
[04D3] (6B)           cursorCommand.makeCursorColorTransparent(0)
[04D8] (6B)           cursorCommand.makeCursorColorTransparent(6)
[04DD] (43)           var205 = localvar6
[04E3] (5D)           if (localvar9) {
[04E9] (47)             array178[localvar6] = localvar9
[04F2] (4F)             var179++
[04F5] (60)             startObject(2,localvar9,91,[])
[0502] (9B)             resourceRoutines.loadFlObject(var182,93)
[050A] (62)             drawObjectAt(var182,((localvar7 / 8) + localvar4),localvar5)
[051C] (**)           }
[051C] (43)           localvar8 = 1
[0522] (B4)           printLine.begin()
[0524] (B4)           printLine.center()
[0526] (B4)           printLine.XY(160,8)
[052E] (B4)           printLine.end()
[0530] (73)           /* jump 534; */
[0533] (**)         }
[0533] (**)       }
[0534] (5D)     } else if ((var177 >= 995) && var181) {
[0545] (47)       array178[localvar6] = var181
[054E] (43)       var181 = 0
[0554] (43)       var180 = 0
[055A] (B4)       printLine.begin()
[055C] (B4)       printLine.XY(0,0)
[0564] (B4)       printLine.msg(" ")
[0568] (62)       drawObjectAt(var177,((localvar7 / 8) + localvar4),localvar5)
[057A] (43)       var177 = 875
[0580] (6B)       cursorCommand.setCursorImg(875,92)
[0588] (4F)       var179++
[058B] (B4)       printLine.begin()
[058D] (B4)       printLine.center()
[058F] (B4)       printLine.XY(160,8)
[0597] (B4)       printLine.end()
[0599] (**)     }
[0599] (**)   }
[0599] (**) }
[0599] (5D) if (localvar0 == 4) {
[05A3] (43)   localvar8 = 1
[05A9] (0C)   dup[15] = localvar1
[05AD] (5D)   if (dup[15] == 100) {
[05B4] (5D)   } else if (dup[15] == 101) {
[05C0] (5D)     if (var180 && (var177 >= 995)) {
[05CF] (83)       doSentence(4,var180,0,0)
[05DC] (**)     }
[05DC] (5D)   } else if (dup[15] == 105) {
[05E7] (7C)     stopScript(61)
[05EC] (5E)     startScript(0,62,[])
[05F6] (7C)     stopScript(0)
[05FA] (5D)   } else if (dup[15] == 117) {
[0605] (43)     var177 = 878
[060C] (73)     jump dd
[060F] (5D)   } else if (dup[15] == 116) {
[061A] (43)     var177 = 877
[0621] (73)     jump dd
[0624] (5D)   } else if (dup[15] == 112) {
[062F] (43)     var177 = 876
[0636] (73)     jump dd
[0639] (5D)   } else if (dup[15] == 108) {
[0644] (43)     var177 = 875
[064B] (73)     jump dd
[064E] (73)   } else {
[0651] (5E)     startScript(0,64,[localvar1])
[065F] (43)     localvar8 = 0
[0665] (**)   }
[0665] (**) }
[0665] (5E) startScript(0,59,[localvar8])
[0672] (66) stopObjectCodeB()
END

// Script 61
[0000] (5D) if (var181) {
[0006] (60)   startObject(2,var181,91,[])
[0013] (43)   var177 = var182
[0019] (6B)   cursorCommand.setCursorImg(var177,93)
[0021] (6B)   cursorCommand.makeCursorColorTransparent(180)
[0026] (6B)   cursorCommand.makeCursorColorTransparent(176)
[002B] (6B)   cursorCommand.makeCursorColorTransparent(178)
[0030] (6B)   cursorCommand.makeCursorColorTransparent(0)
[0035] (6B)   cursorCommand.makeCursorColorTransparent(6)
[003A] (5D) } else if (isAnyOf(var177,[883,890,889,874])) {
[0053] (43)   var177 = 875
[0059] (6B)   cursorCommand.setCursorImg(875,92)
[0061] (5D) } else if (var177 == 884) {
[006E] (43)   var177 = 876
[0074] (6B)   cursorCommand.setCursorImg(var177,92)
[007C] (5D) } else if (var177 == 886) {
[0089] (43)   var177 = 878
[008F] (6B)   cursorCommand.setCursorImg(var177,92)
[0097] (**) }
[0097] (43) var225 = 0
[009D] (43) localvar0 = (VAR_CAMERA_POS_X - 160)
[00A7] (5D) if (!var225) {
[00AE] (5D)   if (VAR_VIRT_MOUSE_X < (localvar0 + 319)) {
[00BC] (5D)     if (VAR_VIRT_MOUSE_X > (localvar0 + 0)) {
[00CA] (5D)       if (VAR_VIRT_MOUSE_Y < 199) {
[00D4] (5D)         if (VAR_VIRT_MOUSE_Y > 0) {
[00DE] (4F)           var225++
[00E1] (**)         }
[00E1] (**)       }
[00E1] (**)     }
[00E1] (**)   }
[00E1] (73) } else {
[00E4] (5D)   if (VAR_VIRT_MOUSE_X >= (localvar0 + 319)) {
[00F2] (73)     jump 124
[00F5] (**)   }
[00F5] (5D)   if (VAR_VIRT_MOUSE_X <= (localvar0 + 0)) {
[0103] (73)     jump 124
[0106] (**)   }
[0106] (5D)   if (VAR_VIRT_MOUSE_Y >= 199) {
[0110] (73)     jump 124
[0113] (**)   }
[0113] (5D)   if (VAR_VIRT_MOUSE_Y <= 0) {
[011D] (73)     jump 124
[0120] (**)   }
[0120] (**) }
[0120] (6C) breakHere()
[0121] (73) jump 9d
[0124] (5E) startScript(0,62,[0,0])
[0134] (66) stopObjectCodeB()
END

// Script 62
[0000] (68) beginCutscene([2])
[0007] (7C) stopScript(60)
[000B] (7C) stopScript(59)
[000F] (A9) wait.waitForMessage()
[0011] (43) VAR_VERB_SCRIPT = var174
[0017] (43) localvar2 = 1
[001D] (5D) while (localvar2 <= 5) {
[0027] (70)   setState(array178[localvar2],0)
[0031] (6E)   setClass(array178[localvar2],[160])
[003E] (4F)   localvar2++
[0041] (**) }
[0044] (43) localvar2 = 995
[004A] (5D) while (localvar2 <= 1086) {
[0054] (70)   setState(localvar2,0)
[005B] (6E)   setClass(localvar2,[160])
[0065] (4F)   localvar2++
[0068] (**) }
[006B] (5D) if (var177 >= 995) {
[0075] (6E)   setClass(var177,[32])
[007F] (**) }
[007F] (70) setState(995,0)
[0086] (C9) kernelSetFunctions.clearCharsetMask([])
[008D] (6C) breakHere()
[008E] (67) endCutscene()
[008F] (B4) printLine.begin()
[0091] (B4) printLine.color(15)
[0096] (B4) printLine.XY(160,8)
[009E] (B4) printLine.center()
[00A0] (B4) printLine.overhead()
[00A2] (B4) printLine.end()
[00A4] (5D) if (localvar0) {
[00AA] (0C)   dup[1] = localvar1
[00AE] (5D)   if (dup[1] == 4) {
[00B5] (60)     startObject(2,localvar0,4,[])
[00C3] (5D)   } else if (dup[1] == 3) {
[00CE] (60)     startObject(2,localvar0,3,[])
[00DC] (73)     /* jump e0; */
[00DF] (**)   }
[00DF] (**) }
[00E0] (7F) putActorInXY(1,(VAR_CAMERA_POS_X - 160),200,VAR_ROOM)
[00F1] (9C) roomOps.setPalColor(255,0,7,180)
[00FF] (5E) startScript(0,var176,[])
[0109] (66) stopObjectCodeB()
END

// Script 63: Verb Defaults
[0000] (5D) if ((localvar1 > 19) || (localvar1 == 0)) {
[0012] (0C)   dup[1] = localvar0
[0016] (5D)   if (dup[1] == 7) {
[001D] (BA)     talkActor("I can't go there.  Don't ask me why.",2)
[0047] (5D)   } else if (dup[1] == 6) {
[0052] (BA)     talkActor("I can't talk to that.",2)
[006D] (5D)   } else if (dup[1] == 3) {
[0078] (5D)     if (localvar2 && (localvar1 != 0)) {
[0087] (BA)       talkActor("I can't use these things together.",2)
[00AE] (73)     } else {
[00B1] (BA)       talkActor("This is a completely unusable thingamabob.",2)
[00E0] (**)     }
[00E0] (5D)   } else if (dup[1] == 5) {
[00EB] (5D)     if (localvar1 == var226) {
[00F6] (4F)       var227++
[00F9] (0C)       dup[5] = var227
[00FD] (5D)       if (dup[5] == 1) {
[0104] (BA)         talkActor("No, really, I can't pick that up.",2)
[012B] (5D)       } else if (dup[5] == 2) {
[0136] (BA)         talkActor("Are you dense?  I can't pick that up!",2)
[0161] (5D)       } else if (dup[5] == 3) {
[016C] (68)         beginCutscene([2])
[0174] (82)         animateActor(2,250)
[017B] (CA)         delayFrames(2)
[017F] (BA)         talkActor("Read my lips:" + wait() + "^I^" + wait() + "^CAN'T^" + wait() + "^PICK^" + wait() + "^THAT^" + wait() + "^UP!",2)
[01B5] (A9)         wait.waitForMessage()
[01B7] (67)         endCutscene()
[01B8] (5D)       } else if (dup[5] == 4) {
[01C3] (68)         beginCutscene([2])
[01CB] (5D)         if (!bitvar67) {
[01D2] (BA)           talkActor("I give up.",2)
[01E1] (82)           animateActor(2,251)
[01E8] (43)           bitvar2 = 1
[01EE] (6C)           breakHere()
[01EF] (5D)           unless (bitvar3) jump 1ee
[01F5] (CA)           delayFrames(2)
[01F9] (A9)           wait.waitForMessage()
[01FB] (BA)           talkActor("<sob>",2)
[0205] (82)           animateActor(3,250)
[020C] (CA)           delayFrames(2)
[0210] (A9)           wait.waitForMessage()
[0212] (BA)           talkActor("Now you've done it." + wait() + "You've broken Sam's spirit with your stupid attempts to pick up object #" + getInt(localvar1) + " .",3)
[027A] (A9)           wait.waitForMessage()
[027C] (BA)           talkActor("<sob>",2)
[0286] (BA)           talkActor("In fact, if I didn't find his pitiful sobbing so amusing, I'd come out there and rip your limbs off.",3)
[02EF] (A9)           wait.waitForMessage()
[02F1] (43)           bitvar2 = 0
[02F7] (73)         } else {
[02FA] (82)           animateActor(2,250)
[0301] (CA)           delayFrames(2)
[0305] (BA)           talkActor("Look, bub, don't make me stop this game and come out there.",2)
[0345] (A9)           wait.waitForMessage()
[0347] (**)         }
[0347] (67)         endCutscene()
[0348] (5D)       } else if (!bitvar67) {
[0353] (68)         beginCutscene([2])
[035A] (BA)         talkActor("<choke><sob>",2)
[036B] (43)         bitvar2 = 1
[0371] (6C)         breakHere()
[0372] (5D)         unless (bitvar3) jump 371
[0378] (A9)         wait.waitForMessage()
[037A] (BA)         talkActor("Just ignore him, Sam.  Maybe he'll go away.",3)
[03AA] (A9)         wait.waitForMessage()
[03AC] (43)         bitvar2 = 0
[03B2] (67)         endCutscene()
[03B3] (73)       } else {
[03B6] (BA)         talkActor("Grrrrr.",2)
[03C2] (**)       }
[03C2] (73)     } else {
[03C5] (43)       var226 = localvar1
[03CB] (43)       var227 = 0
[03D1] (BA)       talkActor("I can't pick that up.",2)
[03EB] (**)     }
[03EB] (73)     /* jump 3ef; */
[03EE] (**)   }
[03EE] (73) } else {
[03F2] (0C)   dup[9] = localvar0
[03F6] (5D)   if (dup[9] == 7) {
[03FD] (BA)     talkActor("I can't go there.  Don't ask me why.",2)
[0427] (5D)   } else if (dup[9] == 6) {
[0432] (5D)     if (ifClassOfIs(localvar1,[18])) {
[0440] (BA)       talkActor("There's just no talking to him.",2)
[0464] (73)     } else {
[0467] (BA)       talkActor("There's just no talking to her.",2)
[048B] (**)     }
[048B] (5D)   } else if (dup[9] == 3) {
[0496] (5D)     if (localvar2) {
[049D] (5D)       if (ifClassOfIs(localvar1,[18])) {
[04AA] (BA)         talkActor("I don't think he'd want that.",2)
[04CC] (73)       } else {
[04CF] (BA)         talkActor("I don't think she'd want that.",2)
[04F2] (**)       }
[04F2] (73)     } else {
[04F5] (BA)       talkActor("I don't indiscriminately use people^except Max.",2)
[0529] (**)     }
[0529] (5D)   } else if (dup[9] == 5) {
[0534] (5D)     if (ifClassOfIs(localvar1,[18])) {
[0542] (BA)       talkActor("He's not my type.",2)
[0558] (73)     } else {
[055B] (BA)       talkActor("She's not my type.",2)
[0572] (**)     }
[0572] (73)     /* jump 576; */
[0575] (**)   }
[0575] (**) }
[0576] (A9) wait.waitForMessage()
[0578] (66) stopObjectCodeB()
END

// Script 64
[0000] (0C) dup[1] = localvar0
[0004] (5D) if (dup[1] == 98) {
[000B] (5D)   if (bitvar0) {
[0012] (43)     bitvar0 = 0
[0018] (9C)     roomOps.setPalette(0)
[001D] (73)   } else {
[0020] (43)     bitvar0 = 1
[0026] (C9)     kernelSetFunctions.noirMode([])
[002D] (**)   }
[002D] (5D) } else if (dup[1] == 22) {
[0038] (B7)   printSystem.begin()
[003B] (B7)   printSystem.msg(getString(var150))
[0042] (5D) } else if (dup[1] == 104) {
[004D] (B7)   printSystem.begin()
[0050] (B7)   printSystem.msg("Heap" + getInt(VAR_HEAPSPACE) + " Mem" + getInt(VAR_MEMORY_PERFORMANCE) + " Vid" + getInt(VAR_VIDEO_PERFORMANCE))
[006B] (5D) } else if (dup[1] == 113) {
[0076] (5D) } else if (dup[1] == 118) {
[0082] (5D)   if (bitvar156) {
[0089] (43)     bitvar156 = 0
[008F] (B7)     printSystem.begin()
[0091] (B7)     printSystem.msg("Dummy verb mode is off")
[00AA] (73)   } else {
[00AD] (43)     bitvar156 = 1
[00B3] (B7)     printSystem.begin()
[00B5] (B7)     printSystem.msg("Dummy verb mode is on")
[00CD] (**)   }
[00CD] (73)   /* jump d1; */
[00D0] (**) }
[00D0] (66) stopObjectCodeB()
END

// Script 65: After Introduction
[0000] (68) beginCutscene([2])
[0007] (9B) resourceRoutines.lockSound(4)
[000D] (9B) resourceRoutines.loadSound(4)
[000F] (9D) actorOps.setCurActor(2)
[0014] (9D) actorOps.init()
[0016] (9D) actorOps.setCostume(4)
[001B] (9D) actorOps.setFollowBoxes()
[001D] (9D) actorOps.setTalkColor(6)
[0022] (9D) actorOps.setTalkPos(0,-110)
[002A] (9D) actorOps.setCurActor(3)
[002F] (9D) actorOps.init()
[0031] (9D) actorOps.setCostume(5)
[0036] (9D) actorOps.setFollowBoxes()
[0038] (9D) actorOps.setCurActor(2)
[003D] (9D) actorOps.setFollowBoxes()
[003F] (70) setState(79,1)
[0046] (7A) setCameraAt(160)
[004A] (7F) putActorInXY(2,0,123,7)
[0057] (7F) putActorInXY(3,0,123,7)
[0064] (82) animateActor(2,249)
[006B] (82) animateActor(3,249)
[0072] (CA) delayFrames(4)
[0076] (B6) printDebug.begin()
[0078] (B6) printDebug.msg(sound(0x1AA59, 0xA) + " ")
[008C] (70) setState(62,1)
[0093] (95) beginOverride()
[0094] (73) jump 75d
[0097] (6C) breakHere()
[0098] (7E) walkActorTo(2,237,120)
[00A2] (CA) delayFrames(3)
[00A6] (7E) walkActorTo(3,206,112)
[00B0] (A9) wait.waitForActor(-7,2)
[00B7] (82) animateActor(2,244)
[00BE] (A9) wait.waitForActor(-7,3)
[00C5] (82) animateActor(3,250)
[00CC] (CA) delayFrames(2)
[00D0] (BA) talkActor("Well, that was a pleasantly understated credit sequence.",2)
[010D] (A9) wait.waitForMessage()
[010F] (BA) talkActor("I enjoyed the cheesy retro ambience.",3)
[0138] (A9) wait.waitForMessage()
[013A] (BA) talkActor("What the hell are you talking about, Max?",2)
[0168] (A9) wait.waitForMessage()
[016A] (BA) talkActor("Sam, either termites are burrowing through my skull, or one of us is ticking.",3)
[01BC] (A9) wait.waitForMessage()
[01BE] (BA) talkActor("Oops, oh yeah.",2)
[01D1] (A9) wait.waitForMessage()
[01D3] (7C) stopScript(203)
[01D7] (9C) roomOps.darkenPalette(200,234,241)
[01E2] (9C) roomOps.darkenPalette(200,223,223)
[01ED] (9D) actorOps.setCurActor(2)
[01F2] (9D) actorOps.setCostume(22)
[01F7] (9D) actorOps.setIgnoreBoxes()
[01F9] (9D) actorOps.setScale(255)
[01FE] (9D) actorOps.setCurActor(10)
[0203] (9D) actorOps.init()
[0205] (9D) actorOps.setCostume(8)
[020A] (9D) actorOps.setIgnoreBoxes()
[020C] (9D) actorOps.setScale(210)
[0211] (9D) actorOps.setTalkColor(6)
[0216] (9D) actorOps.setCurActor(11)
[021B] (9D) actorOps.init()
[021D] (9D) actorOps.setCostume(9)
[0222] (9D) actorOps.setIgnoreBoxes()
[0224] (9D) actorOps.setScale(216)
[0229] (82) animateActor(2,249)
[0230] (7F) putActorInXY(2,237,115,7)
[023D] (9D) actorOps.setCurActor(3)
[0242] (9D) actorOps.setElevation(200)
[0247] (82) animateActor(2,6)
[024E] (CA) delayFrames(30)
[0252] (82) animateActor(2,7)
[0259] (7F) putActorInXY(10,236,84,7)
[0266] (82) animateActor(10,248)
[026D] (82) animateActor(11,250)
[0274] (7F) putActorInXY(11,206,97,7)
[0281] (BA) talkActor("Max, where should I put this so it doesn't hurt anyone we know or care about?",10)
[02D3] (A9) wait.waitForMessage()
[02D5] (BA) talkActor("Out the window, Sam.  There's nothing but strangers out there.",11)
[0318] (A9) wait.waitForMessage()
[031A] (7F) putActorInXY(10,0,0,0)
[0327] (7F) putActorInXY(11,0,0,0)
[0334] (82) animateActor(2,8)
[033B] (CA) delayFrames(17)
[033F] (70) setState(80,1)
[0346] (B6) printDebug.begin()
[0348] (B6) printDebug.msg(sound(0x12C0C, 0xA) + " ")
[035C] (6C) breakHere()
[035D] (70) setState(80,2)
[0364] (CA) delayFrames(8)
[0368] (9C) roomOps.setPalette(1)
[036D] (9C) roomOps.shakeOn()
[036F] (B6) printDebug.begin()
[0371] (B6) printDebug.msg(sound(0x53532, 0xA) + " ")
[0385] (6C) breakHere()
[0386] (9C) roomOps.setPalette(0)
[038B] (6C) breakHere()
[038C] (9C) roomOps.setPalette(1)
[0391] (6C) breakHere()
[0392] (9C) roomOps.setPalette(0)
[0397] (CA) delayFrames(3)
[039B] (9C) roomOps.shakeOff()
[039D] (CA) delayFrames(16)
[03A1] (9D) actorOps.setCurActor(2)
[03A6] (9D) actorOps.setCostume(2)
[03AB] (9D) actorOps.setFollowBoxes()
[03AD] (9D) actorOps.setCurActor(3)
[03B2] (9D) actorOps.setElevation(0)
[03B7] (82) animateActor(2,248)
[03BE] (7F) putActorInXY(2,237,120,7)
[03CB] (6C) breakHere()
[03CC] (CA) delayFrames(6)
[03D0] (6C) breakHere()
[03D1] (BA) talkActor("I hope there was nobody on that bus.",2)
[03FA] (A9) wait.waitForMessage()
[03FC] (BA) talkActor("Nobody we know, at least.",3)
[041A] (A9) wait.waitForMessage()
[041C] (CA) delayFrames(4)
[0420] (9B) resourceRoutines.unlockSound(5)
[0425] (AC) soundKludge([14,5,0,1,0,40])
[043B] (74) startSound(3)
[043F] (5E) startScript(0,203,[])
[0449] (B6) printDebug.begin()
[044B] (B6) printDebug.msg(sound(0x4ED62, 0xA) + " ")
[045F] (61) drawObject(64,1)
[0466] (70) setState(64,1)
[046D] (9D) actorOps.setCurActor(9)
[0472] (9D) actorOps.init()
[0474] (9D) actorOps.setCostume(21)
[0479] (9D) actorOps.setIgnoreBoxes()
[047B] (9D) actorOps.setNeverZClip()
[047D] (9D) actorOps.setElevation(100)
[0482] (7F) putActorInXY(9,8,226,7)
[048F] (82) animateActor(9,249)
[0496] (82) animateActor(9,6)
[049D] (7F) putActorInXY(3,0,0,0)
[04AA] (7C) stopScript(203)
[04AE] (9D) actorOps.setCurActor(2)
[04B3] (9D) actorOps.setCostume(19)
[04B8] (9D) actorOps.setIgnoreBoxes()
[04BA] (9D) actorOps.setScale(255)
[04BF] (9D) actorOps.setAlwayZClip(2)
[04C4] (9D) actorOps.setElevation(-2)
[04C9] (9C) roomOps.darkenPalette(200,234,241)
[04D4] (82) animateActor(2,249)
[04DB] (82) animateActor(2,6)
[04E2] (CA) delayFrames(6)
[04E6] (CA) delayFrames(9)
[04EA] (B6) printDebug.begin()
[04EC] (B6) printDebug.msg(sound(0xDA21, 0xA) + " ")
[0500] (CA) delayFrames(10)
[0504] (9C) roomOps.darkenPalette(255,234,241)
[050F] (CA) delayFrames(3)
[0513] (70) setState(79,0)
[051A] (9D) actorOps.setCurActor(2)
[051F] (9D) actorOps.setAlwayZClip(1)
[0524] (CA) delayFrames(5)
[0528] (B6) printDebug.begin()
[052A] (B6) printDebug.msg(sound(0x19C3E, 0xA) + " ")
[053E] (CA) delayFrames(6)
[0542] (B6) printDebug.begin()
[0544] (B6) printDebug.msg(sound(0xDA21, 0xA) + " ")
[0558] (CA) delayFrames(10)
[055C] (9D) actorOps.setCurActor(2)
[0561] (9D) actorOps.setCostume(20)
[0566] (82) animateActor(2,6)
[056D] (B6) printDebug.begin()
[056F] (B6) printDebug.msg(sound(0x15408, 0xA) + " ")
[0583] (CA) delayFrames(2)
[0587] (B6) printDebug.begin()
[0589] (B6) printDebug.msg(sound(0x1680D, 0xA) + " ")
[059D] (CA) delayFrames(2)
[05A1] (B6) printDebug.begin()
[05A3] (B6) printDebug.msg(sound(0x17976, 0xA) + " ")
[05B7] (CA) delayFrames(2)
[05BB] (CA) delayFrames(7)
[05BF] (AC) soundKludge([15,3,0,1])
[05CF] (AC) soundKludge([17,3,0,1,8,4,0])
[05E8] (B6) printDebug.begin()
[05EA] (B6) printDebug.msg(sound(0xDA21, 0xA) + " ")
[05FE] (CA) delayFrames(22)
[0602] (7F) putActorInXY(2,0,0,0)
[060F] (CA) delayFrames(1)
[0613] (B6) printDebug.begin()
[0615] (B6) printDebug.msg(sound(0x13577, 0xA) + " ")
[0629] (CA) delayFrames(6)
[062D] (82) animateActor(9,7)
[0634] (9D) actorOps.setCurActor(2)
[0639] (9D) actorOps.setCostume(8)
[063E] (9D) actorOps.setIgnoreBoxes()
[0640] (9D) actorOps.setElevation(125)
[0645] (9D) actorOps.setScale(255)
[064A] (9D) actorOps.setTalkPos(0,-40)
[0652] (7F) putActorInXY(2,66,233,7)
[065F] (82) animateActor(2,248)
[0666] (BA) talkActor("Hello?  Yes?  Yes?",2)
[067D] (A9) wait.waitForMessage()
[067F] (BA) talkActor("Yes?" + wait() + "No!",2)
[068D] (A9) wait.waitForMessage()
[068F] (7F) putActorInXY(3,0,129,7)
[069C] (7E) walkActorTo(3,120,140)
[06A6] (BA) talkActor("Really?" + wait() + "Well, the same to you, Mac!",2)
[06CF] (A9) wait.waitForMessage()
[06D1] (9D) actorOps.setCurActor(2)
[06D6] (9D) actorOps.setElevation(0)
[06DB] (82) animateActor(9,8)
[06E2] (CA) delayFrames(3)
[06E6] (B6) printDebug.begin()
[06E8] (B6) printDebug.msg(sound(0x13577, 0xA) + " ")
[06FC] (CA) delayFrames(4)
[0700] (9D) actorOps.setCurActor(2)
[0705] (9D) actorOps.setCostume(2)
[070A] (9D) actorOps.setFollowBoxes()
[070C] (9D) actorOps.setElevation(0)
[0711] (9D) actorOps.setTalkPos(0,-110)
[0719] (7F) putActorInXY(2,66,152,255)
[0726] (7F) putActorInXY(9,0,0,0)
[0733] (82) animateActor(2,248)
[073A] (5E) startScript(1,203,[])
[0744] (70) setState(64,0)
[074B] (A9) wait.waitForActor(-7,3)
[0752] (82) animateActor(3,244)
[0759] (CA) delayFrames(2)
[075D] (5D) if (VAR_OVERRIDE) {
[0763] (9C)   roomOps.shakeOff()
[0765] (9C)   roomOps.setPalette(0)
[076A] (70)   setState(79,0)
[0771] (70)   setState(80,2)
[0778] (9D)   actorOps.setCurActor(2)
[077D] (9D)   actorOps.setCostume(2)
[0782] (9D)   actorOps.setFollowBoxes()
[0784] (9D)   actorOps.setElevation(0)
[0789] (9D)   actorOps.setCurActor(3)
[078E] (9D)   actorOps.setCostume(5)
[0793] (9D)   actorOps.setFollowBoxes()
[0795] (9D)   actorOps.setElevation(0)
[079A] (7F)   putActorInXY(10,0,0,0)
[07A7] (7F)   putActorInXY(11,0,0,0)
[07B4] (7F)   putActorInXY(2,66,152,7)
[07C1] (7F)   putActorInXY(3,120,140,7)
[07CE] (7F)   putActorInXY(9,0,0,0)
[07DB] (70)   setState(64,0)
[07E2] (82)   animateActor(2,1)
[07E9] (82)   animateActor(2,249)
[07F0] (82)   animateActor(3,1)
[07F7] (82)   animateActor(3,248)
[07FE] (75)   stopSound(5)
[0802] (75)   stopSound(3)
[0806] (75)   stopSound(2)
[080A] (75)   stopSound(4)
[080E] (74)   startSound(2)
[0812] (**) }
[0812] (96) endOverride()
[0813] (BA) talkActor("Another confused census taker?",3)
[0836] (A9) wait.waitForMessage()
[0838] (81) faceActor(2,3)
[083F] (CA) delayFrames(2)
[0843] (BA) talkActor("Actually, it was the Commissioner with another idiotic and baffling assignment.",2)
[0897] (A9) wait.waitForMessage()
[0899] (BA) talkActor("Does it involve wanton destruction?",3)
[08C1] (A9) wait.waitForMessage()
[08C3] (BA) talkActor("We can only hope." + wait() + "Due to the arbitrarily sensitive nature of the mission," + wait() + "we'll be meeting a bonded city courier out on the street.",2)
[094D] (5D) if (isSoundRunning(4)) {
[0954] (9B)   resourceRoutines.lockSound(2)
[095A] (9B)   resourceRoutines.loadSound(2)
[095C] (AC)   soundKludge([17,4,0,1,8,2,0])
[0975] (AC)   soundKludge([15,4,0,1])
[0985] (**) }
[0985] (A9) wait.waitForMessage()
[0987] (BA) talkActor("Ooh, smells like a fiercely thickening plot.",3)
[09B8] (A9) wait.waitForMessage()
[09BA] (67) endCutscene()
[09BB] (43) var198 = 0
[09C1] (79) actorFollowCamera(2)
[09C5] (5E) startScript(1,202,[])
[09CF] (5E) startScript(0,30,[])
[09D9] (43) var177 = 889
[09DF] (6B) cursorCommand.setCursorImg(var177,92)
[09E7] (66) stopObjectCodeB()
END

// Script 66
[0000] (43) localvar9 = 0
[0006] (5D) if ((localarray0[localvar9] == 0) || (localvar9 > 198)) {
[001B] (73) } else {
[001E] (4F)   localvar9++
[0021] (73)   jump 6
[0024] (**) }
[0024] (43) localvar1 = localvar9
[002A] (43) localvar9 = (localvar5 - localvar3)
[0034] (43) localvar10 = (localvar6 - localvar4)
[003E] (43) localvar13 = 0
[0044] (5D) while (localvar13 <= localvar7) {
[004E] (5D)   if (localvar13 != localvar7) {
[0058] (43)     localvar11 = (((localvar9 * localvar13) / localvar7) + localvar3)
[006A] (43)     localvar12 = (((localvar10 * localvar13) / localvar7) + localvar4)
[007C] (73)   } else {
[007F] (43)     localvar11 = localvar5
[0085] (43)     localvar12 = localvar6
[008B] (**)   }
[008B] (B5)   printCursor.begin()
[008D] (B5)   printCursor.color(localvar2)
[0092] (B5)   printCursor.center()
[0094] (B5)   printCursor.mumble()
[0096] (B5)   printCursor.XY(localvar11,localvar12)
[009E] (B5)   printCursor.msg(getString(localvar0))
[00A5] (5D)   if (localvar8) {
[00AB] (A6)     drawBox(0,0,320,67,-1)
[00BB] (A6)     drawBox(0,132,320,200,-1)
[00CB] (**)   }
[00CB] (6C)   breakHere()
[00CC] (5D)   if (localvar13 == localvar7) {
[00D6] (73)   } else {
[00D9] (5D)     if (localvar8 == 3) {
[00E3] (43)       localvar11 = (localvar11 - ((localvar1 * 12) / 2))
[00F5] (43)       localvar14 = (localvar11 + (localvar1 * 13))
[0103] (43)       localvar12 = (localvar12 - 4)
[010D] (43)       localvar15 = (localvar12 + 16)
[0117] (73)     } else {
[011A] (43)       localvar11 = (localvar11 - ((localvar1 * 9) / 2))
[012C] (43)       localvar14 = (localvar11 + (localvar1 * 9))
[013A] (43)       localvar15 = (localvar12 + 12)
[0144] (**)     }
[0144] (A6)     drawBox(localvar11,localvar12,localvar14,localvar15,-1)
[0154] (**)   }
[0154] (4F)   localvar13++
[0157] (**) }
[015A] (5D) if (localvar8 == 2) {
[0164] (B5)   printCursor.begin()
[0166] (B5)   printCursor.color(localvar2)
[016B] (B5)   printCursor.center()
[016D] (B5)   printCursor.mumble()
[016F] (B5)   printCursor.XY(localvar5,localvar6)
[0177] (B5)   printCursor.msg(getString(localvar0))
[017E] (**) }
[017E] (6C) breakHere()
[017F] (66) stopObjectCodeB()
END

// Script 200
[0000] (AC) soundKludge([13,localvar0,0,9])
[0010] (AC) soundKludge([-1])
[0017] (43) localvar3 = VAR_SOUNDRESULT
[001D] (5D) if (!isSoundRunning(localvar0)) {
[0025] (7C)   stopScript(0)
[0029] (**) }
[0029] (5D) if (localvar1 > 0) {
[0033] (5D)   if (localvar3 >= localvar2) {
[003D] (7C)     stopScript(0)
[0041] (**)   }
[0041] (5D) } else if (localvar3 <= localvar2) {
[004E] (7C)   stopScript(0)
[0052] (**) }
[0052] (AC) soundKludge([12,localvar0,0,9,localvar3])
[0065] (5D) if (localvar1 > 0) {
[006F] (AC)   soundKludge([12,localvar0,0,8,0])
[0082] (73) } else {
[0085] (AC)   soundKludge([12,localvar0,0,8,127])
[0098] (**) }
[0098] (AC) soundKludge([-1])
[009F] (5D) if (localvar1 > 0) {
[00A9] (43)   localvar4 = 0
[00AF] (5D)   while (localvar4 < 127) {
[00B9] (AC)     soundKludge([12,localvar0,0,8,localvar4])
[00CC] (AC)     soundKludge([-1])
[00D3] (43)     localvar4 = (localvar4 + 6)
[00DD] (6C)     breakHere()
[00DE] (**)   }
[00E1] (73) } else {
[00E4] (43)   localvar4 = 127
[00EA] (5D)   while (localvar4 > 0) {
[00F4] (AC)     soundKludge([12,localvar0,0,8,localvar4])
[0107] (AC)     soundKludge([-1])
[010E] (43)     localvar4 = (localvar4 - 6)
[0118] (6C)     breakHere()
[0119] (**)   }
[011C] (**) }
[011C] (43) localvar3 = (localvar3 + localvar1)
[0126] (5D) unless ((localvar3 == localvar2)) jump 1d
[0130] (66) stopObjectCodeB()
END
