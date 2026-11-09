#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5e00(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_207cad8[])();
extern __int64 GameData_225d6f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_225d700;
__int64 CompareInfo_DeletingDestructor(__int64 a1);

__int64 CompareInfo_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)(a1 + 208) = GameData_207cad8;
  if (GameData_225d6f8 == a1) {
    GameData_225d6f8 = 0;
    GameData_225d700 = 0;
  }
  GameRoutine_15e5e00(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
