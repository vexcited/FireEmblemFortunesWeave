#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_2083b20[6];
__int64
ProcFastTravelMenu_1698300_alt1(__int64 a1, __int64 a2,
                                char a3) __asm__("ProcFastTravelMenu_1698300");
__int64 game_menu_BasicMenu_Unknown16de4d0_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Unknown16de4d0");
__int64 game_menu_PageTab_Move_alt1(int*, int,
                                    char) __asm__("game_menu_PageTab_Move");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
__int64 ProcFastTravelMenu_1698300(__int64 a1, int a2, char a3);

__int64 ProcFastTravelMenu_1698300(__int64 a1, int a2, char a3)
{
  signed int v4;
  __int64 v5;
  char* v6;
  char* v8;
  __int64 v9;
  __int64 v10;

  if (*(int*)(a1 + 480) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move_alt1((int*)(a1 + 480), a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v4 = *(_DWORD*)(a1 + 484);
  v5 = *(_QWORD*)(a1 + 496);
  if (v4 < (unsigned __int64)((*(_QWORD*)(a1 + 504) - v5) >> 2)) {
    v4 = *(_DWORD*)(v5 + 4LL * v4);
  }
  if ((unsigned int)v4 > 2) {
    v6 = &GameData_1a9f09e;
  }
  else {
    v6 = GameData_2083b20[v4];
  }
  v8 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v6, 0);
  if (v8 != nullptr) {
    v9 = (__int64)v8;
    v10 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 776),
                                             (__int64)"T_Title");
    if (v10 != 0) {
      GameRoutine_156c5d0_alt1(v10, v9, 0);
    }
  }
  game_menu_BasicMenu_Unknown16de4d0_alt1(a1 - 176);
  return 13;
}

#pragma GCC visibility pop
