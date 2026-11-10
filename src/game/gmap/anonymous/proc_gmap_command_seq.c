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
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__attribute__((swiftcall)) void
snd_play_ff2d0_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                    double, float) __asm__("snd_play_ff2d0");
__int64 CorpsManager_9723f0(_QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_1317f10_alt1(float32x4_t*,
                                 float32x4_t*) __asm__("GameRoutine_1317f10");
__int64 GameRoutine_133f460(void);
__int64 GameRoutine_14d2660(_QWORD, _QWORD);
__int64 GameRoutine_9b11a0_alt1(_QWORD*, unsigned __int64*,
                                int) __asm__("GameRoutine_9b11a0");
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_13262e0(__int64);
__int64 Impl_1326560_alt1(__int64) __asm__("Impl_1326560");
__int64 SpotMgr_1333f20_alt1(__int64) __asm__("SpotMgr_1333f20");
__int64 TroopMgr_134d2e0(__int64);
__int64 TroopMgr_134d2e0_alt1(_QWORD) __asm__("TroopMgr_134d2e0");
__int64 UnitActor_81a540(__int64, int, __int64);
__int64 UnitItem_6e8800(__int64 result, unsigned __int64*);
__int64 Unit_6cfa20(__int64);
__int64 game_HashString32(void);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gmap_1341d60(_QWORD, _QWORD);
__int64 game_gmap_TroopMgr_CountTroop_1349680(__int64);
__int64 game_gmap_TroopMgr_EachPlayerTroop(__int64 result, __int64);
__int64 game_gmap_TroopMgr_EachPlayerUnit(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__n128 GameRoutine_175b880_alt1(__int64,
                                __n128 result) __asm__("GameRoutine_175b880");
__n128 GameRoutine_175bde0_alt1(__int64) __asm__("GameRoutine_175bde0");
__n128 GameRoutine_17bcf90_alt1() __asm__("GameRoutine_17bcf90");
__n128 SpotMgr_1334560_alt1(__int64) __asm__("SpotMgr_1334560");
__n128 TroopMgr_134a4a0(__int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 double) __asm__("snd_Fade_Fade_10c830");
extern _UNKNOWN GameData_1a9e200;
extern _UNKNOWN GameData_1aa0a93;
extern _UNKNOWN GameData_216de68;
extern __int64 (*GameData_2044c28[])();
extern __int64 (*GameData_2044ca8[])();
extern __int64 (*GameData_2044d28[])();
extern __int64 (*GameData_2044da8[])();
extern __int64* GameData_212d460[6];
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64 GameData_212c638;
extern __int64 GameData_212d750;
extern __int64 game_TransporterConst_List_instance__ptr[6];
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_gmap_anonymous_ProcGmapCommandSeq_EndDestroyHellGate();
__n128 game_gmap_anonymous_ProcGmapCommandSeq_ExecuteStay();
_QWORD* ProcGmapCommandSeq_14b1080();
void game_gmap_anonymous_ProcGmapCommandSeq_AfterCreateCorps();
void game_gmap_anonymous_ProcGmapCommandSeq_AfterChangeCorps();
__int64 ProcGmapCommandSeq_14b1bc0();
__int64 ProcGmapCommandSeq_14b1ee0();
__int64 ProcGmapCommandSeq_14b37a0(__int64 result, __int64 a2);
__int64 ProcGmapCommandSeq_14b3c00(__int64 result);
void ProcGmapCommandSeq_14b3d60();
__int64 GameRoutine_1537040(_QWORD, _QWORD);
__int64 GameRoutine_1537c80(_QWORD, _QWORD);
__int64 GameRoutine_1779bf0(_QWORD, _QWORD, _QWORD);
__int64 LegionPool_937620(_QWORD, _QWORD, _QWORD);
__int64 Spot_132ad00(_QWORD, _QWORD);
__int64 Spot_132adf0(_QWORD);
__int64 game_1514470(void);
extern _UNKNOWN GameData_1ae356b;
extern _UNKNOWN GameData_1ae7357;
extern _UNKNOWN GameData_1aeebf6;
extern __int64 GameData_21f4280;
__int64 ProcGmapCommandSeq_14b1400(__int64 a1);
__int64 ProcGmapCommandSeq_14b2100(__int64 result);
__int64 ProcGmapCommandSeq_14b26e0();
__int64 ProcGmapCommandSeq_14b2a00();
__int64 ProcGmapCommandSeq_14b2c40(__int64 a1);
__int64 ProcGmapCommandSeq_14b2e40(__int64 a1);
__int64 ProcGmapCommandSeq_14b30c0();

__int64 game_gmap_anonymous_ProcGmapCommandSeq_EndDestroyHellGate()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  int v7;
  __int64 result;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;

  if (GameData_21c96e8 != 0) {
    TroopMgr_134a4a0(*(_QWORD*)(GameData_21c96e8 + 8));
  }
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v0 = *(_QWORD*)(GameData_21c96e8 + 8);
    v1 = *(_DWORD*)(v0 + 56);
    v2 = *(__int64**)(v0 + 8);
    v3 = *(__int64**)(v0 + 16);
    if (v1 < 0) {
      for (; v2 != v3; ++v2) {
        v4 = *v2;
        if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
          goto LABEL_14;
        }
      }
    }
    else if (v2 != v3) {
      while (1) {
        v5 = *v2++;
        v4 = v5;
        if (*(_DWORD*)(v5 + 84) == v1) {
          break;
        }
        if (v2 == v3) {
          goto LABEL_10;
        }
      }
    LABEL_14:
      v6 = *(unsigned int**)v4;
      goto LABEL_15;
    }
  LABEL_10:
    v6 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  LABEL_15:
    SpotMgr_1333f20_alt1((__int64)v6);
    SpotMgr_1334560_alt1(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  v10_.v10[0] = GameData_2044c28;
  v10_.v11 = v10_.v10;
  v7 = game_gmap_TroopMgr_CountTroop_1349680((__int64)v10_.v10);
  result = (__int64)v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_21;
    }
    v9 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
LABEL_21:
  if (v7 == 0) {
    *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 18;
  }
  return result;
}

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

