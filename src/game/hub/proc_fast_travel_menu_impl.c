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
__int64 ProcFastTravelMenu_1698300(__int64 a1, __int64 a2, char a3);

__int64 ProcFastTravelMenu_1698300(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64 v4;
  signed int v6;
  __int64 v7;
  char* v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[4];
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  if (*(int*)(a1 + 480) < 1) {
    return 0;
  }
  v30 = v3;
  v31 = v4;
  if ((game_menu_PageTab_Move(a1 + 480, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v6 = *(_DWORD*)(a1 + 484);
  v7 = *(_QWORD*)(a1 + 496);
  if (v6 < (unsigned __int64)((*(_QWORD*)(a1 + 504) - v7) >> 2)) {
    v6 = *(_DWORD*)(v7 + 4LL * v6);
  }
  if ((unsigned int)v6 > 2) {
    v8 = &GameData_1a9f09e;
  }
  else {
    v8 = GameData_2083b20[v6];
  }
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v10 = *msg_MessageManager_instance__ptr[0];
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v14[0] = msg_TagSelector_vtable;
  v14[1] = 0xFFFF0001FFFF0000LL;
  v14[2] = 0xFFFF0004FFFF0002LL;
  v14[3] = 0xFFFF0006FFFF0005LL;
  v29 = 8;
  v15 = -65529;
  v16 = -65528;
  v11 = GameRoutine_a4dbe0(v10, v8, 0, v14);
  if (v11 != 0) {
    v12 = v11;
    v13 = ui_LayoutAccessor_FindTextBox(a1 + 776, "T_Title");
    if (v13 != 0) {
      GameRoutine_156c5d0(v13, v12, 0);
    }
  }
  game_menu_BasicMenu_Unknown16de4d0(a1 - 176);
  return 13;
}

#pragma GCC visibility pop
