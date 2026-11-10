#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f59d40(_QWORD);
extern __int64 (*game_map_MapDrawOutlineBmap_vtable[])();
__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 MapDrawOutlineBmap_DeletingDestructor(_QWORD* a1);

__int64 MapDrawOutlineBmap_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapDrawOutlineBmap_vtable;
  return GameRoutine_f59d40(a1[3]);
}

__n128 MapDrawOutlineBmap_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapDrawOutlineBmap_vtable;
  GameRoutine_f59d40(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

#pragma GCC visibility pop
