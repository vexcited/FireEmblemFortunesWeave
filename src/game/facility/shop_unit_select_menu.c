#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenu_16e2460(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_UnitGridSelectMenu_ApplyChangeUnit(_QWORD);
extern __int64 (*GameData_20f78d0[])();
extern __int64 (*GameData_20f7950[])();
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* game_facility_ShopUnitSelectMenu_ApplyChangeTransporter(_QWORD* result);
_QWORD* ShopUnitSelectMenu_1875ad0(__int64 a1);
__int64 game_facility_ShopUnitSelectMenu_ApplyChangeTransporter_lambda0_Invoke(
    __int64 a1, _QWORD* a2);
__int64 game_facility_ShopUnitSelectMenu_ApplyChangeTransporter_lambda1_Invoke(
    __int64 a1, _QWORD* a2);

_QWORD* game_facility_ShopUnitSelectMenu_ApplyChangeTransporter(_QWORD* result)
{
  int v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  _QWORD* v21;
  int v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  _QWORD v28[4];
  _QWORD* v29;
  __int64 v30;

  v1 = *((_DWORD*)result + 348);
  v2 = result;
  if (v1 != 1) {
    if (v1 != 0) {
      return result;
    }
    v3 = (_QWORD*)result[29];
    v4 = (_QWORD*)result[30];
    result = v28;
    v28[0] = GameData_20f78d0;
    v29 = v28;
    if (v3 != v4) {
      v5 = GameData_212e008[0];
      v6 = GameData_212e0c8[0];
      while (1) {
        if (*v3 != 0) {
          v7 = __dynamic_cast(*v3, v5, v6, 0);
          if (v7 != 0) {
            v8 = v7;
            v30 = v7;
            v9 = v29;
            if (v29 == nullptr) {
              goto LABEL_47;
            }
            if (((*(__int64 (**)(_QWORD*, __int64*))(*v29 + 48LL))(v29, &v30) &
                 1) != 0) {
              goto LABEL_20;
            }
          }
        }
        if (++v3 == v4) {
          goto LABEL_19;
        }
      }
    }
  LABEL_23:
    v8 = 0;
    goto LABEL_24;
  }
  v10 = (_QWORD*)result[29];
  v11 = (_QWORD*)result[30];
  result = v28;
  v28[0] = GameData_20f7950;
  v29 = v28;
  if (v10 == v11) {
    goto LABEL_23;
  }
  v12 = GameData_212e008[0];
  v13 = GameData_212e0c8[0];
  while (1) {
    if (*v10 != 0) {
      v14 = __dynamic_cast(*v10, v12, v13, 0);
      if (v14 != 0) {
        v8 = v14;
        v30 = v14;
        v9 = v29;
        if (v29 == nullptr) {
        LABEL_47:
          GameRoutine_60a310(v9);
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v29 + 48LL))(v29, &v30) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v10 == v11) {
    LABEL_19:
      v8 = 0;
      break;
    }
  }
LABEL_20:
  result = v29;
  if (v29 == v28) {
  LABEL_24:
    v15 = 32;
    goto LABEL_25;
  }
  if (v29 != nullptr) {
    v15 = 40;
  LABEL_25:
    result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v15))(result);
  }
  if (v8 != 0) {
    v16 = v2[42];
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 168LL))(v16);
    }
    v2[42] = v8;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v2, 1, 0, 0);
    v17 = v2[42];
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 160LL))(v17);
      game_IsVibrationEnabled(*(_QWORD*)game_g_game_setting_ptr + 712LL);
      v18 = v2[42];
      v19 = 4;
      if (v18 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 120LL))(v18) & 1) != 0) {
          v19 = 4;
        }
        else {
          v19 = 0;
        }
      }
    }
    else {
      v19 = 4;
    }
    v20 = (_QWORD*)v2[29];
    v21 = (_QWORD*)v2[30];
    *((_DWORD*)v2 + 89) = *((_DWORD*)v2 + 89) & 0xFFFFFFFB | v19;
    if (v20 != v21) {
      v22 = 0;
      do {
        v23 = *v20;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v20 + 48LL))(*v20) & 1) != 0) {
          if (v23 == v2[42]) {
            goto LABEL_42;
          }
          ++v22;
        }
        ++v20;
      } while (v20 != v21);
    }
    v22 = -1;
  LABEL_42:
    if (v22 <= 1) {
      v24 = 1;
    }
    else {
      v24 = v22;
    }
    *((_DWORD*)v2 + 138) = v24 - 1;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v2, 1, 0, 0);
    v26 = v2[22];
    v25 = v2 + 22;
    v27 = (*(__int64 (**)(_QWORD*))(v26 + 16))(v25);
    result = (_QWORD*)BasicMenu_16e2460(v25[1], 1, 0);
    *((_DWORD*)v25 + 4) = (int)result % v27;
  }
  return result;
}

_QWORD* ShopUnitSelectMenu_1875ad0(__int64 a1)
{
  _QWORD* result;

  result = (_QWORD*)game_menu_UnitGridSelectMenu_ApplyChangeUnit(a1);
  if (*(_DWORD*)(a1 + 1392) != -1) {
    result =
        game_facility_ShopUnitSelectMenu_ApplyChangeTransporter((_QWORD*)a1);
  }
  *(_DWORD*)(a1 + 1392) = -1;
  return result;
}

__int64 game_facility_ShopUnitSelectMenu_ApplyChangeTransporter_lambda0_Invoke(
    __int64 a1, _QWORD* a2)
{
  if (*(_QWORD*)(*a2 + 88LL) != 0) {
    return 0;
  }
  else {
    return ((*(unsigned int (**)(_QWORD))(*(_QWORD*)*a2 + 672LL))(*a2) ^ 1) & 1;
  }
}

__int64 game_facility_ShopUnitSelectMenu_ApplyChangeTransporter_lambda1_Invoke(
    __int64 a1, _QWORD* a2)
{
  if (*(_QWORD*)(*a2 + 88LL) != 0) {
    return 0;
  }
  else {
    return (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 672LL))(*a2);
  }
}

#pragma GCC visibility pop
