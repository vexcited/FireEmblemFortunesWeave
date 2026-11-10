#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_16ef210(_QWORD* result, _QWORD*);
__int64 FacilityUnitList_145e440(__int64 result, __int64, char);
__int64 FacilityUtil_948340();
__int64 FacilityVariable_1472420(unsigned __int64*, unsigned __int64*, char);
__int64 GameRoutine_143de80(int);
__int64 GameRoutine_16ee520(__int64);
__int64 GameRoutine_16ef100(_QWORD*, __int64);
__int64 GameRoutine_86b4e0(__int64*);
__int64 GameRoutine_942180();
__int64 GameRoutine_94a700(__int16*);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
extern _UNKNOWN GameData_1a856ca;
extern _UNKNOWN GameData_1ac3209;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64 GameData_212ddf8[2];
extern __int64 GameData_21f61c0;
extern __int64 GameData_2249208;
extern __int64 GameData_2249218;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char* GameData_2174ec0[6];
extern char* game_menu_g_mid_cause_invalid[7];
extern char GameData_1a9f09e;
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned __int64 GameRoutine_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_1498f60(__int64*, unsigned __int64);
__int64 game_facility_94ad40(__int64 a1);
__int64* game_facility_1498ce0(__int64 a1, unsigned __int64 a2,
                               unsigned __int8* a3);
_QWORD* game_facility_15e7650(_QWORD* result, int a2, __int64 a3);
__int64 game_facility_16b3920(__int64 a1, char a2);

__int64 game_facility_94ad40(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned int v2;
  __int16* v3;
  unsigned int v4;
  __int64 v5;
  double v6;
  double v7;
  double v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  bool v14;
  unsigned __int16* v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  struct {
    __int64 v21;
    void* v22;
    __int16 v23;
    __int16 v24;
  } v21_;

  v2 = *(unsigned __int16*)(a1 + 52);
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v4 = GameRoutine_94a700(v3);
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v6 = 0x1.0000000000000p+0;
    v7 = (double)v4 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
    if (v7 <= 0x1.0000000000000p+0) {
      v6 = (double)v4 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
    }
    if (v7 >= 0x1.47ae147ae147bp-7) {
      v8 = v6;
    }
    else {
      v8 = 0x1.47ae147ae147bp-7;
    }
    v9 = (int)(v8 * (double)v2);
    if (v9 <= 1) {
      v9 = 1;
    }
    v10 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v9) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v9) >> 31);
    if (v10 >= 9999999) {
      v10 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v10;
    if (*(_BYTE*)(v5 + 56) == 5) {
      v21_.v22 = &GameData_1a856ca;
      v21_.v21 = game_HashString((__int64)&GameData_1a856ca);
      if (game_GameModeData_instance_ != 0) {
        v11 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v21_.v21);
        if (v11 != 0) {
          v12 = *(_DWORD*)(v11 + 32);
          v13 = game_gmap_GmapClock_instance_;
          v14 = v12 == 0 || game_gmap_GmapClock_instance_ == 0;
          if (!v14 && *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                          0) {
            v15 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
            v16 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
            v17 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
            v18 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
            v21_.v21 = game_gmap_GmapClock_instance_;
            LOWORD(v21_.v22) = v16;
            *(_DWORD*)((char*)&v21_.v22 + 2) =
                *(_DWORD*)(game_gmap_GmapClock_instance_ + 10);
            v19 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
            v21_.v24 = v17;
            v21_.v23 = v18;
            *(_WORD*)(game_gmap_GmapClock_instance_ + 18) = 0;
            HIWORD(v21_.v22) = v19;
            *(_WORD*)(v13 + 14) = v19 + v12 / 60;
            *(_WORD*)(v13 + 16) = v18 + v12 % 60;
            Dir_70d7a0(v15);
            *(_DWORD*)(v13 + 44) = 0;
            GameRoutine_86b4e0(&v21_.v21);
          }
        }
      }
    }
  }
  v21_.v22 = &GameData_1ac3209;
  v21_.v21 = game_HashString((__int64)&GameData_1ac3209);
  GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&v21_.v21, 1u);
  return FacilityVariable_1472420((unsigned __int64*)&GameData_2249208,
                                  (unsigned __int64*)&GameData_2249218,
                                  *(_WORD*)(a1 + 16));
}

