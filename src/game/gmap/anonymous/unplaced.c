#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, _QWORD, _QWORD,
                                                  _QWORD);
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__int64 BladeResonance_14b8270(_QWORD);
__int64 Camera_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(float32x4_t*, float32x4_t*);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a3920(__int64 result);
__int64 GameRoutine_176aa90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17bcf90(_QWORD);
__int64 Impl_14def00(_QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 Situation_767300(_QWORD, _QWORD);
__int64 TroopMgr_134d2e0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_19a0e60(_QWORD);
__int64 game_8ae640(_QWORD, _QWORD, _QWORD);
__int64 game_8aef60(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_133f280(void);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
extern _UNKNOWN* GameData_1adf7b0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a83390;
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
extern __int64* GameData_21309c8[5];
extern __int64* GameData_2130e70;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212d748[2];
extern __int64 GameData_21316c8;
extern __int64 GameData_22400f8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5c60(void);
__int64 game_gmap_anonymous_131dac0();
__int64 game_gmap_anonymous_14afb00_alt1(__int64 a1, __int64 a2) __asm__(
    "game_gmap_anonymous_14afb00");
void game_gmap_anonymous_1523820(__int64 a1, char a2);
void game_gmap_anonymous_15377f0(__int64 a1);
void game_gmap_anonymous_1537930(__int64 a1);
void game_gmap_anonymous_15382f0(__int64 a1);
__int64 game_gmap_anonymous_1542460_alt1(__int64 a1) __asm__(
    "game_gmap_anonymous_1542460");
__int64 GameRoutine_1537c80(_QWORD, _QWORD);
__int64 MiasmaManager_14ab300(_QWORD, _QWORD);
__int64 SpotMgr_1333f20(__int64);
__n128 GameRoutine_14c6620();
__n128 SpotMgr_1334560(__int64);
extern _UNKNOWN GameData_1abd669;
extern __int64* GameData_212c780;
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416b0;
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void game_gmap_anonymous_14aeae0();
__int64 game_gmap_anonymous_14af3a0(__int64 result);
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, const char*);
_QWORD* Situation_767300_alt1(__int64*, _QWORD*) __asm__("Situation_767300");
__attribute__((swiftcall)) void
TroopMgr_134b820_alt1(PSEUDO_X8, __int64) __asm__("TroopMgr_134b820");
__attribute__((swiftcall)) void
UnitActor_81d430_alt1(PSEUDO_X8, __int64) __asm__("UnitActor_81d430");
__int64* Manager_bc6460_alt1(_QWORD*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(_QWORD*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__attribute__((swiftcall)) void
snd_playAt_ff5f0_alt1(PSEUDO_X8, __int64, __int64, __int64, __int64,
                      unsigned int, unsigned int, int, float,
                      float) __asm__("snd_playAt_ff5f0");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
_QWORD* game_gmap_anonymous_1542460(__int64* a1);
_QWORD* GameHr_14a10d0_alt1(_QWORD*, __int64, __int64,
                            __int64) __asm__("GameHr_14a10d0");
__int64 game_14a3920(__int64 result);
__int64* game_8aef60_alt1(__int64, unsigned __int16*) __asm__("game_8aef60");
__int64 GameRoutine_176aa90_alt1(__int64, _QWORD*,
                                 int) __asm__("GameRoutine_176aa90");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
bool game_8ae640_alt1(__int64*, __int64, char) __asm__("game_8ae640");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void game_gmap_anonymous_14afb00(__int64 a1);

__int64 game_gmap_anonymous_131dac0()
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64* i;
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _QWORD* j;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* k;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float32x4_t* v26;
  __int64* v27;

  if (*(_BYTE*)(*GameData_2130e70 + 52) != 0) {
    return 1;
  }
  v1 = GameData_212c790;
  if (game_GameModeData_instance_ != 0) {
    v2 = *GameData_212c790;
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v3 = *(_QWORD*)(v2 + 8);
      if ((*(_DWORD*)(v3 + 56) & 0x80000000) != 0) {
        for (i = *(__int64**)(v3 + 8);; ++i) {
          v5 = *i;
          if (*(_QWORD*)(*i + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
            break;
          }
        }
        if ((*(_DWORD*)(v5 + 84) & 0x80000000) != 0) {
          *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 2;
          return 3;
        }
      }
    }
  }
  else {
    v2 = *GameData_212c790;
  }
  v6 = *(_QWORD*)(v2 + 8);
  v7 = *(_DWORD*)(v6 + 56);
  v8 = *(_QWORD**)(v6 + 8);
  v9 = *(_QWORD**)(v6 + 16);
  if (v7 < 0) {
    if (v8 != v9) {
      for (j = v8 + 1;; ++j) {
        v10 = *(j - 1);
        if (*(_QWORD*)(v10 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0) {
          break;
        }
      }
      goto LABEL_25;
    }
    return 1;
  }
  if (v8 == v9) {
    return 1;
  }
  v10 = *v8;
  if (*(_DWORD*)(*v8 + 84LL) != v7) {
    v11 = v8 + 1;
    do {
      v12 = *v11++;
      v10 = v12;
    } while (*(_DWORD*)(v12 + 84) != v7);
  }
LABEL_25:
  if ((*(_WORD*)(v10 + 544) & 0x80) != 0) {
    return 1;
  }
  if (v7 < 0) {
    for (k = v8 + 1;; ++k) {
      v18 = *(k - 1);
      if (*(_QWORD*)(v18 + 96) == 0 && *(_QWORD*)(v18 + 552) == 0) {
        break;
      }
    }
  }
  else {
    v15 = *v8;
    v14 = v8 + 1;
    if (*(_DWORD*)(v15 + 84) != v7) {
      do {
        v16 = *v14++;
      } while (*(_DWORD*)(v16 + 84) != v7);
    }
  }
  game_gmap_133f280();
  v19 = *(_QWORD*)(*v1 + 8);
  v20 = *(_DWORD*)(v19 + 56);
  v21 = *(__int64**)(v19 + 8);
  if (v20 < 0) {
    while (1) {
      v23 = *v21;
      if (*(_QWORD*)(*v21 + 96) == 0 && *(_QWORD*)(v23 + 552) == 0) {
        break;
      }
      ++v21;
    }
  }
  else {
    v24 = *v21;
    v22 = v21 + 1;
    v23 = v24;
    if (*(_DWORD*)(v24 + 84) != v20) {
      do {
        v25 = *v22++;
        v23 = v25;
      } while (*(_DWORD*)(v25 + 84) != v20);
    }
  }
  v26 = *(float32x4_t**)(v23 + 16);
  if (v26 != nullptr) {
    GameRoutine_1317f10(*(float32x4_t**)(*GameData_212d708 + 16), v26 + 2);
  }
  BladeResonance_14b8270(*(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL));
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 3;
  TroopMgr_134d2e0(*(_QWORD*)(*v1 + 8));
  v27 = GameData_212d728[0];
  game_19a0e60(*(_QWORD*)(*GameData_212d728[0] + 8) + 32LL);
  *(_BYTE*)(*(_QWORD*)(*v27 + 8) + 5835LL) = 1;
  return 3;
}

void game_gmap_anonymous_14aeae0()
{
  __int64* v0;
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  _QWORD* v17;
  __int64* v18;
  __int64 v19;
  _QWORD* i;
  __int64* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  _QWORD* j;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  unsigned int* v36;

  v0 = GameData_212c790;
  v1 = *(_QWORD*)(*GameData_212c790 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    if (v3 != v4) {
      v5 = v3;
      do {
        v7 = *v5++;
        v6 = v7;
        if (*(_DWORD*)(v7 + 84) == v2) {
          goto LABEL_14;
        }
      } while (v5 != v4);
    }
  LABEL_13:
    v6 = 0;
    goto LABEL_14;
  }
  if (v3 == v4) {
    goto LABEL_13;
  }
  v8 = v3;
  while (1) {
    v6 = *v8;
    if (*(_QWORD*)(*v8 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v8 == v4) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v9 = *(_DWORD*)(v6 + 540);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = *(_QWORD*)(v6 + 24);
    v13 = *(_QWORD*)(v6 + 32) - v12;
    v14 = v12 + 8LL * (unsigned int)v11;
    if (v11 < v13 >> 3) {
      v6 = v14;
    }
  }
  v15 = GameData_212c780;
  if (game_GameModeData_instance_ == 0 ||
      (v16 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
      *(_BYTE*)(v16 + 152) != 4 ||
      *(_QWORD*)(v16 + 168) != *(_QWORD*)(*(_QWORD*)v6 + 120LL)) {
    if (v2 < 0) {
      if (v3 != v4) {
        for (i = v3 + 1;; ++i) {
          v17 = (_QWORD*)*(i - 1);
          if (v17[12] == 0 && v17[69] == 0) {
            break;
          }
        }
      LABEL_32:
        if (v17[4] == v17[3]) {
          if (v2 < 0) {
            for (j = v3 + 1;; ++j) {
              v22 = (_QWORD*)*(j - 1);
              if (v22[12] == 0 && v22[69] == 0) {
                break;
              }
            }
          }
          else {
            v23 = *v3;
            v21 = v3 + 1;
            v22 = (_QWORD*)v23;
            if (*(_DWORD*)(v23 + 84) != v2) {
              do {
                v24 = *v21++;
                v22 = (_QWORD*)v24;
              } while (*(_DWORD*)(v24 + 84) != v2);
            }
          }
          v26 = (__int64*)v22[3];
          v27 = (__int64*)v22[4];
          while (v26 != v27) {
            v28 = *v26++;
            SpotMgr_1333f20(v28);
          }
        }
      }
    }
    else if (v3 != v4) {
      v17 = (_QWORD*)*v3;
      if (*(_DWORD*)(*v3 + 84) != v2) {
        v18 = v3 + 1;
        do {
          v19 = *v18++;
          v17 = (_QWORD*)v19;
        } while (*(_DWORD*)(v19 + 84) != v2);
      }
      goto LABEL_32;
    }
    SpotMgr_1334560(*(_QWORD*)(*v15 + 8));
  }
  v29 = GameData_21316c8;
  if (*(_QWORD*)GameData_21316c8 != 0) {
    GameRoutine_14c6620();
  }
  if (*(_BYTE*)(*GameData_2130e70 + 52) == 0) {
    v30 = *(_QWORD*)(*v0 + 8);
    v31 = *(_DWORD*)(v30 + 56);
    v32 = *(__int64**)(v30 + 8);
    v33 = *(__int64**)(v30 + 16);
    if (v31 < 0) {
      for (; v32 != v33; ++v32) {
        v34 = *v32;
        if (*(_QWORD*)(*v32 + 96) == 0 && *(_QWORD*)(v34 + 552) == 0) {
          goto LABEL_57;
        }
      }
    }
    else if (v32 != v33) {
      while (1) {
        v35 = *v32++;
        v34 = v35;
        if (*(_DWORD*)(v35 + 84) == v31) {
          break;
        }
        if (v32 == v33) {
          goto LABEL_53;
        }
      }
    LABEL_57:
      v36 = *(unsigned int**)v34;
      goto LABEL_58;
    }
  LABEL_53:
    v36 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  LABEL_58:
    SpotMgr_1333f20((__int64)v36);
    SpotMgr_1334560(*(_QWORD*)(*v15 + 8));
    *(_DWORD*)(*(_QWORD*)v29 + 152LL) = 7;
  }
}

__int64 game_gmap_anonymous_14af3a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  int* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  bool v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  _QWORD v34[2];

  v1 = *(_QWORD*)(GameData_22416b0 + 8);
  v2 = v1 + 24;
  if (*(_QWORD*)(v1 + 32) != *(_QWORD*)(v1 + 24)) {
    return MiasmaManager_14ab300(result, v2);
  }
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64***)(v3 + 8);
  v6 = *(__int64***)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if ((*v5)[12] == 0 && v7[69] == 0) {
        goto LABEL_13;
      }
    }
  }
  else if (v5 != v6) {
    while (1) {
      v8 = *v5++;
      v7 = v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        break;
      }
      if (v5 == v6) {
        goto LABEL_9;
      }
    }
  LABEL_13:
    v10 = *v7;
    goto LABEL_14;
  }
LABEL_9:
  v9 = result;
  v10 = game_gmap_SpotMgr_GetCurrentSpot(result, v2);
  result = v9;
  v1 = *(_QWORD*)(GameData_22416b0 + 8);
LABEL_14:
  v12 = *(__int64**)v1;
  v11 = *(__int64**)(v1 + 8);
  if (v12 != v11) {
    v13 = *(_QWORD*)(v10 + 120);
    while (1) {
      v15 = *v12++;
      v14 = (int*)v15;
      v16 = *(_QWORD*)(v15 + 112);
      if (*(_QWORD*)(v16 + 48) == v13) {
        break;
      }
      if (v12 == v11) {
        return result;
      }
    }
    v17 = *(unsigned __int16*)(v16 + 76);
    v18 = *v14;
    v19 = result;
    v34[1] = &GameData_1abd669;
    v34[0] = game_HashString(&GameData_1abd669);
    v20 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v21 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v34);
      if (v21 != 0) {
        v20 = *(_DWORD*)(v21 + 32);
      }
      else {
        v20 = 0;
      }
    }
    result = v19;
    if (v17 - v18 == v20) {
      v22 = *(_QWORD*)(GameData_21c96e8 + 8);
      v23 = *(_DWORD*)(v22 + 56);
      v24 = *(__int64**)(v22 + 8);
      v25 = *(__int64**)(v22 + 16);
      if (v23 < 0) {
        for (; v24 != v25; ++v24) {
          v26 = *v24;
          if (*(_QWORD*)(*v24 + 96) == 0 && *(_QWORD*)(v26 + 552) == 0) {
            goto LABEL_32;
          }
        }
      }
      else {
        while (v24 != v25) {
          v27 = *v24++;
          v26 = v27;
          if (*(_DWORD*)(v27 + 84) == v23) {
            goto LABEL_32;
          }
        }
      }
      v26 = 0;
    LABEL_32:
      v28 = *(_DWORD*)(v26 + 540);
      v29 = __OFSUB__(v28, 1);
      v30 = (unsigned int)(v28 - 1);
      if (((v30 & 0x80000000) != 0LL) == v29) {
        v31 = *(_QWORD*)(v26 + 24);
        v32 = *(_QWORD*)(v26 + 32) - v31;
        v33 = v31 + 8LL * (unsigned int)v30;
        if (v30 < v32 >> 3) {
          v26 = v33;
        }
      }
      return GameRoutine_1537c80(v19, *(_QWORD*)v26);
    }
  }
  return result;
}

