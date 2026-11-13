#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

void GameRoutine_5e7fc0(__int64, __int64, long double);
void GameRoutine_5e8060(__int64, __int64, __int64, long double);
float CameraAnimObj_Unknown3(__int64 a1, long double a2);
extern _UNKNOWN* GameData_2135448;
extern _UNKNOWN GameData_1b328fc;
extern __int64 (**ModelAnimObj_Destructor_ptr_ptr)();
float GameRoutine_5e52c0(__int64, long double);
float32x4_t GameRoutine_5e5500(__int64, long double);
int8x16_t GameRoutine_5e57f0(int8x16_t*, int, float32x4_t, long double, float);
float CameraAnimObj_5e4270(__int64 a1, __int64 a2, float a3);
float CameraAnimObj_5e4490(__int64 a1, float a2);
float CameraAnimObj_5e44e0(__int64 a1, float a2);
long double CameraAnimObj_5e4890(__int64 a1, __int64 a2, float a3);
int8x16_t CameraAnimObj_5e49a0(__int64 a1, __int64 a2, float a3);
float CameraAnimObj_5e5dc0(__int64 a1);
__int64 CameraAnimObj_5e5e50(__int64 result);
__int64 CameraAnimObj_5e6430(__int64 a1, __int64 a2);
__int64 CameraAnimObj_5e9560(__int64 result, __int64 a2, __int64 a3);
void CameraAnimObj_5e9680(__int64 a1, __int64 a2, long double a3);
void CameraAnimObj_5e9780(__int64 a1, __int64 a2, __int64 a3, long double a4);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern __int128 GameData_1a82940;
extern __int128 GameData_1a83510;
int8x16_t CameraAnimObj_5e57f0(int8x16_t* a1, int a2, long double a3,
                               long double a4, float a5);
__int64 CameraAnimObj_5e64c0(int32x4_t* a1, __int64 a2, double a3, double a4,
                             int32x4_t a5, double a6, double a7,
                             float32x4_t a8);

float CameraAnimObj_5e4270(__int64 a1, __int64 a2, float a3)
{
  float v4;
  float v7;
  float v8;
  float v9;
  unsigned int v10;
  float v11;
  unsigned int v12;
  unsigned int v13;

  v4 = *(float*)a2;
  if (a3 < *(float*)a2 || (v7 = *(float*)(a2 + 4)) <= a3) {
    v8 = *(float*)(a1 + 24);
    v9 = *(float*)(a1 + 28) - v8;
    *(float*)&v10 = a3 - v8;
    v11 = *(float*)&v10 * (float)(0x1.0000000000000p+0f / v9);
    LOWORD(v10) = *(_WORD*)(a1 + 18);
    v12 = (int)(float)(v11 * (float)v10);
    *(_DWORD*)(a2 + 8) = v12;
    v13 = *(unsigned __int16*)(a1 + 18);
    if (v13 <= v12) {
      *(_DWORD*)(a2 + 8) = v13 - 1;
    }
    ((void (*)(__int64, __int64, float))
         ModelAnimObj_Destructor_ptr_ptr[2 * (*(_WORD*)(a1 + 16) & 3)])(a1, a2,
                                                                        a3);
    v4 = *(float*)a2;
    v7 = *(float*)(a2 + 4);
  }
  return (float)*(__int16*)(*(_QWORD*)(a1 + 8) + 4LL * *(int*)(a2 + 8)) +
         (float)((float)*(__int16*)(*(_QWORD*)(a1 + 8) + 4LL * *(int*)(a2 + 8) +
                                    2) *
                 (float)((float)(a3 - v4) *
                         (float)(0x1.0000000000000p+0f / (float)(v7 - v4))));
}

float CameraAnimObj_5e4490(__int64 a1, float a2)
{
  __int16* v2;

  v2 = (__int16*)(*(_QWORD*)(a1 + 8) +
                  2LL * ((int)a2 - (int)*(float*)(a1 + 24)));
  return (float)(PSEUDO_UNFUSED(
             (float)(0x1.0000000000000p+0f - (float)(a2 - (float)(int)a2)) *
             (float)*v2)) +
         (float)((float)v2[1] * (float)(a2 - (float)(int)a2));
}

float CameraAnimObj_5e44e0(__int64 a1, float a2)
{
  char* v2;

  v2 = (char*)(*(_QWORD*)(a1 + 8) + (int)a2 - (int)*(float*)(a1 + 24));
  return (float)(PSEUDO_UNFUSED(
             (float)(0x1.0000000000000p+0f - (float)(a2 - (float)(int)a2)) *
             (float)*v2)) +
         (float)((float)v2[1] * (float)(a2 - (float)(int)a2));
}

