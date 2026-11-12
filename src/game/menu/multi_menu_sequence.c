#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_SavedCursor_GetItem(_QWORD);
__int64 game_menu_BasicMenu_Unknown08(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
extern __int64 (*GameData_20c5608[])();
extern __int64 (*GameData_20c5708[])();
extern __int64 GameData_212c610;
extern __int64 GameData_2131c18[55];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_game_setting;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e0c8[6];
void GameRoutine_1786b20(_QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 MultiMenuSequence_1786fb0(_QWORD* a1, __int64* a2);
__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int a2, int a3);
__int64 MultiMenuSequence_1787630(_QWORD* a1);
__int64 MultiMenuSequence_17876a0(__int64 a1);
__int64 MultiMenuSequence_1787900(__int64 result);
__int64 MultiMenuSequence_1787b80(__int64 a1);
__int64 MultiMenuSequence_1787f40(__int64 a1);
__int64 MultiMenuSequence_1787fe0(__int64 result, unsigned int a2);
__int64
game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda0_Invoke_17892c0(
    __int64 a1, __int64 a2);
bool game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda0_Invoke_17894c0(
    __int64 a1, __int64 a2);
__int64
game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda1_Invoke_17895e0(
    __int64 a1, __int64 a2);
bool game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda1_Invoke_17897e0(
    __int64 a1, __int64 a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 ProcTransitionAnim_156af20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                   _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__n128 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                               _QWORD, _QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak();
extern __int64 GameData_20c57c0;
extern __int64 GameData_2259540;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_gameui_MenuAnimator_instance_;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void MultiMenuSequence_1786b20(_QWORD* a1);
__attribute__((swiftcall)) void MultiMenuSequence_1786e90(PSEUDO_X8 x8_,
                                                          __int64 a1);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

void __attribute__((noreturn)) MultiMenuSequence_DeletingDestructor()
{
  __udf(0x8002u);
}

void MultiMenuSequence_1786b20(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  long double v8;
  __int64 v9;
  __int64 v10;
  int v11;
  _QWORD v12[2];
  _BYTE v13[200];

  v1 = a1 + 22;
  (*(void (**)(_QWORD*))(a1[22] + 96LL))(a1 + 22);
  LayoutAccessor_155e830(v1 + 3, 1);
  v3 = game_gameui_MenuAnimator_instance_;
  if (game_gameui_MenuAnimator_instance_ != 0) {
    sprintf(v13, "%s%s", "Alpha", "In");
    ProcTransitionAnim_156af20(v3, 4, 0, v1 + 3, "Alpha", v13);
    v3 = game_gameui_MenuAnimator_instance_;
    if (game_gameui_MenuAnimator_instance_ != 0) {
      sprintf(v13, "%s%s", "Up", "In");
      ProcTransitionAnim_156af20(v3, 0, 0, v1 + 3, "Up", v13);
      v3 = game_gameui_MenuAnimator_instance_;
      if (game_gameui_MenuAnimator_instance_ != 0) {
        sprintf(v13, "%s%s", "Down", "In");
        ProcTransitionAnim_156af20(v3, 1, 0, v1 + 3, "Down", v13);
        v3 = game_gameui_MenuAnimator_instance_;
        if (game_gameui_MenuAnimator_instance_ != 0) {
          sprintf(v13, "%s%s", "Left", "In");
          if (ProcTransitionAnim_156af20(v3, 2, 0, v1 + 3, "Left", v13) != -1 &&
              ((*(__int64 (**)(_QWORD*))(*v1 + 120LL))(v1) & 1) == 0) {
            snd_Fade_Fade_10c830(v13, 0.0);
            snd_play_ff2d0((void*)(v12), "SE_SYS_Window_Open",
                           "SE_SYS_Window_Open", v13, 0, 65537, 0, 0.0, 1.0);
            snd_Fade_Destroy_Fade(v13);
          }
          v3 = game_gameui_MenuAnimator_instance_;
          if (game_gameui_MenuAnimator_instance_ != 0) {
            sprintf(v13, "%s%s", "Right", "In");
            if (ProcTransitionAnim_156af20(v3, 3, 0, v1 + 3, "Right", v13) !=
                    -1 &&
                ((*(__int64 (**)(_QWORD*))(*v1 + 120LL))(v1) & 1) == 0) {
              snd_Fade_Fade_10c830(v13, 0.0);
              snd_play_ff2d0((void*)(v12), "SE_SYS_Window_Open",
                             "SE_SYS_Window_Open", v13, 0, 65537, 0, 0.0, 1.0);
              snd_Fade_Destroy_Fade(v13);
            }
          }
        }
      }
    }
  }
  v4 = a1[26];
  if (v4 == 0) {
    goto LABEL_18;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_18;
  }
  v6 = v1[3];
  if (v6 != 0) {
    LODWORD(v3) = *(_DWORD*)(v6 + 2372);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak();
  if (v6 == 0) {
  LABEL_18:
    LODWORD(v3) = 0;
  }
LABEL_19:
  v7 = (*(unsigned int (**)(_QWORD*))(*a1 + 352LL))(a1);
  if (GameData_2259540 != 0) {
    *(__n128*)&v8 = game_gameui_anonymous_ProcGameUIFade_In(
        GameData_2259540, (unsigned int)(v3 - 1), 2, 1, v7, 0);
  }
  if (*((_BYTE*)a1 + 138) == 0) {
    v9 = a1[19];
    if (v9 == 0 ||
        __dynamic_cast(v9, GameData_2131c18[0], &GameData_20c57c0, 0) == 0) {
      v10 = (*(__int64 (**)(_QWORD*, long double))(*a1 + 192LL))(a1, v8);
      if ((*((_BYTE*)a1 + 172) & 1) == 0) {
        v11 = v10;
        GameRoutine_1553130(v10);
        *((_DWORD*)a1 + 42) = v11;
        *((_BYTE*)a1 + 172) = 1;
      }
    }
  }
}

__attribute__((swiftcall)) void MultiMenuSequence_1786e90(PSEUDO_X8 x8_,
                                                          __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  char* v11;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 256LL))(a1);
  if (result == 0) {
    result;
    return;
  }
  v4 = result;
  v5 = strlen(result);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v5);
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v10[1] = v6;
    v11 = v7;
    v10[0] = v8 | 1;
  }
  else {
    LOBYTE(v10[0]) = 2 * v5;
    v7 = (char*)v10 + 1;
    if (v5 == 0) {
      goto LABEL_11;
    }
  }
  memmove(v7, v4, v6);
