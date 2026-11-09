#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
extern __int16 GameData_221b408;
extern __int64 game_script_hub_talk_g_select_menu;
__int64 PersonInfoUnitMenuItem_Unknown25(__int64 a1);

__int64 PersonInfoUnitMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;

  v1 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v1);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 6;
  }
  return 2;
}

#pragma GCC visibility pop
