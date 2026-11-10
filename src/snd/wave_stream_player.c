#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 snd_WavePlayer_registry(_QWORD);
extern _UNKNOWN GameData_2199c00;
extern __int64 GameData_2199bf8;
__int64* WaveStreamPlayer_Unknown139();

__int64* WaveStreamPlayer_Unknown139()
{
  __int64 v1;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2199c00,
                            memory_order_acquire) &
       1) != 0) {
    return &GameData_2199bf8;
  }
  v1 = __cxa_guard_acquire(&GameData_2199c00);
  if ((_DWORD)v1 != 0) {
    GameData_2199bf8 = snd_WavePlayer_registry(v1);
    __cxa_guard_release(&GameData_2199c00);
  }
  return &GameData_2199bf8;
}

#pragma GCC visibility pop
