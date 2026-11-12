#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ed500();
__int64 GameRoutine_6f1340(void);
__int64 GameRoutine_6f2440(_QWORD, _QWORD);
__int64 GameRoutine_6f2700(_QWORD);
__int64 GameRoutine_6f2ce0(_QWORD);
__int64 GameRoutine_6f57e0(_QWORD, _QWORD, _QWORD);
__int64 ItemFile_6eeca0_alt1(_QWORD, _QWORD) __asm__("ItemFile_6eeca0");
__int64 Resources_66bfc0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern _UNKNOWN GameData_21ca350;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_1f92360[])();
extern __int64 (*GameData_1f92390[])();
extern __int64 (*GameData_1f92430[])();
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca318;
extern __int64 GameData_21ca320;
extern __int64 GameData_21ca328;
extern __int64 GameData_21ca330;
extern __int64 GameData_21ca340;
extern __int64 GameData_21ca348;
extern __int64 GameData_21ca358;
extern __int64 GameData_21ca360;
extern __int64 GameData_21ca368;
extern __int64 GameData_21ca370;
extern __int64 GameData_21ca378;
extern __int64 GameData_21ca380;
extern __int64 GameData_21ca388;
extern __int64 GameData_21ca390;
extern __int64 GameData_21ca398;
extern __int64 GameData_21ca3a0;
extern __int64 GameData_21ca3a8;
extern __int64 GameData_21ca3b0;
extern __int64 GameData_21ca3c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern int GameData_21ca3c8;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
void __attribute__((noreturn)) GameRoutine_6f0df0(_QWORD);
void __attribute__((noreturn)) GameRoutine_6f1320(_QWORD);
void __attribute__((noreturn)) GameRoutine_6f26d0(_QWORD);
unsigned __int64
ItemFile_Unknown4_alt1(_QWORD* a1) __asm__("ItemFile_Unknown4");
__int64 ItemFile_6eeca0(__int64 result, __int64 a2);
__int64 ItemFile_Unknown5();
__int64 ItemFile_Unknown6();
__int64 ItemFile_DeletingDestructor_6ef1b0(_QWORD* a1);
__int64 ItemFile_Destructor(_QWORD* a1);
__int64 ItemFile_DeletingDestructor_6ef2e0(_QWORD* a1);
__int64 GameHr_6f1340(__int64 result, __int64*, __int64, char);
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 Resources_66bfc0_alt1(unsigned __int64*) __asm__("Resources_66bfc0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64
std___1___next_prime_alt1(unsigned __int64) __asm__("std___1___next_prime");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_6f2440_alt1(__int64*,
                             unsigned __int64) __asm__("GameRoutine_6f2440");
void GameRoutine_6f57e0_alt1(__int64, unsigned int,
                             __int64) __asm__("GameRoutine_6f57e0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void __attribute__((noreturn))
GameRoutine_6f0df0_alt1() __asm__("GameRoutine_6f0df0");
void __attribute__((noreturn))
GameRoutine_6f1320_alt1() __asm__("GameRoutine_6f1320");
void __attribute__((noreturn))
GameRoutine_6f26d0_alt1() __asm__("GameRoutine_6f26d0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ItemFile_Unknown4(_QWORD* a1);

void ItemFile_Unknown4(_QWORD* a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64* v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64* v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  __int64 v115;
  __int64* v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  __int64* v128;
  __int64 v129;
  __int64 v130;
  int v131;
  __int64 v132;
  _QWORD* v133;
  _QWORD* v134;
  _QWORD* v135;
  __int64 v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  __int64 v141;
  __int64 v142;
  unsigned int** v143;
  unsigned int** v144;
  unsigned int v145;
  unsigned int v146;
  __int64 v147;
  _QWORD* v148;
  _QWORD* v149;
  __int64 v150;
  unsigned __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64 v156;
  unsigned int** v157;
  __int64 v158;
  _QWORD* v159;
  __int64* v160;
  unsigned int* v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  unsigned __int64 v164;
  __int64** v165;
  __int64* v166;
  unsigned __int64 v167;
  __int64 v168;
  unsigned __int64 v169;
  __int64 v170;
  __int64 v171;
  float v172;
  float v173;
  float v174;
  _BOOL8 v175;
  unsigned __int64 v176;
  unsigned __int64 v177;
  unsigned __int64 v178;
  __int64 primeEm;
  unsigned __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64* v183;
  unsigned __int64 v184;
  _QWORD* v185;
  unsigned __int64 v186;
  __int64 v187;
  unsigned __int64 v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  _QWORD* v192;
  __int64 v193;
  __int64* v194;
  _QWORD* v195;
  __int64* v196;
  _QWORD* v197;
  __int64 v198;
  __int64 v199;
  __int64* v201;
  __int64* v202;
  __int64* v203;
  __int64 v204;
  unsigned __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  int v209;
  _QWORD* v210;
  __int64 v211;
  __int64* v212;
  int v213;

  GameData_21ca360 = GameData_21ca358;
  GameData_21ca378 = GameData_21ca370;
  v2 = (__int64*)GameData_21ca388;
  GameData_21ca390 = GameData_21ca388;
  GameData_21ca3a8 = GameData_21ca3a0;
  v3 = *(__int64**)(*GameData_212c878[0] + 72);
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = *(__int64**)(*GameData_212c878[0] + 64);
  if (v5 != v3) {
    v202 = *(__int64**)(*GameData_212c878[0] + 72);
    while (1) {
      v6 = *v5;
      v201 = v5;
      ItemFile_6eeca0(*v5, *v5);
      v204 = v6;
      if (v6 != 0) {
        for (i = v6; i != 0; i = *(_QWORD*)(i + 296)) {
          v8 = *(_QWORD*)(i + 24);
          if (v8 == 0) {
            break;
          }
          if (*(_QWORD*)(v8 + 600) != 0) {
            break;
          }
          *(_QWORD*)(v8 + 600) = v6;
        }
        v9 = *(_QWORD**)(v6 + 24);
        if (v9 != nullptr) {
          v10 = v9[67];
          v11 = v9[66];
          if (v11 != v10) {
            v1 = v9[67];
            do {
              v13 = *(_QWORD*)(v1 - 56);
              v1 -= 56LL;
              v12 = v13;
              if (v13 != 0) {
                *(_QWORD*)(v10 - 48) = v12;
                if (*(_QWORD*)(*v4 + 200) != 0) {
                  v14 = 128;
                }
                else {
                  v14 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v4 + v14, v12);
              }
              v10 = v1;
            } while (v1 != v11);
          }
          v9[67] = v11;
          if (*(_QWORD*)(v6 + 296) != 0) {
            v213 = 0;
            v205 = 0;
            v15 = 0;
            v16 = 0;
            v17 = v6;
            v210 = v9;
            v212 = (__int64*)(v6 + 296);
            do {
              v18 = *(_QWORD*)(v17 + 312);
              if (v18 != 0) {
                v19 = *(_DWORD*)(v17 + 320);
                if (v16 == v15) {
                LABEL_27:
                  if (v15 >= v205) {
                    v21 = v15 - v16;
                    v22 = (__int64)(v15 - v16) >> 4;
                    v23 = v22 + 1;
                    if ((unsigned __int64)(v22 + 1) >> 60 != 0) {
                      goto LABEL_319;
                    }
                    if ((__int64)(v205 - v16) >> 3 > v23) {
                      v23 = (__int64)(v205 - v16) >> 3;
                    }
                    if (v205 - v16 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v24 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v24 = v23;
                    }
                    if (v24 != 0) {
                      if (v24 >> 60 != 0) {
                        goto LABEL_320;
                      }
                      v25 = fw_memory_HeapManager_Allocate_alt1(*v4, 16 * v24,
                                                                16, 0);
                    }
                    else {
                      v25 = 0;
                    }
                    v26 = v25 + v21;
                    v27 = v25 + v21 - 16 * v22;
                    v205 = v25 + 16 * v24;
                    *(_QWORD*)v26 = v18;
                    *(_DWORD*)(v26 + 8) = v19;
                    *(_DWORD*)(v26 + 12) = 0;
                    v15 = v25 + v21 + 16;
                    memcpy_alt1(v27, v16, v21);
                    if (v16 != 0) {
                      if (*(_QWORD*)(*v4 + 200) != 0) {
                        v28 = 128;
                      }
                      else {
                        v28 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v4 + v28, v16);
                    }
                    v16 = v27;
                  }
                  else {
                    *(_QWORD*)v15 = v18;
                    *(_DWORD*)(v15 + 8) = v19;
                    *(_DWORD*)(v15 + 12) = 0;
                    v15 += 16LL;
                  }
                }
                else {
                  v20 = v16;
                  while (*(_QWORD*)v20 != v18) {
                    v20 += 16;
                    if (v20 == v15) {
                      goto LABEL_27;
                    }
                  }
                  *(_DWORD*)(v20 + 8) += v19;
                }
              }
              v29 = v210;
              v30 = *(_DWORD*)(v17 + 324);
              v31 = v15 - v16;
              v211 = v16;
              if (v15 == v16) {
                v33 = 0;
                v34 = 0;
              }
              else {
                if ((v31 & 0x8000000000000000LL) != 0) {
                  goto LABEL_319;
                }
                v32 =
                    fw_memory_HeapManager_Allocate_alt1(*v4, v15 - v16, 16, 0);
                v33 = v32 + v31;
                v34 = v32;
                memcpy_alt1(v32, v16, v15 - v16);
              }
              v35 = *(_QWORD*)(v17 + 312);
              v36 = *(_DWORD*)(v17 + 320);
              v37 = *(_QWORD*)(v17 + 328);
              v38 = v210[67];
              v213 += v30;
              v39 = *v212;
              v40 = v210[68];
              if (v38 >= v40) {
                v45 = (__int64*)v210[66];
                v208 = v35;
                v209 = v36;
                v46 = v38 - (_QWORD)v45;
                v47 = (__int64)(v38 - (_QWORD)v45) >> 3;
                v48 = 0x6DB6DB6DB6DB6DB7LL * v47 + 1;
                if (v48 > 0x492492492492492LL) {
                  GameRoutine_6f1320_alt1();
                }
                v4 = (__int64*)fw_memory_g_heap_manager_ptr;
                v49 =
                    0x6DB6DB6DB6DB6DB7LL * ((__int64)(v40 - (_QWORD)v45) >> 3);
                if (2 * v49 > v48) {
                  v48 = 2 * v49;
                }
                if (v49 >= 0x249249249249249LL) {
                  v48 = 0x492492492492492LL;
                }
                v206 = v48;
                v207 = v37;
                if (v48 != 0) {
                  if (v48 > 0x492492492492492LL) {
                    goto LABEL_320;
                  }
                  v50 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v48, 16, 0);
                }
                else {
                  v50 = 0;
                }
                v51 = v50 + v46;
                v52 = v33 - v34;
                *(_QWORD*)(v51 + 8) = 0;
                *(_QWORD*)(v51 + 16) = 0;
                *(_QWORD*)v51 = 0;
                if (v52 != 0) {
                  if ((v52 & 0x8000000000000000LL) != 0) {
                  LABEL_319:
                    GameRoutine_6f0df0_alt1();
                  }
                  v53 = v50;
                  v54 = fw_memory_HeapManager_Allocate_alt1(*v4, v52, 16, 0);
                  v55 = v54 + v52;
                  *(_QWORD*)v51 = v54;
                  *(_QWORD*)(v51 + 16) = v54 + v52;
                  memcpy_alt1(v54, v34, v52);
                  *(_QWORD*)(v51 + 8) = v55;
                  v50 = v53;
                  v46 = v38 - (_QWORD)v45;
                  v47 = (__int64)(v38 - (_QWORD)v45) >> 3;
                  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
                }
                *(_QWORD*)(v51 + 24) = v39;
                *(_QWORD*)(v51 + 32) = v208;
                *(_DWORD*)(v51 + 40) = v209;
                *(_DWORD*)(v51 + 44) = v213;
                *(_QWORD*)(v51 + 48) = v207;
                if (v45 == (__int64*)v38) {
                  v65 = v210;
                }
                else {
                  v56 = v50;
                  v57 = v45;
                  v58 = (_QWORD*)(v50 + v38 - 8 * v47 - (_QWORD)v45 + 16);
                  do {
                    *(v58 - 1) = 0;
                    *v58 = 0;
                    *(v58 - 2) = *v57;
                    *(v58 - 1) = v57[1];
                    *v58 = v57[2];
                    v57[1] = 0;
                    v57[2] = 0;
                    *v57 = 0;
                    v59 = v57[3];
                    v60 = v57[4];
                    v61 = v57[5];
                    v62 = v57[6];
                    v57 += 7;
                    v58[3] = v61;
                    v58[4] = v62;
                    v58[1] = v59;
                    v58[2] = v60;
                    v58 += 7;
                  } while (v57 != (__int64*)v38);
                  do {
                    v63 = *v45;
                    if (*v45 != 0) {
                      v45[1] = v63;
                      if (*(_QWORD*)(*v4 + 200) != 0) {
                        v64 = 128;
                      }
                      else {
                        v64 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(*v4 + v64, v63);
                    }
                    v45 += 7;
                  } while (v45 != (__int64*)v38);
                  v65 = v210;
                  v50 = v56;
                  v45 = (__int64*)v210[66];
                }
                v16 = v211;
                v66 = v51 - v46;
                v1 = v51 + 56;
                v29 = v65;
                v65[66] = v66;
                v65[67] = v51 + 56;
                v65[68] = v50 + 56 * v206;
                if (v45 != nullptr) {
                  if (*(_QWORD*)(*v4 + 200) != 0) {
                    v67 = 128;
                  }
                  else {
                    v67 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*v4 + v67, (__int64)v45);
                }
              }
              else {
                v41 = v33 - v34;
                *(_QWORD*)(v38 + 8) = 0;
                *(_QWORD*)(v38 + 16) = 0;
                *(_QWORD*)v38 = 0;
                if (v33 != v34) {
                  if ((v41 & 0x8000000000000000LL) != 0) {
                    goto LABEL_319;
                  }
                  v42 = v39;
                  v43 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v41, 16, 0);
                  v44 = v43 + v41;
                  *(_QWORD*)v38 = v43;
                  *(_QWORD*)(v38 + 8) = v43;
                  *(_QWORD*)(v38 + 16) = v43 + v41;
                  memcpy_alt1(v43, v34, v41);
                  *(_QWORD*)(v38 + 8) = v44;
                  v39 = v42;
                }
                *(_QWORD*)(v38 + 24) = v39;
                *(_QWORD*)(v38 + 32) = v35;
                *(_QWORD*)(v38 + 48) = v37;
                v1 = v38 + 56;
                *(_DWORD*)(v38 + 40) = v36;
                *(_DWORD*)(v38 + 44) = v213;
                v16 = v211;
                v4 = (__int64*)fw_memory_g_heap_manager_ptr;
              }
              v29[67] = v1;
              v17 = *v212;
              if (v34 != 0) {
                if (*(_QWORD*)(*v4 + 200) != 0) {
                  v68 = 128;
                }
                else {
                  v68 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(*v4 + v68, v34);
              }
              v212 = (__int64*)(v17 + 296);
            } while (*(_QWORD*)(v17 + 296) != 0);
            v6 = v204;
            if (v16 != 0) {
              if (*(_QWORD*)(*v4 + 200) != 0) {
                v69 = 128;
              }
              else {
                v69 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v4 + v69, v16);
            }
          }
        }
      }
      v70 = v202;
      if (*(_WORD*)(v6 + 16) == 0) {
        goto LABEL_126;
      }
      if ((((0x10000000000LL << *(_BYTE*)(v6 + 72)) |
            (1LL << *(_BYTE*)(v6 + 73))) &
           0xFFBFFFFFFFA39FFFLL) != 0) {
        break;
      }
      v73 = GameData_21ca378;
      if (GameData_21ca378 >= (unsigned __int64)GameData_21ca380) {
        v81 = GameData_21ca370;
        v82 = GameData_21ca378 - GameData_21ca370;
        v1 = (GameData_21ca378 - GameData_21ca370) >> 3;
        v83 = v1 + 1;
        if ((v1 + 1) >> 61 != 0) {
          goto LABEL_322;
        }
        v84 = GameData_21ca380 - GameData_21ca370;
        if ((GameData_21ca380 - GameData_21ca370) >> 2 > v83) {
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
            goto LABEL_320;
          }
          v86 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v85, 16, 0);
        }
        else {
          v86 = 0;
        }
        v111 = v86 + 8 * v85;
        v112 = v86 + v82 - 8 * v1;
        *(_QWORD*)(v86 + v82) = v204;
        v74 = v86 + v82 + 8;
        memcpy_alt1(v112, v81, v82);
        GameData_21ca370 = v112;
        GameData_21ca378 = v74;
        GameData_21ca380 = v111;
        if (v81 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v113 = 128;
          }
          else {
            v113 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v113, v81);
        }
        v70 = v202;
        v6 = v204;
      }
      else {
        *(_QWORD*)GameData_21ca378 = v6;
        v74 = v73 + 8;
      }
      GameData_21ca378 = v74;
      if (*(_BYTE*)(v6 + 73) == 0) {
        goto LABEL_146;
      }
    LABEL_127:
      v90 = GameData_21ca3a8;
      if (GameData_21ca3a8 >= (unsigned __int64)GameData_21ca3b0) {
        v92 = GameData_21ca3a0;
        v93 = GameData_21ca3a8 - GameData_21ca3a0;
        v1 = (GameData_21ca3a8 - GameData_21ca3a0) >> 3;
        v94 = v1 + 1;
        if ((v1 + 1) >> 61 != 0) {
          goto LABEL_322;
        }
        v95 = GameData_21ca3b0 - GameData_21ca3a0;
        if ((GameData_21ca3b0 - GameData_21ca3a0) >> 2 > v94) {
          v94 = v95 >> 2;
        }
        if ((unsigned __int64)v95 >= 0x7FFFFFFFFFFFFFF8LL) {
          v96 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v96 = v94;
        }
        if (v96 != 0) {
          if (v96 >> 61 != 0) {
            goto LABEL_320;
          }
          v97 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v96, 16, 0);
        }
        else {
          v97 = 0;
        }
        v98 = v97 + 8 * v96;
        v99 = v97 + v93 - 8 * v1;
        *(_QWORD*)(v97 + v93) = v204;
        v91 = v97 + v93 + 8;
        memcpy_alt1(v99, v92, v93);
        GameData_21ca3a0 = v99;
        GameData_21ca3a8 = v91;
        GameData_21ca3b0 = v98;
        if (v92 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v100 = 128;
          }
          else {
            v100 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v100, v92);
        }
        v70 = v202;
        v6 = v204;
      }
      else {
        *(_QWORD*)GameData_21ca3a8 = v6;
        v91 = v90 + 8;
      }
      GameData_21ca3a8 = v91;
    LABEL_146:
      v101 = GameData_21ca390;
      if (GameData_21ca390 < (unsigned __int64)GameData_21ca398) {
        *(_QWORD*)GameData_21ca390 = v6;
        v2 = (__int64*)(v101 + 8);
      }
      else {
        v102 = GameData_21ca388;
        v103 = GameData_21ca390 - GameData_21ca388;
        v104 = (GameData_21ca390 - GameData_21ca388) >> 3;
        v105 = v104 + 1;
        if ((unsigned __int64)(v104 + 1) >> 61 != 0) {
        LABEL_322:
          GameRoutine_6e5c60_alt1();
        }
        v106 = GameData_21ca398 - GameData_21ca388;
        if ((GameData_21ca398 - GameData_21ca388) >> 2 > v105) {
          v105 = v106 >> 2;
        }
        if ((unsigned __int64)v106 >= 0x7FFFFFFFFFFFFFF8LL) {
          v107 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v107 = v105;
        }
        if (v107 != 0) {
          if (v107 >> 61 != 0) {
          LABEL_320:
            GameRoutine_60a210_alt1();
          }
          v108 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v107, 16, 0);
        }
        else {
          v108 = 0;
        }
        v1 = v108 + 8 * v107;
        v109 = v108 + v103 - 8 * v104;
        *(_QWORD*)(v108 + v103) = v204;
        v2 = (__int64*)(v108 + v103 + 8);
        memcpy_alt1(v109, v102, v103);
        GameData_21ca388 = v109;
        GameData_21ca390 = (__int64)v2;
        GameData_21ca398 = v1;
        if (v102 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v110 = 128;
          }
          else {
            v110 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v110, v102);
        }
        v70 = v202;
      }
      GameData_21ca390 = (__int64)v2;
      v5 = v201 + 1;
      if (v201 + 1 == v70) {
        v3 = *(__int64**)(*GameData_212c878[0] + 72);
        v5 = *(__int64**)(*GameData_212c878[0] + 64);
        goto LABEL_173;
      }
    }
    v71 = GameData_21ca360;
    if (GameData_21ca360 >= (unsigned __int64)GameData_21ca368) {
      v75 = GameData_21ca358;
      v76 = GameData_21ca360 - GameData_21ca358;
      v1 = (GameData_21ca360 - GameData_21ca358) >> 3;
      v77 = v1 + 1;
      if ((v1 + 1) >> 61 != 0) {
        goto LABEL_322;
      }
      v78 = GameData_21ca368 - GameData_21ca358;
      if ((GameData_21ca368 - GameData_21ca358) >> 2 > v77) {
        v77 = v78 >> 2;
      }
      if ((unsigned __int64)v78 >= 0x7FFFFFFFFFFFFFF8LL) {
        v79 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v79 = v77;
      }
      if (v79 != 0) {
        if (v79 >> 61 != 0) {
          goto LABEL_320;
        }
        v80 = fw_memory_HeapManager_Allocate_alt1(*v4, 8 * v79, 16, 0);
      }
      else {
        v80 = 0;
      }
      v87 = v80 + 8 * v79;
      v88 = v80 + v76 - 8 * v1;
      *(_QWORD*)(v80 + v76) = v204;
      v72 = v80 + v76 + 8;
      memcpy_alt1(v88, v75, v76);
      GameData_21ca358 = v88;
      GameData_21ca360 = v72;
      GameData_21ca368 = v87;
      if (v75 != 0) {
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v89 = 128;
        }
        else {
          v89 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v89, v75);
      }
      v70 = v202;
      v6 = v204;
    }
    else {
      *(_QWORD*)GameData_21ca360 = v6;
      v72 = v71 + 8;
    }
    GameData_21ca360 = v72;
  LABEL_126:
    if (*(_BYTE*)(v6 + 73) == 0) {
      goto LABEL_146;
    }
    goto LABEL_127;
  }
