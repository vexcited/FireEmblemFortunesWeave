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
__int64 Manager_Destructor_d52540(__int64 a1);
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
__int64 Manager_d53d10(__int64 a1, _BYTE* a2, unsigned __int8* a3);
_QWORD* Manager_d53ec0(_QWORD* result, char a2);
__int64 Manager_d540c0();
__int64 Manager_d541e0();
void Manager_d54600(__int64 a1);
void Manager_d54760(__int64 a1);
__int64 Manager_d54850(__int64 a1, char a2);
__int64 Manager_d549b0(__int64 a1);
_BYTE* game_hub_Manager_BeginPopWorldPost(__int64 a1);
__int64 Manager_d54c90(__int64 a1);
__int64 Manager_d55030(__int64 a1);
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

__int64 Manager_Destructor_d52540(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 result;
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
    if (GameData_21f3cb8 != 0 && *(_BYTE*)(a1 + 772) != 0) {
      *(_BYTE*)(a1 + 772) = 0;
      GameRoutine_d8d1a0();
    }
    if (*(_BYTE*)(a1 + 771) != 0 && game_hub_ProcHubSeqView_instance_ != 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      GameRoutine_657b10();
      *(_BYTE*)(a1 + 771) = 0;
    }
    GameRoutine_15e2a60();
  }
  v2 = *(_QWORD*)(a1 + 744);
  v3 = *(_QWORD*)(a1 + 752);
  if (v2 != v3) {
    do {
      v4 = *(_QWORD*)(v2 + 16);
      if ((*(_BYTE*)v2 & 1) != 0) {
        v5 = *(_QWORD*)(v2 + 16);
      }
      else {
        v5 = v2 + 1;
      }
      v38[1] = v5;
      if ((*(_BYTE*)v2 & 1) != 0) {
        v6 = v4;
      }
      else {
        v6 = v2 + 1;
      }
      v38[0] = game_HashString(v6);
      game_VariableManager_SetFlag(v38, 0);
      v2 += 24;
    } while (v2 != v3);
    v3 = *(_QWORD*)(a1 + 752);
    v2 = *(_QWORD*)(a1 + 744);
  }
  if (v2 != v3) {
    v7 = v3;
    do {
      v8 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v8 & 1) != 0) {
        v9 = *(_QWORD*)(v3 - 8);
        if (v9 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10, v9);
        }
      }
      v3 = v7;
    } while (v7 != v2);
  }
  *(_QWORD*)(a1 + 752) = v2;
  v11 = *(_QWORD*)(a1 + 736);
  *(_QWORD*)(a1 + 728) = 0;
  *(_QWORD*)(a1 + 736) = 0;
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  v12 = *(_QWORD*)(a1 + 744);
  if (v12 != 0) {
    v13 = *(_QWORD*)(a1 + 752);
    if (v12 == v13) {
      goto LABEL_42;
    }
    v14 = *(_QWORD*)(a1 + 752);
    do {
      v15 = *(_BYTE*)(v14 - 24);
      v14 -= 24;
      if ((v15 & 1) != 0) {
        v16 = *(_QWORD*)(v13 - 8);
        if (v16 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v17 = 128;
          }
          else {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v17, v16);
        }
      }
      v13 = v14;
    } while (v14 != v12);
    v18 = *(_QWORD*)(a1 + 744);
    *(_QWORD*)(a1 + 752) = v12;
    v12 = v18;
    if (v18 != 0) {
    LABEL_42:
      v19 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v19, v12);
    }
  }
  v20 = *(_QWORD*)(a1 + 736);
  if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    std___1___shared_weak_count___release_weak(v20);
  }
  result = GameRoutine_d983a0(a1 + 248);
  v22 = *(_QWORD*)(a1 + 224);
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = std___1___shared_weak_count___release_weak(v22);
  }
  v23 = *(_QWORD*)(a1 + 208);
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    result = std___1___shared_weak_count___release_weak(v23);
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
          result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v29,
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
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v31, v24);
    }
  }
  if ((*(_BYTE*)(a1 + 88) & 1) != 0) {
    v32 = *(_QWORD*)(a1 + 104);
    if (v32 != 0) {
      v33 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v33 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v33, v32);
    }
  }
  if ((*(_BYTE*)(a1 + 64) & 1) != 0) {
    v34 = *(_QWORD*)(a1 + 80);
    if (v34 != 0) {
      v35 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v35 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v35, v34);
    }
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v36 = *(_QWORD*)(a1 + 56);
    if (v36 != 0) {
      v37 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v37 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v37, v36);
    }
  }
  *(_QWORD*)a1 = GameData_1fdc738;
  if (GameData_21f3d10 == a1) {
    GameData_21f3d10 = 0;
    GameData_220f94c = 0;
  }
  return result;
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

