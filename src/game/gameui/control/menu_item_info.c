#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MenuItem_188bf10(__int64, __int64);
__int64 Registration_a4da40(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_212d690;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
__int64 MenuItemInfo_18be1b0_alt1(__int64 a1, __int64 a2,
                                  __int64 a3) __asm__("MenuItemInfo_18be1b0");
__int64 MenuItem_188bf10_alt1(__int64, _BYTE*) __asm__("MenuItem_188bf10");
__int64 Registration_a4da40_alt1(__int64,
                                 __int64) __asm__("Registration_a4da40");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void MenuItemInfo_18be1b0(__int64 a1, _BYTE* a2, _BYTE* a3);

void MenuItemInfo_18be1b0(__int64 a1, _BYTE* a2, _BYTE* a3)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  char* v9;
  char v10;

  MenuItem_188bf10_alt1(a1, a2);
  v5 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 88), (__int64)"T_Help");
  if (v5 != 0) {
    v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d690, 0);
    if (v6 != 0) {
      v7 = v6;
      if (a3 != nullptr) {
        v8 = msg_MessageManager_instance__ptr[0];
        if ((Registration_a4da40_alt1(*msg_MessageManager_instance__ptr[0],
                                      (__int64)a3) &
             1) != 0) {
          v9 = GameRoutine_a4dbe0_alt1(*v8, a3, 0);
        }
        else {
          v9 = &GameData_1a9f09e;
        }
        GameRoutine_156c5d0_alt1(v7, (__int64)v9, 0);
        v10 = *(_BYTE*)(v7 + 88) | 1;
      }
      else {
        v10 = *(_BYTE*)(v6 + 88) & 0xFE;
      }
      *(_BYTE*)(v7 + 88) = v10;
    }
  }
}

#pragma GCC visibility pop
