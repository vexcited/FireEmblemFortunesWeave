#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_16e0c00(_QWORD* result, __int64);
__int64 GameRoutine_1015560(_QWORD);
__int64 GameRoutine_133f1d0(_QWORD);
__int64 GameRoutine_136a7b0(_QWORD, _QWORD);
__int64 GameRoutine_155ea30(_QWORD);
__int64 GameRoutine_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 GameRoutine_16ddaa0(__int64 result, int);
__int64 GameRoutine_1713a00(_QWORD, _QWORD);
__int64 GameRoutine_634d80(_QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GuideBaseMenu_Unknown139(void);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(__int64 result, char,
                                                    unsigned __int8,
                                                    unsigned __int8);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_20ae070[])();
extern __int64 (*GameData_20ae390[])();
extern __int64 (*game_gameui_DelayImageLoader_vtable[])();
extern __int64 (*game_gameui_ImageLoader_vtable[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 (*game_menu_anonymous_GuideMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_MarginMenuItem_vtable[])();
extern __int64 (*game_menu_anonymous_ProcGuideMenu_vtable[])();
extern __int64 GameData_212c610;
extern __int64 GameData_212c7c8[8];
extern __int64 GameData_2131c18[55];
extern __int64 GameData_2131cb8[35];
extern __int64 GameData_22416e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d6a8;
extern __int64* GameData_212dea8;
extern __int64* GameData_212fca0[2];
extern __int64* GameData_2130fa8[2];
extern __int64* GameData_2131ae8;
extern __int64* snd_g_fileIndex_ptr[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcGuideMenu_Unknown92(__int64 a1);
__int64 ProcGuideMenu_Unknown96(__int64 a1);
__int64 ProcGuideMenu_Unknown104(__int64 a1, char a2);
__int64 ProcGuideMenu_Unknown106(__int64 a1, char a2);
__int64 ProcGuideMenu_Unknown139_17137e0(__int64 result);
__int64 ProcGuideMenu_1713f50(__int64 result, _QWORD* a2);
__int64 ProcGuideMenu_1713fe0(__int64 a1, char a2);
__int64 ProcGuideMenu_Destructor(_QWORD* a1);
__int64 ProcGuideMenu_DeletingDestructor(_QWORD* a1);
_QWORD* ProcGuideMenu_Unknown128(__int64 a1, __int64 a2);
__int64 ProcGuideMenu_Unknown143(__int64 a1);
__int64 ProcGuideMenu_Unknown145(__int64 a1, int a2, char a3);
__int64
GuideBaseMenu_Unknown139_alt1(__int64,
                              __int64*) __asm__("GuideBaseMenu_Unknown139");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_13033d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcGuideMenu_Unknown10(__int64 result, __int64* a2);
__int64 ProcGuideMenu_Unknown139(__int64 a1, __int64* a2);
__int64 ProcGuideMenu_Unknown2(__int64 a1);
__int64
game_menu_anonymous_ProcGuideMenu_AddItemList_closure_Invoke(__int64 result,
                                                             __int64* a2);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1713820(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562060(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 game_821090(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_menu_PageTab_SetupLabel(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern int GameData_2175540;
void __attribute__((noreturn)) GameRoutine_17139e0(void);
__int64
ProcGuideMenu_Unknown84_alt1(__int64* a1) __asm__("ProcGuideMenu_Unknown84");
__int64 ProcGuideMenu_Unknown144(__int64 a1, int a2, char a3, char a4);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void __attribute__((noreturn)) String_60a1d0();
unsigned __int64 ProcGuideMenu_1713820(unsigned __int64 result, int a2);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64* game_821090_alt1(int) __asm__("game_821090");
__int64 BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 ProcInst_657850(__int64, __int64, const char*, char, __int64);
__int64 fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile(__int64,
                                                                  __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64
game_menu_PageTab_SetupLabel_alt1(__int64, __int64*, __int64, int, int,
                                  int) __asm__("game_menu_PageTab_SetupLabel");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void LayoutAccessor_1562060_alt1(__int64*, __int64,
                                 __int64) __asm__("LayoutAccessor_1562060");
void __attribute__((noreturn))
GameRoutine_17139e0_alt1() __asm__("GameRoutine_17139e0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
void ProcGuideMenu_Unknown84(__int64* a1);
_BYTE* ProcInst_657a50(__int64, char);
__int64 DelayImageLoader_19a37d0(__int64, const char*, unsigned int);
__int64 GameHr_1562680_alt1(__int64 result, unsigned int*,
                            float) __asm__("GameHr_1562680");
__int64 GameHr_1840a20(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_1585290(__int64*, const char*, const char*);
__int64 GuideMenuItem_1716850(__int64*, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Manager_136a710(__int64 result, unsigned int);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 game_menu_anonymous_1716080(__int64 result, __int64, char);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
char* GameHr_1301c20(__int64);
char* GameHr_1301e20(__int64);
char* Registration_a4db40(__int64, const char*);
char* game_util_Format(const char*, ...);
extern _BYTE GameData_1ac5049[];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void GameRoutine_190a0c0(float*, __int64, float*, _QWORD*, __int64);
void LayoutAccessor_1562060_alt2(__int64*, const char*,
                                 const char*) __asm__("LayoutAccessor_1562060");
void ui_LayoutAccessor_SetTextBoxString(__int64*, const char*, __int64);
__int64 ProcGuideMenu_Unknown88(__int64 result);

void ProcGuideMenu_Unknown84(__int64* a1)
{
  __int64 v2;
  char* v3;
  char* v4;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  signed __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  signed __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  signed __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  char* v46;
  char* v47;
  int v48;
  int* v49;
  int v50;
  int v51;
  int v52;
  int v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  int v57;
  char* v58;
  __int64 v59;
  struct {
    __int64 v60;
    __int64 v61;
  } v60_;
  struct {
    _QWORD v62[2];
    char* v63;
    char gap56_[8];
    __int64 v64;
  } v62_;

  snd_Fade_Fade_10c830_alt1((__int64)v62_.v62, 0x0.0p+0f);
  snd_play_ff2d0_alt1((__int64)"SE_SYS_GuideMenu_Open",
                      (__int64)"SE_SYS_GuideMenu_Open", (__int64)v62_.v62, 0,
                      0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  snd_Fade_Destroy_Fade_alt1(v62_.v62);
  GameHr_1562680((__int64)(a1 + 106), "Wait", 0x1.0000000000000p+0f);
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    v4 = nullptr;
    v7 = nullptr;
    v6 = nullptr;
    goto LABEL_82;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4, 16, 0);
    v2 = game_GameModeData_instance_;
    *(_DWORD*)v3 = 0;
    v4 = v3 + 4;
    v5 = (__int64)v3;
    v6 = v3;
    v7 = v3 + 4;
    if (v2 == 0) {
      goto LABEL_82;
    }
  }
  else {
    v5 = 0;
    v4 = nullptr;
  }
  if ((*(_DWORD*)(v2 + 60) | 2) == 3) {
    v8 = (unsigned __int64)&v4[-v5];
    v9 = (__int64)&v4[-v5] >> 2;
    v10 = v9 + 1;
    if ((unsigned __int64)(v9 + 1) >> 62 != 0) {
      goto LABEL_136;
    }
    if (v8 >> 1 > v10) {
      v10 = v8 >> 1;
    }
    if (v8 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v10;
    }
    if (v11 != 0) {
      if (v11 >> 62 != 0) {
        goto LABEL_137;
      }
      v12 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
    }
    else {
      v12 = 0;
    }
    v7 = (char*)(v12 + 4 * v11);
    v13 = (unsigned __int64)&v4[-v5];
    v6 = (char*)(v12 + v8 - 4 * v9);
    *(_DWORD*)(v12 + v8) = 1;
    v4 = (char*)(v12 + v8 + 4);
    memcpy_alt1((__int64)v6, v5, v13);
    if (v5 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v5);
    }
  }
  else {
    v7 = v4;
    v6 = (char*)v5;
  }
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_82;
  }
  if ((*(_DWORD*)(game_GameModeData_instance_ + 60) | 2) == 3) {
    if (v4 >= v7) {
      v16 = v4 - v6;
      v17 = (v4 - v6) >> 2;
      v18 = v17 + 1;
      if ((unsigned __int64)(v17 + 1) >> 62 != 0) {
        goto LABEL_136;
      }
      if ((v7 - v6) >> 1 > v18) {
        v18 = (v7 - v6) >> 1;
      }
      if ((unsigned __int64)(v7 - v6) >= 0x7FFFFFFFFFFFFFFCLL) {
        v19 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v18;
      }
      if (v19 != 0) {
        if (v19 >> 62 != 0) {
          goto LABEL_137;
        }
        v20 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v19, 16, 0);
      }
      else {
        v20 = 0;
      }
      v7 = (char*)(v20 + 4 * v19);
      v21 = v4 - v6;
      v22 = v20 + v16 - 4 * v17;
      *(_DWORD*)(v20 + v16) = 2;
      v4 = (char*)(v20 + v16 + 4);
      memcpy_alt1(v22, (__int64)v6, v21);
      if (v6 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, (__int64)v6);
      }
      v6 = (char*)v22;
      v15 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_82;
      }
      goto LABEL_44;
    }
    *(_DWORD*)v4 = 2;
    v4 += 4;
  }
  v15 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_82;
  }
LABEL_44:
  if ((*(_DWORD*)(v15 + 60) | 2) != 3) {
    goto LABEL_47;
  }
  if (v4 < v7) {
    *(_DWORD*)v4 = 3;
    v4 += 4;
  LABEL_47:
    v24 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_82;
    }
    goto LABEL_64;
  }
  v25 = v4 - v6;
  v26 = (v4 - v6) >> 2;
  v27 = v26 + 1;
  if ((unsigned __int64)(v26 + 1) >> 62 != 0) {
    goto LABEL_136;
  }
  if ((v7 - v6) >> 1 > v27) {
    v27 = (v7 - v6) >> 1;
  }
  if ((unsigned __int64)(v7 - v6) >= 0x7FFFFFFFFFFFFFFCLL) {
    v28 = 0x3FFFFFFFFFFFFFFFLL;
  }
  else {
    v28 = v27;
  }
  if (v28 != 0) {
    if (v28 >> 62 != 0) {
      goto LABEL_137;
    }
    v29 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v28, 16, 0);
  }
  else {
    v29 = 0;
  }
  v7 = (char*)(v29 + 4 * v28);
  v30 = v4 - v6;
  v31 = v29 + v25 - 4 * v26;
  *(_DWORD*)(v29 + v25) = 3;
  v4 = (char*)(v29 + v25 + 4);
  memcpy_alt1(v31, (__int64)v6, v30);
  if (v6 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v6);
  }
  v6 = (char*)v31;
  v24 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
  LABEL_64:
    if ((unsigned int)(*(_DWORD*)(v24 + 60) - 1) > 2) {
      goto LABEL_82;
    }
    if (v4 < v7) {
      *(_DWORD*)v4 = 4;
      v4 += 4;
      goto LABEL_82;
    }
    v33 = v4 - v6;
    v34 = (v4 - v6) >> 2;
    v35 = v34 + 1;
    if ((unsigned __int64)(v34 + 1) >> 62 == 0) {
      v36 = fw_memory_g_heap_manager_ptr;
      if ((v7 - v6) >> 1 > v35) {
        v35 = (v7 - v6) >> 1;
      }
      if ((unsigned __int64)(v7 - v6) >= 0x7FFFFFFFFFFFFFFCLL) {
        v37 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v37 = v35;
      }
      if (v37 == 0) {
        v38 = 0;
        goto LABEL_77;
      }
      if (v37 >> 62 == 0) {
        v38 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v37, 16, 0);
      LABEL_77:
        v7 = (char*)(v38 + 4 * v37);
        v39 = v4 - v6;
        v40 = v38 + v33 - 4 * v34;
        *(_DWORD*)(v38 + v33) = 4;
        v4 = (char*)(v38 + v33 + 4);
        memcpy_alt1(v40, (__int64)v6, v39);
        if (v6 != nullptr) {
          v41 = 128;
          if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
            v41 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v36 + v41, (__int64)v6);
        }
        v6 = (char*)v40;
        goto LABEL_82;
      }
    LABEL_137:
      GameRoutine_60a210_alt1();
    }
  LABEL_136:
    GameRoutine_17139e0_alt1();
  }
