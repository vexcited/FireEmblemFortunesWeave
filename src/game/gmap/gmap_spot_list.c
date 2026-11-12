#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_167f810(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd280(void);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_2080158[])();
extern __int64 (*GameData_20802d8[])();
extern __int64 GameData_207fdb0;
extern __int64 GameData_225e7a0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212d708;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_167e010(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* GmapSpotList_Unknown145(_QWORD* a1);
__int64 GmapSpotList_167c6c0(_QWORD* a1);
__int64 GmapSpotList_Unknown100(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1520a70(void);
__int64 GameRoutine_1520ea0(_QWORD);
__int64 GameRoutine_1567760(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16516a0(void);
__int64 GameRoutine_1678f00(__int64, __int64);
__int64 GameRoutine_1679140(_QWORD);
__int64 GameRoutine_167e820(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_167fe20(_QWORD, _QWORD, long double);
__int64 GameRoutine_16824c0(_QWORD);
__int64 GameRoutine_1683020(_QWORD);
__int64 GameRoutine_16962f0(_QWORD);
__int64 GameRoutine_1843710(_QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
extern _DWORD GameData_1bee190[15];
extern _UNKNOWN GameData_1ab98e9;
extern __int64 (*GameData_2080258[])();
extern __int64 (*game_gmap_GmapSpotEmptyMenuItem_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_2130e20;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21f3d10;
extern __int64 ui_Manager_instance_;
__int64 GmapSpotList_167ce30(long double a1);
__int64 game_gmap_GmapSpotList_ZRCall(__int64 a1);
__int64 GmapSpotList_167cfa0(_QWORD* a1);
__int64 GmapSpotList_167d2e0_alt1(int* a1, __int64 a2,
                                  char a3) __asm__("GmapSpotList_167d2e0");
__int64 GmapSpotList_167d440(__int64 a1, __int64 a2, char a3);
__int64 GmapSpotList_167d5a0(_QWORD* a1);
bool game_gmap_GmapSpotList_OnInit_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_gmap_GmapSpotList_OnInit_lambda1_Invoke(__int64 a1, __int64* a2,
                                                     int* a3);
bool game_gmap_GmapSpotList_UpdateMapTargetSpot_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
__int64 GmapSpotList_167ea80(__int64 a1, __int64 a2);
__int64 GmapSpotList_167ece0(__int64 result, __int64* a2, unsigned __int64 a3,
                             __int64* a4);
__int64 game_gmap_GmapSpotList_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                            __int64 a2);
_QWORD* GameRoutine_654050_alt1(_QWORD* result,
                                _QWORD*) __asm__("GameRoutine_654050");
__int64 BasicMenu_16dd8b0(_QWORD, _QWORD, _QWORD);
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159dda0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16516a0_alt1(_QWORD) __asm__("GameRoutine_16516a0");
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GmapSpotList_167ef20(__int64 result, __int64*, __int64*, __int64,
                             __int64, __int64, __int64);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown31(void);
__int64 game_menu_PageTab_SetupImage(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_2080048[])();
extern __int64 (*GameData_20800d8[])();
extern __int64 (*GameData_20801d8[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_MenuAnimator_instance_;
extern char* GameData_2080508[13];
extern char GameData_1a9f09e;
struct PseudoSret LayoutAccessor_1560070(_QWORD, _QWORD);
__int64 game_gmap_GmapSpotList_OnInit_alt1(_QWORD* a1) __asm__(
    "game_gmap_GmapSpotList_OnInit");
__int64 GmapSpotList_167bd90_alt1(_QWORD* a1) __asm__("GmapSpotList_167bd90");
__int64 GmapSpotList_167bf80(_QWORD* a1);
__int64 game_gmap_GmapSpotList_BCall(__int64 a1);
__n128 GmapSpotList_167d280(__int64 a1, unsigned int a2);
__int64 GmapSpotList_167e820(__int64 result, __int64* a2, unsigned __int64 a3,
                             __int64* a4, __int64 a5);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 BasicMenu_16dd280(_QWORD*);
__int64 BasicMenu_16dd8b0_alt1(__int64, int, int) __asm__("BasicMenu_16dd8b0");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_167f810(__int64, int, __int64, __int64, int, __int64);
__int64 GameRoutine_1567760_alt1(__int64 result, unsigned int,
                                 char) __asm__("GameRoutine_1567760");
__int64 GameRoutine_16516a0_alt2(int) __asm__("GameRoutine_16516a0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 game_gmap_1520a70(__int64);
__int64 game_gmap_1520ea0(__int64);
__int64 game_menu_BasicMenu_Unknown16de4d0_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Unknown16de4d0");
__int64 game_menu_PageTab_Move_alt1(int*, int,
                                    char) __asm__("game_menu_PageTab_Move");
__int64 game_menu_PageTab_SetupImage_alt1(
    int*, __int64, __int64, unsigned int, unsigned int,
    unsigned int) __asm__("game_menu_PageTab_SetupImage");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_1679140(__int64);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_16824c0_alt1(__int64) __asm__("GameRoutine_16824c0");
void GameRoutine_1683020_alt1(__int64*) __asm__("GameRoutine_1683020");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_gmap_GmapSpotList_OnInit(__int64 a1);
__int64 GmapSpotList_167bd90(__int64* a1);
__int64 GmapSpotList_167d2e0(int* a1, int a2, char a3);

__int64 game_gmap_GmapSpotList_OnInit(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  const char* v17;
  char* v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 result;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  _QWORD* v27;
  _QWORD* v28;
  int v29;
  __int64 v30;
  int v31;
  _DWORD* v32;
  _DWORD* v33;
  int v34;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;
  struct {
    _QWORD v37[4];
    _QWORD* v38;
  } v37_;
  __int64 v39;
  __int64 v40;

  v1 = *(_QWORD*)(a1 + 1184);
  v39 = 0;
  if (v1 == 0) {
    goto LABEL_15;
  }
  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  v5 = v37_.v37;
  v37_.v37[0] = GameData_2080048;
  v37_.v37[1] = a1;
  v37_.v38 = v37_.v37;
  v37_.v37[2] = &v39;
  if (v3 == v4) {
    goto LABEL_13;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  do {
    v8 = *(_QWORD*)(v4 + 8 * v6);
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, v7, &GameData_207fdb0, 0);
      if (v9 == 0) {
        goto LABEL_5;
      }
      v40 = v9;
      if (v37_.v38 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v37_.v38 + 48LL))(v37_.v38,
                                                                  &v40) &
           1) != 0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_5:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  v5 = v37_.v38;
  if (v37_.v38 != v37_.v37) {
    if (v37_.v38 != nullptr) {
      v10 = 40;
      goto LABEL_14;
    }
    goto LABEL_15;
  }
LABEL_13:
  v10 = 32;
LABEL_14:
  (*(void (**)(__int64))(*v5 + v10))((__int64)v5);
LABEL_15:
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1136LL))(a1) & 1) != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a1 + 1168LL))(a1, a1 + 1064);
    if (v39 != 0) {
      v11 = *(char**)(a1 + 1064);
      v12 = *(char**)(a1 + 1072);
      v13 = v11;
      if (v11 == v12) {
        goto LABEL_36;
      }
      v14 = v12 - v11 - 4;
      v13 = *(char**)(a1 + 1064);
      if ((~(_BYTE)v14 & 0xC) != 0) {
        v15 = ((unsigned __int8)((unsigned int)v14 >> 2) + 1) & 3;
        v13 = *(char**)(a1 + 1064);
        while (*(_DWORD*)v13 != 1) {
          v13 += 4;
          if (--v15 == 0) {
            goto LABEL_22;
          }
        }
      LABEL_36:
        if (v13 == v12) {
          v16 = 0;
        }
        else {
          v16 = (unsigned __int64)(v13 - v11) >> 2;
        }
      }
      else {
      LABEL_22:
        if (v14 >= 0xC) {
          v13 += 8;
          while (1) {
            if (*((_DWORD*)v13 - 2) == 1) {
              v13 -= 8;
              goto LABEL_36;
            }
            if (*((_DWORD*)v13 - 1) == 1) {
              v13 -= 4;
              goto LABEL_36;
            }
            if (*(_DWORD*)v13 == 1) {
              goto LABEL_36;
            }
            if (*((_DWORD*)v13 + 1) == 1) {
              break;
            }
            v18 = v13 + 8;
            v13 += 16;
            if (v18 == v12) {
              goto LABEL_23;
            }
          }
          v13 += 4;
          goto LABEL_36;
        }
      LABEL_23:
        v16 = 0;
      }
    }
    else {
      v12 = *(char**)(a1 + 1072);
      v11 = *(char**)(a1 + 1064);
      v16 = 0;
    }
    BasicMenu_16dd8b0_alt1(a1, (unsigned __int64)(v12 - v11) >> 2, v16);
    LayoutAccessor_1560070_alt1((void*)(&v35_.v35), (__int64*)(a1 + 848),
                                "L_PageTabIcon");
    v37_.v37[0] = GameData_20800d8;
    v37_.v37[1] = a1;
    v19 = *(_QWORD*)a1;
    v37_.v38 = v37_.v37;
    v20 = (*(__int64 (**)(__int64))(v19 + 192))(a1);
    game_menu_PageTab_SetupImage_alt1((int*)(a1 + 656), (__int64)&v35_.v35,
                                      (__int64)v37_.v37, v20, 0xEu, 0xFu);
    if (v37_.v38 == v37_.v37) {
      v21 = 32;
    LABEL_43:
      (*(void (**)(__int64))(*v37_.v38 + v21))((__int64)v37_.v38);
    }
    else if (v37_.v38 != nullptr) {
      v21 = 40;
      goto LABEL_43;
    }
    if (v35_.v36 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v35_.v36);
    }
    v17 = "PageTab_On";
  }
  else {
    v17 = "PageTab_Off";
  }
  GameHr_1562680(a1 + 848, v17, 0x1.0000000000000p+0f);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1032LL))(a1);
  v23 = v39;
  if (v39 != 0) {
    v24 = *(_QWORD*)(a1 + 336);
    if (v24 == v39) {
    LABEL_53:
      v26 = 4;
      if (v24 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 120LL))(v24) & 1) != 0) {
          v26 = 4;
        }
        else {
          v26 = 0;
        }
      }
    }
    else {
      if (v24 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 168LL))(v24);
      }
      *(_QWORD*)(a1 + 336) = v23;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(a1, 0, 1u, 0);
      v25 = *(_QWORD*)(a1 + 336);
      if (v25 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v25 + 160LL))(v25);
        game_IsVibrationEnabled_alt1(
            (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
        v24 = *(_QWORD*)(a1 + 336);
        goto LABEL_53;
      }
      v26 = 4;
    }
    v27 = *(_QWORD**)(a1 + 232);
    v28 = *(_QWORD**)(a1 + 240);
    *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v26;
    if (v27 != v28) {
      v29 = 0;
      do {
        v30 = *v27;
        if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v27 + 48LL))(*v27) & 1) != 0) {
          if (v30 == *(_QWORD*)(a1 + 336)) {
            goto LABEL_65;
          }
          ++v29;
        }
        ++v27;
      } while (v27 != v28);
    }
    v29 = -1;
  LABEL_65:
    if (v29 <= 1) {
      v31 = 1;
    }
    else {
      v31 = v29;
    }
    *(_DWORD*)(a1 + 552) = v31 - 1;
    result = _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(a1, 1, 0, 0);
    v32 = *(_DWORD**)(a1 + 808);
    v33 = *(_DWORD**)(a1 + 816);
    if (v32 != v33) {
      v34 = *(_DWORD*)(a1 + 644);
      do {
        *v32++ = v34;
      } while (v32 != v33);
    }
  }
  *(_BYTE*)(a1 + 1192) = 1;
  return result;
}

