#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_hub_ObjectBuildBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f910[2];
__int64 ObjectBuildEmpty_Destructor(__int64 result);
__int64 ObjectBuildEmpty_DeletingDestructor(__int64 a1);

__int64 ObjectBuildEmpty_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)result = &game_hub_ObjectBuildBase_vtable;
  if ((*(_BYTE*)(result + 32) & 1) != 0) {
    v1 = *(_QWORD*)(result + 48);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  v4 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    *(_QWORD*)(result + 16) = v4;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  return result;
}

__int64 ObjectBuildEmpty_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = GameData_212f910[0] + 2;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 48);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  v5 = *(_QWORD*)(a1 + 8);
  if (v5 != 0) {
    v6 = *(_QWORD*)v2;
    *(_QWORD*)(a1 + 16) = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v5);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8, a1);
}

#pragma GCC visibility pop
