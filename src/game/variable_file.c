#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 GameData_21ed538;
extern __int64 GameData_21ed540;
extern __int64 GameData_21ed548;
extern __int64 GameData_21ed550;
extern __int64 GameData_21ed560;
extern __int64 GameData_21ed568;
extern __int64 GameData_21ed578;
extern __int64 GameData_21ed580;
extern __int64 GameData_21ed590;
extern __int64 GameData_21ed598;
extern __int64 GameData_21ed5a0;
extern __int64 GameData_21ed5a8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 VariableFile_Unknown5();
__int64 GameRoutine_83a180(__int64 result, __int64);
__int64 GameRoutine_83cf20(__int64 result, __int64, unsigned __int64, __int64*);
__int64 GameRoutine_83d520(__int64*, unsigned __int64*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_HashString(__int64 result);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 strlen(_QWORD);
char* GameRoutine_83d160(char* result, char*, char*, __int64, __int64, __int64,
                         __int64);
extern __int64 GameData_212ca08[134];
extern __int64 GameData_21ed570;
extern char GameData_1a9f09e;
extern int GameData_21ed5b0;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_834b20();
void __attribute__((noreturn)) String_60a1d0();
void VariableFile_Unknown4();
char* VariableFile_83cd00(char* result, char* a2, unsigned __int64 a3,
                          __int64* a4, __int64 a5);

void VariableFile_Unknown4()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __int64* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  char* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64* v33;
  unsigned __int64* v34;
  __int64 v35;
  unsigned __int64* v36;
  unsigned __int64 v37;
  __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  char* v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  _QWORD* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  char* v78;
  __int64 v79;
  char* v80;
  int v81;
  char* v82;
  __int64 v83;
  unsigned __int64 v84;
  char* v86;
  __int64 v87;
  char v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  _QWORD** v95;
  _QWORD* v96;
  unsigned __int64 v97;
  __int64 v98;
  __int64 v99;
  float v100;
  float v101;
  float v102;
  _BOOL8 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  unsigned __int64 primeEm;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  _QWORD** v116;
  unsigned __int64 v117;
  unsigned __int64 v118;
  _QWORD* v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  _QWORD* v122;
  unsigned __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  _QWORD* v127;
  __int64 v128;
  unsigned __int64 v129;
  unsigned __int64 v130;
  _QWORD* v131;
  char* v132;
  __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  unsigned __int64 v136;
  __int64 v137;
  unsigned __int64 v138;
  char* v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  char* v143;
  char* v144;
  _QWORD* v145;
  struct {
    __int64 v146;
    unsigned __int64 v147;
    char* v148;
  } v146_;
  struct {
    unsigned __int64 v149;
    unsigned __int64 v150;
    char* v151;
  } v149_;

  v1 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (GameData_21ed550 != 0) {
    v2 = (_QWORD*)GameData_21ed548;
    if (GameData_21ed548 != 0) {
      v0 = 56;
      do {
        v3 = (_QWORD*)*v2;
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v4 = 128;
        }
        else {
          v4 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v4, v2);
        v2 = v3;
      } while (v3 != nullptr);
    }
    GameData_21ed548 = 0;
    if (GameData_21ed540 != 0) {
      v5 = GameData_21ed540 & 7;
      if ((unsigned __int64)GameData_21ed540 >= 8) {
        v7 = GameData_21ed540 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21ed538 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 48) = 0;
          v8 = GameData_21ed538 + 8 * v6;
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
          *(_QWORD*)(GameData_21ed538 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21ed550 = 0;
  }
  GameData_21ed568 = GameData_21ed560;
  GameData_21ed580 = GameData_21ed578;
  if (GameData_21ed5a8 != 0) {
    v10 = (_QWORD*)GameData_21ed5a0;
    if (GameData_21ed5a0 != 0) {
      v0 = 56;
      do {
        v12 = (_QWORD*)*v10;
        v13 = v10[3];
        if (v13 != 0) {
          v14 = *v1;
          v10[4] = v13;
          if (*(_QWORD*)(v14 + 200) != 0) {
            v15 = 128;
          }
          else {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(v14 + v15, v13);
        }
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v11, v10);
        v10 = v12;
      } while (v12 != nullptr);
    }
    GameData_21ed5a0 = 0;
    if (GameData_21ed598 != 0) {
      v16 = GameData_21ed598 & 7;
      if ((unsigned __int64)GameData_21ed598 >= 8) {
        v18 = GameData_21ed598 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(GameData_21ed590 + 8 * v17) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v17 + 8) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v17 + 16) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v17 + 24) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v17 + 32) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v17 + 40) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v17 + 48) = 0;
          v19 = GameData_21ed590 + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(GameData_21ed590 + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    GameData_21ed5a8 = 0;
  }
  v21 = GameData_212ca08[0];
  v22 = *(_QWORD**)(*(_QWORD*)GameData_212ca08[0] + 64LL);
  v23 = *(_QWORD**)(*(_QWORD*)GameData_212ca08[0] + 72LL);
  if (v22 == v23) {
    v143 = nullptr;
    goto LABEL_138;
  }
  v24 = nullptr;
  v144 = nullptr;
  v25 = 0;
  do {
    v26 = (_QWORD*)*v22;
    if (*(_QWORD*)*v22 == 0 && *(_QWORD*)v26[3] != 0) {
      if ((unsigned __int64)v144 < v25) {
        *(_QWORD*)v144 = v26;
        v144 += 8;
      }
      else {
        v27 = (char*)(v144 - v24);
        v28 = (v144 - v24) >> 3;
        v29 = v28 + 1;
        if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
          goto LABEL_308;
        }
        if ((__int64)(v25 - (_QWORD)v24) >> 2 > v29) {
          v29 = (__int64)(v25 - (_QWORD)v24) >> 2;
        }
        if (v25 - (unsigned __int64)v24 >= 0x7FFFFFFFFFFFFFF8LL) {
          v30 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v30 = v29;
        }
        if (v30 != 0) {
          if (v30 >> 61 != 0) {
            goto LABEL_309;
          }
          v31 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v30, 16, 0);
        }
        else {
          v31 = 0;
        }
        v25 = v31 + 8 * v30;
        v0 = (unsigned __int64)&v27[v31 + -8 * v28];
        *(_QWORD*)&v27[v31] = v26;
        v144 = &v27[v31 + 8];
        memcpy(v0, v24, v27);
        if (v24 != nullptr) {
          v1 = (__int64*)fw_memory_g_heap_manager_ptr;
          v32 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v32 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v24);
          v24 = (char*)v0;
        }
        else {
          v24 = (char*)v0;
          v1 = (__int64*)fw_memory_g_heap_manager_ptr;
        }
      }
    }
    ++v22;
  } while (v22 != v23);
  v33 = (unsigned __int64*)v144;
  if (v24 == v144) {
    goto LABEL_136;
  }
  v34 = (unsigned __int64*)v24;
  while (2) {
    v0 = *v34;
    v36 = *(unsigned __int64**)(*v34 + 24);
    v149_.v149 = *v34;
    v37 = *v36;
    if (*v36 == 0) {
      goto LABEL_64;
    }
    if (GameData_21ed540 == 0 || GameData_21ed550 == 0) {
      goto LABEL_89;
    }
    v39 = GameData_21ed540 - 1;
    if ((GameData_21ed540 & (GameData_21ed540 - 1)) != 0) {
      v40 = *v36;
      if (v37 >= GameData_21ed540) {
        v40 = v37 % GameData_21ed540;
      }
    }
    else {
      v40 = v39 & v37;
    }
    v41 = *(_QWORD**)(GameData_21ed538 + 8 * v40);
    if (v41 == nullptr || (v42 = (_QWORD*)*v41) == nullptr) {
    LABEL_89:
      GameRoutine_83d520(&GameData_21ed538, v36, (__int64*)&v149_.v149);
      v45 = GameData_21ed568;
      if (GameData_21ed568 < (unsigned __int64)GameData_21ed570) {
        *(_QWORD*)GameData_21ed568 = v0;
        v35 = v45 + 8;
      }
      else {
        v46 = GameData_21ed560;
        v47 = GameData_21ed568 - GameData_21ed560;
        v48 = (GameData_21ed568 - GameData_21ed560) >> 3;
        v49 = v48 + 1;
        if ((unsigned __int64)(v48 + 1) >> 61 != 0) {
        LABEL_308:
          GameRoutine_834b20();
        }
        v50 = GameData_21ed570 - GameData_21ed560;
        v51 = v24;
        if ((GameData_21ed570 - GameData_21ed560) >> 2 > v49) {
          v49 = v50 >> 2;
        }
        if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
          v52 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v52 = v49;
        }
        if (v52 != 0) {
          if (v52 >> 61 != 0) {
          LABEL_309:
            GameRoutine_60a210();
          }
          v53 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v52, 16, 0);
        }
        else {
          v53 = 0;
        }
        v54 = v53 + 8 * v52;
        v55 = v53 + v47 - 8 * v48;
        *(_QWORD*)(v53 + v47) = v0;
        v35 = v53 + v47 + 8;
        memcpy(v55, v46, v47);
        GameData_21ed560 = v55;
        GameData_21ed568 = v35;
        GameData_21ed570 = v54;
        if (v46 != 0) {
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v56 = 128;
          }
          else {
            v56 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v56, v46);
        }
        v33 = (unsigned __int64*)v144;
        v24 = v51;
      }
      GameData_21ed568 = v35;
      v1 = (__int64*)fw_memory_g_heap_manager_ptr;
      goto LABEL_64;
    }
    if ((GameData_21ed540 & v39) == 0) {
      while (1) {
        v44 = v42[1];
        if (v44 == v37) {
          if (v42[2] == v37) {
            goto LABEL_106;
          }
        }
        else if ((v44 & v39) != v40) {
          goto LABEL_89;
        }
        v42 = (_QWORD*)*v42;
        if (v42 == nullptr) {
          goto LABEL_89;
        }
      }
    }
    while (1) {
      v43 = v42[1];
      if (v43 == v37) {
        break;
      }
      if (v43 >= GameData_21ed540) {
        v43 %= (unsigned __int64)GameData_21ed540;
      }
      if (v43 != v40) {
        goto LABEL_89;
      }
    LABEL_79:
      v42 = (_QWORD*)*v42;
      if (v42 == nullptr) {
        goto LABEL_89;
      }
    }
    if (v42[2] != v37) {
      goto LABEL_79;
    }
  LABEL_106:
    GameRoutine_83a180(*(_QWORD*)(v42[3] + 24LL) + 16LL, v0);
    v57 = *(_QWORD**)(v0 + 24);
    v58 = v57[2];
    v59 = v57[3];
    *v57 = 0;
    v57[1] = &GameData_1a9f09e;
    while (v58 != v59) {
      v61 = *(_QWORD*)(v59 - 32);
      if (v61 != 0) {
        *(_QWORD*)(v59 - 24) = v61;
        if (*(_QWORD*)(*v1 + 200) != 0) {
          v62 = 128;
        }
        else {
          v62 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v62, v61);
      }
      v0 = *(_QWORD*)(v59 - 56);
      if (v0 != 0) {
        v63 = *(_QWORD*)(v59 - 48);
        if (v0 == v63) {
          v1 = (__int64*)fw_memory_g_heap_manager_ptr;
        LABEL_108:
          if (*(_QWORD*)(*v1 + 200) != 0) {
            v60 = 128;
          }
          else {
            v60 = 56;
          }
          nn_mem_StandardAllocator_Free(*v1 + v60, v0);
          goto LABEL_112;
        }
        v64 = v24;
        do {
          v65 = *(_QWORD*)(v63 - 24);
          if (v65 != 0) {
            *(_QWORD*)(v63 - 16) = v65;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v66 = 128;
            }
            else {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v65);
          }
          v67 = v63 - 48;
          v68 = *(_QWORD*)(v63 - 48);
          if (v68 != 0) {
            *(_QWORD*)(v63 - 40) = v68;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v69 = 128;
            }
            else {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v68);
          }
          v63 -= 48;
        } while (v67 != v0);
        *(_QWORD*)(v59 - 48) = v0;
        v24 = v64;
        v1 = (__int64*)fw_memory_g_heap_manager_ptr;
        v0 = *(_QWORD*)(v59 - 56);
        if (v0 != 0) {
          goto LABEL_108;
        }
      }
    LABEL_112:
      v59 -= 72;
    }
    v57[3] = v58;
    v33 = (unsigned __int64*)v144;
  LABEL_64:
    if (++v34 != v33) {
      continue;
    }
    break;
  }
