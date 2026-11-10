#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_209d6d8[])();
extern __int64 (*GameData_209d7d8[])();
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64
game_menu_GameMenu_RequestChangeParentUnit_lambda0_Invoke_16ea260(__int64 a1,
                                                                  __int64 a2);
bool game_menu_GameMenu_RequestChangeParentUnit_lambda0_Invoke_16ea460(
    __int64 a1, __int64 a2);
__int64
game_menu_GameMenu_RequestChangeParentUnit_lambda1_Invoke_16ea580(__int64 a1,
                                                                  __int64 a2);
bool game_menu_GameMenu_RequestChangeParentUnit_lambda1_Invoke_16ea780(
    __int64 a1, __int64 a2);
_QWORD* GameRoutine_16ea050(_QWORD* result, _QWORD*);
__int64 GameMenu_16e9f50_alt1(__int64, __int64) __asm__("GameMenu_16e9f50");
extern __int64 (*GameData_209d668[])();
extern __int64 (*GameData_209d768[])();
extern __int64* GameData_212e0d0[5];
extern __int64* GameData_212f6c0[2];
extern __int64* GameData_21319f0[9];
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2131c38[51];
extern __int64 GameData_2131c40[50];
_QWORD* GameMenu_16e9cd0(__int64 a1, __int64 a2);
_QWORD* GameMenu_16e9f50(__int64 a1, __int64 a2);

_QWORD* GameMenu_16e9cd0(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[2];
    __int64 v19;
    char gap72_[8];
    _QWORD* v20;
  } v18_;

  v2 = *(_QWORD*)(a1 + 152);
  if (v2 == 0) {
    v2 = a1;
  }
  result = *(_QWORD**)(v2 + 32);
  if (result != nullptr) {
    result = (_QWORD*)__dynamic_cast(result, GameData_212c610,
                                     GameData_2131c18[0], 0);
    if (result != nullptr) {
      v5 = result;
      result = (_QWORD*)__dynamic_cast(result, GameData_2131c18[0],
                                       GameData_212e0d0[0], 0);
      if (result != nullptr) {
        result[147] = a2;
        return result;
      }
      v6 = __dynamic_cast(v5, GameData_2131c18[0], GameData_2131c38[0], 0);
      if (v6 != 0) {
        result = *(_QWORD**)(v6 + 312);
        if (result != nullptr) {
          result = (_QWORD*)__dynamic_cast(result, GameData_21319f0[0],
                                           GameData_2131c40[0], 0);
          if (result != nullptr) {
            result[134] = a2;
          }
        }
        return result;
      }
      result = (_QWORD*)__dynamic_cast(v5, GameData_2131c18[0],
                                       GameData_212f6c0[0], 0);
      if (result != nullptr) {
        v7 = (_QWORD*)result[19];
        v8 = result;
        if (v7 == nullptr) {
          v7 = result;
        }
        result = (_QWORD*)v7[4];
        if (result != nullptr) {
          result = (_QWORD*)__dynamic_cast(result, GameData_212c610,
                                           GameData_2131c18[0], 0);
          if (result != nullptr) {
            v9 = result;
            v10 = __dynamic_cast(result, GameData_2131c18[0],
                                 GameData_212e0d0[0], 0);
            if (v10 != 0) {
              v11 = v10;
              v16_.v16[2] = a2;
              v18_.v19 = a2;
              v16_.v16[0] = GameData_209d668;
              v16_.v16[1] = v10;
              v18_.v18[0] = GameData_209d668;
              v18_.v18[1] = v10;
              v16_.v17 = v16_.v16;
              v18_.v20 = v18_.v18;
              GameRoutine_16ea050(v18_.v18, v8 + 136);
              if (v18_.v20 == v18_.v18) {
                v12 = 32;
              }
              else {
                if (v18_.v20 == nullptr) {
                  goto LABEL_29;
                }
                v12 = 40;
              }
              (*(void (**)(__int64))(*v18_.v20 + v12))((__int64)v18_.v20);
            LABEL_29:
              result = v16_.v17;
              if (v16_.v17 == v16_.v16) {
                v15 = 32;
              }
              else {
                if (v16_.v17 == nullptr) {
                LABEL_34:
                  *(_QWORD*)(v11 + 1176) = a2;
                  return result;
                }
                v15 = 40;
              }
              result = (_QWORD*)(*(__int64 (**)(__int64))(*v16_.v17 + v15))(
                  (__int64)v16_.v17);
              goto LABEL_34;
            }
            result = (_QWORD*)__dynamic_cast(v9, GameData_2131c18[0],
                                             GameData_2131c38[0], 0);
            if (result == nullptr) {
              return result;
            }
            result = (_QWORD*)result[39];
            if (result == nullptr) {
              return result;
            }
            result = (_QWORD*)__dynamic_cast(result, GameData_21319f0[0],
                                             GameData_2131c40[0], 0);
            if (result == nullptr) {
              return result;
            }
            v13 = result;
            v18_.v19 = a2;
            v18_.v18[0] = GameData_209d768;
            v18_.v18[1] = result;
            v18_.v20 = v18_.v18;
            GameMenu_16e9f50_alt1((__int64)v8, (__int64)v18_.v18);
            result = v18_.v20;
            if (v18_.v20 == v18_.v18) {
              v14 = 32;
            }
            else {
              if (v18_.v20 == nullptr) {
              LABEL_37:
                v13[134] = a2;
                return result;
              }
              v14 = 40;
            }
            result = (_QWORD*)(*(__int64 (**)(__int64))(*v18_.v20 + v14))(
                (__int64)v18_.v20);
            goto LABEL_37;
          }
        }
      }
    }
  }
  return result;
}

