#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109f1e0(__int64, _BYTE*);
__int64 GameRoutine_109f3c0(_QWORD, _QWORD, _QWORD);
__int64 math_Mtx43_SetRotate(_QWORD, _QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int128 GameData_1a83610;
extern __int64 (*GameData_200c6e0[])();
extern __int64 (*GameData_200c760[])();
extern __int64 (*GameData_200c7e0[])();
extern __int64 (*GameData_200c860[])();
extern __int64 (*GameData_200c8e0[])();
extern __int64 (*GameData_200c960[])();
extern __int64 (*game_character_IKChariot_vtable[])();
void GameRoutine_109d2e0(__int64, __int64, __int64, __int64, unsigned int);
void game_character_IKChariot_IKChariot(__int64 a1, _QWORD* a2, __int64 a3);
__n128 IKChariot_Destructor(__int64 a1);
long double game_character_IKChariot_IKChariot_lambda5_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _DWORD** a3);
__int64 GameRoutine_1085a10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_21a6180;
extern __int64 GameData_212d270;
float GameRoutine_1062d90(float*, float*);
float GameRoutine_a5e890(float, float);
float powf(float, float);
float32x4_t
math_Mtx43_SetRotate_alt1(float32x4_t*,
                          float32x4_t*) __asm__("math_Mtx43_SetRotate");
float IKChariot_Unknown3(__int64 a1, float result);
void game_character_IKChariot_IKChariot_lambda3_Invoke(__int64 a1, __int64 a2,
                                                       int8x16_t** a3);
long double game_character_IKChariot_IKChariot_lambda4_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _DWORD** a3);
__attribute__((swiftcall)) void
    GameRoutine_1085a10_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                             _QWORD) __asm__("GameRoutine_1085a10");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
float32x4_t game_character_IKChariot_IKChariot_lambda0_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              float32x4_t** a3);
void game_character_IKChariot_IKChariot_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       float32x4_t** a3);

void game_character_IKChariot_IKChariot(__int64 a1, _QWORD* a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  const char* v24;
  const char* v25;

  *(_QWORD*)(a1 + 24) = a2;
  *(_DWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_WORD*)(a1 + 16) = 256;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)a1 = game_character_IKChariot_vtable;
  *(_QWORD*)(a1 + 8) = a3;
  *(_DWORD*)(a1 + 136) = -1;
  v4 = a1 + 136;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 72) = -1;
  v5 = a1 + 72;
  *(_DWORD*)(a1 + 104) = -1;
  v6 = a1 + 104;
  *(_DWORD*)(a1 + 168) = -1;
  v7 = a1 + 168;
  *(_DWORD*)(a1 + 200) = -1;
  v8 = a1 + 200;
  *(_DWORD*)(a1 + 232) = -1;
  v9 = a1 + 232;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_DWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_DWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_OWORD*)(a1 + 304) = GameData_1a83610;
  v10 = a2[49];
  v11 = a2[50];
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                              memory_order_relaxed);
    v12 = *(_DWORD*)(v10 + 11784);
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v12 != 7) {
        return;
      }
    }
    else {
      v13 = a2;
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
      a2 = v13;
      if (v12 != 7) {
        return;
      }
    }
  }
  else if (*(_DWORD*)(v10 + 11784) != 7) {
    return;
  }
  v14 = a2[51];
  if (v14 != 0) {
    v15 = a2[56];
    if (v15 != 0 && GameRoutine_109f1e0(a2[51], "Jnt_C_Hip") != 0) {
      v23[0] = "Jnt_C_Hip";
      v23[1] = "Loc_LH_C_Trans";
      v23[2] = "Loc_RH_C_Trans";
      v23[3] = "Jnt_L_Wheel";
      v24 = "Jnt_R_Wheel";
      v25 = "Jnt_C_Fulcrum";
      if ((GameRoutine_109f3c0(v15, v23, 6) & 1) != 0) {
        *(_QWORD*)(a1 + 40) = v15;
        *(_QWORD*)(a1 + 48) = GameRoutine_109f1e0(v15, "Jnt_L_Wheel");
        *(_QWORD*)(a1 + 56) = GameRoutine_109f1e0(v15, "Jnt_R_Wheel");
        v16 = GameRoutine_109f1e0(v15, "Jnt_C_Fulcrum");
        *(_QWORD*)(a1 + 64) = v16;
        if (v16 != 0 && *(_QWORD*)(a1 + 48) != 0 && *(_QWORD*)(a1 + 56) != 0) {
          v23[0] = GameData_200c6e0;
          v23[1] = a1;
          v24 = (const char*)v23;
          GameRoutine_109d2e0(v5, v14, (__int64)"Jnt_C_Hip", (__int64)v23, 0);
          if (v24 == (const char*)v23) {
            v17 = 32;
          }
          else {
            if (v24 == nullptr) {
              goto LABEL_20;
            }
            v17 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v24 + v17))((__int64)v24);
        LABEL_20:
          v23[0] = GameData_200c760;
          v23[1] = a1;
          v24 = (const char*)v23;
          GameRoutine_109d2e0(v6, v15, (__int64)"Jnt_C_Hip", (__int64)v23, 0);
          if (v24 == (const char*)v23) {
            v18 = 32;
          }
          else {
            if (v24 == nullptr) {
              goto LABEL_25;
            }
            v18 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v24 + v18))((__int64)v24);
        LABEL_25:
          v23[0] = GameData_200c7e0;
          v23[1] = a1;
          v24 = (const char*)v23;
          GameRoutine_109d2e0(v4, v15, (__int64)"Loc_LH_C_Trans", (__int64)v23,
                              0);
          if (v24 == (const char*)v23) {
            v19 = 32;
          }
          else {
            if (v24 == nullptr) {
              goto LABEL_30;
            }
            v19 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v24 + v19))((__int64)v24);
        LABEL_30:
          v23[0] = GameData_200c860;
          v23[1] = a1;
          v24 = (const char*)v23;
          GameRoutine_109d2e0(v7, v15, (__int64)"Loc_RH_C_Trans", (__int64)v23,
                              0);
          if (v24 == (const char*)v23) {
            v20 = 32;
          }
          else {
            if (v24 == nullptr) {
              goto LABEL_35;
            }
            v20 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v24 + v20))((__int64)v24);
        LABEL_35:
          v23[0] = GameData_200c8e0;
          v23[1] = a1;
          v24 = (const char*)v23;
          GameRoutine_109d2e0(v8, v15, (__int64)"Jnt_L_Wheel", (__int64)v23, 0);
          if (v24 == (const char*)v23) {
            v21 = 32;
          }
          else {
            if (v24 == nullptr) {
              goto LABEL_40;
            }
            v21 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v24 + v21))((__int64)v24);
        LABEL_40:
          v23[0] = GameData_200c960;
          v23[1] = a1;
          v24 = (const char*)v23;
          GameRoutine_109d2e0(v9, v15, (__int64)"Jnt_R_Wheel", (__int64)v23, 0);
          if (v24 == (const char*)v23) {
            v22 = 32;
          }
          else {
            if (v24 == nullptr) {
            LABEL_45:
              *(_BYTE*)(a1 + 16) = 1;
              return;
            }
            v22 = 40;
          }
          (*(void (**)(__int64))(*(_QWORD*)v24 + v22))((__int64)v24);
          goto LABEL_45;
        }
      }
    }
  }
}

