#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_anonymous_RuntimeBuffer_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RuntimeBuffer_Destructor(__int64 result);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_anonymous_RuntimeBuffer_Build_closure_Invoke_alt1(
    __int64 result,
    __int64 a2) __asm__("game_anonymous_RuntimeBuffer_Build_closure_Invoke");
__attribute__((swiftcall)) void game_ae0900(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64* GameRoutine_7f3400(__int64* result, _QWORD*);
__int64* game_FlagConditionList_Assign(__int64*, unsigned __int16*);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_693d40(__int64*, __int64*);
__int64 GameRoutine_892760(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 atoi(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString(__int64 result);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_1fa7060;
extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_21f1760;
extern _UNKNOWN GameData_21f1770;
extern __int64 (*GameData_1fa7488[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212c8a0;
extern __int64 GameData_212c998[148];
extern __int64 GameData_212ca10[133];
extern __int64 GameData_212ca18[132];
extern __int64 GameData_212ca20[131];
extern __int64 GameData_212ca58[124];
extern __int64 GameData_212ca68[122];
extern __int64 GameData_21d9f90;
extern __int64 GameData_21d9f98;
extern __int64 GameData_21d9fa8;
extern char GameData_1a9f09e;
extern int GameData_21f1758;
extern int GameData_21f1768;
unsigned __int64 GameRoutine_88cc60(unsigned __int64*);
unsigned __int64 GameRoutine_88cda0(unsigned __int64*);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_688200();
void __attribute__((noreturn)) GameRoutine_693e60();
void __attribute__((noreturn)) GameRoutine_6e56b0();
void __attribute__((noreturn)) GameRoutine_6e5c60();
void __attribute__((noreturn)) GameRoutine_6f93f0();
void __attribute__((noreturn)) GameRoutine_8926e0();
void __attribute__((noreturn)) GameRoutine_892700();
void __attribute__((noreturn)) GameRoutine_892720();
void __attribute__((noreturn)) GameRoutine_892740();
void __attribute__((noreturn)) GameRoutine_8999c0();
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 (***game_anonymous_RuntimeBuffer_Build(__int64 a1))();
__int64 RuntimeBuffer_8920a0(__int64* a1, __int64 a2, __int64 a3, char a4);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64 a2, unsigned __int64 a3,
                             unsigned __int8 a4);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_RuntimeBuffer_Build_closure_Invoke(__int64 a1, __int64 a2);

__int64 (***game_anonymous_RuntimeBuffer_Build(__int64 a1))()
{
  __int64 v1;
  __int64 v2;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64** v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int8* v41;
  unsigned int v42;
  __int64 v43;
  __int64 v44;
  __int64 (**v45)();
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int8* v52;
  unsigned int v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 j;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 i;
  __int64 v67;
  __int64 v68;
  unsigned __int8* v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  unsigned __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  char* v76;
  unsigned int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 k;
  __int64 v83;
  __int64 v84;
  unsigned __int8* v85;
  __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  char v100;
  __int64 v101;
  char* v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  char* v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 m;
  __int64 v112;
  __int64 v113;
  unsigned __int8* v114;
  __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  __int64* v118;
  __int64* v119;
  __int64 v120;
  __int64 v121;
  char* v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  char* v129;
  __int64 v130;
  __int64 v131;
  char v132;
  __int64 v133;
  int v134;
  int v135;
  int v136;
  __int64 v137;
  __int16 v138;
  __int16 v139;
  __int16 v140;
  _WORD* v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64* v147;
  int v148;
  __int64 v149;
  __int64 v150;
  __int64* v151;
  char* v152;
  __int64 v153;
  __int64 v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  unsigned __int64 v159;
  unsigned __int64 v160;
  _QWORD* v161;
  _QWORD* v162;
  unsigned __int64 v163;
  __int64 v164;
  __int64 v165;
  unsigned __int64 v166;
  _QWORD* v167;
  __int64 v168;
  char* v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  unsigned __int64 v173;
  __int64 v174;
  unsigned __int64 v175;
  char* v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64* v188;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  _QWORD* v196;
  _QWORD* v197;
  __int64 v198;
  _QWORD* v199;
  _QWORD* v200;
  _QWORD* v201;
  unsigned int v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 (**v208)();
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  unsigned __int64 v212;
  unsigned __int64 v214;
  unsigned __int64 v215;
  _QWORD* v216;
  _QWORD* v217;
  unsigned __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 (**v221)();
  __int64 (**v222)();
  __int64 v223;
  unsigned __int64 v224;
  unsigned __int64 v225;
  unsigned __int64 v227;
  unsigned __int64 v228;
  __int64 v229;
  __int64 (*v230)();
  _QWORD* v231;
  _QWORD* v232;
  _QWORD* v233;
  unsigned __int64 v234;
  __int64 v235;
  char* v236;
  unsigned __int64 v237;
  unsigned __int64 v238;
  unsigned __int64 v239;
  _QWORD* v240;
  __int64 v241;
  char* v242;
  unsigned __int64 v243;
  __int64 v244;
  _QWORD* v245;
  _QWORD* v246;
  unsigned __int64 v247;
  __int64 v248;
  __int64 v249;
  _QWORD* v250;
  _QWORD* v251;
  _QWORD* v252;
  unsigned __int64 v253;
  __int64 v254;
  char* v255;
  unsigned __int64 v256;
  unsigned __int64 v257;
  char* v258;
  __int64 v259;
  char* v260;
  unsigned __int64 v261;
  __int64 v262;
  __int64 (**v263)();
  __int64 (**v264)();
  unsigned __int64 v265;
  char* v266;
  char* v267;
  unsigned __int64 v268;
  __int64* v269;
  __int64 v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 (**v274)();
  __int64 (**v275)();
  char v276;
  __int64 v277;
  __int64 v278;
  __int64 v279;
  char* v280;
  unsigned __int64 v281;
  unsigned __int64 v282;
  unsigned __int64 v283;
  __int64 v284;
  __int64 v285;
  unsigned __int64 v286;
  unsigned __int64 v287;
  unsigned __int64 v289;
  unsigned __int64 v290;
  _QWORD* v291;
  _QWORD* v292;
  unsigned __int64 v293;
  __int64 v294;
  __int64 v295;
  unsigned __int64 v296;
  char* v297;
  __int64 v298;
  unsigned __int64 v299;
  unsigned __int64 v300;
  unsigned __int64 v301;
  unsigned __int64 v302;
  __int64 v303;
  char* v304;
  __int64 v305;
  __int64 v306;
  __int64* v307;
  __int64 v308;
  __int64 v309;
  __int64 v310;
  unsigned __int64 v311;
  _QWORD* v312;
  __int64 v313;
  __int64 v314;
  char* v315;
  unsigned __int64 v316;
  unsigned __int64 v317;
  unsigned __int64 v318;
  _QWORD* v319;
  __int64 v320;
  char* v321;
  unsigned __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  _QWORD* v326;
  __int64 v327;
  __int64 v328;
  __int64 jj;
  _QWORD* v330;
  __int64 v331;
  int* v332;
  int v333;
  int v334;
  int v335;
  __int64 v336;
  __int64 v337;
  unsigned __int64 v339;
  __int64* v340;
  _QWORD* v341;
  unsigned __int64 v342;
  __int64* v343;
  __int64 v344;
  unsigned __int64 v345;
  __int64 v346;
  unsigned __int64 v347;
  __int64 v348;
  __int64* v349;
  char* v350;
  char* v351;
  __int64 v352;
  char* v353;
  _QWORD* v354;
  __int64 v355;
  unsigned __int64 v356;
  __int64 v357;
  __int64 v358;
  unsigned __int64 v359;
  __int64 v360;
  unsigned __int64 v361;
  __int64 v362;
  __int64* v363;
  char* v364;
  char* v365;
  __int64 v366;
  char* v367;
  _QWORD* v368;
  __int64 v369;
  unsigned __int64 v370;
  __int64 v371;
  __int64 v372;
  __int64 v373;
  _QWORD* v374;
  __int64 v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  _QWORD* v381;
  __int64 v382;
  __int64 v383;
  unsigned __int64 v384;
  __int64* v385;
  __int64 v386;
  __int64 v387;
  char* v388;
  unsigned __int64 v389;
  __int64 v390;
  unsigned __int64 v391;
  __int64 v392;
  __int64* v393;
  char* v394;
  char* v395;
  char* v396;
  char* v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64 ii;
  _QWORD* v402;
  __int64 v403;
  __int64 v404;
  unsigned __int64 v405;
  __int64* v406;
  __int64 v407;
  __int64 v408;
  char* v409;
  unsigned __int64 v410;
  __int64 v411;
  unsigned __int64 v412;
  __int64 v413;
  __int64* v414;
  char* v415;
  char* v416;
  char* v417;
  char* v418;
  __int64 v419;
  __int64 v420;
  _QWORD* v421;
  __int64* v422;
  __int64* v423;
  __int64 v424;
  __int64* v425;
  __int64* v426;
  __int64* v427;
  __int64* v428;
  __int64* v429;
  __int64* v430;
  __int64 v431;
  __int64 v432;
  __int64 v433;
  char v434;
  __int64 v435;
  __int64 v436;
  __int64 (***result)();
  __int64 v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  unsigned __int64 v442;
  unsigned __int64 v443;
  unsigned __int64 v445;
  unsigned __int64 v446;
  _QWORD* v447;
  _QWORD* v448;
  unsigned __int64 v449;
  __int64 v450;
  __int64 v451;
  unsigned __int64 v452;
  _QWORD* v453;
  __int64 v454;
  char* v455;
  __int64 v456;
  unsigned __int64 v457;
  __int64 v458;
  unsigned __int64 v459;
  __int64 v460;
  unsigned __int64 v461;
  char* v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  unsigned __int64 v467;
  unsigned __int64 v468;
  unsigned __int64 v470;
  unsigned __int64 v471;
  _QWORD* v472;
  _QWORD* v473;
  unsigned __int64 v474;
  __int64 v475;
  __int64 v476;
  unsigned __int64 v477;
  _QWORD* v478;
  __int64 v479;
  char* v480;
  __int64 v481;
  unsigned __int64 v482;
  __int64 v483;
  unsigned __int64 v484;
  __int64 v485;
  unsigned __int64 v486;
  unsigned __int64 v487;
  unsigned __int64 v489;
  unsigned __int64 v490;
  _QWORD* v491;
  _QWORD* v492;
  unsigned __int64 v493;
  __int64 v494;
  __int64 v495;
  unsigned __int64 v496;
  _QWORD* v497;
  __int64 v498;
  __int64 v499;
  char* v500;
  __int64 v501;
  unsigned __int64 v502;
  __int64 v503;
  unsigned __int64 v504;
  __int64 v505;
  unsigned __int64 v506;
  char* v507;
  __int64 v508;
  __int64 v509;
  unsigned __int64 v510;
  char* v511;
  __int64 v512;
  __int64 v513;
  __int64 v514;
  unsigned __int64 v515;
  unsigned __int64 v516;
  unsigned __int64 v518;
  unsigned __int64 v519;
  _QWORD* v520;
  _QWORD* v521;
  unsigned __int64 v522;
  __int64 v523;
  __int64 v524;
  unsigned __int64 v525;
  _QWORD* v526;
  __int64 v527;
  char* v528;
  __int64 v529;
  unsigned __int64 v530;
  __int64 v531;
  unsigned __int64 v532;
  __int64 v533;
  unsigned __int64 v534;
  char* v535;
  __int64 v536;
  __int64 v537;
  __int64 v538;
  unsigned __int64 v539;
  unsigned __int64 v540;
  unsigned __int64 v542;
  unsigned __int64 v543;
  _QWORD* v544;
  _QWORD* v545;
  unsigned __int64 v546;
  __int64 v547;
  __int64 v548;
  unsigned __int64 v549;
  _QWORD* v550;
  __int64 v551;
  char* v552;
  __int64 v553;
  unsigned __int64 v554;
  __int64 v555;
  unsigned __int64 v556;
  __int64 v557;
  unsigned __int64 v558;
  char* v559;
  __int64 v560;
  __int64 v561;
  __int64 (**n)();
  unsigned __int64 v563;
  __int64 v564;
  __int64 v565;
  struct {
    __int64 (**v566)();
    __int64 (**v567)();
    char* v568;
    char gap56_[8];
    __int64* v569;
  } v566_;
  struct {
    __int64 v570;
    unsigned __int64 v571;
    char* v572;
  } v570_;

  v1 = a1;
  GameRoutine_88cc60((unsigned __int64*)(a1 + 112));
  GameRoutine_88cda0((unsigned __int64*)(v1 + 128));
  GameRoutine_88cc60((unsigned __int64*)(v1 + 160));
  GameRoutine_88cc60((unsigned __int64*)(v1 + 192));
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 == 0) {
    v2 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 528, 16, 0);
    memset(v2, 0, 528);
    *(_QWORD*)(v1 + 24) = v2;
  }
  v6 = *(unsigned __int16*)(v1 + 16);
  v7 = game_HashString(*(_QWORD*)(v1 + 8));
  if (v7 == 0) {
    goto LABEL_27;
  }
  v8 = *(_QWORD*)(*(_QWORD*)GameData_212ca20[0] + 96LL);
  v9 = v8 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212ca20[0] + 112LL) == 0;
  if (v9) {
    goto LABEL_27;
  }
  v10 = v8 - 1;
  if ((v8 & (v8 - 1)) != 0) {
    v11 = v7;
    if (v7 >= v8) {
      v11 = v7 % v8;
    }
  }
  else {
    v11 = v10 & v7;
  }
  v12 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212ca20[0] + 88LL) + 8 * v11);
  if (v12 == nullptr || (v13 = (_QWORD*)*v12) == nullptr) {
  LABEL_27:
    v15 = 0;
    *(_QWORD*)v2 = 0;
    if ((_DWORD)v6 != 0) {
      goto LABEL_31;
    }
    goto LABEL_28;
  }
  if ((v8 & v10) == 0) {
    while (1) {
      v16 = v13[1];
      if (v16 == v7) {
        if (v13[2] == v7) {
          goto LABEL_686;
        }
      }
      else if ((v16 & v10) != v11) {
        goto LABEL_27;
      }
      v13 = (_QWORD*)*v13;
      v15 = 0;
      if (v13 == nullptr) {
        goto LABEL_30;
      }
    }
  }
  do {
    v14 = v13[1];
    if (v14 == v7) {
      if (v13[2] == v7) {
      LABEL_686:
        v15 = v13[3];
        *(_QWORD*)v2 = v15;
        if ((_DWORD)v6 != 0) {
          goto LABEL_31;
        }
        goto LABEL_28;
      }
    }
    else {
      if (v14 >= v8) {
        v14 %= v8;
      }
      if (v14 != v11) {
        goto LABEL_27;
      }
    }
    v13 = (_QWORD*)*v13;
  } while (v13 != nullptr);
  v15 = 0;
