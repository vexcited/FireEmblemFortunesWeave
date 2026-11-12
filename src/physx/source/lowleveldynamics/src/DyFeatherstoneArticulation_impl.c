#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

void GameRoutine_327da0(__int64, __int64, unsigned int, float*, float32x4_t*,
                        __int64, float*, float*);
__attribute__((swiftcall)) void
physx_Dy_FeatherstoneArticulation_pxcFsGetVelocity(PSEUDO_X8 x8_, __int64 a1,
                                                   unsigned int a2, __int64 a3);
float physx_Dy_setupComplexLimit_alt1(
    __int64 a1, __int64 a2, unsigned int a3, float* a4, __int64 a5, __int64 a6,
    float a7, float a8, float a9,
    float a10) __asm__("physx_Dy_setupComplexLimit");
unsigned __int64 GameRoutine_327da0_alt1(unsigned __int64 result, __int64,
                                         unsigned int, float*, float32x4_t*,
                                         unsigned int, float*,
                                         float*) __asm__("GameRoutine_327da0");
float physx_Dy_setupComplexLimit(unsigned __int64 a1, __int64 a2,
                                 unsigned int a3, float* a4, __int64 a5,
                                 __int64 a6, float a7, float a8, float a9,
                                 float a10);
__attribute__((swiftcall)) void GameRoutine_330100(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD, _QWORD,
                                                   _QWORD);
float physx_Dy_solveStaticConstraint(__int64, float*, float*, float*, _DWORD*,
                                     __int128*, char, __int64, float, float,
                                     long double, double, double, double,
                                     long double, char);
float physx_Dy_FeatherstoneArticulation_solveInternalJointConstraints(
    __int64 a1, char a2, char a3, char a4, float a5, float a6, long double a7,
    double a8, double a9, double a10, long double a11);
__attribute__((swiftcall)) void

