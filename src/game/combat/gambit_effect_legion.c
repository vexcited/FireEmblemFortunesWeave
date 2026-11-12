#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_GambitEffectLegion_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GambitEffectLegion_Destructor_alt1(__int64 result) __asm__(
    "GambitEffectLegion_Destructor");
__int64 GambitEffectLegion_DeletingDestructor_alt1(__int64 a1) __asm__(
    "GambitEffectLegion_DeletingDestructor");
__int64 GameRoutine_e51940(_QWORD, _QWORD);
extern __int64 (*GameData_1fe66c0[])();
__int64 game_combat_GambitEffectLegion_Run(__int64 a1);
__attribute__((swiftcall)) void GambitEffectLegion_Unknown3(PSEUDO_X8 x8_);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GambitEffectLegion_Destructor(__int64 a1);
void GambitEffectLegion_DeletingDestructor(__int64 a1);

__int64 game_combat_GambitEffectLegion_Run(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  v3[0] = GameData_1fe66c0;
  v3[1] = a1;
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

void GambitEffectLegion_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_combat_GambitEffectLegion_vtable;
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 96);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 72);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
}

void GambitEffectLegion_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_combat_GambitEffectLegion_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 80) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 96);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 72);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v6, v5);
    }
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v8, v7);
    }
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v9, a1);
}

__attribute__((swiftcall)) void GambitEffectLegion_Unknown3(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 24;
  strcpy(a1 + 1, "EffectLegion");
}

#pragma GCC visibility pop
