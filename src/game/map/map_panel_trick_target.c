#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f85d20(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelTrickTarget_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelTrickTarget_Destructor(_QWORD* a1);
__int64 MapPanelTrickTarget_DeletingDestructor(_QWORD* a1);

__int64 MapPanelTrickTarget_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapPanelTrickTarget_vtable;
  return GameRoutine_f85d20(a1[3]);
}

__int64 MapPanelTrickTarget_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_map_MapPanelTrickTarget_vtable;
  GameRoutine_f85d20(a1[3]);
  v1 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v1);
}

#pragma GCC visibility pop