float IKChariot_Unknown3(__int64 a1, float result)
{
  __int64 v2;
  __int64 v5;
  float* v6;
  float v7;
  float v8;
  float v9;
  float v10;

  if (*(_BYTE*)(a1 + 16) == 1) {
    v2 = *(_QWORD*)(a1 + 24);
    if (**(_DWORD**)(a1 + 8) == 0 && v2 != 0) {
      v5 = *(_QWORD*)(v2 + 104);
      v6 = *(float**)GameData_212d270;
      v7 = (float)(*(float*)(v5 + 200) * 0x1.cccccc0000000p+1f) /
           0x1.4000000000000p+5f;
      v8 = 0x1.0000000000000p+0f;
      if (v7 <= 0x1.0000000000000p+0f) {
        v8 = (float)(*(float*)(v5 + 200) * 0x1.cccccc0000000p+1f) /
             0x1.4000000000000p+5f;
      }
      if (v7 >= 0x0.0p+0f) {
        v9 = v8;
      }
      else {
        v9 = 0x0.0p+0f;
      }
      v10 = *(float*)(v5 + 204) + *(float*)(a1 + 352);
      *(float*)(a1 + 352) = v10;
      *(float*)(a1 + 356) =
          v6[78] *
          (float)(v9 * (float)((float)((float)(GameRoutine_a5e890(
                                                   v10 * v6[79],
                                                   0x1.4000000000000p+2f) *
                                               0x1.0000000000000p-1f) +
                                       0x1.0000000000000p-1f) *
                               0x1.99999a0000000p-5f));
      result = v6[80] *
               (float)(v9 * (float)(GameRoutine_a5e890(
                                        -(float)(*(float*)(a1 + 352) * v6[81]),
                                        0x0.0p+0f) *
                                    0x1.99999a0000000p-6f));
      *(float*)(a1 + 360) = result;
    }
  }
  return result;
}

__n128 IKChariot_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __n128 result;
  __int64 v8;

  *(_QWORD*)a1 = game_character_IKChariot_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 232));
  v2 = *(_QWORD*)(a1 + 256);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 200));
  v3 = *(_QWORD*)(a1 + 224);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 168));
  v4 = *(_QWORD*)(a1 + 192);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 136));
  v5 = *(_QWORD*)(a1 + 160);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_109d5e0((unsigned int*)(a1 + 104));
  v6 = *(_QWORD*)(a1 + 128);
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 72));
  v8 = *(_QWORD*)(a1 + 96);
  if (v8 != 0) {
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

float32x4_t game_character_IKChariot_IKChariot_lambda0_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              float32x4_t** a3)
{
  __int64 v3;
  __int64 v4;
  int v6;
  float32x4_t v9;
  int8x16_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  int8x16_t v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t* v32;
  float32x4_t result;
  int v34;
  __int64 v35;
  int8x16_t v36;
  __int64 v37;
  float32x4_t** v38;
  int8x16x2_t v39;
  int8x16x2_t v40;
  int8x16x2_t v41;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v3 + 16) == 1) {
    v4 = *(_QWORD*)(v3 + 24);
    if (**(_DWORD**)(v3 + 8) == 0 && v4 != 0) {
      v6 = *(_DWORD*)(*(_QWORD*)(v4 + 72) + 120LL);
      if (v6 > -77626399) {
        if (v6 == -77626398 || v6 == 1400556095) {
          return result;
        }
      }
      else if (v6 == -972548316 || v6 == -93581017) {
        return result;
      }
      v9 = *(float32x4_t*)(v3 + 304);
      LANES128(v9).n128_f32[1] =
          LANES128(v9).n128_f32[1] + 0x1.0000000000000p-1f;
      v10 = vmulq_f32(v9, v9);
      LANES128(v10).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
              .n64_u64[0];
      LANES128(v10).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
              .n64_u64[0];
      LANES128(v10).n128_u64[1] = LANES128(v10).n128_u64[0];
      v11 = vrsqrteq_f32(v10);
      v12 = vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v10, v11)));
      v13 = vbicq_s8(
          vmulq_f32(v9, vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v10, v12)))),
          vceqzq_f32(v10));
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v38 = a3;
        v37 = v3;
        v36 = v13;
        v34 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v13 = v36;
        v3 = v37;
        a3 = v38;
        if (v34 != 0) {
          v35 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v35;
          __cxa_guard_release_alt1((__int64)&GameData_21a6190),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v13 = v36;
          v3 = v37;
          a3 = v38;
        }
      }
      LANES128(v14).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                               COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v15).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v14).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                    COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      LANES128(v16).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                               COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v15).n128_i8[8] =
          vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      v17 = vmulq_f32(v14, v15);
      v18 = vmulq_f32(v13, COERCE_AS(float32x4_t, GameData_21a6180));
      *(int8x8_t*)&LANES128(v16).n128_i8[8] =
          vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                    COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v15).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v15).n128_i8[8] =
          vqtbl1_s8(v13, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      v19 = vmlsq_f32(v17, v15, v16);
      LANES128(v15).n128_u64[0] = 0x3F0000003F000000LL;
      LANES128(v15).n128_u64[1] = 0x3F0000003F000000LL;
      LANES128(v18).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_u64[0];
      LANES128(v16).n128_u64[0] = 0x3F8000003F800000LL;
      LANES128(v16).n128_u64[1] = 0x3F8000003F800000LL;
      LANES128(v18).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
              .n64_u64[0];
      LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
      v20 = vaddq_f32(v18, v16);
      v21 = vsqrtq_f32(vaddq_f32(v20, v20));
      v22 = vdivq_f32(v19, v21);
      LANES128(v22).n128_u32[3] = LANES128_OF(vmulq_f32(v21, v15)).n128_u32[3];
      LANES128(v21).n128_u64[0] = 0x3400000034000000LL;
      LANES128(v21).n128_u64[1] = 0x3400000034000000LL;
      v23 = vbslq_s8(vcgeq_f32(v21, v20),
                     COERCE_AS(int8x16_t, GameData_1a82dd0), v22);
      v24 = v23;
      LANES128(v24).n128_u32[3] = 0;
      LANES128(v20).n128_u64[0] =
          LANES64_OF(
              vrev64_s32(COERCE_AS(int32x2_t, LANES128(v23).n128_u64[0])))
              .n64_u64[0];
      LANES128(v22).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
              .n64_u64[0];
      LANES128(v25).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
              .n64_u64[0];
      LANES128(v26).n128_u64[0] =
          LANES64_OF(vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v20).n128_i8[8] =
          vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
      *(int8x8_t*)&LANES128(v22).n128_i8[8] =
          vqtbl1_s8(v24, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
      LANES128(v25).n128_u64[1] = LANES128(v20).n128_u64[1];
      LANES128(v26).n128_u64[1] = LANES128(v22).n128_u64[1];
      v27 = vmulq_f32(v20, v20);
      v39.val[1] = vmulq_f32(v22, v22);
      v28 = vmulq_f32(v25, v24);
      v29 = vmulq_laneq_f32(v26, v23, 3);
      v30 = vaddq_f32(v28, v28);
      v31 = vaddq_f32(v29, v29);
      v40.val[0] = vaddq_f32(v31, v30);
      v40.val[1] = vsubq_f32(v30, v31);
      v39.val[0] = vsubq_f32(
          COERCE_AS(float32x4_t, GameData_1a837f0),
          vaddq_f32(vaddq_f32(v39.val[1], v39.val[1]), vaddq_f32(v27, v27)));
      LANES128(v41.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v40, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
              .n64_u64[0];
      LANES128(v39.val[1]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v40, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v41.val[1]).n128_i8[8] =
          vqtbl2_s8(v40, COERCE_AS(int8x8_t, 0x706050413121110LL));
      *(int8x8_t*)&LANES128(v39.val[1]).n128_i8[8] =
          vqtbl2_s8(v40, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
      v41.val[0] = v39.val[0];
      LANES128(v30).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v30).n128_i8[8] =
          vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
      LANES128(v31).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v31).n128_i8[8] =
          vqtbl2_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
      LANES128(v40.val[0]).n128_u64[0] =
          LANES64_OF(vqtbl2_s8(v39, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
              .n64_u64[0];
      *(int8x8_t*)&LANES128(v40.val[0]).n128_i8[8] =
          vqtbl2_s8(v39, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
      LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
      v32 = *a3;
      v39.val[0] = vsubq_f32((*a3)[3], *(float32x4_t*)(v3 + 336));
      v39.val[0] = vaddq_f32(
          *(float32x4_t*)(v3 + 320),
          vaddq_f32(
              vmlaq_laneq_f32(
                  vmlaq_lane_f32(
                      vmulq_n_f32(v30, LANES128(v39.val[0]).n128_f32[0]), v31,
                      COERCE_AS(float32x2_t, LANES128(v39.val[0]).n128_u64[0]),
                      1),
                  v40.val[0], v39.val[0], 2),
              COERCE_AS(float32x4_t, 0)));
      v40.val[1] = (*a3)[1];
      v41.val[1] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v30, COERCE_FLOAT(**a3)), v31,
                         COERCE_AS(float32x2_t, LANES128(*((*a3))).n128_u64[0]),
                         1),
          v40.val[0], **a3, 2);
      v39.val[1] = vmulq_n_f32(v30, LANES128(v40.val[1]).n128_f32[0]);
      result = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              vmulq_n_f32(v30, COERCE_FLOAT(*(_OWORD*)&(*a3)[2])), v31,
              COERCE_AS(float32x2_t, LANES128((*a3)[2]).n128_u64[0]), 1),
          v40.val[0], (*a3)[2], 2);
      *v32 = v41.val[1];
      v32[1] = vmlaq_laneq_f32(
          vmlaq_lane_f32(
              v39.val[1], v31,
              COERCE_AS(float32x2_t, LANES128(v40.val[1]).n128_u64[0]), 1),
          v40.val[0], v40.val[1], 2);
      v32[2] = result;
      v32[3] = v39.val[0];
    }
  }
  return result;
}

