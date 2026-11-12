#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Pane_58f8a0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
extern _UNKNOWN* GameData_212da30;
void game_menu_GameMenuItem_DrawText(_QWORD*);
__int64 EmptyFoodMenuItem_Unknown55(_QWORD* a1);

__int64 EmptyFoodMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  int v4;

  game_menu_GameMenuItem_DrawText(a1);
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = result;
      result = a1[6];
      if (result != 0) {
        v4 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
        result = ui_LayoutAccessor_FindTextBox((__int64*)result, "T_Txt");
        if (result != 0) {
          result = Pane_58f8a0(result);
          if (result != 0) {
            *(_DWORD*)(result + 12) = v4;
          }
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        return std___1___shared_weak_count___release_weak(v3);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
