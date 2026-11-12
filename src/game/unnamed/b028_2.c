#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1ac690d;
extern _UNKNOWN GameData_1fd2d60;
extern __int64 GameData_212bf68;
extern __int64* GameData_212c010[3];
extern __int64 GameData_21a60d8;
extern __int64 GameData_2265ee0;
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);
__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a0b940(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 GameRoutine_60a270(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_a8ed00(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void GameRoutine_aa1540(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_aa1690(_QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_aa1a00(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_aa1b50(_QWORD, _QWORD);
__int64 GameRoutine_aa1dd0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c6c4f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c6dc40(_QWORD, _QWORD);
__int64 GameRoutine_c702b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c70850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void gfxa_aa1540(PSEUDO_X8, __int64, __int64,
                                            __int64, __int64, __int64, int*);
__attribute__((swiftcall)) void gfxa_aa1a00(PSEUDO_X8, __int64, __int64,
                                            __int64, __int64, __int64, int*);
__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64
GameRoutine_1a0a680_alt1(__int64, unsigned __int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a680");
__int64 GameRoutine_aa1b50_alt1(__int64,
                                unsigned __int64) __asm__("GameRoutine_aa1b50");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void Settings_aa1690(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_c6c4f0(__int64 a1, unsigned __int8* a2, unsigned int a3);

__int64 GameHr_c65f00(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  __int64* v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  __int64 v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int8* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 result;
  char* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  bool v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  unsigned __int64 v46;
  __int64* v47;
  char* v48;
  unsigned __int64 v49;
  char* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  bool v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  bool v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int8* v69;
  unsigned __int64 v70;
  char* v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  char* v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  char* v88;
  bool v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int8* v92;
  unsigned __int64 v93;
  char* v94;
  __int64 v95;
  unsigned __int64 v96;
  char* v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  bool v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  char* v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  char* v112;
  bool v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  unsigned __int8* v116;
  unsigned __int64 v117;
  char* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  char* v122;
  unsigned __int64 v123;
  char* v124;
  unsigned __int64 v125;
  __int64* v126;
  char* v127;
  unsigned __int64 v128;
  char* v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  bool v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  char* v141;
  __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  char* v145;
  bool v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int8* v149;
  __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  bool v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  char* v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  bool v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  char* v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  char* v172;
  bool v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  unsigned __int8* v176;
  unsigned __int64 v177;
  char* v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  bool v183;
  unsigned __int64 v184;
  unsigned __int8* v185;
  unsigned __int64 v186;
  __int64* v187;
  char* v188;
  unsigned __int64 v189;
  unsigned __int64 v190;
  char* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  bool v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  char* v202;
  __int64 v203;
  unsigned __int64 v204;
  char* v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  bool v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  char* v214;
  __int64 v215;
  unsigned __int64 v216;
  char* v217;
  __int64 v218;
  __int64 v219;
  unsigned __int64 v220;
  bool v221;
  unsigned __int64 v222;
  unsigned __int64 v223;
  __int64 v224;
  unsigned __int64 v225;
  char* v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  bool v231;
  unsigned __int64 v232;
  unsigned __int64 v233;
  __int64 v234;
  unsigned __int64 v235;
  char* v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  unsigned __int64 v240;
  bool v241;
  unsigned __int64 v242;
  unsigned __int64 v243;
  __int64 v244;
  unsigned __int64 v245;
  char* v246;
  __int64 v247;
  unsigned __int64 v248;
  unsigned __int64 v249;
  char* v250;
  bool v251;
  unsigned __int64 v252;
  unsigned __int64 v253;
  unsigned __int8* v254;
  unsigned __int64 v255;
  char* v256;
  __int64 v257;
  char* v258;
  unsigned __int64 v259;
  __int64* v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  unsigned __int64 v264;
  bool v265;
  unsigned __int64 v266;
  unsigned __int64 v267;
  __int64 v268;
  unsigned __int64 v269;
  char* v270;
  __int64 v271;
  unsigned __int64 v272;
  unsigned __int64 v273;
  char* v274;
  bool v275;
  unsigned __int64 v276;
  unsigned __int64 v277;
  unsigned __int8* v278;
  unsigned __int64 v279;
  char* v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  char* v284;
  unsigned __int64 v285;
  char* v286;
  unsigned __int64 v287;
  __int64* v288;
  char* v289;
  unsigned __int64 v290;
  char* v291;
  unsigned __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  unsigned __int64 v297;
  bool v298;
  unsigned __int64 v299;
  unsigned __int64 v300;
  __int64 v301;
  unsigned __int64 v302;
  char* v303;
  __int64 v304;
  char* v305;
  unsigned __int64 v306;
  unsigned __int64 v307;
  unsigned __int64 v308;
  char* v309;
  bool v310;
  unsigned __int64 v311;
  unsigned __int64 v312;
  unsigned __int8* v313;
  unsigned __int64 v314;
  char* v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  __int64* v319;
  char* v320;
  unsigned __int64 v321;
  char* v322;
  unsigned __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  unsigned __int64 v329;
  bool v330;
  unsigned __int64 v331;
  unsigned __int64 v332;
  __int64 v333;
  unsigned __int64 v334;
  char* v335;
  __int64 v336;
  unsigned __int64 v337;
  unsigned __int64 v338;
  char* v339;
  bool v340;
  unsigned __int64 v341;
  unsigned __int64 v342;
  unsigned __int8* v343;
  unsigned __int64 v344;
  char* v345;
  __int64 v346;
  char* v347;
  unsigned __int64 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  unsigned __int64 v352;
  bool v353;
  unsigned __int64 v354;
  unsigned __int64 v355;
  __int64 v356;
  unsigned __int64 v357;
  char* v358;
  __int64 v359;
  __int64 v360;
  __int64 v361;
  unsigned __int64 v362;
  bool v363;
  unsigned __int64 v364;
  unsigned __int64 v365;
  __int64 v366;
  unsigned __int64 v367;
  char* v368;
  __int64 v369;
  unsigned __int64 v370;
  unsigned __int64 v371;
  char* v372;
  bool v373;
  unsigned __int64 v374;
  unsigned __int64 v375;
  unsigned __int8* v376;
  unsigned __int64 v377;
  char* v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  unsigned __int64 v382;
  bool v383;
  unsigned __int64 v384;
  unsigned __int8* v385;
  unsigned __int64 v386;
  __int64* v387;
  char* v388;
  unsigned __int64 v389;
  __int64* v390;
  char* v391;
  unsigned __int64 v392;
  char* v393;
  unsigned __int64 v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  unsigned __int64* v400;
  __int64 v401;
  unsigned __int64 v402;
  unsigned __int64 v403;
  __int64 v404;
  unsigned __int64 v405;
  unsigned __int64 v406;
  unsigned __int64 v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  unsigned __int64 v413;
  __int64 v414;
  __int64 v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  __int64 v428;
  __int64 v429;
  unsigned __int64 v430;
  char* v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  __int64 v436;
  __int64 v437;
  __int64 v438;
  unsigned __int64 v439;
  char* v440;
  __int64 v441;
  unsigned __int64 v442;
  char* v443;
  __int64 v444;
  unsigned __int64 v445;
  char* v446;
  __int64 v447;
  __int64 v448;
  __int64 v449;
  __int64 v450;
  _DWORD v451[3];

  v3 = (__int64*)(a2 + 24);
  v2 = a2[24];
  v6 = a2[48];
  if ((v6 & 1) != 0) {
    v7 = *((_QWORD*)a2 + 7);
  }
  else {
    v7 = v6 >> 1;
  }
  v8 = a2[72];
  if ((v8 & 1) != 0) {
    v9 = *((_QWORD*)a2 + 10);
  }
  else {
    v9 = v8 >> 1;
  }
  v406 = v9;
  v10 = a2[96];
  if ((v10 & 1) != 0) {
    v11 = *((_QWORD*)a2 + 13);
  }
  else {
    v11 = v10 >> 1;
  }
  v405 = v11;
  if ((v2 & 1) != 0) {
    v12 = *((_QWORD*)a2 + 4);
  }
  else {
    v12 = v2 >> 1;
  }
  v407 = v12;
  v13 = GameData_212c010[0];
  if (v7 != 0) {
    v14 = *(unsigned __int8*)(a1 + 64);
    v16 = *(_QWORD*)(a1 + 72);
    v15 = *(_QWORD*)(a1 + 80);
    v17 = (v14 & 1) == 0;
    v18 = v14 >> 1;
    LODWORD(v444) = 0;
    v19 = v17 ? a1 + 65 : v15;
    v20 = v17 ? v18 : v16;
    v21 = (v6 & 1) != 0 ? *((unsigned __int8**)a2 + 8) : a2 + 49;
    GameRoutine_aa1540((void*)&v449, *(_QWORD*)(*GameData_212c010[0] + 13224),
                       v19, v20, v21, v7, &v444);
    GameRoutine_aa1690(v449, v21, v7);
    v22 = v450;
    if (v450 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v450 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      GameRoutine_1a09c50(v22);
    }
  }
  v23 = *(unsigned __int8*)(a1 + 88);
  v24 = (v23 & 1) == 0;
  v25 = v23 >> 1;
  if (v24) {
    v26 = v25;
  }
  else {
    v26 = *(_QWORD*)(a1 + 96);
  }
  v27 = *a2;
  if (v24) {
    v28 = a1 + 89;
  }
  else {
    v28 = *(_QWORD*)(a1 + 104);
  }
  v29 = (v27 & 1) == 0;
  v30 = v27 >> 1;
  if (v29) {
    v31 = v30;
  }
  else {
    v31 = *((_QWORD*)a2 + 1);
  }
  if (v29) {
    v32 = a2 + 1;
  }
  else {
    v32 = *((unsigned __int8**)a2 + 2);
  }
  LODWORD(v444) = 1;
  GameRoutine_aa1540((void*)&v447, *(_QWORD*)(*v13 + 13224), v28, v26, v32, v31,
                     &v444);
  GameRoutine_aa1690(v447, v32, v31);
  v33 = v448;
  if (v448 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v448 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    GameRoutine_1a09c50(v33);
    if ((*(_BYTE*)v3 & 1) == 0) {
      goto LABEL_41;
    }
  LABEL_43:
    GameRoutine_60a270(&v441, *((_QWORD*)a2 + 5), *((_QWORD*)a2 + 4));
    goto LABEL_44;
  }
  if ((*(_BYTE*)v3 & 1) != 0) {
    goto LABEL_43;
  }
LABEL_41:
  v34 = v3[1];
  v441 = *v3;
  v442 = v34;
  v443 = (char*)v3[2];
LABEL_44:
  result = GameRoutine_1a0a680(&v441, 0, "__", 2);
  v37 = *(_QWORD*)(result + 8);
  v36 = *(char**)(result + 16);
  v444 = *(_QWORD*)result;
  v445 = v37;
  v446 = v36;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v38 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v38, v443);
  }
  if (v407 != 0) {
    v39 = *(unsigned __int8*)(a1 + 112);
    v40 = (v39 & 1) == 0;
    v41 = v39 >> 1;
    if (v40) {
      v42 = v41;
    }
    else {
      v42 = *(_QWORD*)(a1 + 120);
    }
    if (v40) {
      v43 = a1 + 113;
    }
    else {
      v43 = *(_QWORD*)(a1 + 128);
    }
    if ((*a2 & 1) != 0) {
      GameRoutine_60a270(&v438, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
    }
    else {
      v44 = *((_QWORD*)a2 + 1);
      v438 = *(_QWORD*)a2;
      v439 = v44;
      v440 = *((char**)a2 + 2);
    }
    if ((v444 & 1) != 0) {
      v45 = v446;
    }
    else {
      v45 = (char*)&v444 + 1;
    }
    if ((v444 & 1) != 0) {
      v46 = v445;
    }
    else {
      v46 = (unsigned __int64)(unsigned __int8)v444 >> 1;
    }
    v47 = (__int64*)GameRoutine_1a09ce0(&v438, v45, v46);
    v49 = v47[1];
    v48 = (char*)v47[2];
    v441 = *v47;
    v442 = v49;
    v443 = v48;
    v47[1] = 0;
    v47[2] = 0;
    *v47 = 0;
    if ((v441 & 1) != 0) {
      v50 = v443;
    }
    else {
      v50 = (char*)&v441 + 1;
    }
    if ((v441 & 1) != 0) {
      v51 = v442;
    }
    else {
      v51 = (unsigned __int64)(unsigned __int8)v441 >> 1;
    }
    result = GameRoutine_aa1b50(v50, v51);
    if ((result & 1) != 0) {
      LODWORD(v412) = 1;
      GameRoutine_aa1540((void*)&v429, *(_QWORD*)(*v13 + 13224), v43, v42, v50,
                         v51, &v412);
      result = GameRoutine_aa1690(v429, v50, v51);
      if ((v441 & 1) == 0) {
      LABEL_79:
        if ((v438 & 1) != 0 && v440 != nullptr) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v53 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v53, v440);
        }
        v54 = v430;
        if (v430 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v430 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v54 + 16LL))(v54);
          result = GameRoutine_1a09c50(v54);
        }
        goto LABEL_87;
      }
    }
    else {
      v429 = 0;
      v430 = 0;
      if ((v441 & 1) == 0) {
        goto LABEL_79;
      }
    }
    if (v443 != nullptr) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
        v52 = 56;
      }
      result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v52, v443);
    }
    goto LABEL_79;
  }
LABEL_87:
  if (v7 == 0) {
    goto LABEL_143;
  }
  v55 = *(unsigned __int8*)(a1 + 64);
  v56 = (v55 & 1) == 0;
  v57 = v55 >> 1;
  if (v56) {
    v58 = v57;
  }
  else {
    v58 = *(_QWORD*)(a1 + 72);
  }
  if (v56) {
    v59 = a1 + 65;
  }
  else {
    v59 = *(_QWORD*)(a1 + 80);
  }
  v60 = v58 + 9;
  if (v58 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v60 >= 0x17) {
    if ((v60 | 7) == 0x17) {
      v62 = 26;
    }
    else {
      v62 = (v60 | 7) + 1;
    }
    v61 = (char*)GameRoutine_651b90(GameData_2265ee0, v62, 16, 0);
    v442 = v58 + 9;
    v443 = v61;
    v441 = v62 | 1;
    goto LABEL_102;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v60);
  v61 = (char*)&v441 + 1;
  if (v58 != 0) {
  LABEL_102:
    result = GameRoutine_1a0b940(v61, v59, v58);
  }
  strcpy(&v61[v58], "_Keyframe");
  if ((v441 & 1) != 0) {
    v63 = v442;
  }
  else {
    v63 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  v64 = a2[48];
  if ((v441 & 1) != 0) {
    v65 = v443;
  }
  else {
    v65 = (char*)&v441 + 1;
  }
  v66 = (v64 & 1) == 0;
  v67 = v64 >> 1;
  if (v66) {
    v68 = v67;
  }
  else {
    v68 = *((_QWORD*)a2 + 7);
  }
  if (v66) {
    v69 = a2 + 49;
  }
  else {
    v69 = *((unsigned __int8**)a2 + 8);
  }
  v70 = v68 + 9;
  if (v68 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v70 >= 0x17) {
    if ((v70 | 7) == 0x17) {
      v72 = 26;
    }
    else {
      v72 = (v70 | 7) + 1;
    }
    v71 = (char*)GameRoutine_651b90(GameData_2265ee0, v72, 16, 0);
    v439 = v68 + 9;
    v440 = v71;
    v438 = v72 | 1;
  }
  else {
    v439 = 0;
    v440 = nullptr;
    v438 = (unsigned __int8)(2 * v70);
    v71 = (char*)&v438 + 1;
    if (v68 == 0) {
      goto LABEL_124;
    }
  }
  GameRoutine_1a0b940(v71, v69, v68);
LABEL_124:
  strcpy(&v71[v68], "_Keyframe");
  if ((v438 & 1) != 0) {
    v73 = v439;
  }
  else {
    v73 = (unsigned __int64)(unsigned __int8)v438 >> 1;
  }
  if ((v438 & 1) != 0) {
    v74 = v440;
  }
  else {
    v74 = (char*)&v438 + 1;
  }
  LODWORD(v429) = 2;
  GameRoutine_aa1a00((void*)&v436, *(_QWORD*)(*GameData_212c010[0] + 13224),
                     v65, v63, v74, v73, &v429);
  result = GameRoutine_aa1690(v436, v74, v73);
  v75 = v437;
  if (v437 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v437 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
    result = GameRoutine_1a09c50(v75);
  }
  if ((v438 & 1) != 0 && v440 != nullptr) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v76 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v76, v440);
  }
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v77 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v77, v443);
  }
LABEL_143:
  v78 = *(unsigned __int8*)(a1 + 88);
  v79 = (v78 & 1) == 0;
  v80 = v78 >> 1;
  if (v79) {
    v81 = v80;
  }
  else {
    v81 = *(_QWORD*)(a1 + 96);
  }
  if (v79) {
    v82 = a1 + 89;
  }
  else {
    v82 = *(_QWORD*)(a1 + 104);
  }
  v83 = v81 + 9;
  if (v81 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v83 >= 0x17) {
    if ((v83 | 7) == 0x17) {
      v85 = 26;
    }
    else {
      v85 = (v83 | 7) + 1;
    }
    v84 = (char*)GameRoutine_651b90(GameData_2265ee0, v85, 16, 0);
    v442 = v81 + 9;
    v443 = v84;
    v441 = v85 | 1;
    goto LABEL_157;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v83);
  v84 = (char*)&v441 + 1;
  if (v81 != 0) {
  LABEL_157:
    result = GameRoutine_1a0b940(v84, v82, v81);
  }
  strcpy(&v84[v81], "_Keyframe");
  if ((v441 & 1) != 0) {
    v86 = v442;
  }
  else {
    v86 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  v87 = *a2;
  if ((v441 & 1) != 0) {
    v88 = v443;
  }
  else {
    v88 = (char*)&v441 + 1;
  }
  v89 = (v87 & 1) == 0;
  v90 = v87 >> 1;
  if (v89) {
    v91 = v90;
  }
  else {
    v91 = *((_QWORD*)a2 + 1);
  }
  if (v89) {
    v92 = a2 + 1;
  }
  else {
    v92 = *((unsigned __int8**)a2 + 2);
  }
  v93 = v91 + 9;
  if (v91 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v93 >= 0x17) {
    if ((v93 | 7) == 0x17) {
      v95 = 26;
    }
    else {
      v95 = (v93 | 7) + 1;
    }
    v94 = (char*)GameRoutine_651b90(GameData_2265ee0, v95, 16, 0);
    v439 = v91 + 9;
    v440 = v94;
    v438 = v95 | 1;
    goto LABEL_178;
  }
  v439 = 0;
  v440 = nullptr;
  v438 = (unsigned __int8)(2 * v93);
  v94 = (char*)&v438 + 1;
  if (v91 != 0) {
  LABEL_178:
    GameRoutine_1a0b940(v94, v92, v91);
  }
  strcpy(&v94[v91], "_Keyframe");
  if ((v438 & 1) != 0) {
    v96 = v439;
  }
  else {
    v96 = (unsigned __int64)(unsigned __int8)v438 >> 1;
  }
  if ((v438 & 1) != 0) {
    v97 = v440;
  }
  else {
    v97 = (char*)&v438 + 1;
  }
  LODWORD(v429) = 2;
  v98 = GameData_212c010[0];
  GameRoutine_aa1a00((void*)&v434, *(_QWORD*)(*GameData_212c010[0] + 13224),
                     v88, v86, v97, v96, &v429);
  result = GameRoutine_aa1690(v434, v97, v96);
  v99 = v435;
  if (v435 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v435 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
    result = GameRoutine_1a09c50(v99);
    if ((v438 & 1) == 0) {
      goto LABEL_193;
    }
  }
  else if ((v438 & 1) == 0) {
    goto LABEL_193;
  }
  if (v440 != nullptr) {
    v100 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v100 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v100, v440);
  }
LABEL_193:
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v101 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v101 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v101, v443);
  }
  if (v407 != 0) {
    v102 = *(unsigned __int8*)(a1 + 112);
    v103 = (v102 & 1) == 0;
    v104 = v102 >> 1;
    if (v103) {
      v105 = v104;
    }
    else {
      v105 = *(_QWORD*)(a1 + 120);
    }
    if (v103) {
      v106 = a1 + 113;
    }
    else {
      v106 = *(_QWORD*)(a1 + 128);
    }
    v107 = v105 + 9;
    if (v105 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_848;
    }
    if (v107 >= 0x17) {
      if ((v107 | 7) == 0x17) {
        v109 = 26;
      }
      else {
        v109 = (v107 | 7) + 1;
      }
      v108 = (char*)GameRoutine_651b90(GameData_2265ee0, v109, 16, 0);
      v442 = v105 + 9;
      v443 = v108;
      v441 = v109 | 1;
    }
    else {
      v442 = 0;
      v443 = nullptr;
      v441 = (unsigned __int8)(2 * v107);
      v108 = (char*)&v441 + 1;
      if (v105 == 0) {
      LABEL_214:
        strcpy(&v108[v105], "_Keyframe");
        if ((v441 & 1) != 0) {
          v110 = v442;
        }
        else {
          v110 = (unsigned __int64)(unsigned __int8)v441 >> 1;
        }
        v111 = *a2;
        if ((v441 & 1) != 0) {
          v112 = v443;
        }
        else {
          v112 = (char*)&v441 + 1;
        }
        v113 = (v111 & 1) == 0;
        v114 = v111 >> 1;
        if (v113) {
          v115 = v114;
        }
        else {
          v115 = *((_QWORD*)a2 + 1);
        }
        if (v113) {
          v116 = a2 + 1;
        }
        else {
          v116 = *((unsigned __int8**)a2 + 2);
        }
        v117 = v115 + 9;
        if (v115 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_848;
        }
        if (v117 >= 0x17) {
          if ((v117 | 7) == 0x17) {
            v119 = 26;
          }
          else {
            v119 = (v117 | 7) + 1;
          }
          v120 = GameRoutine_651b90(GameData_2265ee0, v119, 16, 0);
          v121 = v119 | 1;
          v118 = (char*)v120;
          v98 = GameData_212c010[0];
          v430 = v115 + 9;
          v431 = (char*)v120;
          v429 = v121;
        }
        else {
          v430 = 0;
          v431 = nullptr;
          v429 = (unsigned __int8)(2 * v117);
          v118 = (char*)&v429 + 1;
          if (v115 == 0) {
            goto LABEL_235;
          }
        }
        GameRoutine_1a0b940(v118, v116, v115);
      LABEL_235:
        v123 = v445;
        v122 = v446;
        strcpy(&v118[v115], "_Keyframe");
        if ((v444 & 1) != 0) {
          v124 = v122;
        }
        else {
          v124 = (char*)&v444 + 1;
        }
        if ((v444 & 1) != 0) {
          v125 = v123;
        }
        else {
          v125 = (unsigned __int64)(unsigned __int8)v444 >> 1;
        }
        v126 = (__int64*)GameRoutine_1a09ce0(&v429, v124, v125);
        v128 = v126[1];
        v127 = (char*)v126[2];
        v438 = *v126;
        v439 = v128;
        v440 = v127;
        v126[1] = 0;
        v126[2] = 0;
        *v126 = 0;
        if ((v438 & 1) != 0) {
          v129 = v440;
        }
        else {
          v129 = (char*)&v438 + 1;
        }
        if ((v438 & 1) != 0) {
          v130 = v439;
        }
        else {
          v130 = (unsigned __int64)(unsigned __int8)v438 >> 1;
        }
        result = GameRoutine_aa1b50(v129, v130);
        if ((result & 1) != 0) {
          LODWORD(v412) = 2;
          GameRoutine_aa1a00((void*)&v432, *(_QWORD*)(*v98 + 13224), v112, v110,
                             v129, v130, &v412);
          result = GameRoutine_aa1690(v432, v129, v130);
          v131 = v433;
          if (v433 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v433 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131);
            result = GameRoutine_1a09c50(v131);
          }
        }
        else {
          v432 = 0;
          v433 = 0;
        }
        if ((v438 & 1) != 0 && v440 != nullptr) {
          v132 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v132 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v132, v440);
        }
        if ((v429 & 1) != 0 && v431 != nullptr) {
          v133 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v133 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v133, v431);
        }
        if ((v441 & 1) != 0 && v443 != nullptr) {
          v134 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v134 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v134, v443);
        }
        goto LABEL_267;
      }
    }
    result = GameRoutine_1a0b940(v108, v106, v105);
    goto LABEL_214;
  }
