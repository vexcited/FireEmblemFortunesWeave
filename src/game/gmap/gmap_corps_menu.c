#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_172a580(_QWORD, _QWORD);
__int64 GameRoutine_17317a0(void);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_9725a0(_QWORD);
__int64 GmapCorpsMenu_172a860(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
__int64 game_gmap_TroopMgr_EachPlayerTroop(_QWORD, _QWORD);
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_20b5ee8[])();
extern __int64 (*GameData_20b5f68[])();
extern __int64 (*GameData_20b5fe8[])();
extern __int64 GameData_20b33d8;
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
__int64 GmapCorpsMenu_Unknown38(__int64 a1);
__int64 GmapCorpsMenu_Unknown41(__int64 result);
__int64 GmapCorpsMenu_172a480(__int64 a1, char a2, __int64 a3);
__int64 GmapCorpsMenu_172b6e0(__int64 a1, __int64 a2);
__int64 GameRoutine_172aa00(__int64, char, _QWORD*, _QWORD*, char);
__int64 GameRoutine_972290(_QWORD);
__int64 GameRoutine_972b70(_QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_CorpsManager_EachUnit(_QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 game_menu_BasicMenu_Unknown16de2e0(_QWORD, _QWORD);
extern __int64 (*GameData_1fb0db0[])();
extern __int64 (*GameData_20b6368[])();
extern __int64 (*GameData_20b6668[])();
extern __int64 GameData_20b3af0;
extern __int64 game_g_game_setting;
extern __int64* GameData_21319f0[9];
bool game_gmap_GmapCorpsMenu_IsOppositeEmpty(__int64 a1, char a2);
__int64 game_gmap_GmapCorpsMenu_ChangeLeader(__int64 a1, __int64 a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda0_Invoke(__int64 a1,
                                                            __int64* a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda1_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda2_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_OnPreCreate_lambda0_Invoke(__int64 result,
                                                           __int64 a2);
__int64 game_gmap_GmapCorpsMenu_OnPreCreate_lambda1_Invoke(__int64 result,
                                                           __int64 a2);
__int64 GmapCorpsMenu_1734260(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_IsOppositeEmpty_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_CanChangeLeader_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_Exchange_lambda0_Invoke(__int64 a1, _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda3_Invoke(__int64 a1,
                                                            _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_ChangeLeader_lambda0_Invoke(__int64 a1,
                                                            _QWORD* a2);
bool game_gmap_GmapCorpsMenu_SetPoolTab_lambda0_Invoke(__int64 a1, __int64* a2);
bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda0_Invoke(__int64 a1,
                                                                __int64* a2);
bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda1_Invoke(__int64 a1,
                                                                _QWORD* a2);
bool game_gmap_GmapCorpsMenu_SelectedUser_lambda0_Invoke(__int64 a1,
                                                         _QWORD* a2);

bool game_gmap_GmapCorpsMenu_IsOppositeEmpty(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[4];
  _QWORD* v17;
  int v18;
  __int64 v19;

  if ((a2 & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 312);
    if (v2 == 0) {
      return false;
    }
  }
  else {
    v2 = *(_QWORD*)(a1 + 304);
    if (v2 == 0) {
      return false;
    }
  }
  v3 = __dynamic_cast(v2, GameData_21319f0[0], &GameData_20b3af0, 0);
  if (v3 == 0) {
    return false;
  }
  v5 = v3;
  v7 = *(_QWORD*)(v3 + 232);
  v6 = *(_QWORD*)(v3 + 240);
  v8 = v16;
  v18 = 0;
  v16[0] = GameData_20b6368;
  v16[1] = &v18;
  v17 = v16;
  if (v6 == v7) {
    goto LABEL_17;
  }
  v9 = 0;
  v10 = GameData_212e008[0];
  do {
    v11 = *(_QWORD*)(v7 + 8 * v9);
    if (v11 != 0) {
      v12 = __dynamic_cast(v11, v10, &GameData_20b33d8, 0);
      if (v12 == 0) {
        goto LABEL_8;
      }
      v19 = v12;
      if (v17 == nullptr) {
        GameRoutine_60a310(0, v4, v13);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v17 + 48LL))(v17, &v19) & 1) !=
          0) {
        break;
      }
      v7 = *(_QWORD*)(v5 + 232);
      v6 = *(_QWORD*)(v5 + 240);
    }
  LABEL_8:
    ++v9;
  } while (v9 < (v6 - v7) >> 3);
  v8 = v17;
  if (v17 != v16) {
    if (v17 != nullptr) {
      v14 = 40;
      goto LABEL_18;
    }
    return v18 < 1;
  }
LABEL_17:
  v14 = 32;
LABEL_18:
  (*(void (**)(_QWORD*, __int64))(*v8 + v14))(v8, v4);
  return v18 < 1;
}

__int64 GmapCorpsMenu_Unknown38(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  int v15;
  __int64 v16;
  int i;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  __int64 v29;
  __int64 (**v31)();
  void* v32;
  __int64 (***v33)();

  *(_QWORD*)(a1 + 392) = *(_QWORD*)(a1 + 384);
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  v5 = *(_DWORD*)(v2 + 56);
  if ((v5 & 0x80000000) == 0) {
    while (v3 != v4) {
      v7 = *v3++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v5) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if (v3 == v4) {
    goto LABEL_7;
  }
  while (1) {
    v6 = *v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_7;
    }
  }

LABEL_8:
  v8 = *(_DWORD*)(v6 + 540);
  v10 = (unsigned int)(v8 - 1);
  v9 = v8 < 1;
  v11 = (__int64*)v6;
  if (!v9) {
    v12 = *(_QWORD*)(v6 + 24);
    v13 = *(_QWORD*)(v6 + 32) - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v10);
    if (v10 >= v13 >> 3) {
      v11 = (__int64*)v6;
    }
    else {
      v11 = v14;
    }
  }
  v15 = *(_DWORD*)(a1 + 360);
  if (v15 == 1) {
    v21 = 0;
    *(_DWORD*)(a1 + 376) = *(_DWORD*)(v6 + 84);
    while (1) {
      v32 = &GameData_1ade186;
      v22 = game_HashString(&GameData_1ade186);
      v23 = game_GameModeData_instance_;
      v31 = (__int64 (**)())v22;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_31;
      }
      v24 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v31);
      if (v24 != 0) {
        break;
      }
      if (v21 >= 0) {
        goto LABEL_47;
      }
    LABEL_32:
      if ((GameRoutine_9725a0((unsigned int)v21) & 1) != 0) {
        LODWORD(v31) = v21;
        GameRoutine_7d6200(a1 + 384, &v31);
        goto LABEL_47;
      }
      ++v21;
    }
    v23 = *(_DWORD*)(v24 + 32);
  LABEL_31:
    if (v21 >= v23) {
      goto LABEL_47;
    }
    goto LABEL_32;
  }
  v16 = *v11;
  if (v15 != 0) {
    *(_DWORD*)(a1 + 376) = *(_DWORD*)(v6 + 84);
    if (game_gmap_SpotMgr_GetCurrentSpot() == v16) {
      *(_BYTE*)(a1 + 408) = 1;
      LODWORD(v31) = -1;
      GameRoutine_6e5900(a1 + 384, &v31);
    }
    v25 = v16;
    v31 = GameData_20b5fe8;
    v32 = (void*)a1;
    v33 = &v31;
    goto LABEL_41;
  }
  for (i = 0;; ++i) {
    v32 = &GameData_1ade186;
    v18 = game_HashString(&GameData_1ade186);
    v19 = game_GameModeData_instance_;
    v31 = (__int64 (**)())v18;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_18;
    }
    v20 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v31);
    if (v20 != 0) {
      v19 = *(_DWORD*)(v20 + 32);
    LABEL_18:
      if (i >= v19) {
        goto LABEL_40;
      }
      goto LABEL_19;
    }
    if (i >= 0) {
      goto LABEL_40;
    }
  LABEL_19:
    if ((GameRoutine_9725a0((unsigned int)i) & 1) != 0) {
      break;
    }
  }
  *(_DWORD*)(a1 + 376) = i;

