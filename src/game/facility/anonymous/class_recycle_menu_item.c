#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ee370(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ee520(_QWORD);
__int64 GameRoutine_16ef210(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
__int64 ClassRecycleMenuItem_Unknown73_alt1(__int64 a1) __asm__(
    "ClassRecycleMenuItem_Unknown73");
__int64 GameRoutine_1822fe0(__int64);
__int64 GameRoutine_1952d00(__int64, __int64, __int64);
extern __int64 (*GameData_20416b0[])();
extern __int64 GameData_21f3ff8;
extern __int64 game_facility_FacilityView_instance_;
__int64 ClassRecycleMenuItem_Unknown25(_QWORD* a1);
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void ClassRecycleMenuItem_Unknown73(__int64 a1);

__int64 ClassRecycleMenuItem_Unknown25(_QWORD* a1)
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
  GameRoutine_1822fe0(v8);
  return 9;
}

void ClassRecycleMenuItem_Unknown73(__int64 a1)
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
  GameHr_16ee370((__int64)v12, v4, "MID_TempleMenu_ClassRecycle_Help");
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

#pragma GCC visibility pop
