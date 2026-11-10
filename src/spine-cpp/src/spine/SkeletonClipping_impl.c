#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19e10();
__int64 __assert_fail(_QWORD, _QWORD, _QWORD, _QWORD);
float spine_MathUtil_abs(float result);
__int64 spine_SkeletonClipping_clip(__int64 a1, __int64 a2, _QWORD* a3,
                                    float a4, float a5, float a6, float a7,
                                    float a8, float a9);

__int64 spine_SkeletonClipping_clip(__int64 a1, __int64 a2, _QWORD* a3,
                                    float a4, float a5, float a6, float a7,
                                    float a8, float a9)
{
  char v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  float* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned int v72;
  int v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  float v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  _QWORD* v90;
  unsigned __int64 v91;
  __int64 v92;
  float v93;
  float v94;
  float v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  float* v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned int v107;
  int v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  float v115;
  float v116;
  __int64 v117;
  unsigned int v118;
  int v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  float v124;
  __int64 v125;
  unsigned __int64 v126;
  float v127;
  float v128;
  unsigned __int64 v129;
  float v130;
  float v131;
  __int64 v132;
  unsigned int v133;
  int v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  float v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned int v143;
  int v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  unsigned int v150;
  int v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  __int64 v157;
  unsigned int v158;
  int v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  __int64 v165;
  unsigned int v166;
  int v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  unsigned __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  unsigned int v175;
  int v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned int v182;
  int v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  unsigned int v189;
  int v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned int v196;
  int v197;
  __int64 v198;
  __int64 v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  unsigned int v203;
  int v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  int* v209;
  int v210;
  unsigned int v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  unsigned __int64 v215;
  __int64 v216;
  int v217;
  unsigned int v218;
  int v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  unsigned __int64 v224;
  __int64 v225;
  __int64 v226;
  unsigned __int64 v227;
  int v228;
  __int64 v229;
  int v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  unsigned __int64 v235;
  unsigned __int64 v236;
  __int64 v237;
  unsigned int v238;
  int v239;
  __int64 v240;
  _QWORD* v241;
  unsigned __int64 v242;
  unsigned __int64 v244;
  unsigned __int64 v245;
  float v246;
  float v247;
  float v248;
  float v249;
  float v250;
  float v251;
  float v252;
  float v253;
  float v254;

  v11 = *(_QWORD*)(a2 + 8);
  if ((v11 & 2) != 0) {
    v19 = a3;
  }
  else {
    v19 = (_QWORD*)(a1 + 416);
  }
  if ((v11 & 2) != 0) {
    v20 = a1 + 416;
  }
  else {
    v20 = (unsigned __int64)a3;
  }
  v21 = v19[2];
  v19[1] = 0;
  if (v21 != 0) {
    v22 = (float*)v19[3];
    v19[1] = 1;
    *v22 = a4;
    v23 = v19[1];
    if (v23 == v19[2]) {
      goto LABEL_9;
    }
  LABEL_20:
    v46 = v19[3];
    v19[1] = v23 + 1;
    *(float*)(v46 + 4 * v23) = a5;
    v30 = v19[1];
    if (v30 != v19[2]) {
      goto LABEL_13;
    }
    goto LABEL_21;
  }
  v42 = v19[3];
  v19[2] = 8;
  v43 = GameRoutine_19e10();
  v44 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
      *(_QWORD*)v43 + 32LL))(
      v43, v42, 32, "/Program/Externals/Spine/include\\spine/Vector.h", 106);
  v45 = v19[1];
  v19[3] = v44;
  v19[1] = v45 + 1;
  *(float*)(v44 + 4 * v45) = a4;
  v23 = v19[1];
  if (v23 != v19[2]) {
    goto LABEL_20;
  }
