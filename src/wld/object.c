#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*wld_Object_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(void);
_QWORD* Object_Destructor_a8a960(_QWORD* result);
__int64 Object_a8ade0(__int64 result);
__int64 Components_a87260(__int64 result, __int64, int);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_2167560;
__int64 Object_a8bfe0_alt1(__int64 result, char a2,
                           char a3) __asm__("Object_a8bfe0");
__int64 Components_a87260_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("Components_a87260");
__int64 Object_a8a6a0_alt1(_QWORD, _QWORD) __asm__("Object_a8a6a0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2f8;
extern _UNKNOWN GameData_21a55c0;
extern _UNKNOWN GameData_21a5680;
extern __int128 GameData_1a837f0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
extern __int128 GameData_21a5670;
extern __int64 as_g_base_frame_counter;
void __attribute__((noreturn)) GameRoutine_a89030(_QWORD);
__attribute__((swiftcall)) void Object_a87520(PSEUDO_X8 x8_, __int64* a1,
                                              unsigned __int64 a2, char a3);
__int64 Object_a8a6a0(__int64 result, __int64 a2);
__int64* Object_a8d360(__int64* result, __int64* a2, __int64* a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void Components_a87260_alt2(__int64, __int64, int) __asm__("Components_a87260");
void Object_a8ade0_alt1(__int64) __asm__("Object_a8ade0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_a89030_alt1() __asm__("GameRoutine_a89030");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Object_a8bfe0(__int64 a1, char a2, char a3);

__attribute__((swiftcall)) void Object_a87520(PSEUDO_X8 x8_, __int64* a1,
                                              unsigned __int64 a2, char a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  unsigned __int64 v5;
  __int64* v8;
  __int64* v9;
  unsigned int v10;
  bool v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char v37;
  unsigned int v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;

  v4 = a4;
  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (a2 != 0) {
    v5 = a2;
    if (a2 >> 61 != 0) {
      GameRoutine_a89030_alt1();
    }
    v8 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * a2, 16, 0);
    v9 = &v8[v5];
    *v4 = (__int64)v8;
    v4[1] = (__int64)v8;
    v4[2] = (__int64)v9;
    nn_os_LockMutex_alt1((__int64)&GameData_2167560);
    v10 = 1;
    v41 = (__int64)v8;
    v40 = v5;
    v37 = a3;
    while (1) {
      v12 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 800, 16, 0);
      Object_a8a6a0(v12, (__int64)a1);
      *(_QWORD*)(v12 + 496) = as_g_base_frame_counter + 88;
      v14 = (__int64*)a1[1];
      v13 = a1[2];
      if ((unsigned __int64)v14 >= v13) {
        break;
      }
      *v14 = v12;
      a1[1] = (__int64)(v14 + 1);
      if ((a3 & 1) == 0) {
        goto LABEL_9;
      }
    LABEL_10:
      if (v8 < v9) {
        *v8++ = v12;
      }
      else {
        v16 = (unsigned __int64)v8 - v41;
        v17 = ((__int64)v8 - v41) >> 3;
        v18 = v17 + 1;
        if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
          v4[2] = (__int64)v9;
          *v4 = v41;
          GameRoutine_a89030_alt1();
        }
        if (((__int64)v9 - v41) >> 2 > v18) {
          v18 = ((__int64)v9 - v41) >> 2;
        }
        if ((unsigned __int64)v9 - v41 >= 0x7FFFFFFFFFFFFFF8LL) {
          v19 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v19 = v18;
        }
        if (v19 != 0) {
          if (v19 >> 61 != 0) {
            v4[2] = (__int64)v9;
            *v4 = v41;
            GameRoutine_60a210_alt1();
          }
          v20 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
        }
        else {
          v20 = 0;
        }
        v33 = v20 + 8 * v19;
        v34 = v20 + v16 - 8 * v17;
        *(_QWORD*)(v20 + v16) = v12;
        v8 = (__int64*)(v20 + v16 + 8);
        memcpy_alt1(v34, v41, v16);
        v4[1] = (__int64)v8;
        if (v41 != 0) {
          v35 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v41);
        }
        v41 = v34;
        v9 = (__int64*)v33;
        v5 = v40;
        a3 = v37;
      }
      v11 = v5 > v10++;
      v4[1] = (__int64)v8;
      if (!v11) {
        goto LABEL_43;
      }
    }
    v21 = *a1;
    v39 = v9;
    v38 = v10;
    v22 = v4;
    v23 = (__int64)v14 - *a1;
    v24 = (v23 >> 3) + 1;
    if (v24 >> 61 != 0) {
      v4[2] = (__int64)v39;
      *v4 = v41;
      GameRoutine_a89030_alt1();
    }
    v25 = v13 - v21;
    if (v25 >> 2 > v24) {
      v24 = v25 >> 2;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFF8LL) {
      v26 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 61 != 0) {
        v4[2] = (__int64)v39;
        *v4 = v41;
        GameRoutine_60a210_alt1();
      }
      v27 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v26, 16, 0);
    }
    else {
      v27 = 0;
    }
    v28 = v27 + 8 * v26;
    v29 = (unsigned __int64)v14 - v21;
    v30 = v27 + v23 - 8 * (v23 >> 3);
    *(_QWORD*)(v27 + v23) = v12;
    v31 = v27 + v23 + 8;
    memcpy_alt1(v30, v21, v29);
    *a1 = v30;
    a1[1] = v31;
    a1[2] = v28;
    if (v21 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v21);
    }
    v4 = v22;
    v9 = v39;
    v5 = v40;
    v10 = v38;
    a1[1] = v31;
    if ((a3 & 1) != 0) {
      goto LABEL_10;
    }
  LABEL_9:
    v15 = *(_DWORD*)(v12 + 280);
    *(_WORD*)(v12 + 300) = 0;
    Components_a87260_alt2((__int64)a1, v12, v15);
    goto LABEL_10;
  }
  nn_os_LockMutex_alt1((__int64)&GameData_2167560);
  v41 = 0;
  v9 = nullptr;
