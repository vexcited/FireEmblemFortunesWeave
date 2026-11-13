#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

float32x4_t g3d_a6c520(float32x4_t* a1, __int64 a2, int32x4_t* a3, char a4);

float32x4_t g3d_a6c520(float32x4_t* a1, __int64 a2, int32x4_t* a3, char a4)
{
  float32x4_t v4;
  int8x16_t v5;
  int32x4_t v6;
  int32x4_t v7;
  unsigned __int64 v8;
  int32x4_t v9;
  int32x4_t v10;
  int32x4_t v11;
  int32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  int8x16_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  unsigned __int64 v24;
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
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float32x4_t v46;
  float32x4_t v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  int8x16_t v52;
  float32x4_t v53;
  float32x4_t v54;
  float32x4_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  int32x4_t v62;
  int32x4_t v63;
  int32x4_t v64;
  int8x16_t v65;
  int8x16_t v66;
  int8x16_t v67;
  float32x4_t v68;
  int8x16_t v69;
  int8x16_t v70;
  int8x16_t v71;
  int8x16_t v72;

  {
    v4 = *a1;
    __asm__ volatile("" ::"w"(v4));
  }
  if ((a4 & 1) != 0) {
    LANES128(v4).n128_f32[2] = 0x1.0000000000000p+0f - LANES128(v4).n128_f32[2];
    LANES128(v4).n128_u32[3] = 0;
  }
  {
    v5 = a3[1];
    __asm__ volatile("" ::"w"(v5));
  }
  {
    v6 = a3[2];
    __asm__ volatile("" ::"w"(v6));
  }
  {
    v7 = a3[3];
    __asm__ volatile("" ::"w"(v7));
  }
  v8 = LANES64_OF(vdup_laneq_s32(v5, 2)).n64_u64[0];
  v9 = vzip1q_s32(*a3, v6);
  v10 = vzip1q_s32(v5, v7);
  v11 = vzip2q_s32(*a3, v6);
  v12 = vzip2q_s32(v5, v7);
  v13 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(*(a3)).n128_u64[0]), 0);
  LANES128(v13).n128_u32[0] = LANES128(v5).n128_u32[0];
  v14 = vzip1q_s32(v9, v10);
  v15 = vzip1q_s32(v11, v12);
  v16 = vzip2q_s32(v11, v12);
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v17).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v5).n128_u64[0]), 0);
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v18).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v19 = vzip2q_s32(v9, v10);
  v20 = vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(*(a3)).n128_u64[0]), 1);
  LANES128(v20).n128_u32[0] = HIDWORD(LANES128(a3[1]).n128_u64[0]);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v21).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v10).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v5).n128_u64[0]), 1);
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v21).n128_i8[8] =
      vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  v23 = vdupq_laneq_s32(*a3, 2);
  v24 = LANES64_OF(vdup_laneq_s32(v5, 3)).n64_u64[0];
  LANES128(v23).n128_u32[0] = LANES128(a3[1]).n128_u64[1];
  v25 = vextq_s8(v5, vdupq_laneq_s32(*a3, 3), 0xCu);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] = v24;
  LANES128(v22).n128_u64[1] = v8;
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v5).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A09080F0E0D0CLL));
  LANES128(v15).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v15).n128_u64[1] = 0x3F8000003F800000LL;
  v27 = vnegq_f64(v15);
  v28 = vsubq_f32(vmulq_f32(v22, v5), vmulq_f32(v12, v26));
  v29 = vsubq_f32(vmulq_f32(v23, v5), vmulq_f32(v25, v26));
  v30 = vsubq_f32(vmulq_f32(v23, v12), vmulq_f32(v25, v22));
  v31 = vmlsq_f32(vmulq_f32(v20, v28), v29, v10);
  v32 = vmlsq_f32(vmulq_f32(v13, v28), v29, v17);
  LANES128(v29).n128_u64[0] = 0xBF800000BF800000LL;
  LANES128(v29).n128_u64[1] = 0xBF800000BF800000LL;
  v33 = vmlaq_f32(v31, v30, v21);
  v34 = vmlaq_f32(v32, v30, v18);
  v35 = vnegq_f64(v29);
  v36 = vsubq_f32(vmulq_f32(v17, v21), vmulq_f32(v10, v18));
  v37 = vsubq_f32(vmulq_f32(v13, v21), vmulq_f32(v20, v18));
  v38 = vsubq_f32(vmulq_f32(v13, v10), vmulq_f32(v17, v20));
  v39 = vmulq_f32(v33, v27);
  v40 = vmulq_f32(v14, v39);
  LANES128(v40).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v40, v40, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
          .n64_u64[0];
  v41 = vmlaq_f32(vmlsq_f32(vmulq_f32(v23, v36), v37, v22), v38, v26);
  v42 = vmlaq_f32(vmlsq_f32(vmulq_f32(v25, v36), v37, v12), v38, v5);
  {
    v43 = *(int8x16_t*)(a2 + 16);
    __asm__ volatile("" ::"w"(v43));
  }
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v40).n128_u64[0])))
          .n64_u64[0];
  LANES128(v40).n128_u64[1] = LANES128(v40).n128_u64[0];
  v44 = vrecpeq_f32(v40);
  v45 = vceqzq_f32(v40);
  v46 = vmulq_f32(v44, vrecpsq_f32(v44, v40));
  v47 = vmulq_f32(v46, vrecpsq_f32(v46, v40));
  v48 = vmulq_f32(vmulq_f32(v42, v27), v47);
  v49 = vbicq_s8(vmulq_f32(v47, vmulq_f32(v34, v35)), v45);
  v50 = vbicq_s8(v48, v45);
  v51 = vbicq_s8(vmulq_f32(vmulq_f32(v41, v35), v47), v45);
  {
    v52 = *(int8x16_t*)(a2 + 32);
    __asm__ volatile("" ::"w"(v52));
  }
  v53 = vmulq_n_f32(vbicq_s8(vmulq_f32(v47, v39), v45),
                    (float)(LANES128(v4).n128_f32[0] * 0x1.0000000000000p+1f) +
                        -0x1.0000000000000p+0f);
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v45).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v54 = vaddq_f32(
      v51, vmlaq_laneq_f32(vmlaq_n_f32(v53, v49,
                                       (float)(0x1.0000000000000p+1f *
                                               LANES128(v4).n128_f32[1]) +
                                           -0x1.0000000000000p+0f),
                           v50, v4, 2));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v55 = vmulq_f32(vmulq_f32(*(float32x4_t*)a2, v45), v12);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v56 = vmulq_n_f32(v54, 0x1.0000000000000p+0f / LANES128(v54).n128_f32[3]);
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v56).n128_u32[3] = 0;
  *(int8x8_t*)&LANES128(v35).n128_i8[8] =
      vqtbl1_s8(v52, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v57 = vsubq_f32(v55, vmulq_f32(vmulq_f32(*(float32x4_t*)a2, v12), v35));
  LANES128(v57).n128_u64[0] = LANES128_OF(vpaddq_f32(v57, v57)).n128_u64[0];
  v58 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v57).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v57).n128_u64[0]), 1));
  v59 = vrecpeq_f32(v58);
  v60 = vmulq_f32(v59, vrecpsq_f32(v59, v58));
  v61 = vmulq_f32(v60, vrecpsq_f32(v60, v58));
  v62 = vzip1q_s32(*(int32x4_t*)a2, v52);
  v63 = vzip2q_s32(*(int32x4_t*)a2, v52);
  v64 = vzip1q_s32(v43, COERCE_AS(int32x4_t, 0));
  v65 = vzip2q_s32(v62, v64);
  v66 = vzip1q_s32(v63, vzip2q_s32(v43, COERCE_AS(int32x4_t, 0)));
  v67 = vzip1q_s32(v62, v64);
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v68).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v39).n128_i8[8] =
      vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v68).n128_i8[8] =
      vqtbl1_s8(v66, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v66).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v43).n128_u64[1] = LANES128(v27).n128_u64[0];
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v66).n128_i8[8] =
      vqtbl1_s8(v65, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v45).n128_i8[8] =
      vqtbl1_s8(v67, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v69 = vmulq_f32(v61, vmlsq_f32(vmulq_f32(v39, v43), v66, v68));
  v70 = vmulq_f32(v61, vmlsq_f32(vmulq_f32(v68, v45), v43, v10));
  v71 = vmulq_f32(v61, vmlsq_f32(vmulq_f32(v66, v10), v45, v39));
  v72 = vceqzq_f32(v58);
  return vaddq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(vbicq_s8(v69, v72), LANES128(v56).n128_f32[0]),
              vbicq_s8(v70, v72),
              COERCE_AS(float32x2_t, LANES128(v56).n128_u64[0]), 1),
          vbicq_s8(v71, v72), v56, 2),
      vbicq_s8(
          vmlsq_laneq_f32(
              vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v69),
                                         COERCE_FLOAT(*(_OWORD*)(a2 + 48))),
                             v70, *(float32x2_t*)(a2 + 48), 1),
              v71, *(float32x4_t*)(a2 + 48), 2),
          v72));
}

#pragma GCC visibility pop
