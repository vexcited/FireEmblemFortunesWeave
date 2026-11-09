#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e7fde0(_QWORD, _QWORD, _QWORD, _QWORD, float, double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_2203490;
extern __int64 as_g_thread_info;
extern __int64* as_g_script_manager_ptr;
__int64 CmdbtlCameraNatives_ed68d0(char a1, float a2);

__int64 CmdbtlCameraNatives_ed68d0(char a1, float a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  char v17;
  __int64 v18;
  __int64 result;
  _QWORD v20[2];
  _QWORD v21[2];

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_9:
  v9 = GameData_2203490;
  v10 = *(_QWORD*)(GameData_2203490 + 752);
  v11 = *(_QWORD*)(GameData_2203490 + 760);
  if ((a1 & 1) == 0) {
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                memory_order_relaxed);
    }
    v14 = *(_QWORD*)(v9 + 880);
    v15 = *(_QWORD*)(v9 + 888);
    if (v15 == 0) {
      v18 = 0;
      v17 = 1;
      v12 = v10;
      if (v11 == 0) {
        goto LABEL_26;
      }
      goto LABEL_25;
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    v13 = v11;
    v12 = v10;
    v11 = v15;
    goto LABEL_20;
  }
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  v12 = *(_QWORD*)(v9 + 880);
  v13 = *(_QWORD*)(v9 + 888);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
  }
  if (v11 != 0) {
    v14 = v10;
  LABEL_20:
    v16 = (atomic_ullong*)(v11 + 16);
    v17 = 0;
    v18 = v11;
    v11 = v13;
    atomic_fetch_add_explicit(v16, 1u, memory_order_relaxed);
    if (v13 == 0) {
      goto LABEL_26;
    }
  LABEL_25:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_26;
  }
  v18 = 0;
  v17 = 1;
  v11 = v13;
  v14 = v10;
  if (v13 != 0) {
    goto LABEL_25;
  }

LABEL_26:
  v21[0] = v14;
  v21[1] = v18;
  if ((v17 & 1) == 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
  }
  v20[0] = v12;
  v20[1] = v11;
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e7fde0(v9 + 16, v21, v20, 0, a2, 0.0f);
    result = std___1___shared_weak_count___release_weak(v11);
    if ((v17 & 1) != 0) {
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  result = GameRoutine_e7fde0(v9 + 16, v21, v20, 0, a2, 0.0f);
  if ((v17 & 1) == 0) {
  LABEL_30:
    result = std___1___shared_weak_count___release_weak(v18);
  }

LABEL_31:
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v17 & 1) == 0) {
    result = std___1___shared_weak_count___release_weak(v18);
  }
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
  }
  if ((v17 & 1) == 0) {
    return std___1___shared_weak_count___release_weak(v18);
  }
  return result;
}

#pragma GCC visibility pop
