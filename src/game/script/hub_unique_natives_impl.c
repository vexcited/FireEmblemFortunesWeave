#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b95c0(_QWORD, _QWORD);
__int64 GameRoutine_65c660(_QWORD, _QWORD);
__int64 GameRoutine_714b20(void);
__int64 GameRoutine_842b40(_QWORD, _QWORD);
__int64 GameRoutine_95f930(_QWORD, _QWORD);
__int64 GameRoutine_d541e0(_QWORD);
__int64 GameRoutine_d8b9c0(_QWORD, _QWORD);
__int64 GameRoutine_d8bae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eb6a20(__int64, __int64);
__int64 GameRoutine_ffd760(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameSubquestData_125b0c0(_QWORD, _QWORD);
__int64 ScheduleNatives_869280(_QWORD, _QWORD);
__int64 UnitItem_6e8800(_QWORD, _QWORD);
__int64 as_string_c_str(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_BGM_startActorVolumeAll(_QWORD, _QWORD, double);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c830(_QWORD, float);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
extern _UNKNOWN GameData_1adebe5;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c96f8;
extern __int64 GameData_21c9718;
extern __int64 GameData_21c99c0;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2249258;
extern __int64 as_g_script_manager;
extern __int64 as_g_thread_info;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64* GameData_212c878[6];
extern __int64* as_g_script_manager_ptr;
extern __int64* game_sound_g_game_sound_ptr[5];
extern char GameData_1a9f09e;
__int64 HubUniqueNatives_949240();
__int64 HubUniqueNatives_ec6360();
__int64 HubUniqueNatives_ec6600();
_QWORD* HubUniqueNatives_ec6950(char a1);
__int64 HubUniqueNatives_ec8880();
__int64 HubUniqueNatives_ec89a0();
__int64 HubUniqueNatives_ec8b20();
bool HubUniqueNatives_ec9360(char* a1);
unsigned __int64 HubUniqueNatives_eca6e0(__int64 a1, __int64 a2);
unsigned __int64 HubUniqueNatives_eca9c0(__int64 a1, __int64 a2);
__int64 HubUniqueNatives_ecaf60(__int64 a1, __int64 a2);
__int64 HubUniqueNatives_ecb160(__int64 a1, __int64 a2);
__int64 HubUniqueNatives_1028b30(unsigned int a1);
__int64 HubUniqueNatives_1028be0(unsigned int a1);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1a95bfa;
extern __int64 GameData_21c9dc8;
extern __int64 GameData_21f61c0;
__int64 hub_unique_GetExHistoryHeaderCount(__int64 a1);
__int64 hub_unique_OpenCrownDoorAchievement();
__int64* GameVariable_82e7c0(unsigned __int8, int);
__int64 GameRoutine_17b8f40(__int64, char);
__int64 GameRoutine_25eca0(_QWORD, _QWORD);
__int64 GameRoutine_d859a0(__int64);
__int64 GameSubquestData_125a860(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64
snd_BGM_startActorVolumeAll_alt1(_QWORD, _QWORD,
                                 float) __asm__("snd_BGM_startActorVolumeAll");
__int64 sprintf(_QWORD, const char*, ...);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 double) __asm__("snd_Fade_Fade_10c830");
extern __int64 game_sound_g_game_sound;
__attribute__((swiftcall)) void hub_unique_GetExSpotSkillName(PSEUDO_X8 x8_,
                                                              __int64 a1);
__attribute__((swiftcall)) void
hub_unique_GetExHistoryHeader(PSEUDO_X8 x8_, __int64 a1, int a2);
void hub_unique_WaitTimeProgressionEnd();
__int64 hub_unique_WaterArrivalToHub(char a1);
__attribute__((swiftcall)) void hub_unique_GetDitChallengeSQID(PSEUDO_X8 x8_);
__int64 hub_unique_GetPart2RouteClearedCount();

__int64 HubUniqueNatives_949240()
{
  __int64 v0;
  unsigned int v1;
  __int16* v2;
  __int64 v3;
  _QWORD v5[2];

  if (game_GameModeData_instance_ == 0) {
    goto LABEL_6;
  }
  if (*(_BYTE*)(game_GameModeData_instance_ + 15) == 9 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
    return 0;
  }
  v0 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   &GameData_2249258);
  if (v0 != 0) {
    v1 = *(_DWORD*)(v0 + 32);
  }
  else {
  LABEL_6:
    v1 = 0;
  }
  v2 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  if (v1 <= 10000 * *v2 + 100 * v2[1] + v2[2] &&
      *(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 304LL) == 1) {
    if (game_gmap_GmapClock_instance_ != 0 &&
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
            0) {
      return GameRoutine_ffd760(11, &GameData_1a9f09e, 0, 1);
    }
    v5[1] = &GameData_1adebe5;
    v5[0] = game_HashString(&GameData_1adebe5);
    if (game_GameModeData_instance_ != 0) {
      v3 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v5);
      if (v3 != 0 && *(_DWORD*)(v3 + 32) != 0) {
        return GameRoutine_ffd760(11, &GameData_1a9f09e, 0, 1);
      }
    }
  }
  return 0;
}

