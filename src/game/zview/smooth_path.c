#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d92a40(_QWORD);
__int64 GameRoutine_d93540(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d95860(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_d95570(void);
__int64 SmoothPath_Unknown3(__int64 a1);
__int64 SmoothPath_Unknown4(__int64 a1);
__int64 SmoothPath_d930a0_alt1(__int64 result) __asm__("SmoothPath_d930a0");
_QWORD* game_zview_d95860(__int64*);
__int64 SmoothPath_d92360_alt1(__int64, int) __asm__("SmoothPath_d92360");
__int64 SmoothPath_d92a40_alt1(__int64 result) __asm__("SmoothPath_d92a40");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset_alt1(_QWORD, _QWORD, _QWORD) __asm__("memset");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdea98[])();
extern __int64 (*GameData_1fdeb40[])();
extern __int64 (*GameData_1fdebd0[])();
extern __int64 (*game_zview_PathBase_vtable)();
extern __int64 (*game_zview_SmoothPathWayPoint_vtable[])();
extern __int64 (*game_zview_SmoothPath_vtable[])();
extern __int64* GameData_212f028[5];
extern __int64 fw_memory_g_heap_manager;
float** SmoothPath_d93540(float** result, float**, float**, unsigned int);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_d95550();
void __attribute__((noreturn))
GameRoutine_d95570_alt1() __asm__("GameRoutine_d95570");
__int64 SmoothPath_d91350(__int64 a1);
void SmoothPath_Destructor(_QWORD* a1);
__int64 SmoothPath_d92360(__int64* a1, int a2);
_QWORD* SmoothPath_d928a0(__int64 a1);
float** SmoothPath_d92a40_alt2(float** result) __asm__("SmoothPath_d92a40");
_QWORD* GameRoutine_6b4ef0(__int64*, _QWORD*, int8x16_t*);
__int64 GameRoutine_6b50a0(_QWORD*);
__int64 GameRoutine_6b71e0(__int64*);
__int64 GfxLoader_c48320(__int64 result, __int64*);
__int64 WayPointBase_d964b0(__int64);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212ce38;
extern __int64* GameData_212ce30;
extern __int64* GameData_212f038[3];
extern __int64* GameData_212f040[2];
unsigned int* game_6b7f00(unsigned int*, unsigned __int64, unsigned int*,
                          __int64, _QWORD*);
void GameRoutine_c47a00(_QWORD*, __int64*);
__int64 SmoothPath_Unknown5_alt1(__int64 a1,
                                 __int64 a2) __asm__("SmoothPath_Unknown5");
__int64 memset_alt2(__int64, int, unsigned __int64) __asm__("memset");
void SmoothPath_d93540_alt1(float**, float**, float**,
                            unsigned int) __asm__("SmoothPath_d93540");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void SmoothPath_d930a0(__int64 a1);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned int* game_6b7f00_alt1(unsigned int*, unsigned __int64, unsigned int*,
                               __int64, __int64*) __asm__("game_6b7f00");
void GameRoutine_6b4ef0_alt1(__int64*, __int64) __asm__("GameRoutine_6b4ef0");
void GameRoutine_6b50a0_alt1(__int64*) __asm__("GameRoutine_6b50a0");
void GameRoutine_6b71e0_alt1(__int64*) __asm__("GameRoutine_6b71e0");
void GfxLoader_c48320_alt1(_QWORD*, __int64*) __asm__("GfxLoader_c48320");
void game_zview_d95860_alt1(__int64*) __asm__("game_zview_d95860");
void SmoothPath_d92a40(__int64 a1);
void SmoothPath_Unknown5(__int64 a1, __int64 a2);

__int64 SmoothPath_d91350(__int64 a1)
{

#pragma clang fp contract(off)
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  __int64 result;

  v2 = GameData_212f028[0];
  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)a1 = v2 + 2;
  *(_WORD*)(a1 + 12) = 256;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    32, 16, 0);
  v3[2] = 0;
  v4 = *(_QWORD*)(a1 + 48);
  *v3 = GameData_1fdeb40;
  v3[1] = 0;
  *(_QWORD*)(a1 + 40) = v3 + 3;
  *(_QWORD*)(a1 + 48) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)a1 = game_zview_SmoothPath_vtable;
  SmoothPath_d92360_alt1(a1, 0);
  v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  result = SmoothPath_d92360_alt1(a1, v5);
  if (*(float*)(result + 16) != 0x1.0000000000000p+0f ||
      *(float*)(result + 20) != 0x0.0p+0f ||
      *(float*)(result + 24) != 0x0.0p+0f) {
    *(_DWORD*)(result + 24) = 0;
    *(_QWORD*)(result + 16) = 1065353216;
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
  }
  return result;
}

void SmoothPath_Destructor(_QWORD* a1)
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

  v1 = a1[7];
  *a1 = game_zview_SmoothPath_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[8];
    if (v1 == v4) {
      goto LABEL_9;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[7];
    a1[8] = v1;
    v1 = v6;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v3 + v7, v1);
    }
  }
  v8 = a1[6];
  *a1 = &game_zview_PathBase_vtable;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak_alt1(v8);
    v9 = a1[2];
    if (v9 == 0) {
      return;
    }
  }
  else {
    v9 = a1[2];
    if (v9 == 0) {
      return;
    }
  }
  v10 = *(_QWORD*)v3;
  a1[3] = v9;
  v11 = 128;
  if (*(_QWORD*)(v10 + 200) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(v10 + v11, v9);
}

