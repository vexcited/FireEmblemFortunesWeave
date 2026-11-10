#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1faf2d8[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_9433d0(_QWORD);
_QWORD* game_TrainingConst_CalcSortiePlanTrainingGrow_lambda0_Clone(_QWORD* a1);
_QWORD*
game_TrainingConst_CalcSortiePlanTrainingGrow_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2);
_QWORD* game_TrainingConst_CalcSortiePlanTrainingGrow_lambda0_Invoke(
    _QWORD* result, unsigned __int8* a2);
_QWORD* game_TrainingConst_GetSortiePlanTrainingGrowableAttr_lambda0_Invoke(
    _QWORD* result, unsigned __int8* a2);

_QWORD* game_TrainingConst_CalcSortiePlanTrainingGrow_lambda0_Clone(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = a1[1];
  v5 = a1[2];
  v6 = v3;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  *v3 = GameData_1faf2d8;
  v3[1] = v4;
  v7 = a1[3];
  v8 = v7 - v5;
  if (v7 != v5) {
    if (v8 < 0) {
      GameRoutine_9433d0(v3);
    }
    v9 = fw_memory_HeapManager_Allocate(*v2, v7 - v5, 16, 0);
    v10 = v9 + v8;
    v6[2] = v9;
    v6[4] = v9 + v8;
    memcpy(v9, v5, v8);
    v6[3] = v10;
  }
  v6[5] = a1[5];
  return v6;
}

_QWORD*

game_TrainingConst_CalcSortiePlanTrainingGrow_lambda0_CloneInto(_QWORD* result,
                                                                _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v3 = result;
  *a2 = GameData_1faf2d8;
  v4 = result[1];
  a2[3] = 0;
  a2[4] = 0;
  a2[1] = v4;
  a2[2] = 0;
  v6 = result[2];
  v5 = result[3];
  v7 = v5 - v6;
  if (v5 != v6) {
    if (v7 < 0) {
      GameRoutine_9433d0(result);
    }
    v8 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v5 - v6, 16, 0);
    v9 = v8 + v7;
    a2[2] = v8;
    a2[3] = v8;
    a2[4] = v8 + v7;
    result = (_QWORD*)memcpy(v8, v6, v7);
    a2[3] = v9;
  }
  a2[5] = v3[5];
  return result;
}

_QWORD* game_TrainingConst_CalcSortiePlanTrainingGrow_lambda0_Invoke(
    _QWORD* result, unsigned __int8* a2)
{
  __int64 v2;
  unsigned __int8* v3;
  unsigned __int8* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int64 v8;
  _BYTE* v9;
  __int64 v10;
  unsigned __int8* v11;
  __int64 v12;
  _BYTE* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v2 = *a2;
  if ((_DWORD)v2 != 7 &&
      ((_DWORD)v2 == 12 ||
       (unsigned int)v2 <= 0xC &&
           (*(char*)(result[1] + v2 + 398) & 0x80000000) == 0)) {
    v4 = (unsigned __int8*)result[2];
    v3 = (unsigned __int8*)result[3];
    if (v4 != v3) {
      v5 = v3 - v4;
      v6 = (v3 - v4) & 3;
      if (v6 != 0) {
        while (*v4 != (_DWORD)v2) {
          ++v4;
          if (--v6 == 0) {
            goto LABEL_9;
          }
        }
      }
      else {
      LABEL_9:
        if (v5 >= 4) {
          v4 += 3;
          while (1) {
            if (*(v4 - 3) == (_DWORD)v2) {
              v4 -= 3;
              goto LABEL_11;
            }
            if (*(v4 - 2) == (_DWORD)v2) {
              v4 -= 2;
              goto LABEL_11;
            }
            if (*(v4 - 1) == (_DWORD)v2) {
              break;
            }
            if (*v4 == (_DWORD)v2) {
              goto LABEL_11;
            }
            v11 = v4 + 1;
            v4 += 4;
            if (v11 == v3) {
              goto LABEL_10;
            }
          }
          --v4;
        }
        else {
        LABEL_10:
          v4 = (unsigned __int8*)result[3];
        }
      }
    }
  LABEL_11:
    if (v4 == v3) {
      v7 = (__int64*)result[5];
      v9 = (_BYTE*)v7[1];
      v8 = v7[2];
      if ((unsigned __int64)v9 >= v8) {
        v12 = *v7;
        v13 = &v9[-*v7];
        v14 = (unsigned __int64)(v13 + 1);
        if ((__int64)(v13 + 1) < 0) {
          GameRoutine_9433d0(result);
        }
        v15 = v8 - v12;
        v16 = fw_memory_g_heap_manager_ptr;
        if (2 * v15 > v14) {
          v14 = 2 * v15;
        }
        if (v15 >= 0x3FFFFFFFFFFFFFFFLL) {
          v17 = 0x7FFFFFFFFFFFFFFFLL;
        }
        else {
          v17 = v14;
        }
        if (v17 != 0) {
          v18 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
        }
        else {
          v18 = 0;
        }
        v13[v18] = v2;
        v10 = (__int64)&v13[v18 + 1];
        result = (_QWORD*)memcpy(v18, v12, v13);
        *v7 = v18;
        v7[1] = v10;
        v7[2] = v18 + v17;
        if (v12 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
            v19 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v19);
        }
      }
      else {
        *v9 = v2;
        v10 = (__int64)(v9 + 1);
      }
      v7[1] = v10;
    }
  }
  return result;
}

_QWORD* game_TrainingConst_GetSortiePlanTrainingGrowableAttr_lambda0_Invoke(
    _QWORD* result, unsigned __int8* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v7;
  unsigned __int64 v8;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *a2;
  if ((_DWORD)v2 == 12) {
    v3 = result[1];
    v4 = 12;
    goto LABEL_3;
  }
  if ((unsigned int)v2 > 0xC) {
    return result;
  }
  if ((_DWORD)v2 == 7) {
    v3 = result[1];
    v4 = 7;
  LABEL_14:
    if (*(char*)(v3 + v4 + 812) < 0) {
      return result;
    }
    goto LABEL_3;
  }
  if (*(char*)(result[2] + v2 + 398) < 0) {
    return result;
  }
  v3 = result[1];
  v4 = *a2;
  if ((unsigned int)v2 <= 7) {
    goto LABEL_14;
  }
LABEL_3:
  v5 = *(unsigned __int8*)(v3 + v4 + 540);
  if (v5 != 0 && v5 != 12) {
    v7 = (__int64*)result[3];
    v9 = (_BYTE*)v7[1];
    v8 = v7[2];
    if ((unsigned __int64)v9 >= v8) {
      v11 = *v7;
      v12 = &v9[-*v7];
      v13 = (unsigned __int64)(v12 + 1);
      if ((__int64)(v12 + 1) < 0) {
        GameRoutine_9433d0(result);
      }
      v14 = v8 - v11;
      v15 = fw_memory_g_heap_manager_ptr;
      if (2 * v14 > v13) {
        v13 = 2 * v14;
      }
      if (v14 >= 0x3FFFFFFFFFFFFFFFLL) {
        v16 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0);
      }
      else {
        v17 = 0;
      }
      v12[v17] = v2;
      v10 = (__int64)&v12[v17 + 1];
      result = (_QWORD*)memcpy(v17, v11, v12);
      *v7 = v17;
      v7[1] = v10;
      v7[2] = v17 + v16;
      if (v11 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v18 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v18);
      }
    }
    else {
      *v9 = v2;
      v10 = (__int64)(v9 + 1);
    }
    v7[1] = v10;
  }
  return result;
}

#pragma GCC visibility pop