LABEL_136:
  v143 = v24;
  v21 = GameData_212ca08[0];
LABEL_138:
  v70 = *(_QWORD**)(*(_QWORD*)v21 + 64LL);
  v145 = *(_QWORD**)(*(_QWORD*)v21 + 72LL);
  if (v70 != v145) {
    v71 = 0;
    while (1) {
      v74 = (_QWORD*)*v70;
      if (*(_QWORD*)*v70 == 0) {
        goto LABEL_190;
      }
      v75 = v74[1];
      v76 = strlen(v75);
      if (v76 >= 0xFFFFFFFFFFFFFFF7LL) {
        goto LABEL_307;
      }
      v77 = v76;
      if (v76 >= 0x17) {
        break;
      }
      v78 = (char*)&v149_.v149 + 1;
      LOBYTE(v149_.v149) = 2 * v76;
      if (v76 != 0) {
        goto LABEL_153;
      }
    LABEL_154:
      v78[v77] = 0;
      v80 = v149_.v151;
      v81 = v149_.v149 & 1;
      if (v81 != 0) {
        v0 = v149_.v150;
      }
      else {
        v0 = (unsigned __int64)(unsigned __int8)v149_.v149 >> 1;
      }
      if ((v149_.v149 & 1) != 0) {
        v82 = v149_.v151;
      }
      else {
        v82 = (char*)&v149_.v149 + 1;
      }
      v83 = memchr(v82, 95, v0);
      v84 = v83 - (_QWORD)v82;
      if (v83 == 0 || v84 == -1) {
        goto LABEL_181;
      }
      if (v0 >= v84) {
        v0 = v83 - (_QWORD)v82;
      }
      if (v0 >= 0xFFFFFFFFFFFFFFF7LL) {
      LABEL_307:
        String_60a1d0();
      }
      if (v0 >= 0x17) {
        if ((v0 | 7) == 0x17) {
          v87 = 26;
        }
        else {
          v87 = (v0 | 7) + 1;
        }
        v86 = (char*)fw_memory_HeapManager_Allocate(*v1, v87, 16, 0);
        v146_.v147 = v0;
        v146_.v148 = v86;
        v146_.v146 = v87 | 1;
      LABEL_174:
        memmove(v86, v82, v0);
        goto LABEL_175;
      }
      v86 = (char*)&v146_.v146 + 1;
      LOBYTE(v146_.v146) = 2 * v0;
      if (v0 != 0) {
        goto LABEL_174;
      }
    LABEL_175:
      v88 = v149_.v149;
      v86[v0] = 0;
      if ((v88 & 1) != 0 && v149_.v151 != nullptr) {
        v89 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v89 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v89, v149_.v151);
      }
      v80 = v146_.v148;
      v81 = v146_.v146 & 1;
      v149_.v149 = v146_.v146;
      v149_.v150 = v146_.v147;
      v149_.v151 = v146_.v148;
    LABEL_181:
      if (v81 != 0) {
        v90 = v80;
      }
      else {
        v90 = (char*)&v149_.v149 + 1;
      }
      v73 = game_HashString((__int64)v90);
      if ((v149_.v149 & 1) != 0 && v149_.v151 != nullptr) {
        v91 = v73;
        v92 = 128;
        if (*(_QWORD*)(*v1 + 200) == 0) {
          v92 = 56;
        }
        nn_mem_StandardAllocator_Free(*v1 + v92, v149_.v151);
        v73 = v91;
      }
      if (v73 != 0) {
        goto LABEL_143;
      }
    LABEL_190:
      if (*(_QWORD*)v74[3] != 0) {
        v93 = GameData_21ed598;
        if (GameData_21ed598 != 0) {
          v94 = GameData_21ed598 - 1;
          if ((GameData_21ed598 & (GameData_21ed598 - 1)) != 0) {
            v0 = v71;
            if (v71 >= GameData_21ed598) {
              v0 = v71 % GameData_21ed598;
            }
          }
          else {
            v0 = v94 & v71;
          }
          v95 = *(_QWORD***)(GameData_21ed590 + 8 * v0);
          if (v95 != nullptr) {
            v96 = *v95;
            if (*v95 != nullptr) {
              if ((GameData_21ed598 & v94) == 0) {
                while (1) {
                  v98 = v96[1];
                  if (v98 == v71) {
                    if (v96[2] == v71) {
                      goto LABEL_286;
                    }
                  }
                  else if ((v98 & v94) != v0) {
                    goto LABEL_211;
                  }
                  v96 = (_QWORD*)*v96;
                  if (v96 == nullptr) {
                    goto LABEL_211;
                  }
                }
              }
              do {
                v97 = v96[1];
                if (v97 == v71) {
                  if (v96[2] == v71) {
                    goto LABEL_286;
                  }
                }
                else {
                  if (v97 >= GameData_21ed598) {
                    v97 %= (unsigned __int64)GameData_21ed598;
                  }
                  if (v97 != v0) {
                    break;
                  }
                }
                v96 = (_QWORD*)*v96;
              } while (v96 != nullptr);
            }
          }
        }
      LABEL_211:
        v96 = (_QWORD*)fw_memory_HeapManager_Allocate(*v1, 48, 16, 0);
        *v96 = 0;
        v96[1] = v71;
        v96[2] = v71;
        v96[3] = 0;
        v99 = GameData_21ed5a8;
        v100 = *(float*)&GameData_21ed5b0;
        v96[4] = 0;
        v96[5] = 0;
        v101 = (float)(unsigned __int64)(v99 + 1);
        if (v93 != 0 && (float)(v100 * (float)v93) >= v101) {
          goto LABEL_277;
        }
        v102 = v101 / v100;
        v103 = (v93 & (v93 - 1)) != 0;
        if (v93 < 3) {
          v103 = true;
        }
        v104 = v103 | (2 * v93);
        v105 = vcvtps_u64_f32(v102);
        if (v104 <= v105) {
          primeEm = v105;
        }
        else {
          primeEm = v104;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
          v93 = GameData_21ed598;
        }
        if (primeEm <= v93) {
          if (primeEm < v93) {
            v111 = vcvtps_u64_f32((float)(unsigned __int64)GameData_21ed5a8 /
                                  *(float*)&GameData_21ed5b0);
            if (v93 < 3 || (v93 & (v93 - 1)) != 0) {
              v111 = std___1___next_prime(v111);
            }
            else {
              v112 = 1LL << (-(char)__clz(v111 - 1) & 63);
              if (v111 >= 2) {
                v111 = v112;
              }
            }
            if (primeEm <= v111) {
              primeEm = v111;
            }
            if (primeEm < v93) {
              if (primeEm != 0) {
                goto LABEL_223;
              }
              v124 = GameData_21ed590;
              GameData_21ed590 = 0;
              if (v124 != 0) {
                v125 = 128;
                if (*(_QWORD*)(*v1 + 200) == 0) {
                  v125 = 56;
                }
                nn_mem_StandardAllocator_Free(*v1 + v125, v124);
              }
              GameData_21ed598 = 0;
            }
          }
          goto LABEL_272;
        }
      LABEL_223:
        if (primeEm >> 61 != 0) {
          goto LABEL_309;
        }
        v107 = fw_memory_HeapManager_Allocate(*v1, 8 * primeEm, 16, 0);
        v108 = GameData_21ed590;
        GameData_21ed590 = v107;
        if (v108 != 0) {
          v109 = 128;
          if (*(_QWORD*)(*v1 + 200) == 0) {
            v109 = 56;
          }
          nn_mem_StandardAllocator_Free(*v1 + v109, v108);
        }
        GameData_21ed598 = primeEm;
        if (primeEm >= 8) {
          v110 = 0;
          do {
            *(_QWORD*)(GameData_21ed590 + 8 * v110) = 0;
            *(_QWORD*)(GameData_21ed590 + 8 * v110 + 8) = 0;
            *(_QWORD*)(GameData_21ed590 + 8 * v110 + 16) = 0;
            *(_QWORD*)(GameData_21ed590 + 8 * v110 + 24) = 0;
            *(_QWORD*)(GameData_21ed590 + 8 * v110 + 32) = 0;
            *(_QWORD*)(GameData_21ed590 + 8 * v110 + 40) = 0;
            *(_QWORD*)(GameData_21ed590 + 8 * v110 + 48) = 0;
            v113 = GameData_21ed590 + 8 * v110;
            v110 += 8;
            *(_QWORD*)(v113 + 56) = 0;
          } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v110);
        }
        else {
          v110 = 0;
        }
        v114 = primeEm & 7;
        if ((primeEm & 7) != 0) {
          v115 = 8 * v110;
          do {
            --v114;
            *(_QWORD*)(GameData_21ed590 + v115) = 0;
            v115 += 8;
          } while (v114 != 0);
        }
        v116 = (_QWORD**)GameData_21ed5a0;
        if (GameData_21ed5a0 == 0) {
          goto LABEL_272;
        }
        v117 = *(_QWORD*)(GameData_21ed5a0 + 8);
        v118 = primeEm - 1;
        if ((primeEm & (primeEm - 1)) == 0) {
          v121 = v117 & v118;
          *(_QWORD*)(GameData_21ed590 + 8 * v121) = &GameData_21ed5a0;
          while (1) {
            v122 = *v116;
            if (*v116 == nullptr) {
              break;
            }
            v123 = v122[1] & v118;
            if (v123 == v121) {
              v116 = (_QWORD**)*v116;
            }
            else if (*(_QWORD*)(GameData_21ed590 + 8 * v123) != 0) {
              *v116 = (_QWORD*)*v122;
              *v122 = **(_QWORD**)(GameData_21ed590 + 8 * v123);
              **(_QWORD**)(GameData_21ed590 + 8 * v123) = v122;
            }
            else {
              *(_QWORD*)(GameData_21ed590 + 8 * v123) = v116;
              v116 = (_QWORD**)v122;
              v121 = v123;
            }
          }
          goto LABEL_272;
        }
        if (v117 >= primeEm) {
          v117 %= primeEm;
        }
        *(_QWORD*)(GameData_21ed590 + 8 * v117) = &GameData_21ed5a0;
        v119 = *v116;
        if (*v116 == nullptr) {
        LABEL_272:
          v93 = GameData_21ed598;
          if ((GameData_21ed598 & (GameData_21ed598 - 1)) != 0) {
            if (v71 >= GameData_21ed598) {
              v0 = v71 % GameData_21ed598;
            }
            else {
              v0 = v71;
            }
          }
          else {
            v0 = (GameData_21ed598 - 1) & v71;
          }
        LABEL_277:
          v126 = GameData_21ed590;
          v127 = *(_QWORD**)(GameData_21ed590 + 8 * v0);
          if (v127 != nullptr) {
            *v96 = *v127;
            *v127 = v96;
          }
          else {
            v128 = GameData_21ed5a0;
            GameData_21ed5a0 = (__int64)v96;
            *v96 = v128;
            *(_QWORD*)(v126 + 8 * v0) = &GameData_21ed5a0;
            if (*v96 != 0) {
              v129 = *(_QWORD*)(*v96 + 8LL);
              if ((v93 & (v93 - 1)) != 0) {
                if (v129 >= v93) {
                  v129 %= v93;
                }
              }
              else {
                v129 &= v93 - 1;
              }
              *(_QWORD*)(GameData_21ed590 + 8 * v129) = v96;
            }
          }
          ++GameData_21ed5a8;
        LABEL_286:
          v131 = (_QWORD*)v96[4];
          v130 = v96[5];
          if ((unsigned __int64)v131 < v130) {
            *v131 = v74;
            v72 = (__int64)(v131 + 1);
          }
          else {
            v0 = v96[3];
            v132 = (char*)v131 - v0;
            v133 = (__int64)((__int64)v131 - v0) >> 3;
            v134 = v133 + 1;
            if ((unsigned __int64)(v133 + 1) >> 61 != 0) {
              goto LABEL_308;
            }
            v135 = v130 - v0;
            if (v135 >> 2 > v134) {
              v134 = v135 >> 2;
            }
            if ((unsigned __int64)v135 >= 0x7FFFFFFFFFFFFFF8LL) {
              v136 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v136 = v134;
            }
            if (v136 != 0) {
              if (v136 >> 61 != 0) {
                goto LABEL_309;
              }
              v137 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v136, 16, 0);
            }
            else {
              v137 = 0;
            }
            v138 = v137 + 8 * v136;
            v139 = (char*)v131 - v0;
            v140 = (__int64)&v132[v137 + -8 * v133];
            *(_QWORD*)&v132[v137] = v74;
            v72 = (__int64)&v132[v137 + 8];
            memcpy(v140, v0, v139);
            v96[3] = v140;
            v96[4] = v72;
            v96[5] = v138;
            v1 = (__int64*)fw_memory_g_heap_manager_ptr;
            if (v0 != 0) {
              v141 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v141 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v141, v0);
            }
          }
          v96[4] = v72;
          goto LABEL_142;
        }
        while (2) {
          v120 = v119[1];
          if (v120 >= primeEm) {
            v120 %= primeEm;
          }
          if (v120 != v117) {
            if (*(_QWORD*)(GameData_21ed590 + 8 * v120) == 0) {
              *(_QWORD*)(GameData_21ed590 + 8 * v120) = v116;
            LABEL_249:
              v116 = (_QWORD**)v119;
              v119 = (_QWORD*)*v119;
              v117 = v120;
              if (v119 == nullptr) {
                goto LABEL_272;
              }
              continue;
            }
            *v116 = (_QWORD*)*v119;
            *v119 = **(_QWORD**)(GameData_21ed590 + 8 * v120);
            **(_QWORD**)(GameData_21ed590 + 8 * v120) = v119;
            v119 = v116;
          }
          break;
        }
        v120 = v117;
        goto LABEL_249;
      }
    LABEL_142:
      v73 = v71;
    LABEL_143:
      ++v70;
      v71 = v73;
      if (v70 == v145) {
        goto LABEL_302;
      }
    }
    if ((v76 | 7) == 0x17) {
      v79 = 26;
    }
    else {
      v79 = (v76 | 7) + 1;
    }
    v78 = (char*)fw_memory_HeapManager_Allocate(*v1, v79, 16, 0);
    v149_.v150 = v77;
    v149_.v151 = v78;
    v149_.v149 = v79 | 1;
  LABEL_153:
    memmove(v78, v75, v77);
    goto LABEL_154;
  }