__int64* game_facility_1498ce0(__int64 a1, unsigned __int64 a2,
                               unsigned __int8* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v7;
  __int64** v8;
  __int64* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64* v20;
  float v21;
  float v22;
  float v23;
  _BOOL8 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 primeEm;
  unsigned __int64 v29;
  __int64 v30;

  v3 = *(_QWORD*)(a1 + 8);
  if (v3 != 0) {
    v5 = v3 - 1;
    if ((v3 & (v3 - 1)) != 0) {
      v7 = a2;
      if (a2 >= v3) {
        v7 = a2 % v3;
      }
    }
    else {
      v7 = v5 & a2;
    }
    v8 = *(__int64***)(*(_QWORD*)a1 + 8 * v7);
    if (v8 != nullptr) {
      v9 = *v8;
      if (*v8 != nullptr) {
        v10 = *a3;
        if ((v10 & 1) != 0) {
          v11 = *((_QWORD*)a3 + 1);
        }
        else {
          v11 = v10 >> 1;
        }
        if ((v10 & 1) != 0) {
          v12 = *((unsigned __int8**)a3 + 2);
        }
        else {
          v12 = a3 + 1;
        }
        if ((v3 & v5) == 0) {
          while (1) {
            v17 = v9[1];
            if (v17 == a2) {
              v18 = *((unsigned __int8*)v9 + 16);
              v19 = v9[3];
              if ((v18 & 1) == 0) {
                v19 = v18 >> 1;
              }
              if (v19 == v11) {
                v20 = (v18 & 1) != 0 ? (__int64*)v9[4]
                                     : (__int64*)((char*)v9 + 17);
                if ((unsigned int)memcmp(v20, v12, v11) == 0) {
                  return v9;
                }
              }
            }
            else if ((v17 & v5) != v7) {
              goto LABEL_40;
            }
            v9 = (__int64*)*v9;
            if (v9 == nullptr) {
              goto LABEL_40;
            }
          }
        }
        do {
          v13 = v9[1];
          if (v13 == a2) {
            v14 = *((unsigned __int8*)v9 + 16);
            v15 = v9[3];
            if ((v14 & 1) == 0) {
              v15 = v14 >> 1;
            }
            if (v15 == v11) {
              v16 =
                  (v14 & 1) != 0 ? (__int64*)v9[4] : (__int64*)((char*)v9 + 17);
              if ((unsigned int)memcmp(v16, v12, v11) == 0) {
                return v9;
              }
            }
          }
          else {
            if (v13 >= v3) {
              v13 %= v3;
            }
            if (v13 != v7) {
              break;
            }
          }
          v9 = (__int64*)*v9;
        } while (v9 != nullptr);
      }
    }
  }
LABEL_40:
  v21 = *(float*)(a1 + 32);
  v22 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v3 == 0 || (float)(v21 * (float)v3) < v22) {
    v23 = v22 / v21;
    v24 = true;
    if (v3 >= 3) {
      v24 = (v3 & (v3 - 1)) != 0;
    }
    v25 = v24 | (2 * v3);
    v26 = vcvtps_u64_f32(v23);
    if (v25 <= v26) {
      v27 = v26;
    }
    else {
      v27 = v25;
    }
    if (v27 == 1) {
      v27 = 2;
    }
    else if ((v27 & (v27 - 1)) != 0) {
      primeEm = std___1___next_prime(v27);
      v3 = *(_QWORD*)(a1 + 8);
      v27 = primeEm;
    }
    if (v27 > v3) {
      goto LABEL_52;
    }
    if (v27 < v3) {
      v29 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v3 < 3 || (v3 & (v3 - 1)) != 0) {
        v29 = std___1___next_prime(v29);
      }
      else {
        v30 = 1LL << -(char)__clz(v29 - 1);
        if (v29 >= 2) {
          v29 = v30;
        }
      }
      if (v27 <= v29) {
        v27 = v29;
      }
      if (v27 < v3) {
      LABEL_52:
        GameRoutine_1498f60((__int64*)a1, v27);
      }
    }
  }
  return nullptr;
}

