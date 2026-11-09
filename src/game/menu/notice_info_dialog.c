#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 game_gameui_MenuAnimator_instance_;
__int64 NoticeInfoDialog_1904750(__int64 a1, int a2);
__int64 NoticeInfoDialog_Unknown135(__int64 a1, __int64 a2);
__int64 NoticeInfoDialog_1904be0(__int64 a1, __int64 a2);

__int64 NoticeInfoDialog_1904750(__int64 a1, int a2)
{
  unsigned __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
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
  __int64 v25;
  __int64 v26;
  __int64 result;

  v2 = 4LL * a2;
  v4 = **(_QWORD**)(a1 + 1184);
  if (v2 >= (*(_QWORD*)(*(_QWORD*)(a1 + 1184) + 8LL) - v4) >> 3) {
    v8 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 32LL * a2);
    v6 = game_util_Format("T_Txt_%02d", 0);
    GameRoutine_1562060(a1 + 848, v6, *(_QWORD*)(v5 + 64));
    v7 = game_util_Format("N_Help_%02d", 0);
    v8 = 1;
    ui_LayoutAccessor_SetPaneVisible(a1 + 848, v7, 1);
    v9 = **(_QWORD**)(a1 + 1184);
    if ((v2 | 1) < (*(_QWORD*)(*(_QWORD*)(a1 + 1184) + 8LL) - v9) >> 3) {
      v10 = *(_QWORD*)(v9 + 8 * (v2 | 1));
      v11 = game_util_Format("T_Txt_%02d", 1);
      GameRoutine_1562060(a1 + 848, v11, *(_QWORD*)(v10 + 64));
      v12 = game_util_Format("N_Help_%02d", 1);
      ui_LayoutAccessor_SetPaneVisible(a1 + 848, v12, 1);
      v13 = **(_QWORD**)(a1 + 1184);
      if ((v2 | 2) >= (*(_QWORD*)(*(_QWORD*)(a1 + 1184) + 8LL) - v13) >> 3) {
        v8 = 2;
      }
      else {
        v14 = *(_QWORD*)(v13 + 8 * (v2 | 2));
        v15 = game_util_Format("T_Txt_%02d", 2);
        GameRoutine_1562060(a1 + 848, v15, *(_QWORD*)(v14 + 64));
        v16 = game_util_Format("N_Help_%02d", 2);
        ui_LayoutAccessor_SetPaneVisible(a1 + 848, v16, 1);
        v17 = **(_QWORD**)(a1 + 1184);
        if ((v2 | 3) >= (*(_QWORD*)(*(_QWORD*)(a1 + 1184) + 8LL) - v17) >> 3) {
          v8 = 3;
        }
        else {
          v18 = *(_QWORD*)(v17 + 8 * (v2 | 3));
          v19 = game_util_Format("T_Txt_%02d", 3);
          GameRoutine_1562060(a1 + 848, v19, *(_QWORD*)(v18 + 64));
          v20 = game_util_Format("N_Help_%02d", 3);
          ui_LayoutAccessor_SetPaneVisible(a1 + 848, v20, 1);
          v8 = 4;
        }
      }
    }
  }
  v21 = game_util_Format("Help_%02d", v8 - 1);
  GameRoutine_1562680(a1 + 848, v21, 1.0);
  v22 = game_util_Format("N_Help_%02d", v8);
  ui_LayoutAccessor_SetPaneVisible(a1 + 848, v22, 0);
  if (v8 != 4) {
    v23 = game_util_Format("N_Help_%02d", v8 + 1);
    ui_LayoutAccessor_SetPaneVisible(a1 + 848, v23, 0);
    if (v8 != 3) {
      v24 = game_util_Format("N_Help_%02d", v8 + 2);
      ui_LayoutAccessor_SetPaneVisible(a1 + 848, v24, 0);
      if (v8 != 2) {
        v25 = game_util_Format("N_Help_%02d", v8 + 3);
        ui_LayoutAccessor_SetPaneVisible(a1 + 848, v25, 0);
        if (v8 != 1) {
          v26 = game_util_Format("N_Help_%02d", v8 + 4);
          ui_LayoutAccessor_SetPaneVisible(a1 + 848, v26, 0);
        }
      }
    }
  }
  if (*(int*)(a1 + 1056) >= 1) {
    GameRoutine_1562cf0(a1 + 848, "Help_PageTab");
  }
  result = ui_LayoutAccessor_FindAlignment(a1 + 848, "A_Dialog");
  if (result != 0) {
    return Alignment_56b600();
  }
  return result;
}

__int64 NoticeInfoDialog_Unknown135(__int64 a1, __int64 a2)
{
  __int64 v2;
  bool v3;
  bool v4;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  bool v9;
  bool v10;
  int v14;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 1192);
  if (v2 == -1) {
    return 0;
  }
  if (game_gameui_MenuAnimator_instance_ != 0) {
    v3 = v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
         v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504);
    v4 = v3 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736);
    v5 = v4 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968);
    v6 = v5 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200);
    v7 = v6 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432);
    v8 = v7 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664);
    v9 = v8 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896);
    v10 = v9 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128);
    if (v10 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
      return 0;
    }
  }
  if ((game_menu_PageTab_Move(a1 + 1056, a2, 0) & 1) == 0) {
    return 14;
  }
  v14 = *(_DWORD*)(a1 + 1060);
  v15 = *(_QWORD*)(a1 + 1072);
  if (v14 < (unsigned __int64)((*(_QWORD*)(a1 + 1080) - v15) >> 2)) {
    v14 = *(_DWORD*)(v15 + 4LL * v14);
  }
  NoticeInfoDialog_1904750(a1, v14);
  return 13;
}

__int64 NoticeInfoDialog_1904be0(__int64 a1, __int64 a2)
{
  __int64 v2;
  bool v3;
  bool v4;
  bool v5;
  bool v6;
  bool v7;
  bool v8;
  bool v9;
  bool v10;
  int v14;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 1016);
  if (v2 == -1) {
    return 0;
  }
  if (game_gameui_MenuAnimator_instance_ != 0) {
    v3 = v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
         v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504);
    v4 = v3 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736);
    v5 = v4 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968);
    v6 = v5 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200);
    v7 = v6 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432);
    v8 = v7 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664);
    v9 = v8 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896);
    v10 = v9 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128);
    if (v10 || v2 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360)) {
      return 0;
    }
  }
  if ((game_menu_PageTab_Move(a1 + 880, a2, 0) & 1) == 0) {
    return 14;
  }
  v14 = *(_DWORD*)(a1 + 884);
  v15 = *(_QWORD*)(a1 + 896);
  if (v14 < (unsigned __int64)((*(_QWORD*)(a1 + 904) - v15) >> 2)) {
    v14 = *(_DWORD*)(v15 + 4LL * v14);
  }
  NoticeInfoDialog_1904750(a1 - 176, v14);
  return 13;
}

#pragma GCC visibility pop
