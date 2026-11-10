#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_12ddb80(_QWORD, _QWORD);
__int64 GameRoutine_131b660(_QWORD);
__int64 GameRoutine_1328d60(_QWORD);
__int64 GameRoutine_1341d60(_QWORD, _QWORD);
__int64 GameRoutine_1341ed0(void);
__int64 GameRoutine_1349320(_QWORD);
__int64 GameRoutine_134d2e0(_QWORD);
__int64 GameRoutine_14a73e0(__int64);
__int64 GameRoutine_14aaba0(_QWORD, _QWORD);
__int64 GameRoutine_14b4b70(__int64, unsigned int, __int64);
__int64 GameRoutine_14c6620(__int64);
__int64 GameRoutine_14cb390(_QWORD);
__int64 GameRoutine_15255d0(_QWORD);
__int64 GameRoutine_1544c00(_QWORD, _QWORD);
__int64 GameRoutine_1546680(_QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_16477d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1712520(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_175bde0(_QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_17bcf90(_QWORD);
__int64 GameRoutine_70ea50(_QWORD, _QWORD);
__int64 GameRoutine_8224a0(_QWORD);
__int64 GameRoutine_869d10(_QWORD, _QWORD);
__int64 GameRoutine_87f520(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_995200(_QWORD);
__int64 GameRoutine_ae0560(void);
__int64 GameRoutine_ae3e80(_QWORD, _QWORD);
__int64 GameSubquestData_125a1a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GmapSituation_14dc4f0(void);
__int64 LayoutAccessor_1555150(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 ScheduleNatives_869ec0(void);
__int64 ScheduleNatives_86a320(_QWORD, _QWORD);
__int64 SpotMgr_1334560(_QWORD);
__int64 TalkOtherClanMenuItem_14d01c0(_QWORD, _QWORD);
__int64 TelopParts_17cc7d0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TroopMgr_1347760(void);
__int64 TroopMgr_1347860(void);
__int64 TroopMgr_1349f40(_QWORD);
__int64 TroopMgr_13504e0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_OnEndPhase(void);
__int64 game_gmap_TroopMgr_CountPlayerTroop_134e7b0(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a86fa8;
extern _UNKNOWN GameData_1a964b8;
extern _UNKNOWN GameData_1a96743;
extern _UNKNOWN GameData_1ac4744;
extern _UNKNOWN GameData_1ad8027;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_1ae764f;
extern _UNKNOWN GameData_1aeef0e;
extern _UNKNOWN GameData_1af6c5c;
extern __int64 (*GameData_202da48[])();
extern __int64 (*GameData_202dac8[])();
extern __int64 (*GameData_2045b00[])();
extern __int64 (*GameData_2045d00[])();
extern __int64 GameData_212c638;
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_212d740[3];
extern __int64 GameData_212d750;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f1628;
extern __int64 GameData_21f1658;
extern __int64 GameData_21f1668;
extern __int64 GameData_2241720;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212d700[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d728[2];
extern __int64* GameData_2130e60;
extern __int64* GameData_2130e70;
extern int GameData_21caa04;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
void game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma(__int64 a1, __int64 a2,
                                                      __int64 a3);
__int64 ProcGmapPhaseSeq_14c6e70(__int64 result);
__int64 ProcGmapPhaseSeq_14c75b0();
void ProcGmapPhaseSeq_14c7610();
__int64 ProcGmapPhaseSeq_14c7b50(__int64 result);
_QWORD* game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto(_QWORD* result,
                                                           __int64 a2,
                                                           __int64 a3);
__int64 ProcGmapPhaseSeq_14c7e30(__int64 a1);
__int64 ProcGmapPhaseSeq_14c7eb0(__int64 result);
__int64 ProcGmapPhaseSeq_14c8ac0();
__int64 ProcGmapPhaseSeq_14c9220(__int64 a1);
__int64 ProcGmapPhaseSeq_14c92a0(__int64 a1);
__int64 ProcGmapPhaseSeq_14c9540(__int64 a1, __int64 a2);
__int64 ProcGmapPhaseSeq_14c9620(__int64 a1, __int64 a2);
__int64 ProcGmapPhaseSeq_14c9820(__int64 result);
__int64 ProcGmapPhaseSeq_14c9e20();
__int64 ProcGmapPhaseSeq_14c9fa0();
__int64 ProcGmapPhaseSeq_14ca030(__int64 a1);
__int64 ProcGmapPhaseSeq_14ca100(__int64 a1);
__int64 ProcGmapPhaseSeq_14ca340(__int64 result);
void ProcGmapPhaseSeq_14ca830();
__int64 ProcGmapPhaseSeq_14cabc0();
__int64 ProcGmapPhaseSeq_14cad00(__int64 result);
__int64 ProcGmapPhaseSeq_14caee0(__int64 result);
__int64 ProcGmapPhaseSeq_14cb0d0(__int64 a1);
__int64 ProcGmapPhaseSeq_14cb560(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                                 _QWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9);
__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure_Invoke(__int64 a1);
__int64
game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure0_Invoke(__int64 a1);
__int64
game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure1_Invoke(__int64 a1);
__int64 game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto_closure_Invoke(
    __int64 result, __int64* a2);
bool ProcGmapPhaseSeq_14cbf30();
__int64 game_gmap_ProcGmapPhaseSeq_FreeCursorTick_closure_Invoke(__int64 result,
                                                                 __int64 a2);
__int64 game_gmap_ProcGmapPhaseSeq_EndOtherPhase_closure_Invoke(__int64 a1,
                                                                __int64* a2);
__int64 Impl_13261c0(_QWORD);
__int64 Spot_132b100(_QWORD, _QWORD);
extern __int64 GameData_22416b0;
__int64
game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma_closure_Invoke(__int64 result,
                                                                _QWORD* a2);

void game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma(__int64 a1, __int64 a2,
                                                      __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  char v12;
  char v13;
  __int64 v14;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return;
  }
  v3 = v10;
  v13 = 0;
  v12 = 0;
  v10[0] = GameData_2045b00;
  v10[1] = &v13;
  v11 = v10;
  v10[2] = &v12;
  v4 = *(_QWORD*)(GameData_21c9700 + 8);
  v5 = *(__int64**)(v4 + 48);
  v6 = *(__int64**)(v4 + 56);
  if (v5 == v6) {
    goto LABEL_15;
  }
  do {
    v7 = *v5;
    v8 = *(_QWORD*)(*v5 + 280);
    if (v8 != 0 &&
        ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8) != 1 ||
         ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 280) + 112LL))(
              *(_QWORD*)(v7 + 280)) &
          1) == 0) &&
        *(_QWORD*)(v7 + 280) != 0) {
      v14 = v7;
      if (v11 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v14);
    }
    ++v5;
  } while (v5 != v6);
  v3 = v11;
  if (v11 == v10) {
  LABEL_15:
    v9 = 32;
  }
  else {
    if (v11 == nullptr) {
      goto LABEL_17;
    }
    v9 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v3 + v9))(v3, a2, a3);
