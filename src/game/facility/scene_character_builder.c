#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 SceneCharacterBuilder_Unknown3(__int64 a1);
_QWORD* GameRoutine_cfad30(_QWORD* result, _QWORD*);
__int64 GameRoutine_107e140(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1984bd0(_QWORD, double);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__n128 std___1___shared_weak_count___release_weak();
extern __int64 (*game_facility_SceneCharacterBuilder_LoadStateExec_vtable[])();
extern __int64 (*game_facility_SceneCharacterBuilder_vtable[])();
__n128 SceneCharacterBuilder_Destructor_alt1(__int64 a1) __asm__(
    "SceneCharacterBuilder_Destructor");
_QWORD* SceneCharacterBuilder_1469220_alt1(
    _QWORD* result, __int64* a2, char a3,
    __int64 a4) __asm__("SceneCharacterBuilder_1469220");
_QWORD* SceneCharacterBuilder_1469730(__int64 a1, __int64 a2);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
_QWORD* SceneCharacterBuilder_Destructor(__int64 a1);
__int64 SceneCharacterBuilder_1469220(__int64 result, __int64* a2, char a3,
                                      __int64 a4);

_QWORD* SceneCharacterBuilder_Destructor(__int64 a1)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = game_facility_SceneCharacterBuilder_vtable;
  if (*(_QWORD*)(a1 + 40) != 0) {
    v2 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a1 + 40) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak_alt2(v2);
    }
  }
  result = *(_QWORD**)(a1 + 96);
  *(_BYTE*)(a1 + 56) = 0;
  if (result != nullptr) {
    *(_QWORD*)(a1 + 96) = 0;
    v4 = 40;
    v5 = 32;
    if (result == (_QWORD*)(a1 + 64)) {
      v4 = 32;
    }
    (*(void (**)(__int64))(*result + v4))((__int64)result);
    result = *(_QWORD**)(a1 + 96);
    if (result == (_QWORD*)(a1 + 64)) {
      goto LABEL_11;
    }
    if (result != nullptr) {
      v5 = 40;
    LABEL_11:
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v5))((__int64)result);
    }
  }
  v6 = *(_QWORD*)(a1 + 48);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = (_QWORD*)std___1___shared_weak_count___release_weak_alt2(v6);
    v7 = *(_QWORD*)(a1 + 32);
    if (v7 == 0) {
      return result;
    }
  }
  else {
    v7 = *(_QWORD*)(a1 + 32);
    if (v7 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt2(v7);
  }
  return result;
}

__int64 SceneCharacterBuilder_Unknown3(__int64 a1)
{
  __int64 i;
  __int64 result;

  for (i = *(_QWORD*)(a1 + 16);; i = *(_QWORD*)(a1 + 16)) {
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)i + 8LL))(i, a1);
    if ((result & 1) == 0) {
      break;
    }
    (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 16) + 16LL))(
        *(_QWORD*)(a1 + 16), a1);
  }
  return result;
}

__int64 SceneCharacterBuilder_1469220(__int64 result, __int64* a2, char a3,
                                      __int64 a4)
{
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v17[4];
    _QWORD* v18;
  } v17_;

  if (*a2 != 0) {
    v7 = result;
    if (*(_QWORD*)(result + 40) != 0) {
      v8 = *(_QWORD*)(result + 48);
      *(_QWORD*)(result + 40) = 0;
      *(_QWORD*)(result + 48) = 0;
      if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt2(v8);
      }
    }
    v9 = *(_QWORD**)(v7 + 96);
    *(_BYTE*)(v7 + 56) = 0;
    if (v9 != nullptr) {
      *(_QWORD*)(v7 + 96) = 0;
      v10 = 40;
      if (v9 == (_QWORD*)(v7 + 64)) {
        v10 = 32;
      }
      (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
    }
    v12 = *a2;
    v11 = a2[1];
    v13 = a3 & 1;
    if (v11 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                memory_order_relaxed);
    }
    v14 = *(_QWORD*)(v7 + 48);
    *(_QWORD*)(v7 + 40) = v12;
    *(_QWORD*)(v7 + 48) = v11;
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak_alt2(v14);
    }
    *(_BYTE*)(v7 + 56) = v13;
    v15 = *(_QWORD*)(a4 + 32);
    if (v15 != 0) {
      if (v15 == a4) {
        v17_.v18 = v17_.v17;
        (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v15 + 24LL))(v15, v17_.v17);
      }
      else {
        v17_.v18 =
            (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      }
    }
    else {
      v17_.v18 = nullptr;
    }
    GameRoutine_cfad30(v17_.v17, (_QWORD*)(v7 + 64));
    result = (__int64)v17_.v18;
    if (v17_.v18 == v17_.v17) {
      v16 = 32;
    }
    else {
      if (v17_.v18 == nullptr) {
        return result;
      }
      v16 = 40;
    }
    return (*(__int64 (**)(__int64))(*v17_.v18 + v16))((__int64)v17_.v18);
  }
  return result;
}

