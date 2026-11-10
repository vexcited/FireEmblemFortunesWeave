#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1384e90(__int64);
__int64 GameRoutine_173fe30(void);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 TelopCausationMerge_1385040(_QWORD* a1);

__int64 TelopCausationMerge_1385040(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;

  GameRoutine_1384e90((__int64)a1);
  if (a1[57] == 0) {
    goto LABEL_18;
  }
  v3 = a1[56];
  if (v3 == 0) {
    goto LABEL_18;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
  LABEL_11:
    v8 = a1[56];
    if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
      goto LABEL_18;
    }
  LABEL_16:
    v10 = a1[68];
    if (v10 != 0 && *(float*)(v10 + 60) != 0.0) {
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  v5 = a1[55];
  if (v5 != 0) {
    v1 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v1 == 0) {
      v6 = 0;
    }
    v7 = v6 != a1[57];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
      goto LABEL_11;
    }
  }
  else {
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) != 0) {
    goto LABEL_16;
  }
LABEL_18:
  v11 = (*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1);
  if ((a1[99] == 0 || (GameRoutine_173fe30() & 1) == 0) &&
      (LayoutAccessor_1563280(a1 + 21, v11, 0) & 1) == 0) {
    v12 = LayoutAccessor_1563280(a1 + 21, "Title_Out", 0) ^ 1;
    return v12 & 1;
  }
LABEL_21:
  v12 = 0;
  return v12 & 1;
}

#pragma GCC visibility pop
