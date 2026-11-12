#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MovieRoutine_35700(__int64, int*, int);
__int64 MovieRoutine_362a0(__int64, __int16*, __int64, int, int, __int64);
__int64 MovieRoutine_3aa60(__int64, _WORD*, int, int);
__int64 MovieRoutine_3b720(__int64, __int64, int, int, _DWORD*);
__int64 _celt_autocorr(__int16*, signed int*, __int64, int, int, int);
__int64 celt_fir_c(__int64, __int64, __int64, int, int);
__int64 celt_lcg_rand(int);
__int64 celt_sqrt(__int64 result);
__int64 celt_synthesis_alt1(_DWORD*, __int64, _QWORD*, __int64, unsigned int,
                            unsigned int, int, int, int, int, unsigned int, int,
                            unsigned int) __asm__("celt_synthesis");
__int64 clt_mdct_backward_c(__int64, int*, __int16*, __int16*, int, int, int);
__int64 comb_filter(__int64 result, __int64, int, int, int, unsigned __int16,
                    unsigned __int16, int, int, __int16*, unsigned int);
__int64 denormalise_bands(__int64, __int64, int*, __int64, int, int, int, int,
                          int);
__int64 frac_div32(int, unsigned int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memmove_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 renormalise_vector(__int16*, int, __int16);
__int64 celt_decode_lost(__int64* a1, int a2, int a3);
__int64 celt_synthesis(__int16** a1, __int64 a2, int** a3, __int64 a4, int a5,
                       int a6, int a7, unsigned int a8, int a9, int a10,
                       int a11, int a12, unsigned int a13);

__int64 celt_decode_lost(__int64* a1, int a2, int a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int16* v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int16* v61;
  int v62;
  int v63;
  __int16* v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  __int64 v85;
  __int64 v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  __int64 v92;
  _WORD* v93;
  int v94;
  __int64 v95;
  int v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64* v104;
  __int64 v105;
  __int64 result;
  int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  char* v115;
  __int64* v116;
  __int64 v117;
  char* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64* v124;
  __int64 v125;
  __int64 v126;
  _DWORD* v127;
  __int64 v128;
  __int64 v129;
  _WORD* v130;
  unsigned int v131;
  unsigned int v132;
  unsigned int v133;
  unsigned int v134;
  unsigned int v135;
  unsigned int v136;
  unsigned int v137;
  unsigned int v138;
  unsigned int v139;
  unsigned int v140;
  unsigned int v141;
  unsigned int v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  unsigned int v146;
  unsigned int v147;
  unsigned int v148;
  unsigned int v149;
  unsigned int v150;
  unsigned int v151;
  unsigned int v152;
  __int64 v153;
  int v154;
  unsigned __int16 v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  int v179;
  int v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  int v195;
  int v196;
  __int64 v197;
  __int64 v198;
  char* v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  signed int v204;
  signed int v205;
  __int16* v206;
  int v207;
  signed int v208;
  signed int v209;
  signed int v210;
  signed int v211;
  signed int v212;
  signed int v213;
  signed int v214;
  char* v215;
  __int64 i;
  int v217;
  int v218;
  unsigned int v219;
  unsigned int v220;
  int v222;
  int v223;
  __int64 v224;
  char v225;
  int v226;
  unsigned int v227;
  unsigned int v228;
  __int64 v229;
  signed int v230;
  signed int v231;
  __int16* v232;
  int v233;
  signed int v234;
  signed int v235;
  signed int v236;
  signed int v237;
  signed int v238;
  signed int v239;
  signed int v240;
  char* v241;
  __int64 n;
  int v243;
  int v244;
  unsigned int v245;
  unsigned int v246;
  __int64 v247;
  int v248;
  int v249;
  int v250;
  int v251;
  unsigned int v252;
  int v253;
  unsigned int v254;
  int v255;
  int v256;
  int v257;
  unsigned int v258;
  int v259;
  unsigned int v260;
  int v261;
  int v262;
  unsigned int v263;
  int v264;
  unsigned int v265;
  unsigned int v266;
  int v267;
  int v268;
  unsigned int v269;
  int v270;
  unsigned int v271;
  int v272;
  int v273;
  unsigned int v274;
  int v275;
  int v276;
  int v277;
  int v278;
  __int64 v279;
  int v280;
  int v281;
  unsigned int v282;
  __int64 v283;
  __int16 v284;
  int v285;
  int v286;
  int v287;
  __int64 v288;
  int v289;
  unsigned int v290;
  int v291;
  unsigned int v292;
  __int64 v293;
  unsigned int* v294;
  int v295;
  int v296;
  int v297;
  int v298;
  int v299;
  int v300;
  int v301;
  unsigned int v302;
  int v303;
  int v304;
  int v305;
  int v306;
  int v307;
  unsigned int v308;
  int v309;
  int v310;
  int v311;
  int v312;
  int v313;
  int v314;
  int v315;
  unsigned int v316;
  int v317;
  __int16* v318;
  unsigned int* v319;
  __int64 v320;
  int v321;
  int v322;
  int v323;
  int v324;
  __int64 v325;
  __int64 v326;
  unsigned int v327;
  int* v328;
  int v329;
  int v330;
  int v331;
  int v332;
  int v333;
  int v334;
  int v335;
  int v336;
  int* v337;
  __int64 j;
  int v339;
  __int64 v340;
  __int64 v341;
  int* v342;
  int v343;
  unsigned int v344;
  int v345;
  unsigned int v346;
  int v347;
  unsigned int v348;
  int v349;
  unsigned int v350;
  int v351;
  unsigned int v352;
  int v353;
  int v354;
  int* v355;
  __int64 k;
  int v357;
  __int64 v358;
  __int16 v359;
  __int64 v360;
  __int64 v361;
  int v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  _DWORD* v367;
  __int64 m;
  __int16* v369;
  __int64 v370;
  int* v371;
  int v372;
  unsigned __int64 v373;
  int v374;
  int v375;
  unsigned __int64 v376;
  int v377;
  int v378;
  unsigned __int64 v379;
  int v380;
  unsigned __int64 v381;
  int v382;
  __int64 v383;
  int* v384;
  __int16* v385;
  int v386;
  __int64 v387;
  __int64 v388;
  int v389;
  int v390;
  int v391;
  __int64 v392;
  int v393;
  __int64 v394;
  bool v395;
  __int64 v396;
  __int16* v397;
  __int64 v398;
  __int16* v399;
  __int64 v400;
  int v401;
  int v402;
  int* v403;
  int v404;
  _DWORD* v405;
  int v406;
  unsigned __int64 v407;
  int v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  __int16* v412;
  char* v413;
  __int64 v414;
  int v415;
  unsigned __int64 v416;
  int v417;
  int v418;
  struct {
    __int64 v419;
    __int64 v420;
    __int64 v421;
    __int64 v422;
    char* v423;
    __int64 v424;
    __int16* v425;
    char gap104_[4];
    int v426;
    __int64 v427;
    char* v428;
    char gap128_[4];
    unsigned int v429;
    __int16* v430;
    char* v431;
    __int64 v432;
    char gap160_[4];
    int v433;
    int v434;
    int v435;
    __int64 v436;
    __int64 v437;
    __int64 v438;
    __int64 v439;
    __int64 v440;
    __int64 v441;
    __int64 v442;
    __int64 v443;
    __int64 v444;
    __int64 v445;
    __int64* v446;
    int v447;
    int v448;
    int v449;
    int v450;
    int v451;
    int v452;
    int v453;
    int v454;
    int v455;
    int v456;
    int v457;
    int v458;
    int v459;
    int v460;
    int v461;
    int v462;
    int v463;
    int v464;
    int v465;
    int v466;
    int v467;
    int v468;
    int v469;
    int v470;
    __int64 v471;
    char* v472;
    __int64 v473;
    __int64 v474;
    char* v475;
    __int64 v476;
    __int64 v477;
    __int64 v478;
    __int64 v479;
    __int64 v480;
    char gap440_[4];
    int v481;
    __int64 v482;
    __int64 v483;
    __int64 v484;
    __int64 v485;
    __int64 v486;
    char gap488_[4];
    int v487;
    __int64 v488;
    __int64 v489;
    __int64 v490;
    __int64 v491;
    _WORD* v492;
    __int64 v493;
    __int64 v494;
    __int64 v495;
    __int64 v496;
    __int64 v497;
    __int64 v498;
    __int64 v499;
    __int64 v500;
    __int64 v501;
    __int64 v502;
    __int64 v503;
    __int64 v504;
    __int64 v505;
    __int64 v506;
    __int64 v507;
    __int64 v508;
    __int64 v509;
    _DWORD* v510;
    __int64 v511;
    __int64 v512;
    __int64 v513;
    __int64 v514;
    __int64 v515;
    __int64 v516;
    __int64 v517;
    _QWORD v518[2];
    _QWORD v519[2];
    __int64 v520;
    __int64 v521;
    __int64 v522;
    __int64 v523;
    __int64 v524;
    __int64 v525;
    __int64 v526;
    __int64 v527;
    __int64 v528;
    __int64 v529;
    __int64 v530;
    __int64 v531;
    int v532;
    char gap868_[620];
    __int64 v533;
    char gap1496_[1324];
    int v534[3];
  } v419_;

  v3 = *a1;
  v419_.v519[1] = 0;
  v419_.v519[0] = 0;
  v4 = *((_DWORD*)a1 + 3);
  v5 = (unsigned int)a2;
  v6 = (__int64)a1;
  v7 = 0;
  v8 = *(int*)(v3 + 4);
  v9 = *(int*)(v3 + 8);
  v419_.v510 = (_DWORD*)v3;
  v10 = *(_QWORD*)(v3 + 24);
  LODWORD(v419_.v515) = a3;
  v419_.v518[1] = 0;
  v419_.v518[0] = 0;
  LODWORD(v419_.v512) = v4;
  v419_.v516 = (__int64)a1;
  if (v4 <= 1) {
    v11 = 1;
  }
  else {
    v11 = (unsigned int)v4;
  }
  v419_.v482 = v11;
  v419_.v514 = v10;
  v419_.v437 = v8;
  v419_.v513 = v9;
  v419_.v485 = a2;
  v12 = v11 & 7;
  v13 = (int)v8 + 2048;
  v14 = 4 * v13;
  if (v4 >= 8) {
    v15 = (__int64)a1;
    v16 = 0;
    v17 = &v419_.v522;
    v18 = &v419_.v520;
    v19 = 8284 - 4 * v419_.v485;
    v20 = 28 * v13 - 4 * v419_.v485 + 8284;
    v21 = 24 * v13 - 4 * v419_.v485 + 8284;
    v22 = 20 * v13 - 4 * v419_.v485 + 8284;
    v23 = v14 - 4 * v419_.v485 + 8284;
    v24 = 16 * v13 - 4 * v419_.v485 + 8284;
    v25 = 12 * v13 - 4 * v419_.v485 + 8284;
    v26 = 8 * v13 - 4 * v419_.v485 + 8284;
    do {
      *(v18 - 4) = v15 + v19;
      *(v18 - 3) = v15 + v23;
      *(v17 - 4) = v15 + 92;
      *(v17 - 3) = v15 + v14 + 92;
      v16 -= 8;
      *(v17 - 2) = v15 + 8 * v13 + 92;
      *(v17 - 1) = v15 + 12 * v13 + 92;
      *(v18 - 2) = v15 + v26;
      *(v18 - 1) = v15 + v25;
      *v17 = v15 + 16 * v13 + 92;
      v17[1] = v15 + 20 * v13 + 92;
      *v18 = v15 + v24;
      v18[1] = v15 + v22;
      v27 = v15 + v21;
      v17[2] = v15 + 24 * v13 + 92;
      v17[3] = v15 + 28 * v13 + 92;
      v28 = v15 + v20;
      v15 += 32 * v13;
      v17 += 8;
      v18[2] = v27;
      v18[3] = v28;
      v18 += 8;
    } while (-(__int64)((unsigned int)v11 & 0xFFFFFFF8) != v16);
    v6 = v419_.v516;
    v11 = v419_.v482;
    v7 = -v16;
  }
  if (v12 != 0) {
    v29 = &v419_.v518[v7];
    v30 = &v419_.v519[v7];
    v31 = v6 + 4 * v7 * v13;
    v32 = 8284 - 4 * v419_.v485;
    do {
      --v12;
      *v30++ = v31 + 92;
      v33 = v31 + v32;
      v31 += v14;
      *v29++ = v33;
    } while (v12 != 0);
  }
  v34 = v13 * v419_.v512;
  LODWORD(v13) = *(_DWORD*)(v6 + 24);
  v419_.v481 = *(_DWORD*)(v6 + 56);
  v35 = v419_.v481 <= 4 && (_DWORD)v13 == 0;
  v419_.v436 = v6 + 92 + 4LL * v34;
  if (v35 && *(_DWORD*)(v6 + 60) == 0) {
    v419_.v488 = (unsigned int)v419_.v437;
    v419_.v489 = v5;
    if (v419_.v481 != 0) {
      v107 = *(_DWORD*)(v6 + 52);
      v108 = 26214;
    }
    else {
      v419_.v534[0] = 0;
      memset_plt(&v419_.v520, 0, 2048);
      MovieRoutine_3aa60((__int64)v419_.v519, &v419_.v520, 2048, v419_.v512);
      v6 = v419_.v516;
      MovieRoutine_3b720((__int64)&v419_.v533, (__int64)&v419_.v520, 1328, 620,
                         v419_.v534);
      v107 = 720 - v419_.v534[0];
      v108 = 0x7FFF;
      *(_DWORD*)(v419_.v516 + 52) = 720 - v419_.v534[0];
    }
    v109 = v419_.v485;
    v110 = v419_.v437;
    v419_.v435 = v108;
    v419_.v487 = v107;
    v111 = 2 * v107;
    v112 = 4 * v419_.v437;
    v419_.v476 = -v419_.v485;
    if (v111 >= 1024) {
      v113 = 1024;
    }
    else {
      v113 = (unsigned int)v111;
    }
    memset_plt((char*)&v419_.v419 - ((v112 + 15) & 0xFFFFFFFFFFFFFFF0LL), 0,
               4 * v419_.v437);
    memset_plt(&v419_.v419 - 262, 0, 2096);
    v114 = 2LL * (int)v113;
    v419_.v473 = (__int64)&v419_.v419 - ((v114 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    memset_plt(v419_.v473, 0, v114);
    v115 = (char*)&v419_.v419 - ((v112 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    v419_.v474 = v114;
    v419_.v475 = v115;
    v116 = &v419_.v419 - 256;
    v419_.v483 = v113;
    v419_.v427 = (unsigned int)(1024 - v113);
    v117 = *((_QWORD*)v419_.v510 + 8);
    v118 = (char*)&v419_.v419 - v114 - 2096;
    v119 = v110;
    v419_.v472 = v118;
    v419_.v434 = 1024 - v419_.v487;
    v419_.v428 = (char*)&v419_.v419 + 2 * v419_.v427 - 2034;
    v419_.v471 = 4LL * (2048 - (int)v419_.v489);
    v419_.v446 = &v419_.v419 - 261;
    v419_.v479 = 2048 - (int)v419_.v489;
    v419_.v480 = v117;
    v419_.v433 = 1024 - v419_.v487 - v419_.v489 + 1024;
    v419_.v470 = 2047 - v419_.v489;
    v419_.v431 = (char*)&v419_.v419 + 2 * v419_.v427 - 2048;
    v419_.v469 = 2046 - v419_.v489;
    v419_.v468 = 2045 - v419_.v489;
    v419_.v467 = 2044 - v419_.v489;
    v419_.v466 = 2043 - v419_.v489;
    v419_.v465 = 2042 - v419_.v489;
    v419_.v464 = 2041 - v419_.v489;
    v419_.v463 = 2040 - v419_.v489;
    v419_.v462 = 2039 - v419_.v489;
    v419_.v461 = 2038 - v419_.v489;
    v419_.v460 = 2037 - v419_.v489;
    v419_.v459 = 2036 - v419_.v489;
    v419_.v458 = 2035 - v419_.v489;
    v419_.v457 = 2034 - v419_.v489;
    v419_.v456 = 2033 - v419_.v489;
    v419_.v455 = 2032 - v419_.v489;
    v419_.v454 = 2031 - v419_.v489;
    v419_.v453 = 2030 - v419_.v489;
    v419_.v452 = 2029 - v419_.v489;
    v419_.v451 = 2028 - v419_.v489;
    v419_.v450 = 2027 - v419_.v489;
    v419_.v449 = 2026 - v419_.v489;
    v419_.v448 = 2025 - v419_.v489;
    v419_.v447 = 2024 - v419_.v489;
    v419_.v444 = (unsigned int)((int)v113 >> 1);
    v419_.v445 = -(__int64)((unsigned int)v113 & 0xFFFFFFF8);
    v419_.v426 = 1024 - v419_.v444;
    v419_.v424 = -(__int64)(((_DWORD)v110 + (_DWORD)v419_.v489) & 0x7FFFFFFC);
    v419_.v484 = 0x2000 - 4 * v109;
    v419_.v443 = (int)v110 + (int)v419_.v489;
    v419_.v478 = ((int)v110 + (int)v419_.v489) & 3LL;
    v419_.v491 = ((int)v110 + (int)v419_.v489) & 7LL;
    v419_.v432 = -(__int64)(((_DWORD)v110 + (_DWORD)v419_.v489) & 0x7FFFFFF8);
    v419_.v421 = -(v419_.v488 & 0x7FFFFFF8);
    v419_.v419 = 8220 - 4 * v109;
    v419_.v442 = ((int)v110 / 2) & 7LL;
    v419_.v429 = (int)v110 / 2 - 1;
    v419_.v441 = (4 * ((int)v110 / 2)) & 0xFFFFFFE0;
    v120 = v117 + 2 * v110;
    v121 = v419_.v436;
    v419_.v430 = (__int16*)(v120 - 2);
    v122 = v112 - 4;
    v123 = 0;
    v419_.v420 = v122;
    v419_.v423 = &v115[v122];
    v419_.v515 = v419_.v436 + 2;
    v419_.v514 = v419_.v436 + 4;
    v419_.v513 = v419_.v436 + 6;
    v419_.v512 = v419_.v436 + 8;
    v419_.v511 = v419_.v436 + 10;
    v419_.v510 = (_DWORD*)(v419_.v436 + 12);
    v419_.v509 = v419_.v436 + 14;
    v419_.v508 = v419_.v436 + 16;
    v419_.v507 = v419_.v436 + 18;
    v419_.v506 = v419_.v436 + 20;
    v419_.v505 = v419_.v436 + 22;
    v419_.v504 = v419_.v436 + 24;
    v419_.v503 = v419_.v436 + 26;
    v419_.v502 = v419_.v436 + 28;
    v419_.v501 = v419_.v436 + 30;
    v419_.v500 = v419_.v436 + 32;
    v419_.v499 = v419_.v436 + 34;
    v419_.v498 = v419_.v436 + 36;
    v419_.v497 = v419_.v436 + 38;
    v419_.v495 = v419_.v436 + 42;
    v419_.v496 = v419_.v436 + 40;
    v419_.v493 = v419_.v436 + 46;
    v419_.v494 = v419_.v436 + 44;
    v419_.v486 = v113 & 6;
    v419_.v477 = v419_.v444 & 7;
    v419_.v422 = v419_.v488 & 7;
    v419_.v439 = (unsigned int)-(int)v419_.v444;
    v419_.v440 = v419_.v444 & 0x7FFFFFF8;
    v419_.v438 = (unsigned int)-(int)v113;
    v419_.v425 = (__int16*)(v117 + 8);
    while (1) {
      v124 = v419_.v446;
      v125 = v419_.v519[v123];
      v126 = -4192;
      do {
        v127 = (_DWORD*)(v125 + v126);
        v126 += 32;
        *((_WORD*)v124 - 4) = (unsigned int)(v127[2048] + 2048) >> 12;
        *((_WORD*)v124 - 3) = (unsigned int)(v127[2049] + 2048) >> 12;
        *((_WORD*)v124 - 2) = (unsigned int)(v127[2050] + 2048) >> 12;
        *((_WORD*)v124 - 1) = (unsigned int)(v127[2051] + 2048) >> 12;
        *(_WORD*)v124 = (unsigned int)(v127[2052] + 2048) >> 12;
        *((_WORD*)v124 + 1) = (unsigned int)(v127[2053] + 2048) >> 12;
        *((_WORD*)v124 + 2) = (unsigned int)(v127[2054] + 2048) >> 12;
        *((_WORD*)v124 + 3) = (unsigned int)(v127[2055] + 2048) >> 12;
        v124 += 2;
      } while (v126 != 0);
      v419_.v490 = v123;
      if (v419_.v481 != 0) {
        v128 = 24 * v123;
      }
      else {
        v419_.v532 = 0;
        v419_.v531 = 0;
        v419_.v530 = 0;
        v419_.v529 = 0;
        v419_.v528 = 0;
        v419_.v527 = 0;
        v419_.v526 = 0;
        v419_.v525 = 0;
        v419_.v524 = 0;
        v419_.v523 = 0;
        v419_.v522 = 0;
        v419_.v521 = 0;
        v419_.v520 = 0;
        _celt_autocorr((__int16*)&v419_.v419 - 1024, (signed int*)&v419_.v520,
                       v117, v419_.v488, 24, 1024);
        LODWORD(v419_.v520) = v419_.v520 + ((int)v419_.v520 >> 13);
        HIDWORD(v419_.v520) -= SHIDWORD(v419_.v520) >> 14;
        LODWORD(v419_.v521) = v419_.v521 - ((int)v419_.v521 >> 12);
        LODWORD(v419_.v523) =
            v419_.v523 - ((unsigned __int64)(9LL * (int)v419_.v523) >> 12);
        HIDWORD(v419_.v521) -=
            (unsigned __int64)(9LL * SHIDWORD(v419_.v521)) >> 14;
        HIDWORD(v419_.v522) -=
            (unsigned __int64)(50LL * SHIDWORD(v419_.v522)) >> 15;
        HIDWORD(v419_.v523) -=
            (unsigned __int64)(98LL * SHIDWORD(v419_.v523)) >> 15;
        LODWORD(v419_.v522) = v419_.v522 - ((int)v419_.v522 >> 10);
        LODWORD(v419_.v526) =
            v419_.v526 - ((unsigned __int64)(9LL * (int)v419_.v526) >> 10);
        HIDWORD(v419_.v525) -=
            (unsigned __int64)(242LL * SHIDWORD(v419_.v525)) >> 15;
        HIDWORD(v419_.v526) -=
            (unsigned __int64)(338LL * SHIDWORD(v419_.v526)) >> 15;
        HIDWORD(v419_.v524) -=
            (unsigned __int64)(162LL * SHIDWORD(v419_.v524)) >> 15;
        LODWORD(v419_.v527) =
            v419_.v527 - ((unsigned __int64)(392LL * (int)v419_.v527) >> 15);
        LODWORD(v419_.v524) = v419_.v524 - ((int)v419_.v524 >> 8);
        LODWORD(v419_.v525) =
            v419_.v525 - ((unsigned __int64)(200LL * (int)v419_.v525) >> 15);
        HIDWORD(v419_.v528) -=
            (unsigned __int64)(578LL * SHIDWORD(v419_.v528)) >> 15;
        LODWORD(v419_.v528) = v419_.v528 - ((int)v419_.v528 >> 6);
        HIDWORD(v419_.v527) -=
            (unsigned __int64)(450LL * SHIDWORD(v419_.v527)) >> 15;
        LODWORD(v419_.v529) =
            v419_.v529 - ((unsigned __int64)(648LL * (int)v419_.v529) >> 15);
        HIDWORD(v419_.v529) -=
            (unsigned __int64)(722LL * SHIDWORD(v419_.v529)) >> 15;
        LODWORD(v419_.v530) =
            v419_.v530 - ((unsigned __int64)(800LL * (int)v419_.v530) >> 15);
        HIDWORD(v419_.v530) -=
            (unsigned __int64)(882LL * SHIDWORD(v419_.v530)) >> 15;
        v129 = 3 * v123;
        v130 = (_WORD*)(v121 + 48 * v123);
        v419_.v532 -= (unsigned __int64)(9LL * v419_.v532) >> 8;
        v153 = 48 * v123;
        HIDWORD(v419_.v531) -=
            (unsigned __int64)(1058LL * SHIDWORD(v419_.v531)) >> 15;
        LODWORD(v419_.v531) =
            v419_.v531 - ((unsigned __int64)(968LL * (int)v419_.v531) >> 15);
        v419_.v517 = 8 * v129;
        MovieRoutine_35700((__int64)v130, (int*)&v419_.v520, 24);
        v419_.v492 = v130;
        LOWORD(v131) = *v130;
        LOWORD(v132) = *(_WORD*)(v419_.v497 + v153);
        LOWORD(v133) = *(_WORD*)(v419_.v515 + v153);
        LOWORD(v134) = *(_WORD*)(v419_.v511 + v153);
        LOWORD(v135) = *(_WORD*)((char*)v419_.v510 + v153);
        LOWORD(v136) = *(_WORD*)(v419_.v509 + v153);
        LOWORD(v137) = *(_WORD*)(v419_.v508 + v153);
        LOWORD(v138) = *(_WORD*)(v419_.v507 + v153);
        LOWORD(v139) = *(_WORD*)(v419_.v506 + v153);
        LOWORD(v140) = *(_WORD*)(v419_.v505 + v153);
        LOWORD(v141) = *(_WORD*)(v419_.v504 + v153);
        LOWORD(v142) = *(_WORD*)(v419_.v503 + v153);
        LOWORD(v143) = *(_WORD*)(v419_.v502 + v153);
        LOWORD(v144) = *(_WORD*)(v419_.v501 + v153);
        LOWORD(v145) = *(_WORD*)(v419_.v500 + v153);
        LOWORD(v146) = *(_WORD*)(v419_.v499 + v153);
        LOWORD(v147) = *(_WORD*)(v419_.v498 + v153);
        LOWORD(v121) = *(_WORD*)(v419_.v496 + v153);
        LOWORD(v148) = *(_WORD*)(v419_.v514 + v153);
        LOWORD(v149) = *(_WORD*)(v419_.v495 + v153);
        LOWORD(v150) = *(_WORD*)(v419_.v513 + v153);
        LOWORD(v151) = *(_WORD*)(v419_.v494 + v153);
        LOWORD(v152) = *(_WORD*)(v419_.v512 + v153);
        LOWORD(v153) = *(_WORD*)(v419_.v493 + v153);
        while (1) {
          if ((v131 & 0x8000u) == 0) {
            LOWORD(v154) = v131;
          }
          else {
            v154 = -(__int16)v131;
          }
          v155 = v154 + 4096;
          v156 = (v133 & 0x8000u) == 0 ? (__int16)v133 : -(__int16)v133;
          v157 = v156 + v155;
          v158 = (v148 & 0x8000u) == 0 ? (__int16)v148 : -(__int16)v148;
          v159 = (v150 & 0x8000u) == 0 ? (__int16)v150 : -(__int16)v150;
          v160 = v158 + v159;
          v161 = (v152 & 0x8000u) == 0 ? (__int16)v152 : -(__int16)v152;
          v162 = v160 + v161;
          v163 = (v134 & 0x8000u) == 0 ? (__int16)v134 : -(__int16)v134;
          v164 = v157 + v162 + v163;
          v165 = (v135 & 0x8000u) == 0 ? (__int16)v135 : -(__int16)v135;
          v166 = (v136 & 0x8000u) == 0 ? (__int16)v136 : -(__int16)v136;
          v167 = v165 + v166;
          v168 = (v137 & 0x8000u) == 0 ? (__int16)v137 : -(__int16)v137;
          v169 = v167 + v168;
          v170 = (v138 & 0x8000u) == 0 ? (__int16)v138 : -(__int16)v138;
          v171 = v169 + v170;
          v172 = (v139 & 0x8000u) == 0 ? (__int16)v139 : -(__int16)v139;
          v173 = v164 + v171 + v172;
          v174 = (v140 & 0x8000u) == 0 ? (__int16)v140 : -(__int16)v140;
          v175 = (v141 & 0x8000u) == 0 ? (__int16)v141 : -(__int16)v141;
          v176 = v174 + v175;
          v177 = (v142 & 0x8000u) == 0 ? (__int16)v142 : -(__int16)v142;
          v178 = v176 + v177;
          v179 = (v143 & 0x8000u) == 0 ? (__int16)v143 : -(__int16)v143;
          v180 = v178 + v179;
          v181 = (v144 & 0x8000u) == 0 ? (__int16)v144 : -(__int16)v144;
          v182 = v180 + v181;
          v183 = (v145 & 0x8000u) == 0 ? (__int16)v145 : -(__int16)v145;
          v184 = v173 + v182 + v183;
          v185 = (v146 & 0x8000u) == 0 ? (__int16)v146 : -(__int16)v146;
          v186 = (v147 & 0x8000u) == 0 ? (__int16)v147 : -(__int16)v147;
          v187 = v185 + v186;
          v188 = (v132 & 0x8000u) == 0 ? (__int16)v132 : -(__int16)v132;
          v189 = v187 + v188;
          v190 = (v121 & 0x8000u) == 0LL ? (__int16)v121 : -(__int16)v121;
          v191 = v189 + v190;
          v192 = (v149 & 0x8000u) == 0 ? (__int16)v149 : -(__int16)v149;
          v193 = v191 + v192;
          v194 = (v151 & 0x8000u) == 0 ? (__int16)v151 : -(__int16)v151;
          v195 = v193 + v194;
          v196 = (v153 & 0x8000u) == 0LL ? (__int16)v153 : -(__int16)v153;
          if ((unsigned int)(v184 + v195 + v196) < 0xFFFF) {
            break;
          }
          v133 = (unsigned int)(32114 * (__int16)v133) >> 15;
          v148 = (unsigned int)(31792 * (__int16)v148) >> 15;
          v150 = (unsigned int)(31473 * (__int16)v150) >> 15;
          v197 = 2 * v419_.v517;
          v152 = (unsigned int)(31157 * (__int16)v152) >> 15;
          *(_WORD*)(v419_.v515 + v197) = v133;
          *(_WORD*)(v419_.v514 + v197) = v148;
          *(_WORD*)(v419_.v513 + v197) = v150;
          *(_WORD*)(v419_.v512 + v197) = v152;
          v134 = (unsigned int)(30845 * (__int16)v134) >> 15;
          *(_WORD*)(v419_.v511 + v197) = v134;
          v135 = (unsigned int)(30536 * (__int16)v135) >> 15;
          *(_WORD*)((char*)v419_.v510 + v197) = v135;
          v136 = (unsigned int)(30230 * (__int16)v136) >> 15;
          *(_WORD*)(v419_.v509 + v197) = v136;
          v137 = (unsigned int)(29927 * (__int16)v137) >> 15;
          *(_WORD*)(v419_.v508 + v197) = v137;
          v138 = (unsigned int)(29627 * (__int16)v138) >> 15;
          *(_WORD*)(v419_.v507 + v197) = v138;
          v139 = (unsigned int)(29330 * (__int16)v139) >> 15;
          *(_WORD*)(v419_.v506 + v197) = v139;
          v140 = (unsigned int)(29036 * (__int16)v140) >> 15;
          *(_WORD*)(v419_.v505 + v197) = v140;
          v141 = (unsigned int)(28745 * (__int16)v141) >> 15;
          *(_WORD*)(v419_.v504 + v197) = v141;
          v142 = (unsigned int)(28457 * (__int16)v142) >> 15;
          *(_WORD*)(v419_.v503 + v197) = v142;
          v143 = (unsigned int)(28172 * (__int16)v143) >> 15;
          *(_WORD*)(v419_.v502 + v197) = v143;
          v144 = (unsigned int)(27890 * (__int16)v144) >> 15;
          *(_WORD*)(v419_.v501 + v197) = v144;
          v145 = (unsigned int)(27610 * (__int16)v145) >> 15;
          *(_WORD*)(v419_.v500 + v197) = v145;
          v146 = (unsigned int)(27333 * (__int16)v146) >> 15;
          *(_WORD*)(v419_.v499 + v197) = v146;
          v147 = (unsigned int)(27059 * (__int16)v147) >> 15;
          *(_WORD*)(v419_.v498 + v197) = v147;
          v132 = (unsigned int)(26788 * (__int16)v132) >> 15;
          *(_WORD*)(v419_.v497 + v197) = v132;
          LODWORD(v121) = (unsigned int)(26519 * (__int16)v121) >> 15;
          *(_WORD*)(v419_.v496 + v197) = v121;
          v149 = (unsigned int)(26253 * (__int16)v149) >> 15;
          *(_WORD*)(v419_.v495 + v197) = v149;
          v151 = (unsigned int)(25990 * (__int16)v151) >> 15;
          *(_WORD*)(v419_.v494 + v197) = v151;
          LODWORD(v153) = (unsigned int)(25729 * (__int16)v153) >> 15;
          *(_WORD*)(v419_.v493 + v197) = v153;
          v131 = (unsigned int)(32439 * (__int16)v131) >> 15;
          *v419_.v492 = v131;
        }
        v6 = v419_.v516;
        v121 = v419_.v436;
        v119 = v419_.v437;
        LODWORD(v113) = v419_.v483;
        v128 = v419_.v517;
      }
      v199 = v419_.v472;
      v198 = v419_.v473;
      v200 = v121 + 2 * v128;
      celt_fir_c((__int64)(v419_.v472 + 2096), v200, v419_.v473, v113, 24);
      memcpy_plt(v199 + 2096, v198, v419_.v474);
      if (v419_.v487 < 1) {
        v201 = v419_.v445;
        v202 = v419_.v443;
        v205 = 0;
        v204 = 0;
      }
      else {
        v201 = v419_.v445;
        v202 = v419_.v443;
        v203 = 0;
        LOWORD(v204) = 0;
        LOWORD(v205) = 0;
        if ((unsigned int)v113 >= 8) {
          v206 = (__int16*)v419_.v428;
          do {
            v207 = *(v206 - 7);
            v205 = (__int16)v205;
            v204 = (__int16)v204;
            v203 -= 8;
            if ((__int16)v205 <= v207) {
              v205 = *(v206 - 7);
            }
            if ((__int16)v204 >= v207) {
              v204 = *(v206 - 7);
            }
            v208 = *(v206 - 6);
            if (v205 <= v208) {
              v205 = *(v206 - 6);
            }
            if (v204 >= v208) {
              v204 = *(v206 - 6);
            }
            v209 = *(v206 - 5);
            if (v205 <= v209) {
              v205 = *(v206 - 5);
            }
            if (v204 >= v209) {
              v204 = *(v206 - 5);
            }
            v210 = *(v206 - 4);
            if (v205 <= v210) {
              v205 = *(v206 - 4);
            }
            if (v204 >= v210) {
              v204 = *(v206 - 4);
            }
            v211 = *(v206 - 3);
            if (v205 <= v211) {
              v205 = *(v206 - 3);
            }
            if (v204 >= v211) {
              v204 = *(v206 - 3);
            }
            v212 = *(v206 - 2);
            if (v205 <= v212) {
              v205 = *(v206 - 2);
            }
            if (v204 >= v212) {
              v204 = *(v206 - 2);
            }
            v213 = *(v206 - 1);
            if (v205 <= v213) {
              v205 = *(v206 - 1);
            }
            if (v204 >= v213) {
              v204 = *(v206 - 1);
            }
            v214 = *v206;
            v206 += 8;
            if (v205 <= v214) {
              LOWORD(v205) = v214;
            }
            if (v204 >= v214) {
              LOWORD(v204) = v214;
            }
          } while (v419_.v445 != v203);
          v203 = -v203;
        }
        if (v419_.v486 != 0) {
          v215 = &v419_.v431[2 * v203];
          for (i = v419_.v486; i != 0; --i) {
            v218 = *(__int16*)v215;
            v215 += 2;
            v217 = v218;
            if ((__int16)v205 <= v218) {
              LOWORD(v205) = v217;
            }
            if ((__int16)v204 >= v217) {
              LOWORD(v204) = v217;
            }
          }
        }
        v205 = (unsigned __int16)v205;
        v204 = (__int16)v204;
      }
      if ((v205 + v204 < 0) ^ __OFADD__(v205, v204) | (v205 + v204 == 0)) {
        v219 = -v204;
      }
      else {
        v219 = v205;
      }
      v220 = __clz(v219) ^ 0x1E;
      if (v219 == 0 || v220 < 0xA) {
        v222 = v419_.v444;
        v223 = v419_.v439;
        v224 = v419_.v440;
        v225 = 0;
        v226 = v419_.v438;
        if ((int)v419_.v444 < 1) {
          goto LABEL_216;
        }
        goto LABEL_271;
      }
      if (v419_.v487 < 1) {
        v222 = v419_.v444;
        v223 = v419_.v439;
        v224 = v419_.v440;
        v231 = 0;
        v230 = 0;
        v226 = v419_.v438;
        goto LABEL_264;
      }
      v222 = v419_.v444;
      v229 = 0;
      LOWORD(v230) = 0;
      LOWORD(v231) = 0;
      if ((unsigned int)v113 >= 8) {
        break;
      }
      v223 = v419_.v439;
      v224 = v419_.v440;
      v226 = v419_.v438;
      if (v419_.v486 != 0) {
        goto LABEL_257;
      }
    LABEL_263:
      v231 = (unsigned __int16)v231;
      v230 = (__int16)v230;
    LABEL_264:
      if ((v231 + v230 < 0) ^ __OFADD__(v231, v230) | (v231 + v230 == 0)) {
        v245 = -v230;
      }
      else {
        v245 = v231;
      }
      v246 = ((2 * __clz(v245)) ^ 0x3E) - 20;
      if (v245 != 0) {
        v225 = v246;
      }
      else {
        v225 = -20;
      }
      if (v222 < 1) {
      LABEL_216:
        v227 = 1;
        v228 = 1;
        goto LABEL_278;
      }
    LABEL_271:
      if ((unsigned int)v222 >= 8) {
        v228 = 1;
        v227 = 1;
        v247 = 0;
        do {
          v248 = v223 + v247;
          v249 = v223 + v247 + 1025;
          v250 = *((__int16*)v116 + v223 + (int)v247 + 1024);
          v251 = *((__int16*)v116 + v223 + (int)v247 + 1026);
          v252 = (unsigned int)(v250 * v250) >> v225;
          v253 = v226 + v247;
          v247 += 8;
          v254 = v252 + v227;
          v255 = *((__int16*)v116 + v249);
          v256 = *((__int16*)v116 + v253 + 1025);
          v257 = *((__int16*)v116 + v253 + 1024);
          v258 = ((unsigned int)(v251 * v251) >> v225) +
                 ((unsigned int)(v255 * v255) >> v225);
          v259 = *((__int16*)v116 + v253 + 1026);
          v260 = v258 + v254;
          v261 = *((__int16*)v116 + v253 + 1027);
          v262 = *((__int16*)v116 + v248 + 1028);
          v263 = ((unsigned int)(v259 * v259) >> v225) +
                 ((unsigned int)(v256 * v256) >> v225);
          v264 = *((__int16*)v116 + v248 + 1027);
          v265 = v263 + ((unsigned int)(v257 * v257) >> v225) + v228;
          v266 = ((unsigned int)(v262 * v262) >> v225) +
                 ((unsigned int)(v264 * v264) >> v225);
          v267 = *((__int16*)v116 + v253 + 1028);
          v268 = *((__int16*)v116 + v248 + 1029);
          v269 = ((unsigned int)(v268 * v268) >> v225) + v266;
          v270 = *((__int16*)v116 + v253 + 1029);
          v271 = v269 + v260;
          v272 = *((__int16*)v116 + v248 + 1030);
          v273 = *((__int16*)v116 + v248 + 1031);
          v274 = ((unsigned int)(v270 * v270) >> v225) +
                 ((unsigned int)(v267 * v267) >> v225) +
                 ((unsigned int)(v261 * v261) >> v225);
          v275 = *((__int16*)v116 + v253 + 1030);
          v276 = *((__int16*)v116 + v253 + 1031);
          v227 = ((unsigned int)(v273 * v273) >> v225) +
                 ((unsigned int)(v272 * v272) >> v225) + v271;
          v228 = ((unsigned int)(v276 * v276) >> v225) +
                 ((unsigned int)(v275 * v275) >> v225) + v274 + v265;
        } while (v224 != v247);
      }
      else {
        LODWORD(v247) = 0;
        v228 = 1;
        v227 = 1;
      }
      if (v419_.v477 != 0) {
        v277 = v419_.v427 + v247;
        v278 = v419_.v426 + v247;
        v279 = v419_.v477;
        do {
          v280 = *((__int16*)v116 + v278++);
          --v279;
          v227 += (unsigned int)(v280 * v280) >> v225;
          v281 = *((__int16*)v116 + v277++);
          v228 += (unsigned int)(v281 * v281) >> v225;
        } while (v279 != 0);
      }
    LABEL_278:
      if (v227 >= v228) {
        v282 = v228;
      }
      else {
        v282 = v227;
      }
      v283 = frac_div32(v282 >> 1, v228);
      v284 = celt_sqrt(v283);
      memmove_plt(v125, v125 + 4 * v419_.v485, v419_.v471);
      if ((int)v202 < 1) {
        v290 = 0;
        v318 = (__int16*)v200;
      }
      else {
        v285 = v419_.v434;
        v286 = v284;
        v287 = v419_.v487;
        v288 = 0;
        v289 = 0;
        v290 = 0;
        v291 = v419_.v433;
        v292 = (unsigned int)(v286 * v419_.v435) >> 15;
        if ((unsigned int)v202 >= 4) {
          v293 = v419_.v424;
          v294 = (unsigned int*)(v125 + 4 * v419_.v479 + 12);
          do {
            v288 -= 4;
            if (v289 < v287) {
              v295 = 0;
            }
            else {
              LOWORD(v292) = (unsigned int)(v286 * (__int16)v292) >> 15;
              v295 = v287;
            }
            v296 = v289 - v295;
            *(v294 - 3) =
                ((*((__int16*)v116 + v296 + v285) * (__int16)v292) >> 3) &
                0xFFFFF000;
            v297 = v291 + v296;
            v298 = v296 + 1;
            v299 = *(_DWORD*)(v125 + 4LL * v297);
            if (v298 < v287) {
              v300 = 0;
            }
            else {
              LOWORD(v292) = (unsigned int)(v286 * (__int16)v292) >> 15;
              v300 = v287;
            }
            v301 = v298 - v300;
            v302 = v290 + ((unsigned int)(((16 * v299 + 0x8000) >> 16) *
                                          ((16 * v299 + 0x8000) >> 16)) >>
                           10);
            *(v294 - 2) =
                ((*((__int16*)v116 + v301 + v285) * (__int16)v292) >> 3) &
                0xFFFFF000;
            v303 = v291 + v301;
            v304 = v301 + 1;
            v305 = *(_DWORD*)(v125 + 4LL * v303);
            if (v304 < v287) {
              v306 = 0;
            }
            else {
              LOWORD(v292) = (unsigned int)(v286 * (__int16)v292) >> 15;
              v306 = v287;
            }
            v307 = v304 - v306;
            v308 = v302 + ((unsigned int)(((16 * v305 + 0x8000) >> 16) *
                                          ((16 * v305 + 0x8000) >> 16)) >>
                           10);
            v309 = *((__int16*)v116 + v307 + v285) * (__int16)v292;
            v310 = v307 + 1;
            v311 = v291 + v307;
            v312 = v309 >> 3;
            if (v310 < v287) {
              v313 = 0;
            }
            else {
              LOWORD(v292) = (unsigned int)(v286 * (__int16)v292) >> 15;
              v313 = v287;
            }
            v314 = v310 - v313;
            *(v294 - 1) = v312 & 0xFFFFF000;
            v315 = (16 * *(_DWORD*)(v125 + 4LL * v311) + 0x8000) >> 16;
            v316 = v308 + ((unsigned int)(v315 * v315) >> 10);
            *v294 = ((*((__int16*)v116 + v314 + v285) * (__int16)v292) >> 3) &
                    0xFFFFF000;
            v294 += 4;
            v317 = (16 * *(_DWORD*)(v125 + 4LL * (v291 + v314)) + 0x8000) >> 16;
            v290 = v316 + ((unsigned int)(v317 * v317) >> 10);
            v289 = v314 + 1;
          } while (v293 != v288);
          v288 = -v288;
        }
        v318 = (__int16*)v200;
        if (v419_.v478 != 0) {
          v319 = (unsigned int*)(v125 + v419_.v484 + 4 * v288);
          v320 = v419_.v478;
          do {
            if (v289 < v287) {
              v321 = 0;
            }
            else {
              LOWORD(v292) = (unsigned int)(v286 * (__int16)v292) >> 15;
              v321 = v287;
            }
            --v320;
            v322 = v289 - v321;
            *v319++ = ((*((__int16*)v116 + v322 + v285) * (__int16)v292) >> 3) &
                      0xFFFFF000;
            v323 = v291 + v322;
            v289 = v322 + 1;
            v324 = (16 * *(_DWORD*)(v125 + 4LL * v323) + 0x8000) >> 16;
            v290 += (unsigned int)(v324 * v324) >> 10;
          } while (v320 != 0);
        }
      }
      v419_.v525 = 0;
      v419_.v524 = 0;
      v419_.v523 = 0;
      v419_.v522 = 0;
      v419_.v521 = 0;
      v419_.v520 = 0;
      LOWORD(v419_.v520) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v470) + 2048) >> 12;
      WORD1(v419_.v520) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v469) + 2048) >> 12;
      WORD2(v419_.v520) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v468) + 2048) >> 12;
      HIWORD(v419_.v520) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v467) + 2048) >> 12;
      LOWORD(v419_.v521) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v466) + 2048) >> 12;
      WORD1(v419_.v521) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v465) + 2048) >> 12;
      WORD2(v419_.v521) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v464) + 2048) >> 12;
      HIWORD(v419_.v521) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v463) + 2048) >> 12;
      LOWORD(v419_.v522) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v462) + 2048) >> 12;
      WORD1(v419_.v522) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v461) + 2048) >> 12;
      WORD2(v419_.v522) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v460) + 2048) >> 12;
      HIWORD(v419_.v522) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v459) + 2048) >> 12;
      LOWORD(v419_.v523) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v458) + 2048) >> 12;
      WORD1(v419_.v523) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v457) + 2048) >> 12;
      WORD2(v419_.v523) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v456) + 2048) >> 12;
      HIWORD(v419_.v523) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v455) + 2048) >> 12;
      LOWORD(v419_.v524) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v454) + 2048) >> 12;
      WORD1(v419_.v524) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v453) + 2048) >> 12;
      WORD2(v419_.v524) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v452) + 2048) >> 12;
      HIWORD(v419_.v524) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v451) + 2048) >> 12;
      LOWORD(v419_.v525) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v450) + 2048) >> 12;
      WORD1(v419_.v525) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v449) + 2048) >> 12;
      WORD2(v419_.v525) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v448) + 2048) >> 12;
      HIWORD(v419_.v525) =
          (unsigned int)(*(_DWORD*)(v125 + 4LL * v419_.v447) + 2048) >> 12;
      MovieRoutine_362a0(v125 + 0x2000 + 4 * v419_.v476, v318,
                         v125 + 0x2000 + 4 * v419_.v476, v202, 24,
                         (__int64)&v419_.v520);
      if ((int)v202 < 1) {
        if (v290 == 0) {
          goto LABEL_384;
        }
        v327 = 0;
      LABEL_362:
        if (v290 < v327) {
          v358 = frac_div32((v290 >> 1) + 1, v327 + 1);
          v359 = celt_sqrt(v358);
          v360 = v419_.v480;
          v361 = v419_.v421;
          if ((int)v419_.v488 < 1) {
            goto LABEL_381;
          }
          v362 = v359 ^ 0x7FFF;
          if ((unsigned int)v119 >= 8) {
            v369 = v419_.v425;
            v370 = 0;
            v371 = (int*)(v125 + v419_.v419);
            do {
              v372 = *(v371 - 6);
              v370 -= 8;
              *(v371 - 7) =
                  (unsigned __int64)((__int16)(((unsigned int)(v362 *
                                                               *(v369 - 4)) >>
                                                15) ^
                                               0x7FFF) *
                                     (__int64)*(v371 - 7)) >>
                  15;
              v373 = (__int16)(((unsigned int)(v362 * *(v369 - 3)) >> 15) ^
                               0x7FFF) *
                     (__int64)v372;
              v374 = *(v371 - 5);
              v375 = *(v371 - 4);
              *(v371 - 6) = v373 >> 15;
              *(v371 - 5) =
                  (unsigned __int64)((__int16)(((unsigned int)(v362 *
                                                               *(v369 - 2)) >>
                                                15) ^
                                               0x7FFF) *
                                     (__int64)v374) >>
                  15;
              v376 =
                  (unsigned __int64)((__int16)(((unsigned int)(v362 *
                                                               *(v369 - 1)) >>
                                                15) ^
                                               0x7FFF) *
                                     (__int64)v375) >>
                  15;
              v377 = *(v371 - 3);
              v378 = *(v371 - 2);
              *(v371 - 4) = v376;
              v379 = (__int16)(((unsigned int)(v362 * *v369) >> 15) ^ 0x7FFF) *
                     (__int64)v377;
              v380 = *(v371 - 1);
              *(v371 - 3) = v379 >> 15;
              *(v371 - 2) =
                  (unsigned __int64)((__int16)(((unsigned int)(v362 *
                                                               v369[1]) >>
                                                15) ^
                                               0x7FFF) *
                                     (__int64)v378) >>
                  15;
              v381 =
                  (__int16)(((unsigned int)(v362 * v369[2]) >> 15) ^ 0x7FFF) *
                  (__int64)v380;
              v382 = *v371;
              *(v371 - 1) = v381 >> 15;
              LODWORD(v381) = v369[3];
              v369 += 8;
              *v371 =
                  (unsigned __int64)((__int16)(((unsigned int)(v362 * v381) >>
                                                15) ^
                                               0x7FFF) *
                                     (__int64)v382) >>
                  15;
              v371 += 8;
            } while (v361 != v370);
            v363 = -v370;
            if (v419_.v422 != 0) {
              goto LABEL_379;
            }
          }
          else {
            v363 = 0;
            if (v419_.v422 == 0) {
              goto LABEL_381;
            }
          LABEL_379:
            v383 = v419_.v422;
            v384 = (int*)(v125 + v419_.v484 + 4 * v363);
            v385 = (__int16*)(v360 + 2 * v363);
            do {
              v386 = *v385++;
              --v383;
              *v384 =
                  (unsigned __int64)((__int16)(((unsigned int)(v362 * v386) >>
                                                15) ^
                                               0x7FFF) *
                                     (__int64)*v384) >>
                  15;
              ++v384;
            } while (v383 != 0);
          }
        LABEL_381:
          if ((int)v419_.v489 >= 1) {
            v387 = v119;
            v388 = v125 + 4 * v419_.v479;
            do {
              *(_DWORD*)(v388 + 4 * v387) =
                  (unsigned __int64)(v359 *
                                     (__int64)*(int*)(v388 + 4 * v387)) >>
                  15;
              ++v387;
            } while (v387 < v202);
          }
          goto LABEL_384;
        }
        goto LABEL_384;
      }
      v325 = 0;
      if ((unsigned int)v202 < 8) {
        v326 = v419_.v432;
        if (v419_.v491 == 0) {
          goto LABEL_353;
        }
      LABEL_347:
        v337 = (int*)(v125 + v419_.v484 + 4 * v325);
        for (j = v419_.v491; j != 0; --j) {
          v339 = *v337;
          if (*v337 <= -300000000) {
            v339 = -300000000;
          }
          if (v339 >= 300000000) {
            v339 = 300000000;
          }
          *v337++ = v339;
        }
        goto LABEL_353;
      }
      v326 = v419_.v432;
      v328 = (int*)(v125 + 4 * v419_.v479 + 28);
      do {
        v329 = *(v328 - 7);
        v330 = *(v328 - 6);
        v325 -= 8;
        if (v329 <= -300000000) {
          v329 = -300000000;
        }
        if (v329 >= 300000000) {
          v329 = 300000000;
        }
        if (v330 <= -300000000) {
          v330 = -300000000;
        }
        if (v330 >= 300000000) {
          v330 = 300000000;
        }
        *(v328 - 7) = v329;
        *(v328 - 6) = v330;
        v331 = *(v328 - 5);
        v332 = *(v328 - 4);
        if (v331 <= -300000000) {
          v331 = -300000000;
        }
        if (v331 >= 300000000) {
          v331 = 300000000;
        }
        if (v332 <= -300000000) {
          v332 = -300000000;
        }
        if (v332 >= 300000000) {
          v332 = 300000000;
        }
        *(v328 - 5) = v331;
        *(v328 - 4) = v332;
        v333 = *(v328 - 3);
        v334 = *(v328 - 2);
        if (v333 <= -300000000) {
          v333 = -300000000;
        }
        if (v333 >= 300000000) {
          v333 = 300000000;
        }
        if (v334 <= -300000000) {
          v334 = -300000000;
        }
        if (v334 >= 300000000) {
          v334 = 300000000;
        }
        *(v328 - 3) = v333;
        *(v328 - 2) = v334;
        v335 = *(v328 - 1);
        v336 = *v328;
        if (v335 <= -300000000) {
          v335 = -300000000;
        }
        if (v335 >= 300000000) {
          v335 = 300000000;
        }
        if (v336 <= -300000000) {
          v336 = -300000000;
        }
        if (v336 >= 300000000) {
          v336 = 300000000;
        }
        *(v328 - 1) = v335;
        *v328 = v336;
        v328 += 8;
      } while (v326 != v325);
      v325 = -v325;
      if (v419_.v491 != 0) {
        goto LABEL_347;
      }
    LABEL_353:
      if ((unsigned int)v202 < 8) {
        v340 = 0;
        v327 = 0;
        if (v419_.v491 == 0) {
          goto LABEL_361;
        }
      LABEL_359:
        v355 = (int*)(v125 + v419_.v484 + 4 * v340);
        for (k = v419_.v491; k != 0; --k) {
          v357 = *v355++;
          v327 += (unsigned int)(((16 * v357 + 0x8000) >> 16) *
                                 ((16 * v357 + 0x8000) >> 16)) >>
                  10;
        }
        goto LABEL_361;
      }
      v341 = 0;
      v327 = 0;
      v342 = (int*)(v125 + 4 * v419_.v479 + 28);
      do {
        v341 -= 8;
        v343 = (16 * *(v342 - 7) + 0x8000) >> 16;
        v344 = v327 + ((unsigned int)(v343 * v343) >> 10);
        v345 = (16 * *(v342 - 6) + 0x8000) >> 16;
        v346 = v344 + ((unsigned int)(v345 * v345) >> 10);
        v347 = (16 * *(v342 - 5) + 0x8000) >> 16;
        v348 = v346 + ((unsigned int)(v347 * v347) >> 10);
        v349 = (16 * *(v342 - 4) + 0x8000) >> 16;
        v350 = v348 + ((unsigned int)(v349 * v349) >> 10);
        v351 = (16 * *(v342 - 3) + 0x8000) >> 16;
        v352 = v350 + ((unsigned int)(v351 * v351) >> 10) +
               ((unsigned int)(((16 * *(v342 - 2) + 0x8000) >> 16) *
                               ((16 * *(v342 - 2) + 0x8000) >> 16)) >>
                10);
        v353 = (16 * *(v342 - 1) + 0x8000) >> 16;
        v354 = *v342;
        v342 += 8;
        v327 = v352 + ((unsigned int)(v353 * v353) >> 10) +
               ((unsigned int)(((16 * v354 + 0x8000) >> 16) *
                               ((16 * v354 + 0x8000) >> 16)) >>
                10);
      } while (v326 != v341);
      v340 = -v341;
      if (v419_.v491 != 0) {
        goto LABEL_359;
      }
    LABEL_361:
      if (v290 > v327 >> 2) {
        goto LABEL_362;
      }
      if ((unsigned int)v202 < 8) {
        v364 = 0;
        if (v419_.v491 == 0) {
          goto LABEL_384;
        }
      LABEL_373:
        v367 = (_DWORD*)(v125 + v419_.v484 + 4 * v364);
        for (m = v419_.v491; m != 0; --m) {
          *v367++ = 0;
        }
        goto LABEL_384;
      }
      v365 = 0;
      v366 = v125 + 4 * v419_.v479 + 28;
      do {
        *(_QWORD*)(v366 - 28) = 0;
        *(_QWORD*)(v366 - 20) = 0;
        v365 -= 8;
        *(_QWORD*)(v366 - 12) = 0;
        *(_QWORD*)(v366 - 4) = 0;
        v366 += 32;
      } while (v326 != v365);
      v364 = -v365;
      if (v419_.v491 != 0) {
        goto LABEL_373;
      }
    LABEL_384:
      v389 = *(_DWORD*)(v6 + 64);
      v390 = *(_DWORD*)(v6 + 76);
      v391 = -*(unsigned __int16*)(v6 + 72);
      v392 = (__int64)v419_.v475;
      v393 = v419_.v488;
      v418 = *(_DWORD*)(v6 + 40);
      comb_filter((__int64)v419_.v475, v125 + 0x2000, v389, v389, v419_.v488,
                  v391, v391, v390, v390, nullptr, 0);
      v117 = v419_.v480;
      result = v419_.v441;
      v394 = v419_.v442;
      v395 = v393 <= 1;
      LODWORD(v113) = v419_.v483;
      if (!v395) {
        if (v419_.v429 >= 7) {
          v397 = v419_.v425;
          v398 = v419_.v420;
          v399 = v419_.v430;
          v400 = 0;
          v396 = 0;
          do {
            v401 = *(_DWORD*)(v392 + v398);
            v402 = *v399;
            v399 -= 8;
            v398 -= 32;
            v403 = (int*)(v392 + v400);
            v404 = ((unsigned __int64)(*(int*)(v392 + v400) * (__int64)v402) >>
                    15) +
                   ((unsigned __int64)(v401 * (__int64)*(v397 - 4)) >> 15);
            v405 = (_DWORD*)(v125 + 0x2000 + v400);
            v400 += 32;
            *v405 = v404;
            v405[1] =
                ((unsigned __int64)(v403[1] *
                                    (__int64)*(
                                        __int16*)(v117 +
                                                  2 * ((v396 ^
                                                        0xFFFFFFFFFFFFFFFELL) +
                                                       v119))) >>
                 15) +
                ((unsigned __int64)(*(int*)(v392 +
                                            4 * ((v396 ^ 0xFFFFFFFFFFFFFFFELL) +
                                                 v119)) *
                                    (__int64)*(v397 - 3)) >>
                 15);
            v405[2] =
                ((unsigned __int64)(v403[2] *
                                    (__int64)*(
                                        __int16*)(v117 +
                                                  2 * ((v396 ^
                                                        0xFFFFFFFFFFFFFFFDLL) +
                                                       v119))) >>
                 15) +
                ((unsigned __int64)(*(int*)(v392 +
                                            4 * ((v396 ^ 0xFFFFFFFFFFFFFFFDLL) +
                                                 v119)) *
                                    (__int64)*(v397 - 2)) >>
                 15);
            v405[3] =
                ((unsigned __int64)(v403[3] *
                                    (__int64)*(
                                        __int16*)(v117 +
                                                  2 * ((v396 ^
                                                        0xFFFFFFFFFFFFFFFCLL) +
                                                       v119))) >>
                 15) +
                ((unsigned __int64)(*(int*)(v392 +
                                            4 * ((v396 ^ 0xFFFFFFFFFFFFFFFCLL) +
                                                 v119)) *
                                    (__int64)*(v397 - 1)) >>
                 15);
            v405[4] =
                ((unsigned __int64)(v403[4] *
                                    (__int64)*(
                                        __int16*)(v117 +
                                                  2 * ((v396 ^
                                                        0xFFFFFFFFFFFFFFFBLL) +
                                                       v119))) >>
                 15) +
                ((unsigned __int64)(*(int*)(v392 +
                                            4 * ((v396 ^ 0xFFFFFFFFFFFFFFFBLL) +
                                                 v119)) *
                                    (__int64)*v397) >>
                 15);
            v405[5] =
                ((unsigned __int64)(v403[5] *
                                    (__int64)*(
                                        __int16*)(v117 +
                                                  2 * ((v396 ^
                                                        0xFFFFFFFFFFFFFFFALL) +
                                                       v119))) >>
                 15) +
                ((unsigned __int64)(*(int*)(v392 +
                                            4 * ((v396 ^ 0xFFFFFFFFFFFFFFFALL) +
                                                 v119)) *
                                    (__int64)v397[1]) >>
                 15);
            v406 =
                ((unsigned __int64)(v403[6] *
                                    (__int64)*(
                                        __int16*)(v117 +
                                                  2 * ((v396 ^
                                                        0xFFFFFFFFFFFFFFF9LL) +
                                                       v119))) >>
                 15) +
                ((unsigned __int64)(*(int*)(v392 +
                                            4 * ((v396 ^ 0xFFFFFFFFFFFFFFF9LL) +
                                                 v119)) *
                                    (__int64)v397[2]) >>
                 15);
            v407 = v396 ^ 0xFFFFFFFFFFFFFFF8LL;
            v396 += 8;
            v405[6] = v406;
            v408 = v397[3];
            v397 += 8;
            v405[7] =
                ((unsigned __int64)(v403[7] *
                                    (__int64)*(__int16*)(v117 +
                                                         2 * (v407 + v119))) >>
                 15) +
                ((unsigned __int64)(*(int*)(v392 + 4 * (v407 + v119)) *
                                    (__int64)v408) >>
                 15);
          } while (result != v400);
        }
        else {
          v396 = 0;
        }
        if (v394 != 0) {
          v409 = v392 + 4 * v396;
          v410 = 0;
          v411 = v125 + 4 * v396 + 0x2000;
          v412 = &v419_.v430[-v396];
          v413 = &v419_.v423[-4 * v396];
          v414 = v117 + 2 * v396;
          do {
            v415 = *(_DWORD*)v413;
            v413 -= 4;
            v416 = v415 * (__int64)*(__int16*)(v414 + 2 * v410);
            v417 = *v412--;
            *(_DWORD*)(v411 + 4 * v410) =
                ((unsigned __int64)(*(int*)(v409 + 4 * v410) * (__int64)v417) >>
                 15) +
                (v416 >> 15);
            ++v410;
          } while (v394 != v410);
        }
      }
      v123 = v419_.v490 + 1;
      if (v419_.v490 + 1 == v419_.v482) {
        goto LABEL_73;
      }
    }
    v232 = (__int16*)v419_.v428;
    v223 = v419_.v439;
    v224 = v419_.v440;
    v226 = v419_.v438;
    do {
      v233 = *(v232 - 7);
      v231 = (__int16)v231;
      v230 = (__int16)v230;
      v229 -= 8;
      if ((__int16)v231 <= v233) {
        v231 = *(v232 - 7);
      }
      if ((__int16)v230 >= v233) {
        v230 = *(v232 - 7);
      }
      v234 = *(v232 - 6);
      if (v231 <= v234) {
        v231 = *(v232 - 6);
      }
      if (v230 >= v234) {
        v230 = *(v232 - 6);
      }
      v235 = *(v232 - 5);
      if (v231 <= v235) {
        v231 = *(v232 - 5);
      }
      if (v230 >= v235) {
        v230 = *(v232 - 5);
      }
      v236 = *(v232 - 4);
      if (v231 <= v236) {
        v231 = *(v232 - 4);
      }
      if (v230 >= v236) {
        v230 = *(v232 - 4);
      }
      v237 = *(v232 - 3);
      if (v231 <= v237) {
        v231 = *(v232 - 3);
      }
      if (v230 >= v237) {
        v230 = *(v232 - 3);
      }
      v238 = *(v232 - 2);
      if (v231 <= v238) {
        v231 = *(v232 - 2);
      }
      if (v230 >= v238) {
        v230 = *(v232 - 2);
      }
      v239 = *(v232 - 1);
      if (v231 <= v239) {
        v231 = *(v232 - 1);
      }
      if (v230 >= v239) {
        v230 = *(v232 - 1);
      }
      v240 = *v232;
      v232 += 8;
      if (v231 <= v240) {
        LOWORD(v231) = v240;
      }
      if (v230 >= v240) {
        LOWORD(v230) = v240;
      }
    } while (v201 != v229);
    v229 = -v229;
    if (v419_.v486 == 0) {
      goto LABEL_263;
    }
  LABEL_257:
    v241 = &v419_.v431[2 * v229];
    for (n = v419_.v486; n != 0; --n) {
      v244 = *(__int16*)v241;
      v241 += 2;
      v243 = v244;
      if ((__int16)v231 <= v244) {
        LOWORD(v231) = v243;
      }
      if ((__int16)v230 >= v243) {
        LOWORD(v230) = v243;
      }
    }
    goto LABEL_263;
  }
  v36 = (int)v13;
  v37 = *(int*)(v6 + 28);
  v38 = v419_.v481;
  v39 = (unsigned int)(24 * v419_.v512);
  if ((int)v37 >= (signed __int32)v419_.v510[3]) {
    v40 = v419_.v510[3];
  }
  else {
    v40 = *(_DWORD*)(v6 + 28);
  }
  if ((int)v13 <= v40) {
    v13 = (unsigned int)v40;
  }
  else {
    v13 = (unsigned int)v13;
  }
  v419_.v509 = v13;
  v41 = 2LL * (int)v419_.v512 * (int)v5;
  v419_.v517 = (__int64)&v419_.v419 - ((v41 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v419_.v517, 0, v41);
  v419_.v511 = v36;
  if (v38 != 0) {
    v42 = -512;
  }
  else {
    v42 = -1536;
  }
  if ((int)v36 < (int)v37) {
    v43 = 0;
    v44 = 4LL * v34;
    v45 = ((_BYTE)v37 - (_BYTE)v419_.v511) & 7;
    v46 = 12LL * (_DWORD)v419_.v513;
    v47 = v44 + 2 * v419_.v511 + 2LL * (int)v39 + v6 + 92;
    v48 = v37 - (v419_.v511 + v45);
    v49 = v419_.v511 - v37;
    v50 = 2 * v419_.v513;
    v51 = v6 + 2 * (v419_.v511 + v45 + (int)v39) + 94;
    v52 = v46 + 2 * (v419_.v511 + v45) + 2LL * (int)v39 + v6 + 92;
    v53 = v51 + v46;
    do {
      if (v45 != 0) {
        v54 = v45;
        v55 = (__int16*)v47;
        do {
          v56 = v55[(unsigned __int64)v46 / 2];
          if (v42 + *v55 > v56) {
            LOWORD(v56) = v42 + *v55;
          }
          --v54;
          *v55++ = v56;
        } while (v54 != 0);
      }
      if (v49 <= 0xFFFFFFFFFFFFFFF8LL) {
        v57 = v53;
        v58 = v51;
        v59 = v48;
        v60 = v52;
        do {
          v61 = (__int16*)(v58 + v44);
          v62 = *(__int16*)(v60 + 4LL * v34);
          v60 += 16;
          v58 += 16;
          v63 = v42 + *v61;
          if (v42 + *(v61 - 1) > v62) {
            LOWORD(v62) = v42 + *(v61 - 1);
          }
          *(v61 - 1) = v62;
          v64 = (__int16*)(v57 + v44);
          v57 += 16;
          v65 = *v64;
          if (v63 > v65) {
            LOWORD(v65) = v63;
          }
          v66 = v61[1];
          *v61 = v65;
          v67 = v64[1];
          v68 = v42 + v66;
          if (v68 > v67) {
            LOWORD(v67) = v68;
          }
          v69 = v61[2];
          v61[1] = v67;
          v70 = v64[2];
          v71 = v42 + v69;
          if (v71 > v70) {
            LOWORD(v70) = v71;
          }
          v72 = v61[3];
          v61[2] = v70;
          v73 = v64[3];
          v74 = v42 + v72;
          if (v74 > v73) {
            LOWORD(v73) = v74;
          }
          v75 = v61[4];
          v61[3] = v73;
          v76 = v64[4];
          v77 = v42 + v75;
          if (v77 > v76) {
            LOWORD(v76) = v77;
          }
          v78 = v61[5];
          v61[4] = v76;
          v79 = v64[5];
          v80 = v42 + v78;
          if (v80 > v79) {
            LOWORD(v79) = v80;
          }
          v61[5] = v79;
          v81 = v64[6];
          if (v42 + v61[6] > v81) {
            LOWORD(v81) = v42 + v61[6];
          }
          v59 -= 8;
          v61[6] = v81;
        } while (v59 != 0);
      }
      ++v43;
      v47 += v50;
      v52 += v50;
      v51 += v50;
      v53 += v50;
    } while (v43 != v11);
  }
  v419_.v508 = v39;
  v82 = *(_DWORD*)(v6 + 44);
  if ((int)v419_.v512 >= 1 && v40 > (int)v419_.v511) {
    v83 = 0;
    v84 = 0;
    v419_.v489 = v5;
    v85 = (int)v419_.v509;
    do {
      v86 = v419_.v511;
      v87 = v84 * v5;
      LODWORD(v419_.v513) = v84;
      do {
        v89 = *(__int16*)(v419_.v514 + 2 * v86++);
        v90 = v89 << v419_.v515;
        v91 = (*(__int16*)(v419_.v514 + 2 * v86) - v89) << v419_.v515;
        if (v91 >= 1) {
          v92 = (unsigned int)((*(__int16*)(v419_.v514 + 2 * v86) - v89)
                               << v419_.v515);
          v93 = (_WORD*)(v419_.v517 + 2LL * (v83 + v90));
          do {
            --v92;
            v82 = celt_lcg_rand(v82);
            *v93++ = v82 >> 20;
          } while (v92 != 0);
        }
        v88 = v90 + v87;
        v6 = v419_.v516;
        renormalise_vector((__int16*)(v419_.v517 + 2LL * v88), v91, 0x7FFF);
      } while (v86 != v85);
      LODWORD(v5) = v419_.v489;
      v84 = v419_.v513 + 1;
      v83 += v419_.v489;
    } while ((_DWORD)v419_.v513 + 1 != (_DWORD)v419_.v512);
  }
  v94 = (int)v419_.v437 >> 1;
  v95 = v419_.v436 + 2LL * (int)v419_.v508;
  v96 = v419_.v512;
  *(_DWORD*)(v6 + 44) = v82;
  v97 = 4LL * (v94 - (int)v5 + 2048);
  v98 = v419_.v482 & 7;
  if (v96 >= 8) {
    v99 = v419_.v485;
    v101 = 0;
    v102 = -(__int64)((unsigned int)v419_.v482 & 0xFFFFFFF8);
    v103 = &v419_.v522;
    do {
      memmove_plt(*(v103 - 4), *(v103 - 4) + 4 * v99, v97);
      memmove_plt(*(v103 - 3), *(v103 - 3) + 4 * v99, v97);
      memmove_plt(*(v103 - 2), *(v103 - 2) + 4 * v99, v97);
      memmove_plt(*(v103 - 1), *(v103 - 1) + 4 * v99, v97);
      memmove_plt(*v103, *v103 + 4 * v99, v97);
      memmove_plt(v103[1], v103[1] + 4 * v99, v97);
      memmove_plt(v103[2], v103[2] + 4 * v99, v97);
      memmove_plt(v103[3], v103[3] + 4 * v99, v97);
      v101 -= 8;
      v103 += 8;
    } while (v102 != v101);
    v100 = -v101;
    if (v98 == 0) {
      goto LABEL_72;
    }
    goto LABEL_70;
  }
  v99 = v419_.v485;
  v100 = 0;
  if ((v419_.v482 & 7) != 0) {
  LABEL_70:
    v104 = &v419_.v519[v100];
    do {
      v105 = *v104++;
      memmove_plt(v105, v105 + 4 * v99, v97);
      --v98;
    } while (v98 != 0);
  }
LABEL_72:
  result =
      celt_synthesis_alt1(v419_.v510, v419_.v517, v419_.v518, v95, v419_.v511,
                          v419_.v509, v419_.v512, v419_.v512, 0, v419_.v515,
                          *(_DWORD*)(v6 + 20), 0, *(_DWORD*)(v6 + 40));
LABEL_73:
  *(_DWORD*)(v6 + 56) = v419_.v481 + 1;
  return result;
}