LABEL_82:
  v42 = a1[150];
  if (v42 != 0) {
    a1[151] = v42;
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v42);
  }
  a1[150] = (__int64)v6;
  a1[151] = (__int64)v4;
  v44 = GameData_2175540;
  a1[152] = (__int64)v7;
  if (v44 == 5 && v6 != v4) {
    do {
      v51 = *(_DWORD*)v6;
      if (*(int*)v6 <= 1) {
        if (v51 == 0) {
          if (game_GameModeData_instance_ == 0 ||
              *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
            goto LABEL_96;
          }
        LABEL_119:
          v53 = v51 + 35;
          goto LABEL_120;
        }
        if (v51 != 1 || game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v52 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if (v52 != 1) {
          goto LABEL_115;
        }
        v53 = 36;
      }
      else if (v51 == 2) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v52 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if (v52 != 1) {
        LABEL_115:
          if (v52 != 3) {
            goto LABEL_96;
          }
          goto LABEL_119;
        }
        v53 = 37;
      }
      else if (v51 == 3) {
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v52 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if (v52 != 1) {
          goto LABEL_115;
        }
        v53 = 38;
      }
      else {
        if (v51 != 4 || game_GameModeData_instance_ == 0) {
          goto LABEL_96;
        }
        v52 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        if ((unsigned int)(v52 - 1) >= 2) {
          goto LABEL_115;
        }
        v53 = 39;
      }
    LABEL_120:
      v54 = game_821090_alt1(v53);
      if (game_GameModeData_instance_ != 0) {
        v55 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v54);
        if (v55 != 0 && *(int*)(v55 + 32) >= 1) {
          GameData_2175540 = *(_DWORD*)v6;
          break;
        }
      }
    LABEL_96:
      v6 += 4;
    } while (v6 != v4);
  }
  v46 = (char*)a1[150];
  v47 = (char*)a1[151];
  if (v46 == v47) {
    v48 = 0;
  }
  else {
    v48 = 0;
    v49 = (int*)a1[150];
    do {
      v50 = *v49++;
      if (GameData_2175540 == v50) {
        break;
      }
      ++v48;
    } while (v49 != (int*)v47);
  }
  *((_DWORD*)a1 + 269) = v48;
  *((_DWORD*)a1 + 270) = v48;
  *((_DWORD*)a1 + 268) = ((unsigned __int64)(v47 - v46) >> 2) - 1;
  LayoutAccessor_1560070_alt1((void*)(&v60_.v60), a1 + 106, "L_PageTab");
  v56 = *a1;
  v62_.v64 = 0;
  v57 = (*(__int64 (**)(__int64*))(v56 + 192))(a1);
  game_menu_PageTab_SetupLabel_alt1((__int64)(a1 + 134), &v60_.v60,
                                    (__int64)v62_.v62, v57, 4, 5);
  if (v60_.v61 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v60_.v61);
  }
  ProcGuideMenu_1713820((unsigned __int64)v62_.v62, GameData_2175540);
  if ((v62_.v62[0] & 1) != 0) {
    v58 = v62_.v63;
  }
  else {
    v58 = (char*)v62_.v62 + 1;
  }
  LayoutAccessor_1562060_alt1(a1 + 106, (__int64)"L_PageTab/T_Txt",
                              (__int64)v58);
  if ((v62_.v62[0] & 1) != 0 && v62_.v63 != nullptr) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v62_.v63);
  }
}

