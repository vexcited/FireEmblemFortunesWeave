#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15b59e0(__int64);
__int64 GameRoutine_15b5f20(__int64);
__int64 game_UnitPool_GetFirst(int*);
bool game_19f0540(_QWORD*, _QWORD*);
extern __int64* GameData_212ea58;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_2131908[20];
extern __int64 GameData_2131910[19];
extern __int64 GameData_21ca310;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2203490;
extern __int64 game_GameModeData_instance_;
extern __int64 game_script_map_effect_g_sequence;
extern char GameData_1a9f09e;
extern char game_facility_g_unknown_2259368;
__int64 ui_game_15b7370();
__int64 ui_game_15b74b0();
bool ui_game_15b75f0(__int64 a1, __int64 a2);
char* ui_game_15b7990(__int64 a1);
bool ui_game_15b7a20(__int64 a1);
__int64 ui_game_15b7b80(__int64 a1);

__int64 ui_game_15b7370()
{
  __int64 v0;
  char v1;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;
  __int64 v5;

  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 1) {
    goto LABEL_10;
  }
  v5 = 0;
  v3_.v4 = v3_.v3;
  v3_.v3[0] = GameData_2131910[0] + 16;
  v3_.v3[1] = &v5;
  GameRoutine_15b5f20((__int64)v3_.v3);
  if (v3_.v4 == v3_.v3) {
    v0 = 32;
    goto LABEL_8;
  }
  if (v3_.v4 != nullptr) {
    v0 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v3_.v4 + v0))((__int64)v3_.v4);
  }
  if (v5 == 0 && (game_script_map_effect_g_sequence == 0 ||
                  game_GameModeData_instance_ == 0 ||
                  (*(_BYTE*)(game_GameModeData_instance_ + 92) & 1) == 0)) {
    v1 = game_facility_g_unknown_2259368;
    return v1 & 1;
  }
LABEL_10:
  v1 = 1;
  return v1 & 1;
}

__int64 ui_game_15b74b0()
{
  __int64 v1;
  __int64 v2;
  char v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  __int64 v7;

  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1) {
    if (*(_DWORD*)(GameData_21f3d10 + 136) == 1 || *GameData_212ea58 != 0) {
      goto LABEL_19;
    }
    if (*(_DWORD*)(GameData_21f3d10 + 136) != 1) {
      goto LABEL_13;
    }
    v7 = 0;
    v5_.v6 = v5_.v5;
    v5_.v5[0] = GameData_2131908[0] + 16;
    v5_.v5[1] = &v7;
    GameRoutine_15b59e0((__int64)v5_.v5);
    if (v5_.v6 == v5_.v5) {
      v1 = 32;
    }
    else {
      if (v5_.v6 == nullptr) {
        goto LABEL_24;
      }
      v1 = 40;
    }
    (*(void (**)(__int64))(*v5_.v6 + v1))((__int64)v5_.v6);
  LABEL_24:
    if (v7 != 0) {
      goto LABEL_19;
    }
    goto LABEL_13;
  }
  if (GameData_2203490 != 0) {
    goto LABEL_19;
  }
LABEL_13:
  v7 = 0;
  v5_.v6 = v5_.v5;
  v5_.v5[0] = GameData_2131910[0] + 16;
  v5_.v5[1] = &v7;
  GameRoutine_15b5f20((__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v2 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      goto LABEL_18;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v5_.v6 + v2))((__int64)v5_.v6);
LABEL_18:
  if (v7 == 0) {
    v3 = game_facility_g_unknown_2259368;
    return v3 & 1;
  }
LABEL_19:
  v3 = 1;
  return v3 & 1;
}

bool ui_game_15b75f0(__int64 a1, __int64 a2)
{
  __int64 v2;
  char v5;
  char v6;
  char v7;
  __int64 v10;
  __int64 (*v11)(__int64);
  char v12;
  char v13;
  char v14;
  char v15;
  struct {
    __int64 v16;
    char v17;
    char v18;
    char v19;
    char gap11_[1];
    int v20;
    char v21;
  } v16_;
  struct {
    __int64 v22;
    char v23;
    char v24;
    char v25;
    char gap35_[1];
    int v26;
    char v27;
  } v22_;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (v2 = *(_QWORD*)(a1 + 88)) != 0 && *(_QWORD*)(a2 + 88) != 0) {
    if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) & 1) != 0) {
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1);
      v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 584LL))(a1);
      v7 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
    }
    else {
      v5 = 0;
      v6 = 0;
      v7 = 0;
    }
    v22_.v22 = v2;
    v10 = *(_QWORD*)(a2 + 88);
    v22_.v26 = 0;
    v22_.v27 = 0;
    v22_.v23 = v5 & 1;
    v11 = *(__int64 (**)(__int64))(*(_QWORD*)a2 + 560LL);
    v22_.v24 = v6 & 1;
    v22_.v25 = v7 & 1;
    v12 = v11(a2);
    v13 = 0;
    v14 = 0;
    v15 = 0;
    if ((v12 & 1) != 0) {
      v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 576LL))(a2);
      v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 584LL))(a2);
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 568LL))(a2);
    }
    v16_.v16 = v10;
    v16_.v20 = 0;
    v16_.v21 = 0;
    v16_.v17 = v13 & 1;
    v16_.v18 = v14 & 1;
    v16_.v19 = v15 & 1;
    return game_19f0540(&v22_.v22, &v16_.v16);
  }
  else {
    return (signed __int32)*(_DWORD*)(a1 + 40) <
           (signed __int32)*(_DWORD*)(a2 + 40);
  }
}

