#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_8b51d0(void);
__int64 GameRoutine_a4c820(_QWORD);
__int64 GameRoutine_a526f0(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_21fdd40;
extern __int64 (*GameData_1f8fe50[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcMainSeq_vtable[])();
extern __int64 GameData_21c9600;
extern __int64 GameData_21c9648;
extern __int64 GameData_21fdd20;
extern __int64 GameData_21fdd28;
extern __int64 GameData_21fdd38;
extern __int64 GameData_21fdd48;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcMainSeq_Destructor(__int64 a1);
__int64 ProcMainSeq_DeletingDestructor(__int64 a1);
__int64 ProcMainSeq_Unknown6();
__int64 ProcMainSeq_Unknown7();
__int64 GameRoutine_130dae0(_QWORD, _QWORD);
__int64 GameRoutine_133f780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_667c80(_QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_682bc0(_QWORD, _QWORD);
__int64 GameRoutine_714b20(_QWORD);
__int64 GameRoutine_715780(_QWORD, _QWORD);
__int64 GameRoutine_7160c0(_QWORD);
__int64 GameRoutine_716420(void);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_874970(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_874c50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_874e20(_QWORD, _QWORD);
__int64 GameRoutine_878d80(_QWORD);
__int64 GameRoutine_8791a0(void);
__int64 GameRoutine_87de80(void);
__int64 GameRoutine_889be0(void);
__int64 GameRoutine_88d3e0(_QWORD);
__int64 GameRoutine_8b6940(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b5d0(_QWORD, _QWORD);
__int64 GameRoutine_97b680(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 GameRoutine_d5d770(_QWORD, _QWORD);
__int64 GameRoutine_dbced0(_QWORD, _QWORD);
__int64 GameRoutine_eb7c20(_QWORD, _QWORD);
__int64 Impl_718440(_QWORD);
__int64 ProcCmdBtlSeq_e61c90(_QWORD, _QWORD);
__int64 ProcList_9bd480(_QWORD);
__int64 TimelineFile_890160(_QWORD);
__int64 TimelineFile_890c00(_QWORD);
__int64 Unit_6d8180(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_ProcList_Call_9bcfa0(_QWORD, _QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_Unit_Unknown6c46e0(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_anonymous_TimelineCaller_RunImpl(_QWORD, _QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1a90b0d;
extern _UNKNOWN GameData_1a90b24;
extern _UNKNOWN GameData_1ac68f0;
extern _UNKNOWN GameData_1ada131;
extern _UNKNOWN GameData_1ae568e;
extern _UNKNOWN GameData_1af118c;
extern _UNKNOWN GameData_2216780;
extern __int64 (*GameData_1f8fb68[])();
extern __int64 (*GameData_1f8fbe8[])();
extern __int64 (*GameData_1f8fc68[])();
extern __int64 (*GameData_1f8fce8[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_2130de0;
extern __int64 GameData_21c9650;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea58;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c790;
extern char GameData_1a9f09e;
struct PseudoSret GameRoutine_88d260(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_667c50(void);
void __attribute__((noreturn)) String_60a1d0();
__int64 game_anonymous_ProcMainSeq_TimelineRun(__int64 a1);
__int64 ProcMainSeq_6658b0(__int64 result);
__int64 ProcMainSeq_665c10(__int64 result);
__int64 ProcMainSeq_665d20(__int64 a1);
__int64 ProcMainSeq_665de0(__int64 a1);
void ProcMainSeq_665f20();
__int64 ProcMainSeq_665fa0(__int64 result);
__int64 ProcMainSeq_665fe0_alt1() __asm__("ProcMainSeq_665fe0");
__int64 ProcMainSeq_666000_alt1(__int64 a1) __asm__("ProcMainSeq_666000");
__int64 ProcMainSeq_6664c0_alt1(__int64 a1) __asm__("ProcMainSeq_6664c0");
__int64 ProcMainSeq_666650(__int64 a1);
__int64 ProcMainSeq_666760(__int64 result);
__int64 ProcMainSeq_666860(__int64 result);
__int64 ProcMainSeq_6669e0(__int64 a1);
void ProcMainSeq_666ba0();
__int64 ProcMainSeq_666e80_alt1(__int64 a1) __asm__("ProcMainSeq_666e80");
__int64 ProcMainSeq_667010(__int64 result);
__int64 ProcMainSeq_667120(__int64 a1);
__int64 ProcMainSeq_6671a0(__int64 result);
__int64 ProcMainSeq_667300(__int64 a1);
__int64 game_anonymous_ProcMainSeq_TimelineRun_closure_Invoke();
__int64 game_anonymous_ProcMainSeq_TimelineRun_closure0_Invoke(__int64 a1,
                                                               __int64* a2);
__int64 game_anonymous_ProcMainSeq_TimelineRun_closure1_Invoke(__int64 a1,
                                                               __int64* a2);
__int64 game_anonymous_ProcMainSeq_TimelineRun_closure2_Invoke();
__int64 ProcMainSeq_Unknown12(__int64 result);
__int64 GameConverge_8e7dc0(_QWORD);
__int64 GameRoutine_658d60(_QWORD);
__int64 GameRoutine_7160c0_alt1(void) __asm__("GameRoutine_7160c0");
__int64 GameRoutine_716420_alt1(_QWORD, _QWORD) __asm__("GameRoutine_716420");
__int64 GameRoutine_8791a0_alt1(_QWORD) __asm__("GameRoutine_8791a0");
__int64 GameRoutine_8ab6e0(_QWORD, _QWORD);
__int64 game_GameConverge_Impl_Commit(_QWORD);
__int64 game_GameConverge_Impl_CommonInfo_MergeRelay(_QWORD);
extern __int64 game_GameRestartData_unknown_;
__int64 ProcMainSeq_665eb0(__int64 result);
__int64 ProcMainSeq_667050(__int64 a1);
__int64 ProcMainSeq_667400(__int64 a1);
__int64 GameRoutine_174bfc0(__int64, int);
__int64 GameRoutine_716420_alt2(__int64 result,
                                unsigned __int8) __asm__("GameRoutine_716420");
__int64 GameRoutine_8aa110(__int64);
__int64 game_874970(__int64, unsigned __int8, unsigned int);
__int64 game_874c50(__int64, unsigned __int8, unsigned int, unsigned int,
                    unsigned int, unsigned int);
__int64 game_874e20(__int64*, __int64);
extern __int64 (*GameData_1fa8a70[])();
extern __int64* game_vstring_kEmpty_ptr[2];
__int64 ProcMainSeq_665980(__int64 a1);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_715780_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_715780");
__int64 GameRoutine_889be0_alt1(__int64) __asm__("GameRoutine_889be0");
__int64 GameRoutine_8b6940_alt1(__int64, __int16*,
                                __int64) __asm__("GameRoutine_8b6940");
__int64 GameRoutine_97b680_alt1(__int64) __asm__("GameRoutine_97b680");
__int64 GameRoutine_eb7c20_alt1(__int64, __int64) __asm__("GameRoutine_eb7c20");
__int64 ProcCmdBtlSeq_e61c90_alt1(__int64,
                                  __int64) __asm__("ProcCmdBtlSeq_e61c90");
__int64 TimelineFile_890160_alt1(const char*) __asm__("TimelineFile_890160");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_874970_alt1(__int64, unsigned __int8,
                         unsigned __int8) __asm__("game_874970");
__int64 game_874c50_alt1(__int64, unsigned __int8, unsigned __int8,
                         unsigned __int8, int, int) __asm__("game_874c50");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_Unit_Unknown6c46e0_alt1(__int64,
                                     _BYTE*) __asm__("game_Unit_Unknown6c46e0");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gmap_133f780(__int64 result, _DWORD*, char);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
bool GameRoutine_7160c0_alt2(_QWORD*) __asm__("GameRoutine_7160c0");
bool game_878d80(_QWORD*);
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
extern char GameData_1ae568e_alt1[] __asm__("GameData_1ae568e");
float GameRoutine_d5d770_alt1(__int64,
                              unsigned __int8*) __asm__("GameRoutine_d5d770");
unsigned __int64 GameRoutine_682bc0_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_682bc0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void GameHr_667c80(__int64);
void GameRoutine_130dae0_alt1(__int64, __int64) __asm__("GameRoutine_130dae0");
void GameRoutine_658d60_alt1(__int64*) __asm__("GameRoutine_658d60");
void GameRoutine_8791a0_alt2(__int64) __asm__("GameRoutine_8791a0");
void GameRoutine_dbced0_alt1(__int64*, __int64) __asm__("GameRoutine_dbced0");
void Unit_6d8180_alt1(__int64, __int64, int) __asm__("Unit_6d8180");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcMainSeq_665fe0(__int64 a1);
unsigned __int64 ProcMainSeq_666000(__int64 a1);
void ProcMainSeq_6664c0(__int64 a1);
void ProcMainSeq_666e80(__int64 a1);

__int64 game_anonymous_ProcMainSeq_TimelineRun(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v14[3];
  _QWORD v15[4];
  _QWORD* v16;

  result = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  v3 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  if (v3 == 0) {
    return result;
  }
  result = GameRoutine_716420();
  if (*(_BYTE*)(v3 + 33) != 6) {
    if (*(_BYTE*)(v3 + 32) == 0) {
      return game_anonymous_TimelineCaller_RunImpl(v3, a1, 0);
    }
    return result;
  }
  result = ProcList_9bd480(a1);
  if (result == 0) {
    return result;
  }
  v4 = result;
  v15[0] = GameData_1f8fb68;
  v16 = v15;
  game_ProcList_Call_9bcfa0(result, v15);
  if (v16 == v15) {
    v5 = 32;
    goto LABEL_11;
  }
  if (v16 != nullptr) {
    v5 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v16 + v5))((__int64)v16);
  }
  *(struct PseudoSret*)(v14) = GameRoutine_88d260(v3);
  v6 = v14[0];
  v7 = (__int64*)v14[1];
  if (v14[0] != v14[1]) {
    for (i = (__int64*)v14[0]; i != v7; ++i) {
      v10 = *i;
      v16 = v15;
      v15[0] = GameData_1f8fbe8;
      v15[1] = v10;
      game_ProcList_Call_9bcfa0(v4, v15);
      if (v16 == v15) {
        v11 = 32;
      }
      else {
        if (v16 == nullptr) {
          goto LABEL_22;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v16 + v11))((__int64)v16);
    LABEL_22:
      v15[0] = GameData_1f8fc68;
      v15[1] = v10;
      v16 = v15;
      game_ProcList_Call_9bcfa0(v4, v15);
      if (v16 == v15) {
        v9 = 32;
      }
      else {
        if (v16 == nullptr) {
          continue;
        }
        v9 = 40;
      }
      (*(void (**)(__int64))(*v16 + v9))((__int64)v16);
    }
  }
  if (v6 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  v6);
  }
  v15[0] = GameData_1f8fce8;
  v16 = v15;
  game_ProcList_Call_9bcfa0(v4, v15);
  result = (__int64)v16;
  if (v16 == v15) {
    v13 = 32;
  }
  else {
    if (v16 == nullptr) {
      return result;
    }
    v13 = 40;
  }
  return (*(__int64 (**)(__int64))(*v16 + v13))((__int64)v16);
}

__int64 ProcMainSeq_6658b0(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;

  if (game_GameModeData_instance_ != 0) {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v1 != 0) {
      v2 = *(unsigned __int8*)(v1 + 33);
      if (v2 <= 14) {
        if (v2 > 12) {
          if (v2 == 13) {
            v3 = 24;
          }
          else {
            v3 = 25;
          }
          goto LABEL_24;
        }
        if (v2 == 10) {
          v3 = 18;
          goto LABEL_24;
        }
        if (v2 == 12) {
          v3 = 22;
          goto LABEL_24;
        }
      }
      else if (v2 <= 51) {
        if (v2 == 15) {
          v3 = 26;
          goto LABEL_24;
        }
        if (v2 == 16) {
          v3 = 23;
          goto LABEL_24;
        }
      }
      else {
        switch (v2) {
        case '4':
          v3 = 28;
          goto LABEL_24;
        case ';':
          v3 = 29;
          goto LABEL_24;
        case 'K':
          v3 = 31;
        LABEL_24:
          *(_DWORD*)(result + 152) = v3;
          return result;
        default:
          break;
        }
      }
      v3 = 20;
      goto LABEL_24;
    }
  }
  return result;
}

__int64 ProcMainSeq_665980(__int64 a1)
{
  __int64 result;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 (**v9)();
  __int64 (**v10)();
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  char v17;
  struct {
    __int64 (**v18)();
    __int64 v19;
    __int64 v20;
  } v18_;
  struct {
    __int64* v21;
    char gap40_[24];
    __int64** v22;
  } v21_;
  struct {
    __int64 v23;
    char gap88_[24];
    __int64* v24;
    char gap120_[8];
    char v25;
  } v23_;

  result = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = GameRoutine_716420_alt2(game_GameModeData_instance_, 0xBu);
  }
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 12) == 0) {
    v18_.v18 = GameData_1fa8a70;
    v18_.v19 = game_GameRestartData_unknown_;
    v21_.v21 = (__int64*)&v18_.v18;
    GameRoutine_8aa110((__int64)&v18_.v18);
    result = (__int64)v21_.v21;
    if (v21_.v21 == (__int64*)&v18_.v18) {
      v3 = 32;
      goto LABEL_8;
    }
    if (v21_.v21 != nullptr) {
      v3 = 40;
    LABEL_8:
      result = (*(__int64 (**)(__int64))(*v21_.v21 + v3))((__int64)v21_.v21);
    }
  }
  if (GameData_21eea58 != 0 && *(_BYTE*)(GameData_21eea58 + 32) == 1) {
    *(_BYTE*)(GameData_21eea58 + 32) = 0;
    goto LABEL_39;
  }
  v18_.v18 = nullptr;
  v18_.v19 = 0;
  v18_.v20 = 0;
  v21_.v22 = nullptr;
  v23_.v24 = nullptr;
  v23_.v25 = 0;
  game_874970((__int64)&v18_.v18, 1u, 2u);
  if (game_GameModeData_instance_ != 0) {
    v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    v6 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  else {
    v5 = 0;
    v4 = 0;
    v6 = 0;
  }
  game_874c50((__int64)&v18_.v18, 1u, 7u, v4, v5, v6);
  game_874e20((__int64*)&v18_.v18, a1);
  if (v23_.v24 == &v23_.v23) {
    v7 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_20;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v23_.v24 + v7))((__int64)v23_.v24);
LABEL_20:
  result = (__int64)v21_.v22;
  if (v21_.v22 == &v21_.v21) {
    v8 = 4;
    goto LABEL_24;
  }
  if (v21_.v22 != nullptr) {
    v8 = 5;
  LABEL_24:
    result = ((__int64 (*)(void*))(*v21_.v22)[v8])(v21_.v22);
  }
  v9 = v18_.v18;
  if (v18_.v18 != nullptr) {
    v10 = (__int64 (**)(void))v18_.v19;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v18_.v18 == (__int64 (**)(void))v18_.v19) {
      goto LABEL_36;
    }
    do {
      if ((*(_BYTE*)(v10 - 3) & 1) != 0) {
        v12 = (__int64)*(v10 - 1);
        if (v12 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) != 0) {
            v13 = 128;
          }
          else {
            v13 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v13, v12);
        }
      }
      v10 -= 4;
    } while (v10 != v9);
    v18_.v19 = (__int64)v9;
    v9 = v18_.v18;
    if (v18_.v18 != nullptr) {
    LABEL_36:
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v14, v9);
    }
  }
LABEL_39:
  if (game_GameModeData_instance_ != 0) {
    v15 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v15 != 0) {
      if (*(_WORD*)(v15 + 40) != 0) {
        v16 = *(__int64**)(v15 + 48);
      }
      else {
        v16 = game_vstring_kEmpty_ptr[0];
      }
      if (*v16 != 0) {
        v17 = *(_BYTE*)(game_GameModeData_instance_ + 15);
        result = GameRoutine_174bfc0(a1, 0);
        *(_BYTE*)(result + 824) = v17;
        *(_QWORD*)(result + 832) = v15;
        *(_DWORD*)(result + 864) = 0;
      }
    }
  }
  return result;
}

__int64 ProcMainSeq_665c10(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  bool v3;
  int v4;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  struct {
    __int64 v11;
    void* v12;
  } v11_;

  v1 = result;
  if (GameData_21eea58 != 0) {
    *(_BYTE*)(GameData_21eea58 + 32) = 0;
  }
  if (game_GameModeData_instance_ != 0) {
    result = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (result != 0) {
      v2 = *(unsigned __int8*)(result + 33) - 76;
      v3 = v2 > 0xA;
      v4 = (1 << v2) & 0x403;
      if (v3 || v4 == 0) {
        goto LABEL_13;
      }
      v6 = *(_QWORD*)(result + 120);
      if (v6 == 0) {
        goto LABEL_13;
      }
      v7 = 80;
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v7 = 81;
      }
      if (*(_BYTE*)(v6 + v7) != 0) {
      LABEL_13:
        result = GameRoutine_889be0_alt1(result);
        if ((result & 1) != 0) {
          v8 = 20;
        }
        else {
          v8 = 16;
        }
      }
      else {
        v11_.v12 = &GameData_1af118c;
        v11_.v11 = game_HashString_alt1((__int64)&GameData_1af118c);
        if (game_GameModeData_instance_ != 0) {
          v9 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        }
        else {
          v9 = 0;
        }
        game_VariableManager_SetFlag_alt1((__int64)&v11_.v11, v9);
        v11_.v12 = &GameData_1ac68f0;
        v11_.v11 = game_HashString_alt1((__int64)&GameData_1ac68f0);
        if (game_GameModeData_instance_ != 0) {
          v10 = *(_DWORD*)(game_GameModeData_instance_ + 60);
        }
        else {
          v10 = 0;
        }
        result = game_VariableManager_SetFlag_alt1((__int64)&v11_.v11, v10);
        v8 = 24;
      }
      *(_DWORD*)(v1 + 152) = v8;
    }
  }
  return result;
}

