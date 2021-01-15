// EN
[0000] (1A) VAR_TMR_1 = 0;
[0005] (1A) Var[108] = 0;
[000A] (07) setState(942,0);
[000E] (28) if (!Bit[86]) {
[0013] (28)   if (!Var[108]) {
[0018] (0A)     startScript(201,[]);
[001B] (**)   }
[001B] (28) } else if (!Bit[87]) {
[0023] (0A)   startScript(202,[]);
[0026] (18) } else {
[0029] (0A)   startScript(203,[]);
[002C] (**) }
[002C] (00) stopObjectCode();
END

Script# 201
[0000] (0C) Resource.loadRoom(55);
[0003] (1A) VAR_TIMER_NEXT = 5;
[0008] (1A) Local[0] = 1;
[000D] (AD) putActorInRoom(Local[0],0);
[0011] (46) Local[0]++;
[0014] (44) unless (Local[0] > 9) goto 000D;
[001B] (80) breakHere();
[001C] (80) breakHere();
[001D] (1A) VAR_TMR_1 = 0;
[0022] (07) setState(942,1);
[0026] (80) breakHere();
[0027] (9A) Local[1] = VAR_TMR_1;
[002C] (78) if (Local[1] < 40) {
[0033] (1A)   VAR_MACHINE_SPEED = 2;
[0038] (78) } else if (Local[1] < 100) {
[0042] (1A)   VAR_MACHINE_SPEED = 1;
[0047] (18) } else {
[004A] (1A)   VAR_MACHINE_SPEED = 0;
[004F] (**) }
[004F] (48) if (VAR_MACHINE_SPEED == 0) {
[0056] (1A)   VAR_CAMERA_FAST_X = 1;
[005B] (18) } else {
[005E] (1A)   VAR_CAMERA_FAST_X = 0;
[0063] (**) }
[0063] (80) breakHere();
[0064] (4A) startScript(200,[43,51],R);
[006D] (4A) startScript(200,[78,100],R);
[0076] (4A) startScript(200,[104,61],R);
[007F] (4A) startScript(200,[135,87],R);
[0088] (4A) startScript(200,[167,62],R);
[0091] (4A) startScript(200,[200,95],R);
[009A] (4A) startScript(200,[218,51],R);
[00A3] (4A) startScript(200,[250,109],R);
[00AC] (4A) startScript(200,[280,51],R);
[00B5] (1A) Var[155] = 0;
[00BA] (80) breakHere();
[00BB] (5A) Var[155] += 10;
[00C0] (44) unless (Var[155] > 320) goto 00BA;
[00C7] (80) breakHere();
[00C8] (68) VAR_RESULT = isScriptRunning(200);
[00CC] (28) unless (!VAR_RESULT) goto 00C7;
[00D1] (1A) Var[108] = 1;
[00D6] (A0) stopObjectCode();
END

Script# 202 // Opening Credits
[0000] (2C) CursorHide();
[0002] (2C) UserputOff();
[0004] (80) breakHere();
[0005] (14) print(254,[Center(),Color(5)]);
[000B] (2C) InitCharset(4);
[000E] (14) print(254,[Pos(160,10)]);
[0016] (14) print(254,[Pos(160,5),Color(13),Text("Monkey Island")]);
[002E] (14) print(254,[Pos(160,38),Text("Ron Gilbert")]);
[0042] (14) print(254,[Pos(160,25),Color(13),Text("Created and Designed by")]);
[0064] (14) print(254,[Pos(160,68),Text("Dave Grossman, Tim Schafer")]);
[0087] (14) print(254,[Pos(160,83),Text("and Ron Gilbert")]);
[009F] (14) print(254,[Pos(160,55),Color(13),Text("Written and Programmed by")]);
[00C3] (14) print(254,[Pos(160,112),Text("Steve Purcell, Mark Ferrari")]);
[00E7] (14) print(254,[Pos(160,128),Text("Mike Ebert and Martin Cameron")]);
[010D] (14) print(254,[Pos(160,100),Color(13),Text("Art and animation by")]);
[012C] (14) print(254,[Pos(160,158),Text("Tami Borowick, Tony Hsieh")]);
[014E] (14) print(254,[Pos(160,172),Text("and Michael Stemmle")]);
[016A] (14) print(254,[Pos(160,145),Color(13),Text("Demo by")]);
[017C] (2C) InitCharset(2);
[017F] (2E) delay(480);
[0183] (1A) Bit[87] = 1;
[0188] (5C) oldRoomEffect-set(-32383);
[018C] (42) chainScript(97,[]);
[018F] (A0) stopObjectCode();
END

Script# 203 // Contest Questions
[0000] (80) breakHere();
[0001] (2C) InitCharset(4);
[0004] (14) print(254,[Center(),Color(13),Pos(160,10),Text("CONTEST QUESTIONS")]);
[0021] (2C) InitCharset(1);
[0024] (58) beginOverride();
[0026] (18) goto 0196;
[0029] (80) breakHere();
[002A] (14) print(254,[Left(),Color(5)]);
[0030] (14) print(254,[Pos(10,30),Text("1. What are the coordinates of Monkey Island?")]);
[0066] (14) print(254,[Pos(10,46),Text("2. What time is it on M\x82l\x88e Island\x0F?")]);
[0093] (14) print(254,[Pos(10,62),Text("3. What is in the keg a pirate is sitting on?")]);
[00C9] (14) print(254,[Pos(10,78),Text("4. What flavor breath mints are in the bar?")]);
[00FD] (14) print(254,[Pos(10,94),Text("5. What kind of fish is on the dock?")]);
[012A] (14) print(254,[Pos(10,110),Text("6. What is the name of the bar?")]);
[0152] (14) print(254,[Pos(10,126),Text("7. What has been a 50 year tradition on M\x88l\x82e Island\x0F?")]);
[0191] (80) breakHere();
[0192] (80) breakHere();
[0193] (18) goto 0192;
[0196] (98) systemOps(3);
[0198] (A0) stopObjectCode();
END

// Object 942
Events:
END