LABEL_267:
  if (v406 == 0) {
    goto LABEL_323;
  }
  v135 = *(unsigned __int8*)(a1 + 64);
  v136 = (v135 & 1) == 0;
  v137 = v135 >> 1;
  if (v136) {
    v138 = v137;
  }
  else {
    v138 = *(_QWORD*)(a1 + 72);
  }
  if (v136) {
    v139 = a1 + 65;
  }
  else {
    v139 = *(_QWORD*)(a1 + 80);
  }
  v140 = v138 + 2;
  if (v138 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v140 >= 0x17) {
    if ((v140 | 7) == 0x17) {
      v142 = 26;
    }
    else {
      v142 = (v140 | 7) + 1;
    }
    v141 = (char*)GameRoutine_651b90(GameData_2265ee0, v142, 16, 0);
    v442 = v138 + 2;
    v443 = v141;
    v441 = v142 | 1;
    goto LABEL_282;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v140);
  v141 = (char*)&v441 + 1;
  if (v138 != 0) {
  LABEL_282:
    GameRoutine_1a0b940(v141, v139, v138);
  }
  LODWORD(v438) = 0;
  strcpy(&v141[v138], "Ex");
  if ((v441 & 1) != 0) {
    v143 = v442;
  }
  else {
    v143 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  v144 = a2[72];
  v98 = GameData_212c010[0];
  if ((v441 & 1) != 0) {
    v145 = v443;
  }
  else {
    v145 = (char*)&v441 + 1;
  }
  v146 = (v144 & 1) == 0;
  v147 = v144 >> 1;
  if (v146) {
    v148 = v147;
  }
  else {
    v148 = *((_QWORD*)a2 + 10);
  }
  if (v146) {
    v149 = a2 + 73;
  }
  else {
    v149 = *((unsigned __int8**)a2 + 11);
  }
  GameRoutine_aa1540((void*)&v427, *(_QWORD*)(*GameData_212c010[0] + 13224),
                     v145, v143, v149, v148, &v438);
  result = GameRoutine_aa1690(v427, v149, v148);
  v150 = v428;
  if (v428 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v428 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v150 + 16LL))(v150);
    result = GameRoutine_1a09c50(v150);
    if ((v441 & 1) == 0) {
      goto LABEL_303;
    }
  }
  else if ((v441 & 1) == 0) {
    goto LABEL_303;
  }
  if (v443 != nullptr) {
    v151 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v151 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v151, v443);
  }
LABEL_303:
  v152 = *(unsigned __int8*)(a1 + 64);
  v153 = (v152 & 1) == 0;
  v154 = v152 >> 1;
  if (v153) {
    v155 = v154;
  }
  else {
    v155 = *(_QWORD*)(a1 + 72);
  }
  if (v153) {
    v156 = a1 + 65;
  }
  else {
    v156 = *(_QWORD*)(a1 + 80);
  }
  v157 = v155 + 2;
  if (v155 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v157 >= 0x17) {
    v159 = v157 | 7;
    if (v159 == 23) {
      v160 = 26;
    }
    else {
      v160 = v159 + 1;
    }
    v158 = (char*)GameRoutine_651b90(GameData_2265ee0, v160, 16, 0);
    v443 = v158;
    v441 = v160 | 1;
  }
  else {
    v442 = 0;
    v443 = nullptr;
    v441 = (unsigned __int8)(2 * v157);
    v158 = (char*)&v441 + 1;
    if (v155 == 0) {
      goto LABEL_318;
    }
  }
  result = GameRoutine_1a0b940(v158, v156, v155);
LABEL_318:
  strcpy(&v158[v155], "Ex");
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v161 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v161 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v161, v443);
  }
LABEL_323:
  if (v405 == 0) {
    goto LABEL_390;
  }
  v162 = *(unsigned __int8*)(a1 + 88);
  v163 = (v162 & 1) == 0;
  v164 = v162 >> 1;
  if (v163) {
    v165 = v164;
  }
  else {
    v165 = *(_QWORD*)(a1 + 96);
  }
  if (v163) {
    v166 = a1 + 89;
  }
  else {
    v166 = *(_QWORD*)(a1 + 104);
  }
  v167 = v165 + 2;
  if (v165 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v167 >= 0x17) {
    if ((v167 | 7) == 0x17) {
      v169 = 26;
    }
    else {
      v169 = (v167 | 7) + 1;
    }
    v168 = (char*)GameRoutine_651b90(GameData_2265ee0, v169, 16, 0);
    v442 = v165 + 2;
    v443 = v168;
    v441 = v169 | 1;
    goto LABEL_338;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v167);
  v168 = (char*)&v441 + 1;
  if (v165 != 0) {
  LABEL_338:
    result = GameRoutine_1a0b940(v168, v166, v165);
  }
  strcpy(&v168[v165], "Ex");
  if ((v441 & 1) != 0) {
    v170 = v442;
  }
  else {
    v170 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  v171 = *a2;
  if ((v441 & 1) != 0) {
    v172 = v443;
  }
  else {
    v172 = (char*)&v441 + 1;
  }
  v173 = (v171 & 1) == 0;
  v174 = v171 >> 1;
  if (v173) {
    v175 = v174;
  }
  else {
    v175 = *((_QWORD*)a2 + 1);
  }
  if (v173) {
    v176 = a2 + 1;
  }
  else {
    v176 = *((unsigned __int8**)a2 + 2);
  }
  v177 = v175 + 1;
  if (v175 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v177 >= 0x17) {
    if ((v177 | 7) == 0x17) {
      v179 = 26;
    }
    else {
      v179 = (v177 | 7) + 1;
    }
    v180 = GameRoutine_651b90(GameData_2265ee0, v179, 16, 0);
    v181 = v179 | 1;
    v178 = (char*)v180;
    v98 = GameData_212c010[0];
    v430 = v175 + 1;
    v431 = (char*)v180;
    v429 = v181;
    goto LABEL_359;
  }
  v430 = 0;
  v431 = nullptr;
  v429 = (unsigned __int8)(2 * v177);
  v178 = (char*)&v429 + 1;
  if (v175 != 0) {
  LABEL_359:
    GameRoutine_1a0b940(v178, v176, v175);
  }
  *(_WORD*)&v178[v175] = 95;
  v182 = a2[96];
  v183 = (v182 & 1) == 0;
  v184 = v182 >> 1;
  if (v183) {
    v185 = a2 + 97;
  }
  else {
    v185 = *((unsigned __int8**)a2 + 14);
  }
  if (v183) {
    v186 = v184;
  }
  else {
    v186 = *((_QWORD*)a2 + 13);
  }
  v187 = (__int64*)GameRoutine_1a09ce0(&v429, v185, v186);
  v189 = v187[1];
  v188 = (char*)v187[2];
  v438 = *v187;
  v439 = v189;
  v440 = v188;
  v187[1] = 0;
  v187[2] = 0;
  *v187 = 0;
  if ((v438 & 1) != 0) {
    v190 = v439;
  }
  else {
    v190 = (unsigned __int64)(unsigned __int8)v438 >> 1;
  }
  if ((v438 & 1) != 0) {
    v191 = v440;
  }
  else {
    v191 = (char*)&v438 + 1;
  }
  LODWORD(v412) = 1;
  GameRoutine_aa1540((void*)&v425, *(_QWORD*)(*v98 + 13224), v172, v170, v191,
                     v190, &v412);
  result = GameRoutine_aa1690(v425, v191, v190);
  v192 = v426;
  if (v426 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v426 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v192 + 16LL))(v192);
    result = GameRoutine_1a09c50(v192);
    if ((v438 & 1) != 0) {
    LABEL_375:
      if (v440 != nullptr) {
        v193 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v193 = 56;
        }
        result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v193, v440);
      }
    }
  }
  else if ((v438 & 1) != 0) {
    goto LABEL_375;
  }
  if ((v429 & 1) != 0 && v431 != nullptr) {
    v194 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v194 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v194, v431);
  }
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v195 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v195 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v195, v443);
  }
LABEL_390:
  v196 = *(unsigned __int8*)(a1 + 64);
  v197 = (v196 & 1) == 0;
  v198 = v196 >> 1;
  if (v197) {
    v199 = v198;
  }
  else {
    v199 = *(_QWORD*)(a1 + 72);
  }
  if (v197) {
    v200 = a1 + 65;
  }
  else {
    v200 = *(_QWORD*)(a1 + 80);
  }
  v201 = v199 + 5;
  if (v199 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v201 >= 0x17) {
    if ((v201 | 7) == 0x17) {
      v203 = 26;
    }
    else {
      v203 = (v201 | 7) + 1;
    }
    v202 = (char*)GameRoutine_651b90(GameData_2265ee0, v203, 16, 0);
    v442 = v199 + 5;
    v443 = v202;
    v441 = v203 | 1;
    goto LABEL_404;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v201);
  v202 = (char*)&v441 + 1;
  if (v199 != 0) {
  LABEL_404:
    GameRoutine_1a0b940(v202, v200, v199);
  }
  LODWORD(v438) = 0;
  strcpy(&v202[v199], "_Bmap");
  if ((v441 & 1) != 0) {
    v204 = v442;
  }
  else {
    v204 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  if ((v441 & 1) != 0) {
    v205 = v443;
  }
  else {
    v205 = (char*)&v441 + 1;
  }
  GameRoutine_aa1540((void*)&v423, *(_QWORD*)(*v98 + 13224), v205, v204,
                     "Preset/Bmap", 11, &v438);
  result = GameRoutine_aa1690(v423, "Preset/Bmap", 11);
  v206 = v424;
  if (v424 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v424 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v206 + 16LL))(v206);
    result = GameRoutine_1a09c50(v206);
    if ((v441 & 1) == 0) {
      goto LABEL_419;
    }
  }
  else if ((v441 & 1) == 0) {
    goto LABEL_419;
  }
  if (v443 != nullptr) {
    v207 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v207 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v207, v443);
  }
LABEL_419:
  v208 = *(unsigned __int8*)(a1 + 64);
  v209 = (v208 & 1) == 0;
  v210 = v208 >> 1;
  if (v209) {
    v211 = v210;
  }
  else {
    v211 = *(_QWORD*)(a1 + 72);
  }
  if (v209) {
    v212 = a1 + 65;
  }
  else {
    v212 = *(_QWORD*)(a1 + 80);
  }
  v213 = v211 + 7;
  if (v211 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v213 >= 0x17) {
    if ((v213 | 7) == 0x17) {
      v215 = 26;
    }
    else {
      v215 = (v213 | 7) + 1;
    }
    v214 = (char*)GameRoutine_651b90(GameData_2265ee0, v215, 16, 0);
    v442 = v211 + 7;
    v443 = v214;
    v441 = v215 | 1;
    goto LABEL_433;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v213);
  v214 = (char*)&v441 + 1;
  if (v211 != 0) {
  LABEL_433:
    GameRoutine_1a0b940(v214, v212, v211);
  }
  LODWORD(v438) = 0;
  strcpy(&v214[v211], "_Combat");
  if ((v441 & 1) != 0) {
    v216 = v442;
  }
  else {
    v216 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  if ((v441 & 1) != 0) {
    v217 = v443;
  }
  else {
    v217 = (char*)&v441 + 1;
  }
  GameRoutine_aa1540((void*)&v421, *(_QWORD*)(*v98 + 13224), v217, v216,
                     "Preset/Combat", 13, &v438);
  result = GameRoutine_aa1690(v421, "Preset/Combat", 13);
  v218 = v422;
  if (v422 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v422 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v218 + 16LL))(v218);
    result = GameRoutine_1a09c50(v218);
    if ((v441 & 1) == 0) {
      goto LABEL_448;
    }
  }
  else if ((v441 & 1) == 0) {
    goto LABEL_448;
  }
  if (v443 != nullptr) {
    v219 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v219 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v219, v443);
  }
LABEL_448:
  v220 = *(unsigned __int8*)(a1 + 64);
  v221 = (v220 & 1) == 0;
  v222 = v220 >> 1;
  if (v221) {
    v223 = v222;
  }
  else {
    v223 = *(_QWORD*)(a1 + 72);
  }
  if (v221) {
    v224 = a1 + 65;
  }
  else {
    v224 = *(_QWORD*)(a1 + 80);
  }
  v225 = v223 + 5;
  if (v223 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v225 >= 0x17) {
    v227 = v225 | 7;
    if (v227 == 23) {
      v228 = 26;
    }
    else {
      v228 = v227 + 1;
    }
    v226 = (char*)GameRoutine_651b90(GameData_2265ee0, v228, 16, 0);
    v443 = v226;
    v441 = v228 | 1;
  }
  else {
    v442 = 0;
    v443 = nullptr;
    v441 = (unsigned __int8)(2 * v225);
    v226 = (char*)&v441 + 1;
    if (v223 == 0) {
      goto LABEL_463;
    }
  }
  result = GameRoutine_1a0b940(v226, v224, v223);
LABEL_463:
  strcpy(&v226[v223], "_Bmap");
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v229 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v229 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v229, v443);
  }
  v230 = *(unsigned __int8*)(a1 + 64);
  v231 = (v230 & 1) == 0;
  v232 = v230 >> 1;
  if (v231) {
    v233 = v232;
  }
  else {
    v233 = *(_QWORD*)(a1 + 72);
  }
  if (v231) {
    v234 = a1 + 65;
  }
  else {
    v234 = *(_QWORD*)(a1 + 80);
  }
  v235 = v233 + 7;
  if (v233 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v235 >= 0x17) {
    v237 = v235 | 7;
    if (v237 == 23) {
      v238 = 26;
    }
    else {
      v238 = v237 + 1;
    }
    v236 = (char*)GameRoutine_651b90(GameData_2265ee0, v238, 16, 0);
    v443 = v236;
    v441 = v238 | 1;
  }
  else {
    v442 = 0;
    v443 = nullptr;
    v441 = (unsigned __int8)(2 * v235);
    v236 = (char*)&v441 + 1;
    if (v233 == 0) {
      goto LABEL_483;
    }
  }
  result = GameRoutine_1a0b940(v236, v234, v233);
LABEL_483:
  strcpy(&v236[v233], "_Combat");
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v239 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v239 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v239, v443);
  }
  v240 = *(unsigned __int8*)(a1 + 88);
  v241 = (v240 & 1) == 0;
  v242 = v240 >> 1;
  if (v241) {
    v243 = v242;
  }
  else {
    v243 = *(_QWORD*)(a1 + 96);
  }
  if (v241) {
    v244 = a1 + 89;
  }
  else {
    v244 = *(_QWORD*)(a1 + 104);
  }
  v245 = v243 + 5;
  if (v243 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v245 >= 0x17) {
    if ((v245 | 7) == 0x17) {
      v247 = 26;
    }
    else {
      v247 = (v245 | 7) + 1;
    }
    v246 = (char*)GameRoutine_651b90(GameData_2265ee0, v247, 16, 0);
    v442 = v243 + 5;
    v443 = v246;
    v441 = v247 | 1;
    goto LABEL_502;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v245);
  v246 = (char*)&v441 + 1;
  if (v243 != 0) {
  LABEL_502:
    result = GameRoutine_1a0b940(v246, v244, v243);
  }
  strcpy(&v246[v243], "_Bmap");
  if ((v441 & 1) != 0) {
    v248 = v442;
  }
  else {
    v248 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  v249 = *a2;
  if ((v441 & 1) != 0) {
    v250 = v443;
  }
  else {
    v250 = (char*)&v441 + 1;
  }
  v251 = (v249 & 1) == 0;
  v252 = v249 >> 1;
  if (v251) {
    v253 = v252;
  }
  else {
    v253 = *((_QWORD*)a2 + 1);
  }
  if (v251) {
    v254 = a2 + 1;
  }
  else {
    v254 = *((unsigned __int8**)a2 + 2);
  }
  v255 = v253 + 5;
  if (v253 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v255 >= 0x17) {
    if ((v255 | 7) == 0x17) {
      v257 = 26;
    }
    else {
      v257 = (v255 | 7) + 1;
    }
    v256 = (char*)GameRoutine_651b90(GameData_2265ee0, v257, 16, 0);
    v439 = v253 + 5;
    v440 = v256;
    v438 = v257 | 1;
    goto LABEL_523;
  }
  v439 = 0;
  v440 = nullptr;
  v438 = (unsigned __int8)(2 * v255);
  v256 = (char*)&v438 + 1;
  if (v253 != 0) {
  LABEL_523:
    GameRoutine_1a0b940(v256, v254, v253);
  }
  strcpy(&v256[v253], "_Bmap");
  if ((v438 & 1) != 0) {
    v258 = v440;
  }
  else {
    v258 = (char*)&v438 + 1;
  }
  if ((v438 & 1) != 0) {
    v259 = v439;
  }
  else {
    v259 = (unsigned __int64)(unsigned __int8)v438 >> 1;
  }
  result = GameRoutine_aa1b50(v258, v259);
  if ((result & 1) != 0) {
    LODWORD(v429) = 1;
    v260 = GameData_212c010[0];
    GameRoutine_aa1540((void*)&v419, *(_QWORD*)(*GameData_212c010[0] + 13224),
                       v250, v248, v258, v259, &v429);
    result = GameRoutine_aa1690(v419, v258, v259);
    v261 = v420;
    if (v420 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v420 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v261 + 16LL))(v261);
      result = GameRoutine_1a09c50(v261);
    }
  }
  else {
    v419 = 0;
    v420 = 0;
    v260 = &GameData_21a60d8;
  }
  if ((v438 & 1) != 0 && v440 != nullptr) {
    v262 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v262 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v262, v440);
  }
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v263 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v263 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v263, v443);
  }
  if (v407 != 0) {
    v264 = *(unsigned __int8*)(a1 + 112);
    v265 = (v264 & 1) == 0;
    v266 = v264 >> 1;
    if (v265) {
      v267 = v266;
    }
    else {
      v267 = *(_QWORD*)(a1 + 120);
    }
    if (v265) {
      v268 = a1 + 113;
    }
    else {
      v268 = *(_QWORD*)(a1 + 128);
    }
    v269 = v267 + 5;
    if (v267 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_848;
    }
    if (v269 >= 0x17) {
      if ((v269 | 7) == 0x17) {
        v271 = 26;
      }
      else {
        v271 = (v269 | 7) + 1;
      }
      v270 = (char*)GameRoutine_651b90(GameData_2265ee0, v271, 16, 0);
      v442 = v267 + 5;
      v443 = v270;
      v441 = v271 | 1;
    }
    else {
      v442 = 0;
      v443 = nullptr;
      v441 = (unsigned __int8)(2 * v269);
      v270 = (char*)&v441 + 1;
      if (v267 == 0) {
      LABEL_561:
        strcpy(&v270[v267], "_Bmap");
        if ((v441 & 1) != 0) {
          v272 = v442;
        }
        else {
          v272 = (unsigned __int64)(unsigned __int8)v441 >> 1;
        }
        v273 = *a2;
        if ((v441 & 1) != 0) {
          v274 = v443;
        }
        else {
          v274 = (char*)&v441 + 1;
        }
        v275 = (v273 & 1) == 0;
        v276 = v273 >> 1;
        if (v275) {
          v277 = v276;
        }
        else {
          v277 = *((_QWORD*)a2 + 1);
        }
        if (v275) {
          v278 = a2 + 1;
        }
        else {
          v278 = *((unsigned __int8**)a2 + 2);
        }
        v279 = v277 + 5;
        if (v277 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_848;
        }
        if (v279 >= 0x17) {
          if ((v279 | 7) == 0x17) {
            v281 = 26;
          }
          else {
            v281 = (v279 | 7) + 1;
          }
          v282 = GameRoutine_651b90(GameData_2265ee0, v281, 16, 0);
          v283 = v281 | 1;
          v280 = (char*)v282;
          v260 = GameData_212c010[0];
          v430 = v277 + 5;
          v431 = (char*)v282;
          v429 = v283;
        }
        else {
          v430 = 0;
          v431 = nullptr;
          v429 = (unsigned __int8)(2 * v279);
          v280 = (char*)&v429 + 1;
          if (v277 == 0) {
            goto LABEL_582;
          }
        }
        GameRoutine_1a0b940(v280, v278, v277);
      LABEL_582:
        v285 = v445;
        v284 = v446;
        strcpy(&v280[v277], "_Bmap");
        if ((v444 & 1) != 0) {
          v286 = v284;
        }
        else {
          v286 = (char*)&v444 + 1;
        }
        if ((v444 & 1) != 0) {
          v287 = v285;
        }
        else {
          v287 = (unsigned __int64)(unsigned __int8)v444 >> 1;
        }
        v288 = (__int64*)GameRoutine_1a09ce0(&v429, v286, v287);
        v290 = v288[1];
        v289 = (char*)v288[2];
        v438 = *v288;
        v439 = v290;
        v440 = v289;
        v288[1] = 0;
        v288[2] = 0;
        *v288 = 0;
        if ((v438 & 1) != 0) {
          v291 = v440;
        }
        else {
          v291 = (char*)&v438 + 1;
        }
        if ((v438 & 1) != 0) {
          v292 = v439;
        }
        else {
          v292 = (unsigned __int64)(unsigned __int8)v438 >> 1;
        }
        result = GameRoutine_aa1b50(v291, v292);
        if ((result & 1) != 0) {
          LODWORD(v412) = 2;
          GameRoutine_aa1540((void*)&v417, *(_QWORD*)(*v260 + 13224), v274,
                             v272, v291, v292, &v412);
          result = GameRoutine_aa1690(v417, v291, v292);
          v293 = v418;
          if (v418 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v418 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v293 + 16LL))(v293);
            result = GameRoutine_1a09c50(v293);
          }
        }
        else {
          v417 = 0;
          v418 = 0;
        }
        if ((v438 & 1) != 0 && v440 != nullptr) {
          v294 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v294 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v294, v440);
        }
        if ((v429 & 1) != 0 && v431 != nullptr) {
          v295 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v295 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v295, v431);
        }
        if ((v441 & 1) != 0 && v443 != nullptr) {
          v296 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v296 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v296, v443);
        }
        goto LABEL_614;
      }
    }
    result = GameRoutine_1a0b940(v270, v268, v267);
    goto LABEL_561;
  }
