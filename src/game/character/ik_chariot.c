#include "decomp/pseudo_helpers.h"

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

long double game_character_IKChariot_IKChariot_lambda5_Invoke(__int64 a1,
                                                              __int64 a2,
                                                              _DWORD** a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int128 v7;
  __int64 v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  long double result;
  long double v14;
  __int128 v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  __int64 v19;
  __int64 v20;

  v5 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v5 + 16) == 1 && **(_DWORD**)(v5 + 8) == 0 &&
      *(_QWORD*)(v5 + 24) != 0) {
    v19 = v3;
    v20 = v4;
    *(_QWORD*)&v7 = 0;
    HIDWORD(v7) = 0;
    *a3[2] &= 0x33FFFFFFu;
    v8 = (__int64)*a3;
    DWORD2(v7) = *(_DWORD*)(v5 + 272);
    v14 = *((long double*)*a3 + 3);
    v15 = v7;
    math_Mtx43_SetRotate(&v16, &v15);
    v9 = *(float32x4_t*)(v8 + 16);
    v10 = *(float32x4_t*)(v8 + 32);
    v11 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t*)v8, ((float*)&v16)[0]), v9,
                       (float32x2_t)((uint64_t*)&v16)[0], 1),
        v10, v16, 2);
    v12 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t*)v8, ((float*)&v17)[0]), v9,
                       (float32x2_t)((uint64_t*)&v17)[0], 1),
        v10, v17, 2);
    *(float32x4_t*)(v8 + 32) = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(*(float32x4_t*)v8, ((float*)&v18)[0]), v9,
                       (float32x2_t)((uint64_t*)&v18)[0], 1),
        v10, v18, 2);
    *(float32x4_t*)v8 = v11;
    *(float32x4_t*)(v8 + 16) = v12;
    *(long double*)(v8 + 48) = v14;
    return v14;
  }
  return result;
}

#pragma GCC visibility pop
