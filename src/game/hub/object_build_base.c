#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_hub_ObjectBuildBase_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ObjectBuildBase_Destructor(__int64 result);

void __attribute__((noreturn)) ObjectBuildBase_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 ObjectBuildBase_Destructor(__int64 result)
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

#pragma GCC visibility pop
