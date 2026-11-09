#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 GameData_221a540;
extern __int64* GameData_212ea58;
__int64 CmdBtlSubUseMenuItem_Unknown71(__int64 result);

__int64 CmdBtlSubUseMenuItem_Unknown71(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = result;
  v2 = GameData_212ea58;
  v3 = *GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 640);
  v5 = *(_QWORD*)(*GameData_212ea58 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    result = std___1___shared_weak_count___release_weak(v5);
    if (v4 != 0) {
      goto LABEL_4;
    }
  }
  else if (v4 != 0) {
    goto LABEL_4;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v9 = *(_QWORD*)(v3 + 664);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = std___1___shared_weak_count___release_weak(v9);
    }
  }

LABEL_4:
  *(_BYTE*)(v4 + 8) = 5;
  v6 = (_QWORD*)*v2;
  v7 = *(_QWORD*)(*v2 + 640);
  v8 = v6[81];
  if (v8 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    result = std___1___shared_weak_count___release_weak(v8);
    if (v7 != 0) {
      goto LABEL_7;
    }
  }
  else if (v7 != 0) {
    goto LABEL_7;
  }
  v7 = v6[82];
  v10 = v6[83];
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      result = std___1___shared_weak_count___release_weak(v10);
    }
  }

LABEL_7:
  *(_DWORD*)(v7 + 16) = *(_DWORD*)(v1 + 40);
  if (GameData_221a540 != 0) {
    *(_DWORD*)(GameData_221a540 + 152) = 11;
  }
  return result;
}

#pragma GCC visibility pop
