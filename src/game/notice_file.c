#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_21c9fe0;
extern __int64 GameData_21f8158;
extern __int64 GameData_21f8160;
extern __int64 GameData_21f8168;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_9cc390(_QWORD);
void __attribute__((noreturn)) GameRoutine_9cc3b0(_QWORD);
__int64 NoticeFile_Unknown4(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6);
__int64 NoticeFile_Unknown5();
__int64 NoticeFile_9cb420();
__int64 GameRoutine_2b0();
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern _UNKNOWN GameData_1aac290;
extern _UNKNOWN GameData_1aed8d9;
extern _UNKNOWN GameData_21f8180;
extern _UNKNOWN GameData_21f81a0;
extern __int64 GameData_21f8170;
extern __int64 GameData_21f8178;
extern __int64 GameData_21f8188;
extern __int64 GameData_21f8190;
extern __int64 GameData_21f8198;
__int64* NoticeFile_9ca9c0();

__int64* NoticeFile_9ca9c0()
{
  _QWORD* v1;
  __int64 v2;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f8180,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f8180) != 0) {
    GameData_21f8170 = (__int64)&GameData_1aac290;
    GameData_21f8178 = (__int64)&GameData_1aed8d9;
    __cxa_guard_release(&GameData_21f8180);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f81a0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f81a0) != 0) {
    v1 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
    GameData_21f8188 = (__int64)v1;
    v2 = GameData_21f8178;
    GameData_21f8190 = (__int64)(v1 + 2);
    GameData_21f8198 = (__int64)(v1 + 2);
    *v1 = GameData_21f8170;
    v1[1] = v2;
    GameRoutine_2b0();
    __cxa_guard_release(&GameData_21f81a0);
  }
  return &GameData_21f8188;
}

