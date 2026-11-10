#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool math_Mtx44_Inverse(int32x4_t* a1);
bool math_Mtx44_InverseTranspose(int32x4_t* a1);

bool math_Mtx44_Inverse(int32x4_t* a1)
{
  int8x16_t v1;
  int32x4_t v2;
  int32x4_t v3;
  int32x4_t v4;
  int32x4_t v5;
  int32x4_t v6;
  int32x4_t v7;
  float32x4_t v8;
  unsigned __int64 v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  bool v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;

  v1 = a1[1];
  v2 = a1[2];
  v3 = a1[3];
  v4 = vzip1q_s32(*a1, v2);
  v5 = vzip1q_s32(v1, v3);
  v6 = vzip2q_s32(*a1, v2);
  v7 = vzip2q_s32(v1, v3);
  v8 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(*(a1)).n128_u64[0]), 0);
  v9 = LANES64_OF(vdup_laneq_s32(v1, 2)).n64_u64[0];
  LANES128(v8).n128_u32[0] = LANES128(v1).n128_u32[0];
  v10 = vzip1q_s32(v4, v5);
  v11 = vzip1q_s32(v6, v7);
  v12 = vzip2q_s32(v6, v7);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v13).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v1).n128_u64[0]), 0);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v15 = vzip2q_s32(v4, v5);
  v16 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(*(a1)).n128_u64[0]), 1);
  LANES128(v16).n128_u32[0] = HIDWORD(LANES128(a1[1]).n128_u64[0]);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v5).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v1).n128_u64[0]), 1);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v19 = vdupq_laneq_s32(*a1, 2);
  LANES128(v19).n128_u32[0] = LANES128(a1[1]).n128_u64[1];
  *(int32x2_t*)&LANES128(v7).n128_i8[8] = vdup_laneq_s32(v1, 3);
  v20 = vextq_s8(v1, vdupq_laneq_s32(*a1, 3), 0xCu);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] = v9;
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v11).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v11).n128_u64[1] = 0x3F8000003F800000LL;
  v23 = vnegq_f64(v11);
  v24 = vsubq_f32(vmulq_f32(v18, v21), vmulq_f32(v7, v22));
  v25 = vsubq_f32(vmulq_f32(v19, v21), vmulq_f32(v20, v22));
  v26 = vsubq_f32(vmulq_f32(v19, v7), vmulq_f32(v20, v18));
  v27 = vmlsq_f32(vmulq_f32(v16, v24), v25, v5);
  v28 = vmlsq_f32(vmulq_f32(v8, v24), v25, v13);
  LANES128(v25).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v25).n128_u64[1] = 0xBF800000BF800000LL;
  v29 = vmlaq_f32(v27, v26, v17);
  v30 = vmlaq_f32(v28, v26, v14);
  v31 = vnegq_f64(v25);
  v32 = vsubq_f32(vmulq_f32(v13, v17), vmulq_f32(v5, v14));
  v33 = vsubq_f32(vmulq_f32(v8, v17), vmulq_f32(v16, v14));
  v34 = vsubq_f32(vmulq_f32(v8, v5), vmulq_f32(v13, v16));
  v35 = vmulq_f32(v29, v23);
  v36 = vmulq_f32(v10, v35);
  LANES128(v36).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  v37 = vmlaq_f32(vmlsq_f32(vmulq_f32(v20, v32), v33, v7), v34, v21);
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  v38 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v19, v32), v33, v18), v34, v22),
                  v31);
  v39 = LANES128(v36).n128_f32[0] == 0x0.0p+0f;
  LANES128(v36).n128_u64[1] = LANES128(v36).n128_u64[0];
  v40 = vrecpeq_f32(v36);
  v41 = vmulq_f32(v40, vrecpsq_f32(v40, v36));
  v42 = vrecpsq_f32(v41, v36);
  v43 = vceqzq_f32(v36);
  v44 = vmulq_f32(v41, v42);
  *a1 = vbicq_s8(vmulq_f32(v44, v35), v43);
  a1[1] = vbicq_s8(vmulq_f32(v44, vmulq_f32(v30, v31)), v43);
  a1[2] = vbicq_s8(vmulq_f32(vmulq_f32(v37, v23), v44), v43);
  a1[3] = vbicq_s8(vmulq_f32(v38, v44), v43);
  return !v39;
}

