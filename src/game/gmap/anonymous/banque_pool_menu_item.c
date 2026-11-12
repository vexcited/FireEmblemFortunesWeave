#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_969e20(_QWORD, _QWORD);
__int64 GmapBanquetMenu_16416e0(__int64);
__int64 GmapBanquetMenu_16420e0(__int64);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 game_g_game_setting;
__int64 BanquePoolMenuItem_ACall(__int64 a1);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_157af40(_QWORD, _QWORD);
__int64 GameRoutine_1644d80(__int64);
__int64 Pane_58f8a0(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212d670[3];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_212d690;
__int64 BanquePoolMenuItem_DrawText(__int64 a1);
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindTextBox");
void GameHr_157af40(__int64*, unsigned int);
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void game_gmap_anonymous_1644d80(__int64);

__int64 BanquePoolMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  int v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 result;
  int* v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  char i;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a1 + 328LL))(a1, 0);
  v2 = *(_QWORD*)(a1 + 88);
  v3 = *(_DWORD*)(v2 + 356);
  if ((v3 & 1) != 0) {
    GmapBanquetMenu_16420e0(*(_QWORD*)(a1 + 88));
  }
  else {
    v4 = *(char**)(v2 + 360);
    v5 = *(char**)(v2 + 368);
    if (v4 != v5) {
      v6 = v5 - v4 - 4;
      if ((~(_BYTE)v6 & 0xC) != 0) {
        v7 = ((unsigned __int8)((unsigned int)v6 >> 2) + 1) & 3;
        do {
          v8 = *(_DWORD*)v4;
          v4 += 4;
          if (v8 == -1) {
            goto LABEL_19;
          }
        } while (--v7 != 0);
      }
      if (v6 >= 0xC) {
        while (*(_DWORD*)v4 != -1 && *((_DWORD*)v4 + 1) != -1 &&
               *((_DWORD*)v4 + 2) != -1 && *((_DWORD*)v4 + 3) != -1) {
          v4 += 16;
          if (v4 == v5) {
            goto LABEL_9;
          }
        }
      LABEL_19:
        ++*(_DWORD*)(a1 + 96);
        v13 = *(int**)(v2 + 360);
        v14 = *(_QWORD*)(v2 + 368) - (_QWORD)v13;
        if (v14 != 0) {
          v15 = *(_DWORD*)(a1 + 40);
          v16 = -(v14 >> 2);
          result = 13;
          v17 = 0;
          for (i = 0;; ++i) {
            v19 = *v13++;
            if (v19 == -1) {
              break;
            }
            if (v16 == --v17) {
              return result;
            }
          }
          v20 = -v17;
          GameRoutine_969e20(v2 + 384, v15);
          *(_DWORD*)(*(_QWORD*)(v2 + 360) + 4LL * (unsigned int)-(int)v17) =
              v15;
          v21 = *(_QWORD*)(*(_QWORD*)(v2 + 304) + 232LL);
          if (v17 != 0) {
            if ((unsigned int)v17 <= 0xFFFFFFF8) {
              v22 = v20 & 0xFFFFFFF8;
              do {
                v21 += 64;
                v22 -= 8;
              } while (v22 != 0);
            }
            if ((v20 & 7) != 0) {
              v23 = i & 7;
              do {
                v21 += 8;
                --v23;
              } while (v23 != 0);
            }
          }
          *(_DWORD*)(*(_QWORD*)v21 + 40LL) = v15;
          game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(v2 + 304));
          game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(v2 + 312));
          game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(v2 + 320));
          v24 = *(_QWORD*)(v2 + 304 + 8LL * *(unsigned int*)(v2 + 352));
          if (v24 != 0) {
            v25 = *(_QWORD*)(v24 + 336);
            if (v25 != 0) {
              (*(void (**)(_QWORD))(*(_QWORD*)v25 + 168LL))(
                  *(_QWORD*)(v24 + 336));
            }
            *(_QWORD*)(v24 + 336) = v25;
            _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v24, 1, 0, 0);
            v26 = *(_QWORD*)(v24 + 336);
            if (v26 != 0) {
              (*(void (**)(__int64))(*(_QWORD*)v26 + 160LL))(v26);
              game_IsVibrationEnabled(game_g_game_setting + 712);
              v27 = *(_QWORD*)(v24 + 336);
              v28 = 4;
              if (v27 != 0) {
                if (((*(__int64 (**)(__int64))(*(_QWORD*)v27 + 120LL))(v27) &
                     1) != 0) {
                  v28 = 4;
                }
                else {
                  v28 = 0;
                }
              }
            }
            else {
              v28 = 4;
            }
            *(_DWORD*)(v24 + 356) = *(_DWORD*)(v24 + 356) & 0xFFFFFFFB | v28;
          }
          GmapBanquetMenu_16416e0(v2);
        }
        return 13;
      }
    }
  LABEL_9:
    *(_DWORD*)(v2 + 356) = v3 | 1;
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 64LL))(a1, 1);
    GameRoutine_17871c0(
        v2,
        *(_DWORD*)(*(_QWORD*)(v2 + 304 + 8LL * *(unsigned int*)(v2 + 352)) +
                   1064LL) == 0,
        0);
    GameRoutine_1567590("Tutorial", 1);
    GameRoutine_1567590("TroopList", 1);
    v9 = *(_QWORD*)(v2 + 320);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v9 + 240LL))(v9, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v9 + 248LL))(v9, 0);
    v10 = *(_QWORD*)(v2 + 312);
    v11 = *(_DWORD*)(*(_QWORD*)(v2 + 304 + 8LL * *(unsigned int*)(v2 + 352)) +
                     1064LL) != 0;
    (*(void (**)(__int64, _BOOL4))(*(_QWORD*)v10 + 240LL))(v10, v11);
    (*(void (**)(__int64, _BOOL4))(*(_QWORD*)v10 + 248LL))(v10, v11);
  }
  return 13;
}

