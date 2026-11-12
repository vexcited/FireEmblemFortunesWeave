#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1327400(void);
__int64 GameRoutine_13288f0(void);
__int64 GameRoutine_134c680(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_718280();
__int64 GameRoutine_7626c0(_QWORD);
__int64 GameRoutine_763c20(__int64, __int64);
__int64 GameRoutine_7657c0(_QWORD);
__int64 GameRoutine_767580(_QWORD, _QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_826e40(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_827070(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_99c360(_QWORD);
__int64 GameRoutine_99d840(_QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b86fb0(_QWORD, _QWORD);
__int64 GameRoutine_c44560(_QWORD, _QWORD);
__int64 GameRoutine_c72b30(void);
__int64 MapScoreInfo_19aa850(void);
__int64 Situation_763690(__int64);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_RandomSeed_RollPercent(_QWORD, float);
__int64 game_UnitPool_Count(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 game_map_BonusExpList_Deserialize(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a98a9f;
extern _UNKNOWN GameData_1a9c715;
extern _UNKNOWN GameData_1af1205;
extern __int64 (*GameData_1f95f68[])();
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64 GameData_212c638;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c9b48;
extern __int64 GameData_21c9b50;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_21cd130;
extern __int64 GameData_21d1e40;
extern __int64 GameData_21d1e50;
extern __int64 GameData_21d1e60;
extern __int64 GameData_21d1e70;
extern __int64 GameData_21d1e80;
extern __int64 GameData_21d1e90;
extern __int64 GameData_21d1ea0;
extern __int64 GameData_21d1eb0;
extern __int64 GameData_21d1ec0;
extern __int64 GameData_21d1ed0;
extern __int64 GameData_21d1f10;
extern __int64 GameData_21d1f40;
extern __int64 GameData_21d1f50;
extern __int64 GameData_21d1f60;
extern __int64 GameData_21d1f70;
extern __int64 GameData_21d1f90;
extern __int64 GameData_21d1fa0;
extern __int64 GameData_21d1fb8;
extern __int64 GameData_21d1fd0;
extern __int64 GameData_21ed088;
extern __int64 GameData_21f61c0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_map_g_gimmick_argument;
extern __int64 game_map_kVariableEnemyScore;
extern __int64 game_map_kVariablePlayerScore;
extern __int64 game_map_kVariableSituation1000;
extern __int64 game_map_kVariableSituation200;
extern __int64 game_map_kVariableSituation800;
extern __int64* GameData_212c790;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212dea8;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_1f96158[3];
extern int GameData_21d87f8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 Situation_763930(unsigned int a1, float a2);
bool Situation_763a00(__int64 a1);
__int64 Situation_763f30_alt1(__int64 a1) __asm__("Situation_763f30");
__int64 Situation_764060(__int64 a1, __int64 a2);
__int64 Situation_7641b0(__int64 a1);
__int64 Situation_7642e0();
__int64 Situation_7645e0(__int64 a1);
__int64 Situation_7646c0();
_QWORD* Situation_7647e0(__int64 a1, char a2);
__int64 Situation_764fc0_alt1(__int64 result) __asm__("Situation_764fc0");
__int64 Situation_7650b0(__int64 a1);
__int64 Situation_7651e0(__int64 a1, char a2);
bool Situation_7652c0();
__int64 Situation_7653d0();
__int64 Situation_7654a0(__int64 a1);
__int64 Situation_7656c0(__int64 a1);
__int64 Situation_765b20(__int64 a1);
__int64 Situation_Unknown7(__int64 a1, __int64 a2, int a3);
__int64 Situation_7671b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 BonusExpList_7ffec0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
extern char** msg_MessageManager_empty_text__ptr;
__int64 game_map_Situation_GetWinRuleName_lambda0_Invoke(__int64 a1,
                                                         __int64* a2,
                                                         unsigned int* a3);
__int64 game_map_Situation_GetLoseRuleName_lambda0_Invoke(__int64 a1,
                                                          __int64* a2,
                                                          unsigned int* a3);
__int64 game_map_Situation_EachBonusExpUnit_lambda0_Invoke_alt1(
    __int64 result,
    _QWORD* a2) __asm__("game_map_Situation_EachBonusExpUnit_lambda0_Invoke");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1abb945;
extern _UNKNOWN GameData_21d1ff8;
extern __int64 GameData_21d1fe8;
extern __int64 GameData_21d1ff0;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d9728;
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD) __asm__("GameRoutine_60a310");
__int64 Situation_763a80(__int64 a1, __int64 a2);
__int64 Situation_763c20(__int64 a1, __int64 a2);
void Situation_764490();
__int64 Situation_7657c0(__int64 a1);
__int64 Situation_7659e0(__int64 a1, __int64 a2);
__int64 game_map_Situation_EachBonusUnit_lambda0_Invoke(__int64 result,
                                                        __int64* a2);
__int64* GameRecord_99d840(__int64* result, unsigned __int8*);
__int64 BonusExpList_7ffec0_alt1(__int64*,
                                 __int64) __asm__("BonusExpList_7ffec0");
__int64 GameHr_99c360(__int64);
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
char* GameHr_7626c0(unsigned __int8*);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
char* Situation_763f30(__int64 a1);
void Situation_764fc0(__int64 a1);
__int64 game_map_Situation_EachBonusExpUnit_lambda0_Invoke(__int64 result,
                                                           __int64* a2);
__int64 game_map_Situation_GetMvpUnit_lambda0_Invoke(__int64 result,
                                                     __int64* a2);

__int64 Situation_763930(unsigned int a1, float a2)
{
  __int64 v2;
  __int64 v4;
  float v5;
  __int64 result;
  __int64 v7;
  __int64 v8;

  v2 = GameData_212c638;
  if (a2 <= 0.0) {
    a1 = 0;
  }
  v4 = *(_QWORD*)GameData_212c638;
  v5 = *(
      float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                              GameData_212c638 +
                                                          32LL) -
                                               8LL) +
                                    40LL) +
                         360LL) +
              76LL);
  GameRoutine_b86fb0(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                            8LL) +
                 40LL),
      a1);
  result = GameRoutine_c44560(
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 32) - 8LL) + 56LL), a1);
  v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 32) - 8LL) + 64LL);
  if (v7 != 0) {
    result = *(_QWORD*)(*(_QWORD*)(v7 + 96) + 296LL);
    if (result != 0) {
      result = GameRoutine_c72b30();
    }
  }
  v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 32LL) - 8LL) + 40LL);
  if (v5 != *(float*)(*(_QWORD*)(v8 + 360) + 76LL)) {
    *(_BYTE*)(v8 + 225) = 1;
  }
  return result;
}

bool Situation_763a00(__int64 a1)
{
  _BOOL4 v2;
  __int64 v3;
  __int64 v4;

  v2 = true;
  v3 = GameRoutine_820d50(1);
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (v4 != 0) {
      v2 = *(_DWORD*)(v4 + 32) == 0;
    }
  }
  return *(char*)(a1 + 28) < 0 && v2;
}

__int64 Situation_763a80(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v15;
  unsigned int v16;
  __int64 v17;

  LODWORD(v17) = 6;
  v3 = game_UnitPool_GetFirst(&v17);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 432);
    v5 = v3;
    if (v4 == 0) {
      v4 = *(_QWORD*)(v3 + 440);
      if (v4 != 0) {
        v6 = *(unsigned __int8*)(v4 + 16);
        if (v6 <= 8) {
          v15 = 24LL * *(unsigned __int8*)(v4 + 16) + 556024;
          while (1) {
            if (v6 <= 1) {
              v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v15);
              if (v4 != 0) {
                break;
              }
            }
            ++v6;
            v15 += 24;
            if (v6 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v4 = 0;
        }
      }
    }
    v7 = 0;
    v8 = game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_8:
      v9 = v4;
      LODWORD(v17) = *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + v8) & 0xFFF;
      if ((game_HasSkill(v5 + 1744, &v17) & 1) != 0) {
        v10 = *(_QWORD*)(a2 + 32);
        v17 = v5;
        v16 = v7;
        if (v10 == 0) {
          GameRoutine_60a310_alt1(0);
        }
        (*(void (**)(__int64, __int64*, unsigned int*))(*(_QWORD*)v10 + 48LL))(
            v10, &v17, &v16);
        ++v7;
      }
      if (v9 == 0) {
        break;
      }
      v4 = *(_QWORD*)(v9 + 432);
      v5 = v9;
      if (v4 == 0) {
        v11 = *(_QWORD*)(v9 + 440);
        v5 = v9;
        if (v11 != 0) {
          v12 = *(unsigned __int8*)(v11 + 16);
          v4 = 0;
          v5 = v9;
          if (v12 <= 8) {
            v13 = 24LL * (unsigned int)v12 + 556024;
            while (1) {
              if (v12 <= 1) {
                v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v13);
                if (v4 != 0) {
                  break;
                }
              }
              ++v12;
              v13 += 24;
              if (v12 == 9) {
                v4 = 0;
                v5 = v9;
                goto LABEL_8;
              }
            }
            v5 = v9;
          }
        }
      }
    }
  }
  else {
    return 0;
  }
  return v7;
}

