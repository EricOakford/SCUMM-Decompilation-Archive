/**
 * Indiana Jones and the Fate of Atlantis: Playable Demo
 * 
 * Room 83: Plato's Lost Dialogue (cu-plato)
 */

// EN
[0000] (62) stopScript(31);
[0002] (33) SetScreen(0,200);
[0008] (0A) startScript(19,[1]);
[000E] (32) setCameraAt(160);
[0011] (9A) Var[448] = VAR_VERB_SCRIPT;
[0016] (1A) VAR_VERB_SCRIPT = 200;
[001B] (2C) InitCharset(1);
[001E] (0A) startScript(85,[]);
[0021] (2C) CursorShow();
[0023] (48) if (Var[224] == 45) {
[002A] (33)   ShakeOn();
[002C] (**) }
[002C] (0A) startScript(201,[]);
[002F] (0A) startScript(206,[]);
[0032] (00) stopObjectCode();
END

// EX
[0000] (9A) VAR_VERB_SCRIPT = Var[448];
[0005] (33) SetScreen(0,144);
[000B] (0A) startScript(19,[2]);
[0011] (2C) InitCharset(2);
[0014] (1A) Bit[210] = 1;
[0019] (00) stopObjectCode();
END

Script# 200
[0000] (9A) Var[100] = VAR_VIRT_MOUSE_X;
[0005] (9A) Var[101] = VAR_VIRT_MOUSE_Y;
[000A] (AC) Exprmode Var[442] = <VAR_RESULT = findObject(Var[100],Var[101])>;
[0016] (48) if (Var[442] == 0) {
[001D] (0A)   startScript(119,[Var[224],2]);
[0026] (80)   breakHere();
[0027] (68)   VAR_RESULT = isScriptRunning(119);
[002B] (28)   unless (!VAR_RESULT) goto 0026;
[0030] (**) }
[0030] (8F) VAR_RESULT = getObjectState(Var[442]);
[0035] (48) if (VAR_RESULT == 0) {
[003C] (62)   stopScript(0);
[003E] (**) }
[003E] (48) if (Var[442] == 1103) {
[0045] (18)   goto 001D;
[0048] (62)   stopScript(0);
[004A] (48) } else if (Var[442] == 1104) {
[0054] (18)   goto 001D;
[0057] (62)   stopScript(0);
[0059] (48) } else if (Var[442] == 1105) {
[0063] (18)   goto 007D;
[0066] (48) } else if (Var[442] == 1106) {
[0070] (18)   goto 007D;
[0073] (48) } else if (Var[442] == 1115) {
[007D] (0A)   startScript(201,[]);
[0080] (80)   breakHere();
[0081] (68)   VAR_RESULT = isScriptRunning(201);
[0085] (28)   unless (!VAR_RESULT) goto 0080;
[008A] (48) } else if (Var[442] == 1107) {
[0094] (18)   goto 00AE;
[0097] (48) } else if (Var[442] == 1108) {
[00A1] (18)   goto 00AE;
[00A4] (48) } else if (Var[442] == 1116) {
[00AE] (0A)   startScript(202,[]);
[00B1] (80)   breakHere();
[00B2] (68)   VAR_RESULT = isScriptRunning(202);
[00B6] (28)   unless (!VAR_RESULT) goto 00B1;
[00BB] (48) } else if (Var[442] == 1109) {
[00C5] (18)   goto 00DF;
[00C8] (48) } else if (Var[442] == 1110) {
[00D2] (18)   goto 00DF;
[00D5] (48) } else if (Var[442] == 1117) {
[00DF] (0A)   startScript(203,[]);
[00E2] (80)   breakHere();
[00E3] (68)   VAR_RESULT = isScriptRunning(203);
[00E7] (28)   unless (!VAR_RESULT) goto 00E2;
[00EC] (48) } else if (Var[442] == 1111) {
[00F6] (18)   goto 0110;
[00F9] (48) } else if (Var[442] == 1112) {
[0103] (18)   goto 0110;
[0106] (48) } else if (Var[442] == 1118) {
[0110] (0A)   startScript(204,[]);
[0113] (80)   breakHere();
[0114] (68)   VAR_RESULT = isScriptRunning(204);
[0118] (28)   unless (!VAR_RESULT) goto 0113;
[011D] (48) } else if (Var[442] == 1113) {
[0127] (18)   goto 0141;
[012A] (48) } else if (Var[442] == 1114) {
[0134] (18)   goto 0141;
[0137] (48) } else if (Var[442] == 1119) {
[0141] (0A)   startScript(205,[]);
[0144] (80)   breakHere();
[0145] (68)   VAR_RESULT = isScriptRunning(205);
[0149] (28)   unless (!VAR_RESULT) goto 0144;
[014E] (18)   /* goto 0151; */
[0151] (**) }
[0151] (A0) stopObjectCode();
END

