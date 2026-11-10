#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10b5f80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterWeaponAnimator_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterWeaponAnimator_Destructor(__int64 a1);
__int64 AnimLayerCtrlModule_ce3880(__int64, __int64, int);
__int64 game_109f1e0(__int64, _BYTE*, long double, long double, long double,
                     long double, double);
extern int GameData_21d87e8;
extern int GameData_2235720;
float SkeletalBlendCallback_ce4ca0(__int64, int, long double);
float SkeletalBlendCallback_ce4db0(__int64, int, long double);
void CharacterWeaponAnimator_Unknown7(_QWORD* a1, double a2, double a3,
                                      long double a4, long double a5,
                                      double a6);

void CharacterWeaponAnimator_Unknown7(_QWORD* a1, double a2, double a3,
                                      long double a4, long double a5, double a6)
{
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  _QWORD* v10;
  long double v11;
  long double v12;
  __int64 v13;
  __int64 v14;
  float32x4_t* v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  __int64 v20;
  __int64 v21;
  long double v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  float32x4_t v26;
  float32x4_t v27;

  v6 = a1[4];
  if (v6 != 0) {
    v7 = a1[5];
    v8 = *(_QWORD*)(v6 + 8) == -1 || v7 == 0;
    if (!v8 && (*(_BYTE*)(v7 + 342) & 1) != 0 && a1[7] != 0 &&
        *((_DWORD*)a1 + 88) == 1 && *(_QWORD*)(v6 + 8) != -1) {
      v9 = *(_QWORD*)(v7 + 8);
      v10 = a1;
      v11 = *(long double*)(v9 + 464);
      v12 = *(long double*)(v9 + 480);
      v13 = *(_QWORD*)(v7 + 408);
      v26 = *(float32x4_t*)&v11;
      v27 = *(float32x4_t*)&v12;
      if (v13 != 0) {
        v14 = game_109f1e0(v13, "Loc_R_Weapon", v11, v12, a4, a5, a6);
        a1 = v10;
      }
      else {
        v14 = 0;
      }
      if (*(_QWORD*)(v7 + 432) != 0) {
        v15 = (float32x4_t*)game_109f1e0(*(_QWORD*)(v7 + 432), "Jnt_Hand", v11,
                                         v12, a4, a5, a6);
        a1 = v10;
        if (v14 != 0 && v15 != nullptr) {
          LANES128(v16).n128_u64[0] = 0x4120000041200000LL;
          LANES128(v16).n128_u64[1] = 0x4120000041200000LL;
          v17 = vaddq_f32(v27, vmulq_f32(v26, v16));
          v11 = *(long double*)(v14 + 48);
          v18 = vsubq_f32(*(float32x4_t*)&v11, v17);
          v19 = vsubq_f32(v15[3], v17);
          if ((float)(LANES128_OF(vmulq_f32(v18, v18)).n128_f32[2] +
                      (float)(LANES128(v18).n128_f32[0] *
                              LANES128(v18).n128_f32[0])) >
              (float)(LANES128_OF(vmulq_f32(v19, v19)).n128_f32[2] +
                      (float)(LANES128(v19).n128_f32[0] *
                              LANES128(v19).n128_f32[0]))) {
            *(long double*)&v15[3] = v11;
          }
        }
      }
      v20 = a1[4];
      if (v20 != 0 && *(_QWORD*)(v20 + 8) != -1 && (v21 = a1[5]) != 0) {
        if ((*(_BYTE*)(v21 + 341) & 1) != 0) {
          *(float*)&v22 = SkeletalBlendCallback_ce4ca0(a1[7], 0, v11);
          if (*(float*)&v22 >= SkeletalBlendCallback_ce4db0(v10[7], 0, v22)) {
            v23 = v10[7];
            v24 = v10;
            if (v23 != 0) {
              v25 = v10[4];
              if (v25 == 0 || *(_QWORD*)(v25 + 8) == -1 || v10[5] == 0) {
                GameData_2235720 = 0;
              }
              if (v10[11] != 0 || v10[12] != 0 || v10[13] != 0 ||
                  v10[14] != 0 || v10[15] != 0) {
                AnimLayerCtrlModule_ce3880(v23, (__int64)(v10 + 8), 0);
                v24 = v10;
              }
              *((_DWORD*)v24 + 88) = 0;
              *((_DWORD*)v24 + 89) = GameData_21d87e8;
            }
          }
        }
      }
      else {
        GameData_2235720 = 0;
      }
    }
  }
}

__n128 CharacterWeaponAnimator_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_character_CharacterWeaponAnimator_vtable;
  GameRoutine_10b5f80(a1);
  if ((*(_BYTE*)(a1 + 280) & 1) != 0 && *(_QWORD*)(a1 + 296) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  if ((*(_BYTE*)(a1 + 208) & 1) != 0 && *(_QWORD*)(a1 + 224) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  if ((*(_BYTE*)(a1 + 136) & 1) != 0 && *(_QWORD*)(a1 + 152) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
  v7 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v7 != 0) {
    return std___1___shared_weak_count___release_weak(v7);
  }
  return result;
}

#pragma GCC visibility pop