LABEL_17:
  if (v12 == 1 && GameData_2241720 != 0) {
    TelopParts_17cc7d0(GameData_2241720,
                       "MID_Sys_InfoTelop_Cancel_MaterialCommand", 0, 0, 0, 0);
  }
  if (v13 == 1 && GameData_2241720 != 0) {
    TelopParts_17cc7d0(GameData_2241720,
                       "MID_Sys_InfoTelop_Cancel_LegionDispatch", 0, 0, 0, 0);
  }
}

__int64 ProcGmapPhaseSeq_14c6e70(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 (**v18)();
  void* v19;
  __int64 (***v20)();

  v1 = GameData_2130e70;
  v2 = game_GameModeData_instance_;
  v3 = *GameData_2130e70;
  if (game_GameModeData_instance_ == 0) {
    if (*(_BYTE*)(*GameData_2130e70 + 53) == 0 && *(_DWORD*)(v3 + 44) == 0) {
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 129LL) = 0;
      goto LABEL_20;
    }
  LABEL_27:
    *(_DWORD*)(result + 152) = 1;
    *(_BYTE*)(v3 + 54) = 1;
    return result;
  }
  if (*(unsigned __int8*)(*GameData_2130e70 + 53) !=
          *(unsigned __int8*)(game_GameModeData_instance_ + 15) ||
      *(_DWORD*)(v3 + 44) != *(_DWORD*)(game_GameModeData_instance_ + 64)) {
    goto LABEL_27;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 129LL) = 0;
    goto LABEL_15;
  }
  v4 = *(unsigned __int8*)(v3 + 56);
  v5 = result;
  v19 = &GameData_1adfa87;
  v6 = game_HashString(&GameData_1adfa87);
  v7 = game_GameModeData_instance_;
  v18 = (__int64 (**)())v6;
  if (game_GameModeData_instance_ != 0) {
    v8 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v18);
    v7 = v8 != 0 && *(_DWORD*)(v8 + 32) != 0;
  }
  result = v5;
  if (v4 != v7) {
    v3 = *v1;
    goto LABEL_27;
  }
  v2 = game_GameModeData_instance_;
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 129LL) = 0;
  if (v2 == 0) {
  LABEL_20:
    v9 = result;
    if ((*(_BYTE*)(*v1 + 54) & 1) == 0) {
      goto LABEL_25;
    }
    goto LABEL_21;
  }
LABEL_15:
  v9 = result;
  if (*(_DWORD*)(v2 + 60) == 1) {
    if (*(_BYTE*)(*v1 + 54) != 0) {
      v18 = GameData_202dac8;
      v20 = &v18;
      v10 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0(&v18);
      if (v20 == &v18) {
        v11 = 4;
      }
      else {
        if (v20 == nullptr) {
          goto LABEL_38;
        }
        v11 = 5;
      }
      (*v20)[v11]();
    LABEL_38:
      if (v10 <= 0) {
        v14 = 8;
      }
      else {
        v14 = 2;
      }
      goto LABEL_47;
    }
    goto LABEL_25;
  }
  if (*(_BYTE*)(*v1 + 54) == 0) {
  LABEL_25:
    v14 = 15;
    goto LABEL_47;
  }
LABEL_21:
  v18 = GameData_202dac8;
  v20 = &v18;
  v12 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0(&v18);
  if (v20 == &v18) {
    v13 = 4;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_31;
    }
    v13 = 5;
  }
  (*v20)[v13]();
LABEL_31:
  if (v12 <= 0) {
    v18 = GameData_202da48;
    v20 = &v18;
    v15 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0(&v18);
    if (v20 == &v18) {
      v16 = 4;
    }
    else {
      if (v20 == nullptr) {
        goto LABEL_43;
      }
      v16 = 5;
    }
    (*v20)[v16]();
  LABEL_43:
    v14 = 2;
    if (v15 >= 1) {
      if ((GmapSituation_14dc4f0() & 1) != 0) {
        v14 = 2;
      }
      else {
        v14 = 8;
      }
    }
    goto LABEL_47;
  }
  v14 = 2;
LABEL_47:
  v19 = &GameData_1a86fa8;
  v18 = (__int64 (**)())game_HashString(&GameData_1a86fa8);
  if (game_GameModeData_instance_ != 0) {
    v17 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v18);
    if (v17 != 0 && *(_DWORD*)(v17 + 32) != 0) {
      v19 = &GameData_1a86fa8;
      v18 = (__int64 (**)())game_HashString(&GameData_1a86fa8);
      game_VariableManager_SetFlag(&v18, 0);
    }
  }
  if (v14 != 8 || ((result = GameRoutine_14cb390(v9)) & 1) == 0) {
    result = game_HashString(&GameData_1ad8027);
    *(_DWORD*)(v9 + 152) = v14;
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c75b0()
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

void ProcGmapPhaseSeq_14c7610()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64* v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  void* v11;

  if (game_gmap_GmapClock_instance_ == 0) {
    v0 = game_GameModeData_instance_;
  LABEL_9:
    if (v0 == 0) {
      return;
    }
  LABEL_10:
    if (*(_DWORD*)(v0 + 60) != 3) {
      return;
    }
    v3 = GameData_2130e70;
    v11 = &GameData_1adfa87;
    v4 = *(unsigned __int8*)(*GameData_2130e70 + 56);
    v10 = game_HashString(&GameData_1adfa87);
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
      if (v6 == 0) {
        if (v4 == 0) {
          return;
        }
        goto LABEL_15;
      }
      v5 = *(_DWORD*)(v6 + 32) != 0;
    }
    if (v4 == v5) {
      return;
    }
  LABEL_15:
    v11 = &GameData_1adfa87;
    v7 = game_HashString(&GameData_1adfa87);
    v8 = game_GameModeData_instance_;
    v10 = v7;
    if (game_GameModeData_instance_ != 0) {
      v9 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
      v8 = v9 != 0 && *(_DWORD*)(v9 + 32) != 0;
    }
    *(_BYTE*)(*v3 + 56) = v8;
    return;
  }
  v0 = game_GameModeData_instance_;
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
      0) {
    goto LABEL_9;
  }
  v1 = *GameData_2130e70;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    if (*(unsigned __int8*)(*GameData_2130e70 + 53) != v2 ||
        *(_DWORD*)(v1 + 44) != *(_DWORD*)(game_GameModeData_instance_ + 64)) {
      *(_BYTE*)(v1 + 53) = v2;
      *(_DWORD*)(v1 + 44) = *(_DWORD*)(v0 + 64);
      if (*(_DWORD*)(v0 + 60) == 3) {
        *(_BYTE*)(v1 + 55) = 1;
      }
    }
    goto LABEL_10;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 53) != 0 || *(_DWORD*)(v1 + 44) != 0) {
    *(_BYTE*)(v1 + 53) = 0;
    *(_DWORD*)(v1 + 44) = 0;
  }
}

