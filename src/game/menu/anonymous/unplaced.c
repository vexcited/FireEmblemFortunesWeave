#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BasicMenuCursor_16e0c00(_QWORD* result, __int64);
_QWORD* GameRoutine_658c00(_QWORD* result);
_QWORD* RouteMenuItem_166e340(__int64, char**, __int64*, __int64*, __int64*,
                              __int64, __int64, __int64, __int64);
__attribute__((swiftcall)) void GameRoutine_17d8b50(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void GameRoutine_17d8c30(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void GameRoutine_17d8d20(PSEUDO_X8, int, __int64);
__attribute__((swiftcall)) void GameSituation_906320(PSEUDO_X8, __int64,
                                                     __int64*);
__attribute__((swiftcall)) void
    GameSituation_906320_alt1(PSEUDO_X8, _QWORD,
                              _QWORD) __asm__("GameSituation_906320");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__int64* game_Tutorial_CreateBind(__int64, __int64*);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157ac20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1583b80(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(__int64, __int64, __int64, __int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_717fc0(unsigned __int64*, int);
__int64 GameRoutine_91bc00(__int64);
__int64 GameRoutine_91bea0(__int64);
__int64 GameRoutine_94c220(_QWORD);
__int64 GameRoutine_94cab0(_QWORD);
__int64 GameSituation_906440(_QWORD, _QWORD);
__int64 GameSituation_906690(_QWORD, _QWORD);
__int64 GmapTalkCommandMenu_e94ce0(_QWORD);
__int64 HubTalkNatives_e14270(__int64, char**);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a063d0(_QWORD*, int, int);
__int64 Pane_58f8a0(_QWORD, _QWORD, _QWORD);
__int64 UnitUtil_1212140(unsigned __int64);
__int64 UnitUtil_1212be0(_QWORD, _QWORD);
__int64 Util_157e3a0(__int64*, unsigned int*, unsigned int, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(_QWORD);
__int64 game_HashString32(void);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_menu_1a06840(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_GameMenuItem_DrawText(void);
__int64 game_menu_ScoutBaseProc_ShowItemDialog(__int64*, __int64, char);
__int64 game_menu_ScoutBaseProc_ShowItemDialog_alt1(
    _QWORD**, __int64, char) __asm__("game_menu_ScoutBaseProc_ShowItemDialog");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ac7b1e;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int16 GameData_221b408;
extern __int64 (*GameData_208b2f0[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_menu_anonymous_ProcMainQuestSeq_vtable[])();
extern __int64 (*game_menu_anonymous_ProcNextSeq_vtable)();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212cc28[66];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_1ad2a61;
extern __int64 GameData_21759e0;
extern __int64 GameData_21c9718;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_221b410;
extern __int64 GameData_221b418;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_script_hub_talk_g_select_menu;
extern __int64 ui_LayoutAccessor_empty_;
extern char** msg_MessageManager_empty_text__ptr;
extern char GameData_2262914;
extern int GameData_2167728;
extern int GameData_2167768;
extern int GameData_222e468;
extern int game_script_hub_talk_g_choice_menu_result;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_688200();
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__attribute__((swiftcall)) void game_menu_anonymous_e980a0(PSEUDO_X8 x8_,
                                                           __int64 result);
__n128 game_menu_anonymous_e98b00();
__n128 game_menu_anonymous_e98fc0(__int64 a1);
_QWORD* game_menu_anonymous_f6e300(__int64 a1);
void game_menu_anonymous_f6e4e0(__int64 a1);
__int64 game_menu_anonymous_f6ff80(__int64 a1);
__int64 game_menu_anonymous_f70380(__int64 a1);
__int64 game_menu_anonymous_f70500(__int64 result);
_QWORD* game_menu_anonymous_f707a0(_QWORD* result);
__n128 game_menu_anonymous_fdd4e0(__int64 a1);
void game_menu_anonymous_fdd660(__int64 a1);
__n128 game_menu_anonymous_fdd870(__int64 a1);
__n128 game_menu_anonymous_fdda60(__int64 a1);
__n128 game_menu_anonymous_fddc40(__int64 a1);
__n128 game_menu_anonymous_fddec0(__int64 a1);
void game_menu_anonymous_fde060(__int64 a1);
void game_menu_anonymous_fde2a0(__int64 a1);
__n128 game_menu_anonymous_fde550(__int64 a1);
__n128 game_menu_anonymous_fde990(__int64 a1);
__n128 game_menu_anonymous_fdeb20(__int64 a1);
__n128 game_menu_anonymous_fdef70(__int64 a1);
__n128 game_menu_anonymous_fdf3b0(__int64 a1);
__n128 game_menu_anonymous_fdf540(__int64 a1);
__n128 game_menu_anonymous_fdf6c0(__int64 a1);
__n128 game_menu_anonymous_fdf9b0(__int64 a1);
__n128 game_menu_anonymous_fdfc30(__int64 a1);
__n128 game_menu_anonymous_fdfeb0(__int64 a1);
__n128 game_menu_anonymous_fe0140(__int64 a1);
__n128 game_menu_anonymous_fe0360(__int64 a1);
void game_menu_anonymous_fe0580(__int64 a1);
__n128 game_menu_anonymous_fe07b0(__int64 a1);
void game_menu_anonymous_fe0960(__int64 a1);
__n128 game_menu_anonymous_fe0b70(__int64 a1);
__n128 game_menu_anonymous_fe1f80(__int64 a1);
void game_menu_anonymous_fe2100(__int64 a1);
void game_menu_anonymous_fe2320(__int64 a1);
__n128 game_menu_anonymous_fe2530(__int64 a1);
void game_menu_anonymous_fe26b0(__int64 a1);
__n128 game_menu_anonymous_fe28e0(__int64 a1);
void game_menu_anonymous_fe2dc0(__int64 a1);
__n128 game_menu_anonymous_fe3390(__int64 a1);
void game_menu_anonymous_fe3510(__int64 a1);
__n128 game_menu_anonymous_fe3690(__int64 a1);
__n128 game_menu_anonymous_fe38b0(__int64 a1);
void game_menu_anonymous_fe3a40(__int64 a1);
__n128 game_menu_anonymous_fe3e00(__int64 a1);
void game_menu_anonymous_fe3f80(__int64 a1);
__n128 game_menu_anonymous_fe4340(__int64 a1);
void game_menu_anonymous_fe44c0(__int64 a1);
void game_menu_anonymous_fe46e0(__int64 a1);
__n128 game_menu_anonymous_fe4960(__int64 a1);
void game_menu_anonymous_fe4ae0(__int64 a1);
__n128 game_menu_anonymous_fe4d10(__int64 a1);
void game_menu_anonymous_fe4ea0(__int64 a1);
__n128 game_menu_anonymous_fe5260(__int64 a1);
void game_menu_anonymous_fe53e0(__int64 a1);
__n128 game_menu_anonymous_fe55f0(__int64 a1);
__n128 game_menu_anonymous_fe57e0(__int64 a1);
__n128 game_menu_anonymous_fe59c0(__int64 a1);
void game_menu_anonymous_fe5b40(__int64 a1);
__n128 game_menu_anonymous_fe5d70(__int64 a1);
__int64 game_menu_anonymous_15baf60(__int64 a1);
_QWORD* game_menu_anonymous_16b21a0(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4);
_QWORD* game_menu_anonymous_16b35f0(__int64 a1);
void game_menu_anonymous_fde6e0(__int64 a1);
void game_menu_anonymous_fdecc0(__int64 a1);
void game_menu_anonymous_fdf100(__int64 a1);
void game_menu_anonymous_fe0d20(__int64 a1);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameHr_1583b80(__int64*, unsigned int);
__int64 GameHr_94c220(__int64);
__int64 GameRoutine_157ac20_alt1(__int64*, __int64, char,
                                 char) __asm__("GameRoutine_157ac20");
__int64 GameRoutine_94cab0_alt1(__int64 result) __asm__("GameRoutine_94cab0");
__int64 GameSituation_906440_alt1(__int64,
                                  __int64*) __asm__("GameSituation_906440");
__int64 GmapTalkCommandMenu_e94ce0_alt1(__int64 result) __asm__(
    "GmapTalkCommandMenu_e94ce0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
bool GameSituation_906690_alt1(__int64,
                               __int64*) __asm__("GameSituation_906690");
void Util_157e3a0_alt1(__int64*, unsigned int*, unsigned int,
                       __int64) __asm__("Util_157e3a0");
void game_menu_GameMenuItem_DrawText_alt1(_QWORD*) __asm__(
    "game_menu_GameMenuItem_DrawText");

__attribute__((swiftcall)) void game_menu_anonymous_e980a0(PSEUDO_X8 x8_,
                                                           __int64 result)
{
  int* a2 = (int*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  _BOOL4 v6;
  int v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  _BOOL4 v13;
  int v14;
  struct {
    __int64 v16;
    __int64* v17;
  } v16_;

  if (result == 0) {
    v7 = 0;
  LABEL_36:
    *a2 = v7;
    {
      result;
      return;
    }
  }
  v3 = result;
  v6 = game_gmap_GmapClock_instance_ != 0 &&
       *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
       *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
       *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  v16_.v17 = (__int64*)&GameData_1ac7b1e;
  v16_.v16 = game_HashString_alt1((__int64)&GameData_1ac7b1e);
  v8 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v9 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v16_.v16);
    v8 = v9 != 0 && *(_DWORD*)(v9 + 32) != 0;
  }
  v10 = v6 | v8;
  v16_.v16 = 0;
  v16_.v17 = (__int64*)v3;
  v11 = (unsigned __int8)GameSituation_906440_alt1(
      game_GameModeData_instance_ + 136, &v16_.v16);
  v16_.v17 = &GameData_1ad2a61;
  if (v11 == 2) {
    v12 = 0;
  }
  else {
    v12 = v10;
  }
  result = game_HashString_alt1((__int64)&GameData_1ad2a61);
  v16_.v16 = result;
  v13 = game_GameModeData_instance_ == 0 ||
        (result = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v16_.v16)) == 0 ||
        *(_DWORD*)(result + 32) == 0;
  v14 = 0;
  *a2 = 0;
  if ((v12 & v13) == 1) {
    v16_.v16 = 0;
    v16_.v17 = (__int64*)v3;
    if (GameSituation_906690_alt1(game_GameModeData_instance_ + 136,
                                  &v16_.v16)) {
      v14 = 2;
      *a2 = 2;
    }
    else {
      v14 = 0;
    }
    result = GmapTalkCommandMenu_e94ce0_alt1(v3);
    if ((result & 1) != 0) {
      v14 |= 0xCu;
      *a2 = v14;
    }
  }
  if (v6) {
    if ((GameHr_94c220(v3) & 1) != 0) {
      v14 |= 0x10u;
      *a2 = v14;
    }
    result = GameRoutine_94cab0_alt1(v3);
    if ((result & 1) != 0) {
      v7 = v14 | 0x20;
      goto LABEL_36;
    }
  }
  {
    result;
    return;
  }
}

__n128 game_menu_anonymous_e98b00()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;

  if ((GameData_221b408 & 1) != 0) {
    *(_BYTE*)GameData_221b418 = 0;
    GameData_221b410 = 0;
  }
  else {
    GameData_221b408 = 0;
  }
  v0 = game_script_hub_talk_g_select_menu;
  v2 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 216);
  v1 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 224);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  v4 = v1 - v2;
  if (v1 == v2) {
    v6 = 0;
    v5 = 0;
    goto LABEL_12;
  }
  if (v4 < 0) {
    goto LABEL_35;
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      v1 - v2, 16, 0);
  v6 = v5 + v4;
  memcpy(v5, v2, v4);
  v7 = 0;
  while (*(_QWORD*)(v5 + v7) != *(_QWORD*)(v0 + 208)) {
    v7 += 8;
    if (v4 == v7) {
      goto LABEL_12;
    }
  }
  if (v4 == v7) {
  LABEL_12:
    v8 = v6 - v5;
    v9 = (v6 - v5) >> 3;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 61 == 0) {
      if (v8 >> 2 > v10) {
        v10 = v8 >> 2;
      }
      if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
        v10 = 0x1FFFFFFFFFFFFFFFLL;
      }
      if (v10 != 0) {
        if (v10 >> 61 != 0) {
          GameRoutine_60a210();
        }
        v11 = fw_memory_HeapManager_Allocate(*v3, 8 * v10, 16, 0);
      }
      else {
        v11 = 0;
      }
      v12 = v11 + v8 - 8 * v9;
      *(_QWORD*)(v11 + v8) = *(_QWORD*)(v0 + 208);
      v6 = v11 + v8 + 8;
      memcpy(v12, v5, v8);
      if (v5 != 0) {
        v13 = 128;
        if (*(_QWORD*)(*v3 + 200) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*v3 + v13);
      }
      v5 = v12;
      goto LABEL_26;
    }
  LABEL_35:
    GameRoutine_688200();
  }
LABEL_26:
  if (v5 != v6) {
    v14 = (__int64*)v5;
    do {
      v15 = *v14;
      v18 = *v14;
      if ((UnitUtil_1212140((unsigned __int64)&v18) & 1) != 0 && v15 != 0) {
        GameRoutine_717fc0((unsigned __int64*)(*(_QWORD*)(v15 + 24) + 1512LL),
                           1);
      }
      ++v14;
    } while (v14 != (__int64*)v6);
  }
  v16 = 128;
  if (*(_QWORD*)(*v3 + 200) == 0) {
    v16 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v3 + v16);
}

__n128 game_menu_anonymous_e98fc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12;
    __int64 v13;
    __int64 v14;
  } v12_;
  int v15;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v12_.v13 = 0;
  v12_.v14 = 0;
  v12_.v12 = 0;
  v2 = *(_QWORD*)(game_script_hub_talk_g_select_menu + 208);
  if (v2 != 0) {
    game_menu_anonymous_e980a0((void*)(&v15), v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v15 & 8) != 0) {
      v3 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_BYTE*)(v3 + 10) = 0;
      v12_.v12 = v3;
      *(_WORD*)(v3 + 8) = -22135;
      *(_QWORD*)v3 = 0xE78A82E388B4E812LL;
      v12_.v13 = v3 + 24;
      v12_.v14 = v3 + 24;
    }
  }
  game_Tutorial_CreateBind(a1, &v12_.v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v5 = v12_.v12;
  if (v12_.v12 != 0) {
    v6 = v12_.v13;
    if (v12_.v12 == v12_.v13) {
      goto LABEL_15;
    }
    v7 = v12_.v13;
    v8 = fw_memory_g_heap_manager_ptr;
    do {
      v9 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v9 & 1) != 0 && *(_QWORD*)(v6 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v10);
      }
      v6 = v7;
    } while (v7 != v5);
    v12_.v13 = v5;
    if (v12_.v12 != 0) {
    LABEL_15:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
    }
  }
  return result;
}

