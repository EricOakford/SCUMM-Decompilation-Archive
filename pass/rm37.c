/**
 * Lucasfilm Passport to Adventure
 * 
 * Room 37: init
 */

// EN
[0000] (28) if (!Bit[66]) {
[0005] (0A)   startScript(200,[]);
[0008] (**) }
[0008] (00) stopObjectCode();
END

// EX
[0000] (00) stopObjectCode();
END

Script# 200
[0000] (7A) VerbOps(9,[New(),SetXY(16,144),Image(493),Off()]);
[000D] (7A) VerbOps(10,[New(),SetXY(16,144),Image(494),Off()]);
[001A] (7A) VerbOps(11,[New(),SetXY(16,144),Image(495),Off()]);
[0027] (7A) VerbOps(12,[New(),SetXY(16,144),Image(496),Off()]);
[0034] (7A) VerbOps(13,[New(),SetXY(16,144),Image(497),Off()]);
[0041] (7A) VerbOps(14,[New(),SetXY(48,144),Image(490),Off()]);
[004E] (7A) VerbOps(15,[New(),SetXY(48,144),Image(491),Off()]);
[005B] (7A) VerbOps(16,[New(),SetXY(48,144),Image(467),Off()]);
[0068] (7A) VerbOps(17,[New(),SetXY(48,144),Image(468),Off()]);
[0075] (7A) VerbOps(18,[New(),SetXY(48,144),Image(469),Off()]);
[0082] (7A) VerbOps(19,[New(),SetXY(72,144),Image(471),Off()]);
[008F] (7A) VerbOps(20,[New(),SetXY(72,144),Image(472),Off()]);
[009C] (7A) VerbOps(21,[New(),SetXY(72,144),Image(473),Off()]);
[00A9] (7A) VerbOps(22,[New(),SetXY(72,144),Image(474),Off()]);
[00B6] (7A) VerbOps(23,[New(),SetXY(72,144),Image(475),Off()]);
[00C3] (7A) VerbOps(24,[New(),SetXY(96,144),Image(477),Off()]);
[00D0] (7A) VerbOps(25,[New(),SetXY(96,144),Image(478),Off()]);
[00DD] (7A) VerbOps(26,[New(),SetXY(96,144),Image(479),Off()]);
[00EA] (7A) VerbOps(27,[New(),SetXY(96,144),Image(480),Off()]);
[00F7] (7A) VerbOps(28,[New(),SetXY(96,144),Image(481),Off()]);
[0104] (7A) VerbOps(29,[New(),SetXY(120,144),Image(499),Off()]);
[0111] (7A) VerbOps(30,[New(),SetXY(120,144),Image(500),Off()]);
[011E] (7A) VerbOps(31,[New(),SetXY(120,144),Image(501),Off()]);
[012B] (7A) VerbOps(32,[New(),SetXY(120,144),Image(502),Off()]);
[0138] (7A) VerbOps(33,[New(),SetXY(120,144),Image(503),Off()]);
[0145] (7A) VerbOps(44,[New(),SetXY(192,144),Image(504),Off()]);
[0152] (7A) VerbOps(45,[New(),SetXY(192,144),Image(505),Off()]);
[015F] (7A) VerbOps(46,[New(),SetXY(192,144),Image(506),Off()]);
[016C] (7A) VerbOps(47,[New(),SetXY(192,144),Image(507),Off()]);
[0179] (7A) VerbOps(48,[New(),SetXY(192,144),Image(508),Off()]);
[0186] (26) setVarRange(Var[221],8,[16,48,72,96,120,144,168,192]);
[0192] (7A) VerbOps(1,[New(),SetXY(16,144),Image(492),Off()]);
[019F] (7A) VerbOps(2,[New(),SetXY(48,144),Image(489),Off()]);
[01AC] (7A) VerbOps(3,[New(),SetXY(72,144),Image(470),Off()]);
[01B9] (7A) VerbOps(4,[New(),SetXY(96,144),Image(476),Off()]);
[01C6] (7A) VerbOps(5,[New(),SetXY(120,144),Image(482),Off()]);
[01D3] (7A) VerbOps(6,[New(),SetXY(144,144),Image(483),Off()]);
[01E0] (7A) VerbOps(7,[New(),SetXY(168,144),Image(484),Off()]);
[01ED] (7A) VerbOps(8,[New(),SetXY(192,144),Image(485),Off()]);
[01FA] (7A) VerbOps(49,[New(),SetXY(48,168),Image(498),Off()]);
[0207] (7A) VerbOps(50,[New(),SetXY(24,168),Image(486),Off()]);
[0214] (7A) VerbOps(51,[New(),SetXY(24,168),Image(487),Off()]);
[0221] (7A) VerbOps(53,[New(),SetXY(96,184),Image(488),Off()]);
[022E] (7A) VerbOps(54,[New()]);
[0232] (72) loadRoom(37);
[0234] (80) breakHere();
[0235] (1A) Bit[67] = 0;
[023A] (1A) Var[186] = 0;
[023F] (1A) Bit[70] = 0;
[0244] (1A) Var[217] = 3;
[0249] (A6) setVarRange(Local[2],3,[72,513,0]);
[0253] (16) Local[1] = getRandomNr(2);
[0257] (9A) Local[0] = Local[2 + Local[1]];
[025E] (9A) Var[263 + 6] = Local[0];
[0265] (1A) Var[263 + 7] = 61;
[026C] (A6) setVarRange(Local[2],3,[4616,4608,4617]);
[0276] (16) Local[1] = getRandomNr(2);
[027A] (9A) Local[0] = Local[2 + Local[1]];
[0281] (9A) Var[263 + 4] = Local[0];
[0288] (1A) Var[263 + 5] = 15419;
[028F] (A6) setVarRange(Var[263 + 0],2,[12930,513]);
[0299] (A6) setVarRange(Local[2],3,[5193,5120,4177]);
[02A3] (16) Local[1] = getRandomNr(2);
[02A7] (9A) Local[0] = Local[2 + Local[1]];
[02AE] (9A) Var[263 + 2] = Local[0];
[02B5] (1A) Var[263 + 3] = 14905;
[02BC] (A6) setVarRange(Local[2],3,[4120,5195,4305]);
[02C6] (16) Local[1] = getRandomNr(2);
[02CA] (9A) Local[0] = Local[2 + Local[1]];
[02D1] (9A) Var[263 + 8] = Local[0];
[02D8] (1A) Var[263 + 9] = 16190;
[02DF] (A6) setVarRange(Local[2],3,[1242,729,1539]);
[02E9] (16) Local[1] = getRandomNr(2);
[02ED] (9A) Local[0] = Local[2 + Local[1]];
[02F4] (9A) Var[263 + 16] = Local[0];
[02FB] (1A) Var[263 + 17] = 70;
[0302] (A6) setVarRange(Local[2],3,[5340,4756,5196]);
[030C] (16) Local[1] = getRandomNr(2);
[0310] (9A) Local[0] = Local[2 + Local[1]];
[0317] (9A) Var[263 + 12] = Local[0];
[031E] (1A) Var[263 + 13] = 17218;
[0325] (A6) setVarRange(Local[2],3,[5349,4765,4181]);
[032F] (16) Local[1] = getRandomNr(2);
[0333] (9A) Local[0] = Local[2 + Local[1]];
[033A] (9A) Var[263 + 10] = Local[0];
[0341] (1A) Var[263 + 11] = 16704;
[0348] (A6) setVarRange(Local[2],3,[4612,4356,4244]);
[0352] (16) Local[1] = getRandomNr(2);
[0356] (9A) Local[0] = Local[2 + Local[1]];
[035D] (9A) Var[263 + 14] = Local[0];
[0364] (1A) Var[263 + 15] = 17732;
[036B] (A6) setVarRange(Local[2],3,[6509,6728,5977]);
[0375] (16) Local[1] = getRandomNr(2);
[0379] (9A) Local[0] = Local[2 + Local[1]];
[0380] (9A) Var[263 + 18] = Local[0];
[0387] (1A) Var[263 + 19] = 18503;
[038E] (A6) setVarRange(Local[2],3,[2637,1899,2781]);
[0398] (16) Local[1] = getRandomNr(2);
[039C] (9A) Local[0] = Local[2 + Local[1]];
[03A3] (9A) Var[263 + 20] = Local[0];
[03AA] (1A) Var[263 + 21] = 73;
[03B1] (A6) setVarRange(Local[2],3,[2565,360,2853]);
[03BB] (16) Local[1] = getRandomNr(2);
[03BF] (9A) Local[0] = Local[2 + Local[1]];
[03C6] (9A) Var[263 + 22] = Local[0];
[03CD] (1A) Var[263 + 23] = 74;
[03D4] (A6) setVarRange(Local[2],3,[5934,4318,4102]);
[03DE] (16) Local[1] = getRandomNr(2);
[03E2] (9A) Local[0] = Local[2 + Local[1]];
[03E9] (9A) Var[263 + 24] = Local[0];
[03F0] (1A) Var[263 + 25] = 19531;
[03F7] (A6) setVarRange(Local[2],3,[7174,7534,7093]);
[0401] (16) Local[1] = getRandomNr(2);
[0405] (9A) Local[0] = Local[2 + Local[1]];
[040C] (9A) Var[263 + 28] = Local[0];
[0413] (1A) Var[263 + 29] = 20559;
[041A] (A6) setVarRange(Local[2],3,[6046,7086,4486]);
[0424] (16) Local[1] = getRandomNr(2);
[0428] (9A) Local[0] = Local[2 + Local[1]];
[042F] (9A) Var[263 + 26] = Local[0];
[0436] (1A) Var[263 + 27] = 20045;
[043D] (A6) setVarRange(Var[263 + 30],2,[8479,81]);
[0447] (A8) if (Bit[13]) {
[044C] (0A)   startScript(129,[15]);
[0452] (**) }
[0452] (1A) Bit[66] = 1;
[0457] (72) loadRoom(36);
[0459] (A0) stopObjectCode();
END
