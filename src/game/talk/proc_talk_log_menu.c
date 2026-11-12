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

  if (*(_BYTE*)(a1 + 1688) == 1 && *(_DWORD*)(a1 + 552) <= 0) {
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

#pragma GCC visibility pop
