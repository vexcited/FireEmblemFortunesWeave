#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MemoryOutputStream_DeletingDestructor(__int64 result);
__int64 MemoryOutputStream_Unknown2(__int64 a1);

__int64 MemoryOutputStream_DeletingDestructor(__int64 result)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(result + 16);
  *(_QWORD*)(result + 16) = 0;
  if (v1 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

__int64 MemoryOutputStream_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  v2 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
}

#pragma GCC visibility pop
