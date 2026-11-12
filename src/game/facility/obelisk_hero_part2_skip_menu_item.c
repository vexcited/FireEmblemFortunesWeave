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
__int64 ObeliskHeroPart2SkipMenuItem_Unknown55_alt1(__int64 a1) __asm__(
    "ObeliskHeroPart2SkipMenuItem_Unknown55");
__int64 GameRoutine_8799d0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2212268;
__int64
game_facility_ObeliskHeroPart2SkipMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");
__int64 ObeliskHeroPart2SkipMenuItem_Unknown55(_QWORD* a1);

__int64 ObeliskHeroPart2SkipMenuItem_Unknown55(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;

  game_menu_GameMenuItem_DrawText_alt1(a1);
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = (__int64*)a1[6];
      v4 = result;
      if (v3 != nullptr) {
        v5 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                                     "MID_HeroMenu_Skip_Part2", 0);
        if (v5 != nullptr) {
          v6 = (__int64)v5;
          v7 = ui_LayoutAccessor_FindTextBox_alt1(v3, (__int64)"T_Txt");
          if (v7 != 0) {
            GameRoutine_156c5d0_alt1(v7, v6, 0);
          }
        }
        result = LayoutAccessor_1562cf0((__int64)v3, "Large_StatusOff");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        return std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
  }
  return result;
}

__int64

game_facility_ObeliskHeroPart2SkipMenuItem_CreateConfirmDialog_lambda0_Invoke(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (GameData_2212268 != 0) {
    v1 = *(_QWORD*)(a1 + 8);
    v2 = *(_QWORD*)(v1 + 8);
    if (*(_QWORD*)(v2 + 152) != 0) {
      v3 = *(_QWORD*)(v2 + 152);
    }
    else {
      v3 = *(_QWORD*)(v1 + 8);
    }
    GameRoutine_8799d0(v3, (unsigned int)*(unsigned __int8*)(v1 + 89) + 5,
                       *(unsigned __int8*)(v1 + 83), 2);
  }
  return 4;
}

#pragma GCC visibility pop
