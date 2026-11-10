#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c6da0(_QWORD);
__int64 GameRoutine_6c6ec0(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20579c8[])();
extern __int64 (*GameData_2057a48[])();
extern __int64 (*GameData_2057ac8[])();
extern __int64 GameData_2057588;
extern __int64 GameData_20577e0;
extern __int64 game_g_game_setting;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21319f0[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ExchangeMenu_Unknown39(__int64 result, __int64 a2);
__int64 ExchangeMenu_Unknown5(__int64 result);
__int64 ExchangeMenu_15c7680(__int64 a1);
bool game_menu_ExchangeMenu_OnPostCreate_lambda0_Invoke(__int64 a1, __int64 a2);
bool game_menu_ExchangeMenu_OnPostCreate_lambda1_Invoke(__int64 a1, __int64 a2);
__int64 game_menu_ExchangeMenu_OnPageActive_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2);
__int64 game_menu_ExchangeMenu_OnPageActive_lambda1_Invoke(__int64 a1,
                                                           _QWORD* a2);

__int64 ExchangeMenu_Unknown39(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;

  if ((*(_DWORD*)(result + 380) & 0x80000000) != 0) {
    return result;
  }
  v2 = result;
  if ((*(_DWORD*)(result + 384) & 0x80000000) != 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 304);
  v4 = v23;
  v23[0] = GameData_2057a48;
  v23[1] = v2;
  v24 = v23;
  v5 = *(__int64**)(v3 + 232);
  v6 = *(__int64**)(v3 + 240);
  if (v5 == v6) {
    v7 = 0;
  LABEL_14:
    v9 = 32;
    goto LABEL_15;
  }
  while (1) {
    v7 = *v5;
    if (*v5 != 0) {
      v8 = v24;
      v25 = *v5;
      if (v24 == nullptr) {
      LABEL_53:
        GameRoutine_60a310(v8, a2);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v24 + 48LL))(v24, &v25) & 1) !=
          0) {
        break;
      }
    }
    if (++v5 == v6) {
      v7 = 0;
      break;
    }
  }
  v4 = v24;
  if (v24 == v23) {
    goto LABEL_14;
  }
  if (v24 != nullptr) {
    v9 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v4 + v9))(v4, a2);
  }
  if (v7 != 0) {
    v10 = *(_QWORD*)(v2 + 304);
    v11 = *(_QWORD*)(v10 + 336);
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 168LL))(v11);
    }
    *(_QWORD*)(v10 + 336) = v7;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v10, 1, 0, 0);
    v12 = *(_QWORD*)(v10 + 336);
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 160LL))(v12);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v13 = *(_QWORD*)(v10 + 336);
      v14 = 4;
      if (v13 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 120LL))(v13) & 1) != 0) {
          v14 = 4;
        }
        else {
          v14 = 0;
        }
      }
    }
    else {
      v14 = 4;
    }
    *(_DWORD*)(v10 + 356) = *(_DWORD*)(v10 + 356) & 0xFFFFFFFB | v14;
    if (*(_DWORD*)(v2 + 376) == 2) {
      (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 64LL))(v7, 1);
    }
  }
  v15 = *(_QWORD*)(v2 + 312);
  result = (__int64)v23;
  v23[0] = GameData_2057ac8;
  v23[1] = v2;
  v24 = v23;
  v16 = *(__int64**)(v15 + 232);
  v17 = *(__int64**)(v15 + 240);
  if (v16 == v17) {
    v18 = 0;
  LABEL_38:
    v19 = 32;
    goto LABEL_39;
  }
  while (1) {
    v18 = *v16;
    if (*v16 != 0) {
      v8 = v24;
      v25 = *v16;
      if (v24 == nullptr) {
        goto LABEL_53;
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v24 + 48LL))(v24, &v25) & 1) !=
          0) {
        break;
      }
    }
    if (++v16 == v17) {
      v18 = 0;
      break;
    }
  }
  result = (__int64)v24;
  if (v24 == v23) {
    goto LABEL_38;
  }
  if (v24 != nullptr) {
    v19 = 40;
  LABEL_39:
    result =
        (*(__int64 (**)(__int64, __int64))(*(_QWORD*)result + v19))(result, a2);
  }
  if (v18 != 0) {
    v20 = *(_QWORD*)(v2 + 312);
    v21 = *(_QWORD*)(v20 + 336);
    if (v21 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v21 + 168LL))(v21);
    }
    *(_QWORD*)(v20 + 336) = v18;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v20, 1, 0, 0);
    result = *(_QWORD*)(v20 + 336);
    if (result != 0) {
      (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      result = *(_QWORD*)(v20 + 336);
      v22 = 4;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result);
        if ((result & 1) != 0) {
          v22 = 4;
        }
        else {
          v22 = 0;
        }
      }
    }
    else {
      v22 = 4;
    }
    *(_DWORD*)(v20 + 356) = *(_DWORD*)(v20 + 356) & 0xFFFFFFFB | v22;
    if (*(_DWORD*)(v2 + 376) == 1) {
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v18 + 64LL))(v18, 1);
    }
  }
  *(_DWORD*)(v2 + 356) |= 1u;
  *(_DWORD*)(v2 + 352) = *(_DWORD*)(v2 + 376) == 2;
  return result;
}