__int64 ProcGmapPhaseSeq_14c7b50(__int64 result)
{
  __int64 v1;
  _BYTE* v2;
  unsigned __int8 v3;
  __int16 v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;
  char v10;

  v1 = result;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    v4 = 8;
    goto LABEL_18;
  }
  GameRoutine_887920(&v10, &GameData_1aeef0e);
  result = GameRoutine_162aea0(v1, &v10);
  if (result == 0) {
    if (game_gmap_GmapClock_instance_ == 0 ||
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
            0 ||
        (GameRoutine_887920(&v10, &GameData_1af6c5c),
         (result = GameRoutine_162aea0(v1, &v10)) == 0)) {
      v2 = *(_BYTE**)(v1 + 16);
      if (v2 != nullptr) {
        v3 = *v2 - 9;
        if (v3 <= 7u && ((0xE7u >> v3) & 1) != 0) {
          v4 = 128;
        LABEL_18:
          *(_WORD*)(v1 + 136) |= v4;
        }
      }
    }
  }
  return result;
}

_QWORD* game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto(_QWORD* result,
                                                           __int64 a2,
                                                           __int64 a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  __int64 v14;
  unsigned __int8* v15;
  unsigned int v16;
  int v17;
  _QWORD v19[4];
  _QWORD* v20;
  char v21;
  __int64 v22;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v3 = result;
    v21 = 0;
    v19[0] = GameData_2045d00;
    v19[1] = result;
    result = v19;
    v19[2] = &v21;
    v20 = v19;
    v4 = *(_QWORD*)(GameData_21c9700 + 8);
    v5 = *(__int64**)(v4 + 48);
    v6 = *(__int64**)(v4 + 56);
    if (v5 == v6) {
      goto LABEL_22;
    }
    do {
      v7 = *v5;
      v8 = *(_QWORD*)(*v5 + 280);
      if (v8 != 0 &&
          ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8) != 1 ||
           ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v7 + 280) + 112LL))(
                *(_QWORD*)(v7 + 280)) &
            1) == 0) &&
          *(_QWORD*)(v7 + 280) != 0) {
        v22 = v7;
        if (v20 == nullptr) {
          GameRoutine_60a310(0);
        }
        (*(void (**)(_QWORD*, __int64*))(*v20 + 48LL))(v20, &v22);
      }
      ++v5;
    } while (v5 != v6);
    result = v20;
    if (v20 == v19) {
    LABEL_22:
      v14 = 32;
    }
    else {
      if (v20 == nullptr) {
        goto LABEL_24;
      }
      v14 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
        *result + v14))(result, a2, a3);
  LABEL_24:
    if ((v21 & 1) == 0) {
      v15 = (unsigned __int8*)v3[2];
      if (v15 != nullptr) {
        v16 = *v15;
        v11 = v16 > 0x10;
        v17 = (1 << v16) & 0x1CE00;
        if (!v11 && v17 != 0) {
          *((_WORD*)v3 + 68) |= 0x80u;
        }
      }
      *((_WORD*)v3 + 68) |= 8u;
    }
    return result;
  }
  v9 = (unsigned __int8*)result[2];
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *((_WORD*)result + 68) |= 0x80u;
    }
  }
  *((_WORD*)result + 68) |= 8u;
  return result;
}

__int64 ProcGmapPhaseSeq_14c7e30(__int64 a1)
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

__int64 ProcGmapPhaseSeq_14c7eb0(__int64 result)
{
  if (*(_BYTE*)(result + 213) == 1) {
    return GameRoutine_12ddb80(*(_QWORD*)GameData_212c6c0[0], result);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c8ac0()
{
  __int64 v0;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21f1668 + 8);
  result = game_gameui_Footer_instance_;
  if (game_gameui_Footer_instance_ != 0) {
    result = LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  *(_DWORD*)(v0 + 5856) &= ~0x20000u;
  return result;
}

__int64 ProcGmapPhaseSeq_14c9220(__int64 a1)
{
  __int64 v2;

  *(_DWORD*)(a1 + 208) = 0;
  v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 1);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v2 + 5856) |= 0x10000u;
  return GameRoutine_131b660(a1);
}

