#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_73c460(void);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
extern char GameData_22478a0;
__int64 game_facility_ClassExaminerUtil_AddRelayCallback_lambda0_Invoke();
void game_facility_ClassExaminerUtil_AddRelayCallback_lambda1_Invoke(
    __int64 a1, __int64* a2);

__int64 game_facility_ClassExaminerUtil_AddRelayCallback_lambda0_Invoke()
{
  __int64 result;

  result = GameRoutine_73c460();
  GameData_22478a0 = result & 1;
  return result;
}

void game_facility_ClassExaminerUtil_AddRelayCallback_lambda1_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE v7[32];
  _BYTE* v8;
  __int64 v9;
  __int64 v10;
  const char* v11;

  if (GameData_22478a0 == 1) {
    v9 = v2;
    v10 = v3;
    v4 = *a2;
    v11 = "MID_BtlMenu_BigUnitCantSpace_Message";
    v5 = game_menu_Dialog__CreateBind_game_menu_Dialog(v4, &v11);
    if (v5 != 0) {
      v8 = nullptr;
      GameRoutine_6680e0(v7, v5 + 1248);
      if (v8 == v7) {
        v6 = 32;
      }
      else {
        if (v8 == nullptr) {
          return;
        }
        v6 = 40;
      }
      (*(void (**)(void))(*(_QWORD*)v8 + v6))();
    }
  }
}

#pragma GCC visibility pop
