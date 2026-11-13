#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5df100(_QWORD, _QWORD);
__int64 GameRoutine_5df110(_QWORD, long double, long double);
__int64 StripeSystem_5caa80(float, float, __int64, __int64, __int64, __int64);
extern __int128 GameData_1a83610;
float32x4_t game_5c05c0(float32x4_t*, float32x2_t*, float32x4_t*, float);
void GameRoutine_5c2180(float, float, __int64, float32x4_t*, __int64,
                        float32x4_t*, float*);
void game_5c2d00(long double, long double, __int64, int8x16_t*, __int64,
                 float*);
void game_5c38e0(long double, long double, __int64, int8x16_t*, __int64,
                 float*);
void game_5c3e70(float, __int64, __int128*, __int64, _DWORD*, float32x2_t*);
__int64 nn_vfx_detail_5caf20(__int64 a1, __int64 a2, int8x16_t* a3);

__int64 nn_vfx_detail_5caf20(__int64 a1, __int64 a2, int8x16_t* a3)
{
  __int64 v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int32 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  long double v13;
  long double v14;
  long double v15;
  long double v16;
  int8x16_t v17;
  float32x4_t v18;
  unsigned __int64 v19;
  float v20;
  float v21;
  unsigned int v22;
  unsigned int v23;
  float v24;
  float v25;
  float v26;
  float v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float32x4_t* v33;
  __int64 v34;
  float32x4_t* v35;
  __int64 v36;
  unsigned __int64 v37;
  long double v38;
  float32x4_t v39;
  unsigned int* v40;
  unsigned int* v41;
  unsigned int* v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  unsigned __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  float32x4_t v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float32x4_t v58;
  float32x4_t v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  float32x4_t* v65;
  __int64 v66;
  int v67;
  __int64 v68;
  unsigned int* v69;
  unsigned __int64 v70;
  unsigned int* v71;
  unsigned int* v72;
  float32x2_t v73;
  float v74;
  float32x4_t v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  unsigned __int64 v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t* v82;
  float32x4_t* v83;
  float32x4_t v84;
  float32x4_t v85;
  int v86;
  unsigned __int64 v87;
  int8x16_t v88;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  float32x4_t v94;
  float32x4_t v95;
  int8x16_t v96;
  float32x4_t v97;
  float32x4_t v98;
  float32x4_t v99;
  __int64 v100;
  float32x4_t* v101;
  float32x4_t* v102;
  float32x4_t v103;
  float32x4_t v104;
  float32x4_t v105;
  int v106;
  int v107;
  __int64 v108;
  int v109;
  int v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64 v114;
  float v115;
  float32x4_t v116;
  __int128 v117;
  __int128 v118;
  int8x16_t v120;
  float32x4_t v121;
  float32x4_t v122;
  float32x4_t* v123;
  float32x4_t v124;
  float32x4_t v125;
  float32x4_t v126;
  __int128 v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  long double v131;

  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *(_QWORD*)(a2 + 16);
  v6 = *(_QWORD*)(v3 + 1048);
  v7 = *(_QWORD*)(*(_QWORD*)(v3 + 568) + 824LL);
  v8 = GameRoutine_5df100(v3 + 1960, *(unsigned int*)(v6 + 56)),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LANES128(a3[7]).n128_u32[3] = *(_DWORD*)(a2 + 24);
  v9 = *(_DWORD*)(a2 + 28);
  LANES128(a3[7]).n128_u32[2] = 0;
  LANES128(a3[8]).n128_u32[0] = v9;
  v10 = *(_QWORD**)(a2 + 16);
  v11 = v10[19];
  v12 = v10[71];
  v131 = *(long double*)(v10[62] + 16LL * *(int*)(a2 + 32));
  v13 = v131;
  LODWORD(v14) = *(_DWORD*)(a2 + 24);
  LODWORD(v13) = *(_DWORD*)(a2 + 28);
  game_5c2d00(v13, v14, v11, a3, v12, (float*)&v131),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LODWORD(v16) = *(_DWORD*)(a2 + 24);
  LODWORD(v15) = *(_DWORD*)(a2 + 28);
  game_5c38e0(v15, v16, *(_QWORD*)(*(_QWORD*)(a2 + 16) + 152LL), a3 + 1,
              *(_QWORD*)(*(_QWORD*)(a2 + 16) + 568LL), (float*)&v131),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v17 = *a3;
  v18 = a3[1];
  v19 = LANES128(a3[5]).n128_u64[1];
  v20 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 568LL) + 24LL) +
                  864LL);
  v21 = vmuls_lane_f32(v20, *a3, 2);
  LANES128(v17).n128_f32[0] = v20 * COERCE_FLOAT(*a3);
  *(float*)&v22 = v20 * LANES128(v18).n128_f32[0];
  LANES128(v17).n128_f32[1] = vmuls_lane_f32(
      v20, COERCE_AS(float32x2_t, LANES128(*(a3)).n128_u64[0]), 1);
  *(float*)&v23 =
      vmuls_lane_f32(v20, COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 1);
  v24 = vmuls_lane_f32(v20, v18, 2);
  LANES128(v18).n128_u64[0] = __PAIR64__(v23, v22);
  LANES128(v17).n128_f32[2] = v21;
  LANES128(v18).n128_f32[2] = v24;
  v25 = LANES128(a3[8]).n128_f32[2];
  *a3 = v17;
  a3[1] = v18;
  LANES128(v18).n128_f32[0] = floorf(v25);
  v26 = LANES128(a3[7]).n128_f32[3];
  v27 = *(float*)(a2 + 24);
  LANES128(a3[8]).n128_f32[2] = v27;
  if (floorf(v26) <= LANES128(v18).n128_f32[0] && v26 != 0.0) {
    v28 = *(_QWORD**)(a2 + 16);
    v29 = *(int*)(a2 + 32);
    v129 = (__typeof__(v129)){0};
    v29 *= 16;
    v30 = v28[61];
    v31 = v28[19];
    v32 = v28[71];
    v33 = *(float32x4_t**)(v19 + 48);
    v131 = *(long double*)(v28[62] + v29);
    v130 = *(float32x4_t*)(v30 + v29);
    GameRoutine_5c2180(*(float*)(a2 + 28), v27, v31, &v129, v32, &v130,
                       (float*)&v131),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v35 = *(float32x4_t**)(a2 + 16);
    v36 = *(int*)(a2 + 32);
    v37 = LANES128(v35[29]).n128_u64[0];
    v38 = *(long double*)(LANES128(v35[7]).n128_u64[1] + 320);
    v129 = vmulq_f32(v129, *(float32x4_t*)&v38);
    v39 = *(float32x4_t*)(v37 + 16 * v36);
    if (*(_DWORD*)(v7 + 4) != 0) {
    LABEL_27:
      *v33 = v39;
      LANES128(v39).n128_u32[3] = LANES128(v129).n128_u32[0];
      *v33 = v39;
      v58 = *(float32x4_t*)(*(_QWORD*)(a2 + 16) + 848LL);
      v33[2] = v58;
      v86 = LANES128(a3[7]).n128_i32[0];
      goto LABEL_35;
    }
    v40 = (unsigned int*)(LANES128(v35[33]).n128_u64[0] + 16 * v36);
    v41 = (unsigned int*)(LANES128(v35[33]).n128_u64[1] + 16 * v36);
    v42 = (unsigned int*)(LANES128(v35[34]).n128_u64[0] + 16 * v36);
    if (*(_BYTE*)(LANES128(v35[10]).n128_u64[0] + 1875) == 2) {
      LANES128(v43).n128_u64[0] = *v40 | ((unsigned __int64)*v41 << 32);
      LANES128(v43).n128_u64[1] = *v42;
      LANES128(v44).n128_u64[0] = v40[1] | ((unsigned __int64)v41[1] << 32);
      LANES128(v44).n128_u64[1] = v42[1];
      LANES128(v45).n128_u64[0] = v40[2] | ((unsigned __int64)v41[2] << 32);
      LANES128(v45).n128_u64[1] = v42[2];
      LANES128(v46).n128_u64[0] = LANES128(v35[55]).n128_u64[0];
      v79 = LANES128(v35[55]).n128_u32[2];
    }
    else {
      if (*(_BYTE*)(LANES128(v35[10]).n128_u64[0] + 1875) == 0) {
        v43 = v35[52];
        v44 = v35[53];
        v45 = v35[54];
        v46 = v35[55];
      LABEL_26:
        v38 = COERCE_LONG_DOUBLE(vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v43, LANES128(v39).n128_f32[0]), v44,
                           COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]),
                           1),
            v45, v39, 2));
        v39 = vaddq_f32(v46, *(float32x4_t*)&v38);
        LANES128(v39).n128_u32[3] = LANES128(*(v33)).n128_u32[3];
        goto LABEL_27;
      }
      LANES128(v43).n128_u64[0] = *v40 | ((unsigned __int64)*v41 << 32);
      LANES128(v43).n128_u64[1] = *v42;
      LANES128(v44).n128_u64[0] = v40[1] | ((unsigned __int64)v41[1] << 32);
      v79 = v42[3];
      LANES128(v44).n128_u64[1] = v42[1];
      LANES128(v45).n128_u64[0] = v40[2] | ((unsigned __int64)v41[2] << 32);
      LANES128(v45).n128_u64[1] = v42[2];
      LANES128(v46).n128_u64[0] = v40[3] | ((unsigned __int64)v41[3] << 32);
    }
    LANES128(v46).n128_u64[1] = v79;
    goto LABEL_26;
  }
  v47 = *(_QWORD*)(v19 + 56);
  v129 = (__typeof__(v129)){0};
  LANES128(a3[5]).n128_u64[1] = v47;
  if (*(_DWORD*)(v7 + 4) != 0) {
    v48 = *(_QWORD**)(a2 + 16);
    v49 = v48[61];
    v50 = 16LL * *(int*)(a2 + 32);
    v51 = v48[19];
    v52 = v48[71];
    v131 = *(long double*)(v48[62] + v50);
    v130 = *(float32x4_t*)(v49 + v50);
    GameRoutine_5c2180(*(float*)(a2 + 28), *(float*)(a2 + 24), v51, &v129, v52,
                       &v130, (float*)&v131),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v53 = *(_QWORD**)(a2 + 16);
    v54 = *(float32x4_t*)(v53[15] + 320LL);
    v55 = *(int*)(a2 + 32);
    v56 = v53[58] + 16 * v55;
    v57 = v53[59] + 16 * v55;
    v129 = vmulq_f32(v129, v54);
    LANES128(v58).n128_u64[0] = *(_QWORD*)v56;
    LANES128(v58).n128_u64[1] = *(unsigned int*)(v56 + 8);
    LANES128(v59).n128_u64[0] = *(_QWORD*)v57;
    LANES128(v59).n128_u64[1] = *(unsigned int*)(v57 + 8);
    goto LABEL_17;
  }
  v60 = *(_QWORD**)(a2 + 16);
  v61 = v60[61];
  v62 = 16LL * *(int*)(a2 + 32);
  v63 = v60[19];
  v64 = v60[71];
  v131 = *(long double*)(v60[62] + v62);
  v130 = *(float32x4_t*)(v61 + v62);
  GameRoutine_5c2180(*(float*)(a2 + 28), *(float*)(a2 + 24), v63, &v129, v64,
                     &v130, (float*)&v131),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v65 = *(float32x4_t**)(a2 + 16);
  v66 = *(int*)(a2 + 32);
  v67 = *(unsigned __int8*)(LANES128(v65[10]).n128_u64[0] + 1875);
  v68 = LANES128(v65[29]).n128_u64[0] + 16 * v66;
  v69 = (unsigned int*)(LANES128(v65[33]).n128_u64[0] + 16 * v66);
  v70 = LANES128(v65[33]).n128_u64[1];
  v71 = (unsigned int*)(LANES128(v65[34]).n128_u64[0] + 16 * v66);
  v129 = vmulq_f32(v129, *(float32x4_t*)(LANES128(v65[7]).n128_u64[1] + 320));
  v72 = (unsigned int*)(v70 + 16 * v66);
  LANES64(v73).n64_u64[0] = *(unsigned __int64*)v68;
  v74 = *(float*)(v68 + 8);
  if (v67 == 2) {
    LANES128(v75).n128_u64[0] = *v69 | ((unsigned __int64)*v72 << 32);
    LANES128(v75).n128_u64[1] = *v71;
    LANES128(v76).n128_u64[0] = v69[1] | ((unsigned __int64)v72[1] << 32);
    LANES128(v76).n128_u64[1] = v71[1];
    LANES128(v77).n128_u64[0] = v69[2] | ((unsigned __int64)v72[2] << 32);
    LANES128(v77).n128_u64[1] = v71[2];
    LANES128(v78).n128_u64[0] = LANES128(v65[55]).n128_u64[0];
    LANES128(v78).n128_u64[1] = LANES128(v65[55]).n128_u32[2];
  }
  else {
    if (v67 != 0) {
      v34 = v71[2];
      LANES128(v75).n128_u64[0] = *v69 | ((unsigned __int64)*v72 << 32);
      LANES128(v75).n128_u64[1] = *v71;
      LANES128(v76).n128_u64[0] = v69[1] | ((unsigned __int64)v72[1] << 32);
      LANES128(v76).n128_u64[1] = v71[1];
      LANES128(v77).n128_u64[0] = v69[2] | ((unsigned __int64)v72[2] << 32);
      LANES128(v77).n128_u64[1] = v34;
      LANES128(v80).n128_u32[0] = v69[3];
      LANES128(v80).n128_u32[1] = v72[3];
      LANES128(v80).n128_u64[1] = v71[3];
      v58 = vaddq_f32(
          vmlaq_n_f32(vmlaq_lane_f32(vmulq_n_f32(v75, LANES64(v73).n64_f32[0]),
                                     v76, v73, 1),
                      v77, v74),
          v80);
      goto LABEL_16;
    }
    v75 = v65[52];
    v76 = v65[53];
    v77 = v65[54];
    v78 = v65[55];
  }
  v58 = vaddq_f32(
      v78, vmlaq_n_f32(vmlaq_lane_f32(vmulq_n_f32(v75, LANES64(v73).n64_f32[0]),
                                      v76, v73, 1),
                       v77, v74));