LABEL_614:
  v297 = *(unsigned __int8*)(a1 + 88);
  v298 = (v297 & 1) == 0;
  v299 = v297 >> 1;
  if (v298) {
    v300 = v299;
  }
  else {
    v300 = *(_QWORD*)(a1 + 96);
  }
  if (v298) {
    v301 = a1 + 89;
  }
  else {
    v301 = *(_QWORD*)(a1 + 104);
  }
  v302 = v300 + 5;
  if (v300 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v302 >= 0x17) {
    if ((v302 | 7) == 0x17) {
      v304 = 26;
    }
    else {
      v304 = (v302 | 7) + 1;
    }
    v303 = (char*)GameRoutine_651b90(GameData_2265ee0, v304, 16, 0);
    v439 = v300 + 5;
    v440 = v303;
    v438 = v304 | 1;
    goto LABEL_628;
  }
  v439 = 0;
  v440 = nullptr;
  v438 = (unsigned __int8)(2 * v302);
  v303 = (char*)&v438 + 1;
  if (v300 != 0) {
  LABEL_628:
    GameRoutine_1a0b940(v303, v301, v300);
  }
  strcpy(&v303[v300], "_Bmap");
  result = GameRoutine_1a09ce0(&v438, "_Keyframe", 9);
  v306 = *(_QWORD*)(result + 8);
  v305 = *(char**)(result + 16);
  v441 = *(_QWORD*)result;
  v442 = v306;
  v443 = v305;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  if ((v441 & 1) != 0) {
    v307 = v442;
  }
  else {
    v307 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  v308 = *a2;
  if ((v441 & 1) != 0) {
    v309 = v443;
  }
  else {
    v309 = (char*)&v441 + 1;
  }
  v310 = (v308 & 1) == 0;
  v311 = v308 >> 1;
  if (v310) {
    v312 = v311;
  }
  else {
    v312 = *((_QWORD*)a2 + 1);
  }
  if (v310) {
    v313 = a2 + 1;
  }
  else {
    v313 = *((unsigned __int8**)a2 + 2);
  }
  v314 = v312 + 5;
  if (v312 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v314 >= 0x17) {
    if ((v314 | 7) == 0x17) {
      v316 = 26;
    }
    else {
      v316 = (v314 | 7) + 1;
    }
    v317 = GameRoutine_651b90(GameData_2265ee0, v316, 16, 0);
    v318 = v316 | 1;
    v315 = (char*)v317;
    v260 = GameData_212c010[0];
    v413 = v312 + 5;
    v414 = v317;
    v412 = v318;
    goto LABEL_649;
  }
  v413 = 0;
  v414 = 0;
  v412 = (unsigned __int8)(2 * v314);
  v315 = (char*)&v412 + 1;
  if (v312 != 0) {
  LABEL_649:
    GameRoutine_1a0b940(v315, v313, v312);
  }
  strcpy(&v315[v312], "_Bmap");
  v319 = (__int64*)GameRoutine_1a09ce0(&v412, "_Keyframe", 9);
  v321 = v319[1];
  v320 = (char*)v319[2];
  v429 = *v319;
  v430 = v321;
  v431 = v320;
  v319[1] = 0;
  v319[2] = 0;
  *v319 = 0;
  if ((v429 & 1) != 0) {
    v322 = v431;
  }
  else {
    v322 = (char*)&v429 + 1;
  }
  if ((v429 & 1) != 0) {
    v323 = v430;
  }
  else {
    v323 = (unsigned __int64)(unsigned __int8)v429 >> 1;
  }
  result = GameRoutine_aa1b50(v322, v323);
  if ((result & 1) != 0) {
    v451[0] = 2;
    GameRoutine_aa1a00((void*)&v415, *(_QWORD*)(*v260 + 13224), v309, v307,
                       v322, v323, v451);
    result = GameRoutine_aa1690(v415, v322, v323);
    v324 = v416;
    if (v416 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v416 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v324 + 16LL))(v324);
      result = GameRoutine_1a09c50(v324);
    }
  }
  else {
    v415 = 0;
    v416 = 0;
  }
  if ((v429 & 1) != 0 && v431 != nullptr) {
    v325 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v325 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v325, v431);
  }
  if ((v412 & 1) != 0 && v414 != 0) {
    v326 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v326 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v326, v414);
  }
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v327 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v327 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v327, v443);
  }
  if ((v438 & 1) != 0 && v440 != nullptr) {
    v328 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v328 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v328, v440);
  }
  if (v406 != 0) {
    v329 = *(unsigned __int8*)(a1 + 64);
    v330 = (v329 & 1) == 0;
    v331 = v329 >> 1;
    if (v330) {
      v332 = v331;
    }
    else {
      v332 = *(_QWORD*)(a1 + 72);
    }
    if (v330) {
      v333 = a1 + 65;
    }
    else {
      v333 = *(_QWORD*)(a1 + 80);
    }
    v334 = v332 + 7;
    if (v332 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_848;
    }
    if (v334 >= 0x17) {
      if ((v334 | 7) == 0x17) {
        v336 = 26;
      }
      else {
        v336 = (v334 | 7) + 1;
      }
      v335 = (char*)GameRoutine_651b90(GameData_2265ee0, v336, 16, 0);
      v442 = v332 + 7;
      v443 = v335;
      v441 = v336 | 1;
    }
    else {
      v442 = 0;
      v443 = nullptr;
      v441 = (unsigned __int8)(2 * v334);
      v335 = (char*)&v441 + 1;
      if (v332 == 0) {
      LABEL_697:
        strcpy(&v335[v332], "Ex_Bmap");
        if ((v441 & 1) != 0) {
          v337 = v442;
        }
        else {
          v337 = (unsigned __int64)(unsigned __int8)v441 >> 1;
        }
        v338 = a2[72];
        if ((v441 & 1) != 0) {
          v339 = v443;
        }
        else {
          v339 = (char*)&v441 + 1;
        }
        v340 = (v338 & 1) == 0;
        v341 = v338 >> 1;
        if (v340) {
          v342 = v341;
        }
        else {
          v342 = *((_QWORD*)a2 + 10);
        }
        if (v340) {
          v343 = a2 + 73;
        }
        else {
          v343 = *((unsigned __int8**)a2 + 11);
        }
        v344 = v342 + 5;
        if (v342 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_848;
        }
        if (v344 >= 0x17) {
          if ((v344 | 7) == 0x17) {
            v346 = 26;
          }
          else {
            v346 = (v344 | 7) + 1;
          }
          v345 = (char*)GameRoutine_651b90(GameData_2265ee0, v346, 16, 0);
          v439 = v342 + 5;
          v440 = v345;
          v438 = v346 | 1;
        }
        else {
          v439 = 0;
          v440 = nullptr;
          v438 = (unsigned __int8)(2 * v344);
          v345 = (char*)&v438 + 1;
          if (v342 == 0) {
          LABEL_718:
            LODWORD(v429) = 0;
            strcpy(&v345[v342], "_Bmap");
            if ((v438 & 1) != 0) {
              v347 = v440;
            }
            else {
              v347 = (char*)&v438 + 1;
            }
            if ((v438 & 1) != 0) {
              v348 = v439;
            }
            else {
              v348 = (unsigned __int64)(unsigned __int8)v438 >> 1;
            }
            v260 = GameData_212c010[0];
            GameRoutine_aa1540((void*)&v410,
                               *(_QWORD*)(*GameData_212c010[0] + 13224), v339,
                               v337, v347, v348, &v429);
            result = GameRoutine_aa1690(v410, v347, v348);
            v349 = v411;
            if (v411 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v411 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v349 + 16LL))(v349);
              result = GameRoutine_1a09c50(v349);
              if ((v438 & 1) == 0) {
                goto LABEL_732;
              }
            }
            else if ((v438 & 1) == 0) {
              goto LABEL_732;
            }
            if (v440 != nullptr) {
              v350 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v350 = 56;
              }
              result =
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v350, v440);
            }
          LABEL_732:
            if ((v441 & 1) != 0 && v443 != nullptr) {
              v351 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v351 = 56;
              }
              result =
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v351, v443);
            }
            v352 = *(unsigned __int8*)(a1 + 64);
            v353 = (v352 & 1) == 0;
            v354 = v352 >> 1;
            if (v353) {
              v355 = v354;
            }
            else {
              v355 = *(_QWORD*)(a1 + 72);
            }
            if (v353) {
              v356 = a1 + 65;
            }
            else {
              v356 = *(_QWORD*)(a1 + 80);
            }
            v357 = v355 + 7;
            if (v355 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_848;
            }
            if (v357 >= 0x17) {
              v359 = v357 | 7;
              if (v359 == 23) {
                v360 = 26;
              }
              else {
                v360 = v359 + 1;
              }
              v358 = (char*)GameRoutine_651b90(GameData_2265ee0, v360, 16, 0);
              v443 = v358;
              v441 = v360 | 1;
            }
            else {
              v442 = 0;
              v443 = nullptr;
              v441 = (unsigned __int8)(2 * v357);
              v358 = (char*)&v441 + 1;
              if (v355 == 0) {
                goto LABEL_752;
              }
            }
            result = GameRoutine_1a0b940(v358, v356, v355);
          LABEL_752:
            strcpy(&v358[v355], "Ex_Bmap");
            if ((v441 & 1) != 0 && v443 != nullptr) {
              v361 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v361 = 56;
              }
              result =
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v361, v443);
            }
            goto LABEL_757;
          }
        }
        GameRoutine_1a0b940(v345, v343, v342);
        goto LABEL_718;
      }
    }
    result = GameRoutine_1a0b940(v335, v333, v332);
    goto LABEL_697;
  }
LABEL_757:
  if (v405 == 0) {
    goto LABEL_831;
  }
  v362 = *(unsigned __int8*)(a1 + 88);
  v363 = (v362 & 1) == 0;
  v364 = v362 >> 1;
  if (v363) {
    v365 = v364;
  }
  else {
    v365 = *(_QWORD*)(a1 + 96);
  }
  if (v363) {
    v366 = a1 + 89;
  }
  else {
    v366 = *(_QWORD*)(a1 + 104);
  }
  v367 = v365 + 7;
  if (v365 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_848:
    GameRoutine_60a1d0(result);
  }
  if (v367 >= 0x17) {
    if ((v367 | 7) == 0x17) {
      v369 = 26;
    }
    else {
      v369 = (v367 | 7) + 1;
    }
    v368 = (char*)GameRoutine_651b90(GameData_2265ee0, v369, 16, 0);
    v442 = v365 + 7;
    v443 = v368;
    v441 = v369 | 1;
    goto LABEL_772;
  }
  v442 = 0;
  v443 = nullptr;
  v441 = (unsigned __int8)(2 * v367);
  v368 = (char*)&v441 + 1;
  if (v365 != 0) {
  LABEL_772:
    result = GameRoutine_1a0b940(v368, v366, v365);
  }
  strcpy(&v368[v365], "Ex_Bmap");
  if ((v441 & 1) != 0) {
    v370 = v442;
  }
  else {
    v370 = (unsigned __int64)(unsigned __int8)v441 >> 1;
  }
  v371 = *a2;
  if ((v441 & 1) != 0) {
    v372 = v443;
  }
  else {
    v372 = (char*)&v441 + 1;
  }
  v373 = (v371 & 1) == 0;
  v374 = v371 >> 1;
  if (v373) {
    v375 = v374;
  }
  else {
    v375 = *((_QWORD*)a2 + 1);
  }
  if (v373) {
    v376 = a2 + 1;
  }
  else {
    v376 = *((unsigned __int8**)a2 + 2);
  }
  v377 = v375 + 1;
  if (v375 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v377 >= 0x17) {
    if ((v377 | 7) == 0x17) {
      v379 = 26;
    }
    else {
      v379 = (v377 | 7) + 1;
    }
    v380 = GameRoutine_651b90(GameData_2265ee0, v379, 16, 0);
    v381 = v379 | 1;
    v378 = (char*)v380;
    v260 = GameData_212c010[0];
    v413 = v375 + 1;
    v414 = v380;
    v412 = v381;
  }
  else {
    v413 = 0;
    v414 = 0;
    v412 = (unsigned __int8)(2 * v377);
    v378 = (char*)&v412 + 1;
    if (v375 == 0) {
      goto LABEL_794;
    }
  }
  GameRoutine_1a0b940(v378, v376, v375);
LABEL_794:
  *(_WORD*)&v378[v375] = 95;
  v382 = a2[96];
  v383 = (v382 & 1) == 0;
  v384 = v382 >> 1;
  if (v383) {
    v385 = a2 + 97;
  }
  else {
    v385 = *((unsigned __int8**)a2 + 14);
  }
  if (v383) {
    v386 = v384;
  }
  else {
    v386 = *((_QWORD*)a2 + 13);
  }
  v387 = (__int64*)GameRoutine_1a09ce0(&v412, v385, v386);
  v389 = v387[1];
  v388 = (char*)v387[2];
  v429 = *v387;
  v430 = v389;
  v431 = v388;
  v387[1] = 0;
  v387[2] = 0;
  *v387 = 0;
  v390 = (__int64*)GameRoutine_1a09ce0(&v429, "_Bmap", 5);
  v392 = v390[1];
  v391 = (char*)v390[2];
  v438 = *v390;
  v439 = v392;
  v440 = v391;
  v390[1] = 0;
  v390[2] = 0;
  *v390 = 0;
  if ((v438 & 1) != 0) {
    v393 = v440;
  }
  else {
    v393 = (char*)&v438 + 1;
  }
  if ((v438 & 1) != 0) {
    v394 = v439;
  }
  else {
    v394 = (unsigned __int64)(unsigned __int8)v438 >> 1;
  }
  result = GameRoutine_aa1b50(v393, v394);
  if ((result & 1) != 0) {
    v451[0] = 1;
    GameRoutine_aa1540((void*)&v408, *(_QWORD*)(*v260 + 13224), v372, v370,
                       v393, v394, v451);
    result = GameRoutine_aa1690(v408, v393, v394);
    v395 = v409;
    if (v409 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v409 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v395 + 16LL))(v395);
      result = GameRoutine_1a09c50(v395);
    }
  }
  else {
    v408 = 0;
    v409 = 0;
  }
  if ((v438 & 1) != 0 && v440 != nullptr) {
    v396 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v396 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v396, v440);
  }
  if ((v429 & 1) != 0 && v431 != nullptr) {
    v397 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v397 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v397, v431);
  }
  if ((v412 & 1) != 0 && v414 != 0) {
    v398 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v398 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v398, v414);
  }
  if ((v441 & 1) != 0 && v443 != nullptr) {
    v399 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v399 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v399, v443);
  }
LABEL_831:
  if (*((int*)a2 + 54) >= 1) {
    v400 = (unsigned __int64*)(a2 + 128);
    v401 = 0;
    do {
      v402 = *((unsigned __int8*)v400 - 8);
      if ((v402 & 1) != 0) {
        v403 = *v400;
      }
      else {
        v403 = v402 >> 1;
      }
      if (v403 != 0) {
        result = GameRoutine_c6c4f0(a1, a2, (unsigned int)v401);
        if ((*(_DWORD*)(a1 + 512) & 0x80000000) != 0) {
          *(_DWORD*)(a1 + 512) = v401;
          *(_DWORD*)(a1 + 516) = -1;
          *(_QWORD*)(a1 + 520) = 0;
          *(_DWORD*)(a1 + 528) = 0;
        }
      }
      v400 += 3;
      ++v401;
    } while (v401 < *((int*)a2 + 54));
  }
  if ((a2[224] & 1) != 0) {
    result = GameRoutine_c6dc40(a1, a2);
  }
  if ((v444 & 1) != 0 && v446 != nullptr) {
    v404 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v404 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v404, v446);
  }
  return result;
}

