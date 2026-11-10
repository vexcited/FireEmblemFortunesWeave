#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1605f00(__int64);
__int64 GameRoutine_1606250(_QWORD);
__int64 game_gameui_Util_GetMorphRage(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64* GameData_212c880[5];
__int64 UnitInfoMenuItem_16061b0(__int64 a1, __int64 a2);
__int64 UnitInfoMenuItem_1606c80(__int64 result, __int64 a2, __int16 a3);
__int64 GameRoutine_18a73c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a7690(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18a80b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18ab7b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64
    UnitInfoMenuItem_1606c80_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("UnitInfoMenuItem_1606c80");
__int64 game_6e8720(_QWORD);
extern __int64 GameData_21f1e08;
extern __int64 game_g_empty_item;
__attribute__((swiftcall)) void
UnitInfoMenuItem_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);

__int64 UnitInfoMenuItem_16061b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  GameRoutine_1605f00(a1);
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(a1 + 8);
      if (v7 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  *(_DWORD*)(a1 + 24) = 1;
  v8 = strlen(a2);
  *(_QWORD*)(a1 + 40) = a2;
  *(_QWORD*)(a1 + 48) = v8;
  return GameRoutine_1606250(a1);
}

__int64 UnitInfoMenuItem_1606c80(__int64 result, __int64 a2, __int16 a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;

  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (a3 & 0xFFF)) +
                  592LL);
  if (v3 != 0) {
    v4 = *(unsigned __int16*)(v3 + 128);
    *(_QWORD*)result = v3;
    if (v4 != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 136) + 8LL);
    }
    else {
      v5 = 0;
    }
    *(_QWORD*)(result + 8) = v5;
    v6 = result;
    result = game_gameui_Util_GetMorphRage(a2, v3);
    *(_DWORD*)(v6 + 16) = *(_DWORD*)result;
  }
  return result;
}

__attribute__((swiftcall)) void

UnitInfoMenuItem_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[3];
  __int64 v17;

  if (*(_DWORD*)(a2 + 8) != 45) {
    goto LABEL_30;
  }
  if (*(_QWORD*)(result + 32) == 0) {
    goto LABEL_30;
  }
  if (*(_DWORD*)(result + 24) == 0) {
    goto LABEL_30;
  }
  if (GameData_21f1e08 == 0) {
    goto LABEL_30;
  }
  v16[1] = v3;
  v16[2] = v4;
  v5 = *(_QWORD*)(GameData_21f1e08 + 144);
  if (v5 == 0) {
    goto LABEL_30;
  }
  v6 = *(_QWORD*)(GameData_21f1e08 + 136);
  v7 = result;
  v8 = *(_QWORD*)(GameData_21f1e08 + 144);
  v9 = a3;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v10 = std___1___shared_weak_count_lock(v8);
  result = std___1___shared_weak_count___release_weak(v5);
  a3 = v9;
  if (v10 == 0) {
    goto LABEL_30;
  }
  if (v6 != 0) {
    v11 = *(_DWORD*)(v7 + 24);
    if (v11 > 5) {
      if (v11 > 7) {
        if (v11 == 8) {
          UnitInfoMenuItem_1606c80_alt1(&v15, *(_QWORD*)(v7 + 32),
                                        *(unsigned int*)(v7 + 60));
          game_6e8720(&v17);
          result = GameRoutine_18a7690(v6, &v17, *(_QWORD*)(v7 + 32), 0);
        }
        else {
          if (v11 != 9) {
            goto LABEL_28;
          }
          UnitInfoMenuItem_1606c80_alt1(&v15, *(_QWORD*)(v7 + 32),
                                        *(unsigned int*)(v7 + 60));
          result = GameRoutine_18ab7b0(v6, v16, *(_QWORD*)(v7 + 32), v15, 0);
        }
        goto LABEL_27;
      }
      if (v11 == 6) {
        v12 = *(unsigned int*)(v7 + 56);
        if ((int)v12 <= -1) {
          v13 = &game_g_empty_item;
        }
        else {
          v13 = (__int64*)(*(_QWORD*)(v7 + 32) + 8 * v12 + 876);
        }
      LABEL_26:
        result = GameRoutine_18a73c0(v6, v13, 0);
        goto LABEL_27;
      }
    }
    else if ((unsigned int)(v11 - 3) >= 2) {
      if (v11 != 2) {
        a3 = v9;
        if (v11 != 5) {
          goto LABEL_28;
        }
        result = GameRoutine_18a80b0(v6, v7 + 60, *(_QWORD*)(v7 + 32));
        goto LABEL_27;
      }
      v14 = *(unsigned int*)(v7 + 56);
      if ((int)v14 <= -1) {
        v13 = &game_g_empty_item;
      }
      else {
        v13 = (__int64*)(*(_QWORD*)(v7 + 32) + 8 * v14 + 828);
      }
      goto LABEL_26;
    }
    result = GameRoutine_18a7ae0(v6, v7 + 60, *(_QWORD*)(v7 + 32), 0, 0, 0, 0);
  LABEL_27:
    a3 = v9;
  }
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak(v10);
    a3 = v9;
  }
LABEL_30:
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
