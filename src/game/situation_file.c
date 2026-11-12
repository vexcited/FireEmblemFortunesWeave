#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_905c80(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21ca030;
extern __int64 GameData_21f2518;
extern __int64 GameData_21f2520;
extern __int64 GameData_21f2528;
extern __int64 GameData_21f2530;
extern __int64 GameData_21f2540;
extern __int64 GameData_21f2548;
extern __int64 GameData_21f2550;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c890[3];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
void __attribute__((noreturn)) GameRoutine_902bb0(void);
void SituationFile_Unknown4();
__int64 SituationFile_Unknown5_alt1() __asm__("SituationFile_Unknown5");
__int64 SituationFile_Unknown6_alt1() __asm__("SituationFile_Unknown6");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___next_prime(_QWORD);
extern int GameData_21f2538;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
__int64* SituationFile_905c80(unsigned __int64* a1, __int64** a2);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn))
GameRoutine_902bb0_alt1() __asm__("GameRoutine_902bb0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SituationFile_Unknown5();
void SituationFile_Unknown6();

void SituationFile_Unknown4()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64** v12;
  unsigned __int64** v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  unsigned __int64** v24;
  __int64* v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64* v41;
  unsigned __int64 v42;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64* v65;

  if (GameData_21f2530 != 0) {
    v0 = (_QWORD*)GameData_21f2528;
    if (GameData_21f2528 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v0;
        v4 = v0[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v1;
          v0[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v1 + v2, (__int64)v0);
        v0 = v3;
      } while (v3 != nullptr);
    }
    GameData_21f2528 = 0;
    if (GameData_21f2520 != 0) {
      v7 = GameData_21f2520 & 7;
      if ((unsigned __int64)GameData_21f2520 >= 8) {
        v9 = GameData_21f2520 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21f2518 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 48) = 0;
          v10 = GameData_21f2518 + 8 * v8;
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
          *(_QWORD*)(GameData_21f2518 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21f2530 = 0;
  }
  v64 = 0;
  GameData_21f2548 = GameData_21f2540;
  v12 = *(unsigned __int64***)(GameData_21ca030 + 64);
  v13 = *(unsigned __int64***)(GameData_21ca030 + 72);
  if (v12 != v13) {
    v14 = GameData_212c890[0];
    do {
      v16 = *v12;
      v17 = **v12;
      if (v17 == 0) {
        v65 = &v64;
        v22 = SituationFile_905c80(&v64, (__int64**)&v65);
        v24 = (unsigned __int64**)v22[4];
        v23 = v22[5];
        v25 = v22;
        if ((unsigned __int64)v24 < v23) {
          *v24 = v16;
          v15 = (__int64)(v24 + 1);
        }
        else {
          v26 = v22[3];
          v27 = (char*)v24 - v26;
          v28 = ((__int64)v24 - v26) >> 3;
          v29 = v28 + 1;
          if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
            GameRoutine_902bb0_alt1();
          }
          v30 = v23 - v26;
          if (v30 >> 2 > v29) {
            v29 = v30 >> 2;
          }
          if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
            v31 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v31 = v29;
          }
          if (v31 != 0) {
            if (v31 >> 61 != 0) {
              goto LABEL_111;
            }
            v32 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
          }
          else {
            v32 = 0;
          }
          v37 = v32 + 8 * v31;
          v38 = (unsigned __int64)v24 - v26;
          v39 = (__int64)&v27[v32 + -8 * v28];
          *(_QWORD*)&v27[v32] = v16;
          v15 = (__int64)&v27[v32 + 8];
          memcpy_alt1(v39, v26, v38);
          v25[3] = v39;
          v25[4] = v15;
          v25[5] = v37;
          if (v26 != 0) {
            v40 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v26);
          }
        }
        v25[4] = v15;
        goto LABEL_26;
      }
      v18 = *(_QWORD*)(*v14 + 96);
      if (v18 == 0 || *(_QWORD*)(*v14 + 112) == 0) {
        goto LABEL_26;
      }
      v20 = v18 - 1;
      if ((v18 & (v18 - 1)) != 0) {
        v21 = **v12;
        if (v17 >= v18) {
          v21 = v17 % v18;
        }
      }
      else {
        v21 = v20 & v17;
      }
      v33 = *(_QWORD**)(*(_QWORD*)(*v14 + 88) + 8 * v21);
      if (v33 == nullptr) {
        goto LABEL_26;
      }
      v34 = (_QWORD*)*v33;
      if (v34 == nullptr) {
        goto LABEL_26;
      }
      if ((v18 & v20) == 0) {
        while (1) {
          v36 = v34[1];
          if (v36 == v17) {
            if (v34[2] == v17) {
              goto LABEL_68;
            }
          }
          else if ((v36 & v20) != v21) {
            goto LABEL_26;
          }
          v34 = (_QWORD*)*v34;
          if (v34 == nullptr) {
            goto LABEL_26;
          }
        }
      }
      while (1) {
        v35 = v34[1];
        if (v35 == v17) {
          break;
        }
        if (v35 >= v18) {
          v35 %= v18;
        }
        if (v35 != v21) {
          goto LABEL_26;
        }
      LABEL_51:
        v34 = (_QWORD*)*v34;
        if (v34 == nullptr) {
          goto LABEL_26;
        }
      }
      if (v34[2] != v17) {
        goto LABEL_51;
      }
    LABEL_68:
      v41 = (unsigned __int64*)v34[3];
      if (v41 != nullptr) {
        v42 = *v41;
        if (GameData_21f2520 != 0 && GameData_21f2530 != 0) {
          v44 = GameData_21f2520 - 1;
          if ((GameData_21f2520 & (GameData_21f2520 - 1)) != 0) {
            v45 = *v41;
            if (v42 >= GameData_21f2520) {
              v45 = v42 % GameData_21f2520;
            }
          }
          else {
            v45 = v44 & v42;
          }
          v46 = *(_QWORD**)(GameData_21f2518 + 8 * v45);
          if (v46 != nullptr) {
            v47 = (_QWORD*)*v46;
            if (v47 != nullptr) {
              if ((GameData_21f2520 & v44) == 0) {
                while (1) {
                  v49 = v47[1];
                  if (v49 == v42) {
                    if (v47[2] == v42) {
                      goto LABEL_26;
                    }
                  }
                  else if ((v49 & v44) != v45) {
                    goto LABEL_92;
                  }
                  v47 = (_QWORD*)*v47;
                  if (v47 == nullptr) {
                    goto LABEL_92;
                  }
                }
              }
              do {
                v48 = v47[1];
                if (v48 == v42) {
                  if (v47[2] == v42) {
                    goto LABEL_26;
                  }
                }
                else {
                  if (v48 >= GameData_21f2520) {
                    v48 %= (unsigned __int64)GameData_21f2520;
                  }
                  if (v48 != v45) {
                    break;
                  }
                }
                v47 = (_QWORD*)*v47;
              } while (v47 != nullptr);
            }
          }
        }
      LABEL_92:
        v64 = *v41;
        v65 = &v64;
        v50 = SituationFile_905c80(&v64, (__int64**)&v65);
        v51 = v50[3];
        v50[6] = (__int64)v41;
        v50[4] = v51;
        v52 = GameData_21f2548;
        if (GameData_21f2548 < (unsigned __int64)GameData_21f2550) {
          *(_QWORD*)GameData_21f2548 = v41;
          v53 = v52 + 8;
          goto LABEL_108;
        }
        v54 = GameData_21f2540;
        v55 = GameData_21f2548 - GameData_21f2540;
        v56 = (GameData_21f2548 - GameData_21f2540) >> 3;
        v57 = v56 + 1;
        if ((unsigned __int64)(v56 + 1) >> 61 != 0) {
          GameRoutine_688200_alt1();
        }
        v58 = GameData_21f2550 - GameData_21f2540;
        if ((GameData_21f2550 - GameData_21f2540) >> 2 > v57) {
          v57 = v58 >> 2;
        }
        if ((unsigned __int64)v58 >= 0x7FFFFFFFFFFFFFF8LL) {
          v59 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v59 = v57;
        }
        if (v59 != 0) {
          if (v59 >> 61 == 0) {
            v60 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v59, 16, 0);
            goto LABEL_104;
          }
        LABEL_111:
          GameRoutine_60a210_alt1();
        }
        v60 = 0;
      LABEL_104:
        v61 = v60 + 8 * v59;
        v62 = v60 + v55 - 8 * v56;
        *(_QWORD*)(v60 + v55) = v41;
        v53 = v60 + v55 + 8;
        memcpy_alt1(v62, v54, v55);
        GameData_21f2540 = v62;
        GameData_21f2548 = v53;
        GameData_21f2550 = v61;
        if (v54 != 0) {
          v63 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v63 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v63, v54);
        }
      LABEL_108:
        GameData_21f2548 = v53;
      }
    LABEL_26:
      ++v12;
    } while (v12 != v13);
  }
}

void SituationFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if (GameData_21f2530 != 0) {
    v0 = (_QWORD*)GameData_21f2528;
    if (GameData_21f2528 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v0;
        v4 = v0[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v1;
          v0[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v1 + v2, (__int64)v0);
        v0 = v3;
      } while (v3 != nullptr);
    }
    GameData_21f2528 = 0;
    if (GameData_21f2520 != 0) {
      v7 = GameData_21f2520 & 7;
      if ((unsigned __int64)GameData_21f2520 >= 8) {
        v9 = GameData_21f2520 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21f2518 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 48) = 0;
          v10 = GameData_21f2518 + 8 * v8;
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
          *(_QWORD*)(GameData_21f2518 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21f2530 = 0;
  }
  GameData_21f2548 = GameData_21f2540;
}

void SituationFile_Unknown6()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  if (GameData_21f2530 != 0) {
    v0 = (_QWORD*)GameData_21f2528;
    if (GameData_21f2528 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v0;
        v4 = v0[3];
        if (v4 != 0) {
          v5 = *(_QWORD*)v1;
          v0[4] = v4;
          if (*(_QWORD*)(v5 + 200) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v5 + v6, v4);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v1 + v2, (__int64)v0);
        v0 = v3;
      } while (v3 != nullptr);
    }
    GameData_21f2528 = 0;
    if (GameData_21f2520 != 0) {
      v7 = GameData_21f2520 & 7;
      if ((unsigned __int64)GameData_21f2520 >= 8) {
        v9 = GameData_21f2520 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(GameData_21f2518 + 8 * v8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 16) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 24) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 32) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 40) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v8 + 48) = 0;
          v10 = GameData_21f2518 + 8 * v8;
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
          *(_QWORD*)(GameData_21f2518 + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    GameData_21f2530 = 0;
  }
  GameData_21f2548 = GameData_21f2540;
}