char* ui_game_15b7990(__int64 a1)
{
  char v2;
  char v3;

  v2 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 576LL))(a1);
  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 464LL))(a1);
  if ((v2 & 1) != 0) {
    if ((v3 & 1) != 0 ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 704LL))(a1) & 1) == 0) {
      return "Fixed";
    }
    else {
      return "FixedDisable";
    }
  }
  else if ((v3 & 1) != 0) {
    return &GameData_1a9f09e;
  }
  else {
    return "Disable";
  }
}

bool ui_game_15b7a20(__int64 a1)
{
  __int64 v1;
  _BOOL8 result;
  struct {
    _QWORD v3[4];
    _QWORD* v4;
  } v3_;
  __int64 v5;

  if (*(_QWORD*)(a1 + 88) == 0) {
    return false;
  }
  if (GameData_21f3d10 != 0 && *(_BYTE*)(GameData_21f3d10 + 9) == 1 &&
      *(_DWORD*)(GameData_21f3d10 + 136) == 1) {
    return true;
  }
  v5 = 0;
  v3_.v4 = v3_.v3;
  v3_.v3[0] = GameData_2131910[0] + 16;
  v3_.v3[1] = &v5;
  GameRoutine_15b5f20((__int64)v3_.v3);
  if (v3_.v4 == v3_.v3) {
    v1 = 32;
  }
  else {
    if (v3_.v4 == nullptr) {
      goto LABEL_10;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v3_.v4 + v1))((__int64)v3_.v4);
LABEL_10:
  if (v5 != 0) {
    return true;
  }
  if (game_script_map_effect_g_sequence == 0 ||
      game_GameModeData_instance_ == 0) {
    return (game_facility_g_unknown_2259368 & 1) != 0;
  }
  result = true;
  if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 1) == 0 &&
      (game_facility_g_unknown_2259368 & 1) == 0) {
    return false;
  }
  return result;
}

__int64 ui_game_15b7b80(__int64 a1)
{
  __int64 v2;
  bool v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  __int64 v21;

  if (*(_QWORD*)(a1 + 88) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] == 0 || *(_BYTE*)(v2 + 9) != 1) {
    if (*GameData_212ea58 != 0) {
      goto LABEL_14;
    }
    goto LABEL_46;
  }
  v3 = *(_DWORD*)(v2 + 136) != 1 && *GameData_212ea58 == 0;
  if (v3) {
    if (*(_DWORD*)(v2 + 136) != 1) {
      goto LABEL_46;
    }
    v21 = 0;
    v19_.v20 = v19_.v19;
    v19_.v19[0] = GameData_2131908[0] + 16;
    v19_.v19[1] = &v21;
    GameRoutine_15b59e0((__int64)v19_.v19);
    if (v19_.v20 == v19_.v19) {
      v4 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_45;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v4))((__int64)v19_.v20);
  LABEL_45:
    if (v21 != 0) {
      goto LABEL_14;
    }
  LABEL_46:
    v21 = 0;
    v19_.v20 = v19_.v19;
    v19_.v19[0] = GameData_2131910[0] + 16;
    v19_.v19[1] = &v21;
    GameRoutine_15b5f20((__int64)v19_.v19);
    if (v19_.v20 == v19_.v19) {
      v16 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_51;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v19_.v20 + v16))((__int64)v19_.v20);
  LABEL_51:
    if (v21 != 0 || (game_facility_g_unknown_2259368 & 1) != 0) {
      goto LABEL_14;
    }
    v17 = *(_QWORD*)(a1 + 88);
    if ((*(_WORD*)(v17 + 416) & 0x180) == 0) {
      v18 = *(_QWORD*)(v17 + 440);
      if (v18 != 0 && *(_BYTE*)(v18 + 16) == 0) {
        return 1;
      }
    }
    return 0;
  }
LABEL_14:
  LODWORD(v19_.v19[0]) = 16;
  result = game_UnitPool_GetFirst((int*)v19_.v19);
  if (result != 0) {
    v6 = *(_QWORD*)(result + 432);
    if (v6 == 0) {
      v7 = *(_QWORD*)(result + 440);
      if (v7 != 0 && (unsigned int)(v8 = *(unsigned __int8*)(v7 + 16)) <= 8) {
        v15 = v8 - 3;
        while (1) {
          if (v15 == 0) {
            v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v6 != 0) {
              break;
            }
          }
          if (++v15 == 6) {
            goto LABEL_18;
          }
        }
      }
      else {
      LABEL_18:
        v6 = 0;
      }
    }
    v9 = 0;
    v10 = *(_QWORD*)GameData_212c6a0[0];
    while (1) {
    LABEL_21:
      v3 = *(_QWORD*)(a1 + 88) == result;
      result = v6;
      if (v3) {
        if (v10 != 0) {
          v11 = *(_DWORD*)(v10 + 308);
          if ((*(_BYTE*)(v10 + 328) & 4) != 0) {
            v11 = 1;
          }
          if (v9 < v11) {
            return 1;
          }
        }
        else if (v9 < 5) {
          return 1;
        }
      }
      if (result == 0) {
        return result;
      }
      v6 = *(_QWORD*)(result + 432);
      ++v9;
      if (v6 == 0) {
        v12 = *(_QWORD*)(result + 440);
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v6 = 0;
          if (v13 <= 8) {
            v14 = v13 - 3;
            while (1) {
              if (v14 == 0) {
                v6 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v6 != 0) {
                  break;
                }
              }
              if (++v14 == 6) {
                v6 = 0;
                goto LABEL_21;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
