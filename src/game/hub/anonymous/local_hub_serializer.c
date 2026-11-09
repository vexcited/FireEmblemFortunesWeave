#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21eea40;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
__int64 LocalHubSerializer_DeletingDestructor(_QWORD* a1);

__int64 LocalHubSerializer_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v4;

  v4 = a1;
  *a1 = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v4);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
