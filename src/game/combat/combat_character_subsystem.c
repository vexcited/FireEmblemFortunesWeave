#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_CombatCharacterSubsystem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 CombatCharacterSubsystem_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CombatCharacterSubsystem_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CombatCharacterSubsystem_DeletingDestructor(_QWORD* a1);

void CombatCharacterSubsystem_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_combat_CombatCharacterSubsystem_vtable;
  v2 = a1[3];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

#pragma GCC visibility pop
