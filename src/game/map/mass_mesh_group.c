#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f16a70(_QWORD);
__int64 GameRoutine_f43b80(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_MassMeshGroup_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MassMeshGroup_Destructor(_QWORD* a1);
__int64 MassMeshGroup_DeletingDestructor(_QWORD* a1);

__int64 MassMeshGroup_Destructor(_QWORD* a1)
{
  *a1 = game_map_MassMeshGroup_vtable;
  GameRoutine_f43b80(a1 + 14);
  GameRoutine_f16a70(a1[11]);
  GameRoutine_f16a70(a1[8]);
  GameRoutine_f16a70(a1[5]);
  return GameRoutine_f16a70(a1[2]);
}

__int64 MassMeshGroup_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_map_MassMeshGroup_vtable;
  GameRoutine_f43b80(a1 + 14);
  GameRoutine_f16a70(a1[11]);
  GameRoutine_f16a70(a1[8]);
  GameRoutine_f16a70(a1[5]);
  GameRoutine_f16a70(a1[2]);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