void game_gmap_anonymous_14afb00(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  int v4;
  unsigned int*** v5;
  unsigned int*** v6;
  unsigned int** v7;
  unsigned int** v8;
  unsigned int* v9;
  __int64 v10;
  unsigned int*** v11;
  unsigned int*** v12;
  unsigned int** v13;
  unsigned int* v14;
  int v15;
  _QWORD* v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  __int64* v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  struct {
    __int64 v44;
    __int64 v45;
    unsigned __int64 v46;
  } v44_;
  struct {
    __int64 v47;
    __int64 v48;
    __int64 v49;
  } v47_;

  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(unsigned int****)(v3 + 8);
  v6 = *(unsigned int****)(v3 + 16);
  if (v4 < 0) {
    if (v5 != v6) {
      while (1) {
        v7 = *v5;
        if ((*v5)[12] == nullptr && v7[69] == nullptr) {
          break;
        }
        if (++v5 == v6) {
          goto LABEL_7;
        }
      }
    LABEL_12:
      v9 = *v7;
      if (*v7 == nullptr) {
        return;
      }
      goto LABEL_13;
    }
  }
  else {
    while (v5 != v6) {
      v8 = *v5++;
      v7 = v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        goto LABEL_12;
      }
    }
  }
LABEL_7:
  v9 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  if (v9 == nullptr) {
    return;
  }
