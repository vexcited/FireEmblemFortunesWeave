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
game_character_CharacterTrail_SetupSignalCallback_lambda0_Invoke_alt1(
    unsigned __int64 result,
    __int64* a2) __asm__("game_character_CharacterTrail_SetupSignalCallback_"
                         "lambda0_Invoke");
__int64 GameHr_a878a0(__int64 result, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void Components_a87260_alt1(__int64, __int64, int) __asm__("Components_a87260");
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void game_character_CharacterTrailModule_CharacterTrailModule_alt1(
    __int64, __int64, __int64, __int64,
    __int64) __asm__("game_character_CharacterTrailModule_"
                     "CharacterTrailModule");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_character_CharacterTrail_SetupSignalCallback_lambda0_Invoke(
    __int64 a1, __int64* a2);

void game_character_CharacterTrail_SetupSignalCallback_lambda0_Invoke(
    __int64 a1, __int64* a2)
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
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  _QWORD* v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned int v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  int v63;
  __int64 v64;
  __int64 v65;
  bool v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int64 v74;
  _BYTE* v75;
  _BYTE* v76;
  bool v77;
  __int64* v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  __int64* v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64* v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  _QWORD** v122;
  __int64 v123;
  __int64 v124;
  _QWORD v125[2];

  v2 = *a2;
  v3 = *(_QWORD***)(a1 + 8);
  v4 = *(_QWORD*)(*(_QWORD*)(*a2 + 24) + 8LL);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212eda0,
                                  memory_order_acquire);
  v6 = GameData_212ed98;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212eda0) != 0) {
    *v6 = wld_Crc32(0, "CharacterAnimator", 0x11u);
    __cxa_guard_release_alt1((__int64)GameData_212eda0);
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
      return;
    }
  }
  else {
    v10 = *(_QWORD*)(v7 + 8);
    v11 = *(_QWORD*)(v10 + 96);
    if (v11 == 0) {
      return;
    }
  }
  v12 = GameRoutine_d2b5f0(*(_QWORD*)(v11 + 32) + 72LL);
  if ((v12 & 0x100000000LL) != 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 72LL) + 104LL * (int)v12 +
                 16) != 0) {
    v13 = *(_QWORD*)(v10 + 96);
    v122 = v3;
    v123 = v2;
    v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 24) + 72LL) +
                     104LL *
                         (int)GameRoutine_d2b5f0(*(_QWORD*)(v13 + 32) + 72LL) +
                     16);
    v16 = *(_QWORD**)(v14 + 80);
    v15 = *(_QWORD**)(v14 + 88);
    if (v16 != v15) {
      v17 = 0;
      v18 = nullptr;
      v124 = 0;
      while (1) {
        v19 = wld_Crc32(0, "Signal_BeginTrail", 0x11u);
        if (v19 ==
            (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v16 + 32LL))(*v16)) {
          v20 = *v16;
          if ((unsigned __int64)v18 < v17) {
            *v18++ = v20;
          }
          else {
            v21 = (unsigned __int64)v18 - v124;
            v22 = ((__int64)v18 - v124) >> 3;
            v23 = v22 + 1;
            if ((unsigned __int64)(v22 + 1) >> 61 != 0) {
              GameRoutine_d3ad80();
            }
            if ((__int64)(v17 - v124) >> 2 > v23) {
              v23 = (__int64)(v17 - v124) >> 2;
            }
            if (v17 - v124 >= 0x7FFFFFFFFFFFFFF8LL) {
              v24 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v24 = v23;
            }
            if (v24 != 0) {
              if (v24 >> 61 != 0) {
                goto LABEL_170;
              }
              v25 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v24, 16, 0);
            }
            else {
              v25 = 0;
            }
            v17 = v25 + 8 * v24;
            v26 = v25 + v21 - 8 * v22;
            *(_QWORD*)(v25 + v21) = v20;
            v18 = (_QWORD*)(v25 + v21 + 8);
            memcpy_alt1(v26, v124, v21);
            if (v124 != 0) {
              v27 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v124);
            }
            v124 = v26;
          }
        }
        v16 += 2;
        if (v16 == v15) {
          goto LABEL_33;
        }
      }
    }
    v18 = nullptr;
    v124 = 0;
  LABEL_33:
    v28 = *(_QWORD*)(v10 + 96);
    v29 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v28 + 24) + 72LL) +
                     104LL *
                         (int)GameRoutine_d2b5f0(*(_QWORD*)(v28 + 32) + 72LL) +
                     16);
    v30 = *(_QWORD**)(v29 + 80);
    v31 = *(_QWORD**)(v29 + 88);
    if (v30 != v31) {
      v32 = nullptr;
      v33 = 0;
      v34 = 0;
      while (1) {
        v35 = wld_Crc32(0, "Signal_EndTrail", 0xFu);
        if (v35 ==
            (*(unsigned int (**)(_QWORD))(*(_QWORD*)*v30 + 32LL))(*v30)) {
          v36 = *v30;
          if ((unsigned __int64)v32 < v33) {
            *v32++ = v36;
          }
          else {
            v37 = (unsigned __int64)v32 - v34;
            v38 = v34;
            v39 = ((__int64)v32 - v34) >> 3;
            v40 = v39 + 1;
            if ((unsigned __int64)(v39 + 1) >> 61 != 0) {
              GameRoutine_d3ada0();
            }
            v41 = v33 - v38;
            v42 = v38;
            v43 = (__int64)(v33 - v38) >> 2;
            if (v43 > v40) {
              v40 = v43;
            }
            if (v41 >= 0x7FFFFFFFFFFFFFF8LL) {
              v44 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v44 = v40;
            }
            if (v44 != 0) {
              if (v44 >> 61 != 0) {
                goto LABEL_170;
              }
              v45 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
            }
            else {
              v45 = 0;
            }
            v33 = v45 + 8 * v44;
            v34 = v45 + v37 - 8 * v39;
            *(_QWORD*)(v45 + v37) = v36;
            v32 = (_QWORD*)(v45 + v37 + 8);
            memcpy_alt1(v34, v42, v37);
            if (v42 != 0) {
              v46 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v46 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v42);
            }
          }
        }
        v30 += 2;
        if (v30 == v31) {
          goto LABEL_54;
        }
      }
    }
    v32 = nullptr;
    v34 = 0;
  LABEL_54:
    v47 = (__int64)v18 - v124;
    v66 = v18 == (_QWORD*)v124;
    v48 = v124;
    if (v66) {
      goto LABEL_161;
    }
    v49 = v47 >> 3;
    v50 = (v47 >> 3) & 7;
    if (v49 >= 8) {
      v53 = v49 & 0xFFFFFFFFFFFFFFF8LL;
      v54 = (_QWORD*)(v124 + 32);
      v51 = -1;
      v52 = 0;
      do {
        if (*(v54 - 4) == v123) {
          v51 = v52;
        }
        if (*(v54 - 3) == v123) {
          v51 = v52 + 1;
        }
        if (*(v54 - 2) == v123) {
          v51 = v52 + 2;
        }
        if (*(v54 - 1) == v123) {
          v51 = v52 + 3;
        }
        if (*v54 == v123) {
          v51 = v52 + 4;
        }
        if (v54[1] == v123) {
          v51 = v52 + 5;
        }
        v55 = v54[2];
        v56 = v54[3];
        v54 += 8;
        if (v55 == v123) {
          v51 = v52 + 6;
        }
        v57 = v52 + 7;
        v52 += 8;
        if (v56 == v123) {
          v51 = v57;
        }
      } while (v52 != v53);
    }
    else {
      v51 = -1;
      v52 = 0;
    }
    for (; v50 != 0; --v50) {
      if (*(_QWORD*)(v124 + 8 * v52) == v123) {
        v51 = v52;
      }
      ++v52;
    }
    if ((v51 & 0x80000000) != 0 ||
        v51 >= (unsigned __int64)(((__int64)v32 - v34) >> 3)) {
    LABEL_161:
      v58 = v34;
      if (v34 == 0) {
      LABEL_165:
        if (v48 != 0) {
          v121 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v121 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, v48);
        }
        return;
      }
    LABEL_162:
      v120 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v120 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v120, v58);
      goto LABEL_165;
    }
    v58 = v34;
    v59 = *(_QWORD*)(v34 + 8LL * v51);
    if (v59 == 0) {
      goto LABEL_162;
    }
    v60 = v58;
    v61 = v122;
    v62 = Components_a870e0(
        *(__int64**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                                8LL) +
                     48LL),
        0);
    GameRoutine_a8c380(v62, *v122);
    v63 = *((_DWORD*)*v122 + 70) + 10;
    if (*(_DWORD*)(v62 + 280) != v63) {
      v64 = *(_QWORD*)(v62 + 8);
      nn_os_LockMutex_alt1((__int64)&GameData_2167560);
      GameHr_a878a0(v64, v62);
      Components_a87260_alt1(v64, v62, v63);
      v61 = v122;
      *(_BYTE*)(v64 + 80) = 1;
      v48 = v124;
      nn_os_UnlockMutex_alt1((__int64)&GameData_2167560);
      *(_DWORD*)(v62 + 280) = v63;
    }
    v65 = *(_QWORD*)(v62 + 736);
    v66 = *(_QWORD*)(v62 + 768) == v65 && *(_DWORD*)(v62 + 784) == 7;
    if (!v66) {
      *(_DWORD*)(v62 + 784) = 0;
      *(_QWORD*)(v62 + 768) = 0;
      *(_QWORD*)(v62 + 776) = 0;
      v67 = *(_DWORD*)(v62 + 296);
      *(_DWORD*)(v62 + 296) = v67 & 0xFFFFFFFB;
      if (v65 != 0) {
        *(_QWORD*)(v62 + 768) = v65;
        *(_DWORD*)(v62 + 784) = 7;
        *(_DWORD*)(v62 + 296) = v67 | 4;
      }
    }
    nn_os_LockMutex_alt1((__int64)GameData_212df28);
    v68 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         320, 16, 0);
    game_character_CharacterTrailModule_CharacterTrailModule_alt1(
        v68, v62, (__int64)v61, v123, v59);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f8d8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_220f8d8) != 0) {
      GameData_220f8d4 = wld_Crc32(0, "CharacterTrailModule", 0x14u);
      __cxa_guard_release_alt1((__int64)&GameData_220f8d8);
    }
    v70 = *(_QWORD*)(v62 + 504);
    v69 = *(_QWORD*)(v62 + 512);
    v34 = v60;
    v71 = v69;
    LODWORD(v125[0]) = GameData_220f8d4;
    v125[1] = v68;
    while (v71 != v70) {
      v72 = *(_DWORD*)(v71 - 16);
      v71 -= 16;
      if (v72 == GameData_220f8d4) {
        goto LABEL_102;
      }
    }
    if (v70 == v69 && (unsigned __int64)(*(_QWORD*)(v62 + 520) - v70) <= 0x6F) {
      v73 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      *(_QWORD*)(v62 + 504) = v73;
      *(_QWORD*)(v62 + 512) = v73;
      *(_QWORD*)(v62 + 520) = v73 + 112;
      if (v69 != 0) {
        v74 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v74 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v70);
      }
    }
    GameRoutine_98f140_alt1((__int64*)(v62 + 504), v125);
  LABEL_102:
    if ((*(_BYTE*)(v68 + 16) & 1) == 0) {
      *(_BYTE*)(v68 + 16) = 1;
      *(_BYTE*)(v68 + 17) &= ~2u;
      *(_BYTE*)(v68 + 18) &= ~2u;
      *(_BYTE*)(v68 + 19) &= ~2u;
      *(_BYTE*)(v68 + 20) &= ~2u;
      v75 = *(_BYTE**)(v68 + 8);
      v75[632] = 0;
      v75[664] = 0;
      v75[696] = 0;
      v75[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v68 + 64LL))(v68);
      v76 = *(_BYTE**)(v68 + 8);
      v77 = v76[300] == 3 && v76[301] == 3;
      if (v77 || v76[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v68 + 72LL))(v68);
      }
    }
    v78 = *(__int64**)(v62 + 536);
    v79 = *(_QWORD*)(v62 + 544);
    if ((unsigned __int64)v78 >= v79) {
      v81 = *(_QWORD*)(v62 + 528);
      v82 = (char*)v78 - v81;
      v83 = ((__int64)v78 - v81) >> 3;
      v84 = v83 + 1;
      if ((unsigned __int64)(v83 + 1) >> 61 != 0) {
        goto LABEL_177;
      }
      v85 = v79 - v81;
      if (v85 >> 2 > v84) {
        v84 = v85 >> 2;
      }
      if ((unsigned __int64)v85 >= 0x7FFFFFFFFFFFFFF8LL) {
        v86 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v86 = v84;
      }
      if (v86 != 0) {
        if (v86 >> 61 != 0) {
          goto LABEL_170;
        }
        v87 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v86, 16, 0);
      }
      else {
        v87 = 0;
      }
      v88 = v87 + 8 * v86;
      v89 = (unsigned __int64)v78 - v81;
      v90 = (__int64)&v82[v87 + -8 * v83];
      *(_QWORD*)&v82[v87] = v68;
      v80 = (__int64)&v82[v87 + 8];
      memcpy_alt1(v90, v81, v89);
      *(_QWORD*)(v62 + 528) = v90;
      *(_QWORD*)(v62 + 536) = v80;
      *(_QWORD*)(v62 + 544) = v88;
      if (v81 != 0) {
        v91 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v91 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v81);
      }
      v48 = v124;
      v34 = v60;
    }
    else {
      *v78 = v68;
      v80 = (__int64)(v78 + 1);
    }
    *(_QWORD*)(v62 + 536) = v80;
    v92 = *(__int64**)(v62 + 560);
    v93 = *(_QWORD*)(v62 + 568);
    if ((unsigned __int64)v92 < v93) {
      *v92 = v68;
      v94 = (__int64)(v92 + 1);
      goto LABEL_143;
    }
    v95 = *(_QWORD*)(v62 + 552);
    v96 = (char*)v92 - v95;
    v97 = ((__int64)v92 - v95) >> 3;
    v98 = v97 + 1;
    if ((unsigned __int64)(v97 + 1) >> 61 == 0) {
      v99 = v93 - v95;
      if (v99 >> 2 > v98) {
        v98 = v99 >> 2;
      }
      if ((unsigned __int64)v99 >= 0x7FFFFFFFFFFFFFF8LL) {
        v100 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v100 = v98;
      }
      if (v100 != 0) {
        if (v100 >> 61 != 0) {
          goto LABEL_170;
        }
        v101 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v100, 16, 0);
      }
      else {
        v101 = 0;
      }
      v102 = v101 + 8 * v100;
      v103 = (unsigned __int64)v92 - v95;
      v104 = (__int64)&v96[v101 + -8 * v97];
      *(_QWORD*)&v96[v101] = v68;
      v94 = (__int64)&v96[v101 + 8];
      memcpy_alt1(v104, v95, v103);
      *(_QWORD*)(v62 + 552) = v104;
      *(_QWORD*)(v62 + 560) = v94;
      *(_QWORD*)(v62 + 568) = v102;
      if (v95 != 0) {
        v105 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v105 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v105, v95);
      }
      v48 = v124;
      v34 = v60;
    LABEL_143:
      *(_QWORD*)(v62 + 560) = v94;
      GameRoutine_a8c0c0_alt1(v62);
      *(_BYTE*)(v62 + 576) = 1;
      nn_os_UnlockMutex_alt1((__int64)GameData_212df28);
      v107 = (__int64*)v61[4];
      v106 = v61[5];
      if ((unsigned __int64)v107 < v106) {
        *v107 = v62;
        v107[1] = v68;
        v108 = (__int64)(v107 + 2);
      LABEL_160:
        v61[4] = v108;
        goto LABEL_161;
      }
      v109 = v61[3];
      v110 = (unsigned __int64)v107 - v109;
      v111 = ((__int64)v107 - v109) >> 4;
      v112 = v111 + 1;
      if ((unsigned __int64)(v111 + 1) >> 60 != 0) {
        GameRoutine_d3adc0();
      }
      v113 = v106 - v109;
      if (v113 >> 3 > v112) {
        v112 = v113 >> 3;
      }
      if ((unsigned __int64)v113 >= 0x7FFFFFFFFFFFFFF0LL) {
        v114 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v114 = v112;
      }
      if (v114 == 0) {
        v115 = 0;
        goto LABEL_155;
      }
      if (v114 >> 60 == 0) {
        v115 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v114, 16, 0);
      LABEL_155:
        v116 = (__int64*)(v115 + v110);
        v117 = v115 + 16 * v114;
        *v116 = v62;
        v116[1] = v68;
        v118 = v115 + v110 - 16 * v111;
        v108 = v115 + v110 + 16;
        memcpy_alt1(v118, v109, v110);
        v61[3] = v118;
        v61[4] = v108;
        v61[5] = v117;
        if (v109 != 0) {
          v119 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v119 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v119, v109);
        }
        v34 = v60;
        goto LABEL_160;
      }
    LABEL_170:
      GameRoutine_60a210();
    }
  LABEL_177:
    GameRoutine_98f290();
  }
}

#pragma GCC visibility pop
