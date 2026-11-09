#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_743a00(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_anonymous_ProcMapSeqSortie_Pickup_vtable[])();
extern __int64 GameData_21cd108;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Pickup_Destructor(_QWORD* a1);
__int64 Pickup_DeletingDestructor(_QWORD* a1);

__int64 Pickup_Destructor(_QWORD* a1)
{
  a1[2] = 0;
  *a1 = game_map_anonymous_ProcMapSeqSortie_Pickup_vtable;
  a1[1] = -1;
  return GameRoutine_743a00(GameData_21cd108);
}

__int64 Pickup_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  a1[2] = 0;
  *a1 = game_map_anonymous_ProcMapSeqSortie_Pickup_vtable;
  a1[1] = -1;
  GameRoutine_743a00(GameData_21cd108);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
