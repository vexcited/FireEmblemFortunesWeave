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
__int64* game_SkillFile_OnBuild(unsigned __int64 primeEm);
__int64 SkillFile_Unknown5(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6);
unsigned __int64 game_SkillFile_OnBuild_lambda1_Invoke(unsigned __int64 result,
                                                       unsigned __int64* a2);

__int64* game_SkillFile_OnBuild(unsigned __int64 primeEm)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64* v3;
  __int64* v4;
  int v5;
  int v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  float v20;
  float v21;
  float v22;
  _BOOL8 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 (**v27)();
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 (**v31)();
  unsigned __int64 v32;
  __int64 v33;
  __int64 (*v34)();
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 (*v37)();
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 (*v40)();
  unsigned __int64 v41;
  int v42;
  int v43;
  __int64 (**v44)();
  __int64 v45;
  __int64 (**v46)();
  __int64 (*v47)();
  unsigned __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  bool v62;
  __int64* v63;
  __int64* v64;
  _QWORD* i;
  __int64 v66;
  unsigned __int64* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 (**v72)();
  __int64 v73;
  __int64* v74;
  __int64 v75;
  unsigned __int64* v76;
  unsigned __int64* v77;
  unsigned __int64 v78;
  __int64 v79;
  bool v80;
  bool v81;
  bool v82;
  bool v83;
  bool v84;
  bool v85;
  bool v86;
  bool v87;
  float v88;
  bool v89;
  bool v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  int v97;
  unsigned int v98;
  unsigned int v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  int v104;
  unsigned int v105;
  unsigned int v106;
  int v107;
  unsigned int v108;
  __int64 v109;
  int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  int v118;
  int v119;
  __int64 v120;
  int v121;
  __int64 v122;
  __int64 v123;
  _DWORD* v124;
  __int64 v125;
  __int64 v126;
  int v127;
  __int64 v128;
  int v129;
  int v130;
  __int64 v131;
  int v132;
  __int64 v133;
  int v134;
  int v135;
  __int64 v136;
  int v137;
  __int64 v138;
  int v139;
  int v140;
  __int64 v141;
  int* v142;
  int v143;
  __int64 v144;
  __int64 v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  char v153;
  char v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64* v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  unsigned __int16* v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  int v175;
  int v176;
  __int64 v177;
  int v178;
  __int64 v179;
  __int64 v180;
  _DWORD* v181;
  __int64 v182;
  __int64 v183;
  int v184;
  char v185;
  __int64 v186;
  char v187;
  int v188;
  __int64 v189;
  int v190;
  char v191;
  __int64 v192;
  char v193;
  int v194;
  __int64 v195;
  int v196;
  char v197;
  __int64 v198;
  char v199;
  int v200;
  __int64 v201;
  char v202;
  char v203;
  int* v204;
  int v205;
  __int64 v206;
  char v207;
  char v208;
  unsigned __int64 v209;
  unsigned __int64 v210;
  int v211;
  __int64 (***v212)();
  signed __int64 v213;
  __int64 v214;
  __int64 v215;
  __int64 v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  unsigned __int64 v225;
  unsigned __int64 v226;
  unsigned __int64 v227;
  __int64 v228;
  int v229;
  __int64 (***v230)();
  signed __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  char* v240;
  char* v241;
  char* v242;
  __int64 v243;
  char* v244;
  int v245;
  __int64 v246;
  __int64 v247;
  char* v248;
  __int64 v249;
  __int64 v250;
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
  unsigned __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  unsigned __int16* v273;
  __int64 v274;
  __int64* v275;
  __int64 v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  int v282;
  int v283;
  __int64 v284;
  int v285;
  __int64 v286;
  __int64 v287;
  _DWORD* v288;
  __int64 v289;
  __int64 v290;
  int v291;
  char v292;
  __int64 v293;
  char v294;
  int v295;
  __int64 v296;
  int v297;
  char v298;
  __int64 v299;
  char v300;
  int v301;
  __int64 v302;
  int v303;
  char v304;
  __int64 v305;
  char v306;
  int v307;
  __int64 v308;
  char v309;
  char v310;
  int* v311;
  int v312;
  __int64 v313;
  char v314;
  char v315;
  unsigned __int64 v316;
  unsigned __int64 v317;
  int v318;
  __int64 (***v319)();
  signed __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  unsigned __int64 v328;
  __int64 v329;
  __int64 v330;
  unsigned __int64 v331;
  unsigned __int64 v332;
  unsigned __int64 v333;
  unsigned __int64 v334;
  __int64 v335;
  int v336;
  __int64 (***v337)();
  signed __int64 v338;
  __int64 v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  char* v347;
  char* v348;
  char* v349;
  __int64 v350;
  char* v351;
  int v352;
  __int64 v353;
  __int64 v354;
  char* v355;
  __int64 v356;
  __int64 v357;
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
  _QWORD* v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  __int64 v372;
  int v373;
  int v374;
  __int64 v375;
  int v376;
  __int64 v377;
  __int64 v378;
  _DWORD* v379;
  __int64 v380;
  __int64 v381;
  int v382;
  char v383;
  __int64 v384;
  char v385;
  int v386;
  __int64 v387;
  int v388;
  char v389;
  __int64 v390;
  char v391;
  int v392;
  __int64 v393;
  int v394;
  char v395;
  __int64 v396;
  char v397;
  int v398;
  __int64 v399;
  char v400;
  char v401;
  int* v402;
  int v403;
  __int64 v404;
  char v405;
  char v406;
  unsigned __int64 v407;
  unsigned __int64 v408;
  __int64 v409;
  __int64 v410;
  unsigned __int64 v411;
  unsigned __int64 v412;
  unsigned __int64 v413;
  __int64 v414;
  __int64 v415;
  char* v416;
  char* v417;
  char* v418;
  __int64 v419;
  char* v420;
  int v421;
  __int64 v422;
  __int64 v423;
  char* v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
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
  unsigned __int64 v441;
  __int64 v442;
  __int64* v443;
  __int64 v444;
  __int64 v445;
  __int64 v446;
  __int64 v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  __int64 v451;
  unsigned __int16* v452;
  __int64 v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  int v460;
  int v461;
  __int64 v462;
  int v463;
  __int64 v464;
  __int64 v465;
  _DWORD* v466;
  __int64 v467;
  __int64 v468;
  int v469;
  char v470;
  __int64 v471;
  char v472;
  int v473;
  __int64 v474;
  int v475;
  char v476;
  __int64 v477;
  char v478;
  int v479;
  __int64 v480;
  int v481;
  char v482;
  __int64 v483;
  char v484;
  int v485;
  __int64 v486;
  char v487;
  char v488;
  int* v489;
  int v490;
  __int64 v491;
  char v492;
  char v493;
  unsigned __int64 v494;
  unsigned __int64 v495;
  int v496;
  __int64 (***v497)();
  signed __int64 v498;
  __int64 v499;
  __int64 v500;
  __int64 v501;
  __int64 v502;
  __int64 v503;
  __int64 v504;
  __int64 v505;
  unsigned __int64 v506;
  __int64 v507;
  __int64 v508;
  unsigned __int64 v509;
  unsigned __int64 v510;
  unsigned __int64 v511;
  unsigned __int64 v512;
  __int64 v513;
  int v514;
  __int64 (***v515)();
  signed __int64 v516;
  __int64 v517;
  __int64 v518;
  __int64 v519;
  __int64 v520;
  __int64 v521;
  __int64 v522;
  __int64 v523;
  __int64 v524;
  char* v525;
  char* v526;
  char* v527;
  __int64 v528;
  char* v529;
  int v530;
  __int64 v531;
  __int64 v532;
  char* v533;
  __int64 v534;
  __int64 v535;
  __int64 v536;
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
  unsigned __int64 v548;
  __int64 v549;
  __int64* v550;
  __int64 v551;
  __int64 v552;
  __int64 v553;
  __int64 v554;
  __int64 v555;
  __int64 v556;
  __int64 v557;
  __int64 v558;
  unsigned __int16* v559;
  __int64 v560;
  __int64 v561;
  __int64 v562;
  __int64 v563;
  __int64 v564;
  __int64 v565;
  __int64 v566;
  int v567;
  int v568;
  __int64 v569;
  int v570;
  __int64 v571;
  __int64 v572;
  _DWORD* v573;
  __int64 v574;
  __int64 v575;
  int v576;
  char v577;
  __int64 v578;
  char v579;
  int v580;
  __int64 v581;
  int v582;
  char v583;
  __int64 v584;
  char v585;
  int v586;
  __int64 v587;
  int v588;
  char v589;
  __int64 v590;
  char v591;
  int v592;
  __int64 v593;
  char v594;
  char v595;
  int* v596;
  int v597;
  __int64 v598;
  char v599;
  char v600;
  unsigned __int64 v601;
  unsigned __int64 v602;
  int v603;
  __int64 (***v604)();
  signed __int64 v605;
  __int64 v606;
  __int64 v607;
  __int64 v608;
  __int64 v609;
  __int64 v610;
  __int64 v611;
  __int64 v612;
  unsigned __int64 v613;
  __int64 v614;
  __int64 v615;
  unsigned __int64 v616;
  unsigned __int64 v617;
  unsigned __int64 v618;
  unsigned __int64 v619;
  __int64 v620;
  int v621;
  __int64 (***v622)();
  signed __int64 v623;
  __int64 v624;
  __int64 v625;
  __int64 v626;
  __int64 v627;
  __int64 v628;
  __int64 v629;
  __int64 v630;
  __int64 v631;
  char* v632;
  char* v633;
  char* v634;
  __int64 v635;
  char* v636;
  int v637;
  __int64 v638;
  __int64 v639;
  char* v640;
  __int64 v641;
  __int64 v642;
  __int64 v643;
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
  __int64* v656;
  __int64 v657;
  __int64 v658;
  __int64 v659;
  __int64 v660;
  __int64* v661;
  __int64 v662;
  unsigned __int64 v663;
  __int64 v664;
  __int64 v665;
  __int64 v666;
  unsigned int v667;
  __int64 v668;
  __int64 v669;
  __int64 v670;
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
  _DWORD* v684;
  _DWORD* v685;
  __int64 v686;
  __int64 v687;
  __int64 v688;
  __int64 v689;
  __int64 v690;
  int v691;
  int v692;
  __int64 v693;
  int v694;
  __int64 v695;
  __int64 v696;
  _DWORD* v697;
  __int64 v698;
  __int64 v699;
  int v700;
  char v701;
  __int64 v702;
  char v703;
  int v704;
  __int64 v705;
  int v706;
  char v707;
  __int64 v708;
  char v709;
  int v710;
  __int64 v711;
  int v712;
  char v713;
  __int64 v714;
  char v715;
  int v716;
  __int64 v717;
  char v718;
  char v719;
  int* v720;
  int v721;
  __int64 v722;
  char v723;
  char v724;
  unsigned __int64 v725;
  unsigned __int64 v726;
  int v727;
  __int64 (***v728)();
  signed __int64 v729;
  __int64 v730;
  __int64 v731;
  __int64 v732;
  __int64 v733;
  __int64 v734;
  __int64 v735;
  unsigned __int64 v736;
  __int64 v737;
  __int64 v738;
  __int64 v739;
  unsigned __int64 v740;
  unsigned __int64 v741;
  unsigned __int64 v742;
  unsigned __int64 v743;
  __int64 v744;
  int v745;
  __int64 (***v746)();
  signed __int64 v747;
  __int64 v748;
  __int64 v749;
  __int64 v750;
  __int64 v751;
  __int64 v752;
  __int64 v753;
  __int64 v754;
  __int64 v755;
  char* v756;
  char* v757;
  char* v758;
  __int64 v759;
  char* v760;
  int v761;
  __int64 v762;
  __int64 v763;
  char* v764;
  __int64 v765;
  __int64 v766;
  __int64 v767;
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
  int v783;
  int v784;
  __int64 v785;
  int v786;
  __int64 v787;
  __int64 v788;
  _DWORD* v789;
  __int64 v790;
  __int64 v791;
  int v792;
  __int64 v793;
  int v794;
  int v795;
  __int64 v796;
  int v797;
  __int64 v798;
  int v799;
  int v800;
  __int64 v801;
  int v802;
  __int64 v803;
  int v804;
  int v805;
  __int64 v806;
  int* v807;
  int v808;
  __int64 v809;
  _DWORD* v810;
  _DWORD* v811;
  __int64 v812;
  __int64 v813;
  __int64 v814;
  __int64 v815;
  int v816;
  int v817;
  __int64 v818;
  int v819;
  __int64 v820;
  __int64 v821;
  _DWORD* v822;
  __int64 v823;
  __int64 v824;
  int v825;
  char v826;
  __int64 v827;
  char v828;
  int v829;
  __int64 v830;
  int v831;
  char v832;
  __int64 v833;
  char v834;
  int v835;
  __int64 v836;
  int v837;
  char v838;
  __int64 v839;
  char v840;
  int v841;
  __int64 v842;
  char v843;
  char v844;
  int* v845;
  int v846;
  __int64 v847;
  char v848;
  char v849;
  unsigned __int64 v850;
  unsigned __int64 v851;
  int v852;
  __int64 (***v853)();
  signed __int64 v854;
  __int64 v855;
  __int64 v856;
  __int64 v857;
  __int64 v858;
  __int64 v859;
  __int64 v860;
  unsigned __int64 v861;
  __int64 v862;
  __int64 v863;
  __int64 v864;
  unsigned __int64 v865;
  unsigned __int64 v866;
  unsigned __int64 v867;
  unsigned __int64 v868;
  __int64 v869;
  int v870;
  __int64 (***v871)();
  signed __int64 v872;
  __int64 v873;
  __int64 v874;
  __int64 v875;
  __int64 v876;
  __int64 v877;
  __int64 v878;
  __int64 v879;
  __int64 v880;
  char* v881;
  char* v882;
  char* v883;
  __int64 v884;
  char* v885;
  int v886;
  __int64 v887;
  __int64 v888;
  char* v889;
  __int64 v890;
  __int64 v891;
  __int64 v892;
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
  __int64* v906;
  __int64 v907;
  __int64 v908;
  __int64 v909;
  __int64 v910;
  __int64 v911;
  __int64 v912;
  int v913;
  int v914;
  __int64 v915;
  int v916;
  __int64 v917;
  __int64 v918;
  _DWORD* v919;
  __int64 v920;
  __int64 v921;
  int v922;
  __int64 v923;
  int v924;
  int v925;
  __int64 v926;
  int v927;
  __int64 v928;
  int v929;
  int v930;
  __int64 v931;
  int v932;
  __int64 v933;
  int v934;
  int v935;
  __int64 v936;
  int* v937;
  int v938;
  __int64 v939;
  __int64 v940;
  __int64 v941;
  __int64 v942;
  unsigned __int16* v943;
  __int64 v944;
  __int64 v945;
  __int64 v946;
  __int64 v947;
  __int64 v948;
  __int64 v949;
  __int64 v950;
  __int64 v951;
  __int64 v952;
  int v953;
  int v954;
  __int64 v955;
  int v956;
  __int64 v957;
  __int64 v958;
  _DWORD* v959;
  __int64 v960;
  __int64 v961;
  int v962;
  __int64 v963;
  int v964;
  int v965;
  __int64 v966;
  int v967;
  __int64 v968;
  int v969;
  int v970;
  __int64 v971;
  int v972;
  __int64 v973;
  int v974;
  int v975;
  __int64 v976;
  int* v977;
  int v978;
  __int64 v979;
  __int64 v980;
  __int64 v981;
  bool v982;
  __int64 v983;
  char v984;
  bool v990;
  __int64 v991;
  __int64 v992;
  unsigned __int64 v993;
  __int64 v994;
  __int64 v995;
  _DWORD* v996;
  _DWORD* v997;
  int v998;
  __int64 v999;
  __int64* result;
  _QWORD* v1001;
  __int64 v1002;
  _QWORD* v1003;
  __int64 v1004;
  __int64 v1005;
  __int64 v1006;
  __int64 v1007;
  __int64 v1008;
  __int64* v1009;
  __int64 v1010;
  __int64 v1011;
  __int64* v1012;
  __int64* v1013;
  __int64 v1014;
  __int64 v1015;
  __int64 v1016;
  __int64 v1017;
  __int64 v1018;
  __int64 v1019;
  __int64 v1020;
  int v1021;
  int v1022;
  __int64 v1023;
  int v1024;
  __int64 v1025;
  __int64 v1026;
  _DWORD* v1027;
  __int64 v1028;
  __int64 v1029;
  int v1030;
  __int64 v1031;
  int v1032;
  int v1033;
  __int64 v1034;
  int v1035;
  __int64 v1036;
  int v1037;
  int v1038;
  __int64 v1039;
  int v1040;
  __int64 v1041;
  int v1042;
  int v1043;
  __int64 v1044;
  int* v1045;
  int v1046;
  __int64 v1047;
  unsigned __int64 v1048;
  __int64 v1049;
  __int64 v1050;
  _QWORD* v1051;
  _QWORD* v1052;
  __int64 v1053;
  __int64 v1054;
  __int64 v1055;
  unsigned __int64 v1056;
  __int64 v1057;
  __int64 v1058;
  __int64 v1059;
  unsigned __int64* v1060;
  unsigned __int64* v1061;
  __int64 v1062;
  __int64* v1063;
  unsigned __int64 v1064;
  __int64 v1065;
  __int64 v1066;
  __int64 v1067;
  __int64 j;
  __int64 v1069;
  unsigned __int64* v1070;
  unsigned __int64 v1071;
  unsigned __int64 v1072;
  __int64 v1073;
  unsigned __int64 v1074;
  __int64 v1075;
  unsigned __int64 v1076;
  unsigned __int64 v1077;
  unsigned __int64 v1078;
  _QWORD* v1079;
  _QWORD* v1080;
  unsigned __int64 v1081;
  __int64 v1082;
  unsigned __int64 v1083;
  __int64** v1084;
  __int64* v1085;
  unsigned __int64 v1086;
  __int64 v1087;
  float v1088;
  float v1089;
  _BOOL8 v1090;
  unsigned __int64 v1091;
  unsigned __int64 v1092;
  unsigned __int64 v1093;
  __int64 v1094;
  __int64 v1095;
  _DWORD* v1096;
  _DWORD* v1097;
  __int64 v1098;
  _QWORD* v1099;
  _QWORD* v1100;
  __int64 v1101;
  unsigned __int64 v1102;
  unsigned __int64 v1103;
  __int64 v1104;
  unsigned __int64 v1105;
  __int64 v1106;
  __int64 v1107;
  unsigned int** v1108;
  unsigned int** v1109;
  unsigned int* v1110;
  __int64 v1111;
  _QWORD* v1112;
  unsigned __int64* v1113;
  unsigned __int64* v1114;
  __int64 v1115;
  __int64 v1116;
  __int64 v1117;
  unsigned __int64 v1118;
  __int64 v1119;
  __int64 v1120;
  __int64 v1121;
  __int64 v1122;
  __int64 v1123;
  unsigned __int64 v1124;
  unsigned __int64 v1125;
  __int64* v1126;
  unsigned __int64 v1127;
  unsigned __int64 v1128;
  unsigned __int64 v1129;
  unsigned __int64 v1130;
  _DWORD* v1131;
  _DWORD* v1132;
  __int64 v1133;
  __int64 v1134;
  __int64 v1135;
  unsigned __int64 v1136;
  __int64 v1137;
  __int64 v1138;
  __int64 v1139;
  __int64 (**v1140)();
  unsigned __int64 v1141;
  unsigned __int64 v1142;
  unsigned __int64 v1143;
  __int64 (***v1144)();
  __int64 (***v1145)();
  __int64 v1146;
  __int64 v1147;
  __int64 v1148;
  __int64 v1149;
  __int64 v1150;
  __int64 v1151;
  __int64 v1152;

  v1112 = (_QWORD*)primeEm;
  v1142 = 0;
  v1143 = 0;
  v1140 = nullptr;
  v1141 = 0;
  LODWORD(v1144) = 1065353216;
  v4 = *(__int64**)(*GameData_212c880[0] + 64);
  v3 = *(__int64**)(*GameData_212c880[0] + 72);
  if (v4 == v3) {
    goto LABEL_131;
  }
  v5 = 255;
  v6 = 0;
  v7 = 0;
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v1126 = *(__int64**)(*GameData_212c880[0] + 72);
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
    v13 = v1141;
    v1133 = v7;
    if (v1141 != 0) {
      v14 = v1141 - 1;
      if ((v1141 & (v1141 - 1)) != 0) {
        v1 = *(unsigned __int8*)(v10 + 109);
        if (v1141 <= v2) {
          v1 = (unsigned int)v2 % (unsigned int)v1141;
        }
      }
      else {
        v1 = ((_DWORD)v1141 - 1) & (unsigned int)v2;
      }
      v15 = (unsigned __int64*)v1140[v1];
      if (v15 != nullptr) {
        v16 = *v15;
        if (*v15 != 0) {
          if ((v1141 & v14) == 0) {
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
                v42 = v5;
                v43 = v6;
                goto LABEL_111;
              }
            }
            else {
              if (v17 >= v1141) {
                v17 %= v1141;
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
    primeEm = fw_memory_HeapManager_Allocate(*v8, 48, 16, 0);
    v19 = v1143;
    v20 = *(float*)&v1144;
    v16 = primeEm;
    *(_QWORD*)primeEm = 0;
    *(_QWORD*)(primeEm + 8) = v2;
    *(_DWORD*)(primeEm + 16) = v2;
    *(_QWORD*)(primeEm + 24) = 0;
    *(_QWORD*)(primeEm + 32) = 0;
    *(_QWORD*)(primeEm + 40) = 0;
    v21 = (float)(v19 + 1);
    if (v13 == 0 || (float)(v20 * (float)v13) < v21) {
      v22 = v21 / v20;
      v23 = (v13 & (v13 - 1)) != 0;
      if (v13 < 3) {
        v23 = true;
      }
      v24 = v23 | (2 * v13);
      v25 = vcvtps_u64_f32(v22);
      if (v24 <= v25) {
        v26 = v25;
      }
      else {
        v26 = v24;
      }
      if (v26 == 1) {
        v26 = 2;
      }
      else if ((v26 & (v26 - 1)) != 0) {
        primeEm = std___1___next_prime(v26);
        v13 = v1141;
        v26 = primeEm;
      }
      if (v26 <= v13) {
        if (v26 >= v13) {
          goto LABEL_97;
        }
        primeEm = vcvtps_u64_f32((float)v1143 / *(float*)&v1144);
        if (v13 < 3 || (v13 & (v13 - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
        }
        else {
          v30 = 1LL << -(char)__clz(primeEm - 1);
          if (primeEm >= 2) {
            primeEm = v30;
          }
        }
        if (v26 <= primeEm) {
          v26 = primeEm;
        }
        if (v26 >= v13) {
          goto LABEL_97;
        }
        if (v26 == 0) {
          v44 = v1140;
          v1140 = nullptr;
          if (v44 != nullptr) {
            v45 = 128;
            if (*(_QWORD*)(*v8 + 200LL) == 0) {
              v45 = 56;
            }
            primeEm = nn_mem_StandardAllocator_Free(*v8 + v45, v44);
          }
          v1141 = 0;
          goto LABEL_97;
        }
      }
      if (v26 >> 61 != 0) {
        goto LABEL_1188;
      }
      primeEm = fw_memory_HeapManager_Allocate(*v8, 8 * v26, 16, 0);
      v27 = v1140;
      v1140 = (__int64 (**)())primeEm;
      if (v27 != nullptr) {
        v28 = 128;
        if (*(_QWORD*)(*v8 + 200LL) == 0) {
          v28 = 56;
        }
        primeEm = nn_mem_StandardAllocator_Free(*v8 + v28, v27);
      }
      v1141 = v26;
      if (v26 >= 8) {
        v29 = 0;
        do {
          v1140[v29] = nullptr;
          v1140[v29 + 1] = nullptr;
          v1140[v29 + 2] = nullptr;
          v1140[v29 + 3] = nullptr;
          v1140[v29 + 4] = nullptr;
          v1140[v29 + 5] = nullptr;
          v1140[v29 + 6] = nullptr;
          v31 = &v1140[v29];
          v29 += 8;
          v31[7] = nullptr;
        } while ((v26 & 0x1FFFFFFFFFFFFFF8LL) != v29);
      }
      else {
        v29 = 0;
      }
      v32 = v26 & 7;
      if ((v26 & 7) != 0) {
        v33 = v29;
        do {
          --v32;
          v1140[v33++] = nullptr;
        } while (v32 != 0);
      }
      v34 = (__int64 (*)())v1142;
      if (v1142 == 0) {
        goto LABEL_97;
      }
      v35 = *(_QWORD*)(v1142 + 8);
      v36 = v26 - 1;
      if ((v26 & (v26 - 1)) == 0) {
        v39 = v35 & v36;
        v1140[v39] = (__int64 (*)())&v1142;
        while (1) {
          v40 = *(__int64 (**)())v34;
          if (*(_QWORD*)v34 == 0) {
            break;
          }
          v41 = *((_QWORD*)v40 + 1) & v36;
          if (v41 == v39) {
            v34 = *(__int64 (**)())v34;
          }
          else if (v1140[v41] != nullptr) {
            *(_QWORD*)v34 = *(_QWORD*)v40;
            *(_QWORD*)v40 = *(_QWORD*)v1140[v41];
            *(_QWORD*)v1140[v41] = v40;
          }
          else {
            v1140[v41] = v34;
            v34 = v40;
            v39 = v41;
          }
        }
      LABEL_97:
        v13 = v1141;
        if ((v1141 & (v1141 - 1)) != 0) {
          if (v1141 <= v2) {
            v1 = v2 % v1141;
          }
          else {
            v1 = v2;
          }
        }
        else {
          v1 = ((_DWORD)v1141 - 1) & (unsigned int)v2;
        }
        goto LABEL_102;
      }
      if (v35 >= v26) {
        v35 %= v26;
      }
      v1140[v35] = (__int64 (*)())&v1142;
      v37 = *(__int64 (**)())v34;
      if (*(_QWORD*)v34 == 0) {
        goto LABEL_97;
      }
      while (1) {
        v38 = *((_QWORD*)v37 + 1);
        if (v38 >= v26) {
          v38 %= v26;
        }
        if (v38 != v35) {
          if (v1140[v38] == nullptr) {
            v1140[v38] = v34;
            goto LABEL_73;
          }
          *(_QWORD*)v34 = *(_QWORD*)v37;
          *(_QWORD*)v37 = *(_QWORD*)v1140[v38];
          *(_QWORD*)v1140[v38] = v37;
          v37 = v34;
        }
        v38 = v35;
      LABEL_73:
        v34 = v37;
        v37 = *(__int64 (**)())v37;
        v35 = v38;
        if (v37 == nullptr) {
          goto LABEL_97;
        }
      }
    }
  LABEL_102:
    v46 = v1140;
    v47 = v1140[v1];
    if (v47 != nullptr) {
      *(_QWORD*)v16 = *(_QWORD*)v47;
      *(_QWORD*)v47 = v16;
    }
    else {
      v48 = v1142;
      v1142 = v16;
      *(_QWORD*)v16 = v48;
      v46[v1] = (__int64 (*)())&v1142;
      if (*(_QWORD*)v16 != 0) {
        v49 = *(_QWORD*)(*(_QWORD*)v16 + 8LL);
        if ((v13 & (v13 - 1)) != 0) {
          if (v49 >= v13) {
            v49 %= v13;
          }
        }
        else {
          v49 &= v13 - 1;
        }
        v1140[v49] = (__int64 (*)())v16;
      }
    }
    v42 = v5;
    v43 = v6;
    ++v1143;
  LABEL_111:
    v51 = *(_QWORD**)(v16 + 32);
    v50 = *(_QWORD*)(v16 + 40);
    if ((unsigned __int64)v51 < v50) {
      *v51 = v10;
      v9 = (__int64)(v51 + 1);
    }
    else {
      v1 = *(_QWORD*)(v16 + 24);
      v2 = (unsigned __int64)v51 - v1;
      v52 = (__int64)((__int64)v51 - v1) >> 3;
      v53 = v52 + 1;
      if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
        GameRoutine_705570();
      }
      v54 = v50 - v1;
      if (v54 >> 2 > v53) {
        v53 = v54 >> 2;
      }
      if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
        v55 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v55 = v53;
      }
      if (v55 != 0) {
        if (v55 >> 61 != 0) {
        LABEL_1188:
          GameRoutine_60a210(primeEm);
        }
        v56 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
      }
      else {
        v56 = 0;
      }
      v57 = v56 + 8 * v55;
      v58 = (char*)v51 - v1;
      v59 = v56 + v2 - 8 * v52;
      *(_QWORD*)(v56 + v2) = v10;
      v9 = v56 + v2 + 8;
      primeEm = memcpy(v59, v1, v58);
      *(_QWORD*)(v16 + 24) = v59;
      *(_QWORD*)(v16 + 32) = v9;
      *(_QWORD*)(v16 + 40) = v57;
      v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v1 != 0) {
        v60 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v60 = 56;
        }
        primeEm = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v1);
      }
    }
    *(_QWORD*)(v16 + 32) = v9;
    v6 = v43;
    v5 = v42;
    v3 = v1126;
    v7 = v1133;
  LABEL_5:
    ++v4;
  } while (v4 != v3);
  v61 = (_QWORD*)v1142;
  v62 = v1143 == 0 || v1142 == 0;
  if (!v62) {
    do {
      v1009 = (__int64*)v61[3];
      v2 = v61[4];
      while (v1009 != (__int64*)v2) {
        v1010 = *v1009;
        v1011 = *(_QWORD*)(*v1009 + 24);
        if (v1011 != 0) {
          v1012 = (__int64*)v61[3];
          v1013 = (__int64*)v61[4];
          if (v1012 != v1013) {
            while (1) {
              v1014 = *v1012;
              if (*v1012 == v1010) {
                goto LABEL_1017;
              }
              if (v1014 != 0) {
                LODWORD(v1014) = *(_WORD*)(v1014 + 16) & 0xFFF;
              }
              LODWORD(v1152) = v1014;
              primeEm = UnitSkillList_84cc00(v1011 + 704, &v1152, 0);
              if ((primeEm & 1) != 0) {
                v1015 = *(_QWORD*)(v1011 + 744);
                v1016 = *(_QWORD*)(v1011 + 736);
                *(_QWORD*)(v1011 + 784) = 0;
                *(_QWORD*)(v1011 + 792) = 0;
                v1017 = v1015 - v1016;
                if ((int)((unsigned __int64)(v1015 - v1016) >> 2) >= 1) {
                  v1018 = (int)(v1017 >> 2);
                  v1019 = v1018 <= 1 ? 1LL : (int)(v1017 >> 2);
                  v1020 = *GameData_212c880[0];
                  if (v1018 >= 4) {
                    break;
                  }
                  v1021 = 0;
                  v1022 = 0;
                  v1023 = 0;
                  v1024 = 0;
                  v1025 = 0;
                  v1026 = v1019 & 3;
                  if (v1026 != 0) {
                    goto LABEL_1032;
                  }
                }
              }
            LABEL_1017:
              if (++v1012 == v1013) {
                goto LABEL_1012;
              }
            }
            v1027 = (_DWORD*)(v1016 + 8);
            v1028 = 0;
            v1021 = 0;
            v1022 = 0;
            v1023 = 0;
            v1024 = 0;
            do {
              v1028 -= 4;
              v1029 = *(_QWORD*)(*(_QWORD*)(v1020 + 64) +
                                 8LL * (*(v1027 - 2) & 0xFFF));
              v1030 = v1024 | (1 << *(_BYTE*)(v1029 + 104));
              *(_WORD*)(v1011 + 784) = v1030;
              v1031 = (1LL << *(_BYTE*)(v1029 + 250)) | v1023;
              *(_QWORD*)(v1011 + 792) = v1031;
              v1032 = (1 << *(_BYTE*)(v1029 + 115)) | v1022;
              *(_DWORD*)(v1011 + 788) = v1032;
              v1033 =
                  *(unsigned __int16*)(*(_QWORD*)(v1029 + 24) + 1064LL) | v1021;
              *(_WORD*)(v1011 + 786) = v1033;
              v1034 = *(_QWORD*)(*(_QWORD*)(v1020 + 64) +
                                 8LL * (*(v1027 - 1) & 0xFFF));
              v1035 = v1030 | (1 << *(_BYTE*)(v1034 + 104));
              *(_WORD*)(v1011 + 784) = v1035;
              v1036 = (1LL << *(_BYTE*)(v1034 + 250)) | v1031;
              *(_QWORD*)(v1011 + 792) = v1036;
              v1037 = (1 << *(_BYTE*)(v1034 + 115)) | v1032;
              *(_DWORD*)(v1011 + 788) = v1037;
              v1038 =
                  *(unsigned __int16*)(*(_QWORD*)(v1034 + 24) + 1064LL) | v1033;
              *(_WORD*)(v1011 + 786) = v1038;
              v1039 =
                  *(_QWORD*)(*(_QWORD*)(v1020 + 64) + 8LL * (*v1027 & 0xFFF));
              v1040 = v1035 | (1 << *(_BYTE*)(v1039 + 104));
              *(_WORD*)(v1011 + 784) = v1040;
              v1041 = (1LL << *(_BYTE*)(v1039 + 250)) | v1036;
              *(_QWORD*)(v1011 + 792) = v1041;
              v1042 = (1 << *(_BYTE*)(v1039 + 115)) | v1037;
              *(_DWORD*)(v1011 + 788) = v1042;
              v1043 =
                  *(unsigned __int16*)(*(_QWORD*)(v1039 + 24) + 1064LL) | v1038;
              *(_WORD*)(v1011 + 786) = v1043;
              LOWORD(v1039) = v1027[1];
              v1027 += 4;
              v1044 = *(_QWORD*)(*(_QWORD*)(v1020 + 64) + 8 * (v1039 & 0xFFF));
              v1024 = v1040 | (1 << *(_BYTE*)(v1044 + 104));
              *(_WORD*)(v1011 + 784) = v1024;
              v1023 = (1LL << *(_BYTE*)(v1044 + 250)) | v1041;
              *(_QWORD*)(v1011 + 792) = v1023;
              primeEm = (unsigned int)(1 << *(_BYTE*)(v1044 + 115));
              v1022 = primeEm | v1042;
              *(_DWORD*)(v1011 + 788) = v1022;
              v1021 =
                  *(unsigned __int16*)(*(_QWORD*)(v1044 + 24) + 1064LL) | v1043;
              *(_WORD*)(v1011 + 786) = v1021;
            } while (-(__int64)(v1019 & 0xFFFFFFFFFFFFFFFCLL) != v1028);
            v1025 = -v1028;
            v1026 = v1019 & 3;
            if (v1026 == 0) {
              goto LABEL_1017;
            }
          LABEL_1032:
            v1045 = (int*)(v1016 + 4 * v1025);
            do {
              v1046 = *v1045++;
              --v1026;
              v1047 =
                  *(_QWORD*)(*(_QWORD*)(v1020 + 64) + 8LL * (v1046 & 0xFFF));
              v1024 |= 1 << *(_BYTE*)(v1047 + 104);
              *(_WORD*)(v1011 + 784) = v1024;
              v1023 |= 1LL << *(_BYTE*)(v1047 + 250);
              *(_QWORD*)(v1011 + 792) = v1023;
              v1022 |= 1 << *(_BYTE*)(v1047 + 115);
              *(_DWORD*)(v1011 + 788) = v1022;
              v1021 |= *(unsigned __int16*)(*(_QWORD*)(v1047 + 24) + 1064LL);
              *(_WORD*)(v1011 + 786) = v1021;
            } while (v1026 != 0);
            goto LABEL_1017;
          }
        }
      LABEL_1012:
        ++v1009;
      }
      v61 = (_QWORD*)*v61;
    } while (v61 != nullptr);
  }