__n128 game_gmap_anonymous_ProcGmapCommandSeq_ExecuteStay()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  __int64 v15;
  int v16;
  int v17;
  __int64* v18;
  __int64* i;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __n128 result;
  __int64 v29;
  struct {
    __int64* v30;
    __int64* v31;
    __int64 v32;
  } v30_;
  struct {
    __int64 (**v33)();
    __int64** v34;
    char gap64_[16];
    unsigned __int64* v35;
  } v33_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v30_.v31 = nullptr;
  v30_.v32 = 0;
  v30_.v30 = nullptr;
  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if (v1 < 0) {
    for (; v2 != v3; ++v2) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v6 = game_gmap_SpotMgr_GetCurrentSpot_alt1(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_12;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v5 = *v2++;
    v4 = v5;
    if (*(_DWORD*)(v5 + 84) == v1) {
      break;
    }
    if (v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v6 = *(unsigned int**)v4;
LABEL_12:
  v33_.v33 = GameData_2044ca8;
  v33_.v34 = &v30_.v30;
  v33_.v35 = (unsigned __int64*)&v33_.v33;
  game_gmap_TroopMgr_EachPlayerUnit((__int64)v6, (__int64)&v33_.v33),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v33_.v35 == (unsigned __int64*)&v33_.v33) {
    v7 = 32;
  }
  else {
    if (v33_.v35 == nullptr) {
      goto LABEL_17;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v33_.v35 + v7))((__int64)v33_.v35),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_17:
  v8 = *(_QWORD*)(GameData_21c96e8 + 8);
  v9 = *(_DWORD*)(v8 + 56);
  v10 = *(__int64**)(v8 + 8);
  v11 = *(__int64**)(v8 + 16);
  if ((v9 & 0x80000000) == 0) {
    while (v10 != v11) {
      v13 = *v10++;
      v12 = v13;
      if (*(_DWORD*)(v13 + 84) == v9) {
        goto LABEL_28;
      }
    }
  LABEL_23:
    v14 = game_gmap_SpotMgr_GetCurrentSpot_alt1(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v14 == nullptr) {
      goto LABEL_37;
    }
    goto LABEL_29;
  }
  if (v10 == v11) {
    goto LABEL_23;
  }
  while (1) {
    v12 = *v10;
    if (*(_QWORD*)(*v10 + 96) == 0 && *(_QWORD*)(v12 + 552) == 0) {
      break;
    }
    if (++v10 == v11) {
      goto LABEL_23;
    }
  }
LABEL_28:
  v14 = *(unsigned int**)v12;
  if (*(_QWORD*)v12 == 0) {
    goto LABEL_37;
  }
LABEL_29:
  v15 = Impl_13262e0((__int64)v14),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15 != 0) {
    v16 = GameRoutine_9db9e0(0x12u, *(unsigned __int16*)(v15 + 50)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (game_GameModeData_instance_ != 0) {
      v17 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v16) &
            ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v16) >> 31);
      if (v17 >= 9999999) {
        v17 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v17;
    }
    v18 = v30_.v30;
    for (i = v30_.v31; v18 != i; *(_BYTE*)(v20 + 2090) = 3) {
      v20 = *v18++;
      Unit_6cfa20(v20), result = COERCE_AS(__typeof__(result),
                                           PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v33_.v34 = (__int64**)&GameData_1aa0a93;
    v33_.v33 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1aa0a93),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_9b11a0_alt1(&GameData_21f61c0, (unsigned __int64*)&v33_.v33, 1),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_37:
  v21 = *(_QWORD*)(GameData_21c96e8 + 8);
  v22 = *(_DWORD*)(v21 + 56);
  v23 = *(__int64**)(v21 + 8);
  if (v22 < 0) {
    while (1) {
      v25 = *v23;
      if (*(_QWORD*)(*v23 + 96) == 0 && *(_QWORD*)(v25 + 552) == 0) {
        break;
      }
      ++v23;
    }
  }
  else {
    v26 = *v23;
    v24 = v23 + 1;
    v25 = v26;
    if (*(_DWORD*)(v26 + 84) != v22) {
      do {
        v27 = *v24++;
        v25 = v27;
      } while (*(_DWORD*)(v27 + 84) != v22);
    }
  }
  UnitActor_81a540(v25 + 112, -574916402, (__int64)GameData_212ceb8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                             32LL) -
                                  8LL) +
                       40LL) +
            225LL) = 1;
  snd_Fade_Fade_10c830((__int64)&v33_.v33, 0x0.0p+0f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  snd_play_ff2d0((__int64)"BGM_EVT_Act1_B", (__int64)"BGM_EVT_Act1_B",
                 (__int64)&v33_.v33, 0, 0x10001u, 0, 0x0.0p+0f,
                 0x1.0000000000000p+0f),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  snd_Fade_Destroy_Fade(&v33_.v33),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v30_.v30 != nullptr) {
    v30_.v31 = v30_.v30;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
  }
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