LABEL_43:
  v4[2] = (__int64)v9;
  *v4 = v41;
  {
    nn_os_UnlockMutex_alt1((__int64)&GameData_2167560);
    return;
  }
}

__int64 Object_a8a6a0(__int64 result, __int64 a2)
{
  __int128 v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  *(_QWORD*)(result + 272) = 0;
  *(_QWORD*)(result + 280) = 0;
  *(_BYTE*)(result + 292) = 0;
  *(_DWORD*)(result + 296) = 0;
  *(_BYTE*)(result + 302) = 0;
  *(_QWORD*)(result + 304) = 0;
  *(_QWORD*)(result + 312) = 0;
  *(_QWORD*)(result + 320) = 0;
  *(_QWORD*)(result + 328) = 0;
  *(_QWORD*)result = wld_Object_vtable;
  *(_QWORD*)(result + 8) = a2;
  *(_DWORD*)(result + 288) = 16777473;
  *(_WORD*)(result + 300) = 771;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0) {
    v16 = result;
    v6 = __cxa_guard_acquire(&GameData_21a5680);
    result = v16;
    if (v6 != 0) {
      v7 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v7;
      __cxa_guard_release(&GameData_21a5680);
      result = v16;
    }
  }
  v2 = GameData_21a5670;
  *(_QWORD*)(result + 368) = 0;
  *(_QWORD*)(result + 376) = 0;
  *(_QWORD*)(result + 384) = 0;
  *(_QWORD*)(result + 392) = 0;
  *(_OWORD*)(result + 336) = v2;
  v3 = GameData_1a837f0;
  *(_OWORD*)(result + 352) = GameData_1a837f0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a5680,
                            memory_order_acquire) &
       1) == 0) {
    v17 = result;
    v8 = __cxa_guard_acquire(&GameData_21a5680);
    v3 = GameData_1a837f0;
    v9 = v8;
    result = v17;
    if (v9 != 0) {
      v10 = *((_QWORD*)GameData_212c2f8 + 1);
      *(_QWORD*)&GameData_21a5670 = *(_QWORD*)GameData_212c2f8;
      *((_QWORD*)&GameData_21a5670 + 1) = v10;
      __cxa_guard_release(&GameData_21a5680);
      v3 = GameData_1a837f0;
      result = v17;
    }
  }
  v4 = GameData_21a5670;
  *(_OWORD*)(result + 416) = v3;
  *(_OWORD*)(result + 400) = v4;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0) {
    v18 = result;
    v11 = __cxa_guard_acquire(&GameData_21a55c0);
    result = v18;
    if (v11 != 0) {
      v12 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a55a0 =
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55a0 + 1) = v12;
      v13 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                        (_QWORD)GameData_212c2a0);
      *(_QWORD*)&GameData_21a55b0 =
          *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                      (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a55b0 + 1) = v13;
      v14 = *((_QWORD*)GameData_212c2a0 + 1);
      *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
      *((_QWORD*)&GameData_21a5580 + 1) = v14;
      v15 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
      *(_QWORD*)&GameData_21a5590 =
          *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
      *((_QWORD*)&GameData_21a5590 + 1) = v15;
      __cxa_guard_release(&GameData_21a55c0);
      result = v18;
    }
  }
  v5 = GameData_21a55a0;
  *(_QWORD*)(result + 496) = 0;
  *(_QWORD*)(result + 504) = 0;
  *(_QWORD*)(result + 512) = 0;
  *(_QWORD*)(result + 520) = 0;
  *(_QWORD*)(result + 528) = 0;
  *(_QWORD*)(result + 536) = 0;
  *(_QWORD*)(result + 544) = 0;
  *(_QWORD*)(result + 552) = 0;
  *(_QWORD*)(result + 560) = 0;
  *(_QWORD*)(result + 568) = 0;
  *(_QWORD*)(result + 640) = 0;
  *(_QWORD*)(result + 648) = 0;
  *(_QWORD*)(result + 656) = 0;
  *(_BYTE*)(result + 664) = 0;
  *(_QWORD*)(result + 672) = 0;
  *(_QWORD*)(result + 680) = 0;
  *(_QWORD*)(result + 688) = 0;
  *(_BYTE*)(result + 696) = 0;
  *(_QWORD*)(result + 704) = 0;
  *(_QWORD*)(result + 712) = 0;
  *(_QWORD*)(result + 720) = 0;
  *(_BYTE*)(result + 728) = 0;
  *(_QWORD*)(result + 736) = 0;
  *(_QWORD*)(result + 744) = 0;
  *(_QWORD*)(result + 752) = 0;
  *(_QWORD*)(result + 760) = 0;
  *(_QWORD*)(result + 768) = 0;
  *(_QWORD*)(result + 776) = 0;
  *(_QWORD*)(result + 784) = 0;
  *(_DWORD*)(result + 792) = 0;
  *(_BYTE*)(result + 632) = 0;
  *(_QWORD*)(result + 624) = 0;
  *(_QWORD*)(result + 616) = 0;
  *(_QWORD*)(result + 608) = 0;
  *(_QWORD*)(result + 600) = 0;
  *(_QWORD*)(result + 592) = 0;
  *(_QWORD*)(result + 584) = 0;
  *(_OWORD*)(result + 464) = v5;
  *(_OWORD*)(result + 480) = GameData_21a55b0;
  *(_OWORD*)(result + 432) = GameData_21a5580;
  *(_OWORD*)(result + 448) = GameData_21a5590;
  *(_BYTE*)(result + 576) = 1;
  strcpy((char*)(result + 16), "<noname>");
  *(_QWORD*)(result + 272) = 8;
  return result;
}