LABEL_13:
  v10 = *(_QWORD*)(*v2 + 8);
  v11 = *(unsigned int****)(v10 + 8);
  v12 = *(unsigned int****)(v10 + 16);
  while (v11 != v12) {
    v13 = *v11;
    if (**v11 == v9) {
      v14 = v13[12];
      if (v14 != nullptr &&
          (unsigned int)*((unsigned __int8*)v14 + 32) - 3 < 2) {
        v15 = *((unsigned __int16*)v14 + 44);
        v44_.v45 = 0;
        v44_.v46 = 0;
        v44_.v44 = 0;
        if (v15 == 0) {
          goto LABEL_58;
        }
        v41 = a1;
        v16 = nullptr;
        v17 = 0;
        do {
          v18 = *(_QWORD*)(*((_QWORD*)v14 + 12) + 16 * v17 + 8);
          v19 = *(unsigned __int8*)(*((_QWORD*)v14 + 14) + v17);
          v42 = v19;
          if (*(_BYTE*)(*((_QWORD*)v14 + 14) + v17) != 0) {
            do {
              if ((unsigned __int64)v16 < v44_.v46) {
                *v16++ = v18;
              }
              else {
                v28 = v44_.v44;
                v29 = (unsigned __int64)v16 - v44_.v44;
                v30 = ((__int64)v16 - v44_.v44) >> 3;
                v31 = v30 + 1;
                if ((unsigned __int64)(v30 + 1) >> 61 != 0) {
                  GameRoutine_6e5c60_alt1();
                }
                v32 = v44_.v46 - v44_.v44;
                if ((__int64)(v44_.v46 - v44_.v44) >> 2 > v31) {
                  v31 = v32 >> 2;
                }
                if ((unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v33 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v33 = v31;
                }
                if (v33 != 0) {
                  if (v33 >> 61 != 0) {
                    GameRoutine_60a210_alt1();
                  }
                  v34 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16, 0);
                }
                else {
                  v34 = 0;
                }
                v35 = v34 + 8 * v33;
                v36 = v34 + v29 - 8 * v30;
                *(_QWORD*)(v34 + v29) = v18;
                v16 = (_QWORD*)(v34 + v29 + 8);
                memcpy_alt1(v36, v28, v29);
                v44_.v44 = v36;
                v44_.v46 = v35;
                if (v28 != 0) {
                  v37 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v37 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v28);
                }
              }
              --v19;
              v44_.v45 = (__int64)v16;
            } while (v19 != 0);
          }
          v43 = 0;
          if (v18 != 0) {
            v20 = *(unsigned __int16*)(v18 + 16);
            HIDWORD(v43) = 1;
            LOWORD(v43) = v20;
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * v20) +
                          73LL) == 17) {
              nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
              v21 = game_map_MapRandom_instance__ptr[0];
              v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL));
              v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
              v24 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                    (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
              *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                  *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
              *((_DWORD*)v21 + 1) = v22;
              v25 = (v24 >> 8) ^ (v23 >> 19) ^ v24 ^ v23;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21) = v23;
              *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v21 + 4) = v25;
              nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
              v20 = (unsigned __int16)v43;
              HIDWORD(v43) =
                  HIDWORD(v43) & 0xFFFFC00F |
                  (16 *
                   (((16 * (v25 - 1000 * ((v25 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                     4) &
                    0x3FF));
            }
            v47_.v48 = 0;
            v47_.v49 = 0;
            v47_.v47 = 0;
            if (v42 != 0 && v20 != 0) {
              v27 = v42 - 1;
              if (v20 != 0) {
              LABEL_31:
                game_8aef60_alt1((__int64)&v47_.v47, (unsigned __int16*)&v43);
              }
              while (v27 != 0) {
                --v27;
                if ((_WORD)v43 != 0) {
                  goto LABEL_31;
                }
              }
            }
          }
          else {
            v47_.v48 = 0;
            v47_.v49 = 0;
            v47_.v47 = 0;
          }
          game_8ae640_alt1(&v47_.v47, 0, 0);
          if (v47_.v47 != 0) {
            v47_.v48 = v47_.v47;
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v47_.v47);
          }
          ++v17;
        } while (v17 < *((unsigned __int16*)v14 + 44));
        v14 = v13[12];
        a1 = v41;
        if (v14 == nullptr) {
          v39 = 0;
        }
        else {
        LABEL_58:
          if (game_GameModeData_instance_ != 0) {
            if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
              v39 = *((unsigned __int16*)v14 + 67);
            }
            else {
              v39 = *((unsigned __int8*)v14 + 133);
            }
          }
          else {
            v39 = *((unsigned __int8*)v14 + 133);
          }
        }
        GameRoutine_176aa90_alt1(a1, &v44_.v44, v39);
        if (v44_.v44 != 0) {
          v44_.v45 = v44_.v44;
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v44_.v44);
        }
        return;
      }
    }
    ++v11;
  }
}

