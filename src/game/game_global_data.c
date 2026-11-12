#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fa87a8[])();
extern __int64 (*game_GameGlobalData_vtable[])();
extern __int64 GameData_21c96c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameGlobalData_unknown_;
extern int GameData_21f17d8;
_QWORD* GameGlobalData_Destructor_alt1(_QWORD* result) __asm__(
    "GameGlobalData_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GameGlobalData_Destructor(_QWORD* a1);

void GameGlobalData_Destructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_GameGlobalData_vtable;
  if (game_GameGlobalData_unknown_ != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                           v2,
                                       game_GameGlobalData_unknown_);
    game_GameGlobalData_unknown_ = 0;
  }
  *a1 = GameData_1fa87a8;
  if ((_QWORD*)GameData_21c96c0 == a1) {
    GameData_21c96c0 = 0;
    GameData_21f17d8 = 0;
  }
}

#pragma GCC visibility pop
