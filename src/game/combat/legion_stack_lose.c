#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_LegionStack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LegionStackLose_Destructor(__int64 result);

__int64 LegionStackLose_Destructor(__int64 result)
{
  __int64 v1;

  *(_QWORD*)result = game_combat_LegionStack_vtable;
  if ((*(_BYTE*)(result + 16) & 1) != 0 && *(_QWORD*)(result + 32) != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

#pragma GCC visibility pop