long double CameraAnimObj_5e4890(__int64 a1, __int64 a2, float a3)
{

#pragma clang fp contract(off)
  float v6;
  float v7;
  unsigned int v8;
  float v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  int8x16_t* v14;
  float v15;
  float v16;
  int8x16_t v18;

  if (a3 < *(float*)a2 || *(float*)(a2 + 4) <= a3) {
    v6 = *(float*)(a1 + 24);
    v7 = *(float*)(a1 + 28) - v6;
    *(float*)&v8 = a3 - v6;
    v9 = *(float*)&v8 * (float)(0x1.0000000000000p+0f / v7);
    LOWORD(v8) = *(_WORD*)(a1 + 18);
    v10 = (int)(float)(v9 * (float)v8);
    *(_DWORD*)(a2 + 8) = v10;
    v11 = *(unsigned __int16*)(a1 + 18);
    if (v11 <= v10) {
      *(_DWORD*)(a2 + 8) = v11 - 1;
    }
    ((void (*)(__int64, __int64, float))
         ModelAnimObj_Destructor_ptr_ptr[2 * (*(_WORD*)(a1 + 16) & 3)])(a1, a2,
                                                                        a3);
  }
  v12 = *(_QWORD*)(a1 + 8);
  v13 = *(int*)(a2 + 8);
  if ((_DWORD)v13 == *(unsigned __int16*)(a1 + 18) - 1) {
    v14 = (int8x16_t*)(v12 + 16 * v13);
  }
  else {
    v16 = *(float*)a2;
    v15 = *(float*)(a2 + 4);
    v14 = &v18;
    GameRoutine_5e57f0(&v18, 0, *(float32x4_t*)(v12 + 16 * v13),
                       *(long double*)(v12 + 16 * v13 + 16),
                       (float)(a3 - v16) *
                           (float)(0x1.0000000000000p+0f / (float)(v15 - v16)));
  }
  return *(long double*)v14;
}

int8x16_t CameraAnimObj_5e49a0(__int64 a1, __int64 a2, float a3)
{
  float v6;
  float v7;
  unsigned int v8;
  float v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  float32x4_t* v15;
  int8x16_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;

  if (a3 < *(float*)a2 || *(float*)(a2 + 4) <= a3) {
    v6 = *(float*)(a1 + 24);
    v7 = *(float*)(a1 + 28) - v6;
    *(float*)&v8 = a3 - v6;
    v9 = *(float*)&v8 * (float)(0x1.0000000000000p+0f / v7);
    LOWORD(v8) = *(_WORD*)(a1 + 18);
    v10 = (int)(float)(v9 * (float)v8);
    *(_DWORD*)(a2 + 8) = v10;
    v11 = *(unsigned __int16*)(a1 + 18);
    if (v11 <= v10) {
      *(_DWORD*)(a2 + 8) = v11 - 1;
    }
    ((void (*)(__int64, __int64, float))
         ModelAnimObj_Destructor_ptr_ptr[2 * (*(_WORD*)(a1 + 16) & 3)])(a1, a2,
                                                                        a3);
  }
  v12 = *(_QWORD*)(a1 + 8);
  v13 = *(int*)(a2 + 8);
  if ((_DWORD)v13 == *(unsigned __int16*)(a1 + 18) - 1) {
    return *(int8x16_t*)(v12 + 16 * v13);
  }
  else {
    v15 = (float32x4_t*)(v12 + 16 * v13);
    v16 = v15[1];
    v17 = vmulq_f32(*v15, v16);
    v18 = vextq_s8(v17, v17, 8u);
    LANES128(v17).n128_u64[0] =
        LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
            .n64_u64[0];
    PSEUDO_LOW_LANE128(v18, n128_u64, 0);
    LANES128(v17).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v17).n128_u64[0])))
            .n64_u64[0];
    v19 = vmlaq_n_f32(
        *v15,
        vsubq_f32(
            vbslq_s8(
                vdupq_lane_s32(
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vcgtq_f32(v18, v17)).n128_u64[0]),
                    0),
                vsubq_f32(COERCE_AS(float32x4_t, 0), v16), v16),
            *v15),
        (float)(a3 - *(float*)a2) *
            (float)(0x1.0000000000000p+0f /
                    (float)(*(float*)(a2 + 4) - *(float*)a2)));
    v20 = vmulq_f32(v19, v19);
    LANES128(v20).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
            .n64_u64[0];
    LANES128(v20).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
            .n64_u64[0];
    LANES128(v20).n128_u64[1] = LANES128(v20).n128_u64[0];
    v21 = vrsqrteq_f32(v20);
    v22 = vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v20, v21)));
    return vbicq_s8(
        vmulq_f32(v19, vmulq_f32(v22, vrsqrtsq_f32(v22, vmulq_f32(v20, v22)))),
        vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v20));
  }
}

