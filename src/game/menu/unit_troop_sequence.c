#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_178bfa0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 UnitTroopSequence_Unknown36(__int64 a1);

__int64 UnitTroopSequence_Unknown36(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1184, 16, 0);
  v3 = *(_QWORD*)(a1 + 208);
  v7 = 0;
  v8 = 0;
  if (v3 != 0 &&
      (v4 = std___1___shared_weak_count_lock(v3), v8 = v4, v4 != 0)) {
    v5 = v4;
    v7 = *(_QWORD*)(a1 + 200);
    GameRoutine_178bfa0(v2, a1, &v7);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    GameRoutine_178bfa0(v2, a1, &v7);
  }
  return v2;
}

#pragma GCC visibility pop