__int64 Manager_d53d10(__int64 a1, _BYTE* a2, unsigned __int8* a3)
{
  unsigned __int8* v3;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int128 v14;
  __int64 result;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[2];
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _DWORD v28[6];
  __int64 v29;

  v3 = (unsigned __int8*)(a1 + 88);
  if (v3 != a3) {
    v6 = *a3;
    if ((*v3 & 1) != 0) {
      v9 = (v6 & 1) == 0;
      v10 = v6 >> 1;
      if (v9) {
        v11 = a3 + 1;
      }
      else {
        v11 = *((unsigned __int8**)a3 + 2);
      }
      if (v9) {
        v12 = v10;
      }
      else {
        v12 = *((_QWORD*)a3 + 1);
      }
      SpineModel_64dde0(v3, v11, v12);
    }
    else if ((v6 & 1) != 0) {
      GameRoutine_64df20(v3, *((_QWORD*)a3 + 2), *((_QWORD*)a3 + 1));
    }
    else {
      v7 = *(_QWORD*)a3;
      v8 = *((_QWORD*)a3 + 2);
      *((_QWORD*)v3 + 1) = *((_QWORD*)a3 + 1);
      *((_QWORD*)v3 + 2) = v8;
      *(_QWORD*)v3 = v7;
    }
  }
  *a2 = 1;
  v19[0] = 0;
  v19[1] = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v13 = *(_QWORD*)GameData_212c6a0[0];
  v27 = 0;
  memset(v28, 0, 21);
  v29 = 0;
  GameRoutine_dbced0(v19, a3 + 376);
  *(_QWORD*)&v14 = *((_QWORD*)a3 + 20);
  v24 = 2;
  *(_QWORD*)v28 = v14;
  *((_QWORD*)&v14 + 1) = *((unsigned int*)a3 + 42);
  *(_OWORD*)v28 = v14;
  v28[4] = *((_DWORD*)a3 + 43);
  *(_BYTE*)(v13 + 40) = 1;
  result = GameRoutine_d5d770(v13 + 48, v19);
  if ((v25 & 1) != 0 && v27 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v27);
  }
  if ((v21 & 1) != 0 && v23 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v23);
  }
  if ((v19[0] & 1) != 0 && v20 != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v20);
  }
  return result;
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
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 i;
  __int64 v18;
  __int64 v19;
  _QWORD v21[4];
  _QWORD* v22;
  _QWORD v23[2];

  GameRoutine_d9edf0();
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
    v5 = *(unsigned int*)(a1 + 236);
    v22 = v21;
    v6 = *(_QWORD*)GameData_212dbc0[0];
    v21[0] = GameData_1fdc888;
    v21[1] = a1;
    GameRoutine_d6e4d0(v6, v5, v21);
    if (v22 == v21) {
      v7 = 32;
    }
    else {
      if (v22 == nullptr) {
        goto LABEL_20;
      }
      v7 = 40;
    }
    (*(void (**)(void*))(*v22 + v7))(v22);
  LABEL_20:
    if (*(_BYTE*)(a1 + 240) == 1) {
      *(_BYTE*)(a1 + 240) = 0;
    }
    goto LABEL_22;
  }
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8bd0();
  }
  v8 = GameRoutine_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(a1 + 136) == 0) {
    v9 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v9 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v9 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00(v8);
    }
    v23[1] = &GameData_1a919f8;
    v23[0] = game_HashString(&GameData_1a919f8);
    game_VariableManager_SetFlag(v23, 0);
  }
  v10 = *(_QWORD*)(a1 + 216);
  v11 = *(_DWORD*)(v10 + 232);
  if (v11 <= 2) {
    v11 = 2;
  }
  *(_DWORD*)(v10 + 232) = v11;
  v12 = *(_QWORD*)(a1 + 200);
  if (v12 != 0) {
    GameRoutine_fa05c0(*(_QWORD*)(v12 + 24));
    GameRoutine_f60b80(*(_QWORD*)(v12 + 8));
  }
  GameManager_a32880(game_sound_g_game_sound);
