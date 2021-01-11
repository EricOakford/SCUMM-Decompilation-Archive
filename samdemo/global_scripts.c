/**
 * Sam & Max Hit the Road: Self-Running Demo
 * 
 * Global Scripts
 */

// Script 1: Game Initialization
[0000] (6B) cursorCommand.initCharset(1)
[0005] (43) VAR_TIMER_NEXT = 6
[000B] (43) VAR_CUTSCENEEXIT_KEY = 27
[0011] (43) VAR_RESTART_KEY = 0
[0017] (43) VAR_PAUSE_KEY = 32
[001D] (43) VAR_TALKSTOP_KEY = 46
[0023] (A4) array133[0] = "Sam & Max Hit the Road, Self-Running Demo 5-10-93"
[005C] (A4) VAR_PAUSE_MSG[0] = "Game Paused.  Press SPACE to Continue."
[008A] (A4) VAR_RESTART_MSG[0] = "Are you sure you want to restart?  (Y/N)Y"
[00BB] (A4) VAR_QUIT_MSG[0] = "Are you sure you want to quit?  (Y/N)Y"
[00E9] (A4) VAR_SAVE_MENU_TITLE[0] = "Save"
[00F5] (A4) VAR_LOAD_MENU_TITLE[0] = "Load"
[0101] (A4) VAR_PLAY_BTN[0] = "Play"
[010D] (A4) VAR_CANCEL_BTN[0] = "Cancel"
[011B] (A4) VAR_QUIT_BTN[0] = "Quit"
[0127] (A4) VAR_OK_BTN[0] = "OK"
[0131] (A4) VAR_SAVE_DISK_MSG[0] = "Insert save/load game disk"
[0153] (A4) VAR_ENTER_NAME_MSG[0] = "You must enter a name"
[0170] (A4) VAR_NOT_SAVED_MSG[0] = "The game was NOT saved"
[018E] (A4) VAR_NOT_LOADED_MSG[0] = "The game was NOT loaded"
[01AD] (A4) VAR_SAVE_MSG[0] = "Saving"
[01BB] (A4) VAR_LOAD_MSG[0] = "Loading"
[01CA] (A4) VAR_SAVE_MENU_TITLE[0] = "Name your SAVE game"
[01E5] (A4) VAR_LOAD_MENU_TITLE[0] = "Select a game to LOAD"
[0202] (A4) VAR_MAIN_MENU_TITLE[0] = "Sam & Max Hit the Road"
[0220] (BC) dimArray.int(VAR_GUI_COLORS,44)
[0227] (47) VAR_GUI_COLORS[0] = 7
[0230] (47) VAR_GUI_COLORS[1] = 0
[0239] (47) VAR_GUI_COLORS[2] = 8
[0242] (47) VAR_GUI_COLORS[3] = 0
[024B] (47) VAR_GUI_COLORS[4] = 7
[0254] (47) VAR_GUI_COLORS[5] = 8
[025D] (47) VAR_GUI_COLORS[6] = 14
[0266] (47) VAR_GUI_COLORS[7] = 7
[026F] (47) VAR_GUI_COLORS[8] = 0
[0278] (47) VAR_GUI_COLORS[9] = 7
[0281] (47) VAR_GUI_COLORS[10] = 8
[028A] (47) VAR_GUI_COLORS[11] = 14
[0293] (47) VAR_GUI_COLORS[12] = 7
[029C] (47) VAR_GUI_COLORS[13] = 15
[02A5] (47) VAR_GUI_COLORS[14] = 8
[02AE] (47) VAR_GUI_COLORS[15] = 15
[02B7] (47) VAR_GUI_COLORS[16] = 8
[02C0] (47) VAR_GUI_COLORS[17] = 15
[02C9] (47) VAR_GUI_COLORS[18] = 8
[02D2] (47) VAR_GUI_COLORS[19] = 15
[02DB] (47) VAR_GUI_COLORS[20] = 8
[02E4] (47) VAR_GUI_COLORS[21] = 8
[02ED] (47) VAR_GUI_COLORS[22] = 15
[02F6] (47) VAR_GUI_COLORS[23] = 8
[02FF] (47) VAR_GUI_COLORS[24] = 15
[0308] (47) VAR_GUI_COLORS[25] = 8
[0311] (47) VAR_GUI_COLORS[26] = 7
[031A] (47) VAR_GUI_COLORS[27] = 15
[0323] (47) VAR_GUI_COLORS[28] = 8
[032C] (47) VAR_GUI_COLORS[29] = 15
[0335] (47) VAR_GUI_COLORS[30] = 8
[033E] (47) VAR_GUI_COLORS[31] = 4
[0347] (47) VAR_GUI_COLORS[32] = 7
[0350] (47) VAR_GUI_COLORS[33] = 15
[0359] (47) VAR_GUI_COLORS[34] = 8
[0362] (47) VAR_GUI_COLORS[35] = 15
[036B] (47) VAR_GUI_COLORS[36] = 8
[0374] (47) VAR_GUI_COLORS[37] = 8
[037D] (47) VAR_GUI_COLORS[38] = 7
[0386] (47) VAR_GUI_COLORS[39] = 15
[038F] (47) VAR_GUI_COLORS[40] = 8
[0398] (47) VAR_GUI_COLORS[41] = 15
[03A1] (47) VAR_GUI_COLORS[42] = 8
[03AA] (43) VAR_CUTSCENEEXIT_KEY = 27
[03B0] (43) VAR_PAUSE_KEY = 32
[03B6] (43) VAR_MAINMENU_KEY = 0
[03BC] (43) VAR_CHARINC = 3
[03C2] (43) var149 = 7
[03C8] (43) VAR_CUTSCENE_START_SCRIPT = 2
[03CE] (43) VAR_CUTSCENE_END_SCRIPT = 3
[03D4] (43) VAR_ENTRY_SCRIPT2 = 4
[03DA] (43) VAR_EXIT_SCRIPT = 5
[03E0] (43) VAR_VERB_SCRIPT = 0
[03E6] (43) var162 = 10
[03EC] (43) VAR_SENTENCE_SCRIPT = 9
[03F2] (43) VAR_NUM_ACTOR = 19
[03F8] (43) VAR_INVENTORY_SCRIPT = 11
[03FE] (9C) roomOps.screenEffect(257)
[0403] (6B) cursorCommand.initCharset(2)
[0408] (43) VAR_CHARINC = 3
[040E] (7B) loadRoom(6)
[0412] (66) stopObjectCodeB()
END

