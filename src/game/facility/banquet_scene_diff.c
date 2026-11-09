#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_22445e8;
extern __int64 GameData_22445f8;
extern __int64 GameData_2244608;
__int64 BanquetSceneDiff_Unknown4(__int64 a1);

__int64 BanquetSceneDiff_Unknown4(__int64 a1)
{
  unsigned __int64 v1;
  __int64 v2;
  __int64* v3;

  v1 = *(_QWORD*)(*(_QWORD*)(a1 + 96) + 8LL) - **(_QWORD**)(a1 + 96);
  v2 = v1 & 0x7FFFFFFF8LL;
  if ((int)(v1 >> 3) >= 4) {
    v3 = &GameData_2244608;
  }
  else {
    v3 = &GameData_22445f8;
  }
  if (v2 == 8) {
    v3 = &GameData_22445e8;
  }
  return *v3;
}

#pragma GCC visibility pop
