#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_110c660(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64* GameData_212d448[9];
__int64 CustomModifier_Auto_Unknown3(__int64 a1);

__int64 CustomModifier_Auto_Unknown3(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  int v28;
  int v29;

  *(_DWORD*)(a1 + 32) = 1;
  v2 = GameData_212d448[0];
  v3 = *GameData_212d448[0];
  v4 = *(_QWORD*)(*GameData_212d448[0] + 32);
  if (v4 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v5 = *(_QWORD*)(v3 + 40);
    v6 = *(_QWORD*)(v4 + 8) == -1 || v5 == 0;
    if (v6 || (v7 = *(_QWORD*)(v5 + 80)) == 0 ||
        (*(_QWORD*)(v7 + 8) != -1 ? (v8 = *(_QWORD*)(v5 + 88) == 0)
                                  : (v8 = true),
         v8 || *(_QWORD*)(v4 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v4);
    }
    else {
      std___1___shared_weak_count___release_weak(v4);
      v9 = *(_QWORD*)(v5 + 88);
      v10 = *(_QWORD*)(v9 + 392);
      v11 = *(_QWORD*)(v9 + 400);
      if (v11 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                  memory_order_relaxed);
      }
      v12 = *(unsigned int*)(v10 + 11784);
      v13 = v12 >= 0x22;
      v14 = 0x36C260000uLL >> v12;
      v15 = !v13;
      v16 = v15 & v14;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
      if (v16 != 0) {
        *(_DWORD*)(a1 + 32) |= 2u;
      }
    }
  }
  v17 = *v2;
  v18 = *(_QWORD*)(*v2 + 56);
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                              memory_order_relaxed);
    v19 = *(_QWORD*)(v17 + 64);
    v20 = *(_QWORD*)(v18 + 8) == -1 || v19 == 0;
    if (v20 || (v21 = *(_QWORD*)(v19 + 80)) == 0 ||
        (*(_QWORD*)(v21 + 8) != -1 ? (v22 = *(_QWORD*)(v19 + 88) == 0)
                                   : (v22 = true),
         v22 || *(_QWORD*)(v18 + 8) == -1)) {
      std___1___shared_weak_count___release_weak(v18);
    }
    else {
      std___1___shared_weak_count___release_weak(v18);
      v23 = *(_QWORD*)(v19 + 88);
      v24 = *(_QWORD*)(v23 + 392);
      v25 = *(_QWORD*)(v23 + 400);
      if (v25 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                                  memory_order_relaxed);
      }
      v26 = *(unsigned int*)(v24 + 11784);
      v13 = v26 >= 0x22;
      v27 = 0x36C260000uLL >> v26;
      v28 = !v13;
      v29 = v28 & v27;
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
        std___1___shared_weak_count___release_weak(v25);
      }
      if (v29 != 0) {
        *(_DWORD*)(a1 + 32) |= 4u;
      }
    }
  }
  return GameRoutine_110c660(a1);
}

#pragma GCC visibility pop
