#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15792c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD);
__int64 GameRoutine_15de630(char, __int64, unsigned int);
__int64 GameRoutine_777be0(_QWORD);
__int64 GameRoutine_778140(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD, long double,
                               long double);
__int64 Pane_58f8a0(void);
__int64 UnitItem_6e8bc0(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_21cf830;
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* game_g_empty_item_ptr;
extern __int64* ui_LayoutAccessor_empty__ptr[3];
bool TargetMenuItem_16209e0(__int64 a1);
__int64 TargetMenuItem_1620c70(__int64 a1);
__int64 TargetMenuItem_1620cc0(__int64 a1);
bool TargetMenuItem_1620f90(__int64 a1);
__int64 TargetMenuItem_1621000(__int64 a1);
__int64 TargetMenuItem_1621130(__int64 result, unsigned int a2);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 LayoutAccessor_1563280_alt1(__int64*, const char*,
                                    char) __asm__("LayoutAccessor_1563280");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, __int64, __int64, int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");

bool TargetMenuItem_16209e0(__int64 a1)
{
  __int64 v1;
  __int64* v2;

  v1 = *(int*)(a1 + 40);
  if ((_DWORD)v1 == -1) {
    v2 = &game_g_empty_item;
  }
  else {
    v2 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v1 + 828);
  }
  return (*((_BYTE*)v2 + 3) & 0x20) == 0 && *(_WORD*)v2 != 0;
}

__int64 TargetMenuItem_1620c70(__int64 a1)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  (*(void (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1);
  return 2;
}

__int64 TargetMenuItem_1620cc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned __int16* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  atomic_ullong* v18;
  __int64* v19;
  const char* v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  char v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  char v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 result;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64* v39;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v36 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v36);
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v4 == nullptr) {
  LABEL_5:
    v4 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v5 = *(int*)(a1 + 40);
  v6 = *(_QWORD*)(a1 + 88);
  v7 = game_g_empty_item_ptr;
  if ((_DWORD)v5 == -1) {
    v8 = (unsigned __int16*)game_g_empty_item_ptr;
  }
  else {
    v8 = (unsigned __int16*)(v6 + 8 * v5 + 828);
  }
  v9 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  Util_15792c0(v4, v8, 0, 1u, v6, (__int64)"L_Icon", (__int64)"T_Txt", v9 & 1);
  v10 = *(_QWORD*)(a1 + 56);
  if (v10 == 0) {
    goto LABEL_13;
  }
  v11 = std___1___shared_weak_count_lock_alt1(v10);
  if (v11 == 0) {
    goto LABEL_13;
  }
  v12 = v11;
  v13 = (atomic_ullong*)(v11 + 8);
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v37 = v14;
  (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
  std___1___shared_weak_count___release_weak_alt1(v12);
  v14 = v37;
  if (v37 == nullptr) {
  LABEL_13:
    v14 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_14:
  if ((LayoutAccessor_1563280_alt1(v14, "EnduranceOff", 0) & 1) == 0) {
    v15 = *(_QWORD*)(a1 + 56);
    if (v15 != 0) {
      v16 = std___1___shared_weak_count_lock_alt1(v15);
      if (v16 != 0) {
        v17 = v16;
        v18 = (atomic_ullong*)(v16 + 8);
        v19 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v18, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v19 != nullptr) {
          LABEL_20:
            if (*(_BYTE*)(a1 + 96) != 0) {
              v20 = "EnduranceOn";
            }
            else {
              v20 = "EnduranceOff";
            }
            LayoutAccessor_1562cf0_alt1((__int64)v19, v20);
            goto LABEL_24;
          }
        }
        else {
          v39 = v19;
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt1(v17);
          v19 = v39;
          if (v39 != nullptr) {
            goto LABEL_20;
          }
        }
      }
    }
    v19 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_20;
  }
LABEL_24:
  v21 = *(_QWORD*)(a1 + 56);
  if (v21 == 0) {
    goto LABEL_28;
  }
  v22 = std___1___shared_weak_count_lock_alt1(v21);
  if (v22 == 0) {
    goto LABEL_28;
  }
  v23 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v23 != nullptr) {
      goto LABEL_29;
    }
    goto LABEL_28;
  }
  v38 = v22;
  (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
  std___1___shared_weak_count___release_weak_alt1(v38);
  if (v23 == nullptr) {
  LABEL_28:
    v23 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_29:
  v24 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  v25 = *(int*)(a1 + 40);
  if ((_DWORD)v25 == -1) {
    v26 = v7;
  }
  else {
    v26 = (__int64*)(*(_QWORD*)(a1 + 88) + 8 * v25 + 828);
  }
  v27 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                   8LL * *(unsigned __int16*)v26);
  v28 = *((_DWORD*)v26 + 1);
  v29 = *((unsigned __int8*)v26 + 2);
  v30 = (v28 & 0xF) * *(unsigned __int8*)(v27 + 87);
  v31 = 64;
  if ((v24 & 1) != 0) {
    v31 = 60;
  }
  v32 = 72;
  if ((v24 & 1) != 0) {
    v32 = 36;
  }
  if (v30 <= v29) {
    v33 = v31;
  }
  else {
    v33 = v32;
  }
  v34 = *(_DWORD*)((char*)GameData_212da30 + v33);
  result = ui_LayoutAccessor_FindTextBox_alt1(v23, (__int64)"T_Num");
  if (result != 0) {
    result = Pane_58f8a0_alt1(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v34;
    }
  }
  return result;
}

