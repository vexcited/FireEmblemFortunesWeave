#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9a28e0(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fee408[])();
extern __int64 (*game_cmdbtl_CmdBtlSituation_vtable[])();
extern __int64 GameData_21f4cc0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_221d9e0;
__int64 CmdBtlSituation_Destructor(_QWORD* a1);

__int64 CmdBtlSituation_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;

  *a1 = game_cmdbtl_CmdBtlSituation_vtable;
  v2 = GameRoutine_9a28e0(1);
  result = game_VariableManager_SetFlag(v2, 0);
  v4 = a1[5];
  if (v4 != 0) {
    a1[6] = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  *a1 = GameData_1fee408;
  if ((_QWORD*)GameData_21f4cc0 == a1) {
    GameData_21f4cc0 = 0;
    GameData_221d9e0 = 0;
  }
  return result;
}

#pragma GCC visibility pop
