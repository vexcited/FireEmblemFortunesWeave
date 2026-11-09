#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_GambitCreateLegion_vtable[])();
extern __int64 (*game_combat_IGambitKey_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 GambitCreateLegion_Destructor(__int64 result);
__int64 GambitCreateLegion_DeletingDestructor(__int64 a1);

__int64 GambitCreateLegion_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  *(_QWORD*)result = game_combat_GambitCreateLegion_vtable;
  if ((*(_BYTE*)(result + 64) & 1) != 0 && *(_QWORD*)(result + 80) != 0) {
    v1 = result;
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v2);
    result = v1;
  }
  *(_QWORD*)result = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(result + 24) & 1) != 0 && *(_QWORD*)(result + 40) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return result;
}

__int64 GambitCreateLegion_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)a1 = game_combat_GambitCreateLegion_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 64) & 1) != 0 && *(_QWORD*)(a1 + 80) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = &game_combat_IGambitKey_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
}

#pragma GCC visibility pop