_QWORD* game_menu_anonymous_f6e300(__int64 a1)
{
  __int64 v2;
  _QWORD* result;
  int v4;
  __int64 v5[2];
  struct {
    _QWORD v6[7];
    __int16 v7;
  } v6_;

  v2 = *(_QWORD*)(a1 + 208);
  v5[0] = 0;
  v5[1] = v2;
  result = X8CALL_X0(
      _QWORD*, GameSituation_906320((void*)(v6_.v6),
                                    game_GameModeData_instance_ + 136, v5));
  if ((v6_.v7 & 1) != 0) {
    v4 = 2;
  }
  else {
    v4 = 1;
  }
  *(_DWORD*)(a1 + 152) = v4;
  return result;
}

void game_menu_anonymous_f6e4e0(__int64 a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  char* v5;
  __int64 v6;
  int v7;
  char* v8;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  char v13;
  __int64 v14;
  _QWORD v15[2];
  char* v16;
  _BYTE v17[256];

  sprintf(v17, "MID_LGV_Scout_%s_m%02d",
          *(const char**)(*(_QWORD*)(a1 + 208) + 40LL), 4);
  v2 = strlen(v17);
  if (v2 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v3 = v2;
  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v2 >= 0x17) {
    if ((v2 | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (v2 | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v6, 16, 0);
    v15[1] = v3;
    v16 = v5;
    v15[0] = v6 | 1;
    goto LABEL_9;
  }
  LOBYTE(v15[0]) = 2 * v2;
  v5 = (char*)v15 + 1;
  if (v2 != 0) {
  LABEL_9:
    memcpy(v5, v17, v3);
  }
  v5[v3] = 0;
  v7 = v15[0] & 1;
  if ((v15[0] & 1) != 0) {
    v8 = v16;
  }
  else {
    v8 = (char*)v15 + 1;
  }
  if (GameData_21ec7b8 == 0 && v8 != nullptr) {
    v10 = fw_memory_HeapManager_Allocate_alt1(*v4, 1376, 16, 0);
    GameRoutine_1130770(v10, v8, 0);
    v11 = *(_QWORD*)(a1 + 40);
    if (v11 != 0) {
      *(_QWORD*)(v11 + 48) = v10;
      *(_QWORD*)(v10 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v10;
    *(_QWORD*)(v10 + 24) = "talk::Seq";
    *(_QWORD*)(v10 + 32) = a1;
    *(_DWORD*)(v10 + 140) = game_HashString32();
    *(_QWORD*)(v10 + 64) = 0;
    *(_QWORD*)(v10 + 72) = 24;
    *(_QWORD*)(v10 + 80) = 1;
    *(_QWORD*)(v10 + 8) = &GameData_216de68;
    *(_QWORD*)(v10 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 32LL))(v10);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v10 + 136LL))(v10) & 1) != 0 &&
        (*(_WORD*)(v10 + 136) & 0x100) == 0) {
      *(_WORD*)(v10 + 136) |= 0x100u;
    }
    v12 = *(_BYTE**)(v10 + 32);
    v13 = v12[138];
    if (v13 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v12 + 64LL))(*(_QWORD*)(v10 + 32));
      v13 = v12[138];
    }
    v12[138] = v13 + 1;
    *(_WORD*)(v10 + 136) |= 2u;
    v7 = v15[0] & 1;
  }
  if (v7 != 0 && v16 != nullptr) {
    v14 = 128;
    if (*(_QWORD*)(*v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v14);
  }
  GameData_2167768 = 1;
}

