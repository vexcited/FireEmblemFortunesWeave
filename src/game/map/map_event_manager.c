#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 EventManagerBase_Unknown2(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fd3100[])();
extern __int64 (*GameData_1fd32a0[])();
extern __int64 (*game_map_MapEventManager_vtable[])();
extern __int64 GameData_21cd148;
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_2130640[3];
extern int GameData_220b690;
__int64 MapEventManager_Destructor(__int64 a1);
__int64 MapEventManager_Unknown4(__int64 a1);

__int64 MapEventManager_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_map_MapEventManager_vtable;
  *(_QWORD*)(a1 + 8) = GameData_1fd3100;
  v2 = (_QWORD*)(a1 + 8);
  result = EventManagerBase_Unknown2(a1 + 8);
  *(_WORD*)(a1 + 1576) = 0;
  *(_BYTE*)(a1 + 1578) = 0;
  v4 = 1536;
  *(_QWORD*)(a1 + 1584) = 0;
  *v2 = GameData_2130640[0] + 2;
  do {
    v5 = *(_QWORD*)(a1 + v4 + 16);
    if (v5 != 0) {
      *(_QWORD*)(a1 + v4 + 24) = v5;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6);
    }
    v4 -= 24;
  } while (v4 != 0);
  v7 = *(_QWORD*)(a1 + 16);
  if (v7 != 0) {
    v8 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 24) = v7;
    v9 = 128;
    if (*(_QWORD*)(v8 + 200) == 0) {
      v9 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v8 + v9);
  }
  *(_QWORD*)a1 = GameData_1fd32a0;
  if (GameData_21cd148 == a1) {
    GameData_21cd148 = 0;
    GameData_220b690 = 0;
  }
  return result;
}

__int64 MapEventManager_Unknown4(__int64 a1)
{
  __int64 result;

  result = EventManagerBase_Unknown2(a1 + 8);
  *(_WORD*)(a1 + 1576) = 0;
  *(_BYTE*)(a1 + 1578) = 0;
  *(_QWORD*)(a1 + 1584) = 0;
  return result;
}

#pragma GCC visibility pop
