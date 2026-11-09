#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6cb490(_QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 GameData_22400f8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_UnitFlags_instance_;
__int64 ProcUnitBurstAdd_Unknown26(__int64 a1);

__int64 ProcUnitBurstAdd_Unknown26(__int64 a1)
{
  __int64 v2;
  int v3;
  int v4;
  __int64 result;
  float v6;
  int v7;
  int v8;
  int v9;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  GameRoutine_6cb490(*(_QWORD*)(a1 + 152));
  v2 = *(_QWORD*)(a1 + 152);
  v3 = *(_DWORD*)(v2 + 2176);
  if (v3 <= -1) {
    v3 = -1;
  }
  if ((unsigned int)(v3 + 1) < 0x1869F) {
    v4 = v3 + 1;
  }
  else {
    v4 = 99999;
  }
  *(_DWORD*)(v2 + 2176) = v4;
  result = GameRoutine_8224a0(26);
  if (game_GameModeData_instance_ != 0 &&
      (result = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), result)) != 0) {
    v6 = *(float*)(a1 + 160);
    if (*(_DWORD*)(result + 32) == 1) {
      v6 = v6 + v6;
    }
  }
  else {
    v6 = *(float*)(a1 + 160);
  }
  v7 = (int)(float)(v6 * 60.0);
  if (v7 >= 1) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v9 = 2)
             : (v9 = 3),
         (v9 & v8) != 0)) {
      v10 = *(float*)(a1 + 144);
      v11 = (float)(unsigned int)v7;
      *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
      if (v10 >= (float)(unsigned int)v7) {
        v11 = v10;
      }
      *(float*)(a1 + 144) = v11;
    }
  }
  if (GameData_22400f8 != 0) {
    v12 = *(_QWORD*)(a1 + 152);
    if (v12 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v13 = *(_QWORD*)(v12 + 440);
      if (v13 != 0 && *(unsigned __int8*)(v13 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v14 = *(unsigned __int8*)(v12 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v14) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v14) |= 2u;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
