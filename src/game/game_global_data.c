#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fa87a8[])();
extern __int64 (*game_GameGlobalData_vtable[])();
extern __int64 GameData_21c96c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameGlobalData_unknown_;
extern int GameData_21f17d8;
_QWORD* GameGlobalData_Destructor(_QWORD* result);

_QWORD* GameGlobalData_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  v1 = result;
  *result = game_GameGlobalData_vtable;
  if (game_GameGlobalData_unknown_ != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    game_GameGlobalData_unknown_ = 0;
  }
  *v1 = GameData_1fa87a8;
  if ((_QWORD*)GameData_21c96c0 == v1) {
    GameData_21c96c0 = 0;
    GameData_21f17d8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