__int64 ProcMainSeq_665d20(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int16 v4;
  __int16 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int16 v9;
  int v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;

  result = game_GameModeData_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v9 = *(_WORD*)v3;
  v10 = *(_DWORD*)(v3 + 2);
  v11 = *(_WORD*)(v3 + 6);
  v4 = *(_WORD*)(v3 + 8);
  v5 = *(_WORD*)(v3 + 10);
  v12 = v4;
  v13 = v5;
  if (game_GameModeData_instance_ != 0) {
    result = GameRoutine_7160c0_alt2((_QWORD*)game_GameModeData_instance_);
    if ((result & 1) != 0) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v7 = *(_DWORD*)(game_GameModeData_instance_ + 92);
        v8 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        *(_QWORD*)(game_GameModeData_instance_ + 16) = 0;
        *(_DWORD*)(v6 + 92) = v7 & 0xFFFFF863;
      }
      else {
        v8 = 0;
      }
      result = GameRoutine_8b6940_alt1(a1, &v9, v8);
      *(_DWORD*)(a1 + 152) = 16;
    }
  }
  return result;
}

__int64 ProcMainSeq_665de0(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int16 v5;
  __int16 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int16 v10;
  int v11;
  __int16 v12;
  __int16 v13;
  __int16 v14;

  v2 = GameRoutine_9a28e0(48);
  game_VariableManager_SetFlag(v2, 1);
  result = game_GameModeData_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v10 = *(_WORD*)v4;
  v11 = *(_DWORD*)(v4 + 2);
  v12 = *(_WORD*)(v4 + 6);
  v5 = *(_WORD*)(v4 + 8);
  v6 = *(_WORD*)(v4 + 10);
  v13 = v5;
  v14 = v6;
  if (game_GameModeData_instance_ != 0) {
    result = GameRoutine_7160c0(game_GameModeData_instance_);
    if ((result & 1) != 0) {
      v7 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v8 = *(_DWORD*)(game_GameModeData_instance_ + 92);
        v9 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        *(_QWORD*)(game_GameModeData_instance_ + 16) = 0;
        *(_DWORD*)(v7 + 92) = v8 & 0xFFFFF863;
      }
      else {
        v9 = 0;
      }
      result = GameRoutine_8b6940(a1, &v10, v9);
      *(_DWORD*)(a1 + 152) = 16;
    }
  }
  return result;
}