void game_gmap_anonymous_1523820(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  unsigned __int64 v6;
  __int128 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64* v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int v21;
  unsigned int i;
  __int64 v23;
  float32x4_t v24;
  unsigned int v25;
  unsigned int j;
  float32x4_t* v27;
  struct {
    __int64 v28;
    __int64 v29;
  } v28_;
  struct {
    _QWORD v30[3];
    int v31;
    char gap44_[4];
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v30_;

  v14 = COERCE_AS(__typeof__(v14),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v5 = 2)
           : (v5 = 3),
       (v5 & v4) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v6 + 172) == *(float*)(v6 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160),
          v14 = COERCE_AS(__typeof__(v14),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v7 = *(_OWORD*)(v6 + 208);
    }
    if (*((float*)&v7 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                        v6 + 160, *((float*)&v7 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_14:
      if (*GameData_21309c8[0] == 0 ||
          *(_BYTE*)(*GameData_21309c8[0] + 8) != 2) {
        v9 = *(_QWORD*)GameData_212c540;
        v8 = *((_QWORD*)GameData_212c540 + 1);
        v11 = *(_QWORD*)GameData_212c548;
        v10 = *((_QWORD*)GameData_212c548 + 1);
        v30_.v30[0] = 0;
        v30_.v30[1] = 0;
        v30_.v32 = v9;
        v30_.v33 = v8;
        v30_.v36 = v9;
        v30_.v37 = v8;
        v30_.v34 = v11;
        v30_.v35 = v10;
        v30_.v31 = 5;
        if ((a2 & 1) != 0) {
          v12 = "Btl_Ish_Warp_In";
        }
        else {
          v12 = "Btl_Ish_Warp_Out";
        }
        v30_.v30[2] = v12;
        v13 = ({
          unsigned __int128 r_ = Manager_bc6460_alt1_pair(
              *(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v30_.v30, 0);
          v14 = COERCE_AS(__typeof__(v14), (unsigned long long)(r_ >> 64));
          (__int64*)(unsigned long long)r_;
        });
        GameHr_14a10d0_alt1(&v28_.v28, (__int64)v13, v14,
                            (__int64)&GameData_1a9f09e),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v15 = v28_.v28;
        v16 = v28_.v29;
        if (v28_.v29 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v28_.v29 + 8), 1u,
                                    memory_order_relaxed);
        }
        v17 = *(_QWORD*)(a1 + 176);
        *(_QWORD*)(a1 + 168) = v15;
        *(_QWORD*)(a1 + 176) = v16;
        if (v17 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v17),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          v16 = *(_QWORD*)(a1 + 176);
        }
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak_alt1(v16),
                v14 =
                    COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        v18 = v28_.v29;
        if (v28_.v29 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v28_.v29 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak_alt1(v18),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v19 = *(_QWORD*)(a1 + 168);
        v20 = *(_QWORD*)v19;
        if (*(_QWORD*)v19 != 0) {
          if (*(_DWORD*)(v20 + 16) != *(_DWORD*)(v19 + 8)) {
            goto LABEL_39;
          }
          v21 = *(_DWORD*)(v20 + 36);
          if (v21 == 0) {
            goto LABEL_39;
          }
          for (i = 0; i < v21; ++i) {
            if ((int)v21 > (int)i) {
              v23 = *(_QWORD*)(v20 + 40 + 8LL * (int)i);
              if (v23 != 0) {
                *(_OWORD*)(v23 + 32) = GameData_1a83390;
                *(_BYTE*)(v23 + 128) = 1;
                v21 = *(_DWORD*)(v20 + 36);
              }
            }
          }
          v19 = *(_QWORD*)(a1 + 168);
          v20 = *(_QWORD*)v19;
          if (*(_QWORD*)v19 != 0) {
          LABEL_39:
            v24 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(a1 + 152) + 48LL),
                            *(float32x4_t*)(*(_QWORD*)(a1 + 152) + 64LL));
            if (*(_DWORD*)(v20 + 16) == *(_DWORD*)(v19 + 8)) {
              v25 = *(_DWORD*)(v20 + 36);
              if (v25 != 0) {
                for (j = 0; j < v25; ++j) {
                  if ((int)v25 > (int)j) {
                    v27 = *(float32x4_t**)(v20 + 40 + 8LL * (int)j);
                    if (v27 != nullptr) {
                      v27[1] = v24;
                      LANES128(v27[8]).n128_u8[0] = 1;
                      v25 = *(_DWORD*)(v20 + 36);
                    }
                  }
                }
              }
            }
          }
        }
        game_14a3920(v19),
            v14 = COERCE_AS(__typeof__(v14),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_DWORD*)(a1 + 184) = 1106247680;
      }
    }
  }
}

