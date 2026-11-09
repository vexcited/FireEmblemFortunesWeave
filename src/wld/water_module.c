#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212c638;
__int64 WaterModule_Unknown5(__int64 result);

__int64 WaterModule_Unknown5(__int64 result)
{
  if (*(_BYTE*)(result + 40) == 1) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                               32LL) -
                                    8LL) +
                         40LL) +
              227LL) = 1;
  }
  return result;
}

#pragma GCC visibility pop
