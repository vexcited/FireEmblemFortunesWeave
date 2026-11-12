#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 Alignment_56b600(_QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(_QWORD, _QWORD, long double);
__int64 game_util_Format(const char*, ...);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
extern __int64* GameData_21319e8[10];
extern __int64* GameData_21319f0[9];
extern __int64 GameData_20c62a8;
extern __int64 GameData_20c9638;
extern char* GameData_20c8980;
extern char** GameData_20c8938;
extern int GameData_2263c38;
extern int GameData_2263c3c;
extern int GameData_2263c40;
__int64 UnitTroopItemMenu_Unknown100(__int64 a1);
void UnitTroopItemMenu_Unknown162(__int64 a1);
__int64 UnitTroopItemMenu_17910a0(__int64 result, int a2);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 game_menu_BasicMenu_Unknown16de2e0_alt1(__int64 result, char) __asm__(
    "game_menu_BasicMenu_Unknown16de2e0");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");

__int64 UnitTroopItemMenu_Unknown100(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  char** v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  char*** v13;
  int v14;
  int v15;
  int v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  _QWORD v27[25];

  v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                      &GameData_20c9638, 0);
  v3 = *(_DWORD*)(a1 + 1088);
  v4 = v2;
  if (GameData_2263c38 < 1) {
    v7 = 1;
    goto LABEL_11;
  }
  v5 = GameData_2263c38 & 7;
  if ((unsigned int)GameData_2263c38 < 8) {
    v6 = 0;
    v7 = 1;
    if ((GameData_2263c38 & 7) == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v8 = &GameData_20c8980;
  v9 = 0;
  v7 = 1;
  do {
    v9 -= 8;
    v10 = *((_DWORD*)v8 + 12);
    v11 = *((_DWORD*)v8 + 4) + *(_DWORD*)v8 + *((_DWORD*)v8 - 4) +
          *((_DWORD*)v8 - 8) + *((_DWORD*)v8 - 12) + *((_DWORD*)v8 - 16) + v7;
    v12 = *((_DWORD*)v8 + 8);
    v8 += 16;
    v7 = v10 + v12 + v11;
  } while (-(__int64)(GameData_2263c38 & 0x7FFFFFF8) != v9);
  v6 = -v9;
  if ((GameData_2263c38 & 7) != 0) {
  LABEL_9:
    v13 = &(&GameData_20c8938)[2 * v6 + 1];
    do {
      v14 = *(_DWORD*)v13;
      v13 += 2;
      --v5;
      v7 += v14;
    } while (v5 != 0);
  }
LABEL_11:
  if (GameData_2263c3c == v7 + v3) {
    if (GameData_2263c40 == 1) {
      v15 = 2;
    }
    else {
      v15 = 0;
    }
    if (GameData_2263c40 != 0) {
      v16 = v15;
    }
    else {
      v16 = 1;
    }
  }
  else {
    GameData_2263c3c = v7 + v3;
    v16 = 1;
  }
  GameData_2263c40 = v16;
  v17 = GameData_21319f0[0];
  v18 = __dynamic_cast(*(_QWORD*)(v2 + 304), GameData_21319f0[0],
                       &GameData_20c62a8, 0);
  (*(void (**)(__int64))(*(_QWORD*)v18 + 1296LL))(v18);
  v19 = __dynamic_cast(*(_QWORD*)(v4 + 312), v17, &GameData_20c62a8, 0);
  (*(void (**)(__int64))(*(_QWORD*)v19 + 1296LL))(v19);
  v20 = __dynamic_cast(*(_QWORD*)(v4 + 312), v17, &GameData_20c62a8, 0);
  game_menu_BasicMenu_Unknown16de2e0_alt1(v20, 1);
  v21 = __dynamic_cast(*(_QWORD*)(v4 + 312), v17, &GameData_20c62a8, 0);
  v22 = *(_QWORD*)(v21 + 336);
  if (v22 != 0 && ((*(void (**)(__int64))(*(_QWORD*)v22 + 168LL))(v22),
                   *(_QWORD*)(v21 + 336) = 0,
                   _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v21, 0, 1u, 0),
                   (v23 = *(_QWORD*)(v21 + 336)) != 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 160LL))(v23);
    v24 = *(_QWORD*)(v21 + 336);
    v25 = 4;
    if (v24 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 120LL))(v24) & 1) != 0) {
        v25 = 4;
      }
      else {
        v25 = 0;
      }
    }
  }
  else {
    v25 = 4;
  }
  *(_DWORD*)(v21 + 356) = *(_DWORD*)(v21 + 356) & 0xFFFFFFFB | v25;
  snd_Fade_Fade_10c830_alt1((__int64)v27, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_List_Sort", (__int64)"SE_SYS_List_Sort",
                      (__int64)v27, 0, 0x10001u, 0, 0x0.0p+0f,
                      0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(v27);
  return 13;
}

