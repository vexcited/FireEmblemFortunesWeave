#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_103d5c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelTrickDestroy_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTrickDestroy_Destructor(_QWORD* a1);
__int64 MapPanelTrickDestroy_DeletingDestructor(_QWORD* a1);

__int64 MapPanelTrickDestroy_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTrickDestroy_vtable;
  return GameRoutine_103d5c0(a1[3]);
}

__int64 MapPanelTrickDestroy_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapPanelTrickDestroy_vtable;
  GameRoutine_103d5c0(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

#pragma GCC visibility pop
