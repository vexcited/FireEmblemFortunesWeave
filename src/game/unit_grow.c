#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_70cdd0(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 (*GameData_1faa628[])();
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 game_GameModeData_instance_;
__int64 game_UnitGrow_Clamp(__int64 result);
__int64 game_UnitGrow_Clamp_lambda0_Invoke(__int64 result, unsigned __int8* a2);

__int64 game_UnitGrow_Clamp(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64 v12;
  _QWORD v13[4];
  _QWORD* v14;

  v1 = *(_QWORD*)result;
  if (*(_QWORD*)result != 0) {
    v2 = *(_DWORD*)(result + 8);
    v3 = result;
    if (v2 >= 1) {
      v4 = GameRoutine_9a28e0(64);
      if (game_GameModeData_instance_ != 0) {
        v5 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
        if (v5 != 0) {
          v6 = *(_DWORD*)(v5 + 32);
          if (v6 != 0) {
            v7 = *(_DWORD*)(v1 + 504);
            v8 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
            if (v6 < (int)v8) {
              LODWORD(v8) = *(_DWORD*)(v5 + 32);
            }
            v9 = v8 - 1;
            if (v6 <= 0) {
              v10 = 0;
            }
            else {
              v10 = v9;
            }
            v11 = *(_DWORD*)(GameData_21d9968 + 4LL * v10);
            if (v11 < v7 + v2) {
              v2 = (v11 - v7) & ~((v11 - v7) >> 31);
            }
          }
        }
      }
    }
    *(_DWORD*)(v3 + 8) = v2;
    v13[0] = GameData_1faa628;
    v13[1] = v3;
    v14 = v13;
    GameRoutine_70cdd0(v13);
    result = (__int64)v14;
    if (v14 == v13) {
      v12 = 32;
    }
    else {
      if (v14 == nullptr) {
        return result;
      }
      v12 = 40;
    }
    return (*(__int64 (**)(__int64))(*v14 + v12))((__int64)v14);
  }
  return result;
}

__int64 game_UnitGrow_Clamp_lambda0_Invoke(__int64 result, unsigned __int8* a2)
{
  _QWORD* v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  int v11;

  v2 = *(_QWORD**)(result + 8);
  v3 = *a2;
  v6 = *v2;
  v4 = (char*)v2 + 20;
  v5 = v6;
  v7 = *(_DWORD*)&v4[4 * v3];
  if (v7 >= 1) {
    result = GameRoutine_9a28e0(65);
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), result);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        v8 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if ((unsigned __int8)*(_DWORD*)(result + 32) < (int)v8) {
          LODWORD(v8) = (unsigned __int8)*(_DWORD*)(result + 32);
        }
        v9 = v8 - 1;
        v10 = *(unsigned __int16*)(v5 + 2 * v3 + 514);
        if ((unsigned __int8)*(_DWORD*)(result + 32) == 0) {
          v9 = 0;
        }
        v11 = *(_DWORD*)(GameData_21d99a8 + 4LL * v9);
        if (v11 < v7 + v10) {
          v7 = (v11 - v10) & ~((v11 - v10) >> 31);
        }
      }
    }
  }
  *(_DWORD*)&v4[4 * v3] = v7;
  return result;
}

#pragma GCC visibility pop
