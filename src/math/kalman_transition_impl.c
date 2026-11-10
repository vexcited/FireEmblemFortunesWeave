#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void SdkRoutine_87a1a0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void math_716760(PSEUDO_X8, float*);
__int64 SdkRoutine_87a100(_QWORD);
__int64 SdkRoutine_87a110(_QWORD);
__int64 math_722a20(void*, double, double);
__int64 memcpy_plt(_QWORD, _QWORD, _QWORD);
__int64 memset_plt(void* this_, void*, int);
__int64 nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection_plt(_QWORD,
                                                                        _QWORD);
float cosf_plt(float);
float sinf_plt(float);
unsigned __int64* fw_math_LookupStateIndex(unsigned __int64*, __int64*);
__int64 nerd_kalman_ExtendedKalmanFilter_ObservationUpdate_70cc40(
    _QWORD* a1, __int64 a2, _QWORD* a3, _QWORD* a4, __int64* a5, float a6);
__attribute__((swiftcall)) void kalman_transition_70e160(PSEUDO_X8 x8_,
                                                         float* a1);
__attribute__((swiftcall)) void kalman_transition_70ed80(PSEUDO_X8 x8_,
                                                         float* a1, float* a2);
__attribute__((swiftcall)) void kalman_transition_70f080(PSEUDO_X8 x8_,
                                                         float* a1, float a3,
                                                         float a4, float a5);
__attribute__((swiftcall)) void kalman_transition_70f680(PSEUDO_X8 x8_,
                                                         float* a1, float* a2);
__attribute__((swiftcall)) void kalman_transition_70f9d0(PSEUDO_X8 x8_,
                                                         float* a1, float* a2);
bool nerd_kalman_ExtendedKalmanFilter_ObservationUpdate_7104e0(
    _QWORD* a1, float* a2, float* a3, float* a4, __int64* a5, float a6);