__int64 celt_synthesis(__int16** a1, __int64 a2, int** a3, __int64 a4, int a5,
                       int a6, int a7, unsigned int a8, int a9, int a10,
                       int a11, int a12, unsigned int a13)
{
  int v13;
  int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  int* v23;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int* v29;
  __int64 result;
  __int64 v31;
  int v32;
  __int16** v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int16** v37;
  __int64 v38;
  int* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  __int64 v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int16** v61;
  __int64 v62;
  __int64 v63;
  int* v64;
  int v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int* v74;
  __int64 v75;
  __int16** v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  __int64 v81;
  int* v82;
  __int64 v83;
  int* v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  int v92;
  int v93;
  int v94;
  int v95;
  __int64 v96;
  int* v97;
  int* v98;
  int v99;
  int v100;
  int v101;
  __int16** v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int* v111;
  int v112;
  __int64 v113;
  int v114;
  __int64 v115;
  int v116;
  __int64 v117;
  int v118;
  __int64 v119;
  int v120;
  __int64 v121;
  int v122;
  __int64 v123;
  int v124;
  __int64 v125;
  int v126;
  __int64 v127;
  __int64 v128;
  int* v129;
  int v130;
  struct {
    _BYTE v131[12];
    int v132;
    __int64 v133;
    __int64 v134;
    int* v135;
    __int64 v136;
    char gap64_[4];
    int v137;
    __int64 v138;
    int* v139;
    __int64 v140;
    char gap96_[4];
    int v141;
    unsigned int v142;
    int v143;
    int v144;
    int v145;
    __int64 v146;
    int v147;
    int v148;
    int* v149;
  } v131_;

  v13 = a10;
  v131_.v144 = a5;
  v131_.v145 = a6;
  v131_.v148 = a12;
  v131_.v142 = a13;
  v131_.v143 = a11;
  v19 = *((_DWORD*)a1 + 1);
  v131_.v140 = *((int*)a1 + 2);
  v20 = *((_DWORD*)a1 + 10);
  v21 = 4LL * (int)(v20 << a10);
  v22 = (int)(v20 << a10);
  v23 = (int*)&v131_.v131[-((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v25 = v21;
  v26 = *((_DWORD*)a1 + 8);
  if (a9 != 0) {
    v13 = 0;
    v27 = (unsigned int)(1 << a10);
  }
  else {
    v27 = 1;
  }
  v131_.v147 = 1 << a10;
  v131_.v133 = v27;
  if (a9 != 0) {
    v28 = v20;
  }
  else {
    v28 = v20 << a10;
  }
  v131_.v134 = v28;
  v131_.v141 = v26 - v13;
  memset_plt(&v131_.v131[-((v21 + 15) & 0xFFFFFFFFFFFFFFF0LL)], 0, v21);
  v131_.v146 = v22;
  v131_.v132 = a8;
  if (a7 == 1 && a8 == 2) {
    denormalise_bands((__int64)a1, a2, v23, a4, v131_.v144, v131_.v145,
                      v131_.v147, v131_.v143, v131_.v148);
    v29 = &a3[1][v19 / 2];
    result = memcpy_plt(v29, v23, v25);
    v31 = v131_.v133;
    v32 = v131_.v141;
    if ((int)v131_.v133 >= 1) {
      v131_.v139 = v23;
      v33 = a1;
      v34 = 0;
      v35 = v131_.v133;
      v36 = v19;
      v37 = v33;
      v38 = 4LL * (int)v131_.v134;
      do {
        clt_mdct_backward_c((__int64)(v37 + 9), v29,
                            (__int16*)((char*)*a3 + v34), v37[8], v36, v32,
                            v31);
        v34 += v38;
        ++v29;
        --v35;
      } while (v35 != 0);
      v39 = v131_.v139;
      v40 = 0;
      v41 = v31;
      v42 = 4LL * (int)v131_.v134;
      do {
        result = clt_mdct_backward_c((__int64)(v37 + 9), v39,
                                     (__int16*)((char*)a3[1] + v40), v37[8],
                                     v36, v32, v31);
        v40 += v42;
        ++v39;
        --v41;
      } while (v41 != 0);
    }
    goto LABEL_44;
  }
  v131_.v138 = a4;
  if (a7 != 2 || a8 != 1) {
    v57 = v131_.v147;
    v58 = v131_.v148;
    v131_.v136 = a2;
    v131_.v139 = v23;
    if ((int)v131_.v133 <= 0) {
      v73 = 2 * v22;
      v75 = v131_.v138;
      v74 = v131_.v139;
      v76 = a1;
      if ((int)a8 <= 1) {
        v77 = 1;
      }
      else {
        v77 = a8;
      }
      v79 = v131_.v144;
      v78 = v131_.v145;
      v80 = v131_.v143;
      v81 = v131_.v136;
      v131_.v149 = (int*)(2 * v131_.v140);
      do {
        result = denormalise_bands((__int64)v76, v81, v74, v75, v79, v78,
                                   v131_.v147, v80, v58);
        v58 = v131_.v148;
        v81 += v73;
        --v77;
        v75 += (__int64)v131_.v149;
      } while (v77 != 0);
    }
    else {
      v131_.v137 = v19;
      v59 = v131_.v144;
      v60 = v131_.v145;
      v61 = a1;
      if ((int)a8 <= 1) {
        v62 = 1;
      }
      else {
        v62 = a8;
      }
      v63 = v131_.v138;
      v64 = v131_.v139;
      v65 = v131_.v143;
      v66 = v131_.v136;
      v67 = v131_.v137;
      v131_.v149 = nullptr;
      v131_.v135 = (int*)v62;
      v68 = v131_.v133;
      v131_.v134 = 4LL * (int)v131_.v134;
      do {
        denormalise_bands(
            (__int64)v61, v66 + 2 * (_QWORD)v131_.v149 * v131_.v146, v64,
            v63 + 2 * (_QWORD)v131_.v149 * v131_.v140, v59, v60, v57, v65, v58);
        v69 = v131_.v134;
        v70 = v131_.v141;
        v71 = 0;
        v72 = v68;
        do {
          result = clt_mdct_backward_c(
              (__int64)(v61 + 9), v64,
              (__int16*)((char*)a3[(_QWORD)v131_.v149] + v71), v61[8], v67, v70,
              v68);
          v71 += v69;
          ++v64;
          --v72;
        } while (v72 != 0);
        v66 = v131_.v136;
        v63 = v131_.v138;
        v64 = v131_.v139;
        v59 = v131_.v144;
        v60 = v131_.v145;
        v65 = v131_.v143;
        v57 = v131_.v147;
        v58 = v131_.v148;
        v131_.v149 = (int*)((char*)v131_.v149 + 1);
      } while (v131_.v149 != v131_.v135);
    }
    goto LABEL_44;
  }
  v43 = *a3;
  v44 = v131_.v148;
  v131_.v137 = v19;
  v45 = a2;
  v131_.v136 = v19 + ((unsigned int)v19 >> 31);
  v131_.v139 = v43;
  v131_.v149 = &v43[v19 / 2];
  v46 = a2;
  v47 = a4;
  v49 = v131_.v144;
  v48 = v131_.v145;
  v50 = v22;
  v51 = v131_.v147;
  v52 = v131_.v143;
  denormalise_bands((__int64)a1, v46, v23, v47, v131_.v144, v131_.v145,
                    v131_.v147, v131_.v143, v131_.v148);
  result =
      denormalise_bands((__int64)a1, v45 + 2 * v50, v131_.v149,
                        v131_.v138 + 2 * v131_.v140, v49, v48, v51, v52, v44);
  v53 = v131_.v133;
  if ((int)v50 >= 1) {
    v54 = (__int64)(int)v131_.v136 >> 1;
    v55 = v50 & 7;
    if ((unsigned int)v50 < 8) {
      v56 = 0;
      if ((v50 & 7) == 0) {
        goto LABEL_41;
      }
      goto LABEL_39;
    }
    v82 = v23 + 4;
    v83 = 0;
    v84 = &v131_.v139[v54 + 4];
    do {
      v85 = *(v82 - 3);
      v83 -= 8;
      *(v82 - 4) = (*(v84 - 4) >> 1) + (*(v82 - 4) >> 1);
      v86 = (*(v84 - 3) >> 1) + (v85 >> 1);
      v87 = *(v82 - 2);
      v88 = *(v82 - 1);
      *(v82 - 3) = v86;
      *(v82 - 2) = (*(v84 - 2) >> 1) + (v87 >> 1);
      v89 = (*(v84 - 1) >> 1) + (v88 >> 1);
      v90 = *v82;
      v91 = v82[1];
      *(v82 - 1) = v89;
      *v82 = (*v84 >> 1) + (v90 >> 1);
      v92 = (v84[1] >> 1) + (v91 >> 1);
      v93 = v82[2];
      v94 = v82[3];
      v82[1] = v92;
      v82[2] = (v84[2] >> 1) + (v93 >> 1);
      v95 = v84[3];
      v84 += 8;
      v82[3] = (v95 >> 1) + (v94 >> 1);
      v82 += 8;
    } while (-(v50 & 0x7FFFFFF8) != v83);
    v56 = -v83;
    if ((v50 & 7) != 0) {
    LABEL_39:
      v96 = v56;
      v97 = &v23[v56];
      v98 = &v131_.v139[v54 + v96];
      do {
        v99 = *v98++;
        --v55;
        *v97 = (v99 >> 1) + (*v97 >> 1);
        ++v97;
      } while (v55 != 0);
    }
  }
LABEL_41:
  v100 = v131_.v141;
  v101 = v131_.v137;
  if ((int)v53 >= 1) {
    v102 = a1;
    v103 = 0;
    v104 = v53;
    v105 = 4LL * (int)v131_.v134;
    do {
      result = clt_mdct_backward_c((__int64)(v102 + 9), v23,
                                   (__int16*)((char*)*a3 + v103), v102[8], v101,
                                   v100, v53);
      v103 += v105;
      ++v23;
      --v104;
    } while (v104 != 0);
  }
LABEL_44:
  v106 = v131_.v146;
  if ((int)v131_.v146 >= 1) {
    v107 = v131_.v146 & 0x7FFFFFF8;
    v108 = 0;
    if (v131_.v132 <= 1) {
      v109 = 1;
    }
    else {
      v109 = (unsigned int)v131_.v132;
    }
    do {
      if (v106 >= 8) {
        v110 = 0;
        do {
          v111 = a3[v108];
          v112 = v111[v110];
          if (v112 <= -300000000) {
            v112 = -300000000;
          }
          if (v112 >= 300000000) {
            v112 = 300000000;
          }
          v111[v110] = v112;
          v113 = (__int64)&a3[v108][v110];
          v114 = *(_DWORD*)(v113 + 4);
          if (v114 <= -300000000) {
            v114 = -300000000;
          }
          if (v114 >= 300000000) {
            v114 = 300000000;
          }
          *(_DWORD*)(v113 + 4) = v114;
          v115 = (__int64)&a3[v108][v110];
          v116 = *(_DWORD*)(v115 + 8);
          if (v116 <= -300000000) {
            v116 = -300000000;
          }
          if (v116 >= 300000000) {
            v116 = 300000000;
          }
          *(_DWORD*)(v115 + 8) = v116;
          v117 = (__int64)&a3[v108][v110];
          v118 = *(_DWORD*)(v117 + 12);
          if (v118 <= -300000000) {
            v118 = -300000000;
          }
          if (v118 >= 300000000) {
            v118 = 300000000;
          }
          *(_DWORD*)(v117 + 12) = v118;
          v119 = (__int64)&a3[v108][v110];
          v120 = *(_DWORD*)(v119 + 16);
          if (v120 <= -300000000) {
            v120 = -300000000;
          }
          if (v120 >= 300000000) {
            v120 = 300000000;
          }
          *(_DWORD*)(v119 + 16) = v120;
          v121 = (__int64)&a3[v108][v110];
          v122 = *(_DWORD*)(v121 + 20);
          if (v122 <= -300000000) {
            v122 = -300000000;
          }
          if (v122 >= 300000000) {
            v122 = 300000000;
          }
          *(_DWORD*)(v121 + 20) = v122;
          v123 = (__int64)&a3[v108][v110];
          v124 = *(_DWORD*)(v123 + 24);
          if (v124 <= -300000000) {
            v124 = -300000000;
          }
          if (v124 >= 300000000) {
            v124 = 300000000;
          }
          *(_DWORD*)(v123 + 24) = v124;
          v125 = (__int64)&a3[v108][v110];
          v110 += 8;
          v126 = *(_DWORD*)(v125 + 28);
          if (v126 <= -300000000) {
            v126 = -300000000;
          }
          if (v126 >= 300000000) {
            v126 = 300000000;
          }
          *(_DWORD*)(v125 + 28) = v126;
        } while (v107 != v110);
      }
      else {
        v110 = 0;
      }
      if ((v106 & 7) != 0) {
        v127 = v110;
        v128 = v106 & 7;
        do {
          v129 = a3[v108];
          v130 = v129[v127];
          if (v130 <= -300000000) {
            v130 = -300000000;
          }
          if (v130 >= 300000000) {
            v130 = 300000000;
          }
          --v128;
          v129[v127++] = v130;
        } while (v128 != 0);
      }
      ++v108;
    } while (v108 != v109);
  }
  return result;
}

#pragma GCC visibility pop