__int64 ProcGuideMenu_Unknown92(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = a1;
  v3 = a1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v3, v4, v5, 0);
    v3 = *(_QWORD*)(v3 + 32);
    if (result != 0) {
      v2 = result;
    }
  } while (v3 != 0);
  if (v2 == a1) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  if (*(_BYTE*)(a1 + 1069) == 1) {
    v7 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0 &&
        game_gmap_GmapClock_instance_ != 0 &&
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
            0) {
      v8 = *(_QWORD*)(v7 + 8);
      if (v8 != 0) {
        while (1) {
          if (*(_BYTE*)v8 == 2) {
            if (*(_DWORD*)(v8 + 32) == 5) {
              *(_QWORD*)(v7 + 16) = v8;
              *(_WORD*)(v7 + 136) &= ~0x80u;
              return result;
            }
          }
          else if (*(_BYTE*)v8 == 0) {
            return result;
          }
          v8 += 64;
        }
      }
    }
  }
  return result;
}

__int64 ProcGuideMenu_Unknown96(__int64 a1)
{
  __int64 result;

  game_menu_BasicMenu_Unknown96(a1);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 168LL))(a1);
  if ((unsigned int)(result - 8) <= 0xFFFFFFF9) {
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 96LL))(a1 + 1056);
  }
  if ((*(_BYTE*)(a1 + 1070) & 1) == 0) {
    return GameRoutine_16ddaa0(a1, 3);
  }
  return result;
}

__int64 ProcGuideMenu_Unknown104(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;

  if (*(_BYTE*)(a1 + 1070) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 1088);
  v4 = *(int*)(a1 + 1076);
  if (v4 < (*(_QWORD*)(a1 + 1096) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  GameRoutine_1713a00(a1, *(unsigned int*)(*(_QWORD*)(a1 + 1200) + 4 * v4));
  return 13;
}

__int64 ProcGuideMenu_Unknown106(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;

  if (*(_BYTE*)(a1 + 1070) != 1) {
    return 0;
  }
  if ((game_menu_PageTab_Move(a1 + 1072, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 1088);
  v4 = *(int*)(a1 + 1076);
  if (v4 < (*(_QWORD*)(a1 + 1096) - v3) >> 2) {
    v4 = *(int*)(v3 + 4 * v4);
  }
  GameRoutine_1713a00(a1, *(unsigned int*)(*(_QWORD*)(a1 + 1200) + 4 * v4));
  return 13;
}

__int64 ProcGuideMenu_Unknown139_17137e0(__int64 result)
{
  if (*(_BYTE*)(result + 1070) == 1) {
    return GuideBaseMenu_Unknown139();
  }
  return result;
}

__int64 ProcGuideMenu_Unknown10(__int64 result, __int64* a2)
{
  if (*(_BYTE*)(result + 14) == 1) {
    return GuideBaseMenu_Unknown139_alt1(result - 1056, a2);
  }
  return result;
}

unsigned __int64 ProcGuideMenu_1713820(unsigned __int64 result, int a2)
{
  _QWORD* v2;
  const char* v3;
  unsigned __int64 v4;
  char* v5;
  const char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result;
  if (a2 > 1) {
    switch (a2) {
    case 2:
      *(_BYTE*)result = 34;
      *(_WORD*)(result + 17) = 116;
      v6 = "MID_SysMenu_Quest";
      break;
    case 3:
      *(_BYTE*)result = 40;
      strcpy((char*)(result + 17), "ndar");
      v6 = "MID_SysMenu_Calendar";
      break;
    case 4:
      result = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
      *v2 = 33;
      v2[1] = 24;
      v2[2] = result;
      strcpy((char*)result, "MID_PerchMenu_BattleHint");
      return result;
    default:
      goto LABEL_19;
    }
  LABEL_18:
    v8 = *(_QWORD*)v6;
    v7 = *((_QWORD*)v6 + 1);
    *(_QWORD*)(result + 1) = v8;
    *(_QWORD*)(result + 9) = v7;
    return result;
  }
  if (a2 == 0) {
    *(_BYTE*)result = 34;
    *(_WORD*)(result + 17) = 101;
    v6 = "MID_SysMenu_Guide";
    goto LABEL_18;
  }
  if (a2 != 1) {
  LABEL_19:
    *(_WORD*)result = 0;
    return result;
  }
  v3 = "MID_SysMenu_Honor";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v3 = "MID_SysMenu_Honor_Part3";
  }
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v4 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (result | 7) + 1;
    }
    v10 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v9, 16,
                                              0);
    v2[1] = v4;
    v2[2] = v10;
    *v2 = v9 | 1;
    v5 = (char*)v10;
  }
  else {
    *(_BYTE*)v2 = 2 * result;
    v5 = (char*)v2 + 1;
    if (result == 0) {
      goto LABEL_25;
    }
  }
  result = memcpy(v5, v3, v4);
LABEL_25:
  v5[v4] = 0;
  return result;
}

__int64 ProcGuideMenu_1713f50(__int64 result, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;

  if ((**(_BYTE**)(result + 8) & 1) == 0) {
    v2 = *(_QWORD*)(*a2 + 96LL);
    if (v2 != 0 && *(_BYTE*)(v2 + 32) == 4) {
      v3 = result;
      result = GameRoutine_133f1d0(*a2);
      if ((result & 1) != 0) {
        **(_BYTE**)(v3 + 8) = 1;
      }
    }
  }
  return result;
}

