#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157e3a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 SkillFixMenuItem_Unknown55(_QWORD* a1);
_QWORD* LayoutAccessor_1560520(__int64*, const char*, const char*, const char*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 SkillFixMenuItem_Unknown17(_QWORD* a1);

__int64 SkillFixMenuItem_Unknown17(_QWORD* a1)
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64* v20;
  __int64* v21;
  __int64* v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = (__int64*)a1[6];
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v20 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
    v6 = v20;
    if (v20 != nullptr) {
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
  LayoutAccessor_1560520((__int64*)(a1[1] + 952LL), "L_MenuItem_SkillCommand",
                         "MenuItemList", "SkillFixMenuItem");
  LayoutAccessor_1560070((void*)(&v23_.v23), (__int64*)(a1[1] + 952LL),
                         "SkillFixMenuItem");
  v8 = v23_.v23;
  v7 = v23_.v24;
  v9 = a1[7];
  v23_.v23 = 0;
  v23_.v24 = 0;
  a1[6] = v8;
  a1[7] = v7;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v9);
    if (v23_.v24 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v23_.v24);
    }
    v7 = a1[7];
  }
  if (v7 == 0) {
    goto LABEL_14;
  }
  v10 = std___1___shared_weak_count_lock_alt1(v7);
  if (v10 == 0) {
    goto LABEL_14;
  }
  v11 = v10;
  v12 = (atomic_ullong*)(v10 + 8);
  v13 = (__int64*)a1[6];
  if (atomic_fetch_add(v12, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v13 != nullptr) {
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  v21 = v13;
  (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
  std___1___shared_weak_count___release_weak_alt1(v11);
  v13 = v21;
  if (v21 == nullptr) {
  LABEL_14:
    v13 = &ui_LayoutAccessor_empty_;
  }
LABEL_15:
  LayoutAccessor_155e830((__int64)v13, 1);
  v14 = a1[7];
  if (v14 == 0) {
    goto LABEL_19;
  }
  v15 = std___1___shared_weak_count_lock_alt1(v14);
  if (v15 == 0) {
    goto LABEL_19;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = (__int64*)a1[6];
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v22 = v18;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak_alt1(v16);
    v18 = v22;
    if (v22 != nullptr) {
      return LayoutAccessor_1562cf0((__int64)v18, (unsigned int*)"Info");
    }
    goto LABEL_19;
  }
  if (v18 == nullptr) {
  LABEL_19:
    v18 = &ui_LayoutAccessor_empty_;
  }
  return LayoutAccessor_1562cf0((__int64)v18, (unsigned int*)"Info");
}

__int64 SkillFixMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v8;

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
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v8;
    if (v8 != nullptr) {
      return GameRoutine_157e3a0(v6, a1 + 12, 2, a1[11]);
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_157e3a0(v6, a1 + 12, 2, a1[11]);
}

#pragma GCC visibility pop
