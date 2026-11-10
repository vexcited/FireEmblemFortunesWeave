#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_GameModeData_instance_;
__int64 RideDepositoryMenuItem_DrawText(__int64 result);

__int64 RideDepositoryMenuItem_DrawText(__int64 result)
{
  *(_BYTE*)(result + 82) =
      *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(game_GameModeData_instance_ + 176) +
                            2488LL) +
                 144LL) > 0;
  return result;
}

#pragma GCC visibility pop