void game_gmap_anonymous_15377f0(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  __int64* v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_14;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 1.0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 1.0f) {
      goto LABEL_14;
    }
  }
  v6 = GameData_212d718;
  Camera_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                 *(_QWORD*)(*GameData_212d708 + 16) + 80LL, 0);
  if (*(float*)(*(_QWORD*)(*v6 + 16) + 796LL) ==
      *(float*)(*(_QWORD*)(*v6 + 16) + 792LL)) {
  LABEL_14:
    v7 = *(unsigned __int8**)(a1 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      v9 = v8 > 0x10;
      v10 = (1 << v8) & 0x1CE00;
      if (!v9 && v10 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
}

void game_gmap_anonymous_1537930(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  float v11;
  __int64 v13;
  __int64 v14;

  v2 = *(_QWORD*)GameData_212cf80[0];
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 72LL) ==
      300) {
    *(_BYTE*)(a1 + 168) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  v14 = 0;
  if (v3 != 0) {
    LOBYTE(v14) = *(_BYTE*)(v3 + 16);
  }
  LegionPool_936f60((void*)(&v13), *(_QWORD*)(v2 + 8), &v14, 0);
  v4 = *(_QWORD**)(*(_QWORD*)(a1 + 152) + 168LL);
  if (v4 != nullptr && *(_BYTE*)(*(_QWORD*)(a1 + 160) + 155LL) != 0) {
    v5 = Impl_14def00(*v4);
    GameRoutine_17bcf90(v5);
  }
  v6 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v8 = (v7 & 8) != 0 ? 2 : 3;
    if ((v8 & v7) == 0) {
      goto LABEL_23;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v9 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160);
    }
    else {
      v10 = *(_OWORD*)(v9 + 208);
    }
    if (*((float*)&v10 + 3) == 1.0f) {
      LODWORD(v11) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                  (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                                     v9 + 160, *((float*)&v10 + 3)))
                         .n128_u32[3];
      v6 = game_ProcGameSkipView_instance_;
      if (v11 == 1.0f && game_ProcGameSkipView_instance_ != 0) {
      LABEL_23:
        if (*(_BYTE*)(v6 + 152) != 0) {
          *(_DWORD*)(v6 + 156) |= 2u;
        }
      }
    }
  }
}

