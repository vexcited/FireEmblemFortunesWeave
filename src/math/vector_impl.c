#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c558;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6180;
extern __int64 GameData_21a60e0;
__int64* Vector_650640();
__int128* Vector_650e00();
__int128* Vector_650e70();

__int64* Vector_650640()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
    GameData_21a60e0 = 0;
    __cxa_guard_release(&GameData_21a60e8);
  }
  return &GameData_21a60e0;
}

__int128* Vector_650e00()
{
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v1 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v1;
    __cxa_guard_release(&GameData_21a6130);
  }
  return &GameData_21a6120;
}

__int128* Vector_650e70()
{
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6190) != 0) {
    v1 = *((_QWORD*)GameData_212c558 + 1);
    *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
    *((_QWORD*)&GameData_21a6180 + 1) = v1;
    __cxa_guard_release(&GameData_21a6190);
  }
  return &GameData_21a6180;
}

#pragma GCC visibility pop
