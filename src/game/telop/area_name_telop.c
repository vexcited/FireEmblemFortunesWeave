#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1386f80(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
extern __int64 (*GameData_20c2a50[])();
extern __int64 GameData_2263c30;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AreaNameTelop_Unknown33(__int64 a1);
__int64 AreaNameTelop_Destructor(__int64 a1);
__int64 AreaNameTelop_DeletingDestructor(__int64 a1);

__int64 AreaNameTelop_Unknown33(__int64 a1)
{
  ui_LayoutAccessor_SetPriority(a1 + 168, 80);
  return GameRoutine_155e830(a1 + 168, 0);
}

__int64 AreaNameTelop_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 856);
    if (v1 != 0) {
      v2 = a1;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      a1 = v2;
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20c2a50;
  if (GameData_2263c30 == a1) {
    GameData_2263c30 = 0;
  }
  return GameRoutine_1386f80(a1);
}

__int64 AreaNameTelop_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 840) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 856);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  *(_QWORD*)(a1 + 824) = GameData_20c2a50;
  if (GameData_2263c30 == a1) {
    GameData_2263c30 = 0;
  }
  GameRoutine_1386f80(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5, a1);
}

#pragma GCC visibility pop
