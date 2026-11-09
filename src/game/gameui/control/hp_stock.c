#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_gameui_control_HPStock_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2131b48[2];
__int64 HPStock_DeletingDestructor(__int64 a1);

__int64 HPStock_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_gameui_control_HPStock_vtable;
  GameRoutine_155e140(a1 + 72);
  v2 = *(_QWORD*)(a1 + 168);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_1564060(a1 + 120);
  GameRoutine_1563f90(a1 + 96, *(_QWORD*)(a1 + 104));
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  *(_QWORD*)a1 = GameData_2131b48[0] + 2;
  v4 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
}

#pragma GCC visibility pop