LABEL_30:
  *(_QWORD*)v2 = 0;
  if ((_DWORD)v6 == 0) {
  LABEL_28:
    v17 = 0;
    goto LABEL_33;
  }
LABEL_31:
  v18 = (unsigned int)(v6 - 1);
  v19 = **(_QWORD**)(v15 + 40);
  if (v18 < (*(_QWORD*)(*(_QWORD*)(v15 + 40) + 8LL) - v19) >> 3) {
    v17 = *(_QWORD*)(v19 + 8 * v18);
  LABEL_33:
    *(_QWORD*)(v2 + 8) = v17;
    v20 = **(_QWORD**)(v15 + 40);
    v21 = *(_QWORD*)(*(_QWORD*)(v15 + 40) + 8LL) - v20;
    if ((int)(((unsigned __int64)v21 >> 3) - 1) <= (int)v6) {
      v22 = 0;
      goto LABEL_37;
    }
    if (v6 + 1 < (unsigned __int64)(v21 >> 3)) {
      v22 = *(_QWORD*)(v20 + 8 * (v6 + 1));
    LABEL_37:
      *(_QWORD*)(v2 + 16) = v22;
      *(_QWORD*)(v2 + 24) = 0;
      if (GameData_21d9f98 != 0 && GameData_21d9fa8 != 0) {
        v24 = *(_QWORD*)v15;
        v25 = GameData_21d9f98 - 1;
        if ((GameData_21d9f98 & (GameData_21d9f98 - 1)) != 0) {
          v26 = v24;
          if (v24 >= GameData_21d9f98) {
            v26 = v24 % GameData_21d9f98;
          }
        }
        else {
          v26 = v25 & v24;
        }
        v27 = *(__int64***)(GameData_21d9f90 + 8 * v26);
        if (v27 != nullptr) {
          v28 = *v27;
          if (v28 != nullptr) {
            if ((GameData_21d9f98 & v25) == 0) {
              while (1) {
                v30 = v28[1];
                if (v30 == v24) {
                  if (v28[2] == v24) {
                    goto LABEL_283;
                  }
                }
                else if ((v30 & v25) != v26) {
                  goto LABEL_60;
                }
                v28 = (__int64*)*v28;
                if (v28 == nullptr) {
                  goto LABEL_60;
                }
              }
            }
            do {
              v29 = v28[1];
              if (v29 == v24) {
                if (v28[2] == v24) {
                LABEL_283:
                  *(_BYTE*)(v2 + 33) = *((_BYTE*)v28 + 24);
                  if (v17 == 0) {
                    goto LABEL_66;
                  }
                  goto LABEL_61;
                }
              }
              else {
                if (v29 >= GameData_21d9f98) {
                  v29 %= (unsigned __int64)GameData_21d9f98;
                }
                if (v29 != v26) {
                  break;
                }
              }
              v28 = (__int64*)*v28;
            } while (v28 != nullptr);
          }
        }
      }
    LABEL_60:
      *(_BYTE*)(v2 + 33) = 0;
      if (v17 != 0) {
      LABEL_61:
        if (*(_BYTE*)(v1 + 88) != 0) {
          if (*(_BYTE*)(v1 + 89) != 0) {
            goto LABEL_66;
          }
        }
        else {
          *(_BYTE*)(v1 + 88) = *(_BYTE*)(v17 + 88);
          if (*(_BYTE*)(v1 + 89) != 0) {
            goto LABEL_66;
          }
        }
        *(_BYTE*)(v1 + 89) = *(_BYTE*)(*(_QWORD*)(v2 + 8) + 89LL);
      }
    LABEL_66:
      v32 = (__int64*)(v2 + 48);
      v31 = *(_QWORD*)(v2 + 48);
      *(_BYTE*)(v2 + 32) = 0;
      v33 = 0xCBF29CE484222325LL;
      *(_QWORD*)(v2 + 56) = v31;
      v34 = *(_QWORD*)(v1 + 208);
      if (v34 == 0) {
        RuntimeBuffer_8920a0((__int64*)&v566_.v566,
                             *(_QWORD*)(*(_QWORD*)v2 + 8LL), v1, 0);
        if ((*(_BYTE*)(v2 + 72) & 1) != 0) {
          v43 = *(_QWORD*)(v2 + 88);
          if (v43 != 0) {
            v44 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v44 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v43);
          }
        }
        v45 = v566_.v567;
        *(_QWORD*)(v2 + 72) = v566_.v566;
        *(_QWORD*)(v2 + 80) = v45;
        *(_QWORD*)(v2 + 88) = v566_.v568;
        v46 = v2 + 73;
        v47 = *(unsigned __int8*)(v2 + 72);
        v9 = (v47 & 1) == 0;
        v48 = v47 >> 1;
        if (v9) {
          LODWORD(v49) = v48;
        }
        else {
          v46 = *(_QWORD*)(v2 + 88);
          v49 = *(_QWORD*)(v2 + 80);
        }
        if (v46 == 0) {
          goto LABEL_109;
        }
        if ((int)v49 < 8) {
          v53 = 0;
          v51 = 0xCBF29CE484222325LL;
          if ((int)v49 <= 0) {
          LABEL_106:
            if (v51 != 0) {
              v46 = v51;
            }
            else {
              v46 = -1;
            }
          LABEL_109:
            *(_QWORD*)(v2 + 40) = v46;
            goto LABEL_110;
          }
        }
        else {
          v50 = 7;
          v51 = 0xCBF29CE484222325LL;
          do {
            v52 = (unsigned __int8*)(v46 + v50);
            v50 += 8LL;
            v51 = (0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL *
                               ((0x100000001B3LL * v51) ^ *(v52 - 7))) ^
                              *(v52 - 6))) ^
                            *(v52 - 5))) ^
                          *(v52 - 4))) ^
                        *(v52 - 3))) ^
                      *(v52 - 2))) ^
                    *(v52 - 1))) ^
                  *v52;
          } while (v50 < ((unsigned int)v49 & 0x7FFFFFFF));
          v53 = v49 & 0x7FFFFFF8;
          if ((v49 & 0x7FFFFFF8) >= (int)v49) {
            goto LABEL_106;
          }
        }
        v63 = v53;
        v64 = (unsigned int)v49;
        v65 = v49 & 7;
        for (i = v63; v65 != 0; v51 = (0x100000001B3LL * v51) ^ v67) {
          v67 = *(unsigned __int8*)(v46 + i++);
          --v65;
        }
        if ((unsigned __int64)(v63 - v64) <= 0xFFFFFFFFFFFFFFF8LL) {
          v68 = v64 - i;
          v69 = (unsigned __int8*)(i + v46 + 3);
          do {
            v68 -= 8;
            v70 = (0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL * v51) ^ *(v69 - 3))) ^
                            *(v69 - 2))) ^
                          *(v69 - 1))) ^
                        *v69)) ^
                      v69[1])) ^
                    v69[2])) ^
                  v69[3];
            v71 = v69[4];
            v69 += 8;
            v51 = (0x100000001B3LL * v70) ^ v71;
          } while (v68 != 0);
        }
        goto LABEL_106;
      }
      GameRoutine_60a020(v2 + 72, v34);
      v35 = *(unsigned __int8*)(v2 + 72);
      v36 = v2 + 73;
      v9 = (v35 & 1) == 0;
      v37 = v35 >> 1;
      if (v9) {
        LODWORD(v38) = v37;
      }
      else {
        v36 = *(_QWORD*)(v2 + 88);
        v38 = *(_QWORD*)(v2 + 80);
      }
      if (v36 != 0) {
        if ((int)v38 < 8) {
          v42 = 0;
          v40 = 0xCBF29CE484222325LL;
          if ((int)v38 <= 0) {
            goto LABEL_96;
          }
        }
        else {
          v39 = 7;
          v40 = 0xCBF29CE484222325LL;
          do {
            v41 = (unsigned __int8*)(v36 + v39);
            v39 += 8LL;
            v40 = (0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL *
                               ((0x100000001B3LL * v40) ^ *(v41 - 7))) ^
                              *(v41 - 6))) ^
                            *(v41 - 5))) ^
                          *(v41 - 4))) ^
                        *(v41 - 3))) ^
                      *(v41 - 2))) ^
                    *(v41 - 1))) ^
                  *v41;
          } while (v39 < ((unsigned int)v38 & 0x7FFFFFFF));
          v42 = v38 & 0x7FFFFFF8;
          if ((v38 & 0x7FFFFFF8) >= (int)v38) {
            goto LABEL_96;
          }
        }
        v54 = v42;
        v55 = (unsigned int)v38;
        v56 = v38 & 7;
        for (j = v54; v56 != 0; v40 = (0x100000001B3LL * v40) ^ v58) {
          v58 = *(unsigned __int8*)(v36 + j++);
          --v56;
        }
        if ((unsigned __int64)(v54 - v55) <= 0xFFFFFFFFFFFFFFF8LL) {
          v59 = v55 - j;
          v60 = (unsigned __int8*)(j + v36 + 3);
          do {
            v59 -= 8;
            v61 = (0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL * v40) ^ *(v60 - 3))) ^
                            *(v60 - 2))) ^
                          *(v60 - 1))) ^
                        *v60)) ^
                      v60[1])) ^
                    v60[2])) ^
                  v60[3];
            v62 = v60[4];
            v60 += 8;
            v40 = (0x100000001B3LL * v61) ^ v62;
          } while (v59 != 0);
        }
      LABEL_96:
        if (v40 != 0) {
          v36 = v40;
        }
        else {
          v36 = -1;
        }
      }
      *(_QWORD*)(v2 + 40) = v36;
      GameRoutine_7f3400((__int64*)(v2 + 48), (_QWORD*)(v2 + 40));
    LABEL_110:
      RuntimeBuffer_8920a0((__int64*)&v566_.v566,
                           *(_QWORD*)(*(_QWORD*)v2 + 8LL), v1, 1);
      LODWORD(v73) = (_DWORD)v566_.v567;
      v72 = v566_.v568;
      if (((unsigned __int8)v566_.v566 & 1) == 0) {
        v72 = (char*)&v566_.v566 + 1;
        v73 = (unsigned __int64)(unsigned __int8)v566_.v566 >> 1;
      }
      if (v72 != nullptr) {
        if ((int)v73 < 8) {
          v77 = 0;
          v75 = 0xCBF29CE484222325LL;
          if ((int)v73 <= 0) {
            goto LABEL_125;
          }
        }
        else {
          v74 = 7;
          v75 = 0xCBF29CE484222325LL;
          do {
            v76 = &v72[v74];
            v74 += 8LL;
            v75 =
                (0x100000001B3LL *
                 ((0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL * ((0x100000001B3LL * v75) ^
                                                (unsigned __int8)*(v76 - 7))) ^
                            (unsigned __int8)*(v76 - 6))) ^
                          (unsigned __int8)*(v76 - 5))) ^
                        (unsigned __int8)*(v76 - 4))) ^
                      (unsigned __int8)*(v76 - 3))) ^
                    (unsigned __int8)*(v76 - 2))) ^
                  (unsigned __int8)*(v76 - 1))) ^
                (unsigned __int8)*v76;
          } while (v74 < (v73 & 0x7FFFFFFF));
          v77 = v73 & 0x7FFFFFF8;
          if ((int)(v73 & 0x7FFFFFF8) >= (int)v73) {
            goto LABEL_125;
          }
        }
        v79 = v77;
        v80 = (unsigned int)v73;
        v81 = v73 & 7;
        for (k = v79; v81 != 0; v75 = (0x100000001B3LL * v75) ^ v83) {
          v83 = (unsigned __int8)v72[k++];
          --v81;
        }
        if ((unsigned __int64)(v79 - v80) <= 0xFFFFFFFFFFFFFFF8LL) {
          v84 = v80 - k;
          v85 = (unsigned __int8*)&v72[k + 3];
          do {
            v84 -= 8;
            v86 = (0x100000001B3LL *
                   ((0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL * v75) ^ *(v85 - 3))) ^
                            *(v85 - 2))) ^
                          *(v85 - 1))) ^
                        *v85)) ^
                      v85[1])) ^
                    v85[2])) ^
                  v85[3];
            v87 = v85[4];
            v85 += 8;
            v75 = (0x100000001B3LL * v86) ^ v87;
          } while (v84 != 0);
        }
      LABEL_125:
        if (v75 != 0) {
          v78 = v75;
        }
        else {
          v78 = -1;
        }
      }
      else {
        v78 = 0;
      }
      v89 = *(__int64**)(v2 + 56);
      v88 = *(_QWORD*)(v2 + 64);
      v565 = v1;
      if ((unsigned __int64)v89 < v88) {
        *v89 = v78;
        v90 = (__int64)(v89 + 1);
        goto LABEL_145;
      }
      v91 = *v32;
      v92 = (__int64)v89 - *v32;
      v93 = (v92 >> 3) + 1;
      if (v93 >> 61 == 0) {
        v94 = v88 - v91;
        if (v94 >> 2 > v93) {
          v93 = v94 >> 2;
        }
        if ((unsigned __int64)v94 >= 0x7FFFFFFFFFFFFFF8LL) {
          v95 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v95 = v93;
        }
        if (v95 != 0) {
          if (v95 >> 61 != 0) {
            goto LABEL_913;
          }
          v96 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v95, 16, 0);
        }
        else {
          v96 = 0;
        }
        v97 = v96 + 8 * v95;
        v98 = v96 + v92 - 8 * (v92 >> 3);
        *(_QWORD*)(v96 + v92) = v78;
        v90 = v96 + v92 + 8;
        memcpy(v98, v91, v92);
        *(_QWORD*)(v2 + 48) = v98;
        *(_QWORD*)(v2 + 56) = v90;
        *(_QWORD*)(v2 + 64) = v97;
        if (v91 != 0) {
          v99 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v99 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v99, v91);
        }
        v1 = v565;
      LABEL_145:
        v100 = (char)v566_.v566;
        *(_QWORD*)(v2 + 56) = v90;
        if ((v100 & 1) != 0 && v566_.v568 != nullptr) {
          v101 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v101 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v101, v566_.v568);
        }
        RuntimeBuffer_8920a0((__int64*)&v566_.v566,
                             *(_QWORD*)(*(_QWORD*)v2 + 8LL), v1, 0);
        v102 = v566_.v568;
        v103 = (unsigned __int64)(unsigned __int8)v566_.v566 >> 1;
        if (((unsigned __int8)v566_.v566 & 1) != 0) {
          LODWORD(v103) = (_DWORD)v566_.v567;
        }
        else {
          v102 = (char*)&v566_.v566 + 1;
        }
        if (v102 != nullptr) {
          if ((int)v103 < 8) {
            v106 = 0;
            if ((int)v103 <= 0) {
              goto LABEL_166;
            }
          }
          else {
            v104 = 7;
            do {
              v105 = &v102[v104];
              v104 += 8LL;
              v33 = (0x100000001B3LL *
                     ((0x100000001B3LL *
                       ((0x100000001B3LL *
                         ((0x100000001B3LL *
                           ((0x100000001B3LL *
                             ((0x100000001B3LL *
                               ((0x100000001B3LL *
                                 ((0x100000001B3LL * v33) ^
                                  (unsigned __int8)*(v105 - 7))) ^
                                (unsigned __int8)*(v105 - 6))) ^
                              (unsigned __int8)*(v105 - 5))) ^
                            (unsigned __int8)*(v105 - 4))) ^
                          (unsigned __int8)*(v105 - 3))) ^
                        (unsigned __int8)*(v105 - 2))) ^
                      (unsigned __int8)*(v105 - 1))) ^
                    (unsigned __int8)*v105;
            } while (v104 < (v103 & 0x7FFFFFFF));
            v106 = v103 & 0x7FFFFFF8;
            if ((int)(v103 & 0x7FFFFFF8) >= (int)v103) {
              goto LABEL_166;
            }
          }
          v108 = v106;
          v109 = (unsigned int)v103;
          v110 = v103 & 7;
          for (m = v108; v110 != 0; v33 = (0x100000001B3LL * v33) ^ v112) {
            v112 = (unsigned __int8)v102[m++];
            --v110;
          }
          if ((unsigned __int64)(v108 - v109) <= 0xFFFFFFFFFFFFFFF8LL) {
            v113 = v109 - m;
            v114 = (unsigned __int8*)&v102[m + 3];
            do {
              v113 -= 8;
              v115 = (0x100000001B3LL *
                      ((0x100000001B3LL *
                        ((0x100000001B3LL *
                          ((0x100000001B3LL *
                            ((0x100000001B3LL *
                              ((0x100000001B3LL *
                                ((0x100000001B3LL * v33) ^ *(v114 - 3))) ^
                               *(v114 - 2))) ^
                             *(v114 - 1))) ^
                           *v114)) ^
                         v114[1])) ^
                       v114[2])) ^
                     v114[3];
              v116 = v114[4];
              v114 += 8;
              v33 = (0x100000001B3LL * v115) ^ v116;
            } while (v113 != 0);
          }
        LABEL_166:
          if (v33 != 0) {
            v107 = v33;
          }
          else {
            v107 = -1;
          }
        }
        else {
          v107 = 0;
        }
        v118 = *(__int64**)(v2 + 56);
        v117 = *(_QWORD*)(v2 + 64);
        v119 = (__int64*)fw_memory_g_heap_manager_ptr;
        if ((unsigned __int64)v118 < v117) {
          *v118 = v107;
          v120 = (__int64)(v118 + 1);
          goto LABEL_186;
        }
        v121 = *v32;
        v122 = (char*)v118 - v121;
        v123 = ((__int64)v118 - v121) >> 3;
        v124 = v123 + 1;
        if ((unsigned __int64)(v123 + 1) >> 61 == 0) {
          v125 = v117 - v121;
          if (v125 >> 2 > v124) {
            v124 = v125 >> 2;
          }
          if ((unsigned __int64)v125 >= 0x7FFFFFFFFFFFFFF8LL) {
            v126 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v126 = v124;
          }
          if (v126 != 0) {
            if (v126 >> 61 != 0) {
              goto LABEL_913;
            }
            v127 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v126, 16, 0);
          }
          else {
            v127 = 0;
          }
          v128 = v127 + 8 * v126;
          v129 = (char*)v118 - v121;
          v130 = (__int64)&v122[v127 + -8 * v123];
          *(_QWORD*)&v122[v127] = v107;
          v120 = (__int64)&v122[v127 + 8];
          memcpy(v130, v121, v129);
          *(_QWORD*)(v2 + 48) = v130;
          *(_QWORD*)(v2 + 56) = v120;
          *(_QWORD*)(v2 + 64) = v128;
          if (v121 != 0) {
            v131 = 128;
            if (*(_QWORD*)(*v119 + 200) == 0) {
              v131 = 56;
            }
            nn_mem_StandardAllocator_Free(*v119 + v131, v121);
          }
          v1 = v565;
        LABEL_186:
          v132 = (char)v566_.v566;
          *(_QWORD*)(v2 + 56) = v120;
          if ((v132 & 1) != 0 && v566_.v568 != nullptr) {
            v133 = 128;
            if (*(_QWORD*)(*v119 + 200) == 0) {
              v133 = 56;
            }
            nn_mem_StandardAllocator_Free(*v119 + v133, v566_.v568);
          }
          v134 = *(__int16*)(v1 + 94);
          v135 = *(char*)(v1 + 92);
          v136 = *(char*)(v1 + 93);
          v137 = *(_QWORD*)(v2 + 8);
          v138 = *(_WORD*)(v1 + 90);
          if (v134 >= 0) {
            v139 = v134 / 0x64u;
          }
          else {
            v139 = 0;
          }
          if (v134 >= 0) {
            v140 = v134 % 0x64u;
          }
          else {
            v140 = 0;
          }
          if (v137 != 0) {
            if ((v134 & 0x80000000) == 0 || *(_WORD*)(v1 + 90) != 0 ||
                (v136 | v135) != 0) {
              v141 = *(_WORD**)(v137 + 24);
              if (*(_WORD*)(v1 + 90) == 0) {
                v138 = v141[48];
              }
              if (*(_BYTE*)(v1 + 92) == 0) {
                v135 = (__int16)v141[49];
              }
              if (*(_BYTE*)(v1 + 93) == 0) {
                v136 = (__int16)v141[50];
              }
              if (v134 < 0) {
                v139 = v141[51];
                v140 = v141[52];
              }
              else {
                v140 = v134 % 0x64u;
                v139 = v134 / 0x64u;
              }
            }
            else {
              v138 = 0;
            }
            if (v135 * v136 * v138 != 0) {
            LABEL_214:
              *(_WORD*)(v2 + 96) = v138;
              *(_WORD*)(v2 + 98) = v135;
              *(_WORD*)(v2 + 100) = v136;
              *(_WORD*)(v2 + 102) = v139;
              *(_WORD*)(v2 + 104) = v140;
              *(_WORD*)(v2 + 106) = 0;
            }
            else {
              v142 = *(_QWORD*)(v137 + 24);
              v143 = *(_QWORD*)(v142 + 96);
              *(_DWORD*)(v2 + 104) = *(_DWORD*)(v142 + 104);
              *(_QWORD*)(v2 + 96) = v143;
            }
          }
          else {
            if (v135 * *(__int16*)(v1 + 90) * v136 != 0) {
              goto LABEL_214;
            }
            *(_DWORD*)(v2 + 104) = 0;
            *(_QWORD*)(v2 + 96) = 0;
          }
          v144 = *(_QWORD*)(v2 + 256);
          *(_DWORD*)(v2 + 376) = 0;
          *(_BYTE*)(v2 + 380) = 0;
          *(_QWORD*)(v2 + 264) = v144;
          *(_QWORD*)(v2 + 288) = *(_QWORD*)(v2 + 280);
          *(_QWORD*)(v2 + 392) = *(_QWORD*)(v2 + 384);
          *(_QWORD*)(v2 + 416) = *(_QWORD*)(v2 + 408);
          *(_QWORD*)(v2 + 440) = *(_QWORD*)(v2 + 432);
          *(_QWORD*)(v2 + 464) = *(_QWORD*)(v2 + 456);
          switch (*(_BYTE*)(v1 + 33)) {
          case 0xB:
          case 0x1A:
          case 0x1B:
          case 0x1C:
          case 0x32:
          case 0x3D:
            if (*(_WORD*)(v1 + 40) != 0) {
              v148 = atoi(**(_QWORD**)(v1 + 48));
            }
            else {
              v148 = 0;
            }
            *(_DWORD*)(v2 + 376) = v148;
            if (*(unsigned __int16*)(v1 + 40) >= 2u) {
              if (*(_QWORD*)(*(_QWORD*)(v1 + 48) + 8LL) != 0) {
                v152 = *(char**)(*(_QWORD*)(v1 + 48) + 8LL);
              }
              else {
                v152 = &GameData_1a9f09e;
              }
              v153 = strlen(v152);
              if (v153 == 9) {
                if (*(_QWORD*)v152 == 0xA4E7A8A1E89E9DE9LL &&
                    (unsigned __int8)v152[8] == 186) {
                  *(_BYTE*)(v2 + 380) = 1;
                }
              }
              else if (v153 == 6 && *(_DWORD*)v152 == -408378904 &&
                       *((unsigned __int16*)v152 + 2) == 47780) {
                *(_BYTE*)(v2 + 380) = 0;
              }
            }
            goto LABEL_295;
          case 0x13:
          case 0x14:
          case 0x15:
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x2F:
          case 0x30:
          case 0x31:
          case 0x58:
            v145 = *(unsigned __int16*)(v1 + 40);
            if (*(_WORD*)(v1 + 40) == 0) {
              goto LABEL_295;
            }
            v146 = 0;
            v147 = GameData_212c890[0];
            while (2) {
              v156 =
                  game_HashString(*(_QWORD*)(*(_QWORD*)(v1 + 48) + 8 * v146));
              if (v156 == 0) {
                goto LABEL_238;
              }
              v157 = *(_QWORD*)(*v147 + 96);
              if (v157 == 0 || *(_QWORD*)(*v147 + 112) == 0) {
                goto LABEL_238;
              }
              v159 = v157 - 1;
              if ((v157 & (v157 - 1)) != 0) {
                v160 = v156;
                if (v156 >= v157) {
                  v160 = v156 % v157;
                }
              }
              else {
                v160 = v159 & v156;
              }
              v161 = *(_QWORD**)(*(_QWORD*)(*v147 + 88) + 8 * v160);
              if (v161 == nullptr) {
                goto LABEL_238;
              }
              v162 = (_QWORD*)*v161;
              if (v162 == nullptr) {
                goto LABEL_238;
              }
              if ((v157 & v159) == 0) {
                while (1) {
                  v164 = v162[1];
                  if (v164 == v156) {
                    if (v162[2] == v156) {
                      goto LABEL_264;
                    }
                  }
                  else if ((v164 & v159) != v160) {
                    goto LABEL_238;
                  }
                  v162 = (_QWORD*)*v162;
                  if (v162 == nullptr) {
                    goto LABEL_238;
                  }
                }
              }
            LABEL_254:
              v163 = v162[1];
              if (v163 != v156) {
                if (v163 >= v157) {
                  v163 %= v157;
                }
                if (v163 != v160) {
                  goto LABEL_238;
                }
              }
              else if (v162[2] == v156) {
              LABEL_264:
                v165 = v162[3];
                if (v165 != 0) {
                  v167 = *(_QWORD**)(v2 + 264);
                  v166 = *(_QWORD*)(v2 + 272);
                  if ((unsigned __int64)v167 < v166) {
                    *v167 = v165;
                    v155 = (__int64)(v167 + 1);
                  }
                  else {
                    v168 = *(_QWORD*)(v2 + 256);
                    v169 = (char*)v167 - v168;
                    v170 = ((__int64)v167 - v168) >> 3;
                    v171 = v170 + 1;
                    if ((unsigned __int64)(v170 + 1) >> 61 != 0) {
                      GameRoutine_688200();
                    }
                    v172 = v166 - v168;
                    if (v172 >> 2 > v171) {
                      v171 = v172 >> 2;
                    }
                    if ((unsigned __int64)v172 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v173 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v173 = v171;
                    }
                    if (v173 != 0) {
                      if (v173 >> 61 != 0) {
                        goto LABEL_913;
                      }
                      v174 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v173, 16,
                          0);
                    }
                    else {
                      v174 = 0;
                    }
                    v175 = v174 + 8 * v173;
                    v176 = (char*)v167 - v168;
                    v177 = (__int64)&v169[v174 + -8 * v170];
                    *(_QWORD*)&v169[v174] = v165;
                    v155 = (__int64)&v169[v174 + 8];
                    memcpy(v177, v168, v176);
                    *(_QWORD*)(v2 + 256) = v177;
                    *(_QWORD*)(v2 + 264) = v155;
                    *(_QWORD*)(v2 + 272) = v175;
                    if (v168 != 0) {
                      v178 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v178 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v178, v168);
                    }
                    v1 = v565;
                  }
                  *(_QWORD*)(v2 + 264) = v155;
                  v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                }
              LABEL_238:
                if (++v146 != v145) {
                  continue;
                }
                goto LABEL_295;
              }
              break;
            }
            v162 = (_QWORD*)*v162;
            if (v162 == nullptr) {
              goto LABEL_238;
            }
            goto LABEL_254;
          case 0x1D:
          case 0x1E:
          case 0x44:
            v149 = *(unsigned __int16*)(v1 + 40);
            if (*(_WORD*)(v1 + 40) == 0) {
              goto LABEL_295;
            }
            v150 = 0;
            v151 = GameData_212c878[0];
            while (2) {
              v442 =
                  game_HashString(*(_QWORD*)(*(_QWORD*)(v1 + 48) + 8 * v150));
              if (v442 == 0) {
                goto LABEL_690;
              }
              v443 = *(_QWORD*)(*v151 + 96);
              if (v443 == 0 || *(_QWORD*)(*v151 + 112) == 0) {
                goto LABEL_690;
              }
              v445 = v443 - 1;
              if ((v443 & (v443 - 1)) != 0) {
                v446 = v442;
                if (v442 >= v443) {
                  v446 = v442 % v443;
                }
              }
              else {
                v446 = v445 & v442;
              }
              v447 = *(_QWORD**)(*(_QWORD*)(*v151 + 88) + 8 * v446);
              if (v447 == nullptr) {
                goto LABEL_690;
              }
              v448 = (_QWORD*)*v447;
              if (v448 == nullptr) {
                goto LABEL_690;
              }
              if ((v443 & v445) == 0) {
                while (1) {
                  v450 = v448[1];
                  if (v450 == v442) {
                    if (v448[2] == v442) {
                      goto LABEL_716;
                    }
                  }
                  else if ((v450 & v445) != v446) {
                    goto LABEL_690;
                  }
                  v448 = (_QWORD*)*v448;
                  if (v448 == nullptr) {
                    goto LABEL_690;
                  }
                }
              }
            LABEL_706:
              v449 = v448[1];
              if (v449 != v442) {
                if (v449 >= v443) {
                  v449 %= v443;
                }
                if (v449 != v446) {
                  goto LABEL_690;
                }
              }
              else if (v448[2] == v442) {
              LABEL_716:
                v451 = v448[3];
                if (v451 != 0) {
                  v453 = *(_QWORD**)(v2 + 288);
                  v452 = *(_QWORD*)(v2 + 296);
                  if ((unsigned __int64)v453 < v452) {
                    *v453 = v451;
                    v441 = (__int64)(v453 + 1);
                  }
                  else {
                    v454 = *(_QWORD*)(v2 + 280);
                    v455 = (char*)v453 - v454;
                    v456 = ((__int64)v453 - v454) >> 3;
                    v457 = v456 + 1;
                    if ((unsigned __int64)(v456 + 1) >> 61 != 0) {
                      GameRoutine_6e5c60();
                    }
                    v458 = v452 - v454;
                    if (v458 >> 2 > v457) {
                      v457 = v458 >> 2;
                    }
                    if ((unsigned __int64)v458 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v459 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v459 = v457;
                    }
                    if (v459 != 0) {
                      if (v459 >> 61 != 0) {
                        goto LABEL_913;
                      }
                      v460 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v459, 16,
                          0);
                    }
                    else {
                      v460 = 0;
                    }
                    v461 = v460 + 8 * v459;
                    v462 = (char*)v453 - v454;
                    v463 = (__int64)&v455[v460 + -8 * v456];
                    *(_QWORD*)&v455[v460] = v451;
                    v441 = (__int64)&v455[v460 + 8];
                    memcpy(v463, v454, v462);
                    *(_QWORD*)(v2 + 280) = v463;
                    *(_QWORD*)(v2 + 288) = v441;
                    *(_QWORD*)(v2 + 296) = v461;
                    if (v454 != 0) {
                      v464 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v464 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v464, v454);
                    }
                    v1 = v565;
                  }
                  *(_QWORD*)(v2 + 288) = v441;
                  v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                }
              LABEL_690:
                if (++v150 != v149) {
                  continue;
                }
                goto LABEL_295;
              }
              break;
            }
            v448 = (_QWORD*)*v448;
            if (v448 == nullptr) {
              goto LABEL_690;
            }
            goto LABEL_706;
          case 0x2A:
          case 0x2B:
            v179 = *(unsigned __int16*)(v1 + 40);
            if (*(_WORD*)(v1 + 40) == 0) {
              goto LABEL_295;
            }
            v180 = 0;
            v181 = GameData_212ca58[0];
            v182 = GameData_212ca68[0];
            while (1) {
              v466 = *(_QWORD*)(v1 + 48);
              v467 = game_HashString(*(_QWORD*)(v466 + 8 * v180));
              if (v467 == 0) {
                goto LABEL_772;
              }
              v468 = *(_QWORD*)(*(_QWORD*)v182 + 96LL);
              if (v468 == 0 || *(_QWORD*)(*(_QWORD*)v182 + 112LL) == 0) {
                goto LABEL_772;
              }
              v470 = v468 - 1;
              if ((v468 & (v468 - 1)) != 0) {
                v471 = v467;
                if (v467 >= v468) {
                  v471 = v467 % v468;
                }
              }
              else {
                v471 = v470 & v467;
              }
              v472 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)v182 + 88LL) + 8 * v471);
              if (v472 == nullptr) {
                goto LABEL_772;
              }
              v473 = (_QWORD*)*v472;
              if (v473 == nullptr) {
                goto LABEL_772;
              }
              if ((v468 & v470) == 0) {
                while (1) {
                  v475 = v473[1];
                  if (v475 == v467) {
                    if (v473[2] == v467) {
                      goto LABEL_761;
                    }
                  }
                  else if ((v475 & v470) != v471) {
                    goto LABEL_772;
                  }
                  v473 = (_QWORD*)*v473;
                  if (v473 == nullptr) {
                    goto LABEL_772;
                  }
                }
              }
              while (1) {
                v474 = v473[1];
                if (v474 == v467) {
                  break;
                }
                if (v474 >= v468) {
                  v474 %= v468;
                }
                if (v474 != v471) {
                  goto LABEL_772;
                }
              LABEL_750:
                v473 = (_QWORD*)*v473;
                if (v473 == nullptr) {
                  goto LABEL_772;
                }
              }
              if (v473[2] != v467) {
                goto LABEL_750;
              }
            LABEL_761:
              v476 = v473[3];
              if (v476 != 0) {
                v478 = *(_QWORD**)(v2 + 392);
                v477 = *(_QWORD*)(v2 + 400);
                if ((unsigned __int64)v478 < v477) {
                  *v478 = v476;
                  v465 = (__int64)(v478 + 1);
                }
                else {
                  v479 = *(_QWORD*)(v2 + 384);
                  v480 = (char*)v478 - v479;
                  v481 = ((__int64)v478 - v479) >> 3;
                  v482 = v481 + 1;
                  if ((unsigned __int64)(v481 + 1) >> 61 != 0) {
                    GameRoutine_8926e0();
                  }
                  v483 = v477 - v479;
                  if (v483 >> 2 > v482) {
                    v482 = v483 >> 2;
                  }
                  if ((unsigned __int64)v483 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v484 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v484 = v482;
                  }
                  if (v484 != 0) {
                    if (v484 >> 61 != 0) {
                      goto LABEL_913;
                    }
                    v485 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v484, 16,
                        0);
                  }
                  else {
                    v485 = 0;
                  }
                  v506 = v485 + 8 * v484;
                  v507 = (char*)v478 - v479;
                  v508 = (__int64)&v480[v485 + -8 * v481];
                  *(_QWORD*)&v480[v485] = v476;
                  v465 = (__int64)&v480[v485 + 8];
                  memcpy(v508, v479, v507);
                  *(_QWORD*)(v2 + 384) = v508;
                  *(_QWORD*)(v2 + 392) = v465;
                  *(_QWORD*)(v2 + 400) = v506;
                  v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v479 != 0) {
                    v509 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v509 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v509, v479);
                  }
                  v1 = v565;
                  v181 = GameData_212ca58[0];
                }
                *(_QWORD*)(v2 + 392) = v465;
                goto LABEL_735;
              }
            LABEL_772:
              v486 = game_HashString(*(_QWORD*)(v466 + 8 * v180));
              if (v486 == 0) {
                goto LABEL_735;
              }
              v487 = *(_QWORD*)(*(_QWORD*)v181 + 96LL);
              if (v487 == 0 || *(_QWORD*)(*(_QWORD*)v181 + 112LL) == 0) {
                goto LABEL_735;
              }
              v489 = v487 - 1;
              if ((v487 & (v487 - 1)) != 0) {
                v490 = v486;
                if (v486 >= v487) {
                  v490 = v486 % v487;
                }
              }
              else {
                v490 = v489 & v486;
              }
              v491 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)v181 + 88LL) + 8 * v490);
              if (v491 == nullptr) {
                goto LABEL_735;
              }
              v492 = (_QWORD*)*v491;
              if (v492 == nullptr) {
                goto LABEL_735;
              }
              if ((v487 & v489) == 0) {
                while (1) {
                  v494 = v492[1];
                  if (v494 == v486) {
                    if (v492[2] == v486) {
                      goto LABEL_797;
                    }
                  }
                  else if ((v494 & v489) != v490) {
                    goto LABEL_735;
                  }
                  v492 = (_QWORD*)*v492;
                  if (v492 == nullptr) {
                    goto LABEL_735;
                  }
                }
              }
              while (2) {
                v493 = v492[1];
                if (v493 != v486) {
                  if (v493 >= v487) {
                    v493 %= v487;
                  }
                  if (v493 != v490) {
                    goto LABEL_735;
                  }
                }
                else if (v492[2] == v486) {
                  break;
                }
                v492 = (_QWORD*)*v492;
                if (v492 == nullptr) {
                  goto LABEL_735;
                }
                continue;
              }
            LABEL_797:
              v495 = v492[3];
              if (v495 != 0) {
                v497 = *(_QWORD**)(v2 + 416);
                v496 = *(_QWORD*)(v2 + 424);
                if ((unsigned __int64)v497 >= v496) {
                  v499 = *(_QWORD*)(v2 + 408);
                  v500 = (char*)v497 - v499;
                  v501 = ((__int64)v497 - v499) >> 3;
                  v502 = v501 + 1;
                  if ((unsigned __int64)(v501 + 1) >> 61 != 0) {
                    GameRoutine_892700();
                  }
                  v503 = v496 - v499;
                  if (v503 >> 2 > v502) {
                    v502 = v503 >> 2;
                  }
                  if ((unsigned __int64)v503 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v504 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v504 = v502;
                  }
                  if (v504 != 0) {
                    if (v504 >> 61 != 0) {
                      goto LABEL_913;
                    }
                    v505 = fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v504, 16,
                        0);
                  }
                  else {
                    v505 = 0;
                  }
                  v510 = v505 + 8 * v504;
                  v511 = (char*)v497 - v499;
                  v512 = (__int64)&v500[v505 + -8 * v501];
                  *(_QWORD*)&v500[v505] = v495;
                  v498 = (__int64)&v500[v505 + 8];
                  memcpy(v512, v499, v511);
                  *(_QWORD*)(v2 + 408) = v512;
                  *(_QWORD*)(v2 + 416) = v498;
                  *(_QWORD*)(v2 + 424) = v510;
                  v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v499 != 0) {
                    v513 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v513 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v513, v499);
                  }
                  v1 = v565;
                  v181 = GameData_212ca58[0];
                }
                else {
                  *v497 = v495;
                  v498 = (__int64)(v497 + 1);
                }
                *(_QWORD*)(v2 + 416) = v498;
              }
            LABEL_735:
              if (++v180 == v179) {
                goto LABEL_295;
              }
            }
          case 0x37:
            v186 = *(unsigned __int16*)(v1 + 40);
            if (*(_WORD*)(v1 + 40) == 0) {
              goto LABEL_295;
            }
            v187 = 0;
            v188 = GameData_212c8a0;
            while (2) {
              v539 =
                  game_HashString(*(_QWORD*)(*(_QWORD*)(v1 + 48) + 8 * v187));
              if (v539 == 0) {
                goto LABEL_869;
              }
              v540 = *(_QWORD*)(*v188 + 96);
              if (v540 == 0 || *(_QWORD*)(*v188 + 112) == 0) {
                goto LABEL_869;
              }
              v542 = v540 - 1;
              if ((v540 & (v540 - 1)) != 0) {
                v543 = v539;
                if (v539 >= v540) {
                  v543 = v539 % v540;
                }
              }
              else {
                v543 = v542 & v539;
              }
              v544 = *(_QWORD**)(*(_QWORD*)(*v188 + 88) + 8 * v543);
              if (v544 == nullptr) {
                goto LABEL_869;
              }
              v545 = (_QWORD*)*v544;
              if (v545 == nullptr) {
                goto LABEL_869;
              }
              if ((v540 & v542) == 0) {
                while (1) {
                  v547 = v545[1];
                  if (v547 == v539) {
                    if (v545[2] == v539) {
                      goto LABEL_895;
                    }
                  }
                  else if ((v547 & v542) != v543) {
                    goto LABEL_869;
                  }
                  v545 = (_QWORD*)*v545;
                  if (v545 == nullptr) {
                    goto LABEL_869;
                  }
                }
              }
            LABEL_885:
              v546 = v545[1];
              if (v546 != v539) {
                if (v546 >= v540) {
                  v546 %= v540;
                }
                if (v546 != v543) {
                  goto LABEL_869;
                }
              }
              else if (v545[2] == v539) {
              LABEL_895:
                v548 = v545[3];
                if (v548 != 0) {
                  v550 = *(_QWORD**)(v2 + 440);
                  v549 = *(_QWORD*)(v2 + 448);
                  if ((unsigned __int64)v550 < v549) {
                    *v550 = v548;
                    v538 = (__int64)(v550 + 1);
                  }
                  else {
                    v551 = *(_QWORD*)(v2 + 432);
                    v552 = (char*)v550 - v551;
                    v553 = ((__int64)v550 - v551) >> 3;
                    v554 = v553 + 1;
                    if ((unsigned __int64)(v553 + 1) >> 61 != 0) {
                      GameRoutine_6e56b0();
                    }
                    v555 = v549 - v551;
                    if (v555 >> 2 > v554) {
                      v554 = v555 >> 2;
                    }
                    if ((unsigned __int64)v555 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v556 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v556 = v554;
                    }
                    if (v556 != 0) {
                      if (v556 >> 61 != 0) {
                        goto LABEL_913;
                      }
                      v557 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v556, 16,
                          0);
                    }
                    else {
                      v557 = 0;
                    }
                    v558 = v557 + 8 * v556;
                    v559 = (char*)v550 - v551;
                    v560 = (__int64)&v552[v557 + -8 * v553];
                    *(_QWORD*)&v552[v557] = v548;
                    v538 = (__int64)&v552[v557 + 8];
                    memcpy(v560, v551, v559);
                    *(_QWORD*)(v2 + 432) = v560;
                    *(_QWORD*)(v2 + 440) = v538;
                    *(_QWORD*)(v2 + 448) = v558;
                    if (v551 != 0) {
                      v561 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v561 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v561, v551);
                    }
                    v1 = v565;
                  }
                  *(_QWORD*)(v2 + 440) = v538;
                  v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                }
              LABEL_869:
                if (++v187 != v186) {
                  continue;
                }
                goto LABEL_295;
              }
              break;
            }
            v545 = (_QWORD*)*v545;
            if (v545 == nullptr) {
              goto LABEL_869;
            }
            goto LABEL_885;
          case 0x38:
            v183 = *(unsigned __int16*)(v1 + 40);
            if (*(_WORD*)(v1 + 40) == 0) {
              goto LABEL_295;
            }
            v184 = 0;
            v185 = GameData_212c998[0];
            while (2) {
              v515 =
                  game_HashString(*(_QWORD*)(*(_QWORD*)(v1 + 48) + 8 * v184));
              if (v515 == 0) {
                goto LABEL_824;
              }
              v516 = *(_QWORD*)(*(_QWORD*)v185 + 96LL);
              if (v516 == 0 || *(_QWORD*)(*(_QWORD*)v185 + 112LL) == 0) {
                goto LABEL_824;
              }
              v518 = v516 - 1;
              if ((v516 & (v516 - 1)) != 0) {
                v519 = v515;
                if (v515 >= v516) {
                  v519 = v515 % v516;
                }
              }
              else {
                v519 = v518 & v515;
              }
              v520 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)v185 + 88LL) + 8 * v519);
              if (v520 == nullptr) {
                goto LABEL_824;
              }
              v521 = (_QWORD*)*v520;
              if (v521 == nullptr) {
                goto LABEL_824;
              }
              if ((v516 & v518) == 0) {
                while (1) {
                  v523 = v521[1];
                  if (v523 == v515) {
                    if (v521[2] == v515) {
                      goto LABEL_850;
                    }
                  }
                  else if ((v523 & v518) != v519) {
                    goto LABEL_824;
                  }
                  v521 = (_QWORD*)*v521;
                  if (v521 == nullptr) {
                    goto LABEL_824;
                  }
                }
              }
            LABEL_840:
              v522 = v521[1];
              if (v522 != v515) {
                if (v522 >= v516) {
                  v522 %= v516;
                }
                if (v522 != v519) {
                  goto LABEL_824;
                }
              }
              else if (v521[2] == v515) {
              LABEL_850:
                v524 = v521[3];
                if (v524 != 0) {
                  v526 = *(_QWORD**)(v2 + 464);
                  v525 = *(_QWORD*)(v2 + 472);
                  if ((unsigned __int64)v526 < v525) {
                    *v526 = v524;
                    v514 = (__int64)(v526 + 1);
                  }
                  else {
                    v527 = *(_QWORD*)(v2 + 456);
                    v528 = (char*)v526 - v527;
                    v529 = ((__int64)v526 - v527) >> 3;
                    v530 = v529 + 1;
                    if ((unsigned __int64)(v529 + 1) >> 61 != 0) {
                      GameRoutine_6f93f0();
                    }
                    v531 = v525 - v527;
                    if (v531 >> 2 > v530) {
                      v530 = v531 >> 2;
                    }
                    if ((unsigned __int64)v531 >= 0x7FFFFFFFFFFFFFF8LL) {
                      v532 = 0x1FFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v532 = v530;
                    }
                    if (v532 != 0) {
                      if (v532 >> 61 != 0) {
                        goto LABEL_913;
                      }
                      v533 = fw_memory_HeapManager_Allocate_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v532, 16,
                          0);
                    }
                    else {
                      v533 = 0;
                    }
                    v534 = v533 + 8 * v532;
                    v535 = (char*)v526 - v527;
                    v536 = (__int64)&v528[v533 + -8 * v529];
                    *(_QWORD*)&v528[v533] = v524;
                    v514 = (__int64)&v528[v533 + 8];
                    memcpy(v536, v527, v535);
                    *(_QWORD*)(v2 + 456) = v536;
                    *(_QWORD*)(v2 + 464) = v514;
                    *(_QWORD*)(v2 + 472) = v534;
                    if (v527 != 0) {
                      v537 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v537 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v537, v527);
                    }
                    v1 = v565;
                  }
                  *(_QWORD*)(v2 + 464) = v514;
                  v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                }
              LABEL_824:
                if (++v184 != v183) {
                  continue;
                }
              LABEL_295:
                v191 = *(_QWORD*)(v2 + 232);
                v190 = *(_QWORD*)(v2 + 240);
                if (v191 != v190) {
                  v192 = *(_QWORD*)(v2 + 240);
                  do {
                    v194 = *(_QWORD*)(v192 - 24);
                    v192 -= 24;
                    v193 = v194;
                    if (v194 != 0) {
                      *(_QWORD*)(v190 - 16) = v193;
                      if (*(_QWORD*)(*v119 + 200) != 0) {
                        v195 = 128;
                      }
                      else {
                        v195 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v119 + v195, v193);
                    }
                    v190 = v192;
                  } while (v192 != v191);
                }
                v197 = (_QWORD*)(v2 + 160);
                v196 = *(_QWORD**)(v2 + 160);
                v198 = *(_QWORD*)(v2 + 136);
                *(_QWORD*)(v2 + 240) = v191;
                *(_QWORD*)(v2 + 168) = v196;
                *(_QWORD*)(v2 + 144) = v198;
                *(_QWORD*)(v2 + 192) = *(_QWORD*)(v2 + 184);
                v200 = (_QWORD*)(v2 + 208);
                v199 = *(_QWORD**)(v2 + 208);
                *(_QWORD*)(v2 + 216) = v199;
                v201 = v199;
                v202 = *(unsigned __int8*)(v565 + 33);
                if (v202 <= 0x1E) {
                  if (v202 - 24 < 2) {
                    v324 = *(_QWORD*)(v2 + 256);
                    v325 = *(_QWORD*)(v2 + 264);
                    if (v324 != v325) {
                      v326 = v201;
                      do {
                        v327 = *(_QWORD*)(*(_QWORD*)v324 + 24LL);
                        if ((unsigned __int64)v326 >= *(_QWORD*)(v2 + 224)) {
                          v326 = (_QWORD*)GameRoutine_693d40(
                              (__int64*)(v2 + 208), (__int64*)(v327 + 1232));
                        }
                        else {
                          *v326 = *(_QWORD*)(v327 + 1232);
                          v326[1] = *(_QWORD*)(v327 + 1240);
                          v326 += 2;
                        }
                        v324 += 8;
                        *(_QWORD*)(v2 + 216) = v326;
                      } while (v324 != v325);
                    }
                  }
                  else if (v202 == 22) {
                    v376 = *(_QWORD*)(v2 + 256);
                    v377 = *(_QWORD*)(v2 + 264);
                    while (v376 != v377) {
                      v378 = *(_QWORD*)(*(_QWORD*)v376 + 24LL);
                      if ((unsigned __int64)v196 >= *(_QWORD*)(v2 + 176)) {
                        v196 = (_QWORD*)GameRoutine_693d40(
                            (__int64*)(v2 + 160), (__int64*)(v378 + 1072));
                      }
                      else {
                        *v196 = *(_QWORD*)(v378 + 1072);
                        v196[1] = *(_QWORD*)(v378 + 1080);
                        v196 += 2;
                      }
                      *(_QWORD*)(v2 + 168) = v196;
                      v376 += 8;
                    }
                  }
                  else if (v202 == 23) {
                    v203 = *(_QWORD*)(v2 + 256);
                    v204 = *(_QWORD*)(v2 + 264);
                    while (v203 != v204) {
                      v205 = *(_QWORD*)(*(_QWORD*)v203 + 24LL);
                      if ((unsigned __int64)v196 >= *(_QWORD*)(v2 + 176)) {
                        v196 = (_QWORD*)GameRoutine_693d40(
                            (__int64*)(v2 + 160), (__int64*)(v205 + 992));
                      }
                      else {
                        *v196 = *(_QWORD*)(v205 + 992);
                        v196[1] = *(_QWORD*)(v205 + 1000);
                        v196 += 2;
                      }
                      *(_QWORD*)(v2 + 168) = v196;
                      v203 += 8;
                    }
                  }
                  goto LABEL_643;
                }
                if (v202 > 0x31) {
                  goto LABEL_543;
                }
                if (((1LL << v202) & 0x3800000000000LL) != 0) {
                  v372 = *(_QWORD*)(v2 + 256);
                  v373 = *(_QWORD*)(v2 + 264);
                  if (v372 != v373) {
                    v374 = v201;
                    do {
                      v375 = *(_QWORD*)(*(_QWORD*)v372 + 24LL);
                      if ((unsigned __int64)v374 >= *(_QWORD*)(v2 + 224)) {
                        v374 = (_QWORD*)GameRoutine_693d40(
                            (__int64*)(v2 + 208), (__int64*)(v375 + 1112));
                      }
                      else {
                        *v374 = *(_QWORD*)(v375 + 1112);
                        v374[1] = *(_QWORD*)(v375 + 1120);
                        v374 += 2;
                      }
                      v372 += 8;
                      *(_QWORD*)(v2 + 216) = v374;
                    } while (v372 != v373);
                  }
                }
                else if (((1LL << v202) & 0x1800000000LL) != 0) {
                  v379 = *(unsigned __int16*)(v565 + 40);
                  if (*(_WORD*)(v565 + 40) != 0) {
                    v380 = 0;
                    do {
                      v382 = *(_QWORD*)(*(_QWORD*)(v565 + 48) + 8 * v380);
                      v383 = game_HashString(v382);
                      v385 = *(__int64**)(v2 + 192);
                      v384 = *(_QWORD*)(v2 + 200);
                      v386 = v383;
                      if ((unsigned __int64)v385 < v384) {
                        *v385 = v383;
                        v385[1] = v382;
                        v381 = v385 + 2;
                      }
                      else {
                        v387 = *(_QWORD*)(v2 + 184);
                        v388 = (char*)v385 - v387;
                        v389 = (((__int64)v385 - v387) >> 4) + 1;
                        if (v389 >> 60 != 0) {
                        LABEL_914:
                          GameRoutine_693e60();
                        }
                        v390 = v384 - v387;
                        if (v390 >> 3 > v389) {
                          v389 = v390 >> 3;
                        }
                        if ((unsigned __int64)v390 >= 0x7FFFFFFFFFFFFFF0LL) {
                          v391 = 0xFFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v391 = v389;
                        }
                        if (v391 >> 60 != 0) {
                          goto LABEL_913;
                        }
                        v392 = fw_memory_HeapManager_Allocate_alt1(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v391,
                            16, 0);
                        v393 = (__int64*)&v388[v392];
                        *v393 = v386;
                        v393[1] = v382;
                        v394 = *(char**)(v2 + 184);
                        v395 = *(char**)(v2 + 192);
                        if (v394 != v395) {
                          v396 = *(char**)(v2 + 184);
                          v397 = &v388[v392 + v394 - v395];
                          do {
                            *(_QWORD*)v397 = *(_QWORD*)v396;
                            v398 = *((_QWORD*)v396 + 1);
                            v396 += 16;
                            *((_QWORD*)v397 + 1) = v398;
                            v397 += 16;
                          } while (v396 != v395);
                        }
                        v381 = v393 + 2;
                        *(_QWORD*)(v2 + 184) = &v388[v392 + v394 - v395];
                        *(_QWORD*)(v2 + 192) = v393 + 2;
                        *(_QWORD*)(v2 + 200) = v392 + 16 * v391;
                        v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                        if (v394 != nullptr) {
                          v399 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v399 = 56;
                          }
                          nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v399,
                              v394);
                        }
                      }
                      ++v380;
                      *(_QWORD*)(v2 + 192) = v381;
                    } while (v380 != v379);
                  }
                }
                else {
                  if (((1LL << v202) & 0xC000000000LL) != 0) {
                    v564 = *(unsigned __int16*)(v565 + 40);
                    if (*(_WORD*)(v565 + 40) == 0) {
                      goto LABEL_643;
                    }
                    v206 = 0;
                    v207 = GameData_212ca10[0];
                  LABEL_325:
                    v210 = *(_QWORD*)(v565 + 48);
                    v211 = game_HashString(*(_QWORD*)(v210 + 8 * v206));
                    if (v211 == 0) {
                      goto LABEL_358;
                    }
                    v212 = *(_QWORD*)(*(_QWORD*)GameData_212ca18[0] + 96LL);
                    if (v212 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212ca18[0] +
                                                112LL) == 0) {
                      goto LABEL_358;
                    }
                    v214 = v212 - 1;
                    if ((v212 & (v212 - 1)) != 0) {
                      v215 = v211;
                      if (v211 >= v212) {
                        v215 = v211 % v212;
                      }
                    }
                    else {
                      v215 = v214 & v211;
                    }
                    v216 =
                        *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212ca18[0] +
                                               88LL) +
                                    8 * v215);
                    if (v216 == nullptr) {
                      goto LABEL_358;
                    }
                    v217 = (_QWORD*)*v216;
                    if (v217 == nullptr) {
                      goto LABEL_358;
                    }
                    if ((v212 & v214) == 0) {
                      while (1) {
                        v219 = v217[1];
                        if (v219 == v211) {
                          if (v217[2] == v211) {
                            goto LABEL_350;
                          }
                        }
                        else if ((v219 & v214) != v215) {
                          goto LABEL_358;
                        }
                        v217 = (_QWORD*)*v217;
                        if (v217 == nullptr) {
                          goto LABEL_358;
                        }
                      }
                    }
                    while (1) {
                      v218 = v217[1];
                      if (v218 == v211) {
                        if (v217[2] == v211) {
                        LABEL_350:
                          v220 = v217[3];
                          if (v220 != 0) {
                            game_ae0900((void*)((__int64*)&v566_.v566), v220);
                            v221 = v566_.v567;
                            v222 = v566_.v566;
                            for (n = v566_.v566; v222 != v221; ++v222) {
                              v230 = *v222;
                              if (*v222 != nullptr) {
                                v231 = (_QWORD*)
                                    fw_memory_HeapManager_Allocate_alt1(
                                        *v119, 8, 16, 0);
                                *v231 = v230;
                                v232 = v231 + 1;
                                v233 = *(_QWORD**)(v2 + 240);
                                v234 = *(_QWORD*)(v2 + 248);
                                if ((unsigned __int64)v233 < v234) {
                                  *v233 = v231;
                                  v233[1] = v232;
                                  v229 = (__int64)(v233 + 3);
                                  v233[2] = v232;
                                }
                                else {
                                  v235 = *(_QWORD*)(v2 + 232);
                                  v236 = (char*)v233 - v235;
                                  v237 = 1 - 0x5555555555555555LL *
                                                 (((__int64)v233 - v235) >> 3);
                                  if (v237 > 0xAAAAAAAAAAAAAAALL) {
                                    goto LABEL_919;
                                  }
                                  v238 = 0xAAAAAAAAAAAAAAABLL *
                                         ((__int64)(v234 - v235) >> 3);
                                  if (2 * v238 > v237) {
                                    v237 = 2 * v238;
                                  }
                                  if (v238 >= 0x555555555555555LL) {
                                    v239 = 0xAAAAAAAAAAAAAAALL;
                                  }
                                  else {
                                    v239 = v237;
                                  }
                                  if (v239 != 0) {
                                    if (v239 > 0xAAAAAAAAAAAAAAALL) {
                                      goto LABEL_913;
                                    }
                                    v240 = v231;
                                    v241 = fw_memory_HeapManager_Allocate_alt1(
                                        *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        24 * v239, 16, 0);
                                    v231 = v240;
                                  }
                                  else {
                                    v241 = 0;
                                  }
                                  v242 = &v236[v241];
                                  v243 = v241 + 24 * v239;
                                  *(_QWORD*)v242 = v231;
                                  *((_QWORD*)v242 + 1) = v232;
                                  *((_QWORD*)v242 + 2) = v232;
                                  v229 = (__int64)&v236[v241 + 24];
                                  memcpy(v241, v235, v236);
                                  *(_QWORD*)(v2 + 232) = v241;
                                  *(_QWORD*)(v2 + 240) = v229;
                                  *(_QWORD*)(v2 + 248) = v243;
                                  v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                                  if (v235 != 0) {
                                    v244 = 128;
                                    if (*(_QWORD*)(*(_QWORD*)
                                                       fw_memory_g_heap_manager_ptr +
                                                   200LL) == 0) {
                                      v244 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free(
                                        *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v244,
                                        v235);
                                  }
                                }
                                *(_QWORD*)(v2 + 240) = v229;
                              }
                            }
                            if (n != nullptr) {
                              if (*(_QWORD*)(*v119 + 200) != 0) {
                                v223 = 128;
                              }
                              else {
                                v223 = 56;
                              }
                              nn_mem_StandardAllocator_Free(*v119 + v223, n);
                            }
                            v207 = GameData_212ca10[0];
                            goto LABEL_324;
                          }
                        LABEL_358:
                          v224 = game_HashString(*(_QWORD*)(v210 + 8 * v206));
                          if (v224 == 0) {
                            goto LABEL_405;
                          }
                          v225 = *(_QWORD*)(*(_QWORD*)v207 + 96LL);
                          if (v225 == 0 ||
                              *(_QWORD*)(*(_QWORD*)v207 + 112LL) == 0) {
                            goto LABEL_405;
                          }
                          v227 = v225 - 1;
                          if ((v225 & (v225 - 1)) != 0) {
                            v228 = v224;
                            if (v224 >= v225) {
                              v228 = v224 % v225;
                            }
                          }
                          else {
                            v228 = v227 & v224;
                          }
                          v245 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)v207 + 88LL) +
                                             8 * v228);
                          if (v245 == nullptr) {
                            goto LABEL_405;
                          }
                          v246 = (_QWORD*)*v245;
                          if (v246 == nullptr) {
                            goto LABEL_405;
                          }
                          if ((v225 & v227) == 0) {
                            while (1) {
                              v248 = v246[1];
                              if (v248 == v224) {
                                if (v246[2] == v224) {
                                  goto LABEL_402;
                                }
                              }
                              else if ((v248 & v227) != v228) {
                                goto LABEL_405;
                              }
                              v246 = (_QWORD*)*v246;
                              if (v246 == nullptr) {
                                goto LABEL_405;
                              }
                            }
                          }
                          while (2) {
                            v247 = v246[1];
                            if (v247 != v224) {
                              if (v247 >= v225) {
                                v247 %= v225;
                              }
                              if (v247 != v228) {
                                goto LABEL_405;
                              }
                            }
                            else if (v246[2] == v224) {
                            LABEL_402:
                              v249 = v246[3];
                              if (v249 != 0) {
                                v250 = (_QWORD*)
                                    fw_memory_HeapManager_Allocate_alt1(
                                        *v119, 8, 16, 0);
                                *v250 = v249;
                                v251 = v250 + 1;
                                v252 = *(_QWORD**)(v2 + 240);
                                v253 = *(_QWORD*)(v2 + 248);
                                if ((unsigned __int64)v252 < v253) {
                                  *v252 = v250;
                                  v252[1] = v251;
                                  v254 = (__int64)(v252 + 3);
                                  v252[2] = v251;
                                LABEL_536:
                                  v207 = GameData_212ca10[0];
                                  *(_QWORD*)(v2 + 240) = v254;
                                  goto LABEL_324;
                                }
                                v314 = *(_QWORD*)(v2 + 232);
                                v315 = (char*)v252 - v314;
                                v316 = 1 - 0x5555555555555555LL *
                                               (((__int64)v252 - v314) >> 3);
                                if (v316 <= 0xAAAAAAAAAAAAAAALL) {
                                  v317 = 0xAAAAAAAAAAAAAAABLL *
                                         ((__int64)(v253 - v314) >> 3);
                                  if (2 * v317 > v316) {
                                    v316 = 2 * v317;
                                  }
                                  if (v317 >= 0x555555555555555LL) {
                                    v318 = 0xAAAAAAAAAAAAAAALL;
                                  }
                                  else {
                                    v318 = v316;
                                  }
                                  if (v318 != 0) {
                                    if (v318 > 0xAAAAAAAAAAAAAAALL) {
                                      goto LABEL_913;
                                    }
                                    v319 = v250;
                                    v320 = fw_memory_HeapManager_Allocate_alt1(
                                        *v119, 24 * v318, 16, 0);
                                    v250 = v319;
                                  }
                                  else {
                                    v320 = 0;
                                  }
                                  v321 = &v315[v320];
                                  v322 = v320 + 24 * v318;
                                  *(_QWORD*)v321 = v250;
                                  *((_QWORD*)v321 + 1) = v251;
                                  *((_QWORD*)v321 + 2) = v251;
                                  v254 = (__int64)&v315[v320 + 24];
                                  memcpy(v320, v314, v315);
                                  *(_QWORD*)(v2 + 232) = v320;
                                  *(_QWORD*)(v2 + 240) = v254;
                                  *(_QWORD*)(v2 + 248) = v322;
                                  if (v314 != 0) {
                                    if (*(_QWORD*)(*v119 + 200) != 0) {
                                      v323 = 128;
                                    }
                                    else {
                                      v323 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free(*v119 + v323,
                                                                  v314);
                                  }
                                  goto LABEL_536;
                                }
                              LABEL_919:
                                GameRoutine_892720();
                              }
                            LABEL_405:
                              v566_.v567 = nullptr;
                              v566_.v568 = nullptr;
                              v566_.v566 = nullptr;
                              if (*(_QWORD*)(v210 + 8 * v206) != 0) {
                                v255 = *(char**)(v210 + 8 * v206);
                              }
                              else {
                                v255 = &GameData_1a9f09e;
                              }
                              v256 = strlen(v255);
                              if (v256 >= 0xFFFFFFFFFFFFFFF7LL) {
                                String_60a1d0_alt1();
                              }
                              v257 = v256;
                              if (v256 >= 0x17) {
                                if ((v256 | 7) == 0x17) {
                                  v259 = 26;
                                }
                                else {
                                  v259 = (v256 | 7) + 1;
                                }
                                v258 =
                                    (char*)fw_memory_HeapManager_Allocate_alt1(
                                        *v119, v259, 16, 0);
                                v570_.v571 = v257;
                                v570_.v572 = v258;
                                v570_.v570 = v259 | 1;
                              LABEL_416:
                                memmove(v258, v255, v257);
                                goto LABEL_417;
                              }
                              v258 = (char*)&v570_.v570 + 1;
                              LOBYTE(v570_.v570) = 2 * v256;
                              if (v256 != 0) {
                                goto LABEL_416;
                              }
                            LABEL_417:
                              v258[v257] = 0;
                              if ((v570_.v570 & 1) != 0) {
                                v260 = v570_.v572;
                              }
                              else {
                                v260 = (char*)&v570_.v570 + 1;
                              }
                              if ((v570_.v570 & 1) != 0) {
                                v261 = v570_.v571;
                              }
                              else {
                                v261 = (unsigned __int64)(unsigned __int8)
                                           v570_.v570 >>
                                       1;
                              }
                              RuntimeBuffer_8924a0((__int64)&v566_.v566,
                                                   (__int64)v260, v261, 0x2Du);
                              if ((v570_.v570 & 1) != 0 &&
                                  v570_.v572 != nullptr) {
                                if (*(_QWORD*)(*v119 + 200) != 0) {
                                  v262 = 128;
                                }
                                else {
                                  v262 = 56;
                                }
                                nn_mem_StandardAllocator_Free(*v119 + v262,
                                                              v570_.v572);
                              }
                              v263 = v566_.v566;
                              v264 = v566_.v567;
                              if (v566_.v566 == v566_.v567) {
                                v266 = nullptr;
                                v267 = nullptr;
                                goto LABEL_432;
                              }
                              v265 = 0;
                              v266 = nullptr;
                              v267 = nullptr;
                              while (2) {
                                if ((*(_BYTE*)v263 & 1) != 0) {
                                  v285 = (__int64)v263[2];
                                }
                                else {
                                  v285 = (__int64)v263 + 1;
                                }
                                v286 = game_HashString(v285);
                                if (v286 == 0) {
                                  goto LABEL_462;
                                }
                                v287 = *(_QWORD*)(*(_QWORD*)v207 + 96LL);
                                if (v287 == 0 ||
                                    *(_QWORD*)(*(_QWORD*)v207 + 112LL) == 0) {
                                  goto LABEL_462;
                                }
                                v289 = v287 - 1;
                                if ((v287 & (v287 - 1)) != 0) {
                                  v290 = v286;
                                  if (v286 >= v287) {
                                    v290 = v286 % v287;
                                  }
                                }
                                else {
                                  v290 = v289 & v286;
                                }
                                v291 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)v207 +
                                                              88LL) +
                                                   8 * v290);
                                if (v291 == nullptr) {
                                  goto LABEL_462;
                                }
                                v292 = (_QWORD*)*v291;
                                if (v292 == nullptr) {
                                  goto LABEL_462;
                                }
                                if ((v287 & v289) == 0) {
                                  while (1) {
                                    v294 = v292[1];
                                    if (v294 == v286) {
                                      if (v292[2] == v286) {
                                        goto LABEL_491;
                                      }
                                    }
                                    else if ((v294 & v289) != v290) {
                                      goto LABEL_462;
                                    }
                                    v292 = (_QWORD*)*v292;
                                    if (v292 == nullptr) {
                                      goto LABEL_462;
                                    }
                                  }
                                }
                              LABEL_481:
                                v293 = v292[1];
                                if (v293 != v286) {
                                  if (v293 >= v287) {
                                    v293 %= v287;
                                  }
                                  if (v293 != v290) {
                                    goto LABEL_462;
                                  }
                                }
                                else if (v292[2] == v286) {
                                LABEL_491:
                                  v295 = v292[3];
                                  if (v295 == 0) {
                                    goto LABEL_461;
                                  }
                                  if ((unsigned __int64)v266 < v265) {
                                    *(_QWORD*)v266 = v295;
                                    v266 += 8;
                                  LABEL_461:
                                    v207 = GameData_212ca10[0];
                                    goto LABEL_462;
                                  }
                                  v296 = v265;
                                  v297 = (char*)(v266 - v267);
                                  v298 = (v266 - v267) >> 3;
                                  v299 = v298 + 1;
                                  if ((unsigned __int64)(v298 + 1) >> 61 != 0) {
                                    goto LABEL_916;
                                  }
                                  v300 = v296 - (_QWORD)v267;
                                  v301 = (__int64)(v296 - (_QWORD)v267) >> 2;
                                  if (v301 > v299) {
                                    v299 = v301;
                                  }
                                  if (v300 >= 0x7FFFFFFFFFFFFFF8LL) {
                                    v302 = 0x1FFFFFFFFFFFFFFFLL;
                                  }
                                  else {
                                    v302 = v299;
                                  }
                                  if (v302 != 0) {
                                    if (v302 >> 61 == 0) {
                                      v303 =
                                          fw_memory_HeapManager_Allocate_alt1(
                                              *(_QWORD*)
                                                  fw_memory_g_heap_manager_ptr,
                                              8 * v302, 16, 0);
                                      goto LABEL_503;
                                    }
                                  LABEL_913:
                                    GameRoutine_60a210();
                                  }
                                  v303 = 0;
                                LABEL_503:
                                  v304 = (char*)(v266 - v267);
                                  v305 = (__int64)&v297[v303 + -8 * v298];
                                  v563 = v303 + 8 * v302;
                                  *(_QWORD*)&v297[v303] = v295;
                                  v266 = &v297[v303 + 8];
                                  memcpy(v305, v267, v304);
                                  if (v267 != nullptr) {
                                    v119 =
                                        (__int64*)fw_memory_g_heap_manager_ptr;
                                    v306 = 128;
                                    if (*(_QWORD*)(*(_QWORD*)
                                                       fw_memory_g_heap_manager_ptr +
                                                   200LL) == 0) {
                                      v306 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free(
                                        *(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v306,
                                        v267);
                                    v267 = (char*)v305;
                                  }
                                  else {
                                    v267 = (char*)v305;
                                    v119 =
                                        (__int64*)fw_memory_g_heap_manager_ptr;
                                  }
                                  v207 = GameData_212ca10[0];
                                  v265 = v563;
                                LABEL_462:
                                  v263 += 3;
                                  if (v263 != v264) {
                                    continue;
                                  }
                                LABEL_432:
                                  v269 = *(__int64**)(v2 + 240);
                                  v268 = *(_QWORD*)(v2 + 248);
                                  if ((unsigned __int64)v269 < v268) {
                                    v270 = v266 - v267;
                                    v269[1] = 0;
                                    v269[2] = 0;
                                    *v269 = 0;
                                    if (v266 == v267) {
                                      goto LABEL_436;
                                    }
                                    if ((v270 & 0x8000000000000000LL) == 0) {
                                      v271 =
                                          fw_memory_HeapManager_Allocate_alt1(
                                              *v119, v270, 16, 0);
                                      v272 = v271 + v270;
                                      *v269 = v271;
                                      v269[1] = v271;
                                      v269[2] = v271 + v270;
                                      memcpy(v271, v267, v270);
                                      v269[1] = v272;
                                    LABEL_436:
                                      *(_QWORD*)(v2 + 240) = v269 + 3;
                                      if (v267 != nullptr) {
                                      LABEL_437:
                                        if (*(_QWORD*)(*v119 + 200) != 0) {
                                          v273 = 128;
                                        }
                                        else {
                                          v273 = 56;
                                        }
                                        nn_mem_StandardAllocator_Free(
                                            *v119 + v273, v267);
                                      }
                                      goto LABEL_441;
                                    }
                                  LABEL_916:
                                    GameRoutine_892740();
                                  }
                                  v279 = *(_QWORD*)(v2 + 232);
                                  v280 = (char*)v269 - v279;
                                  v281 = 1 - 0x5555555555555555LL *
                                                 (((__int64)v269 - v279) >> 3);
                                  if (v281 > 0xAAAAAAAAAAAAAAALL) {
                                    goto LABEL_919;
                                  }
                                  v282 = 0xAAAAAAAAAAAAAAABLL *
                                         ((__int64)(v268 - v279) >> 3);
                                  if (2 * v282 > v281) {
                                    v281 = 2 * v282;
                                  }
                                  if (v282 >= 0x555555555555555LL) {
                                    v283 = 0xAAAAAAAAAAAAAAALL;
                                  }
                                  else {
                                    v283 = v281;
                                  }
                                  if (v283 != 0) {
                                    if (v283 > 0xAAAAAAAAAAAAAAALL) {
                                      goto LABEL_913;
                                    }
                                    v284 = fw_memory_HeapManager_Allocate_alt1(
                                        *v119, 24 * v283, 16, 0);
                                  }
                                  else {
                                    v284 = 0;
                                  }
                                  v307 = (__int64*)&v280[v284];
                                  v308 = v266 - v267;
                                  v307[1] = 0;
                                  v307[2] = 0;
                                  *v307 = 0;
                                  if (v308 != 0) {
                                    if (v308 < 0) {
                                      goto LABEL_916;
                                    }
                                    v309 = fw_memory_HeapManager_Allocate_alt1(
                                        *v119, v308, 16, 0);
                                    v310 = v309 + v308;
                                    *v307 = v309;
                                    v307[2] = v309 + v308;
                                    memcpy(v309, v267, v308);
                                    v307[1] = v310;
                                    v119 =
                                        (__int64*)fw_memory_g_heap_manager_ptr;
                                  }
                                  v311 = v284 + 24 * v283;
                                  v312 = v307 + 3;
                                  memcpy(v284, v279, v280);
                                  *(_QWORD*)(v2 + 232) = v284;
                                  *(_QWORD*)(v2 + 240) = v307 + 3;
                                  *(_QWORD*)(v2 + 248) = v311;
                                  if (v279 != 0) {
                                    if (*(_QWORD*)(*v119 + 200) != 0) {
                                      v313 = 128;
                                    }
                                    else {
                                      v313 = 56;
                                    }
                                    nn_mem_StandardAllocator_Free(*v119 + v313,
                                                                  v279);
                                    *(_QWORD*)(v2 + 240) = v312;
                                    if (v267 != nullptr) {
                                      goto LABEL_437;
                                    }
                                  }
                                  else {
                                    *(_QWORD*)(v2 + 240) = v312;
                                    if (v267 != nullptr) {
                                      goto LABEL_437;
                                    }
                                  }
                                LABEL_441:
                                  v208 = v566_.v566;
                                  v207 = GameData_212ca10[0];
                                  if (v566_.v566 != nullptr) {
                                    v274 = v566_.v567;
                                    if (v566_.v566 == v566_.v567) {
                                      goto LABEL_320;
                                    }
                                    v275 = v566_.v567;
                                    do {
                                      v276 = *((_BYTE*)v275 - 24);
                                      v275 -= 3;
                                      if ((v276 & 1) != 0) {
                                        v277 = (__int64)*(v274 - 1);
                                        if (v277 != 0) {
                                          if (*(_QWORD*)(*v119 + 200) != 0) {
                                            v278 = 128;
                                          }
                                          else {
                                            v278 = 56;
                                          }
                                          nn_mem_StandardAllocator_Free(
                                              *v119 + v278, v277);
                                        }
                                      }
                                      v274 = v275;
                                    } while (v275 != v208);
                                    v566_.v567 = v208;
                                    v207 = GameData_212ca10[0];
                                    v208 = v566_.v566;
                                    if (v566_.v566 != nullptr) {
                                    LABEL_320:
                                      if (*(_QWORD*)(*v119 + 200) != 0) {
                                        v209 = 128;
                                      }
                                      else {
                                        v209 = 56;
                                      }
                                      nn_mem_StandardAllocator_Free(
                                          *v119 + v209, v208);
                                    }
                                  }
                                LABEL_324:
                                  if (++v206 == v564) {
                                    goto LABEL_643;
                                  }
                                  goto LABEL_325;
                                }
                                break;
                              }
                              v292 = (_QWORD*)*v292;
                              if (v292 == nullptr) {
                                goto LABEL_462;
                              }
                              goto LABEL_481;
                            }
                            v246 = (_QWORD*)*v246;
                            if (v246 == nullptr) {
                              goto LABEL_405;
                            }
                            continue;
                          }
                        }
                      }
                      else {
                        if (v218 >= v212) {
                          v218 %= v212;
                        }
                        if (v218 != v215) {
                          goto LABEL_358;
                        }
                      }
                      v217 = (_QWORD*)*v217;
                      if (v217 == nullptr) {
                        goto LABEL_358;
                      }
                    }
                  }
                LABEL_543:
                  if (v202 - 33 < 2) {
                    v400 = *(unsigned __int16*)(v565 + 40);
                    if (*(_WORD*)(v565 + 40) != 0) {
                      for (ii = 0; ii != v400; ++ii) {
                        v403 = *(_QWORD*)(*(_QWORD*)(v565 + 48) + 8 * ii);
                        v404 = game_HashString(v403);
                        v406 = *(__int64**)(v2 + 144);
                        v405 = *(_QWORD*)(v2 + 152);
                        v407 = v404;
                        if ((unsigned __int64)v406 < v405) {
                          *v406 = v404;
                          v406[1] = v403;
                          v402 = v406 + 2;
                        }
                        else {
                          v408 = *(_QWORD*)(v2 + 136);
                          v409 = (char*)v406 - v408;
                          v410 = (((__int64)v406 - v408) >> 4) + 1;
                          if (v410 >> 60 != 0) {
                            goto LABEL_914;
                          }
                          v411 = v405 - v408;
                          if (v411 >> 3 > v410) {
                            v410 = v411 >> 3;
                          }
                          if ((unsigned __int64)v411 >= 0x7FFFFFFFFFFFFFF0LL) {
                            v412 = 0xFFFFFFFFFFFFFFFLL;
                          }
                          else {
                            v412 = v410;
                          }
                          if (v412 >> 60 != 0) {
                            goto LABEL_913;
                          }
                          v413 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v412,
                              16, 0);
                          v414 = (__int64*)&v409[v413];
                          *v414 = v407;
                          v414[1] = v403;
                          v415 = *(char**)(v2 + 136);
                          v416 = *(char**)(v2 + 144);
                          if (v415 != v416) {
                            v417 = *(char**)(v2 + 136);
                            v418 = &v409[v413 + v415 - v416];
                            do {
                              *(_QWORD*)v418 = *(_QWORD*)v417;
                              v419 = *((_QWORD*)v417 + 1);
                              v417 += 16;
                              *((_QWORD*)v418 + 1) = v419;
                              v418 += 16;
                            } while (v417 != v416);
                          }
                          v402 = v414 + 2;
                          *(_QWORD*)(v2 + 136) = &v409[v413 + v415 - v416];
                          *(_QWORD*)(v2 + 144) = v414 + 2;
                          *(_QWORD*)(v2 + 152) = v413 + 16 * v412;
                          v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                          if (v415 != nullptr) {
                            v420 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v420 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v420,
                                v415);
                          }
                        }
                        *(_QWORD*)(v2 + 144) = v402;
                      }
                    }
                  }
                  else if (v202 - 31 <= 1) {
                    v328 = *(unsigned __int16*)(v565 + 40);
                    if (*(_WORD*)(v565 + 40) != 0) {
                      for (jj = 0; jj != v328; ++jj) {
                        v331 = *(_QWORD*)(v565 + 48);
                        if ((atomic_load_explicit(
                                 (atomic_uchar* volatile)&GameData_21f1760,
                                 memory_order_acquire) &
                             1) == 0 &&
                            (unsigned int)__cxa_guard_acquire(
                                &GameData_21f1760) != 0) {
                          GameData_21f1758 = 1598310721;
                          __cxa_guard_release(&GameData_21f1760);
                        }
                        if ((atomic_load_explicit(
                                 (atomic_uchar* volatile)&GameData_21f1770,
                                 memory_order_acquire) &
                             1) == 0 &&
                            (unsigned int)__cxa_guard_acquire(
                                &GameData_21f1770) != 0) {
                          GameData_21f1768 = -427710745;
                          __cxa_guard_release(&GameData_21f1770);
                        }
                        v332 = *(int**)(v331 + 8 * jj);
                        v333 = GameData_21f1758;
                        v334 = GameData_21f1768;
                        v335 = *v332;
                        v336 = game_HashString((__int64)v332);
                        v337 = v336;
                        if (v335 == v333 || v335 == v334) {
                          v340 = *(__int64**)(v2 + 216);
                          v339 = *(_QWORD*)(v2 + 224);
                          if ((unsigned __int64)v340 >= v339) {
                            v358 = (__int64)v340 - *v200;
                            v359 = (v358 >> 4) + 1;
                            if (v359 >> 60 != 0) {
                              goto LABEL_914;
                            }
                            v360 = v339 - *v200;
                            if (v360 >> 3 > v359) {
                              v359 = v360 >> 3;
                            }
                            if ((unsigned __int64)v360 >=
                                0x7FFFFFFFFFFFFFF0LL) {
                              v361 = 0xFFFFFFFFFFFFFFFLL;
                            }
                            else {
                              v361 = v359;
                            }
                            if (v361 >> 60 != 0) {
                              goto LABEL_913;
                            }
                            v362 = fw_memory_HeapManager_Allocate_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                16 * v361, 16, 0);
                            v363 = (__int64*)(v362 + v358);
                            *v363 = v337;
                            v363[1] = (__int64)v332;
                            v364 = *(char**)(v2 + 208);
                            v365 = *(char**)(v2 + 216);
                            v366 = v362 + v358 + v364 - v365;
                            if (v364 != v365) {
                              v367 = *(char**)(v2 + 208);
                              v368 = (_QWORD*)(v362 + v358 + v364 - v365);
                              do {
                                *v368 = *(_QWORD*)v367;
                                v369 = *((_QWORD*)v367 + 1);
                                v367 += 16;
                                v368[1] = v369;
                                v368 += 2;
                              } while (v367 != v365);
                            }
                            v370 = v362 + 16 * v361;
                            v341 = v363 + 2;
                            *(_QWORD*)(v2 + 208) = v366;
                            *(_QWORD*)(v2 + 216) = v363 + 2;
                            *(_QWORD*)(v2 + 224) = v370;
                            v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                            if (v364 != nullptr) {
                              v371 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v371 = 56;
                              }
                              nn_mem_StandardAllocator_Free(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v371,
                                  v364);
                            }
                          }
                          else {
                            *v340 = v336;
                            v340[1] = (__int64)v332;
                            v341 = v340 + 2;
                            v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                          }
                          *(_QWORD*)(v2 + 216) = v341;
                        }
                        else {
                          v343 = *(__int64**)(v2 + 168);
                          v342 = *(_QWORD*)(v2 + 176);
                          if ((unsigned __int64)v343 < v342) {
                            *v343 = v336;
                            v343[1] = (__int64)v332;
                            v330 = v343 + 2;
                            v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                          }
                          else {
                            v344 = (__int64)v343 - *v197;
                            v345 = (v344 >> 4) + 1;
                            if (v345 >> 60 != 0) {
                              goto LABEL_914;
                            }
                            v346 = v342 - *v197;
                            if (v346 >> 3 > v345) {
                              v345 = v346 >> 3;
                            }
                            if ((unsigned __int64)v346 >=
                                0x7FFFFFFFFFFFFFF0LL) {
                              v347 = 0xFFFFFFFFFFFFFFFLL;
                            }
                            else {
                              v347 = v345;
                            }
                            if (v347 >> 60 != 0) {
                              goto LABEL_913;
                            }
                            v348 = fw_memory_HeapManager_Allocate_alt1(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                16 * v347, 16, 0);
                            v349 = (__int64*)(v348 + v344);
                            *v349 = v337;
                            v349[1] = (__int64)v332;
                            v350 = *(char**)(v2 + 160);
                            v351 = *(char**)(v2 + 168);
                            v352 = v348 + v344 + v350 - v351;
                            if (v350 != v351) {
                              v353 = *(char**)(v2 + 160);
                              v354 = (_QWORD*)(v348 + v344 + v350 - v351);
                              do {
                                *v354 = *(_QWORD*)v353;
                                v355 = *((_QWORD*)v353 + 1);
                                v353 += 16;
                                v354[1] = v355;
                                v354 += 2;
                              } while (v353 != v351);
                            }
                            v356 = v348 + 16 * v347;
                            v330 = v349 + 2;
                            *(_QWORD*)(v2 + 160) = v352;
                            *(_QWORD*)(v2 + 168) = v349 + 2;
                            *(_QWORD*)(v2 + 176) = v356;
                            v119 = (__int64*)fw_memory_g_heap_manager_ptr;
                            if (v350 != nullptr) {
                              v357 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v357 = 56;
                              }
                              nn_mem_StandardAllocator_Free(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v357,
                                  v350);
                            }
                          }
                          *(_QWORD*)(v2 + 168) = v330;
                        }
                      }
                    }
                  }
                }
              LABEL_643:
                v421 = *(_QWORD**)(v2 + 112);
                v423 = *(__int64**)(v2 + 136);
                v422 = *(__int64**)(v2 + 144);
                *(_QWORD*)(v2 + 120) = v421;
                if (v423 == v422) {
                  v424 = v565;
                }
                else {
                  v424 = v565;
                  do {
                    if ((unsigned __int64)v421 >= *(_QWORD*)(v2 + 128)) {
                      v421 = (_QWORD*)GameRoutine_693d40((__int64*)(v2 + 112),
                                                         v423);
                    }
                    else {
                      *v421 = *v423;
                      v421[1] = v423[1];
                      v421 += 2;
                    }
                    v423 += 2;
                    *(_QWORD*)(v2 + 120) = v421;
                  } while (v423 != v422);
                }
                v426 = *(__int64**)(v2 + 160);
                v425 = *(__int64**)(v2 + 168);
                while (v426 != v425) {
                  if ((unsigned __int64)v421 >= *(_QWORD*)(v2 + 128)) {
                    v421 =
                        (_QWORD*)GameRoutine_693d40((__int64*)(v2 + 112), v426);
                  }
                  else {
                    *v421 = *v426;
                    v421[1] = v426[1];
                    v421 += 2;
                  }
                  *(_QWORD*)(v2 + 120) = v421;
                  v426 += 2;
                }
                v428 = *(__int64**)(v2 + 208);
                v427 = *(__int64**)(v2 + 216);
                while (v428 != v427) {
                  if ((unsigned __int64)v421 >= *(_QWORD*)(v2 + 128)) {
                    v421 =
                        (_QWORD*)GameRoutine_693d40((__int64*)(v2 + 112), v428);
                  }
                  else {
                    *v421 = *v428;
                    v421[1] = v428[1];
                    v421 += 2;
                  }
                  *(_QWORD*)(v2 + 120) = v421;
                  v428 += 2;
                }
                v430 = *(__int64**)(v2 + 184);
                v429 = *(__int64**)(v2 + 192);
                while (v430 != v429) {
                  if ((unsigned __int64)v421 >= *(_QWORD*)(v2 + 128)) {
                    v421 =
                        (_QWORD*)GameRoutine_693d40((__int64*)(v2 + 112), v430);
                  }
                  else {
                    *v421 = *v430;
                    v421[1] = v430[1];
                    v421 += 2;
                  }
                  *(_QWORD*)(v2 + 120) = v421;
                  v430 += 2;
                }
                game_FlagConditionList_Assign((__int64*)(v2 + 304),
                                              (unsigned __int16*)(v424 + 56));
                v432 = *(_QWORD*)(v2 + 352);
                v431 = *(_QWORD*)(v2 + 360);
                if (v432 != v431) {
                  v433 = *(_QWORD*)(v2 + 360);
                  do {
                    v434 = *(_BYTE*)(v433 - 24);
                    v433 -= 24;
                    if ((v434 & 1) != 0) {
                      v435 = *(_QWORD*)(v431 - 8);
                      if (v435 != 0) {
                        if (*(_QWORD*)(*v119 + 200) != 0) {
                          v436 = 128;
                        }
                        else {
                          v436 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v119 + v436, v435);
                      }
                    }
                    v431 = v433;
                  } while (v433 != v432);
                }
                *(_QWORD*)(v2 + 360) = v432;
                result = &v566_.v566;
                v566_.v566 = GameData_1fa7488;
                v566_.v567 = (__int64 (**)(void))v2;
                v439 = *(_QWORD*)(v2 + 328);
                v438 = *(_QWORD*)(v2 + 336);
                v566_.v569 = (__int64*)&v566_.v566;
                if (v439 == v438) {
                  goto LABEL_683;
                }
                do {
                  if (v566_.v569 == nullptr) {
                    GameRoutine_60a310();
                  }
                  (*(void (**)(__int64*, __int64))(*v566_.v569 + 48))(
                      v566_.v569, v439);
                  v439 += 16;
                } while (v439 != v438);
                result = (__int64 (***)(void))v566_.v569;
                if (v566_.v569 == (__int64*)&v566_.v566) {
                LABEL_683:
                  v440 = 4;
                }
                else {
                  if (v566_.v569 == nullptr) {
                    return result;
                  }
                  v440 = 5;
                }
                return (__int64 (***)(void))(
                    (__int64 (*)(__int64))(*result)[v440])((__int64)result);
              }
              break;
            }
            v521 = (_QWORD*)*v521;
            if (v521 == nullptr) {
              goto LABEL_824;
            }
            goto LABEL_840;
          default:
            goto LABEL_295;
          }
        }
      }
      GameRoutine_65c760();
    }
  }
  GameRoutine_8999c0();
}

