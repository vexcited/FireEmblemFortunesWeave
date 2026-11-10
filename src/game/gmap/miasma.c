#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Impl_13261c0(_QWORD);
__int64 game_gmap_Miasma_TryChangeState_lambda0_Invoke(__int64 result,
                                                       _QWORD** a2);
__int64 game_gmap_Miasma_IsAround_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 game_gmap_Miasma_TryChangeState_lambda0_Invoke(__int64 result,
                                                       _QWORD** a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  if (*(_QWORD*)(v2 + 120) == **a2) {
    *(_DWORD*)(v2 + 8) = 1;
  }
  return result;
}

__int64 game_gmap_Miasma_IsAround_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (__int64*)*a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 == 0 || (unsigned int)*(unsigned __int8*)(v3 + 32) - 3 > 1 ||
      (v2[68] & 8) == 0) {
    return 0;
  }
  v5 = *v2;
  v6 = *(_QWORD*)(a1 + 8);
  LODWORD(v7) = (unsigned __int8)Impl_13261c0(*v2);
  if ((_DWORD)v7 == 4) {
    v8 = 0;
  }
  else {
    v8 = *(_QWORD*)(v5 + 136);
  }
  if (v8 != 0) {
    v9 = *(_QWORD*)(v6 + 120);
    if ((unsigned __int8)Impl_13261c0(v9) == 4) {
      v7 = 0;
    }
    else {
      v7 = *(_QWORD*)(v9 + 136);
    }
    LOBYTE(v7) = v8 == v7;
  }
  return (v8 != 0) & (unsigned __int8)v7;
}

#pragma GCC visibility pop