__int64 ProcMainSeq_665eb0(__int64 result)
{
  __int64 v1;
  char v2;

  if (game_GameModeData_instance_ != 0) {
    v1 = result;
    GameRoutine_716420_alt1(game_GameModeData_instance_, 12);
    result = v1;
  }
  if (GameData_21eea58 == 0) {
    return GameRoutine_8791a0();
  }
  v2 = *(_BYTE*)(GameData_21eea58 + 32);
  *(_BYTE*)(GameData_21eea58 + 32) = 0;
  if ((v2 & 1) == 0) {
    return GameRoutine_8791a0();
  }
  return result;
}

void ProcMainSeq_665f20()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  int v3;
  unsigned int v4;
  int v5;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v1 != 0) {
      v2 = *(_QWORD*)(v1 + 136);
      if (v2 != 0) {
        v3 = *(_DWORD*)(game_GameModeData_instance_ + 92);
        *(_QWORD*)(game_GameModeData_instance_ + 16) = v2;
        v4 = v3 & 0xFFFFFC7F;
        *(_DWORD*)(v0 + 92) = v4;
        v5 = *(_DWORD*)(v2 + 184);
        if ((v5 & 0x800) != 0) {
          v4 |= 0x100u;
          *(_DWORD*)(v0 + 92) = v4;
          v5 = *(_DWORD*)(v2 + 184);
          if ((v5 & 0x40) == 0) {
          LABEL_6:
            if ((v5 & 0x80) == 0) {
              return;
            }
            goto LABEL_7;
          }
        }
        else if ((v5 & 0x40) == 0) {
          goto LABEL_6;
        }
        v4 |= 0x80u;
        *(_DWORD*)(v0 + 92) = v4;
        if ((*(_DWORD*)(v2 + 184) & 0x80) == 0) {
          return;
        }
      LABEL_7:
        *(_DWORD*)(v0 + 92) = v4 | 0x200;
      }
    }
  }
}

__int64 ProcMainSeq_665fa0(__int64 result)
{
  __int64 v1;

  if (game_GameModeData_instance_ != 0) {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v1 != 0 && *(_BYTE*)(v1 + 33) == 12 &&
        (*(_BYTE*)(game_GameModeData_instance_ + 92) & 4) != 0 &&
        *(_DWORD*)(result + 152) == 0) {
      *(_DWORD*)(result + 152) = 3;
    }
  }
  return result;
}

void ProcMainSeq_665fe0(__int64 a1)
{
  char v1;

  if (GameData_21eea58 == 0 ||
      (v1 = *(_BYTE*)(GameData_21eea58 + 32),
       *(_BYTE*)(GameData_21eea58 + 32) = 0, (v1 & 1) == 0)) {
    GameRoutine_8791a0_alt2(a1);
  }
}

