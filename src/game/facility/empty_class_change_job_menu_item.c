#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1587740(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 EmptyClassChangeJobMenuItem_Unknown55(__int64 a1);

__int64 EmptyClassChangeJobMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];
  __int64 v8;
  __int64 v9;

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1562cf0(v3, "All_Off");
        GameRoutine_157ac20(v3, "IconEquip", 0, 1);
        ui_LayoutAccessor_SetPaneVisible(v3, "BgEquip", 0);
        v7[0] = "L_JobIcon";
        v7[1] = 9;
        GameRoutine_1587740(&v8, v3, v7);
        result = v9;
        if (v9 != 0) {
          v5 = std___1___shared_weak_count_lock(v9);
          v6 = v8;
          result = v9;
          if (v9 != 0) {
            result = std___1___shared_weak_count___release_weak(v9);
          }
          if (v5 != 0 && v6 != 0) {
            *(_BYTE*)(v6 + 1107) = 1;
            result = GameRoutine_1562680(v6 + 88, "Icon_Off", 1.0);
            goto LABEL_11;
          }
          if (v5 != 0) {
          LABEL_11:
            if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
              result = std___1___shared_weak_count___release_weak(v5);
            }
          }
        }
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