__attribute__((swiftcall)) void hub_unique_GetExSpotSkillName(PSEUDO_X8 x8_,
                                                              __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  char* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = game_HashString(v9);
  if (v10 != 0) {
    v11 = *(_QWORD*)(GameData_21c9dc8 + 96);
    if (v11 != 0 && *(_QWORD*)(GameData_21c9dc8 + 112) != 0) {
      v13 = v11 - 1;
      if ((v11 & (v11 - 1)) != 0) {
        v14 = v10;
        if (v10 >= v11) {
          v14 = v10 % v11;
        }
      }
      else {
        v14 = v13 & v10;
      }
      v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c9dc8 + 88) + 8 * v14);
      if (v15 != nullptr) {
        v16 = (_QWORD*)*v15;
        if (v16 != nullptr) {
          v17 = &GameData_1a9f09e;
          if ((v11 & v13) == 0) {
            while (1) {
              v19 = v16[1];
              if (v19 == v10) {
                if (v16[2] == v10) {
                  goto LABEL_37;
                }
              }
              else if ((v19 & v13) != v14) {
                {
                  GameRoutine_25eca0(a2, v17);
                  return;
                }
              }
              v16 = (_QWORD*)*v16;
              if (v16 == nullptr) {
                GameRoutine_25eca0(a2, v17);
                return;
              }
            }
          }
          while (1) {
            v18 = v16[1];
            if (v18 == v10) {
              break;
            }
            if (v18 >= v11) {
              v18 %= v11;
            }
            if (v18 != v14) {
              GameRoutine_25eca0(a2, v17);
              return;
            }
          LABEL_26:
            v16 = (_QWORD*)*v16;
            if (v16 == nullptr) {
              GameRoutine_25eca0(a2, v17);
              return;
            }
          }
          if (v16[2] != v10) {
            goto LABEL_26;
          }
        LABEL_37:
          v20 = v16[3];
          if (v20 != 0) {
            v17 = *(char**)(v20 + 48);
            {
              GameRoutine_25eca0(a2, v17);
              return;
            }
          }
        }
      }
    }
  }
  v17 = &GameData_1a9f09e;
  {
    GameRoutine_25eca0(a2, v17);
    return;
  }
}

__int64 hub_unique_GetExHistoryHeaderCount(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 16);
  }
  else {
    v7 = a1 + 1;
  }
  v8 = game_HashString(v7);
  if (v8 == 0) {
    goto LABEL_36;
  }
  v9 = *(_QWORD*)(GameData_21c9dc8 + 96);
  if (v9 == 0 || *(_QWORD*)(GameData_21c9dc8 + 112) == 0) {
    goto LABEL_36;
  }
  v11 = v9 - 1;
  if ((v9 & (v9 - 1)) != 0) {
    v12 = v8;
    if (v8 >= v9) {
      v12 = v8 % v9;
    }
  }
  else {
    v12 = v11 & v8;
  }
  v13 = *(_QWORD**)(*(_QWORD*)(GameData_21c9dc8 + 88) + 8 * v12);
  if (v13 == nullptr || (v14 = (_QWORD*)*v13) == nullptr) {
  LABEL_36:
    LODWORD(v16) = 0;
    return (unsigned int)v16;
  }
  if ((v9 & v11) == 0) {
    while (1) {
      v17 = v14[1];
      if (v17 == v8) {
        if (v14[2] == v8) {
          goto LABEL_38;
        }
      }
      else if ((v17 & v11) != v12) {
        goto LABEL_36;
      }
      v14 = (_QWORD*)*v14;
      LODWORD(v16) = 0;
      if (v14 == nullptr) {
        return (unsigned int)v16;
      }
    }
  }
  while (1) {
    v15 = v14[1];
    if (v15 == v8) {
      break;
    }
    if (v15 >= v9) {
      v15 %= v9;
    }
    if (v15 != v12) {
      goto LABEL_36;
    }
  LABEL_26:
    v14 = (_QWORD*)*v14;
    if (v14 == nullptr) {
      goto LABEL_36;
    }
  }
  if (v14[2] != v8) {
    goto LABEL_26;
  }
LABEL_38:
  v16 = v14[3];
  if (v16 != 0) {
    LODWORD(v16) = *(unsigned __int16*)(v16 + 64);
  }
  return (unsigned int)v16;
}

__attribute__((swiftcall)) void