LABEL_9:
  v24 = v19[3];
  v25 = (int)(float)((float)v23 * 0x1.c000000000000p+0f);
  if (v25 <= 8) {
    v26 = 8;
  }
  else {
    v26 = v25;
  }
  v19[2] = v26;
  v27 = GameRoutine_19e10();
  v28 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
      *(_QWORD*)v27 + 32LL))(v27, v24, 4LL * v26,
                             "/Program/Externals/Spine/include\\spine/Vector.h",
                             106);
  v29 = v19[1];
  v19[3] = v28;
  v19[1] = v29 + 1;
  *(float*)(v28 + 4 * v29) = a5;
  v30 = v19[1];
  if (v30 != v19[2]) {
  LABEL_13:
    v31 = v19[3];
    v19[1] = v30 + 1;
    *(float*)(v31 + 4 * v30) = a6;
    v32 = v19[1];
    if (v32 != v19[2]) {
      goto LABEL_14;
    }
    goto LABEL_25;
  }
LABEL_21:
  v47 = v19[3];
  v48 = (int)(float)((float)v30 * 0x1.c000000000000p+0f);
  if (v48 <= 8) {
    v49 = 8;
  }
  else {
    v49 = v48;
  }
  v19[2] = v49;
  v50 = GameRoutine_19e10();
  v51 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
      *(_QWORD*)v50 + 32LL))(v50, v47, 4LL * v49,
                             "/Program/Externals/Spine/include\\spine/Vector.h",
                             106);
  v52 = v19[1];
  v19[3] = v51;
  v19[1] = v52 + 1;
  *(float*)(v51 + 4 * v52) = a6;
  v32 = v19[1];
  if (v32 != v19[2]) {
  LABEL_14:
    v33 = v19[3];
    v19[1] = v32 + 1;
    *(float*)(v33 + 4 * v32) = a7;
    v34 = v19[1];
    if (v34 != v19[2]) {
      goto LABEL_15;
    }
    goto LABEL_29;
  }
LABEL_25:
  v53 = v19[3];
  v54 = (int)(float)((float)v32 * 0x1.c000000000000p+0f);
  if (v54 <= 8) {
    v55 = 8;
  }
  else {
    v55 = v54;
  }
  v19[2] = v55;
  v56 = GameRoutine_19e10();
  v57 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
      *(_QWORD*)v56 + 32LL))(v56, v53, 4LL * v55,
                             "/Program/Externals/Spine/include\\spine/Vector.h",
                             106);
  v58 = v19[1];
  v19[3] = v57;
  v19[1] = v58 + 1;
  *(float*)(v57 + 4 * v58) = a7;
  v34 = v19[1];
  if (v34 != v19[2]) {
  LABEL_15:
    v35 = v19[3];
    v19[1] = v34 + 1;
    *(float*)(v35 + 4 * v34) = a8;
    v36 = v19[1];
    if (v36 != v19[2]) {
      goto LABEL_16;
    }
    goto LABEL_33;
  }
LABEL_29:
  v59 = v19[3];
  v60 = (int)(float)((float)v34 * 0x1.c000000000000p+0f);
  if (v60 <= 8) {
    v61 = 8;
  }
  else {
    v61 = v60;
  }
  v19[2] = v61;
  v62 = GameRoutine_19e10();
  v63 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
      *(_QWORD*)v62 + 32LL))(v62, v59, 4LL * v61,
                             "/Program/Externals/Spine/include\\spine/Vector.h",
                             106);
  v64 = v19[1];
  v19[3] = v63;
  v19[1] = v64 + 1;
  *(float*)(v63 + 4 * v64) = a8;
  v36 = v19[1];
  if (v36 != v19[2]) {
  LABEL_16:
    v37 = v19[3];
    v19[1] = v36 + 1;
    *(float*)(v37 + 4 * v36) = a9;
    v38 = v19[1];
    if (v38 != v19[2]) {
      goto LABEL_17;
    }
  LABEL_37:
    v71 = v19[3];
    v72 = (int)(float)((float)v38 * 0x1.c000000000000p+0f);
    if (v72 <= 8) {
      v73 = 8;
    }
    else {
      v73 = v72;
    }
    v19[2] = v73;
    v74 = GameRoutine_19e10();
    v75 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
        *(_QWORD*)v74 + 32LL))(
        v74, v71, 4LL * v73, "/Program/Externals/Spine/include\\spine/Vector.h",
        106);
    v76 = v19[1];
    v19[3] = v75;
    v19[1] = v76 + 1;
    *(float*)(v75 + 4 * v76) = a4;
    v40 = v19[1];
    v241 = a3;
    if (v40 != v19[2]) {
      goto LABEL_18;
    }
  LABEL_41:
    v77 = v19[3];
    v78 = (int)(float)((float)v40 * 0x1.c000000000000p+0f);
    if (v78 <= 8) {
      v79 = 8;
    }
    else {
      v79 = v78;
    }
    v19[2] = v79;
    v80 = GameRoutine_19e10();
    v81 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
        *(_QWORD*)v80 + 32LL))(
        v80, v77, 4LL * v79, "/Program/Externals/Spine/include\\spine/Vector.h",
        106);
    v82 = v19[1];
    v19[3] = v81;
    v19[1] = v82 + 1;
    *(float*)(v81 + 4 * v82) = a5;
    goto LABEL_45;
  }