LABEL_11:
  v7[v6] = 0;
  result = GameRoutine_7a8220(a2, v10);
  if ((v10[0] & 1) != 0 && v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 MultiMenuSequence_1786fb0(_QWORD* a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  __int64 result;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;

  v3 = a1[38];
  if (v3 != 0 && (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 536LL))(v3) != 0 ||
      (v5 = a1[39]) != 0 &&
          (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 536LL))(v5) != 0 ||
      (result = a1[40]) != 0 && (result = (*(__int64 (**)(__int64))(
                                     *(_QWORD*)result + 536LL))(result)) != 0) {
    result = (*(__int64 (**)(_QWORD*))(*a1 + 192LL))(a1);
    v7 = a2[1];
    v8 = a2[2];
    if (v7 >= v8) {
      v10 = *a2;
      v11 = v7 - *a2;
      v12 = 1 - 0x3333333333333333LL * (v11 >> 3);
      if (v12 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v13 = fw_memory_g_heap_manager_ptr;
      v14 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v8 - v10) >> 3);
      if (2 * v14 > v12) {
        v12 = 2 * v14;
      }
      if (v14 >= 0x333333333333333LL) {
        v15 = 0x666666666666666LL;
      }
      else {
        v15 = v12;
      }
      if (v15 != 0) {
        if (v15 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v16 = result;
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v15, 16, 0);
        LODWORD(result) = v16;
      }
      else {
        v17 = 0;
      }
      v18 = v17 + v11;
      *(_QWORD*)v18 = "Tutorial";
      *(_QWORD*)(v18 + 8) = "MID_KeyHelp_Tutorial";
      *(_BYTE*)(v18 + 28) = 0;
      *(_QWORD*)(v18 + 32) = 0;
      *(_BYTE*)(v18 + 16) = 1;
      v19 = v17 + 40 * v15;
      v9 = v17 + v11 + 40;
      *(_DWORD*)(v18 + 20) = 10;
      *(_DWORD*)(v18 + 24) = result;
      result = memcpy(v17, v10, v11);
      *a2 = v17;
      a2[1] = v9;
      a2[2] = v19;
      if (v10 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20, v10);
      }
    }
    else {
      *(_BYTE*)(v7 + 28) = 0;
      *(_QWORD*)(v7 + 32) = 0;
      *(_QWORD*)v7 = "Tutorial";
      *(_QWORD*)(v7 + 8) = "MID_KeyHelp_Tutorial";
      v9 = v7 + 40;
      *(_BYTE*)(v7 + 16) = 1;
      *(_DWORD*)(v7 + 20) = 10;
      *(_DWORD*)(v7 + 24) = result;
    }
    a2[1] = v9;
  }
  return result;
}

