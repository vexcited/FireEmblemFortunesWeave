#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_212fe68;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CombatCharacterTurn_DeletingDestructor(_QWORD* a1);

__int64 CombatCharacterTurn_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;

  *a1 = GameData_212fe68 + 16;
  v1 = a1[3];
  if (v1 != 0) {
    std___1___shared_weak_count___release_weak(v1);
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