LABEL_131:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca490,
                            memory_order_acquire) &
       1) == 0) {
    primeEm = __cxa_guard_acquire(&GameData_21ca490);
    if ((_DWORD)primeEm != 0) {
      GameData_21ca460 = (__int64)GameData_1f92b40;
      GameData_21ca480 = (__int64)&GameData_21ca460;
      GameRoutine_2b0(GameRoutine_703310, &GameData_21ca460, &GameData_1f50948);
      primeEm = __cxa_guard_release(&GameData_21ca490);
    }
  }
  v63 = *(__int64**)(*GameData_212c880[0] + 64);
  v64 = *(__int64**)(*GameData_212c880[0] + 72);
  for (i = (_QWORD*)fw_memory_g_heap_manager_ptr; v63 != v64; ++v63) {
    v2 = *(_QWORD*)(*v63 + 24);
    if (v2 != 0) {
      v66 = GameData_21ca480;
      v1152 = *v63;
      if (GameData_21ca480 == 0) {
        goto LABEL_138;
      }
      primeEm = (*(__int64 (**)(__int64, __int64*))(
          *(_QWORD*)GameData_21ca480 + 48LL))(GameData_21ca480, &v1152);
      *(_QWORD*)(v2 + 1088) = primeEm;
    }
  }
  v67 = (unsigned __int64*)v1142;
  if (v1142 != 0) {
    do {
      v2 = *v67;
      v69 = v67[3];
      if (v69 != 0) {
        v70 = *i;
        v67[4] = v69;
        if (*(_QWORD*)(v70 + 200) != 0) {
          v71 = 128;
        }
        else {
          v71 = 56;
        }
        nn_mem_StandardAllocator_Free(v70 + v71, v69);
      }
      if (*(_QWORD*)(*i + 200LL) != 0) {
        v68 = 128;
      }
      else {
        v68 = 56;
      }
      primeEm = nn_mem_StandardAllocator_Free(*i + v68, v67);
      v67 = (unsigned __int64*)v2;
    } while (v2 != 0);
  }
  v72 = v1140;
  v1140 = nullptr;
  if (v72 != nullptr) {
    v73 = 128;
    if (*(_QWORD*)(*i + 200LL) == 0) {
      v73 = 56;
    }
    primeEm = nn_mem_StandardAllocator_Free(*i + v73, v72);
  }
  v74 = GameData_212c880[0];
  v75 = *GameData_212c880[0];
  v76 = *(unsigned __int64**)(*GameData_212c880[0] + 64);
  v77 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
  if (v76 != v77) {
    v1113 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
    while (1) {
      v78 = *v76;
      v1114 = v76;
      v79 = *(_QWORD*)(*v76 + 24);
      v1118 = v78;
      *(_DWORD*)v79 = *(_DWORD*)v79 & 0xFFFFF000 | *(_WORD*)(*v76 + 16) & 0xFFF;
      v80 = (*(unsigned __int16*)(v78 + 332) | *(unsigned __int16*)(v78 + 330) |
             *(unsigned __int16*)(v78 + 334) | *(unsigned __int16*)(v78 + 336) |
             *(unsigned __int16*)(v78 + 338) | *(unsigned __int16*)(v78 + 340) |
             *(unsigned __int16*)(v78 + 342) | *(unsigned __int16*)(v78 + 344) |
             *(unsigned __int16*)(v78 + 346)) != 0;
      *(_BYTE*)(v79 + 1115) = v80;
      v81 = *(float*)(v78 + 348) != 0x1.0000000000000p+0f;
      if (*(float*)(v78 + 352) != 0x1.0000000000000p+0f) {
        v81 = true;
      }
      if (*(float*)(v78 + 356) != 0x1.0000000000000p+0f) {
        v81 = true;
      }
      if (*(float*)(v78 + 360) != 0x1.0000000000000p+0f) {
        v81 = true;
      }
      if (*(float*)(v78 + 364) != 0x1.0000000000000p+0f) {
        v81 = true;
      }
      if (*(float*)(v78 + 368) != 0x1.0000000000000p+0f) {
        v81 = true;
      }
      if (*(float*)(v78 + 372) != 0x1.0000000000000p+0f) {
        v81 = true;
      }
      v82 = v81 || *(float*)(v78 + 376) != 0x1.0000000000000p+0f ||
            *(float*)(v78 + 380) != 0x1.0000000000000p+0f;
      *(_BYTE*)(v79 + 1114) = v82;
      *(_BYTE*)(v79 + 1113) = v80 || v82;
      v83 = (*(unsigned __int16*)(v78 + 386) | *(unsigned __int16*)(v78 + 384) |
             *(unsigned __int16*)(v78 + 388) | *(unsigned __int16*)(v78 + 390) |
             *(unsigned __int16*)(v78 + 392) | *(unsigned __int16*)(v78 + 394) |
             *(unsigned __int16*)(v78 + 396) | *(unsigned __int16*)(v78 + 398) |
             *(unsigned __int16*)(v78 + 400) | *(unsigned __int16*)(v78 + 402) |
             *(unsigned __int16*)(v78 + 404)) != 0;
      *(_BYTE*)(v79 + 1118) = v83;
      v84 = (*(unsigned __int16*)(v78 + 454) | *(unsigned __int16*)(v78 + 452) |
             *(unsigned __int16*)(v78 + 456) | *(unsigned __int16*)(v78 + 458) |
             *(unsigned __int16*)(v78 + 460) | *(unsigned __int16*)(v78 + 462) |
             *(unsigned __int16*)(v78 + 464) | *(unsigned __int16*)(v78 + 466) |
             *(unsigned __int16*)(v78 + 468) | *(unsigned __int16*)(v78 + 470) |
             *(unsigned __int16*)(v78 + 472)) != 0;
      *(_BYTE*)(v79 + 1119) = v84;
      v85 = v83 || v84;
      v86 = *(float*)(v78 + 408) != 0x1.0000000000000p+0f;
      if (*(float*)(v78 + 412) != 0x1.0000000000000p+0f) {
        v86 = true;
      }
      if (*(float*)(v78 + 416) != 0x1.0000000000000p+0f) {
        v86 = true;
      }
      if (*(float*)(v78 + 420) != 0x1.0000000000000p+0f) {
        v86 = true;
      }
      if (*(float*)(v78 + 424) != 0x1.0000000000000p+0f) {
        v86 = true;
      }
      if (*(float*)(v78 + 428) != 0x1.0000000000000p+0f) {
        v86 = true;
      }
      if (*(float*)(v78 + 432) != 0x1.0000000000000p+0f) {
        v86 = true;
      }
      v87 = *(float*)(v78 + 436) != 0x1.0000000000000p+0f ||
            *(float*)(v78 + 440) != 0x1.0000000000000p+0f;
      v62 = *(float*)(v78 + 444) == 0x1.0000000000000p+0f;
      v88 = *(float*)(v78 + 448);
      *(_DWORD*)(v79 + 4) = 0;
      *(_DWORD*)(v79 + 56) = 0;
      *(_QWORD*)(v79 + 112) = 0;
      *(_QWORD*)(v79 + 120) = 0;
      v89 = !v62;
      v90 = v86 || v87 || v89 || v88 != 0x1.0000000000000p+0f;
      *(_BYTE*)(v79 + 1116) = v85 || v90;
      v91 = *(_QWORD*)(v79 + 32);
      *(_BYTE*)(v79 + 1117) = v90;
      *(_QWORD*)(v79 + 40) = v91;
      *(_QWORD*)(v79 + 72) = *(_QWORD*)(v79 + 64);
      if (*(_BYTE*)(v78 + 560) != 0) {
        break;
      }
      v92 = *(_QWORD*)(v78 + 552);
      if (v92 != 0) {
        LODWORD(v92) = *(_WORD*)(v92 + 16) & 0xFFF;
      }
      *(_DWORD*)(v79 + 4) = v92;
    LABEL_188:
      v93 = v1118;
      *(_QWORD*)(v79 + 8) = 0;
      v94 = *(_QWORD*)(v1118 + 720);
      *(_QWORD*)(v79 + 16) = 0;
      if (v94 != 0) {
        v95 = *(unsigned __int16*)(v94 + 16);
        *(_DWORD*)(v79 + 20) = 1;
        *(_WORD*)(v79 + 16) = v95;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v95) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v96 = game_map_MapRandom_instance__ptr[0];
          v97 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v98 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v99 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v96 + 1) = v97;
          v100 = (v99 >> 8) ^ (v98 >> 19) ^ v99 ^ v98;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v96) = v98;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v96 + 4) = v100;
          primeEm = nn_os_UnlockMutex(&game_g_random_mutex);
          *(_DWORD*)(v79 + 20) =
              *(_DWORD*)(v79 + 20) & 0xFFFFC00F |
              (16 *
               (((16 * (v100 - 1000 * ((v100 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      v101 = *(_QWORD*)(v1118 + 744);
      *(_QWORD*)(v79 + 24) = 0;
      if (v101 != 0) {
        v102 = *(unsigned __int16*)(v101 + 16);
        *(_DWORD*)(v79 + 28) = 1;
        *(_WORD*)(v79 + 24) = v102;
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8 * v102) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v103 = game_map_MapRandom_instance__ptr[0];
          v104 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL));
          v105 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                            (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v106 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                 (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v103 + 1) = v104;
          v107 = (v106 >> 8) ^ (v105 >> 19) ^ v106 ^ v105;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v103) = v105;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v103 + 4) = v107;
          primeEm = nn_os_UnlockMutex(&game_g_random_mutex);
          *(_DWORD*)(v79 + 28) =
              *(_DWORD*)(v79 + 28) & 0xFFFFC00F |
              (16 *
               (((16 * (v107 - 1000 * ((v107 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      *(_WORD*)(v79 + 1064) = 0;
      v108 = *(unsigned __int16*)(v1118 + 288);
      if (*(_WORD*)(v1118 + 288) != 0) {
        if (v108 < 8) {
          v109 = 0;
          v110 = 0;
          v111 = v108 & 7;
          if (v111 == 0) {
            goto LABEL_217;
          }
          do {
          LABEL_216:
            --v111;
            v154 = *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v109++);
            v110 |= 1 << v154;
            *(_WORD*)(v79 + 1064) = v110;
          } while (v111 != 0);
          goto LABEL_217;
        }
        v145 = 7;
        v110 = 0;
        do {
          v146 = v110 | (1 << *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145 - 7));
          *(_WORD*)(v79 + 1064) = v146;
          v147 = v146 | (1 << *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145 - 6));
          *(_WORD*)(v79 + 1064) = v147;
          v148 = v147 | (1 << *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145 - 5));
          *(_WORD*)(v79 + 1064) = v148;
          v149 = v148 | (1 << *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145 - 4));
          *(_WORD*)(v79 + 1064) = v149;
          v150 = v149 | (1 << *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145 - 3));
          *(_WORD*)(v79 + 1064) = v150;
          v151 = v150 | (1 << *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145 - 2));
          *(_WORD*)(v79 + 1064) = v151;
          v152 = v151 | (1 << *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145 - 1));
          *(_WORD*)(v79 + 1064) = v152;
          v153 = *(_BYTE*)(*(_QWORD*)(v1118 + 296) + v145);
          v145 += 8;
          v110 = v152 | (1 << v153);
          *(_WORD*)(v79 + 1064) = v110;
        } while (v145 - ((unsigned __int16)v108 & 0xFFF8) != 7);
        v109 = v145 - 7;
        v111 = v108 & 7;
        if (v111 != 0) {
          goto LABEL_216;
        }
      }
    LABEL_217:
      v155 = *(_QWORD*)(v79 + 808);
      v156 = *(_QWORD*)(v79 + 800);
      if (v156 != v155) {
        do {
          v160 = *(_QWORD*)(v155 - 40);
          if (v160 != 0) {
            *(_QWORD*)(v155 - 32) = v160;
            v161 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v161 = 128;
            }
            primeEm = nn_mem_StandardAllocator_Free(*i + v161, v160);
          }
          v162 = *(_QWORD*)(v155 - 64);
          if (v162 != 0) {
            *(_QWORD*)(v155 - 56) = v162;
            v163 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v163 = 128;
            }
            primeEm = nn_mem_StandardAllocator_Free(*i + v163, v162);
          }
          v164 = v155 - 96;
          v165 = *(_QWORD*)(v155 - 96);
          if (v165 != 0) {
            *(_QWORD*)(v155 - 88) = v165;
            v166 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v166 = 128;
            }
            primeEm = nn_mem_StandardAllocator_Free(*i + v166, v165);
          }
          v155 -= 96;
        } while (v164 != v156);
      }
      *(_QWORD*)(v79 + 808) = v156;
      v157 = *(unsigned __int16*)(v1118 + 136);
      v158 = GameData_212c880[0];
      if (*(_WORD*)(v1118 + 136) != 0) {
        v159 = 0;
        v1120 = *(unsigned __int16*)(v1118 + 136);
        do {
          v167 = (unsigned __int16*)(*(_QWORD*)(v93 + 144) + 16 * v159);
          if (*((_QWORD*)v167 + 1) != 0) {
            LODWORD(v1143) = 0;
            v1141 = 0;
            v1142 = 0;
            v1140 = nullptr;
            v1144 = nullptr;
            v1145 = nullptr;
            v1146 = 0;
            v1147 = 0;
            v1148 = 0;
            v1149 = 0;
            v1150 = 0;
            v1151 = 0;
            v168 = *v167;
            if (*v167 != 0) {
              v169 = 0;
              while (1) {
                v170 = *(_QWORD*)(*((_QWORD*)v167 + 1) + 16 * v169 + 8);
                if (v170 != 0) {
                  LODWORD(v170) = *(_WORD*)(v170 + 16) & 0xFFF;
                }
                LODWORD(v1152) = v170;
                primeEm = UnitSkillList_84cc00(&v1140, &v1152, 1);
                if ((primeEm & 1) != 0) {
                  v1150 = 0;
                  v1151 = 0;
                  v171 = (char*)v1145 - (char*)v1144;
                  if ((int)((unsigned __int64)((char*)v1145 - (char*)v1144) >>
                            2) < 1) {
                    goto LABEL_237;
                  }
                  v172 = *v158;
                  v173 = (int)(v171 >> 2);
                  v174 = v173 <= 1 ? 1LL : (int)(v171 >> 2);
                  if (v173 >= 4) {
                    break;
                  }
                  v175 = 0;
                  v176 = 0;
                  v177 = 0;
                  v178 = 0;
                  v179 = 0;
                  v180 = v174 & 3;
                  if (v180 != 0) {
                    goto LABEL_251;
                  }
                }
              LABEL_237:
                if (++v169 == v168) {
                  goto LABEL_254;
                }
              }
              v181 = v1144 + 1;
              v182 = 0;
              v175 = 0;
              v176 = 0;
              v177 = 0;
              v178 = 0;
              do {
                v182 -= 4;
                v183 = *(_QWORD*)(*(_QWORD*)(v172 + 64) +
                                  8LL * (*(v181 - 2) & 0xFFF));
                v184 = v178 | (1 << *(_BYTE*)(v183 + 104));
                v185 = *(_BYTE*)(v183 + 250);
                LOWORD(v1150) = v184;
                v186 = (1LL << v185) | v177;
                v187 = *(_BYTE*)(v183 + 115);
                v1151 = v186;
                HIDWORD(v1150) = (1 << v187) | v176;
                v188 =
                    *(unsigned __int16*)(*(_QWORD*)(v183 + 24) + 1064LL) | v175;
                WORD1(v1150) = v188;
                v189 = *(_QWORD*)(*(_QWORD*)(v172 + 64) +
                                  8LL * (*(v181 - 1) & 0xFFF));
                v190 = v184 | (1 << *(_BYTE*)(v189 + 104));
                v191 = *(_BYTE*)(v189 + 250);
                LOWORD(v1150) = v190;
                v192 = (1LL << v191) | v186;
                v193 = *(_BYTE*)(v189 + 115);
                v1151 = v192;
                HIDWORD(v1150) |= 1 << v193;
                v194 =
                    *(unsigned __int16*)(*(_QWORD*)(v189 + 24) + 1064LL) | v188;
                WORD1(v1150) = v194;
                v195 =
                    *(_QWORD*)(*(_QWORD*)(v172 + 64) + 8LL * (*v181 & 0xFFF));
                v196 = v190 | (1 << *(_BYTE*)(v195 + 104));
                v197 = *(_BYTE*)(v195 + 250);
                LOWORD(v1150) = v196;
                v198 = (1LL << v197) | v192;
                v199 = *(_BYTE*)(v195 + 115);
                v1151 = v198;
                HIDWORD(v1150) |= 1 << v199;
                v200 =
                    *(unsigned __int16*)(*(_QWORD*)(v195 + 24) + 1064LL) | v194;
                WORD1(v1150) = v200;
                LOWORD(v195) = v181[1];
                v181 += 4;
                v201 = *(_QWORD*)(*(_QWORD*)(v172 + 64) + 8 * (v195 & 0xFFF));
                v178 = v196 | (1 << *(_BYTE*)(v201 + 104));
                v202 = *(_BYTE*)(v201 + 250);
                LOWORD(v1150) = v178;
                v177 = (1LL << v202) | v198;
                v203 = *(_BYTE*)(v201 + 115);
                v1151 = v177;
                primeEm = (unsigned int)(1 << v203);
                v176 = primeEm | HIDWORD(v1150);
                HIDWORD(v1150) |= primeEm;
                v175 =
                    *(unsigned __int16*)(*(_QWORD*)(v201 + 24) + 1064LL) | v200;
                WORD1(v1150) = v175;
              } while (-(__int64)(v174 & 0xFFFFFFFFFFFFFFFCLL) != v182);
              v179 = -v182;
              v180 = v174 & 3;
              if (v180 == 0) {
                goto LABEL_237;
              }
            LABEL_251:
              v204 = (int*)v1144 + v179;
              do {
                v205 = *v204++;
                --v180;
                v206 = *(_QWORD*)(*(_QWORD*)(v172 + 64) + 8LL * (v205 & 0xFFF));
                v178 |= 1 << *(_BYTE*)(v206 + 104);
                v207 = *(_BYTE*)(v206 + 250);
                LOWORD(v1150) = v178;
                v177 |= 1LL << v207;
                v208 = *(_BYTE*)(v206 + 115);
                v1151 = v177;
                v176 |= 1 << v208;
                HIDWORD(v1150) = v176;
                v175 |= *(unsigned __int16*)(*(_QWORD*)(v206 + 24) + 1064LL);
                WORD1(v1150) = v175;
              } while (v180 != 0);
              goto LABEL_237;
            }
          LABEL_254:
            v209 = *(_QWORD*)(v79 + 808);
            v210 = *(_QWORD*)(v79 + 816);
            v1134 = v159;
            if (v209 >= v210) {
              v222 = *(_QWORD*)(v79 + 800);
              v223 = v209 - v222;
              v224 = 1 - 0x5555555555555555LL * ((__int64)(v209 - v222) >> 5);
              if (v224 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v225 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v210 - v222) >> 5);
              if (2 * v225 > v224) {
                v224 = 2 * v225;
              }
              if (v225 >= 0x155555555555555LL) {
                v226 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v226 = v224;
              }
              if (v226 != 0) {
                if (v226 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                primeEm = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v226, 16, 0);
                v227 = primeEm;
              }
              else {
                v227 = 0;
              }
              v228 = v227 + v223;
              *(_DWORD*)(v228 + 24) = 0;
              *(_QWORD*)(v228 + 8) = 0;
              *(_QWORD*)(v228 + 16) = 0;
              *(_QWORD*)v228 = 0;
              if ((__int64 (***)())(v227 + v223) != &v1140) {
                primeEm = GameRoutine_7fb7c0(v227 + v223);
              }
              v229 = v1143;
              *(_QWORD*)(v228 + 32) = 0;
              *(_QWORD*)(v228 + 40) = 0;
              *(_QWORD*)(v228 + 48) = 0;
              *(_DWORD*)(v228 + 24) = v229;
              v230 = v1144;
              v231 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v231 < 0) {
                  goto LABEL_1186;
                }
                v232 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v233 = v232 + v231;
                *(_QWORD*)(v228 + 32) = v232;
                *(_QWORD*)(v228 + 40) = v232;
                *(_QWORD*)(v228 + 48) = v232 + v231;
                primeEm = memcpy(v232, v230, v231);
                *(_QWORD*)(v228 + 40) = v233;
              }
              v235 = v1147;
              v234 = v1148;
              *(_QWORD*)(v228 + 64) = 0;
              *(_QWORD*)(v228 + 72) = 0;
              v236 = v234 - v235;
              *(_QWORD*)(v228 + 56) = 0;
              if (v234 != v235) {
                if (v236 < 0) {
                LABEL_1186:
                  GameRoutine_6e3e20(primeEm);
                }
                v237 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v234 - v235, 16, 0);
                v238 = v237 + v236;
                *(_QWORD*)(v228 + 56) = v237;
                *(_QWORD*)(v228 + 64) = v237;
                *(_QWORD*)(v228 + 72) = v237 + v236;
                primeEm = memcpy(v237, v235, v236);
                *(_QWORD*)(v228 + 64) = v238;
              }
              v1127 = v227;
              v239 = v1151;
              *(_QWORD*)(v228 + 80) = v1150;
              *(_QWORD*)(v228 + 88) = v239;
              v240 = *(char**)(v79 + 808);
              v241 = *(char**)(v79 + 800);
              v242 = (char*)(v228 + v241 - v240);
              if (v241 == v240) {
                v157 = v1120;
              }
              else {
                v243 = 0;
                do {
                  v248 = &v242[v243];
                  *((_DWORD*)v248 + 6) = 0;
                  *((_QWORD*)v248 + 1) = 0;
                  *((_QWORD*)v248 + 2) = 0;
                  *(_QWORD*)v248 = 0;
                  if (v242 != v241) {
                    primeEm = GameRoutine_7fb7c0(&v242[v243]);
                  }
                  v244 = &v241[v243];
                  v243 += 96;
                  v245 = *((_DWORD*)v244 + 6);
                  *((_QWORD*)v248 + 4) = 0;
                  *((_QWORD*)v248 + 5) = 0;
                  *((_QWORD*)v248 + 6) = 0;
                  *((_DWORD*)v248 + 6) = v245;
                  *((_QWORD*)v248 + 4) = *((_QWORD*)v244 + 4);
                  *((_QWORD*)v248 + 5) = *((_QWORD*)v244 + 5);
                  *((_QWORD*)v248 + 6) = *((_QWORD*)v244 + 6);
                  *((_QWORD*)v244 + 5) = 0;
                  *((_QWORD*)v244 + 6) = 0;
                  *((_QWORD*)v244 + 4) = 0;
                  *((_QWORD*)v248 + 8) = 0;
                  *((_QWORD*)v248 + 9) = 0;
                  *((_QWORD*)v248 + 7) = 0;
                  *((_QWORD*)v248 + 7) = *((_QWORD*)v244 + 7);
                  *((_QWORD*)v248 + 8) = *((_QWORD*)v244 + 8);
                  *((_QWORD*)v248 + 9) = *((_QWORD*)v244 + 9);
                  *((_QWORD*)v244 + 8) = 0;
                  *((_QWORD*)v244 + 9) = 0;
                  *((_QWORD*)v244 + 7) = 0;
                  v247 = *((_QWORD*)v244 + 10);
                  v246 = *((_QWORD*)v244 + 11);
                  *((_QWORD*)v248 + 10) = v247;
                  *((_QWORD*)v248 + 11) = v246;
                } while (&v241[v243] != v240);
                v158 = GameData_212c880[0];
                v157 = v1120;
                do {
                  v249 = *((_QWORD*)v241 + 7);
                  if (v249 != 0) {
                    *((_QWORD*)v241 + 8) = v249;
                    v250 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v250 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v250, v249);
                  }
                  v251 = *((_QWORD*)v241 + 4);
                  if (v251 != 0) {
                    *((_QWORD*)v241 + 5) = v251;
                    v252 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v252 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v252, v251);
                  }
                  v253 = *(_QWORD*)v241;
                  if (*(_QWORD*)v241 != 0) {
                    *((_QWORD*)v241 + 1) = v253;
                    v254 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v254 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v254, v253);
                  }
                  v241 += 96;
                } while (v241 != v240);
                v241 = *(char**)(v79 + 800);
              }
              v221 = v228 + 96;
              *(_QWORD*)(v79 + 800) = v242;
              *(_QWORD*)(v79 + 808) = v228 + 96;
              *(_QWORD*)(v79 + 816) = v1127 + 96 * v226;
              if (v241 != nullptr) {
                v255 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v255 = 128;
                }
                primeEm = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v255, v241);
              }
            }
            else {
              *(_DWORD*)(v209 + 24) = 0;
              *(_QWORD*)(v209 + 8) = 0;
              *(_QWORD*)(v209 + 16) = 0;
              *(_QWORD*)v209 = 0;
              if ((__int64 (***)())v209 != &v1140) {
                primeEm = GameRoutine_7fb7c0(v209);
              }
              v211 = v1143;
              *(_QWORD*)(v209 + 32) = 0;
              *(_QWORD*)(v209 + 40) = 0;
              *(_QWORD*)(v209 + 48) = 0;
              *(_DWORD*)(v209 + 24) = v211;
              v212 = v1144;
              v213 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v213 < 0) {
                  goto LABEL_1186;
                }
                v214 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v215 = v214 + v213;
                *(_QWORD*)(v209 + 32) = v214;
                *(_QWORD*)(v209 + 40) = v214;
                *(_QWORD*)(v209 + 48) = v214 + v213;
                primeEm = memcpy(v214, v212, v213);
                *(_QWORD*)(v209 + 40) = v215;
              }
              *(_QWORD*)(v209 + 64) = 0;
              *(_QWORD*)(v209 + 72) = 0;
              *(_QWORD*)(v209 + 56) = 0;
              v216 = v1147;
              v217 = v1148 - v1147;
              if (v1148 != v1147) {
                if (v217 < 0) {
                  goto LABEL_1186;
                }
                v218 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v1148 - v1147, 16,
                    0);
                v219 = v218 + v217;
                *(_QWORD*)(v209 + 56) = v218;
                *(_QWORD*)(v209 + 64) = v218;
                *(_QWORD*)(v209 + 72) = v218 + v217;
                primeEm = memcpy(v218, v216, v217);
                *(_QWORD*)(v209 + 64) = v219;
              }
              v220 = v1151;
              v221 = v209 + 96;
              *(_QWORD*)(v209 + 80) = v1150;
              *(_QWORD*)(v209 + 88) = v220;
            }
            v93 = v1118;
            v256 = v1147;
            *(_QWORD*)(v79 + 808) = v221;
            if (v256 != 0) {
              v1148 = v256;
              v257 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v257 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v257, v256);
            }
            v159 = v1134;
            if (v1144 != nullptr) {
              v1145 = v1144;
              v258 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v258 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v258, v1144);
            }
            if (v1140 != nullptr) {
              v1141 = (unsigned __int64)v1140;
              v259 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v259 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v259, v1140);
            }
          }
          ++v159;
        } while (v159 != v157);
      }
      v260 = *(_QWORD*)(v79 + 832);
      v261 = *(_QWORD*)(v79 + 824);
      v262 = fw_memory_g_heap_manager_ptr;
      if (v261 != v260) {
        do {
          v266 = *(_QWORD*)(v260 - 40);
          if (v266 != 0) {
            *(_QWORD*)(v260 - 32) = v266;
            v267 = 56;
            if (*(_QWORD*)(*(_QWORD*)v262 + 200LL) != 0) {
              v267 = 128;
            }
            primeEm =
                nn_mem_StandardAllocator_Free(*(_QWORD*)v262 + v267, v266);
          }
          v268 = *(_QWORD*)(v260 - 64);
          if (v268 != 0) {
            *(_QWORD*)(v260 - 56) = v268;
            v269 = 56;
            if (*(_QWORD*)(*(_QWORD*)v262 + 200LL) != 0) {
              v269 = 128;
            }
            primeEm =
                nn_mem_StandardAllocator_Free(*(_QWORD*)v262 + v269, v268);
          }
          v270 = v260 - 96;
          v271 = *(_QWORD*)(v260 - 96);
          if (v271 != 0) {
            *(_QWORD*)(v260 - 88) = v271;
            v272 = 56;
            if (*(_QWORD*)(*(_QWORD*)v262 + 200LL) != 0) {
              v272 = 128;
            }
            primeEm =
                nn_mem_StandardAllocator_Free(*(_QWORD*)v262 + v272, v271);
          }
          v260 -= 96;
        } while (v270 != v261);
      }
      v263 = v1118;
      *(_QWORD*)(v79 + 832) = v261;
      v264 = *(unsigned __int16*)(v1118 + 152);
      if (*(_WORD*)(v1118 + 152) != 0) {
        v265 = 0;
        v1121 = *(unsigned __int16*)(v1118 + 152);
        do {
          v273 = (unsigned __int16*)(*(_QWORD*)(v263 + 160) + 16 * v265);
          if (*((_QWORD*)v273 + 1) != 0) {
            v1135 = v265;
            v1140 = nullptr;
            LODWORD(v1143) = 0;
            v1141 = 0;
            v1142 = 0;
            v1144 = nullptr;
            v1145 = nullptr;
            v1146 = 0;
            v1147 = 0;
            v1148 = 0;
            v1149 = 0;
            v1150 = 0;
            v1151 = 0;
            v274 = *v273;
            v275 = GameData_212c880[0];
            if (*v273 != 0) {
              v276 = 0;
              while (1) {
                v277 = *(_QWORD*)(*((_QWORD*)v273 + 1) + 16 * v276 + 8);
                if (v277 != 0) {
                  LODWORD(v277) = *(_WORD*)(v277 + 16) & 0xFFF;
                }
                LODWORD(v1152) = v277;
                primeEm = UnitSkillList_84cc00(&v1140, &v1152, 1);
                if ((primeEm & 1) != 0) {
                  v1150 = 0;
                  v1151 = 0;
                  v278 = (char*)v1145 - (char*)v1144;
                  if ((int)((unsigned __int64)((char*)v1145 - (char*)v1144) >>
                            2) < 1) {
                    goto LABEL_339;
                  }
                  v279 = *v275;
                  v280 = (int)(v278 >> 2);
                  v281 = v280 <= 1 ? 1LL : (int)(v278 >> 2);
                  if (v280 >= 4) {
                    break;
                  }
                  v282 = 0;
                  v283 = 0;
                  v284 = 0;
                  v285 = 0;
                  v286 = 0;
                  v287 = v281 & 3;
                  if (v287 != 0) {
                    goto LABEL_353;
                  }
                }
              LABEL_339:
                if (++v276 == v274) {
                  goto LABEL_356;
                }
              }
              v288 = v1144 + 1;
              v289 = 0;
              v282 = 0;
              v283 = 0;
              v284 = 0;
              v285 = 0;
              do {
                v289 -= 4;
                v290 = *(_QWORD*)(*(_QWORD*)(v279 + 64) +
                                  8LL * (*(v288 - 2) & 0xFFF));
                v291 = v285 | (1 << *(_BYTE*)(v290 + 104));
                v292 = *(_BYTE*)(v290 + 250);
                LOWORD(v1150) = v291;
                v293 = (1LL << v292) | v284;
                v294 = *(_BYTE*)(v290 + 115);
                v1151 = v293;
                HIDWORD(v1150) = (1 << v294) | v283;
                v295 =
                    *(unsigned __int16*)(*(_QWORD*)(v290 + 24) + 1064LL) | v282;
                WORD1(v1150) = v295;
                v296 = *(_QWORD*)(*(_QWORD*)(v279 + 64) +
                                  8LL * (*(v288 - 1) & 0xFFF));
                v297 = v291 | (1 << *(_BYTE*)(v296 + 104));
                v298 = *(_BYTE*)(v296 + 250);
                LOWORD(v1150) = v297;
                v299 = (1LL << v298) | v293;
                v300 = *(_BYTE*)(v296 + 115);
                v1151 = v299;
                HIDWORD(v1150) |= 1 << v300;
                v301 =
                    *(unsigned __int16*)(*(_QWORD*)(v296 + 24) + 1064LL) | v295;
                WORD1(v1150) = v301;
                v302 =
                    *(_QWORD*)(*(_QWORD*)(v279 + 64) + 8LL * (*v288 & 0xFFF));
                v303 = v297 | (1 << *(_BYTE*)(v302 + 104));
                v304 = *(_BYTE*)(v302 + 250);
                LOWORD(v1150) = v303;
                v305 = (1LL << v304) | v299;
                v306 = *(_BYTE*)(v302 + 115);
                v1151 = v305;
                HIDWORD(v1150) |= 1 << v306;
                v307 =
                    *(unsigned __int16*)(*(_QWORD*)(v302 + 24) + 1064LL) | v301;
                WORD1(v1150) = v307;
                LOWORD(v302) = v288[1];
                v288 += 4;
                v308 = *(_QWORD*)(*(_QWORD*)(v279 + 64) + 8 * (v302 & 0xFFF));
                v285 = v303 | (1 << *(_BYTE*)(v308 + 104));
                v309 = *(_BYTE*)(v308 + 250);
                LOWORD(v1150) = v285;
                v284 = (1LL << v309) | v305;
                v310 = *(_BYTE*)(v308 + 115);
                v1151 = v284;
                primeEm = (unsigned int)(1 << v310);
                v283 = primeEm | HIDWORD(v1150);
                HIDWORD(v1150) |= primeEm;
                v282 =
                    *(unsigned __int16*)(*(_QWORD*)(v308 + 24) + 1064LL) | v307;
                WORD1(v1150) = v282;
              } while (-(__int64)(v281 & 0xFFFFFFFFFFFFFFFCLL) != v289);
              v286 = -v289;
              v287 = v281 & 3;
              if (v287 == 0) {
                goto LABEL_339;
              }
            LABEL_353:
              v311 = (int*)v1144 + v286;
              do {
                v312 = *v311++;
                --v287;
                v313 = *(_QWORD*)(*(_QWORD*)(v279 + 64) + 8LL * (v312 & 0xFFF));
                v285 |= 1 << *(_BYTE*)(v313 + 104);
                v314 = *(_BYTE*)(v313 + 250);
                LOWORD(v1150) = v285;
                v284 |= 1LL << v314;
                v315 = *(_BYTE*)(v313 + 115);
                v1151 = v284;
                v283 |= 1 << v315;
                HIDWORD(v1150) = v283;
                v282 |= *(unsigned __int16*)(*(_QWORD*)(v313 + 24) + 1064LL);
                WORD1(v1150) = v282;
              } while (v287 != 0);
              goto LABEL_339;
            }
          LABEL_356:
            v316 = *(_QWORD*)(v79 + 832);
            v317 = *(_QWORD*)(v79 + 840);
            if (v316 >= v317) {
              v329 = *(_QWORD*)(v79 + 824);
              v330 = v316 - v329;
              v331 = 1 - 0x5555555555555555LL * ((__int64)(v316 - v329) >> 5);
              if (v331 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v332 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v317 - v329) >> 5);
              if (2 * v332 > v331) {
                v331 = 2 * v332;
              }
              if (v332 >= 0x155555555555555LL) {
                v333 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v333 = v331;
              }
              if (v333 != 0) {
                if (v333 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                primeEm = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v333, 16, 0);
                v334 = primeEm;
              }
              else {
                v334 = 0;
              }
              v335 = v334 + v330;
              *(_DWORD*)(v335 + 24) = 0;
              *(_QWORD*)(v335 + 8) = 0;
              *(_QWORD*)(v335 + 16) = 0;
              *(_QWORD*)v335 = 0;
              if ((__int64 (***)())(v334 + v330) != &v1140) {
                primeEm = GameRoutine_7fb7c0(v334 + v330);
              }
              v336 = v1143;
              *(_QWORD*)(v335 + 32) = 0;
              *(_QWORD*)(v335 + 40) = 0;
              *(_QWORD*)(v335 + 48) = 0;
              *(_DWORD*)(v335 + 24) = v336;
              v337 = v1144;
              v338 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v338 < 0) {
                  goto LABEL_1186;
                }
                v339 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v340 = v339 + v338;
                *(_QWORD*)(v335 + 32) = v339;
                *(_QWORD*)(v335 + 40) = v339;
                *(_QWORD*)(v335 + 48) = v339 + v338;
                primeEm = memcpy(v339, v337, v338);
                *(_QWORD*)(v335 + 40) = v340;
              }
              v342 = v1147;
              v341 = v1148;
              *(_QWORD*)(v335 + 64) = 0;
              *(_QWORD*)(v335 + 72) = 0;
              v343 = v341 - v342;
              *(_QWORD*)(v335 + 56) = 0;
              if (v341 != v342) {
                if (v343 < 0) {
                  goto LABEL_1186;
                }
                v344 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v341 - v342, 16, 0);
                v345 = v344 + v343;
                *(_QWORD*)(v335 + 56) = v344;
                *(_QWORD*)(v335 + 64) = v344;
                *(_QWORD*)(v335 + 72) = v344 + v343;
                primeEm = memcpy(v344, v342, v343);
                *(_QWORD*)(v335 + 64) = v345;
              }
              v1128 = v334;
              v346 = v1151;
              *(_QWORD*)(v335 + 80) = v1150;
              *(_QWORD*)(v335 + 88) = v346;
              v347 = *(char**)(v79 + 832);
              v348 = *(char**)(v79 + 824);
              v349 = (char*)(v335 + v348 - v347);
              if (v348 == v347) {
                v264 = v1121;
              }
              else {
                v350 = 0;
                do {
                  v355 = &v349[v350];
                  *((_DWORD*)v355 + 6) = 0;
                  *((_QWORD*)v355 + 1) = 0;
                  *((_QWORD*)v355 + 2) = 0;
                  *(_QWORD*)v355 = 0;
                  if (v349 != v348) {
                    primeEm = GameRoutine_7fb7c0(&v349[v350]);
                  }
                  v351 = &v348[v350];
                  v350 += 96;
                  v352 = *((_DWORD*)v351 + 6);
                  *((_QWORD*)v355 + 4) = 0;
                  *((_QWORD*)v355 + 5) = 0;
                  *((_QWORD*)v355 + 6) = 0;
                  *((_DWORD*)v355 + 6) = v352;
                  *((_QWORD*)v355 + 4) = *((_QWORD*)v351 + 4);
                  *((_QWORD*)v355 + 5) = *((_QWORD*)v351 + 5);
                  *((_QWORD*)v355 + 6) = *((_QWORD*)v351 + 6);
                  *((_QWORD*)v351 + 5) = 0;
                  *((_QWORD*)v351 + 6) = 0;
                  *((_QWORD*)v351 + 4) = 0;
                  *((_QWORD*)v355 + 8) = 0;
                  *((_QWORD*)v355 + 9) = 0;
                  *((_QWORD*)v355 + 7) = 0;
                  *((_QWORD*)v355 + 7) = *((_QWORD*)v351 + 7);
                  *((_QWORD*)v355 + 8) = *((_QWORD*)v351 + 8);
                  *((_QWORD*)v355 + 9) = *((_QWORD*)v351 + 9);
                  *((_QWORD*)v351 + 8) = 0;
                  *((_QWORD*)v351 + 9) = 0;
                  *((_QWORD*)v351 + 7) = 0;
                  v354 = *((_QWORD*)v351 + 10);
                  v353 = *((_QWORD*)v351 + 11);
                  *((_QWORD*)v355 + 10) = v354;
                  *((_QWORD*)v355 + 11) = v353;
                } while (&v348[v350] != v347);
                v264 = v1121;
                do {
                  v356 = *((_QWORD*)v348 + 7);
                  if (v356 != 0) {
                    *((_QWORD*)v348 + 8) = v356;
                    v357 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v357 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v357, v356);
                  }
                  v358 = *((_QWORD*)v348 + 4);
                  if (v358 != 0) {
                    *((_QWORD*)v348 + 5) = v358;
                    v359 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v359 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v359, v358);
                  }
                  v360 = *(_QWORD*)v348;
                  if (*(_QWORD*)v348 != 0) {
                    *((_QWORD*)v348 + 1) = v360;
                    v361 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v361 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v361, v360);
                  }
                  v348 += 96;
                } while (v348 != v347);
                v348 = *(char**)(v79 + 824);
              }
              v328 = v335 + 96;
              *(_QWORD*)(v79 + 824) = v349;
              *(_QWORD*)(v79 + 832) = v335 + 96;
              *(_QWORD*)(v79 + 840) = v1128 + 96 * v333;
              if (v348 != nullptr) {
                v362 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v362 = 128;
                }
                primeEm = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v362, v348);
              }
            }
            else {
              *(_DWORD*)(v316 + 24) = 0;
              *(_QWORD*)(v316 + 8) = 0;
              *(_QWORD*)(v316 + 16) = 0;
              *(_QWORD*)v316 = 0;
              if ((__int64 (***)())v316 != &v1140) {
                primeEm = GameRoutine_7fb7c0(v316);
              }
              v318 = v1143;
              *(_QWORD*)(v316 + 32) = 0;
              *(_QWORD*)(v316 + 40) = 0;
              *(_QWORD*)(v316 + 48) = 0;
              *(_DWORD*)(v316 + 24) = v318;
              v319 = v1144;
              v320 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v320 < 0) {
                  goto LABEL_1186;
                }
                v321 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v322 = v321 + v320;
                *(_QWORD*)(v316 + 32) = v321;
                *(_QWORD*)(v316 + 40) = v321;
                *(_QWORD*)(v316 + 48) = v321 + v320;
                primeEm = memcpy(v321, v319, v320);
                *(_QWORD*)(v316 + 40) = v322;
              }
              *(_QWORD*)(v316 + 64) = 0;
              *(_QWORD*)(v316 + 72) = 0;
              *(_QWORD*)(v316 + 56) = 0;
              v323 = v1147;
              v324 = v1148 - v1147;
              if (v1148 != v1147) {
                if (v324 < 0) {
                  goto LABEL_1186;
                }
                v325 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v1148 - v1147, 16,
                    0);
                v326 = v325 + v324;
                *(_QWORD*)(v316 + 56) = v325;
                *(_QWORD*)(v316 + 64) = v325;
                *(_QWORD*)(v316 + 72) = v325 + v324;
                primeEm = memcpy(v325, v323, v324);
                *(_QWORD*)(v316 + 64) = v326;
              }
              v327 = v1151;
              v328 = v316 + 96;
              *(_QWORD*)(v316 + 80) = v1150;
              *(_QWORD*)(v316 + 88) = v327;
            }
            v263 = v1118;
            v363 = v1147;
            *(_QWORD*)(v79 + 832) = v328;
            if (v363 != 0) {
              v1148 = v363;
              v364 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v364 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v364, v363);
            }
            v265 = v1135;
            if (v1144 != nullptr) {
              v1145 = v1144;
              v365 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v365 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v365, v1144);
            }
            if (v1140 != nullptr) {
              v1141 = (unsigned __int64)v1140;
              v366 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v366 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v366, v1140);
            }
          }
          ++v265;
        } while (v265 != v264);
      }
      v367 = *(_QWORD*)(v263 + 176);
      v368 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v367 != 0) {
        LODWORD(v1152) = *(_WORD*)(v367 + 16) & 0xFFF;
        if ((_DWORD)v1152 != 0) {
          LODWORD(v1143) = 0;
          v1141 = 0;
          v1142 = 0;
          v1140 = nullptr;
          v1144 = nullptr;
          v1145 = nullptr;
          v1146 = 0;
          v1147 = 0;
          v1148 = 0;
          v1149 = 0;
          v1150 = 0;
          v1151 = 0;
          if ((UnitSkillList_84cc00(&v1140, &v1152, 1) & 1) == 0) {
            goto LABEL_436;
          }
          v1150 = 0;
          v1151 = 0;
          v369 = (char*)v1145 - (char*)v1144;
          if ((int)((unsigned __int64)((char*)v1145 - (char*)v1144) >> 2) < 1) {
            goto LABEL_436;
          }
          v370 = *GameData_212c880[0];
          v371 = (int)(v369 >> 2);
          if (v371 <= 1) {
            v372 = 1;
          }
          else {
            v372 = (int)(v369 >> 2);
          }
          if (v371 >= 4) {
            v379 = v1144 + 1;
            v380 = 0;
            v373 = 0;
            v374 = 0;
            v375 = 0;
            v376 = 0;
            do {
              v380 -= 4;
              v381 = *(_QWORD*)(*(_QWORD*)(v370 + 64) +
                                8LL * (*(v379 - 2) & 0xFFF));
              v382 = v376 | (1 << *(_BYTE*)(v381 + 104));
              v383 = *(_BYTE*)(v381 + 250);
              LOWORD(v1150) = v382;
              v384 = (1LL << v383) | v375;
              v385 = *(_BYTE*)(v381 + 115);
              v1151 = v384;
              HIDWORD(v1150) = (1 << v385) | v374;
              v386 =
                  *(unsigned __int16*)(*(_QWORD*)(v381 + 24) + 1064LL) | v373;
              WORD1(v1150) = v386;
              v387 = *(_QWORD*)(*(_QWORD*)(v370 + 64) +
                                8LL * (*(v379 - 1) & 0xFFF));
              v388 = v382 | (1 << *(_BYTE*)(v387 + 104));
              v389 = *(_BYTE*)(v387 + 250);
              LOWORD(v1150) = v388;
              v390 = (1LL << v389) | v384;
              v391 = *(_BYTE*)(v387 + 115);
              v1151 = v390;
              HIDWORD(v1150) |= 1 << v391;
              v392 =
                  *(unsigned __int16*)(*(_QWORD*)(v387 + 24) + 1064LL) | v386;
              WORD1(v1150) = v392;
              v393 = *(_QWORD*)(*(_QWORD*)(v370 + 64) + 8LL * (*v379 & 0xFFF));
              v394 = v388 | (1 << *(_BYTE*)(v393 + 104));
              v395 = *(_BYTE*)(v393 + 250);
              LOWORD(v1150) = v394;
              v396 = (1LL << v395) | v390;
              v397 = *(_BYTE*)(v393 + 115);
              v1151 = v396;
              HIDWORD(v1150) |= 1 << v397;
              v398 =
                  *(unsigned __int16*)(*(_QWORD*)(v393 + 24) + 1064LL) | v392;
              WORD1(v1150) = v398;
              LOWORD(v393) = v379[1];
              v379 += 4;
              v399 = *(_QWORD*)(*(_QWORD*)(v370 + 64) + 8 * (v393 & 0xFFF));
              v376 = v394 | (1 << *(_BYTE*)(v399 + 104));
              v400 = *(_BYTE*)(v399 + 250);
              LOWORD(v1150) = v376;
              v375 = (1LL << v400) | v396;
              v401 = *(_BYTE*)(v399 + 115);
              v1151 = v375;
              v374 = (1 << v401) | HIDWORD(v1150);
              HIDWORD(v1150) = v374;
              v373 =
                  *(unsigned __int16*)(*(_QWORD*)(v399 + 24) + 1064LL) | v398;
              WORD1(v1150) = v373;
            } while (-(__int64)(v372 & 0xFFFFFFFFFFFFFFFCLL) != v380);
            v377 = -v380;
            v378 = v372 & 3;
            if (v378 == 0) {
              goto LABEL_436;
            }
          }
          else {
            v373 = 0;
            v374 = 0;
            v375 = 0;
            v376 = 0;
            v377 = 0;
            v378 = v372 & 3;
            if (v378 == 0) {
            LABEL_436:
              primeEm = *(_QWORD*)(v79 + 832);
              v407 = *(_QWORD*)(v79 + 840);
              if (primeEm >= v407) {
                v409 = *(_QWORD*)(v79 + 824);
                v410 = primeEm - v409;
                v411 =
                    0xAAAAAAAAAAAAAAABLL * ((__int64)(primeEm - v409) >> 5) + 1;
                if (v411 > 0x2AAAAAAAAAAAAAALL) {
                LABEL_1187:
                  GameRoutine_705810();
                }
                v412 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v407 - v409) >> 5);
                if (2 * v412 > v411) {
                  v411 = 2 * v412;
                }
                if (v412 >= 0x155555555555555LL) {
                  v413 = 0x2AAAAAAAAAAAAAALL;
                }
                else {
                  v413 = v411;
                }
                if (v413 != 0) {
                  if (v413 > 0x2AAAAAAAAAAAAAALL) {
                    goto LABEL_1188;
                  }
                  v414 =
                      fw_memory_HeapManager_Allocate(*v368, 96 * v413, 16, 0);
                }
                else {
                  v414 = 0;
                }
                v415 = v414 + v410;
                primeEm = GameRoutine_705700(v414 + v410, &v1140);
                v416 = *(char**)(v79 + 832);
                v417 = *(char**)(v79 + 824);
                v418 = (char*)(v415 + v417 - v416);
                if (v416 != v417) {
                  v1136 = v413;
                  v419 = 0;
                  do {
                    v424 = &v418[v419];
                    *((_DWORD*)v424 + 6) = 0;
                    *((_QWORD*)v424 + 1) = 0;
                    *((_QWORD*)v424 + 2) = 0;
                    *(_QWORD*)v424 = 0;
                    if (v418 != v417) {
                      primeEm = GameRoutine_7fb7c0(&v418[v419]);
                    }
                    v420 = &v417[v419];
                    v419 += 96;
                    v421 = *((_DWORD*)v420 + 6);
                    *((_QWORD*)v424 + 4) = 0;
                    *((_QWORD*)v424 + 5) = 0;
                    *((_QWORD*)v424 + 6) = 0;
                    *((_DWORD*)v424 + 6) = v421;
                    *((_QWORD*)v424 + 4) = *((_QWORD*)v420 + 4);
                    *((_QWORD*)v424 + 5) = *((_QWORD*)v420 + 5);
                    *((_QWORD*)v424 + 6) = *((_QWORD*)v420 + 6);
                    *((_QWORD*)v420 + 5) = 0;
                    *((_QWORD*)v420 + 6) = 0;
                    *((_QWORD*)v420 + 4) = 0;
                    *((_QWORD*)v424 + 8) = 0;
                    *((_QWORD*)v424 + 9) = 0;
                    *((_QWORD*)v424 + 7) = 0;
                    *((_QWORD*)v424 + 7) = *((_QWORD*)v420 + 7);
                    *((_QWORD*)v424 + 8) = *((_QWORD*)v420 + 8);
                    *((_QWORD*)v424 + 9) = *((_QWORD*)v420 + 9);
                    *((_QWORD*)v420 + 8) = 0;
                    *((_QWORD*)v420 + 9) = 0;
                    *((_QWORD*)v420 + 7) = 0;
                    v423 = *((_QWORD*)v420 + 10);
                    v422 = *((_QWORD*)v420 + 11);
                    *((_QWORD*)v424 + 10) = v423;
                    *((_QWORD*)v424 + 11) = v422;
                  } while (&v417[v419] != v416);
                  v413 = v1136;
                  do {
                    v425 = *((_QWORD*)v417 + 7);
                    if (v425 != 0) {
                      *((_QWORD*)v417 + 8) = v425;
                      v426 = 56;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v426 = 128;
                      }
                      primeEm = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v426, v425);
                    }
                    v427 = *((_QWORD*)v417 + 4);
                    if (v427 != 0) {
                      *((_QWORD*)v417 + 5) = v427;
                      v428 = 56;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v428 = 128;
                      }
                      primeEm = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v428, v427);
                    }
                    v429 = *(_QWORD*)v417;
                    if (*(_QWORD*)v417 != 0) {
                      *((_QWORD*)v417 + 1) = v429;
                      v430 = 56;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) != 0) {
                        v430 = 128;
                      }
                      primeEm = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v430, v429);
                    }
                    v417 += 96;
                  } while (v417 != v416);
                  v417 = *(char**)(v79 + 824);
                }
                v408 = v415 + 96;
                *(_QWORD*)(v79 + 824) = v418;
                *(_QWORD*)(v79 + 832) = v415 + 96;
                *(_QWORD*)(v79 + 840) = v414 + 96 * v413;
                v368 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                if (v417 != nullptr) {
                  v431 = 56;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v431 = 128;
                  }
                  primeEm = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v431, v417);
                }
              }
              else {
                primeEm = GameRoutine_705700(primeEm, &v1140);
                v408 = primeEm + 96;
              }
              v432 = v1147;
              *(_QWORD*)(v79 + 832) = v408;
              if (v432 != 0) {
                v433 = *v368;
                v1148 = v432;
                v434 = 56;
                if (*(_QWORD*)(v433 + 200) != 0) {
                  v434 = 128;
                }
                primeEm = nn_mem_StandardAllocator_Free(v433 + v434, v432);
              }
              if (v1144 != nullptr) {
                v435 = *v368;
                v1145 = v1144;
                v436 = 56;
                if (*(_QWORD*)(v435 + 200) != 0) {
                  v436 = 128;
                }
                primeEm = nn_mem_StandardAllocator_Free(v435 + v436, v1144);
              }
              if (v1140 != nullptr) {
                v437 = *v368;
                v1141 = (unsigned __int64)v1140;
                v438 = 56;
                if (*(_QWORD*)(v437 + 200) != 0) {
                  v438 = 128;
                }
                primeEm = nn_mem_StandardAllocator_Free(v437 + v438, v1140);
              }
              goto LABEL_484;
            }
          }
          v402 = (int*)v1144 + v377;
          do {
            v403 = *v402++;
            --v378;
            v404 = *(_QWORD*)(*(_QWORD*)(v370 + 64) + 8LL * (v403 & 0xFFF));
            v376 |= 1 << *(_BYTE*)(v404 + 104);
            v405 = *(_BYTE*)(v404 + 250);
            LOWORD(v1150) = v376;
            v375 |= 1LL << v405;
            v406 = *(_BYTE*)(v404 + 115);
            v1151 = v375;
            v374 |= 1 << v406;
            HIDWORD(v1150) = v374;
            v373 |= *(unsigned __int16*)(*(_QWORD*)(v404 + 24) + 1064LL);
            WORD1(v1150) = v373;
          } while (v378 != 0);
          goto LABEL_436;
        }
      }
    LABEL_484:
      v439 = *(_QWORD*)(v79 + 856);
      v440 = *(_QWORD*)(v79 + 848);
      if (v440 != v439) {
        do {
          v445 = *(_QWORD*)(v439 - 40);
          if (v445 != 0) {
            *(_QWORD*)(v439 - 32) = v445;
            v446 = 56;
            if (*(_QWORD*)(*v368 + 200LL) != 0) {
              v446 = 128;
            }
            primeEm = nn_mem_StandardAllocator_Free(*v368 + v446, v445);
          }
          v447 = *(_QWORD*)(v439 - 64);
          if (v447 != 0) {
            *(_QWORD*)(v439 - 56) = v447;
            v448 = 56;
            if (*(_QWORD*)(*v368 + 200LL) != 0) {
              v448 = 128;
            }
            primeEm = nn_mem_StandardAllocator_Free(*v368 + v448, v447);
          }
          v449 = v439 - 96;
          v450 = *(_QWORD*)(v439 - 96);
          if (v450 != 0) {
            *(_QWORD*)(v439 - 88) = v450;
            v451 = 56;
            if (*(_QWORD*)(*v368 + 200LL) != 0) {
              v451 = 128;
            }
            primeEm = nn_mem_StandardAllocator_Free(*v368 + v451, v450);
          }
          v439 -= 96;
        } while (v449 != v440);
      }
      v441 = v1118;
      *(_QWORD*)(v79 + 856) = v440;
      v442 = *(unsigned __int16*)(v1118 + 184);
      v443 = GameData_212c880[0];
      if (*(_WORD*)(v1118 + 184) != 0) {
        v444 = 0;
        v1122 = *(unsigned __int16*)(v1118 + 184);
        do {
          v452 = (unsigned __int16*)(*(_QWORD*)(v441 + 192) + 16 * v444);
          if (*((_QWORD*)v452 + 1) != 0) {
            LODWORD(v1143) = 0;
            v1141 = 0;
            v1142 = 0;
            v1140 = nullptr;
            v1144 = nullptr;
            v1145 = nullptr;
            v1146 = 0;
            v1147 = 0;
            v1148 = 0;
            v1149 = 0;
            v1150 = 0;
            v1151 = 0;
            v453 = *v452;
            if (*v452 != 0) {
              v454 = 0;
              while (1) {
                v455 = *(_QWORD*)(*((_QWORD*)v452 + 1) + 16 * v454 + 8);
                if (v455 != 0) {
                  LODWORD(v455) = *(_WORD*)(v455 + 16) & 0xFFF;
                }
                LODWORD(v1152) = v455;
                primeEm = UnitSkillList_84cc00(&v1140, &v1152, 1);
                if ((primeEm & 1) != 0) {
                  v1150 = 0;
                  v1151 = 0;
                  v456 = (char*)v1145 - (char*)v1144;
                  if ((int)((unsigned __int64)((char*)v1145 - (char*)v1144) >>
                            2) < 1) {
                    goto LABEL_504;
                  }
                  v457 = *v443;
                  v458 = (int)(v456 >> 2);
                  v459 = v458 <= 1 ? 1LL : (int)(v456 >> 2);
                  if (v458 >= 4) {
                    break;
                  }
                  v460 = 0;
                  v461 = 0;
                  v462 = 0;
                  v463 = 0;
                  v464 = 0;
                  v465 = v459 & 3;
                  if (v465 != 0) {
                    goto LABEL_518;
                  }
                }
              LABEL_504:
                if (++v454 == v453) {
                  goto LABEL_521;
                }
              }
              v466 = v1144 + 1;
              v467 = 0;
              v460 = 0;
              v461 = 0;
              v462 = 0;
              v463 = 0;
              do {
                v467 -= 4;
                v468 = *(_QWORD*)(*(_QWORD*)(v457 + 64) +
                                  8LL * (*(v466 - 2) & 0xFFF));
                v469 = v463 | (1 << *(_BYTE*)(v468 + 104));
                v470 = *(_BYTE*)(v468 + 250);
                LOWORD(v1150) = v469;
                v471 = (1LL << v470) | v462;
                v472 = *(_BYTE*)(v468 + 115);
                v1151 = v471;
                HIDWORD(v1150) = (1 << v472) | v461;
                v473 =
                    *(unsigned __int16*)(*(_QWORD*)(v468 + 24) + 1064LL) | v460;
                WORD1(v1150) = v473;
                v474 = *(_QWORD*)(*(_QWORD*)(v457 + 64) +
                                  8LL * (*(v466 - 1) & 0xFFF));
                v475 = v469 | (1 << *(_BYTE*)(v474 + 104));
                v476 = *(_BYTE*)(v474 + 250);
                LOWORD(v1150) = v475;
                v477 = (1LL << v476) | v471;
                v478 = *(_BYTE*)(v474 + 115);
                v1151 = v477;
                HIDWORD(v1150) |= 1 << v478;
                v479 =
                    *(unsigned __int16*)(*(_QWORD*)(v474 + 24) + 1064LL) | v473;
                WORD1(v1150) = v479;
                v480 =
                    *(_QWORD*)(*(_QWORD*)(v457 + 64) + 8LL * (*v466 & 0xFFF));
                v481 = v475 | (1 << *(_BYTE*)(v480 + 104));
                v482 = *(_BYTE*)(v480 + 250);
                LOWORD(v1150) = v481;
                v483 = (1LL << v482) | v477;
                v484 = *(_BYTE*)(v480 + 115);
                v1151 = v483;
                HIDWORD(v1150) |= 1 << v484;
                v485 =
                    *(unsigned __int16*)(*(_QWORD*)(v480 + 24) + 1064LL) | v479;
                WORD1(v1150) = v485;
                LOWORD(v480) = v466[1];
                v466 += 4;
                v486 = *(_QWORD*)(*(_QWORD*)(v457 + 64) + 8 * (v480 & 0xFFF));
                v463 = v481 | (1 << *(_BYTE*)(v486 + 104));
                v487 = *(_BYTE*)(v486 + 250);
                LOWORD(v1150) = v463;
                v462 = (1LL << v487) | v483;
                v488 = *(_BYTE*)(v486 + 115);
                v1151 = v462;
                primeEm = (unsigned int)(1 << v488);
                v461 = primeEm | HIDWORD(v1150);
                HIDWORD(v1150) |= primeEm;
                v460 =
                    *(unsigned __int16*)(*(_QWORD*)(v486 + 24) + 1064LL) | v485;
                WORD1(v1150) = v460;
              } while (-(__int64)(v459 & 0xFFFFFFFFFFFFFFFCLL) != v467);
              v464 = -v467;
              v465 = v459 & 3;
              if (v465 == 0) {
                goto LABEL_504;
              }
            LABEL_518:
              v489 = (int*)v1144 + v464;
              do {
                v490 = *v489++;
                --v465;
                v491 = *(_QWORD*)(*(_QWORD*)(v457 + 64) + 8LL * (v490 & 0xFFF));
                v463 |= 1 << *(_BYTE*)(v491 + 104);
                v492 = *(_BYTE*)(v491 + 250);
                LOWORD(v1150) = v463;
                v462 |= 1LL << v492;
                v493 = *(_BYTE*)(v491 + 115);
                v1151 = v462;
                v461 |= 1 << v493;
                HIDWORD(v1150) = v461;
                v460 |= *(unsigned __int16*)(*(_QWORD*)(v491 + 24) + 1064LL);
                WORD1(v1150) = v460;
              } while (v465 != 0);
              goto LABEL_504;
            }
          LABEL_521:
            v494 = *(_QWORD*)(v79 + 856);
            v495 = *(_QWORD*)(v79 + 864);
            v1137 = v444;
            if (v494 >= v495) {
              v507 = *(_QWORD*)(v79 + 848);
              v508 = v494 - v507;
              v509 = 1 - 0x5555555555555555LL * ((__int64)(v494 - v507) >> 5);
              if (v509 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v510 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v495 - v507) >> 5);
              if (2 * v510 > v509) {
                v509 = 2 * v510;
              }
              if (v510 >= 0x155555555555555LL) {
                v511 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v511 = v509;
              }
              if (v511 != 0) {
                if (v511 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                primeEm = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v511, 16, 0);
                v512 = primeEm;
              }
              else {
                v512 = 0;
              }
              v513 = v512 + v508;
              *(_DWORD*)(v513 + 24) = 0;
              *(_QWORD*)(v513 + 8) = 0;
              *(_QWORD*)(v513 + 16) = 0;
              *(_QWORD*)v513 = 0;
              if ((__int64 (***)())(v512 + v508) != &v1140) {
                primeEm = GameRoutine_7fb7c0(v512 + v508);
              }
              v514 = v1143;
              *(_QWORD*)(v513 + 32) = 0;
              *(_QWORD*)(v513 + 40) = 0;
              *(_QWORD*)(v513 + 48) = 0;
              *(_DWORD*)(v513 + 24) = v514;
              v515 = v1144;
              v516 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v516 < 0) {
                  goto LABEL_1186;
                }
                v517 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v518 = v517 + v516;
                *(_QWORD*)(v513 + 32) = v517;
                *(_QWORD*)(v513 + 40) = v517;
                *(_QWORD*)(v513 + 48) = v517 + v516;
                primeEm = memcpy(v517, v515, v516);
                *(_QWORD*)(v513 + 40) = v518;
              }
              v520 = v1147;
              v519 = v1148;
              *(_QWORD*)(v513 + 64) = 0;
              *(_QWORD*)(v513 + 72) = 0;
              v521 = v519 - v520;
              *(_QWORD*)(v513 + 56) = 0;
              if (v519 != v520) {
                if (v521 < 0) {
                  goto LABEL_1186;
                }
                v522 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v519 - v520, 16, 0);
                v523 = v522 + v521;
                *(_QWORD*)(v513 + 56) = v522;
                *(_QWORD*)(v513 + 64) = v522;
                *(_QWORD*)(v513 + 72) = v522 + v521;
                primeEm = memcpy(v522, v520, v521);
                *(_QWORD*)(v513 + 64) = v523;
              }
              v1129 = v512;
              v524 = v1151;
              *(_QWORD*)(v513 + 80) = v1150;
              *(_QWORD*)(v513 + 88) = v524;
              v525 = *(char**)(v79 + 856);
              v526 = *(char**)(v79 + 848);
              v527 = (char*)(v513 + v526 - v525);
              if (v526 == v525) {
                v442 = v1122;
              }
              else {
                v528 = 0;
                do {
                  v533 = &v527[v528];
                  *((_DWORD*)v533 + 6) = 0;
                  *((_QWORD*)v533 + 1) = 0;
                  *((_QWORD*)v533 + 2) = 0;
                  *(_QWORD*)v533 = 0;
                  if (v527 != v526) {
                    primeEm = GameRoutine_7fb7c0(&v527[v528]);
                  }
                  v529 = &v526[v528];
                  v528 += 96;
                  v530 = *((_DWORD*)v529 + 6);
                  *((_QWORD*)v533 + 4) = 0;
                  *((_QWORD*)v533 + 5) = 0;
                  *((_QWORD*)v533 + 6) = 0;
                  *((_DWORD*)v533 + 6) = v530;
                  *((_QWORD*)v533 + 4) = *((_QWORD*)v529 + 4);
                  *((_QWORD*)v533 + 5) = *((_QWORD*)v529 + 5);
                  *((_QWORD*)v533 + 6) = *((_QWORD*)v529 + 6);
                  *((_QWORD*)v529 + 5) = 0;
                  *((_QWORD*)v529 + 6) = 0;
                  *((_QWORD*)v529 + 4) = 0;
                  *((_QWORD*)v533 + 8) = 0;
                  *((_QWORD*)v533 + 9) = 0;
                  *((_QWORD*)v533 + 7) = 0;
                  *((_QWORD*)v533 + 7) = *((_QWORD*)v529 + 7);
                  *((_QWORD*)v533 + 8) = *((_QWORD*)v529 + 8);
                  *((_QWORD*)v533 + 9) = *((_QWORD*)v529 + 9);
                  *((_QWORD*)v529 + 8) = 0;
                  *((_QWORD*)v529 + 9) = 0;
                  *((_QWORD*)v529 + 7) = 0;
                  v532 = *((_QWORD*)v529 + 10);
                  v531 = *((_QWORD*)v529 + 11);
                  *((_QWORD*)v533 + 10) = v532;
                  *((_QWORD*)v533 + 11) = v531;
                } while (&v526[v528] != v525);
                v443 = GameData_212c880[0];
                v442 = v1122;
                do {
                  v534 = *((_QWORD*)v526 + 7);
                  if (v534 != 0) {
                    *((_QWORD*)v526 + 8) = v534;
                    v535 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v535 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v535, v534);
                  }
                  v536 = *((_QWORD*)v526 + 4);
                  if (v536 != 0) {
                    *((_QWORD*)v526 + 5) = v536;
                    v537 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v537 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v537, v536);
                  }
                  v538 = *(_QWORD*)v526;
                  if (*(_QWORD*)v526 != 0) {
                    *((_QWORD*)v526 + 1) = v538;
                    v539 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v539 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v539, v538);
                  }
                  v526 += 96;
                } while (v526 != v525);
                v526 = *(char**)(v79 + 848);
              }
              v506 = v513 + 96;
              *(_QWORD*)(v79 + 848) = v527;
              *(_QWORD*)(v79 + 856) = v513 + 96;
              *(_QWORD*)(v79 + 864) = v1129 + 96 * v511;
              if (v526 != nullptr) {
                v540 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v540 = 128;
                }
                primeEm = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v540, v526);
              }
            }
            else {
              *(_DWORD*)(v494 + 24) = 0;
              *(_QWORD*)(v494 + 8) = 0;
              *(_QWORD*)(v494 + 16) = 0;
              *(_QWORD*)v494 = 0;
              if ((__int64 (***)())v494 != &v1140) {
                primeEm = GameRoutine_7fb7c0(v494);
              }
              v496 = v1143;
              *(_QWORD*)(v494 + 32) = 0;
              *(_QWORD*)(v494 + 40) = 0;
              *(_QWORD*)(v494 + 48) = 0;
              *(_DWORD*)(v494 + 24) = v496;
              v497 = v1144;
              v498 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v498 < 0) {
                  goto LABEL_1186;
                }
                v499 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v500 = v499 + v498;
                *(_QWORD*)(v494 + 32) = v499;
                *(_QWORD*)(v494 + 40) = v499;
                *(_QWORD*)(v494 + 48) = v499 + v498;
                primeEm = memcpy(v499, v497, v498);
                *(_QWORD*)(v494 + 40) = v500;
              }
              *(_QWORD*)(v494 + 64) = 0;
              *(_QWORD*)(v494 + 72) = 0;
              *(_QWORD*)(v494 + 56) = 0;
              v501 = v1147;
              v502 = v1148 - v1147;
              if (v1148 != v1147) {
                if (v502 < 0) {
                  goto LABEL_1186;
                }
                v503 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v1148 - v1147, 16,
                    0);
                v504 = v503 + v502;
                *(_QWORD*)(v494 + 56) = v503;
                *(_QWORD*)(v494 + 64) = v503;
                *(_QWORD*)(v494 + 72) = v503 + v502;
                primeEm = memcpy(v503, v501, v502);
                *(_QWORD*)(v494 + 64) = v504;
              }
              v505 = v1151;
              v506 = v494 + 96;
              *(_QWORD*)(v494 + 80) = v1150;
              *(_QWORD*)(v494 + 88) = v505;
            }
            v441 = v1118;
            v541 = v1147;
            *(_QWORD*)(v79 + 856) = v506;
            if (v541 != 0) {
              v1148 = v541;
              v542 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v542 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v542, v541);
            }
            v444 = v1137;
            if (v1144 != nullptr) {
              v1145 = v1144;
              v543 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v543 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v543, v1144);
            }
            if (v1140 != nullptr) {
              v1141 = (unsigned __int64)v1140;
              v544 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v544 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v544, v1140);
            }
          }
          ++v444;
        } while (v444 != v442);
      }
      v545 = *(_QWORD*)(v79 + 880);
      v546 = *(_QWORD*)(v79 + 872);
      v547 = fw_memory_g_heap_manager_ptr;
      if (v546 != v545) {
        do {
          v552 = *(_QWORD*)(v545 - 40);
          if (v552 != 0) {
            *(_QWORD*)(v545 - 32) = v552;
            v553 = 56;
            if (*(_QWORD*)(*(_QWORD*)v547 + 200LL) != 0) {
              v553 = 128;
            }
            primeEm =
                nn_mem_StandardAllocator_Free(*(_QWORD*)v547 + v553, v552);
          }
          v554 = *(_QWORD*)(v545 - 64);
          if (v554 != 0) {
            *(_QWORD*)(v545 - 56) = v554;
            v555 = 56;
            if (*(_QWORD*)(*(_QWORD*)v547 + 200LL) != 0) {
              v555 = 128;
            }
            primeEm =
                nn_mem_StandardAllocator_Free(*(_QWORD*)v547 + v555, v554);
          }
          v556 = v545 - 96;
          v557 = *(_QWORD*)(v545 - 96);
          if (v557 != 0) {
            *(_QWORD*)(v545 - 88) = v557;
            v558 = 56;
            if (*(_QWORD*)(*(_QWORD*)v547 + 200LL) != 0) {
              v558 = 128;
            }
            primeEm =
                nn_mem_StandardAllocator_Free(*(_QWORD*)v547 + v558, v557);
          }
          v545 -= 96;
        } while (v556 != v546);
      }
      v548 = v1118;
      *(_QWORD*)(v79 + 880) = v546;
      v549 = *(unsigned __int16*)(v1118 + 200);
      v550 = GameData_212c880[0];
      if (*(_WORD*)(v1118 + 200) != 0) {
        v551 = 0;
        v1123 = *(unsigned __int16*)(v1118 + 200);
        do {
          v559 = (unsigned __int16*)(*(_QWORD*)(v548 + 208) + 16 * v551);
          if (*((_QWORD*)v559 + 1) != 0) {
            LODWORD(v1143) = 0;
            v1141 = 0;
            v1142 = 0;
            v1140 = nullptr;
            v1144 = nullptr;
            v1145 = nullptr;
            v1146 = 0;
            v1147 = 0;
            v1148 = 0;
            v1149 = 0;
            v1150 = 0;
            v1151 = 0;
            v560 = *v559;
            if (*v559 != 0) {
              v561 = 0;
              while (1) {
                v562 = *(_QWORD*)(*((_QWORD*)v559 + 1) + 16 * v561 + 8);
                if (v562 != 0) {
                  LODWORD(v562) = *(_WORD*)(v562 + 16) & 0xFFF;
                }
                LODWORD(v1152) = v562;
                primeEm = UnitSkillList_84cc00(&v1140, &v1152, 1);
                if ((primeEm & 1) != 0) {
                  v1150 = 0;
                  v1151 = 0;
                  v563 = (char*)v1145 - (char*)v1144;
                  if ((int)((unsigned __int64)((char*)v1145 - (char*)v1144) >>
                            2) < 1) {
                    goto LABEL_606;
                  }
                  v564 = *v550;
                  v565 = (int)(v563 >> 2);
                  v566 = v565 <= 1 ? 1LL : (int)(v563 >> 2);
                  if (v565 >= 4) {
                    break;
                  }
                  v567 = 0;
                  v568 = 0;
                  v569 = 0;
                  v570 = 0;
                  v571 = 0;
                  v572 = v566 & 3;
                  if (v572 != 0) {
                    goto LABEL_620;
                  }
                }
              LABEL_606:
                if (++v561 == v560) {
                  goto LABEL_623;
                }
              }
              v573 = v1144 + 1;
              v574 = 0;
              v567 = 0;
              v568 = 0;
              v569 = 0;
              v570 = 0;
              do {
                v574 -= 4;
                v575 = *(_QWORD*)(*(_QWORD*)(v564 + 64) +
                                  8LL * (*(v573 - 2) & 0xFFF));
                v576 = v570 | (1 << *(_BYTE*)(v575 + 104));
                v577 = *(_BYTE*)(v575 + 250);
                LOWORD(v1150) = v576;
                v578 = (1LL << v577) | v569;
                v579 = *(_BYTE*)(v575 + 115);
                v1151 = v578;
                HIDWORD(v1150) = (1 << v579) | v568;
                v580 =
                    *(unsigned __int16*)(*(_QWORD*)(v575 + 24) + 1064LL) | v567;
                WORD1(v1150) = v580;
                v581 = *(_QWORD*)(*(_QWORD*)(v564 + 64) +
                                  8LL * (*(v573 - 1) & 0xFFF));
                v582 = v576 | (1 << *(_BYTE*)(v581 + 104));
                v583 = *(_BYTE*)(v581 + 250);
                LOWORD(v1150) = v582;
                v584 = (1LL << v583) | v578;
                v585 = *(_BYTE*)(v581 + 115);
                v1151 = v584;
                HIDWORD(v1150) |= 1 << v585;
                v586 =
                    *(unsigned __int16*)(*(_QWORD*)(v581 + 24) + 1064LL) | v580;
                WORD1(v1150) = v586;
                v587 =
                    *(_QWORD*)(*(_QWORD*)(v564 + 64) + 8LL * (*v573 & 0xFFF));
                v588 = v582 | (1 << *(_BYTE*)(v587 + 104));
                v589 = *(_BYTE*)(v587 + 250);
                LOWORD(v1150) = v588;
                v590 = (1LL << v589) | v584;
                v591 = *(_BYTE*)(v587 + 115);
                v1151 = v590;
                HIDWORD(v1150) |= 1 << v591;
                v592 =
                    *(unsigned __int16*)(*(_QWORD*)(v587 + 24) + 1064LL) | v586;
                WORD1(v1150) = v592;
                LOWORD(v587) = v573[1];
                v573 += 4;
                v593 = *(_QWORD*)(*(_QWORD*)(v564 + 64) + 8 * (v587 & 0xFFF));
                v570 = v588 | (1 << *(_BYTE*)(v593 + 104));
                v594 = *(_BYTE*)(v593 + 250);
                LOWORD(v1150) = v570;
                v569 = (1LL << v594) | v590;
                v595 = *(_BYTE*)(v593 + 115);
                v1151 = v569;
                primeEm = (unsigned int)(1 << v595);
                v568 = primeEm | HIDWORD(v1150);
                HIDWORD(v1150) |= primeEm;
                v567 =
                    *(unsigned __int16*)(*(_QWORD*)(v593 + 24) + 1064LL) | v592;
                WORD1(v1150) = v567;
              } while (-(__int64)(v566 & 0xFFFFFFFFFFFFFFFCLL) != v574);
              v571 = -v574;
              v572 = v566 & 3;
              if (v572 == 0) {
                goto LABEL_606;
              }
            LABEL_620:
              v596 = (int*)v1144 + v571;
              do {
                v597 = *v596++;
                --v572;
                v598 = *(_QWORD*)(*(_QWORD*)(v564 + 64) + 8LL * (v597 & 0xFFF));
                v570 |= 1 << *(_BYTE*)(v598 + 104);
                v599 = *(_BYTE*)(v598 + 250);
                LOWORD(v1150) = v570;
                v569 |= 1LL << v599;
                v600 = *(_BYTE*)(v598 + 115);
                v1151 = v569;
                v568 |= 1 << v600;
                HIDWORD(v1150) = v568;
                v567 |= *(unsigned __int16*)(*(_QWORD*)(v598 + 24) + 1064LL);
                WORD1(v1150) = v567;
              } while (v572 != 0);
              goto LABEL_606;
            }
          LABEL_623:
            v601 = *(_QWORD*)(v79 + 880);
            v602 = *(_QWORD*)(v79 + 888);
            v1138 = v551;
            if (v601 >= v602) {
              v614 = *(_QWORD*)(v79 + 872);
              v615 = v601 - v614;
              v616 = 1 - 0x5555555555555555LL * ((__int64)(v601 - v614) >> 5);
              if (v616 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1187;
              }
              v617 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v602 - v614) >> 5);
              if (2 * v617 > v616) {
                v616 = 2 * v617;
              }
              if (v617 >= 0x155555555555555LL) {
                v618 = 0x2AAAAAAAAAAAAAALL;
              }
              else {
                v618 = v616;
              }
              if (v618 != 0) {
                if (v618 > 0x2AAAAAAAAAAAAAALL) {
                  goto LABEL_1188;
                }
                primeEm = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 96 * v618, 16, 0);
                v619 = primeEm;
              }
              else {
                v619 = 0;
              }
              v620 = v619 + v615;
              *(_DWORD*)(v620 + 24) = 0;
              *(_QWORD*)(v620 + 8) = 0;
              *(_QWORD*)(v620 + 16) = 0;
              *(_QWORD*)v620 = 0;
              if ((__int64 (***)())(v619 + v615) != &v1140) {
                primeEm = GameRoutine_7fb7c0(v619 + v615);
              }
              v621 = v1143;
              *(_QWORD*)(v620 + 32) = 0;
              *(_QWORD*)(v620 + 40) = 0;
              *(_QWORD*)(v620 + 48) = 0;
              *(_DWORD*)(v620 + 24) = v621;
              v622 = v1144;
              v623 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v623 < 0) {
                  goto LABEL_1186;
                }
                v624 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v625 = v624 + v623;
                *(_QWORD*)(v620 + 32) = v624;
                *(_QWORD*)(v620 + 40) = v624;
                *(_QWORD*)(v620 + 48) = v624 + v623;
                primeEm = memcpy(v624, v622, v623);
                *(_QWORD*)(v620 + 40) = v625;
              }
              v627 = v1147;
              v626 = v1148;
              *(_QWORD*)(v620 + 64) = 0;
              *(_QWORD*)(v620 + 72) = 0;
              v628 = v626 - v627;
              *(_QWORD*)(v620 + 56) = 0;
              if (v626 != v627) {
                if (v628 < 0) {
                  goto LABEL_1186;
                }
                v629 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v626 - v627, 16, 0);
                v630 = v629 + v628;
                *(_QWORD*)(v620 + 56) = v629;
                *(_QWORD*)(v620 + 64) = v629;
                *(_QWORD*)(v620 + 72) = v629 + v628;
                primeEm = memcpy(v629, v627, v628);
                *(_QWORD*)(v620 + 64) = v630;
              }
              v1130 = v619;
              v631 = v1151;
              *(_QWORD*)(v620 + 80) = v1150;
              *(_QWORD*)(v620 + 88) = v631;
              v632 = *(char**)(v79 + 880);
              v633 = *(char**)(v79 + 872);
              v634 = (char*)(v620 + v633 - v632);
              if (v633 == v632) {
                v549 = v1123;
              }
              else {
                v635 = 0;
                do {
                  v640 = &v634[v635];
                  *((_DWORD*)v640 + 6) = 0;
                  *((_QWORD*)v640 + 1) = 0;
                  *((_QWORD*)v640 + 2) = 0;
                  *(_QWORD*)v640 = 0;
                  if (v634 != v633) {
                    primeEm = GameRoutine_7fb7c0(&v634[v635]);
                  }
                  v636 = &v633[v635];
                  v635 += 96;
                  v637 = *((_DWORD*)v636 + 6);
                  *((_QWORD*)v640 + 4) = 0;
                  *((_QWORD*)v640 + 5) = 0;
                  *((_QWORD*)v640 + 6) = 0;
                  *((_DWORD*)v640 + 6) = v637;
                  *((_QWORD*)v640 + 4) = *((_QWORD*)v636 + 4);
                  *((_QWORD*)v640 + 5) = *((_QWORD*)v636 + 5);
                  *((_QWORD*)v640 + 6) = *((_QWORD*)v636 + 6);
                  *((_QWORD*)v636 + 5) = 0;
                  *((_QWORD*)v636 + 6) = 0;
                  *((_QWORD*)v636 + 4) = 0;
                  *((_QWORD*)v640 + 8) = 0;
                  *((_QWORD*)v640 + 9) = 0;
                  *((_QWORD*)v640 + 7) = 0;
                  *((_QWORD*)v640 + 7) = *((_QWORD*)v636 + 7);
                  *((_QWORD*)v640 + 8) = *((_QWORD*)v636 + 8);
                  *((_QWORD*)v640 + 9) = *((_QWORD*)v636 + 9);
                  *((_QWORD*)v636 + 8) = 0;
                  *((_QWORD*)v636 + 9) = 0;
                  *((_QWORD*)v636 + 7) = 0;
                  v639 = *((_QWORD*)v636 + 10);
                  v638 = *((_QWORD*)v636 + 11);
                  *((_QWORD*)v640 + 10) = v639;
                  *((_QWORD*)v640 + 11) = v638;
                } while (&v633[v635] != v632);
                v550 = GameData_212c880[0];
                v549 = v1123;
                do {
                  v641 = *((_QWORD*)v633 + 7);
                  if (v641 != 0) {
                    *((_QWORD*)v633 + 8) = v641;
                    v642 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v642 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v642, v641);
                  }
                  v643 = *((_QWORD*)v633 + 4);
                  if (v643 != 0) {
                    *((_QWORD*)v633 + 5) = v643;
                    v644 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v644 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v644, v643);
                  }
                  v645 = *(_QWORD*)v633;
                  if (*(_QWORD*)v633 != 0) {
                    *((_QWORD*)v633 + 1) = v645;
                    v646 = 56;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) != 0) {
                      v646 = 128;
                    }
                    primeEm = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v646, v645);
                  }
                  v633 += 96;
                } while (v633 != v632);
                v633 = *(char**)(v79 + 872);
              }
              v613 = v620 + 96;
              *(_QWORD*)(v79 + 872) = v634;
              *(_QWORD*)(v79 + 880) = v620 + 96;
              *(_QWORD*)(v79 + 888) = v1130 + 96 * v618;
              if (v633 != nullptr) {
                v647 = 56;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v647 = 128;
                }
                primeEm = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v647, v633);
              }
            }
            else {
              *(_DWORD*)(v601 + 24) = 0;
              *(_QWORD*)(v601 + 8) = 0;
              *(_QWORD*)(v601 + 16) = 0;
              *(_QWORD*)v601 = 0;
              if ((__int64 (***)())v601 != &v1140) {
                primeEm = GameRoutine_7fb7c0(v601);
              }
              v603 = v1143;
              *(_QWORD*)(v601 + 32) = 0;
              *(_QWORD*)(v601 + 40) = 0;
              *(_QWORD*)(v601 + 48) = 0;
              *(_DWORD*)(v601 + 24) = v603;
              v604 = v1144;
              v605 = (char*)v1145 - (char*)v1144;
              if (v1145 != v1144) {
                if (v605 < 0) {
                  goto LABEL_1186;
                }
                v606 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr,
                    (char*)v1145 - (char*)v1144, 16, 0);
                v607 = v606 + v605;
                *(_QWORD*)(v601 + 32) = v606;
                *(_QWORD*)(v601 + 40) = v606;
                *(_QWORD*)(v601 + 48) = v606 + v605;
                primeEm = memcpy(v606, v604, v605);
                *(_QWORD*)(v601 + 40) = v607;
              }
              *(_QWORD*)(v601 + 64) = 0;
              *(_QWORD*)(v601 + 72) = 0;
              *(_QWORD*)(v601 + 56) = 0;
              v608 = v1147;
              v609 = v1148 - v1147;
              if (v1148 != v1147) {
                if (v609 < 0) {
                  goto LABEL_1186;
                }
                v610 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v1148 - v1147, 16,
                    0);
                v611 = v610 + v609;
                *(_QWORD*)(v601 + 56) = v610;
                *(_QWORD*)(v601 + 64) = v610;
                *(_QWORD*)(v601 + 72) = v610 + v609;
                primeEm = memcpy(v610, v608, v609);
                *(_QWORD*)(v601 + 64) = v611;
              }
              v612 = v1151;
              v613 = v601 + 96;
              *(_QWORD*)(v601 + 80) = v1150;
              *(_QWORD*)(v601 + 88) = v612;
            }
            v548 = v1118;
            v648 = v1147;
            *(_QWORD*)(v79 + 880) = v613;
            if (v648 != 0) {
              v1148 = v648;
              v649 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v649 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v649, v648);
            }
            v551 = v1138;
            if (v1144 != nullptr) {
              v1145 = v1144;
              v650 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v650 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v650, v1144);
            }
            if (v1140 != nullptr) {
              v1141 = (unsigned __int64)v1140;
              v651 = 56;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v651 = 128;
              }
              primeEm = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v651, v1140);
            }
          }
          ++v551;
        } while (v551 != v549);
      }
      v652 = *(_QWORD*)(v79 + 904);
      v653 = *(_QWORD*)(v79 + 896);
      i = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v653 != v652) {
        do {
          v670 = *(_QWORD*)(v652 - 40);
          if (v670 != 0) {
            *(_QWORD*)(v652 - 32) = v670;
            v671 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v671 = 128;
            }
            nn_mem_StandardAllocator_Free(*i + v671, v670);
          }
          v672 = *(_QWORD*)(v652 - 64);
          if (v672 != 0) {
            *(_QWORD*)(v652 - 56) = v672;
            v673 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v673 = 128;
            }
            nn_mem_StandardAllocator_Free(*i + v673, v672);
          }
          v674 = v652 - 96;
          v675 = *(_QWORD*)(v652 - 96);
          if (v675 != 0) {
            *(_QWORD*)(v652 - 88) = v675;
            v676 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v676 = 128;
            }
            nn_mem_StandardAllocator_Free(*i + v676, v675);
          }
          v652 -= 96;
        } while (v674 != v653);
      }
      v654 = *(_QWORD*)(v79 + 128);
      *(_QWORD*)(v79 + 904) = v653;
      *(_DWORD*)(v79 + 152) = 0;
      *(_QWORD*)(v79 + 216) = 0;
      v1139 = v79 + 128;
      *(_QWORD*)(v79 + 136) = v654;
      *(_QWORD*)(v79 + 168) = *(_QWORD*)(v79 + 160);
      *(_QWORD*)(v79 + 208) = 0;
      v655 = *(_QWORD*)(v79 + 800);
      v1115 = *(_QWORD*)(v79 + 808);
      v656 = GameData_212c880[0];
      if (v655 != v1115) {
        while (1) {
          v684 = *(_DWORD**)(v655 + 32);
          v685 = *(_DWORD**)(v655 + 40);
          v1117 = v655;
          if (v684 != v685) {
            break;
          }
        LABEL_723:
          v655 = v1117 + 96;
          if (v1117 + 96 == v1115) {
            goto LABEL_690;
          }
        }
        v686 = *v656;
        v1131 = v685;
        while (1) {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v686 + 64) +
                                   8LL * (*v684 & 0xFFF)) +
                        110LL) == 0) {
            goto LABEL_727;
          }
          if ((*v684 & 0xFFF) != 0) {
            break;
          }
        LABEL_808:
          if ((UnitSkillList_84cc00(v1139, v684, 1) & 1) != 0) {
            *(_QWORD*)(v79 + 208) = 0;
            *(_QWORD*)(v79 + 216) = 0;
            v779 = *(_QWORD*)(v79 + 160);
            v780 = *(_QWORD*)(v79 + 168) - v779;
            v686 = *v656;
            if ((int)((unsigned __int64)v780 >> 2) >= 1) {
              v781 = (int)(v780 >> 2);
              if (v781 <= 1) {
                v782 = 1;
              }
              else {
                v782 = (int)(v780 >> 2);
              }
              if (v781 >= 4) {
                v789 = (_DWORD*)(v779 + 8);
                v790 = 0;
                v783 = 0;
                v784 = 0;
                v785 = 0;
                v786 = 0;
                do {
                  v790 -= 4;
                  v791 = *(_QWORD*)(*(_QWORD*)(v686 + 64) +
                                    8LL * (*(v789 - 2) & 0xFFF));
                  v792 = v786 | (1 << *(_BYTE*)(v791 + 104));
                  *(_WORD*)(v79 + 208) = v792;
                  v793 = (1LL << *(_BYTE*)(v791 + 250)) | v785;
                  *(_QWORD*)(v79 + 216) = v793;
                  v794 = (1 << *(_BYTE*)(v791 + 115)) | v784;
                  *(_DWORD*)(v79 + 212) = v794;
                  v795 = *(unsigned __int16*)(*(_QWORD*)(v791 + 24) + 1064LL) |
                         v783;
                  *(_WORD*)(v79 + 210) = v795;
                  v796 = *(_QWORD*)(*(_QWORD*)(v686 + 64) +
                                    8LL * (*(v789 - 1) & 0xFFF));
                  v797 = v792 | (1 << *(_BYTE*)(v796 + 104));
                  *(_WORD*)(v79 + 208) = v797;
                  v798 = (1LL << *(_BYTE*)(v796 + 250)) | v793;
                  *(_QWORD*)(v79 + 216) = v798;
                  v799 = (1 << *(_BYTE*)(v796 + 115)) | v794;
                  *(_DWORD*)(v79 + 212) = v799;
                  v800 = *(unsigned __int16*)(*(_QWORD*)(v796 + 24) + 1064LL) |
                         v795;
                  *(_WORD*)(v79 + 210) = v800;
                  v801 =
                      *(_QWORD*)(*(_QWORD*)(v686 + 64) + 8LL * (*v789 & 0xFFF));
                  v802 = v797 | (1 << *(_BYTE*)(v801 + 104));
                  *(_WORD*)(v79 + 208) = v802;
                  v803 = (1LL << *(_BYTE*)(v801 + 250)) | v798;
                  *(_QWORD*)(v79 + 216) = v803;
                  v804 = (1 << *(_BYTE*)(v801 + 115)) | v799;
                  *(_DWORD*)(v79 + 212) = v804;
                  v805 = *(unsigned __int16*)(*(_QWORD*)(v801 + 24) + 1064LL) |
                         v800;
                  *(_WORD*)(v79 + 210) = v805;
                  LOWORD(v801) = v789[1];
                  v789 += 4;
                  v806 = *(_QWORD*)(*(_QWORD*)(v686 + 64) + 8 * (v801 & 0xFFF));
                  v786 = v802 | (1 << *(_BYTE*)(v806 + 104));
                  *(_WORD*)(v79 + 208) = v786;
                  v785 = (1LL << *(_BYTE*)(v806 + 250)) | v803;
                  *(_QWORD*)(v79 + 216) = v785;
                  v784 = (1 << *(_BYTE*)(v806 + 115)) | v804;
                  *(_DWORD*)(v79 + 212) = v784;
                  v783 = *(unsigned __int16*)(*(_QWORD*)(v806 + 24) + 1064LL) |
                         v805;
                  *(_WORD*)(v79 + 210) = v783;
                } while (-(__int64)(v782 & 0xFFFFFFFFFFFFFFFCLL) != v790);
                v787 = -v790;
                v788 = v782 & 3;
                if (v788 == 0) {
                  goto LABEL_727;
                }
              LABEL_819:
                v807 = (int*)(v779 + 4 * v787);
                do {
                  v808 = *v807++;
                  --v788;
                  v809 =
                      *(_QWORD*)(*(_QWORD*)(v686 + 64) + 8LL * (v808 & 0xFFF));
                  v786 |= 1 << *(_BYTE*)(v809 + 104);
                  *(_WORD*)(v79 + 208) = v786;
                  v785 |= 1LL << *(_BYTE*)(v809 + 250);
                  *(_QWORD*)(v79 + 216) = v785;
                  v784 |= 1 << *(_BYTE*)(v809 + 115);
                  *(_DWORD*)(v79 + 212) = v784;
                  v783 |= *(unsigned __int16*)(*(_QWORD*)(v809 + 24) + 1064LL);
                  *(_WORD*)(v79 + 210) = v783;
                } while (v788 != 0);
                goto LABEL_727;
              }
              v783 = 0;
              v784 = 0;
              v785 = 0;
              v786 = 0;
              v787 = 0;
              v788 = v782 & 3;
              if (v788 != 0) {
                goto LABEL_819;
              }
            }
          }
          else {
            v686 = *v656;
          }
        LABEL_727:
          if (++v684 == v685) {
            goto LABEL_723;
          }
        }
        LODWORD(v1143) = 0;
        v1141 = 0;
        v1142 = 0;
        v1140 = nullptr;
        v1144 = nullptr;
        v1145 = nullptr;
        v1146 = 0;
        v1147 = 0;
        v1148 = 0;
        v1149 = 0;
        v1150 = 0;
        v1151 = 0;
        primeEm = UnitSkillList_84cc00(&v1140, v684, 1);
        if ((primeEm & 1) != 0) {
          v1150 = 0;
          v1151 = 0;
          v687 = (char*)v1145 - (char*)v1144;
          if ((int)((unsigned __int64)((char*)v1145 - (char*)v1144) >> 2) >=
              1) {
            v688 = *v656;
            v689 = (int)(v687 >> 2);
            if (v689 <= 1) {
              v690 = 1;
            }
            else {
              v690 = (int)(v687 >> 2);
            }
            if (v689 >= 4) {
              v697 = v1144 + 1;
              v698 = 0;
              v691 = 0;
              v692 = 0;
              v693 = 0;
              v694 = 0;
              do {
                v698 -= 4;
                v699 = *(_QWORD*)(*(_QWORD*)(v688 + 64) +
                                  8LL * (*(v697 - 2) & 0xFFF));
                v700 = v694 | (1 << *(_BYTE*)(v699 + 104));
                v701 = *(_BYTE*)(v699 + 250);
                LOWORD(v1150) = v700;
                v702 = (1LL << v701) | v693;
                v703 = *(_BYTE*)(v699 + 115);
                v1151 = v702;
                HIDWORD(v1150) = (1 << v703) | v692;
                v704 =
                    *(unsigned __int16*)(*(_QWORD*)(v699 + 24) + 1064LL) | v691;
                WORD1(v1150) = v704;
                v705 = *(_QWORD*)(*(_QWORD*)(v688 + 64) +
                                  8LL * (*(v697 - 1) & 0xFFF));
                v706 = v700 | (1 << *(_BYTE*)(v705 + 104));
                v707 = *(_BYTE*)(v705 + 250);
                LOWORD(v1150) = v706;
                v708 = (1LL << v707) | v702;
                v709 = *(_BYTE*)(v705 + 115);
                v1151 = v708;
                HIDWORD(v1150) |= 1 << v709;
                v710 =
                    *(unsigned __int16*)(*(_QWORD*)(v705 + 24) + 1064LL) | v704;
                WORD1(v1150) = v710;
                v711 =
                    *(_QWORD*)(*(_QWORD*)(v688 + 64) + 8LL * (*v697 & 0xFFF));
                v712 = v706 | (1 << *(_BYTE*)(v711 + 104));
                v713 = *(_BYTE*)(v711 + 250);
                LOWORD(v1150) = v712;
                v714 = (1LL << v713) | v708;
                v715 = *(_BYTE*)(v711 + 115);
                v1151 = v714;
                HIDWORD(v1150) |= 1 << v715;
                v716 =
                    *(unsigned __int16*)(*(_QWORD*)(v711 + 24) + 1064LL) | v710;
                WORD1(v1150) = v716;
                LOWORD(v711) = v697[1];
                v697 += 4;
                v717 = *(_QWORD*)(*(_QWORD*)(v688 + 64) + 8 * (v711 & 0xFFF));
                v694 = v712 | (1 << *(_BYTE*)(v717 + 104));
                v718 = *(_BYTE*)(v717 + 250);
                LOWORD(v1150) = v694;
                v693 = (1LL << v718) | v714;
                v719 = *(_BYTE*)(v717 + 115);
                v1151 = v693;
                primeEm = (unsigned int)(1 << v719);
                v692 = primeEm | HIDWORD(v1150);
                HIDWORD(v1150) |= primeEm;
                v691 =
                    *(unsigned __int16*)(*(_QWORD*)(v717 + 24) + 1064LL) | v716;
                WORD1(v1150) = v691;
              } while (-(__int64)(v690 & 0xFFFFFFFFFFFFFFFCLL) != v698);
              v695 = -v698;
              v696 = v690 & 3;
              if (v696 == 0) {
                goto LABEL_743;
              }
            }
            else {
              v691 = 0;
              v692 = 0;
              v693 = 0;
              v694 = 0;
              v695 = 0;
              v696 = v690 & 3;
              if (v696 == 0) {
                goto LABEL_743;
              }
            }
            v720 = (int*)v1144 + v695;
            do {
              v721 = *v720++;
              --v696;
              v722 = *(_QWORD*)(*(_QWORD*)(v688 + 64) + 8LL * (v721 & 0xFFF));
              v694 |= 1 << *(_BYTE*)(v722 + 104);
              v723 = *(_BYTE*)(v722 + 250);
              LOWORD(v1150) = v694;
              v693 |= 1LL << v723;
              v724 = *(_BYTE*)(v722 + 115);
              v1151 = v693;
              v692 |= 1 << v724;
              HIDWORD(v1150) = v692;
              v691 |= *(unsigned __int16*)(*(_QWORD*)(v722 + 24) + 1064LL);
              WORD1(v1150) = v691;
            } while (v696 != 0);
          }
        }
      LABEL_743:
        v725 = *(_QWORD*)(v79 + 904);
        v726 = *(_QWORD*)(v79 + 912);
        if (v725 >= v726) {
          v738 = *(_QWORD*)(v79 + 896);
          v739 = v725 - v738;
          v740 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v725 - v738) >> 5) + 1;
          if (v740 > 0x2AAAAAAAAAAAAAALL) {
            goto LABEL_1187;
          }
          v741 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v726 - v738) >> 5);
          if (2 * v741 > v740) {
            v740 = 2 * v741;
          }
          if (v741 >= 0x155555555555555LL) {
            v742 = 0x2AAAAAAAAAAAAAALL;
          }
          else {
            v742 = v740;
          }
          if (v742 != 0) {
            if (v742 > 0x2AAAAAAAAAAAAAALL) {
              goto LABEL_1188;
            }
            primeEm = fw_memory_HeapManager_Allocate(*i, 96 * v742, 16, 0);
            v743 = primeEm;
          }
          else {
            v743 = 0;
          }
          v744 = v743 + v739;
          *(_DWORD*)(v744 + 24) = 0;
          *(_QWORD*)(v744 + 8) = 0;
          *(_QWORD*)(v744 + 16) = 0;
          *(_QWORD*)v744 = 0;
          if ((__int64 (***)())(v743 + v739) != &v1140) {
            primeEm = GameRoutine_7fb7c0(v743 + v739);
          }
          v745 = v1143;
          *(_QWORD*)(v744 + 32) = 0;
          *(_QWORD*)(v744 + 40) = 0;
          *(_QWORD*)(v744 + 48) = 0;
          *(_DWORD*)(v744 + 24) = v745;
          v746 = v1144;
          v747 = (char*)v1145 - (char*)v1144;
          if (v1145 != v1144) {
            if (v747 < 0) {
              goto LABEL_1186;
            }
            v748 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                (char*)v1145 - (char*)v1144, 16, 0);
            v749 = v748 + v747;
            *(_QWORD*)(v744 + 32) = v748;
            *(_QWORD*)(v744 + 40) = v748;
            *(_QWORD*)(v744 + 48) = v748 + v747;
            primeEm = memcpy(v748, v746, v747);
            *(_QWORD*)(v744 + 40) = v749;
          }
          v751 = v1147;
          v750 = v1148;
          *(_QWORD*)(v744 + 64) = 0;
          *(_QWORD*)(v744 + 72) = 0;
          v752 = v750 - v751;
          *(_QWORD*)(v744 + 56) = 0;
          if (v750 != v751) {
            if (v752 < 0) {
              goto LABEL_1186;
            }
            v753 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, v750 - v751, 16, 0);
            v754 = v753 + v752;
            *(_QWORD*)(v744 + 56) = v753;
            *(_QWORD*)(v744 + 64) = v753;
            *(_QWORD*)(v744 + 72) = v753 + v752;
            memcpy(v753, v751, v752);
            *(_QWORD*)(v744 + 64) = v754;
          }
          v1124 = v743;
          v755 = v1151;
          *(_QWORD*)(v744 + 80) = v1150;
          *(_QWORD*)(v744 + 88) = v755;
          v756 = *(char**)(v79 + 904);
          v757 = *(char**)(v79 + 896);
          v758 = (char*)(v744 + v757 - v756);
          if (v757 == v756) {
            i = (_QWORD*)fw_memory_g_heap_manager_ptr;
          }
          else {
            v759 = 0;
            do {
              v764 = &v758[v759];
              *((_DWORD*)v764 + 6) = 0;
              *((_QWORD*)v764 + 1) = 0;
              *((_QWORD*)v764 + 2) = 0;
              *(_QWORD*)v764 = 0;
              if (v758 != v757) {
                GameRoutine_7fb7c0(&v758[v759]);
              }
              v760 = &v757[v759];
              v759 += 96;
              v761 = *((_DWORD*)v760 + 6);
              *((_QWORD*)v764 + 4) = 0;
              *((_QWORD*)v764 + 5) = 0;
              *((_QWORD*)v764 + 6) = 0;
              *((_DWORD*)v764 + 6) = v761;
              *((_QWORD*)v764 + 4) = *((_QWORD*)v760 + 4);
              *((_QWORD*)v764 + 5) = *((_QWORD*)v760 + 5);
              *((_QWORD*)v764 + 6) = *((_QWORD*)v760 + 6);
              *((_QWORD*)v760 + 5) = 0;
              *((_QWORD*)v760 + 6) = 0;
              *((_QWORD*)v760 + 4) = 0;
              *((_QWORD*)v764 + 8) = 0;
              *((_QWORD*)v764 + 9) = 0;
              *((_QWORD*)v764 + 7) = 0;
              *((_QWORD*)v764 + 7) = *((_QWORD*)v760 + 7);
              *((_QWORD*)v764 + 8) = *((_QWORD*)v760 + 8);
              *((_QWORD*)v764 + 9) = *((_QWORD*)v760 + 9);
              *((_QWORD*)v760 + 8) = 0;
              *((_QWORD*)v760 + 9) = 0;
              *((_QWORD*)v760 + 7) = 0;
              v763 = *((_QWORD*)v760 + 10);
              v762 = *((_QWORD*)v760 + 11);
              *((_QWORD*)v764 + 10) = v763;
              *((_QWORD*)v764 + 11) = v762;
            } while (&v757[v759] != v756);
            i = (_QWORD*)fw_memory_g_heap_manager_ptr;
            do {
              v765 = *((_QWORD*)v757 + 7);
              if (v765 != 0) {
                *((_QWORD*)v757 + 8) = v765;
                v766 = 56;
                if (*(_QWORD*)(*i + 200LL) != 0) {
                  v766 = 128;
                }
                nn_mem_StandardAllocator_Free(*i + v766, v765);
              }
              v767 = *((_QWORD*)v757 + 4);
              if (v767 != 0) {
                *((_QWORD*)v757 + 5) = v767;
                v768 = 56;
                if (*(_QWORD*)(*i + 200LL) != 0) {
                  v768 = 128;
                }
                nn_mem_StandardAllocator_Free(*i + v768, v767);
              }
              v769 = *(_QWORD*)v757;
              if (*(_QWORD*)v757 != 0) {
                *((_QWORD*)v757 + 1) = v769;
                v770 = 56;
                if (*(_QWORD*)(*i + 200LL) != 0) {
                  v770 = 128;
                }
                nn_mem_StandardAllocator_Free(*i + v770, v769);
              }
              v757 += 96;
            } while (v757 != v756);
            v757 = *(char**)(v79 + 896);
          }
          *(_QWORD*)(v79 + 896) = v758;
          v736 = v744 + 96;
          *(_QWORD*)(v79 + 904) = v744 + 96;
          *(_QWORD*)(v79 + 912) = v1124 + 96 * v742;
          v656 = GameData_212c880[0];
          if (v757 != nullptr) {
            v771 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v771 = 128;
            }
            nn_mem_StandardAllocator_Free(*i + v771, v757);
          }
        }
        else {
          *(_DWORD*)(v725 + 24) = 0;
          *(_QWORD*)(v725 + 8) = 0;
          *(_QWORD*)(v725 + 16) = 0;
          *(_QWORD*)v725 = 0;
          if ((__int64 (***)())v725 != &v1140) {
            primeEm = GameRoutine_7fb7c0(v725);
          }
          v727 = v1143;
          *(_QWORD*)(v725 + 32) = 0;
          *(_QWORD*)(v725 + 40) = 0;
          *(_QWORD*)(v725 + 48) = 0;
          *(_DWORD*)(v725 + 24) = v727;
          v728 = v1144;
          v729 = (char*)v1145 - (char*)v1144;
          if (v1145 != v1144) {
            if (v729 < 0) {
              goto LABEL_1186;
            }
            v730 = fw_memory_HeapManager_Allocate(
                *i, (char*)v1145 - (char*)v1144, 16, 0);
            v731 = v730 + v729;
            *(_QWORD*)(v725 + 32) = v730;
            *(_QWORD*)(v725 + 40) = v730;
            *(_QWORD*)(v725 + 48) = v730 + v729;
            primeEm = memcpy(v730, v728, v729);
            *(_QWORD*)(v725 + 40) = v731;
          }
          *(_QWORD*)(v725 + 64) = 0;
          *(_QWORD*)(v725 + 72) = 0;
          *(_QWORD*)(v725 + 56) = 0;
          v732 = v1147;
          v733 = v1148 - v1147;
          if (v1148 != v1147) {
            if (v733 < 0) {
              goto LABEL_1186;
            }
            v734 = fw_memory_HeapManager_Allocate(*i, v1148 - v1147, 16, 0);
            v735 = v734 + v733;
            *(_QWORD*)(v725 + 56) = v734;
            *(_QWORD*)(v725 + 64) = v734;
            *(_QWORD*)(v725 + 72) = v734 + v733;
            memcpy(v734, v732, v733);
            *(_QWORD*)(v725 + 64) = v735;
          }
          v736 = v725 + 96;
          v737 = v1151;
          *(_QWORD*)(v725 + 80) = v1150;
          *(_QWORD*)(v725 + 88) = v737;
        }
        v685 = v1131;
        v772 = v1147;
        *(_QWORD*)(v79 + 904) = v736;
        if (v772 != 0) {
          v773 = *i;
          v1148 = v772;
          v774 = 56;
          if (*(_QWORD*)(v773 + 200) != 0) {
            v774 = 128;
          }
          nn_mem_StandardAllocator_Free(v773 + v774, v772);
        }
        if (v1144 != nullptr) {
          v775 = *i;
          v1145 = v1144;
          v776 = 56;
          if (*(_QWORD*)(v775 + 200) != 0) {
            v776 = 128;
          }
          nn_mem_StandardAllocator_Free(v775 + v776, v1144);
        }
        if (v1140 != nullptr) {
          v777 = *i;
          v1141 = (unsigned __int64)v1140;
          v778 = 56;
          if (*(_QWORD*)(v777 + 200) != 0) {
            v778 = 128;
          }
          nn_mem_StandardAllocator_Free(v777 + v778, v1140);
        }
        goto LABEL_808;
      }
    LABEL_690:
      v657 = *(_QWORD*)(v79 + 928);
      v658 = *(_QWORD*)(v79 + 920);
      if (v658 != v657) {
        do {
          v677 = *(_QWORD*)(v657 - 40);
          if (v677 != 0) {
            *(_QWORD*)(v657 - 32) = v677;
            v678 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v678 = 128;
            }
            nn_mem_StandardAllocator_Free(*i + v678, v677);
          }
          v679 = *(_QWORD*)(v657 - 64);
          if (v679 != 0) {
            *(_QWORD*)(v657 - 56) = v679;
            v680 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v680 = 128;
            }
            nn_mem_StandardAllocator_Free(*i + v680, v679);
          }
          v681 = v657 - 96;
          v682 = *(_QWORD*)(v657 - 96);
          if (v682 != 0) {
            *(_QWORD*)(v657 - 88) = v682;
            v683 = 56;
            if (*(_QWORD*)(*i + 200LL) != 0) {
              v683 = 128;
            }
            nn_mem_StandardAllocator_Free(*i + v683, v682);
          }
          v657 -= 96;
        } while (v681 != v658);
      }
      v659 = *(_QWORD*)(v79 + 832);
      *(_QWORD*)(v79 + 928) = v658;
      v660 = *(_QWORD*)(v79 + 824);
      v1116 = v659;
      v661 = GameData_212c880[0];
      if (v660 != v659) {
        while (1) {
          v810 = *(_DWORD**)(v660 + 32);
          v811 = *(_DWORD**)(v660 + 40);
          v1119 = v660;
          v1132 = v811;
          if (v810 != v811) {
            break;
          }
        LABEL_822:
          v660 = v1119 + 96;
          if (v1119 + 96 == v1116) {
            goto LABEL_692;
          }
        }
        while (1) {
          if ((*v810 & 0xFFF) == 0 ||
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v661 + 64) +
                                   8LL * (*v810 & 0xFFF)) +
                        110LL) == 0) {
            goto LABEL_825;
          }
          LODWORD(v1143) = 0;
          v1141 = 0;
          v1142 = 0;
          v1140 = nullptr;
          v1144 = nullptr;
          v1145 = nullptr;
          v1146 = 0;
          v1147 = 0;
          v1148 = 0;
          v1149 = 0;
          v1150 = 0;
          v1151 = 0;
          primeEm = UnitSkillList_84cc00(&v1140, v810, 1);
          if ((primeEm & 1) != 0) {
            v1150 = 0;
            v1151 = 0;
            v812 = (char*)v1145 - (char*)v1144;
            if ((int)((unsigned __int64)((char*)v1145 - (char*)v1144) >> 2) >=
                1) {
              v813 = *v661;
              v814 = (int)(v812 >> 2);
              if (v814 <= 1) {
                v815 = 1;
              }
              else {
                v815 = (int)(v812 >> 2);
              }
              if (v814 >= 4) {
                v822 = v1144 + 1;
                v823 = 0;
                v816 = 0;
                v817 = 0;
                v818 = 0;
                v819 = 0;
                do {
                  v823 -= 4;
                  v824 = *(_QWORD*)(*(_QWORD*)(v813 + 64) +
                                    8LL * (*(v822 - 2) & 0xFFF));
                  v825 = v819 | (1 << *(_BYTE*)(v824 + 104));
                  v826 = *(_BYTE*)(v824 + 250);
                  LOWORD(v1150) = v825;
                  v827 = (1LL << v826) | v818;
                  v828 = *(_BYTE*)(v824 + 115);
                  v1151 = v827;
                  HIDWORD(v1150) = (1 << v828) | v817;
                  v829 = *(unsigned __int16*)(*(_QWORD*)(v824 + 24) + 1064LL) |
                         v816;
                  WORD1(v1150) = v829;
                  v830 = *(_QWORD*)(*(_QWORD*)(v813 + 64) +
                                    8LL * (*(v822 - 1) & 0xFFF));
                  v831 = v825 | (1 << *(_BYTE*)(v830 + 104));
                  v832 = *(_BYTE*)(v830 + 250);
                  LOWORD(v1150) = v831;
                  v833 = (1LL << v832) | v827;
                  v834 = *(_BYTE*)(v830 + 115);
                  v1151 = v833;
                  HIDWORD(v1150) |= 1 << v834;
                  v835 = *(unsigned __int16*)(*(_QWORD*)(v830 + 24) + 1064LL) |
                         v829;
                  WORD1(v1150) = v835;
                  v836 =
                      *(_QWORD*)(*(_QWORD*)(v813 + 64) + 8LL * (*v822 & 0xFFF));
                  v837 = v831 | (1 << *(_BYTE*)(v836 + 104));
                  v838 = *(_BYTE*)(v836 + 250);
                  LOWORD(v1150) = v837;
                  v839 = (1LL << v838) | v833;
                  v840 = *(_BYTE*)(v836 + 115);
                  v1151 = v839;
                  HIDWORD(v1150) |= 1 << v840;
                  v841 = *(unsigned __int16*)(*(_QWORD*)(v836 + 24) + 1064LL) |
                         v835;
                  WORD1(v1150) = v841;
                  LOWORD(v836) = v822[1];
                  v822 += 4;
                  v842 = *(_QWORD*)(*(_QWORD*)(v813 + 64) + 8 * (v836 & 0xFFF));
                  v819 = v837 | (1 << *(_BYTE*)(v842 + 104));
                  v843 = *(_BYTE*)(v842 + 250);
                  LOWORD(v1150) = v819;
                  v818 = (1LL << v843) | v839;
                  v844 = *(_BYTE*)(v842 + 115);
                  v1151 = v818;
                  primeEm = (unsigned int)(1 << v844);
                  v817 = primeEm | HIDWORD(v1150);
                  HIDWORD(v1150) |= primeEm;
                  v816 = *(unsigned __int16*)(*(_QWORD*)(v842 + 24) + 1064LL) |
                         v841;
                  WORD1(v1150) = v816;
                } while (-(__int64)(v815 & 0xFFFFFFFFFFFFFFFCLL) != v823);
                v820 = -v823;
                v821 = v815 & 3;
                if (v821 == 0) {
                  goto LABEL_841;
                }
              LABEL_839:
                v845 = (int*)v1144 + v820;
                do {
                  v846 = *v845++;
                  --v821;
                  v847 =
                      *(_QWORD*)(*(_QWORD*)(v813 + 64) + 8LL * (v846 & 0xFFF));
                  v819 |= 1 << *(_BYTE*)(v847 + 104);
                  v848 = *(_BYTE*)(v847 + 250);
                  LOWORD(v1150) = v819;
                  v818 |= 1LL << v848;
                  v849 = *(_BYTE*)(v847 + 115);
                  v1151 = v818;
                  v817 |= 1 << v849;
                  HIDWORD(v1150) = v817;
                  v816 |= *(unsigned __int16*)(*(_QWORD*)(v847 + 24) + 1064LL);
                  WORD1(v1150) = v816;
                } while (v821 != 0);
                goto LABEL_841;
              }
              v816 = 0;
              v817 = 0;
              v818 = 0;
              v819 = 0;
              v820 = 0;
              v821 = v815 & 3;
              if (v821 != 0) {
                goto LABEL_839;
              }
            }
          }
        LABEL_841:
          v850 = *(_QWORD*)(v79 + 928);
          v851 = *(_QWORD*)(v79 + 936);
          if (v850 >= v851) {
            v863 = *(_QWORD*)(v79 + 920);
            v864 = v850 - v863;
            v865 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v850 - v863) >> 5) + 1;
            if (v865 > 0x2AAAAAAAAAAAAAALL) {
              goto LABEL_1187;
            }
            v866 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v851 - v863) >> 5);
            if (2 * v866 > v865) {
              v865 = 2 * v866;
            }
            if (v866 >= 0x155555555555555LL) {
              v867 = 0x2AAAAAAAAAAAAAALL;
            }
            else {
              v867 = v865;
            }
            if (v867 != 0) {
              if (v867 > 0x2AAAAAAAAAAAAAALL) {
                goto LABEL_1188;
              }
              primeEm = fw_memory_HeapManager_Allocate(*i, 96 * v867, 16, 0);
              v868 = primeEm;
            }
            else {
              v868 = 0;
            }
            v869 = v868 + v864;
            *(_DWORD*)(v869 + 24) = 0;
            *(_QWORD*)(v869 + 8) = 0;
            *(_QWORD*)(v869 + 16) = 0;
            *(_QWORD*)v869 = 0;
            if ((__int64 (***)())(v868 + v864) != &v1140) {
              primeEm = GameRoutine_7fb7c0(v868 + v864);
            }
            v870 = v1143;
            *(_QWORD*)(v869 + 32) = 0;
            *(_QWORD*)(v869 + 40) = 0;
            *(_QWORD*)(v869 + 48) = 0;
            *(_DWORD*)(v869 + 24) = v870;
            v871 = v1144;
            v872 = (char*)v1145 - (char*)v1144;
            if (v1145 != v1144) {
              if (v872 < 0) {
                goto LABEL_1186;
              }
              v873 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr,
                  (char*)v1145 - (char*)v1144, 16, 0);
              v874 = v873 + v872;
              *(_QWORD*)(v869 + 32) = v873;
              *(_QWORD*)(v869 + 40) = v873;
              *(_QWORD*)(v869 + 48) = v873 + v872;
              primeEm = memcpy(v873, v871, v872);
              *(_QWORD*)(v869 + 40) = v874;
            }
            v876 = v1147;
            v875 = v1148;
            *(_QWORD*)(v869 + 64) = 0;
            *(_QWORD*)(v869 + 72) = 0;
            v877 = v875 - v876;
            *(_QWORD*)(v869 + 56) = 0;
            if (v875 != v876) {
              if (v877 < 0) {
                goto LABEL_1186;
              }
              v878 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v875 - v876, 16, 0);
              v879 = v878 + v877;
              *(_QWORD*)(v869 + 56) = v878;
              *(_QWORD*)(v869 + 64) = v878;
              *(_QWORD*)(v869 + 72) = v878 + v877;
              memcpy(v878, v876, v877);
              *(_QWORD*)(v869 + 64) = v879;
            }
            v1125 = v868;
            v880 = v1151;
            *(_QWORD*)(v869 + 80) = v1150;
            *(_QWORD*)(v869 + 88) = v880;
            v881 = *(char**)(v79 + 928);
            v882 = *(char**)(v79 + 920);
            v883 = (char*)(v869 + v882 - v881);
            if (v882 == v881) {
              i = (_QWORD*)fw_memory_g_heap_manager_ptr;
            }
            else {
              v884 = 0;
              do {
                v889 = &v883[v884];
                *((_DWORD*)v889 + 6) = 0;
                *((_QWORD*)v889 + 1) = 0;
                *((_QWORD*)v889 + 2) = 0;
                *(_QWORD*)v889 = 0;
                if (v883 != v882) {
                  GameRoutine_7fb7c0(&v883[v884]);
                }
                v885 = &v882[v884];
                v884 += 96;
                v886 = *((_DWORD*)v885 + 6);
                *((_QWORD*)v889 + 4) = 0;
                *((_QWORD*)v889 + 5) = 0;
                *((_QWORD*)v889 + 6) = 0;
                *((_DWORD*)v889 + 6) = v886;
                *((_QWORD*)v889 + 4) = *((_QWORD*)v885 + 4);
                *((_QWORD*)v889 + 5) = *((_QWORD*)v885 + 5);
                *((_QWORD*)v889 + 6) = *((_QWORD*)v885 + 6);
                *((_QWORD*)v885 + 5) = 0;
                *((_QWORD*)v885 + 6) = 0;
                *((_QWORD*)v885 + 4) = 0;
                *((_QWORD*)v889 + 8) = 0;
                *((_QWORD*)v889 + 9) = 0;
                *((_QWORD*)v889 + 7) = 0;
                *((_QWORD*)v889 + 7) = *((_QWORD*)v885 + 7);
                *((_QWORD*)v889 + 8) = *((_QWORD*)v885 + 8);
                *((_QWORD*)v889 + 9) = *((_QWORD*)v885 + 9);
                *((_QWORD*)v885 + 8) = 0;
                *((_QWORD*)v885 + 9) = 0;
                *((_QWORD*)v885 + 7) = 0;
                v888 = *((_QWORD*)v885 + 10);
                v887 = *((_QWORD*)v885 + 11);
                *((_QWORD*)v889 + 10) = v888;
                *((_QWORD*)v889 + 11) = v887;
              } while (&v882[v884] != v881);
              i = (_QWORD*)fw_memory_g_heap_manager_ptr;
              do {
                v890 = *((_QWORD*)v882 + 7);
                if (v890 != 0) {
                  *((_QWORD*)v882 + 8) = v890;
                  v891 = 56;
                  if (*(_QWORD*)(*i + 200LL) != 0) {
                    v891 = 128;
                  }
                  nn_mem_StandardAllocator_Free(*i + v891, v890);
                }
                v892 = *((_QWORD*)v882 + 4);
                if (v892 != 0) {
                  *((_QWORD*)v882 + 5) = v892;
                  v893 = 56;
                  if (*(_QWORD*)(*i + 200LL) != 0) {
                    v893 = 128;
                  }
                  nn_mem_StandardAllocator_Free(*i + v893, v892);
                }
                v894 = *(_QWORD*)v882;
                if (*(_QWORD*)v882 != 0) {
                  *((_QWORD*)v882 + 1) = v894;
                  v895 = 56;
                  if (*(_QWORD*)(*i + 200LL) != 0) {
                    v895 = 128;
                  }
                  nn_mem_StandardAllocator_Free(*i + v895, v894);
                }
                v882 += 96;
              } while (v882 != v881);
              v882 = *(char**)(v79 + 920);
            }
            *(_QWORD*)(v79 + 920) = v883;
            v861 = v869 + 96;
            *(_QWORD*)(v79 + 928) = v869 + 96;
            *(_QWORD*)(v79 + 936) = v1125 + 96 * v867;
            v661 = GameData_212c880[0];
            if (v882 != nullptr) {
              v896 = 56;
              if (*(_QWORD*)(*i + 200LL) != 0) {
                v896 = 128;
              }
              nn_mem_StandardAllocator_Free(*i + v896, v882);
            }
          }
          else {
            *(_DWORD*)(v850 + 24) = 0;
            *(_QWORD*)(v850 + 8) = 0;
            *(_QWORD*)(v850 + 16) = 0;
            *(_QWORD*)v850 = 0;
            if ((__int64 (***)())v850 != &v1140) {
              primeEm = GameRoutine_7fb7c0(v850);
            }
            v852 = v1143;
            *(_QWORD*)(v850 + 32) = 0;
            *(_QWORD*)(v850 + 40) = 0;
            *(_QWORD*)(v850 + 48) = 0;
            *(_DWORD*)(v850 + 24) = v852;
            v853 = v1144;
            v854 = (char*)v1145 - (char*)v1144;
            if (v1145 != v1144) {
              if (v854 < 0) {
                goto LABEL_1186;
              }
              v855 = fw_memory_HeapManager_Allocate(
                  *i, (char*)v1145 - (char*)v1144, 16, 0);
              v856 = v855 + v854;
              *(_QWORD*)(v850 + 32) = v855;
              *(_QWORD*)(v850 + 40) = v855;
              *(_QWORD*)(v850 + 48) = v855 + v854;
              primeEm = memcpy(v855, v853, v854);
              *(_QWORD*)(v850 + 40) = v856;
            }
            *(_QWORD*)(v850 + 64) = 0;
            *(_QWORD*)(v850 + 72) = 0;
            *(_QWORD*)(v850 + 56) = 0;
            v857 = v1147;
            v858 = v1148 - v1147;
            if (v1148 != v1147) {
              if (v858 < 0) {
                goto LABEL_1186;
              }
              v859 = fw_memory_HeapManager_Allocate(*i, v1148 - v1147, 16, 0);
              v860 = v859 + v858;
              *(_QWORD*)(v850 + 56) = v859;
              *(_QWORD*)(v850 + 64) = v859;
              *(_QWORD*)(v850 + 72) = v859 + v858;
              memcpy(v859, v857, v858);
              *(_QWORD*)(v850 + 64) = v860;
            }
            v861 = v850 + 96;
            v862 = v1151;
            *(_QWORD*)(v850 + 80) = v1150;
            *(_QWORD*)(v850 + 88) = v862;
          }
          v811 = v1132;
          v897 = v1147;
          *(_QWORD*)(v79 + 928) = v861;
          if (v897 != 0) {
            v898 = *i;
            v1148 = v897;
            v899 = 56;
            if (*(_QWORD*)(v898 + 200) != 0) {
              v899 = 128;
            }
            nn_mem_StandardAllocator_Free(v898 + v899, v897);
          }
          if (v1144 != nullptr) {
            v900 = *i;
            v1145 = v1144;
            v901 = 56;
            if (*(_QWORD*)(v900 + 200) != 0) {
              v901 = 128;
            }
            nn_mem_StandardAllocator_Free(v900 + v901, v1144);
          }
          if (v1140 != nullptr) {
            v902 = *i;
            v1141 = (unsigned __int64)v1140;
            v903 = 56;
            if (*(_QWORD*)(v902 + 200) != 0) {
              v903 = 128;
            }
            nn_mem_StandardAllocator_Free(v902 + v903, v1140);
          }
        LABEL_825:
          if (++v810 == v811) {
            goto LABEL_822;
          }
        }
      }
    LABEL_692:
      v662 = *(_QWORD*)(v79 + 416);
      v663 = v1118;
      *(_DWORD*)(v79 + 440) = 0;
      *(_QWORD*)(v79 + 424) = v662;
      v664 = *(_QWORD*)(v79 + 448);
      *(_QWORD*)(v79 + 496) = 0;
      *(_QWORD*)(v79 + 504) = 0;
      *(_QWORD*)(v79 + 456) = v664;
      UnitSkillList_84d5a0(v79 + 416, v1118 + 512);
      v665 = *(_QWORD*)(v79 + 512);
      *(_DWORD*)(v79 + 536) = 0;
      *(_QWORD*)(v79 + 592) = 0;
      *(_QWORD*)(v79 + 600) = 0;
      *(_QWORD*)(v79 + 520) = v665;
      *(_QWORD*)(v79 + 552) = *(_QWORD*)(v79 + 544);
      UnitSkillList_84d5a0(v79 + 512, v1118 + 496);
      v666 = *(_QWORD*)(v79 + 608);
      *(_DWORD*)(v79 + 632) = 0;
      *(_QWORD*)(v79 + 688) = 0;
      v667 = (unsigned __int16)GameData_21ca458;
      *(_QWORD*)(v79 + 696) = 0;
      *(_QWORD*)(v79 + 616) = v666;
      *(_QWORD*)(v79 + 648) = *(_QWORD*)(v79 + 640);
      if (((v667 >> *(_BYTE*)(v1118 + 104)) & 1) != 0) {
        if (*(_BYTE*)(v1118 + 272) == 3) {
          UnitSkillList_84d5a0(v79 + 608, v1118 + 512);
        }
        v668 = *(unsigned __int16*)(v1118 + 496);
        if (*(_WORD*)(v1118 + 496) != 0) {
          v669 = 8;
          do {
            v904 = *(_QWORD*)(*(_QWORD*)(v1118 + 504) + v669);
            if (*(_BYTE*)(v904 + 272) == 3) {
              UnitSkillList_84d5a0(v79 + 608, v904 + 512);
            }
            --v668;
            v669 += 16;
          } while (v668 != 0);
        }
      }
      v905 = *(_QWORD*)(v79 + 224);
      *(_DWORD*)(v79 + 248) = 0;
      *(_QWORD*)(v79 + 304) = 0;
      *(_QWORD*)(v79 + 312) = 0;
      *(_QWORD*)(v79 + 232) = v905;
      *(_QWORD*)(v79 + 264) = *(_QWORD*)(v79 + 256);
      v906 = GameData_212c880[0];
      if (*(_BYTE*)(v1118 + 104) == 2 && *(_BYTE*)(v1118 + 279) != 0) {
        LODWORD(v1140) = *(_WORD*)(v1118 + 16) & 0xFFF;
        if ((UnitSkillList_84cc00(v79 + 224, &v1140, 1) & 1) == 0) {
          goto LABEL_924;
        }
        v908 = *(_QWORD*)(v79 + 256);
        v907 = *(_QWORD*)(v79 + 264);
        *(_QWORD*)(v79 + 304) = 0;
        *(_QWORD*)(v79 + 312) = 0;
        v909 = v907 - v908;
        if ((int)((unsigned __int64)(v907 - v908) >> 2) < 1) {
          goto LABEL_924;
        }
        v910 = *v906;
        v911 = (int)(v909 >> 2);
        if (v911 <= 1) {
          v912 = 1;
        }
        else {
          v912 = (int)(v909 >> 2);
        }
        if (v911 >= 4) {
          v919 = (_DWORD*)(v908 + 8);
          v920 = 0;
          v913 = 0;
          v914 = 0;
          v915 = 0;
          v916 = 0;
          do {
            v920 -= 4;
            v921 =
                *(_QWORD*)(*(_QWORD*)(v910 + 64) + 8LL * (*(v919 - 2) & 0xFFF));
            v922 = v916 | (1 << *(_BYTE*)(v921 + 104));
            *(_WORD*)(v79 + 304) = v922;
            v923 = (1LL << *(_BYTE*)(v921 + 250)) | v915;
            *(_QWORD*)(v79 + 312) = v923;
            v924 = (1 << *(_BYTE*)(v921 + 115)) | v914;
            *(_DWORD*)(v79 + 308) = v924;
            v925 = *(unsigned __int16*)(*(_QWORD*)(v921 + 24) + 1064LL) | v913;
            *(_WORD*)(v79 + 306) = v925;
            v926 =
                *(_QWORD*)(*(_QWORD*)(v910 + 64) + 8LL * (*(v919 - 1) & 0xFFF));
            v927 = v922 | (1 << *(_BYTE*)(v926 + 104));
            *(_WORD*)(v79 + 304) = v927;
            v928 = (1LL << *(_BYTE*)(v926 + 250)) | v923;
            *(_QWORD*)(v79 + 312) = v928;
            v929 = (1 << *(_BYTE*)(v926 + 115)) | v924;
            *(_DWORD*)(v79 + 308) = v929;
            v930 = *(unsigned __int16*)(*(_QWORD*)(v926 + 24) + 1064LL) | v925;
            *(_WORD*)(v79 + 306) = v930;
            v931 = *(_QWORD*)(*(_QWORD*)(v910 + 64) + 8LL * (*v919 & 0xFFF));
            v932 = v927 | (1 << *(_BYTE*)(v931 + 104));
            *(_WORD*)(v79 + 304) = v932;
            v933 = (1LL << *(_BYTE*)(v931 + 250)) | v928;
            *(_QWORD*)(v79 + 312) = v933;
            v934 = (1 << *(_BYTE*)(v931 + 115)) | v929;
            *(_DWORD*)(v79 + 308) = v934;
            v935 = *(unsigned __int16*)(*(_QWORD*)(v931 + 24) + 1064LL) | v930;
            *(_WORD*)(v79 + 306) = v935;
            LOWORD(v931) = v919[1];
            v919 += 4;
            v936 = *(_QWORD*)(*(_QWORD*)(v910 + 64) + 8 * (v931 & 0xFFF));
            v916 = v932 | (1 << *(_BYTE*)(v936 + 104));
            *(_WORD*)(v79 + 304) = v916;
            v915 = (1LL << *(_BYTE*)(v936 + 250)) | v933;
            *(_QWORD*)(v79 + 312) = v915;
            v914 = (1 << *(_BYTE*)(v936 + 115)) | v934;
            *(_DWORD*)(v79 + 308) = v914;
            v913 = *(unsigned __int16*)(*(_QWORD*)(v936 + 24) + 1064LL) | v935;
            *(_WORD*)(v79 + 306) = v913;
          } while (-(__int64)(v912 & 0xFFFFFFFFFFFFFFFCLL) != v920);
          v917 = -v920;
          v918 = v912 & 3;
          if (v918 == 0) {
            goto LABEL_924;
          }
        }
        else {
          v913 = 0;
          v914 = 0;
          v915 = 0;
          v916 = 0;
          v917 = 0;
          v918 = v912 & 3;
          if (v918 == 0) {
          LABEL_924:
            UnitSkillList_84cf20(v79 + 224, v79 + 512, 1);
            UnitSkillList_84cf20(v79 + 224, v1139, 1);
            v663 = v1118;
            goto LABEL_925;
          }
        }
        v937 = (int*)(v908 + 4 * v917);
        do {
          v938 = *v937++;
          --v918;
          v939 = *(_QWORD*)(*(_QWORD*)(v910 + 64) + 8LL * (v938 & 0xFFF));
          v916 |= 1 << *(_BYTE*)(v939 + 104);
          *(_WORD*)(v79 + 304) = v916;
          v915 |= 1LL << *(_BYTE*)(v939 + 250);
          *(_QWORD*)(v79 + 312) = v915;
          v914 |= 1 << *(_BYTE*)(v939 + 115);
          *(_DWORD*)(v79 + 308) = v914;
          v913 |= *(unsigned __int16*)(*(_QWORD*)(v939 + 24) + 1064LL);
          *(_WORD*)(v79 + 306) = v913;
        } while (v918 != 0);
        goto LABEL_924;
      }
    LABEL_925:
      v940 = *(_QWORD*)(v79 + 320);
      *(_DWORD*)(v79 + 344) = 0;
      *(_QWORD*)(v79 + 400) = 0;
      *(_QWORD*)(v79 + 408) = 0;
      *(_QWORD*)(v79 + 328) = v940;
      *(_QWORD*)(v79 + 360) = *(_QWORD*)(v79 + 352);
      if ((unsigned int)*(unsigned __int8*)(v663 + 250) - 1 <= 1) {
        v941 = *(unsigned __int16*)(v1118 + 184);
        if (*(_WORD*)(v1118 + 184) != 0) {
          v942 = 0;
          while (1) {
            v943 = (unsigned __int16*)(*(_QWORD*)(v1118 + 192) + 16 * v942);
            v944 = *v943;
            if (*v943 != 0) {
              break;
            }
          LABEL_928:
            if (++v942 == v941) {
              goto LABEL_948;
            }
          }
          v945 = 0;
          while (1) {
            v946 = *(_QWORD*)(*((_QWORD*)v943 + 1) + 16 * v945 + 8);
            if (v946 != 0) {
              LODWORD(v946) = *(_WORD*)(v946 + 16) & 0xFFF;
            }
            LODWORD(v1140) = v946;
            if ((UnitSkillList_84cc00(v79 + 320, &v1140, 1) & 1) != 0) {
              v948 = *(_QWORD*)(v79 + 352);
              v947 = *(_QWORD*)(v79 + 360);
              *(_QWORD*)(v79 + 400) = 0;
              *(_QWORD*)(v79 + 408) = 0;
              v949 = v947 - v948;
              if ((int)((unsigned __int64)(v947 - v948) >> 2) < 1) {
                goto LABEL_931;
              }
              v950 = *v906;
              v951 = (int)(v949 >> 2);
              v952 = v951 <= 1 ? 1LL : (int)(v949 >> 2);
              if (v951 >= 4) {
                break;
              }
              v953 = 0;
              v954 = 0;
              v955 = 0;
              v956 = 0;
              v957 = 0;
              v958 = v952 & 3;
              if (v958 != 0) {
                goto LABEL_945;
              }
            }
          LABEL_931:
            if (++v945 == v944) {
              goto LABEL_928;
            }
          }
          v959 = (_DWORD*)(v948 + 8);
          v960 = 0;
          v953 = 0;
          v954 = 0;
          v955 = 0;
          v956 = 0;
          do {
            v960 -= 4;
            v961 =
                *(_QWORD*)(*(_QWORD*)(v950 + 64) + 8LL * (*(v959 - 2) & 0xFFF));
            v962 = v956 | (1 << *(_BYTE*)(v961 + 104));
            *(_WORD*)(v79 + 400) = v962;
            v963 = (1LL << *(_BYTE*)(v961 + 250)) | v955;
            *(_QWORD*)(v79 + 408) = v963;
            v964 = (1 << *(_BYTE*)(v961 + 115)) | v954;
            *(_DWORD*)(v79 + 404) = v964;
            v965 = *(unsigned __int16*)(*(_QWORD*)(v961 + 24) + 1064LL) | v953;
            *(_WORD*)(v79 + 402) = v965;
            v966 =
                *(_QWORD*)(*(_QWORD*)(v950 + 64) + 8LL * (*(v959 - 1) & 0xFFF));
            v967 = v962 | (1 << *(_BYTE*)(v966 + 104));
            *(_WORD*)(v79 + 400) = v967;
            v968 = (1LL << *(_BYTE*)(v966 + 250)) | v963;
            *(_QWORD*)(v79 + 408) = v968;
            v969 = (1 << *(_BYTE*)(v966 + 115)) | v964;
            *(_DWORD*)(v79 + 404) = v969;
            v970 = *(unsigned __int16*)(*(_QWORD*)(v966 + 24) + 1064LL) | v965;
            *(_WORD*)(v79 + 402) = v970;
            v971 = *(_QWORD*)(*(_QWORD*)(v950 + 64) + 8LL * (*v959 & 0xFFF));
            v972 = v967 | (1 << *(_BYTE*)(v971 + 104));
            *(_WORD*)(v79 + 400) = v972;
            v973 = (1LL << *(_BYTE*)(v971 + 250)) | v968;
            *(_QWORD*)(v79 + 408) = v973;
            v974 = (1 << *(_BYTE*)(v971 + 115)) | v969;
            *(_DWORD*)(v79 + 404) = v974;
            v975 = *(unsigned __int16*)(*(_QWORD*)(v971 + 24) + 1064LL) | v970;
            *(_WORD*)(v79 + 402) = v975;
            LOWORD(v971) = v959[1];
            v959 += 4;
            v976 = *(_QWORD*)(*(_QWORD*)(v950 + 64) + 8 * (v971 & 0xFFF));
            v956 = v972 | (1 << *(_BYTE*)(v976 + 104));
            *(_WORD*)(v79 + 400) = v956;
            v955 = (1LL << *(_BYTE*)(v976 + 250)) | v973;
            *(_QWORD*)(v79 + 408) = v955;
            v954 = (1 << *(_BYTE*)(v976 + 115)) | v974;
            *(_DWORD*)(v79 + 404) = v954;
            v953 = *(unsigned __int16*)(*(_QWORD*)(v976 + 24) + 1064LL) | v975;
            *(_WORD*)(v79 + 402) = v953;
          } while (-(__int64)(v952 & 0xFFFFFFFFFFFFFFFCLL) != v960);
          v957 = -v960;
          v958 = v952 & 3;
          if (v958 == 0) {
            goto LABEL_931;
          }
        LABEL_945:
          v977 = (int*)(v948 + 4 * v957);
          do {
            v978 = *v977++;
            --v958;
            v979 = *(_QWORD*)(*(_QWORD*)(v950 + 64) + 8LL * (v978 & 0xFFF));
            v956 |= 1 << *(_BYTE*)(v979 + 104);
            *(_WORD*)(v79 + 400) = v956;
            v955 |= 1LL << *(_BYTE*)(v979 + 250);
            *(_QWORD*)(v79 + 408) = v955;
            v954 |= 1 << *(_BYTE*)(v979 + 115);
            *(_DWORD*)(v79 + 404) = v954;
            v953 |= *(unsigned __int16*)(*(_QWORD*)(v979 + 24) + 1064LL);
            *(_WORD*)(v79 + 402) = v953;
          } while (v958 != 0);
          goto LABEL_931;
        }
      }
    LABEL_948:
      v2 = v1118;
      *(_QWORD*)(v79 + 952) = *(_QWORD*)(v79 + 944);
      *(_QWORD*)(v79 + 976) = *(_QWORD*)(v79 + 968);
      game_FlagCondition_Append(v79 + 944, v1118 + 216);
      *(_QWORD*)(v79 + 1000) = *(_QWORD*)(v79 + 992);
      *(_QWORD*)(v79 + 1024) = *(_QWORD*)(v79 + 1016);
      game_FlagCondition_Append(v79 + 992, v1118 + 232);
      *(_QWORD*)(v79 + 1048) = *(_QWORD*)(v79 + 1040);
      GameRoutine_705590(v79 + 1040, *(unsigned __int8*)(v2 + 118),
                         *(unsigned __int16*)(v2 + 120),
                         *(unsigned __int8*)(v2 + 122),
                         *(unsigned __int16*)(v2 + 124));
      GameRoutine_705590(v79 + 1040, *(unsigned __int8*)(v2 + 126),
                         *(unsigned __int16*)(v2 + 128),
                         *(unsigned __int8*)(v2 + 130),
                         *(unsigned __int16*)(v2 + 132));
      v980 = *(_QWORD*)(v79 + 952);
      v981 = *(_QWORD*)(v79 + 944);
      *(_BYTE*)(v79 + 1120) = 0;
      v982 = v980 == v981 && *(_QWORD*)(v79 + 1000) == *(_QWORD*)(v79 + 992);
      v983 = *(_QWORD*)(v79 + 808);
      v984 = !v982;
      *(_BYTE*)(v79 + 1121) = v984;
      v990 = v983 != *(_QWORD*)(v79 + 800) ||
             *(_QWORD*)(v79 + 832) != *(_QWORD*)(v79 + 824) ||
             *(_QWORD*)(v79 + 856) != *(_QWORD*)(v79 + 848) ||
             *(_QWORD*)(v79 + 880) != *(_QWORD*)(v79 + 872) ||
             *(_QWORD*)(v79 + 904) != *(_QWORD*)(v79 + 896) ||
             *(_QWORD*)(v79 + 928) != *(_QWORD*)(v79 + 920);
      *(_BYTE*)(v79 + 1122) = v990;
      primeEm = *(_QWORD*)(v1118 + 880);
      if (primeEm != 0) {
        primeEm = strstr(primeEm, "_SID_");
        if (primeEm == 0) {
          *(_BYTE*)(v79 + 1120) = 1;
        }
      }
      if (*(_QWORD*)(v1118 + 48) != 0 && *(_WORD*)(v1118 + 56) != 0) {
        v991 = 8LL * *(unsigned __int16*)(v1118 + 56);
        v992 = 0;
        do {
          primeEm = game_HashString(*(_QWORD*)(*(_QWORD*)(v1118 + 64) + v992));
          v992 += 8;
        } while (v991 != v992);
      }
      v74 = GameData_212c880[0];
      v76 = v1114 + 1;
      if (v1114 + 1 == v1113) {
        v75 = *GameData_212c880[0];
        v76 = *(unsigned __int64**)(*GameData_212c880[0] + 64);
        v77 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
        goto LABEL_982;
      }
    }
    while (1) {
      LODWORD(v1140) = *(_WORD*)(v78 + 16) & 0xFFF;
      primeEm = UnitSkillList_84cc00(v79 + 32, &v1140, 1);
      if ((primeEm & 1) != 0) {
        v113 = *(_QWORD*)(v79 + 64);
        v112 = *(_QWORD*)(v79 + 72);
        *(_QWORD*)(v79 + 112) = 0;
        *(_QWORD*)(v79 + 120) = 0;
        v114 = v112 - v113;
        if ((int)((unsigned __int64)(v112 - v113) >> 2) < 1) {
          goto LABEL_198;
        }
        v115 = *v74;
        v116 = (int)(v114 >> 2);
        v117 = v116 <= 1 ? 1LL : (int)(v114 >> 2);
        if (v116 >= 4) {
          break;
        }
        v118 = 0;
        v119 = 0;
        v120 = 0;
        v121 = 0;
        v122 = 0;
        v123 = v117 & 3;
        if (v123 != 0) {
          goto LABEL_210;
        }
      }
    LABEL_198:
      v78 = *(_QWORD*)(v78 + 552);
      if (v78 == 0) {
        goto LABEL_188;
      }
    }
    v124 = (_DWORD*)(v113 + 8);
    v125 = 0;
    v118 = 0;
    v119 = 0;
    v120 = 0;
    v121 = 0;
    do {
      v125 -= 4;
      v126 = *(_QWORD*)(*(_QWORD*)(v115 + 64) + 8LL * (*(v124 - 2) & 0xFFF));
      v127 = v121 | (1 << *(_BYTE*)(v126 + 104));
      *(_WORD*)(v79 + 112) = v127;
      v128 = (1LL << *(_BYTE*)(v126 + 250)) | v120;
      *(_QWORD*)(v79 + 120) = v128;
      v129 = (1 << *(_BYTE*)(v126 + 115)) | v119;
      *(_DWORD*)(v79 + 116) = v129;
      v130 = *(unsigned __int16*)(*(_QWORD*)(v126 + 24) + 1064LL) | v118;
      *(_WORD*)(v79 + 114) = v130;
      v131 = *(_QWORD*)(*(_QWORD*)(v115 + 64) + 8LL * (*(v124 - 1) & 0xFFF));
      v132 = v127 | (1 << *(_BYTE*)(v131 + 104));
      *(_WORD*)(v79 + 112) = v132;
      v133 = (1LL << *(_BYTE*)(v131 + 250)) | v128;
      *(_QWORD*)(v79 + 120) = v133;
      v134 = (1 << *(_BYTE*)(v131 + 115)) | v129;
      *(_DWORD*)(v79 + 116) = v134;
      v135 = *(unsigned __int16*)(*(_QWORD*)(v131 + 24) + 1064LL) | v130;
      *(_WORD*)(v79 + 114) = v135;
      v136 = *(_QWORD*)(*(_QWORD*)(v115 + 64) + 8LL * (*v124 & 0xFFF));
      v137 = v132 | (1 << *(_BYTE*)(v136 + 104));
      *(_WORD*)(v79 + 112) = v137;
      v138 = (1LL << *(_BYTE*)(v136 + 250)) | v133;
      *(_QWORD*)(v79 + 120) = v138;
      v139 = (1 << *(_BYTE*)(v136 + 115)) | v134;
      *(_DWORD*)(v79 + 116) = v139;
      v140 = *(unsigned __int16*)(*(_QWORD*)(v136 + 24) + 1064LL) | v135;
      *(_WORD*)(v79 + 114) = v140;
      LOWORD(v136) = v124[1];
      v124 += 4;
      v141 = *(_QWORD*)(*(_QWORD*)(v115 + 64) + 8 * (v136 & 0xFFF));
      v121 = v137 | (1 << *(_BYTE*)(v141 + 104));
      *(_WORD*)(v79 + 112) = v121;
      v120 = (1LL << *(_BYTE*)(v141 + 250)) | v138;
      *(_QWORD*)(v79 + 120) = v120;
      primeEm = (unsigned int)(1 << *(_BYTE*)(v141 + 115));
      v119 = primeEm | v139;
      *(_DWORD*)(v79 + 116) = v119;
      v118 = *(unsigned __int16*)(*(_QWORD*)(v141 + 24) + 1064LL) | v140;
      *(_WORD*)(v79 + 114) = v118;
    } while (-(__int64)(v117 & 0xFFFFFFFFFFFFFFFCLL) != v125);
    v122 = -v125;
    v123 = v117 & 3;
    if (v123 == 0) {
      goto LABEL_198;
    }
  LABEL_210:
    v142 = (int*)(v113 + 4 * v122);
    do {
      v143 = *v142++;
      --v123;
      v144 = *(_QWORD*)(*(_QWORD*)(v115 + 64) + 8LL * (v143 & 0xFFF));
      v121 |= 1 << *(_BYTE*)(v144 + 104);
      *(_WORD*)(v79 + 112) = v121;
      v120 |= 1LL << *(_BYTE*)(v144 + 250);
      *(_QWORD*)(v79 + 120) = v120;
      v119 |= 1 << *(_BYTE*)(v144 + 115);
      *(_DWORD*)(v79 + 116) = v119;
      v118 |= *(unsigned __int16*)(*(_QWORD*)(v144 + 24) + 1064LL);
      *(_WORD*)(v79 + 114) = v118;
    } while (v123 != 0);
    goto LABEL_198;
  }