__int64 GmapSpotList_167bd90(__int64* a1)
{
  int v2;
  char* v3;
  unsigned int v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 (**v16)();
    __int64 v17;
    unsigned __int64 v18;
    unsigned __int64 v19;
    int v20;
    int v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
  } v16_;

  v2 = (*(__int64 (**)(__int64*))(*a1 + 1128))(a1);
  if ((GameRoutine_16516a0_alt2(v2) & 1) != 0) {
    v3 = "MID_Sys_Unknown";
  }
  else {
    v4 = (*(__int64 (**)(__int64*))(*a1 + 1128))(a1);
    if (v4 > 0xC) {
      v3 = &GameData_1a9f09e;
    }
    else {
      v3 = GameData_2080508[v4];
    }
  }
  v5 = a1 + 106;
  v16_.v22 = -1;
  v16_.v23 = -1;
  v16_.v24 = -1;
  v16_.v25 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v16_.v26 = -1;
  v16_.v27 = -1;
  v16_.v28 = -1;
  v16_.v29 = -1;
  v16_.v30 = -1;
  v16_.v31 = -1;
  v16_.v32 = -1;
  v16_.v33 = -1;
  v16_.v16 = msg_TagSelector_vtable;
  v16_.v17 = 0xFFFF0001FFFF0000LL;
  v16_.v18 = 0xFFFF0004FFFF0002LL;
  v16_.v19 = 0xFFFF0006FFFF0005LL;
  v16_.v34 = 8;
  v16_.v20 = -65529;
  v16_.v21 = -65528;
  v7 = GameRoutine_a4dbe0_alt1(v6, v3, 0);
  if (v7 != nullptr) {
    v8 = (__int64)v7;
    v9 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 106, (__int64)"T_Title");
    if (v9 != 0) {
      GameRoutine_156c5d0_alt1(v9, v8, 0);
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v16_.v16), a1 + 106, "L_Img");
  if (v16_.v17 != 0) {
    v10 = std___1___shared_weak_count_lock_alt1(v16_.v17);
    v11 = (__int64)v16_.v16;
    if (v16_.v17 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v16_.v17);
    }
    if (v10 != 0 && v11 != 0) {
      LayoutAccessor_1562cf0_alt1(v11, "Img02");
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
LABEL_18:
  v12 = a1[107];
  if (v12 != 0) {
    v13 = std___1___shared_weak_count_lock_alt1(v12);
    if (v13 != 0) {
      v14 = v13;
      if (*v5 != 0) {
        ControlCreator_13633c0_alt1(*v5);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
        std___1___shared_weak_count___release_weak_alt1(v14);
      }
    }
  }
  return (*(__int64 (**)(__int64*))(*a1 + 1160))(a1);
}

