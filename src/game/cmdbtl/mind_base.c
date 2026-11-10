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
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  int v3;
  _QWORD* v5;
  int v6;
  _QWORD* result;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  bool v20;
  _QWORD* v21;
  bool v22;
  unsigned __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v39;
  _QWORD* v40;

  v3 = a2;
  v5 = a3;
  v6 = 0;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  while (2) {
    result = X8CALL_X0(_QWORD*, MindBase_ed77c0((void*)(&v39), a1, v6));
    v8 = v40;
    if (v40 == nullptr) {
      goto LABEL_4;
    }
    result = (_QWORD*)std___1___shared_weak_count_lock(v40);
    if (result == nullptr) {
      goto LABEL_3;
    }
    v9 = result;
    if (v39 == 0) {
      goto LABEL_58;
    }
    v10 = *(_QWORD*)(*(_QWORD*)(v39 + 16) + 440LL);
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
      result = v40;
      if (v40 != nullptr) {
        result = (_QWORD*)std___1___shared_weak_count_lock(v40);
        v18 = result;
        if (result != nullptr) {
          v19 = v39;
        }
        else {
          v19 = 0;
        }
        if (v17 == 0) {
        LABEL_28:
          v20 = v19 == 0;
          if (v18 == nullptr) {
            goto LABEL_30;
          }
          goto LABEL_29;
        }
      }
      else {
        v19 = 0;
        v18 = nullptr;
        if (v17 == 0) {
          goto LABEL_28;
        }
      }
      result = (_QWORD*)std___1___shared_weak_count_lock(v17);
      if (result == nullptr) {
        goto LABEL_28;
      }
      v20 = v19 == v16;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v21 = result;
        (*(void (**)(_QWORD*))(*result + 16LL))(result);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v21);
      }
      if (v18 == nullptr) {
      LABEL_30:
        if (v17 == 0) {
          goto LABEL_32;
        }
      LABEL_31:
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v17);
        goto LABEL_32;
      }
    LABEL_29:
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 1),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_30;
      }
      (*(void (**)(_QWORD*))(*v18 + 16LL))(v18);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v18);
      if (v17 != 0) {
        goto LABEL_31;
      }
    LABEL_32:
      if (v20) {
        goto LABEL_37;
      }
      v14 += 2;
    } while (v14 != v15);
    v14 = v15;
  LABEL_37:
    v3 = a2;
    v15 = (__int64*)a3[1];
  LABEL_38:
    v22 = v14 == v15;
    v5 = a3;
    if (v22) {
      v23 = a3[2];
      if ((unsigned __int64)v15 >= v23) {
        v26 = *a3;
        v27 = (__int64)v15 - *a3;
        v28 = (v27 >> 4) + 1;
        if (v28 >> 60 != 0) {
          GameRoutine_e66f60(result);
        }
        v29 = v23 - v26;
        if (v29 >> 3 > v28) {
          v28 = v29 >> 3;
        }
        if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
          v30 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v30 = v28;
        }
        if (v30 >> 60 != 0) {
          GameRoutine_60a210(result);
        }
        v31 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v30, 16, 0);
        v32 = v40;
        v33 = (_QWORD*)(v31 + v27);
        *v33 = v39;
        v33[1] = v32;
        if (v32 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 2), 1u,
                                    memory_order_relaxed);
        }
        v34 = &v33[-2 * (v27 >> 4)];
        v35 = v31 + 16 * v30;
        v25 = v33 + 2;
        result = (_QWORD*)memcpy(v34, v26, v27);
        v5 = a3;
        *a3 = v34;
        a3[2] = v35;
        if (v26 != 0) {
          v36 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v36 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
        }
      }
      else {
        v24 = v40;
        *v15 = v39;
        v15[1] = (__int64)v24;
        if (v24 != nullptr) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 2), 1u,
                                    memory_order_relaxed);
        }
        v25 = v15 + 2;
      }
      v5[1] = v25;
      v3 = a2;
    }
  LABEL_58:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(_QWORD*))(*v9 + 16LL))(v9);
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v9);
      v8 = v40;
      if (v40 == nullptr) {
        goto LABEL_4;
      }
      goto LABEL_3;
    }
    v8 = v40;
    if (v40 != nullptr) {
    LABEL_3:
      result = (_QWORD*)std___1___shared_weak_count___release_weak(v8);
    }
  LABEL_4:
    if (++v6 != 4) {
      continue;
    }
    {
      result;
      return;
    }
  }
}

#pragma GCC visibility pop
