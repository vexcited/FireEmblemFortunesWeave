#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__n128 GmapSpotEmptyMenuItem_DrawText(_QWORD* a1);

__n128 GmapSpotEmptyMenuItem_DrawText(_QWORD* a1)
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
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  atomic_ullong* v19;
  __int64* v20;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64* v25;

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
  v22 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v22);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
  LayoutAccessor_1562060(v4, "T_Txt", v5);
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
  v23 = v10;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v8);
  v10 = v23;
  if (v23 == nullptr) {
  LABEL_10:
    v10 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  LayoutAccessor_1562cf0(v10, "Info_Off");
  v11 = a1[7];
  if (v11 == 0) {
    goto LABEL_15;
  }
  v12 = std___1___shared_weak_count_lock(v11);
  if (v12 == 0) {
    goto LABEL_15;
  }
  v13 = v12;
  v14 = (atomic_ullong*)(v12 + 8);
  v15 = (__int64*)a1[6];
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v24 = v15;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak(v13);
  v15 = v24;
  if (v24 == nullptr) {
  LABEL_15:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_16:
  ui_LayoutAccessor_SetPaneVisible(v15, "L_Info", 0);
  v16 = a1[7];
  if (v16 == 0) {
    goto LABEL_20;
  }
  v17 = std___1___shared_weak_count_lock(v16);
  if (v17 == 0) {
    goto LABEL_20;
  }
  v18 = v17;
  v19 = (atomic_ullong*)(v17 + 8);
  v20 = (__int64*)a1[6];
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v25 = v20;
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    v20 = v25;
    if (v25 != nullptr) {
      return ui_LayoutAccessor_SetPaneVisible(v20, "A_Txt", 0);
    }
    goto LABEL_20;
  }
  if (v20 == nullptr) {
  LABEL_20:
    v20 = &ui_LayoutAccessor_empty_;
  }
  return ui_LayoutAccessor_SetPaneVisible(v20, "A_Txt", 0);
}

#pragma GCC visibility pop
