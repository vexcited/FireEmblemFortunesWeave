#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_GambitCreateLegion_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GambitCreateLegion_Destructor(__int64 result);
__int64 GambitCreateLegion_DeletingDestructor(__int64 a1);
__int64 GameRoutine_e51940(_QWORD, _QWORD);
extern __int64 (*GameData_1fe61f0[])();
__int64 game_combat_GambitCreateLegion_Run(__int64 a1);
__int64 game_character_1084940(__int64 result, char, float);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__attribute__((swiftcall)) void GambitCreateLegion_Unknown3(PSEUDO_X8 x8_);
void game_combat_GambitCreateLegion_Run_lambda0_Invoke(__int64 a1, __int64 a2);

__int64 game_combat_GambitCreateLegion_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe61f0;
  v4 = v3;
  GameRoutine_e51940(a1, v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      return result;
    }
    v2 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
}

__int64 GambitCreateLegion_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = game_combat_GambitCreateLegion_vtable;
  if ((*(_BYTE*)(result + 64) & 1) != 0 && *(_QWORD*)(result + 80) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  *(_QWORD*)result = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(result + 24) & 1) != 0 && *(_QWORD*)(result + 40) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

__int64 GambitCreateLegion_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_GambitCreateLegion_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 64) & 1) != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
}

__attribute__((swiftcall)) void GambitCreateLegion_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 24;
  strcpy(a1 + 1, "CreateLegion");
}

void game_combat_GambitCreateLegion_Run_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  float v11;
  float v12;
  bool v13;
  float v14;
  float v15;
  __int64* v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  bool v22;
  float v23;
  float v24;
  bool v25;
  float v26;
  float v27;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 136LL);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 144LL);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v4 = *(__int64**)(v2 + 40);
    v5 = *((_DWORD*)v4 + 5);
    v6 = v5 & 0xFFFFFFFD;
    *((_DWORD*)v4 + 5) = v5 & 0xFFFFFFFD;
    if (v5 != (v5 & 0xFFFFFFFD)) {
      v7 = *v4;
      v8 = *(_QWORD*)(*v4 + 8);
      if (v8 != 0) {
        v9 = *(_QWORD*)(v7 + 16);
        v10 = *(_QWORD*)(v8 + 8) == -1 || v9 == 0;
        if (!v10 && *(_QWORD*)(v8 + 8) != -1 && (*(_BYTE*)(v7 + 61) & 1) == 0 &&
            *(_DWORD*)(v7 + 64) != 1 && (*(_BYTE*)(v9 + 342) & 1) != 0) {
          v11 = *((float*)v4 + 9) * *((float*)v4 + 2);
          v12 = fminf(fmaxf(v11, 0x0.0p+0f), 0x1.0000000000000p+0f);
          v13 = v11 >= 0x1.0000000000000p+0f || v11 <= 0x0.0p+0f;
          v14 = (float)(v12 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
          if (!v13) {
            v11 = v14;
          }
          if (v6 != 0) {
            v15 = 0x0.0p+0f;
          }
          else {
            v15 = v11;
          }
          game_character_1084940(v9, 0, v15);
          *(_BYTE*)(*(_QWORD*)(v9 + 8) + 289LL) = v15 > 0x0.0p+0f;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v16 = *(__int64**)(v2 + 40);
    v17 = *((_DWORD*)v16 + 5);
    v18 = v17 & 0xFFFFFFFD;
    *((_DWORD*)v16 + 5) = v17 & 0xFFFFFFFD;
    if (v17 != (v17 & 0xFFFFFFFD)) {
      v19 = *v16;
      v20 = *(_QWORD*)(*v16 + 8);
      if (v20 != 0) {
        v21 = *(_QWORD*)(v19 + 16);
        v22 = *(_QWORD*)(v20 + 8) == -1 || v21 == 0;
        if (!v22 && *(_QWORD*)(v20 + 8) != -1 &&
            (*(_BYTE*)(v19 + 61) & 1) == 0 && *(_DWORD*)(v19 + 64) != 1 &&
            (*(_BYTE*)(v21 + 342) & 1) != 0) {
          v23 = *((float*)v16 + 9) * *((float*)v16 + 2);
          v24 = fminf(fmaxf(v23, 0x0.0p+0f), 0x1.0000000000000p+0f);
          v25 = v23 >= 0x1.0000000000000p+0f || v23 <= 0x0.0p+0f;
          v26 = (float)(v24 * 0x1.3333340000000p-1f) + 0x1.99999a0000000p-3f;
          if (!v25) {
            v23 = v26;
          }
          if (v18 != 0) {
            v27 = 0x0.0p+0f;
          }
          else {
            v27 = v23;
          }
          game_character_1084940(v21, 0, v27);
          *(_BYTE*)(*(_QWORD*)(v21 + 8) + 289LL) = v27 > 0x0.0p+0f;
        }
      }
    }
  }
}

#pragma GCC visibility pop
