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
__attribute__((swiftcall)) void timeline_6530(PSEUDO_X8, int*, _BYTE*);
__int64 GameHr_7aa0(int**, _QWORD*);
__int64 GameRoutine_634d80(__int64, __int64);
__int64 GameRoutine_6544c0(__int64, __int64);
__int64 Value_7f50(__int64*);
__int64 game_6b8c20(unsigned __int8*, __int64);
__int64 timeline_7910(__int64, int8x16_t*);
extern __int64 (***GameData_212c3c8)();
extern __int64 (*fs_Section_MasterFiles_vtable[])();
extern __int64* GameData_212ce30;
extern __int64* snd_g_fileIndex_ptr[2];
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, __int64*);
void GameRoutine_6b55a0(__int64, unsigned __int8);
void Value_77d0(_QWORD*);
__int64 Section_18db840(__int64 a1, __int64* a2, __int64 a3);

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

__int64 Section_18db840(__int64 a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int8* v16;
  __int64 v17;
  __int64 v18;
  unsigned int* v19;
  unsigned int* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int* v29;
  unsigned int* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  unsigned int* v36;
  unsigned int* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned int* v43;
  unsigned int* v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  int v48;
  __int64 v49;
  unsigned int* v50;
  unsigned int* v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  const char* v55;
  int v56;
  __int64 v57;
  unsigned int* v58;
  unsigned int* v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  unsigned int* v65;
  unsigned int* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  unsigned int* v72;
  unsigned int* v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  int v77;
  __int64 v78;
  unsigned __int8* v79;
  int v80;
  __int64 v81;
  __int64 v82;
  struct {
    const char* v83;
    int v84;
    char gap28_[4];
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    unsigned __int8* v89;
  } v83_;
  int8x16_t v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  struct {
    __int64* v96;
    __int64 v97;
    __int64 (***v98)();
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
    __int16 v103;
    char gap186_[2];
    int v104;
    __int64 v105;
    __int64 v106;
  } v96_;
  unsigned __int8* v107;
  struct {
    const char* v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
  } v108_;

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v60 = COERCE_AS(__typeof__(v60),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 8) = 0;
  v3 = a1 + 8;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 40) = 1065353216;
  *(_DWORD*)(a1 + 80) = 1065353216;
  *(_DWORD*)(a1 + 120) = 1065353216;
  *(_DWORD*)(a1 + 160) = 1065353216;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  v5 = a1 + 48;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v6 = a1 + 88;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  v7 = a1 + 128;
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)a1 = fs_Section_MasterFiles_vtable;
  *(_QWORD*)(a1 + 168) = 0;
  v8 = (__int64*)(a1 + 168);
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  v9 = a1 + 192;
  *(_QWORD*)(a1 + 216) = 0;
  v10 = a1 + 216;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  v11 = *snd_g_fileIndex_ptr[0];
  v96_.v96 = a2;
  v96_.v97 = a3;
  v96_.v98 = GameData_212c3c8;
  LODWORD(v96_.v99) = 1;
  result = GameRoutine_6544c0(v11, (__int64)&v96_.v96),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v31 = COERCE_AS(__typeof__(v31),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v38 = COERCE_AS(__typeof__(v38),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v45 = COERCE_AS(__typeof__(v45),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v52 = COERCE_AS(__typeof__(v52),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v60 = COERCE_AS(__typeof__(v60),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v74 = COERCE_AS(__typeof__(v74),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = *(_QWORD*)(result + 592);
  if (v13 == 0) {
    return result;
  }
  v14 = result;
  v15 = *(_QWORD*)(result + 576);
  v96_.v103 = 257;
  v94 = 0;
  v96_.v98 = nullptr;
  v96_.v99 = 0;
  v96_.v101 = 0;
  v96_.v102 = 0;
  v96_.v104 = 0;
  v96_.v100 = -1;
  v95 = 0;
  v108_.v108 = nullptr;
  LODWORD(v108_.v109) = 0;
  v108_.v110 = 0xFFFFFFFFLL;
  v108_.v111 = 0;
  v108_.v112 = 0;
  v108_.v113 = 0;
  v91 = 2048;
  v92 = 16;
  v96_.v105 = v13;
  v96_.v106 = v15;
  v96_.v96 = GameData_212ce30 + 2;
  v96_.v97 = 0;
  LANES128(v90).n128_u64[0] = 0x2000;
  LANES128(v90).n128_u64[1] = 0x8000;
  v93 = 2;
  v82 = v7;
  if ((unsigned int)timeline_7910((__int64)&v108_.v108, &v90) != 0) {
    v16 = nullptr;
    LODWORD(v108_.v109) = 14;
    v83_.v84 = 14;
    v83_.v83 = v108_.v108;
  LABEL_6:
    v17 = v108_.v110;
    v18 = v108_.v111;
    v108_.v108 = nullptr;
    v83_.v89 = nullptr;
    goto LABEL_7;
  }
  if ((unsigned int)GameHr_7aa0((int**)&v108_.v108, &v96_.v96) != 0) {
    v16 = nullptr;
    v83_.v83 = v108_.v108;
    v83_.v84 = v108_.v109;
    goto LABEL_6;
  }
  timeline_6530((void*)(&v107), (int*)&v108_.v108, nullptr),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = v107;
  v55 = v108_.v108;
  v108_.v108 = nullptr;
  v83_.v83 = v55;
  v83_.v84 = v108_.v109;
  v17 = v108_.v110;
  v18 = v108_.v111;
  v83_.v89 = v107;
LABEL_7:
  v83_.v85 = v17;
  v83_.v86 = v18;
  v108_.v111 = 0;
  v83_.v87 = v108_.v112;
  v83_.v88 = v108_.v113;
  Value_77d0(&v108_.v108),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*v16 & 0x7F) == 8) {
    v19 = *(unsigned int**)(v16 + 1);
    v108_.v108 = "ReleaseVersions";
    v108_.v109 = 15;
    v20 = game_6b7f00(v19, 0, v19, v19[1], (__int64*)&v108_.v108),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v21 != v19[1]) {
      v22 = *v20;
      if (v21 >= v22) {
        v24 = v21 - v22;
        v25 = __clz(v24 + 16);
        v23 = *(_QWORD*)(*((_QWORD*)v20 + 2) + 8 * (27 - v25) + 8) +
              32LL *
                  (unsigned int)(v24 - *((_DWORD*)GameData_212ce38 + 28 - v25));
      }
      else {
        v23 = *((_QWORD*)v20 + 1) + 32 * v21;
      }
      Section_18d9aa0((void*)((__int64)&v108_.v108), v23 + 16),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v26 = *v8;
      if (*v8 != 0) {
        *(_QWORD*)(a1 + 176) = v26;
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27, v26),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v31 = COERCE_AS(__typeof__(v31),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v38 = COERCE_AS(__typeof__(v38),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v45 = COERCE_AS(__typeof__(v45),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v52 = COERCE_AS(__typeof__(v52),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v60 = COERCE_AS(__typeof__(v60),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v74 = COERCE_AS(__typeof__(v74),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v28 = v108_.v110;
      *(_QWORD*)(a1 + 168) = v108_.v109;
      *(_QWORD*)(a1 + 176) = v28;
      *(_QWORD*)(a1 + 184) = v108_.v111;
    }
  }
  if ((*v16 & 0x7F) == 8) {
    v29 = *(unsigned int**)(v16 + 1);
    v108_.v108 = "ContentsName";
    v108_.v109 = 12;
    v30 = game_6b7f00(v29, 0, v29, v29[1], (__int64*)&v108_.v108),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v31 != v29[1]) {
      v32 = *v30;
      if (v31 >= v32) {
        v34 = v31 - v32;
        v35 = __clz(v34 + 16);
        v33 = *(_QWORD*)(*((_QWORD*)v30 + 2) + 8 * (27 - v35) + 8) +
              32LL *
                  (unsigned int)(v34 - *((_DWORD*)GameData_212ce38 + 28 - v35));
      }
      else {
        v33 = *((_QWORD*)v30 + 1) + 32 * v31;
      }
      game_6b8c20((unsigned __int8*)(v33 + 16), v9),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((*v16 & 0x7F) == 8) {
    v36 = *(unsigned int**)(v16 + 1);
    v108_.v108 = "ReleaseName";
    v108_.v109 = 11;
    v37 = game_6b7f00(v36, 0, v36, v36[1], (__int64*)&v108_.v108),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v38 != v36[1]) {
      v39 = *v37;
      if (v38 >= v39) {
        v41 = v38 - v39;
        v42 = __clz(v41 + 16);
        v40 = *(_QWORD*)(*((_QWORD*)v37 + 2) + 8 * (27 - v42) + 8) +
              32LL *
                  (unsigned int)(v41 - *((_DWORD*)GameData_212ce38 + 28 - v42));
      }
      else {
        v40 = *((_QWORD*)v37 + 1) + 32 * v38;
      }
      game_6b8c20((unsigned __int8*)(v40 + 16), v10),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  if ((*v16 & 0x7F) == 8) {
    v43 = *(unsigned int**)(v16 + 1);
    v108_.v108 = "Fs";
    v108_.v109 = 2;
    v44 = game_6b7f00(v43, 0, v43, v43[1], (__int64*)&v108_.v108),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v31 = COERCE_AS(__typeof__(v31),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v38 = COERCE_AS(__typeof__(v38),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v45 = COERCE_AS(__typeof__(v45),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v52 = COERCE_AS(__typeof__(v52),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v60 = COERCE_AS(__typeof__(v60),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v74 = COERCE_AS(__typeof__(v74),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v45 != v43[1]) {
      v46 = *v44;
      if (v45 >= v46) {
        v48 = v45 - v46;
        v49 = __clz(v48 + 16);
        v47 = *(_QWORD*)(*((_QWORD*)v44 + 2) + 8 * (27 - v49) + 8) +
              32LL *
                  (unsigned int)(v48 - *((_DWORD*)GameData_212ce38 + 28 - v49));
      }
      else {
        v47 = *((_QWORD*)v44 + 1) + 32 * v45;
      }
      if ((*(_BYTE*)(v47 + 16) & 0x7F) == 8) {
        v50 = *(unsigned int**)(v47 + 17);
        v108_.v108 = "Section";
        v108_.v109 = 7;
        v51 = game_6b7f00(v50, 0, v50, v50[1], (__int64*)&v108_.v108),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v52 != v50[1]) {
          v53 = *v51;
          if (v52 >= v53) {
            v56 = v52 - v53;
            v57 = __clz(v56 + 16);
            v54 = *(_QWORD*)(*((_QWORD*)v51 + 2) + 8 * (27 - v57) + 8) +
                  32LL * (unsigned int)(v56 - *((_DWORD*)GameData_212ce38 + 28 -
                                                v57));
          }
          else {
            v54 = *((_QWORD*)v51 + 1) + 32 * v52;
          }
          Section_18dabe0(v54 + 16, v3),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if ((*(_BYTE*)(v47 + 16) & 0x7F) == 8) {
        v58 = *(unsigned int**)(v47 + 17);
        v108_.v108 = "SectionRule";
        v108_.v109 = 11;
        v59 = game_6b7f00(v58, 0, v58, v58[1], (__int64*)&v108_.v108),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v60 != v58[1]) {
          v61 = *v59;
          if (v60 >= v61) {
            v63 = v60 - v61;
            v64 = __clz(v63 + 16);
            v62 = *(_QWORD*)(*((_QWORD*)v59 + 2) + 8 * (27 - v64) + 8) +
                  32LL * (unsigned int)(v63 - *((_DWORD*)GameData_212ce38 + 28 -
                                                v64));
          }
          else {
            v62 = *((_QWORD*)v59 + 1) + 32 * v60;
          }
          Section_18dabe0(v62 + 16, v5),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if ((*(_BYTE*)(v47 + 16) & 0x7F) == 8) {
        v65 = *(unsigned int**)(v47 + 17);
        v108_.v108 = "ExportContentsRule";
        v108_.v109 = 18;
        v66 = game_6b7f00(v65, 0, v65, v65[1], (__int64*)&v108_.v108),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v67 != v65[1]) {
          v68 = *v66;
          if (v67 >= v68) {
            v70 = v67 - v68;
            v71 = __clz(v70 + 16);
            v69 = *(_QWORD*)(*((_QWORD*)v66 + 2) + 8 * (27 - v71) + 8) +
                  32LL * (unsigned int)(v70 - *((_DWORD*)GameData_212ce38 + 28 -
                                                v71));
          }
          else {
            v69 = *((_QWORD*)v66 + 1) + 32 * v67;
          }
          Section_18dabe0(v69 + 16, v6),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
      if ((*(_BYTE*)(v47 + 16) & 0x7F) == 8) {
        v72 = *(unsigned int**)(v47 + 17);
        v108_.v108 = "Contents";
        v108_.v109 = 8;
        v73 = game_6b7f00(v72, 0, v72, v72[1], (__int64*)&v108_.v108),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v74 != v72[1]) {
          v75 = *v73;
          if (v74 >= v75) {
            v77 = v74 - v75;
            v78 = __clz(v77 + 16);
            v76 = *(_QWORD*)(*((_QWORD*)v73 + 2) + 8 * (27 - v78) + 8) +
                  32LL * (unsigned int)(v77 - *((_DWORD*)GameData_212ce38 + 28 -
                                                v78));
          }
          else {
            v76 = *((_QWORD*)v73 + 1) + 32 * v74;
          }
          Section_18dabe0(v76 + 16, v82),
              v21 = COERCE_AS(__typeof__(v21),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v38 = COERCE_AS(__typeof__(v38),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v45 = COERCE_AS(__typeof__(v45),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v60 = COERCE_AS(__typeof__(v60),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v74 = COERCE_AS(__typeof__(v74),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
      }
    }
  }
  Value_7f50((__int64*)&v83_.v83),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_634d80(*(_QWORD*)(v14 + 8), v14),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v79 = v83_.v89;
  v83_.v89 = nullptr;
  if (v79 != nullptr) {
    v80 = *v79;
    if ((unsigned int)(v80 - 6) <= 4) {
      GameRoutine_6b55a0((__int64)v79, v80),
          v21 = COERCE_AS(__typeof__(v21),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v31 = COERCE_AS(__typeof__(v31),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v38 = COERCE_AS(__typeof__(v38),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v45 = COERCE_AS(__typeof__(v45),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v52 = COERCE_AS(__typeof__(v52),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v60 = COERCE_AS(__typeof__(v60),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v74 = COERCE_AS(__typeof__(v74),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v81 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v81 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v81, (__int64)v79),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v31 = COERCE_AS(__typeof__(v31),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v38 = COERCE_AS(__typeof__(v38),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v45 = COERCE_AS(__typeof__(v45),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v52 = COERCE_AS(__typeof__(v52),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v60 = COERCE_AS(__typeof__(v60),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v74 = COERCE_AS(__typeof__(v74),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  Value_77d0(&v83_.v83),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v31 = COERCE_AS(__typeof__(v31),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v38 = COERCE_AS(__typeof__(v38),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v45 = COERCE_AS(__typeof__(v45),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v52 = COERCE_AS(__typeof__(v52),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v60 = COERCE_AS(__typeof__(v60),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v74 = COERCE_AS(__typeof__(v74),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return ((__int64 (*)(__int64**))v96_.v96[3])(&v96_.v96);
}

#pragma GCC visibility pop
