#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_159e7c0(_QWORD, _QWORD);
__int64 GameRoutine_1674590(_QWORD);
__int64 GameRoutine_181bd40(_QWORD, _QWORD);
__int64 ListMenuItem_16734f0(__int64);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 GaugeMenuItem_1673f50(__int64 a1);
__int64 GaugeMenuItem_1673fa0(char* a1);
__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_15744f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_181bec0(_QWORD);
__int64 GameRoutine_181c160(_QWORD);
__int64 GaugeMenuItem_1674590(__int64 a1);

__int64 GaugeMenuItem_1673f50(__int64 a1)
{
  __int64 result;

  ListMenuItem_16734f0(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  if ((result & 1) != 0) {
    return GameRoutine_1674590(a1);
  }
  return result;
}

__int64 GaugeMenuItem_1673fa0(char* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  (*(void (**)(char*))(*(_QWORD*)a1 + 432LL))(a1);
  if (((*(__int64 (**)(char*))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0 ||
      (GameRoutine_181bd40(a1 + 140, 1) & 1) == 0) {
    return 0;
  }
  (*(void (**)(char*))(*(_QWORD*)a1 + 440LL))(a1);
  v2 = *((_QWORD*)a1 + 16);
  if (v2 != 0) {
    v3 = *((_QWORD*)a1 + 15);
    v4 = *((_QWORD*)a1 + 16);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      if (v3 != 0) {
        GameRoutine_159e7c0(v3, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    std___1___shared_weak_count___release_weak(v2);
  }
  GameRoutine_1674590(a1);
  return 13;
}

__int64 GaugeMenuItem_1674590(__int64 a1)
{
  __int64 result;
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
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  result = GameRoutine_181c160(a1 + 140);
  if ((result & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 128);
    if (v3 != 0) {
      v4 = *(_QWORD*)(a1 + 120);
      v5 = *(_QWORD*)(a1 + 128);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                                memory_order_relaxed);
      v6 = std___1___shared_weak_count_lock(v5);
      if (v6 != 0) {
        v7 = v6;
        if (v4 != 0) {
          GameRoutine_15744f0(v4, 1, 0);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
      }
      result = std___1___shared_weak_count___release_weak(v3);
      v8 = *(_QWORD*)(a1 + 128);
      if (v8 != 0) {
        v9 = *(_QWORD*)(a1 + 120);
        v10 = *(_QWORD*)(a1 + 128);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v11 = std___1___shared_weak_count_lock(v10);
        if (v11 != 0) {
          v12 = v11;
          if (v9 != 0) {
            GameRoutine_15744f0(v9, 0, 1);
          }
        LABEL_27:
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
            std___1___shared_weak_count___release_weak(v12);
          }
          return std___1___shared_weak_count___release_weak(v8);
        }
        return std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  else {
    result = GameRoutine_181bec0(a1 + 140);
    v13 = *(_QWORD*)(a1 + 120);
    v8 = *(_QWORD*)(a1 + 128);
    if ((result & 1) == 0) {
      if (v8 == 0) {
        return result;
      }
      v20 = *(_QWORD*)(a1 + 128);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      v21 = std___1___shared_weak_count_lock(v20);
      if (v21 == 0) {
        return std___1___shared_weak_count___release_weak(v8);
      }
      v12 = v21;
      if (v13 != 0) {
        GameRoutine_1572370(v13, 1);
      }
      goto LABEL_27;
    }
    if (v8 != 0) {
      v14 = *(_QWORD*)(a1 + 128);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      v15 = std___1___shared_weak_count_lock(v14);
      if (v15 != 0) {
        v16 = v15;
        if (v13 != 0) {
          GameRoutine_15744f0(v13, 1, 1);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak(v16);
        }
      }
      result = std___1___shared_weak_count___release_weak(v8);
      v8 = *(_QWORD*)(a1 + 128);
      if (v8 != 0) {
        v17 = *(_QWORD*)(a1 + 120);
        v18 = *(_QWORD*)(a1 + 128);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                  memory_order_relaxed);
        v19 = std___1___shared_weak_count_lock(v18);
        if (v19 != 0) {
          v12 = v19;
          if (v17 != 0) {
            GameRoutine_15744f0(v17, 0, 0);
          }
          goto LABEL_27;
        }
        return std___1___shared_weak_count___release_weak(v8);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
