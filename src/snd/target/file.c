#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212e280;
extern __int64* GameData_212e278;
__int64* File_Unknown2();
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");

__int64* File_Unknown2()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212e280,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212e280) != 0) {
    *GameData_212e278 = 0;
    __cxa_guard_release_alt1((__int64)GameData_212e280);
  }
  return GameData_212e278;
}

#pragma GCC visibility pop
