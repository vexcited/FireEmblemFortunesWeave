#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f9f480(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapDrawOutlineGrid_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapDrawOutlineGrid_Destructor(_QWORD* a1);
__int64 MapDrawOutlineGrid_DeletingDestructor(_QWORD* a1);

__int64 MapDrawOutlineGrid_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapDrawOutlineGrid_vtable;
  GameRoutine_f9f480(a1[6]);
  return GameRoutine_f9f480(a1[3]);
}

__int64 MapDrawOutlineGrid_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_map_MapDrawOutlineGrid_vtable;
  GameRoutine_f9f480(a1[6]);
  GameRoutine_f9f480(a1[3]);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