LABEL_40:
  *(_BYTE*)(a1 + 408) = 1;
  LODWORD(v31) = -1;
  GameRoutine_6e5900(a1 + 384, &v31);
  v33 = &v31;
  v25 = v16;
  v31 = GameData_20b5f68;
  v32 = (void*)a1;

LABEL_41:
  game_gmap_TroopMgr_EachPlayerTroop(v25, &v31);
  if (v33 == &v31) {
    v27 = 4;
  LABEL_45:
    ((void (*)(__int64 (***)(), __int64))(*v33)[v27])(v33, v26);
  }
  else if (v33 != nullptr) {
    v27 = 5;
    goto LABEL_45;
  }

LABEL_47:
  result = *(_QWORD*)(a1 + 384);
  v29 = *(_QWORD*)(a1 + 392);
  if ((unsigned __int64)((v29 - result) >> 2) >= 2 && result != v29) {
    return GameRoutine_17317a0();
  }
  return result;
}

__int64 GmapCorpsMenu_Unknown41(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  if ((*(_BYTE*)(result + 356) & 1) != 0) {
    v1 = result;
    GameRoutine_1567590("Tutorial", 1);
    v2 = *(_QWORD*)(v1 + 320);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v2 + 240LL))(v2, 0);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v2 + 248LL))(v2, 0);
    v3 = *(_QWORD*)(v1 + 312);
    LODWORD(v1) =
        *(_DWORD*)(*(_QWORD*)(v1 + 8LL * *(unsigned int*)(v1 + 352) + 304) +
                   1064LL) != 0;
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v3 + 240LL))(v3, (unsigned int)v1);
    return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v3 + 248LL))(
        v3, (unsigned int)v1);
  }
  return result;
}

