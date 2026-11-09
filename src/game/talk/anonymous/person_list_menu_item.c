#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1570b30(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 ui_LayoutAccessor_empty_;
__int64 PersonListMenuItem_Unknown55(_QWORD* a1);
__int64 PersonListMenuItem_Unknown63(__int64 a1);
__int64 PersonListMenuItem_Unknown64(__int64 a1);
__int64 PersonListMenuItem_Unknown65(_QWORD* a1);

__int64 PersonListMenuItem_Unknown55(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64* v9;
  _QWORD v10[5];

  v1 = a1[12];
  memset(&v10[2], 0, 13);
  v10[4] = 0;
  v10[0] = 0;
  v10[1] = v1;
  v10[2] = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1) & 1;
  *(_DWORD*)((char*)&v10[2] + 1) =
      (*(__int64 (**)(_QWORD*))(*a1 + 568LL))(a1) & 1;
  WORD1(v10[2]) = (*(__int64 (**)(_QWORD*))(*a1 + 576LL))(a1) & 1;
  BYTE4(v10[2]) = (*(__int64 (**)(_QWORD*))(*a1 + 600LL))(a1) & 1;
  *(_WORD*)((char*)&v10[2] + 5) =
      (*(__int64 (**)(_QWORD*))(*a1 + 608LL))(a1) & 1;
  BYTE6(v10[2]) = (*(__int64 (**)(_QWORD*))(*a1 + 616LL))(a1) & 1;
  BYTE5(v10[3]) = (*(__int64 (**)(_QWORD*))(*a1 + 640LL))(a1);
  v3 = a1[7];
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = (__int64*)a1[6];
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v9 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v7 = v9;
    if (v9 != nullptr) {
      return GameRoutine_1570b30(v7, v10);
    }
    goto LABEL_5;
  }
  if (v7 == nullptr) {
  LABEL_5:
    v7 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1570b30(v7, v10);
}

__int64 PersonListMenuItem_Unknown63(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  const char* v12;
  __int64 v14;
  __int64* v15;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v14 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v14);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 552LL))(a1);
  v6 = game_util_Format("%sDefault", v5);
  GameRoutine_1562680(v4, v6, 1.0);
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
  v15 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v9);
  v11 = v15;
  if (v15 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }

LABEL_11:
  if (*(_BYTE*)(a1 + 79) != 0) {
    v12 = "CursorDecide";
  }
  else {
    v12 = "CursorNone";
  }
  return GameRoutine_1562680(v11, v12, 1.0);
}

__int64 PersonListMenuItem_Unknown64(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  const char* v12;
  __int64 v14;
  __int64* v15;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v14 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v14);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  v5 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 552LL))(a1);
  v6 = game_util_Format("%sSelect", v5);
  GameRoutine_1562680(v4, v6, 1.0);
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
  v15 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak(v9);
  v11 = v15;
  if (v15 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }

LABEL_11:
  if (*(_BYTE*)(a1 + 79) != 0) {
    v12 = "CursorDecide";
  }
  else {
    v12 = "CursorSelect";
  }
  return GameRoutine_1562680(v11, v12, 1.0);
}

__int64 PersonListMenuItem_Unknown65(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
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
  v5 = (const char*)(*(__int64 (**)(_QWORD*))(*a1 + 552LL))(a1);
  v6 = game_util_Format("%sDefault", v5);
  GameRoutine_1562680(v4, v6, 1.0);
  v7 = a1[7];
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = v8;
  v10 = (atomic_ullong*)(v8 + 8);
  v11 = (__int64*)a1[6];
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
    v11 = v14;
    if (v14 != nullptr) {
      return GameRoutine_1562680(v11, "CursorDecide", 1.0);
    }
    goto LABEL_10;
  }
  if (v11 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562680(v11, "CursorDecide", 1.0);
}

#pragma GCC visibility pop