__int64 GameHr_c6a500(__int64 a1, __int64 a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 add;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64* v13;
  int v14;
  __int64 v15;
  _QWORD* v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64* v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  char* v42;
  unsigned __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  unsigned __int64 v50;
  __int64* v51;
  __int64 v52;
  unsigned __int64 v53;
  bool v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  unsigned __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  char* v65;
  unsigned __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  bool v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  char* v78;
  unsigned __int64 v79;
  char v80;
  __int64 v81;
  unsigned int v82;
  __int64 v83;
  char* v84;
  char* v85;
  char* v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  bool v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  char* v95;
  unsigned __int64 v96;
  char v97;
  __int64 v98;
  __int64 v99;
  char* v100;
  char* v101;
  unsigned __int64 v102;
  char* v103;
  unsigned __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  bool v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  char* v114;
  unsigned __int64 v115;
  char v116;
  __int64 v117;
  __int64 v118;
  char* v119;
  char* v120;
  char* v121;
  unsigned __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  bool v125;
  unsigned __int64 v126;
  unsigned __int64 v127;
  __int64 v128;
  unsigned __int64 v129;
  char* v130;
  unsigned __int64 v131;
  char v132;
  __int64 v133;
  __int64 v134;
  char* v135;
  char* v136;
  __int64* v137;
  char* v138;
  unsigned __int64 v139;
  unsigned __int64 v140;
  char* v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  unsigned __int64 v147;
  bool v148;
  unsigned __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  char* v153;
  unsigned __int64 v154;
  char v155;
  __int64 v156;
  __int64 v157;
  char* v158;
  char* v159;
  __int64* v160;
  char* v161;
  unsigned __int64 v162;
  char* v163;
  unsigned __int64 v164;
  __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  bool v168;
  unsigned __int64 v169;
  unsigned __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  char* v173;
  __int64 v174;
  char* v175;
  unsigned __int64 v176;
  __int64* v177;
  char* v178;
  unsigned __int64 v179;
  char* v180;
  unsigned __int64 v181;
  __int64 v182;
  __int64 v183;
  char* v184;
  unsigned __int64 v185;
  bool v186;
  unsigned __int64 v187;
  unsigned __int64 v188;
  char* v189;
  unsigned __int64 v190;
  char* v191;
  __int64 v192;
  char* v193;
  unsigned __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  bool v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  char* v202;
  __int64 v203;
  char* v204;
  unsigned __int64 v205;
  __int64* v206;
  char* v207;
  unsigned __int64 v208;
  unsigned __int64 v209;
  char* v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  unsigned __int64 v216;
  bool v217;
  unsigned __int64 v218;
  unsigned __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  char* v222;
  int v223;
  __int64 v224;
  char* v225;
  unsigned __int64 v226;
  __int64* v227;
  char* v228;
  unsigned __int64 v229;
  char* v230;
  unsigned __int64 v231;
  __int64 v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 i;
  _DWORD* v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  int v244;
  unsigned __int64 v245;
  __int64 v246;
  unsigned __int64 v247;
  bool v248;
  int v249;
  unsigned __int64 v250;
  unsigned __int64 v251;
  __int64 v252;
  unsigned __int64 v253;
  char* v254;
  __int64 v255;
  __int64* v256;
  char* v257;
  unsigned __int64 v258;
  char* v259;
  unsigned __int64 v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 result;
  __int64 j;
  _DWORD* v270;
  __int64 v271;
  __int64 v272;
  __int64 v273;
  __int64 v274;
  __int64 v275;
  __int64 v276;
  int v277;
  int v278;
  int v279;
  unsigned __int64 v280;
  _DWORD v282[2];
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64 v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  __int64 v290;
  __int64 v291;
  int v292;
  int v293;
  __int64 v294;
  int v295;
  _QWORD v296[2];
  __int64 v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  int v306;
  _QWORD v307[2];
  __int64 v308;
  __int64 v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  int v317;
  __int64 v318;
  __int64 v319;
  __int64 v320;
  __int64 v321;
  __int64 v322;
  __int64 v323;
  __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  int v328;
  __int64 v329;
  __int64 v330;
  __int64 v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  int v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  int v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  __int64 v355;
  __int64 v356;
  __int64 v357;
  __int64 v358;
  __int64 v359;
  __int64 v360;
  int v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  __int64 v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64 v371;
  int v372;
  __int64 v373;
  __int64 v374;
  __int64 v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  int v383;
  __int64 v384;
  __int64 v385;
  __int64 v386;
  __int64 v387;
  __int64 v388;
  __int64 v389;
  __int64 v390;
  __int64 v391;
  __int64 v392;
  __int64 v393;
  int v394;
  __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  __int64 v403;
  __int64 v404;
  int v405;
  __int64 v406;
  __int64 v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  __int64 v412;
  __int64 v413;
  __int64 v414;
  __int64 v415;
  int v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  int v427;
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
  int v438;
  __int64 v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  __int64 v446;
  __int64 v447;
  __int64 v448;
  int v449;
  __int64 v450;
  __int64 v451;
  __int64 v452;
  __int64 v453;
  __int64 v454;
  __int64 v455;
  __int64 v456;
  __int64 v457;
  __int64 v458;
  __int64 v459;
  __int64 v460;
  unsigned __int64 v461;
  char* v462;
  __int64 v463;
  unsigned __int64 v464;
  char* v465;
  __int64 v466;
  unsigned __int64 v467;
  char* v468;
  __int64 v469;
  __int64 v470;

  v3 = *(_DWORD*)(a2 + 216);
  v4 = *(_QWORD*)(a1 + 544);
  if (v4 != 0 && (v5 = GameRoutine_1a0a0c0(v4)) != 0) {
    v37 = *(_QWORD*)(a1 + 536) == 0;
    add = atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL);
    v7 = !v37;
    if (add == 0) {
      v8 = v5;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      GameRoutine_1a09c50(v8);
    }
  }
  else {
    v7 = 0;
  }
  v9 = *(_DWORD*)(a1 + 560);
  v10 = *(_DWORD*)(a1 + 556);
  v11 = 1;
  v295 = 0;
  v296[0] = 0;
  v296[1] = 0;
  if (v3 <= 0) {
    v12 = 4;
  }
  else {
    v12 = 5;
  }
  v297 = 0;
  v298 = 0;
  v299 = 0;
  v300 = 0;
  if (v3 <= 0) {
    v9 = -1;
  }
  v301 = 0;
  v302 = 0;
  v303 = 0;
  v304 = -1;
  v306 = 0;
  v307[0] = 0;
  v307[1] = 0;
  v308 = 0;
  v309 = 0;
  v310 = 0;
  v311 = 0;
  v312 = 0;
  v313 = 0;
  v314 = 0;
  v315 = -1;
  v317 = 0;
  v318 = 0;
  v319 = 0;
  v320 = 0;
  v321 = 0;
  v322 = 0;
  v323 = 0;
  v324 = 0;
  v325 = 0;
  v326 = 0;
  v327 = -1;
  v328 = 0;
  v329 = 0;
  v330 = 0;
  v331 = 0;
  v332 = 0;
  v333 = 0;
  v334 = 0;
  v335 = 0;
  v336 = 0;
  v337 = 0;
  v338 = -1;
  v339 = 0;
  v348 = 0;
  v347 = 0;
  v346 = 0;
  v345 = 0;
  v344 = 0;
  v343 = 0;
  v342 = 0;
  v341 = 0;
  v340 = 0;
  v349 = -1;
  v350 = 0;
  v359 = 0;
  v358 = 0;
  v357 = 0;
  v356 = 0;
  v355 = 0;
  v354 = 0;
  v353 = 0;
  v352 = 0;
  v351 = 0;
  v360 = -1;
  v361 = 0;
  v370 = 0;
  v369 = 0;
  v368 = 0;
  v367 = 0;
  v292 = v10;
  v293 = v9;
  v366 = 0;
  v365 = 0;
  v364 = 0;
  v363 = 0;
  v362 = 0;
  v371 = -1;
  v372 = 0;
  v381 = 0;
  v380 = 0;
  v379 = 0;
  v378 = 0;
  v377 = 0;
  v376 = 0;
  v375 = 0;
  v374 = 0;
  v373 = 0;
  v382 = -1;
  v383 = 0;
  v392 = 0;
  v391 = 0;
  v390 = 0;
  v389 = 0;
  v388 = 0;
  v387 = 0;
  v386 = 0;
  v385 = 0;
  v384 = 0;
  v393 = -1;
  v394 = 0;
  v403 = 0;
  v402 = 0;
  v401 = 0;
  v400 = 0;
  v399 = 0;
  v398 = 0;
  v397 = 0;
  v396 = 0;
  v395 = 0;
  v404 = -1;
  v405 = 0;
  v414 = 0;
  v413 = 0;
  v412 = 0;
  v411 = 0;
  v410 = 0;
  v409 = 0;
  v408 = 0;
  v407 = 0;
  v406 = 0;
  v415 = -1;
  v416 = 0;
  v425 = 0;
  v424 = 0;
  v423 = 0;
  v422 = 0;
  v421 = 0;
  v420 = 0;
  v419 = 0;
  v418 = 0;
  v417 = 0;
  v426 = -1;
  v427 = 0;
  v436 = 0;
  v435 = 0;
  v434 = 0;
  v433 = 0;
  v432 = 0;
  v431 = 0;
  v430 = 0;
  v429 = 0;
  v428 = 0;
  v437 = -1;
  v438 = 0;
  v447 = 0;
  v446 = 0;
  v445 = 0;
  v444 = 0;
  v443 = 0;
  v442 = 0;
  v441 = 0;
  v440 = 0;
  v439 = 0;
  v448 = -1;
  v449 = 0;
  v458 = 0;
  v457 = 0;
  v456 = 0;
  v455 = 0;
  v454 = 0;
  v453 = 0;
  v452 = 0;
  v451 = 0;
  v450 = 0;
  v459 = -1;
  v282[0] = v12;
  v290 = 0;
  v291 = 0;
  v288 = 0;
  v289 = 0;
  v286 = 0;
  v287 = 0;
  v284 = 0;
  v285 = 0;
  v283 = 0;
  v294 = 1065353216;
  if (v7 != 0) {
    v295 = 1;
    v11 = 2;
    v298 = 0;
    v299 = 0;
    v300 = 0;
    v301 = 0;
    v302 = 0;
    v303 = 0;
    LOBYTE(v296[0]) = 22;
    strcpy((char*)v296 + 1, "SubOverride");
    v304 = -1;
    v305 = 1065353216;
  }
  GameRoutine_c702b0(v282, v11, "Override", 8);
  v13 = GameData_212c010[0];
  LODWORD(v466) = 0;
  v14 =
      GameRoutine_aa1dd0(*(_QWORD*)(*GameData_212c010[0] + 13224), v282, &v466);
  *(_DWORD*)(a1 + 564) = v14;
  if (v14 != -1) {
    *(_BYTE*)(*(_QWORD*)(*v13 + 13224) + 1560LL * v14 + 1744) = 0;
  }
  v15 = 384;
  v16 = (_QWORD*)GameData_212bf68;
  do {
    v17 = &v282[v15];
    if ((v282[v15 - 10] & 1) != 0) {
      v18 = *((_QWORD*)v17 - 3);
      if (v18 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v19 = 128;
        }
        else {
          v19 = 56;
        }
        GameRoutine_1a0a4e0(*v16 + v19, v18);
      }
    }
    if ((*(_BYTE*)(v17 - 16) & 1) != 0) {
      v20 = *(_QWORD*)&v282[v15 - 12];
      if (v20 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v21 = 128;
        }
        else {
          v21 = 56;
        }
        GameRoutine_1a0a4e0(*v16 + v21, v20);
      }
    }
    if ((v282[v15 - 22] & 1) != 0) {
      v22 = *(_QWORD*)&v282[v15 - 18];
      if (v22 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        GameRoutine_1a0a4e0(*v16 + v23, v22);
      }
    }
    v15 -= 24;
  } while (v15 != 0);
  v24 = *(_DWORD*)(a1 + 560);
  v278 = v12;
  v279 = v3;
  v295 = 0;
  v296[0] = 0;
  v296[1] = 0;
  if (v3 <= 0) {
    v24 = -1;
  }
  v303 = 0;
  v304 = -1;
  v314 = 0;
  v315 = -1;
  v326 = 0;
  v327 = -1;
  v338 = -1;
  v349 = -1;
  v360 = -1;
  v371 = -1;
  v25 = *(unsigned __int8*)(a2 + 24);
  v26 = *(_QWORD*)(a2 + 32);
  v37 = (v25 & 1) == 0;
  v382 = -1;
  v393 = -1;
  v404 = -1;
  v415 = -1;
  v426 = -1;
  v437 = -1;
  v448 = -1;
  v459 = -1;
  v27 = v25 >> 1;
  if (v37) {
    v28 = v27;
  }
  else {
    v28 = v26;
  }
  v292 = *(_DWORD*)(a1 + 556);
  v293 = v24;
  v29 = *(unsigned __int8*)(a2 + 72);
  v30 = *(_QWORD*)(a2 + 80);
  v297 = 0;
  v298 = 0;
  v299 = 0;
  v300 = 0;
  v301 = 0;
  v302 = 0;
  v306 = 0;
  v307[0] = 0;
  v307[1] = 0;
  v308 = 0;
  v309 = 0;
  v310 = 0;
  v311 = 0;
  v312 = 0;
  v313 = 0;
  v317 = 0;
  v318 = 0;
  v319 = 0;
  v320 = 0;
  v321 = 0;
  v322 = 0;
  v323 = 0;
  v324 = 0;
  v325 = 0;
  v328 = 0;
  v329 = 0;
  v330 = 0;
  v331 = 0;
  v332 = 0;
  v333 = 0;
  v334 = 0;
  v335 = 0;
  v336 = 0;
  v337 = 0;
  v339 = 0;
  v340 = 0;
  v341 = 0;
  v342 = 0;
  v343 = 0;
  v344 = 0;
  v345 = 0;
  v346 = 0;
  v347 = 0;
  v348 = 0;
  v350 = 0;
  v351 = 0;
  v352 = 0;
  v353 = 0;
  v354 = 0;
  v355 = 0;
  v356 = 0;
  v357 = 0;
  v358 = 0;
  v359 = 0;
  v361 = 0;
  v370 = 0;
  v369 = 0;
  v368 = 0;
  v367 = 0;
  v366 = 0;
  v365 = 0;
  v364 = 0;
  v363 = 0;
  v362 = 0;
  v372 = 0;
  v381 = 0;
  v380 = 0;
  v379 = 0;
  v378 = 0;
  v377 = 0;
  v376 = 0;
  v375 = 0;
  v374 = 0;
  v373 = 0;
  v383 = 0;
  v392 = 0;
  v391 = 0;
  v390 = 0;
  v389 = 0;
  v388 = 0;
  v387 = 0;
  v386 = 0;
  v385 = 0;
  v384 = 0;
  v394 = 0;
  v403 = 0;
  v402 = 0;
  v401 = 0;
  v400 = 0;
  v399 = 0;
  v398 = 0;
  v397 = 0;
  v396 = 0;
  v395 = 0;
  v405 = 0;
  v414 = 0;
  v413 = 0;
  v294 = 1065353216;
  if ((v29 & 1) != 0) {
    v31 = v30;
  }
  else {
    v31 = v29 >> 1;
  }
  v412 = 0;
  v411 = 0;
  v410 = 0;
  v409 = 0;
  v408 = 0;
  v407 = 0;
  v406 = 0;
  v416 = 0;
  v425 = 0;
  v424 = 0;
  v423 = 0;
  v422 = 0;
  v421 = 0;
  v420 = 0;
  v419 = 0;
  v418 = 0;
  v417 = 0;
  v427 = 0;
  v436 = 0;
  v435 = 0;
  v434 = 0;
  v280 = v31;
  v433 = 0;
  v432 = 0;
  v431 = 0;
  v430 = 0;
  v429 = 0;
  v428 = 0;
  v438 = 0;
  v447 = 0;
  v446 = 0;
  v445 = 0;
  v444 = 0;
  v443 = 0;
  v442 = 0;
  v441 = 0;
  v440 = 0;
  v439 = 0;
  v449 = 0;
  v458 = 0;
  v457 = 0;
  v456 = 0;
  v455 = 0;
  v454 = 0;
  v453 = 0;
  v452 = 0;
  v451 = 0;
  v450 = 0;
  v282[0] = v12;
  v290 = 0;
  v291 = 0;
  v288 = 0;
  v289 = 0;
  v286 = 0;
  v287 = 0;
  v284 = 0;
  v285 = 0;
  v283 = 0;
  LOWORD(v463) = 24322;
  BYTE2(v463) = 0;
  v32 = (__int64*)GameRoutine_1a09ce0(&v463, "Bmap", 4);
  v34 = v32[1];
  v33 = (char*)v32[2];
  v466 = *v32;
  v467 = v34;
  v468 = v33;
  v32[1] = 0;
  v32[2] = 0;
  *v32 = 0;
  if ((v463 & 1) != 0 && v465 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v35 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v35, v465);
  }
  v36 = *(unsigned __int8*)(a1 + 64);
  v37 = (v36 & 1) == 0;
  v38 = v36 >> 1;
  if (v37) {
    v39 = v38;
  }
  else {
    v39 = *(_QWORD*)(a1 + 72);
  }
  if (v37) {
    v40 = a1 + 65;
  }
  else {
    v40 = *(_QWORD*)(a1 + 80);
  }
  if ((v466 & 1) != 0) {
    v41 = v467;
  }
  else {
    v41 = (unsigned __int64)(unsigned __int8)v466 >> 1;
  }
  if ((v466 & 1) != 0) {
    v42 = v468;
  }
  else {
    v42 = (char*)&v466 + 1;
  }
  v43 = v41 + v39;
  if (v41 + v39 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_597;
  }
  v277 = v7;
  if (v43 > 0x16) {
    if ((v43 | 7) == 0x17) {
      v46 = 26;
    }
    else {
      v46 = (v43 | 7) + 1;
    }
    v45 = GameRoutine_651b90(*v16, v46, 16, 0);
    v464 = v41 + v39;
    v465 = (char*)v45;
    v463 = v46 | 1;
    v44 = v46 | 1;
  }
  else {
    v44 = 2 * v43;
    v45 = 0;
    v464 = 0;
    v465 = nullptr;
    v463 = (unsigned __int8)(2 * v43);
  }
  if ((v44 & 1) != 0) {
    v47 = (char*)v45;
  }
  else {
    v47 = (char*)&v463 + 1;
  }
  if (v39 != 0) {
    GameRoutine_1a0b940(v47, v40, v39);
  }
  v48 = &v47[v39];
  if (v41 != 0) {
    GameRoutine_1a0b940(v48, v42, v41);
  }
  v48[v41] = 0;
  if ((v463 & 1) != 0) {
    v49 = v465;
  }
  else {
    v49 = (char*)&v463 + 1;
  }
  if ((v463 & 1) != 0) {
    v50 = v464;
  }
  else {
    v50 = (unsigned __int64)(unsigned __int8)v463 >> 1;
  }
  v32 = (__int64*)GameRoutine_c702b0(v282, 1, v49, v50);
  v51 = GameData_212c010[0];
  if ((v463 & 1) != 0 && v465 != nullptr) {
    v52 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v52 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v52, v465);
  }
  v53 = *(unsigned __int8*)(a1 + 88);
  v54 = (v53 & 1) == 0;
  v55 = v53 >> 1;
  v56 = v54 ? v55 : *(_QWORD*)(a1 + 96);
  v57 = v54 ? a1 + 89 : *(_QWORD*)(a1 + 104);
  v58 = (v466 & 1) != 0 ? v467 : (unsigned __int64)(unsigned __int8)v466 >> 1;
  v59 = (v466 & 1) != 0 ? v468 : (char*)&v466 + 1;
  v60 = v58 + v56;
  if (v58 + v56 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_597:
    GameRoutine_60a1d0(v32);
  }
  if (v60 > 0x16) {
    if ((v60 | 7) == 0x17) {
      v63 = 26;
    }
    else {
      v63 = (v60 | 7) + 1;
    }
    v62 = GameRoutine_651b90(*v16, v63, 16, 0);
    v464 = v58 + v56;
    v465 = (char*)v62;
    v463 = v63 | 1;
    v61 = v63 | 1;
  }
  else {
    v61 = 2 * v60;
    v62 = 0;
    v464 = 0;
    v465 = nullptr;
    v463 = (unsigned __int8)(2 * v60);
  }
  if ((v61 & 1) != 0) {
    v64 = (char*)v62;
  }
  else {
    v64 = (char*)&v463 + 1;
  }
  if (v56 != 0) {
    GameRoutine_1a0b940(v64, v57, v56);
  }
  v65 = &v64[v56];
  if (v58 != 0) {
    GameRoutine_1a0b940(v65, v59, v58);
  }
  v65[v58] = 0;
  if ((v463 & 1) != 0) {
    v66 = v464;
  }
  else {
    v66 = (unsigned __int64)(unsigned __int8)v463 >> 1;
  }
  if ((v463 & 1) != 0) {
    v67 = v465;
  }
  else {
    v67 = (char*)&v463 + 1;
  }
  v32 = X8CALL_X0(
      _QWORD*,
      GameRoutine_a8ed00((void*)&v460, *(_QWORD*)(*v51 + 13224), v67, v66));
  v68 = v460;
  v69 = v461;
  if (v461 == 0) {
    goto LABEL_125;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v461 + 8), 1u,
                            memory_order_relaxed);
  v70 = v461;
  if (v461 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v461 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v70 + 16LL))(v70);
    v32 = (__int64*)GameRoutine_1a09c50(v70);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v69 + 16LL))(v69);
    v32 = (__int64*)GameRoutine_1a09c50(v69);
    if ((v463 & 1) == 0) {
      goto LABEL_131;
    }
  }
  else {
  LABEL_125:
    if ((v463 & 1) == 0) {
      goto LABEL_131;
    }
  }
  if (v465 != nullptr) {
    v71 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v71 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v71, v465);
  }
LABEL_131:
  if (v68 == 0) {
    v82 = 2;
    if (v28 == 0) {
      goto LABEL_254;
    }
  LABEL_172:
    v89 = *(unsigned __int8*)(a1 + 112);
    v90 = (v89 & 1) == 0;
    v91 = v89 >> 1;
    if (v90) {
      v92 = v91;
    }
    else {
      v92 = *(_QWORD*)(a1 + 120);
    }
    if (v90) {
      v93 = a1 + 113;
    }
    else {
      v93 = *(_QWORD*)(a1 + 128);
    }
    if ((v466 & 1) != 0) {
      v94 = v467;
    }
    else {
      v94 = (unsigned __int64)(unsigned __int8)v466 >> 1;
    }
    if ((v466 & 1) != 0) {
      v95 = v468;
    }
    else {
      v95 = (char*)&v466 + 1;
    }
    v96 = v94 + v92;
    if (v94 + v92 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_597;
    }
    if (v96 > 0x16) {
      if ((v96 | 7) == 0x17) {
        v99 = 26;
      }
      else {
        v99 = (v96 | 7) + 1;
      }
      v98 = GameRoutine_651b90(*v16, v99, 16, 0);
      v464 = v94 + v92;
      v465 = (char*)v98;
      v463 = v99 | 1;
      v97 = v99 | 1;
    }
    else {
      v97 = 2 * v96;
      v98 = 0;
      v464 = 0;
      v465 = nullptr;
      v463 = (unsigned __int8)(2 * v96);
    }
    if ((v97 & 1) != 0) {
      v100 = (char*)v98;
    }
    else {
      v100 = (char*)&v463 + 1;
    }
    if (v92 != 0) {
      GameRoutine_1a0b940(v100, v93, v92);
    }
    v101 = &v100[v92];
    if (v94 != 0) {
      GameRoutine_1a0b940(v101, v95, v94);
    }
    v101[v94] = 0;
    v51 = GameData_212c010[0];
    if ((v463 & 1) != 0) {
      v102 = v464;
    }
    else {
      v102 = (unsigned __int64)(unsigned __int8)v463 >> 1;
    }
    if ((v463 & 1) != 0) {
      v103 = v465;
    }
    else {
      v103 = (char*)&v463 + 1;
    }
    v32 = X8CALL_X0(_QWORD*,
                    GameRoutine_a8ed00((void*)&v460,
                                       *(_QWORD*)(*GameData_212c010[0] + 13224),
                                       v103, v102));
    v105 = v460;
    v104 = v461;
    if (v461 == 0) {
      goto LABEL_209;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v461 + 8), 1u,
                              memory_order_relaxed);
    v106 = v461;
    if (v461 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v461 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v106 + 16LL))(v106);
      v32 = (__int64*)GameRoutine_1a09c50(v106);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v104 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v104 + 16LL))(v104);
      v32 = (__int64*)GameRoutine_1a09c50(v104);
      if ((v463 & 1) == 0) {
        goto LABEL_215;
      }
    }
    else {
    LABEL_209:
      if ((v463 & 1) == 0) {
        goto LABEL_215;
      }
    }
    if (v465 != nullptr) {
      v107 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v107 = 56;
      }
      v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v107, v465);
    }
  LABEL_215:
    if (v105 != 0) {
      v108 = *(unsigned __int8*)(a1 + 112);
      v109 = (v108 & 1) == 0;
      v110 = v108 >> 1;
      if (v109) {
        v111 = v110;
      }
      else {
        v111 = *(_QWORD*)(a1 + 120);
      }
      if (v109) {
        v112 = a1 + 113;
      }
      else {
        v112 = *(_QWORD*)(a1 + 128);
      }
      if ((v466 & 1) != 0) {
        v113 = v467;
      }
      else {
        v113 = (unsigned __int64)(unsigned __int8)v466 >> 1;
      }
      if ((v466 & 1) != 0) {
        v114 = v468;
      }
      else {
        v114 = (char*)&v466 + 1;
      }
      v115 = v113 + v111;
      if (v113 + v111 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_597;
      }
      if (v115 > 0x16) {
        if ((v115 | 7) == 0x17) {
          v118 = 26;
        }
        else {
          v118 = (v115 | 7) + 1;
        }
        v117 = GameRoutine_651b90(*v16, v118, 16, 0);
        v464 = v113 + v111;
        v465 = (char*)v117;
        v463 = v118 | 1;
        v116 = v118 | 1;
      }
      else {
        v116 = 2 * v115;
        v117 = 0;
        v464 = 0;
        v465 = nullptr;
        v463 = (unsigned __int8)(2 * v115);
      }
      if ((v116 & 1) != 0) {
        v119 = (char*)v117;
      }
      else {
        v119 = (char*)&v463 + 1;
      }
      if (v111 != 0) {
        GameRoutine_1a0b940(v119, v112, v111);
      }
      v120 = &v119[v111];
      if (v113 != 0) {
        GameRoutine_1a0b940(v120, v114, v113);
      }
      v120[v113] = 0;
      if ((v463 & 1) != 0) {
        v121 = v465;
      }
      else {
        v121 = (char*)&v463 + 1;
      }
      if ((v463 & 1) != 0) {
        v122 = v464;
      }
      else {
        v122 = (unsigned __int64)(unsigned __int8)v463 >> 1;
      }
      v32 = (__int64*)GameRoutine_c702b0(v282, v82, v121, v122);
      if ((v463 & 1) != 0 && v465 != nullptr) {
        v123 = 128;
        if (*(_QWORD*)(*v16 + 200LL) == 0) {
          v123 = 56;
        }
        v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v123, v465);
      }
      ++v82;
    }
    goto LABEL_254;
  }
  v72 = *(unsigned __int8*)(a1 + 88);
  v73 = (v72 & 1) == 0;
  v74 = v72 >> 1;
  if (v73) {
    v75 = v74;
  }
  else {
    v75 = *(_QWORD*)(a1 + 96);
  }
  if (v73) {
    v76 = a1 + 89;
  }
  else {
    v76 = *(_QWORD*)(a1 + 104);
  }
  if ((v466 & 1) != 0) {
    v77 = v467;
  }
  else {
    v77 = (unsigned __int64)(unsigned __int8)v466 >> 1;
  }
  if ((v466 & 1) != 0) {
    v78 = v468;
  }
  else {
    v78 = (char*)&v466 + 1;
  }
  v79 = v77 + v75;
  if (v77 + v75 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_597;
  }
  if (v79 > 0x16) {
    if ((v79 | 7) == 0x17) {
      v83 = 26;
    }
    else {
      v83 = (v79 | 7) + 1;
    }
    v81 = GameRoutine_651b90(*v16, v83, 16, 0);
    v464 = v77 + v75;
    v465 = (char*)v81;
    v463 = v83 | 1;
    v80 = v83 | 1;
  }
  else {
    v80 = 2 * v79;
    v81 = 0;
    v464 = 0;
    v465 = nullptr;
    v463 = (unsigned __int8)(2 * v79);
  }
  if ((v80 & 1) != 0) {
    v84 = (char*)v81;
  }
  else {
    v84 = (char*)&v463 + 1;
  }
  if (v75 != 0) {
    GameRoutine_1a0b940(v84, v76, v75);
  }
  v85 = &v84[v75];
  if (v77 != 0) {
    GameRoutine_1a0b940(v85, v78, v77);
  }
  v85[v77] = 0;
  if ((v463 & 1) != 0) {
    v86 = v465;
  }
  else {
    v86 = (char*)&v463 + 1;
  }
  if ((v463 & 1) != 0) {
    v87 = v464;
  }
  else {
    v87 = (unsigned __int64)(unsigned __int8)v463 >> 1;
  }
  v32 = (__int64*)GameRoutine_c702b0(v282, 2, v86, v87);
  if ((v463 & 1) != 0 && v465 != nullptr) {
    v88 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v88 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v88, v465);
  }
  v82 = 3;
  if (v28 != 0) {
    goto LABEL_172;
  }
