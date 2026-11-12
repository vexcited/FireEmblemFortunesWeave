#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64* Section_18db560_alt1(__int64* result) __asm__("Section_18db560");
__int64 Section_18db600_alt1(__int64 result) __asm__("Section_18db600");
__int64* Section_18db740_alt1(__int64* result) __asm__("Section_18db740");
__int64 GameRoutine_18d72c0(_QWORD);
__int64 GameRoutine_a93ea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212ce38;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
__attribute__((swiftcall)) void Section_18d9aa0(PSEUDO_X8 x8_, __int64 result);
__int64 Section_18dabe0_alt1(__int64 result,
                             __int64* a2) __asm__("Section_18dabe0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_templates_a93ea0(float*, unsigned __int8*, __int64, __int64**);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void GameRoutine_18d72c0_alt1(__int64*) __asm__("GameRoutine_18d72c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5a20_alt1() __asm__("GameRoutine_6e5a20");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Section_18dabe0(__int64 a1, __int64 a2);
void Section_18db560(__int64* a1);
void Section_18db600(__int64* a1);
void Section_18db740(__int64* a1);

__attribute__((swiftcall)) void Section_18d9aa0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned int* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  _DWORD* v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  int v13;
  __int64 v14;
  int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;

  if (*(_BYTE*)a1 != 7) {
    *(_QWORD*)(a2 + 8) = 0;
    *(_QWORD*)(a2 + 16) = 0;
    *(_QWORD*)(a2 + 24) = 0;
    *(_DWORD*)a2 = 13;
    return;
  }
  v2 = *(unsigned int**)(a1 + 1);
  v3 = v2[1];
  if ((_DWORD)v3 == 0) {
    v5 = 0;
    v10 = nullptr;
    v7 = 0;
  LABEL_31:
    *(_DWORD*)a2 = 0;
    *(_QWORD*)(a2 + 8) = v7;
    *(_QWORD*)(a2 + 16) = v10;
    *(_QWORD*)(a2 + 24) = v5;
    return;
  }
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v3, 16, 0);
  v5 = v4 + 4 * v3;
  v6 = 16 * v3;
  v7 = v4;
  v8 = 0;
  v9 = 0;
  v10 = (_DWORD*)v4;
  while (1) {
    v11 = *v2;
    if (v9 >= v11) {
      v13 = v9 - v11;
      v14 = __clz(v13 + 16);
      v12 =
          (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)v2 + 2) + 8 * (27 - v14) +
                                        8) +
                             16LL * (unsigned int)(v13 -
                                                   *((_DWORD*)GameData_212ce38 +
                                                     28 - v14)));
    }
    else {
      v12 = (unsigned __int8*)(*((_QWORD*)v2 + 1) + v8);
    }
    v15 = *v12;
    v16 = *((_QWORD*)v12 + 1);
    if (v15 != 2) {
      break;
    }
    if (v16 >> 31 != 0) {
    LABEL_32:
      v24 = 34;
      goto LABEL_34;
    }
  LABEL_14:
    if ((unsigned __int64)v10 < v5) {
      *v10 = v16;
    }
    else {
      v17 = (unsigned __int64)v10 - v7;
      v18 = ((__int64)v10 - v7) >> 2;
      v19 = v18 + 1;
      if ((unsigned __int64)(v18 + 1) >> 62 != 0) {
        GameRoutine_6e5a20_alt1();
      }
      if ((__int64)(v5 - v7) >> 1 > v19) {
        v19 = (__int64)(v5 - v7) >> 1;
      }
      if (v5 - v7 >= 0x7FFFFFFFFFFFFFFCLL) {
        v20 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v20 = v19;
      }
      if (v20 != 0) {
        if (v20 >> 62 != 0) {
          GameRoutine_60a210_alt1();
        }
        v21 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v20, 16, 0);
      }
      else {
        v21 = 0;
      }
      v10 = (_DWORD*)(v21 + v17);
      v5 = v21 + 4 * v20;
      *(_DWORD*)(v21 + v17) = v16;
      v22 = v21 + v17 - 4 * v18;
      memcpy_alt1(v22, v7, v17);
      if (v7 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v7);
      }
      v7 = v22;
    }
    ++v10;
    ++v9;
    v8 += 16;
    if (v6 == v8) {
      goto LABEL_31;
    }
  }
  if (v15 == 3) {
    if (v16 != (int)v16) {
      goto LABEL_32;
    }
    goto LABEL_14;
  }
  v24 = 13;
