#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_1581060(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 ui_LayoutAccessor_empty_;
__int64 BlacksmithMenuItem_Before_Unknown70(__int64 a1);
__int64 BlacksmithMenuItem_Before_Unknown55(__int64 a1);

__int64 BlacksmithMenuItem_Before_Unknown70(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 96);
  v2 = *(int*)(a1 + 104);
  if (v1 != 0) {
    return v1 + 8 * v2 + 828;
  }
  else {
    return *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL) +
                      8LL) +
           12LL * (int)v2 + 4;
  }
}

__int64 BlacksmithMenuItem_Before_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  atomic_ullong* v21;
  __int64* v22;
  __int64* v24;
  __int64* v25;
  __int64* v26;

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
    v24 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v24;
    if (v24 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v7 = *(_QWORD*)(a1 + 96);
  v8 = *(int*)(a1 + 104);
  if (v7 != 0) {
    v9 = v7 + 8 * v8 + 828;
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL) +
                    8LL) +
         12LL * (int)v8 + 4;
  }
  GameRoutine_15792c0(v6, v9, 0, 1, 0, "L_Icon", "T_Txt", 1);
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v25 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
    v14 = v25;
    if (v25 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  if (v14 == nullptr) {
  LABEL_13:
    v14 = &ui_LayoutAccessor_empty_;
  }

LABEL_14:
  v15 = *(_QWORD*)(a1 + 96);
  v16 = *(int*)(a1 + 104);
  if (v15 != 0) {
    v17 = v15 + 8 * v16 + 828;
  }
  else {
    v17 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v16 + 4;
  }
  GameRoutine_1581060(v14, v15, v17, 1, 0, 0);
  v18 = *(_QWORD*)(a1 + 56);
  if (v18 == 0) {
    goto LABEL_21;
  }
  v19 = std___1___shared_weak_count_lock(v18);
  if (v19 == 0) {
    goto LABEL_21;
  }
  v20 = v19;
  v21 = (atomic_ullong*)(v19 + 8);
  v22 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v21, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v26 = v22;
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
    v22 = v26;
    if (v26 != nullptr) {
      return GameRoutine_1562cf0(v22, "State_Off");
    }
    goto LABEL_21;
  }
  if (v22 == nullptr) {
  LABEL_21:
    v22 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562cf0(v22, "State_Off");
}

#pragma GCC visibility pop
