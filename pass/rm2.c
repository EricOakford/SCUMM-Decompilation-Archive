/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 2: Game Help (help)
 */

// EN
[0000] (33) SetScreen(0,200)
[0006] (2C) InitCharset(1);
[0009] (05) drawObject(957,255,255);
[0010] (05) drawObject(958,255,255);
[0017] (05) drawObject(959,255,255);
[001E] (05) drawObject(960,255,255);
[0025] (05) drawObject(961,255,255);
[002C] (2E) delay(8);
[0030] (48) if (Var[364] == 0) {
[0037] (33)   SetPalColor(10,6)
[003D] (33)   SetPalColor(2,14)
[0043] (14)   print(254,[Color(0),Pos(12,156),Text("Greeting")]);
[0056] (14)   print(254,[Color(0),Pos(12,180),Text("Getting Help")]);
[006D] (14)   print(254,[Color(0),Pos(140,156),Text("Play")]);
[007C] (14)   print(254,[Color(0),Pos(116,180),Text("Saving a Game")]);
[0094] (14)   print(254,[Color(0),Pos(220,156),Text("Starting a Game")]);
[00AE] (14)   print(254,[Color(0),Pos(220,180),Text("Quitting")]);
[00C1] (48) } else if (Var[364] == 1) {
[00CB] (33)   SetPalColor(12,6)
[00D1] (33)   SetPalColor(4,14)
[00D7] (14)   print(254,[Color(0),Pos(12,156),Text("Indy Basics")]);
[00ED] (14)   print(254,[Color(0),Pos(12,180),Text("Verbs")]);
[00FD] (14)   print(254,[Color(0),Pos(140,156),Text("Play")]);
[010C] (14)   print(254,[Color(0),Pos(116,180),Text("Inventory")]);
[0120] (14)   print(254,[Color(0),Pos(220,156),Text("Animation Window")]);
[013B] (14)   print(254,[Color(0),Pos(220,180),Text("Commands")]);
[014E] (48) } else if (Var[364] == 2) {
[0158] (33)   SetPalColor(11,6)
[015E] (33)   SetPalColor(3,14)
[0164] (14)   print(254,[Color(0),Pos(12,156),Text("Loom Basics")]);
[017A] (14)   print(254,[Color(0),Pos(12,180),Text("Magic Staff")]);
[0190] (14)   print(254,[Color(0),Pos(140,156),Text("Play")]);
[019F] (14)   print(254,[Color(0),Pos(116,180),Text("Icon Box")]);
[01B2] (14)   print(254,[Color(0),Pos(220,156),Text("Animation Window")]);
[01CD] (14)   print(254,[Color(0),Pos(220,180),Text("Musical Drafts")]);
[01E6] (48) } else if (Var[364] == 3) {
[01F0] (33)   SetPalColor(13,6)
[01F6] (33)   SetPalColor(5,14)
[01FC] (14)   print(254,[Color(0),Pos(12,156),Text("Monkey Basics")]);
[0214] (14)   print(254,[Color(0),Pos(12,180),Text("Verbs")]);
[0224] (14)   print(254,[Color(0),Pos(140,156),Text("Play")]);
[0233] (14)   print(254,[Color(0),Pos(116,180),Text("Inventory")]);
[0247] (14)   print(254,[Color(0),Pos(220,156),Text("Animation Window")]);
[0262] (14)   print(254,[Color(0),Pos(220,180),Text("Commands")]);
[0275] (18)   /* goto 0278; */
[0278] (**) }
[0278] (2C) InitCharset(2);
[027B] (0A) startScript(201,[]);
[027E] (48) if (Var[364] == 3) {
[0285] (48)   if (Var[104] == 57) {
[028C] (1A)     VAR_VERB_SCRIPT = 64;
[0291] (**)   }
[0291] (**) }
[0291] (00) stopObjectCode();
END

Script# 201
[0000] (2E) delay(5);
[0004] (0A) startScript(202,[]);
[0007] (A0) stopObjectCode();
END

