#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_AIRageImage_Update_lambda0_Invoke(__int64 result, __int64 a2);

__int64 game_AIRageImage_Update_lambda0_Invoke(__int64 result, __int64 a2)
{
  unsigned int v2;
  int v3;
  __int64 v4;

  v2 = *(char*)(a2 + 1);
  if ((v2 & 0x80000000) == 0) {
    v3 = *(char*)(a2 + 2);
    if ((v3 & 0x80000000) == 0) {
      v4 = *(_QWORD*)(result + 8) + 4LL * (v3 + (v2 >> 5));
      *(_DWORD*)(v4 + 8) |= 1 << v2;
    }
  }
  return result;
}

#pragma GCC visibility pop