__int64 NoticeFile_Unknown4(__int64 result, __int64 a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64* v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  unsigned __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  char* v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  unsigned __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  unsigned __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  char* v82;
  __int64 v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  unsigned __int64 v88;
  char* v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  unsigned __int64 v93;
  _QWORD* v94;
  __int64 v95;
  char* v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  char* v103;
  __int64 v104;
  __int64 v105;

  v6 = GameData_21f8158;
  v7 = GameData_21f8160;
  v8 = GameData_21f8160 - GameData_21f8158;
  v9 = 0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3);
  if (v9 > 4) {
    if (v8 != 120) {
      v22 = GameData_21f8158 + 120;
      if (GameData_21f8158 + 120 != GameData_21f8160) {
        v23 = GameData_21f8160;
        v24 = fw_memory_g_heap_manager_ptr;
        do {
          v26 = *(_QWORD*)(v23 - 24);
          v23 -= 24;
          v25 = v26;
          if (v26 != 0) {
            *(_QWORD*)(v7 - 16) = v25;
            if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
              v27 = 128;
            }
            else {
              v27 = 56;
            }
            result = nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v27);
          }
          v7 = v23;
        } while (v23 != v22);
      }
      GameData_21f8160 = v22;
    }
  }
  else if (0xAAAAAAAAAAAAAAABLL *
               ((GameData_21f8168 - GameData_21f8160) >> 3) >=
           5 - v9) {
    result =
        memset(GameData_21f8160, 0,
               96 - v8 - (unsigned __int8)(96 - v8) % 0x18u + 24, a4, a5, a6);
    GameData_21f8160 = v7 + 96 - v8 - (unsigned __int8)(96 - v8) % 0x18u + 24;
  }
  else {
    v10 = 0x5555555555555556LL * ((GameData_21f8168 - GameData_21f8158) >> 3);
    if (v10 <= 5) {
      v10 = 5;
    }
    if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8168 - GameData_21f8158) >> 3) >=
        0x555555555555555LL) {
      v11 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v11 = v10;
    }
    if (v11 > 0xAAAAAAAAAAAAAAALL) {
    LABEL_125:
      GameRoutine_60a210(result);
    }
    v12 = 3 * v11;
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v11, 16, 0);
    v15 = v14 + v8;
    v16 = v14;
    v17 = v14 + 8 * v12;
    memset(v14 + v8, 0, 96 - v8 - (unsigned __int8)(96 - v8) % 0x18u + 24, v18,
           v19, v20);
    result = memcpy(v16, v6, v8);
    GameData_21f8158 = v16;
    GameData_21f8160 = v15 + 96 - v8 - (unsigned __int8)(96 - v8) % 0x18u + 24;
    GameData_21f8168 = v17;
    if (v6 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v21 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v21);
    }
  }
  v28 = (_QWORD*)GameData_21f8158;
  *(_QWORD*)(GameData_21f8158 + 8) = *(_QWORD*)GameData_21f8158;
  v28[4] = v28[3];
  v28[7] = v28[6];
  v28[10] = v28[9];
  v28[13] = v28[12];
  v29 = *(__int64**)(GameData_21c9fe0 + 64);
  v30 = *(__int64**)(GameData_21c9fe0 + 72);
  while (v29 != v30) {
    v32 = *v29;
    v33 = *(_BYTE*)(*v29 + 32);
    if ((v33 & 1) != 0) {
      v34 = (__int64*)GameData_21f8158;
      if (GameData_21f8160 == GameData_21f8158) {
        goto LABEL_123;
      }
      v36 = *(_QWORD**)(GameData_21f8158 + 8);
      v35 = *(_QWORD*)(GameData_21f8158 + 16);
      if ((unsigned __int64)v36 >= v35) {
        v38 = *(_QWORD*)GameData_21f8158;
        v39 = (__int64)v36 - *(_QWORD*)GameData_21f8158;
        v40 = (v39 >> 3) + 1;
        if (v40 >> 61 != 0) {
          goto LABEL_124;
        }
        v41 = v35 - v38;
        if (v41 >> 2 > v40) {
          v40 = v41 >> 2;
        }
        if ((unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
          v42 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v42 = v40;
        }
        if (v42 != 0) {
          if (v42 >> 61 != 0) {
            goto LABEL_125;
          }
          v43 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v42, 16, 0);
        }
        else {
          v43 = 0;
        }
        v44 = v43 + 8 * v42;
        v45 = v43 + v39 - 8 * (v39 >> 3);
        *(_QWORD*)(v43 + v39) = v32;
        v37 = v43 + v39 + 8;
        result = memcpy(v45, v38, v39);
        *v34 = v45;
        v34[1] = v37;
        v34[2] = v44;
        if (v38 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v46 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
        }
      }
      else {
        *v36 = v32;
        v37 = (__int64)(v36 + 1);
      }
      v34[1] = v37;
      v33 = *(_BYTE*)(v32 + 32);
    }
    if ((v33 & 2) != 0) {
      v47 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          2) {
        goto LABEL_123;
      }
      v49 = *(_QWORD**)(GameData_21f8158 + 32);
      v48 = *(_QWORD*)(GameData_21f8158 + 40);
      if ((unsigned __int64)v49 >= v48) {
        v51 = *(_QWORD*)(GameData_21f8158 + 24);
        v52 = (char*)v49 - v51;
        v53 = ((__int64)v49 - v51) >> 3;
        v54 = v53 + 1;
        if ((unsigned __int64)(v53 + 1) >> 61 != 0) {
          goto LABEL_124;
        }
        v55 = v48 - v51;
        if (v55 >> 2 > v54) {
          v54 = v55 >> 2;
        }
        if ((unsigned __int64)v55 >= 0x7FFFFFFFFFFFFFF8LL) {
          v56 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v56 = v54;
        }
        if (v56 != 0) {
          if (v56 >> 61 != 0) {
            goto LABEL_125;
          }
          v57 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v56, 16, 0);
        }
        else {
          v57 = 0;
        }
        v58 = v57 + 8 * v56;
        v59 = (char*)v49 - v51;
        v60 = (__int64)&v52[v57 + -8 * v53];
        *(_QWORD*)&v52[v57] = v32;
        v50 = (__int64)&v52[v57 + 8];
        result = memcpy(v60, v51, v59);
        v47[3] = v60;
        v47[4] = v50;
        v47[5] = v58;
        if (v51 != 0) {
          v61 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v61 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v61);
        }
      }
      else {
        *v49 = v32;
        v50 = (__int64)(v49 + 1);
      }
      v47[4] = v50;
      v33 = *(_BYTE*)(v32 + 32);
    }
    if ((v33 & 4) != 0) {
      v62 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          3) {
        goto LABEL_123;
      }
      v64 = *(_QWORD**)(GameData_21f8158 + 56);
      v63 = *(_QWORD*)(GameData_21f8158 + 64);
      if ((unsigned __int64)v64 >= v63) {
        v66 = *(_QWORD*)(GameData_21f8158 + 48);
        v67 = (char*)v64 - v66;
        v68 = ((__int64)v64 - v66) >> 3;
        v69 = v68 + 1;
        if ((unsigned __int64)(v68 + 1) >> 61 != 0) {
          goto LABEL_124;
        }
        v70 = v63 - v66;
        if (v70 >> 2 > v69) {
          v69 = v70 >> 2;
        }
        if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
          v71 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v71 = v69;
        }
        if (v71 != 0) {
          if (v71 >> 61 != 0) {
            goto LABEL_125;
          }
          v72 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v71, 16, 0);
        }
        else {
          v72 = 0;
        }
        v73 = v72 + 8 * v71;
        v74 = (char*)v64 - v66;
        v75 = (__int64)&v67[v72 + -8 * v68];
        *(_QWORD*)&v67[v72] = v32;
        v65 = (__int64)&v67[v72 + 8];
        result = memcpy(v75, v66, v74);
        v62[6] = v75;
        v62[7] = v65;
        v62[8] = v73;
        if (v66 != 0) {
          v76 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v76 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v76);
        }
      }
      else {
        *v64 = v32;
        v65 = (__int64)(v64 + 1);
      }
      v62[7] = v65;
      v33 = *(_BYTE*)(v32 + 32);
    }
    if ((v33 & 8) != 0) {
      v77 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          4) {
        goto LABEL_123;
      }
      v79 = *(_QWORD**)(GameData_21f8158 + 80);
      v78 = *(_QWORD*)(GameData_21f8158 + 88);
      if ((unsigned __int64)v79 >= v78) {
        v81 = *(_QWORD*)(GameData_21f8158 + 72);
        v82 = (char*)v79 - v81;
        v83 = ((__int64)v79 - v81) >> 3;
        v84 = v83 + 1;
        if ((unsigned __int64)(v83 + 1) >> 61 != 0) {
          goto LABEL_124;
        }
        v85 = v78 - v81;
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
            goto LABEL_125;
          }
          v87 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v86, 16, 0);
        }
        else {
          v87 = 0;
        }
        v88 = v87 + 8 * v86;
        v89 = (char*)v79 - v81;
        v90 = (__int64)&v82[v87 + -8 * v83];
        *(_QWORD*)&v82[v87] = v32;
        v80 = (__int64)&v82[v87 + 8];
        result = memcpy(v90, v81, v89);
        v77[9] = v90;
        v77[10] = v80;
        v77[11] = v88;
        if (v81 != 0) {
          v91 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v91 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v91);
        }
      }
      else {
        *v79 = v32;
        v80 = (__int64)(v79 + 1);
      }
      v77[10] = v80;
      v33 = *(_BYTE*)(v32 + 32);
    }
    if ((v33 & 0x10) != 0) {
      v92 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          5) {
      LABEL_123:
        GameRoutine_9cc390(result);
      }
      v94 = *(_QWORD**)(GameData_21f8158 + 104);
      v93 = *(_QWORD*)(GameData_21f8158 + 112);
      if ((unsigned __int64)v94 < v93) {
        *v94 = v32;
        v31 = (__int64)(v94 + 1);
      }
      else {
        v95 = *(_QWORD*)(GameData_21f8158 + 96);
        v96 = (char*)v94 - v95;
        v97 = ((__int64)v94 - v95) >> 3;
        v98 = v97 + 1;
        if ((unsigned __int64)(v97 + 1) >> 61 != 0) {
        LABEL_124:
          GameRoutine_9cc3b0(result);
        }
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
            goto LABEL_125;
          }
          v101 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v100, 16, 0);
        }
        else {
          v101 = 0;
        }
        v102 = v101 + 8 * v100;
        v103 = (char*)v94 - v95;
        v104 = (__int64)&v96[v101 + -8 * v97];
        *(_QWORD*)&v96[v101] = v32;
        v31 = (__int64)&v96[v101 + 8];
        result = memcpy(v104, v95, v103);
        v92[12] = v104;
        v92[13] = v31;
        v92[14] = v102;
        if (v95 != 0) {
          v105 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v105 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v105);
        }
      }
      v92[13] = v31;
    }
    ++v29;
  }
  return result;
}

__int64 NoticeFile_Unknown5()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v1 = GameData_21f8158;
  v0 = GameData_21f8160;
  if (GameData_21f8158 != GameData_21f8160) {
    v2 = GameData_21f8160;
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = *(_QWORD*)(v2 - 24);
      v2 -= 24;
      v4 = v5;
      if (v5 != 0) {
        *(_QWORD*)(v0 - 16) = v4;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
      }
      v0 = v2;
    } while (v2 != v1);
  }
  GameData_21f8160 = v1;
  return result;
}

__int64 NoticeFile_9cb420()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v1 = GameData_21f8158;
  v0 = GameData_21f8160;
  if (GameData_21f8158 != GameData_21f8160) {
    v2 = GameData_21f8160;
    v3 = fw_memory_g_heap_manager_ptr;
    do {
      v5 = *(_QWORD*)(v2 - 24);
      v2 -= 24;
      v4 = v5;
      if (v5 != 0) {
        *(_QWORD*)(v0 - 16) = v4;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
      }
      v0 = v2;
    } while (v2 != v1);
  }
  GameData_21f8160 = v1;
  return result;
}

#pragma GCC visibility pop