Script# 201 // Page 1
[0000] (1A) Bit[37 + 1] = 1;
[0007] (05) drawObject(1103);
[000B] (05) drawObject(1104);
[000F] (07) setState(1105,0);
[0013] (07) setState(1106,0);
[0017] (07) setState(1115,1);
[001B] (07) setState(1107,0);
[001F] (07) setState(1108,1);
[0023] (07) setState(1116,0);
[0027] (07) setState(1109,0);
[002B] (07) setState(1110,1);
[002F] (07) setState(1117,0);
[0033] (07) setState(1111,0);
[0037] (07) setState(1112,1);
[003B] (07) setState(1118,0);
[003F] (07) setState(1113,0);
[0043] (07) setState(1114,1);
[0047] (07) setState(1119,0);
[004B] (07) setState(1120,1);
[004F] (80) breakHere();
[0050] (14) print(254,[Color(8),Pos(32,32),Text("\x08THE HERMOCRATES\x08 ")]);
[006D] (14) print(254,[Color(8),Pos(32,46),Text("Now at last I have")]);
[008A] (14) print(254,[Color(8),Pos(32,55),Text("Plato's Lost Dialogue")]);
[00AA] (14) print(254,[Color(8),Pos(32,64),Text("translated entirely.")]);
[00C9] (14) print(254,[Color(8),Pos(32,76),Text("The Greek original is")]);
[00E9] (14) print(254,[Color(8),Pos(32,85),Text("lost, so I've used the")]);
[010A] (14) print(254,[Color(8),Pos(32,94),Text("Arabic text I found in")]);
[012B] (14) print(254,[Color(8),Pos(32,103),Text("an Italian monastery")]);
[014A] (14) print(254,[Color(8),Pos(32,112),Text("years ago and always")]);
[0169] (14) print(254,[Color(8),Pos(32,121),Text("thought was a hoax.")]);
[0187] (14) print(254,[Color(8),Pos(32,133),Text("Now I wonder ^ could")]);
[01A6] (14) print(254,[Color(8),Pos(32,142),Text("this remarkable book")]);
[01C5] (14) print(254,[Color(8),Pos(32,151),Text("hold the secret to")]);
[01E2] (14) print(254,[Color(8),Pos(168,32),Text("long-lost Atlantis?")]);
[0200] (14) print(254,[Color(8),Pos(168,44),Text("Probably not.  No one")]);
[0220] (14) print(254,[Color(8),Pos(168,53),Text("will publish it, that's")]);
[0242] (14) print(254,[Color(8),Pos(168,62),Text("certain.  The fear of")]);
[0262] (14) print(254,[Color(8),Pos(168,71),Text("ridicule is too great.")]);
[0283] (14) print(254,[Color(8),Pos(168,83),Text("To be safe, I've sent a")]);
[02A5] (14) print(254,[Color(8),Pos(168,92),Text("copy to Ashkenazy.")]);
[02C2] (14) print(254,[Color(8),Pos(168,142),Text("       London, 1922")]);
[02E0] (80) breakHere();
[02E1] (A0) stopObjectCode();
END

