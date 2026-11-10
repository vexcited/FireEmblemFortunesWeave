#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_155e830(_QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_19aa980(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_211f3e8[])();
extern __int64 (*GameData_211f480[])();
extern __int64 (*game_map_MapScoreInfo_vtable[])();
extern __int64 GameData_212d690;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d1f10;
extern __int64 GameData_21ed088;
extern __int64 game_GameModeData_instance_;
extern __int64 game_map_kVariableEnemyScore;
extern __int64 game_map_kVariablePlayerScore;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212d670[3];
extern int GameData_2272244;
__int64 MapScoreInfo_Destructor(_QWORD* a1);
__int64 MapScoreInfo_19aa850(__int64 result);
__int64 MapScoreInfo_19aad80(__int64 result);
__int64 MapScoreInfo_Unknown5(__int64 result);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 MapScoreInfo_DeletingDestructor(__int64 result);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1840a20(void);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64* GameData_212d678[2];
extern __int64 GameData_21ca310;
__int64 MapScoreInfo_19aa980(__int64 a1, char a2);

__int64 MapScoreInfo_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;

  *a1 = game_map_MapScoreInfo_vtable;
  a1[1] = GameData_211f3e8;
  v2 = a1[3];
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = a1[4];
  a1[3] = 0;
  a1[4] = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 5);
  GameRoutine_155e140(a1 + 5);
  v4 = a1[17];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  GameRoutine_1564060(a1 + 11);
  GameRoutine_1563f90(a1 + 8, a1[9]);
  result = a1[6];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v6 = a1[4];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    result = std___1___shared_weak_count___release_weak(v6);
  }
  *a1 = GameData_211f480;
  if ((_QWORD*)GameData_21ed088 == a1) {
    GameData_21ed088 = 0;
    GameData_2272244 = 0;
  }
  return result;
}

__int64 MapScoreInfo_19aa850(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  unsigned int v4;

  if (GameData_21ca2f8 == 0) {
    return result;
  }
  v1 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
    if (result != 0 && *(_BYTE*)(result + 32) != 0) {
      result = GameRoutine_19aa980(v1, *(unsigned __int8*)(result + 32) == 2);
    }
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48),
          &game_map_kVariablePlayerScore);
      if (result != 0) {
        v2 = *(_DWORD*)(result + 32);
        v3 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_11;
        }
      }
      else {
        v2 = 0;
        v3 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_11;
        }
      }
      result = game_GameVariableTable_Find(*(_QWORD*)(v3 + 48),
                                           &game_map_kVariableEnemyScore);
      if (result != 0) {
        v4 = *(_DWORD*)(result + 32);
        if ((v2 & 0x80000000) != 0) {
          return result;
        }
        goto LABEL_12;
      }
    LABEL_11:
      v4 = 0;
      if ((v2 & 0x80000000) != 0) {
        return result;
      }
    LABEL_12:
      if (GameData_21ca2f8 != 0) {
        game_VariableManager_SetFlag(&game_map_kVariablePlayerScore, v2);
        if ((*(_BYTE*)(v1 + 144) & 1) == 0) {
          game_VariableManager_SetFlag(&game_map_kVariableEnemyScore, v4);
        }
        return MapScoreInfo_19aad80(v1);
      }
      return result;
    }
  }
  v2 = 0;
  goto LABEL_11;
}

__int64 MapScoreInfo_19aa980(__int64 a1, char a2)
{
  int v2;
  int v3;
  char v4;
  __int64 v6;
  __int64 result;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _BOOL4 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _BOOL4 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;

  v4 = a2 & 1;
  if (*GameData_212ce90[0] != 0) {
    if ((a2 & 1) != 0) {
      v6 = 2;
    }
    else {
      v6 = 1;
    }
    game_VariableManager_SetFlag(&GameData_21d1f10, v6);
  }
  *(_BYTE*)(a1 + 144) = v4;
  result = LayoutAccessor_155fbe0(a1 + 40, "L_IconFace_00");
  if (*(_QWORD*)(result + 16) != 0) {
    v8 = (__int64*)result;
    result = *(_QWORD*)(result + 8);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v9 = *v8;
        if (*v8 != 0) {
          v2 = *(unsigned __int8*)(v9 + 24);
          v10 = v9 + 152;
          if (v2 == 0) {
            v10 = 0;
          }
          v11 = v10 != v8[2];
        }
        else {
          v11 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v11) {
            goto LABEL_16;
          }
        }
        else {
          v13 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v13);
          if (v11) {
            goto LABEL_16;
          }
        }
        if ((v2 & 1) == 0) {
          goto LABEL_24;
        }
      LABEL_21:
        result = ui_LayoutAccessor_FindPane(v8, "Face");
        if (result != 0) {
          result = __dynamic_cast(result, GameData_212d670[0],
                                  GameData_212d678[0], 0);
          if (result != 0) {
            result = GameRoutine_1840a20();
          }
        }
        goto LABEL_24;
      }
    LABEL_16:
      v12 = v8[1];
      if (v12 == 0 || *(_QWORD*)(v12 + 8) == -1) {
        goto LABEL_24;
      }
      goto LABEL_21;
    }
  }
