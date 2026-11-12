#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void task_17d8560(PSEUDO_X8, int, __int64, _QWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 CScriptArray_At_1971f0(__int64, unsigned int);
__int64 CScriptArray_GetSize(__int64);
__int64 GameRoutine_2b0();
__int64 nn_oe_GetOperationMode(void);
__int64 nn_oe_GetPerformanceMode(void);
__int64 nn_os_InitializeLightEvent(_QWORD, _QWORD, _QWORD);
__int64 nn_os_TryWaitLightEvent(__int64);
__int64 nn_vi_QueryDisplayHdrPaperWhite(__int64, __int64);
__int64 nn_vi_QueryDisplayHdrStatus(__int64, __int64, __int64, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN GameData_22660d0;
extern _UNKNOWN GameData_22660dc;
extern _UNKNOWN GameData_22660e8;
extern __int128 GameData_1a82a40;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a82e00;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a831b0;
extern __int128 GameData_1a83220;
extern __int128 GameData_1a83450;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212d288[2];
extern __int64 GameData_21fdf18[];
extern __int64 GameData_2265aa0;
extern __int64 GameData_2265f00;
extern __int64 GameData_2265f08;
extern __int64 GameData_22660f8;
extern __int64 game_g_game_setting_ptr;
extern char GameData_2266114;
extern char GameData_226b000;
extern char GameData_226b001;
extern int GameData_21759e8;
extern int GameData_2265aa8;
extern int GameData_2266110;
extern int GameData_2266118;
float GameRoutine_61c140(float, float, float);
float GameRoutine_61c280(float, float, float);
float GameRoutine_61c620(float, float, float);
float math_61c010(float, float, float);
float math_61c090(float, float, float);
float math_61c1a0(float, float, float);
float math_61c2f0(float, float, float);
float math_61c360(float, float, float);
float math_61c460(float, float, float, float, float, float, float);
float math_61c6f0(float, float, float);
float math_61c920(float, float, float, float);
float math_61c9f0(float, float, float);
float math_61cab0(float, float, float);
float math_61cc40(float, float, float, float);
float math_61cce0(float, float, float);
float math_61cdc0(float, float, float);
float math_61d030(float, float, float, float);
float math_61d120(float, float, float);
float math_61d200(float, float, float);
float math_61d2d0(float, float, float);
float math_61d4b0(float, float, float, float);
void GameRoutine_17d8e00(__int64, int, char, int, unsigned __int16,
                         unsigned __int16);
void GameRoutine_61c7b0(float);
void GameRoutine_61ce90(float);
void math_61c4e0(float);
float32x4_t task_618040(float32x4_t*** a1);
__attribute__((swiftcall)) void task_618220(PSEUDO_X8 x8_, float* a1, float a3);
__attribute__((swiftcall)) void task_618380(PSEUDO_X8 x8_, float* a1, float a3);
__attribute__((swiftcall)) void task_6184e0(PSEUDO_X8 x8_, float* a1, float a3);
float task_618640(int a1, float result, float a3, float a4, float a5);
float task_619100(__int64 a1, float a2, float a3);
__attribute__((swiftcall)) void task_17d8b50(PSEUDO_X8 x8_, int a1, __int64 a2);
__attribute__((swiftcall)) void task_17d8c30(PSEUDO_X8 x8_, int a1, __int64 a2);
__attribute__((swiftcall)) void task_17d8d20(PSEUDO_X8 x8_, int a1, __int64 a2);
void task_17e41e0();
__int64 task_17e45e0();

float32x4_t task_618040(float32x4_t*** a1)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  float32x4_t* v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t* v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t* v24;
  float32x4_t* v25;
  float32x4_t v26;
  float32x4_t result;

  v1 = **a1;
  v2 = 0xAAAAAAAAAAAAAAABLL * ((*a1)[1] - v1);
  if ((int)v2 >= 3) {
    v3 = 0;
    v4 = (unsigned int)(v2 - 1) - 1LL;
    do {
      --v4;
      v5 = &(**a1)[v3];
      v6 = v5[3];
      v7 = vsubq_f32(v5[6], v6);
      v8 = vsubq_f32(*v5, v6);
      v9 = vmulq_f32(v7, v7);
      LANES128(v9).n128_u64[0] =
          LANES64_OF(
              vadd_f32(COERCE_AS(float32x2_t,
                                 LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
              .n64_u64[0];
      LANES128(v9).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
              .n64_u64[0];
      LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
      v10 = vrsqrteq_f32(v9);
      v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
      v12 = vbicq_s8(
          vmulq_f32(v7, vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v9, v11)))),
          vceqzq_f32(v9));
      v13 = vmulq_f32(v8, v8);
      LANES128(v13).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
              .n64_u64[0];
      LANES128(v13).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
              .n64_u64[0];
      LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
      v14 = vrsqrteq_f32(v13);
      v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v13, v14)));
      v5[4] = vsubq_f32(
          v12,
          vbicq_s8(vmulq_f32(v8, vmulq_f32(v15, vrsqrtsq_f32(
                                                    v15, vmulq_f32(v13, v15)))),
                   vceqzq_f32(v13)));
      v16 = &(**a1)[v3];
      v3 += 3;
      v17 = v16[4];
      v18 = vmulq_f32(v17, v17);
      LANES128(v18).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_u64[0];
      LANES128(v18).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_u64[0];
      LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
      v19 = vrsqrteq_f32(v18);
      v20 = vmulq_f32(v19, vrsqrtsq_f32(v19, vmulq_f32(v18, v19)));
      v16[4] = vbicq_s8(
          vmulq_f32(v17,
                    vmulq_f32(v20, vrsqrtsq_f32(v20, vmulq_f32(v18, v20)))),
          vceqzq_f32(v18));
    } while (v4 != 0);
    v1 = **a1;
  }
  LANES128(v21).n128_u64[0] = 0x4040000040400000LL;
  LANES128(v21).n128_u64[1] = 0x4040000040400000LL;
  v22 = vmulq_n_f32(vmulq_f32(vsubq_f32(v1[3], *v1), v21),
                    0x1.0000000000000p+0f / LANES128(v1[2]).n128_f32[0]);
  LANES128(v22).n128_u32[3] = 0;
  LANES128(v23).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v23).n128_u64[1] = 0x3F0000003F000000LL;
  v1[1] = vmulq_f32(vsubq_f32(v22, v1[4]), v23);
  v24 = (*a1)[1];
  v25 = &(**a1)[3 * (int)(-1 - 1431655765 * ((unsigned __int64)((char*)v24 -
                                                                (char*)**a1) >>
                                             4))];
  v26 = vmulq_n_f32(vmulq_f32(vsubq_f32(*v25, v25[-3]), v21),
                    0x1.0000000000000p+0f / LANES128(v25[-1]).n128_f32[0]);
  LANES128(v26).n128_u32[3] = 0;
  result = vmulq_f32(vsubq_f32(v26, v25[-2]), v23);
  v24[-2] = result;
  return result;
}