Script# 202 // Page 2
[0000] (1A) Bit[37 + 2] = 1;
[0007] (05) drawObject(1103);
[000B] (05) drawObject(1104);
[000F] (07) setState(1105,1);
[0013] (07) setState(1106,0);
[0017] (07) setState(1115,0);
[001B] (07) setState(1107,0);
[001F] (07) setState(1108,0);
[0023] (07) setState(1116,1);
[0027] (07) setState(1109,0);
[002B] (07) setState(1110,1);
[002F] (07) setState(1117,0);
[0033] (07) setState(1111,0);
[0037] (07) setState(1112,1);
[003B] (07) setState(1118,0);
[003F] (07) setState(1113,0);
[0043] (07) setState(1114,1);
[0047] (07) setState(1119,0);
[004B] (07) setState(1120,0);
[004F] (80) breakHere();
[0050] (14) print(254,[Color(8),Pos(32,32),Text("HERMOCRATES:")]);
[0067] (14) print(254,[Color(8),Pos(32,41),Text("In shame I hereby do")]);
[0086] (14) print(254,[Color(8),Pos(32,50),Text("recant the time and")]);
[00A4] (14) print(254,[Color(8),Pos(32,59),Text("place whereof Critias")]);
[00C4] (14) print(254,[Color(8),Pos(32,68),Text("spoke.  In rendering")]);
[00E3] (14) print(254,[Color(8),Pos(32,77),Text("Egyptian into Greek he")]);
[0104] (14) print(254,[Color(8),Pos(32,86),Text("made a tenfold error.")]);
[0124] (14) print(254,[Color(8),Pos(32,97),Text("Instead of lying 3,000")]);
[0145] (14) print(254,[Color(8),Pos(32,106),Text("miles hence, Atlantis")]);
[0165] (14) print(254,[Color(8),Pos(32,115),Text("may well have been")]);
[0182] (14) print(254,[Color(8),Pos(32,124),Text("30,000 miles away.  Or")]);
[01A3] (14) print(254,[Color(8),Pos(32,133),Text("perhaps it was less")]);
[01C1] (14) print(254,[Color(8),Pos(32,142),Text("than 300 miles from")]);
[01DF] (14) print(254,[Color(8),Pos(32,151),Text("our own shores.")]);
[01F9] (14) print(254,[Color(8),Pos(168,32),Text("Likewise, it may be")]);
[0217] (14) print(254,[Color(8),Pos(168,41),Text("that the Lost Kingdom")]);
[0237] (14) print(254,[Color(8),Pos(168,50),Text("held sway as many as")]);
[0256] (14) print(254,[Color(8),Pos(168,59),Text("100,000 years ago, or")]);
[0276] (14) print(254,[Color(8),Pos(168,68),Text("as few as 1,000.")]);
[0291] (14) print(254,[Color(8),Pos(168,88),Text("SOCRATES:")]);
[02A5] (14) print(254,[Color(8),Pos(168,97),Text("If a kingdom arose on")]);
[02C5] (14) print(254,[Color(8),Pos(168,106),Text("Earth beyond anywhere")]);
[02E5] (14) print(254,[Color(8),Pos(168,115),Text("men might travel, then")]);
[0306] (14) print(254,[Color(8),Pos(168,124),Text("we would never hear of")]);
[0327] (14) print(254,[Color(8),Pos(168,133),Text("it.  We ought to accept")]);
[0349] (14) print(254,[Color(8),Pos(168,142),Text("the lesser figure.")]);
[0366] (80) breakHere();
[0367] (A0) stopObjectCode();
END