__int64 ProcGmapPhaseSeq_14c92a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* i;
  __int64 v22;
  int v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212d700[0] + 8) + 8LL) + 8LL);
  (*(void (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
  v3 = GameData_212d750;
  result = GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  v5 = *(_QWORD*)v3;
  if (*(_BYTE*)(*(_QWORD*)v3 + 312LL) != 0) {
    *(_BYTE*)(v5 + 312) = 0;
    v6 = *(_QWORD*)(GameData_21f1628 + 16);
    v7 = *(_DWORD*)(v6 + 920) - 1;
    *(_DWORD*)(v6 + 920) = v7;
    if (v7 == 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)(v6 + 912) + 8LL))(v6 + 912);
      v5 = *(_QWORD*)v3;
    }
  }
  *(_BYTE*)(*GameData_2130e70 + 59) = 1;
  if (*(_DWORD*)(v5 + 152) != 0) {
    result = GameRoutine_14c6620(a1);
    v8 = *(_QWORD*)(GameData_21c96e8 + 8);
    v9 = *(_DWORD*)(v8 + 56);
    v10 = *(__int64**)(v8 + 8);
    v11 = *(__int64**)(v8 + 16);
    if (v9 < 0) {
      if (v10 != v11) {
        v16 = v10;
        do {
          v13 = *v16;
          if (*(_QWORD*)(*v16 + 96) == 0 && *(_QWORD*)(v13 + 552) == 0) {
            goto LABEL_22;
          }
          ++v16;
        } while (v16 != v11);
      }
    }
    else if (v10 != v11) {
      v12 = v10;
      do {
        v14 = *v12++;
        v13 = v14;
        if (*(_DWORD*)(v14 + 84) == v9) {
          goto LABEL_22;
        }
      } while (v12 != v11);
    }
    v13 = 0;
  LABEL_22:
    if ((*(_QWORD*)(v13 + 96) | *(_QWORD*)(v13 + 552)) != 0 ||
        game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        (*(_DWORD*)(v13 + 84) & 0x80000000) == 0) {
      if (v9 < 0) {
        for (i = v10 + 1;; ++i) {
          v17 = *(i - 1);
          if (*(_QWORD*)(v17 + 96) == 0 && *(_QWORD*)(v17 + 552) == 0) {
            break;
          }
        }
      }
      else {
        v19 = *v10;
        v18 = v10 + 1;
        v17 = v19;
        if (*(_DWORD*)(v19 + 84) != v9) {
          do {
            v20 = *v18++;
            v17 = v20;
          } while (*(_DWORD*)(v20 + 84) != v9);
        }
      }
      GameRoutine_1341d60(v17, 1);
      v22 = *(_QWORD*)(GameData_21c96e8 + 8);
      v23 = *(_DWORD*)(v22 + 56);
      v24 = *(__int64**)(v22 + 8);
      if (v23 < 0) {
        while (*(_QWORD*)(*v24 + 96) != 0 || *(_QWORD*)(*v24 + 552) != 0) {
          ++v24;
        }
      }
      else {
        v26 = *v24;
        v25 = v24 + 1;
        if (*(_DWORD*)(v26 + 84) != v23) {
          do {
            v27 = *v25++;
          } while (*(_DWORD*)(v27 + 84) != v23);
        }
      }
      result = GameRoutine_1341ed0();
    }
    v28 = 16;
    goto LABEL_43;
  }
  v15 = *(_DWORD*)(a1 + 152);
  if (v15 == 6) {
    return result;
  }
  if ((*(_BYTE*)(a1 + 240) & 1) != 0) {
    **(_BYTE**)(a1 + 256) = 0;
    *(_QWORD*)(a1 + 248) = 0;
    v15 = *(_DWORD*)(a1 + 152);
    if (v15 == 3) {
      return result;
    }
  }
  else {
    *(_WORD*)(a1 + 240) = 0;
    if (v15 == 3) {
      return result;
    }
  }
  v29 = *(_DWORD*)(a1 + 208);
  switch (v29) {
  case 9:
    if (v15 == 0) {
    LABEL_51:
      v28 = 2;
    LABEL_43:
      *(_DWORD*)(a1 + 152) = v28;
    }
    break;
  case 1:
    break;
  case 0:
    goto LABEL_51;
  default:
    return GameRoutine_14c6620(a1);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9540(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned int v12;
  bool v13;
  int v14;
  _QWORD v16[2];

  result = GameRoutine_ae3e80(a1, a2);
  if (result != 0) {
    v4 = result;
    GameRoutine_1544c00(*(_QWORD*)(*(_QWORD*)GameData_212d740[0] + 8LL),
                        result);
    v5 = *(_QWORD*)(v4 + 24);
    v6 = *(unsigned __int8*)(v5 + 96);
    v7 = *(_QWORD*)(v5 + 104);
    if ((v6 & 1) == 0) {
      v7 = v6 >> 1;
    }
    if (v7 != 0) {
      v8 = *(_QWORD*)(v5 + 112);
      v9 = v5 + 97;
      if ((v6 & 1) != 0) {
        v10 = v8;
      }
      else {
        v10 = v9;
      }
      v16[1] = v10;
      v16[0] = game_HashString(v10);
      game_VariableManager_SetFlag(v16, 1);
    }
    return GameRoutine_15255d0(a1);
  }
  else {
    v11 = *(unsigned __int8**)(a1 + 16);
    if (v11 != nullptr) {
      v12 = *v11;
      v13 = v12 > 0x10;
      v14 = (1 << v12) & 0x1CE00;
      if (!v13 && v14 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9620(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  int v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 result;
  __int64 v12;
  __int64 v13;
  int v14;
  _BOOL4 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v3 = GameData_212c790;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64***)(v4 + 8);
  v7 = *(__int64***)(v4 + 16);
  if (v5 < 0) {
    for (; v6 != v7; ++v6) {
      v8 = *v6;
      if ((*v6)[12] == 0 && v8[69] == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v10 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
    goto LABEL_12;
  }
  if (v6 == v7) {
    goto LABEL_7;
  }
  while (1) {
    v9 = *v6++;
    v8 = v9;
    if (*((_DWORD*)v9 + 21) == v5) {
      break;
    }
    if (v6 == v7) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v10 = *v8;
LABEL_12:
  v26 = 0;
  v27 = 0;
  v25 = 0;
  result =
      GameSubquestData_125a1a0(*(_QWORD*)GameData_212c7b0[0], &v25, v10, 0);
  v12 = v25;
  if (v25 == v26) {
    v15 = false;
    if (v25 == 0) {
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  v13 = v25 + 8;
  do {
    v14 = *(unsigned __int8*)(**(_QWORD**)(v13 - 8) + 112LL);
    v15 = v14 == 4;
    v16 = v14 == 4 || v13 == v26;
    v13 += 8;
  } while (!v16);
  if (v25 != 0) {
  LABEL_20:
    v26 = v25;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v25);
  }
LABEL_23:
  if (v15) {
    v18 = *(_QWORD*)(*v3 + 8);
    v19 = *(_DWORD*)(v18 + 56);
    v20 = *(__int64***)(v18 + 8);
    v21 = *(__int64***)(v18 + 16);
    if (v19 < 0) {
      for (; v20 != v21; ++v20) {
        v22 = *v20;
        if ((*v20)[12] == 0 && v22[69] == 0) {
          goto LABEL_37;
        }
      }
    }
    else if (v20 != v21) {
      while (1) {
        v23 = *v20++;
        v22 = v23;
        if (*((_DWORD*)v23 + 21) == v19) {
          break;
        }
        if (v20 == v21) {
          goto LABEL_33;
        }
      }
    LABEL_37:
      v24 = *v22;
      goto LABEL_38;
    }
  LABEL_33:
    v24 = game_gmap_SpotMgr_GetCurrentSpot(result, v12);
  LABEL_38:
    TalkOtherClanMenuItem_14d01c0(a1, v24);
    return GameRoutine_175b880(*(_QWORD*)(*GameData_212d728[0] + 8) + 5800LL);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9820(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64 v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64* j;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  _QWORD v25[4];
  _QWORD* v26;

  v1 = result;
  v2 = GameData_212d728[0];
  v3 = GameData_212c790;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    v4 = *(_QWORD*)(*GameData_212c790 + 8);
    v5 = *(_DWORD*)(v4 + 56);
    v6 = *(__int64**)(v4 + 8);
  }
  else {
    v7 = *(_QWORD*)(*GameData_212c790 + 8);
    v5 = *(_DWORD*)(v7 + 56);
    v6 = *(__int64**)(v7 + 8);
    if ((v5 & 0x80000000) == 0) {
      goto LABEL_11;
    }
    for (i = *(__int64**)(v7 + 8);; ++i) {
      v9 = *i;
      if (*(_QWORD*)(*i + 96) == 0 && *(_QWORD*)(v9 + 552) == 0) {
        break;
      }
    }
    if ((*(_DWORD*)(v9 + 84) & 0x80000000) != 0) {
      goto LABEL_18;
    }
  }
  if ((v5 & 0x80000000) == 0) {
  LABEL_11:
    v12 = *v6;
    v11 = v6 + 1;
    v10 = v12;
    if (*(_DWORD*)(v12 + 84) != v5) {
      do {
        v13 = *v11++;
        v10 = v13;
      } while (*(_DWORD*)(v13 + 84) != v5);
    }
    goto LABEL_17;
  }
  while (1) {
    v10 = *v6;
    if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0) {
      break;
    }
    ++v6;
  }
LABEL_17:
  GameRoutine_1341d60(v10, 1);
  GameRoutine_14c6620(v1);
  result = GameRoutine_175bde0(*(_QWORD*)(*v2 + 8) + 5800LL);
  v7 = *(_QWORD*)(*v3 + 8);
LABEL_18:
  *(_DWORD*)(v7 + 56) = -1;
  *(_BYTE*)(*(_QWORD*)(*v2 + 8) + 5844LL) = 0;
  *(_BYTE*)(*(_QWORD*)(*GameData_212d708 + 16) + 170LL) = 0;
  v14 = GameData_212c780;
  v15 = *(_QWORD*)(*GameData_212c780 + 8);
  v16 = *(__int64**)(v15 + 48);
  for (j = *(__int64**)(v15 + 56); v16 != j;
       result = GameRoutine_1328d60(v18)) {
    v18 = *v16++;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) != 0) {
    v19 = 16;
  LABEL_22:
    *(_DWORD*)(v1 + 152) = v19;
    return result;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
    result = game_HashString(&GameData_1ad8027);
    v19 = 8;
    goto LABEL_22;
  }
  v25[0] = GameData_202dac8;
  v26 = v25;
  v20 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0(v25);
  if (v26 == v25) {
    v21 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_31;
    }
    v21 = 40;
  }
  (*(void (**)(void))(*v26 + v21))();
LABEL_31:
  if (v20 > 0) {
  LABEL_32:
    game_HashString(&GameData_1ad8027);
    v22 = 2;
    goto LABEL_33;
  }
  v25[0] = GameData_202da48;
  v26 = v25;
  v23 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0(v25);
  if (v26 == v25) {
    v24 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_40;
    }
    v24 = 40;
  }
  (*(void (**)(void))(*v26 + v24))();
LABEL_40:
  if (v23 <= 0) {
    goto LABEL_32;
  }
  if ((GameRoutine_14cb390(v1) & 1) != 0) {
    return SpotMgr_1334560(*(_QWORD*)(*v14 + 8));
  }
  v22 = 8;
LABEL_33:
  *(_DWORD*)(v1 + 152) = v22;
  return SpotMgr_1334560(*(_QWORD*)(*v14 + 8));
}

__int64 ProcGmapPhaseSeq_14c9e20()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v0 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  v1 = game_gameui_Footer_instance_;
  v2 = *(_DWORD*)(v0 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v0 + 5856) = v2;
  if (v1 != 0) {
    LayoutAccessor_1567000(v1, 0);
    v2 = *(_DWORD*)(v0 + 5856);
  }
  result = game_hub_ProgressEventView_instance_;
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
  if (result != 0) {
    return GameRoutine_17b8e80(result, 1);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14c9fa0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 result;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_QWORD*)(v0 + 8);
  v2 = *(_QWORD*)(v0 + 16);
  if (v1 != v2) {
    v3 = GameData_21f1618;
    do {
      if (*(_QWORD*)(*(_QWORD*)v1 + 96LL) == 0 &&
          *(_QWORD*)(*(_QWORD*)v1 + 552LL) == 0 && v3 != 0) {
        result = GameRoutine_995200(*(_QWORD*)v1 + 112LL);
        v3 = GameData_21f1618;
      }
      v1 += 8;
    } while (v1 != v2);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14ca030(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  int v6;

  if (*(_DWORD*)(a1 + 152) == 0) {
    v2 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v2 + 16), 1);
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
    }
    *(_DWORD*)(v2 + 5856) |= 0x10000u;
    *(_DWORD*)(a1 + 152) = 2;
  }
  v3 = GameData_212d750;
  result = GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  if (*(_BYTE*)(*(_QWORD*)v3 + 312LL) != 0) {
    *(_BYTE*)(*(_QWORD*)v3 + 312LL) = 0;
    v5 = *(_QWORD*)(GameData_21f1628 + 16);
    v6 = *(_DWORD*)(v5 + 920) - 1;
    *(_DWORD*)(v5 + 920) = v6;
    if (v6 == 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)(v5 + 912) + 8LL))(v5 + 912);
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14ca100(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;

  v1 = *(_QWORD*)(GameData_21f1658 + 16);
  if (*(_BYTE*)(v1 + 169) == 1) {
    v2 = a1;
    v3 = **(_QWORD***)(*(_QWORD*)(*GameData_212d700[0] + 8) + 8LL);
    (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v3 + 48LL))(v3, v3);
    a1 = v2;
  }
  *(_BYTE*)(v1 + 169) = 0;
  return GameRoutine_1712520(a1, 5, 0);
}

__int64 ProcGmapPhaseSeq_14ca340(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int16 v10;
  __int64 v11;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = 0;
    do {
      v6 = *v2;
      v7 = *(_QWORD*)(*v2 + 96);
      v8 = *(_QWORD*)(*v2 + 552);
      if ((v7 | v8) != 0) {
        if (*(_QWORD*)(v6 + 32) == *(_QWORD*)(v6 + 24)) {
          v5 = 0;
        }
        else {
          v5 = v7 == 0 &&
                   (v8 != 0 ? (v9 = *(_QWORD*)(v6 + 104) == 0) : (v9 = false),
                    v9 &&
                        *(__int16*)(v6 + 642) * *(__int16*)(v6 + 640) *
                                *(__int16*)(v6 + 644) ==
                            0 &&
                        *(_QWORD*)(v8 + 352) == 0) ||
               ((v10 = *(_WORD*)(v6 + 544)) & 1) != 0 || (v10 & 2) == 0;
        }
        v4 += v5;
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != 0) {
      v11 = result;
      if ((TroopMgr_1347760() & 1) != 0 || TroopMgr_1347860() == 0) {
        return GameRoutine_1546680(v11);
      }
      else {
        return LayoutAccessor_1555150(v11, 0);
      }
    }
  }
  return result;
}

void ProcGmapPhaseSeq_14ca830()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  void* v9;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0 &&
      ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 10) << 24) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 8) << 32) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 12) << 18) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 14) << 12) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 16) << 6) +
              *(__int16*)(game_gmap_GmapClock_instance_ + 18) <
          (unsigned __int64)(((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 22)
                              << 24) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 20)
                              << 32) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 24)
                              << 18) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 26)
                              << 12) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 28)
                              << 6) +
                             *(__int16*)(game_gmap_GmapClock_instance_ + 30))) {
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
        *(_DWORD*)(game_GameModeData_instance_ + 64) == 6 &&
        (v9 = &GameData_1ac4744, v8 = game_HashString(&GameData_1ac4744),
         game_GameModeData_instance_ != 0) &&
        (v0 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v8)) != 0 &&
        *(_DWORD*)(v0 + 32) != 0 &&
        (unsigned int)GameRoutine_869d10(v0, v1) == 1) {
      *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 15;
      *(_BYTE*)(*GameData_2130e70 + 54) = 1;
    }
    else {
      v9 = &GameData_1ae764f;
      v8 = game_HashString(&GameData_1ae764f);
      if (game_GameModeData_instance_ != 0 &&
          (v2 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v8)) != 0 &&
          *(_DWORD*)(v2 + 32) != 0) {
        v3 = ScheduleNatives_869ec0();
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                   32LL) -
                                        8LL) +
                             40LL) +
                  225LL) = 1;
        v4 = TroopMgr_13504e0(v3);
        TroopMgr_1349f40(v4);
        GameRoutine_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
      }
      else {
        v5 = GameData_21f1618;
        if (game_gmap_GmapClock_instance_ != 0) {
          GameRoutine_70ea50(game_gmap_GmapClock_instance_ + 8,
                             game_gmap_GmapClock_instance_ + 20);
        }
        else {
          v8 = game_gmap_GmapClock_kDefaultTime;
          LODWORD(v9) = GameData_21caa04;
        }
        *(_QWORD*)(v5 + 264) = v8;
        *(_DWORD*)(v5 + 272) = (_DWORD)v9;
        v6 = ScheduleNatives_86a320(v5, v5 + 264);
        if (v6 != 0) {
          v7 = *(_DWORD*)(v6 + 148);
        }
        else {
          v7 = 0;
        }
        *(_DWORD*)(v5 + 288) = v7;
        ((void (*)(void))TroopMgr_13504e0)();
      }
    }
  }
}