hub_unique_GetExHistoryHeader(PSEUDO_X8 x8_, __int64 a1, int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v23[128];

  v6 = *as_g_script_manager_ptr;
  v7 = *(
      _QWORD*)(v6 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v7 != 0) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 472LL))(v7);
  }
  else {
    v8 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v8 + 24) + 448LL))(
      *(_QWORD*)(v8 + 24), 1);
  v9 = *(_QWORD**)(v8 + 2240);
  *(_QWORD*)(v8 + 2240) = 0;
  if (v9 == (_QWORD*)(v8 + 2208)) {
    v10 = 32;
  }
  else {
    if (v9 == nullptr) {
      goto LABEL_9;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v11 = *(_QWORD*)(a1 + 16);
  }
  else {
    v11 = a1 + 1;
  }
  v12 = game_HashString(v11);
  if (v12 == 0) {
    GameRoutine_25eca0(a3, &GameData_1a9f09e);
    return;
  }
  v13 = *(_QWORD*)(GameData_21c9dc8 + 96);
  if (v13 == 0 || *(_QWORD*)(GameData_21c9dc8 + 112) == 0) {
    GameRoutine_25eca0(a3, &GameData_1a9f09e);
    return;
  }
  v15 = v13 - 1;
  if ((v13 & (v13 - 1)) != 0) {
    v16 = v12;
    if (v12 >= v13) {
      v16 = v12 % v13;
    }
  }
  else {
    v16 = v15 & v12;
  }
  v17 = *(_QWORD**)(*(_QWORD*)(GameData_21c9dc8 + 88) + 8 * v16);
  if (v17 == nullptr) {
    GameRoutine_25eca0(a3, &GameData_1a9f09e);
    return;
  }
  v18 = (_QWORD*)*v17;
  if (v18 == nullptr) {
    GameRoutine_25eca0(a3, &GameData_1a9f09e);
    return;
  }
  if ((v13 & v15) == 0) {
    while (1) {
      v20 = v18[1];
      if (v20 == v12) {
        if (v18[2] == v12) {
          goto LABEL_37;
        }
      }
      else if ((v20 & v15) != v16) {
        {
          GameRoutine_25eca0(a3, &GameData_1a9f09e);
          return;
        }
      }
      v18 = (_QWORD*)*v18;
      if (v18 == nullptr) {
        GameRoutine_25eca0(a3, &GameData_1a9f09e);
        return;
      }
    }
  }
  while (1) {
    v19 = v18[1];
    if (v19 == v12) {
      break;
    }
    if (v19 >= v13) {
      v19 %= v13;
    }
    if (v19 != v16) {
      GameRoutine_25eca0(a3, &GameData_1a9f09e);
      return;
    }
  LABEL_26:
    v18 = (_QWORD*)*v18;
    if (v18 == nullptr) {
      GameRoutine_25eca0(a3, &GameData_1a9f09e);
      return;
    }
  }
  if (v18[2] != v12) {
    goto LABEL_26;
  }
LABEL_37:
  v21 = v18[3];
  if (v21 != 0) {
    sprintf(v23, "MID_LIB_Hub_Memory%03d",
            *(unsigned __int8*)(*(_QWORD*)(v21 + 72) + a2));
    {
      GameRoutine_25eca0(a3, v23);
      return;
    }
  }
  {
    GameRoutine_25eca0(a3, &GameData_1a9f09e);
    return;
  }
}

__int64 HubUniqueNatives_ec6360()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 i;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
    goto LABEL_8;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  result = GameRoutine_d541e0(GameData_21f3d10);
  if (result != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(result + 120) + 24LL);
    v7 = *(_QWORD*)(v6 + 72);
    for (i = *(_QWORD*)(v6 + 80); v7 != i; v7 += 16) {
      if (game_GameModeData_instance_ != 0) {
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v7);
        if (result != 0 && *(_DWORD*)(result + 32) != 0) {
          continue;
        }
      }
      result = game_VariableManager_SetFlag(v7, 1);
    }
  }
  return result;
}

__int64 HubUniqueNatives_ec6600()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  _BYTE v13[23];
  __int64 v14;
  int v15;
  char v16;
  char* v17;

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v0 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v1 = *(_QWORD*)v0;
  v15 = *(_DWORD*)(v0 + 8);
  v14 = v1;
  if (game_GameModeData_instance_ != 0) {
    v2 = GameRoutine_714b20();
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 24);
      v4 = *(_QWORD*)(v3 + 96);
      LODWORD(v3) = *(_DWORD*)(v3 + 104);
      v14 = v4;
      v15 = v3;
      if (game_gmap_GmapClock_instance_ != 0) {
        ScheduleNatives_869280(game_gmap_GmapClock_instance_, &v14);
      }
    }
  }
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8e80(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0],
                        1);
  }
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v5 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416);
    do {
      v6 = v5;
      v5 = *(_QWORD*)(v5 + 40);
    } while (v5 != 0);
  }
  else {
    v6 = 0;
  }
  result = GameRoutine_17b95c0(v6, &v14);
  v8 = game_hub_ProcHubSeqView_instance_;
  v12 = 30;
  strcpy(v13, "TimeProgression");
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    result = GameRoutine_d8b9c0(game_hub_ProcHubSeqView_instance_ + 424, &v12);
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 416) + 40LL);
    if (v9 != 0) {
      v10 = 0;
      do {
        v9 = *(_QWORD*)(v9 + 40);
        ++v10;
      } while (v9 != 0);
      v17 = &v12;
      result = GameRoutine_d8bae0(v8 + 424, &v12,
                                  std___1_piecewise_construct_ptr, &v17, &v16);
      *(_DWORD*)(result + 56) = v10;
    }
  }
  if ((v12 & 1) != 0 && *(_QWORD*)&v13[15] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, *(_QWORD*)&v13[15]);
  }
  return result;
}

void hub_unique_WaitTimeProgressionEnd()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  void (*v10)(void);
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  char v14;
  _BYTE v15[23];

  v0 = as_g_script_manager_ptr;
  v1 = *as_g_script_manager_ptr;
  v2 = *(
      _QWORD*)(v1 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v2 != 0) {
    v3 = (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 472LL))(v2);
  }
  else {
    v3 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v3 + 24) + 448LL))(
      *(_QWORD*)(v3 + 24), 1);
  v4 = *(_QWORD**)(v3 + 2240);
  *(_QWORD*)(v3 + 2240) = 0;
  if (v4 == (_QWORD*)(v3 + 2208)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_9;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_9:
  v14 = 30;
  strcpy(v15, "TimeProgression");
  v6 = GameRoutine_d859a0((__int64)&v14);
  v7 = *v0;
  v8 = *(
      _QWORD*)(v7 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v8 != 0) {
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 472LL))(v8);
  }
  else {
    v9 = 0;
  }
  v10 = *(void (**)(void))(**(_QWORD**)(v9 + 24) + 448LL);
  if ((v6 & 1) == 0) {
    v10();
    v11 = *(_QWORD**)(v9 + 2240);
    *(_QWORD*)(v9 + 2240) = 0;
    if (v11 == (_QWORD*)(v9 + 2208)) {
      v12 = 32;
    }
    else {
      if (v11 == nullptr) {
        goto LABEL_19;
      }
      v12 = 40;
    }
    (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
    goto LABEL_19;
  }
  v10();
LABEL_19:
  if ((v14 & 1) != 0 && *(_QWORD*)&v15[15] != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v13);
  }
  if ((v6 & 1) == 0 &&
      *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8f40(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0],
                        1);
  }
}