__int64 nerd_kalman_ExtendedKalmanFilter_ObservationUpdate_70cc40(
    _QWORD* a1, __int64 a2, _QWORD* a3, _QWORD* a4, __int64* a5, float a6)
{
  unsigned __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  float* v17;
  unsigned __int64 v18;
  float* v19;
  float v20;
  float v21;
  float v22;
  float* v23;
  float v24;
  float v25;
  float v26;
  float* v27;
  float v28;
  float v29;
  float v30;
  unsigned __int64 v31;
  __int64 result;
  unsigned __int64 v33;
  float* v34;
  float* v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  float* v56;
  float v57;
  float v58;
  float v59;
  __int64 v60;
  __int64 v61;
  float* v62;
  float* v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  __int64 v79;
  float* v80;
  unsigned __int64 v81;
  float* v82;
  float v83;
  float v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  float* v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  float* v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;
  float v97;
  __int64 v98;
  float* v99;
  float* v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  unsigned __int64 v106;
  float* v107;
  float* v108;
  float v109;
  float v110;
  float v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64 v115;
  float* v116;
  _QWORD* v117;
  _QWORD* v118;
  __int64 v119;
  __int64 v120;
  float* v121;
  float* v122;
  float* v123;
  float v124;
  float v125;
  float v126;
  float v127;
  float v128;
  float v129;
  float v130;
  float v131;
  float v132;
  float v133;
  float v134;
  __int64 v135;
  unsigned __int64 v136;
  float* v137;
  float* v138;
  float* v139;
  float v140;
  float v141;
  float v142;
  void* v143;
  unsigned __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  _QWORD* v149;
  __int64 v150;
  float* v151;
  __int64 v152;
  float v153;
  __int64 v154;
  float* v155;
  float* v156;
  float v157;
  float v158;
  float v159;
  float v160;
  float v161;
  float* v162;
  float* v163;
  unsigned __int64 v164;
  float v165;
  float v166;
  float v167;
  unsigned __int64 v168;
  __int64 v169;
  __int64 v170;
  float v171;
  double v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  _QWORD* v176;
  __int64 v177;
  char* v178;
  _QWORD* v179;
  float* v180;
  char* v181;
  char* v182;
  char* v183;
  float* v184;
  char* v185;
  float* v186;
  char* v187;
  float* v188;
  float v189;
  float v190;
  float v191;
  __int64 v192;
  __int64 v193;
  float* v194;
  float* v195;
  float* v196;
  float* v197;
  float v198;
  float v199;
  float v200;
  float v201;
  float v202;
  float v203;
  float v204;
  float v205;
  float v206;
  float v207;
  float v208;
  float v209;
  float v210;
  float v211;
  float v212;
  float v213;
  float v214;
  float v215;
  float v216;
  float v217;
  float v218;
  float v219;
  char* v220;
  char* v221;
  char* v222;
  char* v223;
  __int64 v224;
  unsigned __int64 v225;
  unsigned __int64 v226;
  __int64* v227;
  __int64 v230;
  __int64 v231;
  unsigned __int128* v232;
  char* v233;
  __int64 v234;
  __int64 v235;
  _DWORD* v236;
  unsigned __int128* v237;
  int v238;
  int v239;
  int v240;
  int v241;
  int v242;
  _DWORD* v243;
  unsigned __int64 v244;
  int* v245;
  int v246;
  __int64 v248;
  __int64 v249;
  _QWORD* v250;
  __int64 v251;
  _QWORD* v252;
  float* v253;
  __int64 v254;
  __int64 v255;
  float v256;
  __int64 v257;
  float* v258;
  float* v259;
  float v260;
  float v261;
  float v262;
  float v263;
  float v264;
  float* v265;
  unsigned __int64 v266;
  float* v267;
  float v268;
  float v269;
  float v270;
  float* v271;
  __int64 v272;
  float* v273;
  float v274;
  float v275;
  float v276;
  float v277;
  float v278;
  float* v279;
  float* v280;
  float v281;
  float v282;
  float v283;
  double v284;
  unsigned __int64 v285;
  __int64 v286;
  char* v287;
  __int64 v288;
  __int64 v289;
  void* v297;
  unsigned __int64 v299;
  unsigned __int64 v300;
  unsigned __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  unsigned __int128* v305;
  __int64 v306;
  float v307;
  __int64 v308;
  float* v309;
  float* v310;
  float v311;
  float v312;
  float v313;
  float v314;
  float v315;
  float* v316;
  unsigned __int64 v317;
  float* v318;
  float v319;
  float v320;
  float v321;
  unsigned __int64 v323;
  unsigned __int64 v324;
  __int64 v325;
  float* v326;
  __int64 v327;
  float* v328;
  float v329;
  float v330;
  float v331;
  float v332;
  float v333;
  float* v334;
  float* v335;
  float v336;
  unsigned __int64 v337;
  __int64 v339;
  __int64 v340;
  unsigned __int64 v341;
  unsigned __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  unsigned __int128* v346;
  __int64 v347;
  __int64 v348;
  _QWORD* v349;
  __int64 v350;
  __int64 v351;
  float v352;
  __int64 v353;
  float* v354;
  float* v355;
  float v356;
  float v357;
  float v358;
  float v359;
  float v360;
  unsigned __int64 v361;
  float* v362;
  float* v363;
  float v364;
  float v365;
  float v366;
  unsigned __int64* v367;
  unsigned int v368;
  struct {
    _BYTE v369[136];
    unsigned __int64 v370;
  } v369_;
  struct {
    _BYTE v371[136];
    unsigned __int64 v372;
    unsigned __int64* v373;
  } v371_;
  struct {
    __int64 v374;
    char gap320_[32];
    unsigned __int64 v375;
  } v374_;
  _DWORD v376[4];
  struct {
    __int64 v377;
    char gap384_[112];
    unsigned __int64 v378;
  } v377_;
  struct {
    _QWORD v379[17];
    unsigned __int64 v380;
  } v379_;
  unsigned __int64 v381;
  unsigned __int64 v382;
  __int64 v383;
  struct {
    unsigned __int128 v384;
    __int64 v385;
  } v384_;
  _QWORD v386[2];
  __int64 v387;
  _QWORD v388[3];
  _QWORD v389[46];
  struct {
    unsigned __int64 v390;
    unsigned __int64 v391;
  } v390_;
  _QWORD v392[5];
  struct {
    unsigned __int64 v393;
    unsigned __int64 v394;
    _QWORD v395[5];
    unsigned __int64 v396;
    unsigned __int64 v397;
  } v393_;
  _QWORD v398[5];
  unsigned __int64 v399;
  unsigned __int64 v400;
  unsigned __int64 v401;
  struct {
    unsigned __int64 v402;
    unsigned __int64 v403;
  } v402_;
  struct {
    _QWORD v404[5];
    __int64 v405;
    __int64 v406;
    __int64 v407;
    __int64 v408;
    __int64 v409;
    __int64 v410;
    __int64 v411;
    __int64 v412;
    __int64 v413;
    __int64 v414;
    unsigned __int64 v415;
    char gap1816_[264];
    __int64 v416;
    char gap2088_[16];
    unsigned __int64 v417;
  } v404_;

  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  if (*(_QWORD*)(a2 + 16) == 0) {
    return 1;
  }
  v11 = a1 + 548;
  v12 = a5[1];
  v399 = *a5;
  v13 = a5[2];
  v400 = v12;
  v401 = v13;
  v399 = *fw_math_LookupStateIndex(a1 + 548, (__int64*)&v399),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v400 = *fw_math_LookupStateIndex(v11, (__int64*)&v400),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v14 = *fw_math_LookupStateIndex(v11, (__int64*)&v401),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v15 = v399;
  v16 = v400;
  v17 = (float*)(a1 + 2);
  v18 = *a3;
  memset(v398, 0, sizeof(v398));
  v393_.v397 = 0;
  v393_.v396 = 0;
  v402_.v403 = 0;
  memset(v404_.v404, 0, 32);
  v401 = v14;
  v402_.v402 = v18;
  if (v18 != 0) {
    v19 = &v17[v399];
    v20 = v19[33 * v399];
    v21 = v19[33 * v400];
    v22 = v19[33 * v14];
    v23 = &v17[v400];
    v24 = v23[33 * v399];
    v25 = v23[33 * v400];
    v26 = v23[33 * v14];
    v27 = &v17[v14];
    v28 = v27[33 * v399];
    v29 = v27[33 * v400];
    v30 = v27[33 * v14];
    if (v18 == 1) {
      v31 = 0;
    }
    else {
      v33 = v18 & 0xFFFFFFFFFFFFFFFELL;
      v34 = (float*)(a3 + 2);
      v35 = (float*)v404_.v404;
      v31 = 6 * (((v18 & 0xFFFFFFFFFFFFFFFELL) - 2) >> 1) + 6;
      do {
        v36 = *(v34 - 2);
        v37 = *(v34 - 1);
        v38 = v34[1];
        v33 -= 2LL;
        v39 = (float)((float)(v36 * v20) + 0x0.0p+0f) + (float)(v37 * v21);
        v40 = (float)((float)((float)(v36 * v24) + 0x0.0p+0f) +
                      (float)(v37 * v25)) +
              (float)(*v34 * v26);
        v41 = (float)((float)((float)(v36 * v28) + 0x0.0p+0f) +
                      (float)(v37 * v29)) +
              (float)(*v34 * v30);
        *(v35 - 2) = v39 + (float)(*v34 * v22);
        *(v35 - 1) = v40;
        v42 = v34[2];
        v43 = v34[3];
        v34 += 6;
        *v35 = v41;
        v35[1] = (float)((float)((float)(v38 * v20) + 0x0.0p+0f) +
                         (float)(v42 * v21)) +
                 (float)(v43 * v22);
        v35[2] = (float)((float)((float)(v38 * v24) + 0x0.0p+0f) +
                         (float)(v42 * v25)) +
                 (float)(v43 * v26);
        v35[3] = (float)((float)((float)(v38 * v28) + 0x0.0p+0f) +
                         (float)(v42 * v29)) +
                 (float)(v43 * v30);
        v35 += 6;
      } while (v33 != 0);
    }
    if ((v18 & 1) != 0) {
      v44 = 4 * v31;
      v45 = *(float*)((char*)a3 + v44 + 8);
      v46 = *(float*)((char*)a3 + v44 + 12);
      v47 = (float)((float)(v45 * v20) + 0x0.0p+0f) + (float)(v46 * v21);
      v48 = *(float*)((char*)a3 + v44 + 16);
      *(float*)((char*)&v404_.v404[-1] + v44) = v47 + (float)(v48 * v22);
      *(float*)((char*)&v402_.v403 + v44 + 4) =
          (float)((float)((float)(v45 * v24) + 0x0.0p+0f) +
                  (float)(v46 * v25)) +
          (float)(v48 * v26);
      *(float*)((char*)v404_.v404 + v44) =
          (float)((float)((float)(v45 * v28) + 0x0.0p+0f) +
                  (float)(v46 * v29)) +
          (float)(v48 * v30);
    }
  }
  v49 = v404_.v404[0];
  v50 = v404_.v404[1];
  v404_.v417 = v16;
  memset(v404_.v404, 0, sizeof(v404_.v404));
  v383 = v49;
  v384_.v384 = __PAIR128__(v404_.v404[2], v50);
  v384_.v385 = v404_.v404[3];
  v51 = v402_.v402;
  v52 = v402_.v403;
  v402_.v403 = v18;
  v381 = v402_.v402;
  v382 = v52;
  if (v402_.v402 != 0 && v18 != 0) {
    v53 = 0;
    v54 = 0;
    v55 = &v404_.v404[1];
    while (1) {
      v56 = (float*)&v382 + 3 * v54;
      v57 = *v56;
      v58 = v56[1];
      v59 = v56[2];
      if (v18 >= 8) {
        break;
      }
      v60 = 0;
      if ((v18 & 7) != 0) {
        goto LABEL_20;
      }
    LABEL_13:
      ++v54;
      v55 = (_QWORD*)((char*)v55 + 12);
      v53 += 3;
      if (v54 == v51) {
        goto LABEL_23;
      }
    }
    v61 = 0;
    v62 = (float*)v55;
    v63 = (float*)a3 + 13;
    do {
      v61 -= 8;
      v64 = (float)((float)((float)(v57 * *(v63 - 8)) + 0x0.0p+0f) +
                    (float)(v58 * *(v63 - 7))) +
            (float)(v59 * *(v63 - 6));
      v65 = *(v63 - 5);
      v66 = *(v63 - 4);
      *(v62 - 2) = (float)((float)((float)(v57 * *(v63 - 11)) + 0x0.0p+0f) +
                           (float)(v58 * *(v63 - 10))) +
                   (float)(v59 * *(v63 - 9));
      *(v62 - 1) = v64;
      v67 = (float)((float)((float)(v57 * v65) + 0x0.0p+0f) +
                    (float)(v58 * v66)) +
            (float)(v59 * *(v63 - 3));
      v68 = v63[2];
      v69 = (float)((float)((float)(v57 * *(v63 - 2)) + 0x0.0p+0f) +
                    (float)(v58 * *(v63 - 1))) +
            (float)(v59 * *v63);
      v70 = (float)(v57 * v63[1]) + 0x0.0p+0f;
      *v62 = v67;
      v62[1] = v69;
      v71 = (float)(v70 + (float)(v58 * v68)) + (float)(v59 * v63[3]);
      v72 = (float)((float)((float)(v57 * v63[4]) + 0x0.0p+0f) +
                    (float)(v58 * v63[5])) +
            (float)(v59 * v63[6]);
      v73 = v63[7];
      v74 = v63[8];
      v62[2] = v71;
      v62[3] = v72;
      v75 = v63[10];
      v76 = (float)((float)((float)(v57 * v73) + 0x0.0p+0f) +
                    (float)(v58 * v74)) +
            (float)(v59 * v63[9]);
      v77 = v63[11];
      v78 = v63[12];
      v63 += 24;
      v62[4] = v76;
      v62[5] = (float)((float)((float)(v57 * v75) + 0x0.0p+0f) +
                       (float)(v58 * v77)) +
               (float)(v59 * v78);
      v62 += 8;
    } while (-(__int64)(v18 & 0xFFFFFFFFFFFFFFF8LL) != v61);
    v60 = -v61;
    if ((v18 & 7) == 0) {
      goto LABEL_13;
    }
  LABEL_20:
    v79 = v60 + v53;
    v80 = (float*)a3 + 3 * v60 + 4;
    v81 = v18 & 7;
    v82 = (float*)v404_.v404 + v79;
    do {
      --v81;
      v83 = (float)((float)(v57 * *(v80 - 2)) + 0x0.0p+0f) +
            (float)(v58 * *(v80 - 1));
      v84 = *v80;
      v80 += 3;
      *v82++ = v83 + (float)(v59 * v84);
    } while (v81 != 0);
    goto LABEL_13;
  }
LABEL_23:
  qmemcpy(v392, v404_.v404, sizeof(v392));
  v390_.v391 = v402_.v403;
  v390_.v390 = v402_.v402;
  SdkRoutine_87a100(&v390_.v390),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v85 = v390_.v390;
  if (v390_.v390 != 0) {
    v86 = 0;
    v87 = v390_.v390;
    v88 = 3 * v390_.v390 - 3;
    v89 = (float*)v392 + 3 * v390_.v390;
    while (1) {
      v90 = v87 - 1;
      if (v85 > v87 - 1) {
        break;
      }
    LABEL_25:
      ++v86;
      v89 -= 3;
      v88 -= 3;
      v87 = v90;
      if (v90 == 0) {
        goto LABEL_38;
      }
    }
    v91 = v87 & 7;
    v92 = 3 * v85 - 3;
    v93 = (float*)v392 + 3 * v85;
    v94 = v85;
    v95 = -(__int64)(v87 & 0xFFFFFFFFFFFFFFF8LL);
    while (v86 - v85 > 0xFFFFFFFFFFFFFFF8LL) {
      v96 = 0;
      v97 = 0x0.0p+0f;
      if (v91 != 0) {
        goto LABEL_35;
      }
    LABEL_28:
      --v94;
      v93 -= 3;
      v92 -= 3;
      *((float*)v392 + 3 * v90 + v94) = v97;
      *((float*)v392 + 3 * v94 + v90) = v97;
      if (v94 <= v90) {
        goto LABEL_25;
      }
    }
    v97 = 0x0.0p+0f;
    v98 = 0;
    v99 = v89;
    v100 = v93;
    do {
      v98 -= 8;
      v101 =
          (float)((float)((float)((float)((float)(v97 + (float)(*(v99 - 3) *
                                                                *(v100 - 3))) +
                                          (float)(*(v99 - 2) * *(v100 - 2))) +
                                  (float)(*(v99 - 1) * *(v100 - 1))) +
                          (float)(*v99 * *v100)) +
                  (float)(v99[1] * v100[1])) +
          (float)(v99[2] * v100[2]);
      v102 = v99[3];
      v103 = v99[4];
      v104 = v100[3];
      v105 = v100[4];
      v100 += 8;
      v99 += 8;
      v97 = (float)(v101 + (float)(v102 * v104)) + (float)(v103 * v105);
    } while (v95 != v98);
    v96 = -v98;
    if (v91 == 0) {
      goto LABEL_28;
    }
  LABEL_35:
    v106 = v91;
    v107 = (float*)v392 + v96 + v92;
    v108 = (float*)v392 + v88 + v96;
    do {
      v109 = *v108++;
      v110 = v109;
      v111 = *v107++;
      --v106;
      v97 = v97 + (float)(v110 * v111);
    } while (v106 != 0);
    goto LABEL_28;
  }
LABEL_38:
  memset(v404_.v404, 0, sizeof(v404_.v404));
  qmemcpy(v388, &v392[1], sizeof(v388));
  v389[0] = v392[4];
  v386[1] = v390_.v391;
  v386[0] = v390_.v390;
  v387 = v392[0];
  v112 = *a4;
  v113 = a4[1];
  v402_.v402 = v112;
  v402_.v403 = v113;
  if (v112 != 0 && v113 != 0) {
    v114 = 0;
    v115 = 0;
    v116 = (float*)(a4 + 3);
    v117 = v388;
    v118 = &v404_.v404[1];
    while (v113 < 8) {
      v119 = 0;
      if ((v113 & 7) != 0) {
        goto LABEL_48;
      }
    LABEL_41:
      ++v115;
      v116 += 3;
      v117 = (_QWORD*)((char*)v117 + 12);
      v118 = (_QWORD*)((char*)v118 + 12);
      v114 += 3;
      if (v115 == v112) {
        goto LABEL_51;
      }
    }
    v120 = 0;
    v121 = (float*)v118;
    v122 = (float*)v117;
    v123 = v116;
    do {
      v120 -= 8;
      v124 = *(v123 - 1) + *(v122 - 1);
      v125 = *v123 + *v122;
      v126 = v123[2];
      v127 = v123[3];
      v128 = v123[1] + v122[1];
      v129 = v122[2];
      v130 = v122[3];
      *(v121 - 2) = *(v123 - 2) + *(v122 - 2);
      *(v121 - 1) = v124;
      v131 = v123[4];
      v132 = v123[5];
      *v121 = v125;
      v121[1] = v128;
      v123 += 8;
      v121[2] = v126 + v129;
      v121[3] = v127 + v130;
      v133 = v122[4];
      v134 = v122[5];
      v122 += 8;
      v121[4] = v131 + v133;
      v121[5] = v132 + v134;
      v121 += 8;
    } while (-(__int64)(v113 & 0xFFFFFFFFFFFFFFF8LL) != v120);
    v119 = -v120;
    if ((v113 & 7) == 0) {
      goto LABEL_41;
    }
  LABEL_48:
    v135 = v119 + v114;
    v136 = v113 & 7;
    v137 = (float*)v404_.v404 + v119 + v114;
    v138 = (float*)&v388[-1] + v135;
    v139 = (float*)a4 + v135 + 4;
    do {
      v140 = *v139++;
      v141 = v140;
      v142 = *v138++;
      --v136;
      *v137++ = v141 + v142;
    } while (v136 != 0);
    goto LABEL_41;
  }
LABEL_51:
  qmemcpy(v393_.v395, v404_.v404, sizeof(v393_.v395));
  v393_.v394 = v402_.v403;
  v393_.v393 = v402_.v402;
  v143 = (void*)SdkRoutine_87a110(&v393_.v393),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v145 = v393_.v394;
  qmemcpy(v398, v393_.v395, sizeof(v398));
  v393_.v397 = v393_.v394;
  v404_.v404[0] = v393_.v394;
  v393_.v396 = v393_.v393;
  if (v393_.v394 == 0) {
    goto LABEL_70;
  }
  v402_.v403 = 0;
  v402_.v402 = 0;
  v143 = (void*)memset_plt((void*)&v402_.v402, nullptr, 4 * (int)v393_.v394),
  v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
  v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v146 = v393_.v396;
  if (v393_.v396 != 0) {
    v147 = v393_.v396 & 7;
    v148 = 0;
    v149 = v398;
    v150 = -(__int64)(v393_.v396 & 0xFFFFFFFFFFFFFFF8LL);
    v151 = (float*)&v398[4] + 1;
    while (v146 < 8) {
      v152 = 0;
      v153 = 0x0.0p+0f;
      if (v147 != 0) {
        goto LABEL_61;
      }
    LABEL_54:
      *((float*)&v402_.v402 + v148++) = v153;
      ++v151;
      v149 = (_QWORD*)((char*)v149 + 4);
      if (v148 == v145) {
        goto LABEL_64;
      }
    }
    v153 = 0x0.0p+0f;
    v154 = 0;
    v155 = (float*)(a2 + 16);
    v156 = v151;
    do {
      v154 -= 8;
      v157 =
          (float)((float)((float)((float)((float)(v153 + (float)(*(v155 - 4) *
                                                                 *(v156 - 9))) +
                                          (float)(*(v155 - 3) * *(v156 - 6))) +
                                  (float)(*(v155 - 2) * *(v156 - 3))) +
                          (float)(*(v155 - 1) * *v156)) +
                  (float)(*v155 * v156[3])) +
          (float)(v155[1] * v156[6]);
      v158 = v155[2];
      v159 = v155[3];
      v155 += 8;
      v160 = v157 + (float)(v158 * v156[9]);
      v161 = v156[12];
      v156 += 24;
      v153 = v160 + (float)(v159 * v161);
    } while (v150 != v154);
    v152 = -v154;
    if (v147 == 0) {
      goto LABEL_54;
    }
  LABEL_61:
    v162 = (float*)v149 + 3 * v152;
    v163 = (float*)(a2 + 4 * v152);
    v164 = v146 & 7;
    do {
      v165 = *v163++;
      v166 = v165;
      v167 = *v162;
      v162 += 3;
      --v164;
      v153 = v153 + (float)(v166 * v167);
    } while (v164 != 0);
    goto LABEL_54;
  }
LABEL_64:
  v387 = v404_.v404[0];
  if (v404_.v404[0] != 0) {
    v143 = (void*)memcpy_plt(v386, &v402_.v402, 4LL * v404_.v404[0]),
    v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
    v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
    v168 = *(_QWORD*)(a2 + 16);
    if (v387 != 0 && v168 != 0) {
      v169 = v387 & 7;
      if ((unsigned __int64)(v387 - 1) >= 7) {
        v171 = 0x0.0p+0f;
        v271 = (float*)(a2 + 16);
        v272 = 0;
        v273 = (float*)&v387;
        do {
          v272 -= 8;
          v274 = (float)((float)((float)((float)((float)(v171 +
                                                         (float)(*(v273 - 4) *
                                                                 *(v271 - 4))) +
                                                 (float)(*(v273 - 3) *
                                                         *(v271 - 3))) +
                                         (float)(*(v273 - 2) * *(v271 - 2))) +
                                 (float)(*(v273 - 1) * *(v271 - 1))) +
                         (float)(*v273 * *v271)) +
                 (float)(v273[1] * v271[1]);
          v275 = v273[2];
          v276 = v273[3];
          v277 = v271[2];
          v278 = v271[3];
          v271 += 8;
          v273 += 8;
          v171 = (float)(v274 + (float)(v275 * v277)) + (float)(v276 * v278);
        } while (-(__int64)(v387 & 0xFFFFFFFFFFFFFFF8LL) != v272);
        v170 = -v272;
        if ((v387 & 7) == 0) {
        LABEL_119:
          math_722a20(v143, vcvtd_n_f64_u64(v168, 1u),
                      v171 * 0x1.0000000000000p-1),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(double, "d0", "=w")),
              v284 = COERCE_AS(__typeof__(v284),
                               PSEUDO_REGISTER(double, "d0", "=w"));
          result = v284 >= a6;
          if (v284 < a6) {
            return result;
          }
          goto LABEL_72;
        }
      }
      else {
        v170 = 0;
        v171 = 0x0.0p+0f;
        if ((v387 & 7) == 0) {
          goto LABEL_119;
        }
      }
      v279 = (float*)(a2 + 4 * v170);
      v280 = (float*)v386 + v170;
      do {
        v281 = *v280++;
        v282 = v281;
        v283 = *v279++;
        --v169;
        v171 = v171 + (float)(v282 * v283);
      } while (v169 != 0);
      goto LABEL_119;
    }
  }
  else {
  LABEL_70:
    v168 = *(_QWORD*)(a2 + 16);
  }
  math_722a20(v143, vcvtd_n_f64_u64(v168, 1u), 0x0.0p+0),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  result = v173 >= a6;
  if (v173 < a6) {
    return result;
  }