__int64 ProcGmapPhaseSeq_14cabc0()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int16* v6;
  __int64 result;

  v0 = *(_QWORD*)(*GameData_212c790 + 8);
  v1 = *(__int64**)(v0 + 8);
  v2 = *(__int64**)(v0 + 16);
  if (v1 != v2) {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
    v4 = GameData_212d728[0];
    do {
      v5 = *v1;
      if ((*(_WORD*)(*v1 + 544) & 0x40) != 0 && *(_QWORD*)(v5 + 552) != 0 &&
          *(__int16*)(v5 + 642) * *(__int16*)(v5 + 640) *
                  *(__int16*)(v5 + 644) !=
              0) {
        if (game_gmap_GmapClock_instance_ != 0) {
          v6 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
        }
        else {
          v6 = (__int16*)v3;
        }
        if (((__int64)*(__int16*)(v5 + 642) << 24) +
                ((__int64)*(__int16*)(v5 + 640) << 32) +
                ((__int64)*(__int16*)(v5 + 644) << 18) +
                ((__int64)*(__int16*)(v5 + 646) << 12) +
                ((__int64)*(__int16*)(v5 + 648) << 6) + *(__int16*)(v5 + 650) <
            (unsigned __int64)(((__int64)v6[1] << 24) + ((__int64)*v6 << 32) +
                               ((__int64)v6[2] << 18) + ((__int64)v6[3] << 12) +
                               ((__int64)v6[4] << 6) + v6[5])) {
          result = GameRoutine_175b880(*(_QWORD*)(*v4 + 8) + 5800LL);
        }
      }
      ++v1;
    } while (v1 != v2);
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14cad00(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  _QWORD* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  unsigned __int64 v23;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v22 = nullptr;
    v23 = 0;
    v21 = nullptr;
    v1 = *(_QWORD*)(GameData_21c96e8 + 8);
    v2 = *(__int64**)(v1 + 8);
    v3 = *(__int64**)(v1 + 16);
    if (v2 != v3) {
      v20 = result;
      v4 = nullptr;
      v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      do {
        v6 = *v2;
        if ((*(_WORD*)(*v2 + 544) & 0x40) != 0) {
          if ((unsigned __int64)v4 < v23) {
            *(_QWORD*)v4 = v6;
            v4 += 8;
          }
          else {
            v7 = v21;
            v8 = (char*)(v4 - v21);
            v9 = (v4 - v21) >> 3;
            v10 = v9 + 1;
            if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
              GameRoutine_888610(result);
            }
            v11 = v23 - (_QWORD)v21;
            if ((__int64)(v23 - (_QWORD)v21) >> 2 > v10) {
              v10 = v11 >> 2;
            }
            if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
              v12 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v12 = v10;
            }
            if (v12 != 0) {
              if (v12 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v13 = fw_memory_HeapManager_Allocate(*v5, 8 * v12, 16, 0);
            }
            else {
              v13 = 0;
            }
            v14 = v13 + 8 * v12;
            v15 = (__int64)&v8[v13 + -8 * v9];
            *(_QWORD*)&v8[v13] = v6;
            v4 = &v8[v13 + 8];
            result = memcpy(v15, v7, v8);
            v21 = (char*)v15;
            v23 = v14;
            if (v7 != nullptr) {
              v16 = 128;
              if (*(_QWORD*)(*v5 + 200LL) == 0) {
                v16 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v5 + v16, v7);
            }
          }
          v22 = v4;
        }
        ++v2;
      } while (v2 != v3);
      v17 = v21;
      if (v4 != v21) {
        result = GameRoutine_14b4b70(v20, 2u, (__int64)&v21);
        v17 = v21;
        *(_QWORD*)(v20 + 232) = result;
      }
      if (v17 != nullptr) {
        v18 = *v5;
        v22 = v17;
        v19 = 128;
        if (*(_QWORD*)(v18 + 200) == 0) {
          v19 = 56;
        }
        return nn_mem_StandardAllocator_Free(v18 + v19, v17);
      }
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14caee0(__int64 result)
{
  __int64 v1;
  __int16* v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64* i;
  __int64* v7;
  signed __int64 v8;
  _QWORD v9[2];

  v1 = result;
  v2 = (__int16*)game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
        0) {
      v3 = *(_QWORD*)GameData_212d750;
      if (((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 10) << 24) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 8) << 32) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 12) << 18) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 14) << 12) +
              ((__int64)*(__int16*)(game_gmap_GmapClock_instance_ + 16) << 6) +
              *(__int16*)(game_gmap_GmapClock_instance_ + 18) >=
          (unsigned __int64)(((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 22)
                              << 24) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 20)
                              << 32) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 24)
                              << 18) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 26)
                              << 12) +
                             ((__int64)*(
                                  __int16*)(game_gmap_GmapClock_instance_ + 28)
                              << 6) +
                             *(__int16*)(game_gmap_GmapClock_instance_ + 30))) {
        *(_DWORD*)(v3 + 152) = 15;
      }
      if (*(_DWORD*)(v3 + 152) == 0) {
        goto LABEL_11;
      }
    }
    else if (*(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) == 0) {
    LABEL_11:
      if (v2[11] * v2[10] * v2[12] != 0) {
        game_gmap_SpotMgr_OnEndPhase();
      }
      goto LABEL_13;
    }
  LABEL_10:
    v4 = 16;
    goto LABEL_23;
  }
  if (*(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) != 0) {
    goto LABEL_10;
  }
