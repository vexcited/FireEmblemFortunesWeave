#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e2a60(void);
__int64 GameRoutine_657b10(void);
__int64 GameRoutine_d8d1a0(void);
__int64 GameRoutine_d983a0(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fdc738[])();
extern __int64 (*game_hub_Manager_vtable[])();
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern int GameData_220f94c;
__int64
Manager_Destructor_d52540_alt1(__int64 a1) __asm__("Manager_Destructor_d52540");
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__int64 CharacterControllerPlayer_10c8e20(void);
__int64 DungeonController_f5e870(void);
__int64 DungeonRouteReport_f604e0(_QWORD);
__int64 GameManager_a32880(_QWORD);
__int64 GameRoutine_120ef00(_QWORD);
__int64 GameRoutine_15e1e60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17b8bd0(void);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657df0(_QWORD);
__int64 GameRoutine_9b86d0(_QWORD, _QWORD);
__int64 GameRoutine_cdeee0(_QWORD, _QWORD);
__int64 GameRoutine_d1fb60(__int64, char);
__int64 GameRoutine_d5d770(_QWORD, _QWORD);
__int64 GameRoutine_d6e4d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d783a0(_QWORD, float);
__int64 GameRoutine_d799f0(_QWORD);
__int64 GameRoutine_d8d080(void);
__int64 GameRoutine_d8d1a0_alt1(_QWORD) __asm__("GameRoutine_d8d1a0");
__int64 GameRoutine_d8d2c0(_QWORD);
__int64 GameRoutine_d97a00(_QWORD, double);
__int64 GameRoutine_d9eb80(_QWORD);
__int64 GameRoutine_d9edf0(void);
__int64 GameRoutine_d9f4e0(_QWORD);
__int64 GameRoutine_dbced0(_QWORD, _QWORD);
__int64 GameRoutine_f60b80(_QWORD);
__int64 GameRoutine_fa05c0(_QWORD);
__int64 MapManager_d6e320(void);
__int64 ProcInst_657b10(_QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 nn_oe_SetCpuBoostMode(_QWORD);
__int64 nn_os_SignalEvent(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern _UNKNOWN GameData_1a89fb8;
extern _UNKNOWN GameData_1a91981;
extern _UNKNOWN GameData_1a919f8;
extern _UNKNOWN GameData_1a9da0c;
extern _UNKNOWN GameData_1ab8849;
extern _UNKNOWN GameData_1aee223;
extern _UNKNOWN GameData_1afd9c8;
extern _UNKNOWN GameData_21a60e8;
extern __int64 (*GameData_1fdc888[])();
extern __int64 (*GameData_1fdc908[])();
extern __int64 (*GameData_1fdc988[])();
extern __int64 (*GameData_1fdca08[])();
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc0[8];
extern __int64 GameData_212dc30[8];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212ebf8[2];
extern __int64 GameData_21a60e0;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9608;
extern __int64 GameData_21d96b8;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3ca8;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3cc0;
extern __int64 GameData_21f3ce8;
extern __int64 GameData_21f3d08;
extern __int64 GameData_220b6e0;
extern __int64 GameData_220d638;
extern __int64 GameData_220f820;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_frame_clock;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_sound_g_game_sound;
extern __int64 snd_g_fileIndex;
extern __int64* GameData_212ca10[133];
extern char GameData_21c9699;
float GameRoutine_d78a40(_QWORD);
_BYTE* game_hub_Manager_SetCaptureOnlyCallback(_BYTE* result, char a2);
__int64 Manager_d53d10_alt1(__int64 a1, _BYTE* a2,
                            unsigned __int8* a3) __asm__("Manager_d53d10");
_QWORD* Manager_d53ec0(_QWORD* result, char a2);
__int64 Manager_d540c0();
__int64 Manager_d541e0();
void Manager_d54600(__int64 a1);
void Manager_d54760(__int64 a1);
__int64 Manager_d54850(__int64 a1, char a2);
__int64 Manager_d549b0(__int64 a1);
_BYTE* game_hub_Manager_BeginPopWorldPost(__int64 a1);
__int64 Manager_d54c90(__int64 a1);
__int64 Manager_d55030_alt1(__int64 a1) __asm__("Manager_d55030");
__int64 Manager_d551a0(__int64 a1);
__int64 Manager_d55250(__int64 result, __int64 a2, int a3);
__int64 Manager_d55430();
__int64 Manager_d554e0(__int64 result, char a2);
void game_hub_Manager_InitializeArea_lambda0_Invoke();
__int64 game_hub_Manager_BeginPopWorldPost_lambda0_Invoke(__int64 a1);
void game_hub_Manager_SetCaptureOnlyCallback_lambda0_Invoke(
    __int64 a1, unsigned __int8* a2);
void game_hub_Manager_SetCaptureOnlyCallback_lambda1_Invoke(__int64 a1,
                                                            _BYTE* a2);
__int64 game_hub_Manager_SetCaptureOnlyCallback_lambda2_Invoke();
__int64 GameRoutine_d6f1a0(_QWORD);
__int64 GameRoutine_dffec0(_QWORD);
extern __int64* GameData_212eba8[8];
extern __int64 GameData_21f5300;
extern __int64 GameData_220b6f0;
extern __int64 GameData_220f8b0;
extern __int64 GameData_220f950;
extern __int64 eft_g_effectSystem;
extern __int64 game_ProcFadeView_instance_;
extern int GameData_21d92e0;
__attribute__((swiftcall)) void Manager_d54320(PSEUDO_X8 x8_);
__int64 DungeonController_f5e9c0(_QWORD);
__int64 DungeonEnemyTrajectory_fa0960(_QWORD, float);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 game_hub_DungeonRouteReport_Update(_QWORD);
__int64 nn_os_ClearEvent(_QWORD);
extern __int64 GameData_21f8018;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
__int64 Manager_d52bf0(__int64 result);
__int64 Manager_d55330(__int64 result);
__int64 GameRoutine_15e2a60_alt1() __asm__("GameRoutine_15e2a60");
__int64 GameRoutine_d8d1a0_alt2(__int64 result) __asm__("GameRoutine_d8d1a0");
__int64 ProcInst_657b10_alt1(__int64) __asm__("ProcInst_657b10");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void HubScript_Destructor(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Manager_Destructor_d52540(__int64 a1);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 GameHr_17b8bd0(__int64 result);
__int64 GameHr_fa05c0(__int64 result);
__int64 GameManager_a32880_alt1(__int64) __asm__("GameManager_a32880");
__int64 GameRoutine_120ef00_alt1() __asm__("GameRoutine_120ef00");
__int64 ScheduleManager_d9edf0();
__int64 ScheduleManager_d9f4e0(__int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
float GameRoutine_d5d770_alt1(__int64,
                              unsigned __int8*) __asm__("GameRoutine_d5d770");
void DungeonRouteReport_f60b80(__int64);
void GameRoutine_dbced0_alt1(__int64*, __int64) __asm__("GameRoutine_dbced0");
void game_hub_MapManager_Load(__int64, int, __int64);
void Manager_d53d10(__int64 a1, _BYTE* a2, __int64* a3);
unsigned __int64 Manager_d55030(__int64 a1);
__int64 GameRoutine_1553130(__int64 result);
__int64 GameRoutine_867df0(__int64);
__int64 GameRoutine_d8cb20(__int64 result);
__int64 HubCharacterNatives_cba580(__int64 result);
__int64 Input_d8cd20(__int64 result);
__int64 Time_e1e170(__int64);
extern __int64* GameData_212d458[7];
extern __int64 GameData_220f848;
void GameRoutine_d799f0_alt1(__int64) __asm__("GameRoutine_d799f0");
void Manager_d54e40(__int64 a1);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* GameRoutine_66b000(__int64*, _QWORD*);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void
    game_hub_LocatorDispos_BuildInitTransformLocator(PSEUDO_X8, _QWORD, _QWORD,
                                                     _QWORD, _QWORD);
__attribute__((swiftcall)) void
game_hub_LocatorDispos_CreateExternalDataImpl(PSEUDO_X8, __int64, const char*,
                                              unsigned __int64, __int64**,
                                              __int64, __int64);
__int64 GameHr_f5e590(__int64);
__int64 GameRoutine_f8f3e0(__int64 result, __int64*);
__int64 LocatorDispos_db22e0(char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
extern _UNKNOWN GameData_1a9cac4;
extern __int64 (*GameData_1fdc768[])();
extern __int64 (*GameData_1fdc7b8[])();
extern __int64 (*GameData_1fdc808[])();
extern __int64* GameData_212eb88;
extern __int64* GameData_212ee40[2];
extern __int64* GameData_212f978[3];
extern __int64 GameData_212c7e0[5];
extern __int64 GameData_212ec00;
void GameHr_f480c0(__int64, __int64);
void GameHr_f60660(__int64);
void GameHubData_db89d0(__int64, __int64*);
void GameRoutine_6b7aa0(__int64, __int64*, __int64*, unsigned __int64);
void HubNatives_ccbf80(__int64);
void __attribute__((noreturn)) GameRoutine_64aa00();
void Manager_d52cc0(__int64 a1);
void game_hub_Manager_InitializeArea(__int64 a1);

void Manager_Destructor_d52540(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[2];

  *(_QWORD*)a1 = game_hub_Manager_vtable;
  if (*(_BYTE*)(a1 + 773) != 0) {
    *(_BYTE*)(a1 + 773) = 0;
    v2 = GameData_21f3cb8;
    if (GameData_21f3cb8 != 0 && *(_BYTE*)(a1 + 772) != 0) {
      *(_BYTE*)(a1 + 772) = 0;
      GameRoutine_d8d1a0_alt2(v2);
    }
    if (*(_BYTE*)(a1 + 771) != 0 && game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      ProcInst_657b10_alt1(game_hub_ProcHubSeqView_instance_);
      *(_BYTE*)(a1 + 771) = 0;
    }
    GameRoutine_15e2a60_alt1();
  }
  v3 = *(_QWORD*)(a1 + 744);
  v4 = *(_QWORD*)(a1 + 752);
  if (v3 != v4) {
    do {
      v5 = *(_QWORD*)(v3 + 16);
      if ((*(_BYTE*)v3 & 1) != 0) {
        v6 = *(_QWORD*)(v3 + 16);
      }
      else {
        v6 = v3 + 1;
      }
      v38[1] = v6;
      if ((*(_BYTE*)v3 & 1) != 0) {
        v7 = v5;
      }
      else {
        v7 = v3 + 1;
      }
      v38[0] = game_HashString_alt1(v7);
      game_VariableManager_SetFlag_alt1((__int64)v38, 0);
      v3 += 24;
    } while (v3 != v4);
    v4 = *(_QWORD*)(a1 + 752);
    v3 = *(_QWORD*)(a1 + 744);
  }
  if (v3 != v4) {
    v8 = v4;
    do {
      v9 = *(_BYTE*)(v8 - 24);
      v8 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v4 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v11,
                                             v10);
        }
      }
      v4 = v8;
    } while (v8 != v3);
  }
  *(_QWORD*)(a1 + 752) = v3;
  v12 = *(_QWORD*)(a1 + 736);
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak_alt1(v12);
  }
  v13 = *(_QWORD*)(a1 + 744);
  if (v13 != 0) {
    v14 = *(_QWORD*)(a1 + 752);
    if (v13 == v14) {
      goto LABEL_42;
    }
    v15 = *(_QWORD*)(a1 + 752);
    do {
      v16 = *(_BYTE*)(v15 - 24);
      v15 -= 24;
      if ((v16 & 1) != 0) {
        v17 = *(_QWORD*)(v14 - 8);
        if (v17 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v18,
                                             v17);
        }
      }
      v14 = v15;
    } while (v15 != v13);
    v19 = *(_QWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 752) = v13;
    v13 = v19;
    if (v19 != 0) {
    LABEL_42:
      v20 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v20, v13);
    }
  }
  v21 = *(_QWORD*)(a1 + 736);
  if (v21 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
    std___1___shared_weak_count___release_weak_alt1(v21);
  }
  HubScript_Destructor(a1 + 248);
  v22 = *(_QWORD*)(a1 + 224);
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak_alt1(v22);
  }
  v23 = *(_QWORD*)(a1 + 208);
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak_alt1(v23);
  }
  v24 = *(_QWORD*)(a1 + 112);
  if (v24 != 0) {
    v25 = *(_QWORD*)(a1 + 120);
    if (v24 == v25) {
      goto LABEL_65;
    }
    v26 = *(_QWORD*)(a1 + 120);
    do {
      v27 = *(_BYTE*)(v26 - 24);
      v26 -= 24;
      if ((v27 & 1) != 0) {
        v28 = *(_QWORD*)(v25 - 8);
        if (v28 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v29 = 128;
          }
          else {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v29,
                                             v28);
        }
      }
      v25 = v26;
    } while (v26 != v24);
    v30 = *(_QWORD*)(a1 + 112);
    *(_QWORD*)(a1 + 120) = v24;
    v24 = v30;
    if (v30 != 0) {
    LABEL_65:
      v31 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v31, v24);
    }
  }
  if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
    v32 = *(_QWORD*)(a1 + 104);
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v33, v32);
    }
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v34 = *(_QWORD*)(a1 + 80);
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v35 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v35, v34);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v36 = *(_QWORD*)(a1 + 56);
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v37, v36);
    }
  }
  *(_QWORD*)a1 = GameData_1fdc738;
  if (GameData_21f3d10 == a1) {
    GameData_21f3d10 = 0;
    GameData_220f94c = 0;
  }
}

