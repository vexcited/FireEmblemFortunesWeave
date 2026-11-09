#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1871dc0(_QWORD, _QWORD);
const char* ItemShopTopMenuItem_Unknown3(__int64 a1);
__int64 ItemShopTopMenuItem_Unknown25(_QWORD* a1);
const char* ItemShopTopMenuItem_Unknown75(__int64 a1);
__int64 GameRoutine_143d0a0(_QWORD, _QWORD);
__int64 GameRoutine_821090(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern _UNKNOWN GameData_1abbc6b;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ItemShopTopMenuItem_1871d00();

const char* ItemShopTopMenuItem_Unknown3(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 96) & 0xFD) != 0) {
    return "MID_BlacksmithShop_Repair";
  }
  else {
    return "MID_BlacksmithShop_Refine";
  }
}

__int64 ItemShopTopMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = a1[1];
  }
  GameRoutine_1871dc0(v3, a1 + 12);
  return 9;
}

__int64 ItemShopTopMenuItem_1871d00()
{
  __int64 v0;
  __int64 v1;
  _BOOL4 v2;
  __int64 v3;

  v0 = GameRoutine_821090(9);
  v2 = game_GameModeData_instance_ == 0 ||
       (v1 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v0)) == 0 ||
       *(_DWORD*)(v1 + 32) < 1;
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if ((GameRoutine_143d0a0(&GameData_1abbc6b, v3) & 1) != 0) {
    return v2;
  }
  else {
    return v2 | 2u;
  }
}

const char* ItemShopTopMenuItem_Unknown75(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 96) & 0xFD) != 0) {
    return "MID_BlacksmithShop_Repair_Help";
  }
  else {
    return "MID_BlacksmithShop_Refine_Help";
  }
}

#pragma GCC visibility pop
