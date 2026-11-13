#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_2246c48;
extern __int64 GameData_2246c50;
extern __int64 GameData_2246c58;
extern __int64 GameData_2246c60;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LessonFile_Unknown5_alt1() __asm__("LessonFile_Unknown5");
__int64 LessonFile_1457ea0_alt1() __asm__("LessonFile_1457ea0");
__int64 game_HashString(_QWORD);
extern __int64 game_GameModeData_instance_;
unsigned __int64 game_LessonFile_GetCompleteCount_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2);
_QWORD* GameRoutine_145bec0(_QWORD*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64* GameData_212cd08[38];
extern int GameData_2246c68;
void __attribute__((noreturn)) GameRoutine_1458df0();
void __attribute__((noreturn)) GameRoutine_60a210();
void LessonFile_Unknown4();
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LessonFile_Unknown5();
void LessonFile_1457ea0();
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___hash_memory_alt1(__int64,
                           unsigned __int64) __asm__("std___1___hash_memory");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");

void LessonFile_Unknown4()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD** v26;
  unsigned __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  float v31;
  float v32;
  float v33;
  _BOOL8 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 primeEm;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  _QWORD** v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  _QWORD* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64* v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;

  v1 = (__int64*)GameData_2246c58;
  if (GameData_2246c58 != 0) {
    v2 = (_QWORD*)GameData_2246c58;
    do {
      v2[4] = v2[3];
      v2 = (_QWORD*)*v2;
    } while (v2 != nullptr);
    if (GameData_2246c60 == 0) {
      goto LABEL_25;
    }
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      v0 = *v1;
      v5 = v1[3];
      if (v5 != 0) {
        v6 = *(_QWORD*)v3;
        v1[4] = v5;
        if (*(_QWORD*)(v6 + 200) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v6 + v7, v5);
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v4, (__int64)v1);
      v1 = (__int64*)v0;
    } while (v0 != 0);
  }
  else if (GameData_2246c60 == 0) {
    goto LABEL_25;
  }
  GameData_2246c58 = 0;
  if (GameData_2246c50 != 0) {
    v8 = GameData_2246c50 & 7;
    if ((unsigned __int64)GameData_2246c50 >= 8) {
      v10 = GameData_2246c50 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = 0;
      do {
        *(_QWORD*)(GameData_2246c48 + 8 * v9) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 8) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 16) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 24) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 32) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 40) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 48) = 0;
        v11 = GameData_2246c48 + 8 * v9;
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
        *(_QWORD*)(GameData_2246c48 + v12) = 0;
        v12 += 8;
      } while (v8 != 0);
    }
  }
  GameData_2246c60 = 0;