__int64 ProcGuideMenu_1713fe0(__int64 a1, char a2)
{
  __int64 v2;
  int v3;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  char v10;
  __int64 v11;
  char v12;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  struct {
    _QWORD v27[3];
    __int64 v28;
    __int64 v29;
    int v30;
  } v27_;
  struct {
    __int64 v31;
    __int64 v32;
  } v31_;

  if (game_GameModeData_instance_ != 0) {
    v2 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v2 != 0) {
      v3 = *(unsigned __int8*)(v2 + 89);
      while (1) {
        v2 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 8LL);
        if (v2 == 0 || *(unsigned __int8*)(v2 + 89) != v3) {
          break;
        }
        if (*(_BYTE*)(v2 + 33) == 17) {
          v6 = (__int64*)fw_memory_g_heap_manager_ptr;
          v7 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 1184, 16, 0);
          v31_.v31 = 0;
          v31_.v32 = 0;
          BasicMenu_16dcd30(v7, (__int64)"GuideMenu", &v31_.v31, 0);
          v8 = GameData_212d6a8;
          v9 = v31_.v32;
          *(_QWORD*)v7 = GameData_212d6a8 + 2;
          *(_QWORD*)(v7 + 176) = v8 + 143;
          *(_QWORD*)(v7 + 1056) = v8 + 169;
          if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
            std___1___shared_weak_count___release_weak_alt2(v9);
          }
          v10 = a2 & 1;
          v11 = GameData_2131cb8[0];
          *(_DWORD*)(v7 + 1064) = 0;
          *(_BYTE*)(v7 + 1068) = 0;
          *(_QWORD*)v7 = v11 + 16;
          *(_QWORD*)(v7 + 176) = v11 + 1168;
          *(_QWORD*)(v7 + 1056) = v11 + 1376;
          if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
            v12 = LayoutAccessor_155ea30(
                (__int64*)(*(_QWORD*)
                               game_hub_ProgressEventView_instance__ptr[0] +
                           168LL));
          }
          else {
            v12 = 0;
          }
          v14 = v12 & 1;
          v15 = *v6;
          *(_BYTE*)(v7 + 1069) = v14;
          *(_QWORD*)v7 = game_menu_anonymous_ProcGuideMenu_vtable;
          *(_QWORD*)(v7 + 176) = game_menu_MenuInput_InputUnknown00_ptr;
          *(_QWORD*)(v7 + 1056) = GameData_20ae070;
          v16 = fw_memory_HeapManager_Allocate_alt1(v15, 168, 16, 0);
          *(_QWORD*)v16 = 0;
          *(_QWORD*)(v16 + 8) = 0;
          *(_QWORD*)(v16 + 16) = 0;
          *(_QWORD*)(v16 + 24) = 0;
          *(_QWORD*)(v16 + 32) = 0;
          *(_QWORD*)(v16 + 40) = 0;
          *(_QWORD*)(v16 + 48) = 0;
          *(_QWORD*)(v16 + 56) = 0;
          *(_QWORD*)(v16 + 64) = 0;
          *(_QWORD*)(v16 + 72) = 0;
          *(_QWORD*)(v16 + 80) = 0;
          *(_QWORD*)(v16 + 88) = 0;
          *(_QWORD*)(v16 + 96) = 0;
          *(_QWORD*)(v16 + 104) = 0;
          *(_QWORD*)(v16 + 112) = 0;
          *(_QWORD*)(v16 + 120) = 0;
          *(_QWORD*)(v16 + 128) = 0;
          *(_QWORD*)(v16 + 136) = 0;
          *(_QWORD*)(v16 + 144) = 0;
          *(_QWORD*)(v16 + 152) = 0;
          *(_QWORD*)(v16 + 160) = 0;
          v17 = GameData_212fca0[0] + 2;
          *(_QWORD*)(v16 + 48) = 0;
          *(_QWORD*)(v16 + 56) = 0;
          *(_QWORD*)(v16 + 64) = 0;
          *(_QWORD*)(v16 + 72) = 0;
          *(_QWORD*)(v16 + 16) = v17;
          *(_QWORD*)(v16 + 24) = -1;
          v18 = GameData_212dea8;
          *(_QWORD*)(v16 + 128) = 0;
          *(_QWORD*)(v16 + 136) = 0;
          *(_QWORD*)(v16 + 144) = 0;
          *(_QWORD*)(v16 + 152) = 0;
          *(_BYTE*)(v16 + 160) = 0;
          *(_QWORD*)(v16 + 96) = 0;
          *(_QWORD*)(v16 + 104) = 0;
          *(_QWORD*)(v16 + 112) = 0;
          *(_QWORD*)(v16 + 117) = 0;
          *(_DWORD*)(v16 + 164) = 1;
          *(_QWORD*)(v7 + 1072) = v16;
          *(_DWORD*)(v7 + 1080) = 0;
          *(_BYTE*)(v7 + 1084) = 0;
          *(_DWORD*)(v7 + 1104) = 0;
          *(_QWORD*)(v7 + 1096) = 0;
          *(_QWORD*)(v7 + 1088) = 0;
          *(_QWORD*)(v16 + 80) = 0;
          *(_QWORD*)(v16 + 88) = v18 + 2;
          v19 = GameData_2131ae8 + 2;
          *(_QWORD*)(v7 + 1152) = 0;
          *(_QWORD*)(v7 + 1112) = v19;
          v20 = GameData_2130fa8[0];
          *(_QWORD*)(v7 + 1128) = 0;
          *(_QWORD*)(v7 + 1144) = -1;
          *(_QWORD*)(v7 + 1136) = v17;
          *(_QWORD*)(v7 + 1160) = 0;
          *(_DWORD*)(v7 + 1168) = 0;
          *(_QWORD*)(v7 + 1176) = 0;
          *(_QWORD*)(v7 + 1120) = v20 + 2;
          v21 = ui_Manager_instance_;
          v22 = *(_QWORD*)(ui_Manager_instance_ + 5776);
          ++*(_DWORD*)(ui_Manager_instance_ + 6148);
          if (v22 == 0) {
            sprintf_alt1((__int64)&v31_.v31, "Layout/Textures/%s.arc",
                         "Thumb_Recipe");
            v27_.v27[0] = &v31_.v31;
            v23 = *snd_g_fileIndex_ptr[0];
            v27_.v27[1] = strlen_alt1((const char*)&v31_.v31);
            v27_.v27[2] = 0;
            v27_.v30 = 1;
            v27_.v28 = 0;
            v27_.v29 = GameData_22416e0;
            *(_QWORD*)(v21 + 5776) =
                fs_Manager_createFileAsync_ui_IconManager_Ui2dIconArcFile(
                    v23, (__int64)v27_.v27);
            if (v27_.v28 != 0) {
              std___1___shared_weak_count___release_weak_alt2(v27_.v28);
            }
          }
          *(_BYTE*)(v7 + 1068) = v10;
          ProcInst_657850(v7, (__int64)GameData_212c730, "ProcGuideMenu", 1,
                          a1);
          v25 = *(_QWORD**)(v7 + 256);
          v24 = *(_QWORD**)(v7 + 264);
          *(_QWORD*)(v7 + 336) = 0;
          while (v25 != v24) {
            if (*v25 != 0) {
              (*(void (**)(_QWORD))(*(_QWORD*)*v25 + 8LL))(*v25);
              v24 = *(_QWORD**)(v7 + 264);
            }
            ++v25;
          }
          v26 = *(_QWORD*)(v7 + 344);
          if (v26 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v26 + 8LL))(v26);
            *(_QWORD*)(v7 + 344) = 0;
          }
          *(_QWORD*)(v7 + 264) = *(_QWORD*)(v7 + 256);
          *(_QWORD*)(v7 + 240) = *(_QWORD*)(v7 + 232);
          (*(void (**)(__int64))(*(_QWORD*)v7 + 1024LL))(v7);
          (*(void (**)(__int64))(*(_QWORD*)v7 + 1032LL))(v7);
          return v7;
        }
      }
    }
  }
  return 0;
}

__int64 ProcGuideMenu_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = ui_Manager_instance_;
  --*(_DWORD*)(ui_Manager_instance_ + 6148);
  *(_DWORD*)(v2 + 6144) = 1;
  a1[139] = game_gameui_DelayImageLoader_vtable;
  v3 = a1[147];
  if (v3 != 0) {
    if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      GameRoutine_657a50(v3, 1);
    }
    a1[147] = 0;
  }
  v4 = a1[141];
  a1[140] = game_gameui_ImageLoader_vtable;
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8));
    a1[141] = 0;
  }
  v5 = a1[134];
  a1[134] = 0;
  if (v5 != 0) {
    GameRoutine_1015560(v5);
    v6 = fw_memory_g_heap_manager_ptr;
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                  v5);
    v8 = a1[134];
    a1[134] = 0;
    if (v8 != 0) {
      GameRoutine_1015560(v8);
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v9, v8);
    }
  }
  return game_menu_BasicMenu_Destroy_BasicMenu(a1);
}

__int64 ProcGuideMenu_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = ui_Manager_instance_;
  --*(_DWORD*)(ui_Manager_instance_ + 6148);
  *(_DWORD*)(v2 + 6144) = 1;
  a1[139] = game_gameui_DelayImageLoader_vtable;
  v3 = a1[147];
  if (v3 != 0) {
    if ((*(_WORD*)(v3 + 136) & 1) == 0) {
      GameRoutine_657a50(v3, 1);
    }
    a1[147] = 0;
  }
  v4 = a1[141];
  a1[140] = game_gameui_ImageLoader_vtable;
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8));
    a1[141] = 0;
  }
  v5 = a1[134];
  a1[134] = 0;
  if (v5 != 0) {
    GameRoutine_1015560(v5);
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6, v5);
    v7 = a1[134];
    a1[134] = 0;
    if (v7 != 0) {
      GameRoutine_1015560(v7);
      v8 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8, v7);
    }
  }
  game_menu_BasicMenu_Destroy_BasicMenu(a1);
  v9 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v9, a1);
}

