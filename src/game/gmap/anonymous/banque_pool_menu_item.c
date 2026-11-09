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

#pragma GCC visibility pop
