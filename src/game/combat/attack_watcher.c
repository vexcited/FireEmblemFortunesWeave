#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_AttackWatcher_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 AttackWatcher_Destructor(_QWORD* a1);
__int64 AttackWatcher_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "AttackWatcher_DeletingDestructor");
_BYTE* ProcInst_657a50(__int64, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AttackWatcher_DeletingDestructor(_QWORD* a1);

__int64 AttackWatcher_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;

  *a1 = game_combat_AttackWatcher_vtable;
  result = a1[3];
  if (result != 0) {
    v3 = a1[4];
    if (*(_QWORD*)(result + 8) == -1 || v3 == 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
    if ((*(_WORD*)(v3 + 136) & 1) != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
    GameRoutine_657a50(a1[4], 1);
    result = a1[3];
    if (result != 0) {
      return std___1___shared_weak_count___release_weak(result);
    }
  }
  return result;
}

void AttackWatcher_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  __int64 v5;

  *a1 = game_combat_AttackWatcher_vtable;
  v2 = a1[3];
  if (v2 != 0) {
    v3 = a1[4];
    v4 = *(_QWORD*)(v2 + 8) == -1 || v3 == 0;
    if (v4 || (*(_WORD*)(v3 + 136) & 1) != 0 ||
        (ProcInst_657a50(a1[4], 1), (v2 = a1[3]) != 0)) {
      std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)a1);
}

#pragma GCC visibility pop