_QWORD* ProcGmapCommandSeq_14b1080()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  unsigned int* v6;
  _QWORD* result;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12[2];
  __int64 v13;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if (v1 < 0) {
    for (; v2 != v3; ++v2) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v6 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
    goto LABEL_12;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v5 = *v2++;
    v4 = v5;
    if (*(_DWORD*)(v5 + 84) == v1) {
      break;
    }
    if (v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v6 = *(unsigned int**)v4;
LABEL_12:
  result = (_QWORD*)Impl_1326560_alt1((__int64)v6);
  if (*((_WORD*)result + 16) != 0) {
    v8 = result;
    v9 = 0;
    v10 = game_TransporterConst_List_instance__ptr[0];
    do {
      v11 = *(_QWORD*)(v8[5] + 8 * v9);
      v13 = 0;
      v12[1] = v11;
      v12[0] = game_HashString_alt1(v11);
      UnitItem_6e8800((__int64)&v13, v12);
      result = X8CALL_X0(
          void*,
          TransporterConst_89b3d0((void*)(v12), *(_QWORD*)(*(_QWORD*)v10 + 8LL),
                                  &v13, *(unsigned __int8*)(v8[7] + v9++)));
    } while (v9 < *((unsigned __int16*)v8 + 16));
  }
  return result;
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

__int64 ProcGmapCommandSeq_14b1400(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    while (v3 != v4) {
      v6 = *v3++;
      v5 = v6;
      if (*(_DWORD*)(v6 + 84) == v2) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v5 = 0;
    goto LABEL_8;
  }
  if (v3 == v4) {
    goto LABEL_7;
  }
  while (1) {
    v5 = *v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v7 = *(_DWORD*)(v5 + 540);
  v8 = __OFSUB__(v7, 1);
  v9 = (unsigned int)(v7 - 1);
  if (((v9 & 0x80000000) != 0LL) == v8) {
    v10 = *(_QWORD*)(v5 + 24);
    v11 = *(_QWORD*)(v5 + 32) - v10;
    v12 = v10 + 8LL * (unsigned int)v9;
    if (v9 < v11 >> 3) {
      v5 = v12;
    }
  }
  return GameRoutine_1537c80(a1, *(_QWORD*)v5);
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

void game_gmap_anonymous_ProcGmapCommandSeq_AfterCreateCorps()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __n128 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v0 = GameData_212d708;
  v1 = *(_QWORD*)(*GameData_212d708 + 16);
  v8_.v9 = v8_.v8;
  v2 = *(_QWORD*)(v1 + 96);
  v8_.v8[0] = GameData_2044d28;
  game_gmap_TroopMgr_EachPlayerTroop(v2, (__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v8_.v9 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
  }
  v4 = *GameData_212c790;
  *(_DWORD*)(*(_QWORD*)(*GameData_212c790 + 8) + 56LL) = -1;
  v5 = GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
  *(_BYTE*)(*(_QWORD*)(*v0 + 16) + 170LL) = 0;
  TroopMgr_134d2e0(*(_QWORD*)(v4 + 8));
  v8_.v8[1] = &GameData_1a9e200;
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  v8_.v8[0] = game_HashString_alt1((__int64)&GameData_1a9e200);
  game_VariableManager_SetFlag_alt1((__int64)v8_.v8, 1);
  v6 = *v5;
  *(_BYTE*)(*(_QWORD*)(*v5 + 8) + 5835LL) = 1;
  *(_BYTE*)(*(_QWORD*)(v6 + 8) + 5837LL) = 1;
  GameRoutine_17bcf90_alt1();
  v7 = GameRoutine_175bde0_alt1(*(_QWORD*)(*v5 + 8) + 5800LL);
  GameRoutine_175b880_alt1(*(_QWORD*)(*v5 + 8) + 5800LL, v7);
  *(_DWORD*)(*(_QWORD*)(*v5 + 8) + 5856LL) |= 0x10u;
}

void game_gmap_anonymous_ProcGmapCommandSeq_AfterChangeCorps()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  __int64* v10;
  __int64 v11;
  __n128 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;

  v0 = *(_QWORD*)(*GameData_212d708 + 16);
  v13_.v14 = v13_.v13;
  v1 = *(_QWORD*)(v0 + 96);
  v13_.v13[0] = GameData_2044da8;
  game_gmap_TroopMgr_EachPlayerTroop(v1, (__int64)v13_.v13);
  if (v13_.v14 == v13_.v13) {
    v2 = 32;
  }
  else {
    if (v13_.v14 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v13_.v14 + v2))((__int64)v13_.v14);
LABEL_6:
  TroopMgr_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
  if (*(_BYTE*)(GameData_22416c0 + 52) == 0) {
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64**)(v3 + 8);
    v6 = *(__int64**)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v6; ++v5) {
        v7 = *v5;
        if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
          goto LABEL_17;
        }
      }
    }
    else if (v5 != v6) {
      while (1) {
        v8 = *v5++;
        v7 = v8;
        if (*(_DWORD*)(v8 + 84) == v4) {
          break;
        }
        if (v5 == v6) {
          goto LABEL_13;
        }
      }
    LABEL_17:
      v9 = *(unsigned int**)v7;
      goto LABEL_18;
    }
  LABEL_13:
    v9 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  LABEL_18:
    SpotMgr_1333f20_alt1((__int64)v9);
    SpotMgr_1334560_alt1(*(_QWORD*)(GameData_21c9700 + 8));
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  }
  v10 = GameData_212d728[0];
  v11 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  *(_BYTE*)(*(_QWORD*)(v11 + 8) + 5837LL) = 1;
  GameRoutine_17bcf90_alt1();
  v12 = GameRoutine_175bde0_alt1(*(_QWORD*)(*v10 + 8) + 5800LL);
  GameRoutine_175b880_alt1(*(_QWORD*)(*v10 + 8) + 5800LL, v12);
  *(_DWORD*)(*(_QWORD*)(*v10 + 8) + 5856LL) |= 0x10u;
}

