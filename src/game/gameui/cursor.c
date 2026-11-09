#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2103b10[])();
extern __int64 GameData_21f1df0;
extern int GameData_21f1df8;
__int64 Cursor_Destructor_18a2440(_QWORD* a1);

__int64 Cursor_Destructor_18a2440(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  v1 = a1[2];
  if (v1 != 0) {
    *(_BYTE*)(v1 + 2376) = 1;
    v3 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  GameRoutine_155e140(a1 + 4);
  v4 = a1[16];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 10);
  GameRoutine_1563f90(a1 + 7, a1[8]);
  result = a1[5];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v6 = a1[3];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  *a1 = GameData_2103b10;
  if ((_QWORD*)GameData_21f1df0 == a1) {
    GameData_21f1df0 = 0;
    GameData_21f1df8 = 0;
  }
  return result;
}

#pragma GCC visibility pop