__int64 GmapSpotList_167bf80(_QWORD* a1)
{
  char v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  bool v15;
  char v16;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 472LL))(a1) & 1) != 0) {
    goto LABEL_2;
  }
  v3 = (__int64*)a1[74];
  v4 = (__int64*)a1[75];
  if (v3 == v4) {
    goto LABEL_43;
  }
  do {
    while (1) {
      v5 = *v3;
      if (*v3 != -1 && game_gameui_MenuAnimator_instance_ != 0) {
        break;
      }
      if (++v3 == v4) {
        goto LABEL_43;
      }
    }
    v15 = v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
          v5 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
    v16 = v15;
    if (v15) {
      break;
    }
    ++v3;
  } while (v3 != v4);
  if ((v16 & 1) != 0) {
  LABEL_2:
    v2 = 0;
  }
  else {
  LABEL_43:
    v2 = GameData_225e7a0;
    if (GameData_225e7a0 != 0) {
      v2 = *(_BYTE*)(GameData_225e7a0 + 408);
    }
  }
  return v2 & 1;
}

_QWORD* GmapSpotList_Unknown145(_QWORD* a1)
{
  __int64 v1;
  int v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  _QWORD* result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64 v14;
  int v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  _QWORD v22[3];

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = a1[19];
  v3 = BasicMenu_16dd280(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20_.v20[0] = GameData_2080158;
  v20_.v20[1] = a1;
  v20_.v21 = v20_.v20;
  if (GameData_225e7a0 != 0) {
    v5 = 32;
    v6 = v20_.v20;
  LABEL_3:
    (*(void (**)(_QWORD*, __int64))(*v6 + v5))(v6, v4),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_4;
  }
  v15 = v3;
  v16 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    v1 = (__int64)a1;
  }
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *v17 = 0;
  v18 = (__int64)v17;
  v22[0] = v17;
  v22[1] = v17 + 1;
  v22[2] = v17 + 1;
  GameHr_167f810(v1, 0, (__int64)v22, 0, v15, (__int64)v20_.v20),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v16 + v19, v18),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = v20_.v21;
  if (v20_.v21 == v20_.v20) {
    v5 = 32;
    goto LABEL_3;
  }
  if (v20_.v21 != nullptr) {
    v5 = 40;
    goto LABEL_3;
  }
LABEL_4:
  v8 = (*(__int64 (**)(_QWORD*))(*a1 + 1128LL))(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = v20_.v20;
  v20_.v20[0] = GameData_20802d8;
  v20_.v20[1] = a1;
  v10 = GameData_225e7a0;
  v20_.v21 = v20_.v20;
  if (GameData_225e7a0 == 0) {
  LABEL_15:
    v14 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v14))(result,
                                                                       v7);
  }
  v11 = *(_QWORD*)(GameData_225e7a0 + 192);
  v12 = *(_QWORD*)(GameData_225e7a0 + 200);
  *(_BYTE*)(GameData_225e7a0 + 224) = v8 != 1;
  if (v11 == v12) {
    result = v20_.v20;
    goto LABEL_15;
  }
  do {
    if (*(_BYTE*)(v10 + 224) == 1) {
      v22[0] = *(_QWORD*)v11;
      if (v20_.v21 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v13 =
          (*(__int64 (**)(_QWORD*, _QWORD*))(*v20_.v21 + 48LL))(v20_.v21, v22),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v7 = COERCE_AS(__typeof__(v7),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v13 = *(_QWORD*)(v10 + 352) == *(_QWORD*)v11;
    }
    *(_BYTE*)(v11 + 36) = v13 & 1;
    v11 += 96;
  } while (v11 != v12);
  result = v20_.v21;
  if (v20_.v21 == v20_.v20) {
    goto LABEL_15;
  }
  if (v20_.v21 == nullptr) {
    return result;
  }
  v14 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v14))(result,
                                                                     v7);
}

