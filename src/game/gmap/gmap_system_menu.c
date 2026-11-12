#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_158a7c0(unsigned __int8);
__int64 GameRoutine_1840e20(__int64, __int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 GameRoutine_1592690(__int64, _BYTE*, _BYTE*, char*);
__n128 std___1___shared_weak_count___release_weak();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 game_GameModeData_instance_;
__n128
GmapSystemMenu_Unknown85_alt1(__int64 a1) __asm__("GmapSystemMenu_Unknown85");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_1592690_alt1(__int64, _BYTE*, _BYTE*,
                              char*) __asm__("GameRoutine_1592690");
__int64 GmapSystemMenu_Unknown85(__int64 a1);

__int64 GmapSystemMenu_Unknown85(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64* v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8 v9;
  __int64 v10;
  struct {
    __int64* v11;
    __int64 v12;
  } v11_;

  LayoutAccessor_1560070_alt1((void*)(&v11_.v11), (__int64*)(a1 + 848),
                              "L_Chapter");
  result = v11_.v12;
  if (v11_.v12 != 0) {
    v2 = std___1___shared_weak_count_lock_alt1(v11_.v12);
    v3 = v11_.v11;
    result = v11_.v12;
    if (v11_.v12 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(v11_.v12);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        return result;
      }
      goto LABEL_20;
    }
    if (game_GameModeData_instance_ != 0) {
      v5 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v5 != 0) {
        LOBYTE(v11_.v11) = *(_BYTE*)(*(_QWORD*)(v5 + 24) + 33LL);
        GameRoutine_1592690_alt1((__int64)v3, &v11_.v11, (_BYTE*)(v5 + 88),
                                 (char*)(v5 + 89));
      }
    }
    v6 = ui_LayoutAccessor_FindPane(v3, (__int64)"BgStory");
    if (v6 != 0) {
      v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
      v8 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
      LABEL_16:
        v9 = *(_BYTE*)(v8 + 15);
      LABEL_19:
        v10 = GameRoutine_158a7c0(v9);
        GameRoutine_1840e20(v7, v10);
        result =
            ui_LayoutAccessor_SetPaneVisible((__int64)v3, (__int64)"N_Spot", 0);
      LABEL_20:
        if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
          return std___1___shared_weak_count___release_weak_alt1(v2);
        }
        return result;
      }
    }
    else {
      v7 = 0;
      v8 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        goto LABEL_16;
      }
    }
    v9 = 0;
    goto LABEL_19;
  }
  return result;
}

#pragma GCC visibility pop
