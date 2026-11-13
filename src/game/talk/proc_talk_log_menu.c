#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_17cf3a0(__int64, char);
__int64 GameRoutine_113da20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_159e540(_QWORD);
__int64 GameRoutine_16dd280(_QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*game_talk_ProcTalkLogMenu_TalkLogMenuItem_vtable[])();
extern __int64 GameData_21ec7b8;
extern __int64 GameData_2259540;
extern __int64 GameData_2265a08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gameui_MenuAnimator_instance_;
extern __int64* game_talk_g_window_layout_ptr[5];
__int64 ProcTalkLogMenu_17cfc80(__int64 result, char a2);
__int64 ProcTalkLogMenu_Unknown94(__int64 a1);
__int64 ProcTalkLogMenu_Unknown2(__int64 a1);
__int64 ProcTalkLogMenu_Unknown138(__int64 a1, __int64 a2, __int64 a3);
__int64 ProcTalkLogMenu_17d0580(__int64 a1, __int64 a2, __int64 a3);
__int64 ProcTalkLogMenu_Unknown121(__int64 a1);
__int64 ProcTalkLogMenu_17d0700(__int64 a1);
__int64 ProcTalkLogMenu_Unknown122(__int64 a1);
__int64 ProcTalkLogMenu_17d09c0(__int64 a1);
__attribute__((swiftcall)) void GameRoutine_113b050(PSEUDO_X8, _QWORD);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 ControlCreator_13633c0(void);
__int64 GameRoutine_1139a00(_QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_a51280(_QWORD, _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD, long double);
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21f1de8;
extern __int64 game_ProcFadeView_instance_;
__int64 ProcTalkLogMenu_Unknown84(__int64 a1);
_QWORD* GameRoutine_159e540_alt1(__int64) __asm__("GameRoutine_159e540");
__attribute__((swiftcall)) void
GameRoutine_113b050_alt1(PSEUDO_X8, const char*) __asm__("GameRoutine_113b050");
__int64
ControlCreator_13633c0_alt1(__int64 result) __asm__("ControlCreator_13633c0");
__int64 GameRoutine_1567590_alt1(__int64 result,
                                 char) __asm__("GameRoutine_1567590");
__int64 GameRoutine_a51280_alt1(__int64,
                                const char*) __asm__("GameRoutine_a51280");
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ProcTransitionAnim_156af20(__int64, int, int, __int64*, const char*,
                                   const char*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_menu_BasicMenu_Unknown16de2e0_alt1(__int64 result, char) __asm__(
    "game_menu_BasicMenu_Unknown16de2e0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void GameHr_8679c0();
void GameRoutine_1139a00_alt1(_QWORD*) __asm__("GameRoutine_1139a00");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
_QWORD* GameRoutine_17d3100(_QWORD* result, __int64, char);
__attribute__((swiftcall)) void GameRoutine_a50740(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void fs_a501f0(PSEUDO_X8, __int64, __int64);
__int64 GameHr_113bfb0(__int64);
__int64 GameHr_1562680(__int64 result, unsigned int*, float);
__int64 GameHr_17d27a0(__int64 result, __int64);
__int64 GameHr_1916dd0(__int64, int, const char*, float, __int64, char);
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_112ea40(__int64, _BYTE*);
__int64 GameRoutine_17d2b20(__int64*, __int64*);
__int64 GameRoutine_17d3040(_QWORD*);
__int64 GameRoutine_17d3320(__int64 result, char);
__int64 GameRoutine_190b990(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 Pane_58f8a0(__int64);
__int64 TextSelector_1907f20(_BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 spine_AnimationState_getCurrent(__int64, unsigned __int64);
__int64 spine_TrackEntry_setTimeScale(double);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, const char*, char);
bool GameRoutine_16046b0();
extern __int64* GameData_212cb88[86];
extern __int64* GameData_212cbb8[80];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e030[4];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
extern __int64 GameData_20d9a00;
extern __int64 GameData_212d8b8[2];
extern char GameData_1a9f09e;
float LayoutAccessor_15638b0(__int64*, char*, char);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
void GameHr_17d2c80(__int64*, __int64*);
void GameRoutine_156c5d0(__int64, __int64, char);
void game_113af40(__int64, const char*);
__int64 ProcTalkLogMenu_TalkLogMenuItem_Unknown17(__int64 a1);
__int64 ProcTalkLogMenu_TalkLogMenuItem_Unknown19(__int64 result);
__int64 ProcTalkLogMenu_TalkLogMenuItem_ACall(__int64 a1);
__int64 ProcTalkLogMenu_TalkLogMenuItem_DrawText(__int64 a1);

__int64 ProcTalkLogMenu_17cfc80(__int64 result, char a2)
{
  __int64 v3;
  __int64 v4;

  v3 = result;
  if (GameData_2265a08 == 0 || *(_BYTE*)(GameData_2265a08 + 24) == 1) {
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1712, 16, 0);
    GameRoutine_17cf3a0(v4, a2 & 1);
    return GameRoutine_657850(v4, GameData_212c730, "ProcTalkLogMenu", 1, v3);
  }
  return result;
}

__int64 ProcTalkLogMenu_Unknown84(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int128 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64* v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  unsigned __int64 v14;
  bool v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  const char* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 i;
  unsigned __int64 v32;
  const char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  float v39;
  __int64 result;
  __int64* v41;
  struct {
    _BYTE v42[8];
    unsigned __int64 v43;
    __int64 v44;
    char gap32_[8];
    __int64 v45;
  } v42_;

  GameRoutine_1139a00_alt1((_QWORD*)(a1 + 1056));
  if (game_ProcFadeView_instance_ != 0) {
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v3 = *(_OWORD*)(v2 + 208);
    }
    v4 = 51;
    if (*((float*)&v3 + 3) == 0x1.0000000000000p+0f) {
      if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                          v2 + 160, *((float*)&v3 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
        v4 = 1061;
      }
      else {
        v4 = 51;
      }
    }
  }
  else {
    v4 = 51;
  }
  v41 = (__int64*)(a1 + 848);
  ui_LayoutAccessor_SetPriority_alt1(a1 + 848, v4);
  v5 = GameData_21f1de8;
  *(_DWORD*)(a1 + 1696) = *(_QWORD*)(GameData_21f1de8 + 32);
  v6 = *(_QWORD*)(v5 + 32);
  if ((int)v6 >= 1) {
    v7 = *(_QWORD*)(v5 + 32) & 0x7FFFFFFFLL;
    v8 = 0;
    v42_.v45 = v7 - 2;
    v9 = v6 + 7;
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v13 = v9 & 7;
      v14 = v7--;
      v15 = v14 == *(unsigned int*)(GameData_21f1de8 + 32);
      v16 = fw_memory_HeapManager_Allocate_alt1(*v10, 104, 16, 0);
      v17 = *(_BYTE*)(a1 + 1689);
      *(_WORD*)(v16 + 16) = 0;
      *(_DWORD*)(v16 + 40) = 0;
      v18 = v16;
      *(_QWORD*)(v16 + 48) = 0;
      *(_QWORD*)(v16 + 56) = 0;
      *(_QWORD*)(v16 + 64) = 0;
      *(_QWORD*)(v16 + 72) = 0;
      *(_BYTE*)(v16 + 92) = 0;
      *(_BYTE*)(v16 + 94) = v15;
      *(_DWORD*)(v16 + 95) = 0;
      *(_BYTE*)(v16 + 99) = 0;
      *(_WORD*)(v16 + 80) = 257;
      *(_BYTE*)(v16 + 82) = 1;
      *(_QWORD*)v16 = game_talk_ProcTalkLogMenu_TalkLogMenuItem_vtable;
      *(_QWORD*)(v16 + 8) = 0;
      v19 = GameData_21f1de8;
      *(_BYTE*)(v16 + 93) = v17;
      *(_DWORD*)(v16 + 84) = v7;
      *(_DWORD*)(v16 + 88) = v7 & 3;
      v20 = *(_QWORD*)(v19 + 24);
      if (v7 != 0) {
        if ((~((_BYTE)v8 - (_BYTE)v6) & 7) != 0) {
          v21 = v13;
          v22 = v7;
          do {
            v20 = *(_QWORD*)(v20 + 8);
            --v22;
            --v21;
          } while (v21 != 0);
        }
        else {
          v22 = v7;
        }
        if ((unsigned __int64)(v42_.v45 - v8) >= 7) {
          v23 = v22 - 1;
          do {
            v23 -= 8LL;
            v20 = *(
                _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v20 +
                                                                                                      8) +
                                                                                           8LL) +
                                                                                8LL) +
                                                                     8LL) +
                                                          8LL) +
                                               8LL) +
                                    8LL) +
                         8LL);
          } while (v23 < 0xFFFFFFFFFFFFFFFELL);
        }
      }
      v24 = *(_QWORD*)(v20 + 16);
      if ((*(_BYTE*)v24 & 1) != 0) {
        v25 = *(const char**)(v24 + 16);
      }
      else {
        v25 = (const char*)(v24 + 1);
      }
      GameRoutine_113b050_alt1((void*)((__int64)v42_.v42), v25);
      if ((v42_.v42[0] & 1) != 0) {
        v26 = v42_.v43;
        if (v42_.v44 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v27 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v10 + v27, v42_.v44);
        }
      }
      else {
        v26 = (unsigned __int64)v42_.v42[0] >> 1;
      }
      v28 = *(unsigned int*)(v18 + 84);
      *(_BYTE*)(v18 + 95) = v26 != 0;
      v29 = *(_QWORD*)(GameData_21f1de8 + 24);
      if ((_DWORD)v28 != 0) {
        v30 = v28 & 7;
        for (i = v28; v30 != 0; --v30) {
          v29 = *(_QWORD*)(v29 + 8);
          --i;
        }
        if ((unsigned int)v28 >= 8) {
          v32 = i - 1;
          do {
            v32 -= 8LL;
            v29 = *(
                _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v29 +
                                                                                                      8) +
                                                                                           8LL) +
                                                                                8LL) +
                                                                     8LL) +
                                                          8LL) +
                                               8LL) +
                                    8LL) +
                         8LL);
          } while (v32 < 0xFFFFFFFFFFFFFFFELL);
        }
      }
      v11 = *(_QWORD*)(v29 + 16);
      if ((*(_BYTE*)v11 & 1) != 0) {
        v12 = *(const char**)(v11 + 16);
      }
      else {
        v12 = (const char*)(v11 + 1);
      }
      *(_BYTE*)(v18 + 98) = (unsigned int)GameRoutine_a51280_alt1(
                                *msg_MessageManager_instance__ptr[0], v12) -
                                5 <
                            8;
      BasicMenuCursor_16e0c00_alt1((_QWORD*)a1, v18);
      ++v8;
      v9 = v13 + 7;
    } while (v14 > 1);
  }
  if (*(_BYTE*)(a1 + 1689) != 0) {
    v33 = "LogOnly";
  }
  else {
    v33 = "Default";
  }
  LayoutAccessor_1562cf0_alt1((__int64)v41, v33);
  v34 = *(_QWORD*)(a1 + 856);
  if (v34 != 0) {
    v35 = std___1___shared_weak_count_lock_alt1(v34);
    if (v35 != 0) {
      v36 = v35;
      if (*v41 != 0) {
        ControlCreator_13633c0_alt1(*v41);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak_alt1(v36);
      }
    }
  }
  GameHr_8679c0();
  v37 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v38 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v38 & 0x10) == 0) {
      v39 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v38 & 0xFFFFFFE2 | 1;
      if (v39 > 0x0.0p+0f) {
        *(_DWORD*)(v37 + 224) = 0;
      }
    }
  }
  result = game_menu_BasicMenu_Unknown16de2e0_alt1(a1, 1);
  if ((*(_BYTE*)(a1 + 1689) & 1) == 0) {
    GameRoutine_1567590_alt1((__int64)"TalkLog", 1);
    GameRoutine_1567590_alt1((__int64)"WindowHide", 1);
    return GameRoutine_1567590_alt1((__int64)"AutoPlay", 1);
  }
  return result;
}

