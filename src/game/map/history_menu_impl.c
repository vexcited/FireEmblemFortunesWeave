#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_12297e0(__int64, int);
__int64 GameRoutine_1272780(_QWORD, _QWORD);
__int64 GameRoutine_159da00(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_map_anonymous_HistoryMenuItem_vtable[])();
extern __int64 GameData_22400f8;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_21309c8[5];
__int64 HistoryMenu_126fe90(__int64 a1);
__int64 HistoryMenu_1270740(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
void GameRoutine_159da00_alt1(__int64*, unsigned int,
                              unsigned int) __asm__("GameRoutine_159da00");

__int64 HistoryMenu_126fe90(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64* v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64* v19;
    __int64 v20;
  } v19_;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 != 0 &&
      *(__int64 (***)(void))v1 == game_map_anonymous_HistoryMenuItem_vtable) {
    v3 = *(_QWORD*)(v1 + 56);
    if (v3 == 0) {
      goto LABEL_8;
    }
    v4 = std___1___shared_weak_count_lock_alt1(v3);
    if (v4 == 0) {
      goto LABEL_8;
    }
    v5 = v4;
    v6 = (atomic_ullong*)(v4 + 8);
    v7 = *(__int64**)(v1 + 48);
    if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = v7;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt1(v5);
      v7 = v8;
    }
    if (v7 == nullptr) {
    LABEL_8:
      v7 = &ui_LayoutAccessor_empty_;
    }
    GameHr_1562680((__int64)v7, "DisableSelect", 0x1.0000000000000p+0f);
  }
  v9 = GameData_22400f8 != 0 &&
       (signed __int32)*(_DWORD*)(GameData_22400f8 + 824) > 1;
  LayoutAccessor_1560070((void*)(&v19_.v19), (__int64*)(a1 + 848),
                         "L_KeyUD/L_Arrow_U");
  if (v19_.v20 != 0) {
    v10 = std___1___shared_weak_count_lock_alt1(v19_.v20);
    v11 = (__int64)v19_.v19;
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v19_.v20);
    }
    if (v10 != 0 && v11 != 0) {
      LayoutAccessor_155e830_alt1(v11, v9);
      GameHr_1562680(v11, "Wait", 0x1.0000000000000p+0f);
    }
    else if (v10 == 0) {
      goto LABEL_22;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt1(v10);
    }
  }
LABEL_22:
  LayoutAccessor_1560070((void*)(&v19_.v19), (__int64*)(a1 + 848),
                         "L_KeyUD/L_Arrow_D");
  if (v19_.v20 != 0) {
    v12 = std___1___shared_weak_count_lock_alt1(v19_.v20);
    v13 = (__int64)v19_.v19;
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v19_.v20);
    }
    if (v12 != 0 && v13 != 0) {
      LayoutAccessor_155e830_alt1(v13, 0);
    }
    else if (v12 == 0) {
      goto LABEL_31;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
LABEL_31:
  LayoutAccessor_1560070((void*)(&v19_.v19), (__int64*)(a1 + 848), "L_KeyUD");
  result = v19_.v20;
  if (v19_.v20 == 0) {
    return result;
  }
  v15 = std___1___shared_weak_count_lock_alt1(v19_.v20);
  v16 = v19_.v19;
  result = v19_.v20;
  if (v19_.v20 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v19_.v20);
  }
  if (v15 != 0 && v16 != nullptr) {
    result = LayoutAccessor_155e830_alt1((__int64)v16, v9);
    if (v9) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                                memory_order_relaxed);
      v17 = std___1___shared_weak_count_lock_alt1(v15);
      if (v17 != 0) {
        v18 = v17;
        GameRoutine_159da00_alt1(v16, 5u, 0xCu);
        if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          std___1___shared_weak_count___release_weak_alt1(v18);
        }
      }
      result = std___1___shared_weak_count___release_weak_alt1(v15);
    }
  }
  else if (v15 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    return std___1___shared_weak_count___release_weak_alt1(v15);
  }
  return result;
}

__int64 HistoryMenu_1270740(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v6;
  unsigned int i;
  __int64 v9;
  _BYTE* v10;

  v2 = *GameData_21309c8[0];
  if (*GameData_21309c8[0] != 0) {
    v3 = *(_DWORD*)(a1 + ((__int64)((*(_DWORD*)(a1 + 1600) + 5) % 11) << 6) +
                    896);
    v4 = GameRoutine_12297e0(*GameData_21309c8[0], v3);
    if (v3 >= 1 && v4 != 0) {
      for (i = v3 + 1; i >= 2; --i) {
        v6 = i - 2;
        v9 = GameRoutine_12297e0(v2, i - 2);
        if (v9 == 0) {
          break;
        }
        v10 = (_BYTE*)v9;
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 48LL))(v9) & 1) != 0 &&
            *(_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v10 + 56LL))(v10) ==
                1 &&
            v10[18] == 0) {
          return GameRoutine_1272780(a1 - 176, v6 & (unsigned int)~(v6 >> 31));
        }
      }
    }
  }
  v6 = -1;
  return GameRoutine_1272780(a1 - 176, v6 & (unsigned int)~(v6 >> 31));
}

#pragma GCC visibility pop
