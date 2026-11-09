#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProxyMemSnd_Unknown2(__int64 a1, __int64 a2, int a3);
__int64 ProxyMemSnd_Unknown3(__int64 a1, __int64 a2);

__int64 ProxyMemSnd_Unknown2(__int64 a1, __int64 a2, int a3)
{
  return fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        a2, a3, 2);
}

__int64 ProxyMemSnd_Unknown3(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  if (a2 != 0) {
    v2 = 288;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 360LL) == 0) {
      v2 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
  }
  return result;
}

#pragma GCC visibility pop
