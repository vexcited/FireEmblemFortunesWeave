#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1984a30(_QWORD, float);
__int64 GameRoutine_1984bd0(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 SceneCharacterBehaviorFade_Unknown3(__int64 a1);

__int64 SceneCharacterBehaviorFade_Unknown3(__int64 a1)
{
  __int64 v1;
  float v2;
  int v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(float*)(a1 + 28);
  v3 = *(unsigned __int8*)(a1 + 25);
  v4 = *(_QWORD*)(v1 + 160);
  v5 = *(_QWORD*)(v1 + 168);
  if (v3 == 1) {
    if (v5 == 0) {
      return GameRoutine_1984a30(v4, v2);
    }
    v6 = (atomic_ullong*)(v5 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_1984a30(v4, v2);
  }
  else {
    if (v5 == 0) {
      return GameRoutine_1984bd0(v4, v2);
    }
    v6 = (atomic_ullong*)(v5 + 8);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    result = GameRoutine_1984bd0(v4, v2);
  }
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

#pragma GCC visibility pop
