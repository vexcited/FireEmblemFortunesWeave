#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_2071168;
extern __int64* GameData_212e008[9];
__int64 BanqueUserMenuItem_IsEnable(_QWORD* a1);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GmapBanquetMenu_16415a0(__int64 result, __int64);
__int64 GmapBanquetMenu_16416e0(__int64);
__int64 MultiMenuSequence_17871c0(_QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
extern __int64 game_g_game_setting;
__int64 game_gmap_anonymous_BanqueUserMenuItem_ACall_closure_Invoke(__int64 a1);
__int64
game_gmap_anonymous_BanqueUserMenuItem_ACall_closure0_Invoke(__int64 a1);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16eb960(_QWORD, _QWORD);
__int64 GmapBanquetMenu_16420e0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_20711d8[])();
extern __int64 (*GameData_2071258[])();
extern __int64* GameData_212d640[9];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_gmap_anonymous_BanqueUserMenuItem_ACall(_QWORD* a1);

__int64 BanqueUserMenuItem_IsEnable(_QWORD* a1)
{
  __int64 v2;
  char* v3;
  char* v4;
  int v5;
  char* v6;
  _QWORD* v7;
  int v8;
  char v9;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  __int64 v20;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 480LL))(a1) & 1) != 0) {
    v2 = a1[1];
    v3 = *(char**)(v2 + 232);
    v4 = *(char**)(v2 + 240);
    if (v3 != v4) {
      v5 = -1;
      v6 = v3;
      while (1) {
        v7 = *(_QWORD**)v6;
        v6 += 8;
        if (v7 == a1) {
          break;
        }
        ++v5;
        if (v6 == v4) {
          goto LABEL_8;
        }
      }
      v8 = v5 + 1;
      if (v5 != -1) {
        v11 = v4 - v3 - 8;
        v12 = (v11 >> 3) + 1;
        if (v11 >= 0x18) {
          v17 = v12 & 0x3FFFFFFFFFFFFFFCLL;
          v18 = 0;
          v19 = 0;
          while (-v5 != v18) {
            if (v8 == (v19 | 2)) {
              v3 += 8;
              break;
            }
            if (v8 == (v19 | 3)) {
              v3 += 16;
              break;
            }
            v19 += 4;
            if (v8 == v19) {
              v3 += 24;
              break;
            }
            v3 += 32;
            v18 -= 4;
            v17 -= 4;
            if (v17 == 0) {
              v13 = -v18;
              v14 = v12 & 3;
              if (v14 != 0) {
                goto LABEL_12;
              }
              goto LABEL_15;
            }
          }
        }
        else {
          v13 = 0;
          v14 = v12 & 3;
          if (v14 == 0) {
          LABEL_15:
            v16 = 0;
          LABEL_28:
            v20 =
                __dynamic_cast(v16, GameData_212e008[0], &GameData_2071168, 0);
            v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 480LL))(v20) ^ 1;
            return v9 & 1;
          }
        LABEL_12:
          v15 = v13 - v5;
          while (v15 != 0) {
            v3 += 8;
            ++v15;
            if (--v14 == 0) {
              goto LABEL_15;
            }
          }
        }
        v16 = *(_QWORD*)v3;
        goto LABEL_28;
      }
    }
  }

LABEL_8:
  v9 = 1;
  return v9 & 1;
}

