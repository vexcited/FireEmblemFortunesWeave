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

#pragma GCC visibility pop
