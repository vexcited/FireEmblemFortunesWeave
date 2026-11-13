#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a82dd0;
float32x2_t physx_Gu_distanceSegmentSegmentSquared_47bce0(
    float32x4_t*, float32x4_t*, float32x4_t*, float32x4_t*, _QWORD*, _QWORD*);
__int64 physx_source_geomutils_src_pcm_4d9c80(__int64 a1, __int64 a2,
                                              int32x4_t* a3, int32x4_t* a4,
                                              unsigned __int64* a5, double a6,
                                              double a7, double a8, double a9,
                                              float32x4_t a10, float32x4_t a11,
                                              __int64 a12, __int64 a13);

__int64 physx_source_geomutils_src_pcm_4d9c80(__int64 a1, __int64 a2,
                                              int32x4_t* a3, int32x4_t* a4,
                                              unsigned __int64* a5, double a6,
                                              double a7, double a8, double a9,
                                              float32x4_t a10, float32x4_t a11,
                                              __int64 a12, __int64 a13)
{
  unsigned __int64 v13;
  int8x16_t v14;
  int8x16_t v15;
  int8x8_t v17;
  int8x8_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  int32x2_t v34;
  float32x2_t v35;
  int8x16_t v36;
  int8x16_t v37;
  unsigned __int8 v38;
  int32x2_t v39;
  float32x4_t v40;
  float32x4_t v41;
  int32x2_t v42;
  float32x2_t v43;
  int8x8_t v44;
  int8x16_t v45;
  float32x2_t v46;
  float32x2_t v47;
  float32x2_t v48;
  float32x2_t v49;
  float32x2_t v50;
  float32x2_t v51;
  float32x2_t v52;
  float32x2_t v53;
  float32x2_t v54;
  float32x2_t v55;
  float32x2_t v56;
  int8x16_t v57;
  float32x2_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x2_t v61;
  float32x2_t v62;
  float32x2_t v63;
  float32x2_t v64;
  float32x2_t v65;
  float32x2_t v66;
  float32x2_t v67;
  float32x2_t v68;
  int8x16_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  int32x4_t v76;
  float32x4_t v77;
  int32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  float32x4_t v84;
  int32x4_t v85;
  int32x4_t v86;
  int32x4_t v87;
  int32x4_t v88;
  int32x4_t v89;
  int32x4_t v90;
  int8x16_t v91;
  int8x16_t v92;
  int16x4_t v93;
  int8x16_t v94;
  float32x4_t v95;
  float32x4_t v96;
  float32x2_t v97;
  int v98;
  int8x16_t v99;
  float32x4_t v100;
  float32x4_t v101;
  float32x2_t v102;
  float32x2_t v103;
  unsigned int v104;
  float32x4_t* v105;
  float32x2_t v106;
  float32x2_t v107;
  float32x2_t v108;
  float32x2_t v109;
  float32x2_t v110;
  float32x2_t v111;
  float32x2_t v112;
  float32x2_t v113;
  float32x2_t v114;
  float32x4_t v115;
  int8x16_t v116;
  float32x2_t v117;
  unsigned int v118;
  float32x4_t* v119;
  float32x2_t v120;
  float32x2_t v121;
  float32x2_t v122;
  float32x2_t v123;
  float32x2_t v124;
  float32x2_t v125;
  float32x2_t v126;
  float32x2_t v127;
  float32x2_t v128;
  float32x4_t v129;
  int8x16_t v130;
  int8x16_t v131;
  float32x4_t v132;
  float32x4_t v133;
  float32x2_t v134;
  float32x2_t v135;
  unsigned int v136;
  float32x4_t* v137;
  float32x2_t v138;
  float32x2_t v139;
  float32x2_t v140;
  float32x2_t v141;
  float32x2_t v142;
  float32x2_t v143;
  float32x2_t v144;
  float32x2_t v145;
  float32x2_t v146;
  float32x4_t v147;
  int8x16_t v148;
  int8x16_t v149;
  float32x4_t v150;
  float32x4_t v151;
  float32x2_t v152;
  int8x16_t v153;
  int8x16_t v154;
  int8x8_t v155;
  float32x4_t v156;
  float32x4_t v157;
  float32x2_t v158;
  float32x2_t v159;
  float32x2_t v160;
  float32x2_t v161;
  float32x2_t v162;
  float32x2_t v163;
  float32x2_t v164;
  float32x2_t v165;
  float32x2_t v166;
  float32x4_t v167;
  int8x16_t v168;
  int8x8_t v169;
  unsigned int v170;
  float32x4_t* v171;
  float32x2_t v173;
  float32x2_t v174;
  float32x2_t v175;
  float32x2_t v176;
  float32x2_t v177;
  float32x2_t v178;
  float32x2_t v179;
  float32x2_t v180;
  float32x2_t v181;
  int8x16_t v182;
  float32x4_t v183;
  float32x4_t v184;
  float32x2_t v185;
  float32x4_t v186;
  int32x2_t v187;
  float32x4_t v188;
  float32x4_t v189;
  __int64 v190;
  __int64 v191;
  float32x4_t v192;
  float32x4_t v193;
  float32x4_t v194;
  float32x4_t v195;

  v14 = *a3;
  v15 = *a4;
  LANES128(a10).n128_u32[0] = LANES128(a3[1]).n128_u32[0];
  LANES128(a11).n128_u32[0] = LANES128(a4[1]).n128_u32[0];
  LANES64(v17).n64_u64[0] = LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0];
  LANES64(v18).n64_u64[0] = LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0];
  LANES128(a10).n128_u32[1] = LANES128(a3[1]).n128_u32[1];
  LANES128(a11).n128_u32[1] = LANES128(a4[1]).n128_u32[1];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vext_s8(vdup_laneq_s32(*a3, 3), v17, 4u)).n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vext_s8(vdup_laneq_s32(*a4, 3), v18, 4u)).n64_u64[0];
  v21 = vmulq_n_f32(
      v14,
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_f32[0]);
  v22 = vmulq_n_f32(
      v15,
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_f32[0]);
  {
    __typeof__(v13) z_ = (__typeof__(v13)){0};
    LODWORD(z_) = *(_DWORD*)(a1 + 8);
    v13 = z_;
  }
  LANES128(v21).n128_u32[3] = 0;
  LANES128(v22).n128_u32[3] = 0;
  LANES128(a10).n128_u32[2] = LANES128(a3[1]).n128_u32[2];
  LANES128(a11).n128_u32[2] = LANES128(a4[1]).n128_u32[2];
  LANES128(v19).n128_u64[1] =
      LANES64_OF(vneg_f32(vdup_lane_s32(
                     COERCE_AS(int32x2_t, LANES128(*(a3)).n128_u64[0]), 1)))
          .n64_u32[0];
  LANES128(v20).n128_u64[1] =
      LANES64_OF(vneg_f32(vdup_lane_s32(
                     COERCE_AS(int32x2_t, LANES128(*(a4)).n128_u64[0]), 1)))
          .n64_u32[0];
  v23 = vmlaq_n_f32(
      v21, v19, LANES64_OF(vdup_lane_s32(vadd_f32(v17, v17), 1)).n64_f32[0]);
  v24 = vmlaq_n_f32(
      v22, v20, LANES64_OF(vdup_lane_s32(vadd_f32(v18, v18), 1)).n64_f32[0]);
  LANES128(v20).n128_u64[0] = *a5;
  v25 = *(float*)(a2 + 8);
  LANES128(v19).n128_u32[0] = *(_DWORD*)(a2 + 12);
  LANES128(v26).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v26).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v23).n128_u32[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                          COERCE_AS(float32x2_t, 0xBF800000BF800000LL)))
          .n64_u32[0];
  v27 = vmulq_f32(vaddq_f32(a10, a11), v26);
  LANES128(v24).n128_u32[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                          COERCE_AS(float32x2_t, 0xBF800000BF800000LL)))
          .n64_u32[0];
  LANES128(v27).n128_u32[3] = 0;
  v28 = vmulq_n_f32(v23, *(float*)(a1 + 12));
  LANES128(v28).n128_u32[3] = 0;
  v29 = vsubq_f32(a10, v27);
  v30 = vsubq_f32(a11, v27);
  v184 = vsubq_f32(v29, v28);
  LANES64(v185).n64_u64[0] = v13;
  v195 = vaddq_f32(v29, v28);
  v189 = vsubq_f32(v184, v195);
  v194 = v189;
  v31 = vmulq_n_f32(v24, LANES128(v19).n128_f32[0]);
  LANES128(v31).n128_u32[3] = 0;
  v32 = vaddq_f32(v30, v31);
  v183 = vsubq_f32(v30, v31);
  v33 = vsubq_f32(v183, v32);
  v193 = v32;
  v188 = v33;
  v192 = v33;
  PSEUDO_LOW_LANE128(v33, n128_f32, *(float*)&v13 + v25);
  v186 = v27;
  LANES64(v187).n64_u64[0] = LANES128(v33).n128_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
          .n64_u64[0];
  LANES64(v34).n64_u64[0] =
      LANES64_OF(
          vdup_lane_s32(
              vmul_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])),
              0))
          .n64_u64[0];
  LANES64(v35).n64_u64[0] =
      LANES64_OF(physx_Gu_distanceSegmentSegmentSquared_47bce0(
                     &v195, &v194, &v193, &v192, &v191, &v190))
          .n64_u64[0];
  v38 = LANES64_OF(vcge_f32(v34, v35)).n64_u8[0];
  if ((v38 & 1) == 0) {
    return v38 & 1;
  }
  LANES64(v39).n64_u64[0] = LANES64_OF(vdup_n_s32(0x358637BDu)).n64_u64[0];
  v40 = vmulq_f32(v189, v189);
  v41 = vmulq_f32(v188, v188);
  LANES64(v42).n64_u64[0] = LANES64_OF(vdup_lane_s32(v187, 0)).n64_u64[0];
  LANES128(v40).n128_u64[0] = LANES128_OF(vpaddq_f32(v40, v40)).n128_u64[0];
  LANES128(v41).n128_u64[0] = LANES128_OF(vpaddq_f32(v41, v41)).n128_u64[0];
  LANES64(v43).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
          .n64_u64[0];
  LANES64(v44).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v41).n128_u64[0])))
          .n64_u64[0];
  v45 = v194;
  LANES64(v46).n64_u64[0] = LANES64_OF(vrsqrte_f32(v43)).n64_u64[0];
  LANES128(v36).n128_u64[0] = LANES64_OF(vcgt_f32(v39, v44)).n64_u64[0];
  LANES128(v37).n128_u64[0] = LANES64_OF(vcgt_f32(v39, v43)).n64_u64[0];
  LANES64(v47).n64_u64[0] =
      LANES64_OF(vmul_f32(v46, vrsqrts_f32(vmul_f32(v46, v46), v43)))
          .n64_u64[0];
  LANES64(v48).n64_u64[0] =
      LANES64_OF(vmul_f32(v47, vrsqrts_f32(vmul_f32(v47, v47), v43)))
          .n64_u64[0];
  LANES64(v49).n64_u64[0] =
      LANES64_OF(vmul_f32(v48, vrsqrts_f32(vmul_f32(v48, v48), v43)))
          .n64_u64[0];
  LANES64(v50).n64_u64[0] =
      LANES64_OF(
          vbsl_s8(vdup_lane_s32(vceqz_f32(v43), 0), v43,
                  vmul_f32(v43, vmul_f32(v49, vrsqrts_f32(vmul_f32(v49, v49),
                                                          v43)))))
          .n64_u64[0];
  LANES64(v51).n64_u64[0] = LANES64_OF(vrecpe_f32(v50)).n64_u64[0];
  LANES64(v52).n64_u64[0] =
      LANES64_OF(vmul_f32(v51, vrecps_f32(v50, v51))).n64_u64[0];
  LANES64(v53).n64_u64[0] =
      LANES64_OF(vmul_f32(v52, vrecps_f32(v50, v52))).n64_u64[0];
  LANES64(v54).n64_u64[0] =
      LANES64_OF(vmul_f32(v53, vrecps_f32(v50, v53))).n64_u64[0];
  LANES64(v55).n64_u64[0] =
      LANES64_OF(vmul_f32(v54, vrecps_f32(v50, v54))).n64_u64[0];
  LANES64(v50).n64_u32[0] =
      LANES64_OF(vmul_f32(v55, vrecps_f32(v50, v55))).n64_u32[0];
  LANES64(v56).n64_u64[0] = LANES64_OF(vrsqrte_f32(v44)).n64_u64[0];
  v57 = vmulq_n_f32(v194, LANES64(v50).n64_f32[0]);
  LANES128(v57).n128_u32[3] = 0;
  LANES64(v58).n64_u64[0] =
      LANES64_OF(vmul_f32(v56, vrsqrts_f32(vmul_f32(v56, v56), v44)))
          .n64_u64[0];
  v59 = vandq_s8(
      v57,
      vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v37)).n128_u64[0]), 0));
  v60 = v192;
  LANES64(v61).n64_u64[0] =
      LANES64_OF(vmul_f32(v58, vrsqrts_f32(vmul_f32(v58, v58), v44)))
          .n64_u64[0];
  LANES64(v62).n64_u64[0] =
      LANES64_OF(vmul_f32(v61, vrsqrts_f32(vmul_f32(v61, v61), v44)))
          .n64_u64[0];
  LANES64(v63).n64_u64[0] =
      LANES64_OF(
          vbsl_s8(vdup_lane_s32(vceqz_f32(v44), 0), v44,
                  vmul_f32(v44, vmul_f32(v62, vrsqrts_f32(vmul_f32(v62, v62),
                                                          v44)))))
          .n64_u64[0];
  LANES64(v64).n64_u64[0] = LANES64_OF(vrecpe_f32(v63)).n64_u64[0];
  LANES64(v65).n64_u64[0] =
      LANES64_OF(vmul_f32(v64, vrecps_f32(v63, v64))).n64_u64[0];
  LANES64(v66).n64_u64[0] =
      LANES64_OF(vmul_f32(v65, vrecps_f32(v63, v65))).n64_u64[0];
  LANES64(v67).n64_u64[0] =
      LANES64_OF(vmul_f32(v66, vrecps_f32(v63, v66))).n64_u64[0];
  LANES64(v68).n64_u64[0] =
      LANES64_OF(vmul_f32(v67, vrecps_f32(v63, v67))).n64_u64[0];
  v69 = vmulq_n_f32(v192,
                    LANES64_OF(vmul_f32(v68, vrecps_f32(v63, v68))).n64_f32[0]);
  LANES128(v69).n128_u32[3] = 0;
  v70 = vandq_s8(
      v69,
      vdupq_lane_s32(
          COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v36)).n128_u64[0]), 0));
  v71 = v193;
  v72 = vmulq_f32(v59, v70);
  LANES128(v72).n128_u64[0] = LANES128_OF(vpaddq_f32(v72, v72)).n128_u64[0];
  LANES128(v59).n128_f32[0] =
      LANES64_OF(vabs_f32(vpadd_f32(
                     COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v72).n128_u64[0]))))
          .n64_f32[0];
  v73 = v195;
  if (LANES128(v59).n128_f32[0] <= 0x1.ffe5ca0000000p-1f) {
    goto LABEL_15;
  }
  v74 = vsubq_f32(v184, v195);
  v75 = vsubq_f32(v183, v193);
  v76 = vmulq_f32(v74, v74);
  v77 = vmulq_f32(v75, v75);
  v78 = vmulq_f32(v75, vsubq_f32(v195, v193));
  LANES128(v76).n128_u64[0] = LANES128_OF(vpaddq_f32(v76, v76)).n128_u64[0];
  LANES128(v77).n128_u64[0] = LANES128_OF(vpaddq_f32(v77, v77)).n128_u64[0];
  LANES128(v76).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0])))
          .n64_u64[0];
  *(float32x2_t*)&LANES128(v76).n128_i8[8] =
      vpadd_f32(COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]),
                COERCE_AS(float32x2_t, LANES128(v77).n128_u64[0]));
  v79 = vrev64q_s32(v76);
  v80 = vrecpeq_f32(v79);
  v81 = vmulq_f32(v80, vrecpsq_f32(v80, v79));
  v82 = vmulq_f32(v81, vrecpsq_f32(v81, v79));
  v83 = vmulq_f32(v82, vrecpsq_f32(v82, v79));
  v84 = vmulq_f32(v83, vrecpsq_f32(v83, v79));
  v85 = vmulq_f32(v74, vsubq_f32(v193, v195));
  v86 = vmulq_f32(v74, vsubq_f32(v183, v195));
  v87 = vzip1q_s32(v85, v78);
  v88 = vmulq_f32(v75, vsubq_f32(v184, v193));
  v89 = vzip1q_s32(v86, v88);
  v90 = vzip2q_s32(v86, v88);
  v91 = vceqzq_f32(v79);
  LANES128(v79).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v79).n128_u64[1] = 0x3F8000003F800000LL;
  v92 = vbicq_s8(vmulq_f32(vaddq_f32(vzip1q_s32(vzip2q_s32(v85, v78), v90),
                                     vaddq_f32(vzip1q_s32(v87, v89),
                                               vzip2q_s32(v87, v89))),
                           v84),
                 v91);
  LANES64(v93).n64_u64[0] =
      LANES64_OF(vmovn_s32(vandq_s8(vcgezq_f32(v92), vcgeq_f32(v79, v92))))
          .n64_u64[0];
  if (LANES64_OF(vdup_lane_s8(v93, 0)).n64_u32[0] == -1 &&
      (v94 = vmlaq_n_f32(v195, v194, LANES128(v92).n128_f32[0]),
       LANES128(v94).n128_u64[1] =
           LANES128_OF(vextq_s8(v94, v94, 8u)).n128_u32[0],
       v95 = vsubq_f32(v94, v193), v96 = vmulq_f32(v95, v95),
       LANES128(v96).n128_u64[0] =
           LANES128_OF(vpaddq_f32(v96, v96)).n128_u64[0],
       LANES64(v97).n64_u64[0] =
           LANES64_OF(
               vpadd_f32(COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0]),
                         COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])))
               .n64_u64[0],
       LANES64_OF(vuzp1_s8(vdup_lane_s16(
                               vand_s8(vcgt_f32(v97, vdup_n_s32(0x358637BDu)),
                                       vcgt_f32(v34, v97)),
                               0),
                           v35))
               .n64_u32[0] == -1)) {
    LANES64(v117).n64_u64[0] = LANES64_OF(vrsqrte_f32(v97)).n64_u64[0];
    v118 = *(_DWORD*)(a13 + 20480);
    *(_DWORD*)(a13 + 20480) = v118 + 1;
    v119 = (float32x4_t*)(a13 + 80LL * v118);
    LANES128(v119[3]).n128_u32[1] = -1;
    LANES64(v120).n64_u64[0] =
        LANES64_OF(vmul_f32(v117, vrsqrts_f32(vmul_f32(v117, v117), v97)))
            .n64_u64[0];
    LANES64(v121).n64_u64[0] =
        LANES64_OF(vmul_f32(v120, vrsqrts_f32(vmul_f32(v120, v120), v97)))
            .n64_u64[0];
    LANES64(v122).n64_u64[0] =
        LANES64_OF(vmul_f32(v121, vrsqrts_f32(vmul_f32(v121, v121), v97)))
            .n64_u64[0];
    LANES64(v123).n64_u64[0] =
        LANES64_OF(
            vbsl_s8(vdup_lane_s32(vceqz_f32(v97), 0), v97,
                    vmul_f32(v97,
                             vmul_f32(v122,
                                      vrsqrts_f32(vmul_f32(v122, v122), v97)))))
            .n64_u64[0];
    LANES64(v124).n64_u64[0] = LANES64_OF(vrecpe_f32(v123)).n64_u64[0];
    LANES64(v125).n64_u64[0] =
        LANES64_OF(vmul_f32(v124, vrecps_f32(v123, v124))).n64_u64[0];
    LANES64(v126).n64_u64[0] =
        LANES64_OF(vmul_f32(v125, vrecps_f32(v123, v125))).n64_u64[0];
    LANES64(v127).n64_u64[0] =
        LANES64_OF(vmul_f32(v126, vrecps_f32(v123, v126))).n64_u64[0];
    LANES64(v128).n64_u64[0] =
        LANES64_OF(vmul_f32(v127, vrecps_f32(v123, v127))).n64_u64[0];
    v129 = vmulq_n_f32(
        v95, LANES64_OF(vmul_f32(v128, vrecps_f32(v123, v128))).n64_f32[0]);
    LANES128(v129).n128_u32[3] = 0;
    v130 = vmlsq_lane_f32(v94, v129, v185, 0);
    LANES128(v130).n128_u64[1] =
        LANES128_OF(vextq_s8(v130, v130, 8u)).n128_u32[0];
    *v119 = v129;
    v119[1] = vaddq_f32(v186, v130);
    LANES128(*(v119)).n128_u32[3] = LANES64_OF(vsub_f32(v123, v42)).n64_u32[0];
    v98 = 1;
    if (LANES64_OF(vdup_lane_s8(v93, 2)).n64_u32[0] != -1) {
      goto LABEL_9;
    }
  }
  else {
    v98 = 0;
    if (LANES64_OF(vdup_lane_s8(v93, 2)).n64_u32[0] != -1) {
      goto LABEL_9;
    }
  }
  v99 = vmlaq_lane_f32(v73, v45,
                       COERCE_AS(float32x2_t, LANES128(v92).n128_u64[0]), 1);
  LANES128(v99).n128_u64[1] = LANES128_OF(vextq_s8(v99, v99, 8u)).n128_u32[0];
  v100 = vsubq_f32(v99, v183);
  v101 = vmulq_f32(v100, v100);
  LANES128(v101).n128_u64[0] = LANES128_OF(vpaddq_f32(v101, v101)).n128_u64[0];
  LANES64(v102).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v101).n128_u64[0])))
          .n64_u64[0];
  if (LANES64_OF(vuzp1_s8(vdup_lane_s16(
                              vand_s8(vcgt_f32(v102, vdup_n_s32(0x358637BDu)),
                                      vcgt_f32(v34, v102)),
                              0),
                          v35))
          .n64_u32[0] == -1) {
    LANES64(v103).n64_u64[0] = LANES64_OF(vrsqrte_f32(v102)).n64_u64[0];
    ++v98;
    v104 = *(_DWORD*)(a13 + 20480);
    *(_DWORD*)(a13 + 20480) = v104 + 1;
    v105 = (float32x4_t*)(a13 + 80LL * v104);
    LANES128(v105[3]).n128_u32[1] = -1;
    LANES64(v106).n64_u64[0] =
        LANES64_OF(vmul_f32(v103, vrsqrts_f32(vmul_f32(v103, v103), v102)))
            .n64_u64[0];
    LANES64(v107).n64_u64[0] =
        LANES64_OF(vmul_f32(v106, vrsqrts_f32(vmul_f32(v106, v106), v102)))
            .n64_u64[0];
    LANES64(v108).n64_u64[0] =
        LANES64_OF(vmul_f32(v107, vrsqrts_f32(vmul_f32(v107, v107), v102)))
            .n64_u64[0];
    LANES64(v109).n64_u64[0] =
        LANES64_OF(
            vbsl_s8(
                vdup_lane_s32(vceqz_f32(v102), 0), v102,
                vmul_f32(v102, vmul_f32(v108, vrsqrts_f32(vmul_f32(v108, v108),
                                                          v102)))))
            .n64_u64[0];
    LANES64(v110).n64_u64[0] = LANES64_OF(vrecpe_f32(v109)).n64_u64[0];
    LANES64(v111).n64_u64[0] =
        LANES64_OF(vmul_f32(v110, vrecps_f32(v109, v110))).n64_u64[0];
    LANES64(v112).n64_u64[0] =
        LANES64_OF(vmul_f32(v111, vrecps_f32(v109, v111))).n64_u64[0];
    LANES64(v113).n64_u64[0] =
        LANES64_OF(vmul_f32(v112, vrecps_f32(v109, v112))).n64_u64[0];
    LANES64(v114).n64_u64[0] =
        LANES64_OF(vmul_f32(v113, vrecps_f32(v109, v113))).n64_u64[0];
    v115 = vmulq_n_f32(
        v100, LANES64_OF(vmul_f32(v114, vrecps_f32(v109, v114))).n64_f32[0]);
    LANES128(v115).n128_u32[3] = 0;
    v116 = vmlsq_lane_f32(v99, v115, v185, 0);
    LANES128(v116).n128_u64[1] =
        LANES128_OF(vextq_s8(v116, v116, 8u)).n128_u32[0];
    *v105 = v115;
    v105[1] = vaddq_f32(v186, v116);
    LANES128(*(v105)).n128_u32[3] = LANES64_OF(vsub_f32(v109, v42)).n64_u32[0];
  }
