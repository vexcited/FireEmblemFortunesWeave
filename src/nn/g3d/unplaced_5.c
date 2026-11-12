#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83210;
extern __int128 GameData_1a83510;
extern __int128 GameData_1a83520;
extern __int128 GameData_1a837f0;
int8x16_t* nn_g3d_5f7910(int8x16_t* result, unsigned int a2, float32x4_t a3,
                         float a4);
float32x4_t nn_g3d_5f8900(__int64 a1, float32x4_t* a2, float32x4_t result);
float32x4_t nn_g3d_5f9040(__int64 a1, float32x4_t* a2, float32x4_t result);
float32x4_t nn_g3d_5f9b20(__int64 a1, float32x4_t* a2, float32x4_t result);

int8x16_t* nn_g3d_5f7910(int8x16_t* result, unsigned int a2, float32x4_t a3,
                         float a4)
{
  float32x4_t v4;
  float32x2_t v5;
  int32x2_t v6;
  int32x2_t v7;
  int32x2_t v8;
  int32x2_t v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  int8x16_t v13;
  int8x16_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  float32x2_t v28;
  unsigned __int32 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float v33;
  float64x2_t v34;
  float32x4_t v35;
  int32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  int8x16_t v39;
  int8x16_t v40;
  int8x16_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float64x2_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  int32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  int8x16_t v53;
  float32x4_t v54;
  int8x16_t v55;
  float v56;
  int8x16_t v57;
  int8x16_t v58;
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
  int32x2_t v74;
  int32x2_t v75;
  float v76;
  int32x2_t v77;
  int32x2_t v78;
  int32x2_t v79;
  float v80;
  bool v81;
  float v82;
  float32x2_t v83;
  float v84;
  float32x2_t v85;
  float32x2_t v86;
  float v87;
  int32x2_t v88;
  float32x2_t v89;
  int8x8_t v90;
  float v91;
  float32x2_t v92;
  float32x2_t v93;
  float32x2_t v94;
  float v95;
  float32x2_t v96;
  float v97;
  float v98;
  float v99;
  int8x16x2_t v100;
  int8x16x2_t v101;

  LANES128(a3).n128_u64[1] = a2;
  v10 = vmlaq_f32(a3, vdupq_n_s32(0xC0C90FDB),
                  vrndnq_f32(vmulq_f32(a3, vdupq_n_s32(0x3E22F983u))));
  v11 = vcgtq_f32(v10, vdupq_n_s32(0x3FC90FDBu));
  v12 = vmvnq_s8(v11);
  v13 = vbslq_s8(v11, vsubq_f32(vdupq_n_s32(0x40490FDBu), v10), v10);
  v14 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v13);
  PSEUDO_LOW_LANE64(v5, n64_u32, *(_DWORD*)GameData_212c190);
  PSEUDO_LOW_LANE64(v6, n64_u32, *((_DWORD*)GameData_212c190 + 1));
  PSEUDO_LOW_LANE64(
      v7, n64_u32,
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4));
  v15 = vbicq_s8(v12, v14);
  v16 = vbslq_s8(v14, vsubq_f32(vdupq_n_s32(0xC0490FDB), v13), v13);
  PSEUDO_LOW_LANE64(
      v8, n64_f32,
      -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190));
  v17 = vmulq_f32(v16, v16);
  PSEUDO_LOW_LANE64(
      v9, n64_f32,
      -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190));
  v18 = vmlaq_f32(
      vdupq_lane_s32(v9, 0), v17,
      vmlaq_f32(vdupq_lane_s32(v7, 0), v17,
                vmlaq_f32(vdupq_lane_s32(v8, 0), v17,
                          vmlsq_lane_f32(vdupq_lane_s32(v6, 0), v17, v5, 0))));
  LANES128(v19).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v19).n128_u64[1] = 0x3F8000003F800000LL;
  v20 = vmlaq_f32(v19, v17, v18);
  PSEUDO_LOW_LANE128(v18, n128_u32, *(_DWORD*)GameData_212c188);
  v21 = vmulq_f32(v16, v20);
  v22 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
  v23 = vmlsq_lane_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v22).n128_u64[0]), 0), v17,
      COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]), 0);
  PSEUDO_LOW_LANE128(
      v18, n128_f32,
      -COERCE_FLOAT(HIDWORD(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188))));
  v24 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0), v17,
      v23);
  v25 = vmlaq_f32(vdupq_laneq_s32(v22, 2), v17, v24);
  LANES128(v24).n128_f32[0] = -LANES128(v22).n128_f32[3];
  v26 = vmlaq_f32(
      v19, v17,
      vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 0),
          v17, v25));
  v27 = vbslq_s8(v15, v26, vnegq_f32(v26));
  LANES128(v24).n128_u64[0] =
      LANES128(v27).n128_u32[2] |
      ((unsigned __int64)LANES128(v21).n128_u32[2] << 32);
  LANES64(v28).n64_u64[0] =
      LANES64_OF(
          vmul_f32(
              COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
              COERCE_AS(float32x2_t,
                        (LANES128(v27).n128_u32[1] |
                         ((unsigned __int64)LANES128(v27).n128_u32[1] << 32)))))
          .n64_u64[0];
  LANES128(v24).n128_u64[1] = 1065353216;
  v29 = LANES64_OF(vmul_f32(COERCE_AS(float32x2_t, LANES128(v21).n128_u32[1]),
                            COERCE_AS(float32x2_t, 3212836864LL)))
            .n64_u32[0];
  LANES128(v25).n128_u64[0] =
      LANES128(v21).n128_u32[1] |
      ((unsigned __int64)LANES128(v21).n128_u32[1] << 32);
  LANES128(v25).n128_u64[1] = LANES128(v27).n128_u32[1];
  v30 = vmulq_f32(v25, v24);
  PSEUDO_LOW_LANE128(v4, n128_u64, __ROR8__(LANES128(v24).n128_u64[0], 32));
  v31 = vaddq_f32(vmulq_n_f32(v30, LANES128(v21).n128_f32[0]),
                  vmulq_f32(vmulq_n_f32(v4, LANES128(v27).n128_f32[0]),
                            COERCE_AS(float32x4_t, GameData_1a82940)));
  v32 = vaddq_f32(vmulq_n_f32(v30, LANES128(v27).n128_f32[0]),
                  vmulq_f32(vmulq_n_f32(v4, LANES128(v21).n128_f32[0]),
                            COERCE_AS(float32x4_t, GameData_1a83510)));
  v33 = LANES128(result[4]).n128_f32[1];
  if (v33 == 0x0.0p+0f) {
    LANES128(v34).n128_u64[0] = 0xBF800000BF800000LL;
    LANES128(v34).n128_u64[1] = 0xBF800000BF800000LL;
    v35 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83520),
                                   LANES64(v28).n64_f32[0]),
                       vnegq_f64(v34),
                       COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]), 1),
        COERCE_AS(float32x4_t, GameData_1a83210), v32, 2);
    LANES128(v34).n128_u32[0] = LANES64(v28).n64_u32[1];
    LANES128(v34).n128_u32[1] = LANES128(v32).n128_u32[0];
    v36 = vaddq_f32(v35, v19);
    LANES128(v34).n128_u64[1] = LANES128(v31).n128_u32[2];
    LANES128(v37).n128_u32[0] = LANES128(v31).n128_u32[0];
    LANES128(v37).n128_u32[1] = v29;
    LANES128(v37).n128_u64[1] = LANES128(v32).n128_u32[1];
    v100.val[0] = vaddq_f32(v37, v34);
    v100.val[1] = vsubq_f32(v34, v37);
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0x302010003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v38).n128_i8[8] =
        vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0x1B1A191807060504LL));
    LANES128(v38).n128_u64[0] =
        __PAIR64__(LANES128(v34).n128_u32[1], LANES128(v36).n128_u32[0]);
    *(int8x8_t*)&LANES128(v34).n128_i8[8] =
        vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0x171615140B0A0908LL));
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v34).n128_u32[1] = LANES128(v36).n128_u32[1];
    LANES128(v37).n128_u32[3] =
        LANES64_OF(vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u32[1];
    LANES128(v39).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0x171615141B1A1918LL)))
            .n64_u64[0];
    LANES128(v37).n128_u32[2] = LANES128(v36).n128_u32[2];
    LANES128(v100.val[0]).n128_u32[0] =
        LANES64_OF(vqtbl2_s8(v100, COERCE_AS(int8x8_t, 0x302010013121110LL)))
            .n64_u32[0];
    v100.val[1] =
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v36).n128_u64[0]), 1);
    v40 = vdupq_laneq_s32(v36, 2);
    LANES128(v39).n128_u64[1] = __PAIR64__(LANES128(v36).n128_u32[3],
                                           LANES128(v100.val[0]).n128_u32[0]);
    v100.val[0] =
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v36).n128_u64[0]), 0);
    v41 = vcgeq_f32(v100.val[1], v100.val[0]);
    v100.val[0] = vbslq_s8(v41, v100.val[1], v100.val[0]);
    v100.val[1] = vcgeq_f32(v40, v100.val[0]);
    v42 = vbslq_s8(vcgeq_f32(vdupq_laneq_s32(v36, 3),
                             vbslq_s8(v100.val[1], v40, v100.val[0])),
                   v39, vbslq_s8(v100.val[1], v37, vbslq_s8(v41, v34, v38)));
    v43 = vmulq_f32(v42, v42);
    LANES128(v43).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
            .n64_u64[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0])))
            .n64_u64[0];
    LANES128(v43).n128_u64[1] = LANES128(v43).n128_u64[0];
    v44 = vrsqrteq_f32(v43);
    v45 = vmulq_f32(v44, vrsqrtsq_f32(v44, vmulq_f32(v43, v44)));
    result[2] = vbicq_s8(
        vmulq_f32(v42, vmulq_f32(v45, vrsqrtsq_f32(v45, vmulq_f32(v43, v45)))),
        vceqzq_f32(v43));
  }
  else {
    LANES128(v46).n128_u64[0] = 0xBF800000BF800000LL;
    LANES128(v46).n128_u64[1] = 0xBF800000BF800000LL;
    v47 = result[2];
    v48 = vmlaq_lane_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83520),
                                     LANES64(v28).n64_f32[0]),
                         vnegq_f64(v46),
                         COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]), 1);
    LANES128(v49).n128_u32[0] = LANES64(v28).n64_u32[1];
    LANES128(v49).n128_u32[1] = LANES128(v32).n128_u32[0];
    v50 = vaddq_f32(
        vmlaq_laneq_f32(v48, COERCE_AS(float32x4_t, GameData_1a83210), v32, 2),
        v19);
    LANES128(v51).n128_u32[1] = v29;
    LANES128(v51).n128_u32[0] = LANES128(v31).n128_u32[0];
    LANES128(v49).n128_u64[1] = LANES128(v31).n128_u32[2];
    LANES128(v51).n128_u64[1] = LANES128(v32).n128_u32[1];
    v101.val[0] = vaddq_f32(v51, v49);
    v101.val[1] = vsubq_f32(v49, v51);
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x302010003020100LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v48).n128_i8[8] =
        vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x1B1A191807060504LL));
    LANES128(v48).n128_u64[0] =
        __PAIR64__(LANES128(v51).n128_u32[1], LANES128(v50).n128_u32[0]);
    *(int8x8_t*)&LANES128(v51).n128_i8[8] =
        vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x171615140B0A0908LL));
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v51).n128_u32[1] = LANES128(v50).n128_u32[1];
    LANES128(v49).n128_u32[3] =
        LANES64_OF(vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
            .n64_u32[1];
    LANES128(v46).n128_u64[0] =
        LANES64_OF(vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x171615141B1A1918LL)))
            .n64_u64[0];
    LANES128(v49).n128_u32[2] = LANES128(v50).n128_u32[2];
    LANES128(v101.val[0]).n128_u32[0] =
        LANES64_OF(vqtbl2_s8(v101, COERCE_AS(int8x8_t, 0x302010013121110LL)))
            .n64_u32[0];
    v101.val[1] =
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 1);
    v52 = vdupq_laneq_s32(v50, 2);
    LANES128(v46).n128_u64[1] = __PAIR64__(LANES128(v50).n128_u32[3],
                                           LANES128(v101.val[0]).n128_u32[0]);
    v101.val[0] =
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v50).n128_u64[0]), 0);
    v53 = vcgeq_f32(v101.val[1], v101.val[0]);
    v101.val[0] = vbslq_s8(v53, v101.val[1], v101.val[0]);
    v101.val[1] = vcgeq_f32(v52, v101.val[0]);
    v54 = vbslq_s8(vcgeq_f32(vdupq_laneq_s32(v50, 3),
                             vbslq_s8(v101.val[1], v52, v101.val[0])),
                   v46, vbslq_s8(v101.val[1], v49, vbslq_s8(v53, v51, v48)));
    v55 = vmulq_f32(v54, v54);
    LANES128(v55).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v55, v55, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v55).n128_u64[0])))
            .n64_u64[0];
    LANES128(v55).n128_u64[1] = LANES128(v55).n128_u64[0];
    v101.val[0] = vrsqrteq_f32(v55);
    v101.val[0] = vmulq_f32(
        v101.val[0], vrsqrtsq_f32(v101.val[0], vmulq_f32(v55, v101.val[0])));
    v56 = a4 + v33;
    v57 = vbicq_s8(
        vmulq_f32(v54, vmulq_f32(v101.val[0],
                                 vrsqrtsq_f32(v101.val[0],
                                              vmulq_f32(v55, v101.val[0])))),
        vceqzq_f32(v55));
    v58 = vmulq_f32(v47, v57);
    LANES128(v58).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v58, v58, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_u64[0];
    v59 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0])))
            .n64_f32[0];
    if (v59 < 0x0.0p+0f) {
      v60 = -v59;
    }
    else {
      v60 = v59;
    }
    if (v59 < 0x0.0p+0f) {
      v61 = -0x1.0000000000000p+0f;
    }
    else {
      v61 = 0x1.0000000000000p+0f;
    }
    v62 = sqrtf(0x1.0000000000000p+0f - (float)(v60 * v60));
    v63 = a4 / v56;
    v64 = -LANES64(v5).n64_f32[0];
    if (v60 >= 0x0.0p+0f) {
      v68 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
      v69 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
      v70 =
          *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
      v71 = v60 / v62;
      v72 = v62 / v60;
      v73 = 0x1.921fb60000000p+0f -
            (float)(PSEUDO_UNFUSED(
                v71 *
                (float)((float)((float)((float)((float)(v70 +
                                                        (float)((float)((float)((float)(v69 + (float)((
                                                                                                          float)((float)((float)(v68 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v71 * v71)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v71 *
                                                                                                                                                       v71))) *
                                                                                                                         (float)(v71 *
                                                                                                                                 v71)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v71 *
                                                                                                              v71))) *
                                                                                (float)(v71 *
                                                                                        v71)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v71 *
                                                                        v71))) *
                                                (float)(v71 * v71)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v71 * v71)) +
                        0x1.0000000000000p+0f)));
      v66 =
          v72 *
          (float)((
                      float)((float)((float)((float)(v70 +
                                                     (float)((float)((float)((
                                                                                 float)(v69 + (float)((
                                                                                                          float)((float)((float)(v68 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v72 * v72)) - *((float*)GameData_212c2f0 + 1)) * (float)(v72 * v72))) * (float)(v72 * v72)) - *(float*)((
                                                                                                                                                                                                                                                                                                               char*)((_UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)
                                                                                                                                                                                                                                                                                                               GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                           4)) *
                                                                                                      (float)(v72 *
                                                                                                              v72))) *
                                                                             (float)(v72 *
                                                                                     v72)) -
                                                                     *(float*)((char*)((
                                                                                   __int128*)0x10LL) +
                                                                               (_QWORD)
                                                                                   GameData_212c2f0 +
                                                                               4)) *
                                                             (float)(v72 *
                                                                     v72))) *
                                             (float)(v72 * v72)) -
                                     *(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c2f0 + 12)) *
                             (float)(v72 * v72)) +
                  0x1.0000000000000p+0f);
      if (v60 <= 0x1.6a09e60000000p-1f) {
        v66 = v73;
      }
    }
    else if (v60 >= -0x1.6a09e60000000p-1f) {
      v67 = (float)-v60 / v62;
      v66 =
          (float)(PSEUDO_UNFUSED(
              v67 * (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                             __int128*)0x10LL) +
                                                         (_QWORD)
                                                             GameData_212c2f0 +
                                                         12) -
                                               (float)((
                                                           float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((
                                                                                                                                                                                                                                                                                                               char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v67 *
                                                                                                                                                                                                                                                                                                                                                                                                v67))) *
                                                                                                                                                                                                                                                                                                       (float)(v67 *
                                                                                                                                                                                                                                                                                                               v67))) *
                                                                                                                                                                                                                                                                                    (float)(v67 *
                                                                                                                                                                                                                                                                                            v67))) *
                                                                                                                                                                                                                                                            (float)(v67 *
                                                                                                                                                                                                                                                                    v67))) *
                                                                                                                                                                         (float)(v67 *
                                                                                                                                                                                 v67))) *
                                                                          (float)(v67 *
                                                                                  v67))) *
                                                       (float)(v67 * v67))) *
                                    (float)(v67 * v67)) +
                            0x1.0000000000000p+0f))) +
          0x1.921fb60000000p+0f;
    }
    else {
      v65 = (float)-v62 / v60;
      v66 =
          0x1.921fb60000000p+1f -
          (float)(PSEUDO_UNFUSED(
              v65 * (float)((
                                float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 12) - (float)((
                                                                                                                                           float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8) + (float)((
                                                                                                                                                                                                                                     float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                                                                                                                                                                                                                                                              4) -
                                                                                                                                                                                                                                                    (float)((
                                                                                                                                                                                                                                                                float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                                                                                                                  (float)((
                                                                                                                                                                                                                                                                                                                                                                              float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(
                                                                                                                                                                                                                                                                                                                                                                                                                                                                    float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         GameData_212c2f0 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     (float)(v65 *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             v65))) *
                                                                                                                                                                                                                                                                                                                                                                                                                                                                (float)(v65 * v65))) *
                                                                                                                                                                                                                                                                                                                                                                          (float)(v65 *
                                                                                                                                                                                                                                                                                                                                                                                  v65))) *
                                                                                                                                                                                                                                                                                                                                                  (float)(v65 *
                                                                                                                                                                                                                                                                                                                                                          v65))) *
                                                                                                                                                                                                                                                            (float)(v65 * v65))) *
                                                                                                                                                                                                                                 (float)(v65 *
                                                                                                                                                                                                                                         v65))) *
                                                                                                                                       (float)(v65 *
                                                                                                                                               v65))) *
                                       (float)(v65 * v65)) +
                            0x1.0000000000000p+0f)));
    }
    LANES64(v74).n64_u64[0] = LANES64_OF(vdup_n_s32(0x3E22F983u)).n64_u64[0];
    LANES64(v75).n64_u64[0] = LANES64_OF(vdup_n_s32(0xC0C90FDB)).n64_u64[0];
    v76 = v66 +
          (float)(roundf(v66 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    LANES64(v77).n64_u64[0] = LANES64_OF(vdup_n_s32(0x3FC90FDBu)).n64_u64[0];
    LANES64(v78).n64_u64[0] = LANES64_OF(vdup_n_s32(0xBFC90FDB)).n64_u64[0];
    LANES64(v79).n64_u64[0] = LANES64_OF(vdup_n_s32(0xC0490FDB)).n64_u64[0];
    v80 = -0x1.921fb60000000p+1f - v76;
    if (v76 >= -0x1.921fb60000000p+0f) {
      v80 = v76;
    }
    v81 = v76 <= 0x1.921fb60000000p+0f;
    v82 = 0x1.0000000000000p+0f - v63;
    LANES64(v83).n64_f32[0] = 0x1.0000000000000p+0f - v63;
    LANES64(v83).n64_f32[1] = v63;
    v84 = v63 * v61;
    LANES64(v85).n64_u64[0] = LANES64_OF(vmul_n_f32(v83, v66)).n64_u64[0];
    LANES64(v86).n64_u64[0] =
        LANES64_OF(vmla_f32(v85, v75, vrndn_f32(vmul_f32(v85, v74))))
            .n64_u64[0];
    v87 = 0x1.921fb60000000p+1f - v76;
    LANES64(v88).n64_u64[0] = LANES64_OF(vcgt_f32(v86, v77)).n64_u64[0];
    LANES64(v89).n64_u64[0] =
        LANES64_OF(vsub_f32(vdup_n_s32(0x40490FDBu), v86)).n64_u64[0];
    if (v81) {
      v87 = v80;
    }
    LANES64(v90).n64_u64[0] = LANES64_OF(vbsl_s8(v88, v89, v86)).n64_u64[0];
    v91 =
        v87 *
        (float)((float)((float)((float)((float)(LANES64(v7).n64_f32[0] +
                                                (float)((float)((float)((float)(LANES64(
                                                                                    v6)
                                                                                    .n64_f32
                                                                                        [0] +
                                                                                (float)(v64 *
                                                                                        (float)(v87 *
                                                                                                v87))) *
                                                                        (float)(v87 *
                                                                                v87)) -
                                                                *(float*)((char*)((
                                                                              _UNKNOWN**)0x8LL) +
                                                                          (_QWORD)
                                                                              GameData_212c190)) *
                                                        (float)(v87 * v87))) *
                                        (float)(v87 * v87)) -
                                *(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c190)) *
                        (float)(v87 * v87)) +
                0x1.0000000000000p+0f);
    LANES64(v92).n64_u64[0] =
        LANES64_OF(vbsl_s8(vcgt_f32(v78, v90), vsub_f32(v79, v90), v90))
            .n64_u64[0];
    LANES64(v93).n64_u64[0] = LANES64_OF(vmul_f32(v92, v92)).n64_u64[0];
    LANES64(v94).n64_u64[0] =
        LANES64_OF(
            vmla_f32(COERCE_AS(float32x2_t, 0x3F8000003F800000LL), v93,
                     vmla_f32(vdup_lane_s32(v9, 0), v93,
                              vmla_f32(vdup_lane_s32(v7, 0), v93,
                                       vmla_f32(vdup_lane_s32(v8, 0), v93,
                                                vmla_n_f32(vdup_lane_s32(v6, 0),
                                                           v93, v64))))))
            .n64_u64[0];
    v95 = 0x1.0000000000000p+0f / v91;
    LANES64(v96).n64_u64[0] = LANES64_OF(vmul_f32(v92, v94)).n64_u64[0];
    v97 = (float)(0x1.0000000000000p+0f / v91) * LANES64(v96).n64_f32[0];
    v98 = vmuls_lane_f32(v61, v96, 1) * v95;
    if (v60 <= 0x1.fffeb00000000p-1f) {
      v99 = v97;
    }
    else {
      v99 = v82;
    }
    if (v60 > 0x1.fffeb00000000p-1f) {
      v98 = v84;
    }
    result[2] = vmlaq_n_f32(vmulq_n_f32(v47, v99), v57, v98);
  }
  return result;
}