LABEL_254:
  v124 = *(unsigned __int8*)(a1 + 88);
  v125 = (v124 & 1) == 0;
  v126 = v124 >> 1;
  if (v125) {
    v127 = v126;
  }
  else {
    v127 = *(_QWORD*)(a1 + 96);
  }
  if (v125) {
    v128 = a1 + 89;
  }
  else {
    v128 = *(_QWORD*)(a1 + 104);
  }
  if ((v466 & 1) != 0) {
    v129 = v467;
  }
  else {
    v129 = (unsigned __int64)(unsigned __int8)v466 >> 1;
  }
  if ((v466 & 1) != 0) {
    v130 = v468;
  }
  else {
    v130 = (char*)&v466 + 1;
  }
  v131 = v129 + v127;
  if (v129 + v127 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_597;
  }
  if (v131 > 0x16) {
    if ((v131 | 7) == 0x17) {
      v134 = 26;
    }
    else {
      v134 = (v131 | 7) + 1;
    }
    v133 = GameRoutine_651b90(*v16, v134, 16, 0);
    v461 = v129 + v127;
    v462 = (char*)v133;
    v460 = v134 | 1;
    v132 = v134 | 1;
  }
  else {
    v132 = 2 * v131;
    v133 = 0;
    v461 = 0;
    v462 = nullptr;
    v460 = (unsigned __int8)(2 * v131);
  }
  if ((v132 & 1) != 0) {
    v135 = (char*)v133;
  }
  else {
    v135 = (char*)&v460 + 1;
  }
  if (v127 != 0) {
    GameRoutine_1a0b940(v135, v128, v127);
  }
  v136 = &v135[v127];
  if (v129 != 0) {
    GameRoutine_1a0b940(v136, v130, v129);
  }
  v136[v129] = 0;
  v137 = (__int64*)GameRoutine_1a09ce0(&v460, "_Keyframe", 9);
  v139 = v137[1];
  v138 = (char*)v137[2];
  v463 = *v137;
  v464 = v139;
  v465 = v138;
  v137[1] = 0;
  v137[2] = 0;
  *v137 = 0;
  if ((v463 & 1) != 0) {
    v140 = v464;
  }
  else {
    v140 = (unsigned __int64)(unsigned __int8)v463 >> 1;
  }
  if ((v463 & 1) != 0) {
    v141 = v465;
  }
  else {
    v141 = (char*)&v463 + 1;
  }
  v32 = X8CALL_X0(
      _QWORD*,
      GameRoutine_a8ed00((void*)&v469, *(_QWORD*)(*v51 + 13224), v141, v140));
  v142 = v469;
  v143 = v470;
  if (v470 == 0) {
    goto LABEL_291;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v470 + 8), 1u,
                            memory_order_relaxed);
  v144 = v470;
  if (v470 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v470 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v144 + 16LL))(v144);
    v32 = (__int64*)GameRoutine_1a09c50(v144);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v143 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v143 + 16LL))(v143);
    v32 = (__int64*)GameRoutine_1a09c50(v143);
    if ((v463 & 1) == 0) {
      goto LABEL_297;
    }
  }
  else {
  LABEL_291:
    if ((v463 & 1) == 0) {
      goto LABEL_297;
    }
  }
  if (v465 != nullptr) {
    v145 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v145 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v145, v465);
  }
LABEL_297:
  if ((v460 & 1) != 0 && v462 != nullptr) {
    v146 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v146 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v146, v462);
  }
  if (v142 != 0) {
    v147 = *(unsigned __int8*)(a1 + 88);
    v148 = (v147 & 1) == 0;
    v149 = v147 >> 1;
    if (v148) {
      v150 = v149;
    }
    else {
      v150 = *(_QWORD*)(a1 + 96);
    }
    if (v148) {
      v151 = a1 + 89;
    }
    else {
      v151 = *(_QWORD*)(a1 + 104);
    }
    if ((v466 & 1) != 0) {
      v152 = v467;
    }
    else {
      v152 = (unsigned __int64)(unsigned __int8)v466 >> 1;
    }
    if ((v466 & 1) != 0) {
      v153 = v468;
    }
    else {
      v153 = (char*)&v466 + 1;
    }
    v154 = v152 + v150;
    if (v152 + v150 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_597;
    }
    if (v154 > 0x16) {
      if ((v154 | 7) == 0x17) {
        v157 = 26;
      }
      else {
        v157 = (v154 | 7) + 1;
      }
      v156 = GameRoutine_651b90(*v16, v157, 16, 0);
      v461 = v152 + v150;
      v462 = (char*)v156;
      v460 = v157 | 1;
      v155 = v157 | 1;
    }
    else {
      v155 = 2 * v154;
      v156 = 0;
      v461 = 0;
      v462 = nullptr;
      v460 = (unsigned __int8)(2 * v154);
    }
    if ((v155 & 1) != 0) {
      v158 = (char*)v156;
    }
    else {
      v158 = (char*)&v460 + 1;
    }
    if (v150 != 0) {
      GameRoutine_1a0b940(v158, v151, v150);
    }
    v159 = &v158[v150];
    if (v152 != 0) {
      GameRoutine_1a0b940(v159, v153, v152);
    }
    v159[v152] = 0;
    v160 = (__int64*)GameRoutine_1a09ce0(&v460, "_Keyframe", 9);
    v162 = v160[1];
    v161 = (char*)v160[2];
    v463 = *v160;
    v464 = v162;
    v465 = v161;
    v160[1] = 0;
    v160[2] = 0;
    *v160 = 0;
    if ((v463 & 1) != 0) {
      v163 = v465;
    }
    else {
      v163 = (char*)&v463 + 1;
    }
    if ((v463 & 1) != 0) {
      v164 = v464;
    }
    else {
      v164 = (unsigned __int64)(unsigned __int8)v463 >> 1;
    }
    v32 = (__int64*)GameRoutine_c702b0(v282, v82, v163, v164);
    if ((v463 & 1) != 0 && v465 != nullptr) {
      v165 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v165 = 56;
      }
      v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v165, v465);
    }
    ++v82;
    if ((v460 & 1) != 0 && v462 != nullptr) {
      v166 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v166 = 56;
      }
      v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v166, v462);
    }
  }
  if (v280 != 0) {
    v167 = *(unsigned __int8*)(a1 + 64);
    v168 = (v167 & 1) == 0;
    v169 = v167 >> 1;
    if (v168) {
      v170 = v169;
    }
    else {
      v170 = *(_QWORD*)(a1 + 72);
    }
    if (v168) {
      v171 = a1 + 65;
    }
    else {
      v171 = *(_QWORD*)(a1 + 80);
    }
    v172 = v170 + 2;
    if (v170 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_597;
    }
    if (v172 >= 0x17) {
      if ((v172 | 7) == 0x17) {
        v174 = 26;
      }
      else {
        v174 = (v172 | 7) + 1;
      }
      v173 = (char*)GameRoutine_651b90(*v16, v174, 16, 0);
      v461 = v170 + 2;
      v462 = v173;
      v460 = v174 | 1;
    }
    else {
      v461 = 0;
      v462 = nullptr;
      v460 = (unsigned __int8)(2 * v172);
      v173 = (char*)&v460 + 1;
      if (v170 == 0) {
        goto LABEL_361;
      }
    }
    GameRoutine_1a0b940(v173, v171, v170);
  LABEL_361:
    strcpy(&v173[v170], "Ex");
    if ((v466 & 1) != 0) {
      v175 = v468;
    }
    else {
      v175 = (char*)&v466 + 1;
    }
    if ((v466 & 1) != 0) {
      v176 = v467;
    }
    else {
      v176 = (unsigned __int64)(unsigned __int8)v466 >> 1;
    }
    v177 = (__int64*)GameRoutine_1a09ce0(&v460, v175, v176);
    v179 = v177[1];
    v178 = (char*)v177[2];
    v463 = *v177;
    v464 = v179;
    v465 = v178;
    v177[1] = 0;
    v177[2] = 0;
    *v177 = 0;
    if ((v463 & 1) != 0) {
      v180 = v465;
    }
    else {
      v180 = (char*)&v463 + 1;
    }
    if ((v463 & 1) != 0) {
      v181 = v464;
    }
    else {
      v181 = (unsigned __int64)(unsigned __int8)v463 >> 1;
    }
    v32 = (__int64*)GameRoutine_c702b0(v282, v82, v180, v181);
    if ((v463 & 1) != 0 && v465 != nullptr) {
      v182 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v182 = 56;
      }
      v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v182, v465);
    }
    ++v82;
    if ((v460 & 1) != 0 && v462 != nullptr) {
      v183 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v183 = 56;
      }
      v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v183, v462);
    }
  }
  if (*(_BYTE*)(a2 + 224) != 1) {
  LABEL_411:
    *(_DWORD*)(a1 + 2116) = -1;
    goto LABEL_412;
  }
  v185 = v467;
  v184 = v468;
  v186 = (v466 & 1) == 0;
  v187 = (unsigned __int64)(unsigned __int8)v466 >> 1;
  *(_DWORD*)(a1 + 2116) = v82;
  if (v186) {
    v188 = v187;
  }
  else {
    v188 = v185;
  }
  if (v186) {
    v189 = (char*)&v466 + 1;
  }
  else {
    v189 = v184;
  }
  v190 = v188 + 17;
  if (v188 + 17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_597;
  }
  if (v190 >= 0x17) {
    if ((v190 | 7) == 0x17) {
      v192 = 26;
    }
    else {
      v192 = (v190 | 7) + 1;
    }
    v191 = (char*)GameRoutine_651b90(*v16, v192, 16, 0);
    v464 = v188 + 17;
    v465 = v191;
    v463 = v192 | 1;
    goto LABEL_398;
  }
  v464 = 0;
  v465 = nullptr;
  v463 = (unsigned __int8)(2 * v190);
  v191 = (char*)&v463 + 1;
  if (v188 != 0) {
  LABEL_398:
    GameRoutine_1a0b940(v191, v189, v188);
  }
  strcpy(&v191[v188], "_Weather_Keyframe");
  if ((v463 & 1) != 0) {
    v193 = v465;
  }
  else {
    v193 = (char*)&v463 + 1;
  }
  if ((v463 & 1) != 0) {
    v194 = v464;
  }
  else {
    v194 = (unsigned __int64)(unsigned __int8)v463 >> 1;
  }
  v32 = (__int64*)GameRoutine_c70850(a1, v193, v194, v282, v82);
  v82 = (unsigned int)v32;
  if ((v463 & 1) != 0 && v465 != nullptr) {
    v195 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v195 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v195, v465);
  }
  if (v82 == *(_DWORD*)(a1 + 2116)) {
    goto LABEL_411;
  }
LABEL_412:
  v196 = *(unsigned __int8*)(a1 + 88);
  v197 = (v196 & 1) == 0;
  v198 = v196 >> 1;
  if (v197) {
    v199 = v198;
  }
  else {
    v199 = *(_QWORD*)(a1 + 96);
  }
  if (v197) {
    v200 = a1 + 89;
  }
  else {
    v200 = *(_QWORD*)(a1 + 104);
  }
  v201 = v199 + 2;
  if (v199 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_597;
  }
  if (v201 >= 0x17) {
    if ((v201 | 7) == 0x17) {
      v203 = 26;
    }
    else {
      v203 = (v201 | 7) + 1;
    }
    v202 = (char*)GameRoutine_651b90(*v16, v203, 16, 0);
    v461 = v199 + 2;
    v462 = v202;
    v460 = v203 | 1;
  }
  else {
    v461 = 0;
    v462 = nullptr;
    v460 = (unsigned __int8)(2 * v201);
    v202 = (char*)&v460 + 1;
    if (v199 == 0) {
      goto LABEL_427;
    }
  }
  GameRoutine_1a0b940(v202, v200, v199);
LABEL_427:
  strcpy(&v202[v199], "Ex");
  if ((v466 & 1) != 0) {
    v204 = v468;
  }
  else {
    v204 = (char*)&v466 + 1;
  }
  if ((v466 & 1) != 0) {
    v205 = v467;
  }
  else {
    v205 = (unsigned __int64)(unsigned __int8)v466 >> 1;
  }
  v206 = (__int64*)GameRoutine_1a09ce0(&v460, v204, v205);
  v208 = v206[1];
  v207 = (char*)v206[2];
  v463 = *v206;
  v464 = v208;
  v465 = v207;
  v206[1] = 0;
  v206[2] = 0;
  *v206 = 0;
  if ((v463 & 1) != 0) {
    v209 = v464;
  }
  else {
    v209 = (unsigned __int64)(unsigned __int8)v463 >> 1;
  }
  if ((v463 & 1) != 0) {
    v210 = v465;
  }
  else {
    v210 = (char*)&v463 + 1;
  }
  v32 = X8CALL_X0(
      _QWORD*,
      GameRoutine_a8ed00((void*)&v469, *(_QWORD*)(*v51 + 13224), v210, v209));
  v212 = v469;
  v211 = v470;
  if (v470 == 0) {
    goto LABEL_444;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v470 + 8), 1u,
                            memory_order_relaxed);
  v213 = v470;
  if (v470 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v470 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v213 + 16LL))(v213);
    v32 = (__int64*)GameRoutine_1a09c50(v213);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v211 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v211 + 16LL))(v211);
    v32 = (__int64*)GameRoutine_1a09c50(v211);
    if ((v463 & 1) == 0) {
      goto LABEL_450;
    }
  }
  else {
  LABEL_444:
    if ((v463 & 1) == 0) {
      goto LABEL_450;
    }
  }
  if (v465 != nullptr) {
    v214 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v214 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v214, v465);
  }
LABEL_450:
  if ((v460 & 1) != 0 && v462 != nullptr) {
    v215 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v215 = 56;
    }
    v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v215, v462);
  }
  if (v212 == 0) {
    v223 = v277;
    goto LABEL_494;
  }
  v216 = *(unsigned __int8*)(a1 + 88);
  v217 = (v216 & 1) == 0;
  v218 = v216 >> 1;
  if (v217) {
    v219 = v218;
  }
  else {
    v219 = *(_QWORD*)(a1 + 96);
  }
  if (v217) {
    v220 = a1 + 89;
  }
  else {
    v220 = *(_QWORD*)(a1 + 104);
  }
  v221 = v219 + 2;
  if (v219 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_597;
  }
  if (v221 >= 0x17) {
    if ((v221 | 7) == 0x17) {
      v224 = 26;
    }
    else {
      v224 = (v221 | 7) + 1;
    }
    v222 = (char*)GameRoutine_651b90(*v16, v224, 16, 0);
    v461 = v219 + 2;
    v462 = v222;
    v460 = v224 | 1;
  }
  else {
    v461 = 0;
    v462 = nullptr;
    v460 = (unsigned __int8)(2 * v221);
    v222 = (char*)&v460 + 1;
    if (v219 == 0) {
      goto LABEL_472;
    }
  }
  GameRoutine_1a0b940(v222, v220, v219);
LABEL_472:
  strcpy(&v222[v219], "Ex");
  if ((v466 & 1) != 0) {
    v225 = v468;
  }
  else {
    v225 = (char*)&v466 + 1;
  }
  if ((v466 & 1) != 0) {
    v226 = v467;
  }
  else {
    v226 = (unsigned __int64)(unsigned __int8)v466 >> 1;
  }
  v227 = (__int64*)GameRoutine_1a09ce0(&v460, v225, v226);
  v229 = v227[1];
  v228 = (char*)v227[2];
  v463 = *v227;
  v464 = v229;
  v465 = v228;
  v227[1] = 0;
  v227[2] = 0;
  *v227 = 0;
  if ((v463 & 1) != 0) {
    v230 = v465;
  }
  else {
    v230 = (char*)&v463 + 1;
  }
  if ((v463 & 1) != 0) {
    v231 = v464;
  }
  else {
    v231 = (unsigned __int64)(unsigned __int8)v463 >> 1;
  }
  GameRoutine_c702b0(v282, v82, v230, v231);
  v223 = v277;
  if ((v463 & 1) != 0 && v465 != nullptr) {
    v232 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v232 = 56;
    }
    GameRoutine_1a0a4e0(*v16 + v232, v465);
  }
  ++v82;
  if ((v460 & 1) != 0 && v462 != nullptr) {
    v233 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v233 = 56;
    }
    GameRoutine_1a0a4e0(*v16 + v233, v462);
  }
LABEL_494:
  if ((v466 & 1) != 0 && v468 != nullptr) {
    v234 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v234 = 56;
    }
    GameRoutine_1a0a4e0(*v16 + v234, v468);
  }
  if (v223 != 0) {
    GameRoutine_c702b0(v282, v82++, "SubOverride", 11);
  }
  GameRoutine_c702b0(v282, v82, "Override", 8);
  v235 = *v51;
  LODWORD(v466) = 0;
  v32 = (__int64*)GameRoutine_aa1dd0(*(_QWORD*)(v235 + 13224), v282, &v466);
  *(_DWORD*)(a1 + 568) = (_DWORD)v32;
  if ((_DWORD)v32 != -1) {
    *(_BYTE*)(*(_QWORD*)(*v51 + 13224) + 1560LL * (int)v32 + 1744) = 0;
  }
  for (i = 384; i != 0; i -= 24) {
    v237 = &v282[i];
    if ((v282[i - 10] & 1) != 0) {
      v238 = *((_QWORD*)v237 - 3);
      if (v238 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v239 = 128;
        }
        else {
          v239 = 56;
        }
        v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v239, v238);
      }
    }
    if ((*(_BYTE*)(v237 - 16) & 1) != 0) {
      v240 = *(_QWORD*)&v282[i - 12];
      if (v240 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v241 = 128;
        }
        else {
          v241 = 56;
        }
        v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v241, v240);
      }
    }
    if ((v282[i - 22] & 1) != 0) {
      v242 = *(_QWORD*)&v282[i - 18];
      if (v242 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v243 = 128;
        }
        else {
          v243 = 56;
        }
        v32 = (__int64*)GameRoutine_1a0a4e0(*v16 + v243, v242);
      }
    }
  }
  v244 = *(_DWORD*)(a1 + 560);
  v282[0] = v278;
  v245 = *(unsigned __int8*)(a1 + 64);
  v247 = *(_QWORD*)(a1 + 72);
  v246 = *(_QWORD*)(a1 + 80);
  v303 = 0;
  v304 = -1;
  v314 = 0;
  v315 = -1;
  v326 = 0;
  v327 = -1;
  v338 = -1;
  v349 = -1;
  v360 = -1;
  v371 = -1;
  if (v279 <= 0) {
    v244 = -1;
  }
  v382 = -1;
  v393 = -1;
  v404 = -1;
  v248 = (v245 & 1) == 0;
  v415 = -1;
  v426 = -1;
  v437 = -1;
  v448 = -1;
  v459 = -1;
  v249 = *(_DWORD*)(a1 + 556);
  v250 = v245 >> 1;
  v295 = 0;
  v296[0] = 0;
  v296[1] = 0;
  if (v248) {
    v251 = v250;
  }
  else {
    v251 = v247;
  }
  if (v248) {
    v252 = a1 + 65;
  }
  else {
    v252 = v246;
  }
  v297 = 0;
  v298 = 0;
  v299 = 0;
  v300 = 0;
  v253 = v251 + 1;
  v301 = 0;
  v302 = 0;
  v306 = 0;
  v307[0] = 0;
  v307[1] = 0;
  v308 = 0;
  v309 = 0;
  v310 = 0;
  v311 = 0;
  v312 = 0;
  v313 = 0;
  v317 = 0;
  v318 = 0;
  v319 = 0;
  v320 = 0;
  v321 = 0;
  v322 = 0;
  v323 = 0;
  v324 = 0;
  v325 = 0;
  v328 = 0;
  v329 = 0;
  v330 = 0;
  v331 = 0;
  v332 = 0;
  v333 = 0;
  v334 = 0;
  v335 = 0;
  v336 = 0;
  v337 = 0;
  v339 = 0;
  v348 = 0;
  v347 = 0;
  v346 = 0;
  v345 = 0;
  v344 = 0;
  v343 = 0;
  v342 = 0;
  v341 = 0;
  v340 = 0;
  v350 = 0;
  v359 = 0;
  v358 = 0;
  v357 = 0;
  v356 = 0;
  v355 = 0;
  v354 = 0;
  v353 = 0;
  v352 = 0;
  v351 = 0;
  v361 = 0;
  v370 = 0;
  v369 = 0;
  v368 = 0;
  v367 = 0;
  v366 = 0;
  v365 = 0;
  v364 = 0;
  v363 = 0;
  v362 = 0;
  v372 = 0;
  v381 = 0;
  v380 = 0;
  v379 = 0;
  v378 = 0;
  v377 = 0;
  v376 = 0;
  v375 = 0;
  v374 = 0;
  v373 = 0;
  v383 = 0;
  v392 = 0;
  v391 = 0;
  v390 = 0;
  v389 = 0;
  v388 = 0;
  v387 = 0;
  v386 = 0;
  v385 = 0;
  v384 = 0;
  v394 = 0;
  v403 = 0;
  v402 = 0;
  v401 = 0;
  v400 = 0;
  v399 = 0;
  v398 = 0;
  v397 = 0;
  v396 = 0;
  v395 = 0;
  v405 = 0;
  v414 = 0;
  v413 = 0;
  v412 = 0;
  v411 = 0;
  v410 = 0;
  v409 = 0;
  v408 = 0;
  v407 = 0;
  v406 = 0;
  v416 = 0;
  v425 = 0;
  v424 = 0;
  v423 = 0;
  v422 = 0;
  v421 = 0;
  v420 = 0;
  v419 = 0;
  v418 = 0;
  v417 = 0;
  v427 = 0;
  v436 = 0;
  v435 = 0;
  v434 = 0;
  v433 = 0;
  v432 = 0;
  v431 = 0;
  v430 = 0;
  v429 = 0;
  v428 = 0;
  v438 = 0;
  v447 = 0;
  v446 = 0;
  v445 = 0;
  v444 = 0;
  v443 = 0;
  v442 = 0;
  v441 = 0;
  v440 = 0;
  v439 = 0;
  v449 = 0;
  v458 = 0;
  v457 = 0;
  v456 = 0;
  v455 = 0;
  v454 = 0;
  v453 = 0;
  v452 = 0;
  v451 = 0;
  v450 = 0;
  v290 = 0;
  v291 = 0;
  v288 = 0;
  v289 = 0;
  v286 = 0;
  v287 = 0;
  v284 = 0;
  v285 = 0;
  v283 = 0;
  v292 = v249;
  v293 = v244;
  v294 = 1065353216;
  if (v251 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_597;
  }
  if (v253 >= 0x17) {
    if ((v253 | 7) == 0x17) {
      v255 = 26;
    }
    else {
      v255 = (v253 | 7) + 1;
    }
    v254 = (char*)GameRoutine_651b90(*v16, v255, 16, 0);
    v464 = v251 + 1;
    v465 = v254;
    v463 = v255 | 1;
    goto LABEL_539;
  }
  v464 = 0;
  v465 = nullptr;
  v463 = (unsigned __int8)(2 * v253);
  v254 = (char*)&v463 + 1;
  if (v251 != 0) {
  LABEL_539:
    GameRoutine_1a0b940(v254, v252, v251);
  }
  *(_WORD*)&v254[v251] = 95;
  v256 = (__int64*)GameRoutine_1a09ce0(&v463, "Combat", 6);
  v258 = v256[1];
  v257 = (char*)v256[2];
  v466 = *v256;
  v467 = v258;
  v468 = v257;
  v256[1] = 0;
  v256[2] = 0;
  *v256 = 0;
  if ((v466 & 1) != 0) {
    v259 = v468;
  }
  else {
    v259 = (char*)&v466 + 1;
  }
  if ((v466 & 1) != 0) {
    v260 = v467;
  }
  else {
    v260 = (unsigned __int64)(unsigned __int8)v466 >> 1;
  }
  GameRoutine_c702b0(v282, 1, v259, v260);
  if ((v466 & 1) != 0 && v468 != nullptr) {
    v261 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v261 = 56;
    }
    GameRoutine_1a0a4e0(*v16 + v261, v468);
  }
  if ((v463 & 1) != 0 && v465 != nullptr) {
    v262 = 128;
    if (*(_QWORD*)(*v16 + 200LL) == 0) {
      v262 = 56;
    }
    GameRoutine_1a0a4e0(*v16 + v262, v465);
  }
  if (v223 != 0) {
    v306 = 1;
    if ((v307[0] & 1) != 0 && v308 != 0) {
      v263 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v263 = 56;
      }
      GameRoutine_1a0a4e0(*v16 + v263, v308);
    }
    LOBYTE(v307[0]) = 22;
    strcpy((char*)v307 + 1, "SubOverride");
    if ((v309 & 1) != 0 && v311 != 0) {
      v264 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v264 = 56;
      }
      GameRoutine_1a0a4e0(*v16 + v264, v311);
    }
    v310 = 0;
    v311 = 0;
    v309 = 0;
    if ((v312 & 1) != 0 && v314 != 0) {
      v265 = 128;
      if (*(_QWORD*)(*v16 + 200LL) == 0) {
        v265 = 56;
      }
      GameRoutine_1a0a4e0(*v16 + v265, v314);
    }
    v266 = 3;
    v313 = 0;
    v314 = 0;
    v312 = 0;
    v315 = -1;
    v316 = 1065353216;
  }
  else {
    v266 = 2;
  }
  GameRoutine_c702b0(v282, v266, "Override", 8);
  v267 = *v51;
  LODWORD(v466) = 0;
  result = GameRoutine_aa1dd0(*(_QWORD*)(v267 + 13224), v282, &v466);
  *(_DWORD*)(a1 + 572) = result;
  if ((_DWORD)result != -1) {
    *(_BYTE*)(*(_QWORD*)(*v51 + 13224) + 1560LL * (int)result + 1744) = 0;
  }
  for (j = 384; j != 0; j -= 24) {
    v270 = &v282[j];
    if ((v282[j - 10] & 1) != 0) {
      v271 = *((_QWORD*)v270 - 3);
      if (v271 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v272 = 128;
        }
        else {
          v272 = 56;
        }
        result = GameRoutine_1a0a4e0(*v16 + v272, v271);
      }
    }
    if ((*(_BYTE*)(v270 - 16) & 1) != 0) {
      v273 = *(_QWORD*)&v282[j - 12];
      if (v273 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v274 = 128;
        }
        else {
          v274 = 56;
        }
        result = GameRoutine_1a0a4e0(*v16 + v274, v273);
      }
    }
    if ((v282[j - 22] & 1) != 0) {
      v275 = *(_QWORD*)&v282[j - 18];
      if (v275 != 0) {
        if (*(_QWORD*)(*v16 + 200LL) != 0) {
          v276 = 128;
        }
        else {
          v276 = 56;
        }
        result = GameRoutine_1a0a4e0(*v16 + v276, v275);
      }
    }
  }
  return result;
}

