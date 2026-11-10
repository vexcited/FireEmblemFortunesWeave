#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BladeResonance_14b7950(void);
__int64 GameManager_a2d080(_QWORD);
__int64 GameManager_a2f660(_QWORD);
__int64 GameRoutine_13150c0(_QWORD);
__int64 GameRoutine_14cced0(void);
__int64 GameRoutine_1522300(_QWORD, _QWORD);
__int64 GameRoutine_1522780(_QWORD);
__int64 GameRoutine_152c1d0(_QWORD);
__int64 GameRoutine_15317a0(_QWORD);
__int64 GameRoutine_1536080(_QWORD, _QWORD);
__int64 GameRoutine_1536e70(_QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16f9d60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_175bde0(_QWORD);
__int64 GameRoutine_176b750(_QWORD, _QWORD);
__int64 GameRoutine_17b8dd0(void);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_17bcf90(_QWORD);
__int64 GameRoutine_19a0e60(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_70e880(_QWORD, _QWORD);
__int64 GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_96bc20(_QWORD, _QWORD);
__int64 GameRoutine_9b11a0(_QWORD, _QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 GmapSituation_14db030(void);
__int64 Impl_1326560(_QWORD);
__int64 Impl_132a740(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 SpotMgr_1333f20(_QWORD);
__int64 SpotMgr_1334560(_QWORD);
__int64 SpotMgr_1334d40(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_BanquetManager_CommitReliance(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a925e2;
extern _UNKNOWN GameData_1ab95e2;
extern _UNKNOWN GameData_1abd682;
extern _UNKNOWN GameData_1ad0433;
extern _UNKNOWN GameData_1ad4186;
extern _UNKNOWN GameData_1ae354e;
extern _UNKNOWN GameData_1ae7340;
extern _UNKNOWN GameData_1aeebca;
extern _UNKNOWN GameData_1aeeeee;
extern _UNKNOWN* GameData_212ceb8;
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d748[2];
extern __int64 GameData_21316c8;
extern __int64 GameData_2131858[2];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21f1620;
extern __int64 GameData_21f1628;
extern __int64 GameData_21f1648;
extern __int64 GameData_21f1650;
extern __int64 GameData_21f1658;
extern __int64 GameData_21f1668;
extern __int64 GameData_21f61c0;
extern __int64 GameData_22416c0;
extern __int64 GameData_22587d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d6f8[3];
extern __int64* GameData_212d728[2];
extern __int64* GameData_2130e70;
extern __int64* GameData_21316e0[15];
extern __int64* game_sound_g_game_sound_ptr[5];
extern char GameData_1a9f09e;
extern char* GameData_2044fa0;
__int64 ProcGmapCommandSeq_14b0310();
__int64 ProcGmapCommandSeq_14b0370();
__int64 ProcGmapCommandSeq_14b0700(__int64 a1);
__int64 ProcGmapCommandSeq_14b0740();
__int64 ProcGmapCommandSeq_14b07c0(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b08a0(__int64 a1, __int64 a2);
void ProcGmapCommandSeq_14b09c0();
__int64 ProcGmapCommandSeq_14b0b00(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b0bc0(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b0ca0(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b0d70(__int64 result);
__int64 ProcGmapCommandSeq_14b0da0(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b11a0(__int64 result, __int64 a2);
void ProcGmapCommandSeq_14b14b0();
__int64 ProcGmapCommandSeq_14b14d0(__int64 a1);
void ProcGmapCommandSeq_14b15c0();
void ProcGmapCommandSeq_14b1600();
__int64 ProcGmapCommandSeq_14b1640(__int64 a1);
__int64 ProcGmapCommandSeq_14b16a0(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b1770();
__int64 ProcGmapCommandSeq_14b17e0(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b1d80(__int64 a1);
__int64 ProcGmapCommandSeq_14b1e00(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b2320(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b2440(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b2600(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b28e0(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b2b60(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b2d60(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b2fa0(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b3280(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b3360(__int64 a1, __int64 a2);
__int64 ProcGmapCommandSeq_14b3420();
__int64 ProcGmapCommandSeq_14b3530();
__int64 ProcGmapCommandSeq_14b35f0(__int64 a1);
__int64 ProcGmapCommandSeq_14b3660(__int64 result);
__int64 ProcGmapCommandSeq_14b3a20(__int64 result);
void ProcGmapCommandSeq_14b3ab0();
void ProcGmapCommandSeq_14b3b50();
__int64 ProcGmapCommandSeq_14b3f90(__int64 a1);
__int64 ProcGmapCommandSeq_14b4020(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b4100(__int64 result, __int64 a2);
bool game_gmap_anonymous_ProcGmapCommandSeq_EndDestroyHellGate_closure_Invoke(
    __int64 a1, __int64 a2);

__int64 ProcGmapCommandSeq_14b0310()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
  result = game_hub_ProgressEventView_instance_;
  if (game_hub_ProgressEventView_instance_ != 0) {
    result = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
  return result;
}

__int64 ProcGmapCommandSeq_14b0370()
{
  __int64* v0;
  __int64 v1;
  __int64 result;

  *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) &= ~0x10u;
  v0 = GameData_212d6f8[0];
  v1 = *(_QWORD*)(*GameData_212d6f8[0] + 8);
  result = GameManager_a2f660(*game_sound_g_game_sound_ptr[0]);
  *(_BYTE*)(*(_QWORD*)(*v0 + 8) + 40LL) = 0;
  *(_BYTE*)(v1 + 56) = 1;
  return result;
}

__int64 ProcGmapCommandSeq_14b0700(__int64 a1)
{
  __int64 result;

  result = GmapSituation_14db030();
  if ((result & 1) != 0) {
    return GameRoutine_152c1d0(a1);
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b0740()
{
  __int64 v0;
  __int64 v1;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1648 + 8);
  GameManager_a2d080(game_sound_g_game_sound);
  v1 = GameData_21f1648;
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 1;
  result = GameRoutine_15317a0(*(_QWORD*)(v1 + 8) + 40LL);
  *(_BYTE*)(v0 + 56) = 0;
  return result;
}

__int64 ProcGmapCommandSeq_14b07c0(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b08a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 result;
  unsigned int v12;

  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64***)(v2 + 8);
  v5 = *(__int64***)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if ((*v4)[12] == 0 && v6[69] == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
    goto LABEL_12;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v7 = *v4++;
    v6 = v7;
    if (*((_DWORD*)v7 + 21) == v3) {
      break;
    }
    if (v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v8 = *v6;
LABEL_12:
  SpotMgr_1334d40(v8);
  v9 = GameData_212d728[0];
  v10 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v10 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v12 = *(_DWORD*)(v10 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v10 + 5856) = v12;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v12 = *(_DWORD*)(v10 + 5856);
  }
  *(_DWORD*)(v10 + 5856) = v12 & 0xFFFDFFFF;
  *(_DWORD*)(*(_QWORD*)(*v9 + 8) + 5856LL) &= ~0x10u;
  return result;
}

void ProcGmapCommandSeq_14b09c0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 1);
    v2 = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      v2 = GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(v0 + 5856) |= 0x10000u;
    if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
      v3 = *(_QWORD*)(GameData_21c96e8 + 8);
      v4 = *(_DWORD*)(v3 + 56);
      v5 = *(__int64***)(v3 + 8);
      v6 = *(__int64***)(v3 + 16);
      if (v4 < 0) {
        for (; v5 != v6; ++v5) {
          v7 = *v5;
          if ((*v5)[12] == 0 && v7[69] == 0) {
            goto LABEL_15;
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
            goto LABEL_11;
          }
        }
      LABEL_15:
        v9 = *v7;
        goto LABEL_16;
      }
    LABEL_11:
      v9 = game_gmap_SpotMgr_GetCurrentSpot(v2, v1);
    LABEL_16:
      SpotMgr_1333f20(v9);
      SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
      *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
    }
  }
}

__int64 ProcGmapCommandSeq_14b0b00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;

  v2 = *(_QWORD*)(GameData_21c96f8 + 16);
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64***)(v3 + 8);
  v6 = *(__int64***)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if ((*v5)[12] == 0 && v7[69] == 0) {
        goto LABEL_11;
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
        goto LABEL_7;
      }
    }
  LABEL_11:
    v9 = *v7;
    return game_gmap_BanquetManager_CommitReliance(v2 + 16, v9);
  }
LABEL_7:
  v9 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
  return game_gmap_BanquetManager_CommitReliance(v2 + 16, v9);
}

__int64 ProcGmapCommandSeq_14b0bc0(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64**)(v2 + 8);
    v5 = *(__int64**)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
          return GameRoutine_1522300(result, *v6);
        }
      }
    }
    else {
      while (v4 != v5) {
        v7 = *v4++;
        v6 = (_QWORD*)v7;
        if (*(_DWORD*)(v7 + 84) == v3) {
          return GameRoutine_1522300(result, *v6);
        }
      }
    }
    v8 = result;
    v9 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
    return GameRoutine_1522300(v8, v9);
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b0ca0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;

  v2 = *(_QWORD*)(GameData_21c96f8 + 16);
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64***)(v3 + 8);
  v6 = *(__int64***)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if ((*v5)[12] == 0 && v7[69] == 0) {
        goto LABEL_11;
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
        goto LABEL_7;
      }
    }
  LABEL_11:
    v9 = *v7;
    return GameRoutine_96bc20(v2 + 16, v9);
  }
LABEL_7:
  v9 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
  return GameRoutine_96bc20(v2 + 16, v9);
}

__int64 ProcGmapCommandSeq_14b0d70(__int64 result)
{
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return GameRoutine_1522780(*(_QWORD*)(result + 32));
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b0da0(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD v30[2];

  v2 = GameData_212c790;
  if (*(_BYTE*)(*GameData_2130e70 + 52) == 0) {
    v3 = *(_QWORD*)(*GameData_212c790 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64***)(v3 + 8);
    v6 = *(__int64***)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v6; ++v5) {
        v7 = *v5;
        if ((*v5)[12] == 0 && v7[69] == 0) {
          goto LABEL_12;
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
          goto LABEL_8;
        }
      }
    LABEL_12:
      v9 = *v7;
      goto LABEL_13;
    }
  LABEL_8:
    v9 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
  LABEL_13:
    SpotMgr_1333f20(v9);
    SpotMgr_1334560(*(_QWORD*)(*GameData_212c780 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  v10 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
  if (*(_QWORD*)(v10 + 56) != 0) {
    v11 = *(_QWORD**)(v10 + 48);
    if (v11 != nullptr) {
      v12 = fw_memory_g_heap_manager_ptr;
      do {
        v13 = (_QWORD*)*v11;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v14 = 128;
        }
        else {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v14, v11);
        v11 = v13;
      } while (v13 != nullptr);
    }
    v15 = *(_QWORD*)(v10 + 40);
    *(_QWORD*)(v10 + 48) = 0;
    if (v15 != 0) {
      v16 = v15 & 7;
      if (v15 >= 8) {
        v18 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        v17 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + 8 * v17) = 0;
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + 8 * v17 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + 8 * v17 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + 8 * v17 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + 8 * v17 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + 8 * v17 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + 8 * v17 + 48) = 0;
          v19 = *(_QWORD*)(v10 + 32) + 8 * v17;
          v17 += 8;
          *(_QWORD*)(v19 + 56) = 0;
        } while (v18 != v17);
      }
      else {
        v17 = 0;
      }
      if (v16 != 0) {
        v20 = 8 * v17;
        do {
          --v16;
          *(_QWORD*)(*(_QWORD*)(v10 + 32) + v20) = 0;
          v20 += 8;
        } while (v16 != 0);
      }
    }
    *(_QWORD*)(v10 + 56) = 0;
  }
  v21 = *v2;
  *(_DWORD*)(v10 + 24) = 0;
  v22 = *(_QWORD*)(v21 + 8);
  v23 = *(_DWORD*)(v22 + 56);
  v24 = *(__int64**)(v22 + 8);
  if (v23 < 0) {
    while (1) {
      v26 = *v24;
      if (*(_QWORD*)(*v24 + 96) == 0 && *(_QWORD*)(v26 + 552) == 0) {
        break;
      }
      ++v24;
    }
  }
  else {
    v27 = *v24;
    v25 = v24 + 1;
    v26 = v27;
    if (*(_DWORD*)(v27 + 84) != v23) {
      do {
        v28 = *v25++;
        v26 = v28;
      } while (*(_DWORD*)(v28 + 84) != v23);
    }
  }
  GameRoutine_81a540(v26 + 112, 3720050894LL, GameData_212ceb8);
  GameRoutine_19a0e60(*(_QWORD*)(*GameData_212d728[0] + 8) + 32LL);
  v30[1] = &GameData_1ad4186;
  v30[0] = game_HashString(&GameData_1ad4186);
  return GameRoutine_9b11a0(&GameData_21f61c0, v30, 1);
}

__int64 ProcGmapCommandSeq_14b11a0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64** v14;
  __int64** v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  char v26[12];

  v2 = result;
  v3 = GameData_212c790;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64***)(v4 + 8);
  v7 = *(__int64***)(v4 + 16);
  if (v5 < 0) {
    if (v6 != v7) {
      while (1) {
        v8 = *v6;
        if ((*v6)[12] == 0 && v8[69] == 0) {
          break;
        }
        if (++v6 == v7) {
          goto LABEL_7;
        }
      }
    LABEL_12:
      v10 = *v8;
      if (*v8 == 0) {
        return result;
      }
      goto LABEL_13;
    }
  }
  else {
    while (v6 != v7) {
      v9 = (__int64)*v6++;
      v8 = (__int64*)v9;
      if (*(_DWORD*)(v9 + 84) == v5) {
        goto LABEL_12;
      }
    }
  }
LABEL_7:
  result = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  v10 = result;
  if (result == 0) {
    return result;
  }
LABEL_13:
  result = Impl_1326560(v10);
  if (result == 0) {
    return result;
  }
  if (*(_BYTE*)(result + 68) != 0) {
    v12 = *(_QWORD*)(*v3 + 8);
    v13 = *(_DWORD*)(v12 + 56);
    v14 = *(__int64***)(v12 + 8);
    v15 = *(__int64***)(v12 + 16);
    if (v13 < 0) {
      for (; v14 != v15; ++v14) {
        v16 = *v14;
        if ((*v14)[12] == 0 && v16[69] == 0) {
          goto LABEL_31;
        }
      }
    }
    else if (v14 != v15) {
      while (1) {
        v17 = *v14++;
        v16 = v17;
        if (*((_DWORD*)v17 + 21) == v13) {
          break;
        }
        if (v14 == v15) {
          goto LABEL_27;
        }
      }
    LABEL_31:
      v21 = *v16;
      goto LABEL_32;
    }
  LABEL_27:
    v21 = game_gmap_SpotMgr_GetCurrentSpot(result, v11);
  LABEL_32:
    v22 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         56, 16, 0);
    v23 = GameData_21316e0[0];
    *(_DWORD*)(v22 + 16) = 0;
    *(_QWORD*)v22 = v23 + 2;
    *(_QWORD*)(v22 + 8) = 0;
    if (game_gmap_GmapClock_instance_ != 0) {
      v24 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v24 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    GameRoutine_70e880(v24, 6);
    GameRoutine_70ea50(v24, v26);
    *(_QWORD*)(v22 + 32) = v21;
    *(_BYTE*)(v22 + 42) = 0;
    *(_WORD*)(v22 + 40) = 256;
    v25 = GameData_2131858[0];
    *(_DWORD*)(v22 + 44) = 0;
    *(_QWORD*)v22 = v25 + 16;
    result = Impl_1326560(v21);
    *(_QWORD*)(v22 + 48) = result;
    *(_QWORD*)(v21 + 280) = v22;
    return result;
  }
  v18 = result;
  Impl_132a740(v10);
  v19 = Impl_1326560(v10);
  if (*(_WORD*)(v19 + 64) != 0 && game_GameModeData_instance_ != 0) {
    v20 = (*(_DWORD*)(game_GameModeData_instance_ + 72) +
           *(unsigned __int16*)(v19 + 64)) &
          ~((*(_DWORD*)(game_GameModeData_instance_ + 72) +
             *(unsigned __int16*)(v19 + 64)) >>
            31);
    if (v20 >= 9999999) {
      v20 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v20;
  }
  return GameRoutine_176b750(v2, v18);
}

void ProcGmapCommandSeq_14b14b0()
{
  *(_DWORD*)(*(_QWORD*)(GameData_21f1668 + 8) + 5856LL) &= ~0x20u;
}

__int64 ProcGmapCommandSeq_14b14d0(__int64 a1)
{
  int v1;
  unsigned int v2;
  __int64 v3;
  int v4;
  char* v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _QWORD v11[2];
  _QWORD v12[2];
  __int64 v13;
  __int64 v14;
  char* v15;

  v1 = *(_DWORD*)(a1 + 212);
  v2 = 0;
  v3 = 0;
  v14 = 0;
  v15 = nullptr;
  v13 = 0;
  v4 = v1 - 8;
  if ((unsigned int)(v1 - 8) > 0xA) {
    v5 = nullptr;
  }
  else {
    v5 = nullptr;
    if (((0x4D1u >> v4) & 1) != 0) {
      v6 = a1;
      GameRoutine_60a020(&v13, (&GameData_2044fa0)[v4]);
      v2 = (unsigned __int8)v13;
      v3 = v14;
      v5 = v15;
      a1 = v6;
    }
  }
  v7 = (v2 & 1) == 0;
  v8 = v2 >> 1;
  if (v7) {
    v5 = (char*)&v13 + 1;
  }
  if (!v7) {
    v8 = v3;
  }
  v12[0] = v5;
  v12[1] = v8;
  v11[0] = &GameData_1a9f09e;
  v11[1] = 0;
  result = GameRoutine_16f9d60(a1, v12, v11);
  if ((v13 & 1) != 0 && v15 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v15);
  }
  return result;
}

void ProcGmapCommandSeq_14b15c0()
{
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    *(_DWORD*)(*(_QWORD*)(GameData_21f1668 + 8) + 5856LL) |= 0x20u;
  }
}

void ProcGmapCommandSeq_14b1600()
{
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    *(_DWORD*)(*(_QWORD*)(GameData_21f1668 + 8) + 5856LL) |= 0x40u;
  }
}

__int64 ProcGmapCommandSeq_14b1640(__int64 a1)
{
  __int64 result;
  char v3;

  result = GameRoutine_1536e70(3);
  if ((result & 1) != 0) {
    GameRoutine_887920(&v3, &GameData_1a925e2);
    return GameRoutine_162aea0(a1, &v3);
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b16a0(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b1770()
{
  __int64 result;
  _QWORD v1[2];

  v1[1] = &GameData_1aeebca;
  result = game_HashString(&GameData_1aeebca);
  v1[0] = result;
  if (game_GameModeData_instance_ != 0) {
    return GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), v1,
                               1);
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b17e0(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b1d80(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _BYTE v3[32];
  _BYTE* v4;
  const char* v5;

  v5 = "MID_Gmap_CorpsDelete_Message";
  result = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, &v5);
  if (result != 0) {
    v4 = nullptr;
    GameRoutine_6680e0(v3, result + 1248);
    result = (__int64)v4;
    if (v4 == v3) {
      v2 = 32;
    }
    else {
      if (v4 == nullptr) {
        return result;
      }
      v2 = 40;
    }
    return (*(__int64 (**)(void))(*(_QWORD*)v4 + v2))();
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b1e00(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b2320(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD v10[2];

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  v10[1] = &GameData_1ae354e;
  v10[0] = game_HashString(&GameData_1ae354e);
  return GameRoutine_9b11a0(&GameData_21f61c0, v10, 1);
}

__int64 ProcGmapCommandSeq_14b2440(__int64 a1, __int64 a2)
{
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 result;

  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64***)(v3 + 8);
  v6 = *(__int64***)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = *v5++;
      v7 = v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        goto LABEL_12;
      }
    }
  LABEL_7:
    v9 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
    result = *(_QWORD*)(v9 + 280);
    if (result == 0) {
      return result;
    }
    goto LABEL_13;
  }
  if (v5 == v6) {
    goto LABEL_7;
  }
  while (1) {
    v7 = *v5;
    if ((*v5)[12] == 0 && v7[69] == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_7;
    }
  }
LABEL_12:
  v9 = *v7;
  result = *(_QWORD*)(*v7 + 280);
  if (result == 0) {
    return result;
  }
LABEL_13:
  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) !=
          1 ||
      ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v9 + 280) + 112LL))(
            *(_QWORD*)(v9 + 280))) &
       1) == 0) {
    result = *(_QWORD*)(v9 + 280);
    if (result != 0) {
      if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)result + 24LL))(result) ==
          1) {
        (*(void (**)(_QWORD))(**(_QWORD**)(v9 + 280) + 112LL))(
            *(_QWORD*)(v9 + 280));
      }
      result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v9 + 280) + 24LL))(
          *(_QWORD*)(v9 + 280));
      if ((_BYTE)result == 0) {
        if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v9 + 280) + 24LL))(
                *(_QWORD*)(v9 + 280)) == 1) {
          (*(void (**)(_QWORD))(**(_QWORD**)(v9 + 280) + 112LL))(
              *(_QWORD*)(v9 + 280));
        }
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v9 + 280) + 48LL))(
            *(_QWORD*)(v9 + 280));
        if ((result & 1) != 0) {
          (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v9 + 280) + 88LL))(
              *(_QWORD*)(v9 + 280), a1);
          result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v9 + 280) + 112LL))(
              *(_QWORD*)(v9 + 280));
          if ((result & 1) != 0) {
            result = *(_QWORD*)(v9 + 280);
            if (result != 0) {
              result =
                  (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
              *(_QWORD*)(v9 + 280) = 0;
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b2600(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b28e0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD v10[2];

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  v10[1] = &GameData_1ae7340;
  v10[0] = game_HashString(&GameData_1ae7340);
  return GameRoutine_9b11a0(&GameData_21f61c0, v10, 1);
}

__int64 ProcGmapCommandSeq_14b2b60(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b2d60(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b2fa0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;
  _QWORD v10[2];

  if (*(_BYTE*)(GameData_22416c0 + 52) != 0) {
    goto LABEL_14;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64***)(v2 + 8);
  v5 = *(__int64***)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if ((*v4)[12] == 0 && v6[69] == 0) {
        goto LABEL_12;
      }
    }
  }
  else if (v4 != v5) {
    while (1) {
      v7 = *v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        break;
      }
      if (v4 == v5) {
        goto LABEL_8;
      }
    }
  LABEL_12:
    v8 = *v6;
    goto LABEL_13;
  }
LABEL_8:
  v8 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
LABEL_13:
  SpotMgr_1333f20(v8);
  SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
LABEL_14:
  v10[1] = &GameData_1ab95e2;
  result = game_HashString(&GameData_1ab95e2);
  v10[0] = result;
  if (game_GameModeData_instance_ != 0) {
    return GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                               v10, 1);
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b3280(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b3360(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v9;

  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = (_QWORD*)*v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
        return GameRoutine_1536080(a1, *v6);
      }
    }
  LABEL_7:
    v9 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
    return GameRoutine_1536080(a1, v9);
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v7 = *v4++;
    v6 = (_QWORD*)v7;
    if (*(_DWORD*)(v7 + 84) == v3) {
      return GameRoutine_1536080(a1, *v6);
    }
    if (v4 == v5) {
      goto LABEL_7;
    }
  }
}