Script# 202
[0000] (05) drawObject(943,255,255);
[0007] (2E) delay(5);
[000B] (1A) Var[356] = 1;
[0010] (48) if (Var[364] == 0) {
[0017] (14)   print(254,[Color(10),Pos(9,20),Text("THE LUCASFILM GAMES PASSPORT TO ADVENTURE" + newline()newline() + "Welcome to the Lucasfilm Games Passport to" + newline() + "Adventure.  This demo will allow you to " + newline() + "sample three of Lucasfilm Games' exciting " + newline() + "adventure games:")]);
[00E1] (14)   print(254,[Color(10),Pos(9,74),Text(newline() + "Indiana Jones and the Last Crusade\x0F," + newline()newline() + "Loom\x0F, and" + newline()newline() + "The Secret of Monkey Island\x0F.")]);
[0141] (0A)   startScript(207,[]);
[0144] (48) } else if (Var[364] == 1) {
[014E] (14)   print(254,[Color(12),Pos(9,20),Text("INDY BASICS" + newline()newline() + "To move Indy, select \x19Walk to\x19 from the Verbs." + newline() + "Then move your cursor into the Animation" + newline() + "Window, point it where you want Indy to go," + newline() + "and click.")]);
[01F9] (14)   print(254,[Color(12),Pos(9,74),Text(newline() + "If you point to an open door and click, Indy " + newline() + "will walk through it." + newline()newline() + "Most of the time, \x19Walk to\x19 will be  " + newline() + "pre-selected for you, since that is what Indy " + newline() + "does the most.")]);
[02B3] (48) } else if (Var[364] == 2) {
[02BD] (14)   print(254,[Color(11),Pos(9,20),Text("LOOM BASICS" + newline()newline() + "Loom is a fantasy game with a musical" + newline() + "interface.  Actions by the main character" + newline() + "will reveal musical notes which may be used" + newline() + "on other objects in the game.")]);
[0373] (14)   print(254,[Color(11),Pos(9,74),Text(newline() + "A sequence of four of these notes, called a" + newline() + "Draft, replaces the standard verb-object " + newline() + "interface of other adventure games.")]);
[03FB] (48) } else if (Var[364] == 3) {
[0405] (14)   print(254,[Color(13),Pos(9,20),Text("MONKEY ISLAND BASICS" + newline()newline() + "To move Guybrush, select \x19Walk to\x19 from the " + newline() + "Verbs.  Then move your cursor into the " + newline() + "Animation Window, point it where you want  " + newline() + "Guybrush to go, and click.")]);
[04C6] (14)   print(254,[Color(13),Pos(9,74),Text(newline() + "If you point to an open door and click, " + newline() + "Guybrush will walk through it." + newline()newline() + "Most of the time, \x19Walk to\x19 will be  " + newline() + "pre-selected for you, since that is what " + newline() + "Guybrush does the most.")]);
[0588] (18)   /* goto 058B; */
[058B] (**) }
[058B] (A0) stopObjectCode();
END

