#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a5aca0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_21fdd90;
extern _UNKNOWN GameData_21fde98;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e358[2])();
extern __int64 GameData_21fddd0;
__int64 Shape_f64760(_QWORD* a1);

__int64 Shape_f64760(_QWORD* a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    GameRoutine_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
  }
  nn_os_LockMutex(&GameData_21fdd90);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21fde98) != 0) {
    GameRoutine_a5aca0(&GameData_21fdd90);
    GameRoutine_2b0(GameData_212e358[0], &GameData_21fdd90, &GameData_1f50948);
    __cxa_guard_release(&GameData_21fde98);
  }
  v2 = GameData_21fddd0;
  v4 = *(__int64**)(GameData_21fddd0 - 24);
  v3 = *(__int64**)(GameData_21fddd0 - 16);
  if (v4 != v3) {
    while (*v4 != *a1) {
      v4 += 2;
      if (v4 == v3) {
        return nn_os_UnlockMutex(&GameData_21fdd90);
      }
    }
  }
  if (v4 != v3) {
    v5 = v4 + 2;
    if (v4 + 2 != v3) {
      do {
        v7 = *v5;
        v6 = v5[1];
        v8 = *(v5 - 1);
        *v5 = 0;
        v5[1] = 0;
        *(v5 - 2) = v7;
        *(v5 - 1) = v6;
        if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
        v5 += 2;
      } while (v5 != v3);
      v3 = *(__int64**)(v2 - 16);
      v4 = v5 - 2;
    }
    for (; v3 != v4; v3 -= 2) {
      v9 = *(v3 - 1);
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v9);
      }
    }
    *(_QWORD*)(v2 - 16) = v4;
  }
  return nn_os_UnlockMutex(&GameData_21fdd90);
}

#pragma GCC visibility pop