__int64 GmapCorpsMenu_172a480(__int64 a1, char a2, __int64 a3)
{
  int v3;
  __int64 v6;
  __int64 v7;
  _BOOL4 v8;

  v3 = *(_DWORD*)(a1 + 356);
  *(_QWORD*)(a1 + 368) = a3;
  *(_DWORD*)(a1 + 356) = v3 | 1;
  if (a3 != 0) {
    (*(void (**)(__int64, __int64))(*(_QWORD*)a3 + 64LL))(a3, 1);
  }
  if ((a2 & 1) != 0) {
    GameRoutine_172a580(a1, 0);
  }
  else {
    GmapCorpsMenu_172a860(a1, 0);
  }
  GameRoutine_1567590("Tutorial", 1);
  v6 = *(_QWORD*)(a1 + 320);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 240LL))(v6, 0);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v6 + 248LL))(v6, 0);
  v7 = *(_QWORD*)(a1 + 312);
  v8 = *(_DWORD*)(*(_QWORD*)(a1 + 8LL * *(unsigned int*)(a1 + 352) + 304) +
                  1064LL) != 0;
  (*(void (**)(__int64, _BOOL4))(*(_QWORD*)v7 + 240LL))(v7, v8);
  return (*(__int64 (**)(__int64, _BOOL4))(*(_QWORD*)v7 + 248LL))(v7, v8);
}

__int64 GmapCorpsMenu_172b6e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned int v15;
  __int64 v16;

  v4 = *(_QWORD*)(a1 + 232);
  v3 = *(_QWORD*)(a1 + 240);
  v5 = v13;
  v15 = 0;
  v13[0] = GameData_20b5ee8;
  v13[1] = &v15;
  v14 = v13;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v6 = 0;
  v7 = GameData_212e008[0];
  do {
    v8 = *(_QWORD*)(v4 + 8 * v6);
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, v7, &GameData_20b33d8, 0);
      if (v9 == 0) {
        goto LABEL_3;
      }
      v16 = v9;
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2, v10);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v14 + 48LL))(v14, &v16) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(a1 + 232);
      v3 = *(_QWORD*)(a1 + 240);
    }
  LABEL_3:
    ++v6;
  } while (v6 < (v3 - v4) >> 3);
  v5 = v14;
  if (v14 != v13) {
    if (v14 != nullptr) {
      v11 = 40;
      goto LABEL_13;
    }
    return v15;
  }