__int64 MultiMenuSequence_17871c0(__int64 result, unsigned int a2, int a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _DWORD* v10;
  _DWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;

  v3 = (_QWORD*)(result + 304);
  if (*(_QWORD*)(result + 304 + 8LL * a2) != 0) {
    v4 = result;
    v5 = a2;
    *(_DWORD*)(result + 352) = a2;
    if (a3 == 1) {
      v6 = v3[a2];
      v7 = *(_QWORD*)(v6 + 816);
      v8 = *(_QWORD*)(v6 + 808);
      v9 = *(int*)(v6 + 660);
      v10 = (_DWORD*)(v6 + 644);
      v11 = (_DWORD*)(v8 + 4 * v9);
      if (v7 != v8) {
        v10 = v11;
      }
      *(_DWORD*)(*(_QWORD*)(result + 8LL * a2 + 328) + 12LL) = *v10;
      v5 = *(unsigned int*)(result + 352);
    }
    v12 = *(_QWORD*)(result + 304);
    v13 = result + 328;
    if (v3[v5] != v12) {
      if (*(_QWORD*)v13 != 0) {
        *(_BYTE*)(*(_QWORD*)v13 + 16LL) = 0;
        v12 = *v3;
      }
      if (v12 != 0) {
        v14 = *(_QWORD*)(v12 + 336);
        if (v14 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v14 + 168LL))(v14);
        }
        *(_QWORD*)(v12 + 336) = 0;
        _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v12, 1, 0, 0);
        v15 = *(_QWORD*)(v12 + 336);
        if (v15 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 160LL))(v15);
          game_IsVibrationEnabled(game_g_game_setting + 712);
          v16 = *(_QWORD*)(v12 + 336);
          v17 = 4;
          if (v16 != 0) {
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v16 + 120LL))(v16) & 1) !=
                0) {
              v17 = 4;
            }
            else {
              v17 = 0;
            }
          }
        }
        else {
          v17 = 4;
        }
        *(_DWORD*)(v12 + 356) = *(_DWORD*)(v12 + 356) & 0xFFFFFFFB | v17;
        v18 = *v3;
        v19 = *(_DWORD*)(*v3 + 356LL);
        *(_BYTE*)(v18 + 648) = 0;
        *(_DWORD*)(v18 + 356) = v19 | 2;
        *(_DWORD*)(*v3 + 352LL) = 0;
        (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 1104LL))(*v3);
      }
    }
    v20 = *(_QWORD*)(v4 + 312);
    if (v3[*(unsigned int*)(v4 + 352)] != v20) {
      v21 = *(_QWORD*)(v4 + 336);
      if (v21 != 0) {
        *(_BYTE*)(v21 + 16) = 0;
        v20 = *(_QWORD*)(v4 + 312);
      }
      if (v20 != 0) {
        v22 = *(_QWORD*)(v20 + 336);
        if (v22 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 168LL))(v22);
        }
        *(_QWORD*)(v20 + 336) = 0;
        _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v20, 1, 0, 0);
        v23 = *(_QWORD*)(v20 + 336);
        if (v23 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v23 + 160LL))(v23);
          game_IsVibrationEnabled(game_g_game_setting + 712);
          v24 = *(_QWORD*)(v20 + 336);
          v25 = 4;
          if (v24 != 0) {
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 120LL))(v24) & 1) !=
                0) {
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
        *(_DWORD*)(v20 + 356) = *(_DWORD*)(v20 + 356) & 0xFFFFFFFB | v25;
        v26 = *(_QWORD*)(v4 + 312);
        v27 = *(_DWORD*)(v26 + 356);
        *(_BYTE*)(v26 + 648) = 0;
        *(_DWORD*)(v26 + 356) = v27 | 2;
        *(_DWORD*)(*(_QWORD*)(v4 + 312) + 352LL) = 0;
        (*(void (**)(_QWORD))(**(_QWORD**)(v4 + 312) + 1104LL))(
            *(_QWORD*)(v4 + 312));
      }
    }
    v28 = *(_QWORD*)(v4 + 320);
    if (v3[*(unsigned int*)(v4 + 352)] != v28) {
      v29 = *(_QWORD*)(v4 + 344);
      if (v29 != 0) {
        *(_BYTE*)(v29 + 16) = 0;
        v28 = *(_QWORD*)(v4 + 320);
      }
      if (v28 != 0) {
        v30 = *(_QWORD*)(v28 + 336);
        if (v30 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v30 + 168LL))(v30);
        }
        *(_QWORD*)(v28 + 336) = 0;
        _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v28, 1, 0, 0);
        v31 = *(_QWORD*)(v28 + 336);
        if (v31 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v31 + 160LL))(v31);
          game_IsVibrationEnabled(game_g_game_setting + 712);
          v32 = *(_QWORD*)(v28 + 336);
          v33 = 4;
          if (v32 != 0) {
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v32 + 120LL))(v32) & 1) !=
                0) {
              v33 = 4;
            }
            else {
              v33 = 0;
            }
          }
        }
        else {
          v33 = 4;
        }
        *(_DWORD*)(v28 + 356) = *(_DWORD*)(v28 + 356) & 0xFFFFFFFB | v33;
        v34 = *(_QWORD*)(v4 + 320);
        v35 = *(_DWORD*)(v34 + 356);
        *(_BYTE*)(v34 + 648) = 0;
        *(_DWORD*)(v34 + 356) = v35 | 2;
        *(_DWORD*)(*(_QWORD*)(v4 + 320) + 352LL) = 0;
        (*(void (**)(_QWORD))(**(_QWORD**)(v4 + 320) + 1104LL))(
            *(_QWORD*)(v4 + 320));
      }
    }
    *(_BYTE*)(*(_QWORD*)(v13 + 8LL * *(unsigned int*)(v4 + 352)) + 16LL) = 1;
    v36 = game_menu_BasicMenu_SavedCursor_GetItem(
        *(_QWORD*)(v13 + 8LL * *(unsigned int*)(v4 + 352)));
    if (v36 != 0) {
      v37 = v36;
      (*(void (**)(__int64, _QWORD))(*(_QWORD*)v36 + 56LL))(v36, 0);
      v38 = v3[*(unsigned int*)(v4 + 352)];
      v39 = *(_QWORD*)(v38 + 336);
      if (v39 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v39 + 168LL))(v39);
      }
      *(_QWORD*)(v38 + 336) = v37;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v38, 1, 0, 0);
      v40 = *(_QWORD*)(v38 + 336);
      if (v40 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v40 + 160LL))(v40);
        game_IsVibrationEnabled(game_g_game_setting + 712);
        v41 = *(_QWORD*)(v38 + 336);
        v42 = 4;
        if (v41 != 0) {
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v41 + 120LL))(v41) & 1) !=
              0) {
            v42 = 4;
          }
          else {
            v42 = 0;
          }
        }
      }
      else {
        v42 = 4;
      }
      *(_DWORD*)(v38 + 356) = *(_DWORD*)(v38 + 356) & 0xFFFFFFFB | v42;
    }
    else {
      game_menu_BasicMenu_Unknown16de2e0(v3[*(unsigned int*)(v4 + 352)], 1);
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 320LL))(v4);
    v43 = *(_QWORD*)(v4 + 8);
    if (v43 != 0) {
      while (1) {
        if (*(_BYTE*)v43 == 2) {
          if (*(_DWORD*)(v43 + 32) == 2) {
            *(_QWORD*)(v4 + 16) = v43;
            *(_WORD*)(v4 + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v43 == 0) {
          return result;
        }
        v43 += 64;
      }
    }
  }
  return result;
}

