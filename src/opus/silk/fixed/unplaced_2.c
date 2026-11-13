#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* silk_residual_energy_FIX(_DWORD* result, __int64, __int64, __int16*,
                                 __int64, signed int, int, int, int);
_DWORD* silk_sum_sqr_shift(_DWORD* result, int*, __int64, signed int);
_WORD* silk_A2NLSF(_WORD* result, __int64, int);
__int64 MovieRoutine_56540(__int64, __int64, _BYTE*, int*, _DWORD*, _DWORD*,
                           int*, __int16, int);
__int64 MovieRoutine_5ff80(__int64 result, __int64, int);
__int64 MovieRoutine_64c40(__int64, unsigned int*, int);
__int64 celt_pitch_xcorr_c(__int16*, __int64, __int64, int, unsigned int);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(_QWORD, _QWORD, _QWORD);
__int64 opus_651a0(__int64 result, __int64, int, int);
__int64 opus_652a0(__int64, __int64, int);
__int64 opus_652a0_alt1(_QWORD, _QWORD) __asm__("opus_652a0");
__int64 opus_653a0(__int64, __int64, int);
__int64 opus_silk_4e380(__int64 result, int, int);
__int64 opus_silk_560c0(__int64 result, __int64, __int64, __int16, int);
__int64 opus_silk_5ace0(__int64 result, __int64, __int64, __int64, __int64, int,
                        int, int);
__int64 silk_LPC_analysis_filter(__int64, __int64, __int16*, int, int);
__int64 silk_LTP_scale_ctrl_FIX(__int64 result, __int64, int);
__int64 silk_autocorr(signed int*, _DWORD*, __int16*, int, int);
__int64 silk_find_LTP_FIX(__int64 result, int*, __int64, int*, unsigned int,
                          int, unsigned int);
__int64 silk_log2lin(unsigned int);
__int64 silk_pitch_analysis_core(__int64, __int64, _WORD*, _BYTE*, __int16*,
                                 int, int, int, int, int, unsigned int,
                                 unsigned int);
extern __int16 MovieData_a780e[27];
unsigned __int64 MovieRoutine_45380(__int64, __int64, int);
unsigned __int64 silk_process_NLSFs(__int64, __int64, __int16*, __int64);
__int64 opus_silk_fixed_5b060(__int64 result, __int64 a2, int a3, int a4);
__int64 opus_silk_fixed_5b1c0(_DWORD* a1, int* a2, __int64 a3, __int64 a4,
                              int a5, int a6, int a7, signed int a8);
__int64 opus_silk_fixed_5cf80(__int64 result, __int64 a2, int a3, int a4,
                              _DWORD* a5, int a6);
_WORD* opus_silk_fixed_5ef40(__int64 a1, _WORD* a2, __int64 a3, int a4);
__int64 opus_silk_fixed_5f5e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              unsigned int a5);
_DWORD* opus_silk_fixed_5fa60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              int a5);
__int64 opus_silk_fixed_60180(__int64 result, __int64 a2, int a3);

__int64 opus_silk_fixed_5b060(__int64 result, __int64 a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  __int16* v8;
  _WORD* v9;
  unsigned __int64 v10;
  int v11;
  int v12;
  int v13;

  v4 = MovieData_a780e[(a4 >> 2) - 4];
  v5 = v4 * (__int16)-(__int16)v4;
  v6 = v4 + (a4 >> 3);
  if (a3 == 1) {
    v7 = 0;
  }
  else {
    v7 = 0x10000;
  }
  if (a3 != 1) {
    v6 = (a4 >> 4) + (v5 >> 17) + 0x10000;
  }
  if (a4 >= 1) {
    v8 = (__int16*)(a2 + 4);
    v9 = (_WORD*)(result + 4);
    v10 = 0;
    v11 = SHIWORD(v5);
    do {
      v10 += 4LL;
      *(v9 - 2) = (unsigned int)(((v6 + v7) >> 1) * *(v8 - 2)) >> 16;
      *(v9 - 1) = (unsigned int)(v6 * *(v8 - 1)) >> 16;
      v12 = ((unsigned __int64)(v11 * (__int64)v6) >> 16) - v7 + 2 * v6;
      if (v12 >= 0xFFFF) {
        v12 = 0xFFFF;
      }
      v7 = v12 + 1;
      *v9 = (unsigned int)(((v7 + v6) >> 1) * *v8) >> 16;
      v13 = v8[1];
      v8 += 4;
      v9[1] = (unsigned int)(v7 * v13) >> 16;
      v9 += 4;
      v6 = ((unsigned __int64)(v11 * (__int64)v7) >> 16) - v6 + 2 * v7;
      if (v6 >= 0x10000) {
        v6 = 0x10000;
      }
    } while (v10 < (unsigned int)a4);
  }
  return result;
}