__int64 ProcGmapCommandSeq_14b1bc0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (*(_QWORD*)(*v2 + 96) != 0 || *(_QWORD*)(*v2 + 552) != 0) {
      ++v2;
    }
  }
  else {
    v4 = *v2;
    v3 = v2 + 1;
    if (*(_DWORD*)(v4 + 84) != v1) {
      do {
        v5 = *v3++;
      } while (*(_DWORD*)(v5 + 84) != v1);
    }
  }
  GameRoutine_133f460();
  v6 = *(_QWORD*)(GameData_21c96e8 + 8);
  v7 = *(__int64**)(v6 + 8);
  v8 = *(__int64**)(v6 + 16);
  v9 = *(_DWORD*)(v6 + 56);
  if (v9 < 0) {
    if (v7 == v8) {
    LABEL_14:
      v10 = 0;
      if (((*(_DWORD*)0x54LL) & 0x80000000) != 0) {
        goto LABEL_23;
      }
      goto LABEL_22;
    }
    while (1) {
      v10 = *v7;
      if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0) {
        break;
      }
      if (++v7 == v8) {
        goto LABEL_14;
      }
    }
  }
  else if (v7 == v8) {
    v10 = 0;
  }
  else {
    while (1) {
      v11 = *v7++;
      v10 = v11;
      if (*(_DWORD*)(v11 + 84) == v9) {
        break;
      }
      if (v7 == v8) {
        goto LABEL_14;
      }
    }
  }
  if ((*(_DWORD*)(v10 + 84) & 0x80000000) == 0) {
  LABEL_22:
    game_gmap_1341d60(v10, 0);
    CorpsManager_9723f0(*(unsigned int*)(v10 + 84));
    v6 = *(_QWORD*)(GameData_21c96e8 + 8);
  }
LABEL_23:
  v12 = TroopMgr_134d2e0_alt1(v6);
  v13 = GameData_212d728[0];
  *(_DWORD*)(*(_QWORD*)(GameData_21c96e8 + 8) + 56LL) = -1;
  v14 = *v13;
  *(_BYTE*)(*(_QWORD*)(*v13 + 8) + 5844LL) = 0;
  *(_BYTE*)(*(_QWORD*)(v14 + 8) + 5835LL) = 1;
  *(_BYTE*)(*(_QWORD*)(v14 + 8) + 5837LL) = 1;
  GameRoutine_17bcf90(v12);
  GameRoutine_175bde0(*(_QWORD*)(*v13 + 8) + 5800LL);
  result = GameRoutine_175b880(*(_QWORD*)(*v13 + 8) + 5800LL);
  *(_DWORD*)(*(_QWORD*)(*v13 + 8) + 5856LL) |= 0x10u;
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
    return (*(__int64 (**)(void*))(*(_QWORD*)v4 + v2))((void*)v4);
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

__int64 ProcGmapCommandSeq_14b1ee0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  int v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 result;
  __int64 v31;
  _BYTE v32[200];

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = (__int64*)*v2++;
      v4 = v5;
      if (*((_DWORD*)v5 + 21) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = nullptr;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = (__int64*)*v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && v4[69] == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *((_DWORD*)v4 + 135);
  v7 = __OFSUB__(v6, 1);
  v8 = (unsigned int)(v6 - 1);
  if (((v8 & 0x80000000) != 0LL) == v7) {
    v9 = v4[3];
    v10 = v4[4] - v9;
    v11 = (__int64*)(v9 + 8LL * (unsigned int)v8);
    if (v8 < v10 >> 3) {
      v4 = v11;
    }
  }
  v12 = *v4;
  v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       56, 16, 0);
  GameRoutine_14d2660(v13, v12);
  v14 = GameData_21c96e8;
  *(_QWORD*)(v12 + 280) = v13;
  v15 = *(_QWORD*)(v14 + 8);
  v16 = *(_DWORD*)(v15 + 56);
  v17 = *(__int64**)(v15 + 8);
  v18 = *(__int64**)(v15 + 16);
  if ((v16 & 0x80000000) == 0) {
    while (v17 != v18) {
      v20 = (__int64*)*v17++;
      v19 = v20;
      if (*((_DWORD*)v20 + 21) == v16) {
        goto LABEL_22;
      }
    }
  LABEL_21:
    v19 = nullptr;
    goto LABEL_22;
  }
  if (v17 == v18) {
    goto LABEL_21;
  }
  while (1) {
    v19 = (__int64*)*v17;
    if (*(_QWORD*)(*v17 + 96) == 0 && v19[69] == 0) {
      break;
    }
    if (++v17 == v18) {
      goto LABEL_21;
    }
  }
