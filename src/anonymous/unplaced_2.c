#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
EquipInfoItem_DustItem_16d4e60(PSEUDO_X8, __int64, _QWORD**, _BYTE**, __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
void GameRoutine_18855c0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void anonymous_16d4cf0(PSEUDO_X8 x8_, _QWORD* a1,
                                                  _QWORD** a2, _BYTE** a3,
                                                  __int64 a4);

__attribute__((swiftcall)) void anonymous_16d4cf0(PSEUDO_X8 x8_, _QWORD* a1,
                                                  _QWORD** a2, _BYTE** a3,
                                                  __int64 a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  EquipInfoItem_DustItem_16d4e60((void*)(&v13_.v13), a1[10], a2, a3, a4);
  v7 = v13_.v14;
  if (v13_.v14 == 0) {
    goto LABEL_15;
  }
  v8 = std___1___shared_weak_count_lock(v13_.v14);
  v9 = v13_.v13;
  v10 = v8;
  std___1___shared_weak_count___release_weak(v7);
  if (v10 == 0 || v9 == nullptr) {
    if (v10 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v13_.v13 = v9;
    v13_.v14 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_18855c0(a1, &v13_.v13);
    v12 = v13_.v14;
    if (v13_.v14 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
    *a5 = v9;
    a5[1] = (__int64*)v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      return;
    }
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  if (v9 == nullptr) {
  LABEL_15:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
}

#pragma GCC visibility pop