Script# 203
[0000] (05) drawObject(943,255,255);
[0007] (2E) delay(5);
[000B] (1A) Var[356] = 2;
[0010] (48) if (Var[364] == 0) {
[0017] (14)   print(254,[Color(10),Pos(9,20),Text("STARTING A GAME" + newline()newline() + "To see a brief description of each game," + newline() + "position the cursor over that game's" + newline() + "icon in the main menu.")]);
[009B] (14)   print(254,[Color(10),Pos(9,74),Text("To play a sample version of our games," + newline() + "position the cursor over that game's" + newline() + "icon in the main menu, and click.")]);
[0115] (14)   print(254,[Color(10),Pos(9,101),Text(newline() + "Disclaimer:  Some of the puzzles, dialogs," + newline() + "sounds, and artwork from the original games" + newline() + "artwork have been altered due to disk space" + newline() + "limitations.")]);
[01B4] (48) } else if (Var[364] == 1) {
[01BE] (14)   print(254,[Color(12),Pos(9,20),Text("INDY'S ANIMATION WINDOW" + newline())]);
[01E2] (14)   print(254,[Color(12),Pos(9,38),Text("The Animation Window is the largest part of the" + newline() + "screen and is where the animated action takes" + newline() + "place.  It shows the \x19camera's-eye view\x19 of the" + newline() + "room or location the currently active character" + newline() + "is in.")]);
[02B5] (48) } else if (Var[364] == 2) {
[02BF] (14)   print(254,[Color(11),Pos(9,20),Text("LOOM'S ANIMATION WINDOW" + newline())]);
[02E3] (14)   print(254,[Color(11),Pos(9,38),Text("The Animation Window is the largest part of the" + newline() + "screen and is where the animated action takes" + newline() + "place.  It shows the \x19camera's-eye view\x19 of the" + newline() + "room or location the currently active character" + newline() + "is in.")]);
[03B6] (48) } else if (Var[364] == 3) {
[03C0] (14)   print(254,[Color(13),Pos(9,20),Text("MONKEY ISLAND'S ANIMATION WINDOW" + newline())]);
[03ED] (14)   print(254,[Color(13),Pos(9,38),Text("The Animation Window is the largest part of the" + newline() + "screen and is where the animated action takes" + newline() + "place.  It shows the \x19camera's-eye view\x19 of the" + newline() + "room or location the currently active character" + newline() + "is in.")]);
[04C0] (18)   /* goto 04C3; */
[04C3] (**) }
[04C3] (A0) stopObjectCode();
END

Script# 204
[0000] (05) drawObject(943,255,255);
[0007] (2E) delay(5);
[000B] (1A) Var[356] = 3;
[0010] (48) if (Var[364] == 0) {
[0017] (14)   print(254,[Color(10),Pos(9,20),Text("GETTING HELP" + newline()newline() + "To get help while playing, press the F1 key.")]);
[005E] (14)   print(254,[Color(10),Pos(9,74),Text("To exit from a help screen, press the F1 key" + newline() + "again, or click on the \x19Play\x19 button near the" + newline() + "bottom of the screen.")]);
[00DB] (14)   print(254,[Color(10),Pos(9,111),Text(newline() + "Text speed can be increased or decreased" + newline() + "by hitting \x19+\x19 and \x19-\x19, respectively.")]);
[0137] (48) } else if (Var[364] == 1) {
[0141] (14)   print(254,[Color(12),Pos(9,20),Text("VERBS IN INDY" + newline()newline() + "Verbs must be selected from the words in the " + newline() + "columns below the Command Line.  To select a  " + newline() + "verb, place the cursor over the word and click.")]);
[01EB] (14)   print(254,[Color(12),Pos(9,74),Text(newline() + "Some verbs (\x19Talk to\x19 and \x19Travel\x19) are " + newline() + "highlighted in a bright color when they can be " + newline() + "used, and are dimmed otherwise.")]);
[0272] (48) } else if (Var[364] == 2) {
[027C] (14)   print(254,[Color(11),Pos(9,20),Text("THE MAGIC STAFF" + newline()newline() + "The Magic Staff, or \x19Distaff\x19, of the Elders, is" + newline() + "graphically represented below the Animation" + newline() + "Window.")]);
[0300] (14)   print(254,[Color(11),Pos(9,65),Text("The Distaff is essential to Bobbin's success, " + newline() + "as it allows him to spin the musical drafts " + newline() + "which  affect the world around him.")]);
[038C] (14)   print(254,[Color(11),Pos(9,92),Text("Remember, Bobbin must first find the Distaff " + newline() + "before he can use it!  " + newline() + "(Hint: Go to the Elders' Tent.)")]);
[03FE] (48) } else if (Var[364] == 3) {
[0408] (14)   print(254,[Color(13),Pos(9,20),Text("VERBS IN MONKEY ISLAND" + newline()newline() + "Verbs must be selected from the words in the " + newline() + "columns below the Command Line.  To select a  " + newline() + "verb, place the cursor over the word and click.")]);
[04BB] (14)   print(254,[Color(13),Pos(9,74),Text(newline() + "Some objects and actors will have default verbs " + newline() + "preselected for you.  In such situations, " + newline() + "clicking the right button of your mouse (or " + newline() + "pressing the \x19tab\x19 button) will cause these" + newline() + "default commands to execute.")]);
[059D] (18)   /* goto 05A0; */
[05A0] (**) }
[05A0] (A0) stopObjectCode();
END