LABEL_34:
  *(_DWORD*)a2 = v24;
  *(_QWORD*)(a2 + 8) = v7;
  *(_QWORD*)(a2 + 16) = v10;
  *(_QWORD*)(a2 + 24) = v5;
}

void Section_18dabe0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  unsigned int* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  int v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  int v22;
  unsigned __int64 v23;
  char v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  unsigned __int64 v31;
  _QWORD* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  int v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v71;
  unsigned __int64 v72;
  struct {
    _QWORD* v73;
    __int64 v74;
    int v75;
    char gap76_[4];
    int v76;
  } v73_;
  struct {
    __int64** v77;
    unsigned __int64 v78;
    __int64 v79;
  } v77_;
  struct {
    __int64 v80;
    unsigned __int64 v81;
    _QWORD* v82;
    __int64 v83;
    int v84;
  } v80_;
  struct {
    __int64** v85;
    unsigned __int64 v86;
    __int64 v87;
  } v85_;

  v2 = a2;
  v3 = fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)a1 != 8) {
    v80_.v82 = nullptr;
    v80_.v83 = 0;
    v71 = 0;
    v72 = 0;
    v80_.v80 = 0;
    v80_.v81 = 0;
    v73_.v73 = nullptr;
    v73_.v74 = 0;
    v80_.v84 = 1065353216;
    v73_.v75 = 1065353216;
    GameRoutine_18d72c0_alt1(&v80_.v80);
    if (*(_QWORD*)(v2 + 24) == 0) {
      goto LABEL_93;
    }
    goto LABEL_72;
  }
  v4 = *(unsigned int**)(a1 + 1);
  v80_.v82 = nullptr;
  v80_.v83 = 0;
  v80_.v80 = 0;
  v80_.v81 = 0;
  v80_.v84 = 1065353216;
  v5 = v4[1];
  if ((_DWORD)v5 != 0) {
    v6 = 0;
    v7 = 0;
    v8 = 32 * v5;
    while (1) {
      v9 = *v4;
      if (v7 >= v9) {
        v11 = v7 - v9;
        v12 = __clz(v11 + 16);
        v10 =
            (unsigned __int8*)(*(_QWORD*)(*((_QWORD*)v4 + 2) + 8 * (27 - v12) +
                                          8) +
                               32LL *
                                   (unsigned int)(v11 -
                                                  *((_DWORD*)GameData_212ce38 +
                                                    28 - v12)));
      }
      else {
        v10 = (unsigned __int8*)(*((_QWORD*)v4 + 1) + v6);
      }
      v13 = *v10;
      if ((v13 & 0x7F) != 6) {
        v77_.v77 = nullptr;
        v77_.v78 = 0;
        v77_.v79 = 0;
        v73_.v76 = 13;
        v73_.v73 = v80_.v82;
        v73_.v74 = v80_.v83;
        v35 = v80_.v80;
        v36 = v80_.v81;
        v80_.v80 = 0;
        v80_.v81 = 0;
        v71 = v35;
        v72 = v36;
        v73_.v75 = v80_.v84;
        if (v80_.v83 != 0) {
          v37 = v80_.v82[1];
          if ((v36 & (v36 - 1)) != 0) {
            if (v37 >= v36) {
              v37 %= v36;
            }
          }
          else {
            v37 &= v36 - 1;
          }
          *(_QWORD*)(v35 + 8 * v37) = &v73_.v73;
          v80_.v82 = nullptr;
          v80_.v83 = 0;
          if (((unsigned __int8)v77_.v77 & 1) != 0 && v77_.v79 != 0) {
            v69 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v77_.v79);
          }
        }
        goto LABEL_55;
      }
      v14 = v13 == 134 ? v10[1] : *((unsigned int*)v10 + 1);
      v15 = v13 == 6 ? *((_QWORD*)v10 + 1) : (__int64)(v10 + 2);
      if ((unsigned int)v14 >= 0x17) {
        break;
      }
      v16 = (char*)&v85_.v85 + 1;
      LOBYTE(v85_.v85) = 2 * v14;
      if ((_DWORD)v14 != 0) {
        goto LABEL_21;
      }
    LABEL_22:
      v16[v14] = 0;
      v73_.v76 = 0;
      v77_.v77 = v85_.v85;
      v77_.v78 = v85_.v86;
      v77_.v79 = v85_.v87;
      v22 = v10[16];
      v23 = *((_QWORD*)v10 + 3);
      if (v22 == 2) {
        if (v23 >> 31 == 0) {
          goto LABEL_27;
        }
      }
      else if (v22 == 3 && v23 == (int)v23) {
      LABEL_27:
        v85_.v85 = (__int64**)&v77_.v77;
        *(_DWORD*)(game_templates_a93ea0(
                       (float*)&v80_.v80, (unsigned __int8*)&v77_.v77,
                       (__int64)std___1_piecewise_construct_ptr,
                       (__int64**)&v85_.v85) +
                   40) = v23;
        v24 = 1;
        if (((unsigned __int8)v77_.v77 & 1) != 0) {
          goto LABEL_37;
        }
        goto LABEL_41;
      }
      v25 = v80_.v80;
      v26 = v80_.v81;
      v80_.v80 = 0;
      v80_.v81 = 0;
      v71 = v25;
      v72 = v26;
      v73_.v73 = v80_.v82;
      v73_.v74 = v80_.v83;
      v73_.v75 = v80_.v84;
      if (v80_.v83 != 0) {
        v27 = v80_.v82[1];
        if ((v26 & (v26 - 1)) != 0) {
          if (v27 >= v26) {
            v27 %= v26;
          }
        }
        else {
          v27 &= v26 - 1;
        }
        v24 = 0;
        *(_QWORD*)(v25 + 8 * v27) = &v73_.v73;
        v80_.v82 = nullptr;
        v80_.v83 = 0;
        if (((unsigned __int8)v77_.v77 & 1) == 0) {
          goto LABEL_41;
        }
      LABEL_37:
        if (v77_.v79 != 0) {
          v28 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v28 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v77_.v79);
        }
        goto LABEL_41;
      }
      v24 = 0;
      if (((unsigned __int8)v77_.v77 & 1) != 0) {
        goto LABEL_37;
      }
    LABEL_41:
      if ((v24 & 1) == 0) {
        goto LABEL_55;
      }
      ++v7;
      v6 += 32;
      if (v8 == v6) {
        v29 = *(float*)&v80_.v84;
        v30 = v80_.v80;
        v31 = v80_.v81;
        v32 = v80_.v82;
        v33 = v80_.v83;
        goto LABEL_45;
      }
    }
    v17 = v4;
    v18 = v8;
    if ((v14 | 7) == 0x17) {
      v19 = 26;
    }
    else {
      v19 = (v14 | 7) + 1;
    }
    v20 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v19, 16,
                                              0);
    v21 = (__int64*)(v19 | 1);
    v16 = (char*)v20;
    v85_.v86 = v14;
    v85_.v87 = v20;
    v8 = v18;
    v4 = v17;
    v85_.v85 = (__int64**)v21;
  LABEL_21:
    memmove_alt1((__int64)v16, v15, v14);
    goto LABEL_22;
  }
  v33 = 0;
  v32 = nullptr;
  v31 = 0;
  v30 = 0;
  v29 = 0x1.0000000000000p+0f;
