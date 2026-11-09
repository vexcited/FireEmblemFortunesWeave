#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e7d890(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_2203490;
__int64 CmdBtlSubEquipMenuItem_Unknown71();

__int64 CmdBtlSubEquipMenuItem_Unknown71()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

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
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
  v7 = *(_QWORD*)(result + 88);
  if (v7 == 0) {
    return result;
  }
  v8 = *(_QWORD*)(result + 80);
  v9 = *(_QWORD*)(result + 88);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                            memory_order_relaxed);
  v10 = std___1___shared_weak_count_lock(v9);
  result = std___1___shared_weak_count___release_weak(v7);
  if (v10 == 0 || v8 == 0) {
    if (v10 == 0) {
      return result;
    }
  }
  else {
    result = GameRoutine_e7d890(v8);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

#pragma GCC visibility pop
