#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN GameData_21a55c0;
extern __int128 GameData_21a5580;
extern __int128 GameData_21a5590;
extern __int128 GameData_21a55a0;
extern __int128 GameData_21a55b0;
__int128* math_6225d0();

__int128* math_6225d0()
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a55c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a55c0) != 0) {
    v1 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a55a0 =
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55a0 + 1) = v1;
    v2 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] +
                     (_QWORD)GameData_212c2a0);
    *(_QWORD*)&GameData_21a55b0 =
        *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] +
                    (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a55b0 + 1) = v2;
    v3 = *((_QWORD*)GameData_212c2a0 + 1);
    *(_QWORD*)&GameData_21a5580 = *(_QWORD*)GameData_212c2a0;
    *((_QWORD*)&GameData_21a5580 + 1) = v3;
    v4 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0 + 8);
    *(_QWORD*)&GameData_21a5590 =
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2a0);
    *((_QWORD*)&GameData_21a5590 + 1) = v4;
    __cxa_guard_release(&GameData_21a55c0);
  }
  return &GameData_21a5580;
}

#pragma GCC visibility pop