bool TargetMenuItem_1620f90(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;

  v1 = *(_QWORD*)(a1 + 88);
  v2 = *(unsigned __int16*)(v1 + 1952);
  v3 = *(_QWORD*)(*GameData_212c878[0] + 64);
  if (*(_WORD*)(v1 + 1952) != 0) {
    v2 = *(_QWORD*)(v3 + 8 * v2);
  }
  v4 = *(int*)(a1 + 40);
  v5 = (__int64*)(v1 + 8 * v4 + 828);
  if ((_DWORD)v4 == -1) {
    v5 = &game_g_empty_item;
  }
  return v2 == *(_QWORD*)(v3 + 8LL * *(unsigned __int16*)v5);
}

__int64 TargetMenuItem_1621000(__int64 a1)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v4;
  __int64 result;

  if ((UnitItem_6e8bc0(*(_QWORD*)(a1 + 88) + 8LL * *(int*)(a1 + 40) + 828,
                       *(_QWORD*)(a1 + 88)) &
       1) != 0) {
    GameRoutine_15de630(1, *(_QWORD*)(a1 + 88), *(_DWORD*)(a1 + 40));
    v2 = 2;
    v3 = (_BYTE*)(*(_QWORD*)(a1 + 88) + 847LL);
    v4 = *GameData_212c878[0];
    while (1) {
      if (*(_WORD*)(v3 - 19) != 0 && (*(v3 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v4 + 64) +
                                         8LL * *(unsigned __int16*)(v3 - 19)) +
                              72LL) < 8u) {
        v2 -= 2;
        goto LABEL_18;
      }
      if (*(_WORD*)(v3 - 11) != 0 && (*(v3 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v4 + 64) +
                                         8LL * *(unsigned __int16*)(v3 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v3 - 3) != 0 && (*v3 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v4 + 64) +
                                         8LL * *(unsigned __int16*)(v3 - 3)) +
                              72LL) < 8u) {
        goto LABEL_18;
      }
      v2 += 3;
      v3 += 24;
      if (v2 == 32) {
        v2 = 0xFFFFFFFFLL;
        goto LABEL_18;
      }
    }
    --v2;
  }
  else {
    v2 = *(unsigned int*)(a1 + 40);
  }

LABEL_18:
  result = TargetMenuItem_1621130(a1, v2);
  if (GameData_21cf830 != 0) {
    *(_DWORD*)(GameData_21cf830 + 152) = 24;
  }
  return result;
}