LABEL_173:
  if (v5 != v3) {
    v1 = (unsigned __int64)&GameData_21ca350;
    do {
      v115 = *v5;
      v116 = v5;
      if (*v5 != 0) {
        v117 = *(_QWORD*)(v115 + 24);
        v118 =
            0x6DB6DB6DB6DB6DB7LL *
            ((__int64)(*(_QWORD*)(v117 + 536) - *(_QWORD*)(v117 + 528)) >> 3);
        if ((_DWORD)v118 == 0) {
          goto LABEL_196;
        }
        v119 = *(_QWORD*)(v117 + 600);
        if ((int)v118 < 1 || v119 != v115) {
          goto LABEL_196;
        }
        v121 = v118 & 0x7FFFFFFF;
        v122 = 0;
        v123 = 0;
        do {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca350,
                                    memory_order_acquire) &
               1) == 0) {
            v203 = v3;
            v131 = __cxa_guard_acquire_alt1((__int64)&GameData_21ca350);
            v3 = v203;
            if (v131 != 0) {
              GameData_21ca340 = 0;
              GameData_21ca348 = 0;
              *(_OWORD*)&GameData_21ca330 =
                  (__typeof__(*(_OWORD*)&GameData_21ca330)){0};
              GameData_21ca320 = 0;
              GameData_21ca328 = 0;
              GameData_21ca318 = 0;
              GameRoutine_2b0_alt1();
              __cxa_guard_release_alt1((__int64)&GameData_21ca350);
              v3 = v203;
            }
          }
          v124 = *(_QWORD*)(v119 + 24);
          v125 = *(_QWORD*)(v124 + 536);
          v126 = *(_QWORD*)(v124 + 528);
          v127 = v125 - v126;
          v128 = (__int64*)(v126 + v122);
          if (v123 >= (int)(-1227133513 * (v127 >> 3))) {
            v128 = &GameData_21ca318;
          }
          v129 = v128[3];
          if (v129 != 0) {
            v130 = *(_QWORD*)(v129 + 24);
            if (v130 != 0) {
              *(_DWORD*)(v130 + 552) = v123 + 1;
            }
          }
          ++v123;
          v122 += 56;
        } while (v121 != v123);
        v117 = *(_QWORD*)(v115 + 24);
        if (v117 != 0) {
        LABEL_196:
          if (*(_WORD*)(v115 + 16) != 0) {
            v132 = *(_QWORD*)(v117 + 600);
            if (v132 != 0) {
              v114 = (*(unsigned __int8*)(v132 + 400) << 24) |
                     (*(unsigned __int8*)(v132 + 401) << 16) |
                     *(_DWORD*)(v117 + 552) |
                     (*(unsigned __int16*)(v132 + 16) << 8);
            }
            else {
              v114 = (*(unsigned __int16*)(v115 + 16) << 8) |
                     (*(unsigned __int8*)(v115 + 400) << 24) |
                     (*(unsigned __int8*)(v115 + 401) << 16);
            }
          }
          else {
            v114 = 0x40000000;
          }
          *(_DWORD*)(v117 + 608) = v114;
        }
      }
      v5 = v116 + 1;
    } while (v116 + 1 != v3);
    v2 = (__int64*)GameData_21ca390;
    v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  }
  if ((__int64*)GameData_21ca388 != v2) {
    GameHr_6f1340(GameData_21ca388, v2,
                  (2 * __clz(((__int64)v2 - GameData_21ca388) >> 3)) ^ 0x7E, 1);
  }
  v133 = a1;
  if (a1[19] != 0) {
    v134 = (_QWORD*)a1[18];
    if (v134 != nullptr) {
      v1 = 56;
      do {
        v135 = (_QWORD*)*v134;
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v136 = 128;
        }
        else {
          v136 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v136, (__int64)v134);
        v134 = v135;
      } while (v135 != nullptr);
    }
    v133 = a1;
    v137 = a1[17];
    a1[18] = 0;
    if (v137 != 0) {
      v138 = v137 & 7;
      if (v137 >= 8) {
        v140 = v137 & 0xFFFFFFFFFFFFFFF8LL;
        v139 = 0;
        do {
          *(_QWORD*)(a1[16] + 8 * v139) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 8) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 16) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 24) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 32) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 40) = 0;
          *(_QWORD*)(a1[16] + 8 * v139 + 48) = 0;
          v141 = a1[16] + 8 * v139;
          v139 += 8;
          *(_QWORD*)(v141 + 56) = 0;
        } while (v140 != v139);
      }
      else {
        v139 = 0;
      }
      if (v138 != 0) {
        v142 = 8 * v139;
        do {
          --v138;
          *(_QWORD*)(a1[16] + v142) = 0;
          v142 += 8;
        } while (v138 != 0);
      }
    }
    a1[19] = 0;
  }
  v143 = (unsigned int**)v133[8];
  v144 = (unsigned int**)v133[9];
  while (v143 != v144) {
    v1 = (unsigned __int64)*v143;
    v145 = **v143;
    if (v145 != 0) {
      GameRoutine_6f57e0_alt1((__int64)(a1 + 1), v145, (__int64)*v143);
    }
    v146 = Resources_66bfc0_alt1((unsigned __int64*)v1);
    if (v146 != 0) {
      GameRoutine_6f57e0_alt1((__int64)(a1 + 1), v146, v1);
    }
    ++v143;
  }
  v147 = GameData_21ca3c0;
  *(_QWORD*)(GameData_21ca3c0 + 8) = *(_QWORD*)GameData_21ca3c0;
  if (*(_QWORD*)(v147 + 48) != 0) {
    v148 = *(_QWORD**)(v147 + 40);
    if (v148 != nullptr) {
      v1 = 56;
      do {
        v149 = (_QWORD*)*v148;
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v150 = 128;
        }
        else {
          v150 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v150, (__int64)v148);
        v148 = v149;
      } while (v149 != nullptr);
    }
    v151 = *(_QWORD*)(v147 + 32);
    *(_QWORD*)(v147 + 40) = 0;
    if (v151 != 0) {
      v152 = v151 & 7;
      if (v151 >= 8) {
        v154 = v151 & 0xFFFFFFFFFFFFFFF8LL;
        v153 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v153) = 0;
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v153 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v153 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v153 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v153 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v153 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v153 + 48) = 0;
          v155 = *(_QWORD*)(v147 + 24) + 8 * v153;
          v153 += 8;
          *(_QWORD*)(v155 + 56) = 0;
        } while (v154 != v153);
      }
      else {
        v153 = 0;
      }
      if (v152 != 0) {
        v156 = 8 * v153;
        do {
          --v152;
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + v156) = 0;
          v156 += 8;
        } while (v152 != 0);
      }
    }
    *(_QWORD*)(v147 + 48) = 0;
  }
  v157 = (unsigned int**)GameData_21ca370;
  v158 = GameData_21ca378;
  if (GameData_21ca370 != GameData_21ca378) {
    v159 = *(_QWORD**)(v147 + 8);
    v160 = (__int64*)(v147 + 40);
    do {
      v161 = *v157;
      v162 = *(_QWORD*)(v147 + 32);
      v163 = **v157;
      if (v162 != 0) {
        v164 = v162 - 1;
        if ((v162 & (v162 - 1)) != 0) {
          v1 = **v157;
          if (v162 <= v163) {
            v1 = (unsigned int)v163 % (unsigned int)v162;
          }
        }
        else {
          v1 = ((_DWORD)v162 - 1) & (unsigned int)v163;
        }
        v165 = *(__int64***)(*(_QWORD*)(v147 + 24) + 8 * v1);
        if (v165 != nullptr) {
          v166 = *v165;
          if (v166 != nullptr) {
            if ((v162 & v164) == 0) {
              while (1) {
                v168 = v166[1];
                if (v168 == v163) {
                  if (*((_DWORD*)v166 + 4) == (_DWORD)v163) {
                    goto LABEL_303;
                  }
                }
                else if ((v168 & v164) != v1) {
                  goto LABEL_266;
                }
                v166 = (__int64*)*v166;
                if (v166 == nullptr) {
                  goto LABEL_266;
                }
              }
            }
            do {
              v167 = v166[1];
              if (v167 == v163) {
                if (*((_DWORD*)v166 + 4) == (_DWORD)v163) {
                  goto LABEL_303;
                }
              }
              else {
                if (v167 >= v162) {
                  v167 %= v162;
                }
                if (v167 != v1) {
                  break;
                }
              }
              v166 = (__int64*)*v166;
            } while (v166 != nullptr);
          }
        }
      }
    LABEL_266:
      v169 = ((unsigned __int64)v159 - *(_QWORD*)v147) >> 3;
      v170 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      *(_QWORD*)v170 = 0;
      *(_QWORD*)(v170 + 8) = v163;
      *(_DWORD*)(v170 + 16) = v163;
      v171 = v170;
      *(_WORD*)(v170 + 20) = v169;
      v172 = *(float*)(v147 + 56);
      v173 = (float)(unsigned __int64)(*(_QWORD*)(v147 + 48) + 1LL);
      if (v162 == 0 || (float)(v172 * (float)v162) < v173) {
        v174 = v173 / v172;
        v175 = (v162 & (v162 - 1)) != 0;
        if (v162 < 3) {
          v175 = true;
        }
        v176 = v175 | (2 * v162);
        v177 = vcvtps_u64_f32(v174);
        if (v176 <= v177) {
          v178 = v177;
        }
        else {
          v178 = v176;
        }
        if (v178 == 1) {
          v178 = 2;
        }
        else if ((v178 & (v178 - 1)) != 0) {
          primeEm = std___1___next_prime_alt1(v178);
          v162 = *(_QWORD*)(v147 + 32);
          v178 = primeEm;
        }
        if (v178 > v162) {
          goto LABEL_278;
        }
        if (v178 < v162) {
          v180 = vcvtps_u64_f32((float)*(unsigned __int64*)(v147 + 48) /
                                *(float*)(v147 + 56));
          if (v162 < 3 || (v162 & (v162 - 1)) != 0) {
            v180 = std___1___next_prime_alt1(v180);
          }
          else {
            v181 = 1LL << -(char)__clz(v180 - 1);
            if (v180 >= 2) {
              v180 = v181;
            }
          }
          if (v178 <= v180) {
            v178 = v180;
          }
          if (v178 < v162) {
          LABEL_278:
            GameRoutine_6f2440_alt1((__int64*)(v147 + 24), v178);
          }
        }
        v162 = *(_QWORD*)(v147 + 32);
        if ((v162 & (v162 - 1)) != 0) {
          if (v162 <= v163) {
            v1 = v163 % v162;
          }
          else {
            v1 = v163;
          }
        }
        else {
          v1 = ((_DWORD)v162 - 1) & (unsigned int)v163;
        }
      }
      v182 = *(_QWORD*)(v147 + 24);
      v183 = *(__int64**)(v182 + 8 * v1);
      if (v183 != nullptr) {
        *(_QWORD*)v171 = *v183;
        *v183 = v171;
      }
      else {
        *(_QWORD*)v171 = *v160;
        *v160 = v171;
        *(_QWORD*)(v182 + 8 * v1) = v160;
        if (*(_QWORD*)v171 != 0) {
          v184 = *(_QWORD*)(*(_QWORD*)v171 + 8LL);
          if ((v162 & (v162 - 1)) != 0) {
            if (v184 >= v162) {
              v184 %= v162;
            }
          }
          else {
            v184 &= v162 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(v147 + 24) + 8 * v184) = v171;
        }
      }
      v159 = *(_QWORD**)(v147 + 8);
      ++*(_QWORD*)(v147 + 48);
    LABEL_303:
      v185 = *((_QWORD**)v161 + 3);
      v186 = *(_QWORD*)(v147 + 16);
      if ((unsigned __int64)v159 < v186) {
        *v159 = 0;
        *v159++ = *v185;
      }
      else {
        v187 = (__int64)v159 - *(_QWORD*)v147;
        v188 = (v187 >> 3) + 1;
        if (v188 >> 61 != 0) {
          GameRoutine_6f26d0_alt1();
        }
        v189 = v186 - *(_QWORD*)v147;
        v190 = v189 >> 2;
        if (v189 >> 2 <= v188) {
          v190 = (v187 >> 3) + 1;
        }
        if ((unsigned __int64)v189 >= 0x7FFFFFFFFFFFFFF8LL) {
          v1 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v1 = v190;
        }
        if (v1 >> 61 != 0) {
          goto LABEL_320;
        }
        v191 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v1, 16, 0);
        v192 = (_QWORD*)(v191 + v187);
        *v192 = *v185;
        v159 = (_QWORD*)(v191 + v187 + 8);
        v193 = *(_QWORD*)v147;
        v194 = *(__int64**)(v147 + 8);
        v195 = (_QWORD*)((char*)v192 + *(_QWORD*)v147 - (_QWORD)v194);
        if (*(__int64**)v147 != v194) {
          v196 = *(__int64**)v147;
          v197 = v195;
          do {
            v198 = *v196++;
            *v197++ = v198;
          } while (v196 != v194);
        }
        *(_QWORD*)v147 = v195;
        *(_QWORD*)(v147 + 8) = v159;
        *(_QWORD*)(v147 + 16) = v191 + 8 * v1;
        if (v193 != 0) {
          v199 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v199 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v199, v193);
        }
      }
      ++v157;
      *(_QWORD*)(v147 + 8) = v159;
    } while (v157 != (unsigned int**)v158);
  }
}

