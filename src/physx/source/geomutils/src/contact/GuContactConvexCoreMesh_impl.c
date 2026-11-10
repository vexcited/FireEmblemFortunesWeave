#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_400c80(__int64, __int64, __int64);
__int64 GameRoutine_461810(__int64, __int64, __int64);
__int64 GameRoutine_461ae0(__int64 result, float*);
__int64 physx_Gu_ConvexShape_contactFace(float*, float*, float*, float*,
                                         __int64);
__int64 physx_Gu_FaceClipper_clipNxN(__int64);
__int64 physx_Gu_makeConvexShape(__int64, __int64, __int64);
float GameRoutine_400af0(int**, int*, int*);
float GameRoutine_401960(__int64, float*);
float GameRoutine_461fa0(__int64, float*, float*);
float sqrtf();
void GameRoutine_400df0(__int64);
void physx_Gu_FaceClipper_clip2x2(__int64);
bool physx_Gu_contactConvexCoreHeightfield(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4, float* a5, __int64 a6,
                                           __int64 a7);

bool physx_Gu_contactConvexCoreHeightfield(__int64 a1, __int64 a2, __int64 a3,
                                           __int64 a4, float* a5, __int64 a6,
                                           __int64 a7)
{
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  unsigned __int64 v39;
  float v40;
  float v41;
  int v42;
  __int64 v43;
  float v44;
  float* v45;
  float v46;
  bool v47;
  float v48;
  bool v49;
  float v50;
  bool v51;
  float v52;
  bool v53;
  float v54;
  bool v55;
  float v56;
  bool v57;
  float v58;
  bool v59;
  float v60;
  int v61;
  unsigned __int64 v62;
  float* v63;
  float v64;
  float v65;
  int i;
  float* v67;
  float v68;
  float v69;
  float v70;
  float v71;
  char v72;
  float v73;
  int* v74;
  __int64 v75;
  __int64 v76;
  unsigned __int8* v77;
  __int64 v78;
  float v79;
  float* v80;
  float v81;
  float v82;
  float v83;
  float* v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float* v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  unsigned int v99;
  float* v100;
  float* v101;
  float v102;
  float* v103;
  float* v104;
  unsigned int v105;
  unsigned int v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64* v110;
  _BYTE* v111;
  int v112;
  int v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  int v117;
  int v118;
  int v119;
  int v120;
  float* v121;
  char* v122;
  int v123;
  int v124;
  float v125;
  float v126;
  float v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  _BYTE* v131;
  __int64* v132;
  float* v133;
  int v134;
  int v135;
  int v136;
  int v137;
  __int64 v138;
  int v139;
  int v140;
  __int64 v141;
  int v142;
  int v143;
  __int64 v144;
  _DWORD* v145;
  _DWORD* v146;
  char* v147;
  __int64 v148;
  int v149;
  int v150;
  _DWORD* v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  int* v155;
  float* v156;
  float v157;
  float v158;
  float v159;
  __int64 v160;
  int v161;
  float v162;
  float v163;
  float v164;
  __int64 v165;
  int v166;
  int v167;
  float* v168;
  __int64 v169;
  float v170;
  float v171;
  float v172;
  float v174;
  float v175;
  float v176;
  float v177;
  struct {
    float v178[11];
    float v179;
  } v178_;
  int v180[7];
  struct {
    float v181[11];
    float v182;
  } v181_;
  int v183[7];
  float v184[7];
  float v185[7];
  float v186[3];
  float v187[3];
  struct {
    float v188;
    float v189;
    float v190;
  } v188_;
  float* v191;
  __int64 v192;
  float v193;
  float v194;
  float v195;
  float v196;
  float v197;
  float v198;
  float v199;
  _BYTE v200[48];
  int v201;
  int v202;
  unsigned int v203;
  unsigned int v204;
  float v205;
  float v206;
  float v207;
  float v208[12];
  __int64 v209;
  unsigned int v210;
  int v211;
  float v212;
  float v213;
  float v214;
  __int16 v215;
  char v216;
  float v217;
  float v218;
  float v219;
  float v220;
  __int16 v221;
  char v222;
  float* v223;
  __int64 v224;
  int v225;
  _DWORD v226[9];
  _BYTE v227[7];
  float v228;
  float v229;
  float v230;
  _OWORD v231[2];
  _BYTE v232[376];
  float v233;
  float v234;

  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v9 = *(float*)(a3 + 20);
  v10 = *(float*)(a3 + 24);
  v11 = *(float*)(a4 + 20);
  v12 = *(float*)(a4 + 24);
  v16 = *(float*)(a3 + 12);
  v15 = *(float*)(a3 + 16);
  v18 = *(float*)(a4 + 12);
  v17 = *(float*)(a4 + 16);
  v19 = *(_QWORD*)(a3 + 4);
  v185[0] = *(float*)a3;
  *(_QWORD*)&v185[1] = v19;
  v20 = *a5;
  v21 = (float)(v9 + v11) * 0x1.0000000000000p-1f;
  v22 = (float)(v10 + v12) * 0x1.0000000000000p-1f;
  v23 = (float)(v15 + v17) * 0x1.0000000000000p-1f;
  *(_QWORD*)&v184[1] = *(_QWORD*)(a4 + 4);
  v185[5] = v9 - v21;
  v185[6] = v10 - v22;
  v24 = v11 - v21;
  v25 = *(float*)a4;
  v185[3] = v16;
  v185[4] = v15 - v23;
  v184[3] = v18;
  v184[4] = v17 - v23;
  v184[5] = v24;
  v184[6] = v12 - v22;
  v184[0] = v25;
  physx_Gu_makeConvexShape(a1, (__int64)v185, (__int64)v181_.v181),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  physx_Gu_makeConvexShape(a2, (__int64)v184, (__int64)v178_.v178),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v26 = v20 + (float)(v181_.v182 + v178_.v179);
  GameRoutine_400af0((int**)&v191, (int*)v181_.v181, v183),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_400af0((int**)v231, (int*)v178_.v178, v180),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_400c80((__int64)&v223, (__int64)&v191, (__int64)v231),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v27 = v223[101];
  if (v27 >= *(float*)(v224 + 404)) {
    v27 = *(float*)(v224 + 404);
  }
  v28 = v27 * 0x1.47ae140000000p-7f;
  GameRoutine_400df0((__int64)&v223),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v31 = sqrtf(),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v175 = v23;
  v176 = v22;
  v174 = v21;
  v234 = v26;
  if (v31 >= v28) {
    v32 = v31;
    v7 = 0x1.0000000000000p+0f;
    while (1) {
      v33 = 0x0.0p+0f;
      v34 = 0x0.0p+0f;
      v35 = 0x0.0p+0f;
      if ((float)((float)((float)(PSEUDO_UNFUSED(v229 * v229)) +
                          (float)(v228 * v228)) +
                  (float)(v230 * v230)) > 0x0.0p+0f) {
        v36 = 0x1.0000000000000p+0f / sqrtf(),
        v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
        v34 = v228 * v36;
        v33 = v36 * v229;
        v35 = v36 * v230;
      }
      v188_.v188 = -v34;
      v188_.v189 = -v33;
      v188_.v190 = -v35;
      v37 = GameRoutine_401960((__int64)&v223, &v188_.v188),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v37 >= (float)(v32 - v28)) {
        break;
      }
      if (v37 > v26) {
        v32 = 0x1.fffffe0000000p+127f;
        goto LABEL_71;
      }
      GameRoutine_400df0((__int64)&v223),
          v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
      v32 = sqrtf(),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v32 < v28) {
        goto LABEL_10;
      }
    }
    if (v225 == 0) {
      v22 = 0x0.0p+0f;
      v8 = 0x0.0p+0f;
      v26 = 0x0.0p+0f;
      v28 = 0x0.0p+0f;
      v7 = 0x0.0p+0f;
      v21 = 0x0.0p+0f;
      goto LABEL_70;
    }
    v74 = (int*)(v223 + 4);
    v75 = v224 + 16;
    if (v225 == 1) {
      v76 = 0;
      v21 = 0x0.0p+0f;
      v7 = 0x0.0p+0f;
      v28 = 0x0.0p+0f;
      v26 = 0x0.0p+0f;
      v8 = 0x0.0p+0f;
      v22 = 0x0.0p+0f;
    }
    else {
      v21 = 0x0.0p+0f;
      v7 = 0x0.0p+0f;
      v77 = v227;
      v78 = 0;
      v28 = 0x0.0p+0f;
      v26 = 0x0.0p+0f;
      v8 = 0x0.0p+0f;
      v22 = 0x0.0p+0f;
      do {
        v79 = *(float*)(v77 - 25);
        v78 -= 2;
        v80 = (float*)&v74[3 * *(v77 - 21)];
        v81 = *v80;
        v82 = v80[1];
        v83 = v80[2];
        v84 = (float*)(v75 + 12LL * *(v77 - 20));
        v85 = *v84;
        v86 = v84[1];
        v87 = v84[2];
        v88 = v28 + (float)(PSEUDO_UNFUSED(v79 * v81));
        v89 = v7 + (float)(PSEUDO_UNFUSED(v79 * v82));
        v90 = v21 + (float)(PSEUDO_UNFUSED(v79 * v83));
        v91 = (float*)&v74[3 * *(v77 - 1)];
        v92 = v79 * v85;
        v93 = v79 * v86;
        v94 = v79 * v87;
        v95 = *(float*)(v77 - 5);
        v96 = *v91;
        v97 = v91[1];
        v98 = v91[2];
        v99 = *v77;
        v77 += 40;
        v100 = (float*)(v75 + 12LL * v99);
        v28 = v88 + (float)(PSEUDO_UNFUSED(v95 * v96));
        v7 = v89 + (float)(PSEUDO_UNFUSED(v95 * v97));
        v21 = v90 + (float)(PSEUDO_UNFUSED(v95 * v98));
        v22 = (float)(v22 + v92) + (float)(PSEUDO_UNFUSED(v95 * *v100));
        v8 = (float)(v8 + v93) + (float)(PSEUDO_UNFUSED(v95 * v100[1]));
        v26 = (float)(v26 + v94) + (float)(PSEUDO_UNFUSED(v95 * v100[2]));
      } while (-(__int64)(v225 & 0xFFFFFFFE) != v78);
      v76 = -v78;
      if ((v225 & 1) == 0) {
      LABEL_70:
        v233 = -v188_.v188;
        v177 = -v188_.v189;
        v23 = -v188_.v190;
        if (v32 >= 0x1.0000000000000p-23f) {
          goto LABEL_71;
        }
        goto LABEL_10;
      }
    }
    v101 = (float*)&v226[5 * v76];
    v102 = v101[3];
    v103 = (float*)&v74[3 * *((unsigned __int8*)v101 + 16)];
    v104 = (float*)(v75 + 12LL * *((unsigned __int8*)v101 + 17));
    v28 = v28 + (float)(PSEUDO_UNFUSED(v102 * *v103));
    v7 = v7 + (float)(PSEUDO_UNFUSED(v102 * v103[1]));
    v21 = v21 + (float)(PSEUDO_UNFUSED(v102 * v103[2]));
    v22 = v22 + (float)(PSEUDO_UNFUSED(v102 * *v104));
    v8 = v8 + (float)(PSEUDO_UNFUSED(v102 * v104[1]));
    v26 = v26 + (float)(PSEUDO_UNFUSED(v102 * v104[2]));
    goto LABEL_70;
  }
