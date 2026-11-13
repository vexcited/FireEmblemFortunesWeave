#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_40b780(__int64, __int64, __int64, __int64, __int64, __int64,
                           __int64, __int64, __int64);
__int64
physx_Gu_PersistentContactManifold_addManifoldContactsToContactBuffer_4fba60(
    __int64 result, __int64, __int128*, float32x4_t*, float32x4_t*,
    float32x2_t*, _QWORD*);
__int64 physx_Gu_PersistentContactManifold_addManifoldPoint2(
    __int64, float32x4_t*, float32x4_t*, _OWORD*, float32x2_t*);
__int64 physx_Gu_epaPenetration(__int64, __int64*, unsigned __int8*,
                                unsigned __int8*, unsigned int, char, __int64,
                                double);
__int64 physx_source_geomutils_src_pcm_4d9a60(__int64, __int64, __int64,
                                              __int64, __int64, float32x4_t*,
                                              __int64, unsigned int*, float,
                                              float, __int64, __int64,
                                              float32x4_t*, __int64, __int64,
                                              char, __int64);
extern _UNKNOWN* GameData_2135c50;
extern _UNKNOWN* GameData_2135c98;
extern _UNKNOWN* GameData_2135df0;
extern _UNKNOWN* GameData_2135df8;
extern __int128 GameData_1a82dd0;
__int64 physx_source_geomutils_src_pcm_4d9000(
    __int64 a1, _DWORD* a2, int8x8_t* a3, float32x4_t* a4, int32x2_t* a5,
    float32x4_t** a6, float32x4_t* a7, __int64 a8, double a9, double a10,
    double a11, double a12, float32x4_t a13, float32x4_t a14);

