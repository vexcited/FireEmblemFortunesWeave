#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_8aef60(_QWORD);
__int64 GameRoutine_931120(_QWORD);
__int64 GameRoutine_932600(_QWORD);
__int64 ItemSeq_8af940(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 RidePool_93d820(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 GameData_212cf88[4];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e090[13];
__int64
game_facility_anonymous_ReleaseRideMenuItem_ACall_closure_Invoke(__int64 a1);
__int64

game_facility_anonymous_ReleaseRideMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[2];
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212cf88[0];
  v3 = GameRoutine_931120(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 120LL) +
      ((__int64)*(int*)(v1 + 40) << 6));
  v4 = GameRoutine_932600(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8LL) + 120LL) +
                          ((__int64)*(int*)(v1 + 40) << 6));
  if (v4 != 0 && **(_WORD**)(v4 + 24) != 0) {
    v5 = *(_QWORD*)(v1 + 8);
    v16 = v3;
    v14 = 0;
    v15 = 0;
    v13 = nullptr;
    v12[0] = "MID_ReleaseMenu_GetItem_Result";
    if (*(_QWORD*)(v5 + 152) != 0) {
      v6 = *(_QWORD*)(v5 + 152);
    }
    else {
      v6 = v5;
    }
    GameRoutine_8aef60(&v13);
    ItemSeq_8af940(v6, &v13, 0, v12, &v16, 0);
    if (v13 != nullptr) {
      v14 = (__int64)v13;
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v13);
    }
  }
  else {
    v8 = *(_QWORD*)(v1 + 8);
    v12[0] = v3;
    if (*(_QWORD*)(v8 + 152) != 0) {
      v9 = *(_QWORD*)(v8 + 152);
    }
    else {
      v9 = v8;
    }
    v13 = "MID_ReleaseMenu_Result";
    v14 = 22;
    v12[1] = strlen(v3);
    GameRoutine_16f9b50(v9, &v13, v12);
  }
  RidePool_93d820(*(unsigned int*)(v1 + 40));
  v10 = __dynamic_cast(*(_QWORD*)(v1 + 8), GameData_212e030[0],
                       GameData_212e090[0], 0);
  (*(void (**)(__int64))(*(_QWORD*)v10 + 1112LL))(v10);
  return 2;
}

#pragma GCC visibility pop