int8x16_t CameraAnimObj_5e57f0(int8x16_t* a1, int a2, long double a3,
                               long double a4, float a5)
{
  int8x16_t v6;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  int8x16_t result;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
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

  v6 = vmulq_f32(*(float32x4_t*)&a3, *(float32x4_t*)&a4);
  LANES128(v6).n128_u64[0] = LANES64_OF(
    vadd_f32(
      COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
      COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
                               .n64_u64[0];
  v8 = LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
         .n64_f32[0];
  if (v8 >= 0x0.0p+0f) {
    v9 = v8;
  }
  else {
    v9 = -v8;
  }
  if (v8 >= 0x0.0p+0f) {
    v10 = 0x1.0000000000000p+0f;
  }
  else {
    v10 = -0x1.0000000000000p+0f;
  }
  if (v9 > 0x1.fffeb00000000p-1f) {
    v11 = a5 * v10;
    v12 = 0x1.0000000000000p+0f - a5;
    LANES128(v13).n128_f32[0] =
      (float)(PSEUDO_UNFUSED((float)(a5 * v10) * *(float*)&a4)) +
      (float)((float)(0x1.0000000000000p+0f - a5) * *(float*)&a3);
    LANES128(v13).n128_f32[1] = vmuls_lane_f32(v11, *(float32x2_t*)&a4, 1) +
      (float)(v12 * *((float*)&a3 + 1));
    LANES128(v13).n128_f32[2] = vmuls_lane_f32(v11, *(float32x4_t*)&a4, 2) +
      (float)(v12 * *((float*)&a3 + 2));
    LANES128(v13).n128_f32[3] = vmuls_lane_f32(v11, *(float32x4_t*)&a4, 3) +
      (float)(v12 * *((float*)&a3 + 3));
    v14 = vmulq_f32(v13, v13);
    LANES128(v14).n128_u64[0] = LANES64_OF(
      vadd_f32(
        COERCE_AS(float32x2_t, LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
        COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
                                  .n64_u64[0];
    LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
        .n64_u64[0];
    LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
    v15 = vrsqrteq_f32(v14);
    v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
    result = vbicq_s8(
      vmulq_f32(v13, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
      vcgtq_f32(vdupq_n_s32(0x3727C5ACu), v14));
    *a1 = result;
    return result;
  }
  v18 = sqrtf(0x1.0000000000000p+0f - (float)(v9 * v9));
  if (v9 >= 0x0.0p+0f) {
    v22 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
    v23 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
    v24 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
    v25 = v9 / v18;
    v26 = v18 / v9;
    v27 = v26 *
      (float)((float)((float)((float)((float)(v24 +
                                        (float)((float)((float)((float)(v23 +
                                                                  (float)((float)((float)((float)(v22 +
                                                                                            (float)((float)((float)(*(float*)
                                                                                                                      GameData_212c2f0 *
                                                                                                              (float)(v26 *
                                                                                                                v26)) -
                                                                                                      *((float*)
                                                                                                          GameData_212c2f0 +
                                                                                                        1)) *
                                                                                              (float)(v26 *
                                                                                                v26))) *
                                                                                    (float)(v26 *
                                                                                      v26)) -
                                                                            *(float*)((char*)((
                                                                                        _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                GameData_212c2f0 +
                                                                              4)) *
                                                                    (float)(v26 *
                                                                      v26))) *
                                                          (float)(v26 * v26)) -
                                                  *(float*)((char*)((
                                                              __int128*)0x10LL) +
                                                    (_QWORD)GameData_212c2f0 +
                                                    4)) *
                                          (float)(v26 * v26))) *
                                (float)(v26 * v26)) -
                        *(float*)((char*)((__int128*)0x10LL) +
                          (_QWORD)GameData_212c2f0 + 12)) *
                (float)(v26 * v26)) +
        0x1.0000000000000p+0f);
    v28 = 0x1.921fb60000000p+0f -
      (float)(PSEUDO_UNFUSED(v25 *
        (float)((float)((float)((float)((float)(v24 +
                                          (float)((float)((float)((float)(v23 +
                                                                    (float)((float)((float)((float)(v22 +
                                                                                              (float)((float)((float)(*(float*)
                                                                                                                        GameData_212c2f0 *
                                                                                                                (float)(v25 *
                                                                                                                  v25)) -
                                                                                                        *((float*)
                                                                                                            GameData_212c2f0 +
                                                                                                          1)) *
                                                                                                (float)(v25 *
                                                                                                  v25))) *
                                                                                      (float)(v25 *
                                                                                        v25)) -
                                                                              *(float*)((char*)((
                                                                                          _UNKNOWN**)0x8LL) +
                                                                                (_QWORD)
                                                                                  GameData_212c2f0 +
                                                                                4)) *
                                                                      (float)(v25 *
                                                                        v25))) *
                                                            (float)(v25 *
                                                              v25)) -
                                                    *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      4)) *
                                            (float)(v25 * v25))) *
                                  (float)(v25 * v25)) -
                          *(float*)((char*)((__int128*)0x10LL) +
                            (_QWORD)GameData_212c2f0 + 12)) *
                  (float)(v25 * v25)) +
          0x1.0000000000000p+0f)));
    if (v9 > 0x1.6a09e60000000p-1f) {
      v20 = v27;
    }
    else {
      v20 = v28;
    }
  }
  else if (v9 >= -0x1.6a09e60000000p-1f) {
    v21 = (float)-v9 / v18;
    v20 =
      (float)(PSEUDO_UNFUSED(v21 *
        (float)((float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c2f0 + 12) -
                          (float)((float)(*(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 8) +
                                    (float)((float)-(
                                              float)(*(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                       (_QWORD)
                                                         GameData_212c2f0 +
                                                       4) -
                                              (float)((float)(*(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                (_QWORD)
                                                                  GameData_212c2f0) +
                                                        (float)((float)-(
                                                                  float)(*(float*)((char*)((
                                                                                     _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                             GameData_212c2f0 +
                                                                           4) -
                                                                  (float)((float)(*(float*)((char*)((
                                                                                              _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                      GameData_212c2f0) +
                                                                            (float)((float)-(
                                                                                      float)(*((float*)
                                                                                                 GameData_212c2f0 +
                                                                                               1) -
                                                                                      (float)(*(float*)
                                                                                                GameData_212c2f0 *
                                                                                        (float)(v21 *
                                                                                          v21))) *
                                                                              (float)(v21 *
                                                                                v21))) *
                                                                    (float)(v21 *
                                                                      v21))) *
                                                          (float)(v21 * v21))) *
                                                (float)(v21 * v21))) *
                                      (float)(v21 * v21))) *
                            (float)(v21 * v21))) *
                  (float)(v21 * v21)) +
          0x1.0000000000000p+0f))) +
      0x1.921fb60000000p+0f;
  }
  else {
    v19 = (float)-v18 / v9;
    v20 = 0x1.921fb60000000p+1f -
      (float)(PSEUDO_UNFUSED(v19 *
        (float)((float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c2f0 + 12) -
                          (float)((float)(*(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c2f0 + 8) +
                                    (float)((float)-(
                                              float)(*(float*)((char*)((
                                                                 __int128*)0x10LL) +
                                                       (_QWORD)
                                                         GameData_212c2f0 +
                                                       4) -
                                              (float)((float)(*(float*)((char*)((
                                                                          __int128*)0x10LL) +
                                                                (_QWORD)
                                                                  GameData_212c2f0) +
                                                        (float)((float)-(
                                                                  float)(*(float*)((char*)((
                                                                                     _UNKNOWN**)0x8LL) +
                                                                           (_QWORD)
                                                                             GameData_212c2f0 +
                                                                           4) -
                                                                  (float)((float)(*(float*)((char*)((
                                                                                              _UNKNOWN**)0x8LL) +
                                                                                    (_QWORD)
                                                                                      GameData_212c2f0) +
                                                                            (float)((float)-(
                                                                                      float)(*((float*)
                                                                                                 GameData_212c2f0 +
                                                                                               1) -
                                                                                      (float)(*(float*)
                                                                                                GameData_212c2f0 *
                                                                                        (float)(v19 *
                                                                                          v19))) *
                                                                              (float)(v19 *
                                                                                v19))) *
                                                                    (float)(v19 *
                                                                      v19))) *
                                                          (float)(v19 * v19))) *
                                                (float)(v19 * v19))) *
                                      (float)(v19 * v19))) *
                            (float)(v19 * v19))) *
                  (float)(v19 * v19)) +
          0x1.0000000000000p+0f)));
  }
  v29 =
    v20 + (float)(roundf(v20 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  v30 = -0x1.921fb60000000p+1f - v29;
  if (v29 >= -0x1.921fb60000000p+0f) {
    v30 = v29;
  }
  if (v29 > 0x1.921fb60000000p+0f) {
    v31 = 0x1.921fb60000000p+1f - v29;
  }
  else {
    v31 = v30;
  }
  v32 = *((float*)GameData_212c190 + 1);
  v33 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v34 = -*(float*)GameData_212c190;
  v36 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v35 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v37 = -v33;
  v38 = v31 *
    (float)((float)((float)-(float)(v33 -
                      (float)((float)(v35 +
                                (float)((float)-(float)(v36 -
                                          (float)((float)(v32 -
                                                    (float)(*(float*)
                                                              GameData_212c190 *
                                                      (float)(v31 * v31))) *
                                            (float)(v31 * v31))) *
                                  (float)(v31 * v31))) *
                        (float)(v31 * v31))) *
              (float)(v31 * v31)) +
      0x1.0000000000000p+0f);
  if (a2 == 0) {
    v45 = 0x1.0000000000000p+0f - a5;
    v46 = a5 * v20;
    v47 = (float)(PSEUDO_UNFUSED(v45 * v20)) +
      (float)(roundf((float)(v45 * v20) * 0x1.45f3060000000p-3f) *
        -0x1.921fb60000000p+2f);
    v48 = -0x1.921fb60000000p+1f - v47;
    if (v47 >= -0x1.921fb60000000p+0f) {
      v48 = v47;
    }
    if (v47 > 0x1.921fb60000000p+0f) {
      v49 = 0x1.921fb60000000p+1f - v47;
    }
    else {
      v49 = v48;
    }
    v43 = v46 +
      (float)(roundf(v46 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v43 <= 0x1.921fb60000000p+0f) {
      if (v43 >= -0x1.921fb60000000p+0f) {
      LABEL_43:
        v51 = v49 *
          (float)((float)((float)((float)((float)(v35 +
                                            (float)((float)((float)((float)(v32 +
                                                                      (float)(v34 *
                                                                        (float)(v49 *
                                                                          v49))) *
                                                              (float)(v49 *
                                                                v49)) -
                                                      v36) *
                                              (float)(v49 * v49))) *
                                    (float)(v49 * v49)) -
                            v33) *
                    (float)(v49 * v49)) +
            0x1.0000000000000p+0f);
        goto LABEL_44;
      }
      v50 = -0x1.921fb60000000p+1f;
    }
    else {
      v50 = 0x1.921fb60000000p+1f;
    }
    v43 = v50 - v43;
    goto LABEL_43;
  }
  v39 = a5 * (float)(v20 + -0x1.921fb60000000p+1f);
  v40 = (float)(v20 - v39) +
    (float)(roundf((float)(v20 - v39) * 0x1.45f3060000000p-3f) *
      -0x1.921fb60000000p+2f);
  v41 = -0x1.921fb60000000p+1f - v40;
  if (v40 >= -0x1.921fb60000000p+0f) {
    v41 = v40;
  }
  if (v40 > 0x1.921fb60000000p+0f) {
    v42 = 0x1.921fb60000000p+1f - v40;
  }
  else {
    v42 = v41;
  }
  v43 =
    v39 + (float)(roundf(v39 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
  if (v43 > 0x1.921fb60000000p+0f) {
    v44 = 0x1.921fb60000000p+1f;
  LABEL_38:
    v43 = v44 - v43;
    goto LABEL_39;
  }
  if (v43 < -0x1.921fb60000000p+0f) {
    v44 = -0x1.921fb60000000p+1f;
    goto LABEL_38;
  }
LABEL_39:
  v51 = v42 *
    (float)((float)((float)(v37 +
                      (float)((float)(v35 +
                                (float)((float)((float)((float)(v32 +
                                                          (float)(v34 *
                                                            (float)(v42 *
                                                              v42))) *
                                                  (float)(v42 * v42)) -
                                          v36) *
                                  (float)(v42 * v42))) *
                        (float)(v42 * v42))) *
              (float)(v42 * v42)) +
      0x1.0000000000000p+0f);
LABEL_44:
  v52 = v10 *
    (float)((float)(v43 *
              (float)((float)((float)(v37 +
                                (float)((float)(v35 +
                                          (float)((float)((float)((float)(v32 +
                                                                    (float)(v34 *
                                                                      (float)(v43 *
                                                                        v43))) *
                                                            (float)(v43 *
                                                              v43)) -
                                                    v36) *
                                            (float)(v43 * v43))) *
                                  (float)(v43 * v43))) *
                        (float)(v43 * v43)) +
                0x1.0000000000000p+0f)) /
      v38);
  LANES128(result).n128_f32[0] = (float)(PSEUDO_UNFUSED(v52 * *(float*)&a4)) +
    (float)((float)(v51 / v38) * *(float*)&a3);
  LANES128(result).n128_f32[1] = vmuls_lane_f32(v52, *(float32x2_t*)&a4, 1) +
    (float)((float)(v51 / v38) * *((float*)&a3 + 1));
  LANES128(result).n128_u64[1] =
    __PAIR64__(vmuls_lane_f32(v52, *(float32x4_t*)&a4, 3) +
        (float)((float)(v51 / v38) * *((float*)&a3 + 3)),
      vmuls_lane_f32(v52, *(float32x4_t*)&a4, 2) +
        (float)((float)(v51 / v38) * *((float*)&a3 + 2)));
  *a1 = result;
  return result;
}

float CameraAnimObj_5e5dc0(__int64 a1)
{

#pragma clang fp contract(off)
  signed int v1;
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((*(_WORD*)(a1 + 16) & 0xF0) == 0x20) {
    v1 = (int)(float)(floorf(*(float*)(a1 + 28)) + 0x1.0000000000000p+0f) -
         vcvtms_s32_f32(*(float*)(a1 + 24));
    v2 = (unsigned int)(v1 + 1);
    v3 = v1 < 2;
    v4 = -24;
    v5 = (4 * v2 + 7) & 0x3FFFFFFF8LL;
    if (!v3) {
      v4 = v5;
    }
    v6 = *(_QWORD*)(a1 + 8) + v4;
    *(_WORD*)(a1 + 16) = *(_WORD*)v6;
    *(_WORD*)(a1 + 18) = *(_WORD*)(v6 + 2);
    *(_DWORD*)(a1 + 32) = *(_DWORD*)(v6 + 4);
    result = *(float*)(v6 + 8);
    *(float*)(a1 + 36) = result;
    *(_QWORD*)(a1 + 8) = *(_QWORD*)((v6 + 19) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

__int64 CameraAnimObj_5e5e50(__int64 result)
{

#pragma clang fp contract(off)
  __int16 v1;
  signed int v2;
  unsigned __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _WORD* v10;

  v1 = *(_WORD*)(result + 16);
  if ((v1 & 0xD0 | 0x20) == 0x70) {
    v2 = vcvtms_s32_f32(*(float*)(result + 28)) -
         vcvtms_s32_f32(*(float*)(result + 24));
    if (v2 >= 2) {
      v4 = (unsigned int)(v2 + 1);
      v5 = v1 & 0xE0;
      v6 = v1 & 0xC;
      v7 = 2 * (int)v4;
      v8 = (__int64)((v2 & 0x7FFFFFE0) + 32) >> 3;
      if (v6 != 8) {
        v4 = 4 * (int)v4;
      }
      if (v6 == 4) {
        v9 = v7;
      }
      else {
        v9 = v4;
      }
      if (v5 == 96) {
        v9 = v8;
      }
      v3 = (v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else {
      v3 = -16;
    }
    v10 = (_WORD*)(*(_QWORD*)(result + 8) + v3);
    *(_WORD*)(result + 16) = *v10;
    *(_WORD*)(result + 18) = v10[1];
    *(_QWORD*)(result + 8) =
        *(_QWORD*)(((unsigned __int64)v10 + 11) & 0xFFFFFFFFFFFFFFF8LL);
  }
  return result;
}

__int64 CameraAnimObj_5e6430(__int64 a1, __int64 a2)
{
  __int64 v2;
  float v3;
  float* v4;
  float v5;
  float v6;

  v2 = (__int64)(float)(*(float*)(a2 + 8) * 0x1.45f3060000000p+29f);
  v3 = vcvts_n_f32_u32(v2 & 0xFFFFFF, 0x18u);
  v4 = (float*)((char*)GameData_2135448 + 16 * BYTE3(v2));
  v5 = v4[1] + (float)(v4[3] * v3);
  v6 = *v4 + (float)(v4[2] * v3);
  *(float*)a1 = *(float*)a2 * v6;
  *(float*)(a1 + 4) = *(float*)a2 * v5;
  *(float*)(a1 + 8) = -(float)(*(float*)(a2 + 4) * v5);
  *(float*)(a1 + 12) = v6 * *(float*)(a2 + 4);
  *(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 + 12);
  *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 16);
  return 24;
}

__int64 CameraAnimObj_5e64c0(int32x4_t* a1, __int64 a2, double a3, double a4,
                             int32x4_t a5, double a6, double a7, float32x4_t a8)
{
  int8x16_t v8;
  int8x16_t v9;
  int8x16_t v10;
  int8x16_t v11;
  int8x16_t v12;
  int8x16_t v13;
  int32x4_t v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  int32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  int8x16_t v28;
  int8x16_t v29;
  int32x4_t v30;
  float32x4_t v31;
  int32x4_t v32;
  int32x4_t v33;
  int32x4_t v34;
  int32x4_t v35;
  int32x4_t v36;

  LANES128(a8).n128_u32[0] = *(_DWORD*)(a2 + 12);
  LANES128(a5).n128_u32[0] = *(_DWORD*)(a2 + 24);
  LANES128(a8).n128_u32[1] = *(_DWORD*)(a2 + 16);
  LANES128(a5).n128_u32[1] = *(_DWORD*)(a2 + 28);
  LANES128(a8).n128_u32[2] = *(_DWORD*)(a2 + 20);
  v8 = vmlaq_f32(a8, vdupq_n_s32(0xC0C90FDB),
                 vrndnq_f32(vmulq_f32(a8, vdupq_n_s32(0x3E22F983u))));
  v9 = vcgtq_f32(v8, vdupq_n_s32(0x3FC90FDBu));
  v10 = vmvnq_s8(v9);
  v11 = vbslq_s8(v9, vsubq_f32(vdupq_n_s32(0x40490FDBu), v8), v8);
  v12 = vcgtq_f32(vdupq_n_s32(0xBFC90FDB), v11);
  v13 = vsubq_f32(vdupq_n_s32(0xC0490FDB), v11);
  v14 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190);
  v15 = vbslq_s8(v12, v13, v11);
  PSEUDO_LOW_LANE128(v13, n128_u32, *(_DWORD*)GameData_212c190);
  v16 = vbicq_s8(v10, v12);
  v17 = vmulq_f32(v15, v15);
  v18 = vmlsq_lane_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v14).n128_u64[0]), 0), v17,
      COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 0);
  PSEUDO_LOW_LANE128(
      v13, n128_f32,
      -COERCE_FLOAT(HIDWORD(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
  v19 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v13).n128_u64[0]), 0), v17,
      v18);
  v20 = vmlaq_f32(vdupq_laneq_s32(v14, 2), v17, v19);
  LANES128(v14).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v14).n128_u64[1] = 0x3F8000003F800000LL;
  PSEUDO_LOW_LANE128(
      v19, n128_f32,
      -COERCE_FLOAT(DWORD3(
          *(_OWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c190))));
  v21 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v19).n128_u64[0]), 0), v17,
      v20);
  v22 = vmlaq_f32(v14, v17, v21);
  PSEUDO_LOW_LANE128(v21, n128_u32, *(_DWORD*)GameData_212c188);
  v23 = vmulq_f32(v15, v22);
  v24 = *(int32x4_t*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188);
  v25 = vmlsq_lane_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v24).n128_u64[0]), 0), v17,
      COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]), 0);
  PSEUDO_LOW_LANE128(
      v21, n128_f32,
      -COERCE_FLOAT(HIDWORD(
          *(_QWORD*)((char*)((_UNKNOWN*)0x4LL) + (_QWORD)GameData_212c188))));
  v26 = vmlaq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0]), 0), v17,
      v25);
  v27 = vmlaq_f32(vdupq_laneq_s32(v24, 2), v17, v26);
  LANES128(v26).n128_f32[0] = -LANES128(v24).n128_f32[3];
  v28 = vmlaq_f32(
      v14, v17,
      vmlaq_f32(
          vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v26).n128_u64[0]), 0),
          v17, v27));
  v29 = vbslq_s8(v16, v28, vnegq_f32(v28));
  LANES128(v17).n128_u64[0] =
      LANES128(v29).n128_u32[2] |
      ((unsigned __int64)LANES128(v23).n128_u32[2] << 32);
  LANES128(v24).n128_u64[0] =
      LANES128(v29).n128_u32[1] |
      ((unsigned __int64)LANES128(v29).n128_u32[1] << 32);
  LANES128(v24).n128_u64[1] = 3212836864LL;
  LANES128(v28).n128_u64[0] = LANES128(v17).n128_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v23).n128_u32[1];
  v30 = vmulq_n_f32(vmulq_f32(v28, v24), *(float*)a2);
  LANES128(v26).n128_u64[0] =
      LANES128(v23).n128_u32[1] |
      ((unsigned __int64)LANES128(v23).n128_u32[1] << 32);
  LANES128(v26).n128_u64[1] = LANES128(v29).n128_u32[1];
  LANES128(v17).n128_u64[1] = 1065353216;
  v31 = vmulq_f32(v26, v17);
  LANES128(v26).n128_u64[0] =
      __ROR8__(LANES128(v29).n128_u32[2] |
                   ((unsigned __int64)LANES128(v23).n128_u32[2] << 32),
               32);
  v32 = vmulq_n_f32(
      vaddq_f32(vmulq_n_f32(v31, LANES128(v23).n128_f32[0]),
                vmulq_f32(vmulq_n_f32(v26, LANES128(v29).n128_f32[0]),
                          COERCE_AS(float32x4_t, GameData_1a82940))),
      *(float*)(a2 + 4));
  v33 = vmulq_n_f32(
      vaddq_f32(vmulq_n_f32(v31, LANES128(v29).n128_f32[0]),
                vmulq_f32(vmulq_n_f32(v26, LANES128(v23).n128_f32[0]),
                          COERCE_AS(float32x4_t, GameData_1a83510))),
      *(float*)(a2 + 8));
  v34 = vzip1q_s32(v32, a5);
  v35 = vzip1q_s32(v30, v33);
  v36 = vzip1q_s32(vzip2q_s32(v30, v33),
                   vzip2q_s32(v32, vld1q_dup_f32((const float*)(a2 + 32))));
  *a1 = vzip1q_s32(v35, v34);
  a1[1] = vzip2q_s32(v35, v34);
  a1[2] = v36;
  return 48;
}