__int64 ProcTalkLogMenu_Unknown94(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[32];

  if (*(_QWORD*)(a1 + 624) != 0) {
    *(_QWORD*)(a1 + 624) = 0;
  }
  result = GameRoutine_155e830(a1 + 848, 0);
  if ((*(_BYTE*)(a1 + 1689) & 1) == 0) {
    if (GameData_21ec7b8 != 0) {
      GameRoutine_113da20(GameData_21ec7b8 + 216, 0, 0);
    }
    GameRoutine_1567590("TalkLog", 0);
    GameRoutine_1567590("WindowHide", 0);
    result = GameRoutine_1567590("AutoPlay", 0);
    if ((*(_BYTE*)(a1 + 1689) & 1) == 0 && (*(_BYTE*)(a1 + 1688) & 1) != 0) {
      v5 = GameData_21ec7b8;
      if (GameData_21ec7b8 != 0 && *(_BYTE*)(GameData_21ec7b8 + 288) == 1 &&
          (*(_BYTE*)(GameData_21ec7b8 + 305) != 1 ||
           (*(_BYTE*)(GameData_21ec7b8 + 304) & 1) != 0)) {
        *(_WORD*)(GameData_21ec7b8 + 304) = 256;
        GameRoutine_155e830(game_talk_g_window_layout_ptr[0], 1);
        v6 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf(v22, "%s%s", "Down", "In");
          result = GameRoutine_156af20(
              v6, 1, 0, game_talk_g_window_layout_ptr[0], 0, v22);
        }
        else {
          result = -1;
        }
        *(_QWORD*)(v5 + 296) = result;
      }
    }
  }
  v3 = GameData_2259540;
  if (GameData_2259540 != 0) {
    GameRoutine_16dd280(a1);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 224LL))(a1);
    (*(void (**)(__int64))(*(_QWORD*)a1 + 488LL))(a1);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 496LL))(a1);
    if ((*(_BYTE*)(v3 + 152) & 1) == 0) {
      v4 = *(_QWORD*)(v3 + 40);
      if (v4 != 0) {
        while (*(_QWORD*)(v4 + 280) != a1) {
          v4 = *(_QWORD*)(v4 + 56);
          if (v4 == 0) {
            goto LABEL_21;
          }
        }
        *(_DWORD*)(v4 + 292) = result;
        *(_DWORD*)(v4 + 300) = 2;
      }
    }
  }

LABEL_21:
  v7 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v9 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v8 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v11 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v10 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v12 = v10 == v11;
    v13 = v8 - 1 + v9;
    v14 = v13 >> 7;
    v15 = v13 & 0x7F;
    v16 = 16 * (v10 - v11) - 1;
    v17 = *(_QWORD*)(v11 + 8 * v14);
    if (v12) {
      v16 = 0;
    }
    v18 = v17 + 32 * v15;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v18 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v7[21] = *(_QWORD*)(v18 + 24);
    v19 = *(_QWORD*)(v18 + 16);
    v7[27] = v8 - 1;
    v7[20] = v19;
    if ((unsigned __int64)(v16 - (v8 + v9) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v20 = *(_QWORD*)(v10 - 8);
      if (v20 != 0) {
        v21 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v21 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
        v10 = v7[24];
      }
      v7[24] = v10 - 8;
    }
  }
  return result;
}

