#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_667c80(_QWORD);
__int64 GameRoutine_e61c90(__int64, __int64);
__int64 GameRoutine_eb9b60(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN GameData_2216780;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcCmdBtlSeq_Unknown12(__int64 result);
__int64 ProcCmdBtlSeq_Unknown21();
__int64 CmdBtlDispos_f35040(_QWORD);
__int64 CmdBtlSkipInput_1006910(_QWORD);
__int64 CmdbtlPartyNatives_eb9b60(_QWORD);
__int64 Field_1012ce0(_QWORD);
__int64 GameManager_a2c820(void);
__int64 GameRoutine_65a020(void);
__int64 GameRoutine_a2c9c0(_QWORD, _QWORD);
__int64 GameRoutine_e618a0();
__int64 GameRoutine_eab520(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_eacc20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ec0ae0(_QWORD);
__int64 GameRoutine_f82cf0(_QWORD);
__int64 Manager_e9a420(_QWORD);
__int64 ProcCmdBtlSeq_e61c90(__int64, __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21c9600;
extern __int64 GameData_21d3f90;
extern __int64 GameData_21ec7a8;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_2203490;
extern __int64 GameData_2219078;
extern __int64 GameData_2219080;
extern __int64 GameData_22190a0;
extern __int64 GameData_22190a8;
extern __int64 GameData_22190c0;
extern __int64 GameData_22190c8;
extern __int64 game_GameRestartData_unknown_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64* GameData_212dec0[4];
extern __int64* GameData_212ea58;
extern __int64* GameData_212f4e0[3];
extern __int64* game_sound_g_game_sound_ptr[5];
extern int GameData_221beb0;
void ProcCmdBtlSeq_e640b0();
__int64 ProcCmdBtlSeq_e64240(__int64 result);
bool ProcCmdBtlSeq_e64270();
__int64 ProcCmdBtlSeq_e64340(__int64 result);
__int64 ProcCmdBtlSeq_e64370(__int64 result);
__int64 ProcCmdBtlSeq_e644e0();
_QWORD* ProcCmdBtlSeq_e64540(__int64 a1);
__int64 ProcCmdBtlSeq_e64680(__int64 result);
void ProcCmdBtlSeq_e65d40();
__int64 ProcCmdBtlSeq_e66120(__int64 a1);
__int64 ProcCmdBtlSeq_e66160();
__int64 ProcCmdBtlSeq_e66170(__int64 a1);
__int64 ProcCmdBtlSeq_e66380(__int64 result);
__int64 ProcCmdBtlSeq_e663a0();
__int64 ProcCmdBtlSeq_e663e0(__int64 result);
__int64 ProcCmdBtlSeq_e66ca0();
__int64 game_cmdbtl_anonymous_ProcCmdBtlSeq_CheckOverTurn_closure_Invoke();
__int64 ProcCmdBtlSeq_Unknown8();
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__int64 CmdBtlDispos_f35040_alt1(__int64 result) __asm__("CmdBtlDispos_f35040");
__int64
CmdBtlSkipInput_1006910_alt1(__int64 result) __asm__("CmdBtlSkipInput_1006910");
__int64 CmdBtlSkipInput_1007060(_QWORD);
__int64 Field_1012ce0_alt1(__int64 result) __asm__("Field_1012ce0");
__int64 GameRoutine_1366820(__int64 result);
__int64 GameRoutine_137dd80(__int64);
__int64 GameRoutine_1553220(__int64 result);
__int64 GameRoutine_80f640(unsigned int);
__int64 GameRoutine_8b03f0(__int64, int, char);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, unsigned int);
__int64 GameRoutine_eb9380(unsigned __int8*, __int64);
__int64 GameVariable_828dc0(__int64, unsigned __int64*, int);
__int64 Manager_e9a420_alt1(__int64) __asm__("Manager_e9a420");
__int64 Message_16f9b50(_QWORD, _QWORD, _QWORD);
__int64 Unit_6df300(__int64 result, _BYTE*);
__int64 Unit_6df600(__int64, _BYTE*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameView_Update();
__int64 game_HashString(_QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_UnitPool_GetFirst(int*);
__n128 GameRoutine_18e5e60(__int64*);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _DWORD* GameData_212d168;
extern _DWORD* GameData_212f4f8;
extern _DWORD GameData_21d925c[32];
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_1a86410;
extern _UNKNOWN GameData_1a8a133;
extern _UNKNOWN GameData_1a95a42;
extern _UNKNOWN GameData_1aa16de;
extern _UNKNOWN GameData_1aa521d;
extern _UNKNOWN GameData_1ab4ca5;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64* GameData_212d450[8];
extern __int64* GameData_212d570[7];
extern __int64* GameData_212d578[6];
extern __int64* GameData_212f4e8[2];
extern __int64* GameData_212f4f0;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_212d240;
extern __int64 GameData_212eb28;
extern __int64 GameData_212f500[8];
extern __int64 GameData_212f508[7];
extern __int64 GameData_212f510[6];
extern __int64 GameData_212f518[5];
extern __int64 GameData_212f520[4];
extern __int64 GameData_212f528[3];
extern __int64 GameData_212f530[2];
extern __int64 GameData_212f538;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f1c78;
extern __int64 GameData_21f1c80;
extern __int64 GameData_21f1c90;
extern __int64 GameData_21f1c98;
extern __int64 GameData_21f1dc8;
extern __int64 GameData_21f61c0[];
extern __int64 GameData_21f8118;
extern __int64 GameData_21f8120;
extern __int64 GameData_2216820;
extern __int64 game_GameModeData_instance_;
extern __int64 ui_Manager_instance_;
extern char* GameData_1fa9470[9];
extern char GameData_1a9f09e;
extern char GameData_21f1dd8[];
extern char GameData_2216858;
extern int GameData_21d92dc;
extern int GameData_21f8110;
extern int GameData_21f8130;
extern unsigned __int8 GameData_2216780_alt1[] __asm__("GameData_2216780");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void CmdBtlUnit_e7ada0(__int64);
void CmdbtlPartyNatives_e9c620(_QWORD*, char);
void GameRoutine_1626450();
void GameRoutine_716420(__int64, unsigned __int8);
void GameRoutine_e80e80(__int64, float*);
void MapBattleHUD_Destructor(_QWORD*);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_e66f60();
__int64 ProcCmdBtlSeq_e64090(__int64 a1);
__int64 ProcCmdBtlSeq_e640e0();
void ProcCmdBtlSeq_e646c0();
__int64 ProcCmdBtlSeq_e64720();
__int64 ProcCmdBtlSeq_e64fa0(__int64 result);
__n128 ProcCmdBtlSeq_e65020();
unsigned __int64 ProcCmdBtlSeq_e65320(unsigned __int64 result);
void ProcCmdBtlSeq_e65e00(__int64 a1);
void ProcCmdBtlSeq_e661c0();
__int64 ProcCmdBtlSeq_e665e0(__int64 result);
void ProcCmdBtlSeq_e66bc0();
__int64 ProcCmdBtlSeq_Unknown20(__int64 a1, __int64 a2);
__int64 ProcCmdBtlSeq_Unknown7(__int64 a1, __int64 a2);

__int64 ProcCmdBtlSeq_e64090(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  _QWORD v9[2];
  const char* v10;
  void* v11;
  __int64 v12;
  __int64 v13;

  result = *(_QWORD*)GameData_212f520[0];
  if (*(_BYTE*)(*(_QWORD*)GameData_212f520[0] + 11LL) != 0) {
    v12 = v1;
    v13 = v2;
    v5 = result;
    v6 = a1;
    v11 = &GameData_1ab4ca5;
    result = game_HashString(&GameData_1ab4ca5);
    v10 = (const char*)result;
    v7 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
      if (result != 0) {
        v7 = *(_DWORD*)(result + 32);
      }
      else {
        v7 = 0;
      }
    }
    v8 = *(_DWORD*)(v5 + 24) + 1;
    *(_DWORD*)(v5 + 24) = v8;
    if (v8 >= v7) {
      CmdBtlSkipInput_1007060(v5);
      v10 = "MID_CmdBtl_SkipFailed_Message";
      v11 = ((__int128*)0x10LL) + 13;
      v9[0] = &GameData_1a9f09e;
      v9[1] = 0;
      return Message_16f9b50(v6, &v10, v9);
    }
  }
  return result;
}

void ProcCmdBtlSeq_e640b0()
{
  __int64 v0;

  v0 = GameData_22190a0;
  if (*(_BYTE*)(GameData_22190a0 + 14) == 1) {
    *(_BYTE*)(GameData_22190a0 + 14) = 0;
  }
  if (*(_BYTE*)(v0 + 10) == 1) {
    *(_BYTE*)(v0 + 10) = 0;
  }
}

__int64 ProcCmdBtlSeq_e640e0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  int v8;
  _BYTE v9[4];
  int v10;

  v10 = 267;
  result = game_UnitPool_GetFirst(&v10);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0 || (unsigned int)(v7 = *(unsigned __int8*)(v6 + 16)) > 8) {
      LABEL_12:
        v9[0] = 0;
        return Unit_6df300(result, v9);
      }
      while (1) {
        v8 = v7 + 1;
        if (((2 << v7) & 0x10A) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          goto LABEL_12;
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        v9[0] = 0;
        Unit_6df300(result, v9);
        v1 = *(_QWORD*)(v2 + 432);
        result = v2;
      } while (v1 != 0);
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 == 0) {
        break;
      }
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 > 8) {
        break;
      }
      while (1) {
        v5 = v4 + 1;
        if (((2 << v4) & 0x10A) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v4 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v4 = v5;
        if (v5 == 9) {
          goto LABEL_11;
        }
      }
      result = v2;
    }
  LABEL_11:
    result = v2;
    goto LABEL_12;
  }
  return result;
}