unsigned __int64 ProcMainSeq_666000(__int64 a1)
{
  char* v2;
  char* v3;
  unsigned __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  int v32;
  _QWORD* v33;
  __int64 v34;
  const char* v35;
  __int64 v36[2];
  _BYTE v37[4];

  v2 = game_util_Format_alt1("%s_%s", "Route", "Ism");
  v3 = game_util_Format_alt1("%s/%s", "000", v2);
  v36[0] = (__int64)v3;
  v36[1] = strlen_alt1(v3);
  result = game_878d80(v36);
  if ((result & 1) != 0) {
    v5 = GameData_21eea58;
    if (GameData_21eea58 == 0) {
    LABEL_82:
      v32 = 34;
      goto LABEL_83;
    }
    *(_BYTE*)GameData_21eea58 = 0;
    *(_DWORD*)(v5 + 4) = -1;
    if ((*(_BYTE*)(v5 + 8) & 1) != 0) {
      **(_BYTE**)(v5 + 24) = 0;
      *(_QWORD*)(v5 + 16) = 0;
    }
    else {
      *(_WORD*)(v5 + 8) = 0;
    }
    v33 = *(_QWORD**)(v5 + 80);
    *(_QWORD*)(v5 + 80) = 0;
    if (v33 == (_QWORD*)(v5 + 48)) {
      v34 = 32;
    }
    else {
      if (v33 == nullptr) {
      LABEL_78:
        *(_BYTE*)v5 = 4;
        if (*v3 != 0) {
          v35 = v3;
        }
        else {
          v35 = &GameData_1a9f09e;
        }
        result = GameRoutine_60a020_alt1(GameData_21eea58 + 8, v35);
        goto LABEL_82;
      }
      v34 = 40;
    }
    (*(void (**)(__int64))(*v33 + v34))((__int64)v33);
    v5 = GameData_21eea58;
    goto LABEL_78;
  }
  GameRoutine_682bc0_alt1(v36, (__int64)&GameData_1a90b0d);
  v6 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v36[0] != 0) {
    v7 = 250;
    v8 = *(_QWORD*)(GameData_21ca310 + 56);
    while (1) {
      v9 = *(_QWORD*)(v8 + 440);
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 &&
          *(_QWORD*)(v8 + 392) == v36[0]) {
        break;
      }
      v10 = *(_QWORD*)(v8 + 2664);
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 &&
          *(_QWORD*)(v8 + 2616) == v36[0]) {
        v8 += 2224;
        break;
      }
      v11 = *(_QWORD*)(v8 + 4888);
      if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 &&
          *(_QWORD*)(v8 + 4840) == v36[0]) {
        v8 += 4448;
        break;
      }
      v12 = *(_QWORD*)(v8 + 7112);
      if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 &&
          *(_QWORD*)(v8 + 7064) == v36[0]) {
        v8 += 6672;
        break;
      }
      v13 = *(_QWORD*)(v8 + 9336);
      if (v13 != 0 && *(_BYTE*)(v13 + 16) != 9 &&
          *(_QWORD*)(v8 + 9288) == v36[0]) {
        v8 += 8896;
        break;
      }
      v8 += 11120;
      v7 -= 5;
      if (v7 == 0) {
        goto LABEL_24;
      }
    }
  }
  else {
  LABEL_24:
    v8 = *(_QWORD*)(v6 + 556216);
    if (v8 != 0) {
      Unit_6d8180_alt1(*(_QWORD*)(v6 + 556216), v36[0], 0);
      v37[0] = 4;
      game_Unit_Unknown6c46e0_alt1(v8, v37);
    }
  }
  if ((*(_BYTE*)(v8 + 2112) & 1) != 0) {
    **(_BYTE**)(v8 + 2128) = 0;
    *(_QWORD*)(v8 + 2120) = 0;
  }
  else {
    *(_WORD*)(v8 + 2112) = 0;
  }
  *(_BYTE*)(v8 + 2136) = 1;
  *(_DWORD*)(v8 + 2137) = 0;
  GameRoutine_97b680_alt1(v8 + 2104);
  GameRoutine_682bc0_alt1(v36, (__int64)&GameData_1a90b24);
  v14 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v36[0] != 0) {
    v15 = 250;
    v16 = *(_QWORD**)(GameData_21ca310 + 56);
    while (1) {
      v17 = v16[55];
      if (v17 != 0 && *(_BYTE*)(v17 + 16) != 9 && v16[49] == v36[0]) {
        break;
      }
      v18 = v16[333];
      if (v18 != 0 && *(_BYTE*)(v18 + 16) != 9 && v16[327] == v36[0]) {
        break;
      }
      v19 = v16[611];
      if (v19 != 0 && *(_BYTE*)(v19 + 16) != 9 && v16[605] == v36[0]) {
        break;
      }
      v20 = v16[889];
      if (v20 != 0 && *(_BYTE*)(v20 + 16) != 9 && v16[883] == v36[0]) {
        break;
      }
      v21 = v16[1167];
      if (v21 != 0 && *(_BYTE*)(v21 + 16) != 9 && v16[1161] == v36[0]) {
        break;
      }
      v16 += 1390;
      v15 -= 5;
      if (v15 == 0) {
        goto LABEL_48;
      }
    }
  }
  else {
  LABEL_48:
    v22 = *(_QWORD*)(v14 + 556216);
    if (v22 != 0) {
      Unit_6d8180_alt1(*(_QWORD*)(v14 + 556216), v36[0], 0);
      v37[0] = 4;
      game_Unit_Unknown6c46e0_alt1(v22, v37);
    }
  }
  result = GameRoutine_682bc0_alt1(v36, (__int64)&GameData_1ada131);
  v23 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v36[0] != 0) {
    v24 = 250;
    v25 = *(_QWORD**)(GameData_21ca310 + 56);
    while (1) {
      v26 = v25[55];
      if (v26 != 0 && *(_BYTE*)(v26 + 16) != 9 && v25[49] == v36[0]) {
        break;
      }
      v27 = v25[333];
      if (v27 != 0 && *(_BYTE*)(v27 + 16) != 9 && v25[327] == v36[0]) {
        break;
      }
      v28 = v25[611];
      if (v28 != 0 && *(_BYTE*)(v28 + 16) != 9 && v25[605] == v36[0]) {
        break;
      }
      v29 = v25[889];
      if (v29 != 0 && *(_BYTE*)(v29 + 16) != 9 && v25[883] == v36[0]) {
        break;
      }
      v30 = v25[1167];
      if (v30 != 0 && *(_BYTE*)(v30 + 16) != 9 && v25[1161] == v36[0]) {
        break;
      }
      v25 += 1390;
      v24 -= 5;
      if (v24 == 0) {
        goto LABEL_69;
      }
    }
  }
  else {
  LABEL_69:
    v31 = *(_QWORD*)(v23 + 556216);
    if (v31 != 0) {
      Unit_6d8180_alt1(*(_QWORD*)(v23 + 556216), v36[0], 0);
      v37[0] = 4;
      result = game_Unit_Unknown6c46e0_alt1(v31, v37);
    }
  }
  v32 = 21;
LABEL_83:
  *(_DWORD*)(a1 + 152) = v32;
  return result;
}

void ProcMainSeq_6664c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    __int64 v11;
    __int64 v12;
  } v10_;
  struct {
    __int64 v13;
    char gap40_[24];
    __int64* v14;
  } v13_;
  struct {
    __int64 v15;
    char gap88_[24];
    __int64* v16;
    char gap120_[8];
    char v17;
  } v15_;

  v10_.v10 = 0;
  v10_.v11 = 0;
  v10_.v12 = 0;
  v13_.v14 = nullptr;
  v15_.v16 = nullptr;
  v15_.v17 = 0;
  game_874970_alt1((__int64)&v10_.v10, 1u, 2u);
  game_874c50_alt1((__int64)&v10_.v10, 1u, 4u, 9u, 0, 0);
  game_874e20(&v10_.v10, a1);
  if (v15_.v16 == &v15_.v15) {
    v2 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v2))((__int64)v15_.v16);
