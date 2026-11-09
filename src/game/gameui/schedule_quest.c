#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gameui_ScheduleQuest_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ScheduleQuest_Destructor(__int64 result);
bool ScheduleQuest_Unknown2(_WORD* a1);
__int64 ScheduleQuest_Unknown3(__int64 result);

__int64 ScheduleQuest_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;

  *(_QWORD*)result = game_gameui_ScheduleQuest_vtable;
  if ((*(_BYTE*)(result + 24) & 1) != 0) {
    v1 = *(_QWORD*)(result + 40);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
  return result;
}

bool ScheduleQuest_Unknown2(_WORD* a1)
{
  return a1[5] != 0 && a1[4] != 0 && a1[6] != 0;
}

__int64 ScheduleQuest_Unknown3(__int64 result)
{
  char v1;

  v1 = *(_BYTE*)(result + 24);
  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 8) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(result + 40) = 0;
    *(_QWORD*)(result + 32) = 0;
  }
  else {
    *(_WORD*)(result + 24) = 0;
  }
  *(_BYTE*)(result + 48) = 0;
  return result;
}

#pragma GCC visibility pop