__int64 ProcTalkLogMenu_Unknown2(__int64 a1)
{
  __int64 result;

  result = GameRoutine_16df7a0(a1);
  if ((*(_DWORD*)(a1 + 1692) & 0x80000000) == 0) {
    result = snd_fnd_WeakHandle_isValid(a1 + 1192);
    if ((result & 1) == 0) {
      *(_DWORD*)(a1 + 1692) = -1;
    }
  }
  return result;
}

__int64 ProcTalkLogMenu_Unknown138(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
      *(_QWORD*)a1 + 1096LL))(a1, a2, a3, 0);
}

__int64 ProcTalkLogMenu_17d0580(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, __int64, __int64, _QWORD))(
      *(_QWORD*)(a1 - 176) + 1096LL))(a1 - 176, a2, a3, 0);
}

__int64 ProcTalkLogMenu_Unknown121(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  _DWORD* v6;
  _DWORD* v7;
  int v8;
  __int64 v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  if ((*(_BYTE*)(a1 + 1688) & 1) == 0 && *(int*)(a1 + 552) >= 1) {
    if ((*(_BYTE*)(a1 + 1689) & 1) == 0) {
      v2 = GameData_21ec7b8;
      if (GameData_21ec7b8 != 0 &&
          (*(_BYTE*)(GameData_21ec7b8 + 305) != 1 ||
           (*(_BYTE*)(GameData_21ec7b8 + 304) & 1) == 0)) {
        *(_WORD*)(GameData_21ec7b8 + 304) = 257;
        v3 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf_alt1((__int64)&v10_.v10, "%s%s", "Down", "Out");
          v4 = ProcTransitionAnim_156af20(v3, 1, 1,
                                          game_talk_g_window_layout_ptr[0],
                                          nullptr, (const char*)&v10_.v10);
        }
        else {
          v4 = -1;
        }
        *(_QWORD*)(v2 + 296) = v4;
      }
    }
    *(_BYTE*)(a1 + 1688) = 1;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 384LL))((void*)(&v10_.v10), a1);
  GameRoutine_159e540_alt1((__int64)&v10_.v10);
  result = v10_.v11;
  if (v10_.v11 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v10_.v11);
  }
  v6 = *(_DWORD**)(a1 + 808);
  v7 = *(_DWORD**)(a1 + 816);
  if (v6 != v7) {
    v8 = *(_DWORD*)(a1 + 644);
    do {
      *v6++ = v8;
    } while (v6 != v7);
  }
  v9 = *(_QWORD*)(a1 + 336);
  if (v9 != 0 && *(__int64 (***)(void))v9 ==
                     game_talk_ProcTalkLogMenu_TalkLogMenuItem_vtable) {
    *(_DWORD*)(a1 + 1696) = *(_DWORD*)(v9 + 84);
  }
  return result;
}

__int64 ProcTalkLogMenu_17d0700(__int64 a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  _DWORD* v9;
  _DWORD* v10;
  int v11;
  __int64 v12;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  v2 = *(_BYTE*)(a1 + 1512);
  v3 = a1 - 176;
  if ((v2 & 1) == 0 && *(int*)(a1 + 376) >= 1) {
    if ((*(_BYTE*)(a1 + 1513) & 1) == 0) {
      v4 = GameData_21ec7b8;
      if (GameData_21ec7b8 != 0 &&
          (*(_BYTE*)(GameData_21ec7b8 + 305) != 1 ||
           (*(_BYTE*)(GameData_21ec7b8 + 304) & 1) == 0)) {
        *(_WORD*)(GameData_21ec7b8 + 304) = 257;
        v5 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          v6 = v3;
          sprintf_alt1((__int64)&v13_.v13, "%s%s", "Down", "Out");
          v7 = ProcTransitionAnim_156af20(v5, 1, 1,
                                          game_talk_g_window_layout_ptr[0],
                                          nullptr, (const char*)&v13_.v13);
          v3 = v6;
        }
        else {
          v7 = -1;
        }
        *(_QWORD*)(v4 + 296) = v7;
      }
    }
    *(_BYTE*)(a1 + 1512) = 1;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)v3 + 384LL))((void*)(&v13_.v13), (__int64)v3);
  GameRoutine_159e540_alt1((__int64)&v13_.v13);
  result = v13_.v14;
  if (v13_.v14 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v13_.v14);
  }
  v9 = *(_DWORD**)(a1 + 632);
  v10 = *(_DWORD**)(a1 + 640);
  if (v9 != v10) {
    v11 = *(_DWORD*)(a1 + 468);
    do {
      *v9++ = v11;
    } while (v9 != v10);
  }
  v12 = *(_QWORD*)(a1 + 160);
  if (v12 != 0 && *(__int64 (***)(void))v12 ==
                      game_talk_ProcTalkLogMenu_TalkLogMenuItem_vtable) {
    *(_DWORD*)(a1 + 1520) = *(_DWORD*)(v12 + 84);
  }
  return result;
}

__int64 ProcTalkLogMenu_Unknown122(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  _DWORD* v7;
  _DWORD* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if (*(_BYTE*)(a1 + 1688) == 1 && *(int*)(a1 + 552) <= 0) {
    if ((*(_BYTE*)(a1 + 1689) & 1) == 0) {
      v3 = GameData_21ec7b8;
      if (GameData_21ec7b8 != 0 &&
          (*(_BYTE*)(GameData_21ec7b8 + 305) != 1 ||
           (*(_BYTE*)(GameData_21ec7b8 + 304) & 1) != 0)) {
        *(_WORD*)(GameData_21ec7b8 + 304) = 256;
        GameRoutine_155e830(game_talk_g_window_layout_ptr[0], 1);
        v4 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf(&v11, "%s%s", "Down", "In");
          v5 = GameRoutine_156af20(v4, 1, 0, game_talk_g_window_layout_ptr[0],
                                   0, &v11);
        }
        else {
          v5 = -1;
        }
        *(_QWORD*)(v3 + 296) = v5;
      }
    }
    *(_BYTE*)(a1 + 1688) = 0;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a1 + 392LL))((void*)&v11, a1);
  GameRoutine_159e540(&v11);
  result = v12;
  if (v12 != 0) {
    result = std___1___shared_weak_count___release_weak(v12);
  }
  v7 = *(_DWORD**)(a1 + 808);
  v8 = *(_DWORD**)(a1 + 816);
  if (v7 != v8) {
    v9 = *(_DWORD*)(a1 + 644);
    do {
      *v7++ = v9;
    } while (v7 != v8);
  }
  v10 = *(_QWORD*)(a1 + 336);
  if (v10 != 0 && *(__int64 (***)())v10 ==
                      game_talk_ProcTalkLogMenu_TalkLogMenuItem_vtable) {
    *(_DWORD*)(a1 + 1696) = *(_DWORD*)(v10 + 84);
  }
  return result;
}

