#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157af40(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 UnitUtil_1212520(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 ui_LayoutAccessor_empty_;
__int64 DeliveryMaterialMenuItem_DrawText(__int64 a1);

__int64 DeliveryMaterialMenuItem_DrawText(__int64 a1)
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
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 result;
  __int64* v26;
  __int64* v27;

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
  v26 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak();
  v6 = v26;
  if (v26 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  GameRoutine_157af40(v6, *(unsigned int*)(a1 + 40));
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
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v27 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak();
  v11 = v27;
  if (v27 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  LayoutAccessor_1562cf0(v11, "NumEndurance");
  v12 = *(_QWORD*)(a1 + 56);
  if (v12 == 0) {
    goto LABEL_15;
  }
  v13 = std___1___shared_weak_count_lock(v12);
  if (v13 == 0) {
    goto LABEL_15;
  }
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak();
    if (v14 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if (v14 == nullptr) {
  LABEL_15:
    v14 = &ui_LayoutAccessor_empty_;
  }
LABEL_16:
  v15 = game_util_Format("%d", *(_DWORD*)(a1 + 100));
  v16 = ui_LayoutAccessor_FindTextBox(v14, "T_Num");
  if (v16 != 0) {
    GameRoutine_156c5d0(v16, v15, 0);
  }
  v17 = *(_QWORD*)(a1 + 56);
  if (v17 == 0) {
    goto LABEL_22;
  }
  v18 = std___1___shared_weak_count_lock(v17);
  if (v18 == 0) {
    goto LABEL_22;
  }
  v19 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v19 != nullptr) {
      goto LABEL_23;
    }
    goto LABEL_22;
  }
  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
  std___1___shared_weak_count___release_weak();
  if (v19 == nullptr) {
  LABEL_22:
    v19 = &ui_LayoutAccessor_empty_;
  }
LABEL_23:
  v20 = *(int*)(a1 + 40);
  v21 = *(_QWORD*)(a1 + 88);
  if (v21 != 0) {
    v22 = v21 + 8 * v20 + 828;
  }
  else {
    v22 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * (int)v20 + 4;
  }
  v23 = UnitUtil_1212520(v22);
  v24 = game_util_Format("%d", v23);
  result = ui_LayoutAccessor_FindTextBox(v19, "T_MaxNum");
  if (result != 0) {
    return GameRoutine_156c5d0(result, v24, 0);
  }
  return result;
}

#pragma GCC visibility pop
