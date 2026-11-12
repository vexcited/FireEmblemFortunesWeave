#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _QWORD GameData_1b018e8[4];
extern __int64 GameData_2203490;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_e66f60(_QWORD);
__attribute__((swiftcall)) void MindBase_ed77c0(PSEUDO_X8 x8_, _QWORD* result,
                                                int a2);
__attribute__((swiftcall)) void MindBase_ed78e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                int a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_e66f60_alt1() __asm__("GameRoutine_e66f60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__attribute__((swiftcall)) void MindBase_ed77c0(PSEUDO_X8 x8_, _QWORD* result,
                                                int a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 (*v9)(void);

  if (a2 > 1) {
    if (a2 != 2) {
    LABEL_9:
      *a3 = 0;
      a3[1] = 0;
      {
        result;
        return;
      }
    }
    v9 = *(__int64 (**)(void))(*result + 40LL);
    goto LABEL_15;
  }
  if (a2 == 0) {
    v8 = result[5];
    if (v8 != 0 && *(_QWORD*)(v8 + 8) != -1) {
      *a3 = result[4];
      a3[1] = v8;
    LABEL_16:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      {
        result;
        return;
      }
    }
    v9 = *(__int64 (**)(void))(*result + 32LL);
  LABEL_15:
    result = (_QWORD*)v9();
    v8 = result[11];
    *a3 = result[10];
    a3[1] = v8;
    if (v8 == 0) {
      result;
      return;
    }
    goto LABEL_16;
  }
  if (a2 != 1 || (result[6] & 0x80000000) != 0) {
    goto LABEL_9;
  }
  v4 = result;
  result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 32LL))(result);
  v5 = (__int64*)(result[5] + 16LL * *((int*)v4 + 12));
  v6 = *v5;
  v7 = v5[1];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    *a3 = v6;
    a3[1] = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      {
        (_QWORD*)std___1___shared_weak_count___release_weak(v7);
        return;
      }
    }
  }
  else {
    *a3 = v6;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void MindBase_ed78e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  int v3;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  bool v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  signed __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  struct {
    __int64 v40;
    __int64 v41;
  } v40_;

  v3 = a2;
  v5 = a3;
  v6 = 0;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  while (2) {
    MindBase_ed77c0((void*)(&v40_.v40), a1, v6);
    v7 = v40_.v41;
    if (v40_.v41 == 0) {
      goto LABEL_4;
    }
    v8 = std___1___shared_weak_count_lock_alt1(v40_.v41);
    if (v8 == 0) {
      goto LABEL_3;
    }
    v9 = v8;
    if (v40_.v40 == 0) {
      goto LABEL_58;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(v40_.v40 + 16) + 440LL);
    if (v10 != 0 &&
        (unsigned __int64)(v11 = *(unsigned __int8*)(v10 + 16)) <= 3) {
      v12 = GameData_1b018e8[v11];
    }
    else {
      v12 = 392;
    }
    if (*(_DWORD*)(GameData_2203490 + v12 + 672) != v3) {
      goto LABEL_58;
    }
    v13 = v5;
    v14 = (__int64*)*v5;
    v15 = (__int64*)v13[1];
    if (v14 == v15) {
      goto LABEL_38;
    }
    do {
      v16 = *v14;
      v17 = v14[1];
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                                  memory_order_relaxed);
      }
      if (v40_.v41 != 0) {
        v18 = std___1___shared_weak_count_lock_alt1(v40_.v41);
        if (v18 != 0) {
          v19 = v40_.v40;
        }
        else {
          v19 = 0;
        }
        if (v17 == 0) {
        LABEL_28:
          v21 = v19 == 0;
          if (v18 == 0) {
            goto LABEL_30;
          }
          goto LABEL_29;
        }
      }
      else {
        v19 = 0;
        v18 = 0;
        if (v17 == 0) {
          goto LABEL_28;
        }
      }
      v20 = std___1___shared_weak_count_lock_alt1(v17);
      if (v20 == 0) {
        goto LABEL_28;
      }
      v21 = v19 == v16;
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v22 = v20;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        std___1___shared_weak_count___release_weak_alt1(v22);
      }
      if (v18 == 0) {
      LABEL_30:
        if (v17 == 0) {
          goto LABEL_32;
        }
      LABEL_31:
        std___1___shared_weak_count___release_weak_alt1(v17);
        goto LABEL_32;
      }
    LABEL_29:
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_30;
      }
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak_alt1(v18);
      if (v17 != 0) {
        goto LABEL_31;
      }
    LABEL_32:
      if (v21) {
        goto LABEL_37;
      }
      v14 += 2;
    } while (v14 != v15);
    v14 = v15;
  LABEL_37:
    v3 = a2;
    v15 = (__int64*)a3[1];
  LABEL_38:
    v23 = v14 == v15;
    v5 = a3;
    if (v23) {
      v24 = a3[2];
      if ((unsigned __int64)v15 >= v24) {
        v27 = *a3;
        v28 = (signed __int64)v15 - *a3;
        v29 = (v28 >> 4) + 1;
        if (v29 >> 60 != 0) {
          GameRoutine_e66f60_alt1();
        }
        v30 = v24 - v27;
        if (v30 >> 3 > v29) {
          v29 = v30 >> 3;
        }
        if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF0LL) {
          v31 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v31 = v29;
        }
        if (v31 >> 60 != 0) {
          GameRoutine_60a210_alt1();
        }
        v32 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v31, 16, 0);
        v33 = v40_.v41;
        v34 = (_QWORD*)(v32 + v28);
        *v34 = v40_.v40;
        v34[1] = v33;
        if (v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                    memory_order_relaxed);
        }
        v35 = (__int64)&v34[-2 * (v28 >> 4)];
        v36 = v32 + 16 * v31;
        v26 = v34 + 2;
        memcpy_alt1(v35, v27, v28);
        v5 = a3;
        *a3 = v35;
        a3[2] = v36;
        if (v27 != 0) {
          v37 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v27);
        }
      }
      else {
        v25 = v40_.v41;
        *v15 = v40_.v40;
        v15[1] = v25;
        if (v25 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                                    memory_order_relaxed);
        }
        v26 = v15 + 2;
      }
      v5[1] = (__int64)v26;
      v3 = a2;
    }
  LABEL_58:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt1(v9);
      v7 = v40_.v41;
      if (v40_.v41 == 0) {
        goto LABEL_4;
      }
      goto LABEL_3;
    }
    v7 = v40_.v41;
    if (v40_.v41 != 0) {
    LABEL_3:
      std___1___shared_weak_count___release_weak_alt1(v7);
    }
  LABEL_4:
    if (++v6 != 4) {
      continue;
    }
    break;
  }
}

#pragma GCC visibility pop
