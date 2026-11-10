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
unsigned __int64 ItemFile_Unknown4(_QWORD* a1);
__int64 ItemFile_6eeca0(__int64 result, __int64 a2);
__int64 ItemFile_Unknown5();
__int64 ItemFile_Unknown6();
__int64 ItemFile_DeletingDestructor_6ef1b0(_QWORD* a1);
__int64 ItemFile_Destructor(_QWORD* a1);
__int64 ItemFile_DeletingDestructor_6ef2e0(_QWORD* a1);

unsigned __int64 ItemFile_Unknown4(_QWORD* a1)
{
  unsigned __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 result;
  __int64 i;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  int v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  _QWORD* v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  unsigned __int64 v56;
  _QWORD* v57;
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
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
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
  __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
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
  _QWORD* v116;
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
  unsigned __int64* v143;
  unsigned int** v144;
  __int64 v145;
  __int64 v146;
  _QWORD* v147;
  _QWORD* v148;
  __int64 v149;
  unsigned __int64 v150;
  unsigned __int64 v151;
  __int64 v152;
  unsigned __int64 v153;
  __int64 v154;
  __int64 v155;
  unsigned int** v156;
  __int64 v157;
  _QWORD* v158;
  unsigned __int64* v159;
  unsigned int* v160;
  unsigned __int64 v161;
  unsigned __int64 v162;
  unsigned __int64 v163;
  __int64** v164;
  __int64* v165;
  unsigned __int64 v166;
  __int64 v167;
  unsigned __int64 v168;
  unsigned __int64 v169;
  float v170;
  float v171;
  float v172;
  _BOOL8 v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  unsigned __int64 v176;
  __int64 v177;
  __int64 v178;
  unsigned __int64* v179;
  unsigned __int64 v180;
  _QWORD* v181;
  unsigned __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  _QWORD* v187;
  __int64* v188;
  __int64* v189;
  _QWORD* v190;
  __int64* v191;
  _QWORD* v192;
  __int64 v193;
  __int64 v194;
  _QWORD* v196;
  _QWORD* v197;
  _QWORD* v198;
  __int64 v199;
  unsigned __int64 v200;
  unsigned __int64 v201;
  __int64 v202;
  __int64 v203;
  int v204;
  _QWORD* v205;
  __int64 v206;
  __int64* v207;
  int v208;

  GameData_21ca360 = GameData_21ca358;
  GameData_21ca378 = GameData_21ca370;
  v2 = GameData_21ca388;
  GameData_21ca390 = GameData_21ca388;
  GameData_21ca3a8 = GameData_21ca3a0;
  v3 = *(_QWORD**)(*GameData_212c878[0] + 72);
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = *(_QWORD**)(*GameData_212c878[0] + 64);
  if (v5 != v3) {
    v197 = *(_QWORD**)(*GameData_212c878[0] + 72);
    while (1) {
      v6 = *v5;
      v196 = v5;
      result = ItemFile_6eeca0_alt1(*v5, *v5);
      v199 = v6;
      if (v6 != 0) {
        for (i = v6; i != 0; i = *(_QWORD*)(i + 296)) {
          v9 = *(_QWORD*)(i + 24);
          if (v9 == 0) {
            break;
          }
          if (*(_QWORD*)(v9 + 600) != 0) {
            break;
          }
          *(_QWORD*)(v9 + 600) = v6;
        }
        v10 = *(_QWORD**)(v6 + 24);
        if (v10 != nullptr) {
          v11 = v10[67];
          v12 = v10[66];
          if (v12 != v11) {
            v1 = v10[67];
            do {
              v14 = *(_QWORD*)(v1 - 56);
              v1 -= 56LL;
              v13 = v14;
              if (v14 != 0) {
                *(_QWORD*)(v11 - 48) = v13;
                if (*(_QWORD*)(*v4 + 200LL) != 0) {
                  v15 = 128;
                }
                else {
                  v15 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v4 + v15, v13);
              }
              v11 = v1;
            } while (v1 != v12);
          }
          v10[67] = v12;
          if (*(_QWORD*)(v6 + 296) != 0) {
            v208 = 0;
            v200 = 0;
            v16 = 0;
            v17 = 0;
            v18 = v6;
            v205 = v10;
            v207 = (__int64*)(v6 + 296);
            do {
              v19 = *(_QWORD*)(v18 + 312);
              if (v19 != 0) {
                v20 = *(_DWORD*)(v18 + 320);
                if (v17 == v16) {
                LABEL_27:
                  if (v16 >= v200) {
                    v22 = v16 - v17;
                    v23 = (__int64)(v16 - v17) >> 4;
                    v24 = v23 + 1;
                    if ((unsigned __int64)(v23 + 1) >> 60 != 0) {
                      goto LABEL_319;
                    }
                    if ((__int64)(v200 - v17) >> 3 > v24) {
                      v24 = (__int64)(v200 - v17) >> 3;
                    }
                    if (v200 - v17 >= 0x7FFFFFFFFFFFFFF0LL) {
                      v25 = 0xFFFFFFFFFFFFFFFLL;
                    }
                    else {
                      v25 = v24;
                    }
                    if (v25 != 0) {
                      if (v25 >> 60 != 0) {
                        goto LABEL_320;
                      }
                      v26 =
                          fw_memory_HeapManager_Allocate(*v4, 16 * v25, 16, 0);
                    }
                    else {
                      v26 = 0;
                    }
                    v27 = v26 + v22;
                    v28 = v26 + v22 - 16 * v23;
                    v200 = v26 + 16 * v25;
                    *(_QWORD*)v27 = v19;
                    *(_DWORD*)(v27 + 8) = v20;
                    *(_DWORD*)(v27 + 12) = 0;
                    v16 = v26 + v22 + 16;
                    result = memcpy(v28, v17, v22);
                    if (v17 != 0) {
                      if (*(_QWORD*)(*v4 + 200LL) != 0) {
                        v29 = 128;
                      }
                      else {
                        v29 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(*v4 + v29, v17);
                    }
                    v17 = v28;
                  }
                  else {
                    *(_QWORD*)v16 = v19;
                    *(_DWORD*)(v16 + 8) = v20;
                    *(_DWORD*)(v16 + 12) = 0;
                    v16 += 16LL;
                  }
                }
                else {
                  v21 = v17;
                  while (*(_QWORD*)v21 != v19) {
                    v21 += 16;
                    if (v21 == v16) {
                      goto LABEL_27;
                    }
                  }
                  *(_DWORD*)(v21 + 8) += v20;
                }
              }
              v30 = v205;
              v31 = *(_DWORD*)(v18 + 324);
              v32 = v16 - v17;
              v206 = v17;
              if (v16 == v17) {
                v34 = 0;
                v35 = 0;
              }
              else {
                if ((v32 & 0x8000000000000000LL) != 0) {
                  goto LABEL_319;
                }
                v33 = fw_memory_HeapManager_Allocate(*v4, v16 - v17, 16, 0);
                v34 = v33 + v32;
                v35 = v33;
                result = memcpy(v33, v17, v16 - v17);
              }
              v36 = *(_QWORD*)(v18 + 312);
              v37 = *(_DWORD*)(v18 + 320);
              v38 = *(_QWORD*)(v18 + 328);
              v39 = v205[67];
              v208 += v31;
              v40 = *v207;
              v41 = v205[68];
              if (v39 >= v41) {
                v46 = (_QWORD*)v205[66];
                v203 = v36;
                v204 = v37;
                v47 = v39 - (_QWORD)v46;
                v48 = (__int64)(v39 - (_QWORD)v46) >> 3;
                v49 = 0x6DB6DB6DB6DB6DB7LL * v48 + 1;
                if (v49 > 0x492492492492492LL) {
                  GameRoutine_6f1320(result);
                }
                v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                v50 =
                    0x6DB6DB6DB6DB6DB7LL * ((__int64)(v41 - (_QWORD)v46) >> 3);
                if (2 * v50 > v49) {
                  v49 = 2 * v50;
                }
                if (v50 >= 0x249249249249249LL) {
                  v49 = 0x492492492492492LL;
                }
                v201 = v49;
                v202 = v38;
                if (v49 != 0) {
                  if (v49 > 0x492492492492492LL) {
                    goto LABEL_320;
                  }
                  result = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56 * v49, 16, 0);
                }
                else {
                  result = 0;
                }
                v51 = result + v47;
                v52 = v34 - v35;
                *(_QWORD*)(v51 + 8) = 0;
                *(_QWORD*)(v51 + 16) = 0;
                *(_QWORD*)v51 = 0;
                if (v52 != 0) {
                  if ((v52 & 0x8000000000000000LL) != 0) {
                  LABEL_319:
                    GameRoutine_6f0df0(result);
                  }
                  v53 = result;
                  v54 = fw_memory_HeapManager_Allocate(*v4, v52, 16, 0);
                  v55 = v54 + v52;
                  *(_QWORD*)v51 = v54;
                  *(_QWORD*)(v51 + 16) = v54 + v52;
                  memcpy(v54, v35, v52);
                  *(_QWORD*)(v51 + 8) = v55;
                  result = v53;
                  v47 = v39 - (_QWORD)v46;
                  v48 = (__int64)(v39 - (_QWORD)v46) >> 3;
                  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
                }
                *(_QWORD*)(v51 + 24) = v40;
                *(_QWORD*)(v51 + 32) = v203;
                *(_DWORD*)(v51 + 40) = v204;
                *(_DWORD*)(v51 + 44) = v208;
                *(_QWORD*)(v51 + 48) = v202;
                if (v46 == (_QWORD*)v39) {
                  v65 = v205;
                }
                else {
                  v56 = result;
                  v57 = v46;
                  v58 = (_QWORD*)(result + v39 - 8 * v48 - (_QWORD)v46 + 16);
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
                  } while (v57 != (_QWORD*)v39);
                  do {
                    v63 = *v46;
                    if (*v46 != 0) {
                      v46[1] = v63;
                      if (*(_QWORD*)(*v4 + 200LL) != 0) {
                        v64 = 128;
                      }
                      else {
                        v64 = 56;
                      }
                      nn_mem_StandardAllocator_Free(*v4 + v64, v63);
                    }
                    v46 += 7;
                  } while (v46 != (_QWORD*)v39);
                  v65 = v205;
                  result = v56;
                  v46 = (_QWORD*)v205[66];
                }
                v17 = v206;
                v66 = v51 - v47;
                v1 = v51 + 56;
                v30 = v65;
                v65[66] = v66;
                v65[67] = v51 + 56;
                v65[68] = result + 56 * v201;
                if (v46 != nullptr) {
                  if (*(_QWORD*)(*v4 + 200LL) != 0) {
                    v67 = 128;
                  }
                  else {
                    v67 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(*v4 + v67, v46);
                }
              }
              else {
                v42 = v34 - v35;
                *(_QWORD*)(v39 + 8) = 0;
                *(_QWORD*)(v39 + 16) = 0;
                *(_QWORD*)v39 = 0;
                if (v34 != v35) {
                  if ((v42 & 0x8000000000000000LL) != 0) {
                    goto LABEL_319;
                  }
                  v43 = v40;
                  v44 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v42, 16, 0);
                  v45 = v44 + v42;
                  *(_QWORD*)v39 = v44;
                  *(_QWORD*)(v39 + 8) = v44;
                  *(_QWORD*)(v39 + 16) = v44 + v42;
                  result = memcpy(v44, v35, v42);
                  *(_QWORD*)(v39 + 8) = v45;
                  v40 = v43;
                }
                *(_QWORD*)(v39 + 24) = v40;
                *(_QWORD*)(v39 + 32) = v36;
                *(_QWORD*)(v39 + 48) = v38;
                v1 = v39 + 56;
                *(_DWORD*)(v39 + 40) = v37;
                *(_DWORD*)(v39 + 44) = v208;
                v17 = v206;
                v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
              }
              v30[67] = v1;
              v18 = *v207;
              if (v35 != 0) {
                if (*(_QWORD*)(*v4 + 200LL) != 0) {
                  v68 = 128;
                }
                else {
                  v68 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v4 + v68, v35);
              }
              v207 = (__int64*)(v18 + 296);
            } while (*(_QWORD*)(v18 + 296) != 0);
            v6 = v199;
            if (v17 != 0) {
              if (*(_QWORD*)(*v4 + 200LL) != 0) {
                v69 = 128;
              }
              else {
                v69 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v4 + v69, v17);
            }
          }
        }
      }
      v70 = v197;
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
          v86 = fw_memory_HeapManager_Allocate(*v4, 8 * v85, 16, 0);
        }
        else {
          v86 = 0;
        }
        v111 = v86 + 8 * v85;
        v112 = v86 + v82 - 8 * v1;
        *(_QWORD*)(v86 + v82) = v199;
        v74 = v86 + v82 + 8;
        result = memcpy(v112, v81, v82);
        GameData_21ca370 = v112;
        GameData_21ca378 = v74;
        GameData_21ca380 = v111;
        if (v81 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v113 = 128;
          }
          else {
            v113 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v4 + v113, v81);
        }
        v70 = v197;
        v6 = v199;
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
          v97 = fw_memory_HeapManager_Allocate(*v4, 8 * v96, 16, 0);
        }
        else {
          v97 = 0;
        }
        v98 = v97 + 8 * v96;
        v99 = v97 + v93 - 8 * v1;
        *(_QWORD*)(v97 + v93) = v199;
        v91 = v97 + v93 + 8;
        result = memcpy(v99, v92, v93);
        GameData_21ca3a0 = v99;
        GameData_21ca3a8 = v91;
        GameData_21ca3b0 = v98;
        if (v92 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v100 = 128;
          }
          else {
            v100 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v4 + v100, v92);
        }
        v70 = v197;
        v6 = v199;
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
        v2 = v101 + 8;
      }
      else {
        v102 = GameData_21ca388;
        v103 = GameData_21ca390 - GameData_21ca388;
        v104 = (GameData_21ca390 - GameData_21ca388) >> 3;
        v105 = v104 + 1;
        if ((unsigned __int64)(v104 + 1) >> 61 != 0) {
        LABEL_322:
          GameRoutine_6e5c60(result);
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
            GameRoutine_60a210(result);
          }
          v108 = fw_memory_HeapManager_Allocate(*v4, 8 * v107, 16, 0);
        }
        else {
          v108 = 0;
        }
        v1 = v108 + 8 * v107;
        v109 = v108 + v103 - 8 * v104;
        *(_QWORD*)(v108 + v103) = v199;
        v2 = v108 + v103 + 8;
        memcpy(v109, v102, v103);
        GameData_21ca388 = v109;
        GameData_21ca390 = v2;
        GameData_21ca398 = v1;
        if (v102 != 0) {
          if (*(_QWORD*)(*v4 + 200LL) != 0) {
            v110 = 128;
          }
          else {
            v110 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v110, v102);
        }
        v70 = v197;
      }
      GameData_21ca390 = v2;
      v5 = v196 + 1;
      if (v196 + 1 == v70) {
        v3 = *(_QWORD**)(*GameData_212c878[0] + 72);
        v5 = *(_QWORD**)(*GameData_212c878[0] + 64);
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
        v80 = fw_memory_HeapManager_Allocate(*v4, 8 * v79, 16, 0);
      }
      else {
        v80 = 0;
      }
      v87 = v80 + 8 * v79;
      v88 = v80 + v76 - 8 * v1;
      *(_QWORD*)(v80 + v76) = v199;
      v72 = v80 + v76 + 8;
      result = memcpy(v88, v75, v76);
      GameData_21ca358 = v88;
      GameData_21ca360 = v72;
      GameData_21ca368 = v87;
      if (v75 != 0) {
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v89 = 128;
        }
        else {
          v89 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v4 + v89, v75);
      }
      v70 = v197;
      v6 = v199;
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
            v198 = v3;
            v131 = __cxa_guard_acquire(&GameData_21ca350);
            v3 = v198;
            if (v131 != 0) {
              GameData_21ca340 = 0;
              GameData_21ca348 = 0;
              *(_OWORD*)&GameData_21ca330 = 0u;
              GameData_21ca320 = 0;
              GameData_21ca328 = 0;
              GameData_21ca318 = 0;
              GameRoutine_2b0(GameRoutine_6ed500, &GameData_21ca318,
                              &GameData_1f50948);
              __cxa_guard_release(&GameData_21ca350);
              v3 = v198;
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
    v2 = GameData_21ca390;
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  }
  result = GameData_21ca388;
  if (GameData_21ca388 != v2) {
    result = GameRoutine_6f1340();
  }
  v133 = a1;
  if (a1[19] != 0) {
    v134 = (_QWORD*)a1[18];
    if (v134 != nullptr) {
      v1 = 56;
      do {
        v135 = (_QWORD*)*v134;
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v136 = 128;
        }
        else {
          v136 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v4 + v136, v134);
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
  v143 = (unsigned __int64*)v133[8];
  v144 = (unsigned int**)v133[9];
  while (v143 != (unsigned __int64*)v144) {
    v1 = *v143;
    v145 = *(unsigned int*)*v143;
    if ((_DWORD)v145 != 0) {
      GameRoutine_6f57e0(a1 + 1, v145, *v143);
    }
    result = Resources_66bfc0(v1);
    if ((_DWORD)result != 0) {
      result = GameRoutine_6f57e0(a1 + 1, (unsigned int)result, v1);
    }
    ++v143;
  }
  v146 = GameData_21ca3c0;
  *(_QWORD*)(GameData_21ca3c0 + 8) = *(_QWORD*)GameData_21ca3c0;
  if (*(_QWORD*)(v146 + 48) != 0) {
    v147 = *(_QWORD**)(v146 + 40);
    if (v147 != nullptr) {
      v1 = 56;
      do {
        v148 = (_QWORD*)*v147;
        if (*(_QWORD*)(*v4 + 200LL) != 0) {
          v149 = 128;
        }
        else {
          v149 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v4 + v149, v147);
        v147 = v148;
      } while (v148 != nullptr);
    }
    v150 = *(_QWORD*)(v146 + 32);
    *(_QWORD*)(v146 + 40) = 0;
    if (v150 != 0) {
      v151 = v150 & 7;
      if (v150 >= 8) {
        v153 = v150 & 0xFFFFFFFFFFFFFFF8LL;
        v152 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v152 + 48) = 0;
          v154 = *(_QWORD*)(v146 + 24) + 8 * v152;
          v152 += 8;
          *(_QWORD*)(v154 + 56) = 0;
        } while (v153 != v152);
      }
      else {
        v152 = 0;
      }
      if (v151 != 0) {
        v155 = 8 * v152;
        do {
          --v151;
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + v155) = 0;
          v155 += 8;
        } while (v151 != 0);
      }
    }
    *(_QWORD*)(v146 + 48) = 0;
  }
  v156 = (unsigned int**)GameData_21ca370;
  v157 = GameData_21ca378;
  if (GameData_21ca370 != GameData_21ca378) {
    v158 = *(_QWORD**)(v146 + 8);
    v159 = (unsigned __int64*)(v146 + 40);
    do {
      v160 = *v156;
      v161 = *(_QWORD*)(v146 + 32);
      v162 = **v156;
      if (v161 != 0) {
        v163 = v161 - 1;
        if ((v161 & (v161 - 1)) != 0) {
          v1 = **v156;
          if (v161 <= v162) {
            v1 = (unsigned int)v162 % (unsigned int)v161;
          }
        }
        else {
          v1 = ((_DWORD)v161 - 1) & (unsigned int)v162;
        }
        v164 = *(__int64***)(*(_QWORD*)(v146 + 24) + 8 * v1);
        if (v164 != nullptr) {
          v165 = *v164;
          if (v165 != nullptr) {
            if ((v161 & v163) == 0) {
              while (1) {
                v167 = v165[1];
                if (v167 == v162) {
                  if (*((_DWORD*)v165 + 4) == (_DWORD)v162) {
                    goto LABEL_303;
                  }
                }
                else if ((v167 & v163) != v1) {
                  goto LABEL_266;
                }
                v165 = (__int64*)*v165;
                if (v165 == nullptr) {
                  goto LABEL_266;
                }
              }
            }
            do {
              v166 = v165[1];
              if (v166 == v162) {
                if (*((_DWORD*)v165 + 4) == (_DWORD)v162) {
                  goto LABEL_303;
                }
              }
              else {
                if (v166 >= v161) {
                  v166 %= v161;
                }
                if (v166 != v1) {
                  break;
                }
              }
              v165 = (__int64*)*v165;
            } while (v165 != nullptr);
          }
        }
      }
    LABEL_266:
      v168 = ((unsigned __int64)v158 - *(_QWORD*)v146) >> 3;
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
      *(_QWORD*)result = 0;
      *(_QWORD*)(result + 8) = v162;
      *(_DWORD*)(result + 16) = v162;
      v169 = result;
      *(_WORD*)(result + 20) = v168;
      v170 = *(float*)(v146 + 56);
      v171 = (float)(unsigned __int64)(*(_QWORD*)(v146 + 48) + 1LL);
      if (v161 == 0 || (float)(v170 * (float)v161) < v171) {
        v172 = v171 / v170;
        v173 = (v161 & (v161 - 1)) != 0;
        if (v161 < 3) {
          v173 = true;
        }
        v174 = v173 | (2 * v161);
        v175 = vcvtps_u64_f32(v172);
        if (v174 <= v175) {
          v176 = v175;
        }
        else {
          v176 = v174;
        }
        if (v176 == 1) {
          v176 = 2;
        }
        else if ((v176 & (v176 - 1)) != 0) {
          result = std___1___next_prime(v176);
          v161 = *(_QWORD*)(v146 + 32);
          v176 = result;
        }
        if (v176 > v161) {
          goto LABEL_278;
        }
        if (v176 < v161) {
          result = vcvtps_u64_f32((float)*(unsigned __int64*)(v146 + 48) /
                                  *(float*)(v146 + 56));
          if (v161 < 3 || (v161 & (v161 - 1)) != 0) {
            result = std___1___next_prime(result);
          }
          else {
            v177 = 1LL << -(char)__clz(result - 1);
            if (result >= 2) {
              result = v177;
            }
          }
          if (v176 <= result) {
            v176 = result;
          }
          if (v176 < v161) {
          LABEL_278:
            result = GameRoutine_6f2440(v146 + 24, v176);
          }
        }
        v161 = *(_QWORD*)(v146 + 32);
        if ((v161 & (v161 - 1)) != 0) {
          if (v161 <= v162) {
            v1 = v162 % v161;
          }
          else {
            v1 = v162;
          }
        }
        else {
          v1 = ((_DWORD)v161 - 1) & (unsigned int)v162;
        }
      }
      v178 = *(_QWORD*)(v146 + 24);
      v179 = *(unsigned __int64**)(v178 + 8 * v1);
      if (v179 != nullptr) {
        *(_QWORD*)v169 = *v179;
        *v179 = v169;
      }
      else {
        *(_QWORD*)v169 = *v159;
        *v159 = v169;
        *(_QWORD*)(v178 + 8 * v1) = v159;
        if (*(_QWORD*)v169 != 0) {
          v180 = *(_QWORD*)(*(_QWORD*)v169 + 8LL);
          if ((v161 & (v161 - 1)) != 0) {
            if (v180 >= v161) {
              v180 %= v161;
            }
          }
          else {
            v180 &= v161 - 1;
          }
          *(_QWORD*)(*(_QWORD*)(v146 + 24) + 8 * v180) = v169;
        }
      }
      v158 = *(_QWORD**)(v146 + 8);
      ++*(_QWORD*)(v146 + 48);
    LABEL_303:
      v181 = *((_QWORD**)v160 + 3);
      v182 = *(_QWORD*)(v146 + 16);
      if ((unsigned __int64)v158 < v182) {
        *v158 = 0;
        *v158++ = *v181;
      }
      else {
        v183 = (__int64)v158 - *(_QWORD*)v146;
        v184 = (v183 >> 3) + 1;
        if (v184 >> 61 != 0) {
          GameRoutine_6f26d0(result);
        }
        v185 = v182 - *(_QWORD*)v146;
        v186 = v185 >> 2;
        if (v185 >> 2 <= v184) {
          v186 = (v183 >> 3) + 1;
        }
        if ((unsigned __int64)v185 >= 0x7FFFFFFFFFFFFFF8LL) {
          v1 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v1 = v186;
        }
        if (v1 >> 61 != 0) {
          goto LABEL_320;
        }
        result = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v1, 16, 0);
        v187 = (_QWORD*)(result + v183);
        *v187 = *v181;
        v158 = (_QWORD*)(result + v183 + 8);
        v188 = *(__int64**)v146;
        v189 = *(__int64**)(v146 + 8);
        v190 = (_QWORD*)((char*)v187 + *(_QWORD*)v146 - (_QWORD)v189);
        if (*(__int64**)v146 != v189) {
          v191 = *(__int64**)v146;
          v192 = v190;
          do {
            v193 = *v191++;
            *v192++ = v193;
          } while (v191 != v189);
        }
        *(_QWORD*)v146 = v190;
        *(_QWORD*)(v146 + 8) = v158;
        *(_QWORD*)(v146 + 16) = result + 8 * v1;
        if (v188 != nullptr) {
          v194 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v194 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v194, v188);
        }
      }
      ++v156;
      *(_QWORD*)(v146 + 8) = v158;
    } while (v156 != (unsigned int**)v157);
  }
  return result;
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
