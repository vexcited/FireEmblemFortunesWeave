#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6fbd80(void);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_g_gimmick_argument;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 DirectSkillMenuItem_Unknown70(__int64 result, __int64 a2);

__int64 DirectSkillMenuItem_Unknown70(__int64 result, __int64 a2)
{
  int v2;
  _DWORD* v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD v21[4];
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  v2 = *(_DWORD*)(result + 84);
  if ((v2 & 0xFFF) != 0) {
    v3 = (_DWORD*)result;
    v4 = GameData_212c880[0];
    result =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v2 & 0xFFF));
    if (result != 0) {
      result = GameRoutine_6fbd80();
      if (result != 0) {
        v6 = GameRoutine_6fbd80();
        GameRoutine_60a020(a2 + 8, v6);
        v7 = *v4;
        *(_BYTE*)(a2 + 76) = 1;
        v8 = v3[21];
        v9 = v8 & 0xFFF;
        v10 = (v8 >> 19) & 0x1F;
        v11 = (v8 >> 12) & 0x7F;
        v12 = *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v9);
        LODWORD(v7) = *(unsigned __int8*)(v12 + 104);
        v13 = *(unsigned __int8*)(v12 + 273);
        if ((unsigned int)(v7 - 5) >= 2) {
          v14 = 0;
        }
        else {
          v14 = v10;
        }
        v15 = v14 - v11 + v13;
        if (v15 >= 1) {
          *(_DWORD*)(a2 + 72) = v15;
        }
        if (game_GameModeData_instance_ != 0 &&
            (v16 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48),
                 &game_map_g_gimmick_argument)) != 0) {
          v17 = *(_DWORD*)(v16 + 32);
        }
        else {
          v17 = 0;
        }
        result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v3 + 672LL))(v3);
        if (v17 >= 1 && (result & 1) == 0) {
          v18 = msg_MessageManager_instance__ptr[0];
          GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0,
                             (unsigned int)v17, 0);
          v19 = *v18;
          v24 = -1;
          v25 = -1;
          v26 = -1;
          v27 = -1;
          v28 = -1;
          v29 = -1;
          v30 = -1;
          v31 = -1;
          v32 = -1;
          v33 = -1;
          v34 = -1;
          v35 = -1;
          v21[0] = GameData_212e348 + 2;
          v21[1] = 0xFFFF0001FFFF0000LL;
          v21[2] = 0xFFFF0004FFFF0002LL;
          v21[3] = 0xFFFF0006FFFF0005LL;
          v36 = 8;
          v22 = -65529;
          v23 = -65528;
          v20 =
              GameRoutine_a4dbe0(v19, "MID_BtlMenu_Warning_AfterTurn", 0, v21);
          result = GameRoutine_60a020(a2 + 32, v20);
          *(_BYTE*)(a2 + 77) = 1;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