LABEL_10:
  GameRoutine_400af0((int**)v231, (int*)v181_.v181, v183),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_400af0((int**)&v223, (int*)v178_.v178, v180),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  GameRoutine_461810((__int64)&v191, (__int64)v231, (__int64)&v223),
      v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v39 = v210;
  if (v210 != 0) {
    v40 = v191[101];
    if (v40 >= *(float*)(v192 + 404)) {
      v40 = *(float*)(v192 + 404);
    }
    v41 = v40 * 0x1.47ae140000000p-7f;
  LABEL_14:
    if (v39 >= 8) {
      v42 = -1;
      v43 = 0;
      v44 = -0x1.fffffe0000000p+127f;
      v45 = (float*)&v202;
      do {
        v46 = *(v45 - 10);
        v47 = v46 <= v44;
        if (v46 > v44) {
          v44 = *(v45 - 10);
        }
        v48 = *(v45 - 5);
        if (!v47) {
          v42 = v43;
        }
        v49 = v48 <= v44;
        if (v48 > v44) {
          v44 = *(v45 - 5);
        }
        v50 = *v45;
        if (!v49) {
          v42 = v43 + 1;
        }
        v51 = v50 <= v44;
        if (v50 > v44) {
          v44 = *v45;
        }
        v52 = v45[5];
        if (!v51) {
          v42 = v43 + 2;
        }
        v53 = v52 <= v44;
        if (v52 > v44) {
          v44 = v45[5];
        }
        v54 = v45[10];
        if (!v53) {
          v42 = v43 + 3;
        }
        v55 = v54 <= v44;
        if (v54 > v44) {
          v44 = v45[10];
        }
        v56 = v45[15];
        if (!v55) {
          v42 = v43 + 4;
        }
        v57 = v56 <= v44;
        if (v56 > v44) {
          v44 = v45[15];
        }
        v58 = v45[20];
        if (!v57) {
          v42 = v43 + 5;
        }
        v59 = v58 <= v44;
        if (v58 > v44) {
          v44 = v45[20];
        }
        v60 = v45[25];
        if (!v59) {
          v42 = v43 + 6;
        }
        v61 = v43 + 7;
        v43 += 8;
        v45 += 40;
        if (v60 > v44) {
          v44 = v60;
          v42 = v61;
        }
      } while (v43 != (v39 & 0xFFFFFFF8));
    }
    else {
      v42 = -1;
      v43 = 0;
      v44 = -0x1.fffffe0000000p+127f;
    }
    v62 = v39 & 7;
    if ((v39 & 7) != 0) {
      v63 = (float*)&v200[20 * v43 + 32];
      do {
        v64 = *v63;
        v63 += 5;
        v65 = v64;
        if (v64 > v44) {
          v44 = v65;
          v42 = v43;
        }
        LODWORD(v43) = v43 + 1;
        --v62;
      } while (v62 != 0);
    }
    for (i = v42;; i = -1) {
      v67 = (float*)&v200[20 * i + 20];
      v68 = *v67;
      v69 = v67[1];
      v211 = *(_DWORD*)v67;
      v212 = v69;
      v70 = v67[2];
      v71 = v67[3];
      v213 = v70;
      v214 = v71;
      v72 = *((_BYTE*)v67 + 18);
      LOWORD(v67) = *((_WORD*)v67 + 8);
      v216 = v72;
      v215 = (__int16)v67;
      if (v39 == 2) {
        v217 = v68;
        v218 = v69;
        v219 = v70;
        v220 = v71;
        v221 = v215;
        v222 = v216;
      }
      v188_.v188 = v68;
      v188_.v189 = v69;
      v188_.v190 = v70;
      GameRoutine_461ae0((__int64)&v191, &v188_.v188),
          v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v73 >= (float)(v71 - v41)) {
        break;
      }
      v39 = v210;
      if (v210 != 0) {
        goto LABEL_14;
      }
    }
    GameRoutine_461fa0((__int64)&v191, v187, v186),
        v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
    v28 = v187[0];
    v7 = v187[1];
    v21 = v187[2];
    v22 = v186[0];
    v8 = v186[1];
    v26 = v186[2];
    v32 = v220;
    v23 = -v219;
    v233 = -v217;
    v177 = -v218;
  }
  else {
    v32 = 0x1.fffffe0000000p+127f;
  }