physx_Dy_FeatherstoneArticulation_pxcFsGetVelocity(PSEUDO_X8 x8_, __int64 a1,
                                                   unsigned int a2, __int64 a3)
{
  _OWORD* a4 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
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
  unsigned int* v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  float* v39;
  unsigned int* v40;
  __int64 v41;
  float v42;
  float v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float* v47;
  float* v48;
  __int64 v49;
  float* v50;
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
  float* v62;
  float* v63;
  float* v64;
  float v65;
  float v66;
  float v67;
  float v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  float* v73;
  __int64 v74;
  float v75;
  __int64 v76;
  float* v77;
  float* v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float* v84;
  float* v85;
  __int64 v86;
  float v87;
  float v88;
  float v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  float* v99;
  unsigned int* v100;
  __int64 v101;
  float v102;
  float v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  float* v107;
  float* v108;
  __int64 v109;
  float* v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float v117;
  float v118;
  float v119;
  float v120;
  float v121;
  float* v122;
  float* v123;
  float* v124;
  float v125;
  float v126;
  float v127;
  float v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  float* v133;
  __int64 v134;
  float v135;
  __int64 v136;
  float* v137;
  float* v138;
  float v139;
  float v140;
  float v141;
  float v142;
  float v143;
  float* v144;
  float* v145;
  __int64 v146;
  float v147;
  float v148;
  float v149;
  __int64 v150;
  unsigned int v151;
  int v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  float* v157;
  float* v158;
  unsigned int v159;
  float v160;
  float v161;
  float v162;
  float v163;
  float v164;
  float v165;
  float v166;
  float v167;
  float* v168;
  unsigned int v169;
  float* v170;
  float v171;
  float v172;
  float* v173;
  float result;
  __int128 v175;
  __int128 v176;
  struct {
    __int64 v179;
    int v180;
  } v179_;
  _BYTE v181[4];
  __int64 v182;
  _QWORD v183[2];

  v4 = 0x0.0p+0f;
  v5 = 0x0.0p+0f;
  v6 = 0x0.0p+0f;
  v7 = 0x0.0p+0f;
  v8 = 0x0.0p+0f;
  v9 = 0x0.0p+0f;
  if ((**(_BYTE**)(a1 + 1032) & 1) == 0) {
    v10 = *(float*)(a1 + 176);
    v11 = *(float*)(a1 + 180);
    v12 = *(float*)(a1 + 160);
    v13 = *(float*)(a1 + 164);
    v14 = *(float*)(a1 + 1116);
    v15 = *(float*)(a1 + 1104);
    v16 = *(float*)(a1 + 1108);
    v17 = *(float*)(a1 + 1096);
    v18 = *(float*)(a1 + 1112);
    v19 = *(float*)(a1 + 1100);
    v20 = *(float*)(a1 + 168);
    v21 = *(float*)(a1 + 1128);
    v22 = *(float*)(a1 + 1120);
    v23 = (float)-(float)(PSEUDO_UNFUSED(v13 * v18)) -
          (float)(PSEUDO_UNFUSED(v12 * v19));
    v24 = *(float*)(a1 + 1124);
    v25 = *(float*)(a1 + 184);
    v26 = (float)((float)-(float)(PSEUDO_UNFUSED(v11 * v18)) -
                  (float)(v16 * v10)) -
          (float)(v14 * v25);
    v4 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v13 * v16)) -
                         (float)(PSEUDO_UNFUSED(v12 * v17))) -
                 (float)(PSEUDO_UNFUSED(v20 * v22))) +
         (float)((float)((float)-(float)(PSEUDO_UNFUSED(v11 *
                                                        *(float*)(a1 + 1144))) -
                         (float)(PSEUDO_UNFUSED(v10 * *(float*)(a1 + 1132)))) -
                 (float)(PSEUDO_UNFUSED(v25 * *(float*)(a1 + 1156))));
    v5 = (float)(v23 - (float)(PSEUDO_UNFUSED(v20 * v24))) +
         (float)((float)((float)-(float)(PSEUDO_UNFUSED(v11 *
                                                        *(float*)(a1 + 1148))) -
                         (float)(PSEUDO_UNFUSED(v10 * *(float*)(a1 + 1136)))) -
                 (float)(PSEUDO_UNFUSED(v25 * *(float*)(a1 + 1160))));
    v6 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v13 * v14)) -
                         (float)(PSEUDO_UNFUSED(v12 * v15))) -
                 (float)(PSEUDO_UNFUSED(v20 * v21))) +
         (float)((float)((float)-(float)(PSEUDO_UNFUSED(v11 *
                                                        *(float*)(a1 + 1152))) -
                         (float)(PSEUDO_UNFUSED(v10 * *(float*)(a1 + 1140)))) -
                 (float)(PSEUDO_UNFUSED(v25 * *(float*)(a1 + 1164))));
    v7 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v11 * v19)) -
                         (float)(v17 * v10)) -
                 (float)(v15 * v25)) +
         (float)((float)((float)-(float)(PSEUDO_UNFUSED(v13 *
                                                        *(float*)(a1 + 1180))) -
                         (float)(PSEUDO_UNFUSED(v12 * *(float*)(a1 + 1168)))) -
                 (float)(PSEUDO_UNFUSED(v20 * *(float*)(a1 + 1192))));
    v8 = v26 +
         (float)((float)((float)-(float)(PSEUDO_UNFUSED(v13 *
                                                        *(float*)(a1 + 1184))) -
                         (float)(PSEUDO_UNFUSED(v12 * *(float*)(a1 + 1172)))) -
                 (float)(PSEUDO_UNFUSED(v20 * *(float*)(a1 + 1196))));
    v9 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v11 * v24)) -
                         (float)(v22 * v10)) -
                 (float)(v21 * v25)) +
         (float)((float)((float)-(float)(PSEUDO_UNFUSED(v13 *
                                                        *(float*)(a1 + 1188))) -
                         (float)(PSEUDO_UNFUSED(v12 * *(float*)(a1 + 1176)))) -
                 (float)(PSEUDO_UNFUSED(v20 * *(float*)(a1 + 1200))));
  }
  v27 = (unsigned int*)(*(_QWORD*)(a1 + 928) + 40LL * a2);
  v28 = *((unsigned __int16*)v27 + 4);
  if (*((_WORD*)v27 + 4) != 0) {
    v29 = v28 - 1;
  }
  else {
    v29 = 0;
  }
  v30 = *(_QWORD*)(a1 + 944) + 4LL * *v27;
  if ((_DWORD)v29 != 0) {
    v31 = *(_QWORD*)(a1 + 704);
    v32 = *(_QWORD*)(a1 + 720);
    v33 = *(_QWORD*)(a1 + 592);
    v34 = 0;
    v35 = *(_QWORD*)(a1 + 968);
    v36 = *(_QWORD*)(a1 + 832);
    v37 = *(_QWORD*)(a1 + 800);
    while (1) {
      v38 = *(unsigned int*)(v30 + 4 * v34);
      v39 = (float*)(v36 + 12LL * (unsigned int)v38);
      v40 = (unsigned int*)(v35 + 8 * v38);
      v41 = *((unsigned __int8*)v40 + 4);
      v42 = v39[2];
      v43 = v39[1];
      v7 = v7 + (float)((float)(PSEUDO_UNFUSED(v5 * v42)) - (float)(v43 * v6));
      v8 = v8 + (float)((float)(PSEUDO_UNFUSED(v6 * *v39)) - (float)(v42 * v4));
      v9 = v9 + (float)((float)(PSEUDO_UNFUSED(v4 * v43)) - (float)(*v39 * v5));
      if (*((_BYTE*)v40 + 4) == 0) {
        goto LABEL_8;
      }
      v44 = *v40;
      if ((unsigned int)v41 < 4) {
        break;
      }
      v47 = (float*)(v32 + 64 + 32 * v44);
      v48 = (float*)(v33 + 8 + 4 * v44);
      v49 = 0;
      v50 = (float*)&v182 + 1;
      do {
        v49 -= 4;
        v51 = (float)(PSEUDO_UNFUSED(v5 * v47[5])) + (float)(v47[4] * v4);
        v52 = v47[6];
        v53 = *(v48 - 1) -
              (float)((float)((float)((float)(PSEUDO_UNFUSED(v5 * *(v47 - 3))) +
                                      (float)(*(v47 - 4) * v4)) +
                              (float)(*(v47 - 2) * v6)) +
                      (float)((float)((float)(PSEUDO_UNFUSED(v8 * *(v47 - 7))) +
                                      (float)(*(v47 - 8) * v7)) +
                              (float)(*(v47 - 6) * v9)));
        *(v50 - 2) =
            *(v48 - 2) -
            (float)((float)((float)((float)(PSEUDO_UNFUSED(v5 * *(v47 - 11))) +
                                    (float)(*(v47 - 12) * v4)) +
                            (float)(*(v47 - 10) * v6)) +
                    (float)((float)((float)(PSEUDO_UNFUSED(v8 * *(v47 - 15))) +
                                    (float)(*(v47 - 16) * v7)) +
                            (float)(*(v47 - 14) * v9)));
        *(v50 - 1) = v53;
        v54 = v47[10];
        v55 = (float)(v51 + (float)(v52 * v6)) +
              (float)((float)((float)(PSEUDO_UNFUSED(v8 * v47[1])) +
                              (float)(*v47 * v7)) +
                      (float)(v47[2] * v9));
        v56 = *v48;
        v57 = v48[1];
        v48 += 4;
        v58 = v56 - v55;
        v59 = (float)((float)(PSEUDO_UNFUSED(v5 * v47[13])) +
                      (float)(v47[12] * v4)) +
              (float)(v47[14] * v6);
        v60 = v47[8];
        v61 = v47[9];
        v47 += 32;
        *v50 = v58;
        v50[1] =
            v57 -
            (float)(v59 + (float)((float)((float)(PSEUDO_UNFUSED(v8 * v61)) +
                                          (float)(v60 * v7)) +
                                  (float)(v54 * v9)));
        v50 += 4;
      } while (-(__int64)((unsigned __int8)v41 & 0xFC) != v49);
      v45 = -v49;
      v46 = v41 & 3;
      if ((v41 & 3) != 0) {
        goto LABEL_16;
      }
    LABEL_18:
      if ((_DWORD)v41 != 0) {
        v69 = v31 + 36LL * (unsigned int)v38;
        v70 = 0;
        v71 = v37 + 24LL * (unsigned int)v44;
        v72 = v31 + 48 + 36LL * (unsigned int)v38;
        while ((unsigned int)v41 < 8) {
          v74 = 0;
          v75 = 0x0.0p+0f;
          if ((v41 & 7) != 0) {
            goto LABEL_27;
          }
        LABEL_20:
          v73 = (float*)(v71 + 24 * v70++);
          v72 += 4;
          v69 += 4;
          v4 = v4 + (float)(PSEUDO_UNFUSED(v75 * *v73));
          v5 = v5 + (float)(PSEUDO_UNFUSED(v75 * v73[1]));
          v6 = v6 + (float)(PSEUDO_UNFUSED(v75 * v73[2]));
          v7 = v7 + (float)(PSEUDO_UNFUSED(v75 * v73[3]));
          v8 = v8 + (float)(PSEUDO_UNFUSED(v75 * v73[4]));
          v9 = v9 + (float)(PSEUDO_UNFUSED(v75 * v73[5]));
          if (v70 == v41) {
            goto LABEL_8;
          }
        }
        v75 = 0x0.0p+0f;
        v76 = 0;
        v77 = (float*)v72;
        v78 = (float*)v183 + 1;
        do {
          v76 -= 8;
          v79 = (float)((float)((float)((float)((float)(v75 +
                                                        (float)(*(v77 - 12) *
                                                                *(v78 - 4))) +
                                                (float)(*(v77 - 9) *
                                                        *(v78 - 3))) +
                                        (float)(*(v77 - 6) * *(v78 - 2))) +
                                (float)(*(v77 - 3) * *(v78 - 1))) +
                        (float)(*v77 * *v78)) +
                (float)(v77[3] * v78[1]);
          v80 = v78[2];
          v81 = v78[3];
          v78 += 8;
          v82 = v79 + (float)(v77[6] * v80);
          v83 = v77[9];
          v77 += 24;
          v75 = v82 + (float)(v83 * v81);
        } while (-(__int64)((unsigned __int8)v41 & 0xF8) != v76);
        v74 = -v76;
        if ((v41 & 7) == 0) {
          goto LABEL_20;
        }
      LABEL_27:
        v84 = (float*)&v181[4 * v74];
        v85 = (float*)(v69 + 12 * v74);
        v86 = v41 & 7;
        do {
          v87 = *v85;
          v85 += 3;
          v88 = v87;
          v89 = *v84++;
          --v86;
          v75 = v75 + (float)(v88 * v89);
        } while (v86 != 0);
        goto LABEL_20;
      }
    LABEL_8:
      if (++v34 == v29) {
        goto LABEL_30;
      }
    }
    v45 = 0;
    v46 = v41 & 3;
    if ((v41 & 3) == 0) {
      goto LABEL_18;
    }
  LABEL_16:
    v62 = (float*)&v181[4 * v45];
    v63 = (float*)(v33 + 4 * v45 + 4 * v44);
    v64 = (float*)(v32 + 16 + 32 * v45 + 32 * v44);
    do {
      --v46;
      v65 = (float)((float)(PSEUDO_UNFUSED(v5 * v64[1])) + (float)(*v64 * v4)) +
            (float)(v64[2] * v6);
      v66 = (float)(PSEUDO_UNFUSED(v8 * *(v64 - 3))) + (float)(*(v64 - 4) * v7);
      v67 = *(v64 - 2);
      v64 += 8;
      v68 = *v63++;
      *v62++ = v68 - (float)(v65 + (float)(v66 + (float)(v67 * v9)));
    } while (v46 != 0);
    goto LABEL_18;
  }
