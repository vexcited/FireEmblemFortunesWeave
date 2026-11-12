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
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
char* GameHr_6fbd80(__int64, int);
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_a51e10(__int64, unsigned int, unsigned int, int);

__int64 DirectSkillMenuItem_Unknown70(__int64 result, __int64 a2)
{
  unsigned int v2;
  _DWORD* v3;
  __int64* v4;
  unsigned int v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  signed int v19;
  __int64* v20;
  char* v21;

  v2 = *(_DWORD*)(result + 84);
  if ((v2 & 0xFFF) != 0) {
    v3 = (_DWORD*)result;
    v4 = GameData_212c880[0];
    result =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v2 & 0xFFF));
    if (result != 0) {
      result = (__int64)GameHr_6fbd80(
          result, *(unsigned __int8*)(result + 304) - (HIBYTE(v2) & 0x1F));
      if (result != 0) {
        v6 = v3[21];
        v7 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (v6 & 0xFFF));
        v8 = GameHr_6fbd80(v7,
                           *(unsigned __int8*)(v7 + 304) - (HIBYTE(v6) & 0x1F));
        GameRoutine_60a020_alt1(a2 + 8, v8);
        v9 = *v4;
        *(_BYTE*)(a2 + 76) = 1;
        v10 = v3[21];
        v11 = v10 & 0xFFF;
        v12 = (v10 >> 19) & 0x1F;
        v13 = (v10 >> 12) & 0x7F;
        v14 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v11);
        LODWORD(v9) = *(unsigned __int8*)(v14 + 104);
        v15 = *(unsigned __int8*)(v14 + 273);
        if ((unsigned int)(v9 - 5) >= 2) {
          v16 = 0;
        }
        else {
          v16 = v12;
        }
        v17 = v16 - v13 + v15;
        if (v17 >= 1) {
          *(_DWORD*)(a2 + 72) = v17;
        }
        if (game_GameModeData_instance_ != 0 &&
            (v18 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&game_map_g_gimmick_argument)) != 0) {
          v19 = *(_DWORD*)(v18 + 32);
        }
        else {
          v19 = 0;
        }
        result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v3 + 672LL))(v3);
        if (v19 >= 1 && (result & 1) == 0) {
          v20 = msg_MessageManager_instance__ptr[0];
          GameHr_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v19,
                        0);
          v21 =
              GameRoutine_a4dbe0_alt1(*v20, "MID_BtlMenu_Warning_AfterTurn", 0);
          result = GameRoutine_60a020_alt1(a2 + 32, v21);
          *(_BYTE*)(a2 + 77) = 1;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
