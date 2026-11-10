#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7ec000(__int64 result);
extern __int64* GameData_212c878[6];
__int64 game_AssetTable_Add_lambda0_Invoke(__int64 a1, unsigned __int16* a2);

__int64 game_AssetTable_Add_lambda0_Invoke(__int64 a1, unsigned __int16* a2)
{
  return GameRoutine_7ec000(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2));
}

#pragma GCC visibility pop