__int64 game_menu_anonymous_f6ff80(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  _QWORD v34[2];
  _QWORD v35[6];
  __int64 v36;
  __int64 v37;

  v2 = (__int64*)(a1 + 152);
  v1 = *(_QWORD*)(a1 + 152);
  v34[0] = 0;
  v34[1] = v1;
  GameSituation_906320_alt1((void*)(v35), game_GameModeData_instance_ + 136,
                            v34);
  v4 = GameData_212c878[0];
  if ((((0x10000000000LL << *(_BYTE*)(*(_QWORD*)(v36 + 88) + 72LL)) |
        (1LL << *(_BYTE*)(*(_QWORD*)(v36 + 88) + 73LL))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v5 = *v2;
    v34[0] = 0;
    v34[1] = v5;
    GameSituation_906320_alt1((void*)(v35), game_GameModeData_instance_ + 136,
                              v34);
    v37 = 0;
    v6 = *(_QWORD*)(v36 + 88);
    if (v6 != 0) {
      v7 = *(unsigned __int16*)(v6 + 16);
      HIDWORD(v37) = 1;
      v8 = *v4;
      LOWORD(v37) = v7;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v8 + 64) + 8 * v7) + 73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v9 = game_map_MapRandom_instance__ptr[0];
        v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v9 + 1) = v10;
        v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v37) =
            (16 * ((_WORD)v13 -
                   1000 * (unsigned __int16)((v13 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    v14 = UnitUtil_1212be0(&v37, 0);
    v15 = *v2;
    v16 = v14;
    v34[0] = 0;
    v34[1] = v15;
    GameSituation_906320_alt1((void*)(v35), game_GameModeData_instance_ + 136,
                              v34);
    if (v16 >= *(unsigned __int16*)(v36 + 96)) {
      *(_BYTE*)(a1 + 168) = 1;
    }
  }
  v17 = game_menu_ScoutBaseProc_ShowItemDialog(v2, a1, *(_BYTE*)(a1 + 168));
  v18 = *(_QWORD*)(a1 + 152);
  v19 = v17;
  v34[0] = 0;
  v34[1] = v18;
  GameSituation_906320_alt1((void*)(v35), game_GameModeData_instance_ + 136,
                            v34);
  v20 = *(_QWORD*)(v36 + 88);
  v21 = *(_QWORD*)(a1 + 152);
  v34[0] = 0;
  v34[1] = v21;
  GameSituation_906320_alt1((void*)(v35), game_GameModeData_instance_ + 136,
                            v34);
  v37 = 0;
  v22 = *(_QWORD*)(v36 + 88);
  if (v22 != 0) {
    v23 = *(unsigned __int16*)(v22 + 16);
    HIDWORD(v37) = 1;
    v24 = *v4;
    LOWORD(v37) = v23;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v24 + 64) + 8 * v23) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v25 = game_map_MapRandom_instance__ptr[0];
      v26 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v28 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v25 + 1) = v26;
      v29 = (v28 >> 8) ^ (v27 >> 19) ^ v28 ^ v27;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25) = v27;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v25 + 4) = v29;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v37) =
          (16 * ((_WORD)v29 -
                 1000 * (unsigned __int16)((v29 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v30 = UnitUtil_1212be0(&v37, 0);
  v31 = *v2;
  v32 = v30;
  v34[0] = 0;
  v34[1] = v31;
  GameSituation_906320_alt1((void*)(v35), game_GameModeData_instance_ + 136,
                            v34);
  return game_menu_1a06840(v19 + 1496, v20, v32,
                           *(unsigned __int16*)(v36 + 96));
}

__int64 game_menu_anonymous_f70380(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v6[2];
  _QWORD v7[8];

  v2 = game_menu_ScoutBaseProc_ShowItemDialog_alt1((_QWORD**)(a1 + 152), a1, 0);
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  else {
    v3 = 0;
  }
  v4 = *(_QWORD*)(a1 + 152);
  v6[0] = 0;
  v6[1] = v4;
  GameSituation_906320((void*)(v7), game_GameModeData_instance_ + 136, v6);
  return ObeliskDestinyMenuItem_1a063d0((_QWORD*)(v2 + 1496), v3,
                                        *(unsigned __int16*)(v7[6] + 96LL));
}

__int64 game_menu_anonymous_f70500(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6[2];
  struct {
    _QWORD v7[6];
    __int64 v8;
  } v7_;

  if (GameData_21c9718 != 0) {
    v1 = *(_QWORD*)(result + 152);
    v2 = result;
    v6[0] = 0;
    v6[1] = v1;
    GameSituation_906320((void*)(v7_.v7), game_GameModeData_instance_ + 136,
                         v6);
    v3 = GameRoutine_91bea0(v7_.v8);
    v4 = game_GameModeData_instance_;
    v5 = *(_QWORD*)(v2 + 152);
    *(_DWORD*)(v2 + 168) = v3;
    v6[0] = 0;
    v6[1] = v5;
    GameSituation_906320((void*)(v7_.v7), v4 + 136, v6);
    result = GameRoutine_91bc00(v7_.v8);
    *(_QWORD*)(v2 + 176) = result;
  }
  return result;
}

_QWORD* game_menu_anonymous_f707a0(_QWORD* result)
{
  __int64 v1;
  int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6[2];
  _QWORD v7[8];

  v1 = result[22];
  if (v1 == 0 || *(_BYTE*)(v1 + 9) != 4) {
    GameData_2167768 = 2;
    return result;
  }
  v2 = *((_DWORD*)result + 42);
  v3 = result;
  v4 = result[19];
  v6[0] = 0;
  v6[1] = v4;
  result = X8CALL_X0(
      _QWORD*,
      GameSituation_906320((void*)(v7), game_GameModeData_instance_ + 136, v6));
  v5 = v3[1];
  if (v2 == *(unsigned __int16*)(v7[6] + 104LL) - 1) {
    if (v5 != 0) {
      while (1) {
        if (*(_BYTE*)v5 == 2) {
          if (*(_DWORD*)(v5 + 32) == 2) {
            goto LABEL_19;
          }
        }
        else if (*(_BYTE*)v5 == 0) {
          return result;
        }
        v5 += 64;
      }
    }
  }
  else if (v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 1) {
        LABEL_19:
          v3[2] = v5;
          *((_WORD*)v3 + 68) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  return result;
}

__n128 game_menu_anonymous_fdd4e0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Scouting_Yan_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fdd660(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_ScoutingNo_Yan_m01");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
      GameRoutine_1130770(v4, v3, 0);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = game_HashString32();
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
    v8 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v8);
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 4) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
  else {
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 1) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v9;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
}

__n128 game_menu_anonymous_fdd870(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Question01_Yan_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fdda60(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Question02_Yan_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fddc40(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Question03_Yan_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fddec0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 10000;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Zac_m01");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

void game_menu_anonymous_fde060(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  void* v7;
  _BYTE* v8;
  char v9;
  __int64 v10;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 2) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
  else {
    *(_DWORD*)(a1 + 168) = 10000;
    *(_BYTE*)(a1 + 172) = 1;
    GameData_2262914 = 1;
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v4, "MID_LGV_Scout_Negotiation_SP_Zac_m02");
    if (*GameData_212d460[0] == 0) {
      v5 = fw_memory_HeapManager_Allocate_alt1(*v3, 1376, 16, 0);
      GameRoutine_1130770(v5, v4, 0);
      v6 = *(_QWORD*)(a1 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = a1;
      *(_DWORD*)(v5 + 140) = game_HashString32();
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      v7 = GameData_2130228;
      *(_QWORD*)(v5 + 8) = GameData_2130228;
      *(_QWORD*)(v5 + 16) = v7;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
          (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v8 = *(_BYTE**)(v5 + 32);
      v9 = v8[138];
      if (v9 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v5 + 32));
        v9 = v8[138];
      }
      v8[138] = v9 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
    v10 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v10);
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 1) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v2;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
}

void game_menu_anonymous_fde2a0(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 v3;
  unsigned int v4;
  _QWORD* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  char v10;
  __int64 v11;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = *(_QWORD*)(a1 + 8);
    if (v1 != 0) {
      while (1) {
        if (*(_BYTE*)v1 == 2) {
          if (*(_DWORD*)(v1 + 32) == 3) {
            goto LABEL_40;
          }
        }
        else if (*(_BYTE*)v1 == 0) {
          return;
        }
        v1 += 64;
      }
    }
  }
  else {
    if (*(_BYTE*)(a1 + 172) == 1) {
      *(_BYTE*)(a1 + 172) = 0;
      GameData_2262914 = 0;
    }
    if (game_GameModeData_instance_ != 0 &&
        (v2 = *(_DWORD*)(game_GameModeData_instance_ + 72)) >= 10000) {
      v3 = a1;
      v4 = v2 - 10000;
      if (v4 >= 0x98967F) {
        v4 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
      v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v6 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      strcpy(v6, "MID_LGV_Scout_Negotiation_SP_Zac_m03");
      if (GameData_21ec7b8 == 0) {
        v7 = fw_memory_HeapManager_Allocate_alt1(*v5, 1376, 16, 0);
        GameRoutine_1130770(v7, v6, 0);
        v8 = *(_QWORD*)(v3 + 40);
        if (v8 != 0) {
          *(_QWORD*)(v8 + 48) = v7;
          *(_QWORD*)(v7 + 56) = *(_QWORD*)(v3 + 40);
        }
        *(_QWORD*)(v3 + 40) = v7;
        *(_QWORD*)(v7 + 24) = "talk::Seq";
        *(_QWORD*)(v7 + 32) = v3;
        *(_DWORD*)(v7 + 140) = game_HashString32();
        *(_QWORD*)(v7 + 64) = 0;
        *(_QWORD*)(v7 + 72) = 24;
        *(_QWORD*)(v7 + 80) = 1;
        *(_QWORD*)(v7 + 8) = &GameData_216de68;
        *(_QWORD*)(v7 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v7 + 32LL))(v7);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 136LL))(v7) & 1) != 0 &&
            (*(_WORD*)(v7 + 136) & 0x100) == 0) {
          *(_WORD*)(v7 + 136) |= 0x100u;
        }
        v9 = *(_BYTE**)(v7 + 32);
        v10 = v9[138];
        if (v10 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v7 + 32));
          v10 = v9[138];
        }
        v9[138] = v10 + 1;
        *(_WORD*)(v7 + 136) |= 2u;
      }
      v11 = 128;
      if (*(_QWORD*)(*v5 + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*v5 + v11);
      v1 = *(_QWORD*)(v3 + 8);
      if (v1 != 0) {
        a1 = v3;
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 7) {
              goto LABEL_40;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
    else {
      v1 = *(_QWORD*)(a1 + 8);
      if (v1 != 0) {
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 8) {
            LABEL_40:
              *(_QWORD*)(a1 + 16) = v1;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
  }
}

__n128 game_menu_anonymous_fde550(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 1000;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Zac_m04");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

void game_menu_anonymous_fde6e0(__int64 a1)
{
  __int64 v1;
  int v2;
  bool v3;
  unsigned int v4;
  __int64 v5;
  _QWORD* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  __int64 v12;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = *(_QWORD*)(a1 + 8);
    if (v1 != 0) {
      while (1) {
        if (*(_BYTE*)v1 == 2) {
          if (*(_DWORD*)(v1 + 32) == 4) {
            goto LABEL_40;
          }
        }
        else if (*(_BYTE*)v1 == 0) {
          return;
        }
        v1 += 64;
      }
    }
  }
  else {
    if (*(_BYTE*)(a1 + 172) == 1) {
      *(_BYTE*)(a1 + 172) = 0;
      GameData_2262914 = 0;
    }
    if (game_GameModeData_instance_ == 0 ||
        (v2 = *(_DWORD*)(game_GameModeData_instance_ + 72),
         v3 = __OFSUB__(v2, 1000),
         (((v4 = v2 - 1000) & 0x80000000) != 0) ^ v3)) {
      v1 = *(_QWORD*)(a1 + 8);
      if (v1 != 0) {
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 8) {
            LABEL_40:
              *(_QWORD*)(a1 + 16) = v1;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
    else {
      v5 = a1;
      if (v4 >= 0x98967F) {
        v4 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
      v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v7 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      strcpy(v7, "MID_LGV_Scout_Negotiation_SP_Zac_m06");
      if (GameData_21ec7b8 == 0) {
        v8 = fw_memory_HeapManager_Allocate_alt1(*v6, 1376, 16, 0);
        GameRoutine_1130770(v8, v7, 0);
        v9 = *(_QWORD*)(v5 + 40);
        if (v9 != 0) {
          *(_QWORD*)(v9 + 48) = v8;
          *(_QWORD*)(v8 + 56) = *(_QWORD*)(v5 + 40);
        }
        *(_QWORD*)(v5 + 40) = v8;
        *(_QWORD*)(v8 + 24) = "talk::Seq";
        *(_QWORD*)(v8 + 32) = v5;
        *(_DWORD*)(v8 + 140) = game_HashString32();
        *(_QWORD*)(v8 + 64) = 0;
        *(_QWORD*)(v8 + 72) = 24;
        *(_QWORD*)(v8 + 80) = 1;
        *(_QWORD*)(v8 + 8) = &GameData_216de68;
        *(_QWORD*)(v8 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0 &&
            (*(_WORD*)(v8 + 136) & 0x100) == 0) {
          *(_WORD*)(v8 + 136) |= 0x100u;
        }
        v10 = *(_BYTE**)(v8 + 32);
        v11 = v10[138];
        if (v11 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*(_QWORD*)(v8 + 32));
          v11 = v10[138];
        }
        v10[138] = v11 + 1;
        *(_WORD*)(v8 + 136) |= 2u;
      }
      v12 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v12);
      v1 = *(_QWORD*)(v5 + 8);
      if (v1 != 0) {
        a1 = v5;
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 7) {
              goto LABEL_40;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
  }
}

__n128 game_menu_anonymous_fde990(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 1000;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Zac_m05");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

__n128 game_menu_anonymous_fdeb20(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 100;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Zac_m07");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

void game_menu_anonymous_fdecc0(__int64 a1)
{
  __int64 v1;
  int v2;
  bool v3;
  unsigned int v4;
  __int64 v5;
  _QWORD* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  __int64 v12;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = *(_QWORD*)(a1 + 8);
    if (v1 != 0) {
      while (1) {
        if (*(_BYTE*)v1 == 2) {
          if (*(_DWORD*)(v1 + 32) == 5) {
            goto LABEL_40;
          }
        }
        else if (*(_BYTE*)v1 == 0) {
          return;
        }
        v1 += 64;
      }
    }
  }
  else {
    if (*(_BYTE*)(a1 + 172) == 1) {
      *(_BYTE*)(a1 + 172) = 0;
      GameData_2262914 = 0;
    }
    if (game_GameModeData_instance_ == 0 ||
        (v2 = *(_DWORD*)(game_GameModeData_instance_ + 72),
         v3 = __OFSUB__(v2, 100), (((v4 = v2 - 100) & 0x80000000) != 0) ^ v3)) {
      v1 = *(_QWORD*)(a1 + 8);
      if (v1 != 0) {
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 8) {
            LABEL_40:
              *(_QWORD*)(a1 + 16) = v1;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
    else {
      v5 = a1;
      if (v4 >= 0x98967F) {
        v4 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
      v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v7 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      strcpy(v7, "MID_LGV_Scout_Negotiation_SP_Zac_m08");
      if (GameData_21ec7b8 == 0) {
        v8 = fw_memory_HeapManager_Allocate_alt1(*v6, 1376, 16, 0);
        GameRoutine_1130770(v8, v7, 0);
        v9 = *(_QWORD*)(v5 + 40);
        if (v9 != 0) {
          *(_QWORD*)(v9 + 48) = v8;
          *(_QWORD*)(v8 + 56) = *(_QWORD*)(v5 + 40);
        }
        *(_QWORD*)(v5 + 40) = v8;
        *(_QWORD*)(v8 + 24) = "talk::Seq";
        *(_QWORD*)(v8 + 32) = v5;
        *(_DWORD*)(v8 + 140) = game_HashString32();
        *(_QWORD*)(v8 + 64) = 0;
        *(_QWORD*)(v8 + 72) = 24;
        *(_QWORD*)(v8 + 80) = 1;
        *(_QWORD*)(v8 + 8) = &GameData_216de68;
        *(_QWORD*)(v8 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0 &&
            (*(_WORD*)(v8 + 136) & 0x100) == 0) {
          *(_WORD*)(v8 + 136) |= 0x100u;
        }
        v10 = *(_BYTE**)(v8 + 32);
        v11 = v10[138];
        if (v11 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*(_QWORD*)(v8 + 32));
          v11 = v10[138];
        }
        v10[138] = v11 + 1;
        *(_WORD*)(v8 + 136) |= 2u;
      }
      v12 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v12);
      v1 = *(_QWORD*)(v5 + 8);
      if (v1 != 0) {
        a1 = v5;
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 7) {
              goto LABEL_40;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
  }
}

__n128 game_menu_anonymous_fdef70(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 10;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Zac_m09");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

void game_menu_anonymous_fdf100(__int64 a1)
{
  __int64 v1;
  int v2;
  bool v3;
  unsigned int v4;
  __int64 v5;
  _QWORD* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  __int64 v12;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v1 = *(_QWORD*)(a1 + 8);
    if (v1 != 0) {
      while (1) {
        if (*(_BYTE*)v1 == 2) {
          if (*(_DWORD*)(v1 + 32) == 6) {
            goto LABEL_40;
          }
        }
        else if (*(_BYTE*)v1 == 0) {
          return;
        }
        v1 += 64;
      }
    }
  }
  else {
    if (*(_BYTE*)(a1 + 172) == 1) {
      *(_BYTE*)(a1 + 172) = 0;
      GameData_2262914 = 0;
    }
    if (game_GameModeData_instance_ == 0 ||
        (v2 = *(_DWORD*)(game_GameModeData_instance_ + 72),
         v3 = __OFSUB__(v2, 10), (((v4 = v2 - 10) & 0x80000000) != 0) ^ v3)) {
      v1 = *(_QWORD*)(a1 + 8);
      if (v1 != 0) {
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 8) {
            LABEL_40:
              *(_QWORD*)(a1 + 16) = v1;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
    else {
      v5 = a1;
      if (v4 >= 0x98967F) {
        v4 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
      v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v7 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      strcpy(v7, "MID_LGV_Scout_Negotiation_SP_Zac_m10");
      if (GameData_21ec7b8 == 0) {
        v8 = fw_memory_HeapManager_Allocate_alt1(*v6, 1376, 16, 0);
        GameRoutine_1130770(v8, v7, 0);
        v9 = *(_QWORD*)(v5 + 40);
        if (v9 != 0) {
          *(_QWORD*)(v9 + 48) = v8;
          *(_QWORD*)(v8 + 56) = *(_QWORD*)(v5 + 40);
        }
        *(_QWORD*)(v5 + 40) = v8;
        *(_QWORD*)(v8 + 24) = "talk::Seq";
        *(_QWORD*)(v8 + 32) = v5;
        *(_DWORD*)(v8 + 140) = game_HashString32();
        *(_QWORD*)(v8 + 64) = 0;
        *(_QWORD*)(v8 + 72) = 24;
        *(_QWORD*)(v8 + 80) = 1;
        *(_QWORD*)(v8 + 8) = &GameData_216de68;
        *(_QWORD*)(v8 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 32LL))(v8);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 136LL))(v8) & 1) != 0 &&
            (*(_WORD*)(v8 + 136) & 0x100) == 0) {
          *(_WORD*)(v8 + 136) |= 0x100u;
        }
        v10 = *(_BYTE**)(v8 + 32);
        v11 = v10[138];
        if (v11 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v10 + 64LL))(*(_QWORD*)(v8 + 32));
          v11 = v10[138];
        }
        v10[138] = v11 + 1;
        *(_WORD*)(v8 + 136) |= 2u;
      }
      v12 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v12);
      v1 = *(_QWORD*)(v5 + 8);
      if (v1 != 0) {
        a1 = v5;
        while (1) {
          if (*(_BYTE*)v1 == 2) {
            if (*(_DWORD*)(v1 + 32) == 7) {
              goto LABEL_40;
            }
          }
          else if (*(_BYTE*)v1 == 0) {
            return;
          }
          v1 += 64;
        }
      }
    }
  }
}

__n128 game_menu_anonymous_fdf3b0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  GameData_222e468 = 2;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Zac_m11");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

__n128 game_menu_anonymous_fdf540(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  GameData_222e468 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_OK_Zac_m01");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

__n128 game_menu_anonymous_fdf6c0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_NoMoney_Zac_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fdf9b0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_1st_Maj_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fdfc30(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_2nd_Maj_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fdfeb0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_3rd_Maj_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fe0140(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Start_Ven_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fe0360(__int64 a1)
{
  int v1;
  int v3;
  unsigned __int64 v4;
  __n128 result;
  unsigned __int64 v6;
  _QWORD* v7;
  char* v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  char v16;
  __int64 v17;
  _QWORD v18[2];
  char* v19;
  _BYTE v20[256];

  v1 = *(_DWORD*)(a1 + 176);
  if (v1 <= 1) {
    v1 = 1;
  }
  if (v1 >= 10) {
    v3 = 10;
  }
  else {
    v3 = v1;
  }
  *(_DWORD*)(a1 + 176) = v3;
  sprintf(v20, "MID_LGV_Scout_Negotiation_SP_Reaction_TypeB_Ven_m%02d");
  v4 = strlen(v20);
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(v4);
  }
  v6 = v4;
  v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v4 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
    v18[1] = v6;
    v19 = v8;
    v18[0] = v9 | 1;
    goto LABEL_14;
  }
  LOBYTE(v18[0]) = 2 * v4;
  v8 = (char*)v18 + 1;
  if (v4 != 0) {
  LABEL_14:
    memcpy(v8, v20, v6);
  }
  v8[v6] = 0;
  v10 = v18[0] & 1;
  if ((v18[0] & 1) != 0) {
    v11 = v19;
  }
  else {
    v11 = (char*)v18 + 1;
  }
  if (GameData_21ec7b8 == 0 && v11 != nullptr) {
    v13 = fw_memory_HeapManager_Allocate_alt1(*v7, 1376, 16, 0);
    GameRoutine_1130770(v13, v11, 0);
    v14 = *(_QWORD*)(a1 + 40);
    if (v14 != 0) {
      *(_QWORD*)(v14 + 48) = v13;
      *(_QWORD*)(v13 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v13;
    *(_QWORD*)(v13 + 24) = "talk::Seq";
    *(_QWORD*)(v13 + 32) = a1;
    *(_DWORD*)(v13 + 140) = game_HashString32();
    *(_QWORD*)(v13 + 64) = 0;
    *(_QWORD*)(v13 + 72) = 24;
    *(_QWORD*)(v13 + 80) = 1;
    *(_QWORD*)(v13 + 8) = &GameData_216de68;
    *(_QWORD*)(v13 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v13 + 32LL))(v13);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v13 + 136LL))(v13) & 1) != 0 &&
        (*(_WORD*)(v13 + 136) & 0x100) == 0) {
      *(_WORD*)(v13 + 136) |= 0x100u;
    }
    v15 = *(_BYTE**)(v13 + 32);
    v16 = v15[138];
    if (v16 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*(_QWORD*)(v13 + 32));
      v16 = v15[138];
    }
    v15[138] = v16 + 1;
    *(_WORD*)(v13 + 136) |= 2u;
    v10 = v18[0] & 1;
  }
  if (v10 != 0 && v19 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*v7 + 200LL) == 0) {
      v17 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v7 + v17);
  }
  return result;
}

