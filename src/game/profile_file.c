#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_66bfc0(_QWORD);
__int64 GameRoutine_97ac00(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c8d8[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_977b40(void);
_QWORD*
ProfileFile_Unknown4_alt1(_QWORD* result) __asm__("ProfileFile_Unknown4");
__int64 Resources_66bfc0(unsigned __int64*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
void GameRoutine_97ac00_alt1(__int64, unsigned int,
                             __int64) __asm__("GameRoutine_97ac00");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_977b40_alt1() __asm__("GameRoutine_977b40");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProfileFile_Unknown4(_QWORD* a1);

void ProfileFile_Unknown4(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  unsigned __int64* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD** v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  _QWORD* v13;
  unsigned __int64 v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 primeEm;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD** v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  __int64 v47;
  char* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* i;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 k;
  _QWORD* v63;
  _QWORD* v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64* j;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned int** v98;
  unsigned int** v99;
  unsigned int* v100;
  unsigned int v101;
  unsigned int v102;
  _QWORD* v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  struct {
    _QWORD* v114;
    unsigned __int64 v115;
    float v116;
  } v114_;

  v114_.v114 = nullptr;
  v114_.v115 = 0;
  v112 = 0;
  v113 = 0;
  v114_.v116 = 0x1.0000000000000p+0f;
  v2 = *(__int64**)(*GameData_212c8d8[0] + 64);
  v3 = *(__int64**)(*GameData_212c8d8[0] + 72);
  if (v2 == v3) {
    goto LABEL_118;
  }
  do {
    v4 = *v2;
    v5 = *(unsigned __int64**)(*v2 + 56);
    if (v5 == nullptr) {
      goto LABEL_5;
    }
    v6 = *v5;
    v7 = v113;
    if (v113 != 0) {
      v8 = v113 - 1;
      if ((v113 & (v113 - 1)) != 0) {
        v1 = v6;
        if (v6 >= v113) {
          v1 = v6 % v113;
        }
      }
      else {
        v1 = v8 & v6;
      }
      v9 = *(_QWORD***)(v112 + 8 * v1);
      if (v9 != nullptr) {
        v10 = *v9;
        if (*v9 != nullptr) {
          if ((v113 & v8) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == v6) {
                if (v10[2] == v6) {
                  goto LABEL_102;
                }
              }
              else if ((v12 & v8) != v1) {
                goto LABEL_27;
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                goto LABEL_27;
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == v6) {
              if (v10[2] == v6) {
                goto LABEL_102;
              }
            }
            else {
              if (v11 >= v113) {
                v11 %= v113;
              }
              if (v11 != v1) {
                break;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  LABEL_27:
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v14 = v114_.v115;
    v15 = v114_.v116;
    v10 = v13;
    *v13 = 0;
    v13[1] = v6;
    v13[2] = v6;
    v13[3] = 0;
    v13[4] = 0;
    v13[5] = 0;
    v16 = (float)(v14 + 1);
    if (v113 == 0 || (float)(v15 * (float)v113) < v16) {
      v17 = v16 / v15;
      v18 = (v113 & (v113 - 1)) != 0;
      if (v113 < 3) {
        v18 = true;
      }
      v19 = v18 | (2 * v113);
      v20 = vcvtps_u64_f32(v17);
      if (v19 <= v20) {
        primeEm = v20;
      }
      else {
        primeEm = v19;
      }
      if (primeEm == 1) {
        primeEm = 2;
      }
      else if ((primeEm & (primeEm - 1)) != 0) {
        v7 = v113;
        primeEm = std___1___next_prime_alt1(primeEm);
      }
      if (primeEm <= v7) {
        if (primeEm >= v7) {
          goto LABEL_88;
        }
        v27 = vcvtps_u64_f32((float)v114_.v115 / v114_.v116);
        if (v7 < 3 || (v7 & (v7 - 1)) != 0) {
          v27 = std___1___next_prime_alt1(v27);
        }
        else {
          v28 = 1LL << -(char)__clz(v27 - 1);
          if (v27 >= 2) {
            v27 = v28;
          }
        }
        if (primeEm <= v27) {
          primeEm = v27;
        }
        if (primeEm >= v7) {
          goto LABEL_88;
        }
        if (primeEm == 0) {
          v40 = v112;
          v112 = 0;
          if (v40 != 0) {
            v41 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v41 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v40);
          }
          v113 = 0;
          goto LABEL_88;
        }
      }
      if (primeEm >> 61 != 0) {
        goto LABEL_200;
      }
      v22 = fw_memory_g_heap_manager_ptr;
      v23 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * primeEm, 16, 0);
      v24 = v112;
      v112 = v23;
      if (v24 != 0) {
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v22 + v25, v24);
      }
      v113 = primeEm;
      if (primeEm >= 8) {
        v26 = 0;
        do {
          *(_QWORD*)(v112 + 8 * v26) = 0;
          *(_QWORD*)(v112 + 8 * v26 + 8) = 0;
          *(_QWORD*)(v112 + 8 * v26 + 16) = 0;
          *(_QWORD*)(v112 + 8 * v26 + 24) = 0;
          *(_QWORD*)(v112 + 8 * v26 + 32) = 0;
          *(_QWORD*)(v112 + 8 * v26 + 40) = 0;
          *(_QWORD*)(v112 + 8 * v26 + 48) = 0;
          v29 = v112 + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v29 + 56) = 0;
        } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v26);
      }
      else {
        v26 = 0;
      }
      v30 = primeEm & 7;
      if ((primeEm & 7) != 0) {
        v31 = 8 * v26;
        do {
          --v30;
          *(_QWORD*)(v112 + v31) = 0;
          v31 += 8;
        } while (v30 != 0);
      }
      v32 = (_QWORD**)v114_.v114;
      if (v114_.v114 == nullptr) {
        goto LABEL_88;
      }
      v33 = v114_.v114[1];
      v34 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) == 0) {
        v37 = v33 & v34;
        *(_QWORD*)(v112 + 8 * v37) = &v114_.v114;
        while (1) {
          v38 = *v32;
          if (*v32 == nullptr) {
            break;
          }
          v39 = v38[1] & v34;
          if (v39 == v37) {
            v32 = (_QWORD**)*v32;
          }
          else if (*(_QWORD*)(v112 + 8 * v39) != 0) {
            *v32 = (_QWORD*)*v38;
            *v38 = **(_QWORD**)(v112 + 8 * v39);
            **(_QWORD**)(v112 + 8 * v39) = v38;
          }
          else {
            *(_QWORD*)(v112 + 8 * v39) = v32;
            v32 = (_QWORD**)v38;
            v37 = v39;
          }
        }
      LABEL_88:
        v7 = v113;
        if ((v113 & (v113 - 1)) != 0) {
          if (v6 >= v113) {
            v1 = v6 % v113;
          }
          else {
            v1 = v6;
          }
        }
        else {
          v1 = (v113 - 1) & v6;
        }
        goto LABEL_93;
      }
      if (v33 >= primeEm) {
        v33 %= primeEm;
      }
      *(_QWORD*)(v112 + 8 * v33) = &v114_.v114;
      v35 = *v32;
      if (*v32 == nullptr) {
        goto LABEL_88;
      }
      while (1) {
        v36 = v35[1];
        if (v36 >= primeEm) {
          v36 %= primeEm;
        }
        if (v36 != v33) {
          if (*(_QWORD*)(v112 + 8 * v36) == 0) {
            *(_QWORD*)(v112 + 8 * v36) = v32;
            goto LABEL_65;
          }
          *v32 = (_QWORD*)*v35;
          *v35 = **(_QWORD**)(v112 + 8 * v36);
          **(_QWORD**)(v112 + 8 * v36) = v35;
          v35 = v32;
        }
        v36 = v33;
      LABEL_65:
        v32 = (_QWORD**)v35;
        v35 = (_QWORD*)*v35;
        v33 = v36;
        if (v35 == nullptr) {
          goto LABEL_88;
        }
      }
    }
  LABEL_93:
    v42 = *(_QWORD**)(v112 + 8 * v1);
    if (v42 != nullptr) {
      *v10 = *v42;
      *v42 = v10;
    }
    else {
      v43 = v114_.v114;
      v114_.v114 = v10;
      *v10 = v43;
      *(_QWORD*)(v112 + 8 * v1) = &v114_.v114;
      if (*v10 != 0) {
        v44 = *(_QWORD*)(*v10 + 8LL);
        if ((v7 & (v7 - 1)) != 0) {
          if (v44 >= v7) {
            v44 %= v7;
          }
        }
        else {
          v44 &= v7 - 1;
        }
        *(_QWORD*)(v112 + 8 * v44) = v10;
      }
    }
    ++v114_.v115;
  LABEL_102:
    v46 = (_QWORD*)v10[4];
    v45 = v10[5];
    if ((unsigned __int64)v46 < v45) {
      *v46 = v4;
      v1 = (__int64)(v46 + 1);
    }
    else {
      v47 = v10[3];
      v48 = (char*)v46 - v47;
      v49 = ((__int64)v46 - v47) >> 3;
      v50 = v49 + 1;
      if ((unsigned __int64)(v49 + 1) >> 61 != 0) {
      LABEL_199:
        GameRoutine_977b40_alt1();
      }
      v51 = v45 - v47;
      if (v51 >> 2 > v50) {
        v50 = v51 >> 2;
      }
      if ((unsigned __int64)v51 >= 0x7FFFFFFFFFFFFFF8LL) {
        v52 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v52 = v50;
      }
      if (v52 != 0) {
        if (v52 >> 61 != 0) {
        LABEL_200:
          GameRoutine_60a210_alt1();
        }
        v53 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v52, 16, 0);
      }
      else {
        v53 = 0;
      }
      v54 = v53 + 8 * v52;
      v55 = (unsigned __int64)v46 - v47;
      v56 = (__int64)&v48[v53 + -8 * v49];
      *(_QWORD*)&v48[v53] = v4;
      v1 = (__int64)&v48[v53 + 8];
      memcpy_alt1(v56, v47, v55);
      v10[3] = v56;
      v10[4] = v1;
      v10[5] = v54;
      if (v47 != 0) {
        v57 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v57 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v47);
      }
    }
    v10[4] = v1;
  LABEL_5:
    ++v2;
  } while (v2 != v3);
  for (i = v114_.v114; i != nullptr; i = (_QWORD*)*i) {
    v76 = i[3];
    v111 = i[4];
    for (j = (__int64*)fw_memory_g_heap_manager_ptr; v76 != v111; v76 += 8) {
      v79 = *(__int64**)(*(_QWORD*)v76 + 24LL);
      if (v79 + 12 != i + 3) {
        v80 = i[3];
        v81 = i[4];
        v82 = v79[14];
        v83 = v81 - v80;
        v84 = v79[12];
        if (v81 - v80 <= (unsigned __int64)(v82 - v84)) {
          v91 = v79[13];
          v92 = v91 - v84;
          if (v83 <= (unsigned __int64)(v91 - v84)) {
            if (v81 != v80) {
              memmove_alt1(v79[12], i[3], v81 - v80);
            }
            v78 = v84 + v83;
          }
          else {
            if (v91 != v84) {
              memmove_alt1(v79[12], i[3], v91 - v84);
              v91 = v79[13];
            }
            v93 = v80 + v92;
            v94 = v81 - (v80 + v92);
            if (v94 != 0) {
              memmove_alt1(v91, v93, v94);
            }
            v78 = v91 + v94;
          }
          v79[13] = v78;
          j = (__int64*)fw_memory_g_heap_manager_ptr;
        }
        else {
          if (v84 != 0) {
            v85 = *j;
            v79[13] = v84;
            v86 = 128;
            if (*(_QWORD*)(v85 + 200) == 0) {
              v86 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v85 + v86, v84);
            v82 = 0;
            v79[13] = 0;
            v79[14] = 0;
            v79[12] = 0;
          }
          v87 = v83 >> 3;
          if ((unsigned __int64)(v83 >> 3) >> 61 != 0) {
            goto LABEL_199;
          }
          if (v82 >> 2 > v87) {
            v87 = v82 >> 2;
          }
          v88 = (unsigned __int64)v82 >= 0x7FFFFFFFFFFFFFF8LL
                    ? 0x1FFFFFFFFFFFFFFFLL
                    : v87;
          if (v88 >> 61 != 0) {
            goto LABEL_199;
          }
          v89 = fw_memory_HeapManager_Allocate_alt1(*j, 8 * v88, 16, 0);
          v90 = v89;
          v79[12] = v89;
          v79[13] = v89;
          v79[14] = v89 + 8 * v88;
          if (v81 != v80) {
            memcpy_alt1(v89, v80, v81 - v80);
          }
          v79[13] = v90 + v83;
        }
      }
    }
  }
