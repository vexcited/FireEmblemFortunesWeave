#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e35470(_QWORD);
__int64 GameRoutine_e42820(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_LegionStackAttack_vtable[])();
extern __int64 (*game_combat_LegionStack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f3c0[7];
__int64 LegionStackAttack_Unknown4(_QWORD* a1);
__int64 LegionStackAttack_Unknown5(__int64 a1);
__int64 LegionStackAttack_Destructor(__int64 a1);
__int64 LegionStackAttack_DeletingDestructor(__int64 a1);
__int64 Signal_d30dc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LegionStackAttack_e35470(__int64 result);
__int64 CharacterAnimator_107a7e0(void);
__int64 GameRoutine_e3f8b0(_QWORD);
__int64 GameRoutine_e41bc0(_QWORD);
__int64 game_combat_LegionStackAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                             __int64 a2);

__int64 LegionStackAttack_Unknown4(_QWORD* a1)
{
  __int64 result;
  int v3;
  __int64 v4;
  __int64 v5;

  result = a1[27];
  v3 = *(_DWORD*)(result + 56) - 1;
  *(_DWORD*)(result + 56) = v3;
  if (v3 == 0) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(result + 48) + 8LL))(result + 48);
  }
  v4 = a1[28];
  a1[27] = 0;
  a1[28] = 0;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1[5] + 120LL);
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_DWORD*)(v5 + 116) = 0;
  return result;
}

__int64 LegionStackAttack_Unknown5(__int64 a1)
{
  char v2;

  if ((GameRoutine_e42820(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL)) & 1) != 0) {
    v2 = *(_BYTE*)(*(_QWORD*)(a1 + 216) + 41LL);
  }
  else {
    v2 = 0;
  }
  return v2 & 1;
}

__int64 LegionStackAttack_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)a1 = game_combat_LegionStackAttack_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  GameRoutine_e35470(a1 + 176);
  GameRoutine_e35470(a1 + 136);
  GameRoutine_e35470(a1 + 96);
  result = GameRoutine_e35470(a1 + 56);
  *(_QWORD*)a1 = game_combat_LegionStack_vtable;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

__int64 LegionStackAttack_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)a1 = game_combat_LegionStackAttack_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  GameRoutine_e35470(a1 + 176);
  GameRoutine_e35470(a1 + 136);
  GameRoutine_e35470(a1 + 96);
  GameRoutine_e35470(a1 + 56);
  *(_QWORD*)a1 = GameData_212f3c0[0] + 2;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 16) & 1) != 0 && *(_QWORD*)(a1 + 32) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

__int64 LegionStackAttack_e35470(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)result;
  if (*(_QWORD*)result != 0 && *(_BYTE*)(result + 12) == 1) {
    v2 = *(_QWORD*)(v1 + 48);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v1 + 56);
      if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
        v5 = *(unsigned __int8*)(result + 16);
        v6 = result;
        v7 = (v5 & 1) == 0;
        v8 = v5 >> 1;
        if (v7) {
          v9 = result + 17;
        }
        else {
          v9 = *(_QWORD*)(result + 32);
        }
        if (v7) {
          v10 = v8;
        }
        else {
          v10 = *(_QWORD*)(result + 24);
        }
        Signal_d30dc0(*(_QWORD*)(v3 + 320), v9, v10,
                      *(unsigned int*)(result + 8));
        result = v6;
      }
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0 && *(_QWORD*)(result + 32) != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

__int64 game_combat_LegionStackAttack_OnEnter_lambda2_Invoke(__int64 result,
                                                             __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
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
  __int64 v22;
  float v23;
  float v24;
  __int64 v25;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(_QWORD**)(v2 + 40);
  v4 = v3[9];
  if (v4 != 0) {
    v5 = v3[15];
    v6 = *(_QWORD*)(v4 + 120);
    v7 = *(float*)(v6 + 16);
    v8 = *(float*)(v6 + 20);
    v9 = v8 - *(float*)(v5 + 20);
    v10 = v7 - *(float*)(v5 + 16);
    v11 = (float)(v9 * v9) + (float)(v10 * v10);
    if (v11 >= 0.00000011921f) {
      v14 = 1.0f / sqrtf(v11);
      v13 = v10 * v14;
      v12 = v9 * v14;
    }
    else {
      v12 = 1.0f;
      v13 = 0.0f;
    }
    v15 = *(float*)(*(_QWORD*)a2 + 32LL);
    result = GameRoutine_e41bc0(v3[13]);
    if (result != 0) {
      v16 = fabsf(v15);
      v17 = v16 * v13;
      v18 = v16 * v12;
      v19 = v7 - v17;
      v20 = v8 - v18;
      result = CharacterAnimator_107a7e0();
      v21 = *(float*)(result + 4);
      v22 = *(_QWORD*)(*(_QWORD*)(v2 + 40) + 120LL);
      *(_QWORD*)(v22 + 120) = 0;
      if (v21 <= 0.0f) {
        *(float*)(v22 + 24) = v19;
        *(float*)(v22 + 28) = v20;
        *(float*)(v22 + 16) = v19;
        *(float*)(v22 + 20) = v20;
        v25 = *(_QWORD*)(v22 + 8);
        *(_DWORD*)(v22 + 116) = 0;
        *(_QWORD*)(v22 + 40) = 0;
        *(_QWORD*)(v22 + 80) = 0;
        *(_QWORD*)(v22 + 88) = 0;
        return GameRoutine_e3f8b0(v25);
      }
      else {
        v23 = *(float*)(v22 + 16);
        v24 = *(float*)(v22 + 20);
        *(_QWORD*)(v22 + 80) = 0;
        *(_QWORD*)(v22 + 88) = 0;
        *(float*)(v22 + 24) = v19;
        *(float*)(v22 + 28) = v20;
        *(_DWORD*)(v22 + 116) = 3;
        *(float*)(v22 + 80) = v21;
        *(float*)(v22 + 40) = v23;
        *(float*)(v22 + 44) = v24;
        *(float*)(v22 + 32) = (float)(1.0f / v21) * (float)(v19 - v23);
        *(float*)(v22 + 36) = (float)(1.0f / v21) * (float)(v20 - v24);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