void game_menu_anonymous_fe0580(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Reaction_TypeA_Ven_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v8);
  GameData_222e468 = 1;
}

__n128 game_menu_anonymous_fe07b0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 3000;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Start_Tia_m01");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

void game_menu_anonymous_fe0960(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_No_Tia_m01");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
      GameRoutine_1130770(v4, v3, 0);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = game_HashString32();
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
    v8 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v8);
    GameData_222e468 = 2;
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 3) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
  else {
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 1) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v9;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
}

__n128 game_menu_anonymous_fe0b70(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 3000;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Reason_Tia_m01");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

void game_menu_anonymous_fe0d20(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  bool v12;
  int v13;
  _QWORD* v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  char v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  _BYTE* v26;
  char v27;
  __int64 v28;
  _QWORD v29[2];
  _QWORD v30[8];

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_No_Tia_m02");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
      GameRoutine_1130770(v4, v3, 0);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = game_HashString32();
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
    v8 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v8);
    GameData_222e468 = 2;
    return;
  }
  v9 = *(_QWORD*)(a1 + 152);
  v29[0] = 0;
  v29[1] = v9;
  GameSituation_906320_alt1((void*)(v30), game_GameModeData_instance_ + 136,
                            v29);
  v10 = *(unsigned __int16*)(v30[6] + 96LL);
  if (*(_BYTE*)(a1 + 172) == 1) {
    *(_BYTE*)(a1 + 172) = 0;
    GameData_2262914 = 0;
  }
  if (game_GameModeData_instance_ != 0) {
    v11 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    v12 = __OFSUB__(v11, v10);
    v13 = v11 - v10;
    if (v13 < 0 == v12) {
      if ((unsigned int)v13 >= 0x98967F) {
        v13 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v13;
    LABEL_40:
      v22 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      v23 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
      strcpy(v23, "MID_LGV_Scout_Negotiation_SP_Reason_Tia_m02");
      if (GameData_21ec7b8 == 0) {
        v24 = fw_memory_HeapManager_Allocate_alt1(*v22, 1376, 16, 0);
        GameRoutine_1130770(v24, v23, 0);
        v25 = *(_QWORD*)(a1 + 40);
        if (v25 != 0) {
          *(_QWORD*)(v25 + 48) = v24;
          *(_QWORD*)(v24 + 56) = *(_QWORD*)(a1 + 40);
        }
        *(_QWORD*)(a1 + 40) = v24;
        *(_QWORD*)(v24 + 24) = "talk::Seq";
        *(_QWORD*)(v24 + 32) = a1;
        *(_DWORD*)(v24 + 140) = game_HashString32();
        *(_QWORD*)(v24 + 64) = 0;
        *(_QWORD*)(v24 + 72) = 24;
        *(_QWORD*)(v24 + 80) = 1;
        *(_QWORD*)(v24 + 8) = &GameData_216de68;
        *(_QWORD*)(v24 + 16) = &GameData_216de68;
        (*(void (**)(__int64))(*(_QWORD*)v24 + 32LL))(v24);
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 136LL))(v24) & 1) != 0 &&
            (*(_WORD*)(v24 + 136) & 0x100) == 0) {
          *(_WORD*)(v24 + 136) |= 0x100u;
        }
        v26 = *(_BYTE**)(v24 + 32);
        v27 = v26[138];
        if (v27 == 0) {
          (*(void (**)(_QWORD))(*(_QWORD*)v26 + 64LL))(*(_QWORD*)(v24 + 32));
          v27 = v26[138];
        }
        v26[138] = v27 + 1;
        *(_WORD*)(v24 + 136) |= 2u;
      }
      v28 = 128;
      if (*(_QWORD*)(*v22 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*v22 + v28);
      v21 = *(_QWORD*)(a1 + 8);
      if (v21 != 0) {
        while (1) {
          if (*(_BYTE*)v21 == 2) {
            if (*(_DWORD*)(v21 + 32) == 2) {
              goto LABEL_58;
            }
          }
          else if (*(_BYTE*)v21 == 0) {
            return;
          }
          v21 += 64;
        }
      }
      return;
    }
  }
  else if (v10 == 0) {
    goto LABEL_40;
  }
  v14 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v15 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v15, "MID_LGV_Scout_Negotiation_SP_NoMoney_Tia_m01");
  if (GameData_21ec7b8 == 0) {
    v16 = fw_memory_HeapManager_Allocate_alt1(*v14, 1376, 16, 0);
    GameRoutine_1130770(v16, v15, 0);
    v17 = *(_QWORD*)(a1 + 40);
    if (v17 != 0) {
      *(_QWORD*)(v17 + 48) = v16;
      *(_QWORD*)(v16 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v16;
    *(_QWORD*)(v16 + 24) = "talk::Seq";
    *(_QWORD*)(v16 + 32) = a1;
    *(_DWORD*)(v16 + 140) = game_HashString32();
    *(_QWORD*)(v16 + 64) = 0;
    *(_QWORD*)(v16 + 72) = 24;
    *(_QWORD*)(v16 + 80) = 1;
    *(_QWORD*)(v16 + 8) = &GameData_216de68;
    *(_QWORD*)(v16 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 32LL))(v16);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v16 + 136LL))(v16) & 1) != 0 &&
        (*(_WORD*)(v16 + 136) & 0x100) == 0) {
      *(_WORD*)(v16 + 136) |= 0x100u;
    }
    v18 = *(_BYTE**)(v16 + 32);
    v19 = v18[138];
    if (v19 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v18 + 64LL))(*(_QWORD*)(v16 + 32));
      v19 = v18[138];
    }
    v18[138] = v19 + 1;
    *(_WORD*)(v16 + 136) |= 2u;
  }
  v20 = 128;
  if (*(_QWORD*)(*v14 + 200LL) == 0) {
    v20 = 56;
  }
  nn_mem_StandardAllocator_Free(*v14 + v20);
  v21 = *(_QWORD*)(a1 + 8);
  if (v21 != 0) {
    while (1) {
      if (*(_BYTE*)v21 == 2) {
        if (*(_DWORD*)(v21 + 32) == 3) {
        LABEL_58:
          *(_QWORD*)(a1 + 16) = v21;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v21 == 0) {
        return;
      }
      v21 += 64;
    }
  }
}

