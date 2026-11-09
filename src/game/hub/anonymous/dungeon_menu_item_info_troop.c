#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_178e950(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_21319e0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 DungeonMenuItem_Info_Troop_Unknown25(__int64 a1);

__int64 DungeonMenuItem_Info_Troop_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v3 = *(_QWORD*)(v1 + 152);
  }
  else {
    v3 = *(_QWORD*)(a1 + 8);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      544, 16, 0);
  GameRoutine_178e950(v4, a1 + 144);
  GameRoutine_657850(v4, GameData_21319e0, "CmdBtlInfoUnitTroopSequence", 1,
                     v3);
  return 9;
}

#pragma GCC visibility pop