_BYTE* game_hub_Manager_SetCaptureOnlyCallback(_BYTE* result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  __int64 v10;
  int v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;

  if (result[773] == (a2 & 1)) {
    return result;
  }
  result[773] = a2 & 1;
  if ((a2 & 1) == 0) {
    v7 = GameData_21f3cb8;
    if (GameData_21f3cb8 != 0 && result[772] != 0) {
      result[772] = 0;
      v8 = result;
      GameRoutine_d8d1a0_alt1(v7);
      result = v8;
    }
    if (result[771] != 0 && game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      v9 = result;
      ProcInst_657b10(game_hub_ProcHubSeqView_instance_);
      v9[771] = 0;
    }
    return (_BYTE*)GameRoutine_15e2a60();
  }
  if (GameData_21c6978 != 0) {
    v2 = *(_QWORD*)(game_g_frame_clock + 13224);
    v3 = *(_QWORD*)(v2 + 48);
    v4 = *(_QWORD*)(v2 + 56);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 304LL);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v6 = result;
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
        result = v6;
      }
    }
    else {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 304LL);
    }
    v10 = 280;
    if (*(_BYTE*)(v5 + 250) != 0) {
      v10 = 249;
    }
    v11 = *(unsigned __int8*)(v5 + v10);
    if ((unsigned __int8)result[771] != v11 &&
        game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      v12 = result;
      if ((v11 & 1) != 0) {
        GameRoutine_657df0(game_hub_ProcHubSeqView_instance_);
      }
      else {
        ProcInst_657b10(game_hub_ProcHubSeqView_instance_);
      }
      v12[771] = v11;
    }
  }
  v20[0] = GameData_1fdc908;
  v21 = v20;
  v17 = v16;
  v18[0] = GameData_1fdc988;
  v19 = v18;
  v16[0] = GameData_1fdca08;
  GameRoutine_15e1e60(v20, v18, v16);
  if (v17 == v16) {
    v13 = 32;
  }
  else {
    if (v17 == nullptr) {
      goto LABEL_30;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v17 + v13))((__int64)v17);
LABEL_30:
  if (v19 == v18) {
    v14 = 32;
    goto LABEL_34;
  }
  if (v19 != nullptr) {
    v14 = 40;
  LABEL_34:
    (*(void (**)(__int64))(*v19 + v14))((__int64)v19);
  }
  result = v21;
  if (v21 == v20) {
    v15 = 32;
  }
  else {
    if (v21 == nullptr) {
      return result;
    }
    v15 = 40;
  }
  return (_BYTE*)(*(__int64 (**)(__int64))(*v21 + v15))((__int64)v21);
}

__int64 Manager_d52bf0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  bool v6;
  int v7;

  v1 = result;
  if (*(_BYTE*)(result + 769) != 0 && *(_BYTE*)(GameData_21f3d10 + 10) == 1) {
    v2 = *(_DWORD*)(result + 168) - 1;
    *(_DWORD*)(result + 168) = v2;
    if (v2 == 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)(result + 160) + 8LL))(
          result + 160);
    }
    *(_BYTE*)(v1 + 769) = 0;
  }
  v3 = *(_QWORD*)(v1 + 200);
  if (v3 != 0) {
    DungeonController_f5e9c0(*(_QWORD*)(v1 + 200));
    game_hub_DungeonRouteReport_Update(*(_QWORD*)(v3 + 8));
    result = DungeonEnemyTrajectory_fa0960(
        *(_QWORD*)(v3 + 24),
        (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                          104LL) *
                0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  }
  v4 = *(_QWORD*)(v1 + 216);
  if (v4 != 0) {
    v5 = *(_DWORD*)(v4 + 252);
    v6 = __OFSUB__(v5, 1);
    v7 = v5 - 1;
    if (v7 < 0 == v6) {
      *(_DWORD*)(v4 + 252) = v7;
    }
  }
  return result;
}

void Manager_d52cc0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    __int64 v17;
    __int64 v18;
  } v16_;

  v2 = *(_QWORD**)GameData_212c6a0[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 1) {
    if ((v2[6] & 1) != 0) {
      fw_text_String_CopyTerminated(&v16_.v16, v2[8], v2[7]);
    }
    else {
      v3 = v2[6];
      v4 = v2[7];
      v5 = v2[8];
      v16_.v16 = v3;
      v16_.v17 = v4;
      v16_.v18 = v5;
    }
  }
  else {
    LOWORD(v16_.v16) = 0;
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 56);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  v9 = v16_.v17;
  v10 = *v6;
  *(_QWORD*)(a1 + 40) = v16_.v16;
  *(_QWORD*)(a1 + 48) = v9;
  *(_QWORD*)(a1 + 56) = v16_.v18;
  v11 = fw_memory_HeapManager_Allocate(v10, 280, 16, 0);
  v12 = GameData_212f978[0];
  *(_QWORD*)v11 = GameData_1fdc768;
  *(_QWORD*)(v11 + 8) = 0;
  *(_QWORD*)(v11 + 24) = v12 + 2;
  v13 = GameData_212eb88;
  *(_QWORD*)(v11 + 16) = 0;
  *(_QWORD*)(v11 + 48) = 0;
  *(_QWORD*)(v11 + 56) = 0;
  *(_QWORD*)(v11 + 64) = 0;
  *(_QWORD*)(v11 + 72) = 0;
  *(_QWORD*)(v11 + 80) = 0;
  *(_QWORD*)(v11 + 88) = 0;
  *(_QWORD*)(v11 + 96) = 0;
  *(_QWORD*)(v11 + 104) = 0;
  *(_QWORD*)(v11 + 112) = 0;
  *(_QWORD*)(v11 + 120) = 0;
  *(_QWORD*)(v11 + 128) = 0;
  *(_QWORD*)(v11 + 136) = 0;
  *(_QWORD*)(v11 + 144) = 0;
  *(_QWORD*)(v11 + 152) = 0;
  *(_QWORD*)(v11 + 160) = 0;
  *(_QWORD*)(v11 + 168) = 0;
  *(_QWORD*)(v11 + 176) = 0;
  *(_QWORD*)(v11 + 184) = 0;
  *(_QWORD*)(v11 + 192) = 0;
  *(_QWORD*)(v11 + 200) = 0;
  *(_QWORD*)(v11 + 208) = 0;
  *(_QWORD*)(v11 + 216) = 0;
  *(_BYTE*)(v11 + 224) = 0;
  *(_QWORD*)(v11 + 248) = 0;
  *(_DWORD*)(v11 + 256) = 0;
  *(_QWORD*)(v11 + 264) = 0;
  *(_BYTE*)(v11 + 272) = 0;
  *(_DWORD*)(v11 + 276) = 0;
  *(_QWORD*)(v11 + 32) = v13 + 2;
  *(_QWORD*)(v11 + 40) = 0;
  *(_QWORD*)(v11 + 240) = 0;
  *(_QWORD*)(v11 + 232) = v11 + 240;
  GameHr_f480c0(v11 + 24, a1 + 40);
  v14 = *(_QWORD*)(a1 + 224);
  *(_QWORD*)(a1 + 216) = v11 + 24;
  *(_QWORD*)(a1 + 224) = v11;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt1(v14);
  }
  v15 = *(_QWORD*)(a1 + 216);
  if (a1 + 112 != v15 + 32) {
    GameRoutine_6b7aa0(
        a1 + 112, *(__int64**)(v15 + 32), *(__int64**)(v15 + 40),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(v15 + 40) - *(_QWORD*)(v15 + 32)) >> 3));
  }
  *(_QWORD*)(a1 + 192) = *(_QWORD*)(a1 + 192) & 0xFFFFFFFFFFFFFC00LL | 0x14;
  *(_BYTE*)(a1 + 8) = 1;
}