LABEL_30:
  v179_.v180 = 0;
  v179_.v179 = 0;
  if ((unsigned int)v29 < v28) {
    v90 = *(_QWORD*)(a1 + 704);
    v91 = *(_QWORD*)(a1 + 720);
    v92 = *(_QWORD*)(a1 + 592);
    v93 = *(_QWORD*)(a1 + 968);
    v94 = *(_QWORD*)(a1 + 832);
    v95 = *(_QWORD*)(a1 + 800);
    v96 = v91 + 64;
    v97 = v91 + 16;
    while (1) {
      v98 = *(unsigned int*)(v30 + 4 * v29);
      v99 = (float*)(v94 + 12LL * (unsigned int)v98);
      v100 = (unsigned int*)(v93 + 8 * v98);
      v101 = *((unsigned __int8*)v100 + 4);
      v102 = v99[2];
      v103 = v99[1];
      v7 =
          v7 + (float)((float)(PSEUDO_UNFUSED(v5 * v102)) - (float)(v103 * v6));
      v8 =
          v8 + (float)((float)(PSEUDO_UNFUSED(v6 * *v99)) - (float)(v102 * v4));
      v9 =
          v9 + (float)((float)(PSEUDO_UNFUSED(v4 * v103)) - (float)(*v99 * v5));
      if (*((_BYTE*)v100 + 4) == 0) {
        goto LABEL_32;
      }
      v104 = *v100;
      if ((unsigned int)v101 < 4) {
        break;
      }
      v107 = (float*)(v96 + 32 * v104);
      v108 = (float*)(v92 + 8 + 4 * v104);
      v109 = 0;
      v110 = (float*)&v182 + 1;
      do {
        v109 -= 4;
        v111 = (float)(PSEUDO_UNFUSED(v5 * v107[5])) + (float)(v107[4] * v4);
        v112 = v107[6];
        v113 =
            *(v108 - 1) -
            (float)((float)((float)((float)(PSEUDO_UNFUSED(v5 * *(v107 - 3))) +
                                    (float)(*(v107 - 4) * v4)) +
                            (float)(*(v107 - 2) * v6)) +
                    (float)((float)((float)(PSEUDO_UNFUSED(v8 * *(v107 - 7))) +
                                    (float)(*(v107 - 8) * v7)) +
                            (float)(*(v107 - 6) * v9)));
        *(v110 - 2) =
            *(v108 - 2) -
            (float)((float)((float)((float)(PSEUDO_UNFUSED(v5 * *(v107 - 11))) +
                                    (float)(*(v107 - 12) * v4)) +
                            (float)(*(v107 - 10) * v6)) +
                    (float)((float)((float)(PSEUDO_UNFUSED(v8 * *(v107 - 15))) +
                                    (float)(*(v107 - 16) * v7)) +
                            (float)(*(v107 - 14) * v9)));
        *(v110 - 1) = v113;
        v114 = v107[10];
        v115 = (float)(v111 + (float)(v112 * v6)) +
               (float)((float)((float)(PSEUDO_UNFUSED(v8 * v107[1])) +
                               (float)(*v107 * v7)) +
                       (float)(v107[2] * v9));
        v116 = *v108;
        v117 = v108[1];
        v108 += 4;
        v118 = v116 - v115;
        v119 = (float)((float)(PSEUDO_UNFUSED(v5 * v107[13])) +
                       (float)(v107[12] * v4)) +
               (float)(v107[14] * v6);
        v120 = v107[8];
        v121 = v107[9];
        v107 += 32;
        *v110 = v118;
        v110[1] =
            v117 -
            (float)(v119 + (float)((float)((float)(PSEUDO_UNFUSED(v8 * v121)) +
                                           (float)(v120 * v7)) +
                                   (float)(v114 * v9)));
        v110 += 4;
      } while (-(__int64)((unsigned __int8)v101 & 0xFC) != v109);
      v105 = -v109;
      v106 = v101 & 3;
      if ((v101 & 3) != 0) {
        goto LABEL_40;
      }
    LABEL_42:
      if ((_DWORD)v101 != 0) {
        v129 = v90 + 36LL * (unsigned int)v98;
        v130 = 0;
        v131 = v95 + 24LL * (unsigned int)v104;
        v132 = v90 + 48 + 36LL * (unsigned int)v98;
        while ((unsigned int)v101 < 8) {
          v134 = 0;
          v135 = 0x0.0p+0f;
          if ((v101 & 7) != 0) {
            goto LABEL_51;
          }
        LABEL_53:
          if (a3 != 0) {
            *((float*)&v179_.v179 + v130) =
                v135 + *((float*)&v179_.v179 + v130);
          }
          v133 = (float*)(v131 + 24 * v130++);
          v132 += 4;
          v129 += 4;
          v4 = v4 + (float)(PSEUDO_UNFUSED(v135 * *v133));
          v5 = v5 + (float)(PSEUDO_UNFUSED(v135 * v133[1]));
          v6 = v6 + (float)(PSEUDO_UNFUSED(v135 * v133[2]));
          v7 = v7 + (float)(PSEUDO_UNFUSED(v135 * v133[3]));
          v8 = v8 + (float)(PSEUDO_UNFUSED(v135 * v133[4]));
          v9 = v9 + (float)(PSEUDO_UNFUSED(v135 * v133[5]));
          if (v130 == v101) {
            goto LABEL_32;
          }
        }
        v135 = 0x0.0p+0f;
        v136 = 0;
        v137 = (float*)v132;
        v138 = (float*)v183 + 1;
        do {
          v136 -= 8;
          v139 = (float)((float)((float)((float)((float)(v135 +
                                                         (float)(*(v137 - 12) *
                                                                 *(v138 - 4))) +
                                                 (float)(*(v137 - 9) *
                                                         *(v138 - 3))) +
                                         (float)(*(v137 - 6) * *(v138 - 2))) +
                                 (float)(*(v137 - 3) * *(v138 - 1))) +
                         (float)(*v137 * *v138)) +
                 (float)(v137[3] * v138[1]);
          v140 = v138[2];
          v141 = v138[3];
          v138 += 8;
          v142 = v139 + (float)(v137[6] * v140);
          v143 = v137[9];
          v137 += 24;
          v135 = v142 + (float)(v143 * v141);
        } while (-(__int64)((unsigned __int8)v101 & 0xF8) != v136);
        v134 = -v136;
        if ((v101 & 7) == 0) {
          goto LABEL_53;
        }
      LABEL_51:
        v144 = (float*)&v181[4 * v134];
        v145 = (float*)(v129 + 12 * v134);
        v146 = v101 & 7;
        do {
          v147 = *v145;
          v145 += 3;
          v148 = v147;
          v149 = *v144++;
          --v146;
          v135 = v135 + (float)(v148 * v149);
        } while (v146 != 0);
        goto LABEL_53;
      }
    LABEL_32:
      if ((_DWORD)++v29 == v28) {
        goto LABEL_55;
      }
    }
    v105 = 0;
    v106 = v101 & 3;
    if ((v101 & 3) == 0) {
      goto LABEL_42;
    }
  LABEL_40:
    v122 = (float*)&v181[4 * v105];
    v123 = (float*)(v92 + 4 * v105 + 4 * v104);
    v124 = (float*)(v97 + 32 * v105 + 32 * v104);
    do {
      --v106;
      v125 =
          (float)((float)(PSEUDO_UNFUSED(v5 * v124[1])) + (float)(*v124 * v4)) +
          (float)(v124[2] * v6);
      v126 =
          (float)(PSEUDO_UNFUSED(v8 * *(v124 - 3))) + (float)(*(v124 - 4) * v7);
      v127 = *(v124 - 2);
      v124 += 8;
      v128 = *v123++;
      *v122++ = v128 - (float)(v125 + (float)(v126 + (float)(v127 * v9)));
    } while (v106 != 0);
    goto LABEL_42;
  }
