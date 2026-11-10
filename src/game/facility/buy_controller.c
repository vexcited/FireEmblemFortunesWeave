#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_facility_BuyController_Clear_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);

__int64 game_facility_BuyController_Clear_lambda0_Invoke(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  int v3;
  void (**v4)(_QWORD*, __int64);

  v2 = *(_QWORD**)a2;
  v3 = *(unsigned __int8*)(*(_QWORD*)a2 + 79LL);
  *(_BYTE*)(*(_QWORD*)a2 + 88LL) = 0;
  if (v3 == 1) {
    v4 = (void (**)(_QWORD*, __int64))(*v2 + 520LL);
  }
  else {
    v4 = (void (**)(_QWORD*, __int64))(*v2 + 504LL);
    if (*(_QWORD**)(v2[1] + 336LL) == v2) {
      v4 = (void (**)(_QWORD*, __int64))(*v2 + 512LL);
    }
  }
  (*v4)(v2, a2);
  return 0;
}

#pragma GCC visibility pop
