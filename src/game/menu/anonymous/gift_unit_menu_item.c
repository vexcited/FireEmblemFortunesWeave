#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_89cc80(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int16 GameData_221b408;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_script_hub_talk_g_select_menu;
extern char* GameData_212f6d0[9];
__int64 GiftUnitMenuItem_Unknown6(__int64 a1);
__int64 GiftUnitMenuItem_Unknown25(__int64 a1);
bool GiftUnitMenuItem_Unknown58(__int64 a1);
__int64 GiftUnitMenuItem_Unknown70(__int64 a1, __int64 a2);

__int64 GiftUnitMenuItem_Unknown6(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 88);
  GameRoutine_89cc80(19);
  if (v1 != 0 && *(_QWORD*)(v1 + 272) != 0) {
    v2 = *(_QWORD*)(v1 + 24);
    if (*(_QWORD*)(v2 + 1472) != 0 && game_GameModeData_instance_ != 0) {
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  v2 + 1472);
    }
  }
  return 1;
}

__int64 GiftUnitMenuItem_Unknown25(__int64 a1)
{
  __int64 v2;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  GameRoutine_60a020(&GameData_221b408, v2);
  if (game_script_hub_talk_g_select_menu != 0) {
    *(_DWORD*)(game_script_hub_talk_g_select_menu + 152) = 8;
  }
  return 2;
}

bool GiftUnitMenuItem_Unknown58(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  unsigned int v5;
  int v7;
  __int64 v8;
  __int16* v9;
  unsigned int v10;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = GameRoutine_89cc80(19);
  if (v1 == 0 || *(_QWORD*)(v1 + 272) == 0) {
    return false;
  }
  v3 = *(_QWORD*)(v1 + 24);
  if (*(_QWORD*)(v3 + 1472) == 0 || game_GameModeData_instance_ == 0) {
    v5 = 0;
  }
  else {
    v7 = v2;
    v8 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3 + 1472);
    if (v8 != 0) {
      v5 = *(_DWORD*)(v8 + 32);
    }
    else {
      v5 = 0;
    }
    v2 = v7;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v9 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v9 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v10 = 10000 * *v9 + 100 * v9[1] + v9[2];
  return v2 > 0 && v5 <= v10;
}

__int64 GiftUnitMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  char* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  bool v7;
  unsigned int v8;
  unsigned int v9;
  __int64 v10;
  __int16* v11;
  const char* v12;

  if ((*(_BYTE*)(a2 + 8) & 1) != 0) {
    *(_QWORD*)(a2 + 16) = 21;
    v3 = *(char**)(a2 + 24);
  }
  else {
    *(_BYTE*)(a2 + 8) = 42;
    v3 = (char*)(a2 + 9);
  }
  strcpy(v3, "MID_HubMenu_Gift_Help");
  v4 = *(_QWORD*)(a1 + 88);
  result = GameRoutine_89cc80(19);
  if (v4 == 0 || *(_QWORD*)(v4 + 272) == 0 ||
      (*(_QWORD*)((v6 = *(_QWORD*)(v4 + 24)) + 1472) != 0
           ? (v7 = game_GameModeData_instance_ == 0)
           : (v7 = true),
       v7 ? (v8 = 0)
          : (v9 = result,
             v10 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v6 + 1472),
             v10 == 0 ? (v8 = 0) : (v8 = *(_DWORD*)(v10 + 32)), result = v9),
       game_gmap_GmapClock_instance_ != 0
           ? (v11 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
           : (v11 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       v8 > 10000 * *v11 + 100 * v11[1] + v11[2])) {
    v12 = "MID_Menu_Cause_UsedWeek";
    return GameRoutine_60a020(a2 + 32, v12);
  }
  if ((int)result <= 0) {
    v12 = *(const char**)GameData_212f6d0[0];
    return GameRoutine_60a020(a2 + 32, v12);
  }
  return result;
}

#pragma GCC visibility pop
