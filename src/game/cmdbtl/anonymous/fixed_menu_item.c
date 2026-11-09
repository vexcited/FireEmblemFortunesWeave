#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e774a0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2203490;
extern __int64 GameData_22197e0;
extern __int64 GameData_22197e8;
extern __int64 GameData_221a540;
__int64 FixedMenuItem_Unknown6();
__int64 FixedMenuItem_Unknown72(__int64 result);

__int64 FixedMenuItem_Unknown6()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  char v20;
  __int64 v22;
  __int64 v23;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v3 = v1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    v1 = v3;
    if (v3 != 0) {
      goto LABEL_9;
    }
  }
  else if (v1 != 0) {
    goto LABEL_9;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v4 = *(_QWORD*)(v0 + 664);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = v1;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      v1 = v5;
    }
  }

LABEL_9:
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  v7 = GameData_2203490;
  v8 = v6;
  v9 = *(_QWORD*)(GameData_2203490 + 640);
  v10 = *(_QWORD*)(GameData_2203490 + 648);
  if (v10 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v11 = v9;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v9 = v11;
    if (v11 != 0) {
      goto LABEL_17;
    }
  }
  else if (v9 != 0) {
    goto LABEL_17;
  }
  v9 = *(_QWORD*)(v7 + 656);
  v12 = *(_QWORD*)(v7 + 664);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v13 = v9;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
      v9 = v13;
    }
  }

LABEL_17:
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  v15 = *(_QWORD*)(v14 + 88);
  if (v15 != 0) {
    v16 = *(_QWORD*)(v14 + 80);
    v17 = *(_QWORD*)(v14 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v22 = 0;
    v23 = std___1___shared_weak_count_lock(v17);
    if (v23 != 0) {
      v22 = v16;
    }
    std___1___shared_weak_count___release_weak(v15);
  }
  else {
    v22 = 0;
    v23 = 0;
  }
  v18 = GameRoutine_e774a0(v8, &v22);
  v19 = v23;
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
    v18 = v20;
  }
  return v18 & 1;
}

__int64 FixedMenuItem_Unknown72(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = GameData_2203490;
  v2 = *(_QWORD*)(GameData_2203490 + 640);
  v3 = *(_QWORD*)(GameData_2203490 + 648);
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v4 = result;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    result = v4;
    if (v2 != 0) {
      goto LABEL_4;
    }
  }
  else if (v2 != 0) {
    goto LABEL_4;
  }
  v2 = *(_QWORD*)(v1 + 656);
  v5 = *(_QWORD*)(v1 + 664);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = result;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
      result = v6;
    }
  }

LABEL_4:
  *(_BYTE*)(v2 + 8) = 10;
  if (GameData_221a540 != 0 && GameData_22197e8 != GameData_22197e0) {
    *(_DWORD*)(GameData_22197e8 - 4) = *(_DWORD*)(result + 40);
  }
  return result;
}

#pragma GCC visibility pop