__int64 ProcGuideMenu_Unknown88(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char v14;
  int v15;
  int v16;
  unsigned int v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  int v26;
  int v27;
  char v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  int v32;
  int v33;
  char v34;
  atomic_ullong* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  const char* v48;
  char* v49;
  unsigned int* v50;
  struct {
    __int64* v51;
    __int64 v52;
  } v51_;
  _QWORD v53[2];
  float v54;
  _DWORD v55[2];
  float v56;

  v1 = *(_QWORD*)(result + 336);
  if (v1 != 0 &&
      *(__int64 (***)(void))v1 == game_menu_anonymous_GuideMenuItem_vtable) {
    v2 = result;
    LayoutAccessor_1560070_alt1((void*)(&v51_.v51), (__int64*)(result + 848),
                                "L_Info");
    result = v51_.v52;
    if (v51_.v52 != 0) {
      v3 = *(_QWORD*)(v1 + 88);
      v4 = std___1___shared_weak_count_lock(v51_.v52);
      if (v4 == 0) {
      LABEL_86:
        result = v51_.v52;
        if (v51_.v52 != 0) {
          return std___1___shared_weak_count___release_weak_alt2(v51_.v52);
        }
        return result;
      }
      v5 = v51_.v51;
      v6 = v4;
      if (v51_.v51 == nullptr) {
      LABEL_84:
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak_alt2(v6);
        }
        goto LABEL_86;
      }
      v7 = GameHr_1301c20(v3);
      if (v7 != nullptr) {
        v8 = (__int64)v7;
        v9 = ui_LayoutAccessor_FindTextBox(v5, "T_Title");
        if (v9 != 0) {
          GameRoutine_156c5d0(v9, v8, 0);
        }
      }
      v10 = GameHr_1301e20(v3);
      if (v10 != nullptr) {
        v11 = (__int64)v10;
        v12 = ui_LayoutAccessor_FindTextBox(v5, "T_Help");
        if (v12 != 0) {
          GameRoutine_156c5d0(v12, v11, 0);
        }
      }
      v14 = *(unsigned __int8*)(v3 + 112) != 254 &&
            *(unsigned __int8*)(v3 + 113) != 254;
      ui_LayoutAccessor_SetPaneVisible((__int64)v5, "Turn_Wdw", v14);
      v15 = *(unsigned __int8*)(v3 + 112);
      if (v15 != 254) {
        v16 = *(unsigned __int8*)(v3 + 113);
        if (v16 != 254) {
          ui_LayoutAccessor_SetPaneVisible((__int64)v5, "T_TurnTilde",
                                           v15 != v16);
          ui_LayoutAccessor_SetPaneVisible((__int64)v5, "T_TurnNum_01",
                                           v15 != v16);
          v17 = *(unsigned __int8*)(v3 + 112);
          if (v15 == v16) {
            if (v17 == 255) {
              LayoutAccessor_1562060_alt2(v5, "T_TurnNum_00",
                                          "MID_Sys_ValueUnknown");
            }
            else {
              v19 = ui_LayoutAccessor_FindPane(v5, "T_TurnNum_00");
              if (v19 != 0) {
                v20 = __dynamic_cast(v19, GameData_212d670[0], GameData_212d690,
                                     0);
                if (v20 != 0) {
                  GameRoutine_156c910(v20, "%d", 1, v17);
                }
              }
            }
          }
          else {
            if (v17 == 255) {
              v18 = Registration_a4db40(*msg_MessageManager_instance__ptr[0],
                                        "MID_Sys_ValueUnknown");
            }
            else {
              v18 = game_util_Format("%d", v17);
            }
            ui_LayoutAccessor_SetTextBoxString(v5, "T_TurnNum_00",
                                               (__int64)v18);
            v21 = *(unsigned __int8*)(v3 + 113);
            if (v21 == 255) {
              v22 = Registration_a4db40(*msg_MessageManager_instance__ptr[0],
                                        "MID_Sys_ValueUnknown");
            }
            else {
              v22 = game_util_Format("%d", v21);
            }
            ui_LayoutAccessor_SetTextBoxString(v5, "T_TurnNum_01",
                                               (__int64)v22);
          }
          v23 = ui_LayoutAccessor_FindTextBox(v5, "T_TurnNum_00");
          if (v23 != 0) {
            v24 = v23;
            v25 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v5, "T_TurnNum_00");
            if (v25 != nullptr) {
              GameRoutine_190a0c0(&v56, (__int64)v55, &v54, v25, v25[27]);
              v26 = v55[0];
              v27 = v55[1];
            }
            else {
              v26 = 0;
              v27 = 0;
            }
            v28 = *(_BYTE*)(v24 + 88);
            *(_DWORD*)(v24 + 80) = v26;
            *(_DWORD*)(v24 + 84) = v27;
            *(_BYTE*)(v24 + 88) = v28 | 0x10;
          }
          v29 = ui_LayoutAccessor_FindTextBox(v5, "T_TurnNum_01");
          if (v29 != 0) {
            v30 = v29;
            v31 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v5, "T_TurnNum_01");
            if (v31 != nullptr) {
              GameRoutine_190a0c0(&v56, (__int64)v55, &v54, v31, v31[27]);
              v32 = v55[0];
              v33 = v55[1];
            }
            else {
              v32 = 0;
              v33 = 0;
            }
            v34 = *(_BYTE*)(v30 + 88);
            *(_DWORD*)(v30 + 80) = v32;
            *(_DWORD*)(v30 + 84) = v33;
            *(_BYTE*)(v30 + 88) = v34 | 0x10;
          }
          GameRoutine_1585290(v5, "A_Turn", "Turn_Wdw");
        }
      }
      v53[0] = v5;
      v53[1] = v6;
      v35 = (atomic_ullong*)(v6 + 8);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                memory_order_relaxed);
      game_menu_anonymous_1716080((__int64)v53, v3, 1);
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
      atomic_fetch_add_explicit(v35, 1u, memory_order_relaxed);
      GuideMenuItem_1716850(v5, v3);
      if (atomic_fetch_add(v35, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt2(v6);
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                memory_order_relaxed);
      v36 = std___1___shared_weak_count_lock(v6);
      if (v36 == 0) {
      LABEL_77:
        std___1___shared_weak_count___release_weak_alt2(v6);
        if (*(_BYTE*)(v3 + 33) != 0) {
          v48 = "Gmap";
        }
        else {
          v48 = "Dagsion";
        }
        if (*(_BYTE*)(v3 + 81) == 3) {
          v49 = "_PickUp";
        }
        else {
          v49 = &GameData_1a9f09e;
        }
        v50 = (unsigned int*)game_util_Format("Guide_%s%s", v48, v49);
        LayoutAccessor_1562cf0((__int64)v5, v50);
        goto LABEL_84;
      }
      v37 = v36;
      v38 = *(_QWORD*)(v2 + 1176);
      if (v38 != 0) {
        v39 = v2;
        if ((*(_WORD*)(v38 + 136) & 1) == 0) {
          ProcInst_657a50(v38, 1);
          v39 = v2;
        }
        *(_QWORD*)(v39 + 1176) = 0;
      }
      v40 = *(unsigned __int8*)(v3 + 136);
      if (v40 > 2) {
        if (v40 == 3) {
          GameHr_1562680_alt1((__int64)v5, (unsigned int*)"Thumb_Spot_On",
                              0x1.0000000000000p+0f);
          v47 = ui_LayoutAccessor_FindPane(v5, "Thumb");
          if (v47 != 0) {
            v47 = __dynamic_cast(v47, GameData_212d670[0], GameData_212d678[0],
                                 0);
          }
          *(_QWORD*)(v2 + 1160) = v47;
          *(_DWORD*)(v2 + 1168) = 0;
          v43 = game_util_Format("Layout/Textures/Thumb_Spot/%s.bntx",
                                 "Spot_TempleAurora");
        LABEL_73:
          if ((DelayImageLoader_19a37d0(v2 + 1112, v43, 0) & 1) != 0) {
            goto LABEL_75;
          }
          goto LABEL_74;
        }
        if (v40 == 4) {
          GameHr_1562680_alt1((__int64)v5, (unsigned int*)"Thumb_Recipe_On",
                              0x1.0000000000000p+0f);
          Manager_136a710(ui_Manager_instance_ + 1264, 0xCu);
          v44 = ui_LayoutAccessor_FindPane(v5, "Thumb");
          if (v44 != 0) {
            v45 = __dynamic_cast(v44, GameData_212d670[0], GameData_212d678[0],
                                 0);
            if (v45 != 0 && (Manager_136a920(ui_Manager_instance_ + 1264, v45,
                                             0, 0xCu, GameData_1ac5049) &
                             1) != 0) {
            LABEL_75:
              if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
                std___1___shared_weak_count___release_weak_alt2(v37);
              }
              goto LABEL_77;
            }
          }
        }
      }
      else if (v40 == 1) {
        GameHr_1562680_alt1((__int64)v5, (unsigned int*)"Face_On",
                            0x1.0000000000000p+0f);
        v46 = ui_LayoutAccessor_FindPane(v5, "Face_00");
        if (v46 != 0) {
          v46 =
              __dynamic_cast(v46, GameData_212d670[0], GameData_212d678[0], 0);
        }
        if ((GameHr_1840a20(v46, 0, *(_QWORD*)(v3 + 152), 6u, 1) & 1) != 0) {
          goto LABEL_75;
        }
      }
      else if (v40 == 2) {
        GameHr_1562680_alt1((__int64)v5, (unsigned int*)"Thumb_Spot_On",
                            0x1.0000000000000p+0f);
        v41 = *(_QWORD*)(*(_QWORD*)(v3 + 168) + 72LL);
        v42 = ui_LayoutAccessor_FindPane(v5, "Thumb");
        if (v42 != 0) {
          v42 =
              __dynamic_cast(v42, GameData_212d670[0], GameData_212d678[0], 0);
        }
        *(_QWORD*)(v2 + 1160) = v42;
        *(_DWORD*)(v2 + 1168) = 0;
        v43 = game_util_Format("Layout/Textures/Thumb_Spot/%s.bntx", v41);
        goto LABEL_73;
      }
    LABEL_74:
      GameHr_1562680_alt1((__int64)v5, (unsigned int*)"Img_Off",
                          0x1.0000000000000p+0f);
      goto LABEL_75;
    }
  }
  return result;
}