LABEL_72:
  v367 = v11;
  v174 = a1[1];
  v175 = *a3;
  v176 = v404_.v404;
  v368 = result;
  v389[45] = 0;
  v404_.v416 = 0;
  v402_.v402 = v175;
  v402_.v403 = v174;
  memset_plt((void*)v404_.v404, nullptr, 396),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v175 != 0 && v174 != 0) {
    v177 = 0;
    v178 = (char*)a1 + 132 * v15;
    v179 = &v404_.v404[1];
    v180 = (float*)(v178 + 24);
    v181 = v178 + 16;
    v182 = (char*)a1 + 132 * v404_.v417;
    v183 = (char*)a1 + 132 * v14;
    v184 = (float*)(v183 + 24);
    v185 = v183 + 16;
    v186 = (float*)(v182 + 24);
    v187 = v182 + 16;
    while (1) {
      v188 = (float*)a3 + 3 * v177 + 2;
      v189 = *v188;
      v190 = v188[1];
      v191 = v188[2];
      if (v174 >= 8) {
        break;
      }
      v192 = 0;
      if ((v174 & 7) != 0) {
        goto LABEL_82;
      }
    LABEL_75:
      ++v177;
      v179 = (_QWORD*)((char*)v179 + 132);
      v176 = (_QWORD*)((char*)v176 + 132);
      if (v177 == v175) {
        goto LABEL_85;
      }
    }
    v193 = 0;
    v194 = v184;
    v195 = v186;
    v196 = (float*)v179;
    v197 = v180;
    do {
      v193 -= 8;
      v198 = *v197;
      v199 = v197[1];
      v200 = (float)((float)((float)(v189 * *(v197 - 1)) + 0x0.0p+0f) +
                     (float)(v190 * *(v195 - 1))) +
             (float)(v191 * *(v194 - 1));
      v201 = *v195;
      v202 = v195[1];
      *(v196 - 2) = (float)((float)((float)(v189 * *(v197 - 2)) + 0x0.0p+0f) +
                            (float)(v190 * *(v195 - 2))) +
                    (float)(v191 * *(v194 - 2));
      *(v196 - 1) = v200;
      v203 = (float)((float)(v189 * v199) + 0x0.0p+0f) + (float)(v190 * v202);
      v204 = (float)(v189 * v197[2]) + 0x0.0p+0f;
      v205 = (float)(v189 * v197[3]) + 0x0.0p+0f;
      v206 = (float)((float)((float)(v189 * v198) + 0x0.0p+0f) +
                     (float)(v190 * v201)) +
             (float)(v191 * *v194);
      v207 = v195[2];
      v208 = v195[3];
      v209 = v203 + (float)(v191 * v194[1]);
      *v196 = v206;
      v196[1] = v209;
      v210 = v197[4];
      v211 = v197[5];
      v197 += 8;
      v212 = v205 + (float)(v190 * v208);
      v213 = (float)(v204 + (float)(v190 * v207)) + (float)(v191 * v194[2]);
      v214 = v195[4];
      v215 = v195[5];
      v216 = v212 + (float)(v191 * v194[3]);
      v195 += 8;
      v196[2] = v213;
      v196[3] = v216;
      v217 = (float)((float)(v189 * v210) + 0x0.0p+0f) + (float)(v190 * v214);
      v218 = v194[4];
      v219 = v194[5];
      v194 += 8;
      v196[4] = v217 + (float)(v191 * v218);
      v196[5] = (float)((float)((float)(v189 * v211) + 0x0.0p+0f) +
                        (float)(v190 * v215)) +
                (float)(v191 * v219);
      v196 += 8;
    } while (-(__int64)(v174 & 0xFFFFFFFFFFFFFFF8LL) != v193);
    v192 = -v193;
    if ((v174 & 7) == 0) {
      goto LABEL_75;
    }
  LABEL_82:
    v220 = (char*)v176 + 4 * v192;
    v221 = &v185[4 * v192];
    v222 = &v187[4 * v192];
    v223 = &v181[4 * v192];
    v224 = 0;
    do {
      *(float*)&v220[v224] =
          (float)((float)((float)(v189 * *(float*)&v223[v224]) + 0x0.0p+0f) +
                  (float)(v190 * *(float*)&v222[v224])) +
          (float)(v191 * *(float*)&v221[v224]);
      v224 += 4;
    } while (4 * (v174 & 7) != v224);
    goto LABEL_75;
  }
LABEL_85:
  memcpy_plt(&v381, &v402_.v402, 416),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v225 = v381;
  v226 = v382;
  v227 = &v387;
  memset_plt((void*)&v387, nullptr, 396),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v225 != 0 && v226 != 0) {
    v230 = 0;
    v231 = 0;
    v232 = &v384_.v384;
    v233 = (char*)v389 + 4;
    while (v226 < 8) {
      v234 = 0;
      if ((v226 & 7) != 0) {
        goto LABEL_95;
      }
    LABEL_88:
      ++v231;
      v232 = (unsigned __int128*)((char*)v232 + 132);
      v233 += 4;
      v227 = (__int64*)((char*)v227 + 4);
      v230 += 33;
      if (v231 == v225) {
        goto LABEL_98;
      }
    }
    v235 = 0;
    v236 = v233;
    v237 = v232;
    do {
      v238 = *((_DWORD*)v237 - 1);
      v235 -= 8;
      *(v236 - 9) = *((_DWORD*)v237 - 2);
      *(v236 - 6) = v238;
      v239 = *((_DWORD*)v237 + 1);
      *(v236 - 3) = *(_DWORD*)v237;
      *v236 = v239;
      v240 = *((_DWORD*)v237 + 3);
      v236[3] = *((_DWORD*)v237 + 2);
      v236[6] = v240;
      v241 = *((_DWORD*)v237 + 4);
      v242 = *((_DWORD*)v237 + 5);
      v237 += 2;
      v236[9] = v241;
      v236[12] = v242;
      v236 += 24;
    } while (-(__int64)(v226 & 0xFFFFFFFFFFFFFFF8LL) != v235);
    v234 = -v235;
    if ((v226 & 7) == 0) {
      goto LABEL_88;
    }
  LABEL_95:
    v243 = (_DWORD*)v227 + 3 * v234;
    v244 = v226 & 7;
    v245 = (int*)&v383 + v234 + v230;
    do {
      v246 = *v245++;
      --v244;
      *v243 = v246;
      v243 += 3;
    } while (v244 != 0);
    goto LABEL_88;
  }