__int64 ProcCmdBtlSeq_e64240(__int64 result)
{
  if (GameData_21d3f90 != 0) {
    return GameRoutine_eacc20(
        result, 3, *(unsigned int*)(*GameData_212ea58 + 612), 0xFFFFFFFFLL);
  }
  return result;
}

bool ProcCmdBtlSeq_e64270()
{
  bool v0;
  __int64 v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;

  v1 = GameData_2203490;
  v2 = *(__int64**)(GameData_2203490 + 432);
  if (*(__int64**)(GameData_2203490 + 440) == v2) {
    return false;
  }
  v4 = *v2;
  v3 = v2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v4 != 0) {
    v0 = *(float*)(v1 + 456) < *(float*)(v4 + 28);
    if (v3 == 0) {
      goto LABEL_9;
    }
  }
  else if (v3 == 0) {
    goto LABEL_9;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak();
    if (v4 != 0) {
      return v0;
    }
    return false;
  }
LABEL_9:
  if (v4 == 0) {
    return false;
  }
  return v0;
}

__int64 ProcCmdBtlSeq_e64340(__int64 result)
{
  if (GameData_21d3f90 != 0) {
    return GameRoutine_eacc20(
        result, 4, *(unsigned int*)(*GameData_212ea58 + 612), 0xFFFFFFFFLL);
  }
  return result;
}

__int64 ProcCmdBtlSeq_e64370(__int64 result)
{
  int v1;
  int v2;
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  if (*(_QWORD*)(GameData_2203490 + 592) !=
      *(_QWORD*)(GameData_2203490 + 584)) {
    v1 = 9;
  LABEL_3:
    *(_DWORD*)(result + 152) = v1;
    return result;
  }
  v2 = *(_DWORD*)(GameData_2203490 + 1204);
  if ((v2 & 0x10) != 0 && *(int*)(GameData_2203490 + 612) <= 1) {
    *(_DWORD*)(GameData_2203490 + 1204) = v2 & 0xFFFFFFEF;
    v3 = GameData_221beb0 | 0x1F000;
  LABEL_19:
    GameData_221beb0 = v3;
    v1 = 7;
    goto LABEL_3;
  }
  if ((v2 & 0x100) != 0) {
    *(_DWORD*)(GameData_2203490 + 1204) = v2 & 0xFFFFFEFF;
    v1 = 6;
    goto LABEL_3;
  }
  v4 = *(_QWORD*)(GameData_2203490 + 1240);
  if (v4 != 0) {
    v5 = *(_QWORD*)(GameData_2203490 + 1232);
    v6 = result;
    v7 = *(_QWORD*)(GameData_2203490 + 1240);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak();
      }
      std___1___shared_weak_count___release_weak();
      result = v6;
      if (v5 != 0) {
        v1 = 5;
        goto LABEL_3;
      }
    }
    else {
      std___1___shared_weak_count___release_weak();
      result = v6;
    }
  }
  if (*(_DWORD*)(GameData_2203490 + 608) == 1) {
    v3 = GameData_221beb0 | 0x8002;
    goto LABEL_19;
  }
  v9 = result;
  result = GameRoutine_f82cf0(*GameData_212f4e0[0]);
  if ((result & 1) != 0) {
    *(_DWORD*)(v9 + 152) = 7;
  }
  else {
    *(_DWORD*)(v9 + 152) = 8;
  }
  return result;
}

__int64 ProcCmdBtlSeq_e644e0()
{
  unsigned int v0;
  unsigned int v1;

  LOBYTE(v0) = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ == 0) {
    return v0 & 1;
  }
  v1 = *(unsigned __int8*)(game_ProcGameSkipView_instance_ + 152);
  if (v1 <= 4) {
    v0 = 0x16u >> v1;
    return v0 & 1;
  }
  return 0;
}

void ProcCmdBtlSeq_e64510() { *(_BYTE*)(GameData_22190a8 + 8) = 0; }