__int64 TargetMenuItem_1621130(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  unsigned int v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  bool v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int16 v24;

  v2 = *GameData_212cfd0[0];
  v3 = GameData_212cff0[0];
  v4 = *GameData_212cff0[0];
  if (*GameData_212cfd0[0] == 0 || v4 == 0) {
    return result;
  }
  v6 = *(unsigned __int8*)(v2 + 20);
  if (*(_BYTE*)(v2 + 20) == 0) {
    return GameRoutine_777be0(v4 + 8);
  }
  v8 = result;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)result + 464LL))(result) & 1) == 0) {
    v4 = *v3;
    return GameRoutine_777be0(v4 + 8);
  }
  if ((UnitItem_6e8bc0(*(_QWORD*)(v8 + 88) + 8LL * (int)a2 + 828,
                       *(_QWORD*)(v8 + 88)) &
       1) != 0) {
    v9 = *v3;
    goto LABEL_21;
  }
  v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(v8 + 88) +
                                              8LL * (int)a2 + 828));
  if (v10 == 0) {
    v4 = *v3;
    *(_DWORD*)(*v3 + 48) &= 0xFFFFF000;
    return GameRoutine_777be0(v4 + 8);
  }
  v11 = *(_QWORD*)(v10 + 192);
  v12 = *(unsigned __int8*)(v10 + 72);
  v13 = v11 == 0 || v12 > 7;
  if (v13 || *(_BYTE*)(v11 + 105) == 0 || *(_BYTE*)(v11 + 104) == 2) {
    v9 = *v3;
    *(_DWORD*)(*v3 + 48) &= 0xFFFFF000;
  }
  else {
    v9 = *v3;
    *(_DWORD*)(*v3 + 48) =
        *(_DWORD*)(*v3 + 48) & 0xFFFFF000 | *(_WORD*)(v11 + 16) & 0xFFF;
  }

LABEL_21:
  if ((*(_DWORD*)(v9 + 48) & 0xFFF) != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                     8LL * (*(_DWORD*)(v9 + 48) & 0xFFF));
  }
  else {
    v15 = *(unsigned __int16*)(v9 + 40);
    if (*(_WORD*)(v9 + 40) == 0) {
      v15 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    v16 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * v15);
    v17 = *(_QWORD*)(v16 + 192);
    v18 = *(unsigned __int8*)(v16 + 72);
    v19 = v17 == 0 || v18 > 7;
    if (v19 || *(_BYTE*)(v17 + 105) == 0) {
      v14 = 0;
    }
    else if (*(_BYTE*)(v17 + 104) == 2) {
      v14 = 0;
    }
    else {
      v14 = v17;
    }
  }
  v20 = *(_DWORD*)(v9 + 52);
  if ((v20 & 0x80000000) != 0) {
    v21 = 0;
  }
  else {
    v21 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) + 144LL * v20;
  }
  GameRoutine_778140(v9 + 8, *(_QWORD*)(v8 + 88), v6, 0);
  if (v14 == 0) {
    *(_DWORD*)(v9 + 48) &= 0xFFFFF000;
    if (v21 != 0) {
      goto LABEL_39;
    }
  LABEL_41:
    v22 = -1;
    goto LABEL_42;
  }
  *(_DWORD*)(v9 + 48) =
      *(_DWORD*)(v9 + 48) & 0xFFFFF000 | *(_WORD*)(v14 + 16) & 0xFFF;
  if (v21 == 0) {
    goto LABEL_41;
  }

LABEL_39:
  v22 = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);

LABEL_42:
  *(_DWORD*)(v9 + 52) = v22;
  *(_DWORD*)(v9 + 36) = a2;
  if ((a2 & 0x80000000) != 0) {
    *(_QWORD*)(v9 + 40) = 0;
  }
  else if (*(_BYTE*)(v9 + 16) != 0 && game_UnitPool_Get(v9 + 16) != 0) {
    v23 = game_UnitPool_Get(v9 + 16) + 8LL * a2;
    v24 = *(_WORD*)(v23 + 828);
    *(_BYTE*)(v9 + 42) = *(_BYTE*)(v23 + 830);
    *(_WORD*)(v9 + 40) = v24;
    *(_BYTE*)(v9 + 43) = *(_BYTE*)(v23 + 831);
    *(_DWORD*)(v9 + 44) = *(_DWORD*)(v23 + 832);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)(v9 + 8) + 24LL))(v9 + 8);
}

#pragma GCC visibility pop
