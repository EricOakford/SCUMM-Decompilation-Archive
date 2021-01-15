/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 1: Game Menu (menu)
 */

// EN
[0000] (1A) Var[364] = 0;
[0005] (33) SetScreen(0,200)
[000B] (1A) VAR_VERB_SCRIPT = 64;
[0010] (0A) startScript(62,[]);
[0013] (07) setState(932,0);
[0017] (07) setState(933,0);
[001B] (07) setState(934,0);
[001F] (1A) Var[356] = 0;
[0024] (1A) Var[359] = 0;
[0029] (0A) startScript(201,[]);
[002C] (00) stopObjectCode();
END

// EX
[0000] (14) print(255,[Text(" ")]);
[0005] (14) print(255,[Text(" ")]);
[000A] (AE) WaitForMessage();
[000C] (00) stopObjectCode();
END

Script# 200
[0000] (05) drawObject(939,255,255);
[0007] (05) drawObject(940,255,255);
[000E] (05) drawObject(941,255,255);
[0015] (14) print(255,[Text(" ")]);
[001A] (14) print(255,[Text(" ")]);
[001F] (48) if (Var[155] == 932) {
[0026] (0A)   startScript(202,[]);
[0029] (48) } else if (Var[155] == 933) {
[0033] (0A)   startScript(203,[]);
[0036] (48) } else if (Var[155] == 934) {
[0040] (0A)   startScript(204,[]);
[0043] (**) }
[0043] (A0) stopObjectCode();
END

Script# 201
[0000] (80) breakHere();
[0001] (F5) Var[155] = findObject(VAR_VIRT_MOUSE_X,VAR_VIRT_MOUSE_Y);
[0008] (A8) if (Var[155]) {
[000D] (88)   if (Var[156] != Var[155]) {
[0014] (0A)     startScript(200,[Var[155]]);
[001A] (**)   }
[001A] (18)   /* goto 001D; */
[001D] (**) }
[001D] (9A) Var[156] = Var[155];
[0022] (18) goto 0000;
[0025] (A0) stopObjectCode();
END

Script# 202
[0000] (05) drawObject(932,255,255);
[0007] (2E) delay(1);
[000B] (14) print(255,[Color(12),Center(),Pos(200,16),Clipped(300),Text("Europe, 1938.  The Lost Ark was just a warm-up!  Now Adolph Hitler is after the most powerful talisman of all: the Holy Grail.  A few brave men stand in his way.  Fortunately, one of them is Indiana Jones.  And this time, he has his dad with him." + keepText())]);
[0112] (A0) stopObjectCode();
END

Script# 203
[0000] (05) drawObject(933,255,255);
[0007] (2E) delay(1);
[000B] (14) print(255,[Color(11),Center(),Pos(195,106),Clipped(300),Text("In the mythical age of Great Guilds, the elders of the Guild of Weavers have disappeared from the home island of Loom.  Now young Bobbin must learn their powerful magic spells and venture forth to save his guild." + keepText())]);
[00F0] (A0) stopObjectCode();
END

Script# 204
[0000] (05) drawObject(934,255,255);
[0007] (2E) delay(1);
[000B] (14) print(255,[Color(13),Center(),Pos(200,71),Clipped(300),Text("There are a thousand pirate stories in the naked city.  Guybrush Threepwood lives them all as he becomes a full-fledged, full-bearded, lightfingered, swashbuckling, grog-swilling pirate!" + keepText())]);
[00D6] (A0) stopObjectCode();
END

Script# 205
[0000] (2C) CursorSoftOff();
[0002] (1A) Var[364] = 1;
[0007] (1A) Var[362] = 74;
[000C] (1A) Var[356] = 1;
[0011] (62) stopScript(62);
[0013] (5C) oldRoomEffect-set(-32640);
[0017] (42) chainScript(73,[]);
[001A] (A0) stopObjectCode();
END

Script# 206
[0000] (2C) CursorSoftOff();
[0002] (1A) Var[364] = 2;
[0007] (1A) Var[356] = 2;
[000C] (62) stopScript(62);
[000E] (5C) oldRoomEffect-set(-32640);
[0012] (42) chainScript(187,[]);
[0015] (A0) stopObjectCode();
END

Script# 207
[0000] (2C) CursorSoftOff();
[0002] (1A) Var[364] = 3;
[0007] (1A) Var[362] = 62;
[000C] (1A) Var[356] = 3;
[0011] (62) stopScript(62);
[0013] (5C) oldRoomEffect-set(-32640);
[0017] (42) chainScript(80,[]);
[001A] (A0) stopObjectCode();
END
