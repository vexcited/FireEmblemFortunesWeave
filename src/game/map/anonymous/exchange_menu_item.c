#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_157b5c0(__int64 result, unsigned __int16*);
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 ExchangeMenuItem_Unknown58(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, char, _QWORD*, __int64,
                     __int64, char);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 std___1___shared_weak_count___release_weak();
extern __int64* game_g_empty_item_ptr;
extern __int64 ui_LayoutAccessor_empty_;
__n128 ExchangeMenuItem_Unknown55_alt1(__int64 a1) __asm__(
    "ExchangeMenuItem_Unknown55");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 Util_15792c0_alt1(__int64*, unsigned __int16*, char, char, _QWORD*,
                          const char*, const char*,
                          char) __asm__("Util_15792c0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, const char*,
    char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 ExchangeMenuItem_Unknown55(__int64 a1);

__int64 ExchangeMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  __int64* v7;
  unsigned __int16* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64* v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
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
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v28 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v28);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = *(int*)(a1 + 40);
  v6 = *(_QWORD**)(a1 + 88);
  v7 = game_g_empty_item_ptr;
  if ((_DWORD)v5 == -1) {
    v8 = (unsigned __int16*)game_g_empty_item_ptr;
  }
  else {
    v8 = (unsigned __int16*)&v6[v5 + 103] + 2;
  }
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  Util_15792c0_alt1(v4, v8, 0, 1, v6, "L_Icon", "T_Txt", v9 & 1);
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock_alt1(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v29 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak_alt1(v12);
  v14 = v29;
  if (v29 == nullptr) {
  LABEL_13:
    v14 = &ui_LayoutAccessor_empty_;
  }
LABEL_14:
  LayoutAccessor_1562cf0_alt1((__int64)v14, (unsigned int*)"Info");
  v15 = *(_QWORD*)(a1 + 56);
  if (v15 == 0) {
    goto LABEL_18;
  }
  v16 = std___1___shared_weak_count_lock_alt1(v15);
  if (v16 == 0) {
    goto LABEL_18;
  }
  v17 = v16;
  v18 = (atomic_ullong*)(v16 + 8);
  v19 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v19 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v30 = v19;
  (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
  std___1___shared_weak_count___release_weak_alt1(v17);
  v19 = v30;
  if (v30 == nullptr) {
  LABEL_18:
    v19 = &ui_LayoutAccessor_empty_;
  }
LABEL_19:
  LayoutAccessor_1560070_alt1((void*)(&v31_.v31), v19, "L_Icon");
  result = v31_.v32;
  if (v31_.v32 == 0) {
    return result;
  }
  v21 = std___1___shared_weak_count_lock_alt1(v31_.v32);
  v22 = v31_.v31;
  result = v31_.v32;
  if (v31_.v32 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v31_.v32);
  }
  if (v21 != 0 && v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
    v23 = *(int*)(a1 + 40);
    v24 = *(_QWORD*)(a1 + 88);
    v25 = std___1___shared_weak_count_lock_alt1(v21);
    if (v25 != 0) {
      v26 = v25;
      v27 = v24 + 8 * v23 + 828;
      if ((_DWORD)v23 == -1) {
        v27 = (__int64)v7;
      }
      ui_LayoutAccessor_SetPaneVisible_alt1(v22, "IconLock",
                                            (*(_BYTE*)(v27 + 3) & 0x10) != 0);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak_alt1(v26);
      }
    }
    result = std___1___shared_weak_count___release_weak_alt1(v21);
  }
  else if (v21 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    return std___1___shared_weak_count___release_weak_alt1(v21);
  }
  return result;
}

__int64 ExchangeMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;

  v1 = *(int*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 88);
  if ((_DWORD)v1 == -1) {
    v3 = &game_g_empty_item;
  }
  else {
    v3 = (__int64*)(v2 + 8 * v1 + 828);
  }
  if ((*((_BYTE*)v3 + 3) & 0x10) != 0) {
    return 0;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)v3);
  if ((*(_BYTE*)(v4 + 336) & 4) != 0 ||
      ((1LL << *(_BYTE*)(v4 + 72)) & 0xE01F) == 0) {
    return 0;
  }
  else {
    return GameRoutine_157b5c0(v2, (unsigned __int16*)v3);
  }
}

#pragma GCC visibility pop
