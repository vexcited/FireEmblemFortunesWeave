#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084a50(_QWORD, _QWORD);
__int64 GameRoutine_109d5e0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21f4d48;
extern _UNKNOWN* GameData_212df10;
extern __int64 (*GameData_2011050[])();
extern __int64 (*game_character_WeaponHoldModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21f4d44;
extern int* GameData_212df08;
void GameRoutine_109d2e0(__int64, __int64, __int64, __int64, unsigned int);
__n128 WeaponHoldModule_Destructor_alt1(_QWORD* a1) __asm__(
    "WeaponHoldModule_Destructor");
__int64 WeaponHoldModule_DeletingDestructor(_QWORD* a1);
__int64 game_character_WeaponHoldModule_Start(_QWORD* a1, __int64 a2,
                                              __int64 a3);
__int64 WeaponHoldModule_112aaa0(__int64 a1);
float32x4_t game_character_WeaponHoldModule_Start_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 __int64 a3);
__int64 GameHr_109d5e0(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 WeaponHoldModule_Destructor(_QWORD* a1);

__int64 WeaponHoldModule_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_character_WeaponHoldModule_vtable;
  GameHr_109d5e0((__int64)(a1 + 3));
  result = a1[6];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 WeaponHoldModule_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_character_WeaponHoldModule_vtable;
  GameRoutine_109d5e0(a1 + 3);
  v2 = a1[6];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
}

__int64 game_character_WeaponHoldModule_Start(_QWORD* a1, __int64 a2,
                                              __int64 a3)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[4];
  _QWORD* v21;

  result = CharacterBuilder_1084a50(a2, a3);
  a1[7] = result;
  if (result != 0) {
    v5 = a1[1];
    if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                              memory_order_acquire) &
         1) == 0) {
      v19 = v5;
      result = __cxa_guard_acquire(&GameData_21f4d48);
      v5 = v19;
      if ((_DWORD)result != 0) {
        GameData_21f4d44 = wld_Crc32(0, "ModelModule", 11);
        result = __cxa_guard_release(&GameData_21f4d48);
        v5 = v19;
      }
    }
    v7 = *(_QWORD*)(v5 + 504);
    v6 = *(_QWORD*)(v5 + 512);
    v8 = v6;
    for (i = v6; i != v7; i -= 16) {
      v10 = *(_DWORD*)(i - 16);
      v8 -= 16;
      if (v10 == GameData_21f4d44) {
        if (v6 != v8) {
          v11 = *(_QWORD*)(v8 + 8);
          if (v11 != 0) {
            v12 = *(_QWORD*)(v11 + 24);
            ++*(_DWORD*)(v12 + 500);
            v13 = *(_QWORD**)(v12 + 168);
            v14 = *(_QWORD*)(*v13 + 8LL);
            if (v14 != 0) {
              v15 = *(_QWORD*)(v14 + 32) + 2LL;
            }
            else {
              v15 = 0;
            }
            v16 = v13[3];
            v17 = a1[1];
            v21 = v20;
            a1[8] = v16 + 32;
            v20[0] = GameData_2011050;
            v20[1] = a1;
            GameRoutine_109d2e0((__int64)(a1 + 3), v17, v15, (__int64)v20, 0);
            result = (__int64)v21;
            if (v21 == v20) {
              v18 = 32;
            }
            else {
              if (v21 == nullptr) {
                return result;
              }
              v18 = 40;
            }
            return (*(__int64 (**)(__int64))(*v21 + v18))((__int64)v21);
          }
        }
        return result;
      }
    }
  }
  return result;
}

__int64 WeaponHoldModule_112aaa0(__int64 a1)
{
  __int64 v1;
  unsigned __int8 explicit;
  int* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  int v9;
  __int64 v10;
  int v12;
  __int64 v13;
  __int64 v14;

  v1 = *(_QWORD*)(a1 + 8);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                  memory_order_acquire);
  v3 = GameData_212df08;
  if ((explicit & 1) == 0) {
    v13 = v1;
    v14 = a1;
    v12 = __cxa_guard_acquire(GameData_212df10);
    v3 = GameData_212df08;
    v1 = v13;
    a1 = v14;
    if (v12 != 0) {
      *GameData_212df08 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release(GameData_212df10);
      v3 = GameData_212df08;
      v1 = v13;
      a1 = v14;
    }
  }
  v4 = *v3;
  v6 = *(_QWORD*)(v1 + 504);
  v5 = *(_QWORD*)(v1 + 512);
  v7 = v5;
  for (i = v5; i != v6; i -= 16) {
    v9 = *(_DWORD*)(i - 16);
    v7 -= 16;
    if (v9 == v4) {
      if (v5 != v7) {
        v10 = *(_QWORD*)(v7 + 8);
        if (v10 != 0) {
          --*(_DWORD*)(*(_QWORD*)(v10 + 24) + 500LL);
        }
      }
      return GameRoutine_109d5e0(a1 + 24);
    }
  }
  return GameRoutine_109d5e0(a1 + 24);
}

float32x4_t game_character_WeaponHoldModule_Start_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2,
                                                                 __int64 a3)
{
  __int64 v3;
  float32x4_t* v4;
  float32x2_t* v5;
  __int64 v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t* v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v3 + 16) == 1) {
    v6 = v3 + 56;
    v4 = *(float32x4_t**)(v3 + 56);
    v5 = *(float32x2_t**)(v6 + 8);
    v7 = *v4;
    v8 = v4[1];
    v9 = *(float32x4_t*)LANES64(*(v5)).n64_u64;
    v10 = *(float32x4_t*)LANES64(v5[2]).n64_u64;
    v11 = v4[2];
    v12 = v4[3];
    v13 = *(float32x4_t*)LANES64(v5[4]).n64_u64;
    v14 = *(float32x4_t*)LANES64(v5[6]).n64_u64;
    v15 = vmlaq_lane_f32(
        vmulq_n_f32(*v4, COERCE_FLOAT(*(_OWORD*)LANES64(*(v5)).n64_u64)), v8,
        COERCE_AS(float32x2_t, LANES64(*(v5)).n64_u64[0]), 1);
    **(_DWORD**)(a3 + 16) &= 0x33FFFFFFu;
    v16 = *(float32x4_t**)a3;
    v17 = vmlaq_laneq_f32(v15, v11, v9, 2);
    v18 = vmlaq_laneq_f32(
        vmlaq_lane_f32(vmulq_n_f32(v7, LANES128(v10).n128_f32[0]), v8,
                       COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]), 1),
        v11, v10, 2);
    v19 = vmulq_n_f32(v7, LANES128(v13).n128_f32[0]);
    *v16 = v17;
    v16[1] = v18;
    result = vaddq_f32(
        v12, vmlaq_laneq_f32(
                 vmlaq_lane_f32(
                     vmulq_n_f32(v7, LANES128(v14).n128_f32[0]), v8,
                     COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]), 1),
                 v11, v14, 2));
    v16[2] = vmlaq_laneq_f32(
        vmlaq_lane_f32(v19, v8,
                       COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]), 1),
        v11, v13, 2);
    v16[3] = result;
  }
  return result;
}

#pragma GCC visibility pop
