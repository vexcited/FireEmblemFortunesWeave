#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_97ee10(_QWORD, _QWORD);
__int64 TelopParts_17cc9d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_2241720;
extern __int64 game_GameModeData_instance_;
__int64 EventNatives_162b690(__int64* a1);

__int64 EventNatives_162b690(__int64* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v7;
  __int64 v8;
  __int64 v9;

  v1 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  v3 = *a1;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_7;
  }
  v4 = a1;
  v5 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v1);
  if (v5 != 0 && *(_BYTE*)(v5 + 32) != 0) {
    return 0;
  }
  v3 = *v4;
  if (*v4 != 0) {
  LABEL_7:
    GameRoutine_97ee10(v3, 1);
  }
  v7 = **(__int64***)(v1 + 40);
  if ((int)((*(_QWORD*)(*(_QWORD*)(v1 + 40) + 8LL) - (_QWORD)v7) >> 3) >= 1 &&
      (v8 = *v7) != 0) {
    v9 = *(_QWORD*)(v8 + 40);
  }
  else {
    v9 = 0;
  }
  if (GameData_2241720 != 0) {
    TelopParts_17cc9d0(GameData_2241720, "MID_Sys_InfoTelop_Tutorial_Add", 1,
                       v9, 0, 0, 0, 0);
  }
  return 1;
}

#pragma GCC visibility pop