void game_hub_Manager_InitializeArea(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  const char* v33;
  unsigned __int64 v34;
  __int64** v35;
  __int64* v36;
  __int64 v37;
  unsigned __int64 v38;
  bool v39;
  unsigned __int64 v40;
  const char* v41;
  __int64* v42;
  __int64* v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  bool v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64* v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64* v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64** v75;
  __int64** v76;
  char v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  int v84;
  _QWORD* v85;
  _QWORD* v86;
  _QWORD* v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64* v92;
  __int64 v93;
  _QWORD* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  char v103;
  __int64 v104;
  __int64 v105;
  unsigned __int8 v106;
  __int64 v107;
  __int64* v108;
  __int64 v109;
  __int64 v110;
  __int64 v112;
  __int64* v113;
  _QWORD* v114;
  char v115;
  __int64** v116;
  __int64** v117;
  __int64 v118;
  __int64 v119;
  int* v120;
  int v121;
  int v122;
  __int64 v124;
  __int64* v125;
  _QWORD* v126;
  char v127;
  __int64** v128;
  __int64** v129;
  __int64 v130;
  unsigned __int8 v131;
  __int64 v132;
  char v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v140;
  __int64* v141;
  _QWORD* v142;
  char v143;
  __int64 v144;
  __int64** v145;
  __int64 v146;
  __int64* v147;
  __int64 v148;
  int v149;
  __int64 v151;
  __int64* v152;
  _QWORD* v153;
  char v154;
  __int64** v155;
  __int64** v156;
  __int64 v157;
  unsigned __int64 v158;
  struct {
    __int64* v159;
    __int64 v160;
  } v159_;
  struct {
    __int64* v161;
    __int64* v162;
    char* v163;
  } v161_;
  struct {
    __int64* v164;
    __int64 v165;
    char* v166;
  } v164_;
  struct {
    __int64* v167;
    __int64* v168;
    __int64** v169;
  } v167_;
  struct {
    __int64 v170;
    __int64** v171;
  } v170_;
  struct {
    __int64 v172;
    __int64** v173;
    __int64* v174;
  } v172_;
  _BYTE v175[12];

  v175[0] = 0;
  v2 = (__int64*)GameData_212c6a0[0];
  v3 = *(_QWORD*)GameData_212c6a0[0];
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) != 0) {
    v5 = *(_QWORD*)GameData_212c6a0[0] + 48LL;
  }
  else {
    v5 = 0;
  }
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 0) {
    goto LABEL_125;
  }
  v6 = (__int64*)(v3 + 72);
  v7 = *(unsigned __int8*)(v3 + 72);
  v172_.v173 = nullptr;
  v172_.v174 = nullptr;
  v172_.v172 = 0;
  v8 = v7 >> 1;
  if ((v7 & 1) != 0) {
    v8 = *(_QWORD*)(v3 + 80);
  }
  if (v8 != 0) {
    v9 = (__int64*)(a1 + 88);
    if ((__int64*)(a1 + 88) != v6) {
      if ((*(_BYTE*)v9 & 1) != 0) {
        v12 = (__int64*)(a1 + 88);
        if ((v7 & 1) != 0) {
          v13 = *(_QWORD*)(v3 + 88);
        }
        else {
          v13 = v3 + 73;
        }
        SpineModel_64dde0_alt1(v12, v13, v8);
      }
      else if ((v7 & 1) != 0) {
        GameRoutine_64df20_alt1((_QWORD*)(a1 + 88), *(_QWORD*)(v3 + 88),
                                *(_QWORD*)(v3 + 80));
      }
      else {
        v10 = *v6;
        v11 = *(_QWORD*)(v3 + 88);
        *(_QWORD*)(a1 + 96) = *(_QWORD*)(v3 + 80);
        *(_QWORD*)(a1 + 104) = v11;
        *v9 = v10;
      }
    }
    v14 = (__int64*)fw_memory_HeapManager_Allocate(*v4, 24, 16, 0);
    v15 = v14 + 3;
    v16 = v14;
    if ((*(_BYTE*)v9 & 1) != 0) {
      fw_text_String_CopyTerminated(v14, *(_QWORD*)(a1 + 104),
                                    *(_QWORD*)(a1 + 96));
    }
    else {
      v17 = *(_QWORD*)(a1 + 96);
      *v14 = *v9;
      v14[1] = v17;
      v14[2] = *(_QWORD*)(a1 + 104);
    }
    v172_.v173 = (__int64**)v15;
    v172_.v174 = v15;
    v172_.v172 = (__int64)v16;
  }
  else if (&v172_.v172 != (__int64*)(a1 + 112)) {
    GameRoutine_6b7aa0(
        (__int64)&v172_.v172, *(__int64**)(a1 + 112), *(__int64**)(a1 + 120),
        0xAAAAAAAAAAAAAAABLL *
            ((__int64)(*(_QWORD*)(a1 + 120) - *(_QWORD*)(a1 + 112)) >> 3));
  }
  v18 = *(_DWORD*)(v3 + 96);
  if (v18 == 1) {
    v34 = *(_QWORD*)(a1 + 48);
    v33 = *(const char**)(a1 + 56);
    v36 = (__int64*)v172_.v172;
    v35 = v172_.v173;
    v161_.v161 = nullptr;
    v161_.v162 = nullptr;
    v161_.v163 = nullptr;
    v37 = *(_QWORD*)GameData_212ec00;
    v38 = *(unsigned __int8*)(a1 + 40);
    v39 = (v38 & 1) == 0;
    v40 = v38 >> 1;
    if (v39) {
      v41 = (const char*)(a1 + 41);
    }
    else {
      v41 = v33;
    }
    if (!v39) {
      v40 = v34;
    }
    v42 = (__int64*)((char*)v172_.v173 - v172_.v172);
    v158 = v40;
    if (v172_.v173 == (__int64**)v172_.v172) {
      v45 = 0;
    }
    else {
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)v42 >> 3) > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_261;
      }
      v43 = (__int64*)fw_memory_HeapManager_Allocate(
          *v4, (__int64)v172_.v173 - v172_.v172, 16, 0);
      v44 = (char*)v42 + (_QWORD)v43;
      v45 = (__int64)v43;
      v161_.v161 = v43;
      v42 = v43;
      v161_.v163 = v44;
      do {
        if ((*(_BYTE*)v36 & 1) != 0) {
          fw_text_String_CopyTerminated(v42, v36[2], v36[1]);
        }
        else {
          v46 = *v36;
          v47 = v36[2];
          v42[1] = v36[1];
          v42[2] = v47;
          *v42 = v46;
        }
        v36 += 3;
        v42 += 3;
      } while (v36 != (__int64*)v35);
      v161_.v162 = v42;
    }
    v58 = *(unsigned __int8*)(v3 + 104);
    v59 = (v58 & 1) == 0;
    v60 = v58 >> 1;
    if (v59) {
      v61 = v5 + 57;
    }
    else {
      v61 = *(_QWORD*)(v3 + 120);
    }
    if (v59) {
      v62 = v60;
    }
    else {
      v62 = *(_QWORD*)(v3 + 112);
    }
    game_hub_LocatorDispos_CreateExternalDataImpl(
        (void*)(&v167_.v167), v37, v41, v158, &v161_.v161, v61, v62);
    v2 = (__int64*)GameData_212c6a0[0];
    if (v45 != 0) {
      if ((__int64*)v45 != v42) {
        v63 = v42;
        do {
          v64 = *((_BYTE*)v63 - 24);
          v63 -= 3;
          if ((v64 & 1) != 0) {
            v65 = *(v42 - 1);
            if (v65 != 0) {
              if (*(_QWORD*)(*v4 + 200) != 0) {
                v66 = 128;
              }
              else {
                v66 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v4 + v66, v65);
            }
          }
          v42 = v63;
        } while (v63 != (__int64*)v45);
      }
      v67 = *v4;
      v161_.v162 = (__int64*)v45;
      v68 = 128;
      if (*(_QWORD*)(v67 + 200) == 0) {
        v68 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v67 + v68, v45);
    }
    v69 = v167_.v167;
    if (v167_.v168 != v167_.v167) {
      Manager_d53d10(a1, v175, v167_.v167);
      v69 = v167_.v167;
    }
    if (v69 == nullptr) {
      goto LABEL_111;
    }
    if (v69 != v167_.v168) {
      v70 = v167_.v168 - 77;
      do {
        HubNatives_ccbf80((__int64)(v70 + 3));
        if ((*(_BYTE*)v70 & 1) != 0) {
          v71 = v70[2];
          if (v71 != 0) {
            if (*(_QWORD*)(*v4 + 200) != 0) {
              v72 = 128;
            }
            else {
              v72 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v4 + v72, v71);
          }
        }
        v25 = v70 == v69;
        v70 -= 77;
      } while (!v25);
      v167_.v168 = v69;
      v69 = v167_.v167;
      if (v167_.v167 == nullptr) {
        goto LABEL_111;
      }
    }
    v57 = *v4;
    v56 = (__int64)v69;
  LABEL_108:
    v73 = 128;
    if (*(_QWORD*)(v57 + 200) == 0) {
      v73 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v57 + v73, v56);
    goto LABEL_111;
  }
  if (v18 == 0) {
    v20 = *(_QWORD*)(a1 + 48);
    v19 = *(_QWORD*)(a1 + 56);
    v21 = (__int64*)v172_.v172;
    v22 = (__int64*)v172_.v173;
    v164_.v164 = nullptr;
    v164_.v165 = 0;
    v164_.v166 = nullptr;
    v23 = *(_QWORD*)GameData_212ec00;
    v24 = *(unsigned __int8*)(a1 + 40);
    v25 = (v24 & 1) == 0;
    v26 = v24 >> 1;
    if (v25) {
      v27 = a1 + 41;
    }
    else {
      v27 = v19;
    }
    if (v25) {
      v28 = v26;
    }
    else {
      v28 = v20;
    }
    v29 = (__int64)v172_.v173 - v172_.v172;
    if (v172_.v173 == (__int64**)v172_.v172) {
      goto LABEL_51;
    }
    if (0xAAAAAAAAAAAAAAABLL * (v29 >> 3) <= 0xAAAAAAAAAAAAAAALL) {
      v30 = (__int64*)fw_memory_HeapManager_Allocate(
          *v4, (__int64)v172_.v173 - v172_.v172, 16, 0);
      v164_.v164 = v30;
      v164_.v165 = (__int64)v30;
      v164_.v166 = (char*)v30 + v29;
      do {
        if ((*(_BYTE*)v21 & 1) != 0) {
          fw_text_String_CopyTerminated(v30, v21[2], v21[1]);
        }
        else {
          v31 = *v21;
          v32 = v21[2];
          v30[1] = v21[1];
          v30[2] = v32;
          *v30 = v31;
        }
        v21 += 3;
        v30 += 3;
      } while (v21 != v22);
      v164_.v165 = (__int64)v30;
    LABEL_51:
      game_hub_LocatorDispos_BuildInitTransformLocator(
          (void*)(&v167_.v167), v23, v27, v28, &v164_.v164);
      v48 = (__int64)v164_.v164;
      if (v164_.v164 != nullptr) {
        v49 = v164_.v165;
        if (v164_.v164 == (__int64*)v164_.v165) {
          goto LABEL_63;
        }
        v50 = v164_.v165;
        do {
          v51 = *(_BYTE*)(v50 - 24);
          v50 -= 24;
          if ((v51 & 1) != 0) {
            v52 = *(_QWORD*)(v49 - 8);
            if (v52 != 0) {
              if (*(_QWORD*)(*v4 + 200) != 0) {
                v53 = 128;
              }
              else {
                v53 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*v4 + v53, v52);
            }
          }
          v49 = v50;
        } while (v50 != v48);
        v164_.v165 = v48;
        v48 = (__int64)v164_.v164;
        if (v164_.v164 != nullptr) {
        LABEL_63:
          v54 = 128;
          if (*(_QWORD*)(*v4 + 200) == 0) {
            v54 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v54, v48);
        }
      }
      if (((unsigned __int8)v167_.v167 & 1) != 0) {
        v55 = (unsigned __int64)v167_.v168;
      }
      else {
        v55 = (unsigned __int64)(unsigned __int8)v167_.v167 >> 1;
      }
      if (v55 != 0) {
        Manager_d53d10(a1, v175, (__int64*)&v167_.v167);
      }
      HubNatives_ccbf80((__int64)&v170_.v170);
      if (((unsigned __int8)v167_.v167 & 1) == 0) {
        goto LABEL_111;
      }
      v56 = (__int64)v167_.v169;
      if (v167_.v169 == nullptr) {
        goto LABEL_111;
      }
      v57 = *v4;
      goto LABEL_108;
    }
  LABEL_261:
    GameRoutine_64aa00();
  }
