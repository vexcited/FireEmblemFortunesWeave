#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

bool gfxa_TaskCharaOutline_Impl_draw_lambda1_Invoke(__int64 a1, __int64 a2);

bool gfxa_TaskCharaOutline_Impl_draw_lambda1_Invoke(__int64 a1, __int64 a2)
{
  return (*(_DWORD*)(a2 + 16) & 4) == 0 &&
         *(_DWORD*)(a2 + 12) == *(_DWORD*)(*(_QWORD*)(a1 + 8) + 24LL);
}

#pragma GCC visibility pop