__int64 ProcTalkLogMenu_17d09c0(__int64 a1)
{
  int v2;
  int v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  _DWORD* v11;
  _DWORD* v12;
  int v13;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;

  v2 = *(unsigned __int8*)(a1 + 1512);
  v3 = *(_DWORD*)(a1 + 376);
  v4 = a1 - 176;
  if (v2 == 1 && v3 <= 0) {
    if ((*(_BYTE*)(a1 + 1513) & 1) == 0) {
      v6 = GameData_21ec7b8;
      if (GameData_21ec7b8 != 0 &&
          (*(_BYTE*)(GameData_21ec7b8 + 305) != 1 ||
           (*(_BYTE*)(GameData_21ec7b8 + 304) & 1) != 0)) {
        v7 = v4;
        *(_WORD*)(GameData_21ec7b8 + 304) = 256;
        LayoutAccessor_155e830((__int64)game_talk_g_window_layout_ptr[0], 1);
        v8 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf_alt1((__int64)&v15_.v15, "%s%s", "Down", "In");
          v9 = ProcTransitionAnim_156af20(v8, 1, 0,
                                          game_talk_g_window_layout_ptr[0],
                                          nullptr, (const char*)&v15_.v15);
        }
        else {
          v9 = -1;
        }
        *(_QWORD*)(v6 + 296) = v9;
        v4 = v7;
      }
    }
    *(_BYTE*)(a1 + 1512) = 0;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)v4 + 392LL))((void*)(&v15_.v15), (__int64)v4);
  GameRoutine_159e540_alt1((__int64)&v15_.v15);
  result = v15_.v16;
  if (v15_.v16 != 0) {
    result = std___1___shared_weak_count___release_weak_alt1(v15_.v16);
  }
  v11 = *(_DWORD**)(a1 + 632);
  v12 = *(_DWORD**)(a1 + 640);
  if (v11 != v12) {
    v13 = *(_DWORD*)(a1 + 468);
    do {
      *v11++ = v13;
    } while (v11 != v12);
  }
  v14 = *(_QWORD*)(a1 + 160);
  if (v14 != 0 && *(__int64 (***)(void))v14 ==
                      game_talk_ProcTalkLogMenu_TalkLogMenuItem_vtable) {
    *(_DWORD*)(a1 + 1520) = *(_DWORD*)(v14 + 84);
  }
  return result;
}

__int64 ProcTalkLogMenu_TalkLogMenuItem_Unknown17(__int64 a1)
{

#pragma clang fp contract(off)
  int v1;
  __int64 result;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  atomic_ullong* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  atomic_ullong* v26;
  __int64* v27;
  __int64* v28;
  char* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  atomic_ullong* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  atomic_ullong* v44;
  __int64* v45;
  __int64* v46;
  float v47;
  __int64 v48;
  __int64 v49;

  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v4 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v4 != nullptr) {
          goto LABEL_5;
        }
      }
      else {
        v5 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt1(v5);
        if (v4 != nullptr) {
        LABEL_5:
          if (v4[2] == 0) {
            return result;
          }
          goto LABEL_9;
        }
      }
    }
  }
  v4 = ui_LayoutAccessor_empty__ptr[0];
  if (*(__int64*)((char*)ui_LayoutAccessor_empty__ptr[0] +
                  (unsigned __int64)((__int128*)0x10LL)) == 0) {
    return result;
  }
LABEL_9:
  result = v4[1];
  if (result == 0) {
    return result;
  }
  result = std___1___shared_weak_count_lock_alt1(result);
  if (result == 0) {
    goto LABEL_18;
  }
  v6 = *v4;
  if (*v4 != 0) {
    v1 = *(unsigned __int8*)(v6 + 24);
    v7 = v6 + 152;
    if (v1 == 0) {
      v7 = 0;
    }
    v8 = v7 != v4[2];
  }
  else {
    v8 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8) {
    LABEL_18:
      v9 = v4[1];
      if (v9 != 0 && *(_QWORD*)(v9 + 8) != -1) {
        goto LABEL_20;
      }
      return result;
    }
  }
  else {
    v40 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak_alt1(v40);
    if (v8) {
      goto LABEL_18;
    }
  }
  if ((v1 & 1) != 0) {
  LABEL_20:
    v10 = *(_QWORD*)(a1 + 56);
    if (v10 == 0) {
      goto LABEL_25;
    }
    v11 = std___1___shared_weak_count_lock_alt1(v10);
    if (v11 == 0) {
      goto LABEL_25;
    }
    v12 = v11;
    v13 = (atomic_ullong*)(v11 + 8);
    v14 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v13, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = v14;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
      v14 = v15;
    }
    if (v14 == nullptr) {
    LABEL_25:
      v14 = ui_LayoutAccessor_empty__ptr[0];
    }
    v16 = ui_LayoutAccessor_FindPane(v14, "Face");
    if (v16 != 0) {
      v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d678[0], 0);
      if (v17 != 0) {
        v18 = v17;
        v19 = Pane_58f8a0(v17);
        v20 = (__int64*)(*(_QWORD*)(v19 + 24) +
                         16LL * (*(_DWORD*)(v19 + 16) & 3));
        v48 = *v20;
        v49 = v20[1];
        v21 = Pane_58f8a0(v18);
        v22 = *(_QWORD*)(v21 + 24) + 16LL * (*(_DWORD*)(v21 + 16) & 3);
        *(_QWORD*)v22 = v48;
        *(_QWORD*)(v22 + 8) = v49;
        *(_DWORD*)(v22 + 16) = -1082130432;
      }
    }
    v23 = *(_QWORD*)(a1 + 56);
    if (v23 == 0) {
      goto LABEL_34;
    }
    v24 = std___1___shared_weak_count_lock_alt1(v23);
    if (v24 == 0) {
      goto LABEL_34;
    }
    v25 = v24;
    v26 = (atomic_ullong*)(v24 + 8);
    v27 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v26, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v28 = v27;
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak_alt1(v25);
      v27 = v28;
    }
    if (v27 == nullptr) {
    LABEL_34:
      v27 = ui_LayoutAccessor_empty__ptr[0];
    }
    if (*(_BYTE*)(a1 + 95) != 0) {
      v29 = "SoundDefault";
    }
    else {
      v29 = "SoundDisable";
    }
    GameHr_1562680((__int64)v27, (unsigned int*)v29, 0x1.0000000000000p+0f);
    v30 = *(_QWORD*)(a1 + 56);
    if (v30 == 0) {
      goto LABEL_43;
    }
    v31 = std___1___shared_weak_count_lock_alt1(v30);
    if (v31 == 0) {
      goto LABEL_43;
    }
    v32 = v31;
    v33 = (atomic_ullong*)(v31 + 8);
    v34 = *(__int64**)(a1 + 48);
    if (atomic_fetch_add(v33, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v35 = v34;
      (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
      std___1___shared_weak_count___release_weak_alt1(v32);
      v34 = v35;
    }
    if (v34 == nullptr) {
    LABEL_43:
      v34 = ui_LayoutAccessor_empty__ptr[0];
    }
    GameHr_1562680((__int64)v34, (unsigned int*)"FaceOut",
                   0x1.0000000000000p+0f);
    v36 = *(_QWORD*)(a1 + 56);
    if (v36 != 0) {
      v37 = std___1___shared_weak_count_lock_alt1(v36);
      if (v37 != 0) {
        v38 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v38 != nullptr) {
            goto LABEL_48;
          }
        }
        else {
          v41 = v37;
          (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          std___1___shared_weak_count___release_weak_alt1(v41);
          if (v38 != nullptr) {
          LABEL_48:
            v39 = *(_QWORD*)(a1 + 56);
            if (v39 == 0) {
              goto LABEL_59;
            }
            goto LABEL_55;
          }
        }
      }
    }
    v38 = ui_LayoutAccessor_empty__ptr[0];
    v39 = *(_QWORD*)(a1 + 56);
    if (v39 == 0) {
    LABEL_59:
      v45 = ui_LayoutAccessor_empty__ptr[0];
    LABEL_60:
      v47 = LayoutAccessor_15638b0(v45, "FaceOut", 0);
      return LayoutAccessor_15636c0((__int64)v38, (__int64)"FaceOut", 0, v47);
    }
  LABEL_55:
    v42 = std___1___shared_weak_count_lock_alt1(v39);
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
        goto LABEL_60;
      }
    }
    goto LABEL_59;
  }
  return result;
}