// Script 2: Cutscene Start
[0000] (6B) cursorCommand.softCursorOff()
[0002] (6B) cursorCommand.softUserputOff()
[0004] (5D) unless ((localvar0 == 1)) jump e
[000E] (5D) unless ((localvar0 == 3)) jump 18
[0018] (5D) unless ((localvar0 == 0)) jump 22
[0022] (6A) freezeUnfreeze(127)
[0026] (66) stopObjectCodeB()
END

// Script 3: Cutscene End
[0000] (6B) cursorCommand.softCursorOn()
[0002] (6B) cursorCommand.softUserputOn()
[0004] (96) endOverride()
[0005] (5D) if (localvar0 == 1) {
[000F] (73) } else {
[0012] (5D)   unless ((localvar0 == 3)) jump 1c
[001C] (**) }
[001C] (5D) if (localvar0 != 2) {
[0026] (5D)   unless ((localvar0 != 3)) jump 30
[0030] (**) }
[0030] (6A) freezeUnfreeze(0)
[0034] (66) stopObjectCodeB()
END

// Script 4: Room Entry
[0000] (5D) unless (bitvar6) jump 6
[0006] (5D) unless (!var179) jump d
[000D] (5D) unless (bitvar0) jump 13
[0013] (5D) unless (!array171[3]) jump 1d
[001D] (66) stopObjectCodeB()
END

// Script 5: Room Exit
[0000] (43) var146 = VAR_ROOM
[0006] (B4) printLine.begin()
[0008] (B4) printLine.color(15)
[000D] (B4) printLine.XY(160,8)
[0015] (B4) printLine.center()
[0017] (B4) printLine.overhead()
[0019] (B4) printLine.end()
[001B] (43) localvar0 = 0
[0021] (5D) while (localvar0 <= 19) {
[002B] (47)   array171[localvar0] = 0
[0034] (47)   array239[localvar0] = 0
[003D] (47)   array240[localvar0] = 0
[0046] (4F)   localvar0++
[0049] (**) }
[004C] (43) var172 = 0
[0052] (43) var197 = 0
[0058] (43) bitvar3 = 1
[005E] (43) var179 = 0
[0064] (66) stopObjectCodeB()
END

// Script 6
[0000] (5D) if (localvar0 < localvar1) {
[000A] (43)   var151 = 0
[0010] (73)   jump 4c
[0013] (73) } else {
[0016] (43)   localvar3 = localvar0
[001C] (43)   localvar4 = localvar1
[0022] (43)   localvar0 = localvar3
[0028] (43)   localvar1 = localvar4
[002E] (43)   var151 = (localvar0 / localvar1)
[0038] (43)   localvar1 = (localvar1 * var151)
[0042] (43)   localvar0 = (localvar0 - localvar1)
[004C] (**) }
[004C] (43) var153 = localvar0
[0052] (66) stopObjectCodeB()
END

// Script 7
[0000] (82) animateActor(localvar1,255)
[0007] (82) animateActor(localvar1,1)
[000E] (CA) delayFrames(2)
[0012] (81) faceActor(localvar1,localvar0)
[0019] (CA) delayFrames(4)
[001D] (5D) unless (getActorMoving(localvar1)) jump 12
[0024] (66) stopObjectCodeB()
END

// Script 8
[0000] (66) stopObjectCodeB()
END

// Script 9: Sentence Line
[0000] (66) stopObjectCodeB()
END

// Script 10
[0000] (66) stopObjectCodeB()
END

// Script 11: Inventory
[0000] (66) stopObjectCodeB()
END

// Script 12
[0000] (66) stopObjectCodeB()
END

// Script 13
[0000] (9C) roomOps.darkenPalette(0,0,0,0,255)
[0011] (6C) breakHere()
[0012] (9C) roomOps.darkenPalette(255,255,255,0,255)
[0023] (66) stopObjectCodeB()
END