__int64 ProcGmapCommandSeq_14b3420()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  _QWORD v9[2];

  v9[1] = &GameData_1abd682;
  v9[0] = game_HashString(&GameData_1abd682);
  result = GameRoutine_9b11a0(&GameData_21f61c0, v9, 1);
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, v1);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b3530()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  _QWORD v3[2];

  v0 = *(_QWORD*)(GameData_21f1658 + 16);
  if (*(_BYTE*)(v0 + 169) == 1) {
    v1 = **(_QWORD**)(*(_QWORD*)(GameData_21f1650 + 8) + 8LL);
    (*(void (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
  }
  *(_BYTE*)(v0 + 169) = 0;
  v3[1] = &GameData_1ad0433;
  result = game_HashString(&GameData_1ad0433);
  v3[0] = result;
  if (game_GameModeData_instance_ != 0) {
    return GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), v3,
                               1);
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b35f0(__int64 a1)
{
  __int64 result;
  _QWORD v3[2];
  _QWORD v4[2];

  result = BladeResonance_14b7950();
  if ((result & 1) == 0) {
    v4[0] = "MID_Gmap_BladeResonance_NoEnemy_Message";
    v4[1] = 39;
    v3[0] = &GameData_1a9f09e;
    v3[1] = 0;
    return GameRoutine_16f9b50(a1, v4, v3);
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b3660(__int64 result)
{
  __int64 v1;
  _DWORD* v2;
  _BYTE* v3;
  unsigned __int8 v4;
  __int16 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  _DWORD* v15;

  v1 = *(_QWORD*)(GameData_21f1620 + 8);
  if (*(_BYTE*)(v1 + 105) != 1) {
    v6 = *(unsigned __int8**)(result + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    v5 = 8;
    goto LABEL_16;
  }
  if (*(_QWORD*)(v1 + 16) != 0) {
    v2 = *(_DWORD**)(v1 + 56);
    if (*(_QWORD*)v2 != 0 && *(_DWORD*)(*(_QWORD*)v2 + 16LL) == v2[2]) {
      return result;
    }
  }
  else {
    v11 = *(_QWORD*)(GameData_21c96e8 + 8);
    v12 = *(__int64**)(v11 + 8);
    v13 = *(__int64**)(v11 + 16);
    while (v12 != v13) {
      v14 = *v12;
      if ((*(_WORD*)(*v12 + 544) & 0x100) != 0) {
        v15 = *(_DWORD**)(v14 + 656);
        if (*(_QWORD*)v15 != 0 && *(_DWORD*)(*(_QWORD*)v15 + 16LL) == v15[2] &&
            (unsigned int)*(unsigned __int8*)(v14 + 652) - 1 < 3) {
          return result;
        }
      }
      ++v12;
    }
  }
  v3 = *(_BYTE**)(result + 16);
  if (v3 != nullptr) {
    v4 = *v3 - 9;
    if (v4 <= 7u && ((0xE7u >> v4) & 1) != 0) {
      v5 = 128;
    LABEL_16:
      *(_WORD*)(result + 136) |= v5;
    }
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b3a20(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL) + 16LL) == 0 ||
      ((result = GameRoutine_13150c0(*(_QWORD*)(GameData_21f1628 + 16))) & 1) ==
          0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

void ProcGmapCommandSeq_14b3ab0()
{
  _QWORD* v0;
  __int64 v1;
  _QWORD v2[2];

  v0 = *(_QWORD**)(GameData_21f1620 + 8);
  if (v0[2] != 0) {
    GameRoutine_14cced0();
    if (game_GameModeData_instance_ != 0) {
      v1 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v1 != 0 && *(_QWORD*)(*v0 + 120LL) == *(_QWORD*)(v1 + 200)) {
        v2[1] = &GameData_1aeeeee;
        v2[0] = game_HashString(&GameData_1aeeeee);
        game_VariableManager_SetFlag(v2, 0);
        if (game_hub_ProgressEventView_instance_ != 0) {
          GameRoutine_17b8dd0();
        }
      }
    }
  }
}

void ProcGmapCommandSeq_14b3b50()
{
  __int64 v0;
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;

  v0 = *(_QWORD*)(*(_QWORD*)(GameData_21f1620 + 8) + 16LL);
  if (v0 != 0) {
    v1 = *(_BYTE**)(v0 + 64);
    if (v1 != nullptr && *v1 != 0) {
      v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
      LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 0);
      if (game_hub_ProgressEventView_instance_ != 0) {
        GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
      }
      v3 = game_gameui_Footer_instance_;
      v4 = *(_DWORD*)(v2 + 5856) & 0xFFFEFFFF;
      *(_DWORD*)(v2 + 5856) = v4;
      if (v3 != 0) {
        LayoutAccessor_1567000(v3, 0);
        v4 = *(_DWORD*)(v2 + 5856);
      }
      *(_DWORD*)(v2 + 5856) = v4 & 0xFFFDFFFF;
    }
  }
}

__int64 ProcGmapCommandSeq_14b3f90(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 result;

  v1 = GameData_212d728[0];
  v2 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  *(_BYTE*)(*(_QWORD*)(v2 + 8) + 5837LL) = 1;
  GameRoutine_17bcf90(a1);
  GameRoutine_175bde0(*(_QWORD*)(*v1 + 8) + 5800LL);
  result = GameRoutine_175b880(*(_QWORD*)(*v1 + 8) + 5800LL);
  *(_DWORD*)(*(_QWORD*)(*v1 + 8) + 5856LL) |= 0x10u;
  return result;
}

__int64 ProcGmapCommandSeq_14b4020(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;

  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64***)(v2 + 8);
    v5 = *(__int64***)(v2 + 16);
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v6 = *v4;
        if ((*v4)[12] == 0 && v6[69] == 0) {
          goto LABEL_12;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v7 = *v4++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_8;
        }
      }
    LABEL_12:
      v8 = *v6;
      goto LABEL_13;
    }
  LABEL_8:
    v8 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_13:
    SpotMgr_1333f20(v8);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

__int64 ProcGmapCommandSeq_14b4100(__int64 result, __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;

  if (GameData_22587d0 != 0) {
    v2 = *(_QWORD**)(GameData_22587d0 + 8);
    v3 = v2[20];
    v2[23] = 0;
    v2[21] = v3;
  }
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v5 = *(_DWORD*)(v4 + 56);
    v6 = *(__int64***)(v4 + 8);
    v7 = *(__int64***)(v4 + 16);
    if (v5 < 0) {
      for (; v6 != v7; ++v6) {
        v8 = *v6;
        if ((*v6)[12] == 0 && v8[69] == 0) {
          goto LABEL_14;
        }
      }
    }
    else if (v6 != v7) {
      while (1) {
        v9 = *v6++;
        v8 = v9;
        if (*((_DWORD*)v9 + 21) == v5) {
          break;
        }
        if (v6 == v7) {
          goto LABEL_10;
        }
      }
    LABEL_14:
      v10 = *v8;
      goto LABEL_15;
    }
  LABEL_10:
    v10 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
  LABEL_15:
    SpotMgr_1333f20(v10);
    result = SpotMgr_1334560(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  return result;
}

bool game_gmap_anonymous_ProcGmapCommandSeq_EndDestroyHellGate_closure_Invoke(
    __int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  return v2 != 0 && *(_BYTE*)(v2 + 32) == 3 &&
         (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 8) != 0;
}

#pragma GCC visibility pop