__int64 GmapSpotList_167c6c0(_QWORD* a1)
{
  __int64 result;
  _DWORD* v3;
  unsigned __int64 v4;
  char* v5;
  int v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  char* v29;
  char* v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  char* v34;
  char* v35;
  char* v36;
  char* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  char* v42;
  char* v43;

  result = (*(__int64 (**)(_QWORD*))(*a1 + 1144LL))(a1);
  if ((result & 1) == 0) {
    v5 = (char*)a1[134];
    v6 = 0;
    v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v8 = a1[135];
      if ((unsigned __int64)v5 < v8) {
        *(_DWORD*)v5 = v6;
        v5 += 4;
      }
      else {
        v9 = a1[133];
        v10 = &v5[-v9];
        v11 = (__int64)&v5[-v9] >> 2;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 62 != 0) {
          goto LABEL_112;
        }
        v13 = v8 - v9;
        if (v13 >> 1 > v12) {
          v12 = v13 >> 1;
        }
        if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFFCLL) {
          v14 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v12;
        }
        if (v14 != 0) {
          if (v14 >> 62 != 0) {
            goto LABEL_113;
          }
          v15 = fw_memory_HeapManager_Allocate(*v7, 4 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + 4 * v14;
        v17 = &v5[-v9];
        v18 = (__int64)&v10[v15 + -4 * v11];
        *(_DWORD*)&v10[v15] = v6;
        v5 = &v10[v15 + 4];
        result = memcpy(v18, v9, v17);
        a1[133] = v18;
        a1[134] = v5;
        a1[135] = v16;
        if (v9 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*v7 + 200LL) == 0) {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v7 + v19, v9);
        }
      }
      ++v6;
      a1[134] = v5;
    } while (v6 != 13);
    if (game_GameModeData_instance_ != 0) {
      v20 = (char*)a1[133];
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        if (v20 != v5) {
          while (*(_DWORD*)v20 != 7) {
            v20 += 4;
            if (v20 == v5) {
              goto LABEL_57;
            }
          }
        }
        if (v20 == v5 || (v30 = v20 + 4, v20 + 4 == v5)) {
        LABEL_55:
          if (v20 != v5) {
            v5 = v20;
            a1[134] = v20;
          }
        LABEL_57:
          v31 = (__int64*)a1[32];
          v32 = (__int64*)a1[33];
          if (v31 == v32) {
          LABEL_60:
            v34 = (char*)a1[133];
            if (v34 != v5) {
              while (*(_DWORD*)v34 != 0) {
                v34 += 4;
                if (v34 == v5) {
                  goto LABEL_73;
                }
              }
            }
            if (v34 != v5) {
              v35 = v34 + 4;
              if (v34 + 4 != v5) {
                do {
                  if (*(_DWORD*)v35 != 0) {
                    *(_DWORD*)v34 = *(_DWORD*)v35;
                    v34 += 4;
                  }
                  v35 += 4;
                } while (v35 != v5);
                v5 = (char*)a1[134];
              }
            }
            if (v34 != v5) {
              v5 = v34;
              a1[134] = v34;
            }
          }
          else {
            while (1) {
              v33 = *v31++;
              if (*(_DWORD*)(v33 + 96) != 6) {
                break;
              }
              if (v31 == v32) {
                goto LABEL_60;
              }
            }
          }
        LABEL_73:
          if (game_GameModeData_instance_ == 0 ||
              *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 &&
                  *(_BYTE*)(game_GameModeData_instance_ + 15) != 1) {
            v36 = (char*)a1[133];
            if (v36 != v5) {
              while (*(_DWORD*)v36 != 12) {
                v36 += 4;
                if (v36 == v5) {
                  goto LABEL_95;
                }
              }
            }
            if (v36 != v5) {
              v37 = v36 + 4;
              if (v36 + 4 != v5) {
                do {
                  if (*(_DWORD*)v37 != 12) {
                    *(_DWORD*)v36 = *(_DWORD*)v37;
                    v36 += 4;
                  }
                  v37 += 4;
                } while (v37 != v5);
                v5 = (char*)a1[134];
              }
            }
            if (v36 != v5) {
              v5 = v36;
              a1[134] = v36;
            }
          }
        LABEL_95:
          if (game_GameModeData_instance_ == 0 ||
              *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 &&
                  *(_BYTE*)(game_GameModeData_instance_ + 15) != 1) {
            v42 = (char*)a1[133];
            if (v42 != v5) {
              while (*(_DWORD*)v42 != 10) {
                v42 += 4;
                if (v42 == v5) {
                  return result;
                }
              }
            }
            if (v42 != v5) {
              v43 = v42 + 4;
              if (v42 + 4 != v5) {
                do {
                  if (*(_DWORD*)v43 != 10) {
                    *(_DWORD*)v42 = *(_DWORD*)v43;
                    v42 += 4;
                  }
                  v43 += 4;
                } while (v43 != v5);
                v5 = (char*)a1[134];
              }
            }
            if (v42 != v5) {
              a1[134] = v42;
            }
          }
          return result;
        }
        do {
          if (*(_DWORD*)v30 != 7) {
            *(_DWORD*)v20 = *(_DWORD*)v30;
            v20 += 4;
          }
          v30 += 4;
        } while (v30 != v5);
      LABEL_54:
        v5 = (char*)a1[134];
        goto LABEL_55;
      }
    }
    else {
      v20 = (char*)a1[133];
    }
    if (v20 != v5) {
      while (*(_DWORD*)v20 != 8) {
        v20 += 4;
        if (v20 == v5) {
          goto LABEL_57;
        }
      }
    }
    if (v20 == v5) {
      goto LABEL_55;
    }
    v29 = v20 + 4;
    if (v20 + 4 == v5) {
      goto LABEL_55;
    }
    do {
      if (*(_DWORD*)v29 != 8) {
        *(_DWORD*)v20 = *(_DWORD*)v29;
        v20 += 4;
      }
      v29 += 4;
    } while (v29 != v5);
    goto LABEL_54;
  }
  result = (*(__int64 (**)(_QWORD*))(*a1 + 1152LL))(a1);
  v3 = (_DWORD*)a1[134];
  v4 = a1[135];
  if ((unsigned __int64)v3 >= v4) {
    v21 = a1[133];
    v22 = (char*)v3 - v21;
    v23 = ((__int64)v3 - v21) >> 2;
    v24 = v23 + 1;
    if ((unsigned __int64)(v23 + 1) >> 62 != 0) {
    LABEL_112:
      GameRoutine_167e010();
    }
    v25 = v4 - v21;
    if (v25 >> 1 > v24) {
      v24 = v25 >> 1;
    }
    if ((unsigned __int64)v25 >= 0x7FFFFFFFFFFFFFFCLL) {
      v26 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v26 = v24;
    }
    if (v26 != 0) {
      if (v26 >> 62 != 0) {
      LABEL_113:
        GameRoutine_60a210(result);
      }
      v27 = result;
      v28 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v26, 16, 0);
      LODWORD(result) = v27;
    }
    else {
      v28 = 0;
    }
    v38 = v28 + 4 * v26;
    v39 = (__int64)&v22[v28 + -4 * v23];
    *(_DWORD*)&v22[v28] = result;
    v40 = (__int64)&v22[v28 + 4];
    result = memcpy(v39, v21, v22);
    a1[133] = v39;
    a1[134] = v40;
    a1[135] = v38;
    if (v21 != 0) {
      v41 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v41 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v21);
    }
    a1[134] = v40;
  }
  else {
    *v3 = result;
    a1[134] = v3 + 1;
  }
  return result;
}

__int64 GmapSpotList_Unknown100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if (*(_BYTE*)(a1 + 1176) != 1) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    return 1;
  }
  v2 = __dynamic_cast(v1, GameData_212e008[0], &GameData_207fdb0, 0);
  if (v2 == 0) {
    return 1;
  }
  v3 = v2;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 464LL))(v2) & 1) == 0) {
    return 1;
  }
  GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16),
                      *(_QWORD*)(v3 + 88) + 32LL);
  return 4;
}

