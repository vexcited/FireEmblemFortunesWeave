#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlCameraCutBase_vtable)();
extern __int64 (*game_cmdbtl_CmdBtlCameraCutLookTo_vtable[])();
__int64 CmdBtlCameraCutLookTo_Destructor(_QWORD* a1);

__int64 CmdBtlCameraCutLookTo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  _QWORD v16[2];

  *a1 = game_cmdbtl_CmdBtlCameraCutLookTo_vtable;
  v2 = a1[6];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = (_QWORD*)a1[5];
      v5 = v3;
      if (v4 != nullptr) {
        v16[0] = "LookTo";
        v16[1] = 6;
        GameRoutine_ff7720(v4 + 43, v16);
        v6 = v4[27];
        v7 = v4[28];
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v6 != 0) {
          *(_BYTE*)(v6 + 60) = v4[44] != v4[43];
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak();
      }
    }
  }
  v8 = a1[8];
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock(v8);
    if (v9 != 0) {
      v10 = (_QWORD*)a1[7];
      v11 = v9;
      if (v10 != nullptr) {
        v16[0] = "LookTo";
        v16[1] = 6;
        GameRoutine_ff7720(v10 + 43, v16);
        v12 = v10[27];
        v13 = v10[28];
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v12 != 0) {
          *(_BYTE*)(v12 + 60) = v10[44] != v10[43];
        }
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak();
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak();
      }
    }
    if (a1[8] != 0) {
      std___1___shared_weak_count___release_weak();
    }
  }
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  *a1 = &game_cmdbtl_CmdBtlCameraCutBase_vtable;
  v15 = a1[2];
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

#pragma GCC visibility pop
