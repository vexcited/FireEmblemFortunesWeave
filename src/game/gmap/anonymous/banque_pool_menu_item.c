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
__int64 BanquePoolMenuItem_Unknown25(__int64 a1);
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

__int64 BanquePoolMenuItem_Unknown25(__int64 a1)
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
  atomic_ullong* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  atomic_ullong* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  atomic_ullong* v24;
  __int64* v25;
  __int64 result;
  __int64* v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;

  if (*(_QWORD*)(a1 + 56) == 0) {
    goto LABEL_5;
  }
  v2 = std___1___shared_weak_count_lock();
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = v2;
  v4 = (atomic_ullong*)(v2 + 8);
  v5 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v4, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v27 = v5;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v3);
  v5 = v27;
  if (v27 == nullptr) {
  LABEL_5:
    v5 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  GameRoutine_157af40(v5, *(unsigned int*)(a1 + 40));
  GameRoutine_1644d80(a1);
  if (*(_QWORD*)(a1 + 56) == 0) {
    goto LABEL_10;
  }
  v6 = std___1___shared_weak_count_lock();
  if (v6 == 0) {
    goto LABEL_10;
  }
  v7 = v6;
  v8 = (atomic_ullong*)(v6 + 8);
  v9 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v28 = v9;
  (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  std___1___shared_weak_count___release_weak(v7);
  v9 = v28;
  if (v28 == nullptr) {
  LABEL_10:
    v9 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_11:
  v10 = ui_LayoutAccessor_FindPane(v9, "T_MaxNum");
  if (v10 != 0) {
    v11 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d690, 0);
    if (v11 != 0) {
      GameRoutine_156c910(v11, "%d", 1);
    }
  }
  v12 = *(_DWORD*)(a1 + 96);
  v13 = *(int*)((char*)((int*)0x24LL) + (_QWORD)GameData_212da30);
  v14 = *(_DWORD*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)GameData_212da30 +
                   4);
  if (*(_QWORD*)(a1 + 56) == 0) {
    goto LABEL_18;
  }
  v15 = std___1___shared_weak_count_lock();
  if (v15 == 0) {
    goto LABEL_18;
  }
  v16 = v15;
  v17 = (atomic_ullong*)(v15 + 8);
  v18 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v18 != nullptr) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  v29 = v18;
  (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  std___1___shared_weak_count___release_weak(v16);
  v18 = v29;
  if (v29 == nullptr) {
  LABEL_18:
    v18 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_19:
  v19 = ui_LayoutAccessor_FindPane(v18, "T_BanquetNum");
  if (v19 != 0) {
    v20 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d690, 0);
    if (v20 != 0) {
      GameRoutine_156c910(v20, "%d", 1);
    }
  }
  if (v12 != 0) {
    v21 = v14;
  }
  else {
    v21 = v13;
  }
  if (*(_QWORD*)(a1 + 56) == 0) {
    goto LABEL_29;
  }
  v22 = std___1___shared_weak_count_lock();
  if (v22 == 0) {
    goto LABEL_29;
  }
  v23 = v22;
  v24 = (atomic_ullong*)(v22 + 8);
  v25 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v24, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v25 != nullptr) {
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  v30 = v25;
  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
  std___1___shared_weak_count___release_weak(v23);
  v25 = v30;
  if (v30 == nullptr) {
  LABEL_29:
    v25 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_30:
  result = ui_LayoutAccessor_FindTextBox(v25, "T_BanquetNum");
  if (result != 0) {
    result = Pane_58f8a0();
    if (result != 0) {
      *(_DWORD*)(result + 12) = v21;
    }
  }
  return result;
}

#pragma GCC visibility pop
