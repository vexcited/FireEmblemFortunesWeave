#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cb22c0(_QWORD, _QWORD);
__int64 GameRoutine_d0e440(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21ec7c0;
__int64 StateFollow_Unknown5(__int64 a1);
__int64 StateFollow_cb22c0(__int64 result, __int64* a2);

__int64 StateFollow_cb22c0(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  bool v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *(__int64**)(result + 1136);
  v3 = *(__int64**)(result + 1144);
  v4 = a2[1];
  v5 = result;
  if (v4 != 0) {
    v6 = *a2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    if (v2 == v3) {
      goto LABEL_37;
    }
    v25 = result;
    while (1) {
      v7 = v2[1];
      if (v7 != 0) {
        v8 = *v2;
        v9 = v2[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                  memory_order_relaxed);
        v10 = std___1___shared_weak_count_lock(v9);
        if (v10 == 0) {
          v8 = 0;
        }
      }
      else {
        v8 = 0;
        v10 = 0;
      }
      v11 = std___1___shared_weak_count_lock(v4);
      if (v11 != 0) {
        v12 = v8 == v6;
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v13 = v11;
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
      else {
        v12 = v8 == 0;
      }
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        break;
      }
      if (v7 != 0) {
        goto LABEL_16;
      }
    LABEL_17:
      if (v12) {
        goto LABEL_36;
      }
      v2 += 2;
      if (v2 == v3) {
        v2 = v3;
      LABEL_36:
        v5 = v25;
      LABEL_37:
        result = std___1___shared_weak_count___release_weak(v4);
        goto LABEL_38;
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    if (v7 == 0) {
      goto LABEL_17;
    }
  LABEL_16:
    std___1___shared_weak_count___release_weak(v7);
    goto LABEL_17;
  }
  if (v2 == v3) {
    goto LABEL_38;
  }
  while (1) {
    v14 = v2[1];
    if (v14 == 0) {
      break;
    }
    v15 = *v2;
    v16 = v2[1];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                              memory_order_relaxed);
    v17 = std___1___shared_weak_count_lock(v16);
    v19 = v17 == 0 || v15 == 0;
    if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v20 = v17;
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak(v20);
    }
    result = std___1___shared_weak_count___release_weak(v14);
    if (v19) {
      break;
    }
    v2 += 2;
    if (v2 == v3) {
      v2 = v3;
      break;
    }
  }

LABEL_38:
  v21 = *(__int64**)(v5 + 1144);
  if (v2 != v21) {
    v22 = v2 + 2;
    if (v2 + 2 == v21) {
      if (v2 == v21) {
      LABEL_46:
        *(_QWORD*)(v5 + 1144) = v2;
        return result;
      }
    }
    else {
      do {
        v24 = *v22;
        v23 = v22[1];
        result = *(v22 - 1);
        *v22 = 0;
        v22[1] = 0;
        *(v22 - 2) = v24;
        *(v22 - 1) = v23;
        if (result != 0) {
          result = std___1___shared_weak_count___release_weak(result);
        }
        v22 += 2;
      } while (v22 != v21);
      v21 = *(__int64**)(v5 + 1144);
      v2 = v22 - 2;
      if (v22 - 2 == v21) {
        goto LABEL_46;
      }
    }
    do {
      result = *(v21 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
      v21 -= 2;
    } while (v21 != v2);
    goto LABEL_46;
  }
  return result;
}

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
