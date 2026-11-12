#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_map_history_anonymous_1241580_alt1(
    __int64*, unsigned __int64) __asm__("game_map_history_anonymous_1241580");
void game_map_history_anonymous_1241280_alt1(
    __int64* a1, unsigned __int64 a2, int a3,
    int a4) __asm__("game_map_history_anonymous_1241280");
void game_map_history_anonymous_1241580_alt2(
    float* a1,
    unsigned __int64 a2) __asm__("game_map_history_anonymous_1241580");
unsigned __int64** game_map_history_anonymous_12427e0(unsigned __int64** result,
                                                      __int64 a2);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_map_history_anonymous_1241280(__int64 a1, unsigned __int64 a2, int a3,
                                        int a4);
void game_map_history_anonymous_1241580(__int64 a1, unsigned __int64 a2);

void game_map_history_anonymous_1241280(__int64 a1, unsigned __int64 a2, int a3,
                                        int a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  float v18;
  _QWORD* v19;
  float v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64* v31;
  __int64 v32;
  __int64 v33;
  signed __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;

  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0) {
    v10 = v5 - 1;
    if ((v5 & (v5 - 1)) != 0) {
      v4 = a2;
      if (a2 >= v5) {
        v4 = a2 % v5;
      }
    }
    else {
      v4 = v10 & a2;
    }
    v11 = *(_QWORD**)(*(_QWORD*)(a1 + 24) + 8 * v4);
    if (v11 != nullptr) {
      v12 = (_QWORD*)*v11;
      if (v12 != nullptr) {
        if ((v5 & v10) == 0) {
          while (1) {
            v14 = v12[1];
            if (v14 == a2) {
              if (v12[2] == a2) {
                return;
              }
            }
            else if ((v14 & v10) != v4) {
              goto LABEL_22;
            }
            v12 = (_QWORD*)*v12;
            if (v12 == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = v12[1];
          if (v13 == a2) {
            if (v12[2] == a2) {
              return;
            }
          }
          else {
            if (v13 >= v5) {
              v13 %= v5;
            }
            if (v13 != v4) {
              break;
            }
          }
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0);
  v17 = *(_QWORD*)(a1 + 48);
  v18 = *(float*)(a1 + 56);
  v19 = (_QWORD*)v16;
  *(_QWORD*)(v16 + 8) = a2;
  *(_QWORD*)(v16 + 16) = a2;
  *(_DWORD*)(v16 + 24) = a4;
  *(_DWORD*)(v16 + 28) = a3;
  v20 = (float)(unsigned __int64)(v17 + 1);
  if (v5 == 0 || (float)(v18 * (float)v5) < v20) {
    v21 = v20 / v18;
    v22 = true;
    if (v5 >= 3) {
      v22 = (v5 & (v5 - 1)) != 0;
    }
    v23 = v22 | (2 * v5);
    v24 = vcvtps_u64_f32(v21);
    if (v23 <= v24) {
      v25 = v24;
    }
    else {
      v25 = v23;
    }
    game_map_history_anonymous_1241580(a1 + 24, v25);
    v5 = *(_QWORD*)(a1 + 32);
    if ((v5 & (v5 - 1)) != 0) {
      if (a2 >= v5) {
        v4 = a2 % v5;
      }
      else {
        v4 = a2;
      }
    }
    else {
      v4 = (v5 - 1) & a2;
    }
  }
  v26 = *(_QWORD*)(a1 + 24);
  v27 = *(_QWORD**)(v26 + 8 * v4);
  if (v27 != nullptr) {
    *v19 = *v27;
    *v27 = v19;
  }
  else {
    v28 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 40) = v19;
    *v19 = v28;
    *(_QWORD*)(v26 + 8 * v4) = a1 + 40;
    if (v28 != 0) {
      v29 = *(_QWORD*)(v28 + 8);
      if ((v5 & (v5 - 1)) != 0) {
        if (v29 >= v5) {
          v29 %= v5;
        }
      }
      else {
        v29 &= v5 - 1;
      }
      *(_QWORD*)(*(_QWORD*)(a1 + 24) + 8 * v29) = v19;
    }
  }
  ++*(_QWORD*)(a1 + 48);
  v31 = *(unsigned __int64**)(a1 + 8);
  v30 = *(_QWORD*)(a1 + 16);
  if ((unsigned __int64)v31 >= v30) {
    v33 = *(_QWORD*)a1;
    v34 = (signed __int64)v31 - *(_QWORD*)a1;
    v35 = (v34 >> 3) + 1;
    if (v35 >> 61 != 0) {
      GameRoutine_65c760();
    }
    v36 = v30 - v33;
    if (v36 >> 2 > v35) {
      v35 = v36 >> 2;
    }
    if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
      v37 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v37 = v35;
    }
    if (v37 != 0) {
      if (v37 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v38 = fw_memory_HeapManager_Allocate(*v15, 8 * v37, 16, 0);
    }
    else {
      v38 = 0;
    }
    v39 = v38 + 8 * v37;
    v40 = v38 + v34 - 8 * (v34 >> 3);
    *(_QWORD*)(v38 + v34) = a2;
    v32 = v38 + v34 + 8;
    memcpy_alt1(v40, v33, v34);
    *(_QWORD*)a1 = v40;
    *(_QWORD*)(a1 + 8) = v32;
    *(_QWORD*)(a1 + 16) = v39;
    if (v33 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v15 + v41, v33);
    }
  }
  else {
    *v31 = a2;
    v32 = (__int64)(v31 + 1);
  }
  *(_QWORD*)(a1 + 8) = v32;
}

void game_map_history_anonymous_1241580(__int64 a1, unsigned __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 primeEm;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* i;
  unsigned __int64 v20;
  unsigned __int64 v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  if (a2 == 1) {
    primeEm = 2;
  }
  else {
    primeEm = a2;
    if ((a2 & (a2 - 1)) != 0) {
      primeEm = std___1___next_prime_alt1(a2);
    }
  }
  v4 = *(_QWORD*)(a1 + 8);
  if (primeEm <= v4) {
    if (primeEm >= v4) {
      return;
    }
    v11 = v4 >= 3 && (v4 & (v4 - 1)) == 0;
    v12 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                         *(float*)(a1 + 32));
    if (v11) {
      v24 = 1LL << -(char)__clz(v12 - 1);
      if (v12 >= 2) {
        v12 = v24;
      }
    }
    else {
      v12 = std___1___next_prime_alt1(v12);
    }
    if (primeEm <= v12) {
      primeEm = v12;
    }
    if (primeEm >= v4) {
      return;
    }
    if (primeEm == 0) {
      v25 = *(_QWORD*)a1;
      *(_QWORD*)a1 = 0;
      if (v25 != 0) {
        v26 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
      }
      *(_QWORD*)(a1 + 8) = 0;
      return;
    }
  }
  if (primeEm >> 61 != 0) {
    GameRoutine_60a210();
  }
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      8 * primeEm, 16, 0);
  v7 = *(_QWORD*)a1;
  *(_QWORD*)a1 = v6;
  if (v7 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v8, v7);
  }
  v9 = primeEm & 7;
  *(_QWORD*)(a1 + 8) = primeEm;
  if (primeEm >= 8) {
    v10 = 0;
    do {
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 8) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 16) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 24) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 32) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 40) = 0;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v10 + 48) = 0;
      v13 = *(_QWORD*)a1 + 8 * v10;
      v10 += 8;
      *(_QWORD*)(v13 + 56) = 0;
    } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v10);
  }
  else {
    v10 = 0;
  }
  if ((primeEm & 7) != 0) {
    v14 = 8 * v10;
    do {
      --v9;
      *(_QWORD*)(*(_QWORD*)a1 + v14) = 0;
      v14 += 8;
    } while (v9 != 0);
  }
  v16 = a1 + 16;
  v15 = *(_QWORD**)(a1 + 16);
  if (v15 != nullptr) {
    v17 = v15[1];
    v18 = primeEm - 1;
    if ((primeEm & (primeEm - 1)) == 0) {
      v21 = v17 & v18;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v21) = v16;
      while (1) {
        v22 = (_QWORD*)*v15;
        if (*v15 == 0) {
          break;
        }
        v23 = v22[1] & v18;
        if (v23 == v21) {
          v15 = (_QWORD*)*v15;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v23) != 0) {
          *v15 = *v22;
          *v22 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v23);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v23) = v22;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v23) = v15;
          v15 = v22;
          v21 = v23;
        }
      }
      return;
    }
    if (v17 >= primeEm) {
      v17 %= primeEm;
    }
    *(_QWORD*)(*(_QWORD*)a1 + 8 * v17) = v16;
    for (i = (_QWORD*)*v15; i != nullptr; v17 = v20) {
      v20 = i[1];
      if (v20 >= primeEm) {
        v20 %= primeEm;
      }
      if (v20 != v17) {
        if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v20) == 0) {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v20) = v15;
          goto LABEL_32;
        }
        *v15 = *i;
        *i = **(_QWORD**)(*(_QWORD*)a1 + 8 * v20);
        **(_QWORD**)(*(_QWORD*)a1 + 8 * v20) = i;
        i = v15;
      }
      v20 = v17;
    LABEL_32:
      v15 = i;
      i = (_QWORD*)*i;
    }
  }
}

