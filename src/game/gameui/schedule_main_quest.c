#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_gameui_ScheduleQuest_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ScheduleMainQuest_Destructor(__int64 result);
__int64 ScheduleMainQuest_DeletingDestructor(__int64 a1);
bool ScheduleMainQuest_Unknown2(__int64 a1);
__int64 ScheduleMainQuest_Unknown3(__int64 result);

__int64 ScheduleMainQuest_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 56) & 1) != 0) {
    v1 = *(_QWORD*)(result + 72);
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
  *(_QWORD*)result = game_gameui_ScheduleQuest_vtable;
  if ((*(_BYTE*)(result + 24) & 1) != 0) {
    v4 = *(_QWORD*)(result + 40);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64 ScheduleMainQuest_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 72);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  *(_QWORD*)a1 = game_gameui_ScheduleQuest_vtable;
  if ((*(_BYTE*)(a1 + 24) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7, a1);
}

bool ScheduleMainQuest_Unknown2(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;

  if (*(__int16*)(a1 + 10) * *(__int16*)(a1 + 8) * *(__int16*)(a1 + 12) != 0) {
    return true;
  }
  v2 = *(unsigned __int8*)(a1 + 24);
  if ((v2 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 32);
  }
  else {
    v3 = v2 >> 1;
  }
  return v3 != 0;
}

__int64 ScheduleMainQuest_Unknown3(__int64 result)
{
  char v1;
  char v2;

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
  v2 = *(_BYTE*)(result + 56);
  *(_BYTE*)(result + 48) = 0;
  if ((v2 & 1) != 0) {
    **(_BYTE**)(result + 72) = 0;
    *(_QWORD*)(result + 64) = 0;
  }
  else {
    *(_WORD*)(result + 56) = 0;
  }
  *(_BYTE*)(result + 80) = 0;
  return result;
}

#pragma GCC visibility pop
