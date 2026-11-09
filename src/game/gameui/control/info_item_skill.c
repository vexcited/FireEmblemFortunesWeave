#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1888840(__int64);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_2132080[6];
__int64 InfoItemSkill_DeletingDestructor(__int64 a1);

__int64 InfoItemSkill_DeletingDestructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = GameData_2132080[0];
  *(_QWORD*)a1 = GameData_2132080[0] + 2;
  *(_QWORD*)(a1 + 72) = v2 + 51;
  *(_QWORD*)(a1 + 1032) = v2 + 56;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 1048) & 1) != 0 && *(_QWORD*)(a1 + 1064) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  GameRoutine_1888840(a1);
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
}

#pragma GCC visibility pop