__int64 RuntimeBuffer_8920a0(__int64* a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  char* v37;
  unsigned __int64 v38;
  __int64 result;
  __int64 v40;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
  } v41_;

  v8 = strlen(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v9 = v8;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (v8 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v11, 16, 0);
    a1[1] = v9;
    a1[2] = (__int64)v10;
    *a1 = v11 | 1;
    goto LABEL_9;
  }
  *(_BYTE*)a1 = 2 * v8;
  v10 = (char*)a1 + 1;
  if (v8 != 0) {
  LABEL_9:
    memcpy(v10, a2, v9);
  }
  v10[v9] = 0;
  GameRoutine_1a09ce0(a1, &GameData_1ac690d, 1);
  v12 = (__int64)*(&GameData_1fa7060 + *(unsigned __int8*)(a3 + 33));
  v13 = strlen(v12);
  GameRoutine_1a09ce0(a1, v12, v13);
  GameRoutine_1a09ce0(a1, &GameData_1ac690d, 1);
  if ((a4 & 1) != 0) {
    v14 = *(_BYTE*)(a3 + 88);
    v15 = *(unsigned __int8*)a1;
    if ((v15 & 1) != 0) {
      v22 = a1[1];
      v18 = (*a1 & 0xFFFFFFFFFFFFFFFELL) - 1;
      if (v22 != v18) {
      LABEL_42:
        v26 = (char*)a1[2];
        a1[1] = v22 + 1;
        goto LABEL_43;
      }
      v16 = (char*)a1[2];
      if (v18 > 0x7FFFFFFFFFFFFFF2LL) {
        v25 = false;
        v17 = -9;
      LABEL_36:
        v22 = v18;
        v27 = fw_memory_g_heap_manager_ptr;
        v28 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
        memmove(v28, v16, v22);
        if (!v25 && v16 != nullptr) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v29, v16);
        }
        a1[2] = v28;
        *a1 = v17 | 1;
        goto LABEL_42;
      }
      v23 = (2 * v18) | 7;
      if (v23 == 23) {
        v24 = 26;
      }
      else {
        v24 = v23 + 1;
      }
      if (v18 >= 0xC) {
        v17 = v24;
      }
      else {
        v17 = 23;
      }
    }
    else {
      if ((_DWORD)v15 != 44) {
        v22 = v15 >> 1;
        *(_BYTE*)a1 = v15 + 2;
        v26 = (char*)a1 + 1;
      LABEL_43:
        v30 = &v26[v22];
        *v30 = v14;
        v30[1] = 0;
        goto LABEL_44;
      }
      v16 = (char*)a1 + 1;
      v17 = 48;
      v18 = 22;
    }
    v25 = v18 == 22;
    goto LABEL_36;
  }
  std___1_to_string_1a0a790((void*)(&v41_.v41),
                            (unsigned int)*(char*)(a3 + 88));
  if ((v41_.v41 & 1) != 0) {
    v19 = v41_.v43;
  }
  else {
    v19 = (char*)&v41_.v41 + 1;
  }
  if ((v41_.v41 & 1) != 0) {
    v20 = v41_.v42;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  GameRoutine_1a09ce0(a1, v19, v20);
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v41_.v43);
  }