_QWORD* HubUniqueNatives_ec6950(char a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  __int64 v6;
  __int64 v7;
  _BYTE v8[200];

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  result = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (result == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v6))((__int64)result);

LABEL_9:
  if ((a1 & 1) != 0) {
    if (game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      v7 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
      snd_Fade_Fade_10cb00(v8, "FadeTime_BGM_Elevator_Down");
    LABEL_16:
      snd_BGM_startActorVolumeAll(v7, v8, 0.0f);
      return (_QWORD*)snd_Fade_Destroy_Fade(v8);
    }
  }
  else if (game_GameModeData_instance_ == 0 ||
           *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v7 = *(_QWORD*)(*game_sound_g_game_sound_ptr[0] + 8);
    snd_Fade_Fade_10c830(v8, 1000.0f);
    goto LABEL_16;
  }
  return result;
}

__int64 hub_unique_WaterArrivalToHub(char a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _BYTE v11[200];

  v3 = *as_g_script_manager_ptr;
  v4 = *(
      _QWORD*)(v3 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v4 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 472LL))(v4);
  }
  else {
    v5 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v5 + 24) + 448LL))(
      *(_QWORD*)(v5 + 24), 1);
  v6 = *(_QWORD**)(v5 + 2240);
  *(_QWORD*)(v5 + 2240) = 0;
  if (v6 == (_QWORD*)(v5 + 2208)) {
    v7 = 32;
  }
  else {
    if (v6 == nullptr) {
      goto LABEL_9;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
LABEL_9:
  v8 = *(_QWORD*)(game_sound_g_game_sound + 8);
  if ((a1 & 1) != 0) {
    result = *(_QWORD*)(game_sound_g_game_sound + 8);
    v1 = *(_QWORD*)(result + 16);
    if (v1 != *(_QWORD*)(result + 8)) {
      *(_BYTE*)(v1 - 8) = 1;
    }
  }
  else {
    snd_Fade_Fade_10c830_alt1(v11, 0.0f);
    (*(void (**)(__int64, _BYTE*, __int64, float))(*(_QWORD*)v8 + 80LL))(
        v8, v11, 1, 1.0f);
    snd_Fade_Destroy_Fade(v11);
    v10 = *(_QWORD*)(game_sound_g_game_sound + 8);
    snd_Fade_Fade_10cb00(v11, "FadeTime_BGM_Elevator_Up");
    snd_BGM_startActorVolumeAll_alt1(v10, v11, 1.0f);
    return snd_Fade_Destroy_Fade(v11);
  }
  return result;
}

__attribute__((swiftcall)) void hub_unique_GetDitChallengeSQID(PSEUDO_X8 x8_)
{
  __int64 a1 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;

  v2 = as_g_script_manager;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
LABEL_9:
  v12 = nullptr;
  v13 = 0;
  v11 = nullptr;
  GameSubquestData_125a860(*(_QWORD*)GameData_212c7b0[0], &v11);
  if (v12 == v11) {
    if (v12 == nullptr) {
    LABEL_17:
      v9 = &GameData_1a9f09e;
      {
        GameRoutine_25eca0(a1, v9);
        return;
      }
    }
    v7 = 0;
  }
  else {
    v7 = *v11;
  }
  v12 = v11;
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     v8);
  if (v7 == 0) {
    goto LABEL_17;
  }
  v9 = *(char**)(*(_QWORD*)v7 + 8LL);
  {
    GameRoutine_25eca0(a1, v9);
    return;
  }
}

__int64 HubUniqueNatives_ec8880()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v0 = *as_g_script_manager_ptr;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
    goto LABEL_8;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_8:
    (*(void (**)(void))(*v3 + v4))();
  }
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = *(_QWORD*)GameData_212c7b0[0] + 136LL * v5;
  v7 = *(_QWORD*)(v6 + 72);
  v8 = *(_QWORD*)(v6 + 80);
  while (v7 != v8) {
    if (*(_BYTE*)(**(_QWORD**)v7 + 112LL) == 5 &&
        *(_BYTE*)(*(_QWORD*)v7 + 9LL) != 4) {
      return 0;
    }
    v7 += 8;
  }
  return 1;
}

__int64 HubUniqueNatives_ec89a0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v10;
  __int64 v11;
  __int64** v12;
  __int64** v13;
  __int64 v14;
  int v15;
  int v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(void))(*v3 + v4))();

