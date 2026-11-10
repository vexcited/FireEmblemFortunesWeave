#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_map_IDeploy_FillSkill_lambda0_Invoke(__int64 result, __int64 a2);
__int64 game_map_IDeploy_FillSkill_lambda1_Invoke(__int64 result, __int64 a2);

__int64 game_map_IDeploy_FillSkill_lambda0_Invoke(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *(char*)(a2 + 1);
  v4 = *(_QWORD*)(v2 + 8) + 4LL * ((v3 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v4 + 2120) |= 1 << v3;
  LODWORD(v4) = *(char*)(a2 + 1);
  v5 = *(_QWORD*)(v2 + 8) + 4LL * (((int)v4 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v5 + 2376) |= 1 << v4;
  return result;
}

__int64 game_map_IDeploy_FillSkill_lambda1_Invoke(__int64 result, __int64 a2)
{
  int v2;
  __int64 v3;

  v2 = *(char*)(a2 + 1);
  v3 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) +
       4LL * ((v2 + 32 * *(char*)(a2 + 2)) >> 5);
  *(_DWORD*)(v3 + 2120) |= 1 << v2;
  return result;
}

#pragma GCC visibility pop
