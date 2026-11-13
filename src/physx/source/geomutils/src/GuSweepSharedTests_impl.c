#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void physx_Gu_getPlane(PSEUDO_X8, float*);
__int64 physx_Cm_FastVertex2ShapeScaling_init(__int64 result, __int64,
                                              int32x4_t*);
float GameRoutine_4223a0(float*, __int64, float*, float*);
__int64 sweepConvex_PlaneGeom(float a1, float a2, __int64 a3, float* a4,
                              __int64 a5, float* a6, float* a7, __int64 a8,
                              __int16* a9);
__int64 GameRoutine_3edfc0(__int64, float32x4_t*);
__int64 physx_Gu_closestPtPointTetrahedron_47eed0(__int64 result, __int128*,
                                                  __int128*, int*);
extern __int128 GameData_1a82dd0;
float32x2_t physx_Gu_barycentricCoordinates_44e510(float32x4_t*, float32x4_t*,
                                                   float32x4_t*, float32x2_t*);
float32x2_t physx_Gu_barycentricCoordinates_44e590(float32x4_t*, float32x4_t*,
                                                   float32x4_t*, float32x4_t*,
                                                   float32x2_t*, float32x2_t*);
bool sweepBox_ConvexGeom_414880(__int64 a1, __int64 a2, int8x16_t* a3,
                                int32x2_t a4, __int64 a5, float32x4_t* a6,
                                float32x4_t* a7, _QWORD* a8, float32x4_t* a9,
                                int8x16_t* a10);
bool physx_Gu_gjkRaycast(float32x4_t* a1, __int64 a2, int8x16_t* a3,
                         int32x2_t a4, __int64 a5, float32x4_t* a6,
                         float32x4_t* a7, _QWORD* a8, float32x4_t* a9,
                         int8x16_t* a10);

__int64 sweepConvex_PlaneGeom(float a1, float a2, __int64 a3, float* a4,
                              __int64 a5, float* a6, float* a7, __int64 a8,
                              __int16* a9)
{
  __int64 v9;
  __int16 v10;
  __int64 v18;
  unsigned int v19;
  int v20;
  float v21;
  char v22;
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
  float* v37;
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
  float v60;
  float v61;
  float v62;
  struct {
    float v63[3];
    float v64;
  } v63_;
  _DWORD v65[19];

  v9 = *(_QWORD*)(a5 + 40);
  v10 = *a9;
  *(_DWORD*)a8 = -1;
  v18 = *(_QWORD*)(v9 + 56);
  v19 = *(unsigned __int8*)(v9 + 55);
  v20 = *(unsigned __int8*)(v9 + 54);
  physx_Cm_FastVertex2ShapeScaling_init((__int64)v65, a5 + 8,
                                        (int32x4_t*)(a5 + 20));
  physx_Gu_getPlane((void*)(v63_.v63), a4);
  v21 = v63_.v64;
  *(float*)(a8 + 32) = a1;
  v22 = 0;
  v62 = v21 - a2;
  v63_.v64 = v21 - a2;
  if (v20 != 0) {
    v23 = a6[2];
    v24 = a6[3];
    v25 = *a6;
    v26 = a6[1];
    v27 = v63_.v63[0];
    v28 = v63_.v63[1];
    v29 = v63_.v63[2];
    v30 = *(float*)&v65[6];
    v31 = *(float*)&v65[7];
    v32 = *(float*)&v65[3];
    v33 = *(float*)v65;
    v34 = *(float*)&v65[1];
    v36 = *(float*)&v65[4];
    v35 = *(float*)&v65[5];
    v37 = (float*)(v18 + 20LL * v19 + 8);
    v38 = (float)(v24 * v24) + -0x1.0000000000000p-1f;
    v39 = -*a6;
    v60 = *(float*)&v65[2];
    v61 = *(float*)&v65[8];
    do {
      v40 = *a7;
      v41 = a7[1];
      v42 = a7[2];
      v43 = (float)((float)(PSEUDO_UNFUSED(v41 * v28)) + (float)(*a7 * v27)) +
            (float)(v42 * v29);
      if (fabsf(v43) >= 0x1.ad7f2a0000000p-24f) {
        v44 = *(v37 - 2);
        v45 = *(v37 - 1);
        v46 = v44 * v33;
        v47 = (float)((float)((float)(PSEUDO_UNFUSED(v44 * v60)) +
                              (float)(PSEUDO_UNFUSED(v45 * v35))) +
                      (float)(PSEUDO_UNFUSED(*v37 * v61))) +
              (float)((float)((float)(PSEUDO_UNFUSED(v44 * v60)) +
                              (float)(PSEUDO_UNFUSED(v45 * v35))) +
                      (float)(PSEUDO_UNFUSED(*v37 * v61)));
        v48 = (float)((float)(PSEUDO_UNFUSED(v44 * v34)) +
                      (float)(PSEUDO_UNFUSED(v45 * v36))) +
              (float)(PSEUDO_UNFUSED(*v37 * v31));
        v49 = (float)(v46 + (float)(PSEUDO_UNFUSED(v45 * v32))) +
              (float)(PSEUDO_UNFUSED(*v37 * v30));
        v50 = v48 + v48;
        v51 = v49 + v49;
        v52 = (float)((float)(PSEUDO_UNFUSED(v26 * (float)(v48 + v48))) +
                      (float)(v25 * v51)) +
              (float)(v23 * v47);
        v53 = a6[6] +
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  v24 *
                                  (float)((float)(PSEUDO_UNFUSED(v51 *
                                                                 (float)-v26)) +
                                          (float)(v25 * (float)(v48 + v48))))) +
                              (float)(v47 * v38)) +
                      (float)(v23 * v52));
        v54 = a6[5] +
              (float)((float)((float)(PSEUDO_UNFUSED(
                                  (float)((float)(PSEUDO_UNFUSED(v47 * v39)) +
                                          (float)(v23 * v51)) *
                                  v24)) +
                              (float)(v50 * v38)) +
                      (float)(v26 * v52));
        v55 =
            a6[4] + (float)((float)((float)(PSEUDO_UNFUSED(
                                        v24 * (float)((float)(PSEUDO_UNFUSED(
                                                          v50 * (float)-v23)) +
                                                      (float)(v26 * v47)))) +
                                    (float)(v51 * v38)) +
                            (float)(v25 * v52));
        v56 = v62 + (float)((float)((float)(PSEUDO_UNFUSED(v28 * v54)) +
                                    (float)(v55 * v27)) +
                            (float)(v53 * v29));
        if (v56 <= 0x0.0p+0f) {
          if ((v10 & 0x200) != 0) {
            *(_WORD*)(a8 + 4) = 3;
            GameRoutine_4223a0(v63_.v63, a5, a6, (float*)a8);
          }
          else {
            v22 = 1;
            *(_DWORD*)(a8 + 32) = 0;
            *(_WORD*)(a8 + 4) = 2;
            *(float*)(a8 + 20) = -v40;
            *(float*)(a8 + 24) = -v41;
            *(float*)(a8 + 28) = -v42;
          }
          return v22 & 1;
        }
        v57 = (float)-v56 / v43;
        if (v57 > 0x0.0p+0f && v57 <= a1) {
          v22 = 1;
          *(float*)(a8 + 28) = v29;
          *(float*)(a8 + 32) = v57;
          *(_WORD*)(a8 + 4) = 3;
          *(float*)(a8 + 24) = v28;
          a1 = v57;
          *(float*)(a8 + 8) = v55 + (float)(PSEUDO_UNFUSED(v40 * v57));
          *(float*)(a8 + 12) = v54 + (float)(PSEUDO_UNFUSED(v41 * v57));
          *(float*)(a8 + 16) = v53 + (float)(PSEUDO_UNFUSED(v42 * v57));
          *(float*)(a8 + 20) = v27;
        }
      }
      --v20;
      v37 += 3;
    } while (v20 != 0);
  }
  return v22 & 1;
}