Script# 205
[0000] (05) drawObject(943,255,255);
[0007] (2E) delay(5);
[000B] (1A) Var[356] = 4;
[0010] (48) if (Var[364] == 0) {
[0017] (14)   print(254,[Color(10),Pos(9,20),Text("LOADING AND SAVING GAMES" + newline()newline() + "To load or save a game in progress, press the" + newline() + "F5 key.")]);
[0074] (48) } else if (Var[364] == 1) {
[007E] (14)   print(254,[Color(12),Pos(9,20),Text("INDY INVENTORY" + newline()newline() + "The inventory is the area below the Verbs.  At " + newline() + "the beginning of the game, Indy's inventory is " + newline() + "empty.  When Indy picks up or is given an object, " + newline() + "the object's name is added to Indy's inventory.")]);
[0160] (14)   print(254,[Color(12),Pos(9,74),Text(newline() + "There is no limit to the number of objects Indy " + newline() + "may carry.  Commands may also be built with" + newline() + "inventory items.")]);
[01DC] (48) } else if (Var[364] == 2) {
[01E6] (14)   print(254,[Color(11),Pos(9,20),Text("LOOM's ICON BOX" + newline()newline() + "The icon box is in the lower right corner of the" + newline() + "screen.  When the cursor touches an object in " + newline() + "the Animation Window that can be used in some " + newline() + "way, this box will display an icon representing " + newline() + "that object.")]);
[02D4] (14)   print(254,[Color(11),Pos(9,85),Text("To use or examine an object, double-click on the" + newline() + "object or click on its icon in the icon box." + newline() + "Bobbin must be standing next to an object to" + newline() + "examine it or spin a draft.  You'll know when " + newline() + "he's standing next to an object when its name " + newline() + "appears in the icon box.")]);
[03E5] (48) } else if (Var[364] == 3) {
[03EF] (14)   print(254,[Color(13),Pos(9,20),Text("MONKEY ISLAND INVENTORY" + newline()newline() + "The inventory is the area to the right of the  " + newline() + "Verbs.  At the beginning of the game, Guybrush's  " + newline() + "inventory is empty.  When Guybrush picks up or  " + newline() + "is given an object, the object's name is added  " + newline() + "to his inventory.")]);
[04EF] (14)   print(254,[Color(13),Pos(9,83),Text(newline() + "There is no limit to the number of objects  " + newline() + "Guybrush may carry.  Commands may also be built" + newline() + "with inventory items.")]);
[0570] (18)   /* goto 0573; */
[0573] (**) }
[0573] (A0) stopObjectCode();
END

