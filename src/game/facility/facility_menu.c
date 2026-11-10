#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
extern __int64 (*GameData_205e0b8[])();
extern __int64 GameData_21312b8[2];
extern __int64 game_g_game_setting;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_facility_FacilityMenu_SetSelectedNotUsedItem(__int64 a1,
                                                          __int64 a2);
__int64
game_facility_FacilityMenu_SetSelectedNotUsedItem_lambda0_Invoke(__int64 a1,
                                                                 _QWORD* a2);

_QWORD* game_facility_FacilityMenu_SetSelectedNotUsedItem(__int64 a1,
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
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;

  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  v12[0] = GameData_205e0b8;
  v12[1] = a1;
  result = v12;
  v13 = v12;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  v8 = GameData_21312b8[0];
  do {
    v9 = *(_QWORD*)(v4 + 8 * v6);
    if (v9 != 0) {
      v10 = __dynamic_cast(v9, v7, v8, 0);
      if (v10 == 0) {
        goto LABEL_3;
      }
      v14 = v10;
      if (v13 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v13 + 48LL))(v13, &v14) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_3:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  result = v13;
  if (v13 != v12) {
    if (v13 != nullptr) {
      v11 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                         a2);
    }
    return result;
  }
LABEL_12:
  v11 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                     a2);
}

__int64

game_facility_FacilityMenu_SetSelectedNotUsedItem_lambda0_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) & 0x70000) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 464LL))(v2) & 1) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v3 + 336);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 168LL))(v4);
  }
  *(_QWORD*)(v3 + 336) = v2;
  _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 1, 0, 0);
  v5 = *(_QWORD*)(v3 + 336);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 160LL))(v5);
    game_IsVibrationEnabled(game_g_game_setting + 712);
    v6 = *(_QWORD*)(v3 + 336);
    v7 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v7 = 4;
      }
      else {
        v7 = 0;
      }
    }
  }
  else {
    v7 = 4;
  }
  *(_DWORD*)(v3 + 356) = *(_DWORD*)(v3 + 356) & 0xFFFFFFFB | v7;
  return 1;
}

#pragma GCC visibility pop