float32x4_t nn_g3d_5f8900(__int64 a1, float32x4_t* a2, float32x4_t result)
{
  float32x4_t* v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  __int64 i;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t* v32;
  float32x4_t* v33;
  unsigned __int32 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  __int64 v46;
  float32x2_t* v47;
  float32x4_t* v48;
  __int64 v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t* v55;
  float32x4_t* v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;

  v4 = *(_QWORD*)(a1 + 24);
  v3 = *(float32x4_t**)(a1 + 32);
  v5 = *(unsigned __int16*)(a1 + 80);
  if ((~*(_DWORD*)v4 & 0xC000000) != 0) {
    v10 = *a2;
    v11 = a2[1];
    v12 = a2[2];
    v13 = a2[3];
    v14 = *(float32x4_t*)(v4 + 64);
    v15 = *(float32x4_t*)(v4 + 80);
    v16 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 48))), v11,
                       *(float32x2_t*)(v4 + 48), 1),
        v12, *(float32x4_t*)(v4 + 48), 2);
    v17 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v14).n128_f32[0]), v11,
                         COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 32))), v11,
                       *(float32x2_t*)(v4 + 32), 1),
        v12, *(float32x4_t*)(v4 + 32), 2);
    v3[1] = v16;
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v10, LANES128(v15).n128_f32[0]), v11,
                          COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1),
                      v12, v15, 2),
                  v13);
    v3[2] = vmlaq_laneq_f32(v17, v12, v14, 2);
    v3[3] = result;
  }
  else {
    v6 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v6;
    v7 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v7;
    v8 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v8;
    v9 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v9;
  }
  *(_DWORD*)v4 = *(_DWORD*)v4 & 0xFFFFFFF | ((HIBYTE(*(_DWORD*)v4) & 3) << 28);
  if (v5 >= 2) {
    for (i = 0; 96LL * v5 - 96 != i; i += 96) {
      v27 = *(_QWORD*)(a1 + 16) + i;
      v28 = *(unsigned __int16*)(v27 + 136);
      v29 = *(unsigned __int16*)(v27 + 138);
      v30 = &v3[4 * v28];
      v31 = (float32x4_t*)(v4 + 96LL * (unsigned int)v28);
      v32 = &v3[4 * v29];
      v33 = (float32x4_t*)(v4 + 96LL * (unsigned int)v29);
      v34 = LANES128(*(v31)).n128_u32[0];
      LANES128(*(v31)).n128_u32[0] = LANES128(*(v33)).n128_u32[0] &
                                         (16 * LANES128(*(v31)).n128_u32[0]) &
                                         0xF0000000 |
                                     LANES128(*(v31)).n128_u32[0] & 0xFFFFFFF;
      if ((~LANES128(*(v33)).n128_u32[0] & 0x3000000) != 0) {
        result = v32[3];
        v39 = v33[1];
        v40 = vmulq_n_f32(*v32, LANES128(v39).n128_f32[0]);
        v41 = vmulq_lane_f32(
            v32[1], COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]), 1);
        v42 = vmulq_laneq_f32(v32[2], v39, 2);
        *v30 = v40;
        v30[1] = v41;
        v30[2] = v42;
        v30[3] = result;
        if ((~LANES128(*(v31)).n128_u32[0] & 0xC000000) == 0) {
          continue;
        }
        v43 = v31[4];
        v44 = v31[5];
        v45 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v40, COERCE_FLOAT(*(_OWORD*)&v31[3])), v41,
                COERCE_AS(float32x2_t, LANES128(v31[3]).n128_u64[0]), 1),
            v42, v31[3], 2);
        *v30 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v40, COERCE_FLOAT(*(_OWORD*)&v31[2])), v41,
                COERCE_AS(float32x2_t, LANES128(v31[2]).n128_u64[0]), 1),
            v42, v31[2], 2);
        v30[1] = v45;
        result = vaddq_f32(
            result,
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v40, LANES128(v44).n128_f32[0]), v41,
                    COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]), 1),
                v42, v44, 2));
        v30[2] = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v40, LANES128(v43).n128_f32[0]), v41,
                           COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                           1),
            v42, v43, 2);
      }
      else {
        if ((~v34 & 0xC000000) == 0) {
          v35 = LANES128(v32[3]).n128_u64[1];
          LANES128(v30[2]).n128_u64[1] = LANES128(v32[2]).n128_u64[1];
          LANES128(v30[3]).n128_u64[1] = v35;
          v36 = LANES128(v32[1]).n128_u64[1];
          LANES128(*(v30)).n128_u64[1] = LANES128(*(v32)).n128_u64[1];
          LANES128(v30[1]).n128_u64[1] = v36;
          v37 = LANES128(*(v32)).n128_u64[0];
          LANES128(v30[1]).n128_u64[0] = LANES128(v32[1]).n128_u64[0];
          LANES128(*(v30)).n128_u64[0] = v37;
          v38 = LANES128(v32[2]).n128_u64[0];
          LANES128(v30[3]).n128_u64[0] = LANES128(v32[3]).n128_u64[0];
          LANES128(v30[2]).n128_u64[0] = v38;
          continue;
        }
        v19 = *v32;
        v20 = v32[1];
        v21 = v32[2];
        v22 = v32[3];
        v23 = v31[4];
        v24 = v31[5];
        v25 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v32, COERCE_FLOAT(*(_OWORD*)&v31[3])), v20,
                COERCE_AS(float32x2_t, LANES128(v31[3]).n128_u64[0]), 1),
            v21, v31[3], 2);
        v26 = vmlaq_lane_f32(vmulq_n_f32(*v32, LANES128(v23).n128_f32[0]), v20,
                             COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                             1);
        *v30 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(*v32, COERCE_FLOAT(*(_OWORD*)&v31[2])), v20,
                COERCE_AS(float32x2_t, LANES128(v31[2]).n128_u64[0]), 1),
            v21, v31[2], 2);
        v30[1] = v25;
        v30[2] = vmlaq_laneq_f32(v26, v21, v23, 2);
        result = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v19, LANES128(v24).n128_f32[0]), v20,
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]), 1),
                v21, v24, 2),
            v22);
      }
      v30[3] = result;
    }
  }
  if (v5 == 0) {
    return result;
  }
  if (v5 != 1) {
    v47 = (float32x2_t*)(v4 + 112);
    v48 = v3 + 4;
    v49 = 0;
    while (1) {
      if ((~LANES64(v47[-14]).n64_u32[0] & 0x3000000) != 0) {
        v50 = *(float32x4_t*)LANES64(v47[-12]).n64_u64;
        result = vmulq_n_f32(v48[-4], LANES128(v50).n128_f32[0]);
        v51 = vmulq_lane_f32(
            v48[-3], COERCE_AS(float32x2_t, LANES128(v50).n128_u64[0]), 1);
        v52 = vmulq_laneq_f32(v48[-2], v50, 2);
        v48[-4] = result;
        v48[-3] = v51;
        v48[-2] = v52;
        if ((~LANES64(v47[-2]).n64_u32[0] & 0x3000000) != 0) {
        LABEL_24:
          result = vmulq_n_f32(*v48,
                               COERCE_FLOAT(*(_OWORD*)LANES64(*(v47)).n64_u64));
          v53 = vmulq_lane_f32(
              v48[1], COERCE_AS(float32x2_t, LANES64(*(v47)).n64_u64[0]), 1);
          v54 = vmulq_laneq_f32(v48[2], *(float32x4_t*)LANES64(*(v47)).n64_u64,
                                2);
          *v48 = result;
          v48[1] = v53;
          v48[2] = v54;
        }
      }
      else if ((~LANES64(v47[-2]).n64_u32[0] & 0x3000000) != 0) {
        goto LABEL_24;
      }
      v47 += 24;
      v49 -= 2;
      v48 += 8;
      if (-(__int64)((unsigned __int16)v5 & 0xFFFE) == v49) {
        v46 = -v49;
        if ((v5 & 1) != 0) {
          goto LABEL_26;
        }
        return result;
      }
    }
  }
  v46 = 0;