__int64 CameraAnimObj_5e9560(__int64 result, __int64 a2, __int64 a3)
{
  int v3;
  __int64* v4;
  int v5;
  _DWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  struct {
    __int64 v16;
    int v17;
  } v16_;

  v3 = *(_DWORD*)(result + 40);
  v4 = *(__int64**)(result + 16);
  v5 = v3 & 0xF800000;
  *(_DWORD*)a2 = v3 & 0xF800000;
  if ((v3 & 8) != 0) {
    v11 = *(__int64**)(result + 16);
    v4 = (__int64*)((char*)v4 + 12);
    v12 = *v11;
    *(_DWORD*)(a2 + 12) = *((_DWORD*)v11 + 2);
    *(_QWORD*)(a2 + 4) = v12;
    if ((v3 & 0x10) != 0) {
    LABEL_5:
      v8 = *v4;
      v9 = v4[1];
      v4 += 2;
      *(_QWORD*)(a2 + 32) = v8;
      *(_QWORD*)(a2 + 40) = v9;
      v10 = *(_DWORD*)(result + 40) & 0x300000 | v5;
      goto LABEL_6;
    }
  }
  else {
    v6 = (_DWORD*)(a3 + 56);
    if (a3 == 0) {
      v6 = &GameData_1b328fc;
    }
    v7 = *(_QWORD*)v6;
    *(_DWORD*)(a2 + 12) = v6[2];
    *(_QWORD*)(a2 + 4) = v7;
    if ((v3 & 0x10) != 0) {
      goto LABEL_5;
    }
  }
  if (a3 != 0) {
    v13 = *(_QWORD*)(a3 + 76);
    *(_QWORD*)(a2 + 32) = *(_QWORD*)(a3 + 68);
    *(_QWORD*)(a2 + 40) = v13;
    if ((*(_BYTE*)(a3 + 53) & 0x70) == 0) {
      v10 = v5 | 0x100000;
    LABEL_6:
      *(_DWORD*)a2 = v10;
    }
    if ((v3 & 0x20) == 0) {
      v4 = (__int64*)(a3 + 84);
      v16_.v17 = 0;
      v16_.v16 = 0;
      if (a3 == 0) {
        v4 = &v16_.v16;
      }
    }
    goto LABEL_13;
  }
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0x3F80000000000000LL;
  *(_DWORD*)a2 = *(_DWORD*)(result + 40) & 0x300000 | v5;
  if ((v3 & 0x20) == 0) {
    v4 = &v16_.v16;
    v16_.v17 = 0;
    v16_.v16 = 0;
  }
LABEL_13:
  v14 = *v4;
  v15 = *((_DWORD*)v4 + 2);
  *(_DWORD*)a2 = v5;
  *(_DWORD*)(a2 + 24) = v15;
  *(_QWORD*)(a2 + 16) = v14;
  *(_DWORD*)a2 = *(_DWORD*)(result + 40) & 0x300000 | v5;
  return result;
}