LABEL_302:
  if (v143 != nullptr) {
    v142 = 128;
    if (*(_QWORD*)(*v1 + 200) == 0) {
      v142 = 56;
    }
    nn_mem_StandardAllocator_Free(*v1 + v142, v143);
  }
}

__int64 VariableFile_Unknown5()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  if (GameData_21ed550 != 0) {
    v0 = (_QWORD*)GameData_21ed548;
    if (GameData_21ed548 != 0) {
      v1 = fw_memory_g_heap_manager_ptr;
      do {
        v2 = (_QWORD*)*v0;
        if (*(_QWORD*)(*(_QWORD*)v1 + 200LL) != 0) {
          v3 = 128;
        }
        else {
          v3 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v1 + v3, v0);
        v0 = v2;
      } while (v2 != nullptr);
    }
    GameData_21ed548 = 0;
    if (GameData_21ed540 != 0) {
      v5 = GameData_21ed540 & 7;
      if ((unsigned __int64)GameData_21ed540 >= 8) {
        v7 = GameData_21ed540 & 0xFFFFFFFFFFFFFFF8LL;
        v6 = 0;
        do {
          *(_QWORD*)(GameData_21ed538 + 8 * v6) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 8) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 16) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 24) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 32) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 40) = 0;
          *(_QWORD*)(GameData_21ed538 + 8 * v6 + 48) = 0;
          v8 = GameData_21ed538 + 8 * v6;
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
          *(_QWORD*)(GameData_21ed538 + v9) = 0;
          v9 += 8;
        } while (v5 != 0);
      }
    }
    GameData_21ed550 = 0;
  }
  GameData_21ed568 = GameData_21ed560;
  GameData_21ed580 = GameData_21ed578;
  if (GameData_21ed5a8 != 0) {
    v10 = (_QWORD*)GameData_21ed5a0;
    if (GameData_21ed5a0 != 0) {
      v11 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*v10;
        v14 = v10[3];
        if (v14 != 0) {
          v15 = *(_QWORD*)v11;
          v10[4] = v14;
          if (*(_QWORD*)(v15 + 200) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          nn_mem_StandardAllocator_Free(v15 + v16, v14);
        }
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v12, v10);
        v10 = v13;
      } while (v13 != nullptr);
    }
    GameData_21ed5a0 = 0;
    if (GameData_21ed598 != 0) {
      v17 = GameData_21ed598 & 7;
      if ((unsigned __int64)GameData_21ed598 >= 8) {
        v19 = GameData_21ed598 & 0xFFFFFFFFFFFFFFF8LL;
        v18 = 0;
        do {
          *(_QWORD*)(GameData_21ed590 + 8 * v18) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 8) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 16) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 24) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 32) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 40) = 0;
          *(_QWORD*)(GameData_21ed590 + 8 * v18 + 48) = 0;
          v20 = GameData_21ed590 + 8 * v18;
          v18 += 8;
          *(_QWORD*)(v20 + 56) = 0;
        } while (v19 != v18);
      }
      else {
        v18 = 0;
      }
      if (v17 != 0) {
        v21 = 8 * v18;
        do {
          --v17;
          *(_QWORD*)(GameData_21ed590 + v21) = 0;
          v21 += 8;
        } while (v17 != 0);
      }
    }
    GameData_21ed5a8 = 0;
  }
  return result;
}