void GameHr_c6c4f0(__int64 a1, unsigned __int8* a2, unsigned int a3)
{
  unsigned __int64 v3;
  __int64* v4;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  unsigned __int64 v23;
  char v24;
  __int64* v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  bool v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int8* v39;
  unsigned __int8* v40;
  unsigned int v41;
  bool v42;
  unsigned __int64 v43;
  const char* v44;
  unsigned __int64 v45;
  __int64* v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  bool v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  char* v61;
  unsigned __int64 v62;
  char v63;
  __int64* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64* v70;
  bool v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  char* v76;
  __int64 v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  const char* v81;
  unsigned __int64 v82;
  __int64* v83;
  __int64 v84;
  unsigned __int64 v85;
  const char* v86;
  unsigned __int64 v87;
  __int64* v88;
  __int64 v89;
  unsigned __int64 v90;
  char* v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  bool v99;
  unsigned __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  char* v104;
  unsigned __int64 v105;
  char v106;
  __int64* v107;
  __int64 v108;
  char* v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64* v113;
  bool v114;
  unsigned __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  char* v119;
  __int64 v120;
  __int64 v121;
  __int64* v122;
  __int64 v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  bool v126;
  unsigned __int64 v127;
  const char* v128;
  unsigned __int64 v129;
  __int64* v130;
  __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  char* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  bool v141;
  unsigned __int64 v142;
  unsigned __int64 v143;
  __int64 v144;
  unsigned __int64 v145;
  char* v146;
  unsigned __int64 v147;
  char v148;
  __int64* v149;
  __int64 v150;
  char* v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64* v155;
  bool v156;
  unsigned __int64 v157;
  unsigned __int64 v158;
  __int64 v159;
  unsigned __int64 v160;
  char* v161;
  __int64 v162;
  __int64* v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  char* v168;
  __int64* v169;
  __int64 v170;
  unsigned __int64 v171;
  unsigned __int64 v172;
  bool v173;
  unsigned __int64 v174;
  const char* v175;
  unsigned __int64 v176;
  __int64* v177;
  __int64 v178;
  unsigned __int64 v179;
  const char* v180;
  unsigned __int64 v181;
  __int64* v182;
  __int64 v183;
  unsigned __int64 v184;
  char* v185;
  unsigned __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  unsigned __int64 v193;
  bool v194;
  unsigned __int64 v195;
  unsigned __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  char* v199;
  unsigned __int64 v200;
  char v201;
  __int64* v202;
  __int64 v203;
  char* v204;
  __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  __int64* v208;
  bool v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  char* v214;
  __int64 v215;
  unsigned __int64 v216;
  bool v217;
  unsigned __int64 v218;
  const char* v219;
  unsigned __int64 v220;
  __int64* v221;
  __int64 v222;
  unsigned __int64 v223;
  __int64* v224;
  __int64 v225;
  unsigned __int64 v226;
  unsigned __int64 v227;
  bool v228;
  unsigned __int64 v229;
  const char* v230;
  unsigned __int64 v231;
  __int64* v232;
  __int64 v233;
  unsigned __int64 v234;
  __int64 v235;
  unsigned __int64 v236;
  char* v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  unsigned __int64 v246;
  unsigned __int64 v247;
  struct {
    __int64 v248;
    __int64 v249;
  } v248_;
  struct {
    __int64 v250;
    __int64 v251;
    char* v252;
  } v250_;
  struct {
    __int64 v253;
    __int64 v254;
  } v253_;
  struct {
    __int64 v255;
    __int64 v256;
  } v255_;
  struct {
    __int64 v257;
    unsigned __int64 v258;
    char* v259;
  } v257_;
  struct {
    __int64 v260;
    unsigned __int64 v261;
    char* v262;
  } v260_;
  struct {
    __int64 v263;
    unsigned __int64 v264;
    char* v265;
  } v263_;
  struct {
    __int64 v266;
    __int64 v267;
  } v266_;
  struct {
    __int64 v268;
    unsigned __int64 v269;
    __int64* v270;
  } v268_;
  struct {
    __int64 v271;
    unsigned __int64 v272;
    const char* v273;
  } v271_;
  struct {
    __int64 v274;
    unsigned __int64 v275;
    char* v276;
  } v274_;
  int v277[3];

  v4 = (__int64*)(a2 + 24);
  v3 = a2[24];
  if ((v3 & 1) != 0) {
    v8 = *((_QWORD*)a2 + 4);
  }
  else {
    v8 = v3 >> 1;
  }
  v247 = v8;
  v9 = a2[96];
  if ((v9 & 1) != 0) {
    v10 = *((_QWORD*)a2 + 13);
  }
  else {
    v10 = v9 >> 1;
  }
  std___1_to_string_1a0a790((void*)(&v274_.v274), a3);
  if ((*(_BYTE*)v4 & 1) != 0) {
    fw_text_String_CopyTerminated(&v268_.v268, *((_QWORD*)a2 + 5),
                                  *((_QWORD*)a2 + 4));
  }
  else {
    v11 = v4[1];
    v268_.v268 = *v4;
    v268_.v269 = v11;
    v268_.v270 = (__int64*)v4[2];
  }
  v12 = (__int64*)GameRoutine_1a0a680_alt1((__int64)&v268_.v268, 0, "__", 2u);
  v14 = v12[1];
  v13 = v12[2];
  v271_.v271 = *v12;
  v271_.v272 = v14;
  v271_.v273 = (const char*)v13;
  v12[1] = 0;
  v12[2] = 0;
  *v12 = 0;
  if ((v268_.v268 & 1) != 0 && v268_.v270 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v15,
                                  (__int64)v268_.v270);
  }
  v16 = *(unsigned __int8*)(a1 + 376);
  v17 = (v16 & 1) == 0;
  v18 = v16 >> 1;
  if (v17) {
    v19 = v18;
  }
  else {
    v19 = *(_QWORD*)(a1 + 384);
  }
  if (v17) {
    v20 = a1 + 377;
  }
  else {
    v20 = *(_QWORD*)(a1 + 392);
  }
  if ((v274_.v274 & 1) != 0) {
    v21 = v274_.v275;
  }
  else {
    v21 = (unsigned __int64)(unsigned __int8)v274_.v274 >> 1;
  }
  if ((v274_.v274 & 1) != 0) {
    v22 = v274_.v276;
  }
  else {
    v22 = (char*)&v274_.v274 + 1;
  }
  v23 = v21 + v19;
  if (v21 + v19 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_467;
  }
  if (v23 > 0x16) {
    if ((v23 | 7) == 0x17) {
      v26 = 26;
    }
    else {
      v26 = (v23 | 7) + 1;
    }
    v25 = (__int64*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   v26, 16, 0);
    v268_.v269 = v21 + v19;
    v268_.v270 = v25;
    v268_.v268 = v26 | 1;
    v24 = v26 | 1;
  }
  else {
    v24 = 2 * v23;
    v25 = nullptr;
    v268_.v269 = 0;
    v268_.v270 = nullptr;
    v268_.v268 = (unsigned __int8)(2 * v23);
  }
  if ((v24 & 1) != 0) {
    v27 = (char*)v25;
  }
  else {
    v27 = (char*)&v268_.v268 + 1;
  }
  if (v19 != 0) {
    memmove((__int64)v27, v20, v19);
  }
  v28 = (__int64)&v27[v19];
  v246 = v10;
  if (v21 != 0) {
    memmove(v28, (__int64)v22, v21);
  }
  *(_BYTE*)(v28 + v21) = 0;
  v29 = (v268_.v268 & 1) != 0
            ? v268_.v269
            : (unsigned __int64)(unsigned __int8)v268_.v268 >> 1;
  v30 = *a2;
  v31 = (v268_.v268 & 1) != 0 ? v268_.v270 : (__int64*)((char*)&v268_.v268 + 1);
  v32 = (v30 & 1) == 0;
  v33 = v30 >> 1;
  v34 = v32 ? v33 : *((_QWORD*)a2 + 1);
  v35 = v32 ? (__int64)(a2 + 1) : *((_QWORD*)a2 + 2);
  v36 = v34 + 1;
  if (v34 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_467;
  }
  if (v36 >= 0x17) {
    if ((v36 | 7) == 0x17) {
      v38 = 26;
    }
    else {
      v38 = (v36 | 7) + 1;
    }
    v37 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v38,
                                                16, 0);
    v260_.v261 = v34 + 1;
    v260_.v262 = v37;
    v260_.v260 = v38 | 1;
    goto LABEL_61;
  }
  v260_.v261 = 0;
  v260_.v262 = nullptr;
  v260_.v260 = (unsigned __int8)(2 * v36);
  v37 = (char*)&v260_.v260 + 1;
  if (v34 != 0) {
  LABEL_61:
    memmove((__int64)v37, v35, v34);
  }
  *(_WORD*)&v37[v34] = 95;
  v39 = &a2[24 * a3];
  v41 = v39[120];
  v40 = v39 + 120;
  v42 = (v41 & 1) == 0;
  v43 = (unsigned __int64)v41 >> 1;
  if ((v41 & 1) != 0) {
    v44 = *((const char**)v40 + 2);
  }
  else {
    v44 = (const char*)(v40 + 1);
  }
  if (v42) {
    v45 = v43;
  }
  else {
    v45 = *((_QWORD*)v40 + 1);
  }
  v46 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v260_.v260, v44, v45);
  v48 = v46[1];
  v47 = v46[2];
  v263_.v263 = *v46;
  v263_.v264 = v48;
  v263_.v265 = (char*)v47;
  v46[1] = 0;
  v46[2] = 0;
  *v46 = 0;
  if ((v263_.v263 & 1) != 0) {
    v49 = v263_.v264;
  }
  else {
    v49 = (unsigned __int64)(unsigned __int8)v263_.v263 >> 1;
  }
  if ((v263_.v263 & 1) != 0) {
    v50 = v263_.v265;
  }
  else {
    v50 = (char*)&v263_.v263 + 1;
  }
  LODWORD(v257_.v257) = 1;
  gfxa_aa1540((void*)(&v266_.v266),
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v31, v29,
              (__int64)v50, v49, (int*)&v257_.v257);
  Settings_aa1690(v266_.v266, (__int64)v50, v49);
  v51 = v266_.v267;
  if (v266_.v267 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v266_.v267 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
    std___1___shared_weak_count___release_weak(v51);
    if ((v263_.v263 & 1) == 0) {
      goto LABEL_82;
    }
  }
  else if ((v263_.v263 & 1) == 0) {
    goto LABEL_82;
  }
  if (v263_.v265 != nullptr) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v52,
                                  (__int64)v263_.v265);
  }
LABEL_82:
  if ((v260_.v260 & 1) != 0 && v260_.v262 != nullptr) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  (__int64)v260_.v262);
  }
  if ((v268_.v268 & 1) != 0 && v268_.v270 != nullptr) {
    v54 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v54 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v54,
                                  (__int64)v268_.v270);
  }
  if (v247 != 0) {
    v55 = *(unsigned __int8*)(a1 + 400);
    v56 = (v55 & 1) == 0;
    v57 = v55 >> 1;
    if (v56) {
      v58 = v57;
    }
    else {
      v58 = *(_QWORD*)(a1 + 408);
    }
    if (v56) {
      v59 = a1 + 401;
    }
    else {
      v59 = *(_QWORD*)(a1 + 416);
    }
    if ((v274_.v274 & 1) != 0) {
      v60 = v274_.v275;
    }
    else {
      v60 = (unsigned __int64)(unsigned __int8)v274_.v274 >> 1;
    }
    if ((v274_.v274 & 1) != 0) {
      v61 = v274_.v276;
    }
    else {
      v61 = (char*)&v274_.v274 + 1;
    }
    v62 = v60 + v58;
    if (v60 + v58 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_467;
    }
    if (v62 > 0x16) {
      if ((v62 | 7) == 0x17) {
        v65 = 26;
      }
      else {
        v65 = (v62 | 7) + 1;
      }
      v64 = (__int64*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                     v65, 16, 0);
      v268_.v269 = v60 + v58;
      v268_.v270 = v64;
      v268_.v268 = v65 | 1;
      v63 = v65 | 1;
    }
    else {
      v63 = 2 * v62;
      v64 = nullptr;
      v268_.v269 = 0;
      v268_.v270 = nullptr;
      v268_.v268 = (unsigned __int8)(2 * v62);
    }
    if ((v63 & 1) != 0) {
      v66 = (char*)v64;
    }
    else {
      v66 = (char*)&v268_.v268 + 1;
    }
    if (v58 != 0) {
      memmove((__int64)v66, v59, v58);
    }
    v67 = (__int64)&v66[v58];
    if (v60 != 0) {
      memmove(v67, (__int64)v61, v60);
    }
    *(_BYTE*)(v67 + v60) = 0;
    v68 = (v268_.v268 & 1) != 0
              ? v268_.v269
              : (unsigned __int64)(unsigned __int8)v268_.v268 >> 1;
    v69 = *a2;
    v70 =
        (v268_.v268 & 1) != 0 ? v268_.v270 : (__int64*)((char*)&v268_.v268 + 1);
    v71 = (v69 & 1) == 0;
    v72 = v69 >> 1;
    v73 = v71 ? v72 : *((_QWORD*)a2 + 1);
    v74 = v71 ? (__int64)(a2 + 1) : *((_QWORD*)a2 + 2);
    v75 = v73 + 1;
    if (v73 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_467;
    }
    if (v75 >= 0x17) {
      if ((v75 | 7) == 0x17) {
        v77 = 26;
      }
      else {
        v77 = (v75 | 7) + 1;
      }
      v76 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v77,
                                                  16, 0);
      v257_.v258 = v73 + 1;
      v257_.v259 = v76;
      v257_.v257 = v77 | 1;
    }
    else {
      v257_.v258 = 0;
      v257_.v259 = nullptr;
      v257_.v257 = (unsigned __int8)(2 * v75);
      v76 = (char*)&v257_.v257 + 1;
      if (v73 == 0) {
      LABEL_140:
        *(_WORD*)&v76[v73] = 95;
        v78 = *v40;
        v79 = (v78 & 1) == 0;
        v80 = v78 >> 1;
        if (v79) {
          v81 = (const char*)(v40 + 1);
        }
        else {
          v81 = *((const char**)v40 + 2);
        }
        if (v79) {
          v82 = v80;
        }
        else {
          v82 = *((_QWORD*)v40 + 1);
        }
        v83 =
            (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v257_.v257, v81, v82);
        v85 = v83[1];
        v84 = v83[2];
        v260_.v260 = *v83;
        v260_.v261 = v85;
        v260_.v262 = (char*)v84;
        v83[1] = 0;
        v83[2] = 0;
        *v83 = 0;
        if ((v271_.v271 & 1) != 0) {
          v86 = v271_.v273;
        }
        else {
          v86 = (char*)&v271_.v271 + 1;
        }
        if ((v271_.v271 & 1) != 0) {
          v87 = v271_.v272;
        }
        else {
          v87 = (unsigned __int64)(unsigned __int8)v271_.v271 >> 1;
        }
        v88 =
            (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v260_.v260, v86, v87);
        v90 = v88[1];
        v89 = v88[2];
        v263_.v263 = *v88;
        v263_.v264 = v90;
        v263_.v265 = (char*)v89;
        v88[1] = 0;
        v88[2] = 0;
        *v88 = 0;
        if ((v263_.v263 & 1) != 0) {
          v91 = v263_.v265;
        }
        else {
          v91 = (char*)&v263_.v263 + 1;
        }
        if ((v263_.v263 & 1) != 0) {
          v92 = v263_.v264;
        }
        else {
          v92 = (unsigned __int64)(unsigned __int8)v263_.v263 >> 1;
        }
        if ((GameRoutine_aa1b50_alt1((__int64)v91, v92) & 1) != 0) {
          v277[0] = 1;
          gfxa_aa1540((void*)(&v250_.v250),
                      *(_QWORD*)(game_g_frame_clock + 13224), (__int64)v70, v68,
                      (__int64)v91, v92, v277);
          Settings_aa1690(v250_.v250, (__int64)v91, v92);
          if ((v263_.v263 & 1) == 0) {
          LABEL_166:
            if ((v260_.v260 & 1) != 0 && v260_.v262 != nullptr) {
              v94 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v94 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v94,
                  (__int64)v260_.v262);
            }
            if ((v257_.v257 & 1) != 0 && v257_.v259 != nullptr) {
              v95 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v95 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v95,
                  (__int64)v257_.v259);
            }
            if ((v268_.v268 & 1) != 0 && v268_.v270 != nullptr) {
              v96 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v96 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                  (__int64)v268_.v270);
            }
            v97 = v250_.v251;
            if (v250_.v251 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v250_.v251 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
              std___1___shared_weak_count___release_weak(v97);
            }
            goto LABEL_184;
          }
        }
        else {
          v250_.v250 = 0;
          v250_.v251 = 0;
          if ((v263_.v263 & 1) == 0) {
            goto LABEL_166;
          }
        }
        if (v263_.v265 != nullptr) {
          v93 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v93 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v93,
                                        (__int64)v263_.v265);
        }
        goto LABEL_166;
      }
    }
    memmove((__int64)v76, v74, v73);
    goto LABEL_140;
  }
