#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_IKSlopeCrawling_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 IKSlopeCrawling_Destructor(__int64 a1);
__int64 IKSlopeCrawling_DeletingDestructor(__int64 a1);

__n128 IKSlopeCrawling_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_IKSlopeCrawling_vtable;
  result = GameRoutine_109d5e0((unsigned int*)(a1 + 72));
  v3 = *(_QWORD*)(a1 + 96);
  if (v3 != 0) {
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 48);
  if (v4 != 0) {
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 IKSlopeCrawling_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_IKSlopeCrawling_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 72));
  v2 = *(_QWORD*)(a1 + 96);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  v3 = *(_QWORD*)(a1 + 48);
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