LABEL_71:
  if (v32 > v234 ||
      (float)((float)((float)(PSEUDO_UNFUSED(v177 * 0x0.0p+0f)) +
                      (float)(v233 * 0x0.0p+0f)) +
              (float)(v23 * 0x0.0p+0f)) < -0x1.4f8b580000000p-17f) {
    return *(_DWORD*)(a7 + 20480) != 0;
  }
  v195 = v233;
  v196 = v177;
  v197 = v23;
  *(float*)&v191 = v28 - (float)(PSEUDO_UNFUSED(v233 * v181_.v182));
  *((float*)&v191 + 1) = v7 - (float)(PSEUDO_UNFUSED(v177 * v181_.v182));
  *(float*)&v192 = v21 - (float)(PSEUDO_UNFUSED(v23 * v181_.v182));
  *((float*)&v192 + 1) = v22 + (float)(PSEUDO_UNFUSED(v233 * v178_.v179));
  v193 = v8 + (float)(PSEUDO_UNFUSED(v177 * v178_.v179));
  *(float*)&v224 = -v23;
  *((float*)&v223 + 1) = -v177;
  v194 = v26 + (float)(PSEUDO_UNFUSED(v23 * v178_.v179));
  *(float*)&v223 = -v233;
  v203 = physx_Gu_ConvexShape_contactFace(v181_.v181, (float*)&v223,
                                          (float*)&v191, &v198, (__int64)v200),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v105 = physx_Gu_ConvexShape_contactFace(v178_.v178, &v195, (float*)&v192 + 1,
                                          &v199, (__int64)&v201),
  v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
  v204 = v105;
  if (v105 < 2 || v203 <= 1) {
    HIDWORD(v209) = 1;
    v205 =
        (float)(*(float*)&v191 + *((float*)&v192 + 1)) * 0x1.0000000000000p-1f;
    v206 = (float)(*((float*)&v191 + 1) + v193) * 0x1.0000000000000p-1f;
    v207 = (float)(*(float*)&v192 + v194) * 0x1.0000000000000p-1f;
    v208[0] = (float)((float)(PSEUDO_UNFUSED(
                          (float)(*((float*)&v191 + 1) - v193) * v196)) +
                      (float)(v195 *
                              (float)(*(float*)&v191 - *((float*)&v192 + 1)))) +
              (float)(v197 * (float)(*(float*)&v192 - v194));
    v106 = 1;
  }
  else if (v105 == 2 && v203 == 2) {
    physx_Gu_FaceClipper_clip2x2((__int64)&v191),
        v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
    v106 = HIDWORD(v209);
    if (HIDWORD(v209) == 0) {
      return *(_DWORD*)(a7 + 20480) != 0;
    }
  }
  else {
    physx_Gu_FaceClipper_clipNxN((__int64)&v191),
        v73 = COERCE_AS(__typeof__(v73), PSEUDO_REGISTER(float, "s0", "=w"));
    v106 = HIDWORD(v209);
    if (HIDWORD(v209) == 0) {
      return *(_DWORD*)(a7 + 20480) != 0;
    }
  }
  v107 = v106 & 3;
  if (v106 < 4) {
    v108 = 0;
    if ((v106 & 3) == 0) {
      goto LABEL_89;
    }
    goto LABEL_87;
  }
  v109 = 0;
  v110 = &v209;
  v111 = v232;
  do {
    v112 = *((_DWORD*)v110 - 13);
    v113 = *((_DWORD*)v110 - 10);
    v109 -= 4;
    v114 = *(v110 - 6);
    *((_QWORD*)v111 - 4) = *(__int64*)((char*)v110 - 60);
    v115 = *(__int64*)((char*)v110 - 36);
    *(_QWORD*)(v111 - 20) = v114;
    v116 = *(__int64*)((char*)v110 - 28);
    *((_DWORD*)v111 - 6) = v112;
    *((_DWORD*)v111 - 3) = v113;
    *((_QWORD*)v111 - 1) = v115;
    *(_QWORD*)v111 = v116;
    v117 = *((_DWORD*)v110 - 4);
    *((_DWORD*)v111 + 2) = *((_DWORD*)v110 - 5);
    *((_DWORD*)v111 + 3) = v117;
    v118 = *((_DWORD*)v110 - 2);
    *((_DWORD*)v111 + 4) = *((_DWORD*)v110 - 3);
    *((_DWORD*)v111 + 5) = v118;
    v119 = *((_DWORD*)v110 - 1);
    v120 = *(_DWORD*)v110;
    v110 += 8;
    *((_DWORD*)v111 + 6) = v119;
    *((_DWORD*)v111 + 7) = v120;
    v111 += 64;
  } while (-(__int64)(v106 & 0xFFFFFFFC) != v109);
  v108 = -v109;
  if ((v106 & 3) != 0) {
  LABEL_87:
    v121 = &v208[4 * v108];
    v122 = (char*)&v231[v108] + 8;
    do {
      v123 = *((_DWORD*)v121 - 3);
      --v107;
      *(_QWORD*)(v122 - 4) = *((_QWORD*)v121 - 1);
      *((_DWORD*)v122 - 2) = v123;
      v124 = *(_DWORD*)v121;
      v121 += 4;
      *((_DWORD*)v122 + 1) = v124;
      v122 += 16;
    } while (v107 != 0);
  }