LABEL_111:
  v74 = v172_.v172;
  if (v172_.v172 != 0) {
    v75 = v172_.v173;
    if ((__int64**)v172_.v172 == v172_.v173) {
      goto LABEL_122;
    }
    v76 = v172_.v173;
    do {
      v77 = *((_BYTE*)v76 - 24);
      v76 -= 3;
      if ((v77 & 1) != 0) {
        v78 = (__int64)*(v75 - 1);
        if (v78 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v79 = 128;
          }
          else {
            v79 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v79, v78);
        }
      }
      v75 = v76;
    } while (v76 != (__int64**)v74);
    v172_.v173 = (__int64**)v74;
    v74 = v172_.v172;
    if (v172_.v172 != 0) {
    LABEL_122:
      v80 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v80, v74);
    }
  }
LABEL_125:
  LocatorDispos_db2180((void*)(&v167_.v167), (unsigned __int8*)(a1 + 40),
                       (unsigned __int8*)(a1 + 88));
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v81 = *(_QWORD*)(a1 + 80);
    if (v81 != 0) {
      v82 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v82 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v4 + v82, v81);
    }
  }
  v83 = v167_.v168;
  *(_QWORD*)(a1 + 64) = v167_.v167;
  *(_QWORD*)(a1 + 72) = v83;
  *(_QWORD*)(a1 + 80) = v167_.v169;
  *(_DWORD*)(a1 + 136) = LocatorDispos_db22e0((char*)(a1 + 64));
  GameHubData_db89d0(*v2, (__int64*)(a1 + 64));
  v84 = *(_DWORD*)(a1 + 136);
  if (v84 == 1) {
    v85 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 96, 16, 0);
    v86 = v85 + 3;
    v87 = v85;
    v85[1] = 0;
    v85[2] = 0;
    *v85 = GameData_1fdc7b8;
    GameHr_f5e590((__int64)(v85 + 3));
    v88 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 200) = v86;
    *(_QWORD*)(a1 + 208) = v87;
    if (v88 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v88 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v88 + 16LL))(v88);
      std___1___shared_weak_count___release_weak_alt1(v88);
    }
    v89 = *(_QWORD*)(a1 + 200);
    GameHr_f60660(*(_QWORD*)(v89 + 8));
    GameHr_fa05c0(*(_QWORD*)(v89 + 24));
    DungeonRouteReport_f60b80(*(_QWORD*)(v89 + 8));
    v84 = *(_DWORD*)(a1 + 136);
  }
  if (v84 == 0) {
    v90 = *(_QWORD*)(*v2 + 328);
    if ((v90 & 8) != 0) {
      *(_QWORD*)(*v2 + 328) = v90 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00_alt1();
    }
    v167_.v168 = (__int64*)&GameData_1a919f8;
    v167_.v167 = (__int64*)game_HashString_alt1((__int64)&GameData_1a919f8);
    game_VariableManager_SetFlag_alt1((__int64)&v167_.v167, 0);
    v84 = *(_DWORD*)(a1 + 136);
  }
  if (v175[0] == 1 && v84 == 1 && *(_BYTE*)(*v2 + 944) == 1) {
    *(_DWORD*)(*v2 + 928) = 2;
  }
  v91 = (_QWORD*)fw_memory_HeapManager_Allocate(*v4, 80, 16, 0);
  v91[2] = 0;
  v92 = GameData_212ee40[0];
  v93 = *(_QWORD*)(a1 + 736);
  v91[8] = 0;
  *(_QWORD*)(a1 + 736) = v91;
  *v91 = v92 + 2;
  v91[1] = 0;
  *(_QWORD*)(a1 + 728) = v91 + 4;
  if (v93 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v93 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v93 + 16LL))(v93);
    std___1___shared_weak_count___release_weak_alt1(v93);
  }
  v94 = *(_QWORD**)(a1 + 728);
  v167_.v167 = (__int64*)GameData_1fdc808;
  v170_.v171 = &v167_.v167;
  GameRoutine_654050(&v167_.v167, v94);
  if (v170_.v171 == &v167_.v167) {
    v95 = 4;
  }
  else {
    if (v170_.v171 == nullptr) {
      goto LABEL_151;
    }
    v95 = 5;
  }
  ((void (*)(void*))(*v170_.v171)[v95])(v170_.v171);