LABEL_118:
  v59 = *GameData_212c8d8[0];
  v60 = *(_QWORD*)(*GameData_212c8d8[0] + 64);
  v61 = *(_QWORD*)(*GameData_212c8d8[0] + 72);
  for (k = fw_memory_g_heap_manager_ptr; v60 != v61; v60 += 8) {
    v69 = *(_QWORD**)(*(_QWORD*)v60 + 24LL);
    v70 = v69[9];
    v69[10] = 0;
    v69[11] = 0;
    if (v70 != 0) {
      v71 = *(unsigned __int16*)(v70 + 16);
      v72 = *(_QWORD*)(v59 + 64);
      if (*(_WORD*)(v70 + 16) != 0) {
        v73 = *(_QWORD*)(v72 + 8LL * (unsigned int)(v71 - 1));
        if (v73 != 0 && *(_QWORD*)(v70 + 40) != 0 &&
            *(_QWORD*)(v73 + 56) == *(_QWORD*)(v70 + 56)) {
          v69[10] = v73;
          v71 = *(unsigned __int16*)(v70 + 16);
          v72 = *(_QWORD*)(v59 + 64);
        }
      }
      v74 = v71 + 1;
      if (v74 < (int)((unsigned __int64)(*(_QWORD*)(v59 + 72) - v72) >> 3)) {
        v75 = *(_QWORD*)(v72 + 8LL * (unsigned int)v74);
        if (v75 != 0 && *(_QWORD*)(v75 + 40) != 0 &&
            *(_QWORD*)(v75 + 56) == *(_QWORD*)(v70 + 56)) {
          v69[11] = v75;
        }
      }
    }
  }
  if (a1[19] != 0) {
    v63 = (_QWORD*)a1[18];
    if (v63 != nullptr) {
      do {
        v64 = (_QWORD*)*v63;
        if (*(_QWORD*)(*(_QWORD*)k + 200LL) != 0) {
          v65 = 128;
        }
        else {
          v65 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)k + v65, (__int64)v63);
        v63 = v64;
      } while (v64 != nullptr);
    }
    v66 = a1[17];
    a1[18] = 0;
    if (v66 != 0) {
      v67 = v66 & 7;
      if (v66 >= 8) {
        v95 = v66 & 0xFFFFFFFFFFFFFFF8LL;
        v68 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v68) = 0;
          *(_QWORD*)(a1[16] + 8 * v68 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v68 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v68 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v68 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v68 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v68 + 48) = 0;
          v96 = a1[16] + 8 * v68;
          v68 += 8;
          *(_QWORD*)(v96 + 56) = 0;
        } while (v95 != v68);
      }
      else {
        v68 = 0;
      }
      if (v67 != 0) {
        v97 = 8 * v68;
        do {
          --v67;
          *(_QWORD*)(a1[16] + v97) = 0;
          v97 += 8;
        } while (v67 != 0);
      }
    }
    a1[19] = 0;
  }
  v98 = (unsigned int**)a1[8];
  v99 = (unsigned int**)a1[9];
  while (v98 != v99) {
    v100 = *v98;
    v101 = **v98;
    if (v101 != 0) {
      GameRoutine_97ac00_alt1((__int64)(a1 + 1), v101, (__int64)*v98);
    }
    v102 = Resources_66bfc0((unsigned __int64*)v100);
    if (v102 != 0) {
      GameRoutine_97ac00_alt1((__int64)(a1 + 1), v102, (__int64)v100);
    }
    ++v98;
  }
  v103 = v114_.v114;
  if (v114_.v114 != nullptr) {
    do {
      v105 = (_QWORD*)*v103;
      v106 = v103[3];
      if (v106 != 0) {
        v107 = *(_QWORD*)k;
        v103[4] = v106;
        if (*(_QWORD*)(v107 + 200) != 0) {
          v108 = 128;
        }
        else {
          v108 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v107 + v108, v106);
      }
      if (*(_QWORD*)(*(_QWORD*)k + 200LL) != 0) {
        v104 = 128;
      }
      else {
        v104 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)k + v104, (__int64)v103);
      v103 = v105;
    } while (v105 != nullptr);
  }
  if (v112 != 0) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)k + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)k + v109, v112);
  }
}

#pragma GCC visibility pop