LABEL_9:
  if (LANES64_OF(vdup_lane_s8(v93, 4)).n64_u32[0] == -1) {
    v131 = vmlaq_laneq_f32(v71, v60, v92, 2);
    LANES128(v131).n128_u64[1] =
        LANES128_OF(vextq_s8(v131, v131, 8u)).n128_u32[0];
    v132 = vsubq_f32(v73, v131);
    v133 = vmulq_f32(v132, v132);
    LANES128(v133).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v133, v133)).n128_u64[0];
    LANES64(v134).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v133).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vuzp1_s8(vdup_lane_s16(
                                vand_s8(vcgt_f32(v134, vdup_n_s32(0x358637BDu)),
                                        vcgt_f32(v34, v134)),
                                0),
                            v35))
            .n64_u32[0] == -1) {
      LANES64(v135).n64_u64[0] = LANES64_OF(vrsqrte_f32(v134)).n64_u64[0];
      v136 = *(_DWORD*)(a13 + 20480);
      *(_DWORD*)(a13 + 20480) = v136 + 1;
      v137 = (float32x4_t*)(a13 + 80LL * v136);
      LANES128(v137[3]).n128_u32[1] = -1;
      LANES64(v138).n64_u64[0] =
          LANES64_OF(vmul_f32(v135, vrsqrts_f32(vmul_f32(v135, v135), v134)))
              .n64_u64[0];
      LANES64(v139).n64_u64[0] =
          LANES64_OF(vmul_f32(v138, vrsqrts_f32(vmul_f32(v138, v138), v134)))
              .n64_u64[0];
      LANES64(v140).n64_u64[0] =
          LANES64_OF(vmul_f32(v139, vrsqrts_f32(vmul_f32(v139, v139), v134)))
              .n64_u64[0];
      LANES64(v141).n64_u64[0] =
          LANES64_OF(
              vbsl_s8(vdup_lane_s32(vceqz_f32(v134), 0), v134,
                      vmul_f32(v134,
                               vmul_f32(v140, vrsqrts_f32(vmul_f32(v140, v140),
                                                          v134)))))
              .n64_u64[0];
      LANES64(v142).n64_u64[0] = LANES64_OF(vrecpe_f32(v141)).n64_u64[0];
      LANES64(v143).n64_u64[0] =
          LANES64_OF(vmul_f32(v142, vrecps_f32(v141, v142))).n64_u64[0];
      LANES64(v144).n64_u64[0] =
          LANES64_OF(vmul_f32(v143, vrecps_f32(v141, v143))).n64_u64[0];
      LANES64(v145).n64_u64[0] =
          LANES64_OF(vmul_f32(v144, vrecps_f32(v141, v144))).n64_u64[0];
      LANES64(v146).n64_u64[0] =
          LANES64_OF(vmul_f32(v145, vrecps_f32(v141, v145))).n64_u64[0];
      v147 = vmulq_n_f32(
          v132, LANES64_OF(vmul_f32(v146, vrecps_f32(v141, v146))).n64_f32[0]);
      LANES128(v147).n128_u32[3] = 0;
      v148 = vmlsq_lane_f32(v73, v147, v185, 0);
      LANES128(v148).n128_u64[1] =
          LANES128_OF(vextq_s8(v148, v148, 8u)).n128_u32[0];
      *v137 = v147;
      v137[1] = vaddq_f32(v186, v148);
      LANES128(*(v137)).n128_u32[3] =
          LANES64_OF(vsub_f32(v141, v42)).n64_u32[0];
      v98 = 1;
    }
  }
  if (LANES64_OF(vdup_lane_s8(v93, 6)).n64_u32[0] == -1) {
    v149 = vmlaq_laneq_f32(v71, v60, v92, 3);
    LANES128(v149).n128_u64[1] =
        LANES128_OF(vextq_s8(v149, v149, 8u)).n128_u32[0];
    v150 = vsubq_f32(v184, v149);
    v151 = vmulq_f32(v150, v150);
    LANES128(v151).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v151, v151)).n128_u64[0];
    LANES64(v152).n64_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v151).n128_u64[0])))
            .n64_u64[0];
    if (LANES64_OF(vuzp1_s8(vdup_lane_s16(
                                vand_s8(vcgt_f32(v152, vdup_n_s32(0x358637BDu)),
                                        vcgt_f32(v34, v152)),
                                0),
                            v35))
            .n64_u32[0] == -1) {
      LANES64(v173).n64_u64[0] = LANES64_OF(vrsqrte_f32(v152)).n64_u64[0];
      LANES64(v174).n64_u64[0] =
          LANES64_OF(vmul_f32(v173, vrsqrts_f32(vmul_f32(v173, v173), v152)))
              .n64_u64[0];
      LANES64(v175).n64_u64[0] =
          LANES64_OF(vmul_f32(v174, vrsqrts_f32(vmul_f32(v174, v174), v152)))
              .n64_u64[0];
      LANES64(v176).n64_u64[0] =
          LANES64_OF(vmul_f32(v175, vrsqrts_f32(vmul_f32(v175, v175), v152)))
              .n64_u64[0];
      LANES64(v169).n64_u64[0] =
          LANES64_OF(
              vbsl_s8(vdup_lane_s32(vceqz_f32(v152), 0), v152,
                      vmul_f32(v152,
                               vmul_f32(v176, vrsqrts_f32(vmul_f32(v176, v176),
                                                          v152)))))
              .n64_u64[0];
      LANES64(v177).n64_u64[0] = LANES64_OF(vrecpe_f32(v169)).n64_u64[0];
      LANES64(v178).n64_u64[0] =
          LANES64_OF(vmul_f32(v177, vrecps_f32(v169, v177))).n64_u64[0];
      LANES64(v179).n64_u64[0] =
          LANES64_OF(vmul_f32(v178, vrecps_f32(v169, v178))).n64_u64[0];
      LANES64(v180).n64_u64[0] =
          LANES64_OF(vmul_f32(v179, vrecps_f32(v169, v179))).n64_u64[0];
      LANES64(v181).n64_u64[0] =
          LANES64_OF(vmul_f32(v180, vrecps_f32(v169, v180))).n64_u64[0];
      v167 = vmulq_n_f32(
          v150, LANES64_OF(vmul_f32(v181, vrecps_f32(v169, v181))).n64_f32[0]);
      LANES128(v167).n128_u32[3] = 0;
      v182 = vmlsq_lane_f32(v184, v167, v185, 0);
      LANES128(v182).n128_u64[1] =
          LANES128_OF(vextq_s8(v182, v182, 8u)).n128_u32[0];
      v168 = v182;
      goto LABEL_16;
    }
  }
  if (v98 == 0) {
  LABEL_15:
    v153 = vmlaq_n_f32(v73, v45, *(float*)&v191);
    LANES128(v153).n128_u64[1] =
        LANES128_OF(vextq_s8(v153, v153, 8u)).n128_u32[0];
    v154 = vmlaq_n_f32(v71, v60, *(float*)&v190);
    LANES128(v154).n128_u64[1] =
        LANES128_OF(vextq_s8(v154, v154, 8u)).n128_u32[0];
    LANES64(v155).n64_u64[0] = LANES64_OF(vcgt_f32(v39, v35)).n64_u64[0];
    v156 = vbslq_s8(vmovl_s16(vdup_lane_s16(v155, 0)),
                    vbslq_s8(vmovl_s16(vdup_lane_s16(vcgt_f32(v43, v39), 0)),
                             v45, COERCE_AS(int8x16_t, GameData_1a82dd0)),
                    vsubq_f32(v153, v154));
    v157 = vmulq_f32(v156, v156);
    LANES128(v157).n128_u64[0] =
        LANES128_OF(vpaddq_f32(v157, v157)).n128_u64[0];
    LANES128(v157).n128_u64[0] =
        LANES64_OF(
            vpadd_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
            .n64_u64[0];
    LANES64(v158).n64_u64[0] =
        LANES64_OF(
            vrsqrte_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
            .n64_u64[0];
    LANES64(v159).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v158, vrsqrts_f32(vmul_f32(v158, v158),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v157).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v160).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v159, vrsqrts_f32(vmul_f32(v159, v159),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v157).n128_u64[0]))))
            .n64_u64[0];
    LANES64(v161).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v160, vrsqrts_f32(vmul_f32(v160, v160),
                                       COERCE_AS(float32x2_t,
                                                 LANES128(v157).n128_u64[0]))))
            .n64_u64[0];
    LANES128(v157).n128_u64[0] =
        LANES64_OF(
            vbsl_s8(
                vdup_lane_s32(vceqz_f32(COERCE_AS(float32x2_t,
                                                  LANES128(v157).n128_u64[0])),
                              0),
                COERCE_AS(int8x8_t, LANES128(v157).n128_u64[0]),
                vmul_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                         vmul_f32(v161,
                                  vrsqrts_f32(
                                      vmul_f32(v161, v161),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v157).n128_u64[0]))))))
            .n64_u64[0];
    LANES64(v162).n64_u64[0] =
        LANES64_OF(
            vrecpe_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0])))
            .n64_u64[0];
    LANES64(v163).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v162, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v157).n128_u64[0]),
                                      v162)))
            .n64_u64[0];
    LANES64(v164).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v163, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v157).n128_u64[0]),
                                      v163)))
            .n64_u64[0];
    LANES64(v165).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v164, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v157).n128_u64[0]),
                                      v164)))
            .n64_u64[0];
    LANES64(v166).n64_u64[0] =
        LANES64_OF(
            vmul_f32(v165, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v157).n128_u64[0]),
                                      v165)))
            .n64_u64[0];
    v167 = vmulq_n_f32(
        v156,
        LANES64_OF(
            vmul_f32(v166, vrecps_f32(COERCE_AS(float32x2_t,
                                                LANES128(v157).n128_u64[0]),
                                      v166)))
            .n64_f32[0]);
    LANES128(v167).n128_u32[3] = 0;
    v168 = vmlsq_lane_f32(v153, v167, v185, 0);
    LANES128(v168).n128_u64[1] =
        LANES128_OF(vextq_s8(v168, v168, 8u)).n128_u32[0];
    LANES128(v157).n128_u64[0] = LANES64_OF(vrsqrte_f32(v35)).n64_u64[0];
    LANES128(v157).n128_u64[0] =
        LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                            vrsqrts_f32(
                                vmul_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0])),
                                v35)))
            .n64_u64[0];
    LANES128(v157).n128_u64[0] =
        LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                            vrsqrts_f32(
                                vmul_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0])),
                                v35)))
            .n64_u64[0];
    LANES128(v157).n128_u64[0] =
        LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                            vrsqrts_f32(
                                vmul_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0])),
                                v35)))
            .n64_u64[0];
    LANES64(v169).n64_u64[0] =
        LANES64_OF(
            vbsl_s8(
                v155, ((int8x8_t){0}),
                vbsl_s8(
                    vceqz_f32(v35), v35,
                    vmul_f32(
                        v35,
                        vmul_f32(
                            COERCE_AS(float32x2_t, LANES128(v157).n128_u64[0]),
                            vrsqrts_f32(
                                vmul_f32(COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0]),
                                         COERCE_AS(float32x2_t,
                                                   LANES128(v157).n128_u64[0])),
                                v35))))))
            .n64_u64[0];
  LABEL_16:
    v170 = *(_DWORD*)(a13 + 20480);
    *(_DWORD*)(a13 + 20480) = v170 + 1;
    v171 = (float32x4_t*)(a13 + 80LL * v170);
    *v171 = v167;
    v171[1] = vaddq_f32(v186, v168);
    LANES128(*(v171)).n128_u32[3] = LANES64_OF(vsub_f32(v169, v42)).n64_u32[0];
    LANES128(v171[3]).n128_u32[1] = -1;
  }
  return v38 & 1;
}

#pragma GCC visibility pop
