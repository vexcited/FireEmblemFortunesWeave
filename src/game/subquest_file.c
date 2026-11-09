#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1253900(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66bfc0(_QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21ca048;
extern __int64 GameData_21ca068;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 SubquestFile_Unknown4(unsigned __int64 result);

unsigned __int64 SubquestFile_Unknown4(unsigned __int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int** v12;
  unsigned int** v13;
  unsigned int* v14;
  __int64 v15;
  __int64* v16;
  __int64* i;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = (_QWORD*)result;
  if (*(_QWORD*)(result + 152) != 0) {
    v2 = *(_QWORD**)(result + 144);
    if (v2 != nullptr) {
      v3 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = v1[17];
    v1[18] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v1[16] + 8 * v8) = 0;
          *(_QWORD*)(v1[16] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v1[16] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v1[16] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v1[16] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v1[16] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v1[16] + 8 * v8 + 48) = 0;
          v10 = v1[16] + 8 * v8;
          v8 += 8;
          *(_QWORD*)(v10 + 56) = 0;
        } while (v9 != v8);
      }
      else {
        v8 = 0;
      }
      if (v7 != 0) {
        v11 = 8 * v8;
        do {
          --v7;
          *(_QWORD*)(v1[16] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v1[19] = 0;
  }
  v12 = (unsigned int**)v1[8];
  v13 = (unsigned int**)v1[9];
  while (v12 != v13) {
    v14 = *v12;
    v15 = **v12;
    if ((_DWORD)v15 != 0) {
      GameRoutine_1253900(v1 + 1, v15, *v12);
    }
    result = GameRoutine_66bfc0(v14);
    if ((_DWORD)result != 0) {
      result = GameRoutine_1253900(v1 + 1, (unsigned int)result, v14);
    }
    ++v12;
  }
  v16 = *(__int64**)(GameData_21ca068 + 64);
  for (i = *(__int64**)(GameData_21ca068 + 72); v16 != i; ++v16) {
    v18 = *v16;
    result = *(_QWORD*)(*v16 + 104);
    if (result != 0 && *(_BYTE*)result != 0) {
      result = game_HashString(result);
      if (result != 0) {
        v19 = *(_QWORD*)(GameData_21ca048 + 96);
        if (v19 != 0 && *(_QWORD*)(GameData_21ca048 + 112) != 0) {
          v21 = v19 - 1;
          if ((v19 & (v19 - 1)) != 0) {
            v22 = result;
            if (result >= v19) {
              v22 = result % v19;
            }
          }
          else {
            v22 = v21 & result;
          }
          v23 = *(_QWORD**)(*(_QWORD*)(GameData_21ca048 + 88) + 8 * v22);
          if (v23 != nullptr) {
            v24 = (_QWORD*)*v23;
            if (v24 != nullptr) {
              if ((v19 & v21) == 0) {
                while (1) {
                  v26 = v24[1];
                  if (v26 == result) {
                    if (v24[2] == result) {
                      goto LABEL_54;
                    }
                  }
                  else if ((v26 & v21) != v22) {
                    goto LABEL_26;
                  }
                  v24 = (_QWORD*)*v24;
                  if (v24 == nullptr) {
                    goto LABEL_26;
                  }
                }
              }
              do {
                v25 = v24[1];
                if (v25 == result) {
                  if (v24[2] == result) {
                  LABEL_54:
                    v27 = v24[3];
                    if (v27 != 0) {
                      *(_QWORD*)(*(_QWORD*)(v27 + 24) + 184LL) = v18;
                    }
                    break;
                  }
                }
                else {
                  if (v25 >= v19) {
                    v25 %= v19;
                  }
                  if (v25 != v22) {
                    break;
                  }
                }
                v24 = (_QWORD*)*v24;
              } while (v24 != nullptr);
            }
          }
        }
      }
    }
  LABEL_26:;
  }
  return result;
}

#pragma GCC visibility pop
