#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1045980(_QWORD);
__int64 GameRoutine_1045ac0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_map_MapPanelDeployMove_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelDeployMove_Destructor(_QWORD* a1, long double a2);
__int64 MapPanelDeployMove_DeletingDestructor(_QWORD* a1, long double a2);

__int64 MapPanelDeployMove_Destructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;

  v2 = a1[11];
  *a1 = game_map_MapPanelDeployMove_vtable;
  if (v2 != 0) {
    a1[12] = v2;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  a2);
  }
  GameRoutine_1045980(a1[9]);
  GameRoutine_1045ac0(a1[6]);
  return GameRoutine_1045ac0(a1[3]);
}

__int64 MapPanelDeployMove_DeletingDestructor(_QWORD* a1, long double a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64 v8;

  v2 = a1[11];
  *a1 = game_map_MapPanelDeployMove_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v5 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[12] = v2;
    v6 = 128;
    if (*(_QWORD*)(v5 + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(v5 + v6, a2);
  }
  GameRoutine_1045980(a1[9]);
  GameRoutine_1045ac0(a1[6]);
  GameRoutine_1045ac0(a1[3]);
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
}

#pragma GCC visibility pop
