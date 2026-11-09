#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1597cc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17356e0(_QWORD*, __int64);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 TelopScoutFailResult_Unknown57(__int64 a1);

__int64 TelopScoutFailResult_Unknown57(__int64 a1)
{
  _QWORD* v2;

  v2 = (_QWORD*)GameRoutine_1760e40(a1, 0xDu);
  GameRoutine_1597cc0(v2, *(_QWORD*)(a1 + 1168), 0, 0);
  return GameRoutine_17356e0(v2, (__int64)"A_Condition");
}

#pragma GCC visibility pop
