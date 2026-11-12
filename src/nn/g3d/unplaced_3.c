#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_5dfff0(__int64 result, int, char);
__int64 GameRoutine_5e80f0(__int64 result, __int64);
extern __int128 GameData_1a837f0;
extern int* GameData_2136530;
float powf(float, float);
float32x4_t* GameRoutine_5f80f0(float32x4_t* result, float32x4_t*, float,
                                double, double, double, double, double);
int8x16_t* SkeletalAnimObj_5f7910(int8x16_t* result, unsigned int, float32x4_t,
                                  float);
__int64 nn_g3d_5e9ce0(__int64 a1, __int64 a2);
__int64 nn_g3d_5ea2c0(__int64 a1, __int64 a2);
void nn_g3d_5f3ac0(__int64 a1, __int64 a2, __int64 a3, int a4, float32x4_t a5);
void nn_g3d_5f3c30(__int64 a1, __int64 a2, float32x4_t* a3, int a4, float a5,
                   double a6, double a7, double a8, double a9, double a10);

__int64 nn_g3d_5e9ce0(__int64 a1, __int64 a2)
{
  int v4;
  bool v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)(a1 + 96) = a2;
  GameRoutine_5dfff0(a1, *(_DWORD*)(a2 + 72), (*(_WORD*)(a2 + 4) & 4) != 0);
  v4 = *(unsigned __int8*)(a2 + 82);
  *(_DWORD*)(a1 + 60) = v4;
  v5 = v4 == 0 || (signed __int32)*(_DWORD*)(a1 + 56) < v4;
  *(_DWORD*)(a1 + 64) = *GameData_2136530;
  if (!v5) {
    v6 = 0;
    v7 = 0;
    do {
      ++v7;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v6) = 2139095040;
      v6 += 12;
    } while (v7 < *(int*)(a1 + 60));
  }
  return GameRoutine_5e80f0(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72));
}

__int64 nn_g3d_5ea2c0(__int64 a1, __int64 a2)
{
  __int16 v2;
  __int64 result;
  int v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_WORD*)(a1 + 96);
  *(_QWORD*)(a1 + 104) = a2;
  *(_WORD*)(a1 + 96) = v2 & 0xFFFE;
  result =
      GameRoutine_5dfff0(a1, *(_DWORD*)(a2 + 64), (*(_WORD*)(a2 + 4) & 4) != 0);
  *(_WORD*)(a1 + 100) = *(_WORD*)(a2 + 74);
  v6 = *(unsigned __int16*)(a2 + 78);
  *(_DWORD*)(a1 + 60) = v6;
  *(_DWORD*)(a1 + 64) = *GameData_2136530;
  if (v6 != 0 && (signed __int32)*(_DWORD*)(a1 + 56) >= v6) {
    v7 = 0;
    v8 = 0;
    do {
      ++v8;
      *(_DWORD*)(*(_QWORD*)(a1 + 48) + v7) = 2139095040;
      v7 += 12;
    } while (v8 < *(int*)(a1 + 60));
  }
  return result;
}