LABEL_9:
  v19 = 0;
  v20 = 0;
  v18 = 0;
  v5 = (_QWORD*)GameData_212c7b0[0];
  GameSubquestData_125b0c0(*(_QWORD*)GameData_212c7b0[0], &v18);
  v6 = v18;
  v7 = v19;
  if (v18 != 0) {
    v19 = v18;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8,
                                  v18);
  }
  if (v7 != v6) {
    return 1;
  }
  v10 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v10 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v11 = *v5 + 136LL * v10;
  v12 = *(__int64***)(v11 + 72);
  v13 = *(__int64***)(v11 + 80);
  while (v12 != v13) {
    v14 = **v12;
    v15 = *(unsigned __int8*)(v14 + 112);
    v16 = *(unsigned __int8*)(v14 + 113);
    v17 = v15 == 7 && v16 == 3;
    if (v17 && *((_BYTE*)*v12 + 9) != 4) {
      return 2;
    }
    ++v12;
  }
  return 3;
}

__int64 HubUniqueNatives_ec8b20()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64** v7;
  __int64** v8;
  __int64 v10;
  int v11;
  int v12;
  bool v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(void))(*v3 + v4))();

LABEL_9:
  v5 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  v6 = GameData_21c9718 + 136LL * v5;
  v7 = *(__int64***)(v6 + 72);
  v8 = *(__int64***)(v6 + 80);
  if (v7 == v8) {
    return 3;
  }
  while (1) {
    v10 = **v7;
    v11 = *(unsigned __int8*)(v10 + 112);
    v12 = *(unsigned __int8*)(v10 + 113);
    v13 = v11 == 7 && v12 == 4;
    if (v13 && *((_BYTE*)*v7 + 9) != 4) {
      break;
    }
    if (++v7 == v8) {
      return 3;
    }
  }
  v18 = 0;
  v19 = 0;
  v17 = 0;
  GameSubquestData_125b0c0(GameData_21c9718, &v17);
  v14 = v17;
  v15 = v18;
  if (v17 != 0) {
    v18 = v17;
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16,
                                  v17);
  }
  if (v15 == v14) {
    return 2;
  }
  else {
    return 1;
  }
}

bool HubUniqueNatives_ec9360(char* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _BOOL4 v14;
  __int64 v16;
  char v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  _QWORD v22[2];
  int v23;

  v2 = *as_g_script_manager_ptr;
  v3 = *(
      _QWORD*)(v2 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v3 != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 472LL))(v3);
  }
  else {
    v4 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v4 + 24) + 448LL))(
      *(_QWORD*)(v4 + 24), 1);
  v5 = *(_QWORD**)(v4 + 2240);
  *(_QWORD*)(v4 + 2240) = 0;
  if (v5 == (_QWORD*)(v4 + 2208)) {
    v6 = 32;
  }
  else {
    if (v5 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(void))(*v5 + v6))();

LABEL_9:
  v7 = *a1;
  v8 = *((char**)a1 + 2);
  v23 = 0;
  if ((v7 & 1) != 0) {
    v9 = v8;
  }
  else {
    v9 = a1 + 1;
  }
  v22[1] = v9;
  v22[0] = game_HashString(v9);
  GameRoutine_842b40(&v23, v22);
  LODWORD(v22[0]) = 16;
  v10 = game_UnitPool_GetFirst(v22);
  if (v10 != 0) {
    v11 = *(_QWORD*)(v10 + 432);
    if (v11 == 0) {
      v12 = *(_QWORD*)(v10 + 440);
      if (v12 != 0 &&
          (unsigned int)(v13 = *(unsigned __int8*)(v12 + 16)) <= 8) {
        v21 = v13 - 3;
        while (1) {
          if (v21 == 0) {
            v11 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
            if (v11 != 0) {
              break;
            }
          }
          if (++v21 == 6) {
            goto LABEL_16;
          }
        }
      }
      else {
      LABEL_16:
        v11 = 0;
      }
    }
    if ((game_HasSkill(v10 + 1744, &v23) & 1) != 0) {
      return true;
    }
    else {
      do {
        v14 = v11 != 0;
        if (v11 == 0) {
          break;
        }
        v16 = *(_QWORD*)(v11 + 432);
        if (v16 == 0) {
          v18 = *(_QWORD*)(v11 + 440);
          if (v18 != 0 &&
              (unsigned int)(v19 = *(unsigned __int8*)(v18 + 16)) <= 8) {
            v20 = v19 - 3;
            while (1) {
              if (v20 == 0) {
                v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v16 != 0) {
                  break;
                }
              }
              if (++v20 == 6) {
                goto LABEL_22;
              }
            }
          }
          else {
          LABEL_22:
            v16 = 0;
          }
        }
        v17 = game_HasSkill(v11 + 1744, &v23);
        v11 = v16;
      } while ((v17 & 1) == 0);
    }
  }
  else {
    return false;
  }
  return v14;
}

unsigned __int64 HubUniqueNatives_eca6e0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 result;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  int v29;
  __int64 v30;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  result = game_HashString(v9);
  if (result == 0) {
    return result;
  }
  v11 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return result;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = result;
    if (result >= v11) {
      v14 = result % v11;
    }
  }
  else {
    v14 = v13 & result;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v14);
  if (v15 == nullptr) {
    return result;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    return result;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == result) {
        if (v16[2] == result) {
          goto LABEL_37;
        }
      }
      else if ((v18 & v13) != v14) {
        return result;
      }
      v16 = (_QWORD*)*v16;
      if (v16 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == result) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      return result;
    }
  LABEL_26:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      return result;
    }
  }
  if (v16[2] != result) {
    goto LABEL_26;
  }