LABEL_25:
  v13 = *(__int64**)(*GameData_212cd08[0] + 64);
  v14 = *(__int64**)(*GameData_212cd08[0] + 72);
  if (v13 != v14) {
    v15 = &GameData_2246c48;
    v16 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v18 = *v13;
      v19 = *(_QWORD*)(*v13 + 64);
      if (v19 == 0) {
        goto LABEL_29;
      }
      v79 = *(_QWORD*)(v19 + 8);
      v20 = GameRoutine_145bec0(v15, &v79);
      if (v20 != nullptr) {
        goto LABEL_128;
      }
      v21 = v79;
      v77 = v18;
      v80 = v79;
      v22 = std___1___hash_memory_alt1((__int64)&v80, 8u);
      v23 = v22;
      v24 = GameData_2246c50;
      if (GameData_2246c50 != 0) {
        v25 = GameData_2246c50 - 1;
        if ((GameData_2246c50 & (GameData_2246c50 - 1)) != 0) {
          v0 = v22;
          if (v22 >= GameData_2246c50) {
            v0 = v22 % GameData_2246c50;
          }
        }
        else {
          v0 = v25 & v22;
        }
        v26 = *(_QWORD***)(GameData_2246c48 + 8 * v0);
        if (v26 != nullptr) {
          v20 = *v26;
          if (*v26 != nullptr) {
            if ((GameData_2246c50 & v25) == 0) {
              while (1) {
                v28 = v20[1];
                if (v28 == v22) {
                  if (v20[2] == v21) {
                    goto LABEL_52;
                  }
                }
                else if ((v28 & v25) != v0) {
                  goto LABEL_53;
                }
                v20 = (_QWORD*)*v20;
                if (v20 == nullptr) {
                  goto LABEL_53;
                }
              }
            }
            do {
              v27 = v20[1];
              if (v27 == v22) {
                if (v20[2] == v21) {
                LABEL_52:
                  v18 = v77;
                  goto LABEL_128;
                }
              }
              else {
                if (v27 >= GameData_2246c50) {
                  v27 %= (unsigned __int64)GameData_2246c50;
                }
                if (v27 != v0) {
                  break;
                }
              }
              v20 = (_QWORD*)*v20;
            } while (v20 != nullptr);
          }
        }
      }
    LABEL_53:
      v29 = (_QWORD*)fw_memory_HeapManager_Allocate(*v16, 48, 16, 0);
      v30 = v79;
      v20 = v29;
      *v29 = 0;
      v29[1] = v23;
      v29[4] = 0;
      v29[5] = 0;
      v31 = *(float*)&GameData_2246c68;
      v29[2] = v30;
      v29[3] = 0;
      v32 = (float)(unsigned __int64)(GameData_2246c60 + 1);
      if (v24 == 0 || (float)(v31 * (float)v24) < v32) {
        break;
      }
    LABEL_119:
      v58 = GameData_2246c48;
      v59 = *(_QWORD**)(GameData_2246c48 + 8 * v0);
      if (v59 != nullptr) {
        v18 = v77;
        *v20 = *v59;
        *v59 = v20;
      }
      else {
        v18 = v77;
        v60 = GameData_2246c58;
        GameData_2246c58 = (__int64)v20;
        *v20 = v60;
        *(_QWORD*)(v58 + 8 * v0) = &GameData_2246c58;
        if (*v20 != 0) {
          v61 = *(_QWORD*)(*v20 + 8LL);
          if ((v24 & (v24 - 1)) != 0) {
            if (v61 >= v24) {
              v61 %= v24;
            }
          }
          else {
            v61 &= v24 - 1;
          }
          *(_QWORD*)(GameData_2246c48 + 8 * v61) = v20;
        }
      }
      ++GameData_2246c60;
    LABEL_128:
      v63 = (_QWORD*)v20[4];
      v62 = v20[5];
      if ((unsigned __int64)v63 < v62) {
        *v63 = v18;
        v17 = (__int64)(v63 + 1);
      }
      else {
        v64 = v18;
        v65 = v20[3];
        v78 = v13;
        v66 = (char*)v63 - v65;
        v67 = ((__int64)v63 - v65) >> 3;
        v68 = v67 + 1;
        if ((unsigned __int64)(v67 + 1) >> 61 != 0) {
          GameRoutine_1458df0();
        }
        v69 = v62 - v65;
        v70 = v14;
        v71 = v15;
        if (v69 >> 2 > v68) {
          v68 = v69 >> 2;
        }
        if ((unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF8LL) {
          v72 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v72 = v68;
        }
        if (v72 != 0) {
          if (v72 >> 61 != 0) {
          LABEL_146:
            GameRoutine_60a210();
          }
          v73 = fw_memory_HeapManager_Allocate(*v16, 8 * v72, 16, 0);
        }
        else {
          v73 = 0;
        }
        v74 = v73 + 8 * v72;
        v75 = (unsigned __int64)v63 - v65;
        v0 = (__int64)&v66[v73 + -8 * v67];
        *(_QWORD*)&v66[v73] = v64;
        v17 = (__int64)&v66[v73 + 8];
        memcpy_alt1(v0, v65, v75);
        v20[3] = v0;
        v20[4] = v17;
        v20[5] = v74;
        if (v65 != 0) {
          v76 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v76 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v16 + v76, v65);
        }
        v15 = v71;
        v14 = v70;
        v13 = v78;
      }
      v20[4] = v17;
    LABEL_29:
      if (++v13 == v14) {
        return;
      }
    }
    v33 = v32 / v31;
    v34 = (v24 & (v24 - 1)) != 0;
    if (v24 < 3) {
      v34 = true;
    }
    v35 = v34 | (2 * v24);
    v36 = vcvtps_u64_f32(v33);
    if (v35 <= v36) {
      primeEm = v36;
    }
    else {
      primeEm = v35;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime_alt1(primeEm);
    }
    v38 = GameData_2246c50;
    if (primeEm <= GameData_2246c50) {
      if (primeEm >= GameData_2246c50) {
        goto LABEL_114;
      }
      v43 = vcvtps_u64_f32((float)(unsigned __int64)GameData_2246c60 /
                           *(float*)&GameData_2246c68);
      if ((unsigned __int64)GameData_2246c50 < 3 ||
          (GameData_2246c50 & (GameData_2246c50 - 1)) != 0) {
        v43 = std___1___next_prime_alt1(v43);
      }
      else {
        v44 = 1LL << (-(char)__clz(v43 - 1) & 63);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm >= v38) {
        goto LABEL_114;
      }
      if (primeEm == 0) {
        v56 = GameData_2246c48;
        GameData_2246c48 = 0;
        if (v56 != 0) {
          v57 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v16 + v57, v56);
        }
        GameData_2246c50 = 0;
        goto LABEL_114;
      }
    }
    if (primeEm >> 61 != 0) {
      goto LABEL_146;
    }
    v39 = fw_memory_HeapManager_Allocate(*v16, 8 * primeEm, 16, 0);
    v40 = GameData_2246c48;
    GameData_2246c48 = v39;
    if (v40 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*v16 + 200) == 0) {
        v41 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v16 + v41, v40);
    }
    GameData_2246c50 = primeEm;
    if (primeEm >= 8) {
      v42 = 0;
      do {
        *(_QWORD*)(GameData_2246c48 + 8 * v42) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v42 + 8) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v42 + 16) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v42 + 24) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v42 + 32) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v42 + 40) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v42 + 48) = 0;
        v45 = GameData_2246c48 + 8 * v42;
        v42 += 8;
        *(_QWORD*)(v45 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v42);
    }
    else {
      v42 = 0;
    }
    v46 = primeEm & 7;
    if ((primeEm & 7) != 0) {
      v47 = 8 * v42;
      do {
        --v46;
        *(_QWORD*)(GameData_2246c48 + v47) = 0;
        v47 += 8;
      } while (v46 != 0);
    }
    v48 = (_QWORD**)GameData_2246c58;
    if (GameData_2246c58 == 0) {
      goto LABEL_114;
    }
    v49 = *(_QWORD*)(GameData_2246c58 + 8);
    v50 = primeEm - 1;
    if ((primeEm & (primeEm - 1)) == 0) {
      v53 = v49 & v50;
      *(_QWORD*)(*v15 + 8 * v53) = (char*)((__int128*)0x10LL) + (_QWORD)v15;
      while (1) {
        v54 = *v48;
        if (*v48 == nullptr) {
          break;
        }
        v55 = v54[1] & v50;
        if (v55 == v53) {
          v48 = (_QWORD**)*v48;
        }
        else if (*(_QWORD*)(GameData_2246c48 + 8 * v55) != 0) {
          *v48 = (_QWORD*)*v54;
          *v54 = **(_QWORD**)(GameData_2246c48 + 8 * v55);
          **(_QWORD**)(GameData_2246c48 + 8 * v55) = v54;
        }
        else {
          *(_QWORD*)(GameData_2246c48 + 8 * v55) = v48;
          v48 = (_QWORD**)v54;
          v53 = v55;
        }
      }
    LABEL_114:
      v24 = GameData_2246c50;
      if ((GameData_2246c50 & (GameData_2246c50 - 1)) != 0) {
        if (v23 >= GameData_2246c50) {
          v0 = v23 % GameData_2246c50;
        }
        else {
          v0 = v23;
        }
      }
      else {
        v0 = (GameData_2246c50 - 1) & v23;
      }
      goto LABEL_119;
    }
    if (v49 >= primeEm) {
      v49 %= primeEm;
    }
    *(_QWORD*)(*v15 + 8 * v49) = (char*)((__int128*)0x10LL) + (_QWORD)v15;
    v51 = *v48;
    if (*v48 == nullptr) {
      goto LABEL_114;
    }
    while (1) {
      v52 = v51[1];
      if (v52 >= primeEm) {
        v52 %= primeEm;
      }
      if (v52 != v49) {
        if (*(_QWORD*)(GameData_2246c48 + 8 * v52) == 0) {
          *(_QWORD*)(GameData_2246c48 + 8 * v52) = v48;
          goto LABEL_91;
        }
        *v48 = (_QWORD*)*v51;
        *v51 = **(_QWORD**)(GameData_2246c48 + 8 * v52);
        **(_QWORD**)(GameData_2246c48 + 8 * v52) = v51;
        v51 = v48;
      }
      v52 = v49;
    LABEL_91:
      v48 = (_QWORD**)v51;
      v51 = (_QWORD*)*v51;
      v49 = v52;
      if (v51 == nullptr) {
        goto LABEL_114;
      }
    }
  }
}