LABEL_44:
  GameRoutine_1a09ce0(a1, &GameData_1ac690d, 1);
  std___1_to_string_1a0a790((void*)(&v41_.v41),
                            (unsigned int)*(char*)(a3 + 89));
  if ((v41_.v41 & 1) != 0) {
    v31 = v41_.v43;
  }
  else {
    v31 = (char*)&v41_.v41 + 1;
  }
  if ((v41_.v41 & 1) != 0) {
    v32 = v41_.v42;
  }
  else {
    v32 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  GameRoutine_1a09ce0(a1, v31, v32);
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v41_.v43);
  }
  GameRoutine_1a09ce0(a1, &GameData_1ac690d, 1);
  v34 = *(unsigned __int8*)(a3 + 33);
  v35 = *(unsigned __int8*)(a3 + 89);
  v36 = 0;
  do {
    if (*(unsigned __int8*)(a3 + 89) != v35) {
      break;
    }
    if (*(unsigned __int8*)(a3 + 33) == v34) {
      if (*(_QWORD*)(a3 + 208) != 0) {
        v36 = (unsigned int)v36;
      }
      else {
        v36 = (unsigned int)(v36 + 1);
      }
    }
    a3 = *(_QWORD*)(*(_QWORD*)(a3 + 24) + 8LL);
  } while (a3 != 0);
  std___1_to_string_1a0a790((void*)(&v41_.v41), v36);
  if ((v41_.v41 & 1) != 0) {
    v37 = v41_.v43;
  }
  else {
    v37 = (char*)&v41_.v41 + 1;
  }
  if ((v41_.v41 & 1) != 0) {
    v38 = v41_.v42;
  }
  else {
    v38 = (unsigned __int64)(unsigned __int8)v41_.v41 >> 1;
  }
  result = GameRoutine_1a09ce0(a1, v37, v38);
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v41_.v43);
  }
  return result;
}