_QWORD* GameMenu_16e9f50(__int64 a1, __int64 a2)
{
  __int64 v3;
  _QWORD* result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v3 = *(_QWORD*)(a2 + 32);
  if (v3 != 0) {
    if (v3 == a2) {
      v6_.v7 = v6_.v6;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v3 + 24LL))(v3, v6_.v6);
    }
    else {
      v6_.v7 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    }
  }
  else {
    v6_.v7 = nullptr;
  }
  GameRoutine_16ea050(v6_.v6, (_QWORD*)(a1 + 1088));
  result = v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64

game_menu_GameMenu_RequestChangeParentUnit_lambda0_Invoke_16ea260(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = v13;
  v5 = *(_QWORD**)(v2 + 232);
  v6 = *(_QWORD**)(v2 + 240);
  v14 = v13;
  v13[0] = GameData_209d6d8;
  v13[1] = v3;
  if (v5 == v6) {
    v10 = 0;
  LABEL_14:
    v11 = 32;
    goto LABEL_15;
  }
  v7 = GameData_212e008[0];
  v8 = GameData_212e0c8[0];
  while (1) {
    if (*v5 != 0) {
      v9 = __dynamic_cast(*v5, v7, v8, 0);
      if (v9 != 0) {
        v10 = v9;
        v15 = v9;
        if (v14 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v15) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v5 == v6) {
      v10 = 0;
      break;
    }
  }
  v4 = v14;
  if (v14 == v13) {
    goto LABEL_14;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v4 + v11))(v4, a2);
  }
  return v10;
}

bool game_menu_GameMenu_RequestChangeParentUnit_lambda0_Invoke_16ea460(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

__int64

game_menu_GameMenu_RequestChangeParentUnit_lambda1_Invoke_16ea580(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = v13;
  v5 = *(_QWORD**)(v2 + 232);
  v6 = *(_QWORD**)(v2 + 240);
  v14 = v13;
  v13[0] = GameData_209d7d8;
  v13[1] = v3;
  if (v5 == v6) {
    v10 = 0;
  LABEL_14:
    v11 = 32;
    goto LABEL_15;
  }
  v7 = GameData_212e008[0];
  v8 = GameData_212e0c8[0];
  while (1) {
    if (*v5 != 0) {
      v9 = __dynamic_cast(*v5, v7, v8, 0);
      if (v9 != 0) {
        v10 = v9;
        v15 = v9;
        if (v14 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v15) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v5 == v6) {
      v10 = 0;
      break;
    }
  }
  v4 = v14;
  if (v14 == v13) {
    goto LABEL_14;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v4 + v11))(v4, a2);
  }
  return v10;
}

bool game_menu_GameMenu_RequestChangeParentUnit_lambda1_Invoke_16ea780(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