LABEL_45:
  v71 = v30;
  v72 = v31;
  v80_.v80 = 0;
  v80_.v81 = 0;
  v73_.v73 = v32;
  v73_.v74 = v33;
  v73_.v75 = LODWORD(v29);
  if (v33 != 0) {
    v34 = v32[1];
    if ((v31 & (v31 - 1)) != 0) {
      if (v34 >= v31) {
        v34 %= v31;
      }
    }
    else {
      v34 &= v31 - 1;
    }
    *(_QWORD*)(v30 + 8 * v34) = &v73_.v73;
    v80_.v82 = nullptr;
    v80_.v83 = 0;
  }
LABEL_55:
  v38 = v80_.v82;
  v3 = fw_memory_g_heap_manager_ptr;
  v2 = a2;
  while (v38 != nullptr) {
    v40 = (__int64)v38;
    v38 = (_QWORD*)*v38;
    if ((*(_BYTE*)(v40 + 16) & 1) != 0 && *(_QWORD*)(v40 + 32) != 0) {
      v41 = v40;
      v42 = *(_QWORD*)(v40 + 32);
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v43 = 128;
      }
      else {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v43, v42);
      v40 = v41;
    }
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
      v39 = 128;
    }
    else {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v39, v40);
  }
  v44 = v80_.v80;
  v80_.v80 = 0;
  if (v44 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v45, v44);
  }
  if (*(_QWORD*)(a2 + 24) != 0) {
  LABEL_72:
    v46 = *(_QWORD**)(v2 + 16);
    while (v46 != nullptr) {
      v48 = (__int64)v46;
      v46 = (_QWORD*)*v46;
      if ((*(_BYTE*)(v48 + 16) & 1) != 0 && *(_QWORD*)(v48 + 32) != 0) {
        v49 = v48;
        v50 = *(_QWORD*)(v48 + 32);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v51, v50);
        v48 = v49;
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v47 = 128;
      }
      else {
        v47 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v47, v48);
    }
    v52 = *(_QWORD*)(v2 + 8);
    *(_QWORD*)(v2 + 16) = 0;
    if (v52 != 0) {
      v53 = v52 & 7;
      if (v52 >= 8) {
        v55 = v52 & 0xFFFFFFFFFFFFFFF8LL;
        v54 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v54) = 0;
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v54 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v54 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v54 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v54 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v54 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)v2 + 8 * v54 + 48) = 0;
          v56 = *(_QWORD*)v2 + 8 * v54;
          v54 += 8;
          *(_QWORD*)(v56 + 56) = 0;
        } while (v55 != v54);
      }
      else {
        v54 = 0;
      }
      if (v53 != 0) {
        v57 = 8 * v54;
        do {
          --v53;
          *(_QWORD*)(*(_QWORD*)v2 + v57) = 0;
          v57 += 8;
        } while (v53 != 0);
      }
    }
    *(_QWORD*)(v2 + 24) = 0;
  }
