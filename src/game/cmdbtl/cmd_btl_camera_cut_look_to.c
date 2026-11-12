#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ff7720(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlCameraCutBase_vtable)();
extern __int64 (*game_cmdbtl_CmdBtlCameraCutLookTo_vtable[])();
__int64 CmdBtlCameraCutLookTo_Destructor(_QWORD* a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void game_ff7720(unsigned __int8**, __int64*);

__int64 CmdBtlCameraCutLookTo_Destructor(_QWORD* a1)
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
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;
  __int64 v16;
  __int64 v17[2];

  *a1 = game_cmdbtl_CmdBtlCameraCutLookTo_vtable;
  v2 = a1[6];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2);
    if (v3 != 0) {
      v4 = a1[5];
      v5 = v3;
      if (v4 != 0) {
        v17[0] = (__int64)"LookTo";
        v17[1] = 6;
        game_ff7720((unsigned __int8**)(v4 + 344), v17);
        v6 = *(_QWORD*)(v4 + 216);
        v7 = *(_QWORD*)(v4 + 224);
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v6 != 0) {
          *(_BYTE*)(v6 + 60) = *(_QWORD*)(v4 + 352) != *(_QWORD*)(v4 + 344);
        }
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak_alt1(v7);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
    }
  }
  v8 = a1[8];
  if (v8 != 0) {
    v9 = std___1___shared_weak_count_lock_alt1(v8);
    if (v9 != 0) {
      v10 = a1[7];
      v11 = v9;
      if (v10 != 0) {
        v17[0] = (__int64)"LookTo";
        v17[1] = 6;
        game_ff7720((unsigned __int8**)(v10 + 344), v17);
        v12 = *(_QWORD*)(v10 + 216);
        v13 = *(_QWORD*)(v10 + 224);
        if (v13 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v12 != 0) {
          *(_BYTE*)(v12 + 60) = *(_QWORD*)(v10 + 352) != *(_QWORD*)(v10 + 344);
        }
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak_alt1(v13);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
    }
    v14 = a1[8];
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v14);
    }
  }
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(result);
  }
  *a1 = &game_cmdbtl_CmdBtlCameraCutBase_vtable;
  v16 = a1[2];
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return std___1___shared_weak_count___release_weak_alt1(v16);
  }
  return result;
}

#pragma GCC visibility pop