__int64 Situation_763c20(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;

  LODWORD(v18) = 9;
  v3 = game_UnitPool_GetFirst(&v18);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 432);
    v5 = v3;
    if (v4 == 0) {
      v4 = *(_QWORD*)(v3 + 440);
      if (v4 != 0) {
        v6 = *(unsigned __int8*)(v4 + 16);
        if (v6 <= 8) {
          v16 = v6 - 2;
          while (1) {
            if (v16 == 0) {
              v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556072LL);
              if (v4 != 0) {
                break;
              }
            }
            if (++v16 == 7) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v4 = 0;
        }
      }
    }
    v7 = 0;
    v8 = game_g_shared_system_skills_ptr;
    while (1) {
    LABEL_8:
      v9 = v4;
      LODWORD(v18) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v8) & 0xFFF;
      if ((game_HasSkill(v5 + 1744, &v18) & 1) != 0) {
        goto LABEL_16;
      }
      LODWORD(v18) =
          *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + v8 + 4) & 0xFFF;
      if ((game_HasSkill(v5 + 1744, &v18) & 1) != 0) {
        goto LABEL_14;
      }
      v10 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x80) != 0) {
          goto LABEL_16;
        }
        v10 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      if (*(_QWORD*)(v5 + 392) == v10) {
      LABEL_14:
        v11 = *(_QWORD*)(a2 + 32);
        v18 = v5;
        v17 = v7;
        if (v11 == 0) {
          GameRoutine_60a310_alt1(0);
        }
        (*(void (**)(__int64, __int64*, unsigned int*))(*(_QWORD*)v11 + 48LL))(
            v11, &v18, &v17);
        ++v7;
      }
    LABEL_16:
      if (v9 == 0) {
        return v7;
      }
      v4 = *(_QWORD*)(v9 + 432);
      v5 = v9;
      if (v4 == 0) {
        v12 = *(_QWORD*)(v9 + 440);
        v5 = v9;
        if (v12 != 0) {
          v13 = *(unsigned __int8*)(v12 + 16);
          v4 = 0;
          v5 = v9;
          if (v13 <= 8) {
            v14 = v13 - 2;
            while (1) {
              if (v14 == 0) {
                v4 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556072LL);
                if (v4 != 0) {
                  break;
                }
              }
              if (++v14 == 7) {
                v4 = 0;
                v5 = v9;
                goto LABEL_8;
              }
            }
            v5 = v9;
          }
        }
      }
    }
  }
  return 0;
}

char* Situation_763f30(__int64 a1)
{
  char* result;
  int v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v6_;

  result = GameHr_7626c0((unsigned __int8*)(a1 + 168));
  if (result != nullptr) {
    return result;
  }
  v6_.v6[0] = GameData_1f95f68;
  v6_.v7 = v6_.v6;
  v2 = Situation_763c20(0, (__int64)v6_.v6);
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_7;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v3))((__int64)v6_.v7);
LABEL_7:
  if ((unsigned int)(v2 - 1) > 2 || *(v4 = GameData_1f96158[v2 - 1]) == 0) {
    v4 = "MID_LOSERULE_Annihilate";
  }
  v6_.v8 = -1;
  v6_.v9 = -1;
  v6_.v10 = -1;
  v6_.v11 = -1;
  v5 = *msg_MessageManager_instance__ptr[0];
  v6_.v12 = -1;
  v6_.v13 = -1;
  v6_.v14 = -1;
  v6_.v15 = -1;
  v6_.v16 = -1;
  v6_.v17 = -1;
  v6_.v18 = -1;
  v6_.v19 = -1;
  v6_.v6[0] = msg_TagSelector_vtable;
  v6_.v6[1] = 0xFFFF0001FFFF0000LL;
  v6_.v6[2] = 0xFFFF0004FFFF0002LL;
  v6_.v6[3] = 0xFFFF0006FFFF0005LL;
  v6_.v20 = 8;
  v6_.v7 = (_QWORD*)0xFFFF0008FFFF0007LL;
  return GameRoutine_a4dbe0_alt1(v5, v4, 0);
}

__int64 Situation_764060(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;

  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v16 = v3;
  v15 = 241;
  v4 = game_UnitPool_Find_6ead60(&v16, &v15);
  if (v4 != 0) {
    v5 = *(_QWORD*)(a2 + 32);
    if (v5 != 0) {
      v16 = v4;
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v16);
    }
    v6 = 1;
  }
  else {
    v6 = 0;
  }
  v7 = *(_QWORD*)(GameData_21ca310 + 56);
  v8 = *(_QWORD*)(v7 + 556000);
  if (v8 != 0) {
    do {
      v9 = *(_QWORD*)(v8 + 432);
      if (v8 != v4) {
        v10 = *(_QWORD*)(a2 + 32);
        if (v10 != 0) {
          v16 = v8;
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v10 + 48LL))(v10, &v16);
        }
        ++v6;
      }
      v8 = v9;
    } while (v9 != 0);
    v7 = *(_QWORD*)(GameData_21ca310 + 56);
  }
  v11 = *(_QWORD*)(v7 + 556096);
  while (v11 != 0) {
    v13 = v11;
    v11 = *(_QWORD*)(v11 + 432);
    if (v13 != v4 && (*(_BYTE*)(v13 + 416) & 0x30) != 0) {
      v14 = *(_QWORD*)(a2 + 32);
      if (v14 != 0) {
        v16 = v13;
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v14 + 48LL))(v14, &v16);
      }
      ++v6;
    }
  }
  return v6;
}

__int64 Situation_7641b0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned int v9;
  __int64 v10;
  bool v11;

  if (*(_BYTE*)(a1 + *(unsigned __int8*)(a1 + 24) + 16) != 1 ||
      *(_BYTE*)(a1 + 25) != 0) {
    return 0;
  }
  result = GameData_21cd108;
  if (GameData_21cd108 != 0) {
    v3 = GameData_21cd130;
    if (GameData_21cd130 == 0) {
      return 0;
    }
    v4 = GameData_21ca300;
    if (GameData_21ca300 == 0) {
      return 0;
    }
    if (*(_BYTE*)(GameData_21cd108 + 8) == 0 ||
        (result = game_UnitPool_Get(GameData_21cd108 + 8)) == 0) {
      if (*(_BYTE*)(v3 + 24) != 1) {
        return 0;
      }
      v5 = *(_QWORD*)(v3 + 48);
      result = 0;
      v6 = *(_DWORD*)(v5 + 8);
      if (*(unsigned __int8*)(v4 + 18) >
          (unsigned int)(unsigned __int8)(v6 - *(_BYTE*)(v4 + 16))) {
        v7 = *(_DWORD*)(v5 + 12);
        if (*(unsigned __int8*)(v4 + 19) >
            (unsigned int)(unsigned __int8)(v7 - *(_BYTE*)(v4 + 17))) {
          LODWORD(v8) = v6 + 32 * v7;
          v8 = (unsigned int)v8 >= 0x400 ? 0LL : (unsigned int)v8;
          v9 = *(unsigned __int8*)(*(_QWORD*)(v4 + 96) + v8 + 8);
          if (v9 == 0) {
            return 0;
          }
          v10 = *(_QWORD*)(GameData_21ca310 + 56) + 2224LL * v9;
          result = v10 - 2224;
          v11 = v9 > 0xFA || v10 == 2224;
          if (v11 || *(_QWORD*)(v10 - 1832) == 0) {
            return 0;
          }
        }
      }
    }
  }
  return result;
}

__int64 Situation_7642e0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;

  game_VariableManager_SetFlag(&GameData_21d1ea0, 0);
  game_VariableManager_SetFlag(&GameData_21d1eb0, 0);
  v9 = 6;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    v2 = result;
    if (v1 == 0) {
      v1 = *(_QWORD*)(result + 440);
      if (v1 != 0) {
        v3 = *(unsigned __int8*)(v1 + 16);
        if (v3 < 9) {
          v8 = 24LL * *(unsigned __int8*)(v1 + 16) + 556024;
          while (1) {
            if (v3 <= 1) {
              v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v8);
              if (v1 != 0) {
                break;
              }
            }
            ++v3;
            v8 += 24;
            if (v3 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v1 = 0;
        }
      }
    }
    while (1) {
    LABEL_8:
      v4 = v1;
      if (*(int*)(v2 + 592) >= 2) {
        result = game_VariableManager_SetFlag(&GameData_21d1ea0, 1);
      }
      if ((*(_WORD*)(v2 + 1872) & 0xFFF) != 0) {
        result = game_VariableManager_SetFlag(&GameData_21d1eb0, 1);
      }
      if (v4 == 0) {
        break;
      }
      v1 = *(_QWORD*)(v4 + 432);
      v2 = v4;
      if (v1 == 0) {
        v5 = *(_QWORD*)(v4 + 440);
        v2 = v4;
        if (v5 != 0) {
          v6 = *(unsigned __int8*)(v5 + 16);
          v1 = 0;
          v2 = v4;
          if (v6 <= 8) {
            v7 = 24LL * (unsigned int)v6 + 556024;
            while (1) {
              if (v6 <= 1) {
                v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v7);
                if (v1 != 0) {
                  break;
                }
              }
              ++v6;
              v7 += 24;
              if (v6 == 9) {
                v1 = 0;
                v2 = v4;
                goto LABEL_8;
              }
            }
            v2 = v4;
          }
        }
      }
    }
  }
  return result;
}

void Situation_764490()
{

#pragma clang fp contract(off)
  int v0;
  int v1;
  unsigned __int64 v2;
  __int128 v3;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d1ff8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21d1ff8) != 0) {
    GameData_21d1ff0 = (__int64)&GameData_1abb945;
    GameData_21d1fe8 = game_HashString_alt1((__int64)&GameData_1abb945);
    __cxa_guard_release(&GameData_21d1ff8);
  }
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v0 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v1 = 2)
           : (v1 = 3),
       (v1 & v0) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v3 = *(_OWORD*)(v2 + 208);
    }
    if (*((float*)&v3 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                        v2 + 160, *((float*)&v3 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_14:
      if (game_GameModeData_instance_ != 0) {
        game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&GameData_21d1fe8);
      }
    }
  }
}

