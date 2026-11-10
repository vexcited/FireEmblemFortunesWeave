#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_98f140(__int64* result, _QWORD*);
__int64 Components_a870e0(__int64*, char);
__int64 Components_a87260(__int64 result, __int64, int);
__int64 Components_a878a0(__int64 result, __int64);
__int64 GameRoutine_a8c0c0(__int64);
__int64 GameRoutine_a8c380(__int64, _QWORD*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_character_CharacterTrailModule_CharacterTrailModule(
    __int64, __int64, __int64, __int64, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
__n128 nn_os_LockMutex(_QWORD);
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212eda0;
extern _UNKNOWN GameData_2167560;
extern _UNKNOWN GameData_220f8d8;
extern __int64 GameData_212c638;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ed98;
extern int GameData_220f8d4;
unsigned __int64 GameRoutine_d2b5f0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) GameRoutine_d3ad80();
void __attribute__((noreturn)) GameRoutine_d3ada0();
void __attribute__((noreturn)) GameRoutine_d3adc0();
unsigned __int64
game_character_CharacterTrail_SetupSignalCallback_lambda0_Invoke(
    unsigned __int64 result, __int64* a2);
unsigned __int64

game_character_CharacterTrail_SetupSignalCallback_lambda0_Invoke(
    unsigned __int64 result, __int64* a2)
{
  __int64 v2;
  _QWORD** v3;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  char* v17;
  int v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  char* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  unsigned __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  bool v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  _BYTE* v74;
  _BYTE* v75;
  bool v76;
  __int64* v77;
  unsigned __int64 v78;
  __int64 v79;
  __int64 v80;
  char* v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  char* v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  unsigned __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  char* v102;
  __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64* v106;
  __int64 v107;
  __int64 v108;
  char* v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  __int64 v114;
  __int64* v115;
  unsigned __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD** v121;
  __int64 v122;
  char* v123;
  _QWORD v124[2];

  v2 = *a2;
  v3 = *(_QWORD***)(result + 8);
  v4 = *(_QWORD*)(*(_QWORD*)(*a2 + 24) + 8LL);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                  memory_order_acquire);
  v6 = GameData_212ed98;
  if ((explicit & 1) == 0) {
    result = __cxa_guard_acquire(GameData_212eda0);
    if ((_DWORD)result != 0) {
      *v6 = wld_Crc32(0, "CharacterAnimator", 0x11u);
      result = __cxa_guard_release(GameData_212eda0);
    }
  }
  v7 = *(_QWORD*)(v4 + 512);
  v8 = v7;
  do {
    if (v8 == *(_QWORD*)(v4 + 504)) {
      goto LABEL_8;
    }
    v9 = *(_DWORD*)(v8 - 16);
    v8 -= 16;
    v7 -= 16;
  } while (v9 != *v6);
  if (*(_QWORD*)(v4 + 512) == v7) {
  LABEL_8:
    v10 = 0;
    v11 = (*(_QWORD*)0x60LL);
    if ((*(_QWORD*)0x60LL) == 0) {
      return result;
    }
  }
  else {
    v10 = *(_QWORD*)(v7 + 8);
    v11 = *(_QWORD*)(v10 + 96);
    if (v11 == 0) {
      return result;
    }
  }
  result = GameRoutine_d2b5f0(*(_QWORD*)(v11 + 32) + 72LL);
  if ((result & 0x100000000LL) != 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 72LL) + 104LL * (int)result +
                 16) != 0) {
    v12 = *(_QWORD*)(v10 + 96);
    v121 = v3;
    v122 = v2;
    v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 72LL) +
                     104LL *
                         (int)GameRoutine_d2b5f0(*(_QWORD*)(v12 + 32) + 72LL) +
                     16);
    v15 = *(_QWORD**)(v13 + 80);
    v14 = *(_QWORD**)(v13 + 88);
    if (v15 != v14) {
      v16 = 0;
      v17 = nullptr;
      v123 = nullptr;
      while (1) {
        v18 = wld_Crc32(0, "Signal_BeginTrail", 0x11u);
        if (v18 ==
            (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v15 + 32LL))(*v15)) {
          v19 = *v15;
          if ((unsigned __int64)v17 < v16) {
            *(_QWORD*)v17 = v19;
            v17 += 8;
          }
          else {
            v20 = (char*)(v17 - v123);
            v21 = (v17 - v123) >> 3;
            v22 = v21 + 1;
            if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
              GameRoutine_d3ad80();
            }
            if ((__int64)(v16 - (_QWORD)v123) >> 2 > v22) {
              v22 = (__int64)(v16 - (_QWORD)v123) >> 2;
            }
            if (v16 - (unsigned __int64)v123 >= 0x7FFFFFFFFFFFFFF8LL) {
              v23 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v23 = v22;
            }
            if (v23 != 0) {
              if (v23 >> 61 != 0) {
                goto LABEL_170;
              }
              v24 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
            }
            else {
              v24 = 0;
            }
            v16 = v24 + 8 * v23;
            v25 = (__int64)&v20[v24 + -8 * v21];
            *(_QWORD*)&v20[v24] = v19;
            v17 = &v20[v24 + 8];
            memcpy(v25, v123, v20);
            if (v123 != nullptr) {
              v26 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v26 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
            }
            v123 = (char*)v25;
          }
        }
        v15 += 2;
        if (v15 == v14) {
          goto LABEL_33;
        }
      }
    }
    v17 = nullptr;
    v123 = nullptr;
  LABEL_33:
    v27 = *(_QWORD*)(v10 + 96);
    result = GameRoutine_d2b5f0(*(_QWORD*)(v27 + 32) + 72LL);
    v28 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v27 + 24) + 72LL) +
                     104LL * (int)result + 16);
    v29 = *(_QWORD**)(v28 + 80);
    v30 = *(_QWORD**)(v28 + 88);
    if (v29 != v30) {
      v31 = nullptr;
      v32 = 0;
      v33 = 0;
      while (1) {
        v34 = wld_Crc32(0, "Signal_EndTrail", 0xFu);
        result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v29 + 32LL))(*v29);
        if (v34 == (_DWORD)result) {
          v35 = *v29;
          if ((unsigned __int64)v31 < v32) {
            *(_QWORD*)v31 = v35;
            v31 += 8;
          }
          else {
            v36 = &v31[-v33];
            v37 = v33;
            v38 = (__int64)&v31[-v33] >> 3;
            v39 = v38 + 1;
            if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
              GameRoutine_d3ada0();
            }
            v40 = v32 - v37;
            v41 = v37;
            v42 = (__int64)(v32 - v37) >> 2;
            if (v42 > v39) {
              v39 = v42;
            }
            if (v40 >= 0x7FFFFFFFFFFFFFF8LL) {
              v43 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v43 = v39;
            }
            if (v43 != 0) {
              if (v43 >> 61 != 0) {
                goto LABEL_170;
              }
              v44 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v43, 16, 0);
            }
            else {
              v44 = 0;
            }
            v32 = v44 + 8 * v43;
            v33 = (__int64)&v36[v44 + -8 * v38];
            *(_QWORD*)&v36[v44] = v35;
            v31 = &v36[v44 + 8];
            result = memcpy(v33, v41, v36);
            if (v41 != 0) {
              v45 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v45 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
            }
          }
        }
        v29 += 2;
        if (v29 == v30) {
          goto LABEL_54;
        }
      }
    }
    v31 = nullptr;
    v33 = 0;
  LABEL_54:
    v46 = v17 - v123;
    v65 = v17 == v123;
    v47 = v123;
    if (v65) {
      goto LABEL_161;
    }
    v48 = v46 >> 3;
    v49 = (v46 >> 3) & 7;
    if (v48 >= 8) {
      v52 = v48 & 0xFFFFFFFFFFFFFFF8LL;
      v53 = v123 + 32;
      v50 = -1;
      v51 = 0;
      do {
        if (*(v53 - 4) == v122) {
          v50 = v51;
        }
        if (*(v53 - 3) == v122) {
          v50 = v51 + 1;
        }
        if (*(v53 - 2) == v122) {
          v50 = v51 + 2;
        }
        if (*(v53 - 1) == v122) {
          v50 = v51 + 3;
        }
        if (*v53 == v122) {
          v50 = v51 + 4;
        }
        if (v53[1] == v122) {
          v50 = v51 + 5;
        }
        v54 = v53[2];
        v55 = v53[3];
        v53 += 8;
        if (v54 == v122) {
          v50 = v51 + 6;
        }
        v56 = v51 + 7;
        v51 += 8;
        if (v55 == v122) {
          v50 = v56;
        }
      } while (v51 != v52);
    }
    else {
      v50 = -1;
      v51 = 0;
    }
    for (; v49 != 0; --v49) {
      if (*(_QWORD*)&v123[8 * v51] == v122) {
        v50 = v51;
      }
      ++v51;
    }
    if ((v50 & 0x80000000) != 0 ||
        v50 >= (unsigned __int64)((__int64)&v31[-v33] >> 3)) {
    LABEL_161:
      if (v33 == 0) {
      LABEL_165:
        if (v47 != nullptr) {
          v120 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v120 = 56;
          }
          return nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v120);
        }
        return result;
      }
    LABEL_162:
      v119 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v119 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v119);
      goto LABEL_165;
    }
    v57 = v33;
    v58 = *(_QWORD*)(v33 + 8LL * v50);
    if (v58 == 0) {
      goto LABEL_162;
    }
    v59 = v57;
    v60 = v121;
    v61 = Components_a870e0(
        *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     48LL),
        0);
    GameRoutine_a8c380(v61, *v121);
    v62 = *((_DWORD*)*v121 + 70) + 10;
    if (*(_DWORD*)(v61 + 280) != v62) {
      v63 = *(_QWORD*)(v61 + 8);
      nn_os_LockMutex(&GameData_2167560);
      Components_a878a0(v63, v61);
      Components_a87260(v63, v61, v62);
      v60 = v121;
      *(_BYTE*)(v63 + 80) = 1;
      v47 = v123;
      nn_os_UnlockMutex(&GameData_2167560);
      *(_DWORD*)(v61 + 280) = v62;
    }
    v64 = *(_QWORD*)(v61 + 736);
    v65 = *(_QWORD*)(v61 + 768) == v64 && *(_DWORD*)(v61 + 784) == 7;
    if (!v65) {
      *(_DWORD*)(v61 + 784) = 0;
      *(_QWORD*)(v61 + 768) = 0;
      *(_QWORD*)(v61 + 776) = 0;
      v66 = *(_DWORD*)(v61 + 296);
      *(_DWORD*)(v61 + 296) = v66 & 0xFFFFFFFB;
      if (v64 != 0) {
        *(_QWORD*)(v61 + 768) = v64;
        *(_DWORD*)(v61 + 784) = 7;
        *(_DWORD*)(v61 + 296) = v66 | 4;
      }
    }
    nn_os_LockMutex(GameData_212df28);
    v67 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         320, 16, 0);
    game_character_CharacterTrailModule_CharacterTrailModule(
        v67, v61, (__int64)v60, v122, v58);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f8d8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_220f8d8) != 0) {
      GameData_220f8d4 = wld_Crc32(0, "CharacterTrailModule", 0x14u);
      __cxa_guard_release(&GameData_220f8d8);
    }
    v69 = *(_QWORD*)(v61 + 504);
    v68 = *(_QWORD*)(v61 + 512);
    v33 = v59;
    v70 = v68;
    LODWORD(v124[0]) = GameData_220f8d4;
    v124[1] = v67;
    while (v70 != v69) {
      v71 = *(_DWORD*)(v70 - 16);
      v70 -= 16;
      if (v71 == GameData_220f8d4) {
        goto LABEL_102;
      }
    }
    if (v69 == v68 && (unsigned __int64)(*(_QWORD*)(v61 + 520) - v69) <= 0x6F) {
      v72 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      *(_QWORD*)(v61 + 504) = v72;
      *(_QWORD*)(v61 + 512) = v72;
      *(_QWORD*)(v61 + 520) = v72 + 112;
      if (v68 != 0) {
        v73 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v73 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v73);
      }
    }
    GameRoutine_98f140((__int64*)(v61 + 504), v124);
  LABEL_102:
    if ((*(_BYTE*)(v67 + 16) & 1) == 0) {
      *(_BYTE*)(v67 + 16) = 1;
      *(_BYTE*)(v67 + 17) &= ~2u;
      *(_BYTE*)(v67 + 18) &= ~2u;
      *(_BYTE*)(v67 + 19) &= ~2u;
      *(_BYTE*)(v67 + 20) &= ~2u;
      v74 = *(_BYTE**)(v67 + 8);
      v74[632] = 0;
      v74[664] = 0;
      v74[696] = 0;
      v74[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v67 + 64LL))(v67);
      v75 = *(_BYTE**)(v67 + 8);
      v76 = v75[300] == 3 && v75[301] == 3;
      if (v76 || v75[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v67 + 72LL))(v67);
      }
    }
    v77 = *(__int64**)(v61 + 536);
    v78 = *(_QWORD*)(v61 + 544);
    if ((unsigned __int64)v77 >= v78) {
      v80 = *(_QWORD*)(v61 + 528);
      v81 = (char*)v77 - v80;
      v82 = ((__int64)v77 - v80) >> 3;
      v83 = v82 + 1;
      if ((unsigned __int64)(v82 + 1) >> 61 != 0) {
        goto LABEL_177;
      }
      v84 = v78 - v80;
      if (v84 >> 2 > v83) {
        v83 = v84 >> 2;
      }
      if ((unsigned __int64)v84 >= 0x7FFFFFFFFFFFFFF8LL) {
        v85 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v85 = v83;
      }
      if (v85 != 0) {
        if (v85 >> 61 != 0) {
          goto LABEL_170;
        }
        v86 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v85, 16, 0);
      }
      else {
        v86 = 0;
      }
      v87 = v86 + 8 * v85;
      v88 = (char*)v77 - v80;
      v89 = (__int64)&v81[v86 + -8 * v82];
      *(_QWORD*)&v81[v86] = v67;
      v79 = (__int64)&v81[v86 + 8];
      memcpy(v89, v80, v88);
      *(_QWORD*)(v61 + 528) = v89;
      *(_QWORD*)(v61 + 536) = v79;
      *(_QWORD*)(v61 + 544) = v87;
      if (v80 != 0) {
        v90 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v90 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v90);
      }
      v47 = v123;
      v33 = v59;
    }
    else {
      *v77 = v67;
      v79 = (__int64)(v77 + 1);
    }
    *(_QWORD*)(v61 + 536) = v79;
    v91 = *(__int64**)(v61 + 560);
    v92 = *(_QWORD*)(v61 + 568);
    if ((unsigned __int64)v91 < v92) {
      *v91 = v67;
      v93 = (__int64)(v91 + 1);
      goto LABEL_143;
    }
    v94 = *(_QWORD*)(v61 + 552);
    v95 = (char*)v91 - v94;
    v96 = ((__int64)v91 - v94) >> 3;
    v97 = v96 + 1;
    if ((unsigned __int64)(v96 + 1) >> 61 == 0) {
      v98 = v92 - v94;
      if (v98 >> 2 > v97) {
        v97 = v98 >> 2;
      }
      if ((unsigned __int64)v98 >= 0x7FFFFFFFFFFFFFF8LL) {
        v99 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v99 = v97;
      }
      if (v99 != 0) {
        if (v99 >> 61 != 0) {
          goto LABEL_170;
        }
        v100 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v99, 16, 0);
      }
      else {
        v100 = 0;
      }
      v101 = v100 + 8 * v99;
      v102 = (char*)v91 - v94;
      v103 = (__int64)&v95[v100 + -8 * v96];
      *(_QWORD*)&v95[v100] = v67;
      v93 = (__int64)&v95[v100 + 8];
      memcpy(v103, v94, v102);
      *(_QWORD*)(v61 + 552) = v103;
      *(_QWORD*)(v61 + 560) = v93;
      *(_QWORD*)(v61 + 568) = v101;
      if (v94 != 0) {
        v104 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v104 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v104);
      }
      v47 = v123;
      v33 = v59;
    LABEL_143:
      *(_QWORD*)(v61 + 560) = v93;
      GameRoutine_a8c0c0(v61);
      *(_BYTE*)(v61 + 576) = 1;
      result = nn_os_UnlockMutex(GameData_212df28);
      v106 = (__int64*)v60[4];
      v105 = v60[5];
      if ((unsigned __int64)v106 < v105) {
        *v106 = v61;
        v106[1] = v67;
        v107 = (__int64)(v106 + 2);
      LABEL_160:
        v60[4] = v107;
        goto LABEL_161;
      }
      v108 = v60[3];
      v109 = (char*)v106 - v108;
      v110 = ((__int64)v106 - v108) >> 4;
      v111 = v110 + 1;
      if ((unsigned __int64)(v110 + 1) >> 60 != 0) {
        GameRoutine_d3adc0();
      }
      v112 = v105 - v108;
      if (v112 >> 3 > v111) {
        v111 = v112 >> 3;
      }
      if ((unsigned __int64)v112 >= 0x7FFFFFFFFFFFFFF0LL) {
        v113 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v113 = v111;
      }
      if (v113 == 0) {
        v114 = 0;
        goto LABEL_155;
      }
      if (v113 >> 60 == 0) {
        v114 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v113, 16, 0);
      LABEL_155:
        v115 = (__int64*)&v109[v114];
        v116 = v114 + 16 * v113;
        *v115 = v61;
        v115[1] = v67;
        v117 = (__int64)&v109[v114 + -16 * v110];
        v107 = (__int64)&v109[v114 + 16];
        result = memcpy(v117, v108, v109);
        v60[3] = v117;
        v60[4] = v107;
        v60[5] = v116;
        if (v108 != 0) {
          v118 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v118 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v118);
        }
        v33 = v59;
        goto LABEL_160;
      }
    LABEL_170:
      GameRoutine_60a210();
    }
  LABEL_177:
    GameRoutine_98f290();
  }
  return result;
}

#pragma GCC visibility pop