bool sweepBox_ConvexGeom_414880(__int64 a1, __int64 a2, int8x16_t* a3,
                                int32x2_t a4, __int64 a5, float32x4_t* a6,
                                float32x4_t* a7, _QWORD* a8, float32x4_t* a9,
                                int8x16_t* a10)
{
  float32x4_t* v10;
  float32x2_t v11;
  int8x16_t v16;
  int8x16_t v17;
  float32x4_t v18;
  int8x16_t* v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float32x2_t v25;
  float32x2_t v26;
  float32x2_t v27;
  float32x2_t v28;
  float32x2_t v29;
  float32x2_t v30;
  float32x4_t v31;
  int8x16_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float* v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  int8x16_t v47;
  int8x16_t v48;
  float32x2_t v49;
  float32x4_t v50;
  float32x2_t v51;
  float32x4_t v52;
  float32x2_t v53;
  float32x2_t v54;
  int32x2_t v55;
  int8x16_t v56;
  float32x2_t v57;
  float32x4_t v58;
  int8x8_t v59;
  int8x8_t v60;
  int32x2_t v61;
  int8x8_t v62;
  unsigned __int32 v63;
  float32x4_t v64;
  int8x16_t* v65;
  float32x4_t* v66;
  float32x2_t v67;
  float32x2_t v68;
  float32x2_t v69;
  float32x2_t v70;
  float32x2_t v71;
  float32x2_t v72;
  float32x2_t v73;
  float32x2_t v74;
  float32x2_t v75;
  float32x4_t v76;
  int8x16_t v77;
  int8x16_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  float32x4_t v88;
  float32x4_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x2_t v94;
  float32x4_t v95;
  float32x2_t v96;
  float32x2_t v97;
  float32x2_t v98;
  float32x2_t v99;
  float32x2_t v100;
  float32x2_t v101;
  float32x2_t v102;
  int8x16_t v103;
  float32x4_t* v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x4_t v107;
  float32x4_t v108;
  float32x4_t v109;
  float32x4_t v110;
  float32x4_t v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t v114;
  float32x4_t v115;
  unsigned int v116;
  __int64 v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x2_t v121;
  float32x2_t v122;
  float32x4_t v123;
  float32x2_t v124;
  float32x4_t v125;
  float32x2_t v126;
  float32x2_t v127;
  float32x2_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  int8x8_t v132;
  float32x2_t v133;
  float32x2_t v134;
  float32x2_t v135;
  float32x2_t v136;
  float32x2_t v137;
  float32x2_t v138;
  float32x2_t v139;
  int8x8_t v140;
  int8x8_t v141;
  int8x8_t v142;
  float32x4_t v143;
  float32x2_t v144;
  float32x4_t v145;
  int8x8_t v146;
  float32x4_t v147;
  float32x4_t v148;
  float32x2_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x2_t v152;
  float32x2_t v153;
  float32x4_t v154;
  float32x4_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x2_t v158;
  float32x2_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x2_t v162;
  float32x4_t v163;
  float32x2_t v164;
  float32x4_t v165;
  float32x2_t v166;
  float32x4_t v167;
  float32x2_t v168;
  int v169;
  int32x2_t v170;
  __int64 v171;
  float32x4_t v172;
  float32x2_t v173;
  float32x2_t v174;
  float32x4_t v175;
  float32x2_t v176;
  float32x4_t v177;
  float32x2_t v178;
  float32x2_t v179;
  float32x2_t v180;
  float32x2_t v181;
  float32x4_t v182;
  float32x2_t v183;
  float32x2_t v184;
  float32x2_t v185;
  float32x2_t v186;
  float32x2_t v187;
  float32x4_t* v188;
  float32x4_t* v189;
  float32x4_t* v190;
  float32x2_t v191;
  float32x2_t v192;
  float32x2_t v193;
  float32x2_t v194;
  float32x2_t v195;
  float32x2_t v196;
  float32x2_t v197;
  float32x2_t v198;
  float32x2_t v199;
  float32x2_t v200;
  float32x2_t v201;
  float32x2_t v202;
  int8x16_t v203;
  float32x2_t v204;
  float32x2_t v205;
  float32x2_t v206;
  float32x2_t v207;
  float32x2_t v208;
  float32x2_t v209;
  float32x2_t v210;
  __int64 v211;
  float32x4_t v212;
  float32x4_t v213;
  float32x4_t v214;
  float32x4_t v215;
  float32x4_t v216;
  float32x4_t v217;
  float32x4_t v218;
  float32x2_t v219;
  float32x2_t v220;
  float32x2_t v221;
  float32x2_t v222;
  float32x2_t v223;
  int8x16_t v224;
  float32x2_t v225;
  float32x2_t v226;
  float32x2_t v227;
  float32x2_t v228;
  int32x4_t v229;
  int8x16_t v230;
  float32x4_t v231;
  int8x16_t v232;
  float32x4_t v233;
  float32x4_t v234;
  int8x16_t v235;
  int32x4_t v237;
  float32x2_t v238;
  int8x16_t v241;
  float32x4_t v242;
  float32x4_t v243;
  int8x16_t v244;
  float32x4_t v245;
  int8x16_t v246;
  float32x4_t v247;
  unsigned __int64 v248;
  float32x4_t v249;
  float32x4_t v250;
  float32x4_t v251;
  int8x16_t v252;
  int32x4_t v253;
  int32x4_t v254;
  struct {
    float32x4_t v255;
    float32x4_t v256;
    float32x4_t v257[2];
    float32x4_t v258;
    float32x4_t v259;
    float32x4_t v260[2];
    float32x4_t v261;
    float32x4_t v262;
    float32x4_t v263[2];
    char gap416_[12];
    unsigned int v264;
    float32x2_t v265;
    float32x2_t v266;
    float32x4_t v267[2];
  } v255_;

  v10 = *(float32x4_t**)(a2 + 8);
  LANES64(v11).n64_u64[0] = LANES64_OF(vdup_lane_s32(a4, 0)).n64_u64[0];
  v16 = vmlaq_f32(*a6, COERCE_AS(float32x4_t, 0), *a7);
  v17 = *a3;
  v255_.v264 = 1;
  v18 = vmulq_f32(v17, v17);
  v19 = *(int8x16_t**)(a1 + 8);
  LANES128(v18).n128_u64[0] = LANES128_OF(vpaddq_f32(v18, v18)).n128_u64[0];
  LANES128(v16).n128_u64[1] = LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u32[0];
  v245 = v16;
  v20 = vbslq_s8(
      vmovl_s16(vdup_lane_s16(
          vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])),
                   COERCE_AS(float32x2_t, 0x3400000034000000LL)),
          0)),
      v17, COERCE_AS(int8x16_t, GameData_1a82dd0));
  v21 = vmulq_f32(v20, v20);
  LANES128(v21).n128_u64[0] = LANES128_OF(vpaddq_f32(v21, v21)).n128_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES64(v22).n64_u64[0] =
      LANES64_OF(vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES64(v23).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v22, vrsqrts_f32(
                            vmul_f32(v22, v22),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v24).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v23, vrsqrts_f32(
                            vmul_f32(v23, v23),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v25).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v24, vrsqrts_f32(
                            vmul_f32(v24, v24),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vbsl_s8(
              vdup_lane_s32(
                  vceqz_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])),
                  0),
              COERCE_AS(int8x8_t, LANES128(v21).n128_u64[0]),
              vmul_f32(
                  COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                  vmul_f32(v25,
                           vrsqrts_f32(vmul_f32(v25, v25),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v21).n128_u64[0]))))))
          .n64_u64[0];
  LANES64(v26).n64_u64[0] =
      LANES64_OF(vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES64(v27).n64_u64[0] =
      LANES64_OF(vmul_f32(v26, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v26)))
          .n64_u64[0];
  LANES64(v28).n64_u64[0] =
      LANES64_OF(vmul_f32(v27, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v27)))
          .n64_u64[0];
  LANES64(v29).n64_u64[0] =
      LANES64_OF(vmul_f32(v28, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v28)))
          .n64_u64[0];
  LANES64(v30).n64_u64[0] =
      LANES64_OF(vmul_f32(v29, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v29)))
          .n64_u64[0];
  v31 = vmulq_n_f32(
      v20,
      LANES64_OF(vmul_f32(v30, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v30)))
          .n64_f32[0]);
  v32 = v19[3];
  v33 = v19[4];
  LANES128(v31).n128_u32[3] = 0;
  v34 = vnegq_f32(v31);
  LANES128(v34).n128_u32[3] = 0;
  v35 = vmulq_f32(v34, v32);
  v36 = vmulq_f32(v34, v33);
  LANES128(v35).n128_u64[0] = LANES128_OF(vpaddq_f32(v35, v35)).n128_u64[0];
  LANES128(v36).n128_u64[0] = LANES128_OF(vpaddq_f32(v36, v36)).n128_u64[0];
  v251 = vbslq_s8(
      vmovl_s16(vdup_lane_s16(
          vcgt_f32(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])),
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]))),
          0)),
      v32, v33);
  v37 = vmulq_f32(v31, v10[3]);
  v38 = vmulq_f32(v31, v10[4]);
  v39 = vmulq_f32(v31, v10[5]);
  LANES128(v39).n128_u64[0] = LANES128_OF(vpaddq_f32(v39, v39)).n128_u64[0];
  LANES128(v37).n128_u64[0] = LANES128_OF(vpaddq_f32(v37, v37)).n128_u64[0];
  LANES128(v38).n128_u64[0] = LANES128_OF(vpaddq_f32(v38, v38)).n128_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(
          vext_s8(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0])),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])),
                  4u))
          .n64_u64[0];
  LANES128(v37).n128_u64[1] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0])))
          .n64_u32[0];
  v255_.v261 = v37;
  v40 = *(float32x4_t*)(LANES128(v10[10]).n128_u64[0] +
                        12LL * (unsigned int)GameRoutine_3edfc0((__int64)v10,
                                                                &v255_.v261));
  v41 = (const float*)(*(_QWORD*)(a2 + 8) + 24LL);
  v42 = vmulq_n_f32(v10[3], LANES128(v40).n128_f32[0]);
  v43 = vmulq_lane_f32(v10[4],
                       COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]), 1);
  v44 = vmulq_laneq_f32(v10[5], v40, 2);
  LANES128(v42).n128_u32[3] = 0;
  LANES128(v43).n128_u32[3] = 0;
  LANES128(v44).n128_u32[3] = 0;
  v255_.v258 = v251;
  v255_.v259 = (__typeof__(v255_.v259)){0};
  memset(v255_.v260, 0, sizeof(v255_.v260));
  memset(v255_.v263, 0, sizeof(v255_.v263));
  v255_.v255 = vaddq_f32(vaddq_f32(v42, v43), v44);
  v255_.v256 = (__typeof__(v255_.v256)){0};
  v45 = vsubq_f32(v251, v255_.v255);
  memset(v255_.v257, 0, sizeof(v255_.v257));
  v255_.v261 = v45;
  v255_.v262 = (__typeof__(v255_.v262)){0};
  v46 = vnegq_f32(v45);
  v47 = v45;
  LANES128(v46).n128_u32[3] = 0;
  v48 = v46;
  v241 = v46;
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vmul_f32(vmin_f32(vld1_dup_f32(v41), ((float32x2_t){0})),
                          vdup_n_s32(0x3DCCCCCDu)))
          .n64_u64[0];
  LANES64(v49).n64_u64[0] =
      LANES64_OF(
          vadd_f32(v11, COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
          .n64_u64[0];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
          .n64_u64[0];
  v50 = vmulq_f32(v46, v46);
  PSEUDO_LOW_LANE64(v51, n64_u64, 0);
  v52 = vpaddq_f32(v50, v50);
  LANES64(v238).n64_u64[0] = LANES128(v43).n128_u64[0];
  LANES64(v53).n64_u64[0] = LANES64_OF(vmul_f32(v49, v49)).n64_u64[0];
  LANES64(v54).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0])))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v52, n128_u32, -1);
  v237 = v52;
  LANES64(v55).n64_u64[0] =
      LANES64_OF(
          vcgt_f32(v54, COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
          .n64_u64[0];
  LANES128(v56).n128_u64[0] = -1;
  LANES128(v56).n128_u64[1] = -1;
  LANES64(v57).n64_u64[0] =
      LANES64_OF(vneg_f32(COERCE_AS(float32x2_t, 0x80000000800000LL)))
          .n64_u64[0];
  while (1) {
    LANES64(v62).n64_u64[0] =
        LANES64_OF(vcltz_s16(vshl_n_s16(vdup_lane_s16(v55, 0), 0xFu)))
            .n64_u64[0];
    v63 = LANES64_OF(vuzp1_s8(v62, v62)).n64_u32[0];
    if (v63 != -1) {
      break;
    }
    v64 = vmulq_f32(v48, v48);
    v65 = *(int8x16_t**)(a1 + 8);
    v66 = *(float32x4_t**)(a2 + 8);
    v246 = v47;
    LANES128(v64).n128_u64[0] = LANES128_OF(vpaddq_f32(v64, v64)).n128_u64[0];
    v244 = v48;
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
            .n64_u64[0];
    LANES64(v67).n64_u64[0] =
        LANES64_OF(
            vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
            .n64_u64[0];
    LANES64(v68).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v67, vrsqrts_f32(vmul_f32(v67, v67),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v64).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v69).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v68, vrsqrts_f32(vmul_f32(v68, v68),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v64).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v70).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v69, vrsqrts_f32(vmul_f32(v69, v69),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v64).n128_u64[0]))))
            .n64_u64[0];
    LANES128(v64).n128_u64[0] =
        LANES64_OF(
            vbsl_s8(
                vdup_lane_s32(vceqz_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v64).n128_u64[0])),
                              0),
                COERCE_AS(int8x8_t, LANES128(v64).n128_u64[0]),
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                    vmul_f32(v70, vrsqrts_f32(
                                      vmul_f32(v70, v70),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v64).n128_u64[0]))))))
            .n64_u64[0];
    LANES64(v71).n64_u64[0] =
        LANES64_OF(
            vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
            .n64_u64[0];
    LANES64(v72).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v71, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                              v71)))
            .n64_u64[0];
    LANES64(v73).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v72, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                              v72)))
            .n64_u64[0];
    LANES64(v74).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v73, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                              v73)))
            .n64_u64[0];
    LANES64(v75).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v74, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                              v74)))
            .n64_u64[0];
    v76 = vmulq_n_f32(
        v48, LANES64_OF(
                 vmul_f32(v75, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v64).n128_u64[0]),
                                          v75)))
                 .n64_f32[0]);
    v77 = v65[3];
    v78 = v65[4];
    LANES128(v76).n128_u32[3] = 0;
    v247 = v76;
    v79 = vnegq_f32(v76);
    v80 = vmulq_f32(v76, v77);
    v81 = vmulq_f32(v76, v78);
    LANES128(v80).n128_u64[0] = LANES128_OF(vpaddq_f32(v80, v80)).n128_u64[0];
    LANES128(v81).n128_u64[0] = LANES128_OF(vpaddq_f32(v81, v81)).n128_u64[0];
    LANES128(v79).n128_u32[3] = 0;
    v243 = v79;
    v252 = vbslq_s8(
        vmovl_s16(vdup_lane_s16(
            vcgt_f32(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0])),
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v81).n128_u64[0]))),
            0)),
        v77, v78);
    v82 = vmulq_f32(v79, v66[5]);
    LANES128(v82).n128_u64[0] = LANES128_OF(vpaddq_f32(v82, v82)).n128_u64[0];
    v83 = vmulq_f32(v79, v66[3]);
    v84 = vmulq_f32(v79, v66[4]);
    LANES128(v83).n128_u64[0] = LANES128_OF(vpaddq_f32(v83, v83)).n128_u64[0];
    LANES128(v84).n128_u64[0] = LANES128_OF(vpaddq_f32(v84, v84)).n128_u64[0];
    LANES128(v83).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])),
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0])),
                4u))
            .n64_u64[0];
    LANES128(v83).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0])))
            .n64_u32[0];
    v255_.v267[0] = v83;
    v85 = *(float32x4_t*)(LANES128(v66[10]).n128_u64[0] +
                          12LL * (unsigned int)GameRoutine_3edfc0((__int64)v66,
                                                                  v255_.v267));
    v86 = v252;
    v87 = vmulq_n_f32(v66[3], LANES128(v85).n128_f32[0]);
    v88 = vmulq_lane_f32(v66[4],
                         COERCE_AS(float32x2_t, LANES128(v85).n128_u64[0]), 1);
    v89 = vmulq_laneq_f32(v66[5], v85, 2);
    LANES128(v87).n128_u32[3] = 0;
    LANES128(v88).n128_u32[3] = 0;
    LANES128(v89).n128_u32[3] = 0;
    v90 = vaddq_f32(v245, vaddq_f32(vaddq_f32(v87, v88), v89));
    v91 = vsubq_f32(v252, v90);
    v92 = vnegq_f32(v91);
    LANES128(v92).n128_u32[3] = 0;
    v93 = vmulq_f32(v247, v92);
    LANES128(v93).n128_u64[0] = LANES128_OF(vpaddq_f32(v93, v93)).n128_u64[0];
    LANES64(v94).n64_u64[0] =
        LANES64_OF(
            vsub_f32(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v93).n128_u64[0])),
                v49))
            .n64_u64[0];
    if (LANES64(v94).n64_f32[0] > 0x0.0p+0f) {
      v95 = vmulq_f32(v247, *a7);
      LANES128(v95).n128_u64[0] = LANES128_OF(vpaddq_f32(v95, v95)).n128_u64[0];
      LANES64(v96).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0])))
              .n64_u64[0];
      if (LANES64(v96).n64_f32[0] >= 0x0.0p+0f) {
        return v63 != -1;
      }
      LANES64(v97).n64_u64[0] = LANES64_OF(vrecpe_f32(v96)).n64_u64[0];
      LANES64(v98).n64_u64[0] =
          LANES64_OF(vmul_f32(v97, vrecps_f32(v96, v97))).n64_u64[0];
      LANES64(v99).n64_u64[0] =
          LANES64_OF(vmul_f32(v98, vrecps_f32(v96, v98))).n64_u64[0];
      LANES64(v100).n64_u64[0] =
          LANES64_OF(vmul_f32(v99, vrecps_f32(v96, v99))).n64_u64[0];
      LANES64(v101).n64_u64[0] =
          LANES64_OF(vmul_f32(v100, vrecps_f32(v96, v100))).n64_u64[0];
      LANES64(v102).n64_u64[0] =
          LANES64_OF(
              vsub_f32(v51,
                       vmul_f32(v94, vmul_f32(v101, vrecps_f32(v96, v101)))))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v102, v51)).n64_u8[0] & 1) != 0) {
        if (LANES64(v102).n64_f32[0] > 0x1.0000000000000p+0f) {
          return v63 != -1;
        }
        v103 = vmlaq_n_f32(*a6, *a7, LANES64(v102).n64_f32[0]);
        v248 = LANES64(v102).n64_u64[0];
        v104 = *(float32x4_t**)(a2 + 8);
        LANES128(v103).n128_u64[1] =
            LANES128_OF(vextq_s8(v103, v103, 8u)).n128_u32[0];
        v105 = vsubq_f32(v103, v245);
        v242 = v103;
        v255_.v255 = vaddq_f32(v255_.v255, v105);
        v255_.v256 = vaddq_f32(v255_.v256, v105);
        v255_.v257[0] = vaddq_f32(v255_.v257[0], v105);
        v106 = v104[3];
        v107 = v104[4];
        v255_.v261 = vsubq_f32(v255_.v258, v255_.v255);
        v255_.v262 = vsubq_f32(v255_.v259, v255_.v256);
        v255_.v263[0] = vsubq_f32(v255_.v260[0], v255_.v257[0]);
        v108 = vmulq_f32(v243, v106);
        v109 = vmulq_f32(v243, v107);
        LANES128(v108).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v108, v108)).n128_u64[0];
        LANES128(v109).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v109, v109)).n128_u64[0];
        LANES128(v110).n128_u64[0] =
            LANES64_OF(
                vext_s8(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])),
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v109).n128_u64[0])),
                        4u))
                .n64_u64[0];
        v111 = vmulq_f32(v243, v104[5]);
        LANES128(v111).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v111, v111)).n128_u64[0];
        LANES128(v110).n128_u64[1] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0])))
                .n64_u32[0];
        v255_.v267[0] = v110;
        PSEUDO_LOW_LANE64(v54, n64_u64, LANES64(v57).n64_u64[0]);
        v112 = *(float32x4_t*)(LANES128(v104[10]).n128_u64[0] +
                               12LL * (unsigned int)GameRoutine_3edfc0(
                                          (__int64)v104, v255_.v267));
        v113 = vmulq_n_f32(v104[3], LANES128(v112).n128_f32[0]);
        v114 = vmulq_lane_f32(
            v104[4], COERCE_AS(float32x2_t, LANES128(v112).n128_u64[0]), 1);
        v115 = vmulq_laneq_f32(v104[5], v112, 2);
        LANES128(v113).n128_u32[3] = 0;
        LANES128(v114).n128_u32[3] = 0;
        LANES128(v115).n128_u32[3] = 0;
        v245 = v242;
        v241 = v244;
        v86 = v252;
        v90 = vaddq_f32(v242, vaddq_f32(vaddq_f32(v113, v114), v115));
        PSEUDO_LOW_LANE64(v51, n64_u64, v248);
        v91 = vsubq_f32(v252, v90);
      }
      else {
        PSEUDO_LOW_LANE64(v51, n64_u64, LANES64(v102).n64_u64[0]);
      }
    }
    v116 = v255_.v264;
    v117 = 16LL * v255_.v264;
    *(float32x4_t*)((char*)&v255_.v258 + v117) = v86;
    *(float32x4_t*)((char*)&v255_.v255 + v117) = v90;
    v255_.v264 = v116 + 1;
    *(float32x4_t*)((char*)&v255_.v261 + v117) = v91;
    if (v116 == 3) {
      physx_Gu_closestPtPointTetrahedron_47eed0(
          (__int64)&v255_.v261, (__int128*)&v255_.v258, (__int128*)&v255_.v255,
          (int*)&v255_.v264);
    LABEL_27:
      v118 = v246;
      goto LABEL_3;
    }
    if (v116 != 2) {
      v118 = v246;
      if (v116 != 1) {
        goto LABEL_3;
      }
      v91 = v255_.v261;
      v119 = vsubq_f32(v255_.v262, v255_.v261);
      v120 = vmulq_f32(v119, v119);
      LANES128(v120).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v120, v120)).n128_u64[0];
      LANES64(v121).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vuzp1_s8(vdup_lane_s16(vcge_f32(COERCE_AS(float32x2_t,
                                                        0x3400000034000000LL),
                                              v121),
                                     0),
                       COERCE_AS(int8x8_t, LANES128(v255_.v261).n128_u64[0])))
              .n64_u32[0] == -1) {
        goto LABEL_2;
      }
      LANES64(v122).n64_u64[0] = LANES64_OF(vrecpe_f32(v121)).n64_u64[0];
      v123 = vnegq_f32(v255_.v261);
      LANES128(v123).n128_u32[3] = 0;
      LANES64(v124).n64_u64[0] =
          LANES64_OF(vmul_f32(v122, vrecps_f32(v121, v122))).n64_u64[0];
      v125 = vmulq_f32(v123, v119);
      LANES128(v125).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v125, v125)).n128_u64[0];
      LANES64(v126).n64_u64[0] =
          LANES64_OF(vmul_f32(v124, vrecps_f32(v121, v124))).n64_u64[0];
      LANES64(v127).n64_u64[0] =
          LANES64_OF(vmul_f32(v126, vrecps_f32(v121, v126))).n64_u64[0];
      LANES64(v128).n64_u64[0] =
          LANES64_OF(vmul_f32(v127, vrecps_f32(v121, v127))).n64_u64[0];
      v91 = vmlaq_n_f32(
          v255_.v261, v119,
          LANES64_OF(
              vmax_f32(
                  vmin_f32(
                      vmul_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v125).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v125).n128_u64[0])),
                               vmul_f32(v128, vrecps_f32(v121, v128))),
                      COERCE_AS(float32x2_t, 0x3F8000003F800000LL)),
                  ((float32x2_t){0})))
              .n64_f32[0]);
      goto LABEL_30;
    }
    v91 = v255_.v261;
    v129 = vsubq_f32(v255_.v262, v255_.v261);
    v130 = vsubq_f32(v255_.v263[0], v255_.v261);
    v255_.v264 = 3;
    LANES64(v132).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0]),
                    COERCE_AS(
                        float32x2_t,
                        LANES128_OF(vextq_s8(v130, v130, 4u)).n128_u64[0])),
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v129, v129, 4u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0])))
            .n64_u64[0];
    LANES128(v131).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                v132,
                vmls_f32(
                    vmul_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v129, v129, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v130).n128_u64[0])),
                    COERCE_AS(float32x2_t, LANES128(v129).n128_u64[0]),
                    COERCE_AS(
                        float32x2_t,
                        LANES128_OF(vextq_s8(v130, v130, 8u)).n128_u64[0])),
                4u))
            .n64_u64[0];
    LANES64(v132).n64_u32[1] = 0;
    LANES64(v133).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v131).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v131).n128_u64[0])),
                vmul_f32(COERCE_AS(float32x2_t, LANES64(v132).n64_u32[0]),
                         COERCE_AS(float32x2_t, LANES64(v132).n64_u32[0]))))
            .n64_u64[0];
    LANES64(v134).n64_u64[0] = LANES64_OF(vpadd_f32(v133, v133)).n64_u64[0];
    if (LANES64(v134).n64_f32[0] <= 0x1.0000000000000p-46f) {
      v172 = vmulq_f32(v129, v129);
      v118 = v246;
      v255_.v264 = 2;
      LANES128(v172).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v172, v172)).n128_u64[0];
      LANES64(v173).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v172).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vuzp1_s8(vdup_lane_s16(vcge_f32(COERCE_AS(float32x2_t,
                                                        0x3400000034000000LL),
                                              v173),
                                     0),
                       COERCE_AS(int8x8_t, LANES128(v255_.v261).n128_u64[0])))
              .n64_u32[0] == -1) {
      LABEL_2:
        v255_.v264 = 1;
        goto LABEL_3;
      }
      LANES64(v174).n64_u64[0] = LANES64_OF(vrecpe_f32(v173)).n64_u64[0];
      v175 = vnegq_f32(v255_.v261);
      LANES128(v175).n128_u32[3] = 0;
      LANES64(v176).n64_u64[0] =
          LANES64_OF(vmul_f32(v174, vrecps_f32(v173, v174))).n64_u64[0];
      v177 = vmulq_f32(v175, v129);
      LANES128(v177).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v177, v177)).n128_u64[0];
      LANES64(v178).n64_u64[0] =
          LANES64_OF(vmul_f32(v176, vrecps_f32(v173, v176))).n64_u64[0];
      LANES64(v179).n64_u64[0] =
          LANES64_OF(vmul_f32(v178, vrecps_f32(v173, v178))).n64_u64[0];
      LANES64(v180).n64_u64[0] =
          LANES64_OF(vmul_f32(v179, vrecps_f32(v173, v179))).n64_u64[0];
      v91 = vmlaq_n_f32(
          v255_.v261, v129,
          LANES64_OF(
              vmax_f32(
                  vmin_f32(
                      vmul_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v177).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v177).n128_u64[0])),
                               vmul_f32(v180, vrecps_f32(v173, v180))),
                      COERCE_AS(float32x2_t, 0x3F8000003F800000LL)),
                  ((float32x2_t){0})))
              .n64_f32[0]);
    LABEL_30:
      LANES128(v91).n128_u64[1] =
          LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u32[0];
      goto LABEL_3;
    }
    *(int8x8_t*)&LANES128(v131).n128_i8[8] = v132;
    LANES64(v135).n64_u64[0] =
        LANES128_OF(vextq_s8(v255_.v262, v255_.v262, 8u)).n128_u64[0];
    LANES64(v136).n64_u64[0] =
        LANES128_OF(vextq_s8(v255_.v263[0], v255_.v263[0], 4u)).n128_u64[0];
    LANES64(v137).n64_u64[0] =
        LANES128_OF(vextq_s8(v255_.v263[0], v255_.v263[0], 8u)).n128_u64[0];
    LANES64(v138).n64_u64[0] =
        LANES128_OF(vextq_s8(v255_.v262, v255_.v262, 4u)).n128_u64[0];
    LANES64(v139).n64_u64[0] =
        LANES128_OF(vextq_s8(v255_.v261, v255_.v261, 4u)).n128_u64[0];
    LANES64(v140).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v255_.v262).n128_u64[0]),
                    v136),
                v138,
                COERCE_AS(float32x2_t, LANES128(v255_.v263[0]).n128_u64[0])))
            .n64_u64[0];
    LANES64(v141).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(v139, COERCE_AS(float32x2_t,
                                         LANES128(v255_.v263[0]).n128_u64[0])),
                v136, COERCE_AS(float32x2_t, LANES128(v255_.v261).n128_u64[0])))
            .n64_u64[0];
    LANES64(v142).n64_u64[0] =
        LANES64_OF(
            vmls_f32(vmul_f32(COERCE_AS(float32x2_t,
                                        LANES128(v255_.v261).n128_u64[0]),
                              v138),
                     v139,
                     COERCE_AS(float32x2_t, LANES128(v255_.v262).n128_u64[0])))
            .n64_u64[0];
    LANES128(v143).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                v140,
                vmls_f32(
                    vmul_f32(v135,
                             COERCE_AS(float32x2_t,
                                       LANES128(v255_.v263[0]).n128_u64[0])),
                    COERCE_AS(float32x2_t, LANES128(v255_.v262).n128_u64[0]),
                    v137),
                4u))
            .n64_u64[0];
    LANES128(v143).n128_u64[1] = LANES64(v140).n64_u32[0];
    LANES64(v144).n64_u64[0] =
        LANES128_OF(vextq_s8(v255_.v261, v255_.v261, 8u)).n128_u64[0];
    LANES128(v145).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                v141,
                vmls_f32(
                    vmul_f32(COERCE_AS(float32x2_t,
                                       LANES128(v255_.v261).n128_u64[0]),
                             v137),
                    COERCE_AS(float32x2_t, LANES128(v255_.v263[0]).n128_u64[0]),
                    v144),
                4u))
            .n64_u64[0];
    LANES64(v146).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(v144, COERCE_AS(float32x2_t,
                                         LANES128(v255_.v262).n128_u64[0])),
                COERCE_AS(float32x2_t, LANES128(v255_.v261).n128_u64[0]), v135))
            .n64_u64[0];
    v147 = vmulq_f32(v143, v131);
    LANES128(v145).n128_u64[1] = LANES64(v141).n64_u32[0];
    LANES128(v147).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v147, v147)).n128_u64[0];
    LANES128(v148).n128_u64[0] = LANES64_OF(vext_s8(v142, v146, 4u)).n64_u64[0];
    LANES64(v149).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v147).n128_u64[0])))
            .n64_u64[0];
    v150 = vmulq_f32(v145, v131);
    LANES128(v148).n128_u64[1] = LANES64(v142).n64_u32[0];
    LANES128(v150).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v150, v150)).n128_u64[0];
    v151 = vmulq_f32(v148, v131);
    LANES64(v152).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0])))
            .n64_u64[0];
    LANES128(v151).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v151, v151)).n128_u64[0];
    LANES64(v153).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(
            vuzp1_s8(
                vdup_lane_s16(vand_s8(vand_s8(vcgez_f32(v152), vcgez_f32(v149)),
                                      vcgez_f32(v153)),
                              0),
                COERCE_AS(int8x8_t, LANES128(v255_.v261).n128_u64[0])))
            .n64_u32[0] == -1) {
      LANES64(v181).n64_u64[0] = LANES64_OF(vrecpe_f32(v134)).n64_u64[0];
      v182 = vmulq_f32(v255_.v261, v131);
      LANES128(v182).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v182, v182)).n128_u64[0];
      LANES64(v183).n64_u64[0] =
          LANES64_OF(vmul_f32(v181, vrecps_f32(v134, v181))).n64_u64[0];
      LANES64(v184).n64_u64[0] =
          LANES64_OF(vmul_f32(v183, vrecps_f32(v134, v183))).n64_u64[0];
      LANES64(v185).n64_u64[0] =
          LANES64_OF(vmul_f32(v184, vrecps_f32(v134, v184))).n64_u64[0];
      LANES64(v186).n64_u64[0] =
          LANES64_OF(vmul_f32(v185, vrecps_f32(v134, v185))).n64_u64[0];
      v91 = vmulq_n_f32(
          v131,
          LANES64_OF(
              vmul_f32(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v182).n128_u64[0])),
                  vmul_f32(v186, vrecps_f32(v134, v186))))
              .n64_f32[0]);
      LANES128(v91).n128_u32[3] = 0;
      goto LABEL_27;
    }
    v154 = vnegq_f32(v255_.v261);
    v155 = vnegq_f32(v255_.v262);
    LANES128(v154).n128_u32[3] = 0;
    LANES128(v155).n128_u32[3] = 0;
    v156 = vmulq_f32(v154, v129);
    v157 = vmulq_f32(v129, v155);
    LANES128(v156).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v156, v156)).n128_u64[0];
    LANES128(v157).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v157, v157)).n128_u64[0];
    LANES64(v158).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v156).n128_u64[0])))
            .n64_u64[0];
    LANES64(v159).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(
            vuzp1_s8(vdup_lane_s16(
                         vand_s8(vclez_f32(v153),
                                 vand_s8(vclez_f32(v159), vcgez_f32(v158))),
                         0),
                     COERCE_AS(int8x8_t, LANES128(v255_.v261).n128_u64[0])))
            .n64_u32[0] == -1) {
      LANES64(v187).n64_u64[0] = LANES64_OF(vsub_f32(v158, v159)).n64_u64[0];
      v118 = v246;
      v189 = &v255_.v259;
      v188 = &v255_.v256;
      v190 = &v255_.v262;
      v171 = 0;
      v169 = 2;
      LANES64(v191).n64_u64[0] = LANES64_OF(vrecpe_f32(v187)).n64_u64[0];
      LANES64(v192).n64_u64[0] =
          LANES64_OF(vmul_f32(v191, vrecps_f32(v187, v191))).n64_u64[0];
      LANES64(v193).n64_u64[0] =
          LANES64_OF(vmul_f32(v192, vrecps_f32(v187, v192))).n64_u64[0];
      LANES64(v194).n64_u64[0] =
          LANES64_OF(vmul_f32(v193, vrecps_f32(v187, v193))).n64_u64[0];
      LANES64(v195).n64_u64[0] =
          LANES64_OF(vmul_f32(v194, vrecps_f32(v187, v194))).n64_u64[0];
      v91 = vmlaq_n_f32(
          v255_.v261, v129,
          LANES64_OF(
              vmul_f32(v158, vbsl_s8(vcgt_f32(vabd_f32(v158, v159),
                                              COERCE_AS(float32x2_t,
                                                        0x3400000034000000LL)),
                                     vmul_f32(v195, vrecps_f32(v187, v195)),
                                     ((int8x8_t){0}))))
              .n64_f32[0]);
      LANES128(v91).n128_u64[1] =
          LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u32[0];
    }
    else {
      v160 = vnegq_f32(v255_.v263[0]);
      v161 = vmulq_f32(v155, v130);
      LANES128(v161).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v161, v161)).n128_u64[0];
      LANES128(v160).n128_u32[3] = 0;
      LANES64(v162).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v161).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v161).n128_u64[0])))
              .n64_u64[0];
      v163 = vmulq_f32(v129, v160);
      LANES128(v163).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v163, v163)).n128_u64[0];
      LANES64(v164).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0])))
              .n64_u64[0];
      v165 = vmulq_f32(v130, v160);
      LANES128(v165).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v165, v165)).n128_u64[0];
      LANES64(v166).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v165).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vuzp1_s8(vdup_lane_s16(vand_s8(vand_s8(vcge_f32(v162, v159),
                                                     vcge_f32(v164, v166)),
                                             vclez_f32(v149)),
                                     0),
                       COERCE_AS(int8x8_t, LANES128(v255_.v261).n128_u64[0])))
              .n64_u32[0] == -1) {
        LANES64(v196).n64_u64[0] = LANES64_OF(vsub_f32(v162, v159)).n64_u64[0];
        v169 = 2;
        v171 = 1;
        LANES64(v197).n64_u64[0] =
            LANES64_OF(vadd_f32(v196, vsub_f32(v164, v166))).n64_u64[0];
        LANES64(v198).n64_u64[0] = LANES64_OF(vrecpe_f32(v197)).n64_u64[0];
        LANES64(v199).n64_u64[0] =
            LANES64_OF(vmul_f32(v198, vrecps_f32(v197, v198))).n64_u64[0];
        LANES64(v200).n64_u64[0] =
            LANES64_OF(vmul_f32(v199, vrecps_f32(v197, v199))).n64_u64[0];
        LANES64(v201).n64_u64[0] =
            LANES64_OF(vmul_f32(v200, vrecps_f32(v197, v200))).n64_u64[0];
        LANES64(v202).n64_u64[0] =
            LANES64_OF(vmul_f32(v201, vrecps_f32(v197, v201))).n64_u64[0];
        v203 = vmlaq_n_f32(
            v255_.v262, vsubq_f32(v255_.v263[0], v255_.v262),
            LANES64_OF(
                vmul_f32(v196,
                         vbsl_s8(vcgt_f32(vabs_f32(v197),
                                          COERCE_AS(float32x2_t,
                                                    0x3400000034000000LL)),
                                 vmul_f32(v202, vrecps_f32(v197, v202)),
                                 ((int8x8_t){0}))))
                .n64_f32[0]);
        LANES128(v203).n128_u64[1] =
            LANES128_OF(vextq_s8(v203, v203, 8u)).n128_u32[0];
        v91 = v203;
      }
      else {
        v167 = vmulq_f32(v154, v130);
        LANES128(v167).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v167, v167)).n128_u64[0];
        LANES64(v168).n64_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v167).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v167).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vuzp1_s8(vdup_lane_s16(
                             vand_s8(vclez_f32(v152),
                                     vand_s8(vclez_f32(v166), vcgez_f32(v168))),
                             0),
                         COERCE_AS(int8x8_t, LANES128(v255_.v261).n128_u64[0])))
                .n64_u32[0] != -1) {
          v118 = v246;
          if (LANES64_OF(
                  vuzp1_s8(
                      vdup_lane_s16(vand_s8(vclez_f32(v168), vclez_f32(v158)),
                                    0),
                      COERCE_AS(int8x8_t, LANES128(v255_.v261).n128_u64[0])))
                  .n64_u32[0] == -1) {
            v171 = 0;
            v169 = 1;
          }
          else {
            v169 = 1;
            LANES128(v91).n128_u64[0] =
                LANES64_OF(
                    vdup_lane_s16(
                        vand_s8(vcge_f32(v159, v162), vcgez_f32(v159)), 0))
                    .n64_u64[0];
            LANES128(v91).n128_u64[0] =
                LANES64_OF(
                    vuzp1_s8(COERCE_AS(int8x8_t, LANES128(v91).n128_u64[0]),
                             COERCE_AS(int8x8_t, LANES128(v91).n128_u64[0])))
                    .n64_u64[0];
            LANES64(v170).n64_u64[0] =
                LANES128_OF(vceqq_s32(v91, v237)).n128_u64[0];
            if (LANES128(v91).n128_u32[0] == -1) {
              v171 = 1;
            }
            else {
              v171 = 2;
            }
            v91 = vbslq_s8(vdupq_lane_s32(v170, 0), v255_.v262, v255_.v263[0]);
          }
          v189 = &v255_.v259;
          v188 = &v255_.v256;
          v190 = &v255_.v262;
          goto LABEL_38;
        }
        LANES64(v204).n64_u64[0] = LANES64_OF(vsub_f32(v168, v166)).n64_u64[0];
        LANES64(v205).n64_u64[0] = LANES64_OF(vabd_f32(v168, v166)).n64_u64[0];
        v169 = 2;
        v171 = 0;
        LANES64(v206).n64_u64[0] = LANES64_OF(vrecpe_f32(v204)).n64_u64[0];
        LANES64(v207).n64_u64[0] =
            LANES64_OF(vmul_f32(v206, vrecps_f32(v204, v206))).n64_u64[0];
        LANES64(v208).n64_u64[0] =
            LANES64_OF(vmul_f32(v207, vrecps_f32(v204, v207))).n64_u64[0];
        LANES64(v209).n64_u64[0] =
            LANES64_OF(vmul_f32(v208, vrecps_f32(v204, v208))).n64_u64[0];
        LANES64(v210).n64_u64[0] =
            LANES64_OF(vmul_f32(v209, vrecps_f32(v204, v209))).n64_u64[0];
        v91 = vmlaq_n_f32(
            v255_.v261, v130,
            LANES64_OF(
                vmul_f32(
                    v168,
                    vbsl_s8(vcgt_f32(v205, COERCE_AS(float32x2_t,
                                                     0x3400000034000000LL)),
                            vmul_f32(v210, vrecps_f32(v204, v210)),
                            ((int8x8_t){0}))))
                .n64_f32[0]);
        LANES128(v91).n128_u64[1] =
            LANES128_OF(vextq_s8(v91, v91, 8u)).n128_u32[0];
      }
      v118 = v246;
      v189 = v255_.v260;
      v188 = v255_.v257;
      v190 = v255_.v263;
    }
  LABEL_38:
    v211 = 16 * v171;
    v212 = *v190;
    v213 = *v189;
    v255_.v264 = v169;
    v214 = *(float32x4_t*)((char*)&v255_.v261 + v211);
    v215 = *(float32x4_t*)((char*)&v255_.v255 + v211);
    v255_.v258 = *(float32x4_t*)((char*)&v255_.v258 + v211);
    v255_.v259 = v213;
    v255_.v261 = v214;
    v255_.v262 = v212;
    v216 = *v188;
    v255_.v255 = v215;
    v255_.v256 = v216;
  LABEL_3:
    v58 = vmulq_f32(v91, v91);
    v48 = vnegq_f32(v91);
    LANES128(v58).n128_u64[0] = LANES128_OF(vpaddq_f32(v58, v58)).n128_u64[0];
    LANES128(v48).n128_u32[3] = 0;
    LANES128(v58).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_u64[0];
    LANES64(v59).n64_u64[0] =
        LANES64_OF(
            vcgt_f32(v54, COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_u64[0];
    LANES64(v60).n64_u64[0] =
        LANES64_OF(
            vcgt_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]), v53))
            .n64_u64[0];
    PSEUDO_LOW_LANE64(v54, n64_u64, LANES128(v58).n128_u64[0]);
    v45 = v118;
    v47 = v91;
    LANES64(v61).n64_u64[0] =
        LANES64_OF(vand_s8(v59, COERCE_AS(int8x8_t, 0x100000001LL))).n64_u64[0];
    LANES64(v55).n64_u64[0] = LANES64_OF(vand_s8(v60, v59)).n64_u64[0];
    v56 = vdupq_lane_s32(v61, 0);
  }
  v217 = vbslq_s8(
      vcltzq_s32(vshlq_n_s32(
          vandq_s8(vdupq_lane_s32(vcgt_f32(v54, v238), 0), v56), 0x1Fu)),
      v48, v241);
  v218 = vmulq_f32(v217, v217);
  LANES128(v218).n128_u64[0] = LANES128_OF(vpaddq_f32(v218, v218)).n128_u64[0];
  LANES128(v218).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])))
          .n64_u64[0];
  LANES64(v219).n64_u64[0] =
      LANES64_OF(
          vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])))
          .n64_u64[0];
  LANES64(v220).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v219, vrsqrts_f32(vmul_f32(v219, v219),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v218).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v221).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v220, vrsqrts_f32(vmul_f32(v220, v220),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v218).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v222).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v221, vrsqrts_f32(vmul_f32(v221, v221),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v218).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v218).n128_u64[0] =
      LANES64_OF(
          vbsl_s8(
              vdup_lane_s32(
                  vceqz_f32(COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])),
                  0),
              COERCE_AS(int8x8_t, LANES128(v218).n128_u64[0]),
              vmul_f32(
                  COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                  vmul_f32(v222, vrsqrts_f32(
                                     vmul_f32(v222, v222),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v218).n128_u64[0]))))))
          .n64_u64[0];
  LANES64(v223).n64_u64[0] =
      LANES64_OF(vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])))
          .n64_u64[0];
  v224 = vdupq_lane_s32(
      vcgtz_f32(COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0])), 0);
  LANES64(v225).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v223, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                             v223)))
          .n64_u64[0];
  LANES64(v226).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v225, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                             v225)))
          .n64_u64[0];
  LANES64(v227).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v226, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                             v226)))
          .n64_u64[0];
  LANES64(v228).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v227, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                             v227)))
          .n64_u64[0];
  LANES128(v218).n128_u32[0] =
      LANES64_OF(
          vmul_f32(v228, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v218).n128_u64[0]),
                             v228)))
          .n64_u32[0];
  v229 = vdupq_n_s32(-*(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 32LL));
  v230 = vmulq_n_f32(v217, LANES128(v218).n128_f32[0]);
  LANES128(v230).n128_u32[3] = 0;
  v231 = vnegq_f32(vandq_s8(v224, v230));
  LANES128(v231).n128_u32[3] = 0;
  *a9 = v231;
  *a8 = LANES64(v51).n64_u64[0];
  v255_.v267[0] = vbslq_s8(vcltzq_s32(vshlq_n_s32(v56, 0x1Fu)), v47, v45);
  if (v255_.v264 == 3) {
    v250 = v231;
    v254 = v229;
    physx_Gu_barycentricCoordinates_44e590(v255_.v267, &v255_.v261, &v255_.v262,
                                           v255_.v263, &v255_.v266,
                                           &v255_.v265);
    LANES128(v45).n128_u32[1] = LANES128(v255_.v258).n128_u32[1];
    v233 = vmulq_n_f32(vsubq_f32(v255_.v259, v255_.v258),
                       LANES64(v255_.v266).n64_f32[0]);
    LANES128(v233).n128_u32[3] = 0;
    v234 = vmulq_n_f32(vsubq_f32(v255_.v260[0], v255_.v258),
                       LANES64(v255_.v265).n64_f32[0]);
    v231 = v250;
    v229 = v254;
    LANES128(v234).n128_u32[3] = 0;
    v232 = vaddq_f32(v255_.v258, vaddq_f32(v233, v234));
  }
  else if (v255_.v264 == 2) {
    v249 = v231;
    v253 = v229;
    physx_Gu_barycentricCoordinates_44e510(v255_.v267, &v255_.v261, &v255_.v262,
                                           &v255_.v266);
    v231 = v249;
    v229 = v253;
    v232 = vmlaq_n_f32(v255_.v258, vsubq_f32(v255_.v259, v255_.v258),
                       LANES64(v255_.v266).n64_f32[0]);
    LANES128(v45).n128_u32[1] = 0;
    LANES128(v232).n128_u64[1] =
        LANES128_OF(vextq_s8(v232, v232, 8u)).n128_u32[0];
  }
  else {
    v232 = (__typeof__(v232)){0};
    if (v255_.v264 == 1) {
      v232 = v255_.v258;
    }
  }
  LANES128(v45).n128_u32[0] = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 16LL);
  v235 = vmlsq_lane_f32(v232, v231,
                        COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]), 0);
  LANES128(v235).n128_u64[1] =
      LANES128_OF(vextq_s8(v235, v235, 8u)).n128_u32[0];
  *a10 = vbslq_s8(v229, v235, v232);
  return v63 != -1;
}

