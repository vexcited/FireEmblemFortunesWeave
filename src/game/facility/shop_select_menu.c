#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_facility_ShopSelectMenu_LCall_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 game_facility_ShopSelectMenu_RCall_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_15dff80(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_UnitUtil_GetNext(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20f7540[])();
extern __int64 (*GameData_20f75c0[])();
__int64 game_facility_ShopSelectMenu_LCall(_QWORD* a1);
__int64 game_facility_ShopSelectMenu_RCall(_QWORD* a1);

__int64 game_facility_ShopSelectMenu_LCall(_QWORD* a1)
{
  char v2;
  __int64 v3;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;
  _BYTE v12[200];

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1152LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = (*(__int64 (**)(_QWORD*))(*a1 + 1160LL))(a1);
  v3 = a1[133];
  if ((v2 & 1) != 0 && v3 == 0) {
    (*(void (**)(_QWORD*))(*a1 + 1184LL))(a1);
    snd_Fade_Fade_10c830(v12, 0.0f);
    snd_play_ff2d0((void*)(&v11), "SE_SYS_UnitChange_Left",
                   "SE_SYS_UnitChange_Left", v12, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v12);
    (*(void (**)(_QWORD*, _QWORD, __int64))(*a1 + 1176LL))(a1, 0, 1);
    return 8;
  }
  v9[0] = GameData_20f7540;
  v9[1] = a1;
  v5 = *a1;
  v10 = v9;
  v6 = (*(__int64 (**)(_QWORD*))(v5 + 1192))(a1);
  v7 = GameRoutine_15dff80(v3, 0, v9, v6 & 1);
  if (v10 == v9) {
    v8 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_10;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v10 + v8))((__int64)v10);
LABEL_10:
  if (v7 != a1[133]) {
    (*(void (**)(_QWORD*, __int64, _QWORD))(*a1 + 1176LL))(a1, v7, 0);
    return 13;
  }
  return 0;
}

__int64 game_facility_ShopSelectMenu_RCall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  char v7;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;
  _BYTE v12[200];

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1152LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = a1[133];
  v9[0] = GameData_20f75c0;
  v9[1] = a1;
  v3 = *a1;
  v10 = v9;
  v4 = (*(__int64 (**)(_QWORD*))(v3 + 1192))(a1);
  v5 = game_gameui_UnitUtil_GetNext(v2, 0, v9, v4 & 1);
  if (v10 == v9) {
    v6 = 32;
    goto LABEL_6;
  }
  if (v10 != nullptr) {
    v6 = 40;
  LABEL_6:
    (*(void (**)(__int64))(*v10 + v6))((__int64)v10);
  }
  v7 = (*(__int64 (**)(_QWORD*))(*a1 + 1160LL))(a1);
  if (v5 == 0 && (v7 & 1) != 0) {
    (*(void (**)(_QWORD*))(*a1 + 1184LL))(a1);
    snd_Fade_Fade_10c830(v12, 0.0f);
    snd_play_ff2d0((void*)(&v11), "SE_SYS_UnitChange_Right",
                   "SE_SYS_UnitChange_Right", v12, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v12);
    (*(void (**)(_QWORD*, _QWORD, __int64))(*a1 + 1176LL))(a1, 0, 1);
    return 8;
  }
  if (v5 != a1[133]) {
    (*(void (**)(_QWORD*, __int64, _QWORD))(*a1 + 1176LL))(a1, v5, 0);
    return 13;
  }
  return 0;
}

__int64 game_facility_ShopSelectMenu_LCall_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1168LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 game_facility_ShopSelectMenu_RCall_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1168LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

#pragma GCC visibility pop
