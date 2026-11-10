#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_ThrownObject_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_10a9ec0(__int64*);
__int64 ThrownStraight_DeletingDestructor(_QWORD* a1);

__int64 ThrownStraight_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = &game_combat_ThrownObject_vtable;
  GameRoutine_10a9ec0(a1 + 17);
  v2 = a1[7];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = a1[4];
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

#pragma GCC visibility pop
