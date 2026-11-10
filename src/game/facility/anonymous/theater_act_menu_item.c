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
__int64 TheaterActMenuItem_Unknown73(__int64 a1);

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

__int64 TheaterActMenuItem_Unknown73(__int64 a1)
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
  _QWORD v17[14];
  char v18;
  int v19;
  int v20;
  __int64 v21;
  bool v22;
  char v23;
  struct {
    _QWORD v24[2];
    char v25;
    char gap193_[3];
    int v26;
    int v27;
    char v28;
    char gap205_[3];
    _QWORD* v29;
  } v24_;
  int v30;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370((__int64)v17, v4, "MID_TheaterMenu_Act_Help");
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
      v24_.v29 = nullptr;
      GameRoutine_15e7650(v17, v9, (__int64)v24_.v24);
      v30 = 0;
      v10 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
      v24_.v29 = v24_.v24;
      v24_.v24[0] = GameData_212ddf8[0] + 16;
      v24_.v24[1] = &v30;
      FacilityUnitList_145e440(v10, (__int64)v24_.v24, 2);
      if (v24_.v29 == v24_.v24) {
        v11 = 32;
      }
      else {
        if (v24_.v29 == nullptr) {
          goto LABEL_15;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v24_.v29 + v11))((__int64)v24_.v29);
    LABEL_15:
      if ((v9 & 0x40) != 0) {
        if (*(_BYTE*)(v6 + 72) == 3) {
          v12 = 5;
        }
        else {
          v12 = 3;
        }
        v19 = v30;
        v20 = v12;
      }
    }
  }
  v18 = 0;
  v17[13] = 0x100000006LL;
  v13 = (*(_BYTE*)(a1 + 84) & 2) != 0;
  v14 = GameRoutine_143dc40((__int64)&GameData_1ab3bd2);
  v22 = v13;
  v23 = 0;
  v21 = v14;
  v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v24_.v28 = 0;
  v24_.v29 = nullptr;
  v24_.v24[0] = "Tutorial";
  v24_.v24[1] = "MID_KeyHelp_Tutorial";
  v24_.v25 = 1;
  v24_.v26 = 10;
  v24_.v27 = v15;
  GameRoutine_16ef210(v17, v24_.v24);
  return GameRoutine_16ee520((__int64)v17);
}

#pragma GCC visibility pop
