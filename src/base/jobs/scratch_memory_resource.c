#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_lmem_DestroyFrameHeap(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1_pmr_memory_resource_Destroy_memory_resource(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ScratchMemoryResource_Destructor(_QWORD* a1);
__int64 ScratchMemoryResource_DeletingDestructor(_QWORD* a1);
__int64 GameHr_1955080(__int64 a1);
__int64 nn_lmem_AllocateFromFrameHeap(_QWORD, _QWORD, _QWORD);
__int64 ScratchMemoryResource_Unknown2(__int64 a1, __int64 a2,
                                       unsigned __int64 a3);

__int64 ScratchMemoryResource_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  nn_lmem_DestroyFrameHeap(a1[22]);
  v2 = a1[3];
  a1[3] = 0;
  if (v2 != 0) {
    v3 = fw_memory_g_heap_manager_ptr;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    v5 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
    }
  }
  else {
    a1[2] = 0;
    a1[3] = 0;
  }
  return std___1_pmr_memory_resource_Destroy_memory_resource(a1);
}

__int64 ScratchMemoryResource_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  nn_lmem_DestroyFrameHeap(a1[22]);
  v2 = a1[3];
  a1[3] = 0;
  if (v2 != 0) {
    v3 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v3);
    v4 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v5);
    }
  }
  else {
    a1[2] = 0;
    a1[3] = 0;
  }
  std___1_pmr_memory_resource_Destroy_memory_resource(a1);
  v6 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6);
}

__int64 ScratchMemoryResource_Unknown2(__int64 a1, __int64 a2,
                                       unsigned __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 176);
  if (a3 <= v3) {
    a3 = v3;
  }
  return nn_lmem_AllocateFromFrameHeap(v4, a2, a3);
}

bool ScratchMemoryResource_Unknown4(__int64 a1, __int64 a2) { return a1 == a2; }

#pragma GCC visibility pop