_QWORD* game_facility_15e7650(_QWORD* result, int a2, __int64 a3)
{
  _QWORD* v4;
  char* v6;
  const char* v7;
  const char* v8;
  __int64 v9;
  int v10;

  if (a2 != 0) {
    v4 = result;
    if ((a2 & 1) != 0) {
      return (_QWORD*)GameRoutine_16ef100(
          result, (__int64)game_menu_g_mid_cause_invalid[0]);
    }
    if ((a2 & 0x70000) != 0) {
      v6 = "MID_Menu_Cause_UsedDay";
      v7 = "MID_Menu_Cause_UsedWeek";
      if ((a2 & 0x10000) == 0) {
        v6 = &GameData_1a9f09e;
      }
      if ((a2 & 0x20000) == 0) {
        v7 = v6;
      }
      if ((a2 & 0x40000) != 0) {
        v8 = "MID_Menu_Cause_UsedChapter";
      }
      else {
        v8 = v7;
      }
    }
    else {
      if ((a2 & 8) == 0) {
        goto LABEL_15;
      }
      v8 = game_menu_g_mid_cause_invalid[0];
    }
    result = (_QWORD*)GameRoutine_16ef100(result, (__int64)v8);
  LABEL_15:
    if ((int)(-1431655765 * ((v4[8] - v4[7]) >> 3)) > 0) {
      return result;
    }
    if ((a2 & 0x80) != 0) {
      GameRoutine_16ef100(v4, (__int64)"MID_Menu_Cause_NotRide");
      if ((a2 & 0x200) == 0) {
      LABEL_18:
        if ((a2 & 0x100) == 0) {
          goto LABEL_19;
        }
        goto LABEL_25;
      }
    }
    else if ((a2 & 0x200) == 0) {
      goto LABEL_18;
    }
    GameRoutine_16ef100(v4, (__int64)GameData_2174ec0[0]);
    if ((a2 & 0x100) == 0) {
    LABEL_19:
      if ((a2 & 0x400) == 0) {
        goto LABEL_20;
      }
      goto LABEL_26;
    }
  LABEL_25:
    GameRoutine_16ef100(v4, (__int64)"MID_Menu_Cause_NotResource");
    if ((a2 & 0x400) == 0) {
    LABEL_20:
      result = *(_QWORD**)(a3 + 32);
      if (result == nullptr) {
        return result;
      }
      goto LABEL_21;
    }
  LABEL_26:
    GameRoutine_16ef100(v4, (__int64)"MID_Menu_Cause_NotMotivation");
    result = *(_QWORD**)(a3 + 32);
    if (result == nullptr) {
      return result;
    }
  LABEL_21:
    v9 = *result;
    v10 = a2;
    return (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*, int*))(v9 + 48))(
        result, v4, &v10);
  }
  return result;
}

__int64 game_facility_16b3920(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  bool v13;
  __int64 v14;
  int v15;
  _QWORD v17[11];
  int v18;
  int v19;
  bool v20;
  __int64 v21;
  char v22;
  int v23;
  int v24;
  __int64 v25;
  bool v26;
  char v27;
  struct {
    _QWORD v28[2];
    char v29;
    char gap193_[3];
    int v30;
    int v31;
    char v32;
    char gap205_[3];
    _QWORD* v33;
  } v28_;
  int v34;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != 0 && (v5 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 1112LL))(v5);
  }
  else {
    v6 = v2 + 848;
  }
  GameRoutine_16ee370((__int64)v17, v6, "MID_ArenaMenu_Training_Help");
  v7 = FacilityUtil_948340();
  v8 = v7;
  v28_.v33 = nullptr;
  game_facility_15e7650(v17, v7, (__int64)v28_.v28);
  v34 = 0;
  v9 = *(_QWORD*)(game_UnitListSet_instance_ + 24);
  v28_.v33 = v28_.v28;
  v28_.v28[0] = GameData_212ddf8[0] + 16;
  v28_.v28[1] = &v34;
  FacilityUnitList_145e440(v9, (__int64)v28_.v28, 2);
  if (v28_.v33 == v28_.v28) {
    v10 = 32;
  }
  else {
    if (v28_.v33 == nullptr) {
      goto LABEL_10;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v28_.v33 + v10))((__int64)v28_.v33);
LABEL_10:
  if ((v8 & 0x40) != 0) {
    v23 = v34;
    v24 = 2;
  }
  if ((a2 & 1) != 0) {
    v11 = GameRoutine_942180();
    v12 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v12 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    }
    v18 = 0;
    v19 = v11;
    v20 = v12 < v11;
  }
  v22 = 0;
  v21 = 0x100000006LL;
  v13 = (FacilityUtil_948340() & 2) != 0;
  v14 = GameRoutine_143de80(1);
  v26 = v13;
  v27 = 0;
  v25 = v14;
  v15 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 192LL))(
      *(_QWORD*)(a1 + 8));
  v28_.v29 = 1;
  v28_.v32 = 0;
  v28_.v33 = nullptr;
  v28_.v28[0] = "Tutorial";
  v28_.v28[1] = "MID_KeyHelp_Tutorial";
  v28_.v30 = 10;
  v28_.v31 = v15;
  GameRoutine_16ef210(v17, v28_.v28);
  return GameRoutine_16ee520((__int64)v17);
}

#pragma GCC visibility pop