__int64 RuntimeBuffer_8924a0(__int64 result, __int64 a2, unsigned __int64 a3,
                             unsigned __int8 a4)
{
  int v4;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];

  if (a3 == 0) {
    return result;
  }
  v4 = a4;
  v7 = result;
  v8 = 0;
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
LABEL_3:
  v10 = a3 - v8;
  v11 = 0;
  do {
    if (*(unsigned __int8*)(a2 + v8 + v11) == v4) {
      if (v11 == 0) {
        goto LABEL_24;
      }
      if (a3 < v8) {
        goto LABEL_40;
      }
      v13 = *(__int64**)(v7 + 8);
      v12 = *(_QWORD*)(v7 + 16);
      v14 = a2 + v8;
      if (v10 >= v11) {
        v15 = v11;
      }
      else {
        v15 = a3 - v8;
      }
      v26[0] = a2 + v8;
      v26[1] = v15;
      if ((unsigned __int64)v13 >= v12) {
        result = GameRoutine_892760(v7, v26);
        *(_QWORD*)(v7 + 8) = result;
        goto LABEL_24;
      }
      if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_41;
      }
      if (v15 >= 0x17) {
        if ((v15 | 7) == 0x17) {
          v17 = 26;
        }
        else {
          v17 = (v15 | 7) + 1;
        }
        v25 = v17;
        v18 = fw_memory_HeapManager_Allocate(*v9, v17, 16, 0);
        v14 = a2 + v8;
        v16 = (char*)v18;
        v13[1] = v15;
        v13[2] = v18;
        *v13 = v25 | 1;
      }
      else {
        *(_BYTE*)v13 = 2 * v15;
        v16 = (char*)v13 + 1;
        if (a3 == v8) {
          goto LABEL_23;
        }
      }
      result = memmove(v16, v14, v15);
    LABEL_23:
      v16[v15] = 0;
      *(_QWORD*)(v7 + 8) = v13 + 3;
      v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    LABEL_24:
      v8 += v11 + 1;
      if (v10 - 1 == v11) {
        return result;
      }
      goto LABEL_3;
    }
    ++v11;
  } while (v10 != v11);
  if (a3 == v8) {
    return result;
  }
  if (a3 < v8) {
  LABEL_40:
    String_60a250("string_view::substr");
  }
  v19 = v9;
  v21 = *(__int64**)(v7 + 8);
  v20 = *(_QWORD*)(v7 + 16);
  v22 = a2 + v8;
  v26[0] = v22;
  v26[1] = a3 - v8;
  if ((unsigned __int64)v21 >= v20) {
    result = GameRoutine_892760(v7, v26);
    goto LABEL_38;
  }
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_41:
    String_60a1d0(result);
  }
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v24 = 26;
    }
    else {
      v24 = (v10 | 7) + 1;
    }
    v23 = fw_memory_HeapManager_Allocate(*v19, v24, 16, 0);
    v21[1] = v10;
    v21[2] = v23;
    *v21 = v24 | 1;
  }
  else {
    *(_BYTE*)v21 = 2 * v10;
    v23 = (__int64)v21 + 1;
  }
  memmove(v23, v22, v10);
  *(_BYTE*)(v23 + v10) = 0;
  result = (__int64)(v21 + 3);
