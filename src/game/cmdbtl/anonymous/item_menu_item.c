#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _ZN4game3map13Unknown15e09d0EPKNS_4UnitE(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2203490;
__int64 ItemMenuItem_Unknown6();

__int64 ItemMenuItem_Unknown6()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;

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
      if ((*(_BYTE*)(v1 + 60) & 1) == 0) {
        goto LABEL_5;
      }
    LABEL_13:
      v7 = 0;
      return v7 & 1;
    }
  }

LABEL_4:
  if ((*(_BYTE*)(v1 + 60) & 1) != 0) {
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
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v4 = v9;
    if (v9 != 0) {
      goto LABEL_19;
    }
  }
  else if (v4 != 0) {
    goto LABEL_19;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v10 = *(_QWORD*)(v3 + 664);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v4;
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
      v4 = v11;
    }
  }

LABEL_19:
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  v13 = *(_QWORD*)(v12 + 88);
  if (v13 != 0) {
    v14 = *(_QWORD*)(v12 + 80);
    v15 = *(_QWORD*)(v12 + 88);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v16 = std___1___shared_weak_count_lock(v15);
    std___1___shared_weak_count___release_weak(v13);
    v7 = _ZN4game3map13Unknown15e09d0EPKNS_4UnitE(*(_QWORD*)(v14 + 16));
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v17 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      v7 = v17;
    }
    return v7 & 1;
  }
  return _ZN4game3map13Unknown15e09d0EPKNS_4UnitE(0);
}

#pragma GCC visibility pop
