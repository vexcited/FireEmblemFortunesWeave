#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_144e120(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SceneCamera_DeletingDestructor(__int64 a1);

__int64 SceneCamera_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  GameRoutine_144e120(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
