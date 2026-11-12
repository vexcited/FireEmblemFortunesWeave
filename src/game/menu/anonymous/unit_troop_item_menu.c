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
__int64 GameRoutine_156d790(__int64);
__int64 GameRoutine_156d8f0(__int64);
__int64 GameRoutine_178bdb0(__int64);
__int64 GameRoutine_1841300(__int64, unsigned __int8);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64
LayoutAccessor_1562cf0_alt2(__int64 result,
                            unsigned int*) __asm__("LayoutAccessor_1562cf0");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_sound_PlayCursorHorizontalLeftSe();
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
double ui_LayoutAccessor_GetTranslate(__int64*);
extern __int64 (*GameData_20c8cb8[])();
extern __int64 (*GameData_20c8d38[])();
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 strlen(const char*);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void UnitTroopItemMenu_Unknown134(__int64 a1);
__int64 UnitTroopItemMenu_Unknown144(__int64 a1, char a2);
void game_menu_anonymous_UnitTroopItemMenu_UpdatePage(__int64 a1, int a2);
__int64 UnitTroopItemMenu_Unknown7(__int64 a1, char a2);

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

void UnitTroopItemMenu_Unknown134(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  struct {
    __int64* v10;
    __int64 v11;
  } v10_;

  v2 = *(_QWORD*)(a1 + 1080);
  if (v2 != 0) {
    v3 = *(_DWORD*)(a1 + 1088);
    v4 = std___1___shared_weak_count_lock_alt1(v2);
    if (v4 != 0) {
      v5 = *(__int64**)(a1 + 1072);
      v6 = v4;
      if (v5 != nullptr) {
        v7 = game_util_Format_alt1("L_ItemName%02d", v3);
        LayoutAccessor_1560070_alt1((void*)(&v10_.v10), v5, v7);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v5 == nullptr) {
          return;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
        if (v5 == nullptr) {
          return;
        }
      }
      if (v10_.v11 == 0) {
        return;
      }
      v8 = std___1___shared_weak_count_lock_alt1(v10_.v11);
      v9 = v10_.v10;
      if (v10_.v11 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v10_.v11);
      }
      if (v8 != 0 && v9 != nullptr) {
        ui_LayoutAccessor_GetTranslate(v9);
      }
      else if (v8 == 0) {
        return;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
  }
}

__int64 UnitTroopItemMenu_Unknown144(__int64 a1, char a2)
{
  int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v2 = *(_DWORD*)(a1 + 1088);
  if ((a2 & 1) != 0 || v2 != 0) {
    if (v2 <= 0) {
      v4 = a1;
      game_sound_PlayCursorHorizontalLeftSe();
      v5 = __dynamic_cast(*(_QWORD*)(v4 + 1056), GameData_21319e8[0],
                          &GameData_20c9638, 0);
      GameRoutine_178bdb0(v5);
      a1 = v4;
      v6 = *(int*)(v4 + 1068);
      v3 = 0;
      v2 = (int)(&GameData_20c8938)[2 * v6 + 1];
    }
    else {
      v3 = 13;
    }
    UnitTroopItemMenu_17910a0(a1, v2 - 1);
  }
  else {
    return 0;
  }
  return v3;
}

void game_menu_anonymous_UnitTroopItemMenu_UpdatePage(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned int* v8;
  char* v9;
  char* v10;
  char* v11;
  char* v12;
  char* v13;
  char* v14;
  char* v15;
  char* v16;
  char* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  __int64* v28;
  char** v29;
  const char* v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64* v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64* v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  char** v69;
  __int64 v70;
  char*** v71;
  struct {
    __int64 (**v72)();
    unsigned __int64 v73;
    int* v74;
    char gap56_[8];
    __int64 (***v75)();
  } v72_;
  int v76;

  *(_DWORD*)(a1 + 1068) = a2;
  *(_DWORD*)(a1 + 1088) = 0;
  *(_DWORD*)(a1 + 1092) = (&GameData_20c8938)[2 * a2 + 1];
  (*(void (**)(__int64))(*(_QWORD*)a1 + 1296LL))(a1);
  v3 = *(_QWORD*)(a1 + 1080);
  if (v3 != 0) {
    v4 = std___1___shared_weak_count_lock_alt1(v3);
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 1072);
      v6 = v4;
      if (v5 == 0) {
      LABEL_113:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt1(v6);
        }
        return;
      }
      v7 = *(int*)(a1 + 1068);
      v8 = (unsigned int*)game_util_Format_alt1("Page%02d",
                                                *(_DWORD*)(a1 + 1068));
      LayoutAccessor_1562cf0_alt2(v5, v8);
      v9 = game_util_Format_alt1("L_ItemName%02d", 0);
      ui_LayoutAccessor_SetPaneVisible(v5, v9, 0);
      v10 = game_util_Format_alt1("L_ItemName%02d", 1);
      ui_LayoutAccessor_SetPaneVisible(v5, v10, 0);
      v11 = game_util_Format_alt1("L_ItemName%02d", 2);
      ui_LayoutAccessor_SetPaneVisible(v5, v11, 0);
      v12 = game_util_Format_alt1("L_ItemName%02d", 3);
      ui_LayoutAccessor_SetPaneVisible(v5, v12, 0);
      v13 = game_util_Format_alt1("L_ItemName%02d", 4);
      ui_LayoutAccessor_SetPaneVisible(v5, v13, 0);
      v14 = game_util_Format_alt1("L_ItemName%02d", 5);
      ui_LayoutAccessor_SetPaneVisible(v5, v14, 0);
      v15 = game_util_Format_alt1("L_ItemName%02d", 6);
      ui_LayoutAccessor_SetPaneVisible(v5, v15, 0);
      v16 = game_util_Format_alt1("L_ItemName%02d", 7);
      ui_LayoutAccessor_SetPaneVisible(v5, v16, 0);
      v17 = game_util_Format_alt1("L_ItemName%02d", 8);
      ui_LayoutAccessor_SetPaneVisible(v5, v17, 0);
      v70 = v6;
      v71 = &(&GameData_20c8938)[2 * v7];
      v18 = *(_DWORD*)(a1 + 1068);
      if (v18 <= 1) {
        if (v18 != 0) {
          if (v18 == 1) {
            v19 = *((unsigned int*)v71 + 2);
            if ((int)v19 >= 1) {
              v20 = 0;
              v21 = 0;
              while (1) {
                v22 = *(_QWORD*)(a1 + 1080);
                if (v22 == 0) {
                  goto LABEL_9;
                }
                v23 = std___1___shared_weak_count_lock_alt1(v22);
                if (v23 == 0) {
                  goto LABEL_9;
                }
                v24 = *(__int64**)(a1 + 1072);
                v25 = v23;
                if (v24 != nullptr) {
                  v26 = game_util_Format_alt1("L_ItemName%02d", v21);
                  LayoutAccessor_1560070_alt1((void*)(&v72_.v72), v24, v26);
                }
                if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
                  std___1___shared_weak_count___release_weak_alt1(v25);
                }
                if (v24 != nullptr && v72_.v73 != 0) {
                  v27 = std___1___shared_weak_count_lock_alt1(v72_.v73);
                  v28 = (__int64*)v72_.v72;
                  if (v72_.v73 != 0) {
                    std___1___shared_weak_count___release_weak_alt1(v72_.v73);
                  }
                  if (v27 != 0 && v28 != nullptr) {
                    break;
                  }
                  if (v27 != 0) {
                    goto LABEL_47;
                  }
                }
              LABEL_9:
                ++v21;
                v20 += 3;
                if (v19 == v21) {
                  goto LABEL_93;
                }
              }
              v29 = *v71;
              v30 = (*v71)[v20];
              v31 = strlen(v30);
              if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
                String_60a1d0();
              }
              v32 = v31;
              v69 = v29;
              if (v31 >= 0x17) {
                if ((v31 | 7) == 0x17) {
                  v34 = 26;
                }
                else {
                  v34 = (v31 | 7) + 1;
                }
                v33 = (char*)fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v34, 16, 0);
                v72_.v73 = v32;
                v72_.v74 = (int*)v33;
                v72_.v72 = (__int64 (**)(void))(v34 | 1);
              }
              else {
                v33 = (char*)&v72_.v72 + 1;
                LOBYTE(v72_.v72) = 2 * v31;
                if (v31 == 0) {
                  goto LABEL_33;
                }
              }
              memmove((__int64)v33, (__int64)v30, v32);
            LABEL_33:
              v33[v32] = 0;
              if (((unsigned __int8)v72_.v72 & 1) != 0) {
                v35 = v72_.v73;
              }
              else {
                v35 = (unsigned __int64)(unsigned __int8)v72_.v72 >> 1;
              }
              if (((unsigned __int8)v72_.v72 & 1) != 0 && v72_.v74 != nullptr) {
                v36 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v36 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                    (__int64)v72_.v74);
              }
              if (v35 != 0) {
                LayoutAccessor_1562060(v28, "T_Txt", v69[v20]);
                v37 = "Txt";
              }
              else {
                v38 = ui_LayoutAccessor_FindPane(v28, "IconTxt");
                if (v38 != 0) {
                  v38 = __dynamic_cast(v38, GameData_212d670[0],
                                       GameData_212d678[0], 0);
                }
                GameRoutine_1841300(v38, BYTE4(v69[v20 + 2]));
                v37 = "TxtIcon";
              }
              LayoutAccessor_1562cf0_alt2((__int64)v28, (unsigned int*)v37);
              LayoutAccessor_155e830((__int64)v28, 1);
            LABEL_47:
              if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
                std___1___shared_weak_count___release_weak_alt1(v27);
              }
              goto LABEL_9;
            }
          }
          goto LABEL_93;
        }
        v40 = *((unsigned int*)v71 + 2);
        if ((int)v40 < 1) {
          goto LABEL_93;
        }
        v41 = 0;
        v42 = 0;
        while (1) {
          v43 = *(_QWORD*)(a1 + 1080);
          if (v43 == 0) {
            goto LABEL_56;
          }
          v44 = std___1___shared_weak_count_lock_alt1(v43);
          if (v44 == 0) {
            goto LABEL_56;
          }
          v45 = *(__int64**)(a1 + 1072);
          v46 = v44;
          if (v45 != nullptr) {
            v47 = game_util_Format_alt1("L_ItemName%02d", v42);
            LayoutAccessor_1560070_alt1((void*)(&v72_.v72), v45, v47);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
            std___1___shared_weak_count___release_weak_alt1(v46);
          }
          if (v45 != nullptr && v72_.v73 != 0) {
            v48 = std___1___shared_weak_count_lock_alt1(v72_.v73);
            v49 = (__int64*)v72_.v72;
            if (v72_.v73 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v72_.v73);
            }
            if (v48 != 0 && v49 != nullptr) {
              break;
            }
            if (v48 != 0) {
              goto LABEL_71;
            }
          }
        LABEL_56:
          ++v42;
          v41 += 3;
          if (v40 == v42) {
            goto LABEL_93;
          }
        }
        LayoutAccessor_1562060(v49, "T_Txt", (*v71)[v41]);
        LayoutAccessor_1562cf0_alt2((__int64)v49, (unsigned int*)"Txt");
        LayoutAccessor_155e830((__int64)v49, 1);
      LABEL_71:
        if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
          std___1___shared_weak_count___release_weak_alt1(v48);
        }
        goto LABEL_56;
      }
      if (v18 == 2) {
        v76 = 0;
        v72_.v72 = GameData_20c8cb8;
        v72_.v73 = a1;
        v72_.v75 = &v72_.v72;
        v72_.v74 = &v76;
        GameRoutine_156d8f0((__int64)&v72_.v72);
        if (v72_.v75 == &v72_.v72) {
          v50 = 4;
        }
        else {
          if (v72_.v75 == nullptr) {
            goto LABEL_93;
          }
          v50 = 5;
        }
        ((__int64 (*)(__int64))(*v72_.v75)[v50])((__int64)v72_.v75);
        goto LABEL_93;
      }
      if (v18 != 3) {
        goto LABEL_93;
      }
      v76 = 0;
      v72_.v72 = GameData_20c8d38;
      v72_.v73 = a1;
      v72_.v75 = &v72_.v72;
      v72_.v74 = &v76;
      GameRoutine_156d790((__int64)&v72_.v72);
      if (v72_.v75 == &v72_.v72) {
        v39 = 4;
      }
      else {
        if (v72_.v75 == nullptr) {
          goto LABEL_78;
        }
        v39 = 5;
      }
      ((__int64 (*)(__int64))(*v72_.v75)[v39])((__int64)v72_.v75);
    LABEL_78:
      v51 = *(_QWORD*)(a1 + 1080);
      if (v51 != 0) {
        v52 = v76;
        v53 = std___1___shared_weak_count_lock_alt1(v51);
        if (v53 != 0) {
          v54 = *(__int64**)(a1 + 1072);
          v55 = v53;
          if (v54 != nullptr) {
            v56 = game_util_Format_alt1("L_ItemName%02d", v52);
            LayoutAccessor_1560070_alt1((void*)(&v72_.v72), v54, v56);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
            std___1___shared_weak_count___release_weak_alt1(v55);
          }
          if (v54 != nullptr && v72_.v73 != 0) {
            v57 = std___1___shared_weak_count_lock_alt1(v72_.v73);
            v58 = (__int64*)v72_.v72;
            if (v72_.v73 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v72_.v73);
            }
            if (v57 != 0 && v58 != nullptr) {
              LayoutAccessor_1562060(
                  v58, "T_Txt",
                  (&GameData_20c8938)[2 * *(int*)(a1 + 1068)][3 * v76]);
              LayoutAccessor_1562cf0_alt2((__int64)v58, (unsigned int*)"Txt");
              LayoutAccessor_155e830((__int64)v58, 1);
            }
            else if (v57 == 0) {
              goto LABEL_93;
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57);
              std___1___shared_weak_count___release_weak_alt1(v57);
            }
          }
        }
      }
    LABEL_93:
      v6 = v70;
      v59 = *((unsigned int*)v71 + 2);
      if ((int)v59 >= 1) {
        v60 = 1;
        v61 = 0;
        while (1) {
          v62 = *(_QWORD*)(a1 + 1080);
          if (v62 == 0) {
            goto LABEL_95;
          }
          v63 = std___1___shared_weak_count_lock_alt1(v62);
          if (v63 == 0) {
            goto LABEL_95;
          }
          v64 = *(__int64**)(a1 + 1072);
          v65 = v63;
          if (v64 != nullptr) {
            v66 = game_util_Format_alt1("L_ItemName%02d", v61);
            LayoutAccessor_1560070_alt1((void*)(&v72_.v72), v64, v66);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v65 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v64 == nullptr) {
              goto LABEL_95;
            }
          }
          else {
            (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
            std___1___shared_weak_count___release_weak_alt1(v65);
            if (v64 == nullptr) {
              goto LABEL_95;
            }
          }
          if (v72_.v73 != 0) {
            v67 = std___1___shared_weak_count_lock_alt1(v72_.v73);
            v68 = (__int64)v72_.v72;
            if (v72_.v73 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v72_.v73);
            }
            if (v67 != 0 && v68 != 0) {
              LayoutAccessor_1562cf0_alt2(v68, (unsigned int*)"Default");
              LayoutAccessor_1562cf0_alt2(v68, (unsigned int*)(*v71)[v60]);
            LABEL_111:
              if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
                std___1___shared_weak_count___release_weak_alt1(v67);
              }
              goto LABEL_95;
            }
            if (v67 != 0) {
              goto LABEL_111;
            }
          }
        LABEL_95:
          ++v61;
          v60 += 3;
          if (v59 == v61) {
            goto LABEL_113;
          }
        }
      }
      goto LABEL_113;
    }
  }
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

__int64 UnitTroopItemMenu_Unknown7(__int64 a1, char a2)
{
  int v2;
  unsigned int v3;
  __int64 v4;
  __int64 v6;

  v2 = *(_DWORD*)(a1 + 912);
  if ((a2 & 1) != 0 || v2 != 0) {
    v4 = a1 - 176;
    if (v2 <= 0) {
      game_sound_PlayCursorHorizontalLeftSe();
      v6 = __dynamic_cast(*(_QWORD*)(a1 + 880), GameData_21319e8[0],
                          &GameData_20c9638, 0);
      GameRoutine_178bdb0(v6);
      v3 = 0;
      v2 = (int)(&GameData_20c8938)[2 * *(int*)(a1 + 892) + 1];
    }
    else {
      v3 = 13;
    }
    UnitTroopItemMenu_17910a0(v4, v2 - 1);
  }
  else {
    return 0;
  }
  return v3;
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