void LessonFile_Unknown5()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  v0 = (_QWORD*)GameData_2246c58;
  if (GameData_2246c58 != 0) {
    v1 = (_QWORD*)GameData_2246c58;
    do {
      v1[4] = v1[3];
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
    if (GameData_2246c60 == 0) {
      return;
    }
    v2 = fw_memory_g_heap_manager_ptr;
    do {
      v4 = (_QWORD*)*v0;
      v5 = v0[3];
      if (v5 != 0) {
        v6 = *(_QWORD*)v2;
        v0[4] = v5;
        if (*(_QWORD*)(v6 + 200) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v6 + v7, v5);
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v3 = 128;
      }
      else {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v2 + v3, (__int64)v0);
      v0 = v4;
    } while (v4 != nullptr);
  }
  else if (GameData_2246c60 == 0) {
    return;
  }
  GameData_2246c58 = 0;
  if (GameData_2246c50 != 0) {
    v8 = GameData_2246c50 & 7;
    if ((unsigned __int64)GameData_2246c50 >= 8) {
      v10 = GameData_2246c50 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = 0;
      do {
        *(_QWORD*)(GameData_2246c48 + 8 * v9) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 8) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 16) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 24) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 32) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 40) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 48) = 0;
        v11 = GameData_2246c48 + 8 * v9;
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
        *(_QWORD*)(GameData_2246c48 + v12) = 0;
        v12 += 8;
      } while (v8 != 0);
    }
  }
  GameData_2246c60 = 0;
}

