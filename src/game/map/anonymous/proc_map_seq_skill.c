#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18c6200(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6dcf40(void);
__int64 GameRoutine_76c260(_QWORD, _QWORD);
__int64 GameRoutine_7aaa60(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_91b020(_QWORD, _QWORD);
__int64 GameRoutine_961420(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_961740(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9619a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapDrawer_808650(_QWORD, _QWORD, _QWORD);
__int64 MapDrawer_808760(void);
__int64 UnitActor_81b190(_QWORD, double);
__int64 UnitItemList_710300(_QWORD, _QWORD);
__int64 Unit_6ca760(_QWORD, _QWORD);
__int64 Unit_6cb080(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_Unit_EquipItem_6d8f40(_QWORD, _QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_OnHpChanged(_QWORD);
__int64 game_Unit_SetPollution(void);
extern __int64 (*GameData_1fadd80[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ed098;
extern __int64 GameData_22400f8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64* GameData_212c880[5];
extern __int64* GameData_21309c8[5];
__int64 ProcMapSeqSkill_91a5f0(__int64 result);
__int64 ProcMapSeqSkill_91a6a0(__int64 result);
__int64 ProcMapSeqSkill_91a780(__int64 a1);
__int64 ProcMapSeqSkill_91a960(__int64 a1);
__int64 ProcMapSeqSkill_91abc0(__int64 result);
__int64 game_map_anonymous_ProcMapSeqSkill_TryGiveSkill(__int64 a1);
__int64 ProcMapSeqSkill_91af10(__int64 result);
bool ProcMapSeqSkill_91aff0();
__int64
game_map_anonymous_ProcMapSeqSkill_CanUse_closure_Invoke(__int64 a1, _DWORD* a2,
                                                         unsigned int* a3);
__int64 game_map_anonymous_ProcMapSeqSkill_TryGiveSkill_closure_Invoke(
    __int64 a1, _DWORD* a2, __int64 a3);
__int64 Cursor_730ff0(_QWORD, _QWORD);
__int64 Unit_6c7fa0(_QWORD, _QWORD);
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212cfc8[9];
void Camera_7c0e80(__int64, __int64, char);
void ProcMapSeqSkill_91a4d0(__int64 a1);
__int64 Cursor_730ff0_alt1(__int64, __int128*) __asm__("Cursor_730ff0");
float Unit_6c7fa0_alt1(__int64, __int64) __asm__("Unit_6c7fa0");

void ProcMapSeqSkill_91a4d0(__int64 a1)
{
  __int64 v4;
  __int64 v5;
  int v6;
  float v7;
  __int128 v8;
  __int128 v9;
  __int64 v10;
  unsigned int v11;
  __int128 v12;

  if ((*(_DWORD*)(a1 + 160) & 0xFFF) != 0 &&
      (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                            8LL * (*(_DWORD*)(a1 + 160) & 0xFFF)) +
                 754LL) &
       1) != 0) {
    v4 = *GameData_212cfc0[0];
    v5 = *(_QWORD*)(a1 + 152);
    v6 = *(_DWORD*)(v5 + 592);
    v7 = (float)(unsigned int)(v6 - 1) * 0x1.4000000000000p+1f;
    if (v6 <= 0) {
      v7 = 0x0.0p+0f;
    }
    *(_QWORD*)&v8 = COERCE_UNSIGNED_INT(
        (float)((float)((float)((float)(unsigned int)(*(char*)(v5 + 584) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v7);
    v10 = COERCE_UNSIGNED_INT(
        (float)((float)((float)((float)(unsigned int)(*(char*)(v5 + 585) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v7);
    *(float*)&v11 =
        (float)((float)((float)((float)(unsigned int)(*(char*)(v5 + 584) +
                                                      256) *
                                0x1.4000000000000p+2f) +
                        0x1.4000000000000p+1f) +
                -0x1.4000000000000p+10f) +
        v7;
    *((_QWORD*)&v8 + 1) = v10;
    v12 = v8;
    *(_QWORD*)&v9 = __PAIR64__(
        COERCE_UNSIGNED_INT(Unit_6c7fa0_alt1(v5, (__int64)&v12)), v11);
    *((_QWORD*)&v9 + 1) = v10;
    v12 = v9;
    Cursor_730ff0_alt1(v4, &v12);
    Camera_7c0e80(*GameData_212cfc8[0], a1, 1);
  }
}

__int64 ProcMapSeqSkill_91a5f0(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  float v4;

  if ((*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8LL * (*(_DWORD*)(result + 160) & 0xFFF)) +
                 754LL) &
       2) != 0) {
    v1 = result;
    result = MapDrawer_808760();
    if (result != 0) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v3 = 2)
               : (v3 = 3),
           (v3 & v2) != 0)) {
        v4 = *(float*)(v1 + 144);
        *(_WORD*)(v1 + 136) = *(_WORD*)(v1 + 136) & 0xFF97 | 0x60;
        if (v4 < 15.0) {
          v4 = 15.0;
        }
        *(float*)(v1 + 144) = v4;
      }
    }
  }
  return result;
}

__int64 ProcMapSeqSkill_91a6a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v4;
  float v5;

  if ((*(_DWORD*)(result + 160) & 0xFFF) != 0) {
    v1 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                    8LL * (*(_DWORD*)(result + 160) & 0xFFF));
    if ((*(_WORD*)(v1 + 754) & 1) != 0) {
      v2 = result;
      if ((*(_BYTE*)(result + 164) & 1) != 0) {
        result = GameRoutine_7aaa60(*(_QWORD*)(result + 152), result + 160);
        if ((result & 1) == 0) {
          return result;
        }
      }
      else {
        result = GameRoutine_961420(result, v1 + 760, *(_QWORD*)(result + 152));
        if (result == 0) {
          return result;
        }
      }
      result = UnitActor_81b190(*(_QWORD*)(v2 + 152), 0.0);
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v4 = 2)
               : (v4 = 3),
           (v4 & v3) != 0)) {
        v5 = *(float*)(v2 + 144);
        *(_WORD*)(v2 + 136) = *(_WORD*)(v2 + 136) & 0xFF97 | 0x60;
        if (v5 < 15.0) {
          v5 = 15.0;
        }
        *(float*)(v2 + 144) = v5;
      }
    }
  }
  return result;
}

__int64 ProcMapSeqSkill_91a780(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  float v12;
  _BYTE v13[4];

  v2 = *(_QWORD*)(a1 + 152);
  v3 = GameData_212c880[0];
  if (*(__int16*)(v2 + 492) >= 2) {
    v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                    8LL * (*(_DWORD*)(a1 + 160) & 0xFFF));
    if (*(_WORD*)(v4 + 256) != 0 && **(__int16**)(v4 + 264) < 0 &&
        *(_BYTE*)(v4 + 250) == 10) {
      v13[0] = 0;
      game_Unit_GetParam(v2, v13, 1);
    }
  }
  result = GameRoutine_6dcf40();
  if ((_DWORD)result != 0) {
    v6 = *(_QWORD*)(a1 + 152);
    v7 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0 && v6 != 0 && *(_BYTE*)(v7 + 8) == 1 &&
        (*(_BYTE*)(v7 + 9) & 1) == 0) {
      v8 = *(_QWORD*)(v6 + 440);
      if (v8 != 0 && *(unsigned __int8*)(v8 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v9 = *(unsigned __int8*)(v6 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v9) |= 2u;
          v6 = *(_QWORD*)(a1 + 152);
        }
      }
    }
    MapDrawer_808650(a1, v6, (unsigned int)result);
    result =
        GameRoutine_961740(a1,
                           *(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                      8LL * (*(_DWORD*)(a1 + 160) & 0xFFF)) +
                               784LL,
                           *(_QWORD*)(a1 + 152), *(_BYTE*)(a1 + 164) == 0);
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v11 = 2)
             : (v11 = 3),
         (v11 & v10) != 0)) {
      v12 = *(float*)(a1 + 144);
      *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
      if (v12 < 15.0) {
        v12 = 15.0;
      }
      *(float*)(a1 + 144) = v12;
    }
  }
  return result;
}

