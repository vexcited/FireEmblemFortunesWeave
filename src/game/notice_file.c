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
__int64 NoticeFile_Unknown4_alt1(__int64 result, __int64 a2, __int64 a3,
                                 __int64 a4, __int64 a5,
                                 __int64 a6) __asm__("NoticeFile_Unknown4");
__int64 NoticeFile_Unknown5_alt1() __asm__("NoticeFile_Unknown5");
__int64 NoticeFile_9cb420_alt1() __asm__("NoticeFile_9cb420");
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
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_9cc390_alt1() __asm__("GameRoutine_9cc390");
void __attribute__((noreturn))
GameRoutine_9cc3b0_alt1() __asm__("GameRoutine_9cc3b0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void NoticeFile_Unknown4();
void NoticeFile_9cb420();
void NoticeFile_Unknown5();

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

void NoticeFile_Unknown4()
{
  __int64 v0;
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  signed __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  unsigned __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD* v53;
  unsigned __int64 v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  unsigned __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  unsigned __int64 v84;
  _QWORD* v85;
  __int64 v86;
  char* v87;
  __int64 v88;
  unsigned __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64 v96;

  v0 = GameData_21f8158;
  v1 = GameData_21f8160;
  v2 = GameData_21f8160 - GameData_21f8158;
  v3 = 0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3);
  if (v3 > 4) {
    if (v2 != 120) {
      v13 = GameData_21f8158 + 120;
      if (GameData_21f8158 + 120 != GameData_21f8160) {
        v14 = GameData_21f8160;
        v15 = fw_memory_g_heap_manager_ptr;
        do {
          v17 = *(_QWORD*)(v14 - 24);
          v14 -= 24;
          v16 = v17;
          if (v17 != 0) {
            *(_QWORD*)(v1 - 16) = v16;
            if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
              v18 = 128;
            }
            else {
              v18 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v15 + v18, v16);
          }
          v1 = v14;
        } while (v14 != v13);
      }
      GameData_21f8160 = v13;
    }
  }
  else if (0xAAAAAAAAAAAAAAABLL *
               ((GameData_21f8168 - GameData_21f8160) >> 3) >=
           5 - v3) {
    memset_alt1(GameData_21f8160, 0,
                96 - v2 - (unsigned __int8)(96 - v2) % 0x18u + 24);
    GameData_21f8160 = v1 + 96 - v2 - (unsigned __int8)(96 - v2) % 0x18u + 24;
  }
  else {
    v4 = 0x5555555555555556LL * ((GameData_21f8168 - GameData_21f8158) >> 3);
    if (v4 <= 5) {
      v4 = 5;
    }
    if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8168 - GameData_21f8158) >> 3) >=
        0x555555555555555LL) {
      v5 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v5 = v4;
    }
    if (v5 > 0xAAAAAAAAAAAAAAALL) {
    LABEL_125:
      GameRoutine_60a210_alt1();
    }
    v6 = 3 * v5;
    v7 = fw_memory_g_heap_manager_ptr;
    v8 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v5, 16, 0);
    v9 = v8 + v2;
    v10 = v8;
    v11 = v8 + 8 * v6;
    memset_alt1(v8 + v2, 0, 96 - v2 - (unsigned __int8)(96 - v2) % 0x18u + 24);
    memcpy_alt1(v10, v0, v2);
    GameData_21f8158 = v10;
    GameData_21f8160 = v9 + 96 - v2 - (unsigned __int8)(96 - v2) % 0x18u + 24;
    GameData_21f8168 = v11;
    if (v0 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v12, v0);
    }
  }
  v19 = (_QWORD*)GameData_21f8158;
  *(_QWORD*)(GameData_21f8158 + 8) = *(_QWORD*)GameData_21f8158;
  v19[4] = v19[3];
  v19[7] = v19[6];
  v19[10] = v19[9];
  v19[13] = v19[12];
  v20 = *(__int64**)(GameData_21c9fe0 + 64);
  v21 = *(__int64**)(GameData_21c9fe0 + 72);
  while (v20 != v21) {
    v23 = *v20;
    v24 = *(_BYTE*)(*v20 + 32);
    if ((v24 & 1) != 0) {
      v25 = (__int64*)GameData_21f8158;
      if (GameData_21f8160 == GameData_21f8158) {
        goto LABEL_123;
      }
      v27 = *(_QWORD**)(GameData_21f8158 + 8);
      v26 = *(_QWORD*)(GameData_21f8158 + 16);
      if ((unsigned __int64)v27 >= v26) {
        v29 = *(_QWORD*)GameData_21f8158;
        v30 = (signed __int64)v27 - *(_QWORD*)GameData_21f8158;
        v31 = (v30 >> 3) + 1;
        if (v31 >> 61 != 0) {
          goto LABEL_124;
        }
        v32 = v26 - v29;
        if (v32 >> 2 > v31) {
          v31 = v32 >> 2;
        }
        if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF8LL) {
          v33 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v33 = v31;
        }
        if (v33 != 0) {
          if (v33 >> 61 != 0) {
            goto LABEL_125;
          }
          v34 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
        }
        else {
          v34 = 0;
        }
        v35 = v34 + 8 * v33;
        v36 = v34 + v30 - 8 * (v30 >> 3);
        *(_QWORD*)(v34 + v30) = v23;
        v28 = v34 + v30 + 8;
        memcpy_alt1(v36, v29, v30);
        *v25 = v36;
        v25[1] = v28;
        v25[2] = v35;
        if (v29 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v29);
        }
      }
      else {
        *v27 = v23;
        v28 = (__int64)(v27 + 1);
      }
      v25[1] = v28;
      v24 = *(_BYTE*)(v23 + 32);
    }
    if ((v24 & 2) != 0) {
      v38 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          2) {
        goto LABEL_123;
      }
      v40 = *(_QWORD**)(GameData_21f8158 + 32);
      v39 = *(_QWORD*)(GameData_21f8158 + 40);
      if ((unsigned __int64)v40 >= v39) {
        v42 = *(_QWORD*)(GameData_21f8158 + 24);
        v43 = (char*)v40 - v42;
        v44 = ((__int64)v40 - v42) >> 3;
        v45 = v44 + 1;
        if ((unsigned __int64)(v44 + 1) >> 61 != 0) {
          goto LABEL_124;
        }
        v46 = v39 - v42;
        if (v46 >> 2 > v45) {
          v45 = v46 >> 2;
        }
        if ((unsigned __int64)v46 >= 0x7FFFFFFFFFFFFFF8LL) {
          v47 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v47 = v45;
        }
        if (v47 != 0) {
          if (v47 >> 61 != 0) {
            goto LABEL_125;
          }
          v48 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v47, 16, 0);
        }
        else {
          v48 = 0;
        }
        v49 = v48 + 8 * v47;
        v50 = (unsigned __int64)v40 - v42;
        v51 = (__int64)&v43[v48 + -8 * v44];
        *(_QWORD*)&v43[v48] = v23;
        v41 = (__int64)&v43[v48 + 8];
        memcpy_alt1(v51, v42, v50);
        v38[3] = v51;
        v38[4] = v41;
        v38[5] = v49;
        if (v42 != 0) {
          v52 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v52 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v42);
        }
      }
      else {
        *v40 = v23;
        v41 = (__int64)(v40 + 1);
      }
      v38[4] = v41;
      v24 = *(_BYTE*)(v23 + 32);
    }
    if ((v24 & 4) != 0) {
      v53 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          3) {
        goto LABEL_123;
      }
      v55 = *(_QWORD**)(GameData_21f8158 + 56);
      v54 = *(_QWORD*)(GameData_21f8158 + 64);
      if ((unsigned __int64)v55 >= v54) {
        v57 = *(_QWORD*)(GameData_21f8158 + 48);
        v58 = (char*)v55 - v57;
        v59 = ((__int64)v55 - v57) >> 3;
        v60 = v59 + 1;
        if ((unsigned __int64)(v59 + 1) >> 61 != 0) {
          goto LABEL_124;
        }
        v61 = v54 - v57;
        if (v61 >> 2 > v60) {
          v60 = v61 >> 2;
        }
        if ((unsigned __int64)v61 >= 0x7FFFFFFFFFFFFFF8LL) {
          v62 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v62 = v60;
        }
        if (v62 != 0) {
          if (v62 >> 61 != 0) {
            goto LABEL_125;
          }
          v63 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v62, 16, 0);
        }
        else {
          v63 = 0;
        }
        v64 = v63 + 8 * v62;
        v65 = (unsigned __int64)v55 - v57;
        v66 = (__int64)&v58[v63 + -8 * v59];
        *(_QWORD*)&v58[v63] = v23;
        v56 = (__int64)&v58[v63 + 8];
        memcpy_alt1(v66, v57, v65);
        v53[6] = v66;
        v53[7] = v56;
        v53[8] = v64;
        if (v57 != 0) {
          v67 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v67 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v57);
        }
      }
      else {
        *v55 = v23;
        v56 = (__int64)(v55 + 1);
      }
      v53[7] = v56;
      v24 = *(_BYTE*)(v23 + 32);
    }
    if ((v24 & 8) != 0) {
      v68 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          4) {
        goto LABEL_123;
      }
      v70 = *(_QWORD**)(GameData_21f8158 + 80);
      v69 = *(_QWORD*)(GameData_21f8158 + 88);
      if ((unsigned __int64)v70 >= v69) {
        v72 = *(_QWORD*)(GameData_21f8158 + 72);
        v73 = (char*)v70 - v72;
        v74 = ((__int64)v70 - v72) >> 3;
        v75 = v74 + 1;
        if ((unsigned __int64)(v74 + 1) >> 61 != 0) {
          goto LABEL_124;
        }
        v76 = v69 - v72;
        if (v76 >> 2 > v75) {
          v75 = v76 >> 2;
        }
        if ((unsigned __int64)v76 >= 0x7FFFFFFFFFFFFFF8LL) {
          v77 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v77 = v75;
        }
        if (v77 != 0) {
          if (v77 >> 61 != 0) {
            goto LABEL_125;
          }
          v78 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v77, 16, 0);
        }
        else {
          v78 = 0;
        }
        v79 = v78 + 8 * v77;
        v80 = (unsigned __int64)v70 - v72;
        v81 = (__int64)&v73[v78 + -8 * v74];
        *(_QWORD*)&v73[v78] = v23;
        v71 = (__int64)&v73[v78 + 8];
        memcpy_alt1(v81, v72, v80);
        v68[9] = v81;
        v68[10] = v71;
        v68[11] = v79;
        if (v72 != 0) {
          v82 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v82 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v72);
        }
      }
      else {
        *v70 = v23;
        v71 = (__int64)(v70 + 1);
      }
      v68[10] = v71;
      v24 = *(_BYTE*)(v23 + 32);
    }
    if ((v24 & 0x10) != 0) {
      v83 = (_QWORD*)GameData_21f8158;
      if (0xAAAAAAAAAAAAAAABLL * ((GameData_21f8160 - GameData_21f8158) >> 3) <
          5) {
      LABEL_123:
        GameRoutine_9cc390_alt1();
      }
      v85 = *(_QWORD**)(GameData_21f8158 + 104);
      v84 = *(_QWORD*)(GameData_21f8158 + 112);
      if ((unsigned __int64)v85 < v84) {
        *v85 = v23;
        v22 = (__int64)(v85 + 1);
      }
      else {
        v86 = *(_QWORD*)(GameData_21f8158 + 96);
        v87 = (char*)v85 - v86;
        v88 = ((__int64)v85 - v86) >> 3;
        v89 = v88 + 1;
        if ((unsigned __int64)(v88 + 1) >> 61 != 0) {
        LABEL_124:
          GameRoutine_9cc3b0_alt1();
        }
        v90 = v84 - v86;
        if (v90 >> 2 > v89) {
          v89 = v90 >> 2;
        }
        if ((unsigned __int64)v90 >= 0x7FFFFFFFFFFFFFF8LL) {
          v91 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v91 = v89;
        }
        if (v91 != 0) {
          if (v91 >> 61 != 0) {
            goto LABEL_125;
          }
          v92 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v91, 16, 0);
        }
        else {
          v92 = 0;
        }
        v93 = v92 + 8 * v91;
        v94 = (unsigned __int64)v85 - v86;
        v95 = (__int64)&v87[v92 + -8 * v88];
        *(_QWORD*)&v87[v92] = v23;
        v22 = (__int64)&v87[v92 + 8];
        memcpy_alt1(v95, v86, v94);
        v83[12] = v95;
        v83[13] = v22;
        v83[14] = v93;
        if (v86 != 0) {
          v96 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v96 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v86);
        }
      }
      v83[13] = v22;
    }
    ++v20;
  }
}

void NoticeFile_Unknown5()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, v4);
      }
      v0 = v2;
    } while (v2 != v1);
  }
  GameData_21f8160 = v1;
}

void NoticeFile_9cb420()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

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
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, v4);
      }
      v0 = v2;
    } while (v2 != v1);
  }
  GameData_21f8160 = v1;
}

#pragma GCC visibility pop