LABEL_151:
  v96 = *(_QWORD*)(a1 + 736);
  v97 = *(_QWORD*)GameData_212c7e0[0];
  v98 = *(__int64**)(a1 + 728);
  v159_.v159 = v98;
  v159_.v160 = v96;
  if (v96 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 16), 1u,
                              memory_order_relaxed);
    v167_.v167 = v98;
    v167_.v168 = (__int64*)v96;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v96 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_f8f3e0(v97, (__int64*)&v167_.v167);
    std___1___shared_weak_count___release_weak_alt1(v96);
  }
  else {
    v167_.v167 = v98;
    v167_.v168 = nullptr;
    GameRoutine_f8f3e0(v97, (__int64*)&v167_.v167);
  }
  GameRoutine_66b000((__int64*)(v97 + 16), &v159_.v159);
  if (v159_.v160 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v159_.v160);
  }
  *(_BYTE*)(a1 + 9) = 1;
  game_hub_Manager_SetCaptureOnlyCallback((_BYTE*)a1, 1);
  v99 = *(_QWORD*)(a1 + 744);
  v100 = *(_QWORD*)(a1 + 752);
  if (v99 != v100) {
    do {
      if ((*(_BYTE*)v99 & 1) != 0) {
        v101 = *(_QWORD*)(v99 + 16);
      }
      else {
        v101 = v99 + 1;
      }
      v167_.v168 = (__int64*)v101;
      v167_.v167 = (__int64*)game_HashString_alt1(v101);
      game_VariableManager_SetFlag_alt1((__int64)&v167_.v167, 0);
      v99 += 24;
    } while (v99 != v100);
    v100 = *(_QWORD*)(a1 + 752);
    v99 = *(_QWORD*)(a1 + 744);
  }
  if (v99 != v100) {
    v102 = v100;
    do {
      v103 = *(_BYTE*)(v102 - 24);
      v102 -= 24;
      if ((v103 & 1) != 0) {
        v104 = *(_QWORD*)(v100 - 8);
        if (v104 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v105 = 128;
          }
          else {
            v105 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v4 + v105, v104);
        }
      }
      v100 = v102;
    } while (v102 != v99);
  }
  v106 = *(_BYTE*)(a1 + 64);
  v107 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 752) = v99;
  if ((v106 & 1) == 0) {
    v107 = v106 >> 1;
  }
  if (v107 == 10) {
    v108 = (v106 & 1) != 0 ? *(__int64**)(a1 + 80) : (__int64*)(a1 + 65);
    v109 = *v108;
    v110 = *((unsigned __int16*)v108 + 4);
    if (v109 == *(_QWORD*)"Hub_000_A1" && v110 == *(unsigned __int16*)"A1") {
      v112 = fw_memory_HeapManager_Allocate(*v4, 32, 16, 0);
      v113 = *(__int64**)(a1 + 752);
      *(_BYTE*)(v112 + 31) = 0;
      v167_.v167 = (_QWORD*)(((char*)0x20LL) + 1);
      v167_.v168 = (_QWORD*)(((__int128*)0x10LL) + 15);
      v167_.v169 = (__int64**)v112;
      *(_QWORD*)v112 = 0xE65FB982E7A08BE6LL;
      *(_QWORD*)(v112 + 8) = 0x83E35FA89CE58089LL;
      *(_QWORD*)(v112 + 16) = 0xE3B782E3B082E380LL;
      *(_QWORD*)(v112 + 23) = 0x3141B383E3AA82E3LL;
      if ((unsigned __int64)v113 >= *(_QWORD*)(a1 + 760)) {
        v114 = Manager_66cc20((__int64*)(a1 + 744), &v167_.v167);
      }
      else {
        fw_text_String_CopyTerminated(v113, v112, 0x1Fu);
        v114 = v113 + 3;
      }
      v115 = (char)v167_.v167;
      v116 = v167_.v169;
      *(_QWORD*)(a1 + 752) = v114;
      v117 = (v115 & 1) != 0 ? v116 : (__int64**)((char*)&v167_.v167 + 1);
      v172_.v173 = v117;
      v172_.v172 = game_HashString_alt1((__int64)v117);
      game_VariableManager_SetFlag_alt1((__int64)&v172_.v172, 1);
      if (((unsigned __int8)v167_.v167 & 1) != 0 && v167_.v169 != nullptr) {
        v118 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v118 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v118, (__int64)v167_.v169);
      }
    }
  }
  v119 = *(_QWORD*)(a1 + 48);
  if ((*(_BYTE*)(a1 + 40) & 1) == 0) {
    v119 = *(_BYTE*)(a1 + 40) >> 1;
  }
  if (v119 == 7) {
    v120 = (*(_BYTE*)(a1 + 40) & 1) != 0 ? *(int**)(a1 + 56) : (int*)(a1 + 41);
    v121 = *v120;
    v122 = *(int*)((char*)v120 + 3);
    if (v121 == *(_DWORD*)"Hub_000" && v122 == *(_DWORD*)"_000") {
      v124 = fw_memory_HeapManager_Allocate(*v4, 48, 16, 0);
      v125 = *(__int64**)(a1 + 752);
      v167_.v167 = (*(__int64 (*)[2])0x28LL) + 9;
      v167_.v168 = (*(__int64 (*)[2])0x28LL) + 1;
      v167_.v169 = (__int64**)v124;
      *(_WORD*)(v124 + 40) = 162;
      *(_QWORD*)(v124 + 16) = 0xE3B782E3B082E380LL;
      *(_QWORD*)(v124 + 24) = 0xA885E5B383E3AA82LL;
      *(_QWORD*)(v124 + 32) = 0x82E3AA83E3A882E3LL;
      *(_QWORD*)v124 = 0xE65FB982E7A08BE6LL;
      *(_QWORD*)(v124 + 8) = 0x83E35FA89CE58089LL;
      if ((unsigned __int64)v125 >= *(_QWORD*)(a1 + 760)) {
        v126 = Manager_66cc20((__int64*)(a1 + 744), &v167_.v167);
      }
      else {
        fw_text_String_CopyTerminated(v125, v124, 0x29u);
        v126 = v125 + 3;
      }
      v127 = (char)v167_.v167;
      v128 = v167_.v169;
      *(_QWORD*)(a1 + 752) = v126;
      v129 = (v127 & 1) != 0 ? v128 : (__int64**)((char*)&v167_.v167 + 1);
      v172_.v173 = v129;
      v172_.v172 = game_HashString_alt1((__int64)v129);
      game_VariableManager_SetFlag_alt1((__int64)&v172_.v172, 1);
      if (((unsigned __int8)v167_.v167 & 1) != 0 && v167_.v169 != nullptr) {
        v130 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v130 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v130, (__int64)v167_.v169);
      }
    }
  }
  v131 = *(_BYTE*)(a1 + 64);
  v132 = *(_QWORD*)(a1 + 72);
  v133 = v131 & 1;
  v25 = (v131 & 1) == 0;
  v134 = v131 >> 1;
  if (v25) {
    v135 = v134;
  }
  else {
    v135 = *(_QWORD*)(a1 + 72);
  }
  if (v135 == 10) {
    v136 = *(_QWORD*)(a1 + 80);
    if ((*(_BYTE*)(a1 + 64) & 1) == 0) {
      v136 = a1 + 65;
    }
    v137 = *(_QWORD*)v136;
    v138 = *(unsigned __int16*)(v136 + 8);
    if (v137 == *(_QWORD*)"Hub_100_A1" && v138 == *(unsigned __int16*)"A1") {
      v140 = fw_memory_HeapManager_Allocate(*v4, 32, 16, 0);
      v141 = *(__int64**)(a1 + 752);
      v167_.v167 = (_QWORD*)(((char*)0x20LL) + 1);
      v167_.v168 = (_QWORD*)(((__int128*)0x10LL) + 13);
      v167_.v169 = (__int64**)v140;
      *(_QWORD*)v140 = 0xE65FB982E7A08BE6LL;
      *(_QWORD*)(v140 + 8) = 0x96E65FA89CE58089LL;
      *(_QWORD*)(v140 + 16) = 0xE394A1E596B0E5B9LL;
      strcpy((char*)(v140 + 21), "\xA1\x94の間");
      if ((unsigned __int64)v141 >= *(_QWORD*)(a1 + 760)) {
        v142 = Manager_66cc20((__int64*)(a1 + 744), &v167_.v167);
      }
      else {
        fw_text_String_CopyTerminated(v141, v140, 0x1Du);
        v142 = v141 + 3;
      }
      v143 = (char)v167_.v167;
      v144 = (__int64)v167_.v169;
      *(_QWORD*)(a1 + 752) = v142;
      if ((v143 & 1) != 0) {
        v145 = (__int64**)v144;
      }
      else {
        v145 = (__int64**)((char*)&v167_.v167 + 1);
      }
      v172_.v173 = v145;
      v172_.v172 = game_HashString_alt1((__int64)v145);
      game_VariableManager_SetFlag_alt1((__int64)&v172_.v172, 1);
      if (((unsigned __int8)v167_.v167 & 1) != 0 && v167_.v169 != nullptr) {
        v146 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v146 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v146, (__int64)v167_.v169);
      }
      v167_.v168 = (__int64*)&GameData_1a9cac4;
      v167_.v167 = (__int64*)game_HashString_alt1((__int64)&GameData_1a9cac4);
      game_VariableManager_SetFlag_alt1((__int64)&v167_.v167, 1);
      v132 = *(_QWORD*)(a1 + 72);
      v133 = *(_BYTE*)(a1 + 64) & 1;
      v134 = *(_BYTE*)(a1 + 64) >> 1;
    }
  }
  if (v133 == 0) {
    v132 = v134;
  }
  if (v132 == 12) {
    v147 = v133 != 0 ? *(__int64**)(a1 + 80) : (__int64*)(a1 + 65);
    v148 = *v147;
    v149 = *((_DWORD*)v147 + 2);
    if (v148 == 0x5F3030305F627548LL && v149 == 825241921) {
      v151 = fw_memory_HeapManager_Allocate(*v4, 48, 16, 0);
      v152 = *(__int64**)(a1 + 752);
      v167_.v167 = (*(__int64 (*)[2])0x28LL) + 9;
      v167_.v168 = (*(__int64 (*)[2])0x28LL) + 1;
      v167_.v169 = (__int64**)v151;
      *(_WORD*)(v151 + 40) = 146;
      *(_QWORD*)(v151 + 16) = 0xE3AD83E3A682E3A2LL;
      *(_QWORD*)(v151 + 24) = 0x8BB1E5AE81E3A983LL;
      *(_QWORD*)(v151 + 32) = 0x9CE5ADBAE58586E5LL;
      *(_QWORD*)v151 = 0xE65FB982E7A08BE6LL;
      *(_QWORD*)(v151 + 8) = 0x82E35FA89CE58089LL;
      if ((unsigned __int64)v152 >= *(_QWORD*)(a1 + 760)) {
        v153 = Manager_66cc20((__int64*)(a1 + 744), &v167_.v167);
      }
      else {
        fw_text_String_CopyTerminated(v152, v151, 0x29u);
        v153 = v152 + 3;
      }
      v154 = (char)v167_.v167;
      v155 = v167_.v169;
      *(_QWORD*)(a1 + 752) = v153;
      v156 = (v154 & 1) != 0 ? v155 : (__int64**)((char*)&v167_.v167 + 1);
      v172_.v173 = v156;
      v172_.v172 = game_HashString_alt1((__int64)v156);
      game_VariableManager_SetFlag_alt1((__int64)&v172_.v172, 1);
      if (((unsigned __int8)v167_.v167 & 1) != 0 && v167_.v169 != nullptr) {
        v157 = 128;
        if (*(_QWORD*)(*v4 + 200) == 0) {
          v157 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v4 + v157, (__int64)v167_.v169);
      }
    }
  }
}

void Manager_d53d10(__int64 a1, _BYTE* a2, __int64* a3)
{
  __int64* v3;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18[2];
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    int v23;
    char gap52_[4];
    __int64 v24;
    __int64 v25;
    __int64 v26;
  } v18_;
  struct {
    _DWORD v27[6];
    __int64 v28;
  } v27_;

  v3 = (__int64*)(a1 + 88);
  if (v3 != a3) {
    v6 = *(unsigned __int8*)a3;
    if ((*(_BYTE*)v3 & 1) != 0) {
      v9 = (v6 & 1) == 0;
      v10 = v6 >> 1;
      if (v9) {
        v11 = (__int64)a3 + 1;
      }
      else {
        v11 = a3[2];
      }
      if (v9) {
        v12 = v10;
      }
      else {
        v12 = a3[1];
      }
      SpineModel_64dde0_alt1(v3, v11, v12);
    }
    else if ((v6 & 1) != 0) {
      GameRoutine_64df20_alt1(v3, a3[2], a3[1]);
    }
    else {
      v7 = *a3;
      v8 = a3[2];
      v3[1] = a3[1];
      v3[2] = v8;
      *v3 = v7;
    }
  }
  *a2 = 1;
  v18_.v18[0] = 0;
  v18_.v18[1] = 0;
  v18_.v19 = 0;
  v18_.v20 = 0;
  v18_.v21 = 0;
  v18_.v22 = 0;
  v18_.v23 = 0;
  v18_.v24 = 0;
  v18_.v25 = 0;
  v13 = *(_QWORD*)GameData_212c6a0[0];
  v18_.v26 = 0;
  memset(v27_.v27, 0, 21);
  v27_.v28 = 0;
  GameRoutine_dbced0_alt1(v18_.v18, (__int64)(a3 + 47));
  *(_QWORD*)&v14 = a3[20];
  v18_.v23 = 2;
  *(_QWORD*)v27_.v27 = v14;
  *((_QWORD*)&v14 + 1) = *((unsigned int*)a3 + 42);
  *(_OWORD*)v27_.v27 = v14;
  v27_.v27[4] = *((_DWORD*)a3 + 43);
  *(_BYTE*)(v13 + 40) = 1;
  GameRoutine_d5d770_alt1(v13 + 48, (unsigned __int8*)v18_.v18);
  if ((v18_.v24 & 1) != 0 && v18_.v26 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v18_.v26);
  }
  if ((v18_.v20 & 1) != 0 && v18_.v22 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v18_.v22);
  }
  if ((v18_.v18[0] & 1) != 0 && v18_.v19 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v18_.v19);
  }
}

_QWORD* Manager_d53ec0(_QWORD* result, char a2)
{
  _QWORD* v2;
  __int64 v3;
  char v4;
  int v5;
  __int64 v6;
  _QWORD* v7;
  int v8;
  _QWORD* v9;
  char v10;

  if (*((_BYTE*)result + 10) != (a2 & 1)) {
    *((_BYTE*)result + 10) = a2 & 1;
    v2 = result;
    GameRoutine_d9eb80(*(_QWORD*)GameData_212dc30[0]);
    GameRoutine_d8d2c0(GameData_21f3cb8);
    v3 = GameData_21ec7c0;
    result = *(_QWORD**)(GameData_21ec7c0 + 80);
    v4 = *(_BYTE*)(GameData_21f3d10 + 10);
    if (v4 != 0) {
      v5 = 2;
    }
    else {
      v5 = 1;
    }
    if (result != nullptr) {
      result = (_QWORD*)std___1___shared_weak_count_lock(result);
      if (result != nullptr) {
        v6 = *(_QWORD*)(v3 + 72);
        v7 = result;
        if (v6 != 0) {
          v8 = *(_DWORD*)(v6 + 1208);
          v9 = *(_QWORD**)(v6 + 24);
          *(_DWORD*)(v6 + 1216) = v5;
          if (v8 > 0) {
            v10 = 1;
          }
          else {
            v10 = v4 ^ 1;
          }
          result = HubCharacterNatives_ceca80(v9, 256, v10);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
          result = (_QWORD*)std___1___shared_weak_count___release_weak(v7);
        }
      }
    }
    if (*((_BYTE*)v2 + 10) == 1) {
      *((_BYTE*)v2 + 768) = 0;
    }
  }
  return result;
}

