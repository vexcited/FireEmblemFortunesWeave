#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 ActionMenuItem_Unknown55(__int64 a1);

__int64 ActionMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  game_menu_GameMenuItem_DrawText();
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(_QWORD*)(a1 + 48);
      v4 = result;
      if (v3 != 0) {
        GameRoutine_1562cf0(*(_QWORD*)(a1 + 48), "Action");
        v5 = ui_Manager_instance_;
        v6 = ui_LayoutAccessor_FindPane(v3, "Icon");
        if (v6 != 0) {
          v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
        }
        else {
          v7 = 0;
        }
        if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
          v8 = *(_QWORD*)(a1 + 104);
        }
        else {
          v8 = a1 + 89;
        }
        result = GameRoutine_136a920(v5 + 1264, v7, 0, 7, v8);
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
