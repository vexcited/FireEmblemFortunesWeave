#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*wld_WorldAOModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a250(_QWORD);
__int64 WorldAOModule_Destructor(_QWORD* a1);
__int64 WorldAOModule_Unknown7(_QWORD* a1);
__int64 WorldAOModule_Unknown9(_QWORD* a1);

__int64 WorldAOModule_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  v1 = a1[7];
  *a1 = wld_WorldAOModule_vtable;
  if (v1 != 0) {
    v3 = a1[8];
    if (v1 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
      }
      v3 -= 24;
    } while (v3 != v1);
    v5 = a1[7];
    a1[8] = v1;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v6);
    }
  }
  v7 = a1[6];
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 WorldAOModule_Unknown7(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = a1[4];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = a1[3];
    }
    else {
      v4 = 0;
    }
    result = a1[6];
    if (result == 0) {
      goto LABEL_27;
    }
  }
  else {
    v3 = 0;
    v4 = 0;
    result = a1[6];
    if (result == 0) {
      goto LABEL_27;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (v4 != 0 && result != 0) {
    v6 = a1[5];
    if (v6 != 0) {
      v7 = a1[7];
      v8 = a1[8];
      if (v7 == v8) {
      LABEL_15:
        v9 = *(_QWORD*)(v4 + 256);
        *(_QWORD*)(v4 + 248) = 0;
        *(_QWORD*)(v4 + 256) = 0;
        if (v9 == 0) {
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      while (1) {
        if (*(_DWORD*)v7 >= 0xAu) {
          GameRoutine_60a250("bitset test argument out of range");
        }
        if (((*(_QWORD*)(v6 + 392) >> *(_DWORD*)v7) & 1) != 0) {
          break;
        }
        v7 += 24;
        if (v7 == v8) {
          goto LABEL_15;
        }
      }
      v10 = *(_QWORD*)(v7 + 8);
      v9 = *(_QWORD*)(v7 + 16);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      v11 = *(_QWORD*)(v4 + 256);
      *(_QWORD*)(v4 + 248) = v10;
      *(_QWORD*)(v4 + 256) = v9;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = result;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
        result = v12;
      }
      if (v9 != 0) {
      LABEL_23:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v13 = result;
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
          result = v13;
        }
      }
    }
  }

LABEL_25:
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v14);
    if (v3 == 0) {
      return result;
    }
    goto LABEL_28;
  }

LABEL_27:
  if (v3 == 0) {
    return result;
  }

LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 WorldAOModule_Unknown9(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = a1[4];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = a1[3];
    }
    else {
      v4 = 0;
    }
    result = a1[6];
    if (result == 0) {
      goto LABEL_16;
    }
  }
  else {
    v4 = 0;
    v3 = 0;
    result = a1[6];
    if (result == 0) {
      goto LABEL_16;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (v4 != 0 && result != 0 && a1[5] != 0) {
    v6 = *(_QWORD*)(v4 + 256);
    *(_QWORD*)(v4 + 248) = 0;
    *(_QWORD*)(v4 + 256) = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v7 = result;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      result = v7;
    }
  }
  else if (result == 0) {
    goto LABEL_16;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_16:
    if (v3 == 0) {
      return result;
    }
    goto LABEL_17;
  }
  v8 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v3 == 0) {
    return result;
  }

LABEL_17:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