LABEL_33:
  v65 = v19[3];
  v66 = (int)(float)((float)v36 * 0x1.c000000000000p+0f);
  if (v66 <= 8) {
    v67 = 8;
  }
  else {
    v67 = v66;
  }
  v19[2] = v67;
  v68 = GameRoutine_19e10();
  v69 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
      *(_QWORD*)v68 + 32LL))(v68, v65, 4LL * v67,
                             "/Program/Externals/Spine/include\\spine/Vector.h",
                             106);
  v70 = v19[1];
  v19[3] = v69;
  v19[1] = v70 + 1;
  *(float*)(v69 + 4 * v70) = a9;
  v38 = v19[1];
  if (v38 == v19[2]) {
    goto LABEL_37;
  }
LABEL_17:
  v39 = v19[3];
  v19[1] = v38 + 1;
  *(float*)(v39 + 4 * v38) = a4;
  v40 = v19[1];
  v241 = a3;
  if (v40 == v19[2]) {
    goto LABEL_41;
  }
LABEL_18:
  v41 = v19[3];
  v19[1] = v40 + 1;
  *(float*)(v41 + 4 * v40) = a5;
LABEL_45:
  *(_QWORD*)(v20 + 8) = 0;
  v83 = *(_QWORD*)(a2 + 8);
  if (v83 == 0) {
    goto LABEL_165;
  }
  v84 = 0x1.c000000000000p+0f;
  v9 = 0;
  v85 = 0;
  v242 = v83 - 4;
  v10 = 897988541;