__int64 game_gmap_GmapSpotList_BCall(__int64 a1)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  if (*(_BYTE*)(a1 + 1176) != 1) {
    v6_.v6[0] = GameData_20801d8;
    v6_.v7 = v6_.v6;
    v8_.v9 = v8_.v8;
    v8_.v8[0] = GameData_20801d8;
    GameRoutine_654050_alt1(v8_.v8, (_QWORD*)(a1 + 288));
    if (v8_.v9 == v8_.v8) {
      v4 = 32;
    }
    else {
      if (v8_.v9 == nullptr) {
        goto LABEL_9;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
  LABEL_9:
    if (v6_.v7 == v6_.v6) {
      v5 = 32;
    }
    else {
      if (v6_.v7 == nullptr) {
        return 5;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
    return 5;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 208LL))(result);
  }
  return result;
}

__int64 GmapSpotList_167ce30(long double a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  bool v4;
  int v5;

  v1 = GameData_225e7a0;
  if (GameData_225e7a0 != 0) {
    v2 = *(_DWORD*)(GameData_225e7a0 + 300);
    v3 = *(_QWORD*)(GameData_225e7a0 + 352);
    v4 = v2 < -1;
    v5 = ((_BYTE)v2 + 1) & 1;
    if (v4) {
      v5 = -v5;
    }
    *(_DWORD*)(GameData_225e7a0 + 300) = v5;
    GameRoutine_167fe20(v1, v3, a1);
  }
  return 13;
}

__int64 game_gmap_GmapSpotList_ZRCall(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD v5[4];
  _QWORD* v6;
  _QWORD v7[4];
  _QWORD* v8;

  if (*(_BYTE*)(a1 + 1176) != 1) {
    if (GameData_21f3d10 == 0 || *(_BYTE*)(GameData_21f3d10 + 9) != 1 ||
        *(_DWORD*)(GameData_21f3d10 + 136) != 0 ||
        (GameRoutine_16962f0(a1) & 1) == 0) {
      return 0;
    }
    v5[0] = GameData_2080258;
    v6 = v5;
    v8 = v7;
    v7[0] = GameData_2080258;
    GameRoutine_654050(v7, a1 + 288);
    if (v8 == v7) {
      v3 = 32;
    }
    else {
      if (v8 == nullptr) {
        goto LABEL_15;
      }
      v3 = 40;
    }
    (*(void (**)(void*))(*v8 + v3))(v8);
  LABEL_15:
    if (v6 == v5) {
      v4 = 32;
    }
    else {
      if (v6 == nullptr) {
        return 3;
      }
      v4 = 40;
    }
    (*(void (**)(void*))(*v6 + v4))(v6);
    return 3;
  }
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 272LL))(result);
  }
  return result;
}

__int64 GmapSpotList_167cfa0(_QWORD* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  char* v19;
  char* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  char v25;
  unsigned __int64 v26[4];

  if (*(char**)(*(_QWORD*)(*a1 - 8LL) + 8LL) != "N4game4gmap12GmapSpotListE") {
    return 0;
  }
  v26[2] = v1;
  v26[3] = v2;
  v5 = a1[42];
  v6 = GameData_2130e20;
  if (v5 == 0) {
    goto LABEL_28;
  }
  v7 = __dynamic_cast(v5, GameData_212e008[0], &GameData_207fdb0, 0);
  if (v7 == 0) {
    goto LABEL_28;
  }
  v8 = (_QWORD*)v7;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 464LL))(v7) & 1) == 0) {
    goto LABEL_28;
  }
  v9 = v8[11];
  v11 = *(char**)(*(_QWORD*)v6 + 8LL);
  v10 = *(char**)(*(_QWORD*)v6 + 16LL);
  if (v11 != v10) {
    v12 = v10 - v11 - 8;
    if ((~(_BYTE)v12 & 0x18) != 0) {
      v13 = ((unsigned __int8)((unsigned int)v12 >> 3) + 1) & 3;
      while (*(_QWORD*)v11 != v9) {
        v11 += 8;
        if (--v13 == 0) {
          goto LABEL_11;
        }
      }
    }
    else {
    LABEL_11:
      if (v12 < 0x18) {
        goto LABEL_25;
      }
      v11 += 16;
      while (1) {
        if (*((_QWORD*)v11 - 2) == v9) {
          v11 -= 16;
          goto LABEL_22;
        }
        if (*((_QWORD*)v11 - 1) == v9) {
          v11 -= 8;
          goto LABEL_22;
        }
        if (*(_QWORD*)v11 == v9) {
          goto LABEL_22;
        }
        if (*((_QWORD*)v11 + 1) == v9) {
          break;
        }
        v14 = v11 + 16;
        v11 += 32;
        if (v14 == v10) {
          goto LABEL_25;
        }
      }
      v11 += 8;
    }
  }
LABEL_22:
  if (v11 == v10) {
  LABEL_25:
    if ((game_gmap_1520a70(v9) & 1) != 0) {
      goto LABEL_26;
    }
    goto LABEL_28;
  }
  if ((game_gmap_1520ea0(v9) & 1) != 0) {
  LABEL_26:
    (*(void (**)(_QWORD*))(*v8 + 96LL))(v8);
    GameHr_1679140((__int64)v8);
    v15 = GameData_225e7a0;
    if (GameData_225e7a0 != 0) {
      GameRoutine_16824c0_alt1(GameData_225e7a0);
      GameRoutine_1683020_alt1(*(__int64**)(v15 + 168));
    }
  }
LABEL_28:
  v26[1] = (unsigned __int64)&GameData_1ab98e9;
  v26[0] = game_HashString_alt1((__int64)&GameData_1ab98e9);
  if (game_GameModeData_instance_ != 0 &&
      (v16 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48), v26)) != 0) {
    v17 = *(_DWORD*)(v16 + 32);
  }
  else {
    v17 = 5;
  }
  v18 = a1[42];
  v20 = *(char**)(*(_QWORD*)v6 + 8LL);
  v19 = *(char**)(*(_QWORD*)v6 + 16LL);
  v21 = (unsigned __int64)(v19 - v20) >> 3;
  if (v18 != 0 &&
      (v22 = __dynamic_cast(v18, GameData_212e008[0], &GameData_207fdb0, 0)) !=
          0 &&
      (v23 = *(_QWORD*)(v22 + 88)) != 0) {
    if (v20 == v19) {
    LABEL_38:
      v20 = v19;
    }
    else {
      while (*(_QWORD*)v20 != v23) {
        v20 += 8;
        if (v20 == v19) {
          goto LABEL_38;
        }
      }
    }
    if (v20 == v19 && v17 == (_DWORD)v21) {
      v25 = 2;
    }
    else {
      v25 = 0;
    }
  }
  else {
    v25 = 1;
  }
  GameRoutine_1567760_alt1((__int64)"Pin", v17 - v21, v25);
  return 0;
}

