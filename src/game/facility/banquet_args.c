#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
_QWORD* game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke(_QWORD* result,
                                                               __int64* a2);

_QWORD* game_facility_BanquetArgs_CalcJoinUnits_lambda0_Invoke(_QWORD* result,
                                                               __int64* a2)
{
  __int64 v2;
  __int64* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *a2;
  if (*a2 != 0 && v2 != result[2] && v2 != result[3]) {
    v5 = (__int64*)result[1];
    v7 = (_QWORD*)v5[1];
    v6 = v5[2];
    if ((unsigned __int64)v7 >= v6) {
      v9 = *v5;
      v10 = (__int64)v7 - *v5;
      v11 = (v10 >> 3) + 1;
      if (v11 >> 61 != 0) {
        GameRoutine_6c1f60();
      }
      v12 = v6 - v9;
      v13 = fw_memory_g_heap_manager_ptr;
      if (v12 >> 2 > v11) {
        v11 = v12 >> 2;
      }
      if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
        v14 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v14 = v11;
      }
      if (v14 != 0) {
        if (v14 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v15 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
      }
      else {
        v15 = 0;
      }
      v16 = v15 + 8 * v14;
      v17 = v15 + v10 - 8 * (v10 >> 3);
      *(_QWORD*)(v15 + v10) = v2;
      v8 = v15 + v10 + 8;
      result = (_QWORD*)memcpy(v17, v9, v10);
      *v5 = v17;
      v5[1] = v8;
      v5[2] = v16;
      if (v9 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v18 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v18);
      }
    }
    else {
      *v7 = v2;
      v8 = (__int64)(v7 + 1);
    }
    v5[1] = v8;
  }
  return result;
}

#pragma GCC visibility pop
