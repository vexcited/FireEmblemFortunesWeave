#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12623a0(_QWORD*, __int64, int);
__int64 GameRoutine_1264480(_QWORD);
bool DeliveryRideExecutor_Unknown2(__int64 a1, __int64 a2, int a3);
bool DeliveryRideExecutor_Unknown3(__int64 a1, __int64 a2, int a3);

bool DeliveryRideExecutor_Unknown2(__int64 a1, __int64 a2, int a3)
{
  _QWORD* v5;
  int v6;
  int v7;

  v5 = (_QWORD*)GameRoutine_1264480(a1 + 8);
  GameRoutine_12623a0(v5, 0, a3);
  v6 = *(_DWORD*)(a1 + 48);
  v7 = *(_DWORD*)(a1 + 52) + 1;
  *(_DWORD*)(a1 + 52) = v7;
  return v7 >= v6;
}

bool DeliveryRideExecutor_Unknown3(__int64 a1, __int64 a2, int a3)
{
  _QWORD* v6;
  int v7;
  int v8;

  v6 = (_QWORD*)GameRoutine_1264480(a1 + 8);
  GameRoutine_12623a0(v6, a2, a3);
  v7 = *(_DWORD*)(a1 + 48);
  v8 = *(_DWORD*)(a1 + 52) + 1;
  *(_DWORD*)(a1 + 52) = v8;
  return v8 >= v7;
}

#pragma GCC visibility pop
