#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* LayoutAccessor_1560520(__int64*, __int64, __int64, _BYTE*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 ui_LayoutAccessor_empty_;
void GameRoutine_157e0f0(__int64*, __int64, _BYTE*);
void LayoutAccessor_155e830(__int64*, char);
void EquipMenuItem_Info_Unknown17(__int64 a1);
_QWORD* LayoutAccessor_1560520_alt1(__int64*, const char*, const char*,
                                    char*) __asm__("LayoutAccessor_1560520");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameHr_157e0f0(__int64*, const char*, const char*);

void EquipMenuItem_Info_Unknown17(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  char* v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
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
  unsigned __int64 v21;
  const char* v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  const char* v26;
  const char* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v28 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt1(v4);
    v6 = v28;
    if (v28 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  LayoutAccessor_155e830_alt1((__int64)v6, 0);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v7 = *(char**)(a1 + 112);
  }
  else {
    v7 = (char*)(a1 + 97);
  }
  LayoutAccessor_1560520_alt1((__int64*)(*(_QWORD*)(a1 + 8) + 952LL),
                              "L_MenuItem_Info", "MenuItemList", v7);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v8 = *(const char**)(a1 + 112);
  }
  else {
    v8 = (const char*)(a1 + 97);
  }
  LayoutAccessor_1560070_alt1((void*)(&v31_.v31),
                              (__int64*)(*(_QWORD*)(a1 + 8) + 952LL), v8);
  v10 = v31_.v31;
  v9 = v31_.v32;
  v11 = *(_QWORD*)(a1 + 56);
  v31_.v31 = 0;
  v31_.v32 = 0;
  *(_QWORD*)(a1 + 48) = v10;
  *(_QWORD*)(a1 + 56) = v9;
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v11);
    if (v31_.v32 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v31_.v32);
    }
    v9 = *(_QWORD*)(a1 + 56);
  }
  if (v9 == 0) {
    goto LABEL_20;
  }
  v12 = std___1___shared_weak_count_lock_alt1(v9);
  if (v12 == 0) {
    goto LABEL_20;
  }
  v13 = v12;
  v14 = (atomic_ullong*)(v12 + 8);
  v15 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v29 = v15;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak_alt1(v13);
  v15 = v29;
  if (v29 == nullptr) {
  LABEL_20:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_21:
  LayoutAccessor_155e830_alt1((__int64)v15, 1);
  v16 = *(_QWORD*)(a1 + 56);
  if (v16 == 0) {
    goto LABEL_25;
  }
  v17 = std___1___shared_weak_count_lock_alt1(v16);
  if (v17 == 0) {
    goto LABEL_25;
  }
  v18 = v17;
  v19 = (atomic_ullong*)(v17 + 8);
  v20 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v19, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v20 != nullptr) {
      goto LABEL_26;
    }
    goto LABEL_25;
  }
  v30 = v20;
  (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
  std___1___shared_weak_count___release_weak_alt1(v18);
  v20 = v30;
  if (v30 == nullptr) {
  LABEL_25:
    v20 = &ui_LayoutAccessor_empty_;
  }
LABEL_26:
  v21 = *(unsigned __int8*)(a1 + 120);
  if ((*(_BYTE*)(a1 + 96) & 1) != 0) {
    v22 = *(const char**)(a1 + 112);
  }
  else {
    v22 = (const char*)(a1 + 97);
  }
  v23 = v21 >> 1;
  v24 = (v21 & 1) == 0;
  v25 = *(_QWORD*)(a1 + 128);
  if (v24) {
    v25 = v23;
  }
  v26 = (const char*)(a1 + 121);
  if (!v24) {
    v26 = *(const char**)(a1 + 136);
  }
  if (v25 != 0) {
    v27 = v26;
  }
  else {
    v27 = nullptr;
  }
  GameHr_157e0f0(v20, v22, v27);
}

#pragma GCC visibility pop