LABEL_38:
  *(_QWORD*)(v7 + 8) = result;
  return result;
}

void game_anonymous_RuntimeBuffer_Build_closure_Invoke(__int64 a1, __int64 a2)
{
  _DWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[2];
    char* v10;
  } v9_;

  v2 = *(_DWORD**)(a2 + 8);
  if (v2 == nullptr || *v2 != -1712762035) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 8);
  v4 = strlen_alt1(*(const char**)(a2 + 8));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v5 = v4;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v7, 16, 0);
    v9_.v9[1] = v5;
    v9_.v10 = v6;
    v9_.v9[0] = v7 | 1;
  }
  else {
    LOBYTE(v9_.v9[0]) = 2 * v4;
    v6 = (char*)v9_.v9 + 1;
    if (v4 == 0) {
      goto LABEL_12;
    }
  }
  memmove_alt1((__int64)v6, (__int64)v2, v5);
LABEL_12:
  v6[v5] = 0;
  GameRoutine_7a8220_alt1((__int64*)(v3 + 352), v9_.v9);
  if ((v9_.v9[0] & 1) != 0 && v9_.v10 != nullptr) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, (__int64)v9_.v10);
  }
}

__int64 RuntimeBuffer_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;

  *(_QWORD*)result = game_anonymous_RuntimeBuffer_vtable;
  if ((*(_BYTE*)(result + 8) & 1) != 0) {
    v1 = *(_QWORD*)(result + 24);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
  return result;
}

#pragma GCC visibility pop