__n128 game_menu_anonymous_fe1f80(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Bon_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe2100(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 2) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
  else {
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v4, "MID_LGV_Scout_Negotiation_SP_Bon_m02");
    if (GameData_21ec7b8 == 0) {
      v5 = fw_memory_HeapManager_Allocate_alt1(*v3, 1376, 16, 0);
      GameRoutine_1130770(v5, v4, 0);
      v6 = *(_QWORD*)(a1 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = a1;
      *(_DWORD*)(v5 + 140) = game_HashString32();
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
          (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v5 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
    v9 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v9);
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 1) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v2;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
}

void game_menu_anonymous_fe2320(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 2) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
  else {
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v4, "MID_LGV_Scout_Negotiation_SP_Bon_m03");
    if (GameData_21ec7b8 == 0) {
      v5 = fw_memory_HeapManager_Allocate_alt1(*v3, 1376, 16, 0);
      GameRoutine_1130770(v5, v4, 0);
      v6 = *(_QWORD*)(a1 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = a1;
      *(_DWORD*)(v5 + 140) = game_HashString32();
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
          (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v5 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
    v9 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v9);
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 3) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v2;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
}

__n128 game_menu_anonymous_fe2530(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_No_Bon_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe26b0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Bon_m04");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v8);
  GameData_222e468 = 1;
}

__n128 game_menu_anonymous_fe28e0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Start_Tob_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe2dc0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  char v22;
  __int64 v23;
  _QWORD* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  char v29;
  __int64 v30;
  _QWORD* v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v35;
  char v36;
  __int64 v37;
  __int64 v38;

  if ((GameData_2167728 & 0x80000000) == 0) {
    v2 =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v3 = *(_QWORD*)(v2 + 8) + 12LL * (unsigned int)GameData_2167728;
    v6 = *(unsigned __int16*)(v3 + 4);
    v4 = v3 + 4;
    v5 = v6;
    v7 = *(_QWORD*)(*GameData_212cc28[0] + 64);
    v8 = *(_QWORD*)(*GameData_212cc28[0] + 72) - v7;
    if ((int)(v8 >> 3) < 1) {
    LABEL_38:
      TransporterConst_89b3d0((void*)(&v38), v2, v4, 1);
    }
    else {
      v9 = (v8 >> 3) & 0x7FFFFFFF;
      v10 = 0;
      v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v5);
      while (1) {
        v12 = *(_QWORD*)(v7 + 8 * v10);
        v13 = *(unsigned __int16*)(v12 + 32);
        if (*(_WORD*)(v12 + 32) != 0) {
          break;
        }
      LABEL_4:
        if (++v10 == v9) {
          goto LABEL_38;
        }
      }
      v14 = (__int64*)(*(_QWORD*)(v12 + 40) + 8LL);
      while (1) {
        v15 = *v14;
        v14 += 2;
        if (v15 == v11) {
          break;
        }
        if (--v13 == 0) {
          goto LABEL_4;
        }
      }
      TransporterConst_89b3d0((void*)(&v38), v2, v4, 1);
      if ((_DWORD)v10 != 2) {
        if ((_DWORD)v10 == 1) {
          v31 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v32 = (char*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
          strcpy(v32, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Tob_m02");
          if (GameData_21ec7b8 == 0) {
            v33 = fw_memory_HeapManager_Allocate_alt1(*v31, 1376, 16, 0);
            GameRoutine_1130770(v33, v32, 0);
            v34 = *(_QWORD*)(a1 + 40);
            if (v34 != 0) {
              *(_QWORD*)(v34 + 48) = v33;
              *(_QWORD*)(v33 + 56) = *(_QWORD*)(a1 + 40);
            }
            *(_QWORD*)(a1 + 40) = v33;
            *(_QWORD*)(v33 + 24) = "talk::Seq";
            *(_QWORD*)(v33 + 32) = a1;
            *(_DWORD*)(v33 + 140) = game_HashString32();
            *(_QWORD*)(v33 + 64) = 0;
            *(_QWORD*)(v33 + 72) = 24;
            *(_QWORD*)(v33 + 80) = 1;
            *(_QWORD*)(v33 + 8) = &GameData_216de68;
            *(_QWORD*)(v33 + 16) = &GameData_216de68;
            (*(void (**)(__int64))(*(_QWORD*)v33 + 32LL))(v33);
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v33 + 136LL))(v33) & 1) !=
                    0 &&
                (*(_WORD*)(v33 + 136) & 0x100) == 0) {
              *(_WORD*)(v33 + 136) |= 0x100u;
            }
            v35 = *(_BYTE**)(v33 + 32);
            v36 = v35[138];
            if (v36 == 0) {
              (*(void (**)(_QWORD))(*(_QWORD*)v35 + 64LL))(
                  *(_QWORD*)(v33 + 32));
              v36 = v35[138];
            }
            v35[138] = v36 + 1;
            *(_WORD*)(v33 + 136) |= 2u;
          }
          v37 = 128;
          if (*(_QWORD*)(*v31 + 200LL) == 0) {
            v37 = 56;
          }
          nn_mem_StandardAllocator_Free(*v31 + v37);
          v16 = *(_QWORD*)(a1 + 8);
          if (v16 != 0) {
            while (1) {
              if (*(_BYTE*)v16 == 2) {
                if (*(_DWORD*)(v16 + 32) == 3) {
                  goto LABEL_75;
                }
              }
              else if (*(_BYTE*)v16 == 0) {
                return;
              }
              v16 += 64;
            }
          }
        }
        else if ((_DWORD)v10 == 0) {
          v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v18 = (char*)fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
          strcpy(v18, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Tob_m01");
          if (GameData_21ec7b8 == 0) {
            v19 = fw_memory_HeapManager_Allocate_alt1(*v17, 1376, 16, 0);
            GameRoutine_1130770(v19, v18, 0);
            v20 = *(_QWORD*)(a1 + 40);
            if (v20 != 0) {
              *(_QWORD*)(v20 + 48) = v19;
              *(_QWORD*)(v19 + 56) = *(_QWORD*)(a1 + 40);
            }
            *(_QWORD*)(a1 + 40) = v19;
            *(_QWORD*)(v19 + 24) = "talk::Seq";
            *(_QWORD*)(v19 + 32) = a1;
            *(_DWORD*)(v19 + 140) = game_HashString32();
            *(_QWORD*)(v19 + 64) = 0;
            *(_QWORD*)(v19 + 72) = 24;
            *(_QWORD*)(v19 + 80) = 1;
            *(_QWORD*)(v19 + 8) = &GameData_216de68;
            *(_QWORD*)(v19 + 16) = &GameData_216de68;
            (*(void (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19);
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v19 + 136LL))(v19) & 1) !=
                    0 &&
                (*(_WORD*)(v19 + 136) & 0x100) == 0) {
              *(_WORD*)(v19 + 136) |= 0x100u;
            }
            v21 = *(_BYTE**)(v19 + 32);
            v22 = v21[138];
            if (v22 == 0) {
              (*(void (**)(_QWORD))(*(_QWORD*)v21 + 64LL))(
                  *(_QWORD*)(v19 + 32));
              v22 = v21[138];
            }
            v21[138] = v22 + 1;
            *(_WORD*)(v19 + 136) |= 2u;
          }
          v23 = 128;
          if (*(_QWORD*)(*v17 + 200LL) == 0) {
            v23 = 56;
          }
          nn_mem_StandardAllocator_Free(*v17 + v23);
          v16 = *(_QWORD*)(a1 + 8);
          if (v16 != 0) {
            while (1) {
              if (*(_BYTE*)v16 == 2) {
                if (*(_DWORD*)(v16 + 32) == 3) {
                  goto LABEL_75;
                }
              }
              else if (*(_BYTE*)v16 == 0) {
                return;
              }
              v16 += 64;
            }
          }
        }
        return;
      }
    }
    v24 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v25 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
    strcpy(v25, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Tob_m03");
    if (GameData_21ec7b8 == 0) {
      v26 = fw_memory_HeapManager_Allocate_alt1(*v24, 1376, 16, 0);
      GameRoutine_1130770(v26, v25, 0);
      v27 = *(_QWORD*)(a1 + 40);
      if (v27 != 0) {
        *(_QWORD*)(v27 + 48) = v26;
        *(_QWORD*)(v26 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v26;
      *(_QWORD*)(v26 + 24) = "talk::Seq";
      *(_QWORD*)(v26 + 32) = a1;
      *(_DWORD*)(v26 + 140) = game_HashString32();
      *(_QWORD*)(v26 + 64) = 0;
      *(_QWORD*)(v26 + 72) = 24;
      *(_QWORD*)(v26 + 80) = 1;
      *(_QWORD*)(v26 + 8) = &GameData_216de68;
      *(_QWORD*)(v26 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v26 + 32LL))(v26);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v26 + 136LL))(v26) & 1) != 0 &&
          (*(_WORD*)(v26 + 136) & 0x100) == 0) {
        *(_WORD*)(v26 + 136) |= 0x100u;
      }
      v28 = *(_BYTE**)(v26 + 32);
      v29 = v28[138];
      if (v29 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v28 + 64LL))(*(_QWORD*)(v26 + 32));
        v29 = v28[138];
      }
      v28[138] = v29 + 1;
      *(_WORD*)(v26 + 136) |= 2u;
    }
    v30 = 128;
    if (*(_QWORD*)(*v24 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v24 + v30);
    v16 = *(_QWORD*)(a1 + 8);
    if (v16 != 0) {
      while (1) {
        if (*(_BYTE*)v16 == 2) {
          if (*(_DWORD*)(v16 + 32) == 5) {
            goto LABEL_75;
          }
        }
        else if (*(_BYTE*)v16 == 0) {
          return;
        }
        v16 += 64;
      }
    }
    return;
  }
  v16 = *(_QWORD*)(a1 + 8);
  if (v16 != 0) {
    while (1) {
      if (*(_BYTE*)v16 == 2) {
        if (*(_DWORD*)(v16 + 32) == 4) {
        LABEL_75:
          *(_QWORD*)(a1 + 16) = v16;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v16 == 0) {
        return;
      }
      v16 += 64;
    }
  }
}

