#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_823980(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_anonymous_MapTransition_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapTransition_Destructor(_QWORD* a1);
__int64 MapTransition_DeletingDestructor(_QWORD* a1);

__int64 MapTransition_Destructor(_QWORD* a1)
{
  __int64 v1;

  v1 = a1[2];
  *a1 = game_map_anonymous_MapTransition_vtable;
  return GameRoutine_823980(a1 + 1, v1);
}

__int64 MapTransition_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[2];
  *a1 = game_map_anonymous_MapTransition_vtable;
  GameRoutine_823980(a1 + 1, v1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