void game_character_IKChariot_IKChariot_lambda1_Invoke(__int64 a1, __int64 a2,
                                                       float32x4_t** a3)
{
  __int64 v3;
  float32x4_t* v5;
  float32x4_t v6;
  __int64 v7;
  float32x4_t v8;
  __int128 v9;
  float32x4_t v10;
  float32x4_t v11;
  float v12;
  float32x4_t v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int8x16_t* v18;
  __int128 v19;
  int8x16_t v20;
  float32x4_t v21;
  __int64 v22;
  float32x4_t v23;
  int8x16_t v24;
  float32x4_t v25;
  __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  int8x16_t v43;
  float32x4_t v44;
  int8x16_t v45;
  float v46;
  __int64 v47;
  float32x4_t v48;
  __int128 v49;
  float v50;
  int8x16_t v51;
  float32x4_t v52;
  float32x4_t v53;
  unsigned __int64 v54;
  float32x4_t v55;
  float32x4_t v56;
  int8x16_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  int8x16_t v61;
  int8x16_t v62;
  float v63;
  float v64;
  float v65;
  bool v66;
  float v67;
  float v68;
  float32x4_t v69;
  float32x4_t v70;
  int8x16_t v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float v76;
  int8x16_t v77;
  float32x4_t v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  int8x16_t v83;
  float32x4_t v84;
  float32x4_t v85;
  float32x4_t v86;
  float32x4_t v87;
  __int128 v88;
  int v89;
  __int64 v90;
  float32x4_t v91;
  float v92;
  float32x4_t v93;
  float32x4_t v94;
  float32x4_t v95;
  float32x4_t v96;
  int8x16_t v97;
  float v98;
  float32x4_t v99;
  int8x16_t v100;
  float32x4_t v101;
  int8x16_t v102;
  int8x16x2_t v103;
  int8x16x2_t v104;
  int8x16x2_t v105;

  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v3 + 16) != 1) {
    return;
  }
  if (**(_DWORD**)(v3 + 8) != 0 || *(_QWORD*)(v3 + 24) == 0) {
    return;
  }
  LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
  v5 = *a3;
  v6 = *(float32x4_t*)(v3 + 288);
  v7 = *(_QWORD*)(v3 + 24);
  v8 = (*a3)[3];
  *(_QWORD*)(v3 + 336) = LANES128(v8).n128_u64[0];
  v9 = *(_OWORD*)(v3 + 336);
  *((_QWORD*)&v9 + 1) = LANES128(v8).n128_u32[2];
  *(_OWORD*)(v3 + 336) = v9;
  v10 = v5[3];
  v11 = vsubq_f32(v6, v10);
  LODWORD(v12) = HIDWORD(LANES128(v5[3]).n128_u64[0]);
  v13 = vsubq_f32(v10, v6);
  v14 = -0x1.921fb60000000p+2f;
  v15 = sqrtf(LANES128_OF(vmulq_f32(v11, v11)).n128_f32[2] +
              (float)(LANES128(v11).n128_f32[0] * LANES128(v11).n128_f32[0])) /
        (float)((float)(v12 - *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 104) + 8LL) +
                                        308LL)) *
                0x1.921fb60000000p+2f);
  if ((float)(LANES128_OF(vmulq_f32(*v5, v13)).n128_f32[2] +
              (float)(LANES128(v13).n128_f32[0] * COERCE_FLOAT(*v5))) >=
      0x0.0p+0f) {
    v16 = v15;
  }
  else {
    v16 = -v15;
  }
  v17 = *(float*)(v3 + 272) + (float)(v16 * 0x1.921fb60000000p+2f);
  *(float*)(v3 + 272) = v17;
  if (v17 > 0x1.921fb60000000p+2f) {
    goto LABEL_12;
  }
  if (v17 < -0x1.921fb60000000p+2f) {
    v14 = 0x1.921fb60000000p+2f;
  LABEL_12:
    *(float*)(v3 + 272) = v17 + v14;
  }
  *(_DWORD*)(v3 + 288) = LANES128(v10).n128_u32[0];
  *(float*)(v3 + 292) = v12;
  v18 = *(int8x16_t**)(v3 + 48);
  v19 = *(_OWORD*)(v3 + 288);
  *((_QWORD*)&v19 + 1) = LANES128(v10).n128_u32[2];
  *(_OWORD*)(v3 + 288) = v19;
  v20 = v18[3];
  LANES128(v21).n128_u64[0] = LANES128(v20).n128_u32[0] | 0x4348000000000000LL;
  LANES128(v21).n128_u64[1] = LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u32[0];
  v101 = v21;
  LANES128(v20).n128_u32[1] = -1027080192;
  LANES128(v20).n128_u64[1] = LANES128(v21).n128_u64[1];
  v100 = v20;
  GameRoutine_1085a10_alt1((void*)(&v99), v7 + 160, &v101, &v100, 0);
  v23 = v99;
  v22 = *(_QWORD*)(v3 + 24);
  LANES128(v23).n128_u32[3] = 0;
  if (LANES128(v99).n128_f32[1] == -0x1.9000000000000p+6f) {
    LANES128(v23).n128_u32[1] =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v22 + 104) + 8LL) + 308LL);
  }
  v96 = v23;
  v24 = *(int8x16_t*)(*(_QWORD*)(v3 + 56) + 48LL);
  LANES128(v25).n128_u64[0] = LANES128(v24).n128_u32[0] | 0x4348000000000000LL;
  LANES128(v25).n128_u64[1] = LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u32[0];
  v101 = v25;
  LANES128(v24).n128_u32[1] = -1027080192;
  LANES128(v24).n128_u64[1] = LANES128(v25).n128_u64[1];
  v100 = v24;
  GameRoutine_1085a10_alt1((void*)(&v99), v22 + 160, &v101, &v100, 0);
  v27 = v99;
  v26 = *(_QWORD*)(v3 + 24);
  LANES128(v27).n128_u32[3] = 0;
  if (LANES128(v99).n128_f32[1] == -0x1.9000000000000p+6f) {
    LANES128(v27).n128_u32[1] =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v26 + 104) + 8LL) + 308LL);
  }
  v28 = v5[3];
  v91 = v27;
  v92 = vmuls_lane_f32(
      0x1.0000000000000p-1f,
      COERCE_AS(float32x2_t, LANES128_OF(vaddq_f32(v96, v27)).n128_u64[0]), 1);
  v93 = v28;
  LANES128(v28).n128_f32[1] = v92;
  v29 = *(int8x16_t*)(*(_QWORD*)(v3 + 64) + 48LL);
  v94 = v28;
  LANES128(v28).n128_u64[0] = LANES128(v29).n128_u32[0] | 0x4348000000000000LL;
  LANES128(v28).n128_u64[1] = LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u32[0];
  v101 = v28;
  LANES128(v29).n128_u32[1] = -1027080192;
  LANES128(v29).n128_u64[1] = LANES128(v28).n128_u64[1];
  v100 = v29;
  GameRoutine_1085a10_alt1((void*)(&v99), v26 + 160, &v101, &v100, 0);
  v30 = v99;
  LANES128(v30).n128_u32[3] = 0;
  if (LANES128(v99).n128_f32[1] == -0x1.9000000000000p+6f) {
    LANES128(v30).n128_u32[1] =
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 104LL) + 8LL) +
                   308LL);
  }
  v31 = v94;
  v32 = vsubq_f32(v30, v94);
  v33 = vmulq_f32(v32, v32);
  LANES128(v33).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v33, v33, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v33).n128_u64[0])))
          .n64_u64[0];
  LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
  v34 = vrsqrteq_f32(v33);
  v35 = vmulq_f32(v34, vrsqrtsq_f32(v34, vmulq_f32(v33, v34)));
  v36 = vbicq_s8(
      vmulq_f32(v32, vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(v33, v35)))),
      vceqzq_f32(v33));
  v37 = vsubq_f32(v96, v91);
  v38 = vmulq_f32(v37, v37);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
          .n64_u64[0];
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v38).n128_u64[0])))
          .n64_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v38).n128_u64[0];
  v39 = vrsqrteq_f32(v38);
  v40 = vmulq_f32(v39, vrsqrtsq_f32(v39, vmulq_f32(v38, v39)));
  v41 = vbicq_s8(
      vmulq_f32(v37, vmulq_f32(v40, vrsqrtsq_f32(v40, vmulq_f32(v38, v40)))),
      vceqzq_f32(v38));
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v36).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v42).n128_i8[8] =
      vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v44).n128_i8[8] =
      vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v43 = vmlsq_f32(vmulq_f32(v38, v42), v44, v40);
  LANES128(v44).n128_u64[0] = 0;
  v45 = vbslq_s8(
      vdupq_lane_s32(
          COERCE_AS(int32x2_t,
                    LANES128_OF(
                        vcgtq_f32(v44, vdupq_lane_s32(
                                           COERCE_AS(int32x2_t,
                                                     LANES128(v43).n128_u64[0]),
                                           1)))
                        .n128_u64[0]),
          0),
      vnegq_f32(v43), v43);
  v46 = *(float*)(v3 + 32);
  if (v46 > 0x0.0p+0f) {
    v97 = v45;
    LANES128(v44).n128_f32[0] =
        powf(0x1.99999a0000000p-1f, v46 * 0x1.df851e0000000p+4f);
    v31 = v94;
    v45 = v97;
    LANES128(v44).n128_f32[0] =
        0x1.0000000000000p+0f - LANES128(v44).n128_f32[0];
  }
  v47 = *(_QWORD*)(v3 + 40);
  v48 = vmlaq_n_f32(*(float32x4_t*)(v3 + 304),
                    vsubq_f32(v45, *(float32x4_t*)(v3 + 304)),
                    LANES128(v44).n128_f32[0]);
  *(_QWORD*)(v3 + 304) = LANES128(v48).n128_u64[0];
  v49 = *(_OWORD*)(v3 + 304);
  *((_QWORD*)&v49 + 1) = LANES128(v48).n128_u32[2];
  *(_OWORD*)(v3 + 304) = v49;
  v50 = v92 +
        (float)((float)(LANES128(v5[3]).n128_f32[1] - *(float*)(v47 + 308)) +
                *(float*)(v3 + 356));
  LANES128(v31).n128_f32[1] = v50;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v95 = v31;
    v98 = v50;
    v89 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190);
    v31 = v95;
    v50 = v98;
    if (v89 != 0) {
      v90 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v90;
      __cxa_guard_release_alt1((__int64)&GameData_21a6190);
      v31 = v95;
      v50 = v98;
    }
  }
  v51 = *(int8x16_t*)(v3 + 304);
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v53).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v52).n128_i8[8] =
      vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v54 = LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v53).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v55).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v56 = vmulq_f32(v53, v52);
  v57 = vmulq_f32(COERCE_AS(float32x4_t, GameData_21a6180), v51);
  *(int8x8_t*)&LANES128(v55).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v52).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v51, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v57).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v57, v57, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
          .n64_u64[0];
  LANES128(v51).n128_u64[0] = 0x3F8000003F800000LL;
  LANES128(v51).n128_u64[1] = 0x3F8000003F800000LL;
  LANES128(v52).n128_u64[1] = v54;
  LANES128(v57).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v57).n128_u64[0])))
          .n64_u64[0];
  v58 = vmlsq_f32(v56, v52, v55);
  LANES128(v55).n128_u64[0] = 0x3F0000003F000000LL;
  LANES128(v55).n128_u64[1] = 0x3F0000003F000000LL;
  LANES128(v57).n128_u64[1] = LANES128(v57).n128_u64[0];
  v59 = vaddq_f32(v57, v51);
  v60 = vsqrtq_f32(vaddq_f32(v59, v59));
  v61 = vdivq_f32(v58, v60);
  LANES128(v61).n128_u32[3] = LANES128_OF(vmulq_f32(v60, v55)).n128_u32[3];
  LANES128(v60).n128_u64[0] = 0x3400000034000000LL;
  LANES128(v60).n128_u64[1] = 0x3400000034000000LL;
  v62 = vbslq_s8(vcgeq_f32(v60, v59), COERCE_AS(int8x16_t, GameData_1a82dd0),
                 v61);
  v63 = (float)(PSEUDO_UNFUSED(*(float*)(v3 + 360) * 0x1.0000000000000p-1f)) +
        (float)(roundf((float)(*(float*)(v3 + 360) * 0x1.0000000000000p-1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v63 < -0x1.921fb60000000p+0f) {
    v64 = -0x1.0000000000000p+0f;
  }
  else {
    v64 = 0x1.0000000000000p+0f;
  }
  v65 = -0x1.921fb60000000p+1f - v63;
  if (v63 >= -0x1.921fb60000000p+0f) {
    v65 = v63;
  }
  v66 = v63 <= 0x1.921fb60000000p+0f;
  v67 = 0x1.921fb60000000p+1f - v63;
  if (v63 > 0x1.921fb60000000p+0f) {
    v68 = -0x1.0000000000000p+0f;
  }
  else {
    v68 = v64;
  }
  v69 = *v5;
  v70 = v5[1];
  if (!v66) {
    v65 = v67;
  }
  v71 = vmulq_f32(v69, v69);
  LANES128(v71).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
          .n64_u64[0];
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
          .n64_u64[0];
  LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
  v72 = vrsqrteq_f32(v71);
  v73 = vmulq_f32(v72, vrsqrtsq_f32(v72, vmulq_f32(v71, v72)));
  v74 = vbicq_s8(
      vmulq_f32(v69, vmulq_f32(v73, vrsqrtsq_f32(v73, vmulq_f32(v71, v73)))),
      vceqzq_f32(v71));
  LANES128(v73).n128_f32[0] = v65 * v65;
  LANES128(v75).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v76 =
      v68 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
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
                                                                                            LANES128(
                                                                                                v73)
                                                                                                .n128_f32
                                                                                                    [0])) *
                                                                            LANES128(
                                                                                v73)
                                                                                .n128_f32
                                                                                    [0])) *
                                                         LANES128(v73)
                                                             .n128_f32[0])) *
                                         LANES128(v73).n128_f32[0])) *
                      LANES128(v73).n128_f32[0]) +
              0x1.0000000000000p+0f);
  v77 = vmulq_n_f32(
      v74,
      v65 *
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c190 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c190) -
                                                                        (float)((float)(*((float*)
                                                                                              GameData_212c190 +
                                                                                          1) -
                                                                                        (float)(*(float*)
                                                                                                    GameData_212c190 *
                                                                                                (float)(v65 *
                                                                                                        v65))) *
                                                                                (float)(v65 *
                                                                                        v65))) *
                                                             (float)(v65 *
                                                                     v65))) *
                                             (float)(v65 * v65))) *
                          (float)(v65 * v65)) +
                  0x1.0000000000000p+0f));
  LANES128(v74).n128_u64[0] =
      LANES64_OF(
          vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v77).n128_u64[0]), 1))
          .n64_u64[0];
  LANES128(v77).n128_f32[3] = v76;
  LANES128(v73).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v102 = v77;
  LANES128(v73).n128_u64[1] = LANES128(v73).n128_u64[0];
  LANES128(v78).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  v79 = vmulq_f32(v73, v77);
  *(int8x8_t*)&LANES128(v78).n128_i8[8] =
      vqtbl1_s8(v77, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v77).n128_u64[0] = LANES128(v62).n128_u64[0];
  LANES128(v77).n128_u64[1] = LANES128(v75).n128_u64[0];
  v80 = vmlaq_f32(v79, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v77, v78));
  LANES128(v78).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v102, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v78).n128_u64[1] = LANES128(v74).n128_u64[0];
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v62, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v75).n128_u64[1] = LANES128(v74).n128_u64[0];
  LANES128(v74).n128_u64[1] = LANES128(v62).n128_u64[0];
  LANES128(v81).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v102, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v81).n128_i8[8] =
      vqtbl1_s8(v102, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v82 = vmlsq_f32(vmlaq_f32(v80, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v74, v78)),
                  v81, v75);
  v83 = v82;
  LANES128(v83).n128_u32[3] = 0;
  LANES128(v75).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v77).n128_u64[0] =
      LANES64_OF(vrev64_s32(COERCE_AS(int32x2_t, LANES128(v82).n128_u64[0])))
          .n64_u64[0];
  LANES128(v102).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0xB0A09080B0A0908LL)))
          .n64_u64[0];
  LANES128(v74).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v75).n128_i8[8] =
      vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v77).n128_u64[1] = LANES128(v75).n128_u64[1];
  LANES128(v102).n128_u64[1] = LANES128(v74).n128_u64[0];
  v84 = vmulq_f32(v75, v83);
  LANES128(v83).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v83, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v85 = vmulq_f32(v77, v77);
  v104.val[1] = vmulq_f32(v102, v102);
  v103.val[1] = vaddq_f32(v84, v84);
  LANES128(v83).n128_u64[1] = LANES128(v74).n128_u64[0];
  v86 = vmulq_laneq_f32(v83, v82, 3);
  v87 = vaddq_f32(v86, v86);
  v104.val[0] = vsubq_f32(
      COERCE_AS(float32x4_t, GameData_1a837f0),
      vaddq_f32(vaddq_f32(v104.val[1], v104.val[1]), vaddq_f32(v85, v85)));
  v105.val[0] = vaddq_f32(v103.val[1], v87);
  v105.val[1] = vsubq_f32(v103.val[1], v87);
  LANES128(v103.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x1B1A191803020100LL)))
          .n64_u64[0];
  LANES128(v104.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x171615140B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v103.val[1]).n128_i8[8] =
      vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x706050413121110LL));
  *(int8x8_t*)&LANES128(v104.val[1]).n128_i8[8] =
      vqtbl2_s8(v105, COERCE_AS(int8x8_t, 0x1F1E1D1C1F1E1D1CLL));
  v103.val[0] = v104.val[0];
  LANES128(v105.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0x1312111003020100LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v105.val[0]).n128_i8[8] =
      vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0xF0E0D0C17161514LL));
  LANES128(v105.val[1]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0x70605041B1A1918LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v105.val[1]).n128_i8[8] =
      vqtbl2_s8(v103, COERCE_AS(int8x8_t, 0xF0E0D0C1F1E1D1CLL));
  LANES128(v103.val[0]).n128_u64[0] =
      LANES64_OF(vqtbl2_s8(v104, COERCE_AS(int8x8_t, 0x1716151413121110LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v103.val[0]).n128_i8[8] =
      vqtbl2_s8(v104, COERCE_AS(int8x8_t, 0xF0E0D0C0B0A0908LL));
  v104.val[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v105.val[0], COERCE_FLOAT(*(_OWORD*)&v5[2])),
                     v105.val[1],
                     COERCE_AS(float32x2_t, LANES128(v5[2]).n128_u64[0]), 1),
      v103.val[0], v5[2], 2);
  *v5 = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v105.val[0], LANES128(v69).n128_f32[0]),
                     v105.val[1],
                     COERCE_AS(float32x2_t, LANES128(v69).n128_u64[0]), 1),
      v103.val[0], v69, 2);
  v5[1] = vmlaq_laneq_f32(
      vmlaq_lane_f32(vmulq_n_f32(v105.val[0], LANES128(v70).n128_f32[0]),
                     v105.val[1],
                     COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]), 1),
      v103.val[0], v70, 2);
  v5[2] = v104.val[1];
  v5[3] = v31;
  *(float*)(v3 + 324) = v50;
  *(_DWORD*)(v3 + 320) = LANES128(v93).n128_u32[0];
  v88 = *(_OWORD*)(v3 + 320);
  *((_QWORD*)&v88 + 1) = LANES128(v93).n128_u32[2];
  *(_OWORD*)(v3 + 320) = v88;
}

