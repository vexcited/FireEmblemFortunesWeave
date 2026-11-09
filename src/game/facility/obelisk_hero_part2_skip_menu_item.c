#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ObeliskHeroPart2SkipMenuItem_Unknown55(__int64 a1);

__int64 ObeliskHeroPart2SkipMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        v12 = -1;
        v13 = -1;
        v14 = -1;
        v15 = -1;
        v5 = *msg_MessageManager_instance__ptr[0];
        v16 = -1;
        v17 = -1;
        v18 = -1;
        v19 = -1;
        v20 = -1;
        v21 = -1;
        v22 = -1;
        v23 = -1;
        v9[0] = GameData_212e348 + 2;
        v9[1] = 0xFFFF0001FFFF0000LL;
        v9[2] = 0xFFFF0004FFFF0002LL;
        v9[3] = 0xFFFF0006FFFF0005LL;
        v24 = 8;
        v10 = -65529;
        v11 = -65528;
        v6 = GameRoutine_a4dbe0(v5, "MID_HeroMenu_Skip_Part2", 0, v9);
        if (v6 != 0) {
          v7 = v6;
          v8 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
          if (v8 != 0) {
            GameRoutine_156c5d0(v8, v7, 0);
          }
        }
        result = GameRoutine_1562cf0(v3, "Large_StatusOff");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak(v4);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