LABEL_6:
  if (v13_.v14 == &v13_.v13) {
    v3 = 32;
    goto LABEL_10;
  }
  if (v13_.v14 != nullptr) {
    v3 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v13_.v14 + v3))((__int64)v13_.v14);
  }
  v4 = v10_.v10;
  if (v10_.v10 != 0) {
    v5 = v10_.v11;
    v6 = fw_memory_g_heap_manager_ptr;
    if (v10_.v10 == v10_.v11) {
      goto LABEL_22;
    }
    do {
      if ((*(_BYTE*)(v5 - 24) & 1) != 0) {
        v7 = *(_QWORD*)(v5 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v8, v7);
        }
      }
      v5 -= 32;
    } while (v5 != v4);
    v10_.v11 = v4;
    v4 = v10_.v10;
    if (v10_.v10 != 0) {
    LABEL_22:
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v9, v4);
    }
  }
}

__int64 ProcMainSeq_666650(__int64 a1)
{
  __int64 result;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;

  if (game_GameModeData_instance_ != 0) {
    result = TimelineFile_890c00(
        *(unsigned __int8*)(game_GameModeData_instance_ + 312));
    if (result == 0) {
      return result;
    }
  }
  else {
    result = TimelineFile_890c00(0);
    if (result == 0) {
      return result;
    }
  }
  v3 = **(__int64***)(result + 40);
  if ((int)((*(_QWORD*)(*(_QWORD*)(result + 40) + 8LL) - (_QWORD)v3) >> 3) >=
      1) {
    v4 = *v3;
    if (*v3 != 0) {
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        if (*(_BYTE*)(game_GameModeData_instance_ + 15) != 9) {
          goto LABEL_13;
        }
        v8 = game_GetHero(9);
        v7 = 241;
        v6 = game_UnitPool_Find_6ead60(&v8, &v7);
        if (v6 != 0 && *(_BYTE*)(v6 + 2136) != 0) {
          v6 = GameRoutine_97b5d0(*(_QWORD*)(v5 + 176) + 112LL, v6 + 2104);
        }
        result = Impl_718440(v6);
        v5 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
        LABEL_13:
          result = GameRoutine_715780(v5, v4);
          if (game_GameModeData_instance_ != 0) {
            *(_BYTE*)(game_GameModeData_instance_ + 312) = 0;
          }
        }
      }
      *(_DWORD*)(a1 + 152) = 16;
    }
  }
  return result;
}

__int64 ProcMainSeq_666760(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  if (game_GameModeData_instance_ != 0) {
    v1 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    if ((v1 & 0x20) != 0) {
      *(_DWORD*)(game_GameModeData_instance_ + 92) = v1 & 0xFFFFFFDF;
      return result;
    }
    v2 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v2 == 0) {
      return result;
    }
    if (*(_QWORD*)(v2 + 120) == 0) {
      goto LABEL_18;
    }
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64**)(v3 + 8);
    v6 = *(__int64**)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v6; ++v5) {
        v7 = *v5;
        if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
          goto LABEL_16;
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
          goto LABEL_18;
        }
      }
    LABEL_16:
      v9 = result;
      v10 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v2 + 120));
      result = v9;
      if (v10 != 0) {
        GameRoutine_133f780(v7, v10, 1);
        result = v9;
      }
    }
  LABEL_18:
    *(_QWORD*)(result + 216) = v2;
  }
  return result;
}

__int64 ProcMainSeq_666860(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v2 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v2 != 0 && *(_BYTE*)(v2 + 152) == 3) {
      v3 = result;
      do {
        v4 = GameRoutine_714b20(v1);
        if (v4 == 0) {
          break;
        }
        v5 = v4;
        if ((GameRoutine_889be0() & 1) == 0) {
          break;
        }
        if (*(_BYTE*)(v5 + 32) == 0) {
          game_anonymous_TimelineCaller_RunImpl(v5, 0, 0);
        }
      } while ((GameRoutine_7160c0(v1) & 1) != 0);
      result = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        result = GameRoutine_7160c0(game_GameModeData_instance_);
        v6 = game_GameModeData_instance_;
        if ((result & 1) != 0) {
          if (game_GameModeData_instance_ == 0) {
            return result;
          }
          v7 = *(_DWORD*)(game_GameModeData_instance_ + 92);
          v8 = v3;
          *(_QWORD*)(game_GameModeData_instance_ + 16) = 0;
          *(_DWORD*)(v6 + 92) = v7 & 0xFFFFF863;
        }
        else {
          v8 = v3;
          if (game_GameModeData_instance_ == 0) {
            return result;
          }
        }
        v9 = *(_DWORD*)(v6 + 92);
        if ((v9 & 0x20) != 0) {
          *(_DWORD*)(v6 + 92) = v9 & 0xFFFFFFDF;
          return result;
        }
        v10 = *(_QWORD*)(v6 + 24);
        if (v10 == 0) {
          return result;
        }
        result = *(_QWORD*)(v10 + 120);
        if (result == 0) {
          goto LABEL_31;
        }
        v11 = *(_QWORD*)(GameData_21c96e8 + 8);
        v12 = *(_DWORD*)(v11 + 56);
        v13 = *(__int64**)(v11 + 8);
        v14 = *(__int64**)(v11 + 16);
        if (v12 < 0) {
          for (; v13 != v14; ++v13) {
            v15 = *v13;
            if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(v15 + 552) == 0) {
              goto LABEL_29;
            }
          }
        }
        else if (v13 != v14) {
          while (1) {
            v16 = *v13++;
            v15 = v16;
            if (*(_DWORD*)(v16 + 84) == v12) {
              break;
            }
            if (v13 == v14) {
              goto LABEL_31;
            }
          }
        LABEL_29:
          result = game_gmap_SpotMgr_FindSpot(result);
          v8 = v3;
          if (result != 0) {
            result = GameRoutine_133f780(v15, result, 1);
            v8 = v3;
          }
        }
      LABEL_31:
        *(_QWORD*)(v8 + 216) = v10;
      }
    }
  }
  return result;
}

__int64 ProcMainSeq_6669e0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v19 = 0;
  v1 = *(_QWORD*)(a1 + 216);
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v18 = a1;
    if (*(_WORD*)(v1 + 40) != 0) {
      v3 = 0;
      v4 = nullptr;
      v5 = 0;
      v6 = 0;
      do {
        v7 = *(_QWORD*)(v1 + 48);
        if ((unsigned __int64)v4 < v5) {
          *(_QWORD*)v4 = *(_QWORD*)(v7 + 8 * v6);
          v4 += 8;
        }
        else {
          v8 = &v4[-v3];
          v9 = (__int64)&v4[-v3] >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_667c50();
          }
          if ((__int64)(v5 - v3) >> 2 > v10) {
            v10 = (__int64)(v5 - v3) >> 2;
          }
          if (v5 - v3 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(a1);
            }
            v12 = fw_memory_HeapManager_Allocate(*v2, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v13 = *(_QWORD*)(v7 + 8 * v6);
          v5 = v12 + 8 * v11;
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v13;
          v4 = &v8[v12 + 8];
          a1 = memcpy(v14, v3, v8);
          if (v3 != 0) {
            v15 = 128;
            if (*(_QWORD*)(*v2 + 200LL) == 0) {
              v15 = 56;
            }
            a1 = nn_mem_StandardAllocator_Free(*v2 + v15, v3);
          }
          v3 = v14;
        }
        ++v6;
      } while (v6 < *(unsigned __int16*)(v1 + 40));
    }
    else {
      v3 = 0;
    }
    v19 = v3;
    *(_QWORD*)(v18 + 216) = 0;
  }
  result = GameRoutine_87de80();
  if (v19 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v17 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v2 + v17, v19);
  }
  return result;
}

