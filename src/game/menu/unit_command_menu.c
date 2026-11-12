#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_UnitCommandMenu_MoveToLR_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "game_menu_UnitCommandMenu_MoveToLR");
extern __int64 (*GameData_209fb78[])();
extern __int64 (*GameData_209fc08[])();
extern __int64 GameData_209f548;
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 game_menu_UnitCommandMenu_MoveToLR(__int64 a1, int a2);
__int64 UnitCommandMenu_16f02d0(__int64 a1, __int64 a2);
_QWORD* game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(__int64 a1,
                                                               __int64 a2);
__int64 game_menu_UnitCommandMenu_MoveToLR_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable_lambda0_Invoke(
    __int64 a1, _QWORD* a2);
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

__int64 game_menu_UnitCommandMenu_MoveToLR(__int64 a1, int a2)
{
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  _QWORD* v20;
  __int64 result;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;
  _QWORD* v29;
  __int64 v30;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v29 = nullptr;
  if (a2 < 1) {
    v10 = *(_QWORD*)(a1 + 232);
    if (*(_QWORD*)(a1 + 240) == v10) {
      return 14;
    }
    v11 = 0;
    while (1) {
      v12 = *(_QWORD*)(v10 + 8 * v11);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 48LL))(v12) & 1) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)v12 + 40LL))(v12) & 1) != 0) {
        break;
      }
      v10 = *(_QWORD*)(a1 + 232);
      if (++v11 >= (unsigned __int64)((*(_QWORD*)(a1 + 240) - v10) >> 3)) {
        return 14;
      }
    }
    v13 = *(char**)(a1 + 232);
    v14 = *(char**)(a1 + 240);
    if (v13 != v14) {
      v15 = v14 - v13 - 8;
      v16 = (v15 >> 3) + 1;
      if (v15 >= 0x18) {
        v26 = 0;
        while ((_DWORD)v11 != (_DWORD)v26) {
          if ((_DWORD)v11 == (_DWORD)v26 + 1) {
            v13 += 8;
            goto LABEL_49;
          }
          if ((_DWORD)v11 == (_DWORD)v26 + 2) {
            v13 += 16;
            goto LABEL_49;
          }
          if ((_DWORD)v11 == (_DWORD)v26 + 3) {
            v13 += 24;
            goto LABEL_49;
          }
          v13 += 32;
          v26 += 4;
          v17 = v26;
          if ((v16 & 0x3FFFFFFFFFFFFFFCLL) == v26) {
            goto LABEL_19;
          }
        }
        goto LABEL_49;
      }
      v17 = 0;
    LABEL_19:
      v18 = v16 & 3;
      if (v18 != 0) {
        v19 = v17 - v11;
        while (v19 != 0) {
          v13 += 8;
          ++v19;
          if (--v18 == 0) {
            goto LABEL_23;
          }
        }
      LABEL_49:
        v20 = *(_QWORD**)v13;
      LABEL_50:
        v29 = v20;
        result = 14;
        if (v20 == nullptr) {
          return result;
        }
        goto LABEL_28;
      }
    }
  LABEL_23:
    v20 = nullptr;
    goto LABEL_50;
  }
  v27_.v27[0] = GameData_209fb78;
  v27_.v27[1] = &v29;
  v27_.v28 = v27_.v27;
  v3 = *(_QWORD*)(a1 + 232);
  v4 = GameData_212e008[0];
  v5 = (*(_QWORD*)(a1 + 240) - v3) >> 3;
  while (1) {
    do {
      do {
        --v5;
        v6 = *(_QWORD*)(v3 + 8 * v5);
      } while (v6 == 0);
      v7 = __dynamic_cast(v6, v4, &GameData_209f548, 0),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    } while (v7 == 0);
    v30 = v7;
    if (v27_.v28 == nullptr) {
      GameRoutine_60a310_alt1(),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    if (((*(__int64 (**)(_QWORD*, __int64*))(*v27_.v28 + 48LL))(v27_.v28,
                                                                &v30) &
         1) != 0) {
      break;
    }
    v3 = *(_QWORD*)(a1 + 232);
  }
  if (v27_.v28 == v27_.v27) {
    v9 = 32;
  }
  else {
    if (v27_.v28 == nullptr) {
      goto LABEL_27;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v27_.v28 + v9))(v27_.v28, v8),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_27:
  v20 = v29;
  result = 14;
  if (v29 == nullptr) {
    return result;
  }
LABEL_28:
  v22 = *(_QWORD**)(a1 + 336);
  if (v22 != v20) {
    if (v22 != nullptr) {
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
          *v22 + 168LL))((void*)(v22), *(_QWORD*)(a1 + 336)),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    *(_QWORD*)(a1 + 336) = v20;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, 0),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v23 = *(_QWORD*)(a1 + 336);
    if (v23 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 160LL))(v23),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      game_IsVibrationEnabled_alt1(
          (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL)),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v24 = *(_QWORD*)(a1 + 336);
      v25 = 4;
      if (v24 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 120LL))(v24) & 1) != 0) {
          v25 = 4;
        }
        else {
          v25 = 0;
        }
      }
    }
    else {
      v25 = 4;
    }
    result = 13;
    *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v25;
  }
  return result;
}

__int64 UnitCommandMenu_16f02d0(__int64 a1, __int64 a2)
{
  return game_menu_UnitCommandMenu_MoveToLR_alt1(a1 - 176, a2, 0);
}

_QWORD* game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable(__int64 a1,
                                                               __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;

  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  v11[0] = GameData_209fc08;
  v11[1] = a1;
  result = v11;
  v12 = v11;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  do {
    v8 = *(_QWORD*)(v4 + 8 * v6);
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, v7, &GameData_209f548, 0);
      if (v9 == 0) {
        goto LABEL_3;
      }
      v13 = v9;
      if (v12 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v12 + 48LL))(v12, &v13) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_3:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  result = v12;
  if (v12 != v11) {
    if (v12 != nullptr) {
      v10 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v10))(result,
                                                                         a2);
    }
    return result;
  }
LABEL_12:
  v10 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v10))(result,
                                                                     a2);
}

__int64 game_menu_UnitCommandMenu_MoveToLR_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) == 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2) & 1) == 0) {
    return 0;
  }
  **(_QWORD**)(a1 + 8) = v2;
  return 1;
}

__int64 game_menu_UnitCommandMenu_SetFirstItemVisibleAndEnable_lambda0_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 40LL))(v2) & 1) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 464LL))(v2) & 1) != 0) {
    v4 = *(_QWORD*)(v3 + 336);
    if (v4 != v2) {
      if (v4 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 168LL))(v4);
      }
      *(_QWORD*)(v3 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 0, 1u, 0);
      v5 = *(_QWORD*)(v3 + 336);
      if (v5 == 0) {
        v6 = 4;
      LABEL_16:
        *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v6;
        return 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)v5 + 160LL))(v5);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v4 = *(_QWORD*)(v3 + 336);
    }
    v6 = 4;
    if (v4 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 120LL))(v4) & 1) != 0) {
        v6 = 4;
      }
      else {
        v6 = 0;
      }
    }
    goto LABEL_16;
  }
  return 0;
}

#pragma GCC visibility pop