LABEL_12:
  v11 = 32;

LABEL_13:
  (*(void (**)(_QWORD*, __int64))(*v5 + v11))(v5, a2);
  return v15;
}

__int64 game_gmap_GmapCorpsMenu_ChangeLeader(__int64 a1, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[4];
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;

  v2 = *(_QWORD**)(a1 + 8);
  v3 = v2[11];
  v4 = *(_QWORD*)(v3 + 304);
  if (v4 != 0) {
    v5 = __dynamic_cast(v4, GameData_21319f0[0], &GameData_20b3af0, 0);
  }
  else {
    v5 = 0;
  }
  v7 = *(_QWORD*)(v5 + 232);
  v6 = *(_QWORD*)(v5 + 240);
  v8 = v16;
  v18 = nullptr;
  v16[0] = GameData_20b6668;
  v16[1] = &v18;
  v17 = v16;
  if (v6 == v7) {
    goto LABEL_15;
  }
  v9 = 0;
  v10 = GameData_212e008[0];
  do {
    v11 = *(_QWORD*)(v7 + 8 * v9);
    if (v11 != 0) {
      v12 = __dynamic_cast(v11, v10, &GameData_20b33d8, 0);
      if (v12 == 0) {
        goto LABEL_6;
      }
      v19 = v12;
      if (v17 == nullptr) {
        GameRoutine_60a310(0, a2, v13);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v17 + 48LL))(v17, &v19) & 1) !=
          0) {
        break;
      }
      v7 = *(_QWORD*)(v5 + 232);
      v6 = *(_QWORD*)(v5 + 240);
    }
  LABEL_6:
    ++v9;
  } while (v9 < (v6 - v7) >> 3);
  v8 = v17;
  if (v17 != v16) {
    if (v17 != nullptr) {
      v14 = 40;
      goto LABEL_16;
    }
    goto LABEL_17;
  }
LABEL_15:
  v14 = 32;
LABEL_16:
  (*(void (**)(_QWORD*, __int64))(*v8 + v14))(v8, a2);
LABEL_17:
  if (v18 != nullptr) {
    GameRoutine_172aa00(v3, 1, v2, v18, 0);
    (*(void (**)(_QWORD*, _QWORD))(*v2 + 64LL))(v2, 0);
    game_menu_BasicMenu_Unknown16de2e0(v5, 1);
  }
  return 2;
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda0_Invoke(__int64 a1,
                                                            __int64* a2)
{
  _DWORD* v3;
  __int64 v4;
  int v5;

  v3 = *(_DWORD**)(a1 + 8);
  v4 = *a2;
  v5 = (*v3)++;
  *(_DWORD*)(v4 + 112) = v5;
  *(_BYTE*)(v4 + 116) = **(_BYTE**)(a1 + 16);
  if (**(_BYTE**)(a1 + 16) == 1 &&
      (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) != 0) {
    **(_BYTE**)(a1 + 16) = 0;
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda1_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  _DWORD* v2;
  __int64 v4;
  int v5;

  v2 = (_DWORD*)*a2;
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    v4 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v2 + 560LL))(v2);
    v5 = *(unsigned __int8*)(v4 + 501);
    if ((*(_BYTE*)(v4 + 418) & 0x10) == 0) {
      v5 = -1;
    }
    if (v5 != v2[27]) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return **(unsigned __int8**)(a1 + 8);
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda2_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  _DWORD* v2;
  __int64 v4;
  int v5;

  v2 = (_DWORD*)*a2;
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    v4 = (*(__int64 (**)(_DWORD*))(*(_QWORD*)v2 + 560LL))(v2);
    v5 = *(unsigned __int8*)(v4 + 501);
    if ((*(_BYTE*)(v4 + 418) & 0x10) == 0) {
      v5 = -1;
    }
    if (v5 != v2[27]) {
      **(_BYTE**)(a1 + 8) = 1;
    }
  }
  return **(unsigned __int8**)(a1 + 8);
}