LABEL_22:
  v21 = *((_DWORD*)v19 + 135);
  v7 = __OFSUB__(v21, 1);
  v22 = (unsigned int)(v21 - 1);
  if (((v22 & 0x80000000) != 0LL) == v7) {
    v23 = v19[3];
    v24 = v19[4] - v23;
    v25 = (__int64*)(v23 + 8LL * (unsigned int)v22);
    if (v22 < v24 >> 3) {
      v19 = v25;
    }
  }
  v26 = *v19;
  v27 = Impl_13261c0(*v19);
  v28 = *(_QWORD*)(v26 + 152);
  if (v27 == 6 && v28 != 0) {
    *(_QWORD*)(v28 + 72) = 0;
    *(_DWORD*)(v28 + 64) = 0;
  }
  snd_Fade_Fade_10c830_alt1(v32, 0.0f);
  snd_play_ff2d0_alt1((void*)(&v31), "SE_EVT_Catching_Setup",
                      "SE_EVT_Catching_Setup", v32, 0, 65537, 0, 0.0f, 1.0f);
  result = snd_Fade_Destroy_Fade_alt1(v32);
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  return result;
}

__int64 ProcGmapCommandSeq_14b2100(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  int v15;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  char v22;

  if (*(_BYTE*)(GameData_22416c0 + 52) != 0) {
    return result;
  }
  v1 = result;
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = (__int64*)*v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
        goto LABEL_9;
      }
    }
  }
  else {
    while (v4 != v5) {
      v7 = (__int64*)*v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        goto LABEL_9;
      }
    }
  }
  v6 = nullptr;
LABEL_9:
  v8 = *((_DWORD*)v6 + 135);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = v6[3];
    v12 = v6[4] - v11;
    v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *v6;
  v15 = (unsigned __int8)Impl_13261c0(*v6);
  result = *(_QWORD*)(v14 + 152);
  if (v15 == 6 && result != 0) {
    result = game_1514470();
    if (result != 0 && *GameData_212d460[0] == 0) {
      v18 = result;
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v19, v18, 0);
      v20 = *(_QWORD*)(v1 + 40);
      if (v20 != 0) {
        *(_QWORD*)(v20 + 48) = v19;
        *(_QWORD*)(v19 + 56) = *(_QWORD*)(v1 + 40);
      }
      *(_QWORD*)(v1 + 40) = v19;
      *(_QWORD*)(v19 + 24) = "talk::Seq";
      *(_QWORD*)(v19 + 32) = v1;
      *(_DWORD*)(v19 + 140) = game_HashString32();
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 24;
      *(_QWORD*)(v19 + 80) = 1;
      *(_QWORD*)(v19 + 8) = &GameData_216de68;
      *(_QWORD*)(v19 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v19 + 136LL))(v19);
      if ((result & 1) != 0 && (*(_WORD*)(v19 + 136) & 0x100) == 0) {
        *(_WORD*)(v19 + 136) |= 0x100u;
      }
      v21 = *(_BYTE**)(v19 + 32);
      v22 = v21[138];
      if (v22 == 0) {
        result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v21 + 64LL))(
            *(_QWORD*)(v19 + 32));
        v22 = v21[138];
      }
      v21[138] = v22 + 1;
      *(_WORD*)(v19 + 136) |= 2u;
    }
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

__int64 ProcGmapCommandSeq_14b26e0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  int v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v27;
  _BYTE v28[200];

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = (__int64*)*v2++;
      v4 = v5;
      if (*((_DWORD*)v5 + 21) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = nullptr;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = (__int64*)*v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && v4[69] == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *((_DWORD*)v4 + 135);
  v7 = __OFSUB__(v6, 1);
  v8 = (unsigned int)(v6 - 1);
  if (((v8 & 0x80000000) != 0LL) == v7) {
    v9 = v4[3];
    v10 = v4[4] - v9;
    v11 = (__int64*)(v9 + 8LL * (unsigned int)v8);
    if (v8 < v10 >> 3) {
      v4 = v11;
    }
  }
  v12 = *v4;
  v13 = *(_QWORD*)(*v4 + 280);
  if (v13 != 0) {
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)v13 + 280LL))(v13, 0);
    v14 = *(_QWORD*)(v12 + 280);
    if (v14 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
      *(_QWORD*)(v12 + 280) = 0;
    }
  }
  v15 = *(_QWORD*)(GameData_21c96e8 + 8);
  v16 = *(_DWORD*)(v15 + 56);
  v17 = *(__int64**)(v15 + 8);
  v18 = *(__int64**)(v15 + 16);
  if ((v16 & 0x80000000) == 0) {
    while (v17 != v18) {
      v20 = *v17++;
      v19 = v20;
      if (*(_DWORD*)(v20 + 84) == v16) {
        goto LABEL_25;
      }
    }
  LABEL_24:
    v19 = 0;
    goto LABEL_25;
  }
  if (v17 == v18) {
    goto LABEL_24;
  }
  while (1) {
    v19 = *v17;
    if (*(_QWORD*)(*v17 + 96) == 0 && *(_QWORD*)(v19 + 552) == 0) {
      break;
    }
    if (++v17 == v18) {
      goto LABEL_24;
    }
  }
