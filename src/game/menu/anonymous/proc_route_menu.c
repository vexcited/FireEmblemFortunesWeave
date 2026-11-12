#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1572980(PSEUDO_X8, _QWORD, _QWORD);
__int64 AsyncLoadThumbImage_18ba690(_QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_136afb0(_QWORD, _QWORD);
__int64 GameRoutine_158a7c0(_QWORD);
__int64 GameRoutine_16cd870(void);
__int64 GameRoutine_16cdee0(_QWORD);
__int64 GameRoutine_974b60(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_207c650;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
__int64
ProcRouteMenu_Unknown84_alt1(__int64 a1) __asm__("ProcRouteMenu_Unknown84");
__int64 ProcRouteMenu_Unknown88(_QWORD* a1);
__attribute__((swiftcall)) void
GameRoutine_1572980_alt1(PSEUDO_X8, __int64*,
                         __int64*) __asm__("GameRoutine_1572980");
__int64 GameRoutine_16cd870_alt1(_DWORD*) __asm__("GameRoutine_16cd870");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
bool GameRoutine_974b60_alt1(__int64**) __asm__("GameRoutine_974b60");
void AsyncLoadThumbImage_18ba690_alt1(__int64, __int64) __asm__(
    "AsyncLoadThumbImage_18ba690");
__int64 ProcRouteMenu_Unknown84(_DWORD* a1);

__int64 ProcRouteMenu_Unknown84(_DWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  _BYTE* v9;
  __int64 v10;
  __int64 v11[2];
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  result = GameRoutine_16cd870_alt1(a1);
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  v3 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  if (v3 == 0) {
    return result;
  }
  v4 = *(_QWORD*)(v3 + 336);
  if (v4 == 0) {
    return result;
  }
  while (*(_QWORD*)(v4 + 80) != 0 &&
         GameRoutine_974b60_alt1(*(__int64***)(v4 + 24))) {
    v4 = *(_QWORD*)(v4 + 80);
  }
  v5 = (__int64*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 1152LL))(a1);
  v11[0] = (__int64)"L_Clan";
  v11[1] = 6;
  GameRoutine_1572980_alt1((void*)(&v12_.v12), v5, v11);
  if (v12_.v13 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v12_.v13);
    v7 = v12_.v12;
    if (v12_.v13 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v12_.v13);
    }
    if (v6 != 0 && v7 != 0) {
      AsyncLoadThumbImage_18ba690_alt1(v7, v4);
      goto LABEL_14;
    }
    if (v6 != 0) {
    LABEL_14:
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
  }
  v8 = (__int64*)(*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 1152LL))(a1);
  result = ui_LayoutAccessor_FindPane_alt1(v8, (__int64)"IconClan");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v9 = *(_BYTE**)(v4 + 48);
      if (v9 != nullptr && *v9 != 0) {
        v10 = result;
        result = Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v9);
        if ((result & 1) != 0) {
          return Manager_136a920(ui_Manager_instance_ + 1264, v10, 0, 5u,
                                 *(_BYTE**)(v4 + 48));
        }
      }
    }
  }
  return result;
}

__int64 ProcRouteMenu_Unknown88(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;

  GameRoutine_16cdee0(a1);
  result = a1[42];
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_207c650, 0);
  if (result == 0) {
    return result;
  }
  result = GameRoutine_158a7c0(*(unsigned __int8*)(result + 96));
  if (result == 0) {
    return result;
  }
  v3 = result;
  v4 = (*(__int64 (**)(_QWORD*))(*a1 + 1152LL))(a1);
  v10[0] = "L_Clan";
  v10[1] = 6;
  GameRoutine_1572980((void*)&v11, v4, v10);
  if (v12 != 0) {
    v5 = std___1___shared_weak_count_lock(v12);
    v6 = v11;
    if (v12 != 0) {
      std___1___shared_weak_count___release_weak(v12);
    }
    if (v5 != 0 && v6 != 0) {
      AsyncLoadThumbImage_18ba690(v6, v3);
      goto LABEL_11;
    }
    if (v5 != 0) {
    LABEL_11:
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
    }
  }
  v7 = (*(__int64 (**)(_QWORD*))(*a1 + 1152LL))(a1);
  result = ui_LayoutAccessor_FindPane(v7, "IconClan");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v8 = *(_BYTE**)(v3 + 48);
      if (v8 != nullptr && *v8 != 0) {
        v9 = result;
        result = GameRoutine_136afb0(ui_Manager_instance_ + 1264, 5);
        if ((result & 1) != 0) {
          return GameRoutine_136a920(ui_Manager_instance_ + 1264, v9, 0, 5,
                                     *(_QWORD*)(v3 + 48));
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
