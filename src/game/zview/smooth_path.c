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
__int64 SmoothPath_d930a0(__int64 result);
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
float** SmoothPath_d92a40(float** result);
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
__int64 SmoothPath_Unknown5(__int64 a1, __int64 a2);

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
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 16;
    } while (v4 != v1);
    v6 = a1[7];
    a1[8] = v1;
    if (v6 != 0) {
    LABEL_9:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7);
    }
  }
  v8 = a1[6];
  *a1 = &game_zview_PathBase_vtable;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
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
  nn_mem_StandardAllocator_Free_alt1(v10 + v11);
}

__int64 SmoothPath_d92360(__int64* a1, int a2)
{
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  char* v16;
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
  char* v48;
  __int64 v49;
  signed __int64 v50;
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
    v16 = (char*)v8 - v15;
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
        v22 = (__int64*)&v16[v21];
        v23 = (atomic_ullong*)(v5 + 8);
        v24 = v21 + 16 * v20;
        *v22 = v7;
        v22[1] = v5;
        v25 = (__int64)&v16[v21 + -16 * v17];
        v26 = (__int64)&v16[v21 + 16];
        atomic_fetch_add_explicit(v23, 1u, memory_order_relaxed);
        memcpy(v25, v15, v16);
        a1[7] = v25;
        a1[8] = v26;
        a1[9] = v24;
        if (v15 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v27);
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
  v10 = (__int64*)a1[7];
  v8 = (__int64*)a1[8];
  if (a2 <= 0) {
    v11 = (__int64*)a1[7];
  }
  else {
    v11 = &v10[2 * (unsigned int)(a2 - 1) + 2];
  }
  v12 = a1[9];
  if ((unsigned __int64)v8 >= v12) {
    v28 = (((char*)v8 - (char*)v10) >> 4) + 1;
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
    v33 = (char*)(v31 + (char*)v11 - (char*)v10);
    if ((char*)v11 - (char*)v10 == v30) {
      if (v11 == v10) {
        v44 = fw_memory_HeapManager_Allocate_alt1(*v4, 16, 16, 0);
        v32 = v44 + 16;
        v33 = (char*)v44;
        if (v31 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v45);
        }
      }
      else {
        v33 -=
            16 * (((((char*)v11 - (char*)v10) >> 4) + 1 +
                   ((unsigned __int64)((((char*)v11 - (char*)v10) >> 4) + 1) >>
                    63)) >>
                  1);
      }
    }
    *(_QWORD*)v33 = v7;
    *((_QWORD*)v33 + 1) = v5;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    memcpy(v33 + 16, v11, a1[8] - (_QWORD)v11);
    v46 = a1[7];
    v47 = a1[8];
    a1[8] = (__int64)v11;
    v48 = (char*)v11 - v46;
    v49 = v47 - (_QWORD)v11;
    v50 = v33 - ((char*)v11 - v46);
    v51 = &v33[v49 + 16];
    memcpy(v50, v46, v48);
    v52 = a1[7];
    a1[7] = v50;
    a1[8] = (__int64)v51;
    a1[9] = v32;
    if (v52 != 0) {
      v53 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v53);
    }
  }
  else {
    if (v11 == v8) {
      goto LABEL_3;
    }
    v13 = v8 - 2;
    if ((unsigned __int64)v8 < 0x10) {
      v14 = (__int64*)a1[8];
    }
    else {
      *v8 = *v13;
      v8[1] = *(v8 - 1);
      v14 = v8 + 2;
      *v13 = 0;
      *(v8 - 1) = 0;
    }
    a1[8] = (__int64)v14;
    if (v8 != v11 + 2) {
      v34 = v8 - 1;
      do {
        v35 = *(v13 - 2);
        v36 = *(v13 - 1);
        v13 -= 2;
        *v13 = 0;
        v13[1] = 0;
        v37 = *v34;
        *(v34 - 1) = v35;
        *v34 = v36;
        if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak(v37);
        }
        v34 -= 2;
      } while (v13 != v11);
      v14 = (__int64*)a1[8];
    }
    v38 = &v61_.v61 < v11 || &v61_.v61 >= v14;
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
    v43 = v11[1];
    *v11 = v41;
    v11[1] = v42;
    if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
      std___1___shared_weak_count___release_weak(v43);
    }
  }