__int64 ProcMapSeqSkill_91a960(__int64 a1)
{
  __int64 v1;
  int v3;
  __int64 result;
  __int64* v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  float v19;
  _BYTE v20[4];
  _BYTE v21[4];
  _BYTE v22[4];

  v1 = *(_QWORD*)(a1 + 152);
  v20[0] = 0;
  v3 = *(__int16*)(v1 + 492);
  result = game_Unit_GetParam(v1, v20, 1);
  if ((int)result <= v3) {
    return result;
  }
  v5 = GameData_212c880[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(a1 + 160) & 0xFFF));
  if (*(_WORD*)(v6 + 256) == 0) {
    return result;
  }
  v7 = **(__int16**)(v6 + 264);
  if (v7 < 1) {
    return result;
  }
  v8 = *(unsigned __int8*)(v6 + 250);
  if (v8 == 10) {
    v21[0] = 0;
    result = game_Unit_GetParam(v1, v21, 1);
    if ((unsigned int)(result * v7 + 198) < 0xC7) {
      return result;
    }
    v7 = ((int)result * v7 + 99) / 100;
    if (*(_WORD*)(v1 + 494) == 0) {
      goto LABEL_8;
    }
  }
  else {
    if (v8 != 9) {
      return result;
    }
    if (*(_WORD*)(v1 + 494) == 0) {
      goto LABEL_8;
    }
  }
  *(_WORD*)(v1 + 494) = 0;
