#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1868780(_QWORD);
__int64 GameRoutine_8a1dc0(_QWORD);
__int64 GameRoutine_8a2260(_QWORD);
__int64 ShopMenuItem_Trade_Unknown83(__int64 a1);

__int64 ShopMenuItem_Trade_Unknown83(__int64 a1)
{
  if ((GameRoutine_8a2260(*(_QWORD*)(a1 + 120)) & 1) != 0 &&
      (unsigned int)GameRoutine_8a1dc0(*(_QWORD*)(a1 + 120)) != 0) {
    return GameRoutine_1868780(a1);
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