LABEL_55:
  if (a3 != 0) {
    v150 = *(_QWORD*)(a1 + 968) + 8LL * a2;
    v151 = *(unsigned __int8*)(v150 + 4);
    if (*(_BYTE*)(v150 + 4) != 0) {
      v152 = *(_DWORD*)v150;
      v153 = *(_QWORD*)(a1 + 240);
      v154 = v151 & 7;
      if (v151 >= 8) {
        v156 = (unsigned __int8)v151 & 0xF8;
        v157 = (float*)(a3 + 16);
        v155 = 0;
        v158 = (float*)&v182;
        do {
          v159 = v152 + v155;
          v160 = *(v158 - 3);
          v155 += 8;
          *(v157 - 4) = *(float*)(v153 + 4LL * v159) + *(v158 - 4);
          *(v157 - 3) = *(float*)(v153 + 4LL * (v159 + 1)) + v160;
          v161 = *(v158 - 1);
          *(v157 - 2) = *(float*)(v153 + 4LL * (v159 + 2)) + *(v158 - 2);
          v162 = *(float*)(v153 + 4LL * (v159 + 3)) + v161;
          v163 = *v158;
          v164 = v158[1];
          *(v157 - 1) = v162;
          *v157 = *(float*)(v153 + 4LL * (v159 + 4)) + v163;
          v165 = *(float*)(v153 + 4LL * (v159 + 5)) + v164;
          v166 = v158[2];
          v167 = v158[3];
          v158 += 8;
          v157[1] = v165;
          v157[2] = *(float*)(v153 + 4LL * (v159 + 6)) + v166;
          v157[3] = *(float*)(v153 + 4LL * (v159 + 7)) + v167;
          v157 += 8;
        } while (v156 != v155);
      }
      else {
        v155 = 0;
      }
      if (v154 != 0) {
        v168 = (float*)(a3 + 4 * v155);
        v169 = v152 + v155;
        v170 = (float*)&v179_.v179 + v155;
        do {
          v171 = *(float*)(v153 + 4LL * v169);
          v172 = *v170++;
          ++v169;
          --v154;
          *v168++ = v171 + v172;
        } while (v154 != 0);
      }
    }
  }
  v173 = (float*)(*(_QWORD*)(a1 + 352) + 32LL * a2);
  result = v4 + *v173;
  *(float*)&v175 = v7 + v173[4];
  *(float*)&v176 = result;
  *((float*)&v175 + 1) = v8 + v173[5];
  *((float*)&v176 + 1) = v5 + v173[1];
  *((_QWORD*)&v175 + 1) = COERCE_UNSIGNED_INT(v9 + v173[6]);
  *((_QWORD*)&v176 + 1) = COERCE_UNSIGNED_INT(v6 + v173[2]);
  *a4 = v175;
  a4[1] = v176;
  {
    result;
    return;
  }
}