LABEL_982:
  while (v76 != v77) {
    v993 = *v76;
    v994 = *(_QWORD*)(*v76 + 704);
    if (v994 != 0) {
      *(_DWORD*)(*(_QWORD*)(v993 + 24) + 8LL) = *(_WORD*)(v993 + 16) & 0xFFF;
      *(_DWORD*)(*(_QWORD*)(v993 + 24) + 12LL) = *(_WORD*)(v994 + 16) & 0xFFF;
      *(_DWORD*)(*(_QWORD*)(v994 + 24) + 8LL) = *(_WORD*)(v993 + 16) & 0xFFF;
      *(_DWORD*)(*(_QWORD*)(v994 + 24) + 12LL) = *(_WORD*)(v994 + 16) & 0xFFF;
    }
    v995 = *(_QWORD*)(v993 + 24);
    v996 = *(_DWORD**)(v995 + 352);
    v997 = *(_DWORD**)(v995 + 360);
    if (v996 != v997) {
      while (1) {
        v998 = *(unsigned __int8*)(v993 + 250);
        v999 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)(v75 + 64) + 8LL * (*v996 & 0xFFF)) +
                     24LL);
        if (v998 == 2) {
          break;
        }
        if (v998 != 1 || *(_QWORD*)(v999 + 1096) != 0) {
        LABEL_989:
          if (++v996 == v997) {
            goto LABEL_981;
          }
        }
        else {
          *(_QWORD*)(v999 + 1096) = v993;
          if (++v996 == v997) {
            goto LABEL_981;
          }
        }
      }
      if (*(_QWORD*)(v999 + 1104) == 0) {
        *(_QWORD*)(v999 + 1104) = v993;
      }
      goto LABEL_989;
    }
  LABEL_981:
    ++v76;
  }
  result = (__int64*)UnitSkillList_7c6d00();
  if (GameData_21ca410 != 0) {
    v1001 = (_QWORD*)GameData_21ca408;
    if (GameData_21ca408 != 0) {
      v2 = 56;
      do {
        v1003 = (_QWORD*)*v1001;
        v1004 = v1001[3];
        if (v1004 != 0) {
          v1005 = *i;
          v1001[4] = v1004;
          if (*(_QWORD*)(v1005 + 200) != 0) {
            v1006 = 128;
          }
          else {
            v1006 = 56;
          }
          nn_mem_StandardAllocator_Free(v1005 + v1006, v1004);
        }
        if (*(_QWORD*)(*i + 200LL) != 0) {
          v1002 = 128;
        }
        else {
          v1002 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free(*i + v1002, v1001);
        v1001 = v1003;
      } while (v1003 != nullptr);
    }
    GameData_21ca408 = 0;
    v74 = GameData_212c880[0];
    if (GameData_21ca400 != 0) {
      v1007 = GameData_21ca400 & 7;
      if ((unsigned __int64)GameData_21ca400 >= 8) {
        v1048 = GameData_21ca400 & 0xFFFFFFFFFFFFFFF8LL;
        v1008 = 0;
        do {
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1008) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1008 + 8) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1008 + 16) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1008 + 24) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1008 + 32) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1008 + 40) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v1008 + 48) = 0;
          v1049 = GameData_21ca3f8 + 8 * v1008;
          v1008 += 8;
          *(_QWORD*)(v1049 + 56) = 0;
        } while (v1048 != v1008);
      }
      else {
        v1008 = 0;
      }
      if (v1007 != 0) {
        v1050 = 8 * v1008;
        do {
          --v1007;
          *(_QWORD*)(GameData_21ca3f8 + v1050) = 0;
          v1050 += 8;
        } while (v1007 != 0);
      }
    }
    GameData_21ca410 = 0;
  }
  if (GameData_21ca438 != 0) {
    v1051 = (_QWORD*)GameData_21ca430;
    if (GameData_21ca430 != 0) {
      do {
        v1052 = (_QWORD*)*v1051;
        if (*(_QWORD*)(*i + 200LL) != 0) {
          v1053 = 128;
        }
        else {
          v1053 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free(*i + v1053, v1051);
        v1051 = v1052;
      } while (v1052 != nullptr);
    }
    GameData_21ca430 = 0;
    v74 = GameData_212c880[0];
    if (GameData_21ca428 != 0) {
      v1054 = GameData_21ca428 & 7;
      if ((unsigned __int64)GameData_21ca428 >= 8) {
        v1056 = GameData_21ca428 & 0xFFFFFFFFFFFFFFF8LL;
        v1055 = 0;
        do {
          *(_QWORD*)(GameData_21ca420 + 8 * v1055) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1055 + 8) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1055 + 16) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1055 + 24) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1055 + 32) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1055 + 40) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v1055 + 48) = 0;
          v1057 = GameData_21ca420 + 8 * v1055;
          v1055 += 8;
          *(_QWORD*)(v1057 + 56) = 0;
        } while (v1056 != v1055);
      }
      else {
        v1055 = 0;
      }
      if (v1054 != 0) {
        v1058 = 8 * v1055;
        do {
          --v1054;
          *(_QWORD*)(GameData_21ca420 + v1058) = 0;
          v1058 += 8;
        } while (v1054 != 0);
      }
    }
    GameData_21ca438 = 0;
  }
  v1059 = *v74;
  v1060 = *(unsigned __int64**)(*v74 + 64);
  v1061 = *(unsigned __int64**)(*v74 + 72);
  if (v1060 != v1061) {
    while (1) {
      v1064 = *v1060;
      v1144 = &v1140;
      v1065 = *(_QWORD*)(v1064 + 24);
      v1140 = GameData_1f92bd0;
      v1141 = v1064;
      if (*(_BYTE*)(v1065 + 1121) == 1) {
        v1066 = *(_QWORD*)(v1065 + 944);
        v2 = *(_QWORD*)(v1065 + 952);
        if (v1066 != v2) {
          while (1) {
            v66 = (__int64)v1144;
            LOBYTE(v1152) = *(_BYTE*)(v1066 + 16);
            if (v1144 == nullptr) {
              break;
            }
            ((void (*)(__int64 (***)(), __int64, __int64*))(*v1144)[6])(
                v1144, v1066, &v1152);
            v1066 += 24;
            if (v1066 == v2) {
              goto LABEL_1068;
            }
          }
        LABEL_138:
          GameRoutine_60a310_alt1(v66);
        }
      LABEL_1068:
        v1067 = *(_QWORD*)(v1065 + 992);
        for (j = *(_QWORD*)(v1065 + 1000); v1067 != j; v1067 += 24) {
          v66 = (__int64)v1144;
          LOBYTE(v1152) = *(_BYTE*)(v1067 + 16) ^ 1;
          if (v1144 == nullptr) {
            goto LABEL_138;
          }
          ((void (*)(__int64 (***)(), __int64, __int64*))(*v1144)[6])(
              v1144, v1067, &v1152);
        }
      }
      result = (__int64*)v1144;
      if (v1144 == &v1140) {
        break;
      }
      if (v1144 != nullptr) {
        v1069 = 5;
      LABEL_1075:
        result = (__int64*)(*v1144)[v1069]();
      }
      if (*(_BYTE*)(v1064 + 250) == 20) {
        v1070 = *(unsigned __int64**)(v1064 + 576);
        if (v1070 != nullptr) {
          v1071 = *v1070;
          v1072 = GameData_21ca428;
          if (GameData_21ca428 != 0 && GameData_21ca438 != 0) {
            v1073 = GameData_21ca428 - 1;
            if ((GameData_21ca428 & (GameData_21ca428 - 1)) != 0) {
              v1074 = *v1070;
              if (v1071 >= GameData_21ca428) {
                v1074 = v1071 % GameData_21ca428;
              }
            }
            else {
              v1074 = v1073 & v1071;
            }
            v1077 = ((GameData_21ca428 -
                      (((unsigned __int64)GameData_21ca428 >> 1) &
                       0x5555555555555555LL)) &
                     0x3333333333333333LL) +
                    (((GameData_21ca428 -
                       (((unsigned __int64)GameData_21ca428 >> 1) &
                        0x5555555555555555LL)) >>
                      2) &
                     0x3333333333333333LL);
            v1078 = (0x101010101010101LL *
                     ((v1077 + (v1077 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                    56;
            v1079 = *(_QWORD**)(GameData_21ca420 + 8 * v1074);
            if (v1079 != nullptr) {
              v1080 = (_QWORD*)*v1079;
              if (v1080 != nullptr) {
                if ((GameData_21ca428 & v1073) == 0) {
                  while (1) {
                    v1082 = v1080[1];
                    if (v1082 == v1071) {
                      if (v1080[2] == v1071) {
                        goto LABEL_1063;
                      }
                    }
                    else if ((v1082 & v1073) != v1074) {
                      goto LABEL_1103;
                    }
                    v1080 = (_QWORD*)*v1080;
                    if (v1080 == nullptr) {
                      goto LABEL_1103;
                    }
                  }
                }
                while (1) {
                  v1081 = v1080[1];
                  if (v1081 == v1071) {
                    if (v1080[2] == v1071) {
                      goto LABEL_1063;
                    }
                  }
                  else {
                    if (v1081 >= GameData_21ca428) {
                      v1081 %= (unsigned __int64)GameData_21ca428;
                    }
                    if (v1081 != v1074) {
                      goto LABEL_1103;
                    }
                  }
                  v1080 = (_QWORD*)*v1080;
                  if (v1080 == nullptr) {
                    goto LABEL_1103;
                  }
                }
              }
            }
          LABEL_1105:
            if (v1078 > 1) {
              v2 = v1071;
              if (v1071 >= GameData_21ca428) {
                v2 = v1071 % GameData_21ca428;
              }
            }
            else {
              v2 = (GameData_21ca428 - 1) & v1071;
            }
            v1084 = *(__int64***)(GameData_21ca420 + 8 * v2);
            if (v1084 != nullptr) {
              v1085 = *v1084;
              if (*v1084 != nullptr) {
                if (v1078 < 2) {
                  while (1) {
                    v1087 = v1085[1];
                    if (v1087 == v1071) {
                      if (v1085[2] == v1071) {
                        goto LABEL_1062;
                      }
                    }
                    else if ((v1087 & (GameData_21ca428 - 1)) != v2) {
                      goto LABEL_1124;
                    }
                    v1085 = (__int64*)*v1085;
                    if (v1085 == nullptr) {
                      goto LABEL_1124;
                    }
                  }
                }
                do {
                  v1086 = v1085[1];
                  if (v1086 == v1071) {
                    if (v1085[2] == v1071) {
                      goto LABEL_1062;
                    }
                  }
                  else {
                    if (v1086 >= GameData_21ca428) {
                      v1086 %= (unsigned __int64)GameData_21ca428;
                    }
                    if (v1086 != v2) {
                      break;
                    }
                  }
                  v1085 = (__int64*)*v1085;
                } while (v1085 != nullptr);
              }
            }
          }
          else {
          LABEL_1103:
            if (GameData_21ca428 != 0) {
              v1083 = ((GameData_21ca428 -
                        (((unsigned __int64)GameData_21ca428 >> 1) &
                         0x5555555555555555LL)) &
                       0x3333333333333333LL) +
                      (((GameData_21ca428 -
                         (((unsigned __int64)GameData_21ca428 >> 1) &
                          0x5555555555555555LL)) >>
                        2) &
                       0x3333333333333333LL);
              v1078 = (0x101010101010101LL *
                       ((v1083 + (v1083 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >>
                      56;
              goto LABEL_1105;
            }
          }
        LABEL_1124:
          result = (__int64*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
          v1085 = result;
          *result = 0;
          result[1] = v1071;
          result[2] = v1071;
          result[3] = 0;
          v1088 = (float)(unsigned __int64)(GameData_21ca438 + 1);
          if (v1072 == 0 ||
              (float)(*(float*)&GameData_21ca440 * (float)v1072) < v1088) {
            v1089 = v1088 / *(float*)&GameData_21ca440;
            v1090 = (v1072 & (v1072 - 1)) != 0;
            if (v1072 < 3) {
              v1090 = true;
            }
            v1091 = v1090 | (2 * v1072);
            v1092 = vcvtps_u64_f32(v1089);
            if (v1091 <= v1092) {
              v1093 = v1092;
            }
            else {
              v1093 = v1091;
            }
            if (v1093 == 1) {
              v1093 = 2;
            }
            else if ((v1093 & (v1093 - 1)) != 0) {
              result = (__int64*)std___1___next_prime(v1093);
              v1093 = (unsigned __int64)result;
              v1072 = GameData_21ca428;
            }
            if (v1093 > v1072) {
              goto LABEL_1136;
            }
            if (v1093 < v1072) {
              result = (__int64*)vcvtps_u64_f32(
                  (float)(unsigned __int64)GameData_21ca438 /
                  *(float*)&GameData_21ca440);
              if (v1072 < 3 || (v1072 & (v1072 - 1)) != 0) {
                result = (__int64*)std___1___next_prime(result);
              }
              else {
                v1094 = 1LL << -(char)__clz((unsigned __int64)result - 1);
                if ((unsigned __int64)result >= 2) {
                  result = (__int64*)v1094;
                }
              }
              if (v1093 <= (unsigned __int64)result) {
                v1093 = (unsigned __int64)result;
              }
              if (v1093 < v1072) {
              LABEL_1136:
                result = (__int64*)GameRoutine_707e20(&GameData_21ca420, v1093);
              }
            }
            v1072 = GameData_21ca428;
            if ((GameData_21ca428 & (GameData_21ca428 - 1)) != 0) {
              if (v1071 >= GameData_21ca428) {
                v2 = v1071 % GameData_21ca428;
              }
              else {
                v2 = v1071;
              }
            }
            else {
              v2 = (GameData_21ca428 - 1) & v1071;
            }
          }
          v1062 = GameData_21ca420;
          v1063 = *(__int64**)(GameData_21ca420 + 8 * v2);
          if (v1063 != nullptr) {
            *v1085 = *v1063;
            *v1063 = (__int64)v1085;
          }
          else {
            v1075 = GameData_21ca430;
            GameData_21ca430 = (__int64)v1085;
            *v1085 = v1075;
            *(_QWORD*)(v1062 + 8 * v2) = &GameData_21ca430;
            if (*v1085 != 0) {
              v1076 = *(_QWORD*)(*v1085 + 8);
              if ((v1072 & (v1072 - 1)) != 0) {
                if (v1076 >= v1072) {
                  v1076 %= v1072;
                }
              }
              else {
                v1076 &= v1072 - 1;
              }
              *(_QWORD*)(GameData_21ca420 + 8 * v1076) = v1085;
            }
          }
          ++GameData_21ca438;
        LABEL_1062:
          v1085[3] = v1064;
        }
      }
    LABEL_1063:
      ++v1060;
      i = (_QWORD*)fw_memory_g_heap_manager_ptr;
      if (v1060 == v1061) {
        v1059 = *GameData_212c880[0];
        v1060 = *(unsigned __int64**)(*GameData_212c880[0] + 64);
        v1061 = *(unsigned __int64**)(*GameData_212c880[0] + 72);
        goto LABEL_1154;
      }
    }
    v1069 = 4;
    goto LABEL_1075;
  }
LABEL_1154:
  while (v1060 != v1061) {
    if (*(_BYTE*)(*v1060 + 115) == 14) {
      v1095 = *(_QWORD*)(*v1060 + 24);
      v1096 = *(_DWORD**)(v1095 + 448);
      v1097 = *(_DWORD**)(v1095 + 456);
      while (v1096 != v1097) {
        v1098 = *(_QWORD*)(*(_QWORD*)(v1059 + 64) + 8LL * (*v1096 & 0xFFF));
        if (*(_BYTE*)(v1098 + 115) == 14) {
          *(_BYTE*)(*(_QWORD*)(v1098 + 24) + 1123LL) = 1;
        }
        ++v1096;
      }
    }
    ++v1060;
  }
  if (v1112[19] != 0) {
    v1099 = (_QWORD*)v1112[18];
    if (v1099 != nullptr) {
      do {
        v1100 = (_QWORD*)*v1099;
        if (*(_QWORD*)(*i + 200LL) != 0) {
          v1101 = 128;
        }
        else {
          v1101 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free(*i + v1101, v1099);
        v1099 = v1100;
      } while (v1100 != nullptr);
    }
    v1102 = v1112[17];
    v1112[18] = 0;
    if (v1102 != 0) {
      v1103 = v1102 & 7;
      if (v1102 >= 8) {
        v1105 = v1102 & 0xFFFFFFFFFFFFFFF8LL;
        v1104 = 0;
        do {
          *(_QWORD*)(v1112[16] + 8 * v1104) = 0;
          *(_QWORD*)(v1112[16] + 8 * v1104 + 8) = 0;
          *(_QWORD*)(v1112[16] + 8 * v1104 + 16) = 0;
          *(_QWORD*)(v1112[16] + 8 * v1104 + 24) = 0;
          *(_QWORD*)(v1112[16] + 8 * v1104 + 32) = 0;
          *(_QWORD*)(v1112[16] + 8 * v1104 + 40) = 0;
          *(_QWORD*)(v1112[16] + 8 * v1104 + 48) = 0;
          v1106 = v1112[16] + 8 * v1104;
          v1104 += 8;
          *(_QWORD*)(v1106 + 56) = 0;
        } while (v1105 != v1104);
      }
      else {
        v1104 = 0;
      }
      if (v1103 != 0) {
        v1107 = 8 * v1104;
        do {
          --v1103;
          *(_QWORD*)(v1112[16] + v1107) = 0;
          v1107 += 8;
        } while (v1103 != 0);
      }
    }
    v1112[19] = 0;
  }
  v1108 = (unsigned int**)v1112[8];
  v1109 = (unsigned int**)v1112[9];
  while (v1108 != v1109) {
    v1110 = *v1108;
    v1111 = **v1108;
    if ((_DWORD)v1111 != 0) {
      GameRoutine_7095c0(v1112 + 1, v1111, *v1108);
    }
    result = (__int64*)Resources_66bfc0(v1110);
    if ((_DWORD)result != 0) {
      result =
          (__int64*)GameRoutine_7095c0(v1112 + 1, (unsigned int)result, v1110);
    }
    ++v1108;
  }
  return result;
}

__int64 SkillFile_Unknown5(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                           __int64 a5, __int64 a6)
{
  __int64* v6;
  __int64 result;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;

  v6 = GameData_212d328;
  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)GameData_212d328) =
      0;
  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v6) = 0;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6) = 0;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = 0;
  *v6 = 0;
  v6[1] = 0;
  result = memset(game_g_shared_system_skills_ptr, 0, 596, a4, a5, a6);
  if (GameData_21ca410 != 0) {
    v8 = (_QWORD*)GameData_21ca408;
    if (GameData_21ca408 != 0) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v8;
        v12 = v8[3];
        if (v12 != 0) {
          v13 = *(_QWORD*)v9;
          v8[4] = v12;
          if (*(_QWORD*)(v13 + 200) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(v13 + v14, v12);
        }
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v10, v8);
        v8 = v11;
      } while (v11 != nullptr);
    }
    GameData_21ca408 = 0;
    if (GameData_21ca400 != 0) {
      v15 = GameData_21ca400 & 7;
      if ((unsigned __int64)GameData_21ca400 >= 8) {
        v17 = GameData_21ca400 & 0xFFFFFFFFFFFFFFF8LL;
        v16 = 0;
        do {
          *(_QWORD*)(GameData_21ca3f8 + 8 * v16) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v16 + 8) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v16 + 16) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v16 + 24) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v16 + 32) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v16 + 40) = 0;
          *(_QWORD*)(GameData_21ca3f8 + 8 * v16 + 48) = 0;
          v18 = GameData_21ca3f8 + 8 * v16;
          v16 += 8;
          *(_QWORD*)(v18 + 56) = 0;
        } while (v17 != v16);
      }
      else {
        v16 = 0;
      }
      if (v15 != 0) {
        v19 = 8 * v16;
        do {
          --v15;
          *(_QWORD*)(GameData_21ca3f8 + v19) = 0;
          v19 += 8;
        } while (v15 != 0);
      }
    }
    GameData_21ca410 = 0;
  }
  if (GameData_21ca438 != 0) {
    v20 = (_QWORD*)GameData_21ca430;
    if (GameData_21ca430 != 0) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23, v20);
        v20 = v22;
      } while (v22 != nullptr);
    }
    GameData_21ca430 = 0;
    if (GameData_21ca428 != 0) {
      v24 = GameData_21ca428 & 7;
      if ((unsigned __int64)GameData_21ca428 >= 8) {
        v26 = GameData_21ca428 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(GameData_21ca420 + 8 * v25) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v25 + 8) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v25 + 16) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v25 + 24) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v25 + 32) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v25 + 40) = 0;
          *(_QWORD*)(GameData_21ca420 + 8 * v25 + 48) = 0;
          v27 = GameData_21ca420 + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v28 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(GameData_21ca420 + v28) = 0;
          v28 += 8;
        } while (v24 != 0);
      }
    }
    GameData_21ca438 = 0;
  }
  return result;
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
