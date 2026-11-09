#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gameui_control_BattlePopup_vtable)();
extern __int64 (*ui_ILayoutControl_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BattlePopupDamage_DeletingDestructor(__int64 a1);

__int64 BattlePopupDamage_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = &game_gameui_control_BattlePopup_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0 && *(_QWORD*)(a1 + 264) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  GameRoutine_155e140(a1 + 80);
  v4 = *(_QWORD*)(a1 + 176);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 128);
  GameRoutine_1563f90(a1 + 104, *(_QWORD*)(a1 + 112));
  v5 = *(_QWORD*)(a1 + 88);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  *(_QWORD*)a1 = &ui_ILayoutControl_vtable;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7);
}

#pragma GCC visibility pop
