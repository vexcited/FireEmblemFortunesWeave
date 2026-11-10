#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a837f0;
int8x8_t Mtx43_621b60(float32x4_t* a1, int32x2_t* a2);
__attribute__((swiftcall)) void
math_Mtx43_MakeRotation_c86d30(__attribute__((swift_indirect_result)) void* x8_,
                               float32x4_t* a1);

int8x8_t Mtx43_621b60(float32x4_t* a1, int32x2_t* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  float32x4_t v3;
  float32x4_t v4;
  unsigned __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  int8x8_t result;
  int8x16x2_t v13;
  int8x16x2_t v14;
  int8x16x2_t v15;

  v14.val[1] = *(int8x16_t*)LANES64(*(a2)).n64_u64;
  LANES128(v14.val[1]).n128_u32[3] = 0;
  v2 = LANES64_OF(
           vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
           .n64_u64[0];
  LANES128(v3).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES64(*(a2)).n64_u64[0])))
          .n64_u64[0];
  LANES128(v4).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v5 = LANES64_OF(
           vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
           .n64_u64[0];
  LANES128(v3).n128_u64[1] = v2;
  LANES128(v4).n128_u64[1] = v5;
  v6 = vmulq_f32(v3, v3);
  v13.val[1] = vmulq_f32(v4, v4);
  v13.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v13.val[1], v13.val[1]), vaddq_f32(v6, v6)));
  LANES128(v7).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v7).n128_u64[1] = v2;
  v8 = vmulq_f32(v7, v14.val[1]);
  v9 = vaddq_f32(v8, v8);
  LANES128(v14.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v14.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v14.val[1]).n128_u64[1] = v5;
  v10 = vmulq_laneq_f32(v14.val[1], *(float32x4_t*)LANES64(*(a2)).n64_u64, 3);
  v11 = vaddq_f32(v10, v10);
  v15.val[0] = vaddq_f32(v9, v11);
  v15.val[1] = vsubq_f32(v9, v11);
  LANES128(v14.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v13.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14.val[1]).n128_i8[8] =
      vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v13.val[1]).n128_i8[8] =
      vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v14.val[0] = v13.val[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v15.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15.val[0]).n128_i8[8] =
      vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v14.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v13, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  *a1 = v9;
  a1[1] = v15.val[0];
  LANES64(result).n64_u64[0] =
      LANES64_OF(vqtbl2_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14.val[0]).n128_i8[8] = result;
  a1[2] = v14.val[0];
  return result;
}

__attribute__((swiftcall)) void

math_Mtx43_MakeRotation_c86d30(__attribute__((swift_indirect_result)) void* x8_,
                               float32x4_t* a1)
{
  float32x4_t* a2 = (float32x4_t*)(unsigned __int64)x8_;
  float32x4_t v2;
  unsigned __int64 v3;
  float32x4_t v4;
  float32x4_t v5;
  unsigned __int64 v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x8_t result;
  int8x16x2_t v14;
  int8x16x2_t v15;
  int8x16x2_t v16;

  v2 = *a1;
  LANES128(a2[3]).n128_u64[0] = 0;
  LANES128(a2[3]).n128_u64[1] = 0;
  v15.val[1] = v2;
  LANES128(v15.val[1]).n128_u32[3] = 0;
  v3 = LANES64_OF(
           vqtbl1_s8(v15.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
           .n64_u64[0];
  LANES128(v4).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v2).n128_u64[0])))
          .n64_u64[0];
  LANES128(v5).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v15.val[1], COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  v6 = LANES64_OF(
           vqtbl1_s8(v15.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
           .n64_u64[0];
  LANES128(v4).n128_u64[1] = v3;
  LANES128(v5).n128_u64[1] = v6;
  v7 = vmulq_f32(v4, v4);
  v14.val[1] = vmulq_f32(v5, v5);
  v14.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v14.val[1], v14.val[1]), vaddq_f32(v7, v7)));
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v15.val[1], COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = v3;
  v9 = vmulq_f32(v8, v15.val[1]);
  v10 = vaddq_f32(v9, v9);
  LANES128(v15.val[1]).n128_u64[0] =
      LANES64_OF(
          vqtbl1_s8(v15.val[1], COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15.val[1]).n128_u64[1] = v6;
  v11 = vmulq_laneq_f32(v15.val[1], v2, 3);
  v12 = vaddq_f32(v11, v11);
  v16.val[0] = vaddq_f32(v10, v12);
  v16.val[1] = vsubq_f32(v10, v12);
  LANES128(v15.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v14.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15.val[1]).n128_i8[8] =
      vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v14.val[1]).n128_i8[8] =
      vqtbl2_s8(v16, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v15.val[0] = v14.val[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v16.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16.val[0]).n128_i8[8] =
      vqtbl2_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v15.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  *a2 = v10;
  a2[1] = v16.val[0];
  LANES64(result).n64_u64[0] =
      LANES64_OF(vqtbl2_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15.val[0]).n128_i8[8] = result;
  a2[2] = v15.val[0];
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
