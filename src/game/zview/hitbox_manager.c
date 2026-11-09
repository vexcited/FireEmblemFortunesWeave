#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*GameData_1fdc378[])();
extern __int64 (*game_zview_HitboxManager_vtable[])();
extern __int64 GameData_220f8a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_220f948;
__int64 HitboxManager_Destructor(_QWORD* a1);

__int64 HitboxManager_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  *a1 = game_zview_HitboxManager_vtable;
  result = nn_os_FinalizeMutex(a1 + 6);
  v3 = a1[2];
  if (v3 != 0) {
    a1[3] = v3;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
  }
  *a1 = GameData_1fdc378;
  if ((_QWORD*)GameData_220f8a8 == a1) {
    GameData_220f8a8 = 0;
    GameData_220f948 = 0;
  }
  return result;
}

#pragma GCC visibility pop