LABEL_26:
  v55 = (float32x4_t*)(v4 + 96 * v46);
  if ((~LANES128(*(v55)).n128_u32[0] & 0x3000000) != 0) {
    v56 = &v3[4 * v46];
    v57 = v55[1];
    result = vmulq_n_f32(*v56, LANES128(v57).n128_f32[0]);
    v58 = vmulq_lane_f32(v56[1],
                         COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]), 1);
    v59 = vmulq_laneq_f32(v56[2], v57, 2);
    *v56 = result;
    v56[1] = v58;
    v56[2] = v59;
  }
  return result;
}

float32x4_t nn_g3d_5f9040(__int64 a1, float32x4_t* a2, float32x4_t result)
{
  float32x4_t* v3;
  float32x4_t* v4;
  unsigned int v5;
  _QWORD* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  unsigned __int32 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t* v25;
  float32x4_t* v26;
  float32x4_t* v27;
  float32x4_t* v28;
  unsigned __int32 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  float32x4_t* v34;
  float32x4_t* v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  __int64 v51;
  float32x4_t* v52;
  float32x2_t* v53;
  __int64 v54;
  float32x4_t* v55;
  float32x4_t* v56;
  unsigned __int32 v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  float32x4_t* v63;
  float32x4_t v64;
  float32x4_t v65;
  float32x4_t v66;

  v4 = *(float32x4_t**)(a1 + 24);
  v3 = *(float32x4_t**)(a1 + 32);
  v5 = *(unsigned __int16*)(a1 + 80);
  v6 = *(_QWORD**)(a1 + 40);
  if ((~LANES128(*(v4)).n128_u32[0] & 0xC000000) != 0) {
    v11 = *a2;
    v12 = a2[1];
    v13 = a2[2];
    v14 = a2[3];
    v15 = v4[4];
    v16 = v4[5];
    v17 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)&v4[3])), v12,
                       COERCE_AS(float32x2_t, LANES128(v4[3]).n128_u64[0]), 1),
        v13, v4[3], 2);
    v18 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v15).n128_f32[0]), v12,
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)&v4[2])), v12,
                       COERCE_AS(float32x2_t, LANES128(v4[2]).n128_u64[0]), 1),
        v13, v4[2], 2);
    v3[1] = v17;
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v11, LANES128(v16).n128_f32[0]), v12,
                          COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
                      v13, v16, 2),
                  v14);
    v3[2] = vmlaq_laneq_f32(v18, v13, v15, 2);
    v3[3] = result;
  }
  else {
    v7 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v7;
    v8 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v8;
    v9 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v9;
    v10 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v10;
  }
  v19 = LANES128(*(v4)).n128_u32[0];
  LANES128(*(v4)).n128_u32[0] =
      LANES128(*(v4)).n128_u32[0] & 0xFFFFFFF |
      ((HIBYTE(LANES128(*(v4)).n128_u32[0]) & 3) << 28);
  if ((~v19 & 0x3000000) != 0) {
    v6[1] = LANES128(v4[1]).n128_u64[1];
    *v6 = LANES128(v4[1]).n128_u64[0];
    if (v5 < 2) {
      goto LABEL_18;
    }
    goto LABEL_8;
  }
  result = COERCE_AS(float32x4_t, GameData_1a837f0);
  *(_OWORD*)v6 = GameData_1a837f0;
  if (v5 >= 2) {
  LABEL_8:
    v20 = 0;
    v21 = 96LL * v5 - 96;
    do {
      while (1) {
        v22 = *(_QWORD*)(a1 + 16) + v20;
        v23 = *(unsigned __int16*)(v22 + 136);
        v24 = *(unsigned __int16*)(v22 + 138);
        v25 = &v4[6 * v23];
        v26 = &v4[6 * (unsigned int)v24];
        v27 = &v3[4 * v23];
        v28 = &v3[4 * v24];
        v29 = LANES128(*(v25)).n128_u32[0];
        LANES128(*(v25)).n128_u32[0] = LANES128(*(v26)).n128_u32[0] &
                                           (16 * LANES128(*(v25)).n128_u32[0]) &
                                           0xF0000000 |
                                       LANES128(*(v25)).n128_u32[0] & 0xFFFFFFF;
        if ((~v29 & 0xC000000) == 0) {
          break;
        }
        if ((~LANES128(*(v26)).n128_u32[0] & 0x30000000) != 0) {
          v40 = LANES128(v25[3]).n128_u64[1];
          LANES128(*(v27)).n128_u64[1] = LANES128(v25[2]).n128_u64[1];
          v41 = LANES128(v25[3]).n128_u64[0];
          LANES128(*(v27)).n128_u64[0] = LANES128(v25[2]).n128_u64[0];
          LANES128(v27[1]).n128_u64[0] = v41;
          LANES128(v27[1]).n128_u64[1] = v40;
          v42 = LANES128(v25[5]).n128_u64[1];
          v36 = *v27;
          v37 = v27[1];
          LANES128(v27[2]).n128_u64[1] = LANES128(v25[4]).n128_u64[1];
          v43 = LANES128(v25[5]).n128_u64[0];
          LANES128(v27[2]).n128_u64[0] = LANES128(v25[4]).n128_u64[0];
          LANES128(v27[3]).n128_u64[0] = v43;
          LANES128(v27[3]).n128_u64[1] = v42;
          v38 = v27[2];
          v39 = vmulq_f32(v27[3], v26[1]);
          v27[3] = v39;
        }
        else {
          v36 = v25[2];
          v37 = v25[3];
          v38 = v25[4];
          v39 = v25[5];
        }
        v44 = *v28;
        v45 = v28[1];
        v46 = v28[2];
        v47 = v28[3];
        v48 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v28, LANES128(v36).n128_f32[0]), v45,
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                           1),
            v46, v36, 2);
        v49 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(*v28, LANES128(v37).n128_f32[0]), v45,
                           COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]),
                           1),
            v46, v37, 2);
        v50 = vmlaq_lane_f32(vmulq_n_f32(*v28, LANES128(v38).n128_f32[0]), v45,
                             COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                             1);
        *v27 = v48;
        v27[1] = v49;
        result = vaddq_f32(
            vmlaq_laneq_f32(
                vmlaq_lane_f32(
                    vmulq_n_f32(v44, LANES128(v39).n128_f32[0]), v45,
                    COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]), 1),
                v46, v39, 2),
            v47);
        v27[2] = vmlaq_laneq_f32(v50, v46, v38, 2);
        v27[3] = result;
        v34 = (float32x4_t*)&v6[2 * v23];
        v35 = (float32x4_t*)&v6[2 * v24];
        if ((~LANES128(*(v25)).n128_u32[0] & 0x3000000) == 0) {
          goto LABEL_17;
        }
      LABEL_9:
        result = vmulq_f32(*v35, v25[1]);
        *v34 = result;
        v20 += 96;
        if (v21 == v20) {
          goto LABEL_18;
        }
      }
      v30 = LANES128(v28[3]).n128_u64[1];
      LANES128(v27[2]).n128_u64[1] = LANES128(v28[2]).n128_u64[1];
      LANES128(v27[3]).n128_u64[1] = v30;
      v31 = LANES128(v28[1]).n128_u64[1];
      LANES128(*(v27)).n128_u64[1] = LANES128(*(v28)).n128_u64[1];
      LANES128(v27[1]).n128_u64[1] = v31;
      v32 = LANES128(*(v28)).n128_u64[0];
      LANES128(v27[1]).n128_u64[0] = LANES128(v28[1]).n128_u64[0];
      LANES128(*(v27)).n128_u64[0] = v32;
      v33 = LANES128(v28[2]).n128_u64[0];
      LANES128(v27[3]).n128_u64[0] = LANES128(v28[3]).n128_u64[0];
      LANES128(v27[2]).n128_u64[0] = v33;
      v34 = (float32x4_t*)&v6[2 * v23];
      v35 = (float32x4_t*)&v6[2 * v24];
      if ((~LANES128(*(v25)).n128_u32[0] & 0x3000000) != 0) {
        goto LABEL_9;
      }
    LABEL_17:
      LANES128(*(v34)).n128_u64[1] = LANES128(*(v35)).n128_u64[1];
      LANES128(*(v34)).n128_u64[0] = LANES128(*(v35)).n128_u64[0];
      v20 += 96;
    } while (v21 != v20);
  }