__int64 Situation_7645e0(__int64 a1)
{
  int v1;
  int v2;
  int v3;
  unsigned int v4;
  int v5;
  unsigned int v6;

  v1 = *(unsigned __int16*)(a1 + 30);
  v2 = *(unsigned __int8*)(a1 + 32);
  v3 = *(unsigned __int8*)(a1 + 33);
  if (3600 * v1 + 60 * v2 + v3 >=
      3600 * *(unsigned __int16*)(a1 + 34) + 60 * *(unsigned __int8*)(a1 + 36) +
          (unsigned int)*(unsigned __int8*)(a1 + 37)) {
    v5 = -v3;
    v4 = GameData_21d87f8;
  }
  else {
    v4 = *(_DWORD*)(a1 + 34);
    v5 = -v3;
  }
  v6 = v5 + 3600 * ((unsigned __int16)v4 - v1) + HIBYTE(v4) +
       60 * (BYTE2(v4) - v2);
  if ((int)v6 < 1) {
    return 0;
  }
  else {
    return ((v6 / 0x3C -
             60 * ((unsigned int)((143165577 * (unsigned __int64)(v6 / 0x3C)) >>
                                  32) >>
                   1))
            << 16) |
           ((v6 % 0x3C) << 24) | (unsigned __int16)(v6 / 0xE10);
  }
}

__int64 Situation_7646c0()
{
  __int64 v0;
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 result;

  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v0 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   &GameData_21d1f70);
  if (v0 == 0) {
    return 0;
  }
  v1 = *(unsigned int*)(v0 + 32);
  if ((_DWORD)v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(GameData_21c99b0 + 136);
  if (v2 == 0 || *(_QWORD*)(GameData_21c99b0 + 152) == 0) {
    return 0;
  }
  v4 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v5 = *(unsigned int*)(v0 + 32);
    if (v2 <= v1) {
      v5 = (unsigned int)v1 % (unsigned int)v2;
    }
  }
  else {
    v5 = ((_DWORD)v2 - 1) & (unsigned int)v1;
  }
  v6 = *(__int64***)(*(_QWORD*)(GameData_21c99b0 + 128) + 8 * v5);
  if (v6 == nullptr) {
    return 0;
  }
  v7 = *v6;
  if (v7 == nullptr) {
    return 0;
  }
  if ((v2 & v4) == 0) {
    while (1) {
      v9 = v7[1];
      if (v9 == v1) {
        if (*((_DWORD*)v7 + 4) == (_DWORD)v1) {
          goto LABEL_28;
        }
      }
      else if ((v9 & v4) != v5) {
        return 0;
      }
      v7 = (__int64*)*v7;
      if (v7 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v8 = v7[1];
    if (v8 == v1) {
      break;
    }
    if (v8 >= v2) {
      v8 %= v2;
    }
    if (v8 != v5) {
      return 0;
    }
  LABEL_17:
    v7 = (__int64*)*v7;
    if (v7 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v7 + 4) != (_DWORD)v1) {
    goto LABEL_17;
  }

LABEL_28:
  result = v7[3];
  if (result == 0) {
    return 0;
  }
  return result;
}

_QWORD* Situation_7647e0(__int64 a1, char a2)
{
  _QWORD* result;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  char v11;
  int v12;
  __int64* v13;
  int* v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  __int64** v23;
  __int64** v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  int v35;
  __int64** v36;
  __int64** v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  _BOOL4 v41;
  int v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  __int64* v49;
  __int64* v50;
  _QWORD* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;

  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1e40,
                     &GameData_21d1fa0, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1e50,
                     &GameData_21d1fa0, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1e60,
                     &GameData_21d1fb8, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1ec0,
                     &GameData_21d1fa0, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1ed0,
                     &GameData_21d1fa0, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1f10,
                     &GameData_21d1fd0, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1f40,
                     &GameData_21d1fa0, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1f50,
                     &GameData_21d1fa0, 0, 1);
  GameRoutine_827070(game_GameModeData_instance_ + 40, 1, &GameData_21d1f60,
                     &GameData_21d1fa0, 0, 1);
  GameRoutine_826e40(game_GameModeData_instance_ + 40, 1,
                     &game_map_kVariablePlayerScore, 0, 0, 0, 99999, 0);
  GameRoutine_826e40(game_GameModeData_instance_ + 40, 1,
                     &game_map_kVariableEnemyScore, 0, 0, 0, 99999, 0);
  GameRoutine_826e40(game_GameModeData_instance_ + 40, 1, &GameData_21d1f70, 0,
                     0, 0, 99999, 0);
  GameRoutine_826e40(game_GameModeData_instance_ + 40, 1,
                     &game_map_g_gimmick_argument, 0, 0, 0, 99999, 0);
  result =
      (_QWORD*)GameRoutine_827070(game_GameModeData_instance_ + 40, 1,
                                  &GameData_21d1f90, &GameData_21d1fa0, 0, 1);
  v5 = GameData_21c9b48;
  for (i = GameData_21c9b50; v5 != i; v5 += 16) {
    result = (_QWORD*)GameRoutine_826e40(game_GameModeData_instance_ + 40, 1,
                                         v5, 0, 0, 0, 99999, 0);
  }
  if ((a2 & 1) == 0) {
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      *(_DWORD*)(a1 + 320) = 0;
      return result;
    }
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v8 == 0) {
      v14 = (int*)(a1 + 320);
      *(_DWORD*)(a1 + 320) = 0;
      v15 = *(_QWORD*)(v7 + 16);
      if (v15 != 0) {
      LABEL_68:
        *v14 = *(unsigned __int16*)(v15 + 136);
      }
    LABEL_69:
      if ((*(_BYTE*)(v7 + 92) & 2) == 0) {
        return result;
      }
      v47 = *(_QWORD*)(*GameData_212c790 + 8);
      v48 = *(_DWORD*)(v47 + 56);
      v49 = *(__int64**)(v47 + 8);
      v50 = *(__int64**)(v47 + 16);
      if (v48 < 0) {
        if (v49 != v50) {
          while (1) {
            v51 = (_QWORD*)*v49;
            if (*(_QWORD*)(*v49 + 96) == 0 && v51[69] == 0) {
              break;
            }
            if (++v49 == v50) {
              goto LABEL_76;
            }
          }
        LABEL_81:
          result = (_QWORD*)*v51;
          if (*v51 == 0) {
            return result;
          }
        LABEL_82:
          result = X8CALL_X0(_QWORD*, GameRoutine_134b980((void*)&v61, result));
          v53 = v61;
          v54 = v62;
          if (v61 != v62) {
            v55 = *v14;
            v56 = game_GameModeData_instance_;
            v57 = v61;
            do {
              v59 = *(_QWORD*)(*(_QWORD*)v57 + 96LL);
              if (v59 != 0) {
                if (v56 != 0) {
                  v58 = *(unsigned __int16*)(v59 + 134);
                  LODWORD(v59) = *(unsigned __int8*)(v59 + 133);
                  if (*(_DWORD*)(v56 + 60) == 3) {
                    LODWORD(v59) = v58;
                  }
                }
                else {
                  LODWORD(v59) = *(unsigned __int8*)(v59 + 133);
                }
              }
              v55 += v59;
              v57 += 8;
              *v14 = v55;
            } while (v57 != v54);
          }
          if (v53 != 0) {
            v62 = v53;
            v60 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v60 = 56;
            }
            return (_QWORD*)nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v53);
          }
          return result;
        }
      }
      else {
        while (v49 != v50) {
          v52 = *v49++;
          v51 = (_QWORD*)v52;
          if (*(_DWORD*)(v52 + 84) == v48) {
            goto LABEL_81;
          }
        }
      }
    LABEL_76:
      result = (_QWORD*)game_gmap_SpotMgr_GetCurrentSpot(result);
      if (result == nullptr) {
        return result;
      }
      goto LABEL_82;
    }
    v9 = *(_DWORD*)(v8 + 184);
    v10 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    v11 = (v9 & 8) != 0;
    v12 = (v9 & 2) != 0;
    if ((v10 & 2) == 0) {
      if ((v10 & 0x40) != 0) {
        v13 = &GameData_21d1e80;
      }
      else {
        v13 = &GameData_21d1e70;
      }
    LABEL_57:
      game_VariableManager_SetFlag(v13, 1);
      v28 = *(_DWORD*)(a1 + 20);
      v29 = v28 & 0xFFFFF7FF;
      if ((v9 & 4) == 0) {
        v42 = 0;
        goto LABEL_60;
      }
    LABEL_59:
      v42 = 2048;
    LABEL_60:
      *(_DWORD*)(a1 + 20) = v42 | v29;
      game_VariableManager_SetFlag(&game_map_kVariableSituation1000,
                                   (v28 & 0x1000) != 0);
      game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                                   (*(_DWORD*)(a1 + 20) & 0x800) != 0);
      game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                                   (*(_DWORD*)(a1 + 20) & 0x200) != 0);
      Situation_763690(a1);
      if ((v11 & 1) != 0) {
        v43 = 4096;
      }
      else {
        v43 = 0;
      }
      *(_DWORD*)(a1 + 20) = *(_DWORD*)(a1 + 20) & 0xFFFFEFFF | v43;
      game_VariableManager_SetFlag(&game_map_kVariableSituation1000, v43 >> 12);
      game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                                   (*(_DWORD*)(a1 + 20) & 0x800) != 0);
      game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                                   (*(_DWORD*)(a1 + 20) & 0x200) != 0);
      Situation_763690(a1);
      v44 = *(_DWORD*)(a1 + 20);
      if (v12 != 0) {
        v45 = 512;
      }
      else {
        v45 = 0;
      }
      *(_DWORD*)(a1 + 20) = v44 & 0xFFFFFDFF | v45;
      game_VariableManager_SetFlag(&game_map_kVariableSituation1000,
                                   (v44 & 0x1000) != 0);
      game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                                   (*(_DWORD*)(a1 + 20) & 0x800) != 0);
      game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                                   (*(_DWORD*)(a1 + 20) & 0x200) != 0);
      result = (_QWORD*)Situation_763690(a1);
      v46 = *(_DWORD*)(a1 + 20);
      *(_DWORD*)(a1 + 320) = 0;
      *(_DWORD*)(a1 + 20) = ((_WORD)v9 << 8) & 0x2000 |
                            (((v9 & 0x100) != 0) << 10) | v46 & 0xFFFFDBFF;
      v7 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        return result;
      }
      v14 = (int*)(a1 + 320);
      v15 = *(_QWORD*)(game_GameModeData_instance_ + 16);
      if (v15 != 0) {
        goto LABEL_68;
      }
      goto LABEL_69;
    }
    if (GameRoutine_134c680(result) != 0) {
      v16 = GameRoutine_1327400();
      v11 = v16 | ((v9 & 8) != 0);
      if ((v9 & 6) != 0 || (v16 & 1) != 0) {
        goto LABEL_56;
      }
    }
    else if ((v9 & 6) != 0) {
    LABEL_56:
      v13 = &GameData_21d1e90;
      goto LABEL_57;
    }
    v17 = GameRoutine_820d50(19);
    if (game_GameModeData_instance_ != 0 &&
            (v18 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), v17)) != 0 &&
            *(_DWORD*)(v18 + 32) != 0 ||
        (v19 = game_HashString(&GameData_1a9c715),
         v20 = *(unsigned __int8*)(v8 + 188), *(_BYTE*)(v8 + 188) == 0)) {
    LABEL_36:
      v30 = GameRoutine_820d50(18);
      if (game_GameModeData_instance_ != 0) {
        v31 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v30);
        if (v31 != 0 && *(_DWORD*)(v31 + 32) != 0) {
          goto LABEL_56;
        }
      }
      v32 = game_HashString(&GameData_1af1205);
      v33 = *(unsigned __int8*)(v8 + 189);
      if (v33 == 0) {
        goto LABEL_56;
      }
      v34 = *(_QWORD*)(*GameData_212c790 + 8);
      v35 = *(_DWORD*)(v34 + 56);
      v36 = *(__int64***)(v34 + 8);
      v37 = *(__int64***)(v34 + 16);
      if (v35 < 0) {
        for (; v36 != v37; ++v36) {
          v38 = *v36;
          if ((*v36)[12] == 0 && v38[69] == 0) {
            goto LABEL_50;
          }
        }
      }
      else if (v36 != v37) {
        while (1) {
          v39 = *v36++;
          v38 = v39;
          if (*((_DWORD*)v39 + 21) == v35) {
            break;
          }
          if (v36 == v37) {
            goto LABEL_46;
          }
        }
      LABEL_50:
        v40 = *v38;
      LABEL_51:
        v41 = false;
        if (v40 != 0) {
          GameRoutine_13288f0();
          if ((game_RandomSeed_RollPercent(&v61, (float)v33) & 1) != 0) {
            v41 = true;
          }
        }
        v12 = v41 || (v9 & 2) != 0;
        goto LABEL_56;
      }
    LABEL_46:
      v40 = game_gmap_SpotMgr_GetCurrentSpot(v32);
      goto LABEL_51;
    }
    v21 = *(_QWORD*)(*GameData_212c790 + 8);
    v22 = *(_DWORD*)(v21 + 56);
    v23 = *(__int64***)(v21 + 8);
    v24 = *(__int64***)(v21 + 16);
    if (v22 < 0) {
      for (; v23 != v24; ++v23) {
        v25 = *v23;
        if ((*v23)[12] == 0 && v25[69] == 0) {
          goto LABEL_32;
        }
      }
    }
    else if (v23 != v24) {
      while (1) {
        v26 = *v23++;
        v25 = v26;
        if (*((_DWORD*)v26 + 21) == v22) {
          break;
        }
        if (v23 == v24) {
          goto LABEL_28;
        }
      }
    LABEL_32:
      v27 = *v25;
      goto LABEL_33;
    }
  LABEL_28:
    v27 = game_gmap_SpotMgr_GetCurrentSpot(v19);
  LABEL_33:
    if (v27 != 0) {
      GameRoutine_13288f0();
      if ((game_RandomSeed_RollPercent(&v61, (float)v20) & 1) != 0) {
        game_VariableManager_SetFlag(&GameData_21d1e90, 1);
        v28 = *(_DWORD*)(a1 + 20);
        v29 = v28 & 0xFFFFF7FF;
        goto LABEL_59;
      }
    }
    goto LABEL_36;
  }
  return result;
}

