#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_21319f8[8];
__int64 BoostFarmMenu_DeletingDestructor(_QWORD* a1);

__int64 BoostFarmMenu_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_21319f8[0];
  *a1 = GameData_21319f8[0] + 2;
  a1[22] = v2 + 149;
  a1[132] = v2 + 175;
  GameRoutine_155e140(a1 + 133);
  v3 = a1[145];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_1564060(a1 + 139);
  GameRoutine_1563f90(a1 + 136, a1[137]);
  v4 = a1[134];
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, a1);
}

#pragma GCC visibility pop