__int64 SmoothPath_d92360(__int64* a1, int a2)
{
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  char* v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  atomic_ullong* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 result;
  __int64 v59;
  __int64 v60;
  struct {
    __int64 v61;
    __int64 v62;
  } v61_;

  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  v5 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
  *(_QWORD*)(v5 + 8) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_DWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 32) = a1;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)v5 = GameData_1fdea98;
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v4, 32, 16, 0);
  v6[2] = 0;
  *(_QWORD*)(v5 + 24) = game_zview_SmoothPathWayPoint_vtable;
  v7 = v5 + 24;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  v61_.v61 = v5 + 24;
  v61_.v62 = v5;
  *v6 = GameData_1fdebd0;
  v6[1] = 0;
  *(_QWORD*)(v5 + 72) = v6 + 3;
  *(_QWORD*)(v5 + 80) = v6;
  if (a2 == (*(unsigned int (**)(__int64*))(*a1 + 24))(a1)-1) {
    v8 = (__int64*)a1[8];
    v9 = a1[9];
    if ((unsigned __int64)v8 < v9) {
    LABEL_3:
      *v8 = v7;
      v8[1] = v5;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      a1[8] = (__int64)(v8 + 2);
      goto LABEL_62;
    }
    v15 = a1[7];
    v16 = (unsigned __int64)v8 - v15;
    v17 = ((__int64)v8 - v15) >> 4;
    v18 = v17 + 1;
    if ((unsigned __int64)(v17 + 1) >> 60 == 0) {
      v19 = v9 - v15;
      if (v19 >> 3 > v18) {
        v18 = v19 >> 3;
      }
      if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF0LL) {
        v20 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v20 = v18;
      }
      if (v20 >> 60 == 0) {
        v21 = fw_memory_HeapManager_Allocate_alt1(*v4, 16 * v20, 16, 0);
        v22 = (__int64*)(v21 + v16);
        v23 = (atomic_ullong*)(v5 + 8);
        v24 = v21 + 16 * v20;
        *v22 = v7;
        v22[1] = v5;
        v25 = v21 + v16 - 16 * v17;
        v26 = v21 + v16 + 16;
        atomic_fetch_add_explicit(v23, 1u, memory_order_relaxed);
        memcpy_alt1(v25, v15, v16);
        a1[7] = v25;
        a1[8] = v26;
        a1[9] = v24;
        if (v15 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v4 + v27, v15);
        }
        a1[8] = v26;
        goto LABEL_62;
      }
    LABEL_73:
      GameRoutine_60a210();
    }
  LABEL_72:
    GameRoutine_d95550();
  }
  v10 = (char*)a1[7];
  v8 = (__int64*)a1[8];
  if (a2 <= 0) {
    v11 = (char*)a1[7];
  }
  else {
    v11 = &v10[16 * (a2 - 1) + 16];
  }
  v12 = a1[9];
  if ((unsigned __int64)v8 >= v12) {
    v28 = (((char*)v8 - v10) >> 4) + 1;
    if (v28 >> 60 != 0) {
      goto LABEL_72;
    }
    v29 = v12 - (_QWORD)v10;
    if (v29 >> 3 > v28) {
      v28 = v29 >> 3;
    }
    if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
      v28 = 0xFFFFFFFFFFFFFFFLL;
    }
    if (v28 != 0) {
      if (v28 >> 60 != 0) {
        goto LABEL_73;
      }
      v30 = 16 * v28;
      v31 = fw_memory_HeapManager_Allocate_alt1(*v4, 16 * v28, 16, 0);
    }
    else {
      v30 = 0;
      v31 = 0;
    }
    v32 = v31 + v30;
    v33 = (char*)(v31 + v11 - v10);
    if (v11 - v10 == v30) {
      if (v11 == v10) {
        v44 = fw_memory_HeapManager_Allocate_alt1(*v4, 16, 16, 0);
        v32 = v44 + 16;
        v33 = (char*)v44;
        if (v31 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v4 + v45, v31);
        }
      }
      else {
        v33 -= 16 * ((((v11 - v10) >> 4) + 1 +
                      ((unsigned __int64)(((v11 - v10) >> 4) + 1) >> 63)) >>
                     1);
      }
    }
    *(_QWORD*)v33 = v7;
    *((_QWORD*)v33 + 1) = v5;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    memcpy_alt1((__int64)(v33 + 16), (__int64)v11, a1[8] - (_QWORD)v11);
    v46 = a1[7];
    v47 = a1[8];
    a1[8] = (__int64)v11;
    v48 = (unsigned __int64)&v11[-v46];
    v49 = v47 - (_QWORD)v11;
    v50 = v33 - &v11[-v46];
    v51 = &v33[v49 + 16];
    memcpy_alt1(v50, v46, v48);
    v52 = a1[7];
    a1[7] = v50;
    a1[8] = (__int64)v51;
    a1[9] = v32;
    if (v52 != 0) {
      v53 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v4 + v53, v52);
    }
  }
  else {
    if (v11 == (char*)v8) {
      goto LABEL_3;
    }
    v13 = (char*)(v8 - 2);
    if ((unsigned __int64)v8 < 0x10) {
      v14 = (__int64*)a1[8];
    }
    else {
      *v8 = *(_QWORD*)v13;
      v8[1] = *(v8 - 1);
      v14 = v8 + 2;
      *(_QWORD*)v13 = 0;
      *(v8 - 1) = 0;
    }
    a1[8] = (__int64)v14;
    if (v8 != (__int64*)(v11 + 16)) {
      v34 = v8 - 1;
      do {
        v35 = *((_QWORD*)v13 - 2);
        v36 = *((_QWORD*)v13 - 1);
        v13 -= 16;
        *(_QWORD*)v13 = 0;
        *((_QWORD*)v13 + 1) = 0;
        v37 = *v34;
        *(v34 - 1) = v35;
        *v34 = v36;
        if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak_alt1(v37);
        }
        v34 -= 2;
      } while (v13 != v11);
      v14 = (__int64*)a1[8];
    }
    v38 = &v61_.v61 < (__int64*)v11 || &v61_.v61 >= v14;
    v39 = 16;
    v40 = 8;
    if (v38) {
      v39 = 0;
    }
    if (!v38) {
      v40 = 24;
    }
    v41 = *(__int64*)((char*)&v61_.v61 + v39);
    v42 = *(__int64*)((char*)&v61_.v61 + v40);
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                memory_order_relaxed);
    }
    v43 = *((_QWORD*)v11 + 1);
    *(_QWORD*)v11 = v41;
    *((_QWORD*)v11 + 1) = v42;
    if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak_alt1(v43);
    }
  }
LABEL_62:
  if (*((_BYTE*)a1 + 12) == 1) {
    SmoothPath_d92a40((__int64)a1);
  }
  else {
    SmoothPath_d930a0((__int64)a1);
  }
  v54 = a1[7];
  if (a1[8] != v54) {
    v55 = 0;
    v56 = 0;
    do {
      v57 = *(_QWORD*)(v54 + v55);
      v55 += 16;
      *(_DWORD*)(v57 + 40) = v56++;
      v54 = a1[7];
    } while (v56 < (a1[8] - v54) >> 4);
  }
  game_zview_d95860_alt1(a1);
  result = v61_.v61;
  v59 = v61_.v62;
  if (v61_.v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61_.v62 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    v60 = result;
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    std___1___shared_weak_count___release_weak_alt1(v59);
    return v60;
  }
  return result;
}

_QWORD* SmoothPath_d928a0(__int64 a1)
{
  __int64 v1;
  __int64 i;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 56);
  for (i = *(_QWORD*)(a1 + 64); i != v1; i -= 16) {
    v4 = *(_QWORD*)(i - 8);
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  v5 = *(unsigned __int8*)(a1 + 12);
  *(_QWORD*)(a1 + 64) = v1;
  if (v5 == 1) {
    SmoothPath_d92a40_alt1(a1);
  }
  else {
    SmoothPath_d930a0_alt1(a1);
  }
  v6 = *(_QWORD*)(a1 + 56);
  if (*(_QWORD*)(a1 + 64) != v6) {
    v7 = 0;
    v8 = 0;
    do {
      v9 = *(_QWORD*)(v6 + v7);
      v7 += 16;
      *(_DWORD*)(v9 + 40) = v8++;
      v6 = *(_QWORD*)(a1 + 56);
    } while (v8 < (*(_QWORD*)(a1 + 64) - v6) >> 4);
  }
  return game_zview_d95860((__int64*)a1);
}