void Situation_764fc0(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v3;
  struct {
    unsigned __int64 v4[6];
    __int64* v5;
    __int64 v6;
    __int64 v7;
  } v4_;
  __int64 v8[3];

  *(_DWORD*)(a1 + 34) = GameData_21d87f8;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    if ((v1 & 2) != 0) {
      v4_.v4[1] = (unsigned __int64)&GameData_1a98a9f;
      v4_.v4[0] = game_HashString_alt1((__int64)&GameData_1a98a9f);
      GameRoutine_9b11a0_alt1(&GameData_21f61c0, v4_.v4, 1);
      return;
    }
    if ((v1 & 0x40) != 0) {
      return;
    }
  }
  *(_DWORD*)((char*)v4_.v4 + 6) = 0;
  v4_.v7 = 0;
  memset(v8, 0, 13);
  v2 = GameData_212dea8 + 2;
  v4_.v5 = GameData_212dea8 + 2;
  v4_.v6 = 0;
  GameHr_99c360((__int64)v4_.v4);
  GameRecord_99d840(*(__int64**)(game_GameModeData_instance_ + 112),
                    (unsigned __int8*)v4_.v4);
  v4_.v5 = v2;
  if ((v4_.v6 & 1) != 0 && v8[0] != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v8[0]);
  }
}

__int64 Situation_7650b0(__int64 a1)
{
  __int64 result;
  int v3;
  __int64* v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  int v11;
  int v12;

  *(_BYTE*)(a1 + 28) = -1;
  result = game_VariableManager_SetFlag(&GameData_21d1f70, 0);
  v3 = *(char*)(a1 + 39);
  if (*(_BYTE*)(a1 + 39) != 0) {
    if (v3 < 1 || *(unsigned __int16*)(a1 + 26) < v3) {
      if ((v3 & 0x80) == 0) {
        goto LABEL_16;
      }
    }
    else {
      v6 = *(unsigned __int8*)(a1 + 24);
      if (v6 == 2) {
        goto LABEL_25;
      }
      if (v6 != 1) {
        goto LABEL_16;
      }
      v11 = 4;
      result = game_UnitPool_Count(&v11);
      if ((_DWORD)result == 0) {
      LABEL_25:
        v5 = &GameData_21d1e40;
        return game_VariableManager_SetFlag(v5, 1);
      }
      LOBYTE(v3) = *(_BYTE*)(a1 + 39);
      if ((v3 & 0x80) == 0) {
        goto LABEL_16;
      }
    }
    if (*(unsigned __int16*)(a1 + 26) >= (unsigned int)-(char)v3) {
      if (*(_BYTE*)(a1 + 24) == 3 ||
          (v12 = 8, (_DWORD)(result = game_UnitPool_Count(&v12)) == 0)) {
        v5 = &GameData_21d1e50;
        return game_VariableManager_SetFlag(v5, 1);
      }
    }
  }

LABEL_16:
  v7 = (unsigned __int8)(*(_BYTE*)(a1 + 24))++ + 1;
  if (v7 == 4) {
    v8 = *(unsigned __int16*)(a1 + 26);
    if (v8 >= 0x3E7) {
      result = game_VariableManager_SetFlag(&GameData_21d1e50, 1);
      v8 = *(unsigned __int16*)(a1 + 26);
    }
    if (v8 >= 0x3E6) {
      v9 = 998;
    }
    else {
      v9 = v8;
    }
    v10 = v9 + 1;
    if (v10 != v8) {
      *(_WORD*)(a1 + 26) = v10;
    }
    *(_BYTE*)(a1 + 24) = 0;
  }
  return result;
}

__int64 Situation_7651e0(__int64 a1, char a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v5;
  int v7;

  v2 = *GameData_212ce90[0];
  v3 = *(_DWORD*)(*GameData_212ce90[0] + 20);
  if ((a2 & 1) != ((v3 & 0x800) != 0)) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3) {
      return GameRoutine_767580(a1, a2 & 1);
    }
    v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v5 = (v4 & 8) != 0 ? 2 : 3;
    if ((v5 & v4) != 0) {
      return GameRoutine_767580(a1, a2 & 1);
    }
    if ((a2 & 1) != 0) {
      v7 = 2048;
    }
    else {
      v7 = 0;
    }
    *(_DWORD*)(v2 + 20) = v3 & 0xFFFFF7FF | v7;
    game_VariableManager_SetFlag(&game_map_kVariableSituation1000,
                                 (v3 & 0x1000) != 0);
    game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                                 (*(_DWORD*)(v2 + 20) & 0x800) != 0);
    game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                                 (*(_DWORD*)(v2 + 20) & 0x200) != 0);
    Situation_763690(v2);
  }
  return 0;
}