__int64* SituationFile_905c80(unsigned __int64* a1, __int64** a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* result;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  _BOOL8 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 primeEm;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD** v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  unsigned __int64 v47;

  v3 = *a1;
  v5 = GameData_21f2520;
  if (GameData_21f2520 != 0) {
    v6 = GameData_21f2520 - 1;
    if ((GameData_21f2520 & (GameData_21f2520 - 1)) != 0) {
      v2 = *a1;
      if (v3 >= GameData_21f2520) {
        v2 = v3 % GameData_21f2520;
      }
    }
    else {
      v2 = v6 & v3;
    }
    v7 = *(__int64***)(GameData_21f2518 + 8 * v2);
    if (v7 != nullptr) {
      result = *v7;
      if (*v7 != nullptr) {
        if ((GameData_21f2520 & v6) == 0) {
          while (1) {
            v10 = result[1];
            if (v10 == v3) {
              if (result[2] == v3) {
                return result;
              }
            }
            else if ((v10 & v6) != v2) {
              goto LABEL_22;
            }
            result = (__int64*)*result;
            if (result == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v9 = result[1];
          if (v9 == v3) {
            if (result[2] == v3) {
              return result;
            }
          }
          else {
            if (v9 >= GameData_21f2520) {
              v9 %= (unsigned __int64)GameData_21f2520;
            }
            if (v9 != v2) {
              break;
            }
          }
          result = (__int64*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_22:
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (__int64*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  v12 = *a2;
  *result = 0;
  result[1] = v3;
  v13 = *(float*)&GameData_21f2538;
  v14 = *v12;
  result[5] = 0;
  result[6] = 0;
  result[3] = 0;
  result[4] = 0;
  result[2] = v14;
  v15 = (float)(unsigned __int64)(GameData_21f2530 + 1);
  if (v5 == 0 || (float)(v13 * (float)v5) < v15) {
    v16 = v15 / v13;
    v17 = true;
    if (v5 >= 3) {
      v17 = (v5 & (v5 - 1)) != 0;
    }
    v18 = v17 | (2 * v5);
    v19 = vcvtps_u64_f32(v16);
    if (v18 <= v19) {
      primeEm = v19;
    }
    else {
      primeEm = v18;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v21 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v21;
      v5 = GameData_21f2520;
    }
    if (primeEm <= v5) {
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      v28 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f2530 /
                           *(float*)&GameData_21f2538);
      if (v5 < 3 || (v5 & (v5 - 1)) != 0) {
        v40 = result;
        v28 = std___1___next_prime(v28);
        result = v40;
      }
      else {
        v29 = 1LL << -(char)__clz(v28 - 1);
        if (v28 >= 2) {
          v28 = v29;
        }
      }
      if (primeEm <= v28) {
        primeEm = v28;
      }
      if (primeEm >= v5) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v41 = GameData_21f2518;
        GameData_21f2518 = 0;
        if (v41 != 0) {
          v42 = result;
          v43 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v43 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v11 + v43, v41);
          result = v42;
        }
        GameData_21f2520 = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v22 = result;
    v23 = fw_memory_HeapManager_Allocate_alt1(*v11, 8 * primeEm, 16, 0);
    v24 = GameData_21f2518;
    GameData_21f2518 = v23;
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*v11 + 200) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v11 + v25, v24);
    }
    v26 = primeEm & 7;
    GameData_21f2520 = primeEm;
    if (primeEm >= 8) {
      v27 = 0;
      result = v22;
      do {
        *(_QWORD*)(GameData_21f2518 + 8 * v27) = 0;
        *(_QWORD*)(GameData_21f2518 + 8 * v27 + 8) = 0;
        *(_QWORD*)(GameData_21f2518 + 8 * v27 + 16) = 0;
        *(_QWORD*)(GameData_21f2518 + 8 * v27 + 24) = 0;
        *(_QWORD*)(GameData_21f2518 + 8 * v27 + 32) = 0;
        *(_QWORD*)(GameData_21f2518 + 8 * v27 + 40) = 0;
        *(_QWORD*)(GameData_21f2518 + 8 * v27 + 48) = 0;
        v30 = GameData_21f2518 + 8 * v27;
        v27 += 8;
        *(_QWORD*)(v30 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v27);
    }
    else {
      v27 = 0;
      result = v22;
    }
    if ((primeEm & 7) != 0) {
      v31 = 8 * v27;
      do {
        --v26;
        *(_QWORD*)(GameData_21f2518 + v31) = 0;
        v31 += 8;
      } while (v26 != 0);
    }
    v32 = (_QWORD**)GameData_21f2528;
    if (GameData_21f2528 != 0) {
      v33 = *(_QWORD*)(GameData_21f2528 + 8);
      v34 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v33 >= primeEm) {
          v33 %= primeEm;
        }
        *(_QWORD*)(GameData_21f2518 + 8 * v33) = &GameData_21f2528;
        v35 = *v32;
        if (*v32 == nullptr) {
          goto LABEL_83;
        }
        while (1) {
          v36 = v35[1];
          if (v36 >= primeEm) {
            v36 %= primeEm;
          }
          if (v36 != v33) {
            if (*(_QWORD*)(GameData_21f2518 + 8 * v36) == 0) {
              *(_QWORD*)(GameData_21f2518 + 8 * v36) = v32;
              goto LABEL_60;
            }
            *v32 = (_QWORD*)*v35;
            *v35 = **(_QWORD**)(GameData_21f2518 + 8 * v36);
            **(_QWORD**)(GameData_21f2518 + 8 * v36) = v35;
            v35 = v32;
          }
          v36 = v33;
        LABEL_60:
          v32 = (_QWORD**)v35;
          v35 = (_QWORD*)*v35;
          v33 = v36;
          if (v35 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v37 = v33 & v34;
      *(_QWORD*)(GameData_21f2518 + 8 * v37) = &GameData_21f2528;
      while (1) {
        v38 = *v32;
        if (*v32 == nullptr) {
          break;
        }
        v39 = v38[1] & v34;
        if (v39 == v37) {
          v32 = (_QWORD**)*v32;
        }
        else if (*(_QWORD*)(GameData_21f2518 + 8 * v39) != 0) {
          *v32 = (_QWORD*)*v38;
          *v38 = **(_QWORD**)(GameData_21f2518 + 8 * v39);
          **(_QWORD**)(GameData_21f2518 + 8 * v39) = v38;
        }
        else {
          *(_QWORD*)(GameData_21f2518 + 8 * v39) = v32;
          v32 = (_QWORD**)v38;
          v37 = v39;
        }
      }
    }
  LABEL_83:
    v5 = GameData_21f2520;
    if ((v5 & (v5 - 1)) != 0) {
      if (v3 >= GameData_21f2520) {
        v2 = v3 % GameData_21f2520;
      }
      else {
        v2 = v3;
      }
    }
    else {
      v2 = (GameData_21f2520 - 1) & v3;
    }
  }
  v44 = GameData_21f2518;
  v45 = *(__int64**)(GameData_21f2518 + 8 * v2);
  if (v45 != nullptr) {
    *result = *v45;
    *v45 = (__int64)result;
  }
  else {
    v46 = GameData_21f2528;
    GameData_21f2528 = (__int64)result;
    *result = v46;
    *(_QWORD*)(v44 + 8 * v2) = &GameData_21f2528;
    if (*result != 0) {
      v47 = *(_QWORD*)(*result + 8);
      if ((v5 & (v5 - 1)) != 0) {
        if (v47 >= v5) {
          v47 %= v5;
        }
      }
      else {
        v47 &= v5 - 1;
      }
      *(_QWORD*)(GameData_21f2518 + 8 * v47) = result;
    }
  }
  ++GameData_21f2530;
  return result;
}

#pragma GCC visibility pop