LABEL_184:
  v98 = *(unsigned __int8*)(a1 + 424);
  v99 = (v98 & 1) == 0;
  v100 = v98 >> 1;
  if (v99) {
    v101 = v100;
  }
  else {
    v101 = *(_QWORD*)(a1 + 432);
  }
  if (v99) {
    v102 = a1 + 425;
  }
  else {
    v102 = *(_QWORD*)(a1 + 440);
  }
  if ((v274_.v274 & 1) != 0) {
    v103 = v274_.v275;
  }
  else {
    v103 = (unsigned __int64)(unsigned __int8)v274_.v274 >> 1;
  }
  if ((v274_.v274 & 1) != 0) {
    v104 = v274_.v276;
  }
  else {
    v104 = (char*)&v274_.v274 + 1;
  }
  v105 = v103 + v101;
  if (v103 + v101 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_467;
  }
  if (v105 > 0x16) {
    if ((v105 | 7) == 0x17) {
      v108 = 26;
    }
    else {
      v108 = (v105 | 7) + 1;
    }
    v107 = (__int64*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v108, 16, 0);
    v268_.v269 = v103 + v101;
    v268_.v270 = v107;
    v268_.v268 = v108 | 1;
    v106 = v108 | 1;
  }
  else {
    v106 = 2 * v105;
    v107 = nullptr;
    v268_.v269 = 0;
    v268_.v270 = nullptr;
    v268_.v268 = (unsigned __int8)(2 * v105);
  }
  if ((v106 & 1) != 0) {
    v109 = (char*)v107;
  }
  else {
    v109 = (char*)&v268_.v268 + 1;
  }
  if (v101 != 0) {
    memmove((__int64)v109, v102, v101);
  }
  v110 = (__int64)&v109[v101];
  if (v103 != 0) {
    memmove(v110, (__int64)v104, v103);
  }
  *(_BYTE*)(v110 + v103) = 0;
  v111 = (v268_.v268 & 1) != 0
             ? v268_.v269
             : (unsigned __int64)(unsigned __int8)v268_.v268 >> 1;
  v112 = *a2;
  v113 =
      (v268_.v268 & 1) != 0 ? v268_.v270 : (__int64*)((char*)&v268_.v268 + 1);
  v114 = (v112 & 1) == 0;
  v115 = v112 >> 1;
  v116 = v114 ? v115 : *((_QWORD*)a2 + 1);
  v117 = v114 ? (__int64)(a2 + 1) : *((_QWORD*)a2 + 2);
  v118 = v116 + 9;
  if (v116 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_467;
  }
  if (v118 >= 0x17) {
    if ((v118 | 7) == 0x17) {
      v120 = 26;
    }
    else {
      v120 = (v118 | 7) + 1;
    }
    v119 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v120,
                                                 16, 0);
    v257_.v258 = v116 + 9;
    v257_.v259 = v119;
    v257_.v257 = v120 | 1;
    goto LABEL_230;
  }
  v257_.v258 = 0;
  v257_.v259 = nullptr;
  v257_.v257 = (unsigned __int8)(2 * v118);
  v119 = (char*)&v257_.v257 + 1;
  if (v116 != 0) {
  LABEL_230:
    memmove((__int64)v119, v117, v116);
  }
  v121 = *(_QWORD*)"_Keyframe";
  strcpy(&v119[v116], "_Keyframe");
  v122 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v257_.v257, "_", 1u);
  v124 = v122[1];
  v123 = v122[2];
  v260_.v260 = *v122;
  v260_.v261 = v124;
  v260_.v262 = (char*)v123;
  v122[1] = 0;
  v122[2] = 0;
  *v122 = 0;
  v125 = *v40;
  v126 = (v125 & 1) == 0;
  v127 = v125 >> 1;
  if (v126) {
    v128 = (const char*)(v40 + 1);
  }
  else {
    v128 = *((const char**)v40 + 2);
  }
  if (v126) {
    v129 = v127;
  }
  else {
    v129 = *((_QWORD*)v40 + 1);
  }
  v130 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v260_.v260, v128, v129);
  v132 = v130[1];
  v131 = v130[2];
  v263_.v263 = *v130;
  v263_.v264 = v132;
  v263_.v265 = (char*)v131;
  v130[1] = 0;
  v130[2] = 0;
  *v130 = 0;
  if ((v263_.v263 & 1) != 0) {
    v133 = v263_.v264;
  }
  else {
    v133 = (unsigned __int64)(unsigned __int8)v263_.v263 >> 1;
  }
  if ((v263_.v263 & 1) != 0) {
    v134 = v263_.v265;
  }
  else {
    v134 = (char*)&v263_.v263 + 1;
  }
  LODWORD(v250_.v250) = 2;
  gfxa_aa1a00((void*)(&v255_.v255),
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v113,
              v111, (__int64)v134, v133, (int*)&v250_.v250);
  Settings_aa1690(v255_.v255, (__int64)v134, v133);
  v135 = v255_.v256;
  if (v255_.v256 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v255_.v256 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v135 + 16LL))(v135);
    std___1___shared_weak_count___release_weak(v135);
    if ((v263_.v263 & 1) == 0) {
      goto LABEL_251;
    }
  }
  else if ((v263_.v263 & 1) == 0) {
    goto LABEL_251;
  }
  if (v263_.v265 != nullptr) {
    v136 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v136 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v136,
                                  (__int64)v263_.v265);
  }
LABEL_251:
  if ((v260_.v260 & 1) != 0 && v260_.v262 != nullptr) {
    v137 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v137 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v137,
                                  (__int64)v260_.v262);
  }
  if ((v257_.v257 & 1) != 0 && v257_.v259 != nullptr) {
    v138 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v138 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v138,
                                  (__int64)v257_.v259);
  }
  if ((v268_.v268 & 1) != 0 && v268_.v270 != nullptr) {
    v139 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v139 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v139,
                                  (__int64)v268_.v270);
  }
  if (v247 != 0) {
    v140 = *(unsigned __int8*)(a1 + 448);
    v141 = (v140 & 1) == 0;
    v142 = v140 >> 1;
    if (v141) {
      v143 = v142;
    }
    else {
      v143 = *(_QWORD*)(a1 + 456);
    }
    if (v141) {
      v144 = a1 + 449;
    }
    else {
      v144 = *(_QWORD*)(a1 + 464);
    }
    if ((v274_.v274 & 1) != 0) {
      v145 = v274_.v275;
    }
    else {
      v145 = (unsigned __int64)(unsigned __int8)v274_.v274 >> 1;
    }
    if ((v274_.v274 & 1) != 0) {
      v146 = v274_.v276;
    }
    else {
      v146 = (char*)&v274_.v274 + 1;
    }
    v147 = v145 + v143;
    if (v145 + v143 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_467;
    }
    if (v147 > 0x16) {
      if ((v147 | 7) == 0x17) {
        v150 = 26;
      }
      else {
        v150 = (v147 | 7) + 1;
      }
      v149 = (__int64*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                      v150, 16, 0);
      v268_.v269 = v145 + v143;
      v268_.v270 = v149;
      v268_.v268 = v150 | 1;
      v148 = v150 | 1;
    }
    else {
      v148 = 2 * v147;
      v149 = nullptr;
      v268_.v269 = 0;
      v268_.v270 = nullptr;
      v268_.v268 = (unsigned __int8)(2 * v147);
    }
    if ((v148 & 1) != 0) {
      v151 = (char*)v149;
    }
    else {
      v151 = (char*)&v268_.v268 + 1;
    }
    if (v143 != 0) {
      memmove((__int64)v151, v144, v143);
    }
    v152 = (__int64)&v151[v143];
    if (v145 != 0) {
      memmove(v152, (__int64)v146, v145);
    }
    *(_BYTE*)(v152 + v145) = 0;
    v153 = (v268_.v268 & 1) != 0
               ? v268_.v269
               : (unsigned __int64)(unsigned __int8)v268_.v268 >> 1;
    v154 = *a2;
    v155 =
        (v268_.v268 & 1) != 0 ? v268_.v270 : (__int64*)((char*)&v268_.v268 + 1);
    v156 = (v154 & 1) == 0;
    v157 = v154 >> 1;
    v158 = v156 ? v157 : *((_QWORD*)a2 + 1);
    v159 = v156 ? (__int64)(a2 + 1) : *((_QWORD*)a2 + 2);
    v160 = v158 + 9;
    if (v158 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_467;
    }
    if (v160 >= 0x17) {
      v162 = v153;
      v163 = v155;
      v164 = v159;
      if ((v160 | 7) == 0x17) {
        v165 = 26;
      }
      else {
        v165 = (v160 | 7) + 1;
      }
      v166 =
          fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v165, 16, 0);
      v167 = v165 | 1;
      v159 = v164;
      v161 = (char*)v166;
      v155 = v163;
      v153 = v162;
      v121 = *(_QWORD*)"_Keyframe";
      v250_.v251 = v158 + 9;
      v250_.v252 = (char*)v166;
      v250_.v250 = v167;
    }
    else {
      v250_.v251 = 0;
      v250_.v252 = nullptr;
      v250_.v250 = (unsigned __int8)(2 * v160);
      v161 = (char*)&v250_.v250 + 1;
      if (v158 == 0) {
        goto LABEL_314;
      }
    }
    memmove((__int64)v161, v159, v158);
  LABEL_314:
    v168 = &v161[v158];
    *(_QWORD*)v168 = v121;
    *((_WORD*)v168 + 4) = 101;
    v169 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v250_.v250, "_", 1u);
    v171 = v169[1];
    v170 = v169[2];
    v257_.v257 = *v169;
    v257_.v258 = v171;
    v257_.v259 = (char*)v170;
    v169[1] = 0;
    v169[2] = 0;
    *v169 = 0;
    v172 = *v40;
    v173 = (v172 & 1) == 0;
    v174 = v172 >> 1;
    if (v173) {
      v175 = (const char*)(v40 + 1);
    }
    else {
      v175 = *((const char**)v40 + 2);
    }
    if (v173) {
      v176 = v174;
    }
    else {
      v176 = *((_QWORD*)v40 + 1);
    }
    v177 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v257_.v257, v175, v176);
    v179 = v177[1];
    v178 = v177[2];
    v260_.v260 = *v177;
    v260_.v261 = v179;
    v260_.v262 = (char*)v178;
    v177[1] = 0;
    v177[2] = 0;
    *v177 = 0;
    if ((v271_.v271 & 1) != 0) {
      v180 = v271_.v273;
    }
    else {
      v180 = (char*)&v271_.v271 + 1;
    }
    if ((v271_.v271 & 1) != 0) {
      v181 = v271_.v272;
    }
    else {
      v181 = (unsigned __int64)(unsigned __int8)v271_.v271 >> 1;
    }
    v182 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v260_.v260, v180, v181);
    v184 = v182[1];
    v183 = v182[2];
    v263_.v263 = *v182;
    v263_.v264 = v184;
    v263_.v265 = (char*)v183;
    v182[1] = 0;
    v182[2] = 0;
    *v182 = 0;
    if ((v263_.v263 & 1) != 0) {
      v185 = v263_.v265;
    }
    else {
      v185 = (char*)&v263_.v263 + 1;
    }
    if ((v263_.v263 & 1) != 0) {
      v186 = v263_.v264;
    }
    else {
      v186 = (unsigned __int64)(unsigned __int8)v263_.v263 >> 1;
    }
    if ((GameRoutine_aa1b50_alt1((__int64)v185, v186) & 1) != 0) {
      v277[0] = 2;
      gfxa_aa1a00((void*)(&v253_.v253), *(_QWORD*)(game_g_frame_clock + 13224),
                  (__int64)v155, v153, (__int64)v185, v186, v277);
      Settings_aa1690(v253_.v253, (__int64)v185, v186);
      v187 = v253_.v254;
      if (v253_.v254 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v253_.v254 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v187 + 16LL))(v187);
        std___1___shared_weak_count___release_weak(v187);
      }
    }
    else {
      v253_.v253 = 0;
      v253_.v254 = 0;
    }
    if ((v263_.v263 & 1) != 0 && v263_.v265 != nullptr) {
      v188 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v188 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v188, (__int64)v263_.v265);
    }
    if ((v260_.v260 & 1) != 0 && v260_.v262 != nullptr) {
      v189 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v189 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v189, (__int64)v260_.v262);
    }
    if ((v257_.v257 & 1) != 0 && v257_.v259 != nullptr) {
      v190 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v190 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v190, (__int64)v257_.v259);
    }
    if ((v250_.v250 & 1) != 0 && v250_.v252 != nullptr) {
      v191 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v191 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v191, (__int64)v250_.v252);
    }
    if ((v268_.v268 & 1) != 0 && v268_.v270 != nullptr) {
      v192 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v192 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v192, (__int64)v268_.v270);
    }
  }
  if (v246 == 0) {
    goto LABEL_456;
  }
  v193 = *(unsigned __int8*)(a1 + 472);
  v194 = (v193 & 1) == 0;
  v195 = v193 >> 1;
  if (v194) {
    v196 = v195;
  }
  else {
    v196 = *(_QWORD*)(a1 + 480);
  }
  if (v194) {
    v197 = a1 + 473;
  }
  else {
    v197 = *(_QWORD*)(a1 + 488);
  }
  if ((v274_.v274 & 1) != 0) {
    v198 = v274_.v275;
  }
  else {
    v198 = (unsigned __int64)(unsigned __int8)v274_.v274 >> 1;
  }
  if ((v274_.v274 & 1) != 0) {
    v199 = v274_.v276;
  }
  else {
    v199 = (char*)&v274_.v274 + 1;
  }
  v200 = v198 + v196;
  if (v198 + v196 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_467;
  }
  if (v200 > 0x16) {
    if ((v200 | 7) == 0x17) {
      v203 = 26;
    }
    else {
      v203 = (v200 | 7) + 1;
    }
    v202 = (__int64*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v203, 16, 0);
    v268_.v269 = v198 + v196;
    v268_.v270 = v202;
    v268_.v268 = v203 | 1;
    v201 = v203 | 1;
  }
  else {
    v201 = 2 * v200;
    v202 = nullptr;
    v268_.v269 = 0;
    v268_.v270 = nullptr;
    v268_.v268 = (unsigned __int8)(2 * v200);
  }
  if ((v201 & 1) != 0) {
    v204 = (char*)v202;
  }
  else {
    v204 = (char*)&v268_.v268 + 1;
  }
  if (v196 != 0) {
    memmove((__int64)v204, v197, v196);
  }
  v205 = (__int64)&v204[v196];
  if (v198 != 0) {
    memmove(v205, (__int64)v199, v198);
  }
  *(_BYTE*)(v205 + v198) = 0;
  v206 = (v268_.v268 & 1) != 0
             ? v268_.v269
             : (unsigned __int64)(unsigned __int8)v268_.v268 >> 1;
  v207 = *a2;
  v208 =
      (v268_.v268 & 1) != 0 ? v268_.v270 : (__int64*)((char*)&v268_.v268 + 1);
  v209 = (v207 & 1) == 0;
  v210 = v207 >> 1;
  v211 = v209 ? v210 : *((_QWORD*)a2 + 1);
  v212 = v209 ? (__int64)(a2 + 1) : *((_QWORD*)a2 + 2);
  v213 = v211 + 1;
  if (v211 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_467:
    String_60a1d0();
  }
  if (v213 >= 0x17) {
    if ((v213 | 7) == 0x17) {
      v215 = 26;
    }
    else {
      v215 = (v213 | 7) + 1;
    }
    v214 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v215,
                                                 16, 0);
    v250_.v251 = v211 + 1;
    v250_.v252 = v214;
    v250_.v250 = v215 | 1;
    goto LABEL_409;
  }
  v250_.v251 = 0;
  v250_.v252 = nullptr;
  v250_.v250 = (unsigned __int8)(2 * v213);
  v214 = (char*)&v250_.v250 + 1;
  if (v211 != 0) {
  LABEL_409:
    memmove((__int64)v214, v212, v211);
  }
  *(_WORD*)&v214[v211] = 95;
  v216 = a2[96];
  v217 = (v216 & 1) == 0;
  v218 = v216 >> 1;
  if (v217) {
    v219 = (const char*)(a2 + 97);
  }
  else {
    v219 = *((const char**)a2 + 14);
  }
  if (v217) {
    v220 = v218;
  }
  else {
    v220 = *((_QWORD*)a2 + 13);
  }
  v221 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v250_.v250, v219, v220);
  v223 = v221[1];
  v222 = v221[2];
  v257_.v257 = *v221;
  v257_.v258 = v223;
  v257_.v259 = (char*)v222;
  v221[1] = 0;
  v221[2] = 0;
  *v221 = 0;
  v224 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v257_.v257, "_", 1u);
  v226 = v224[1];
  v225 = v224[2];
  v260_.v260 = *v224;
  v260_.v261 = v226;
  v260_.v262 = (char*)v225;
  v224[1] = 0;
  v224[2] = 0;
  *v224 = 0;
  v227 = *v40;
  v228 = (v227 & 1) == 0;
  v229 = v227 >> 1;
  if (v228) {
    v230 = (const char*)(v40 + 1);
  }
  else {
    v230 = *((const char**)v40 + 2);
  }
  if (v228) {
    v231 = v229;
  }
  else {
    v231 = *((_QWORD*)v40 + 1);
  }
  v232 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)&v260_.v260, v230, v231);
  v234 = v232[1];
  v233 = v232[2];
  v235 = *v232;
  v277[0] = 1;
  v263_.v263 = v235;
  v263_.v264 = v234;
  v263_.v265 = (char*)v233;
  v232[1] = 0;
  v232[2] = 0;
  *v232 = 0;
  if ((v263_.v263 & 1) != 0) {
    v236 = v263_.v264;
  }
  else {
    v236 = (unsigned __int64)(unsigned __int8)v263_.v263 >> 1;
  }
  if ((v263_.v263 & 1) != 0) {
    v237 = v263_.v265;
  }
  else {
    v237 = (char*)&v263_.v263 + 1;
  }
  gfxa_aa1540((void*)(&v248_.v248),
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v208,
              v206, (__int64)v237, v236, v277);
  Settings_aa1690(v248_.v248, (__int64)v237, v236);
  v238 = v248_.v249;
  if (v248_.v249 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v248_.v249 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v238 + 16LL))(v238);
    std___1___shared_weak_count___release_weak(v238);
    if ((v263_.v263 & 1) != 0) {
    LABEL_431:
      if (v263_.v265 != nullptr) {
        v239 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v239 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v239, (__int64)v263_.v265);
      }
    }
  }
  else if ((v263_.v263 & 1) != 0) {
    goto LABEL_431;
  }
  if ((v260_.v260 & 1) != 0 && v260_.v262 != nullptr) {
    v240 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v240 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v240,
                                  (__int64)v260_.v262);
  }
  if ((v257_.v257 & 1) != 0 && v257_.v259 != nullptr) {
    v241 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v241 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v241,
                                  (__int64)v257_.v259);
  }
  if ((v250_.v250 & 1) != 0 && v250_.v252 != nullptr) {
    v242 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v242 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v242,
                                  (__int64)v250_.v252);
  }
  if ((v268_.v268 & 1) != 0 && v268_.v270 != nullptr) {
    v243 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v243 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v243,
                                  (__int64)v268_.v270);
  }
LABEL_456:
  if ((v271_.v271 & 1) != 0 && v271_.v273 != nullptr) {
    v244 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v244 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v244,
                                  (__int64)v271_.v273);
  }
  if ((v274_.v274 & 1) != 0 && v274_.v276 != nullptr) {
    v245 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v245 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v245,
                                  (__int64)v274_.v276);
  }
}

unsigned __int64 GameHr_c6dc40(__int64 a1, __int64 a2)
{
  unsigned __int64 v2;
  __int64* v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 result;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  __int64* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  _DWORD* v39;
  unsigned __int64* v40;
  unsigned __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  bool v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64* v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  char* v57;
  bool v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  char* v61;
  unsigned __int64 v62;
  char* v63;
  __int64 v64;
  char* v65;
  unsigned __int64 v66;
  char* v67;
  unsigned __int64 v68;
  __int64* v69;
  char* v70;
  unsigned __int64 v71;
  __int64* v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  unsigned __int64 v80;
  bool v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  char* v86;
  __int64 v87;
  char* v88;
  unsigned __int64 v89;
  char* v90;
  unsigned __int64 v91;
  bool v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  char* v95;
  unsigned __int64 v96;
  char* v97;
  __int64 v98;
  char* v99;
  unsigned __int64 v100;
  char* v101;
  unsigned __int64 v102;
  __int64* v103;
  char* v104;
  unsigned __int64 v105;
  char* v106;
  unsigned __int64 v107;
  __int64* v108;
  char* v109;
  unsigned __int64 v110;
  char* v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  bool v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  char* v124;
  __int64 v125;
  char* v126;
  unsigned __int64 v127;
  char* v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  bool v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  char* v134;
  unsigned __int64 v135;
  char* v136;
  __int64 v137;
  char* v138;
  unsigned __int64 v139;
  __int64* v140;
  char* v141;
  unsigned __int64 v142;
  char* v143;
  unsigned __int64 v144;
  char* v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  __int64 v153;
  bool v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  char* v159;
  __int64 v160;
  char* v161;
  unsigned __int64 v162;
  char* v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  bool v166;
  unsigned __int64 v167;
  unsigned __int64 v168;
  char* v169;
  unsigned __int64 v170;
  char* v171;
  __int64 v172;
  char* v173;
  unsigned __int64 v174;
  __int64* v175;
  char* v176;
  __int64 v177;
  char* v178;
  unsigned __int64 v179;
  __int64* v180;
  char* v181;
  unsigned __int64 v182;
  char* v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  _QWORD v193[2];
  __int64 v194;
  char* v195;
  unsigned __int64 v196;
  _QWORD* v197;
  __int64 v198;
  unsigned __int64 v199;
  char* v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  char* v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  char* v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  unsigned __int64 v216;
  char* v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  unsigned __int64 v221;
  char* v222;
  __int64 v223;
  unsigned __int64 v224;
  char* v225;
  __int64 v226;
  unsigned __int64 v227;
  char* v228;
  int v229[3];

  v3 = (__int64*)(a2 + 24);
  v2 = *(unsigned __int8*)(a2 + 24);
  v5 = *(unsigned __int8*)(a2 + 48);
  if ((v5 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 56);
  }
  else {
    v6 = v5 >> 1;
  }
  if ((v2 & 1) != 0) {
    v7 = *(_QWORD*)(a2 + 32);
  }
  else {
    v7 = v2 >> 1;
  }
  v196 = v7;
  v197 = (_QWORD*)a2;
  v8 = *((_QWORD*)&GameData_1fd2d60 + *(int*)(a2 + 220));
  result = GameRoutine_1a09c70(v8);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_406;
  }
  v10 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (result | 7) + 1;
    }
    v11 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v12, 16, 0);
    v224 = v10;
    v225 = v11;
    v223 = v12 | 1;
  }
  else {
    LOBYTE(v223) = 2 * result;
    v11 = (char*)&v223 + 1;
    if (result == 0) {
      goto LABEL_16;
    }
  }
  GameRoutine_1a0b940(v11, v8, v10);