bool Situation_7652c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _BOOL8 result;
  __int64 v5;
  __int64 v6;

  result = false;
  if (game_GameModeData_instance_ != 0 &&
      ((v0 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e50)) !=
               0 &&
           *(_DWORD*)(v0 + 32) != 0 ||
       game_GameModeData_instance_ != 0 &&
           ((v5 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48),
                 &GameData_21d1e50)) == 0 ||
            *(_DWORD*)(v5 + 32) == 0) &&
           game_GameModeData_instance_ != 0 &&
           (v6 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                &GameData_21d1e40)) != 0 &&
           *(_DWORD*)(v6 + 32) != 0)) {
    if (game_GameModeData_instance_ == 0) {
      return true;
    }
    v1 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e50);
    if (v1 != 0 && *(_DWORD*)(v1 + 32) != 0) {
      return true;
    }
    if (game_GameModeData_instance_ == 0) {
      return true;
    }
    v2 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e40);
    if (v2 == 0) {
      return true;
    }
    if (*(_DWORD*)(v2 + 32) == 0) {
      return true;
    }
    if (game_GameModeData_instance_ == 0) {
      return true;
    }
    v3 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e60);
    if (v3 == 0 || *(_DWORD*)(v3 + 32) == 0) {
      return true;
    }
  }
  return result;
}

__int64 Situation_7653d0()
{
  __int64 v0;
  __int64 result;

  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v0 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   &GameData_21d1e50);
  if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
    return 0;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e40);
  if (result == 0) {
    return result;
  }
  if (*(_DWORD*)(result + 32) == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e60);
  if (result == 0) {
    return result;
  }
  if (*(_DWORD*)(result + 32) == 0 || game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e60);
  if (result != 0) {
    return *(_DWORD*)(result + 32) > 1;
  }
  return result;
}

__int64 Situation_7654a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v15;
  int v16;
  int v17;
  __int64 v18;

  LODWORD(v18) = 1;
  v2 = game_UnitPool_GetFirst(&v18);
  if (v2 == 0) {
    return 1;
  }
  v3 = *(_QWORD*)(v2 + 432);
  if (v3 == 0) {
    v9 = *(_QWORD*)(v2 + 440);
    if (v9 == 0 || (unsigned int)(v10 = *(unsigned __int8*)(v9 + 16)) > 8) {
    LABEL_17:
      if ((*(_DWORD*)(v2 + 416) & 8) != 0) {
        return 1;
      }
      goto LABEL_18;
    }
    while (1) {
      v16 = v10 + 1;
      if ((((unsigned int)v18 >> v10) & 2) != 0) {
        v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                        24LL * (unsigned __int8)(v10 + 1) + 556000);
        if (v3 != 0) {
          break;
        }
      }
      v10 = v16;
      if (v16 == 9) {
        goto LABEL_17;
      }
    }
  }
  v4 = (*(_DWORD*)(v2 + 416) & 8) == 0;
  while (1) {
    v5 = *(_QWORD*)(v3 + 432);
    if (v5 == 0) {
      v6 = *(_QWORD*)(v3 + 440);
      if (v6 == 0) {
        break;
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        break;
      }
      while (1) {
        v8 = v7 + 1;
        if ((((unsigned int)v18 >> v7) & 2) != 0) {
          v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v5 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          goto LABEL_13;
        }
      }
    }
    v4 += (*(_DWORD*)(v3 + 416) & 8) == 0;
    v3 = v5;
  }

LABEL_13:
  if (((*(_DWORD*)(v3 + 416) & 8) == 0) + v4 == 0) {
    return 1;
  }

LABEL_18:
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v18 = v11;
  v17 = 241;
  v12 = game_UnitPool_Find_6ead60(&v18, &v17);
  if (v12 != 0 && (game_GameModeData_instance_ == 0 ||
                   (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x80) == 0)) {
    if ((*(_BYTE*)(v12 + 416) & 8) != 0) {
      return 1;
    }
    v13 = *(_QWORD*)(v12 + 440);
    if (v13 != 0 && *(_BYTE*)(v13 + 16) == 5) {
      return 1;
    }
  }
  if ((GameRoutine_718280() & 1) != 0) {
    return 1;
  }
  v15 = *(char*)(a1 + 38);
  if ((v15 < 0 || (int)Situation_7656c0(0) > v15) &&
      ((*(_BYTE*)(a1 + 20) & 4) == 0 ||
       (unsigned int)GameRoutine_7657c0(0) != 0)) {
    return 0;
  }
  else {
    return 2;
  }
}

__int64 Situation_7656c0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  int v3;
  unsigned int v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  bool v13;

  v1 = *(_QWORD*)(GameData_21ca310 + 56);
  v2 = (_QWORD*)(v1 + 552960);
  v3 = *(unsigned __int8*)(v1 + 556016);
  if (*(_BYTE*)(v1 + 556016) == 0 || v3 == 3) {
    v5 = 0;
  }
  else {
    v8 = *(_QWORD*)(v1 + 556000);
    if (v8 != 0) {
      v5 = 0;
      do {
        v9 = (*(_BYTE*)(v8 + 416) & 8) != 0 || v8 == a1;
        v8 = *(_QWORD*)(v8 + 432);
        if (!v9) {
          ++v5;
        }
      } while (v8 != 0);
      if (v3 == 1) {
        goto LABEL_27;
      }
    }
    else {
      v5 = 0;
      if (v3 == 1) {
        goto LABEL_27;
      }
    }
  }
  v6 = v2[383];
  while (v6 != 0) {
    v7 = (*(_BYTE*)(v6 + 416) & 8) != 0 || v6 == a1;
    v6 = *(_QWORD*)(v6 + 432);
    if (!v7) {
      ++v5;
    }
  }
  if (v3 == 2) {
    goto LABEL_36;
  }

LABEL_27:
  v10 = v2[386];
  while (v10 != 0) {
    v11 = (*(_BYTE*)(v10 + 416) & 8) != 0 || v10 == a1;
    v10 = *(_QWORD*)(v10 + 432);
    if (!v11) {
      ++v5;
    }
  }
  if (v3 != 0 && v3 != 3) {
  LABEL_36:
    v12 = v2[389];
    while (v12 != 0) {
      v13 = (*(_BYTE*)(v12 + 416) & 8) != 0 || v12 == a1;
      v12 = *(_QWORD*)(v12 + 432);
      if (!v13) {
        ++v5;
      }
    }
  }
  return v5;
}

__int64 Situation_7657c0(__int64 a1)
{
  __int64 v2;
  int v3;
  bool v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 i;
  int v13;

  v2 = *(_QWORD*)(GameData_21ca310 + 56);
  v3 = *(unsigned __int8*)(v2 + 556016);
  v4 = *(_BYTE*)(v2 + 556016) == 0 || v3 == 3;
  if (v4 || (v6 = *(_QWORD*)(v2 + 556000)) == 0) {
    v5 = 0;
    if (v3 == 1) {
      goto LABEL_21;
    }
  }
  else {
    v5 = 0;
    v7 = game_g_shared_system_skills_ptr;
    do {
      if ((*(_BYTE*)(v6 + 416) & 8) == 0) {
        v13 = *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + v7) & 0xFFF;
        v5 += (v6 != a1) & (unsigned int)game_HasSkill_alt1(
                               (_QWORD*)(v6 + 1744), (unsigned int*)&v13);
      }
      v6 = *(_QWORD*)(v6 + 432);
    } while (v6 != 0);
    v2 = *(_QWORD*)(GameData_21ca310 + 56);
    v3 = *(unsigned __int8*)(v2 + 556016);
    if (v3 == 1) {
      goto LABEL_21;
    }
  }
  v8 = *(_QWORD*)(v2 + 556024);
  if (v8 != 0) {
    do {
      if ((*(_BYTE*)(v8 + 416) & 8) == 0) {
        v13 = GameData_21d9728 & 0xFFF;
        v5 += (v8 != a1) & (unsigned int)game_HasSkill_alt1(
                               (_QWORD*)(v8 + 1744), (unsigned int*)&v13);
      }
      v8 = *(_QWORD*)(v8 + 432);
    } while (v8 != 0);
    v2 = *(_QWORD*)(GameData_21ca310 + 56);
    v3 = *(unsigned __int8*)(v2 + 556016);
  }
  if (v3 == 2) {
    goto LABEL_31;
  }
LABEL_21:
  v9 = *(_QWORD*)(v2 + 556048);
  if (v9 != 0) {
    do {
      if ((*(_BYTE*)(v9 + 416) & 8) == 0) {
        v13 = GameData_21d9728 & 0xFFF;
        v5 += (v9 != a1) & (unsigned int)game_HasSkill_alt1(
                               (_QWORD*)(v9 + 1744), (unsigned int*)&v13);
      }
      v9 = *(_QWORD*)(v9 + 432);
    } while (v9 != 0);
    v2 = *(_QWORD*)(GameData_21ca310 + 56);
    v3 = *(unsigned __int8*)(v2 + 556016);
  }
  if (v3 != 0 && v3 != 3) {
  LABEL_31:
    for (i = *(_QWORD*)(v2 + 556072); i != 0; i = *(_QWORD*)(i + 432)) {
      if ((*(_BYTE*)(i + 416) & 8) == 0) {
        v13 = GameData_21d9728 & 0xFFF;
        v5 += (i != a1) & (unsigned int)game_HasSkill_alt1((_QWORD*)(i + 1744),
                                                           (unsigned int*)&v13);
      }
    }
  }
  return v5;
}

