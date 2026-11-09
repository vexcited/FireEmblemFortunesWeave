#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18704b0(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 InfoSubMenuItem_Material_Unknown6(__int64 a1);
__int64 InfoSubMenuItem_Material_Unknown25(__int64 a1);

__int64 InfoSubMenuItem_Material_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;

  v2 = GameRoutine_820d50(10);
  v4 = game_GameModeData_instance_ == 0 ||
       (v3 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) == 0 ||
       *(_DWORD*)(v3 + 32) == 0;
  return v4 & *(_BYTE*)(a1 + 81);
}

__int64 InfoSubMenuItem_Material_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(a1 + 82) != 1) {
    return 1;
  }
  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(v1 + 152) != 0) {
    v2 = *(_QWORD*)(v1 + 152);
  }
  else {
    v2 = *(_QWORD*)(a1 + 8);
  }
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1072, 16, 0);
  GameRoutine_18704b0(v3, 6);
  GameRoutine_657850(v3, GameData_212c730, "MaterialMenu", 1, v2);
  return 9;
}

#pragma GCC visibility pop
