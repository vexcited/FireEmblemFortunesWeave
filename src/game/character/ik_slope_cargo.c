#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeCargo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 IKSlopeCargo_Destructor(_QWORD* a1);
__int64 IKSlopeCargo_DeletingDestructor(_QWORD* a1);

__int64 IKSlopeCargo_Destructor(_QWORD* a1)
{
  __int64 result;

  *a1 = game_character_IKSlopeCargo_vtable;
  GameRoutine_109d5e0(a1 + 5);
  result = a1[8];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 IKSlopeCargo_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_character_IKSlopeCargo_vtable;
  GameRoutine_109d5e0(a1 + 5);
  v2 = a1[8];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
