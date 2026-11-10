#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6fb810(_QWORD);
__int64 GameRoutine_94d380(_QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212da30;
extern __int64 GameData_212d690;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
__int64 EducateSkillMenuItem_Unknown55(_DWORD* a1);
__int64 GameRoutine_16dd280(_QWORD);
__int64 game_gameui_anonymous_ProcGameUIFade_In(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
extern __int64 GameData_2259540;
__int64 game_facility_anonymous_EducateSkillMenuItem_ACall_closure_Invoke(
    __int64 result);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 GameRoutine_19577f0(_QWORD, _QWORD);
__int64 GameRoutine_1957ca0(_QWORD, _QWORD);
__int64 GameRoutine_87dcb0(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern __int64 (*GameData_209bbd8[])();
extern __int64 (*GameData_2131558)();
extern __int64* GameData_2131b80;
extern __int64 GameData_2249ef0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_kVariableHubFacilityForced;
__int64 game_facility_anonymous_EducateSkillMenuItem_ACall(__int64 a1);

__int64 EducateSkillMenuItem_Unknown55(_DWORD* a1)
{
  int v2;
  int v3;
  void (**v4)(_DWORD*);
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  char* v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;

  v2 = GameRoutine_94d380(*((_QWORD*)a1 + 11), a1 + 24);
  v3 = *((unsigned __int8*)a1 + 79);
  a1[25] = v2;
  if (v3 == 1) {
    v4 = (void (**)(_DWORD*))(*(_QWORD*)a1 + 520LL);
  }
  else {
    v4 = (void (**)(_DWORD*))(*(_QWORD*)a1 + 504LL);
    if (*(_DWORD**)(*((_QWORD*)a1 + 1) + 336LL) == a1) {
      v4 = (void (**)(_DWORD*))(*(_QWORD*)a1 + 512LL);
    }
  }
  (*v4)(a1);
  result = *((_QWORD*)a1 + 7);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = *((_QWORD*)a1 + 6);
      v7 = result;
      if (v6 == 0) {
        goto LABEL_51;
      }
      v8 = ui_LayoutAccessor_FindPane(*((_QWORD*)a1 + 6), "Icon");
      if (v8 != 0) {
        v8 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d678[0], 0);
      }
      v9 = GameData_212c880[0];
      GameRoutine_1841930(v8,
                          *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                     8LL * (a1[24] & 0xFFF)),
                          0);
      if ((a1[24] & 0xFFF) != 0) {
        v10 = (char*)GameRoutine_6fb810(
            *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (a1[24] & 0xFFF)));
        if (v10 == nullptr) {
        LABEL_16:
          if ((a1[25] & 0x100000) != 0) {
            v12 = "ReinforceAfter";
          }
          else {
            v12 = "ReinforceBefore";
          }
          GameRoutine_1562cf0(v6, v12);
          result = GameRoutine_1562cf0(v6, "EquipOff");
          if ((*((_BYTE*)a1 + 102) & 0x10) != 0) {
            goto LABEL_51;
          }
          GameRoutine_1560070((void*)&v29, v6, "L_Cost");
          result = v30;
          if (v30 == 0) {
            goto LABEL_51;
          }
          v13 = std___1___shared_weak_count_lock(v30);
          v14 = v29;
          result = v30;
          if (v30 != 0) {
            result = std___1___shared_weak_count___release_weak(v30);
          }
          if (v13 != 0 && v14 != 0) {
            v15 = ui_LayoutAccessor_FindPane(v14, "Icon");
            if (v15 != 0) {
              v16 = __dynamic_cast(v15, GameData_212d670[0],
                                   GameData_212d678[0], 0);
            }
            else {
              v16 = 0;
            }
            v17 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 464LL))(a1);
            v18 = 72;
            v19 = (char*)GameData_212da30;
            if ((v17 & 1) != 0) {
              v18 = 36;
            }
            if (v16 != 0) {
              v20 = *(_DWORD*)((char*)GameData_212da30 + v18);
              v21 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v16 + 88LL))(
                  v16, 0);
              if (v21 != 0) {
                *(_DWORD*)(v21 + 12) = v20;
              }
              GameRoutine_136a920(ui_Manager_instance_ + 1264, v16, 0, 7,
                                  "IconStock_Reinforce");
            }
            v22 = ui_LayoutAccessor_FindPane(v14, "T_Num");
            if (v22 != 0) {
              v23 =
                  __dynamic_cast(v22, GameData_212d670[0], GameData_212d690, 0);
              if (v23 != 0) {
                GameRoutine_156c910(v23, "%d", 1);
              }
            }
            v24 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)a1 + 464LL))(a1);
            v25 = 64;
            if ((v24 & 1) != 0) {
              v25 = 60;
            }
            v26 = 72;
            if ((v24 & 1) != 0) {
              v26 = 36;
            }
            if ((a1[25] & 0x100) != 0) {
              v27 = v25;
            }
            else {
              v27 = v26;
            }
            v28 = *(_DWORD*)&v19[v27];
            result = ui_LayoutAccessor_FindTextBox(v14, "T_Num");
            if (result != 0) {
              result = Pane_58f8a0(result);
              if (result != 0) {
                *(_DWORD*)(result + 12) = v28;
              }
            }
          }
          else if (v13 == 0) {
          LABEL_51:
            if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
              return std___1___shared_weak_count___release_weak(v7);
            }
            return result;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
            result = std___1___shared_weak_count___release_weak(v13);
          }
          goto LABEL_51;
        }
      }
      else {
        v10 = &GameData_1a9f09e;
      }
      v11 = ui_LayoutAccessor_FindTextBox(v6, "T_Txt");
      if (v11 != 0) {
        GameRoutine_156c5d0(v11, v10, 0);
      }
      goto LABEL_16;
    }
  }
  return result;
}

__int64 game_facility_anonymous_EducateSkillMenuItem_ACall(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v1 = *(_QWORD*)(a1 + 8);
  snd_Fade_Fade_10c830(v9, 0.0f);
  snd_play_ff2d0((void*)(v7), "SE_SYS_Decide_H_Light", "SE_SYS_Decide_H_Light",
                 v9, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade(v9);
  if (game_GameModeData_instance_ != 0) {
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        &game_kVariableHubFacilityForced);
    if (v2 != 0 && *(_DWORD*)(v2 + 32) != 0 && GameData_2249ef0 != 0) {
      *(_BYTE*)(GameData_2249ef0 + 152) = 2;
      return 4;
    }
  }
  v12 = 0;
  v13 = 0;
  v10 = nullptr;
  v11 = 0;
  memset(v9, 0, sizeof(v9));
  v8 = v7;
  v7[0] = GameData_2131b80 + 2;
  v7[1] = GameData_2131558;
  GameRoutine_87dcb0(v7, v9);
  if (v8 == v7) {
    v4 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v8 + v4))((__int64)v8);
LABEL_11:
  GameRoutine_19577f0(*(_QWORD*)(v1 + 8), v9);
  v7[0] = GameData_209bbd8;
  v7[1] = v1;
  v8 = v7;
  GameRoutine_1957ca0(2, v7);
  if (v8 == v7) {
    v5 = 32;
  }
  else {
    if (v8 == nullptr) {
      goto LABEL_16;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v8 + v5))((__int64)v8);
LABEL_16:
  if (v10 == v9) {
    v6 = 32;
    goto LABEL_20;
  }
  if (v10 != nullptr) {
    v6 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v10 + v6))((__int64)v10);
  }
  return 2;
}

__int64 game_facility_anonymous_EducateSkillMenuItem_ACall_closure_Invoke(
    __int64 result)
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