__int64 game_gmap_anonymous_BanqueUserMenuItem_ACall(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;

  v1 = *a1;
  if ((*(_BYTE*)(a1[11] + 356LL) & 1) != 0) {
    (*(void (**)(_QWORD*, _QWORD))(v1 + 328))(a1, 0);
    GmapBanquetMenu_16420e0(a1[11]);
    return 13;
  }
  if (((*(__int64 (**)(_QWORD*))(v1 + 480))(a1) & 1) != 0) {
    snd_Fade_Fade_10c830(v18, 0.0f);
    snd_play_ff2d0((void*)(&v17), "SE_SYS_Decide_L_Next",
                   "SE_SYS_Decide_L_Next", v18, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v18);
    *(_DWORD*)(a1[11] + 356LL) |= 2u;
    v3 = a1[11];
    *(_DWORD*)(v3 + 356) |= 1u;
    (*(void (**)(_QWORD*, __int64))(*a1 + 64LL))(a1, 1);
    MultiMenuSequence_17871c0(
        v3,
        *(_DWORD*)(*(_QWORD*)(v3 + 304 + 8LL * *(unsigned int*)(v3 + 352)) +
                   1064LL) == 0,
        0);
    GameRoutine_1567590("Tutorial", 1);
    GameRoutine_1567590("TroopList", 1);
    v4 = *(_QWORD*)(v3 + 320);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 240LL))(v4, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 248LL))(v4, 0);
    v5 = *(_QWORD*)(v3 + 312);
    LODWORD(v3) =
        *(_DWORD*)(*(_QWORD*)(v3 + 304 + 8LL * *(unsigned int*)(v3 + 352)) +
                   1064LL) != 0;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 240LL))(v5, (unsigned int)v3);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v5 + 248LL))(v5, (unsigned int)v3);
    return 13;
  }
  v7 = a1[1];
  v18[0] = a1;
  *(_QWORD*)((char*)&v18[1] + 4) = 0;
  v8 = *(_QWORD*)(v7 + 152);
  LODWORD(v18[1]) = 1;
  if (v8 != 0) {
    v9 = v8;
  }
  else {
    v9 = v7;
  }
  v10 = GameRoutine_16eb960(v9, v18);
  v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       144, 16, 0);
  v19 = v18;
  *(_DWORD*)(v12 + 40) = 0;
  *(_QWORD*)(v12 + 48) = 0;
  *(_QWORD*)(v12 + 56) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_BYTE*)(v12 + 82) = 1;
  *(_BYTE*)(v12 + 16) = 30;
  v18[0] = GameData_20711d8;
  v18[1] = a1;
  strcpy((char*)(v12 + 17), "MID_Menu_Cancel");
  *(_WORD*)(v12 + 80) = 257;
  v13 = GameData_212d640[0];
  *(_QWORD*)(v12 + 96) = GameData_20711d8;
  *(_QWORD*)(v12 + 104) = a1;
  *(_QWORD*)v12 = v13 + 2;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 128) = v12 + 96;
  BasicMenuCursor_16e0c00(v10, v12);
  if (v19 == v18) {
    v14 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_13;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v19 + v14))((__int64)v19);
LABEL_13:
  v15 = fw_memory_HeapManager_Allocate(*v11, 144, 16, 0);
  *(_DWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  *(_QWORD*)(v15 + 72) = 0;
  *(_BYTE*)(v15 + 16) = 28;
  v19 = v18;
  v18[0] = GameData_2071258;
  v18[1] = a1;
  *(_QWORD*)(v15 + 96) = GameData_2071258;
  *(_QWORD*)(v15 + 104) = a1;
  strcpy((char*)(v15 + 17), "MID_Menu_Trade");
  *(_WORD*)(v15 + 80) = 257;
  *(_BYTE*)(v15 + 82) = 1;
  *(_QWORD*)v15 = v13 + 2;
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 128) = v15 + 96;
  BasicMenuCursor_16e0c00(v10, v15);
  if (v19 == v18) {
    v16 = 32;
    goto LABEL_17;
  }
  if (v19 != nullptr) {
    v16 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v19 + v16))((__int64)v19);
  }
  return 10;
}