_QWORD* ProcGuideMenu_Unknown128(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 (***v6)();
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  char v13;
  bool v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* result;
  int v33;
  _DWORD* v34;
  int* v35;
  __int64 v36;
  char v37;
  char v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  char v50;
  int v51;
  int v52;
  int v53;
  __int64 v54;
  __int64 v55;
  int v57;
  __int64 (**v58)();
  _QWORD v59[3];
  __int64 (***v60)();
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  _QWORD v67[2];

  v65 = 0;
  v66 = 0;
  v63 = 0;
  v64 = 0;
  v61 = 0;
  v62 = 0;
  v2 = *(_QWORD*)GameData_212c7c8[0];
  v58 = GameData_20ae390;
  v59[0] = &v64;
  v59[1] = &v61;
  v60 = &v58;
  v3 = *(__int64**)(v2 + 16);
  v4 = *(__int64**)(v2 + 24);
  if (v3 == v4) {
    v7 = 4;
    v6 = &v58;
  }
  else {
    do {
      v5 = *v3++;
      v67[0] = v5;
      if (v60 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      ((void (*)(__int64 (***)(), _QWORD*))(*v60)[6])(v60, v67);
    } while (v3 != v4);
    v6 = v60;
    if (v60 == &v58) {
      v7 = 4;
    }
    else {
      if (v60 == nullptr) {
        goto LABEL_10;
      }
      v7 = 5;
    }
  }
  (*v6)[v7]();

LABEL_10:
  LODWORD(v59[0]) = 0;
  v58 = nullptr;
  if (v62 == v61) {
    *(_DWORD*)(a1 + 1080) = 0;
    v10 = 1;
    if ((unsigned __int64)(v65 - v64) < 0x68) {
      v11 = 1;
      goto LABEL_19;
    }
    v18 = 1;
    v12 = 4;
    v15 = 8;
    v17 = 1;
    goto LABEL_35;
  }
  v8 = (v62 - v61) >> 3;
  if (v65 == v64) {
    v12 = 4;
    *(_DWORD*)(a1 + 1080) = 4;
    v10 = 2;
    if (v8 < 0xD) {
      v11 = 2;
      goto LABEL_19;
    }
    v18 = 2;
    v15 = 8;
    v17 = 2;
  LABEL_35:
    v52 = v18;
  LABEL_36:
    v13 = 0;
    *(_DWORD*)((char*)&v59[-1] + v15) = v10;
    *(_DWORD*)((char*)&v59[-1] + v12) = v17;
    v50 = 1;
    v51 = 18;
    goto LABEL_37;
  }
  v9 = (v65 - v64) >> 3;
  if (v8 > 6 || v9 > 6) {
    v14 = v8 >= v9;
    v12 = 8;
    if (v8 >= v9) {
      v15 = 8;
    }
    else {
      v15 = 4;
    }
    if (v14) {
      v12 = 4;
    }
    if (v14) {
      v16 = 3;
    }
    else {
      v16 = 1;
    }
    *(_DWORD*)(a1 + 1080) = v16;
    v52 = 1;
    if (v14) {
      v10 = 2;
    }
    else {
      v10 = 1;
    }
    v17 = 2;
    goto LABEL_36;
  }
  v10 = 2;
  *(_DWORD*)(a1 + 1080) = 2;
  v11 = 1;

LABEL_19:
  HIDWORD(v58) = v10;
  v50 = 0;
  v13 = 1;
  v51 = 12;
  v52 = v11;

LABEL_37:
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  LODWORD(v67[0]) = 0;
  v57 = 0;
  *(_BYTE*)(a1 + 1084) = v13;
  v54 = a1 + 1096;
  do {
    v53 = v19;
    if (v52 != 1) {
      v25 = v61;
      v26 = v62 - v61;
      v27 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v24 = v27;
      v55 = v22;
      if (v21 < (unsigned __int64)(v26 >> 3)) {
        v28 = *(_QWORD*)(v25 + 8LL * v21++);
        *(_WORD*)(v27 + 16) = 0;
      LABEL_48:
        *(_QWORD*)(v24 + 88) = v28;
        *(_DWORD*)(v24 + 40) = 0;
        *(_WORD*)(v24 + 80) = 257;
        *(_QWORD*)(v24 + 48) = 0;
        *(_QWORD*)(v24 + 56) = 0;
        *(_QWORD*)(v24 + 64) = 0;
        *(_QWORD*)(v24 + 72) = 0;
        *(_BYTE*)(v24 + 82) = 1;
        *(_QWORD*)v24 = game_menu_anonymous_GuideMenuItem_vtable;
        *(_QWORD*)(v24 + 8) = 0;
        result = GameRoutine_16e0c00((_QWORD*)a1, v24);
        if (*(_DWORD*)(a1 + 1088) <= v19 + 1) {
          v33 = v19 + 1;
        }
        else {
          v33 = *(_DWORD*)(a1 + 1088);
        }
        *(_DWORD*)(a1 + 1088) = v33;
        ++*(_DWORD*)(a1 + 1096);
        goto LABEL_55;
      }
    LABEL_53:
      *(_WORD*)(v24 + 16) = 0;
      *(_DWORD*)(v24 + 40) = 0;
      *(_QWORD*)(v24 + 48) = 0;
      *(_QWORD*)(v24 + 56) = 0;
      *(_QWORD*)(v24 + 64) = 0;
      *(_QWORD*)(v24 + 72) = 0;
      *(_QWORD*)(v24 + 88) = 0;
      *(_WORD*)(v24 + 80) = 257;
      *(_BYTE*)(v24 + 82) = 1;
      *(_QWORD*)v24 = game_menu_anonymous_MarginMenuItem_vtable;
      *(_QWORD*)(v24 + 8) = 0;
      goto LABEL_54;
    }
    v23 = v50;
    if (v19 != 5) {
      v23 = 0;
    }
    if ((v23 & 1) == 0) {
      v29 = v64;
      v30 = v65 - v64;
      v31 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
      v24 = v31;
      if ((int)v22 < (unsigned __int64)(v30 >> 3)) {
        v28 = *(_QWORD*)(v29 + 8LL * (int)v22);
        *(_WORD*)(v31 + 16) = 0;
        v55 = (unsigned int)(v22 + 1);
        goto LABEL_48;
      }
      v55 = v22;
      goto LABEL_53;
    }
    v55 = v22;
    v24 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         96, 16, 0);
    *(_WORD*)(v24 + 16) = 0;
    *(_DWORD*)(v24 + 40) = 0;
    *(_QWORD*)(v24 + 48) = 0;
    *(_QWORD*)(v24 + 56) = 0;
    *(_QWORD*)(v24 + 64) = 0;
    *(_QWORD*)(v24 + 72) = 0;
    *(_QWORD*)(v24 + 88) = 0;
    *(_WORD*)(v24 + 80) = 257;
    *(_BYTE*)(v24 + 82) = 1;
    *(_QWORD*)v24 = game_menu_anonymous_MarginMenuItem_vtable;
    *(_QWORD*)(v24 + 8) = 0;
  LABEL_54:
    result = GameRoutine_16e0c00((_QWORD*)a1, v24);
  LABEL_55:
    v34 = (_DWORD*)&v58 + 1;
    ++v20;
    v35 = (int*)v67;
    v36 = 1;
    v37 = 0;
    do {
      v38 = v37;
      if (*v34 == 2) {
        v44 = v61;
        v45 = v62 - v61;
        v41 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
        if (v21 < (unsigned __int64)(v45 >> 3)) {
          v46 = *(_QWORD*)(v44 + 8LL * v21);
          *(_WORD*)(v41 + 16) = 0;
          ++v21;
          *(_WORD*)(v41 + 80) = 257;
          *(_QWORD*)(v41 + 88) = v46;
          *(_DWORD*)(v41 + 40) = 0;
          *(_QWORD*)(v41 + 48) = 0;
          *(_QWORD*)(v41 + 56) = 0;
          *(_QWORD*)(v41 + 64) = 0;
          *(_QWORD*)(v41 + 72) = 0;
          *(_BYTE*)(v41 + 82) = 1;
          *(_QWORD*)v41 = game_menu_anonymous_GuideMenuItem_vtable;
          *(_QWORD*)(v41 + 8) = 0;
          result = GameRoutine_16e0c00((_QWORD*)a1, v41);
          if (*(_DWORD*)(a1 + 1088) <= *v35 + 1) {
            v47 = *v35 + 1;
          }
          else {
            v47 = *(_DWORD*)(a1 + 1088);
          }
          *(_DWORD*)(a1 + 1088) = v47;
          ++*(_DWORD*)(v54 + 4 * v36);
          goto LABEL_57;
        }
        goto LABEL_56;
      }
      if (*v34 == 1) {
        v39 = v64;
        v40 = v65 - v64;
        v41 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
        if ((int)v55 < (unsigned __int64)(v40 >> 3)) {
          v42 = *(_QWORD*)(v39 + 8LL * (int)v55);
          *(_WORD*)(v41 + 16) = 0;
          *(_WORD*)(v41 + 80) = 257;
          *(_QWORD*)(v41 + 88) = v42;
          v55 = (unsigned int)(v55 + 1);
          *(_DWORD*)(v41 + 40) = 0;
          *(_QWORD*)(v41 + 48) = 0;
          *(_QWORD*)(v41 + 56) = 0;
          *(_QWORD*)(v41 + 64) = 0;
          *(_QWORD*)(v41 + 72) = 0;
          *(_BYTE*)(v41 + 82) = 1;
          *(_QWORD*)v41 = game_menu_anonymous_GuideMenuItem_vtable;
          *(_QWORD*)(v41 + 8) = 0;
          result = GameRoutine_16e0c00((_QWORD*)a1, v41);
          if (*(_DWORD*)(a1 + 1088) <= *v35 + 1) {
            v43 = *v35 + 1;
          }
          else {
            v43 = *(_DWORD*)(a1 + 1088);
          }
          *(_DWORD*)(a1 + 1088) = v43;
          ++*(_DWORD*)(v54 + 4 * v36);
          goto LABEL_57;
        }
      LABEL_56:
        *(_WORD*)(v41 + 16) = 0;
        *(_DWORD*)(v41 + 40) = 0;
        *(_QWORD*)(v41 + 48) = 0;
        *(_QWORD*)(v41 + 56) = 0;
        *(_QWORD*)(v41 + 64) = 0;
        *(_QWORD*)(v41 + 72) = 0;
        *(_QWORD*)(v41 + 88) = 0;
        *(_WORD*)(v41 + 80) = 257;
        *(_BYTE*)(v41 + 82) = 1;
        *(_QWORD*)v41 = game_menu_anonymous_MarginMenuItem_vtable;
        *(_QWORD*)(v41 + 8) = 0;
        result = GameRoutine_16e0c00((_QWORD*)a1, v41);
      LABEL_57:
        ++v20;
        ++*v35;
      }
      v35 = &v57;
      v37 = 1;
      v36 = 2;
      v34 = v59;
    } while ((v38 & 1) == 0);
    v22 = v55;
    v19 = v53 + 1;
  } while (v20 < v51);
  if (v61 != 0) {
    v62 = v61;
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v61);
  }
  if (v64 != 0) {
    v65 = v64;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v64);
  }
  return result;
}

