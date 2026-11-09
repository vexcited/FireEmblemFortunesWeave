#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_VariableConst_Scope_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Scope_Destructor(__int64 a1);
__int64 Scope_DeletingDestructor(__int64 a1);

__int64 Scope_Destructor(__int64 a1)
{
  __int64 v1;

  v1 = *(unsigned int*)(a1 + 24);
  *(_QWORD*)a1 = game_VariableConst_Scope_vtable;
  return game_VariableManager_SetFlag(a1 + 8, v1);
}

__int64 Scope_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(unsigned int*)(a1 + 24);
  *(_QWORD*)a1 = game_VariableConst_Scope_vtable;
  game_VariableManager_SetFlag(a1 + 8, v1);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
