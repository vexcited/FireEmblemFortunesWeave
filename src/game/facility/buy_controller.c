#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_facility_BuyController_Clear_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);
__int64 EmptyShopMenuItem_Buy_186b2c0(_QWORD);
__int64 GameRoutine_186a120(__int64);
__int64 GameRoutine_186b9a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e008[9];
extern __int64 GameData_20f20a0;
__int64 BuyController_186b3c0(_QWORD* a1);

__int64 BuyController_186b3c0(_QWORD* a1)
{
  char* v1;
  char* v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = (char*)a1[1];
  v1 = (char*)a1[2];
  if ((int)((unsigned __int64)(v1 - v2) >> 3) < 1) {
    v6 = *(_QWORD*)(*a1 + 336LL);
    if (v6 != 0) {
      v7 = __dynamic_cast(v6, GameData_212e008[0], &GameData_20f20a0, 0);
      if (v7 != 0) {
        GameRoutine_186a120(v7);
      }
    }
  }
  else {
    if (v2 != v1) {
      GameRoutine_186b9a0(a1[1], v1, (2 * __clz((v1 - v2) >> 3)) ^ 0x7E, 1);
      v2 = (char*)a1[1];
      v1 = (char*)a1[2];
    }
    if (v2 != v1) {
      v4 = GameData_212e008[0];
      do {
        if (*(_QWORD*)v2 != 0) {
          v5 = __dynamic_cast(*(_QWORD*)v2, v4, &GameData_20f20a0, 0);
          if (v5 != 0) {
            GameRoutine_186a120(v5);
          }
        }
        v2 += 8;
      } while (v2 != v1);
    }
  }
  return EmptyShopMenuItem_Buy_186b2c0(a1);
}

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