__int64 ProcTalkLogMenu_TalkLogMenuItem_Unknown19(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BOOL4 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  atomic_ullong* v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  atomic_ullong* v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  atomic_ullong* v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64* v53;
  const char* v54;
  char* v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  atomic_ullong* v65;
  __int64* v66;
  __int64 v67;
  __int64 v68;
  char v69;
  __int64* v70;
  __int64 v71;

  v2 = result;
  if (*(_BYTE*)(result + 77) != 1 || (*(_BYTE*)(result + 98) & 1) != 0 ||
      (*(_BYTE*)(result + 99) & 1) != 0 || (*(_BYTE*)(result + 92) & 1) != 0) {
    goto LABEL_74;
  }
  result = *(_QWORD*)(result + 8);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e030[0], &GameData_20d9a00, 0);
  }
  v3 = result + 120LL * *(int*)(v2 + 88);
  v4 = *(_QWORD*)(v3 + 1208);
  if (v4 == 0 || *(_BYTE*)(v4 + 1041) != 1) {
    goto LABEL_74;
  }
  result = *(_QWORD*)(v2 + 56);
  if (result == 0) {
    goto LABEL_16;
  }
  result = std___1___shared_weak_count_lock_alt1(result);
  if (result == 0) {
    goto LABEL_16;
  }
  v5 = *(__int64**)(v2 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v5 != nullptr) {
      goto LABEL_13;
    }
  LABEL_16:
    v5 = ui_LayoutAccessor_empty__ptr[0];
    if (*(__int64*)((char*)ui_LayoutAccessor_empty__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL)) == 0) {
      goto LABEL_74;
    }
    goto LABEL_17;
  }
  v6 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  result = std___1___shared_weak_count___release_weak_alt1(v6);
  if (v5 == nullptr) {
    goto LABEL_16;
  }
LABEL_13:
  if (v5[2] == 0) {
    goto LABEL_74;
  }
