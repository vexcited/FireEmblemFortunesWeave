#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool gfxa_TaskModelEffect_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2);

bool gfxa_TaskModelEffect_Impl_draw_lambda0_Invoke(__int64 a1, __int64 a2)
{
  int v2;

  v2 = *(_DWORD*)(a2 + 16);
  if ((v2 & 0x10) != 0) {
    return false;
  }
  return v2 == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
}

#pragma GCC visibility pop