__int64 SmoothPath_Unknown3(__int64 a1)
{
  return (*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) >> 4;
}

__int64 SmoothPath_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(a1 + 12) == 1) {
    GameRoutine_d92a40(a1);
  }
  else {
    SmoothPath_d930a0_alt1(a1);
  }
  v2 = *(_QWORD*)(a1 + 56);
  if (*(_QWORD*)(a1 + 64) != v2) {
    v3 = 0;
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v2 + v3);
      v3 += 16;
      *(_DWORD*)(v5 + 40) = v4++;
      v2 = *(_QWORD*)(a1 + 56);
    } while (v4 < (*(_QWORD*)(a1 + 64) - v2) >> 4);
  }
  return GameRoutine_d95860(a1);
}

void SmoothPath_d92a40(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  __int64 v21;
  float* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  float* v40;
  float* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  __int64 v52;
  float* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  __int64 v70;
  float* v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  char v75;
  float* v76;
  __int64 v77;
  unsigned int v78;
  __int64 v79;
  float* v80;
  float* v81;
  __int64 v82;
  unsigned __int64 v83;
  float* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  _QWORD* v93;
  __int64 v94;
  __int64 v95;
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  __int64 v101;
  _QWORD* v102;
  __int64 v103;
  __int64 v104;
  _QWORD* v105;
  __int64 v106;
  __int64 v107;
  _QWORD* v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  _QWORD* v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  _QWORD* v116;
  __int64 v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  float* v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  unsigned __int64 v130;
  __int64 v131;
  int v132;
  struct {
    float* v133;
    float* v134;
    float* v135;
  } v133_;
  struct {
    float* v136;
    float* v137;
    float* v138;
  } v136_;
  struct {
    float* v139;
    float* v140;
    float* v141;
  } v139_;

  v2 = *(_QWORD*)(a1 + 56);
  v1 = *(_QWORD*)(a1 + 64);
  v3 = v1 - v2;
  if (v1 == v2) {
    return;
  }
  v4 = v3 >> 4;
  v139_.v140 = nullptr;
  v139_.v141 = nullptr;
  v139_.v139 = nullptr;
  if ((int)(v3 >> 4) >= 5) {
    v6 = 5;
  }
  else {
    v6 = v3 >> 4;
  }
  v7 = v6 - 1;
  v8 = (int)v4 + 2 * (v6 - 1);
  if ((_DWORD)v4 + 2 * (v6 - 1) != 0) {
    if ((v8 & 0x80000000) != 0) {
      GameRoutine_d95570_alt1();
    }
    v9 = (int)v4 + 2 * v7;
    v10 = 3 * v8;
    v11 = 24 * v8;
    v12 = (float*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v8, 16, 0);
    v139_.v139 = v12;
    v139_.v141 = &v12[2 * v10];
    memset_alt2((__int64)v12, 0, 24 * ((v11 - 24) / 0x18uLL) + 24);
    v139_.v140 = v139_.v141;
  }
  else {
    v9 = (int)v4 + 2 * v7;
    v12 = nullptr;
  }
  v13 = (v3 >> 4) & 3;
  if ((int)v4 >= 2) {
    v14 = *(_QWORD*)(a1 + 56);
    v15 = v7 + v4;
    v16 = v4 - v6;
    if (v7 <= 1) {
      v17 = 1;
    }
    else {
      v17 = v6 - 1;
    }
    if ((_DWORD)v4 == 2) {
      v18 = 0;
      if ((v17 & 1) == 0) {
        goto LABEL_22;
      }
    }
    else {
      v19 = v16 + 2;
      v20 = (_QWORD*)(v14 + 16);
      v21 = 0;
      v22 = v12;
      do {
        v21 -= 2;
        v23 = *(_QWORD**)(v14 + 16LL * (v19 - 1));
        v24 = v23[2];
        v25 = v23[3];
        v26 = v23[4];
        *((_QWORD*)v22 + 1) = v25;
        *((_QWORD*)v22 + 2) = v26;
        *(_QWORD*)v22 = v24;
        v27 = &v22[6 * v15];
        v28 = (_QWORD*)*(v20 - 2);
        v29 = v28[2];
        v30 = v28[3];
        v31 = v28[4];
        *((_QWORD*)v27 + 1) = v30;
        *((_QWORD*)v27 + 2) = v31;
        *(_QWORD*)v27 = v29;
        v32 = 16LL * v19;
        v19 += 2;
        v33 = *(_QWORD**)(v14 + v32);
        v34 = v33[2];
        v35 = v33[3];
        v36 = v33[4];
        *((_QWORD*)v22 + 4) = v35;
        *((_QWORD*)v22 + 5) = v36;
        *((_QWORD*)v22 + 3) = v34;
        v22 += 12;
        v37 = (_QWORD*)*v20;
        v20 += 4;
        v38 = v37[2];
        v39 = v37[4];
        *((_QWORD*)v27 + 4) = v37[3];
        *((_QWORD*)v27 + 5) = v39;
        *((_QWORD*)v27 + 3) = v38;
      } while (-(__int64)(v17 & 0xFFFFFFFE) != v21);
      v18 = -v21;
      if ((v17 & 1) == 0) {
      LABEL_22:
        if (((v3 >> 4) & 0x7FFFFFFF) - 1 >= 3) {
          v51 = (_QWORD*)(v14 + 32);
          v52 = 0;
          v53 = &v12[6 * v7 + 12];
          do {
            v54 = (_QWORD*)*(v51 - 4);
            v52 -= 4;
            v55 = v54[2];
            v56 = v54[3];
            v57 = v54[4];
            *((_QWORD*)v53 - 5) = v56;
            *((_QWORD*)v53 - 4) = v57;
            *((_QWORD*)v53 - 6) = v55;
            v58 = (_QWORD*)*(v51 - 2);
            v59 = v58[2];
            v60 = v58[3];
            v61 = v58[4];
            *((_QWORD*)v53 - 2) = v60;
            *((_QWORD*)v53 - 1) = v61;
            *((_QWORD*)v53 - 3) = v59;
            v62 = *(_QWORD*)(*v51 + 16LL);
            v63 = *(_QWORD*)(*v51 + 32LL);
            *((_QWORD*)v53 + 1) = *(_QWORD*)(*v51 + 24LL);
            *((_QWORD*)v53 + 2) = v63;
            *(_QWORD*)v53 = v62;
            v64 = (_QWORD*)v51[2];
            v51 += 8;
            v65 = v64[2];
            v66 = v64[3];
            v67 = v64[4];
            *((_QWORD*)v53 + 4) = v66;
            *((_QWORD*)v53 + 5) = v67;
            *((_QWORD*)v53 + 3) = v65;
            v53 += 24;
          } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v52);
          v50 = -v52;
          if (v13 == 0) {
            goto LABEL_30;
          }
        }
        else {
          v50 = 0;
          if (v13 == 0) {
          LABEL_30:
            v75 = 1;
            goto LABEL_32;
          }
        }
        v68 = (_QWORD*)(v14 + 16 * v50);
        v69 = 6 * v50;
        v70 = (v3 >> 4) & 3;
        v71 = &v12[6 * v7 + v69];
        do {
          v72 = (_QWORD*)*v68;
          v68 += 2;
          --v70;
          v73 = v72[2];
          v74 = v72[4];
          *((_QWORD*)v71 + 1) = v72[3];
          *((_QWORD*)v71 + 2) = v74;
          *(_QWORD*)v71 = v73;
          v71 += 6;
        } while (v70 != 0);
        goto LABEL_30;
      }
    }
    v40 = &v12[6 * v18];
    v41 = &v12[6 * v15 + 6 * v18];
    v42 = *(_QWORD**)(v14 + 16LL * (v16 + 1 + (int)v18));
    v43 = v42[2];
    v44 = v42[3];
    v45 = v42[4];
    *((_QWORD*)v40 + 1) = v44;
    *((_QWORD*)v40 + 2) = v45;
    *(_QWORD*)v40 = v43;
    v46 = *(_QWORD**)(v14 + 16 * v18);
    v47 = v46[2];
    v48 = v46[3];
    v49 = v46[4];
    *((_QWORD*)v41 + 1) = v48;
    *((_QWORD*)v41 + 2) = v49;
    *(_QWORD*)v41 = v47;
    goto LABEL_22;
  }
  if ((_DWORD)v4 == 1) {
    v14 = *(_QWORD*)(a1 + 56);
    goto LABEL_22;
  }
  v75 = 0;
