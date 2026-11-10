#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_facility_SellController_Clear(void);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64* GameData_212e000[10];
extern __int64* GameData_212e030[4];
extern __int64 GameData_2131c80[42];
__int64 EmptyShopMenuItem_Sell_BCall(__int64 a1);

__int64 EmptyShopMenuItem_Sell_BCall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  _BYTE v7[200];

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 3;
  }
  v3 = __dynamic_cast(v2, GameData_212e030[0], GameData_2131c80[0], -2);
  if (v3 == 0 || (int)((*(_QWORD*)(v3 + 16) - *(_QWORD*)(v3 + 8)) >> 3) < 1) {
    return 3;
  }
  game_facility_SellController_Clear();
  v4 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                      GameData_212e000[0], 0);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1136LL))(v4);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1120LL))(v4);
  snd_Fade_Fade_10c830(v7, 0.0f);
  snd_play_ff2d0((void*)(&v6), "SE_SYS_Multiple_CancelAll",
                 "SE_SYS_Multiple_CancelAll", v7, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v7);
  return 13;
}

#pragma GCC visibility pop
