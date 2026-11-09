#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1587740(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_95eaa0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19a9be0(_QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 ClassChangeJobMenuItem_Unknown55(_QWORD* a1);

__int64 ClassChangeJobMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BOOL4 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  char v9;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;

  game_menu_GameMenuItem_DrawText();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1562cf0(a1[6], "All_Off");
        GameRoutine_95eaa0(&v11, a1[11], a1[12]);
        v5 = (v11 & 2) != 0;
        v6 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
        GameRoutine_157ac20(v3, "IconEquip", v5, v6 & 1);
        ui_LayoutAccessor_SetPaneVisible(v3, "BgEquip", v5);
        v10[0] = "L_JobIcon";
        v10[1] = 9;
        GameRoutine_1587740(&v11, v3, v10);
        result = v12;
        if (v12 != 0) {
          v7 = std___1___shared_weak_count_lock(v12);
          v8 = v11;
          result = v12;
          if (v12 != 0) {
            result = std___1___shared_weak_count___release_weak(v12);
          }
          if (v7 != 0 && v8 != 0) {
            v9 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
            *(_BYTE*)(v8 + 1105) = 0;
            *(_WORD*)(v8 + 1106) = 1;
            *(_BYTE*)(v8 + 1109) = (v9 & 1) == 0;
            GameRoutine_1562680(v8 + 88, "Icon_On", 1.0);
            result = GameRoutine_19a9be0(v8, a1[11], a1[12]);
            goto LABEL_11;
          }
          if (v7 != 0) {
          LABEL_11:
            if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              result = std___1___shared_weak_count___release_weak(v7);
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