_QWORD* ProcCmdBtlSeq_e64540(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  _QWORD* result;
  _QWORD* v6;
  int v7;
  __int64 v8;
  __int64 v9;

  v2 = *GameData_212ea58;
  v3 = *(_DWORD*)(*GameData_212ea58 + 1220);
  if ((unsigned int)(v3 - 4) < 2) {
    goto LABEL_10;
  }
  if ((unsigned int)(v3 - 6) < 2) {
    *(_DWORD*)(v2 + 1220) = 0;
    *(_BYTE*)(*GameData_212f4e0[0] + 8) = 1;
    v4 = GameData_22190a0;
    if (*(_BYTE*)(GameData_22190a0 + 14) == 1) {
      *(_BYTE*)(GameData_22190a0 + 14) = 0;
    }
    if (*(_BYTE*)(v4 + 10) == 1) {
      *(_BYTE*)(v4 + 10) = 0;
    }
    result = *(_QWORD**)(a1 + 192);
    v6 = (_QWORD*)(a1 + 160);
    v7 = 4;
    goto LABEL_12;
  }
  if (v3 == 3) {
    *(_DWORD*)(v2 + 608) = 1;
  LABEL_10:
    *(_DWORD*)(v2 + 1220) = 0;
    v6 = (_QWORD*)(a1 + 160);
    v7 = 3;
    *(_QWORD*)(a1 + 152) = 0;
    result = *(_QWORD**)(a1 + 192);
    goto LABEL_13;
  }
  result = *(_QWORD**)(a1 + 192);
  v6 = (_QWORD*)(a1 + 160);
  v7 = 11;
LABEL_12:
  *(_QWORD*)(a1 + 152) = 0;
LABEL_13:
  *(_QWORD*)(a1 + 192) = 0;
  if (result == v6) {
    v8 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_18;
    }
    v8 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v8))((__int64)result);
LABEL_18:
  v9 = *(_QWORD*)(a1 + 8);
  if (v9 != 0) {
    while (1) {
      if (*(_BYTE*)v9 == 2) {
        if (*(_DWORD*)(v9 + 32) == v7) {
          *(_QWORD*)(a1 + 16) = v9;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v9 == 0) {
        return result;
      }
      v9 += 64;
    }
  }
  return result;
}

__int64 ProcCmdBtlSeq_e64680(__int64 result)
{
  if (GameData_21d3f90 != 0) {
    return GameRoutine_eacc20(
        result, 5, *(unsigned int*)(*GameData_212ea58 + 612), 0xFFFFFFFFLL);
  }
  return result;
}

void ProcCmdBtlSeq_e646c0()
{
  if ((*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    if ((GameData_2216820 & 0x2000) == 0) {
      *(_DWORD*)(GameData_2203490 + 1204) |= 2u;
    }
  }
}

__int64 ProcCmdBtlSeq_e64720()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  unsigned int v35;
  __int64 result;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  unsigned int v41;
  __int64 v42;
  int v43;
  int v44;
  __int64 v45;
  unsigned int v46;
  unsigned int v47;
  __int64 v48;
  unsigned int v49;
  unsigned int v50;
  __int64 v51;
  unsigned int v52;
  unsigned int v53;
  __int64 v54;
  unsigned int v55;
  unsigned int v56;
  __int64 v57;
  unsigned int v58;
  unsigned int v59;
  __int64 v60;
  unsigned int v61;
  unsigned int v62;
  _BYTE v63[4];
  int v64;
  _BYTE v65[4];
  int v66;
  _BYTE v67[4];
  int v68;

  v68 = 267;
  v0 = game_UnitPool_GetFirst(&v68);
  if (v0 != 0) {
    v1 = *(_QWORD*)(v0 + 432);
    if (v1 == 0) {
      v42 = *(_QWORD*)(v0 + 440);
      if (v42 == 0 || (unsigned int)(v43 = *(unsigned __int8*)(v42 + 16)) > 8) {
      LABEL_12:
        v67[0] = 0;
        Unit_6df600(v0, v67);
        goto LABEL_13;
      }
      while (1) {
        v44 = v43 + 1;
        if (((2 << v43) & 0x10A) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v43 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v43 = v44;
        if (v44 == 9) {
          goto LABEL_12;
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        v67[0] = 0;
        Unit_6df600(v0, v67);
        v1 = *(_QWORD*)(v2 + 432);
        v0 = v2;
      } while (v1 != 0);
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 == 0) {
        break;
      }
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 > 8) {
        break;
      }
      while (1) {
        v5 = v4 + 1;
        if (((2 << v4) & 0x10A) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v4 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v4 = v5;
        if (v5 == 9) {
          goto LABEL_11;
        }
      }
      v0 = v2;
    }
  LABEL_11:
    v0 = v2;
    goto LABEL_12;
  }
LABEL_13:
  v66 = 267;
  v6 = game_UnitPool_GetFirst(&v66);
  if (v6 == 0) {
    goto LABEL_25;
  }
  v7 = *(_QWORD*)(v6 + 432);
  if (v7 != 0) {
    goto LABEL_15;
  }
  v45 = *(_QWORD*)(v6 + 440);
  if (v45 != 0) {
    v46 = *(unsigned __int8*)(v45 + 16);
    if (v46 <= 8) {
      while (1) {
        v47 = v46 + 1;
        if (((2 << v46) & 0x10A) != 0) {
          v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v46 + 1) + 556000);
          if (v7 != 0) {
            break;
          }
        }
        v46 = v47;
        if (v47 == 9) {
          goto LABEL_24;
        }
      }
      while (1) {
        do {
        LABEL_15:
          v8 = v7;
          v65[0] = 1;
          Unit_6df300(v6, v65);
          v7 = *(_QWORD*)(v8 + 432);
          v6 = v8;
        } while (v7 != 0);
        v9 = *(_QWORD*)(v8 + 440);
        if (v9 == 0) {
          break;
        }
        v10 = *(unsigned __int8*)(v9 + 16);
        if (v10 > 8) {
          break;
        }
        while (1) {
          v11 = v10 + 1;
          if (((2 << v10) & 0x10A) != 0) {
            v7 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                            24LL * (unsigned __int8)(v10 + 1) + 556000);
            if (v7 != 0) {
              break;
            }
          }
          v10 = v11;
          if (v11 == 9) {
            goto LABEL_23;
          }
        }
        v6 = v8;
      }
    LABEL_23:
      v6 = v8;
    }
  }
LABEL_24:
  v65[0] = 1;
  Unit_6df300(v6, v65);
LABEL_25:
  v64 = 267;
  v12 = game_UnitPool_GetFirst(&v64);
  if (v12 == 0) {
    goto LABEL_37;
  }
  v13 = *(_QWORD*)(v12 + 432);
  if (v13 != 0) {
    goto LABEL_27;
  }
  v48 = *(_QWORD*)(v12 + 440);
  if (v48 != 0) {
    v49 = *(unsigned __int8*)(v48 + 16);
    if (v49 <= 8) {
      while (1) {
        v50 = v49 + 1;
        if (((2 << v49) & 0x10A) != 0) {
          v13 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                           24LL * (unsigned __int8)(v49 + 1) + 556000);
          if (v13 != 0) {
            break;
          }
        }
        v49 = v50;
        if (v50 == 9) {
          goto LABEL_36;
        }
      }
      while (1) {
        do {
        LABEL_27:
          v14 = v13;
          v63[0] = 1;
          Unit_6df600(v12, v63);
          v13 = *(_QWORD*)(v14 + 432);
          v12 = v14;
        } while (v13 != 0);
        v15 = *(_QWORD*)(v14 + 440);
        if (v15 == 0) {
          break;
        }
        v16 = *(unsigned __int8*)(v15 + 16);
        if (v16 > 8) {
          break;
        }
        while (1) {
          v17 = v16 + 1;
          if (((2 << v16) & 0x10A) != 0) {
            v13 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                             24LL * (unsigned __int8)(v16 + 1) + 556000);
            if (v13 != 0) {
              break;
            }
          }
          v16 = v17;
          if (v17 == 9) {
            goto LABEL_35;
          }
        }
        v12 = v14;
      }
    LABEL_35:
      v12 = v14;
    }
  }