__int64 ItemFile_6eeca0(__int64 result, __int64 a2)
{
  _QWORD* i;
  __int64 v4;

  if (result != 0) {
    for (i = (_QWORD*)result; i != nullptr; i = (_QWORD*)i[44]) {
      v4 = i[3];
      if (v4 == 0 || *(_QWORD*)(v4 + 592) != 0) {
        break;
      }
      *(_QWORD*)(v4 + 592) = a2;
      result = i[37];
      if (result != 0) {
        result = ItemFile_6eeca0(result, a2);
      }
    }
  }
  return result;
}

__int64 ItemFile_Unknown5()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  GameData_21ca360 = GameData_21ca358;
  GameData_21ca378 = GameData_21ca370;
  GameData_21ca390 = GameData_21ca388;
  GameData_21ca3a8 = GameData_21ca3a0;
  v0 = (_QWORD*)GameData_21ca3c0;
  *(_QWORD*)(GameData_21ca3c0 + 8) = *(_QWORD*)GameData_21ca3c0;
  if (v0[6] != 0) {
    v1 = (_QWORD*)v0[5];
    if (v1 != nullptr) {
      v2 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, v1);
        v1 = v3;
      } while (v3 != nullptr);
    }
    v6 = v0[4];
    v0[5] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v0[3] + 8 * v8) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 48) = 0;
          v10 = v0[3] + 8 * v8;
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
          *(_QWORD*)(v0[3] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v0[6] = 0;
  }
  return result;
}

