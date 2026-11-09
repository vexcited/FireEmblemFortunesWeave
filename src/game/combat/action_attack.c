#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1098db0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
extern __int64 (*game_combat_ActionAttack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ActionAttack_DeletingDestructor(_QWORD* a1);
__int64 ActionAttack_Unknown2(_QWORD* a1);
__int64 ActionAttack_Unknown7(__int64 result);

__int64 ActionAttack_DeletingDestructor(_QWORD* a1)
{
  *a1 = game_combat_ActionAttack_vtable;
  GameRoutine_1098db0(a1 + 34);
  GameRoutine_1098db0(a1 + 27);
  GameRoutine_1098db0(a1 + 20);
  GameRoutine_1098db0(a1 + 13);
  return GameRoutine_1098db0(a1 + 6);
}

__int64 ActionAttack_Unknown2(_QWORD* a1)
{
  long double v3;
  __int64 v4;

  *a1 = game_combat_ActionAttack_vtable;
  GameRoutine_1098db0(a1 + 34);
  GameRoutine_1098db0(a1 + 27);
  GameRoutine_1098db0(a1 + 20);
  GameRoutine_1098db0(a1 + 13);
  GameRoutine_1098db0(a1 + 6);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
}

__int64 ActionAttack_Unknown7(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_DWORD*)(v1 + 536) == 2) {
    *(_DWORD*)(v1 + 536) = 1;
  }
  return result;
}

#pragma GCC visibility pop