LABEL_18:
  if (v5 == 0) {
    return result;
  }
  if (v5 != 1) {
    v52 = v3 + 4;
    v53 = (float32x2_t*)(v6 + 2);
    v54 = 0;
    v55 = v4;
    v56 = v4;
    while (1) {
      v57 = LANES128(*(v56)).n128_u32[0];
      v56 += 12;
      if ((~v57 & 0x30000000) != 0) {
        v58 = *(float32x4_t*)LANES64(v53[-2]).n64_u64;
        result = vmulq_n_f32(v52[-4], LANES128(v58).n128_f32[0]);
        v59 = vmulq_lane_f32(
            v52[-3], COERCE_AS(float32x2_t, LANES128(v58).n128_u64[0]), 1);
        v60 = vmulq_laneq_f32(v52[-2], v58, 2);
        v52[-4] = result;
        v52[-3] = v59;
        v52[-2] = v60;
        if ((~LANES128(v55[6]).n128_u32[0] & 0x30000000) != 0) {
        LABEL_28:
          result = vmulq_n_f32(*v52,
                               COERCE_FLOAT(*(_OWORD*)LANES64(*(v53)).n64_u64));
          v61 = vmulq_lane_f32(
              v52[1], COERCE_AS(float32x2_t, LANES64(*(v53)).n64_u64[0]), 1);
          v62 = vmulq_laneq_f32(v52[2], *(float32x4_t*)LANES64(*(v53)).n64_u64,
                                2);
          *v52 = result;
          v52[1] = v61;
          v52[2] = v62;
        }
      }
      else if ((~LANES128(v55[6]).n128_u32[0] & 0x30000000) != 0) {
        goto LABEL_28;
      }
      v54 -= 2;
      v52 += 8;
      v53 += 4;
      v55 = v56;
      if (-(__int64)((unsigned __int16)v5 & 0xFFFE) == v54) {
        v51 = -v54;
        if ((v5 & 1) != 0) {
          goto LABEL_30;
        }
        return result;
      }
    }
  }
  v51 = 0;
