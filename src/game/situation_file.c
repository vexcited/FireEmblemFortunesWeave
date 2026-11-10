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
__int64 SituationFile_Unknown5();
__int64 SituationFile_Unknown6();

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
  _QWORD* v22;
  unsigned __int64 v23;
  unsigned __int64** v24;
  _QWORD* v25;
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
  char* v38;
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
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64* v64;

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
          nn_mem_StandardAllocator_Free(v5 + v6);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2);
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
  v63 = 0;
  GameData_21f2548 = GameData_21f2540;
  v12 = *(unsigned __int64***)(GameData_21ca030 + 64);
  v13 = *(unsigned __int64***)(GameData_21ca030 + 72);
  if (v12 != v13) {
    v14 = GameData_212c890[0];
    do {
      v16 = *v12;
      v17 = **v12;
      if (v17 == 0) {
        v64 = &v63;
        v22 = (_QWORD*)GameRoutine_905c80(&v63, &v64);
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
            GameRoutine_902bb0();
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
            v32 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
          }
          else {
            v32 = 0;
          }
          v37 = v32 + 8 * v31;
          v38 = (char*)v24 - v26;
          v39 = (__int64)&v27[v32 + -8 * v28];
          *(_QWORD*)&v27[v32] = v16;
          v15 = (__int64)&v27[v32 + 8];
          memcpy(v39, v26, v38);
          v25[3] = v39;
          v25[4] = v15;
          v25[5] = v37;
          if (v26 != 0) {
            v40 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v40 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
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
        v63 = *v41;
        v64 = &v63;
        v22 = (_QWORD*)GameRoutine_905c80(&v63, &v64);
        v50 = v22[3];
        v22[6] = v41;
        v22[4] = v50;
        v51 = GameData_21f2548;
        if (GameData_21f2548 < (unsigned __int64)GameData_21f2550) {
          *(_QWORD*)GameData_21f2548 = v41;
          v52 = v51 + 8;
          goto LABEL_108;
        }
        v53 = GameData_21f2540;
        v54 = GameData_21f2548 - GameData_21f2540;
        v55 = (GameData_21f2548 - GameData_21f2540) >> 3;
        v56 = v55 + 1;
        if ((unsigned __int64)(v55 + 1) >> 61 != 0) {
          GameRoutine_688200();
        }
        v57 = GameData_21f2550 - GameData_21f2540;
        if ((GameData_21f2550 - GameData_21f2540) >> 2 > v56) {
          v56 = v57 >> 2;
        }
        if ((unsigned __int64)v57 >= 0x7FFFFFFFFFFFFFF8LL) {
          v58 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v58 = v56;
        }
        if (v58 != 0) {
          if (v58 >> 61 == 0) {
            v59 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v58, 16, 0);
            goto LABEL_104;
          }
        LABEL_111:
          GameRoutine_60a210(v22);
        }
        v59 = 0;
      LABEL_104:
        v60 = v59 + 8 * v58;
        v61 = v59 + v54 - 8 * v55;
        *(_QWORD*)(v59 + v54) = v41;
        v52 = v59 + v54 + 8;
        memcpy(v61, v53, v54);
        GameData_21f2540 = v61;
        GameData_21f2548 = v52;
        GameData_21f2550 = v60;
        if (v53 != 0) {
          v62 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v62 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v62);
        }
      LABEL_108:
        GameData_21f2548 = v52;
      }
    LABEL_26:
      ++v12;
    } while (v12 != v13);
  }
}

__int64 SituationFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21f2530 != 0) {
    v0 = (_QWORD*)GameData_21f2528;
    if (GameData_21f2528 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = v0[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v1;
          v0[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21f2528 = 0;
    if (GameData_21f2520 != 0) {
      v8 = GameData_21f2520 & 7;
      if ((unsigned __int64)GameData_21f2520 >= 8) {
        v10 = GameData_21f2520 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21f2518 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 48) = 0;
          v11 = GameData_21f2518 + 8 * v9;
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
          *(_QWORD*)(GameData_21f2518 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21f2530 = 0;
  }
  GameData_21f2548 = GameData_21f2540;
  return result;
}

__int64 SituationFile_Unknown6()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 result;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  if (GameData_21f2530 != 0) {
    v0 = (_QWORD*)GameData_21f2528;
    if (GameData_21f2528 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v4 = (_QWORD*)*v0;
        v5 = v0[3];
        if (v5 != 0) {
          v6 = *(_QWORD*)v1;
          v0[4] = v5;
          if (*(_QWORD*)(v6 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free(v6 + v7);
        }
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v2 = 128;
        }
        else {
          v2 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v2);
        v0 = v4;
      } while (v4 != nullptr);
    }
    GameData_21f2528 = 0;
    if (GameData_21f2520 != 0) {
      v8 = GameData_21f2520 & 7;
      if ((unsigned __int64)GameData_21f2520 >= 8) {
        v10 = GameData_21f2520 & 0xFFFFFFFFFFFFFFF8LL;
        v9 = 0;
        do {
          *(_QWORD*)(GameData_21f2518 + 8 * v9) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 8) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 16) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 24) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 32) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 40) = 0;
          *(_QWORD*)(GameData_21f2518 + 8 * v9 + 48) = 0;
          v11 = GameData_21f2518 + 8 * v9;
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
          *(_QWORD*)(GameData_21f2518 + v12) = 0;
          v12 += 8;
        } while (v8 != 0);
      }
    }
    GameData_21f2530 = 0;
  }
  GameData_21f2548 = GameData_21f2540;
  return result;
}

#pragma GCC visibility pop