LABEL_49:
  v86 = v85 | 1;
  if ((v85 | 1) < v83 && (v244 = v85 + 2, v85 + 2 < v83) &&
      (v245 = v85, (v87 = v85 + 3) < v83)) {
    v88 = v19[1];
    v89 = v88 - 2;
    if (v88 != 2) {
      v90 = (_QWORD*)v20;
      v91 = 0;
      v92 = *(_QWORD*)(a2 + 24);
      v93 = *(float*)(v92 + 4 * v86);
      v95 = *(float*)(v92 + 4 * v244);
      v249 = *(float*)(v92 + 4 * v87);
      v94 = v249;
      v250 = *(float*)(v92 + 4 * v245);
      v248 = v93;
      v254 = v250 - v95;
      v252 = v95 - v250;
      v253 = v93 - v249;
      v246 = v249 - v93;
      v247 = v95;
      v251 = -(float)(v249 - v93);
      while (1) {
        v97 = v19[1];
        if (v91 >= v97) {
          goto LABEL_165;
        }
        if (v91 + 1 >= v97) {
          goto LABEL_165;
        }
        if (v91 + 2 >= v97) {
          goto LABEL_165;
        }
        v20 = v91 + 3;
        if (v91 + 3 >= v97) {
          goto LABEL_165;
        }
        v98 = v19[3];
        v100 = *(float*)(v98 + 4 * v91);
        v99 = (float*)(v98 + 4 * v91);
        v102 = v99[1];
        v101 = v99[2];
        v103 = v99[3];
        v104 = (float)(v254 * (float)(v103 - v94)) -
               (float)(PSEUDO_UNFUSED((float)(v101 - v95) * v253));
        if ((float)((float)(v254 * (float)(v102 - v94)) -
                    (float)(PSEUDO_UNFUSED((float)(v100 - v95) * v253))) <=
            0x0.0p+0f) {
          break;
        }
        if (v104 <= 0x0.0p+0f) {
          v127 = v101 - v100;
          v128 = v103 - v102;
          if (spine_MathUtil_abs((float)(PSEUDO_UNFUSED(v127 * v251)) +
                                 (float)(v128 * v252)) >
              0x1.0c6f7a0000000p-20f) {
            v129 = v90[1];
            v130 =
                (float)((float)(v127 * (float)(v93 - v102)) -
                        (float)(PSEUDO_UNFUSED((float)(v250 - v100) * v128))) /
                (float)((float)(PSEUDO_UNFUSED(v127 * v251)) +
                        (float)(v128 * v252));
            v131 = v250 + (float)(v252 * v130);
            if (v129 == v90[2]) {
              v84 = 0x1.c000000000000p+0f;
              v132 = v90[3];
              v133 = (int)(float)((float)v129 * 0x1.c000000000000p+0f);
              if (v133 <= 8) {
                v134 = 8;
              }
              else {
                v134 = v133;
              }
              v90[2] = v134;
              v135 = GameRoutine_19e10();
              v136 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                     __int64))(*(_QWORD*)v135 + 32LL))(
                  v135, v132, 4LL * v134,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 106);
              v137 = v90[1];
              v90[3] = v136;
              v90[1] = v137 + 1;
              *(float*)(v136 + 4 * v137) = v131;
              v138 = v90[1];
              v139 = v93 + (float)(v246 * v130);
              if (v138 != v90[2]) {
              LABEL_84:
                v140 = v90[3];
                v90[1] = v138 + 1;
                *(float*)(v140 + 4 * v138) = v139;
                goto LABEL_118;
              }
            }
            else {
              v180 = v90[3];
              v84 = 0x1.c000000000000p+0f;
              v90[1] = v129 + 1;
              *(float*)(v180 + 4 * v129) = v131;
              v138 = v90[1];
              v139 = v93 + (float)(v246 * v130);
              if (v138 != v90[2]) {
                goto LABEL_84;
              }
            }
            v181 = v90[3];
            v182 = (int)(float)((float)v138 * v84);
            if (v182 <= 8) {
              v183 = 8;
            }
            else {
              v183 = v182;
            }
            v90[2] = v183;
            v184 = GameRoutine_19e10();
            v185 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                   __int64))(*(_QWORD*)v184 + 32LL))(
                v184, v181, 4LL * v183,
                "/Program/Externals/Spine/include\\spine/Vector.h", 106);
            v186 = v90[1];
            v90[3] = v185;
            v90[1] = v186 + 1;
            *(float*)(v185 + 4 * v186) = v139;
          LABEL_118:
            v94 = v249;
          LABEL_55:
            v9 = 1;
            goto LABEL_56;
          }
          v164 = v90[1];
          if (v164 == v90[2]) {
            v84 = 0x1.c000000000000p+0f;
            v165 = v90[3];
            v166 = (int)(float)((float)v164 * 0x1.c000000000000p+0f);
            if (v166 <= 8) {
              v167 = 8;
            }
            else {
              v167 = v166;
            }
            v90[2] = v167;
            v168 = GameRoutine_19e10();
            v169 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                   __int64))(*(_QWORD*)v168 + 32LL))(
                v168, v165, 4LL * v167,
                "/Program/Externals/Spine/include\\spine/Vector.h", 106);
            v170 = v90[1];
            v94 = v249;
            v90[3] = v169;
            v90[1] = v170 + 1;
            *(float*)(v169 + 4 * v170) = v250;
            v171 = v90[1];
            if (v171 != v90[2]) {
              goto LABEL_106;
            }
          }
          else {
            v94 = v249;
            v201 = v90[3];
            v84 = 0x1.c000000000000p+0f;
            v90[1] = v164 + 1;
            *(float*)(v201 + 4 * v164) = v250;
            v171 = v90[1];
            if (v171 != v90[2]) {
            LABEL_106:
              v172 = v90[3];
              v90[1] = v171 + 1;
              *(float*)(v172 + 4 * v171) = v93;
              goto LABEL_55;
            }
          }
          v202 = v90[3];
          v203 = (int)(float)((float)v171 * v84);
          if (v203 <= 8) {
            v204 = 8;
          }
          else {
            v204 = v203;
          }
          v90[2] = v204;
          v205 = GameRoutine_19e10();
          v206 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                 __int64))(*(_QWORD*)v205 + 32LL))(
              v205, v202, 4LL * v204,
              "/Program/Externals/Spine/include\\spine/Vector.h", 106);
          v207 = v90[1];
          v90[3] = v206;
          v90[1] = v207 + 1;
          *(float*)(v206 + 4 * v207) = v93;
          goto LABEL_55;
        }
        v105 = v90[1];
        if (v105 == v90[2]) {
          v106 = v90[3];
          v107 = (int)(float)((float)v105 * v84);
          if (v107 <= 8) {
            v108 = 8;
          }
          else {
            v108 = v107;
          }
          v90[2] = v108;
          v109 = GameRoutine_19e10();
          v110 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                 __int64))(*(_QWORD*)v109 + 32LL))(
              v109, v106, 4LL * v108,
              "/Program/Externals/Spine/include\\spine/Vector.h", 106);
          v111 = v90[1];
          v90[3] = v110;
          v90[1] = v111 + 1;
          *(float*)(v110 + 4 * v111) = v101;
          v112 = v90[1];
          if (v112 == v90[2]) {
          LABEL_86:
            v142 = v90[3];
            v143 = (int)(float)((float)v112 * v84);
            if (v143 <= 8) {
              v144 = 8;
            }
            else {
              v144 = v143;
            }
            v90[2] = v144;
            v145 = GameRoutine_19e10();
            v146 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                   __int64))(*(_QWORD*)v145 + 32LL))(
                v145, v142, 4LL * v144,
                "/Program/Externals/Spine/include\\spine/Vector.h", 106);
            v147 = v90[1];
            v90[3] = v146;
            v90[1] = v147 + 1;
            *(float*)(v146 + 4 * v147) = v103;
            goto LABEL_56;
          }
        }
        else {
          v141 = v90[3];
          v90[1] = v105 + 1;
          *(float*)(v141 + 4 * v105) = v101;
          v112 = v90[1];
          if (v112 == v90[2]) {
            goto LABEL_86;
          }
        }
        v113 = v90[3];
        v90[1] = v112 + 1;
        *(float*)(v113 + 4 * v112) = v103;
      LABEL_56:
        v91 = v20 - 1;
        if (v20 - 1 >= v89) {
          v208 = v90[1];
          if (v208 == 0) {
            goto LABEL_158;
          }
          v209 = (int*)v90[3];
          if (v208 == v90[2]) {
            v210 = *v209;
            v211 = (int)(float)((float)v208 * v84);
            if (v211 <= 8) {
              v20 = 8;
            }
            else {
              v20 = v211;
            }
            v90[2] = (int)v20;
            v212 = GameRoutine_19e10();
            v213 = (*(__int64 (**)(__int64, int*, __int64, const char*,
                                   __int64))(*(_QWORD*)v212 + 32LL))(
                v212, v209, 4LL * (int)v20,
                "/Program/Externals/Spine/include\\spine/Vector.h", 106);
            v214 = v90[1];
            v90[3] = v213;
            v90[1] = v214 + 1;
            *(_DWORD*)(v213 + 4 * v214) = v210;
          }
          else {
            v90[1] = v208 + 1;
            v209[v208] = *v209;
          }
          v215 = v90[1];
          if (v215 <= 1) {
            goto LABEL_165;
          }
          v216 = v90[3];
          if (v215 == v90[2]) {
            v217 = *(_DWORD*)(v216 + 4);
            v218 = (int)(float)((float)v215 * v84);
            if (v218 <= 8) {
              v219 = 8;
            }
            else {
              v219 = v218;
            }
            v90[2] = v219;
            v220 = GameRoutine_19e10();
            v221 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                   __int64))(*(_QWORD*)v220 + 32LL))(
                v220, v216, 4LL * v219,
                "/Program/Externals/Spine/include\\spine/Vector.h", 106);
            v222 = v90[1];
            v90[3] = v221;
            v90[1] = v222 + 1;
            *(_DWORD*)(v221 + 4 * v222) = v217;
            if (v245 == v242) {
            LABEL_147:
              v10 = (__int64)v241;
              if (v241 == v90) {
                v20 = v241[1];
                v235 = v241[2];
                v236 = v20 - 2;
                v241[1] = v20 - 2;
                if (v235 >= v20 - 2) {
                  goto LABEL_168;
                }
                v237 = v241[3];
                v238 = (int)(float)((float)v236 * 0x1.c000000000000p+0f);
                if (v238 <= 8) {
                  v239 = 8;
                }
                else {
                  v239 = v238;
                }
                v241[2] = v239;
                v240 = GameRoutine_19e10();
                v241[3] =
                    (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                    __int64))(*(_QWORD*)v240 + 32LL))(
                        v240, v237, 4LL * v239,
                        "/Program/Externals/Spine/include\\spine/Vector.h", 82);
                goto LABEL_167;
              }
              v241[1] = 0;
              v223 = v90[1];
              v20 = v223 - 2;
              if (v223 == 2) {
                return v9 & 1;
              }
              v224 = 0;
              while (v224 < v90[1]) {
                v226 = v90[3];
                v227 = v241[1];
                if (v227 == v241[2]) {
                  v228 = *(_DWORD*)(v226 + 4 * v224);
                  v229 = v241[3];
                  if ((unsigned int)(int)(float)((float)v227 *
                                                 0x1.c000000000000p+0f) <= 8) {
                    v230 = 8;
                  }
                  else {
                    v230 = (int)(float)((float)v227 * 0x1.c000000000000p+0f);
                  }
                  v241[2] = v230;
                  v231 = GameRoutine_19e10();
                  v232 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                         __int64))(*(_QWORD*)v231 + 32LL))(
                      v231, v229, 4LL * v230,
                      "/Program/Externals/Spine/include\\spine/Vector.h", 106);
                  v233 = v241[1];
                  v241[3] = v232;
                  v241[1] = v233 + 1;
                  *(_DWORD*)(v232 + 4 * v233) = v228;
                  if (v20 == ++v224) {
                    return v9 & 1;
                  }
                }
                else {
                  v225 = v241[3];
                  v241[1] = v227 + 1;
                  *(_DWORD*)(v225 + 4 * v227) = *(_DWORD*)(v226 + 4 * v224++);
                  if (v20 == v224) {
                    return v9 & 1;
                  }
                }
              }
              goto LABEL_165;
            }
          }
          else {
            v90[1] = v215 + 1;
            *(_DWORD*)(v216 + 4 * v215) = *(_DWORD*)(v216 + 4);
            if (v245 == v242) {
              goto LABEL_147;
            }
          }
          v19[1] = 0;
          v20 = (unsigned __int64)v19;
          v19 = v90;
          v85 = v244;
          v83 = *(_QWORD*)(a2 + 8);
          if (v244 >= v83) {
            goto LABEL_165;
          }
          goto LABEL_49;
        }
      }
      if (v104 <= 0x0.0p+0f) {
        goto LABEL_55;
      }
      if (spine_MathUtil_abs(
              (float)(PSEUDO_UNFUSED((float)(v101 - v100) * v251)) +
              (float)((float)(v103 - v102) * v252)) > 0x1.0c6f7a0000000p-20f) {
        v114 = v90[1];
        v115 = (float)((float)((float)(v101 - v100) * (float)(v248 - v102)) -
                       (float)(PSEUDO_UNFUSED((float)(v250 - v100) *
                                              (float)(v103 - v102)))) /
               (float)((float)(PSEUDO_UNFUSED((float)(v101 - v100) * v251)) +
                       (float)((float)(v103 - v102) * v252));
        v116 = v250 + (float)(v252 * v115);
        if (v114 == v90[2]) {
          v84 = 0x1.c000000000000p+0f;
          v117 = v90[3];
          v118 = (int)(float)((float)v114 * 0x1.c000000000000p+0f);
          if (v118 <= 8) {
            v119 = 8;
          }
          else {
            v119 = v118;
          }
          v90[2] = v119;
          v120 = GameRoutine_19e10();
          v121 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                 __int64))(*(_QWORD*)v120 + 32LL))(
              v120, v117, 4LL * v119,
              "/Program/Externals/Spine/include\\spine/Vector.h", 106);
          v122 = v90[1];
          v90[3] = v121;
          v90[1] = v122 + 1;
          *(float*)(v121 + 4 * v122) = v116;
          v93 = v248;
          v123 = v90[1];
          v124 = v248 + (float)(v246 * v115);
          if (v123 != v90[2]) {
          LABEL_76:
            v125 = v90[3];
            v90[1] = v123 + 1;
            *(float*)(v125 + 4 * v123) = v124;
            v95 = v247;
            v94 = v249;
            v126 = v90[1];
            if (v126 == v90[2]) {
              goto LABEL_96;
            }
          LABEL_124:
            v194 = v90[3];
            v90[1] = v126 + 1;
            *(float*)(v194 + 4 * v126) = v101;
            v163 = v90[1];
            if (v163 == v90[2]) {
            LABEL_125:
              v195 = v90[3];
              v196 = (int)(float)((float)v163 * v84);
              if (v196 <= 8) {
                v197 = 8;
              }
              else {
                v197 = v196;
              }
              v90[2] = v197;
              v198 = GameRoutine_19e10();
              v199 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                                     __int64))(*(_QWORD*)v198 + 32LL))(
                  v198, v195, 4LL * v197,
                  "/Program/Externals/Spine/include\\spine/Vector.h", 106);
              v200 = v90[1];
              v90[3] = v199;
              v90[1] = v200 + 1;
              *(float*)(v199 + 4 * v200) = v103;
              goto LABEL_55;
            }
          LABEL_54:
            v96 = v90[3];
            v90[1] = v163 + 1;
            *(float*)(v96 + 4 * v163) = v103;
            goto LABEL_55;
          }
        }
        else {
          v173 = v90[3];
          v84 = 0x1.c000000000000p+0f;
          v90[1] = v114 + 1;
          *(float*)(v173 + 4 * v114) = v116;
          v93 = v248;
          v123 = v90[1];
          v124 = v248 + (float)(v246 * v115);
          if (v123 != v90[2]) {
            goto LABEL_76;
          }
        }
        v174 = v90[3];
        v175 = (int)(float)((float)v123 * v84);
        if (v175 <= 8) {
          v176 = 8;
        }
        else {
          v176 = v175;
        }
        v90[2] = v176;
        v177 = GameRoutine_19e10();
        v178 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                               __int64))(*(_QWORD*)v177 + 32LL))(
            v177, v174, 4LL * v176,
            "/Program/Externals/Spine/include\\spine/Vector.h", 106);
        v179 = v90[1];
        v90[3] = v178;
        v90[1] = v179 + 1;
        *(float*)(v178 + 4 * v179) = v124;
        v95 = v247;
        v94 = v249;
        v126 = v90[1];
        if (v126 != v90[2]) {
          goto LABEL_124;
        }
      LABEL_96:
        v157 = v90[3];
        v158 = (int)(float)((float)v126 * v84);
        if (v158 <= 8) {
          v159 = 8;
        }
        else {
          v159 = v158;
        }
        v90[2] = v159;
        v160 = GameRoutine_19e10();
        v161 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                               __int64))(*(_QWORD*)v160 + 32LL))(
            v160, v157, 4LL * v159,
            "/Program/Externals/Spine/include\\spine/Vector.h", 106);
        v162 = v90[1];
        v90[3] = v161;
        v90[1] = v162 + 1;
        *(float*)(v161 + 4 * v162) = v101;
        v163 = v90[1];
        if (v163 == v90[2]) {
          goto LABEL_125;
        }
        goto LABEL_54;
      }
      v148 = v90[1];
      if (v148 == v90[2]) {
        v84 = 0x1.c000000000000p+0f;
        v149 = v90[3];
        v150 = (int)(float)((float)v148 * 0x1.c000000000000p+0f);
        if (v150 <= 8) {
          v151 = 8;
        }
        else {
          v151 = v150;
        }
        v90[2] = v151;
        v152 = GameRoutine_19e10();
        v153 = (*(__int64 (**)(__int64, __int64, __int64, const char*,
                               __int64))(*(_QWORD*)v152 + 32LL))(
            v152, v149, 4LL * v151,
            "/Program/Externals/Spine/include\\spine/Vector.h", 106);
        v154 = v90[1];
        v90[3] = v153;
        v90[1] = v154 + 1;
        *(float*)(v153 + 4 * v154) = v250;
        v93 = v248;
        v94 = v249;
        v95 = v247;
        v155 = v90[1];
        if (v155 != v90[2]) {
        LABEL_95:
          v156 = v90[3];
          v90[1] = v155 + 1;
          *(float*)(v156 + 4 * v155) = v93;
          v126 = v90[1];
          if (v126 == v90[2]) {
            goto LABEL_96;
          }
          goto LABEL_124;
        }
      }
      else {
        v187 = v90[3];
        v84 = 0x1.c000000000000p+0f;
        v90[1] = v148 + 1;
        *(float*)(v187 + 4 * v148) = v250;
        v93 = v248;
        v94 = v249;
        v95 = v247;
        v155 = v90[1];
        if (v155 != v90[2]) {
          goto LABEL_95;
        }
      }
      v188 = v90[3];
      v189 = (int)(float)((float)v155 * v84);
      if (v189 <= 8) {
        v190 = 8;
      }
      else {
        v190 = v189;
      }
      v90[2] = v190;
      v191 = GameRoutine_19e10();
      v192 = (*(__int64 (**)(__int64, __int64, __int64, const char*, __int64))(
          *(_QWORD*)v191 + 32LL))(
          v191, v188, 4LL * v190,
          "/Program/Externals/Spine/include\\spine/Vector.h", 106);
      v193 = v90[1];
      v90[3] = v192;
      v90[1] = v193 + 1;
      *(float*)(v192 + 4 * v193) = v93;
      v126 = v90[1];
      if (v126 != v90[2]) {
        goto LABEL_124;
      }
      goto LABEL_96;
    }
  LABEL_158:
    v9 = 1;
    v241[1] = 0;
  }
  else {
  LABEL_165:
    __assert_fail("inIndex < _size",
                  "/Program/Externals/Spine/include\\spine/Vector.h", 162,
                  "operator[]");
    do {
      *(_DWORD*)(*(_QWORD*)(v10 + 24) + 4 * v20++) = 0;
    LABEL_167:
      v236 = *(_QWORD*)(v10 + 8);
    LABEL_168:;
    } while (v20 < v236);
  }
  return v9 & 1;
}

#pragma GCC visibility pop