bool physx_Gu_gjkRaycast(float32x4_t* a1, __int64 a2, int8x16_t* a3,
                         int32x2_t a4, __int64 a5, float32x4_t* a6,
                         float32x4_t* a7, _QWORD* a8, float32x4_t* a9,
                         int8x16_t* a10)
{
  float32x4_t* v10;
  float32x2_t v11;
  int8x16_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t* v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x2_t v22;
  float32x2_t v23;
  float32x2_t v24;
  float32x2_t v25;
  float32x2_t v26;
  float32x2_t v27;
  float32x2_t v28;
  float32x2_t v29;
  float32x2_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x2_t v46;
  float32x4_t v47;
  float* v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  int8x16_t v54;
  int8x16_t v55;
  float32x2_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x2_t v59;
  float32x2_t v60;
  int32x2_t v61;
  int8x16_t v62;
  float32x2_t v63;
  float32x4_t v64;
  int8x8_t v65;
  int8x8_t v66;
  int32x2_t v67;
  int8x8_t v68;
  unsigned __int32 v69;
  float32x4_t v70;
  float32x4_t* v71;
  float32x4_t* v72;
  float32x2_t v73;
  float32x2_t v74;
  float32x2_t v75;
  float32x2_t v76;
  float32x2_t v77;
  float32x2_t v78;
  float32x2_t v79;
  float32x2_t v80;
  float32x2_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  int8x16_t v88;
  int8x16_t v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x4_t v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  float32x2_t v107;
  float32x4_t v108;
  float32x2_t v109;
  float32x2_t v110;
  float32x2_t v111;
  float32x2_t v112;
  float32x2_t v113;
  float32x2_t v114;
  float32x2_t v115;
  int8x16_t v116;
  float32x4_t* v117;
  float32x4_t v118;
  float32x4_t v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  unsigned int v129;
  __int64 v130;
  float32x4_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x2_t v134;
  float32x2_t v135;
  float32x4_t v136;
  float32x2_t v137;
  float32x4_t v138;
  float32x2_t v139;
  float32x2_t v140;
  float32x2_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t v144;
  int8x8_t v145;
  float32x2_t v146;
  float32x2_t v147;
  float32x2_t v148;
  float32x2_t v149;
  float32x2_t v150;
  float32x2_t v151;
  float32x2_t v152;
  int8x8_t v153;
  int8x8_t v154;
  int8x8_t v155;
  float32x4_t v156;
  float32x2_t v157;
  float32x4_t v158;
  int8x8_t v159;
  float32x4_t v160;
  float32x4_t v161;
  float32x2_t v162;
  float32x4_t v163;
  float32x4_t v164;
  float32x2_t v165;
  float32x2_t v166;
  float32x4_t v167;
  float32x4_t v168;
  float32x4_t v169;
  float32x4_t v170;
  float32x2_t v171;
  float32x2_t v172;
  float32x4_t v173;
  float32x4_t v174;
  float32x2_t v175;
  float32x4_t v176;
  float32x2_t v177;
  float32x4_t v178;
  float32x2_t v179;
  float32x4_t v180;
  float32x2_t v181;
  int v182;
  int32x2_t v183;
  __int64 v184;
  float32x4_t v185;
  float32x2_t v186;
  float32x2_t v187;
  float32x4_t v188;
  float32x2_t v189;
  float32x4_t v190;
  float32x2_t v191;
  float32x2_t v192;
  float32x2_t v193;
  float32x2_t v194;
  float32x4_t v195;
  float32x2_t v196;
  float32x2_t v197;
  float32x2_t v198;
  float32x2_t v199;
  float32x2_t v200;
  float32x4_t* v201;
  float32x4_t* v202;
  float32x4_t* v203;
  float32x2_t v204;
  float32x2_t v205;
  float32x2_t v206;
  float32x2_t v207;
  float32x2_t v208;
  float32x2_t v209;
  float32x2_t v210;
  float32x2_t v211;
  float32x2_t v212;
  float32x2_t v213;
  float32x2_t v214;
  float32x2_t v215;
  int8x16_t v216;
  float32x2_t v217;
  float32x2_t v218;
  float32x2_t v219;
  float32x2_t v220;
  float32x2_t v221;
  float32x2_t v222;
  float32x2_t v223;
  __int64 v224;
  float32x4_t v225;
  float32x4_t v226;
  float32x4_t v227;
  float32x4_t v228;
  float32x4_t v229;
  float32x4_t v230;
  float32x4_t v231;
  float32x2_t v232;
  float32x2_t v233;
  float32x2_t v234;
  float32x2_t v235;
  float32x2_t v236;
  int8x16_t v237;
  float32x2_t v238;
  float32x2_t v239;
  float32x2_t v240;
  float32x2_t v241;
  int32x4_t v242;
  int8x16_t v243;
  float32x4_t v244;
  int8x16_t v245;
  float32x4_t v246;
  float32x4_t v247;
  int8x16_t v248;
  int32x4_t v250;
  float32x2_t v251;
  int8x16_t v254;
  float32x4_t v255;
  float32x4_t v256;
  int8x16_t v257;
  float32x4_t v258;
  int8x16_t v259;
  float32x4_t v260;
  unsigned __int64 v261;
  float32x4_t v262;
  float32x4_t v263;
  float32x4_t v264;
  float32x4_t v265;
  int32x4_t v266;
  int32x4_t v267;
  struct {
    float32x4_t v268;
    float32x4_t v269;
    float32x4_t v270[2];
    float32x4_t v271;
    float32x4_t v272;
    float32x4_t v273[2];
    float32x4_t v274;
    float32x4_t v275;
    float32x4_t v276[2];
    char gap416_[12];
    unsigned int v277;
    float32x2_t v278;
    float32x2_t v279;
    float32x4_t v280[2];
  } v268_;

  v10 = *(float32x4_t**)(a2 + 8);
  LANES64(v11).n64_u64[0] = LANES64_OF(vdup_lane_s32(a4, 0)).n64_u64[0];
  v16 = vmlaq_f32(*a6, COERCE_AS(float32x4_t, 0), *a7);
  v17 = *a3;
  v268_.v277 = 1;
  v18 = vmulq_f32(v17, v17);
  LANES128(v18).n128_u64[0] = LANES128_OF(vpaddq_f32(v18, v18)).n128_u64[0];
  v19 = (float32x4_t*)LANES128(a1[1]).n128_u64[0];
  LANES128(v16).n128_u64[1] = LANES128_OF(vextq_s8(v16, v16, 8u)).n128_u32[0];
  v258 = v16;
  v20 = vbslq_s8(
      vmovl_s16(vdup_lane_s16(
          vcgt_f32(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])),
                   COERCE_AS(float32x2_t, 0x3400000034000000LL)),
          0)),
      v17, COERCE_AS(int8x16_t, GameData_1a82dd0));
  v21 = vmulq_f32(v20, v20);
  LANES128(v21).n128_u64[0] = LANES128_OF(vpaddq_f32(v21, v21)).n128_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES64(v22).n64_u64[0] =
      LANES64_OF(vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES64(v23).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v22, vrsqrts_f32(
                            vmul_f32(v22, v22),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v24).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v23, vrsqrts_f32(
                            vmul_f32(v23, v23),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v25).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v24, vrsqrts_f32(
                            vmul_f32(v24, v24),
                            COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vbsl_s8(
              vdup_lane_s32(
                  vceqz_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])),
                  0),
              COERCE_AS(int8x8_t, LANES128(v21).n128_u64[0]),
              vmul_f32(
                  COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                  vmul_f32(v25,
                           vrsqrts_f32(vmul_f32(v25, v25),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v21).n128_u64[0]))))))
          .n64_u64[0];
  LANES64(v26).n64_u64[0] =
      LANES64_OF(vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  LANES64(v27).n64_u64[0] =
      LANES64_OF(vmul_f32(v26, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v26)))
          .n64_u64[0];
  LANES64(v28).n64_u64[0] =
      LANES64_OF(vmul_f32(v27, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v27)))
          .n64_u64[0];
  LANES64(v29).n64_u64[0] =
      LANES64_OF(vmul_f32(v28, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v28)))
          .n64_u64[0];
  LANES64(v30).n64_u64[0] =
      LANES64_OF(vmul_f32(v29, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v29)))
          .n64_u64[0];
  v31 = vmulq_n_f32(
      v20,
      LANES64_OF(vmul_f32(v30, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v21).n128_u64[0]),
                                          v30)))
          .n64_f32[0]);
  LANES128(v31).n128_u32[3] = 0;
  v32 = vnegq_f32(v31);
  v33 = vmulq_n_f32(a1[2], LANES128(v32).n128_f32[0]);
  v34 = vmulq_lane_f32(a1[3], COERCE_AS(float32x2_t, LANES128(v32).n128_u64[0]),
                       1);
  v35 = vmulq_laneq_f32(a1[4], v32, 2);
  LANES128(v33).n128_u32[3] = 0;
  LANES128(v34).n128_u32[3] = 0;
  LANES128(v35).n128_u32[3] = 0;
  v36 = vaddq_f32(vaddq_f32(v33, v34), v35);
  v37 = *(int8x16_t*)(LANES128(*(a1)).n128_u64[1] + 48);
  v38 = vnegq_f32(v37);
  LANES128(v38).n128_u32[3] = 0;
  v39 = vbslq_s8(vcgtzq_f32(v36), v37, v38);
  v40 = vmulq_n_f32(*v19, LANES128(v39).n128_f32[0]);
  v41 = vmulq_lane_f32(v19[1],
                       COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]), 1);
  v42 = vmulq_laneq_f32(v19[2], v39, 2);
  LANES128(v40).n128_u32[3] = 0;
  LANES128(v41).n128_u32[3] = 0;
  LANES128(v42).n128_u32[3] = 0;
  v264 = vaddq_f32(v19[3], vaddq_f32(v42, vaddq_f32(v40, v41)));
  v43 = vmulq_f32(v31, v10[3]);
  v44 = vmulq_f32(v31, v10[4]);
  v45 = vmulq_f32(v31, v10[5]);
  LANES128(v45).n128_u64[0] = LANES128_OF(vpaddq_f32(v45, v45)).n128_u64[0];
  LANES128(v43).n128_u64[0] = LANES128_OF(vpaddq_f32(v43, v43)).n128_u64[0];
  LANES128(v44).n128_u64[0] = LANES128_OF(vpaddq_f32(v44, v44)).n128_u64[0];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(
          vext_s8(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])),
                  4u))
          .n64_u64[0];
  LANES128(v43).n128_u64[1] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
          .n64_u32[0];
  v268_.v274 = v43;
  PSEUDO_LOW_LANE64(v46, n64_u64, 0);
  v47 = *(float32x4_t*)(LANES128(v10[10]).n128_u64[0] +
                        12LL * (unsigned int)GameRoutine_3edfc0((__int64)v10,
                                                                &v268_.v274));
  v48 = (const float*)(LANES128(*(a1)).n128_u64[1] + 24);
  v49 = vmulq_n_f32(v10[3], LANES128(v47).n128_f32[0]);
  v50 = vmulq_lane_f32(v10[4],
                       COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1);
  v51 = vmulq_laneq_f32(v10[5], v47, 2);
  LANES128(v49).n128_u32[3] = 0;
  LANES128(v50).n128_u32[3] = 0;
  LANES128(v51).n128_u32[3] = 0;
  v268_.v271 = v264;
  v268_.v272 = (__typeof__(v268_.v272)){0};
  memset(v268_.v273, 0, sizeof(v268_.v273));
  memset(v268_.v276, 0, sizeof(v268_.v276));
  v268_.v268 = vaddq_f32(vaddq_f32(v49, v50), v51);
  v268_.v269 = (__typeof__(v268_.v269)){0};
  v52 = vsubq_f32(v264, v268_.v268);
  memset(v268_.v270, 0, sizeof(v268_.v270));
  v268_.v274 = v52;
  v268_.v275 = (__typeof__(v268_.v275)){0};
  v53 = vnegq_f32(v52);
  v54 = v52;
  LANES128(v53).n128_u32[3] = 0;
  v55 = v53;
  v254 = v53;
  LANES128(v51).n128_u64[0] =
      LANES64_OF(
          vmul_f32(
              vmin_f32(vld1_dup_f32(v48),
                       vld1_dup_f32((const float*)(*(_QWORD*)(a2 + 8) + 24LL))),
              vdup_n_s32(0x3DCCCCCDu)))
          .n64_u64[0];
  LANES64(v56).n64_u64[0] =
      LANES64_OF(
          vadd_f32(v11, COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
          .n64_u64[0];
  LANES128(v50).n128_u64[0] =
      LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0])))
          .n64_u64[0];
  v57 = vmulq_f32(v53, v53);
  v58 = vpaddq_f32(v57, v57);
  LANES64(v251).n64_u64[0] = LANES128(v50).n128_u64[0];
  LANES64(v59).n64_u64[0] = LANES64_OF(vmul_f32(v56, v56)).n64_u64[0];
  LANES64(v60).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v58, n128_u32, -1);
  v250 = v58;
  LANES64(v61).n64_u64[0] =
      LANES64_OF(
          vcgt_f32(v60, COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0])))
          .n64_u64[0];
  LANES128(v62).n128_u64[0] = -1;
  LANES128(v62).n128_u64[1] = -1;
  LANES64(v63).n64_u64[0] =
      LANES64_OF(vneg_f32(COERCE_AS(float32x2_t, 0x80000000800000LL)))
          .n64_u64[0];
  while (1) {
    LANES64(v68).n64_u64[0] =
        LANES64_OF(vcltz_s16(vshl_n_s16(vdup_lane_s16(v61, 0), 0xFu)))
            .n64_u64[0];
    v69 = LANES64_OF(vuzp1_s8(v68, v68)).n64_u32[0];
    if (v69 != -1) {
      break;
    }
    v70 = vmulq_f32(v55, v55);
    v71 = (float32x4_t*)LANES128(a1[1]).n128_u64[0];
    LANES128(v70).n128_u64[0] = LANES128_OF(vpaddq_f32(v70, v70)).n128_u64[0];
    v257 = v55;
    v72 = *(float32x4_t**)(a2 + 8);
    v259 = v54;
    LANES128(v70).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
            .n64_u64[0];
    LANES64(v73).n64_u64[0] =
        LANES64_OF(
            vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
            .n64_u64[0];
    LANES64(v74).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v73, vrsqrts_f32(vmul_f32(v73, v73),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v70).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v75).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v74, vrsqrts_f32(vmul_f32(v74, v74),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v70).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v76).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v75, vrsqrts_f32(vmul_f32(v75, v75),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v70).n128_u64[0]))))
            .n64_u64[0];
    LANES128(v70).n128_u64[0] =
        LANES64_OF(
            vbsl_s8(
                vdup_lane_s32(vceqz_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v70).n128_u64[0])),
                              0),
                COERCE_AS(int8x8_t, LANES128(v70).n128_u64[0]),
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                    vmul_f32(v76, vrsqrts_f32(
                                      vmul_f32(v76, v76),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v70).n128_u64[0]))))))
            .n64_u64[0];
    LANES64(v77).n64_u64[0] =
        LANES64_OF(
            vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
            .n64_u64[0];
    LANES64(v78).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v77, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                              v77)))
            .n64_u64[0];
    LANES64(v79).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v78, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                              v78)))
            .n64_u64[0];
    LANES64(v80).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v79, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                              v79)))
            .n64_u64[0];
    LANES64(v81).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v80, vrecps_f32(
                              COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                              v80)))
            .n64_u64[0];
    v82 = vmulq_n_f32(
        v55, LANES64_OF(
                 vmul_f32(v81, vrecps_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v70).n128_u64[0]),
                                          v81)))
                 .n64_f32[0]);
    v83 = vmulq_n_f32(a1[2], LANES128(v82).n128_f32[0]);
    v84 = vmulq_lane_f32(a1[3],
                         COERCE_AS(float32x2_t, LANES128(v82).n128_u64[0]), 1);
    v85 = vmulq_laneq_f32(a1[4], v82, 2);
    LANES128(v82).n128_u32[3] = 0;
    LANES128(v83).n128_u32[3] = 0;
    LANES128(v84).n128_u32[3] = 0;
    LANES128(v85).n128_u32[3] = 0;
    v260 = v82;
    v86 = vnegq_f32(v82);
    v87 = vaddq_f32(v83, v84);
    v88 = *(int8x16_t*)(LANES128(*(a1)).n128_u64[1] + 48);
    LANES128(v86).n128_u32[3] = 0;
    v89 = vnegq_f32(v88);
    v256 = v86;
    LANES128(v89).n128_u32[3] = 0;
    v90 = vbslq_s8(vcgtzq_f32(vaddq_f32(v87, v85)), v88, v89);
    v91 = vmulq_n_f32(*v71, LANES128(v90).n128_f32[0]);
    v92 = vmulq_lane_f32(v71[1],
                         COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]), 1);
    v93 = vmulq_laneq_f32(v71[2], v90, 2);
    LANES128(v91).n128_u32[3] = 0;
    LANES128(v92).n128_u32[3] = 0;
    LANES128(v93).n128_u32[3] = 0;
    v94 = vaddq_f32(v93, vaddq_f32(v91, v92));
    v95 = vmulq_f32(v86, v72[5]);
    LANES128(v95).n128_u64[0] = LANES128_OF(vpaddq_f32(v95, v95)).n128_u64[0];
    v265 = vaddq_f32(v71[3], v94);
    v96 = vmulq_f32(v86, v72[3]);
    v97 = vmulq_f32(v86, v72[4]);
    LANES128(v96).n128_u64[0] = LANES128_OF(vpaddq_f32(v96, v96)).n128_u64[0];
    LANES128(v97).n128_u64[0] = LANES128_OF(vpaddq_f32(v97, v97)).n128_u64[0];
    LANES128(v96).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])),
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v97).n128_u64[0])),
                4u))
            .n64_u64[0];
    LANES128(v96).n128_u64[1] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v95).n128_u64[0])))
            .n64_u32[0];
    v268_.v280[0] = v96;
    v98 = *(float32x4_t*)(LANES128(v72[10]).n128_u64[0] +
                          12LL * (unsigned int)GameRoutine_3edfc0((__int64)v72,
                                                                  v268_.v280));
    v99 = v265;
    v100 = vmulq_n_f32(v72[3], LANES128(v98).n128_f32[0]);
    v101 = vmulq_lane_f32(v72[4],
                          COERCE_AS(float32x2_t, LANES128(v98).n128_u64[0]), 1);
    v102 = vmulq_laneq_f32(v72[5], v98, 2);
    LANES128(v100).n128_u32[3] = 0;
    LANES128(v101).n128_u32[3] = 0;
    LANES128(v102).n128_u32[3] = 0;
    v103 = vaddq_f32(v258, vaddq_f32(vaddq_f32(v100, v101), v102));
    v104 = vsubq_f32(v265, v103);
    v105 = vnegq_f32(v104);
    LANES128(v105).n128_u32[3] = 0;
    v106 = vmulq_f32(v260, v105);
    LANES128(v106).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v106, v106)).n128_u64[0];
    LANES64(v107).n64_u64[0] =
        LANES64_OF(
            vsub_f32(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0])),
                v56))
            .n64_u64[0];
    if (LANES64(v107).n64_f32[0] > 0x0.0p+0f) {
      v108 = vmulq_f32(v260, *a7);
      LANES128(v108).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v108, v108)).n128_u64[0];
      LANES64(v109).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v108).n128_u64[0])))
              .n64_u64[0];
      if (LANES64(v109).n64_f32[0] >= 0x0.0p+0f) {
        return v69 != -1;
      }
      LANES64(v110).n64_u64[0] = LANES64_OF(vrecpe_f32(v109)).n64_u64[0];
      LANES64(v111).n64_u64[0] =
          LANES64_OF(vmul_f32(v110, vrecps_f32(v109, v110))).n64_u64[0];
      LANES64(v112).n64_u64[0] =
          LANES64_OF(vmul_f32(v111, vrecps_f32(v109, v111))).n64_u64[0];
      LANES64(v113).n64_u64[0] =
          LANES64_OF(vmul_f32(v112, vrecps_f32(v109, v112))).n64_u64[0];
      LANES64(v114).n64_u64[0] =
          LANES64_OF(vmul_f32(v113, vrecps_f32(v109, v113))).n64_u64[0];
      LANES64(v115).n64_u64[0] =
          LANES64_OF(
              vsub_f32(v46,
                       vmul_f32(v107, vmul_f32(v114, vrecps_f32(v109, v114)))))
              .n64_u64[0];
      if ((LANES64_OF(vcgt_f32(v115, v46)).n64_u8[0] & 1) != 0) {
        if (LANES64(v115).n64_f32[0] > 0x1.0000000000000p+0f) {
          return v69 != -1;
        }
        v116 = vmlaq_n_f32(*a6, *a7, LANES64(v115).n64_f32[0]);
        v261 = LANES64(v115).n64_u64[0];
        v117 = *(float32x4_t**)(a2 + 8);
        LANES128(v116).n128_u64[1] =
            LANES128_OF(vextq_s8(v116, v116, 8u)).n128_u32[0];
        v118 = vsubq_f32(v116, v258);
        v255 = v116;
        v268_.v268 = vaddq_f32(v268_.v268, v118);
        v268_.v269 = vaddq_f32(v268_.v269, v118);
        v268_.v270[0] = vaddq_f32(v268_.v270[0], v118);
        v119 = v117[3];
        v120 = v117[4];
        v268_.v274 = vsubq_f32(v268_.v271, v268_.v268);
        v268_.v275 = vsubq_f32(v268_.v272, v268_.v269);
        v268_.v276[0] = vsubq_f32(v268_.v273[0], v268_.v270[0]);
        v121 = vmulq_f32(v256, v119);
        v122 = vmulq_f32(v256, v120);
        LANES128(v121).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v121, v121)).n128_u64[0];
        LANES128(v122).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v122, v122)).n128_u64[0];
        LANES128(v123).n128_u64[0] =
            LANES64_OF(
                vext_s8(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v121).n128_u64[0])),
                        vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v122).n128_u64[0])),
                        4u))
                .n64_u64[0];
        v124 = vmulq_f32(v256, v117[5]);
        LANES128(v124).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v124, v124)).n128_u64[0];
        LANES128(v123).n128_u64[1] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v124).n128_u64[0])))
                .n64_u32[0];
        v268_.v280[0] = v123;
        PSEUDO_LOW_LANE64(v60, n64_u64, LANES64(v63).n64_u64[0]);
        v125 = *(float32x4_t*)(LANES128(v117[10]).n128_u64[0] +
                               12LL * (unsigned int)GameRoutine_3edfc0(
                                          (__int64)v117, v268_.v280));
        v126 = vmulq_n_f32(v117[3], LANES128(v125).n128_f32[0]);
        v127 = vmulq_lane_f32(
            v117[4], COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]), 1);
        v128 = vmulq_laneq_f32(v117[5], v125, 2);
        LANES128(v126).n128_u32[3] = 0;
        LANES128(v127).n128_u32[3] = 0;
        LANES128(v128).n128_u32[3] = 0;
        v258 = v255;
        v254 = v257;
        v99 = v265;
        v103 = vaddq_f32(v255, vaddq_f32(vaddq_f32(v126, v127), v128));
        PSEUDO_LOW_LANE64(v46, n64_u64, v261);
        v104 = vsubq_f32(v265, v103);
      }
      else {
        PSEUDO_LOW_LANE64(v46, n64_u64, LANES64(v115).n64_u64[0]);
      }
    }
    v129 = v268_.v277;
    v130 = 16LL * v268_.v277;
    *(float32x4_t*)((char*)&v268_.v271 + v130) = v99;
    *(float32x4_t*)((char*)&v268_.v268 + v130) = v103;
    v268_.v277 = v129 + 1;
    *(float32x4_t*)((char*)&v268_.v274 + v130) = v104;
    if (v129 == 3) {
      physx_Gu_closestPtPointTetrahedron_47eed0(
          (__int64)&v268_.v274, (__int128*)&v268_.v271, (__int128*)&v268_.v268,
          (int*)&v268_.v277);
    LABEL_27:
      v131 = v259;
      goto LABEL_3;
    }
    if (v129 != 2) {
      v131 = v259;
      if (v129 != 1) {
        goto LABEL_3;
      }
      v104 = v268_.v274;
      v132 = vsubq_f32(v268_.v275, v268_.v274);
      v133 = vmulq_f32(v132, v132);
      LANES128(v133).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v133, v133)).n128_u64[0];
      LANES64(v134).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vuzp1_s8(vdup_lane_s16(vcge_f32(COERCE_AS(float32x2_t,
                                                        0x3400000034000000LL),
                                              v134),
                                     0),
                       COERCE_AS(int8x8_t, LANES128(v268_.v274).n128_u64[0])))
              .n64_u32[0] == -1) {
        goto LABEL_2;
      }
      LANES64(v135).n64_u64[0] = LANES64_OF(vrecpe_f32(v134)).n64_u64[0];
      v136 = vnegq_f32(v268_.v274);
      LANES128(v136).n128_u32[3] = 0;
      LANES64(v137).n64_u64[0] =
          LANES64_OF(vmul_f32(v135, vrecps_f32(v134, v135))).n64_u64[0];
      v138 = vmulq_f32(v136, v132);
      LANES128(v138).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v138, v138)).n128_u64[0];
      LANES64(v139).n64_u64[0] =
          LANES64_OF(vmul_f32(v137, vrecps_f32(v134, v137))).n64_u64[0];
      LANES64(v140).n64_u64[0] =
          LANES64_OF(vmul_f32(v139, vrecps_f32(v134, v139))).n64_u64[0];
      LANES64(v141).n64_u64[0] =
          LANES64_OF(vmul_f32(v140, vrecps_f32(v134, v140))).n64_u64[0];
      v104 = vmlaq_n_f32(
          v268_.v274, v132,
          LANES64_OF(
              vmax_f32(
                  vmin_f32(
                      vmul_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v138).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v138).n128_u64[0])),
                               vmul_f32(v141, vrecps_f32(v134, v141))),
                      COERCE_AS(float32x2_t, 0x3F8000003F800000LL)),
                  ((float32x2_t){0})))
              .n64_f32[0]);
      goto LABEL_30;
    }
    v104 = v268_.v274;
    v142 = vsubq_f32(v268_.v275, v268_.v274);
    v143 = vsubq_f32(v268_.v276[0], v268_.v274);
    v268_.v277 = 3;
    LANES64(v145).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0]),
                    COERCE_AS(
                        float32x2_t,
                        LANES128_OF(vextq_s8(v143, v143, 4u)).n128_u64[0])),
                COERCE_AS(float32x2_t,
                          LANES128_OF(vextq_s8(v142, v142, 4u)).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])))
            .n64_u64[0];
    LANES128(v144).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                v145,
                vmls_f32(
                    vmul_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v142, v142, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v143).n128_u64[0])),
                    COERCE_AS(float32x2_t, LANES128(v142).n128_u64[0]),
                    COERCE_AS(
                        float32x2_t,
                        LANES128_OF(vextq_s8(v143, v143, 8u)).n128_u64[0])),
                4u))
            .n64_u64[0];
    LANES64(v145).n64_u32[1] = 0;
    LANES64(v146).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v144).n128_u64[0])),
                vmul_f32(COERCE_AS(float32x2_t, LANES64(v145).n64_u32[0]),
                         COERCE_AS(float32x2_t, LANES64(v145).n64_u32[0]))))
            .n64_u64[0];
    LANES64(v147).n64_u64[0] = LANES64_OF(vpadd_f32(v146, v146)).n64_u64[0];
    if (LANES64(v147).n64_f32[0] <= 0x1.0000000000000p-46f) {
      v185 = vmulq_f32(v142, v142);
      v131 = v259;
      v268_.v277 = 2;
      LANES128(v185).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v185, v185)).n128_u64[0];
      LANES64(v186).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v185).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vuzp1_s8(vdup_lane_s16(vcge_f32(COERCE_AS(float32x2_t,
                                                        0x3400000034000000LL),
                                              v186),
                                     0),
                       COERCE_AS(int8x8_t, LANES128(v268_.v274).n128_u64[0])))
              .n64_u32[0] == -1) {
      LABEL_2:
        v268_.v277 = 1;
        goto LABEL_3;
      }
      LANES64(v187).n64_u64[0] = LANES64_OF(vrecpe_f32(v186)).n64_u64[0];
      v188 = vnegq_f32(v268_.v274);
      LANES128(v188).n128_u32[3] = 0;
      LANES64(v189).n64_u64[0] =
          LANES64_OF(vmul_f32(v187, vrecps_f32(v186, v187))).n64_u64[0];
      v190 = vmulq_f32(v188, v142);
      LANES128(v190).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v190, v190)).n128_u64[0];
      LANES64(v191).n64_u64[0] =
          LANES64_OF(vmul_f32(v189, vrecps_f32(v186, v189))).n64_u64[0];
      LANES64(v192).n64_u64[0] =
          LANES64_OF(vmul_f32(v191, vrecps_f32(v186, v191))).n64_u64[0];
      LANES64(v193).n64_u64[0] =
          LANES64_OF(vmul_f32(v192, vrecps_f32(v186, v192))).n64_u64[0];
      v104 = vmlaq_n_f32(
          v268_.v274, v142,
          LANES64_OF(
              vmax_f32(
                  vmin_f32(
                      vmul_f32(vpadd_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v190).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v190).n128_u64[0])),
                               vmul_f32(v193, vrecps_f32(v186, v193))),
                      COERCE_AS(float32x2_t, 0x3F8000003F800000LL)),
                  ((float32x2_t){0})))
              .n64_f32[0]);
    LABEL_30:
      LANES128(v104).n128_u64[1] =
          LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u32[0];
      goto LABEL_3;
    }
    *(int8x8_t*)&LANES128(v144).n128_i8[8] = v145;
    LANES64(v148).n64_u64[0] =
        LANES128_OF(vextq_s8(v268_.v275, v268_.v275, 8u)).n128_u64[0];
    LANES64(v149).n64_u64[0] =
        LANES128_OF(vextq_s8(v268_.v276[0], v268_.v276[0], 4u)).n128_u64[0];
    LANES64(v150).n64_u64[0] =
        LANES128_OF(vextq_s8(v268_.v276[0], v268_.v276[0], 8u)).n128_u64[0];
    LANES64(v151).n64_u64[0] =
        LANES128_OF(vextq_s8(v268_.v275, v268_.v275, 4u)).n128_u64[0];
    LANES64(v152).n64_u64[0] =
        LANES128_OF(vextq_s8(v268_.v274, v268_.v274, 4u)).n128_u64[0];
    LANES64(v153).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v268_.v275).n128_u64[0]),
                    v149),
                v151,
                COERCE_AS(float32x2_t, LANES128(v268_.v276[0]).n128_u64[0])))
            .n64_u64[0];
    LANES64(v154).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(v152, COERCE_AS(float32x2_t,
                                         LANES128(v268_.v276[0]).n128_u64[0])),
                v149, COERCE_AS(float32x2_t, LANES128(v268_.v274).n128_u64[0])))
            .n64_u64[0];
    LANES64(v155).n64_u64[0] =
        LANES64_OF(
            vmls_f32(vmul_f32(COERCE_AS(float32x2_t,
                                        LANES128(v268_.v274).n128_u64[0]),
                              v151),
                     v152,
                     COERCE_AS(float32x2_t, LANES128(v268_.v275).n128_u64[0])))
            .n64_u64[0];
    LANES128(v156).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                v153,
                vmls_f32(
                    vmul_f32(v148,
                             COERCE_AS(float32x2_t,
                                       LANES128(v268_.v276[0]).n128_u64[0])),
                    COERCE_AS(float32x2_t, LANES128(v268_.v275).n128_u64[0]),
                    v150),
                4u))
            .n64_u64[0];
    LANES128(v156).n128_u64[1] = LANES64(v153).n64_u32[0];
    LANES64(v157).n64_u64[0] =
        LANES128_OF(vextq_s8(v268_.v274, v268_.v274, 8u)).n128_u64[0];
    LANES128(v158).n128_u64[0] =
        LANES64_OF(
            vext_s8(
                v154,
                vmls_f32(
                    vmul_f32(COERCE_AS(float32x2_t,
                                       LANES128(v268_.v274).n128_u64[0]),
                             v150),
                    COERCE_AS(float32x2_t, LANES128(v268_.v276[0]).n128_u64[0]),
                    v157),
                4u))
            .n64_u64[0];
    LANES64(v159).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(v157, COERCE_AS(float32x2_t,
                                         LANES128(v268_.v275).n128_u64[0])),
                COERCE_AS(float32x2_t, LANES128(v268_.v274).n128_u64[0]), v148))
            .n64_u64[0];
    v160 = vmulq_f32(v156, v144);
    LANES128(v158).n128_u64[1] = LANES64(v154).n64_u32[0];
    LANES128(v160).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v160, v160)).n128_u64[0];
    LANES128(v161).n128_u64[0] = LANES64_OF(vext_s8(v155, v159, 4u)).n64_u64[0];
    LANES64(v162).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v160).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v160).n128_u64[0])))
            .n64_u64[0];
    v163 = vmulq_f32(v158, v144);
    LANES128(v161).n128_u64[1] = LANES64(v155).n64_u32[0];
    LANES128(v163).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v163, v163)).n128_u64[0];
    v164 = vmulq_f32(v161, v144);
    LANES64(v165).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v163).n128_u64[0])))
            .n64_u64[0];
    LANES128(v164).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v164, v164)).n128_u64[0];
    LANES64(v166).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v164).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v164).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(
            vuzp1_s8(
                vdup_lane_s16(vand_s8(vand_s8(vcgez_f32(v165), vcgez_f32(v162)),
                                      vcgez_f32(v166)),
                              0),
                COERCE_AS(int8x8_t, LANES128(v268_.v274).n128_u64[0])))
            .n64_u32[0] == -1) {
      LANES64(v194).n64_u64[0] = LANES64_OF(vrecpe_f32(v147)).n64_u64[0];
      v195 = vmulq_f32(v268_.v274, v144);
      LANES128(v195).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v195, v195)).n128_u64[0];
      LANES64(v196).n64_u64[0] =
          LANES64_OF(vmul_f32(v194, vrecps_f32(v147, v194))).n64_u64[0];
      LANES64(v197).n64_u64[0] =
          LANES64_OF(vmul_f32(v196, vrecps_f32(v147, v196))).n64_u64[0];
      LANES64(v198).n64_u64[0] =
          LANES64_OF(vmul_f32(v197, vrecps_f32(v147, v197))).n64_u64[0];
      LANES64(v199).n64_u64[0] =
          LANES64_OF(vmul_f32(v198, vrecps_f32(v147, v198))).n64_u64[0];
      v104 = vmulq_n_f32(
          v144,
          LANES64_OF(
              vmul_f32(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v195).n128_u64[0])),
                  vmul_f32(v199, vrecps_f32(v147, v199))))
              .n64_f32[0]);
      LANES128(v104).n128_u32[3] = 0;
      goto LABEL_27;
    }
    v167 = vnegq_f32(v268_.v274);
    v168 = vnegq_f32(v268_.v275);
    LANES128(v167).n128_u32[3] = 0;
    LANES128(v168).n128_u32[3] = 0;
    v169 = vmulq_f32(v167, v142);
    v170 = vmulq_f32(v142, v168);
    LANES128(v169).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v169, v169)).n128_u64[0];
    LANES128(v170).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v170, v170)).n128_u64[0];
    LANES64(v171).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v169).n128_u64[0])))
            .n64_u64[0];
    LANES64(v172).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v170).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(
            vuzp1_s8(vdup_lane_s16(
                         vand_s8(vclez_f32(v166),
                                 vand_s8(vclez_f32(v172), vcgez_f32(v171))),
                         0),
                     COERCE_AS(int8x8_t, LANES128(v268_.v274).n128_u64[0])))
            .n64_u32[0] == -1) {
      LANES64(v200).n64_u64[0] = LANES64_OF(vsub_f32(v171, v172)).n64_u64[0];
      v131 = v259;
      v202 = &v268_.v272;
      v201 = &v268_.v269;
      v203 = &v268_.v275;
      v184 = 0;
      v182 = 2;
      LANES64(v204).n64_u64[0] = LANES64_OF(vrecpe_f32(v200)).n64_u64[0];
      LANES64(v205).n64_u64[0] =
          LANES64_OF(vmul_f32(v204, vrecps_f32(v200, v204))).n64_u64[0];
      LANES64(v206).n64_u64[0] =
          LANES64_OF(vmul_f32(v205, vrecps_f32(v200, v205))).n64_u64[0];
      LANES64(v207).n64_u64[0] =
          LANES64_OF(vmul_f32(v206, vrecps_f32(v200, v206))).n64_u64[0];
      LANES64(v208).n64_u64[0] =
          LANES64_OF(vmul_f32(v207, vrecps_f32(v200, v207))).n64_u64[0];
      v104 = vmlaq_n_f32(
          v268_.v274, v142,
          LANES64_OF(
              vmul_f32(v171, vbsl_s8(vcgt_f32(vabd_f32(v171, v172),
                                              COERCE_AS(float32x2_t,
                                                        0x3400000034000000LL)),
                                     vmul_f32(v208, vrecps_f32(v200, v208)),
                                     ((int8x8_t){0}))))
              .n64_f32[0]);
      LANES128(v104).n128_u64[1] =
          LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u32[0];
    }
    else {
      v173 = vnegq_f32(v268_.v276[0]);
      v174 = vmulq_f32(v168, v143);
      LANES128(v174).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v174, v174)).n128_u64[0];
      LANES128(v173).n128_u32[3] = 0;
      LANES64(v175).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v174).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v174).n128_u64[0])))
              .n64_u64[0];
      v176 = vmulq_f32(v142, v173);
      LANES128(v176).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v176, v176)).n128_u64[0];
      LANES64(v177).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v176).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v176).n128_u64[0])))
              .n64_u64[0];
      v178 = vmulq_f32(v143, v173);
      LANES128(v178).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v178, v178)).n128_u64[0];
      LANES64(v179).n64_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v178).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vuzp1_s8(vdup_lane_s16(vand_s8(vand_s8(vcge_f32(v175, v172),
                                                     vcge_f32(v177, v179)),
                                             vclez_f32(v162)),
                                     0),
                       COERCE_AS(int8x8_t, LANES128(v268_.v274).n128_u64[0])))
              .n64_u32[0] == -1) {
        LANES64(v209).n64_u64[0] = LANES64_OF(vsub_f32(v175, v172)).n64_u64[0];
        v182 = 2;
        v184 = 1;
        LANES64(v210).n64_u64[0] =
            LANES64_OF(vadd_f32(v209, vsub_f32(v177, v179))).n64_u64[0];
        LANES64(v211).n64_u64[0] = LANES64_OF(vrecpe_f32(v210)).n64_u64[0];
        LANES64(v212).n64_u64[0] =
            LANES64_OF(vmul_f32(v211, vrecps_f32(v210, v211))).n64_u64[0];
        LANES64(v213).n64_u64[0] =
            LANES64_OF(vmul_f32(v212, vrecps_f32(v210, v212))).n64_u64[0];
        LANES64(v214).n64_u64[0] =
            LANES64_OF(vmul_f32(v213, vrecps_f32(v210, v213))).n64_u64[0];
        LANES64(v215).n64_u64[0] =
            LANES64_OF(vmul_f32(v214, vrecps_f32(v210, v214))).n64_u64[0];
        v216 = vmlaq_n_f32(
            v268_.v275, vsubq_f32(v268_.v276[0], v268_.v275),
            LANES64_OF(
                vmul_f32(v209,
                         vbsl_s8(vcgt_f32(vabs_f32(v210),
                                          COERCE_AS(float32x2_t,
                                                    0x3400000034000000LL)),
                                 vmul_f32(v215, vrecps_f32(v210, v215)),
                                 ((int8x8_t){0}))))
                .n64_f32[0]);
        LANES128(v216).n128_u64[1] =
            LANES128_OF(vextq_s8(v216, v216, 8u)).n128_u32[0];
        v104 = v216;
      }
      else {
        v180 = vmulq_f32(v167, v143);
        LANES128(v180).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v180, v180)).n128_u64[0];
        LANES64(v181).n64_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v180).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vuzp1_s8(vdup_lane_s16(
                             vand_s8(vclez_f32(v165),
                                     vand_s8(vclez_f32(v179), vcgez_f32(v181))),
                             0),
                         COERCE_AS(int8x8_t, LANES128(v268_.v274).n128_u64[0])))
                .n64_u32[0] != -1) {
          v131 = v259;
          if (LANES64_OF(
                  vuzp1_s8(
                      vdup_lane_s16(vand_s8(vclez_f32(v181), vclez_f32(v171)),
                                    0),
                      COERCE_AS(int8x8_t, LANES128(v268_.v274).n128_u64[0])))
                  .n64_u32[0] == -1) {
            v184 = 0;
            v182 = 1;
          }
          else {
            v182 = 1;
            LANES128(v104).n128_u64[0] =
                LANES64_OF(
                    vdup_lane_s16(
                        vand_s8(vcge_f32(v172, v175), vcgez_f32(v172)), 0))
                    .n64_u64[0];
            LANES128(v104).n128_u64[0] =
                LANES64_OF(
                    vuzp1_s8(COERCE_AS(int8x8_t, LANES128(v104).n128_u64[0]),
                             COERCE_AS(int8x8_t, LANES128(v104).n128_u64[0])))
                    .n64_u64[0];
            LANES64(v183).n64_u64[0] =
                LANES128_OF(vceqq_s32(v104, v250)).n128_u64[0];
            if (LANES128(v104).n128_u32[0] == -1) {
              v184 = 1;
            }
            else {
              v184 = 2;
            }
            v104 = vbslq_s8(vdupq_lane_s32(v183, 0), v268_.v275, v268_.v276[0]);
          }
          v202 = &v268_.v272;
          v201 = &v268_.v269;
          v203 = &v268_.v275;
          goto LABEL_38;
        }
        LANES64(v217).n64_u64[0] = LANES64_OF(vsub_f32(v181, v179)).n64_u64[0];
        LANES64(v218).n64_u64[0] = LANES64_OF(vabd_f32(v181, v179)).n64_u64[0];
        v182 = 2;
        v184 = 0;
        LANES64(v219).n64_u64[0] = LANES64_OF(vrecpe_f32(v217)).n64_u64[0];
        LANES64(v220).n64_u64[0] =
            LANES64_OF(vmul_f32(v219, vrecps_f32(v217, v219))).n64_u64[0];
        LANES64(v221).n64_u64[0] =
            LANES64_OF(vmul_f32(v220, vrecps_f32(v217, v220))).n64_u64[0];
        LANES64(v222).n64_u64[0] =
            LANES64_OF(vmul_f32(v221, vrecps_f32(v217, v221))).n64_u64[0];
        LANES64(v223).n64_u64[0] =
            LANES64_OF(vmul_f32(v222, vrecps_f32(v217, v222))).n64_u64[0];
        v104 = vmlaq_n_f32(
            v268_.v274, v143,
            LANES64_OF(
                vmul_f32(
                    v181,
                    vbsl_s8(vcgt_f32(v218, COERCE_AS(float32x2_t,
                                                     0x3400000034000000LL)),
                            vmul_f32(v223, vrecps_f32(v217, v223)),
                            ((int8x8_t){0}))))
                .n64_f32[0]);
        LANES128(v104).n128_u64[1] =
            LANES128_OF(vextq_s8(v104, v104, 8u)).n128_u32[0];
      }
      v131 = v259;
      v202 = v268_.v273;
      v201 = v268_.v270;
      v203 = v268_.v276;
    }
  LABEL_38:
    v224 = 16 * v184;
    v225 = *v203;
    v226 = *v202;
    v268_.v277 = v182;
    v227 = *(float32x4_t*)((char*)&v268_.v274 + v224);
    v228 = *(float32x4_t*)((char*)&v268_.v268 + v224);
    v268_.v271 = *(float32x4_t*)((char*)&v268_.v271 + v224);
    v268_.v272 = v226;
    v268_.v274 = v227;
    v268_.v275 = v225;
    v229 = *v201;
    v268_.v268 = v228;
    v268_.v269 = v229;
  LABEL_3:
    v64 = vmulq_f32(v104, v104);
    v55 = vnegq_f32(v104);
    LANES128(v64).n128_u64[0] = LANES128_OF(vpaddq_f32(v64, v64)).n128_u64[0];
    LANES128(v55).n128_u32[3] = 0;
    LANES128(v64).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
            .n64_u64[0];
    LANES64(v65).n64_u64[0] =
        LANES64_OF(
            vcgt_f32(v60, COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0])))
            .n64_u64[0];
    LANES64(v66).n64_u64[0] =
        LANES64_OF(
            vcgt_f32(COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]), v59))
            .n64_u64[0];
    PSEUDO_LOW_LANE64(v60, n64_u64, LANES128(v64).n128_u64[0]);
    v52 = v131;
    v54 = v104;
    LANES64(v67).n64_u64[0] =
        LANES64_OF(vand_s8(v65, COERCE_AS(int8x8_t, 0x100000001LL))).n64_u64[0];
    LANES64(v61).n64_u64[0] = LANES64_OF(vand_s8(v66, v65)).n64_u64[0];
    v62 = vdupq_lane_s32(v67, 0);
  }
  v230 = vbslq_s8(
      vcltzq_s32(vshlq_n_s32(
          vandq_s8(vdupq_lane_s32(vcgt_f32(v60, v251), 0), v62), 0x1Fu)),
      v55, v254);
  v231 = vmulq_f32(v230, v230);
  LANES128(v231).n128_u64[0] = LANES128_OF(vpaddq_f32(v231, v231)).n128_u64[0];
  LANES128(v231).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])))
          .n64_u64[0];
  LANES64(v232).n64_u64[0] =
      LANES64_OF(
          vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])))
          .n64_u64[0];
  LANES64(v233).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v232, vrsqrts_f32(vmul_f32(v232, v232),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v231).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v234).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v233, vrsqrts_f32(vmul_f32(v233, v233),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v231).n128_u64[0]))))
          .n64_u64[0];
  LANES64(v235).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v234, vrsqrts_f32(vmul_f32(v234, v234),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v231).n128_u64[0]))))
          .n64_u64[0];
  LANES128(v231).n128_u64[0] =
      LANES64_OF(
          vbsl_s8(
              vdup_lane_s32(
                  vceqz_f32(COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])),
                  0),
              COERCE_AS(int8x8_t, LANES128(v231).n128_u64[0]),
              vmul_f32(
                  COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                  vmul_f32(v235, vrsqrts_f32(
                                     vmul_f32(v235, v235),
                                     COERCE_AS(float32x2_t,
                                               LANES128(v231).n128_u64[0]))))))
          .n64_u64[0];
  LANES64(v236).n64_u64[0] =
      LANES64_OF(vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])))
          .n64_u64[0];
  v237 = vdupq_lane_s32(
      vcgtz_f32(COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0])), 0);
  LANES64(v238).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v236, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                             v236)))
          .n64_u64[0];
  LANES64(v239).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v238, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                             v238)))
          .n64_u64[0];
  LANES64(v240).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v239, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                             v239)))
          .n64_u64[0];
  LANES64(v241).n64_u64[0] =
      LANES64_OF(
          vmul_f32(v240, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                             v240)))
          .n64_u64[0];
  LANES128(v231).n128_u32[0] =
      LANES64_OF(
          vmul_f32(v241, vrecps_f32(
                             COERCE_AS(float32x2_t, LANES128(v231).n128_u64[0]),
                             v241)))
          .n64_u32[0];
  v242 = vdupq_n_s32(-*(unsigned __int8*)(LANES128(*(a1)).n128_u64[1] + 32));
  v243 = vmulq_n_f32(v230, LANES128(v231).n128_f32[0]);
  LANES128(v243).n128_u32[3] = 0;
  v244 = vnegq_f32(vandq_s8(v237, v243));
  LANES128(v244).n128_u32[3] = 0;
  *a9 = v244;
  *a8 = LANES64(v46).n64_u64[0];
  v268_.v280[0] = vbslq_s8(vcltzq_s32(vshlq_n_s32(v62, 0x1Fu)), v54, v52);
  if (v268_.v277 == 3) {
    v263 = v244;
    v267 = v242;
    physx_Gu_barycentricCoordinates_44e590(v268_.v280, &v268_.v274, &v268_.v275,
                                           v268_.v276, &v268_.v279,
                                           &v268_.v278);
    LANES128(v52).n128_u32[1] = LANES128(v268_.v271).n128_u32[1];
    v246 = vmulq_n_f32(vsubq_f32(v268_.v272, v268_.v271),
                       LANES64(v268_.v279).n64_f32[0]);
    LANES128(v246).n128_u32[3] = 0;
    v247 = vmulq_n_f32(vsubq_f32(v268_.v273[0], v268_.v271),
                       LANES64(v268_.v278).n64_f32[0]);
    v244 = v263;
    v242 = v267;
    LANES128(v247).n128_u32[3] = 0;
    v245 = vaddq_f32(v268_.v271, vaddq_f32(v246, v247));
  }
  else if (v268_.v277 == 2) {
    v262 = v244;
    v266 = v242;
    physx_Gu_barycentricCoordinates_44e510(v268_.v280, &v268_.v274, &v268_.v275,
                                           &v268_.v279);
    v244 = v262;
    v242 = v266;
    v245 = vmlaq_n_f32(v268_.v271, vsubq_f32(v268_.v272, v268_.v271),
                       LANES64(v268_.v279).n64_f32[0]);
    LANES128(v52).n128_u32[1] = 0;
    LANES128(v245).n128_u64[1] =
        LANES128_OF(vextq_s8(v245, v245, 8u)).n128_u32[0];
  }
  else {
    v245 = (__typeof__(v245)){0};
    if (v268_.v277 == 1) {
      v245 = v268_.v271;
    }
  }
  LANES128(v52).n128_u32[0] = *(_DWORD*)(LANES128(*(a1)).n128_u64[1] + 16);
  v248 = vmlsq_lane_f32(v245, v244,
                        COERCE_AS(float32x2_t, LANES128(v52).n128_u64[0]), 0);
  LANES128(v248).n128_u64[1] =
      LANES128_OF(vextq_s8(v248, v248, 8u)).n128_u32[0];
  *a10 = vbslq_s8(v242, v248, v245);
  return v69 != -1;
}

#pragma GCC visibility pop
