#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 std___1___shared_weak_count___release_weak();
void SceneCharacterBehaviorTurn_Unknown3(__int64);
void SceneCharacterBehaviorTurnTarget_Unknown3(__int64 a1);

void SceneCharacterBehaviorTurnTarget_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;

  v1 = *(_QWORD*)(a1 + 16);
  v2 = *(_QWORD*)(v1 + 192);
  v3 = *(_QWORD*)(v1 + 200);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
    v4 = *(float*)(v2 + 32);
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak();
      a1 = v5;
    }
  }
  else {
    v4 = *(float*)(v2 + 32);
  }
  v6 = *(float*)(a1 + 72);
  v7 = 0x0.0p+0f;
  if (v4 != v6) {
    for (; v4 < -0x1.6800000000000p+7f; v4 = v4 + 0x1.6800000000000p+8f)
      ;
    for (; v4 >= 0x1.6800000000000p+7f; v4 = v4 + -0x1.6800000000000p+8f)
      ;
    for (; v6 < -0x1.6800000000000p+7f; v6 = v6 + 0x1.6800000000000p+8f)
      ;
    for (; v6 >= 0x1.6800000000000p+7f; v6 = v6 + -0x1.6800000000000p+8f)
      ;
    if (vabds_f32(v6, v4) <= 0x1.6800000000000p+7f) {
      v7 = v6 - v4;
    }
    else {
      if (v4 >= 0x0.0p+0f) {
        if (v4 != 0x0.0p+0f && v4 >= 0x1.6800000000000p+8f) {
          do {
            v4 = v4 + -0x1.6800000000000p+8f;
          } while (v4 >= 0x1.6800000000000p+8f);
        }
      }
      else {
        do {
          v4 = v4 + 0x1.6800000000000p+8f;
        } while (v4 < 0x0.0p+0f);
      }
      if (v6 >= 0x0.0p+0f) {
        if (v6 != 0x0.0p+0f && v6 >= 0x1.6800000000000p+8f) {
          do {
            v6 = v6 + -0x1.6800000000000p+8f;
          } while (v6 >= 0x1.6800000000000p+8f);
        }
      }
      else {
        do {
          v6 = v6 + 0x1.6800000000000p+8f;
        } while (v6 < 0x0.0p+0f);
      }
      v8 = v6 - v4;
      if (v8 > 0x1.6800000000000p+7f) {
        v8 = v8 + -0x1.6800000000000p+8f;
      }
      v7 = v8 + 0x1.6800000000000p+8f;
      if (v8 >= -0x1.6800000000000p+7f) {
        v7 = v8;
      }
    }
  }
  *(float*)(a1 + 28) = v7;
  SceneCharacterBehaviorTurn_Unknown3(a1);
}

#pragma GCC visibility pop
