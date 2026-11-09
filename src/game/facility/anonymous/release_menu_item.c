#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e7650(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_212cf88[4];
extern __int64 GameData_21f42d0;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
bool ReleaseMenuItem_Unknown58();
__int64 ReleaseMenuItem_Unknown73(__int64 a1);

bool ReleaseMenuItem_Unknown58()
{
  _BOOL4 v0;

  v0 = game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 2;
  return *(int*)(*(_QWORD*)(GameData_21f42d0 + 8) + 144LL) > 0 && v0;
}

__int64 ReleaseMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  _QWORD v9[2];
  char v10;
  int v11;
  int v12;
  char v13;
  __int64 v14;
  _BYTE v15[168];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370(v15, v4, "MID_StableMenu_Release_Help");
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
      v5 = 0x400000;
    }
    else {
      v5 = 0;
    }
  }
  v14 = 0;
  if (*(int*)(*(_QWORD*)(*(_QWORD*)GameData_212cf88[0] + 8LL) + 144LL) >= 1) {
    v6 = v5;
  }
  else {
    v6 = v5 | 0x80;
  }
  GameRoutine_15e7650(v15, v6, v9);
  v7 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v13 = 0;
  v14 = 0;
  v9[0] = "Tutorial";
  v9[1] = "MID_KeyHelp_Tutorial";
  v10 = 1;
  v11 = 10;
  v12 = v7;
  GameRoutine_16ef210(v15, v9);
  return GameRoutine_16ee520(v15);
}

#pragma GCC visibility pop