LABEL_25:
  v21 = *(_DWORD*)(v19 + 540);
  v7 = __OFSUB__(v21, 1);
  v22 = (unsigned int)(v21 - 1);
  if (((v22 & 0x80000000) != 0LL) == v7) {
    v23 = *(_QWORD*)(v19 + 24);
    v24 = *(_QWORD*)(v19 + 32) - v23;
    v25 = v23 + 8LL * (unsigned int)v22;
    if (v22 < v24 >> 3) {
      v19 = v25;
    }
  }
  Spot_132ad00(*(_QWORD*)v19, *(_QWORD*)(*GameData_2130e70 + 32));
  snd_Fade_Fade_10c830_alt1(v28, 0.0f);
  snd_play_ff2d0_alt1((void*)(&v27), "SE_EVT_Cultivation_Plant",
                      "SE_EVT_Cultivation_Plant", v28, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade_alt1(v28);
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

__int64 ProcGmapCommandSeq_14b2a00()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  int v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  _BYTE v15[200];

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = (__int64*)*v2++;
      v4 = v5;
      if (*((_DWORD*)v5 + 21) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = nullptr;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = (__int64*)*v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && v4[69] == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *((_DWORD*)v4 + 135);
  v7 = __OFSUB__(v6, 1);
  v8 = (unsigned int)(v6 - 1);
  if (((v8 & 0x80000000) != 0LL) == v7) {
    v9 = v4[3];
    v10 = v4[4] - v9;
    v11 = (__int64*)(v9 + 8LL * (unsigned int)v8);
    if (v8 < v10 >> 3) {
      v4 = v11;
    }
  }
  v12 = *v4;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*v4 + 280) + 24LL))(
          *(_QWORD*)(*v4 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v12 + 280) + 112LL))(
        *(_QWORD*)(v12 + 280));
  }
  (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(v12 + 280) + 160LL))(
      *(_QWORD*)(v12 + 280), *(_QWORD*)(*GameData_2130e70 + 32));
  snd_Fade_Fade_10c830_alt1(v15, 0.0f);
  snd_play_ff2d0_alt1((void*)(&v14), "SE_EVT_Cultivation_Fertilizer",
                      "SE_EVT_Cultivation_Fertilizer", v15, 0, 65537, 0, 0.0f,
                      1.0f);
  return snd_Fade_Destroy_Fade_alt1(v15);
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

__int64 ProcGmapCommandSeq_14b2c40(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  void* v15;
  _QWORD v17[2];

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = (__int64*)*v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = nullptr;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = (__int64*)*v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *((_DWORD*)v6 + 135);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = v6[3];
    v12 = v6[4] - v11;
    v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *v6;
  if (*(_BYTE*)(*v6 + 116) == 1) {
    v15 = &GameData_1aeebf6;
  }
  else {
    v15 = &GameData_1ae356b;
  }
  v17[1] = v15;
  v17[0] = game_HashString(v15);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48), v17, 1);
  }
  return GameRoutine_1537040(a1, v14);
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

__int64 ProcGmapCommandSeq_14b2e40(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = (__int64*)*v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = nullptr;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = (__int64*)*v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v8 = *((_DWORD*)v6 + 135);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = v6[3];
    v12 = v6[4] - v11;
    v13 = (__int64*)(v11 + 8LL * (unsigned int)v10);
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  v14 = *v6;
  if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*v6 + 280) + 24LL))(
          *(_QWORD*)(*v6 + 280)) == 1) {
    (*(void (**)(_QWORD))(**(_QWORD**)(v14 + 280) + 112LL))(
        *(_QWORD*)(v14 + 280));
  }
  v15 = *(_QWORD*)(v14 + 280);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)v15 + 160LL))(v15, 0);
  v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 184LL))(v15);
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 176LL))(v15);
  return GameRoutine_1779bf0(a1, v16, v17);
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

__int64 ProcGmapCommandSeq_14b30c0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  int v6;
  bool v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  _QWORD v15[25];

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    while (v2 != v3) {
      v5 = (__int64*)*v2++;
      v4 = v5;
      if (*((_DWORD*)v5 + 21) == v1) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v4 = nullptr;
    goto LABEL_8;
  }
  if (v2 == v3) {
    goto LABEL_7;
  }
  while (1) {
    v4 = (__int64*)*v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && v4[69] == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_7;
    }
  }
LABEL_8:
  v6 = *((_DWORD*)v4 + 135);
  v7 = __OFSUB__(v6, 1);
  v8 = (unsigned int)(v6 - 1);
  if (((v8 & 0x80000000) != 0LL) == v7) {
    v9 = v4[3];
    v10 = v4[4] - v9;
    v11 = (__int64*)(v9 + 8LL * (unsigned int)v8);
    if (v8 < v10 >> 3) {
      v4 = v11;
    }
  }
  v12 = *v4;
  LegionPool_937620(*(_QWORD*)(GameData_21f4280 + 8), *v4,
                    *(unsigned int*)(*GameData_2130e70 + 40));
  snd_Fade_Fade_10c830_alt1(v15, 0.0f);
  snd_play_ff2d0_alt1((void*)(&v14), "SE_EVT_Legion_Send", "SE_EVT_Legion_Send",
                      v15, 0, 65537, 0, 0.0f, 1.0f);
  snd_Fade_Destroy_Fade_alt1(v15);
  result = Spot_132adf0(v12);
  if (((*(_BYTE*)(v12 + 178) & 4) == 0 || game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) &&
      ((unsigned __int8)Impl_13261c0(v12) == 5 ||
       (unsigned __int8)(result = Impl_13261c0(v12)) == 9)) {
    v15[1] = &GameData_1ae7357;
    result = game_HashString(&GameData_1ae7357);
    v15[0] = result;
    if (game_GameModeData_instance_ != 0) {
      return GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                 v15, 1);
    }
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