Script# 203 // Page 3
[0000] (1A) Bit[37 + 3] = 1;
[0007] (05) drawObject(1103);
[000B] (05) drawObject(1104);
[000F] (07) setState(1105,1);
[0013] (07) setState(1106,0);
[0017] (07) setState(1115,0);
[001B] (07) setState(1107,1);
[001F] (07) setState(1108,0);
[0023] (07) setState(1116,0);
[0027] (07) setState(1109,0);
[002B] (07) setState(1110,0);
[002F] (07) setState(1117,1);
[0033] (07) setState(1111,0);
[0037] (07) setState(1112,1);
[003B] (07) setState(1118,0);
[003F] (07) setState(1113,0);
[0043] (07) setState(1114,1);
[0047] (07) setState(1119,0);
[004B] (07) setState(1120,0);
[004F] (80) breakHere();
[0050] (14) print(254,[Color(8),Pos(32,32),Text("^so glorious Atlantis")]);
[0070] (14) print(254,[Color(8),Pos(32,41),Text("founded two colonies,")]);
[0090] (14) print(254,[Color(8),Pos(32,50),Text("the Lesser " + getInt(Var[239]) + " miles")]);
[00B0] (48) if (Var[240] == 1) {
[00B7] (14)   print(254,[Color(8),Pos(32,59),Text("northeast of the City")]);
[00D7] (48) } else if (Var[240] == 2) {
[00E1] (14)   print(254,[Color(8),Pos(32,59),Text("north of the City")]);
[00FD] (48) } else if (Var[240] == 3) {
[0107] (14)   print(254,[Color(8),Pos(32,59),Text("northwest of the City")]);
[0127] (18)   /* goto 012A; */
[012A] (**) }
[012A] (48) if (Var[240] == 2) {
[0131] (AC)   Exprmode Var[442] = (730 - Var[239]);
[013C] (18) } else {
[013F] (AC)   Exprmode Var[442] = (810 - Var[239]);
[014A] (**) }
[014A] (14) print(254,[Color(8),Pos(32,68),Text("and the Greater " + getInt(Var[442]))]);
[0169] (48) if (Var[240] == 1) {
[0170] (14)   print(254,[Color(8),Pos(32,77),Text("miles away southwest.")]);
[0190] (48) } else if (Var[240] == 2) {
[019A] (14)   print(254,[Color(8),Pos(32,77),Text("miles to the south.")]);
[01B8] (48) } else if (Var[240] == 3) {
[01C2] (14)   print(254,[Color(8),Pos(32,77),Text("miles away southeast.")]);
[01E2] (18)   /* goto 01E5; */
[01E5] (**) }
[01E5] (14) print(254,[Color(8),Pos(32,89),Text("Gates of the kingdom")]);
[0204] (14) print(254,[Color(8),Pos(32,98),Text("opened only with the")]);
[0223] (14) print(254,[Color(8),Pos(32,107),Text("aid of special stones.")]);
[0244] (14) print(254,[Color(8),Pos(32,119),Text("At many outposts, a")]);
[0262] (14) print(254,[Color(8),Pos(32,128),Text("Sunstone sufficed, if")]);
[0282] (48) if (Var[241] == 1) {
[0289] (14)   print(254,[Color(8),Pos(32,137),Text("hot sunlight bathed")]);
[02A7] (14)   print(254,[Color(8),Pos(32,146),Text("the tall horns.")]);
[02C1] (48) } else if (Var[241] == 2) {
[02CB] (14)   print(254,[Color(8),Pos(32,137),Text("sunset made the tall")]);
[02EA] (14)   print(254,[Color(8),Pos(32,146),Text("horns red.")]);
[02FF] (48) } else if (Var[241] == 3) {
[0309] (14)   print(254,[Color(8),Pos(32,137),Text("darkness concealed")]);
[0326] (14)   print(254,[Color(8),Pos(32,146),Text("the tall horns.")]);
[0340] (48) } else if (Var[241] == 4) {
[034A] (14)   print(254,[Color(8),Pos(32,137),Text("morning light warmed")]);
[0369] (14)   print(254,[Color(8),Pos(32,146),Text("the tall horns.")]);
[0383] (18)   /* goto 0386; */
[0386] (**) }
[0386] (14) print(254,[Color(8),Pos(168,32),Text("At the Greater Colony")]);
[03A6] (14) print(254,[Color(8),Pos(168,41),Text("a Moonstone was also")]);
[03C5] (48) if (Var[242] == 1) {
[03CC] (14)   print(254,[Color(8),Pos(168,50),Text("needed, with the noon")]);
[03EC] (14)   print(254,[Color(8),Pos(168,59),Text("sun riding above the")]);
[040B] (14)   print(254,[Color(8),Pos(168,68),Text("full moon.")]);
[0420] (48) } else if (Var[242] == 2) {
[042A] (14)   print(254,[Color(8),Pos(168,50),Text("needed, with darkest")]);
[0449] (14)   print(254,[Color(8),Pos(168,59),Text("night healed by the")]);
[0467] (14)   print(254,[Color(8),Pos(168,68),Text("full moon.")]);
[047C] (48) } else if (Var[242] == 3) {
[0486] (14)   print(254,[Color(8),Pos(168,50),Text("needed, with pale dawn")]);
[04A7] (14)   print(254,[Color(8),Pos(168,59),Text("to shred the darkest")]);
[04C6] (14)   print(254,[Color(8),Pos(168,68),Text("night.")]);
[04D7] (48) } else if (Var[242] == 4) {
[04E1] (14)   print(254,[Color(8),Pos(168,50),Text("needed, with the sun")]);
[0500] (14)   print(254,[Color(8),Pos(168,59),Text("dying as a new moon")]);
[051E] (14)   print(254,[Color(8),Pos(168,68),Text("is born.")]);
[0531] (18)   /* goto 0534; */
[0534] (**) }
[0534] (14) print(254,[Color(8),Pos(168,80),Text("To approach Atlantis")]);
[0553] (14) print(254,[Color(8),Pos(168,89),Text("itself a Worldstone")]);
[0571] (14) print(254,[Color(8),Pos(168,98),Text("was required as well,")]);
[0591] (48) if (Var[242] == 1) {
[0598] (48)   if (Var[243] == 1) {
[059F] (14)     print(254,[Color(8),Pos(168,107),Text("with the dying orbs")]);
[05BD] (14)     print(254,[Color(8),Pos(168,116),Text("plummeting into the")]);
[05DB] (14)     print(254,[Color(8),Pos(168,125),Text("eastern sea.")]);
[05F2] (48)   } else if (Var[243] == 2) {
[05FC] (14)     print(254,[Color(8),Pos(168,107),Text("with darkness ruling")]);
[061B] (14)     print(254,[Color(8),Pos(168,116),Text("the old city without")]);
[063A] (14)     print(254,[Color(8),Pos(168,125),Text("challenge.")]);
[064F] (18)     /* goto 0652; */
[0652] (**)   }
[0652] (48) } else if (Var[242] == 2) {
[065C] (48)   if (Var[243] == 3) {
[0663] (14)     print(254,[Color(8),Pos(168,107),Text("with the moon, full")]);
[0681] (14)     print(254,[Color(8),Pos(168,116),Text("of beauty unrivaled,")]);
[06A0] (14)     print(254,[Color(8),Pos(168,125),Text("lighting the city.")]);
[06BD] (48)   } else if (Var[243] == 4) {
[06C7] (14)     print(254,[Color(8),Pos(168,107),Text("with a glorious sun")]);
[06E5] (14)     print(254,[Color(8),Pos(168,116),Text("blazing alone upon")]);
[0702] (14)     print(254,[Color(8),Pos(168,125),Text("the western sea.")]);
[071D] (18)     /* goto 0720; */
[0720] (**)   }
[0720] (48) } else if (Var[242] == 3) {
[072A] (48)   if (Var[243] == 5) {
[0731] (14)     print(254,[Color(8),Pos(168,107),Text("with the rising sun")]);
[074F] (14)     print(254,[Color(8),Pos(168,116),Text("breaking night's grip")]);
[076F] (14)     print(254,[Color(8),Pos(168,125),Text("above the fiery peak.")]);
[078F] (48)   } else if (Var[243] == 6) {
[0799] (14)     print(254,[Color(8),Pos(168,107),Text("with only a waning")]);
[07B6] (14)     print(254,[Color(8),Pos(168,116),Text("moon to protect the")]);
[07D4] (14)     print(254,[Color(8),Pos(168,125),Text("city from grim night.")]);
[07F4] (18)     /* goto 07F7; */
[07F7] (**)   }
[07F7] (48) } else if (Var[242] == 4) {
[0801] (48)   if (Var[243] == 7) {
[0808] (14)     print(254,[Color(8),Pos(168,107),Text("with darkest night")]);
[0825] (14)     print(254,[Color(8),Pos(168,116),Text("soon to rule the")]);
[0840] (14)     print(254,[Color(8),Pos(168,125),Text("western sea.")]);
[0857] (48)   } else if (Var[243] == 8) {
[0861] (14)     print(254,[Color(8),Pos(168,107),Text("with a waxing moon")]);
[087E] (14)     print(254,[Color(8),Pos(168,116),Text("the sky's only reply")]);
[089D] (14)     print(254,[Color(8),Pos(168,125),Text("to the fires below.")]);
[08BB] (18)     /* goto 08BE; */
[08BE] (**)   }
[08BE] (18)   /* goto 08C1; */
[08C1] (**) }
[08C1] (14) print(254,[Color(8),Pos(168,137),Text("Final entrance yielded")]);
[08E2] (14) print(254,[Color(8),Pos(168,146),Text("only to contrary minds.")]);
[0904] (80) breakHere();
[0905] (A0) stopObjectCode();
END

