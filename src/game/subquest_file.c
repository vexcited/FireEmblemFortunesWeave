#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1253900(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66bfc0(_QWORD);
__int64 game_HashString(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21ca048;
extern __int64 GameData_21ca068;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 SubquestFile_Unknown4_alt1(unsigned __int64 result) __asm__(
    "SubquestFile_Unknown4");
__int64 Resources_66bfc0(unsigned __int64*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
void GameRoutine_1253900_alt1(__int64, unsigned int,
                              __int64) __asm__("GameRoutine_1253900");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SubquestFile_Unknown4(_QWORD* a1);

void SubquestFile_Unknown4(_QWORD* a1)
{
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
  unsigned int v15;
  unsigned int v16;
  __int64* v17;
  __int64* i;
  __int64 v19;
  _BYTE* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;

  if (a1[19] != 0) {
    v2 = (_QWORD*)a1[18];
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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v2);
        v2 = v4;
      } while (v4 != nullptr);
    }
    v6 = a1[17];
    a1[18] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v8) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v8 + 48) = 0;
          v10 = a1[16] + 8 * v8;
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
          *(_QWORD*)(a1[16] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    a1[19] = 0;
  }
  v12 = (unsigned int**)a1[8];
  v13 = (unsigned int**)a1[9];
  while (v12 != v13) {
    v14 = *v12;
    v15 = **v12;
    if (v15 != 0) {
      GameRoutine_1253900_alt1((__int64)(a1 + 1), v15, (__int64)*v12);
    }
    v16 = Resources_66bfc0((unsigned __int64*)v14);
    if (v16 != 0) {
      GameRoutine_1253900_alt1((__int64)(a1 + 1), v16, (__int64)v14);
    }
    ++v12;
  }
  v17 = *(__int64**)(GameData_21ca068 + 64);
  for (i = *(__int64**)(GameData_21ca068 + 72); v17 != i; ++v17) {
    v19 = *v17;
    v20 = *(_BYTE**)(*v17 + 104);
    if (v20 != nullptr && *v20 != 0) {
      v21 = game_HashString_alt1((__int64)v20);
      if (v21 != 0) {
        v22 = *(_QWORD*)(GameData_21ca048 + 96);
        if (v22 != 0 && *(_QWORD*)(GameData_21ca048 + 112) != 0) {
          v24 = v22 - 1;
          if ((v22 & (v22 - 1)) != 0) {
            v25 = v21;
            if (v21 >= v22) {
              v25 = v21 % v22;
            }
          }
          else {
            v25 = v24 & v21;
          }
          v26 = *(_QWORD**)(*(_QWORD*)(GameData_21ca048 + 88) + 8 * v25);
          if (v26 != nullptr) {
            v27 = (_QWORD*)*v26;
            if (v27 != nullptr) {
              if ((v22 & v24) == 0) {
                while (1) {
                  v29 = v27[1];
                  if (v29 == v21) {
                    if (v27[2] == v21) {
                      goto LABEL_54;
                    }
                  }
                  else if ((v29 & v24) != v25) {
                    goto LABEL_26;
                  }
                  v27 = (_QWORD*)*v27;
                  if (v27 == nullptr) {
                    goto LABEL_26;
                  }
                }
              }
              do {
                v28 = v27[1];
                if (v28 == v21) {
                  if (v27[2] == v21) {
                  LABEL_54:
                    v30 = v27[3];
                    if (v30 != 0) {
                      *(_QWORD*)(*(_QWORD*)(v30 + 24) + 184LL) = v19;
                    }
                    break;
                  }
                }
                else {
                  if (v28 >= v22) {
                    v28 %= v22;
                  }
                  if (v28 != v25) {
                    break;
                  }
                }
                v27 = (_QWORD*)*v27;
              } while (v27 != nullptr);
            }
          }
        }
      }
    }
  LABEL_26:;
  }
}

#pragma GCC visibility pop
