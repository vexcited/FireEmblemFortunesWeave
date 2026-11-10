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