unsigned __int64** game_map_history_anonymous_12427e0(unsigned __int64** result,
                                                      __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64* v7;
  unsigned __int64* v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64** v34;
  __int64* v35;
  unsigned __int64 v36;
  __int64 v37;

  v2 = *(int*)(a2 + 20);
  v3 = (char*)result[1] - (char*)*result;
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *result;
  v8 = result[1];
  while (v7 != v8) {
    v14 = (unsigned __int64)result[4];
    if (v14 != 0 && result[6] != nullptr) {
      v16 = *v7;
      v17 = v14 - 1;
      if ((v14 & (v14 - 1)) != 0) {
        v18 = *v7;
        if (v16 >= v14) {
          v18 = v16 % v14;
        }
      }
      else {
        v18 = v17 & v16;
      }
      v19 = (_QWORD*)result[3][v18];
      if (v19 != nullptr) {
        v20 = (_QWORD*)*v19;
        if (v20 != nullptr) {
          if ((v14 & v17) == 0) {
            while (1) {
              v22 = v20[1];
              if (v16 == v22) {
                if (v20[2] == v16) {
                  goto LABEL_29;
                }
              }
              else if ((v22 & v17) != v18) {
                goto LABEL_3;
              }
              v20 = (_QWORD*)*v20;
              if (v20 == nullptr) {
                goto LABEL_3;
              }
            }
          }
          do {
            v21 = v20[1];
            if (v16 == v21) {
              if (v20[2] == v16) {
              LABEL_29:
                v23 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v23 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v16;
                v24 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v24 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = BYTE1(v16);
                v25 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v25 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = BYTE2(v16);
                v26 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v26 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = BYTE3(v16);
                v27 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v27 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = BYTE4(v16);
                v28 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v28 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE5(v16);
                v29 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v29 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = BYTE6(v16);
                v30 = *(int*)(a2 + 20);
                *(_DWORD*)(a2 + 20) = v30 + 1;
                *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = HIBYTE(v16);
                v31 = (unsigned __int64)result[4];
                if (v31 == 0 || result[6] == nullptr) {
                  goto LABEL_52;
                }
                v32 = v31 - 1;
                if ((v31 & (v31 - 1)) != 0) {
                  v33 = v16;
                  if (v16 >= v31) {
                    v33 = v16 % v31;
                  }
                }
                else {
                  v33 = v32 & v16;
                }
                v34 = (__int64**)result[3][v33];
                if (v34 == nullptr || (v35 = *v34) == nullptr) {
                LABEL_52:
                  String_60a250("unordered_map::at: key not found");
                }
                if ((v31 & v32) == 0) {
                  while (1) {
                    v37 = v35[1];
                    if (v37 == v16) {
                      if (v35[2] == v16) {
                        goto LABEL_2;
                      }
                    }
                    else if ((v37 & v32) != v33) {
                      goto LABEL_52;
                    }
                    v35 = (__int64*)*v35;
                    if (v35 == nullptr) {
                      goto LABEL_52;
                    }
                  }
                }
                while (1) {
                  v36 = v35[1];
                  if (v36 == v16) {
                    if (v35[2] == v16) {
                    LABEL_2:
                      v9 = *(int*)(a2 + 20);
                      v10 = *((_DWORD*)v35 + 7);
                      *(_DWORD*)(a2 + 20) = v9 + 1;
                      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
                      v11 = *(int*)(a2 + 20);
                      *(_DWORD*)(a2 + 20) = v11 + 1;
                      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v10);
                      v12 = *(int*)(a2 + 20);
                      *(_DWORD*)(a2 + 20) = v12 + 1;
                      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE2(v10);
                      v13 = *(int*)(a2 + 20);
                      *(_DWORD*)(a2 + 20) = v13 + 1;
                      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = HIBYTE(v10);
                      goto LABEL_3;
                    }
                  }
                  else {
                    if (v36 >= v31) {
                      v36 %= v31;
                    }
                    if (v36 != v33) {
                      goto LABEL_52;
                    }
                  }
                  v35 = (__int64*)*v35;
                  if (v35 == nullptr) {
                    goto LABEL_52;
                  }
                }
              }
            }
            else {
              if (v21 >= v14) {
                v21 %= v14;
              }
              if (v21 != v18) {
                break;
              }
            }
            v20 = (_QWORD*)*v20;
          } while (v20 != nullptr);
        }
      }
    }
  LABEL_3:
    ++v7;
  }
  return result;
}

#pragma GCC visibility pop