__int64 physx_source_geomutils_src_pcm_4d9000(
    __int64 a1, _DWORD* a2, int8x8_t* a3, float32x4_t* a4, int32x2_t* a5,
    float32x4_t** a6, float32x4_t* a7, __int64 a8, double a9, double a10,
    double a11, double a12, float32x4_t a13, float32x4_t a14)
{
  unsigned __int64 v14;
  float32x4_t* v15;
  int8x16_t v19;
  __int64 v20;
  float32x4_t v21;
  int8x8_t v22;
  int8x16_t v23;
  float32x2_t v24;
  int8x16_t v25;
  int8x8_t v26;
  float32x4_t v27;
  int8x16_t v28;
  float32x2_t v29;
  float32x2_t v30;
  int8x8_t v31;
  int8x8_t v32;
  float32x4_t v33;
  float32x4_t v34;
  int8x8_t v35;
  float32x4_t v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  int8x8_t v40;
  float32x4_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x2_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  int32x4_t v49;
  float32x2_t v50;
  float32x2_t v51;
  float32x4_t v52;
  int8x8_t v53;
  float v54;
  float32x4_t v55;
  float32x4_t v56;
  int32x2_t v57;
  float32x2_t v58;
  float32x2_t v59;
  __int64 v60;
  float32x2_t v61;
  float32x2_t v62;
  unsigned __int64 v63;
  float32x2_t* v64;
  float32x4_t v65;
  float32x4_t v66;
  float32x4_t v67;
  float32x4_t v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x2_t v73;
  int8x16_t v74;
  float32x4_t v75;
  float32x4_t v76;
  unsigned __int8 v77;
  unsigned __int64* v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  int v81;
  float32x4_t v82;
  int8x16_t v83;
  float32x4_t v84;
  int8x16_t* v85;
  int8x16_t v86;
  int8x16_t v87;
  __int64 v88;
  __int64 v89;
  float32x4_t v90;
  float32x4_t v91;
  __int128 v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  int v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  int8x16_t v100;
  float32x4_t v101;
  int32x2_t v102;
  int8x8_t v103;
  float32x4_t v104;
  float32x4_t v105;
  float32x4_t v106;
  unsigned __int32 v107;
  float32x4_t v108;
  float32x4_t v109;
  char v110;
  int v111;
  float32x4_t v112;
  float32x4_t v113;
  float32x4_t* v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  int8x16_t v119;
  float32x2_t v120;
  int8x8_t v121;
  float32x2_t v122;
  int8x8_t v123;
  float32x4_t v124;
  int8x8_t v125;
  float32x4_t v126;
  float32x4_t v127;
  int8x16_t v128;
  float32x4_t v129;
  float32x4_t v130;
  __int128* v131;
  float32x4_t* v132;
  int8x16_t v133;
  float32x2_t v134;
  int8x8_t v135;
  float32x4_t v136;
  int8x8_t v137;
  int8x8_t v138;
  float32x4_t v139;
  int8x16_t v140;
  float32x4_t v141;
  float32x4_t v142;
  float32x4_t v143;
  float32x4_t* v144;
  float32x4_t v145;
  float32x4_t v146;
  float32x4_t* v147;
  float32x4_t v148;
  float32x4_t v149;
  int8x16_t v150;
  int8x8_t v151;
  int8x16_t v152;
  float32x2_t v153;
  float32x4_t v154;
  int8x8_t v155;
  float32x2_t v156;
  int8x8_t v157;
  int8x8_t v158;
  float32x4_t v159;
  float32x4_t v160;
  int8x16_t v161;
  int8x16_t v162;
  float32x2_t v163;
  float32x2_t v164;
  float32x2_t v165;
  float32x2_t v166;
  float32x2_t v167;
  float32x2_t v168;
  float32x2_t v169;
  float32x2_t v170;
  float32x2_t v171;
  float32x4_t v172;
  int32x2_t v174;
  float32x4_t v175;
  float32x4_t v176;
  float32x4_t v177;
  int8x16_t v178;
  float32x4_t v179;
  unsigned __int64 v180;
  unsigned __int64 v181;
  float32x4_t v182;
  float32x4_t v183;
  struct {
    float32x2_t v184;
    char gap232_[4];
    unsigned int v185;
  } v184_;
  float32x4_t v186;
  float32x4_t v187;
  float32x4_t v188;
  struct {
    float32x4_t v189[2];
    __int64 v190;
  } v189_;
  __int64 v191[2];
  _QWORD v192[2];
  struct {
    float32x4_t v193;
    unsigned __int32 v194;
    unsigned __int32 v195;
    unsigned __int32 v196;
    int v197;
    char v198;
    char gap401_[15];
    float32x4_t v199;
    float32x4_t v200;
    unsigned __int64 v201;
  } v193_;
  struct {
    float32x4_t v202;
    float v203;
    float v204;
    float v205;
    int v206;
    char v207;
    char gap497_[15];
    __int128 v208;
  } v202_;
  struct {
    float32x4_t v209;
    float32x4_t v210;
    float32x4_t v211;
    float32x4_t v212;
  } v209_;
  float32x2_t v213;
  struct {
    float32x4_t v214;
    float32x4_t v215;
  } v214_;
  float32x4_t v216[3];
  unsigned __int64 v217;

  v15 = *a6;
  LANES128(a13).n128_u32[0] = LANES64(a3[2]).n64_u32[0];
  LANES128(a14).n128_u32[0] = LANES128(a4[1]).n128_u32[0];
  v19 = *(int8x16_t*)LANES64(*(a3)).n64_u64;
  LODWORD(v14) = LANES64(a5[1]).n64_u32[0];
  v20 = LANES128((*a6)[4]).n128_u8[0];
  v21 = vnegq_f32(*a4);
  LANES128(a13).n128_u32[1] = LANES64(a3[2]).n64_u32[1];
  LANES128(a14).n128_u32[1] = LANES128(a4[1]).n128_u32[1];
  LANES64(v22).n64_u64[0] = LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0];
  v23 = v21;
  LANES128(a13).n128_u32[2] = LANES64(a3[3]).n64_u32[0];
  LANES128(a14).n128_u32[2] = LANES128(a4[1]).n128_u32[2];
  LANES128(v23).n128_u32[3] = DWORD3(*(unsigned __int128*)a4);
  LANES64(v24).n64_u64[0] =
      LANES64_OF(
          vmul_f32(
              vext_s8(COERCE_AS(int8x8_t, LANES64(*(a3)).n64_u64[0]), v22, 4u),
              COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  v25 = v23;
  LANES64(v26).n64_u64[0] = LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0];
  v27 = vmulq_laneq_f32(v23, *(float32x4_t*)LANES64(*(a3)).n64_u64, 3);
  v28 = vsubq_f32(a13, a14);
  v214_.v214 = *a4;
  v214_.v215 = a14;
  v216[0] = v19;
  v216[1] = a13;
  LANES128(v25).n128_u32[3] = 0;
  LANES64(v29).n64_u64[0] =
      LANES64_OF(
          vext_s8(COERCE_AS(int8x8_t, LANES128(v21).n128_u64[0]), v26, 4u))
          .n64_u64[0];
  LANES64(v30).n64_u64[0] =
      LANES64_OF(
          vmul_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]), v26))
          .n64_u64[0];
  LANES64(v40).n64_u64[0] =
      LANES128_OF(vdupq_laneq_s32(v214_.v214, 3)).n128_u64[0];
  LANES64(v31).n64_u64[0] =
      LANES64_OF(
          vmls_f32(v30, COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), v22))
          .n64_u64[0];
  LANES64(v32).n64_u64[0] =
      LANES64_OF(
          vmls_f32(v24, v29, COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_u64[0];
  LANES128(v23).n128_u64[0] = LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0];
  v33 = vmulq_f32(v25, v28);
  v34 = vmulq_n_f32(
      v28, LANES64_OF(
               vmla_f32(COERCE_AS(float32x2_t, 0xBF000000BF000000LL), v40, v40))
               .n64_f32[0]);
  LANES128(v33).n128_u64[0] = LANES128_OF(vpaddq_f32(v33, v33)).n128_u64[0];
  LANES128(v34).n128_u32[3] = 0;
  LANES128(v21).n128_u32[3] = 0;
  LANES64(v35).n64_u64[0] =
      LANES64_OF(
          vmls_f32(
              vmul_f32(
                  COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v28, v28, 4u)).n128_u64[0])),
              vext_s8(COERCE_AS(int8x8_t, LANES128(v21).n128_u64[0]),
                      COERCE_AS(int8x8_t, LANES128(v23).n128_u64[0]), 4u),
              COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
          .n64_u64[0];
  LANES128(v36).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              v35,
              vmls_f32(
                  vmul_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])),
                  COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0])),
              4u))
          .n64_u64[0];
  v39 = a2[2];
  v38 = a2[3];
  v37 = (__int64)(a2 + 2);
  PSEUDO_LOW_LANE64(v40, n64_u32, a2[4]);
  v217 = LANES64_OF(
             vdup_lane_s32(COERCE_AS(int32x2_t, LANES64(*(a5)).n64_u64[0]), 0))
             .n64_u64[0];
  LANES128(v36).n128_u64[1] = LANES64(v35).n64_u32[0];
  v41 = vmulq_laneq_f32(v19, v214_.v214, 3);
  LANES128(v19).n128_u32[3] = 0;
  v42 = vmlaq_laneq_f32(v34, v36, v214_.v214, 3);
  v43 = vmulq_f32(v19, v21);
  LANES128(v43).n128_u64[0] = LANES128_OF(vpaddq_f32(v43, v43)).n128_u64[0];
  LANES128(v42).n128_u64[1] = LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u32[0];
  LANES128(v44).n128_u64[0] = LANES64_OF(vext_s8(v32, v31, 4u)).n64_u64[0];
  LANES64(v45).n64_u64[0] =
      LANES64_OF(
          vsub_f32(
              vmul_f32(v22, COERCE_AS(float32x2_t,
                                      LANES128_OF(
                                          vextq_s8(v214_.v214, v214_.v214, 8u))
                                          .n128_u64[0])),
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]))))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v44).n128_i8[8] = v32;
  v46 = vmlaq_n_f32(
      v42, v25,
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_f32[0]);
  v48 = vaddq_f32(v46, v46);
  v47 = vaddq_f32(vaddq_f32(v27, v41), v44);
  LANES128(v48).n128_u32[3] = 0;
  v49 = vaddq_f32(v47, v47);
  LANES128(v44).n128_u64[0] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]), 1))
          .n64_u64[0];
  LANES128(v46).n128_u64[0] = LANES64_OF(vdup_laneq_s32(v47, 2)).n64_u64[0];
  LANES128(v27).n128_u64[0] = LANES64_OF(vdup_laneq_s32(v49, 2)).n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
          .n64_u64[0];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 0))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] =
      LANES64_OF(
          vmul_lane_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]), 1))
          .n64_u64[0];
  LANES64(v50).n64_u64[0] =
      LANES64_OF(vmul_laneq_f32(
                     COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), v49, 2))
          .n64_u64[0];
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vmul_n_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                            LANES128(v49).n128_f32[0]))
          .n64_u64[0];
  LANES64(v51).n64_u64[0] =
      LANES64_OF(vmul_n_f32(COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                            LANES128(v49).n128_f32[0]))
          .n64_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(
          vmul_lane_f32(COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0]), 1))
          .n64_u64[0];
  LANES128(v49).n128_u64[0] =
      LANES64_OF(
          vmul_lane_f32(
              vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v49).n128_u64[0]), 1),
              v45, 1))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vmul_lane_f32(
                     COERCE_AS(float32x2_t, LANES128(v27).n128_u64[0]), v45, 1))
          .n64_u64[0];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vmul_lane_f32(
                     COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]), v45, 1))
          .n64_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(
          vsub_f32(COERCE_AS(float32x2_t, 0x3F8000003F800000LL),
                   vdup_lane_s32(
                       COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 0)))
          .n64_u64[0];
  LANES128(v52).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              vsub_f32(
                  vsub_f32(COERCE_AS(float32x2_t, 0x3F8000003F800000LL),
                           COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])),
                  v50),
              vadd_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])),
              4u))
          .n64_u64[0];
  LANES128(v52).n128_u64[1] =
      LANES64_OF(
          vsub_f32(v51, COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
          .n64_u32[0];
  LANES128(v55).n128_u64[0] =
      LANES64_OF(
          vext_s8(
              vsub_f32(COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])),
              vsub_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]), v50),
              4u))
          .n64_u64[0];
  LANES64(v53).n64_u64[0] =
      LANES64_OF(
          vadd_f32(v51, COERCE_AS(float32x2_t, LANES128(v49).n128_u64[0])))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
          .n64_u32[0];
  LANES128(v56).n128_u64[0] =
      LANES64_OF(
          vext_s8(v53,
                  vsub_f32(COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])),
                  4u))
          .n64_u64[0];
  PSEUDO_LOW_LANE64(v53, n64_u32, *(_DWORD*)(a1 + 8));
  v54 = *(float*)(a1 + 12);
  LANES128(v55).n128_u64[1] = LANES128(v27).n128_u32[0];
  PSEUDO_LOW_LANE128(v27, n128_f32, *(float*)&v14 * 0x1.3333340000000p-3f);
  LANES128(v56).n128_u64[1] =
      LANES64_OF(vsub_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
          .n64_u32[0];
  LANES64(v57).n64_u64[0] = LANES64_OF(vdup_lane_s32(v53, 0)).n64_u64[0];
  LANES64(v213).n64_u64[0] = LANES64(v57).n64_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vpmin_f32(vdup_lane_s32(v40, 0),
                           COERCE_AS(float32x2_t, __PAIR64__(v38, v39))))
          .n64_u64[0];
  LANES64(v58).n64_u64[0] =
      LANES64_OF(vpmin_f32(COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0])))
          .n64_u64[0];
  LANES64(v59).n64_u64[0] =
      LANES64_OF(
          vmin_f32(
              vmin_f32(vmul_f32(v58, vdup_n_s32(0x3E19999Au)),
                       vdup_lane_s32(
                           COERCE_AS(int32x2_t, LANES128(v27).n128_u64[0]), 0)),
              v57))
          .n64_u64[0];
  if ((_DWORD)v20 != 0) {
    v60 = 48 * v20;
    LANES64(v61).n64_u64[0] =
        LANES64_OF(vmul_f32(v59, vdup_n_s32(0x3F4CCCCDu))).n64_u64[0];
    LANES64(v62).n64_u64[0] = LANES64_OF(vmul_f32(v61, v61)).n64_u64[0];
    do {
      while (1) {
        v63 = LANES128(v15[5]).n128_u64[0];
        v64 = (float32x2_t*)(v63 + v60 - 48);
        v65 = vmulq_n_f32(v52, COERCE_FLOAT(*(_OWORD*)LANES64(*(v64)).n64_u64));
        v66 = vmulq_lane_f32(
            v55, COERCE_AS(float32x2_t, LANES64(*(v64)).n64_u64[0]), 1);
        v67 = vmulq_laneq_f32(v56, *(float32x4_t*)LANES64(*(v64)).n64_u64, 2);
        LANES128(v65).n128_u32[3] = 0;
        LANES128(v66).n128_u32[3] = 0;
        LANES128(v67).n128_u32[3] = 0;
        v68 = vaddq_f32(v48, vaddq_f32(v67, vaddq_f32(v65, v66)));
        v70 = *(float32x4_t*)(v63 + v60 - 32);
        v69 = *(float32x4_t*)(v63 + v60 - 16);
        v71 = v69;
        LANES128(v71).n128_u32[3] = 0;
        v72 = vmulq_f32(v71, vsubq_f32(v68, v70));
        LANES128(v72).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v72, v72)).n128_u64[0];
        LANES64(v73).n64_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0])))
                .n64_u64[0];
        v74 = vmlsq_lane_f32(v68, v71, v73, 0);
        LANES128(v74).n128_u64[1] =
            LANES128_OF(vextq_s8(v74, v74, 8u)).n128_u32[0];
        v75 = vsubq_f32(v70, v74);
        v76 = vmulq_f32(v75, v75);
        LANES128(v76).n128_u64[0] =
            LANES128_OF(vpaddq_f32(v76, v76)).n128_u64[0];
        if (LANES64_OF(
                vuzp1_s8(vdup_lane_s16(
                             vcgt_f32(vpadd_f32(
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v76).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v76).n128_u64[0])),
                                      v62),
                             0),
                         v40))
                .n64_u32[0] == -1) {
          break;
        }
        LANES128(v69).n128_u32[3] = LANES64(v73).n64_u32[1];
        *(float32x4_t*)(v63 + v60 - 16) = v69;
        v60 -= 48;
        if (v60 == 0) {
          goto LABEL_6;
        }
      }
      v77 = LANES128(v15[4]).n128_u8[0] - 1;
      LANES128(v15[4]).n128_u8[0] = v77;
      v78 = (unsigned __int64*)(v63 + 48LL * v77);
      v79 = v78[5];
      LANES64(v64[3]).n64_u64[0] = v78[3];
      LANES64(v64[5]).n64_u64[0] = v79;
      LANES64(v64[1]).n64_u64[0] = v78[1];
      LANES64(*(v64)).n64_u64[0] = *v78;
      v80 = v78[2];
      LANES64(v64[4]).n64_u64[0] = v78[4];
      LANES64(v64[2]).n64_u64[0] = v80;
      v60 -= 48;
    } while (v60 != 0);
  LABEL_6:
    v81 = LANES128(v15[4]).n128_u8[0];
    v82 = v47;
    LANES128(v82).n128_u32[3] = LANES64(v45).n64_u32[1];
    if (v81 != (_DWORD)v20) {
      goto LABEL_14;
    }
  }
  else {
    v81 = 0;
    v82 = v47;
    LANES128(v82).n128_u32[3] = LANES64(v45).n64_u32[1];
  }
  v83 = vabdq_f32(v48, v15[1]);
  v84 = vmulq_f32(v82, *v15);
  LANES128(v84).n128_u64[0] = LANES128_OF(vpaddq_f32(v84, v84)).n128_u64[0];
  LANES128(v83).n128_u64[0] =
      LANES64_OF(
          vpmax_f32(COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v83, v83, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(
          vuzp1_s8(
              vdup_lane_s16(
                  vorr_s8(
                      vcgt_f32(
                          vld1_dup_f32((const float*)GameData_2135df8 + v20),
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v84).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v84).n128_u64[0]))),
                      vcgt_f32(
                          vpmax_f32(
                              COERCE_AS(float32x2_t, LANES128(v83).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v83).n128_u64[0])),
                          vmul_n_f32(v59, *((float*)GameData_2135df0 + v20)))),
                  0),
              v40))
          .n64_u32[0] != -1) {
    if ((_DWORD)v20 == 0) {
      LOBYTE(v96) = 0;
      return v96 & 1;
    }
    v85 = (int8x16_t*)LANES128(v15[5]).n128_u64[0];
    v86 = v85[2];
    v87 = v86;
    if ((_DWORD)v20 != 1) {
      v88 = (v20 - 1) & 7;
      if ((unsigned __int64)(v20 - 2) >= 7) {
        v87 = v85[2];
        v144 = v85 + 14;
        v89 = 1;
        do {
          v89 += 8;
          v145 = vaddq_f32(
              vaddq_f32(
                  vaddq_f32(
                      vaddq_f32(vaddq_f32(vaddq_f32(vaddq_f32(v87, v144[-9]),
                                                    v144[-6]),
                                          v144[-3]),
                                *v144),
                      v144[3]),
                  v144[6]),
              v144[9]);
          v146 = v144[12];
          v144 += 24;
          v87 = vaddq_f32(v145, v146);
        } while (v89 - ((v20 - 1) & 0xFFFFFFFFFFFFFFF8LL) != 1);
      }
      else {
        v89 = 1;
        v87 = v85[2];
      }
      if (v88 != 0) {
        v147 = &v85[3 * v89 + 2];
        do {
          v148 = *v147;
          v147 += 3;
          --v88;
          v87 = vaddq_f32(v87, v148);
        } while (v88 != 0);
      }
    }
    LANES128(v87).n128_u32[3] = 0;
    v131 = (__int128*)&v193_.v193;
    v132 = &v193_.v193;
    LANES128(v86).n128_u32[3] = 0;
    v149 = vmulq_f32(v87, v87);
    LANES128(v149).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v149, v149)).n128_u64[0];
    v150 = vbslq_s8(
        vcltzq_s32(vshlq_n_s32(
            vmovl_u16(vdup_lane_s16(
                vcgt_f32(
                    vpadd_f32(
                        COERCE_AS(float32x2_t, LANES128(v149).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v149).n128_u64[0])),
                    COERCE_AS(float32x2_t, 0x3400000034000000LL)),
                0)),
            0x1Fu)),
        v87, v86);
    LANES64(v151).n64_u64[0] =
        LANES128_OF(vextq_s8(v150, v150, 8u)).n128_u64[0];
    v152 = v214_.v214;
    LANES64(v153).n64_u64[0] =
        LANES128_OF(vdupq_laneq_s32(v214_.v214, 3)).n128_u64[0];
    LANES128(v152).n128_u32[3] = 0;
    v154 = vmulq_n_f32(
        v150, LANES64_OF(vmla_f32(COERCE_AS(float32x2_t, 0xBF000000BF000000LL),
                                  v153, v153))
                  .n64_f32[0]);
    LANES64(v155).n64_u64[0] =
        LANES128_OF(vextq_s8(v152, v152, 8u)).n128_u64[0];
    LANES128(v154).n128_u32[3] = 0;
    LANES64(v156).n64_u64[0] =
        LANES64_OF(
            vext_s8(COERCE_AS(int8x8_t, LANES128(v214_.v214).n128_u64[0]), v155,
                    4u))
            .n64_u64[0];
    LANES64(v157).n64_u64[0] =
        LANES64_OF(
            vmls_f32(vmul_f32(v155, COERCE_AS(float32x2_t,
                                              LANES128(v150).n128_u64[0])),
                     COERCE_AS(float32x2_t, LANES128(v214_.v214).n128_u64[0]),
                     v151))
            .n64_u64[0];
    LANES64(v158).n64_u64[0] =
        LANES64_OF(
            vmls_f32(
                vmul_f32(
                    COERCE_AS(float32x2_t, LANES128(v214_.v214).n128_u64[0]),
                    vext_s8(COERCE_AS(int8x8_t, LANES128(v150).n128_u64[0]),
                            v151, 4u)),
                v156, COERCE_AS(float32x2_t, LANES128(v150).n128_u64[0])))
            .n64_u64[0];
    v159 = vmulq_f32(v152, v150);
    LANES128(v159).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v159, v159)).n128_u64[0];
    LANES128(v160).n128_u64[0] = LANES64_OF(vext_s8(v158, v157, 4u)).n64_u64[0];
    LANES128(v160).n128_u64[1] = LANES64(v158).n64_u32[0];
    v161 = vmlaq_laneq_f32(v154, v160, v214_.v214, 3);
    LANES128(v161).n128_u64[1] =
        LANES128_OF(vextq_s8(v161, v161, 8u)).n128_u32[0];
    v162 = vmlaq_n_f32(
        v161, v152,
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0])))
            .n64_f32[0]);
    LANES128(v162).n128_u64[1] =
        LANES128_OF(vextq_s8(v162, v162, 8u)).n128_u32[0];
    LANES128(v159).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v162).n128_u64[0])),
                vmul_f32(*(float32x2_t*)&LANES128(v162).n128_i8[8],
                         *(float32x2_t*)&LANES128(v162).n128_i8[8])))
            .n64_u64[0];
    LANES128(v159).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0])))
            .n64_u64[0];
    LANES64(v163).n64_u64[0] =
        LANES64_OF(
            vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0])))
            .n64_u64[0];
    LANES64(v164).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v163, vrsqrts_f32(vmul_f32(v163, v163),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v159).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v165).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v164, vrsqrts_f32(vmul_f32(v164, v164),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v159).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v166).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v165, vrsqrts_f32(vmul_f32(v165, v165),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v159).n128_u64[0]))))
            .n64_u64[0];
    LANES128(v159).n128_u64[0] =
        LANES64_OF(
            vbsl_s8(
                vdup_lane_s32(vceqz_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v159).n128_u64[0])),
                              0),
                COERCE_AS(int8x8_t, LANES128(v159).n128_u64[0]),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0]),
                         vmul_f32(v166,
                                  vrsqrts_f32(
                                      vmul_f32(v166, v166),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v159).n128_u64[0]))))))
            .n64_u64[0];
    LANES64(v167).n64_u64[0] =
        LANES64_OF(
            vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v159).n128_u64[0])))
            .n64_u64[0];
    LANES64(v168).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v167, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v159).n128_u64[0]),
                                      v167)))
            .n64_u64[0];
    LANES64(v169).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v168, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v159).n128_u64[0]),
                                      v168)))
            .n64_u64[0];
    LANES64(v170).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v169, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v159).n128_u64[0]),
                                      v169)))
            .n64_u64[0];
    LANES64(v171).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v170, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v159).n128_u64[0]),
                                      v170)))
            .n64_u64[0];
    v172 = vmulq_n_f32(
        v162,
        LANES64_OF(
            vmul_f32(v171, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v159).n128_u64[0]),
                                      v171)))
            .n64_f32[0]);
    LANES128(v172).n128_u32[3] = 0;
    v193_.v193 = v172;
  LABEL_32:
    physx_Gu_PersistentContactManifold_addManifoldContactsToContactBuffer_4fba60(
        (__int64)v15, (__int64)a7, v131, v132, v216, &v213, &v217);
    LOBYTE(v96) = 1;
    return v96 & 1;
  }