__n128 game_menu_anonymous_fe3390(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_GiveReaction_Tob_m05_001");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe3510(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_OK_Tob_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v8);
  GameData_222e468 = 1;
}

__n128 game_menu_anonymous_fe3690(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_NoGive_Tob_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fe38b0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Buc_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe3a40(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  int v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  void* v8;
  _BYTE* v9;
  char v10;
  char* v11;
  __int64 v12;
  void* v13;
  _BYTE* v14;
  char v15;
  __int64 v16;
  __int64 v17;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = 2;
    GameData_222e468 = 2;
    v5 = (char*)fw_memory_HeapManager_Allocate_alt1(v3, 40, 16, 0);
    strcpy(v5, "MID_LGV_Scout_Negotiation_SP_Buc_m03");
    if (*GameData_212d460[0] != 0) {
      goto LABEL_22;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v6, v5, 0);
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = game_HashString32();
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    v8 = GameData_2130228;
    *(_QWORD*)(v6 + 8) = GameData_2130228;
    *(_QWORD*)(v6 + 16) = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v9 = *(_BYTE**)(v6 + 32);
    v10 = v9[138];
    if (v10 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v6 + 32));
      v10 = v9[138];
    }
    v9[138] = v10 + 1;
    v4 = 2;
  }
  else {
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v11, "MID_LGV_Scout_Negotiation_SP_Buc_m02");
    if (*GameData_212d460[0] != 0) {
      v4 = 1;
      goto LABEL_22;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v6, v11, 0);
    v12 = *(_QWORD*)(a1 + 40);
    if (v12 != 0) {
      *(_QWORD*)(v12 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = game_HashString32();
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    v13 = GameData_2130228;
    *(_QWORD*)(v6 + 8) = GameData_2130228;
    *(_QWORD*)(v6 + 16) = v13;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v14 = *(_BYTE**)(v6 + 32);
    v15 = v14[138];
    if (v15 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*(_QWORD*)(v6 + 32));
      v15 = v14[138];
    }
    v14[138] = v15 + 1;
    v4 = 1;
  }
  *(_WORD*)(v6 + 136) |= 2u;
LABEL_22:
  v16 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v16);
  v17 = *(_QWORD*)(a1 + 8);
  if (v17 != 0) {
    while (1) {
      if (*(_BYTE*)v17 == 2) {
        if (*(_DWORD*)(v17 + 32) == v4) {
          *(_QWORD*)(a1 + 16) = v17;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v17 == 0) {
        return;
      }
      v17 += 64;
    }
  }
}

__n128 game_menu_anonymous_fe3e00(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Gat_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe3f80(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  int v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  void* v8;
  _BYTE* v9;
  char v10;
  char* v11;
  __int64 v12;
  void* v13;
  _BYTE* v14;
  char v15;
  __int64 v16;
  __int64 v17;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = 2;
    GameData_222e468 = 2;
    v5 = (char*)fw_memory_HeapManager_Allocate_alt1(v3, 40, 16, 0);
    strcpy(v5, "MID_LGV_Scout_Negotiation_SP_Gat_m03");
    if (*GameData_212d460[0] != 0) {
      goto LABEL_22;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v6, v5, 0);
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = game_HashString32();
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    v8 = GameData_2130228;
    *(_QWORD*)(v6 + 8) = GameData_2130228;
    *(_QWORD*)(v6 + 16) = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v9 = *(_BYTE**)(v6 + 32);
    v10 = v9[138];
    if (v10 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v6 + 32));
      v10 = v9[138];
    }
    v9[138] = v10 + 1;
    v4 = 2;
  }
  else {
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v11, "MID_LGV_Scout_Negotiation_SP_Gat_m02");
    if (*GameData_212d460[0] != 0) {
      v4 = 1;
      goto LABEL_22;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v6, v11, 0);
    v12 = *(_QWORD*)(a1 + 40);
    if (v12 != 0) {
      *(_QWORD*)(v12 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = game_HashString32();
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    v13 = GameData_2130228;
    *(_QWORD*)(v6 + 8) = GameData_2130228;
    *(_QWORD*)(v6 + 16) = v13;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v14 = *(_BYTE**)(v6 + 32);
    v15 = v14[138];
    if (v15 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*(_QWORD*)(v6 + 32));
      v15 = v14[138];
    }
    v14[138] = v15 + 1;
    v4 = 1;
  }
  *(_WORD*)(v6 + 136) |= 2u;
LABEL_22:
  v16 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v16);
  v17 = *(_QWORD*)(a1 + 8);
  if (v17 != 0) {
    while (1) {
      if (*(_BYTE*)v17 == 2) {
        if (*(_DWORD*)(v17 + 32) == v4) {
          *(_QWORD*)(a1 + 16) = v17;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v17 == 0) {
        return;
      }
      v17 += 64;
    }
  }
}

__n128 game_menu_anonymous_fe4340(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Urs_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe44c0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 3) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
  else {
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v4, "MID_LGV_Scout_Negotiation_SP_Urs_m02");
    if (GameData_21ec7b8 == 0) {
      v5 = fw_memory_HeapManager_Allocate_alt1(*v3, 1376, 16, 0);
      GameRoutine_1130770(v5, v4, 0);
      v6 = *(_QWORD*)(a1 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = a1;
      *(_DWORD*)(v5 + 140) = game_HashString32();
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
          (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v5 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
    v9 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v9);
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 1) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v2;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
}

void game_menu_anonymous_fe46e0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 3) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
  else {
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v4, "MID_LGV_Scout_Negotiation_SP_Urs_m03");
    if (GameData_21ec7b8 == 0) {
      v5 = fw_memory_HeapManager_Allocate_alt1(*v3, 1376, 16, 0);
      GameRoutine_1130770(v5, v4, 0);
      v6 = *(_QWORD*)(a1 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = a1;
      *(_DWORD*)(v5 + 140) = game_HashString32();
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
          (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v5 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
    v9 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*v3 + v9);
    v2 = *(_QWORD*)(a1 + 8);
    if (v2 != 0) {
      while (1) {
        if (*(_BYTE*)v2 == 2) {
          if (*(_DWORD*)(v2 + 32) == 2) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v2;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v2 == 0) {
          return;
        }
        v2 += 64;
      }
    }
  }
}

__n128 game_menu_anonymous_fe4960(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_No_Urs_m05");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe4ae0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Urs_m04");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v8);
  GameData_222e468 = 1;
}