void game_character_IKChariot_IKChariot_lambda3_Invoke(__int64 a1, __int64 a2,
                                                       int8x16_t** a3)
{
  __int64 v3;
  int8x16_t* v5;
  int8x16_t v6;
  float v7;
  __int64 v8;
  float32x4_t v9;
  float v10;
  __int64 v11;
  int8x16_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float v19;
  int8x16_t v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  int v26;
  __int64 v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  bool v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float* v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  float32x4_t v59;
  int8x16_t v60;
  float v61;
  float32x4_t v62;
  float32x4_t v63;
  float32x4_t v64;
  _QWORD v65[4];
  int8x16_t v66;
  float32x4_t v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;

  v58 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v58 + 16) == 1) {
    v68 = v57;
    v69 = v56;
    v70 = v55;
    v71 = v54;
    v72 = v52;
    v73 = v53;
    v3 = v58;
    if (**(_DWORD**)(v58 + 8) == 0 && *(_QWORD*)(v58 + 24) != 0) {
      LANES128(*(a3[2])).n128_u32[0] &= 0x33FFFFFFu;
      v5 = *a3;
      v6 = (*a3)[3];
      v7 = *(float*)(*(_QWORD*)(v58 + 40) + 308LL);
      v8 = *(_QWORD*)(v58 + 24) + 160LL;
      LANES128(v9).n128_u64[0] =
          LANES128(v6).n128_u32[0] | 0x4348000000000000LL;
      LANES128(v9).n128_u64[1] = LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u32[0];
      v62 = v9;
      LANES128(v6).n128_u32[1] = -1027080192;
      LANES128(v6).n128_u64[1] = LANES128(v9).n128_u64[1];
      v67 = v6;
      GameRoutine_1085a10_alt1((void*)(v65), v8, &v62, &v67, 0);
      v10 = *((float*)v65 + 1);
      v11 = *(_QWORD*)(v3 + 24);
      v59 = *(float32x4_t*)&v65[2];
      if (*((float*)v65 + 1) == -0x1.9000000000000p+6f) {
        v10 = *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 104) + 8LL) + 308LL);
      }
      v12 = vaddq_f32(v5[3], v5[2]);
      LANES128(v13).n128_u64[0] =
          LANES128(v12).n128_u32[0] | 0x4348000000000000LL;
      LANES128(v13).n128_u64[1] =
          LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u32[0];
      v67 = v13;
      LANES128(v12).n128_u32[1] = -1027080192;
      LANES128(v12).n128_u64[1] = LANES128(v13).n128_u64[1];
      v66 = v12;
      GameRoutine_1085a10_alt1((void*)(&v62), v11 + 160, &v67, &v66, 0);
      v14 = vaddq_f32(v59, v63);
      v15 = vmulq_f32(v14, v14);
      LANES128(v15).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
              .n64_u64[0];
      LANES128(v15).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
              .n64_u64[0];
      LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
      v16 = vrsqrteq_f32(v15);
      v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v15, v16)));
      v18 = vbicq_s8(
          vmulq_f32(v14,
                    vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v15, v17)))),
          vceqzq_f32(v15));
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                memory_order_acquire) &
           1) == 0) {
        v60 = v18;
        v26 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6190);
        v18 = v60;
        if (v26 != 0) {
          v27 = *((_QWORD*)GameData_212c558 + 1);
          *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
          *((_QWORD*)&GameData_21a6180 + 1) = v27;
          __cxa_guard_release_alt1((__int64)&GameData_21a6190);
          v18 = v60;
        }
      }
      v19 = -0x1.0000000000000p+0f;
      v20 = vmulq_f32(v18, COERCE_AS(float32x4_t, GameData_21a6180));
      LANES128(v20).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
              .n64_u64[0];
      v21 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_f32[0];
      if (v21 > 0x1.0000000000000p+0f) {
        v21 = 0x1.0000000000000p+0f;
      }
      if (v21 >= -0x1.0000000000000p+0f) {
        v19 = v21;
      }
      v22 = sqrtf(0x1.0000000000000p+0f - (float)(v19 * v19));
      if (v19 >= 0x0.0p+0f) {
        v28 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
        v29 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
        v30 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 +
                        8);
        v31 = v19 / v22;
        v32 = v22 / v19;
        v33 =
            v32 * (float)((
                              float)((float)((float)((float)(v30 + (float)((float)((
                                                                                       float)((
                                                                                                  float)(v29 + (float)((float)((float)((float)(v28 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v32 * v32)) - *((float*)GameData_212c2f0 + 1)) * (float)(v32 * v32))) * (float)(v32 * v32)) - *(
                                                                                                                                                                                                                                                                                                                   float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4)) *
                                                                                                                       (float)(v32 *
                                                                                                                               v32))) *
                                                                                              (float)(v32 *
                                                                                                      v32)) -
                                                                                   *(float*)((char*)((
                                                                                                 __int128*)0x10LL) +
                                                                                             (_QWORD)
                                                                                                 GameData_212c2f0 +
                                                                                             4)) *
                                                                           (float)(v32 *
                                                                                   v32))) *
                                                     (float)(v32 * v32)) -
                                             *(float*)((char*)((
                                                           __int128*)0x10LL) +
                                                       (_QWORD)
                                                           GameData_212c2f0 +
                                                       12)) *
                                     (float)(v32 * v32)) +
                          0x1.0000000000000p+0f);
        v34 =
            0x1.921fb60000000p+0f -
            (float)(PSEUDO_UNFUSED(
                v31 *
                (float)((float)((float)((float)((float)(v30 +
                                                        (float)((float)((float)((float)(v29 + (float)((
                                                                                                          float)((float)((float)(v28 + (float)((float)((float)(*(float*)GameData_212c2f0 * (float)(v31 * v31)) - *((float*)GameData_212c2f0 +
                                                                                                                                                                                                                   1)) *
                                                                                                                                               (float)(v31 *
                                                                                                                                                       v31))) *
                                                                                                                         (float)(v31 *
                                                                                                                                 v31)) -
                                                                                                                 *(float*)((char*)((
                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                           (_QWORD)
                                                                                                                               GameData_212c2f0 +
                                                                                                                           4)) *
                                                                                                      (float)(v31 *
                                                                                                              v31))) *
                                                                                (float)(v31 *
                                                                                        v31)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v31 *
                                                                        v31))) *
                                                (float)(v31 * v31)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v31 * v31)) +
                        0x1.0000000000000p+0f)));
        if (v19 > 0x1.6a09e60000000p-1f) {
          v24 = v33;
        }
        else {
          v24 = v34;
        }
      }
      else if (v19 >= -0x1.6a09e60000000p-1f) {
        v25 = (float)-v19 / v22;
        v24 = (float)(PSEUDO_UNFUSED(
                  v25 *
                  (float)((float)((float)-(float)(*(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c2f0 +
                                                            12) -
                                                  (float)((float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v25 *
                                                                                                                                                                                                                                                                                                                                                                                                v25))) *
                                                                                                                                                                                                                                                                                                       (float)(v25 *
                                                                                                                                                                                                                                                                                                               v25))) *
                                                                                                                                                                                                                                                                                    (float)(v25 *
                                                                                                                                                                                                                                                                                            v25))) *
                                                                                                                                                                                                                                                            (float)(v25 *
                                                                                                                                                                                                                                                                    v25))) *
                                                                                                                                                                         (float)(v25 *
                                                                                                                                                                                 v25))) *
                                                                          (float)(v25 *
                                                                                  v25))) *
                                                          (float)(v25 * v25))) *
                                  (float)(v25 * v25)) +
                          0x1.0000000000000p+0f))) +
              0x1.921fb60000000p+0f;
      }
      else {
        v23 = (float)-v22 / v19;
        v24 = 0x1.921fb60000000p+1f -
              (float)(PSEUDO_UNFUSED(
                  v23 *
                  (float)((float)((float)-(float)(*(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c2f0 +
                                                            12) -
                                                  (float)((float)(*(float*)((char*)((
                                                                                __int128*)0x10LL) +
                                                                            (_QWORD)
                                                                                GameData_212c2f0 +
                                                                            8) +
                                                                  (float)((float)-(float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 4) - (float)((float)(*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0) + (float)((float)-(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0 + 4) -
                                                                                                                                                                                                                                                                            (float)((
                                                                                                                                                                                                                                                                                        float)(*(
                                                                                                                                                                                                                                                                                                   float*)((char*)((
                                                                                                                                                                                                                                                                                                               _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                           (_QWORD)GameData_212c2f0) +
                                                                                                                                                                                                                                                                                               (float)((float)-(
                                                                                                                                                                                                                                                                                                           float)(*((float*)GameData_212c2f0 + 1) - (float)(*(float*)GameData_212c2f0 * (float)(v23 *
                                                                                                                                                                                                                                                                                                                                                                                                v23))) *
                                                                                                                                                                                                                                                                                                       (float)(v23 *
                                                                                                                                                                                                                                                                                                               v23))) *
                                                                                                                                                                                                                                                                                    (float)(v23 *
                                                                                                                                                                                                                                                                                            v23))) *
                                                                                                                                                                                                                                                            (float)(v23 *
                                                                                                                                                                                                                                                                    v23))) *
                                                                                                                                                                         (float)(v23 *
                                                                                                                                                                                 v23))) *
                                                                          (float)(v23 *
                                                                                  v23))) *
                                                          (float)(v23 * v23))) *
                                  (float)(v23 * v23)) +
                          0x1.0000000000000p+0f)));
      }
      v35 = vmuls_lane_f32(LANES128(v18).n128_f32[2], v18, 2) +
            (float)(LANES128(v18).n128_f32[0] * LANES128(v18).n128_f32[0]);
      v36 = v35 < 0x1.0000000000000p-23f;
      v37 = 0x1.0000000000000p+0f / sqrtf(v35);
      v38 = LANES128(v18).n128_f32[2] * v37;
      if (v36) {
        v39 = 0x0.0p+0f;
      }
      else {
        v39 = LANES128(v18).n128_f32[0] * v37;
      }
      if (v36) {
        v38 = 0x1.0000000000000p+0f;
      }
      LANES128(v66).n128_u64[0] = __PAIR64__(LODWORD(v38), LODWORD(v39));
      LANES128(v62).n128_u64[0] =
          LANES64_OF(
              vzip1_s32(
                  COERCE_AS(int32x2_t, LANES128(v5[2]).n128_u64[0]),
                  COERCE_AS(
                      int32x2_t,
                      LANES128_OF(vextq_s8(v5[2], v5[2], 8u)).n128_u64[0])))
              .n64_u64[0];
      v40 = GameRoutine_1062d90((float*)&v66, (float*)&v62);
      v41 = *(float*)(*(_QWORD*)GameData_212d270 + 208LL);
      if (v41 > 0x0.0p+0f) {
        v42 = -(float)((float)((float)(v40 / 0x1.921fb60000000p+0f) +
                               -0x1.0000000000000p+0f) *
                       v24);
        if (v41 >= 0x1.0000000000000p+0f) {
          v45 = (float*)(v3 + 268);
          goto LABEL_35;
        }
        v43 = *(float*)(v3 + 32);
        if (v43 > 0x0.0p+0f) {
          v61 = -(float)((float)((float)(v40 / 0x1.921fb60000000p+0f) +
                                 -0x1.0000000000000p+0f) *
                         v24);
          v44 = 0x1.0000000000000p+0f -
                powf(0x1.0000000000000p+0f - v41, v43 * 0x1.df851e0000000p+4f);
          v45 = (float*)(v3 + 268);
          if (v44 <= 0x0.0p+0f) {
            v42 = *(float*)(v3 + 268);
          }
          else if (v44 >= 0x1.0000000000000p+0f) {
            v42 = v61;
          }
          else {
            v42 = *(float*)(v3 + 268) +
                  (float)((float)(v61 - *(float*)(v3 + 268)) * v44);
          }
          goto LABEL_35;
        }
      }
      v42 = *(float*)(v3 + 268);
      v45 = (float*)(v3 + 268);
    LABEL_35:
      *v45 = v42;
      v67 = COERCE_AS(float32x4_t, LODWORD(v42));
      math_Mtx43_SetRotate_alt1(&v62, &v67);
      v46 = v62;
      v47 = v63;
      v48 = *v5;
      v49 = v5[1];
      v50 = v5[2];
      v51 = v64;
      LANES128(v5[3]).n128_f32[1] =
          (float)(v10 - v7) + LANES128(v5[3]).n128_f32[1];
      *v5 = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v48, LANES128(v46).n128_f32[0]), v49,
                         COERCE_AS(float32x2_t, LANES128(v46).n128_u64[0]), 1),
          v50, v46, 2);
      v5[1] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v48, LANES128(v47).n128_f32[0]), v49,
                         COERCE_AS(float32x2_t, LANES128(v47).n128_u64[0]), 1),
          v50, v47, 2);
      v5[2] = vmlaq_laneq_f32(
          vmlaq_lane_f32(vmulq_n_f32(v48, LANES128(v51).n128_f32[0]), v49,
                         COERCE_AS(float32x2_t, LANES128(v51).n128_u64[0]), 1),
          v50, v51, 2);
    }
  }
}

