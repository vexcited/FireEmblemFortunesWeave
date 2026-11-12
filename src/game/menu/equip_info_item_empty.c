#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* LayoutAccessor_1560520(__int64*, const char*, const char*, const char*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 ui_LayoutAccessor_empty_;
__int64 EquipInfoItem_Empty_Unknown16(_QWORD* a1);

__int64 EquipInfoItem_Empty_Unknown16(_QWORD* a1)
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
  atomic_ullong* v12;
  __int64* v13;
  __int64* v15;
  __int64* v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v15;
    if (v15 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830((__int64)v6, 0);
  LayoutAccessor_1560520((__int64*)(a1[1] + 952LL), "L_MenuItem_Empty",
                         "MenuItemList", "Empty");
  LayoutAccessor_1560070((void*)(&v17_.v17), (__int64*)(a1[1] + 952LL),
                         "Empty");
  v8 = v17_.v17;
  v7 = v17_.v18;
  v9 = a1[7];
  v17_.v17 = 0;
  v17_.v18 = 0;
  a1[6] = v8;
  a1[7] = v7;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
    if (v17_.v18 != 0) {
      std___1___shared_weak_count___release_weak(v17_.v18);
    }
    v7 = a1[7];
  }
  if (v7 == 0) {
    goto LABEL_14;
  }
  v10 = std___1___shared_weak_count_lock(v7);
  if (v10 == 0) {
    goto LABEL_14;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = (__int64*)a1[6];
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v13;
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
    v13 = v16;
    if (v16 != nullptr) {
      return LayoutAccessor_155e830((__int64)v13, 1);
    }
    goto LABEL_14;
  }
  if (v13 == nullptr) {
  LABEL_14:
    v13 = &ui_LayoutAccessor_empty_;
  }
  return LayoutAccessor_155e830((__int64)v13, 1);
}

#pragma GCC visibility pop
