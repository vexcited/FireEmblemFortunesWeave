#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b33800(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_22030f0;
extern _UNKNOWN* GameData_1f50948;
extern __int64 (*GameData_212e730)();
extern __int64 GameData_2203088;
extern __int64 GameData_22030d0;
extern __int64 GameData_22030d8;
__int64 SyncResource_Unknown3(__int64 a1);
__int64 SyncResource_Unknown4(__int64 result);

__int64 SyncResource_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 result;
  int v4;
  unsigned int v5;

  v1 = *(unsigned int*)(a1 + 48);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    v5 = v1;
    v4 = __cxa_guard_acquire(&GameData_22030f0);
    v1 = v5;
    if (v4 != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      __cxa_guard_release(&GameData_22030f0);
      v1 = v5;
    }
  }
  result = GameRoutine_b33800(&GameData_2203088, v1);
  *(_QWORD*)(a1 + 40) = result;
  return result;
}

__int64 SyncResource_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 40);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22030f0,
                            memory_order_acquire) &
       1) == 0) {
    v3 = v1;
    result = __cxa_guard_acquire(&GameData_22030f0);
    v1 = v3;
    if ((_DWORD)result != 0) {
      GameRoutine_2b0(GameData_212e730, &GameData_2203088, &GameData_1f50948);
      result = __cxa_guard_release(&GameData_22030f0);
      v1 = v3;
    }
  }
  v2 = GameData_22030d0;
  if (GameData_22030d0 != GameData_22030d8) {
    while (*(_QWORD*)(v2 + 8) != v1) {
      v2 += 24;
      if (v2 == GameData_22030d8) {
        return result;
      }
    }
  }
  if (v2 != GameData_22030d8) {
    *(_BYTE*)v2 = 0;
  }
  return result;
}

#pragma GCC visibility pop