LABEL_32:
  v131 = (v3 >> 4) & 0x7FFFFFFF;
  v132 = v6 - 1;
  v130 = v3;
  v136_.v137 = nullptr;
  v136_.v138 = nullptr;
  v136_.v136 = nullptr;
  if ((_DWORD)v9 != 0) {
    v76 = v12;
    v77 = 3 * v9;
    v78 = v9;
    v79 = 24 * v9;
    v80 = (float*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v9, 16, 0);
    v81 = &v80[6 * v9];
    v82 = (__int64)v80;
    v136_.v136 = v80;
    v136_.v138 = &v80[2 * v77];
    v83 = 24 * ((v79 - 24) / 0x18uLL) + 24;
    memset_alt2((__int64)v80, 0, v83);
    v136_.v137 = v81;
    v84 = (float*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v79, 16, 0);
    v133_.v133 = v84;
    v133_.v135 = &v84[2 * v77];
    memset_alt2((__int64)v84, 0, v83);
    v133_.v134 = v133_.v135;
    v12 = v76;
    SmoothPath_d93540_alt1(&v139_.v139, &v136_.v136, &v133_.v133, v78);
    if ((v75 & 1) == 0) {
    LABEL_44:
      v133_.v134 = v84;
      v127 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v127 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, (__int64)v84);
      if (v82 != 0) {
        v128 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v128 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v128, v82);
      }
      goto LABEL_50;
    }
  LABEL_36:
    if ((unsigned __int64)(v131 - 1) >= 3) {
      v86 = 48;
      v87 = 0;
      v88 = 24LL * v132 + 48;
      v89 = (__int64*)((char*)v84 + v88);
      v90 = (__int64*)(v82 + v88);
      do {
        v91 = *(v90 - 6);
        v87 -= 4;
        v92 = *(v90 - 4);
        v93 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86 - 48);
        v93[9] = *(v90 - 5);
        v93[10] = v92;
        v93[8] = v91;
        v94 = *(v89 - 6);
        v95 = *(v89 - 4);
        v96 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86 - 48);
        v96[12] = *(v89 - 5);
        v96[13] = v95;
        v96[11] = v94;
        v97 = *(v90 - 3);
        v98 = *(v90 - 1);
        v99 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86 - 32);
        v99[9] = *(v90 - 2);
        v99[10] = v98;
        v99[8] = v97;
        v100 = *(v89 - 3);
        v101 = *(v89 - 1);
        v102 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86 - 32);
        v102[12] = *(v89 - 2);
        v102[13] = v101;
        v102[11] = v100;
        v103 = *v90;
        v104 = v90[2];
        v105 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86 - 16);
        v105[9] = v90[1];
        v105[10] = v104;
        v105[8] = v103;
        v106 = *v89;
        v107 = v89[2];
        v108 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86 - 16);
        v108[12] = v89[1];
        v108[13] = v107;
        v108[11] = v106;
        v109 = v90[3];
        v110 = v90[4];
        v111 = v90[5];
        v90 += 12;
        v112 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86);
        v112[9] = v110;
        v112[10] = v111;
        v112[8] = v109;
        v113 = v89[3];
        v114 = v89[4];
        v115 = v89[5];
        v89 += 12;
        v116 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v86);
        v86 += 64;
        v116[12] = v114;
        v116[13] = v115;
        v116[11] = v113;
      } while (-4LL * ((v130 >> 6) & 0x1FFFFFFF) != v87);
      v85 = -v87;
      if (v13 == 0) {
        goto LABEL_44;
      }
    }
    else {
      v85 = 0;
      if (v13 == 0) {
        goto LABEL_44;
      }
    }
    v117 = 16 * v85;
    v118 = 24 * (v85 + v132);
    do {
      --v13;
      v119 = *(_QWORD*)(v82 + v118);
      v120 = *(_QWORD*)(v82 + v118 + 16);
      v121 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v117);
      v121[9] = *(_QWORD*)(v82 + v118 + 8);
      v121[10] = v120;
      v121[8] = v119;
      v122 = &v84[v118 / 4];
      v118 += 24LL;
      v123 = *(_QWORD*)v122;
      v124 = *((_QWORD*)v122 + 1);
      v125 = *((_QWORD*)v122 + 2);
      v126 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v117);
      v117 += 16;
      v126[12] = v124;
      v126[13] = v125;
      v126[11] = v123;
    } while (v13 != 0);
    goto LABEL_44;
  }
  v133_.v134 = nullptr;
  v133_.v135 = nullptr;
  v133_.v133 = nullptr;
  SmoothPath_d93540_alt1(&v139_.v139, &v136_.v136, &v133_.v133, 0);
  v82 = 0;
  v84 = nullptr;
  if ((v75 & 1) != 0) {
    goto LABEL_36;
  }
LABEL_50:
  if (v12 != nullptr) {
    v129 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v129 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v129, (__int64)v12);
  }
}

