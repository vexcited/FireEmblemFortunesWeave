#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1fd2d60;

extern __int64 GameData_212bf68;

extern __int64* GameData_212c010[3];

__int64 GameRoutine_1a09c50(_QWORD);

__int64 GameRoutine_1a09c70(_QWORD);

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1a0a0c0(_QWORD);

__int64 GameRoutine_1a0a4e0(_QWORD, _QWORD);

__int64 GameRoutine_1a0a680(_QWORD, _QWORD, _QWORD, _QWORD);

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