void LessonFile_1457ea0()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;

  v0 = (_QWORD*)GameData_2246c58;
  if (GameData_2246c58 != 0) {
    v1 = (_QWORD*)GameData_2246c58;
    do {
      v1[4] = v1[3];
      v1 = (_QWORD*)*v1;
    } while (v1 != nullptr);
    if (GameData_2246c60 == 0) {
      return;
    }
    v2 = fw_memory_g_heap_manager_ptr;
    do {
      v4 = (_QWORD*)*v0;
      v5 = v0[3];
      if (v5 != 0) {
        v6 = *(_QWORD*)v2;
        v0[4] = v5;
        if (*(_QWORD*)(v6 + 200) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(v6 + v7, v5);
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v3 = 128;
      }
      else {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v2 + v3, (__int64)v0);
      v0 = v4;
    } while (v4 != nullptr);
  }
  else if (GameData_2246c60 == 0) {
    return;
  }
  GameData_2246c58 = 0;
  if (GameData_2246c50 != 0) {
    v8 = GameData_2246c50 & 7;
    if ((unsigned __int64)GameData_2246c50 >= 8) {
      v10 = GameData_2246c50 & 0xFFFFFFFFFFFFFFF8LL;
      v9 = 0;
      do {
        *(_QWORD*)(GameData_2246c48 + 8 * v9) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 8) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 16) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 24) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 32) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 40) = 0;
        *(_QWORD*)(GameData_2246c48 + 8 * v9 + 48) = 0;
        v11 = GameData_2246c48 + 8 * v9;
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
        *(_QWORD*)(GameData_2246c48 + v12) = 0;
        v12 += 8;
      } while (v8 != 0);
    }
  }
  GameData_2246c60 = 0;
}

unsigned __int64 game_LessonFile_GetCompleteCount_lambda0_Invoke(__int64 a1,
                                                                 __int64 a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 result;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v10;
  unsigned __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
  if ((*(_BYTE*)v3 & 1) != 0) {
    v4 = *(_QWORD*)(v3 + 16);
  }
  else {
    v4 = v3 + 1;
  }
  result = game_HashString(v4);
  if (result != 0 && game_GameModeData_instance_ != 0) {
    v7 = *(_QWORD**)(game_GameModeData_instance_ + 48);
    v8 = v7[2];
    if (v8 != 0 && v7[4] != 0) {
      v10 = v8 - 1;
      if ((v8 & (v8 - 1)) != 0) {
        v11 = result;
        if (result >= v8) {
          v11 = result % v8;
        }
      }
      else {
        v11 = v10 & result;
      }
      v12 = *(_QWORD**)(v7[1] + 8 * v11);
      if (v12 != nullptr) {
        v13 = (_QWORD*)*v12;
        if (v13 != nullptr) {
          if ((v8 & v10) == 0) {
            while (1) {
              v15 = v13[1];
              if (result == v15) {
                if (v13[2] == result) {
                  goto LABEL_32;
                }
              }
              else if ((v15 & v10) != v11) {
                return result;
              }
              v13 = (_QWORD*)*v13;
              if (v13 == nullptr) {
                return result;
              }
            }
          }
          do {
            v14 = v13[1];
            if (result == v14) {
              if (v13[2] == result) {
              LABEL_32:
                v16 = v13[3];
                if (v16 != 0 && *(int*)(v16 + 32) >= 1) {
                  ++**(_DWORD**)(a1 + 8);
                }
                return result;
              }
            }
            else {
              if (v14 >= v8) {
                v14 %= v8;
              }
              if (v14 != v11) {
                return result;
              }
            }
            v13 = (_QWORD*)*v13;
          } while (v13 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