LABEL_36:
  v63[0] = 1;
  Unit_6df600(v12, v63);
LABEL_37:
  v66 = 267;
  v18 = game_UnitPool_GetFirst(&v66);
  if (v18 == 0) {
    goto LABEL_49;
  }
  v19 = *(_QWORD*)(v18 + 432);
  if (v19 != 0) {
    goto LABEL_39;
  }
  v51 = *(_QWORD*)(v18 + 440);
  if (v51 != 0) {
    v52 = *(unsigned __int8*)(v51 + 16);
    if (v52 <= 8) {
      while (1) {
        v53 = v52 + 1;
        if (((2 << v52) & 0x10A) != 0) {
          v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                           24LL * (unsigned __int8)(v52 + 1) + 556000);
          if (v19 != 0) {
            break;
          }
        }
        v52 = v53;
        if (v53 == 9) {
          goto LABEL_48;
        }
      }
      while (1) {
        do {
        LABEL_39:
          v20 = v19;
          v65[0] = 2;
          Unit_6df300(v18, v65);
          v19 = *(_QWORD*)(v20 + 432);
          v18 = v20;
        } while (v19 != 0);
        v21 = *(_QWORD*)(v20 + 440);
        if (v21 == 0) {
          break;
        }
        v22 = *(unsigned __int8*)(v21 + 16);
        if (v22 > 8) {
          break;
        }
        while (1) {
          v23 = v22 + 1;
          if (((2 << v22) & 0x10A) != 0) {
            v19 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                             24LL * (unsigned __int8)(v22 + 1) + 556000);
            if (v19 != 0) {
              break;
            }
          }
          v22 = v23;
          if (v23 == 9) {
            goto LABEL_47;
          }
        }
        v18 = v20;
      }
    LABEL_47:
      v18 = v20;
    }
  }
LABEL_48:
  v65[0] = 2;
  Unit_6df300(v18, v65);
LABEL_49:
  v64 = 267;
  v24 = game_UnitPool_GetFirst(&v64);
  if (v24 == 0) {
    goto LABEL_61;
  }
  v25 = *(_QWORD*)(v24 + 432);
  if (v25 != 0) {
    goto LABEL_51;
  }
  v54 = *(_QWORD*)(v24 + 440);
  if (v54 != 0) {
    v55 = *(unsigned __int8*)(v54 + 16);
    if (v55 <= 8) {
      while (1) {
        v56 = v55 + 1;
        if (((2 << v55) & 0x10A) != 0) {
          v25 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                           24LL * (unsigned __int8)(v55 + 1) + 556000);
          if (v25 != 0) {
            break;
          }
        }
        v55 = v56;
        if (v56 == 9) {
          goto LABEL_60;
        }
      }
      while (1) {
        do {
        LABEL_51:
          v26 = v25;
          v63[0] = 2;
          Unit_6df600(v24, v63);
          v25 = *(_QWORD*)(v26 + 432);
          v24 = v26;
        } while (v25 != 0);
        v27 = *(_QWORD*)(v26 + 440);
        if (v27 == 0) {
          break;
        }
        v28 = *(unsigned __int8*)(v27 + 16);
        if (v28 > 8) {
          break;
        }
        while (1) {
          v29 = v28 + 1;
          if (((2 << v28) & 0x10A) != 0) {
            v25 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                             24LL * (unsigned __int8)(v28 + 1) + 556000);
            if (v25 != 0) {
              break;
            }
          }
          v28 = v29;
          if (v29 == 9) {
            goto LABEL_59;
          }
        }
        v24 = v26;
      }
    LABEL_59:
      v24 = v26;
    }
  }
LABEL_60:
  v63[0] = 2;
  Unit_6df600(v24, v63);
LABEL_61:
  v66 = 267;
  v30 = game_UnitPool_GetFirst(&v66);
  if (v30 == 0) {
    goto LABEL_73;
  }
  v31 = *(_QWORD*)(v30 + 432);
  if (v31 != 0) {
    goto LABEL_63;
  }
  v57 = *(_QWORD*)(v30 + 440);
  if (v57 != 0) {
    v58 = *(unsigned __int8*)(v57 + 16);
    if (v58 <= 8) {
      while (1) {
        v59 = v58 + 1;
        if (((2 << v58) & 0x10A) != 0) {
          v31 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                           24LL * (unsigned __int8)(v58 + 1) + 556000);
          if (v31 != 0) {
            break;
          }
        }
        v58 = v59;
        if (v59 == 9) {
          goto LABEL_72;
        }
      }
      while (1) {
        do {
        LABEL_63:
          v32 = v31;
          v65[0] = 3;
          Unit_6df300(v30, v65);
          v31 = *(_QWORD*)(v32 + 432);
          v30 = v32;
        } while (v31 != 0);
        v33 = *(_QWORD*)(v32 + 440);
        if (v33 == 0) {
          break;
        }
        v34 = *(unsigned __int8*)(v33 + 16);
        if (v34 > 8) {
          break;
        }
        while (1) {
          v35 = v34 + 1;
          if (((2 << v34) & 0x10A) != 0) {
            v31 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                             24LL * (unsigned __int8)(v34 + 1) + 556000);
            if (v31 != 0) {
              break;
            }
          }
          v34 = v35;
          if (v35 == 9) {
            goto LABEL_71;
          }
        }
        v30 = v32;
      }
    LABEL_71:
      v30 = v32;
    }
  }
LABEL_72:
  v65[0] = 3;
  Unit_6df300(v30, v65);
LABEL_73:
  v64 = 267;
  result = game_UnitPool_GetFirst(&v64);
  if (result == 0) {
    return result;
  }
  v37 = *(_QWORD*)(result + 432);
  if (v37 != 0) {
    goto LABEL_75;
  }
  v60 = *(_QWORD*)(result + 440);
  if (v60 != 0) {
    v61 = *(unsigned __int8*)(v60 + 16);
    if (v61 <= 8) {
      while (1) {
        v62 = v61 + 1;
        if (((2 << v61) & 0x10A) != 0) {
          v37 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                           24LL * (unsigned __int8)(v61 + 1) + 556000);
          if (v37 != 0) {
            break;
          }
        }
        v61 = v62;
        if (v62 == 9) {
          goto LABEL_84;
        }
      }
      while (1) {
        do {
        LABEL_75:
          v38 = v37;
          v63[0] = 3;
          Unit_6df600(result, v63);
          v37 = *(_QWORD*)(v38 + 432);
          result = v38;
        } while (v37 != 0);
        v39 = *(_QWORD*)(v38 + 440);
        if (v39 == 0) {
          break;
        }
        v40 = *(unsigned __int8*)(v39 + 16);
        if (v40 > 8) {
          break;
        }
        while (1) {
          v41 = v40 + 1;
          if (((2 << v40) & 0x10A) != 0) {
            v37 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                             24LL * (unsigned __int8)(v40 + 1) + 556000);
            if (v37 != 0) {
              break;
            }
          }
          v40 = v41;
          if (v41 == 9) {
            goto LABEL_83;
          }
        }
        result = v38;
      }
    LABEL_83:
      result = v38;
    }
  }
LABEL_84:
  v63[0] = 3;
  return Unit_6df600(result, v63);
}