Script# 204 // Page 4
[0000] (1A) Bit[37 + 4] = 1;
[0007] (05) drawObject(1103);
[000B] (05) drawObject(1104);
[000F] (07) setState(1105,1);
[0013] (07) setState(1106,0);
[0017] (07) setState(1115,0);
[001B] (07) setState(1107,1);
[001F] (07) setState(1108,0);
[0023] (07) setState(1116,0);
[0027] (07) setState(1109,1);
[002B] (07) setState(1110,0);
[002F] (07) setState(1117,0);
[0033] (07) setState(1111,0);
[0037] (07) setState(1112,0);
[003B] (07) setState(1118,1);
[003F] (07) setState(1113,0);
[0043] (07) setState(1114,1);
[0047] (07) setState(1119,0);
[004B] (07) setState(1120,0);
[004F] (80) breakHere();
[0050] (14) print(254,[Color(8),Pos(32,32),Text("^and it is said that")]);
[006F] (14) print(254,[Color(8),Pos(32,41),Text("dwellers in Atlantis")]);
[008E] (14) print(254,[Color(8),Pos(32,50),Text("had no horses nor any")]);
[00AE] (14) print(254,[Color(8),Pos(32,59),Text("need of them.")]);
[00C6] (14) print(254,[Color(8),Pos(32,71),Text("Orichalcum, the metal")]);
[00E6] (14) print(254,[Color(8),Pos(32,80),Text("that glittered like")]);
[0104] (14) print(254,[Color(8),Pos(32,89),Text("fire, this they had")]);
[0122] (14) print(254,[Color(8),Pos(32,98),Text("instead.  They cast it")]);
[0143] (14) print(254,[Color(8),Pos(32,107),Text("into shiny beads and")]);
[0162] (14) print(254,[Color(8),Pos(32,116),Text("used them as we do")]);
[017F] (14) print(254,[Color(8),Pos(32,125),Text("minted coins, paying")]);
[019E] (14) print(254,[Color(8),Pos(32,134),Text("statues to do their")]);
[01BC] (14) print(254,[Color(8),Pos(32,143),Text("work as if by magic.")]);
[01DB] (14) print(254,[Color(8),Pos(168,32),Text("When their colonies")]);
[01F9] (14) print(254,[Color(8),Pos(168,41),Text("were failing, wise")]);
[0216] (14) print(254,[Color(8),Pos(168,50),Text("men carved strange")]);
[0233] (14) print(254,[Color(8),Pos(168,59),Text("devices out of amber")]);
[0252] (14) print(254,[Color(8),Pos(168,68),Text("to search for the")]);
[026E] (14) print(254,[Color(8),Pos(168,77),Text("metal, but only proud")]);
[028E] (14) print(254,[Color(8),Pos(168,86),Text("Atlantis ever yielded")]);
[02AE] (14) print(254,[Color(8),Pos(168,95),Text("a supply.")]);
[02C2] (14) print(254,[Color(8),Pos(168,116),Text("SOCRATES:")]);
[02D6] (14) print(254,[Color(8),Pos(168,125),Text("You have called the")]);
[02F4] (14) print(254,[Color(8),Pos(168,134),Text("kingdom wealthy, but")]);
[0313] (14) print(254,[Color(8),Pos(168,143),Text("surely this is absurd.")]);
[0334] (80) breakHere();
[0335] (A0) stopObjectCode();
END