__int64 ItemFile_Unknown6()
{
  _QWORD* v0;
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;

  GameData_21ca360 = GameData_21ca358;
  GameData_21ca378 = GameData_21ca370;
  GameData_21ca390 = GameData_21ca388;
  GameData_21ca3a8 = GameData_21ca3a0;
  v0 = (_QWORD*)GameData_21ca3c0;
  *(_QWORD*)(GameData_21ca3c0 + 8) = *(_QWORD*)GameData_21ca3c0;
  if (v0[6] != 0) {
    v1 = (_QWORD*)v0[5];
    if (v1 != nullptr) {
      v2 = fw_memory_g_heap_manager_ptr;
      do {
        v3 = (_QWORD*)*v1;
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4, v1);
        v1 = v3;
      } while (v3 != nullptr);
    }
    v6 = v0[4];
    v0[5] = 0;
    if (v6 != 0) {
      v7 = v6 & 7;
      if (v6 >= 8) {
        v9 = v6 & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        do {
          *(_QWORD*)(v0[3] + 8 * v8) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 8) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 16) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 24) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 32) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 40) = 0;
          *(_QWORD*)(v0[3] + 8 * v8 + 48) = 0;
          v10 = v0[3] + 8 * v8;
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
          *(_QWORD*)(v0[3] + v11) = 0;
          v11 += 8;
        } while (v7 != 0);
      }
    }
    v0[6] = 0;
  }
  return result;
}

