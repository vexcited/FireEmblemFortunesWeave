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
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(a1 + 1688) & 1) == 0 && *(int*)(a1 + 552) >= 1) {
    if ((*(_BYTE*)(a1 + 1689) & 1) == 0) {
      v2 = GameData_21ec7b8;
      if (GameData_21ec7b8 != 0 &&
          (*(_BYTE*)(GameData_21ec7b8 + 305) != 1 ||
           (*(_BYTE*)(GameData_21ec7b8 + 304) & 1) == 0)) {
        *(_WORD*)(GameData_21ec7b8 + 304) = 257;
        v3 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf(&v10, "%s%s", "Down", "Out");
          v4 = GameRoutine_156af20(v3, 1, 1, game_talk_g_window_layout_ptr[0],
                                   0, &v10);
        }
        else {
          v4 = -1;
        }
        *(_QWORD*)(v2 + 296) = v4;
      }
    }
    *(_BYTE*)(a1 + 1688) = 1;
  }
  (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)a1 + 384LL))(&v10,
                                                                       a1);
  GameRoutine_159e540(&v10);
  result = v11;
  if (v11 != 0) {
    result = std___1___shared_weak_count___release_weak(v11);
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
  if (v9 != 0 && *(__int64 (***)())v9 ==
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
  __int64 v13;
  __int64 v14;

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
          sprintf(&v13, "%s%s", "Down", "Out");
          v7 = GameRoutine_156af20(v5, 1, 1, game_talk_g_window_layout_ptr[0],
                                   0, &v13);
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
  (*(void (**)(__int64* __return_ptr))(*(_QWORD*)v3 + 384LL))(&v13);
  GameRoutine_159e540(&v13);
  result = v14;
  if (v14 != 0) {
    result = std___1___shared_weak_count___release_weak(v14);
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
  if (v12 != 0 && *(__int64 (***)())v12 ==
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
  (*(void (**)(__int64* __return_ptr, __int64))(*(_QWORD*)a1 + 392LL))(&v11,
                                                                       a1);
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
  __int64 v15;
  __int64 v16;

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
        GameRoutine_155e830(game_talk_g_window_layout_ptr[0], 1);
        v8 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf(&v15, "%s%s", "Down", "In");
          v9 = GameRoutine_156af20(v8, 1, 0, game_talk_g_window_layout_ptr[0],
                                   0, &v15);
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
  (*(void (**)(__int64* __return_ptr))(*(_QWORD*)v4 + 392LL))(&v15);
  GameRoutine_159e540(&v15);
  result = v16;
  if (v16 != 0) {
    result = std___1___shared_weak_count___release_weak(v16);
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
  if (v14 != 0 && *(__int64 (***)())v14 ==
                      game_talk_ProcTalkLogMenu_TalkLogMenuItem_vtable) {
    *(_DWORD*)(a1 + 1520) = *(_DWORD*)(v14 + 84);
  }
  return result;
}

#pragma GCC visibility pop
