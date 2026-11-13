#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int128 GameData_1a837f0;
__int64 nn_g3d_5f09e0(__int64 result, __int64 a2);

__int64 nn_g3d_5f09e0(__int64 result, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  unsigned int v6;
  __int128 v7;
  unsigned __int32* v8;
  unsigned __int32 v9;
  __int128 v10;
  unsigned __int32 v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  unsigned __int64 v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16x2_t v21;
  int8x16x2_t v22;
  int8x16x2_t v23;

  if (*(_WORD*)(result + 100) != 0) {
    v2 = *(_QWORD*)(a2 + 24);
    v3 = 4LL * *(unsigned __int16*)(result + 100);
    v4 = 0;
    v5 = (float32x4_t*)(*(_QWORD*)(result + 72) + 16LL);
    do {
      if ((*(_DWORD*)(*(_QWORD*)(result + 88) + v4) & 0x80000000) == 0) {
        v6 = *(_DWORD*)(*(_QWORD*)(result + 88) + v4) & 0x7FFF;
        if (v6 != 0x7FFF) {
          *(_QWORD*)&v7 =
              *(unsigned __int64*)((char*)LANES128(v5[-1]).n128_u64 + 4);
          v8 = (unsigned __int32*)(v2 + 96LL * v6);
          v9 = *v8;
          *((_QWORD*)&v7 + 1) = LANES128(v5[-1]).n128_u32[3];
          *(_QWORD*)&v10 = LANES128(*(v5)).n128_u64[0];
          *((_QWORD*)&v10 + 1) = LANES128(*(v5)).n128_u32[2];
          v11 = LANES128(v5[-1]).n128_u32[0] >> 23;
          *((_OWORD*)v8 + 1) = v7;
          *v8 = v9 & 0xF07FFFFF | ((v11 & 0x1F) << 23);
          *((_OWORD*)v8 + 5) = v10;
          v21.val[1] = v5[1];
          LANES128(v21.val[1]).n128_u32[3] = 0;
          LANES128(v12).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(v21.val[1],
                                   COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                  .n64_u64[0];
          LANES128(v13).n128_u64[0] =
              LANES64_OF(vrev64_s32(COERCE_AS(
                             int32x2_t, LANES128(v21.val[1]).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v14).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(v21.val[1],
                                   COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
                  .n64_u64[0];
          v15 = LANES64_OF(vqtbl1_s8(v21.val[1],
                                     COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
                    .n64_u64[0];
          *(int8x8_t*)&LANES128(v12).n128_i8[8] =
              vqtbl1_s8(v21.val[1], COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
          LANES128(v13).n128_u64[1] = LANES128(v12).n128_u64[1];
          LANES128(v14).n128_u64[1] = v15;
          v16 = vmulq_f32(v12, v21.val[1]);
          LANES128(v21.val[1]).n128_u64[0] =
              LANES64_OF(vqtbl1_s8(v21.val[1],
                                   COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                  .n64_u64[0];
          v17 = vmulq_f32(v13, v13);
          v22.val[1] = vmulq_f32(v14, v14);
          v18 = vaddq_f32(v16, v16);
          LANES128(v21.val[1]).n128_u64[1] = v15;
          v19 = vmulq_laneq_f32(v21.val[1], v5[1], 3);
          v22.val[0] = vsubq_f32(COERCE_AS(float32x4_t, GameData_1a837f0),
                                 vaddq_f32(vaddq_f32(v22.val[1], v22.val[1]),
                                           vaddq_f32(v17, v17)));
          v20 = vaddq_f32(v19, v19);
          v23.val[0] = vaddq_f32(v18, v20);
          v23.val[1] = vsubq_f32(v18, v20);
          LANES128(v21.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v23, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
                  .n64_u64[0];
          LANES128(v22.val[1]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v23, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v22.val[1]).n128_i8[8] =
              vqtbl2_s8(v23, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
          *(int8x8_t*)&LANES128(v21.val[1]).n128_i8[8] =
              vqtbl2_s8(v23, COERCE_AS(int8x8_t, 0x706050413121110LL));
          v21.val[0] = v22.val[0];
          LANES128(v18).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v21, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v18).n128_i8[8] =
              vqtbl2_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
          LANES128(v23.val[0]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v21, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v23.val[0]).n128_i8[8] =
              vqtbl2_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
          LANES128(v21.val[0]).n128_u64[0] =
              LANES64_OF(
                  vqtbl2_s8(v22, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
                  .n64_u64[0];
          *(int8x8_t*)&LANES128(v21.val[0]).n128_i8[8] =
              vqtbl2_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
          *((float32x4_t*)v8 + 2) = v18;
          *((_OWORD*)v8 + 3) = COERCE_AS(_OWORD, v23.val[0]);
          *((_OWORD*)v8 + 4) = COERCE_AS(_OWORD, v21.val[0]);
        }
      }
      v4 += 4;
      v5 += 3;
    } while (v3 != v4);
  }
  return result;
}

#pragma GCC visibility pop