__int64 ItemFile_DeletingDestructor_6ef1b0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *a1 = GameData_1f92360;
  a1[1] = GameData_1f92390;
  v2 = a1 + 1;
  GameRoutine_6f2700(a1 + 1);
  GameRoutine_6f2ce0(v2);
  if ((_QWORD*)GameData_21c99b8 == a1) {
    GameData_21c99b8 = 0;
    GameData_21ca3c8 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 ItemFile_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 result;

  *(a1 - 1) = GameData_1f92360;
  v2 = a1 - 1;
  *a1 = GameData_1f92390;
  GameRoutine_6f2700(a1);
  result = GameRoutine_6f2ce0(a1);
  *v2 = GameData_1f92430;
  if ((_QWORD*)GameData_21c99b8 == v2) {
    GameData_21c99b8 = 0;
    GameData_21ca3c8 = 0;
  }
  return result;
}

__int64 ItemFile_DeletingDestructor_6ef2e0(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;

  *(a1 - 1) = GameData_1f92360;
  v2 = a1 - 1;
  *a1 = GameData_1f92390;
  GameRoutine_6f2700(a1);
  GameRoutine_6f2ce0(a1);
  if ((_QWORD*)GameData_21c99b8 == v2) {
    GameData_21c99b8 = 0;
    GameData_21ca3c8 = 0;
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
}

#pragma GCC visibility pop