_QWORD* Object_Destructor_a8a960(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
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
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v1 = result[67];
  v2 = result;
  *result = wld_Object_vtable;
  v3 = result[66];
  v4 = v1 - v3;
  if ((int)(v4 >> 3) >= 1) {
    v5 = ((v4 >> 3) & 0x7FFFFFFF) - 1;
    do {
      result = *(_QWORD**)(v2[66] + 8 * v5);
      if (result != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      v6 = v5-- + 1;
    } while (v6 > 1);
    v3 = v2[66];
  }
  v2[67] = v3;
  v7 = v2[63];
  v8 = v2[93];
  v2[70] = v2[69];
  v9 = v2[73];
  v2[64] = v7;
  v2[74] = v9;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v11 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v2[94] = v8;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v11 + v12, v8);
  }
  v13 = v2[88];
  if (v13 != 0) {
    v14 = *v10;
    v2[89] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  v16 = v2[84];
  if (v16 != 0) {
    v17 = *v10;
    v2[85] = v16;
    v18 = 128;
    if (*(_QWORD*)(v17 + 200) == 0) {
      v18 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v17 + v18, v16);
  }
  v19 = v2[80];
  if (v19 != 0) {
    v20 = *v10;
    v2[81] = v19;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v20 + v21, v19);
  }
  v22 = v2[76];
  if (v22 != 0) {
    v23 = *v10;
    v2[77] = v22;
    v24 = 128;
    if (*(_QWORD*)(v23 + 200) == 0) {
      v24 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v23 + v24, v22);
  }
  v25 = v2[73];
  if (v25 != 0) {
    v26 = *v10;
    v2[74] = v25;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v26 + v27, v25);
  }
  v28 = v2[69];
  if (v28 != 0) {
    v29 = *v10;
    v2[70] = v28;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v29 + v30, v28);
  }
  v31 = v2[66];
  if (v31 != 0) {
    v32 = *v10;
    v2[67] = v31;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v32 + v33, v31);
  }
  v34 = v2[63];
  if (v34 != 0) {
    v35 = *v10;
    v2[64] = v34;
    v36 = 128;
    if (*(_QWORD*)(v35 + 200) == 0) {
      v36 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v35 + v36, v34);
  }
  return result;
}