long double game_character_IKChariot_IKChariot_lambda4_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _DWORD** a3)
{
  __int64 v5;
  float32x4_t v7;
  __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  long double result;
  long double v14;
  float32x4_t v15;
  struct {
    float32x4_t v16;
    float32x4_t v17;
    float32x4_t v18;
  } v16_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v5 + 16) == 1 && **(_DWORD**)(v5 + 8) == 0 &&
      *(_QWORD*)(v5 + 24) != 0) {
    LANES128(v7).n128_u64[0] = 0;
    LANES128(v7).n128_u32[3] = 0;
    *a3[2] &= 0x33FFFFFFu;
    v8 = (__int64)*a3;
    LANES128(v7).n128_u32[2] = *(_DWORD*)(v5 + 272);
    v14 = *((long double*)*a3 + 3);
    v15 = v7;
    math_Mtx43_SetRotate_alt1(&v16_.v16, &v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v9 = *(float32x4_t*)(v8 + 16);
    v10 = *(float32x4_t*)(v8 + 32);
    v11 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(*(float32x4_t*)v8, LANES128(v16_.v16).n128_f32[0]), v9,
            COERCE_AS(float32x2_t, LANES128(v16_.v16).n128_u64[0]), 1),
        v10, v16_.v16, 2);
    v12 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(*(float32x4_t*)v8, LANES128(v16_.v17).n128_f32[0]), v9,
            COERCE_AS(float32x2_t, LANES128(v16_.v17).n128_u64[0]), 1),
        v10, v16_.v17, 2);
    *(float32x4_t*)(v8 + 32) = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(*(float32x4_t*)v8, LANES128(v16_.v18).n128_f32[0]), v9,
            COERCE_AS(float32x2_t, LANES128(v16_.v18).n128_u64[0]), 1),
        v10, v16_.v18, 2);
    *(float32x4_t*)v8 = v11;
    *(float32x4_t*)(v8 + 16) = v12;
    *(long double*)(v8 + 48) = v14;
    return v14;
  }
  return result;
}

