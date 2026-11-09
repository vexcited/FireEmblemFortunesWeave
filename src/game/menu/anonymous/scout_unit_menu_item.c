#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_9067c0(_QWORD, _QWORD);
extern __int16 GameData_221b408;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
extern char* GameData_212f6d8[8];
__int64 ScoutUnitMenuItem_Unknown25(__int64 a1);
__int64 ScoutUnitMenuItem_Unknown58(__int64 a1);
__int64 ScoutUnitMenuItem_Unknown70(__int64 a1, __int64 a2);

__int64 ScoutUnitMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 7;
  }
  return 2;
}

__int64 ScoutUnitMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  _QWORD v3[2];

  v1 = *(_QWORD*)(a1 + 88);
  v3[0] = 0;
  v3[1] = v1;
  return GameRoutine_9067c0(game_GameModeData_instance_ + 136, v3) & 1;
}

__int64 ScoutUnitMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  char* v3;
  __int64 result;

  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    *(_QWORD*)(a2 + 16) = 22;
    v3 = *(char**)(a2 + 24);
  }
  else {
    *(_BYTE*)(a2 + 8) = 44;
    v3 = (char*)(a2 + 9);
  }
  strcpy(v3, "MID_HubMenu_Scout_Help");
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  if ((result & 1) == 0) {
    return GameRoutine_60a020(a2 + 32, *(_QWORD*)GameData_212f6d8[0]);
  }
  return result;
}

#pragma GCC visibility pop
