#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1762890(__int64, unsigned int);
__int64 GameRoutine_1763ac0(__int64, signed int, unsigned int);
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 game_GameModeData_instance_;
extern int GameData_21f8110;
extern int GameData_21f8130;
__int64 TelopReconstructionResult_Unknown57(__int64 result);

__int64 TelopReconstructionResult_Unknown57(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned int v3;
  int v4;
  int* v5;
  int v6;
  bool v7;
  unsigned __int64 v8;
  signed int v9;
  __int64 v10;
  int* v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  signed int v15;
  int* v16;
  __int64 v17;
  int* v18;
  signed int v19;
  unsigned __int64 v20;
  signed int v21;

  v1 = *(_QWORD*)(result + 1168);
  v2 = result;
  if (*(_WORD*)(v1 + 64) != 0) {
    result = GameRoutine_1762890(result, *(unsigned __int16*)(v1 + 64));
    v1 = *(_QWORD*)(v2 + 1168);
  }
  v3 = *(unsigned __int16*)(v1 + 66);
  if (*(_WORD*)(v1 + 66) != 0) {
    if (game_GameModeData_instance_ != 0) {
      v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
      v5 = &GameData_21f8110;
      if (v4 == 2) {
        v8 = (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
      }
      else if (v4 == 3) {
        v6 = *(_DWORD*)(game_GameModeData_instance_ + 64);
        v7 = v6 <= 1;
        if (v6 <= 1) {
          LODWORD(v8) = 1;
        }
        else {
          LODWORD(v8) =
              (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
        }
        if (!v7) {
          v5 = &GameData_21f8130;
        }
      }
      else {
        LODWORD(v8) = 1;
      }
      v11 = v5 + 2;
      v10 = *((_QWORD*)v5 + 1);
      v12 = (unsigned __int64)(*((_QWORD*)v11 + 1) - v10) >> 2;
      if ((int)v8 < (int)v12) {
        LODWORD(v12) = v8;
      }
      v13 = v12 - 1;
      if ((int)v8 <= 0) {
        v14 = 0;
      }
      else {
        v14 = v13;
      }
      v15 = *(_DWORD*)(v10 + 4LL * v14);
      v16 = &GameData_21f8110;
      if (v4 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
        v16 = &GameData_21f8130;
      }
      v18 = v16 + 2;
      v17 = *((_QWORD*)v16 + 1);
      v19 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      v20 = (unsigned __int64)(*((_QWORD*)v18 + 1) - v17) >> 2;
      if ((int)v20 <= 1) {
        LODWORD(v20) = 1;
      }
      v21 = *(_DWORD*)(v17 + 4LL * (unsigned int)v20 - 4);
      if (v21 >= v19) {
        v21 = *(_DWORD*)(game_GameModeData_instance_ + 76);
      }
      if (v19 >= v15) {
        v9 = v21;
      }
      else {
        v9 = v15;
      }
    }
    else {
      v9 = 0;
    }
    return GameRoutine_1763ac0(v2, v9, v3);
  }
  return result;
}

#pragma GCC visibility pop
