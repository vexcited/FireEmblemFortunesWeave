#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64* GameData_212d708;
__int64 game_gmap_GmapUI_Impl_UpdateCorpsInfo_closure_Invoke(__int64 result,
                                                             __int64 a2);

__int64 game_gmap_GmapUI_Impl_UpdateCorpsInfo_closure_Invoke(__int64 result,
                                                             __int64 a2)
{
  if (**(_QWORD**)a2 == *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 96LL)) {
    **(_DWORD**)(result + 8) = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  }
  return result;
}

#pragma GCC visibility pop
