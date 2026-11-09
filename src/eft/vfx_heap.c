#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 VfxHeap_Unknown3(__int64 a1, __int64 a2);

__int64 VfxHeap_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  if (a2 != 0) {
    v2 = 528;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 600LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

#pragma GCC visibility pop
