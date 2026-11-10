#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* game_8224a0(unsigned __int8);
__int64 GameRoutine_961420(__int64, _BYTE**, __int64);
__int64 MapBattleHUD_18c53e0(__int64 result, char);
__int64 Unit_6cb490(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 GameData_22400f8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_UnitFlags_instance_;
float MapBattleHUD_18c5bc0(__int64, char);
const char* ProcUnitBlazeOff_Unknown19(__int64 a1);
void ProcUnitBlazeOff_Unknown24(__int64 a1);
__int64 ProcUnitBlazeOff_Unknown26(__int64 a1);

const char* ProcUnitBlazeOff_Unknown19(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v4;
  int v5;
  int v6;

  v1 = *(_QWORD*)(a1 + 152);
  v2 = game_g_shared_system_skills_ptr;
  v6 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x17CLL) +
                  game_g_shared_system_skills_ptr) &
       0xFFF;
  if ((game_HasSkill((_QWORD*)(v1 + 1744), (unsigned int*)&v6) & 1) != 0) {
    return "Bmap_OverBraze_C_Cancel";
  }
  v5 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x180LL) + v2) & 0xFFF;
  if ((game_HasSkill((_QWORD*)(v1 + 1744), (unsigned int*)&v5) & 1) != 0) {
    return "Bmap_OverBraze_B_Cancel";
  }
  v4 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x178LL) + v2) & 0xFFF;
  game_HasSkill((_QWORD*)(v1 + 1744), (unsigned int*)&v4);
  return "Bmap_OverBraze_A_Cancel";
}

void ProcUnitBlazeOff_Unknown24(__int64 a1)
{

#pragma clang fp contract(off)
  _BYTE* v2;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  char v12;
  __int64 v13;
  float v14;
  _BYTE* v15;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v2 != nullptr) {
    v8 = *(_QWORD*)(a1 + 152);
    v15 = v2;
    GameRoutine_961420(a1, &v15, v8),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  v9 = game_g_shared_system_skills_ptr;
  v10 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 1744LL);
  LODWORD(v15) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x208LL) +
                            game_g_shared_system_skills_ptr) &
                 0xFFF;
  if ((game_HasSkill(v10, (unsigned int*)&v15) & 1) == 0) {
    v11 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 1744LL);
    LODWORD(v15) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x210LL) + v9) & 0xFFF;
    v12 = game_HasSkill(v11, (unsigned int*)&v15),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
    v13 = *(_QWORD*)(a1 + 152);
    if ((v12 & 1) != 0) {
      MapBattleHUD_18c53e0(v13, 0),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s0", "=w"));
    }
    else {
      v14 = MapBattleHUD_18c5bc0(v13, 0);
    }
    *(float*)(a1 + 160) = v14;
  }
}

__int64 ProcUnitBlazeOff_Unknown26(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 result;
  float v4;
  int v5;
  int v6;
  int v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;

  Unit_6cb490(*(_QWORD*)(a1 + 152));
  v2 = (_QWORD*)(*(_QWORD*)(a1 + 152) + 1744LL);
  v13 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x208LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  result = game_HasSkill(v2, (unsigned int*)&v13);
  if ((result & 1) == 0) {
    result = (__int64)game_8224a0(0x1Au);
    if (game_GameModeData_instance_ != 0 &&
        (result = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)result)) != 0) {
      v4 = *(float*)(a1 + 160);
      if (*(_DWORD*)(result + 32) == 1) {
        v4 = v4 + v4;
      }
    }
    else {
      v4 = *(float*)(a1 + 160);
    }
    v5 = (int)(float)(v4 * 0x1.e000000000000p+5f);
    if (v5 >= 1) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v7 = 2)
               : (v7 = 3),
           (v7 & v6) != 0)) {
        v8 = *(float*)(a1 + 144);
        v9 = (float)(unsigned int)v5;
        *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
        if (v8 >= (float)(unsigned int)v5) {
          v9 = v8;
        }
        *(float*)(a1 + 144) = v9;
      }
    }
  }
  if (GameData_22400f8 != 0) {
    v10 = *(_QWORD*)(a1 + 152);
    if (v10 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
        (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
      v11 = *(_QWORD*)(v10 + 440);
      if (v11 != 0 && *(unsigned __int8*)(v11 + 16) <= 8u &&
          game_map_UnitFlags_instance_ != 0) {
        v12 = *(unsigned __int8*)(v10 + 2088);
        if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v12) & 1) != 0) {
          *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v12) |= 2u;
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