__int64 ProcGuideMenu_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = GuideBaseMenu_Unknown139_alt1(a1, a2);
  if (*(_BYTE*)(a1 + 1068) == 1) {
    v5 = a2[1];
    v6 = a2[2];
    if (v5 >= v6) {
      v8 = *a2;
      v9 = v5 - *a2;
      v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
      if (v10 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v11 = fw_memory_g_heap_manager_ptr;
      v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
      if (2 * v12 > v10) {
        v10 = 2 * v12;
      }
      if (v12 >= 0x333333333333333LL) {
        v13 = 0x666666666666666LL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + v9;
      *(_QWORD*)v15 = &GameData_1a9f09e;
      *(_QWORD*)(v15 + 8) = "MID_KeyHelp_Cancel";
      *(_BYTE*)(v15 + 28) = 0;
      *(_QWORD*)(v15 + 32) = 0;
      *(_BYTE*)(v15 + 16) = 1;
      v16 = v14 + 40 * v13;
      v7 = v14 + v9 + 40;
      *(_QWORD*)(v15 + 20) = 0x300000001LL;
      result = memcpy(v14, v8, v9);
      *a2 = v14;
      a2[1] = v7;
      a2[2] = v16;
      if (v8 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v17, v8);
      }
    }
    else {
      *(_BYTE*)(v5 + 28) = 0;
      *(_QWORD*)(v5 + 32) = 0;
      *(_QWORD*)v5 = &GameData_1a9f09e;
      *(_QWORD*)(v5 + 8) = "MID_KeyHelp_Cancel";
      v7 = v5 + 40;
      *(_BYTE*)(v5 + 16) = 1;
      *(_QWORD*)(v5 + 20) = 0x300000001LL;
    }
    a2[1] = v7;
  }
  return result;
}

__int64 ProcGuideMenu_Unknown143(__int64 a1)
{
  if (*(_BYTE*)(a1 + 1084) != 0) {
    return 2;
  }
  else {
    return 3;
  }
}

__int64 ProcGuideMenu_Unknown144(__int64 a1, int a2, char a3, char a4)
{
  char* v4;
  char* v5;
  int v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 result;
  int v25;
  int v26;
  __int64 v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  char v34;

  v5 = *(char**)(a1 + 232);
  v4 = *(char**)(a1 + 240);
  if (*(_BYTE*)(a1 + 1084) != 0) {
    v9 = 2;
  }
  else {
    v9 = 3;
  }
  v10 = (unsigned __int64)(v4 - v5) >> 3;
  if (v4 != v5) {
    v11 = 0;
    do {
      v12 = *(_QWORD*)v5;
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v5 + 48LL))(*(_QWORD*)v5) &
           1) != 0) {
        if (v12 == *(_QWORD*)(a1 + 336)) {
          goto LABEL_12;
        }
        ++v11;
      }
      v5 += 8;
    } while (v5 != v4);
  }
  v11 = -1;