long double game_character_IKChariot_IKChariot_lambda5_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _DWORD** a3)
{
  __int64 v5;
  float32x4_t v7;
  __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  long double result;
  long double v14;
  float32x4_t v15;
  struct {
    float32x4_t v16;
    float32x4_t v17;
    float32x4_t v18;
  } v16_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v5 + 16) == 1 && **(_DWORD**)(v5 + 8) == 0 &&
      *(_QWORD*)(v5 + 24) != 0) {
    LANES128(v7).n128_u64[0] = 0;
    LANES128(v7).n128_u32[3] = 0;
    *a3[2] &= 0x33FFFFFFu;
    v8 = (__int64)*a3;
    LANES128(v7).n128_u32[2] = *(_DWORD*)(v5 + 272);
    v14 = *((long double*)*a3 + 3);
    v15 = v7;
    math_Mtx43_SetRotate_alt1(&v16_.v16, &v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v9 = *(float32x4_t*)(v8 + 16);
    v10 = *(float32x4_t*)(v8 + 32);
    v11 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(*(float32x4_t*)v8, LANES128(v16_.v16).n128_f32[0]), v9,
            COERCE_AS(float32x2_t, LANES128(v16_.v16).n128_u64[0]), 1),
        v10, v16_.v16, 2);
    v12 = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(*(float32x4_t*)v8, LANES128(v16_.v17).n128_f32[0]), v9,
            COERCE_AS(float32x2_t, LANES128(v16_.v17).n128_u64[0]), 1),
        v10, v16_.v17, 2);
    *(float32x4_t*)(v8 + 32) = vmlaq_laneq_f32(
        vmlaq_lane_f32(
            vmulq_n_f32(*(float32x4_t*)v8, LANES128(v16_.v18).n128_f32[0]), v9,
            COERCE_AS(float32x2_t, LANES128(v16_.v18).n128_u64[0]), 1),
        v10, v16_.v18, 2);
    *(float32x4_t*)v8 = v11;
    *(float32x4_t*)(v8 + 16) = v12;
    *(long double*)(v8 + 48) = v14;
    return v14;
  }
  return result;
}

#pragma GCC visibility pop