void ProcMainSeq_666ba0()
{
  int v0;
  __int64 v1;
  __int64 v2;
  __int64* v3;
  __int64 v4;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  struct {
    _QWORD v22[2];
    char* v23;
  } v22_;
  struct {
    __int64 v24[2];
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    int v29;
    char gap84_[4];
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    _QWORD v34[3];
  } v24_;

  if (game_GameModeData_instance_ == 0) {
    return;
  }
  v0 = *(_DWORD*)(game_GameModeData_instance_ + 92);
  if ((v0 & 0x20) != 0) {
    *(_DWORD*)(game_GameModeData_instance_ + 92) = v0 & 0xFFFFFFDF;
    return;
  }
  v1 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  if (v1 == 0) {
    return;
  }
  v2 = *(_QWORD*)(v1 + 120);
  if (v2 == 0) {
    return;
  }
  v3 = (__int64*)GameData_212c6a0[0];
  v4 = *(_QWORD*)GameData_212c6a0[0];
  if (*(_QWORD*)(v2 + 88) != 0) {
    v5 = *(const char**)(v2 + 88);
  }
  else {
    v5 = &GameData_1a9f09e;
  }
  v6 = strlen_alt1(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
    v22_.v22[1] = v7;
    v22_.v23 = v8;
    v22_.v22[0] = v9 | 1;
    goto LABEL_18;
  }
  LOBYTE(v22_.v22[0]) = 2 * v6;
  v8 = (char*)v22_.v22 + 1;
  if (v6 != 0) {
  LABEL_18:
    memmove_alt1((__int64)v8, (__int64)v5, v7);
  }
  v8[v7] = 0;
  v24_.v24[0] = 0;
  v24_.v24[1] = 0;
  v24_.v25 = 0;
  v24_.v26 = 0;
  v24_.v27 = 0;
  v24_.v28 = 0;
  v24_.v29 = 0;
  v24_.v30 = 0;
  v24_.v31 = 0;
  v24_.v32 = 0;
  v24_.v33 = 0;
  v24_.v34[2] = 0;
  v24_.v34[0] = 0;
  *(_QWORD*)((char*)v24_.v34 + 5) = 0;
  GameRoutine_dbced0_alt1(v24_.v24, (__int64)v22_.v22);
  *(_BYTE*)(v4 + 40) = 1;
  GameRoutine_d5d770_alt1(v4 + 48, (unsigned __int8*)v24_.v24);
  if ((v24_.v30 & 1) != 0 && v24_.v32 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v24_.v32);
  }
  if ((v24_.v26 & 1) != 0 && v24_.v28 != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v24_.v28);
  }
  if ((v24_.v24[0] & 1) != 0 && v24_.v25 != 0) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v24_.v25);
  }
  if ((v22_.v22[0] & 1) != 0 && v22_.v23 != nullptr) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v22_.v23);
  }
  v14 = *v3;
  *(_BYTE*)(v14 + 944) = 1;
  *(_QWORD*)(v14 + 936) = v1;
  v15 = *(_QWORD*)(*GameData_212c790 + 8);
  v16 = *(_DWORD*)(v15 + 56);
  v17 = *(__int64**)(v15 + 8);
  v18 = *(__int64**)(v15 + 16);
  if (v16 < 0) {
    if (v17 == v18) {
      return;
    }
    while (1) {
      v19 = *v17;
      if (*(_QWORD*)(*v17 + 96) == 0 && *(_QWORD*)(v19 + 552) == 0) {
        break;
      }
      if (++v17 == v18) {
        return;
      }
    }
  }
  else {
    if (v17 == v18) {
      return;
    }
    while (1) {
      v20 = *v17++;
      v19 = v20;
      if (*(_DWORD*)(v20 + 84) == v16) {
        break;
      }
      if (v17 == v18) {
        return;
      }
    }
  }
  v21 = game_gmap_SpotMgr_FindSpot_alt1((unsigned int*)v2);
  if (v21 != nullptr) {
    game_gmap_133f780(v19, v21, 1);
  }
}

void ProcMainSeq_666e80(__int64 a1)
{
  __int64 v2;
  __int16 v3;
  __int16 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[6];
  char v10;
  char v11;
  char v12;
  __int64 v13;
  __int64 v14;
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
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int16 v29;
  int v30;
  __int16 v31;
  __int16 v32;
  __int16 v33;

  v11 = 0;
  v12 = 0;
  memset(v9, 0, sizeof(v9));
  v10 = 0;
  v28 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  LOBYTE(v26) = 0;
  v13 = 0x500000005LL;
  if ((GameRoutine_eb7c20_alt1((__int64)v9,
                               *(_QWORD*)(game_GameModeData_instance_ + 24)) &
       1) != 0) {
    ProcCmdBtlSeq_e61c90_alt1((__int64)&GameData_2216780, (__int64)v9);
  }
  else if (game_GameModeData_instance_ != 0 &&
           *(_QWORD*)(game_GameModeData_instance_ + 24) != 0) {
    v2 = game_gmap_GmapClock_instance_ != 0
             ? game_gmap_GmapClock_instance_ + 8
             : game_gmap_GmapClock_kDefaultTime_ptr;
    v29 = *(_WORD*)v2;
    v30 = *(_DWORD*)(v2 + 2);
    v31 = *(_WORD*)(v2 + 6);
    v3 = *(_WORD*)(v2 + 8);
    v4 = *(_WORD*)(v2 + 10);
    v32 = v3;
    v33 = v4;
    if (GameRoutine_7160c0_alt2((_QWORD*)game_GameModeData_instance_)) {
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v6 = *(_DWORD*)(game_GameModeData_instance_ + 92);
        v7 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        *(_QWORD*)(game_GameModeData_instance_ + 16) = 0;
        *(_DWORD*)(v5 + 92) = v6 & 0xFFFFF863;
      }
      else {
        v7 = 0;
      }
      GameRoutine_8b6940_alt1(a1, &v29, v7);
      *(_DWORD*)(a1 + 152) = 16;
    }
  }
  if (v28 == 1 && v26 != 0) {
    v27 = v26;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v26);
  }
  GameHr_667c80((__int64)v9);
}

__int64 ProcMainSeq_667010(__int64 result)
{
  __int64 v1;

  if (game_GameModeData_instance_ != 0) {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v1 != 0 && *(_BYTE*)(v1 + 33) == 15 &&
        (*(_BYTE*)(game_GameModeData_instance_ + 92) & 4) != 0 &&
        *(_DWORD*)(result + 152) == 0) {
      *(_DWORD*)(result + 152) = 10;
    }
  }
  return result;
}

__int64 ProcMainSeq_667050(__int64 a1)
{
  __int64 result;

  result = game_GameConverge_Impl_CommonInfo_MergeRelay(
      game_GameModeData_instance_ + 168);
  if (*(_DWORD*)(game_GameRestartData_unknown_ + 1756) != 0) {
    if (game_GameModeData_instance_ != 0 &&
        *(_BYTE*)(game_GameModeData_instance_ + 15) == 9 &&
        (*(_DWORD*)(game_GameModeData_instance_ + 60) != 0 ||
         *(int*)(game_GameModeData_instance_ + 64) >= 3)) {
      GameConverge_8e7dc0(game_GameModeData_instance_ + 168);
    }
    GameRoutine_8ab6e0(4, 0);
    if (game_GameModeData_instance_ != 0 &&
        *(_BYTE*)(game_GameModeData_instance_ + 15) == 9 &&
        (*(_DWORD*)(game_GameModeData_instance_ + 60) != 0 ||
         *(int*)(game_GameModeData_instance_ + 64) >= 3)) {
      game_GameConverge_Impl_Commit(
          *(_QWORD*)(game_GameModeData_instance_ + 176));
    }
    if (GameData_21eea58 != 0) {
      *(_BYTE*)(GameData_21eea58 + 32) = 0;
    }
    return GameRoutine_8791a0_alt1(a1);
  }
  return result;
}

