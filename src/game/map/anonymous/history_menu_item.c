#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1593b00(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21cd130;
extern __int64 GameData_2240780;
extern __int64 ui_LayoutAccessor_empty_;
__int64 HistoryMenuItem_Unknown17(__int64 a1);
__int64 HistoryMenuItem_Unknown20(__int64 a1);
__int64 HistoryMenuItem_Unknown21(__int64 a1);
__int64 HistoryMenuItem_Unknown26();
__int64 game_map_anonymous_HistoryMenuItem_ACall_closure_Invoke(__int64 a1);
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 (*GameData_201eca8[])();
extern __int64 (*GameData_201ed28[])();
__int64 game_map_anonymous_HistoryMenuItem_ACall(__int64 a1);

__int64 HistoryMenuItem_Unknown17(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 result;
  __int64* v8;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v8;
    if (v8 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  result = GameRoutine_1562cf0(v6, "TypeNone");
  *(_BYTE*)(a1 + 78) = 1;
  return result;
}

__int64 HistoryMenuItem_Unknown20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 result;
  __int64* v14;
  __int64* v15;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_7;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_7;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v14 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  v7 = v14;
  if (v14 == nullptr) {
  LABEL_7:
    v7 = &ui_LayoutAccessor_empty_;
  }

LABEL_8:
  GameRoutine_1593b00(
      v7, *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                         8LL * *(int*)(a1 + 84) + 1784) +
                              12LL));
  v8 = *(_QWORD*)(a1 + 56);
  if (v8 == 0) {
    goto LABEL_12;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_12;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v12 = v15;
    if (v15 != nullptr) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if (v12 == nullptr) {
  LABEL_12:
    v12 = &ui_LayoutAccessor_empty_;
  }

LABEL_13:
  result = GameRoutine_1562680(v12, "In", 1.0);
  *(_BYTE*)(a1 + 88) = 1;
  return result;
}

__int64 HistoryMenuItem_Unknown21(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64* v9;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void))(*(_QWORD*)a1 + v2))();
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_7;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_7;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v9 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v7 = v9;
    if (v9 != nullptr) {
      return GameRoutine_1562cf0(v7, "TypeNone");
    }
    goto LABEL_7;
  }
  if (v7 == nullptr) {
  LABEL_7:
    v7 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562cf0(v7, "TypeNone");
}

__int64 game_map_anonymous_HistoryMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int16 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    __int64 (**v16)();
    __int16 v17;
    char gap106_[22];
    __int64 (***v18)();
  } v16_;
  const char* v19;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 8LL * *(int*)(a1 + 84) + 1784);
  if (*(int*)(v3 + 8) < 1 || *(_DWORD*)v3 == 0) {
    return 0;
  }
  v4 = *(_BYTE*)(v3 + 13) & 1;
  v5 = *(_BYTE*)(v3 + 13) & 2;
  if (*(_BYTE*)(v3 + 12) != 0) {
    v19 = "MID_RewindMenu_NotPlayerPhase_Confirm";
    v12_.v13 = v12_.v12;
    v16_.v16 = GameData_201eca8;
    v16_.v17 = v4 | ((_WORD)v5 << 7);
    v14_.v15 = v14_.v14;
    v16_.v18 = &v16_.v16;
    v14_.v14[0] = GameData_201ed28;
    v12_.v12[0] = GameData_201ed28;
    MapSortieMenu_871860(v2, (__int64)&v19, (__int64)&v16_.v16,
                         (__int64)v14_.v14, (__int64)v12_.v12);
    if (v12_.v13 == v12_.v12) {
      v6 = 32;
    }
    else {
      if (v12_.v13 == nullptr) {
        goto LABEL_18;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v12_.v13 + v6))((__int64)v12_.v13);
  LABEL_18:
    if (v14_.v15 == v14_.v14) {
      v10 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
        goto LABEL_23;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v14_.v15 + v10))((__int64)v14_.v15);
  LABEL_23:
    if (v16_.v18 == &v16_.v16) {
      v11 = 4;
    }
    else {
      if (v16_.v18 == nullptr) {
        return 12;
      }
      v11 = 5;
    }
    ((__int64 (*)(__int64))(*v16_.v18)[v11])((__int64)v16_.v18);
    return 12;
  }
  v8 = GameData_2240780;
  if (GameData_2240780 != 0) {
    *(_BYTE*)(GameData_2240780 + 164) = v4;
    v9 = *(_QWORD*)(v8 + 8);
    *(_BYTE*)(v8 + 165) = v5 >> 1;
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 0) {
            *(_QWORD*)(v8 + 16) = v9;
            *(_WORD*)(v8 + 136) &= ~0x80u;
            return 2;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return 2;
        }
        v9 += 64;
      }
    }
  }
  return 2;
}

__int64 HistoryMenuItem_Unknown26()
{
  __int64 v0;
  __int64 v1;

  *(_BYTE*)(GameData_21cd130 + 24) = 0;
  v0 = GameData_2240780;
  if (GameData_2240780 == 0) {
    return 3;
  }
  v1 = *(_QWORD*)(GameData_2240780 + 8);
  if (v1 == 0) {
    return 3;
  }
  while (*(_BYTE*)v1 != 2) {
    if (*(_BYTE*)v1 == 0) {
      return 3;
    }
  LABEL_5:
    v1 += 64;
  }
  if (*(_DWORD*)(v1 + 32) != 1) {
    goto LABEL_5;
  }
  *(_QWORD*)(GameData_2240780 + 16) = v1;
  *(_WORD*)(v0 + 136) &= ~0x80u;
  return 3;
}

__int64 game_map_anonymous_HistoryMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  *(_BYTE*)(GameData_21cd130 + 24) = 0;
  v1 = GameData_2240780;
  if (GameData_2240780 == 0) {
    return 4;
  }
  *(_WORD*)(GameData_2240780 + 164) = *(_WORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 8);
  if (v2 == 0) {
    return 4;
  }
  while (*(_BYTE*)v2 != 2) {
    if (*(_BYTE*)v2 == 0) {
      return 4;
    }
  LABEL_5:
    v2 += 64;
  }
  if (*(_DWORD*)(v2 + 32) != 0) {
    goto LABEL_5;
  }
  *(_QWORD*)(v1 + 16) = v2;
  *(_WORD*)(v1 + 136) &= ~0x80u;
  return 4;
}

#pragma GCC visibility pop
