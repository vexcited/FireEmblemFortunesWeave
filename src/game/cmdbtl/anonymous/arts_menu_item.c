#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e6cfa0(_QWORD, _QWORD);
__int64 GameRoutine_e76d20(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2203490;
__int64 ArtsMenuItem_Unknown6();
__int64 ArtsMenuItem_Unknown72(__int64 a1);

__int64 ArtsMenuItem_Unknown6()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v26;
  __int64 v27;

  v0 = GameData_2203490;
  v1 = *(_QWORD*)(GameData_2203490 + 640);
  v2 = *(_QWORD*)(GameData_2203490 + 648);
  if (v2 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    if (v1 != 0) {
      goto LABEL_4;
    }
  }
  else if (v1 != 0) {
    goto LABEL_4;
  }
  v1 = *(_QWORD*)(v0 + 656);
  v6 = *(_QWORD*)(v0 + 664);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      if ((*(_BYTE*)(v1 + 60) & 8) == 0) {
        goto LABEL_5;
      }
    LABEL_13:
      v7 = 0;
      return v7 & 1;
    }
  }

LABEL_4:
  if ((*(_BYTE*)(v1 + 60) & 8) != 0) {
    goto LABEL_13;
  }

LABEL_5:
  v3 = GameData_2203490;
  v4 = *(_QWORD*)(GameData_2203490 + 640);
  v5 = *(_QWORD*)(GameData_2203490 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v8 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v4 = v8;
    if (v8 != 0) {
      goto LABEL_18;
    }
  }
  else if (v4 != 0) {
    goto LABEL_18;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v9 = *(_QWORD*)(v3 + 664);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
      v4 = v10;
    }
  }

LABEL_18:
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  v12 = GameData_2203490;
  v13 = v11;
  v14 = *(_QWORD*)(GameData_2203490 + 640);
  v15 = *(_QWORD*)(GameData_2203490 + 648);
  if (v15 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v16 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v15);
    v14 = v16;
    if (v16 == 0) {
    LABEL_23:
      v14 = *(_QWORD*)(v12 + 656);
      v17 = *(_QWORD*)(v12 + 664);
      if (v17 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v18 = v14;
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
          v14 = v18;
        }
      }
    }
  }
  else if (v14 == 0) {
    goto LABEL_23;
  }
  v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
  v20 = *(_QWORD*)(v19 + 88);
  if (v20 != 0) {
    v21 = *(_QWORD*)(v19 + 80);
    v22 = *(_QWORD*)(v19 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v26 = 0;
    v27 = std___1___shared_weak_count_lock(v22);
    if (v27 != 0) {
      v26 = v21;
    }
    std___1___shared_weak_count___release_weak(v20);
  }
  else {
    v26 = 0;
    v27 = 0;
  }
  v7 = GameRoutine_e76d20(v13, &v26);
  v23 = v27;
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v24 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
    v7 = v24;
  }
  return v7 & 1;
}

__int64 ArtsMenuItem_Unknown72(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = GameData_2203490;
  v2 = *(_QWORD*)(GameData_2203490 + 640);
  v3 = *(_QWORD*)(GameData_2203490 + 648);
  if (v3 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    v5 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
    a1 = v5;
    if (v2 != 0) {
      goto LABEL_4;
    }
  }
  else if (v2 != 0) {
    goto LABEL_4;
  }
  v2 = *(_QWORD*)(v1 + 656);
  v6 = *(_QWORD*)(v1 + 664);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v7 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      a1 = v7;
    }
  }

LABEL_4:
  *(_BYTE*)(v2 + 8) = 3;
  return GameRoutine_e6cfa0(*(unsigned int*)(a1 + 40), 6);
}

#pragma GCC visibility pop
