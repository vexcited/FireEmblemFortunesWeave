#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15f3480(void);
extern __int64 GameData_21f3d10;
__int64 ProcHotelMenu_Unknown84();

__int64 ProcHotelMenu_Unknown84()
{
  __int64 result;

  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 0) {
    return GameRoutine_15f3480();
  }
  return result;
}

#pragma GCC visibility pop