__n128 GmapSpotList_167d280(__int64 a1, unsigned int a2)
{
  __n128 result;
  __int64 v5;
  __int64 v6;

  game_menu_BasicMenu_Unknown31();
  *(struct PseudoSret*)(&v5) =
      LayoutAccessor_1560070(a1 + 848, "L_SpotDetail/L_KeyHelp");
  GameRoutine_159dda0(&v5, a2, 0);
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

__int64 GmapSpotList_167d2e0(int* a1, int a2, char a3)
{
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  char v10;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (a1[164] < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move_alt1(a1 + 164, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  game_menu_BasicMenu_Unknown16de4d0_alt1((__int64)a1),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = (*(__int64 (**)(int*))(*(_QWORD*)a1 + 1128LL))(a1),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = v13_.v13;
  v13_.v13[0] = GameData_20802d8;
  v13_.v13[1] = a1;
  v13_.v14 = v13_.v13;
  v7 = GameData_225e7a0;
  if (GameData_225e7a0 == 0) {
    goto LABEL_16;
  }
  v8 = *(__int64**)(GameData_225e7a0 + 192);
  v9 = *(__int64**)(GameData_225e7a0 + 200);
  *(_BYTE*)(GameData_225e7a0 + 224) = v5 != 1;
  if (v8 == v9) {
    v6 = v13_.v13;
  LABEL_16:
    v12 = 32;
    goto LABEL_17;
  }
  do {
    if (*(_BYTE*)(v7 + 224) == 1) {
      v15 = *v8;
      if (v13_.v14 == nullptr) {
        GameRoutine_60a310_alt1(),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v10 = (*(__int64 (**)(_QWORD*, __int64*))(*v13_.v14 + 48LL))(v13_.v14,
                                                                   &v15),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v10 = *(_QWORD*)(v7 + 352) == *v8;
    }
    *((_BYTE*)v8 + 36) = v10 & 1;
    v8 += 12;
  } while (v8 != v9);
  v6 = v13_.v14;
  if (v13_.v14 == v13_.v13) {
    goto LABEL_16;
  }
  if (v13_.v14 != nullptr) {
    v12 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*, __int64))(*v6 + v12))(v6, v4),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return 13;
}

__int64 GmapSpotList_167d440(__int64 a1, __int64 a2, char a3)
{
  __int64 v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  char v11;
  __int64 v13;
  _QWORD v14[4];
  _QWORD* v15;
  __int64 v16;

  if (*(int*)(a1 + 480) < 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 480, a2, a3 & 1) & 1) == 0) {
    return 14;
  }
  v4 = a1 - 176;
  game_menu_BasicMenu_Unknown16de4d0(v4);
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
  v7 = v14;
  v14[0] = GameData_20802d8;
  v14[1] = v4;
  v15 = v14;
  v8 = GameData_225e7a0;
  if (GameData_225e7a0 == 0) {
    goto LABEL_16;
  }
  v9 = *(__int64**)(GameData_225e7a0 + 192);
  v10 = *(__int64**)(GameData_225e7a0 + 200);
  *(_BYTE*)(GameData_225e7a0 + 224) = v6 != 1;
  if (v9 == v10) {
    v7 = v14;
  LABEL_16:
    v13 = 32;
    goto LABEL_17;
  }
  do {
    if (*(_BYTE*)(v8 + 224) == 1) {
      v16 = *v9;
      if (v15 == nullptr) {
        GameRoutine_60a310(0, v5);
      }
      v11 = (*(__int64 (**)(_QWORD*, __int64*))(*v15 + 48LL))(v15, &v16);
    }
    else {
      v11 = *(_QWORD*)(v8 + 352) == *v9;
    }
    *((_BYTE*)v9 + 36) = v11 & 1;
    v9 += 12;
  } while (v9 != v10);
  v7 = v15;
  if (v15 == v14) {
    goto LABEL_16;
  }
  if (v15 != nullptr) {
    v13 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*, __int64))(*v7 + v13))(v7, v5);
  }
  return 13;
}

__int64 GmapSpotList_167d5a0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  bool v16;
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
  GameRoutine_1678f00((__int64)v3, 0);
  v4 = a1[43];
  *v3 = game_gmap_GmapSpotEmptyMenuItem_vtable;
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  v3[1] = a1;
  a1[43] = v3;
  v5 = *(_QWORD*)(GameData_21c9700 + 8);
  v6 = *(__int64**)(v5 + 48);
  v7 = *(__int64**)(v5 + 56);
  while (v6 != v7) {
    v8 = *v6;
    if (*(_BYTE*)(*v6 + 176) != 1 && *(_QWORD*)(v8 + 120) != 0 &&
        (unsigned __int8)Impl_13261c0(*v6) != 13 &&
        (unsigned __int8)Impl_13261c0(v8) != 12 &&
        (unsigned __int8)Impl_13261c0(v8) != 11) {
      v9 = fw_memory_HeapManager_Allocate(*v2, 288, 16, 0);
      GameRoutine_1678f00(v9, *v6);
      BasicMenuCursor_16e0c00(a1, v9);
    }
    ++v6;
  }
  v11 = a1[32];
  v10 = a1[33];
  if ((v10 - v11) >> 3 < 129) {
    v15 = 0;
    return GameRoutine_167e820(v11, v10, (v10 - v11) >> 3, 0, v15);
  }
  else {
    v12 = (v10 - v11) >> 3;
    v13 = GameData_212c060;
    while (1) {
      v14 = GameRoutine_1a09d20(8 * v12, v13);
      if (v14 != 0) {
        break;
      }
      v15 = v12 >> 1;
      v16 = v12 > 1;
      v12 >>= 1;
      if (!v16) {
        return GameRoutine_167e820(v11, v10, (v10 - v11) >> 3, 0, v15);
      }
    }
    v18 = v14;
    GameRoutine_167e820(v11, v10, (v10 - v11) >> 3, v14, v12);
    v19 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v2 + v19, v18);
  }
}

bool game_gmap_GmapSpotList_OnInit_lambda0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 1184LL);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 88LL);
  if (v3 == v2) {
    **(_QWORD**)(a1 + 16) = *(_QWORD*)a2;
  }
  return v3 == v2;
}