__n128 game_menu_anonymous_fe4d10(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Die_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe4ea0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  int v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  void* v8;
  _BYTE* v9;
  char v10;
  char* v11;
  __int64 v12;
  void* v13;
  _BYTE* v14;
  char v15;
  __int64 v16;
  __int64 v17;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = 2;
    GameData_222e468 = 2;
    v5 = (char*)fw_memory_HeapManager_Allocate_alt1(v3, 40, 16, 0);
    strcpy(v5, "MID_LGV_Scout_Negotiation_SP_Die_m03");
    if (*GameData_212d460[0] != 0) {
      goto LABEL_22;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v6, v5, 0);
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = game_HashString32();
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    v8 = GameData_2130228;
    *(_QWORD*)(v6 + 8) = GameData_2130228;
    *(_QWORD*)(v6 + 16) = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v9 = *(_BYTE**)(v6 + 32);
    v10 = v9[138];
    if (v10 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v9 + 64LL))(*(_QWORD*)(v6 + 32));
      v10 = v9[138];
    }
    v9[138] = v10 + 1;
    v4 = 2;
  }
  else {
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v11, "MID_LGV_Scout_Negotiation_SP_Die_m02");
    if (*GameData_212d460[0] != 0) {
      v4 = 1;
      goto LABEL_22;
    }
    v6 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v6, v11, 0);
    v12 = *(_QWORD*)(a1 + 40);
    if (v12 != 0) {
      *(_QWORD*)(v12 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = game_HashString32();
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    v13 = GameData_2130228;
    *(_QWORD*)(v6 + 8) = GameData_2130228;
    *(_QWORD*)(v6 + 16) = v13;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v14 = *(_BYTE**)(v6 + 32);
    v15 = v14[138];
    if (v15 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*(_QWORD*)(v6 + 32));
      v15 = v14[138];
    }
    v14[138] = v15 + 1;
    v4 = 1;
  }
  *(_WORD*)(v6 + 136) |= 2u;
LABEL_22:
  v16 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free(*v2 + v16);
  v17 = *(_QWORD*)(a1 + 8);
  if (v17 != 0) {
    while (1) {
      if (*(_BYTE*)v17 == 2) {
        if (*(_DWORD*)(v17 + 32) == v4) {
          *(_QWORD*)(a1 + 16) = v17;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return;
        }
      }
      else if (*(_BYTE*)v17 == 0) {
        return;
      }
      v17 += 64;
    }
  }
}

__n128 game_menu_anonymous_fe5260(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Scouting_Sar_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe53e0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_ScoutingNo_Sar_m01");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
      GameRoutine_1130770(v4, v3, 0);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = game_HashString32();
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
    v8 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v8);
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 5) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
  else {
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 1) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v9;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
}

__n128 game_menu_anonymous_fe55f0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Correct_Sar_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fe57e0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Correct_Sar_m02");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__n128 game_menu_anonymous_fe59c0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Correct_Sar_m03");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

void game_menu_anonymous_fe5b40(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;

  if (game_script_hub_talk_g_choice_menu_result == 1) {
    v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Correct_Sar_m04");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
      GameRoutine_1130770(v4, v3, 0);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = game_HashString32();
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
    v8 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*v2 + v8);
    GameData_222e468 = 1;
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 5) {
            goto LABEL_27;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
  else {
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 4) {
          LABEL_27:
            *(_QWORD*)(a1 + 16) = v9;
            *(_WORD*)(a1 + 136) &= ~0x80u;
            return;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
}

__n128 game_menu_anonymous_fe5d70(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Incorrect_Sar_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32();
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v8);
}

__int64 game_menu_anonymous_15baf60(__int64 a1)
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
  __int64 v12;
  __int64 v13;
  __int64* v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  unsigned int v21;
  bool v22;
  __int64 v23;
  int v24;
  unsigned __int64 v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  atomic_ullong* v37;
  __int64* v38;
  __int64* v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  atomic_ullong* v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  unsigned int v52;
  bool v53;
  __int64 v54;
  int v55;
  unsigned int v56;
  int v57;
  __int64* v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  atomic_ullong* v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  atomic_ullong* v73;
  __int64* v74;
  const char* v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  bool v79;
  __int64 v80;
  int v81;
  __int64 result;
  __int64* v83;
  __int64 v84;
  struct {
    __int64* v85;
    __int64 v86;
  } v85_;

  game_menu_GameMenuItem_DrawText_alt1((_QWORD*)a1);
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
  v58 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
  std___1___shared_weak_count___release_weak_alt1(v4);
  v6 = v58;
  if (v58 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  Util_157e3a0_alt1(v6, (unsigned int*)(a1 + 108),
                    *(unsigned __int8*)(a1 + 104), *(_QWORD*)(a1 + 88));
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
  v59 = v11;
  (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
  std___1___shared_weak_count___release_weak_alt1(v9);
  v11 = v59;
  if (v59 == nullptr) {
  LABEL_10:
    v11 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  LayoutAccessor_1562cf0_alt1((__int64)v11, "RelianceOff");
  v12 = *(_QWORD*)(a1 + 56);
  if (v12 == 0) {
    goto LABEL_15;
  }
  v13 = std___1___shared_weak_count_lock_alt1(v12);
  if (v13 == 0) {
    goto LABEL_15;
  }
  v14 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v14 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v60 = v13;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak_alt1(v60);
  if (v14 == nullptr) {
  LABEL_15:
    v14 = &ui_LayoutAccessor_empty_;
  }
LABEL_16:
  v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  GameRoutine_157ac20_alt1(v14, (__int64)"IconEquip", 0, v15 & 1);
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*(_DWORD*)(a1 + 108) & 0xFFF)) +
                104LL) == 12) {
    v16 = *(_QWORD*)(a1 + 88);
    if (v16 == 0) {
      goto LABEL_30;
    }
    v17 = *(_QWORD*)(v16 + 392);
    if (v17 == 0) {
      goto LABEL_30;
    }
    v18 = *(_QWORD*)(v16 + 1904);
    if (v18 == 0) {
      goto LABEL_30;
    }
    v19 = *(unsigned __int8*)(v17 + 48);
    v20 = v16 + 1904;
    do {
      v21 = *(unsigned __int8*)(v18 + 26);
      v22 = v21 >= v19;
      if (v21 >= v19) {
        v23 = 0;
      }
      else {
        v23 = 8;
      }
      if (v22) {
        v20 = v18;
      }
      v18 = *(_QWORD*)(v18 + v23);
    } while (v18 != 0);
    if (v20 != v16 + 1904 && v19 >= *(unsigned __int8*)(v20 + 26)) {
      v24 = *(_WORD*)(v20 + 28) & 0xFFF;
    }
    else {
    LABEL_30:
      v24 = 0;
    }
    v25 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    if ((int)v25 < 1) {
    LABEL_45:
      v34 = *(_QWORD*)(a1 + 56);
      if (v34 == 0) {
        goto LABEL_50;
      }
      v35 = std___1___shared_weak_count_lock_alt1(v34);
      if (v35 == 0) {
        goto LABEL_50;
      }
      v36 = v35;
      v37 = (atomic_ullong*)(v35 + 8);
      v38 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v37, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v39 = v38;
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak_alt1(v36);
        v38 = v39;
      }
      if (v38 == nullptr) {
      LABEL_50:
        v38 = &ui_LayoutAccessor_empty_;
      }
      LayoutAccessor_1562cf0_alt1((__int64)v38, "DisableDefault");
      v40 = 3;
      v41 = *(_QWORD*)(a1 + 56);
      if (v41 == 0) {
      LABEL_91:
        v45 = &ui_LayoutAccessor_empty_;
      LABEL_92:
        LayoutAccessor_1562cf0_alt1((__int64)v45, "RelianceOn");
        v61 = *(_QWORD*)(a1 + 56);
        if (v61 == 0) {
          goto LABEL_97;
        }
        v62 = std___1___shared_weak_count_lock_alt1(v61);
        if (v62 == 0) {
          goto LABEL_97;
        }
        v63 = v62;
        v64 = (atomic_ullong*)(v62 + 8);
        v65 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v64, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          v66 = v65;
          (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
          std___1___shared_weak_count___release_weak_alt1(v63);
          v65 = v66;
        }
        if (v65 == nullptr) {
        LABEL_97:
          v65 = &ui_LayoutAccessor_empty_;
        }
        LayoutAccessor_1560070_alt1((void*)(&v85_.v85), v65, "L_Reliance");
        if (v85_.v86 != 0 &&
            (v67 = std___1___shared_weak_count_lock_alt1(v85_.v86)) != 0) {
          v68 = v67;
          GameHr_1583b80(v85_.v85, v40);
          if (atomic_fetch_add((atomic_ullong* volatile)(v68 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
            std___1___shared_weak_count___release_weak_alt1(v68);
          }
        }
        else {
          GameHr_1583b80(nullptr, v40);
        }
        if (v85_.v86 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v85_.v86);
        }
        goto LABEL_105;
      }
    LABEL_52:
      v42 = std___1___shared_weak_count_lock_alt1(v41);
      if (v42 != 0) {
        v43 = v42;
        v44 = (atomic_ullong*)(v42 + 8);
        v45 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v44, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          v46 = v45;
          (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
          std___1___shared_weak_count___release_weak_alt1(v43);
          v45 = v46;
        }
        if (v45 != nullptr) {
          goto LABEL_92;
        }
      }
      goto LABEL_91;
    }
    v26 = *(_DWORD*)GameData_21d9988;
    v27 = 0;
    v28 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v25 - 1));
    if (v28 >= v24) {
      v29 = v24;
    }
    else {
      v29 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v25 - 1));
    }
    if (v24 >= v26) {
      v30 = v29;
    }
    else {
      v30 = *(_DWORD*)GameData_21d9988;
    }
    v31 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
    while (1) {
      v32 = (unsigned int)(v27 + v31) >> 1;
      v33 = *(_DWORD*)(GameData_21d9988 + 4LL * v32);
      if (v30 == v33) {
        break;
      }
      if (v30 < v33) {
        v31 = (unsigned int)(v27 + v31) >> 1;
      }
      else {
        v27 = v32 + 1;
      }
      if (v27 >= v31) {
        if (v27 <= 2) {
          goto LABEL_45;
        }
        goto LABEL_58;
      }
    }
    if ((int)(v32 + 1) <= 2) {
      goto LABEL_45;
    }
  LABEL_58:
    if (v16 != 0) {
      v47 = *(_QWORD*)(v16 + 392);
      if (v47 != 0) {
        v48 = *(_QWORD*)(v16 + 1904);
        if (v48 == 0) {
        LABEL_72:
          v55 = 0;
          if (v28 >= (int)v48) {
            v28 = v48;
          }
          if ((int)v48 >= v26) {
            v26 = v28;
          }
          while (1) {
            v56 = (unsigned int)(v55 + v25) >> 1;
            v57 = *(_DWORD*)(GameData_21d9988 + 4LL * v56);
            if (v26 == v57) {
              break;
            }
            if (v26 < v57) {
              LODWORD(v25) = (unsigned int)(v55 + v25) >> 1;
            }
            else {
              v55 = v56 + 1;
            }
            if (v55 >= (int)v25) {
              if (v55 > 4) {
                goto LABEL_105;
              }
              goto LABEL_90;
            }
          }
          if ((int)(v56 + 1) > 4) {
            goto LABEL_105;
          }
        LABEL_90:
          v40 = 5;
          v41 = *(_QWORD*)(a1 + 56);
          if (v41 == 0) {
            goto LABEL_91;
          }
          goto LABEL_52;
        }
        v49 = v16 + 1904;
        v50 = *(unsigned __int8*)(v47 + 48);
        v51 = v49;
        do {
          v52 = *(unsigned __int8*)(v48 + 26);
          v53 = v52 >= v50;
          if (v52 >= v50) {
            v54 = 0;
          }
          else {
            v54 = 8;
          }
          if (v53) {
            v51 = v48;
          }
          v48 = *(_QWORD*)(v48 + v54);
        } while (v48 != 0);
        if (v51 != v49 && v50 >= *(unsigned __int8*)(v51 + 26)) {
          LODWORD(v48) = *(_WORD*)(v51 + 28) & 0xFFF;
          goto LABEL_72;
        }
      }
    }
    LODWORD(v48) = 0;
    goto LABEL_72;
  }
