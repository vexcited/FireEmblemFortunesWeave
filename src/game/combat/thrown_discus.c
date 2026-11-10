#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 GameRoutine_109d5e0(unsigned int*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_ThrownDiscus_vtable[])();
extern __int64 (*game_combat_ThrownObject_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_10a9ec0(__int64*);
__n128 ThrownDiscus_Destructor(__int64 a1);
__int64 ThrownDiscus_DeletingDestructor(__int64 a1);

__n128 ThrownDiscus_Destructor(__int64 a1)
{
  __int64 v2;
  __n128 result;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_ThrownDiscus_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 160));
  v2 = *(_QWORD*)(a1 + 184);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *(_QWORD*)a1 = &game_combat_ThrownObject_vtable;
  GameRoutine_10a9ec0((__int64*)(a1 + 136));
  v4 = *(_QWORD*)(a1 + 56);
  if (v4 != 0) {
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 ThrownDiscus_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_ThrownDiscus_vtable;
  GameRoutine_109d5e0((unsigned int*)(a1 + 160));
  v2 = *(_QWORD*)(a1 + 184);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
  }
  *(_QWORD*)a1 = &game_combat_ThrownObject_vtable;
  GameRoutine_10a9ec0((__int64*)(a1 + 136));
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 32);
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
}

#pragma GCC visibility pop
