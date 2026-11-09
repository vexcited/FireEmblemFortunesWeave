#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_fa4400(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelSortie_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelSortie_Destructor(_QWORD* a1);
__int64 MapPanelSortie_DeletingDestructor(_QWORD* a1);

__int64 MapPanelSortie_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelSortie_vtable;
  GameRoutine_fa4400(a1[12]);
  GameRoutine_fa4400(a1[9]);
  GameRoutine_fa4400(a1[6]);
  return GameRoutine_fa4400(a1[3]);
}

__int64 MapPanelSortie_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_map_MapPanelSortie_vtable;
  GameRoutine_fa4400(a1[12]);
  GameRoutine_fa4400(a1[9]);
  GameRoutine_fa4400(a1[6]);
  GameRoutine_fa4400(a1[3]);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
