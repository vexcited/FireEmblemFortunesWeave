#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_127be60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_95f930(_QWORD, _QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 ProcEquipUnitSelectMenu_12f1a00(_QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 GameData_21c9988;
extern __int64 GameData_21f49b8;
extern __int64 game_GameModeData_instance_;
__int64 VariableManager_7150e0();

__int64 VariableManager_7150e0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 i;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  int v9;
  _BOOL4 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;

  v23 = game_GetHero(9);
  v22 = 241;
  result = game_UnitPool_Find_6ead60(&v23, &v22);
  if (result == 0) {
    return result;
  }
  v1 = result;
  if (game_GameModeData_instance_ != 0) {
    v2 = game_GetHero(9);
    if (v2 != 0) {
      for (i = v2; i != 0; i = *(_QWORD*)(i + 624)) {
        v4 = i;
      }
      if (*(_BYTE*)(v4 + 441) == 3) {
        v5 = *(_QWORD*)(v2 + 624);
        if (v5 == 0) {
          v5 = v2;
        }
        v23 = v5;
        v22 = 241;
        v6 = game_UnitPool_Find_6ead60(&v23, &v22);
        if (v6 != 0) {
          v7 = (__int64*)(v6 + 2104);
        LABEL_14:
          v9 = *((unsigned __int8*)v7 + 32);
          v10 = v9 == 1;
          v11 = v9 != 1 && v9 == 2;
          v12 = GameRoutine_9a28e0(7);
          game_VariableManager_SetFlag(v12, v10);
          v13 = GameRoutine_9a28e0(8);
          game_VariableManager_SetFlag(v13, v11);
          goto LABEL_18;
        }
        v8 = *(_QWORD*)(game_GameModeData_instance_ + 176);
        if (*(_BYTE*)(v8 + 144) != 0) {
          v7 = (__int64*)(v8 + 112);
          goto LABEL_14;
        }
      }
    }
    v7 = &GameData_21f49b8;
    goto LABEL_14;
  }

LABEL_18:
  v14 = game_Unit_GetJob(v1);
  result = game_GetHero(9);
  if (result == 0) {
    v20 = 0;
    goto LABEL_39;
  }
  v15 = result;
  if (game_GameModeData_instance_ == 0) {
    v16 = 0;
    v18 = *(unsigned __int8*)(result + 442);
    if (*(_BYTE*)(result + 442) != 0) {
      goto LABEL_23;
    }
  LABEL_27:
    v21 = v16 + *(char*)(result + 443);
    if (v21 <= 1) {
      v21 = 1;
    }
    if (v21 >= 99) {
      v21 = 99;
    }
    if (*(_BYTE*)(result + 443) != 0) {
      v18 = (unsigned int)v21;
    }
    else {
      v18 = v16;
    }
    v19 = *(_QWORD*)(result + 304);
    if (v19 == 0) {
      goto LABEL_36;
    }
  LABEL_35:
    v23 = v19;
    result = GameRoutine_127be60(&v23, v18, 6);
    v20 = result;
    if (result != 0) {
      goto LABEL_39;
    }
    goto LABEL_36;
  }
  v16 = *(_DWORD*)(game_GameModeData_instance_ + 68);
  v17 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v17 != 0) {
    v16 += *(char*)(v17 + 128);
  }
  v18 = *(unsigned __int8*)(result + 442);
  if (*(_BYTE*)(result + 442) == 0) {
    goto LABEL_27;
  }

LABEL_23:
  v19 = *(_QWORD*)(result + 304);
  if (v19 != 0) {
    goto LABEL_35;
  }

LABEL_36:
  if (*(_QWORD*)(v15 + 64) != 0) {
    v20 = *(_QWORD*)(v15 + 64);
  }
  else {
    v20 = GameData_21c9988;
  }

LABEL_39:
  if (v14 != v20) {
    result = GameRoutine_95f930(1, v1);
    if ((result & 1) != 0) {
      return ProcEquipUnitSelectMenu_12f1a00(v1);
    }
  }
  return result;
}

#pragma GCC visibility pop
