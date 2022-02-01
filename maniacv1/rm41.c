/**
 * Maniac Mansion: V1 Retail
 * 
 * Room 41: Publisher's Office
 */

// EN
[0000] (00) stopObjectCode();
END

// EX
[0000] (20) stopMusic();
[0001] (68) VAR_RESULT = isScriptRunning(12);
[0004] (48) if (VAR_RESULT == 1) {
[000A] (1C)   startSound(32);
[000C] (**) }
[000C] (00) stopObjectCode();
END

// Object 259
Events:
END

// Object 287
Events:
END
