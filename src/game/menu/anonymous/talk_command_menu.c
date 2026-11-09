#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_e95140(_QWORD*);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* TalkCommandMenu_Destructor(__int64 a1);
__int64 TalkCommandMenu_DeletingDestructor(__int64 a1);
__int64 TalkCommandMenu_Unknown96(_QWORD* a1);

_QWORD* TalkCommandMenu_Destructor(__int64 a1)
{
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  return GameRoutine_e95140((_QWORD*)(a1 + 1072));
}

__int64 TalkCommandMenu_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  GameRoutine_e95140((_QWORD*)(a1 + 1072));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

__int64 TalkCommandMenu_Unknown96(_QWORD* a1)
{
  (*(void (**)(_QWORD*))(*a1 + 680LL))(a1);
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

#pragma GCC visibility pop
