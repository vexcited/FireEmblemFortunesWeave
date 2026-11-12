#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9ecb80(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21c9fc8;
extern __int64 GameData_21f8fa0;
extern __int64 GameData_21f8fa8;
extern __int64 GameData_21f8fb0;
extern __int64 GameData_21f8fb8;
extern __int64 GameData_21f8fc8;
extern __int64 GameData_21f8fd0;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RecallUpdateFile_Unknown4_alt1() __asm__("RecallUpdateFile_Unknown4");
__int64 RecallUpdateFile_Unknown5_alt1() __asm__("RecallUpdateFile_Unknown5");
__int64 RecallUpdateFile_Unknown6_alt1() __asm__("RecallUpdateFile_Unknown6");
__int64* GameRoutine_9ecb80_alt1(__int64* result,
                                 char) __asm__("GameRoutine_9ecb80");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RecallUpdateFile_Unknown4();
void RecallUpdateFile_Unknown5();
void RecallUpdateFile_Unknown6();
__int64 GameRoutine_693d40(__int64*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___next_prime(unsigned __int64);
extern __int64 GameData_21f8fd8;
extern int GameData_21f8fc0;
void __attribute__((noreturn)) GameRoutine_60a210();
__int64* RecallUpdateFile_9ecb80(__int64* result, char a2);

void RecallUpdateFile_Unknown4()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;

  if (GameData_21f8fb8 != 0) {
    v0 = (_QWORD*)GameData_21f8fb0;
    if (GameData_21f8fb0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v3, (__int64)v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8fb0 = 0;
    if (GameData_21f8fa8 != 0) {
      v4 = GameData_21f8fa8 & 7;
      if ((unsigned __int64)GameData_21f8fa8 >= 8) {
        v6 = GameData_21f8fa8 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 48) = 0;
          v7 = GameData_21f8fa0 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f8fa0 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f8fb8 = 0;
  }
  GameData_21f8fd0 = GameData_21f8fc8;
  v9 = *(__int64**)(GameData_21c9fc8 + 64);
  v10 = *(__int64**)(GameData_21c9fc8 + 72);
  while (v9 != v10) {
    v11 = *v9++;
    GameRoutine_9ecb80_alt1((__int64*)v11, *(_BYTE*)(v11 + 32));
  }
  v12 = (__int64*)GameData_21c9a78;
  v13 = GameData_21c9a80;
  while (v12 != (__int64*)v13) {
    v14 = *v12++;
    GameRoutine_9ecb80_alt1((__int64*)(*(_QWORD*)(v14 + 24) + 1072LL), 1);
  }
}

__int64* RecallUpdateFile_9ecb80(__int64* result, char a2)
{

#pragma clang fp contract(off)
  __int64* v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  float v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  float v27;
  _BOOL8 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 primeEm;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD** v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;

  v3 = result;
  if (GameData_21f8fa8 != 0 && GameData_21f8fb8 != 0) {
    v5 = *result;
    v6 = GameData_21f8fa8 - 1;
    if ((GameData_21f8fa8 & (GameData_21f8fa8 - 1)) != 0) {
      v7 = *result;
      if (v5 >= GameData_21f8fa8) {
        v7 = v5 % GameData_21f8fa8;
      }
    }
    else {
      v7 = v6 & v5;
    }
    v8 = *(_QWORD**)(GameData_21f8fa0 + 8 * v7);
    if (v8 != nullptr) {
      v9 = (_QWORD*)*v8;
      if (v9 != nullptr) {
        if ((GameData_21f8fa8 & v6) == 0) {
          while (1) {
            v11 = v9[1];
            if (v11 == v5) {
              if (v9[2] == v5) {
                return result;
              }
            }
            else if ((v11 & v6) != v7) {
              goto LABEL_24;
            }
            v9 = (_QWORD*)*v9;
            if (v9 == nullptr) {
              goto LABEL_24;
            }
          }
        }
        do {
          v10 = v9[1];
          if (v10 == v5) {
            if (v9[2] == v5) {
              return result;
            }
          }
          else {
            if (v10 >= GameData_21f8fa8) {
              v10 %= (unsigned __int64)GameData_21f8fa8;
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
LABEL_24:
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       32, 16, 0);
  v14 = *v3;
  v15 = (_QWORD*)v13;
  *(_BYTE*)(v13 + 24) = a2;
  *(_QWORD*)v13 = 0;
  v16 = GameData_21f8fa8;
  *(_QWORD*)(v13 + 8) = v14;
  *(_QWORD*)(v13 + 16) = v14;
  if (v16 == 0) {
    goto LABEL_44;
  }
  v17 = v16 - 1;
  if ((v16 & (v16 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v16) {
      v18 = v14 % v16;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(GameData_21f8fa0 + 8 * v18);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_44:
    v23 = (float)(unsigned __int64)(GameData_21f8fb8 + 1);
    if (v16 == 0 || (float)(*(float*)&GameData_21f8fc0 * (float)v16) < v23) {
      v27 = v23 / *(float*)&GameData_21f8fc0;
      v28 = true;
      if (v16 >= 3) {
        v28 = (v16 & (v16 - 1)) != 0;
      }
      v29 = v28 | (2 * v16);
      v30 = vcvtps_u64_f32(v27);
      if (v29 <= v30) {
        v31 = v30;
      }
      else {
        v31 = v29;
      }
      if (v31 == 1) {
        v31 = 2;
      }
      else if ((v31 & (v31 - 1)) != 0) {
        primeEm = std___1___next_prime(v31);
        v16 = GameData_21f8fa8;
        v31 = primeEm;
      }
      if (v31 <= v16) {
        if (v31 >= v16) {
          goto LABEL_46;
        }
        v42 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21f8fb8 /
                             *(float*)&GameData_21f8fc0);
        if (v16 < 3 || (v16 & (v16 - 1)) != 0) {
          v42 = std___1___next_prime(v42);
        }
        else {
          v43 = 1LL << -(char)__clz(v42 - 1);
          if (v42 >= 2) {
            v42 = v43;
          }
        }
        if (v31 <= v42) {
          v31 = v42;
        }
        if (v31 >= v16) {
          goto LABEL_46;
        }
        if (v31 == 0) {
          v56 = GameData_21f8fa0;
          GameData_21f8fa0 = 0;
          if (v56 != 0) {
            v57 = 128;
            if (*(_QWORD*)(*v12 + 200) == 0) {
              v57 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v12 + v57, v56);
          }
          GameData_21f8fa8 = 0;
          goto LABEL_46;
        }
      }
      if (v31 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v37 = fw_memory_HeapManager_Allocate(*v12, 8 * v31, 16, 0);
      v38 = GameData_21f8fa0;
      GameData_21f8fa0 = v37;
      if (v38 != 0) {
        v39 = 128;
        if (*(_QWORD*)(*v12 + 200) == 0) {
          v39 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v12 + v39, v38);
      }
      v40 = v31 & 7;
      GameData_21f8fa8 = v31;
      if (v31 >= 8) {
        v41 = 0;
        do {
          *(_QWORD*)(GameData_21f8fa0 + 8 * v41) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v41 + 8) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v41 + 16) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v41 + 24) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v41 + 32) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v41 + 40) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v41 + 48) = 0;
          v44 = GameData_21f8fa0 + 8 * v41;
          v41 += 8;
          *(_QWORD*)(v44 + 56) = 0;
        } while ((v31 & 0x1FFFFFFFFFFFFFF8LL) != v41);
      }
      else {
        v41 = 0;
      }
      if ((v31 & 7) != 0) {
        v45 = 8 * v41;
        do {
          --v40;
          *(_QWORD*)(GameData_21f8fa0 + v45) = 0;
          v45 += 8;
        } while (v40 != 0);
      }
      v46 = (_QWORD**)GameData_21f8fb0;
      if (GameData_21f8fb0 != 0) {
        v47 = *(_QWORD*)(GameData_21f8fb0 + 8);
        v48 = v31 - 1;
        if ((v31 & (v31 - 1)) != 0) {
          if (v47 >= v31) {
            v47 %= v31;
          }
          *(_QWORD*)(GameData_21f8fa0 + 8 * v47) = &GameData_21f8fb0;
          v49 = *v46;
          if (*v46 == nullptr) {
            goto LABEL_46;
          }
          while (1) {
            v50 = v49[1];
            if (v50 >= v31) {
              v50 %= v31;
            }
            if (v50 != v47) {
              if (*(_QWORD*)(GameData_21f8fa0 + 8 * v50) == 0) {
                *(_QWORD*)(GameData_21f8fa0 + 8 * v50) = v46;
                goto LABEL_92;
              }
              *v46 = (_QWORD*)*v49;
              *v49 = **(_QWORD**)(GameData_21f8fa0 + 8 * v50);
              **(_QWORD**)(GameData_21f8fa0 + 8 * v50) = v49;
              v49 = v46;
            }
            v50 = v47;
          LABEL_92:
            v46 = (_QWORD**)v49;
            v49 = (_QWORD*)*v49;
            v47 = v50;
            if (v49 == nullptr) {
              goto LABEL_46;
            }
          }
        }
        v52 = v47 & v48;
        *(_QWORD*)(GameData_21f8fa0 + 8 * v52) = &GameData_21f8fb0;
        while (1) {
          v53 = *v46;
          if (*v46 == nullptr) {
            break;
          }
          v54 = v53[1] & v48;
          if (v54 == v52) {
            v46 = (_QWORD**)*v46;
          }
          else if (*(_QWORD*)(GameData_21f8fa0 + 8 * v54) != 0) {
            *v46 = (_QWORD*)*v53;
            *v53 = **(_QWORD**)(GameData_21f8fa0 + 8 * v54);
            **(_QWORD**)(GameData_21f8fa0 + 8 * v54) = v53;
          }
          else {
            *(_QWORD*)(GameData_21f8fa0 + 8 * v54) = v46;
            v46 = (_QWORD**)v53;
            v52 = v54;
          }
        }
      }
    }
  LABEL_46:
    v24 = GameData_21f8fa8;
    v25 = v15[1];
    v26 = GameData_21f8fa8 - 1;
    if ((v24 & (v24 - 1)) != 0) {
      if (v25 >= GameData_21f8fa8) {
        v25 %= (unsigned __int64)GameData_21f8fa8;
      }
    }
    else {
      v25 &= v26;
    }
    v32 = GameData_21f8fa0;
    v33 = *(_QWORD**)(GameData_21f8fa0 + 8 * v25);
    if (v33 != nullptr) {
      *v15 = *v33;
      *v33 = v15;
    }
    else {
      v34 = GameData_21f8fb0;
      GameData_21f8fb0 = (__int64)v15;
      *v15 = v34;
      *(_QWORD*)(v32 + 8 * v25) = &GameData_21f8fb0;
      if (*v15 != 0) {
        v35 = *(_QWORD*)(*v15 + 8LL);
        if ((v24 & v26) != 0) {
          if (v35 >= v24) {
            v35 %= v24;
          }
        }
        else {
          v35 &= v26;
        }
        *(_QWORD*)(GameData_21f8fa0 + 8 * v35) = v15;
      }
    }
    ++GameData_21f8fb8;
    goto LABEL_101;
  }
  if ((v16 & v17) == 0) {
    while (1) {
      v22 = v20[1];
      if (v22 == v14) {
        if (v20[2] == v14) {
          goto LABEL_113;
        }
      }
      else if ((v22 & v17) != v18) {
        goto LABEL_44;
      }
      v20 = (_QWORD*)*v20;
      if (v20 == nullptr) {
        goto LABEL_44;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v16) {
      v21 %= v16;
    }
    if (v21 != v18) {
      goto LABEL_44;
    }
  LABEL_34:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_44;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_34;
  }
LABEL_113:
  v55 = 128;
  if (*(_QWORD*)(*v12 + 200) == 0) {
    v55 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*v12 + v55, v13);
LABEL_101:
  v51 = GameData_21f8fd0;
  if (GameData_21f8fd0 >= (unsigned __int64)GameData_21f8fd8) {
    result = (__int64*)GameRoutine_693d40(&GameData_21f8fc8, v3);
  }
  else {
    result = (__int64*)(GameData_21f8fd0 + 16);
    *(_QWORD*)GameData_21f8fd0 = *v3;
    *(_QWORD*)(v51 + 8) = v3[1];
  }
  GameData_21f8fd0 = (__int64)result;
  return result;
}

void RecallUpdateFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;

  if (GameData_21f8fb8 != 0) {
    v0 = (_QWORD*)GameData_21f8fb0;
    if (GameData_21f8fb0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v3, (__int64)v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8fb0 = 0;
    if (GameData_21f8fa8 != 0) {
      v4 = GameData_21f8fa8 & 7;
      if ((unsigned __int64)GameData_21f8fa8 >= 8) {
        v6 = GameData_21f8fa8 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 48) = 0;
          v7 = GameData_21f8fa0 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f8fa0 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f8fb8 = 0;
  }
  GameData_21f8fd0 = GameData_21f8fc8;
}

void RecallUpdateFile_Unknown6()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;

  if (GameData_21f8fb8 != 0) {
    v0 = (_QWORD*)GameData_21f8fb0;
    if (GameData_21f8fb0 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v3, (__int64)v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21f8fb0 = 0;
    if (GameData_21f8fa8 != 0) {
      v4 = GameData_21f8fa8 & 7;
      if ((unsigned __int64)GameData_21f8fa8 >= 8) {
        v6 = GameData_21f8fa8 & 0xFFFFFFFFFFFFFFF8LL;
        v5 = 0;
        do {
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 8) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 16) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 24) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 32) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 40) = 0;
          *(_QWORD*)(GameData_21f8fa0 + 8 * v5 + 48) = 0;
          v7 = GameData_21f8fa0 + 8 * v5;
          v5 += 8;
          *(_QWORD*)(v7 + 56) = 0;
        } while (v6 != v5);
      }
      else {
        v5 = 0;
      }
      if (v4 != 0) {
        v8 = 8 * v5;
        do {
          --v4;
          *(_QWORD*)(GameData_21f8fa0 + v8) = 0;
          v8 += 8;
        } while (v4 != 0);
      }
    }
    GameData_21f8fb8 = 0;
  }
  GameData_21f8fd0 = GameData_21f8fc8;
}

#pragma GCC visibility pop