bool math_Mtx44_InverseTranspose(int32x4_t* a1)
{
  int8x16_t v1;
  int32x4_t v2;
  int32x4_t v3;
  int32x4_t v4;
  int32x4_t v5;
  int32x4_t v6;
  int32x4_t v7;
  float32x4_t v8;
  unsigned __int64 v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  unsigned __int64 v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x2_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  int8x16_t v45;
  int8x16_t v46;
  int8x16_t v47;
  int8x16_t v48;
  int8x16_t v49;
  int8x16_t v50;
  int32x4_t v51;
  int32x4_t v52;
  int32x4_t v53;
  int32x4_t v54;

  v1 = a1[1];
  v2 = a1[2];
  v3 = a1[3];
  v4 = vzip1q_s32(*a1, v2);
  v5 = vzip1q_s32(v1, v3);
  v6 = vzip2q_s32(*a1, v2);
  v7 = vzip2q_s32(v1, v3);
  v8 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(*(a1)).n128_u64[0]), 0);
  v9 = LANES64_OF(vdup_laneq_s32(v1, 2)).n64_u64[0];
  LANES128(v8).n128_u32[0] = LANES128(v1).n128_u32[0];
  v10 = vzip1q_s32(v4, v5);
  v11 = vzip1q_s32(v6, v7);
  v12 = vzip2q_s32(v6, v7);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v13).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v1).n128_u64[0]), 0);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v15 = vzip2q_s32(v4, v5);
  v16 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(*(a1)).n128_u64[0]), 1);
  LANES128(v16).n128_u32[0] = HIDWORD(LANES128(a1[1]).n128_u64[0]);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v5).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v1).n128_u64[0]), 1);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v19 = vdupq_laneq_s32(*a1, 2);
  v20 = LANES64_OF(vdup_laneq_s32(v1, 3)).n64_u64[0];
  LANES128(v19).n128_u32[0] = LANES128(a1[1]).n128_u64[1];
  v21 = vextq_s8(v1, vdupq_laneq_s32(*a1, 3), 0xCu);
  LANES128(v1).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v7).n128_u64[1] = v20;
  LANES128(v18).n128_u64[1] = v9;
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v1).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v11).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v11).n128_u64[1] = 0x3F8000003F800000LL;
  v23 = vnegq_f64(v11);
  v24 = vsubq_f32(vmulq_f32(v18, v1), vmulq_f32(v7, v22));
  v25 = vsubq_f32(vmulq_f32(v19, v1), vmulq_f32(v21, v22));
  v26 = vsubq_f32(vmulq_f32(v19, v7), vmulq_f32(v21, v18));
  v27 = vmlsq_f32(vmulq_f32(v16, v24), v25, v5);
  v28 = vmlsq_f32(vmulq_f32(v8, v24), v25, v13);
  LANES128(v25).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v25).n128_u64[1] = 0xBF800000BF800000LL;
  v29 = vmlaq_f32(v27, v26, v17);
  v30 = vmlaq_f32(v28, v26, v14);
  v31 = vnegq_f64(v25);
  v32 = vsubq_f32(vmulq_f32(v13, v17), vmulq_f32(v5, v14));
  v33 = vsubq_f32(vmulq_f32(v8, v17), vmulq_f32(v16, v14));
  v34 = vsubq_f32(vmulq_f32(v8, v5), vmulq_f32(v13, v16));
  v35 = vmulq_f32(v29, v23);
  v36 = vmulq_f32(v10, v35);
  LANES128(v36).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  v37 = vmlaq_f32(vmlsq_f32(vmulq_f32(v21, v32), v33, v7), v34, v1);
  LANES64(v38).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0])))
          .n64_u64[0];
  v39 = vmulq_f32(vmlaq_f32(vmlsq_f32(vmulq_f32(v19, v32), v33, v18), v34, v22),
                  v31);
  LANES128(v33).n128_u64[0] = LANES64(v38).n64_u64[0];
  *(float32x2_t*)&LANES128(v33).n128_i8[8] = v38;
  v40 = vrecpeq_f32(v33);
  v41 = vmulq_f32(v40, vrecpsq_f32(v40, v33));
  v42 = vrecpsq_f32(v41, v33);
  v43 = vceqzq_f32(v33);
  v44 = vmulq_f32(v41, v42);
  v45 = vmulq_f32(vmulq_f32(v37, v23), v44);
  v46 = vmulq_f32(v39, v44);
  v47 = vbicq_s8(vmulq_f32(v44, v35), v43);
  v48 = vbicq_s8(vmulq_f32(v44, vmulq_f32(v30, v31)), v43);
  v49 = vbicq_s8(v45, v43);
  v50 = vbicq_s8(v46, v43);
  *a1 = v47;
  a1[1] = v48;
  a1[2] = v49;
  a1[3] = v50;
  if (LANES64(v38).n64_f32[0] != 0x0.0p+0f) {
    v51 = vzip1q_s32(v47, v49);
    v52 = vzip2q_s32(v47, v49);
    v53 = vzip1q_s32(v48, v50);
    v54 = vzip2q_s32(v48, v50);
    *a1 = vzip1q_s32(v51, v53);
    a1[1] = vzip2q_s32(v51, v53);
    a1[2] = vzip1q_s32(v52, v54);
    a1[3] = vzip2q_s32(v52, v54);
  }
  return LANES64(v38).n64_f32[0] != 0x0.0p+0f;
}

#pragma GCC visibility pop