void game_gmap_anonymous_15382f0(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  __int16 v11;
  float v12;
  _BYTE* v13;
  unsigned __int8 v14;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_15;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 1.0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 1.0f) {
      goto LABEL_15;
    }
  }
  if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 2) {
  LABEL_15:
    v6 = *(unsigned __int8**)(a1 + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    v11 = 8;
    goto LABEL_22;
  }
  v12 = *(float*)(a1 + 160) +
        (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                        0x1.0aef000000000p+4f) /
                0x1.f400000000000p+9f);
  *(float*)(a1 + 160) = v12;
  if (v12 >= 0.5f) {
    v13 = *(_BYTE**)(a1 + 16);
    if (v13 != nullptr) {
      v14 = *v13 - 9;
      if (v14 <= 7u && ((0xE7u >> v14) & 1) != 0) {
        v11 = 128;
      LABEL_22:
        *(_WORD*)(a1 + 136) |= v11;
      }
    }
  }
}

_QWORD* game_gmap_anonymous_1542460(__int64* a1)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int128 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned int* v17;
  __int64 v18;
  __int64 v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  unsigned __int64 v24;
  float32x4_t v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  unsigned int v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* result;
  struct {
    _QWORD v33[2];
    int v34;
  } v33_;
  struct {
    float32x4_t v35;
    const char* v36;
    int v37;
    char gap76_[4];
    float32x4_t v38;
    __int128 v39;
    __int64 v40;
    __int64 v41;
  } v35_;

  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v6 = v5 + 1;
    v7 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v6++;
        v7 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  v10 = *(_OWORD*)(v7 + 48);
  v33_.v33[1] = *(_QWORD*)(v7 + 48);
  v33_.v34 = DWORD2(v10);
  v33_.v33[0] = GameData_212d1e0[0] + 2;
  snd_Fade_Fade_10c830_alt1((__int64)&v35_.v35, 0x0.0p+0f),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_playAt_ff5f0_alt1((void*)(handle), (__int64)"SE_SYS_GMAP_Encount",
                        (__int64)"SE_SYS_GMAP_Encount", (__int64)v33_.v33,
                        (__int64)&v35_.v35, 0, 0x10001u, 0, 0x0.0p+0f,
                        0x1.0000000000000p+0f),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  snd_Fade_Destroy_Fade_alt1(&v35_.v35),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v11 = *(_QWORD*)(*v2 + 8);
  v12 = *(_DWORD*)(v11 + 56);
  v13 = *(__int64**)(v11 + 8);
  v14 = *(__int64**)(v11 + 16);
  if (v12 < 0) {
    for (; v13 != v14; ++v13) {
      v15 = *v13;
      if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(v15 + 552) == 0) {
        goto LABEL_18;
      }
    }
  LABEL_14:
    v17 = game_gmap_SpotMgr_GetCurrentSpot_alt1(),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_19;
  }
  if (v13 == v14) {
    goto LABEL_14;
  }
  while (1) {
    v16 = *v13++;
    v15 = v16;
    if (*(_DWORD*)(v16 + 84) == v12) {
      break;
    }
    if (v13 == v14) {
      goto LABEL_14;
    }
  }
