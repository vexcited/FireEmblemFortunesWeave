#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 ChoiceMenuItem_Draw(_QWORD* a1);
__int64 ChoiceMenuItem_OnSelect(__int64 a1);
__int64 ChoiceMenuItem_OnDeselect(__int64 a1);

__int64 ChoiceMenuItem_Draw(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  atomic_ullong* v9;
  __int64* v10;
  const char* v11;
  __int64 v13;
  __int64* v14;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v13 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v13);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  GameRoutine_1562060(v4, "T_Txt", v5);
  v6 = a1[7];
  if (v6 == 0) {
    goto LABEL_10;
  }
  v7 = std___1___shared_weak_count_lock(v6);
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = v7;
  v9 = (atomic_ullong*)(v7 + 8);
  v10 = (__int64*)a1[6];
  if (atomic_fetch_add(v9, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v10 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v14 = v10;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v8);
  v10 = v14;
  if (v14 == nullptr) {
  LABEL_10:
    v10 = &ui_LayoutAccessor_empty_;
  }

LABEL_11:
  if (*(_QWORD**)(a1[1] + 336LL) == a1) {
    v11 = "Select";
  }
  else {
    v11 = "Default";
  }
  return GameRoutine_1562680(v10, v11, 1.0);
}

__int64 ChoiceMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v8;

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
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v8;
    if (v8 != nullptr) {
      return GameRoutine_1562680(v6, "Select", 1.0);
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562680(v6, "Select", 1.0);
}

__int64 ChoiceMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v8;

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
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v8;
    if (v8 != nullptr) {
      return GameRoutine_1562680(v6, "Default", 1.0);
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562680(v6, "Default", 1.0);
}

#pragma GCC visibility pop
