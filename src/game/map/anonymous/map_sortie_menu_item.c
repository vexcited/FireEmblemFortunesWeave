#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_21ca240;
extern __int64 GameData_21ca248;
extern __int64 GameData_21ca310;
bool MapSortieMenuItem_Unknown89();
__int64 GameRoutine_1784360(__int64, _QWORD*, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_178cf10(__int64);
__int64 game_menu_BasicMenu_Unknown16dd9a0(__int64 result);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
extern __int64* GameData_212d670[3];
extern __int64 GameData_212d690;
void GameRoutine_156c910(__int64 result, const char*, int, ...);
__int64 MapSortieMenuItem_ACall(_QWORD* a1);

__int64 MapSortieMenuItem_ACall(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 result;

  v1 = a1[1];
  v3 = a1[11];
  if (*(_QWORD*)(v1 + 152) != 0) {
    v5 = *(_QWORD*)(v1 + 152);
  }
  else {
    v5 = a1[1];
  }
  if ((GameRoutine_1784360(v5, a1, v3) & 1) == 0) {
    return 1;
  }
  game_menu_178cf10((__int64)a1);
  game_menu_BasicMenu_Unknown16dd9a0(a1[1]);
  v6 = a1[1];
  v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v7 != 0) {
    v8 = 0;
    do {
      v7 = *(_QWORD*)(v7 + 432);
      ++v8;
    } while (v7 != 0);
  }
  else {
    v8 = 0;
  }
  result = ui_LayoutAccessor_FindPane((__int64*)(v6 + 952), "L_Num/T_Num");
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
    if (result != 0) {
      GameRoutine_156c910(result, "%d", 1, v8);
      return 0;
    }
  }
  return result;
}

bool MapSortieMenuItem_Unknown89()
{
  unsigned __int64 v0;
  __int64 v1;
  int v2;

  v0 = (unsigned __int64)(GameData_21ca248 - GameData_21ca240) >> 3;
  if ((_DWORD)v0 == 0) {
    return false;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
  if (v1 != 0) {
    v2 = 0;
    do {
      v1 = *(_QWORD*)(v1 + 432);
      ++v2;
    } while (v1 != 0);
  }
  else {
    v2 = 0;
  }
  return v2 >= (int)v0;
}

#pragma GCC visibility pop
