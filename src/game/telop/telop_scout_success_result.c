#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136afb0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1760e40(__int64, unsigned int);
__int64 GameRoutine_1840a20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_974b60(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN GameData_1af7258;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 TelopScoutSuccessResult_Unknown57(__int64 a1);

__int64 TelopScoutSuccessResult_Unknown57(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _BYTE* v18;
  _QWORD v19[4];
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = GameRoutine_1760e40(a1, 0xEu);
  v3 = msg_MessageManager_instance__ptr[0];
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (unsigned int)strcmp(*(_QWORD*)(*(_QWORD*)(a1 + 1168) + 8LL),
                           &GameData_1af7258) == 0) {
    v7 = "MID_Sys_Result_Msg_Join_Maxim";
  }
  else {
    v4 = *(_DWORD*)(a1 + 1176);
    v5 = GameRoutine_67ed20(*(_QWORD*)(a1 + 1168));
    if (v5 != 0) {
      v6 = v5;
    }
    else {
      v6 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*v3 + 14704, v6);
    if (v4 == 2) {
      v7 = "MID_Sys_Result_Msg_Join_SideStory";
    }
    else {
      v7 = "MID_Sys_Result_Msg_Join";
    }
  }
  v8 = *v3;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v19[0] = GameData_212e348 + 2;
  v19[1] = 0xFFFF0001FFFF0000LL;
  v19[2] = 0xFFFF0004FFFF0002LL;
  v19[3] = 0xFFFF0006FFFF0005LL;
  v34 = 8;
  v20 = -65529;
  v21 = -65528;
  v9 = GameRoutine_a4dbe0(v8, v7, 0, v19);
  if (v9 != 0) {
    v10 = v9;
    v11 = ui_LayoutAccessor_FindTextBox(v2, "T_Txt");
    if (v11 != 0) {
      GameRoutine_156c5d0(v11, v10, 0);
    }
  }
  v12 = ui_LayoutAccessor_FindPane(v2, "Face");
  if (v12 != 0) {
    v12 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_1840a20(v12, 0, *(_QWORD*)(a1 + 1168), 6, 1);
  result = ui_LayoutAccessor_FindPane(v2, "Clan");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    v14 = result;
    v15 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      return result;
    }
  }
  else {
    v14 = 0;
    v15 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      return result;
    }
  }
  v16 = *(_QWORD*)(v15 + 96);
  if (v16 != 0) {
    v17 = *(_QWORD**)(v16 + 336);
    if (v17 != nullptr) {
      while (v17[10] != 0) {
        result = GameRoutine_974b60(v17[3]);
        if ((result & 1) == 0) {
          break;
        }
        v17 = (_QWORD*)v17[10];
      }
      if (v14 != 0) {
        v18 = (_BYTE*)v17[6];
        if (v18 != nullptr && *v18 != 0) {
          result = GameRoutine_136afb0(ui_Manager_instance_ + 1264, 5);
          if ((result & 1) != 0) {
            return GameRoutine_136a920(ui_Manager_instance_ + 1264, v14, 0, 5,
                                       v17[6]);
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
