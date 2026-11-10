#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13064a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_66bfc0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RecommendFile_Unknown4(__int64 a1);
__int64 GameRoutine_1306ac0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_212c060;
extern __int64 GameData_21c9fd8;
void __attribute__((noreturn)) GameRoutine_13033d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__attribute__((swiftcall)) void RecommendFile_1302360(PSEUDO_X8 x8_,
                                                      unsigned __int64 result,
                                                      int a2, int a3,
                                                      __int64 a4);

__int64 RecommendFile_Unknown4(__int64 a1)
{
  __int64 result;
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
  __int64 v16;

  result = a1 + 8;
  v2 = (_QWORD*)result;
  if (*(_QWORD*)(result + 144) != 0) {
    v3 = *(_QWORD**)(result + 136);
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
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
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
    if ((_DWORD)v16 != 0) {
      GameRoutine_13064a0(v2, v16, *v13);
    }
    result = GameRoutine_66bfc0(v15);
    if ((_DWORD)result != 0) {
      result = GameRoutine_13064a0(v2, (unsigned int)result, v15);
    }
    ++v13;
  }
  return result;
}

__attribute__((swiftcall)) void RecommendFile_1302360(PSEUDO_X8 x8_,
                                                      unsigned __int64 result,
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
  int v16;
  _QWORD* v17;
  int v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  int v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  int v53;

  v5 = a5;
  a5[1] = 0;
  a5[2] = 0;
  *a5 = 0;
  v7 = *(__int64**)(GameData_21c9fd8 + 64);
  v6 = *(__int64**)(GameData_21c9fd8 + 72);
  if (v7 == v6) {
    result;
    return;
  }
  v8 = (unsigned __int8)result;
  v11 = nullptr;
  v53 = (unsigned __int8)result;
  do {
    v12 = *v7;
    v14 = v8 != *(unsigned __int8*)(*v7 + 64) ||
          a2 != *(unsigned __int8*)(*v7 + 65) ||
          a3 < *(unsigned __int8*)(*v7 + 66);
    if (!v14 && a3 <= *(unsigned __int8*)(*v7 + 67)) {
      result = *(_QWORD*)(v12 + 72);
      if (result == 0 || *(_BYTE*)result == 0) {
        goto LABEL_55;
      }
      if (a4 != 0) {
        if (*(_BYTE*)result == 33) {
          do {
            v16 = *(unsigned __int8*)++result;
          } while (v16 == 32);
          v17 = v11;
          v18 = 0;
          result = game_HashString(result);
          if (result != 0) {
          LABEL_23:
            v11 = v17;
            v19 = *(_QWORD**)(a4 + 8);
            v20 = v19[2];
            if (v20 == 0 || v19[4] == 0) {
              goto LABEL_54;
            }
            v22 = v20 - 1;
            if ((v20 & (v20 - 1)) != 0) {
              v23 = result;
              if (result >= v20) {
                v23 = result % v20;
              }
            }
            else {
              v23 = v22 & result;
            }
            v24 = *(_QWORD**)(v19[1] + 8 * v23);
            if (v24 == nullptr) {
              goto LABEL_54;
            }
            v25 = (_QWORD*)*v24;
            if (v25 == nullptr) {
              goto LABEL_54;
            }
            if ((v20 & v22) == 0) {
              while (1) {
                v28 = v25[1];
                if (result == v28) {
                  if (v25[2] == result) {
                    goto LABEL_50;
                  }
                }
                else if ((v28 & v22) != v23) {
                  goto LABEL_54;
                }
                v25 = (_QWORD*)*v25;
                v27 = 0;
                if (v25 == nullptr) {
                  goto LABEL_52;
                }
              }
            }
            while (1) {
              v26 = v25[1];
              if (result == v26) {
                if (v25[2] == result) {
                LABEL_50:
                  v29 = v25[3];
                  if (v29 != 0) {
                    v27 = *(_DWORD*)(v29 + 32) != 0;
                  LABEL_52:
                    if (v18 == v27) {
                    LABEL_55:
                      v30 = v5[2];
                      if ((unsigned __int64)v11 < v30) {
                        *v11++ = v12;
                      }
                      else {
                        v31 = *v5;
                        v32 = v6;
                        v33 = a3;
                        v34 = v5;
                        v35 = (__int64)v11 - *v5;
                        v36 = (v35 >> 3) + 1;
                        if (v36 >> 61 != 0) {
                          GameRoutine_13033d0();
                        }
                        v37 = v30 - v31;
                        if (v37 >> 2 > v36) {
                          v36 = v37 >> 2;
                        }
                        if ((unsigned __int64)v37 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v38 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v38 = v36;
                        }
                        if (v38 != 0) {
                          if (v38 >> 61 != 0) {
                            GameRoutine_60a210(result);
                          }
                          v39 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v38,
                              16, 0);
                        }
                        else {
                          v39 = 0;
                        }
                        v40 = v39 + 8 * v38;
                        v41 = v39 + v35 - 8 * (v35 >> 3);
                        *(_QWORD*)(v39 + v35) = v12;
                        v42 = v39 + v35 + 8;
                        result = memcpy(v41, v31, v35);
                        *v34 = v41;
                        v5 = v34;
                        v34[2] = v40;
                        if (v31 != 0) {
                          v43 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v43 = 56;
                          }
                          result = nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v43);
                        }
                        a3 = v33;
                        v8 = v53;
                        v6 = v32;
                        v11 = (_QWORD*)v42;
                      }
                      v5[1] = (__int64)v11;
                    }
                    goto LABEL_5;
                  }
                LABEL_54:
                  if (v18 == 0) {
                    goto LABEL_55;
                  }
                  goto LABEL_5;
                }
              }
              else {
                if (v26 >= v20) {
                  v26 %= v20;
                }
                if (v26 != v23) {
                  goto LABEL_54;
                }
              }
              v25 = (_QWORD*)*v25;
              if (v25 == nullptr) {
                goto LABEL_54;
              }
            }
          }
        }
        else {
          v17 = v11;
          v18 = 1;
          result = game_HashString(result);
          if (result != 0) {
            goto LABEL_23;
          }
        }
        v11 = v17;
        if (v18 == 0) {
          goto LABEL_55;
        }
      }
    }
  LABEL_5:
    ++v7;
  } while (v7 != v6);
  v44 = *v5;
  v45 = (__int64)v11 - *v5;
  if (v11 != (_QWORD*)*v5) {
    v46 = v45 >> 3;
    v47 = v11;
    if (v45 >> 3 < 129) {
      v51 = 0;
      {
        GameRoutine_1306ac0(v44, v47, v46, 0, v51);
        return;
      }
    }
    else {
      v48 = v45 >> 3;
      v49 = GameData_212c060;
      while (1) {
        v50 = GameRoutine_1a09d20(8 * v48, v49);
        if (v50 != 0) {
          break;
        }
        v51 = v48 >> 1;
        v14 = v48 > 1;
        v48 >>= 1;
        if (!v14) {
          GameRoutine_1306ac0(v44, v47, v46, 0, v51);
          return;
        }
      }
      GameRoutine_1306ac0(v44, v47, v46, v50, v48);
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      {
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v52);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