LABEL_105:
  v69 = *(_QWORD*)(a1 + 120);
  v70 = *(_QWORD*)(a1 + 56);
  if (v70 == 0) {
    goto LABEL_109;
  }
  v71 = std___1___shared_weak_count_lock_alt1(v70);
  if (v71 == 0) {
    goto LABEL_109;
  }
  v72 = v71;
  v73 = (atomic_ullong*)(v71 + 8);
  v74 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v73, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v83 = v74;
    (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
    std___1___shared_weak_count___release_weak_alt1(v72);
    v74 = v83;
    if (v83 != nullptr) {
      goto LABEL_110;
    }
    goto LABEL_109;
  }
  if (v74 == nullptr) {
  LABEL_109:
    v74 = &ui_LayoutAccessor_empty_;
  }
LABEL_110:
  if (v69 != 0) {
    v75 = *(const char**)(a1 + 120);
  }
  else {
    v75 = "InfoOff";
  }
  LayoutAccessor_1562cf0_alt1((__int64)v74, v75);
  v76 = *(_QWORD*)(a1 + 56);
  if (v76 == 0) {
    goto LABEL_117;
  }
  v77 = std___1___shared_weak_count_lock_alt1(v76);
  if (v77 == 0) {
    goto LABEL_117;
  }
  v78 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v77 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v78 != nullptr) {
      goto LABEL_118;
    }
    goto LABEL_117;
  }
  v84 = v77;
  (*(void (**)(__int64))(*(_QWORD*)v77 + 16LL))(v77);
  std___1___shared_weak_count___release_weak_alt1(v84);
  if (v78 == nullptr) {
  LABEL_117:
    v78 = &ui_LayoutAccessor_empty_;
  }
LABEL_118:
  v79 = ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) == 0;
  v80 = 72;
  if (!v79) {
    v80 = 36;
  }
  v81 = *(_DWORD*)((char*)GameData_212da30 + v80);
  result = ui_LayoutAccessor_FindTextBox_alt1(v78, (__int64)"T_Cost");
  if (result != 0) {
    result = Pane_58f8a0_alt1(result);
    if (result != 0) {
      *(_DWORD*)(result + 12) = v81;
    }
  }
  return result;
}

_QWORD* game_menu_anonymous_16b21a0(__int64 a1, __int64 a2, __int64 a3,
                                    __int64 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  _BYTE* v10;
  __int64 v11;
  char* v12;
  __int16* v13;
  int v14;
  int v15;
  char* v16;
  char* v17;
  __int64* v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;
  char* v31;
  _QWORD* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  const char* v40;
  struct {
    __int64 v41[2];
    char* v42;
  } v41_;
  struct {
    __int64 v43[2];
    char* v44;
  } v43_;
  struct {
    char* v45[2];
    char* v46;
  } v45_;
  struct {
    _WORD v47[8];
    char* v48;
  } v47_;
  struct {
    __int64* v49;
    void* v50;
    unsigned __int64 v51;
    unsigned __int64 v52;
    unsigned __int64* v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
  } v49_;

  v4 = *(unsigned __int8*)(a1 + 256);
  v5 = *(_QWORD*)(a1 + 264);
  v47_.v47[0] = 0;
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v5 != 0) {
    if ((v4 & 1) != 0) {
      v10 = *(_BYTE**)(a1 + 272);
    }
    else {
      v10 = (_BYTE*)(a1 + 257);
    }
    if (v10 != nullptr && *v10 != 0) {
      v49_.v54 = -1;
      v49_.v55 = -1;
      v49_.v56 = -1;
      v49_.v57 = -1;
      v11 = *msg_MessageManager_instance__ptr[0];
      v49_.v58 = -1;
      v49_.v59 = -1;
      v49_.v60 = -1;
      v49_.v61 = -1;
      v49_.v62 = -1;
      v49_.v63 = -1;
      v49_.v64 = -1;
      v49_.v65 = -1;
      v49_.v49 = GameData_212e348 + 2;
      v49_.v50 = (void*)0xFFFF0001FFFF0000LL;
      v49_.v51 = 0xFFFF0004FFFF0002LL;
      v49_.v52 = 0xFFFF0006FFFF0005LL;
      v49_.v66 = 8;
      v49_.v53 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
      v12 = GameRoutine_a4dbe0(v11, v10, 0);
    }
    else {
      v12 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020((__int64)v47_.v47, (__int64)v12);
  }
  else {
    if (game_gmap_GmapClock_instance_ != 0) {
      v13 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
    }
    else {
      v13 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v14 = v13[2];
    v15 = v13[3];
    GameRoutine_17d8b50((void*)(v45_.v45), v13[1], (__int64)&GameData_21759e0);
    if (((__int64)v45_.v45[0] & 1) != 0) {
      v16 = v45_.v46;
    }
    else {
      v16 = (char*)v45_.v45 + 1;
    }
    GameRoutine_17d8c30((void*)(v43_.v43), v14, (__int64)&GameData_21759e0);
    if ((v43_.v43[0] & 1) != 0) {
      v17 = v43_.v44;
    }
    else {
      v17 = (char*)v43_.v43 + 1;
    }
    GameRoutine_17d8d20((void*)(v41_.v41), v15, (__int64)&GameData_21759e0);
    v18 = msg_MessageManager_instance__ptr[0];
    if ((v41_.v41[0] & 1) != 0) {
      v19 = v41_.v42;
    }
    else {
      v19 = (char*)v41_.v41 + 1;
    }
    v20 = (__int64*)msg_MessageManager_empty_text__ptr;
    if (v16 != nullptr) {
      v21 = (__int64)v16;
    }
    else {
      v21 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v21);
    if (v17 != nullptr) {
      v22 = (__int64)v17;
    }
    else {
      v22 = *v20;
    }
    GameRoutine_60a020(*v18 + 14728, v22);
    if (v19 != nullptr) {
      v23 = (__int64)v19;
    }
    else {
      v23 = *v20;
    }
    GameRoutine_60a020(*v18 + 14752, v23);
    v24 = *v18;
    v49_.v54 = -1;
    v49_.v55 = -1;
    v49_.v56 = -1;
    v49_.v57 = -1;
    v49_.v58 = -1;
    v49_.v59 = -1;
    v49_.v60 = -1;
    v49_.v61 = -1;
    v49_.v62 = -1;
    v49_.v63 = -1;
    v49_.v64 = -1;
    v49_.v65 = -1;
    v49_.v49 = GameData_212e348 + 2;
    v49_.v50 = (void*)0xFFFF0001FFFF0000LL;
    v49_.v51 = 0xFFFF0004FFFF0002LL;
    v49_.v52 = 0xFFFF0006FFFF0005LL;
    v49_.v66 = 8;
    v49_.v53 = (unsigned __int64*)0xFFFF0008FFFF0007LL;
    v25 = GameRoutine_a4dbe0(v24, "MID_NextSelect_Main_Free_Confirm", 0);
    GameRoutine_60a020((__int64)v47_.v47, (__int64)v25);
    if ((v41_.v41[0] & 1) != 0 && v41_.v42 != nullptr) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
    }
    if ((v43_.v43[0] & 1) != 0 && v43_.v44 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
    if (((__int64)v45_.v45[0] & 1) != 0 && v45_.v46 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v29 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    if (v29 == 3 ||
        v29 == 1 && ((v49_.v50 = &GameData_1abbb2b,
                      v49_.v49 = (__int64*)game_HashString_alt1(
                          (__int64)&GameData_1abbb2b),
                      game_GameModeData_instance_ == 0) ||
                     (v30 = game_GameVariableTable_Find_alt1(
                          *(_QWORD**)(game_GameModeData_instance_ + 48),
                          (unsigned __int64*)&v49_.v49)) == 0 ||
                     *(_DWORD*)(v30 + 32) == 0)) {
      v49_.v53 = nullptr;
      if ((v47_.v47[0] & 1) != 0) {
        v36 = v47_.v48;
      }
      else {
        v36 = (char*)v47_.v47 + 1;
      }
      v45_.v45[0] = v36;
      v43_.v43[0] = (__int64)"MID_NextSelect_Yes_Individual";
      v40 = "MID_Sys_No";
      v41_.v41[0] = (__int64)"MID_NextSelect_Yes";
      v32 =
          RouteMenuItem_166e340(a1, v45_.v45, v43_.v43, v41_.v41,
                                (__int64*)&v40, a2, a3, a4, (__int64)&v49_.v49);
      if (v49_.v53 == (unsigned __int64*)&v49_.v49) {
        v37 = 32;
      }
      else {
        if (v49_.v53 == nullptr) {
          goto LABEL_67;
        }
        v37 = 40;
      }
      (*(void (**)(__int64))(*v49_.v53 + v37))((__int64)v49_.v53);
      goto LABEL_67;
    }
  }
  v49_.v53 = nullptr;
  if ((v47_.v47[0] & 1) != 0) {
    v31 = v47_.v48;
  }
  else {
    v31 = (char*)v47_.v47 + 1;
  }
  v45_.v45[0] = v31;
  v32 = (_QWORD*)HubTalkNatives_e14270(a1, v45_.v45);
  if (v32 != nullptr) {
    v33 = (__int64*)fw_memory_g_heap_manager_ptr;
    v34 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v34, (__int64)"MID_NextSelect_Yes", a2,
                        (__int64)&v49_.v49);
    BasicMenuCursor_16e0c00(v32, v34);
    v35 = fw_memory_HeapManager_Allocate(*v33, 192, 16, 0);
    GameRoutine_16477d0(v35, (__int64)"MID_Sys_No", a3, (__int64)&v49_.v49);
    BasicMenuCursor_16e0c00(v32, v35);
  }
LABEL_67:
  if ((v47_.v47[0] & 1) != 0 && v47_.v48 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v38);
  }
  return v32;
}

_QWORD* game_menu_anonymous_16b35f0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_menu_anonymous_ProcMainQuestSeq_vtable;
  if ((*(_BYTE*)(a1 + 256) & 1) != 0 && *(_QWORD*)(a1 + 272) != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
  }
  *(_QWORD*)a1 = &game_menu_anonymous_ProcNextSeq_vtable;
  if ((*(_BYTE*)(a1 + 208) & 1) != 0 && *(_QWORD*)(a1 + 224) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v3);
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_208b2f0;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_16;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_16:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00((_QWORD*)(a1 + 88));
}

#pragma GCC visibility pop