LABEL_24:
  if ((*(_BYTE*)(a1 + 144) & 1) == 0) {
    v30 = 6;
    result = game_UnitPool_GetFirst(&v30);
    if (result != 0) {
      v14 = *(_QWORD*)(result + 432);
      v15 = result;
      if (v14 == 0) {
        v14 = *(_QWORD*)(result + 440);
        if (v14 != 0) {
          v16 = *(unsigned __int8*)(v14 + 16);
          if (v16 <= 8) {
            v29 = 24LL * *(unsigned __int8*)(v14 + 16) + 556024;
            while (1) {
              if (v16 <= 1) {
                v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v29);
                if (v14 != 0) {
                  break;
                }
              }
              ++v16;
              v29 += 24;
              if (v16 == 9) {
                goto LABEL_29;
              }
            }
          }
          else {
          LABEL_29:
            v14 = 0;
          }
        }
      }
      v17 = game_g_shared_system_skills_ptr;
      while (1) {
      LABEL_32:
        v18 = v14;
        v19 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v19 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        if (*(_QWORD*)(v15 + 392) != v19 && (*(_BYTE*)(v15 + 418) & 8) == 0) {
          v31 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v17) & 0xFFF;
          if ((game_HasSkill(v15 + 1744, &v31) & 1) == 0) {
            v32 = *(int*)((char*)((int*)0x24LL) + v17) & 0xFFF;
            result = game_HasSkill(v15 + 1744, &v32);
            if ((result & 1) == 0) {
              goto LABEL_55;
            }
          }
        }
        result = LayoutAccessor_155fbe0(a1 + 40, "L_IconFace_01");
        if (*(_QWORD*)(result + 16) == 0) {
          goto LABEL_55;
        }
        v20 = (__int64*)result;
        result = *(_QWORD*)(result + 8);
        if (result == 0) {
          goto LABEL_55;
        }
        result = std___1___shared_weak_count_lock(result);
        if (result == 0) {
          break;
        }
        v21 = *v20;
        if (*v20 != 0) {
          v3 = *(unsigned __int8*)(v21 + 24);
          v22 = v21 + 152;
          if (v3 == 0) {
            v22 = 0;
          }
          v23 = v22 != v20[2];
        }
        else {
          v23 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v23) {
            break;
          }
        }
        else {
          v25 = result;
          (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
          result = std___1___shared_weak_count___release_weak(v25);
          if (v23) {
            break;
          }
        }
        if ((v3 & 1) != 0) {
        LABEL_53:
          result = ui_LayoutAccessor_FindPane(v20, "Face");
          if (result != 0) {
            result = __dynamic_cast(result, GameData_212d670[0],
                                    GameData_212d678[0], 0);
            if (result != 0) {
              return GameRoutine_1840740(result, 0, v15, 6, 1);
            }
          }
        }
      LABEL_55:
        if (v18 == 0) {
          return result;
        }
        v14 = *(_QWORD*)(v18 + 432);
        v15 = v18;
        if (v14 == 0) {
          v26 = *(_QWORD*)(v18 + 440);
          v15 = v18;
          if (v26 != 0) {
            v27 = *(unsigned __int8*)(v26 + 16);
            v14 = 0;
            v15 = v18;
            if (v27 <= 8) {
              v28 = 24LL * (unsigned int)v27 + 556024;
              while (1) {
                if (v27 <= 1) {
                  v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v28);
                  if (v14 != 0) {
                    break;
                  }
                }
                ++v27;
                v28 += 24;
                if (v27 == 9) {
                  v14 = 0;
                  v15 = v18;
                  goto LABEL_32;
                }
              }
              v15 = v18;
            }
          }
        }
      }
      v24 = v20[1];
      if (v24 == 0 || *(_QWORD*)(v24 + 8) == -1) {
        goto LABEL_55;
      }
      goto LABEL_53;
    }
  }
  return result;
}

__int64 MapScoreInfo_19aad80(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  const char* v4;

  if (*GameData_212ce90[0] != 0) {
    v1 = *(unsigned __int8*)(result + 144);
    v2 = result;
    v3 = result + 40;
    if (v1 != 0) {
      v4 = "Forces_1";
    }
    else {
      v4 = "Forces_2";
    }
    GameRoutine_1562680(v3, v4, 1.0);
    if (game_GameModeData_instance_ != 0) {
      game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                  &game_map_kVariablePlayerScore);
    }
    result = ui_LayoutAccessor_FindPane(v2 + 40, "T_Num_00");
    if (result != 0) {
      result = __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
      if (result != 0) {
        result = GameRoutine_156c910(result, "%d", 1);
      }
    }
    if ((*(_BYTE*)(v2 + 144) & 1) == 0) {
      if (game_GameModeData_instance_ != 0) {
        game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48),
            &game_map_kVariableEnemyScore);
      }
      result = ui_LayoutAccessor_FindPane(v2 + 40, "T_Num_01");
      if (result != 0) {
        result =
            __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
        if (result != 0) {
          return GameRoutine_156c910(result, "%d", 1);
        }
      }
    }
  }
  return result;
}

__int64 MapScoreInfo_Unknown5(__int64 result)
{
  __int64 v1;
  int v2;

  if (GameData_21ed088 == 0 || *(int*)(GameData_21ed088 + 16) <= 0) {
    if (GameData_21ca2f8 == 0) {
      return GameRoutine_155e830(result + 40, 1);
    }
    if (game_GameModeData_instance_ != 0) {
      v1 = result;
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
      if (result != 0) {
        v2 = *(unsigned __int8*)(result + 32);
        result = v1;
        if (v2 != 0) {
          return GameRoutine_155e830(result + 40, 1);
        }
      }
    }
  }
  return result;
}

__int64 MapScoreInfo_DeletingDestructor(__int64 result)
{
  __int64 v1;
  int v2;

  if (GameData_21ed088 == 0 || *(int*)(GameData_21ed088 + 16) <= 0) {
    if (GameData_21ca2f8 == 0) {
      return LayoutAccessor_155e830(result + 32, 1);
    }
    if (game_GameModeData_instance_ != 0) {
      v1 = result;
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1f10);
      if (result != 0) {
        v2 = *(unsigned __int8*)(result + 32);
        result = v1;
        if (v2 != 0) {
          return LayoutAccessor_155e830(result + 32, 1);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
