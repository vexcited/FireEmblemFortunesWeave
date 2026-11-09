#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ObjectModule_Unknown8(__int64 a1, __int64 a2);

__int64 ObjectModule_Unknown8(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;

  if ((*(_BYTE*)(a2 + 24) & 1) != 0 && *(_QWORD*)(a2 + 40) != 0) {
    v2 = a2;
    v3 = *(_QWORD*)(a2 + 40);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    a2 = v2;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v6 = *(_QWORD*)(a2 + 16);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