LABEL_8:
  if (v7 >= 1 && (*(_BYTE*)(v1 + 416) & 8) == 0) {
    v9 = *(__int16*)(v1 + 492);
    v22[0] = 0;
    v10 = v7 + v9;
    v11 = game_Unit_GetParam(v1, v22, 1);
    if (*(_WORD*)(v1 + 494) != 0 && v10 != *(__int16*)(v1 + 494)) {
      *(_WORD*)(v1 + 494) = 0;
    }
    if (v11 >= v10) {
      v12 = v10;
    }
    else {
      v12 = v11;
    }
    if (v10 < 0) {
      v12 = 0;
    }
    if (v12 != *(__int16*)(v1 + 492)) {
      *(_WORD*)(v1 + 492) = v12;
      game_Unit_OnHpChanged(v1);
    }
    v13 = *(_QWORD*)(a1 + 152);
    v14 = *GameData_21309c8[0];
    if (*GameData_21309c8[0] != 0 && v13 != 0 && *(_BYTE*)(v14 + 8) == 1 &&
        (*(_BYTE*)(v14 + 9) & 1) == 0) {
      v15 = *(_QWORD*)(v13 + 440);
      if (v15 != 0 && *(unsigned __int8*)(v15 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v16 = *(unsigned __int8*)(v13 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v16) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v16) |= 2u;
          v13 = *(_QWORD*)(a1 + 152);
        }
      }
    }
    MapDrawer_808650(a1, v13, (unsigned int)v7);
    result =
        GameRoutine_9619a0(a1,
                           *(_QWORD*)(*(_QWORD*)(*v5 + 64) +
                                      8LL * (*(_DWORD*)(a1 + 160) & 0xFFF)) +
                               784LL,
                           *(_QWORD*)(a1 + 152), *(_BYTE*)(a1 + 164) == 0);
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v17 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v18 = 2)
             : (v18 = 3),
         (v18 & v17) != 0)) {
      v19 = *(float*)(a1 + 144);
      *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
      if (v19 < 15.0) {
        v19 = 15.0;
      }
      *(float*)(a1 + 144) = v19;
    }
  }
  return result;
}