__int64 ProcMainSeq_667120(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _BYTE v3[32];
  _BYTE* v4;
  const char* v5;

  v5 = "MID_Clear_Message";
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

__int64 ProcMainSeq_6671a0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64** v8;
  __int64 v9;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  unsigned int v17;
  int v18;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if (v2 < 0) {
    if (v3 == v4) {
      return result;
    }
    v8 = (__int64**)v3;
    while (1) {
      v6 = *v8;
      if ((*v8)[12] == 0 && v6[69] == 0) {
        break;
      }
      if (++v8 == (__int64**)v4) {
        return result;
      }
    }
  }
  else {
    if (v3 == v4) {
      return result;
    }
    v5 = v3;
    while (1) {
      v7 = *v5++;
      v6 = (__int64*)v7;
      if (*(_DWORD*)(v7 + 84) == v2) {
        break;
      }
      if (v5 == v4) {
        return result;
      }
    }
  }
  v9 = *v6;
  if (*v6 != 0 && v3 != v4) {
    while (1) {
      v11 = (_QWORD*)*v3;
      if (*(_QWORD*)*v3 == v9) {
        v12 = v11[12];
        if (v12 != 0 && (unsigned int)*(unsigned __int8*)(v12 + 32) - 3 < 2) {
          break;
        }
      }
      if (++v3 == v4) {
        return result;
      }
    }
    v13 = *(_QWORD*)(v11[11] + 40LL);
    if (v13 != 0) {
      v14 = *(_QWORD*)(v13 + 56);
      if (v14 != 0) {
        v15 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
        LABEL_29:
          *(_DWORD*)(result + 152) = 2;
          return result;
        }
        v16 = *(_DWORD*)(game_GameModeData_instance_ + 92);
        *(_QWORD*)(game_GameModeData_instance_ + 16) = v14;
        v17 = v16 & 0xFFFFFC7F;
        *(_DWORD*)(v15 + 92) = v17;
        v18 = *(_DWORD*)(v14 + 184);
        if ((v18 & 0x800) != 0) {
          v17 |= 0x100u;
          *(_DWORD*)(v15 + 92) = v17;
          v18 = *(_DWORD*)(v14 + 184);
          if ((v18 & 0x40) == 0) {
          LABEL_26:
            if ((v18 & 0x80) == 0) {
            LABEL_28:
              *(_BYTE*)(v15 + 57) = *(_BYTE*)(v15 + 56);
              goto LABEL_29;
            }
          LABEL_27:
            *(_DWORD*)(v15 + 92) = v17 | 0x200;
            goto LABEL_28;
          }
        }
        else if ((v18 & 0x40) == 0) {
          goto LABEL_26;
        }
        v17 |= 0x80u;
        *(_DWORD*)(v15 + 92) = v17;
        if ((*(_DWORD*)(v14 + 184) & 0x80) == 0) {
          goto LABEL_28;
        }
        goto LABEL_27;
      }
    }
  }
  return result;
}

__int64 ProcMainSeq_667300(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  struct {
    int v7;
    __int16 v8;
    char v9;
    char gap7_[1];
    __int64 v10;
  } v7_;

  v2 = *(_QWORD*)GameData_2130de0;
  if (*(_QWORD*)GameData_2130de0 != 0) {
    v7_.v9 = 0;
    v7_.v10 = 0;
    v7_.v7 = 3;
    v7_.v8 = -1;
    GameRoutine_130dae0_alt1(v2, (__int64)&v7_.v7);
  }
  v3 = GameData_21c9650;
  if (GameData_21c9650 != 0) {
    v4 = *(_QWORD*)(GameData_21c9650 + 16);
    *(_DWORD*)(GameData_21c9650 + 88) = 0;
    *(_BYTE*)(v3 + 92) = 0;
    *(_DWORD*)(v3 + 94) = 0;
    *(_BYTE*)(v3 + 98) = 0;
    *(_DWORD*)(v3 + 100) = 0;
    *(_BYTE*)(v3 + 104) = 0;
    *(_DWORD*)(v3 + 216) = 0;
    *(_QWORD*)(v3 + 208) = 0;
    *(_QWORD*)(v3 + 24) = v4;
    *(_WORD*)(v3 + 106) = 255;
    *(_QWORD*)(v3 + 48) = *(_QWORD*)(v3 + 40);
    *(_QWORD*)(v3 + 72) = *(_QWORD*)(v3 + 64);
    *(_QWORD*)(v3 + 168) = *(_QWORD*)(v3 + 160);
    *(_QWORD*)(v3 + 192) = *(_QWORD*)(v3 + 184);
  }
  v5 = TimelineFile_890160_alt1(GameData_1ae568e_alt1);
  result = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = GameRoutine_715780_alt1(game_GameModeData_instance_, v5);
    if (game_GameModeData_instance_ != 0) {
      *(_BYTE*)(game_GameModeData_instance_ + 312) = 0;
    }
  }
  *(_DWORD*)(a1 + 152) = 16;
  return result;
}

__int64 ProcMainSeq_667400(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int16 v11;
  __int16 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int16 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int16 v23;
  int v24;
  __int16 v25;
  __int16 v26;
  __int16 v27;

  if (GameData_21eea58 != 0) {
    *(_BYTE*)(GameData_21eea58 + 32) = 0;
  }
  result = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    if ((v3 & 8) != 0) {
      v9 = 38;
    }
    else {
      v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 57);
      if (*(_BYTE*)(game_GameModeData_instance_ + 57) != 0 &&
          (*(_QWORD*)(game_GameModeData_instance_ + 16) = 0,
           *(_BYTE*)(result + 57) = 0, v3 &= 0xFFFFFC77,
           *(_DWORD*)(result + 92) = v3, *(_DWORD*)(a1 + 152) == 0)) {
        if (v4 == 4) {
          goto LABEL_50;
        }
        if (v4 == 6) {
          v9 = 6;
          goto LABEL_20;
        }
        if (v4 != 5) {
        LABEL_50:
          v9 = 4;
        }
        else {
          v9 = 5;
        }
      }
      else {
        if ((v3 & 4) == 0) {
          goto LABEL_8;
        }
        if (game_gmap_GmapClock_instance_ != 0) {
          v10 = game_gmap_GmapClock_instance_ + 8;
        }
        else {
          v10 = game_gmap_GmapClock_kDefaultTime_ptr;
        }
        v23 = *(_WORD*)v10;
        v24 = *(_DWORD*)(v10 + 2);
        v25 = *(_WORD*)(v10 + 6);
        v11 = *(_WORD*)(v10 + 8);
        v12 = *(_WORD*)(v10 + 10);
        v26 = v11;
        v27 = v12;
        result = GameRoutine_7160c0_alt2((_QWORD*)result);
        if ((result & 1) == 0) {
          return result;
        }
        v13 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v14 = *(_DWORD*)(game_GameModeData_instance_ + 92);
          v15 = *(_QWORD*)(game_GameModeData_instance_ + 24);
          *(_QWORD*)(game_GameModeData_instance_ + 16) = 0;
          *(_DWORD*)(v13 + 92) = v14 & 0xFFFFF863;
        }
        else {
          v15 = 0;
        }
        result = GameRoutine_8b6940_alt1(a1, &v23, v15);
        v9 = 16;
      }
    }
  LABEL_20:
    *(_DWORD*)(a1 + 152) = v9;
    return result;
  }