LABEL_13:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v5 = *(__int64***)(*GameData_2130e60 + 8);
    for (i = *v5; i != v5[1]; ++i) {
      while ((GameRoutine_14a73e0(*i) & 1) == 0) {
        GameRoutine_14aaba0(v5 + 3, i);
        v7 = v5[1];
        v8 = (char*)v7 - (char*)(i + 1);
        if (v7 != i + 1) {
          memmove(i, i + 1, (char*)v7 - (char*)(i + 1));
        }
        v5[1] = (__int64*)((char*)i + v8);
        if (i == (__int64*)((char*)i + v8)) {
          goto LABEL_22;
        }
      }
    }
  }
LABEL_22:
  v4 = 1;
  v9[1] = &GameData_1a96743;
  *(_BYTE*)(*GameData_2130e70 + 54) = 1;
  v9[0] = game_HashString(&GameData_1a96743);
  result = game_VariableManager_SetFlag(v9, 0);
LABEL_23:
  *(_DWORD*)(v1 + 152) = v4;
  return result;
}

__int64 ProcGmapPhaseSeq_14cb0d0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v5 = 0;
  v6 = 0;
  v4 = 0;
  result = GameRoutine_1349320(&v4);
  if ((result & 1) != 0) {
    GameRoutine_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
    result = GameRoutine_14b4b70(a1, 3u, (__int64)&v4);
  }
  if (v4 != 0) {
    v5 = v4;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v4);
  }
  return result;
}