__int64 ProcMapSeqSkill_91abc0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned int v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  float v20;

  v1 = result;
  v2 = *(_QWORD*)(*(_QWORD*)(result + 152) + 440LL);
  if (v2 != 0) {
    v3 = *(_BYTE*)(v2 + 16);
  }
  else {
    v3 = 9;
  }
  if (((1 << v3) & 0xF1) == 0) {
    return result;
  }
  result = GameRoutine_820d50(2);
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), result);
    if (result != 0 && *(_DWORD*)(result + 32) != 0) {
      return result;
    }
  }
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(v1 + 160) & 0xFFF));
  if (v5 == 0) {
    return result;
  }
  v6 = *(unsigned __int8*)(v5 + 250);
  if ((unsigned int)(v6 - 33) > 1 || *(_WORD*)(v5 + 256) == 0 ||
      **(_WORD**)(v5 + 264) == 0) {
    return result;
  }
  v7 = *(_QWORD*)(v1 + 152);
  v8 = *(unsigned __int8*)(v7 + 499);
  v9 = GameData_21309c8[0];
  if (v6 != 33) {
    game_Unit_SetPollution();
  LABEL_23:
    v10 = *(_QWORD*)(v1 + 152);
    v14 = *v9;
    v15 = *(unsigned __int8*)(v10 + 499);
    if (v14 != 0 && *(_BYTE*)(v14 + 8) == 1 && (*(_BYTE*)(v14 + 9) & 1) == 0) {
      v16 = *(_QWORD*)(v10 + 440);
      if (v16 != 0 && *(unsigned __int8*)(v16 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v17 = *(unsigned __int8*)(v10 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v17) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v17) |= 2u;
          v10 = *(_QWORD*)(v1 + 152);
        }
      }
    }
    goto LABEL_32;
  }
  *(_DWORD*)(v7 + 416) |= 0x8000u;
  game_Unit_SetPollution();
  v10 = *(_QWORD*)(v1 + 152);
  v11 = *v9;
  if (*v9 != 0) {
    if (v10 != 0 && *(_BYTE*)(v11 + 8) == 1 && (*(_BYTE*)(v11 + 9) & 1) == 0) {
      v12 = *(_QWORD*)(v10 + 440);
      if (v12 != 0 && *(unsigned __int8*)(v12 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v13 = *(unsigned __int8*)(v10 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v13) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v13) |= 2u;
        }
      }
    }
    goto LABEL_23;
  }
  v15 = *(unsigned __int8*)(v10 + 499);
LABEL_32:
  GameRoutine_76c260(v1, v10);
  result = GameRoutine_18c6200(*(_QWORD*)(v1 + 152), v8, v15, 0);
  if ((*(_BYTE*)(v1 + 164) & 1) == 0) {
    result =
        GameRoutine_961420(v1,
                           *(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                                      8LL * (*(_DWORD*)(v1 + 160) & 0xFFF)) +
                               784LL,
                           *(_QWORD*)(v1 + 152));
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v18 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v19 = 2)
           : (v19 = 3),
       (v19 & v18) != 0)) {
    v20 = *(float*)(v1 + 144);
    *(_WORD*)(v1 + 136) = *(_WORD*)(v1 + 136) & 0xFF97 | 0x60;
    if (v20 < 15.0) {
      v20 = 15.0;
    }
    *(float*)(v1 + 144) = v20;
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqSkill_TryGiveSkill(__int64 a1)
{
  __int64 v2;
  char v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;

  v9[0] = GameData_1fadd80;
  v9[1] = a1;
  v2 = *(unsigned int*)(a1 + 160);
  v10 = v9;
  v3 = GameRoutine_91b020(v2, v9);
  result = (__int64)v10;
  if (v10 == v9) {
    v5 = 32;
    goto LABEL_5;
  }
  if (v10 != nullptr) {
    v5 = 40;
  LABEL_5:
    result = (*(__int64 (**)(__int64))(*v10 + v5))((__int64)v10);
  }
  if ((v3 & 1) != 0 && GameData_22400f8 != 0) {
    v6 = *(_QWORD*)(a1 + 152);
    if (v6 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v7 = *(_QWORD*)(v6 + 440);
      if (v7 != 0 && *(unsigned __int8*)(v7 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v8 = *(unsigned __int8*)(v6 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v8) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v8) |= 2u;
        }
      }
    }
  }
  return result;
}

