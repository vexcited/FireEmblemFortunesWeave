#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1074de0(_QWORD);
__int64 GameRoutine_81de20(_QWORD, _QWORD);
__int64 GameRoutine_81e020(_QWORD, _QWORD);
__int64 GameRoutine_a867a0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 CharacterModel_cf4780(__int64 a1);

__int64 CharacterModel_cf4780(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_BYTE*)(a1 + 367) == 1) {
    *(_BYTE*)(a1 + 367) = 0;
  }
  v2 = *(_QWORD*)(a1 + 16);
  do {
    v3 = v2;
    v2 = *(_QWORD*)(v2 + 600);
  } while (v2 != 0);
  v4 = *(_QWORD*)(v3 + 168);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a1 + 376);
    v13 = *(_QWORD*)(a1 + 368);
    v14 = v5;
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_81de20(v4, &v13);
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v6 = *(_QWORD*)(a1 + 392);
    v11 = *(_QWORD*)(a1 + 384);
    v12 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_81e020(v4, &v11);
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak(v12);
    }
  }
  v7 = *(_QWORD*)(a1 + 376);
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 392);
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  if (*(_QWORD*)(a1 + 312) != 0) {
    GameRoutine_a867a0(a1 + 312);
  }
  v9 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 312) = 0;
  result = *(_QWORD*)(v9 + 128);
  if (result != 0) {
    result = GameRoutine_1074de0(result);
  }
  *(_BYTE*)(a1 + 225) = 0;
  return result;
}

#pragma GCC visibility pop
