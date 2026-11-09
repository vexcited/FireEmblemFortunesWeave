#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cb22c0(_QWORD, _QWORD);
__int64 GameRoutine_d0e440(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21ec7c0;
__int64 StateFollow_Unknown5(__int64 a1);

__int64 StateFollow_Unknown5(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 24);
  if (v3 == 0) {
    goto LABEL_20;
  }
  v4 = *(_QWORD*)(v1 + 16);
  v5 = *(_QWORD*)(v1 + 24);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                            memory_order_relaxed);
  v6 = std___1___shared_weak_count_lock(v5);
  std___1___shared_weak_count___release_weak(v3);
  if (v6 == 0 || v4 == 0) {
    if (v6 == 0) {
      goto LABEL_20;
    }
    goto LABEL_18;
  }
  v8 = *(__int64**)(GameData_21ec7c0 + 24);
  v9 = *(__int64**)(GameData_21ec7c0 + 32);
  if (v8 == v9) {
  LABEL_12:
    v10 = 0;
  }
  else {
    while (1) {
      v10 = *v8;
      if (*v8 == *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL)) {
        break;
      }
      v8 += 2;
      if (v8 == v9) {
        goto LABEL_12;
      }
    }
    v12 = v8[1];
    if (v12 != 0) {
      v11 = 0;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      v15 = v10;
      v16 = v12;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      goto LABEL_14;
    }
  }
  v11 = 1;
  v12 = 0;
  v15 = v10;
  v16 = 0;

LABEL_14:
  GameRoutine_cb22c0(v4, &v15);
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak(v16);
  }
  if ((v11 & 1) == 0) {
    std___1___shared_weak_count___release_weak(v12);
  }

LABEL_18:
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }

LABEL_20:
  v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL);
  result = *(_QWORD*)(v13 + 16);
  if (*(float*)(result + 544) != 1.0) {
    *(_DWORD*)(result + 544) = 1065353216;
    result = GameRoutine_d0e440(result);
    v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 24LL);
  }
  *(_BYTE*)(*(_QWORD*)(v13 + 24) + 24LL) = 0;
  return result;
}

#pragma GCC visibility pop