LABEL_22:
  *(_BYTE*)(a1 + 768) = 0;
  v13 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v14 = *(_QWORD*)(GameData_21ec7c0 + 32);
  while (v13 != v14) {
    v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v13 + 24LL) + 32LL);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 400);
      for (i = *(_QWORD*)(v15 + 408); i != v16; i -= 32) {
        v18 = *(_QWORD*)(i - 8);
        if (v18 != 0) {
          std___1___shared_weak_count___release_weak(v18);
        }
        v19 = *(_QWORD*)(i - 24);
        if (v19 != 0) {
          std___1___shared_weak_count___release_weak(v19);
        }
      }
      *(_QWORD*)(v15 + 408) = v16;
    }
    v13 += 16;
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

__int64 Manager_d55030(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 result;
  int v9;
  _QWORD v10[2];
  __int64 v11;
  void* v12;

  if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
    GameRoutine_17b8bd0();
  }
  v2 = GameRoutine_d9f4e0(GameData_21f3ce8);
  if (*(_DWORD*)(a1 + 136) == 0) {
    v3 = *(_QWORD*)(GameData_21c9608 + 328);
    if ((v3 & 8) != 0) {
      *(_QWORD*)(GameData_21c9608 + 328) = v3 & 0xFFFFFFFFFFFFFFF7LL;
      GameRoutine_120ef00(v2);
    }
    v12 = &GameData_1a919f8;
    v11 = game_HashString(&GameData_1a919f8);
    game_VariableManager_SetFlag(&v11, 0);
  }
  v4 = *(_QWORD*)(a1 + 216);
  v12 = &GameData_1a9da0c;
  v5 = *(_DWORD*)(v4 + 232);
  if (v5 <= 2) {
    v5 = 2;
  }
  *(_DWORD*)(v4 + 232) = v5;
  v11 = game_HashString(&GameData_1a9da0c);
  game_VariableManager_SetFlag(&v11, 0);
  v12 = &GameData_1aee223;
  v11 = game_HashString(&GameData_1aee223);
  if (game_GameModeData_instance_ != 0 &&
      (v6 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &v11)) != 0) {
    v7 = *(_DWORD*)(v6 + 32);
  }
  else {
    v7 = 0;
  }
  v10[1] = &GameData_1ab8849;
  result = game_HashString(&GameData_1ab8849);
  v9 = game_GameModeData_instance_;
  v10[0] = result;
  if (game_GameModeData_instance_ == 0) {
  LABEL_16:
    if (v7 < v9) {
      return result;
    }
    goto LABEL_17;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v10);
  if (result != 0) {
    v9 = *(_DWORD*)(result + 32);
    goto LABEL_16;
  }
  if (v7 < 0) {
    return result;
  }
LABEL_17:
  v12 = &GameData_1a91981;
  v11 = game_HashString(&GameData_1a91981);
  return game_VariableManager_SetFlag(&v11, 1);
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