_QWORD* SceneCharacterBuilder_1469730(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;

  *(_QWORD*)a1 = game_facility_SceneCharacterBuilder_LoadStateExec_vtable;
  *(_BYTE*)(a1 + 8) = *(_BYTE*)(a2 + 56);
  v4 = *(_QWORD*)(a2 + 8);
  if (v4 == 0) {
    goto LABEL_13;
  }
  v5 = *(_QWORD*)(v4 + 8);
  v30 = 0;
  v28 = &v30;
  result = (_QWORD*)GameRoutine_1469c40(&v28, &v28, v5);
  if (v30 == 0) {
    goto LABEL_13;
  }
  v7 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v30);
  v8 = *(_QWORD*)((char*)((_UNKNOWN*)0x188LL) + v30 + 8);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v7 == 0) {
    goto LABEL_10;
  }
  v9 = *(_QWORD*)(a2 + 40);
  if (v9 == 0) {
    goto LABEL_10;
  }
  v10 = *(_QWORD*)(v7 + 168);
  v11 = *(_QWORD*)(v9 + 120);
  v12 = *(_QWORD*)(v9 + 128);
  if (v12 == 0) {
    if (v10 != *(_QWORD*)(v11 + 168)) {
      goto LABEL_29;
    }
    goto LABEL_10;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                            memory_order_relaxed);
  v13 = *(_QWORD*)(v11 + 168);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v12);
    if (v10 != v13) {
      goto LABEL_29;
    }
  LABEL_10:
    v14 = 1;
    if (v8 == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if (v10 == v13) {
    goto LABEL_10;
  }
LABEL_29:
  v20 = *(_QWORD*)(a2 + 8);
  v30 = 0;
  v28 = &v30;
  GameRoutine_1469c40(&v28, &v28, *(_QWORD*)(v20 + 8));
  v21 = *(_QWORD*)(a2 + 40);
  v22 = v30;
  v24 = *(__int64**)(v21 + 120);
  v23 = *(_QWORD*)(v21 + 128);
  v28 = v24;
  v29 = v23;
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_107e140(v22, &v28, a2 + 64);
  v25 = v29;
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    std___1___shared_weak_count___release_weak_alt1(v25);
  }
  if (*(_QWORD*)(a2 + 40) != 0) {
    v26 = *(_QWORD*)(a2 + 48);
    *(_QWORD*)(a2 + 40) = 0;
    *(_QWORD*)(a2 + 48) = 0;
    if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
      std___1___shared_weak_count___release_weak_alt1(v26);
    }
  }
  result = *(_QWORD**)(a2 + 96);
  *(_BYTE*)(a2 + 56) = 0;
  if (result != nullptr) {
    *(_QWORD*)(a2 + 96) = 0;
    v27 = 40;
    if (result == (_QWORD*)(a2 + 64)) {
      v27 = 32;
    }
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v27))((__int64)result);
  }
  v14 = 0;
  if (v8 == 0) {
  LABEL_12:
    if (v14 != 0) {
      goto LABEL_13;
    }
    goto LABEL_24;
  }
LABEL_11:
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_12;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v8);
  if (v14 != 0) {
  LABEL_13:
    if (*(_QWORD*)(a2 + 40) != 0) {
      v15 = *(_QWORD*)(a2 + 48);
      *(_QWORD*)(a2 + 40) = 0;
      *(_QWORD*)(a2 + 48) = 0;
      if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak_alt1(v15);
      }
    }
    result = *(_QWORD**)(a2 + 96);
    *(_BYTE*)(a2 + 56) = 0;
    if (result != nullptr) {
      *(_QWORD*)(a2 + 96) = 0;
      v16 = 40;
      if (result == (_QWORD*)(a2 + 64)) {
        v16 = 32;
      }
      result =
          (_QWORD*)(*(__int64 (**)(__int64))(*result + v16))((__int64)result);
    }
    *(_BYTE*)(a1 + 8) = 0;
    return result;
  }
LABEL_24:
  if (*(_BYTE*)(a1 + 8) == 1) {
    v17 = *(_QWORD*)(a2 + 8);
    v18 = *(_QWORD*)(v17 + 160);
    v19 = *(_QWORD*)(v17 + 168);
    if (v19 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                memory_order_relaxed);
      result = (_QWORD*)GameRoutine_1984bd0(v18, 0.0f);
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v19);
      }
    }
    else {
      return (_QWORD*)GameRoutine_1984bd0(v18, 0.0f);
    }
  }
  return result;
}

#pragma GCC visibility pop