LABEL_17:
  result = v5[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result == 0) {
      goto LABEL_27;
    }
    v7 = *v5;
    if (*v5 != 0) {
      v1 = *(unsigned __int8*)(v7 + 24);
      v8 = v7 + 152;
      if (v1 == 0) {
        v8 = 0;
      }
      v9 = v8 != v5[2];
    }
    else {
      v9 = true;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v10 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak_alt1(v10);
    }
    if (!v9) {
      if ((v1 & 1) == 0) {
        goto LABEL_74;
      }
    }
    else {
    LABEL_27:
      v11 = v5[1];
      if (v11 == 0 || *(_QWORD*)(v11 + 8) == -1) {
        goto LABEL_74;
      }
    }
    v12 = __dynamic_cast(*(_QWORD*)(v2 + 8), GameData_212e030[0],
                         &GameData_20d9a00, 0) +
          120LL * *(int*)(v2 + 88);
    v13 = *(_QWORD*)(v12 + 1208);
    if (v13 == 0 || *(_BYTE*)(v13 + 1041) == 1) {
      v14 = *(_DWORD*)(v2 + 84);
      if ((v14 & 0x80000000) == 0 &&
          (signed int)v14 <
              (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_212d8b8[0] +
                                         32LL)) {
        v15 = *(_QWORD*)(*(_QWORD*)GameData_212d8b8[0] + 24LL);
        if (v14 != 0) {
          v16 = v14 & 7;
          v17 = *(unsigned int*)(v2 + 84);
          if ((v14 & 7) != 0) {
            do {
              v15 = *(_QWORD*)(v15 + 8);
              --v17;
              --v16;
            } while (v16 != 0);
          }
          if (v14 >= 8) {
            v18 = v17 - 1;
            do {
              v18 -= 8LL;
              v15 = *(
                  _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v15 +
                                                                                                        8) +
                                                                                             8LL) +
                                                                                  8LL) +
                                                                       8LL) +
                                                            8LL) +
                                                 8LL) +
                                      8LL) +
                           8LL);
            } while (v18 < 0xFFFFFFFFFFFFFFFELL);
          }
        }
        v19 = *(_QWORD*)(v15 + 16);
        if (v19 != 0) {
          v20 = *(unsigned int*)(v19 + 100);
          v21 = *GameData_212cbb8[0];
          if ((v20 & 0x80000000) != 0) {
            v22 = *(__int64**)(v21 + 64);
          }
          else {
            v22 = (__int64*)(*(_QWORD*)(v21 + 64) + 8 * v20);
          }
          GameRoutine_17d3100((_QWORD*)(v12 + 1208), *v22, 0);
        }
      }
    }
    v23 = *(_QWORD*)(v2 + 56);
    v24 = v3 + 1208;
    if (v23 == 0) {
      goto LABEL_51;
    }
    v25 = std___1___shared_weak_count_lock_alt1(v23);
    if (v25 == 0) {
      goto LABEL_51;
    }
    v26 = *(__int64**)(v2 + 48);
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v27 = v25;
      v28 = v26;
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak_alt1(v27);
      v26 = v28;
    }
    if (v26 == nullptr) {
    LABEL_51:
      v26 = ui_LayoutAccessor_empty__ptr[0];
    }
    GameHr_17d2c80((__int64*)v24, v26);
    v29 = *(_QWORD*)(v2 + 56);
    *(_BYTE*)(v2 + 92) = 1;
    if (v29 == 0) {
      goto LABEL_57;
    }
    v30 = std___1___shared_weak_count_lock_alt1(v29);
    if (v30 == 0) {
      goto LABEL_57;
    }
    v31 = v30;
    v32 = (atomic_ullong*)(v30 + 8);
    v33 = *(__int64**)(v2 + 48);
    if (atomic_fetch_add(v32, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v34 = v33;
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
      v33 = v34;
    }
    if (v33 == nullptr) {
    LABEL_57:
      v33 = ui_LayoutAccessor_empty__ptr[0];
    }
    GameHr_1562680((__int64)v33, (unsigned int*)"FaceIn",
                   0x1.0000000000000p+0f);
    v35 = *(_QWORD*)(v24 + 112);
    v36 = "FaceDefault";
    if (v35 != 0 && *(_BYTE*)(v35 + 76) != 0) {
      v36 = "FaceNoise";
    }
    v37 = *(_QWORD*)(v2 + 56);
    if (v37 == 0) {
      goto LABEL_66;
    }
    v38 = std___1___shared_weak_count_lock_alt1(v37);
    if (v38 == 0) {
      goto LABEL_66;
    }
    v39 = v38;
    v40 = (atomic_ullong*)(v38 + 8);
    v41 = *(__int64**)(v2 + 48);
    if (atomic_fetch_add(v40, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v42 = v41;
      (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
      std___1___shared_weak_count___release_weak_alt1(v39);
      v41 = v42;
    }
    if (v41 == nullptr) {
    LABEL_66:
      v41 = ui_LayoutAccessor_empty__ptr[0];
    }
    GameHr_1562680((__int64)v41, (unsigned int*)v36, 0x1.0000000000000p+0f);
    v43 = *(_QWORD*)(v2 + 56);
    if (v43 == 0) {
      goto LABEL_72;
    }
    v44 = std___1___shared_weak_count_lock_alt1(v43);
    if (v44 == 0) {
      goto LABEL_72;
    }
    v45 = v44;
    v46 = (atomic_ullong*)(v44 + 8);
    v47 = *(__int64**)(v2 + 48);
    if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      v48 = v47;
      (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
      std___1___shared_weak_count___release_weak_alt1(v45);
      v47 = v48;
    }
    if (v47 == nullptr) {
    LABEL_72:
      v47 = ui_LayoutAccessor_empty__ptr[0];
    }
    result = ui_LayoutAccessor_SetPaneVisible((__int64)v47, "Face_Moya",
                                              *(_BYTE*)(v24 + 48));
  }
LABEL_74:
  if (*(_BYTE*)(v2 + 96) == 1) {
    v49 = *(_QWORD*)(v2 + 8);
    v50 = v49 != 0
              ? __dynamic_cast(v49, GameData_212e030[0], &GameData_20d9a00, 0)
              : 0LL;
    v51 = *(_DWORD*)(v2 + 84);
    result = snd_fnd_WeakHandle_isValid_alt1((__int64*)(v50 + 1192));
    if ((result & 1) == 0 || *(_DWORD*)(v50 + 1692) != v51) {
      if ((*(_BYTE*)(v2 + 93) & 1) != 0 || (*(_BYTE*)(v2 + 94) & 1) == 0) {
        v56 = *(_DWORD*)(__dynamic_cast(*(_QWORD*)(v2 + 8), GameData_212e030[0],
                                        &GameData_20d9a00, 0) +
                         1696);
        v57 = *(_DWORD*)(v2 + 84);
        if (v56 <= 2) {
          v58 = 2;
        }
        else {
          v58 = v56;
        }
        if (v56 >= 2) {
          v59 = 1;
        }
        else {
          v59 = 2;
        }
        v60 = v59 + v56;
        if (v58 - 2 > v57 || v57 > v60) {
        LABEL_111:
          v67 = __dynamic_cast(*(_QWORD*)(v2 + 8), GameData_212e030[0],
                               &GameData_20d9a00, 0);
          v68 = v67 + 120LL * *(int*)(v2 + 88);
          v69 = snd_fnd_WeakHandle_isValid_alt1((__int64*)(v67 + 1192));
          result = *(_QWORD*)(v68 + 1208);
          if ((v69 & 1) != 0) {
            if (result == 0) {
              goto LABEL_121;
            }
          }
          else {
            if (result == 0) {
            LABEL_121:
              *(_BYTE*)(v2 + 96) = 0;
              return result;
            }
            v70 = (__int64*)(v68 + 1208);
            if (*(_BYTE*)(result + 1041) == 1) {
              v71 = *(_QWORD*)(result + 104);
              if (v71 != 0 && spine_AnimationState_getCurrent(v71, 5u) != 0) {
                spine_TrackEntry_setTimeScale(0x0.0p+0);
              }
            }
            result = *v70;
          }
          result = GameRoutine_190b990(result, 0);
          goto LABEL_121;
        }
        v62 = *(_QWORD*)(v2 + 56);
        if (v62 == 0) {
          goto LABEL_108;
        }
        v63 = std___1___shared_weak_count_lock_alt1(v62);
        if (v63 == 0) {
          goto LABEL_108;
        }
        v64 = v63;
        v65 = (atomic_ullong*)(v63 + 8);
        v53 = *(__int64**)(v2 + 48);
        if (atomic_fetch_add(v65, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          v66 = v53;
          (*(void (**)(__int64))(*(_QWORD*)v64 + 16LL))(v64);
          std___1___shared_weak_count___release_weak_alt1(v64);
          v53 = v66;
        }
        if (v53 == nullptr) {
        LABEL_108:
          v53 = ui_LayoutAccessor_empty__ptr[0];
        }
        v55 = "SoundDefault";
      }
      else {
        if (*GameData_212d460[0] == 0) {
          goto LABEL_111;
        }
        v53 = game_talk_g_window_layout_ptr[0];
        if (*(_BYTE*)(*GameData_212d460[0] + 306) != 0) {
          v54 = "SoundSelect";
        }
        else {
          v54 = "SoundDefault";
        }
        if (*(_BYTE*)(v2 + 95) != 0) {
          v55 = (char*)v54;
        }
        else {
          v55 = "SoundDisable";
        }
      }
      GameHr_1562680((__int64)v53, (unsigned int*)v55, 0x1.0000000000000p+0f);
      goto LABEL_111;
    }
  }
  if (*(_BYTE*)(v2 + 97) == 1) {
    v52 = __dynamic_cast(*(_QWORD*)(v2 + 8), GameData_212e030[0],
                         &GameData_20d9a00, 0);
    result =
        GameRoutine_17d3040((_QWORD*)(v52 + 120LL * *(int*)(v2 + 88) + 1208));
    if ((result & 1) != 0) {
      *(_BYTE*)(v2 + 97) = 0;
    }
  }
  return result;
}

__int64 ProcTalkLogMenu_TalkLogMenuItem_ACall(__int64 a1)
{
  __int64* v2;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  const char* v19;
  const char* v20;
  char v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  const char* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  __int64* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  const char* v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    __int64 v54[2];
    __int64* v55;
  } v54_;
  struct {
    __int64 v56;
    unsigned __int64 v57;
    const char* v58;
  } v56_;

  if (*(_BYTE*)(a1 + 95) == 1) {
    if ((*(_BYTE*)(a1 + 93) & 1) != 0 || (*(_BYTE*)(a1 + 94) & 1) == 0) {
      v4 = *(_QWORD*)(a1 + 56);
      if (v4 == 0) {
        goto LABEL_13;
      }
      v5 = std___1___shared_weak_count_lock_alt1(v4);
      if (v5 == 0) {
        goto LABEL_13;
      }
      v6 = v5;
      v7 = (atomic_ullong*)(v5 + 8);
      v2 = *(__int64**)(a1 + 48);
      if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v8 = v2;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak_alt1(v6);
        v2 = v8;
      }
      if (v2 == nullptr) {
      LABEL_13:
        v2 = ui_LayoutAccessor_empty__ptr[0];
      }
    }
    else {
      if (*GameData_212d460[0] == 0) {
      LABEL_15:
        v9 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                            &GameData_20d9a00, 0);
        v10 = *(_DWORD*)(a1 + 84);
        v11 = v9;
        v12 = *(_QWORD*)(*(_QWORD*)GameData_212d8b8[0] + 24LL);
        if (v10 != 0) {
          v13 = v10 & 7;
          v14 = *(unsigned int*)(a1 + 84);
          if ((v10 & 7) != 0) {
            do {
              v12 = *(_QWORD*)(v12 + 8);
              --v14;
              --v13;
            } while (v13 != 0);
          }
          if (v10 >= 8) {
            v15 = v14 - 1;
            do {
              v15 -= 8LL;
              v12 = *(
                  _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v12 +
                                                                                                        8) +
                                                                                             8LL) +
                                                                                  8LL) +
                                                                       8LL) +
                                                            8LL) +
                                                 8LL) +
                                      8LL) +
                           8LL);
            } while (v15 < 0xFFFFFFFFFFFFFFFELL);
          }
        }
        v16 = *(__int64**)(v12 + 16);
        if ((*(_BYTE*)v16 & 1) != 0) {
          fw_text_String_CopyTerminated(&v56_.v56, v16[2], v16[1]);
        }
        else {
          v17 = *v16;
          v18 = v16[1];
          v19 = (const char*)v16[2];
          v56_.v57 = v18;
          v56_.v58 = v19;
          v56_.v56 = v17;
        }
        if ((v56_.v56 & 1) != 0) {
          v20 = v56_.v58;
        }
        else {
          v20 = (char*)&v56_.v56 + 1;
        }
        game_113af40(v11 + 1056, v20);
        GameHr_113bfb0(v11 + 1056);
        GameRoutine_112180(v11 + 1192, (__int64)v54_.v54);
        v21 = v56_.v56;
        *(_DWORD*)(v11 + 1692) = v10;
        if ((v21 & 1) != 0 && v56_.v58 != nullptr) {
          v22 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v56_.v58);
        }
        *(_BYTE*)(a1 + 96) = 1;
        v3 = *(_BYTE*)(a1 + 94);
        goto LABEL_33;
      }
      v2 = game_talk_g_window_layout_ptr[0];
    }
    GameHr_1562680((__int64)v2, (unsigned int*)"SoundDecide",
                   0x1.0000000000000p+0f);
    goto LABEL_15;
  }
  v3 = 1;
  if ((*(_BYTE*)(a1 + 94) & 1) == 0) {
    *(_BYTE*)(a1 + 97) = 1;
  LABEL_49:
    v37 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                         &GameData_20d9a00, 0);
    GameRoutine_17d3320(v37 + 120LL * *(int*)(a1 + 88) + 1208, 1);
    return 0;
  }