LABEL_62:
  if (*((_BYTE*)a1 + 12) == 1) {
    SmoothPath_d92a40_alt1((__int64)a1);
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
  game_zview_d95860(a1);
  result = v61_.v61;
  v59 = v61_.v62;
  if (v61_.v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61_.v62 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    v60 = result;
    (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
    std___1___shared_weak_count___release_weak(v59);
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
    SmoothPath_d930a0(a1);
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
    SmoothPath_d930a0(a1);
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

float** SmoothPath_d92a40(float** result)
{

#pragma clang fp contract(off)
  float* v1;
  float* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  float** v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float* v12;
  __int64 v16;
  float* v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  __int64 v24;
  float* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  float* v43;
  float* v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  float* v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  float* v71;
  __int64 v72;
  __int64 v73;
  float* v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  char v78;
  float* v79;
  __int64 v80;
  unsigned int v81;
  __int64 v82;
  float* v83;
  float* v84;
  float* v85;
  unsigned __int64 v86;
  float* v90;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64* v99;
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
  _QWORD* v111;
  __int64 v112;
  __int64 v113;
  _QWORD* v114;
  __int64 v115;
  __int64 v116;
  _QWORD* v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  _QWORD* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  _QWORD* v130;
  float* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  _QWORD* v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  unsigned __int64 v139;
  __int64 v140;
  int v141;
  struct {
    float* v142;
    float* v143;
    float* v144;
  } v142_;
  struct {
    float* v145;
    float* v146;
    float* v147;
  } v145_;
  struct {
    float* v148;
    float* v149;
    float* v150;
  } v148_;

  v2 = result[7];
  v1 = result[8];
  v3 = (char*)v1 - (char*)v2;
  if (v1 == v2) {
    return result;
  }
  v4 = v3 >> 4;
  v5 = result;
  v148_.v149 = nullptr;
  v148_.v150 = nullptr;
  v148_.v148 = nullptr;
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
    v148_.v148 = v12;
    v148_.v150 = &v12[2 * v10];
    memset_alt1(v12, 0, 24 * ((v11 - 24) / 0x18uLL) + 24);
    v148_.v149 = v148_.v150;
  }
  else {
    v9 = (int)v4 + 2 * v7;
    v12 = nullptr;
  }
  v16 = (v3 >> 4) & 3;
  if ((int)v4 >= 2) {
    v17 = v5[7];
    v18 = v7 + v4;
    v19 = v4 - v6;
    if (v7 <= 1) {
      v20 = 1;
    }
    else {
      v20 = v6 - 1;
    }
    if ((_DWORD)v4 == 2) {
      v21 = 0;
      if ((v20 & 1) == 0) {
        goto LABEL_22;
      }
    }
    else {
      v22 = v19 + 2;
      v23 = v17 + 4;
      v24 = 0;
      v25 = v12;
      do {
        v24 -= 2;
        v26 = *(_QWORD**)&v17[4 * v22 - 4];
        v27 = v26[2];
        v28 = v26[3];
        v29 = v26[4];
        *((_QWORD*)v25 + 1) = v28;
        *((_QWORD*)v25 + 2) = v29;
        *(_QWORD*)v25 = v27;
        v30 = &v25[6 * v18];
        v31 = (_QWORD*)*(v23 - 2);
        v32 = v31[2];
        v33 = v31[3];
        v34 = v31[4];
        *((_QWORD*)v30 + 1) = v33;
        *((_QWORD*)v30 + 2) = v34;
        *(_QWORD*)v30 = v32;
        v35 = 4LL * v22;
        v22 += 2;
        v36 = *(_QWORD**)&v17[v35];
        v37 = v36[2];
        v38 = v36[3];
        v39 = v36[4];
        *((_QWORD*)v25 + 4) = v38;
        *((_QWORD*)v25 + 5) = v39;
        *((_QWORD*)v25 + 3) = v37;
        v25 += 12;
        v40 = (_QWORD*)*v23;
        v23 += 4;
        v41 = v40[2];
        v42 = v40[4];
        *((_QWORD*)v30 + 4) = v40[3];
        *((_QWORD*)v30 + 5) = v42;
        *((_QWORD*)v30 + 3) = v41;
      } while (-(__int64)(v20 & 0xFFFFFFFE) != v24);
      v21 = -v24;
      if ((v20 & 1) == 0) {
      LABEL_22:
        if (((v3 >> 4) & 0x7FFFFFFF) - 1 >= 3) {
          v54 = v17 + 8;
          v55 = 0;
          v56 = &v12[6 * v7 + 12];
          do {
            v57 = (_QWORD*)*(v54 - 4);
            v55 -= 4;
            v58 = v57[2];
            v59 = v57[3];
            v60 = v57[4];
            *((_QWORD*)v56 - 5) = v59;
            *((_QWORD*)v56 - 4) = v60;
            *((_QWORD*)v56 - 6) = v58;
            v61 = (_QWORD*)*(v54 - 2);
            v62 = v61[2];
            v63 = v61[3];
            v64 = v61[4];
            *((_QWORD*)v56 - 2) = v63;
            *((_QWORD*)v56 - 1) = v64;
            *((_QWORD*)v56 - 3) = v62;
            v65 = *(_QWORD*)(*v54 + 16LL);
            v66 = *(_QWORD*)(*v54 + 32LL);
            *((_QWORD*)v56 + 1) = *(_QWORD*)(*v54 + 24LL);
            *((_QWORD*)v56 + 2) = v66;
            *(_QWORD*)v56 = v65;
            v67 = (_QWORD*)v54[2];
            v54 += 8;
            v68 = v67[2];
            v69 = v67[3];
            v70 = v67[4];
            *((_QWORD*)v56 + 4) = v69;
            *((_QWORD*)v56 + 5) = v70;
            *((_QWORD*)v56 + 3) = v68;
            v56 += 24;
          } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v55);
          v53 = -v55;
          if (v16 == 0) {
            goto LABEL_30;
          }
        }
        else {
          v53 = 0;
          if (v16 == 0) {
          LABEL_30:
            v78 = 1;
            goto LABEL_32;
          }
        }
        v71 = &v17[4 * v53];
        v72 = 6 * v53;
        v73 = (v3 >> 4) & 3;
        v74 = &v12[6 * v7 + v72];
        do {
          v75 = *(_QWORD**)v71;
          v71 += 4;
          --v73;
          v76 = v75[2];
          v77 = v75[4];
          *((_QWORD*)v74 + 1) = v75[3];
          *((_QWORD*)v74 + 2) = v77;
          *(_QWORD*)v74 = v76;
          v74 += 6;
        } while (v73 != 0);
        goto LABEL_30;
      }
    }
    v43 = &v12[6 * v21];
    v44 = &v12[6 * v18 + 6 * v21];
    v45 = *(_QWORD**)&v17[4 * v19 + 4 + 4 * (int)v21];
    v46 = v45[2];
    v47 = v45[3];
    v48 = v45[4];
    *((_QWORD*)v43 + 1) = v47;
    *((_QWORD*)v43 + 2) = v48;
    *(_QWORD*)v43 = v46;
    v49 = *(_QWORD**)&v17[4 * v21];
    v50 = v49[2];
    v51 = v49[3];
    v52 = v49[4];
    *((_QWORD*)v44 + 1) = v51;
    *((_QWORD*)v44 + 2) = v52;
    *(_QWORD*)v44 = v50;
    goto LABEL_22;
  }
  if ((_DWORD)v4 == 1) {
    v17 = v5[7];
    goto LABEL_22;
  }
  v78 = 0;
LABEL_32:
  v140 = (v3 >> 4) & 0x7FFFFFFF;
  v141 = v6 - 1;
  v139 = v3;
  v145_.v146 = nullptr;
  v145_.v147 = nullptr;
  v145_.v145 = nullptr;
  if ((_DWORD)v9 != 0) {
    v79 = v12;
    v80 = 3 * v9;
    v81 = v9;
    v82 = 24 * v9;
    v83 = (float*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v9, 16, 0);
    v84 = &v83[6 * v9];
    v85 = v83;
    v145_.v145 = v83;
    v145_.v147 = &v83[2 * v80];
    v86 = 24 * ((v82 - 24) / 0x18uLL) + 24;
    memset_alt1(v83, 0, v86);
    v145_.v146 = v84;
    v90 = (float*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v82, 16, 0);
    v142_.v142 = v90;
    v142_.v144 = &v90[2 * v80];
    memset_alt1(v90, 0, v86);
    v142_.v143 = v142_.v144;
    v12 = v79;
    SmoothPath_d93540(&v148_.v148, &v145_.v145, &v142_.v142, v81);
    if ((v78 & 1) == 0) {
    LABEL_44:
      v142_.v143 = v90;
      v136 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v136 = 56;
      }
      result = (float**)nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v136);
      if (v85 != nullptr) {
        v137 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v137 = 56;
        }
        result = (float**)nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v137);
      }
      goto LABEL_50;
    }
  LABEL_36:
    if ((unsigned __int64)(v140 - 1) >= 3) {
      v95 = 12;
      v96 = 0;
      v97 = 24LL * v141 + 48;
      v98 = (__int64*)((char*)v90 + v97);
      v99 = (__int64*)((char*)v85 + v97);
      do {
        v100 = *(v99 - 6);
        v96 -= 4;
        v101 = *(v99 - 4);
        v102 = *(_QWORD**)&v5[7][v95 - 12];
        v102[9] = *(v99 - 5);
        v102[10] = v101;
        v102[8] = v100;
        v103 = *(v98 - 6);
        v104 = *(v98 - 4);
        v105 = *(_QWORD**)&v5[7][v95 - 12];
        v105[12] = *(v98 - 5);
        v105[13] = v104;
        v105[11] = v103;
        v106 = *(v99 - 3);
        v107 = *(v99 - 1);
        v108 = *(_QWORD**)&v5[7][v95 - 8];
        v108[9] = *(v99 - 2);
        v108[10] = v107;
        v108[8] = v106;
        v109 = *(v98 - 3);
        v110 = *(v98 - 1);
        v111 = *(_QWORD**)&v5[7][v95 - 8];
        v111[12] = *(v98 - 2);
        v111[13] = v110;
        v111[11] = v109;
        v112 = *v99;
        v113 = v99[2];
        v114 = *(_QWORD**)&v5[7][v95 - 4];
        v114[9] = v99[1];
        v114[10] = v113;
        v114[8] = v112;
        v115 = *v98;
        v116 = v98[2];
        v117 = *(_QWORD**)&v5[7][v95 - 4];
        v117[12] = v98[1];
        v117[13] = v116;
        v117[11] = v115;
        v118 = v99[3];
        v119 = v99[4];
        v120 = v99[5];
        v99 += 12;
        v121 = *(_QWORD**)&v5[7][v95];
        v121[9] = v119;
        v121[10] = v120;
        v121[8] = v118;
        v122 = v98[3];
        v123 = v98[4];
        v124 = v98[5];
        v98 += 12;
        v125 = *(_QWORD**)&v5[7][v95];
        v95 += 16;
        v125[12] = v123;
        v125[13] = v124;
        v125[11] = v122;
      } while (-4LL * ((v139 >> 6) & 0x1FFFFFFF) != v96);
      v94 = -v96;
      if (v16 == 0) {
        goto LABEL_44;
      }
    }
    else {
      v94 = 0;
      if (v16 == 0) {
        goto LABEL_44;
      }
    }
    v126 = 4 * v94;
    v127 = 6 * (v94 + v141);
    do {
      --v16;
      v128 = *(_QWORD*)&v85[v127];
      v129 = *(_QWORD*)&v85[v127 + 4];
      v130 = *(_QWORD**)&v5[7][v126];
      v130[9] = *(_QWORD*)&v85[v127 + 2];
      v130[10] = v129;
      v130[8] = v128;
      v131 = &v90[v127];
      v127 += 6;
      v132 = *(_QWORD*)v131;
      v133 = *((_QWORD*)v131 + 1);
      v134 = *((_QWORD*)v131 + 2);
      v135 = *(_QWORD**)&v5[7][v126];
      v126 += 4;
      v135[12] = v133;
      v135[13] = v134;
      v135[11] = v132;
    } while (v16 != 0);
    goto LABEL_44;
  }
  v142_.v143 = nullptr;
  v142_.v144 = nullptr;
  v142_.v142 = nullptr;
  result = SmoothPath_d93540(&v148_.v148, &v145_.v145, &v142_.v142, 0);
  v85 = nullptr;
  v90 = nullptr;
  if ((v78 & 1) != 0) {
    goto LABEL_36;
  }
