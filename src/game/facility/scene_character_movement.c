#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1077500(_QWORD, _QWORD);
__int64 GameRoutine_1417e70(_QWORD, _QWORD);
__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_21f4000;
float SceneCharacterMovement_1417b60(__int64 a1);
float SceneCharacterMovement_1417ce0(__int64 a1);
__int64 SceneCharacterMovement_Unknown2(__int64 result);

float SceneCharacterMovement_1417b60(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v13;
  __int64* v14;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 144);
  v4 = *(_QWORD*)(v1 + 152);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 8);
    if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 8), v13 = 0, v14 = &v13,
                    GameRoutine_1469c40(&v14, &v14, v6), v13 != 0)) {
      v8 = *(_QWORD*)(v13 + 392);
      v7 = *(_QWORD*)(v13 + 400);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v8 = 0;
      v7 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v9 = *(_QWORD*)(v3 + 8);
    v10 = 0.0;
    if (v9 == 0) {
      return v10;
    }
    v11 = *(_QWORD*)(v9 + 8);
    v13 = 0;
    v14 = &v13;
    GameRoutine_1469c40(&v14, &v14, v11);
    if (v13 == 0) {
      return v10;
    }
    v8 = *(_QWORD*)(v13 + 392);
    v7 = *(_QWORD*)(v13 + 400);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  if (v8 != 0) {
    v10 = *(float*)(a1 + 36) *
          (float)(*(float*)(*(_QWORD*)(v8 + 11792) + 32LL) *
                  (float)(*(float*)(v8 + 32) *
                          (float)(*(float*)(v8 + 40) +
                                  (float)(1.0 - *(float*)(v8 + 40)))));
    if (v7 == 0) {
      return v10;
    }
  }
  else {
    v10 = 0.0;
    if (v7 == 0) {
      return v10;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v10;
}

float SceneCharacterMovement_1417ce0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64* v15;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 144);
  v4 = *(_QWORD*)(v1 + 152);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 8);
    if (v5 != 0 && (v6 = *(_QWORD*)(v5 + 8), v14 = 0, v15 = &v14,
                    GameRoutine_1469c40(&v15, &v15, v6), v14 != 0)) {
      v8 = *(_QWORD*)(v14 + 392);
      v7 = *(_QWORD*)(v14 + 400);
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    else {
      v8 = 0;
      v7 = 0;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    v9 = *(_QWORD*)(v3 + 8);
    v10 = 1.0;
    if (v9 == 0) {
      return v10;
    }
    v11 = *(_QWORD*)(v9 + 8);
    v14 = 0;
    v15 = &v14;
    GameRoutine_1469c40(&v15, &v15, v11);
    if (v14 == 0) {
      return v10;
    }
    v8 = *(_QWORD*)(v14 + 392);
    v7 = *(_QWORD*)(v14 + 400);
    if (v7 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  v10 = 1.0;
  if (v8 != 0) {
    v12 = GameRoutine_1077500(*(unsigned int*)(v8 + 11784), 0);
    if (v12 != 0) {
      v10 = SceneCharacterMovement_1417b60(a1) / *(float*)(v12 + 32);
    }
  }
  if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    std___1___shared_weak_count___release_weak(v7);
  }
  return v10;
}

__int64 SceneCharacterMovement_Unknown2(__int64 result)
{
  if ((*(_BYTE*)(GameData_21f4000 + 132) & 1) == 0) {
    return GameRoutine_1417e70(result, 0);
  }
  return result;
}

#pragma GCC visibility pop
