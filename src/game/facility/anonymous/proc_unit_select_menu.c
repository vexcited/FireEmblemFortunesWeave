#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1009aa0(_QWORD);
__int64 GameRoutine_82e7c0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(void);
extern __int64 GameData_20b1428;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
extern char GameData_2262bfc;
__int64 ProcUnitSelectMenu_Unknown93(__int64 result);
__int64 ProcUnitSelectMenu_Unknown102(__int64 a1);

__int64 ProcUnitSelectMenu_Unknown93(__int64 result)
{
  if ((*(_BYTE*)(result + 1072) & 1) == 0) {
    *(_BYTE*)(result + 1072) = 1;
    *(_BYTE*)(result + 648) = 1;
    *(_DWORD*)(result + 356) &= ~2u;
    return game_menu_BasicMenu_Unknown16de2e0();
  }
  return result;
}

__int64 ProcUnitSelectMenu_Unknown102(__int64 a1)
{
  __int64 result;
  __int64 v3;
  _QWORD* v4;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20b1428, 0);
    if (result != 0) {
      v3 = result;
      v4 = (_QWORD*)GameRoutine_82e7c0(*(unsigned __int8*)(result + 83), 2);
      if (*v4 == 0 || game_GameModeData_instance_ == 0) {
        return 0;
      }
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v4);
      if (result == 0) {
        return result;
      }
      if (*(_DWORD*)(result + 32) != 0) {
        GameData_2262bfc = *(_BYTE*)(v3 + 83);
        GameRoutine_1009aa0(a1);
        return 9;
      }
      else {
        return 0;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