__int64 Situation_7659e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  int v10;

  if (a2 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a2 + 440);
  if (v2 != 0) {
    v4 = *(unsigned __int8*)(v2 + 16);
    if (v4 == 3) {
      goto LABEL_9;
    }
    if (v4 == 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
      if (v5 == 0) {
        return 1;
      }
      v6 = 1;
      do {
        v5 = *(_QWORD*)(v5 + 432);
        --v6;
      } while (v5 != 0);
      if (v6 == 0) {
        return 1;
      }
    LABEL_9:
      v7 = game_g_shared_system_skills_ptr;
      v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill_alt1((_QWORD*)(a2 + 1744), (unsigned int*)&v10) & 1) ==
          0) {
        v10 = *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) + v7 + 4) & 0xFFF;
        if ((game_HasSkill_alt1((_QWORD*)(a2 + 1744), (unsigned int*)&v10) &
             1) != 0) {
          return 1;
        }
        v8 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_14;
        }
        if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x80) == 0) {
          v8 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        LABEL_14:
          if (*(_QWORD*)(a2 + 392) == v8) {
            return 1;
          }
        }
      }
      return 0;
    }
  }
  if (*(_BYTE*)(a2 + 496) != 0) {
    return 0;
  }
  v10 = *(_DWORD*)((_BYTE*)(*(__int64 (*)[2])0x28LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a2 + 1744), (unsigned int*)&v10) & 1) !=
      0) {
    if ((unsigned int)Situation_7657c0(a2) != 0) {
      return 0;
    }
  }
  else if ((unsigned int)Situation_7656c0(a2) != 0) {
    return 0;
  }
  return 2;
}

__int64 Situation_765b20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;

  if (game_GameModeData_instance_ == 0 ||
      ((v2 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e50)) ==
           0 ||
       *(_DWORD*)(v2 + 32) == 0) &&
          (game_GameModeData_instance_ == 0 ||
           (v3 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                &GameData_21d1e50)) != 0 &&
               *(_DWORD*)(v3 + 32) != 0 ||
           game_GameModeData_instance_ == 0 ||
           (v4 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48),
                &GameData_21d1e40)) == 0 ||
           *(_DWORD*)(v4 + 32) == 0)) {
    v5 = (unsigned __int8)Situation_7654a0(a1);
    if (v5 == 1) {
      v6 = &GameData_21d1e50;
      goto LABEL_18;
    }
    if (v5 == 2) {
      v6 = &GameData_21d1e40;
    LABEL_18:
      v8 = 1;
      game_VariableManager_SetFlag(v6, 1);
      return v8;
    }
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v7 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   &GameData_21d1e50);
  if (v7 == 0 || *(_DWORD*)(v7 + 32) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v9 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e50);
      if ((v9 == 0 || *(_DWORD*)(v9 + 32) == 0) &&
          game_GameModeData_instance_ != 0) {
        v10 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21d1e40);
        if (v10 != 0) {
          return *(_DWORD*)(v10 + 32) != 0;
        }
      }
    }
    return 0;
  }
  return 1;
}