void nn_g3d_5f3ac0(__int64 a1, __int64 a2, __int64 a3, int a4, float32x4_t a5)
{

#pragma clang fp contract(off)
  float v5;
  float32x4_t* v8;
  float32x4_t v9;
  unsigned __int32 v10;
  float32x4_t v11;
  int v12;
  float v13;
  float v14;
  float v15;
  float32x4_t v16;
  unsigned __int32 v17;
  float32x4_t v18;
  float32x4_t v19;
  float v20;
  float v21;
  float v22;

  v5 = LANES128(a5).n128_f32[0];
  PSEUDO_LOW_LANE128(a5, n128_u64, *(_QWORD*)(a3 + 32));
  v8 = (float32x4_t*)(a2 + 80LL * a4);
  v22 = v5;
  SkeletalAnimObj_5f7910(v8, *(_DWORD*)(a3 + 40), a5, v5);
  if ((*(_BYTE*)(a1 + 12) & 1) != 0) {
    v21 = powf(*(float*)(a3 + 4), v22);
    v20 = powf(*(float*)(a3 + 8), v22);
    v14 = powf(*(float*)(a3 + 12), v22);
    v15 = LANES128(v8[4]).n128_f32[1];
    if (fabsf(v15) >= 0x1.0624de0000000p-10f) {
      v16 = *v8;
    }
    else {
      v16 = COERCE_AS(float32x4_t, GameData_1a837f0);
    }
    v17 = LANES128(v8[4]).n128_u32[0];
    LANES128(v18).n128_u64[0] = __PAIR64__(LODWORD(v20), LODWORD(v21));
    LANES128(v18).n128_u64[1] = LODWORD(v14);
    *v8 = vmulq_f32(v18, v16);
    LANES128(v19).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v19).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v8[1] = vaddq_f32(v8[1], vmulq_n_f32(v19, v22));
    v13 = v22 + v15;
    v12 = v17 | ~*(_DWORD*)a3;
  }
  else {
    LANES128(v9).n128_u64[0] = *(_QWORD*)(a3 + 4);
    v10 = LANES128(v8[4]).n128_u32[0];
    LANES128(v9).n128_u64[1] = *(unsigned int*)(a3 + 12);
    v11 = v8[1];
    *v8 = vaddq_f32(*v8, vmulq_n_f32(v9, v22));
    LANES128(v9).n128_u64[0] = *(_QWORD*)(a3 + 16);
    LANES128(v9).n128_u64[1] = *(unsigned int*)(a3 + 24);
    v8[1] = vaddq_f32(v11, vmulq_n_f32(v9, v22));
    v12 = v10 | ~*(_DWORD*)a3;
    v13 = v22 + LANES128(v8[4]).n128_f32[1];
  }
  LANES128(v8[4]).n128_u32[0] = v12;
  LANES128(v8[4]).n128_f32[1] = v13;
}

void nn_g3d_5f3c30(__int64 a1, __int64 a2, float32x4_t* a3, int a4, float a5,
                   double a6, double a7, double a8, double a9, double a10)
{

#pragma clang fp contract(off)
  float32x4_t* v12;
  float32x4_t v13;
  unsigned __int32 v14;
  float32x4_t v15;
  int v16;
  float v17;
  float v18;
  float v19;
  float32x4_t v20;
  unsigned __int32 v21;
  float32x4_t v22;
  float32x4_t v23;
  float v24;
  float v25;

  v12 = (float32x4_t*)(a2 + 80LL * a4);
  GameRoutine_5f80f0(v12, a3, a5, a6, a7, a8, a9, a10);
  if ((*(_BYTE*)(a1 + 12) & 1) != 0) {
    v25 = powf(LANES128(*(a3)).n128_f32[1], a5);
    v24 = powf(LANES128(*(a3)).n128_f32[2], a5);
    v18 = powf(LANES128(*(a3)).n128_f32[3], a5);
    v19 = LANES128(v12[4]).n128_f32[1];
    if (fabsf(v19) >= 0x1.0624de0000000p-10f) {
      v20 = *v12;
    }
    else {
      v20 = COERCE_AS(float32x4_t, GameData_1a837f0);
    }
    v21 = LANES128(v12[4]).n128_u32[0];
    LANES128(v22).n128_u64[0] = __PAIR64__(LODWORD(v24), LODWORD(v25));
    LANES128(v22).n128_u64[1] = LODWORD(v18);
    *v12 = vmulq_f32(v22, v20);
    LANES128(v23).n128_u64[0] = LANES128(a3[1]).n128_u64[0];
    LANES128(v23).n128_u64[1] = LANES128(a3[1]).n128_u32[2];
    v12[1] = vaddq_f32(v12[1], vmulq_n_f32(v23, a5));
    v17 = a5 + v19;
    v16 = v21 | ~LANES128(*(a3)).n128_u32[0];
  }
  else {
    LANES128(v13).n128_u64[0] =
        *(unsigned __int64*)((char*)LANES128(*(a3)).n128_u64 + 4);
    v14 = LANES128(v12[4]).n128_u32[0];
    LANES128(v13).n128_u64[1] = LANES128(*(a3)).n128_u32[3];
    v15 = v12[1];
    *v12 = vaddq_f32(*v12, vmulq_n_f32(v13, a5));
    LANES128(v13).n128_u64[0] = LANES128(a3[1]).n128_u64[0];
    LANES128(v13).n128_u64[1] = LANES128(a3[1]).n128_u32[2];
    v12[1] = vaddq_f32(v15, vmulq_n_f32(v13, a5));
    v16 = v14 | ~LANES128(*(a3)).n128_u32[0];
    v17 = a5 + LANES128(v12[4]).n128_f32[1];
  }
  LANES128(v12[4]).n128_u32[0] = v16;
  LANES128(v12[4]).n128_f32[1] = v17;
}

#pragma GCC visibility pop