__int64 game_gmap_GmapSpotList_OnInit_lambda1_Invoke(__int64 a1, __int64* a2,
                                                     int* a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *a3;
  v5 = *a2;
  if (*(_DWORD*)(*(_QWORD*)(v3 + 1064) + 4 * v4) == 10) {
    v6 = 10;
    return GameRoutine_1843710(v5, v6);
  }
  result = GameRoutine_16516a0();
  if ((result & 1) == 0) {
    v6 = *(unsigned int*)(*(_QWORD*)(v3 + 1064) + 4 * v4);
    return GameRoutine_1843710(v5, v6);
  }
  if (v5 != 0) {
    return GameRoutine_136a920(ui_Manager_instance_ + 1264, v5, 0, 7,
                               "IconPageTab_GmapSight");
  }
  return result;
}

bool game_gmap_GmapSpotList_UpdateMapTargetSpot_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 232);
  v4 = *(_QWORD*)(v2 + 240);
  if (v3 != v4) {
    while (*(_QWORD*)(*(_QWORD*)v3 + 88LL) != *a2) {
      v3 += 8;
      if (v3 == v4) {
        v3 = v4;
        return v3 != v4;
      }
    }
  }
  return v3 != v4;
}

__int64 GmapSpotList_167e820(__int64 result, __int64* a2, unsigned __int64 a3,
                             __int64* a4, __int64 a5)
{
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;

  if (a3 >= 2) {
    v6 = (__int64*)result;
    if (a3 == 2) {
      result = GmapSpotList_167ea80(*(_QWORD*)(*(a2 - 1) + 88),
                                    *(_QWORD*)(*(_QWORD*)result + 88LL));
      if ((result & 1) != 0) {
        v7 = *v6;
        *v6 = *(a2 - 1);
        *(a2 - 1) = v7;
      }
    }
    else if ((__int64)a3 > 128) {
      v16 = a3 >> 1;
      v17 = a4;
      v18 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        GmapSpotList_167ece0(result, (__int64*)(result + 8 * v16), a3 >> 1, a4);
        v21 = &v17[v16];
        result = GmapSpotList_167ece0((__int64)&v6[v16], a2, v18, v21);
        v22 = &v17[a3];
        v23 = v21;
        while (v23 != v22) {
          result = GmapSpotList_167ea80(*(_QWORD*)(*v23 + 88),
                                        *(_QWORD*)(*v17 + 88));
          if ((result & 1) != 0) {
            v24 = v23;
          }
          else {
            v24 = v17;
          }
          if ((result & 1) != 0) {
            v25 = 0;
          }
          else {
            v25 = 8;
          }
          v26 = *v24;
          v17 = (__int64*)((char*)v17 + v25);
          if ((result & 1) != 0) {
            v27 = 8;
          }
          else {
            v27 = 0;
          }
          v23 = (__int64*)((char*)v23 + v27);
          *v6++ = v26;
          if (v17 == v21) {
            while (v23 != v22) {
              v29 = *v23++;
              *v6++ = v29;
            }
            return result;
          }
        }
        while (v17 != v21) {
          v28 = *v17++;
          *v6++ = v28;
        }
      }
      else {
        GmapSpotList_167e820(result, (__int64*)(result + 8 * v16), a3 >> 1, a4,
                             a5);
        GmapSpotList_167e820((__int64)&v6[v16], a2, v18, v17, a5);
        return GmapSpotList_167ef20((__int64)v6, &v6[v16], a2, v16, v18,
                                    (__int64)v17, a5);
      }
    }
    else if ((__int64*)result != a2) {
      v8 = (__int64*)(result + 8);
      if ((__int64*)(result + 8) != a2) {
        v9 = 0;
        v10 = (__int64*)result;
        do {
          v13 = *v10;
          v12 = v10[1];
          v10 = v8;
          result =
              GmapSpotList_167ea80(*(_QWORD*)(v12 + 88), *(_QWORD*)(v13 + 88));
          if ((result & 1) != 0) {
            v14 = *v10;
            v15 = v9;
            do {
              *(__int64*)((char*)v6 + v15 + 8) = *(__int64*)((char*)v6 + v15);
              if (v15 == 0) {
                v11 = v6;
                goto LABEL_11;
              }
              result = GmapSpotList_167ea80(
                  *(_QWORD*)(v14 + 88),
                  *(_QWORD*)(*(__int64*)((char*)v6 + v15 - 8) + 88));
              v15 -= 8;
            } while ((result & 1) != 0);
            v11 = (__int64*)((char*)v6 + v15 + 8);
          LABEL_11:
            *v11 = v14;
          }
          v8 = v10 + 1;
          v9 += 8;
        } while (v10 + 1 != a2);
      }
    }
  }
  return result;
}

__int64 GmapSpotList_167ea80(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  int v11;
  unsigned int v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int8 v15;
  unsigned __int8 v16;
  unsigned __int8 v17;
  __int64 v18;
  int v19;
  char v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  bool v26;
  unsigned __int8 v27;
  __int64 v28;
  int v29;
  char v30;
  __int64 v31;
  unsigned int v32;
  unsigned int v33;

  result = 0;
  if (a1 != 0 && a2 != 0) {
    v5 = *(_QWORD*)(GameData_21c96e8 + 8);
    v6 = *(_QWORD**)(v5 + 8);
    v7 = *(_QWORD**)(v5 + 16);
    if (v6 == v7) {
    LABEL_20:
      v15 = Impl_13261c0(a1);
      v16 = Impl_13261c0(a2);
      if (v15 == 5 && v16 == 5) {
        v17 = Impl_13261c0(a1);
        v18 = *(_QWORD*)(a1 + 144);
        v19 = v17;
        v20 = Impl_13261c0(a2);
        result = 0;
        if (v19 != 5) {
          return result;
        }
        if (v18 == 0) {
          return result;
        }
        if (v20 != 5) {
          return result;
        }
        v21 = *(_QWORD*)(a2 + 144);
        if (v21 == 0) {
          return result;
        }
        v22 = *(unsigned __int8*)(*(_QWORD*)v18 + 32LL);
        v23 = *(unsigned __int8*)(*(_QWORD*)v21 + 32LL);
        if (v22 == 1 && v23 != 1) {
          return 1;
        }
        v26 = v22 != 1 && v23 == 1 || v22 >= v23;
      }
      else if (v15 == 6 && v16 == 6) {
        v27 = Impl_13261c0(a1);
        v28 = *(_QWORD*)(a1 + 152);
        v29 = v27;
        v30 = Impl_13261c0(a2);
        result = 0;
        if (v29 != 6) {
          return result;
        }
        if (v28 == 0) {
          return result;
        }
        if (v30 != 6) {
          return result;
        }
        v31 = *(_QWORD*)(a2 + 152);
        if (v31 == 0) {
          return result;
        }
        v26 = *(unsigned __int8*)(*(_QWORD*)v28 + 81LL) >=
              (unsigned int)*(unsigned __int8*)(*(_QWORD*)v31 + 81LL);
      }
      else {
        if (v15 > 0xEu) {
          v32 = 1;
        }
        else {
          v32 = GameData_1bee190[v15];
        }
        if (v16 > 0xEu) {
          v33 = 1;
        }
        else {
          v33 = GameData_1bee190[v16];
        }
        v26 = v32 >= v33;
      }
      return !v26;
    }
    v8 = v6;
    do {
      v9 = (_QWORD*)*v8;
      if (*(_QWORD*)*v8 == a1) {
        v10 = v9[12];
        if (v10 != 0 && (unsigned int)*(unsigned __int8*)(v10 + 32) - 3 < 2) {
          LODWORD(v9) = (v9[68] & 8) != 0;
          v11 = 1;
          goto LABEL_11;
        }
      }
      ++v8;
    } while (v8 != v7);
    v11 = 0;
  LABEL_11:
    v12 = v11 & (unsigned int)v9;
    do {
      v13 = (_QWORD*)*v6;
      if (*(_QWORD*)*v6 == a2) {
        v14 = v13[12];
        if (v14 != 0 && (unsigned int)*(unsigned __int8*)(v14 + 32) - 3 < 2) {
          result = (v13[68] & 8) != 0;
          if (v12 == (_DWORD)result) {
            goto LABEL_20;
          }
          return result;
        }
      }
      ++v6;
    } while (v6 != v7);
    if ((v12 & 1) == 0) {
      goto LABEL_20;
    }
    return 0;
  }
  return result;
}