LABEL_50:
  if (v12 != nullptr) {
    v138 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v138 = 56;
    }
    return (float**)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v138);
  }
  return result;
}

__int64 SmoothPath_d930a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
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
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;

  v2 = *(_QWORD*)(result + 56);
  v1 = *(_QWORD*)(result + 64);
  v3 = v1 - v2;
  if (v1 == v2) {
    return result;
  }
  v111 = 0;
  v4 = v3 >> 4;
  v5 = result;
  v6 = fw_memory_g_heap_manager_ptr;
  v109 = 0;
  v110 = 0;
  if (v3 << 28 == 0) {
    v12 = 0;
    v20 = 0;
    v25 = 0;
    v107 = 0;
    v108 = 0;
    v105 = 0;
    v106 = 0;
    v103 = 0;
    v104 = 0;
    if ((int)v4 <= 0) {
      return GameRoutine_d93540(&v109, &v106, &v103, (unsigned int)v4);
    }
  LABEL_7:
    v29 = *(_QWORD*)(v5 + 56);
    v30 = (v3 >> 4) & 3;
    v31 = ((v3 >> 4) & 0x7FFFFFFF) - 1;
    if (v31 >= 3) {
      v33 = (_QWORD*)(v29 + 32);
      v34 = (_QWORD*)(v12 + 48);
      v35 = 0;
      do {
        v36 = (_QWORD*)*(v33 - 4);
        v35 -= 4;
        v37 = v36[2];
        v38 = v36[3];
        v39 = v36[4];
        *(v34 - 5) = v38;
        *(v34 - 4) = v39;
        *(v34 - 6) = v37;
        v40 = (_QWORD*)*(v33 - 2);
        v41 = v40[2];
        v42 = v40[3];
        v43 = v40[4];
        *(v34 - 2) = v42;
        *(v34 - 1) = v43;
        *(v34 - 3) = v41;
        v44 = *(_QWORD*)(*v33 + 16LL);
        v45 = *(_QWORD*)(*v33 + 32LL);
        v34[1] = *(_QWORD*)(*v33 + 24LL);
        v34[2] = v45;
        *v34 = v44;
        v46 = (_QWORD*)v33[2];
        v33 += 8;
        v47 = v46[2];
        v48 = v46[3];
        v49 = v46[4];
        v34[4] = v48;
        v34[5] = v49;
        v34[3] = v47;
        v34 += 12;
      } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v35);
      v32 = -v35;
      if (v30 == 0) {
      LABEL_15:
        GameRoutine_d93540(&v109, &v106, &v103, (unsigned int)v4);
        if (v31 >= 3) {
          v57 = (__int64*)(v20 + 48);
          v58 = (__int64*)(v25 + 48);
          v59 = 48;
          v60 = 0;
          do {
            v61 = *(v57 - 6);
            v60 -= 4;
            v62 = *(v57 - 4);
            v63 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 48);
            v63[9] = *(v57 - 5);
            v63[10] = v62;
            v63[8] = v61;
            v64 = *(v58 - 6);
            v65 = *(v58 - 4);
            v66 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 48);
            v66[12] = *(v58 - 5);
            v66[13] = v65;
            v66[11] = v64;
            v67 = *(v57 - 3);
            v68 = *(v57 - 1);
            v69 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 32);
            v69[9] = *(v57 - 2);
            v69[10] = v68;
            v69[8] = v67;
            v70 = *(v58 - 3);
            v71 = *(v58 - 1);
            v72 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 32);
            v72[12] = *(v58 - 2);
            v72[13] = v71;
            v72[11] = v70;
            v73 = *v57;
            v74 = v57[2];
            v75 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 16);
            v75[9] = v57[1];
            v75[10] = v74;
            v75[8] = v73;
            v76 = *v58;
            v77 = v58[2];
            v78 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 16);
            v78[12] = v58[1];
            v78[13] = v77;
            v78[11] = v76;
            v79 = v57[3];
            v80 = v57[4];
            v81 = v57[5];
            v57 += 12;
            v82 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59);
            v82[9] = v80;
            v82[10] = v81;
            v82[8] = v79;
            v83 = v58[3];
            v84 = v58[4];
            v85 = v58[5];
            v58 += 12;
            v86 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59);
            v59 += 64;
            v86[12] = v84;
            v86[13] = v85;
            v86[11] = v83;
          } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v60);
          v56 = -v60;
          if (v30 == 0) {
            goto LABEL_23;
          }
        }
        else {
          v56 = 0;
          if (v30 == 0) {
            goto LABEL_23;
          }
        }
        v87 = 3 * v56;
        v88 = 16 * v56;
        v89 = 8 * v87;
        do {
          --v30;
          v90 = *(_QWORD*)(v20 + v89);
          v91 = *(_QWORD*)(v20 + v89 + 16);
          v92 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v88);
          v92[9] = *(_QWORD*)(v20 + v89 + 8);
          v92[10] = v91;
          v92[8] = v90;
          v93 = (__int64*)(v25 + v89);
          v89 += 24;
          v94 = *v93;
          v95 = v93[1];
          v96 = v93[2];
          v97 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v88);
          v88 += 16;
          v97[12] = v95;
          v97[13] = v96;
          v97[11] = v94;
        } while (v30 != 0);
        goto LABEL_23;
      }
    }
    else {
      v32 = 0;
      if (v30 == 0) {
        goto LABEL_15;
      }
    }
    v50 = (_QWORD*)(v29 + 16 * v32);
    v51 = (_QWORD*)(v12 + 24 * v32);
    v52 = (v3 >> 4) & 3;
    do {
      v53 = (_QWORD*)*v50;
      v50 += 2;
      --v52;
      v54 = v53[2];
      v55 = v53[4];
      v51[1] = v53[3];
      v51[2] = v55;
      *v51 = v54;
      v51 += 3;
    } while (v52 != 0);
    goto LABEL_15;
  }
  v7 = (int)((__int64)v3 >> 4);
  if (v7 >= 0xAAAAAAAAAAAAAABLL) {
    GameRoutine_d95570();
  }
  v8 = 3 * v7;
  v9 = 24 * v7;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24 * v7, 16, 0);
  v11 = v10 + 8 * v8;
  v12 = v10;
  v109 = v10;
  v111 = v11;
  v13 = 24 * ((v9 - 24) / 0x18uLL) + 24;
  memset(v10, 0, v13, v14, v15, v16);
  v17 = *(_QWORD*)v6;
  v110 = v11;
  v18 = fw_memory_HeapManager_Allocate(v17, v9, 16, 0);
  v19 = v18 + 8 * v8;
  v20 = v18;
  v106 = v18;
  v108 = v19;
  memset(v18, 0, v13, v21, v22, v23);
  v24 = *(_QWORD*)v6;
  v107 = v19;
  v25 = fw_memory_HeapManager_Allocate(v24, v9, 16, 0);
  v103 = v25;
  v105 = v25 + 8 * v8;
  memset(v25, 0, v13, v26, v27, v28);
  v104 = v105;
  if ((int)v4 > 0) {
    goto LABEL_7;
  }
  GameRoutine_d93540(&v109, &v106, &v103, (unsigned int)v4);

