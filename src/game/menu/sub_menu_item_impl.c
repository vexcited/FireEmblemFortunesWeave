#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 SubMenuItem_16ec270(_QWORD* a1);

__int64 SubMenuItem_16ec270(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  char v10;
  _BYTE v11[4];
  _DWORD v12[2];
  _BYTE v13[8];

  game_menu_GameMenuItem_DrawText();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        result = ui_LayoutAccessor_FindPane(a1[6], "Icon");
        if (result != 0) {
          result = __dynamic_cast(result, GameData_212d670[0],
                                  GameData_212d678[0], 0);
          if (result != 0) {
            *(_BYTE*)(result + 88) =
                *(_BYTE*)(result + 88) & 0xFE |
                (*(__int64 (**)(_QWORD*, __int64))(*a1 + 560LL))(a1, result) &
                    1;
            v5 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
            if (v5 != 0) {
              v6 = v5;
              v7 = ui_LayoutAccessor_FindTextBox(v3, "T_Txt");
              if (v7 != 0) {
                GameRoutine_190a0c0(v13, v12, v11, v7, *(_QWORD*)(v7 + 216));
                v8 = v12[0];
                v9 = v12[1];
              }
              else {
                v8 = 0;
                v9 = 0;
              }
              v10 = *(_BYTE*)(v6 + 88);
              *(_DWORD*)(v6 + 80) = v8;
              *(_DWORD*)(v6 + 84) = v9;
              *(_BYTE*)(v6 + 88) = v10 | 0x10;
            }
            result = ui_LayoutAccessor_FindAlignment(v3, "A_Contents");
            if (result != 0) {
              result = Alignment_56b600();
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
