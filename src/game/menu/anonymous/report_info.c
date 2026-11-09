#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5e00(void);
extern __int64 (*GameData_2088ae0[])();
extern __int64 GameData_2260e80;
__int64 ReportInfo_Destructor(__int64 a1);

__int64 ReportInfo_Destructor(__int64 a1)
{
  *(_QWORD*)(a1 + 208) = GameData_2088ae0;
  if (GameData_2260e80 == a1) {
    GameData_2260e80 = 0;
  }
  return GameRoutine_15e5e00();
}

#pragma GCC visibility pop