Script# 205 // Page 5
[0000] (1A) Bit[37 + 5] = 1;
[0007] (05) drawObject(1103);
[000B] (05) drawObject(1104);
[000F] (07) setState(1105,1);
[0013] (07) setState(1106,0);
[0017] (07) setState(1115,0);
[001B] (07) setState(1107,1);
[001F] (07) setState(1108,0);
[0023] (07) setState(1116,0);
[0027] (07) setState(1109,1);
[002B] (07) setState(1110,0);
[002F] (07) setState(1117,0);
[0033] (07) setState(1111,1);
[0037] (07) setState(1112,0);
[003B] (07) setState(1118,0);
[003F] (07) setState(1113,0);
[0043] (07) setState(1114,0);
[0047] (07) setState(1119,1);
[004B] (07) setState(1120,0);
[004F] (80) breakHere();
[0050] (14) print(254,[Color(8),Pos(32,32),Text("^as the waters rose")]);
[006E] (14) print(254,[Color(8),Pos(32,41),Text("around their city, the")]);
[008F] (14) print(254,[Color(8),Pos(32,50),Text("Kings of Atlantis, one")]);
[00B0] (14) print(254,[Color(8),Pos(32,59),Text("after another, sought")]);
[00D0] (14) print(254,[Color(8),Pos(32,68),Text("to hold off fate.")]);
[00EC] (14) print(254,[Color(8),Pos(32,80),Text("Knowing mortal men")]);
[0109] (14) print(254,[Color(8),Pos(32,89),Text("would never rule the")]);
[0128] (14) print(254,[Color(8),Pos(32,98),Text("sea, they planned a")]);
[0146] (14) print(254,[Color(8),Pos(32,107),Text("huge colossus, which")]);
[0165] (14) print(254,[Color(8),Pos(32,116),Text("by use of orichalcum,")]);
[0185] (14) print(254,[Color(8),Pos(32,125),Text("ten beads at a time,")]);
[01A4] (14) print(254,[Color(8),Pos(32,134),Text("would make them like")]);
[01C3] (14) print(254,[Color(8),Pos(32,143),Text("the gods themselves.")]);
[01E2] (14) print(254,[Color(8),Pos(168,32),Text("Nur-Ab-Sal was one")]);
[01FF] (14) print(254,[Color(8),Pos(168,41),Text("such king.  He it was,")]);
[0220] (14) print(254,[Color(8),Pos(168,50),Text("say the wise men of")]);
[023E] (14) print(254,[Color(8),Pos(168,59),Text("Egypt, who first put")]);
[025D] (14) print(254,[Color(8),Pos(168,68),Text("men in the colossus,")]);
[027C] (14) print(254,[Color(8),Pos(168,77),Text("making many freaks of")]);
[029C] (14) print(254,[Color(8),Pos(168,86),Text("nature at times when")]);
[02BB] (14) print(254,[Color(8),Pos(168,95),Text("the celestial spheres")]);
[02DB] (14) print(254,[Color(8),Pos(168,104),Text("were well aligned.")]);
[02F8] (14) print(254,[Color(8),Pos(168,125),Text("SOCRATES:")]);
[030C] (14) print(254,[Color(8),Pos(168,134),Text("This I doubt.  We are")]);
[032C] (14) print(254,[Color(8),Pos(168,143),Text("hearing a child's tale.")]);
[034E] (80) breakHere();
[034F] (A0) stopObjectCode();
END

// Objects 1103-1120
Events:
END