LABEL_89:
  v125 = v195;
  v126 = v196;
  v127 = v197;
  v128 = v106 & 3;
  if (v106 >= 4) {
    v130 = 0;
    v131 = v232;
    v132 = &v224;
    v133 = &v195;
    do {
      v134 = *((_DWORD*)v131 - 6);
      v135 = *((_DWORD*)v131 - 5);
      v136 = *((_DWORD*)v131 - 2);
      v137 = *((_DWORD*)v131 - 1);
      v130 -= 4;
      *((_QWORD*)v133 - 3) = *((_QWORD*)v131 - 4);
      v138 = *((_QWORD*)v131 - 2);
      *((_DWORD*)v133 - 4) = v134;
      *((_DWORD*)v133 - 1) = v136;
      v139 = *((_DWORD*)v131 + 2);
      v140 = *((_DWORD*)v131 + 3);
      *((_DWORD*)v132 - 2) = v135;
      *((_DWORD*)v132 - 1) = v137;
      *(_QWORD*)(v133 - 3) = v138;
      v141 = *(_QWORD*)v131;
      *((_DWORD*)v133 + 2) = v139;
      v142 = *((_DWORD*)v131 + 6);
      v143 = *((_DWORD*)v131 + 7);
      *(_QWORD*)v133 = v141;
      v144 = *((_QWORD*)v131 + 2);
      v131 += 64;
      *(_DWORD*)v132 = v140;
      *((_DWORD*)v132 + 1) = v143;
      v132 += 2;
      *((_DWORD*)v133 + 5) = v142;
      *(_QWORD*)(v133 + 3) = v144;
      v133 += 12;
    } while (-(__int64)(v106 & 0xFFFFFFFC) != v130);
    v129 = -v130;
    if ((v106 & 3) == 0) {
      goto LABEL_97;
    }
    goto LABEL_95;
  }
  v129 = 0;
  if ((v106 & 3) != 0) {
  LABEL_95:
    v145 = (_DWORD*)&v223 + v129;
    v146 = (_DWORD*)&v231[v129] + 2;
    v147 = (char*)&v191 + 12 * v129 + 4;
    do {
      v148 = *((_QWORD*)v146 - 1);
      v149 = *v146;
      v150 = v146[1];
      v146 += 4;
      --v128;
      *(_QWORD*)(v147 - 4) = v148;
      *((_DWORD*)v147 + 1) = v149;
      *v145++ = v150;
      v147 += 12;
    } while (v128 != 0);
  }