__int64 ProcCmdBtlSeq_e64fa0(__int64 result)
{
  __int64 v1;

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 0x10) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0 &&
      ((GameData_2216820 & 8) == 0 || *(_BYTE*)(GameData_21f4cc0 + 13) != 0)) {
    v1 = GameData_22190c0;
    *(_BYTE*)(result + 219) = *(_BYTE*)(GameData_22190c0 + 11);
    return CmdBtlSkipInput_1006910_alt1(v1);
  }
  return result;
}

__n128 ProcCmdBtlSeq_e65020()
{

#pragma clang fp contract(off)
  __int64* v0;
  __n128 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
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
  __int64 v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
    char v25;
    char gap17_[15];
    char v26;
    char gap33_[15];
    __int64 v27;
    int v28;
    char gap60_[4];
    __int128 v29;
    char v30;
    char gap81_[3];
    int v31;
    char v32;
  } v23_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((GameData_2216820 & 0x10) == 0 &&
      (*(_BYTE*)(*GameData_212dec0[0] + 12) & 1) == 0 &&
      ((GameData_2216820 & 8) == 0 ||
       *(_BYTE*)(*GameData_212dec0[0] + 13) != 0)) {
    v0 = GameData_212ea58;
    CmdbtlPartyNatives_e9c620((_QWORD*)*GameData_212ea58, 0),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212f530[0] + 8LL);
    v3 = *(_QWORD*)(*(_QWORD*)GameData_212f530[0] + 16LL);
    v4 = v3 - v2;
    if (v3 != v2) {
      if (v4 < 0) {
        GameRoutine_e66f60(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v5 = fw_memory_g_heap_manager_ptr;
      v6 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v4, 16, 0),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = (__int64*)v6;
      v8 = 0;
      do {
        v9 = v2 + v8;
        v10 = (_QWORD*)(v6 + v8);
        *v10 = *(_QWORD*)(v2 + v8);
        v11 = *(_QWORD*)(v2 + v8 + 8);
        v10[1] = v11;
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                    memory_order_relaxed);
        }
        v8 += 16;
      } while (v9 + 16 != v3);
      v23_.v26 = 0;
      v23_.v28 = 0;
      v23_.v25 = 0;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v22 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v22;
        __cxa_guard_release(&GameData_21a6130),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v23_.v30 = 0;
      v23_.v29 = GameData_21a6120;
      v23_.v31 = 1109393408;
      v23_.v32 = 1;
      v13 = *v7;
      v12 = v7[1];
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
      }
      v23_.v23 = v13;
      v23_.v24 = v12;
      v14 = *v0;
      v23_.v27 = 3248488448LL;
      GameRoutine_e80e80(v14 + 16, (float*)&v23_.v23),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v15 = v7[1];
      if (v15 != 0 && (v16 = std___1___shared_weak_count_lock(v15)) != 0) {
        v17 = v16;
        v18 = *v7;
        if ((*(_BYTE*)(*v7 + 172) & 1) == 0) {
          *(_BYTE*)(v18 + 172) = 1;
        }
        *(_DWORD*)(v18 + 136) = 1131178864;
        *(_DWORD*)(v18 + 144) = 0;
        *(_BYTE*)(v18 + 152) = 0;
        *(_BYTE*)(v18 + 156) = 0;
        *(_BYTE*)(v18 + 160) = 0;
        *(_BYTE*)(v18 + 164) = 0;
        *(_BYTE*)(v18 + 168) = 0;
        *(_BYTE*)(v18 + 140) = 1;
        *(_BYTE*)(v18 + 148) = 1;
        CmdBtlUnit_e7ada0(v18),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v17),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      else {
        if (((*(_UNKNOWN*)0xACLL) & 1) == 0) {
          (*(_UNKNOWN*)0xACLL) = 1;
        }
        (*(_DWORD*)0x88LL) = 1131178864;
        (*(_UNKNOWN*)0x8CLL) = 1;
        *(((_BYTE*)0x90LL) + 4) = (*(_UNKNOWN*)0x8CLL);
        (*(_BYTE*)0x90LL) = 0;
        (*(_UNKNOWN*)0x98LL) = 0;
        (*(_BYTE*)0x9CLL) = 0;
        (*(_BYTE*)0xA0LL) = 0;
        (*(_BYTE*)0xA4LL) = 0;
        *(((_BYTE*)0xA4LL) + 4) = 0;
        CmdBtlUnit_e7ada0(0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v19 = v8 - 8;
      if (v23_.v24 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v23_.v24),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      do {
        v20 = *(__int64*)((char*)v7 + v19);
        if (v20 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v20),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v19 -= 16;
      } while (v19 != -8);
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v21 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v5 + v21);
    }
  }
  return result;
}

unsigned __int64 ProcCmdBtlSeq_e65320(unsigned __int64 result)
{
  unsigned __int64 v1;
  _DWORD* v2;
  __int64 v3;
  unsigned int v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  struct {
    __int64 v9;
    void* v10;
  } v9_;

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 0x10) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) == 0 &&
      ((GameData_2216820 & 8) == 0 || *(_BYTE*)(GameData_21f4cc0 + 13) != 0)) {
    v1 = result;
    GameRoutine_137dd80(result);
    v2 = (_DWORD*)GameData_21f4cc0;
    v9_.v10 = &GameData_1a86410;
    v3 = game_HashString_alt1((__int64)&GameData_1a86410);
    v4 = v2[4];
    v9_.v9 = v3;
    GameRoutine_9b11a0(GameData_21f61c0, (unsigned __int64*)&v9_.v9, v4);
    v9_.v10 = &GameData_1aa521d;
    v5 = game_HashString_alt1((__int64)&GameData_1aa521d);
    v6 = v2[5];
    v9_.v9 = v5;
    GameRoutine_9b11a0(GameData_21f61c0, (unsigned __int64*)&v9_.v9, v6);
    v9_.v10 = &GameData_1a8a133;
    v7 = game_HashString_alt1((__int64)&GameData_1a8a133);
    v8 = v2[6];
    v9_.v9 = v7;
    GameRoutine_9b11a0(GameData_21f61c0, (unsigned __int64*)&v9_.v9, v8);
    v9_.v10 = &GameData_1aa16de;
    v9_.v9 = game_HashString_alt1((__int64)&GameData_1aa16de);
    result =
        GameRoutine_9b11a0(GameData_21f61c0, (unsigned __int64*)&v9_.v9, 1u);
    if (*(_BYTE*)(v1 + 219) == 1) {
      v9_.v10 = &GameData_1a95a42;
      result = game_HashString_alt1((__int64)&GameData_1a95a42);
      v9_.v9 = result;
      if (game_GameModeData_instance_ != 0) {
        return GameVariable_828dc0(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   (unsigned __int64*)&v9_.v9, 1);
      }
    }
  }
  return result;
}

void ProcCmdBtlSeq_e65d40()
{
  __int64** v0;
  __int64** i;
  __int64 v2;
  int v3;
  int v4;

  v0 = *(__int64***)(GameData_2219080 + 32);
  for (i = *(__int64***)(GameData_2219080 + 40); v0 != i; v0 += 2) {
    v2 = **v0;
    if (v2 != 0 && *((_BYTE*)*v0 + 17) == 1) {
      v3 = *(_DWORD*)(v2 + 2184);
      if (v3 <= -1) {
        v3 = -1;
      }
      if ((unsigned int)(v3 + 1) < 0x1869F) {
        v4 = v3 + 1;
      }
      else {
        v4 = 99999;
      }
      *(_DWORD*)(v2 + 2184) = v4;
    }
  }
}

