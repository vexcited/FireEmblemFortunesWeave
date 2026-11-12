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
__int64 MapEventManager_Destructor_alt1(__int64 a1) __asm__(
    "MapEventManager_Destructor");
__int64 MapEventManager_Unknown4(__int64 a1);
__int64 MapEventManager_Unknown2(__int64 a1);
_QWORD* EventManagerBase_Unknown2_alt1(_QWORD* result) __asm__(
    "EventManagerBase_Unknown2");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapEventManager_Destructor(__int64 a1);

void MapEventManager_Destructor(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_map_MapEventManager_vtable;
  *(_QWORD*)(a1 + 8) = GameData_1fd3100;
  v2 = (_QWORD*)(a1 + 8);
  EventManagerBase_Unknown2_alt1((_QWORD*)(a1 + 8));
  *(_WORD*)(a1 + 1576) = 0;
  *(_BYTE*)(a1 + 1578) = 0;
  v3 = 1536;
  *(_QWORD*)(a1 + 1584) = 0;
  *v2 = GameData_2130640[0] + 2;
  do {
    v4 = *(_QWORD*)(a1 + v3 + 16);
    if (v4 != 0) {
      *(_QWORD*)(a1 + v3 + 24) = v4;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v5, v4);
    }
    v3 -= 24;
  } while (v3 != 0);
  v6 = *(_QWORD*)(a1 + 16);
  if (v6 != 0) {
    v7 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 24) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  *(_QWORD*)a1 = GameData_1fd32a0;
  if (GameData_21cd148 == a1) {
    GameData_21cd148 = 0;
    GameData_220b690 = 0;
  }
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

__int64 MapEventManager_Unknown2(__int64 a1)
{
  __int64 result;

  result = EventManagerBase_Unknown2(a1);
  *(_WORD*)(a1 + 1568) = 0;
  *(_BYTE*)(a1 + 1570) = 0;
  *(_QWORD*)(a1 + 1576) = 0;
  return result;
}

#pragma GCC visibility pop
