#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11ed160(__int64 result);
extern __int64 GameData_212d290;
__int64 AIOrder_11eeb10(__int64 a1);
__int64 AIOrder_11eeb40(__int64 a1);
__int64 AIOrder_11eeb70(__int64 a1);

__int64 AIOrder_11eeb10(__int64 a1)
{
  __int64 result;

  result = GameRoutine_11ed160(a1);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 1;
  return result;
}

__int64 AIOrder_11eeb40(__int64 a1)
{
  __int64 result;

  result = GameRoutine_11ed160(a1);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 2;
  return result;
}

__int64 AIOrder_11eeb70(__int64 a1)
{
  __int64 result;

  result = GameRoutine_11ed160(a1);
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) + 2240LL) = 3;
  return result;
}

#pragma GCC visibility pop