void ProcCmdBtlSeq_e65e00(__int64 a1)
{
  int v1;
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int* v9;
  __int64 v10;
  int v11;
  __int64 (*v12)();
  int v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int* v17;
  int v18;
  bool v19;
  unsigned __int64 v20;
  int v21;
  int* v22;
  __int64 v23;
  int* v24;
  unsigned __int64 v25;
  int v26;
  int v27;
  int* v28;
  __int64 v29;
  int* v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  struct {
    __int64 (*v37)();
    __int64 (*v38)();
  } v37_;

  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  if ((GameData_2216820 & 0x400000) != 0) {
    v1 = *(unsigned __int8*)(GameData_21f4cc0 + 9);
    if ((v1 & 1) != 0 || (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) != 0 ||
        (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) != 0) {
      if ((*(unsigned __int8*)(GameData_21f4cc0 + 12) | v1) != 0 ||
          (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) != 0 ||
          (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) != 0 ||
          *(_BYTE*)(GameData_21f4cc0 + 8) == 0) {
        return;
      }
    }
    else if ((*(_BYTE*)(GameData_21f4cc0 + 8) & 1) == 0 ||
             (*(_BYTE*)(GameData_21f4cc0 + 12) & 1) != 0) {
      return;
    }
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    v3 = *(_DWORD*)(v2 + 56);
    v4 = *(__int64**)(v2 + 8);
    v5 = *(__int64**)(v2 + 16);
    if (v3 < 0) {
      if (v4 != v5) {
        while (1) {
          v6 = *v4;
          if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
            break;
          }
          if (++v4 == v5) {
            goto LABEL_20;
          }
        }
      LABEL_25:
        v9 = *(unsigned int**)v6;
        if (*(_QWORD*)v6 == 0) {
          return;
        }
      LABEL_26:
        v10 = a1;
        GameRoutine_134b980((void*)(&v37_.v37), (__int64 (*)())v9);
        if (v37_.v37 == v37_.v38) {
          v11 = 0;
        }
        else {
          v11 = 0;
          v12 = v37_.v37;
          do {
            v14 = *(_QWORD*)(*(_QWORD*)v12 + 96LL);
            if (v14 != 0) {
              if (game_GameModeData_instance_ != 0) {
                v13 = *(unsigned __int16*)(v14 + 134);
                LODWORD(v14) = *(unsigned __int8*)(v14 + 133);
                if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                  LODWORD(v14) = v13;
                }
              }
              else {
                LODWORD(v14) = *(unsigned __int8*)(v14 + 133);
              }
            }
            v11 += v14;
            v12 = (__int64 (*)())((char*)v12 + 8);
          } while (v12 != v37_.v38);
        }
        if (v37_.v37 != nullptr) {
          v37_.v38 = v37_.v37;
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
        }
        if (v11 >= 1) {
          if (game_GameModeData_instance_ != 0) {
            v16 = *(_DWORD*)(game_GameModeData_instance_ + 60);
            v17 = &GameData_21f8110;
            if (v16 == 2) {
              v20 =
                  (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >> 2;
            }
            else if (v16 == 3) {
              v18 = *(_DWORD*)(game_GameModeData_instance_ + 64);
              v19 = v18 <= 1;
              if (v18 <= 1) {
                LODWORD(v20) = 1;
              }
              else {
                LODWORD(v20) =
                    (unsigned __int64)(GameData_21f8120 - GameData_21f8118) >>
                    2;
              }
              if (!v19) {
                v17 = &GameData_21f8130;
              }
            }
            else {
              LODWORD(v20) = 1;
            }
            v24 = v17 + 2;
            v23 = *((_QWORD*)v17 + 1);
            v25 = (unsigned __int64)(*((_QWORD*)v24 + 1) - v23) >> 2;
            if ((int)v20 < (int)v25) {
              LODWORD(v25) = v20;
            }
            v26 = v25 - 1;
            if ((int)v20 <= 0) {
              v27 = 0;
            }
            else {
              v27 = v26;
            }
            v21 = *(_DWORD*)(v23 + 4LL * v27);
            v28 = &GameData_21f8110;
            if (v16 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
              v28 = &GameData_21f8130;
            }
            v30 = v28 + 2;
            v29 = *((_QWORD*)v28 + 1);
            v31 = (unsigned __int64)(*((_QWORD*)v30 + 1) - v29) >> 2;
            if ((int)v31 <= 1) {
              LODWORD(v31) = 1;
            }
            v32 = v29 + 4LL * (unsigned int)v31;
            v33 = *(_DWORD*)(game_GameModeData_instance_ + 76);
            v34 = *(_DWORD*)(v32 - 4);
            if (v34 >= v33) {
              v34 = *(_DWORD*)(game_GameModeData_instance_ + 76);
            }
            if (v33 >= v21) {
              v21 = v34;
            }
            v22 = &GameData_21f8110;
            if (v16 == 3 && *(int*)(game_GameModeData_instance_ + 64) > 1) {
              v22 = &GameData_21f8130;
            }
          }
          else {
            v21 = 0;
            v22 = &GameData_21f8110;
          }
          v35 = *((_QWORD*)v22 + 1);
          v36 = (unsigned __int64)(*((_QWORD*)v22 + 2) - v35) >> 2;
          if ((int)v36 <= 1) {
            LODWORD(v36) = 1;
          }
          if (v21 < *(_DWORD*)(v35 + 4LL * (unsigned int)v36 - 4)) {
            GameRoutine_8b03f0(v10, v11, 0);
          }
        }
        return;
      }
    }
    else {
      while (v4 != v5) {
        v7 = *v4++;
        v6 = v7;
        if (*(_DWORD*)(v7 + 84) == v3) {
          goto LABEL_25;
        }
      }
    }
  LABEL_20:
    v8 = a1;
    v9 = game_gmap_SpotMgr_GetCurrentSpot();
    a1 = v8;
    if (v9 == nullptr) {
      return;
    }
    goto LABEL_26;
  }
}

__int64 ProcCmdBtlSeq_e66120(__int64 a1)
{
  _QWORD v2[3];

  memset(v2, 0, sizeof(v2));
  return GameRoutine_eab520(a1, "CmdBtlEnding", v2);
}

__int64 ProcCmdBtlSeq_e66160()
{
  __int64 v0;
  __int64 v1;
  __int64 result;
  __int64 v3;
  __int64* v4;
  int v5;
  int v6;
  _BYTE v7[200];
  __int64 v8;
  __int64 v9;

  result = GameData_21ec7a8;
  if (*(_BYTE*)(GameData_21ec7a8 + 8) != 0) {
    v8 = v0;
    v9 = v1;
    v3 = GameData_21ec7a8;
    snd_Fade_Fade_10cb00(v7, "FadeTime_BGM_CmdBtl_GameOver_Out");
    v4 = game_sound_g_game_sound_ptr[0];
    GameRoutine_a2c9c0(*game_sound_g_game_sound_ptr[0], v7);
    result = snd_Fade_Destroy_Fade(v7);
    v5 = *(unsigned __int8*)(v3 + 10);
    *(_BYTE*)(v3 + 8) = 0;
    if (v5 == 1) {
      snd_Fade_Fade_10cb00(v7, "FadeTime_BGM_CmdBtl_GameOver_Out");
      v6 = *(_DWORD*)(*v4 + 628);
      if (v6 != 0) {
        *(_DWORD*)(*v4 + 628) = v6 - 1;
        GameManager_a2c820();
      }
      return snd_Fade_Destroy_Fade(v7);
    }
  }
  return result;
}

