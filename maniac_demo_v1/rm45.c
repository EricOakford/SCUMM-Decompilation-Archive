/**
 * Maniac Mansion: V1 Demo
 * 
 * Room 45: Kid Selection
 */

// EN
[0000] (0C) loadSound(54)
[0003] (0C) loadScript(114)
[0006] (00) stopObjectCode();
END

// Object 260: Syd
Events:
  FF - 0013
[0013] (1A) Var[109] = 1;
[0017] (14) print(255,"Syd - an aspiring musician tring to\x01start his own new-wave band.");
[0050] (46) Var[71]++;
[0052] (42) startScript(114);
[0054] (00) stopObjectCode();
END

// Object 261: Razor
Events:
  FF - 0013
[0013] (1A) Var[109] = 2;
[0017] (14) print(255,"Razor - lead singer for the punk band,\x01`Razor and the Scummettes.`");
[0052] (42) startScript(114);
[0054] (00) stopObjectCode();
END

// Object 262: Michael
Events:
  FF - 0013
[0013] (1A) Var[109] = 4;
[0017] (14) print(255,"Michael - award winning photographer\x01for the college newspaper.");
[0052] (42) startScript(114);
[0054] (00) stopObjectCode();
END

// Object 263: Bernard
Events:
  FF - 0013
[0013] (1A) Var[109] = 5;
[0017] (14) print(255,"Bernard - president of the physics club\x01and winner of the college's Geek Award.");
[005D] (42) startScript(114);
[005F] (00) stopObjectCode();
END

// Object 264: Wendy
Events:
  FF - 0013
[0013] (1A) Var[109] = 6;
[0017] (14) print(255,"Wendy - wants to be a famous novelist\x01and is waiting for a big break.");
[0052] (42) startScript(114);
[0054] (00) stopObjectCode();
END

// Object 265: Jeff
Events:
  FF - 0013
[0013] (1A) Var[109] = 7;
[0017] (14) print(255,"Jeff - usually hangs out on the beach,\x01responds to the name, Surfer Dude.");
[0057] (42) startScript(114);
[0059] (00) stopObjectCode();
END

// Object 395: Dave
Events:
  FF - 0013
[0013] (1C) startSound(54);
[0015] (14) print(255,"Dave - Sandy's boyfriend.\x01Organizer of the rescue effort.");
[004A] (00) stopObjectCode();
END

// Object 403: Start
Events:
  FF - 0013
[0013] (1C) startSound(54);
[0015] (78) if (Var[111] < 3) {
[001B] (14)   print(255,"  Please select two kids besides Dave.");
[003E] (18) } else {
[0041] (1A)   Var[110] = 1;
[0045] (**) }
[0045] (00) stopObjectCode();
END