__attribute__((swiftcall)) void task_618220(PSEUDO_X8 x8_, float* a1, float a3)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float* v10;
  float v11;
  float v12;
  float v13;
  float32x4_t* v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int128 v24;
  float result;

  if (a3 > 0x1.0000000000000p+0f) {
    a3 = 0x1.0000000000000p+0f;
  }
  v3 = 0x0.0p+0f;
  v4 = **(_QWORD**)a1;
  v5 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
  if (a3 < 0x0.0p+0f) {
    a3 = 0x0.0p+0f;
  }
  v6 = v5 - v4;
  v7 = a3 * a1[4];
  if (v5 == v4) {
    v8 = 0;
  }
  else {
    v8 = 0;
    v9 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 4);
    v10 = (float*)(v4 + 32);
    while (1) {
      v11 = *v10;
      v10 += 12;
      v12 = v3 + v11;
      if ((float)(v3 + v11) >= v7) {
        break;
      }
      v3 = v12;
      if (v9 == ++v8) {
        v3 = v12;
        v8 = v9;
        break;
      }
    }
  }
  v13 = v7 - v3;
  v14 = (float32x4_t*)(v4 + 48 * v8);
  v15 = LANES128(v14[2]).n128_f32[0];
  v16 = v13 / v15;
  v17 = vmulq_n_f32(v14[1], v15);
  v18 = vmulq_n_f32(v14[4], v15);
  LANES128(v19).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
  v20 = vaddq_f32(
      vmlaq_n_f32(
          vmlaq_n_f32(vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82a40),
                                  v16 * (float)(v16 * v16)),
                      COERCE_AS(float32x4_t, GameData_1a831b0), v16 * v16),
          COERCE_AS(float32x4_t, GameData_1a83090), v16),
      COERCE_AS(float32x4_t, GameData_1a82dd0));
  LANES128(v19).n128_u64[1] = LANES128(*(v14)).n128_u32[2];
  LANES128(v21).n128_u64[0] = LANES128(v14[3]).n128_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v14[3]).n128_u32[2];
  LANES128(v22).n128_u64[0] = LANES128(v17).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v17).n128_u32[2];
  LANES128(v17).n128_u64[0] = LANES128(v18).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v18).n128_u32[2];
  v23 = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v19, LANES128(v20).n128_f32[0]), v21,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
          v22, v20, 2),
      v17, v20, 3);
  *(_QWORD*)&v24 = LANES128(v23).n128_u64[0];
  *((_QWORD*)&v24 + 1) = LANES128(v23).n128_u32[2];
  *a2 = v24;
  LODWORD(result) = v24;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void task_618380(PSEUDO_X8 x8_, float* a1, float a3)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float* v10;
  float v11;
  float v12;
  float v13;
  float32x4_t* v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int128 v24;
  float result;

  if (a3 > 0x1.0000000000000p+0f) {
    a3 = 0x1.0000000000000p+0f;
  }
  v3 = 0x0.0p+0f;
  v4 = **(_QWORD**)a1;
  v5 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
  if (a3 < 0x0.0p+0f) {
    a3 = 0x0.0p+0f;
  }
  v6 = v5 - v4;
  v7 = a3 * a1[4];
  if (v5 == v4) {
    v8 = 0;
  }
  else {
    v8 = 0;
    v9 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 4);
    v10 = (float*)(v4 + 32);
    while (1) {
      v11 = *v10;
      v10 += 12;
      v12 = v3 + v11;
      if ((float)(v3 + v11) >= v7) {
        break;
      }
      v3 = v12;
      if (v9 == ++v8) {
        v3 = v12;
        v8 = v9;
        break;
      }
    }
  }
  v13 = v7 - v3;
  v14 = (float32x4_t*)(v4 + 48 * v8);
  v15 = LANES128(v14[2]).n128_f32[0];
  v16 = v13 / v15;
  v17 = vmulq_n_f32(v14[1], v15);
  v18 = vmulq_n_f32(v14[4], v15);
  LANES128(v19).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
  v20 = vaddq_f32(vmlaq_n_f32(vmlaq_n_f32(vmulq_n_f32(COERCE_AS(float32x4_t, 0),
                                                      v16 * (float)(v16 * v16)),
                                          COERCE_AS(float32x4_t, 0), v16 * v16),
                              COERCE_AS(float32x4_t, GameData_1a83220), v16),
                  COERCE_AS(float32x4_t, GameData_1a82e00));
  LANES128(v19).n128_u64[1] = LANES128(*(v14)).n128_u32[2];
  LANES128(v21).n128_u64[0] = LANES128(v14[3]).n128_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v14[3]).n128_u32[2];
  LANES128(v22).n128_u64[0] = LANES128(v17).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v17).n128_u32[2];
  LANES128(v17).n128_u64[0] = LANES128(v18).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v18).n128_u32[2];
  v23 = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v19, LANES128(v20).n128_f32[0]), v21,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
          v22, v20, 2),
      v17, v20, 3);
  *(_QWORD*)&v24 = LANES128(v23).n128_u64[0];
  *((_QWORD*)&v24 + 1) = LANES128(v23).n128_u32[2];
  *a2 = v24;
  LODWORD(result) = v24;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void task_6184e0(PSEUDO_X8 x8_, float* a1, float a3)
{
  _OWORD* a2 = (_OWORD*)PSEUDO_X8_VALUE(x8_);
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  float* v10;
  float v11;
  float v12;
  float v13;
  float32x4_t* v14;
  float v15;
  float v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  __int128 v24;
  float result;

  if (a3 > 0x1.0000000000000p+0f) {
    a3 = 0x1.0000000000000p+0f;
  }
  v3 = 0x0.0p+0f;
  v4 = **(_QWORD**)a1;
  v5 = *(_QWORD*)(*(_QWORD*)a1 + 8LL);
  if (a3 < 0x0.0p+0f) {
    a3 = 0x0.0p+0f;
  }
  v6 = v5 - v4;
  v7 = a3 * a1[4];
  if (v5 == v4) {
    v8 = 0;
  }
  else {
    v8 = 0;
    v9 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 4);
    v10 = (float*)(v4 + 32);
    while (1) {
      v11 = *v10;
      v10 += 12;
      v12 = v3 + v11;
      if ((float)(v3 + v11) >= v7) {
        break;
      }
      v3 = v12;
      if (v9 == ++v8) {
        v3 = v12;
        v8 = v9;
        break;
      }
    }
  }
  v13 = v7 - v3;
  v14 = (float32x4_t*)(v4 + 48 * v8);
  v15 = LANES128(v14[2]).n128_f32[0];
  v16 = v13 / v15;
  v17 = vmulq_n_f32(v14[1], v15);
  v18 = vmulq_n_f32(v14[4], v15);
  LANES128(v19).n128_u64[0] = LANES128(*(v14)).n128_u64[0];
  v20 = vaddq_f32(
      vmlaq_n_f32(vmlaq_n_f32(vmulq_n_f32(COERCE_AS(float32x4_t, 0),
                                          v16 * (float)(v16 * v16)),
                              COERCE_AS(float32x4_t, GameData_1a83450),
                              v16 * v16),
                  COERCE_AS(float32x4_t, GameData_1a82e00), v16),
      COERCE_AS(float32x4_t, GameData_1a83090));
  LANES128(v19).n128_u64[1] = LANES128(*(v14)).n128_u32[2];
  LANES128(v21).n128_u64[0] = LANES128(v14[3]).n128_u64[0];
  LANES128(v21).n128_u64[1] = LANES128(v14[3]).n128_u32[2];
  LANES128(v22).n128_u64[0] = LANES128(v17).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v17).n128_u32[2];
  LANES128(v17).n128_u64[0] = LANES128(v18).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v18).n128_u32[2];
  v23 = vmlaq_laneq_f32(
      vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v19, LANES128(v20).n128_f32[0]), v21,
                         COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]), 1),
          v22, v20, 2),
      v17, v20, 3);
  *(_QWORD*)&v24 = LANES128(v23).n128_u64[0];
  *((_QWORD*)&v24 + 1) = LANES128(v23).n128_u32[2];
  *a2 = v24;
  LODWORD(result) = v24;
  {
    result;
    return;
  }
}

