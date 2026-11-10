#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21c99c0;
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret GameRoutine_677000(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_67afd0(void);
__int64* JobFile_676c00(__int64* result, __int64 a2);
__int64 JobFile_676ef0(__int64* a1);
unsigned __int64 JobFile_6774a0(_QWORD* a1, __int64 a2);
__int64 game_JobFile_GetFromClassChangeCondition_lambda0_Invoke(__int64 result,
                                                                _QWORD* a2);

__int64* JobFile_676c00(__int64* result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = *result;
  v3 = (__int64*)result[1];
  v4 = result;
  if ((__int64*)*result == v3) {
    goto LABEL_7;
  }
  v5 = (unsigned __int64)v3 - v2 - 8;
  v6 = (__int64*)*result;
  if ((~(_BYTE)v5 & 0x18) == 0) {
  LABEL_6:
    if (v5 >= 0x18) {
      while (*v6 != a2 && v6[1] != a2 && v6[2] != a2 && v6[3] != a2) {
        v6 += 4;
        if (v6 == v3) {
          goto LABEL_7;
        }
      }
      return result;
    }
  LABEL_7:
    v9 = result[2];
    if ((unsigned __int64)v3 >= v9) {
      v11 = (char*)v3 - v2;
      v12 = ((__int64)v3 - v2) >> 3;
      v13 = v12 + 1;
      if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
        GameRoutine_67afd0();
      }
      v14 = v9 - v2;
      v15 = fw_memory_g_heap_manager_ptr;
      if (v14 >> 2 > v13) {
        v13 = v14 >> 2;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v17 = a2;
        v18 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
        a2 = v17;
      }
      else {
        v18 = 0;
      }
      v19 = v18 + 8 * v16;
      v20 = (__int64)&v11[v18 + -8 * v12];
      *(_QWORD*)&v11[v18] = a2;
      v10 = (__int64)&v11[v18 + 8];
      result = (__int64*)memcpy(v20, v2, v11);
      *v4 = v20;
      v4[1] = v10;
      v4[2] = v19;
      if (v2 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v21 = 56;
        }
        result =
            (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v21, v2);
      }
    }
    else {
      *v3 = a2;
      v10 = (__int64)(v3 + 1);
    }
    v4[1] = v10;
    return result;
  }
  v7 = ((unsigned __int8)((unsigned int)v5 >> 3) + 1) & 3;
  v6 = (__int64*)*result;
  while (1) {
    v8 = *v6++;
    if (v8 == a2) {
      return result;
    }
    if (--v7 == 0) {
      goto LABEL_6;
    }
  }
}

__int64 JobFile_676ef0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v12[3];
  _QWORD v13[3];

  v2 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  v3 = fw_memory_g_heap_manager_ptr;
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  *v4 = v2;
  v5 = v4;
  v13[0] = v4;
  v13[1] = v4 + 1;
  v13[2] = v4 + 1;
  *(struct PseudoSret*)(v12) = GameRoutine_677000(v13);
  v6 = v12[0];
  v7 = v12[1];
  if (v12[1] == v12[0]) {
    if (v12[1] == 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v5);
      return 0;
    }
  }
  else {
    v1 = *(_QWORD*)v12[0];
  }
  v8 = *(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0 ? 128LL : 56LL;
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v12[0]);
  v9 = *(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0 ? 128LL : 56LL;
  nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v5);
  if (v7 == v6) {
    return 0;
  }
  return v1;
}

unsigned __int64 JobFile_6774a0(_QWORD* a1, __int64 a2)
{
  unsigned __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  result = game_HashString(a2);
  if (result != 0) {
    v4 = *(_QWORD*)(GameData_21c99c0 + 96);
    if (v4 != 0 && *(_QWORD*)(GameData_21c99c0 + 112) != 0) {
      v6 = v4 - 1;
      if ((v4 & (v4 - 1)) != 0) {
        v7 = result;
        if (result >= v4) {
          v7 = result % v4;
        }
      }
      else {
        v7 = v6 & result;
      }
      v8 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v7);
      if (v8 != nullptr) {
        v9 = (_QWORD*)*v8;
        if (v9 != nullptr) {
          if ((v4 & v6) == 0) {
            while (1) {
              v12 = v9[1];
              if (v12 == result) {
                if (v9[2] == result) {
                  goto LABEL_27;
                }
              }
              else if ((v12 & v6) != v7) {
                goto LABEL_25;
              }
              v9 = (_QWORD*)*v9;
              v11 = 0;
              if (v9 == nullptr) {
                goto LABEL_26;
              }
            }
          }
          do {
            v10 = v9[1];
            if (v10 == result) {
              if (v9[2] == result) {
              LABEL_27:
                v11 = v9[3];
                goto LABEL_26;
              }
            }
            else {
              if (v10 >= v4) {
                v10 %= v4;
              }
              if (v10 != v7) {
                break;
              }
            }
            v9 = (_QWORD*)*v9;
          } while (v9 != nullptr);
        }
      }
    }
  }

LABEL_25:
  v11 = 0;

LABEL_26:
  *a1 = v11;
  return result;
}

__int64 game_JobFile_GetFromClassChangeCondition_lambda0_Invoke(__int64 result,
                                                                _QWORD* a2)
{
  if (**(_QWORD**)(result + 8) == *a2) {
    **(_BYTE**)(result + 16) = 1;
  }
  return result;
}

#pragma GCC visibility pop
