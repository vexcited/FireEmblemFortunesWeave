#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1847710(__int64, int, __int64);
__int64 GameSubquestData_125a000(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20e5c58[])();
extern __int64 (*game_menu_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_QuestBoardMenuItem_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
void ProcQuestBoard_18485e0();
__int64 ProcQuestBoard_Unknown128(__int64 a1);
bool ProcQuestBoard_Unknown144(__int64 a1);

void ProcQuestBoard_18485e0()
{
  if (GameData_2241720 != 0) {
    *(_BYTE*)(GameData_2241720 + 1688) = 1;
  }
}

__int64 ProcQuestBoard_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      144, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_DWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_DWORD*)(v3 + 40) = -1;
  *(_QWORD*)v3 = game_menu_anonymous_EmptyMenuItem_vtable;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v13 = nullptr;
  v14 = 0;
  v12 = nullptr;
  result = GameSubquestData_125a000(*(_QWORD*)GameData_212c7b0[0], &v12, 1);
  v6 = v12;
  v7 = v13;
  if (v12 != v13) {
    do {
      v8 = *v6++;
      v9 = fw_memory_HeapManager_Allocate(*v2, 176, 16, 0);
      GameRoutine_1847710(v9, 1, v8);
      *(_QWORD*)v9 = game_menu_anonymous_QuestBoardMenuItem_vtable;
      *(_BYTE*)(v9 + 160) = 0;
      *(_QWORD*)(v9 + 144) = GameData_20e5c58;
      result = GameRoutine_16e0c00(a1, v9);
    } while (v6 != v7);
    v6 = v12;
  }
  if (v6 != nullptr) {
    v10 = *v2;
    v13 = v6;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(v10 + v11, v6);
  }
  return result;
}

bool ProcQuestBoard_Unknown144(__int64 a1)
{
  __int64 v1;
  _BOOL8 result;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 336);
  result = false;
  if (v1 != 0 &&
      *(__int64 (***)())v1 == game_menu_anonymous_QuestBoardMenuItem_vtable) {
    v3 = **(_QWORD**)(v1 + 152);
    if (*(_WORD*)(v3 + 128) != 0 &&
        game_gmap_SpotMgr_FindSpot(*(_QWORD*)(*(_QWORD*)(v3 + 136) + 8LL)) !=
            0) {
      return true;
    }
  }
  return result;
}

#pragma GCC visibility pop