__int64 Manager_d540c0()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;

  v0 = GameData_212dbb8[0];
  v1 = GameData_212ca10[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v2 = *(_QWORD*)GameData_212dbb8[0] + 65LL;
  }
  if (v2 == 0) {
    goto LABEL_12;
  }
  v3 = game_HashString(v2);
  v4 = *(__int64**)(*v1 + 64);
  v5 = *(__int64**)(*v1 + 72);
  if (v4 == v5) {
    goto LABEL_12;
  }
  v6 = v3;
  while (1) {
    v7 = *v4;
    v8 = *(_QWORD*)(*v4 + 88);
    if (v8 != 0 && game_HashString(v8) == v6) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_12;
    }
  }
  v9 = *(_BYTE**)(v7 + 32);
  if (v9 == nullptr || *v9 == 0) {
  LABEL_12:
    if ((*(_BYTE*)(*(_QWORD*)v0 + 40LL) & 1) != 0) {
      v10 = *(_QWORD*)(*(_QWORD*)v0 + 56LL);
    }
    else {
      v10 = *(_QWORD*)v0 + 41LL;
    }
    if (v10 == 0) {
      return 0;
    }
    v11 = game_HashString(v10);
    v12 = *v1;
    v13 = *(__int64**)(*v1 + 64);
    v14 = *(__int64**)(v12 + 72);
    if (v13 == v14) {
      return 0;
    }
    v15 = v11;
    while (1) {
      v7 = *v13;
      v16 = *(_QWORD*)(*v13 + 88);
      if (v16 != 0 && game_HashString(v16) == v15) {
        break;
      }
      if (++v13 == v14) {
        return 0;
      }
    }
    v17 = *(_BYTE**)(v7 + 32);
    if (v17 == nullptr || *v17 == 0) {
      return 0;
    }
  }
  return v7;
}

__int64 Manager_d541e0()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;

  v0 = GameData_212dbb8[0];
  v1 = GameData_212ca10[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v2 = *(_QWORD*)GameData_212dbb8[0] + 65LL;
  }
  if (v2 != 0) {
    v3 = game_HashString(v2);
    v4 = *(__int64**)(*v1 + 64);
    v5 = *(__int64**)(*v1 + 72);
    if (v4 != v5) {
      v6 = v3;
      while (1) {
        v7 = *v4;
        v8 = *(_QWORD*)(*v4 + 88);
        if (v8 != 0 && game_HashString(v8) == v6) {
          break;
        }
        if (++v4 == v5) {
          goto LABEL_12;
        }
      }
      v9 = *(_BYTE**)(v7 + 32);
      if (v9 != nullptr && *v9 != 0) {
        return game_gmap_SpotMgr_FindSpot(v7);
      }
    }
  }
LABEL_12:
  if ((*(_BYTE*)(*(_QWORD*)v0 + 40LL) & 1) != 0) {
    v10 = *(_QWORD*)(*(_QWORD*)v0 + 56LL);
  }
  else {
    v10 = *(_QWORD*)v0 + 41LL;
  }
  if (v10 != 0) {
    v11 = game_HashString(v10);
    v12 = *v1;
    v13 = *(__int64**)(*v1 + 64);
    v14 = *(__int64**)(v12 + 72);
    if (v13 != v14) {
      v15 = v11;
      while (1) {
        v7 = *v13;
        v16 = *(_QWORD*)(*v13 + 88);
        if (v16 != 0 && game_HashString(v16) == v15) {
          break;
        }
        if (++v13 == v14) {
          return 0;
        }
      }
      v17 = *(_BYTE**)(v7 + 32);
      if (v17 != nullptr && *v17 != 0) {
        return game_gmap_SpotMgr_FindSpot(v7);
      }
    }
  }
  return 0;
}

__attribute__((swiftcall)) void Manager_d54320(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  float v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 i;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  if ((GameRoutine_d6f1a0(GameData_21f3cc0) & 1) != 0) {
    *a1 = 20;
    strcpy(a1 + 1, "MapManager");
    return;
  }
  if ((GameRoutine_dffec0(GameData_220f950) & 1) != 0) {
    *a1 = 26;
    strcpy(a1 + 1, "ObjectManager");
    return;
  }
  v2 = *(_QWORD*)(eft_g_effectSystem + 104);
  if (v2 == 0 || (v3 = GameData_21f5300, GameData_21f5300 == 0)) {
  LABEL_15:
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
        (((v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v8 = 2)
             : (v8 = 3),
         (v8 & v7) == 0)) {
      v12 = (_QWORD*)GameData_220b6f0;
    }
    else {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_28;
      }
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
      if (*((float*)&v10 + 3) != 1.0f) {
      LABEL_28:
        v12 = (_QWORD*)GameData_220b6f0;
        goto LABEL_29;
      }
      LODWORD(v11) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                  (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                                     v9 + 160, *((float*)&v10 + 3)))
                         .n128_u32[3];
      v12 = (_QWORD*)*GameData_212eba8[0];
      if (v11 != 1.0f) {
      LABEL_29:
        v13 = v12[20];
        v14 = v12[21];
        if (v13 != v14) {
          while (1) {
            if (GameData_21d92e0 != 1) {
              v15 = *(_QWORD*)(*(_QWORD*)v13 + 8LL);
              if ((*(_BYTE*)(v15 + 152) & 1) != 0 &&
                  (*(_BYTE*)(v15 + 145) & 1) == 0) {
                break;
              }
            }
            v13 += 8;
            if (v13 == v14) {
              goto LABEL_44;
            }
          }
        LABEL_49:
          *a1 = 18;
          strcpy(a1 + 1, "Character");
          return;
        }
        goto LABEL_44;
      }
    }
    v16 = v12[1];
    for (i = v12[2]; v16 != i; v16 += 16) {
      if (GameData_21d92e0 != 1) {
        v18 = *(_QWORD*)(*(_QWORD*)v16 + 8LL);
        if ((*(_BYTE*)(v18 + 152) & 1) != 0 &&
            (*(_BYTE*)(v18 + 145) & 1) == 0) {
          goto LABEL_49;
        }
      }
    }
  LABEL_44:
    if (GameData_220f8b0 == 0 ||
        (v19 = *(_QWORD*)(GameData_220f8b0 + 8)) == 0 ||
        (v20 = *(_QWORD*)(v19 + 8)) == 0 || *(_QWORD*)(v20 + 32) != 0) {
      *(_WORD*)a1 = 0;
      return;
    }
    goto LABEL_49;
  }
  v4 = v2 + 24;
  while (1) {
    v5 = *(__int16*)(v3 + 24);
    if ((v5 & 0x80000000) == 0) {
      v6 = *(_QWORD*)(v2 + 32);
      if (v6 != v4) {
        while (*(_DWORD*)(v6 + 16) != v5) {
          v6 = *(_QWORD*)(v6 + 8);
          if (v6 == v4) {
            goto LABEL_9;
          }
        }
        if (*(_BYTE*)(v6 - 7) != 1) {
          break;
        }
      }
    }
  LABEL_9:
    v3 = *(_QWORD*)v3;
    if (v3 == 0) {
      goto LABEL_15;
    }
  }
  *a1 = 12;
  strcpy(a1 + 1, "Effect");
}

void Manager_d54600(__int64 a1)
{
  int v1;
  float* v3;
  float v4;
  __int64 v5;
  float v6;
  __int64 v7;
  __int64 v8;
  int v9;

  v1 = *(_DWORD*)(a1 + 152);
  *(_DWORD*)(a1 + 152) = v1 + 1;
  if (v1 == 0) {
    (**(void (***)(__int64))(a1 + 144))(a1 + 144);
  }
  v3 = *(float**)(GameData_220d638 + 32);
  if (v3 != nullptr) {
    v4 = 1.0;
    if (*(int*)(*(_QWORD*)GameData_212dbb8[0] + 152LL) > 0) {
      v4 = 0.0;
    }
    *v3 = v4;
  }
  v5 = GameData_220f820;
  if (GameData_220f820 != 0) {
    GameRoutine_d783a0(*(_QWORD*)(GameData_220f820 + 8), 0.0);
    v6 = GameRoutine_d78a40(*(_QWORD*)(v5 + 8));
    if (v6 != 1.0) {
      *(_BYTE*)(v5 + 16) = 1;
    LABEL_11:
      *(float*)(game_script_hub_g_frame_counter + 156) = v6;
      goto LABEL_12;
    }
    if (*(_BYTE*)(v5 + 16) == 1) {
      goto LABEL_11;
    }
  }
LABEL_12:
  if (GameData_21f3cb0 != 0) {
    v7 = *(_QWORD*)(GameData_21f3cb0 + 1160);
    if (v7 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                                memory_order_acquire) &
           1) == 0) {
        v8 = v7;
        v9 = __cxa_guard_acquire(&GameData_21a60e8);
        v7 = v8;
        if (v9 != 0) {
          GameData_21a60e0 = 0;
          __cxa_guard_release(&GameData_21a60e8);
          v7 = v8;
        }
      }
      *(_DWORD*)(v7 + 16) = 0;
      *(_QWORD*)(v7 + 8) = GameData_21a60e0;
    }
  }
  if (GameData_21d96b8 != 0) {
    *(_BYTE*)(GameData_21d96b8 + 55) = *(_DWORD*)(a1 + 152) > 0;
  }
}

void Manager_d54760(__int64 a1)
{
  int v2;
  float* v3;
  float v4;
  __int64 v5;
  float v6;

  v2 = *(_DWORD*)(a1 + 152) - 1;
  *(_DWORD*)(a1 + 152) = v2;
  if (v2 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 144) + 8LL))(a1 + 144);
  }
  v3 = *(float**)(GameData_220d638 + 32);
  if (v3 != nullptr) {
    v4 = 1.0;
    if (*(int*)(*(_QWORD*)GameData_212dbb8[0] + 152LL) > 0) {
      v4 = 0.0;
    }
    *v3 = v4;
  }
  v5 = GameData_220f820;
  if (GameData_220f820 != 0) {
    GameRoutine_d783a0(*(_QWORD*)(GameData_220f820 + 8), 0.0);
    v6 = GameRoutine_d78a40(*(_QWORD*)(v5 + 8));
    if (v6 == 1.0) {
      if (*(_BYTE*)(v5 + 16) != 1) {
        goto LABEL_12;
      }
    }
    else {
      *(_BYTE*)(v5 + 16) = 1;
    }
    *(float*)(game_script_hub_g_frame_counter + 156) = v6;
  }
LABEL_12:
  if (GameData_21d96b8 != 0) {
    *(_BYTE*)(GameData_21d96b8 + 55) = *(_DWORD*)(a1 + 152) > 0;
  }
}