LABEL_98:
  v404_.v416 = 0;
  v402_.v402 = v226;
  v402_.v403 = v145;
  memset_plt((void*)v404_.v404, nullptr, 396),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v226 != 0 && v145 != 0) {
    if (v225 != 0) {
      v248 = 0;
      v249 = 0;
      v250 = v388;
      while (1) {
        v251 = 0;
        v252 = v398;
        v253 = (float*)&v398[4] + 1;
        do {
          if (v225 < 8) {
            v255 = 0;
            v256 = 0x0.0p+0f;
            if ((v225 & 7) == 0) {
              goto LABEL_104;
            }
          LABEL_111:
            v265 = (float*)v252 + 3 * v255;
            v266 = v225 & 7;
            v267 = (float*)&v388[-1] + v248 + v255;
            do {
              v268 = *v267++;
              v269 = v268;
              v270 = *v265;
              v265 += 3;
              --v266;
              v256 = v256 + (float)(v269 * v270);
            } while (v266 != 0);
            goto LABEL_104;
          }
          v256 = 0x0.0p+0f;
          v257 = 0;
          v258 = v253;
          v259 = (float*)v250;
          do {
            v257 -= 8;
            v260 =
                (float)((float)((float)((float)((float)(v256 +
                                                        (float)(*(v259 - 2) *
                                                                *(v258 - 9))) +
                                                (float)(*(v259 - 1) *
                                                        *(v258 - 6))) +
                                        (float)(*v259 * *(v258 - 3))) +
                                (float)(v259[1] * *v258)) +
                        (float)(v259[2] * v258[3])) +
                (float)(v259[3] * v258[6]);
            v261 = v259[4];
            v262 = v259[5];
            v259 += 8;
            v263 = v260 + (float)(v261 * v258[9]);
            v264 = v258[12];
            v258 += 24;
            v256 = v263 + (float)(v262 * v264);
          } while (-(__int64)(v225 & 0xFFFFFFFFFFFFFFF8LL) != v257);
          v255 = -v257;
          if ((v225 & 7) != 0) {
            goto LABEL_111;
          }
        LABEL_104:
          v254 = v251 + 3 * v249;
          ++v251;
          ++v253;
          v252 = (_QWORD*)((char*)v252 + 4);
          *((float*)v404_.v404 + v254) = v256;
        } while (v251 != v145);
        ++v249;
        v250 = (_QWORD*)((char*)v250 + 12);
        v248 += 3;
        if (v249 == v226) {
          goto LABEL_129;
        }
      }
    }
    v285 = v226 & 7;
    if (v226 >= 8) {
      v287 = (char*)&v404_.v404[4] + 4;
      v288 = 0;
      v289 = -(__int64)(v226 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        memset_plt((void*)(v287 - 36), nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        memset_plt((void*)(v287 - 24), nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        memset_plt((void*)(v287 - 12), nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        memset_plt((void*)v287, nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        memset_plt((void*)(v287 + 12), nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        memset_plt((void*)(v287 + 24), nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        memset_plt((void*)(v287 + 36), nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        memset_plt((void*)(v287 + 48), nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v288 -= 8;
        v287 += 96;
      } while (v289 != v288);
      v286 = -v288;
    }
    else {
      v286 = 0;
    }
    if (v285 != 0) {
      v297 = (void*)((char*)v404_.v404 + 12 * v286);
      do {
        memset_plt(v297, nullptr, 4 * v145),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v297 = (void*)((char*)v297 + 12);
        --v285;
      } while (v285 != 0);
    }
  }
LABEL_129:
  memcpy_plt(&v381, &v402_.v402, 416),
      v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
      v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
  v299 = v381;
  memset(v379_.v379, 0, sizeof(v379_.v379));
  v404_.v415 = v381;
  if (v381 != 0) {
    v404_.v414 = 0;
    v404_.v413 = 0;
    v404_.v412 = 0;
    v404_.v411 = 0;
    v404_.v410 = 0;
    v404_.v409 = 0;
    v404_.v408 = 0;
    v404_.v407 = 0;
    v404_.v406 = 0;
    v404_.v405 = 0;
    memset(v404_.v404, 0, sizeof(v404_.v404));
    v402_.v403 = 0;
    v402_.v402 = 0;
    memset_plt((void*)&v402_.v402, nullptr, 4 * v381),
        v173 = COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
        v284 = COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
    v300 = v382;
    if (v382 != 0) {
      v301 = v382 & 7;
      v302 = 0;
      v303 = 0;
      v304 = -(__int64)(v382 & 0xFFFFFFFFFFFFFFF8LL);
      v305 = &v384_.v384;
      while (v300 < 8) {
        v306 = 0;
        v307 = 0x0.0p+0f;
        if (v301 != 0) {
          goto LABEL_139;
        }
      LABEL_132:
        *((float*)&v402_.v402 + v303++) = v307;
        v305 = (unsigned __int128*)((char*)v305 + 12);
        v302 += 3;
        if (v303 == v299) {
          goto LABEL_142;
        }
      }
      v307 = 0x0.0p+0f;
      v308 = 0;
      v309 = (float*)(a2 + 16);
      v310 = (float*)v305;
      do {
        v308 -= 8;
        v311 = (float)((float)((float)((float)((float)(v307 +
                                                       (float)(*(v310 - 2) *
                                                               *(v309 - 4))) +
                                               (float)(*(v310 - 1) *
                                                       *(v309 - 3))) +
                                       (float)(*v310 * *(v309 - 2))) +
                               (float)(v310[1] * *(v309 - 1))) +
                       (float)(v310[2] * *v309)) +
               (float)(v310[3] * v309[1]);
        v312 = v310[4];
        v313 = v310[5];
        v314 = v309[2];
        v315 = v309[3];
        v310 += 8;
        v309 += 8;
        v307 = (float)(v311 + (float)(v312 * v314)) + (float)(v313 * v315);
      } while (v304 != v308);
      v306 = -v308;
      if (v301 == 0) {
        goto LABEL_132;
      }
    LABEL_139:
      v316 = (float*)(a2 + 4 * v306);
      v317 = v300 & 7;
      v318 = (float*)&v383 + v306 + v302;
      do {
        v319 = *v318++;
        v320 = v319;
        v321 = *v316++;
        --v317;
        v307 = v307 + (float)(v320 * v321);
      } while (v317 != 0);
      goto LABEL_132;
    }
  LABEL_142:
    v377_.v378 = v404_.v415;
    if (v404_.v415 != 0) {
      memcpy_plt(v376, &v402_.v402, 4 * v404_.v415),
          v173 =
              COERCE_AS(__typeof__(v173), PSEUDO_REGISTER(double, "d0", "=w")),
          v284 =
              COERCE_AS(__typeof__(v284), PSEUDO_REGISTER(double, "d0", "=w"));
      v323 = v377_.v378;
      v404_.v415 = v377_.v378;
      if (v377_.v378 != 0) {
        v404_.v414 = 0;
        v404_.v413 = 0;
        v404_.v412 = 0;
        v404_.v411 = 0;
        v404_.v410 = 0;
        v404_.v409 = 0;
        v404_.v408 = 0;
        v404_.v407 = 0;
        v404_.v406 = 0;
        v404_.v405 = 0;
        memset(v404_.v404, 0, sizeof(v404_.v404));
        v402_.v403 = 0;
        v402_.v402 = 0;
        memset_plt((void*)&v402_.v402, nullptr, 4 * v377_.v378),
            v173 = COERCE_AS(__typeof__(v173),
                             PSEUDO_REGISTER(double, "d0", "=w")),
            v284 = COERCE_AS(__typeof__(v284),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v324 = v323 & 7;
        v325 = 0;
        if (v323 >= 8) {
          v326 = (float*)v404_.v404;
          v327 = 0;
          v328 = (float*)&v377_.v377;
          do {
            v327 -= 8;
            v329 = -*(v328 - 3);
            *(v326 - 4) = -*(v328 - 4);
            *(v326 - 3) = v329;
            v330 = -*(v328 - 1);
            *(v326 - 2) = -*(v328 - 2);
            *(v326 - 1) = v330;
            v331 = -v328[1];
            *v326 = -*v328;
            v326[1] = v331;
            v332 = v328[2];
            v333 = v328[3];
            v328 += 8;
            v326[2] = -v332;
            v326[3] = -v333;
            v326 += 8;
          } while (-(__int64)(v323 & 0xFFFFFFFFFFFFFFF8LL) != v327);
          v325 = -v327;
        }
        if ((v323 & 7) != 0) {
          v334 = (float*)&v402_.v402 + v325;
          v335 = (float*)&v376[v325];
          do {
            v336 = *v335++;
            --v324;
            *v334++ = -v336;
          } while (v324 != 0);
        }
        v379_.v380 = v404_.v415;
        if (v404_.v415 != 0) {
          memcpy_plt(v379_.v379, &v402_.v402, 4 * v404_.v415),
              v173 = COERCE_AS(__typeof__(v173),
                               PSEUDO_REGISTER(double, "d0", "=w")),
              v284 = COERCE_AS(__typeof__(v284),
                               PSEUDO_REGISTER(double, "d0", "=w"));
          v369_.v370 = v379_.v380;
          if (v379_.v380 != 0) {
            memcpy_plt(v369_.v369, v379_.v379, 4 * v379_.v380),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(double, "d0", "=w")),
                v284 = COERCE_AS(__typeof__(v284),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v337 = v369_.v370;
            v371_.v372 = v369_.v370;
            if (v369_.v370 == 0) {
            LABEL_156:
              v371_.v373 = v367;
              v374_.v375 = 0;
              goto LABEL_157;
            }
            memcpy_plt(v371_.v371, v369_.v369, 4 * v369_.v370),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(double, "d0", "=w")),
                v284 = COERCE_AS(__typeof__(v284),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v371_.v373 = v367;
            v374_.v375 = v337;
            memset_plt((void*)&v374_.v374, nullptr, v337),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(double, "d0", "=w")),
                v284 = COERCE_AS(__typeof__(v284),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          LABEL_157:
            nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection_plt(
                a1, v371_.v371),
                v173 = COERCE_AS(__typeof__(v173),
                                 PSEUDO_REGISTER(double, "d0", "=w")),
                v284 = COERCE_AS(__typeof__(v284),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v339 = *a1;
            result = v368;
            v374_.v375 = 0;
            v371_.v372 = 0;
            v369_.v370 = 0;
            if (v339 != 0) {
              v340 = a1[1];
              if (v340 != 0) {
                v341 = v382;
                if (v382 != 0) {
                  v342 = v382 & 7;
                  v343 = 0;
                  v344 = 0;
                  v345 = -(__int64)(v382 & 0xFFFFFFFFFFFFFFF8LL);
                  v346 = &v384_.v384;
                  do {
                    v347 = 0;
                    v348 = 0;
                    v349 = v388;
                    do {
                      if (v341 < 8) {
                        v351 = 0;
                        v352 = 0x0.0p+0f;
                        if (v342 == 0) {
                          goto LABEL_163;
                        }
                      LABEL_170:
                        v361 = v341 & 7;
                        v362 = (float*)&v388[-1] + v351 + v347;
                        v363 = (float*)&v383 + v343 + v351;
                        do {
                          v364 = *v363++;
                          v365 = v364;
                          v366 = *v362++;
                          --v361;
                          v352 = v352 + (float)(v365 * v366);
                        } while (v361 != 0);
                        goto LABEL_163;
                      }
                      v352 = 0x0.0p+0f;
                      v353 = 0;
                      v354 = (float*)v346;
                      v355 = (float*)v349;
                      do {
                        v353 -= 8;
                        v356 =
                            (float)((float)((float)((float)((float)(v352 +
                                                                    (float)(*(v354 -
                                                                              2) *
                                                                            *(v355 -
                                                                              2))) +
                                                            (float)(*(v354 -
                                                                      1) *
                                                                    *(v355 -
                                                                      1))) +
                                                    (float)(*v354 * *v355)) +
                                            (float)(v354[1] * v355[1])) +
                                    (float)(v354[2] * v355[2])) +
                            (float)(v354[3] * v355[3]);
                        v357 = v354[4];
                        v358 = v354[5];
                        v359 = v355[4];
                        v360 = v355[5];
                        v355 += 8;
                        v354 += 8;
                        v352 = (float)(v356 + (float)(v357 * v359)) +
                               (float)(v358 * v360);
                      } while (v345 != v353);
                      v351 = -v353;
                      if (v342 != 0) {
                        goto LABEL_170;
                      }
                    LABEL_163:
                      v350 = v348 + 33 * v344;
                      ++v348;
                      v349 = (_QWORD*)((char*)v349 + 12);
                      v347 += 3;
                      v17[v350] = v17[v350] - v352;
                    } while (v348 != v340);
                    ++v344;
                    v346 = (unsigned __int128*)((char*)v346 + 12);
                    v343 += 3;
                  } while (v344 != v339);
                }
              }
            }
            return result;
          }
        }
      }
    }
  }
  v371_.v372 = 0;
  goto LABEL_156;
}

__attribute__((swiftcall)) void kalman_transition_70e160(PSEUDO_X8 x8_,
                                                         float* a1)
{
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float result;
  __int64 v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  float v40;
  int v41;
  char v42;
  __int64 v43;
  __int64 v44;
  float v45;
  __int64 v46;
  __int64 v47;
  float v48;
  float v49;
  char v50;
  __int64 v51;
  __int64 v52;
  float v53;
  __int64 v54;
  float v55;
  float v56;
  char v57;
  __int64 v58;
  __int64 v59;
  struct {
    __int64 v60;
    __int64 v61;
    float v62;
  } v60_;

  math_716760((void*)((__int64)&v60_.v60), a1);
  v4 = v60_.v62;
  v5 = v60_.v60;
  if (v60_.v60 != 0) {
    v6 = v60_.v60 + 16LL * *(_QWORD*)(v60_.v60 + 4096);
    *(_BYTE*)(v6 + 4) = v60_.v61;
    *(_BYTE*)(v6 + 5) = 0;
    v7 = *(_QWORD*)(v5 + 4096);
    *(_QWORD*)(v6 + 8) = 1065353216;
    *(_QWORD*)(v5 + 4096) = v7 + 1;
    v8 = sqrtf(v4 + 0x1.0000000000000p-126f);
    v9 = v5 + 16LL * *(_QWORD*)(v5 + 4096);
    *(_WORD*)(v9 + 4) = (unsigned __int8)v7;
    *(_DWORD*)(v9 + 12) = 0;
    v10 = *(_QWORD*)(v5 + 4096);
    *(float*)(v9 + 8) = 0x1.0000000000000p-1f / v8;
    *(_QWORD*)(v5 + 4096) = v10 + 1;
    v11 = v5 + 16 * (v10 + 1);
    *(_WORD*)(v11 + 4) = (unsigned __int8)v10;
    *(_QWORD*)(v11 + 8) = 1056964608;
    v12 = *(_QWORD*)(v5 + 4096);
    *(_QWORD*)(v5 + 4096) = v12 + 1;
  }
  else {
    v8 = sqrtf(v60_.v62 + 0x1.0000000000000p-126f);
    LOBYTE(v10) = -1;
    LOBYTE(v12) = -1;
  }
  v13 = v8 * 0x1.0000000000000p-1f;
  v14 = v13 * v13;
  if ((float)(v13 * v13) <= 0x1.47ae140000000p-5f) {
    v25 = (float)(PSEUDO_UNFUSED(v14 * -0x1.ae64560000000p-26f)) +
          0x1.71de3a0000000p-19f;
    v26 = (float)(PSEUDO_UNFUSED((float)(v13 + v13) * v25)) +
          (float)((float)((float)(v13 + v13) * -0x1.ae64560000000p-26f) * v14);
    v27 = (float)(PSEUDO_UNFUSED(v14 * v25)) + -0x1.a01a020000000p-13f;
    v28 =
        (float)(PSEUDO_UNFUSED((float)(v13 + v13) * v27)) + (float)(v26 * v14);
    v29 = (float)(PSEUDO_UNFUSED(v14 * v27)) + 0x1.1111120000000p-7f;
    v30 =
        (float)(PSEUDO_UNFUSED((float)(v13 + v13) * v29)) + (float)(v28 * v14);
    v31 = (float)(PSEUDO_UNFUSED(v14 * v29)) + -0x1.5555560000000p-3f;
    v18 =
        (float)(PSEUDO_UNFUSED((float)(v13 + v13) * v31)) + (float)(v30 * v14);
    v17 = (float)(PSEUDO_UNFUSED(v14 * v31)) + 0x1.0000000000000p+0f;
    if (v5 != 0) {
      goto LABEL_6;
    }
  }
  else {
    v15 = sinf_plt(v13);
    v16 = cosf_plt(v13);
    v17 = v15 / v13;
    v18 = (float)-(float)(v15 - (float)(v16 * v13)) / v14;
    if (v5 != 0) {
    LABEL_6:
      v19 = v5 + 16LL * *(_QWORD*)(v5 + 4096);
      *(_BYTE*)(v19 + 4) = v12;
      *(_BYTE*)(v19 + 5) = 0;
      *(float*)(v19 + 8) = v18;
      *(_DWORD*)(v19 + 12) = 0;
      v20 = *(_QWORD*)(v5 + 4096);
      *(_QWORD*)(v5 + 4096) = v20 + 1;
      v21 = v5 + 16 * (v20 + 1);
      *(_WORD*)(v21 + 4) = (unsigned __int8)v20;
      v22 = *(_QWORD*)(v5 + 4096);
      *(_DWORD*)(v21 + 8) = 1056964608;
      *(_DWORD*)(v21 + 12) = 0;
      *(_QWORD*)(v5 + 4096) = v22 + 1;
      v23 = v5 + 16 * (v22 + 1);
      *(_BYTE*)(v23 + 4) = v10;
      *(_BYTE*)(v23 + 5) = 0;
      *(_DWORD*)(v23 + 8) = 1056964608;
      *(_DWORD*)(v23 + 12) = 0;
      v24 = *(_QWORD*)(v5 + 4096);
      *(_QWORD*)(v5 + 4096) = v24 + 1;
      goto LABEL_9;
    }
  }
  LOBYTE(v24) = -1;
  LOBYTE(v22) = -1;
LABEL_9:
  v32 = v17 * 0x1.0000000000000p-1f;
  v33 = sinf_plt(v13);
  result = cosf_plt(v13);
  if (v5 != 0) {
    v35 = v5 + 16LL * *(_QWORD*)(v5 + 4096);
    *(_BYTE*)(v35 + 4) = v24;
    *(_BYTE*)(v35 + 5) = 0;
    *(float*)(v35 + 8) = -v33;
    *(_DWORD*)(v35 + 12) = 0;
    v36 = *(_QWORD*)(v5 + 4096);
    *(_QWORD*)(v5 + 4096) = v36 + 1;
    v37 = a1[4];
    v38 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 != 0) {
      v39 = *((_QWORD*)a1 + 1);
      v40 = v32;
      v41 = *((_DWORD*)a1 + 4);
      v42 = v22;
    }
    else {
      v42 = 0;
      v41 = 0;
      v38 = v5;
      LOBYTE(v39) = v22;
      v40 = a1[4];
    }
  LABEL_15:
    v43 = v38 + 16LL * *(_QWORD*)(v38 + 4096);
    *(_BYTE*)(v43 + 4) = v39;
    *(_BYTE*)(v43 + 5) = v42;
    *(float*)(v43 + 8) = v40;
    *(_DWORD*)(v43 + 12) = v41;
    v44 = *(_QWORD*)(v38 + 4096);
    *(_QWORD*)(v38 + 4096) = v44 + 1;
    v45 = a1[10];
    v46 = *((_QWORD*)a1 + 3);
    if (v46 != 0) {
      goto LABEL_16;
    }
    goto LABEL_23;
  }
  v37 = a1[4];
  v38 = *(_QWORD*)a1;
  if (*(_QWORD*)a1 != 0) {
    v39 = *((_QWORD*)a1 + 1);
    v42 = 0;
    v41 = 0;
    v36 = -1;
    v40 = v32;
    goto LABEL_15;
  }
  v36 = -1;
  v44 = -1;
  v45 = a1[10];
  v46 = *((_QWORD*)a1 + 3);
  if (v46 != 0) {
  LABEL_16:
    v47 = *((_QWORD*)a1 + 4);
    v48 = 0x0.0p+0f;
    v49 = v32;
    if (v5 != 0) {
      v50 = v22;
    }
    else {
      v50 = 0;
    }
    if (v5 != 0) {
      v48 = v45;
    }
    goto LABEL_25;
  }
LABEL_23:
  if (v5 == 0) {
    v46 = 0;
    v52 = -1;
    v53 = a1[16];
    v54 = *((_QWORD*)a1 + 6);
    if (v54 != 0) {
      goto LABEL_26;
    }
    goto LABEL_33;
  }
  v48 = 0x0.0p+0f;
  v49 = v45;
  v50 = 0;
  v46 = v5;
  LOBYTE(v47) = v22;
LABEL_25:
  v51 = v46 + 16LL * *(_QWORD*)(v46 + 4096);
  *(_BYTE*)(v51 + 4) = v47;
  *(_BYTE*)(v51 + 5) = v50;
  *(float*)(v51 + 8) = v49;
  *(float*)(v51 + 12) = v48;
  v52 = *(_QWORD*)(v46 + 4096);
  *(_QWORD*)(v46 + 4096) = v52 + 1;
  v53 = a1[16];
  v54 = *((_QWORD*)a1 + 6);
  if (v54 != 0) {
  LABEL_26:
    v55 = 0x0.0p+0f;
    v56 = v32;
    if (v5 != 0) {
      v57 = v22;
    }
    else {
      v57 = 0;
    }
    v22 = *((_QWORD*)a1 + 7);
    if (v5 != 0) {
      v55 = v53;
    }
    goto LABEL_35;
  }
LABEL_33:
  if (v5 == 0) {
    v54 = 0;
    v59 = -1;
    goto LABEL_36;
  }
  v55 = 0x0.0p+0f;
  v56 = v53;
  v57 = 0;
  v54 = v5;
LABEL_35:
  v58 = v54 + 16LL * *(_QWORD*)(v54 + 4096);
  *(_BYTE*)(v58 + 4) = v22;
  *(_BYTE*)(v58 + 5) = v57;
  *(float*)(v58 + 8) = v56;
  *(float*)(v58 + 12) = v55;
  v59 = *(_QWORD*)(v54 + 4096);
  *(_QWORD*)(v54 + 4096) = v59 + 1;
LABEL_36:
  *((_QWORD*)a2 + 1) = v44;
  *((_QWORD*)a2 + 2) = 0;
  *((_QWORD*)a2 + 7) = v59;
  *((_QWORD*)a2 + 8) = 0;
  *(_QWORD*)a2 = v38;
  *((_QWORD*)a2 + 3) = v46;
  *((_QWORD*)a2 + 4) = v52;
  *((_QWORD*)a2 + 5) = 0;
  *((_QWORD*)a2 + 6) = v54;
  *((_QWORD*)a2 + 9) = v5;
  *((_QWORD*)a2 + 10) = v36;
  *((_QWORD*)a2 + 11) = 0;
  a2[22] = result;
  a2[4] = v32 * v37;
  a2[10] = v32 * v45;
  a2[16] = v32 * v53;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void kalman_transition_70ed80(PSEUDO_X8 x8_,
                                                         float* a1, float* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float result;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;

  v3 = a1[1];
  v4 = a2[1];
  v6 = a2[2];
  v5 = a2[3];
  v8 = a1[2];
  v7 = a1[3];
  v9 = a2[4];
  v10 = a2[5];
  v11 = a2[6];
  v12 = a2[7];
  v13 = a2[8];
  v14 = a2[9];
  v15 = a2[10];
  v16 = a2[11];
  v17 = (float)((float)(*a1 * *a1) + (float)(v3 * v3)) + (float)(v8 * v8);
  v18 = (float)((float)((float)(*a1 * *a2) + 0x0.0p+0f) + (float)(v3 * v9)) +
        (float)(v8 * v13);
  v19 = (float)((float)((float)(*a1 * v4) + 0x0.0p+0f) + (float)(v3 * v10)) +
        (float)(v8 * v14);
  v20 = (float)((float)((float)(*a1 * v6) + 0x0.0p+0f) + (float)(v3 * v11)) +
        (float)(v8 * v15);
  v21 = (float)((float)((float)(*a1 * v5) + 0x0.0p+0f) + (float)(v3 * v12)) +
        (float)(v8 * v16);
  v47 = (float)(*a1 * v18) - (float)(*a2 * v17);
  v46 = (float)(*a1 * v19) - (float)(v17 * v4);
  v44 = (float)(v3 * v18) - (float)(v17 * v9);
  v45 = (float)(*a1 * v21) - (float)(v17 * v5);
  v42 = (float)(v3 * v20) - (float)(v17 * v11);
  v43 = (float)(v3 * v19) - (float)(v17 * v10);
  v22 = (float)(v3 * v21) - (float)(v17 * v12);
  v23 = (float)(v8 * v18) - (float)(v17 * v13);
  v24 = (float)(v8 * v19) - (float)(v17 * v14);
  v48 = (float)(v8 * v20) - (float)(v17 * v15);
  v49 = (float)(v8 * v21) - (float)(v17 * v16);
  v25 = (float)(v3 * v13) - (float)(v8 * v9);
  v26 = (float)(v3 * v14) - (float)(v8 * v10);
  v27 = v7 * (float)((float)(v3 * v16) - (float)(v8 * v12));
  v28 = (float)((float)(*a1 * v20) - (float)(v17 * v6)) -
        (float)(v7 * (float)((float)(v3 * v15) - (float)(v8 * v11)));
  v29 = v7 * (float)((float)(v8 * *a2) - (float)(*a1 * v13));
  v30 = v7 * (float)((float)(v8 * v4) - (float)(*a1 * v14));
  v31 = v7 * (float)((float)(v8 * v6) - (float)(*a1 * v15));
  v32 = v22 - (float)(v7 * (float)((float)(v8 * v5) - (float)(*a1 * v16)));
  v33 = v23 - (float)(v7 * (float)((float)(*a1 * v9) - (float)(v3 * *a2)));
  v34 = (float)(*a1 * v11) - (float)(v3 * v6);
  v35 = v7 * (float)((float)(*a1 * v12) - (float)(v3 * v5));
  v36 = v24 - (float)(v7 * (float)((float)(*a1 * v10) - (float)(v3 * v4)));
  v37 = v47 - (float)(v7 * v25);
  v38 = v7 * v26;
  v39 = v48 - (float)(v7 * v34);
  v40 = 0x1.0000000000000p+1f / (float)((float)(v7 * v7) + v17);
  *a3 = *a2 + (float)(v40 * v37);
  a3[1] = v4 + (float)(v40 * (float)(v46 - v38));
  a3[2] = v6 + (float)(v40 * v28);
  a3[3] = v5 + (float)(v40 * (float)(v45 - v27));
  a3[4] = v9 + (float)(v40 * (float)(v44 - v29));
  a3[5] = v10 + (float)(v40 * (float)(v43 - v30));
  a3[6] = v11 + (float)(v40 * (float)(v42 - v31));
  a3[7] = v12 + (float)(v40 * v32);
  a3[8] = v13 + (float)(v40 * v33);
  a3[9] = v14 + (float)(v40 * v36);
  result = v15 + (float)(v40 * v39);
  a3[10] = result;
  a3[11] = v16 + (float)(v40 * (float)(v49 - v35));
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

kalman_transition_70f080(PSEUDO_X8 x8_, float* a1, float a3, float a4, float a5)
{

#pragma clang fp contract(off)
  float* a2 = (float*)PSEUDO_X8_VALUE(x8_);
  float v7;
  float v8;
  float v9;
  float v10;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float result;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;

  v7 = *a1;
  v8 = a1[5];
  v10 = a1[6];
  v9 = a1[7];
  v102 = a1[4];
  v103 = a1[3];
  v12 = a1[8];
  v14 = a1[10];
  v13 = a1[11];
  v16 = a1[14];
  v15 = a1[15];
  v18 = a1[12];
  v17 = a1[13];
  v85 = a1[1];
  v86 = a1[2];
  v82 = a1[9];
  v104 = (float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v14 * v14);
  v101 = (float)((float)((float)((float)(v7 * v86) + (float)(v7 * v86)) +
                         0x0.0p+0f) +
                 (float)((float)(v8 * v9) + (float)(v8 * v9))) +
         (float)((float)(v14 * v18) + (float)(v14 * v18));
  v83 = (float)((float)((float)((float)(*a1 * v103) + (float)(*a1 * v103)) +
                        0x0.0p+0f) +
                (float)((float)(v8 * v12) + (float)(v8 * v12))) +
        (float)((float)(v14 * v17) + (float)(v14 * v17));
  v84 = (float)((float)((float)((float)(v7 * v102) + (float)(v7 * v102)) +
                        0x0.0p+0f) +
                (float)((float)(v8 * v82) + (float)(v8 * v82))) +
        (float)((float)(v14 * v16) + (float)(v14 * v16));
  v19 = (float)((float)((float)(a3 * v86) + 0x0.0p+0f) + (float)(a4 * v9)) +
        (float)(a5 * v18);
  v20 = (float)((float)((float)(a3 * *a1) + 0x0.0p+0f) + (float)(a4 * v8)) +
        (float)(a5 * v14);
  v21 = (float)((float)((float)(a3 * v85) + 0x0.0p+0f) + (float)(a4 * v10)) +
        (float)(a5 * v13);
  v22 = (float)((float)((float)(a3 * v103) + 0x0.0p+0f) + (float)(a4 * v12)) +
        (float)(a5 * v17);
  v23 = (float)((float)((float)(a3 * v102) + 0x0.0p+0f) + (float)(a4 * v82)) +
        (float)(a5 * v16);
  v24 = (float)(v103 * v20) + (float)(*a1 * v22);
  v25 = (float)(v12 * v20) + (float)(v8 * v22);
  v26 = (float)(v82 * v20) + (float)(v8 * v23);
  v27 = (float)(v20 * v17) + (float)(v14 * v22);
  v28 = (float)(v20 * v16) + (float)(v14 * v23);
  v99 = (float)(*a1 * v20) - (float)(a3 * v104);
  v100 = (float)((float)((float)((float)(v7 * v85) + (float)(v7 * v85)) +
                         0x0.0p+0f) +
                 (float)((float)(v8 * v10) + (float)(v8 * v10))) +
         (float)((float)(v14 * v13) + (float)(v14 * v13));
  v98 = (float)((float)(v85 * v20) + (float)(*a1 * v21)) - (float)(a3 * v100);
  v97 = (float)((float)(v86 * v20) + (float)(*a1 * v19)) - (float)(a3 * v101);
  v96 = (float)((float)(v102 * v20) + (float)(*a1 * v23)) - (float)(a3 * v84);
  v95 = (float)(v8 * v20) - (float)(a4 * v104);
  v94 = (float)((float)(v10 * v20) + (float)(v8 * v21)) - (float)(a4 * v100);
  v93 = (float)((float)(v9 * v20) + (float)(v8 * v19)) - (float)(a4 * v101);
  v29 = a5;
  v92 = v25 - (float)(a4 * v83);
  v91 = v26 - (float)(a4 * v84);
  v90 = (float)(v14 * v20) - (float)(a5 * v104);
  v88 = (float)((float)(v20 * v18) + (float)(v14 * v19)) - (float)(a5 * v101);
  v89 = (float)((float)(v13 * v20) + (float)(v14 * v21)) - (float)(a5 * v100);
  v87 = v27 - (float)(a5 * v83);
  v30 = v28 - (float)(a5 * v84);
  v31 = (float)(a5 * v8) - (float)(a4 * v14);
  v32 = (float)(a5 * v10) - (float)(a4 * v13);
  v33 = (float)(a5 * v9) - (float)(a4 * v18);
  v34 = (float)(a5 * v12) - (float)(a4 * v17);
  v35 = (float)(a5 * v82) - (float)(a4 * v16);
  v36 = (float)(a3 * v14) - (float)(a5 * *a1);
  v37 = (float)(a4 * *a1) - (float)(a3 * v8);
  v38 = (float)(a3 * v13) - (float)(a5 * v85);
  v39 = (float)(a4 * v85) - (float)(a3 * v10);
  v40 = (float)(a4 * v86) - (float)(a3 * v9);
  v41 = (float)(a4 * v103) - (float)(a3 * v12);
  v42 = a1[16];
  v43 = a1[17];
  v44 = (float)(a3 * v16) - (float)(v29 * v102);
  v45 = a1[18];
  v46 = a1[19];
  v47 = (float)(v15 * v34) + (float)(v31 * v45);
  v48 = (float)(v15 * v35) + (float)(v31 * v46);
  v49 = (float)(v38 * v15) + (float)(v36 * v42);
  v50 = (float)((float)((float)(a3 * v18) - (float)(v29 * v86)) * v15) +
        (float)(v36 * v43);
  v51 = (float)(v15 * (float)((float)(a3 * v17) - (float)(v29 * v103))) +
        (float)(v36 * v45);
  v52 = (float)(v15 * v44) + (float)(v36 * v46);
  v53 = (float)(v39 * v15) + (float)(v37 * v42);
  v54 = (float)(v40 * v15) + (float)(v37 * v43);
  v55 = (float)(v41 * v15) + (float)(v37 * v45);
  v56 = (float)((float)((float)(a4 * v102) - (float)(a3 * v82)) * v15) +
        (float)(v37 * v46);
  v57 = v99 - (float)(v31 * v15);
  v58 = v98 - (float)((float)(v32 * v15) + (float)(v31 * v42));
  v59 = v97 - (float)((float)(v33 * v15) + (float)(v31 * v43));
  v60 = v95 - (float)(v36 * v15);
  v61 = v94 - v49;
  v62 = v37 * v15;
  v63 = v15 * v46;
  v64 = v90 - v62;
  v65 = v15 * v42;
  v66 = v15 * v43;
  v67 = v15 * v45;
  v68 = v104 + (float)(v15 * v15);
  v69 = v65 + v65;
  v70 = v66 + v66;
  v71 = v67 + v67;
  v72 = v63 + v63;
  v73 = (float)(v100 + v69) * -0x1.0000000000000p+1f;
  v74 = 0x1.0000000000000p+1f / v68;
  v75 = (float)(v101 + v70) * -0x1.0000000000000p+1f;
  v76 = v68 * v68;
  v77 = v73 / (float)(v68 * v68);
  v78 = v75 / (float)(v68 * v68);
  v79 = (float)((float)(v83 + v71) * -0x1.0000000000000p+1f) / v76;
  v80 = (float)((float)(v84 + v72) * -0x1.0000000000000p+1f) / v76;
  a2[2] = (float)(v74 * v59) + (float)(v57 * v78);
  a2[3] = (float)(v74 * (float)((float)(v24 - (float)(a3 * v83)) - v47)) +
          (float)(v57 * v79);
  *a2 = a3 + (float)(v57 * v74);
  a2[1] = (float)(v74 * v58) + (float)(v57 * v77);
  a2[14] = (float)(v74 * (float)(v30 - v56)) + (float)(v64 * v80);
  a2[12] = (float)(v74 * (float)(v88 - v54)) + (float)(v64 * v78);
  a2[13] = (float)(v74 * (float)(v87 - v55)) + (float)(v64 * v79);
  a2[6] = (float)(v74 * v61) + (float)(v60 * v77);
  a2[7] = (float)(v74 * (float)(v93 - v50)) + (float)(v60 * v78);
  a2[4] = (float)(v74 * (float)(v96 - v48)) + (float)(v57 * v80);
  a2[5] = a4 + (float)(v60 * v74);
  a2[8] = (float)(v74 * (float)(v92 - v51)) + (float)(v60 * v79);
  a2[9] = (float)(v74 * (float)(v91 - v52)) + (float)(v60 * v80);
  result = (float)(v74 * (float)(v89 - v53)) + (float)(v64 * v77);
  a2[10] = v29 + (float)(v64 * v74);
  a2[11] = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void kalman_transition_70f680(PSEUDO_X8 x8_,
                                                         float* a1, float* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float result;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;

  v3 = *a1;
  v4 = a1[1];
  v5 = *a2;
  v6 = a2[1];
  v7 = a1[2];
  v8 = a1[3];
  v9 = a1[4];
  v10 = a1[5];
  v11 = a1[6];
  v12 = a1[7];
  v13 = a1[8];
  v14 = a1[9];
  v15 = a2[2];
  v16 = a2[3];
  v18 = a1[10];
  v17 = a1[11];
  v19 = a1[15];
  v54 = a1[14];
  v20 = a1[16];
  v21 = a1[17];
  v23 = a1[12];
  v22 = a1[13];
  v59 = (float)((float)(v9 * *a2) + 0x0.0p+0f) + (float)(v14 * v6);
  v57 = (float)((float)((float)(v4 * *a2) + 0x0.0p+0f) + (float)(v11 * v6)) +
        (float)(v17 * v15);
  v55 = (float)(v19 * v16) -
        (float)((float)((float)((float)(*a1 * *a2) + 0x0.0p+0f) +
                        (float)(v10 * v6)) +
                (float)(v18 * v15));
  v56 = (float)((float)((float)(v7 * *a2) + 0x0.0p+0f) + (float)(v12 * v6)) +
        (float)(v23 * v15);
  v24 = (float)(v16 * *a1) + (float)(v19 * *a2);
  v58 = (float)((float)((float)(v8 * *a2) + 0x0.0p+0f) + (float)(v13 * v6)) +
        (float)(v22 * v15);
  v25 = (float)(v16 * v4) + (float)(v20 * *a2);
  v53 = (float)(v16 * v7) + (float)(v21 * *a2);
  v26 = a1[18];
  v27 = a1[19];
  v52 = (float)(v16 * v8) + (float)(v26 * *a2);
  v51 = (float)(v16 * v9) + (float)(v27 * *a2);
  v48 = (float)(v16 * v10) + (float)(v19 * v6);
  v47 = (float)(v16 * v11) + (float)(v20 * v6);
  v45 = (float)(v16 * v12) + (float)(v21 * v6);
  v44 = (float)(v16 * v13) + (float)(v26 * v6);
  v43 = (float)(v16 * v14) + (float)(v27 * v6);
  v42 = (float)(v16 * v18) + (float)(v19 * v15);
  v28 = (float)(v16 * v17) + (float)(v20 * v15);
  v46 = v16 * v21;
  v29 = (float)(v16 * v23) + (float)(v21 * v15);
  v49 = v16 * v27;
  v50 = v16 * v26;
  v30 = (float)(v16 * v22) + (float)(v26 * v15);
  v31 = v16 * v20;
  v32 = (float)(v16 * v54) + (float)(v27 * v15);
  v33 = (float)(v10 * v15) - (float)(v18 * v6);
  v34 = v54 * *a2;
  v35 = (float)(v11 * v15) - (float)(v17 * v6);
  v36 = (float)(v12 * v15) - (float)(v23 * v6);
  v37 = (float)(v18 * *a2) - (float)(*a1 * v15);
  v38 = (float)(v17 * *a2) - (float)(v4 * v15);
  v39 = (float)(v23 * *a2) - (float)(v7 * v15);
  v40 = (float)(v22 * *a2) - (float)(v8 * v15);
  *a3 = v24 + v33;
  a3[1] = v25 + v35;
  a3[2] = v53 + v36;
  a3[3] = v52 + (float)((float)(v13 * v15) - (float)(v22 * v6));
  a3[4] = v51 + (float)((float)(v14 * v15) - (float)(v54 * v6));
  a3[5] = v48 + v37;
  a3[6] = v47 + v38;
  a3[7] = v45 + v39;
  a3[8] = v44 + v40;
  a3[9] = v43 + (float)(v34 - (float)(v9 * v15));
  a3[10] = (float)((float)(v3 * v6) - (float)(v10 * v5)) + v42;
  a3[11] = (float)((float)(v4 * v6) - (float)(v11 * v5)) + v28;
  a3[12] = (float)((float)(v7 * v6) - (float)(v12 * v5)) + v29;
  a3[13] = (float)((float)(v8 * v6) - (float)(v13 * v5)) + v30;
  a3[14] = (float)((float)(v9 * v6) - (float)(v14 * v5)) + v32;
  a3[15] = v55;
  a3[16] = v31 - v57;
  a3[17] = v46 - v56;
  result = v49 - (float)(v59 + (float)(v54 * v15));
  a3[18] = v50 - v58;
  a3[19] = result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void kalman_transition_70f9d0(PSEUDO_X8 x8_,
                                                         float* a1, float* a2)
{

#pragma clang fp contract(off)
  float* a3 = (float*)PSEUDO_X8_VALUE(x8_);
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  float result;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;

  v3 = a1[2];
  v4 = a1[3];
  v6 = a2[14];
  v5 = a2[15];
  v8 = *a1;
  v7 = a1[1];
  v9 = a2[2];
  v10 = a2[3];
  v11 = a2[4];
  v12 = a2[5];
  v13 = a2[6];
  v14 = a2[7];
  v15 = a2[8];
  v16 = a2[9];
  v18 = a2[10];
  v17 = a2[11];
  v19 = a2[16];
  v20 = a2[17];
  v21 = a2[1];
  v23 = a2[12];
  v22 = a2[13];
  v67 = (float)((float)(*a1 * v11) + 0x0.0p+0f) + (float)(v7 * v16);
  v64 = (float)((float)((float)(*a1 * v9) + 0x0.0p+0f) + (float)(v7 * v14)) +
        (float)(v3 * v23);
  v65 = (float)((float)((float)(*a1 * v21) + 0x0.0p+0f) + (float)(v7 * v13)) +
        (float)(v3 * v17);
  v66 = (float)((float)((float)(*a1 * v10) + 0x0.0p+0f) + (float)(v7 * v15)) +
        (float)(v3 * v22);
  v24 = (float)(v5 * *a1) + (float)(v4 * *a2);
  v25 = (float)(v19 * *a1) + (float)(v4 * v21);
  v62 = (float)(v20 * *a1) + (float)(v4 * v9);
  v63 = (float)(v4 * v5) -
        (float)((float)((float)((float)(*a1 * *a2) + 0x0.0p+0f) +
                        (float)(v7 * v12)) +
                (float)(v3 * v18));
  v26 = a2[18];
  v27 = a2[19];
  v60 = (float)(v27 * *a1) + (float)(v4 * v11);
  v61 = (float)(v26 * *a1) + (float)(v4 * v10);
  v56 = (float)(v19 * v7) + (float)(v4 * v13);
  v57 = (float)(v5 * v7) + (float)(v4 * v12);
  v59 = v4 * v26;
  v53 = (float)(v26 * v7) + (float)(v4 * v15);
  v54 = (float)(v20 * v7) + (float)(v4 * v14);
  v58 = v4 * v27;
  v28 = (float)(v27 * v7) + (float)(v4 * v16);
  v52 = (float)(v5 * v3) + (float)(v4 * v18);
  v29 = (float)(v19 * v3) + (float)(v4 * v17);
  v30 = (float)(v20 * v3) + (float)(v4 * v23);
  v31 = (float)(v26 * v3) + (float)(v4 * v22);
  v32 = v4 * v19;
  v33 = v4 * v20;
  v34 = (float)(v27 * v3) + (float)(v4 * v6);
  v55 = v33;
  v35 = (float)(v7 * v18) - (float)(v3 * v12);
  v36 = v25 + (float)((float)(v7 * v17) - (float)(v3 * v13));
  v37 = (float)(v7 * v23) - (float)(v3 * v14);
  v38 = (float)(v7 * v22) - (float)(v3 * v15);
  v39 = (float)(v7 * v6) - (float)(v3 * v16);
  v40 = (float)(v3 * *a2) - (float)(*a1 * v18);
  v41 = (float)(v3 * v21) - (float)(*a1 * v17);
  v42 = (float)(v3 * v9) - (float)(*a1 * v23);
  v43 = (float)(v3 * v10) - (float)(*a1 * v22);
  v44 = v3 * v6;
  v45 = (float)(v3 * v11) - (float)(*a1 * v6);
  v46 = *a1 * v12;
  v47 = *a1 * v13;
  v48 = *a1 * v14;
  v49 = *a1 * v15;
  v50 = v7 * *a2;
  *a3 = v24 + v35;
  a3[1] = v36;
  a3[2] = v62 + v37;
  a3[3] = v61 + v38;
  a3[4] = v60 + v39;
  a3[5] = v57 + v40;
  a3[6] = v56 + v41;
  a3[7] = v54 + v42;
  a3[8] = v53 + v43;
  a3[9] = v28 + v45;
  a3[10] = (float)(v46 - v50) + v52;
  a3[11] = (float)(v47 - (float)(v7 * v21)) + v29;
  a3[12] = (float)(v48 - (float)(v7 * v9)) + v30;
  a3[13] = (float)(v49 - (float)(v7 * v10)) + v31;
  a3[14] = (float)((float)(v8 * v16) - (float)(v7 * v11)) + v34;
  a3[15] = v63;
  a3[16] = v32 - v65;
  a3[17] = v55 - v64;
  result = v58 - (float)(v67 + v44);
  a3[18] = v59 - v66;
  a3[19] = result;
  {
    result;
    return;
  }
}

bool nerd_kalman_ExtendedKalmanFilter_ObservationUpdate_7104e0(
    _QWORD* a1, float* a2, float* a3, float* a4, __int64* a5, float a6)
{
  unsigned __int64* v11;
  __int64 v12;
  __int64 v13;
  void* v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float v49;
  float v50;
  bool v51;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  bool v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  double v109;
  double v110;
  double v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  int* v119;
  _DWORD* v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  _DWORD* v126;
  int* v127;
  int v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  int* v132;
  __int64* v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  _DWORD* v139;
  int* v140;
  int v141;
  unsigned __int64 v142;
  __int64 v143;
  __int64 v144;
  int* v145;
  _DWORD* v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  _DWORD* v152;
  int* v153;
  int v154;
  unsigned __int64 v155;
  unsigned __int64 v156;
  float* v157;
  float* v158;
  float v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  __int64 v167;
  float v168;
  __int64 v169;
  float v170;
  float v171;
  unsigned __int64 v173;
  float v174;
  float v175;
  float v176;
  unsigned __int64 v177;
  __int64 v178;
  float* v179;
  __int64 v180;
  float* v181;
  float v182;
  float v183;
  float v184;
  float v185;
  float v186;
  float v187;
  float v188;
  float* v189;
  float* v190;
  float v191;
  float v192;
  unsigned __int64 v194;
  unsigned __int64 v195;
  __int64 v196;
  float* v197;
  __int64 v198;
  float* v199;
  float v200;
  float v201;
  float v202;
  float v203;
  float v204;
  float* v205;
  float* v206;
  float v207;
  __int64 v208;
  __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  __int64 v213;
  float* i;
  float* v215;
  float v216;
  float v217;
  float v218;
  __int64 v219;
  __int64 v220;
  float* v221;
  float* v222;
  float v223;
  float v224;
  float v225;
  float v226;
  float v227;
  float v228;
  float v229;
  float v230;
  float v231;
  float v232;
  float v233;
  float v234;
  float v235;
  float v236;
  float v237;
  float v238;
  float v239;
  float v240;
  __int64 v241;
  float* v242;
  unsigned __int64 v243;
  float* v244;
  float v245;
  float v246;
  struct {
    _BYTE v248[136];
    __int64 v249;
  } v248_;
  struct {
    _BYTE v250[136];
    __int64 v251;
    unsigned __int64* v252;
  } v250_;
  struct {
    __int64 v253;
    char gap304_[32];
    __int64 v254;
  } v253_;
  _DWORD v255[4];
  struct {
    __int64 v256;
    char gap368_[112];
    unsigned __int64 v257;
  } v256_;
  struct {
    _QWORD v258[17];
    __int64 v259;
  } v258_;
  unsigned __int64 v260;
  __int64 v261;
  __int64 v262;
  _QWORD v263[48];
  unsigned __int64 v264;
  _BYTE v265[8];
  _DWORD v266[8];
  __int64 v267;
  _QWORD v268[44];
  __int64 v269[3];
  _QWORD v270[3];
  unsigned __int64 v271;
  struct {
    __int64 v272;
    __int64 v273;
    __int64 v274;
    __int64 v275;
    __int64 v276;
    __int64 v277;
    __int64 v278;
    __int64 v279;
    __int64 v280;
    __int64 v281;
    __int64 v282;
    __int64 v283;
    __int64 v284;
    __int64 v285;
    __int64 v286;
    __int64 v287;
    _QWORD v288[4];
    _BYTE v289[132];
    _BYTE v290[108];
  } v272_;

  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  v11 = a1 + 548;
  v12 = a5[1];
  v269[0] = *a5;
  v13 = a5[2];
  v269[1] = v12;
  v269[2] = v13;
  v269[0] = *fw_math_LookupStateIndex(a1 + 548, v269),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  v269[1] = *fw_math_LookupStateIndex(v11, &v269[1]),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  v14 = (void*)fw_math_LookupStateIndex(v11, &v269[2]),
  v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  v15 = *a3;
  v16 = a3[1];
  v17 = a3[6];
  v18 = a3[7];
  v19 = a3[8];
  v269[2] = *(_QWORD*)v14;
  qmemcpy(v270, v269, sizeof(v270));
  v20 = (__int64)a1 + 4 * v269[0] + 16;
  v21 = (__int64)a1 + 4 * v269[1] + 16;
  v22 = *(float*)(v20 + 132 * v269[0]);
  v23 = *(float*)(v20 + 132 * v269[1]);
  v24 = *(float*)(v21 + 132 * v269[0]);
  v25 = *(float*)(v21 + 132 * v269[1]);
  v26 = *(float*)(v20 + 132 * v269[2]);
  v27 = *(float*)(v21 + 132 * v269[2]);
  v28 = (__int64)a1 + 4 * v269[2] + 16;
  v29 = *(float*)(v28 + 132 * v269[0]);
  v30 = *(float*)(v28 + 132 * v269[1]);
  v31 = *(float*)(v28 + 132 * v269[2]);
  v32 = a3[2];
  v33 = a3[3];
  v34 = (float)((float)((float)(v15 * v22) + 0x0.0p+0f) + (float)(v16 * v23)) +
        (float)(v32 * v26);
  v35 = a3[4];
  v36 = a3[5];
  v37 = (float)((float)(v33 * v22) + 0x0.0p+0f) + (float)(v35 * v23);
  v38 = (float)((float)((float)(v17 * v22) + 0x0.0p+0f) + (float)(v18 * v23)) +
        (float)(v19 * v26);
  v39 = v37 + (float)(v36 * v26);
  v40 = (float)((float)((float)(v33 * v24) + 0x0.0p+0f) + (float)(v35 * v25)) +
        (float)(v36 * v27);
  v41 = (float)((float)((float)(v33 * v29) + 0x0.0p+0f) + (float)(v35 * v30)) +
        (float)(v36 * v31);
  v42 = (float)((float)((float)(v17 * v24) + 0x0.0p+0f) + (float)(v18 * v25)) +
        (float)(v19 * v27);
  v43 = (float)((float)((float)(v17 * v29) + 0x0.0p+0f) + (float)(v18 * v30)) +
        (float)(v19 * v31);
  v44 =
      (float)((float)((float)(v34 * v15) + 0x0.0p+0f) +
              (float)((float)((float)((float)((float)(v15 * v24) + 0x0.0p+0f) +
                                      (float)(v16 * v25)) +
                              (float)(v32 * v27)) *
                      v16)) +
      (float)((float)((float)((float)((float)(v15 * v29) + 0x0.0p+0f) +
                              (float)(v16 * v30)) +
                      (float)(v32 * v31)) *
              v32);
  v45 = (float)((float)(v38 * v15) + 0x0.0p+0f) + (float)(v42 * v16);
  v46 = (float)((float)((float)(v39 * v15) + 0x0.0p+0f) + (float)(v40 * v16)) +
        (float)(v41 * v32);
  if (v44 >= 0x0.0p+0f) {
    v47 = v44;
  }
  else {
    v47 = 0x0.0p+0f;
  }
  v48 = (float)((float)((float)(v38 * v17) + 0x0.0p+0f) + (float)(v42 * v18)) +
        (float)(v43 * v19);
  v49 = sqrtf(v47);
  if ((float)((float)((float)((float)(v39 * v33) + 0x0.0p+0f) +
                      (float)(v40 * v35)) +
              (float)(v41 * v36)) >= 0x0.0p+0f) {
    v50 =
        (float)((float)((float)(v39 * v33) + 0x0.0p+0f) + (float)(v40 * v35)) +
        (float)(v41 * v36);
  }
  else {
    v50 = 0x0.0p+0f;
  }
  if (v48 < 0x0.0p+0f) {
    v48 = 0x0.0p+0f;
  }
  v51 = v47 == 0x0.0p+0f;
  v52 = 0x0.0p+0f;
  if (!v51) {
    v52 = 0x1.0000000000000p+0f / v49;
  }
  v53 = v52 * v46;
  v54 = v45 + (float)(v43 * v32);
  if (v50 >= (float)(v53 * v53)) {
    v56 = v50 - (float)(PSEUDO_UNFUSED(v53 * v53));
    v57 = v52 * v54;
    v58 = (float)(v38 * v33) + 0x0.0p+0f;
    v59 = v57 * v57;
    if (v48 >= (float)(v57 * v57)) {
    LABEL_16:
      v60 = v48 - v59;
      goto LABEL_21;
    }
  }
  else {
    v55 = sqrtf(v50);
    v56 = 0x0.0p+0f;
    if (v53 <= 0x0.0p+0f) {
      v53 = -v55;
    }
    else {
      v53 = v55;
    }
    v57 = v52 * v54;
    v58 = (float)(v38 * v33) + 0x0.0p+0f;
    v59 = v57 * v57;
    if (v48 >= (float)(v57 * v57)) {
      goto LABEL_16;
    }
  }
  v61 = sqrtf(v48);
  v60 = 0x0.0p+0f;
  if (v57 <= 0x0.0p+0f) {
    v57 = -v61;
  }
  else {
    v57 = v61;
  }
LABEL_21:
  v62 = sqrtf(v56);
  v63 = (float)(v58 + (float)(v42 * v35)) + (float)(v43 * v36);
  if (v62 == 0x0.0p+0f) {
    v64 = 0x0.0p+0f * (float)(v63 - (float)(v57 * v53));
    v65 = v64 * v64;
    if (v60 < (float)(v64 * v64)) {
    LABEL_23:
      v66 = sqrtf(v60);
      v67 = 0x0.0p+0f;
      if (v64 <= 0x0.0p+0f) {
        v64 = -v66;
      }
      else {
        v64 = v66;
      }
      goto LABEL_28;
    }
  }
  else {
    v64 = (float)(0x1.0000000000000p+0f / v62) *
          (float)(v63 - (float)(v57 * v53));
    v65 = v64 * v64;
    if (v60 < (float)(v64 * v64)) {
      goto LABEL_23;
    }
  }
  v67 = v60 - v65;
LABEL_28:
  v68 = sqrtf(v67);
  v69 = (float)(v49 * v53) + 0x0.0p+0f;
  v70 = (float)(v49 * v57) + 0x0.0p+0f;
  v71 = a4[4];
  v72 = (float)((float)((float)(v57 * v57) + 0x0.0p+0f) + (float)(v64 * v64)) +
        (float)(v68 * v68);
  if ((float)((float)((float)(v49 * v49) + 0x0.0p+0f) + *a4) >= 0x0.0p+0f) {
    v73 = (float)((float)(v49 * v49) + 0x0.0p+0f) + *a4;
  }
  else {
    v73 = 0x0.0p+0f;
  }
  v74 = v69 + a4[3];
  v75 = sqrtf(v73);
  v76 = v70 + a4[6];
  v77 = v72 + a4[8];
  if ((float)((float)((float)((float)(v53 * v53) + 0x0.0p+0f) +
                      (float)(v62 * v62)) +
              v71) >= 0x0.0p+0f) {
    v78 =
        (float)((float)((float)(v53 * v53) + 0x0.0p+0f) + (float)(v62 * v62)) +
        v71;
  }
  else {
    v78 = 0x0.0p+0f;
  }
  if (v77 >= 0x0.0p+0f) {
    v79 = v77;
  }
  else {
    v79 = 0x0.0p+0f;
  }
  v80 = 0x1.0000000000000p+0f / v75;
  if (v73 == 0x0.0p+0f) {
    v81 = 0x0.0p+0f;
  }
  else {
    v81 = 0x1.0000000000000p+0f / v75;
  }
  v82 = v81 * v74;
  if (v78 >= (float)(v82 * v82)) {
    v84 = v78 - (float)(PSEUDO_UNFUSED(v82 * v82));
    v85 = (float)(v53 * v57) + 0x0.0p+0f;
    v86 = v81 * v76;
    v87 = v86 * v86;
    if (v79 >= (float)(v86 * v86)) {
    LABEL_45:
      v88 = v79 - v87;
      goto LABEL_50;
    }
  }
  else {
    v83 = v82 <= 0x0.0p+0f;
    v82 = sqrtf(v78);
    if (v83) {
      v82 = -v82;
    }
    v84 = 0x0.0p+0f;
    v85 = (float)(v53 * v57) + 0x0.0p+0f;
    v86 = v81 * v76;
    v87 = v86 * v86;
    if (v79 >= (float)(v86 * v86)) {
      goto LABEL_45;
    }
  }
  v83 = v86 <= 0x0.0p+0f;
  v86 = sqrtf(v79);
  v88 = 0x0.0p+0f;
  if (v83) {
    v86 = -v86;
  }
LABEL_50:
  v89 = sqrtf(v84);
  v90 = (float)(v85 + (float)(v62 * v64)) + a4[7];
  if (v89 == 0x0.0p+0f) {
    v91 = 0x0.0p+0f;
    v92 = 0x0.0p+0f * (float)(v90 - (float)(v86 * v82));
    v93 = v92 * v92;
    if (v88 < (float)(v92 * v92)) {
      goto LABEL_52;
    }
  LABEL_56:
    v95 = sqrtf(v88 - v93);
    goto LABEL_57;
  }
  v91 = 0x1.0000000000000p+0f / v89;
  v92 =
      (float)(0x1.0000000000000p+0f / v89) * (float)(v90 - (float)(v86 * v82));
  v93 = v92 * v92;
  if (v88 >= (float)(v92 * v92)) {
    goto LABEL_56;
  }
LABEL_52:
  v94 = sqrtf(v88);
  if (v92 <= 0x0.0p+0f) {
    v92 = -v94;
  }
  else {
    v92 = v94;
  }
  v95 = sqrtf(0x0.0p+0f);
LABEL_57:
  if (v73 == 0x0.0p+0f) {
    v96 = 0x0.0p+0f;
  }
  else {
    v96 = v80;
  }
  v97 = -(float)((float)((float)(v82 * v96) + 0x0.0p+0f) * v91);
  v98 = 0x0.0p+0f;
  if (v95 != 0x0.0p+0f) {
    v98 = 0x1.0000000000000p+0f / v95;
  }
  v99 = v98 * v98;
  v100 = -(float)((float)((float)(v92 * v91) + 0x0.0p+0f) * v98);
  v101 = -(float)((float)((float)((float)(v86 * v96) + 0x0.0p+0f) +
                          (float)(v92 * v97)) *
                  v98);
  v102 = (float)(v100 * v98) + 0x0.0p+0f;
  v103 = (float)((float)(v97 * v91) + 0x0.0p+0f) + (float)(v101 * v100);
  v104 = (float)(v101 * v98) + 0x0.0p+0f;
  v105 =
      (float)(PSEUDO_UNFUSED(v91 * v91)) + (float)(PSEUDO_UNFUSED(v100 * v100));
  v106 = a2[1];
  v107 = (float)((float)(PSEUDO_UNFUSED(v96 * v96)) +
                 (float)(PSEUDO_UNFUSED(v97 * v97))) +
         (float)(PSEUDO_UNFUSED(v101 * v101));
  v108 = a2[2];
  math_722a20(
      v14, 0x1.8000000000000p+0,
      (float)((float)((float)((float)((float)((float)((float)((float)(*a2 *
                                                                      v107) +
                                                              0x0.0p+0f) +
                                                      (float)(v106 * v103)) +
                                              (float)(v108 * v104)) *
                                      *a2) +
                              0x0.0p+0f) +
                      (float)((float)((float)((float)((float)(*a2 * v103) +
                                                      0x0.0p+0f) +
                                              (float)(v106 * v105)) +
                                      (float)(v108 * v102)) *
                              v106)) +
              (float)((float)((float)((float)((float)(*a2 * v104) + 0x0.0p+0f) +
                                      (float)(v106 * v102)) +
                              (float)(v108 * v99)) *
                      v108)) *
          0x1.0000000000000p-1),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  v109 = a6;
  v111 = v110;
  if (v110 < v109) {
    return v111 >= v109;
  }
  v112 = a1[1];
  v268[43] = 0;
  v260 = (unsigned __int64)(a1 + 2);
  v263[2] = 0;
  v261 = 1;
  v263[0] = v270;
  v262 = 33;
  v263[1] = v112;
  SdkRoutine_87a1a0((void*)(&v271), a3, &v260),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  v113 = v271;
  v264 = v271;
  memset_plt((void*)v265, nullptr, 396),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v113 != 0) {
    v116 = v113 & 7;
    if (v113 >= 8) {
      v118 = 0;
      v119 = (int*)&v272_.v273 + 1;
      v120 = v268;
      do {
        v121 = *(v119 - 2);
        v118 -= 8;
        *(v120 - 12) = *(v119 - 3);
        *(v120 - 9) = v121;
        v122 = *v119;
        *(v120 - 6) = *(v119 - 1);
        *(v120 - 3) = v122;
        v123 = v119[2];
        *v120 = v119[1];
        v120[3] = v123;
        v124 = v119[3];
        v125 = v119[4];
        v119 += 8;
        v120[6] = v124;
        v120[9] = v125;
        v120 += 24;
      } while (-(__int64)(v113 & 0xFFFFFFFFFFFFFFF8LL) != v118);
      v117 = -v118;
      if ((v113 & 7) == 0) {
      LABEL_72:
        v129 = v113 & 7;
        if (v113 >= 8) {
          v131 = 0;
          v132 = (int*)v272_.v289;
          v133 = &v267;
          do {
            v134 = *(v132 - 6);
            v131 -= 8;
            *((_DWORD*)v133 - 9) = *(v132 - 7);
            *((_DWORD*)v133 - 6) = v134;
            v135 = *(v132 - 4);
            *((_DWORD*)v133 - 3) = *(v132 - 5);
            *(_DWORD*)v133 = v135;
            v136 = *(v132 - 2);
            *((_DWORD*)v133 + 3) = *(v132 - 3);
            *((_DWORD*)v133 + 6) = v136;
            v137 = *(v132 - 1);
            v138 = *v132;
            v132 += 8;
            *((_DWORD*)v133 + 9) = v137;
            *((_DWORD*)v133 + 12) = v138;
            v133 += 12;
          } while (-(__int64)(v113 & 0xFFFFFFFFFFFFFFF8LL) != v131);
          v130 = -v131;
          if ((v113 & 7) == 0) {
          LABEL_80:
            v142 = v113 & 7;
            if (v113 >= 8) {
              v144 = 0;
              v145 = (int*)v272_.v290;
              v146 = (_DWORD*)&v267 + 1;
              do {
                v147 = *(v145 - 6);
                v144 -= 8;
                *(v146 - 9) = *(v145 - 7);
                *(v146 - 6) = v147;
                v148 = *(v145 - 4);
                *(v146 - 3) = *(v145 - 5);
                *v146 = v148;
                v149 = *(v145 - 2);
                v146[3] = *(v145 - 3);
                v146[6] = v149;
                v150 = *(v145 - 1);
                v151 = *v145;
                v145 += 8;
                v146[9] = v150;
                v146[12] = v151;
                v146 += 24;
              } while (-(__int64)(v113 & 0xFFFFFFFFFFFFFFF8LL) != v144);
              v143 = -v144;
              if ((v113 & 7) == 0) {
                goto LABEL_88;
              }
            }
            else {
              v143 = 0;
              if ((v113 & 7) == 0) {
              LABEL_88:
                v113 = v264;
                goto LABEL_89;
              }
            }
            v152 = &v266[3 * v143];
            v153 = (int*)&v272_.v289[4 * v143 + 104];
            do {
              v154 = *v153++;
              --v142;
              *v152 = v154;
              v152 += 3;
            } while (v142 != 0);
            goto LABEL_88;
          }
        }
        else {
          v130 = 0;
          if ((v113 & 7) == 0) {
            goto LABEL_80;
          }
        }
        v139 = &v265[12 * v130 + 4];
        v140 = (int*)v272_.v288 + v130 + 1;
        do {
          v141 = *v140++;
          --v129;
          *v139 = v141;
          v139 += 3;
        } while (v129 != 0);
        goto LABEL_80;
      }
    }
    else {
      v117 = 0;
      if ((v113 & 7) == 0) {
        goto LABEL_72;
      }
    }
    v126 = &v265[12 * v117];
    v127 = (int*)&v271 + v117 + 2;
    do {
      v128 = *v127++;
      --v116;
      *v126 = v128;
      v126 += 3;
    } while (v116 != 0);
    goto LABEL_72;
  }
LABEL_89:
  *(_QWORD*)&v272_.v290[100] = 0;
  v271 = v113;
  memset_plt((void*)&v272_.v272, nullptr, 396),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  if (v113 != 0) {
    if (v113 == 1) {
      v155 = 0;
    }
    else {
      v156 = v113 & 0xFFFFFFFFFFFFFFFELL;
      v157 = (float*)v266;
      v158 = (float*)&v272_.v273;
      v155 = 6 * (((v113 & 0xFFFFFFFFFFFFFFFELL) - 2) >> 1) + 6;
      do {
        v159 = *(v157 - 2);
        v160 = *(v157 - 1);
        v161 = v157[1];
        v156 -= 2LL;
        v162 = (float)((float)(v159 * v107) + 0x0.0p+0f) + (float)(v160 * v103);
        v163 = (float)((float)((float)(v159 * v103) + 0x0.0p+0f) +
                       (float)(v160 * v105)) +
               (float)(*v157 * v102);
        v164 = (float)((float)((float)(v159 * v104) + 0x0.0p+0f) +
                       (float)(v160 * v102)) +
               (float)(*v157 * v99);
        *(v158 - 2) = v162 + (float)(*v157 * v104);
        *(v158 - 1) = v163;
        v165 = v157[2];
        v166 = v157[3];
        v157 += 6;
        *v158 = v164;
        v158[1] = (float)((float)((float)(v161 * v107) + 0x0.0p+0f) +
                          (float)(v165 * v103)) +
                  (float)(v166 * v104);
        v158[2] = (float)((float)((float)(v161 * v103) + 0x0.0p+0f) +
                          (float)(v165 * v105)) +
                  (float)(v166 * v102);
        v158[3] = (float)((float)((float)(v161 * v104) + 0x0.0p+0f) +
                          (float)(v165 * v102)) +
                  (float)(v166 * v99);
        v158 += 6;
      } while (v156 != 0);
    }
    if ((v113 & 1) != 0) {
      v167 = 4 * v155;
      v168 = *(float*)&v265[4 * v155];
      v169 = 4 * v155 + 4;
      v170 = *(float*)&v265[v169];
      v171 = *(float*)&v265[v167 + 8];
      *(float*)((char*)&v272_.v272 + v167) =
          (float)((float)((float)(v168 * v107) + 0x0.0p+0f) +
                  (float)(v170 * v103)) +
          (float)(v171 * v104);
      *(float*)((char*)&v272_.v272 + v169) =
          (float)((float)((float)(v168 * v103) + 0x0.0p+0f) +
                  (float)(v170 * v105)) +
          (float)(v171 * v102);
      *(float*)((char*)&v272_.v272 + v167 + 8) =
          (float)((float)((float)(v168 * v104) + 0x0.0p+0f) +
                  (float)(v170 * v102)) +
          (float)(v171 * v99);
    }
  }
  memcpy_plt(&v260, &v271, 408),
      v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
  v173 = v260;
  memset(v258_.v258, 0, sizeof(v258_.v258));
  v272_.v288[0] = v260;
  if (v260 != 0) {
    v272_.v287 = 0;
    v272_.v286 = 0;
    v272_.v285 = 0;
    v272_.v284 = 0;
    v272_.v283 = 0;
    v272_.v282 = 0;
    v272_.v281 = 0;
    v272_.v280 = 0;
    v272_.v279 = 0;
    v272_.v278 = 0;
    v272_.v277 = 0;
    v272_.v276 = 0;
    v272_.v275 = 0;
    v272_.v274 = 0;
    v272_.v273 = 0;
    v272_.v272 = 0;
    v271 = 0;
    memset_plt((void*)&v271, nullptr, 4 * v260),
        v110 = COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
    v174 = *a2;
    v175 = a2[1];
    v176 = a2[2];
    v177 = v173 & 3;
    v178 = 0;
    if (v173 >= 4) {
      v179 = (float*)&v272_.v272;
      v180 = 0;
      v181 = (float*)v263 + 1;
      do {
        v180 -= 4;
        v182 = (float)((float)((float)(*(v181 - 2) * v174) + 0x0.0p+0f) +
                       (float)(*(v181 - 1) * v175)) +
               (float)(*v181 * v176);
        v183 = v181[1];
        v184 = v181[2];
        *(v179 - 2) = (float)((float)((float)(*(v181 - 5) * v174) + 0x0.0p+0f) +
                              (float)(*(v181 - 4) * v175)) +
                      (float)(*(v181 - 3) * v176);
        *(v179 - 1) = v182;
        v185 = v181[4];
        v186 = (float)((float)((float)(v183 * v174) + 0x0.0p+0f) +
                       (float)(v184 * v175)) +
               (float)(v181[3] * v176);
        v187 = v181[5];
        v188 = v181[6];
        v181 += 12;
        *v179 = v186;
        v179[1] = (float)((float)((float)(v185 * v174) + 0x0.0p+0f) +
                          (float)(v187 * v175)) +
                  (float)(v188 * v176);
        v179 += 4;
      } while (-(__int64)(v173 & 0xFFFFFFFFFFFFFFFCLL) != v180);
      v178 = -v180;
    }
    if ((v173 & 3) != 0) {
      v189 = (float*)&v271 + v178;
      v190 = (float*)&v263[-1] + 3 * v178;
      do {
        --v177;
        v191 = (float)((float)(*(v190 - 2) * v174) + 0x0.0p+0f) +
               (float)(*(v190 - 1) * v175);
        v192 = *v190;
        v190 += 3;
        *v189++ = v191 + (float)(v192 * v176);
      } while (v177 != 0);
    }
    v256_.v257 = v272_.v288[0];
    if (v272_.v288[0] != 0) {
      memcpy_plt(v255, &v271, 4LL * v272_.v288[0]),
          v110 =
              COERCE_AS(__typeof__(v110), PSEUDO_REGISTER(double, "d0", "=w"));
      v194 = v256_.v257;
      v272_.v288[0] = v256_.v257;
      if (v256_.v257 != 0) {
        v272_.v287 = 0;
        v272_.v286 = 0;
        v272_.v285 = 0;
        v272_.v284 = 0;
        v272_.v283 = 0;
        v272_.v282 = 0;
        v272_.v281 = 0;
        v272_.v280 = 0;
        v272_.v279 = 0;
        v272_.v278 = 0;
        v272_.v277 = 0;
        v272_.v276 = 0;
        v272_.v275 = 0;
        v272_.v274 = 0;
        v272_.v273 = 0;
        v272_.v272 = 0;
        v271 = 0;
        memset_plt((void*)&v271, nullptr, 4 * v256_.v257),
            v110 = COERCE_AS(__typeof__(v110),
                             PSEUDO_REGISTER(double, "d0", "=w"));
        v195 = v194 & 7;
        v196 = 0;
        if (v194 >= 8) {
          v197 = (float*)&v272_.v273;
          v198 = 0;
          v199 = (float*)&v256_.v256;
          do {
            v198 -= 8;
            v200 = -*(v199 - 3);
            *(v197 - 4) = -*(v199 - 4);
            *(v197 - 3) = v200;
            v201 = -*(v199 - 1);
            *(v197 - 2) = -*(v199 - 2);
            *(v197 - 1) = v201;
            v202 = -v199[1];
            *v197 = -*v199;
            v197[1] = v202;
            v203 = v199[2];
            v204 = v199[3];
            v199 += 8;
            v197[2] = -v203;
            v197[3] = -v204;
            v197 += 8;
          } while (-(__int64)(v194 & 0xFFFFFFFFFFFFFFF8LL) != v198);
          v196 = -v198;
        }
        if ((v194 & 7) != 0) {
          v205 = (float*)&v271 + v196;
          v206 = (float*)&v255[v196];
          do {
            v207 = *v206++;
            --v195;
            *v205++ = -v207;
          } while (v195 != 0);
        }
        v258_.v259 = v272_.v288[0];
        if (v272_.v288[0] != 0) {
          memcpy_plt(v258_.v258, &v271, 4LL * v272_.v288[0]),
              v110 = COERCE_AS(__typeof__(v110),
                               PSEUDO_REGISTER(double, "d0", "=w"));
          v248_.v249 = v258_.v259;
          if (v258_.v259 != 0) {
            memcpy_plt(v248_.v248, v258_.v258, 4 * v258_.v259),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v208 = v248_.v249;
            v250_.v251 = v248_.v249;
            if (v248_.v249 == 0) {
            LABEL_118:
              v250_.v252 = v11;
              v253_.v254 = 0;
              goto LABEL_119;
            }
            memcpy_plt(v250_.v250, v248_.v248, 4 * v248_.v249),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v250_.v252 = v11;
            v253_.v254 = v208;
            memset_plt((void*)&v253_.v253, nullptr, v208),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
          LABEL_119:
            nerd_gyro_pointing_GyroPointingKalmanFilter_ApplyCorrection_plt(
                a1, v250_.v250),
                v110 = COERCE_AS(__typeof__(v110),
                                 PSEUDO_REGISTER(double, "d0", "=w"));
            v210 = *a1;
            v253_.v254 = 0;
            v250_.v251 = 0;
            v248_.v249 = 0;
            if (v210 != 0) {
              v211 = a1[1];
              if (v211 != 0) {
                v212 = 0;
                v213 = 0;
                for (i = (float*)(a1 + 3);; i += 33) {
                  v215 = (float*)&v261 + 3 * v213;
                  v216 = *v215;
                  v217 = v215[1];
                  v218 = v215[2];
                  if (v211 >= 8) {
                    break;
                  }
                  v219 = 0;
                  if ((v211 & 7) != 0) {
                    goto LABEL_129;
                  }
                LABEL_122:
                  ++v213;
                  v212 += 33;
                  if (v213 == v210) {
                    return v111 >= v109;
                  }
                }
                v220 = 0;
                v221 = i;
                v222 = (float*)&v267 + 1;
                do {
                  v223 = *v221;
                  v224 = v221[1];
                  v220 -= 8;
                  v225 = *(v221 - 1) -
                         (float)((float)((float)((float)(v216 * *(v222 - 8)) +
                                                 0x0.0p+0f) +
                                         (float)(v217 * *(v222 - 7))) +
                                 (float)(v218 * *(v222 - 6)));
                  v226 = *(v222 - 5);
                  v227 = *(v222 - 4);
                  *(v221 - 2) =
                      *(v221 - 2) -
                      (float)((float)((float)((float)(v216 * *(v222 - 11)) +
                                              0x0.0p+0f) +
                                      (float)(v217 * *(v222 - 10))) +
                              (float)(v218 * *(v222 - 9)));
                  *(v221 - 1) = v225;
                  v228 = v223 - (float)((float)((float)((float)(v216 * v226) +
                                                        0x0.0p+0f) +
                                                (float)(v217 * v227)) +
                                        (float)(v218 * *(v222 - 3)));
                  v229 = v222[2];
                  v230 = v224 -
                         (float)((float)((float)((float)(v216 * *(v222 - 2)) +
                                                 0x0.0p+0f) +
                                         (float)(v217 * *(v222 - 1))) +
                                 (float)(v218 * *v222));
                  v231 = (float)(v216 * v222[1]) + 0x0.0p+0f;
                  *v221 = v228;
                  v221[1] = v230;
                  v232 = (float)(v231 + (float)(v217 * v229)) +
                         (float)(v218 * v222[3]);
                  v233 = (float)((float)(v216 * v222[7]) + 0x0.0p+0f) +
                         (float)(v217 * v222[8]);
                  v234 = v221[3] -
                         (float)((float)((float)((float)(v216 * v222[4]) +
                                                 0x0.0p+0f) +
                                         (float)(v217 * v222[5])) +
                                 (float)(v218 * v222[6]));
                  v235 = v222[9];
                  v236 = v222[10];
                  v221[2] = v221[2] - v232;
                  v221[3] = v234;
                  v237 = v221[4] - (float)(v233 + (float)(v218 * v235));
                  v238 = v222[11];
                  v239 = v222[12];
                  v222 += 24;
                  v240 =
                      v221[5] - (float)((float)((float)((float)(v216 * v236) +
                                                        0x0.0p+0f) +
                                                (float)(v217 * v238)) +
                                        (float)(v218 * v239));
                  v221[4] = v237;
                  v221[5] = v240;
                  v221 += 8;
                } while (-(__int64)(v211 & 0xFFFFFFFFFFFFFFF8LL) != v220);
                v219 = -v220;
                if ((v211 & 7) == 0) {
                  goto LABEL_122;
                }
              LABEL_129:
                v241 = v219 + v212;
                v242 = (float*)&v266[3 * v219];
                v243 = v211 & 7;
                v244 = (float*)a1 + v241 + 4;
                do {
                  --v243;
                  v245 = (float)((float)(v216 * *(v242 - 2)) + 0x0.0p+0f) +
                         (float)(v217 * *(v242 - 1));
                  v246 = *v242;
                  v242 += 3;
                  *v244 = *v244 - (float)(v245 + (float)(v218 * v246));
                  ++v244;
                } while (v243 != 0);
                goto LABEL_122;
              }
            }
            return v111 >= v109;
          }
        }
      }
    }
  }
  v250_.v251 = 0;
  goto LABEL_118;
}

#pragma GCC visibility pop