__int64 GmapSpotList_167ece0(__int64 result, __int64* a2, unsigned __int64 a3,
                             __int64* a4)
{
  __int64* v4;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  if (a3 != 0) {
    v4 = a4;
    v6 = (__int64*)result;
    if (a3 == 2) {
      result = GmapSpotList_167ea80(*(_QWORD*)(*(a2 - 1) + 88),
                                    *(_QWORD*)(*(_QWORD*)result + 88LL));
      if ((result & 1) != 0) {
        *v4 = *(a2 - 1);
        v7 = *v6;
      }
      else {
        *v4 = *v6;
        v7 = *(a2 - 1);
      }
      v4[1] = v7;
    }
    else if (a3 == 1) {
      *a4 = *(_QWORD*)result;
    }
    else if ((__int64)a3 > 8) {
      v15 = a3 >> 1;
      v17 = (__int64*)(result + 8 * (a3 >> 1));
      v18 = 8 * (a3 >> 1);
      GameRoutine_167e820(result, v17, v15, a4, v15);
      result =
          GameRoutine_167e820((__int64)v17, a2, a3 - v15, &v4[v15], a3 - v15);
      if (v18 != 0) {
        v19 = v17;
        while (v19 != a2) {
          result =
              GmapSpotList_167ea80(*(_QWORD*)(*v19 + 88), *(_QWORD*)(*v6 + 88));
          if ((result & 1) != 0) {
            v20 = v19;
          }
          else {
            v20 = v6;
          }
          if ((result & 1) != 0) {
            v21 = 8;
          }
          else {
            v21 = 0;
          }
          v22 = *v20;
          v19 = (__int64*)((char*)v19 + v21);
          if ((result & 1) != 0) {
            v23 = 0;
          }
          else {
            v23 = 8;
          }
          v6 = (__int64*)((char*)v6 + v23);
          *v4++ = v22;
          if (v6 == v17) {
            goto LABEL_41;
          }
        }
        while (v6 != v17) {
          v24 = *v6++;
          *v4++ = v24;
        }
      }
      else {
        v19 = v17;
      LABEL_41:
        while (v19 != a2) {
          v25 = *v19++;
          *v4++ = v25;
        }
      }
    }
    else if ((__int64*)result != a2) {
      v8 = (__int64*)(result + 8);
      *a4 = *(_QWORD*)result;
      if ((__int64*)(result + 8) != a2) {
        v9 = 0;
        v10 = a4;
        v11 = a4;
        do {
          v12 = *v11++;
          result =
              GmapSpotList_167ea80(*(_QWORD*)(*v8 + 88), *(_QWORD*)(v12 + 88));
          if ((result & 1) != 0) {
            v13 = v4;
            v10[1] = *v10;
            if (v10 != v4) {
              v14 = v9;
              while (1) {
                v13 = (__int64*)((char*)v4 + v14);
                result = GmapSpotList_167ea80(
                    *(_QWORD*)(*v8 + 88),
                    *(_QWORD*)(*(__int64*)((char*)v4 + v14 - 8) + 88));
                if ((result & 1) == 0) {
                  break;
                }
                v14 -= 8;
                *v13 = *(v13 - 1);
                if (v14 == 0) {
                  v13 = v4;
                  break;
                }
              }
            }
            *v13 = *v8;
          }
          else {
            *v11 = *v8;
          }
          ++v8;
          v9 += 8;
          v10 = v11;
        } while (v8 != a2);
      }
    }
  }
  return result;
}

__int64 game_gmap_GmapSpotList_SortAndFilter_lambda0_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 result;
  int v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int8 v10;
  int v11;

  result = *(_QWORD*)(*(_QWORD*)a2 + 88LL);
  if (result != 0) {
    v4 = *(_DWORD*)(a1 + 8);
    if (v4 != 0) {
      v5 = *(_QWORD*)(GameData_21c96e8 + 8);
      v6 = *(_QWORD**)(v5 + 8);
      v7 = *(_QWORD**)(v5 + 16);
      while (v6 != v7) {
        v8 = (_QWORD*)*v6;
        if (*(_QWORD*)*v6 == result) {
          v9 = v8[12];
          if (v9 != 0 && (unsigned int)*(unsigned __int8*)(v9 + 32) - 3 < 2) {
            if ((v8[68] & 8) != 0) {
              return 0;
            }
            break;
          }
        }
        ++v6;
      }
      v10 = Impl_13261c0(result);
      if (v10 > 0xEu) {
        v11 = 1;
      }
      else {
        v11 = GameData_1bee190[v10];
      }
      return v4 == v11;
    }
    else {
      return *(_DWORD*)(*(_QWORD*)a2 + 96LL) != 6;
    }
  }
  return result;
}

#pragma GCC visibility pop