LABEL_37:
  if (v16[3] != 0) {
    v30 = v16[3];
    v29 = 241;
    result = game_UnitPool_Find_6ead60(&v30, &v29);
    if (result != 0) {
      v19 = result;
      v20 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : a2 + 1;
      result = game_HashString(v20);
      if (result != 0) {
        v21 = *(_QWORD*)(GameData_21c99c0 + 96);
        if (v21 != 0 && *(_QWORD*)(GameData_21c99c0 + 112) != 0) {
          v23 = v21 - 1;
          if ((v21 & (v21 - 1)) != 0) {
            v24 = result;
            if (result >= v21) {
              v24 = result % v21;
            }
          }
          else {
            v24 = v23 & result;
          }
          v25 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v24);
          if (v25 != nullptr) {
            v26 = (_QWORD*)*v25;
            if (v26 != nullptr) {
              if ((v21 & v23) == 0) {
                while (1) {
                  v28 = v26[1];
                  if (v28 == result) {
                    if (v26[2] == result) {
                      goto LABEL_67;
                    }
                  }
                  else if ((v28 & v23) != v24) {
                    return result;
                  }
                  v26 = (_QWORD*)*v26;
                  if (v26 == nullptr) {
                    return result;
                  }
                }
              }
              do {
                v27 = v26[1];
                if (v27 == result) {
                  if (v26[2] == result) {
                  LABEL_67:
                    if (v26[3] != 0) {
                      return GameRoutine_95f930(1, v19);
                    }
                    return result;
                  }
                }
                else {
                  if (v27 >= v21) {
                    v27 %= v21;
                  }
                  if (v27 != v24) {
                    return result;
                  }
                }
                v26 = (_QWORD*)*v26;
              } while (v26 != nullptr);
            }
          }
        }
      }
    }
  }
  return result;
}

unsigned __int64 HubUniqueNatives_eca9c0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 result;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  int v33;
  __int64 v34;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  result = game_HashString(v9);
  if (result == 0) {
    return result;
  }
  v11 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return result;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = result;
    if (result >= v11) {
      v14 = result % v11;
    }
  }
  else {
    v14 = v13 & result;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v14);
  if (v15 == nullptr) {
    return result;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    return result;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == result) {
        if (v16[2] == result) {
          goto LABEL_37;
        }
      }
      else if ((v18 & v13) != v14) {
        return result;
      }
      v16 = (_QWORD*)*v16;
      if (v16 == nullptr) {
        return result;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == result) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      return result;
    }
  LABEL_26:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      return result;
    }
  }
  if (v16[2] != result) {
    goto LABEL_26;
  }

LABEL_37:
  if (v16[3] != 0) {
    v34 = v16[3];
    v33 = 241;
    result = game_UnitPool_Find_6ead60(&v34, &v33);
    if (result != 0) {
      v19 = result;
      v20 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : a2 + 1;
      result = game_HashString(v20);
      if (result != 0) {
        v21 = *(_QWORD*)(GameData_21c99c0 + 96);
        if (v21 != 0 && *(_QWORD*)(GameData_21c99c0 + 112) != 0) {
          v23 = v21 - 1;
          if ((v21 & (v21 - 1)) != 0) {
            v24 = result;
            if (result >= v21) {
              v24 = result % v21;
            }
          }
          else {
            v24 = v23 & result;
          }
          v25 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c0 + 88) + 8 * v24);
          if (v25 != nullptr) {
            v26 = (_QWORD*)*v25;
            if (v26 != nullptr) {
              if ((v21 & v23) == 0) {
                while (1) {
                  v28 = v26[1];
                  if (v28 == result) {
                    if (v26[2] == result) {
                      goto LABEL_67;
                    }
                  }
                  else if ((v28 & v23) != v24) {
                    return result;
                  }
                  v26 = (_QWORD*)*v26;
                  if (v26 == nullptr) {
                    return result;
                  }
                }
              }
              do {
                v27 = v26[1];
                if (v27 == result) {
                  if (v26[2] == result) {
                  LABEL_67:
                    v29 = v26[3];
                    if (v29 != 0) {
                      v30 = *(_QWORD*)(*(_QWORD*)(v29 + 24) + 1104LL);
                      if (v30 != 0) {
                        v31 = *(_QWORD*)(v19 + 560);
                        v32 = *(unsigned __int16*)(v30 + 16);
                        if (v32 < (*(_QWORD*)(v19 + 568) - v31) >> 1) {
                          *(_WORD*)(v31 + 2 * v32) |= 0x400u;
                        }
                      }
                    }
                    return result;
                  }
                }
                else {
                  if (v27 >= v21) {
                    v27 %= v21;
                  }
                  if (v27 != v24) {
                    return result;
                  }
                }
                v26 = (_QWORD*)*v26;
              } while (v26 != nullptr);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 hub_unique_GetPart2RouteClearedCount()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  _BOOL4 v7;
  __int64* v8;
  __int64 v9;
  _BOOL4 v10;
  __int64* v11;
  __int64 v12;
  _BOOL4 v13;
  __int64* v14;
  __int64 v15;
  _BOOL4 v16;
  __int64* v17;
  __int64 v18;
  _BOOL4 v19;
  __int64* v20;
  __int64 v21;
  _BOOL4 v22;
  __int64* v23;
  __int64 v24;
  _BOOL4 v25;
  __int64* v26;
  int v27;
  __int64 v28;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
    goto LABEL_8;
  }
  if (v3 != nullptr) {
    v4 = 40;
  LABEL_8:
    (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
  }
  v5 = GameVariable_82e7c0(1u, 2);
  v7 = game_GameModeData_instance_ != 0 &&
       (v6 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)v5)) != 0 &&
       *(_DWORD*)(v6 + 32) > 0;
  v8 = GameVariable_82e7c0(2u, 2);
  v10 = game_GameModeData_instance_ != 0 &&
        (v9 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v8)) != 0 &&
        *(_DWORD*)(v9 + 32) > 0;
  v11 = GameVariable_82e7c0(3u, 2);
  v13 = game_GameModeData_instance_ != 0 &&
        (v12 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v11)) != 0 &&
        *(_DWORD*)(v12 + 32) > 0;
  v14 = GameVariable_82e7c0(4u, 2);
  v16 = game_GameModeData_instance_ != 0 &&
        (v15 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v14)) != 0 &&
        *(_DWORD*)(v15 + 32) > 0;
  v17 = GameVariable_82e7c0(5u, 2);
  v19 = game_GameModeData_instance_ != 0 &&
        (v18 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v17)) != 0 &&
        *(_DWORD*)(v18 + 32) > 0;
  v20 = GameVariable_82e7c0(6u, 2);
  v22 = game_GameModeData_instance_ != 0 &&
        (v21 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v20)) != 0 &&
        *(_DWORD*)(v21 + 32) > 0;
  v23 = GameVariable_82e7c0(7u, 2);
  v25 = game_GameModeData_instance_ != 0 &&
        (v24 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)v23)) != 0 &&
        *(_DWORD*)(v24 + 32) > 0;
  v26 = GameVariable_82e7c0(8u, 2);
  v27 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v28 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v26);
    v27 = v28 != 0 && *(_DWORD*)(v28 + 32) > 0;
  }
  return (unsigned int)(v10 + v7 + v13 + v16 + v19 + v22 + v25 + v27);
}

