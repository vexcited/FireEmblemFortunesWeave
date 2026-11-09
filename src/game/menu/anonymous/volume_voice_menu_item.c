#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1572370(_QWORD, _QWORD);
__int64 GameRoutine_1673c10(__int64*, char);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 VolumeVoiceMenuItem_Unknown21(__int64 a1);

__int64 VolumeVoiceMenuItem_Unknown21(__int64 a1)
{
  int v1;
  __int64 v2;
  bool v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(unsigned __int8*)(a1 + 79);
  v2 = *(_QWORD*)a1;
  *(_WORD*)(a1 + 144) = 0;
  v4 = v1 == 0;
  v5 = 504;
  if (!v4) {
    v5 = 520;
  }
  (*(void (**)(void))(v2 + v5))();
  v6 = *(_QWORD*)(a1 + 128);
  if (v6 != 0) {
    v7 = *(_QWORD*)(a1 + 120);
    v8 = *(_QWORD*)(a1 + 128);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = v9;
      if (v7 != 0) {
        GameRoutine_1572370(v7, 0);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    std___1___shared_weak_count___release_weak(v6);
  }
  return GameRoutine_1673c10((__int64*)a1, 0);
}

#pragma GCC visibility pop
