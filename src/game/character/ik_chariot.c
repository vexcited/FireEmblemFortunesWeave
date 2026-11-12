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
