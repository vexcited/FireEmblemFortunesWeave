#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e7af0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_IsPaneVisible(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 BelongingMenu_16ca500(__int64 a1);
__int64 BelongingMenu_16ca580(__int64 a1);

__int64 BelongingMenu_16ca500(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1120LL))(a1);
  if ((result & 1) != 0) {
    v3 = *(unsigned int*)(a1 + 660);
    v4 = *(_QWORD*)(a1 + 672);
    if ((int)v3 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v4) >> 2)) {
      v3 = *(unsigned int*)(v4 + 4LL * (int)v3);
    }
    v5 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 1136LL))(a1, v3);
    return GameRoutine_1562060(a1 + 952, "L_MenuItem_InfoHeader/T_Title", v5);
  }
  return result;
}

__int64 BelongingMenu_16ca580(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = ui_LayoutAccessor_IsPaneVisible(a1 + 952, "MenuItemList");
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "MenuItemList", 0);
  if (ui_LayoutAccessor_FindAlignment(a1 + 848, "A_List") != 0) {
    Alignment_56b600();
    v3 = *(_QWORD*)(a1 + 856);
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3);
      if (v4 != 0) {
        v5 = v4;
        if (*(_QWORD*)(a1 + 848) != 0) {
          ControlCreator_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          std___1___shared_weak_count___release_weak(v5);
        }
      }
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "MenuItemList", v2 & 1);
  return GameRoutine_16e7af0(a1 + 952);
}

#pragma GCC visibility pop