__int64 Object_a8ade0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  char v11;
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;
  char v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  _BYTE* v24;
  _QWORD* v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
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
  __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  char* v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  char* v68;
  __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  char v79;
  char v80;
  char v81;

  v1 = result;
  if (*(_BYTE*)(result + 576) == 1) {
    v2 = *(_QWORD*)(result + 552);
    v3 = *(_QWORD*)(result + 560);
    v4 = *(_QWORD*)(result + 600);
    v5 = v3 - v2;
    v6 = *(_QWORD*)(result + 584);
    if (v3 - v2 <= (unsigned __int64)(v4 - v6)) {
      v14 = *(_QWORD*)(result + 592);
      v15 = v14 - v6;
      if (v5 > (unsigned __int64)(v14 - v6)) {
        v16 = v2 + v15;
        if (v14 != v6) {
          result =
              memmove(*(_QWORD*)(result + 584), *(_QWORD*)(result + 552), v15);
          v14 = *(_QWORD*)(v1 + 592);
        }
        if (v3 != v16) {
          result = memmove(v14, v16, v3 - v16);
        }
        v17 = v14 + v3 - v16;
        goto LABEL_28;
      }
      if (v3 != v2) {
        result = memmove(*(_QWORD*)(result + 584), *(_QWORD*)(result + 552),
                         v3 - v2);
      }
    }
    else {
      v7 = v5 >> 3;
      if (v6 != 0) {
        *(_QWORD*)(result + 592) = v6;
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v6);
        v4 = 0;
        *(_QWORD*)(v1 + 592) = 0;
        *(_QWORD*)(v1 + 600) = 0;
        *(_QWORD*)(v1 + 584) = 0;
      }
      if (v7 >> 61 != 0) {
        goto LABEL_124;
      }
      v9 = v4 >> 2;
      if (v4 >> 2 <= v7) {
        v9 = v5 >> 3;
      }
      v10 = (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL ? 0x1FFFFFFFFFFFFFFFLL
                                                         : v9;
      if (v10 >> 61 != 0) {
      LABEL_124:
        GameRoutine_98f290();
      }
      result = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v10, 16, 0);
      v6 = result;
      *(_QWORD*)(v1 + 584) = result;
      *(_QWORD*)(v1 + 592) = result;
      *(_QWORD*)(v1 + 600) = result + 8 * v10;
      if (v3 != v2) {
        result = memcpy(result, v2, v3 - v2);
      }
    }
    v17 = v6 + v5;
  LABEL_28:
    *(_QWORD*)(v1 + 592) = v17;
    v18 = *(_QWORD*)(v1 + 640);
    *(_BYTE*)(v1 + 576) = 0;
    *(_BYTE*)(v1 + 632) = 0;
    *(_BYTE*)(v1 + 664) = 0;
    *(_BYTE*)(v1 + 696) = 0;
    *(_BYTE*)(v1 + 728) = 0;
    *(_QWORD*)(v1 + 648) = v18;
    *(_QWORD*)(v1 + 680) = *(_QWORD*)(v1 + 672);
    *(_QWORD*)(v1 + 712) = *(_QWORD*)(v1 + 704);
    v78 = (__int64*)(v1 + 608);
  LABEL_29:
    v11 = 0;
    v12 = 0;
    *(_QWORD*)(v1 + 616) = *(_QWORD*)(v1 + 608);
    v13 = *(unsigned __int8*)(v1 + 664);
    if ((v13 & 1) != 0) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  v78 = (__int64*)(result + 608);
  if ((*(_BYTE*)(result + 632) & 1) == 0) {
    goto LABEL_29;
  }
  v11 = 1;
  v12 = 1;
  v13 = *(unsigned __int8*)(result + 664);
  if ((v13 & 1) == 0) {
  LABEL_30:
    *(_QWORD*)(v1 + 648) = *(_QWORD*)(v1 + 640);
  }