__int64

game_gmap_ProcGmapPhaseSeq_CheckAttachmentMiasma_closure_Invoke(__int64 result,
                                                                _QWORD* a2)
{
  __int64** v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v2 = *(__int64***)(GameData_22416b0 + 8);
    v3 = *v2;
    v4 = v2[1];
    if (v3 != v4) {
      v5 = *a2;
      while (1) {
        v6 = *v3++;
        if (*(_QWORD*)(*(_QWORD*)(v6 + 112) + 48LL) ==
            *(_QWORD*)(*a2 + 120LL)) {
          break;
        }
        if (v3 == v4) {
          return result;
        }
      }
      v7 = result;
      if ((unsigned __int8)Impl_13261c0(*a2) == 6 ||
          (unsigned __int8)Impl_13261c0(v5) == 14) {
        **(_BYTE**)(v7 + 16) = 1;
      }
      if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 24LL))(
              *(_QWORD*)(v5 + 280)) == 1) {
        (*(void (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 112LL))(
            *(_QWORD*)(v5 + 280));
      }
      if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v5 + 280) + 24LL))(
              *(_QWORD*)(v5 + 280)) == 4) {
        **(_BYTE**)(v7 + 8) = 1;
      }
      return Spot_132b100(v5, 1);
    }
  }
  return result;
}

__int64 ProcGmapPhaseSeq_14cb560(__int64 a1, __int64 a2, _QWORD* a3, _QWORD* a4,
                                 _QWORD* a5, __int64 a6, __int64 a7, __int64 a8,
                                 __int64 a9)
{
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v15 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, a2);
  if (v15 != 0) {
    v16 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         192, 16, 0);
    GameRoutine_16477d0(v17, *a3, a6, a9);
    BasicMenuCursor_16e0c00(v15, v17);
    v18 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v18, *a4, a7, a9);
    BasicMenuCursor_16e0c00(v15, v18);
    v19 = fw_memory_HeapManager_Allocate(*v16, 192, 16, 0);
    GameRoutine_16477d0(v19, *a5, a8, a9);
    BasicMenuCursor_16e0c00(v15, v19);
  }
  return v15;
}

