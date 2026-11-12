#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_705860(_QWORD);
__int64 GameRoutine_705e40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f92940[])();
extern __int64 (*GameData_1f92970[])();
extern __int64 (*GameData_1f92a10[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca480;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21ca498;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 SkillFile_DeletingDestructor_703640(_QWORD* a1);
__int64 SkillFile_Destructor(_QWORD* a1);
__int64 SkillFile_DeletingDestructor_703770(_QWORD* a1);
__int64 game_SkillFile_OnBuild_lambda0_Invoke(__int64 a1, __int64* a2,
                                              __int64 a3, __int64 a4);
_QWORD* GameRoutine_66dd60(_QWORD* result, unsigned __int64, _DWORD*);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_703310();
__int64 GameRoutine_705590(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_705700(_QWORD, _QWORD);
__int64 GameRoutine_707e20(_QWORD, _QWORD);
__int64 GameRoutine_7095c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 Resources_66bfc0(_QWORD);
__int64 UnitSkillList_7c6d00(void);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cf20(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d5a0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_FlagCondition_Append(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strstr(_QWORD, _QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN GameData_21ca490;
extern _UNKNOWN game_g_random_mutex;
extern __int16 GameData_21ca458;
extern __int64 (*GameData_1f92b40[])();
extern __int64 (*GameData_1f92bd0[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d328;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21ca3f8;
extern __int64 GameData_21ca400;
extern __int64 GameData_21ca408;
extern __int64 GameData_21ca410;
extern __int64 GameData_21ca420;
extern __int64 GameData_21ca428;
extern __int64 GameData_21ca430;
extern __int64 GameData_21ca438;
extern __int64 GameData_21ca460;
extern int GameData_21ca418;
extern int GameData_21ca440;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);
void __attribute__((noreturn)) GameRoutine_705570(void);
void __attribute__((noreturn)) GameRoutine_705810(void);
__int64* game_SkillFile_OnBuild_alt1(unsigned __int64 primeEm) __asm__(
    "game_SkillFile_OnBuild");
__int64 SkillFile_Unknown5_alt1(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                                __int64 a5,
                                __int64 a6) __asm__("SkillFile_Unknown5");
unsigned __int64 game_SkillFile_OnBuild_lambda1_Invoke(unsigned __int64 result,
                                                       unsigned __int64* a2);
_QWORD* game_FlagCondition_Append_alt1(_QWORD*, unsigned __int16*) __asm__(
    "game_FlagCondition_Append");
__int64*
GameRoutine_7fb7c0_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_7fb7c0");
__int64 GameHr_84cf20(__int64, __int64, char);
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 GameRoutine_705700_alt1(__int64, __int64) __asm__("GameRoutine_705700");
__int64 Resources_66bfc0_alt1(unsigned __int64*) __asm__("Resources_66bfc0");
__int64 UnitSkillList_7c6d00_alt1() __asm__("UnitSkillList_7c6d00");
__int64 UnitSkillList_84cc00_alt1(__int64, _DWORD*,
                                  __int64) __asm__("UnitSkillList_84cc00");
__int64
UnitSkillList_84d5a0_alt1(__int64,
                          unsigned __int16*) __asm__("UnitSkillList_84d5a0");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
__int64 strstr_alt1(const char*, const char*) __asm__("strstr");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_705590_alt1(__int64*, unsigned __int8, int, unsigned __int8,
                             unsigned int) __asm__("GameRoutine_705590");
void GameRoutine_707e20_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_707e20");
void GameRoutine_7095c0_alt1(__int64, unsigned int,
                             __int64) __asm__("GameRoutine_7095c0");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_6e3e20_alt1() __asm__("GameRoutine_6e3e20");
void __attribute__((noreturn))
GameRoutine_705570_alt1() __asm__("GameRoutine_705570");
void __attribute__((noreturn))
GameRoutine_705810_alt1() __asm__("GameRoutine_705810");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_SkillFile_OnBuild(_QWORD* a1);
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
extern __int64 game_g_shared_system_skills_ptr_alt1 __asm__(
    "game_g_shared_system_skills_ptr");
void SkillFile_Unknown5();

void game_SkillFile_OnBuild(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned __int64 v2;
  __int64* v3;
  __int64* v4;
  int v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  float v21;
  float v22;
  float v23;
  _BOOL8 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 primeEm;
  __int64 (**v28)();
  __int64 (**v29)();
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 (**v34)();
  unsigned __int64 v35;
  __int64 v36;
  __int64 (*v37)();
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 (*v40)();
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 (*v43)();
  unsigned __int64 v44;
  int v45;
  int v46;
  __int64 (**v47)();
  __int64 v48;
  __int64 (**v49)();
  __int64 (*v50)();
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  bool v65;
  __int64* v66;
  __int64* v67;
  __int64* i;
  unsigned __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 (**v74)();
  __int64 v75;
  __int64* v76;
  __int64 v77;
  unsigned __int64* v78;
  unsigned __int64* v79;
  unsigned __int64 v80;
  __int64 v81;
  bool v82;
  bool v83;
  bool v84;
  bool v85;
  bool v86;
  bool v87;
  bool v88;
  bool v89;
  float v90;
  bool v91;
  bool v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  int v99;
  unsigned int v100;
  unsigned int v101;
  int v102;
  __int64 v103;
  __int64 v104;
  __int64* v105;
  int v106;
  unsigned int v107;
  unsigned int v108;
  int v109;
  unsigned int v110;
  __int64 v111;
  int v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  int v120;
  int v121;
  __int64 v122;
  int v123;
  __int64 v124;
  __int64 v125;
  _DWORD* v126;
  __int64 v127;
  __int64 v128;
  int v129;
  __int64 v130;
  int v131;
  int v132;
  __int64 v133;
  int v134;
  __int64 v135;
  int v136;
  int v137;
  __int64 v138;
  int v139;
  __int64 v140;
  int v141;
  int v142;
  __int64 v143;
  int* v144;
  int v145;
  __int64 v146;
  __int64 v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  char v155;
  char v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64* v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  unsigned __int16* v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  int v177;
  int v178;
  __int64 v179;
  int v180;
  __int64 v181;
  __int64 v182;
  _DWORD* v183;
  __int64 v184;
  __int64 v185;
  int v186;
  char v187;
  __int64 v188;
  char v189;
  int v190;
  __int64 v191;
  int v192;
  char v193;
  __int64 v194;
  char v195;
  int v196;
  __int64 v197;
  int v198;
  char v199;
  __int64 v200;
  char v201;
  int v202;
  __int64 v203;
  char v204;
  char v205;
  int* v206;
  int v207;
  __int64 v208;
  char v209;
  char v210;
  unsigned __int64 v211;
  unsigned __int64 v212;
  int v213;
  __int64 v214;
  unsigned __int64 v215;
  __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  unsigned __int64 v223;
  __int64 v224;
  __int64 v225;
  unsigned __int64 v226;
  unsigned __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  __int64 v230;
  int v231;
  __int64 v232;
  unsigned __int64 v233;
  __int64 v234;
  unsigned __int64 v235;
  __int64 v236;
  __int64 v237;
  unsigned __int64 v238;
  __int64 v239;
  unsigned __int64 v240;
  __int64 v241;
  __int64* v242;
  __int64* v243;
  __int64* v244;
  __int64 v245;
  __int64* v246;
  int v247;
  __int64 v248;
  __int64 v249;
  __int64* v250;
  __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  unsigned __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  unsigned __int16* v275;
  __int64 v276;
  __int64* v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  int v284;
  int v285;
  __int64 v286;
  int v287;
  __int64 v288;
  __int64 v289;
  _DWORD* v290;
  __int64 v291;
  __int64 v292;
  int v293;
  char v294;
  __int64 v295;
  char v296;
  int v297;
  __int64 v298;
  int v299;
  char v300;
  __int64 v301;
  char v302;
  int v303;
  __int64 v304;
  int v305;
  char v306;
  __int64 v307;
  char v308;
  int v309;
  __int64 v310;
  char v311;
  char v312;
  int* v313;
  int v314;
  __int64 v315;
  char v316;
  char v317;
  unsigned __int64 v318;
  unsigned __int64 v319;
  int v320;
  __int64 v321;
  unsigned __int64 v322;
  __int64 v323;
  unsigned __int64 v324;
  __int64 v325;
  unsigned __int64 v326;
  __int64 v327;
  unsigned __int64 v328;
  __int64 v329;
  unsigned __int64 v330;
  __int64 v331;
  __int64 v332;
  unsigned __int64 v333;
  unsigned __int64 v334;
  unsigned __int64 v335;
  __int64 v336;
  __int64 v337;
  int v338;
  __int64 v339;
  unsigned __int64 v340;
  __int64 v341;
  unsigned __int64 v342;
  __int64 v343;
  __int64 v344;
  unsigned __int64 v345;
  __int64 v346;
  unsigned __int64 v347;
  __int64 v348;
  __int64* v349;
  __int64* v350;
  __int64* v351;
  __int64 v352;
  __int64* v353;
  int v354;
  __int64 v355;
  __int64 v356;
  __int64* v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64* v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  __int64 v374;
  int v375;
  int v376;
  __int64 v377;
  int v378;
  __int64 v379;
  __int64 v380;
  _DWORD* v381;
  __int64 v382;
  __int64 v383;
  int v384;
  char v385;
  __int64 v386;
  char v387;
  int v388;
  __int64 v389;
  int v390;
  char v391;
  __int64 v392;
  char v393;
  int v394;
  __int64 v395;
  int v396;
  char v397;
  __int64 v398;
  char v399;
  int v400;
  __int64 v401;
  char v402;
  char v403;
  int* v404;
  int v405;
  __int64 v406;
  char v407;
  char v408;
  unsigned __int64 v409;
  unsigned __int64 v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  unsigned __int64 v414;
  unsigned __int64 v415;
  unsigned __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64* v419;
  __int64* v420;
  __int64* v421;
  __int64 v422;
  __int64* v423;
  int v424;
  __int64 v425;
  __int64 v426;
  __int64* v427;
  __int64 v428;
  __int64 v429;
  __int64 v430;
  __int64 v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  unsigned __int64 v444;
  __int64 v445;
  __int64* v446;
  __int64 v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  __int64 v453;
  __int64 v454;
  unsigned __int16* v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  int v463;
  int v464;
  __int64 v465;
  int v466;
  __int64 v467;
  __int64 v468;
  _DWORD* v469;
  __int64 v470;
  __int64 v471;
  int v472;
  char v473;
  __int64 v474;
  char v475;
  int v476;
  __int64 v477;
  int v478;
  char v479;
  __int64 v480;
  char v481;
  int v482;
  __int64 v483;
  int v484;
  char v485;
  __int64 v486;
  char v487;
  int v488;
  __int64 v489;
  char v490;
  char v491;
  int* v492;
  int v493;
  __int64 v494;
  char v495;
  char v496;
  unsigned __int64 v497;
  unsigned __int64 v498;
  int v499;
  __int64 v500;
  unsigned __int64 v501;
  __int64 v502;
  unsigned __int64 v503;
  __int64 v504;
  unsigned __int64 v505;
  __int64 v506;
  unsigned __int64 v507;
  __int64 v508;
  unsigned __int64 v509;
  __int64 v510;
  __int64 v511;
  unsigned __int64 v512;
  unsigned __int64 v513;
  unsigned __int64 v514;
  __int64 v515;
  __int64 v516;
  int v517;
  __int64 v518;
  unsigned __int64 v519;
  __int64 v520;
  unsigned __int64 v521;
  __int64 v522;
  __int64 v523;
  unsigned __int64 v524;
  __int64 v525;
  unsigned __int64 v526;
  __int64 v527;
  __int64* v528;
  __int64* v529;
  __int64* v530;
  __int64 v531;
  __int64* v532;
  int v533;
  __int64 v534;
  __int64 v535;
  __int64* v536;
  __int64 v537;
  __int64 v538;
  __int64 v539;
  __int64 v540;
  __int64 v541;
  __int64 v542;
  __int64 v543;
  __int64 v544;
  __int64 v545;
  __int64 v546;
  __int64 v547;
  __int64 v548;
  __int64 v549;
  __int64 v550;
  unsigned __int64 v551;
  __int64 v552;
  __int64* v553;
  __int64 v554;
  __int64 v555;
  __int64 v556;
  __int64 v557;
  __int64 v558;
  __int64 v559;
  __int64 v560;
  __int64 v561;
  unsigned __int16* v562;
  __int64 v563;
  __int64 v564;
  __int64 v565;
  __int64 v566;
  __int64 v567;
  __int64 v568;
  __int64 v569;
  int v570;
  int v571;
  __int64 v572;
  int v573;
  __int64 v574;
  __int64 v575;
  _DWORD* v576;
  __int64 v577;
  __int64 v578;
  int v579;
  char v580;
  __int64 v581;
  char v582;
  int v583;
  __int64 v584;
  int v585;
  char v586;
  __int64 v587;
  char v588;
  int v589;
  __int64 v590;
  int v591;
  char v592;
  __int64 v593;
  char v594;
  int v595;
  __int64 v596;
  char v597;
  char v598;
  int* v599;
  int v600;
  __int64 v601;
  char v602;
  char v603;
  unsigned __int64 v604;
  unsigned __int64 v605;
  int v606;
  __int64 v607;
  unsigned __int64 v608;
  __int64 v609;
  unsigned __int64 v610;
  __int64 v611;
  unsigned __int64 v612;
  __int64 v613;
  unsigned __int64 v614;
  __int64 v615;
  unsigned __int64 v616;
  __int64 v617;
  __int64 v618;
  unsigned __int64 v619;
  unsigned __int64 v620;
  unsigned __int64 v621;
  __int64 v622;
  __int64 v623;
  int v624;
  __int64 v625;
  unsigned __int64 v626;
  __int64 v627;
  unsigned __int64 v628;
  __int64 v629;
  __int64 v630;
  unsigned __int64 v631;
  __int64 v632;
  unsigned __int64 v633;
  __int64 v634;
  __int64* v635;
  __int64* v636;
  __int64* v637;
  __int64 v638;
  __int64* v639;
  int v640;
  __int64 v641;
  __int64 v642;
  __int64* v643;
  __int64 v644;
  __int64 v645;
  __int64 v646;
  __int64 v647;
  __int64 v648;
  __int64 v649;
  __int64 v650;
  __int64 v651;
  __int64 v652;
  __int64 v653;
  __int64 v654;
  __int64 v655;
  __int64 v656;
  __int64 v657;
  __int64 v658;
  __int64* v659;
  __int64 v660;
  __int64 v661;
  __int64 v662;
  __int64 v663;
  __int64* v664;
  __int64 v665;
  unsigned __int64 v666;
  __int64 v667;
  __int64 v668;
  __int64 v669;
  unsigned int v670;
  __int64 v671;
  __int64 v672;
  __int64 v673;
  __int64 v674;
  __int64 v675;
  __int64 v676;
  __int64 v677;
  __int64 v678;
  __int64 v679;
  __int64 v680;
  __int64 v681;
  __int64 v682;
  __int64 v683;
  __int64 v684;
  __int64 v685;
  __int64 v686;
  _DWORD* v687;
  _DWORD* v688;
  __int64 v689;
  __int64 v690;
  __int64 v691;
  __int64 v692;
  __int64 v693;
  int v694;
  int v695;
  __int64 v696;
  int v697;
  __int64 v698;
  __int64 v699;
  _DWORD* v700;
  __int64 v701;
  __int64 v702;
  int v703;
  char v704;
  __int64 v705;
  char v706;
  int v707;
  __int64 v708;
  int v709;
  char v710;
  __int64 v711;
  char v712;
  int v713;
  __int64 v714;
  int v715;
  char v716;
  __int64 v717;
  char v718;
  int v719;
  __int64 v720;
  char v721;
  char v722;
  int* v723;
  int v724;
  __int64 v725;
  char v726;
  char v727;
  unsigned __int64 v728;
  unsigned __int64 v729;
  int v730;
  __int64 v731;
  unsigned __int64 v732;
  __int64 v733;
  unsigned __int64 v734;
  __int64 v735;
  unsigned __int64 v736;
  __int64 v737;
  unsigned __int64 v738;
  unsigned __int64 v739;
  __int64 v740;
  __int64 v741;
  __int64 v742;
  unsigned __int64 v743;
  unsigned __int64 v744;
  unsigned __int64 v745;
  __int64 v746;
  __int64 v747;
  int v748;
  __int64 v749;
  unsigned __int64 v750;
  __int64 v751;
  unsigned __int64 v752;
  __int64 v753;
  __int64 v754;
  unsigned __int64 v755;
  __int64 v756;
  unsigned __int64 v757;
  __int64 v758;
  __int64* v759;
  __int64* v760;
  __int64* v761;
  __int64 v762;
  __int64* v763;
  int v764;
  __int64 v765;
  __int64 v766;
  __int64* v767;
  __int64 v768;
  __int64 v769;
  __int64 v770;
  __int64 v771;
  __int64 v772;
  __int64 v773;
  __int64 v774;
  __int64 v775;
  __int64 v776;
  __int64 v777;
  __int64 v778;
  __int64 v779;
  __int64 v780;
  __int64 v781;
  __int64 v782;
  __int64 v783;
  __int64 v784;
  __int64 v785;
  int v786;
  int v787;
  __int64 v788;
  int v789;
  __int64 v790;
  __int64 v791;
  _DWORD* v792;
  __int64 v793;
  __int64 v794;
  int v795;
  __int64 v796;
  int v797;
  int v798;
  __int64 v799;
  int v800;
  __int64 v801;
  int v802;
  int v803;
  __int64 v804;
  int v805;
  __int64 v806;
  int v807;
  int v808;
  __int64 v809;
  int* v810;
  int v811;
  __int64 v812;
  _DWORD* v813;
  _DWORD* v814;
  __int64 v815;
  __int64 v816;
  __int64 v817;
  __int64 v818;
  int v819;
  int v820;
  __int64 v821;
  int v822;
  __int64 v823;
  __int64 v824;
  _DWORD* v825;
  __int64 v826;
  __int64 v827;
  int v828;
  char v829;
  __int64 v830;
  char v831;
  int v832;
  __int64 v833;
  int v834;
  char v835;
  __int64 v836;
  char v837;
  int v838;
  __int64 v839;
  int v840;
  char v841;
  __int64 v842;
  char v843;
  int v844;
  __int64 v845;
  char v846;
  char v847;
  int* v848;
  int v849;
  __int64 v850;
  char v851;
  char v852;
  unsigned __int64 v853;
  unsigned __int64 v854;
  int v855;
  __int64 v856;
  unsigned __int64 v857;
  __int64 v858;
  unsigned __int64 v859;
  __int64 v860;
  unsigned __int64 v861;
  __int64 v862;
  unsigned __int64 v863;
  unsigned __int64 v864;
  __int64 v865;
  __int64 v866;
  __int64 v867;
  unsigned __int64 v868;
  unsigned __int64 v869;
  unsigned __int64 v870;
  __int64 v871;
  __int64 v872;
  int v873;
  __int64 v874;
  unsigned __int64 v875;
  __int64 v876;
  unsigned __int64 v877;
  __int64 v878;
  __int64 v879;
  unsigned __int64 v880;
  __int64 v881;
  unsigned __int64 v882;
  __int64 v883;
  __int64* v884;
  __int64* v885;
  __int64* v886;
  __int64 v887;
  __int64* v888;
  int v889;
  __int64 v890;
  __int64 v891;
  __int64* v892;
  __int64 v893;
  __int64 v894;
  __int64 v895;
  __int64 v896;
  __int64 v897;
  __int64 v898;
  __int64 v899;
  __int64 v900;
  __int64 v901;
  __int64 v902;
  __int64 v903;
  __int64 v904;
  __int64 v905;
  __int64 v906;
  __int64 v907;
  __int64 v908;
  __int64* v909;
  __int64 v910;
  __int64 v911;
  __int64 v912;
  __int64 v913;
  __int64 v914;
  __int64 v915;
  int v916;
  int v917;
  __int64 v918;
  int v919;
  __int64 v920;
  __int64 v921;
  _DWORD* v922;
  __int64 v923;
  __int64 v924;
  int v925;
  __int64 v926;
  int v927;
  int v928;
  __int64 v929;
  int v930;
  __int64 v931;
  int v932;
  int v933;
  __int64 v934;
  int v935;
  __int64 v936;
  int v937;
  int v938;
  __int64 v939;
  int* v940;
  int v941;
  __int64 v942;
  __int64 v943;
  __int64 v944;
  __int64 v945;
  unsigned __int16* v946;
  __int64 v947;
  __int64 v948;
  __int64 v949;
  __int64 v950;
  __int64 v951;
  __int64 v952;
  __int64 v953;
  __int64 v954;
  __int64 v955;
  int v956;
  int v957;
  __int64 v958;
  int v959;
  __int64 v960;
  __int64 v961;
  _DWORD* v962;
  __int64 v963;
  __int64 v964;
  int v965;
  __int64 v966;
  int v967;
  int v968;
  __int64 v969;
  int v970;
  __int64 v971;
  int v972;
  int v973;
  __int64 v974;
  int v975;
  __int64 v976;
  int v977;
  int v978;
  __int64 v979;
  int* v980;
  int v981;
  __int64 v982;
  __int64 v983;
  __int64 v984;
  bool v985;
  __int64 v986;
  char v987;
  bool v993;
  const char* v994;
  __int64 v995;
  __int64 v996;
  unsigned __int64 v997;
  __int64 v998;
  __int64 v999;
  _DWORD* v1000;
  _DWORD* v1001;
  int v1002;
  __int64 v1003;
  _QWORD* v1004;
  __int64 v1005;
  _QWORD* v1006;
  __int64 v1007;
  __int64 v1008;
  __int64 v1009;
  __int64 v1010;
  __int64 v1011;
  __int64* v1012;
  __int64 v1013;
  __int64 v1014;
  __int64* v1015;
  __int64* v1016;
  __int64 v1017;
  __int64 v1018;
  __int64 v1019;
  __int64 v1020;
  __int64 v1021;
  __int64 v1022;
  __int64 v1023;
  int v1024;
  int v1025;
  __int64 v1026;
  int v1027;
  __int64 v1028;
  __int64 v1029;
  _DWORD* v1030;
  __int64 v1031;
  __int64 v1032;
  int v1033;
  __int64 v1034;
  int v1035;
  int v1036;
  __int64 v1037;
  int v1038;
  __int64 v1039;
  int v1040;
  int v1041;
  __int64 v1042;
  int v1043;
  __int64 v1044;
  int v1045;
  int v1046;
  __int64 v1047;
  int* v1048;
  int v1049;
  __int64 v1050;
  unsigned __int64 v1051;
  __int64 v1052;
  __int64 v1053;
  _QWORD* v1054;
  _QWORD* v1055;
  __int64 v1056;
  __int64 v1057;
  __int64 v1058;
  unsigned __int64 v1059;
  __int64 v1060;
  __int64 v1061;
  __int64 v1062;
  unsigned __int64* v1063;
  unsigned __int64* v1064;
  __int64 v1065;
  _QWORD* v1066;
  unsigned __int64 v1067;
  __int64 v1068;
  __int64 v1069;
  __int64 v1070;
  __int64 j;
  __int64 v1072;
  unsigned __int64* v1073;
  unsigned __int64 v1074;
  unsigned __int64 v1075;
  __int64 v1076;
  unsigned __int64 v1077;
  __int64 v1078;
  unsigned __int64 v1079;
  unsigned __int64 v1080;
  unsigned __int64 v1081;
  _QWORD* v1082;
  _QWORD* v1083;
  unsigned __int64 v1084;
  __int64 v1085;
  unsigned __int64 v1086;
  _QWORD** v1087;
  _QWORD* v1088;
  unsigned __int64 v1089;
  __int64 v1090;
  float v1091;
  float v1092;
  _BOOL8 v1093;
  unsigned __int64 v1094;
  unsigned __int64 v1095;
  unsigned __int64 v1096;
  unsigned __int64 v1097;
  __int64 v1098;
  __int64 v1099;
  _DWORD* v1100;
  _DWORD* v1101;
  __int64 v1102;
  _QWORD* v1103;
  _QWORD* v1104;
  __int64 v1105;
  unsigned __int64 v1106;
  unsigned __int64 v1107;
  __int64 v1108;
  unsigned __int64 v1109;
  __int64 v1110;
  __int64 v1111;
  unsigned int** v1112;
  unsigned int** v1113;
  unsigned int* v1114;
  unsigned int v1115;
  unsigned int v1116;
  unsigned __int64* v1118;
  unsigned __int64* v1119;
  __int64 v1120;
  __int64 v1121;
  __int64 v1122;
  unsigned __int64 v1123;
  __int64 v1124;
  __int64 v1125;
  __int64 v1126;
  __int64 v1127;
  __int64 v1128;
  __int64 v1129;
  __int64 v1130;
  __int64* v1131;
  __int64 v1132;
  __int64 v1133;
  __int64 v1134;
  __int64 v1135;
  _DWORD* v1136;
  _DWORD* v1137;
  __int64 v1138;
  __int64 v1139;
  __int64 v1140;
  unsigned __int64 v1141;
  __int64 v1142;
  __int64 v1143;
  __int64 v1144;
  struct {
    __int64 (**v1145)();
    unsigned __int64 v1146;
  } v1145_;
  struct {
    __int64 v1147;
    unsigned __int64 v1148;
    __int64* v1149;
    __int64* v1150;
    __int64 v1151;
    __int64 v1152;
    __int64 v1153;
    __int64 v1154;
    __int64 v1155;
    __int64 v1156;
  } v1147_;
  __int64 v1157;

  v1147_.v1147 = 0;
  v1147_.v1148 = 0;
  v1145_.v1145 = nullptr;
  v1145_.v1146 = 0;
  LODWORD(v1147_.v1149) = 1065353216;
  v4 = *(__int64**)(*GameData_212c880[0] + 64);
  v3 = *(__int64**)(*GameData_212c880[0] + 72);
  if (v4 == v3) {
    goto LABEL_131;
  }
  v5 = 255;
  v6 = 0;
  v7 = 0;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v1131 = *(__int64**)(*GameData_212c880[0] + 72);
  do {
    v10 = *v4;
    v11 = *(_QWORD*)(*v4 + 24);
    if (v11 == 0) {
      goto LABEL_5;
    }
    if (*(_BYTE*)(v10 + 108) != 0) {
      if (v5 <= *(unsigned __int8*)(v10 + 108)) {
        if (v7 != 0) {
          *(_QWORD*)(*(_QWORD*)(v7 + 24) + 1080LL) = v10;
          *(_QWORD*)(v11 + 1072) = v7;
        }
      }
      else {
        ++v6;
      }
      *(_DWORD*)(v11 + 1128) = v6;
      v7 = v10;
      v5 = *(unsigned __int8*)(v10 + 108);
    }
    else {
      v5 = 255;
      v7 = 0;
      *(_DWORD*)(v11 + 1128) = 0;
    }
    v12 = *(_QWORD*)(v11 + 704);
    *(_DWORD*)(v11 + 728) = 0;
    *(_QWORD*)(v11 + 784) = 0;
    *(_QWORD*)(v11 + 792) = 0;
    *(_QWORD*)(v11 + 712) = v12;
    *(_QWORD*)(v11 + 744) = *(_QWORD*)(v11 + 736);
    v2 = *(unsigned __int8*)(v10 + 109);
    if (*(_BYTE*)(v10 + 109) == 0) {
      goto LABEL_5;
    }
    v13 = v1145_.v1146;
    v1138 = v7;
    if (v1145_.v1146 != 0) {
      v14 = v1145_.v1146 - 1;
      if ((v1145_.v1146 & (v1145_.v1146 - 1)) != 0) {
        v1 = *(unsigned __int8*)(v10 + 109);
        if (v1145_.v1146 <= v2) {
          v1 = (unsigned int)v2 % (unsigned int)v1145_.v1146;
        }
      }
      else {
        v1 = ((_DWORD)v1145_.v1146 - 1) & (unsigned int)v2;
      }
      v15 = (__int64*)v1145_.v1145[v1];
      if (v15 != nullptr) {
        v16 = *v15;
        if (*v15 != 0) {
          if ((v1145_.v1146 & v14) == 0) {
            while (1) {
              v18 = *(_QWORD*)(v16 + 8);
              if (v18 == v2) {
                if (*(_DWORD*)(v16 + 16) == (_DWORD)v2) {
                  goto LABEL_86;
                }
              }
              else if ((v18 & v14) != v1) {
                goto LABEL_35;
              }
              v16 = *(_QWORD*)v16;
              if (v16 == 0) {
                goto LABEL_35;
              }
            }
          }
          do {
            v17 = *(_QWORD*)(v16 + 8);
            if (v17 == v2) {
              if (*(_DWORD*)(v16 + 16) == (_DWORD)v2) {
              LABEL_86:
                v45 = v5;
                v46 = v6;
                goto LABEL_111;
              }
            }
            else {
              if (v17 >= v1145_.v1146) {
                v17 %= v1145_.v1146;
              }
              if (v17 != v1) {
                break;
              }
            }
            v16 = *(_QWORD*)v16;
          } while (v16 != 0);
        }
      }
    }
  LABEL_35:
    v19 = fw_memory_HeapManager_Allocate_alt1(*v8, 48, 16, 0);
    v20 = v1147_.v1148;
    v21 = *(float*)&v1147_.v1149;
    v16 = v19;
    *(_QWORD*)v19 = 0;
    *(_QWORD*)(v19 + 8) = v2;
    *(_DWORD*)(v19 + 16) = v2;
    *(_QWORD*)(v19 + 24) = 0;
    *(_QWORD*)(v19 + 32) = 0;
    *(_QWORD*)(v19 + 40) = 0;
    v22 = (float)(v20 + 1);
    if (v13 == 0 || (float)(v21 * (float)v13) < v22) {
      v23 = v22 / v21;
      v24 = (v13 & (v13 - 1)) != 0;
      if (v13 < 3) {
        v24 = true;
      }
      v25 = v24 | (2 * v13);
      v26 = vcvtps_u64_f32(v23);
      if (v25 <= v26) {
        primeEm = v26;
      }
      else {
        primeEm = v25;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        v13 = v1145_.v1146;
        primeEm = std___1___next_prime_alt1(primeEm);
      }
      if (primeEm <= v13) {
        if (primeEm >= v13) {
          goto LABEL_97;
        }
        v32 = vcvtps_u64_f32((float)v1147_.v1148 / *(float*)&v1147_.v1149);
        if (v13 < 3 || (v13 & (v13 - 1)) != 0) {
          v32 = std___1___next_prime_alt1(v32);
        }
        else {
          v33 = 1LL << -(char)__clz(v32 - 1);
          if (v32 >= 2) {
            v32 = v33;
          }
        }
        if (primeEm <= v32) {
          primeEm = v32;
        }
        if (primeEm >= v13) {
          goto LABEL_97;
        }
        if (primeEm == 0) {
          v47 = v1145_.v1145;
          v1145_.v1145 = nullptr;
          if (v47 != nullptr) {
            v48 = 128;
            if (*(_QWORD*)(*v8 + 200) == 0) {
              v48 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v8 + v48, (__int64)v47);
          }
          v1145_.v1146 = 0;
          goto LABEL_97;
        }
      }
      if (primeEm >> 61 != 0) {
        goto LABEL_1188;
      }
      v28 = (__int64 (**)(void))fw_memory_HeapManager_Allocate_alt1(
          *v8, 8 * primeEm, 16, 0);
      v29 = v1145_.v1145;
      v1145_.v1145 = v28;
      if (v29 != nullptr) {
        v30 = 128;
        if (*(_QWORD*)(*v8 + 200) == 0) {
          v30 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v8 + v30, (__int64)v29);
      }
      v1145_.v1146 = primeEm;
      if (primeEm >= 8) {
        v31 = 0;
        do {
          v1145_.v1145[v31] = nullptr;
          v1145_.v1145[v31 + 1] = nullptr;
          v1145_.v1145[v31 + 2] = nullptr;
          v1145_.v1145[v31 + 3] = nullptr;
          v1145_.v1145[v31 + 4] = nullptr;
          v1145_.v1145[v31 + 5] = nullptr;
          v1145_.v1145[v31 + 6] = nullptr;
          v34 = &v1145_.v1145[v31];
          v31 += 8;
          v34[7] = nullptr;
        } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v31);
      }
      else {
        v31 = 0;
      }
      v35 = primeEm & 7;
      if ((primeEm & 7) != 0) {
        v36 = v31;
        do {
          --v35;
          v1145_.v1145[v36++] = nullptr;
        } while (v35 != 0);
      }
      v37 = (__int64 (*)())v1147_.v1147;
      if (v1147_.v1147 == 0) {
        goto LABEL_97;
      }
      v38 = *(_QWORD*)(v1147_.v1147 + 8);
      v39 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) == 0) {
        v42 = v38 & v39;
        v1145_.v1145[v42] = (__int64 (*)())&v1147_.v1147;
        while (1) {
          v43 = *(__int64 (**)(void))v37;
          if (*(_QWORD*)v37 == 0) {
            break;
          }
          v44 = *((_QWORD*)v43 + 1) & v39;
          if (v44 == v42) {
            v37 = *(__int64 (**)(void))v37;
          }
          else if (v1145_.v1145[v44] != nullptr) {
            *(_QWORD*)v37 = *(_QWORD*)v43;
            *(_QWORD*)v43 = *(_QWORD*)v1145_.v1145[v44];
            *(_QWORD*)v1145_.v1145[v44] = v43;
          }
          else {
            v1145_.v1145[v44] = v37;
            v37 = v43;
            v42 = v44;
          }
        }
      LABEL_97:
        v13 = v1145_.v1146;
        if ((v1145_.v1146 & (v1145_.v1146 - 1)) != 0) {
          if (v1145_.v1146 <= v2) {
            v1 = v2 % v1145_.v1146;
          }
          else {
            v1 = v2;
          }
        }
        else {
          v1 = ((_DWORD)v1145_.v1146 - 1) & (unsigned int)v2;
        }
        goto LABEL_102;
      }
      if (v38 >= primeEm) {
        v38 %= primeEm;
      }
      v1145_.v1145[v38] = (__int64 (*)())&v1147_.v1147;
      v40 = *(__int64 (**)(void))v37;
      if (*(_QWORD*)v37 == 0) {
        goto LABEL_97;
      }
      while (1) {
        v41 = *((_QWORD*)v40 + 1);
        if (v41 >= primeEm) {
          v41 %= primeEm;
        }
        if (v41 != v38) {
          if (v1145_.v1145[v41] == nullptr) {
            v1145_.v1145[v41] = v37;
            goto LABEL_73;
          }
          *(_QWORD*)v37 = *(_QWORD*)v40;
          *(_QWORD*)v40 = *(_QWORD*)v1145_.v1145[v41];
          *(_QWORD*)v1145_.v1145[v41] = v40;
          v40 = v37;
        }
        v41 = v38;
      LABEL_73:
        v37 = v40;
        v40 = *(__int64 (**)(void))v40;
        v38 = v41;
        if (v40 == nullptr) {
          goto LABEL_97;
        }
      }
    }
  LABEL_102:
    v49 = v1145_.v1145;
    v50 = v1145_.v1145[v1];
    if (v50 != nullptr) {
      *(_QWORD*)v16 = *(_QWORD*)v50;
      *(_QWORD*)v50 = v16;
    }
    else {
      v51 = v1147_.v1147;
      v1147_.v1147 = v16;
      *(_QWORD*)v16 = v51;
      v49[v1] = (__int64 (*)())&v1147_.v1147;
      if (*(_QWORD*)v16 != 0) {
        v52 = *(_QWORD*)(*(_QWORD*)v16 + 8LL);
        if ((v13 & (v13 - 1)) != 0) {
          if (v52 >= v13) {
            v52 %= v13;
          }
        }
        else {
          v52 &= v13 - 1;
        }
        v1145_.v1145[v52] = (__int64 (*)())v16;
      }
    }
    v45 = v5;
    v46 = v6;
    ++v1147_.v1148;
  LABEL_111:
    v54 = *(_QWORD**)(v16 + 32);
    v53 = *(_QWORD*)(v16 + 40);
    if ((unsigned __int64)v54 < v53) {
      *v54 = v10;
      v9 = (__int64)(v54 + 1);
    }
    else {
      v1 = *(_QWORD*)(v16 + 24);
      v2 = (unsigned __int64)v54 - v1;
      v55 = ((__int64)v54 - v1) >> 3;
      v56 = v55 + 1;
      if ((unsigned __int64)(v55 + 1) >> 61 != 0) {
        GameRoutine_705570_alt1();
      }
      v57 = v53 - v1;
      if (v57 >> 2 > v56) {
        v56 = v57 >> 2;
      }
      if ((unsigned __int64)v57 >= 0x7FFFFFFFFFFFFFF8LL) {
        v58 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v58 = v56;
      }
      if (v58 != 0) {
        if (v58 >> 61 != 0) {
        LABEL_1188:
          GameRoutine_60a210_alt1();
        }
        v59 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v58, 16, 0);
      }
      else {
        v59 = 0;
      }
      v60 = v59 + 8 * v58;
      v61 = (unsigned __int64)v54 - v1;
      v62 = v59 + v2 - 8 * v55;
      *(_QWORD*)(v59 + v2) = v10;
      v9 = v59 + v2 + 8;
      memcpy_alt1(v62, v1, v61);
      *(_QWORD*)(v16 + 24) = v62;
      *(_QWORD*)(v16 + 32) = v9;
      *(_QWORD*)(v16 + 40) = v60;
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v1 != 0) {
        v63 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v63 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v1);
      }
    }
    *(_QWORD*)(v16 + 32) = v9;
    v6 = v46;
    v5 = v45;
    v3 = v1131;
    v7 = v1138;
  LABEL_5:
    ++v4;
  } while (v4 != v3);
  v64 = (_QWORD*)v1147_.v1147;
  v65 = v1147_.v1148 == 0 || v1147_.v1147 == 0;
  if (!v65) {
    do {
      v1012 = (__int64*)v64[3];
      v2 = v64[4];
      while (v1012 != (__int64*)v2) {
        v1013 = *v1012;
        v1014 = *(_QWORD*)(*v1012 + 24);
        if (v1014 != 0) {
          v1015 = (__int64*)v64[3];
          v1016 = (__int64*)v64[4];
          if (v1015 != v1016) {
            while (1) {
              v1017 = *v1015;
              if (*v1015 == v1013) {
                goto LABEL_1017;
              }
              if (v1017 != 0) {
                LODWORD(v1017) = *(_WORD*)(v1017 + 16) & 0xFFF;
              }
              LODWORD(v1157) = v1017;
              if ((UnitSkillList_84cc00_alt1(v1014 + 704, &v1157, 0) & 1) !=
                  0) {
                v1018 = *(_QWORD*)(v1014 + 744);
                v1019 = *(_QWORD*)(v1014 + 736);
                *(_QWORD*)(v1014 + 784) = 0;
                *(_QWORD*)(v1014 + 792) = 0;
                v1020 = v1018 - v1019;
                if ((int)((unsigned __int64)(v1018 - v1019) >> 2) >= 1) {
                  v1021 = (int)(v1020 >> 2);
                  v1022 = v1021 <= 1 ? 1LL : (int)(v1020 >> 2);
                  v1023 = *GameData_212c880[0];
                  if (v1021 >= 4) {
                    break;
                  }
                  v1024 = 0;
                  v1025 = 0;
                  v1026 = 0;
                  v1027 = 0;
                  v1028 = 0;
                  v1029 = v1022 & 3;
                  if (v1029 != 0) {
                    goto LABEL_1032;
                  }
                }
              }
            LABEL_1017:
              if (++v1015 == v1016) {
                goto LABEL_1012;
              }
            }
            v1030 = (_DWORD*)(v1019 + 8);
            v1031 = 0;
            v1024 = 0;
            v1025 = 0;
            v1026 = 0;
            v1027 = 0;
            do {
              v1031 -= 4;
              v1032 = *(_QWORD*)(*(_QWORD*)(v1023 + 64) +
                                 8LL * (*(v1030 - 2) & 0xFFF));
              v1033 = v1027 | (1 << *(_BYTE*)(v1032 + 104));
              *(_WORD*)(v1014 + 784) = v1033;
              v1034 = (1LL << *(_BYTE*)(v1032 + 250)) | v1026;
              *(_QWORD*)(v1014 + 792) = v1034;
              v1035 = (1 << *(_BYTE*)(v1032 + 115)) | v1025;
              *(_DWORD*)(v1014 + 788) = v1035;
              v1036 =
                  *(unsigned __int16*)(*(_QWORD*)(v1032 + 24) + 1064LL) | v1024;
              *(_WORD*)(v1014 + 786) = v1036;
              v1037 = *(_QWORD*)(*(_QWORD*)(v1023 + 64) +
                                 8LL * (*(v1030 - 1) & 0xFFF));
              v1038 = v1033 | (1 << *(_BYTE*)(v1037 + 104));
              *(_WORD*)(v1014 + 784) = v1038;
              v1039 = (1LL << *(_BYTE*)(v1037 + 250)) | v1034;
              *(_QWORD*)(v1014 + 792) = v1039;
              v1040 = (1 << *(_BYTE*)(v1037 + 115)) | v1035;
              *(_DWORD*)(v1014 + 788) = v1040;
              v1041 =
                  *(unsigned __int16*)(*(_QWORD*)(v1037 + 24) + 1064LL) | v1036;
              *(_WORD*)(v1014 + 786) = v1041;
              v1042 =
                  *(_QWORD*)(*(_QWORD*)(v1023 + 64) + 8LL * (*v1030 & 0xFFF));
              v1043 = v1038 | (1 << *(_BYTE*)(v1042 + 104));
              *(_WORD*)(v1014 + 784) = v1043;
              v1044 = (1LL << *(_BYTE*)(v1042 + 250)) | v1039;
              *(_QWORD*)(v1014 + 792) = v1044;
              v1045 = (1 << *(_BYTE*)(v1042 + 115)) | v1040;
              *(_DWORD*)(v1014 + 788) = v1045;
              v1046 =
                  *(unsigned __int16*)(*(_QWORD*)(v1042 + 24) + 1064LL) | v1041;
              *(_WORD*)(v1014 + 786) = v1046;
              LOWORD(v1042) = v1030[1];
              v1030 += 4;
              v1047 = *(_QWORD*)(*(_QWORD*)(v1023 + 64) + 8 * (v1042 & 0xFFF));
              v1027 = v1043 | (1 << *(_BYTE*)(v1047 + 104));
              *(_WORD*)(v1014 + 784) = v1027;
              v1026 = (1LL << *(_BYTE*)(v1047 + 250)) | v1044;
              *(_QWORD*)(v1014 + 792) = v1026;
              v1025 = (1 << *(_BYTE*)(v1047 + 115)) | v1045;
              *(_DWORD*)(v1014 + 788) = v1025;
              v1024 =
                  *(unsigned __int16*)(*(_QWORD*)(v1047 + 24) + 1064LL) | v1046;
              *(_WORD*)(v1014 + 786) = v1024;
            } while (-(__int64)(v1022 & 0xFFFFFFFFFFFFFFFCLL) != v1031);
            v1028 = -v1031;
            v1029 = v1022 & 3;
            if (v1029 == 0) {
              goto LABEL_1017;
            }
          LABEL_1032:
            v1048 = (int*)(v1019 + 4 * v1028);
            do {
              v1049 = *v1048++;
              --v1029;
              v1050 =
                  *(_QWORD*)(*(_QWORD*)(v1023 + 64) + 8LL * (v1049 & 0xFFF));
              v1027 |= 1 << *(_BYTE*)(v1050 + 104);
              *(_WORD*)(v1014 + 784) = v1027;
              v1026 |= 1LL << *(_BYTE*)(v1050 + 250);
              *(_QWORD*)(v1014 + 792) = v1026;
              v1025 |= 1 << *(_BYTE*)(v1050 + 115);
              *(_DWORD*)(v1014 + 788) = v1025;
              v1024 |= *(unsigned __int16*)(*(_QWORD*)(v1050 + 24) + 1064LL);
              *(_WORD*)(v1014 + 786) = v1024;
            } while (v1029 != 0);
            goto LABEL_1017;
          }
        }
      LABEL_1012:
        ++v1012;
      }
      v64 = (_QWORD*)*v64;
    } while (v64 != nullptr);
  }
LABEL_131:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca490,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21ca490) != 0) {
    GameData_21ca460 = (__int64)GameData_1f92b40;
    GameData_21ca480 = (__int64)&GameData_21ca460;
    GameRoutine_2b0_alt1();
    __cxa_guard_release_alt1((__int64)&GameData_21ca490);
  }
  v66 = *(__int64**)(*GameData_212c880[0] + 64);
  v67 = *(__int64**)(*GameData_212c880[0] + 72);
  for (i = (__int64*)fw_memory_g_heap_manager_ptr; v66 != v67; ++v66) {
    v2 = *(_QWORD*)(*v66 + 24);
    if (v2 != 0) {
      v1157 = *v66;
      if (GameData_21ca480 == 0) {
        goto LABEL_138;
      }
      *(_QWORD*)(v2 + 1088) = (*(__int64 (**)(__int64, __int64*))(
          *(_QWORD*)GameData_21ca480 + 48LL))(GameData_21ca480, &v1157);
    }
  }
  v69 = (unsigned __int64*)v1147_.v1147;
  if (v1147_.v1147 != 0) {
    do {
      v2 = *v69;
      v71 = v69[3];
      if (v71 != 0) {
        v72 = *i;
        v69[4] = v71;
        if (*(_QWORD*)(v72 + 200) != 0) {
          v73 = 128;
        }
        else {
          v73 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v72 + v73, v71);
      }
      if (*(_QWORD*)(*i + 200) != 0) {
        v70 = 128;
      }
      else {
        v70 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*i + v70, (__int64)v69);
      v69 = (unsigned __int64*)v2;
    } while (v2 != 0);
  }
  v74 = v1145_.v1145;
  v1145_.v1145 = nullptr;
  if (v74 != nullptr) {
    v75 = 128;
    if (*(_QWORD*)(*i + 200) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*i + v75, (__int64)v74);
  }
  v76 = GameData_212c880[0];
  v77 = *GameData_212c880[0];
  v78 = *(unsigned __int64**)(*GameData_212c880[0] + 64);
  v79 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
  if (v78 != v79) {
    v1118 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
    while (1) {
      v80 = *v78;
      v1119 = v78;
      v81 = *(_QWORD*)(*v78 + 24);
      v1123 = v80;
      *(_DWORD*)v81 = *(_DWORD*)v81 & 0xFFFFF000 | *(_WORD*)(*v78 + 16) & 0xFFF;
      v82 = (*(unsigned __int16*)(v80 + 332) | *(unsigned __int16*)(v80 + 330) |
             *(unsigned __int16*)(v80 + 334) | *(unsigned __int16*)(v80 + 336) |
             *(unsigned __int16*)(v80 + 338) | *(unsigned __int16*)(v80 + 340) |
             *(unsigned __int16*)(v80 + 342) | *(unsigned __int16*)(v80 + 344) |
             *(unsigned __int16*)(v80 + 346)) != 0;
      *(_BYTE*)(v81 + 1115) = v82;
      v83 = *(float*)(v80 + 348) != 0x1.0000000000000p+0f;
      if (*(float*)(v80 + 352) != 0x1.0000000000000p+0f) {
        v83 = true;
      }
      if (*(float*)(v80 + 356) != 0x1.0000000000000p+0f) {
        v83 = true;
      }
      if (*(float*)(v80 + 360) != 0x1.0000000000000p+0f) {
        v83 = true;
      }
      if (*(float*)(v80 + 364) != 0x1.0000000000000p+0f) {
        v83 = true;
      }
      if (*(float*)(v80 + 368) != 0x1.0000000000000p+0f) {
        v83 = true;
      }
      if (*(float*)(v80 + 372) != 0x1.0000000000000p+0f) {
        v83 = true;
      }
      v84 = v83 || *(float*)(v80 + 376) != 0x1.0000000000000p+0f ||
            *(float*)(v80 + 380) != 0x1.0000000000000p+0f;
      *(_BYTE*)(v81 + 1114) = v84;
      *(_BYTE*)(v81 + 1113) = v82 || v84;
      v85 = (*(unsigned __int16*)(v80 + 386) | *(unsigned __int16*)(v80 + 384) |
             *(unsigned __int16*)(v80 + 388) | *(unsigned __int16*)(v80 + 390) |
             *(unsigned __int16*)(v80 + 392) | *(unsigned __int16*)(v80 + 394) |
             *(unsigned __int16*)(v80 + 396) | *(unsigned __int16*)(v80 + 398) |
             *(unsigned __int16*)(v80 + 400) | *(unsigned __int16*)(v80 + 402) |
             *(unsigned __int16*)(v80 + 404)) != 0;
      *(_BYTE*)(v81 + 1118) = v85;
      v86 = (*(unsigned __int16*)(v80 + 454) | *(unsigned __int16*)(v80 + 452) |
             *(unsigned __int16*)(v80 + 456) | *(unsigned __int16*)(v80 + 458) |
             *(unsigned __int16*)(v80 + 460) | *(unsigned __int16*)(v80 + 462) |
             *(unsigned __int16*)(v80 + 464) | *(unsigned __int16*)(v80 + 466) |
             *(unsigned __int16*)(v80 + 468) | *(unsigned __int16*)(v80 + 470) |
             *(unsigned __int16*)(v80 + 472)) != 0;
      *(_BYTE*)(v81 + 1119) = v86;
      v87 = v85 || v86;
      v88 = *(float*)(v80 + 408) != 0x1.0000000000000p+0f;
      if (*(float*)(v80 + 412) != 0x1.0000000000000p+0f) {
        v88 = true;
      }
      if (*(float*)(v80 + 416) != 0x1.0000000000000p+0f) {
        v88 = true;
      }
      if (*(float*)(v80 + 420) != 0x1.0000000000000p+0f) {
        v88 = true;
      }
      if (*(float*)(v80 + 424) != 0x1.0000000000000p+0f) {
        v88 = true;
      }
      if (*(float*)(v80 + 428) != 0x1.0000000000000p+0f) {
        v88 = true;
      }
      if (*(float*)(v80 + 432) != 0x1.0000000000000p+0f) {
        v88 = true;
      }
      v89 = *(float*)(v80 + 436) != 0x1.0000000000000p+0f ||
            *(float*)(v80 + 440) != 0x1.0000000000000p+0f;
      v65 = *(float*)(v80 + 444) == 0x1.0000000000000p+0f;
      v90 = *(float*)(v80 + 448);
      *(_DWORD*)(v81 + 4) = 0;
      *(_DWORD*)(v81 + 56) = 0;
      *(_QWORD*)(v81 + 112) = 0;
      *(_QWORD*)(v81 + 120) = 0;
      v91 = !v65;
      v92 = v88 || v89 || v91 || v90 != 0x1.0000000000000p+0f;
      *(_BYTE*)(v81 + 1116) = v87 || v92;
      v93 = *(_QWORD*)(v81 + 32);
      *(_BYTE*)(v81 + 1117) = v92;
      *(_QWORD*)(v81 + 40) = v93;
      *(_QWORD*)(v81 + 72) = *(_QWORD*)(v81 + 64);
      if (*(_BYTE*)(v80 + 560) != 0) {
        break;
      }
      v94 = *(_QWORD*)(v80 + 552);
      if (v94 != 0) {
        LODWORD(v94) = *(_WORD*)(v94 + 16) & 0xFFF;
      }
      *(_DWORD*)(v81 + 4) = v94;
    LABEL_188:
      v95 = v1123;
      *(_QWORD*)(v81 + 8) = 0;
      v96 = *(_QWORD*)(v1123 + 720);
      *(_QWORD*)(v81 + 16) = 0;
      if (v96 != 0) {
        v97 = *(unsigned __int16*)(v96 + 16);
        *(_DWORD*)(v81 + 20) = 1;
        *(_WORD*)(v81 + 16) = v97;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v97) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v98 = game_map_MapRandom_instance__ptr[0];
          v99 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v100 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v101 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                 (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v98 + 1) = v99;
          v102 = (v101 >> 8) ^ (v100 >> 19) ^ v101 ^ v100;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v98) = v100;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v98 + 4) = v102;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          *(_DWORD*)(v81 + 20) =
              *(_DWORD*)(v81 + 20) & 0xFFFFC00F |
              (16 *
               (((16 * (v102 - 1000 * ((v102 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      v103 = *(_QWORD*)(v1123 + 744);
      *(_QWORD*)(v81 + 24) = 0;
      if (v103 != 0) {
        v104 = *(unsigned __int16*)(v103 + 16);
        *(_DWORD*)(v81 + 28) = 1;
        *(_WORD*)(v81 + 24) = v104;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v104) +
                      73LL) == 17) {
          nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
          v105 = game_map_MapRandom_instance__ptr[0];
          v106 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          v107 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v108 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                 (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v105 + 1) = v106;
          v109 = (v108 >> 8) ^ (v107 >> 19) ^ v108 ^ v107;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v105) = v107;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v105 + 4) = v109;
          nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
          *(_DWORD*)(v81 + 28) =
              *(_DWORD*)(v81 + 28) & 0xFFFFC00F |
              (16 *
               (((16 * (v109 - 1000 * ((v109 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      *(_WORD*)(v81 + 1064) = 0;
      v110 = *(unsigned __int16*)(v1123 + 288);
      if (*(_WORD*)(v1123 + 288) != 0) {
        if (v110 < 8) {
          v111 = 0;
          v112 = 0;
          v113 = v110 & 7;
          if (v113 == 0) {
            goto LABEL_217;
          }
          do {
          LABEL_216:
            --v113;
            v156 = *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v111++);
            v112 |= 1 << v156;
            *(_WORD*)(v81 + 1064) = v112;
          } while (v113 != 0);
          goto LABEL_217;
        }
        v147 = 7;
        v112 = 0;
        do {
          v148 = v112 | (1 << *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147 - 7));
          *(_WORD*)(v81 + 1064) = v148;
          v149 = v148 | (1 << *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147 - 6));
          *(_WORD*)(v81 + 1064) = v149;
          v150 = v149 | (1 << *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147 - 5));
          *(_WORD*)(v81 + 1064) = v150;
          v151 = v150 | (1 << *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147 - 4));
          *(_WORD*)(v81 + 1064) = v151;
          v152 = v151 | (1 << *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147 - 3));
          *(_WORD*)(v81 + 1064) = v152;
          v153 = v152 | (1 << *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147 - 2));
          *(_WORD*)(v81 + 1064) = v153;
          v154 = v153 | (1 << *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147 - 1));
          *(_WORD*)(v81 + 1064) = v154;
          v155 = *(_BYTE*)(*(_QWORD*)(v1123 + 296) + v147);
          v147 += 8;
          v112 = v154 | (1 << v155);
          *(_WORD*)(v81 + 1064) = v112;
        } while (v147 - ((unsigned __int16)v110 & 0xFFF8) != 7);
        v111 = v147 - 7;
        v113 = v110 & 7;
        if (v113 != 0) {
          goto LABEL_216;
        }
      }
    LABEL_217:
      v157 = *(_QWORD*)(v81 + 808);
      v158 = *(_QWORD*)(v81 + 800);
      if (v158 != v157) {
        do {
          v162 = *(_QWORD*)(v157 - 40);
          if (v162 != 0) {
            *(_QWORD*)(v157 - 32) = v162;
            v163 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v163 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v163, v162);
          }
          v164 = *(_QWORD*)(v157 - 64);
          if (v164 != 0) {
            *(_QWORD*)(v157 - 56) = v164;
            v165 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v165 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v165, v164);
          }
          v166 = v157 - 96;
          v167 = *(_QWORD*)(v157 - 96);
          if (v167 != 0) {
            *(_QWORD*)(v157 - 88) = v167;
            v168 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v168 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v168, v167);
          }
          v157 -= 96;
        } while (v166 != v158);
      }
      *(_QWORD*)(v81 + 808) = v158;
      v159 = *(unsigned __int16*)(v1123 + 136);
      v160 = GameData_212c880[0];
      if (*(_WORD*)(v1123 + 136) != 0) {
        v161 = 0;
        v1125 = *(unsigned __int16*)(v1123 + 136);
        do {
          v169 = (unsigned __int16*)(*(_QWORD*)(v95 + 144) + 16 * v161);
          if (*((_QWORD*)v169 + 1) != 0) {
            LODWORD(v1147_.v1148) = 0;
            v1145_.v1146 = 0;
            v1147_.v1147 = 0;
            v1145_.v1145 = nullptr;
            v1147_.v1149 = nullptr;
            v1147_.v1150 = nullptr;
            v1147_.v1151 = 0;
            v1147_.v1152 = 0;
            v1147_.v1153 = 0;
            v1147_.v1154 = 0;
            v1147_.v1155 = 0;
            v1147_.v1156 = 0;
            v170 = *v169;
            if (*v169 != 0) {
              v171 = 0;
              while (1) {
                v172 = *(_QWORD*)(*((_QWORD*)v169 + 1) + 16 * v171 + 8);
                if (v172 != 0) {
                  LODWORD(v172) = *(_WORD*)(v172 + 16) & 0xFFF;
                }
                LODWORD(v1157) = v172;
                if ((UnitSkillList_84cc00_alt1((__int64)&v1145_.v1145, &v1157,
                                               1) &
                     1) != 0) {
                  v1147_.v1155 = 0;
                  v1147_.v1156 = 0;
                  v173 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
                  if ((int)((unsigned __int64)((char*)v1147_.v1150 -
                                               (char*)v1147_.v1149) >>
                            2) < 1) {
                    goto LABEL_237;
                  }
                  v174 = *v160;
                  v175 = (int)(v173 >> 2);
                  v176 = v175 <= 1 ? 1LL : (int)(v173 >> 2);
                  if (v175 >= 4) {
                    break;
                  }
                  v177 = 0;
                  v178 = 0;
                  v179 = 0;
                  v180 = 0;
                  v181 = 0;
                  v182 = v176 & 3;
                  if (v182 != 0) {
                    goto LABEL_251;
                  }
                }
              LABEL_237:
                if (++v171 == v170) {
                  goto LABEL_254;
                }
              }
              v183 = v1147_.v1149 + 1;
              v184 = 0;
              v177 = 0;
              v178 = 0;
              v179 = 0;
              v180 = 0;
              do {
                v184 -= 4;
                v185 = *(_QWORD*)(*(_QWORD*)(v174 + 64) +
                                  8LL * (*(v183 - 2) & 0xFFF));
                v186 = v180 | (1 << *(_BYTE*)(v185 + 104));
                v187 = *(_BYTE*)(v185 + 250);
                LOWORD(v1147_.v1155) = v186;
                v188 = (1LL << v187) | v179;
                v189 = *(_BYTE*)(v185 + 115);
                v1147_.v1156 = v188;
                HIDWORD(v1147_.v1155) = (1 << v189) | v178;
                v190 =
                    *(unsigned __int16*)(*(_QWORD*)(v185 + 24) + 1064LL) | v177;
                WORD1(v1147_.v1155) = v190;
                v191 = *(_QWORD*)(*(_QWORD*)(v174 + 64) +
                                  8LL * (*(v183 - 1) & 0xFFF));
                v192 = v186 | (1 << *(_BYTE*)(v191 + 104));
                v193 = *(_BYTE*)(v191 + 250);
                LOWORD(v1147_.v1155) = v192;
                v194 = (1LL << v193) | v188;
                v195 = *(_BYTE*)(v191 + 115);
                v1147_.v1156 = v194;
                HIDWORD(v1147_.v1155) |= 1 << v195;
                v196 =
                    *(unsigned __int16*)(*(_QWORD*)(v191 + 24) + 1064LL) | v190;
                WORD1(v1147_.v1155) = v196;
                v197 =
                    *(_QWORD*)(*(_QWORD*)(v174 + 64) + 8LL * (*v183 & 0xFFF));
                v198 = v192 | (1 << *(_BYTE*)(v197 + 104));
                v199 = *(_BYTE*)(v197 + 250);
                LOWORD(v1147_.v1155) = v198;
                v200 = (1LL << v199) | v194;
                v201 = *(_BYTE*)(v197 + 115);
                v1147_.v1156 = v200;
                HIDWORD(v1147_.v1155) |= 1 << v201;
                v202 =
                    *(unsigned __int16*)(*(_QWORD*)(v197 + 24) + 1064LL) | v196;
                WORD1(v1147_.v1155) = v202;
                LOWORD(v197) = v183[1];
                v183 += 4;
                v203 = *(_QWORD*)(*(_QWORD*)(v174 + 64) + 8 * (v197 & 0xFFF));
                v180 = v198 | (1 << *(_BYTE*)(v203 + 104));
                v204 = *(_BYTE*)(v203 + 250);
                LOWORD(v1147_.v1155) = v180;
                v179 = (1LL << v204) | v200;
                v205 = *(_BYTE*)(v203 + 115);
                v1147_.v1156 = v179;
                v178 = (1 << v205) | HIDWORD(v1147_.v1155);
                HIDWORD(v1147_.v1155) = v178;
                v177 =
                    *(unsigned __int16*)(*(_QWORD*)(v203 + 24) + 1064LL) | v202;
                WORD1(v1147_.v1155) = v177;
              } while (-(__int64)(v176 & 0xFFFFFFFFFFFFFFFCLL) != v184);
              v181 = -v184;
              v182 = v176 & 3;
              if (v182 == 0) {
                goto LABEL_237;
              }
            LABEL_251:
              v206 = (int*)v1147_.v1149 + v181;
              do {
                v207 = *v206++;
                --v182;
                v208 = *(_QWORD*)(*(_QWORD*)(v174 + 64) + 8LL * (v207 & 0xFFF));
                v180 |= 1 << *(_BYTE*)(v208 + 104);
                v209 = *(_BYTE*)(v208 + 250);
                LOWORD(v1147_.v1155) = v180;
                v179 |= 1LL << v209;
                v210 = *(_BYTE*)(v208 + 115);
                v1147_.v1156 = v179;
                v178 |= 1 << v210;
                HIDWORD(v1147_.v1155) = v178;
                v177 |= *(unsigned __int16*)(*(_QWORD*)(v208 + 24) + 1064LL);
                WORD1(v1147_.v1155) = v177;
              } while (v182 != 0);
              goto LABEL_237;
            }
          LABEL_254:
            v211 = *(_QWORD*)(v81 + 808);
            v212 = *(_QWORD*)(v81 + 816);
            v1139 = v161;
            if (v211 >= v212) {
              v224 = *(_QWORD*)(v81 + 800);
              v225 = v211 - v224;
              v226 = 1 - 0x5555555555555555LL * ((__int64)(v211 - v224) >> 5);
              if (v226 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v227 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v212 - v224) >> 5);
              if (2 * v227 > v226) {
                v226 = 2 * v227;
              }
              if (v227 >= 0x155555555555555LL) {
                v228 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v228 = v226;
              }
              if (v228 != 0) {
                if (v228 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                v229 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v228, 16, 0);
              }
              else {
                v229 = 0;
              }
              v230 = v229 + v225;
              *(_DWORD*)(v230 + 24) = 0;
              *(_QWORD*)(v230 + 8) = 0;
              *(_QWORD*)(v230 + 16) = 0;
              *(_QWORD*)v230 = 0;
              if ((__int64 (***)(void))(v229 + v225) != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)(v229 + v225), (__int64)v1145_.v1145,
                    v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v231 = v1147_.v1148;
              *(_QWORD*)(v230 + 32) = 0;
              *(_QWORD*)(v230 + 40) = 0;
              *(_QWORD*)(v230 + 48) = 0;
              *(_DWORD*)(v230 + 24) = v231;
              v232 = (__int64)v1147_.v1149;
              v233 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v233 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v234 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v235 = v234 + v233;
                *(_QWORD*)(v230 + 32) = v234;
                *(_QWORD*)(v230 + 40) = v234;
                *(_QWORD*)(v230 + 48) = v234 + v233;
                memcpy_alt1(v234, v232, v233);
                *(_QWORD*)(v230 + 40) = v235;
              }
              v237 = v1147_.v1152;
              v236 = v1147_.v1153;
              *(_QWORD*)(v230 + 64) = 0;
              *(_QWORD*)(v230 + 72) = 0;
              v238 = v236 - v237;
              *(_QWORD*)(v230 + 56) = 0;
              if (v236 != v237) {
                if ((v238 & 0x8000000000000000LL) != 0) {
                LABEL_1186:
                  GameRoutine_6e3e20_alt1();
                }
                v239 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v236 - v237, 16, 0);
                v240 = v239 + v238;
                *(_QWORD*)(v230 + 56) = v239;
                *(_QWORD*)(v230 + 64) = v239;
                *(_QWORD*)(v230 + 72) = v239 + v238;
                memcpy_alt1(v239, v237, v238);
                *(_QWORD*)(v230 + 64) = v240;
              }
              v1132 = v229;
              v241 = v1147_.v1156;
              *(_QWORD*)(v230 + 80) = v1147_.v1155;
              *(_QWORD*)(v230 + 88) = v241;
              v242 = *(__int64**)(v81 + 808);
              v243 = *(__int64**)(v81 + 800);
              v244 = (__int64*)(v230 + (char*)v243 - (char*)v242);
              if (v243 == v242) {
                v159 = v1125;
              }
              else {
                v245 = 0;
                do {
                  v250 = &v244[v245];
                  *((_DWORD*)v250 + 6) = 0;
                  v250[1] = 0;
                  v250[2] = 0;
                  *v250 = 0;
                  if (v244 != v243) {
                    GameRoutine_7fb7c0_alt1(&v244[v245], v243[v245],
                                            v243[v245 + 1],
                                            (v243[v245 + 1] - v243[v245]) >> 2);
                  }
                  v246 = &v243[v245];
                  v245 += 12;
                  v247 = *((_DWORD*)v246 + 6);
                  v250[4] = 0;
                  v250[5] = 0;
                  v250[6] = 0;
                  *((_DWORD*)v250 + 6) = v247;
                  v250[4] = v246[4];
                  v250[5] = v246[5];
                  v250[6] = v246[6];
                  v246[5] = 0;
                  v246[6] = 0;
                  v246[4] = 0;
                  v250[8] = 0;
                  v250[9] = 0;
                  v250[7] = 0;
                  v250[7] = v246[7];
                  v250[8] = v246[8];
                  v250[9] = v246[9];
                  v246[8] = 0;
                  v246[9] = 0;
                  v246[7] = 0;
                  v249 = v246[10];
                  v248 = v246[11];
                  v250[10] = v249;
                  v250[11] = v248;
                } while (&v243[v245] != v242);
                v160 = GameData_212c880[0];
                v159 = v1125;
                do {
                  v251 = v243[7];
                  if (v251 != 0) {
                    v243[8] = v251;
                    v252 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v252 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v252, v251);
                  }
                  v253 = v243[4];
                  if (v253 != 0) {
                    v243[5] = v253;
                    v254 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v254 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v254, v253);
                  }
                  v255 = *v243;
                  if (*v243 != 0) {
                    v243[1] = v255;
                    v256 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v256 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v256, v255);
                  }
                  v243 += 12;
                } while (v243 != v242);
                v243 = *(__int64**)(v81 + 800);
              }
              v223 = v230 + 96;
              *(_QWORD*)(v81 + 800) = v244;
              *(_QWORD*)(v81 + 808) = v230 + 96;
              *(_QWORD*)(v81 + 816) = v1132 + 96 * v228;
              if (v243 != nullptr) {
                v257 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v257 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v257,
                    (__int64)v243);
              }
            }
            else {
              *(_DWORD*)(v211 + 24) = 0;
              *(_QWORD*)(v211 + 8) = 0;
              *(_QWORD*)(v211 + 16) = 0;
              *(_QWORD*)v211 = 0;
              if ((__int64 (***)(void))v211 != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)v211, (__int64)v1145_.v1145, v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v213 = v1147_.v1148;
              *(_QWORD*)(v211 + 32) = 0;
              *(_QWORD*)(v211 + 40) = 0;
              *(_QWORD*)(v211 + 48) = 0;
              *(_DWORD*)(v211 + 24) = v213;
              v214 = (__int64)v1147_.v1149;
              v215 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v215 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v216 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v217 = v216 + v215;
                *(_QWORD*)(v211 + 32) = v216;
                *(_QWORD*)(v211 + 40) = v216;
                *(_QWORD*)(v211 + 48) = v216 + v215;
                memcpy_alt1(v216, v214, v215);
                *(_QWORD*)(v211 + 40) = v217;
              }
              *(_QWORD*)(v211 + 64) = 0;
              *(_QWORD*)(v211 + 72) = 0;
              *(_QWORD*)(v211 + 56) = 0;
              v218 = v1147_.v1152;
              v219 = v1147_.v1153 - v1147_.v1152;
              if (v1147_.v1153 != v1147_.v1152) {
                if ((v219 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v220 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    v1147_.v1153 - v1147_.v1152, 16, 0);
                v221 = v220 + v219;
                *(_QWORD*)(v211 + 56) = v220;
                *(_QWORD*)(v211 + 64) = v220;
                *(_QWORD*)(v211 + 72) = v220 + v219;
                memcpy_alt1(v220, v218, v219);
                *(_QWORD*)(v211 + 64) = v221;
              }
              v222 = v1147_.v1156;
              v223 = v211 + 96;
              *(_QWORD*)(v211 + 80) = v1147_.v1155;
              *(_QWORD*)(v211 + 88) = v222;
            }
            v95 = v1123;
            v258 = v1147_.v1152;
            *(_QWORD*)(v81 + 808) = v223;
            if (v258 != 0) {
              v1147_.v1153 = v258;
              v259 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v259 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v259, v258);
            }
            v161 = v1139;
            if (v1147_.v1149 != nullptr) {
              v1147_.v1150 = v1147_.v1149;
              v260 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v260 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v260,
                  (__int64)v1147_.v1149);
            }
            if (v1145_.v1145 != nullptr) {
              v1145_.v1146 = (unsigned __int64)v1145_.v1145;
              v261 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v261 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v261,
                  (__int64)v1145_.v1145);
            }
          }
          ++v161;
        } while (v161 != v159);
      }
      v262 = *(_QWORD*)(v81 + 832);
      v263 = *(_QWORD*)(v81 + 824);
      v264 = fw_memory_g_heap_manager_ptr;
      if (v263 != v262) {
        do {
          v268 = *(_QWORD*)(v262 - 40);
          if (v268 != 0) {
            *(_QWORD*)(v262 - 32) = v268;
            v269 = 56;
            if (*(_QWORD*)(*(_QWORD*)v264 + 200LL) != 0) {
              v269 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v264 + v269, v268);
          }
          v270 = *(_QWORD*)(v262 - 64);
          if (v270 != 0) {
            *(_QWORD*)(v262 - 56) = v270;
            v271 = 56;
            if (*(_QWORD*)(*(_QWORD*)v264 + 200LL) != 0) {
              v271 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v264 + v271, v270);
          }
          v272 = v262 - 96;
          v273 = *(_QWORD*)(v262 - 96);
          if (v273 != 0) {
            *(_QWORD*)(v262 - 88) = v273;
            v274 = 56;
            if (*(_QWORD*)(*(_QWORD*)v264 + 200LL) != 0) {
              v274 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v264 + v274, v273);
          }
          v262 -= 96;
        } while (v272 != v263);
      }
      v265 = v1123;
      *(_QWORD*)(v81 + 832) = v263;
      v266 = *(unsigned __int16*)(v1123 + 152);
      if (*(_WORD*)(v1123 + 152) != 0) {
        v267 = 0;
        v1126 = *(unsigned __int16*)(v1123 + 152);
        do {
          v275 = (unsigned __int16*)(*(_QWORD*)(v265 + 160) + 16 * v267);
          if (*((_QWORD*)v275 + 1) != 0) {
            v1140 = v267;
            v1145_.v1145 = nullptr;
            LODWORD(v1147_.v1148) = 0;
            v1145_.v1146 = 0;
            v1147_.v1147 = 0;
            v1147_.v1149 = nullptr;
            v1147_.v1150 = nullptr;
            v1147_.v1151 = 0;
            v1147_.v1152 = 0;
            v1147_.v1153 = 0;
            v1147_.v1154 = 0;
            v1147_.v1155 = 0;
            v1147_.v1156 = 0;
            v276 = *v275;
            v277 = GameData_212c880[0];
            if (*v275 != 0) {
              v278 = 0;
              while (1) {
                v279 = *(_QWORD*)(*((_QWORD*)v275 + 1) + 16 * v278 + 8);
                if (v279 != 0) {
                  LODWORD(v279) = *(_WORD*)(v279 + 16) & 0xFFF;
                }
                LODWORD(v1157) = v279;
                if ((UnitSkillList_84cc00_alt1((__int64)&v1145_.v1145, &v1157,
                                               1) &
                     1) != 0) {
                  v1147_.v1155 = 0;
                  v1147_.v1156 = 0;
                  v280 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
                  if ((int)((unsigned __int64)((char*)v1147_.v1150 -
                                               (char*)v1147_.v1149) >>
                            2) < 1) {
                    goto LABEL_339;
                  }
                  v281 = *v277;
                  v282 = (int)(v280 >> 2);
                  v283 = v282 <= 1 ? 1LL : (int)(v280 >> 2);
                  if (v282 >= 4) {
                    break;
                  }
                  v284 = 0;
                  v285 = 0;
                  v286 = 0;
                  v287 = 0;
                  v288 = 0;
                  v289 = v283 & 3;
                  if (v289 != 0) {
                    goto LABEL_353;
                  }
                }
              LABEL_339:
                if (++v278 == v276) {
                  goto LABEL_356;
                }
              }
              v290 = v1147_.v1149 + 1;
              v291 = 0;
              v284 = 0;
              v285 = 0;
              v286 = 0;
              v287 = 0;
              do {
                v291 -= 4;
                v292 = *(_QWORD*)(*(_QWORD*)(v281 + 64) +
                                  8LL * (*(v290 - 2) & 0xFFF));
                v293 = v287 | (1 << *(_BYTE*)(v292 + 104));
                v294 = *(_BYTE*)(v292 + 250);
                LOWORD(v1147_.v1155) = v293;
                v295 = (1LL << v294) | v286;
                v296 = *(_BYTE*)(v292 + 115);
                v1147_.v1156 = v295;
                HIDWORD(v1147_.v1155) = (1 << v296) | v285;
                v297 =
                    *(unsigned __int16*)(*(_QWORD*)(v292 + 24) + 1064LL) | v284;
                WORD1(v1147_.v1155) = v297;
                v298 = *(_QWORD*)(*(_QWORD*)(v281 + 64) +
                                  8LL * (*(v290 - 1) & 0xFFF));
                v299 = v293 | (1 << *(_BYTE*)(v298 + 104));
                v300 = *(_BYTE*)(v298 + 250);
                LOWORD(v1147_.v1155) = v299;
                v301 = (1LL << v300) | v295;
                v302 = *(_BYTE*)(v298 + 115);
                v1147_.v1156 = v301;
                HIDWORD(v1147_.v1155) |= 1 << v302;
                v303 =
                    *(unsigned __int16*)(*(_QWORD*)(v298 + 24) + 1064LL) | v297;
                WORD1(v1147_.v1155) = v303;
                v304 =
                    *(_QWORD*)(*(_QWORD*)(v281 + 64) + 8LL * (*v290 & 0xFFF));
                v305 = v299 | (1 << *(_BYTE*)(v304 + 104));
                v306 = *(_BYTE*)(v304 + 250);
                LOWORD(v1147_.v1155) = v305;
                v307 = (1LL << v306) | v301;
                v308 = *(_BYTE*)(v304 + 115);
                v1147_.v1156 = v307;
                HIDWORD(v1147_.v1155) |= 1 << v308;
                v309 =
                    *(unsigned __int16*)(*(_QWORD*)(v304 + 24) + 1064LL) | v303;
                WORD1(v1147_.v1155) = v309;
                LOWORD(v304) = v290[1];
                v290 += 4;
                v310 = *(_QWORD*)(*(_QWORD*)(v281 + 64) + 8 * (v304 & 0xFFF));
                v287 = v305 | (1 << *(_BYTE*)(v310 + 104));
                v311 = *(_BYTE*)(v310 + 250);
                LOWORD(v1147_.v1155) = v287;
                v286 = (1LL << v311) | v307;
                v312 = *(_BYTE*)(v310 + 115);
                v1147_.v1156 = v286;
                v285 = (1 << v312) | HIDWORD(v1147_.v1155);
                HIDWORD(v1147_.v1155) = v285;
                v284 =
                    *(unsigned __int16*)(*(_QWORD*)(v310 + 24) + 1064LL) | v309;
                WORD1(v1147_.v1155) = v284;
              } while (-(__int64)(v283 & 0xFFFFFFFFFFFFFFFCLL) != v291);
              v288 = -v291;
              v289 = v283 & 3;
              if (v289 == 0) {
                goto LABEL_339;
              }
            LABEL_353:
              v313 = (int*)v1147_.v1149 + v288;
              do {
                v314 = *v313++;
                --v289;
                v315 = *(_QWORD*)(*(_QWORD*)(v281 + 64) + 8LL * (v314 & 0xFFF));
                v287 |= 1 << *(_BYTE*)(v315 + 104);
                v316 = *(_BYTE*)(v315 + 250);
                LOWORD(v1147_.v1155) = v287;
                v286 |= 1LL << v316;
                v317 = *(_BYTE*)(v315 + 115);
                v1147_.v1156 = v286;
                v285 |= 1 << v317;
                HIDWORD(v1147_.v1155) = v285;
                v284 |= *(unsigned __int16*)(*(_QWORD*)(v315 + 24) + 1064LL);
                WORD1(v1147_.v1155) = v284;
              } while (v289 != 0);
              goto LABEL_339;
            }
          LABEL_356:
            v318 = *(_QWORD*)(v81 + 832);
            v319 = *(_QWORD*)(v81 + 840);
            if (v318 >= v319) {
              v331 = *(_QWORD*)(v81 + 824);
              v332 = v318 - v331;
              v333 = 1 - 0x5555555555555555LL * ((__int64)(v318 - v331) >> 5);
              if (v333 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v334 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v319 - v331) >> 5);
              if (2 * v334 > v333) {
                v333 = 2 * v334;
              }
              if (v334 >= 0x155555555555555LL) {
                v335 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v335 = v333;
              }
              if (v335 != 0) {
                if (v335 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                v336 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v335, 16, 0);
              }
              else {
                v336 = 0;
              }
              v337 = v336 + v332;
              *(_DWORD*)(v337 + 24) = 0;
              *(_QWORD*)(v337 + 8) = 0;
              *(_QWORD*)(v337 + 16) = 0;
              *(_QWORD*)v337 = 0;
              if ((__int64 (***)(void))(v336 + v332) != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)(v336 + v332), (__int64)v1145_.v1145,
                    v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v338 = v1147_.v1148;
              *(_QWORD*)(v337 + 32) = 0;
              *(_QWORD*)(v337 + 40) = 0;
              *(_QWORD*)(v337 + 48) = 0;
              *(_DWORD*)(v337 + 24) = v338;
              v339 = (__int64)v1147_.v1149;
              v340 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v340 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v341 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v342 = v341 + v340;
                *(_QWORD*)(v337 + 32) = v341;
                *(_QWORD*)(v337 + 40) = v341;
                *(_QWORD*)(v337 + 48) = v341 + v340;
                memcpy_alt1(v341, v339, v340);
                *(_QWORD*)(v337 + 40) = v342;
              }
              v344 = v1147_.v1152;
              v343 = v1147_.v1153;
              *(_QWORD*)(v337 + 64) = 0;
              *(_QWORD*)(v337 + 72) = 0;
              v345 = v343 - v344;
              *(_QWORD*)(v337 + 56) = 0;
              if (v343 != v344) {
                if ((v345 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v346 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v343 - v344, 16, 0);
                v347 = v346 + v345;
                *(_QWORD*)(v337 + 56) = v346;
                *(_QWORD*)(v337 + 64) = v346;
                *(_QWORD*)(v337 + 72) = v346 + v345;
                memcpy_alt1(v346, v344, v345);
                *(_QWORD*)(v337 + 64) = v347;
              }
              v1133 = v336;
              v348 = v1147_.v1156;
              *(_QWORD*)(v337 + 80) = v1147_.v1155;
              *(_QWORD*)(v337 + 88) = v348;
              v349 = *(__int64**)(v81 + 832);
              v350 = *(__int64**)(v81 + 824);
              v351 = (__int64*)(v337 + (char*)v350 - (char*)v349);
              if (v350 == v349) {
                v266 = v1126;
              }
              else {
                v352 = 0;
                do {
                  v357 = &v351[v352];
                  *((_DWORD*)v357 + 6) = 0;
                  v357[1] = 0;
                  v357[2] = 0;
                  *v357 = 0;
                  if (v351 != v350) {
                    GameRoutine_7fb7c0_alt1(&v351[v352], v350[v352],
                                            v350[v352 + 1],
                                            (v350[v352 + 1] - v350[v352]) >> 2);
                  }
                  v353 = &v350[v352];
                  v352 += 12;
                  v354 = *((_DWORD*)v353 + 6);
                  v357[4] = 0;
                  v357[5] = 0;
                  v357[6] = 0;
                  *((_DWORD*)v357 + 6) = v354;
                  v357[4] = v353[4];
                  v357[5] = v353[5];
                  v357[6] = v353[6];
                  v353[5] = 0;
                  v353[6] = 0;
                  v353[4] = 0;
                  v357[8] = 0;
                  v357[9] = 0;
                  v357[7] = 0;
                  v357[7] = v353[7];
                  v357[8] = v353[8];
                  v357[9] = v353[9];
                  v353[8] = 0;
                  v353[9] = 0;
                  v353[7] = 0;
                  v356 = v353[10];
                  v355 = v353[11];
                  v357[10] = v356;
                  v357[11] = v355;
                } while (&v350[v352] != v349);
                v266 = v1126;
                do {
                  v358 = v350[7];
                  if (v358 != 0) {
                    v350[8] = v358;
                    v359 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v359 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v359, v358);
                  }
                  v360 = v350[4];
                  if (v360 != 0) {
                    v350[5] = v360;
                    v361 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v361 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v361, v360);
                  }
                  v362 = *v350;
                  if (*v350 != 0) {
                    v350[1] = v362;
                    v363 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v363 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v363, v362);
                  }
                  v350 += 12;
                } while (v350 != v349);
                v350 = *(__int64**)(v81 + 824);
              }
              v330 = v337 + 96;
              *(_QWORD*)(v81 + 824) = v351;
              *(_QWORD*)(v81 + 832) = v337 + 96;
              *(_QWORD*)(v81 + 840) = v1133 + 96 * v335;
              if (v350 != nullptr) {
                v364 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v364 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v364,
                    (__int64)v350);
              }
            }
            else {
              *(_DWORD*)(v318 + 24) = 0;
              *(_QWORD*)(v318 + 8) = 0;
              *(_QWORD*)(v318 + 16) = 0;
              *(_QWORD*)v318 = 0;
              if ((__int64 (***)(void))v318 != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)v318, (__int64)v1145_.v1145, v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v320 = v1147_.v1148;
              *(_QWORD*)(v318 + 32) = 0;
              *(_QWORD*)(v318 + 40) = 0;
              *(_QWORD*)(v318 + 48) = 0;
              *(_DWORD*)(v318 + 24) = v320;
              v321 = (__int64)v1147_.v1149;
              v322 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v322 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v323 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v324 = v323 + v322;
                *(_QWORD*)(v318 + 32) = v323;
                *(_QWORD*)(v318 + 40) = v323;
                *(_QWORD*)(v318 + 48) = v323 + v322;
                memcpy_alt1(v323, v321, v322);
                *(_QWORD*)(v318 + 40) = v324;
              }
              *(_QWORD*)(v318 + 64) = 0;
              *(_QWORD*)(v318 + 72) = 0;
              *(_QWORD*)(v318 + 56) = 0;
              v325 = v1147_.v1152;
              v326 = v1147_.v1153 - v1147_.v1152;
              if (v1147_.v1153 != v1147_.v1152) {
                if ((v326 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v327 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    v1147_.v1153 - v1147_.v1152, 16, 0);
                v328 = v327 + v326;
                *(_QWORD*)(v318 + 56) = v327;
                *(_QWORD*)(v318 + 64) = v327;
                *(_QWORD*)(v318 + 72) = v327 + v326;
                memcpy_alt1(v327, v325, v326);
                *(_QWORD*)(v318 + 64) = v328;
              }
              v329 = v1147_.v1156;
              v330 = v318 + 96;
              *(_QWORD*)(v318 + 80) = v1147_.v1155;
              *(_QWORD*)(v318 + 88) = v329;
            }
            v265 = v1123;
            v365 = v1147_.v1152;
            *(_QWORD*)(v81 + 832) = v330;
            if (v365 != 0) {
              v1147_.v1153 = v365;
              v366 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v366 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v366, v365);
            }
            v267 = v1140;
            if (v1147_.v1149 != nullptr) {
              v1147_.v1150 = v1147_.v1149;
              v367 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v367 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v367,
                  (__int64)v1147_.v1149);
            }
            if (v1145_.v1145 != nullptr) {
              v1145_.v1146 = (unsigned __int64)v1145_.v1145;
              v368 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v368 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v368,
                  (__int64)v1145_.v1145);
            }
          }
          ++v267;
        } while (v267 != v266);
      }
      v369 = *(_QWORD*)(v265 + 176);
      v370 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v369 != 0) {
        LODWORD(v1157) = *(_WORD*)(v369 + 16) & 0xFFF;
        if ((_DWORD)v1157 != 0) {
          LODWORD(v1147_.v1148) = 0;
          v1145_.v1146 = 0;
          v1147_.v1147 = 0;
          v1145_.v1145 = nullptr;
          v1147_.v1149 = nullptr;
          v1147_.v1150 = nullptr;
          v1147_.v1151 = 0;
          v1147_.v1152 = 0;
          v1147_.v1153 = 0;
          v1147_.v1154 = 0;
          v1147_.v1155 = 0;
          v1147_.v1156 = 0;
          if ((UnitSkillList_84cc00_alt1((__int64)&v1145_.v1145, &v1157, 1) &
               1) == 0) {
            goto LABEL_436;
          }
          v1147_.v1155 = 0;
          v1147_.v1156 = 0;
          v371 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
          if ((int)((unsigned __int64)((char*)v1147_.v1150 -
                                       (char*)v1147_.v1149) >>
                    2) < 1) {
            goto LABEL_436;
          }
          v372 = *GameData_212c880[0];
          v373 = (int)(v371 >> 2);
          if (v373 <= 1) {
            v374 = 1;
          }
          else {
            v374 = (int)(v371 >> 2);
          }
          if (v373 >= 4) {
            v381 = v1147_.v1149 + 1;
            v382 = 0;
            v375 = 0;
            v376 = 0;
            v377 = 0;
            v378 = 0;
            do {
              v382 -= 4;
              v383 = *(_QWORD*)(*(_QWORD*)(v372 + 64) +
                                8LL * (*(v381 - 2) & 0xFFF));
              v384 = v378 | (1 << *(_BYTE*)(v383 + 104));
              v385 = *(_BYTE*)(v383 + 250);
              LOWORD(v1147_.v1155) = v384;
              v386 = (1LL << v385) | v377;
              v387 = *(_BYTE*)(v383 + 115);
              v1147_.v1156 = v386;
              HIDWORD(v1147_.v1155) = (1 << v387) | v376;
              v388 =
                  *(unsigned __int16*)(*(_QWORD*)(v383 + 24) + 1064LL) | v375;
              WORD1(v1147_.v1155) = v388;
              v389 = *(_QWORD*)(*(_QWORD*)(v372 + 64) +
                                8LL * (*(v381 - 1) & 0xFFF));
              v390 = v384 | (1 << *(_BYTE*)(v389 + 104));
              v391 = *(_BYTE*)(v389 + 250);
              LOWORD(v1147_.v1155) = v390;
              v392 = (1LL << v391) | v386;
              v393 = *(_BYTE*)(v389 + 115);
              v1147_.v1156 = v392;
              HIDWORD(v1147_.v1155) |= 1 << v393;
              v394 =
                  *(unsigned __int16*)(*(_QWORD*)(v389 + 24) + 1064LL) | v388;
              WORD1(v1147_.v1155) = v394;
              v395 = *(_QWORD*)(*(_QWORD*)(v372 + 64) + 8LL * (*v381 & 0xFFF));
              v396 = v390 | (1 << *(_BYTE*)(v395 + 104));
              v397 = *(_BYTE*)(v395 + 250);
              LOWORD(v1147_.v1155) = v396;
              v398 = (1LL << v397) | v392;
              v399 = *(_BYTE*)(v395 + 115);
              v1147_.v1156 = v398;
              HIDWORD(v1147_.v1155) |= 1 << v399;
              v400 =
                  *(unsigned __int16*)(*(_QWORD*)(v395 + 24) + 1064LL) | v394;
              WORD1(v1147_.v1155) = v400;
              LOWORD(v395) = v381[1];
              v381 += 4;
              v401 = *(_QWORD*)(*(_QWORD*)(v372 + 64) + 8 * (v395 & 0xFFF));
              v378 = v396 | (1 << *(_BYTE*)(v401 + 104));
              v402 = *(_BYTE*)(v401 + 250);
              LOWORD(v1147_.v1155) = v378;
              v377 = (1LL << v402) | v398;
              v403 = *(_BYTE*)(v401 + 115);
              v1147_.v1156 = v377;
              v376 = (1 << v403) | HIDWORD(v1147_.v1155);
              HIDWORD(v1147_.v1155) = v376;
              v375 =
                  *(unsigned __int16*)(*(_QWORD*)(v401 + 24) + 1064LL) | v400;
              WORD1(v1147_.v1155) = v375;
            } while (-(__int64)(v374 & 0xFFFFFFFFFFFFFFFCLL) != v382);
            v379 = -v382;
            v380 = v374 & 3;
            if (v380 == 0) {
              goto LABEL_436;
            }
          }
          else {
            v375 = 0;
            v376 = 0;
            v377 = 0;
            v378 = 0;
            v379 = 0;
            v380 = v374 & 3;
            if (v380 == 0) {
            LABEL_436:
              v409 = *(_QWORD*)(v81 + 832);
              v410 = *(_QWORD*)(v81 + 840);
              if (v409 >= v410) {
                v412 = *(_QWORD*)(v81 + 824);
                v413 = v409 - v412;
                v414 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v409 - v412) >> 5) + 1;
                if (v414 > 0x2AAAAAAAAAAAAAALL) {
                LABEL_1187:
                  GameRoutine_705810_alt1();
                }
                v415 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v410 - v412) >> 5);
                if (2 * v415 > v414) {
                  v414 = 2 * v415;
                }
                if (v415 >= 0x155555555555555LL) {
                  v416 = 0x2AAAAAAAAAAAAAALL;
                }
                else {
                  v416 = v414;
                }
                if (v416 != 0) {
                  if (v416 > 0x2AAAAAAAAAAAAAALL) {
                    goto LABEL_1188;
                  }
                  v417 = fw_memory_HeapManager_Allocate_alt1(*v370, 96 * v416,
                                                             16, 0);
                }
                else {
                  v417 = 0;
                }
                v418 = v417 + v413;
                GameRoutine_705700_alt1(v417 + v413, (__int64)&v1145_.v1145);
                v419 = *(__int64**)(v81 + 832);
                v420 = *(__int64**)(v81 + 824);
                v421 = (__int64*)(v418 + (char*)v420 - (char*)v419);
                if (v419 != v420) {
                  v1141 = v416;
                  v422 = 0;
                  do {
                    v427 = &v421[v422];
                    *((_DWORD*)v427 + 6) = 0;
                    v427[1] = 0;
                    v427[2] = 0;
                    *v427 = 0;
                    if (v421 != v420) {
                      GameRoutine_7fb7c0_alt1(
                          &v421[v422], v420[v422], v420[v422 + 1],
                          (v420[v422 + 1] - v420[v422]) >> 2);
                    }
                    v423 = &v420[v422];
                    v422 += 12;
                    v424 = *((_DWORD*)v423 + 6);
                    v427[4] = 0;
                    v427[5] = 0;
                    v427[6] = 0;
                    *((_DWORD*)v427 + 6) = v424;
                    v427[4] = v423[4];
                    v427[5] = v423[5];
                    v427[6] = v423[6];
                    v423[5] = 0;
                    v423[6] = 0;
                    v423[4] = 0;
                    v427[8] = 0;
                    v427[9] = 0;
                    v427[7] = 0;
                    v427[7] = v423[7];
                    v427[8] = v423[8];
                    v427[9] = v423[9];
                    v423[8] = 0;
                    v423[9] = 0;
                    v423[7] = 0;
                    v426 = v423[10];
                    v425 = v423[11];
                    v427[10] = v426;
                    v427[11] = v425;
                  } while (&v420[v422] != v419);
                  v416 = v1141;
                  do {
                    v428 = v420[7];
                    if (v428 != 0) {
                      v420[8] = v428;
                      v429 = 56;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v429 = 128;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v429, v428);
                    }
                    v430 = v420[4];
                    if (v430 != 0) {
                      v420[5] = v430;
                      v431 = 56;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v431 = 128;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v431, v430);
                    }
                    v432 = *v420;
                    if (*v420 != 0) {
                      v420[1] = v432;
                      v433 = 56;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v433 = 128;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v433, v432);
                    }
                    v420 += 12;
                  } while (v420 != v419);
                  v420 = *(__int64**)(v81 + 824);
                }
                v411 = v418 + 96;
                *(_QWORD*)(v81 + 824) = v421;
                *(_QWORD*)(v81 + 832) = v418 + 96;
                *(_QWORD*)(v81 + 840) = v417 + 96 * v416;
                v370 = (__int64*)fw_memory_g_heap_manager_ptr;
                if (v420 != nullptr) {
                  v434 = 56;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v434 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v434,
                      (__int64)v420);
                }
              }
              else {
                v411 =
                    GameRoutine_705700_alt1(v409, (__int64)&v1145_.v1145) + 96;
              }
              v435 = v1147_.v1152;
              *(_QWORD*)(v81 + 832) = v411;
              if (v435 != 0) {
                v436 = *v370;
                v1147_.v1153 = v435;
                v437 = 56;
                if (*(_QWORD*)(v436 + 200) != 0) {
                  v437 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(v436 + v437, v435);
              }
              if (v1147_.v1149 != nullptr) {
                v438 = *v370;
                v1147_.v1150 = v1147_.v1149;
                v439 = 56;
                if (*(_QWORD*)(v438 + 200) != 0) {
                  v439 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(v438 + v439,
                                                   (__int64)v1147_.v1149);
              }
              if (v1145_.v1145 != nullptr) {
                v440 = *v370;
                v1145_.v1146 = (unsigned __int64)v1145_.v1145;
                v441 = 56;
                if (*(_QWORD*)(v440 + 200) != 0) {
                  v441 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(v440 + v441,
                                                   (__int64)v1145_.v1145);
              }
              goto LABEL_484;
            }
          }
          v404 = (int*)v1147_.v1149 + v379;
          do {
            v405 = *v404++;
            --v380;
            v406 = *(_QWORD*)(*(_QWORD*)(v372 + 64) + 8LL * (v405 & 0xFFF));
            v378 |= 1 << *(_BYTE*)(v406 + 104);
            v407 = *(_BYTE*)(v406 + 250);
            LOWORD(v1147_.v1155) = v378;
            v377 |= 1LL << v407;
            v408 = *(_BYTE*)(v406 + 115);
            v1147_.v1156 = v377;
            v376 |= 1 << v408;
            HIDWORD(v1147_.v1155) = v376;
            v375 |= *(unsigned __int16*)(*(_QWORD*)(v406 + 24) + 1064LL);
            WORD1(v1147_.v1155) = v375;
          } while (v380 != 0);
          goto LABEL_436;
        }
      }
    LABEL_484:
      v442 = *(_QWORD*)(v81 + 856);
      v443 = *(_QWORD*)(v81 + 848);
      if (v443 != v442) {
        do {
          v448 = *(_QWORD*)(v442 - 40);
          if (v448 != 0) {
            *(_QWORD*)(v442 - 32) = v448;
            v449 = 56;
            if (*(_QWORD*)(*v370 + 200) != 0) {
              v449 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*v370 + v449, v448);
          }
          v450 = *(_QWORD*)(v442 - 64);
          if (v450 != 0) {
            *(_QWORD*)(v442 - 56) = v450;
            v451 = 56;
            if (*(_QWORD*)(*v370 + 200) != 0) {
              v451 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*v370 + v451, v450);
          }
          v452 = v442 - 96;
          v453 = *(_QWORD*)(v442 - 96);
          if (v453 != 0) {
            *(_QWORD*)(v442 - 88) = v453;
            v454 = 56;
            if (*(_QWORD*)(*v370 + 200) != 0) {
              v454 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*v370 + v454, v453);
          }
          v442 -= 96;
        } while (v452 != v443);
      }
      v444 = v1123;
      *(_QWORD*)(v81 + 856) = v443;
      v445 = *(unsigned __int16*)(v1123 + 184);
      v446 = GameData_212c880[0];
      if (*(_WORD*)(v1123 + 184) != 0) {
        v447 = 0;
        v1127 = *(unsigned __int16*)(v1123 + 184);
        do {
          v455 = (unsigned __int16*)(*(_QWORD*)(v444 + 192) + 16 * v447);
          if (*((_QWORD*)v455 + 1) != 0) {
            LODWORD(v1147_.v1148) = 0;
            v1145_.v1146 = 0;
            v1147_.v1147 = 0;
            v1145_.v1145 = nullptr;
            v1147_.v1149 = nullptr;
            v1147_.v1150 = nullptr;
            v1147_.v1151 = 0;
            v1147_.v1152 = 0;
            v1147_.v1153 = 0;
            v1147_.v1154 = 0;
            v1147_.v1155 = 0;
            v1147_.v1156 = 0;
            v456 = *v455;
            if (*v455 != 0) {
              v457 = 0;
              while (1) {
                v458 = *(_QWORD*)(*((_QWORD*)v455 + 1) + 16 * v457 + 8);
                if (v458 != 0) {
                  LODWORD(v458) = *(_WORD*)(v458 + 16) & 0xFFF;
                }
                LODWORD(v1157) = v458;
                if ((UnitSkillList_84cc00_alt1((__int64)&v1145_.v1145, &v1157,
                                               1) &
                     1) != 0) {
                  v1147_.v1155 = 0;
                  v1147_.v1156 = 0;
                  v459 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
                  if ((int)((unsigned __int64)((char*)v1147_.v1150 -
                                               (char*)v1147_.v1149) >>
                            2) < 1) {
                    goto LABEL_504;
                  }
                  v460 = *v446;
                  v461 = (int)(v459 >> 2);
                  v462 = v461 <= 1 ? 1LL : (int)(v459 >> 2);
                  if (v461 >= 4) {
                    break;
                  }
                  v463 = 0;
                  v464 = 0;
                  v465 = 0;
                  v466 = 0;
                  v467 = 0;
                  v468 = v462 & 3;
                  if (v468 != 0) {
                    goto LABEL_518;
                  }
                }
              LABEL_504:
                if (++v457 == v456) {
                  goto LABEL_521;
                }
              }
              v469 = v1147_.v1149 + 1;
              v470 = 0;
              v463 = 0;
              v464 = 0;
              v465 = 0;
              v466 = 0;
              do {
                v470 -= 4;
                v471 = *(_QWORD*)(*(_QWORD*)(v460 + 64) +
                                  8LL * (*(v469 - 2) & 0xFFF));
                v472 = v466 | (1 << *(_BYTE*)(v471 + 104));
                v473 = *(_BYTE*)(v471 + 250);
                LOWORD(v1147_.v1155) = v472;
                v474 = (1LL << v473) | v465;
                v475 = *(_BYTE*)(v471 + 115);
                v1147_.v1156 = v474;
                HIDWORD(v1147_.v1155) = (1 << v475) | v464;
                v476 =
                    *(unsigned __int16*)(*(_QWORD*)(v471 + 24) + 1064LL) | v463;
                WORD1(v1147_.v1155) = v476;
                v477 = *(_QWORD*)(*(_QWORD*)(v460 + 64) +
                                  8LL * (*(v469 - 1) & 0xFFF));
                v478 = v472 | (1 << *(_BYTE*)(v477 + 104));
                v479 = *(_BYTE*)(v477 + 250);
                LOWORD(v1147_.v1155) = v478;
                v480 = (1LL << v479) | v474;
                v481 = *(_BYTE*)(v477 + 115);
                v1147_.v1156 = v480;
                HIDWORD(v1147_.v1155) |= 1 << v481;
                v482 =
                    *(unsigned __int16*)(*(_QWORD*)(v477 + 24) + 1064LL) | v476;
                WORD1(v1147_.v1155) = v482;
                v483 =
                    *(_QWORD*)(*(_QWORD*)(v460 + 64) + 8LL * (*v469 & 0xFFF));
                v484 = v478 | (1 << *(_BYTE*)(v483 + 104));
                v485 = *(_BYTE*)(v483 + 250);
                LOWORD(v1147_.v1155) = v484;
                v486 = (1LL << v485) | v480;
                v487 = *(_BYTE*)(v483 + 115);
                v1147_.v1156 = v486;
                HIDWORD(v1147_.v1155) |= 1 << v487;
                v488 =
                    *(unsigned __int16*)(*(_QWORD*)(v483 + 24) + 1064LL) | v482;
                WORD1(v1147_.v1155) = v488;
                LOWORD(v483) = v469[1];
                v469 += 4;
                v489 = *(_QWORD*)(*(_QWORD*)(v460 + 64) + 8 * (v483 & 0xFFF));
                v466 = v484 | (1 << *(_BYTE*)(v489 + 104));
                v490 = *(_BYTE*)(v489 + 250);
                LOWORD(v1147_.v1155) = v466;
                v465 = (1LL << v490) | v486;
                v491 = *(_BYTE*)(v489 + 115);
                v1147_.v1156 = v465;
                v464 = (1 << v491) | HIDWORD(v1147_.v1155);
                HIDWORD(v1147_.v1155) = v464;
                v463 =
                    *(unsigned __int16*)(*(_QWORD*)(v489 + 24) + 1064LL) | v488;
                WORD1(v1147_.v1155) = v463;
              } while (-(__int64)(v462 & 0xFFFFFFFFFFFFFFFCLL) != v470);
              v467 = -v470;
              v468 = v462 & 3;
              if (v468 == 0) {
                goto LABEL_504;
              }
            LABEL_518:
              v492 = (int*)v1147_.v1149 + v467;
              do {
                v493 = *v492++;
                --v468;
                v494 = *(_QWORD*)(*(_QWORD*)(v460 + 64) + 8LL * (v493 & 0xFFF));
                v466 |= 1 << *(_BYTE*)(v494 + 104);
                v495 = *(_BYTE*)(v494 + 250);
                LOWORD(v1147_.v1155) = v466;
                v465 |= 1LL << v495;
                v496 = *(_BYTE*)(v494 + 115);
                v1147_.v1156 = v465;
                v464 |= 1 << v496;
                HIDWORD(v1147_.v1155) = v464;
                v463 |= *(unsigned __int16*)(*(_QWORD*)(v494 + 24) + 1064LL);
                WORD1(v1147_.v1155) = v463;
              } while (v468 != 0);
              goto LABEL_504;
            }
          LABEL_521:
            v497 = *(_QWORD*)(v81 + 856);
            v498 = *(_QWORD*)(v81 + 864);
            v1142 = v447;
            if (v497 >= v498) {
              v510 = *(_QWORD*)(v81 + 848);
              v511 = v497 - v510;
              v512 = 1 - 0x5555555555555555LL * ((__int64)(v497 - v510) >> 5);
              if (v512 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v513 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v498 - v510) >> 5);
              if (2 * v513 > v512) {
                v512 = 2 * v513;
              }
              if (v513 >= 0x155555555555555LL) {
                v514 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v514 = v512;
              }
              if (v514 != 0) {
                if (v514 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                v515 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v514, 16, 0);
              }
              else {
                v515 = 0;
              }
              v516 = v515 + v511;
              *(_DWORD*)(v516 + 24) = 0;
              *(_QWORD*)(v516 + 8) = 0;
              *(_QWORD*)(v516 + 16) = 0;
              *(_QWORD*)v516 = 0;
              if ((__int64 (***)(void))(v515 + v511) != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)(v515 + v511), (__int64)v1145_.v1145,
                    v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v517 = v1147_.v1148;
              *(_QWORD*)(v516 + 32) = 0;
              *(_QWORD*)(v516 + 40) = 0;
              *(_QWORD*)(v516 + 48) = 0;
              *(_DWORD*)(v516 + 24) = v517;
              v518 = (__int64)v1147_.v1149;
              v519 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v519 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v520 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v521 = v520 + v519;
                *(_QWORD*)(v516 + 32) = v520;
                *(_QWORD*)(v516 + 40) = v520;
                *(_QWORD*)(v516 + 48) = v520 + v519;
                memcpy_alt1(v520, v518, v519);
                *(_QWORD*)(v516 + 40) = v521;
              }
              v523 = v1147_.v1152;
              v522 = v1147_.v1153;
              *(_QWORD*)(v516 + 64) = 0;
              *(_QWORD*)(v516 + 72) = 0;
              v524 = v522 - v523;
              *(_QWORD*)(v516 + 56) = 0;
              if (v522 != v523) {
                if ((v524 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v525 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v522 - v523, 16, 0);
                v526 = v525 + v524;
                *(_QWORD*)(v516 + 56) = v525;
                *(_QWORD*)(v516 + 64) = v525;
                *(_QWORD*)(v516 + 72) = v525 + v524;
                memcpy_alt1(v525, v523, v524);
                *(_QWORD*)(v516 + 64) = v526;
              }
              v1134 = v515;
              v527 = v1147_.v1156;
              *(_QWORD*)(v516 + 80) = v1147_.v1155;
              *(_QWORD*)(v516 + 88) = v527;
              v528 = *(__int64**)(v81 + 856);
              v529 = *(__int64**)(v81 + 848);
              v530 = (__int64*)(v516 + (char*)v529 - (char*)v528);
              if (v529 == v528) {
                v445 = v1127;
              }
              else {
                v531 = 0;
                do {
                  v536 = &v530[v531];
                  *((_DWORD*)v536 + 6) = 0;
                  v536[1] = 0;
                  v536[2] = 0;
                  *v536 = 0;
                  if (v530 != v529) {
                    GameRoutine_7fb7c0_alt1(&v530[v531], v529[v531],
                                            v529[v531 + 1],
                                            (v529[v531 + 1] - v529[v531]) >> 2);
                  }
                  v532 = &v529[v531];
                  v531 += 12;
                  v533 = *((_DWORD*)v532 + 6);
                  v536[4] = 0;
                  v536[5] = 0;
                  v536[6] = 0;
                  *((_DWORD*)v536 + 6) = v533;
                  v536[4] = v532[4];
                  v536[5] = v532[5];
                  v536[6] = v532[6];
                  v532[5] = 0;
                  v532[6] = 0;
                  v532[4] = 0;
                  v536[8] = 0;
                  v536[9] = 0;
                  v536[7] = 0;
                  v536[7] = v532[7];
                  v536[8] = v532[8];
                  v536[9] = v532[9];
                  v532[8] = 0;
                  v532[9] = 0;
                  v532[7] = 0;
                  v535 = v532[10];
                  v534 = v532[11];
                  v536[10] = v535;
                  v536[11] = v534;
                } while (&v529[v531] != v528);
                v446 = GameData_212c880[0];
                v445 = v1127;
                do {
                  v537 = v529[7];
                  if (v537 != 0) {
                    v529[8] = v537;
                    v538 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v538 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v538, v537);
                  }
                  v539 = v529[4];
                  if (v539 != 0) {
                    v529[5] = v539;
                    v540 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v540 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v540, v539);
                  }
                  v541 = *v529;
                  if (*v529 != 0) {
                    v529[1] = v541;
                    v542 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v542 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v542, v541);
                  }
                  v529 += 12;
                } while (v529 != v528);
                v529 = *(__int64**)(v81 + 848);
              }
              v509 = v516 + 96;
              *(_QWORD*)(v81 + 848) = v530;
              *(_QWORD*)(v81 + 856) = v516 + 96;
              *(_QWORD*)(v81 + 864) = v1134 + 96 * v514;
              if (v529 != nullptr) {
                v543 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v543 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v543,
                    (__int64)v529);
              }
            }
            else {
              *(_DWORD*)(v497 + 24) = 0;
              *(_QWORD*)(v497 + 8) = 0;
              *(_QWORD*)(v497 + 16) = 0;
              *(_QWORD*)v497 = 0;
              if ((__int64 (***)(void))v497 != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)v497, (__int64)v1145_.v1145, v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v499 = v1147_.v1148;
              *(_QWORD*)(v497 + 32) = 0;
              *(_QWORD*)(v497 + 40) = 0;
              *(_QWORD*)(v497 + 48) = 0;
              *(_DWORD*)(v497 + 24) = v499;
              v500 = (__int64)v1147_.v1149;
              v501 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v501 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v502 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v503 = v502 + v501;
                *(_QWORD*)(v497 + 32) = v502;
                *(_QWORD*)(v497 + 40) = v502;
                *(_QWORD*)(v497 + 48) = v502 + v501;
                memcpy_alt1(v502, v500, v501);
                *(_QWORD*)(v497 + 40) = v503;
              }
              *(_QWORD*)(v497 + 64) = 0;
              *(_QWORD*)(v497 + 72) = 0;
              *(_QWORD*)(v497 + 56) = 0;
              v504 = v1147_.v1152;
              v505 = v1147_.v1153 - v1147_.v1152;
              if (v1147_.v1153 != v1147_.v1152) {
                if ((v505 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v506 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    v1147_.v1153 - v1147_.v1152, 16, 0);
                v507 = v506 + v505;
                *(_QWORD*)(v497 + 56) = v506;
                *(_QWORD*)(v497 + 64) = v506;
                *(_QWORD*)(v497 + 72) = v506 + v505;
                memcpy_alt1(v506, v504, v505);
                *(_QWORD*)(v497 + 64) = v507;
              }
              v508 = v1147_.v1156;
              v509 = v497 + 96;
              *(_QWORD*)(v497 + 80) = v1147_.v1155;
              *(_QWORD*)(v497 + 88) = v508;
            }
            v444 = v1123;
            v544 = v1147_.v1152;
            *(_QWORD*)(v81 + 856) = v509;
            if (v544 != 0) {
              v1147_.v1153 = v544;
              v545 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v545 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v545, v544);
            }
            v447 = v1142;
            if (v1147_.v1149 != nullptr) {
              v1147_.v1150 = v1147_.v1149;
              v546 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v546 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v546,
                  (__int64)v1147_.v1149);
            }
            if (v1145_.v1145 != nullptr) {
              v1145_.v1146 = (unsigned __int64)v1145_.v1145;
              v547 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v547 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v547,
                  (__int64)v1145_.v1145);
            }
          }
          ++v447;
        } while (v447 != v445);
      }
      v548 = *(_QWORD*)(v81 + 880);
      v549 = *(_QWORD*)(v81 + 872);
      v550 = fw_memory_g_heap_manager_ptr;
      if (v549 != v548) {
        do {
          v555 = *(_QWORD*)(v548 - 40);
          if (v555 != 0) {
            *(_QWORD*)(v548 - 32) = v555;
            v556 = 56;
            if (*(_QWORD*)(*(_QWORD*)v550 + 200LL) != 0) {
              v556 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v550 + v556, v555);
          }
          v557 = *(_QWORD*)(v548 - 64);
          if (v557 != 0) {
            *(_QWORD*)(v548 - 56) = v557;
            v558 = 56;
            if (*(_QWORD*)(*(_QWORD*)v550 + 200LL) != 0) {
              v558 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v550 + v558, v557);
          }
          v559 = v548 - 96;
          v560 = *(_QWORD*)(v548 - 96);
          if (v560 != 0) {
            *(_QWORD*)(v548 - 88) = v560;
            v561 = 56;
            if (*(_QWORD*)(*(_QWORD*)v550 + 200LL) != 0) {
              v561 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v550 + v561, v560);
          }
          v548 -= 96;
        } while (v559 != v549);
      }
      v551 = v1123;
      *(_QWORD*)(v81 + 880) = v549;
      v552 = *(unsigned __int16*)(v1123 + 200);
      v553 = GameData_212c880[0];
      if (*(_WORD*)(v1123 + 200) != 0) {
        v554 = 0;
        v1128 = *(unsigned __int16*)(v1123 + 200);
        do {
          v562 = (unsigned __int16*)(*(_QWORD*)(v551 + 208) + 16 * v554);
          if (*((_QWORD*)v562 + 1) != 0) {
            LODWORD(v1147_.v1148) = 0;
            v1145_.v1146 = 0;
            v1147_.v1147 = 0;
            v1145_.v1145 = nullptr;
            v1147_.v1149 = nullptr;
            v1147_.v1150 = nullptr;
            v1147_.v1151 = 0;
            v1147_.v1152 = 0;
            v1147_.v1153 = 0;
            v1147_.v1154 = 0;
            v1147_.v1155 = 0;
            v1147_.v1156 = 0;
            v563 = *v562;
            if (*v562 != 0) {
              v564 = 0;
              while (1) {
                v565 = *(_QWORD*)(*((_QWORD*)v562 + 1) + 16 * v564 + 8);
                if (v565 != 0) {
                  LODWORD(v565) = *(_WORD*)(v565 + 16) & 0xFFF;
                }
                LODWORD(v1157) = v565;
                if ((UnitSkillList_84cc00_alt1((__int64)&v1145_.v1145, &v1157,
                                               1) &
                     1) != 0) {
                  v1147_.v1155 = 0;
                  v1147_.v1156 = 0;
                  v566 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
                  if ((int)((unsigned __int64)((char*)v1147_.v1150 -
                                               (char*)v1147_.v1149) >>
                            2) < 1) {
                    goto LABEL_606;
                  }
                  v567 = *v553;
                  v568 = (int)(v566 >> 2);
                  v569 = v568 <= 1 ? 1LL : (int)(v566 >> 2);
                  if (v568 >= 4) {
                    break;
                  }
                  v570 = 0;
                  v571 = 0;
                  v572 = 0;
                  v573 = 0;
                  v574 = 0;
                  v575 = v569 & 3;
                  if (v575 != 0) {
                    goto LABEL_620;
                  }
                }
              LABEL_606:
                if (++v564 == v563) {
                  goto LABEL_623;
                }
              }
              v576 = v1147_.v1149 + 1;
              v577 = 0;
              v570 = 0;
              v571 = 0;
              v572 = 0;
              v573 = 0;
              do {
                v577 -= 4;
                v578 = *(_QWORD*)(*(_QWORD*)(v567 + 64) +
                                  8LL * (*(v576 - 2) & 0xFFF));
                v579 = v573 | (1 << *(_BYTE*)(v578 + 104));
                v580 = *(_BYTE*)(v578 + 250);
                LOWORD(v1147_.v1155) = v579;
                v581 = (1LL << v580) | v572;
                v582 = *(_BYTE*)(v578 + 115);
                v1147_.v1156 = v581;
                HIDWORD(v1147_.v1155) = (1 << v582) | v571;
                v583 =
                    *(unsigned __int16*)(*(_QWORD*)(v578 + 24) + 1064LL) | v570;
                WORD1(v1147_.v1155) = v583;
                v584 = *(_QWORD*)(*(_QWORD*)(v567 + 64) +
                                  8LL * (*(v576 - 1) & 0xFFF));
                v585 = v579 | (1 << *(_BYTE*)(v584 + 104));
                v586 = *(_BYTE*)(v584 + 250);
                LOWORD(v1147_.v1155) = v585;
                v587 = (1LL << v586) | v581;
                v588 = *(_BYTE*)(v584 + 115);
                v1147_.v1156 = v587;
                HIDWORD(v1147_.v1155) |= 1 << v588;
                v589 =
                    *(unsigned __int16*)(*(_QWORD*)(v584 + 24) + 1064LL) | v583;
                WORD1(v1147_.v1155) = v589;
                v590 =
                    *(_QWORD*)(*(_QWORD*)(v567 + 64) + 8LL * (*v576 & 0xFFF));
                v591 = v585 | (1 << *(_BYTE*)(v590 + 104));
                v592 = *(_BYTE*)(v590 + 250);
                LOWORD(v1147_.v1155) = v591;
                v593 = (1LL << v592) | v587;
                v594 = *(_BYTE*)(v590 + 115);
                v1147_.v1156 = v593;
                HIDWORD(v1147_.v1155) |= 1 << v594;
                v595 =
                    *(unsigned __int16*)(*(_QWORD*)(v590 + 24) + 1064LL) | v589;
                WORD1(v1147_.v1155) = v595;
                LOWORD(v590) = v576[1];
                v576 += 4;
                v596 = *(_QWORD*)(*(_QWORD*)(v567 + 64) + 8 * (v590 & 0xFFF));
                v573 = v591 | (1 << *(_BYTE*)(v596 + 104));
                v597 = *(_BYTE*)(v596 + 250);
                LOWORD(v1147_.v1155) = v573;
                v572 = (1LL << v597) | v593;
                v598 = *(_BYTE*)(v596 + 115);
                v1147_.v1156 = v572;
                v571 = (1 << v598) | HIDWORD(v1147_.v1155);
                HIDWORD(v1147_.v1155) = v571;
                v570 =
                    *(unsigned __int16*)(*(_QWORD*)(v596 + 24) + 1064LL) | v595;
                WORD1(v1147_.v1155) = v570;
              } while (-(__int64)(v569 & 0xFFFFFFFFFFFFFFFCLL) != v577);
              v574 = -v577;
              v575 = v569 & 3;
              if (v575 == 0) {
                goto LABEL_606;
              }
            LABEL_620:
              v599 = (int*)v1147_.v1149 + v574;
              do {
                v600 = *v599++;
                --v575;
                v601 = *(_QWORD*)(*(_QWORD*)(v567 + 64) + 8LL * (v600 & 0xFFF));
                v573 |= 1 << *(_BYTE*)(v601 + 104);
                v602 = *(_BYTE*)(v601 + 250);
                LOWORD(v1147_.v1155) = v573;
                v572 |= 1LL << v602;
                v603 = *(_BYTE*)(v601 + 115);
                v1147_.v1156 = v572;
                v571 |= 1 << v603;
                HIDWORD(v1147_.v1155) = v571;
                v570 |= *(unsigned __int16*)(*(_QWORD*)(v601 + 24) + 1064LL);
                WORD1(v1147_.v1155) = v570;
              } while (v575 != 0);
              goto LABEL_606;
            }
          LABEL_623:
            v604 = *(_QWORD*)(v81 + 880);
            v605 = *(_QWORD*)(v81 + 888);
            v1143 = v554;
            if (v604 >= v605) {
              v617 = *(_QWORD*)(v81 + 872);
              v618 = v604 - v617;
              v619 = 1 - 0x5555555555555555LL * ((__int64)(v604 - v617) >> 5);
              if (v619 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v620 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v605 - v617) >> 5);
              if (2 * v620 > v619) {
                v619 = 2 * v620;
              }
              if (v620 >= 0x155555555555555LL) {
                v621 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v621 = v619;
              }
              if (v621 != 0) {
                if (v621 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                v622 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v621, 16, 0);
              }
              else {
                v622 = 0;
              }
              v623 = v622 + v618;
              *(_DWORD*)(v623 + 24) = 0;
              *(_QWORD*)(v623 + 8) = 0;
              *(_QWORD*)(v623 + 16) = 0;
              *(_QWORD*)v623 = 0;
              if ((__int64 (***)(void))(v622 + v618) != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)(v622 + v618), (__int64)v1145_.v1145,
                    v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v624 = v1147_.v1148;
              *(_QWORD*)(v623 + 32) = 0;
              *(_QWORD*)(v623 + 40) = 0;
              *(_QWORD*)(v623 + 48) = 0;
              *(_DWORD*)(v623 + 24) = v624;
              v625 = (__int64)v1147_.v1149;
              v626 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v626 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v627 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v628 = v627 + v626;
                *(_QWORD*)(v623 + 32) = v627;
                *(_QWORD*)(v623 + 40) = v627;
                *(_QWORD*)(v623 + 48) = v627 + v626;
                memcpy_alt1(v627, v625, v626);
                *(_QWORD*)(v623 + 40) = v628;
              }
              v630 = v1147_.v1152;
              v629 = v1147_.v1153;
              *(_QWORD*)(v623 + 64) = 0;
              *(_QWORD*)(v623 + 72) = 0;
              v631 = v629 - v630;
              *(_QWORD*)(v623 + 56) = 0;
              if (v629 != v630) {
                if ((v631 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v632 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v629 - v630, 16, 0);
                v633 = v632 + v631;
                *(_QWORD*)(v623 + 56) = v632;
                *(_QWORD*)(v623 + 64) = v632;
                *(_QWORD*)(v623 + 72) = v632 + v631;
                memcpy_alt1(v632, v630, v631);
                *(_QWORD*)(v623 + 64) = v633;
              }
              v1135 = v622;
              v634 = v1147_.v1156;
              *(_QWORD*)(v623 + 80) = v1147_.v1155;
              *(_QWORD*)(v623 + 88) = v634;
              v635 = *(__int64**)(v81 + 880);
              v636 = *(__int64**)(v81 + 872);
              v637 = (__int64*)(v623 + (char*)v636 - (char*)v635);
              if (v636 == v635) {
                v552 = v1128;
              }
              else {
                v638 = 0;
                do {
                  v643 = &v637[v638];
                  *((_DWORD*)v643 + 6) = 0;
                  v643[1] = 0;
                  v643[2] = 0;
                  *v643 = 0;
                  if (v637 != v636) {
                    GameRoutine_7fb7c0_alt1(&v637[v638], v636[v638],
                                            v636[v638 + 1],
                                            (v636[v638 + 1] - v636[v638]) >> 2);
                  }
                  v639 = &v636[v638];
                  v638 += 12;
                  v640 = *((_DWORD*)v639 + 6);
                  v643[4] = 0;
                  v643[5] = 0;
                  v643[6] = 0;
                  *((_DWORD*)v643 + 6) = v640;
                  v643[4] = v639[4];
                  v643[5] = v639[5];
                  v643[6] = v639[6];
                  v639[5] = 0;
                  v639[6] = 0;
                  v639[4] = 0;
                  v643[8] = 0;
                  v643[9] = 0;
                  v643[7] = 0;
                  v643[7] = v639[7];
                  v643[8] = v639[8];
                  v643[9] = v639[9];
                  v639[8] = 0;
                  v639[9] = 0;
                  v639[7] = 0;
                  v642 = v639[10];
                  v641 = v639[11];
                  v643[10] = v642;
                  v643[11] = v641;
                } while (&v636[v638] != v635);
                v553 = GameData_212c880[0];
                v552 = v1128;
                do {
                  v644 = v636[7];
                  if (v644 != 0) {
                    v636[8] = v644;
                    v645 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v645 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v645, v644);
                  }
                  v646 = v636[4];
                  if (v646 != 0) {
                    v636[5] = v646;
                    v647 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v647 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v647, v646);
                  }
                  v648 = *v636;
                  if (*v636 != 0) {
                    v636[1] = v648;
                    v649 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v649 = 128;
                    }
                    nn_mem_StandardAllocator_Free_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v649, v648);
                  }
                  v636 += 12;
                } while (v636 != v635);
                v636 = *(__int64**)(v81 + 872);
              }
              v616 = v623 + 96;
              *(_QWORD*)(v81 + 872) = v637;
              *(_QWORD*)(v81 + 880) = v623 + 96;
              *(_QWORD*)(v81 + 888) = v1135 + 96 * v621;
              if (v636 != nullptr) {
                v650 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v650 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v650,
                    (__int64)v636);
              }
            }
            else {
              *(_DWORD*)(v604 + 24) = 0;
              *(_QWORD*)(v604 + 8) = 0;
              *(_QWORD*)(v604 + 16) = 0;
              *(_QWORD*)v604 = 0;
              if ((__int64 (***)(void))v604 != &v1145_.v1145) {
                GameRoutine_7fb7c0_alt1(
                    (__int64*)v604, (__int64)v1145_.v1145, v1145_.v1146,
                    (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
              }
              v606 = v1147_.v1148;
              *(_QWORD*)(v604 + 32) = 0;
              *(_QWORD*)(v604 + 40) = 0;
              *(_QWORD*)(v604 + 48) = 0;
              *(_DWORD*)(v604 + 24) = v606;
              v607 = (__int64)v1147_.v1149;
              v608 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
              if (v1147_.v1150 != v1147_.v1149) {
                if ((v608 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v609 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
                v610 = v609 + v608;
                *(_QWORD*)(v604 + 32) = v609;
                *(_QWORD*)(v604 + 40) = v609;
                *(_QWORD*)(v604 + 48) = v609 + v608;
                memcpy_alt1(v609, v607, v608);
                *(_QWORD*)(v604 + 40) = v610;
              }
              *(_QWORD*)(v604 + 64) = 0;
              *(_QWORD*)(v604 + 72) = 0;
              *(_QWORD*)(v604 + 56) = 0;
              v611 = v1147_.v1152;
              v612 = v1147_.v1153 - v1147_.v1152;
              if (v1147_.v1153 != v1147_.v1152) {
                if ((v612 & 0x8000000000000000LL) != 0) {
                  goto LABEL_1186;
                }
                v613 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    v1147_.v1153 - v1147_.v1152, 16, 0);
                v614 = v613 + v612;
                *(_QWORD*)(v604 + 56) = v613;
                *(_QWORD*)(v604 + 64) = v613;
                *(_QWORD*)(v604 + 72) = v613 + v612;
                memcpy_alt1(v613, v611, v612);
                *(_QWORD*)(v604 + 64) = v614;
              }
              v615 = v1147_.v1156;
              v616 = v604 + 96;
              *(_QWORD*)(v604 + 80) = v1147_.v1155;
              *(_QWORD*)(v604 + 88) = v615;
            }
            v551 = v1123;
            v651 = v1147_.v1152;
            *(_QWORD*)(v81 + 880) = v616;
            if (v651 != 0) {
              v1147_.v1153 = v651;
              v652 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v652 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v652, v651);
            }
            v554 = v1143;
            if (v1147_.v1149 != nullptr) {
              v1147_.v1150 = v1147_.v1149;
              v653 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v653 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v653,
                  (__int64)v1147_.v1149);
            }
            if (v1145_.v1145 != nullptr) {
              v1145_.v1146 = (unsigned __int64)v1145_.v1145;
              v654 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v654 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v654,
                  (__int64)v1145_.v1145);
            }
          }
          ++v554;
        } while (v554 != v552);
      }
      v655 = *(_QWORD*)(v81 + 904);
      v656 = *(_QWORD*)(v81 + 896);
      i = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v656 != v655) {
        do {
          v673 = *(_QWORD*)(v655 - 40);
          if (v673 != 0) {
            *(_QWORD*)(v655 - 32) = v673;
            v674 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v674 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v674, v673);
          }
          v675 = *(_QWORD*)(v655 - 64);
          if (v675 != 0) {
            *(_QWORD*)(v655 - 56) = v675;
            v676 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v676 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v676, v675);
          }
          v677 = v655 - 96;
          v678 = *(_QWORD*)(v655 - 96);
          if (v678 != 0) {
            *(_QWORD*)(v655 - 88) = v678;
            v679 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v679 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v679, v678);
          }
          v655 -= 96;
        } while (v677 != v656);
      }
      v657 = *(_QWORD*)(v81 + 128);
      *(_QWORD*)(v81 + 904) = v656;
      *(_DWORD*)(v81 + 152) = 0;
      *(_QWORD*)(v81 + 216) = 0;
      v1144 = v81 + 128;
      *(_QWORD*)(v81 + 136) = v657;
      *(_QWORD*)(v81 + 168) = *(_QWORD*)(v81 + 160);
      *(_QWORD*)(v81 + 208) = 0;
      v658 = *(_QWORD*)(v81 + 800);
      v1120 = *(_QWORD*)(v81 + 808);
      v659 = GameData_212c880[0];
      if (v658 != v1120) {
        while (1) {
          v687 = *(_DWORD**)(v658 + 32);
          v688 = *(_DWORD**)(v658 + 40);
          v1122 = v658;
          if (v687 != v688) {
            break;
          }
        LABEL_723:
          v658 = v1122 + 96;
          if (v1122 + 96 == v1120) {
            goto LABEL_690;
          }
        }
        v689 = *v659;
        v1136 = v688;
        while (1) {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v689 + 64) +
                                   8LL * (*v687 & 0xFFF)) +
                        110LL) == 0) {
            goto LABEL_727;
          }
          if ((*v687 & 0xFFF) != 0) {
            break;
          }
        LABEL_808:
          if ((UnitSkillList_84cc00_alt1(v1144, v687, 1) & 1) != 0) {
            *(_QWORD*)(v81 + 208) = 0;
            *(_QWORD*)(v81 + 216) = 0;
            v782 = *(_QWORD*)(v81 + 160);
            v783 = *(_QWORD*)(v81 + 168) - v782;
            v689 = *v659;
            if ((int)((unsigned __int64)v783 >> 2) >= 1) {
              v784 = (int)(v783 >> 2);
              if (v784 <= 1) {
                v785 = 1;
              }
              else {
                v785 = (int)(v783 >> 2);
              }
              if (v784 >= 4) {
                v792 = (_DWORD*)(v782 + 8);
                v793 = 0;
                v786 = 0;
                v787 = 0;
                v788 = 0;
                v789 = 0;
                do {
                  v793 -= 4;
                  v794 = *(_QWORD*)(*(_QWORD*)(v689 + 64) +
                                    8LL * (*(v792 - 2) & 0xFFF));
                  v795 = v789 | (1 << *(_BYTE*)(v794 + 104));
                  *(_WORD*)(v81 + 208) = v795;
                  v796 = (1LL << *(_BYTE*)(v794 + 250)) | v788;
                  *(_QWORD*)(v81 + 216) = v796;
                  v797 = (1 << *(_BYTE*)(v794 + 115)) | v787;
                  *(_DWORD*)(v81 + 212) = v797;
                  v798 = *(unsigned __int16*)(*(_QWORD*)(v794 + 24) + 1064LL) |
                         v786;
                  *(_WORD*)(v81 + 210) = v798;
                  v799 = *(_QWORD*)(*(_QWORD*)(v689 + 64) +
                                    8LL * (*(v792 - 1) & 0xFFF));
                  v800 = v795 | (1 << *(_BYTE*)(v799 + 104));
                  *(_WORD*)(v81 + 208) = v800;
                  v801 = (1LL << *(_BYTE*)(v799 + 250)) | v796;
                  *(_QWORD*)(v81 + 216) = v801;
                  v802 = (1 << *(_BYTE*)(v799 + 115)) | v797;
                  *(_DWORD*)(v81 + 212) = v802;
                  v803 = *(unsigned __int16*)(*(_QWORD*)(v799 + 24) + 1064LL) |
                         v798;
                  *(_WORD*)(v81 + 210) = v803;
                  v804 =
                      *(_QWORD*)(*(_QWORD*)(v689 + 64) + 8LL * (*v792 & 0xFFF));
                  v805 = v800 | (1 << *(_BYTE*)(v804 + 104));
                  *(_WORD*)(v81 + 208) = v805;
                  v806 = (1LL << *(_BYTE*)(v804 + 250)) | v801;
                  *(_QWORD*)(v81 + 216) = v806;
                  v807 = (1 << *(_BYTE*)(v804 + 115)) | v802;
                  *(_DWORD*)(v81 + 212) = v807;
                  v808 = *(unsigned __int16*)(*(_QWORD*)(v804 + 24) + 1064LL) |
                         v803;
                  *(_WORD*)(v81 + 210) = v808;
                  LOWORD(v804) = v792[1];
                  v792 += 4;
                  v809 = *(_QWORD*)(*(_QWORD*)(v689 + 64) + 8 * (v804 & 0xFFF));
                  v789 = v805 | (1 << *(_BYTE*)(v809 + 104));
                  *(_WORD*)(v81 + 208) = v789;
                  v788 = (1LL << *(_BYTE*)(v809 + 250)) | v806;
                  *(_QWORD*)(v81 + 216) = v788;
                  v787 = (1 << *(_BYTE*)(v809 + 115)) | v807;
                  *(_DWORD*)(v81 + 212) = v787;
                  v786 = *(unsigned __int16*)(*(_QWORD*)(v809 + 24) + 1064LL) |
                         v808;
                  *(_WORD*)(v81 + 210) = v786;
                } while (-(__int64)(v785 & 0xFFFFFFFFFFFFFFFCLL) != v793);
                v790 = -v793;
                v791 = v785 & 3;
                if (v791 == 0) {
                  goto LABEL_727;
                }
              LABEL_819:
                v810 = (int*)(v782 + 4 * v790);
                do {
                  v811 = *v810++;
                  --v791;
                  v812 =
                      *(_QWORD*)(*(_QWORD*)(v689 + 64) + 8LL * (v811 & 0xFFF));
                  v789 |= 1 << *(_BYTE*)(v812 + 104);
                  *(_WORD*)(v81 + 208) = v789;
                  v788 |= 1LL << *(_BYTE*)(v812 + 250);
                  *(_QWORD*)(v81 + 216) = v788;
                  v787 |= 1 << *(_BYTE*)(v812 + 115);
                  *(_DWORD*)(v81 + 212) = v787;
                  v786 |= *(unsigned __int16*)(*(_QWORD*)(v812 + 24) + 1064LL);
                  *(_WORD*)(v81 + 210) = v786;
                } while (v791 != 0);
                goto LABEL_727;
              }
              v786 = 0;
              v787 = 0;
              v788 = 0;
              v789 = 0;
              v790 = 0;
              v791 = v785 & 3;
              if (v791 != 0) {
                goto LABEL_819;
              }
            }
          }
          else {
            v689 = *v659;
          }
        LABEL_727:
          if (++v687 == v688) {
            goto LABEL_723;
          }
        }
        LODWORD(v1147_.v1148) = 0;
        v1145_.v1146 = 0;
        v1147_.v1147 = 0;
        v1145_.v1145 = nullptr;
        v1147_.v1149 = nullptr;
        v1147_.v1150 = nullptr;
        v1147_.v1151 = 0;
        v1147_.v1152 = 0;
        v1147_.v1153 = 0;
        v1147_.v1154 = 0;
        v1147_.v1155 = 0;
        v1147_.v1156 = 0;
        if ((UnitSkillList_84cc00_alt1((__int64)&v1145_.v1145, v687, 1) & 1) !=
            0) {
          v1147_.v1155 = 0;
          v1147_.v1156 = 0;
          v690 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
          if ((int)((unsigned __int64)((char*)v1147_.v1150 -
                                       (char*)v1147_.v1149) >>
                    2) >= 1) {
            v691 = *v659;
            v692 = (int)(v690 >> 2);
            if (v692 <= 1) {
              v693 = 1;
            }
            else {
              v693 = (int)(v690 >> 2);
            }
            if (v692 >= 4) {
              v700 = v1147_.v1149 + 1;
              v701 = 0;
              v694 = 0;
              v695 = 0;
              v696 = 0;
              v697 = 0;
              do {
                v701 -= 4;
                v702 = *(_QWORD*)(*(_QWORD*)(v691 + 64) +
                                  8LL * (*(v700 - 2) & 0xFFF));
                v703 = v697 | (1 << *(_BYTE*)(v702 + 104));
                v704 = *(_BYTE*)(v702 + 250);
                LOWORD(v1147_.v1155) = v703;
                v705 = (1LL << v704) | v696;
                v706 = *(_BYTE*)(v702 + 115);
                v1147_.v1156 = v705;
                HIDWORD(v1147_.v1155) = (1 << v706) | v695;
                v707 =
                    *(unsigned __int16*)(*(_QWORD*)(v702 + 24) + 1064LL) | v694;
                WORD1(v1147_.v1155) = v707;
                v708 = *(_QWORD*)(*(_QWORD*)(v691 + 64) +
                                  8LL * (*(v700 - 1) & 0xFFF));
                v709 = v703 | (1 << *(_BYTE*)(v708 + 104));
                v710 = *(_BYTE*)(v708 + 250);
                LOWORD(v1147_.v1155) = v709;
                v711 = (1LL << v710) | v705;
                v712 = *(_BYTE*)(v708 + 115);
                v1147_.v1156 = v711;
                HIDWORD(v1147_.v1155) |= 1 << v712;
                v713 =
                    *(unsigned __int16*)(*(_QWORD*)(v708 + 24) + 1064LL) | v707;
                WORD1(v1147_.v1155) = v713;
                v714 =
                    *(_QWORD*)(*(_QWORD*)(v691 + 64) + 8LL * (*v700 & 0xFFF));
                v715 = v709 | (1 << *(_BYTE*)(v714 + 104));
                v716 = *(_BYTE*)(v714 + 250);
                LOWORD(v1147_.v1155) = v715;
                v717 = (1LL << v716) | v711;
                v718 = *(_BYTE*)(v714 + 115);
                v1147_.v1156 = v717;
                HIDWORD(v1147_.v1155) |= 1 << v718;
                v719 =
                    *(unsigned __int16*)(*(_QWORD*)(v714 + 24) + 1064LL) | v713;
                WORD1(v1147_.v1155) = v719;
                LOWORD(v714) = v700[1];
                v700 += 4;
                v720 = *(_QWORD*)(*(_QWORD*)(v691 + 64) + 8 * (v714 & 0xFFF));
                v697 = v715 | (1 << *(_BYTE*)(v720 + 104));
                v721 = *(_BYTE*)(v720 + 250);
                LOWORD(v1147_.v1155) = v697;
                v696 = (1LL << v721) | v717;
                v722 = *(_BYTE*)(v720 + 115);
                v1147_.v1156 = v696;
                v695 = (1 << v722) | HIDWORD(v1147_.v1155);
                HIDWORD(v1147_.v1155) = v695;
                v694 =
                    *(unsigned __int16*)(*(_QWORD*)(v720 + 24) + 1064LL) | v719;
                WORD1(v1147_.v1155) = v694;
              } while (-(__int64)(v693 & 0xFFFFFFFFFFFFFFFCLL) != v701);
              v698 = -v701;
              v699 = v693 & 3;
              if (v699 == 0) {
                goto LABEL_743;
              }
            }
            else {
              v694 = 0;
              v695 = 0;
              v696 = 0;
              v697 = 0;
              v698 = 0;
              v699 = v693 & 3;
              if (v699 == 0) {
                goto LABEL_743;
              }
            }
            v723 = (int*)v1147_.v1149 + v698;
            do {
              v724 = *v723++;
              --v699;
              v725 = *(_QWORD*)(*(_QWORD*)(v691 + 64) + 8LL * (v724 & 0xFFF));
              v697 |= 1 << *(_BYTE*)(v725 + 104);
              v726 = *(_BYTE*)(v725 + 250);
              LOWORD(v1147_.v1155) = v697;
              v696 |= 1LL << v726;
              v727 = *(_BYTE*)(v725 + 115);
              v1147_.v1156 = v696;
              v695 |= 1 << v727;
              HIDWORD(v1147_.v1155) = v695;
              v694 |= *(unsigned __int16*)(*(_QWORD*)(v725 + 24) + 1064LL);
              WORD1(v1147_.v1155) = v694;
            } while (v699 != 0);
          }
        }
      LABEL_743:
        v728 = *(_QWORD*)(v81 + 904);
        v729 = *(_QWORD*)(v81 + 912);
        if (v728 >= v729) {
          v741 = *(_QWORD*)(v81 + 896);
          v742 = v728 - v741;
          v743 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v728 - v741) >> 5) + 1;
          if (v743 > 0x2AAAAAAAAAAAAAALL) {
            goto LABEL_1187;
          }
          v744 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v729 - v741) >> 5);
          if (2 * v744 > v743) {
            v743 = 2 * v744;
          }
          if (v744 >= 0x155555555555555LL) {
            v745 = 0x2AAAAAAAAAAAAAALL;
          }
          else {
            v745 = v743;
          }
          if (v745 != 0) {
            if (v745 > 0x2AAAAAAAAAAAAAALL) {
              goto LABEL_1188;
            }
            v746 = fw_memory_HeapManager_Allocate_alt1(*i, 96 * v745, 16, 0);
          }
          else {
            v746 = 0;
          }
          v747 = v746 + v742;
          *(_DWORD*)(v747 + 24) = 0;
          *(_QWORD*)(v747 + 8) = 0;
          *(_QWORD*)(v747 + 16) = 0;
          *(_QWORD*)v747 = 0;
          if ((__int64 (***)(void))(v746 + v742) != &v1145_.v1145) {
            GameRoutine_7fb7c0_alt1(
                (__int64*)(v746 + v742), (__int64)v1145_.v1145, v1145_.v1146,
                (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
          }
          v748 = v1147_.v1148;
          *(_QWORD*)(v747 + 32) = 0;
          *(_QWORD*)(v747 + 40) = 0;
          *(_QWORD*)(v747 + 48) = 0;
          *(_DWORD*)(v747 + 24) = v748;
          v749 = (__int64)v1147_.v1149;
          v750 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
          if (v1147_.v1150 != v1147_.v1149) {
            if ((v750 & 0x8000000000000000LL) != 0) {
              goto LABEL_1186;
            }
            v751 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
            v752 = v751 + v750;
            *(_QWORD*)(v747 + 32) = v751;
            *(_QWORD*)(v747 + 40) = v751;
            *(_QWORD*)(v747 + 48) = v751 + v750;
            memcpy_alt1(v751, v749, v750);
            *(_QWORD*)(v747 + 40) = v752;
          }
          v754 = v1147_.v1152;
          v753 = v1147_.v1153;
          *(_QWORD*)(v747 + 64) = 0;
          *(_QWORD*)(v747 + 72) = 0;
          v755 = v753 - v754;
          *(_QWORD*)(v747 + 56) = 0;
          if (v753 != v754) {
            if ((v755 & 0x8000000000000000LL) != 0) {
              goto LABEL_1186;
            }
            v756 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v753 - v754, 16, 0);
            v757 = v756 + v755;
            *(_QWORD*)(v747 + 56) = v756;
            *(_QWORD*)(v747 + 64) = v756;
            *(_QWORD*)(v747 + 72) = v756 + v755;
            memcpy_alt1(v756, v754, v755);
            *(_QWORD*)(v747 + 64) = v757;
          }
          v1129 = v746;
          v758 = v1147_.v1156;
          *(_QWORD*)(v747 + 80) = v1147_.v1155;
          *(_QWORD*)(v747 + 88) = v758;
          v759 = *(__int64**)(v81 + 904);
          v760 = *(__int64**)(v81 + 896);
          v761 = (__int64*)(v747 + (char*)v760 - (char*)v759);
          if (v760 == v759) {
            i = (__int64*)fw_memory_g_heap_manager_ptr;
          }
          else {
            v762 = 0;
            do {
              v767 = &v761[v762];
              *((_DWORD*)v767 + 6) = 0;
              v767[1] = 0;
              v767[2] = 0;
              *v767 = 0;
              if (v761 != v760) {
                GameRoutine_7fb7c0_alt1(&v761[v762], v760[v762], v760[v762 + 1],
                                        (v760[v762 + 1] - v760[v762]) >> 2);
              }
              v763 = &v760[v762];
              v762 += 12;
              v764 = *((_DWORD*)v763 + 6);
              v767[4] = 0;
              v767[5] = 0;
              v767[6] = 0;
              *((_DWORD*)v767 + 6) = v764;
              v767[4] = v763[4];
              v767[5] = v763[5];
              v767[6] = v763[6];
              v763[5] = 0;
              v763[6] = 0;
              v763[4] = 0;
              v767[8] = 0;
              v767[9] = 0;
              v767[7] = 0;
              v767[7] = v763[7];
              v767[8] = v763[8];
              v767[9] = v763[9];
              v763[8] = 0;
              v763[9] = 0;
              v763[7] = 0;
              v766 = v763[10];
              v765 = v763[11];
              v767[10] = v766;
              v767[11] = v765;
            } while (&v760[v762] != v759);
            i = (__int64*)fw_memory_g_heap_manager_ptr;
            do {
              v768 = v760[7];
              if (v768 != 0) {
                v760[8] = v768;
                v769 = 56;
                if (*(_QWORD*)(*i + 200) != 0) {
                  v769 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(*i + v769, v768);
              }
              v770 = v760[4];
              if (v770 != 0) {
                v760[5] = v770;
                v771 = 56;
                if (*(_QWORD*)(*i + 200) != 0) {
                  v771 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(*i + v771, v770);
              }
              v772 = *v760;
              if (*v760 != 0) {
                v760[1] = v772;
                v773 = 56;
                if (*(_QWORD*)(*i + 200) != 0) {
                  v773 = 128;
                }
                nn_mem_StandardAllocator_Free_alt1(*i + v773, v772);
              }
              v760 += 12;
            } while (v760 != v759);
            v760 = *(__int64**)(v81 + 896);
          }
          *(_QWORD*)(v81 + 896) = v761;
          v739 = v747 + 96;
          *(_QWORD*)(v81 + 904) = v747 + 96;
          *(_QWORD*)(v81 + 912) = v1129 + 96 * v745;
          v659 = GameData_212c880[0];
          if (v760 != nullptr) {
            v774 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v774 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v774, (__int64)v760);
          }
        }
        else {
          *(_DWORD*)(v728 + 24) = 0;
          *(_QWORD*)(v728 + 8) = 0;
          *(_QWORD*)(v728 + 16) = 0;
          *(_QWORD*)v728 = 0;
          if ((__int64 (***)(void))v728 != &v1145_.v1145) {
            GameRoutine_7fb7c0_alt1(
                (__int64*)v728, (__int64)v1145_.v1145, v1145_.v1146,
                (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
          }
          v730 = v1147_.v1148;
          *(_QWORD*)(v728 + 32) = 0;
          *(_QWORD*)(v728 + 40) = 0;
          *(_QWORD*)(v728 + 48) = 0;
          *(_DWORD*)(v728 + 24) = v730;
          v731 = (__int64)v1147_.v1149;
          v732 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
          if (v1147_.v1150 != v1147_.v1149) {
            if ((v732 & 0x8000000000000000LL) != 0) {
              goto LABEL_1186;
            }
            v733 = fw_memory_HeapManager_Allocate_alt1(
                *i, (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
            v734 = v733 + v732;
            *(_QWORD*)(v728 + 32) = v733;
            *(_QWORD*)(v728 + 40) = v733;
            *(_QWORD*)(v728 + 48) = v733 + v732;
            memcpy_alt1(v733, v731, v732);
            *(_QWORD*)(v728 + 40) = v734;
          }
          *(_QWORD*)(v728 + 64) = 0;
          *(_QWORD*)(v728 + 72) = 0;
          *(_QWORD*)(v728 + 56) = 0;
          v735 = v1147_.v1152;
          v736 = v1147_.v1153 - v1147_.v1152;
          if (v1147_.v1153 != v1147_.v1152) {
            if ((v736 & 0x8000000000000000LL) != 0) {
              goto LABEL_1186;
            }
            v737 = fw_memory_HeapManager_Allocate_alt1(
                *i, v1147_.v1153 - v1147_.v1152, 16, 0);
            v738 = v737 + v736;
            *(_QWORD*)(v728 + 56) = v737;
            *(_QWORD*)(v728 + 64) = v737;
            *(_QWORD*)(v728 + 72) = v737 + v736;
            memcpy_alt1(v737, v735, v736);
            *(_QWORD*)(v728 + 64) = v738;
          }
          v739 = v728 + 96;
          v740 = v1147_.v1156;
          *(_QWORD*)(v728 + 80) = v1147_.v1155;
          *(_QWORD*)(v728 + 88) = v740;
        }
        v688 = v1136;
        v775 = v1147_.v1152;
        *(_QWORD*)(v81 + 904) = v739;
        if (v775 != 0) {
          v776 = *i;
          v1147_.v1153 = v775;
          v777 = 56;
          if (*(_QWORD*)(v776 + 200) != 0) {
            v777 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(v776 + v777, v775);
        }
        if (v1147_.v1149 != nullptr) {
          v778 = *i;
          v1147_.v1150 = v1147_.v1149;
          v779 = 56;
          if (*(_QWORD*)(v778 + 200) != 0) {
            v779 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(v778 + v779,
                                             (__int64)v1147_.v1149);
        }
        if (v1145_.v1145 != nullptr) {
          v780 = *i;
          v1145_.v1146 = (unsigned __int64)v1145_.v1145;
          v781 = 56;
          if (*(_QWORD*)(v780 + 200) != 0) {
            v781 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(v780 + v781,
                                             (__int64)v1145_.v1145);
        }
        goto LABEL_808;
      }
    LABEL_690:
      v660 = *(_QWORD*)(v81 + 928);
      v661 = *(_QWORD*)(v81 + 920);
      if (v661 != v660) {
        do {
          v680 = *(_QWORD*)(v660 - 40);
          if (v680 != 0) {
            *(_QWORD*)(v660 - 32) = v680;
            v681 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v681 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v681, v680);
          }
          v682 = *(_QWORD*)(v660 - 64);
          if (v682 != 0) {
            *(_QWORD*)(v660 - 56) = v682;
            v683 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v683 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v683, v682);
          }
          v684 = v660 - 96;
          v685 = *(_QWORD*)(v660 - 96);
          if (v685 != 0) {
            *(_QWORD*)(v660 - 88) = v685;
            v686 = 56;
            if (*(_QWORD*)(*i + 200) != 0) {
              v686 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(*i + v686, v685);
          }
          v660 -= 96;
        } while (v684 != v661);
      }
      v662 = *(_QWORD*)(v81 + 832);
      *(_QWORD*)(v81 + 928) = v661;
      v663 = *(_QWORD*)(v81 + 824);
      v1121 = v662;
      v664 = GameData_212c880[0];
      if (v663 != v662) {
        while (1) {
          v813 = *(_DWORD**)(v663 + 32);
          v814 = *(_DWORD**)(v663 + 40);
          v1124 = v663;
          v1137 = v814;
          if (v813 != v814) {
            break;
          }
        LABEL_822:
          v663 = v1124 + 96;
          if (v1124 + 96 == v1121) {
            goto LABEL_692;
          }
        }
        while (1) {
          if ((*v813 & 0xFFF) == 0 ||
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v664 + 64) +
                                   8LL * (*v813 & 0xFFF)) +
                        110LL) == 0) {
            goto LABEL_825;
          }
          LODWORD(v1147_.v1148) = 0;
          v1145_.v1146 = 0;
          v1147_.v1147 = 0;
          v1145_.v1145 = nullptr;
          v1147_.v1149 = nullptr;
          v1147_.v1150 = nullptr;
          v1147_.v1151 = 0;
          v1147_.v1152 = 0;
          v1147_.v1153 = 0;
          v1147_.v1154 = 0;
          v1147_.v1155 = 0;
          v1147_.v1156 = 0;
          if ((UnitSkillList_84cc00_alt1((__int64)&v1145_.v1145, v813, 1) &
               1) != 0) {
            v1147_.v1155 = 0;
            v1147_.v1156 = 0;
            v815 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
            if ((int)((unsigned __int64)((char*)v1147_.v1150 -
                                         (char*)v1147_.v1149) >>
                      2) >= 1) {
              v816 = *v664;
              v817 = (int)(v815 >> 2);
              if (v817 <= 1) {
                v818 = 1;
              }
              else {
                v818 = (int)(v815 >> 2);
              }
              if (v817 >= 4) {
                v825 = v1147_.v1149 + 1;
                v826 = 0;
                v819 = 0;
                v820 = 0;
                v821 = 0;
                v822 = 0;
                do {
                  v826 -= 4;
                  v827 = *(_QWORD*)(*(_QWORD*)(v816 + 64) +
                                    8LL * (*(v825 - 2) & 0xFFF));
                  v828 = v822 | (1 << *(_BYTE*)(v827 + 104));
                  v829 = *(_BYTE*)(v827 + 250);
                  LOWORD(v1147_.v1155) = v828;
                  v830 = (1LL << v829) | v821;
                  v831 = *(_BYTE*)(v827 + 115);
                  v1147_.v1156 = v830;
                  HIDWORD(v1147_.v1155) = (1 << v831) | v820;
                  v832 = *(unsigned __int16*)(*(_QWORD*)(v827 + 24) + 1064LL) |
                         v819;
                  WORD1(v1147_.v1155) = v832;
                  v833 = *(_QWORD*)(*(_QWORD*)(v816 + 64) +
                                    8LL * (*(v825 - 1) & 0xFFF));
                  v834 = v828 | (1 << *(_BYTE*)(v833 + 104));
                  v835 = *(_BYTE*)(v833 + 250);
                  LOWORD(v1147_.v1155) = v834;
                  v836 = (1LL << v835) | v830;
                  v837 = *(_BYTE*)(v833 + 115);
                  v1147_.v1156 = v836;
                  HIDWORD(v1147_.v1155) |= 1 << v837;
                  v838 = *(unsigned __int16*)(*(_QWORD*)(v833 + 24) + 1064LL) |
                         v832;
                  WORD1(v1147_.v1155) = v838;
                  v839 =
                      *(_QWORD*)(*(_QWORD*)(v816 + 64) + 8LL * (*v825 & 0xFFF));
                  v840 = v834 | (1 << *(_BYTE*)(v839 + 104));
                  v841 = *(_BYTE*)(v839 + 250);
                  LOWORD(v1147_.v1155) = v840;
                  v842 = (1LL << v841) | v836;
                  v843 = *(_BYTE*)(v839 + 115);
                  v1147_.v1156 = v842;
                  HIDWORD(v1147_.v1155) |= 1 << v843;
                  v844 = *(unsigned __int16*)(*(_QWORD*)(v839 + 24) + 1064LL) |
                         v838;
                  WORD1(v1147_.v1155) = v844;
                  LOWORD(v839) = v825[1];
                  v825 += 4;
                  v845 = *(_QWORD*)(*(_QWORD*)(v816 + 64) + 8 * (v839 & 0xFFF));
                  v822 = v840 | (1 << *(_BYTE*)(v845 + 104));
                  v846 = *(_BYTE*)(v845 + 250);
                  LOWORD(v1147_.v1155) = v822;
                  v821 = (1LL << v846) | v842;
                  v847 = *(_BYTE*)(v845 + 115);
                  v1147_.v1156 = v821;
                  v820 = (1 << v847) | HIDWORD(v1147_.v1155);
                  HIDWORD(v1147_.v1155) = v820;
                  v819 = *(unsigned __int16*)(*(_QWORD*)(v845 + 24) + 1064LL) |
                         v844;
                  WORD1(v1147_.v1155) = v819;
                } while (-(__int64)(v818 & 0xFFFFFFFFFFFFFFFCLL) != v826);
                v823 = -v826;
                v824 = v818 & 3;
                if (v824 == 0) {
                  goto LABEL_841;
                }
              LABEL_839:
                v848 = (int*)v1147_.v1149 + v823;
                do {
                  v849 = *v848++;
                  --v824;
                  v850 =
                      *(_QWORD*)(*(_QWORD*)(v816 + 64) + 8LL * (v849 & 0xFFF));
                  v822 |= 1 << *(_BYTE*)(v850 + 104);
                  v851 = *(_BYTE*)(v850 + 250);
                  LOWORD(v1147_.v1155) = v822;
                  v821 |= 1LL << v851;
                  v852 = *(_BYTE*)(v850 + 115);
                  v1147_.v1156 = v821;
                  v820 |= 1 << v852;
                  HIDWORD(v1147_.v1155) = v820;
                  v819 |= *(unsigned __int16*)(*(_QWORD*)(v850 + 24) + 1064LL);
                  WORD1(v1147_.v1155) = v819;
                } while (v824 != 0);
                goto LABEL_841;
              }
              v819 = 0;
              v820 = 0;
              v821 = 0;
              v822 = 0;
              v823 = 0;
              v824 = v818 & 3;
              if (v824 != 0) {
                goto LABEL_839;
              }
            }
          }
        LABEL_841:
          v853 = *(_QWORD*)(v81 + 928);
          v854 = *(_QWORD*)(v81 + 936);
          if (v853 >= v854) {
            v866 = *(_QWORD*)(v81 + 920);
            v867 = v853 - v866;
            v868 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v853 - v866) >> 5) + 1;
            if (v868 > 0x2AAAAAAAAAAAAAALL) {
              goto LABEL_1187;
            }
            v869 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v854 - v866) >> 5);
            if (2 * v869 > v868) {
              v868 = 2 * v869;
            }
            if (v869 >= 0x155555555555555LL) {
              v870 = 0x2AAAAAAAAAAAAAALL;
            }
            else {
              v870 = v868;
            }
            if (v870 != 0) {
              if (v870 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1188;
              }
              v871 = fw_memory_HeapManager_Allocate_alt1(*i, 96 * v870, 16, 0);
            }
            else {
              v871 = 0;
            }
            v872 = v871 + v867;
            *(_DWORD*)(v872 + 24) = 0;
            *(_QWORD*)(v872 + 8) = 0;
            *(_QWORD*)(v872 + 16) = 0;
            *(_QWORD*)v872 = 0;
            if ((__int64 (***)(void))(v871 + v867) != &v1145_.v1145) {
              GameRoutine_7fb7c0_alt1(
                  (__int64*)(v871 + v867), (__int64)v1145_.v1145, v1145_.v1146,
                  (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
            }
            v873 = v1147_.v1148;
            *(_QWORD*)(v872 + 32) = 0;
            *(_QWORD*)(v872 + 40) = 0;
            *(_QWORD*)(v872 + 48) = 0;
            *(_DWORD*)(v872 + 24) = v873;
            v874 = (__int64)v1147_.v1149;
            v875 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
            if (v1147_.v1150 != v1147_.v1149) {
              if ((v875 & 0x8000000000000000LL) != 0) {
                goto LABEL_1186;
              }
              v876 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr,
                  (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
              v877 = v876 + v875;
              *(_QWORD*)(v872 + 32) = v876;
              *(_QWORD*)(v872 + 40) = v876;
              *(_QWORD*)(v872 + 48) = v876 + v875;
              memcpy_alt1(v876, v874, v875);
              *(_QWORD*)(v872 + 40) = v877;
            }
            v879 = v1147_.v1152;
            v878 = v1147_.v1153;
            *(_QWORD*)(v872 + 64) = 0;
            *(_QWORD*)(v872 + 72) = 0;
            v880 = v878 - v879;
            *(_QWORD*)(v872 + 56) = 0;
            if (v878 != v879) {
              if ((v880 & 0x8000000000000000LL) != 0) {
                goto LABEL_1186;
              }
              v881 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v878 - v879, 16, 0);
              v882 = v881 + v880;
              *(_QWORD*)(v872 + 56) = v881;
              *(_QWORD*)(v872 + 64) = v881;
              *(_QWORD*)(v872 + 72) = v881 + v880;
              memcpy_alt1(v881, v879, v880);
              *(_QWORD*)(v872 + 64) = v882;
            }
            v1130 = v871;
            v883 = v1147_.v1156;
            *(_QWORD*)(v872 + 80) = v1147_.v1155;
            *(_QWORD*)(v872 + 88) = v883;
            v884 = *(__int64**)(v81 + 928);
            v885 = *(__int64**)(v81 + 920);
            v886 = (__int64*)(v872 + (char*)v885 - (char*)v884);
            if (v885 == v884) {
              i = (__int64*)fw_memory_g_heap_manager_ptr;
            }
            else {
              v887 = 0;
              do {
                v892 = &v886[v887];
                *((_DWORD*)v892 + 6) = 0;
                v892[1] = 0;
                v892[2] = 0;
                *v892 = 0;
                if (v886 != v885) {
                  GameRoutine_7fb7c0_alt1(&v886[v887], v885[v887],
                                          v885[v887 + 1],
                                          (v885[v887 + 1] - v885[v887]) >> 2);
                }
                v888 = &v885[v887];
                v887 += 12;
                v889 = *((_DWORD*)v888 + 6);
                v892[4] = 0;
                v892[5] = 0;
                v892[6] = 0;
                *((_DWORD*)v892 + 6) = v889;
                v892[4] = v888[4];
                v892[5] = v888[5];
                v892[6] = v888[6];
                v888[5] = 0;
                v888[6] = 0;
                v888[4] = 0;
                v892[8] = 0;
                v892[9] = 0;
                v892[7] = 0;
                v892[7] = v888[7];
                v892[8] = v888[8];
                v892[9] = v888[9];
                v888[8] = 0;
                v888[9] = 0;
                v888[7] = 0;
                v891 = v888[10];
                v890 = v888[11];
                v892[10] = v891;
                v892[11] = v890;
              } while (&v885[v887] != v884);
              i = (__int64*)fw_memory_g_heap_manager_ptr;
              do {
                v893 = v885[7];
                if (v893 != 0) {
                  v885[8] = v893;
                  v894 = 56;
                  if (*(_QWORD*)(*i + 200) != 0) {
                    v894 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*i + v894, v893);
                }
                v895 = v885[4];
                if (v895 != 0) {
                  v885[5] = v895;
                  v896 = 56;
                  if (*(_QWORD*)(*i + 200) != 0) {
                    v896 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*i + v896, v895);
                }
                v897 = *v885;
                if (*v885 != 0) {
                  v885[1] = v897;
                  v898 = 56;
                  if (*(_QWORD*)(*i + 200) != 0) {
                    v898 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*i + v898, v897);
                }
                v885 += 12;
              } while (v885 != v884);
              v885 = *(__int64**)(v81 + 920);
            }
            *(_QWORD*)(v81 + 920) = v886;
            v864 = v872 + 96;
            *(_QWORD*)(v81 + 928) = v872 + 96;
            *(_QWORD*)(v81 + 936) = v1130 + 96 * v870;
            v664 = GameData_212c880[0];
            if (v885 != nullptr) {
              v899 = 56;
              if (*(_QWORD*)(*i + 200) != 0) {
                v899 = 128;
              }
              nn_mem_StandardAllocator_Free_alt1(*i + v899, (__int64)v885);
            }
          }
          else {
            *(_DWORD*)(v853 + 24) = 0;
            *(_QWORD*)(v853 + 8) = 0;
            *(_QWORD*)(v853 + 16) = 0;
            *(_QWORD*)v853 = 0;
            if ((__int64 (***)(void))v853 != &v1145_.v1145) {
              GameRoutine_7fb7c0_alt1(
                  (__int64*)v853, (__int64)v1145_.v1145, v1145_.v1146,
                  (__int64)(v1145_.v1146 - (_QWORD)v1145_.v1145) >> 2);
            }
            v855 = v1147_.v1148;
            *(_QWORD*)(v853 + 32) = 0;
            *(_QWORD*)(v853 + 40) = 0;
            *(_QWORD*)(v853 + 48) = 0;
            *(_DWORD*)(v853 + 24) = v855;
            v856 = (__int64)v1147_.v1149;
            v857 = (char*)v1147_.v1150 - (char*)v1147_.v1149;
            if (v1147_.v1150 != v1147_.v1149) {
              if ((v857 & 0x8000000000000000LL) != 0) {
                goto LABEL_1186;
              }
              v858 = fw_memory_HeapManager_Allocate_alt1(
                  *i, (char*)v1147_.v1150 - (char*)v1147_.v1149, 16, 0);
              v859 = v858 + v857;
              *(_QWORD*)(v853 + 32) = v858;
              *(_QWORD*)(v853 + 40) = v858;
              *(_QWORD*)(v853 + 48) = v858 + v857;
              memcpy_alt1(v858, v856, v857);
              *(_QWORD*)(v853 + 40) = v859;
            }
            *(_QWORD*)(v853 + 64) = 0;
            *(_QWORD*)(v853 + 72) = 0;
            *(_QWORD*)(v853 + 56) = 0;
            v860 = v1147_.v1152;
            v861 = v1147_.v1153 - v1147_.v1152;
            if (v1147_.v1153 != v1147_.v1152) {
              if ((v861 & 0x8000000000000000LL) != 0) {
                goto LABEL_1186;
              }
              v862 = fw_memory_HeapManager_Allocate_alt1(
                  *i, v1147_.v1153 - v1147_.v1152, 16, 0);
              v863 = v862 + v861;
              *(_QWORD*)(v853 + 56) = v862;
              *(_QWORD*)(v853 + 64) = v862;
              *(_QWORD*)(v853 + 72) = v862 + v861;
              memcpy_alt1(v862, v860, v861);
              *(_QWORD*)(v853 + 64) = v863;
            }
            v864 = v853 + 96;
            v865 = v1147_.v1156;
            *(_QWORD*)(v853 + 80) = v1147_.v1155;
            *(_QWORD*)(v853 + 88) = v865;
          }
          v814 = v1137;
          v900 = v1147_.v1152;
          *(_QWORD*)(v81 + 928) = v864;
          if (v900 != 0) {
            v901 = *i;
            v1147_.v1153 = v900;
            v902 = 56;
            if (*(_QWORD*)(v901 + 200) != 0) {
              v902 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(v901 + v902, v900);
          }
          if (v1147_.v1149 != nullptr) {
            v903 = *i;
            v1147_.v1150 = v1147_.v1149;
            v904 = 56;
            if (*(_QWORD*)(v903 + 200) != 0) {
              v904 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(v903 + v904,
                                               (__int64)v1147_.v1149);
          }
          if (v1145_.v1145 != nullptr) {
            v905 = *i;
            v1145_.v1146 = (unsigned __int64)v1145_.v1145;
            v906 = 56;
            if (*(_QWORD*)(v905 + 200) != 0) {
              v906 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(v905 + v906,
                                               (__int64)v1145_.v1145);
          }
        LABEL_825:
          if (++v813 == v814) {
            goto LABEL_822;
          }
        }
      }
    LABEL_692:
      v665 = *(_QWORD*)(v81 + 416);
      v666 = v1123;
      *(_DWORD*)(v81 + 440) = 0;
      *(_QWORD*)(v81 + 424) = v665;
      v667 = *(_QWORD*)(v81 + 448);
      *(_QWORD*)(v81 + 496) = 0;
      *(_QWORD*)(v81 + 504) = 0;
      *(_QWORD*)(v81 + 456) = v667;
      UnitSkillList_84d5a0_alt1(v81 + 416, (unsigned __int16*)(v1123 + 512));
      v668 = *(_QWORD*)(v81 + 512);
      *(_DWORD*)(v81 + 536) = 0;
      *(_QWORD*)(v81 + 592) = 0;
      *(_QWORD*)(v81 + 600) = 0;
      *(_QWORD*)(v81 + 520) = v668;
      *(_QWORD*)(v81 + 552) = *(_QWORD*)(v81 + 544);
      UnitSkillList_84d5a0_alt1(v81 + 512, (unsigned __int16*)(v1123 + 496));
      v669 = *(_QWORD*)(v81 + 608);
      *(_DWORD*)(v81 + 632) = 0;
      *(_QWORD*)(v81 + 688) = 0;
      v670 = (unsigned __int16)GameData_21ca458;
      *(_QWORD*)(v81 + 696) = 0;
      *(_QWORD*)(v81 + 616) = v669;
      *(_QWORD*)(v81 + 648) = *(_QWORD*)(v81 + 640);
      if (((v670 >> *(_BYTE*)(v1123 + 104)) & 1) != 0) {
        if (*(_BYTE*)(v1123 + 272) == 3) {
          UnitSkillList_84d5a0_alt1(v81 + 608,
                                    (unsigned __int16*)(v1123 + 512));
        }
        v671 = *(unsigned __int16*)(v1123 + 496);
        if (*(_WORD*)(v1123 + 496) != 0) {
          v672 = 8;
          do {
            v907 = *(_QWORD*)(*(_QWORD*)(v1123 + 504) + v672);
            if (*(_BYTE*)(v907 + 272) == 3) {
              UnitSkillList_84d5a0_alt1(v81 + 608,
                                        (unsigned __int16*)(v907 + 512));
            }
            --v671;
            v672 += 16;
          } while (v671 != 0);
        }
      }
      v908 = *(_QWORD*)(v81 + 224);
      *(_DWORD*)(v81 + 248) = 0;
      *(_QWORD*)(v81 + 304) = 0;
      *(_QWORD*)(v81 + 312) = 0;
      *(_QWORD*)(v81 + 232) = v908;
      *(_QWORD*)(v81 + 264) = *(_QWORD*)(v81 + 256);
      v909 = GameData_212c880[0];
      if (*(_BYTE*)(v1123 + 104) == 2 && *(_BYTE*)(v1123 + 279) != 0) {
        LODWORD(v1145_.v1145) = *(_WORD*)(v1123 + 16) & 0xFFF;
        if ((UnitSkillList_84cc00_alt1(v81 + 224, &v1145_.v1145, 1) & 1) == 0) {
          goto LABEL_924;
        }
        v911 = *(_QWORD*)(v81 + 256);
        v910 = *(_QWORD*)(v81 + 264);
        *(_QWORD*)(v81 + 304) = 0;
        *(_QWORD*)(v81 + 312) = 0;
        v912 = v910 - v911;
        if ((int)((unsigned __int64)(v910 - v911) >> 2) < 1) {
          goto LABEL_924;
        }
        v913 = *v909;
        v914 = (int)(v912 >> 2);
        if (v914 <= 1) {
          v915 = 1;
        }
        else {
          v915 = (int)(v912 >> 2);
        }
        if (v914 >= 4) {
          v922 = (_DWORD*)(v911 + 8);
          v923 = 0;
          v916 = 0;
          v917 = 0;
          v918 = 0;
          v919 = 0;
          do {
            v923 -= 4;
            v924 =
                *(_QWORD*)(*(_QWORD*)(v913 + 64) + 8LL * (*(v922 - 2) & 0xFFF));
            v925 = v919 | (1 << *(_BYTE*)(v924 + 104));
            *(_WORD*)(v81 + 304) = v925;
            v926 = (1LL << *(_BYTE*)(v924 + 250)) | v918;
            *(_QWORD*)(v81 + 312) = v926;
            v927 = (1 << *(_BYTE*)(v924 + 115)) | v917;
            *(_DWORD*)(v81 + 308) = v927;
            v928 = *(unsigned __int16*)(*(_QWORD*)(v924 + 24) + 1064LL) | v916;
            *(_WORD*)(v81 + 306) = v928;
            v929 =
                *(_QWORD*)(*(_QWORD*)(v913 + 64) + 8LL * (*(v922 - 1) & 0xFFF));
            v930 = v925 | (1 << *(_BYTE*)(v929 + 104));
            *(_WORD*)(v81 + 304) = v930;
            v931 = (1LL << *(_BYTE*)(v929 + 250)) | v926;
            *(_QWORD*)(v81 + 312) = v931;
            v932 = (1 << *(_BYTE*)(v929 + 115)) | v927;
            *(_DWORD*)(v81 + 308) = v932;
            v933 = *(unsigned __int16*)(*(_QWORD*)(v929 + 24) + 1064LL) | v928;
            *(_WORD*)(v81 + 306) = v933;
            v934 = *(_QWORD*)(*(_QWORD*)(v913 + 64) + 8LL * (*v922 & 0xFFF));
            v935 = v930 | (1 << *(_BYTE*)(v934 + 104));
            *(_WORD*)(v81 + 304) = v935;
            v936 = (1LL << *(_BYTE*)(v934 + 250)) | v931;
            *(_QWORD*)(v81 + 312) = v936;
            v937 = (1 << *(_BYTE*)(v934 + 115)) | v932;
            *(_DWORD*)(v81 + 308) = v937;
            v938 = *(unsigned __int16*)(*(_QWORD*)(v934 + 24) + 1064LL) | v933;
            *(_WORD*)(v81 + 306) = v938;
            LOWORD(v934) = v922[1];
            v922 += 4;
            v939 = *(_QWORD*)(*(_QWORD*)(v913 + 64) + 8 * (v934 & 0xFFF));
            v919 = v935 | (1 << *(_BYTE*)(v939 + 104));
            *(_WORD*)(v81 + 304) = v919;
            v918 = (1LL << *(_BYTE*)(v939 + 250)) | v936;
            *(_QWORD*)(v81 + 312) = v918;
            v917 = (1 << *(_BYTE*)(v939 + 115)) | v937;
            *(_DWORD*)(v81 + 308) = v917;
            v916 = *(unsigned __int16*)(*(_QWORD*)(v939 + 24) + 1064LL) | v938;
            *(_WORD*)(v81 + 306) = v916;
          } while (-(__int64)(v915 & 0xFFFFFFFFFFFFFFFCLL) != v923);
          v920 = -v923;
          v921 = v915 & 3;
          if (v921 == 0) {
            goto LABEL_924;
          }
        }
        else {
          v916 = 0;
          v917 = 0;
          v918 = 0;
          v919 = 0;
          v920 = 0;
          v921 = v915 & 3;
          if (v921 == 0) {
          LABEL_924:
            GameHr_84cf20(v81 + 224, v81 + 512, 1);
            GameHr_84cf20(v81 + 224, v1144, 1);
            v666 = v1123;
            goto LABEL_925;
          }
        }
        v940 = (int*)(v911 + 4 * v920);
        do {
          v941 = *v940++;
          --v921;
          v942 = *(_QWORD*)(*(_QWORD*)(v913 + 64) + 8LL * (v941 & 0xFFF));
          v919 |= 1 << *(_BYTE*)(v942 + 104);
          *(_WORD*)(v81 + 304) = v919;
          v918 |= 1LL << *(_BYTE*)(v942 + 250);
          *(_QWORD*)(v81 + 312) = v918;
          v917 |= 1 << *(_BYTE*)(v942 + 115);
          *(_DWORD*)(v81 + 308) = v917;
          v916 |= *(unsigned __int16*)(*(_QWORD*)(v942 + 24) + 1064LL);
          *(_WORD*)(v81 + 306) = v916;
        } while (v921 != 0);
        goto LABEL_924;
      }
    LABEL_925:
      v943 = *(_QWORD*)(v81 + 320);
      *(_DWORD*)(v81 + 344) = 0;
      *(_QWORD*)(v81 + 400) = 0;
      *(_QWORD*)(v81 + 408) = 0;
      *(_QWORD*)(v81 + 328) = v943;
      *(_QWORD*)(v81 + 360) = *(_QWORD*)(v81 + 352);
      if ((unsigned int)*(unsigned __int8*)(v666 + 250) - 1 <= 1) {
        v944 = *(unsigned __int16*)(v1123 + 184);
        if (*(_WORD*)(v1123 + 184) != 0) {
          v945 = 0;
          while (1) {
            v946 = (unsigned __int16*)(*(_QWORD*)(v1123 + 192) + 16 * v945);
            v947 = *v946;
            if (*v946 != 0) {
              break;
            }
          LABEL_928:
            if (++v945 == v944) {
              goto LABEL_948;
            }
          }
          v948 = 0;
          while (1) {
            v949 = *(_QWORD*)(*((_QWORD*)v946 + 1) + 16 * v948 + 8);
            if (v949 != 0) {
              LODWORD(v949) = *(_WORD*)(v949 + 16) & 0xFFF;
            }
            LODWORD(v1145_.v1145) = v949;
            if ((UnitSkillList_84cc00_alt1(v81 + 320, &v1145_.v1145, 1) & 1) !=
                0) {
              v951 = *(_QWORD*)(v81 + 352);
              v950 = *(_QWORD*)(v81 + 360);
              *(_QWORD*)(v81 + 400) = 0;
              *(_QWORD*)(v81 + 408) = 0;
              v952 = v950 - v951;
              if ((int)((unsigned __int64)(v950 - v951) >> 2) < 1) {
                goto LABEL_931;
              }
              v953 = *v909;
              v954 = (int)(v952 >> 2);
              v955 = v954 <= 1 ? 1LL : (int)(v952 >> 2);
              if (v954 >= 4) {
                break;
              }
              v956 = 0;
              v957 = 0;
              v958 = 0;
              v959 = 0;
              v960 = 0;
              v961 = v955 & 3;
              if (v961 != 0) {
                goto LABEL_945;
              }
            }
          LABEL_931:
            if (++v948 == v947) {
              goto LABEL_928;
            }
          }
          v962 = (_DWORD*)(v951 + 8);
          v963 = 0;
          v956 = 0;
          v957 = 0;
          v958 = 0;
          v959 = 0;
          do {
            v963 -= 4;
            v964 =
                *(_QWORD*)(*(_QWORD*)(v953 + 64) + 8LL * (*(v962 - 2) & 0xFFF));
            v965 = v959 | (1 << *(_BYTE*)(v964 + 104));
            *(_WORD*)(v81 + 400) = v965;
            v966 = (1LL << *(_BYTE*)(v964 + 250)) | v958;
            *(_QWORD*)(v81 + 408) = v966;
            v967 = (1 << *(_BYTE*)(v964 + 115)) | v957;
            *(_DWORD*)(v81 + 404) = v967;
            v968 = *(unsigned __int16*)(*(_QWORD*)(v964 + 24) + 1064LL) | v956;
            *(_WORD*)(v81 + 402) = v968;
            v969 =
                *(_QWORD*)(*(_QWORD*)(v953 + 64) + 8LL * (*(v962 - 1) & 0xFFF));
            v970 = v965 | (1 << *(_BYTE*)(v969 + 104));
            *(_WORD*)(v81 + 400) = v970;
            v971 = (1LL << *(_BYTE*)(v969 + 250)) | v966;
            *(_QWORD*)(v81 + 408) = v971;
            v972 = (1 << *(_BYTE*)(v969 + 115)) | v967;
            *(_DWORD*)(v81 + 404) = v972;
            v973 = *(unsigned __int16*)(*(_QWORD*)(v969 + 24) + 1064LL) | v968;
            *(_WORD*)(v81 + 402) = v973;
            v974 = *(_QWORD*)(*(_QWORD*)(v953 + 64) + 8LL * (*v962 & 0xFFF));
            v975 = v970 | (1 << *(_BYTE*)(v974 + 104));
            *(_WORD*)(v81 + 400) = v975;
            v976 = (1LL << *(_BYTE*)(v974 + 250)) | v971;
            *(_QWORD*)(v81 + 408) = v976;
            v977 = (1 << *(_BYTE*)(v974 + 115)) | v972;
            *(_DWORD*)(v81 + 404) = v977;
            v978 = *(unsigned __int16*)(*(_QWORD*)(v974 + 24) + 1064LL) | v973;
            *(_WORD*)(v81 + 402) = v978;
            LOWORD(v974) = v962[1];
            v962 += 4;
            v979 = *(_QWORD*)(*(_QWORD*)(v953 + 64) + 8 * (v974 & 0xFFF));
            v959 = v975 | (1 << *(_BYTE*)(v979 + 104));
            *(_WORD*)(v81 + 400) = v959;
            v958 = (1LL << *(_BYTE*)(v979 + 250)) | v976;
            *(_QWORD*)(v81 + 408) = v958;
            v957 = (1 << *(_BYTE*)(v979 + 115)) | v977;
            *(_DWORD*)(v81 + 404) = v957;
            v956 = *(unsigned __int16*)(*(_QWORD*)(v979 + 24) + 1064LL) | v978;
            *(_WORD*)(v81 + 402) = v956;
          } while (-(__int64)(v955 & 0xFFFFFFFFFFFFFFFCLL) != v963);
          v960 = -v963;
          v961 = v955 & 3;
          if (v961 == 0) {
            goto LABEL_931;
          }
        LABEL_945:
          v980 = (int*)(v951 + 4 * v960);
          do {
            v981 = *v980++;
            --v961;
            v982 = *(_QWORD*)(*(_QWORD*)(v953 + 64) + 8LL * (v981 & 0xFFF));
            v959 |= 1 << *(_BYTE*)(v982 + 104);
            *(_WORD*)(v81 + 400) = v959;
            v958 |= 1LL << *(_BYTE*)(v982 + 250);
            *(_QWORD*)(v81 + 408) = v958;
            v957 |= 1 << *(_BYTE*)(v982 + 115);
            *(_DWORD*)(v81 + 404) = v957;
            v956 |= *(unsigned __int16*)(*(_QWORD*)(v982 + 24) + 1064LL);
            *(_WORD*)(v81 + 402) = v956;
          } while (v961 != 0);
          goto LABEL_931;
        }
      }
    LABEL_948:
      v2 = v1123;
      *(_QWORD*)(v81 + 952) = *(_QWORD*)(v81 + 944);
      *(_QWORD*)(v81 + 976) = *(_QWORD*)(v81 + 968);
      game_FlagCondition_Append_alt1((_QWORD*)(v81 + 944),
                                     (unsigned __int16*)(v1123 + 216));
      *(_QWORD*)(v81 + 1000) = *(_QWORD*)(v81 + 992);
      *(_QWORD*)(v81 + 1024) = *(_QWORD*)(v81 + 1016);
      game_FlagCondition_Append_alt1((_QWORD*)(v81 + 992),
                                     (unsigned __int16*)(v1123 + 232));
      *(_QWORD*)(v81 + 1048) = *(_QWORD*)(v81 + 1040);
      GameRoutine_705590_alt1((__int64*)(v81 + 1040), *(_BYTE*)(v2 + 118),
                              *(unsigned __int16*)(v2 + 120),
                              *(_BYTE*)(v2 + 122),
                              *(unsigned __int16*)(v2 + 124));
      GameRoutine_705590_alt1((__int64*)(v81 + 1040), *(_BYTE*)(v2 + 126),
                              *(unsigned __int16*)(v2 + 128),
                              *(_BYTE*)(v2 + 130),
                              *(unsigned __int16*)(v2 + 132));
      v983 = *(_QWORD*)(v81 + 952);
      v984 = *(_QWORD*)(v81 + 944);
      *(_BYTE*)(v81 + 1120) = 0;
      v985 = v983 == v984 && *(_QWORD*)(v81 + 1000) == *(_QWORD*)(v81 + 992);
      v986 = *(_QWORD*)(v81 + 808);
      v987 = !v985;
      *(_BYTE*)(v81 + 1121) = v987;
      v993 = v986 != *(_QWORD*)(v81 + 800) ||
             *(_QWORD*)(v81 + 832) != *(_QWORD*)(v81 + 824) ||
             *(_QWORD*)(v81 + 856) != *(_QWORD*)(v81 + 848) ||
             *(_QWORD*)(v81 + 880) != *(_QWORD*)(v81 + 872) ||
             *(_QWORD*)(v81 + 904) != *(_QWORD*)(v81 + 896) ||
             *(_QWORD*)(v81 + 928) != *(_QWORD*)(v81 + 920);
      *(_BYTE*)(v81 + 1122) = v993;
      v994 = *(const char**)(v1123 + 880);
      if (v994 != nullptr && strstr_alt1(v994, "_SID_") == 0) {
        *(_BYTE*)(v81 + 1120) = 1;
      }
      if (*(_QWORD*)(v1123 + 48) != 0 && *(_WORD*)(v1123 + 56) != 0) {
        v995 = 8LL * *(unsigned __int16*)(v1123 + 56);
        v996 = 0;
        do {
          game_HashString_alt1(*(_QWORD*)(*(_QWORD*)(v1123 + 64) + v996));
          v996 += 8;
        } while (v995 != v996);
      }
      v76 = GameData_212c880[0];
      v78 = v1119 + 1;
      if (v1119 + 1 == v1118) {
        v77 = *GameData_212c880[0];
        v78 = *(unsigned __int64**)(*GameData_212c880[0] + 64);
        v79 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
        goto LABEL_982;
      }
    }
    while (1) {
      LODWORD(v1145_.v1145) = *(_WORD*)(v80 + 16) & 0xFFF;
      if ((UnitSkillList_84cc00_alt1(v81 + 32, &v1145_.v1145, 1) & 1) != 0) {
        v115 = *(_QWORD*)(v81 + 64);
        v114 = *(_QWORD*)(v81 + 72);
        *(_QWORD*)(v81 + 112) = 0;
        *(_QWORD*)(v81 + 120) = 0;
        v116 = v114 - v115;
        if ((int)((unsigned __int64)(v114 - v115) >> 2) < 1) {
          goto LABEL_198;
        }
        v117 = *v76;
        v118 = (int)(v116 >> 2);
        v119 = v118 <= 1 ? 1LL : (int)(v116 >> 2);
        if (v118 >= 4) {
          break;
        }
        v120 = 0;
        v121 = 0;
        v122 = 0;
        v123 = 0;
        v124 = 0;
        v125 = v119 & 3;
        if (v125 != 0) {
          goto LABEL_210;
        }
      }
    LABEL_198:
      v80 = *(_QWORD*)(v80 + 552);
      if (v80 == 0) {
        goto LABEL_188;
      }
    }
    v126 = (_DWORD*)(v115 + 8);
    v127 = 0;
    v120 = 0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    do {
      v127 -= 4;
      v128 = *(_QWORD*)(*(_QWORD*)(v117 + 64) + 8LL * (*(v126 - 2) & 0xFFF));
      v129 = v123 | (1 << *(_BYTE*)(v128 + 104));
      *(_WORD*)(v81 + 112) = v129;
      v130 = (1LL << *(_BYTE*)(v128 + 250)) | v122;
      *(_QWORD*)(v81 + 120) = v130;
      v131 = (1 << *(_BYTE*)(v128 + 115)) | v121;
      *(_DWORD*)(v81 + 116) = v131;
      v132 = *(unsigned __int16*)(*(_QWORD*)(v128 + 24) + 1064LL) | v120;
      *(_WORD*)(v81 + 114) = v132;
      v133 = *(_QWORD*)(*(_QWORD*)(v117 + 64) + 8LL * (*(v126 - 1) & 0xFFF));
      v134 = v129 | (1 << *(_BYTE*)(v133 + 104));
      *(_WORD*)(v81 + 112) = v134;
      v135 = (1LL << *(_BYTE*)(v133 + 250)) | v130;
      *(_QWORD*)(v81 + 120) = v135;
      v136 = (1 << *(_BYTE*)(v133 + 115)) | v131;
      *(_DWORD*)(v81 + 116) = v136;
      v137 = *(unsigned __int16*)(*(_QWORD*)(v133 + 24) + 1064LL) | v132;
      *(_WORD*)(v81 + 114) = v137;
      v138 = *(_QWORD*)(*(_QWORD*)(v117 + 64) + 8LL * (*v126 & 0xFFF));
      v139 = v134 | (1 << *(_BYTE*)(v138 + 104));
      *(_WORD*)(v81 + 112) = v139;
      v140 = (1LL << *(_BYTE*)(v138 + 250)) | v135;
      *(_QWORD*)(v81 + 120) = v140;
      v141 = (1 << *(_BYTE*)(v138 + 115)) | v136;
      *(_DWORD*)(v81 + 116) = v141;
      v142 = *(unsigned __int16*)(*(_QWORD*)(v138 + 24) + 1064LL) | v137;
      *(_WORD*)(v81 + 114) = v142;
      LOWORD(v138) = v126[1];
      v126 += 4;
      v143 = *(_QWORD*)(*(_QWORD*)(v117 + 64) + 8 * (v138 & 0xFFF));
      v123 = v139 | (1 << *(_BYTE*)(v143 + 104));
      *(_WORD*)(v81 + 112) = v123;
      v122 = (1LL << *(_BYTE*)(v143 + 250)) | v140;
      *(_QWORD*)(v81 + 120) = v122;
      v121 = (1 << *(_BYTE*)(v143 + 115)) | v141;
      *(_DWORD*)(v81 + 116) = v121;
      v120 = *(unsigned __int16*)(*(_QWORD*)(v143 + 24) + 1064LL) | v142;
      *(_WORD*)(v81 + 114) = v120;
    } while (-(__int64)(v119 & 0xFFFFFFFFFFFFFFFCLL) != v127);
    v124 = -v127;
    v125 = v119 & 3;
    if (v125 == 0) {
      goto LABEL_198;
    }
  LABEL_210:
    v144 = (int*)(v115 + 4 * v124);
    do {
      v145 = *v144++;
      --v125;
      v146 = *(_QWORD*)(*(_QWORD*)(v117 + 64) + 8LL * (v145 & 0xFFF));
      v123 |= 1 << *(_BYTE*)(v146 + 104);
      *(_WORD*)(v81 + 112) = v123;
      v122 |= 1LL << *(_BYTE*)(v146 + 250);
      *(_QWORD*)(v81 + 120) = v122;
      v121 |= 1 << *(_BYTE*)(v146 + 115);
      *(_DWORD*)(v81 + 116) = v121;
      v120 |= *(unsigned __int16*)(*(_QWORD*)(v146 + 24) + 1064LL);
      *(_WORD*)(v81 + 114) = v120;
    } while (v125 != 0);
    goto LABEL_198;
  }
LABEL_982:
  while (v78 != v79) {
    v997 = *v78;
    v998 = *(_QWORD*)(*v78 + 704);
    if (v998 != 0) {
      *(_DWORD*)(*(_QWORD*)(v997 + 24) + 8LL) = *(_WORD*)(v997 + 16) & 0xFFF;
      *(_DWORD*)(*(_QWORD*)(v997 + 24) + 12LL) = *(_WORD*)(v998 + 16) & 0xFFF;
      *(_DWORD*)(*(_QWORD*)(v998 + 24) + 8LL) = *(_WORD*)(v997 + 16) & 0xFFF;
      *(_DWORD*)(*(_QWORD*)(v998 + 24) + 12LL) = *(_WORD*)(v998 + 16) & 0xFFF;
    }
    v999 = *(_QWORD*)(v997 + 24);
    v1000 = *(_DWORD**)(v999 + 352);
    v1001 = *(_DWORD**)(v999 + 360);
    if (v1000 != v1001) {
      while (1) {
        v1002 = *(unsigned __int8*)(v997 + 250);
        v1003 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)(v77 + 64) + 8LL * (*v1000 & 0xFFF)) +
                     24LL);
        if (v1002 == 2) {
          break;
        }
        if (v1002 != 1 || *(_QWORD*)(v1003 + 1096) != 0) {
        LABEL_989:
          if (++v1000 == v1001) {
            goto LABEL_981;
          }
        }
        else {
          *(_QWORD*)(v1003 + 1096) = v997;
          if (++v1000 == v1001) {
            goto LABEL_981;
          }
        }
      }
      if (*(_QWORD*)(v1003 + 1104) == 0) {
        *(_QWORD*)(v1003 + 1104) = v997;
      }
      goto LABEL_989;
    }
  LABEL_981:
    ++v78;
  }
  UnitSkillList_7c6d00_alt1();
  if (GameData_21ca410 != 0) {
    v1004 = (_QWORD*)GameData_21ca408;
    if (GameData_21ca408 != 0) {
      v2 = 56;
      do {
        v1006 = (_QWORD*)*v1004;
        v1007 = v1004[3];
        if (v1007 != 0) {
          v1008 = *i;
          v1004[4] = v1007;
          if (*(_QWORD*)(v1008 + 200) != 0) {
            v1009 = 128;
          }
          else {
            v1009 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v1008 + v1009, v1007);
        }
        if (*(_QWORD*)(*i + 200) != 0) {
          v1005 = 128;
        }
        else {
          v1005 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*i + v1005, (__int64)v1004);
        v1004 = v1006;
      } while (v1006 != nullptr);
    }
    GameData_21ca408 = 0;
    v76 = GameData_212c880[0];
    if (GameData_21ca400 != 0) {
      v1010 = GameData_21ca400 & 7;
      if ((unsigned __int64)GameData_21ca400 >= 8) {
        v1051 = GameData_21ca400 & 0xFFFFFFFFFFFFFFF8LL;
        v1011 = 0;
        do {
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1011) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1011 + 8) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1011 + 16) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1011 + 24) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1011 + 32) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1011 + 40) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1011 + 48) = 0;
          v1052 = GameData_21ca3f8 + 8 * v1011;
          v1011 += 8;
          *(_QWORD*)(v1052 + 56) = 0;
        } while (v1051 != v1011);
      }
      else {
        v1011 = 0;
      }
      if (v1010 != 0) {
        v1053 = 8 * v1011;
        do {
          --v1010;
          *(_QWORD*)(GameData_21ca3f8 + v1053) = 0;
          v1053 += 8;
        } while (v1010 != 0);
      }
    }
    GameData_21ca410 = 0;
  }
  if (GameData_21ca438 != 0) {
    v1054 = (_QWORD*)GameData_21ca430;
    if (GameData_21ca430 != 0) {
      do {
        v1055 = (_QWORD*)*v1054;
        if (*(_QWORD*)(*i + 200) != 0) {
          v1056 = 128;
        }
        else {
          v1056 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*i + v1056, (__int64)v1054);
        v1054 = v1055;
      } while (v1055 != nullptr);
    }
    GameData_21ca430 = 0;
    v76 = GameData_212c880[0];
    if (GameData_21ca428 != 0) {
      v1057 = GameData_21ca428 & 7;
      if ((unsigned __int64)GameData_21ca428 >= 8) {
        v1059 = GameData_21ca428 & 0xFFFFFFFFFFFFFFF8LL;
        v1058 = 0;
        do {
          *(_QWORD*)(GameData_21ca420 + 8 * v1058) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1058 + 8) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1058 + 16) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1058 + 24) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1058 + 32) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1058 + 40) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1058 + 48) = 0;
          v1060 = GameData_21ca420 + 8 * v1058;
          v1058 += 8;
          *(_QWORD*)(v1060 + 56) = 0;
        } while (v1059 != v1058);
      }
      else {
        v1058 = 0;
      }
      if (v1057 != 0) {
        v1061 = 8 * v1058;
        do {
          --v1057;
          *(_QWORD*)(GameData_21ca420 + v1061) = 0;
          v1061 += 8;
        } while (v1057 != 0);
      }
    }
    GameData_21ca438 = 0;
  }
  v1062 = *v76;
  v1063 = *(unsigned __int64**)(*v76 + 64);
  v1064 = *(unsigned __int64**)(*v76 + 72);
  if (v1063 != v1064) {
    while (1) {
      v1067 = *v1063;
      v1147_.v1149 = (__int64*)&v1145_.v1145;
      v1068 = *(_QWORD*)(v1067 + 24);
      v1145_.v1145 = GameData_1f92bd0;
      v1145_.v1146 = v1067;
      if (*(_BYTE*)(v1068 + 1121) == 1) {
        v1069 = *(_QWORD*)(v1068 + 944);
        v2 = *(_QWORD*)(v1068 + 952);
        if (v1069 != v2) {
          while (1) {
            LOBYTE(v1157) = *(_BYTE*)(v1069 + 16);
            if (v1147_.v1149 == nullptr) {
              break;
            }
            (*(void (**)(__int64*, __int64, __int64*))(*v1147_.v1149 + 48))(
                v1147_.v1149, v1069, &v1157);
            v1069 += 24;
            if (v1069 == v2) {
              goto LABEL_1068;
            }
          }
        LABEL_138:
          GameRoutine_60a310_alt2();
        }
      LABEL_1068:
        v1070 = *(_QWORD*)(v1068 + 992);
        for (j = *(_QWORD*)(v1068 + 1000); v1070 != j; v1070 += 24) {
          LOBYTE(v1157) = *(_BYTE*)(v1070 + 16) ^ 1;
          if (v1147_.v1149 == nullptr) {
            goto LABEL_138;
          }
          (*(void (**)(__int64*, __int64, __int64*))(*v1147_.v1149 + 48))(
              v1147_.v1149, v1070, &v1157);
        }
      }
      if (v1147_.v1149 == (__int64*)&v1145_.v1145) {
        break;
      }
      if (v1147_.v1149 != nullptr) {
        v1072 = 40;
      LABEL_1075:
        (*(void (**)(__int64))(*v1147_.v1149 + v1072))((__int64)v1147_.v1149);
      }
      if (*(_BYTE*)(v1067 + 250) == 20) {
        v1073 = *(unsigned __int64**)(v1067 + 576);
        if (v1073 != nullptr) {
          v1074 = *v1073;
          v1075 = GameData_21ca428;
          if (GameData_21ca428 != 0 && GameData_21ca438 != 0) {
            v1076 = GameData_21ca428 - 1;
            if ((GameData_21ca428 & (GameData_21ca428 - 1)) != 0) {
              v1077 = *v1073;
              if (v1074 >= GameData_21ca428) {
                v1077 = v1074 % GameData_21ca428;
              }
            }
            else {
              v1077 = v1076 & v1074;
            }
            v1080 = ((GameData_21ca428 -
                      (((unsigned __int64)GameData_21ca428 >> 1) &
                       0x5555555555555555LL)) &
                     0x3333333333333333LL) +
                    (((GameData_21ca428 -
                       (((unsigned __int64)GameData_21ca428 >> 1) &
                        0x5555555555555555LL)) >>
                      2) &
                     0x3333333333333333LL);
            v1081 = (0x101010101010101LL *
                     ((v1080 + (v1080 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                    56;
            v1082 = *(_QWORD**)(GameData_21ca420 + 8 * v1077);
            if (v1082 != nullptr) {
              v1083 = (_QWORD*)*v1082;
              if (v1083 != nullptr) {
                if ((GameData_21ca428 & v1076) == 0) {
                  while (1) {
                    v1085 = v1083[1];
                    if (v1085 == v1074) {
                      if (v1083[2] == v1074) {
                        goto LABEL_1063;
                      }
                    }
                    else if ((v1085 & v1076) != v1077) {
                      goto LABEL_1103;
                    }
                    v1083 = (_QWORD*)*v1083;
                    if (v1083 == nullptr) {
                      goto LABEL_1103;
                    }
                  }
                }
                while (1) {
                  v1084 = v1083[1];
                  if (v1084 == v1074) {
                    if (v1083[2] == v1074) {
                      goto LABEL_1063;
                    }
                  }
                  else {
                    if (v1084 >= GameData_21ca428) {
                      v1084 %= (unsigned __int64)GameData_21ca428;
                    }
                    if (v1084 != v1077) {
                      goto LABEL_1103;
                    }
                  }
                  v1083 = (_QWORD*)*v1083;
                  if (v1083 == nullptr) {
                    goto LABEL_1103;
                  }
                }
              }
            }
          LABEL_1105:
            if (v1081 > 1) {
              v2 = v1074;
              if (v1074 >= GameData_21ca428) {
                v2 = v1074 % GameData_21ca428;
              }
            }
            else {
              v2 = (GameData_21ca428 - 1) & v1074;
            }
            v1087 = *(_QWORD***)(GameData_21ca420 + 8 * v2);
            if (v1087 != nullptr) {
              v1088 = *v1087;
              if (*v1087 != nullptr) {
                if (v1081 < 2) {
                  while (1) {
                    v1090 = v1088[1];
                    if (v1090 == v1074) {
                      if (v1088[2] == v1074) {
                        goto LABEL_1062;
                      }
                    }
                    else if ((v1090 & (GameData_21ca428 - 1)) != v2) {
                      goto LABEL_1124;
                    }
                    v1088 = (_QWORD*)*v1088;
                    if (v1088 == nullptr) {
                      goto LABEL_1124;
                    }
                  }
                }
                do {
                  v1089 = v1088[1];
                  if (v1089 == v1074) {
                    if (v1088[2] == v1074) {
                      goto LABEL_1062;
                    }
                  }
                  else {
                    if (v1089 >= GameData_21ca428) {
                      v1089 %= (unsigned __int64)GameData_21ca428;
                    }
                    if (v1089 != v2) {
                      break;
                    }
                  }
                  v1088 = (_QWORD*)*v1088;
                } while (v1088 != nullptr);
              }
            }
          }
          else {
          LABEL_1103:
            if (GameData_21ca428 != 0) {
              v1086 = ((GameData_21ca428 -
                        (((unsigned __int64)GameData_21ca428 >> 1) &
                         0x5555555555555555LL)) &
                       0x3333333333333333LL) +
                      (((GameData_21ca428 -
                         (((unsigned __int64)GameData_21ca428 >> 1) &
                          0x5555555555555555LL)) >>
                        2) &
                       0x3333333333333333LL);
              v1081 = (0x101010101010101LL *
                       ((v1086 + (v1086 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                      56;
              goto LABEL_1105;
            }
          }
        LABEL_1124:
          v1088 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
          *v1088 = 0;
          v1088[1] = v1074;
          v1088[2] = v1074;
          v1088[3] = 0;
          v1091 = (float)(unsigned __int64)(GameData_21ca438 + 1);
          if (v1075 == 0 ||
              (float)(*(float*)&GameData_21ca440 * (float)v1075) < v1091) {
            v1092 = v1091 / *(float*)&GameData_21ca440;
            v1093 = (v1075 & (v1075 - 1)) != 0;
            if (v1075 < 3) {
              v1093 = true;
            }
            v1094 = v1093 | (2 * v1075);
            v1095 = vcvtps_u64_f32(v1092);
            if (v1094 <= v1095) {
              v1096 = v1095;
            }
            else {
              v1096 = v1094;
            }
            if (v1096 == 1) {
              v1096 = 2;
            }
            else if ((v1096 & (v1096 - 1)) != 0) {
              v1096 = std___1___next_prime_alt1(v1096);
              v1075 = GameData_21ca428;
            }
            if (v1096 > v1075) {
              goto LABEL_1136;
            }
            if (v1096 < v1075) {
              v1097 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21ca438 /
                                     *(float*)&GameData_21ca440);
              if (v1075 < 3 || (v1075 & (v1075 - 1)) != 0) {
                v1097 = std___1___next_prime_alt1(v1097);
              }
              else {
                v1098 = 1LL << -(char)__clz(v1097 - 1);
                if (v1097 >= 2) {
                  v1097 = v1098;
                }
              }
              if (v1096 <= v1097) {
                v1096 = v1097;
              }
              if (v1096 < v1075) {
              LABEL_1136:
                GameRoutine_707e20_alt1(&GameData_21ca420, v1096);
              }
            }
            v1075 = GameData_21ca428;
            if ((GameData_21ca428 & (GameData_21ca428 - 1)) != 0) {
              if (v1074 >= GameData_21ca428) {
                v2 = v1074 % GameData_21ca428;
              }
              else {
                v2 = v1074;
              }
            }
            else {
              v2 = (GameData_21ca428 - 1) & v1074;
            }
          }
          v1065 = GameData_21ca420;
          v1066 = *(_QWORD**)(GameData_21ca420 + 8 * v2);
          if (v1066 != nullptr) {
            *v1088 = *v1066;
            *v1066 = v1088;
          }
          else {
            v1078 = GameData_21ca430;
            GameData_21ca430 = (__int64)v1088;
            *v1088 = v1078;
            *(_QWORD*)(v1065 + 8 * v2) = &GameData_21ca430;
            if (*v1088 != 0) {
              v1079 = *(_QWORD*)(*v1088 + 8LL);
              if ((v1075 & (v1075 - 1)) != 0) {
                if (v1079 >= v1075) {
                  v1079 %= v1075;
                }
              }
              else {
                v1079 &= v1075 - 1;
              }
              *(_QWORD*)(GameData_21ca420 + 8 * v1079) = v1088;
            }
          }
          ++GameData_21ca438;
        LABEL_1062:
          v1088[3] = v1067;
        }
      }
    LABEL_1063:
      ++v1063;
      i = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v1063 == v1064) {
        v1062 = *GameData_212c880[0];
        v1063 = *(unsigned __int64**)(*GameData_212c880[0] + 64);
        v1064 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
        goto LABEL_1154;
      }
    }
    v1072 = 32;
    goto LABEL_1075;
  }
LABEL_1154:
  while (v1063 != v1064) {
    if (*(_BYTE*)(*v1063 + 115) == 14) {
      v1099 = *(_QWORD*)(*v1063 + 24);
      v1100 = *(_DWORD**)(v1099 + 448);
      v1101 = *(_DWORD**)(v1099 + 456);
      while (v1100 != v1101) {
        v1102 = *(_QWORD*)(*(_QWORD*)(v1062 + 64) + 8LL * (*v1100 & 0xFFF));
        if (*(_BYTE*)(v1102 + 115) == 14) {
          *(_BYTE*)(*(_QWORD*)(v1102 + 24) + 1123LL) = 1;
        }
        ++v1100;
      }
    }
    ++v1063;
  }
  if (a1[19] != 0) {
    v1103 = (_QWORD*)a1[18];
    if (v1103 != nullptr) {
      do {
        v1104 = (_QWORD*)*v1103;
        if (*(_QWORD*)(*i + 200) != 0) {
          v1105 = 128;
        }
        else {
          v1105 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*i + v1105, (__int64)v1103);
        v1103 = v1104;
      } while (v1104 != nullptr);
    }
    v1106 = a1[17];
    a1[18] = 0;
    if (v1106 != 0) {
      v1107 = v1106 & 7;
      if (v1106 >= 8) {
        v1109 = v1106 & 0xFFFFFFFFFFFFFFF8LL;
        v1108 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v1108) = 0;
          *(_QWORD*)(a1[16] + 8 * v1108 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v1108 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v1108 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v1108 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v1108 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v1108 + 48) = 0;
          v1110 = a1[16] + 8 * v1108;
          v1108 += 8;
          *(_QWORD*)(v1110 + 56) = 0;
        } while (v1109 != v1108);
      }
      else {
        v1108 = 0;
      }
      if (v1107 != 0) {
        v1111 = 8 * v1108;
        do {
          --v1107;
          *(_QWORD*)(a1[16] + v1111) = 0;
          v1111 += 8;
        } while (v1107 != 0);
      }
    }
    a1[19] = 0;
  }
  v1112 = (unsigned int**)a1[8];
  v1113 = (unsigned int**)a1[9];
  while (v1112 != v1113) {
    v1114 = *v1112;
    v1115 = **v1112;
    if (v1115 != 0) {
      GameRoutine_7095c0_alt1((__int64)(a1 + 1), v1115, (__int64)*v1112);
    }
    v1116 = Resources_66bfc0_alt1((unsigned __int64*)v1114);
    if (v1116 != 0) {
      GameRoutine_7095c0_alt1((__int64)(a1 + 1), v1116, (__int64)v1114);
    }
    ++v1112;
  }
}

void SkillFile_Unknown5()
{
  __int64* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  v0 = GameData_212d328;
  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)GameData_212d328) =
      0;
  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v0 + 8) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v0 + 8) = 0;
  *v0 = 0;
  v0[1] = 0;
  memset_alt1(game_g_shared_system_skills_ptr_alt1, 0, 0x254u);
  if (GameData_21ca410 != 0) {
    v1 = (_QWORD*)GameData_21ca408;
    if (GameData_21ca408 != 0) {
      v2 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v1;
        v5 = v1[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v2;
          v1[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(v6 + v7, v5);
        }
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v3, (__int64)v1);
        v1 = v4;
      } while (v4 != nullptr);
    }
    GameData_21ca408 = 0;
    if (GameData_21ca400 != 0) {
      v8 = GameData_21ca400 & 7;
      if ((unsigned __int64)GameData_21ca400 >= 8) {
        v10 = GameData_21ca400 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21ca3f8 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v9 + 48) = 0;
          v11 = GameData_21ca3f8 + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(GameData_21ca3f8 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21ca410 = 0;
  }
  if (GameData_21ca438 != 0) {
    v13 = (_QWORD*)GameData_21ca430;
    if (GameData_21ca430 != 0) {
      v14 = fw_memory_g_heap_manager_ptr;
      do {
        v15 = (_QWORD*)*v13;
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v16, (__int64)v13);
        v13 = v15;
      } while (v15 != nullptr);
    }
    GameData_21ca430 = 0;
    if (GameData_21ca428 != 0) {
      v17 = GameData_21ca428 & 7;
      if ((unsigned __int64)GameData_21ca428 >= 8) {
        v19 = GameData_21ca428 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = 0;
        do {
          *(_QWORD*)(GameData_21ca420 + 8 * v18) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v18 + 8) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v18 + 16) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v18 + 24) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v18 + 32) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v18 + 40) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v18 + 48) = 0;
          v20 = GameData_21ca420 + 8 * v18;
          v18 += 8;
          *(_QWORD*)(v20 + 56) = 0;
        } while (v19 != v18);
      }
      else {
        v18 = 0;
      }
      if (v17 != 0) {
        v21 = 8 * v18;
        do {
          --v17;
          *(_QWORD*)(GameData_21ca420 + v21) = 0;
          v21 += 8;
        } while (v17 != 0);
      }
    }
    GameData_21ca438 = 0;
  }
}

