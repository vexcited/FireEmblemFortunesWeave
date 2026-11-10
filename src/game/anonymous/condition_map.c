#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_7f1670(void);
_QWORD* ConditionMap_7f2ec0(__int64* a1, __int64 a2);
__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f30c0(__int64 a1,
                                                              _QWORD* a2);
__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f32a0(__int64 a1,
                                                              _QWORD* a2);
__int64 ConditionMap_7f2ec0_alt1(_QWORD) __asm__("ConditionMap_7f2ec0");
extern __int64 GameData_21d9ce8;
extern __int64 GameData_21d9d00;
extern __int64 GameData_21d9d18;
__int64 ConditionMap_7ec520(__int64 result, __int64 a2);

__int64 ConditionMap_7ec520(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  int v9;

  v2 = *(unsigned __int16*)result;
  if (*(_WORD*)result != 0) {
    v3 = result;
    v4 = 0;
    do {
      result = game_HashString(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8 * v4), a2);
      if (result != 0) {
        a2 = result;
        v5 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
        v6 = v5;
        if (v5 != nullptr) {
          while (*v6 != result) {
            v6 = (_QWORD*)v6[1];
            if (v6 == nullptr) {
              v7 = *(_QWORD**)(GameData_21d9d00 + 8 * (result & 0xFFF));
              while (*v7 != result) {
                v7 = (_QWORD*)v7[1];
                if (v7 == nullptr) {
                  do {
                    v8 = v5;
                    v5 = (_QWORD*)v5[1];
                  } while (v5 != nullptr);
                  result = ConditionMap_7f2ec0_alt1(&GameData_21d9ce8);
                  v8[1] = result;
                  goto LABEL_4;
                }
              }
              break;
            }
          }
        }
        else {
          v9 = result & 0xFFF;
          *(_QWORD*)(GameData_21d9d00 + 8 * (result & 0xFFF)) =
              ConditionMap_7f2ec0_alt1(&GameData_21d9ce8);
          result = GameRoutine_7d6200(&GameData_21d9d18, &v9);
        }
      }
    LABEL_4:
      ++v4;
    } while (v4 != v2);
  }
  return result;
}

_QWORD* ConditionMap_7f2ec0(__int64* a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* result;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v3 = *a1;
  v2 = (_QWORD*)a1[1];
  v4 = (__int64)v2 - *a1;
  v5 = (v4 >> 4) + 1;
  if (v4 == -16) {
    v6 = (_QWORD*)(v3 + 16 * v5);
  LABEL_5:
    a1[1] = (__int64)v6;
    goto LABEL_6;
  }
  v7 = (_QWORD*)a1[2];
  if (v7 != v2) {
    *v2 = 0;
    v2[1] = 0;
    v6 = v2 + 2;
    goto LABEL_5;
  }
  if (v5 >> 60 != 0) {
    GameRoutine_7f1670();
  }
  v9 = (unsigned __int64)v7 - v3;
  v10 = ((__int64)v7 - v3) >> 3;
  if (v10 > v5) {
    v5 = v10;
  }
  if (v9 >= 0x7FFFFFFFFFFFFFF0LL) {
    v11 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v11 = v5;
  }
  if (v11 >> 60 != 0) {
    GameRoutine_60a210(a1);
  }
  v12 = a1;
  v13 = a2;
  v14 = fw_memory_g_heap_manager_ptr;
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       16 * v11, 16, 0);
  v16 = (_QWORD*)(v15 + v4);
  v17 = v15 + 16 * v11;
  v18 = v15 + v4 - 16 * (v4 >> 4);
  *v16 = 0;
  v16[1] = 0;
  v19 = v15 + v4 + 16;
  memcpy(v18, v3, v4);
  a1 = v12;
  *v12 = v18;
  v12[1] = v19;
  v12[2] = v17;
  a2 = v13;
  if (v3 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20, v3);
    a1 = v12;
    a2 = v13;
  }
LABEL_6:
  result = (_QWORD*)(*a1 + v4);
  *result = a2;
  result[1] = 0;
  return result;
}

__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f30c0(__int64 a1,
                                                              _QWORD* a2)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  int v8;

  v2 = *(__int64**)(a1 + 8);
  result = game_HashString(*a2, a2);
  if (result != 0) {
    v4 = *(_QWORD*)(v2[3] + 8 * (result & 0xFFF));
    if (v4 != 0) {
      v5 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
      while (*v5 != result) {
        v5 = (_QWORD*)v5[1];
        if (v5 == nullptr) {
          v6 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
          while (*v6 != result) {
            v6 = (_QWORD*)v6[1];
            if (v6 == nullptr) {
              do {
                v7 = v4;
                v4 = *(_QWORD*)(v4 + 8);
              } while (v4 != 0);
              result = (__int64)ConditionMap_7f2ec0(v2, result);
              *(_QWORD*)(v7 + 8) = result;
              return result;
            }
          }
          return result;
        }
      }
    }
    else {
      v8 = result & 0xFFF;
      *(_QWORD*)(v2[3] + 8 * (result & 0xFFF)) =
          ConditionMap_7f2ec0(v2, result);
      return GameRoutine_7d6200(v2 + 6, &v8);
    }
  }
  return result;
}

__int64 game_anonymous_ConditionMap_Add_closure_Invoke_7f32a0(__int64 a1,
                                                              _QWORD* a2)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  int v8;

  v2 = *(__int64**)(a1 + 8);
  result = game_HashString(*a2, a2);
  if (result != 0) {
    v4 = *(_QWORD*)(v2[3] + 8 * (result & 0xFFF));
    if (v4 != 0) {
      v5 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
      while (*v5 != result) {
        v5 = (_QWORD*)v5[1];
        if (v5 == nullptr) {
          v6 = *(_QWORD**)(v2[3] + 8 * (result & 0xFFF));
          while (*v6 != result) {
            v6 = (_QWORD*)v6[1];
            if (v6 == nullptr) {
              do {
                v7 = v4;
                v4 = *(_QWORD*)(v4 + 8);
              } while (v4 != 0);
              result = (__int64)ConditionMap_7f2ec0(v2, result);
              *(_QWORD*)(v7 + 8) = result;
              return result;
            }
          }
          return result;
        }
      }
    }
    else {
      v8 = result & 0xFFF;
      *(_QWORD*)(v2[3] + 8 * (result & 0xFFF)) =
          ConditionMap_7f2ec0(v2, result);
      return GameRoutine_7d6200(v2 + 6, &v8);
    }
  }
  return result;
}

#pragma GCC visibility pop