__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212d750;
  GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  if (*(_BYTE*)(*(_QWORD*)v2 + 312LL) != 0) {
    *(_BYTE*)(*(_QWORD*)v2 + 312LL) = 0;
    v3 = *(_QWORD*)(GameData_21f1628 + 16);
    v4 = *(_DWORD*)(v3 + 920) - 1;
    *(_DWORD*)(v3 + 920) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 912) + 8LL))(v3 + 912);
    }
  }
  *(_DWORD*)(v1 + 152) = 8;
  return 4;
}

__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = GameData_212d750;
  GameRoutine_87f520(*(_QWORD*)GameData_212d750, 0);
  if (*(_BYTE*)(*(_QWORD*)v2 + 312LL) != 0) {
    *(_BYTE*)(*(_QWORD*)v2 + 312LL) = 0;
    v3 = *(_QWORD*)(GameData_21f1628 + 16);
    v4 = *(_DWORD*)(v3 + 920) - 1;
    *(_DWORD*)(v3 + 920) = v4;
    if (v4 == 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v3 + 912) + 8LL))(v3 + 912);
    }
  }
  *(_DWORD*)(v1 + 152) = 8;
  v5 = GameRoutine_8224a0(27);
  game_VariableManager_SetFlag(v5, 0);
  return 4;
}

__int64 game_gmap_ProcGmapPhaseSeq_TryConfirmTurnEnd_closure1_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 152) = 2;
  return 3;
}

__int64 game_gmap_ProcGmapPhaseSeq_CheckSpotAttachmentAuto_closure_Invoke(
    __int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((**(_BYTE**)(result + 16) & 1) == 0) {
    v2 = *a2;
    v3 = result;
    v4 = *(_QWORD*)(result + 8);
    if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(*a2 + 280) + 24LL))(
            *(_QWORD*)(*a2 + 280)) == 1) {
      (*(void (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
          *(_QWORD*)(v2 + 280));
    }
    v5 = *(_QWORD*)(v2 + 280);
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5) == 1 ||
        (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v5 + 64LL))(v5) == 3 ||
        (unsigned __int8)(result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 +
                                                             64LL))(v5)) == 4) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 48LL))(v5);
      if ((result & 1) != 0) {
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v2 + 280) + 88LL))(
            *(_QWORD*)(v2 + 280), v4);
        result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v2 + 280) + 112LL))(
            *(_QWORD*)(v2 + 280));
        if ((result & 1) != 0) {
          result = *(_QWORD*)(v2 + 280);
          if (result != 0) {
            result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
            *(_QWORD*)(v2 + 280) = 0;
          }
        }
        **(_BYTE**)(v3 + 16) = 1;
      }
    }
  }
  return result;
}

bool ProcGmapPhaseSeq_14cbf30()
{
  __int64 v0;
  _BOOL8 result;

  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
  LABEL_9:
    if ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
        *(_BYTE*)(game_g_game_setting + 940) == 1 &&
            *(_BYTE*)(game_g_game_setting + 805) == 1 &&
            (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0) {
      v0 = 764;
      return (*(_BYTE*)(game_g_game_setting + v0) & 0x10) != 0;
    }
  LABEL_14:
    if (*(_BYTE*)(game_g_game_setting + 903) != 1 ||
        (*(_BYTE*)(game_g_game_setting + 900) & 1) == 0 &&
            (*(_BYTE*)(game_g_game_setting + 940) != 1 ||
             *(_BYTE*)(game_g_game_setting + 901) != 1 ||
             *(_BYTE*)(game_g_game_setting + 902) != 1)) {
      return false;
    }
    v0 = 860;
    return (*(_BYTE*)(game_g_game_setting + v0) & 0x10) != 0;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
    return false;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
    goto LABEL_8;
  }
  result = false;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) == 1) {
    LABEL_8:
      if (*(_BYTE*)(game_g_game_setting + 807) == 0) {
        goto LABEL_14;
      }
      goto LABEL_9;
    }
    return false;
  }
  return result;
}

__int64 game_gmap_ProcGmapPhaseSeq_FreeCursorTick_closure_Invoke(__int64 result,
                                                                 __int64 a2)
{
  _QWORD* v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 = *(_QWORD**)a2;
  if ((*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) == 0 &&
      *v2 == **(_QWORD**)(result + 8)) {
    v3 = *(__int64**)(result + 16);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_888610(result);
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gmap_ProcGmapPhaseSeq_EndOtherPhase_closure_Invoke(__int64 a1,
                                                                __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[4];

  v15 = *a2;
  v2 = *(_QWORD*)(*a2 + 96);
  if (v2 == 0) {
    return 0;
  }
  v16[2] = v13;
  v16[3] = v14;
  if (*(_BYTE*)(v2 + 32) != 1) {
    return 0;
  }
  v3 = *(_QWORD*)(v15 + 24);
  v4 = v15;
  if (*(_QWORD*)(v15 + 32) == v3 || (*(_WORD*)(v15 + 544) & 3) == 2 ||
      (*(_BYTE*)(v15 + 546) & 0xEF) != 0) {
    return 0;
  }
  v6 = 0;
  while (1) {
    v7 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v6) + 120LL);
    v8 = GameRoutine_ae0560();
    if (v7 == v8) {
      break;
    }
    v3 = *(_QWORD*)(v4 + 24);
    ++v6;
    v9 = *(_QWORD*)(v4 + 32) - v3;
    if (v6 >= v9 >> 3) {
      return (v7 == v8) & (unsigned __int8)v9;
    }
  }
  v10 = v8;
  v16[1] = &GameData_1a964b8;
  v16[0] = game_HashString(&GameData_1a964b8);
  v11 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v16);
    if (v12 != 0) {
      v11 = *(_DWORD*)(v12 + 32);
    }
    else {
      v11 = 0;
    }
  }
  v8 = v10;
  LOBYTE(v9) = v11 > (int)v6;
  return (v7 == v8) & (unsigned __int8)v9;
}

#pragma GCC visibility pop