LABEL_33:
  if ((*(_BYTE*)(a1 + 93) & 1) != 0 || (v3 & 1) == 0) {
    goto LABEL_49;
  }
  v23 = *(_DWORD*)(a1 + 84);
  v24 = *(_QWORD*)(*(_QWORD*)GameData_212d8b8[0] + 24LL);
  if (v23 != 0) {
    v25 = v23 & 7;
    v26 = *(unsigned int*)(a1 + 84);
    if ((v23 & 7) != 0) {
      do {
        v24 = *(_QWORD*)(v24 + 8);
        --v26;
        --v25;
      } while (v25 != 0);
    }
    if (v23 >= 8) {
      v27 = v26 - 1;
      do {
        v27 -= 8LL;
        v24 = *(
            _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v24 +
                                                                                                  8) +
                                                                                       8LL) +
                                                                            8LL) +
                                                                 8LL) +
                                                      8LL) +
                                           8LL) +
                                8LL) +
                     8LL);
      } while (v27 < 0xFFFFFFFFFFFFFFFELL);
    }
  }
  v28 = *(_QWORD*)(v24 + 16);
  v29 = *(unsigned int*)(v28 + 100);
  if ((int)v29 < 1) {
    v40 = msg_MessageManager_instance__ptr[0];
    if ((*(_BYTE*)v28 & 1) != 0) {
      v41 = *(_QWORD*)(v28 + 16);
    }
    else {
      v41 = v28 + 1;
    }
    GameRoutine_a50740((void*)(&v56_.v56), *msg_MessageManager_instance__ptr[0],
                       v41);
    if ((*(_BYTE*)v28 & 1) != 0) {
      v42 = *(_QWORD*)(v28 + 16);
    }
    else {
      v42 = v28 + 1;
    }
    fs_a501f0((void*)(v54_.v54), *v40, v42);
    v43 = v56_.v57;
    if ((v56_.v56 & 1) == 0) {
      v43 = (unsigned __int64)(unsigned __int8)v56_.v56 >> 1;
    }
    if (v43 != 0) {
      v44 = (v54_.v54[0] & 1) != 0 ? v54_.v55 : (__int64*)((char*)v54_.v54 + 1);
      v45 = (v56_.v56 & 1) != 0 ? (__int64*)v56_.v58
                                : (__int64*)((char*)&v56_.v56 + 1);
      v46 = GameRoutine_112ea40((__int64)v44, v45);
      if (v46 != 0) {
        v47 = (_QWORD*)*GameData_212d460[0];
        if (*GameData_212d460[0] != 0) {
          v48 = v47[39];
          if (v48 != 0) {
            v49 = *(const char**)(v46 + 48);
            if (v49 != nullptr) {
              v50 = strlen(*(const char**)(v46 + 48));
              v47[47] = v49;
              v47[48] = v50;
              v51 = strlen(v49);
              GameHr_1916dd0(v48, 0, v49, 0x1.0000000000000p-1f, v51, 0);
            }
          }
        }
      }
    }
    if ((v54_.v54[0] & 1) != 0 && v54_.v55 != nullptr) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, (__int64)v54_.v55);
    }
    if ((v56_.v56 & 1) != 0 && v56_.v58 != nullptr) {
      v53 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v53 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, (__int64)v56_.v58);
    }
  }
  else {
    v30 = (_QWORD*)*GameData_212d460[0];
    if (*GameData_212d460[0] != 0) {
      v31 = v30[39];
      v32 = *(_QWORD*)(*(_QWORD*)(*GameData_212cbb8[0] + 64) + 8 * v29);
      if (v32 != 0 && v31 != 0) {
        v34 = *(const char**)(v32 + 48);
        if (v34 != nullptr) {
          v35 = strlen(*(const char**)(v32 + 48));
          v30[47] = v34;
          v30[48] = v35;
          v36 = strlen(v34);
          GameHr_1916dd0(v31, 0, v34, 0x1.0000000000000p-1f, v36, 0);
        }
      }
    }
  }
  return 0;
}

