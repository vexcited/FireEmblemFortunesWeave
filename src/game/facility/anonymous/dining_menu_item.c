#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_143f2e0(_QWORD);
__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ed430(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94eea0(_QWORD, _QWORD);
__int64 game_HashString(_QWORD, _QWORD);
extern _UNKNOWN GameData_1aa0a21;
extern __int64 (*GameData_1faf778[])();
extern __int64 GameData_212c6c0[2];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 DiningMenuItem_Unknown55(__int64 a1);
__int64 DiningMenuItem_Unknown72(__int64 a1, __int64 a2);
_QWORD* GameRoutine_15e7650(_QWORD* result, int, __int64);
_QWORD* GameRoutine_16ef210(_QWORD* result, _QWORD*);
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 GameRoutine_16ee520(__int64);
__int64 GameRoutine_94a540();
__int64 GameRoutine_94a820();
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64 GameData_212ddf8[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
unsigned __int64 GameRoutine_16ee370(__int64, __int64, _BYTE*);
__int64 DiningMenuItem_Unknown73(__int64 a1);

__int64 DiningMenuItem_Unknown55(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_16ed000();
  v2 = v13;
  v13[0] = GameData_1faf778;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94eea0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  return GameRoutine_16ed430(a1, v11 & 1, 0);
}

__int64 DiningMenuItem_Unknown72(__int64 a1, __int64 a2)
{
  _QWORD v3[2];

  v3[1] = &GameData_1aa0a21;
  v3[0] = game_HashString(&GameData_1aa0a21, a2);
  return GameRoutine_143f2e0(v3);
}

__int64 DiningMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  int v11;
  struct {
    _QWORD v13[11];
    char gap96_[4];
    int v14;
    int v15;
    bool v16;
    char gap109_[43];
    char v17;
    char gap153_[3];
    int v18;
    int v19;
  } v13_;
  struct {
    _QWORD v20[2];
    char v21;
    char gap193_[3];
    int v22;
    int v23;
    char v24;
    char gap205_[3];
    _QWORD* v25;
  } v20_;
  int v26;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370((__int64)v13_.v13, v4, "MID_HotelMenu_Dining_Help");
  v5 = GameRoutine_94a540();
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = *(_DWORD*)(game_GameModeData_instance_ + 72);
  }
  v13_.v14 = 0;
  v13_.v15 = v5;
  v13_.v16 = v6 < v5;
  v7 = GameRoutine_94a820();
  v8 = v7;
  v20_.v25 = nullptr;
  GameRoutine_15e7650(v13_.v13, v7, (__int64)v20_.v20);
  v26 = 0;
  v9 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v20_.v25 = v20_.v20;
  v20_.v20[0] = GameData_212ddf8[0] + 16;
  v20_.v20[1] = &v26;
  FacilityUnitList_145e440(v9, (__int64)v20_.v20, 2);
  if (v20_.v25 == v20_.v20) {
    v10 = 32;
  }
  else {
    if (v20_.v25 == nullptr) {
      goto LABEL_12;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v20_.v25 + v10))((__int64)v20_.v25);
LABEL_12:
  if ((v8 & 0x40) != 0) {
    v13_.v18 = v26;
    v13_.v19 = 3;
  }
  v11 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v20_.v24 = 0;
  v20_.v25 = nullptr;
  v20_.v20[0] = "Tutorial";
  v20_.v20[1] = "MID_KeyHelp_Tutorial";
  v20_.v21 = 1;
  v20_.v22 = 10;
  v20_.v23 = v11;
  GameRoutine_16ef210(v13_.v13, v20_.v20);
  v13_.v17 = 1;
  return GameRoutine_16ee520((__int64)v13_.v13);
}

#pragma GCC visibility pop