__int64 MultiMenuSequence_1787630(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = a1[38];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2);
  }
  v3 = a1[39];
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
  }
  result = a1[40];
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
  }
  return result;
}

__int64 MultiMenuSequence_17876a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;

  game_menu_BasicMenu_Unknown08(
      *(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 352) + 304));
  v2 = *(_QWORD*)(a1 + 40);
  if (v2 == 0) {
  LABEL_6:
    LOBYTE(v5) = 1;
    goto LABEL_8;
  }
  v3 = *(_QWORD*)(v2 + 24);
  if (v3 == 0 || (unsigned int)strcmp(v3, "ProcHelp") != 0) {
    v4 = __dynamic_cast(v2, GameData_212c610, GameData_212e030[0], 0);
    if (v4 != 0) {
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 512LL))(v4) ^ 1;
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  LOBYTE(v5) = 0;
LABEL_8:
  result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 360LL))(a1, v5 & 1);
  v7 = *(_QWORD*)(a1 + 304);
  if (v7 != 0) {
    if (v2 == 0) {
      goto LABEL_14;
    }
    v8 = *(_QWORD*)(v2 + 24);
    if (v8 != 0 && (unsigned int)strcmp(v8, "ProcHelp") == 0) {
      v10 = 0;
      goto LABEL_16;
    }
    v9 = __dynamic_cast(v2, GameData_212c610, GameData_212e030[0], 0);
    if (v9 != 0) {
      v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 512LL))(v9) ^ 1;
    }
    else {
    LABEL_14:
      v10 = 1;
    }
  LABEL_16:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v7 + 240LL))(v7, v10 & 1);
    result =
        (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v7 + 248LL))(v7, v10 & 1);
  }
  v11 = *(_QWORD*)(a1 + 312);
  if (v11 != 0) {
    if (v2 == 0) {
      goto LABEL_23;
    }
    v12 = *(_QWORD*)(v2 + 24);
    if (v12 != 0 && (unsigned int)strcmp(v12, "ProcHelp") == 0) {
      v14 = 0;
      goto LABEL_25;
    }
    v13 = __dynamic_cast(v2, GameData_212c610, GameData_212e030[0], 0);
    if (v13 != 0) {
      v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 512LL))(v13) ^ 1;
    }
    else {
    LABEL_23:
      v14 = 1;
    }
  LABEL_25:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v11 + 240LL))(v11, v14 & 1);
    result =
        (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v11 + 248LL))(v11, v14 & 1);
  }
  v15 = *(_QWORD*)(a1 + 320);
  if (v15 != 0) {
    if (v2 == 0) {
      goto LABEL_33;
    }
    v16 = *(_QWORD*)(v2 + 24);
    if (v16 != 0 && (unsigned int)strcmp(v16, "ProcHelp") == 0) {
      v18 = 0;
      goto LABEL_35;
    }
    v17 = __dynamic_cast(v2, GameData_212c610, GameData_212e030[0], 0);
    if (v17 != 0) {
      v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 512LL))(v17) ^ 1;
    }
    else {
    LABEL_33:
      v18 = 1;
    }
  LABEL_35:
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 240LL))(v15, v18 & 1);
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v15 + 248LL))(v15,
                                                                     v18 & 1);
  }
  return result;
}