char* VariableFile_83cd00(char* result, char* a2, unsigned __int64 a3,
                          __int64* a4, __int64 a5)
{
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  char* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  char* v17;
  char* v20;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *((_QWORD*)a2 - 1);
      v6 = *(_QWORD*)result;
      if (*(unsigned __int16*)(v5 + 22) <
          (unsigned int)*(unsigned __int16*)(*(_QWORD*)result + 22LL)) {
        *(_QWORD*)result = v5;
        *((_QWORD*)a2 - 1) = v6;
      }
    }
    else if ((__int64)a3 > 128) {
      v14 = a3 >> 1;
      v16 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v20 = result;
        v22 = a4;
        GameRoutine_83cf20((__int64)result, (__int64)&result[8 * v14], a3 >> 1,
                           a4);
        v23 = &v22[v14];
        result = (char*)GameRoutine_83cf20((__int64)&v20[8 * v14], (__int64)a2,
                                           v16, v23);
        v24 = &v22[a3];
        v25 = v23;
        while (v25 != v24) {
          v26 = *v25;
          v27 = *(unsigned __int16*)(*v25 + 22);
          v28 = *(unsigned __int16*)(*v22 + 22);
          if (v27 < v28) {
            v29 = 0;
          }
          else {
            v26 = *v22;
            v29 = 8;
          }
          v22 = (__int64*)((char*)v22 + v29);
          if (v27 >= v28) {
            v30 = 0;
          }
          else {
            v30 = 8;
          }
          *(_QWORD*)v20 = v26;
          v20 += 8;
          v25 = (__int64*)((char*)v25 + v30);
          if (v22 == v23) {
            while (v25 != v24) {
              v32 = *v25++;
              *(_QWORD*)v20 = v32;
              v20 += 8;
            }
            return result;
          }
        }
        while (v22 != v23) {
          v31 = *v22++;
          *(_QWORD*)v20 = v31;
          v20 += 8;
        }
      }
      else {
        v17 = result;
        VariableFile_83cd00(result, &result[8 * v14], a3 >> 1, a4, a5);
        VariableFile_83cd00(&v17[8 * v14], a2, v16, a4, a5);
        return GameRoutine_83d160(v17, &v17[8 * v14], a2, v14, v16, (__int64)a4,
                                  a5);
      }
    }
    else if (result != a2) {
      v7 = result + 8;
      if (result + 8 != a2) {
        v8 = 0;
        v9 = result;
        do {
          v12 = *(_QWORD*)v9;
          v11 = *((_QWORD*)v9 + 1);
          v9 = v7;
          if (*(unsigned __int16*)(v11 + 22) <
              (unsigned int)*(unsigned __int16*)(v12 + 22)) {
            v13 = v8;
            do {
              *(_QWORD*)&result[v13 + 8] = v12;
              if (v13 == 0) {
                v10 = result;
                goto LABEL_11;
              }
              v12 = *(_QWORD*)&result[v13 - 8];
              v13 -= 8;
            } while (*(unsigned __int16*)(v11 + 22) <
                     (unsigned int)*(unsigned __int16*)(v12 + 22));
            v10 = &result[v13 + 8];
          LABEL_11:
            *(_QWORD*)v10 = v11;
          }
          v7 = v9 + 8;
          v8 += 8;
        } while (v9 + 8 != a2);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