__int64 game_gmap_anonymous_BanqueUserMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  int v29;
  __int64* v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 88);
  v3 = *(_QWORD*)(v2 + 304);
  v4 = *(__int64**)(v3 + 232);
  v5 = *(__int64**)(v3 + 240);
  if (v4 == v5) {
  LABEL_5:
    v6 = -1;
  }
  else {
    v6 = 0;
    while (1) {
      v7 = *v4++;
      if (v7 == v1) {
        break;
      }
      ++v6;
      if (v4 == v5) {
        goto LABEL_5;
      }
    }
  }
  v8 = v2 + 304;
  GmapBanquetMenu_16415a0(*(_QWORD*)(v1 + 88), (unsigned int)v6);
  v9 = *(_QWORD*)(v2 + 360);
  v10 = v6;
  while (1) {
    v11 = *(_QWORD*)(v2 + 368) - v9;
    if ((v11 >> 2) - 1 <= v10) {
      break;
    }
    *(_DWORD*)(v9 + 4 * v10) = *(_DWORD*)(v9 + 4 * v10 + 4);
    v9 = *(_QWORD*)(v2 + 360);
    v12 = v9 + 4 * v10++;
    if (*(_DWORD*)(v12 + 4) == -1) {
      v11 = *(_QWORD*)(v2 + 368) - v9;
      break;
    }
  }
  *(_DWORD*)(v9 + v11 - 4) = -1;
  v13 = *(_QWORD*)(v2 + 360);
  if (*(_QWORD*)(v2 + 368) != v13) {
    v14 = 0;
    v15 = 0;
    do {
      v17 = *(_QWORD*)(*(_QWORD*)v8 + 232LL);
      if (v15 != 0) {
        if ((unsigned int)(v15 - 1) >= 7) {
          v18 = v14 & 0xFFFFFFF8;
          do {
            v17 += 64;
            v18 -= 8;
          } while (v18 != 0);
        }
        if ((v15 & 7) != 0) {
          v19 = v14 & 7;
          do {
            v17 += 8;
            --v19;
          } while (v19 != 0);
        }
      }
      v16 = *(_DWORD*)(v13 + 4 * v15++);
      ++v14;
      *(_DWORD*)(*(_QWORD*)v17 + 40LL) = v16;
      v13 = *(_QWORD*)(v2 + 360);
    } while (v15 < (*(_QWORD*)(v2 + 368) - v13) >> 2);
  }
  game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(v2 + 304));
  game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(v2 + 312));
  game_menu_BasicMenu_Unknown16dd9a0(*(_QWORD*)(v2 + 320));
  v20 = *(_QWORD*)(v8 + 8LL * *(unsigned int*)(v2 + 352));
  if (v20 != 0) {
    v21 = *(_QWORD*)(v20 + 336);
    if (v21 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v21 + 168LL))(*(_QWORD*)(v20 + 336));
    }
    *(_QWORD*)(v20 + 336) = v21;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v20, 1, 0, 0);
    v22 = *(_QWORD*)(v20 + 336);
    if (v22 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 160LL))(v22);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v23 = *(_QWORD*)(v20 + 336);
      v24 = 4;
      if (v23 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 120LL))(v23) & 1) != 0) {
          v24 = 4;
        }
        else {
          v24 = 0;
        }
      }
    }
    else {
      v24 = 4;
    }
    *(_DWORD*)(v20 + 356) = *(_DWORD*)(v20 + 356) & 0xFFFFFFFB | v24;
  }
  GmapBanquetMenu_16416e0(v2);
  v25 = *(_QWORD**)(v2 + 304);
  v26 = v25[42];
  if (v26 != 0) {
    v27 = (__int64*)v25[29];
    v28 = (__int64*)v25[30];
    if (v27 != v28) {
      v29 = 0;
      v30 = (__int64*)v25[29];
      while (1) {
        v31 = *v30++;
        if (v31 == v26) {
          break;
        }
        ++v29;
        if (v30 == v28) {
          return 2;
        }
      }
      if (v29 != 0) {
        v32 = 0;
        do {
          v33 = *v27;
          if (((*(__int64 (**)(__int64))(*(_QWORD*)*v27 + 40LL))(*v27) & 1) !=
              0) {
            if (v32 + 1 == v29) {
              (*(void (**)(__int64, _QWORD))(*(_QWORD*)v26 + 64LL))(v26, 0);
              v34 = *(_QWORD*)v8;
              v35 = *(_QWORD*)(*(_QWORD*)v8 + 336LL);
              if (v35 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v35 + 168LL))(v35);
              }
              *(_QWORD*)(v34 + 336) = v33;
              _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v34, 1, 0, 0);
              v36 = *(_QWORD*)(v34 + 336);
              if (v36 != 0) {
                (*(void (**)(__int64))(*(_QWORD*)v36 + 160LL))(v36);
                game_IsVibrationEnabled(game_g_game_setting + 712);
                v37 = *(_QWORD*)(v34 + 336);
                v38 = 4;
                if (v37 != 0) {
                  if (((*(__int64 (**)(__int64))(*(_QWORD*)v37 + 120LL))(v37) &
                       1) != 0) {
                    v38 = 4;
                  }
                  else {
                    v38 = 0;
                  }
                }
              }
              else {
                v38 = 4;
              }
              *(_DWORD*)(v34 + 356) = *(_DWORD*)(v34 + 356) & 0xFFFFFFFB | v38;
              return 2;
            }
            ++v32;
          }
          ++v27;
        } while (v27 != v28);
      }
    }
  }
  return 2;
}

__int64 game_gmap_anonymous_BanqueUserMenuItem_ACall_closure0_Invoke(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD**)(a1 + 8);
  v2 = v1[11];
  *(_DWORD*)(v2 + 356) |= 1u;
  (*(void (**)(_QWORD*, __int64))(*v1 + 64LL))(v1, 1);
  MultiMenuSequence_17871c0(
      v2,
      *(_DWORD*)(*(_QWORD*)(v2 + 304 + 8LL * *(unsigned int*)(v2 + 352)) +
                 1064LL) == 0,
      0);
  GameRoutine_1567590("Tutorial", 1);
  GameRoutine_1567590("TroopList", 1);
  v3 = *(_QWORD*)(v2 + 320);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v3 + 240LL))(v3, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v3 + 248LL))(v3, 0);
  v4 = *(_QWORD*)(v2 + 312);
  LODWORD(v2) =
      *(_DWORD*)(*(_QWORD*)(v2 + 304 + 8LL * *(unsigned int*)(v2 + 352)) +
                 1064LL) != 0;
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 240LL))(v4, (unsigned int)v2);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v4 + 248LL))(v4, (unsigned int)v2);
  return 2;
}

#pragma GCC visibility pop