__int64 SkillFile_DeletingDestructor_703640(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = GameData_1f92940;
  a1[1] = GameData_1f92970;
  v2 = a1 + 1;
  GameRoutine_705860(a1 + 1);
  GameRoutine_705e40(v2);
  if ((_QWORD*)GameData_21c99b0 == a1) {
    GameData_21c99b0 = 0;
    GameData_21ca498 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 SkillFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *(a1 - 1) = GameData_1f92940;
  v2 = a1 - 1;
  *a1 = GameData_1f92970;
  GameRoutine_705860(a1);
  result = GameRoutine_705e40(a1);
  *v2 = GameData_1f92a10;
  if ((_QWORD*)GameData_21c99b0 == v2) {
    GameData_21c99b0 = 0;
    GameData_21ca498 = 0;
  }
  return result;
}

__int64 SkillFile_DeletingDestructor_703770(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *(a1 - 1) = GameData_1f92940;
  v2 = a1 - 1;
  *a1 = GameData_1f92970;
  GameRoutine_705860(a1);
  GameRoutine_705e40(a1);
  if ((_QWORD*)GameData_21c99b0 == v2) {
    GameData_21c99b0 = 0;
    GameData_21ca498 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

__int64 game_SkillFile_OnBuild_lambda0_Invoke(__int64 a1, __int64* a2,
                                              __int64 a3, __int64 a4)
{
  __int64 result;
  __int64 v5;

  result = *a2;
  if (*(_QWORD*)(*(_QWORD*)(*a2 + 24) + 1072LL) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*a2 + 24) + 1072LL);
    if (GameData_21ca480 == 0) {
      GameRoutine_60a310(0, a2, a3, a4);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)GameData_21ca480 +
                                               48LL))(GameData_21ca480, &v5);
  }
  return result;
}