LABEL_16:
  v11[v10] = 0;
  v13 = (__int64*)GameRoutine_1a09ce0(&v223, "_Keyframe", 9);
  v15 = v13[1];
  v14 = (char*)v13[2];
  v226 = *v13;
  v227 = v15;
  v228 = v14;
  v13[1] = 0;
  v13[2] = 0;
  *v13 = 0;
  if ((v223 & 1) != 0 && v225 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v16 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v16, v225);
  }
  if ((*(_BYTE*)v3 & 1) != 0) {
    GameRoutine_60a270(&v220, v197[5], v197[4]);
  }
  else {
    v17 = v3[1];
    v220 = *v3;
    v221 = v17;
    v222 = (char*)v3[2];
  }
  result = GameRoutine_1a0a680(&v220, 0, "__", 2);
  v19 = *(_QWORD*)(result + 8);
  v18 = *(char**)(result + 16);
  v223 = *(_QWORD*)result;
  v224 = v19;
  v225 = v18;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  if ((v220 & 1) != 0 && v222 != nullptr) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v20 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v20, v222);
  }
  v21 = GameData_212c010[0];
  if (v6 != 0) {
    v22 = *(unsigned __int8*)(a1 + 64);
    v23 = (v22 & 1) == 0;
    v24 = v22 >> 1;
    if (v23) {
      v25 = v24;
    }
    else {
      v25 = *(_QWORD*)(a1 + 72);
    }
    if (v23) {
      v26 = a1 + 65;
    }
    else {
      v26 = *(_QWORD*)(a1 + 80);
    }
    v27 = v25 + 17;
    if (v25 + 17 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_406;
    }
    if (v27 >= 0x17) {
      if ((v27 | 7) == 0x17) {
        v29 = 26;
      }
      else {
        v29 = (v27 | 7) + 1;
      }
      v28 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v29, 16, 0);
      v221 = v25 + 17;
      v222 = v28;
      v220 = v29 | 1;
    }
    else {
      v221 = 0;
      v222 = nullptr;
      v220 = (unsigned __int8)(2 * v27);
      v28 = (char*)&v220 + 1;
      if (v25 == 0) {
      LABEL_45:
        strcpy(&v28[v25], "_Weather_Keyframe");
        if ((v220 & 1) != 0) {
          v30 = v221;
        }
        else {
          v30 = (unsigned __int64)(unsigned __int8)v220 >> 1;
        }
        if ((v220 & 1) != 0) {
          v31 = v222;
        }
        else {
          v31 = (char*)&v220 + 1;
        }
        if ((v226 & 1) != 0) {
          v32 = v227;
        }
        else {
          v32 = (unsigned __int64)(unsigned __int8)v226 >> 1;
        }
        if ((v226 & 1) != 0) {
          v33 = v228;
        }
        else {
          v33 = (char*)&v226 + 1;
        }
        v34 = v32 + 7;
        if (v32 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_406;
        }
        if (v34 > 0x16) {
          if ((v34 | 7) == 0x17) {
            v37 = 26;
          }
          else {
            v37 = (v34 | 7) + 1;
          }
          v36 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v37, 16, 0);
          v216 = v32 + 7;
          v217 = (char*)v36;
          v215 = v37 | 1;
          v35 = v37 | 1;
        }
        else {
          v35 = 2 * v34;
          v36 = 0;
          v216 = 0;
          v217 = nullptr;
          v215 = (unsigned __int8)(2 * v34);
        }
        v38 = (v35 & 1) == 0;
        if ((v35 & 1) != 0) {
          v39 = (_DWORD*)v36;
        }
        else {
          v39 = (_DWORD*)((char*)&v215 + 1);
        }
        *(_DWORD*)((char*)v39 + 3) = 796157299;
        *v39 = 1936028240;
        if (v38) {
          v40 = &v216;
        }
        else {
          v40 = (unsigned __int64*)(v36 + 7);
        }
        if (v32 != 0) {
          GameRoutine_1a0b940(v40, v33, v32);
        }
        *((_BYTE*)v40 + v32) = 0;
        if ((v215 & 1) != 0) {
          v41 = v216;
        }
        else {
          v41 = (unsigned __int64)(unsigned __int8)v215 >> 1;
        }
        if ((v215 & 1) != 0) {
          v42 = v217;
        }
        else {
          v42 = (char*)&v215 + 1;
        }
        LODWORD(v210) = 2;
        GameRoutine_aa1a00((void*)&v218, *(_QWORD*)(*v21 + 13224), v31, v30,
                           v42, v41, &v210);
        result = GameRoutine_aa1690(v218, v42, v41);
        v43 = v219;
        if (v219 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v219 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
          result = GameRoutine_1a09c50(v43);
          if ((v215 & 1) != 0) {
          LABEL_81:
            if (v217 != nullptr) {
              v44 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v44 = 56;
              }
              result =
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v44, v217);
            }
          }
        }
        else if ((v215 & 1) != 0) {
          goto LABEL_81;
        }
        if ((v220 & 1) != 0 && v222 != nullptr) {
          v45 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v45 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v45, v222);
        }
        goto LABEL_91;
      }
    }
    result = GameRoutine_1a0b940(v28, v26, v25);
    goto LABEL_45;
  }
LABEL_91:
  v46 = *(unsigned __int8*)(a1 + 88);
  v47 = (v46 & 1) == 0;
  v48 = v46 >> 1;
  if (v47) {
    v49 = v48;
  }
  else {
    v49 = *(_QWORD*)(a1 + 96);
  }
  if (v47) {
    v50 = a1 + 89;
  }
  else {
    v50 = *(_QWORD*)(a1 + 104);
  }
  v51 = v49 + 17;
  if (v49 + 17 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_406;
  }
  v194 = a1 + 89;
  v52 = v21;
  if (v51 >= 0x17) {
    if ((v51 | 7) == 0x17) {
      v54 = 26;
    }
    else {
      v54 = (v51 | 7) + 1;
    }
    v53 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v54, 16, 0);
    v221 = v49 + 17;
    v222 = v53;
    v220 = v54 | 1;
    goto LABEL_105;
  }
  v221 = 0;
  v222 = nullptr;
  v220 = (unsigned __int8)(2 * v51);
  v53 = (char*)&v220 + 1;
  if (v49 != 0) {
  LABEL_105:
    result = GameRoutine_1a0b940(v53, v50, v49);
  }
  strcpy(&v53[v49], "_Weather_Keyframe");
  if ((v220 & 1) != 0) {
    v55 = v221;
  }
  else {
    v55 = (unsigned __int64)(unsigned __int8)v220 >> 1;
  }
  v56 = *(unsigned __int8*)v197;
  if ((v220 & 1) != 0) {
    v57 = v222;
  }
  else {
    v57 = (char*)&v220 + 1;
  }
  v58 = (v56 & 1) == 0;
  v59 = v56 >> 1;
  if (v58) {
    v60 = v59;
  }
  else {
    v60 = v197[1];
  }
  if (v58) {
    v61 = (char*)v197 + 1;
  }
  else {
    v61 = (char*)v197[2];
  }
  v62 = v60 + 1;
  if (v60 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_406;
  }
  qmemcpy(v193, "_Keyfram_Weather", sizeof(v193));
  if (v62 >= 0x17) {
    if ((v62 | 7) == 0x17) {
      v64 = 26;
    }
    else {
      v64 = (v62 | 7) + 1;
    }
    v63 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v64, 16, 0);
    v211 = v60 + 1;
    v212 = v63;
    v210 = v64 | 1;
    goto LABEL_126;
  }
  v211 = 0;
  v212 = nullptr;
  v210 = (unsigned __int8)(2 * v62);
  v63 = (char*)&v210 + 1;
  if (v60 != 0) {
  LABEL_126:
    GameRoutine_1a0b940(v63, v61, v60);
  }
  v66 = v227;
  v65 = v228;
  *(_WORD*)&v63[v60] = 95;
  if ((v226 & 1) != 0) {
    v67 = v65;
  }
  else {
    v67 = (char*)&v226 + 1;
  }
  if ((v226 & 1) != 0) {
    v68 = v66;
  }
  else {
    v68 = (unsigned __int64)(unsigned __int8)v226 >> 1;
  }
  v69 = (__int64*)GameRoutine_1a09ce0(&v210, v67, v68);
  v71 = v69[1];
  v70 = (char*)v69[2];
  v72 = v52;
  v215 = *v69;
  v216 = v71;
  v217 = v70;
  v69[1] = 0;
  v69[2] = 0;
  *v69 = 0;
  if ((v215 & 1) != 0) {
    v73 = v216;
  }
  else {
    v73 = (unsigned __int64)(unsigned __int8)v215 >> 1;
  }
  if ((v215 & 1) != 0) {
    v74 = v217;
  }
  else {
    v74 = (char*)&v215 + 1;
  }
  LODWORD(v205) = 2;
  GameRoutine_aa1a00((void*)&v213, *(_QWORD*)(*v52 + 13224), v57, v55, v74, v73,
                     &v205);
  result = GameRoutine_aa1690(v213, v74, v73);
  v75 = v214;
  if (v214 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v214 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
    result = GameRoutine_1a09c50(v75);
    if ((v215 & 1) == 0) {
      goto LABEL_147;
    }
  }
  else if ((v215 & 1) == 0) {
    goto LABEL_147;
  }
  if (v217 != nullptr) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v76 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v76, v217);
  }
LABEL_147:
  if ((v210 & 1) != 0 && v212 != nullptr) {
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v77 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v77, v212);
  }
  if ((v220 & 1) != 0 && v222 != nullptr) {
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v78 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v78, v222);
  }
  v79 = (char*)v197 + 1;
  v195 = (char*)v197 + 1;
  if (v196 != 0) {
    v80 = *(unsigned __int8*)(a1 + 112);
    v81 = (v80 & 1) == 0;
    v82 = v80 >> 1;
    if (v81) {
      v83 = v82;
    }
    else {
      v83 = *(_QWORD*)(a1 + 120);
    }
    if (v81) {
      v84 = a1 + 113;
    }
    else {
      v84 = *(_QWORD*)(a1 + 128);
    }
    v85 = v83 + 17;
    if (v83 + 17 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_406;
    }
    if (v85 >= 0x17) {
      if ((v85 | 7) == 0x17) {
        v87 = 26;
      }
      else {
        v87 = (v85 | 7) + 1;
      }
      v86 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v87, 16, 0);
      v221 = v83 + 17;
      v222 = v86;
      v220 = v87 | 1;
    }
    else {
      v221 = 0;
      v222 = nullptr;
      v220 = (unsigned __int8)(2 * v85);
      v86 = (char*)&v220 + 1;
      if (v83 == 0) {
      LABEL_173:
        v88 = &v86[v83];
        *(_QWORD*)v88 = v193[1];
        *((_QWORD*)v88 + 1) = v193[0];
        *((_WORD*)v88 + 8) = 101;
        if ((v220 & 1) != 0) {
          v89 = v221;
        }
        else {
          v89 = (unsigned __int64)(unsigned __int8)v220 >> 1;
        }
        if ((v220 & 1) != 0) {
          v90 = v222;
        }
        else {
          v90 = (char*)&v220 + 1;
        }
        v91 = *(unsigned __int8*)v197;
        v92 = (v91 & 1) == 0;
        v93 = v91 >> 1;
        if (v92) {
          v94 = v93;
        }
        else {
          v94 = v197[1];
        }
        if (v92) {
          v95 = v79;
        }
        else {
          v95 = (char*)v197[2];
        }
        v96 = v94 + 1;
        if (v94 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_406;
        }
        if (v96 >= 0x17) {
          if ((v96 | 7) == 0x17) {
            v98 = 26;
          }
          else {
            v98 = (v96 | 7) + 1;
          }
          v97 =
              (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v98, 16, 0);
          v206 = v94 + 1;
          v207 = v97;
          v205 = v98 | 1;
        }
        else {
          v206 = 0;
          v207 = nullptr;
          v205 = (unsigned __int8)(2 * v96);
          v97 = (char*)&v205 + 1;
          if (v94 == 0) {
            goto LABEL_194;
          }
        }
        GameRoutine_1a0b940(v97, v95, v94);
      LABEL_194:
        v100 = v227;
        v99 = v228;
        *(_WORD*)&v97[v94] = 95;
        if ((v226 & 1) != 0) {
          v101 = v99;
        }
        else {
          v101 = (char*)&v226 + 1;
        }
        if ((v226 & 1) != 0) {
          v102 = v100;
        }
        else {
          v102 = (unsigned __int64)(unsigned __int8)v226 >> 1;
        }
        v103 = (__int64*)GameRoutine_1a09ce0(&v205, v101, v102);
        v105 = v103[1];
        v104 = (char*)v103[2];
        v210 = *v103;
        v211 = v105;
        v212 = v104;
        v103[1] = 0;
        v103[2] = 0;
        *v103 = 0;
        if ((v223 & 1) != 0) {
          v106 = v225;
        }
        else {
          v106 = (char*)&v223 + 1;
        }
        if ((v223 & 1) != 0) {
          v107 = v224;
        }
        else {
          v107 = (unsigned __int64)(unsigned __int8)v223 >> 1;
        }
        v108 = (__int64*)GameRoutine_1a09ce0(&v210, v106, v107);
        v110 = v108[1];
        v109 = (char*)v108[2];
        v215 = *v108;
        v216 = v110;
        v217 = v109;
        v108[1] = 0;
        v108[2] = 0;
        *v108 = 0;
        if ((v215 & 1) != 0) {
          v111 = v217;
        }
        else {
          v111 = (char*)&v215 + 1;
        }
        if ((v215 & 1) != 0) {
          v112 = v216;
        }
        else {
          v112 = (unsigned __int64)(unsigned __int8)v215 >> 1;
        }
        result = GameRoutine_aa1b50(v111, v112);
        v79 = v195;
        if ((result & 1) != 0) {
          LODWORD(v198) = 2;
          GameRoutine_aa1a00((void*)&v208, *(_QWORD*)(*v72 + 13224), v90, v89,
                             v111, v112, &v198);
          result = GameRoutine_aa1690(v208, v111, v112);
          v113 = v209;
          if (v209 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v209 + 8),
                                            0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v113 + 16LL))(v113);
            result = GameRoutine_1a09c50(v113);
          }
        }
        else {
          v208 = 0;
          v209 = 0;
        }
        if ((v215 & 1) != 0 && v217 != nullptr) {
          v114 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v114 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v114, v217);
        }
        if ((v210 & 1) != 0 && v212 != nullptr) {
          v115 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v115 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v115, v212);
        }
        if ((v205 & 1) != 0 && v207 != nullptr) {
          v116 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v116 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v116, v207);
        }
        if ((v220 & 1) != 0 && v222 != nullptr) {
          v117 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v117 = 56;
          }
          result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v117, v222);
        }
        goto LABEL_237;
      }
    }
    result = GameRoutine_1a0b940(v86, v84, v83);
    goto LABEL_173;
  }
LABEL_237:
  v118 = *(unsigned __int8*)(a1 + 88);
  v119 = (v118 & 1) == 0;
  v120 = v118 >> 1;
  if (v119) {
    v121 = v120;
  }
  else {
    v121 = *(_QWORD*)(a1 + 96);
  }
  if (v119) {
    v122 = v194;
  }
  else {
    v122 = *(_QWORD*)(a1 + 104);
  }
  v123 = v121 + 5;
  if (v121 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_406;
  }
  if (v123 >= 0x17) {
    if ((v123 | 7) == 0x17) {
      v125 = 26;
    }
    else {
      v125 = (v123 | 7) + 1;
    }
    v124 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v125, 16, 0);
    v216 = v121 + 5;
    v217 = v124;
    v215 = v125 | 1;
    goto LABEL_251;
  }
  v216 = 0;
  v217 = nullptr;
  v215 = (unsigned __int8)(2 * v123);
  v124 = (char*)&v215 + 1;
  if (v121 != 0) {
  LABEL_251:
    GameRoutine_1a0b940(v124, v122, v121);
  }
  strcpy(&v124[v121], "_Bmap");
  result = GameRoutine_1a09ce0(&v215, "_Weather_Keyframe", 17);
  v127 = *(_QWORD*)(result + 8);
  v126 = *(char**)(result + 16);
  v220 = *(_QWORD*)result;
  v221 = v127;
  v222 = v126;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  if ((v220 & 1) != 0) {
    v128 = v222;
  }
  else {
    v128 = (char*)&v220 + 1;
  }
  if ((v220 & 1) != 0) {
    v129 = v221;
  }
  else {
    v129 = (unsigned __int64)(unsigned __int8)v220 >> 1;
  }
  v130 = *(unsigned __int8*)v197;
  v131 = (v130 & 1) == 0;
  v132 = v130 >> 1;
  if (v131) {
    v133 = v132;
  }
  else {
    v133 = v197[1];
  }
  if (v131) {
    v134 = v79;
  }
  else {
    v134 = (char*)v197[2];
  }
  v135 = v133 + 6;
  if (v133 + 6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_406;
  }
  if (v135 >= 0x17) {
    if ((v135 | 7) == 0x17) {
      v137 = 26;
    }
    else {
      v137 = (v135 | 7) + 1;
    }
    v136 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v137, 16, 0);
    v206 = v133 + 6;
    v207 = v136;
    v205 = v137 | 1;
    goto LABEL_272;
  }
  v206 = 0;
  v207 = nullptr;
  v205 = (unsigned __int8)(2 * v135);
  v136 = (char*)&v205 + 1;
  if (v133 != 0) {
  LABEL_272:
    GameRoutine_1a0b940(v136, v134, v133);
  }
  strcpy(&v136[v133], "_Bmap_");
  if ((v226 & 1) != 0) {
    v138 = v228;
  }
  else {
    v138 = (char*)&v226 + 1;
  }
  if ((v226 & 1) != 0) {
    v139 = v227;
  }
  else {
    v139 = (unsigned __int64)(unsigned __int8)v226 >> 1;
  }
  v140 = (__int64*)GameRoutine_1a09ce0(&v205, v138, v139);
  v142 = v140[1];
  v141 = (char*)v140[2];
  v210 = *v140;
  v211 = v142;
  v212 = v141;
  v140[1] = 0;
  v140[2] = 0;
  *v140 = 0;
  if ((v210 & 1) != 0) {
    v143 = v212;
  }
  else {
    v143 = (char*)&v210 + 1;
  }
  if ((v210 & 1) != 0) {
    v144 = v211;
  }
  else {
    v144 = (unsigned __int64)(unsigned __int8)v210 >> 1;
  }
  result = GameRoutine_aa1b50(v143, v144);
  v145 = v195;
  if ((result & 1) != 0) {
    LODWORD(v198) = 2;
    GameRoutine_aa1a00((void*)&v203, *(_QWORD*)(*v72 + 13224), v128, v129, v143,
                       v144, &v198);
    result = GameRoutine_aa1690(v203, v143, v144);
    v146 = v204;
    if (v204 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v204 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v146 + 16LL))(v146);
      result = GameRoutine_1a09c50(v146);
    }
  }
  else {
    v203 = 0;
    v204 = 0;
  }
  if ((v210 & 1) != 0 && v212 != nullptr) {
    v147 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v147 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v147, v212);
  }
  if ((v205 & 1) != 0 && v207 != nullptr) {
    v148 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v148 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v148, v207);
  }
  if ((v220 & 1) != 0 && v222 != nullptr) {
    v149 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v149 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v149, v222);
  }
  if ((v215 & 1) != 0 && v217 != nullptr) {
    v150 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v150 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v150, v217);
  }
  if (v196 != 0) {
    v151 = *(unsigned __int8*)(a1 + 112);
    v152 = *(_QWORD*)(a1 + 128);
    v153 = a1 + 113;
    v154 = (v151 & 1) == 0;
    v155 = v151 >> 1;
    if (v154) {
      v156 = v155;
    }
    else {
      v156 = *(_QWORD*)(a1 + 120);
    }
    if (v154) {
      v157 = v153;
    }
    else {
      v157 = v152;
    }
    v158 = v156 + 5;
    if (v156 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_406;
    }
    if (v158 >= 0x17) {
      if ((v158 | 7) == 0x17) {
        v160 = 26;
      }
      else {
        v160 = (v158 | 7) + 1;
      }
      v159 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v160, 16, 0);
      v216 = v156 + 5;
      v217 = v159;
      v215 = v160 | 1;
    }
    else {
      v216 = 0;
      v217 = nullptr;
      v215 = (unsigned __int8)(2 * v158);
      v159 = (char*)&v215 + 1;
      if (v156 == 0) {
      LABEL_326:
        strcpy(&v159[v156], "_Bmap");
        result = GameRoutine_1a09ce0(&v215, "_Weather_Keyframe", 17);
        v162 = *(_QWORD*)(result + 8);
        v161 = *(char**)(result + 16);
        v220 = *(_QWORD*)result;
        v221 = v162;
        v222 = v161;
        *(_QWORD*)(result + 8) = 0;
        *(_QWORD*)(result + 16) = 0;
        *(_QWORD*)result = 0;
        if ((v220 & 1) != 0) {
          v163 = v222;
        }
        else {
          v163 = (char*)&v220 + 1;
        }
        if ((v220 & 1) != 0) {
          v164 = v221;
        }
        else {
          v164 = (unsigned __int64)(unsigned __int8)v220 >> 1;
        }
        v165 = *(unsigned __int8*)v197;
        v166 = (v165 & 1) == 0;
        v167 = v165 >> 1;
        if (v166) {
          v168 = v167;
        }
        else {
          v168 = v197[1];
        }
        if (v166) {
          v169 = v145;
        }
        else {
          v169 = (char*)v197[2];
        }
        v170 = v168 + 6;
        if (v168 + 6 < 0xFFFFFFFFFFFFFFF7LL) {
          if (v170 >= 0x17) {
            if ((v170 | 7) == 0x17) {
              v172 = 26;
            }
            else {
              v172 = (v170 | 7) + 1;
            }
            v171 = (char*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, v172,
                                             16, 0);
            v199 = v168 + 6;
            v200 = v171;
            v198 = v172 | 1;
          }
          else {
            v199 = 0;
            v200 = nullptr;
            v198 = (unsigned __int8)(2 * v170);
            v171 = (char*)&v198 + 1;
            if (v168 == 0) {
              goto LABEL_347;
            }
          }
          GameRoutine_1a0b940(v171, v169, v168);
        LABEL_347:
          strcpy(&v171[v168], "_Bmap_");
          if ((v226 & 1) != 0) {
            v173 = v228;
          }
          else {
            v173 = (char*)&v226 + 1;
          }
          if ((v226 & 1) != 0) {
            v174 = v227;
          }
          else {
            v174 = (unsigned __int64)(unsigned __int8)v226 >> 1;
          }
          v175 = (__int64*)GameRoutine_1a09ce0(&v198, v173, v174);
          v177 = v175[1];
          v176 = (char*)v175[2];
          v205 = *v175;
          v206 = v177;
          v207 = v176;
          v175[1] = 0;
          v175[2] = 0;
          *v175 = 0;
          if ((v223 & 1) != 0) {
            v178 = v225;
          }
          else {
            v178 = (char*)&v223 + 1;
          }
          if ((v223 & 1) != 0) {
            v179 = v224;
          }
          else {
            v179 = (unsigned __int64)(unsigned __int8)v223 >> 1;
          }
          v180 = (__int64*)GameRoutine_1a09ce0(&v205, v178, v179);
          v182 = v180[1];
          v181 = (char*)v180[2];
          v210 = *v180;
          v211 = v182;
          v212 = v181;
          v180[1] = 0;
          v180[2] = 0;
          *v180 = 0;
          if ((v210 & 1) != 0) {
            v183 = v212;
          }
          else {
            v183 = (char*)&v210 + 1;
          }
          if ((v210 & 1) != 0) {
            v184 = v211;
          }
          else {
            v184 = (unsigned __int64)(unsigned __int8)v210 >> 1;
          }
          result = GameRoutine_aa1b50(v183, v184);
          if ((result & 1) != 0) {
            v229[0] = 2;
            GameRoutine_aa1540((void*)&v201, *(_QWORD*)(*v72 + 13224), v163,
                               v164, v183, v184, v229);
            result = GameRoutine_aa1690(v201, v183, v184);
            v185 = v202;
            if (v202 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v202 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v185 + 16LL))(v185);
              result = GameRoutine_1a09c50(v185);
            }
          }
          else {
            v201 = 0;
            v202 = 0;
          }
          if ((v210 & 1) != 0 && v212 != nullptr) {
            v186 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v186 = 56;
            }
            result =
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v186, v212);
          }
          if ((v205 & 1) != 0 && v207 != nullptr) {
            v187 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v187 = 56;
            }
            result =
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v187, v207);
          }
          if ((v198 & 1) != 0 && v200 != nullptr) {
            v188 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v188 = 56;
            }
            result =
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v188, v200);
          }
          if ((v220 & 1) != 0 && v222 != nullptr) {
            v189 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v189 = 56;
            }
            result =
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v189, v222);
          }
          if ((v215 & 1) != 0 && v217 != nullptr) {
            v190 = 128;
            if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
              v190 = 56;
            }
            result =
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v190, v217);
          }
          goto LABEL_395;
        }
      LABEL_406:
        GameRoutine_60a1d0(result);
      }
    }
    GameRoutine_1a0b940(v159, v157, v156);
    goto LABEL_326;
  }
LABEL_395:
  if ((v223 & 1) != 0 && v225 != nullptr) {
    v191 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v191 = 56;
    }
    result = GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v191, v225);
  }
  if ((v226 & 1) != 0 && v228 != nullptr) {
    v192 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v192 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v192, v228);
  }
  return result;
}

#pragma GCC visibility pop