void CameraAnimObj_5e9680(__int64 a1, __int64 a2, long double a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  int v6;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v3 = *(unsigned __int8*)(a1 + 46);
  if (*(_BYTE*)(a1 + 46) != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = LODWORD(a3);
    if ((*(_WORD*)(v5 + 16) & 0x80) != 0) {
      v9 = *(unsigned int*)(v5 + 20);
      *(float32x4_t*)&a3 = GameRoutine_5e5500(v5, a3);
      v8 = 1;
      *(long double*)(a2 + v9) = a3;
      if ((unsigned int)v3 <= 1) {
        return;
      }
    }
    else {
      v8 = 0;
      if ((_DWORD)v3 == 0) {
        return;
      }
    }
    v10 = v3 - v8;
    v11 = (16LL * v8) | (32LL * v8);
    do {
      LODWORD(a3) = v6;
      v12 = *(_QWORD*)(a1 + 8) + v11;
      v13 = *(unsigned int*)(v12 + 20);
      v11 += 48;
      --v10;
      *(float*)(a2 + v13) = GameRoutine_5e52c0(v12, a3);
    } while (v10 != 0);
  }
}

void CameraAnimObj_5e9780(__int64 a1, __int64 a2, __int64 a3, long double a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v6;
  int v7;
  unsigned int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v4 = *(unsigned __int8*)(a1 + 46);
  if (*(_BYTE*)(a1 + 46) != 0) {
    v6 = *(_QWORD*)(a1 + 8);
    v7 = LODWORD(a4);
    if ((*(_WORD*)(v6 + 16) & 0x80) != 0) {
      v10 = *(unsigned int*)(v6 + 20);
      v11 = a3;
      *(float32x4_t*)&a4 = GameRoutine_5e5500(v6, a4);
      v9 = 1;
      a3 = v11;
      *(long double*)(a2 + v10) = a4;
      if ((unsigned int)v4 <= 1) {
        return;
      }
    }
    else {
      v9 = 0;
      if ((_DWORD)v4 == 0) {
        return;
      }
    }
    v12 = v4 - v9;
    v13 = a3 + 12LL * v9;
    v14 = (16LL * v9) | (32LL * v9);
    do {
      LODWORD(a4) = v7;
      v15 = *(_QWORD*)(a1 + 8) + v14;
      v16 = *(unsigned int*)(v15 + 20);
      v13 += 12;
      v14 += 48;
      --v12;
      *(float*)(a2 + v16) = GameRoutine_5e52c0(v15, a4);
    } while (v12 != 0);
  }
}

float CameraAnimObj_Unknown3(__int64 a1, long double a2)
{
  int v2;
  _DWORD* v5;

  LODWORD(a2) = **(_DWORD**)(a1 + 8);
  if (*(float*)(a1 + 64) != *(float*)&a2) {
    v2 = *(_DWORD*)(a1 + 60);
    if (v2 >= 1 && v2 <= *(_DWORD*)(a1 + 56)) {
      GameRoutine_5e8060(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72),
                         *(_QWORD*)(a1 + 48), a2);
    }
    else {
      GameRoutine_5e7fc0(*(_QWORD*)(a1 + 96), *(_QWORD*)(a1 + 72), a2);
    }
    v5 = *(_DWORD**)(a1 + 8);
    LODWORD(a2) = *v5;
    *(_DWORD*)(a1 + 64) = *v5;
  }
  return *(float*)&a2;
}

#pragma GCC visibility pop
