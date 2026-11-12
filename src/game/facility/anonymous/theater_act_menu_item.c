#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ed430(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_949ea0(_QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 TheaterActMenuItem_Unknown55(__int64 a1);
_QWORD* GameRoutine_15e7650(_QWORD* result, int, __int64);
_QWORD* GameRoutine_16ef210(_QWORD* result, _QWORD*);
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 GameRoutine_143dc40(__int64);
__int64 GameRoutine_16ee520(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ab3bd2;
extern __int64* GameData_212cc40[63];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64 GameData_212ddf8[2];
extern __int64 game_UnitListSet_instance_;
extern char* GameData_1fafca8[4];
unsigned __int64 GameRoutine_16ee370(__int64, __int64, _BYTE*);
void LayoutAccessor_1562060(__int64*, __int64, _BYTE*);
__int64 TheaterActMenuItem_Unknown73_alt1(__int64 a1) __asm__(
    "TheaterActMenuItem_Unknown73");
_QWORD* game_facility_15e7650(_QWORD* result, int, __int64);
unsigned __int64 GameHr_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_16ee520_alt1(__int64) __asm__("GameRoutine_16ee520");
void GameRoutine_16ef210_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_16ef210");
void TheaterActMenuItem_Unknown73(__int64 a1);

__int64 TheaterActMenuItem_Unknown55(__int64 a1)
{
  __int64 v2;
  _BOOL8 v3;

  GameRoutine_16ed000();
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v3 = GameRoutine_949ea0(v2) != 0;
  return GameRoutine_16ed430(a1, v3, 1);
}

void TheaterActMenuItem_Unknown73(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  bool v13;
  __int64 v14;
  int v15;
  _QWORD v16[14];
  char v17;
  int v18;
  int v19;
  __int64 v20;
  bool v21;
  char v22;
  struct {
    _QWORD v23[2];
    char v24;
    char gap193_[3];
    int v25;
    int v26;
    char v27;
    char gap205_[3];
    _QWORD* v28;
  } v23_;
  int v29;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameHr_16ee370((__int64)v16, v4, "MID_TheaterMenu_Act_Help");
  v5 = *(unsigned int*)(*GameData_212dcd0 + 8);
  if ((v5 & 0x80000000) == 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc40[0] + 64) + 8 * v5);
    if (v6 != 0) {
      LayoutAccessor_1562060((__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                             (__int64)"T_Txt", *(_BYTE**)(v6 + 48));
      v7 = *(unsigned __int8*)(v6 + 72);
      if (v7 == 4) {
        v8 = nullptr;
      }
      else {
        v8 = GameData_1fafca8[v7];
      }
      LayoutAccessor_1562060((__int64*)(*(_QWORD*)(a1 + 8) + 848LL),
                             (__int64)"T_Genre", v8);
      v9 = *(_DWORD*)(a1 + 84);
      v23_.v28 = nullptr;
      game_facility_15e7650(v16, v9, (__int64)v23_.v23);
      v29 = 0;
      v10 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
      v23_.v28 = v23_.v23;
      v23_.v23[0] = GameData_212ddf8[0] + 16;
      v23_.v23[1] = &v29;
      FacilityUnitList_145e440(v10, (__int64)v23_.v23, 2);
      if (v23_.v28 == v23_.v23) {
        v11 = 32;
      }
      else {
        if (v23_.v28 == nullptr) {
          goto LABEL_15;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v23_.v28 + v11))((__int64)v23_.v28);
    LABEL_15:
      if ((v9 & 0x40) != 0) {
        if (*(_BYTE*)(v6 + 72) == 3) {
          v12 = 5;
        }
        else {
          v12 = 3;
        }
        v18 = v29;
        v19 = v12;
      }
    }
  }
  v17 = 0;
  v16[13] = 0x100000006LL;
  v13 = (*(_BYTE*)(a1 + 84) & 2) != 0;
  v14 = GameRoutine_143dc40((__int64)&GameData_1ab3bd2);
  v21 = v13;
  v22 = 0;
  v20 = v14;
  v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v23_.v27 = 0;
  v23_.v28 = nullptr;
  v23_.v23[0] = "Tutorial";
  v23_.v23[1] = "MID_KeyHelp_Tutorial";
  v23_.v24 = 1;
  v23_.v25 = 10;
  v23_.v26 = v15;
  GameRoutine_16ef210_alt1(v16, v23_.v23);
  GameRoutine_16ee520_alt1((__int64)v16);
}

#pragma GCC visibility pop
