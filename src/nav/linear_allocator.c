#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 dtFree(_QWORD);
__int64 dtTileCacheCompressor_Destroy_dtTileCacheCompressor_26e5c0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ffe798[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LinearAllocator_Destructor(_QWORD* a1);
__int64 LinearAllocator_DeletingDestructor(_QWORD* a1);
__int64 LinearAllocator_Unknown2(__int64 result);
__int64 LinearAllocator_Unknown3(_QWORD* a1, __int64 a2);

__int64 LinearAllocator_Destructor(_QWORD* a1)
{
  *a1 = GameData_1ffe798;
  dtFree(a1[1]);
  return dtTileCacheCompressor_Destroy_dtTileCacheCompressor_26e5c0(a1);
}

__int64 LinearAllocator_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = GameData_1ffe798;
  dtFree(a1[1]);
  dtTileCacheCompressor_Destroy_dtTileCacheCompressor_26e5c0(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

__int64 LinearAllocator_Unknown2(__int64 result)
{
  unsigned __int64 v1;

  v1 = *(_QWORD*)(result + 32);
  if (v1 <= *(_QWORD*)(result + 24)) {
    v1 = *(_QWORD*)(result + 24);
  }
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = v1;
  return result;
}

__int64 LinearAllocator_Unknown3(_QWORD* a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = a1[1];
  if (v2 == 0) {
    return 0;
  }
  v3 = a1[3];
  if ((unsigned __int64)(v3 + a2) > a1[2]) {
    return 0;
  }
  a1[3] = v3 + a2;
  return v2 + v3;
}

#pragma GCC visibility pop
