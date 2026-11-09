#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64* GameRoutine_820d50(int);
extern __int64 (*game_map_anonymous_TroopMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d648[8];
extern __int64* GameData_212d650[7];
extern __int64* GameData_212d658[6];
__int64 SystemMenuItem_Info_Map_Unknown25(__int64 a1);

__int64 SystemMenuItem_Info_Map_Unknown25(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  _BOOL4 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;

  v2 = GameRoutine_820d50(11);
  if (game_GameModeData_instance_ != 0 &&
      (v3 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v2)) != 0) {
    v4 = *(_DWORD*)(v3 + 32) == 0;
    result = 1;
    if (!v4) {
      return result;
    }
  }
  else {
    result = 1;
  }
  if ((*(_BYTE*)(a1 + 82) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 8);
    v15 = a1;
    v17 = 0;
    v7 = *(_QWORD*)(v6 + 152);
    v16 = 1;
    if (v7 != 0) {
      v8 = v7;
    }
    else {
      v8 = v6;
    }
    v9 = GameRoutine_16eb960(v8, &v15);
    v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         144, 16, 0);
    *(_QWORD*)(v11 + 16) = 0;
    *(_QWORD*)(v11 + 24) = 0;
    *(_QWORD*)(v11 + 32) = 0;
    *(_QWORD*)(v11 + 40) = 0;
    *(_QWORD*)(v11 + 80) = 0;
    *(_QWORD*)(v11 + 88) = 0;
    *(_QWORD*)(v11 + 96) = 0;
    *(_QWORD*)(v11 + 104) = 0;
    *(_QWORD*)(v11 + 112) = 0;
    *(_QWORD*)(v11 + 120) = 0;
    *(_QWORD*)(v11 + 128) = 0;
    *(_QWORD*)(v11 + 136) = 0;
    *(_BYTE*)(v11 + 17) = 0;
    *(_QWORD*)(v11 + 48) = 0;
    *(_QWORD*)(v11 + 56) = 0;
    *(_QWORD*)(v11 + 64) = 0;
    *(_QWORD*)(v11 + 72) = 0;
    *(_WORD*)(v11 + 80) = 257;
    *(_BYTE*)(v11 + 82) = 1;
    *(_QWORD*)v11 = game_map_anonymous_TroopMenuItem_vtable;
    *(_QWORD*)(v11 + 8) = 0;
    GameRoutine_16e0c00(v9, v11);
    v12 = fw_memory_HeapManager_Allocate(*v10, 144, 16, 0);
    *(_QWORD*)(v12 + 16) = 0;
    *(_QWORD*)(v12 + 24) = 0;
    *(_QWORD*)(v12 + 32) = 0;
    *(_QWORD*)(v12 + 40) = 0;
    *(_QWORD*)(v12 + 80) = 0;
    *(_QWORD*)(v12 + 88) = 0;
    *(_QWORD*)(v12 + 96) = 0;
    *(_QWORD*)(v12 + 104) = 0;
    *(_QWORD*)(v12 + 112) = 0;
    *(_QWORD*)(v12 + 120) = 0;
    *(_QWORD*)(v12 + 128) = 0;
    *(_QWORD*)(v12 + 136) = 0;
    *(_BYTE*)(v12 + 17) = 0;
    *(_QWORD*)(v12 + 48) = 0;
    *(_QWORD*)(v12 + 56) = 0;
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 0;
    *(_WORD*)(v12 + 80) = 257;
    *(_BYTE*)(v12 + 82) = 1;
    *(_QWORD*)v12 = GameData_212d648[0] + 2;
    *(_QWORD*)(v12 + 8) = 0;
    GameRoutine_16e0c00(v9, v12);
    v13 = fw_memory_HeapManager_Allocate(*v10, 144, 16, 0);
    *(_QWORD*)(v13 + 16) = 0;
    *(_QWORD*)(v13 + 24) = 0;
    *(_QWORD*)(v13 + 32) = 0;
    *(_QWORD*)(v13 + 40) = 0;
    *(_QWORD*)(v13 + 80) = 0;
    *(_QWORD*)(v13 + 88) = 0;
    *(_QWORD*)(v13 + 96) = 0;
    *(_QWORD*)(v13 + 104) = 0;
    *(_QWORD*)(v13 + 112) = 0;
    *(_QWORD*)(v13 + 120) = 0;
    *(_QWORD*)(v13 + 128) = 0;
    *(_QWORD*)(v13 + 136) = 0;
    *(_BYTE*)(v13 + 17) = 0;
    *(_QWORD*)(v13 + 48) = 0;
    *(_QWORD*)(v13 + 56) = 0;
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 0;
    *(_WORD*)(v13 + 80) = 257;
    *(_BYTE*)(v13 + 82) = 1;
    *(_QWORD*)v13 = GameData_212d650[0] + 2;
    *(_QWORD*)(v13 + 8) = 0;
    GameRoutine_16e0c00(v9, v13);
    v14 = fw_memory_HeapManager_Allocate(*v10, 144, 16, 0);
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)(v14 + 24) = 0;
    *(_QWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_QWORD*)(v14 + 80) = 0;
    *(_QWORD*)(v14 + 88) = 0;
    *(_QWORD*)(v14 + 96) = 0;
    *(_QWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 112) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_QWORD*)(v14 + 128) = 0;
    *(_QWORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 17) = 0;
    *(_QWORD*)(v14 + 48) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 257;
    *(_BYTE*)(v14 + 82) = 1;
    *(_QWORD*)v14 = GameData_212d658[0] + 2;
    *(_QWORD*)(v14 + 8) = 0;
    GameRoutine_16e0c00(v9, v14);
    return 10;
  }
  return result;
}

#pragma GCC visibility pop
