/**
 * Maniac Mansion: V2 Retail
 * 
 * Room 50: Save/Load Screen
 */

// EN
[0000] (19) doSentence(253,544,0,1);
[0007] (0C) loadSound(19)
[000A] (0C) lockSound(19)
[000D] (3C) stopSound(32);
[000F] (3C) stopSound(33);
[0011] (00) stopObjectCode();
END

// EX
[0000] (A4) loadRoomWithEgo(VAR_ACTOR_RANGE_MAX,255,0,104);
[0005] (01) putActor(12,72,1);
[0009] (01) putActor(0,2,0);
[000D] (1C) startSound(32);
[000F] (00) stopObjectCode();
END

// Object 541
Events:
  FF - 0013
[0013] (00) stopObjectCode();
END

// Object 542
Events:
  FF - 0013
[0013] (00) stopObjectCode();
END

// Object 543
Events:
  FD - 0016
  FF - 0015
[0015] (00) stopObjectCode();
[0016] (1A) Var[109] = 0;
[001A] (FA) VerbOps(Delete(Var[109]););
[001D] (46) Var[109]++;
[001F] (44) unless (Var[109] > 14) goto 001A;
[0025] (60) cursorCommand(0, 0);
[0028] (00) stopObjectCode();
END

// Object 544
Events:
  FD - 0016
  FF - 0015
[0015] (00) stopObjectCode();
[0016] (47) clearState08(541);
[0019] (47) clearState08(542);
[001C] (47) clearState08(543);
[001F] (47) clearState08(544);
[0022] (57) setState02(544);
[0025] (47) clearState08(545);
[0028] (00) stopObjectCode();
END

// Object 545
Events:
  FD - 0013
[0013] (28) if (!Var[109]) {
[0017] (7A)   VerbOps(New-35(0,19,0,0,"Game A@@"));
[0026] (**) }
[0026] (48) if (Var[109] == 1) {
[002C] (7A)   VerbOps(New-36(8,19,1,0,"Game B@@"));
[003B] (**) }
[003B] (48) if (Var[109] == 2) {
[0041] (7A)   VerbOps(New-37(16,19,2,0,"Game C@@"));
[0050] (**) }
[0050] (48) if (Var[109] == 3) {
[0056] (7A)   VerbOps(New-38(24,19,3,0,"Game D@@"));
[0065] (**) }
[0065] (48) if (Var[109] == 4) {
[006B] (7A)   VerbOps(New-39(32,19,4,0,"Game E@@"));
[007A] (**) }
[007A] (48) if (Var[109] == 5) {
[0080] (7A)   VerbOps(New-40(0,21,5,0,"Game F@@"));
[008F] (**) }
[008F] (48) if (Var[109] == 6) {
[0095] (7A)   VerbOps(New-41(8,21,6,0,"Game G@@"));
[00A4] (**) }
[00A4] (48) if (Var[109] == 7) {
[00AA] (7A)   VerbOps(New-42(16,21,7,0,"Game H@@"));
[00B9] (**) }
[00B9] (48) if (Var[109] == 8) {
[00BF] (7A)   VerbOps(New-43(24,21,8,0,"Game I@@"));
[00CE] (**) }
[00CE] (48) if (Var[109] == 9) {
[00D4] (7A)   VerbOps(New-44(32,21,9,0,"Game J@@"));
[00E3] (**) }
[00E3] (00) stopObjectCode();
END

// Object 546
Events:
  FD - 0013
[0013] (28) if (!Var[109]) {
[0017] (7A)   VerbOps(New-35(0,19,0,0,"Game A*@"));
[0026] (**) }
[0026] (48) if (Var[109] == 1) {
[002C] (7A)   VerbOps(New-36(8,19,1,0,"Game B*@"));
[003B] (**) }
[003B] (48) if (Var[109] == 2) {
[0041] (7A)   VerbOps(New-37(16,19,2,0,"Game C*@"));
[0050] (**) }
[0050] (48) if (Var[109] == 3) {
[0056] (7A)   VerbOps(New-38(24,19,3,0,"Game D*@"));
[0065] (**) }
[0065] (48) if (Var[109] == 4) {
[006B] (7A)   VerbOps(New-39(32,19,4,0,"Game E*@"));
[007A] (**) }
[007A] (48) if (Var[109] == 5) {
[0080] (7A)   VerbOps(New-40(0,21,5,0,"Game F*@"));
[008F] (**) }
[008F] (48) if (Var[109] == 6) {
[0095] (7A)   VerbOps(New-41(8,21,6,0,"Game G*@"));
[00A4] (**) }
[00A4] (48) if (Var[109] == 7) {
[00AA] (7A)   VerbOps(New-42(16,21,7,0,"Game H*@"));
[00B9] (**) }
[00B9] (48) if (Var[109] == 8) {
[00BF] (7A)   VerbOps(New-43(24,21,8,0,"Game I*@"));
[00CE] (**) }
[00CE] (48) if (Var[109] == 9) {
[00D4] (7A)   VerbOps(New-44(32,21,9,0,"Game J*@"));
[00E3] (**) }
[00E3] (00) stopObjectCode();
END
