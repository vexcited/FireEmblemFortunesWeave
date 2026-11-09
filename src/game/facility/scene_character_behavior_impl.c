#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 SceneCharacterBehavior_1405800(__int64 result);

__int64 SceneCharacterBehavior_1405800(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  char v7;
  char v9;

  v1 = *(_QWORD*)(result + 16);
  v2 = *(_QWORD*)(v1 + 192);
  v3 = *(_QWORD*)(v1 + 200);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v4 = *(float*)(result + 52);
    if (v4 >= 0.0) {
      if (v4 != 0.0 && v4 >= 360.0) {
        do {
          v4 = v4 + -360.0;
        } while (v4 >= 360.0);
      }
    }
    else {
      do {
        v4 = v4 + 360.0;
      } while (v4 < 0.0);
    }
    for (; v4 < -180.0; v4 = v4 + 360.0)
      ;
    for (; v4 >= 180.0; v4 = v4 + -360.0)
      ;
    v7 = *(_BYTE*)(v2 + 40);
    *(float*)(v2 + 32) = v4;
    *(_BYTE*)(v2 + 40) = v7 | 2;
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      return std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    v5 = *(float*)(result + 52);
    if (v5 >= 0.0) {
      if (v5 != 0.0 && v5 >= 360.0) {
        do {
          v5 = v5 + -360.0;
        } while (v5 >= 360.0);
      }
    }
    else {
      do {
        v5 = v5 + 360.0;
      } while (v5 < 0.0);
    }
    for (; v5 < -180.0; v5 = v5 + 360.0)
      ;
    for (; v5 >= 180.0; v5 = v5 + -360.0)
      ;
    v9 = *(_BYTE*)(v2 + 40);
    *(float*)(v2 + 32) = v5;
    *(_BYTE*)(v2 + 40) = v9 | 2;
  }
  return result;
}

#pragma GCC visibility pop