__int64 HubUniqueNatives_ecaf60(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int16* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  _QWORD v21[2];

  if ((*(_BYTE*)a1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
  }
  else {
    v3 = a1 + 1;
  }
  v4 = game_HashString(v3);
  if (v4 == 0) {
    goto LABEL_37;
  }
  v5 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    goto LABEL_37;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v8);
  if (v9 == nullptr || (v10 = (_QWORD*)*v9) == nullptr) {
  LABEL_37:
    LODWORD(v12) = 0;
    return (unsigned int)v12;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v7) != v8) {
        goto LABEL_37;
      }
      v10 = (_QWORD*)*v10;
      LODWORD(v12) = 0;
      if (v10 == nullptr) {
        return (unsigned int)v12;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      goto LABEL_37;
    }
  LABEL_18:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      goto LABEL_37;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_18;
  }

LABEL_29:
  v12 = v10[3];
  if (v12 != 0) {
    v21[0] = v10[3];
    LODWORD(v20) = 241;
    v14 = game_UnitPool_Find_6ead60(v21, &v20);
    if (v14 == 0) {
      goto LABEL_37;
    }
    v15 = (unsigned __int16*)v14;
    v16 = as_string_c_str(a2);
    v20 = 0;
    v21[1] = v16;
    v21[0] = game_HashString(v16);
    UnitItem_6e8800(&v20, v21);
    v17 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v18 = *(_QWORD*)(v17 + 8LL * (unsigned __int16)v20);
    if (*(_QWORD*)(v17 + 8LL * v15[414]) != v18 &&
        *(_QWORD*)(v17 + 8LL * v15[418]) != v18 &&
        *(_QWORD*)(v17 + 8LL * v15[422]) != v18 &&
        *(_QWORD*)(v17 + 8LL * v15[426]) != v18 &&
        *(_QWORD*)(v17 + 8LL * v15[430]) != v18 &&
        *(_QWORD*)(v17 + 8LL * v15[434]) != v18) {
      goto LABEL_37;
    }
    LODWORD(v12) = 1;
  }
  return (unsigned int)v12;
}

__int64 HubUniqueNatives_ecb160(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v13;
  unsigned __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_9:
  if ((*(_BYTE*)a1 & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 16);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = game_HashString(v9);
  if (v10 == 0) {
    return 0;
  }
  v11 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v11 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return 0;
  }
  v13 = v11 - 1;
  if ((v11 & (v11 - 1)) != 0) {
    v14 = v10;
    if (v10 >= v11) {
      v14 = v10 % v11;
    }
  }
  else {
    v14 = v13 & v10;
  }
  v15 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v14);
  if (v15 == nullptr) {
    return 0;
  }
  v16 = (_QWORD*)*v15;
  if (v16 == nullptr) {
    return 0;
  }
  if ((v11 & v13) == 0) {
    while (1) {
      v18 = v16[1];
      if (v18 == v10) {
        if (v16[2] == v10) {
          goto LABEL_37;
        }
      }
      else if ((v18 & v13) != v14) {
        return 0;
      }
      v16 = (_QWORD*)*v16;
      if (v16 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v17 = v16[1];
    if (v17 == v10) {
      break;
    }
    if (v17 >= v11) {
      v17 %= v11;
    }
    if (v17 != v14) {
      return 0;
    }
  LABEL_26:
    v16 = (_QWORD*)*v16;
    if (v16 == nullptr) {
      return 0;
    }
  }
  if (v16[2] != v10) {
    goto LABEL_26;
  }

LABEL_37:
  v19 = v16[3];
  if (v19 != 0) {
    v23 = 0;
    v22 = as_string_c_str(a2);
    v21 = game_HashString(v22);
    UnitItem_6e8800(&v23, &v21);
    if ((unsigned int)GameRoutine_eb6a20(
            v19, *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                            8LL * (unsigned __int16)v23)) -
            2 <
        3) {
      return 1;
    }
  }
  return 0;
}

