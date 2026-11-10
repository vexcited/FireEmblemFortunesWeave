#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
__int64 game_facility_SceneCharacterAppearance_SetAccout_lambda0_Invoke(
    __int64 result, unsigned __int16* a2);

__int64 game_facility_SceneCharacterAppearance_SetAccout_lambda0_Invoke(
    __int64 result, unsigned __int16* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  v4 = *GameData_212c878[0];
  if (*(_BYTE*)(v2 + 80) == 1) {
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v3);
    if ((*(_BYTE*)(v5 + 73) & 0xFE) != 0x1E) {
      return result;
    }
  }
  else {
    v5 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v3);
  }
  v7 = *(_QWORD**)(v2 + 96);
  v6 = *(_QWORD*)(v2 + 104);
  if ((unsigned __int64)v7 >= v6) {
    v9 = *(_QWORD*)(v2 + 88);
    v10 = (char*)v7 - v9;
    v11 = ((__int64)v7 - v9) >> 3;
    v12 = v11 + 1;
    if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
      GameRoutine_6e5c60(result);
    }
    v13 = v6 - v9;
    v14 = fw_memory_g_heap_manager_ptr;
    if (v13 >> 2 > v12) {
      v12 = v13 >> 2;
    }
    if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v15 = v12;
    }
    if (v15 != 0) {
      if (v15 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v16 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v15, 16, 0);
    }
    else {
      v16 = 0;
    }
    v17 = v16 + 8 * v15;
    v18 = (char*)v7 - v9;
    v19 = (__int64)&v10[v16 + -8 * v11];
    *(_QWORD*)&v10[v16] = v5;
    v8 = (__int64)&v10[v16 + 8];
    result = memcpy(v19, v9, v18);
    *(_QWORD*)(v2 + 88) = v19;
    *(_QWORD*)(v2 + 96) = v8;
    *(_QWORD*)(v2 + 104) = v17;
    if (v9 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20);
    }
  }
  else {
    *v7 = v5;
    v8 = (__int64)(v7 + 1);
  }
  *(_QWORD*)(v2 + 96) = v8;
  return result;
}

#pragma GCC visibility pop
