#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* silk_sum_sqr_shift(_DWORD* result, int*, __int64, signed int);
__int16* opus_silk_58bc0(__int16* result, _DWORD*, int, int);
__int64 celt_pitch_xcorr_c(__int16*, __int64, __int64, int, unsigned int);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_652a0(__int64, __int64, int);
__int64 silk_P_Ana_calc_energy_st3(__int64 result, __int64, int, __int64, int,
                                   int, int);
__int64 silk_lin2log(unsigned int);
extern _UNKNOWN* MovieData_c0ab8;
extern _UNKNOWN* MovieData_c0ac0;
extern _UNKNOWN* MovieData_c0ac8;
extern _UNKNOWN* MovieData_c0ad0;
extern _UNKNOWN* MovieData_c0b18;
extern _UNKNOWN* MovieData_c0b08;
extern _UNKNOWN* MovieData_c0b10;
int* opus_silk_570e0(int* result, __int64, __int64, int);
int* opus_silk_572a0(int*, _WORD*, __int64, int);
__int64 silk_pitch_analysis_core(__int64 a1, __int64 a2, _WORD* a3, _BYTE* a4,
                                 __int16* a5, int a6, int a7, int a8, int a9,
                                 int a10, unsigned int a11, int a12);
_DWORD* silk_P_Ana_calc_corr_st3(_DWORD* result, __int64 a2, int a3, __int64 a4,
                                 int a5, int a6, int a7);