__int64 ProcCmdBtlSeq_e66170(__int64 a1)
{
  __int64 v1;

  v1 = GameData_22190c0;
  *(_BYTE*)(a1 + 219) = *(_BYTE*)(GameData_22190c0 + 11);
  return CmdBtlSkipInput_1006910(v1);
}

void ProcCmdBtlSeq_e66190() { *(_BYTE*)(*GameData_212dec0[0] + 11) = 1; }

void ProcCmdBtlSeq_e661c0()
{
  __int64 v0;

  v0 = GameData_21ec7a8;
  if (*(_BYTE*)(GameData_21ec7a8 + 9) != 0) {
    if ((GameData_2216858 & 1) == 0) {
      GameRoutine_8123d0();
    }
    GameRoutine_80f640((GameData_2216820 & 0x20) == 0);
    *(_BYTE*)(v0 + 9) = 0;
  }
}

__int64 ProcCmdBtlSeq_e66380(__int64 result)
{
  if (*(_BYTE*)(result + 218) != 0) {
    *(_BYTE*)(result + 218) = 0;
    return Field_1012ce0(GameData_2219078);
  }
  return result;
}

__int64 ProcCmdBtlSeq_e663a0()
{
  Manager_e9a420(GameData_2203490);
  return CmdBtlDispos_f35040(GameData_22190c8);
}

__int64 ProcCmdBtlSeq_e663e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  _QWORD v5[5];

  if ((*(_BYTE*)(GameData_21f4cc0 + 9) & 1) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 10) & 1) == 0 &&
      (*(_BYTE*)(GameData_21f4cc0 + 11) & 1) == 0) {
    if ((*(_BYTE*)(GameData_21f4cc0 + 8) & 1) == 0) {
      return result;
    }
  LABEL_19:
    v5[3] = v1;
    v5[4] = v2;
    memset(v5, 0, 24);
    return GameRoutine_eab520(result, "Ending", v5);
  }
  if (*(_BYTE*)(GameData_21f4cc0 + 10) != 0) {
    v3 = 3;
  }
  else {
    v3 = 2;
  }
  if (*(_BYTE*)(GameData_21f4cc0 + 12) != 0) {
    v3 = 4;
  }
  if ((((unsigned __int8)(*(_BYTE*)(GameData_21f4cc0 + 12) |
                          *(_BYTE*)(GameData_21f4cc0 + 9)) |
        *(_BYTE*)(GameData_21f4cc0 + 10)) &
       1) == 0) {
    v3 = 5;
    if ((*(_BYTE*)(GameData_21f4cc0 + 11) & 1) == 0) {
      v3 = *(unsigned __int8*)(GameData_21f4cc0 + 8);
    }
  }
  if (v3 == 4 || v3 == 1) {
    goto LABEL_19;
  }
  return result;
}

__int64 ProcCmdBtlSeq_e665e0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64* v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  long double v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64* v20;
  _QWORD* v21;
  _QWORD* v22;
  __n128 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64* v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  int* v35;
  __int64 i;
  __int64 v37;
  __int64 v38;
  int v39;
  int* v40;
  __int64 j;
  __int64 v42;
  __int64 v43;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_BYTE*)(result + 216) != 0) {
    *(_BYTE*)(result + 216) = 0;
    v1 = result;
    v2 = GameData_212ea58;
    Manager_e9a420_alt1(*GameData_212ea58),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v3 = (_QWORD*)GameData_212f528[0];
    CmdBtlDispos_f35040_alt1(*(_QWORD*)GameData_212f528[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = GameData_212d450[0];
    v5 = *GameData_212d450[0];
    if (*(_BYTE*)(*GameData_212d450[0] + 9) != 0) {
      if ((GameData_2216858 & 1) == 0) {
        GameRoutine_8123d0(),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      GameRoutine_80f640((GameData_2216820 & 0x20) == 0),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_BYTE*)(v5 + 9) = 0;
    }
    if (*(_BYTE*)(v1 + 217) == 1) {
      *(_BYTE*)(v1 + 217) = 0;
      v6 = (_QWORD*)GameData_212eb28;
      (*(void (**)(_QWORD))(**(_QWORD**)GameData_212eb28 + 24LL))(
          *(_QWORD*)GameData_212eb28),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (*v6 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v6 + 8LL))(*v6),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *v6 = 0;
    }
    v7 = (_QWORD*)GameData_212f500[0];
    if (*(_BYTE*)(v1 + 218) != 0) {
      v8 = *(_QWORD*)GameData_212f500[0];
      *(_BYTE*)(v1 + 218) = 0;
      Field_1012ce0_alt1(v8),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v9 = GameData_212d578[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d578[0] + 24LL))(
        *GameData_212d578[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v9 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v9 + 8LL))(*v9),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v9 = 0;
    v11 = GameData_212d570[0];
    v12 = fw_memory_g_heap_manager_ptr;
    if (*GameData_212d570[0] != 0) {
      MapBattleHUD_Destructor(*(_QWORD**)GameData_212d570[0]),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
        v13 = 56;
      }
      *(__n128*)&v10 = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v13),
      v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v11 = 0;
    v14 = (_QWORD*)GameData_212f538;
    (*(void (**)(_QWORD, long double))(**(_QWORD**)GameData_212f538 + 24LL))(
        *(_QWORD*)GameData_212f538, v10),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v14 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v14 + 8LL))(*v14),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v14 = 0;
    v15 = (_QWORD*)GameData_212d240;
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d240 + 24LL))(
        *(_QWORD*)GameData_212d240),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v15 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v15 + 8LL))(*v15),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v15 = 0;
    v16 = (_QWORD*)GameData_212f530[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212f530[0] + 24LL))(
        *(_QWORD*)GameData_212f530[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v16 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v16 + 8LL))(*v16),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v17 = *v3;
    *v16 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v17 + 24LL))(v17),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v3 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v3 + 8LL))(*v3),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v3 = 0;
    v18 = (_QWORD*)GameData_212f520[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212f520[0] + 24LL))(
        *(_QWORD*)GameData_212f520[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v18 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v18 + 8LL))(*v18),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v18 = 0;
    v19 = (_QWORD*)GameData_212f518[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212f518[0] + 24LL))(
        *(_QWORD*)GameData_212f518[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v19 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v19 + 8LL))(*v19),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v19 = 0;
    v20 = GameData_212dec0[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212dec0[0] + 24LL))(
        *GameData_212dec0[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v20 + 8LL))(*v20),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v20 = 0;
    v21 = (_QWORD*)GameData_212f510[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212f510[0] + 24LL))(
        *(_QWORD*)GameData_212f510[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v21 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v21 + 8LL))(*v21),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v21 = 0;
    v22 = (_QWORD*)GameData_212f508[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212f508[0] + 24LL))(
        *(_QWORD*)GameData_212f508[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v22 != 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)*v22 + 8LL))(*v22),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v22 = 0;
    v24 = *(_QWORD*)(*eft_g_effectSystem_ptr[0] + 296);
    v25 = *(__int64**)(v24 - 48);
    v26 = *(__int64**)(v24 - 40);
    if (v25 != v26) {
      do {
        v23 = GameRoutine_18e5e60(v25),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v25 += 6;
      } while (v25 != v26);
      v25 = *(__int64**)(v24 - 48);
      v26 = *(__int64**)(v24 - 40);
    }
    for (; v26 != v25; v26 -= 6) {
      if ((*(_BYTE*)(v26 - 4) & 1) != 0 && *(v26 - 2) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) != 0) {
          v27 = 128;
        }
        else {
          v27 = 56;
        }
        v23 = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v27),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    *(_QWORD*)(v24 - 40) = v25;
    v28 = *v7;
    if (*v7 != 0 && (*GameData_212f4f8)-- <= 1) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v28 + 24LL))(
          v28, *(long double*)&v23),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (*v7 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v7 + 8LL))(*v7),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      *v7 = 0;
    }
    v30 = GameData_212f4f0;
    (*(void (**)(_QWORD, long double))(*(_QWORD*)*GameData_212f4f0 + 24LL))(
        *GameData_212f4f0, *(long double*)&v23),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v30 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v30 + 8LL))(*v30),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v30 = 0;
    v31 = GameData_212f4e8[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212f4e8[0] + 24LL))(
        *GameData_212f4e8[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v31 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v31 + 8LL))(*v31),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v31 = 0;
    v32 = GameData_212f4e0[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212f4e0[0] + 24LL))(
        *GameData_212f4e0[0]),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v32 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v32 + 8LL))(*v32),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v33 = *v4;
    *v32 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v33 + 24LL))(v33),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v4 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v4 + 8LL))(*v4),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v34 = *v2;
    *v4 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v34 + 24LL))(v34),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2),
          v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    *v2 = 0;
    GameRoutine_1626450(),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    GameRoutine_1553220(16),
        v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v35 = (int*)GameData_21f1c90;
    for (i = GameData_21f1c98; v35 != (int*)i; ++v35) {
      v37 = *v35;
      if (*((_BYTE*)&GameData_21f1dc8 + v37) == 1) {
        v38 = ui_Manager_instance_ + 376LL * (unsigned int)v37;
        v39 = *(_DWORD*)(v38 + 1636);
        *(_DWORD*)(v38 + 1632) = 1;
        *(_DWORD*)(v38 + 1636) = v39 - 1;
        *((_BYTE*)&GameData_21f1dc8 + v37) = 0;
      }
    }
    v40 = (int*)GameData_21f1c78;
    for (j = GameData_21f1c80; v40 != (int*)j; ++v40) {
      v42 = *v40;
      if (GameData_21f1dd8[v42] == 1) {
        GameRoutine_1366820((__int64)GameData_1fa9470[v42]),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameData_21f1dd8[v42] = 0;
      }
    }
    v43 = --GameData_21d92dc;
    *GameData_212d168 = GameData_21d925c[v43];
    return game_GameView_Update();
  }
  return result;
}