__int64 opus_silk_fixed_5b1c0(_DWORD* a1, int* a2, __int64 a3, __int64 a4,
                              int a5, int a6, int a7, signed int a8)
{
  __int64 result;
  unsigned int v11;
  unsigned int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  unsigned int v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  int v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int16* v42;
  __int16* v43;
  __int16* v44;
  int v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned __int64 v49;
  int* v50;
  int* v51;
  unsigned __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  _DWORD* v64;
  int* v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  unsigned __int64 v70;
  __int64 v71;
  char* v72;
  int* v73;
  _BYTE* v74;
  int v75;
  char v76;
  __int64 v77;
  char v78;
  unsigned int v79;
  unsigned __int64 v80;
  char v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int16* v87;
  __int64 v88;
  __int64 v89;
  __int16* v90;
  __int64 v91;
  __int16* v92;
  __int64 v93;
  __int64 v94;
  int v95;
  int v96;
  int v97;
  int v98;
  int v99;
  int v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  _DWORD* v103;
  int* v104;
  int* v105;
  __int16* v106;
  int v107;
  int v108;
  int v109;
  int v110;
  unsigned __int64 v111;
  unsigned __int64 v112;
  int v113;
  int v114;
  int v115;
  int v116;
  int v117;
  unsigned __int64 v118;
  int v119;
  unsigned __int64 v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  __int64 v126;
  unsigned __int64 v127;
  __int16* v128;
  __int64 v129;
  int* v130;
  int* v131;
  _DWORD* v132;
  int v133;
  int v134;
  int v135;
  int v136;
  unsigned __int64 v137;
  int v138;
  int v139;
  int v140;
  __int16* v141;
  __int16* v142;
  __int64 v143;
  int* v144;
  _DWORD* v145;
  __int64 v146;
  __int16* v147;
  __int16* v148;
  __int16* v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  unsigned __int64 v159;
  unsigned __int64 v160;
  int v161;
  int v162;
  int v163;
  int v164;
  unsigned __int64 v165;
  int v166;
  unsigned __int64 v167;
  int v168;
  __int64 v169;
  __int16* v170;
  int v171;
  int v172;
  __int64 v173;
  __int16* v174;
  __int64 v175;
  __int64 v176;
  __int16* v177;
  __int16* v178;
  __int64 v179;
  __int64 v180;
  int v181;
  int v182;
  int v183;
  int v184;
  int v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  _DWORD* v189;
  int* v190;
  int* v191;
  __int16* v192;
  __int16* v193;
  int v194;
  int v195;
  int v196;
  int v197;
  int v198;
  int v199;
  int v200;
  int v201;
  int v202;
  int v203;
  int v204;
  int v205;
  int v206;
  int v207;
  int v208;
  int v209;
  int v210;
  int v211;
  int v212;
  int v213;
  int v214;
  int v215;
  __int64 v216;
  int v217;
  int v218;
  int v219;
  int v220;
  unsigned __int64 v221;
  int* v222;
  __int16* v223;
  __int64 v224;
  _DWORD* v225;
  _DWORD* v226;
  int v227;
  int v228;
  int v229;
  int v230;
  int v231;
  int* v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int16* v237;
  __int16* v238;
  unsigned __int64 v239;
  __int64 v240;
  int v241;
  int v242;
  int v243;
  int v244;
  int v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int16* v249;
  __int64 v250;
  __int64 v251;
  int v252;
  int v253;
  signed int v254;
  _DWORD* v255;
  __int64 v256;
  int v257;
  int v258;
  unsigned __int64 v259;
  int v260;
  _BYTE* v261;
  _DWORD* v262;
  int* v263;
  int v264;
  int v265;
  int v266;
  int v267;
  char v268;
  char v269;
  int v270;
  _DWORD* v271;
  int v272;
  _DWORD* v273;
  __int64 v274;
  int v275;
  __int64 v276;
  __int64 v277;
  int* v278;
  int v279;
  int v280;
  __int64 v281;
  int v282;
  int v283;
  int v284;
  char v285;
  char v286;
  __int64 v287;
  __int64 v288;
  __int64 v289;
  int v290;
  __int64 v291;
  __int64 v292;
  int v293;
  char v294;
  char v295;
  int v296;
  signed int v297;
  unsigned int v298;
  unsigned int v299;
  int v300;
  int* v301;
  _BYTE* v302;
  int v303;
  int v304;
  int v305;
  __int64 v306;
  int v307;
  char v308;
  int v309;
  char v310;
  signed int v311;
  unsigned int v312;
  int v313;
  unsigned __int64 v314;
  unsigned int v315;
  unsigned int v316;
  int v317;
  __int64 v318;
  int v319;
  int v320;
  int v321;
  int v322;
  unsigned int v323;
  int v324;
  int v325;
  unsigned int v326;
  unsigned int v327;
  char v328;
  bool v329;
  unsigned int v330;
  unsigned int v331;
  unsigned int v332;
  unsigned int v333;
  __int64 v334;
  int* v335;
  int v336;
  int v337;
  unsigned __int64 v338;
  int v339;
  int v340;
  unsigned __int64 v341;
  int v342;
  int v343;
  unsigned __int64 v344;
  int v345;
  int v346;
  unsigned __int64 v347;
  int v348;
  unsigned __int64 v349;
  unsigned __int64 v350;
  int v351;
  unsigned __int64 v352;
  int v353;
  __int64 v354;
  unsigned __int64 v355;
  int v356;
  __int64 v357;
  int* v358;
  __int64 v359;
  int v360;
  unsigned __int64 v361;
  int v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  int* v366;
  __int64 v367;
  __int64 v368;
  int* v369;
  int v370;
  int v371;
  int v372;
  int v373;
  int v374;
  int v375;
  int v376;
  int v377;
  int v378;
  int v379;
  unsigned __int64 v380;
  unsigned __int64 v381;
  int v382;
  int v383;
  int v384;
  int v385;
  int v386;
  int v387;
  int v388;
  int* v389;
  int* v390;
  __int64 v391;
  int v392;
  unsigned __int64 v393;
  int* v394;
  _DWORD* v395;
  int v396;
  int v397;
  int v398;
  int v399;
  int v400;
  __int64 v401;
  __int64 v402;
  __int64 v403;
  __int64 v404;
  __int64 v405;
  __int64 v406;
  __int64 v407;
  __int64 v408;
  int* v409;
  _DWORD* v410;
  int v411;
  int v412;
  int v413;
  int v414;
  int v415;
  _DWORD* v416;
  int* v417;
  int v418;
  __int64 v419;
  __int64 v420;
  __int64 v421;
  __int64 v422;
  __int64 v423;
  int* v424;
  int* v425;
  _DWORD* v426;
  int v427;
  int v428;
  int v429;
  unsigned __int64 v430;
  unsigned __int64 v431;
  int v432;
  int v433;
  int v434;
  int v435;
  int v436;
  int v437;
  int v438;
  _DWORD* v439;
  _DWORD* v440;
  int* v441;
  int* v442;
  int v443;
  int v444;
  int v445;
  int v446;
  unsigned __int64 v447;
  int v448;
  int v449;
  __int64 v451;
  int v454;
  unsigned int v455;
  char v456;
  unsigned int v457;
  unsigned int v459;
  char v460;
  __int64 v461;
  char v462;
  int v463;
  _BYTE* v464;
  int* v465;
  char* v466;
  __int64 v467;
  __int64 v468;
  __int64 v469;
  __int64 v470;
  __int64 v471;
  unsigned __int64 v472;
  __int64 v473;
  __int64 v474;
  __int64 v475;
  __int64 v476;
  char v477;
  unsigned __int64 v478;
  int v479;
  __int64 v480;
  unsigned __int64 v481;
  char v483;
  unsigned __int64 v484;
  int v485;
  __int64 v486;
  __int16* v487;
  __int64 v488;
  __int64 v489;
  unsigned __int64 v490;
  unsigned __int64 v491;
  __int16* v492;
  unsigned __int64 v493;
  __int16* v494;
  __int64 v495;
  __int64 v496;
  __int64 v497;
  __int64 v498;
  __int64 v499;
  struct {
    _QWORD v500[2];
    _QWORD v501[9];
    __int64 v502;
    int v503;
    _BYTE v504[96];
    _DWORD v505[23];
    __int64 v506;
    __int64 v507;
    __int64 v508;
    _QWORD v509[10];
    __int64 v510;
    _QWORD v511[11];
    __int64 v512;
    _QWORD v513[12];
  } v500_;

  v500_.v502 = 0;
  v500_.v500[1] = 0;
  memset(v500_.v501, 0, sizeof(v500_.v501));
  v499 = a4;
  v500_.v500[0] = 0;
  result = opus_653a0(a4, a4, a7 * a6);
  v500_.v512 = 0;
  memset(v500_.v513, 0, 56);
  v11 = __clz(result) + 32;
  v12 = __clz(HIDWORD(result));
  if (HIDWORD(result) == 0) {
    v12 = v11;
  }
  memset(&v500_.v513[7], 0, 32);
  v13 = 36 - v12;
  v457 = v12;
  v459 = a7;
  if ((int)(36 - v12) < -16 || v12 == 52) {
    v13 = -16;
  }
  if (v13 >= 7) {
    v13 = 7;
  }
  v14 = result >> v13;
  v456 = v13;
  v479 = -v13;
  v15 = (_DWORD)result << -(char)v13;
  v448 = v14;
  v449 = v15;
  if (v12 < 0x24) {
    v15 = v14;
  }
  v451 = 42950LL * v15;
  v485 = ((unsigned __int64)(0x10000A7C6LL * v15) >> 32) + 1;
  if (v12 >= 0x24) {
    v16 = v499;
    if (a7 < 1) {
      goto LABEL_44;
    }
    v23 = 2LL * a6;
    v24 = v499 - 2;
    v25 = 0;
    v26 = v499;
    v27 = a6 - a8;
    v28 = (unsigned int)(a8 + 1);
    v498 = (v28 - 1) & 7;
  LABEL_21:
    v29 = a8;
    result = celt_pitch_xcorr_c((__int16*)(v16 + 2 * v25 * a6),
                                v16 + 2 * v25 * a6 + 2, (__int64)v500_.v500,
                                v27, a8);
    if (a8 < 1) {
      goto LABEL_20;
    }
    v30 = a8 - 1;
    LODWORD(v31) = a6 - a8 + 1;
    v32 = 6;
    v33 = 1;
    v34 = 0;
    v35 = v24;
    while (1) {
      v38 = (int)v31;
      if (v27 + (int)v33 >= a6) {
        v36 = 0;
      }
      else {
        if ((unsigned int)(a8 - 2 - v34) >= 7) {
          v39 = v26 + 2LL * (int)v31;
          result = 6;
          v40 = 0;
          v36 = 0;
          v41 = v32;
          do {
            v42 = (__int16*)(v39 + result);
            v43 = (__int16*)(v39 + v41);
            result += 16;
            v41 += 16;
            v44 = (__int16*)(v39 + 2 * v40);
            v40 += 8;
            v36 += *(v43 - 4) * *(v42 - 3) + *(v43 - 3) * *(v42 - 2) +
                   *(v43 - 2) * v44[2] + *(v43 - 1) * *v42 + *v43 * v44[4] +
                   v43[1] * v44[5] + v43[2] * v44[6] + v43[3] * v42[4];
          } while ((v30 & 0xFFFFFFF8) != (_DWORD)v40);
          v29 = a8;
          v31 = v38 + v40;
          if ((((_BYTE)a8 + ~(_BYTE)v34) & 7) == 0) {
            goto LABEL_24;
          }
        LABEL_32:
          v45 = v30 & 7;
          v46 = 2 * v31;
          do {
            v47 = *(__int16*)(v26 + v46);
            v48 = *(__int16*)(v35 + v46);
            v46 += 2;
            --v45;
            v36 += v48 * v47;
          } while (v45 != 0);
          goto LABEL_24;
        }
        v36 = 0;
        v31 = (int)v31;
        if ((((_BYTE)v29 + ~(_BYTE)v34) & 7) != 0) {
          goto LABEL_32;
        }
      }
    LABEL_24:
      v37 = (char*)v500_.v500 + 4 * v33++;
      ++v34;
      --v30;
      v32 -= 2;
      v35 -= 2;
      LODWORD(v31) = v38 + 1;
      *((_DWORD*)v37 - 1) += v36;
      if (v33 == v28) {
        if (v29 >= 8) {
          v50 = (int*)&v500_.v513[1];
          v51 = (int*)v500_.v501;
          v52 = (v28 - 1) & 0xFFFFFFFFFFFFFFF8LL;
          do {
            v52 -= 8LL;
            v53 = *(v50 - 3) + (*(v51 - 3) << v479);
            v54 = *v51;
            v55 = v51[1];
            v56 = *(v50 - 2) + (*(v51 - 2) << v479);
            v57 = *(v50 - 1) + (*(v51 - 1) << v479);
            v58 = *v50;
            v59 = v50[1];
            *(v50 - 4) += *(v51 - 4) << v479;
            *(v50 - 3) = v53;
            v60 = v51[2];
            v61 = v51[3];
            *(v50 - 2) = v56;
            *(v50 - 1) = v57;
            v51 += 8;
            v62 = v50[2] + (v60 << v479);
            v63 = v50[3] + (v61 << v479);
            *v50 = v58 + (v54 << v479);
            v50[1] = v59 + (v55 << v479);
            v50[2] = v62;
            v50[3] = v63;
            v50 += 8;
          } while (v52 != 0);
          v49 = (v28 - 1) & 0xFFFFFFFFFFFFFFF8LL | 1;
          if (v498 != 0) {
            goto LABEL_41;
          }
        }
        else {
          v49 = 1;
          if (v498 == 0) {
            goto LABEL_20;
          }
        LABEL_41:
          v64 = (_DWORD*)&v500_.v511[10] + v49 + 1;
          v65 = (int*)&v499 + v49 + 1;
          v66 = (v28 - 1) & 7;
          do {
            v67 = *v65++;
            --v66;
            *v64++ += v67 << v479;
          } while (v66 != 0);
        }
      LABEL_20:
        v16 = v499;
        ++v25;
        v26 += v23;
        v24 += v23;
        if (v25 == v459) {
          goto LABEL_44;
        }
        goto LABEL_21;
      }
    }
  }
  v16 = v499;
  if (a7 >= 1) {
    if (a8 < 1) {
      v395 = a1;
      v394 = a2;
      v396 = v479;
      v397 = 0x10000;
      v398 = (unsigned __int64)(42950LL * v15) >> 32;
      v68 = ((unsigned __int64)(0x10000A7C6LL * v15) >> 32) + 1;
      goto LABEL_205;
    }
    v17 = v499 + 2;
    v18 = 0;
    do {
      v19 = a6 - 1;
      v20 = &v500_.v512;
      v21 = (unsigned int)(a8 + 1) - 1LL;
      v22 = v17;
      do {
        result = opus_653a0(v16 + 2 * v18 * a6, v22, v19);
        v16 = v499;
        --v19;
        v22 += 2;
        --v21;
        *(_DWORD*)v20 += result >> v456;
        v20 = (__int64*)((char*)v20 + 4);
      } while (v21 != 0);
      ++v18;
      v17 += 2LL * a6;
    } while (v18 != a7);
  }
LABEL_44:
  v68 = v485;
  qmemcpy(v500_.v511, v500_.v513, sizeof(v500_.v511));
  v500_.v505[0] = v485;
  v500_.v503 = v485;
  v500_.v510 = v500_.v512;
  if (a8 < 1) {
    v395 = a1;
    v394 = a2;
    v396 = v479;
    v397 = 0x10000;
    v398 = HIDWORD(v451);
  LABEL_205:
    LODWORD(v447) = v68 + ((unsigned __int64)(v398 * (__int64)-v397) >> 16);
    goto LABEL_208;
  }
  v69 = v459;
  v70 = 0;
  v71 = 2;
  memset(&v500_.v505[1], 0, 88);
  result = (__int64)&v500_.v507 + 4;
  v72 = (char*)&v500_.v506 + 4;
  v73 = (int*)&v500_.v502;
  v74 = v500_.v504;
  v75 = 0x40000000;
  v76 = ~v456;
  v77 = v459;
  v500_.v506 = 0;
  memset(v500_.v504, 0, sizeof(v500_.v504));
  memset(v500_.v509, 0, sizeof(v500_.v509));
  v500_.v508 = 0;
  v477 = 16 - v456;
  v78 = 1;
  v500_.v507 = 0;
  v473 = v16;
  v483 = 7 - v456;
  if (a5 >= 0) {
    v79 = a5;
  }
  else {
    v79 = -a5;
  }
  v455 = __clz(v79);
  v454 = a5 << (v455 - 1);
  v496 = 2LL * a6;
  v497 = a6;
  v474 = v16 + v496 + 4;
  v475 = v16 + v496;
  v470 = v16 + v496 + 2;
  v468 = v16 + v496 + 6;
  v469 = v16 - 6;
  v80 = 1;
  v476 = v16 - 2;
  v467 = -8;
  v81 = 2;
  while (1) {
    v462 = v81;
    v463 = v75;
    v82 = v70 & 0xFFFFFFFFFFFFFFFCLL;
    v83 = v70;
    v471 = v71;
    v472 = v80;
    v464 = v74;
    v465 = v73;
    if (v80 >> 1 <= 1) {
      v84 = 1;
    }
    else {
      v84 = v80 >> 1;
    }
    v466 = v72;
    v480 = v78 & 7;
    v481 = v70 & 3;
    v85 = (v70 + 1) >> 1;
    if (v85 <= 1) {
      LOBYTE(v85) = 1;
    }
    v460 = v85;
    v461 = v84;
    v490 = v70 - 1;
    v491 = v70;
    if (v457 >= 0x26) {
      if (v69 < 1) {
        goto LABEL_97;
      }
      v173 = v473;
      v174 = (__int16*)v470;
      v175 = 0;
      v495 = v78 & 3;
      v177 = (__int16*)v474;
      v176 = v475;
      v178 = (__int16*)v476;
      v179 = v497 - v70;
      v493 = v70 & 3;
      while (1) {
        v180 = v16 + 2 * v175 * v497;
        v181 = *(__int16*)(v180 + 2 * v83);
        v182 = *(__int16*)(v180 + 2 * v179 - 2);
        v183 = v181 << 17;
        result = (unsigned int)(v182 << 17);
        if (v83 != 0) {
          v184 = v181 << v479;
          v185 = v182 << v479;
          if (v490 >= 3) {
            v188 = v180 + 2 * v83;
            v189 = v500_.v511;
            v190 = (int*)v500_.v513;
            v191 = (int*)&v500_.v508;
            v186 = 0;
            v192 = v177;
            v193 = v178;
            do {
              v194 = *(v191 - 1);
              v195 = *v193;
              v193 -= 4;
              v196 = ((*(v191 - 2) >> 7) + 1) >> 1;
              v197 = v183 + v196 * v195;
              v198 = *(v192 - 2);
              v199 = result + v196 * v198;
              v200 = *(v189 - 1);
              v201 = *(v189 - 2) - v185 * v198;
              v202 = *(__int16*)(v188 + 2 * (v186 ^ 0x7FFFFFFFFFFFFFFELL));
              v203 = *(v190 - 1) - v184 * v202;
              *(v190 - 2) -= v184 * v195;
              *(v190 - 1) = v203;
              v204 = *(v192 - 1);
              *(v189 - 2) = v201;
              *(v189 - 1) = v200 - v185 * v204;
              v205 = ((v194 >> 7) + 1) >> 1;
              v206 = v197 + v205 * v202;
              v207 = *v191;
              v208 = v191[1];
              v191 += 4;
              v209 = v199 + v205 * v204;
              v210 = *(__int16*)(v188 + 2 * (v186 ^ 0xFFFFFFFFFFFFFFFDLL));
              v211 = *v190 - v184 * v210;
              v212 = ((v207 >> 7) + 1) >> 1;
              v213 = v206 + v212 * v210;
              v214 = *v192;
              v215 = v209 + v212 * v214;
              v216 = v186 ^ 0x7FFFFFFFFFFFFFFCLL;
              v186 += 4LL;
              LODWORD(v216) = *(__int16*)(v188 + 2 * v216);
              v217 = v190[1] - v184 * v216;
              *v190 = v211;
              v190[1] = v217;
              v190 += 4;
              v218 = v192[1];
              v192 += 4;
              v219 = v189[1] - v185 * v218;
              *v189 -= v185 * v214;
              v189[1] = v219;
              v189 += 4;
              v220 = ((v208 >> 7) + 1) >> 1;
              v183 = v213 + v220 * v216;
              result = (unsigned int)(v215 + v220 * v218);
            } while (v82 != v186);
          }
          else {
            v186 = 0;
          }
          v187 = v459;
          v16 = v499;
          v83 = v491;
          if (v493 != 0) {
            v221 = v481;
            v222 = (int*)&v500_.v507 + v186;
            v223 = (__int16*)(v176 + 2 * v186);
            v224 = 0x7FFFFFFFFFFFFFFFLL * v186;
            v225 = &v500_.v511[v186 / 2 - 1];
            v226 = &v500_.v513[v186 / 2 - 1];
            do {
              v227 = v178[v224];
              v229 = *v223++;
              v228 = v229;
              --v224;
              --v221;
              *v226++ -= v184 * v227;
              *v225++ -= v185 * v229;
              v230 = *v222++;
              v231 = ((v230 >> 7) + 1) >> 1;
              v183 += v231 * v227;
              result = (unsigned int)(result + v231 * v228);
            } while (v221 != 0);
          }
        }
        else {
          v187 = v77;
        }
        v232 = &v500_.v505[2];
        v233 = -v183;
        v234 = -(int)result;
        if (v83 >= 3) {
          break;
        }
        v235 = 0;
        v77 = v187;
        if ((v472 & 3) != 0) {
          goto LABEL_94;
        }
      LABEL_78:
        ++v175;
        v178 = (__int16*)((char*)v178 + v496);
        v177 = (__int16*)((char*)v177 + v496);
        v176 += v496;
        v174 = (__int16*)((char*)v174 + v496);
        v173 += v496;
        if (v175 == v77) {
          goto LABEL_97;
        }
      }
      result = (__int64)&v500_.v504[4];
      v236 = 0;
      v237 = v174;
      v238 = v178;
      do {
        v236 -= 4;
        v239 = (unsigned __int64)(((__int64)*(v238 - 1) << v76) * v233) >> 16;
        v240 = *v237;
        v241 = *(_DWORD*)(result - 8) +
               ((unsigned __int64)(((__int64)*(v237 - 2) << v76) * v234) >> 16);
        v242 = *(v232 - 1) +
               ((unsigned __int64)(((__int64)*v238 << v76) * v233) >> 16);
        v243 = *v232;
        v244 = v232[1];
        v245 = *(_DWORD*)(result - 4) +
               ((unsigned __int64)(((__int64)*(v237 - 1) << v76) * v234) >> 16);
        *(v232 - 2) +=
            (unsigned __int64)(((__int64)v238[1] << v76) * v233) >> 16;
        *(v232 - 1) = v242;
        v246 = v237[1];
        *(_DWORD*)(result - 8) = v241;
        *(_DWORD*)(result - 4) = v245;
        v237 += 4;
        v247 = *(v238 - 2);
        v238 -= 4;
        LODWORD(v246) = *(_DWORD*)(result + 4) +
                        ((unsigned __int64)((v246 << v76) * v234) >> 16);
        *(_DWORD*)result += (unsigned __int64)((v240 << v76) * v234) >> 16;
        *(_DWORD*)(result + 4) = v246;
        result += 16;
        *v232 = v243 + v239;
        v232[1] = v244 + ((unsigned __int64)((v247 << v76) * v233) >> 16);
        v232 += 4;
      } while (-(__int64)(v472 & 0xFFFFFFFFFFFFFFFCLL) != v236);
      v77 = v459;
      v83 = v491;
      v235 = -v236;
      if ((v472 & 3) == 0) {
        goto LABEL_78;
      }
    LABEL_94:
      v248 = v495;
      v249 = (__int16*)(v173 - 2 * v235);
      do {
        v250 = *v249--;
        --v248;
        v251 = *(__int16*)(v176 + 2 * v235 - 2);
        v500_.v505[v235] += (unsigned __int64)((v250 << v76) * v233) >> 16;
        result = (unsigned __int64)((v251 << v76) * v234) >> 16;
        *(_DWORD*)&v500_.v504[4 * v235++ - 4] += result;
      } while (v248 != 0);
      goto LABEL_78;
    }
    if (v69 >= 1) {
      v86 = v473;
      v88 = v468;
      v87 = (__int16*)v469;
      v89 = 0;
      v90 = (__int16*)v474;
      v91 = v475;
      v92 = (__int16*)v476;
      v93 = -(__int64)(v80 & 0xFFFFFFFFFFFFFFF8LL);
      v486 = v497 - v70;
      v478 = v70 & 3;
      v484 = v80 & 7;
      while (1) {
        v492 = v90;
        v494 = (__int16*)v88;
        v94 = v16 + 2 * v89 * v497;
        v95 = *(__int16*)(v94 + 2 * v83);
        v96 = *(__int16*)(v94 + 2 * v486 - 2);
        v97 = v95 << 9;
        v98 = v96 << 9;
        if (v83 != 0) {
          v487 = v87;
          v488 = v86;
          v489 = v89;
          v99 = -(v95 << v477);
          v100 = -(v96 << v477);
          if (v490 >= 3) {
            v102 = v94 + 2 * v83;
            v103 = v500_.v511;
            v104 = (int*)v500_.v513;
            v105 = (int*)&v500_.v508;
            v101 = 0;
            v106 = v92;
            do {
              v107 = *v106;
              v106 -= 4;
              v109 = *(v105 - 2);
              v108 = *(v105 - 1);
              v110 = *(__int16*)(v102 + 2 * (v101 ^ 0x7FFFFFFFFFFFFFFELL));
              v111 = v109 * (__int64)v107;
              v112 = v109 * (__int64)*(v90 - 2);
              v113 = *v90;
              v114 = *(v104 - 1);
              LODWORD(v112) = v98 + (v112 >> 16);
              v115 = v97 + (v111 >> 16);
              v116 =
                  *(v104 - 2) + ((unsigned __int64)(v107 * (__int64)v99) >> 16);
              LODWORD(v111) = *v103;
              v117 = v103[1];
              v118 = (unsigned __int64)(v108 * (__int64)*(v90 - 1)) >> 16;
              v119 = *(v103 - 1) +
                     ((unsigned __int64)(*(v90 - 1) * (__int64)v100) >> 16);
              v120 = *v90 * (__int64)v100;
              *(v103 - 2) +=
                  (unsigned __int64)(*(v90 - 2) * (__int64)v100) >> 16;
              *(v103 - 1) = v119;
              v122 = *v104;
              v121 = v104[1];
              v123 = v111 + (v120 >> 16);
              v124 = v115 + ((unsigned __int64)(v108 * (__int64)v110) >> 16);
              result = *(__int16*)(v102 + 2 * (v101 ^ 0xFFFFFFFFFFFFFFFDLL));
              *(v104 - 2) = v116;
              *(v104 - 1) =
                  v114 + ((unsigned __int64)(v110 * (__int64)v99) >> 16);
              v125 = *v105;
              LODWORD(v120) = v105[1];
              v105 += 4;
              v126 = v101 ^ 0x7FFFFFFFFFFFFFFCLL;
              v101 += 4LL;
              LODWORD(v126) = *(__int16*)(v102 + 2 * v126);
              LODWORD(v118) = v112 + v118 +
                              ((unsigned __int64)(v125 * (__int64)v113) >> 16);
              LODWORD(v112) = v90[1];
              v90 += 4;
              v97 = v124 +
                    ((unsigned __int64)(v125 * (__int64)(int)result) >> 16) +
                    ((unsigned __int64)((int)v120 * (__int64)(int)v126) >> 16);
              *v104 =
                  v122 + ((unsigned __int64)((int)result * (__int64)v99) >> 16);
              v104[1] =
                  v121 + ((unsigned __int64)((int)v126 * (__int64)v99) >> 16);
              v104 += 4;
              v98 = v118 +
                    ((unsigned __int64)((int)v120 * (__int64)(int)v112) >> 16);
              *v103 = v123;
              v103[1] =
                  v117 + ((unsigned __int64)((int)v112 * (__int64)v100) >> 16);
              v103 += 4;
            } while (v82 != v101);
          }
          else {
            v101 = 0;
          }
          v77 = v459;
          v16 = v499;
          v83 = v491;
          v87 = v487;
          v86 = v488;
          v89 = v489;
          if (v478 != 0) {
            v127 = v481;
            v128 = (__int16*)(v91 + 2 * v101);
            v129 = 0x7FFFFFFFFFFFFFFFLL * v101;
            v130 = (int*)&v500_.v507 + v101;
            v131 = (int*)&v500_.v511[v101 / 2 - 1];
            v132 = &v500_.v513[v101 / 2 - 1];
            do {
              v133 = v92[v129];
              v135 = *v128++;
              v134 = v135;
              --v129;
              --v127;
              v136 = *v131;
              v137 = (unsigned __int64)(v135 * (__int64)v100) >> 16;
              *v132++ += (unsigned __int64)(v133 * (__int64)v99) >> 16;
              v138 = *v130++;
              result = (unsigned int)(v136 + v137);
              *v131++ = result;
              v97 += (unsigned __int64)(v138 * (__int64)v133) >> 16;
              v98 += (unsigned __int64)(v138 * (__int64)v134) >> 16;
            } while (v127 != 0);
          }
        }
        v139 = -v97 << v483;
        v140 = -v98 << v483;
        if (v83 >= 7) {
          break;
        }
        v141 = v492;
        v142 = v494;
        v143 = 0;
        if (v484 != 0) {
          goto LABEL_73;
        }
      LABEL_58:
        ++v89;
        v92 = (__int16*)((char*)v92 + v496);
        v90 = &v141[(unsigned __int64)v496 / 2];
        v91 += v496;
        v87 = (__int16*)((char*)v87 + v496);
        v88 = (__int64)&v142[(unsigned __int64)v496 / 2];
        v86 += v496;
        if (v89 == v77) {
          goto LABEL_97;
        }
      }
      v144 = &v500_.v505[4];
      v145 = &v500_.v504[12];
      v142 = v494;
      v146 = 0;
      v147 = v87;
      v148 = v87;
      v149 = v494;
      do {
        v146 -= 8;
        v150 = (unsigned __int64)(v148[1] * (__int64)v139) >> 16;
        v151 = (unsigned __int64)(*(v149 - 2) * (__int64)v140) >> 16;
        v152 = *(v145 - 4) +
               ((unsigned __int64)(*(v149 - 4) * (__int64)v140) >> 16);
        v154 = *(v144 - 2);
        v153 = *(v144 - 1);
        v155 =
            *(v144 - 3) + ((unsigned __int64)(v148[2] * (__int64)v139) >> 16);
        v156 = *v148;
        v157 = *(v145 - 3) +
               ((unsigned __int64)(*(v149 - 3) * (__int64)v140) >> 16);
        *(v144 - 4) += (unsigned __int64)(v148[3] * (__int64)v139) >> 16;
        *(v144 - 3) = v155;
        *(v145 - 4) = v152;
        *(v145 - 3) = v157;
        v158 = v154 + v150;
        LODWORD(v150) = *(v145 - 1);
        v159 = (unsigned __int64)(*v149 * (__int64)v140) >> 16;
        v160 = (unsigned __int64)(*(v148 - 1) * (__int64)v139) >> 16;
        v161 = *(v145 - 2) + v151;
        LODWORD(v151) = *(v149 - 1);
        *(v144 - 2) = v158;
        *(v144 - 1) = v153 + ((unsigned __int64)(v156 * (__int64)v139) >> 16);
        v162 = v145[1];
        LODWORD(v159) = *v145 + v159;
        v163 = v150 + ((unsigned __int64)((int)v151 * (__int64)v140) >> 16);
        v164 = *v144;
        LODWORD(v150) = v144[1];
        v165 = *(v148 - 2) * (__int64)v139;
        *(v145 - 2) = v161;
        *(v145 - 1) = v163;
        LODWORD(v160) = v164 + v160;
        result = (unsigned int)v145[2];
        v166 = v145[3];
        *v144 = v160;
        v144[1] = v150 + (v165 >> 16);
        v167 = (unsigned __int64)(*(v148 - 3) * (__int64)v139) >> 16;
        LODWORD(v165) =
            v162 + ((unsigned __int64)(v149[1] * (__int64)v140) >> 16);
        *v145 = v159;
        v145[1] = v165;
        LODWORD(v159) = *(v148 - 4);
        LODWORD(v165) = v149[3];
        v148 -= 8;
        v168 = v149[2];
        v149 += 8;
        LODWORD(v159) =
            v144[3] + ((unsigned __int64)((int)v159 * (__int64)v139) >> 16);
        v144[2] += v167;
        v144[3] = v159;
        v144 += 8;
        v145[2] = result + ((unsigned __int64)(v168 * (__int64)v140) >> 16);
        v145[3] = v166 + ((unsigned __int64)((int)v165 * (__int64)v140) >> 16);
        v145 += 8;
      } while (v93 != v146);
      v87 = v147;
      v77 = v459;
      v143 = -v146;
      v141 = v492;
      if (v484 == 0) {
        goto LABEL_58;
      }
    LABEL_73:
      v169 = v480;
      v170 = (__int16*)(v86 - 2 * v143);
      do {
        v171 = *v170--;
        --v169;
        v172 = *(__int16*)(v91 + 2 * v143 - 2);
        v500_.v505[v143] += (unsigned __int64)(v171 * (__int64)v139) >> 16;
        *(_DWORD*)&v500_.v504[4 * v143++ - 4] +=
            (unsigned __int64)(v172 * (__int64)v140) >> 16;
      } while (v169 != 0);
      goto LABEL_58;
    }
  LABEL_97:
    v252 = *((_DWORD*)&v500_.v513[-1] + v83);
    v253 = *((_DWORD*)&v500_.v511[-1] + v83);
    v254 = v500_.v505[0] + v500_.v503;
    if (v83 != 0) {
      v255 = &v500_.v505[2];
      if (v83 == 1) {
        v256 = 0;
        v257 = 0;
      }
      else {
        result = v467;
        v259 = 0;
        v256 = 0;
        v257 = 0;
        do {
          v260 = *(_DWORD*)((char*)&v500_.v507 + v259);
          v261 = &v500_.v504[result + 4];
          v262 = v255;
          v263 = &v255[v259 / 4];
          v256 += 2;
          v264 = *(_DWORD*)&v500_.v504[result + 4];
          v265 = *(_DWORD*)((char*)&v500_.v513[-1] + result);
          v266 = *(_DWORD*)((char*)&v500_.v513[-1] + result + 4);
          if (v260 >= 0) {
            v267 = *(_DWORD*)((char*)&v500_.v507 + v259);
          }
          else {
            v267 = -v260;
          }
          v268 = __clz(v267 | 0x800000);
          v269 = v268 - 1;
          v268 = 8 - v268;
          v270 = v260 << v269;
          v271 = (_DWORD*)((char*)&v500_.v511[-1] + result);
          result -= 8;
          v273 = v271;
          v272 = *v271;
          v274 = v270;
          v275 = (unsigned __int64)(v266 * (__int64)v270) >> 32 << v268;
          v276 = (int)v273[1] * (__int64)v270;
          v277 = v264 * (__int64)v270;
          v278 = (int*)&v500_.v504[v259 + 4];
          v279 = HIDWORD(v276) << v268;
          v280 = HIDWORD(v277) << v268;
          v281 = (*(v263 - 1) + (__int64)*(int*)&v500_.v504[v259]) * v274;
          v282 = *(_DWORD*)((char*)&v500_.v507 + v259 + 4);
          v259 += 8LL;
          v283 = HIDWORD(v281) << v268;
          if (v282 >= 0) {
            v284 = v282;
          }
          else {
            v284 = -v282;
          }
          v285 = __clz(v284 | 0x800000);
          v286 = v285 - 1;
          v285 = 8 - v285;
          v287 = v282 << v286;
          v252 += ((unsigned __int64)(v272 * v287) >> 32 << v285) + v279;
          v253 += ((unsigned __int64)(v265 * v287) >> 32 << v285) + v275;
          v288 = *v263;
          v255 = v262;
          v257 += ((unsigned __int64)(*((int*)v261 - 1) * v287) >> 32 << v285) +
                  v280;
          v254 +=
              ((unsigned __int64)((v288 + *v278) * v287) >> 32 << v285) + v283;
        } while (((4 * v83) & 0xFFFFFFFFFFFFFFF8LL) != v259);
      }
      v83 = v491;
      v77 = v459;
      v258 = a5;
      if ((v491 & 1) != 0) {
        v289 = 4 * v256;
        v290 = *((_DWORD*)&v500_.v507 + v256);
        v291 = 4 * (v491 - v256);
        v292 = v289 + 4;
        if (v290 >= 0) {
          v293 = v290;
        }
        else {
          v293 = -v290;
        }
        v294 = __clz(v293 | 0x800000);
        v295 = v294 - 1;
        v294 = 8 - v294;
        result = v290 << v295;
        v257 += (unsigned __int64)(*(_DWORD*)&v500_.v504[v291 - 4] * result) >>
                32 << v294;
        v252 += (unsigned __int64)(*(int*)((char*)&v500_.v510 + v291 - 4) *
                                   result) >>
                32 << v294;
        v253 += (unsigned __int64)(*(int*)((char*)&v500_.v512 + v291 - 4) *
                                   result) >>
                32 << v294;
        v254 += (unsigned __int64)((*(int*)((char*)v500_.v505 + v292) +
                                    (__int64)*(_DWORD*)&v500_.v504[v292 - 4]) *
                                   result) >>
                32 << v294;
      }
    }
    else {
      v258 = a5;
      v257 = 0;
    }
    v70 = v83 + 1;
    v296 = -2 * (v253 + v257);
    v500_.v505[v70] = v252;
    *(_DWORD*)&v500_.v504[4 * v70 - 4] = v253;
    v297 = v296 < 0 ? 2 * (v253 + v257) : -2 * (v253 + v257);
    if (v297 >= v254) {
      v300 = a8;
      v69 = v459;
      v302 = v464;
      v301 = v465;
      v313 = v296 > 0 ? 0x7FFFFFFF : 0x80000000;
    }
    else {
      v298 = __clz(v254);
      v299 = __clz(v297);
      v300 = a8;
      v69 = v459;
      v302 = v464;
      v301 = v465;
      v303 = v254 << (v298 - 1);
      v304 = v296 << (v299 - 1);
      v305 = 0x1FFFFFFF / (v303 >> 16);
      v306 = (0x1FFFFFFF / (v303 >> 16) * (__int64)v304) >> 16;
      v307 = v304 - (((unsigned __int64)((int)v306 * (__int64)v303) >> 29) &
                     0xFFFFFFF8);
      v308 = v299 - v298;
      v309 = ((unsigned __int64)(v305 * (__int64)v307) >> 16) + v306;
      if ((int)(v299 - v298) > 1) {
        v313 = v309 >> (v308 - 2);
      }
      else {
        v310 = 2 - v308;
        v311 = (int)0x80000000 >> (2 - v308);
        if (v311 <= v309) {
          v311 = v309;
        }
        v312 = (int)(0x7FFFFFFFu >> v310) >= v309 ? v311 : 0x7FFFFFFFu >> v310;
        v313 = v312 << v310;
      }
    }
    v314 =
        (((unsigned __int64)(unsigned int)(0x40000000 -
                                           ((unsigned __int64)(v313 *
                                                               (__int64)v313) >>
                                            32)) *
          v463) >>
         30) &
        0xFFFFFFFC;
    v75 = v314;
    if ((int)v314 <= v258) {
      if (v463 >= 0) {
        v315 = v463;
      }
      else {
        v315 = -v463;
      }
      v316 = __clz(v315);
      v317 = v463 << (v316 - 1);
      v318 = (0x1FFFFFFF / (v317 >> 16) * (__int64)v454) >> 16;
      v319 =
          ((unsigned __int64)(0x1FFFFFFF / (v317 >> 16) *
                              (__int64)(int)(v454 -
                                             (((unsigned __int64)((int)v318 *
                                                                  (__int64)
                                                                      v317) >>
                                               29) &
                                              0xFFFFFFF8))) >>
           16) +
          v318;
      v320 = v455 - v316;
      v321 = (int)0x80000000 >> (1 - v320);
      v322 = v319 >> (v320 - 1);
      if (v321 <= v319) {
        v321 = v319;
      }
      if ((int)(0x7FFFFFFFu >> (1 - v320)) >= v319) {
        v323 = v321;
      }
      else {
        v323 = 0x7FFFFFFFu >> (1 - v320);
      }
      v324 = v323 << (1 - v320);
      if (v320 <= 0) {
        v325 = v324;
      }
      else {
        v325 = v322;
      }
      if (v325 <= 0x3FFFFFFF) {
        v326 = 0x40000000 - v325;
        v327 = __clz(v326);
        v328 = v326;
        if (v327 != 24) {
          if (v326 <= 0x7F) {
            v328 = (v326 >> (56 - v327)) | ((_BYTE)v326 << (v327 - 24));
          }
          else {
            v328 = ((_BYTE)v326 << (v327 + 8)) + (v326 >> (24 - v327));
          }
        }
        v329 = (v327 & 1) == 0;
        v330 = v327 >> 1;
        if (v329) {
          v331 = 46214;
        }
        else {
          v331 = 0x8000;
        }
        v332 = (v331 >> v330) + ((213 * (v331 >> v330) * (v328 & 0x7F)) >> 16);
        v333 = ((v332 + v326 / v332) << 15) & 0xFFFF0000;
        if (v296 >= 0) {
          v313 = v333;
        }
        else {
          v313 = -v333;
        }
      }
      else {
        v313 = 0;
      }
      v75 = v258;
    }
    if (v83 != 0) {
      if (v83 >= 0xF) {
        v335 = (int*)v500_.v509;
        v334 = 0;
        result = (__int64)v466;
        do {
          v336 = *(_DWORD*)result;
          v337 = *(v335 - 4);
          *(v335 - 4) =
              (((unsigned __int64)(*(int*)result * (__int64)v313) >> 31) &
               0xFFFFFFFE) +
              v337;
          *(_DWORD*)result =
              (((unsigned __int64)(v337 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v336;
          result -= 32;
          v338 = v83 + (v334 ^ 0x3FFFFFFFFFFFFFFELL);
          v339 = *((_DWORD*)&v500_.v507 + v338);
          v340 = *(v335 - 3);
          *(v335 - 3) =
              (((unsigned __int64)(v339 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v340;
          *((_DWORD*)&v500_.v507 + v338) =
              (((unsigned __int64)(v340 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v339;
          v341 = v83 + (v334 ^ 0xFFFFFFFFFFFFFFFDLL);
          v342 = *(v335 - 2);
          v343 = *((_DWORD*)&v500_.v507 + v341);
          *(v335 - 2) =
              (((unsigned __int64)(v343 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v342;
          *((_DWORD*)&v500_.v507 + v341) =
              (((unsigned __int64)(v342 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v343;
          v344 = v83 + (v334 ^ 0x3FFFFFFFFFFFFFFCLL);
          v345 = *(v335 - 1);
          v346 = *((_DWORD*)&v500_.v507 + v344);
          *(v335 - 1) =
              (((unsigned __int64)(v346 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v345;
          *((_DWORD*)&v500_.v507 + v344) =
              (((unsigned __int64)(v345 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v346;
          v347 = v83 + (v334 ^ 0xFFFFFFFFFFFFFFFBLL);
          v348 = *((_DWORD*)&v500_.v507 + v347);
          v349 = *v335 * (__int64)v313;
          *v335 +=
              ((unsigned __int64)(v348 * (__int64)v313) >> 31) & 0xFFFFFFFE;
          *((_DWORD*)&v500_.v507 + v347) = ((v349 >> 31) & 0xFFFFFFFE) + v348;
          LODWORD(v349) = v335[1];
          v350 = v83 + (v334 ^ 0x3FFFFFFFFFFFFFFALL);
          v351 = *((_DWORD*)&v500_.v507 + v350);
          v335[1] =
              (((unsigned __int64)(v351 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v349;
          *((_DWORD*)&v500_.v507 + v350) =
              (((unsigned __int64)((int)v349 * (__int64)v313) >> 31) &
               0xFFFFFFFE) +
              v351;
          v352 = v83 + (v334 ^ 0xFFFFFFFFFFFFFFF9LL);
          LODWORD(v349) = v335[2];
          v353 = *((_DWORD*)&v500_.v507 + v352);
          v335[2] =
              (((unsigned __int64)(v353 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v349;
          *((_DWORD*)&v500_.v507 + v352) =
              (((unsigned __int64)((int)v349 * (__int64)v313) >> 31) &
               0xFFFFFFFE) +
              v353;
          v354 = v334 ^ 0x3FFFFFFFFFFFFFF8LL;
          v334 += 8;
          v355 = v83 + v354;
          LODWORD(v349) = v335[3];
          v356 = *((_DWORD*)&v500_.v507 + v355);
          v335[3] =
              (((unsigned __int64)(v356 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
              v349;
          v335 += 8;
          *((_DWORD*)&v500_.v507 + v355) =
              (((unsigned __int64)((int)v349 * (__int64)v313) >> 31) &
               0xFFFFFFFE) +
              v356;
        } while ((v461 & 0x7FFFFFFFFFFFFFF8LL) != v334);
      }
      else {
        v334 = 0;
      }
      if ((v460 & 7) != 0) {
        v357 = -4 * v334;
        v358 = (int*)&v500_.v507 + v334;
        v359 = v461 & 7;
        do {
          v360 = *(_DWORD*)&v466[v357];
          --v359;
          v361 = *v358 * (__int64)v313;
          *v358++ +=
              ((unsigned __int64)(v360 * (__int64)v313) >> 31) & 0xFFFFFFFE;
          *(_DWORD*)&v466[v357] = ((v361 >> 31) & 0xFFFFFFFE) + v360;
          v357 -= 4;
        } while (v359 != 0);
      }
    }
    *((_DWORD*)&v500_.v507 + v83) = v313 >> 6;
    if ((int)v314 <= v258) {
      break;
    }
    v362 = v313;
    if (v83 >= 6) {
      v366 = &v500_.v505[4];
      v367 = v77;
      v368 = 0;
      v369 = v301;
      do {
        v371 = v369[2];
        v370 = v369[3];
        v373 = *(v366 - 4);
        v372 = *(v366 - 3);
        v368 -= 8;
        v375 = *v369;
        v374 = v369[1];
        v376 = (((unsigned __int64)(v370 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
               v373;
        v377 = (((unsigned __int64)(v373 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
               v370;
        v378 = *(v366 - 2);
        v379 = *(v366 - 1);
        v380 = *v369 * (__int64)v313;
        *(v366 - 4) = v376;
        *(v366 - 3) =
            (((unsigned __int64)(v371 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v372;
        v369[2] =
            (((unsigned __int64)(v372 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v371;
        v369[3] = v377;
        v381 = v378 * (__int64)v313;
        *(v366 - 2) =
            (((unsigned __int64)(v374 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v378;
        *(v366 - 1) = ((v380 >> 31) & 0xFFFFFFFE) + v379;
        v382 = v366[2];
        result = v366[3];
        v383 = ((v381 >> 31) & 0xFFFFFFFE) + v374;
        LODWORD(v381) = *(v369 - 2);
        v384 = *(v369 - 1);
        v385 = *v366;
        v386 = v366[1];
        *v369 =
            (((unsigned __int64)(v379 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v375;
        v369[1] = v383;
        *v366 =
            (((unsigned __int64)(v384 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v385;
        v366[1] = (((unsigned __int64)((int)v381 * (__int64)v313) >> 31) &
                   0xFFFFFFFE) +
                  v386;
        *(v369 - 2) =
            (((unsigned __int64)(v386 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v381;
        *(v369 - 1) =
            (((unsigned __int64)(v385 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v384;
        v388 = *(v369 - 4);
        v387 = *(v369 - 3);
        v366[2] =
            (((unsigned __int64)(v387 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v382;
        v366[3] =
            (((unsigned __int64)(v388 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            result;
        v366 += 8;
        *(v369 - 4) = (((unsigned __int64)((int)result * (__int64)v313) >> 31) &
                       0xFFFFFFFE) +
                      v388;
        *(v369 - 3) =
            (((unsigned __int64)(v382 * (__int64)v313) >> 31) & 0xFFFFFFFE) +
            v387;
        v369 -= 8;
      } while (-(__int64)(v471 & 0xFFFFFFFFFFFFFFF8LL) != v368);
      v300 = a8;
      v363 = v471;
      v364 = -v368;
      v77 = v367;
      v365 = v462 & 7;
      if ((v471 & 7) == 0) {
        goto LABEL_49;
      }
    LABEL_169:
      v389 = (int*)&v302[-4 * v364];
      v390 = &v500_.v505[v364];
      v391 = v365;
      do {
        v392 = *v389;
        --v391;
        v393 = *v390 * (__int64)v362;
        *v390++ +=
            ((unsigned __int64)(*v389 * (__int64)v362) >> 31) & 0xFFFFFFFE;
        *v389-- = ((v393 >> 31) & 0xFFFFFFFE) + v392;
      } while (v391 != 0);
      goto LABEL_49;
    }
    v363 = v471;
    v364 = 0;
    v365 = v462 & 7;
    if ((v471 & 7) != 0) {
      goto LABEL_169;
    }
  LABEL_49:
    v71 = v363 + 1;
    v72 = v466 + 4;
    v73 = v301 + 1;
    v74 = v302 + 4;
    v80 = v472 + 1;
    v476 += 2;
    v474 -= 2;
    v475 -= 2;
    v470 -= 2;
    v473 += 2;
    v78 = v480 + 1;
    v469 += 2;
    v468 -= 2;
    v467 += 4;
    v81 = v365 + 1;
    if (v70 == a8) {
      v68 = v500_.v505[0];
      v404 = a8 & 3;
      if ((unsigned int)v300 >= 4) {
        v405 = a3;
        v396 = v479;
        v423 = 0;
        v424 = &v500_.v505[2];
        v425 = (int*)&v500_.v508;
        v397 = 0x10000;
        v426 = (_DWORD*)(a3 + 8);
        do {
          v423 -= 4;
          v427 = v424[1];
          v428 = ((*(v425 - 2) >> 8) + 1) >> 1;
          v429 = ((*(v425 - 1) >> 8) + 1) >> 1;
          v430 = *v424 * (__int64)v429;
          v431 = v429 * (__int64)v429;
          v432 = v68 + ((unsigned __int64)(*(v424 - 1) * (__int64)v428) >> 16);
          *(v426 - 2) = -v428;
          *(v426 - 1) = -v429;
          v433 = v397 + ((unsigned __int64)(v428 * (__int64)v428) >> 16);
          v434 = *v425;
          v435 = v425[1];
          v425 += 4;
          v436 = ((v434 >> 8) + 1) >> 1;
          v437 = ((v435 >> 8) + 1) >> 1;
          v438 = v432 + (v430 >> 16) +
                 ((unsigned __int64)(v427 * (__int64)v436) >> 16);
          LODWORD(v430) = v424[2];
          v424 += 4;
          result = (unsigned __int64)((int)v430 * (__int64)v437) >> 16;
          v68 = v438 + result;
          *v426 = -v436;
          v426[1] = -v437;
          v426 += 4;
          v397 = v433 + (v431 >> 16) +
                 ((unsigned __int64)(v436 * (__int64)v436) >> 16) +
                 ((unsigned __int64)(v437 * (__int64)v437) >> 16);
        } while (-(__int64)(a8 & 0x7FFFFFFC) != v423);
        v406 = -v423;
        v395 = a1;
        v394 = a2;
        v398 = HIDWORD(v451);
        if ((a8 & 3) == 0) {
          goto LABEL_205;
        }
      }
      else {
        v396 = v479;
        v405 = a3;
        v398 = HIDWORD(v451);
        v406 = 0;
        v397 = 0x10000;
        v395 = a1;
        v394 = a2;
        if ((a8 & 3) == 0) {
          goto LABEL_205;
        }
      }
      v439 = (_DWORD*)(v405 + 4 * v406);
      v440 = &v500_.v505[v406];
      v441 = (int*)&v500_.v507 + v406;
      v442 = v440 + 1;
      do {
        v444 = *v441++;
        v443 = v444;
        v445 = *v442++;
        --v404;
        v446 = ((v443 >> 8) + 1) >> 1;
        v68 += (unsigned __int64)(v445 * (__int64)v446) >> 16;
        *v439++ = -v446;
        v397 += (unsigned __int64)(v446 * (__int64)v446) >> 16;
      } while (v404 != 0);
      goto LABEL_205;
    }
  }
  if (v300 > (int)v70) {
    result = memset_plt((char*)&v500_.v507 + 4 * v83 + 4, 0,
                        4LL * (unsigned int)(v300 - v83 - 2) + 4);
    v16 = v499;
    v300 = a8;
  }
  v399 = v449;
  if (v300 <= 1) {
    v400 = 1;
  }
  else {
    v400 = v300;
  }
  v401 = v400 & 7;
  if (v300 >= 8) {
    v402 = a3;
    v407 = 0;
    v408 = -(__int64)(v400 & 0xFFFFFFF8);
    v409 = (int*)v500_.v509;
    v410 = (_DWORD*)(a3 + 16);
    do {
      v407 -= 8;
      v411 = -(((*(v409 - 3) >> 8) + 1) >> 1);
      *(v410 - 4) = -(((*(v409 - 4) >> 8) + 1) >> 1);
      *(v410 - 3) = v411;
      v412 = -(((*(v409 - 1) >> 8) + 1) >> 1);
      *(v410 - 2) = -(((*(v409 - 2) >> 8) + 1) >> 1);
      *(v410 - 1) = v412;
      v413 = -(((v409[1] >> 8) + 1) >> 1);
      *v410 = -(((*v409 >> 8) + 1) >> 1);
      v410[1] = v413;
      v414 = v409[2];
      v415 = v409[3];
      v409 += 8;
      v410[2] = -(((v414 >> 8) + 1) >> 1);
      v410[3] = -(((v415 >> 8) + 1) >> 1);
      v410 += 8;
    } while (v408 != v407);
    v403 = -v407;
    if (v401 != 0) {
      goto LABEL_187;
    }
  }
  else {
    v402 = a3;
    v403 = 0;
    if (v401 == 0) {
      goto LABEL_189;
    }
  LABEL_187:
    v416 = (_DWORD*)(v402 + 4 * v403);
    v417 = (int*)&v500_.v507 + v403;
    do {
      v418 = *v417++;
      --v401;
      *v416++ = -(((v418 >> 8) + 1) >> 1);
    } while (v401 != 0);
  }
LABEL_189:
  if (v457 >= 0x24) {
    if (v69 >= 1) {
      v421 = v77;
      do {
        v422 = v16;
        result = opus_652a0(v16, v16, v300);
        v300 = a8;
        v16 = v422 + 2 * v497;
        --v421;
        v399 -= (_DWORD)result << v479;
      } while (v421 != 0);
    }
  }
  else if (v69 < 1) {
    v399 = v448;
  }
  else {
    v419 = v77;
    v399 = v448;
    do {
      v420 = v16;
      result = opus_653a0(v16, v16, v300);
      v300 = a8;
      v16 = v420 + 2 * v497;
      --v419;
      v399 -= result >> v456;
    } while (v419 != 0);
  }
  v395 = a1;
  v394 = a2;
  v396 = v479;
  v447 = ((unsigned __int64)(v399 * (__int64)v75) >> 30) & 0xFFFFFFFC;
LABEL_208:
  *v395 = v447;
  *v394 = v396;
  return result;
}

__int64 opus_silk_fixed_5cf80(__int64 result, __int64 a2, int a3, int a4,
                              _DWORD* a5, int a6)
{
  _DWORD* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int16* v14;
  __int16* v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 i;

  v6 = a5;
  v8 = result + 2LL * a4 - 2;
  if (a6 <= 0) {
    if (a4 >= 1) {
      for (i = (unsigned int)a4; i != 0; --i) {
        result = opus_652a0_alt1(v8, a2);
        *v6++ = result;
        v8 -= 2;
      }
    }
  }
  else if (a4 >= 1) {
    if (a3 > 0) {
      v9 = 0;
      v10 = result + 2LL * a4 + 6;
      while ((unsigned int)a3 < 8) {
        v11 = 0;
        v12 = 0;
        if ((a3 & 7) != 0) {
          goto LABEL_12;
        }
      LABEL_5:
        a5[v9] = v12;
        v8 -= 2;
        ++v9;
        v10 -= 2;
        if (v9 == a4) {
          return result;
        }
      }
      v13 = 0;
      v12 = 0;
      v14 = (__int16*)v10;
      v15 = (__int16*)(a2 + 8);
      do {
        v13 -= 8;
        v16 = ((*(v15 - 2) * *(v14 - 2)) >> a6) +
              ((*(v15 - 3) * *(v14 - 3)) >> a6) +
              ((*(v15 - 4) * *(v14 - 4)) >> a6) + v12;
        v17 = v15[3];
        v18 = ((v15[1] * v14[1]) >> a6) + ((*v15 * *v14) >> a6) +
              ((*(v15 - 1) * *(v14 - 1)) >> a6);
        v19 = v15[2];
        v15 += 8;
        v20 = v18 + v16;
        v21 = v19 * v14[2];
        v22 = v14[3];
        v14 += 8;
        result = (unsigned int)((v17 * v22) >> a6);
        v12 = result + (v21 >> a6) + v20;
      } while (-(__int64)(a3 & 0x7FFFFFF8) != v13);
      v11 = -v13;
      if ((a3 & 7) == 0) {
        goto LABEL_5;
      }
    LABEL_12:
      v23 = 2 * v11;
      v24 = a3 & 7;
      do {
        v25 = *(__int16*)(v8 + v23);
        v26 = *(__int16*)(a2 + v23);
        v23 += 2;
        --v24;
        v12 += (v26 * v25) >> a6;
      } while (v24 != 0);
      goto LABEL_5;
    }
    return memset_plt(a5, 0, 4LL * (unsigned int)a4);
  }
  return result;
}

_WORD* opus_silk_fixed_5ef40(__int64 a1, _WORD* a2, __int64 a3, int a4)
{
  signed int v4;
  int v5;
  int v10;
  _WORD* result;
  unsigned int v12;
  int v13;
  char* v14;
  int v15;
  int v16;
  int v17;
  int v18;
  _QWORD v20[4];
  _QWORD v21[4];
  __int64 v22;
  __int64 v23;
  _QWORD v24[8];
  __int64 v25;
  __int64 v26;
  _QWORD v27[9];

  v4 = *(_DWORD*)(a1 + 4640);
  v5 = *(_DWORD*)(a1 + 4580);
  v10 = v4 + *(_DWORD*)(a1 + 4588);
  memset(v27, 0, 64);
  v25 = 0;
  v26 = 0;
  memset(v24, 0, sizeof(v24));
  v22 = 0;
  v23 = 0;
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  *(_BYTE*)(a1 + 4783) = 4;
  result = (_WORD*)opus_silk_fixed_5b1c0((_DWORD*)&v23 + 1, (int*)&v22 + 1,
                                         (__int64)v27, a3, a4, v10, v5, v4);
  if (*(_DWORD*)(a1 + 4632) != 0 && *(_DWORD*)(a1 + 4664) == 0 &&
      *(_DWORD*)(a1 + 4580) == 4) {
    opus_silk_fixed_5b1c0(&v23, (int*)&v22, (__int64)v24, a3 + 4LL * v10, a4,
                          v10, 2, *(_DWORD*)(a1 + 4640));
    v12 = v22 - HIDWORD(v22);
    if ((int)v22 - HIDWORD(v22) < 0) {
      HIDWORD(v22) = v22;
      v13 = (SHIDWORD(v23) >> (-v12 & 0x1F)) - v23;
    }
    else {
      if (v12 > 0x1F) {
      LABEL_9:
        silk_A2NLSF(a2, (__int64)v24, *(_DWORD*)(a1 + 4640));
        v14 = (char*)__builtin_alloca((4LL * v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
        memset_plt(v14, 0, 4LL * v10);
        v15 = 3;
        while (1) {
          opus_silk_560c0((__int64)v20, a1 + 4500, (__int64)a2, v15,
                          *(_DWORD*)(a1 + 4640));
          MovieRoutine_45380((__int64)v21, (__int64)v20, *(_DWORD*)(a1 + 4640));
          silk_LPC_analysis_filter((__int64)v14, a3, (__int16*)v21, 2 * v10,
                                   *(_DWORD*)(a1 + 4640));
          silk_sum_sqr_shift((_DWORD*)&v26 + 1, (int*)&v25 + 1,
                             (__int64)&v14[2 * *(int*)(a1 + 4640)],
                             v10 - *(_DWORD*)(a1 + 4640));
          result = silk_sum_sqr_shift(
              &v26, (int*)&v25, (__int64)&v14[2 * v10 + 2 * *(int*)(a1 + 4640)],
              v10 - *(_DWORD*)(a1 + 4640));
          if (HIDWORD(v25) - (int)v25 < 0) {
            SHIDWORD(v26) >>= (v25 - BYTE4(v25)) & 0x1F;
            v16 = v26 + HIDWORD(v26);
            v17 = -(int)v25;
            v18 = -(int)v25 - HIDWORD(v22);
            if (v18 >= 0) {
            LABEL_14:
              if (v16 >> (v18 & 0x1F) >= SHIDWORD(v23)) {
                goto LABEL_11;
              }
              goto LABEL_10;
            }
          }
          else {
            LODWORD(v26) = (int)v26 >> ((BYTE4(v25) - v25) & 0x1F);
            v16 = v26 + HIDWORD(v26);
            v17 = -HIDWORD(v25);
            v18 = -HIDWORD(v25) - HIDWORD(v22);
            if (v18 >= 0) {
              goto LABEL_14;
            }
          }
          if ((unsigned int)v18 >= 0xFFFFFFE1 &&
              v16 < SHIDWORD(v23) >> (-v18 & 0x1F)) {
          LABEL_10:
            HIDWORD(v23) = v16;
            HIDWORD(v22) = v17;
            *(_BYTE*)(a1 + 4783) = v15;
          }
        LABEL_11:
          if (--v15 == -1) {
            goto LABEL_20;
          }
        }
      }
      v13 = HIDWORD(v23) - ((int)v23 >> (v12 & 0x1F));
    }
    HIDWORD(v23) = v13;
    goto LABEL_9;
  }
LABEL_20:
  if (*(_BYTE*)(a1 + 4783) == 4) {
    return silk_A2NLSF(a2, (__int64)v27, *(_DWORD*)(a1 + 4640));
  }
  return result;
}

__int64 opus_silk_fixed_5f5e0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              unsigned int a5)
{
  int v5;
  __int64 v6;
  int v7;
  int v11;
  int v12;
  __int16* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int* v38;
  _WORD* v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  _WORD* v47;
  int* v48;
  int v49;
  int v50;
  __int64 v51;
  __int64 result;
  __int64 v53;
  int v54;
  int v55;
  struct {
    __int64 v56;
    __int64 v57;
  } v56_;
  _QWORD v58[4];
  __int64 v59;
  _QWORD v60[7];
  _QWORD v61[4];
  _QWORD v62[8];
  __int64 v63;

  v5 = *(_DWORD*)(a1 + 4596);
  v6 = *(int*)(a1 + 4548);
  v7 = *(_DWORD*)(a1 + 4592);
  v63 = 0;
  v56_.v56 = a3;
  v56_.v57 = a1 + 4096;
  v11 = *(_DWORD*)(a1 + 4584);
  memset(v62, 0, sizeof(v62));
  memset(v61, 0, sizeof(v61));
  memset(v60, 0, sizeof(v60));
  v59 = 0;
  v12 = v11 + v5 + v7;
  memset(v58, 0, sizeof(v58));
  v13 = (__int16*)((char*)&v56_.v56 - ((2 * v6 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  memset_plt(v13, 0, 2 * v6);
  opus_silk_fixed_5b060((__int64)v13, a4 + 2LL * v12 - 2 * v6, 1, v5);
  v14 = *(int*)(a1 + 4596);
  v15 = a4 + 2LL * v12 - 2 * v6 + 2 * v14;
  v16 = 2LL * (*(_DWORD*)(a1 + 4548) - 2 * (int)v14);
  memcpy_plt(&v13[v14], v15, v16);
  opus_silk_fixed_5b060((__int64)&v13[v14 + (unsigned __int64)v16 / 2],
                        v15 + v16, 2, v14);
  silk_autocorr((signed int*)v62, (_DWORD*)&v63 + 1, v13, *(_DWORD*)(a1 + 4548),
                *(_DWORD*)(a1 + 4648) + 1);
  v17 = *(_DWORD*)(a1 + 4648);
  LODWORD(v62[0]) += ((unsigned __int64)(33LL * SLODWORD(v62[0])) >> 15) + 1;
  v18 = MovieRoutine_64c40((__int64)v61, (unsigned int*)v62, v17);
  if (v18 <= 1) {
    v19 = 1;
  }
  else {
    v19 = v18;
  }
  if (SLODWORD(v62[0]) >= 0) {
    v20 = v62[0];
  }
  else {
    v20 = -LODWORD(v62[0]);
  }
  v21 = __clz(v20);
  v22 = LODWORD(v62[0]) << (v21 - 1);
  v23 = __clz(v19);
  v24 = v19 << (v23 - 1);
  v25 = 0x1FFFFFFF / (v24 >> 16);
  v26 = (0x1FFFFFFF / (v24 >> 16) * (__int64)v22) >> 16;
  v27 =
      v22 - (((unsigned __int64)((int)v26 * (__int64)v24) >> 29) & 0xFFFFFFF8);
  v28 = v21 - v23;
  v29 = ((unsigned __int64)(v25 * (__int64)v27) >> 16) + v26;
  if (v21 - v23 + 29 >= 0x30) {
    v30 = 0;
  }
  else {
    v30 = v29 >> (v28 + 13);
  }
  v31 = (int)0x80000000 >> (-13 - v28);
  if (v31 <= v29) {
    v31 = v29;
  }
  if ((int)(0x7FFFFFFFu >> (-13 - v28)) >= v29) {
    v32 = v31;
  }
  else {
    v32 = 0x7FFFFFFFu >> (-13 - v28);
  }
  v33 = v32 << (-13 - v28);
  if (v28 > -14) {
    v33 = v30;
  }
  *(_DWORD*)(a2 + 392) = v33;
  MovieRoutine_5ff80((__int64)&v59, (__int64)v61, *(_DWORD*)(a1 + 4648));
  v34 = *(_DWORD*)(a1 + 4648);
  if (v34 >= 1) {
    v35 = v34 & 3;
    if ((unsigned int)v34 < 4) {
      v36 = 0;
      if ((v34 & 3) == 0) {
        goto LABEL_46;
      }
      goto LABEL_40;
    }
    v37 = 0;
    v38 = (int*)v60;
    v39 = (_WORD*)v58 + 2;
    do {
      v40 = *(v38 - 1);
      v37 -= 4;
      v41 = *(v38 - 2) >> 12;
      if (v41 <= -32768) {
        v41 = -32768;
      }
      if (v41 >= 0x7FFF) {
        LOWORD(v41) = 0x7FFF;
      }
      *(v39 - 2) = v41;
      v42 = v40 >> 12;
      if (v40 >> 12 <= -32768) {
        v42 = -32768;
      }
      if (v42 >= 0x7FFF) {
        LOWORD(v42) = 0x7FFF;
      }
      *(v39 - 1) = v42;
      v43 = *v38;
      v44 = v38[1];
      v38 += 4;
      v45 = v43 >> 12;
      if (v45 <= -32768) {
        v45 = -32768;
      }
      if (v45 >= 0x7FFF) {
        LOWORD(v45) = 0x7FFF;
      }
      *v39 = v45;
      v46 = v44 >> 12;
      if (v44 >> 12 <= -32768) {
        v46 = -32768;
      }
      if (v46 >= 0x7FFF) {
        LOWORD(v46) = 0x7FFF;
      }
      v39[1] = v46;
      v39 += 4;
    } while (-(__int64)(v34 & 0x7FFFFFFC) != v37);
    v36 = -v37;
    if ((v34 & 3) != 0) {
    LABEL_40:
      v47 = (_WORD*)v58 + v36;
      v48 = (int*)&v60[-1] + v36;
      do {
        v49 = *v48++;
        v50 = v49 >> 12;
        if (v49 >> 12 <= -32768) {
          v50 = -32768;
        }
        if (v50 >= 0x7FFF) {
          LOWORD(v50) = 0x7FFF;
        }
        --v35;
        *v47++ = v50;
      } while (v35 != 0);
    }
  }
LABEL_46:
  opus_silk_4e380((__int64)v58, v34, 64881);
  v51 = v56_.v56;
  result = silk_LPC_analysis_filter(v56_.v56, a4, (__int16*)v58, v12,
                                    *(_DWORD*)(a1 + 4648));
  v53 = v56_.v57;
  if (*(_BYTE*)(v56_.v57 + 685) != 0 && *(_DWORD*)(a1 + 4664) == 0) {
    v54 =
        -1228 * ((unsigned int)*(char*)(v56_.v57 + 445) >> 1) -
        ((int)(*(_DWORD*)(a1 + 4648) << 16) >> 11) +
        ((unsigned __int64)(0xFFFFFFFCCCCELL * *(__int16*)(a1 + 4532)) >> 16) +
        ((unsigned __int64)(0xFFFFFFFFF99BLL * *(__int16*)(a1 + 4728)) >> 16) +
        4915;
    if (v54 <= -32768) {
      v54 = -32768;
    }
    if (v54 >= 0x7FFF) {
      v55 = 0x7FFF;
    }
    else {
      v55 = v54;
    }
    result = silk_pitch_analysis_core(
        v51, a2 + 124, (_WORD*)(a1 + 4778), (_BYTE*)(a1 + 4780),
        (__int16*)(a1 + 8648), *(_DWORD*)(a1 + 4544), *(_DWORD*)(a1 + 4652),
        v55, *(_DWORD*)(a1 + 4576), *(_DWORD*)(a1 + 4644),
        *(_DWORD*)(a1 + 4580), *(_DWORD*)(a1 + 5108));
    if ((_DWORD)result != 0) {
      *(_BYTE*)(v53 + 685) = 1;
    }
    else {
      *(_BYTE*)(v53 + 685) = 2;
    }
  }
  else {
    *(_QWORD*)(a2 + 132) = 0;
    *(_QWORD*)(a2 + 124) = 0;
    *(_WORD*)(a1 + 4778) = 0;
    *(_BYTE*)(v53 + 684) = 0;
    *(_DWORD*)(a1 + 8648) = 0;
  }
  return result;
}

_DWORD* opus_silk_fixed_5fa60(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                              int a5)
{
  __int64 v5;
  __int64 v11;
  __int64 v12;
  int v13;
  int* v14;
  __int64 v15;
  int v16;
  int v17;
  int* v18;
  int v19;
  int v20;
  int* v21;
  __int64 v22;
  int* v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int* v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  unsigned int v31;
  char v32;
  int v33;
  int v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  int* v46;
  __int64 v47;
  _DWORD* v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned __int64 v57;
  int v58;
  unsigned int v59;
  unsigned int v60;
  int v61;
  int v62;
  __int64 v63;
  int v64;
  char v65;
  int v66;
  unsigned int v67;
  int v68;
  _DWORD* result;
  __int64 v70;
  __int64 v71;
  struct {
    __int64 v72;
    __int64 v73;
    __int64 v74;
    __int64 v75;
  } v72_;
  _QWORD v76[2];
  _QWORD v77[2];

  v5 = *(unsigned int*)(a1 + 4580);
  v77[0] = 0;
  v77[1] = 0;
  v76[0] = 0;
  v76[1] = 0;
  if ((int)v5 < 1) {
    goto LABEL_48;
  }
  v11 = v5 & 7;
  if ((unsigned int)v5 >= 8) {
    v14 = (int*)(a2 + 16);
    v15 = 0;
    v13 = 0x1FFFFFF;
    do {
      v15 -= 8;
      if (v13 >= *(v14 - 4)) {
        v13 = *(v14 - 4);
      }
      if (v13 >= *(v14 - 3)) {
        v13 = *(v14 - 3);
      }
      if (v13 >= *(v14 - 2)) {
        v13 = *(v14 - 2);
      }
      if (v13 >= *(v14 - 1)) {
        v13 = *(v14 - 1);
      }
      if (v13 >= *v14) {
        v13 = *v14;
      }
      if (v13 >= v14[1]) {
        v13 = v14[1];
      }
      v16 = v14[2];
      v17 = v14[3];
      v14 += 8;
      if (v13 >= v16) {
        v13 = v16;
      }
      if (v13 >= v17) {
        v13 = v17;
      }
    } while (-(v5 & 0x7FFFFFF8) != v15);
    v12 = -v15;
    if ((v5 & 7) == 0) {
      goto LABEL_28;
    }
    goto LABEL_24;
  }
  v12 = 0;
  v13 = 0x1FFFFFF;
  if ((v5 & 7) != 0) {
  LABEL_24:
    v18 = (int*)(a2 + 4 * v12);
    do {
      v20 = *v18++;
      v19 = v20;
      if (v13 >= v20) {
        v13 = v19;
      }
      --v11;
    } while (v11 != 0);
  }
LABEL_28:
  v21 = (int*)v77;
  v22 = v5;
  v23 = (int*)a2;
  if (v13 >= 0) {
    v24 = v13;
  }
  else {
    v24 = -v13;
  }
  v25 = __clz(v24);
  v26 = v13 << (v25 - 1);
  v27 = (unsigned int*)v76;
  do {
    v29 = *v23++;
    v28 = v29;
    if (v29 >= 0) {
      v30 = v28;
    }
    else {
      v30 = -v28;
    }
    v31 = __clz(v30);
    v32 = v31 - 1;
    v33 = v25 - v31;
    v34 = v28 << v32;
    v35 = (0x1FFFFFFF / (v34 >> 16) * (__int64)v26) >> 16;
    v36 =
        ((unsigned __int64)(0x1FFFFFFF / (v34 >> 16) *
                            (__int64)(int)(v26 -
                                           (((unsigned __int64)((int)v35 *
                                                                (__int64)v34) >>
                                             29) &
                                            0xFFFFFFF8))) >>
         16) +
        v35;
    if ((unsigned int)(v33 + 29) >= 0x2E) {
      v37 = 0;
    }
    else {
      v37 = v36 >> (v33 + 15);
    }
    v38 = (int)0x80000000 >> (-15 - v33);
    if (v38 <= v36) {
      v38 = v36;
    }
    if ((int)(0x7FFFFFFFu >> (-15 - v33)) >= v36) {
      v39 = v38;
    }
    else {
      v39 = 0x7FFFFFFFu >> (-15 - v33);
    }
    v40 = v39 << (-15 - v33);
    if (v33 > -16) {
      v40 = v37;
    }
    if (v40 <= 100) {
      v40 = 100;
    }
    --v22;
    *v21++ = v40;
    *v27++ = 0x10000u / v40;
  } while (v22 != 0);
LABEL_48:
  v41 = *(_DWORD*)(a1 + 4640);
  v42 = *(_DWORD*)(a1 + 4584);
  v72_.v74 = 0;
  v72_.v75 = 0;
  v72_.v72 = 0;
  v72_.v73 = 0;
  v43 = 2LL * (v42 + v41 * (int)v5);
  v44 = (char*)&v72_.v72 - ((v43 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  memset_plt(v44, 0, v43);
  if (*(_BYTE*)(a1 + 4781) == 2) {
    v45 = 20LL * (_DWORD)v5;
    v46 = (int*)((char*)&v72_.v72 - ((v45 + 15) & 0xFFFFFFFFFFFFFFF0LL));
    memset_plt(v46, 0, v45);
    v47 = 100LL * (_DWORD)v5;
    v48 = (_DWORD*)((char*)&v72_.v72 - ((v47 + 15) & 0xFFFFFFFFFFFFFFF0LL));
    memset_plt(v48, 0, v47);
    silk_find_LTP_FIX((__int64)v48, v46, a3, (int*)(a2 + 124),
                      *(_DWORD*)(a1 + 4588), v5, *(_DWORD*)(a1 + 5108));
    MovieRoutine_56540(a2 + 80, a1 + 4756, (_BYTE*)(a1 + 4784),
                       (int*)(a1 + 4656), (_DWORD*)(a2 + 396), v48, v46,
                       *(_DWORD*)(a1 + 4588), *(_DWORD*)(a1 + 4580));
    silk_LTP_scale_ctrl_FIX(a1, a2, a5);
    opus_silk_5ace0((__int64)v44, a4 - 2LL * *(int*)(a1 + 4640), a2 + 80,
                    a2 + 124, (__int64)v77, *(_DWORD*)(a1 + 4588),
                    *(_DWORD*)(a1 + 4580), *(_DWORD*)(a1 + 4640));
    if (*(_DWORD*)(a1 + 4664) != 0) {
    LABEL_50:
      v49 = 10737418;
      goto LABEL_72;
    }
  }
  else {
    if ((int)v5 >= 1) {
      v50 = 0;
      v51 = (__int64)v44;
      v52 = a4 - 2LL * v41;
      LODWORD(v53) = *(_DWORD*)(a1 + 4588);
      do {
        opus_651a0(v51, v52, *((_DWORD*)v77 + v50), v41 + v53);
        v53 = *(int*)(a1 + 4588);
        v41 = *(_DWORD*)(a1 + 4640);
        ++v50;
        v52 += 2 * v53;
        v51 += 2LL * (v41 + (int)v53);
      } while (v50 < *(int*)(a1 + 4580));
      LODWORD(v5) = *(_DWORD*)(a1 + 4580);
    }
    memset_plt(a2 + 80, 0, 10LL * (_DWORD)v5);
    *(_DWORD*)(a2 + 396) = 0;
    *(_DWORD*)(a1 + 4656) = 0;
    if (*(_DWORD*)(a1 + 4664) != 0) {
      goto LABEL_50;
    }
  }
  v54 = silk_log2lin(
      (unsigned int)((unsigned __int64)(21845LL * *(int*)(a2 + 396)) >> 16) +
      2048);
  if (v54 >= 0) {
    v55 = v54;
  }
  else {
    v55 = -v54;
  }
  v56 = __clz(v55);
  v57 = (unsigned __int64)(30000LL * *(__int16*)(a2 + 388) + 655360000) >> 16;
  v58 = v54 << (v56 - 1);
  if ((v57 & 0x80000000) == 0LL) {
    v59 = (unsigned __int64)(30000LL * *(__int16*)(a2 + 388) + 655360000) >> 16;
  }
  else {
    v59 = -(int)v57;
  }
  v60 = __clz(v59);
  v61 = v56 - v60;
  v62 = (_DWORD)v57 << (v60 - 1);
  v63 = (0x1FFFFFFF / (v62 >> 16) * (__int64)v58) >> 16;
  v64 = ((unsigned __int64)(0x1FFFFFFF / (v62 >> 16) *
                            (__int64)(int)(v58 -
                                           (((unsigned __int64)((int)v63 *
                                                                (__int64)v62) >>
                                             29) &
                                            0xFFFFFFF8))) >>
         16) +
        v63;
  if (v61 > -16) {
    v68 = v64 >> (v61 + 15);
    if ((unsigned int)(v61 + 29) >= 0x2E) {
      v49 = 0;
    }
    else {
      v49 = v68;
    }
  }
  else {
    v65 = -15 - v61;
    v66 = (int)0x80000000 >> v65;
    if ((int)0x80000000 >> v65 <= v64) {
      v66 = v64;
    }
    if ((int)(0x7FFFFFFFu >> v65) >= v64) {
      v67 = v66;
    }
    else {
      v67 = 0x7FFFFFFFu >> v65;
    }
    v49 = v67 << v65;
  }
LABEL_72:
  opus_silk_fixed_5ef40(a1, &v72_.v72, (__int64)v44, v49);
  silk_process_NLSFs(a1, a2 + 16, (__int16*)&v72_.v72, a1 + 4500);
  result = silk_residual_energy_FIX(
      (_DWORD*)(a2 + 400), a2 + 416, (__int64)v44, (__int16*)(a2 + 16),
      (__int64)v76, *(_DWORD*)(a1 + 4588), *(_DWORD*)(a1 + 4580),
      *(_DWORD*)(a1 + 4640), *(_DWORD*)(a1 + 5108));
  v70 = v72_.v73;
  *(_QWORD*)(a1 + 4500) = v72_.v72;
  *(_QWORD*)(a1 + 4508) = v70;
  v71 = v72_.v75;
  *(_QWORD*)(a1 + 4516) = v72_.v74;
  *(_QWORD*)(a1 + 4524) = v71;
  return result;
}

__int64 opus_silk_fixed_60180(__int64 result, __int64 a2, int a3)
{
  int* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int* v13;
  int* v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int* v31;
  int v32;
  unsigned __int64 v33;

  if (a3 >= 1) {
    v3 = (int*)(result - 4);
    v4 = 1;
    v5 = 0;
    v6 = (unsigned int)a3;
    do {
      if (v4 >> 1 <= 1) {
        v7 = 1;
      }
      else {
        v7 = v4 >> 1;
      }
      v8 = v5 + 1;
      if ((v5 + 1) >> 1 <= 1) {
        LOBYTE(v9) = 1;
      }
      else {
        v9 = (v5 + 1) >> 1;
      }
      v10 = *(_DWORD*)(a2 + 4 * v5);
      if (v5 != 0) {
        if (v5 >= 0xF) {
          v12 = result + 4 * v5;
          v11 = 0;
          v13 = (int*)(result + 16);
          v14 = v3;
          do {
            v15 = *v14;
            v16 = *(v13 - 4);
            *(v13 - 4) = v16 + ((unsigned __int64)(*v14 * (__int64)v10) >> 16);
            *v14 = v15 + ((unsigned __int64)(v16 * (__int64)v10) >> 16);
            v14 -= 8;
            v17 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL));
            v18 = *(v13 - 3);
            *(v13 - 3) = v18 + ((unsigned __int64)(v17 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFELL)) =
                v17 + ((unsigned __int64)(v18 * (__int64)v10) >> 16);
            v19 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL));
            v20 = *(v13 - 2);
            *(v13 - 2) = v20 + ((unsigned __int64)(v19 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFDLL)) =
                v19 + ((unsigned __int64)(v20 * (__int64)v10) >> 16);
            v21 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFCLL));
            v22 = *(v13 - 1);
            *(v13 - 1) = v22 + ((unsigned __int64)(v21 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFCLL)) =
                v21 + ((unsigned __int64)(v22 * (__int64)v10) >> 16);
            v23 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFBLL));
            v24 = *v13 * (__int64)v10;
            *v13 += (unsigned __int64)(v23 * (__int64)v10) >> 16;
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFFBLL)) =
                v23 + (v24 >> 16);
            LODWORD(v24) = v13[1];
            v25 = *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFALL));
            v13[1] = v24 + ((unsigned __int64)(v25 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0x3FFFFFFFFFFFFFFALL)) =
                v25 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
            v26 = *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFF9LL));
            LODWORD(v24) = v13[2];
            v13[2] = v24 + ((unsigned __int64)(v26 * (__int64)v10) >> 16);
            *(_DWORD*)(v12 + 4 * (v11 ^ 0xFFFFFFFFFFFFFFF9LL)) =
                v26 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
            v27 = v11 ^ 0x3FFFFFFFFFFFFFF8LL;
            v11 += 8;
            v28 = *(_DWORD*)(v12 + 4 * v27);
            LODWORD(v24) = v13[3];
            v13[3] = v24 + ((unsigned __int64)(v28 * (__int64)v10) >> 16);
            v13 += 8;
            *(_DWORD*)(v12 + 4 * v27) =
                v28 + ((unsigned __int64)((int)v24 * (__int64)v10) >> 16);
          } while ((v7 & 0x7FFFFFFFFFFFFFF8LL) != v11);
        }
        else {
          v11 = 0;
        }
        if ((v9 & 7) != 0) {
          v29 = v7 & 7;
          v30 = -1 * v11;
          v31 = (int*)(result + 4 * v11);
          do {
            v32 = v3[v30];
            --v29;
            v33 = *v31 * (__int64)v10;
            *v31++ += (unsigned __int64)(v32 * (__int64)v10) >> 16;
            v3[v30--] = v32 + (v33 >> 16);
          } while (v29 != 0);
        }
      }
      ++v4;
      ++v3;
      *(_DWORD*)(result + 4 * v5++) = -256 * v10;
    } while (v8 != v6);
  }
  return result;
}

#pragma GCC visibility pop