float task_618640(int a1, float result, float a3, float a4, float a5)
{
  bool v5;
  bool v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
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
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
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
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;

  if (a5 == 0x0.0p+0f) {
    v5 = false;
    v6 = false;
  }
  else {
    v6 = a5 == a4;
    v5 = a5 >= a4;
  }
  if (v6 || !v5) {
    return a3;
  }
  switch (a1) {
  case 0:
    v7 = (float)((float)(a3 - result) * a4) / a5;
    return result + v7;
  case 1:
    v28 = (float)(a3 - result) * (float)(a4 * a4);
    v33 = a5 * a5;
    goto LABEL_26;
  case 2:
    v28 = (float)(a3 - result) * (float)(a4 * (float)(a4 * a4));
    v29 = a5 * a5;
    goto LABEL_23;
  case 3:
    v28 = (float)(a3 - result) * (float)(a4 * (float)(a4 * (float)(a4 * a4)));
    v29 = a5 * (float)(a5 * a5);
  LABEL_23:
    v33 = a5 * v29;
  LABEL_26:
    v7 = v28 / v33;
    return result + v7;
  case 4:
    v18 = a3 - result;
    v19 = result + v18;
    v20 = v18 * (float)((float)(a5 - a4) * (float)(a5 - a4));
    v21 = a5 * a5;
    return v19 - (float)(v20 / v21);
  case 5:
    v36 = a3 - result;
    v19 = result + v36;
    v20 = v36 *
      (float)((float)(a5 - a4) * (float)((float)(a5 - a4) * (float)(a5 - a4)));
    v37 = a5 * a5;
    goto LABEL_32;
  case 6:
    v40 = a3 - result;
    v19 = result + v40;
    v20 = v40 *
      (float)((float)(a5 - a4) *
        (float)((float)(a5 - a4) *
          (float)((float)(a5 - a4) * (float)(a5 - a4))));
    v37 = a5 * (float)(a5 * a5);
  LABEL_32:
    v21 = a5 * v37;
    return v19 - (float)(v20 / v21);
  case 7:
    v24 = a3 - result;
    v34 =
      (float)((float)(a4 / a5) * 0x1.921fb60000000p+1f) * 0x1.0000000000000p+2f;
    v35 = v34 * 0x1.45f3060000000p-3f;
    goto LABEL_37;
  case 8:
    v24 = a3 - result;
    v34 =
      (float)((float)((float)((float)(a4 * a4) / a5) * 0x1.921fb60000000p+1f) *
        0x1.0000000000000p+2f) /
      (float)((float)(a5 * 0x1.e000000000000p+3f) / 0x1.9000000000000p+6f);
    v35 = v34 * 0x1.45f3060000000p-3f;
  LABEL_37:
    v44 = v34 + (float)(roundf(v35) * -0x1.921fb60000000p+2f);
    if (v44 <= 0x1.921fb60000000p+0f) {
      v46 = 0x1.0000000000000p+0f;
      if (v44 >= -0x1.921fb60000000p+0f) {
        goto LABEL_42;
      }
      v45 = -0x1.921fb60000000p+1f;
    }
    else {
      v45 = 0x1.921fb60000000p+1f;
    }
    v44 = v45 - v44;
    v46 = -0x1.0000000000000p+0f;
  LABEL_42:
    v47 = v44 * v44;
    a4 = a5 - a4;
    return a3 -
      (float)((float)(a4 *
                (float)(a4 *
                  (float)(v24 *
                    (float)(v46 *
                      (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                        (float)((float)(*(float*)((char*)((
                                                                    _UNKNOWN**)0x8LL) +
                                                          (_QWORD)
                                                            GameData_212c188 +
                                                          4) +
                                                  (float)((float)-(
                                                            float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                       GameData_212c188) -
                                                            (float)((float)(*((float*)
                                                                                GameData_212c188 +
                                                                              1) -
                                                                      (float)(*(float*)
                                                                                GameData_212c188 *
                                                                        v47)) *
                                                              v47)) *
                                                    v47)) *
                                          v47)) *
                                v47) +
                        0x1.0000000000000p+0f))))) /
        (float)(a5 * a5));
  case 9:
    v24 = a3 - result;
    v25 =
      (float)((float)((float)((float)(a4 * a4) / a5) * 0x1.921fb60000000p+1f) *
        0x1.0000000000000p+2f) /
      (float)((float)(a5 * 0x1.e000000000000p+3f) / 0x1.9000000000000p+6f);
    v26 = v25 +
      (float)(roundf(v25 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v26 <= 0x1.921fb60000000p+0f) {
      v46 = 0x1.0000000000000p+0f;
      if (v26 >= -0x1.921fb60000000p+0f) {
        goto LABEL_67;
      }
      v27 = -0x1.921fb60000000p+1f;
    }
    else {
      v27 = 0x1.921fb60000000p+1f;
    }
    v26 = v27 - v26;
    v46 = -0x1.0000000000000p+0f;
  LABEL_67:
    v47 = v26 * v26;
    return a3 -
      (float)((float)(a4 *
                (float)(a4 *
                  (float)(v24 *
                    (float)(v46 *
                      (float)((float)((float)-(
                                        float)(*(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                 (_QWORD)GameData_212c188) -
                                        (float)((float)(*(float*)((char*)((
                                                                    _UNKNOWN**)0x8LL) +
                                                          (_QWORD)
                                                            GameData_212c188 +
                                                          4) +
                                                  (float)((float)-(
                                                            float)(*(float*)((char*)((
                                                                               _UNKNOWN**)0x8LL) +
                                                                     (_QWORD)
                                                                       GameData_212c188) -
                                                            (float)((float)(*((float*)
                                                                                GameData_212c188 +
                                                                              1) -
                                                                      (float)(*(float*)
                                                                                GameData_212c188 *
                                                                        v47)) *
                                                              v47)) *
                                                    v47)) *
                                          v47)) *
                                v47) +
                        0x1.0000000000000p+0f))))) /
        (float)(a5 * a5));
  case 10:
    v41 =
      (float)((float)((float)((float)(a4 * a4) / a5) * 0x1.921fb60000000p+1f) *
        0x1.0000000000000p+2f) /
      (float)((float)(a5 * 0x1.4000000000000p+5f) / 0x1.9000000000000p+6f);
    v42 = v41 +
      (float)(roundf(v41 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v42 <= 0x1.921fb60000000p+0f) {
      v92 = 0x1.0000000000000p+0f;
      if (v42 >= -0x1.921fb60000000p+0f) {
        goto LABEL_93;
      }
      v43 = -0x1.921fb60000000p+1f;
    }
    else {
      v43 = 0x1.921fb60000000p+1f;
    }
    v42 = v43 - v42;
    v92 = -0x1.0000000000000p+0f;
  LABEL_93:
    v93 = v42 * v42;
    v94 = a3 - result;
    v95 =
      (float)((float)(a5 - a4) *
        (float)((float)(a5 - a4) *
          (float)(v92 *
            (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c188) -
                              (float)((float)(*(float*)((char*)((
                                                          _UNKNOWN**)0x8LL) +
                                                (_QWORD)GameData_212c188 + 4) +
                                        (float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                             GameData_212c188) -
                                                  (float)((float)(*((float*)
                                                                      GameData_212c188 +
                                                                    1) -
                                                            (float)(*(float*)
                                                                      GameData_212c188 *
                                                              v93)) *
                                                    v93)) *
                                          v93)) *
                                v93)) *
                      v93) +
              0x1.0000000000000p+0f)))) /
      (float)(a5 * a5);
    if (v95 < 0x0.0p+0f) {
      v95 = -v95;
    }
    return a3 - (float)(v94 * v95);
  case 11:
    v13 = a3 - result;
    v16 = (float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) +
      (float)(roundf((float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) *
                0x1.45f3060000000p-3f) *
        -0x1.921fb60000000p+2f);
    if (v16 <= 0x1.921fb60000000p+0f) {
      v51 = 0x1.0000000000000p+0f;
      if (v16 >= -0x1.921fb60000000p+0f) {
        goto LABEL_54;
      }
      v17 = -0x1.921fb60000000p+1f;
    }
    else {
      v17 = 0x1.921fb60000000p+1f;
    }
    v16 = v17 - v16;
    v51 = -0x1.0000000000000p+0f;
  LABEL_54:
    v52 = v16 * v16;
    v14 = 0x1.0000000000000p+0f -
      (float)(PSEUDO_UNFUSED(v51 *
        (float)((float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                          (_QWORD)GameData_212c188) -
                          (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                            (_QWORD)GameData_212c188 + 4) +
                                    (float)((float)-(
                                              float)(*(float*)((char*)((
                                                                 _UNKNOWN**)0x8LL) +
                                                       (_QWORD)
                                                         GameData_212c188) -
                                              (float)((float)(*((float*)
                                                                  GameData_212c188 +
                                                                1) -
                                                        (float)(*(float*)
                                                                  GameData_212c188 *
                                                          v52)) *
                                                v52)) *
                                      v52)) *
                            v52)) *
                  v52) +
          0x1.0000000000000p+0f)));
    goto LABEL_88;
  case 12:
    v22 = (float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) +
      (float)(roundf((float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) *
                0x1.45f3060000000p-3f) *
        -0x1.921fb60000000p+2f);
    if (v22 <= 0x1.921fb60000000p+0f) {
      v53 = 0x1.0000000000000p+0f;
      if (v22 >= -0x1.921fb60000000p+0f) {
        goto LABEL_58;
      }
      v23 = -0x1.921fb60000000p+1f;
    }
    else {
      v23 = 0x1.921fb60000000p+1f;
    }
    v53 = -0x1.0000000000000p+0f;
    v22 = v23 - v22;
  LABEL_58:
    v54 = v22 * v22;
    v13 = a3 - result;
    v55 = *((float*)GameData_212c188 + 1);
    v56 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v58 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v57 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v59 = -v58;
    v60 = -v56;
    v61 = -(float)(v56 -
      (float)((float)(v57 +
                (float)((float)-(float)(v58 -
                          (float)((float)(v55 -
                                    (float)(*(float*)GameData_212c188 * v54)) *
                            v54)) *
                  v54)) *
        v54));
    v62 = 0x1.0000000000000p+0f;
    v63 = (float)((float)(0x1.0000000000000p+0f -
                    (float)(PSEUDO_UNFUSED(v53 *
                      (float)((float)(v61 * v54) + 0x1.0000000000000p+0f)))) *
            0x1.0000000000000p-1f) *
      0x1.921fb60000000p+1f;
    v64 = v63 +
      (float)(roundf(v63 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v64 <= 0x1.921fb60000000p+0f) {
      if (v64 >= -0x1.921fb60000000p+0f) {
        goto LABEL_63;
      }
      v65 = -0x1.921fb60000000p+1f;
    }
    else {
      v65 = 0x1.921fb60000000p+1f;
    }
    v64 = v65 - v64;
    v62 = -0x1.0000000000000p+0f;
  LABEL_63:
    v66 = 0x1.0000000000000p+0f;
    v67 = v62 *
      (float)((float)((float)(v60 +
                        (float)((float)(v57 +
                                  (float)((float)(v59 +
                                            (float)((float)(v55 +
                                                      (float)((float)-*(float*)
                                                                GameData_212c188 *
                                                        (float)(v64 * v64))) *
                                              (float)(v64 * v64))) *
                                    (float)(v64 * v64))) *
                          (float)(v64 * v64))) *
                (float)(v64 * v64)) +
        0x1.0000000000000p+0f);
    goto LABEL_87;
  case 13:
    v38 = (float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) +
      (float)(roundf((float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) *
                0x1.45f3060000000p-3f) *
        -0x1.921fb60000000p+2f);
    if (v38 <= 0x1.921fb60000000p+0f) {
      v70 = 0x1.0000000000000p+0f;
      if (v38 >= -0x1.921fb60000000p+0f) {
        goto LABEL_76;
      }
      v39 = -0x1.921fb60000000p+1f;
    }
    else {
      v39 = 0x1.921fb60000000p+1f;
    }
    v70 = -0x1.0000000000000p+0f;
    v38 = v39 - v38;
  LABEL_76:
    v71 = v38 * v38;
    v72 = *((float*)GameData_212c188 + 1);
    v73 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
    v74 = -*(float*)GameData_212c188;
    v76 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
    v75 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
    v77 = -v76;
    v78 = -v73;
    v79 = -(float)(v73 -
      (float)((float)(v75 +
                (float)((float)-(float)(v76 -
                          (float)((float)(v72 -
                                    (float)(*(float*)GameData_212c188 * v71)) *
                            v71)) *
                  v71)) *
        v71));
    v80 = 0x1.0000000000000p+0f;
    v81 = (float)((float)(0x1.0000000000000p+0f -
                    (float)(PSEUDO_UNFUSED(v70 *
                      (float)((float)(v79 * v71) + 0x1.0000000000000p+0f)))) *
            0x1.0000000000000p-1f) *
      0x1.921fb60000000p+1f;
    v82 = v81 +
      (float)(roundf(v81 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v82 <= 0x1.921fb60000000p+0f) {
      if (v82 >= -0x1.921fb60000000p+0f) {
        goto LABEL_81;
      }
      v83 = -0x1.921fb60000000p+1f;
    }
    else {
      v83 = 0x1.921fb60000000p+1f;
    }
    v82 = v83 - v82;
    v80 = -0x1.0000000000000p+0f;
  LABEL_81:
    v84 = v82 * v82;
    v13 = a3 - result;
    v85 = v78 +
      (float)((float)(v75 +
                (float)((float)(v77 +
                          (float)((float)(v72 +
                                    (float)(v74 * (float)(v82 * v82))) *
                            (float)(v82 * v82))) *
                  (float)(v82 * v82))) *
        (float)(v82 * v82));
    v86 = 0x1.0000000000000p+0f;
    v87 = (float)((float)(0x1.0000000000000p+0f -
                    (float)(PSEUDO_UNFUSED(v80 *
                      (float)((float)(v85 * v84) + 0x1.0000000000000p+0f)))) *
            0x1.0000000000000p-1f) *
      0x1.921fb60000000p+1f;
    v88 = v87 +
      (float)(roundf(v87 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
    if (v88 <= 0x1.921fb60000000p+0f) {
      if (v88 >= -0x1.921fb60000000p+0f) {
        goto LABEL_86;
      }
      v89 = -0x1.921fb60000000p+1f;
    }
    else {
      v89 = 0x1.921fb60000000p+1f;
    }
    v88 = v89 - v88;
    v86 = -0x1.0000000000000p+0f;
  LABEL_86:
    v90 = v88 * v88;
    v91 = v72 + (float)(v74 * v90);
    v66 = 0x1.0000000000000p+0f;
    v67 = v86 *
      (float)((float)((float)(v78 +
                        (float)((float)(v75 +
                                  (float)((float)(v77 + (float)(v91 * v90)) *
                                    v90)) *
                          v90)) *
                v90) +
        0x1.0000000000000p+0f);
  LABEL_87:
    v14 = v66 - v67;
  LABEL_88:
    v50 = 0x1.0000000000000p-1f;
    return result + (float)(v13 * (float)(v14 * v50));
  case 14:
    v13 = a3 - result;
    v14 = (float)((float)(a4 * 0x1.921fb60000000p+0f) / a5) +
      (float)(roundf((float)((float)(a4 * 0x1.921fb60000000p+0f) / a5) *
                0x1.45f3060000000p-3f) *
        -0x1.921fb60000000p+2f);
    if (v14 <= 0x1.921fb60000000p+0f) {
      if (v14 >= -0x1.921fb60000000p+0f) {
        goto LABEL_50;
      }
      v15 = -0x1.921fb60000000p+1f;
    }
    else {
      v15 = 0x1.921fb60000000p+1f;
    }
    v14 = v15 - v14;
  LABEL_50:
    v50 =
      (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) +
                                (_QWORD)GameData_212c190) -
                (float)((float)(*(float*)((char*)((_UNKNOWN**)0x8LL) +
                                  (_QWORD)GameData_212c190 + 4) +
                          (float)((float)-(
                                    float)(*(float*)((char*)((
                                                       _UNKNOWN**)0x8LL) +
                                             (_QWORD)GameData_212c190) -
                                    (float)((float)(*((float*)GameData_212c190 +
                                                      1) -
                                              (float)(*(float*)
                                                        GameData_212c190 *
                                                (float)(v14 * v14))) *
                                      (float)(v14 * v14))) *
                            (float)(v14 * v14))) *
                  (float)(v14 * v14))) *
        (float)(v14 * v14)) +
      0x1.0000000000000p+0f;
    return result + (float)(v13 * (float)(v14 * v50));
  case 15:
    v30 = a3 - result;
    v31 = (float)((float)(a4 * 0x1.921fb60000000p+0f) / a5) +
      (float)(roundf((float)((float)(a4 * 0x1.921fb60000000p+0f) / a5) *
                0x1.45f3060000000p-3f) *
        -0x1.921fb60000000p+2f);
    if (v31 <= 0x1.921fb60000000p+0f) {
      v68 = 0x1.0000000000000p+0f;
      if (v31 >= -0x1.921fb60000000p+0f) {
        goto LABEL_72;
      }
      v32 = -0x1.921fb60000000p+1f;
    }
    else {
      v32 = 0x1.921fb60000000p+1f;
    }
    v31 = v32 - v31;
    v68 = -0x1.0000000000000p+0f;
  LABEL_72:
    v69 = v31 * v31;
    return result +
      (float)(v30 *
        (float)(0x1.0000000000000p+0f -
          (float)(PSEUDO_UNFUSED(v68 *
            (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                       (_QWORD)GameData_212c188) -
                              (float)((float)(*(float*)((char*)((
                                                          _UNKNOWN**)0x8LL) +
                                                (_QWORD)GameData_212c188 + 4) +
                                        (float)((float)-(
                                                  float)(*(float*)((char*)((
                                                                     _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                             GameData_212c188) -
                                                  (float)((float)(*((float*)
                                                                      GameData_212c188 +
                                                                    1) -
                                                            (float)(*(float*)
                                                                      GameData_212c188 *
                                                              v69)) *
                                                    v69)) *
                                          v69)) *
                                v69)) *
                      v69) +
              0x1.0000000000000p+0f)))));
  case 16:
    v8 = a3 - result;
    v9 = result + (float)(v8 * 0x1.0000000000000p-1f);
    v10 = v8 * 0x1.0000000000000p-1f;
    v11 = (float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) +
      (float)(roundf((float)((float)(a4 * 0x1.921fb60000000p+1f) / a5) *
                0x1.45f3060000000p-3f) *
        -0x1.921fb60000000p+2f);
    if (v11 <= 0x1.921fb60000000p+0f) {
      v48 = 0x1.0000000000000p+0f;
      if (v11 >= -0x1.921fb60000000p+0f) {
        goto LABEL_46;
      }
      v12 = -0x1.921fb60000000p+1f;
    }
    else {
      v12 = 0x1.921fb60000000p+1f;
    }
    v11 = v12 - v11;
    v48 = -0x1.0000000000000p+0f;
  LABEL_46:
    v49 = v11 * v11;
    result = v9 +
      (float)(v10 *
        (float)-(
          float)((float)((float)((float)-(
                                   float)(*(float*)((char*)((__int128*)0x10LL) +
                                            (_QWORD)GameData_212c188) -
                                   (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                     (_QWORD)GameData_212c188 +
                                                     4) +
                                             (float)((float)-(
                                                       float)(*(float*)((char*)((
                                                                          _UNKNOWN**)0x8LL) +
                                                                (_QWORD)
                                                                  GameData_212c188) -
                                                       (float)((float)(*((float*)
                                                                           GameData_212c188 +
                                                                         1) -
                                                                 (float)(*(float*)
                                                                           GameData_212c188 *
                                                                   v49)) *
                                                         v49)) *
                                               v49)) *
                                     v49)) *
                           v49) +
                   0x1.0000000000000p+0f) *
          v48));
    break;
  default:
    return result;
  }
  return result;
}

