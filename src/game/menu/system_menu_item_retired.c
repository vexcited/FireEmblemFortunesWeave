#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_134ca00(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
extern __int64 game_GameModeData_instance_;
const char* SystemMenuItem_Retired_1857480(__int64 a1);
__int64 SystemMenuItem_Retired_18574e0(__int64 a1, __int64 a2);
__int64 game_menu_SystemMenuItem_Retired_ACall_lambda0_Invoke(__int64 a1);

const char* SystemMenuItem_Retired_1857480(__int64 a1)
{
  int v1;
  const char* v2;

  if (game_GameModeData_instance_ == 0) {
    goto LABEL_4;
  }
  v1 = *(_DWORD*)(game_GameModeData_instance_ + 92);
  if ((v1 & 0x80) != 0) {
    return "MID_SysMenu_Retired_Hub_Help";
  }
  if ((v1 & 0x200) == 0) {
  LABEL_4:
    v2 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
    return (const char*)game_util_Format("%s_Help", v2);
  }
  return "MID_SysMenu_Retired_Dungeon_Help";
}

__int64 SystemMenuItem_Retired_18574e0(__int64 a1, __int64 a2)
{
  char v2;
  __int64 v3;
  __int64 v5;

  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v3 != 0 && (*(_BYTE*)(v3 + 185) & 2) != 0) {
      if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
        v5 = a1;
        v2 = GameRoutine_134ca00(a1, a2);
        a1 = v5;
      }
      else {
        v2 = 1;
      }
    }
    else {
      v2 = 0;
    }
  }
  return (unsigned __int8)v2 & *(_BYTE*)(a1 + 81) & 1;
}

__int64 game_menu_SystemMenuItem_Retired_ACall_lambda0_Invoke(__int64 a1)
{
  (*(void (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 568LL))(*(_QWORD*)(a1 + 8));
  return 4;
}

#pragma GCC visibility pop