__int64 Manager_d54850(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;

  if (*(_BYTE*)(a1 + 773) != 0) {
    *(_BYTE*)(a1 + 773) = 0;
    v4 = GameData_21f3cb8;
    if (GameData_21f3cb8 != 0 && *(_BYTE*)(a1 + 772) != 0) {
      *(_BYTE*)(a1 + 772) = 0;
      GameRoutine_d8d1a0_alt1(v4);
    }
    if (*(_BYTE*)(a1 + 771) != 0 && game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      ProcInst_657b10(game_hub_ProcHubSeqView_instance_);
      *(_BYTE*)(a1 + 771) = 0;
    }
    GameRoutine_15e2a60();
  }
  v5 = *(_QWORD*)(a1 + 200);
  if (v5 != 0) {
    DungeonRouteReport_f604e0(*(_QWORD*)(v5 + 8));
  }
  if ((a2 & 1) != 0 && (*(_BYTE*)(a1 + 240) & 1) == 0) {
    *(_DWORD*)(a1 + 236) = *(_DWORD*)(GameData_21f3cc0 + 92);
    *(_BYTE*)(a1 + 240) = 1;
    MapManager_d6e320();
  }
  v6 = *(_QWORD*)(game_g_frame_clock + 13224);
  v7 = *(_QWORD*)(v6 + 48);
  v8 = *(_QWORD*)(v6 + 56);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 344LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v7 + 8) + 344LL);
  }
  if (*(_BYTE*)(v9 + 176) == 1) {
    *(_BYTE*)(v9 + 176) = 0;
  }
  if (*(_BYTE*)(v9 + 256) == 1) {
    *(_BYTE*)(v9 + 256) = 0;
  }
  result = *(_QWORD*)(a1 + 200);
  *(_BYTE*)(a1 + 768) = 0;
  if (result != 0) {
    return DungeonController_f5e870();
  }
  return result;
}

__int64 Manager_d549b0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  _QWORD v6[2];

  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8bd0();
  }
  result = GameRoutine_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(a1 + 136) == 0) {
    v3 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v3 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v3 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00(result);
    }
    v6[1] = &GameData_1a919f8;
    v6[0] = game_HashString(&GameData_1a919f8);
    result = game_VariableManager_SetFlag(v6, 0);
  }
  v4 = *(_QWORD*)(a1 + 216);
  v5 = *(_DWORD*)(v4 + 232);
  if (v5 <= 2) {
    v5 = 2;
  }
  *(_DWORD*)(v4 + 232) = v5;
  return result;
}

_BYTE* game_hub_Manager_BeginPopWorldPost(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 i;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  _QWORD v22[2];

  ScheduleManager_d9edf0();
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 168);
    *(_BYTE*)(v2 + 225) = 1;
    *(_BYTE*)(v2 + 228) = 1;
    *(_BYTE*)(v3 + 540) = 1;
    *(_BYTE*)(*(_QWORD*)(v2 + 360) + 112LL) = 1;
    *(_BYTE*)(*(_QWORD*)(v2 + 184) + 1666LL) = 0;
    v4 = *(_QWORD*)(v2 + 184);
    *(_BYTE*)(v4 + 1664) = 1;
    *(_DWORD*)(v4 + 1676) = 3;
  }
  if (*(_BYTE*)(a1 + 240) == 1) {
    v5 = *(_DWORD*)(a1 + 236);
    v20_.v21 = v20_.v20;
    v6 = *(_QWORD*)GameData_212dbc0[0];
    v20_.v20[0] = GameData_1fdc888;
    v20_.v20[1] = a1;
    game_hub_MapManager_Load(v6, v5, (__int64)v20_.v20);
    if (v20_.v21 == v20_.v20) {
      v7 = 32;
    }
    else {
      if (v20_.v21 == nullptr) {
        goto LABEL_20;
      }
      v7 = 40;
    }
    (*(void (**)(__int64))(*v20_.v21 + v7))((__int64)v20_.v21);
  LABEL_20:
    if (*(_BYTE*)(a1 + 240) == 1) {
      *(_BYTE*)(a1 + 240) = 0;
    }
    goto LABEL_22;
  }
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameHr_17b8bd0(game_hub_ProgressEventView_instance_);
  }
  ScheduleManager_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(a1 + 136) == 0) {
    v8 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v8 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v8 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00_alt1();
    }
    v22[1] = &GameData_1a919f8;
    v22[0] = game_HashString_alt1((__int64)&GameData_1a919f8);
    game_VariableManager_SetFlag_alt1((__int64)v22, 0);
  }
  v9 = *(_QWORD*)(a1 + 216);
  v10 = *(_DWORD*)(v9 + 232);
  if (v10 <= 2) {
    v10 = 2;
  }
  *(_DWORD*)(v9 + 232) = v10;
  v11 = *(_QWORD*)(a1 + 200);
  if (v11 != 0) {
    GameHr_fa05c0(*(_QWORD*)(v11 + 24));
    DungeonRouteReport_f60b80(*(_QWORD*)(v11 + 8));
  }
  GameManager_a32880_alt1(game_sound_g_game_sound);
LABEL_22:
  *(_BYTE*)(a1 + 768) = 0;
  v12 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v13 = *(_QWORD*)(GameData_21ec7c0 + 32);
  while (v12 != v13) {
    v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v12 + 24LL) + 32LL);
    if (v14 != 0) {
      v15 = *(_QWORD*)(v14 + 400);
      for (i = *(_QWORD*)(v14 + 408); i != v15; i -= 32) {
        v17 = *(_QWORD*)(i - 8);
        if (v17 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v17);
        }
        v18 = *(_QWORD*)(i - 24);
        if (v18 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v18);
        }
      }
      *(_QWORD*)(v14 + 408) = v15;
    }
    v12 += 16;
  }
  return game_hub_Manager_SetCaptureOnlyCallback((_BYTE*)a1, 1);
}

__int64 Manager_d54c90(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  int v15;
  __int16 v16;
  int v17;

  v1 = *(unsigned __int8*)(a1 + 11);
  if (*(_BYTE*)(a1 + 11) == 0) {
    return v1;
  }
  v2 = *(_QWORD*)(a1 + 216);
  *(_BYTE*)(a1 + 11) = 0;
  v3 = *(_DWORD*)(v2 + 232);
  if (v3 <= 1) {
    v3 = 1;
  }
  *(_DWORD*)(v2 + 232) = v3;
  v4 = GameData_21f3d08;
  v5 = *(_DWORD*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v5;
  if (v5 != 0) {
    if (v5 <= 0) {
    LABEL_8:
      if (*(_BYTE*)(v4 + 65) != 0) {
        *(_BYTE*)(v4 + 65) = 0;
        v6 = GameData_220b6e0;
        v7 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
        *(_DWORD*)(GameData_220b6e0 + 176) = v7;
        if (v7 == 0) {
          (*(void (**)(__int64))(*(_QWORD*)(v6 + 168) + 8LL))(v6 + 168);
        }
        GameRoutine_d799f0(v6);
      }
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)(v4 + 8) + 8LL))(v4 + 8);
    if (*(int*)(v4 + 16) <= 0) {
      goto LABEL_8;
    }
  }
  v8 = *(_QWORD*)(GameData_21ec7c0 + 80);
  if (v8 != 0) {
    v9 = *(_QWORD*)(GameData_21ec7c0 + 72);
    v10 = *(_QWORD*)(GameData_21ec7c0 + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    v11 = std___1___shared_weak_count_lock(v10);
    std___1___shared_weak_count___release_weak(v8);
    if (v11 != 0) {
      if (v9 != 0 && *(_DWORD*)(v9 + 1112) == 3 && *(_QWORD*)(v9 + 56) != 0) {
        CharacterControllerPlayer_10c8e20();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
      }
    }
  }
  v13 = *(_QWORD*)GameData_212dc60[0];
  GameRoutine_d97a00(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL), 0.0);
  v15 = 0;
  v16 = 0;
  v17 = 1065353216;
  GameRoutine_cdeee0(v13, &v15);
  GameRoutine_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
  return v1;
}

void Manager_d54e40(__int64 a1)
{
  int v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 v16;

  v1 = (signed __int32)*(_DWORD*)(a1 + 24) > 0;
  if (*(unsigned __int8*)(a1 + 13) != v1) {
    *(_BYTE*)(a1 + 13) = v1;
    v3 = GameData_212d458[0];
    HubCharacterNatives_cba580(*GameData_212d458[0]);
    v4 = *(_QWORD*)GameData_212ebf8[0];
    if (*(_BYTE*)(a1 + 13) == 1) {
      if ((*(_BYTE*)(v4 + 8) & 1) == 0) {
        *(_WORD*)(v4 + 8) = 257;
        v5 = GameData_220f848;
        if ((*(_BYTE*)(GameData_220f848 + 273) & 1) == 0) {
          v4 = GameRoutine_1553130(15);
          *(_BYTE*)(v5 + 273) = 1;
        }
        GameRoutine_867df0(v4);
      }
      GameRoutine_d8cb20(GameData_21f3cb8);
      v6 = GameData_220b6e0;
      if ((*(_BYTE*)(GameData_220b6e0 + 161) & 1) == 0) {
        *(_BYTE*)(GameData_220b6e0 + 161) = 1;
        v7 = *(_DWORD*)(v6 + 176);
        *(_DWORD*)(v6 + 176) = v7 + 1;
        if (v7 == 0) {
          (**(void (***)(__int64))(v6 + 168))(v6 + 168);
        }
        GameRoutine_d799f0_alt1(v6);
      }
      if ((*(_BYTE*)(v6 + 162) & 1) == 0) {
        *(_BYTE*)(v6 + 162) = 1;
        v8 = *(_DWORD*)(v6 + 192);
        *(_DWORD*)(v6 + 192) = v8 + 1;
        if (v8 == 0) {
          (**(void (***)(__int64))(v6 + 184))(v6 + 184);
        }
        GameRoutine_d799f0_alt1(v6);
      }
    }
    else {
      Time_e1e170(v4);
      Input_d8cd20(GameData_21f3cb8);
      v9 = *v3;
      v10 = *(_QWORD*)(*v3 + 24);
      v11 = *(_QWORD*)(v9 + 32);
      while (v10 != v11) {
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 24LL) + 32LL);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v12 + 400);
          for (i = *(_QWORD*)(v12 + 408); i != v13; i -= 32) {
            v15 = *(_QWORD*)(i - 8);
            if (v15 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v15);
            }
            v16 = *(_QWORD*)(i - 24);
            if (v16 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v16);
            }
          }
          *(_QWORD*)(v12 + 408) = v13;
        }
        v10 += 16;
      }
    }
  }
}