__int64 ExchangeMenu_Unknown5(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  int v4;
  __int64 v5;
  char v6;
  int v7;

  v1 = *(_QWORD*)(result + 360);
  v2 = result;
  if (v1 != 0) {
    v3 = game_UnitItemList_Sort(v1 + 828, 0, 6);
    result = game_UnitItemList_Sort(v1 + 828, 6, 24);
    if ((v3 & 1) != 0 || (result & 1) != 0) {
      v4 = *(_DWORD*)(v1 + 416);
      if ((v4 & 0x10000000) == 0) {
        *(_DWORD*)(v1 + 416) = v4 | 0x10000000;
        GameRoutine_6c51e0(v1);
        GameRoutine_6c6da0(v1);
        result = GameRoutine_6c6ec0(v1);
        *(_DWORD*)(v1 + 416) &= ~0x10000000u;
      }
    }
  }
  v5 = *(_QWORD*)(v2 + 368);
  if (v5 != 0) {
    v6 = game_UnitItemList_Sort(v5 + 828, 0, 6);
    result = game_UnitItemList_Sort(v5 + 828, 6, 24);
    if ((v6 & 1) != 0 || (result & 1) != 0) {
      v7 = *(_DWORD*)(v5 + 416);
      if ((v7 & 0x10000000) == 0) {
        *(_DWORD*)(v5 + 416) = v7 | 0x10000000;
        GameRoutine_6c51e0(v5);
        GameRoutine_6c6da0(v5);
        result = GameRoutine_6c6ec0(v5);
        *(_DWORD*)(v5 + 416) &= ~0x10000000u;
      }
    }
  }
  return result;
}

__int64 ExchangeMenu_15c7680(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;

  v2 = *(_QWORD*)(a1 + 304);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_21319f0[0], &GameData_2057588, 0);
    v4 = *(_QWORD*)(a1 + 312);
    if (v4 != 0) {
    LABEL_3:
      v5 = __dynamic_cast(v4, GameData_21319f0[0], &GameData_2057588, 0);
      goto LABEL_6;
    }
  }
  else {
    v3 = 0;
    v4 = *(_QWORD*)(a1 + 312);
    if (v4 != 0) {
      goto LABEL_3;
    }
  }
  v5 = 0;

LABEL_6:
  v6 = *(_QWORD**)(v3 + 232);
  v7 = *(_QWORD**)(v3 + 240);
  v8 = v22;
  v22[0] = GameData_20579c8;
  v23 = v22;
  if (v6 == v7) {
    v12 = 0;
  LABEL_19:
    v14 = 32;
    goto LABEL_20;
  }
  v9 = GameData_212e008[0];
  while (1) {
    if (*v6 != 0) {
      v10 = __dynamic_cast(*v6, v9, &GameData_20577e0, 0);
      if (v10 != 0) {
        v12 = v10;
        v13 = v23;
        v24 = v12;
        if (v23 == nullptr) {
        LABEL_38:
          GameRoutine_60a310(v13, v11);
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v24) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v6 == v7) {
      v12 = 0;
      break;
    }
  }
  v8 = v23;
  if (v23 == v22) {
    goto LABEL_19;
  }
  if (v23 != nullptr) {
    v14 = 40;
  LABEL_20:
    (*(void (**)(_QWORD*))(*v8 + v14))(v8);
  }
  if (v12 != 0) {
    return v12;
  }
  v15 = *(_QWORD**)(v5 + 232);
  v16 = *(_QWORD**)(v5 + 240);
  v17 = v22;
  v22[0] = GameData_20579c8;
  v23 = v22;
  if (v15 == v16) {
    v12 = 0;
  LABEL_35:
    v20 = 32;
    goto LABEL_36;
  }
  v18 = GameData_212e008[0];
  while (1) {
    if (*v15 != 0) {
      v19 = __dynamic_cast(*v15, v18, &GameData_20577e0, 0);
      if (v19 != 0) {
        v12 = v19;
        v13 = v23;
        v24 = v12;
        if (v23 == nullptr) {
          goto LABEL_38;
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v23 + 48LL))(v23, &v24) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v15 == v16) {
      v12 = 0;
      break;
    }
  }
  v17 = v23;
  if (v23 == v22) {
    goto LABEL_35;
  }
  if (v23 != nullptr) {
    v20 = 40;
  LABEL_36:
    (*(void (**)(_QWORD*))(*v17 + v20))(v17);
  }
  return v12;
}

bool game_menu_ExchangeMenu_OnPostCreate_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) ==
         *(_DWORD*)(*(_QWORD*)(a1 + 8) + 380LL);
}

bool game_menu_ExchangeMenu_OnPostCreate_lambda1_Invoke(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(*(_QWORD*)a2 + 40LL) ==
         *(_DWORD*)(*(_QWORD*)(a1 + 8) + 384LL);
}

__int64 game_menu_ExchangeMenu_OnPageActive_lambda0_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 game_menu_ExchangeMenu_OnPageActive_lambda1_Invoke(__int64 a1,
                                                           _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 376LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

#pragma GCC visibility pop