LABEL_14:
  *v15 = v82;
  v15[1] = v48;
  v193_.v201 = LANES64(v57).n64_u64[0];
  v90 = vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82dd0), v54);
  LANES64(v174).n64_u64[0] = v14;
  v209_.v209 = v52;
  v209_.v210 = v55;
  v91 =
      vmulq_lane_f32(v55, COERCE_AS(float32x2_t, LANES128(v90).n128_u64[0]), 1);
  v175 = v56;
  v176 = v55;
  v202_.v207 = 0;
  v193_.v193 = v48;
  *(_QWORD*)&v92 = __PAIR64__(v38, v39);
  v93 = vmulq_n_f32(v52, LANES128(v90).n128_f32[0]);
  v202_.v206 = 3;
  v94 = vmulq_laneq_f32(v56, v90, 2);
  LANES128(v91).n128_u32[3] = 0;
  v177 = v52;
  v178 = v82;
  LANES128(v93).n128_u32[3] = 0;
  LANES128(v94).n128_u32[3] = 0;
  v180 = LANES128(v47).n128_u64[0];
  v181 = LANES64(v45).n64_u64[0];
  *((_QWORD*)&v92 + 1) = LANES64(v40).n64_u32[0];
  v95 = vaddq_f32(v94, vaddq_f32(v93, v91));
  v209_.v211 = v56;
  v209_.v212 = v48;
  v193_.v194 = LANES64(v53).n64_u32[0];
  v193_.v195 = LANES64(v53).n64_u32[0];
  v193_.v196 = LANES64(v53).n64_u32[0];
  v193_.v197 = 4;
  v193_.v198 = 1;
  v202_.v202 = v214_.v215;
  v189_.v190 = 0;
  v179 = v48;
  v192[0] = (char*)GameData_2135c50 + 16;
  v192[1] = &v193_.v193;
  v191[0] = (__int64)GameData_2135c98 + 16;
  v191[1] = (__int64)&v202_.v202;
  v202_.v208 = v92;
  v202_.v203 = 0x1.3333340000000p-3f * LANES64(v58).n64_f32[0];
  v202_.v204 = 0x1.99999a0000000p-5f * LANES64(v58).n64_f32[0];
  v202_.v205 = 0x1.99999a0000000p-5f * LANES64(v58).n64_f32[0];
  v193_.v199 = vaddq_f32(v48, v95);
  v193_.v200 = vsubq_f32(v48, v95);
  v186 = vsubq_f32(v48, v214_.v215);
  v187 = (__typeof__(v187)){0};
  v188 = (__typeof__(v188)){0};
  v189_.v189[0] = (__typeof__(v189_.v189[0])){0};
  v96 = GameRoutine_40b780(
      (__int64)v192, (__int64)v191, (__int64)&v186, (__int64)&v217, 1,
      (__int64)LANES128(v15[4]).n128_i64 + 3,
      (__int64)LANES128(v15[4]).n128_i64 + 7,
      (__int64)LANES128(v15[4]).n128_i64 + 2, (__int64)&v187);
  v184_.v185 = 0;
  if (v96 != 0) {
    if (v96 == 2) {
      v97 = v187;
      v98 = v188;
      v100 = v178;
      v99 = v179;
      v101 = vsubq_f32(v187, v179);
      LANES64(v103).n64_u64[0] = v180;
      LANES64(v102).n64_u64[0] = v181;
      v184_.v185 = 1;
      v104 = vmulq_f32(v101, v177);
      v105 = vmulq_f32(v101, v176);
      v106 = vmulq_f32(v101, v175);
      LANES128(v106).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v106, v106)).n128_u64[0];
      LANES128(v104).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v104, v104)).n128_u64[0];
      LANES128(v105).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v105, v105)).n128_u64[0];
      LANES128(v105).n128_u64[0] =
          LANES64_OF(
              vext_s8(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v104).n128_u64[0])),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v105).n128_u64[0])),
                  4u))
              .n64_u64[0];
      v107 = HIDWORD(v189_.v190);
      LANES128(v105).n128_u64[1] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v106).n128_u64[0])))
              .n64_u32[0];
      v108 = v189_.v189[0];
      v109 = v189_.v189[0];
      *a7 = v105;
      a7[1] = v98;
      LANES128(v109).n128_u32[3] = v107;
      a7[2] = v109;
      v110 = 0;
      if ((_DWORD)v20 == 0) {
        goto LABEL_24;
      }
    }
    else {
      if (v96 == 4) {
        LOBYTE(v96) = physx_source_geomutils_src_pcm_4d9a60(
            (__int64)&v193_.v193, (__int64)&v202_.v202, v37,
            (__int64)&v209_.v209, (__int64)v216, &v214_.v214, (__int64)a7,
            &v184_.v185, v202_.v203, LANES64(a5[1]).n64_f32[0], (__int64)a7,
            (__int64)v15, v189_.v189, (__int64)&v188, (__int64)&v217, 1, a8);
        return v96 & 1;
      }
      v110 = 1;
      v111 = physx_Gu_epaPenetration(
          (__int64)v192, v191, &LANES128(v15[4]).n128_u8[3],
          &LANES128(v15[4]).n128_u8[7], LANES128(v15[4]).n128_u8[2], 1,
          (__int64)&v187, LANES64_OF(vdup_lane_s32(v174, 0)).n64_f64[0]);
      LANES64(v103).n64_u64[0] = v180;
      LANES64(v102).n64_u64[0] = v181;
      v100 = v178;
      v99 = v179;
      if (v111 != 5) {
        goto LABEL_24;
      }
      v97 = v187;
      v112 = v188;
      v113 = vsubq_f32(v187, v209_.v212);
      v114 = &a7[3 * v184_.v185++];
      v115 = vmulq_f32(v209_.v209, v113);
      v116 = vmulq_f32(v113, v209_.v210);
      v117 = vmulq_f32(v113, v209_.v211);
      v107 = HIDWORD(v189_.v190);
      LANES128(v117).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v117, v117)).n128_u64[0];
      LANES128(v115).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v115, v115)).n128_u64[0];
      LANES128(v116).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v116, v116)).n128_u64[0];
      LANES128(v115).n128_u64[0] =
          LANES64_OF(
              vext_s8(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v115).n128_u64[0])),
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v116).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v116).n128_u64[0])),
                  4u))
              .n64_u64[0];
      LANES128(v115).n128_u64[1] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v117).n128_u64[0])))
              .n64_u32[0];
      v108 = v189_.v189[0];
      v118 = v189_.v189[0];
      *v114 = v115;
      v114[1] = v112;
      LANES128(v118).n128_u32[3] = v107;
      v114[2] = v118;
      v110 = 0;
      if ((_DWORD)v20 == 0) {
        goto LABEL_24;
      }
    }
    if (v81 == (_DWORD)v20) {
      LANES128(v108).n128_u32[3] = v107;
      v119 = vsubq_f32(v97, v99);
      LANES64(v120).n64_u64[0] = LANES64_OF(vdup_lane_s32(v102, 1)).n64_u64[0];
      LANES128(v100).n128_u32[3] = 0;
      v183 = v108;
      LANES64(v121).n64_u64[0] =
          LANES128_OF(vextq_s8(v100, v100, 8u)).n128_u64[0];
      LANES64(v184_.v184).n64_u64[0] =
          LANES64_OF(vmul_f32(v59, vdup_n_s32(0x3DCCCCCDu))).n64_u64[0];
      LANES64(v122).n64_u64[0] = LANES64_OF(vext_s8(v103, v121, 4u)).n64_u64[0];
      LANES64(v123).n64_u64[0] =
          LANES64_OF(
              vmls_f32(
                  vmul_f32(v121,
                           COERCE_AS(float32x2_t, LANES128(v119).n128_u64[0])),
                  v103,
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v119, v119, 8u)).n128_u64[0])))
              .n64_u64[0];
      v124 = vmulq_n_f32(
          v119,
          LANES64_OF(vmla_f32(COERCE_AS(float32x2_t, 0xBF000000BF000000LL),
                              v120, v120))
              .n64_f32[0]);
      LANES64(v125).n64_u64[0] =
          LANES64_OF(
              vmls_f32(
                  vmul_f32(v103, COERCE_AS(float32x2_t,
                                           LANES128_OF(vextq_s8(v119, v119, 4u))
                                               .n128_u64[0])),
                  v122, COERCE_AS(float32x2_t, LANES128(v119).n128_u64[0])))
              .n64_u64[0];
      v126 = vmulq_f32(v100, v119);
      LANES128(v124).n128_u32[3] = 0;
      LANES128(v126).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v126, v126)).n128_u64[0];
      LANES128(v127).n128_u64[0] =
          LANES64_OF(vext_s8(v125, v123, 4u)).n64_u64[0];
      LANES128(v127).n128_u64[1] = LANES64(v125).n64_u32[0];
      v128 = vmlsq_lane_f32(v124, v127, v102, 1);
      LANES128(v128).n128_u64[1] =
          LANES128_OF(vextq_s8(v128, v128, 8u)).n128_u32[0];
      v129 = vmlaq_n_f32(
          v128, v100,
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v126).n128_u64[0])))
              .n64_f32[0]);
      v130 = vaddq_f32(v129, v129);
      LANES128(v130).n128_u32[3] = 0;
      v182 = v130;
      physx_Gu_PersistentContactManifold_addManifoldPoint2(
          (__int64)v15, &v182, &v188, &v183, &v184_.v184);
      v131 = (__int128*)&v182;
      v132 = &v182;
      v133 = v214_.v214;
      LANES64(v134).n64_u64[0] =
          LANES128_OF(vdupq_laneq_s32(v214_.v214, 3)).n128_u64[0];
      LANES64(v135).n64_u64[0] =
          LANES128_OF(vextq_s8(v189_.v189[0], v189_.v189[0], 8u)).n128_u64[0];
      LANES128(v133).n128_u32[3] = 0;
      v136 = vmulq_n_f32(
          v189_.v189[0],
          LANES64_OF(vmla_f32(COERCE_AS(float32x2_t, 0xBF000000BF000000LL),
                              v134, v134))
              .n64_f32[0]);
      LANES64(v137).n64_u64[0] =
          LANES128_OF(vextq_s8(v133, v133, 8u)).n128_u64[0];
      LANES128(v136).n128_u32[3] = 0;
      LANES64(v138).n64_u64[0] =
          LANES64_OF(
              vmls_f32(
                  vmul_f32(
                      COERCE_AS(float32x2_t, LANES128(v214_.v214).n128_u64[0]),
                      vext_s8(COERCE_AS(int8x8_t,
                                        LANES128(v189_.v189[0]).n128_u64[0]),
                              v135, 4u)),
                  vext_s8(COERCE_AS(int8x8_t, LANES128(v214_.v214).n128_u64[0]),
                          v137, 4u),
                  COERCE_AS(float32x2_t, LANES128(v189_.v189[0]).n128_u64[0])))
              .n64_u64[0];
      LANES128(v139).n128_u64[0] =
          LANES64_OF(
              vext_s8(
                  v138,
                  vmls_f32(
                      vmul_f32(v137,
                               COERCE_AS(float32x2_t,
                                         LANES128(v189_.v189[0]).n128_u64[0])),
                      COERCE_AS(float32x2_t, LANES128(v214_.v214).n128_u64[0]),
                      v135),
                  4u))
              .n64_u64[0];
      LANES128(v139).n128_u64[1] = LANES64(v138).n64_u32[0];
      v140 = vmlaq_laneq_f32(v136, v139, v214_.v214, 3);
      LANES128(v140).n128_u64[1] =
          LANES128_OF(vextq_s8(v140, v140, 8u)).n128_u32[0];
      v141 = vmulq_f32(v133, v189_.v189[0]);
      LANES128(v141).n128_u64[0] =
          LANES128_OF(vpaddq_f32(v141, v141)).n128_u64[0];
      v142 = vmlaq_n_f32(
          v140, v133,
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v141).n128_u64[0])))
              .n64_f32[0]);
      v143 = vaddq_f32(v142, v142);
      LANES128(v143).n128_u32[3] = 0;
      v182 = v143;
      goto LABEL_32;
    }
  LABEL_24:
    LOBYTE(v96) = physx_source_geomutils_src_pcm_4d9a60(
        (__int64)&v193_.v193, (__int64)&v202_.v202, v37, (__int64)&v209_.v209,
        (__int64)v216, &v214_.v214, (__int64)a7, &v184_.v185, v202_.v203,
        LANES64(a5[1]).n64_f32[0], (__int64)a7, (__int64)v15, v189_.v189,
        (__int64)&v188, (__int64)&v217, v110, a8);
  }
  return v96 & 1;
}

#pragma GCC visibility pop
