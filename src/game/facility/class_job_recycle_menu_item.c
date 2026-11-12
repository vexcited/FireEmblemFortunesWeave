#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameRoutine_1467a30(_QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_15760a0(_QWORD, _QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 GameData_21c9988;
extern __int64 GameData_21f3ff8;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
__int64 ClassJobRecycleMenuItem_OnSelect(__int64 a1);
__int64 ClassJobRecycleMenuItem_DrawText(_QWORD* a1);
__attribute__((swiftcall)) void game_95eea0(PSEUDO_X8, __int64 result, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 game_UnitListSet_instance_;
bool ClassJobRecycleMenuItem_IsActive(__int64 a1);

__int64 ClassJobRecycleMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  v3 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
    v4 = *(_QWORD*)(a1 + 96);
    if (v4 != 0) {
      *(_DWORD*)(GameData_21f3ff8 + 36) = *(unsigned __int16*)(v4 + 16);
      v5 = 16;
      v6 = *(unsigned __int8*)(v4 + 49);
    }
    else {
      v6 = -1;
      v5 = 36;
    }
    *(_DWORD*)(v3 + v5) = v6;
  }
  return GameRoutine_1467a30(*(_QWORD*)(a1 + 88));
}

bool ClassJobRecycleMenuItem_IsActive(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v7;
  int v8;
  __int64 v9;
  __int16 v10;

  v1 = *(_QWORD*)(a1 + 88);
  if (v1 == 0) {
    return false;
  }
  v2 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v3 = *(_QWORD**)v2;
  v4 = *(_QWORD**)(v2 + 8);
  if (v3 == v4) {
    return false;
  }
  while (1) {
    v5 = (_QWORD*)*v3;
    if (*(_QWORD*)*v3 == v1) {
      break;
    }
    v3 += 2;
    if (v3 == v4) {
      return false;
    }
  }
  v7 = v3[1];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                              memory_order_relaxed);
    v8 = v5[6] & 0x3F;
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v8 != 0) {
        return false;
      }
    }
    else {
      v9 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt1(v7);
      a1 = v9;
      if (v8 != 0) {
        return false;
      }
    }
  }
  else if ((v5[6] & 0x3F) != 0) {
    return false;
  }
  game_95eea0((void*)(&v10), *(_QWORD*)(a1 + 88), *(_QWORD*)(a1 + 96));
  return (v10 & 0x800) != 0;
}

__int64 ClassJobRecycleMenuItem_DrawText(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[4];
  char v16;
  __int64 v17;
  __int64 v18;

  game_menu_GameMenuItem_DrawText();
  result = a1[7];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = a1[6];
      v4 = result;
      if (v3 != 0) {
        v5 = a1[11];
        v18 = a1[12];
        v17 = v5;
        v16 = 1;
        v15[0] = v3;
        v15[1] = &v17;
        v15[2] = &v18;
        v15[3] = &v16;
        GameRoutine_15760a0(v15, 1);
        GameRoutine_15760a0(v15, 2);
        v6 = ui_LayoutAccessor_FindPane(v3, "Face");
        v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0);
        v8 = *(_BYTE*)(v7 + 88) & 0xFE;
        if (a1[11] != 0) {
          ++v8;
        }
        *(_BYTE*)(v7 + 88) = v8;
        if (a1[11] != 0) {
          v9 = ui_LayoutAccessor_FindPane(v3, "Face");
          if (v9 != 0) {
            v9 =
                __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
          }
          GameRoutine_1840740(v9, 0, a1[11], 6, 1);
          v10 = a1[11];
          v11 = "IconEquip_Off";
          if (v10 != 0) {
            v12 = a1[12];
            if (v12 != 0 && *(_BYTE*)(v12 + 505) != 0) {
              v13 = *(_QWORD*)(v10 + 408) != 0
                        ? 0LL
                        : *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 400) + 24LL) +
                                     1104LL);
              if (GameData_21c9988 != 0 && v13 == v12) {
                v11 = "IconEquip_On";
              }
            }
          }
        }
        else {
          v11 = "IconEquip_Off";
        }
        GameRoutine_1562cf0(v3, v11);
        result = ui_LayoutAccessor_FindAlignment(v3, "A_Txt");
        if (result != 0) {
          result = Alignment_56b600();
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