LABEL_93:
  v58 = *(_QWORD*)v2;
  *(_QWORD*)v2 = v71;
  if (v58 != 0) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v59, v58);
  }
  v60 = v73_.v73;
  v61 = v73_.v75;
  v62 = v73_.v74;
  *(_QWORD*)(v2 + 16) = v73_.v73;
  *(_QWORD*)(v2 + 8) = v72;
  *(_QWORD*)(v2 + 24) = v62;
  *(_DWORD*)(v2 + 32) = v61;
  if (v62 != 0) {
    v63 = v60[1];
    if ((v72 & (v72 - 1)) != 0) {
      if (v63 >= v72) {
        v63 %= v72;
      }
    }
    else {
      v63 &= v72 - 1;
    }
    *(_QWORD*)(*(_QWORD*)v2 + 8 * v63) = v2 + 16;
    v73_.v73 = nullptr;
    v73_.v74 = 0;
  }
  else {
    while (v60 != nullptr) {
      v65 = (__int64)v60;
      v60 = (_QWORD*)*v60;
      if ((*(_BYTE*)(v65 + 16) & 1) != 0 && *(_QWORD*)(v65 + 32) != 0) {
        v66 = v65;
        v67 = *(_QWORD*)(v65 + 32);
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v68 = 128;
        }
        else {
          v68 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v68, v67);
        v65 = v66;
      }
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v64 = 128;
      }
      else {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v64, v65);
    }
  }
}

void Section_18db560(__int64* a1)
{
  __int64 v1;
  __int64* v2;
  __int64 v4;
  __int64 v5;

  v1 = *a1;
  if (*a1 != 0) {
    v2 = (__int64*)a1[1];
    if ((__int64*)v1 == v2) {
      goto LABEL_5;
    }
    do {
      v2 -= 9;
      Section_18db600(v2);
    } while (v2 != (__int64*)v1);
    v4 = *a1;
    a1[1] = v1;
    v1 = v4;
    if (v4 != 0) {
    LABEL_5:
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v1);
    }
  }
}

void Section_18db600(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = a1[6];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[7] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[3];
  if (v6 != 0) {
    v7 = a1[4];
    if (v6 == v7) {
      goto LABEL_15;
    }
    v8 = a1[4];
    do {
      v10 = *(_QWORD*)(v8 - 24);
      v8 -= 24;
      v9 = v10;
      if (v10 != 0) {
        *(_QWORD*)(v7 - 16) = v9;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, v9);
      }
      v7 = v8;
    } while (v8 != v6);
    v12 = a1[3];
    a1[4] = v6;
    v6 = v12;
    if (v12 != 0) {
    LABEL_15:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v13, v6);
    }
  }
  if (*a1 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v14, *a1);
  }
}

void Section_18db740(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *a1;
  if (*a1 != 0) {
    v2 = a1[1];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v2) {
      goto LABEL_11;
    }
    v5 = a1[1];
    do {
      v7 = *(_QWORD*)(v5 - 24);
      v5 -= 24;
      v6 = v7;
      if (v7 != 0) {
        *(_QWORD*)(v2 - 16) = v6;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v8, v6);
      }
      v2 = v5;
    } while (v5 != v1);
    v9 = *a1;
    a1[1] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_11:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, v1);
    }
  }
}

#pragma GCC visibility pop
