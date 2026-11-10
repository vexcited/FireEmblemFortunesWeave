#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ed430(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_949ea0(_QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 TheaterWatchMenuItem_Unknown55(__int64 a1);
_QWORD* GameRoutine_15e7650(_QWORD* result, int, __int64);
_QWORD* GameRoutine_16ef210(_QWORD* result, _QWORD*);
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 GameRoutine_143dc40(__int64);
__int64 GameRoutine_16ee520(__int64);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
extern _UNKNOWN GameData_1aa8535;
extern _UNKNOWN GameData_1ada574;
extern __int64* GameData_212cc40[63];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64 GameData_212ddf8[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern char* GameData_1fafca8[4];
unsigned __int64 GameRoutine_16ee370(__int64, __int64, _BYTE*);
void LayoutAccessor_1562060(__int64*, __int64, _BYTE*);
__int64 TheaterWatchMenuItem_Unknown73(__int64 a1);

__int64 TheaterWatchMenuItem_Unknown55(__int64 a1)
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

__int64 TheaterWatchMenuItem_Unknown73(__int64 a1)
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
  unsigned int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  bool v15;
  __int64 v16;
  int v17;
  _QWORD v19[11];
  int v20;
  int v21;
  bool v22;
  int v23;
  int v24;
  __int64 v25;
  bool v26;
  char v27;
  struct {
    const char* v28;
    const char* v29;
    char v30;
    char gap193_[3];
    int v31;
    int v32;
    char v33;
    char gap205_[3];
    unsigned __int64* v34;
  } v28_;
  int v35;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370((__int64)v19, v4, "MID_TheaterMenu_Watch_Help");
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
    }
  }
  v9 = *(_DWORD*)(a1 + 84);
  v28_.v29 = (const char*)&GameData_1ada574;
  v28_.v28 = (const char*)game_HashString((__int64)&GameData_1ada574);
  if (game_GameModeData_instance_ != 0 &&
      (v10 = game_GameVariableTable_Find(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v28_.v28)) != 0) {
    v11 = *(_DWORD*)(v10 + 32);
  }
  else {
    v11 = 0;
  }
  v12 = GameRoutine_9db9e0(0x14u, v11);
  v20 = 0;
  v21 = v12;
  v28_.v34 = nullptr;
  v22 = (v9 & 0x10) != 0;
  GameRoutine_15e7650(v19, v9, (__int64)&v28_.v28);
  v35 = 0;
  v13 = *(_QWORD*)(game_UnitListSet_instance_ + 32);
  v28_.v34 = (unsigned __int64*)&v28_.v28;
  v28_.v28 = (const char*)(GameData_212ddf8[0] + 16);
  v28_.v29 = (const char*)&v35;
  FacilityUnitList_145e440(v13, (__int64)&v28_.v28, 2);
  if (v28_.v34 == (unsigned __int64*)&v28_.v28) {
    v14 = 32;
  }
  else {
    if (v28_.v34 == nullptr) {
      goto LABEL_20;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v28_.v34 + v14))((__int64)v28_.v34);
LABEL_20:
  if ((v9 & 0x40) != 0) {
    v23 = v35;
    v24 = 2;
  }
  v15 = (*(_BYTE*)(a1 + 84) & 2) != 0;
  v16 = GameRoutine_143dc40((__int64)&GameData_1aa8535);
  v26 = v15;
  v27 = 0;
  v25 = v16;
  v17 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v28_.v33 = 0;
  v28_.v34 = nullptr;
  v28_.v28 = "Tutorial";
  v28_.v29 = "MID_KeyHelp_Tutorial";
  v28_.v30 = 1;
  v28_.v31 = 10;
  v28_.v32 = v17;
  GameRoutine_16ef210(v19, &v28_.v28);
  return GameRoutine_16ee520((__int64)v19);
}

#pragma GCC visibility pop