unsigned __int64 game_SkillFile_OnBuild_lambda1_Invoke(unsigned __int64 result,
                                                       unsigned __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  _BOOL8 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD** v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  _QWORD* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  int v47;
  int v48;
  int v49;

  v3 = *a2;
  v4 = result;
  v5 = GameData_21ca400;
  if (GameData_21ca400 != 0) {
    v6 = GameData_21ca400 - 1;
    if ((GameData_21ca400 & (GameData_21ca400 - 1)) != 0) {
      v2 = *a2;
      if (v3 >= GameData_21ca400) {
        v2 = v3 % GameData_21ca400;
      }
    }
    else {
      v2 = v6 & v3;
    }
    v7 = *(__int64**)(GameData_21ca3f8 + 8 * v2);
    if (v7 != nullptr) {
      v8 = *v7;
      if (*v7 != 0) {
        if ((GameData_21ca400 & v6) == 0) {
          while (1) {
            v10 = *(_QWORD*)(v8 + 8);
            if (v10 == v3) {
              if (*(_QWORD*)(v8 + 16) == v3) {
                goto LABEL_97;
              }
            }
            else if ((v10 & v6) != v2) {
              goto LABEL_22;
            }
            v8 = *(_QWORD*)v8;
            if (v8 == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v9 = *(_QWORD*)(v8 + 8);
          if (v9 == v3) {
            if (*(_QWORD*)(v8 + 16) == v3) {
              goto LABEL_97;
            }
          }
          else {
            if (v9 >= GameData_21ca400) {
              v9 %= (unsigned __int64)GameData_21ca400;
            }
            if (v9 != v2) {
              break;
            }
          }
          v8 = *(_QWORD*)v8;
        } while (v8 != 0);
      }
    }
  }
LABEL_22:
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v8 = result;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = v3;
  *(_QWORD*)(result + 16) = v3;
  *(_QWORD*)(result + 24) = 0;
  v12 = GameData_21ca410;
  v13 = *(float*)&GameData_21ca418;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_DWORD*)(result + 48) = 0;
  v14 = (float)(unsigned __int64)(v12 + 1);
  if (v5 == 0 || (float)(v13 * (float)v5) < v14) {
    v15 = v14 / v13;
    v16 = true;
    if (v5 >= 3) {
      v16 = (v5 & (v5 - 1)) != 0;
    }
    v17 = v16 | (2 * v5);
    v18 = vcvtps_u64_f32(v15);
    if (v17 <= v18) {
      v19 = v18;
    }
    else {
      v19 = v17;
    }
    if (v19 == 1) {
      v19 = 2;
    }
    else if ((v19 & (v19 - 1)) != 0) {
      result = std___1___next_prime(v19);
      v5 = GameData_21ca400;
      v19 = result;
    }
    if (v19 <= v5) {
      if (v19 >= v5) {
        goto LABEL_83;
      }
      result = vcvtps_u64_f32((float)(unsigned __int64)GameData_21ca410 /
                              *(float*)&GameData_21ca418);
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        result = std___1___next_prime(result);
      }
      else {
        v24 = 1LL << -(char)__clz(result - 1);
        if (result >= 2) {
          result = v24;
        }
      }
      if (v19 <= result) {
        v19 = result;
      }
      if (v19 >= v5) {
        goto LABEL_83;
      }
      if (v19 == 0) {
        v35 = GameData_21ca3f8;
        GameData_21ca3f8 = 0;
        if (v35 != 0) {
          v36 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v36 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v11 + v36, v35);
        }
        GameData_21ca400 = 0;
        goto LABEL_83;
      }
    }
    if (v19 >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    result = fw_memory_HeapManager_Allocate_alt1(*v11, 8 * v19, 16, 0);
    v20 = GameData_21ca3f8;
    GameData_21ca3f8 = result;
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v11 + v21, v20);
    }
    v22 = v19 & 7;
    GameData_21ca400 = v19;
    if (v19 >= 8) {
      v23 = 0;
      do {
        *(_QWORD*)(GameData_21ca3f8 + 8 * v23) = 0;
        *(_QWORD*)(GameData_21ca3f8 + 8 * v23 + 8) = 0;
        *(_QWORD*)(GameData_21ca3f8 + 8 * v23 + 16) = 0;
        *(_QWORD*)(GameData_21ca3f8 + 8 * v23 + 24) = 0;
        *(_QWORD*)(GameData_21ca3f8 + 8 * v23 + 32) = 0;
        *(_QWORD*)(GameData_21ca3f8 + 8 * v23 + 40) = 0;
        *(_QWORD*)(GameData_21ca3f8 + 8 * v23 + 48) = 0;
        v25 = GameData_21ca3f8 + 8 * v23;
        v23 += 8;
        *(_QWORD*)(v25 + 56) = 0;
      } while ((v19 & 0x1FFFFFFFFFFFFFF8LL) != v23);
    }
    else {
      v23 = 0;
    }
    if ((v19 & 7) != 0) {
      v26 = 8 * v23;
      do {
        --v22;
        *(_QWORD*)(GameData_21ca3f8 + v26) = 0;
        v26 += 8;
      } while (v22 != 0);
    }
    v27 = (_QWORD**)GameData_21ca408;
    if (GameData_21ca408 != 0) {
      v28 = *(_QWORD*)(GameData_21ca408 + 8);
      v29 = v19 - 1;
      if ((v19 & (v19 - 1)) != 0) {
        if (v28 >= v19) {
          v28 %= v19;
        }
        *(_QWORD*)(GameData_21ca3f8 + 8 * v28) = &GameData_21ca408;
        v30 = *v27;
        if (*v27 == nullptr) {
          goto LABEL_83;
        }
        while (1) {
          v31 = v30[1];
          if (v31 >= v19) {
            v31 %= v19;
          }
          if (v31 != v28) {
            if (*(_QWORD*)(GameData_21ca3f8 + 8 * v31) == 0) {
              *(_QWORD*)(GameData_21ca3f8 + 8 * v31) = v27;
              goto LABEL_60;
            }
            *v27 = (_QWORD*)*v30;
            *v30 = **(_QWORD**)(GameData_21ca3f8 + 8 * v31);
            **(_QWORD**)(GameData_21ca3f8 + 8 * v31) = v30;
            v30 = v27;
          }
          v31 = v28;
        LABEL_60:
          v27 = (_QWORD**)v30;
          v30 = (_QWORD*)*v30;
          v28 = v31;
          if (v30 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v32 = v28 & v29;
      *(_QWORD*)(GameData_21ca3f8 + 8 * v32) = &GameData_21ca408;
      while (1) {
        v33 = *v27;
        if (*v27 == nullptr) {
          break;
        }
        v34 = v33[1] & v29;
        if (v34 == v32) {
          v27 = (_QWORD**)*v27;
        }
        else if (*(_QWORD*)(GameData_21ca3f8 + 8 * v34) != 0) {
          *v27 = (_QWORD*)*v33;
          *v33 = **(_QWORD**)(GameData_21ca3f8 + 8 * v34);
          **(_QWORD**)(GameData_21ca3f8 + 8 * v34) = v33;
        }
        else {
          *(_QWORD*)(GameData_21ca3f8 + 8 * v34) = v27;
          v27 = (_QWORD**)v33;
          v32 = v34;
        }
      }
    }
  LABEL_83:
    v5 = GameData_21ca400;
    if ((v5 & (v5 - 1)) != 0) {
      if (v3 >= GameData_21ca400) {
        v2 = v3 % GameData_21ca400;
      }
      else {
        v2 = v3;
      }
    }
    else {
      v2 = (GameData_21ca400 - 1) & v3;
    }
  }
  v37 = GameData_21ca3f8;
  v38 = *(__int64**)(GameData_21ca3f8 + 8 * v2);
  if (v38 != nullptr) {
    *(_QWORD*)v8 = *v38;
    *v38 = v8;
  }
  else {
    v39 = GameData_21ca408;
    GameData_21ca408 = v8;
    *(_QWORD*)v8 = v39;
    *(_QWORD*)(v37 + 8 * v2) = &GameData_21ca408;
    if (*(_QWORD*)v8 != 0) {
      v40 = *(_QWORD*)(*(_QWORD*)v8 + 8LL);
      if ((v5 & (v5 - 1)) != 0) {
        if (v40 >= v5) {
          v40 %= v5;
        }
      }
      else {
        v40 &= v5 - 1;
      }
      *(_QWORD*)(GameData_21ca3f8 + 8 * v40) = v8;
    }
  }
  ++GameData_21ca410;
LABEL_97:
  v41 = *(_QWORD*)(v4 + 8);
  if (v41 != 0) {
    v42 = *(_WORD*)(v41 + 16) & 0xFFF;
  }
  else {
    v42 = 0;
  }
  v43 = *(_QWORD*)(v8 + 24);
  v44 = v42 >> 5;
  v45 = (unsigned int)(v44 + 1);
  v46 = (*(_QWORD*)(v8 + 32) - v43) >> 2;
  if (v45 <= v46) {
    v48 = *(_DWORD*)(v43 + 4LL * (unsigned int)v44);
    v47 = 1 << v42;
    if ((v48 & (1 << v42)) != 0) {
      return result;
    }
  }
  else {
    v49 = 0;
    result = (unsigned __int64)GameRoutine_66dd60((_QWORD*)(v8 + 24), v45 - v46,
                                                  &v49);
    v43 = *(_QWORD*)(v8 + 24);
    v47 = 1 << v42;
    v48 = *(_DWORD*)(v43 + 4LL * (unsigned int)v44);
  }
  *(_DWORD*)(v43 + 4 * v44) = v48 | v47;
  ++*(_DWORD*)(v8 + 48);
  return result;
}

#pragma GCC visibility pop