__int64 Situation_Unknown7(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int16 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  __int64 v55;
  __int16 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int16 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int16 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  __int64 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int16 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int16 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  int v102;
  __int64 v103;
  int v104;
  __int64 v105;
  __int64 v106;
  __int16 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  int v111;
  __int64 v112;
  int v113;
  __int64 v114;
  __int64 v115;
  __int16 v116;
  __int16 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int16 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  int v127;
  int v128;
  int v129;

  v3 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  *(_BYTE*)(a1 + 16) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3);
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(a1 + 17) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7);
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(a1 + 18) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(a1 + 19) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  v11 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  v12 = *(unsigned __int8*)(v11 + v10);
  *(_DWORD*)(a2 + 20) = v10 + 2;
  v13 = v12 | (*(unsigned __int8*)(v11 + v10 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v10 + 3;
  v14 = *(unsigned __int8*)(v11 + v10 + 2);
  *(_DWORD*)(a2 + 20) = v10 + 4;
  *(_DWORD*)(a1 + 20) =
      v13 | (v14 << 16) | (*(unsigned __int8*)(v11 + v10 + 3) << 24);
  v15 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v15 + 1;
  *(_BYTE*)(a1 + 24) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15);
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(a1 + 25) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16);
  v17 = *(int*)(a2 + 20);
  v18 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  LOWORD(v12) = *(unsigned __int8*)(v18 + v17);
  *(_DWORD*)(a2 + 20) = v17 + 2;
  *(_WORD*)(a1 + 26) = v12 | (*(unsigned __int8*)(v18 + v17 + 1) << 8);
  if ((unsigned int)(a3 - 1) <= 4) {
    *(_DWORD*)(a2 + 20) += 2;
  }
  if (a3 <= 3) {
    *(_BYTE*)(a1 + 28) = -1;
    v28 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v28 + 1;
    *(_BYTE*)(a1 + 38) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28);
    if (a3 == 3) {
      v29 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v29 + 1;
      *(_BYTE*)(a1 + 39) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29);
    }
  }
  else {
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(a1 + 28) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19);
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(a1 + 38) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20);
    v21 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(a1 + 39) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21);
    if ((unsigned int)a3 >= 0xC) {
      v22 = *(int*)(a2 + 20);
      v23 = *(_QWORD*)(a2 + 8);
      v24 = v22 + 1;
      *(_DWORD*)(a2 + 20) = v22 + 1;
      v25 = *(unsigned __int8*)(v23 + v22);
      v26 = v22 + 2;
      *(_DWORD*)(a2 + 20) = v26;
      v27 = v25 | (*(unsigned __int8*)(v23 + v24) << 8);
      if (v27 != 0) {
        *(_DWORD*)(a2 + 20) = v26 + v27;
        GameRoutine_60a020(a1 + 40, v23 + v26);
      }
      else if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
        **(_BYTE**)(a1 + 56) = 0;
        *(_QWORD*)(a1 + 48) = 0;
      }
      else {
        *(_WORD*)(a1 + 40) = 0;
      }
      v39 = *(int*)(a2 + 20);
      v40 = *(_QWORD*)(a2 + 8);
      v41 = v39 + 1;
      *(_DWORD*)(a2 + 20) = v39 + 1;
      v42 = *(unsigned __int8*)(v40 + v39);
      v43 = v39 + 2;
      *(_DWORD*)(a2 + 20) = v43;
      v44 = v42 | (*(unsigned __int8*)(v40 + v41) << 8);
      if (v44 != 0) {
        *(_DWORD*)(a2 + 20) = v43 + v44;
        GameRoutine_60a020(a1 + 64, v40 + v43);
      }
      else if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
        **(_BYTE**)(a1 + 80) = 0;
        *(_QWORD*)(a1 + 72) = 0;
      }
      else {
        *(_WORD*)(a1 + 64) = 0;
      }
      v45 = *(int*)(a2 + 20);
      v46 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v45 + 1;
      v47 = *(unsigned __int8*)(v46 + v45);
      *(_DWORD*)(a2 + 20) = v45 + 2;
      *(_WORD*)(a1 + 160) = v47 | (*(unsigned __int8*)(v46 + v45 + 1) << 8);
      v48 = *(int*)(a2 + 20);
      v49 = *(_QWORD*)(a2 + 8);
      v50 = v48 + 1;
      *(_DWORD*)(a2 + 20) = v48 + 1;
      v51 = *(unsigned __int8*)(v49 + v48);
      v52 = v48 + 2;
      *(_DWORD*)(a2 + 20) = v52;
      v53 = v51 | (*(unsigned __int8*)(v49 + v50) << 8);
      if (v53 != 0) {
        *(_DWORD*)(a2 + 20) = v52 + v53;
        GameRoutine_60a020(a1 + 88, v49 + v52);
      }
      else if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
        **(_BYTE**)(a1 + 104) = 0;
        *(_QWORD*)(a1 + 96) = 0;
      }
      else {
        *(_WORD*)(a1 + 88) = 0;
      }
      v54 = *(int*)(a2 + 20);
      v55 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v54 + 1;
      v56 = *(unsigned __int8*)(v55 + v54);
      *(_DWORD*)(a2 + 20) = v54 + 2;
      *(_WORD*)(a1 + 162) = v56 | (*(unsigned __int8*)(v55 + v54 + 1) << 8);
      v57 = *(int*)(a2 + 20);
      v58 = *(_QWORD*)(a2 + 8);
      v59 = v57 + 1;
      *(_DWORD*)(a2 + 20) = v57 + 1;
      v60 = *(unsigned __int8*)(v58 + v57);
      v61 = v57 + 2;
      *(_DWORD*)(a2 + 20) = v61;
      v62 = v60 | (*(unsigned __int8*)(v58 + v59) << 8);
      if (v62 != 0) {
        *(_DWORD*)(a2 + 20) = v61 + v62;
        GameRoutine_60a020(a1 + 112, v58 + v61);
      }
      else if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
        **(_BYTE**)(a1 + 128) = 0;
        *(_QWORD*)(a1 + 120) = 0;
      }
      else {
        *(_WORD*)(a1 + 112) = 0;
      }
      v63 = *(int*)(a2 + 20);
      v64 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v63 + 1;
      v65 = *(unsigned __int8*)(v64 + v63);
      *(_DWORD*)(a2 + 20) = v63 + 2;
      *(_WORD*)(a1 + 164) = v65 | (*(unsigned __int8*)(v64 + v63 + 1) << 8);
      v66 = *(int*)(a2 + 20);
      v67 = *(_QWORD*)(a2 + 8);
      v68 = v66 + 1;
      *(_DWORD*)(a2 + 20) = v66 + 1;
      v69 = *(unsigned __int8*)(v67 + v66);
      v70 = v66 + 2;
      *(_DWORD*)(a2 + 20) = v70;
      v71 = v69 | (*(unsigned __int8*)(v67 + v68) << 8);
      if (v71 != 0) {
        *(_DWORD*)(a2 + 20) = v70 + v71;
        GameRoutine_60a020(a1 + 136, v67 + v70);
      }
      else if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
        **(_BYTE**)(a1 + 152) = 0;
        *(_QWORD*)(a1 + 144) = 0;
      }
      else {
        *(_WORD*)(a1 + 136) = 0;
      }
      v72 = *(int*)(a2 + 20);
      v73 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v72 + 1;
      v74 = *(unsigned __int8*)(v73 + v72);
      *(_DWORD*)(a2 + 20) = v72 + 2;
      *(_WORD*)(a1 + 166) = v74 | (*(unsigned __int8*)(v73 + v72 + 1) << 8);
      v75 = *(int*)(a2 + 20);
      v76 = *(_QWORD*)(a2 + 8);
      v77 = v75 + 1;
      *(_DWORD*)(a2 + 20) = v75 + 1;
      v78 = *(unsigned __int8*)(v76 + v75);
      v79 = v75 + 2;
      *(_DWORD*)(a2 + 20) = v79;
      v80 = v78 | (*(unsigned __int8*)(v76 + v77) << 8);
      if (v80 != 0) {
        *(_DWORD*)(a2 + 20) = v79 + v80;
        GameRoutine_60a020(a1 + 168, v76 + v79);
      }
      else if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
        **(_BYTE**)(a1 + 184) = 0;
        *(_QWORD*)(a1 + 176) = 0;
      }
      else {
        *(_WORD*)(a1 + 168) = 0;
      }
      v81 = *(int*)(a2 + 20);
      v82 = *(_QWORD*)(a2 + 8);
      v83 = v81 + 1;
      *(_DWORD*)(a2 + 20) = v81 + 1;
      v84 = *(unsigned __int8*)(v82 + v81);
      v85 = v81 + 2;
      *(_DWORD*)(a2 + 20) = v85;
      v86 = v84 | (*(unsigned __int8*)(v82 + v83) << 8);
      if (v86 != 0) {
        *(_DWORD*)(a2 + 20) = v85 + v86;
        GameRoutine_60a020(a1 + 192, v82 + v85);
      }
      else if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
        **(_BYTE**)(a1 + 208) = 0;
        *(_QWORD*)(a1 + 200) = 0;
      }
      else {
        *(_WORD*)(a1 + 192) = 0;
      }
      v87 = *(int*)(a2 + 20);
      v88 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v87 + 1;
      v89 = *(unsigned __int8*)(v88 + v87);
      *(_DWORD*)(a2 + 20) = v87 + 2;
      *(_WORD*)(a1 + 288) = v89 | (*(unsigned __int8*)(v88 + v87 + 1) << 8);
      v90 = *(int*)(a2 + 20);
      v91 = *(_QWORD*)(a2 + 8);
      v92 = v90 + 1;
      *(_DWORD*)(a2 + 20) = v90 + 1;
      v93 = *(unsigned __int8*)(v91 + v90);
      v94 = v90 + 2;
      *(_DWORD*)(a2 + 20) = v94;
      v95 = v93 | (*(unsigned __int8*)(v91 + v92) << 8);
      if (v95 != 0) {
        *(_DWORD*)(a2 + 20) = v94 + v95;
        GameRoutine_60a020(a1 + 216, v91 + v94);
      }
      else if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
        **(_BYTE**)(a1 + 232) = 0;
        *(_QWORD*)(a1 + 224) = 0;
      }
      else {
        *(_WORD*)(a1 + 216) = 0;
      }
      v96 = *(int*)(a2 + 20);
      v97 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v96 + 1;
      v98 = *(unsigned __int8*)(v97 + v96);
      *(_DWORD*)(a2 + 20) = v96 + 2;
      *(_WORD*)(a1 + 290) = v98 | (*(unsigned __int8*)(v97 + v96 + 1) << 8);
      v99 = *(int*)(a2 + 20);
      v100 = *(_QWORD*)(a2 + 8);
      v101 = v99 + 1;
      *(_DWORD*)(a2 + 20) = v99 + 1;
      v102 = *(unsigned __int8*)(v100 + v99);
      v103 = v99 + 2;
      *(_DWORD*)(a2 + 20) = v103;
      v104 = v102 | (*(unsigned __int8*)(v100 + v101) << 8);
      if (v104 != 0) {
        *(_DWORD*)(a2 + 20) = v103 + v104;
        GameRoutine_60a020(a1 + 240, v100 + v103);
      }
      else if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
        **(_BYTE**)(a1 + 256) = 0;
        *(_QWORD*)(a1 + 248) = 0;
      }
      else {
        *(_WORD*)(a1 + 240) = 0;
      }
      v105 = *(int*)(a2 + 20);
      v106 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v105 + 1;
      v107 = *(unsigned __int8*)(v106 + v105);
      *(_DWORD*)(a2 + 20) = v105 + 2;
      *(_WORD*)(a1 + 292) = v107 | (*(unsigned __int8*)(v106 + v105 + 1) << 8);
      v108 = *(int*)(a2 + 20);
      v109 = *(_QWORD*)(a2 + 8);
      v110 = v108 + 1;
      *(_DWORD*)(a2 + 20) = v108 + 1;
      v111 = *(unsigned __int8*)(v109 + v108);
      v112 = v108 + 2;
      *(_DWORD*)(a2 + 20) = v112;
      v113 = v111 | (*(unsigned __int8*)(v109 + v110) << 8);
      if (v113 != 0) {
        *(_DWORD*)(a2 + 20) = v112 + v113;
        GameRoutine_60a020(a1 + 264, v109 + v112);
      }
      else if ((*(_BYTE*)(a1 + 264) & 1) != 0) {
        **(_BYTE**)(a1 + 280) = 0;
        *(_QWORD*)(a1 + 272) = 0;
      }
      else {
        *(_WORD*)(a1 + 264) = 0;
      }
      v114 = *(int*)(a2 + 20);
      v115 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v114 + 1;
      v116 = *(unsigned __int8*)(v115 + v114);
      *(_DWORD*)(a2 + 20) = v114 + 2;
      *(_WORD*)(a1 + 294) = v116 | (*(unsigned __int8*)(v115 + v114 + 1) << 8);
      v36 = *(_DWORD*)(a2 + 20);
      v31 = *(_QWORD*)(a2 + 8);
      goto LABEL_94;
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    **(_BYTE**)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 48) = 0;
    if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
      goto LABEL_11;
    }
  }
  else {
    *(_WORD*)(a1 + 40) = 0;
    if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    LABEL_11:
      **(_BYTE**)(a1 + 80) = 0;
      *(_QWORD*)(a1 + 72) = 0;
      goto LABEL_14;
    }
  }
  *(_WORD*)(a1 + 64) = 0;

LABEL_14:
  *(_WORD*)(a1 + 160) = -1;
  if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
    **(_BYTE**)(a1 + 104) = 0;
    *(_QWORD*)(a1 + 96) = 0;
  }
  else {
    *(_WORD*)(a1 + 88) = 0;
  }
  *(_WORD*)(a1 + 162) = -1;
  if ((*(_BYTE*)(a1 + 112) & 1) != 0) {
    **(_BYTE**)(a1 + 128) = 0;
    *(_QWORD*)(a1 + 120) = 0;
  }
  else {
    *(_WORD*)(a1 + 112) = 0;
  }
  *(_WORD*)(a1 + 164) = -1;
  if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
    **(_BYTE**)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 144) = 0;
  }
  else {
    *(_WORD*)(a1 + 136) = 0;
  }
  *(_WORD*)(a1 + 166) = -1;
  if ((*(_BYTE*)(a1 + 168) & 1) != 0) {
    **(_BYTE**)(a1 + 184) = 0;
    *(_QWORD*)(a1 + 176) = 0;
    if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
      goto LABEL_25;
    }
  }
  else {
    *(_WORD*)(a1 + 168) = 0;
    if ((*(_BYTE*)(a1 + 192) & 1) != 0) {
    LABEL_25:
      **(_BYTE**)(a1 + 208) = 0;
      *(_QWORD*)(a1 + 200) = 0;
      goto LABEL_28;
    }
  }
  *(_WORD*)(a1 + 192) = 0;

