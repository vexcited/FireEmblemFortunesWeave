#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
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

__int64 HistoryMenu_126fe90(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64* v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_QWORD*)(a1 + 336);
  if (v1 != 0 &&
      *(__int64 (***)())v1 == game_map_anonymous_HistoryMenuItem_vtable) {
    if (*(_QWORD*)(v1 + 56) == 0) {
      goto LABEL_8;
    }
    v3 = ((__int64 (*)(void))std___1___shared_weak_count_lock)();
    if (v3 == 0) {
      goto LABEL_8;
    }
    v4 = v3;
    v5 = (atomic_ullong*)(v3 + 8);
    v6 = *(__int64**)(v1 + 48);
    if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v7 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      v6 = v7;
    }
    if (v6 == nullptr) {
    LABEL_8:
      v6 = &ui_LayoutAccessor_empty_;
    }
    LayoutAccessor_1562680(v6, "DisableSelect", 1.0);
  }
  v8 = GameData_22400f8 != 0 && *(_DWORD*)(GameData_22400f8 + 824) > 1;
  GameRoutine_1560070(&v18, a1 + 848, "L_KeyUD/L_Arrow_U");
  if (v19 != 0) {
    v9 = ((__int64 (*)(void))std___1___shared_weak_count_lock)();
    v10 = v18;
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak(v19);
    }
    if (v9 != 0 && v10 != 0) {
      LayoutAccessor_155e830(v10, v8);
      LayoutAccessor_1562680(v10, "Wait", 1.0);
    }
    else if (v9 == 0) {
      goto LABEL_22;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
  }

LABEL_22:
  GameRoutine_1560070(&v18, a1 + 848, "L_KeyUD/L_Arrow_D");
  if (v19 != 0) {
    v11 = ((__int64 (*)(void))std___1___shared_weak_count_lock)();
    v12 = v18;
    if (v19 != 0) {
      std___1___shared_weak_count___release_weak(v19);
    }
    if (v11 != 0 && v12 != 0) {
      LayoutAccessor_155e830(v12, 0);
    }
    else if (v11 == 0) {
      goto LABEL_31;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }

LABEL_31:
  GameRoutine_1560070(&v18, a1 + 848, "L_KeyUD");
  result = v19;
  if (v19 == 0) {
    return result;
  }
  v14 = ((__int64 (*)(void))std___1___shared_weak_count_lock)();
  v15 = v18;
  result = v19;
  if (v19 != 0) {
    result = std___1___shared_weak_count___release_weak(v19);
  }
  if (v14 != 0 && v15 != 0) {
    result = LayoutAccessor_155e830(v15, v8);
    if (v8) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                memory_order_relaxed);
      v16 = std___1___shared_weak_count_lock(v14);
      if (v16 != 0) {
        v17 = v16;
        GameRoutine_159da00(v15, 5, 12);
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v17);
        }
      }
      result = std___1___shared_weak_count___release_weak(v14);
    }
  }
  else if (v14 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    return std___1___shared_weak_count___release_weak(v14);
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
