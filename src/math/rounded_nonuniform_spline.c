#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
float math_RoundedNonuniformSpline_opAssign(__int64 a1, float* a2);

float math_RoundedNonuniformSpline_opAssign(__int64 a1, float* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float* v6;
  float result;

  v3 = *(_QWORD*)a2;
  v2 = *((_QWORD*)a2 + 1);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
  }
  v4 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)a1 = v3;
  *(_QWORD*)(a1 + 8) = v2;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v5 = a1;
    v6 = a2;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    a2 = v6;
    a1 = v5;
  }
  result = a2[4];
  *(float*)(a1 + 16) = result;
  return result;
}

#pragma GCC visibility pop
