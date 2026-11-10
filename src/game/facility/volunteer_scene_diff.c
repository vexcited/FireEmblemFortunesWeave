#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1451020(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) VolunteerSceneDiff_141d730() { __udf(0x8002u); };
__int64 game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke();

__int64 game_facility_VolunteerSceneDiff_OnReadyResult_lambda0_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _WORD v6[8];
  __int64 v7;
  _WORD v8[8];
  __int64 v9;
  _QWORD v10[2];
  __int64 v11;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v1 + 38) = 0;
  v8[0] = 0;
  v6[0] = 0;
  v10[0] = 41;
  v10[1] = 38;
  v11 = v1;
  *(_QWORD*)(v1 + 16) = 0xBBE489A5E55FA983LL;
  *(_QWORD*)(v1 + 24) = 0xB682E3AA83E35F95LL;
  *(_QWORD*)(v1 + 30) = 0x8883E3AB83E3B682LL;
  *(_QWORD*)v1 = 0x83E3BC83E3B782E3LL;
  *(_QWORD*)(v1 + 8) = 0xE3A183E3AB82E3B3LL;
  result = GameRoutine_1451020(v10, v8, v6);
  if ((v6[0] & 1) != 0 && v7 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v3 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v3);
  }
  if ((v8[0] & 1) != 0 && v9 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v4 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v4);
  }
  if ((v10[0] & 1) != 0 && v11 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v5 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v5);
  }
  return result;
}

#pragma GCC visibility pop