__int64 ProcGmapCommandSeq_14b37a0(__int64 result, __int64 a2)
{
  float32x4_t** v2;
  float32x4_t* v3;
  _BYTE* v4;
  __int64 v5;
  int v6;
  __int64** v7;
  __int64** v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  float32x4_t* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  int v19;
  float32x4_t v20;
  float32x4_t v21;
  __int64 v22;
  int8x16_t v23;
  __int128 v24;
  float v25;
  float v26;
  float v27;
  float v28;
  __int128 v29;
  __int64 v30;
  __int64 v31;
  unsigned int v32;

  v2 = *(float32x4_t***)(GameData_21f1620 + 8);
  v3 = v2[2];
  if (v3 == nullptr) {
    return result;
  }
  v4 = (_BYTE*)LANES128(v3[4]).n128_u64[0];
  if (v4 == nullptr || *v4 == 0) {
    return result;
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(_DWORD*)(v5 + 56);
  v7 = *(__int64***)(v5 + 8);
  v8 = *(__int64***)(v5 + 16);
  if (v6 < 0) {
    for (; v7 != v8; ++v7) {
      v9 = *v7;
      if ((*v7)[12] == 0 && v9[69] == 0) {
        goto LABEL_14;
      }
    }
  }
  else if (v7 != v8) {
    while (1) {
      v10 = *v7++;
      v9 = v10;
      if (*((_DWORD*)v10 + 21) == v6) {
        break;
      }
      if (v7 == v8) {
        goto LABEL_10;
      }
    }
  LABEL_14:
    v11 = *v9;
    goto LABEL_15;
  }
LABEL_10:
  v11 = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
LABEL_15:
  v12 = *v2;
  v13 = GameData_212d718;
  v14 = *(_QWORD*)(*GameData_212d718 + 16);
  if (*(_BYTE*)(v14 + 964) != 0) {
    v15 = 696;
  }
  else {
    v15 = 656;
  }
  v16 = (*(float (**)(__int64))(*(_QWORD*)(v14 + v15) + 16LL))(v14 + v15);
  v17 = *(_QWORD*)(*v13 + 16);
  if (*(_BYTE*)(v17 + 964) != 0) {
    v18 = 696;
  }
  else {
    v18 = 656;
  }
  (*(void (**)(__int64))(*(_QWORD*)(v17 + v18) + 16LL))(v17 + v18);
  v20 = *(float32x4_t*)(v11 + 32);
  v21 = vsubq_f32(v12[2], v20);
  v22 = *(_QWORD*)(*v13 + 16);
  *(_DWORD*)(v22 + 848) = LANES128(v20).n128_u32[0];
  v23 = vmulq_f32(v21, v21);
  *(_DWORD*)(v22 + 852) = *(_DWORD*)(v11 + 36);
  v24 = *(_OWORD*)(v22 + 848);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v23, v23, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  v25 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]))))
            .n64_f32[0] /
        0x1.9000000000000p+9f;
  v26 = 1.0f;
  if (v25 <= 1.0f) {
    v26 = v25;
  }
  v27 = (float)(v26 * 0x1.e000000000000p+6f) + 0x1.e000000000000p+5f;
  if (v25 >= 0.0f) {
    v28 = v27;
  }
  else {
    v28 = 0x1.e000000000000p+5f;
  }
  *((_QWORD*)&v24 + 1) = *(unsigned int*)(v11 + 40);
  *(_OWORD*)(v22 + 848) = v24;
  *(_DWORD*)(v22 + 864) = LANES128(v12[2]).n128_u32[0];
  *(_DWORD*)(v22 + 868) = LANES128(v12[2]).n128_u32[1];
  v29 = *(_OWORD*)(v22 + 864);
  DWORD2(v29) = LANES128(v12[2]).n128_u32[2];
  *(float*)(v22 + 880) = v16;
  *(_DWORD*)(v22 + 884) = v19;
  *(float*)(v22 + 956) = v28;
  *(_DWORD*)(v22 + 944) = 0;
  *((_QWORD*)&v29 + 1) = DWORD2(v29);
  *(_OWORD*)(v22 + 864) = v29;
  v30 = **(_QWORD**)(GameData_21f1620 + 8);
  if (v30 != 0) {
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v30 + 32);
  }
  v31 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v31 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v32 = *(_DWORD*)(v31 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v31 + 5856) = v32;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v32 = *(_DWORD*)(v31 + 5856);
  }
  *(_DWORD*)(v31 + 5856) = v32 & 0xFFFDFFFF;
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

