#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 GameRoutine_ffc660(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64 ui_LayoutAccessor_empty_;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern char* game_menu_g_mid_cause_invalid_ptr[7];
__int64
HintMenuItem_Unknown55_alt1(__int64 a1) __asm__("HintMenuItem_Unknown55");
__int64
HintMenuItem_Unknown73_alt1(_QWORD* a1) __asm__("HintMenuItem_Unknown73");
__int64 GameRoutine_f9f860(_QWORD);
__int64 GameRoutine_f9f980(_QWORD, _QWORD);
__int64
game_facility_anonymous_HintMenuItem_OnDecide_closure_Invoke(__int64 a1,
                                                             _QWORD* a2);
__int64 FacilityUtil_949380();
__int64 GameRoutine_16a4d20(__int64, int, char);
__int64 GameRoutine_717fc0(unsigned __int64*, int);
__int64 GameRoutine_f9faa0(__int64 result);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_VariableManager_SetFlag(__int64 result, int);
extern __int64 (*GameData_205faa8[])();
extern __int64 GameData_22491f8;
extern __int64 game_kVariableHubFacilityForced;
__int64 HintMenuItem_Unknown25(_QWORD* a1);
__int64 GameHr_16ef100(_QWORD*, const char*);
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void HintMenuItem_Unknown73(_QWORD* a1);
__int64 GameRoutine_ffc660_alt1(unsigned int,
                                const char*) __asm__("GameRoutine_ffc660");
__int64 game_menu_16ed000(_QWORD*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane_alt1(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 HintMenuItem_Unknown55(_QWORD* a1);

__int64 HintMenuItem_Unknown25(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  char v8;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;

  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    return 1;
  }
  v2 = a1[1];
  v9_.v10 = v9_.v9;
  if (*(_QWORD*)(v2 + 152) != 0) {
    v3 = *(_QWORD*)(v2 + 152);
  }
  else {
    v3 = v2;
  }
  v9_.v9[0] = GameData_205faa8;
  GameRoutine_f9faa0((__int64)v9_.v9);
  if (v9_.v10 == v9_.v9) {
    v4 = 32;
    goto LABEL_10;
  }
  if (v9_.v10 != nullptr) {
    v4 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v9_.v10 + v4))((__int64)v9_.v10);
  }
  game_VariableManager_SetFlag((__int64)&GameData_22491f8, 0);
  v6 = FacilityUtil_949380();
  if (v6 != 0) {
    GameRoutine_717fc0((unsigned __int64*)(*(_QWORD*)(v6 + 24) + 1152LL), 1);
  }
  v8 = game_GameModeData_instance_ != 0 &&
       (v7 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&game_kVariableHubFacilityForced)) != 0 &&
       *(_DWORD*)(v7 + 32) != 0;
  GameRoutine_16a4d20(v3, 1, v8);
  return 9;
}

__int64 HintMenuItem_Unknown55(_QWORD* a1)
{
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 result;
  __int64* v9;

  game_menu_16ed000(a1);
  v2 = GameRoutine_ffc660_alt1(0xBu, nullptr);
  v3 = a1[7];
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = std___1___shared_weak_count_lock_alt1(v3);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = (__int64*)a1[6];
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v9 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak_alt1(v5);
  v7 = v9;
  if (v9 == nullptr) {
  LABEL_5:
    v7 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  result = ui_LayoutAccessor_FindPane_alt1(v7, "IconNew");
  if (result != 0) {
    *(_BYTE*)(result + 88) = *(_BYTE*)(result + 88) & 0xFE | v2 & 1;
  }
  return result;
}

void HintMenuItem_Unknown73(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  char* v5;
  int v6;
  struct {
    _QWORD v7[2];
    char v8;
    char gap17_[3];
    int v9;
    int v10;
    char v11;
    char gap29_[3];
    __int64 v12;
  } v7_;
  _QWORD v13[21];

  v1 = a1[1];
  if (v1 != 0 && (v3 = __dynamic_cast(a1[1], GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  v5 = "MID_PerchMenu_BattleHint_Help";
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v5 = "MID_PerchMenu_BattleHint_Part3_Help";
  }
  GameHr_16ee370((__int64)v13, v4, v5);
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) == 0) {
    GameHr_16ef100(v13, *(const char**)game_menu_g_mid_cause_invalid_ptr[0]);
  }
  v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
  v7_.v11 = 0;
  v7_.v12 = 0;
  v7_.v7[0] = "Tutorial";
  v7_.v7[1] = "MID_KeyHelp_Tutorial";
  v7_.v8 = 1;
  v7_.v9 = 10;
  v7_.v10 = v6;
  GameRoutine_16ef210_alt1(v13, v7_.v7);
  GameRoutine_16ee520_alt1((__int64)v13);
}

__int64 game_facility_anonymous_HintMenuItem_OnDecide_closure_Invoke(__int64 a1,
                                                                     _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = GameRoutine_f9f860(*a2);
  if ((result & 1) != 0) {
    return GameRoutine_f9f980(v2, 1);
  }
  return result;
}

#pragma GCC visibility pop