__int64 hub_unique_OpenCrownDoorAchievement()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  unsigned int v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  void* v13;
  _QWORD v14[2];
  char* v15;

  v0 = as_g_script_manager;
  v1 = *(
      _QWORD*)(v0 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v1 != 0) {
    v2 = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 472LL))(v1);
  }
  else {
    v2 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 24) + 448LL))(
      *(_QWORD*)(v2 + 24), 1);
  v3 = *(_QWORD**)(v2 + 2240);
  *(_QWORD*)(v2 + 2240) = 0;
  if (v3 == (_QWORD*)(v2 + 2208)) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_9;
    }
    v4 = 40;
  }
  (*(void (**)(void))(*v3 + v4))();
LABEL_9:
  v5 = fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      40, 16, 0);
  *(_BYTE*)(v6 + 39) = 0;
  v13 = (void*)v6;
  v14[0] = 41;
  v14[1] = 39;
  v15 = (char*)v6;
  *(_QWORD*)(v6 + 16) = 0xE9AE81E3A086E5A9LL;
  *(_QWORD*)(v6 + 24) = 0x94E7A988E55FB58DLL;
  *(_QWORD*)(v6 + 31) = 0xB095E69E9BE5A894LL;
  *(_QWORD*)v6 = 0xE55FB982E7A08BE6LL;
  *(_QWORD*)(v6 + 8) = 0xA4E55FBEB8E79FAELL;
  v12 = game_HashString(v6);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), &v12, 1);
  }
  if ((v14[0] & 1) != 0) {
    v7 = v15;
  }
  else {
    v7 = (char*)v14 + 1;
  }
  v13 = v7;
  v12 = game_HashString(v7);
  if (game_GameModeData_instance_ != 0 &&
      (v8 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v12)) != 0) {
    v9 = *(_DWORD*)(v8 + 32);
  }
  else {
    v9 = 0;
  }
  v13 = &GameData_1a95bfa;
  v12 = game_HashString(&GameData_1a95bfa);
  result = GameRoutine_9b11a0(&GameData_21f61c0, &v12, v9);
  if ((v14[0] & 1) != 0 && v15 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v11);
  }
  return result;
}

__int64 HubUniqueNatives_1028b30(unsigned int a1)
{
  __int64 result;
  __int64 v3;
  __int128 v4;

  result = GameRoutine_d541e0(*(_QWORD*)GameData_212dbb8[0]);
  if ((a1 & 0x80000000) == 0 && result != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 120) + 24LL) + 72LL);
    if (a1 <
        (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 120) +
                                                  24LL) +
                                       80LL) -
                            v3) >>
                           4)) {
      v4 = *(_OWORD*)(v3 + 16LL * a1);
      if ((_QWORD)v4 != 0) {
        if (game_GameModeData_instance_ == 0) {
          return game_VariableManager_SetFlag(&v4, 1);
        }
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v4);
        if (result == 0 || *(_DWORD*)(result + 32) == 0) {
          return game_VariableManager_SetFlag(&v4, 1);
        }
      }
    }
  }
  return result;
}

__int64 HubUniqueNatives_1028be0(unsigned int a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int128 v11;

  v2 = GameRoutine_d541e0(*(_QWORD*)GameData_212dbb8[0]);
  if (v2 != 0) {
    if (GameData_21c96f8 == 0) {
      goto LABEL_10;
    }
    v4 = *(_QWORD*)(GameData_21c96f8 + 16);
    v5 = *(_QWORD*)(v4 + 80);
    v6 = *(_QWORD*)(v4 + 88);
    if (v5 == v6) {
      goto LABEL_10;
    }
    while (*(_QWORD*)v5 != *(_QWORD*)(v2 + 96)) {
      v5 += 72;
      if (v5 == v6) {
        goto LABEL_10;
      }
    }
    if (*(_DWORD*)(v5 + 16) != 1 || (*(_BYTE*)(v5 + 20) & 4) == 0) {
    LABEL_10:
      if ((a1 & 0x80000000) != 0 ||
          (v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 120) + 24LL) + 72LL),
           a1 >=
               (unsigned __int64)((*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 120) +
                                                         24LL) +
                                              80LL) -
                                   v8) >>
                                  4)) ||
          (_QWORD)(v11 = *(_OWORD*)(v8 + 16LL * a1)) == 0) {
        v3 = 0;
        v7 = 1;
        return (v7 | v3) & 1;
      }
      if (game_GameModeData_instance_ != 0 &&
          (GameRoutine_65c660(*(_QWORD*)(game_GameModeData_instance_ + 48),
                              &v11) &
           1) != 0 &&
          game_GameModeData_instance_ != 0) {
        v9 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v11);
        if (v9 != 0 && *(int*)(v9 + 32) > 0) {
          v3 = 1;
          v7 = 0;
          return (v7 | v3) & 1;
        }
      }
    }
    v7 = 0;
    v3 = 0;
    return (v7 | v3) & 1;
  }
  v7 = 1;
  return (v7 | v3) & 1;
}

#pragma GCC visibility pop
