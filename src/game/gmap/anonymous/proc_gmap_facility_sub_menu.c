#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567000(_QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_SubMenu_Unknown96(void);
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212d728[2];
extern char GameData_2260e78;
__int64 ProcGmapFacilitySubMenu_Unknown92(__int64 a1);
__int64 ProcGmapFacilitySubMenu_Unknown96();
__int64 ProcGmapFacilitySubMenu_Unknown133();

__int64 ProcGmapFacilitySubMenu_Unknown92(__int64 a1)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 1168);
  if (v2 != 0 && GameData_2260e78 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  }
  v4 = a1;
  v5 = a1;
  v6 = GameData_212c610;
  v7 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v5, v6, v7, 0);
    v5 = *(_QWORD*)(v5 + 32);
    if (result != 0) {
      v4 = result;
    }
  } while (v5 != 0);
  if (v4 == a1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  return result;
}

__int64 ProcGmapFacilitySubMenu_Unknown96()
{
  __int64 v0;
  __int64 result;

  game_menu_SubMenu_Unknown96();
  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  GameRoutine_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

__int64 ProcGmapFacilitySubMenu_Unknown133()
{
  __int64 v0;
  __int64 result;
  unsigned int v2;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  GameRoutine_155e830(*(_QWORD*)(v0 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v2 = *(_DWORD*)(v0 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v0 + 5856) = v2;
  if (result != 0) {
    result = GameRoutine_1567000(result, 0);
    v2 = *(_DWORD*)(v0 + 5856);
  }
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
  return result;
}

#pragma GCC visibility pop
