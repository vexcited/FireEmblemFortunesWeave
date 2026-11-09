#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 OcclusionCulling_Unknown5(__int64 result);
__int64 OcclusionCulling_Unknown6(__int64 result);
__int64 OcclusionCulling_DeletingDestructor(__int64 a1);

__int64 OcclusionCulling_Unknown5(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 16) + 32LL) = 1;
  return result;
}

__int64 OcclusionCulling_Unknown6(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 16) + 32LL) = 0;
  return result;
}

__int64 OcclusionCulling_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 24);
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