LABEL_28:
  *(_WORD*)(a1 + 288) = -1;
  if ((*(_BYTE*)(a1 + 216) & 1) != 0) {
    **(_BYTE**)(a1 + 232) = 0;
    *(_QWORD*)(a1 + 224) = 0;
  }
  else {
    *(_WORD*)(a1 + 216) = 0;
  }
  *(_WORD*)(a1 + 290) = -1;
  if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
    **(_BYTE**)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 248) = 0;
  }
  else {
    *(_WORD*)(a1 + 240) = 0;
  }
  *(_WORD*)(a1 + 292) = -1;
  if ((*(_BYTE*)(a1 + 264) & 1) != 0) {
    **(_BYTE**)(a1 + 280) = 0;
    *(_QWORD*)(a1 + 272) = 0;
  }
  else {
    *(_WORD*)(a1 + 264) = 0;
  }
  *(_WORD*)(a1 + 294) = -1;
  v30 = *(int*)(a2 + 20);
  v31 = *(_QWORD*)(a2 + 8);
  v32 = v30 + 1;
  *(_DWORD*)(a2 + 20) = v30 + 1;
  v33 = *(unsigned __int8*)(v31 + v30);
  v30 += 2;
  *(_DWORD*)(a2 + 20) = v30;
  v34 = v30 + (v33 | ((unsigned __int64)*(unsigned __int8*)(v31 + v32) << 8));
  v35 = (int)v34 + 1LL;
  *(_DWORD*)(a2 + 20) = v35;
  LODWORD(v33) = *(unsigned __int8*)(v31 + v34);
  v36 = v34 + 2;
  *(_DWORD*)(a2 + 20) = v36;
  v37 = v33 | (*(unsigned __int8*)(v31 + v35) << 8);
  if (v37 != 0) {
    v36 += v37;
    *(_DWORD*)(a2 + 20) = v36;
  }
  if ((unsigned int)(a3 - 5) <= 4) {
    v36 += 14;
    *(_DWORD*)(a2 + 20) = v36;
  }
  if (a3 <= 7) {
    *(_QWORD*)(a1 + 30) = 0;
    if (a3 != 7) {
      v38 = 0;
      *(_QWORD*)(a1 + 304) = *(_QWORD*)(a1 + 296);
      goto LABEL_97;
    }
    game_map_BonusExpList_Deserialize(a1 + 296, a2);
    goto LABEL_96;
  }

LABEL_94:
  *(_DWORD*)(a2 + 20) = v36 + 1;
  v117 = *(unsigned __int8*)(v31 + v36);
  *(_DWORD*)(a2 + 20) = v36 + 2;
  *(_WORD*)(a1 + 30) = v117 | (*(unsigned __int8*)(v31 + v36 + 1LL) << 8);
  v118 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v118 + 1;
  *(_BYTE*)(a1 + 32) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v118);
  v119 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v119 + 1;
  *(_BYTE*)(a1 + 33) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v119);
  v120 = *(int*)(a2 + 20);
  v121 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v120 + 1;
  v122 = *(unsigned __int8*)(v121 + v120);
  *(_DWORD*)(a2 + 20) = v120 + 2;
  *(_WORD*)(a1 + 34) = v122 | (*(unsigned __int8*)(v121 + v120 + 1) << 8);
  v123 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v123 + 1;
  *(_BYTE*)(a1 + 36) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v123);
  v124 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v124 + 1;
  *(_BYTE*)(a1 + 37) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v124);
  game_map_BonusExpList_Deserialize(a1 + 296, a2);
  if ((unsigned int)a3 >= 9) {
    v125 = *(int*)(a2 + 20);
    v126 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v125 + 1;
    v127 = *(unsigned __int8*)(v126 + v125);
    *(_DWORD*)(a2 + 20) = v125 + 2;
    v128 = v127 | (*(unsigned __int8*)(v126 + v125 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v125 + 3;
    v129 = *(unsigned __int8*)(v126 + v125 + 2);
    *(_DWORD*)(a2 + 20) = v125 + 4;
    v38 = v128 | (v129 << 16) | (*(unsigned __int8*)(v126 + v125 + 3) << 24);
    goto LABEL_97;
  }

LABEL_96:
  v38 = 0;

LABEL_97:
  *(_DWORD*)(a1 + 320) = v38;
  if (GameData_21ed088 != 0) {
    MapScoreInfo_19aa850();
  }
  game_VariableManager_SetFlag(&game_map_kVariableSituation1000,
                               (*(_DWORD*)(a1 + 20) & 0x1000) != 0);
  game_VariableManager_SetFlag(&game_map_kVariableSituation800,
                               (*(_DWORD*)(a1 + 20) & 0x800) != 0);
  return game_VariableManager_SetFlag(&game_map_kVariableSituation200,
                                      (*(_DWORD*)(a1 + 20) & 0x200) != 0);
}

__int64 Situation_7671b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5;

  v5 = *(_QWORD*)(a1 + 32);
  if (v5 != 0) {
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5,
                                                           &GameData_21d1e70);
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5,
                                                             &GameData_21d1e80);
      v5 = *(_QWORD*)(a1 + 32);
      if (v5 != 0) {
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(
            v5, &GameData_21d1e90);
        v5 = *(_QWORD*)(a1 + 32);
        if (v5 != 0) {
          (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(
              v5, &game_map_kVariableSituation800);
          v5 = *(_QWORD*)(a1 + 32);
          if (v5 != 0) {
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(
                v5, &game_map_kVariableSituation200);
            v5 = *(_QWORD*)(a1 + 32);
            if (v5 != 0) {
              (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(
                  v5, &game_map_kVariableSituation1000);
              v5 = *(_QWORD*)(a1 + 32);
              if (v5 != 0) {
                (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(
                    v5, &GameData_21d1ea0);
                v5 = *(_QWORD*)(a1 + 32);
                if (v5 != 0) {
                  return (*(__int64 (**)(__int64, __int64*))(
                      *(_QWORD*)v5 + 48LL))(v5, &GameData_21d1eb0);
                }
              }
            }
          }
        }
      }
    }
  }
  GameRoutine_60a310(v5, a2, a3, a4);
}

__int64 game_map_Situation_GetWinRuleName_lambda0_Invoke(__int64 a1,
                                                         __int64* a2,
                                                         unsigned int* a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v3 = *a2;
  v4 = *a3;
  v5 = *msg_MessageManager_instance__ptr[0];
  if (*(_BYTE*)(*a2 + 2136) != 0) {
    v6 = GameRoutine_97b2f0(v3 + 2104);
  }
  else {
    v6 = GameRoutine_67ed20(*(_QWORD*)(v3 + 392));
  }
  if (v4 <= 7) {
    v7 = v4;
  }
  else {
    v7 = 0;
  }
  if (v6 != 0) {
    v8 = v6;
  }
  else {
    v8 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  return GameRoutine_60a020(v5 + 24LL * v7 + 14704, v8);
}

__int64 game_map_Situation_GetLoseRuleName_lambda0_Invoke(__int64 a1,
                                                          __int64* a2,
                                                          unsigned int* a3)
{
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v3 = *a2;
  v4 = *a3;
  v5 = *msg_MessageManager_instance__ptr[0];
  if (*(_BYTE*)(*a2 + 2136) != 0) {
    v6 = GameRoutine_97b2f0(v3 + 2104);
  }
  else {
    v6 = GameRoutine_67ed20(*(_QWORD*)(v3 + 392));
  }
  if (v4 <= 7) {
    v7 = v4;
  }
  else {
    v7 = 0;
  }
  if (v6 != 0) {
    v8 = v6;
  }
  else {
    v8 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  return GameRoutine_60a020(v5 + 24LL * v7 + 14704, v8);
}

__int64 game_map_Situation_EachBonusUnit_lambda0_Invoke(__int64 result,
                                                        __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;

  v2 = *a2;
  if (*a2 != 0) {
    v3 = result;
    v4 = (_DWORD*)game_g_shared_system_skills_ptr;
    LODWORD(v8) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
    result = game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)&v8);
    if ((result & 1) == 0) {
      v5 = *(_QWORD*)(v2 + 440);
      if (v5 != 0 && ((1 << *(_BYTE*)(v5 + 16)) & 0xF1) != 0) {
        LODWORD(v8) = *v4 & 0xFFF;
        result = game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)&v8);
        if ((result & 1) == 0 ||
            ((v6 = *(_QWORD*)(v2 + 440)) == 0 ? (v7 = 9)
                                              : (v7 = *(_BYTE*)(v6 + 16)),
             ((1 << v7) & 0xF1) == 0)) {
          result = *(_QWORD*)(*(_QWORD*)(v3 + 16) + 32LL);
          if (result != 0) {
            v8 = v2;
            result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)result +
                                                         48LL))(result, &v8);
          }
          ++**(_DWORD**)(v3 + 8);
        }
      }
    }
  }
  return result;
}

__int64 game_map_Situation_EachBonusExpUnit_lambda0_Invoke(__int64 result,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;

  v2 = *(_QWORD*)(result + 16);
  if (*(_QWORD*)(v2 + 32) != 0) {
    v3 = *a2;
    v5 = BonusExpList_7ffec0_alt1((__int64*)(*(_QWORD*)(result + 8) + 296LL),
                                  *a2);
    v4 = *(_QWORD*)(v2 + 32);
    v6 = v3;
    if (v4 == 0) {
      GameRoutine_60a310_alt2();
    }
    return (*(__int64 (**)(__int64, __int64*, int*))(*(_QWORD*)v4 + 48LL))(
        v4, &v6, &v5);
  }
  return result;
}

__int64 game_map_Situation_GetMvpUnit_lambda0_Invoke(__int64 result,
                                                     __int64* a2)
{
  __int64 v2;
  _DWORD* v3;
  int v4;

  v2 = *a2;
  v3 = *(_DWORD**)(result + 8);
  v4 = *(unsigned __int16*)(*a2 + 2096);
  if ((signed __int32)*v3 < v4) {
    *v3 = v4;
    **(_QWORD**)(result + 16) = v2;
  }
  return result;
}

#pragma GCC visibility pop