float task_619100(__int64 a1, float a2, float a3)
{
  float v4;
  float v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  int v15;
  __int64 v16;
  float v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  float v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  float v25;
  unsigned int v26;
  float v27;
  float v28;
  int v29;
  __int64 v30;
  float v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  float v35;
  unsigned int v36;
  int v37;
  __int64 v38;
  float v39;
  unsigned int v40;
  int v41;
  __int64 v42;
  float v43;
  unsigned int v44;
  float v45;
  float v46;
  double v47;
  int v48;
  __int64 v49;
  float v50;
  unsigned int v51;
  int v52;
  __int64 v53;
  float v54;
  unsigned int v55;
  int v56;
  float v57;
  __int64 v58;
  float v59;
  unsigned int v60;
  float v61;
  double v62;
  float v63;
  float v64;
  float v65;
  float v66;
  double v67;
  float v68;
  float v69;
  float v70;
  float* v71;
  float* v72;
  float v73;
  float v74;
  float v75;
  float* v76;
  float v77;
  float* v78;
  double v79;
  float v80;
  float v81;
  float v82;
  float v83;
  double v84;
  float* v85;
  float* v86;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = 0x0.0p+0f;
  if (a3 > 0x0.0p+0f) {
    v6 = 0x0.0p+0f;
    v7 = *(_QWORD*)(a1 + 24);
    v8 = 0x1.0000000000000p+0f;
    if (a2 > a3) {
      v9 = a3;
    }
    else {
      v9 = a2;
    }
    if (a2 >= 0x0.0p+0f) {
      v10 = v9;
    }
    else {
      v10 = 0x0.0p+0f;
    }
    if (v7 != 0) {
      v11 = 0x1.0000000000000p+0f;
      if ((unsigned int)CScriptArray_GetSize(v7) >= 2) {
        v6 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 0),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v11 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 1u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v8 = *(float*)(a1 + 20);
      }
    }
    else {
      v11 = 0x1.0000000000000p+0f;
    }
    v12 = v10 / a3;
    switch (*(_DWORD*)(a1 + 8)) {
    case 1:
      v37 = *(_DWORD*)(a1 + 12);
      if (v37 == 3) {
        v14 = math_61c010(v12, v6, v11);
      }
      else if (v37 == 2) {
        v14 = (float)(PSEUDO_UNFUSED((float)(v12 * v12) * (float)(v11 - v6))) +
              (float)((float)(v12 *
                              (float)((float)(0x1.0000000000000p+0f - v12) +
                                      (float)(0x1.0000000000000p+0f - v12))) *
                      (float)(v11 - v6));
      }
      else if (v37 != 1 && (v38 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v39 = v10 / a3, v40 = CScriptArray_GetSize(v38), v12 = v39,
                v40 > 2)) {
        v14 = (float)(PSEUDO_UNFUSED((float)(v39 * v39) * (float)(v11 - v6))) +
              (float)((float)(v39 *
                              (float)((float)(0x1.0000000000000p+0f - v39) +
                                      (float)(0x1.0000000000000p+0f - v39))) *
                      (float)(*(float*)CScriptArray_At_1971f0(
                                  *(_QWORD*)(a1 + 24), 2u) -
                              v6));
      }
      else {
        v14 = (float)(PSEUDO_UNFUSED((float)(v12 * v12) * (float)(v11 - v6))) +
              (float)((float)(v12 *
                              (float)((float)(0x1.0000000000000p+0f - v12) +
                                      (float)(0x1.0000000000000p+0f - v12))) *
                      (float)(v6 - v6));
      }
      return v14 / v8;
    case 2:
      v23 = *(_DWORD*)(a1 + 12);
      if (v23 == 3) {
        v14 = math_61c090(v12, v6, v11);
      }
      else {
        if (v23 == 2) {
          v27 = v11 - v6;
          v28 =
              (float)(PSEUDO_UNFUSED(
                  (float)(v12 *
                          (float)(v12 *
                                  (float)((float)(0x1.0000000000000p+0f - v12) *
                                          0x1.8000000000000p+1f))) *
                  (float)(v11 - v6))) +
              (float)((float)(v12 *
                              (float)((float)(0x1.0000000000000p+0f - v12) *
                                      (float)((float)(0x1.0000000000000p+0f -
                                                      v12) *
                                              0x1.8000000000000p+1f))) *
                      (float)(v11 - v6));
        }
        else {
          if (v23 != 1) {
            v24 = *(_QWORD*)(a1 + 24);
            if (v24 != 0) {
              v25 = v10 / a3;
              v26 = CScriptArray_GetSize(v24),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              v12 = v25;
              if (v26 > 3) {
                v73 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                v14 =
                    (float)((float)(PSEUDO_UNFUSED(
                                (float)(v25 *
                                        (float)(v25 *
                                                (float)((float)(0x1.0000000000000p+0f -
                                                                v25) *
                                                        0x1.8000000000000p+1f))) *
                                (float)(*(float*)CScriptArray_At_1971f0(
                                            *(_QWORD*)(a1 + 24), 3u) -
                                        v6))) +
                            (float)((float)(v25 *
                                            (float)((float)(0x1.0000000000000p+0f -
                                                            v25) *
                                                    (float)((float)(0x1.0000000000000p+0f -
                                                                    v25) *
                                                            0x1.8000000000000p+1f))) *
                                    (float)(v73 - v6))) +
                    (float)((float)(v25 * (float)(v25 * v25)) *
                            (float)(v11 - v6));
                return v14 / v8;
              }
            }
          }
          v27 = v11 - v6;
          v28 =
              (float)(PSEUDO_UNFUSED(
                  (float)(v12 *
                          (float)(v12 *
                                  (float)((float)(0x1.0000000000000p+0f - v12) *
                                          0x1.8000000000000p+1f))) *
                  (float)(v6 - v6))) +
              (float)((float)(v12 *
                              (float)((float)(0x1.0000000000000p+0f - v12) *
                                      (float)((float)(0x1.0000000000000p+0f -
                                                      v12) *
                                              0x1.8000000000000p+1f))) *
                      (float)(v6 - v6));
        }
        v14 = v28 + (float)((float)(v12 * (float)(v12 * v12)) * v27);
      }
      return v14 / v8;
    case 3:
      v29 = *(_DWORD*)(a1 + 12);
      if (v29 == 3) {
        v14 = math_61c1a0(v12, v6, v11);
      }
      else if (v29 == 2) {
        v61 = 0x1.0000000000000p+0f - v12;
        v14 =
            (float)((float)((float)(PSEUDO_UNFUSED(
                                (float)((float)(v12 * v12) *
                                        (float)((float)(v61 * v61) *
                                                0x1.8000000000000p+2f)) *
                                (float)(v11 - v6))) +
                            (float)((float)(v12 *
                                            (float)(v61 *
                                                    (float)((float)(v61 * v61) *
                                                            0x1.0000000000000p+2f))) *
                                    (float)(v11 - v6))) +
                    (float)((float)((float)(v12 * v12) *
                                    (float)(v12 *
                                            (float)((float)(0x1.0000000000000p+0f -
                                                            v12) *
                                                    0x1.0000000000000p+2f))) *
                            (float)(v11 - v6))) +
            (float)((float)((float)(v12 * v12) * (float)(v12 * v12)) *
                    (float)(v11 - v6));
      }
      else if (v29 != 1 && (v30 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v31 = v10 / a3, v32 = CScriptArray_GetSize(v30), v12 = v31,
                v32 > 4)) {
        v74 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v75 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 3u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v76 = (float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 4u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v77 = 0x1.0000000000000p+0f - v31;
        v14 =
            (float)((float)((float)(PSEUDO_UNFUSED(
                                (float)((float)(v31 * v31) *
                                        (float)((float)(v77 * v77) *
                                                0x1.8000000000000p+2f)) *
                                (float)(v75 - v6))) +
                            (float)((float)(v31 *
                                            (float)(v77 *
                                                    (float)((float)(v77 * v77) *
                                                            0x1.0000000000000p+2f))) *
                                    (float)(v74 - v6))) +
                    (float)((float)((float)(v31 * v31) *
                                    (float)(v31 *
                                            (float)((float)(0x1.0000000000000p+0f -
                                                            v31) *
                                                    0x1.0000000000000p+2f))) *
                            (float)(*v76 - v6))) +
            (float)((float)((float)(v31 * v31) * (float)(v31 * v31)) *
                    (float)(v11 - v6));
      }
      else {
        v14 = GameRoutine_61c140(v12, v6, v11);
      }
      return v14 / v8;
    case 4:
      v15 = *(_DWORD*)(a1 + 12);
      if (v15 == 3) {
        v14 = math_61c360(v12, v6, v11);
      }
      else if (v15 == 2) {
        v14 = math_61c2f0(v12, v6, v11);
      }
      else if (v15 != 1 && (v16 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v17 = v10 / a3, v18 = CScriptArray_GetSize(v16), v12 = v17,
                v18 > 5)) {
        v68 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v69 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 3u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v70 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 4u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v71 = (float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 5u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v14 = math_61c460(v17, v6, v11, v68, v69, v70, *v71);
      }
      else {
        v14 = GameRoutine_61c280(v12, v6, v11);
      }
      return v14 / v8;
    case 5:
      v41 = *(_DWORD*)(a1 + 12);
      if (v41 == 3) {
        math_61c4e0(v12), v14 = COERCE_AS(__typeof__(v14),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else if (v41 == 2) {
        v65 = 0x0.0p+0f;
        v66 = 0x1.0000000000000p+0f;
        if (v12 != 0x0.0p+0f) {
          v65 = 0x1.0000000000000p+0f;
          v66 = 0x0.0p+0f;
          if (v12 != 0x1.0000000000000p+0f) {
            v67 = v12 * 0x1.921fb54442d18p+0;
            v65 = sin(v67), v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
            v66 = cos(v67), v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        v14 = (float)(PSEUDO_UNFUSED((float)(v11 - v6) *
                                     (float)(0x1.0000000000000p+0f - v66))) +
              (float)((float)((float)(v66 + v65) + -0x1.0000000000000p+0f) *
                      (float)(v11 - v6));
      }
      else if (v41 != 1 && (v42 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v43 = v10 / a3, v44 = CScriptArray_GetSize(v42), v12 = v43,
                v44 > 2)) {
        v81 = *(float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v82 = 0x0.0p+0f;
        v83 = 0x1.0000000000000p+0f;
        if (v43 != 0x0.0p+0f) {
          v82 = 0x1.0000000000000p+0f;
          v83 = 0x0.0p+0f;
          if (v43 != 0x1.0000000000000p+0f) {
            v84 = v43 * 0x1.921fb54442d18p+0;
            v82 = sin(v84), v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
            v83 = cos(v84), v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        v14 = (float)(PSEUDO_UNFUSED((float)(v11 - v6) *
                                     (float)(0x1.0000000000000p+0f - v83))) +
              (float)((float)((float)(v83 + v82) + -0x1.0000000000000p+0f) *
                      (float)(v81 - v6));
      }
      else {
        v45 = 0x0.0p+0f;
        v46 = 0x1.0000000000000p+0f;
        if (v12 != 0x0.0p+0f) {
          v45 = 0x1.0000000000000p+0f;
          v46 = 0x0.0p+0f;
          if (v12 != 0x1.0000000000000p+0f) {
            v47 = v12 * 0x1.921fb54442d18p+0;
            v45 = sin(v47), v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
            v46 = cos(v47), v14 = COERCE_AS(__typeof__(v14),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
        v14 = (float)(PSEUDO_UNFUSED((float)(v11 - v6) *
                                     (float)(0x1.0000000000000p+0f - v46))) +
              (float)((float)((float)(v46 + v45) + -0x1.0000000000000p+0f) *
                      (float)(v6 - v6));
      }
      return v14 / v8;
    case 6:
      v48 = *(_DWORD*)(a1 + 12);
      if (v48 == 3) {
        GameRoutine_61c7b0(v12),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else if (v48 == 2) {
        v14 = math_61c6f0(v12, v6, v11);
      }
      else if (v48 != 1 && (v49 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v50 = v10 / a3, v51 = CScriptArray_GetSize(v49), v12 = v50,
                v51 > 2)) {
        v85 = (float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v14 = math_61c920(v50, v6, v11, *v85);
      }
      else {
        v14 = GameRoutine_61c620(v12, v6, v11);
      }
      return v14 / v8;
    case 7:
      v33 = *(_DWORD*)(a1 + 12);
      if (v33 == 3) {
        v14 = math_61cab0(v12, v6, v11);
      }
      else if (v33 == 2) {
        v62 = v12;
        v63 = v11 - v6;
        v64 = sqrt(0x1.0000000000000p+0 - v62 * v62);
        *(float*)&v62 =
            sqrt(0x1.0000000000000p+0 -
                 (v62 + -0x1.0000000000000p+0) * (v62 + -0x1.0000000000000p+0));
        v14 = (float)((float)((float)(v64 + *(float*)&v62) +
                              -0x1.0000000000000p+0f) *
                      v63) -
              (float)(PSEUDO_UNFUSED(v63 *
                                     (float)(v64 + -0x1.0000000000000p+0f)));
      }
      else if (v33 != 1 && (v34 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v35 = v10 / a3, v36 = CScriptArray_GetSize(v34), v12 = v35,
                v36 > 2)) {
        v78 = (float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v79 = v35;
        v80 = sqrt(0x1.0000000000000p+0 - v79 * v79);
        *(float*)&v79 =
            sqrt(0x1.0000000000000p+0 -
                 (v79 + -0x1.0000000000000p+0) * (v79 + -0x1.0000000000000p+0));
        v14 = (float)((float)((float)(v80 + *(float*)&v79) +
                              -0x1.0000000000000p+0f) *
                      (float)(*v78 - v6)) -
              (float)(PSEUDO_UNFUSED((float)(v11 - v6) *
                                     (float)(v80 + -0x1.0000000000000p+0f)));
      }
      else {
        v14 = math_61c9f0(v12, v6, v11);
      }
      return v14 / v8;
    case 8:
      v56 = *(_DWORD*)(a1 + 12);
      if (*(_BYTE*)(a1 + 36) != 0) {
        v57 = *(float*)(a1 + 32);
      }
      else {
        v57 = 0x1.0000000000000p+1f;
      }
      if (v56 == 3) {
        v14 = math_61cc40(v12, v6, v11, v57);
      }
      else {
        if (v56 == 2) {
          v13 =
              (float)(PSEUDO_UNFUSED(
                  (float)(v11 - v6) *
                  (float)(v12 *
                          (float)(v12 +
                                  (float)(v57 *
                                          (float)(v12 +
                                                  -0x1.0000000000000p+0f)))))) +
              (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                          v12 * -0x1.8000000000000p+1f)) +
                                      (float)(v57 *
                                              (float)(0x1.0000000000000p+0f -
                                                      v12))) +
                              0x1.8000000000000p+1f) *
                      (float)(v11 - v6));
          goto LABEL_14;
        }
        if (v56 == 1 || (v58 = *(_QWORD*)(a1 + 24)) == 0 ||
            (v59 = v12, v60 = CScriptArray_GetSize(v58), v12 = v59, v60 <= 2)) {
          v13 =
              (float)(PSEUDO_UNFUSED(
                  (float)(v11 - v6) *
                  (float)(v12 *
                          (float)(v12 +
                                  (float)(v57 *
                                          (float)(v12 +
                                                  -0x1.0000000000000p+0f)))))) +
              (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                          v12 * -0x1.8000000000000p+1f)) +
                                      (float)(v57 *
                                              (float)(0x1.0000000000000p+0f -
                                                      v12))) +
                              0x1.8000000000000p+1f) *
                      (float)(v6 - v6));
          goto LABEL_14;
        }
        v14 =
            v59 *
            (float)((float)(PSEUDO_UNFUSED(
                        (float)(v11 - v6) *
                        (float)(v59 *
                                (float)(v59 +
                                        (float)(v57 *
                                                (float)(v59 +
                                                        -0x1.0000000000000p+0f)))))) +
                    (float)((float)((float)((float)(PSEUDO_UNFUSED(
                                                v59 * -0x1.8000000000000p+1f)) +
                                            (float)(v57 *
                                                    (float)(0x1.0000000000000p+0f -
                                                            v59))) +
                                    0x1.8000000000000p+1f) *
                            (float)(*(float*)CScriptArray_At_1971f0(
                                        *(_QWORD*)(a1 + 24), 2u) -
                                    v6)));
      }
      return v14 / v8;
    case 9:
      v19 = *(_DWORD*)(a1 + 12);
      if (v19 == 3) {
        GameRoutine_61ce90(v12),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      else if (v19 == 2) {
        v14 = math_61cdc0(v12, v6, v11);
      }
      else if (v19 != 1 && (v20 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v21 = v10 / a3, v22 = CScriptArray_GetSize(v20), v12 = v21,
                v22 > 2)) {
        v72 = (float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v14 = math_61d030(v21, v6, v11, *v72);
      }
      else {
        v14 = math_61cce0(v12, v6, v11);
      }
      return v14 / v8;
    case 0xA:
      v52 = *(_DWORD*)(a1 + 12);
      if (v52 == 3) {
        v14 = math_61d2d0(v12, v6, v11);
      }
      else if (v52 == 2) {
        v14 = math_61d200(v12, v6, v11);
      }
      else if (v52 != 1 && (v53 = *(_QWORD*)(a1 + 24)) != 0 &&
               (v54 = v10 / a3, v55 = CScriptArray_GetSize(v53), v12 = v54,
                v55 > 2)) {
        v86 = (float*)CScriptArray_At_1971f0(*(_QWORD*)(a1 + 24), 2u),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
        v14 = math_61d4b0(v54, v6, v11, *v86);
      }
      else {
        v14 = math_61d120(v12, v6, v11);
      }
      return v14 / v8;
    default:
      v13 = v11 - v6;
    LABEL_14:
      v14 = v12 * v13;
      return v14 / v8;
    }
  }
  return v4;
}

__attribute__((swiftcall)) void task_17d8b50(PSEUDO_X8 x8_, int a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v4;
  int v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  char v16;

  if (a1 <= 1) {
    v4 = 1;
  }
  else {
    v4 = a1;
  }
  if (v4 >= 12) {
    v5 = 12;
  }
  else {
    v5 = v4;
  }
  v14 = 1;
  v15 = 2;
  v16 = 1;
  task_17d8560((void*)(a3), v5, a2, &v14);
  if (GameData_2265aa0 != 0) {
    v6 = (__int64*)(GameData_2265aa0 + 24LL * (unsigned int)(v5 - 1));
    v7 = *(unsigned __int8*)v6;
    v8 = v7 >> 1;
    if ((v7 & 1) != 0) {
      v8 = v6[1];
    }
    if (a3 != v6 && v8 != 0) {
      if ((*(_BYTE*)a3 & 1) != 0) {
        if ((v7 & 1) != 0) {
          v13 = v6[2];
        }
        else {
          v13 = (__int64)v6 + 1;
        }
        SpineModel_64dde0(a3, v13, v8);
      }
      else if ((v7 & 1) != 0) {
        GameRoutine_64df20(a3, v6[2], v6[1]);
      }
      else {
        v10 = *v6;
        v11 = v6[1];
        v12 = v6[2];
        a3[1] = v11;
        a3[2] = v12;
        *a3 = v10;
      }
    }
  }
}

__attribute__((swiftcall)) void task_17d8c30(PSEUDO_X8 x8_, int a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  char v18;

  if (a1 <= 1) {
    v4 = 1;
  }
  else {
    v4 = a1;
  }
  if (v4 >= 31) {
    v5 = 31;
  }
  else {
    v5 = v4;
  }
  v16 = 1;
  v17 = 2;
  v18 = 1;
  task_17d8560((void*)(a3), v5, a2, &v16);
  if (GameData_2265aa0 != 0) {
    v6 = GameData_2265aa0 + 24LL * (unsigned int)(v5 - 1);
    v7 = *(unsigned __int8*)(v6 + 288);
    v8 = *(_QWORD*)(v6 + 296);
    v9 = (__int64*)(v6 + 288);
    v10 = v7 >> 1;
    if ((v7 & 1) != 0) {
      v10 = v8;
    }
    if (a3 != v9 && v10 != 0) {
      if ((*(_BYTE*)a3 & 1) != 0) {
        if ((v7 & 1) != 0) {
          v15 = v9[2];
        }
        else {
          v15 = (__int64)v9 + 1;
        }
        SpineModel_64dde0(a3, v15, v10);
      }
      else if ((v7 & 1) != 0) {
        GameRoutine_64df20(a3, v9[2], v8);
      }
      else {
        v12 = *v9;
        v13 = v9[1];
        v14 = v9[2];
        a3[1] = v13;
        a3[2] = v14;
        *a3 = v12;
      }
    }
  }
}

__attribute__((swiftcall)) void task_17d8d20(PSEUDO_X8 x8_, int a1, __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned int v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  char v17;

  if ((a1 & ~(a1 >> 31)) >= 23) {
    v4 = 23;
  }
  else {
    v4 = a1 & ~(a1 >> 31);
  }
  v15 = 1;
  v16 = 2;
  v17 = 1;
  task_17d8560((void*)(a3), v4, a2, &v15);
  if (GameData_2265aa0 != 0) {
    v5 = GameData_2265aa0 + 24LL * v4;
    v6 = *(unsigned __int8*)(v5 + 1032);
    v7 = *(_QWORD*)(v5 + 1040);
    v8 = (__int64*)(v5 + 1032);
    v9 = v6 >> 1;
    if ((v6 & 1) != 0) {
      v9 = v7;
    }
    if (a3 != v8 && v9 != 0) {
      if ((*(_BYTE*)a3 & 1) != 0) {
        if ((v6 & 1) != 0) {
          v14 = v8[2];
        }
        else {
          v14 = (__int64)v8 + 1;
        }
        SpineModel_64dde0(a3, v14, v9);
      }
      else if ((v6 & 1) != 0) {
        GameRoutine_64df20(a3, v8[2], v7);
      }
      else {
        v11 = *v8;
        v12 = v8[1];
        v13 = v8[2];
        a3[1] = v12;
        a3[2] = v13;
        *a3 = v11;
      }
    }
  }
}

void task_17e41e0()
{
  int OperationModeEv;
  char v1;
  __int64* v2;
  int PerformanceModeEv;
  int v4;
  __int64 v5;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  int v21;
  int v22;
  char v23;
  __int64 v24;
  bool v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int* v31;
  int v32;
  int v33;
  int v34;
  unsigned __int16 v35;
  char v36;
  unsigned __int16 v37[2];
  unsigned __int16 v38;
  int v39;
  _BYTE v40[4];

  if ((nn_os_TryWaitLightEvent((__int64)&GameData_22660d0) & 1) != 0) {
    OperationModeEv = nn_oe_GetOperationMode();
    GameData_21759e8 = OperationModeEv;
    if (OperationModeEv == 1) {
      GameData_226b000 = 0;
      if (*game_sound_g_game_sound_ptr[0] != 0) {
        *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 92) = 0;
      }
      if (*(_QWORD*)game_g_game_setting_ptr != 0) {
        *(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 1104LL) = 1;
      }
    }
    else if (OperationModeEv == 0) {
      GameData_226b000 = 1;
      if (*game_sound_g_game_sound_ptr[0] != 0) {
        *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 92) = 1;
      }
    }
  }
  v1 = nn_os_TryWaitLightEvent((__int64)&GameData_22660dc);
  v2 = game_g_frame_clock_ptr[0];
  if ((v1 & 1) != 0) {
    PerformanceModeEv = nn_oe_GetPerformanceMode();
    if (PerformanceModeEv == 1) {
      GameData_2266114 = 0;
    }
    else {
      if (PerformanceModeEv != 0) {
        goto LABEL_53;
      }
      GameData_2266114 = 1;
    }
    nn_os_TryWaitLightEvent((__int64)&GameData_22660e8);
    v4 = (unsigned __int8)GameData_2266114;
  }
  else {
    if (GameData_226b001 != 1) {
      goto LABEL_53;
    }
    v4 = (unsigned __int8)GameData_2266114;
  }
  if ((v4 & 1) != 0 || GameData_2266118 != 0) {
    v6 = v4 ^ 1;
    if (GameData_2266118 == 1 && (v6 & 1) != 0) {
      LODWORD(v5) = 1;
    }
    else if (GameData_2266118 == 2 && (v6 & 1) != 0) {
      LODWORD(v5) = 2;
    }
    else {
      v7 = GameData_2266118 | v6;
      if (GameData_2266118 == 1) {
        v8 = v4;
      }
      else {
        v8 = 0;
      }
      if (((unsigned __int8)v4 & (GameData_2266118 == 2)) != 0) {
        LODWORD(v5) = 5;
      }
      else {
        LODWORD(v5) = 3;
      }
      if ((v8 & 1) != 0) {
        LODWORD(v5) = 4;
      }
      if (v7 == 0) {
        LODWORD(v5) = 3;
      }
    }
  }
  else {
    LODWORD(v5) = 0;
  }
  v9 = *v2;
  if (GameData_2266110 != 0) {
    v5 = (unsigned int)v5;
  }
  else {
    v5 = 5;
  }
  v10 = (unsigned int)v5 < 2 && GameData_2266110 == 1;
  v11 = 3;
  if (!v10) {
    v11 = v5;
  }
  v12 = &GameData_21fdf18[2 * v11];
  v14 = *v12;
  v13 = v12[1];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = *(_QWORD*)(v9 + 16624);
  *(_QWORD*)(v9 + 16616) = v14;
  *(_QWORD*)(v9 + 16624) = v13;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
  }
  v16 = *(int**)(v9 + 16616);
  if (v16 == nullptr) {
    v16 = *(int**)(v9 + 16632);
  }
  v17 = v16[3];
  *(_DWORD*)(v9 + 13320) = v16[2];
  *(_DWORD*)(v9 + 13324) = v17;
  v19 = *v16;
  v18 = v16[1];
  *(_DWORD*)(v9 + 13328) = v19;
  *(_DWORD*)(v9 + 13332) = v18;
LABEL_53:
  if ((nn_os_TryWaitLightEvent((__int64)&GameData_22660e8) & 1) != 0) {
    if ((GameData_2266114 & 1) != 0 || GameData_2266118 != 0) {
      v21 = (unsigned __int8)GameData_2266114 ^ 1;
      if (GameData_2266118 == 1 && (v21 & 1) != 0) {
        LODWORD(v20) = 1;
      }
      else if (GameData_2266118 == 2 && (v21 & 1) != 0) {
        LODWORD(v20) = 2;
      }
      else {
        v22 = GameData_2266118 | v21;
        if (GameData_2266118 == 1) {
          v23 = GameData_2266114;
        }
        else {
          v23 = 0;
        }
        if (((unsigned __int8)GameData_2266114 & (GameData_2266118 == 2)) !=
            0) {
          LODWORD(v20) = 5;
        }
        else {
          LODWORD(v20) = 3;
        }
        if ((v23 & 1) != 0) {
          LODWORD(v20) = 4;
        }
        if (v22 == 0) {
          LODWORD(v20) = 3;
        }
      }
    }
    else {
      LODWORD(v20) = 0;
    }
    v24 = *v2;
    if (GameData_2266110 != 0) {
      v20 = (unsigned int)v20;
    }
    else {
      v20 = 5;
    }
    v25 = (unsigned int)v20 < 2 && GameData_2266110 == 1;
    v26 = 3;
    if (!v25) {
      v26 = v20;
    }
    v27 = &GameData_21fdf18[2 * v26];
    v29 = *v27;
    v28 = v27[1];
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                memory_order_relaxed);
    }
    v30 = *(_QWORD*)(v24 + 16624);
    *(_QWORD*)(v24 + 16616) = v29;
    *(_QWORD*)(v24 + 16624) = v28;
    if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak(v30);
    }
    v31 = *(int**)(v24 + 16616);
    if (v31 == nullptr) {
      v31 = *(int**)(v24 + 16632);
    }
    v32 = v31[3];
    *(_DWORD*)(v24 + 13320) = v31[2];
    *(_DWORD*)(v24 + 13324) = v32;
    v34 = *v31;
    v33 = v31[1];
    *(_DWORD*)(v24 + 13328) = v34;
    *(_DWORD*)(v24 + 13332) = v33;
  }
  v40[0] = 0;
  v39 = 0;
  v38 = 0;
  if ((unsigned int)nn_vi_QueryDisplayHdrStatus(
          (__int64)v40, (__int64)&v39, (__int64)&v38, GameData_22660f8) == 0) {
    v37[0] = 0;
    if (v40[0] == 1) {
      nn_vi_QueryDisplayHdrPaperWhite((__int64)v37, GameData_22660f8);
      v35 = v37[0];
      v36 = v40[0];
    }
    else {
      v35 = 0;
      v36 = 0;
    }
    GameRoutine_17d8e00((__int64)&GameData_2265aa8, GameData_21759e8, v36 & 1,
                        v39, v38, v35);
  }
  GameData_226b001 = 0;
}

__int64 task_17e45e0()
{
  GameData_2265f00 = GameData_212d288[0] + 16;
  GameData_2265f08 = 0;
  nn_os_InitializeLightEvent(&GameData_22660d0, 0, 1);
  GameRoutine_2b0();
  nn_os_InitializeLightEvent(&GameData_22660dc, 0, 1);
  GameRoutine_2b0();
  nn_os_InitializeLightEvent(&GameData_22660e8, 0, 1);
  return GameRoutine_2b0();
}

#pragma GCC visibility pop
