#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(__int64);
__int64 game_Unit_Destroy_Unit(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_telop_TelopCausationMerge_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 TelopCausationMergeHero_Unknown44(__int64 result);
__int64 TelopCausationMergeHero_DeletingDestructor(_QWORD* a1);

__int64 TelopCausationMergeHero_Unknown44(__int64 result)
{
  unsigned __int8* v1;
  unsigned int v2;
  bool v3;
  int v4;

  v1 = *(unsigned __int8**)(result + 16);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = v2 > 0x10;
    v4 = (1 << v2) & 0x1CE00;
    if (!v3 && v4 != 0) {
      *(_WORD*)(result + 136) |= 0x80u;
    }
  }
  *(_WORD*)(result + 136) |= 8u;
  return result;
}

__int64 TelopCausationMergeHero_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_telop_TelopCausationMerge_vtable;
  game_Unit_Destroy_Unit(a1 + 104);
  GameRoutine_1386f80((__int64)a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