__int64 silk_pitch_analysis_core(__int64 a1, __int64 a2, _WORD* a3, _BYTE* a4,
                                 __int16* a5, int a6, int a7, int a8, int a9,
                                 int a10, unsigned int a11, int a12)
{
  __int64 v12;
  unsigned int v14;
  int v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  _BYTE* v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  _WORD* v23;
  __int16* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  _WORD* v31;
  __int64 v32;
  __int64 v33;
  _BYTE* v34;
  unsigned __int64 v35;
  int v36;
  __int16* v37;
  __int16* v38;
  int v39;
  int v40;
  int v41;
  __int64 v42;
  __int16* v43;
  _BYTE* v44;
  __int16* v45;
  __int16* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int16* v57;
  int v58;
  unsigned int v59;
  unsigned int v60;
  unsigned int v61;
  unsigned int v62;
  int v63;
  char v64;
  int v65;
  int v66;
  __int64 v67;
  int v68;
  __int16 v69;
  int v70;
  unsigned int v71;
  unsigned int v72;
  __int64 v73;
  __int16 v74;
  __int16* v75;
  __int64 v76;
  int* v77;
  __int64 v78;
  int* v79;
  unsigned int v80;
  int v81;
  int v82;
  int v83;
  unsigned int v84;
  unsigned int v85;
  unsigned int v86;
  signed int v87;
  unsigned int v88;
  int v89;
  int v90;
  char v91;
  __int64 v92;
  int v93;
  int v94;
  int v95;
  unsigned int v96;
  __int64 v97;
  unsigned int v98;
  int v99;
  int v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  unsigned int v105;
  int v106;
  int v107;
  __int64 v108;
  signed int v109;
  int v110;
  int v111;
  __int16 v112;
  __int64 v113;
  __int16* v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  unsigned int v129;
  __int64 v130;
  unsigned int v131;
  __int64 v132;
  int v133;
  __int16* v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  int v141;
  __int64 v142;
  int v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  int v147;
  int v148;
  __int64 v149;
  int v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int16* v155;
  _BYTE* v156;
  int v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  int* v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  int* v167;
  __int64 v168;
  int v169;
  _WORD* v170;
  unsigned __int64 v171;
  __int16 v172;
  __int16 v173;
  __int16 v174;
  __int16 v175;
  __int16 v176;
  __int16 v177;
  __int16 v178;
  __int16 v179;
  __int16 v180;
  __int16 v181;
  __int16 v182;
  __int16 v183;
  __int16 v184;
  __int16* v185;
  __int64 v186;
  int v187;
  _WORD* v188;
  unsigned __int64 i;
  __int16 v190;
  __int16 v191;
  __int16 v192;
  __int16 v193;
  __int16 v194;
  __int16* v195;
  __int64 v196;
  int v197;
  __int64 v198;
  int v199;
  __int16* v200;
  unsigned __int64 v201;
  int v202;
  int v203;
  int v204;
  __int64 v205;
  __int64 v206;
  int v207;
  unsigned int v208;
  int v209;
  unsigned int v210;
  unsigned int v211;
  unsigned int v212;
  signed int v213;
  int v214;
  int v215;
  __int64 v216;
  int v217;
  __int16 v218;
  int v219;
  unsigned int v220;
  unsigned int v221;
  int v222;
  signed int v223;
  __int64 v224;
  char* v225;
  __int64 v226;
  __int64 v227;
  bool v228;
  _BOOL4 v229;
  int v230;
  __int64 v231;
  __int64 v232;
  unsigned int v233;
  unsigned int v234;
  __int64 v235;
  char* v236;
  __int64 v237;
  int v238;
  __int64 v239;
  char* v240;
  int v241;
  int v242;
  int v243;
  char* v244;
  int v245;
  char* v246;
  int v247;
  int v248;
  char* v249;
  int v250;
  int v251;
  char* v252;
  int v253;
  int v254;
  char* v255;
  int v256;
  __int64 v257;
  __int64 v258;
  int v259;
  int v260;
  int v261;
  __int64 v262;
  unsigned int v263;
  int* v264;
  int v265;
  int v266;
  unsigned int v267;
  unsigned int v268;
  bool v269;
  int v270;
  bool v271;
  int v272;
  int v273;
  __int64 v274;
  bool v275;
  __int64 j;
  __int16 v277;
  int v278;
  unsigned int v279;
  bool v280;
  int v281;
  int v282;
  int v283;
  int v284;
  int v285;
  int v286;
  int v287;
  int v288;
  __int64 result;
  _BYTE* v290;
  __int64 v291;
  __int64 v292;
  __int64 v293;
  char* v294;
  int* v295;
  int v296;
  int v297;
  int v298;
  int v299;
  int v300;
  int* v301;
  char* v302;
  int v303;
  int v304;
  __int16 v305;
  int v306;
  int v307;
  int v308;
  int v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  _DWORD* v314;
  char* v315;
  int v316;
  _DWORD* v317;
  char* v318;
  int v319;
  __int64 v320;
  __int64 v321;
  int v322;
  int v323;
  __int64 v324;
  _DWORD* v325;
  _DWORD* v326;
  int v327;
  __int64 v328;
  unsigned int v329;
  int v330;
  int v331;
  __int64 v332;
  int v333;
  __int64 v334;
  int v335;
  __int64 v336;
  __int64 v337;
  _DWORD* v338;
  _DWORD* v339;
  __int64 v340;
  signed int v341;
  int v342;
  unsigned __int64 v343;
  __int64 v344;
  int* v345;
  int v346;
  int* v347;
  int v348;
  int* v349;
  int v350;
  int v351;
  int* v352;
  int v353;
  int v354;
  int* v355;
  int v356;
  int v357;
  int* v358;
  __int64 v359;
  __int64 v360;
  int v361;
  unsigned int v362;
  signed int v363;
  unsigned int v364;
  unsigned int v365;
  int v366;
  int v367;
  __int64 v368;
  signed int v369;
  int v370;
  int v371;
  int v372;
  int v373;
  __int64 v374;
  int v375;
  __int64 v376;
  __int64 v377;
  __int64 v378;
  char* v379;
  int* v380;
  int v381;
  int v382;
  int v383;
  int v384;
  int v385;
  int v386;
  int v387;
  int v388;
  int v389;
  int v390;
  int v391;
  int v392;
  int v393;
  _DWORD* v394;
  char* v395;
  int v396;
  int v397;
  int v398;
  int v399;
  _BYTE v400[252];
  int v401;
  struct {
    _BYTE v402[4];
    int v403;
    unsigned int v404;
    int v405;
    __int64 v406;
    char gap24_[4];
    int v407;
    _WORD* v408;
    _BYTE* v409;
    __int64 v410;
    char gap56_[4];
    int v411;
    int v412;
    signed int v413;
    __int64 v414;
    char gap80_[4];
    int v415;
    __int64 v416;
    int* v417;
    __int64 v418;
    char* v419;
    __int16* v420;
    __int64 v421;
    int* v422;
    _BYTE* v423;
    __int64 v424;
    unsigned __int64 v425;
    __int16* v426;
    __int16* v427;
    __int16* v428;
    __int64 v429;
    unsigned __int64 v430;
    char gap208_[4];
    int v431;
  } v402_;
  _QWORD v432[2];
  struct {
    _QWORD v433[3];
    int v434;
  } v433_;
  unsigned int v435;
  _QWORD v436[2];
  _QWORD v437[10];
  unsigned int v438;
  struct {
    __int64 v439;
    __int64 v440;
    __int64 v441;
  } v439_;

  v12 = a1;
  v439_.v440 = 0;
  v439_.v441 = 0;
  v439_.v439 = 0;
  v438 = 0;
  LODWORD(v402_.v416) = a7;
  memset(v437, 0, sizeof(v437));
  v436[0] = 0;
  v436[1] = 0;
  v435 = 0;
  LODWORD(v402_.v421) = a6;
  v402_.v420 = a5;
  v402_.v409 = a4;
  v402_.v408 = a3;
  v402_.v410 = a2;
  v402_.v430 = a11;
  v14 = 5 * a11 + 20;
  v15 = v14 * a9;
  v16 = 8 * v14;
  silk_sum_sqr_shift(&v438, (int*)&v435, a1, v14 * a9);
  v17 = 2LL * (int)(v14 * a9);
  v18 = v435 - __clz(v438);
  v19 = &v402_.v402[-((v17 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  v435 = v18 + 3;
  memset_plt(v19, 0, v17);
  LODWORD(v402_.v417) = a8;
  if ((int)(v18 + 3) < 1) {
    goto LABEL_12;
  }
  v20 = (v18 + 4) >> 1;
  v435 = v20;
  if (v15 >= 1) {
    v21 = v15 & 7;
    if ((unsigned int)v15 >= 8) {
      v23 = v19 + 8;
      v24 = (__int16*)(v12 + 8);
      v25 = 0;
      do {
        v25 -= 8;
        *(v23 - 4) = *(v24 - 4) >> v20;
        *(v23 - 3) = *(v24 - 3) >> v20;
        *(v23 - 2) = *(v24 - 2) >> v20;
        *(v23 - 1) = *(v24 - 1) >> v20;
        *v23 = *v24 >> v20;
        v23[1] = v24[1] >> v20;
        v23[2] = v24[2] >> v20;
        v26 = v24[3];
        v24 += 8;
        v23[3] = v26 >> v20;
        v23 += 8;
      } while (-(__int64)(v15 & 0x7FFFFFF8) != v25);
      v22 = -v25;
      if ((v15 & 7) == 0) {
        goto LABEL_11;
      }
    }
    else {
      v22 = 0;
      if ((v15 & 7) == 0) {
        goto LABEL_11;
      }
    }
    v27 = 2 * v22;
    do {
      --v21;
      *(_WORD*)&v19[v27] = *(__int16*)(v12 + v27) >> v20;
      v27 += 2;
    } while (v21 != 0);
  }
LABEL_11:
  v12 = (__int64)v19;
LABEL_12:
  v28 = 4 * v14;
  if (a9 == 8) {
    v29 = 1;
  }
  else {
    v29 = 8 * v14;
  }
  v30 = 2LL * v29;
  v31 = &v402_.v402[-((v30 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v31, 0, v30);
  v402_.v412 = a9;
  if (a9 == 16) {
    v439_.v439 = 0;
    opus_silk_570e0((int*)&v439_.v439, (__int64)v31, v12, v15);
  }
  else {
    v32 = v12;
    if (a9 != 12) {
      goto LABEL_20;
    }
    v439_.v440 = 0;
    v439_.v441 = 0;
    v439_.v439 = 0;
    opus_silk_572a0((int*)&v439_.v439, v31, v12, v15);
  }
  v32 = (__int64)v31;
LABEL_20:
  v33 = 2LL * v28;
  v433_.v434 = 0;
  v432[1] = 0;
  memset(v433_.v433, 0, sizeof(v433_.v433));
  v432[0] = 0;
  v439_.v439 = 0;
  v402_.v406 = v12;
  v34 = &v402_.v402[-((v33 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v34, 0, v33);
  v402_.v419 = (char*)v32;
  opus_silk_570e0((int*)&v439_.v439, (__int64)v34, v32, v16);
  v35 = v402_.v430;
  if ((int)v402_.v430 >= -3) {
    v36 = 20 * v402_.v430 + 81;
    v37 = (__int16*)&v34[2 * v28 - 4];
    v38 = (__int16*)&v34[2 * (unsigned int)(20 * v402_.v430 + 76) + 6];
    do {
      v39 = *v37--;
      --v36;
      v40 = *v38 + v39;
      if (v40 >= 0x7FFF) {
        v40 = 0x7FFF;
      }
      if (v40 <= -32768) {
        LOWORD(v40) = 0x8000;
      }
      *v38-- = v40;
    } while (v36 > 2);
  }
  v41 = a10;
  v42 = 264LL * (_DWORD)v35;
  v43 = (__int16*)&v402_.v402[-((v42 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
  memset_plt(v43, 0, v42);
  v44 = v400;
  memset_plt(v400, 0, 260);
  memset_plt(v43, 0, 130LL * ((int)v35 >> 1));
  v402_.v424 = (unsigned int)((int)v35 >> 1);
  v402_.v431 = a12;
  v402_.v411 = a10;
  if ((int)v35 >> 1 < 1) {
    goto LABEL_82;
  }
  v45 = (__int16*)(v34 + 160);
  v46 = (__int16*)(v34 + 222);
  v47 = 0;
  v402_.v423 = v400;
  v402_.v418 = 264LL * (_DWORD)v35;
  v48 = 0x100000000LL;
  v402_.v422 = &v401;
  v49 = 0x200000000LL;
  do {
    v402_.v425 = v49;
    v402_.v426 = (__int16*)v48;
    v402_.v427 = v46;
    v50 = (__int64)(v45 - 8);
    v402_.v429 = v47;
    celt_pitch_xcorr_c(v45, (__int64)(v45 - 72), (__int64)v44, 40, 0x41u);
    v51 = *((_DWORD*)v44 + 64);
    v402_.v428 = v45;
    v52 = opus_652a0((__int64)v45, (__int64)v45, 40);
    v53 = v52 + opus_652a0(v50, v50, 40);
    v54 = v402_.v429;
    v56 = v402_.v425;
    v55 = (__int64)v402_.v426;
    v57 = v402_.v427;
    v58 = v53 + 160000;
    if (v51 >= 0) {
      v59 = v51;
    }
    else {
      v59 = -v51;
    }
    v60 = -160000 - v53;
    v61 = __clz(v59);
    if (v58 >= 0) {
      v60 = v58;
    }
    v62 = __clz(v60);
    v63 = v51 << (v61 - 1);
    v64 = v62 - 1;
    v65 = v61 - v62;
    v66 = v58 << v64;
    v67 = (0x1FFFFFFF / (v66 >> 16) * (__int64)v63) >> 16;
    v68 =
        ((unsigned __int64)(0x1FFFFFFF / (v66 >> 16) *
                            (__int64)(int)(v63 -
                                           (((unsigned __int64)((int)v67 *
                                                                (__int64)v66) >>
                                             29) &
                                            0xFFFFFFF8))) >>
         16) +
        v67;
    if ((unsigned int)(v65 + 29) >= 0x2E) {
      v69 = 0;
    }
    else {
      v69 = v68 >> (v65 + 15);
    }
    v70 = (int)0x80000000 >> (-15 - v65);
    if (v70 <= v68) {
      v70 = v68;
    }
    if ((int)(0x7FFFFFFFu >> (-15 - v65)) >= v68) {
      v71 = v70;
    }
    else {
      v71 = 0x7FFFFFFFu >> (-15 - v65);
    }
    v72 = v71 << (-15 - v65);
    v73 = v402_.v425;
    if (v65 <= -16) {
      v74 = v72;
    }
    else {
      v74 = v69;
    }
    v75 = v402_.v427;
    v43[65 * v402_.v429] = v74;
    v76 = 64;
    v77 = v402_.v422;
    v78 = v55;
    v79 = v402_.v422;
    do {
      v81 = *v79;
      v79 -= 2;
      v80 = v81;
      v82 = *(v77 - 1);
      v83 = v58 + (*v75 + *(v75 - 40)) * (*(v75 - 40) - *v75);
      if (v81 >= 0) {
        v84 = v80;
      }
      else {
        v84 = -v80;
      }
      v85 = __clz(v84);
      if (v83 >= 0) {
        v86 = v83;
      }
      else {
        v86 = -v83;
      }
      v87 = v80 << (v85 - 1);
      v88 = __clz(v86);
      v89 = v85 - v88;
      v90 = v83 << (v88 - 1);
      v91 = -15 - v89;
      v92 = (0x1FFFFFFF / (v90 >> 16) * (__int64)v87) >> 16;
      v93 = (int)0x80000000 >> (-15 - v89);
      v94 = ((unsigned __int64)(0x1FFFFFFF / (v90 >> 16) *
                                (__int64)(int)(v87 -
                                               (((unsigned __int64)((int)v92 *
                                                                    (__int64)
                                                                        v90) >>
                                                 29) &
                                                0xFFFFFFF8))) >>
             16) +
            v92;
      v95 = v94 >> (v89 + 15);
      if ((unsigned int)(v89 + 29) >= 0x2E) {
        LOWORD(v95) = 0;
      }
      if (v93 <= v94) {
        v93 = v94;
      }
      if ((int)(0x7FFFFFFFu >> (-15 - v89)) >= v94) {
        v96 = v93;
      }
      else {
        v96 = 0x7FFFFFFFu >> (-15 - v89);
      }
      v228 = v89 <= -16;
      v97 = v78 >> 31;
      v78 += 0x200000000LL;
      v98 = v96 << v91;
      v99 = *(v75 - 41);
      if (!v228) {
        LOWORD(v98) = v95;
      }
      v100 = *(v75 - 1);
      v75 -= 2;
      *(__int16*)((char*)v43 + v97) = v98;
      v58 = v83 + (v100 + v99) * (v99 - v100);
      if (v82 >= 0) {
        v101 = v82;
      }
      else {
        v101 = -v82;
      }
      v102 = __clz(v101);
      if (v58 >= 0) {
        v103 = v58;
      }
      else {
        v103 = -v58;
      }
      v104 = v82 << (v102 - 1);
      v105 = __clz(v103);
      v106 = v102 - v105;
      v107 = v58 << (v105 - 1);
      v108 = (0x1FFFFFFF / (v107 >> 16) * (__int64)v104) >> 16;
      v109 = (int)0x80000000 >> (-15 - v106);
      v110 =
          ((unsigned __int64)(0x1FFFFFFF / (v107 >> 16) *
                              (__int64)(int)(v104 -
                                             (((unsigned __int64)((int)v108 *
                                                                  (__int64)
                                                                      v107) >>
                                               29) &
                                              0xFFFFFFF8))) >>
           16) +
          v108;
      if (v109 <= v110) {
        v109 = v110;
      }
      v228 = (int)(0x7FFFFFFFu >> (-15 - v106)) < v110;
      v111 = v110 >> (v106 + 15);
      if (v228) {
        v109 = 0x7FFFFFFFu >> (-15 - v106);
      }
      if ((unsigned int)(v106 + 29) >= 0x2E) {
        LOWORD(v111) = 0;
      }
      if (v106 >= -15) {
        v112 = v111;
      }
      else {
        v112 = v109 << (-15 - v106);
      }
      v113 = v73 >> 31;
      v73 += 0x200000000LL;
      v76 -= 2;
      v77 = v79;
      *(__int16*)((char*)v43 + v113) = v112;
    } while (v76 != 0);
    v47 = v54 + 1;
    v46 = v57 + 40;
    v49 = v56 + 0x4100000000LL;
    v48 = v55 + 0x4100000000LL;
    v44 = v402_.v423;
    v45 = v402_.v428 + 40;
  } while (v47 != v402_.v424);
  v35 = v402_.v430;
  v41 = v402_.v411;
  v42 = v402_.v418;
  if ((_DWORD)v402_.v430 == 4) {
    v114 = v43 + 125;
    v115 = 0xFBC0000000000000LL;
    v116 = 0xFB90000000000000LL;
    v117 = 0xFBB0000000000000LL;
    v118 = 0xFB80000000000000LL;
    v119 = 0xFBA0000000000000LL;
    v120 = 73;
    do {
      v120 -= 5LL;
      v121 = v114[4] + *(v114 - 61);
      v122 = v114[3] + *(v114 - 62);
      v123 = v114[2] + *(v114 - 63);
      v124 = v114[1] + *(v114 - 64);
      v125 = *v114 + *(v114 - 65);
      v126 = v118 >> 48;
      v118 += 0x50000000000000LL;
      LOWORD(v121) = v121 + ((unsigned int)(v121 * v126) >> 16);
      v127 = v116 >> 48;
      v116 += 0x50000000000000LL;
      *(v114 - 61) = v121;
      v128 = v115 >> 48;
      v115 += 0x50000000000000LL;
      v129 = v122 + ((unsigned int)(v122 * v127) >> 16);
      v130 = v119 >> 48;
      v119 += 0x50000000000000LL;
      *(v114 - 62) = v129;
      v131 = v123 + ((unsigned int)(v123 * v130) >> 16);
      v132 = v117 >> 48;
      v117 += 0x50000000000000LL;
      *(v114 - 65) = v125 + ((unsigned int)(v125 * v128) >> 16);
      *(v114 - 63) = v131;
      *(v114 - 64) = v124 + ((unsigned int)(v124 * v132) >> 16);
      v114 -= 5;
    } while (v120 > 8);
    v133 = 1;
  }
  else {
  LABEL_82:
    v134 = v43 + 64;
    v135 = 0xFBC0000000000000LL;
    v136 = 0xFB90000000000000LL;
    v137 = 0xFBB0000000000000LL;
    v138 = 0xFBA0000000000000LL;
    v139 = 0xFB80000000000000LL;
    v140 = 73;
    do {
      v141 = *(v134 - 1);
      v142 = v139 >> 48;
      v143 = *(v134 - 2);
      v144 = v136 >> 48;
      v145 = v138 >> 48;
      v146 = v137 >> 48;
      v140 -= 5LL;
      v147 = *(v134 - 3);
      v136 += 0x50000000000000LL;
      v137 += 0x50000000000000LL;
      v138 += 0x50000000000000LL;
      v139 += 0x50000000000000LL;
      *v134 = ((unsigned int)(2 * *v134 * v142) >> 16) + 2 * *v134;
      v148 = *(v134 - 4);
      *(v134 - 1) = ((unsigned int)(2 * v141 * v144) >> 16) + 2 * v141;
      v149 = v135 >> 48;
      v135 += 0x50000000000000LL;
      *(v134 - 2) = ((unsigned int)(2 * v143 * v145) >> 16) + 2 * v143;
      *(v134 - 3) = ((unsigned int)(2 * v147 * v146) >> 16) + 2 * v147;
      *(v134 - 4) = ((unsigned int)(2 * v148 * v149) >> 16) + 2 * v148;
      v134 -= 5;
    } while (v140 > 8);
    v133 = 0;
  }
  v150 = v402_.v412;
  v151 = (unsigned int)(2 * v41 + 4);
  opus_silk_58bc0(v43, v436, 65, 2 * v41 + 4);
  v152 = *v43;
  if (v152 <= 3276) {
  LABEL_243:
    memset_plt(v402_.v410, 0, 4LL * (int)v35);
    LOBYTE(v288) = 0;
    result = 1;
    *(_DWORD*)v402_.v420 = 0;
    *v402_.v408 = 0;
    v290 = v402_.v409;
    goto LABEL_244;
  }
  LODWORD(v402_.v428) = 18 * v150;
  v402_.v404 = 5 * v150;
  if (2 * v41 <= -4) {
    v155 = (__int16*)&v400[-272];
    v156 = &v400[-298];
    memset_plt(&v400[-272], 0, 268);
    v157 = (int)v402_.v428;
    goto LABEL_103;
  }
  v153 = 0;
  v154 = (unsigned __int64)((int)v152 * (__int64)(int)v402_.v416) >> 16;
  while (v43[v153] > (int)v154) {
    *((_DWORD*)v436 + v153) = 2 * *((_DWORD*)v436 + v153) + 16;
    if (v151 == ++v153) {
      goto LABEL_93;
    }
  }
  LODWORD(v151) = v153;
LABEL_93:
  v155 = (__int16*)&v400[-272];
  v156 = &v400[-298];
  memset_plt(&v400[-272], 0, 268);
  if ((int)v151 < 1) {
    v157 = (int)v402_.v428;
    goto LABEL_103;
  }
  v158 = v151 & 7;
  if ((unsigned int)v151 >= 8) {
    v160 = 0;
    v161 = (int*)v437;
    do {
      v162 = *(v161 - 3);
      v160 -= 8;
      *(_WORD*)&v156[2 * *(v161 - 4)] = 1;
      *(_WORD*)&v156[2 * v162] = 1;
      v163 = *(v161 - 1);
      *(_WORD*)&v156[2 * *(v161 - 2)] = 1;
      *(_WORD*)&v156[2 * v163] = 1;
      v164 = v161[1];
      *(_WORD*)&v156[2 * *v161] = 1;
      *(_WORD*)&v156[2 * v164] = 1;
      v165 = v161[2];
      v166 = v161[3];
      v161 += 8;
      *(_WORD*)&v156[2 * v165] = 1;
      *(_WORD*)&v156[2 * v166] = 1;
    } while (-(v151 & 0x7FFFFFF8) != v160);
    v159 = -v160;
    v157 = (int)v402_.v428;
    if ((v151 & 7) == 0) {
      goto LABEL_103;
    }
    goto LABEL_101;
  }
  v159 = 0;
  v157 = (int)v402_.v428;
  if ((v151 & 7) != 0) {
  LABEL_101:
    v167 = (int*)v436 + v159;
    do {
      v168 = *v167++;
      --v158;
      *(_WORD*)&v156[2 * v168] = 1;
    } while (v158 != 0);
  }
LABEL_103:
  v169 = 2 * v150;
  v402_.v403 = v157 - 1;
  v170 = v155 + 133;
  v171 = 144;
  while (1) {
    v172 = *(v170 - 1);
    v173 = *(v170 - 2);
    *v170 += v173 + v172;
    v174 = *(v170 - 3);
    v175 = v174 + v173;
    *(v170 - 1) = v175 + v172;
    v176 = *(v170 - 4);
    *(v170 - 2) = v175 + v176;
    if (v171 < 0x11) {
      break;
    }
    v177 = *(v170 - 8);
    v170 -= 8;
    v171 -= 8LL;
    v178 = v170[3];
    v179 = v178 + v176;
    v170[5] = v179 + v174;
    v180 = v170[2];
    v170[4] = v179 + v180;
    v181 = v170[1];
    v182 = v181 + v180;
    v183 = v182 + v178;
    v170[2] = v182 + v177;
    v184 = *(v170 - 1);
    v170[3] = v183;
    v170[1] = v184 + v177 + v181;
  }
  v185 = v155 + 6;
  v186 = 11;
  v187 = 0;
  do {
    if (*(v185 - 2) >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 5;
    }
    if (*(v185 - 1) >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 6;
    }
    if (*v185 >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 7;
    }
    if (v185[1] >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 8;
    }
    if (v185[2] >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 9;
    }
    if (v185[3] >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 10;
    }
    if (v185[4] >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 11;
    }
    if (v185[5] >= 1) {
      *((_DWORD*)v436 + v187++) = v186 + 12;
    }
    v186 += 8;
    v185 += 8;
  } while (v186 != 139);
  v188 = v155 + 133;
  for (i = 144;; i -= 4LL) {
    v190 = *(v188 - 1);
    v191 = *(v188 - 2);
    v192 = *(v188 - 3);
    *v188 += v191 + v190 + v192;
    v193 = *(v188 - 4);
    *(v188 - 1) = v192 + v191 + v193 + v190;
    v194 = *(v188 - 5);
    *(v188 - 2) = v193 + v192 + v194 + v191;
    if (i <= 0x10) {
      break;
    }
    *(v188 - 3) = v194 + v193 + *(v188 - 6) + v192;
    v188 -= 4;
  }
  v195 = (__int16*)(v156 + 38);
  v196 = 19;
  v197 = 0;
  while (1) {
    if (*(v195 - 3) >= 1) {
      v155[v197++] = v196 - 5;
    }
    if (*(v195 - 2) >= 1) {
      v155[v197++] = v196 - 4;
    }
    if (*(v195 - 1) >= 1) {
      v155[v197++] = v196 - 3;
    }
    if (v196 == 147) {
      break;
    }
    if (*v195 >= 1) {
      v155[v197++] = v196 - 2;
    }
    v195 += 4;
    v196 += 4;
  }
  LODWORD(v402_.v424) = v187;
  v402_.v426 = v155;
  v402_.v407 = v133;
  v402_.v405 = v169;
  memset_plt(v43, 0, v42);
  if ((int)v35 >= 1) {
    LODWORD(v402_.v429) = 0;
    LODWORD(v402_.v427) = v197;
    v198 = (__int64)(v402_.v419 + 320);
    v402_.v425 = (unsigned int)v197;
    do {
      v199 = opus_652a0(v198, v198, 40);
      if (v197 >= 1) {
        v201 = v402_.v425;
        v200 = v402_.v426;
        v202 = v199 + 1;
        v203 = 132 * v402_.v429 - 14;
        do {
          while (1) {
            v205 = *v200++;
            v204 = v205;
            v206 = v198 - 2 * v205;
            v207 = opus_652a0(v198, v206, 40);
            if (v207 >= 1) {
              break;
            }
            --v201;
            v43[v203 + v204] = 0;
            if (v201 == 0) {
              goto LABEL_140;
            }
          }
          v208 = v207;
          v209 = v202 + opus_652a0(v206, v206, 40);
          v210 = __clz(v208);
          if (v209 >= 0) {
            v211 = v209;
          }
          else {
            v211 = -v209;
          }
          v212 = __clz(v211);
          v213 = v208 << (v210 - 1);
          v214 = v210 - v212;
          v215 = v209 << (v212 - 1);
          v216 = (0x1FFFFFFF / (v215 >> 16) * (__int64)v213) >> 16;
          v217 =
              ((unsigned __int64)(0x1FFFFFFF / (v215 >> 16) *
                                  (__int64)(int)(v213 -
                                                 (((unsigned __int64)((int)
                                                                          v216 *
                                                                      (__int64)
                                                                          v215) >>
                                                   29) &
                                                  0xFFFFFFF8))) >>
               16) +
              v216;
          if ((unsigned int)(v214 + 29) >= 0x2E) {
            v218 = 0;
          }
          else {
            v218 = v217 >> (v214 + 15);
          }
          v219 = (int)0x80000000 >> (-15 - v214);
          if (v219 <= v217) {
            v219 = v217;
          }
          if ((int)(0x7FFFFFFFu >> (-15 - v214)) >= v217) {
            v220 = v219;
          }
          else {
            v220 = 0x7FFFFFFFu >> (-15 - v214);
          }
          v221 = v220 << (-15 - v214);
          if (v214 > -16) {
            LOWORD(v221) = v218;
          }
          --v201;
          v43[v203 + v204] = v221;
        } while (v201 != 0);
      }
    LABEL_140:
      v35 = v402_.v430;
      v198 += 80;
      v197 = (int)v402_.v427;
      LODWORD(v402_.v429) = v402_.v429 + 1;
    } while ((_DWORD)v402_.v429 != (_DWORD)v402_.v430);
  }
  if ((int)v402_.v421 < 1) {
    LODWORD(v402_.v425) = 0;
    LODWORD(v402_.v418) = 0;
    v222 = v402_.v412;
  }
  else {
    v222 = v402_.v412;
    if (v402_.v412 == 12) {
      v223 = 2 * (int)v402_.v421 / 3;
    }
    else {
      v223 = (unsigned int)v402_.v421 >> (v402_.v412 == 16);
    }
    LODWORD(v402_.v418) = silk_lin2log(v223);
    LODWORD(v402_.v425) = v223 > 0;
  }
  if (v402_.v407 != 0) {
    v224 = 11;
  }
  else {
    v224 = 3;
  }
  v225 = (char*)MovieData_c0ab8;
  if (v402_.v407 != 0) {
    v225 = (char*)MovieData_c0ac0;
  }
  v402_.v419 = v225;
  if ((int)v402_.v424 < 1) {
    goto LABEL_243;
  }
  v226 = 0;
  v402_.v424 = (unsigned int)v402_.v424;
  v402_.v414 = 0;
  v227 = v35 & 7;
  v228 = v222 != 8 || v402_.v411 <= 0;
  LODWORD(v402_.v423) = (__int16)v35 * (__int16)v402_.v417;
  v229 = !v228;
  v230 = v402_.v407 & v229;
  v231 = v230 != 0 ? 11LL : 3LL;
  LODWORD(v402_.v427) = (__int16)(1638 * v35);
  LODWORD(v402_.v422) = v230;
  v402_.v416 = 4 * v231;
  v402_.v421 = v231 - 11;
  v232 = 1056 * ((v35 >> 3) & 0xFFFFFFF);
  v402_.v417 = (int*)v433_.v433;
  v402_.v415 = -1;
  LODWORD(v402_.v426) = 0x80000000;
  v402_.v413 = 0x80000000;
  do {
    v402_.v429 = v226;
    v233 = *((_DWORD*)v436 + v226);
    if ((int)v35 < 1) {
      memset_plt(v432, 0, v402_.v416);
    }
    else {
      v234 = v233 - 14;
      v235 = 0;
      v236 = v402_.v419;
      do {
        if ((unsigned int)v35 >= 8) {
          v239 = 0;
          v237 = 0;
          v238 = 0;
          v240 = v236;
          do {
            v241 = v234 + v239;
            v242 = v233 + v239;
            v237 += 8;
            v239 += 1056;
            v243 = v238 + v43[v241 + *v240];
            v244 = &v240[v224];
            v240 += 8 * (unsigned int)v224;
            v245 = *v244;
            v246 = &v244[v224];
            v247 = v243 + v43[v242 + 118 + v245];
            v248 = *v246;
            v249 = &v246[v224];
            v250 = v247 + v43[v242 + 250 + v248];
            v251 = *v249;
            v252 = &v249[v224];
            v253 = v250 + v43[v242 + 382 + v251];
            v254 = *v252;
            v255 = &v252[v224];
            v238 = v253 + v43[v242 + 514 + v254] + v43[v242 + 646 + *v255] +
                   v43[v242 + 778 + v255[v224]] +
                   v43[v242 + 910 + v255[v224 + v224]];
          } while (v232 != v239);
        }
        else {
          v237 = 0;
          v238 = 0;
        }
        if (v227 != 0) {
          v256 = v234 + 132 * v237;
          v257 = v227;
          v258 = v224 * v237;
          do {
            v259 = v236[v258];
            v258 += v224;
            --v257;
            v260 = v256 + v259;
            v256 += 132;
            v238 += v43[v260];
          } while (v257 != 0);
        }
        *((_DWORD*)v432 + v235++) = v238;
        ++v236;
      } while (v235 != v231);
    }
    if (((unsigned __int8)v402_.v422 & 1) != 0) {
      v261 = 0x80000000;
      v262 = 0;
      v263 = 0;
      v264 = v402_.v417;
      do {
        v265 = *(v264 - 4);
        v266 = *(v264 - 1);
        if (v265 > v261) {
          v267 = v262;
        }
        else {
          v265 = v261;
          v267 = v263;
        }
        if (*(v264 - 3) > v265) {
          v265 = *(v264 - 3);
          v267 = v262 + 1;
        }
        v268 = v262 + 2;
        if (*(v264 - 2) <= v265) {
          v268 = v267;
        }
        else {
          v265 = *(v264 - 2);
        }
        v269 = v266 <= v265;
        if (v266 > v265) {
          v265 = *(v264 - 1);
        }
        v270 = v264[1];
        if (!v269) {
          v268 = v262 + 3;
        }
        if (*v264 > v265) {
          v265 = *v264;
          v268 = v262 + 4;
        }
        v271 = v270 <= v265;
        if (v270 > v265) {
          v265 = v264[1];
        }
        v272 = v264[2];
        v273 = v264[3];
        if (!v271) {
          v268 = v262 + 5;
        }
        v264 += 8;
        if (v272 > v265) {
          v265 = v272;
          v268 = v262 + 6;
        }
        if (v273 <= v265) {
          v263 = v268;
        }
        else {
          v263 = v262 + 7;
        }
        if (v273 <= v265) {
          v261 = v265;
        }
        else {
          v261 = v273;
        }
        v274 = v262 + 8;
        v275 = v262 == v402_.v421;
        v262 += 8;
      } while (!v275);
    }
    else {
      v274 = 0;
      v263 = 0;
      v261 = 0x80000000;
    }
    for (j = 3; j != 0; --j) {
      if ((signed __int32)*((_DWORD*)v432 + v274) > v261) {
        v263 = v274;
        v261 = *((_DWORD*)v432 + v274);
      }
      ++v274;
    }
    v277 = silk_lin2log(v233);
    v278 = v261 - ((v277 * (int)v402_.v427) >> 7);
    if ((_DWORD)v402_.v425 != 0) {
      v279 = (unsigned int)((__int16)(v277 - v402_.v418) *
                            (__int16)(v277 - v402_.v418)) >>
             7;
      v278 -= (int)(((*v402_.v420 * (int)v402_.v427) >> 15) * v279) /
              (int)(v279 + 64);
    }
    v280 = v278 <= (int)v402_.v426 || v261 <= (int)v402_.v423;
    if (!v280 && *((char*)MovieData_c0ac0 + v263) <= 16) {
      LODWORD(v402_.v426) = v278;
      v402_.v414 = v263;
      v402_.v415 = v233;
      v402_.v413 = v261;
    }
    LODWORD(v35) = v402_.v430;
    v226 = v402_.v429 + 1;
  } while (v402_.v429 + 1 != v402_.v424);
  v281 = v402_.v415;
  v282 = v402_.v412;
  v283 = v402_.v407;
  if (v402_.v415 == -1) {
    goto LABEL_243;
  }
  *(_DWORD*)v402_.v420 = 4 * (v402_.v413 / (int)v402_.v430);
  if (v282 <= 8) {
    v290 = v402_.v409;
    v288 = v402_.v414;
    if ((int)v35 >= 1) {
      v291 = v35 & 3;
      if ((unsigned int)v35 >= 4) {
        v293 = 0;
        v294 = &v402_.v419[(int)v402_.v414];
        v295 = (int*)(v402_.v410 + 8);
        do {
          v293 -= 4;
          v296 = v281 + *v294;
          if (v296 <= 16) {
            v296 = 16;
          }
          if (v296 >= 144) {
            v296 = 144;
          }
          *(v295 - 2) = v296;
          v297 = v281 + v294[v224];
          if (v297 <= 16) {
            v297 = 16;
          }
          if (v297 >= 144) {
            v297 = 144;
          }
          *(v295 - 1) = v297;
          v298 = v281 + v294[2 * v224];
          if (v298 <= 16) {
            v298 = 16;
          }
          if (v298 >= 144) {
            v298 = 144;
          }
          *v295 = v298;
          v299 = v294[3 * v224];
          v294 += 4 * v224;
          v300 = v281 + v299;
          if (v300 <= 16) {
            v300 = 16;
          }
          if (v300 >= 144) {
            v300 = 144;
          }
          v295[1] = v300;
          v295 += 4;
        } while (-(__int64)(v35 & 0x7FFFFFFC) != v293);
        v292 = -v293;
      }
      else {
        v292 = 0;
      }
      if ((v35 & 3) != 0) {
        v301 = (int*)(v402_.v410 + 4 * v292);
        v302 = &v402_.v419[v292 * v224 + v288];
        do {
          v303 = *v302;
          v302 += v224;
          v304 = v281 + v303;
          if (v304 <= 16) {
            v304 = 16;
          }
          if (v304 >= 144) {
            v304 = 144;
          }
          --v291;
          *v301++ = v304;
        } while (v291 != 0);
      }
    }
    v305 = v281 - 16;
  }
  else {
    if (v282 == 12) {
      v284 = (int)v402_.v428;
      v285 = v402_.v411;
      v286 = ((__int16)v281 >> 1) + (__int16)v281;
      v287 = v402_.v405;
    }
    else {
      v284 = (int)v402_.v428;
      v285 = v402_.v411;
      v287 = v402_.v405;
      if (v282 == 16) {
        v286 = 2 * v281;
      }
      else {
        v286 = 3 * (__int16)v281;
      }
    }
    if (v286 <= v287) {
      v306 = v287;
    }
    else {
      v306 = v286;
    }
    if (v286 >= v284) {
      v307 = v402_.v403;
    }
    else {
      v307 = v306;
    }
    if (v307 - 2 <= v287) {
      v308 = v287;
    }
    else {
      v308 = v307 - 2;
    }
    v309 = v307 + 2;
    if (v307 + 2 >= v402_.v403) {
      v309 = v402_.v403;
    }
    LODWORD(v402_.v427) = v309;
    if ((int)v35 >= 1) {
      v310 = (int)v402_.v414;
      v311 = v35 & 7;
      if ((unsigned int)v35 >= 8) {
        v313 = 0;
        v314 = (_DWORD*)(v402_.v410 + 16);
        v315 = (char*)MovieData_c0ac0 + (int)v402_.v414 + 44;
        do {
          v313 -= 8;
          *(v314 - 4) = v307 + 2 * *(v315 - 44);
          *(v314 - 3) = v307 + 2 * *(v315 - 33);
          *(v314 - 2) = v307 + 2 * *(v315 - 22);
          *(v314 - 1) = v307 + 2 * *(v315 - 11);
          *v314 = v307 + 2 * *v315;
          v314[1] = v307 + 2 * v315[11];
          v314[2] = v307 + 2 * v315[22];
          v316 = v315[33];
          v315 += 88;
          v314[3] = v307 + 2 * v316;
          v314 += 8;
        } while (-(__int64)(v35 & 0x7FFFFFF8) != v313);
        v312 = -v313;
      }
      else {
        v312 = 0;
      }
      if ((v35 & 7) != 0) {
        v317 = (_DWORD*)(v402_.v410 + 4 * v312);
        v318 = (char*)MovieData_c0ac0 + 11 * v312 + v310;
        do {
          v319 = *v318;
          v318 += 11;
          --v311;
          *v317++ = v307 + 2 * v319;
        } while (v311 != 0);
      }
    }
    if (v283 != 0) {
      v320 = (unsigned int)*((char*)MovieData_c0b18 + v285);
      v402_.v425 = (unsigned __int64)MovieData_c0ac8;
      v321 = 34;
    }
    else {
      v320 = 12;
      v402_.v425 = (unsigned __int64)MovieData_c0ad0;
      v321 = 12;
    }
    v322 = v402_.v430;
    v402_.v429 = v321;
    v402_.v426 = (__int16*)v320;
    v323 = v285;
    v324 = 20LL * (int)v320 * (int)v402_.v430;
    v325 = &v400[-((v324 + 15) & 0xFFFFFFFFFFFFFFF0LL)];
    memset_plt(v325, 0, v324);
    v326 = v325;
    memset_plt(v325, 0, v324);
    v327 = v402_.v431;
    v328 = v402_.v406;
    v329 = v402_.v404;
    silk_P_Ana_calc_corr_st3(v325, v402_.v406, v308, v402_.v404, v322, v323,
                             v402_.v431);
    silk_P_Ana_calc_energy_st3((__int64)v325, v328, v308, v329, v322, v323,
                               v327);
    v330 = opus_652a0(v328 + 2LL * (unsigned int)(20 * v282),
                      v328 + 2LL * (unsigned int)(20 * v282), v322 * v329);
    v288 = 0;
    if (v308 <= (int)v402_.v427 && (int)v402_.v426 >= 1) {
      v331 = v402_.v430;
      v332 = 0;
      v288 = 0;
      v333 = 1638 / v307;
      v334 = (unsigned int)((_DWORD)v402_.v427 - v308 + 1);
      v335 = 0x80000000;
      v336 = 20LL * (unsigned int)v402_.v426;
      while (1) {
        v337 = 0;
        v338 = v326;
        v339 = v325;
        do {
          if (v331 < 1) {
            LODWORD(v343) = 0;
            if (v335 >= 0) {
              goto LABEL_306;
            }
            goto LABEL_333;
          }
          if ((unsigned int)v331 >= 8) {
            v344 = 0;
            v340 = 0;
            v341 = 0;
            v342 = v330 + 1;
            do {
              v340 += 8;
              v345 = &v338[v344 + (unsigned __int64)v336 / 4];
              v346 = v338[v344] + v341;
              v347 = &v339[v344];
              v344 += 40LL * (unsigned int)v402_.v426;
              v348 = *v347;
              v349 = &v347[(unsigned __int64)v336 / 4];
              v350 = v348 + v342;
              v351 = *v345;
              v352 = &v345[(unsigned __int64)v336 / 4];
              v353 = v351 + v346;
              v354 = *v349;
              v355 = &v349[(unsigned __int64)v336 / 4];
              v356 = v354 + v350;
              v357 = *v355;
              v358 = &v355[(unsigned __int64)v336 / 4];
              v341 =
                  v352[(unsigned __int64)v336 / 4 + (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4 + (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4] +
                  v352[(unsigned __int64)v336 / 4 + (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4] +
                  v352[(unsigned __int64)v336 / 4 + (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4] +
                  v352[(unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4] +
                  v352[(unsigned __int64)v336 / 4] + *v352 + v353;
              v342 =
                  v358[(unsigned __int64)v336 / 4 + (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4] +
                  v358[(unsigned __int64)v336 / 4 + (unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4] +
                  v358[(unsigned __int64)v336 / 4 +
                       (unsigned __int64)v336 / 4] +
                  v358[(unsigned __int64)v336 / 4] + *v358 + v357 + v356;
            } while ((v402_.v430 & 0x7FFFFFF8) != v340);
          }
          else {
            v340 = 0;
            v341 = 0;
            v342 = v330 + 1;
          }
          if ((v402_.v430 & 7) != 0) {
            v359 = v336 * v340;
            v360 = v402_.v430 & 7;
            do {
              --v360;
              v341 += *(_DWORD*)((char*)v338 + v359);
              v361 = *(_DWORD*)((char*)v339 + v359);
              v359 += v336;
              v342 += v361;
            } while (v360 != 0);
          }
          if (v341 < 1) {
            LODWORD(v343) = 0;
            v331 = v402_.v430;
            if (v335 >= 0) {
              goto LABEL_306;
            }
          LABEL_333:
            if (v308 + *((char*)MovieData_c0ac8 + v337) < (int)v402_.v428) {
              v288 = v337;
              v307 = v308;
              v335 = v343;
            }
            goto LABEL_306;
          }
          v362 = __clz(v341);
          v363 = v341 << (v362 - 1);
          if (v342 >= 0) {
            v364 = v342;
          }
          else {
            v364 = -v342;
          }
          v365 = __clz(v364);
          v366 = v362 - v365;
          v367 = v342 << (v365 - 1);
          v368 = (0x1FFFFFFF / (v367 >> 16) * (__int64)v363) >> 16;
          v369 = (int)0x80000000 >> (-15 - v366);
          v370 =
              ((unsigned __int64)(0x1FFFFFFF / (v367 >> 16) *
                                  (__int64)(int)(v363 -
                                                 (((unsigned __int64)((int)
                                                                          v368 *
                                                                      (__int64)
                                                                          v367) >>
                                                   29) &
                                                  0xFFFFFFF8))) >>
               16) +
              v368;
          if (v369 <= v370) {
            v369 = v370;
          }
          if ((int)(0x7FFFFFFFu >> (-15 - v366)) < v370) {
            v369 = 0x7FFFFFFFu >> (-15 - v366);
          }
          v371 = v370 >> (v366 + 15);
          if ((unsigned int)(v366 + 29) >= 0x2E) {
            v371 = 0;
          }
          if (v366 >= -15) {
            v372 = v371;
          }
          else {
            v372 = v369 << (-15 - v366);
          }
          v343 = (unsigned __int64)((__int16)((v333 * v337) ^ 0x7FFF) *
                                    (__int64)v372) >>
                 16;
          v331 = v402_.v430;
          if ((int)v343 > v335) {
            goto LABEL_333;
          }
        LABEL_306:
          ++v337;
          v339 += 5;
          v338 += 5;
        } while (v337 != (unsigned int)v402_.v426);
        ++v332;
        ++v308;
        ++v325;
        ++v326;
        if (v332 == v334) {
          goto LABEL_336;
        }
      }
    }
    v331 = v402_.v430;
  LABEL_336:
    v373 = (int)v402_.v428;
    v374 = v402_.v429;
    v290 = v402_.v409;
    v375 = v402_.v405;
    if (v331 >= 1) {
      v376 = v331 & 3;
      if ((unsigned int)v331 >= 4) {
        v378 = 0;
        v379 = (char*)(v402_.v425 + v288);
        v380 = (int*)(v402_.v410 + 8);
        do {
          v378 -= 4;
          v381 = v307 + *v379;
          if (v381 <= v375) {
            v382 = v375;
          }
          else {
            v382 = v307 + *v379;
          }
          if (v381 <= v373) {
            v383 = v382;
          }
          else {
            v383 = v373;
          }
          *(v380 - 2) = v383;
          v384 = v307 + v379[v374];
          if (v384 <= v375) {
            v385 = v375;
          }
          else {
            v385 = v307 + v379[v374];
          }
          if (v384 <= v373) {
            v386 = v385;
          }
          else {
            v386 = v373;
          }
          *(v380 - 1) = v386;
          v387 = v307 + v379[2 * v374];
          if (v387 <= v375) {
            v388 = v375;
          }
          else {
            v388 = v307 + v379[2 * v374];
          }
          if (v387 <= v373) {
            v389 = v388;
          }
          else {
            v389 = v373;
          }
          *v380 = v389;
          v390 = v379[3 * v374];
          v379 += 4 * v374;
          v391 = v307 + v390;
          if (v391 <= v375) {
            v392 = v375;
          }
          else {
            v392 = v391;
          }
          if (v391 <= v373) {
            v393 = v392;
          }
          else {
            v393 = v373;
          }
          v380[1] = v393;
          v380 += 4;
        } while (-(__int64)(v331 & 0x7FFFFFFC) != v378);
        v377 = -v378;
      }
      else {
        v377 = 0;
      }
      if ((v331 & 3) != 0) {
        v394 = (_DWORD*)(v402_.v410 + 4 * v377);
        v395 = (char*)(v402_.v425 + v288 + v377 * v374);
        do {
          v396 = *v395;
          v395 += v374;
          v397 = v307 + v396;
          if (v397 <= v375) {
            v398 = v375;
          }
          else {
            v398 = v397;
          }
          if (v397 <= v373) {
            v399 = v398;
          }
          else {
            v399 = v373;
          }
          --v376;
          *v394++ = v399;
        } while (v376 != 0);
      }
    }
    v305 = v307 - v375;
  }
  result = 0;
  *v402_.v408 = v305;
LABEL_244:
  *v290 = v288;
  return result;
}

_DWORD* silk_P_Ana_calc_corr_st3(_DWORD* result, __int64 a2, int a3, __int64 a4,
                                 int a5, int a6, int a7)
{
  char* v7;
  int v8;
  __int64 v9;
  __int16* v10;
  char* v11;
  unsigned int v12;
  __int64 v13;
  char* v14;
  int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  _DWORD* v30;
  unsigned int v31;
  int v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35;
  _DWORD* v36;
  char* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  char* v48;
  char* v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  unsigned int v61;
  char* v62;
  _DWORD* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 i;
  char* v70;
  int v71;
  int v72;
  unsigned int v73;
  unsigned int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  int v81;
  unsigned int v82;
  unsigned int v83;
  int v84;
  _DWORD* v85;
  unsigned int v86;
  int v87;
  _QWORD v88[14];
  _BYTE v89[80];
  _BYTE* v90;
  _DWORD* v91;
  _DWORD* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  char* v98;
  int v99;
  __int64 v100;
  unsigned int v101;

  v99 = a7;
  v100 = a4;
  v92 = result;
  if (a5 == 4) {
    v98 = (char*)MovieData_c0b10 + 8 * a6;
    v7 = (char*)MovieData_c0ac8;
    v8 = *((char*)MovieData_c0b18 + a6);
    v9 = 34;
  }
  else {
    v8 = 12;
    v7 = (char*)MovieData_c0ad0;
    v98 = (char*)MovieData_c0b08;
    v9 = 12;
  }
  v93 = v9;
  v88[13] = 0;
  memset(v89, 0, 72);
  v88[12] = 0;
  memset(v88, 0, 88);
  if (a5 >= 1) {
    v10 = (__int16*)(a2 + 8LL * (_DWORD)v100);
    v95 = (int)v100;
    v96 = -(__int64)a3;
    v94 = (unsigned int)a5;
    if (v8 > 0) {
      v11 = v7 + 3;
      v12 = 0;
      v13 = 0;
      v97 = v8 & 7;
      v90 = v89;
      v91 = v92 + 20;
      while (1) {
        v101 = v12;
        v14 = &v98[2 * v13];
        v15 = *v14;
        v16 = v14[1];
        result = (_DWORD*)celt_pitch_xcorr_c(v10, (__int64)&v10[v96 - v14[1]],
                                             (__int64)v88, v100, v16 - v15 + 1);
        v17 = v16 - v15;
        if (v16 >= v15) {
          v18 = v17 + 1;
          if (v17 >= 7) {
            result = v90;
            v22 = 0;
            do {
              v23 = *((_DWORD*)v88 + v17 + (unsigned int)v22 - 1);
              *(result - 4) = *((_DWORD*)v88 + v17 + (unsigned int)v22);
              *(result - 3) = v23;
              v24 = *((_DWORD*)&v88[-1] + v17 + (unsigned int)v22 - 1);
              v25 = *((_DWORD*)&v88[-2] + v17 + (unsigned int)v22);
              *(result - 2) = *((_DWORD*)&v88[-1] + v17 + (unsigned int)v22);
              *(result - 1) = v24;
              v26 = *((_DWORD*)&v88[-2] + v17 + (unsigned int)v22 - 1);
              *result = v25;
              result[1] = v26;
              v27 = v17 - 6 + v22;
              v28 = v17 - 7 + v22;
              v22 -= 8;
              v29 = *((_DWORD*)v88 + v28);
              result[2] = *((_DWORD*)v88 + v27);
              result[3] = v29;
              result += 8;
            } while (-(__int64)(v18 & 0xFFFFFFF8) != v22);
            v19 = -v22;
            v20 = v15 - v22;
            v21 = v18 & 7;
            if (v21 == 0) {
              goto LABEL_17;
            }
          LABEL_15:
            v30 = (_DWORD*)&v88[12] + v19;
            v31 = v16 - v20;
            do {
              v32 = *((_DWORD*)v88 + v31--);
              --v21;
              *v30++ = v32;
            } while (v21 != 0);
            goto LABEL_17;
          }
          v19 = 0;
          v20 = v15;
          v21 = v18 & 7;
          if (v21 != 0) {
            goto LABEL_15;
          }
        }
      LABEL_17:
        v33 = v101;
        v34 = 0;
        if ((unsigned int)v8 >= 8) {
          v35 = 0;
          v36 = &v91[5 * v101];
          v37 = v11;
          do {
            v35 -= 8;
            v38 = (char*)&v88[12] + 4 * (*(v37 - 3) - (__int64)v15);
            v39 = *(_QWORD*)v38;
            v40 = *((_QWORD*)v38 + 1);
            LODWORD(v38) = *((_DWORD*)v38 + 4);
            *((_QWORD*)v36 - 10) = v39;
            *((_QWORD*)v36 - 9) = v40;
            *(v36 - 16) = (_DWORD)v38;
            v41 = (char*)&v88[12] + 4 * (*(v37 - 2) - (__int64)v15);
            v42 = *(_QWORD*)v41;
            v43 = *((_QWORD*)v41 + 1);
            LODWORD(v41) = *((_DWORD*)v41 + 4);
            *(_QWORD*)(v36 - 15) = v42;
            *(_QWORD*)(v36 - 13) = v43;
            *(v36 - 11) = (_DWORD)v41;
            v44 = (char*)&v88[12] + 4 * (*(v37 - 1) - (__int64)v15);
            *(v36 - 6) = *((_DWORD*)v44 + 4);
            v45 = *((_QWORD*)v44 + 1);
            *((_QWORD*)v36 - 5) = *(_QWORD*)v44;
            *((_QWORD*)v36 - 4) = v45;
            v46 = (char*)&v88[12] + 4 * (*v37 - (__int64)v15);
            *(v36 - 1) = *((_DWORD*)v46 + 4);
            v48 = v46;
            v47 = *(_QWORD*)v46;
            *(_QWORD*)(v36 - 3) = *((_QWORD*)v48 + 1);
            *(_QWORD*)(v36 - 5) = v47;
            v49 = (char*)&v88[12] + 4 * (v37[1] - (__int64)v15);
            v36[4] = *((_DWORD*)v49 + 4);
            v50 = *((_QWORD*)v49 + 1);
            *(_QWORD*)v36 = *(_QWORD*)v49;
            *((_QWORD*)v36 + 1) = v50;
            v51 = (char*)&v88[12] + 4 * (v37[2] - (__int64)v15);
            v52 = *(_QWORD*)v51;
            v53 = *((_QWORD*)v51 + 1);
            LODWORD(v51) = *((_DWORD*)v51 + 4);
            *(_QWORD*)(v36 + 5) = v52;
            *(_QWORD*)(v36 + 7) = v53;
            v36[9] = (_DWORD)v51;
            v54 = (char*)&v88[12] + 4 * (v37[3] - (__int64)v15);
            v55 = *(_QWORD*)v54;
            v56 = *((_QWORD*)v54 + 1);
            v36[14] = *((_DWORD*)v54 + 4);
            *((_QWORD*)v36 + 5) = v55;
            *((_QWORD*)v36 + 6) = v56;
            v57 = v37[4];
            v37 += 8;
            v58 = (char*)&v88[12] + 4 * (v57 - v15);
            v59 = *(_QWORD*)v58;
            v60 = *((_QWORD*)v58 + 1);
            v36[19] = *((_DWORD*)v58 + 4);
            *(_QWORD*)(v36 + 17) = v60;
            *(_QWORD*)(v36 + 15) = v59;
            v36 += 40;
          } while (-(__int64)(v8 & 0x7FFFFFF8) != v35);
          v34 = -v35;
        }
        v61 = v33;
        if (v97 != 0) {
          v62 = &v7[v34];
          v63 = &v92[5 * v34 + 5 * v33];
          v64 = v97;
          do {
            v65 = *v62++;
            --v64;
            v66 = (char*)&v88[12] + 4 * (v65 - v15);
            v67 = *(_QWORD*)v66;
            v68 = *((_QWORD*)v66 + 1);
            LODWORD(v66) = *((_DWORD*)v66 + 4);
            *(_QWORD*)v63 = v67;
            *((_QWORD*)v63 + 1) = v68;
            v63[4] = (_DWORD)v66;
            v63 += 5;
          } while (v64 != 0);
        }
        ++v13;
        v12 = v61 + v8;
        v10 += v95;
        v11 += v93;
        v7 += v93;
        if (v13 == v94) {
          return result;
        }
      }
    }
    for (i = 0; i != v94; ++i) {
      v70 = &v98[2 * i];
      v71 = *v70;
      v72 = v70[1];
      result = (_DWORD*)celt_pitch_xcorr_c(v10, (__int64)&v10[v96 - v70[1]],
                                           (__int64)v88, v100, v72 - v71 + 1);
      v73 = v72 - v71;
      if (v72 >= v71) {
        v74 = v73 + 1;
        if (v73 >= 7) {
          v77 = 0;
          result = v89;
          do {
            v78 = *((_DWORD*)v88 + v73 + (unsigned int)v77 - 1);
            *(result - 4) = *((_DWORD*)v88 + v73 + (unsigned int)v77);
            *(result - 3) = v78;
            v79 = *((_DWORD*)&v88[-1] + v73 + (unsigned int)v77 - 1);
            v80 = *((_DWORD*)&v88[-2] + v73 + (unsigned int)v77);
            *(result - 2) = *((_DWORD*)&v88[-1] + v73 + (unsigned int)v77);
            *(result - 1) = v79;
            v81 = *((_DWORD*)&v88[-2] + v73 + (unsigned int)v77 - 1);
            *result = v80;
            result[1] = v81;
            v82 = v73 - 6 + v77;
            v83 = v73 - 7 + v77;
            v77 -= 8;
            v84 = *((_DWORD*)v88 + v83);
            result[2] = *((_DWORD*)v88 + v82);
            result[3] = v84;
            result += 8;
          } while (-(__int64)(v74 & 0xFFFFFFF8) != v77);
          v75 = -v77;
          v71 -= v77;
          v76 = v74 & 7;
          if (v76 == 0) {
            goto LABEL_26;
          }
        LABEL_34:
          v85 = (_DWORD*)&v88[12] + v75;
          v86 = v72 - v71;
          do {
            v87 = *((_DWORD*)v88 + v86--);
            --v76;
            *v85++ = v87;
          } while (v76 != 0);
          goto LABEL_26;
        }
        v75 = 0;
        v76 = v74 & 7;
        if (v76 != 0) {
          goto LABEL_34;
        }
      }
    LABEL_26:
      v10 += v95;
    }
  }
  return result;
}

#pragma GCC visibility pop