__int64 MultiMenuSequence_1787900(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v7;
  unsigned int v8;
  int v9;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD*)(result + 8);
  v1 = *(_QWORD*)(result + 16);
  if (v2 <= v1) {
    v3 = result;
    while (*(_BYTE*)v1 != 2) {
      v1 -= 64LL;
      if (v2 > v1) {
        return result;
      }
    }
    if (*(_DWORD*)(v1 + 32) == 2) {
      if ((LayoutAccessor_155ea30(result + 200) & 1) != 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v3 + 176) + 96LL))(v3 + 176);
      }
      else {
        LayoutAccessor_155e830(v3 + 200, 1);
        GameRoutine_1786b20((_QWORD*)v3);
      }
      v4 = *(_QWORD*)(v3 + 8LL * *(unsigned int*)(v3 + 352) + 304);
      v6 = *(_QWORD*)(v4 + 8);
      v5 = *(_QWORD*)(v4 + 16);
      v7 = v6 == 0 || v6 > v5;
      if (v7) {
        goto LABEL_18;
      }
      while (*(_BYTE*)v5 != 2) {
        v5 -= 64LL;
        if (v6 > v5) {
          goto LABEL_18;
        }
      }
      if (*(_DWORD*)(v5 + 32) != 6) {
      LABEL_18:
        (*(void (**)(_QWORD, __int64))(*(_QWORD*)v4 + 240LL))(
            *(_QWORD*)(v3 + 8LL * *(unsigned int*)(v3 + 352) + 304), 1);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 248LL))(v4, 1);
        (*(void (**)(__int64))(*(_QWORD*)v4 + 768LL))(v4);
        v8 = *(_DWORD*)(v4 + 352);
        v7 = v8 > 0xC;
        v9 = (1 << v8) & 0x1D00;
        if (!v7 && v9 != 0) {
          *(_DWORD*)(v4 + 352) = 0;
        }
        v11 = *(_QWORD*)(v4 + 336);
        *(_BYTE*)(v4 + 362) = 0;
        if (v11 != 0) {
          v12 = *(_DWORD*)(v4 + 356);
          *(_DWORD*)(v4 + 404) = 0;
          *(_DWORD*)(v4 + 356) = v12 & 0xFFFFFFFB;
        }
      }
      (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 360LL))(v3, 1);
      v13 = *(_QWORD*)(v3 + 304);
      if (v13 != 0) {
        (*(void (**)(_QWORD, __int64))(*(_QWORD*)v13 + 240LL))(
            *(_QWORD*)(v3 + 304), 1);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v13 + 248LL))(v13, 1);
      }
      v14 = *(_QWORD*)(v3 + 312);
      if (v14 != 0) {
        (*(void (**)(_QWORD, __int64))(*(_QWORD*)v14 + 240LL))(
            *(_QWORD*)(v3 + 312), 1);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v14 + 248LL))(v14, 1);
      }
      v15 = *(_QWORD*)(v3 + 320);
      if (v15 != 0) {
        (*(void (**)(_QWORD, __int64))(*(_QWORD*)v15 + 240LL))(
            *(_QWORD*)(v3 + 320), 1);
        (*(void (**)(__int64, __int64))(*(_QWORD*)v15 + 248LL))(v15, 1);
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 328LL))(v3);
      v16 = *(_QWORD*)(v3 + 8);
      if (v16 != 0) {
        while (1) {
          if (*(_BYTE*)v16 == 2) {
            if (*(_DWORD*)(v16 + 32) == 3) {
              *(_QWORD*)(v3 + 16) = v16;
              *(_WORD*)(v3 + 136) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v16 == 0) {
            break;
          }
          v16 += 64;
        }
      }
      *(_WORD*)(v3 + 136) |= 8u;
    }
  }
  return result;
}