LABEL_16:
  v59 = vaddq_f32(
      vmlaq_n_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(
                  v75, COERCE_FLOAT(*(_QWORD*)(LANES128(v65[29]).n128_u64[1] +
                                               16 * v66))),
              v76, *(float32x2_t*)(LANES128(v65[29]).n128_u64[1] + 16 * v66),
              1),
          v77, *(float*)(LANES128(v65[29]).n128_u64[1] + 16 * v66 + 8)),
      COERCE_AS(float32x4_t, 0));
LABEL_17:
  v81 = v58;
  a3[4] = v58;
  *(float32x4_t*)(v19 + 16) = v59;
  LANES128(v81).n128_u32[3] = *(_DWORD*)(v19 + 12);
  *(float32x4_t*)v19 = v81;
  LANES128(v58).n128_u32[3] = LANES128(v129).n128_u32[0];
  *(float32x4_t*)v19 = v58;
  if (*(_DWORD*)(v7 + 4) == 0) {
    v38 = *(long double*)(*(_QWORD*)(a2 + 16) + 848LL);
    HIDWORD(v38) = 0;
    *(long double*)(v19 + 32) = v38;
    v82 = (float32x4_t*)(v19 + 32);
    if ((unsigned int)(*(_DWORD*)v7 - 1) > 1) {
      goto LABEL_33;
    }
  LABEL_21:
    v83 = *(float32x4_t**)(a2 + 16);
    if (*(_BYTE*)(LANES128(v83[10]).n128_u64[0] + 2226) != 0) {
      if (LANES128(a3[7]).n128_i32[0] < 1) {
        v87 = *(_QWORD*)(v19 + 24);
        LANES128(v128).n128_u64[0] = *(_QWORD*)(v19 + 16);
        LANES128(v128).n128_u64[1] = v87;
        v85 = v128;
      }
      else {
        v84 = vsubq_f32(v58, *(float32x4_t*)*(_QWORD*)(v19 + 48));
        LANES128(v84).n128_u32[3] = 0;
        v85 = vaddq_f32(vmulq_n_f32(v84, 0x1.0000000000000p+0 /
                                             LANES128(v83[4]).n128_f32[3]),
                        COERCE_AS(float32x4_t, 0));
      }
      v88 = vmulq_f32(v85, v85);
      LANES128(v88).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
              .n64_u64[0];
      LANES128(v88).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v88).n128_f32[0] < 0x1.4f8b580000000p-17) {
        v85 = v83[54];
        v88 = vmulq_f32(v85, v85);
        LANES128(v88).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v88, v88, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
                .n64_u64[0];
        LANES128(v88).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v88).n128_u64[0])))
                .n64_u64[0];
      }
      LANES128(v88).n128_u64[1] = LANES128(v88).n128_u64[0];
      v89 = *(int*)(a2 + 32);
      v91 = LANES128(v83[31]).n128_u64[0];
      v90 = LANES128(v83[31]).n128_u64[1];
      v127 = (__typeof__(v127)){0};
      v89 *= 16;
      v92 = LANES128(v83[9]).n128_i64[1];
      v93 = LANES128(v83[35]).n128_i64[1];
      v94 = vrsqrteq_f32(v88);
      v95 = vmulq_f32(v94, vrsqrtsq_f32(v94, vmulq_f32(v88, v94)));
      v128 = vbicq_s8(
          vmulq_f32(v85,
                    vmulq_f32(v95, vrsqrtsq_f32(v95, vmulq_f32(v88, v95)))),
          vceqzq_f32(v88));
      v131 = *(long double*)(v90 + v89);
      v130 = *(float32x4_t*)(v91 + v89);
      game_5c3e70(*(float*)(a2 + 24), v92, &v127, v93, &v131,
                  (float32x2_t*)&v130),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      game_5c05c0(v82, (float32x2_t*)v82, &v128, *((float*)&v127 + 2)),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v96 = vmulq_f32(*v82, *v82);
      LANES128(v96).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v96, v96, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])))
              .n64_u64[0];
      LANES128(v96).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v96).n128_u64[0])))
              .n64_u64[0];
      LANES128(v96).n128_u64[1] = LANES128(v96).n128_u64[0];
      v97 = vrsqrteq_f32(v96);
      v98 = vmulq_f32(v97, vrsqrtsq_f32(v97, vmulq_f32(v96, v97)));
      v99 = vmulq_f32(v96, v98);
      v38 = COERCE_LONG_DOUBLE(vceqzq_f32(v96));
      v58 = vbicq_s8(vmulq_f32(*v82, vmulq_f32(v98, vrsqrtsq_f32(v98, v99))),
                     *(int8x16_t*)&v38);
      *v82 = v58;
      if (LANES128(a3[7]).n128_u32[0] == 1) {
        v100 = *(_QWORD*)(v19 + 48);
        *(_QWORD*)(v100 + 40) = LANES128(*(v82)).n128_u64[1];
        *(_QWORD*)(v100 + 32) = LANES128(*(v82)).n128_u64[0];
      }
    }
    goto LABEL_33;
  }
  v38 = *(long double*)&GameData_1a83610;
  *(_OWORD*)(v19 + 32) = GameData_1a83610;
  v82 = (float32x4_t*)(v19 + 32);
  if ((unsigned int)(*(_DWORD*)v7 - 1) <= 1) {
    goto LABEL_21;
  }