void SmoothPath_d930a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  float* v15;
  float* v16;
  __int64 v17;
  __int64 v18;
  float* v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _QWORD* v83;
  float* v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  _QWORD* v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  struct {
    float* v94;
    float* v95;
    float* v96;
  } v94_;
  struct {
    float* v97;
    __int64 v98;
    float* v99;
  } v97_;
  struct {
    float* v100;
    float* v101;
    float* v102;
  } v100_;

  v2 = *(_QWORD*)(a1 + 56);
  v1 = *(_QWORD*)(a1 + 64);
  v3 = v1 - v2;
  if (v1 == v2) {
    return;
  }
  v100_.v102 = nullptr;
  v4 = v3 >> 4;
  v6 = fw_memory_g_heap_manager_ptr;
  v100_.v100 = nullptr;
  v100_.v101 = nullptr;
  if (v3 << 28 == 0) {
    v12 = 0;
    v17 = 0;
    v19 = nullptr;
    v97_.v98 = 0;
    v97_.v99 = nullptr;
    v94_.v96 = nullptr;
    v97_.v97 = nullptr;
    v94_.v94 = nullptr;
    v94_.v95 = nullptr;
    if ((int)v4 <= 0) {
      SmoothPath_d93540_alt1(&v100_.v100, &v97_.v97, &v94_.v94, v4);
      return;
    }
  LABEL_7:
    v20 = *(_QWORD*)(a1 + 56);
    v21 = (v3 >> 4) & 3;
    v22 = ((v3 >> 4) & 0x7FFFFFFF) - 1;
    if (v22 >= 3) {
      v24 = (_QWORD*)(v20 + 32);
      v25 = (_QWORD*)(v12 + 48);
      v26 = 0;
      do {
        v27 = (_QWORD*)*(v24 - 4);
        v26 -= 4;
        v28 = v27[2];
        v29 = v27[3];
        v30 = v27[4];
        *(v25 - 5) = v29;
        *(v25 - 4) = v30;
        *(v25 - 6) = v28;
        v31 = (_QWORD*)*(v24 - 2);
        v32 = v31[2];
        v33 = v31[3];
        v34 = v31[4];
        *(v25 - 2) = v33;
        *(v25 - 1) = v34;
        *(v25 - 3) = v32;
        v35 = *(_QWORD*)(*v24 + 16LL);
        v36 = *(_QWORD*)(*v24 + 32LL);
        v25[1] = *(_QWORD*)(*v24 + 24LL);
        v25[2] = v36;
        *v25 = v35;
        v37 = (_QWORD*)v24[2];
        v24 += 8;
        v38 = v37[2];
        v39 = v37[3];
        v40 = v37[4];
        v25[4] = v39;
        v25[5] = v40;
        v25[3] = v38;
        v25 += 12;
      } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v26);
      v23 = -v26;
      if (v21 == 0) {
      LABEL_15:
        SmoothPath_d93540_alt1(&v100_.v100, &v97_.v97, &v94_.v94, v4);
        if (v22 >= 3) {
          v48 = (__int64*)(v17 + 48);
          v49 = (__int64*)(v19 + 12);
          v50 = 48;
          v51 = 0;
          do {
            v52 = *(v48 - 6);
            v51 -= 4;
            v53 = *(v48 - 4);
            v54 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50 - 48);
            v54[9] = *(v48 - 5);
            v54[10] = v53;
            v54[8] = v52;
            v55 = *(v49 - 6);
            v56 = *(v49 - 4);
            v57 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50 - 48);
            v57[12] = *(v49 - 5);
            v57[13] = v56;
            v57[11] = v55;
            v58 = *(v48 - 3);
            v59 = *(v48 - 1);
            v60 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50 - 32);
            v60[9] = *(v48 - 2);
            v60[10] = v59;
            v60[8] = v58;
            v61 = *(v49 - 3);
            v62 = *(v49 - 1);
            v63 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50 - 32);
            v63[12] = *(v49 - 2);
            v63[13] = v62;
            v63[11] = v61;
            v64 = *v48;
            v65 = v48[2];
            v66 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50 - 16);
            v66[9] = v48[1];
            v66[10] = v65;
            v66[8] = v64;
            v67 = *v49;
            v68 = v49[2];
            v69 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50 - 16);
            v69[12] = v49[1];
            v69[13] = v68;
            v69[11] = v67;
            v70 = v48[3];
            v71 = v48[4];
            v72 = v48[5];
            v48 += 12;
            v73 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50);
            v73[9] = v71;
            v73[10] = v72;
            v73[8] = v70;
            v74 = v49[3];
            v75 = v49[4];
            v76 = v49[5];
            v49 += 12;
            v77 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v50);
            v50 += 64;
            v77[12] = v75;
            v77[13] = v76;
            v77[11] = v74;
          } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v51);
          v47 = -v51;
          if (v21 == 0) {
            goto LABEL_23;
          }
        }
        else {
          v47 = 0;
          if (v21 == 0) {
            goto LABEL_23;
          }
        }
        v78 = 3 * v47;
        v79 = 16 * v47;
        v80 = 8 * v78;
        do {
          --v21;
          v81 = *(_QWORD*)(v17 + v80);
          v82 = *(_QWORD*)(v17 + v80 + 16);
          v83 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v79);
          v83[9] = *(_QWORD*)(v17 + v80 + 8);
          v83[10] = v82;
          v83[8] = v81;
          v84 = &v19[(unsigned __int64)v80 / 4];
          v80 += 24;
          v85 = *(_QWORD*)v84;
          v86 = *((_QWORD*)v84 + 1);
          v87 = *((_QWORD*)v84 + 2);
          v88 = *(_QWORD**)(*(_QWORD*)(a1 + 56) + v79);
          v79 += 16;
          v88[12] = v86;
          v88[13] = v87;
          v88[11] = v85;
        } while (v21 != 0);
        goto LABEL_23;
      }
    }
    else {
      v23 = 0;
      if (v21 == 0) {
        goto LABEL_15;
      }
    }
    v41 = (_QWORD*)(v20 + 16 * v23);
    v42 = (_QWORD*)(v12 + 24 * v23);
    v43 = (v3 >> 4) & 3;
    do {
      v44 = (_QWORD*)*v41;
      v41 += 2;
      --v43;
      v45 = v44[2];
      v46 = v44[4];
      v42[1] = v44[3];
      v42[2] = v46;
      *v42 = v45;
      v42 += 3;
    } while (v43 != 0);
    goto LABEL_15;
  }
  v7 = (int)((__int64)v3 >> 4);
  if (v7 >= 0xAAAAAAAAAAAAAABLL) {
    GameRoutine_d95570_alt1();
  }
  v8 = 3 * v7;
  v9 = 24 * v7;
  v10 = (float*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v7, 16, 0);
  v11 = &v10[2 * v8];
  v12 = (__int64)v10;
  v100_.v100 = v10;
  v100_.v102 = v11;
  v13 = 24 * ((v9 - 24) / 0x18uLL) + 24;
  memset_alt2((__int64)v10, 0, v13);
  v14 = *(_QWORD*)v6;
  v100_.v101 = v11;
  v15 = (float*)fw_memory_HeapManager_Allocate_alt1(v14, v9, 16, 0);
  v16 = &v15[2 * v8];
  v17 = (__int64)v15;
  v97_.v97 = v15;
  v97_.v99 = v16;
  memset_alt2((__int64)v15, 0, v13);
  v18 = *(_QWORD*)v6;
  v97_.v98 = (__int64)v16;
  v19 = (float*)fw_memory_HeapManager_Allocate_alt1(v18, v9, 16, 0);
  v94_.v94 = v19;
  v94_.v96 = &v19[2 * v8];
  memset_alt2((__int64)v19, 0, v13);
  v94_.v95 = v94_.v96;
  if ((int)v4 > 0) {
    goto LABEL_7;
  }
  SmoothPath_d93540_alt1(&v100_.v100, &v97_.v97, &v94_.v94, v4);