float physx_Dy_setupComplexLimit(unsigned __int64 a1, __int64 a2,
                                 unsigned int a3, float* a4, __int64 a5,
                                 __int64 a6, float a7, float a8, float a9,
                                 float a10)
{
  float v12;
  float v13;
  float v19;
  unsigned int v20;
  __int128 v22;
  __int128 v23;
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
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  unsigned __int32 v38;
  float v39;
  _QWORD v41[4];
  _QWORD v42[4];
  struct {
    float v43[4];
    float v44;
    float v45;
    float v46;
  } v43_;
  struct {
    float32x4_t v47;
    float v48;
    float v49;
    float v50;
  } v47_;

  v12 = *a4;
  v13 = a4[1];
  v19 = a4[2];
  v20 = *(_DWORD*)(a1 + 40LL * a3 + 32);
  *(_OWORD*)v41 = (__typeof__(*(_OWORD*)v41)){0};
  *(_QWORD*)&v22 = __PAIR64__(LODWORD(v13), LODWORD(v12));
  *((_QWORD*)&v22 + 1) = LODWORD(v19);
  *(_OWORD*)v42 = (__typeof__(*(_OWORD*)v42)){0};
  *(_OWORD*)&v42[2] = v22;
  *(float*)&v23 = -v12;
  *((float*)&v23 + 1) = -v13;
  *((_QWORD*)&v23 + 1) = COERCE_UNSIGNED_INT(-v19);
  *(_OWORD*)&v41[2] = v23;
  GameRoutine_327da0_alt1(a1, a2, v20, (float*)v42, &v47_.v47, a3, (float*)v41,
                          v43_.v43);
  v24 = v47_.v48;
  v25 = v47_.v49;
  v26 = *a4;
  v27 = a4[1];
  v28 = v43_.v44;
  v29 = v43_.v45;
  v30 = v47_.v50;
  v31 = a4[2];
  v32 = v43_.v46;
  v33 = (float)((float)((float)(PSEUDO_UNFUSED(v47_.v49 * v27)) +
                        (float)(v47_.v48 * *a4)) +
                (float)(v47_.v50 * v31)) -
        (float)((float)((float)(PSEUDO_UNFUSED(v27 * v43_.v45)) +
                        (float)(v43_.v44 * *a4)) +
                (float)(v43_.v46 * v31));
  v34 = 0x0.0p+0f;
  if (v33 > 0x1.1979980000000p-40f) {
    v34 = 0x1.0000000000000p+0f / (float)(v33 + a10);
  }
  *(_QWORD*)a5 = 0;
  *(_DWORD*)(a5 + 8) = 0;
  *(float*)(a5 + 16) = v27;
  *(float*)(a5 + 20) = v31;
  v35 = LANES128(v47_.v47).n128_u64[0];
  *(float*)(a5 + 12) = v26;
  v36 = *(_QWORD*)a4;
  v37 = *((_DWORD*)a4 + 2);
  *(float*)(a5 + 52) = v25;
  *(float*)(a5 + 56) = v30;
  v38 = LANES128(v47_.v47).n128_u32[2];
  *(float*)(a5 + 100) = v33;
  *(_QWORD*)(a5 + 24) = 0;
  *(_DWORD*)(a5 + 32) = 0;
  *(float*)(a5 + 76) = v29;
  *(float*)(a5 + 80) = v32;
  *(_QWORD*)(a5 + 36) = v36;
  *(_QWORD*)(a5 + 60) = v35;
  *(_DWORD*)(a5 + 44) = v37;
  *(float*)(a5 + 48) = v24;
  *(_DWORD*)(a5 + 68) = v38;
  *(float*)(a5 + 72) = v28;
  *(_BYTE*)(a5 + 140) = 1;
  v39 = v43_.v43[1];
  *(float*)(a5 + 84) = v43_.v43[0];
  *(float*)(a5 + 88) = v39;
  *(float*)(a5 + 92) = v43_.v43[2];
  *(float*)(a5 + 96) = v34;
  *(_QWORD*)(a6 + 8) = 0;
  *(float*)a6 = a7 - a8;
  *(float*)(a6 + 4) = a9 - a7;
  return a7 - a8;
}

