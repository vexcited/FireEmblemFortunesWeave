#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__int64* game_8224a0(unsigned __int8);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
extern __int64* GameData_212d460[6];
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_g_game_setting;
extern char GameData_22367d4;
_BYTE* ProcWait_Unknown2(_BYTE* result);

_BYTE* ProcWait_Unknown2(_BYTE* result)
{

#pragma clang fp contract(off)
  int v1;
  int v2;
  int v3;
  __int64* v4;
  float v6;
  float v7;
  bool v8;
  float v9;
  float v10;
  float v11;
  int v12;
  _BYTE* v13;
  __int64* v14;
  __int64 v15;

  if (game_ProcGameSkipView_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
    if ((unsigned int)(v1 - 1) <= 2) {
      v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v3 = (v2 & 8) != 0 ? 2 : 3;
      if ((v3 & v2) == 0) {
        if (v1 != 3) {
          return result;
        }
        goto LABEL_15;
      }
    }
  }
  v4 = GameData_212d460[0];
  if (result[156] == 1 && *GameData_212d460[0] != 0) {
    v12 = *(_DWORD*)(game_g_game_setting + 952);
    if ((v12 & 1) != 0) {
      goto LABEL_28;
    }
    if ((v12 & 2) != 0) {
      v13 = result;
      v14 = game_8224a0(0x13u);
      result = v13;
      if (game_GameModeData_instance_ == 0 ||
          (v15 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v14),
           result = v13, v15 == 0) ||
          *(_DWORD*)(v15 + 32) != 1 ||
          *v4 != 0 && (*(_BYTE*)(game_g_game_setting + 944) & 8) != 0) {
      LABEL_28:
        GameData_22367d4 = 1;
        if ((*((_WORD*)result + 68) & 1) != 0) {
          return result;
        }
        return ProcInst_657a50((__int64)result, 1);
      }
    }
    else if ((*(_BYTE*)(game_g_game_setting + 944) & 8) != 0) {
      goto LABEL_28;
    }
  }
  v6 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
  v7 = v6 * 0x1.119ce00000000p-6f;
  v8 = v6 <= 0x0.0p+0f;
  v9 = 0x1.0b33320000000p+4f;
  v10 = v7 * 0x1.f400000000000p+9f;
  if (!v8) {
    v9 = v10;
  }
  v11 = *((float*)result + 38) - v9;
  *((float*)result + 38) = v11;
  if (v11 <= 0x0.0p+0f) {
  LABEL_15:
    if ((*((_WORD*)result + 68) & 1) == 0) {
      return ProcInst_657a50((__int64)result, 1);
    }
  }
  return result;
}

#pragma GCC visibility pop
