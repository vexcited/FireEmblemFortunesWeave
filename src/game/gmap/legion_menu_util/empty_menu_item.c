#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 EmptyMenuItem_Unknown55_16f1c50(__int64 a1);

__int64 EmptyMenuItem_Unknown55_16f1c50(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  __int64* v13;
  __int64* v14;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v13 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak(v4);
  v6 = v13;
  if (v13 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  GameRoutine_1562680(v6, "Menu_Off", 1.0);
  v7 = *(_QWORD*)(a1 + 56);
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = v8;
  v10 = (atomic_ullong*)(v8 + 8);
  v11 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
    v11 = v14;
    if (v14 != nullptr) {
      return GameRoutine_1562680(v11, "Info_Default", 1.0);
    }
    goto LABEL_10;
  }
  if (v11 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562680(v11, "Info_Default", 1.0);
}

#pragma GCC visibility pop