LABEL_30:
  if ((~LANES128(v4[6 * v51]).n128_u32[0] & 0x30000000) != 0) {
    v63 = &v3[4 * v51];
    v64 = *(float32x4_t*)&v6[2 * v51];
    result = vmulq_n_f32(*v63, LANES128(v64).n128_f32[0]);
    v65 = vmulq_lane_f32(v63[1],
                         COERCE_AS(float32x2_t, LANES128(v64).n128_u64[0]), 1);
    v66 = vmulq_laneq_f32(v63[2], v64, 2);
    *v63 = result;
    v63[1] = v65;
    v63[2] = v66;
  }
  return result;
}

float32x4_t nn_g3d_5f9b20(__int64 a1, float32x4_t* a2, float32x4_t result)
{
  float32x4_t* v3;
  __int64 v4;
  int v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  float32x4_t* v25;
  float32x4_t* v26;
  float32x4_t* v27;
  float32x4_t* v28;
  unsigned __int32 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  float32x2_t* v66;
  float32x4_t* v67;
  __int64 v68;
  float32x4_t v69;
  float32x4_t v70;
  float32x4_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t* v74;
  float32x4_t* v75;
  float32x4_t v76;
  float32x4_t v77;
  float32x4_t v78;
  struct {
    _QWORD v79[2];
    __int64 v80;
  } v79_;
  struct {
    int* v81;
    __int64 v82;
  } v81_;
  int v83;

  v4 = *(_QWORD*)(a1 + 24);
  v3 = *(float32x4_t**)(a1 + 32);
  v5 = *(unsigned __int16*)(a1 + 80);
  if ((~*(_DWORD*)v4 & 0xC000000) != 0) {
    v11 = *a2;
    v12 = a2[1];
    v13 = a2[2];
    v14 = a2[3];
    v15 = *(float32x4_t*)(v4 + 64);
    v16 = *(float32x4_t*)(v4 + 80);
    v17 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 48))), v12,
                       *(float32x2_t*)(v4 + 48), 1),
        v13, *(float32x4_t*)(v4 + 48), 2);
    v18 = vmlaq_lane_f32(vmulq_n_f32(*a2, LANES128(v15).n128_f32[0]), v12,
                         COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]), 1);
    *v3 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*a2, COERCE_FLOAT(*(_OWORD*)(v4 + 32))), v12,
                       *(float32x2_t*)(v4 + 32), 1),
        v13, *(float32x4_t*)(v4 + 32), 2);
    v3[1] = v17;
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v11, LANES128(v16).n128_f32[0]), v12,
                          COERCE_AS(float32x2_t, LANES128(v16).n128_u64[0]), 1),
                      v13, v16, 2),
                  v14);
    v3[2] = vmlaq_laneq_f32(v18, v13, v15, 2);
    v3[3] = result;
  }
  else {
    v7 = LANES128(a2[3]).n128_u64[1];
    LANES128(v3[2]).n128_u64[1] = LANES128(a2[2]).n128_u64[1];
    LANES128(v3[3]).n128_u64[1] = v7;
    v8 = LANES128(a2[1]).n128_u64[1];
    LANES128(*(v3)).n128_u64[1] = LANES128(*(a2)).n128_u64[1];
    LANES128(v3[1]).n128_u64[1] = v8;
    v9 = LANES128(*(a2)).n128_u64[0];
    LANES128(v3[1]).n128_u64[0] = LANES128(a2[1]).n128_u64[0];
    LANES128(*(v3)).n128_u64[0] = v9;
    v10 = LANES128(a2[2]).n128_u64[0];
    LANES128(v3[3]).n128_u64[0] = LANES128(a2[3]).n128_u64[0];
    LANES128(v3[2]).n128_u64[0] = v10;
  }
  *(_DWORD*)v4 = *(_DWORD*)v4 & 0xFFFFFFF | ((HIBYTE(*(_DWORD*)v4) & 3) << 28);
  v83 = 0;
  v81_.v81 = &v83;
  v81_.v82 = 0;
  LODWORD(v81_.v82) = *(unsigned __int16*)(a1 + 82);
  if ((_DWORD)v81_.v82 == 0) {
    v20 = *(_QWORD*)(a1 + 24);
    v21 = *(_QWORD*)(a1 + 88);
    v79_.v79[0] = *(_QWORD*)(a1 + 32);
    v79_.v79[1] = v4 + 16;
    v79_.v80 = v20;
    (*(void (**)(__int64, int**, _QWORD*))(*(_QWORD*)v21 + 16LL))(
        v21, &v81_.v81, v79_.v79);
    v19 = v83 + 1;
    v83 = v19;
    if (v19 >= v5) {
      goto LABEL_24;
    }
  LABEL_10:
    while (1) {
      v22 = *(_QWORD*)(a1 + 16) + 96LL * v19;
      v23 = *(unsigned __int16*)(v22 + 40);
      v24 = *(unsigned __int16*)(v22 + 42);
      v25 = &v3[4 * v23];
      v26 = (float32x4_t*)(v4 + 96LL * (unsigned int)v23);
      v27 = &v3[4 * v24];
      v28 = (float32x4_t*)(v4 + 96LL * (unsigned int)v24);
      v29 = LANES128(*(v26)).n128_u32[0];
      LANES128(*(v26)).n128_u32[0] = LANES128(*(v28)).n128_u32[0] &
                                         (16 * LANES128(*(v26)).n128_u32[0]) &
                                         0xF0000000 |
                                     LANES128(*(v26)).n128_u32[0] & 0xFFFFFFF;
      if ((~v29 & 0xC000000) != 0) {
        break;
      }
      if ((v29 & 0x800000) == 0 &&
          (~LANES128(*(v28)).n128_u32[0] & 0x3000000) != 0) {
        v47 = v28[1];
        v48 = v27[2];
        v49 = v27[3];
        v50 = vmulq_lane_f32(
            v27[1], COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1);
        *v25 = vmulq_n_f32(*v27, LANES128(v47).n128_f32[0]);
        v25[1] = v50;
        result = vmulq_laneq_f32(v48, v47, 2);
        v25[2] = result;
        v25[3] = v49;
      }
      else {
        v30 = LANES128(v27[3]).n128_u64[1];
        LANES128(v25[2]).n128_u64[1] = LANES128(v27[2]).n128_u64[1];
        LANES128(v25[3]).n128_u64[1] = v30;
        v31 = LANES128(v27[1]).n128_u64[1];
        LANES128(*(v25)).n128_u64[1] = LANES128(*(v27)).n128_u64[1];
        LANES128(v25[1]).n128_u64[1] = v31;
        v32 = LANES128(*(v27)).n128_u64[0];
        LANES128(v25[1]).n128_u64[0] = LANES128(v27[1]).n128_u64[0];
        LANES128(*(v25)).n128_u64[0] = v32;
        v33 = LANES128(v27[2]).n128_u64[0];
        LANES128(v25[3]).n128_u64[0] = LANES128(v27[3]).n128_u64[0];
        LANES128(v25[2]).n128_u64[0] = v33;
      }
    LABEL_22:
      if ((_DWORD)v81_.v82 == v19) {
        v62 = *(_QWORD*)(a1 + 88);
        v63 = *(_QWORD*)(a1 + 32) + ((__int64)v19 << 6);
        v64 = 96LL * v19;
        v79_.v80 = *(_QWORD*)(a1 + 24) + v64;
        v79_.v79[0] = v63;
        v79_.v79[1] = v4 + v64 + 16;
        (*(void (**)(__int64, int**, _QWORD*))(*(_QWORD*)v62 + 16LL))(
            v62, &v81_.v81, v79_.v79);
        v19 = v83;
      }
      v83 = ++v19;
      if (v19 >= v5) {
        goto LABEL_24;
      }
    }
    if ((~LANES128(*(v28)).n128_u32[0] & 0x3000000) != 0) {
      if ((v29 & 0x800000) == 0) {
        v38 = v27[3];
        v39 = v28[1];
        v40 = vmulq_n_f32(*v27, LANES128(v39).n128_f32[0]);
        v41 = vmulq_lane_f32(
            v27[1], COERCE_AS(float32x2_t, LANES128(v39).n128_u64[0]), 1);
        v42 = vmulq_laneq_f32(v27[2], v39, 2);
        *v25 = v40;
        v25[1] = v41;
        v25[2] = v42;
        v25[3] = v38;
        v43 = v26[4];
        v44 = v26[5];
        v45 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v40, COERCE_FLOAT(*(_OWORD*)&v26[3])), v41,
                COERCE_AS(float32x2_t, LANES128(v26[3]).n128_u64[0]), 1),
            v42, v26[3], 2);
        *v25 = vmlaq_laneq_f32(
            vmlaq_lane_f32(
                vmulq_n_f32(v40, COERCE_FLOAT(*(_OWORD*)&v26[2])), v41,
                COERCE_AS(float32x2_t, LANES128(v26[2]).n128_u64[0]), 1),
            v42, v26[2], 2);
        v25[1] = v45;
        v46 = vmlaq_laneq_f32(
            vmlaq_lane_f32(vmulq_n_f32(v40, LANES128(v43).n128_f32[0]), v41,
                           COERCE_AS(float32x2_t, LANES128(v43).n128_u64[0]),
                           1),
            v42, v43, 2);
        result = vaddq_f32(
            v38, vmlaq_laneq_f32(
                     vmlaq_lane_f32(
                         vmulq_n_f32(v40, LANES128(v44).n128_f32[0]), v41,
                         COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0]), 1),
                     v42, v44, 2));
        v25[2] = v46;
      LABEL_21:
        v25[3] = result;
        goto LABEL_22;
      }
      v51 = LANES128(v26[3]).n128_u64[1];
      LANES128(*(v25)).n128_u64[1] = LANES128(v26[2]).n128_u64[1];
      v52 = LANES128(v26[3]).n128_u64[0];
      LANES128(*(v25)).n128_u64[0] = LANES128(v26[2]).n128_u64[0];
      LANES128(v25[1]).n128_u64[0] = v52;
      LANES128(v25[1]).n128_u64[1] = v51;
      v53 = LANES128(v26[5]).n128_u64[1];
      v34 = *v25;
      v35 = v25[1];
      LANES128(v25[2]).n128_u64[1] = LANES128(v26[4]).n128_u64[1];
      v54 = LANES128(v26[5]).n128_u64[0];
      LANES128(v25[2]).n128_u64[0] = LANES128(v26[4]).n128_u64[0];
      LANES128(v25[3]).n128_u64[0] = v54;
      LANES128(v25[3]).n128_u64[1] = v53;
      v36 = v25[2];
      v37 = vmulq_f32(v25[3], v28[1]);
      v25[3] = v37;
    }
    else {
      v34 = v26[2];
      v35 = v26[3];
      v36 = v26[4];
      v37 = v26[5];
    }
    v55 = *v27;
    v56 = v27[1];
    v57 = v27[2];
    v58 = v27[3];
    v59 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v27, LANES128(v34).n128_f32[0]), v56,
                       COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]), 1),
        v57, v34, 2);
    v60 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*v27, LANES128(v35).n128_f32[0]), v56,
                       COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]), 1),
        v57, v35, 2);
    v61 = vmlaq_lane_f32(vmulq_n_f32(*v27, LANES128(v36).n128_f32[0]), v56,
                         COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1);
    *v25 = v59;
    v25[1] = v60;
    v25[2] = vmlaq_laneq_f32(v61, v57, v36, 2);
    result =
        vaddq_f32(vmlaq_laneq_f32(
                      vmlaq_lane_f32(
                          vmulq_n_f32(v55, LANES128(v37).n128_f32[0]), v56,
                          COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]), 1),
                      v57, v37, 2),
                  v58);
    goto LABEL_21;
  }
  v19 = 1;
  v83 = 1;
  if (v5 > 1) {
    goto LABEL_10;
  }
