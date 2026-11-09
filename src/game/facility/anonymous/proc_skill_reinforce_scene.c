#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1487cc0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcSkillReinforceScene_Unknown18();

__int64 ProcSkillReinforceScene_Unknown18()
{
  __int64 result;
  __int64 v1;
  char v2;
  unsigned __int64 v3;
  _BYTE v4[15];

  v4[8] = 0;
  v2 = 32;
  v3 = 0xE6A688E65F4D4742LL;
  *(_QWORD*)v4 = 0x968CE5B7BCE5808ALL;
  result = GameRoutine_1487cc0(&v2, 0x13F000000LL);
  if ((v2 & 1) != 0 && *(_QWORD*)&v4[7] != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1, *(_QWORD*)&v4[7]);
  }
  return result;
}

#pragma GCC visibility pop