__int64 game_gmap_GmapCorpsMenu_OnPreCreate_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v4 = *(_QWORD*)(result + 8);
  v5 = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  if (v5 != *(_DWORD*)(v4 + 376)) {
    v7 = v2;
    v8 = v3;
    v6 = v5;
    return GameRoutine_6e5900(v4 + 384, &v6);
  }
  return result;
}

__int64 game_gmap_GmapCorpsMenu_OnPreCreate_lambda1_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v7;
  __int64 v8;

  v4 = *(_QWORD*)(result + 8);
  v5 = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  if (v5 != *(_DWORD*)(v4 + 376)) {
    v7 = v2;
    v8 = v3;
    v6 = v5;
    return GameRoutine_6e5900(v4 + 384, &v6);
  }
  return result;
}

__int64 GmapCorpsMenu_1734260(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;

  v3 = *(_QWORD*)(a1 + 16);
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v4 == 0) {
    return 0;
  }
  v5 = *(__int64**)(a1 + 8);
  v6 = v4;
  if (*v5 == 0) {
    *v5 = v4;
    v11 = **(_QWORD**)(a1 + 8);
    if (v11 != 0) {
      v12 = *(unsigned __int8*)(v11 + 501);
      v13 = *(unsigned int*)(v3 + 376);
      if ((*(_BYTE*)(v11 + 418) & 0x10) == 0) {
        v12 = -1;
      }
      if (v12 == (_DWORD)v13) {
        v15[0] = GameData_1fb0db0;
        v15[1] = v11;
        v16 = v15;
        game_CorpsManager_EachUnit(v13, v15);
        if (v16 == v15) {
          v14 = 32;
        }
        else {
          if (v16 == nullptr) {
            goto LABEL_3;
          }
          v14 = 40;
        }
        (*(void (**)(void))(*v16 + v14))();
      }
    }
  }
LABEL_3:
  v7 = *(_DWORD*)(v3 + 376);
  if ((GameRoutine_972b70(v7, v6) & 1) != 0) {
    v8 = *(_DWORD*)(v6 + 416);
    if ((v8 & 0x180000) == 0x100000) {
      v9 = *(unsigned __int8*)(v6 + 501);
      *(_BYTE*)(v6 + 501) = -1;
      *(_DWORD*)(v6 + 416) = v8 & 0xFFE7FFFF;
      GameRoutine_972290(v9);
      v8 = *(_DWORD*)(v6 + 416);
    }
    *(_BYTE*)(v6 + 501) = v7;
    *(_DWORD*)(v6 + 416) = v8 | 0x100000;
    GameRoutine_972290(v7);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_IsOppositeEmpty_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_CanChangeLeader_lambda0_Invoke(__int64 a1,
                                                               _QWORD* a2)
{
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_Exchange_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if (*(_QWORD*)(*(_QWORD*)(*a2 + 8LL) + 344LL) == *a2 ||
      (*(__int64 (**)(_QWORD))(*(_QWORD*)v2 + 560LL))(*a2) != 0) {
    return 0;
  }
  **(_QWORD**)(a1 + 8) = v2;
  return 1;
}

__int64 game_gmap_GmapCorpsMenu_ExchangeImpl_lambda3_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda0_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) != 0 ||
      *(_QWORD*)(**(_QWORD**)(a1 + 8) + 344LL) == v2) {
    return 0;
  }
  **(_QWORD**)(a1 + 16) = v2;
  return 1;
}

