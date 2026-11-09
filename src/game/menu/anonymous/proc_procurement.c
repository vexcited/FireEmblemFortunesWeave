#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_1847710(__int64, int, __int64);
__int64 GameSubquestData_125abc0(_QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125c0c0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_20e5c58[])();
extern __int64 (*game_menu_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_QuestBoardMenuItem_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcProcurement_Unknown128(__int64 a1);

__int64 ProcProcurement_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 result;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;

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
  v14 = nullptr;
  v15 = 0;
  v13 = nullptr;
  v5 = (_QWORD*)GameData_212c7b0[0];
  result = GameSubquestData_125abc0(*(_QWORD*)GameData_212c7b0[0], &v13, 1);
  v7 = v13;
  v8 = v14;
  if (v13 != v14) {
    do {
      v9 = *v7++;
      GameSubquestData_125c0c0(*v5, v9);
      v10 = fw_memory_HeapManager_Allocate(*v2, 176, 16, 0);
      GameRoutine_1847710(v10, 1, v9);
      *(_QWORD*)v10 = game_menu_anonymous_QuestBoardMenuItem_vtable;
      *(_BYTE*)(v10 + 160) = 0;
      *(_QWORD*)(v10 + 144) = GameData_20e5c58;
      result = GameRoutine_16e0c00(a1, v10);
    } while (v7 != v8);
    v7 = v13;
  }
  if (v7 != nullptr) {
    v11 = *v2;
    v14 = v7;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    return nn_mem_StandardAllocator_Free(v11 + v12, v7);
  }
  return result;
}

#pragma GCC visibility pop
