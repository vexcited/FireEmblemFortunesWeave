#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13064a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66bfc0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
RecommendFile_Unknown4_alt1(__int64 a1) __asm__("RecommendFile_Unknown4");
__int64 GameRoutine_1306ac0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c060;
extern __int64 GameData_21c9fd8;
void __attribute__((noreturn)) GameRoutine_13033d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__attribute__((swiftcall)) void
RecommendFile_1302360_alt1(PSEUDO_X8 x8_, unsigned __int64 result, int a2,
                           int a3, __int64 a4) __asm__("RecommendFile_1302360");
__int64 GameHr_1306ac0(__int64 result, _QWORD*, __int64, __int64*, __int64);
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 Resources_66bfc0(unsigned __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_13064a0_alt1(__int64, unsigned int,
                              __int64) __asm__("GameRoutine_13064a0");
void __attribute__((noreturn))
GameRoutine_13033d0_alt1() __asm__("GameRoutine_13033d0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RecommendFile_Unknown4(__int64 a1);
__attribute__((swiftcall)) void RecommendFile_1302360(PSEUDO_X8 x8_,
                                                      unsigned __int8 a1,
                                                      int a2, int a3,
                                                      __int64 a4);

void RecommendFile_Unknown4(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int** v13;
  unsigned int** v14;
  unsigned int* v15;
  unsigned int v16;
  unsigned int v17;

  v1 = (_QWORD*)(a1 + 8);
  v2 = v1;
  if (v1[18] != 0) {
    v3 = (_QWORD*)v1[17];
    if (v3 != nullptr) {
      v4 = fw_memory_g_heap_manager_ptr;
      do {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v6, (__int64)v3);
        v3 = v5;
      } while (v5 != nullptr);
    }
    v7 = v2[16];
    v2[17] = 0;
    if (v7 != 0) {
      v8 = v7 & 7;
      if (v7 >= 8) {
        v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(v2[15] + 8 * v9) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 8) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 16) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 24) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 32) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 40) = 0;
          *(_QWORD*)(v2[15] + 8 * v9 + 48) = 0;
          v11 = v2[15] + 8 * v9;
          v9 += 8;
          *(_QWORD*)(v11 + 56) = 0;
        } while (v10 != v9);
      }
      else {
        v9 = 0;
      }
      if (v8 != 0) {
        v12 = 8 * v9;
        do {
          --v8;
          *(_QWORD*)(v2[15] + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    v2[18] = 0;
  }
  v13 = (unsigned int**)v2[7];
  v14 = (unsigned int**)v2[8];
  while (v13 != v14) {
    v15 = *v13;
    v16 = **v13;
    if (v16 != 0) {
      GameRoutine_13064a0_alt1((__int64)v2, v16, (__int64)*v13);
    }
    v17 = Resources_66bfc0((unsigned __int64*)v15);
    if (v17 != 0) {
      GameRoutine_13064a0_alt1((__int64)v2, v17, (__int64)v15);
    }
    ++v13;
  }
}

__attribute__((swiftcall)) void RecommendFile_1302360(PSEUDO_X8 x8_,
                                                      unsigned __int8 a1,
                                                      int a2, int a3,
                                                      __int64 a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  _QWORD* v11;
  __int64 v12;
  bool v14;
  _BYTE* v16;
  int v17;
  _QWORD* v18;
  int v19;
  unsigned __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64* v34;
  int v35;
  __int64* v36;
  signed __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;

  v5 = a5;
  a5[1] = 0;
  a5[2] = 0;
  *a5 = 0;
  v7 = *(__int64**)(GameData_21c9fd8 + 64);
  v6 = *(__int64**)(GameData_21c9fd8 + 72);
  if (v7 == v6) {
    return;
  }
  v8 = a1;
  v11 = nullptr;
  v56 = a1;
  do {
    v12 = *v7;
    v14 = v8 != *(unsigned __int8*)(*v7 + 64) ||
          a2 != *(unsigned __int8*)(*v7 + 65) ||
          a3 < *(unsigned __int8*)(*v7 + 66);
    if (!v14 && a3 <= *(unsigned __int8*)(*v7 + 67)) {
      v16 = *(_BYTE**)(v12 + 72);
      if (v16 == nullptr || *v16 == 0) {
        goto LABEL_55;
      }
      if (a4 != 0) {
        if (*v16 == 33) {
          do {
            v17 = (unsigned __int8)*++v16;
          } while (v17 == 32);
          v18 = v11;
          v19 = 0;
          v20 = game_HashString_alt1((__int64)v16);
          if (v20 != 0) {
          LABEL_23:
            v11 = v18;
            v21 = *(_QWORD**)(a4 + 8);
            v22 = v21[2];
            if (v22 == 0 || v21[4] == 0) {
              goto LABEL_54;
            }
            v24 = v22 - 1;
            if ((v22 & (v22 - 1)) != 0) {
              v25 = v20;
              if (v20 >= v22) {
                v25 = v20 % v22;
              }
            }
            else {
              v25 = v24 & v20;
            }
            v26 = *(_QWORD**)(v21[1] + 8 * v25);
            if (v26 == nullptr) {
              goto LABEL_54;
            }
            v27 = (_QWORD*)*v26;
            if (v27 == nullptr) {
              goto LABEL_54;
            }
            if ((v22 & v24) == 0) {
              while (1) {
                v30 = v27[1];
                if (v20 == v30) {
                  if (v27[2] == v20) {
                    goto LABEL_50;
                  }
                }
                else if ((v30 & v24) != v25) {
                  goto LABEL_54;
                }
                v27 = (_QWORD*)*v27;
                v29 = 0;
                if (v27 == nullptr) {
                  goto LABEL_52;
                }
              }
            }
            while (1) {
              v28 = v27[1];
              if (v20 == v28) {
                if (v27[2] == v20) {
                LABEL_50:
                  v31 = v27[3];
                  if (v31 != 0) {
                    v29 = *(_DWORD*)(v31 + 32) != 0;
                  LABEL_52:
                    if (v19 == v29) {
                    LABEL_55:
                      v32 = v5[2];
                      if ((unsigned __int64)v11 < v32) {
                        *v11++ = v12;
                      }
                      else {
                        v33 = *v5;
                        v34 = v6;
                        v35 = a3;
                        v36 = v5;
                        v37 = (signed __int64)v11 - *v5;
                        v38 = (v37 >> 3) + 1;
                        if (v38 >> 61 != 0) {
                          GameRoutine_13033d0_alt1();
                        }
                        v39 = v32 - v33;
                        if (v39 >> 2 > v38) {
                          v38 = v39 >> 2;
                        }
                        if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v40 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v40 = v38;
                        }
                        if (v40 != 0) {
                          if (v40 >> 61 != 0) {
                            GameRoutine_60a210_alt1();
                          }
                          v41 = fw_memory_HeapManager_Allocate_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40,
                              16, 0);
                        }
                        else {
                          v41 = 0;
                        }
                        v42 = v41 + 8 * v40;
                        v43 = v41 + v37 - 8 * (v37 >> 3);
                        *(_QWORD*)(v41 + v37) = v12;
                        v44 = v41 + v37 + 8;
                        memcpy_alt1(v43, v33, v37);
                        *v36 = v43;
                        v5 = v36;
                        v36[2] = v42;
                        if (v33 != 0) {
                          v45 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v45 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                              v33);
                        }
                        a3 = v35;
                        v8 = v56;
                        v6 = v34;
                        v11 = (_QWORD*)v44;
                      }
                      v5[1] = (__int64)v11;
                    }
                    goto LABEL_5;
                  }
                LABEL_54:
                  if (v19 == 0) {
                    goto LABEL_55;
                  }
                  goto LABEL_5;
                }
              }
              else {
                if (v28 >= v22) {
                  v28 %= v22;
                }
                if (v28 != v25) {
                  goto LABEL_54;
                }
              }
              v27 = (_QWORD*)*v27;
              if (v27 == nullptr) {
                goto LABEL_54;
              }
            }
          }
        }
        else {
          v18 = v11;
          v19 = 1;
          v20 = game_HashString_alt1((__int64)v16);
          if (v20 != 0) {
            goto LABEL_23;
          }
        }
        v11 = v18;
        if (v19 == 0) {
          goto LABEL_55;
        }
      }
    }
  LABEL_5:
    ++v7;
  } while (v7 != v6);
  v46 = *v5;
  v47 = (__int64)v11 - *v5;
  if (v11 != (_QWORD*)*v5) {
    v48 = v47 >> 3;
    v49 = v11;
    if (v47 >> 3 < 129) {
      v53 = 0;
    LABEL_79:
      GameHr_1306ac0(v46, v49, v48, nullptr, v53);
    }
    else {
      v50 = v47 >> 3;
      v51 = GameData_212c060;
      while (1) {
        v52 = (__int64*)GameRoutine_1a09d20_alt1(8 * v50, v51);
        if (v52 != nullptr) {
          break;
        }
        v53 = v50 >> 1;
        v14 = v50 > 1;
        v50 >>= 1;
        if (!v14) {
          goto LABEL_79;
        }
      }
      v54 = (__int64)v52;
      GameHr_1306ac0(v46, v49, v48, v52, v50);
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v54);
    }
  }
}

#pragma GCC visibility pop
