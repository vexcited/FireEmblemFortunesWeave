#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f499b0(_QWORD);
__int64 HubDisposFileReader_Destructor(_QWORD);
extern __int64 (*game_hub_HubReload_vtable[])();
__int64 HubReload_Destructor(_QWORD* a1);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 HubReload_DeletingDestructor(_QWORD* a1);

__int64 HubReload_Destructor(_QWORD* a1)
{
  *a1 = game_hub_HubReload_vtable;
  GameRoutine_f499b0(a1[27]);
  return HubDisposFileReader_Destructor(a1 + 1);
}

__n128 HubReload_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_hub_HubReload_vtable;
  GameRoutine_f499b0(a1[27]);
  HubDisposFileReader_Destructor(a1 + 1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