void ProcCmdBtlSeq_e66bc0()
{
  __int64 v0;
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
  unsigned __int8 v11;
  __int64 v12;
  unsigned __int8 v13;
  __int64 v14;

  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 2696);
    v2 = *(_QWORD*)(game_GameModeData_instance_ + 2688);
    v3 = *(_QWORD*)(game_GameModeData_instance_ + 2664);
    v4 = *(_QWORD*)(game_GameModeData_instance_ + 2672);
    v5 = v4 == v3;
    v6 = v1 - 1 + v2;
    v7 = v6 >> 12;
    v8 = v6 & 0xFFF;
    v9 = ((v4 - v3) << 9) - 1;
    v10 = *(_QWORD*)(v3 + 8 * v7);
    if (v5) {
      v9 = 0;
    }
    v11 = *(_BYTE*)(v10 + v8);
    *(_QWORD*)(game_GameModeData_instance_ + 2696) = v1 - 1;
    if ((unsigned __int64)(v9 - (v1 + v2) + 1) >= 0x2000) {
      if (*(_QWORD*)(v4 - 8) != 0) {
        v12 = v0;
        v13 = v11;
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
        v4 = *(_QWORD*)(v12 + 2672);
        v11 = v13;
        v0 = v12;
      }
      *(_QWORD*)(v0 + 2672) = v4 - 8;
    }
    GameRoutine_716420(v0, v11);
  }
}

__int64 ProcCmdBtlSeq_e66ca0()
{
  __int64 result;
  __int64 v1;

  if (*(_DWORD*)(game_GameRestartData_unknown_ + 3228) != 0) {
    result = GameRoutine_65a020();
    v1 = game_GameRestartData_unknown_;
    if (*(_DWORD*)(game_GameRestartData_unknown_ + 3228) != 0) {
      *(_BYTE*)(game_GameRestartData_unknown_ + 16) = 0;
      *(_DWORD*)(v1 + 8) = 8;
      if (GameData_21c9600 != 0) {
        *(_DWORD*)(GameData_21c9600 + 152) = 14;
      }
    }
  }
  return result;
}

__int64 game_cmdbtl_anonymous_ProcCmdBtlSeq_CheckOverTurn_closure_Invoke()
{
  __int64 v0;

  v0 = GameData_21f4cc0;
  *(_BYTE*)(GameData_21f4cc0 + 10) = 1;
  if ((GameRoutine_ec0ae0(v0) & 1) != 0) {
    GameRoutine_e618a0();
  }
  return 4;
}

__int64 ProcCmdBtlSeq_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 19;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 19) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

__int64 ProcCmdBtlSeq_Unknown20(__int64 a1, __int64 a2)
{
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  return GameRoutine_eb9380(GameData_2216780_alt1, a2);
}

__int64 ProcCmdBtlSeq_Unknown21()
{
  __int64 v0;
  _QWORD v2[6];
  char v3;
  char v4;
  char v5;
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;

  v4 = 0;
  v5 = 0;
  memset(v2, 0, sizeof(v2));
  v3 = 0;
  v21 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  LOBYTE(v19) = 0;
  v6 = 0x500000005LL;
  GameRoutine_eb9b60(v2);
  GameRoutine_e61c90((__int64)&GameData_2216780, (__int64)v2);
  if (v21 == 1 && v19 != 0) {
    v20 = v19;
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0);
  }
  return GameRoutine_667c80(v2);
}

__int64 ProcCmdBtlSeq_Unknown7(__int64 a1, __int64 a2)
{
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0();
  }
  return GameRoutine_eb9380(GameData_2216780_alt1, a2);
}

__int64 ProcCmdBtlSeq_Unknown8()
{
  __int64 v0;
  _QWORD v2[6];
  char v3;
  char v4;
  char v5;
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
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;

  v4 = 0;
  v5 = 0;
  memset(v2, 0, sizeof(v2));
  v3 = 0;
  v21 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  LOBYTE(v19) = 0;
  v6 = 0x500000005LL;
  CmdbtlPartyNatives_eb9b60(v2);
  ProcCmdBtlSeq_e61c90((__int64)&GameData_2216780, (__int64)v2);
  if (v21 == 1 && v19 != 0) {
    v20 = v19;
    v0 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v0 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v0);
  }
  return GameRoutine_667c80(v2);
}

#pragma GCC visibility pop
