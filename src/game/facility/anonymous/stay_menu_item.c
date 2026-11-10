#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_947cc0(_QWORD);
bool StayMenuItem_Unknown58(__int64 a1);
_QWORD* GameRoutine_15e7650(_QWORD* result, int, __int64);
__int64 GameRoutine_16ee520(__int64);
__int64 VolunteerArgs_947cc0(int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2061d18[])();
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
unsigned __int64 GameRoutine_16ee370(__int64, __int64, _BYTE*);
__int64 game_facility_anonymous_StayMenuItem_UpdateHelp(__int64 a1);

bool StayMenuItem_Unknown58(__int64 a1)
{
  return (unsigned int)GameRoutine_947cc0(*(unsigned int*)(a1 + 88)) == 0;
}

__int64 game_facility_anonymous_StayMenuItem_UpdateHelp(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[10];
    int v13;
    int v14;
    bool v15;
    char v16;
    char gap146_[2];
    int v17;
    int v18;
    bool v19;
  } v12_;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370((__int64)v12_.v12, v4, "MID_HotelMenu_Stay_Help");
  v5 = VolunteerArgs_947cc0(*(_DWORD*)(a1 + 88));
  if ((*(_BYTE*)(a1 + 83) & 1) != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
    v12_.v16 = 0;
    v12_.v13 = 5;
    v12_.v14 = v6;
    v12_.v15 = (v5 & 4) != 0;
  }
  v7 = *(_DWORD*)(a1 + 88);
  v12_.v19 = (v5 & 0x10) != 0;
  v10_.v11 = v10_.v10;
  v12_.v17 = 0;
  v12_.v18 = v7;
  v10_.v10[0] = GameData_2061d18;
  GameRoutine_15e7650(v12_.v12, v5, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
    goto LABEL_11;
  }
  if (v10_.v11 != nullptr) {
    v8 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v10_.v11 + v8))((__int64)v10_.v11);
  }
  return GameRoutine_16ee520((__int64)v12_.v12);
}

#pragma GCC visibility pop
