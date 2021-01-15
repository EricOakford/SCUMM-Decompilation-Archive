/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 38: dk-tent
 */

// EN
[0000] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200 // Can't See a Thing
[0000] (14) print(1,[Center(),Text("I can't see a thing.")]);
[0019] (A0) stopObjectCode();
END

// Object 951: Outside
Events:
   A - 0018
[0018] (24) loadRoomWithEgo(539,41,316,120);
[0020] (00) stopObjectCode();
END

// Object 952: Darkness
Events:
  36 - 002C
  38 - 0026
  3D - 0030
[0026] (1A) Var[200] = 953;
[002B] (00) stopObjectCode();
[002C] (0A) startScript(200,[]);
[002F] (00) stopObjectCode();
[0030] (0A) startScript(152,[]);
[0033] (00) stopObjectCode();
END

// Object 953
Events:
END