unsigned __int64 Manager_d55030(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  unsigned __int64 result;
  int v8;
  unsigned __int64 v9[2];
  struct {
    __int64 v10;
    void* v11;
  } v10_;

  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameHr_17b8bd0(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0]);
  }
  ScheduleManager_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(a1 + 136) == 0) {
    v2 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v2 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v2 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00_alt1();
    }
    v10_.v11 = &GameData_1a919f8;
    v10_.v10 = game_HashString_alt1((__int64)&GameData_1a919f8);
    game_VariableManager_SetFlag_alt1((__int64)&v10_.v10, 0);
  }
  v3 = *(_QWORD*)(a1 + 216);
  v10_.v11 = &GameData_1a9da0c;
  v4 = *(_DWORD*)(v3 + 232);
  if (v4 <= 2) {
    v4 = 2;
  }
  *(_DWORD*)(v3 + 232) = v4;
  v10_.v10 = game_HashString_alt1((__int64)&GameData_1a9da0c);
  game_VariableManager_SetFlag_alt1((__int64)&v10_.v10, 0);
  v10_.v11 = &GameData_1aee223;
  v10_.v10 = game_HashString_alt1((__int64)&GameData_1aee223);
  if (game_GameModeData_instance_ != 0 &&
      (v5 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v10_.v10)) != 0) {
    v6 = *(_DWORD*)(v5 + 32);
  }
  else {
    v6 = 0;
  }
  v9[1] = (unsigned __int64)&GameData_1ab8849;
  result = game_HashString_alt1((__int64)&GameData_1ab8849);
  v8 = game_GameModeData_instance_;
  v9[0] = result;
  if (game_GameModeData_instance_ == 0) {
  LABEL_16:
    if (v6 < v8) {
      return result;
    }
    goto LABEL_17;
  }
  result = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v9);
  if (result != 0) {
    v8 = *(_DWORD*)(result + 32);
    goto LABEL_16;
  }
  if (v6 < 0) {
    return result;
  }
LABEL_17:
  v10_.v11 = &GameData_1a91981;
  v10_.v10 = game_HashString_alt1((__int64)&GameData_1a91981);
  return game_VariableManager_SetFlag_alt1((__int64)&v10_.v10, 1);
}

__int64 Manager_d551a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  int v5;
  _QWORD v6[2];

  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8bd0();
  }
  result = GameRoutine_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(a1 + 136) == 0) {
    v3 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v3 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v3 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00(result);
    }
    v6[1] = &GameData_1a919f8;
    v6[0] = game_HashString(&GameData_1a919f8);
    result = game_VariableManager_SetFlag(v6, 0);
  }
  v4 = *(_QWORD*)(a1 + 216);
  v5 = *(_DWORD*)(v4 + 232);
  if (v5 <= 2) {
    v5 = 2;
  }
  *(_DWORD*)(v4 + 232) = v5;
  return result;
}

__int64 Manager_d55250(__int64 result, __int64 a2, int a3)
{
  __int64 v3;

  if (*(_DWORD*)(result + 32) == 0) {
    *(_DWORD*)(result + 32) = a3;
    switch (a3) {
    case 3:
      if ((GameData_21c9699 & 1) == 0) {
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                  GameData_212c638 +
                                                              32LL) -
                                                   8LL) +
                                        40LL) +
                             16LL) +
                  48LL) = 0;
        result = nn_oe_SetCpuBoostMode(1);
        v3 = snd_g_fileIndex;
        if (*(_DWORD*)(snd_g_fileIndex + 4736) != 1 &&
            (*(_BYTE*)(snd_g_fileIndex + 4742) & 1) == 0) {
          *(_DWORD*)(snd_g_fileIndex + 4736) = 1;
          result = nn_os_SignalEvent(v3 + 4144);
        }
        GameData_21c9699 = 1;
      }
      break;
    case 2:
      return GameRoutine_9b86d0(a2, 0);
    case 1:
      return GameRoutine_9b86d0(a2, 1);
    default:
      break;
    }
  }
  return result;
}

__int64 Manager_d55330(__int64 result)
{
  int v1;
  __int64 v2;
  int v3;
  bool v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_DWORD*)(result + 32);
  if ((unsigned int)(v1 - 1) >= 2) {
    if (v1 == 3 && GameData_21c9699 == 1) {
      v7 = result;
      nn_oe_SetCpuBoostMode(0);
      v8 = snd_g_fileIndex;
      if (*(_DWORD*)(snd_g_fileIndex + 4736) != 0) {
        *(_DWORD*)(snd_g_fileIndex + 4736) = 0;
        nn_os_ClearEvent(v8 + 4144);
      }
      result = v7;
      v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
      GameData_21c9699 = 0;
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 40) + 16LL) + 48LL) = 1;
    }
  }
  else {
    v2 = GameData_21f8018;
    if (GameData_21f8018 != 0) {
      v3 = *(_DWORD*)(GameData_21f8018 + 160);
      v4 = __OFSUB__(v3, 1);
      v5 = v3 - 1;
      if (v5 < 0 != v4) {
        if ((*(_WORD*)(GameData_21f8018 + 136) & 1) == 0) {
          v6 = result;
          ProcInst_657a50(GameData_21f8018, 1);
          goto LABEL_13;
        }
      }
      else {
        *(_DWORD*)(GameData_21f8018 + 160) = v5;
        if (v5 == 0) {
          v6 = result;
          (*(void (**)(__int64))(*(_QWORD*)(v2 + 152) + 8LL))(v2 + 152);
        LABEL_13:
          result = v6;
        }
      }
    }
  }
  *(_DWORD*)(result + 32) = 0;
  return result;
}

__int64 Manager_d55430()
{
  __int64 v0;
  __int64 result;
  _QWORD v2[2];
  _QWORD v3[2];

  v3[1] = &GameData_1afd9c8;
  v3[0] = game_HashString(&GameData_1afd9c8);
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      return 1;
    }
  }
  v2[1] = &GameData_1a89fb8;
  v2[0] = game_HashString(&GameData_1a89fb8);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v2);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 Manager_d554e0(__int64 result, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  float v7;
  __int64 v8;
  int v9;

  v3 = result;
  v4 = *(_QWORD*)GameData_212ebf8[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212ebf8[0] + 8LL) != 0 &&
      *(_BYTE*)(v4 + 9) != 0) {
    *(_BYTE*)(v4 + 9) = 0;
    v5 = game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      if ((v6 & 0x10) == 0) {
        v7 = *(float*)(game_ProcGameSkipView_instance_ + 224);
        *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v6 & 0xFFFFFFE2 | 1;
        if (v7 > 0.0) {
          *(_DWORD*)(v5 + 224) = 0;
        }
      }
    }
  }
  v8 = GameData_220b6e0;
  if (*(_BYTE*)(GameData_220b6e0 + 162) != 0) {
    v9 = *(_DWORD*)(GameData_220b6e0 + 192);
    *(_BYTE*)(GameData_220b6e0 + 162) = 0;
    *(_DWORD*)(v8 + 192) = --v9;
    if (v9 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v8 + 184) + 8LL))(v8 + 184);
    }
    result = GameRoutine_d799f0(v8);
  }
  if ((a2 & 1) != 0) {
    result = game_hub_ProcHubSeqView_instance_;
    if (game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      result = GameRoutine_657df0(game_hub_ProcHubSeqView_instance_);
    }
    *(_BYTE*)(v3 + 770) = 1;
  }
  return result;
}

void game_hub_Manager_InitializeArea_lambda0_Invoke()
{
  __int64* v2;
  __int64* i;
  __int64 v4;

  if (game_hub_ProcHubSeqView_instance_ != 0 && GameData_21f3d10 != 0 &&
      *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) != 0 &&
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0 &&
      (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0 &&
      *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 139) == 0 &&
      *(int*)(GameData_21f3d10 + 152) <= 0) {
    v2 = *(__int64**)(GameData_220b6e0 + 136);
    for (i = *(__int64**)(GameData_220b6e0 + 144); v2 != i;
         *(_BYTE*)(v4 + 44) = 1) {
      v4 = *v2++;
    }
  }
}

__int64 game_hub_Manager_BeginPopWorldPost_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  _QWORD v8[2];

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8bd0();
  }
  v2 = GameRoutine_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(v1 + 136) == 0) {
    v3 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v3 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v3 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00(v2);
    }
    v8[1] = &GameData_1a919f8;
    v8[0] = game_HashString(&GameData_1a919f8);
    game_VariableManager_SetFlag(v8, 0);
  }
  v4 = *(_QWORD*)(v1 + 216);
  v5 = *(_DWORD*)(v4 + 232);
  if (v5 <= 2) {
    v5 = 2;
  }
  *(_DWORD*)(v4 + 232) = v5;
  v6 = *(_QWORD*)(v1 + 200);
  if (v6 != 0) {
    GameRoutine_fa05c0(*(_QWORD*)(v6 + 24));
    GameRoutine_f60b80(*(_QWORD*)(v6 + 8));
  }
  return GameManager_a32880(game_sound_g_game_sound);
}

void game_hub_Manager_SetCaptureOnlyCallback_lambda0_Invoke(__int64 a1,
                                                            unsigned __int8* a2)
{
  __int64 v2;
  int v3;

  if (GameData_21f3d10 != 0) {
    v2 = GameData_21f3cb8;
    if (GameData_21f3cb8 != 0) {
      v3 = *a2;
      if (*(unsigned __int8*)(GameData_21f3d10 + 772) != v3) {
        *(_BYTE*)(GameData_21f3d10 + 772) = v3;
        if (v3 != 0) {
          GameRoutine_d8d080();
        }
        else {
          GameRoutine_d8d1a0_alt1(v2);
        }
      }
    }
  }
}

void game_hub_Manager_SetCaptureOnlyCallback_lambda1_Invoke(__int64 a1,
                                                            _BYTE* a2)
{
  __int64 v2;
  int v3;

  v2 = GameData_21f3d10;
  if (GameData_21f3d10 != 0) {
    v3 = (unsigned __int8)*a2;
    if (*(unsigned __int8*)(GameData_21f3d10 + 771) != v3 &&
        game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      if (*a2 != 0) {
        GameRoutine_657df0(game_hub_ProcHubSeqView_instance_);
      }
      else {
        ProcInst_657b10(game_hub_ProcHubSeqView_instance_);
      }
      *(_BYTE*)(v2 + 771) = v3;
    }
  }
}

__int64 game_hub_Manager_SetCaptureOnlyCallback_lambda2_Invoke()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float* v4;
  int v5;
  __int64 v6;

  v0 = GameData_21f3ca8;
  v1 = *(_QWORD*)(GameData_21f3ca8 + 16);
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = *(float**)(v1 + 16);
    v5 = v4 != nullptr && ((*(_BYTE*)(*(_QWORD*)v4 + 12LL) & 1) != 0 ||
                           v4[8] < *(float*)(*(_QWORD*)v4 + 8LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v5 = 0;
  }
  return (*(float*)(v0 + 8) <= 0.0) & (unsigned int)~v5;
}

#pragma GCC visibility pop
