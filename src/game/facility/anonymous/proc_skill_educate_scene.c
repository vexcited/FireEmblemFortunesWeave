#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcSkillEducateScene_Unknown18();

__int64 ProcSkillEducateScene_Unknown18()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  __int16 v4;
  char v5;
  __int64 v6;

  v5 = 0;
  v2 = 20;
  v4 = -30578;
  v3 = 0xE69DBCE45F4D4742LL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && v6 != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, v6);
  }
  return result;
}

#pragma GCC visibility pop