LABEL_23:
  v98 = *(_QWORD*)v6;
  v104 = v25;
  v99 = 128;
  if (*(_QWORD*)(v98 + 200) == 0) {
    v99 = 56;
  }
  result = nn_mem_StandardAllocator_Free(v98 + v99, v25);
  if (v20 != 0) {
    v100 = *(_QWORD*)v6;
    v107 = v20;
    v101 = 128;
    if (*(_QWORD*)(v100 + 200) == 0) {
      v101 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v100 + v101, v20);
  }
  if (v12 != 0) {
    v102 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v102 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v102, v12);
  }
  return result;
}

__int64 SmoothPath_Unknown5(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int* v11;
  unsigned int* v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  unsigned int* v20;
  __int64 v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 i;
  unsigned __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned int* v52;
  unsigned int* v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  unsigned int* v61;
  unsigned int v62;
  __int64 v63;
  __int64 v64;
  char* v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 j;
  __int64 v86;
  __int64 v87;
  __int64* v88;
  __int64* v89;
  __int64* v90;
  __int64* v91;
  float v92;
  float v93;
  __int64 v94;
  __int64 v95;
  __int64* v96;
  _QWORD* v97;
  __int64 v98;
  float v99;
  float v100;
  float v101;
  bool v104;
  bool v105;
  __int64 v107;
  __int64** v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  char* v112;
  __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  unsigned __int64 v116;
  __int64 v117;
  char* v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  __int64 result;
  __int64 v127;
  __int64* v128;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  struct {
    int8x16_t v134;
    __int64 v135;
    __int64 v136;
    __int64 v137;
    __int64 v138;
    __int64 v139;
  } v134_;
  __int64 v140[2];
  struct {
    __int64 v141;
    __int64 v142;
    __int64 v143;
    char gap176_[8];
    __int64 v144;
    __int64 v145;
  } v141_;
  struct {
    _QWORD v146[7];
    __int16 v147;
    char gap258_[2];
    int v148;
    __int64 v149;
    __int64 v150;
  } v146_;
  struct {
    __int16 v151;
    char gap282_[6];
    __int64 v152;
    __int64* v153;
    __int64 v154;
  } v151_;
  struct {
    __int64 v155;
    __int64 v156;
    __int64 v157;
    char* v158;
  } v155_;
  _QWORD v159[3];

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v151_.v151 = 0;
  v2 = *(_QWORD*)(a2 + 592);
  v3 = *(_QWORD*)(a2 + 576);
  v146_.v147 = 257;
  v146_.v149 = v2;
  v146_.v150 = v3;
  v151_.v152 = 0;
  v151_.v153 = nullptr;
  v151_.v154 = 0;
  v146_.v146[5] = 0;
  v146_.v146[6] = 0;
  v146_.v148 = 0;
  v146_.v146[4] = -1;
  v134_.v138 = 0;
  v134_.v139 = 0;
  v134_.v137 = 0;
  v146_.v146[0] = GameData_212ce30 + 2;
  __builtin_memset(&v146_.v146[1], 0, 24);
  LANES128(v134_.v134).n128_u64[0] = 0x2000;
  LANES128(v134_.v134).n128_u64[1] = 256;
  v134_.v135 = 2048;
  v134_.v136 = 16;
  GameRoutine_6b4ef0(v140, v146_.v146, &v134_.v134),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_QWORD*)(*(_QWORD*)(v141_.v142 +
                            8 * ((unsigned __int64)(v141_.v145 + v141_.v144 -
                                                    1) >>
                                 9)) +
                 8 * ((v141_.v145 + v141_.v144 - 1) & 0x1FF)) == 0) {
    goto LABEL_101;
  }
  v155_.v155 = 0x706F6F4C73690CLL;
  v155_.v158 = (char*)&v151_.v151;
  GfxLoader_c48320((__int64)v140, &v155_.v155),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v155_.v155 & 1) != 0 && v155_.v157 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v155_.v158 = (char*)&v151_.v151 + 1;
  v155_.v155 = 0x5265646F4D736914LL;
  v155_.v156 = 7105647;
  GfxLoader_c48320((__int64)v140, &v155_.v155),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((v155_.v155 & 1) != 0 && v155_.v157 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v8),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v9 = *(_QWORD*)(*(_QWORD*)(v141_.v142 +
                             8 * ((unsigned __int64)(v141_.v145 + v141_.v144 -
                                                     1) >>
                                  9)) +
                  8 * ((v141_.v145 + v141_.v144 - 1) & 0x1FF));
  if (v9 == 0) {
    goto LABEL_101;
  }
  v155_.v155 = 0x6E696F7079617712LL;
  v155_.v156 = 29556;
  if ((*(_BYTE*)v9 & 0x7F) == 8 &&
      (v10 = strlen((char*)&v155_.v155 + 1), v11 = *(unsigned int**)(v9 + 1),
       v159[0] = (char*)&v155_.v155 + 1, v159[1] = v10,
       v12 = game_6b7f00(v11, 0, v11, v11[1], v159), v13 != v11[1])) {
    v15 = *v12;
    if (v13 >= v15) {
      v17 = v13 - v15;
      v18 = __clz(v17 + 16);
      v16 =
          *(_QWORD*)(*((_QWORD*)v12 + 2) + 8 * (27 - v18) + 8) +
          32LL * (unsigned int)(v17 - *((_DWORD*)GameData_212ce38 + 28 - v18));
    }
    else {
      v16 = *((_QWORD*)v12 + 1) + 32 * v13;
    }
    v14 = v16 + 16;
    if ((v155_.v155 & 1) == 0) {
      goto LABEL_25;
    }
  }
  else {
    v14 = 0;
    if ((v155_.v155 & 1) == 0) {
      goto LABEL_25;
    }
  }
  if (v155_.v157 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v19),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_25:
  if (v14 == 0 || (*(_BYTE*)v14 & 0x7F) != 7) {
    goto LABEL_101;
  }
  v20 = *(unsigned int**)(v14 + 1);
  v21 = v151_.v152;
  v22 = v151_.v153;
  v23 = v20[1];
  v24 = (__int64)v151_.v153 - v151_.v152;
  v25 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v151_.v153 - v151_.v152) >> 3);
  v26 = v23 - v25;
  if (v23 <= v25) {
    if (v23 >= v25) {
      goto LABEL_42;
    }
    v38 = v151_.v152 + 24LL * (unsigned int)v23;
    goto LABEL_41;
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v151_.v154 - (__int64)v151_.v153) >> 3) >= v26) {
    memset_alt1(v151_.v153, 0,
                24 * ((24 * (unsigned __int64)(unsigned int)v26 - 24) / 0x18) +
                    24),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v38 = (__int64)&v22[3 * ((24 * (unsigned __int64)(unsigned int)v26 - 24) /
                             0x18) +
                        3];
  LABEL_41:
    v151_.v153 = (__int64*)v38;
    goto LABEL_42;
  }
  if (0x5555555555555556LL * ((v151_.v154 - v151_.v152) >> 3) > v23) {
    v23 = 0x5555555555555556LL * ((v151_.v154 - v151_.v152) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((v151_.v154 - v151_.v152) >> 3) >=
      0x555555555555555LL) {
    v23 = 0xAAAAAAAAAAAAAAALL;
  }
  if (v23 > 0xAAAAAAAAAAAAAAALL) {
  LABEL_170:
    GameRoutine_60a210(),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v27 = 3 * v23;
  v28 = fw_memory_g_heap_manager_ptr;
  v29 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v23, 16, 0),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = v29 + v24;
  v31 = v29;
  v32 = v29 + 8 * v27;
  v33 = 24 * ((24 * (unsigned __int64)(unsigned int)v26 - 24) / 0x18) + 24;
  memset_alt1(v29 + v24, 0, v33),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memcpy(v31, v21, v24),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v151_.v152 = v31;
  v151_.v153 = (__int64*)(v30 + v33);
  v151_.v154 = v32;
  if (v21 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v28 + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v28 + v37),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_42:
  v132 = v20[1];
  if ((_DWORD)v132 != 0) {
    v39 = 0;
    for (i = 0; i != v132; ++i) {
      v41 = *v20;
      if (i >= v41) {
        v43 = i - v41;
        v44 = __clz(v43 + 16);
        v42 = *(_QWORD*)(*((_QWORD*)v20 + 2) + 8 * (27 - v44) + 8) +
              16LL *
                  (unsigned int)(v43 - *((_DWORD*)GameData_212ce38 + 28 - v44));
      }
      else {
        v42 = *((_QWORD*)v20 + 1) + 16 * i;
      }
      v45 = v141_.v142;
      v46 = ((v141_.v143 - v141_.v142) << 6) - 1;
      if (v141_.v143 == v141_.v142) {
        v46 = 0;
      }
      v47 = v141_.v145 + v141_.v144;
      if (v46 == v141_.v145 + v141_.v144) {
        GameRoutine_6b71e0(&v141_.v141),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v45 = v141_.v142;
        v47 = v141_.v145 + v141_.v144;
      }
      *(_QWORD*)(*(_QWORD*)(v45 + 8 * (v47 >> 9)) + 8 * (v47 & 0x1FF)) = v42;
      v48 = v141_.v145++;
      v49 = *(
          _QWORD*)(*(_QWORD*)(v141_.v142 +
                              8 * ((unsigned __int64)(v141_.v144 + v48) >> 9)) +
                   8 * ((v141_.v144 + v48) & 0x1FF));
      if (v49 == 0) {
        goto LABEL_94;
      }
      v50 = v151_.v152;
      v155_.v155 = 0x65756C61760ALL;
      if ((*(_BYTE*)v49 & 0x7F) == 8 &&
          (v51 = strlen((char*)&v155_.v155 + 1),
           v52 = *(unsigned int**)(v49 + 1), v159[0] = (char*)&v155_.v155 + 1,
           v159[1] = v51, v53 = game_6b7f00(v52, 0, v52, v52[1], v159),
           v54 != v52[1])) {
        v56 = *v53;
        if (v54 >= v56) {
          v58 = v54 - v56;
          v59 = __clz(v58 + 16);
          v57 = *(_QWORD*)(*((_QWORD*)v53 + 2) + 8 * (27 - v59) + 8) +
                32LL * (unsigned int)(v58 -
                                      *((_DWORD*)GameData_212ce38 + 28 - v59));
        }
        else {
          v57 = *((_QWORD*)v53 + 1) + 32 * v54;
        }
        v55 = v57 + 16;
        if ((v155_.v155 & 1) != 0) {
        LABEL_62:
          if (v155_.v157 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v60 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v60),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v54 =
                    COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else {
        v55 = 0;
        if ((v155_.v155 & 1) != 0) {
          goto LABEL_62;
        }
      }
      if (v55 != 0 && (*(_BYTE*)v55 & 0x7F) == 7) {
        v61 = *(unsigned int**)(v55 + 1);
        v62 = v61[1];
        v63 = v62 >= 6 ? 6LL : v62;
        if (v62 != 0) {
          v64 = 16 * v63;
          v65 = (char*)(v50 + v39);
          v66 = 0;
          v67 = 0;
          do {
            v68 = *v61;
            if (v67 >= v68) {
              v70 = v67 - v68;
              v71 = __clz(v70 + 16);
              v69 = *(_QWORD*)(*((_QWORD*)v61 + 2) + 8 * (27 - v71) + 8) +
                    16LL * (unsigned int)(v70 - *((_DWORD*)GameData_212ce38 +
                                                  28 - v71));
            }
            else {
              v69 = *((_QWORD*)v61 + 1) + v66;
            }
            v72 = v141_.v142;
            v73 = ((v141_.v143 - v141_.v142) << 6) - 1;
            if (v141_.v143 == v141_.v142) {
              v73 = 0;
            }
            v74 = v141_.v145 + v141_.v144;
            if (v73 == v141_.v145 + v141_.v144) {
              GameRoutine_6b71e0(&v141_.v141),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v54 = COERCE_AS(
                      __typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v72 = v141_.v142;
              v74 = v141_.v145 + v141_.v144;
            }
            *(_QWORD*)(*(_QWORD*)(v72 + 8 * (v74 >> 9)) + 8 * (v74 & 0x1FF)) =
                v69;
            LOWORD(v155_.v155) = 0;
            v155_.v158 = v65;
            ++v141_.v145;
            GameRoutine_c47a00(v140, &v155_.v155),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v54 =
                    COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if ((v155_.v155 & 1) != 0 && v155_.v157 != 0) {
              v75 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v75 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v75),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v54 = COERCE_AS(
                      __typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v76 = v141_.v143;
            v77 = v141_.v145;
            v78 = ((v141_.v143 - v141_.v142) << 6) - 1;
            if (v141_.v143 == v141_.v142) {
              v78 = 0;
            }
            --v141_.v145;
            if ((unsigned __int64)(v78 - (v77 + v141_.v144) + 1) >= 0x400) {
              if (*(_QWORD*)(v141_.v143 - 8) != 0) {
                v79 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v79 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v79),
                    v13 = COERCE_AS(
                        __typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v54 = COERCE_AS(
                        __typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v76 = v141_.v143;
              }
              v141_.v143 = v76 - 8;
            }
            ++v67;
            v66 += 16;
            v65 += 4;
          } while (v64 != v66);
        }
      }
    LABEL_94:
      v80 = v141_.v143;
      v81 = v141_.v145;
      v82 = ((v141_.v143 - v141_.v142) << 6) - 1;
      if (v141_.v143 == v141_.v142) {
        v82 = 0;
      }
      --v141_.v145;
      if ((unsigned __int64)(v82 - (v81 + v141_.v144) + 1) >= 0x400) {
        if (*(_QWORD*)(v141_.v143 - 8) != 0) {
          v83 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v83),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v80 = v141_.v143;
        }
        v141_.v143 = v80 - 8;
      }
      v39 += 24;
    }
  }
LABEL_101:
  if (*(unsigned __int8*)(a1 + 12) != (unsigned __int8)v151_.v151) {
    *(_BYTE*)(a1 + 12) = v151_.v151;
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (*(unsigned __int8*)(a1 + 13) != HIBYTE(v151_.v151)) {
    *(_BYTE*)(a1 + 13) = HIBYTE(v151_.v151);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 32LL))(a1),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v84 = *(_QWORD*)(a1 + 56);
  for (j = *(_QWORD*)(a1 + 64); j != v84; j -= 16) {
    v86 = *(_QWORD*)(j - 8);
    if (v86 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v86 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak(v86),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v54 = COERCE_AS(__typeof__(v54),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v87 = a1;
  v88 = (__int64*)v151_.v152;
  v89 = v151_.v153;
  *(_QWORD*)(a1 + 64) = v84;
  if (v88 != v89) {
    v90 = (__int64*)fw_memory_g_heap_manager_ptr;
    v91 = GameData_212f038[0] + 2;
    v128 = GameData_212f038[0] + 2;
    v130 = GameData_212f040[0] + 2;
    do {
      v92 = *((float*)v88 + 2);
      v93 = *((float*)v88 + 5);
      v133 = *v88;
      v131 = *(__int64*)((char*)v88 + 12);
      v94 = fw_memory_HeapManager_Allocate_alt1(*v90, 136, 16, 0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(_QWORD*)(v94 + 16) = 0;
      *(_QWORD*)v94 = GameData_1fdea98;
      *(_QWORD*)(v94 + 72) = 0;
      *(_QWORD*)(v94 + 80) = 0;
      *(_QWORD*)(v94 + 48) = 0;
      *(_QWORD*)(v94 + 56) = 0;
      *(_DWORD*)(v94 + 64) = 0;
      v95 = *v90;
      *(_QWORD*)(v94 + 8) = 0;
      *(_QWORD*)(v94 + 24) = v91;
      v96 = (__int64*)(v94 + 24);
      *(_QWORD*)(v94 + 32) = v87;
      *(_QWORD*)(v94 + 40) = 0;
      v97 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v95, 32, 16, 0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v98 = *(_QWORD*)(v94 + 80);
      v97[1] = 0;
      v97[2] = 0;
      *v97 = v130;
      *(_QWORD*)(v94 + 72) = v97 + 3;
      *(_QWORD*)(v94 + 80) = v97;
      if (v98 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v98),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v99 = *(float*)(v94 + 40);
      v100 = *(float*)(v94 + 44);
      v101 = *(float*)(v94 + 48);
      *(_QWORD*)(v94 + 24) = game_zview_SmoothPathWayPoint_vtable;
      *(_QWORD*)(v94 + 88) = 0;
      *(_QWORD*)(v94 + 96) = 0;
      *(_QWORD*)(v94 + 104) = 0;
      *(_QWORD*)(v94 + 112) = 0;
      *(_QWORD*)(v94 + 120) = 0;
      *(_QWORD*)(v94 + 128) = 0;
      if (v99 != *(float*)&v133 || v100 != *((float*)&v133 + 1) ||
          v101 != v92) {
        *(_QWORD*)(v94 + 40) = v133;
        *(float*)(v94 + 48) = v92;
        WayPointBase_d964b0((__int64)v96),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (*(_BYTE*)(v87 + 13) == 1) {
        if (*(_BYTE*)(*(_QWORD*)(v94 + 32) + 13LL) != 0) {
          if (*(float*)(v94 + 52) != 0x0.0p+0f ||
              (*(float*)(v94 + 56) == 0x0.0p+0f
                   ? (v104 = *(float*)(v94 + 60) == v93)
                   : (v104 = false),
               !v104)) {
            *(_QWORD*)(v94 + 52) = 0;
          LABEL_142:
            v107 = *v96;
            *(float*)(v94 + 60) = v93;
            (*(void (**)(__int64*))(v107 + 24))(v96),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v54 =
                    COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
      }
      else if ((*(_BYTE*)(*(_QWORD*)(v94 + 32) + 13LL) & 1) == 0) {
        v105 = *(float*)(v94 + 52) == *(float*)&v131 &&
               *(float*)(v94 + 56) == *((float*)&v131 + 1);
        if (!v105 || *(float*)(v94 + 60) != v93) {
          *(_QWORD*)(v94 + 52) = v131;
          goto LABEL_142;
        }
      }
      v108 = *(__int64***)(v87 + 64);
      v109 = *(_QWORD*)(v87 + 72);
      if ((unsigned __int64)v108 >= v109) {
        v111 = *(_QWORD*)(v87 + 56);
        v112 = (char*)v108 - v111;
        v113 = ((__int64)v108 - v111) >> 4;
        v114 = v113 + 1;
        if ((unsigned __int64)(v113 + 1) >> 60 != 0) {
          GameRoutine_d95550(),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v115 = v109 - v111;
        if (v115 >> 3 > v114) {
          v114 = v115 >> 3;
        }
        if ((unsigned __int64)v115 >= 0x7FFFFFFFFFFFFFF0LL) {
          v116 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v116 = v114;
        }
        if (v116 >> 60 != 0) {
          goto LABEL_170;
        }
        v117 = fw_memory_HeapManager_Allocate_alt1(*v90, 16 * v116, 16, 0),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v118 = &v112[v117];
        v119 = v117 + 16 * v116;
        *(_QWORD*)v118 = v96;
        *((_QWORD*)v118 + 1) = v94;
        v120 = (__int64)&v112[v117 + -16 * v113];
        v110 = (__int64)&v112[v117 + 16];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v94 + 8), 1u,
                                  memory_order_relaxed);
        memcpy(v120, v111, v112),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v87 = a1;
        *(_QWORD*)(a1 + 56) = v120;
        *(_QWORD*)(a1 + 64) = v110;
        *(_QWORD*)(a1 + 72) = v119;
        v90 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v111 != 0) {
          v121 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v121 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v121),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v54 = COERCE_AS(__typeof__(v54),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v91 = v128;
      }
      else {
        *v108 = v96;
        v108[1] = (__int64*)v94;
        v110 = (__int64)(v108 + 2);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v94 + 8), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)(v87 + 64) = v110;
      if (atomic_fetch_add((atomic_ullong* volatile)(v94 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v94),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v54 = COERCE_AS(__typeof__(v54),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v88 += 3;
    } while (v88 != v89);
  }
  if (*(_BYTE*)(v87 + 12) == 1) {
    SmoothPath_d92a40((float**)v87),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    SmoothPath_d930a0(v87),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v54 = COERCE_AS(__typeof__(v54),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v122 = *(_QWORD*)(v87 + 56);
  if (*(_QWORD*)(v87 + 64) != v122) {
    v123 = 0;
    v124 = 0;
    do {
      v125 = *(_QWORD*)(v122 + v123);
      v123 += 16;
      *(_DWORD*)(v125 + 40) = v124++;
      v122 = *(_QWORD*)(v87 + 56);
    } while (v124 < (*(_QWORD*)(v87 + 64) - v122) >> 4);
  }
  game_zview_d95860((__int64*)v87),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_6b50a0(v140),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v54 = COERCE_AS(__typeof__(v54),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = (*(__int64 (**)(_QWORD*))(v146_.v146[0] + 24LL))(v146_.v146),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v54 = COERCE_AS(__typeof__(v54),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v151_.v152 != 0) {
    v151_.v153 = (__int64*)v151_.v152;
    v127 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v127 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v127);
  }
  return result;
}

#pragma GCC visibility pop