LABEL_97:
  v151 = (_DWORD*)(a7 + 20480);
  v152 = *(unsigned int*)(a7 + 20480);
  if (v106 == 1) {
    v153 = 0;
  }
  else {
    v154 = 0;
    v155 = (int*)&v223 + 1;
    v156 = (float*)&v192 + 1;
    do {
      if (v152 <= 0xFF) {
        v158 = *(v156 - 2);
        v157 = *(v156 - 1);
        v159 = *(v156 - 3);
        v160 = a7 + 80 * v152++;
        *v151 = v152;
        *(float*)v160 = v125;
        *(float*)(v160 + 4) = v126;
        *(_DWORD*)(v160 + 52) = -1;
        *(float*)(v160 + 24) = v176 + v157;
        v161 = *(v155 - 1);
        *(float*)(v160 + 16) = v175 + v159;
        *(float*)(v160 + 20) = v174 + v158;
        *(float*)(v160 + 8) = v127;
        *(_DWORD*)(v160 + 12) = v161;
        if (v152 <= 0xFF) {
          v163 = v156[1];
          v162 = v156[2];
          v164 = *v156;
          v165 = a7 + 80 * v152++;
          *v151 = v152;
          *(float*)v165 = v125;
          *(float*)(v165 + 4) = v126;
          *(_DWORD*)(v165 + 52) = -1;
          *(float*)(v165 + 24) = v176 + v162;
          v166 = *v155;
          *(float*)(v165 + 16) = v175 + v164;
          *(float*)(v165 + 20) = v174 + v163;
          *(float*)(v165 + 8) = v127;
          *(_DWORD*)(v165 + 12) = v166;
        }
      }
      v154 -= 2;
      v155 += 2;
      v156 += 6;
    } while (-(__int64)(v106 & 0xFFFFFFFE) != v154);
    v153 = -v154;
  }
  if ((v106 & 1) != 0 && v152 <= 0xFF) {
    v167 = *((_DWORD*)&v223 + v153);
    v168 = (float*)&v191 + 3 * v153;
    *v151 = v152 + 1;
    v169 = a7 + 80 * v152;
    *(float*)v169 = v125;
    *(float*)(v169 + 4) = v126;
    v170 = v168[1];
    v171 = v168[2];
    v172 = *v168;
    *(float*)(v169 + 8) = v127;
    *(_DWORD*)(v169 + 12) = v167;
    *(_DWORD*)(v169 + 52) = -1;
    *(float*)(v169 + 16) = v175 + v172;
    *(float*)(v169 + 20) = v174 + v170;
    *(float*)(v169 + 24) = v176 + v171;
  }
  return *(_DWORD*)(a7 + 20480) != 0;
}

#pragma GCC visibility pop
