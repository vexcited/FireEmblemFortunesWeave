#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern __int64 (*game_hub_anonymous_HubMenuItem_Escape_vtable[])();
extern __int64 (*game_hub_anonymous_HubMenuItem_ExitGmap_vtable[])();
extern __int64 (*game_hub_anonymous_HubMenuItem_NextTimeline_vtable[])();
extern __int64 GameData_1ad2a61;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
__int64 SystemMenuItem_Assist_Hub_Unknown25(__int64 a1);

__int64 SystemMenuItem_Assist_Hub_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
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
  _QWORD v16[4];

  v3 = *(unsigned __int8*)(a1 + 82);
  result = 1;
  if (v3 == 1) {
    v16[2] = v1;
    v16[3] = v2;
    v6 = *(_QWORD*)(a1 + 8);
    v15 = a1;
    LODWORD(v16[0]) = 1;
    v7 = *(_QWORD*)(v6 + 152);
    *(_QWORD*)((char*)v16 + 4) = 0;
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
    *(_QWORD*)v11 = game_hub_anonymous_HubMenuItem_ExitGmap_vtable;
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
    *(_QWORD*)v12 = game_hub_anonymous_HubMenuItem_Escape_vtable;
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
    *(_QWORD*)v13 = game_hub_anonymous_HubMenuItem_NextTimeline_vtable;
    *(_QWORD*)(v13 + 8) = 0;
    v16[0] = &GameData_1ad2a61;
    v15 = game_HashString(&GameData_1ad2a61);
    if (game_GameModeData_instance_ != 0) {
      v14 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v15);
      if (v14 != 0 && *(_DWORD*)(v14 + 32) != 0) {
        *(_BYTE*)(v13 + 81) = 0;
      }
    }
    GameRoutine_16e0c00(v9, v13);
    return 10;
  }
  return result;
}

#pragma GCC visibility pop