LABEL_12:
  v13 = v11 / v9;
  v14 = v10 - 1;
  v15 = *(_DWORD*)(a1 + 4LL * (v11 % v9) + 1096);
  if ((a3 & 1) != 0) {
    v34 = a3;
    do {
      if (v13 + a2 < 0 != __OFADD__(v13, a2)) {
        v16 = v15 - 1;
      }
      else {
        v16 = v13 + a2;
      }
      if (v13 + a2 >= v15) {
        v13 = 0;
      }
      else {
        v13 = v16;
      }
      v17 = v11 % v9 + v13 * v9;
      if (v14 >= v17) {
        v18 = v11 % v9 + v13 * v9;
      }
      else {
        v18 = v14;
      }
      if (v17 >= 0) {
        v19 = v18;
      }
      else {
        v19 = 0;
      }
      v20 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v19);
    } while (((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20) & 1) == 0 ||
             v11 == v19);
    v21 = v19;
  LABEL_41:
    v29 = *(_QWORD*)(a1 + 232);
    *(_DWORD*)(a1 + 1092) = v13;
    v30 = *(_QWORD*)(a1 + 336);
    v31 = *(_QWORD*)(v29 + 8 * v21);
    if (v30 != v31) {
      if (v30 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 168LL))(v30);
      }
      *(_QWORD*)(a1 + 336) = v31;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, a4 & 1, 1u, v34 & 1);
      v32 = *(_QWORD*)(a1 + 336);
      if (v32 == 0) {
        v33 = 4;
      LABEL_51:
        *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v33;
        return 13;
      }
      (*(void (**)(__int64))(*(_QWORD*)v32 + 160LL))(v32);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v30 = *(_QWORD*)(a1 + 336);
    }
    v33 = 4;
    if (v30 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v30 + 120LL))(v30) & 1) != 0) {
        v33 = 4;
      }
      else {
        v33 = 0;
      }
    }
    goto LABEL_51;
  }
  v22 = v9 * a2;
  v23 = v11 + v22;
  while (1) {
    v13 += a2;
    result = 0;
    if (v13 >= v15 || v13 < 0) {
      return result;
    }
    if (v14 >= v23) {
      v25 = v23;
    }
    else {
      v25 = v14;
    }
    if (v23 >= 0) {
      v26 = v25;
    }
    else {
      v26 = 0;
    }
    v27 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v26);
    v28 = (*(__int64 (**)(__int64))(*(_QWORD*)v27 + 40LL))(v27);
    v23 += v22;
    if (v11 != v26 && (v28 & 1) != 0) {
      v34 = a3;
      v21 = v26;
      goto LABEL_41;
    }
  }
}

__int64 ProcGuideMenu_Unknown145(__int64 a1, int a2, char a3)
{
  char* v3;
  char* v4;
  int v8;
  unsigned __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 result;
  int v16;
  int v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;

  v4 = *(char**)(a1 + 232);
  v3 = *(char**)(a1 + 240);
  if (*(_BYTE*)(a1 + 1084) != 0) {
    v8 = 2;
  }
  else {
    v8 = 3;
  }
  v9 = (unsigned __int64)(v3 - v4) >> 3;
  if (v3 != v4) {
    v10 = 0;
    do {
      v11 = *(_QWORD*)v4;
      if (((*(__int64 (**)(_QWORD))(**(_QWORD**)v4 + 48LL))(*(_QWORD*)v4) &
           1) != 0) {
        if (v11 == *(_QWORD*)(a1 + 336)) {
          goto LABEL_11;
        }
        ++v10;
      }
      v4 += 8;
    } while (v4 != v3);
  }
  v10 = -1;

LABEL_11:
  v12 = v10 % v8 + a2;
  v13 = *(_DWORD*)(a1 + 1092) * v8;
  if (v12 < v8 && v13 + v12 < (int)v9) {
    if (v12 < 0) {
      if ((a3 & 1) == 0) {
        return 0;
      }
      v12 = v8 - 1;
    }
  LABEL_20:
    v16 = v12 + v13;
    if (v16 >= (int)v9 - 1) {
      v16 = v9 - 1;
    }
    do {
      v17 = v16;
      v18 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v16);
      v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 40LL))(v18);
      v16 = v17 - v8;
    } while ((v19 & 1) == 0);
    if (v10 - v8 == v16) {
      return 0;
    }
    v20 = *(_QWORD*)(a1 + 336);
    v21 = *(_QWORD*)(*(_QWORD*)(a1 + 232) + 8LL * v17);
    if (v20 != v21) {
      if (v20 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 168LL))(v20);
      }
      *(_QWORD*)(a1 + 336) = v21;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(a1, 0, 1u, a3 & 1);
      v22 = *(_QWORD*)(a1 + 336);
      if (v22 == 0) {
        v23 = 4;
      LABEL_35:
        *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v23;
        return 13;
      }
      (*(void (**)(__int64))(*(_QWORD*)v22 + 160LL))(v22);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v20 = *(_QWORD*)(a1 + 336);
    }
    v23 = 4;
    if (v20 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 120LL))(v20) & 1) != 0) {
        v23 = 4;
      }
      else {
        v23 = 0;
      }
    }
    goto LABEL_35;
  }
  v12 = 0;
  result = 0;
  if ((a3 & 1) != 0) {
    goto LABEL_20;
  }
  return result;
}

__int64 ProcGuideMenu_Unknown2(__int64 a1)
{
  if (*(_BYTE*)(a1 + 908) != 0) {
    return 2;
  }
  else {
    return 3;
  }
}

__int64

game_menu_anonymous_ProcGuideMenu_AddItemList_closure_Invoke(__int64 result,
                                                             __int64* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = *a2;
  if (*(_BYTE*)(*a2 + 33) != 0) {
    v3 = *(__int64**)(result + 16);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v6 = *v3;
      v7 = (__int64)v5 - *v3;
      v8 = (v7 >> 3) + 1;
      if (v8 >> 61 == 0) {
        v9 = v4 - v6;
        v10 = (__int64*)fw_memory_g_heap_manager_ptr;
        if (v9 >> 2 > v8) {
          v8 = v9 >> 2;
        }
        if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
          v11 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v11 = v8;
        }
        if (v11 == 0) {
          v12 = 0;
          goto LABEL_24;
        }
        if (v11 >> 61 == 0) {
          v12 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
        LABEL_24:
          v20 = v12 + 8 * v11;
          v21 = v12 + v7 - 8 * (v7 >> 3);
          *(_QWORD*)(v12 + v7) = v2;
          v14 = v12 + v7 + 8;
          result = memcpy(v21, v6, v7);
          *v3 = v21;
          v3[1] = v14;
          v3[2] = v20;
          if (v6 == 0) {
            goto LABEL_32;
          }
          v22 = *v10;
          goto LABEL_29;
        }
      LABEL_34:
        GameRoutine_60a210(result);
      }
    LABEL_33:
      GameRoutine_13033d0();
    }
  LABEL_13:
    *v5 = v2;
    v14 = (__int64)(v5 + 1);
    goto LABEL_32;
  }
  v3 = *(__int64**)(result + 8);
  v5 = (_QWORD*)v3[1];
  v13 = v3[2];
  if ((unsigned __int64)v5 < v13) {
    goto LABEL_13;
  }
  v6 = *v3;
  v15 = (__int64)v5 - *v3;
  v16 = (v15 >> 3) + 1;
  if (v16 >> 61 != 0) {
    goto LABEL_33;
  }
  v17 = v13 - v6;
  if (v17 >> 2 > v16) {
    v16 = v17 >> 2;
  }
  if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
    v18 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v18 = v16;
  }
  if (v18 != 0) {
    if (v18 >> 61 != 0) {
      goto LABEL_34;
    }
    v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         8 * v18, 16, 0);
  }
  else {
    v19 = 0;
  }
  v23 = v19 + 8 * v18;
  v24 = v19 + v15 - 8 * (v15 >> 3);
  *(_QWORD*)(v19 + v15) = v2;
  v14 = v19 + v15 + 8;
  result = memcpy(v24, v6, v15);
  *v3 = v24;
  v3[1] = v14;
  v3[2] = v23;
  if (v6 != 0) {
    v22 = fw_memory_g_heap_manager;
  LABEL_29:
    v25 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v25 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v22 + v25, v6);
  }
LABEL_32:
  v3[1] = v14;
  return result;
}

#pragma GCC visibility pop