__int64 ProcTalkLogMenu_TalkLogMenuItem_DrawText(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 result;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BOOL4 v22;
  __int64 v23;
  const char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  atomic_ullong* v29;
  __int64* v30;
  __int64* v31;
  const char* v32;
  const char* v33;
  unsigned int* v34;
  __int64 v35;
  __int64 v36;
  unsigned int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  atomic_ullong* v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  const char* v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  atomic_ullong* v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  char* v61;

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
    v21 = v3;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak_alt1(v21);
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
  result = LayoutAccessor_155ea30(v4);
  if ((result & 1) != 0) {
    if ((*(_BYTE*)(a1 + 93) & 1) == 0 && (*(_BYTE*)(a1 + 94) & 1) != 0) {
      return LayoutAccessor_155e830((__int64)v4, 0);
    }
    v6 = *(_DWORD*)(a1 + 84);
    if ((v6 & 0x80000000) == 0) {
      v7 = GameData_212d8b8[0];
      if ((signed int)v6 <
          (signed __int32)*(_DWORD*)(*(_QWORD*)GameData_212d8b8[0] + 32LL)) {
        v8 = *(_QWORD*)(*(_QWORD*)GameData_212d8b8[0] + 24LL);
        if (v6 != 0) {
          v9 = v6 & 7;
          v10 = *(unsigned int*)(a1 + 84);
          if ((v6 & 7) != 0) {
            do {
              v8 = *(_QWORD*)(v8 + 8);
              --v10;
              --v9;
            } while (v9 != 0);
          }
          if (v6 >= 8) {
            v11 = v10 - 1;
            do {
              v11 -= 8LL;
              v8 = *(
                  _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 +
                                                                                                        8) +
                                                                                             8LL) +
                                                                                  8LL) +
                                                                       8LL) +
                                                            8LL) +
                                                 8LL) +
                                      8LL) +
                           8LL);
            } while (v11 < 0xFFFFFFFFFFFFFFFELL);
          }
        }
        v12 = *(_QWORD*)(v8 + 16);
        if (v12 != 0) {
          if ((*(_BYTE*)(v12 + 24) & 1) != 0) {
            v13 = *(_QWORD*)(v12 + 40);
          }
          else {
            v13 = v12 + 25;
          }
          if (v13 != 0) {
            v14 = ui_LayoutAccessor_FindTextBox(v4, "T_Name");
            if (v14 != 0) {
              GameRoutine_156c5d0(v14, v13, 0);
            }
          }
          v15 = ui_LayoutAccessor_FindTextBox(v4, "T_Message");
          if (v15 != 0) {
            GameRoutine_156c5d0(v15, (__int64)&GameData_1a9f09e, 0);
          }
          v16 = ui_LayoutAccessor_FindTextBox(v4, "T_Message3");
          if (v16 != 0) {
            GameRoutine_156c5d0(v16, (__int64)&GameData_1a9f09e, 0);
          }
          v17 = ui_LayoutAccessor_FindTextBox(v4, "T_MessageChoice");
          if (v17 != 0) {
            GameRoutine_156c5d0(v17, (__int64)&GameData_1a9f09e, 0);
          }
          if ((*(_BYTE*)(v12 + 48) & 1) != 0) {
            v18 = *(_BYTE**)(v12 + 64);
          }
          else {
            v18 = (_BYTE*)(v12 + 49);
          }
          if (*(_BYTE*)(a1 + 98) == 1) {
            if (v18 != nullptr) {
              v19 = ui_LayoutAccessor_FindTextBox(v4, "T_MessageChoice");
              if (v19 != 0) {
                v20 = (__int64)v18;
              LABEL_53:
                GameRoutine_156c5d0(v19, v20, 0);
              }
            }
          }
          else {
            v22 = GameRoutine_16046b0() || (int)TextSelector_1907f20(v18) > 2;
            ui_LayoutAccessor_SetPaneVisible((__int64)v4, "T_Message", !v22);
            ui_LayoutAccessor_SetPaneVisible((__int64)v4, "T_Message3", v22);
            if ((*(_BYTE*)(v12 + 48) & 1) != 0) {
              v23 = *(_QWORD*)(v12 + 64);
            }
            else {
              v23 = v12 + 49;
            }
            if (v23 != 0) {
              v24 = v22 ? "T_Message3" : "T_Message";
              v19 = ui_LayoutAccessor_FindTextBox(v4, v24);
              if (v19 != 0) {
                v20 = v23;
                goto LABEL_53;
              }
            }
          }
          v25 = *(_QWORD*)(a1 + 56);
          v26 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 336LL);
          if (v25 == 0) {
            goto LABEL_59;
          }
          v27 = std___1___shared_weak_count_lock_alt1(v25);
          if (v27 == 0) {
            goto LABEL_59;
          }
          v28 = v27;
          v29 = (atomic_ullong*)(v27 + 8);
          v30 = *(__int64**)(a1 + 48);
          if (atomic_fetch_add(v29, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            v31 = v30;
            (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
            std___1___shared_weak_count___release_weak_alt1(v28);
            v30 = v31;
          }
          if (v30 == nullptr) {
          LABEL_59:
            v30 = ui_LayoutAccessor_empty__ptr[0];
          }
          v32 = "Default";
          v33 = "Select";
          if (*(_BYTE*)(a1 + 98) != 0) {
            v32 = "Choice_Default";
            v33 = "Choice_Select";
          }
          if (v26 == a1) {
            v34 = (unsigned int*)v33;
          }
          else {
            v34 = (unsigned int*)v32;
          }
          GameHr_1562680((__int64)v30, v34, 0x1.0000000000000p+0f);
          v35 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                               &GameData_20d9a00, 0) +
                120LL * *(int*)(a1 + 88);
          v36 = v35 + 1208;
          if (*(_BYTE*)(v35 + 1256) == 1) {
            GameRoutine_17d2b20((__int64*)v36, v4);
          }
          v37 = *(_DWORD*)(a1 + 84);
          v38 = 0;
          if ((v37 & 0x80000000) == 0 &&
              (signed int)v37 <
                  (signed __int32)*(_DWORD*)(*(_QWORD*)v7 + 32LL)) {
            v39 = *(_QWORD*)(*(_QWORD*)v7 + 24LL);
            if (v37 != 0) {
              v40 = v37 & 7;
              v41 = *(unsigned int*)(a1 + 84);
              if ((v37 & 7) != 0) {
                do {
                  v39 = *(_QWORD*)(v39 + 8);
                  --v41;
                  --v40;
                } while (v40 != 0);
              }
              if (v37 >= 8) {
                v42 = v41 - 1;
                do {
                  v42 -= 8LL;
                  v39 = *(
                      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v39 +
                                                                                                            8) +
                                                                                                 8LL) +
                                                                                      8LL) +
                                                                           8LL) +
                                                                8LL) +
                                                     8LL) +
                                          8LL) +
                               8LL);
                } while (v42 < 0xFFFFFFFFFFFFFFFELL);
              }
            }
            v38 = *(_QWORD*)(v39 + 16);
          }
          v43 = *(_QWORD*)(a1 + 56);
          if (v43 == 0) {
            goto LABEL_81;
          }
          v44 = std___1___shared_weak_count_lock_alt1(v43);
          if (v44 == 0) {
            goto LABEL_81;
          }
          v45 = v44;
          v46 = (atomic_ullong*)(v44 + 8);
          v47 = *(__int64**)(a1 + 48);
          if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            v48 = v47;
            (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
            std___1___shared_weak_count___release_weak_alt1(v45);
            v47 = v48;
          }
          if (v47 == nullptr) {
          LABEL_81:
            v47 = ui_LayoutAccessor_empty__ptr[0];
          }
          ui_LayoutAccessor_SetPaneVisible((__int64)v47, "Face_Moya", 0);
          v49 = *(unsigned int*)(v38 + 96);
          if ((int)v49 >= 1 &&
              (*(_BYTE*)((v50 =
                              *(_QWORD*)(*(_QWORD*)(*GameData_212cb88[0] + 64) +
                                         8 * v49)) +
                         77) &
               1) == 0 &&
              (v51 = *(const char**)(v50 + 40)) != nullptr && *v51 != 0 &&
              strcmp(v51, "NoFace") != 0) {
            GameHr_17d27a0(v36, v50);
            v52 = 0;
            *(_BYTE*)(a1 + 92) = 0;
          }
          else {
            v53 = *(_QWORD*)(a1 + 56);
            if (v53 == 0) {
              goto LABEL_93;
            }
            v54 = std___1___shared_weak_count_lock_alt1(v53);
            if (v54 == 0) {
              goto LABEL_93;
            }
            v55 = v54;
            v56 = (atomic_ullong*)(v54 + 8);
            v57 = *(__int64**)(a1 + 48);
            if (atomic_fetch_add(v56, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              v58 = v57;
              (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
              std___1___shared_weak_count___release_weak_alt1(v55);
              v57 = v58;
            }
            if (v57 == nullptr) {
            LABEL_93:
              v57 = ui_LayoutAccessor_empty__ptr[0];
            }
            v59 = ui_LayoutAccessor_FindPane(v57, "Face");
            if (v59 != 0) {
              v60 = __dynamic_cast(v59, GameData_212d670[0],
                                   GameData_212d678[0], 0);
              if (v60 != 0) {
                *(_BYTE*)(v60 + 88) &= ~1u;
                *(_BYTE*)(v36 + 48) = 0;
                if (*(_QWORD*)v36 != 0 && *(_QWORD*)(v36 + 40) != 0) {
                  *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v60) + 24) + 8LL) =
                      *(_QWORD*)(v36 + 40);
                }
              }
            }
            v52 = 1;
          }
          *(_BYTE*)(a1 + 99) = v52;
          if (*(_BYTE*)(a1 + 95) == 1) {
            if (*(_BYTE*)(a1 + 96) != 0) {
              v61 = "SoundDecide";
            }
            else {
              v61 = "SoundDefault";
            }
          }
          else {
            v61 = "SoundDisable";
          }
          return GameHr_1562680((__int64)v4, (unsigned int*)v61,
                                0x1.0000000000000p+0f);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
