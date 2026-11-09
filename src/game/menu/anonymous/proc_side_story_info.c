#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15d4ba0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_167f810(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd280(_QWORD);
__int64 GameRoutine_187eb30(__int64, long double);
__int64 GameRoutine_187ec30(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_20fcfb0[])();
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ProcSideStoryInfo_Unknown85(__int64 a1, long double a2);

_QWORD* ProcSideStoryInfo_Unknown85(__int64 a1, long double a2)
{
  __int64 v3;
  _QWORD* result;
  _QWORD* v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD v13[4];
  _QWORD* v14;
  _QWORD v15[3];

  GameRoutine_187eb30(a1, a2);
  v3 = GameRoutine_155fbe0(a1 + 848, "L_Info");
  GameRoutine_15d4ba0(v3, a1 + 1072, 0, 0, 1);
  GameRoutine_187ec30(a1);
  result = *(_QWORD**)(**(_QWORD**)(a1 + 1080) + 200LL);
  if (result != nullptr) {
    result = (_QWORD*)game_gmap_SpotMgr_FindSpot(result);
    if (result != nullptr) {
      v5 = result;
      GameRoutine_1562cf0(a1 + 848, "Destination");
      v6 = GameRoutine_16dd280(a1);
      v13[0] = GameData_20fcfb0;
      v13[1] = a1;
      v14 = v13;
      if (GameData_225e7a0 != 0) {
        v8 = 32;
        result = v13;
        return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v8))(
            result, v7);
      }
      v9 = v6;
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v11 = v5;
      v15[0] = v11;
      v15[1] = v11 + 1;
      v15[2] = v11 + 1;
      GameRoutine_167f810(a1, 4, v15, 0, v9, v13);
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12);
      result = v14;
      if (v14 == v13) {
        v8 = 32;
        return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v8))(
            result, v7);
      }
      if (v14 != nullptr) {
        v8 = 40;
        return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v8))(
            result, v7);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