Script# 206
[0000] (05) drawObject(943,255,255);
[0007] (2E) delay(5);
[000B] (1A) Var[356] = 5;
[0010] (48) if (Var[364] == 0) {
[0017] (14)   print(254,[Color(10),Pos(9,20),Text("RESTARTING AND QUITTING" + newline()newline() + "To restart this demo, press the F8 key." + newline()newline() + "To quit this demo entirely, type CTRL-C.")]);
[0090] (48) } else if (Var[364] == 1) {
[009A] (14)   print(254,[Color(12),Pos(9,20),Text("INDY COMMANDS" + newline()newline() + "The Command Line is directly below the " + newline() + "Animation Window.  Use this line to " + newline() + "construct sentences that tell Indy what to do.  " + newline() + "A \x19sentence\x19 consists of a \x19verb\x19 and one or " + newline() + "two nouns (objects).")]);
[017A] (14)   print(254,[Color(12),Pos(9,82),Text(newline() + "An example of a sentence you might construct " + newline() + "with the Command Line is \x19Use mallet on bell.\x19  " + newline() + "Connecting words like \x19on\x19 or \x19with\x19 are " + newline() + "automatically inserted by the program.")]);
[0239] (48) } else if (Var[364] == 2) {
[0243] (14)   print(254,[Color(11),Pos(9,20),Text("MUSICAL DRAFTS IN LOOM" + newline()newline() + "To spin a Draft, point and click on each note of" + newline() + "the Magical Staff in the proper sequence.")]);
[02C3] (14)   print(254,[Color(11),Pos(9,56),Text("For example, if you hear a sequence of four " + newline() + "notes in the game, like C D E C, you should write" + newline() + "the sequence on a piece of paper, along with a" + newline() + "description of what happened when the notes " + newline() + "were played.")]);
[0399] (14)   print(254,[Color(11),Pos(9,101),Text("You can try the Draft yourself by clicking on an" + newline() + "object on the screen, waiting for Bobbin to " + newline() + "stand next to it, and selecting the same four " + newline() + "notes on the Magical Staff.")]);
[044F] (48) } else if (Var[364] == 3) {
[0459] (14)   print(254,[Color(13),Pos(9,20),Text("MONKEY ISLAND COMMANDS" + newline()newline() + "The Command Line is directly below the" + newline() + "Animation Window.  You use this line to " + newline() + "construct sentences that tell Guybrush what to   " + newline() + "do.  A \x19sentence\x19 consists of a \x19verb\x19 and one  " + newline() + "or two nouns (objects).")]);
[054C] (14)   print(254,[Color(13),Pos(9,82),Text(newline() + "An example of a sentence you might construct " + newline() + "with the Command Line is \x19Use fish with pot.\x19  " + newline() + "Connecting words like \x19on\x19 or \x19with\x19 are " + newline() + "automatically inserted by the program.")]);
[060A] (18)   /* goto 060D; */
[060D] (**) }
[060D] (A0) stopObjectCode();
END

Script# 207
[0000] (2E) delay(1200);
[0004] (05) drawObject(943,255,255);
[000B] (2E) delay(5);
[000F] (14) print(254,[Color(10),Pos(9,20),Text("STUCK?" + newline()newline() + "To get to another screen, move your" + newline() + "cursor over one of the six large buttons" + newline() + "near the bottom of the screen, and click.")]);
[009C] (14) print(254,[Color(10),Pos(9,74),Text(newline() + "If you do not have a mouse or  a joystick," + newline() + "you can move the cursor with the arrow keys" + newline() + "on your keyboard.  The \x19enter\x19 key can be" + newline() + "used wherever a mouseclick is necessary.")]);
[0155] (A0) stopObjectCode();
END

// Object 943
Events:
END

// Object 956: Home
Events:
   6 - 001C
[001C] (42) chainScript(71,[]);
[001F] (00) stopObjectCode();
END

// Object 957: Button 1
Events:
   6 - 0020
[0020] (08) if (Var[356] != 1) {
[0027] (62)   stopScript(207);
[0029] (0A)   startScript(202,[]);
[002C] (**) }
[002C] (00) stopObjectCode();
END

// Object 958: Button 2
Events:
   6 - 0020
[0020] (08) if (Var[356] != 2) {
[0027] (62)   stopScript(207);
[0029] (0A)   startScript(203,[]);
[002C] (**) }
[002C] (00) stopObjectCode();
END

// Object 959: Button 3
Events:
   6 - 0020
[0020] (08) if (Var[356] != 3) {
[0027] (62)   stopScript(207);
[0029] (0A)   startScript(204,[]);
[002C] (**) }
[002C] (00) stopObjectCode();
END

// Object 960: Button 4
Events:
   6 - 0020
[0020] (08) if (Var[356] != 4) {
[0027] (62)   stopScript(207);
[0029] (0A)   startScript(205,[]);
[002C] (**) }
[002C] (00) stopObjectCode();
END

// Object 961: Button 5
Events:
   6 - 0020
[0020] (08) if (Var[356] != 5) {
[0027] (62)   stopScript(207);
[0029] (0A)   startScript(206,[]);
[002C] (**) }
[002C] (00) stopObjectCode();
END
