#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameSubquestData_125bbc0(_QWORD);
extern __int16 GameData_221b408;
extern __int64 GameData_21c9718;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_hub_talk_g_select_menu;
extern char* GameData_212f6f0[5];
__int64 ProcurementUnitMenuItem_Unknown6();
__int64 ProcurementUnitMenuItem_Unknown25(__int64 a1);
__int64 ProcurementUnitMenuItem_Unknown58();
__int64 ProcurementUnitMenuItem_Unknown70(__int64 a1, __int64 a2);

__int64 ProcurementUnitMenuItem_Unknown6()
{
  GameSubquestData_125bbc0(GameData_21c9718);
  return 1;
}

__int64 ProcurementUnitMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 10;
  }
  return 2;
}

__int64 ProcurementUnitMenuItem_Unknown58()
{
  __int64 v0;
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  bool v6;
  int v7;

  v0 = GameData_21c9718;
  GameSubquestData_125bbc0(GameData_21c9718);
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v2 = v0 + 136LL * v1;
  v3 = *(_QWORD*)(v2 + 72);
  v4 = *(_QWORD*)(v2 + 80);
  if (v3 == v4) {
    return 0;
  }
  while (1) {
    if (*(_BYTE*)(**(_QWORD**)v3 + 112LL) == 6) {
      v5 = *(unsigned __int8*)(*(_QWORD*)v3 + 9LL);
      v6 = v5 > 5;
      v7 = (1 << v5) & 0x31;
      if (v6 || v7 == 0) {
        break;
      }
    }
    v3 += 8;
    if (v3 == v4) {
      return 0;
    }
  }
  return 1;
}

__int64 ProcurementUnitMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 result;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  bool v10;
  int v11;

  GameRoutine_60a020(a2 + 8, "MID_HubMenu_Procurement_Help");
  v3 = GameData_21c9718;
  result = GameSubquestData_125bbc0(GameData_21c9718);
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = v3 + 136LL * v5;
  v7 = *(_QWORD*)(v6 + 72);
  v8 = *(_QWORD*)(v6 + 80);
  if (v7 == v8) {
    return GameRoutine_60a020(a2 + 32, *(_QWORD*)GameData_212f6f0[0]);
  }
  while (1) {
    if (*(_BYTE*)(**(_QWORD**)v7 + 112LL) == 6) {
      v9 = *(unsigned __int8*)(*(_QWORD*)v7 + 9LL);
      v10 = v9 > 5;
      v11 = (1 << v9) & 0x31;
      if (v10 || v11 == 0) {
        break;
      }
    }
    v7 += 8;
    if (v7 == v8) {
      return GameRoutine_60a020(a2 + 32, *(_QWORD*)GameData_212f6f0[0]);
    }
  }
  return result;
}

#pragma GCC visibility pop