void UnitTroopItemMenu_Unknown162(__int64 a1)
{
  int v1;
  int v2;
  int v4;
  int i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  __int64 v13;
  const char* v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if (GameData_2263c3c != 0 && GameData_2263c3c != 35) {
    if (GameData_2263c3c > 6) {
      if ((unsigned int)GameData_2263c3c >= 0x11) {
        if ((unsigned int)GameData_2263c3c >= 0x1A) {
          if ((unsigned int)GameData_2263c3c >= 0x23) {
            goto LABEL_12;
          }
          v4 = -26;
          v1 = 3;
        }
        else {
          v4 = -17;
          v1 = 2;
        }
      }
      else {
        v4 = -7;
        v1 = 1;
      }
    }
    else {
      v4 = -1;
      v1 = 0;
    }
    v2 = v4 + GameData_2263c3c;
  }
LABEL_12:
  if (*(int*)(a1 + 1092) >= 1) {
    for (i = 0; i < *(_DWORD*)(a1 + 1092); ++i) {
      v6 = *(_QWORD*)(a1 + 1080);
      if (v6 == 0) {
        continue;
      }
      v7 = std___1___shared_weak_count_lock(v6);
      if (v7 == 0) {
        continue;
      }
      v8 = *(_QWORD*)(a1 + 1072);
      v9 = v7;
      if (v8 != 0) {
        v10 = game_util_Format("L_ItemName%02d", i);
        LayoutAccessor_1560070((void*)(&v17), v8, v10);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v8 == 0) {
          continue;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak();
        if (v8 == 0) {
          continue;
        }
      }
      if (v18 != 0) {
        v11 = std___1___shared_weak_count_lock(v18);
        v13 = v17;
        if (v18 != 0) {
          *(__n128*)&v12 = std___1___shared_weak_count___release_weak();
        }
        if (v11 != 0 && v13 != 0) {
          if (v2 == i) {
            v14 = "SortOff";
            if (v1 == GameData_2263c38) {
              v15 = "Asc";
              if (GameData_2263c40 != 2) {
                v15 = "SortOff";
              }
              if (GameData_2263c40 == 1) {
                v14 = "Desc";
              }
              else {
                v14 = v15;
              }
            }
          }
          else {
            v14 = "SortOff";
          }
          LayoutAccessor_1562cf0(v13, v14);
          v16 = ui_LayoutAccessor_FindAlignment(v13, "A_Txt");
          if (v16 != 0) {
            Alignment_56b600(v16);
          }
        LABEL_40:
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(v11,
                                                                       v12);
            std___1___shared_weak_count___release_weak();
          }
          continue;
        }
        if (v11 != 0) {
          goto LABEL_40;
        }
      }
    }
  }
}

__int64 UnitTroopItemMenu_17910a0(__int64 result, int a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v2 = *(_DWORD*)(result + 1088);
  if (v2 != a2) {
    v3 = result;
    v4 = *(_QWORD*)(result + 1080);
    if (v4 != 0) {
      v6 = std___1___shared_weak_count_lock_alt1(v4);
      if (v6 != 0) {
        v7 = *(__int64**)(v3 + 1072);
        v8 = v6;
        if (v7 != nullptr) {
          v9 = game_util_Format_alt1("L_ItemName%02d", v2);
          LayoutAccessor_1560070_alt1((void*)(&v19_.v19), v7, v9);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v8);
        }
        if (v7 != nullptr && v19_.v20 != 0) {
          v10 = std___1___shared_weak_count_lock_alt1(v19_.v20);
          v11 = v19_.v19;
          if (v19_.v20 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v19_.v20);
          }
          if (v10 != 0 && v11 != 0) {
            LayoutAccessor_1562cf0_alt1(v11, "Default");
          }
          else if (v10 == 0) {
            goto LABEL_18;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
            std___1___shared_weak_count___release_weak_alt1(v10);
          }
        }
      }
    }
  LABEL_18:
    v12 = *(_QWORD*)(v3 + 1080);
    if (v12 == 0) {
      goto LABEL_34;
    }
    v13 = std___1___shared_weak_count_lock_alt1(v12);
    if (v13 == 0) {
      goto LABEL_34;
    }
    v14 = *(__int64**)(v3 + 1072);
    v15 = v13;
    if (v14 != nullptr) {
      v16 = game_util_Format_alt1("L_ItemName%02d", a2);
      LayoutAccessor_1560070_alt1((void*)(&v19_.v19), v14, v16);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
    if (v14 == nullptr || v19_.v20 == 0) {
      goto LABEL_34;
    }
    v17 = std___1___shared_weak_count_lock_alt1(v19_.v20);
    v18 = v19_.v19;
    if (v19_.v20 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v19_.v20);
    }
    if (v17 != 0 && v18 != 0) {
      LayoutAccessor_1562cf0_alt1(v18, "Select");
    }
    else if (v17 == 0) {
    LABEL_34:
      *(_DWORD*)(v3 + 1088) = a2;
      return _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v3, 0, 1u, 0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      std___1___shared_weak_count___release_weak_alt1(v17);
    }
    goto LABEL_34;
  }
  return result;
}

#pragma GCC visibility pop
