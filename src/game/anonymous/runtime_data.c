#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_anonymous_RuntimeData_CalcPartFromYearMonthDay_closure_Invoke(
    __int64 a1, _DWORD* a2, _DWORD* a3, _DWORD* a4);

__int64 game_anonymous_RuntimeData_CalcPartFromYearMonthDay_closure_Invoke(
    __int64 a1, _DWORD* a2, _DWORD* a3, _DWORD* a4)
{
  return (unsigned int)((*a3 << 8) | (*a2 << 16)) | *a4;
}

#pragma GCC visibility pop
