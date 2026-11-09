#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d477c0(_QWORD, _QWORD);
__int64 StateActionBase_Unknown5(void);
__int64 StateActionBase_d48970(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 StateRepelled_Unknown5_f50a60(_QWORD* a1);
__int64 StateRepelled_Unknown2(__int64 result);

__int64 StateRepelled_Unknown5_f50a60(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  StateActionBase_Unknown5();
  if (a1[13] != 0) {
    v2 = a1[14];
    v3 = *(_QWORD*)(a1[1] + 456LL);
    v17 = a1[13];
    v18 = v2;
    if (v2 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d477c0(v3 + 8, &v17);
    v4 = v18;
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
    v5 = a1[14];
    a1[13] = 0;
    a1[14] = 0;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
  }
  if (a1[15] != 0) {
    v6 = a1[16];
    v7 = *(_QWORD*)(a1[1] + 456LL);
    v15 = a1[15];
    v16 = v6;
    if (v6 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_d477c0(v7 + 8, &v15);
    v8 = v16;
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    v9 = a1[16];
    a1[15] = 0;
    a1[16] = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }
  v10 = *(_QWORD*)(a1[1] + 488LL);
  v11 = *(_QWORD*)(v10 + 192);
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  result = StateActionBase_d48970(a1, 0.6f);
  v13 = *(_QWORD*)(*(_QWORD*)(a1[1] + 8LL) + 32LL);
  if (v13 != 0) {
    v14 = *(float*)(v13 + 384);
    if (v14 < 0.2f) {
      v14 = 0.2f;
    }
    *(float*)(v13 + 384) = v14;
  }
  return result;
}

__int64 StateRepelled_Unknown2(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(result + 48);
  v2 = result;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0xFFFFFFFE00000000LL;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    result = std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(v2 + 56);
  v4 = *(_QWORD*)(v2 + 112);
  *(_QWORD*)(v2 + 80) = 0;
  *(_DWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 64) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(v2 + 128);
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

#pragma GCC visibility pop
