#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 (*GameData_20edfd0[])();
extern __int64 game_g_game_setting;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 game_menu_DeployPoolMenu_Apply(_QWORD* a1);
__int64 game_menu_DeployPoolMenu_Apply_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 game_menu_DeployPoolMenu_LCall_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 game_menu_DeployPoolMenu_RCall_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 game_menu_DeployPoolMenu_SetSelectEquipItem_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2);
__int64 GameRoutine_15dff80(__int64, char, __int64, char);
__int64 game_gameui_UnitUtil_GetNext(__int64, char, __int64, char);
extern __int64 (*GameData_20ee050[])();
extern __int64 (*GameData_20ee0d0[])();
__int64 game_menu_DeployPoolMenu_LCall(_QWORD* a1);
__int64 game_menu_DeployPoolMenu_RCall(_QWORD* a1);

__int64 game_menu_DeployPoolMenu_Apply(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v8[4];
  _QWORD* v9;
  __int64 v10;

  v2 = v8;
  v8[0] = GameData_20edfd0;
  v4 = a1[29];
  v3 = a1[30];
  v9 = v8;
  if (v3 == v4) {
    goto LABEL_11;
  }
  v5 = 0;
  while (*(_QWORD*)(v4 + 8 * v5) == 0) {
  LABEL_3:
    if (++v5 >= (unsigned __int64)((v3 - v4) >> 3)) {
      goto LABEL_8;
    }
  }
  v10 = *(_QWORD*)(v4 + 8 * v5);
  if (v9 == nullptr) {
    GameRoutine_60a310(0);
  }
  if (((*(__int64 (**)(_QWORD*, __int64*))(*v9 + 48LL))(v9, &v10) & 1) == 0) {
    v4 = a1[29];
    v3 = a1[30];
    goto LABEL_3;
  }
LABEL_8:
  v2 = v9;
  if (v9 != v8) {
    if (v9 != nullptr) {
      v6 = 40;
      goto LABEL_12;
    }
    goto LABEL_13;
  }
LABEL_11:
  v6 = 32;
LABEL_12:
  (*(void (**)(_QWORD*))(*v2 + v6))(v2);
LABEL_13:
  (*(void (**)(_QWORD*, _QWORD))(*a1 + 1136LL))(a1, a1[133]);
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

__int64 game_menu_DeployPoolMenu_LCall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1144LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = a1[133];
  v6_.v6[0] = GameData_20ee050;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  v3 = GameRoutine_15dff80(v2, 0, (__int64)v6_.v6, 0);
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
LABEL_8:
  result = 0;
  if (v3 != 0 && v3 != a1[133]) {
    (*(void (**)(_QWORD*, __int64))(*a1 + 1160LL))(a1, v3);
    return 13;
  }
  return result;
}

__int64 game_menu_DeployPoolMenu_RCall(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 1144LL))(a1) & 1) == 0) {
    return 0;
  }
  v2 = a1[133];
  v6_.v6[0] = GameData_20ee0d0;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  v3 = game_gameui_UnitUtil_GetNext(v2, 0, (__int64)v6_.v6, 0);
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_8;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
LABEL_8:
  result = 0;
  if (v3 != 0 && v3 != a1[133]) {
    (*(void (**)(_QWORD*, __int64))(*a1 + 1160LL))(a1, v3);
    return 13;
  }
  return result;
}

__int64 game_menu_DeployPoolMenu_Apply_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  (*(void (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 56LL))(*a2, 0);
  return 0;
}

__int64 game_menu_DeployPoolMenu_LCall_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1152LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 game_menu_DeployPoolMenu_RCall_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1152LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 game_menu_DeployPoolMenu_SetSelectEquipItem_lambda0_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  _QWORD* v9;
  _QWORD* v10;
  int v11;
  __int64 v12;
  int v13;
  _DWORD* v14;
  _DWORD* v15;
  int v16;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2) & 1) == 0 ||
      *(_QWORD*)(v3 + 1064) != *(_QWORD*)(v2 + 88)) {
    return 0;
  }
  v5 = *(_QWORD*)(v3 + 336);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 168LL))(v5);
  }
  *(_QWORD*)(v3 + 336) = v2;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 1, 0, 0);
  v6 = *(_QWORD*)(v3 + 336);
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 160LL))(v6);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    v7 = *(_QWORD*)(v3 + 336);
    v8 = 4;
    if (v7 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 120LL))(v7) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
  }
  else {
    v8 = 4;
  }
  v9 = *(_QWORD**)(v3 + 232);
  v10 = *(_QWORD**)(v3 + 240);
  *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v8;
  if (v9 != v10) {
    v11 = 0;
    do {
      v12 = *v9;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v9 + 48LL))(*v9) & 1) != 0) {
        if (v12 == *(_QWORD*)(v3 + 336)) {
          goto LABEL_20;
        }
        ++v11;
      }
      ++v9;
    } while (v9 != v10);
  }
  v11 = -1;
LABEL_20:
  if (v11 <= 1) {
    v13 = 1;
  }
  else {
    v13 = v11;
  }
  *(_DWORD*)(v3 + 552) = v13 - 1;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 1, 0, 0);
  v14 = *(_DWORD**)(v3 + 808);
  v15 = *(_DWORD**)(v3 + 816);
  if (v14 != v15) {
    v16 = *(_DWORD*)(v3 + 644);
    do {
      *v14++ = v16;
    } while (v14 != v15);
  }
  return 1;
}

#pragma GCC visibility pop