LABEL_33:
  v86 = LANES128(a3[7]).n128_i32[0];
  LODWORD(v38) = *(_DWORD*)(v7 + 20);
  LANES128(v58).n128_f32[0] = (float)v86;
  if (*(float*)&v38 > (float)v86) {
    LANES128(a3[7]).n128_u32[0] = ++v86;
  }
LABEL_35:
  if (v86 < 2) {
    return GameRoutine_5df110(*(_QWORD*)(a2 + 16) + 1960LL, *(long double*)&v58,
                              v38);
  }
  v101 = *(float32x4_t**)(LANES128(a3[5]).n128_u64[1] + 48);
  v102 = (float32x4_t*)LANES128(v101[3]).n128_u64[0];
  v38 = *(long double*)v102;
  v58 = vsubq_f32(*v101, *v102);
  LODWORD(v38) = *(_DWORD*)(v7 + 40);
  LANES128(v58).n128_u32[3] = 0;
  if (*(float*)&v38 > 0.0) {
    if (LANES128(a3[7]).n128_f32[3] >= 0x1.0000000000000p+1) {
      v120 = vmulq_f32(v58, v58);
      LANES128(v120).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v120, v120, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
              .n64_u64[0];
      LANES128(v120).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v120).n128_u64[0])))
              .n64_u64[0];
      if (LANES128(v120).n128_f32[0] > 0.0) {
        LANES128(v120).n128_u64[1] = LANES128(v120).n128_u64[0];
        v121 = vrsqrteq_f32(v120);
        v122 = vmulq_f32(v121, vrsqrtsq_f32(v121, vmulq_f32(v120, v121)));
        v58 = vbicq_s8(
            vmulq_f32(v58, vmulq_f32(v122, vrsqrtsq_f32(
                                               v122, vmulq_f32(v120, v122)))),
            vceqzq_f32(v120));
      }
      v123 = a3 + 3;
      v58 = vaddq_f32(a3[3], vmulq_n_f32(vsubq_f32(v58, a3[3]), *(float*)&v38));
      v38 = COERCE_LONG_DOUBLE(vmulq_f32(v58, v58));
      *(float32x2_t*)&v38 = vadd_f32(
          COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v38,
                                                      *(int8x16_t*)&v38, 8u))
                                     .n128_u64[0]),
          *(float32x2_t*)&v38);
      *(float32x2_t*)&v38 = vpadd_f32(*(float32x2_t*)&v38, *(float32x2_t*)&v38);
      if (*(float*)&v38 > 0.0) {
        *((_QWORD*)&v38 + 1) = *(_QWORD*)&v38;
        v124 = vrsqrteq_f32(*(float32x4_t*)&v38);
        v125 = vmulq_f32(
            v124, vrsqrtsq_f32(v124, vmulq_f32(*(float32x4_t*)&v38, v124)));
        v126 = vmulq_f32(*(float32x4_t*)&v38, v125);
        v38 = COERCE_LONG_DOUBLE(vceqzq_f32(*(float32x4_t*)&v38));
        v58 =
            vbicq_s8(vmulq_f32(v58, vmulq_f32(v125, vrsqrtsq_f32(v125, v126))),
                     *(int8x16_t*)&v38);
      }
      *v123 = v58;
      LANES128(v101[1]).n128_u64[1] = LANES128(a3[3]).n128_u64[1];
      LANES128(v101[1]).n128_u64[0] = LANES128(*(v123)).n128_u64[0];
      if (LANES128(a3[7]).n128_u32[0] != 2) {
        goto LABEL_44;
      }
    }
    else {
      v38 = COERCE_LONG_DOUBLE(vmulq_f32(v58, v58));
      *(float32x2_t*)&v38 = vadd_f32(
          COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(*(int8x16_t*)&v38,
                                                      *(int8x16_t*)&v38, 8u))
                                     .n128_u64[0]),
          *(float32x2_t*)&v38);
      *(float32x2_t*)&v38 = vpadd_f32(*(float32x2_t*)&v38, *(float32x2_t*)&v38);
      if (*(float*)&v38 > 0.0) {
        *((_QWORD*)&v38 + 1) = *(_QWORD*)&v38;
        v103 = vrsqrteq_f32(*(float32x4_t*)&v38);
        v104 = vmulq_f32(
            v103, vrsqrtsq_f32(v103, vmulq_f32(*(float32x4_t*)&v38, v103)));
        v105 = vmulq_f32(*(float32x4_t*)&v38, v104);
        v38 = COERCE_LONG_DOUBLE(vceqzq_f32(*(float32x4_t*)&v38));
        v58 =
            vbicq_s8(vmulq_f32(v58, vmulq_f32(v104, vrsqrtsq_f32(v104, v105))),
                     *(int8x16_t*)&v38);
      }
      a3[3] = v58;
      LANES128(v101[1]).n128_u64[1] = LANES128(a3[3]).n128_u64[1];
      LANES128(v101[1]).n128_u64[0] = LANES128(a3[3]).n128_u64[0];
      if (LANES128(a3[7]).n128_u32[0] != 2) {
        goto LABEL_44;
      }
    }
    goto LABEL_43;
  }
  v101[1] = v58;
  if (LANES128(a3[7]).n128_u32[0] == 2) {
  LABEL_43:
    LANES128(v102[1]).n128_u64[1] = LANES128(v101[1]).n128_u64[1];
    LANES128(v102[1]).n128_u64[0] = LANES128(v101[1]).n128_u64[0];
  }