LABEL_24:
  if (v5 == 0) {
    return result;
  }
  if (v5 != 1) {
    v66 = (float32x2_t*)(v4 + 112);
    v67 = v3 + 4;
    v68 = 0;
    while (1) {
      if ((~LANES64(v66[-14]).n64_u32[0] & 0x3000000) != 0) {
        v69 = *(float32x4_t*)LANES64(v66[-12]).n64_u64;
        result = vmulq_n_f32(v67[-4], LANES128(v69).n128_f32[0]);
        v70 = vmulq_lane_f32(
            v67[-3], COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]), 1);
        v71 = vmulq_laneq_f32(v67[-2], v69, 2);
        v67[-4] = result;
        v67[-3] = v70;
        v67[-2] = v71;
        if ((~LANES64(v66[-2]).n64_u32[0] & 0x3000000) != 0) {
        LABEL_33:
          result = vmulq_n_f32(*v67,
                               COERCE_FLOAT(*(_OWORD*)LANES64(*(v66)).n64_u64));
          v72 = vmulq_lane_f32(
              v67[1], COERCE_AS(float32x2_t, LANES64(*(v66)).n64_u64[0]), 1);
          v73 = vmulq_laneq_f32(v67[2], *(float32x4_t*)LANES64(*(v66)).n64_u64,
                                2);
          *v67 = result;
          v67[1] = v72;
          v67[2] = v73;
        }
      }
      else if ((~LANES64(v66[-2]).n64_u32[0] & 0x3000000) != 0) {
        goto LABEL_33;
      }
      v66 += 24;
      v68 -= 2;
      v67 += 8;
      if (-(__int64)((unsigned __int16)v5 & 0xFFFE) == v68) {
        v65 = -v68;
        if ((v5 & 1) != 0) {
          goto LABEL_35;
        }
        return result;
      }
    }
  }
  v65 = 0;
LABEL_35:
  v74 = (float32x4_t*)(v4 + 96 * v65);
  if ((~LANES128(*(v74)).n128_u32[0] & 0x3000000) != 0) {
    v75 = &v3[4 * v65];
    v76 = v74[1];
    result = vmulq_n_f32(*v75, LANES128(v76).n128_f32[0]);
    v77 = vmulq_lane_f32(v75[1],
                         COERCE_AS(float32x2_t, LANES128(v76).n128_u64[0]), 1);
    v78 = vmulq_laneq_f32(v75[2], v76, 2);
    *v75 = result;
    v75[1] = v77;
    v75[2] = v78;
  }
  return result;
}

#pragma GCC visibility pop