__int64 MultiMenuSequence_1787b80(__int64 a1)
{
  __int64 v1;
  _DWORD* v3;
  int v4;
  __int64 result;
  int v6;
  _QWORD* v7;
  _DWORD* v8;
  _DWORD* i;
  _QWORD* v10;
  _DWORD* v11;
  _DWORD* j;
  _QWORD* v13;
  _DWORD* v14;
  _DWORD* k;

  v1 = a1 + 304;
  v3 = *(_DWORD**)(a1 + 304 + 8LL * *(unsigned int*)(a1 + 352));
  v4 = v3[161];
  result = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v3 + 200LL))(v3);
  v6 = result + v4;
  v7 = *(_QWORD**)(a1 + 304);
  if (v7 != nullptr &&
      *(_QWORD**)(v1 + 8LL * *(unsigned int*)(a1 + 352)) != v7) {
    result = (*(__int64 (**)(_QWORD))(*v7 + 200LL))(*(_QWORD*)(a1 + 304));
    v8 = (_DWORD*)v7[101];
    for (i = (_DWORD*)v7[102]; v8 != i; ++v8) {
      *v8 = v6 - result;
    }
  }
  v10 = *(_QWORD**)(a1 + 312);
  if (v10 != nullptr &&
      *(_QWORD**)(v1 + 8LL * *(unsigned int*)(a1 + 352)) != v10) {
    result = (*(__int64 (**)(_QWORD))(*v10 + 200LL))(*(_QWORD*)(a1 + 312));
    v11 = (_DWORD*)v10[101];
    for (j = (_DWORD*)v10[102]; v11 != j; ++v11) {
      *v11 = v6 - result;
    }
  }
  v13 = *(_QWORD**)(a1 + 320);
  if (v13 != nullptr &&
      *(_QWORD**)(v1 + 8LL * *(unsigned int*)(a1 + 352)) != v13) {
    result = (*(__int64 (**)(_QWORD))(*v13 + 200LL))(*(_QWORD*)(a1 + 320));
    v14 = (_DWORD*)v13[101];
    for (k = (_DWORD*)v13[102]; v14 != k; ++v14) {
      *v14 = v6 - result;
    }
  }
  return result;
}

