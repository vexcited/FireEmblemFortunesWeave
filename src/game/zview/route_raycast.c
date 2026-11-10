#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* StateMoveTo_d42860(_QWORD* result, __int64*);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__int64 game_zview_d17160(float, __int64, __int64, float32x4_t*, float32x4_t*);
extern __int128 GameData_1a82d40;
extern __int64* GameData_212ebd0[3];
__int64 RouteRaycast_Unknown3(__int64 a1, float32x4_t* a2, _QWORD* a3);

__int64 RouteRaycast_Unknown3(__int64 a1, float32x4_t* a2, _QWORD* a3)
{
  unsigned int v5;
  float32x4_t v6;
  int8x16_t v7;
  int v8;
  float v9;
  int v10;
  float32x4_t v12;
  float32x4_t v13;
  _BYTE v14[96];

  if ((game_zview_d17160(LANES128(a2[4]).n128_f32[2], *GameData_212ebd0[0],
                         (__int64)&a2[2], a2, a2 + 1) &
       1) != 0) {
    v5 = 0;
    v6 = vsubq_f32(*a2, a2[1]);
    v7 = vmulq_f32(v6, v6);
    LANES128(v7).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v7, v7, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0])))
            .n64_u64[0];
    v8 = (int)LANES64_OF(vsqrt_f32(vpadd_f32(
                             COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v7).n128_u64[0]))))
             .n64_f32[0];
    if (v8 <= 4) {
      v8 = 4;
    }
    if (v8 >= 10) {
      v8 = 10;
    }
    v9 = (float)(unsigned int)v8;
    v10 = v8 + 1;
    while (1) {
      v12 = vmlaq_n_f32(*a2, vsubq_f32(a2[1], *a2), (float)v5 / v9);
      v13 = vaddq_f32(v12, COERCE_AS(float32x4_t, GameData_1a82d40));
      LANES128(v12).n128_u32[1] = -1027080192;
      collision_670c60((void*)((__int64)v14), &v13, &v12, 3);
      if ((v14[80] & 1) == 0) {
        break;
      }
      if (v10 == ++v5) {
        StateMoveTo_d42860(a3, (__int64*)a2);
        StateMoveTo_d42860(a3, (__int64*)&a2[1]);
        return 1;
      }
    }
  }
  return 0;
}

#pragma GCC visibility pop