__int64 game_gmap_GmapCorpsMenu_ReturnPool_lambda1_Invoke(__int64 a1,
                                                          _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (result != 0) {
    if (**(_DWORD**)(a1 + 8) == *(__int16*)(result + 490)) {
      **(_QWORD**)(a1 + 16) = v2;
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 game_gmap_GmapCorpsMenu_ChangeLeader_lambda0_Invoke(__int64 a1,
                                                            _QWORD* a2)
{
  __int64 v2;
  __int64 result;

  v2 = *a2;
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (result != 0) {
    if (*(_BYTE*)(v2 + 116) == 1) {
      **(_QWORD**)(a1 + 8) = v2;
      return 1;
    }
    else {
      return 0;
    }
  }
  return result;
}

bool game_gmap_GmapCorpsMenu_SetPoolTab_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*a2 + 8) + 344LL);
  if (v3 == *a2) {
    v4 = *(__int64**)(a1 + 8);
    v5 = *v4;
    v6 = *(_QWORD*)(*v4 + 336);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
    }
    *(_QWORD*)(v5 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 1, 0, 0);
    v7 = *(_QWORD*)(v5 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v8 = *(_QWORD*)(v5 + 336);
      v9 = 4;
      if (v8 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 120LL))(v8) & 1) != 0) {
          v9 = 4;
        }
        else {
          v9 = 0;
        }
      }
    }
    else {
      v9 = 4;
    }
    *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v9;
  }
  return v3 == v2;
}

bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda0_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*a2 + 8) + 344LL);
  if (v3 == *a2) {
    v4 = *(__int64**)(a1 + 8);
    v6 = *v4;
    v7 = *(_QWORD*)(*v4 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(v6 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 1, 0, 0);
    v8 = *(_QWORD*)(v6 + 336);
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v9 = *(_QWORD*)(v6 + 336);
      v10 = 4;
      if (v9 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 120LL))(v9) & 1) != 0) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
      }
    }
    else {
      v10 = 4;
    }
    *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v10;
    **(_DWORD**)(a1 + 16) = 0;
  }
  return v3 == v2;
}

bool game_gmap_GmapCorpsMenu_SelectedCurrentPool_lambda1_Invoke(__int64 a1,
                                                                _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = *a2;
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v4 == 0) {
    v5 = *(__int64**)(a1 + 8);
    v6 = *v5;
    v7 = *(_QWORD*)(*v5 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(v6 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 1, 0, 0);
    v8 = *(_QWORD*)(v6 + 336);
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v9 = *(_QWORD*)(v6 + 336);
      v10 = 4;
      if (v9 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 120LL))(v9) & 1) != 0) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
      }
    }
    else {
      v10 = 4;
    }
    *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v10;
    **(_DWORD**)(a1 + 16) = 0;
  }
  return v4 == 0;
}

bool game_gmap_GmapCorpsMenu_SelectedUser_lambda0_Invoke(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;

  v2 = *a2;
  v4 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v4 == 0) {
    v5 = *(__int64**)(a1 + 8);
    v6 = *v5;
    v7 = *(_QWORD*)(*v5 + 336);
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 168LL))(v7);
    }
    *(_QWORD*)(v6 + 336) = v2;
    _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v6, 1, 0, 0);
    v8 = *(_QWORD*)(v6 + 336);
    if (v8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 160LL))(v8);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v9 = *(_QWORD*)(v6 + 336);
      v10 = 4;
      if (v9 != 0) {
        if (((*(__int64 (**)(__int64))(*(_QWORD*)v9 + 120LL))(v9) & 1) != 0) {
          v10 = 4;
        }
        else {
          v10 = 0;
        }
      }
    }
    else {
      v10 = 4;
    }
    *(_DWORD*)(v6 + 356) = *(_DWORD*)(v6 + 356) & 0xFFFFFFFB | v10;
    **(_DWORD**)(a1 + 16) = 0;
  }
  return v4 == 0;
}

#pragma GCC visibility pop
