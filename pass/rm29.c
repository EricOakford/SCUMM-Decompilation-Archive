/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 29: Walter Donovan's Penthouse (donovans)
 */

// EN
[0000] (33) SetScreen(16,144)
[0006] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200 // Translation Fail
[0000] (D8) printEgo([Text("Just give me a moment^")]);
[0019] (AE) WaitForMessage();
[001B] (11) animateCostume(1,13);
[001E] (13) ActorOps(1,[TalkAnimNr(6,5)]);
[0024] (2E) delay(120);
[0028] (D8) printEgo([Text("It's something about Holy Grain - perhaps some special" + newline() + "wheat the priests ate?")]);
[0079] (AE) WaitForMessage();
[007B] (14) print(5,[Text("I'm sorry, Dr. Jones.  Evidently you're not the right man for" + newline() + "the job after all." + wait() + "Perhaps you're just an illegitimate copy of the man" + newline() + "I thought you were.")]);
[011A] (AE) WaitForMessage();
[011C] (46) Var[108]++;
[011F] (A0) stopObjectCode();
END

Script# 201 // Translation Success
[0000] (13) ActorOps(1,[TalkAnimNr(6,5)]);
[0006] (80) breakHere();
[0007] (D8) printEgo([Left(),Pos(0,0),Text("The top portion is missing, but the rest^" + wait() + "`^a spring welling up inside him for eternal life.`" + newline() + "`Through the desert to the canyon of the crescent moon.`")]);
[00A8] (AE) WaitForMessage();
[00AA] (13) ActorOps(1,[TalkAnimNr(4,5)]);
[00B0] (D8) printEgo([Text("`Where the cup that holds the blood of Jesus Christ" + newline() + "our Lord resides forever.`")]);
[0102] (AE) WaitForMessage();
[0104] (14) print(5,[Text("The Holy Grail, Dr. Jones.  It will bring eternal life" + newline() + "to whoever drinks from it.")]);
[015A] (AE) WaitForMessage();
[015C] (D8) printEgo([Text("An old man's dream.")]);
[0172] (AE) WaitForMessage();
[0174] (14) print(5,[Text("Every man's dream.  Including your father.  He's the" + newline() + "foremost Grail scholar in the world today!" + wait() + "In any case, an attempt to recover the Grail is under way.")]);
[0214] (AE) WaitForMessage();
[0216] (D8) printEgo([Text("But the slab's incomplete.  You don't know where to look.")]);
[0252] (AE) WaitForMessage();
[0254] (14) print(5,[Text("This slab is one of two markers left by three knights" + newline() + "during the First Crusade.")]);
[02A8] (4A) startScript(44,[5,321,112,244],R);
[02B7] (52) actorFollowCamera(5);
[02B9] (AE) WaitForMessage();
[02BB] (14) print(5,[Text("This Franciscan manuscript tells of the second marker" + newline() + "buried with one of the Knights.")]);
[0315] (AE) WaitForMessage();
[0317] (14) print(5,[Text("It suggests that a description of the Grail can" + newline() + "be found on the way to the Knight's tomb.")]);
[0375] (80) breakHere();
[0376] (80) breakHere();
[0377] (4A) startScript(44,[1,290,103,249,13],R);
[0389] (AE) WaitForMessage();
[038B] (80) breakHere();
[038C] (68) VAR_RESULT = isScriptRunning(44);
[0390] (28) unless (!VAR_RESULT) goto 038B;
[0395] (80) breakHere();
[0396] (80) breakHere();
[0397] (80) breakHere();
[0398] (D8) printEgo([Text("It also says a painting was made of the Grail that answers" + newline() + "a question my Father had: Does the Grail actually glow?")]);
[040E] (AE) WaitForMessage();
[0410] (11) animateCostume(1,9);
[0413] (D8) printEgo([Text("But it doesn't say where the Knight's tomb might be found!")]);
[0450] (AE) WaitForMessage();
[0452] (4A) startScript(44,[5,245,86,247],R);
[0461] (14) print(5,[Text("Our team leader believes it is in Venice, Italy -" + newline() + "and that is where he disappeared!")]);
[04B9] (2E) delay(60);
[04BD] (AE) WaitForMessage();
[04BF] (AE) WaitForActor(5);
[04C2] (2E) delay(60);
[04C6] (11) animateCostume(5,246);
[04C9] (2E) delay(40);
[04CD] (14) print(5,[Text("We'd like you to take over his quest.")]);
[04F6] (2E) delay(60);
[04FA] (11) animateCostume(1,9);
[04FD] (80) breakHere();
[04FE] (11) animateCostume(1,247);
[0501] (80) breakHere();
[0502] (AE) WaitForMessage();
[0504] (D8) printEgo([Text("You've got the wrong Jones.  You should talk to my father.")]);
[0541] (AE) WaitForMessage();
[0543] (14) print(5,[Text("We already have.  He's the man who disappeared.")]);
[0576] (AE) WaitForMessage();
[0578] (2E) delay(120);
[057C] (46) Var[108]++;
[057F] (A0) stopObjectCode();
END
