#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager;
__int64 EftFileMemory_DeletingDestructor(__int64 a1);

__int64 EftFileMemory_DeletingDestructor(__int64 a1)
{
  __int64 v1;

  v1 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v1, a1);
}

#pragma GCC visibility pop
