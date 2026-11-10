#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21f3c98;
extern __int64 GameData_220b6d0;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_65c760(long double);
__int64 GlobalHashUtil_ff21e0(__int64 a1);
__n128 game_hub_GlobalHashUtil_FindFacilityList_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2,
                                                               __n128 result);

__int64 GlobalHashUtil_ff21e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _QWORD* v15;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v2 = *(_QWORD*)(GameData_220b6d0 + 8);
  v3 = *(_QWORD**)(v2 + 24);
  v4 = (_QWORD*)(v2 + 32);
  if (v3 == v4) {
    goto LABEL_20;
  }
  while (1) {
    v5 = (__int64*)v3[7];
    v6 = (__int64*)v3[8];
    if (v5 != v6) {
      break;
    }
  LABEL_5:
    v9 = (_QWORD*)v3[1];
    if (v9 != nullptr) {
      do {
        v10 = v9;
        v9 = (_QWORD*)*v9;
      } while (v9 != nullptr);
    }
    else {
      do {
        v10 = (_QWORD*)v3[2];
        v11 = v3 == (_QWORD*)*v10;
        v3 = v10;
      } while (!v11);
    }
    v3 = v10;
    if (v10 == v4) {
      goto LABEL_20;
    }
  }
  while (1) {
    v8 = *v5;
    v5 += 6;
    v7 = v8;
    if (*(_QWORD*)(v8 + 56) == a1) {
      break;
    }
    if (v5 == v6) {
      goto LABEL_5;
    }
  }
  v12 = *(_QWORD*)(v7 + 552);
  v13 = *(_QWORD*)(v7 + 560);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v12 != 0) {
    v1 = v12 + 144;
    v14 = *(_BYTE*)(v12 + 224) ^ 1;
    if (v13 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v14 = 1;
    if (v13 == 0) {
      goto LABEL_19;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak(v13);
    a1 = v26;
    if ((v14 & 1) == 0) {
      return v1;
    }
    goto LABEL_20;
  }
LABEL_19:
  if ((v14 & 1) == 0) {
    return v1;
  }
LABEL_20:
  v15 = *(_QWORD**)(GameData_21f3c98 + 152);
  if (v15 == (_QWORD*)(GameData_21f3c98 + 160)) {
    return 0;
  }
  while (1) {
    v17 = (_QWORD*)v15[7];
    v18 = (_QWORD*)v15[8];
    if (v17 != v18) {
      while (*(_QWORD*)(*v17 + 176LL) != a1) {
        v17 += 2;
        if (v17 == v18) {
          goto LABEL_29;
        }
      }
    }
    if (v17 != v18) {
      break;
    }
  LABEL_29:
    v17 = (_QWORD*)v15[10];
    v19 = (_QWORD*)v15[11];
    if (v17 != v19) {
      while (*(_QWORD*)(*v17 + 176LL) != a1) {
        v17 += 2;
        if (v17 == v19) {
          goto LABEL_34;
        }
      }
    }
    if (v17 != v19) {
      break;
    }
  LABEL_34:
    v20 = (_QWORD*)v15[1];
    if (v20 != nullptr) {
      do {
        v21 = v20;
        v20 = (_QWORD*)*v20;
      } while (v20 != nullptr);
    }
    else {
      do {
        v21 = (_QWORD*)v15[2];
        v11 = v15 == (_QWORD*)*v21;
        v15 = v21;
      } while (!v11);
    }
    v15 = v21;
    if (v21 == (_QWORD*)(GameData_21f3c98 + 160)) {
      return 0;
    }
  }
  v22 = *v17;
  v23 = v17[1];
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v22 == 0) {
    v1 = 0;
    goto LABEL_57;
  }
  v24 = *(_QWORD*)(v22 + 840);
  v25 = *(_QWORD*)(v22 + 848);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v24 == 0) {
    v1 = 0;
    if (v25 == 0) {
      goto LABEL_57;
    }
  LABEL_55:
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
    goto LABEL_57;
  }
  if (*(_BYTE*)(v24 + 80) != 0) {
    v1 = v24;
  }
  else {
    v1 = 0;
  }
  if (v25 != 0) {
    goto LABEL_55;
  }
LABEL_57:
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  return v1;
}

__n128 game_hub_GlobalHashUtil_FindFacilityList_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2,
                                                               __n128 result)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;

  v3 = (_QWORD*)*a2;
  v4 = a2[1];
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = v3[105];
  v6 = v3[106];
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v5 != 0 && *(_BYTE*)(v5 + 80) == 1) {
    v7 = *(__int64**)(a1 + 8);
    v8 = v3[22];
    v10 = (_QWORD*)v7[1];
    v9 = v7[2];
    if ((unsigned __int64)v10 >= v9) {
      v12 = *v7;
      v13 = (__int64)v10 - *v7;
      v14 = (v13 >> 3) + 1;
      if (v14 >> 61 != 0) {
        GameRoutine_65c760(*(long double*)&result);
      }
      v15 = v9 - v12;
      v16 = fw_memory_g_heap_manager_ptr;
      if (v15 >> 2 > v14) {
        v14 = v15 >> 2;
      }
      if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
        v17 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v17 = v14;
      }
      if (v17 != 0) {
        if (v17 >> 61 != 0) {
          GameRoutine_60a210(a1);
        }
        v18 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
      }
      else {
        v18 = 0;
      }
      v19 = v18 + 8 * v17;
      v20 = v18 + v13 - 8 * (v13 >> 3);
      *(_QWORD*)(v18 + v13) = v8;
      v11 = v18 + v13 + 8;
      memcpy(v20, v12, v13);
      *v7 = v20;
      v7[1] = v11;
      v7[2] = v19;
      if (v12 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v21);
      }
    }
    else {
      *v10 = v8;
      v11 = (__int64)(v10 + 1);
    }
    v7[1] = v11;
  }
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
    if (v4 == 0) {
      return result;
    }
  }
  else if (v4 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

#pragma GCC visibility pop
