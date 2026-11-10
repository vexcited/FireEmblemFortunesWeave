#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool ViewVolumeCulling_Unknown4(float32x4_t* a1, float32x4_t* a2);
__int64 GameRoutine_5eaef0(_QWORD, _QWORD, float, float, float, float);
__int64 ViewVolumeCulling_Unknown2(__int64 a1, __int64 a2);

__int64 ViewVolumeCulling_Unknown2(__int64 a1, __int64 a2)
{
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  unsigned __int64 v32;
  int8x16_t v33;
  int8x16_t v34;
  int8x16_t v35;
  float32x4_t v36;
  int8x16_t v37;
  int8x16_t v38;
  __int64 result;
  _QWORD v40[8];

  v4 = (*(float (**)(__int64))(*(_QWORD*)a2 + 80LL))(a2);
  v6 = v5;
  v7 = (*(float (**)(__int64))(*(_QWORD*)a2 + 72LL))(a2);
  v8 = v4 / v6;
  v9 = (*(float (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2);
  v10 = (*(float (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2);
  *(long double*)&v11 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)a2 + 16LL))(a2);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v16 = vmulq_f32(vmulq_f32(v11, v13), v15);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v18 = vsubq_f32(v16, vmulq_f32(vmulq_f32(v11, v15), v17));
  LANES128(v18).n128_u64[0] = LANES128_OF(vpaddq_f32(v18, v18)).n128_u64[0];
  v19 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 1));
  v20 = vrecpeq_f32(v19);
  v21 = vmulq_f32(v20, vrecpsq_f32(v20, v19));
  v22 = vmulq_f32(v21, vrecpsq_f32(v21, v19));
  v23 = vzip1q_s32(v11, v14);
  v24 = vzip2q_s32(v11, v14);
  v25 = vzip1q_s32(v12, COERCE_AS(int32x4_t, 0));
  v26 = vzip2q_s32(v23, v25);
  v27 = vzip1q_s32(v24, vzip2q_s32(v12, COERCE_AS(int32x4_t, 0)));
  v28 = vzip1q_s32(v23, v25);
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v32 = LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] = v32;
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v33 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v29, v12), v27, v30));
  v34 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v30, v13), v12, v31));
  v35 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v27, v31), v13, v29));
  v37 = vmlsq_laneq_f32(
      vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v33), LANES128(v36).n128_f32[0]),
                     v34, COERCE_AS(float32x2_t, LANES128(v36).n128_u64[0]), 1),
      v35, v36, 2);
  v38 = vceqzq_f32(v19);
  *(int8x16_t*)v40 = vbicq_s8(v33, v38);
  *(int8x16_t*)&v40[2] = vbicq_s8(v34, v38);
  *(int8x16_t*)&v40[4] = vbicq_s8(v35, v38);
  *(int8x16_t*)&v40[6] = vbicq_s8(v37, v38);
  GameRoutine_5eaef0(a1 + 16, v40, v7, v8, v9, v10);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 48LL))(a2);
  *(_BYTE*)(a1 + 256) = result & 1;
  return result;
}

bool ViewVolumeCulling_Unknown4(float32x4_t* a1, float32x4_t* a2)
{
  __int64 v2;
  float32x4_t v3;
  float v4;
  int8x16_t v5;
  _BOOL8 result;
  int8x16_t v7;
  float* v8;
  __int64 v9;
  float32x4_t v10;
  float v11;
  int8x16_t v12;
  int8x16_t v13;
  int8x16_t v14;
  __int64 v15;
  float* v16;
  bool v18;
  int8x16_t v19;
  float v20;

  v2 = LANES128(a1[15]).n128_u32[0];
  if ((int)v2 < 1) {
    return true;
  }
  v3 = *a2;
  v4 = LANES128(a2[1]).n128_f32[0];
  if (LANES128(a1[16]).n128_u8[0] != 1) {
    v7 = vmulq_f32(v3, a1[3]);
    LANES128(v7).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
            .n64_u64[0];
    if ((float)(LANES64_OF(
                    vpadd_f32(COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                              COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
                    .n64_f32[0] +
                LANES128(a1[4]).n128_f32[0]) <= v4) {
      v8 = (float*)&a1[6];
      v9 = (unsigned int)(v2 - 1) + 1LL;
      do {
        result = --v9 == 0;
        if (v9 == 0) {
          break;
        }
        v10 = *(float32x4_t*)(v8 - 4);
        v11 = *v8;
        v8 += 8;
        v12 = vmulq_f32(v3, v10);
        LANES128(v12).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_u64[0];
      } while (
          (float)(LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                      .n64_f32[0] +
                  v11) <= v4);
      return result;
    }
    return false;
  }
  v5 = vmulq_f32(v3, a1[3]);
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[4]).n128_f32[0]) > v4) {
    return false;
  }
  if ((_DWORD)v2 == 1) {
    return true;
  }
  v13 = vmulq_f32(v3, a1[5]);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[6]).n128_f32[0]) > v4) {
    return false;
  }
  if ((_DWORD)v2 == 2) {
    return true;
  }
  v14 = vmulq_f32(v3, a1[7]);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  if ((float)(LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                  .n64_f32[0] +
              LANES128(a1[8]).n128_f32[0]) > v4) {
    return false;
  }
  if ((unsigned int)(v2 - 3) < 2) {
    return true;
  }
  v15 = v2 - 5;
  v16 = (float*)&a1[12];
  do {
    v18 = v15-- != 0;
    v19 = vmulq_f32(v3, *(float32x4_t*)(v16 - 4));
    LANES128(v19).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_u64[0];
    v20 = *v16;
    v16 += 8;
    LANES128(v19).n128_f32[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
            .n64_f32[0] +
        v20;
    result = LANES128(v19).n128_f32[0] <= v4;
  } while (LANES128(v19).n128_f32[0] <= v4 && v18);
  return result;
}

#pragma GCC visibility pop
