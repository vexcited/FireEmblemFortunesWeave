#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 ClassTrialMenuItem_Unknown73_alt1(__int64 a1) __asm__(
    "ClassTrialMenuItem_Unknown73");
__int64 ClassTrialMenuItem_Unknown70(__int64 a1, __int64 a2);
__int64 GameRoutine_16dd280(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
extern __int64 GameData_2259540;
__int64
game_facility_anonymous_ClassTrialMenuItem_ACall_closure_Invoke(__int64 result);
__int64 GameRoutine_16bd740(__int64, char);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
extern __int64 (*GameData_20416b0[])();
extern __int64 GameData_21f3ff8;
extern __int64 game_facility_FacilityView_instance_;
__int64 ClassTrialMenuItem_Unknown25(_QWORD* a1);
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void ClassTrialMenuItem_Unknown73(__int64 a1);
__int64* game_9a28e0(int);
__int64 GameRoutine_715440();
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 Pane_58f8a0(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212c650[5];
extern __int64* GameData_212c9a0[147];
extern __int64* GameData_212d670[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212d690;
extern __int64 game_GameModeData_instance_;
extern char* game_facility_kJobRankMids[6];
extern unsigned int GameData_1b37744[5];
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_156c910(__int64 result, const char*, int, ...);
void LayoutAccessor_1562060(__int64*, const char*, const char*);
void game_menu_GameMenuItem_DrawText(_QWORD*);
__int64 ClassTrialMenuItem_Unknown55(__int64 a1);

__int64 ClassTrialMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = GameData_21f3ff8;
  if (GameData_21f3ff8 == 0) {
    goto LABEL_13;
  }
  v3 = *(_QWORD*)(GameData_21f3ff8 + 48);
  *(_QWORD*)(GameData_21f3ff8 + 16) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(v2 + 56) = v3;
  if (game_facility_FacilityView_instance_ == 0) {
    goto LABEL_12;
  }
  v4 = *(_QWORD*)(game_facility_FacilityView_instance_ + 248);
  if (v4 == 0) {
    goto LABEL_12;
  }
  v9_.v9[0] = GameData_20416b0;
  v9_.v9[1] = game_facility_FacilityView_instance_;
  v9_.v10 = v9_.v9;
  GameRoutine_1952d00(v4, 0, (__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v5 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_11;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v5))((__int64)v9_.v10);
LABEL_11:
  v2 = GameData_21f3ff8;
  if (GameData_21f3ff8 != 0) {
  LABEL_12:
    *(_QWORD*)(v2 + 28) = 0xFFFFFFFF00000000LL;
    *(_DWORD*)(v2 + 36) = -1;
  }
LABEL_13:
  v7 = a1[1];
  if (*(_QWORD*)(v7 + 152) != 0) {
    v8 = *(_QWORD*)(v7 + 152);
  }
  else {
    v8 = a1[1];
  }
  GameRoutine_16bd740(v8, 0);
  return 9;
}

void ClassTrialMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  struct {
    _QWORD v6[2];
    char v7;
    char gap17_[3];
    int v8;
    int v9;
    char v10;
    char gap29_[3];
    __int64 v11;
  } v6_;
  _QWORD v12[21];

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameHr_16ee370((__int64)v12, v4, "MID_TempleMenu_ClassTrial_Help");
  v5 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v6_.v10 = 0;
  v6_.v11 = 0;
  v6_.v6[0] = "Tutorial";
  v6_.v6[1] = "MID_KeyHelp_Tutorial";
  v6_.v7 = 1;
  v6_.v8 = 10;
  v6_.v9 = v5;
  GameRoutine_16ef210_alt1(v12, v6_.v6);
  GameRoutine_16ee520_alt1((__int64)v12);
}

__int64 ClassTrialMenuItem_Unknown55(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  char* v5;
  char* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  char* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;

  game_menu_GameMenuItem_DrawText((_QWORD*)a1);
  result = *(_QWORD*)(a1 + 56);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v3 = *(__int64**)(a1 + 48);
      v4 = result;
      if (v3 == nullptr) {
      LABEL_14:
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
          return std___1___shared_weak_count___release_weak(v4);
        }
        return result;
      }
      LayoutAccessor_1562060(
          *(__int64**)(a1 + 48), "T_Txt",
          game_facility_kJobRankMids[*(unsigned __int8*)(a1 + 96)]);
      if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v5 = "LvOff";
      }
      else {
        if ((*(_BYTE*)(a1 + 96) & 0xFE) != 4) {
          if (*(_BYTE*)(a1 + 96) != 0) {
            v7 =
                game_9a28e0(GameData_1b37744[*(unsigned __int8*)(a1 + 96) - 1]);
          }
          else {
            v7 = GameData_212c650[0];
          }
          v8 = *(_QWORD*)(*GameData_212c9a0[0] + 64);
          v9 = *(_QWORD*)(*GameData_212c9a0[0] + 72);
          if (v8 == v9) {
          LABEL_28:
            v14 = 0;
          }
          else {
            while (1) {
              v10 = *(_QWORD*)(*(_QWORD*)v8 + 24LL);
              v11 = *(__int64**)(v10 + 48);
              v12 = *(__int64**)(v10 + 56);
              if (v12 != v11) {
                break;
              }
            LABEL_22:
              v8 += 8;
              if (v8 == v9) {
                goto LABEL_28;
              }
            }
            while (1) {
              v13 = *v11;
              v11 += 2;
              if (v13 == *v7) {
                break;
              }
              if (v11 == v12) {
                goto LABEL_22;
              }
            }
            v14 = *(unsigned __int8*)(*(_QWORD*)v8 + 32LL);
          }
          if (v14 <= 1) {
            v15 = 1;
          }
          else {
            v15 = v14;
          }
          LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)"LvOn");
          v16 = ui_LayoutAccessor_FindPane(v3, "T_LvNum");
          if (v16 != 0) {
            v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d690, 0);
            if (v17 != 0) {
              GameRoutine_156c910(v17, "%d", 1, (unsigned int)v15);
            }
          }
          v18 = v15 <= (int)GameRoutine_715440();
          v19 = (char*)GameData_212da30 + 36;
          if (!v18) {
            v19 = (char*)GameData_212da30 + 60;
          }
          v20 = *(_DWORD*)v19;
          v21 = ui_LayoutAccessor_FindTextBox(v3, "T_LvNum");
          if (v21 != 0) {
            v22 = Pane_58f8a0(v21);
            if (v22 != 0) {
              *(_DWORD*)(v22 + 12) = v20;
            }
          }
          v23 = GameRoutine_a4dbe0(*msg_MessageManager_instance__ptr[0],
                                   "MID_Sys_HonorLv", 0);
          if (v23 != nullptr) {
            v24 = (__int64)v23;
            v25 = ui_LayoutAccessor_FindTextBox(v3, "T_Lv");
            if (v25 != 0) {
              GameRoutine_156c5d0(v25, v24, 0);
            }
          }
          goto LABEL_10;
        }
        v5 = "LvOnPart1_2";
      }
      LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)v5);
    LABEL_10:
      if (*(_BYTE*)(a1 + 96) != 0) {
        v6 = "BorderOn";
      }
      else {
        v6 = "BorderOff";
      }
      result = LayoutAccessor_1562cf0((__int64)v3, (unsigned int*)v6);
      goto LABEL_14;
    }
  }
  return result;
}

__int64 ClassTrialMenuItem_Unknown70(__int64 a1, __int64 a2)
{
  unsigned int v2;
  __int64 result;

  v2 = *(unsigned __int8*)(a1 + 96);
  *(_QWORD*)(a1 + 88) = a2;
  *(_BYTE*)(a1 + 82) = 1;
  result = GameRoutine_960100(a1);
  *(_BYTE*)(a1 + 81) = v2 <= (unsigned __int8)result;
  return result;
}

__int64

game_facility_anonymous_ClassTrialMenuItem_ACall_closure_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  unsigned int v5;

  v1 = GameData_2259540;
  if (GameData_2259540 != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL);
    v3 = GameRoutine_16dd280(v2);
    v4 = v3 - (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 224LL))(v2);
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 496LL))(v2);
    return game_gameui_anonymous_ProcGameUIFade_In(v1, v4, 0, v5, 1, v2);
  }
  return result;
}

#pragma GCC visibility pop