LABEL_18:
  v17 = *(unsigned int**)v15;
LABEL_19:
  TroopMgr_134b820_alt1((void*)(&v35_.v35), (__int64)v17),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *(_QWORD*)LANES128(v35_.v35).n128_u64[0];
  LANES128(v35_.v35).n128_u64[1] = LANES128(v35_.v35).n128_u64[0];
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                         v19,
                                     LANES128(v35_.v35).n128_i64[0]),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LANES128(v35_.v35).n128_u64[1] = (unsigned __int64)&GameData_1adf7b0;
  v20 = 0x0.0p+0f;
  LANES128(v35_.v35).n128_u64[0] =
      game_HashString_alt1((__int64)&GameData_1adf7b0),
  v29 = COERCE_AS(__typeof__(v29),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ != 0) {
    v21 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        LANES128(v35_.v35).n128_u64),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v21 != 0) {
      v20 = (float)*(int*)(v21 + 32);
    }
  }
  UnitActor_81d430_alt1((void*)(&v35_.v35), v18 + 112),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v22 = LANES128(v35_.v35).n128_f32[1];
  v23 = *(float*)(v18 + 52);
  UnitActor_81d430_alt1((void*)(&v35_.v35), v18 + 112),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LODWORD(v24) = 0;
  *((float*)&v24 + 1) = v20 + (float)(v22 - v23);
  v25 = v35_.v35;
  v35_.v35 = (__typeof__(v35_.v35)){0};
  v26 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v35_.v37 = 5;
  v35_.v38 = vaddq_f32(v25, COERCE_AS(float32x4_t, v24));
  v35_.v39 = GameData_1a83390;
  v27 = *((_QWORD*)GameData_212c540 + 1);
  v35_.v40 = *(_QWORD*)GameData_212c540;
  v35_.v41 = v27;
  v35_.v36 = "UI_Gmap_Icon_Exclamation";
  v28 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(v26, (__int64)&v35_.v35, 1);
    v29 = COERCE_AS(__typeof__(v29), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameHr_14a10d0(&v35_.v35, (__int64)v28, v29, &GameData_1a9f09e),
      v29 = COERCE_AS(__typeof__(v29),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v30 = (_QWORD*)a1[20];
  if ((unsigned __int64)v30 >= a1[21]) {
    result = Situation_767300_alt1(a1 + 19, &v35_.v35),
    v29 = COERCE_AS(__typeof__(v29),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v31 = LANES128(v35_.v35).n128_i64[1];
    a1[20] = (__int64)result;
    if (v31 == 0) {
      return result;
    }
    goto LABEL_30;
  }
  *v30 = LANES128(v35_.v35).n128_u64[0];
  v31 = LANES128(v35_.v35).n128_i64[1];
  v30[1] = LANES128(v35_.v35).n128_u64[1];
  if (v31 != 0) {
    atomic_fetch_add_explicit(
        (atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) + v31), 1u,
        memory_order_relaxed);
  }
  result = v30 + 2;
  a1[20] = (__int64)(v30 + 2);
  if (v31 != 0) {
  LABEL_30:
    if (atomic_fetch_add(
            (atomic_ullong* volatile)((char*)((_UNKNOWN**)0x8LL) + v31),
            0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31),
          v29 = COERCE_AS(__typeof__(v29),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v31);
    }
  }
  return result;
}

#pragma GCC visibility pop