float physx_Dy_FeatherstoneArticulation_solveInternalJointConstraints(
    __int64 a1, char a2, char a3, char a4, float a5, float a6, long double a7,
    double a8, double a9, double a10, long double a11)
{
  int* v11;
  char* v12;
  int* v15;
  __int64 v16;
  float v17;
  int v18;
  float v22;
  char v23;
  unsigned int* v24;
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
  float v51;
  float v52;
  float v53;
  float v54;
  float v55;
  int v56;
  float v57;
  _DWORD* v58;
  __int128* v59;
  unsigned int v60;
  __int64 v61;
  char v62;
  unsigned int v63;
  int v64;
  _DWORD* v65;
  __int128* v66;
  __int64 v67;
  unsigned int v68;
  unsigned int v69;
  unsigned __int64 v70;
  unsigned __int16 v71;
  float v72;
  float v73;
  unsigned __int64 v74;
  int v75;
  unsigned int v76;
  unsigned __int64 v77;
  float v78;
  unsigned __int64 v79;
  float v80;
  float v81;
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
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float result;
  unsigned int* v111;
  float v112;
  char v113;
  int* v114;
  struct {
    __int64 v116;
    float v117;
    char gap60_[4];
    float v118;
    float v119;
    float v120;
  } v116_;
  int v121;
  int v122;
  struct {
    _DWORD v123[4];
    char v124;
    char v125;
    char v126;
  } v123_;
  struct {
    unsigned __int64 v127;
    __int64 v128;
    unsigned __int64 v129;
    __int64 v130;
  } v127_;
  struct {
    unsigned __int64 v131;
    __int64 v132;
    unsigned __int64 v133;
    __int64 v134;
  } v131_;
  float v135[12];

  v11 = *(int**)(a1 + 864);
  v12 = *(char**)(a1 + 1032);
  v15 = *(int**)(a1 + 848);
  v16 = *(_QWORD*)(a1 + 928);
  v17 = 0x0.0p+0f;
  v18 = LODWORD(a8);
  v131_.v131 = 0;
  v131_.v132 = 0;
  v131_.v133 = 0;
  v131_.v134 = 0;
  v22 = *(float*)&a7;
  v114 = v11;
  v23 = *v12;
  v24 = *(unsigned int**)(a1 + 880);
  *(_QWORD*)&a7 = 0;
  v25 = 0x0.0p+0f;
  v26 = 0x0.0p+0f;
  v27 = 0x0.0p+0f;
  v111 = *(unsigned int**)(a1 + 896);
  v113 = v23;
  v28 = *(_QWORD*)(a1 + 352);
  if ((a2 & 1) != 0) {
    v29 = 0x0.0p+0f;
  }
  else {
    v29 = -0x1.fffffe0000000p+127f;
  }
  v30 = 0x0.0p+0f;
  if ((v23 & 1) == 0) {
    v31 = *(float*)(a1 + 176);
    v32 = *(float*)(a1 + 180);
    v33 = *(float*)(a1 + 160);
    v34 = *(float*)(a1 + 164);
    v35 = *(float*)(a1 + 1116);
    v36 = *(float*)(a1 + 1104);
    v37 = *(float*)(a1 + 1112);
    v38 = *(float*)(a1 + 1100);
    v39 = *(float*)(a1 + 1108);
    v40 = *(float*)(a1 + 1096);
    v41 = *(float*)(a1 + 168);
    v42 = *(float*)(a1 + 1120);
    v43 = *(float*)(a1 + 1124);
    v44 = (float)-(float)(PSEUDO_UNFUSED(v34 * v39)) -
          (float)(PSEUDO_UNFUSED(v33 * v40));
    v45 = *(float*)(a1 + 1128);
    v46 = *(float*)(a1 + 184);
    v47 = (float)((float)-(float)(PSEUDO_UNFUSED(v32 * v37)) -
                  (float)(v39 * v31)) -
          (float)(v35 * v46);
    v48 = *(float*)(a1 + 1188);
    v26 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v34 * v37)) -
                          (float)(PSEUDO_UNFUSED(v33 * v38))) -
                  (float)(PSEUDO_UNFUSED(v41 * v43))) +
          (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                              v32 * *(float*)(a1 + 1148))) -
                          (float)(PSEUDO_UNFUSED(v31 * *(float*)(a1 + 1136)))) -
                  (float)(PSEUDO_UNFUSED(v46 * *(float*)(a1 + 1160))));
    v49 = *(float*)(a1 + 1176);
    v50 = -(float)(v34 * *(float*)(a1 + 1184));
    v27 = (float)(v44 - (float)(PSEUDO_UNFUSED(v41 * v42))) +
          (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                              v32 * *(float*)(a1 + 1144))) -
                          (float)(PSEUDO_UNFUSED(v31 * *(float*)(a1 + 1132)))) -
                  (float)(PSEUDO_UNFUSED(v46 * *(float*)(a1 + 1156))));
    v51 = *(float*)(a1 + 1172);
    v25 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v34 * v35)) -
                          (float)(PSEUDO_UNFUSED(v33 * v36))) -
                  (float)(PSEUDO_UNFUSED(v41 * v45))) +
          (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                              v32 * *(float*)(a1 + 1152))) -
                          (float)(PSEUDO_UNFUSED(v31 * *(float*)(a1 + 1140)))) -
                  (float)(PSEUDO_UNFUSED(v46 * *(float*)(a1 + 1164))));
    v52 = *(float*)(a1 + 1168);
    v53 = *(float*)(a1 + 1180);
    v131_.v131 = __PAIR64__(LODWORD(v26), LODWORD(v27));
    *(float*)&v131_.v132 = v25;
    *(float*)&a7 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v32 * v38)) -
                                   (float)(v40 * v31)) -
                           (float)(v36 * v46)) +
                   (float)((float)((float)-(float)(PSEUDO_UNFUSED(v34 * v53)) -
                                   (float)(PSEUDO_UNFUSED(v33 * v52))) -
                           (float)(PSEUDO_UNFUSED(v41 * *(float*)(a1 + 1192))));
    v30 = v47 + (float)((float)(v50 - (float)(PSEUDO_UNFUSED(v33 * v51))) -
                        (float)(PSEUDO_UNFUSED(v41 * *(float*)(a1 + 1196))));
    v54 = (float)((float)-(float)(PSEUDO_UNFUSED(v34 * v48)) -
                  (float)(PSEUDO_UNFUSED(v33 * v49))) -
          (float)(PSEUDO_UNFUSED(v41 * *(float*)(a1 + 1200)));
    *(float*)&v131_.v133 = *(float*)&a7;
    *((float*)&v131_.v133 + 1) = v30;
    v17 = (float)((float)((float)-(float)(PSEUDO_UNFUSED(v32 * v43)) -
                          (float)(v42 * v31)) -
                  (float)(v45 * v46)) +
          v54;
    *(float*)&v131_.v134 = v17;
  }
  LODWORD(a11) = *(_DWORD*)(v28 + 16);
  v55 = v27 + *(float*)v28;
  *(float*)&a9 = v26 + *(float*)(v28 + 4);
  v56 = *v15;
  *(float*)&a10 = v25 + *(float*)(v28 + 8);
  *(float*)&a7 = *(float*)&a7 + *(float*)&a11;
  v57 = v30 + *(float*)(v28 + 20);
  v135[3] = 0x0.0p+0f;
  v135[7] = 0x0.0p+0f;
  v127_.v127 = 0;
  v127_.v128 = 0;
  v127_.v129 = 0;
  v127_.v130 = 0;
  v135[0] = v55;
  v135[1] = *(float*)&a9;
  LODWORD(a8) = *(_DWORD*)(v28 + 24);
  v135[2] = *(float*)&a10;
  v135[4] = *(float*)&a7;
  v135[5] = v57;
  v135[6] = v17 + *(float*)&a8;
  if (v56 != 0) {
    v58 = *(_DWORD**)(a1 + 608);
    v59 = *(__int128**)(a1 + 1080);
    v60 = *v24;
    if ((a2 & 1) != 0) {
      v61 = 1284;
    }
    else {
      v61 = 1308;
    }
    v62 = (a2 ^ 1) & 1;
    do {
      v63 = v60 + 1;
      physx_Dy_solveStaticConstraint(
          *(_QWORD*)(a1 + 1248) + ((unsigned __int64)v60 << 6), v135,
          (float*)&v127_.v127, (float*)&v131_.v131, v58, v59, a3 & 1, a1 + v61,
          v22, v29, a7, a8, a9, a10, a11, v62);
      --v56;
      v60 = v63;
    } while (v56 != 0);
  }
  v64 = *v114;
  if (*v114 != 0) {
    v65 = *(_DWORD**)(a1 + 608);
    v66 = *(__int128**)(a1 + 1080);
    if ((a2 & 1) != 0) {
      v67 = 1284;
    }
    else {
      v67 = 1308;
    }
    v68 = *v111;
    do {
      v69 = v68 + 1;
      physx_Dy_solveStaticConstraint(
          *(_QWORD*)(a1 + 1232) + ((unsigned __int64)v68 << 6), v135,
          (float*)&v127_.v127, (float*)&v131_.v131, v65, v66, a3 & 1, a1 + v67,
          v22, v29, a7, a8, a9, a10, a11, (a2 ^ 1) & 1);
      --v64;
      v68 = v69;
    } while (v64 != 0);
  }
  *(float*)v123_.v123 = a5;
  *(float*)&v123_.v123[1] = a6;
  *(float*)&v123_.v123[2] = v22;
  v123_.v123[3] = v18;
  v70 = v127_.v127;
  v123_.v124 = a3 & 1;
  v71 = *(_WORD*)(v16 + 10);
  v72 = *(float*)&v127_.v128;
  v73 = *(float*)&v127_.v130;
  v74 = v127_.v129;
  v123_.v125 = a2 & 1;
  v121 = 0;
  v122 = 0;
  v75 = v71;
  v123_.v126 = a4 & 1;
  if (v71 != 0) {
    v76 = *(_DWORD*)(v16 + 4);
    if ((v113 & 1) != 0 || v71 == 1) {
      do {
        GameRoutine_330100((void*)(&v116_.v116), a1, v123_.v123, v76,
                           &v131_.v131, &v122, &v121);
        --v75;
        ++v76;
        v72 = v116_.v117 + v72;
        v73 = v116_.v120 + v73;
        v70 = __PAIR64__(*((float*)&v116_.v116 + 1) + *((float*)&v70 + 1),
                         *(float*)&v116_.v116 + *(float*)&v70);
        v74 = __PAIR64__(v116_.v119 + *((float*)&v74 + 1),
                         v116_.v118 + *(float*)&v74);
      } while (v75 != 0);
    }
    else {
      v77 = v131_.v131;
      v78 = *(float*)&v131_.v132;
      v79 = v131_.v133;
      v80 = *(float*)&v131_.v134;
      do {
        v112 = v78;
        GameRoutine_330100((void*)(&v116_.v116), a1, v123_.v123, v76,
                           &v131_.v131, &v122, &v121);
        v81 = *(float*)(a1 + 1108);
        v82 = *(float*)(a1 + 1096);
        --v75;
        ++v76;
        v83 = *(float*)(a1 + 1112);
        v84 = *(float*)(a1 + 1100);
        v85 = *(float*)(a1 + 1116);
        v86 = *(float*)(a1 + 1120);
        v87 = -(float)(*((float*)&v116_.v116 + 1) * v85);
        v88 = *(float*)(a1 + 1124);
        v89 =
            (float)-(float)(PSEUDO_UNFUSED(*((float*)&v116_.v116 + 1) * v81)) -
            (float)(PSEUDO_UNFUSED(*(float*)&v116_.v116 * v82));
        v90 = *(float*)(a1 + 1104);
        v91 = *(float*)&v116_.v116 * v90;
        v92 = (float)((float)-(float)(PSEUDO_UNFUSED(v116_.v119 * v83)) -
                      (float)(v81 * v116_.v118)) -
              (float)(v85 * v116_.v120);
        v93 = (float)((float)-(float)(PSEUDO_UNFUSED(v116_.v119 * v84)) -
                      (float)(v82 * v116_.v118)) -
              (float)(v90 * v116_.v120);
        v94 = *(float*)(a1 + 1188);
        v72 = v116_.v117 + v72;
        v73 = v116_.v120 + v73;
        v95 = v87 - v91;
        v96 = v89 - (float)(PSEUDO_UNFUSED(v116_.v117 * v86));
        v97 = (float)((float)-(float)(PSEUDO_UNFUSED(
                          *((float*)&v116_.v116 + 1) * v83)) -
                      (float)(PSEUDO_UNFUSED(*(float*)&v116_.v116 * v84))) -
              (float)(PSEUDO_UNFUSED(v116_.v117 * v88));
        v98 = *(float*)(a1 + 1128);
        v99 =
            (float)(v95 - (float)(PSEUDO_UNFUSED(v116_.v117 * v98))) +
            (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                v116_.v119 * *(float*)(a1 + 1152))) -
                            (float)(PSEUDO_UNFUSED(v116_.v118 *
                                                   *(float*)(a1 + 1140)))) -
                    (float)(PSEUDO_UNFUSED(v116_.v120 * *(float*)(a1 + 1164))));
        v100 =
            v96 +
            (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                v116_.v119 * *(float*)(a1 + 1144))) -
                            (float)(PSEUDO_UNFUSED(v116_.v118 *
                                                   *(float*)(a1 + 1132)))) -
                    (float)(PSEUDO_UNFUSED(v116_.v120 * *(float*)(a1 + 1156))));
        v101 =
            v97 +
            (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                v116_.v119 * *(float*)(a1 + 1148))) -
                            (float)(PSEUDO_UNFUSED(v116_.v118 *
                                                   *(float*)(a1 + 1136)))) -
                    (float)(PSEUDO_UNFUSED(v116_.v120 * *(float*)(a1 + 1160))));
        v102 = *(float*)(a1 + 1176);
        v103 =
            v93 +
            (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                *((float*)&v116_.v116 + 1) *
                                *(float*)(a1 + 1180))) -
                            (float)(PSEUDO_UNFUSED(*(float*)&v116_.v116 *
                                                   *(float*)(a1 + 1168)))) -
                    (float)(PSEUDO_UNFUSED(v116_.v117 * *(float*)(a1 + 1192))));
        v78 = v99 + v112;
        v104 = (float)((float)-(float)(PSEUDO_UNFUSED(
                           *((float*)&v116_.v116 + 1) * *(float*)(a1 + 1184))) -
                       (float)(PSEUDO_UNFUSED(*(float*)&v116_.v116 *
                                              *(float*)(a1 + 1172)))) -
               (float)(PSEUDO_UNFUSED(v116_.v117 * *(float*)(a1 + 1196)));
        v105 = *(float*)(a1 + 1200);
        *(float*)&v131_.v132 = v99 + v112;
        v80 = (float)((float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                          v116_.v119 * v88)) -
                                      (float)(v86 * v116_.v118)) -
                              (float)(v98 * v116_.v120)) +
                      (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                          *((float*)&v116_.v116 + 1) * v94)) -
                                      (float)(PSEUDO_UNFUSED(
                                          *(float*)&v116_.v116 * v102))) -
                              (float)(PSEUDO_UNFUSED(v116_.v117 * v105)))) +
              v80;
        *(float*)&v131_.v134 = v80;
        *(float*)&v131_.v131 = v100 + *(float*)&v77;
        *((float*)&v131_.v131 + 1) = v101 + *((float*)&v77 + 1);
        v131_.v133 = __PAIR64__((float)(v92 + v104) + *((float*)&v79 + 1),
                                v103 + *(float*)&v79);
        v70 = __PAIR64__(*((float*)&v116_.v116 + 1) + *((float*)&v70 + 1),
                         *(float*)&v116_.v116 + *(float*)&v70);
        v74 = __PAIR64__(v116_.v119 + *((float*)&v74 + 1),
                         v116_.v118 + *(float*)&v74);
        v77 = v131_.v131;
        v79 = __PAIR64__((float)(v92 + v104) + *((float*)&v79 + 1),
                         v103 + *(float*)&v79);
      } while (v75 != 0);
    }
  }
  v106 = *(float*)&v70 + *(float*)(a1 + 160);
  v107 = *((float*)&v70 + 1) + *(float*)(a1 + 164);
  v108 = v72 + *(float*)(a1 + 168);
  *(_BYTE*)(a1 + 1049) = 1;
  *(float*)(a1 + 160) = v106;
  *(float*)(a1 + 164) = v107;
  *(float*)(a1 + 168) = v108;
  v109 = *((float*)&v74 + 1) + *(float*)(a1 + 180);
  *(float*)(a1 + 176) = *(float*)&v74 + *(float*)(a1 + 176);
  *(float*)(a1 + 180) = v109;
  result = v73 + *(float*)(a1 + 184);
  *(float*)(a1 + 184) = result;
  return result;
}

#pragma GCC visibility pop