LABEL_8:
  v5 = *(_DWORD*)(a1 + 152);
  if (v5 != 0) {
    v6 = *(_QWORD*)(a1 + 192);
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 48LL))(v6);
      v5 = *(_DWORD*)(a1 + 152);
    }
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == v5) {
            v16 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v7;
            *(_WORD*)(a1 + 136) = v16 & 0xFF7F;
            v8 = *(_DWORD*)(a1 + 156);
            if (v8 == 0) {
              goto LABEL_45;
            }
            goto LABEL_29;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          break;
        }
        v7 += 64;
      }
    }
    v8 = *(_DWORD*)(a1 + 156);
    if (v8 != 0) {
    LABEL_29:
      v17 = *(_QWORD*)(a1 + 96);
      v18 = *(_QWORD*)(a1 + 104);
      v19 = ((v18 - v17) << 6) - 1;
      if (v18 == v17) {
        v19 = 0;
      }
      v20 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
      if (v19 == v20) {
        GameRoutine_658d60_alt1((__int64*)(a1 + 88));
        v17 = *(_QWORD*)(a1 + 96);
        v20 = *(_QWORD*)(a1 + 128) + *(_QWORD*)(a1 + 120);
      }
      *(_QWORD*)(*(_QWORD*)(v17 + 8 * (v20 >> 9)) + 8 * (v20 & 0x1FF)) =
          *(_QWORD*)(a1 + 16);
      ++*(_QWORD*)(a1 + 128);
      v21 = *(_QWORD*)(a1 + 8);
      if (v21 != 0) {
        while (1) {
          if (*(_BYTE*)v21 == 2) {
            if (*(_DWORD*)(v21 + 32) == v8) {
              *(_QWORD*)(a1 + 16) = v21;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              break;
            }
          }
          else if (*(_BYTE*)v21 == 0) {
            break;
          }
          v21 += 64;
        }
      }
    }
  LABEL_45:
    result = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (result == a1 + 160) {
      v22 = 32;
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v22))(
          (__int64)result);
    }
    if (result != 0) {
      v22 = 40;
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v22))(
          (__int64)result);
    }
  }
  return result;
}

__int64 game_anonymous_ProcMainSeq_TimelineRun_closure_Invoke()
{
  __int64 result;

  result = GameRoutine_8679c0();
  if (game_ProcGameSkipView_instance_ != 0) {
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 8u;
  }
  return result;
}

__int64 game_anonymous_ProcMainSeq_TimelineRun_closure0_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int16 v5;
  __int16 v7;
  int v8;
  __int16 v9;
  __int16 v10;
  __int16 v11;

  v2 = *a2;
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v4 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v7 = *(_WORD*)v4;
  v8 = *(_DWORD*)(v4 + 2);
  v9 = *(_WORD*)(v4 + 6);
  v5 = *(_WORD*)(v4 + 8);
  v11 = *(_WORD*)(v4 + 10);
  v10 = v5;
  if (game_GameModeData_instance_ != 0) {
    GameRoutine_715780_alt1(game_GameModeData_instance_, *(_QWORD*)(a1 + 8));
  }
  return GameRoutine_8b6940_alt1(v2, &v7, *(_QWORD*)(a1 + 8));
}

__int64 game_anonymous_ProcMainSeq_TimelineRun_closure1_Invoke(__int64 a1,
                                                               __int64* a2)
{
  __int64 v3;
  __int64 result;

  v3 = *a2;
  result = GameRoutine_88d3e0(*(_QWORD*)(a1 + 8));
  if ((result & 1) != 0) {
    result = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(result + 32) == 0) {
      return game_anonymous_TimelineCaller_RunImpl(result, v3, 0);
    }
  }
  return result;
}

__int64 game_anonymous_ProcMainSeq_TimelineRun_closure2_Invoke()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 result;

  v0 = (_QWORD*)game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v2 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
    v1 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
    v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
    v3 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
    v5 = v3 == v4;
    v6 = v1 - 1 + v2;
    v7 = v6 >> 7;
    v8 = v6 & 0x7F;
    v9 = 16 * (v3 - v4) - 1;
    v10 = *(_QWORD*)(v4 + 8 * v7);
    if (v5) {
      v9 = 0;
    }
    v11 = v10 + 32 * v8;
    *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
        *(_DWORD*)v11 & 0xFFFFFFFD |
        (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
    v0[21] = *(_QWORD*)(v11 + 24);
    v12 = *(_QWORD*)(v11 + 16);
    v0[27] = v1 - 1;
    v0[20] = v12;
    if ((unsigned __int64)(v9 - (v1 + v2) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
      v13 = *(_QWORD*)(v3 - 8);
      if (v13 != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
        v3 = v0[24];
      }
      v0[24] = v3 - 8;
    }
  }
  return result;
}

__int64 ProcMainSeq_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  *(_QWORD*)a1 = game_anonymous_ProcMainSeq_vtable;
  GameRoutine_8b51d0();
  v2 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a4c820(*msg_MessageManager_instance__ptr[0] + 14600);
  v3 = *v2;
  v4 = *(_QWORD*)(v3 + 14600);
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8), v4);
    *(_QWORD*)(v3 + 14600) = 0;
  }
  v6 = GameData_21fdd20;
  v5 = GameData_21fdd28;
  if (GameData_21fdd20 != GameData_21fdd28) {
    v7 = GameData_21fdd28;
    v8 = fw_memory_g_heap_manager_ptr;
    do {
      v9 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v5 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v11, v10);
        }
      }
      v5 = v7;
    } while (v7 != v6);
  }
  GameData_21fdd28 = v6;
  GameRoutine_a526f0(&GameData_21fdd38, GameData_21fdd40);
  v12 = *(_QWORD**)(a1 + 192);
  GameData_21fdd48 = 0;
  GameData_21fdd38 = (__int64)&GameData_21fdd40;
  GameData_21fdd40 = nullptr;
  *(_BYTE*)(a1 + 224) = 0;
  *(_QWORD*)a1 = GameData_1f8fe50;
  if (v12 == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_17;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);

LABEL_17:
  GameData_21c9600 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMainSeq_DeletingDestructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)a1 = game_anonymous_ProcMainSeq_vtable;
  GameRoutine_8b51d0();
  v2 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a4c820(*msg_MessageManager_instance__ptr[0] + 14600);
  v3 = *v2;
  v4 = *(_QWORD*)(v3 + 14600);
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8), v4);
    *(_QWORD*)(v3 + 14600) = 0;
  }
  v6 = GameData_21fdd20;
  v5 = GameData_21fdd28;
  v7 = fw_memory_g_heap_manager_ptr;
  if (GameData_21fdd20 != GameData_21fdd28) {
    v8 = GameData_21fdd28;
    do {
      v9 = *(_BYTE*)(v8 - 24);
      v8 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v5 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v11, v10);
        }
      }
      v5 = v8;
    } while (v8 != v6);
  }
  GameData_21fdd28 = v6;
  GameRoutine_a526f0(&GameData_21fdd38, GameData_21fdd40);
  v12 = *(_QWORD**)(a1 + 192);
  GameData_21fdd48 = 0;
  GameData_21fdd38 = (__int64)&GameData_21fdd40;
  GameData_21fdd40 = nullptr;
  *(_BYTE*)(a1 + 224) = 0;
  *(_QWORD*)a1 = GameData_1f8fe50;
  if (v12 == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_17;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);

LABEL_17:
  GameData_21c9600 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v14, a1);
}

__int64 ProcMainSeq_Unknown6()
{
  __int64 result;
  int v1;

  result = GameData_21c9648;
  v1 = *(_DWORD*)(GameData_21c9648 + 16);
  *(_DWORD*)(GameData_21c9648 + 16) = v1 + 1;
  if (v1 == 0) {
    return (**(__int64 (***)(__int64))(result + 8))(result + 8);
  }
  return result;
}

__int64 ProcMainSeq_Unknown7()
{
  __int64 result;
  int v1;

  result = GameData_21c9648;
  v1 = *(_DWORD*)(GameData_21c9648 + 16) - 1;
  *(_DWORD*)(GameData_21c9648 + 16) = v1;
  if (v1 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(result + 8);
  }
  return result;
}

__int64 ProcMainSeq_Unknown12(__int64 result)
{
  *(_DWORD*)(result + 152) = 40;
  return result;
}

#pragma GCC visibility pop