__int64 ProcGmapCommandSeq_14b3c00(__int64 result)
{
  __int64 v1;
  _BYTE* v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;

  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21f1620 + 8) + 16LL);
  if (v1 != 0) {
    v2 = *(_BYTE**)(v1 + 64);
    if (v2 != nullptr && *v2 != 0 && *GameData_212d460[0] == 0) {
      v4 = result;
      v5 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v5, v2, 0);
      v6 = *(_QWORD*)(v4 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v5;
        *(_QWORD*)(v5 + 56) = *(_QWORD*)(v4 + 40);
      }
      *(_QWORD*)(v4 + 40) = v5;
      *(_QWORD*)(v5 + 24) = "talk::Seq";
      *(_QWORD*)(v5 + 32) = v4;
      *(_DWORD*)(v5 + 140) = game_HashString32();
      *(_QWORD*)(v5 + 64) = 0;
      *(_QWORD*)(v5 + 72) = 24;
      *(_QWORD*)(v5 + 80) = 1;
      *(_QWORD*)(v5 + 8) = &GameData_216de68;
      *(_QWORD*)(v5 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5);
      if ((result & 1) != 0 && (*(_WORD*)(v5 + 136) & 0x100) == 0) {
        *(_WORD*)(v5 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v5 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        result =
            (*(__int64 (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v5 + 136) |= 2u;
    }
  }
  return result;
}

void ProcGmapCommandSeq_14b3d60()
{

#pragma clang fp contract(off)
  float32x4_t** v0;
  float32x4_t* v1;
  _BYTE* v2;
  float32x4_t* v3;
  __int64 v4;
  int v5;
  float32x4_t*** v6;
  float32x4_t*** v7;
  float32x4_t** v8;
  float32x4_t** v9;
  float32x4_t* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  int v17;
  float32x4_t v18;
  float32x4_t v19;
  __int64 v20;
  int8x16_t v21;
  __int128 v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int128 v27;
  float32x4_t* v28;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v0 = *(float32x4_t***)(GameData_21f1620 + 8);
  v1 = v0[2];
  if (v1 == nullptr) {
    return;
  }
  v2 = (_BYTE*)LANES128(v1[4]).n128_u64[0];
  if (v2 == nullptr || *v2 == 0) {
    return;
  }
  v3 = *v0;
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(float32x4_t****)(v4 + 8);
  v7 = *(float32x4_t****)(v4 + 16);
  if (v5 < 0) {
    for (; v6 != v7; ++v6) {
      v8 = *v6;
      if ((*v6)[12] == nullptr && v8[69] == nullptr) {
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
  v10 = (float32x4_t*)game_gmap_SpotMgr_GetCurrentSpot_alt1(),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
LABEL_15:
  v11 = GameData_212d718;
  v12 = *(_QWORD*)(*GameData_212d718 + 16);
  if (*(_BYTE*)(v12 + 964) != 0) {
    v13 = 696;
  }
  else {
    v13 = 656;
  }
  v14 = (*(float (**)(__int64))(*(_QWORD*)(v12 + v13) + 16LL))(v12 + v13),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v15 = *(_QWORD*)(*v11 + 16);
  if (*(_BYTE*)(v15 + 964) != 0) {
    v16 = 696;
  }
  else {
    v16 = 656;
  }
  (*(void (**)(__int64))(*(_QWORD*)(v15 + v16) + 16LL))(v15 + v16),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v18 = v3[2];
  v19 = vsubq_f32(v10[2], v18);
  v20 = *(_QWORD*)(*v11 + 16);
  *(_DWORD*)(v20 + 848) = LANES128(v18).n128_u32[0];
  v21 = vmulq_f32(v19, v19);
  *(_DWORD*)(v20 + 852) = LANES128(v3[2]).n128_u32[1];
  v22 = *(_OWORD*)(v20 + 848);
  LANES128(v21).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v21, v21, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0])))
          .n64_u64[0];
  v23 = LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v21).n128_u64[0]))))
            .n64_f32[0] /
        0x1.9000000000000p+9f;
  v24 = 0x1.0000000000000p+0f;
  if (v23 <= 0x1.0000000000000p+0f) {
    v24 = v23;
  }
  v25 = (float)(v24 * 0x1.e000000000000p+6f) + 0x1.e000000000000p+5f;
  if (v23 >= 0x0.0p+0f) {
    v26 = v25;
  }
  else {
    v26 = 0x1.e000000000000p+5f;
  }
  *((_QWORD*)&v22 + 1) = LANES128(v3[2]).n128_u32[2];
  *(_OWORD*)(v20 + 848) = v22;
  *(_DWORD*)(v20 + 864) = LANES128(v10[2]).n128_u32[0];
  *(_DWORD*)(v20 + 868) = LANES128(v10[2]).n128_u32[1];
  v27 = *(_OWORD*)(v20 + 864);
  DWORD2(v27) = LANES128(v10[2]).n128_u32[2];
  *(float*)(v20 + 880) = v14;
  *(_DWORD*)(v20 + 884) = v17;
  *(float*)(v20 + 956) = v26;
  *(_DWORD*)(v20 + 944) = 0;
  *((_QWORD*)&v27 + 1) = DWORD2(v27);
  *(_OWORD*)(v20 + 864) = v27;
  v28 = **(float32x4_t***)(GameData_21f1620 + 8);
  if (v28 != nullptr) {
    GameRoutine_1317f10_alt1(*(float32x4_t**)(*GameData_212d708 + 16), v28 + 2),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
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
