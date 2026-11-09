#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1657240(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131ac8[5];
__int64 ProcComebackList_Destructor(_QWORD* a1);
__int64 ProcComebackList_DeletingDestructor(_QWORD* a1);

__int64 ProcComebackList_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  a1[133] = GameData_2131ac8[0] + 2;
  v2 = a1[142];
  a1[142] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  if (a1[138] != 0) {
    GameRoutine_1657240(a1 + 138);
    v3 = a1[138];
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v5 = a1[135];
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcComebackList_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  a1[133] = GameData_2131ac8[0] + 2;
  v2 = a1[142];
  a1[142] = 0;
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
  }
  v3 = fw_memory_g_heap_manager_ptr;
  if (a1[138] != 0) {
    GameRoutine_1657240(a1 + 138);
    v4 = a1[138];
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5, v4);
    }
  }
  v6 = a1[135];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, a1);
}

#pragma GCC visibility pop
