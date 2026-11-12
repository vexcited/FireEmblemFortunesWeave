#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_UnitEquipScope_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitEquipScope_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "UnitEquipScope_DeletingDestructor");
__int64 GameRoutine_6c6da0_alt1(__int64) __asm__("GameRoutine_6c6da0");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void UnitEquipScope_DeletingDestructor(_QWORD* a1);

void UnitEquipScope_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;

  *a1 = game_UnitEquipScope_vtable;
  v2 = a1[1];
  if (v2 != 0 && *(_QWORD**)(v2 + 2208) == a1) {
    *(_QWORD*)(v2 + 2208) = a1[3];
    v3 = a1[1];
    v4 = *(_DWORD*)(v3 + 416);
    if ((v4 & 0x10000000) == 0) {
      v5 = a1[1];
      *(_DWORD*)(v3 + 416) = v4 | 0x10000000;
      game_6c51e0(v5);
      GameRoutine_6c6da0_alt1(v3);
      game_6c6ec0(v3);
      *(_DWORD*)(v3 + 416) &= ~0x10000000u;
    }
    a1[1] = 0;
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)a1);
}

#pragma GCC visibility pop
