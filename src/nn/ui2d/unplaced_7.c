#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int16* LayoutPaneFactory_599ea0(__int16* result);
__int64 GameRoutine_599f10(_QWORD);
extern _UNKNOWN* GameData_2135448;
extern __int128 GameData_1a82dc0;
_QWORD* nn_ui2d_58a150(_QWORD* result, __int64 a2, float32x4_t* a3, float* a4,
                       __int64 a5, unsigned int a6);

_QWORD* nn_ui2d_58a150(_QWORD* result, __int64 a2, float32x4_t* a3, float* a4,
                       __int64 a5, unsigned int a6)
{
  char v6;
  char v7;
  _QWORD* v10;
  __int64 v11;
  float32x4_t* v12;
  unsigned int v13;
  float v14;
  float v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  float32x4_t v19;
  __int64 v20;
  int v21;
  float v22;
  float v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float v27;
  float v28;
  float v29;
  float v30;
  unsigned int v31;
  float v32;
  float v33;
  float v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float* v38;
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
  float32x4_t v56;
  float v57;
  float v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  float v65;
  float32x4_t v66;
  float32x4_t v67;
  float v68;
  __int64 v69;
  float v70;
  float* v71;
  float v72;
  float v73;
  float v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
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
  __int64 v89;
  __int64 v90;
  _OWORD* v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float32x4_t v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float32x4_t v107;
  float32x4_t v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;
  float32x4_t v117;
  float v118;
  float v119;
  float32x4_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  float32x4_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float v131;
  float v132;
  float v133;
  float v134;
  float v135;
  float v136;
  float32x4_t v137;
  float32x4_t v138;
  _QWORD v139[2];

  v6 = *(_BYTE*)(a5 + 16);
  v7 = *((_BYTE*)result + 73);
  v10 = result;
  if ((v6 & 1) != 0) {
    v16 = *(_QWORD*)(a2 + 192);
    v14 = *(float*)(v16 + 40);
    v15 = *(float*)(v16 + 44);
  }
  else if ((*(_BYTE*)(a5 + 16) & 2) != 0) {
    v14 = *a4;
    v15 = a4[1];
  }
  else {
    result = *(_QWORD**)(result[3] + 16LL * (int)a6 + 8);
    if (result != nullptr) {
      LODWORD(v139[0]) = 0;
      v11 = a5;
      v12 = a3;
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, void*))(
                       *result + 32LL))((void*)v139, (void*)result));
      {
        __typeof__(v13) z_ = (__typeof__(v13)){0};
        LOWORD(z_) = v139[0];
        v13 = z_;
      }
      a3 = v12;
      a5 = v11;
      v14 = (float)v13;
      {
        __typeof__(v13) z_ = (__typeof__(v13)){0};
        LOWORD(z_) = WORD1(v139[0]);
        v13 = z_;
      }
      v15 = (float)v13;
    }
    else {
      v15 = 0x0.0p+0f;
      v14 = 0x0.0p+0f;
    }
  }
  v17 = *((_DWORD*)v10 + 4);
  v18 = v10[3];
  v19 = (__typeof__(v19)){0};
  v20 = 16LL * (v17 & 3);
  v21 = *(unsigned __int8*)(v18 + (unsigned int)v20 + 20 * ((v17 >> 2) & 3) +
                            16LL * (int)a6 + 1);
  if (v21 > 4) {
    v38 = (float*)(v18 + v20 + 20LL * (int)a6);
    if (v21 == 5) {
      v40 = *(float*)(a5 + 8);
      v39 = *(float*)(a5 + 12);
      v41 = (float)(*(float*)a5 / v40) / v14;
      v42 = (float)(*(float*)(a5 + 4) / v39) / v15;
      if ((v7 & 0x40) == 0) {
      LABEL_16:
        v43 = *(float*)(a2 + 264);
        v44 = *(float*)(a2 + 268);
      LABEL_21:
        v139[0] = 0;
        v139[1] = 0;
        v65 = (float)((float)(v44 / v15) * -0x1.0000000000000p-1f) / v39;
        LANES128(v66).n128_u32[1] = 0;
        LANES128(v66).n128_u32[2] = 0;
        LANES128(v66).n128_f32[0] =
            (float)((float)(v43 / v14) * 0x1.0000000000000p-1f) / v40;
        LANES128(v67).n128_u32[0] = 0;
        LANES128(v67).n128_u32[2] = 0;
        LANES128(v67).n128_f32[1] = v65;
        LANES128(v66).n128_f32[3] = 0x1.0000000000000p-1f - v41;
        LANES128(v67).n128_f32[3] = v42 + 0x1.0000000000000p-1f;
        v137 = v67;
        v138 = v66;
        LayoutPaneFactory_599ea0((__int16*)v139);
        v68 = v38[3];
        v69 = (__int64)(float)(v38[2] * 0x1.6c16c20000000p+23f);
        v70 = vcvts_n_f32_u32(v69 & 0xFFFFFF, 0x18u);
        v71 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v69));
        v72 = v71[1] + (float)(v71[3] * v70);
        v73 = *v71 + (float)(v71[2] * v70);
        v74 = v38[4];
        v131 = v68 * v73;
        v132 = -(float)(v72 * v74);
        v133 = v68 * v72;
        v134 = (float)((float)(*v38 + 0x1.0000000000000p-1f) +
                       (float)((float)(v68 * v73) * -0x1.0000000000000p-1f)) +
               (float)(v132 * -0x1.0000000000000p-1f);
        v135 = v74 * v73;
        v136 = (float)((float)((float)((float)(v38[1] + 0x1.0000000000000p-1f) +
                                       (float)((float)(v68 * v72) *
                                               -0x1.0000000000000p-1f)) +
                               (float)((float)(v74 * v73) *
                                       -0x1.0000000000000p-1f)) +
                       -0x1.0000000000000p+0f) +
               0x1.0000000000000p+0f;
        result = (_QWORD*)GameRoutine_599f10(v139);
        v75 = *(float32x4_t*)(a2 + 128);
        v76 = *(float32x4_t*)(a2 + 144);
        LANES128(v77).n128_u64[0] = 0;
        LANES128(v77).n128_u32[2] = 0;
        v78 = *(float32x4_t*)(a2 + 160);
        LANES128(v77).n128_u32[3] = HIDWORD(*(_OWORD*)(a2 + 16));
        v79 = *(float32x4_t*)(a2 + 48);
        v80 = *(float32x4_t*)(a2 + 64);
        v81 = vaddq_f32(
            v77, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v75, COERCE_FLOAT(*(_OWORD*)(a2 + 16))),
                         v76, *(float32x2_t*)(a2 + 16), 1),
                     v78, *(float32x4_t*)(a2 + 16), 2));
        LANES128(v77).n128_u64[0] = 0;
        LANES128(v77).n128_u32[2] = 0;
        LANES128(v77).n128_u32[3] = HIDWORD(*(_OWORD*)(a2 + 32));
        v82 = vaddq_f32(
            v77, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v75, COERCE_FLOAT(*(_OWORD*)(a2 + 32))),
                         v76, *(float32x2_t*)(a2 + 32), 1),
                     v78, *(float32x4_t*)(a2 + 32), 2));
        LANES128(v77).n128_u64[0] = 0;
        LANES128(v77).n128_u32[2] = 0;
        v83 = vmlaq_lane_f32(vmulq_n_f32(v75, LANES128(v79).n128_f32[0]), v76,
                             COERCE_AS(float32x2_t, LANES128(v79).n128_u64[0]),
                             1);
        v84 = vmlaq_lane_f32(vmulq_n_f32(v75, LANES128(v80).n128_f32[0]), v76,
                             COERCE_AS(float32x2_t, LANES128(v80).n128_u64[0]),
                             1);
        LANES128(v76).n128_u64[0] = 0;
        LANES128(v76).n128_u32[2] = 0;
        LANES128(v77).n128_u32[3] = LANES128(v79).n128_u32[3];
        LANES128(v76).n128_u32[3] = LANES128(v80).n128_u32[3];
        v85 = vaddq_f32(v77, vmlaq_laneq_f32(v83, v78, v79, 2));
        v19 = vaddq_f32(v76, vmlaq_laneq_f32(v84, v78, v80, 2));
        LANES128(v76).n128_u64[0] = 0;
        LANES128(v76).n128_u32[2] = 0;
        LANES128(v76).n128_f32[3] = v134;
        v86 = vaddq_f32(
            v76, vaddq_f32(vmlaq_n_f32(vmulq_n_f32(v138, v131), v137, v132),
                           COERCE_AS(float32x4_t, 0)));
        LANES128(v83).n128_u64[0] = 0;
        LANES128(v83).n128_u32[2] = 0;
        LANES128(v83).n128_f32[3] = v136;
        v87 = vaddq_f32(
            vaddq_f32(vmlaq_n_f32(vmulq_n_f32(v138, v133), v137, v135),
                      COERCE_AS(float32x4_t, 0)),
            v83);
        v88 = vaddq_f32(vmlaq_f32(vmulq_f32(v138, COERCE_AS(float32x4_t, 0)),
                                  COERCE_AS(float32x4_t, 0), v137),
                        COERCE_AS(float32x4_t, 0));
        v26 = vmlaq_laneq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v81, LANES128(v86).n128_f32[0]), v82,
                    COERCE_AS(float32x2_t, LANES128(v86).n128_u64[0]), 1),
                v85, v86, 2),
            v19, v86, 3);
        v25 = vmlaq_laneq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v81, LANES128(v87).n128_f32[0]), v82,
                    COERCE_AS(float32x2_t, LANES128(v87).n128_u64[0]), 1),
                v85, v87, 2),
            v19, v87, 3);
        v24 = vmlaq_laneq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v81, LANES128(v88).n128_f32[0]), v82,
                    COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]), 1),
                v85, v88, 2),
            v19, v88, 3);
        goto LABEL_22;
      }
    }
    else {
      v24 = (__typeof__(v24)){0};
      v25 = (__typeof__(v25)){0};
      v26 = (__typeof__(v26)){0};
      if (v21 != 6) {
        goto LABEL_22;
      }
      v40 = *(float*)(a5 + 8);
      v39 = *(float*)(a5 + 12);
      v41 = (float)((float)(LANES128(*(a3)).n128_f32[3] + *(float*)a5) / v40) /
            v14;
      v42 = (float)((float)(LANES128(a3[1]).n128_f32[3] + *(float*)(a5 + 4)) /
                    v39) /
            v15;
      if ((v7 & 0x40) == 0) {
        goto LABEL_16;
      }
    }
    v43 = (float)*(int*)(a2 + 224);
    v44 = (float)*(int*)(a2 + 228);
    goto LABEL_21;
  }
  v22 = v14 * 0x1.0000000000000p-1f;
  v23 = v15 * 0x1.0000000000000p-1f;
  if (v21 == 3) {
    v45 = *(float*)(a5 + 8);
    v46 = *(float*)(a5 + 12);
    v47 = 0x1.0000000000000p-1f / v45;
    v48 = 0x1.0000000000000p-1f / v46;
    v49 = 0x1.0000000000000p-1f - (float)((float)(*(float*)a5 / v45) / v14);
    v50 =
        (float)((float)(*(float*)(a5 + 4) / v46) / v15) + 0x1.0000000000000p-1f;
    v51 = 0x1.0000000000000p+0f / (float)((float)-v23 - v23);
    v52 = 0x1.0000000000000p+0f / (float)(v22 + v22);
    v53 = (float)(v51 + v51) * (float)(0x1.0000000000000p-1f / v46);
    v54 = v52 + v52;
    v55 = -(float)((float)(v22 - v22) * v52);
    v56 = *(float32x4_t*)(a2 + 160);
    v57 = v49 + (float)(v55 * v47);
    v58 = v50 + (float)((float)-(float)((float)(v23 - v23) * v51) * v48);
    v59 = *(float32x4_t*)(a2 + 128);
    v60 = *(float32x4_t*)(a2 + 144);
    v61 = vmulq_n_f32(v59, v54 * v47);
    LANES128(v62).n128_u64[0] = 0;
    LANES128(v62).n128_u32[2] = 0;
    LANES128(v62).n128_f32[3] = v57;
    v63 = vmulq_f32(v59, COERCE_AS(float32x4_t, 0));
    v64 = vmlaq_f32(v63, COERCE_AS(float32x4_t, 0), v60);
    v26 = vaddq_f32(vmlaq_f32(vmlaq_f32(v61, COERCE_AS(float32x4_t, 0), v60),
                              COERCE_AS(float32x4_t, 0), v56),
                    v62);
    LANES128(v62).n128_u64[0] = 0;
    LANES128(v62).n128_u32[2] = 0;
    LANES128(v62).n128_f32[3] = v58;
    v25 = vaddq_f32(
        vmlaq_f32(vmlaq_n_f32(v63, v60, v53), COERCE_AS(float32x4_t, 0), v56),
        v62);
    v19 = COERCE_AS(float32x4_t, GameData_1a82dc0);
    v24 = vaddq_f32(vmlaq_f32(v64, COERCE_AS(float32x4_t, 0), v56),
                    COERCE_AS(float32x4_t, GameData_1a82dc0));
    if (a6 > 2) {
      return result;
    }
    goto LABEL_23;
  }
  v24 = (__typeof__(v24)){0};
  v25 = (__typeof__(v25)){0};
  v26 = (__typeof__(v26)){0};
  if (v21 != 4) {
  LABEL_22:
    if (a6 > 2) {
      return result;
    }
    goto LABEL_23;
  }
  if ((v6 & 4) != 0) {
    v92 = *(float*)(a5 + 8);
    v93 = *(float*)(a5 + 12);
    v94 = 0x0.0p+0f;
    v95 = 0x1.0000000000000p-1f / v93;
    v96 =
        (float)((float)(*(float*)(a5 + 4) / v93) / v15) + 0x1.0000000000000p-1f;
    v97 = 0x1.0000000000000p+0f / (float)(v22 + v22);
    v98 = v22 - v22;
    v99 = a3[2];
    v100 = 0x1.0000000000000p+0f / (float)((float)-v23 - v23);
    {
      __typeof__(v101) z_ = (__typeof__(v101)){0};
      LODWORD(z_) = HIDWORD(LANES128(a3[2]).n128_u64[0]);
      v101 = z_;
    }
    v102 = (float)(v97 + v97) * (float)(0x1.0000000000000p-1f / v92);
    v103 = (float)(0x1.0000000000000p-1f -
                   (float)((float)(*(float*)a5 / v92) / v14)) +
           (float)((float)-(float)(v98 * v97) *
                   (float)(0x1.0000000000000p-1f / v92));
    {
      __typeof__(v104) z_ = (__typeof__(v104)){0};
      LODWORD(z_) = LANES128(a3[2]).n128_u64[1];
      v104 = z_;
    }
    v105 = (float)(v100 + v100) * v95;
    v106 = v96 + (float)((float)-(float)((float)(v23 - v23) * v100) * v95);
    v107 = *a3;
    v108 = a3[1];
    {
      __typeof__(v109) z_ = (__typeof__(v109)){0};
      LODWORD(z_) = HIDWORD(LANES128(*(a3)).n128_u64[0]);
      v109 = z_;
    }
    {
      __typeof__(v110) z_ = (__typeof__(v110)){0};
      LODWORD(z_) = HIDWORD(LANES128(a3[1]).n128_u64[0]);
      v110 = z_;
    }
    v111 = (float)-v101 * COERCE_FLOAT(*a3);
    {
      __typeof__(v112) z_ = (__typeof__(v112)){0};
      LODWORD(z_) = LANES128(a3[1]).n128_u64[1];
      v112 = z_;
    }
    v113 = (float)-v109 * LANES128(v108).n128_f32[0];
    {
      __typeof__(v114) z_ = (__typeof__(v114)){0};
      LODWORD(z_) = LANES128(*(a3)).n128_u64[1];
      v114 = z_;
    }
    v115 = (float)-v110 * LANES128(v99).n128_f32[0];
    v116 =
        (float)((float)((float)((float)((float)(PSEUDO_UNFUSED(
                                            vmuls_lane_f32(v109, v108, 2) *
                                            LANES128(v99).n128_f32[0])) +
                                        (float)(vmuls_lane_f32(
                                                    COERCE_FLOAT(*a3),
                                                    COERCE_AS(float32x2_t,
                                                              LANES128(v108)
                                                                  .n128_u64[0]),
                                                    1) *
                                                LANES128(v99).n128_f32[2])) +
                                (float)(vmuls_lane_f32(
                                            LANES128(v108).n128_f32[0], *a3,
                                            2) *
                                        LANES128(v99).n128_f32[1])) +
                        (float)(v115 * v114)) +
                (float)(v113 * LANES128(v99).n128_f32[2])) +
        (float)(v111 * LANES128(v108).n128_f32[2]);
    if (v116 != 0x0.0p+0f) {
      v94 = 0x1.0000000000000p+0f / v116;
    }
    LANES128(v117).n128_f32[0] =
        (float)((float)(v110 * v104) - (float)(PSEUDO_UNFUSED(v112 * v101))) *
        v94;
    v118 =
        (float)((float)(v101 * v114) - (float)(PSEUDO_UNFUSED(v104 * v109))) *
        v94;
    v119 = (float)((float)(LANES128(v107).n128_f32[0] * v104) -
                   (float)(PSEUDO_UNFUSED(v114 * LANES128(v99).n128_f32[0]))) *
           v94;
    LANES128(v120).n128_f32[0] =
        (float)((float)(LANES128(v99).n128_f32[0] * v112) -
                (float)(PSEUDO_UNFUSED(v104 * LANES128(v108).n128_f32[0]))) *
        v94;
    LANES128(v121).n128_f32[0] =
        (float)(v115 + (float)(LANES128(v108).n128_f32[0] * v101)) * v94;
    LANES128(v117).n128_f32[1] = v118;
    LANES128(v117).n128_f32[2] =
        (float)((float)(v109 * v112) - (float)(PSEUDO_UNFUSED(v114 * v110))) *
        v94;
    LANES128(v117).n128_f32[3] =
        (float)((float)-(
                    float)(PSEUDO_UNFUSED(LANES128(v108).n128_f32[3] * v118)) -
                (float)(LANES128(v117).n128_f32[0] *
                        LANES128(v107).n128_f32[3])) -
        (float)(LANES128(v117).n128_f32[2] * LANES128(v99).n128_f32[3]);
    LANES128(v120).n128_f32[1] = v119;
    LANES128(v121).n128_f32[1] =
        (float)(v111 + (float)(LANES128(v99).n128_f32[0] * v109)) * v94;
    LANES128(v99).n128_u64[0] = 0;
    LANES128(v99).n128_u32[2] = 0;
    LANES128(v120).n128_u64[1] = __PAIR64__(
        COERCE_UNSIGNED_INT(
            (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                LANES128(v108).n128_f32[3] * v119)) -
                            (float)(LANES128(v120).n128_f32[0] *
                                    LANES128(v107).n128_f32[3])) -
                    (float)((float)((float)((float)(LANES128(v108).n128_f32[0] *
                                                    v114) -
                                            (float)(PSEUDO_UNFUSED(
                                                v112 *
                                                LANES128(v107).n128_f32[0]))) *
                                    v94) *
                            LANES128(v99).n128_f32[3]))),
        COERCE_UNSIGNED_INT(
            (float)((float)((float)(LANES128(v108).n128_f32[0] * v114) -
                            (float)(PSEUDO_UNFUSED(
                                v112 * LANES128(v107).n128_f32[0]))) *
                    v94)));
    LANES128(v121).n128_u64[1] = __PAIR64__(
        COERCE_UNSIGNED_INT(
            (float)((float)((float)-(float)(PSEUDO_UNFUSED(
                                LANES128(v108).n128_f32[3] *
                                LANES128(v121).n128_f32[1])) -
                            (float)(LANES128(v121).n128_f32[0] *
                                    LANES128(v107).n128_f32[3])) -
                    (float)((float)((float)(v113 +
                                            (float)(LANES128(v107).n128_f32[0] *
                                                    v110)) *
                                    v94) *
                            LANES128(v99).n128_f32[3]))),
        COERCE_UNSIGNED_INT(
            (float)((float)(v113 + (float)(LANES128(v107).n128_f32[0] * v110)) *
                    v94)));
    LANES128(v99).n128_f32[3] = v103;
    v35 = vaddq_f32(v99, vmlaq_f32(vmlaq_f32(vmulq_n_f32(v117, v102),
                                             COERCE_AS(float32x4_t, 0), v120),
                                   COERCE_AS(float32x4_t, 0), v121));
    v122 = vmulq_f32(v117, COERCE_AS(float32x4_t, 0));
    v123 = vmlaq_f32(v122, COERCE_AS(float32x4_t, 0), v120);
    v124 = vmlaq_n_f32(v122, v120, v105);
    LANES128(v125).n128_u64[0] = 0;
    LANES128(v125).n128_u32[2] = 0;
    LANES128(v125).n128_f32[3] = v106;
    v36 = vaddq_f32(v125, vmlaq_f32(v124, COERCE_AS(float32x4_t, 0), v121));
    v37 = vaddq_f32(vmlaq_f32(v123, COERCE_AS(float32x4_t, 0), v121),
                    COERCE_AS(float32x4_t, GameData_1a82dc0));
  }
  else {
    v27 = *(float*)(a5 + 8);
    v28 = *(float*)(a5 + 12);
    v29 = 0x1.0000000000000p+0f / (float)(v22 + v22);
    v30 = 0x1.0000000000000p+0f / (float)((float)-v23 - v23);
    *(float*)&v31 = (float)(v29 + v29) * (float)(0x1.0000000000000p-1f / v27);
    v32 = (float)(0x1.0000000000000p-1f -
                  (float)((float)((float)(LANES128(*(a3)).n128_f32[3] +
                                          *(float*)a5) /
                                  v27) /
                          v14)) +
          (float)((float)-(float)((float)(v22 - v22) * v29) *
                  (float)(0x1.0000000000000p-1f / v27));
    v33 = (float)(v30 + v30) * (float)(0x1.0000000000000p-1f / v28);
    v34 = (float)((float)((float)((float)(LANES128(a3[1]).n128_f32[3] +
                                          *(float*)(a5 + 4)) /
                                  v28) /
                          v15) +
                  0x1.0000000000000p-1f) +
          (float)((float)-(float)((float)(v23 - v23) * v30) *
                  (float)(0x1.0000000000000p-1f / v28));
    LANES128(v36).n128_u32[0] = 0;
    LANES128(v36).n128_u32[2] = 0;
    LANES128(v35).n128_u32[2] = 0;
    LANES128(v35).n128_u64[0] = v31;
    LANES128(v36).n128_f32[1] = v33;
    LANES128(v35).n128_f32[3] = v32;
    LANES128(v36).n128_f32[3] = v34;
    v37 = COERCE_AS(float32x4_t, GameData_1a82dc0);
  }
  v126 = *(float32x4_t*)(a2 + 128);
  v127 = *(float32x4_t*)(a2 + 144);
  v128 = *(float32x4_t*)(a2 + 160);
  LANES128(v129).n128_u64[0] = 0;
  LANES128(v129).n128_u32[2] = 0;
  LANES128(v130).n128_u64[0] = 0;
  LANES128(v130).n128_u32[2] = 0;
  LANES128(v129).n128_u32[3] = LANES128(v35).n128_u32[3];
  LANES128(v130).n128_u32[3] = LANES128(v37).n128_u32[3];
  v26 = vaddq_f32(
      v129,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v126, LANES128(v35).n128_f32[0]), v127,
                         COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
          v128, v35, 2));
  LANES128(v129).n128_u64[0] = 0;
  LANES128(v129).n128_u32[2] = 0;
  LANES128(v129).n128_u32[3] = LANES128(v36).n128_u32[3];
  v25 = vaddq_f32(
      v129,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v126, LANES128(v36).n128_f32[0]), v127,
                         COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
          v128, v36, 2));
  v19 = COERCE_AS(float32x4_t, GameData_1a82dc0);
  v24 = vaddq_f32(
      v130,
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v126, LANES128(v37).n128_f32[0]), v127,
                         COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]), 1),
          v128, v37, 2));
  if (a6 <= 2) {
  LABEL_23:
    v89 = *(_QWORD*)(*(_QWORD*)(a2 + 200) + 56LL);
    if (v89 != 0) {
      v90 = v89 + *((unsigned int*)v10 + 12);
    }
    else {
      v90 = 0;
    }
    v91 = (_OWORD*)(v90 + (a6 << 6));
    v91[14] = *(_OWORD*)&(v26);
    v91[15] = *(_OWORD*)&(v25);
    v91[16] = *(_OWORD*)&(v24);
    v91[17] = *(_OWORD*)&(v19);
  }
  return result;
}

#pragma GCC visibility pop