LABEL_31:
  v19 = *(_BYTE*)(v1 + 696);
  if ((v19 & 1) != 0) {
    v20 = *(_BYTE*)(v1 + 728);
    if ((v20 & 1) != 0) {
    LABEL_33:
      if ((v13 & v12) != 0 && (v19 & 1) != 0) {
        return result;
      }
      goto LABEL_38;
    }
  }
  else {
    *(_QWORD*)(v1 + 680) = *(_QWORD*)(v1 + 672);
    v20 = *(_BYTE*)(v1 + 728);
    if ((v20 & 1) != 0) {
      goto LABEL_33;
    }
  }
  *(_QWORD*)(v1 + 712) = *(_QWORD*)(v1 + 704);

LABEL_38:
  v21 = *(_QWORD**)(v1 + 584);
  v22 = *(_QWORD**)(v1 + 592);
  if (v21 != v22) {
    v80 = v13;
    v81 = v11;
    v79 = v20;
    do {
      v24 = (_BYTE*)*v21;
      if ((v11 & 1) != 0 || v24[17] != 0) {
        if ((v13 & 1) != 0) {
          goto LABEL_76;
        }
      }
      else {
        v28 = *(_QWORD**)(v1 + 616);
        v29 = *(_QWORD*)(v1 + 624);
        if ((unsigned __int64)v28 >= v29) {
          v31 = *v78;
          v32 = (__int64)v28 - *v78;
          v33 = (v32 >> 3) + 1;
          if (v33 >> 61 != 0) {
            goto LABEL_124;
          }
          v34 = v29 - v31;
          if (v34 >> 2 > v33) {
            v33 = v34 >> 2;
          }
          if ((unsigned __int64)v34 >= 0x7FFFFFFFFFFFFFF8LL) {
            v35 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v35 = v33;
          }
          if (v35 != 0) {
            if (v35 >> 61 != 0) {
              goto LABEL_125;
            }
            v36 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v35, 16, 0);
          }
          else {
            v36 = 0;
          }
          v44 = v36 + 8 * v35;
          v45 = v36 + v32 - 8 * (v32 >> 3);
          *(_QWORD*)(v36 + v32) = v24;
          v30 = v36 + v32 + 8;
          result = memcpy(v45, v31, v32);
          *(_QWORD*)(v1 + 608) = v45;
          *(_QWORD*)(v1 + 616) = v30;
          *(_QWORD*)(v1 + 624) = v44;
          if (v31 != 0) {
            v46 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v46 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v31);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        else {
          *v28 = v24;
          v30 = (__int64)(v28 + 1);
        }
        *(_QWORD*)(v1 + 616) = v30;
        if ((v13 & 1) != 0) {
          goto LABEL_76;
        }
      }
      if (v24[18] == 0) {
        v25 = *(_QWORD**)(v1 + 648);
        v26 = *(_QWORD*)(v1 + 656);
        if ((unsigned __int64)v25 >= v26) {
          v37 = *(_QWORD*)(v1 + 640);
          v38 = (char*)v25 - v37;
          v39 = ((__int64)v25 - v37) >> 3;
          v40 = v39 + 1;
          if ((unsigned __int64)(v39 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          v41 = v26 - v37;
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
          v57 = v43 + 8 * v42;
          v58 = (char*)v25 - v37;
          v59 = (__int64)&v38[v43 + -8 * v39];
          *(_QWORD*)&v38[v43] = v24;
          v27 = (__int64)&v38[v43 + 8];
          result = memcpy(v59, v37, v58);
          *(_QWORD*)(v1 + 640) = v59;
          *(_QWORD*)(v1 + 648) = v27;
          *(_QWORD*)(v1 + 656) = v57;
          if (v37 != 0) {
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v60 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v37);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        else {
          *v25 = v24;
          v27 = (__int64)(v25 + 1);
        }
        *(_QWORD*)(v1 + 648) = v27;
        if ((v19 & 1) != 0) {
          goto LABEL_104;
        }
        goto LABEL_77;
      }
    LABEL_76:
      if ((v19 & 1) != 0) {
        goto LABEL_104;
      }
    LABEL_77:
      if (v24[19] == 0) {
        v47 = *(_QWORD**)(v1 + 680);
        v48 = *(_QWORD*)(v1 + 688);
        if ((unsigned __int64)v47 >= v48) {
          v50 = *(_QWORD*)(v1 + 672);
          v51 = (char*)v47 - v50;
          v52 = ((__int64)v47 - v50) >> 3;
          v53 = v52 + 1;
          if ((unsigned __int64)(v52 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          v54 = v48 - v50;
          if (v54 >> 2 > v53) {
            v53 = v54 >> 2;
          }
          if ((unsigned __int64)v54 >= 0x7FFFFFFFFFFFFFF8LL) {
            v55 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v55 = v53;
          }
          if (v55 != 0) {
            if (v55 >> 61 != 0) {
              goto LABEL_125;
            }
            v56 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v55, 16, 0);
          }
          else {
            v56 = 0;
          }
          v61 = v56 + 8 * v55;
          v62 = (char*)v47 - v50;
          v63 = (__int64)&v51[v56 + -8 * v52];
          *(_QWORD*)&v51[v56] = v24;
          v49 = (__int64)&v51[v56 + 8];
          result = memcpy(v63, v50, v62);
          *(_QWORD*)(v1 + 672) = v63;
          *(_QWORD*)(v1 + 680) = v49;
          *(_QWORD*)(v1 + 688) = v61;
          if (v50 != 0) {
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v50);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        else {
          *v47 = v24;
          v49 = (__int64)(v47 + 1);
        }
        *(_QWORD*)(v1 + 680) = v49;
      }
    LABEL_104:
      if ((v20 & 1) == 0 && v24[20] == 0) {
        v65 = *(_QWORD**)(v1 + 712);
        v66 = *(_QWORD*)(v1 + 720);
        if ((unsigned __int64)v65 < v66) {
          *v65 = v24;
          v23 = (__int64)(v65 + 1);
        }
        else {
          v67 = *(_QWORD*)(v1 + 704);
          v68 = (char*)v65 - v67;
          v69 = ((__int64)v65 - v67) >> 3;
          v70 = v69 + 1;
          if ((unsigned __int64)(v69 + 1) >> 61 != 0) {
            goto LABEL_124;
          }
          v71 = v66 - v67;
          if (v71 >> 2 > v70) {
            v70 = v71 >> 2;
          }
          if ((unsigned __int64)v71 >= 0x7FFFFFFFFFFFFFF8LL) {
            v72 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v72 = v70;
          }
          if (v72 != 0) {
            if (v72 >> 61 != 0) {
            LABEL_125:
              GameRoutine_60a210(result);
            }
            v73 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v72, 16, 0);
          }
          else {
            v73 = 0;
          }
          v74 = v73 + 8 * v72;
          v75 = (char*)v65 - v67;
          v76 = (__int64)&v68[v73 + -8 * v69];
          *(_QWORD*)&v68[v73] = v24;
          v23 = (__int64)&v68[v73 + 8];
          result = memcpy(v76, v67, v75);
          *(_QWORD*)(v1 + 704) = v76;
          *(_QWORD*)(v1 + 712) = v23;
          *(_QWORD*)(v1 + 720) = v74;
          if (v67 != 0) {
            v77 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v77 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v67);
          }
          LOBYTE(v13) = v80;
          v11 = v81;
          v20 = v79;
        }
        *(_QWORD*)(v1 + 712) = v23;
      }
      ++v21;
    } while (v21 != v22);
  }
  *(_BYTE*)(v1 + 632) = 1;
  *(_BYTE*)(v1 + 664) = 1;
  *(_BYTE*)(v1 + 696) = 1;
  *(_BYTE*)(v1 + 728) = 1;
  return result;
}

void Object_a8bfe0(__int64 a1, char a2, char a3)
{
  char v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v8;
  __int64** v9;
  __int64** v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((a2 & 1) != 0) {
    v3 = 2;
  }
  else {
    v3 = a3;
  }
  v4 = v3 & 3;
  *(_BYTE*)(a1 + 301) = v3;
  v5 = *(unsigned __int8*)(a1 + 300);
  if (v5 != v4 && v5 == 3 && (*(_BYTE*)(a1 + 302) & 1) == 0) {
    v6 = *(_QWORD*)(a1 + 8);
    nn_os_LockMutex_alt1((__int64)&GameData_2167560),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    Components_a87260_alt2(v6, a1, *(_DWORD*)(a1 + 280)),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_BYTE*)(v6 + 80) = 1;
    nn_os_UnlockMutex_alt1((__int64)&GameData_2167560),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    Object_a8ade0_alt1(a1),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = *(__int64***)(a1 + 584);
    v10 = *(__int64***)(a1 + 592);
    while (v9 != v10) {
      v12 = *v9++;
      v11 = v12;
      v13 = *v12;
      if (*((_BYTE*)v12 + 16) != 0) {
        v14 = 64;
      }
      else {
        v14 = 72;
      }
      (*(void (**)(__int64*, __int64))(v13 + v14))(v11, v8),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
}

__int64* Object_a8d360(__int64* result, __int64* a2, __int64* a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v9;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  int v28;
  __int64* v29;
  __int64* v30;
  __int64* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  _QWORD* v46;
  _QWORD* v47;
  char* v48;
  __int64 v49;
  bool v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  int v56;
  __int64* v57;
  __int64 v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64* v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;

  if (a5 != 0) {
    v9 = a5;
    v13 = result;
    while (a4 > a7 && v9 > a7) {
      if (a4 == 0) {
        return result;
      }
      while (1) {
        v14 = *v13;
        v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
        result =
            (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        if (v15 < (int)result) {
          break;
        }
        ++v13;
        if (--a4 == 0) {
          return result;
        }
      }
      v78 = a3;
      if (a4 >= v9) {
        if (a4 == 1) {
          v68 = *v13;
          *v13 = *a2;
          *a2 = v68;
          return result;
        }
        v77 = a4 / 2;
        v17 = &v13[a4 / 2];
        if (a3 != a2) {
          v23 = a3 - a2;
          v74 = v9;
          v76 = a6;
          a3 = a2;
          do {
            v24 = *v17;
            v25 = &a3[v23 >> 1];
            v27 = *v25;
            v26 = v25 + 1;
            v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
            if (v28 >= (*(int (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24)) {
              v23 >>= 1;
            }
            else {
              a3 = v26;
              v23 += ~(v23 >> 1);
            }
          } while (v23 != 0);
          a6 = v76;
          v9 = v74;
        }
        v16 = a3 - a2;
      }
      else {
        v16 = v9 / 2;
        a3 = &a2[v9 / 2];
        if (v13 == a2) {
          v17 = a2;
        }
        else {
          v75 = a6;
          v71 = v9 / 2;
          v73 = v9;
          v17 = v13;
          v18 = a2 - v13;
          do {
            v19 = &v17[v18 >> 1];
            v21 = *v19;
            v20 = v19 + 1;
            v22 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 16LL))(*a3);
            if (v22 < (*(int (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21)) {
              v18 >>= 1;
            }
            else {
              v17 = v20;
              v18 += ~(v18 >> 1);
            }
          } while (v18 != 0);
          a6 = v75;
          v16 = v71;
          v9 = v73;
        }
        v77 = v17 - v13;
      }
      v29 = a3;
      if (v17 != a2) {
        v29 = v17;
        if (a2 != a3) {
          v30 = v17 + 1;
          if (v17 + 1 == a2) {
            v72 = v16;
            v37 = *v17;
            memmove(v17, v30, (char*)a3 - (char*)a2);
            v29 = (__int64*)((char*)v17 + ((char*)a3 - (char*)a2));
            *v29 = v37;
            v16 = v72;
          }
          else {
            v31 = a2 + 1;
            if (a2 + 1 == a3) {
              v38 = v16;
              v39 = *(a3 - 1);
              v29 = v17 + 1;
              if (a3 - 1 != v17) {
                memmove(v17 + 1, v17, (char*)(a3 - 1) - (char*)v17);
              }
              *v17 = v39;
              v16 = v38;
            }
            else {
              v32 = (char*)((char*)a2 - (char*)v17);
              v33 = a2 - v17;
              v34 = a3 - a2;
              if (v33 == v34) {
                do {
                  v35 = *(v30 - 1);
                  *(v30 - 1) = *(v31 - 1);
                  *(v31 - 1) = v35;
                  if (v30 == a2) {
                    break;
                  }
                  ++v30;
                } while (v31++ != a3);
                v29 = a2;
              }
              else {
                v40 = a2 - v17;
                do {
                  v41 = v40;
                  v40 = v34;
                  v34 = v41 % v34;
                } while (v34 != 0);
                if (8 * v40 != 0) {
                  v42 = &v17[v40];
                  do {
                    v44 = *--v42;
                    v43 = v44;
                    v45 = (__int64*)((char*)v42 + (_QWORD)v32);
                    v46 = v42;
                    do {
                      v47 = v45;
                      *v46 = *v45;
                      v48 = &v32[(_QWORD)v45];
                      v49 = a3 - v45;
                      v50 = __OFSUB__(v33, v49);
                      v52 = v33 - v49;
                      v51 = (v52 < 0) ^ v50;
                      v45 = &v17[v52];
                      if (v51) {
                        v45 = (__int64*)v48;
                      }
                      v46 = v47;
                    } while (v45 != v42);
                    *v47 = v43;
                  } while (v42 != v17);
                }
                v29 = (__int64*)((char*)v17 + ((char*)a3 - (char*)a2));
              }
            }
          }
        }
      }
      v9 -= v16;
      a4 -= v77;
      if (v77 + v16 >= a4 + v9) {
        result = (__int64*)Object_a8d360((__int64)v29, a3, v78, a4, v9, a6, a7);
        a3 = v17;
        v9 = v16;
        a4 = v77;
        v78 = v29;
      }
      else {
        result =
            (__int64*)Object_a8d360((__int64)v13, v17, v29, v77, v16, a6, a7);
        v13 = v29;
      }
      a2 = a3;
      a3 = v78;
      if (v9 == 0) {
        return result;
      }
    }
    if (a4 <= v9) {
      if (v13 != a2) {
        v58 = -a6;
        v59 = (__int64*)a6;
        v60 = v13;
        do {
          v61 = *v60++;
          v58 -= 8;
          *v59++ = v61;
        } while (v60 != a2);
        while (a2 != a3) {
          v62 = *(_QWORD*)a6;
          v63 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 16LL))(*a2);
          result =
              (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
          if (v63 >= (int)result) {
            v64 = (__int64*)a6;
          }
          else {
            v64 = a2;
          }
          if (v63 >= (int)result) {
            v65 = 0;
          }
          else {
            v65 = 8;
          }
          v66 = *v64;
          a2 = (__int64*)((char*)a2 + v65);
          if (v63 >= (int)result) {
            v67 = 8;
          }
          else {
            v67 = 0;
          }
          a6 += v67;
          *v13++ = v66;
          if (v59 == (__int64*)a6) {
            return result;
          }
        }
        return (__int64*)memmove(v13, a6, -(a6 + v58));
      }
    }
    else if (a2 != a3) {
      v53 = 0;
      do {
        *(_QWORD*)(a6 + v53 * 8) = a2[v53];
        ++v53;
      } while (&a2[v53] != a3);
      v54 = (__int64*)(a6 + v53 * 8);
      while (a2 != v13) {
        v55 = *(a2 - 1);
        v56 =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)*(v54 - 1) + 16LL))(*(v54 - 1));
        result =
            (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
        if (v56 >= (int)result) {
          v57 = v54;
        }
        else {
          v57 = a2;
        }
        if (v56 >= (int)result) {
          --v54;
        }
        else {
          --a2;
        }
        *--a3 = *(v57 - 1);
        if (v54 == (__int64*)a6) {
          return result;
        }
      }
      if ((__int64*)a6 != v54) {
        v69 = 0x1FFFFFFFFFFFFFFFLL;
        do {
          v70 = *--v54;
          a3[v69--] = v70;
        } while (v54 != (__int64*)a6);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