__int64 MultiMenuSequence_1787f40(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = *(_QWORD*)(a1 + 40);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212c610, GameData_2131c18[0], 0);
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 144LL))(result);
    }
  }
  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 4) {
          *(_QWORD*)(a1 + 16) = v3;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return result;
      }
      v3 += 64;
    }
  }
  return result;
}

__int64 MultiMenuSequence_1787fe0(__int64 result, unsigned int a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = result;
  if ((a2 & 0xFFFFFFFC) == 4) {
    v3 = *(_QWORD*)(result + 152);
    if (v3 == 0) {
      v3 = result;
    }
    result = *(_QWORD*)(v3 + 32);
    if (result != 0) {
      result = __dynamic_cast(result, GameData_212c610, GameData_2131c18[0], 0);
      if (result != 0) {
        result =
            __dynamic_cast(result, GameData_2131c18[0], GameData_212e030[0], 0);
        if (result != 0) {
          result = BasicMenuCursor_16ddaa0(result, a2);
        }
      }
    }
  }
  v5 = *(_QWORD*)(v2 + 8);
  if (v5 != 0) {
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 4) {
          *(_QWORD*)(v2 + 16) = v5;
          *(_WORD*)(v2 + 136) &= ~0x80u;
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

__int64

game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda0_Invoke_17892c0(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = v13_.v13;
  v5 = *(_QWORD**)(v2 + 232);
  v6 = *(_QWORD**)(v2 + 240);
  v13_.v14 = v13_.v13;
  v13_.v13[0] = GameData_20c5608;
  v13_.v13[1] = v3;
  if (v5 == v6) {
    v10 = 0;
  LABEL_14:
    v11 = 32;
    goto LABEL_15;
  }
  v7 = GameData_212e008[0];
  v8 = GameData_212e0c8[0];
  while (1) {
    if (*v5 != 0) {
      v9 = __dynamic_cast(*v5, v7, v8, 0);
      if (v9 != 0) {
        v10 = v9;
        v15 = v9;
        if (v13_.v14 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v13_.v14 + 48LL))(v13_.v14,
                                                                    &v15) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v5 == v6) {
      v10 = 0;
      break;
    }
  }
  v4 = v13_.v14;
  if (v13_.v14 == v13_.v13) {
    goto LABEL_14;
  }
  if (v13_.v14 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v4 + v11))(v4, a2);
  }
  return v10;
}

bool game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda0_Invoke_17894c0(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

__int64

game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda1_Invoke_17895e0(
    __int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = v13_.v13;
  v5 = *(_QWORD**)(v2 + 232);
  v6 = *(_QWORD**)(v2 + 240);
  v13_.v14 = v13_.v13;
  v13_.v13[0] = GameData_20c5708;
  v13_.v13[1] = v3;
  if (v5 == v6) {
    v10 = 0;
  LABEL_14:
    v11 = 32;
    goto LABEL_15;
  }
  v7 = GameData_212e008[0];
  v8 = GameData_212e0c8[0];
  while (1) {
    if (*v5 != 0) {
      v9 = __dynamic_cast(*v5, v7, v8, 0);
      if (v9 != 0) {
        v10 = v9;
        v15 = v9;
        if (v13_.v14 == nullptr) {
          GameRoutine_60a310_alt1();
        }
        if (((*(__int64 (**)(_QWORD*, __int64*))(*v13_.v14 + 48LL))(v13_.v14,
                                                                    &v15) &
             1) != 0) {
          break;
        }
      }
    }
    if (++v5 == v6) {
      v10 = 0;
      break;
    }
  }
  v4 = v13_.v14;
  if (v13_.v14 == v13_.v13) {
    goto LABEL_14;
  }
  if (v13_.v14 != nullptr) {
    v11 = 40;
  LABEL_15:
    (*(void (**)(_QWORD*, __int64))(*v4 + v11))(v4, a2);
  }
  return v10;
}

bool game_menu_MultiMenuSequence_RequestChangeParentUnit_lambda1_Invoke_17897e0(
    __int64 a1, __int64 a2)
{
  return *(_QWORD*)(*(_QWORD*)a2 + 88LL) == *(_QWORD*)(a1 + 8);
}

#pragma GCC visibility pop