__int64 ProcMapSeqSkill_91af10(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(result + 160) & 0xFFF));
  if (v1 != 0 && *(_BYTE*)(v1 + 250) == 35) {
    v2 = result;
    result = UnitItemList_710300(*(_QWORD*)(result + 152) + 828LL,
                                 *(_QWORD*)(result + 152));
    if ((result & 0x80000000) == 0) {
      result = game_Unit_EquipItem_6d8f40(*(_QWORD*)(v2 + 152),
                                          (unsigned int)result);
      if (GameData_22400f8 != 0) {
        v3 = *(_QWORD*)(v2 + 152);
        if (v3 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
          v4 = *(_QWORD*)(v3 + 440);
          if (v4 != 0 && *(unsigned __int8*)(v4 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v5 = *(unsigned __int8*)(v3 + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v5) |= 2u;
            }
          }
        }
      }
    }
  }
  return result;
}

bool ProcMapSeqSkill_91aff0()
{
  return GameData_21ed098 != 0 && *(_QWORD*)(GameData_21ed098 + 144) != 0;
}

__int64

game_map_anonymous_ProcMapSeqSkill_CanUse_closure_Invoke(__int64 a1, _DWORD* a2,
                                                         unsigned int* a3)
{
  _QWORD* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  unsigned int v14;
  unsigned int v15;

  v3 = *(_QWORD**)(a1 + 8);
  if (*a2 == 1) {
    v10 = *a3;
    v11 = v3[171];
    v12 = v3[170];
    if (((v10 >> 5) & 0x7F) + 1 <= (v11 - v12) >> 2) {
      return (*(_DWORD*)(v12 + 4 * ((v10 >> 5) & 0x7F)) >> v10) & 1;
    }
    return 0;
  }
  if (*a2 != 0) {
    return 0;
  }
  v4 = *a3;
  if ((v4 & 0xFFF) == 0) {
    return 0;
  }
  v5 = v3[170];
  if (((v4 >> 5) & 0x7F) + 1 > (v3[171] - v5) >> 2 ||
      ((*(_DWORD*)(v5 + 4 * ((v4 >> 5) & 0x7F)) >> v4) & 1) == 0) {
    return 1;
  }
  v6 = v3[175];
  v7 = v3[174];
  if (v6 == v7) {
    return 0;
  }
  v8 = (v6 - v7) >> 2;
  v9 = 0;
  while (((*(_DWORD*)(v7 + 4 * v9) ^ (unsigned int)v4) & 0xFFF) != 0) {
    if (v8 == ++v9) {
      return 0;
    }
  }
  if (v9 < 0) {
    return 0;
  }
  v14 = *(_DWORD*)(v7 + 4LL * (unsigned int)v9);
  result = 1;
  v15 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                       8LL * (v14 & 0xFFF)) +
                            281LL);
  if (v15 <= 1) {
    v15 = 1;
  }
  if ((v14 & 0x1F000000) == 0 && ((v14 >> 19) & 0x1F) >= v15 - 1) {
    return 0;
  }
  return result;
}

__int64 game_map_anonymous_ProcMapSeqSkill_TryGiveSkill_closure_Invoke(
    __int64 a1, _DWORD* a2, __int64 a3)
{
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 8);
  if (*a2 == 1) {
    return Unit_6cb080(*(_QWORD*)(v3 + 152), a3);
  }
  if (*a2 != 0) {
    return 0;
  }
  return Unit_6ca760(*(_QWORD*)(v3 + 152), a3);
}

#pragma GCC visibility pop
