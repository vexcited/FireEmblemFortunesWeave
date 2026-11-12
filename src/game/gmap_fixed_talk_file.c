#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64* GameData_212ca88[118];
extern __int64 GameData_224e750;
extern __int64 GameData_224e758;
extern __int64 GameData_224e760;
extern __int64 GameData_224e768;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_224e770;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void GmapFixedTalkFile_Unknown4();
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void GmapFixedTalkFile_Unknown4()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64** v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64** v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  float v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 primeEm;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  _QWORD* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  _QWORD* v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  __int64 v64;

  v1 = fw_memory_g_heap_manager_ptr;
  if (GameData_224e768 != 0) {
    v2 = (_QWORD*)GameData_224e760;
    if (GameData_224e760 != 0) {
      v0 = 56;
      do {
        v3 = (_QWORD*)*v2;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v1 + v4, (__int64)v2);
        v2 = v3;
      } while (v3 != nullptr);
    }
    GameData_224e760 = 0;
    if (GameData_224e758 != 0) {
      v5 = GameData_224e758 & 7;
      if ((unsigned __int64)GameData_224e758 >= 8) {
        v7 = GameData_224e758 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_224e750 + 8 * v6) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v6 + 48) = 0;
          v8 = GameData_224e750 + 8 * v6;
          v6 += 8;
          *(_QWORD*)(v8 + 56) = 0;
        } while (v7 != v6);
      }
      else {
        v6 = 0;
      }
      if (v5 != 0) {
        v9 = 8 * v6;
        do {
          --v5;
          *(_QWORD*)(GameData_224e750 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_224e768 = 0;
  }
  v10 = *(_QWORD*)(*GameData_212ca88[0] + 64);
  v63 = *(_QWORD*)(*GameData_212ca88[0] + 72);
  if (v10 != v63) {
    v11 = 0;
    while (1) {
      v64 = v10;
      v12 = *(__int64***)(*(_QWORD*)v10 + 40LL);
      v14 = *v12;
      v13 = v12[1];
      if (*v12 != v13) {
        break;
      }
    LABEL_19:
      v10 = v64 + 8;
      if (v64 + 8 == v63) {
        return;
      }
    }
    v15 = GameData_224e758;
    while (1) {
      v16 = *v14;
      v17 = *(unsigned __int64**)(*v14 + 24);
      v18 = *v17;
      if (v15 != 0 && v11 != 0) {
        break;
      }
    LABEL_43:
      if (v15 != 0) {
        goto LABEL_44;
      }
    LABEL_63:
      v30 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      v31 = GameData_224e768;
      v32 = *(float*)&GameData_224e770;
      v27 = v30;
      *v30 = 0;
      v30[1] = v18;
      v30[2] = v18;
      v30[3] = 0;
      v33 = (float)(unsigned __int64)(v31 + 1);
      if (v15 != 0 && (float)(v32 * (float)v15) >= v33) {
        goto LABEL_129;
      }
      v34 = v33 / v32;
      v35 = (v15 & (v15 - 1)) != 0;
      if (v15 < 3) {
        v35 = true;
      }
      v36 = v35 | (2 * v15);
      v37 = vcvtps_u64_f32(v34);
      if (v36 <= v37) {
        primeEm = v37;
      }
      else {
        primeEm = v36;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        primeEm = std___1___next_prime_alt1(primeEm);
        v15 = GameData_224e758;
      }
      if (primeEm <= v15) {
        if (primeEm >= v15) {
          goto LABEL_124;
        }
        v44 = vcvtps_u64_f32((float)(unsigned __int64)GameData_224e768 /
                             *(float*)&GameData_224e770);
        if (v15 < 3 || (v15 & (v15 - 1)) != 0) {
          v44 = std___1___next_prime_alt1(v44);
        }
        else {
          v45 = 1LL << -(char)__clz(v44 - 1);
          if (v44 >= 2) {
            v44 = v45;
          }
        }
        if (primeEm <= v44) {
          primeEm = v44;
        }
        if (primeEm >= v15) {
          goto LABEL_124;
        }
        if (primeEm == 0) {
          v57 = GameData_224e750;
          GameData_224e750 = 0;
          if (v57 != 0) {
            v58 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v58 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v57);
          }
          GameData_224e758 = 0;
          goto LABEL_124;
        }
      }
      v39 = fw_memory_g_heap_manager_ptr;
      if (primeEm >> 61 != 0) {
        GameRoutine_60a210_alt1();
      }
      v40 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * primeEm, 16, 0);
      v41 = GameData_224e750;
      GameData_224e750 = v40;
      if (v41 != 0) {
        v42 = 128;
        if (*(_QWORD*)(*(_QWORD*)v39 + 200LL) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v39 + v42, v41);
      }
      GameData_224e758 = primeEm;
      if (primeEm >= 8) {
        v43 = 0;
        do {
          *(_QWORD*)(GameData_224e750 + 8 * v43) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v43 + 8) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v43 + 16) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v43 + 24) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v43 + 32) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v43 + 40) = 0;
          *(_QWORD*)(GameData_224e750 + 8 * v43 + 48) = 0;
          v46 = GameData_224e750 + 8 * v43;
          v43 += 8;
          *(_QWORD*)(v46 + 56) = 0;
        } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v43);
      }
      else {
        v43 = 0;
      }
      v47 = primeEm & 7;
      if ((primeEm & 7) != 0) {
        v48 = 8 * v43;
        do {
          --v47;
          *(_QWORD*)(GameData_224e750 + v48) = 0;
          v48 += 8;
        } while (v47 != 0);
      }
      v49 = (_QWORD*)GameData_224e760;
      if (GameData_224e760 != 0) {
        v50 = *(_QWORD*)(GameData_224e760 + 8);
        v51 = primeEm - 1;
        if ((primeEm & (primeEm - 1)) != 0) {
          if (v50 >= primeEm) {
            v50 %= primeEm;
          }
          *(_QWORD*)(GameData_224e750 + 8 * v50) = &GameData_224e760;
          v52 = (_QWORD*)*v49;
          if (*v49 == 0) {
            goto LABEL_124;
          }
          while (2) {
            v53 = v52[1];
            if (v53 >= primeEm) {
              v53 %= primeEm;
            }
            if (v53 != v50) {
              if (*(_QWORD*)(GameData_224e750 + 8 * v53) == 0) {
                *(_QWORD*)(GameData_224e750 + 8 * v53) = v49;
              LABEL_101:
                v49 = v52;
                v52 = (_QWORD*)*v52;
                v50 = v53;
                if (v52 == nullptr) {
                  goto LABEL_124;
                }
                continue;
              }
              *v49 = *v52;
              *v52 = **(_QWORD**)(GameData_224e750 + 8 * v53);
              **(_QWORD**)(GameData_224e750 + 8 * v53) = v52;
              v52 = v49;
            }
            break;
          }
          v53 = v50;
          goto LABEL_101;
        }
        v54 = v50 & v51;
        *(_QWORD*)(GameData_224e750 + 8 * v54) = &GameData_224e760;
        while (1) {
          v55 = (_QWORD*)*v49;
          if (*v49 == 0) {
            break;
          }
          v56 = v55[1] & v51;
          if (v56 == v54) {
            v49 = (_QWORD*)*v49;
          }
          else if (*(_QWORD*)(GameData_224e750 + 8 * v56) != 0) {
            *v49 = *v55;
            *v55 = **(_QWORD**)(GameData_224e750 + 8 * v56);
            **(_QWORD**)(GameData_224e750 + 8 * v56) = v55;
          }
          else {
            *(_QWORD*)(GameData_224e750 + 8 * v56) = v49;
            v49 = v55;
            v54 = v56;
          }
        }
      }
    LABEL_124:
      v15 = GameData_224e758;
      if ((GameData_224e758 & (GameData_224e758 - 1)) != 0) {
        if (v18 >= GameData_224e758) {
          v0 = v18 % GameData_224e758;
        }
        else {
          v0 = v18;
        }
      }
      else {
        v0 = (GameData_224e758 - 1) & v18;
      }
    LABEL_129:
      v59 = GameData_224e750;
      v60 = *(__int64**)(GameData_224e750 + 8 * v0);
      if (v60 != nullptr) {
        *v27 = *v60;
        *v60 = (__int64)v27;
      }
      else {
        v61 = GameData_224e760;
        GameData_224e760 = (__int64)v27;
        *v27 = v61;
        *(_QWORD*)(v59 + 8 * v0) = &GameData_224e760;
        if (*v27 != 0) {
          v62 = *(_QWORD*)(*v27 + 8);
          if ((v15 & (v15 - 1)) != 0) {
            if (v62 >= v15) {
              v62 %= v15;
            }
          }
          else {
            v62 &= v15 - 1;
          }
          *(_QWORD*)(GameData_224e750 + 8 * v62) = v27;
        }
      }
      v15 = GameData_224e758;
      ++GameData_224e768;
    LABEL_138:
      v27[3] = v16;
      v11 = GameData_224e768;
    LABEL_139:
      if (++v14 == v13) {
        goto LABEL_19;
      }
    }
    v19 = v15 - 1;
    if ((v15 & (v15 - 1)) != 0) {
      v20 = *v17;
      if (v18 >= v15) {
        v20 = v18 % v15;
      }
    }
    else {
      v20 = v18 & v19;
    }
    v21 = *(_QWORD**)(GameData_224e750 + 8 * v20);
    if (v21 != nullptr) {
      v22 = (_QWORD*)*v21;
      if (v22 != nullptr) {
        if ((v15 & v19) == 0) {
          while (1) {
            v24 = v22[1];
            if (v24 == v18) {
              if (v22[2] == v18) {
                goto LABEL_139;
              }
            }
            else if ((v24 & v19) != v20) {
              goto LABEL_43;
            }
            v22 = (_QWORD*)*v22;
            if (v22 == nullptr) {
              goto LABEL_43;
            }
          }
        }
        while (1) {
          v23 = v22[1];
          if (v23 == v18) {
            if (v22[2] == v18) {
              goto LABEL_139;
            }
          }
          else {
            if (v23 >= v15) {
              v23 %= v15;
            }
            if (v23 != v20) {
              goto LABEL_43;
            }
          }
          v22 = (_QWORD*)*v22;
          if (v22 == nullptr) {
            goto LABEL_43;
          }
        }
      }
    }
  LABEL_44:
    v25 = v15 - 1;
    if ((v15 & (v15 - 1)) != 0) {
      v0 = v18;
      if (v18 >= v15) {
        v0 = v18 % v15;
      }
    }
    else {
      v0 = v25 & v18;
    }
    v26 = *(__int64***)(GameData_224e750 + 8 * v0);
    if (v26 != nullptr) {
      v27 = *v26;
      if (*v26 != nullptr) {
        if ((v15 & v25) == 0) {
          while (1) {
            v29 = v27[1];
            if (v29 == v18) {
              if (v27[2] == v18) {
                goto LABEL_138;
              }
            }
            else if ((v29 & v25) != v0) {
              goto LABEL_63;
            }
            v27 = (__int64*)*v27;
            if (v27 == nullptr) {
              goto LABEL_63;
            }
          }
        }
        while (1) {
          v28 = v27[1];
          if (v28 == v18) {
            if (v27[2] == v18) {
              goto LABEL_138;
            }
          }
          else {
            if (v28 >= v15) {
              v28 %= v15;
            }
            if (v28 != v0) {
              goto LABEL_63;
            }
          }
          v27 = (__int64*)*v27;
          if (v27 == nullptr) {
            goto LABEL_63;
          }
        }
      }
    }
    goto LABEL_63;
  }
}

#pragma GCC visibility pop
