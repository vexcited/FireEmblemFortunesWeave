#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
__int64 EmptyClassChangeJobMenuItem_DrawText_alt1(__int64 a1) __asm__(
    "EmptyClassChangeJobMenuItem_DrawText");
__attribute__((swiftcall)) void
GameRoutine_1587740_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_1587740");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_157ac20_alt1(__int64*, __int64, char,
                                 char) __asm__("GameRoutine_157ac20");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");
__int64 EmptyClassChangeJobMenuItem_DrawText(_QWORD* a1);

__int64 EmptyClassChangeJobMenuItem_DrawText(_QWORD* a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7[2];
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  game_menu_GameMenuItem_DrawText_alt1(a1);
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v3 = (__int64*)a1[6];
      v4 = result;
      if (v3 != nullptr) {
        LayoutAccessor_1562cf0((__int64)v3, "All_Off");
        GameRoutine_157ac20_alt1(v3, (__int64)"IconEquip", 0, 1);
        ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v3, (__int64)"BgEquip",
                                              0);
        v7[0] = (__int64)"L_JobIcon";
        v7[1] = 9;
        GameRoutine_1587740_alt1((void*)(&v8_.v8), v3, v7);
        result = v8_.v9;
        if (v8_.v9 != 0) {
          v5 = std___1___shared_weak_count_lock_alt1(v8_.v9);
          v6 = v8_.v8;
          result = v8_.v9;
          if (v8_.v9 != 0) {
            result = std___1___shared_weak_count___release_weak_alt1(v8_.v9);
          }
          if (v5 != 0 && v6 != 0) {
            *(_BYTE*)(v6 + 1107) = 1;
            result = GameHr_1562680(v6 + 88, "Icon_Off", 0x1.0000000000000p+0f);
            goto LABEL_11;
          }
          if (v5 != 0) {
          LABEL_11:
            if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
              result = std___1___shared_weak_count___release_weak_alt1(v5);
            }
          }
        }
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

#pragma GCC visibility pop
