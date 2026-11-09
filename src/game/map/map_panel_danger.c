#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f14f80(_QWORD);
__int64 GameRoutine_f150c0(_QWORD);
__int64 GameRoutine_f15200(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_map_MapPanelDanger_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelDanger_Destructor(_QWORD* a1);
__int64 MapPanelDanger_DeletingDestructor(_QWORD* a1);

__int64 MapPanelDanger_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[14];
  *a1 = game_map_MapPanelDanger_vtable;
  if (v1 != 0) {
    a1[15] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v1);
  }
  GameRoutine_f14f80(a1[12]);
  GameRoutine_f150c0(a1[9]);
  GameRoutine_f15200(a1[6]);
  return GameRoutine_f15200(a1[3]);
}

__int64 MapPanelDanger_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[14];
  *a1 = game_map_MapPanelDanger_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[15] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  GameRoutine_f14f80(a1[12]);
  GameRoutine_f150c0(a1[9]);
  GameRoutine_f15200(a1[6]);
  GameRoutine_f15200(a1[3]);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, a1);
}

#pragma GCC visibility pop