LABEL_23:
  v89 = *(_QWORD*)v6;
  v94_.v95 = v19;
  v90 = 128;
  if (*(_QWORD*)(v89 + 200) == 0) {
    v90 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(v89 + v90, (__int64)v19);
  if (v17 != 0) {
    v91 = *(_QWORD*)v6;
    v97_.v98 = v17;
    v92 = 128;
    if (*(_QWORD*)(v91 + 200) == 0) {
      v92 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v91 + v92, v17);
  }
  if (v12 != 0) {
    v93 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v93 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v6 + v93, v12);
  }
}

void SmoothPath_Unknown5(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned int* v8;
  unsigned int* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 i;
  unsigned __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned int* v46;
  unsigned int* v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  unsigned int* v55;
  unsigned int v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 j;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64* v86;
  __int64* v87;
  float v88;
  float v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  _QWORD* v93;
  __int64 v94;
  float v95;
  float v96;
  float v97;
  bool v100;
  bool v101;
  __int64 v103;
  __int64** v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64** v114;
  unsigned __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64* v123;
  __int64* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129[2];
  struct {
    __int64 v130;
    __int64 v131;
    __int64 v132;
    char gap176_[8];
    __int64 v133;
    __int64 v134;
  } v130_;
  struct {
    _QWORD v135[7];
    __int16 v136;
    char gap258_[2];
    int v137;
    __int64 v138;
    __int64 v139;
  } v135_;
  struct {
    __int16 v140;
    char gap282_[6];
    __int64 v141;
    unsigned __int64 v142;
    __int64 v143;
  } v140_;
  struct {
    __int64 v144;
    __int64 v145;
    __int64 v146;
    char* v147;
  } v144_;
  __int64 v148[3];

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v140_.v140 = 0;
  v2 = *(_QWORD*)(a2 + 592);
  v3 = *(_QWORD*)(a2 + 576);
  v135_.v136 = 257;
  v135_.v138 = v2;
  v135_.v139 = v3;
  v140_.v141 = 0;
  v140_.v142 = 0;
  v140_.v143 = 0;
  v135_.v135[5] = 0;
  v135_.v135[6] = 0;
  v135_.v137 = 0;
  v135_.v135[4] = -1;
  v135_.v135[0] = GameData_212ce30 + 2;
  __builtin_memset(&v135_.v135[1], 0, 24);
  GameRoutine_6b4ef0_alt1(v129, (__int64)v135_.v135),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)(*(_QWORD*)(v130_.v131 +
                            8 * ((unsigned __int64)(v130_.v134 + v130_.v133 -
                                                    1) >>
                                 9)) +
                 8 * ((v130_.v134 + v130_.v133 - 1) & 0x1FF)) == 0) {
    goto LABEL_101;
  }
  v144_.v144 = 0x706F6F4C73690CLL;
  v144_.v147 = (char*)&v140_.v140;
  GfxLoader_c48320_alt1(v129, &v144_.v144),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v144_.v144 & 1) != 0 && v144_.v146 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v144_.v146),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v144_.v147 = (char*)&v140_.v140 + 1;
  v144_.v144 = 0x5265646F4D736914LL;
  v144_.v145 = 7105647;
  GfxLoader_c48320_alt1(v129, &v144_.v144),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v144_.v144 & 1) != 0 && v144_.v146 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v144_.v146),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6 = *(_QWORD*)(*(_QWORD*)(v130_.v131 +
                             8 * ((unsigned __int64)(v130_.v134 + v130_.v133 -
                                                     1) >>
                                  9)) +
                  8 * ((v130_.v134 + v130_.v133 - 1) & 0x1FF));
  if (v6 == 0) {
    goto LABEL_101;
  }
  v144_.v144 = 0x6E696F7079617712LL;
  v144_.v145 = 29556;
  if ((*(_BYTE*)v6 & 0x7F) == 8 &&
      (v7 = strlen_alt1((const char*)&v144_.v144 + 1),
       v8 = *(unsigned int**)(v6 + 1), v148[0] = (__int64)&v144_.v144 + 1,
       v148[1] = v7, v9 = game_6b7f00_alt1(v8, 0, v8, v8[1], v148),
       v10 != v8[1])) {
    v12 = *v9;
    if (v10 >= v12) {
      v14 = v10 - v12;
      v15 = __clz(v14 + 16);
      v13 =
          *(_QWORD*)(*((_QWORD*)v9 + 2) + 8 * (27 - v15) + 8) +
          32LL * (unsigned int)(v14 - *((_DWORD*)GameData_212ce38 + 28 - v15));
    }
    else {
      v13 = *((_QWORD*)v9 + 1) + 32 * v10;
    }
    v11 = v13 + 16;
    if ((v144_.v144 & 1) == 0) {
      goto LABEL_25;
    }
  }
  else {
    v11 = 0;
    if ((v144_.v144 & 1) == 0) {
      goto LABEL_25;
    }
  }
  if (v144_.v146 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v144_.v146),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_25:
  if (v11 == 0 || (*(_BYTE*)v11 & 0x7F) != 7) {
    goto LABEL_101;
  }
  v17 = *(unsigned int**)(v11 + 1);
  v18 = v140_.v141;
  v19 = v140_.v142;
  v20 = v17[1];
  v21 = v140_.v142 - v140_.v141;
  v22 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v140_.v142 - v140_.v141) >> 3);
  v23 = v20 - v22;
  if (v20 <= v22) {
    if (v20 >= v22) {
      goto LABEL_42;
    }
    v32 = v140_.v141 + 24LL * (unsigned int)v20;
    goto LABEL_41;
  }
  if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v140_.v143 - v140_.v142) >> 3) >= v23) {
    memset_alt2(v140_.v142, 0,
                24 * ((24 * (unsigned __int64)(unsigned int)v23 - 24) / 0x18) +
                    24),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v32 = v19 + 24 * ((24 * (unsigned __int64)(unsigned int)v23 - 24) / 0x18) +
          24;
  LABEL_41:
    v140_.v142 = v32;
    goto LABEL_42;
  }
  if (0x5555555555555556LL * ((v140_.v143 - v140_.v141) >> 3) > v20) {
    v20 = 0x5555555555555556LL * ((v140_.v143 - v140_.v141) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v140_.v143 - v140_.v141) >> 3) >=
      0x555555555555555LL) {
    v20 = 0xAAAAAAAAAAAAAAALL;
  }
  if (v20 > 0xAAAAAAAAAAAAAAALL) {
  LABEL_170:
    GameRoutine_60a210(),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v24 = 3 * v20;
  v25 = fw_memory_g_heap_manager_ptr;
  v26 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v20, 16, 0),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v48 = COERCE_AS(__typeof__(v48),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = v26 + v21;
  v28 = v26;
  v29 = v26 + 8 * v24;
  v30 = 24 * ((24 * (unsigned __int64)(unsigned int)v23 - 24) / 0x18) + 24;
  memset_alt2(v26 + v21, 0, v30),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memcpy_alt1(v28, v18, v21),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v140_.v141 = v28;
  v140_.v142 = v27 + v30;
  v140_.v143 = v29;
  if (v18 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v25 + v31, v18),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_42:
  v127 = v17[1];
  if ((_DWORD)v127 != 0) {
    v33 = 0;
    for (i = 0; i != v127; ++i) {
      v35 = *v17;
      if (i >= v35) {
        v37 = i - v35;
        v38 = __clz(v37 + 16);
        v36 = *(_QWORD*)(*((_QWORD*)v17 + 2) + 8 * (27 - v38) + 8) +
              16LL *
                  (unsigned int)(v37 - *((_DWORD*)GameData_212ce38 + 28 - v38));
      }
      else {
        v36 = *((_QWORD*)v17 + 1) + 16 * i;
      }
      v39 = v130_.v131;
      v40 = ((v130_.v132 - v130_.v131) << 6) - 1;
      if (v130_.v132 == v130_.v131) {
        v40 = 0;
      }
      v41 = v130_.v134 + v130_.v133;
      if (v40 == v130_.v134 + v130_.v133) {
        GameRoutine_6b71e0_alt1(&v130_.v130),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v39 = v130_.v131;
        v41 = v130_.v134 + v130_.v133;
      }
      *(_QWORD*)(*(_QWORD*)(v39 + 8 * (v41 >> 9)) + 8 * (v41 & 0x1FF)) = v36;
      v42 = v130_.v134++;
      v43 = *(
          _QWORD*)(*(_QWORD*)(v130_.v131 +
                              8 * ((unsigned __int64)(v130_.v133 + v42) >> 9)) +
                   8 * ((v130_.v133 + v42) & 0x1FF));
      if (v43 == 0) {
        goto LABEL_94;
      }
      v44 = v140_.v141;
      v144_.v144 = 0x65756C61760ALL;
      if ((*(_BYTE*)v43 & 0x7F) == 8 &&
          (v45 = strlen_alt1((const char*)&v144_.v144 + 1),
           v46 = *(unsigned int**)(v43 + 1), v148[0] = (__int64)&v144_.v144 + 1,
           v148[1] = v45, v47 = game_6b7f00_alt1(v46, 0, v46, v46[1], v148),
           v48 != v46[1])) {
        v50 = *v47;
        if (v48 >= v50) {
          v52 = v48 - v50;
          v53 = __clz(v52 + 16);
          v51 = *(_QWORD*)(*((_QWORD*)v47 + 2) + 8 * (27 - v53) + 8) +
                32LL * (unsigned int)(v52 -
                                      *((_DWORD*)GameData_212ce38 + 28 - v53));
        }
        else {
          v51 = *((_QWORD*)v47 + 1) + 32 * v48;
        }
        v49 = v51 + 16;
        if ((v144_.v144 & 1) != 0) {
        LABEL_62:
          if (v144_.v146 != 0) {
            v54 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v54 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v144_.v146),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 =
                    COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else {
        v49 = 0;
        if ((v144_.v144 & 1) != 0) {
          goto LABEL_62;
        }
      }
      if (v49 != 0 && (*(_BYTE*)v49 & 0x7F) == 7) {
        v55 = *(unsigned int**)(v49 + 1);
        v56 = v55[1];
        v57 = v56 >= 6 ? 6LL : v56;
        if (v56 != 0) {
          v58 = 16 * v57;
          v59 = (char*)(v44 + v33);
          v60 = 0;
          v61 = 0;
          do {
            v62 = *v55;
            if (v61 >= v62) {
              v64 = v61 - v62;
              v65 = __clz(v64 + 16);
              v63 = *(_QWORD*)(*((_QWORD*)v55 + 2) + 8 * (27 - v65) + 8) +
                    16LL * (unsigned int)(v64 - *((_DWORD*)GameData_212ce38 +
                                                  28 - v65));
            }
            else {
              v63 = *((_QWORD*)v55 + 1) + v60;
            }
            v66 = v130_.v131;
            v67 = ((v130_.v132 - v130_.v131) << 6) - 1;
            if (v130_.v132 == v130_.v131) {
              v67 = 0;
            }
            v68 = v130_.v134 + v130_.v133;
            if (v67 == v130_.v134 + v130_.v133) {
              GameRoutine_6b71e0_alt1(&v130_.v130),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v48 = COERCE_AS(
                      __typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v66 = v130_.v131;
              v68 = v130_.v134 + v130_.v133;
            }
            *(_QWORD*)(*(_QWORD*)(v66 + 8 * (v68 >> 9)) + 8 * (v68 & 0x1FF)) =
                v63;
            LOWORD(v144_.v144) = 0;
            v144_.v147 = v59;
            ++v130_.v134;
            GameRoutine_c47a00(v129, &v144_.v144),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 =
                    COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v144_.v144 & 1) != 0 && v144_.v146 != 0) {
              v69 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v69 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v144_.v146),
                  v10 = COERCE_AS(
                      __typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v48 = COERCE_AS(
                      __typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v70 = v130_.v132;
            v71 = v130_.v134;
            v72 = ((v130_.v132 - v130_.v131) << 6) - 1;
            if (v130_.v132 == v130_.v131) {
              v72 = 0;
            }
            --v130_.v134;
            if ((unsigned __int64)(v72 - (v71 + v130_.v133) + 1) >= 0x400) {
              v73 = *(_QWORD*)(v130_.v132 - 8);
              if (v73 != 0) {
                v74 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v74 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v73),
                    v10 = COERCE_AS(
                        __typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v48 = COERCE_AS(
                        __typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v70 = v130_.v132;
              }
              v130_.v132 = v70 - 8;
            }
            ++v61;
            v60 += 16;
            v59 += 4;
          } while (v58 != v60);
        }
      }
    LABEL_94:
      v75 = v130_.v132;
      v76 = v130_.v134;
      v77 = ((v130_.v132 - v130_.v131) << 6) - 1;
      if (v130_.v132 == v130_.v131) {
        v77 = 0;
      }
      --v130_.v134;
      if ((unsigned __int64)(v77 - (v76 + v130_.v133) + 1) >= 0x400) {
        v78 = *(_QWORD*)(v130_.v132 - 8);
        if (v78 != 0) {
          v79 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v78),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v75 = v130_.v132;
        }
        v130_.v132 = v75 - 8;
      }
      v33 += 24;
    }
  }
LABEL_101:
  if (*(unsigned __int8*)(a1 + 12) != (unsigned __int8)v140_.v140) {
    *(_BYTE*)(a1 + 12) = v140_.v140;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (*(unsigned __int8*)(a1 + 13) != HIBYTE(v140_.v140)) {
    *(_BYTE*)(a1 + 13) = HIBYTE(v140_.v140);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v80 = *(_QWORD*)(a1 + 56);
  for (j = *(_QWORD*)(a1 + 64); j != v80; j -= 16) {
    v82 = *(_QWORD*)(j - 8);
    if (v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v82 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v82 + 16LL))(v82),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v82),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v48 = COERCE_AS(__typeof__(v48),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v83 = a1;
  v84 = v140_.v141;
  v85 = v140_.v142;
  *(_QWORD*)(a1 + 64) = v80;
  if (v84 != v85) {
    v86 = (__int64*)fw_memory_g_heap_manager_ptr;
    v87 = GameData_212f038[0] + 2;
    v123 = GameData_212f038[0] + 2;
    v125 = GameData_212f040[0] + 2;
    do {
      v88 = *(float*)(v84 + 8);
      v89 = *(float*)(v84 + 20);
      v128 = *(_QWORD*)v84;
      v126 = *(_QWORD*)(v84 + 12);
      v90 = fw_memory_HeapManager_Allocate_alt1(*v86, 136, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(v90 + 16) = 0;
      *(_QWORD*)v90 = GameData_1fdea98;
      *(_QWORD*)(v90 + 72) = 0;
      *(_QWORD*)(v90 + 80) = 0;
      *(_QWORD*)(v90 + 48) = 0;
      *(_QWORD*)(v90 + 56) = 0;
      *(_DWORD*)(v90 + 64) = 0;
      v91 = *v86;
      *(_QWORD*)(v90 + 8) = 0;
      *(_QWORD*)(v90 + 24) = v87;
      v92 = (__int64*)(v90 + 24);
      *(_QWORD*)(v90 + 32) = v83;
      *(_QWORD*)(v90 + 40) = 0;
      v93 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v91, 32, 16, 0),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v94 = *(_QWORD*)(v90 + 80);
      v93[1] = 0;
      v93[2] = 0;
      *v93 = v125;
      *(_QWORD*)(v90 + 72) = v93 + 3;
      *(_QWORD*)(v90 + 80) = v93;
      if (v94 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v94),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v95 = *(float*)(v90 + 40);
      v96 = *(float*)(v90 + 44);
      v97 = *(float*)(v90 + 48);
      *(_QWORD*)(v90 + 24) = game_zview_SmoothPathWayPoint_vtable;
      *(_QWORD*)(v90 + 88) = 0;
      *(_QWORD*)(v90 + 96) = 0;
      *(_QWORD*)(v90 + 104) = 0;
      *(_QWORD*)(v90 + 112) = 0;
      *(_QWORD*)(v90 + 120) = 0;
      *(_QWORD*)(v90 + 128) = 0;
      if (v95 != *(float*)&v128 || v96 != *((float*)&v128 + 1) || v97 != v88) {
        *(_QWORD*)(v90 + 40) = v128;
        *(float*)(v90 + 48) = v88;
        WayPointBase_d964b0((__int64)v92),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (*(_BYTE*)(v83 + 13) == 1) {
        if (*(_BYTE*)(*(_QWORD*)(v90 + 32) + 13LL) != 0) {
          if (*(float*)(v90 + 52) != 0x0.0p+0f ||
              (*(float*)(v90 + 56) == 0x0.0p+0f
                   ? (v100 = *(float*)(v90 + 60) == v89)
                   : (v100 = false),
               !v100)) {
            *(_QWORD*)(v90 + 52) = 0;
          LABEL_142:
            v103 = *v92;
            *(float*)(v90 + 60) = v89;
            (*(void (**)(__int64*))(v103 + 24))(v92),
                v10 =
                    COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v48 =
                    COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else if ((*(_BYTE*)(*(_QWORD*)(v90 + 32) + 13LL) & 1) == 0) {
        v101 = *(float*)(v90 + 52) == *(float*)&v126 &&
               *(float*)(v90 + 56) == *((float*)&v126 + 1);
        if (!v101 || *(float*)(v90 + 60) != v89) {
          *(_QWORD*)(v90 + 52) = v126;
          goto LABEL_142;
        }
      }
      v104 = *(__int64***)(v83 + 64);
      v105 = *(_QWORD*)(v83 + 72);
      if ((unsigned __int64)v104 >= v105) {
        v107 = *(_QWORD*)(v83 + 56);
        v108 = (unsigned __int64)v104 - v107;
        v109 = ((__int64)v104 - v107) >> 4;
        v110 = v109 + 1;
        if ((unsigned __int64)(v109 + 1) >> 60 != 0) {
          GameRoutine_d95550(),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v111 = v105 - v107;
        if (v111 >> 3 > v110) {
          v110 = v111 >> 3;
        }
        if ((unsigned __int64)v111 >= 0x7FFFFFFFFFFFFFF0LL) {
          v112 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v112 = v110;
        }
        if (v112 >> 60 != 0) {
          goto LABEL_170;
        }
        v113 = fw_memory_HeapManager_Allocate_alt1(*v86, 16 * v112, 16, 0),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v114 = (__int64**)(v113 + v108);
        v115 = v113 + 16 * v112;
        *v114 = v92;
        v114[1] = (__int64*)v90;
        v116 = v113 + v108 - 16 * v109;
        v106 = v113 + v108 + 16;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8), 1u,
                                  memory_order_relaxed);
        memcpy_alt1(v116, v107, v108),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v83 = a1;
        *(_QWORD*)(a1 + 56) = v116;
        *(_QWORD*)(a1 + 64) = v106;
        *(_QWORD*)(a1 + 72) = v115;
        v86 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v107 != 0) {
          v117 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v117 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v117, v107),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v48 = COERCE_AS(__typeof__(v48),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v87 = v123;
      }
      else {
        *v104 = v92;
        v104[1] = (__int64*)v90;
        v106 = (__int64)(v104 + 2);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v90 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)(v83 + 64) = v106;
      if (atomic_fetch_add((atomic_ullong* volatile)(v90 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v90 + 16LL))(v90),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak_alt1(v90),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v48 = COERCE_AS(__typeof__(v48),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v84 += 24;
    } while (v84 != v85);
  }
  if (*(_BYTE*)(v83 + 12) == 1) {
    SmoothPath_d92a40(v83),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    SmoothPath_d930a0(v83),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v118 = *(_QWORD*)(v83 + 56);
  if (*(_QWORD*)(v83 + 64) != v118) {
    v119 = 0;
    v120 = 0;
    do {
      v121 = *(_QWORD*)(v118 + v119);
      v119 += 16;
      *(_DWORD*)(v121 + 40) = v120++;
      v118 = *(_QWORD*)(v83 + 56);
    } while (v120 < (*(_QWORD*)(v83 + 64) - v118) >> 4);
  }
  game_zview_d95860_alt1((__int64*)v83),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_6b50a0_alt1(v129),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*))(v135_.v135[0] + 24LL))(v135_.v135),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v48 = COERCE_AS(__typeof__(v48),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v140_.v141 != 0) {
    v140_.v142 = v140_.v141;
    v122 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v122 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v122, v140_.v141),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v48 = COERCE_AS(__typeof__(v48),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

#pragma GCC visibility pop