__int64 BanquePoolMenuItem_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  atomic_ullong* v21;
  __int64* v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  atomic_ullong* v30;
  __int64* v31;
  __int64 result;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  __int64* v36;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v33 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt1(v4);
  v6 = v33;
  if (v33 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  GameHr_157af40(v6, *(_DWORD*)(a1 + 40));
  game_gmap_anonymous_1644d80(a1);
  v7 = *(_QWORD*)(a1 + 56);
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = v8;
  v10 = (atomic_ullong*)(v8 + 8);
  v11 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v34 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak_alt1(v9);
  v11 = v34;
  if (v34 == nullptr) {
  LABEL_10:
    v11 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_11:
  v12 = *(_DWORD*)(a1 + 100);
  v13 = ui_LayoutAccessor_FindPane_alt1(v11, "T_MaxNum");
  if (v13 != 0) {
    v14 = __dynamic_cast(v13, GameData_212d670[0], GameData_212d690, 0);
    if (v14 != 0) {
      GameRoutine_156c910_alt1(v14, "%d", 1, v12);
    }
  }
  v15 = *(_DWORD*)(a1 + 96);
  v16 = *(_QWORD*)(a1 + 56);
  v17 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
  v18 = *(_DWORD*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)GameData_212da30 +
                   4);
  if (v16 == 0) {
    goto LABEL_18;
  }
  v19 = std___1___shared_weak_count_lock_alt1(v16);
  if (v19 == 0) {
    goto LABEL_18;
  }
  v20 = v19;
  v21 = (atomic_ullong*)(v19 + 8);
  v22 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v21, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v22 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v35 = v22;
  (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
  std___1___shared_weak_count___release_weak_alt1(v20);
  v22 = v35;
  if (v35 == nullptr) {
  LABEL_18:
    v22 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_19:
  v23 = *(_DWORD*)(a1 + 96);
  v24 = ui_LayoutAccessor_FindPane_alt1(v22, "T_BanquetNum");
  if (v24 != 0) {
    v25 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d690, 0);
    if (v25 != 0) {
      GameRoutine_156c910_alt1(v25, "%d", 1, v23);
    }
  }
  v26 = *(_QWORD*)(a1 + 56);
  if (v15 != 0) {
    v27 = v18;
  }
  else {
    v27 = v17;
  }
  if (v26 == 0) {
    goto LABEL_29;
  }
  v28 = std___1___shared_weak_count_lock_alt1(v26);
  if (v28 == 0) {
    goto LABEL_29;
  }
  v29 = v28;
  v30 = (atomic_ullong*)(v28 + 8);
  v31 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v30, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v31 != nullptr) {
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  v36 = v31;
  (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
  std___1___shared_weak_count___release_weak_alt1(v29);
  v31 = v36;
  if (v36 == nullptr) {
  LABEL_29:
    v31 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_30:
  result = ui_LayoutAccessor_FindTextBox_alt1(v31, "T_BanquetNum");
  if (result != 0) {
    result = Pane_58f8a0_alt1(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v27;
    }
  }
  return result;
}

#pragma GCC visibility pop
