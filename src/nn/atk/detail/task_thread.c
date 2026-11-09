#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_2a0c40(_QWORD);
__int64 GameRoutine_2a18e0(_QWORD);
__int64 GameRoutine_2a2fa0(__int64);
__int64 GameRoutine_2a3070(__int64);
__int64 GameRoutine_2b4940(_QWORD);
__int64 GameRoutine_2b4a10(_QWORD);
__int64 GameRoutine_2b4a20(_QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64* GameRoutine_2a2da0(__int64*);
extern __int64 GameData_2135428;
void* GameRoutine_2a2ae0();
__int64 TaskThread_Destructor(__int64 a1);
__int64 TaskThread_2a3180(__int64 result);
__int64 TaskThread_Unknown2(__int64 a1);

__int64 TaskThread_Destructor(__int64 a1)
{
  void* v2;

  *(_QWORD*)a1 = GameData_2135428 + 16;
  if (*(_BYTE*)(a1 + 537) == 1) {
    atomic_store(1u, (unsigned __int8*)(a1 + 536));
    v2 = GameRoutine_2a2ae0();
    GameRoutine_2a3070((__int64)v2);
    GameRoutine_2b4a10(a1 + 8);
    GameRoutine_2b4a20(a1 + 8);
    *(_BYTE*)(a1 + 537) = 0;
  }
  nn_os_FinalizeMutex(a1 + 504);
  return GameRoutine_2b4940(a1 + 8);
}

__int64 TaskThread_2a3180(__int64 result)
{
  __int64 v1;
  void* v2;

  if (*(_BYTE*)(result + 537) == 1) {
    v1 = result;
    atomic_store(1u, (unsigned __int8*)(result + 536));
    v2 = GameRoutine_2a2ae0();
    GameRoutine_2a3070((__int64)v2);
    GameRoutine_2b4a10(v1 + 8);
    result = GameRoutine_2b4a20(v1 + 8);
    *(_BYTE*)(v1 + 537) = 0;
  }
  return result;
}

__int64 TaskThread_Unknown2(__int64 a1)
{
  unsigned __int8 v1;
  void* v3;
  unsigned __int8 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v1 = atomic_load((unsigned __int8*)(a1 + 536));
  if ((v1 & 1) == 0) {
    do {
      v3 = GameRoutine_2a2ae0();
      GameRoutine_2a2fa0((__int64)v3);
      v4 = atomic_load((unsigned __int8*)(a1 + 536));
      if ((v4 & 1) != 0) {
        break;
      }
      nn_os_LockMutex(a1 + 504);
      v5 = (__int64*)GameRoutine_2a2ae0();
      GameRoutine_2a2da0(v5);
      v6 = nn_os_UnlockMutex(a1 + 504);
      v7 = GameRoutine_2a18e0(v6);
      GameRoutine_2a0c40(v7);
      v8 = atomic_load((unsigned __int8*)(a1 + 536));
    } while (v8 != 1);
  }
  return 0;
}

#pragma GCC visibility pop