LABEL_44:
  v106 = *(_DWORD*)(v7 + 12);
  if (v106 == 1) {
    LANES128(v58).n128_u32[0] = *(_DWORD*)(v7 + 20);
  }
  else {
    LANES128(v58).n128_f32[0] = 0x1.0000000000000p+0f;
    if (v106 == 0) {
      LANES128(v58).n128_f32[0] = (float)LANES128(a3[7]).n128_i32[0];
    }
  }
  v107 = *(_DWORD*)(v6 + 32) * LANES128(a3[7]).n128_u32[1];
  *(float*)&v38 = 0x1.0000000000000p+0f;
  v108 = *(_QWORD*)(*(_QWORD*)(v3 + 568) + 16LL);
  v109 = *(unsigned __int8*)(v108 + 1884);
  v110 = *(unsigned __int8*)(v108 + 1878);
  if (v109 != 0) {
    LODWORD(v38) = *(_DWORD*)(v3 + 116);
  }
  if (v110 != 0) {
    *(float*)&v38 = *(float*)&v38 * *(float*)(v3 + 112);
  }
  if (*(float*)(v7 + 16) == 0.0) {
    v111 = LANES128(a3[7]).n128_u32[0];
    if ((int)v111 >= 3) {
      v112 = LANES128(a3[5]).n128_u64[1];
      v113 = 0;
      v114 = v8 + 80LL * v107 + 80;
      LANES128(v58).n128_f32[0] =
          0x1.0000000000000p+0 /
          (float)(LANES128(v58).n128_f32[0] + -0x1.0000000000000p+0);
      do {
        v112 = *(_QWORD*)(v112 + 48);
        v115 = (float)(unsigned int)v113++;
        v116 = *(float32x4_t*)v112;
        v117 = *(_OWORD*)(v112 + 16);
        v118 = *(_OWORD*)(v112 + 32);
        *(float*)(v114 - 36) = v115;
        *(_QWORD*)(v114 - 32) = 0;
        *(_QWORD*)(v114 - 24) = 0;
        *(_QWORD*)(v114 - 16) = 0;
        *(_QWORD*)(v114 - 8) = 0;
        *(float*)(v114 + 44) = v115;
        *(_QWORD*)(v114 + 64) = 0;
        *(_QWORD*)(v114 + 72) = 0;
        *(_QWORD*)(v114 + 48) = 0;
        *(_QWORD*)(v114 + 56) = 0;
        *(float*)(v114 - 52) = LANES128(v58).n128_f32[0] * v115;
        *(float*)(v114 + 28) = LANES128(v58).n128_f32[0] * v115;
        *(_DWORD*)(v114 - 72) = LANES128(v116).n128_u32[2];
        *(_QWORD*)(v114 - 80) = LANES128(v116).n128_u64[0];
        *(_QWORD*)(v114 - 64) = v117;
        *(_QWORD*)(v114 - 48) = v118;
        *(_QWORD*)v114 = LANES128(v116).n128_u64[0];
        *(_QWORD*)(v114 + 16) = v117;
        *(_QWORD*)(v114 + 32) = v118;
        *(_DWORD*)(v114 - 56) = DWORD2(v117);
        *(_DWORD*)(v114 - 40) = DWORD2(v118);
        *(_DWORD*)(v114 + 8) = LANES128(v116).n128_u32[2];
        *(float*)(v114 - 68) = vmuls_lane_f32(*(float*)&v38, v116, 3);
        *(_DWORD*)(v114 + 24) = DWORD2(v117);
        *(_DWORD*)(v114 + 40) = DWORD2(v118);
        *(float*)(v114 + 12) =
            -(float)(LANES128(v116).n128_f32[3] * *(float*)&v38);
        v114 += 160;
      } while (v111 != v113);
      LANES128(a3[7]).n128_u32[2] = 2 * v111;
    }
    else {
      LANES128(a3[7]).n128_u32[2] = 0;
    }
  }
  else {
    StripeSystem_5caa80(LANES128(v58).n128_f32[0], *(float*)&v38, v34,
                        (__int64)a3, v7, v8 + 80LL * v107),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  return GameRoutine_5df110(*(_QWORD*)(a2 + 16) + 1960LL, *(long double*)&v58,
                            v38);
}

#pragma GCC visibility pop
