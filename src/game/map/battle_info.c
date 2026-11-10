#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleSide_Destructor(_QWORD);
__int64 GameRoutine_1211e40(void);
__int64 GameRoutine_795d20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7960a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_796720(__int64);
__int64 GameRoutine_7992e0(_QWORD);
__int64 GameRoutine_799880(_QWORD, _QWORD);
__int64 GameRoutine_79e950(_QWORD, _QWORD);
__int64 GameRoutine_79eba0(_QWORD);
__int64 GameRoutine_7a1f40(_QWORD, _QWORD);
__int64 GameRoutine_7a2a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7a7840(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_810fc0(_QWORD, _QWORD);
__int64 GameRoutine_8b9d00(_QWORD);
__int64 GameRoutine_8e3d20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97e390(_QWORD, _QWORD);
__int64 GameRoutine_a28e10(_QWORD, _QWORD);
__int64 GameRoutine_c8b5a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_eacc20(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ec0f80(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_Unit_CheckEquipment(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f98580[])();
extern __int64 (*GameData_1fab650[])();
extern __int64 (*game_map_BattleArea_vtable[])();
extern __int64 (*game_map_BattleInfo_vtable[])();
extern __int64 GameData_212d210[7];
extern __int64 GameData_212d218[6];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd148;
extern __int64 GameData_21d3f90;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d000[2];
extern __int64* GameData_212d258[2];
extern char game_script_map_event_g_active_unit;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
__int64 BattleInfo_DeletingDestructor(_QWORD* a1);
__int64 BattleInfo_7902e0(__int64 a1, unsigned __int8 a2, __int64 a3, int a4);
__int64 BattleInfo_790460(__int64 result, __int64 a2);
__int64 BattleInfo_7905d0(__int64 a1, __int64 a2, int a3);
__int64 BattleInfo_790680(__int64 result, __int64 a2);
__int64 BattleInfo_790800(__int64 a1, __int64 a2, int a3, int a4);
__int64 BattleInfo_790970(__int64 a1, __int64 a2, int a3, int a4);
__int64 BattleInfo_790a40(__int64 a1, char a2, char a3);
__int64 BattleInfo_790b00(__int64 a1, __int64 a2);
__int64 BattleInfo_795920(__int64 result, _DWORD* a2, __int64 a3, __int64 a4);
_QWORD* BattleInfo_795b40(_QWORD* result, __int64 a2, _WORD* a3, __int64 a4);
__int64 BattleInfo_795fc0(__int64 a1, __int64 a2, _DWORD* a3);
__int64 BattleInfo_796a00(__int64 a1);
__int64 BattleInfo_796b00(__int64 result);
bool BattleInfo_796d90(__int64 a1, __int64 a2);
bool BattleInfo_797b50(__int64 a1);
__int64 BattleInfo_797c80(__int64 a1);
__int64 BattleInfo_797e40(__int64 a1, unsigned __int8* a2);
__int64 BattleInfo_795fc0_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("BattleInfo_795fc0");
__int64 GameRoutine_798a60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_798a60_alt1(__int64, __int64, __int64,
                                unsigned int) __asm__("GameRoutine_798a60");
__int64 game_UnitPool_Get(_QWORD);
__int64 game_map_BattleInfo_GiveSkillFromItem_lambda0_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda0_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda1_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda2_Invoke(__int64 a1,
                                                           __int64 a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda3_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_map_BattleInfo_TryRelianceBind_lambda4_Invoke(__int64 a1,
                                                           __int64* a2);
__attribute__((swiftcall)) void UnitActor_81d2c0(PSEUDO_X8, __int64);
__int64* game_820d50(int);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64* game_map_BonusExpList_Add(__int64* result, __int64*);
__int64 BattleInfo_795fc0_alt2(__int64, __int64,
                               unsigned int*) __asm__("BattleInfo_795fc0");
__int64 BattleInfo_79c7f0(__int64);
__int64 BattleInfo_79c940(__int64, unsigned int*);
__int64 BattleInfo_7a3000();
__int64 BattleInfo_7a3110();
__int64 BattleSide_79f000(__int64, _DWORD*);
__int64 BattleSide_7a17c0(__int64, _WORD*, unsigned __int8);
__int64 BattleSide_7a1a00(__int64, _DWORD*);
__int64 BattleTarget_8fe0e0(__int64, __int64);
__int64 BonusExpList_7ff8f0(__int64, __int64);
__int64 GameReliance_8e17a0(_QWORD*, __int64, __int64);
__int64 GameReliance_8e18b0(__int64, _QWORD*, _QWORD*);
__int64 GameRoutine_1624930(__int64 result);
__int64 GameRoutine_7570a0(__int64 result, int, int, int, __int64);
__int64 GameRoutine_810670(__int64 result);
__int64 GameRoutine_c8b5a0_alt1(__int64, unsigned int, __int64, unsigned int,
                                unsigned int, unsigned int,
                                unsigned int) __asm__("GameRoutine_c8b5a0");
__int64 GameRoutine_eacc20_alt1(__int64, unsigned int, unsigned int,
                                unsigned int) __asm__("GameRoutine_eacc20");
__int64 ITarget_7730f0(__int64);
__int64 UnitSkillList_84cc00(__int64*, _DWORD*, __int64);
__int64 UnitUtil_12122d0(__int64*);
__int64 Unit_6ca760(__int64, _DWORD*);
__int64 Unit_6cb080(__int64, unsigned int*);
__int64 Unit_6cd120(__int64, char, _DWORD*);
__int64 Unit_6cef00(__int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_8007e0(__int64*, __int64, char);
__int64 game_8c4fc0(__int64 result, __int64);
__int64 game_97ec90(__int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_map_BattleSide_CalculateTerrain(__int64 result);
__int64 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
bool GameRoutine_6fc380(__int64);
bool GameRoutine_6fc3f0(__int64);
extern _DWORD GameData_1a83140[4];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_21d3f78;
extern _UNKNOWN GameData_21d3f88;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*GameData_1f98600[])();
extern __int64 (*GameData_1f98680[])();
extern __int64 (*GameData_1f98700[])();
extern __int64 (*GameData_1f98780[])();
extern __int64 (*GameData_1f98800[])();
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212cec0;
extern __int64* game_g_empty_item_ptr;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21d1f50;
extern __int64 GameData_22190b8;
extern __int64 GameData_22197d8;
extern __int64 GameData_221b2e8;
extern __int64 GameData_22400f8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_empty_item;
extern int GameData_21d3f70;
extern int GameData_21d3f80;
extern int GameData_21d9850;
unsigned __int64 game_map_BattleSide_GetHealPower(unsigned __int64 result);
void* BattleScenes_7a7840(__int64, char, _BYTE*, _BYTE*);
void GameRoutine_80ecf0();
void GameRoutine_9a4ec0(__int64, __int64, long double*);
__int64 BattleInfo_795d20(__int64 result, __int64 a2, unsigned int* a3);
__int64 BattleInfo_7960a0(__int64 result, unsigned __int8 a2, _WORD* a3);
__int64 BattleInfo_796720(__int64 a1);
__int64 BattleInfo_796bc0(__int64 a1);
__int64 BattleInfo_796f20(__int64 a1, __int64 a2);
__int64 BattleInfo_7971a0(__int64 a1, __int64 a2, char a3, char a4);
__int64 game_map_BattleInfo_TryRelianceBind(__int64 a1, __int64 a2, __int64 a3);
__int64 BattleInfo_798a60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4);

__int64 BattleInfo_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = game_map_BattleInfo_vtable;
  a1[1412] = game_map_BattleArea_vtable;
  v2 = a1[1413];
  if (v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 8LL))(v2);
    a1[1413] = 0;
  }
  a1[1] = GameData_212d258[0] + 2;
  BattleSide_Destructor(a1 + 287);
  BattleSide_Destructor(a1 + 192);
  BattleSide_Destructor(a1 + 97);
  BattleSide_Destructor(a1 + 2);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

__int64 BattleInfo_7902e0(__int64 a1, unsigned __int8 a2, __int64 a3, int a4)
{
  __int64 v4;
  __int64 v5;
  _BYTE* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  int v14;

  v4 = a1 + 0x2000;
  LODWORD(v5) = a4;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v4 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a3 != 0) {
    if ((v5 & 0x80000000) != 0) {
      v9 = (_BYTE*)(a3 + 847);
      v5 = 2;
      v10 = *GameData_212c878[0];
      while (1) {
        if (*(_WORD*)(v9 - 19) != 0 && (*(v9 - 16) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v9 - 19)) +
                                72LL) < 8u) {
          LODWORD(v5) = v5 - 2;
          goto LABEL_20;
        }
        if (*(_WORD*)(v9 - 11) != 0 && (*(v9 - 8) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v9 - 11)) +
                                72LL) < 8u) {
          break;
        }
        if (*(_WORD*)(v9 - 3) != 0 && (*v9 & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                                           8LL * *(unsigned __int16*)(v9 - 3)) +
                                72LL) < 8u) {
          goto LABEL_20;
        }
        v5 += 3;
        v9 += 24;
        if (v5 == 32) {
          LODWORD(v5) = -1;
          goto LABEL_20;
        }
      }
      LODWORD(v5) = v5 - 1;
    }
  LABEL_20:
    v11 = *(char*)(a3 + 585);
    v12 = a1 + 760LL * a2;
    v13 = *(char*)(a3 + 584);
    *(_QWORD*)(v12 + 40) = a3;
    *(_DWORD*)(v12 + 88) = v13;
    *(_DWORD*)(v12 + 92) = v11;
    *(_DWORD*)(v12 + 96) = v13;
    *(_DWORD*)(v12 + 100) = v11;
    v14 = *(_DWORD*)(a3 + 592);
    *(_DWORD*)(v12 + 56) = v5;
    *(_DWORD*)(v12 + 104) = v14;
  }
  return a1;
}

__int64 BattleInfo_790460(__int64 result, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;

  if (a2 != 0) {
    v2 = result + 0x2000;
    v3 = (_BYTE*)(a2 + 847);
    v4 = 2;
    v6 = *GameData_212c878[0];
    while (*(_WORD*)(v3 - 19) == 0 || (*(v3 - 16) & 1) == 0 ||
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                          8LL * *(unsigned __int16*)(v3 - 19)) +
                               72LL) >= 8u) {
      if (*(_WORD*)(v3 - 11) != 0 && (*(v3 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                         8LL * *(unsigned __int16*)(v3 - 11)) +
                              72LL) < 8u) {
        LODWORD(v4) = v4 - 1;
        if (*(_BYTE*)(result + 11273) == 0) {
        LABEL_19:
          v8 = *(char*)(a2 + 584);
          v9 = *(char*)(a2 + 585);
          *(_QWORD*)(result + 40) = a2;
          *(_DWORD*)(result + 88) = v8;
          *(_DWORD*)(result + 92) = v9;
          *(_DWORD*)(result + 96) = v8;
          *(_DWORD*)(result + 100) = v9;
          v10 = *(_DWORD*)(a2 + 592);
          *(_DWORD*)(result + 56) = v4;
          *(_DWORD*)(result + 104) = v10;
          return result;
        }
      LABEL_18:
        v7 = result;
        GameRoutine_7992e0(result + 16);
        GameRoutine_7992e0(v7 + 776);
        GameRoutine_7992e0(v7 + 1536);
        GameRoutine_7992e0(v7 + 2296);
        *(_DWORD*)(v7 + 11256) = 0;
        *(_WORD*)(v2 + 3080) = 0;
        *(_QWORD*)(v7 + 11276) = 0;
        *(_QWORD*)(v7 + 11282) = 0;
        GameRoutine_8b9d00(v7 + 11296);
        result = v7;
        goto LABEL_19;
      }
      if (*(_WORD*)(v3 - 3) != 0 && (*v3 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                         8LL * *(unsigned __int16*)(v3 - 3)) +
                              72LL) < 8u) {
        goto LABEL_17;
      }
      v4 += 3;
      v3 += 24;
      if (v4 == 32) {
        LODWORD(v4) = -1;
        if (*(_BYTE*)(result + 11273) == 0) {
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    LODWORD(v4) = v4 - 2;
  LABEL_17:
    if (*(_BYTE*)(result + 11273) == 0) {
      goto LABEL_19;
    }
    goto LABEL_18;
  }
  return result;
}

__int64 BattleInfo_7905d0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3;
  int v7;
  int v8;
  int v9;

  v3 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v3 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a2 != 0) {
    v7 = *(char*)(a2 + 584);
    v8 = *(char*)(a2 + 585);
    *(_QWORD*)(a1 + 40) = a2;
    *(_DWORD*)(a1 + 88) = v7;
    *(_DWORD*)(a1 + 92) = v8;
    *(_DWORD*)(a1 + 96) = v7;
    *(_DWORD*)(a1 + 100) = v8;
    v9 = *(_DWORD*)(a2 + 592);
    *(_DWORD*)(a1 + 56) = a3;
    *(_DWORD*)(a1 + 104) = v9;
  }
  return a1;
}

__int64 BattleInfo_790680(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  int v4;
  int v6;
  int v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;

  if (a2 != 0) {
    v2 = result + 0x2000;
    v3 = *(char*)(a2 + 584);
    v4 = *(char*)(a2 + 585);
    v6 = v4;
    v7 = v3;
    if (*(_BYTE*)(result + 11273) != 0) {
      v8 = result;
      GameRoutine_7992e0(result + 16);
      GameRoutine_7992e0(v8 + 776);
      GameRoutine_7992e0(v8 + 1536);
      GameRoutine_7992e0(v8 + 2296);
      *(_DWORD*)(v8 + 11256) = 0;
      *(_WORD*)(v2 + 3080) = 0;
      *(_QWORD*)(v8 + 11276) = 0;
      *(_QWORD*)(v8 + 11282) = 0;
      GameRoutine_8b9d00(v8 + 11296);
      v7 = *(char*)(a2 + 584);
      v6 = *(char*)(a2 + 585);
      result = v8;
    }
    *(_QWORD*)(result + 800) = a2;
    *(_DWORD*)(result + 848) = v7;
    v9 = (_BYTE*)(a2 + 847);
    *(_DWORD*)(result + 852) = v6;
    *(_DWORD*)(result + 856) = v3;
    *(_DWORD*)(result + 860) = v4;
    *(_DWORD*)(result + 864) = *(_DWORD*)(a2 + 592);
    v10 = 2;
    while (1) {
      if (*(_WORD*)(v9 - 19) != 0 && (*(v9 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v9 - 19)) +
                              72LL) < 8u) {
        LODWORD(v10) = v10 - 2;
        goto LABEL_19;
      }
      if (*(_WORD*)(v9 - 11) != 0 && (*(v9 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v9 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v9 - 3) != 0 && (*v9 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v9 - 3)) +
                              72LL) < 8u) {
        goto LABEL_19;
      }
      v10 += 3;
      v9 += 24;
      if (v10 == 32) {
        LODWORD(v10) = -1;
        goto LABEL_19;
      }
    }
    LODWORD(v10) = v10 - 1;
  LABEL_19:
    *(_DWORD*)(result + 816) = v10;
  }
  return result;
}

__int64 BattleInfo_790800(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;
  int v9;
  int v10;
  _BYTE* v11;
  __int64 v12;

  v4 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v4 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a2 != 0) {
    v9 = *(char*)(a2 + 584);
    v10 = *(char*)(a2 + 585);
    *(_QWORD*)(a1 + 800) = a2;
    v11 = (_BYTE*)(a2 + 847);
    *(_DWORD*)(a1 + 856) = a3;
    *(_DWORD*)(a1 + 860) = a4;
    *(_DWORD*)(a1 + 848) = v9;
    *(_DWORD*)(a1 + 852) = v10;
    *(_DWORD*)(a1 + 864) = *(_DWORD*)(a2 + 592);
    v12 = 2;
    while (1) {
      if (*(_WORD*)(v11 - 19) != 0 && (*(v11 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v11 - 19)) +
                              72LL) < 8u) {
        LODWORD(v12) = v12 - 2;
        goto LABEL_19;
      }
      if (*(_WORD*)(v11 - 11) != 0 && (*(v11 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v11 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v11 - 3) != 0 && (*v11 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v11 - 3)) +
                              72LL) < 8u) {
        goto LABEL_19;
      }
      v12 += 3;
      v11 += 24;
      if (v12 == 32) {
        LODWORD(v12) = -1;
        goto LABEL_19;
      }
    }
    LODWORD(v12) = v12 - 1;
  LABEL_19:
    *(_DWORD*)(a1 + 816) = v12;
  }
  return a1;
}

__int64 BattleInfo_790970(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4;

  v4 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v4 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  if (a2 != 0) {
    *(_QWORD*)(a1 + 808) = a2;
    *(_DWORD*)(a1 + 848) = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 56LL))(a2);
    *(_DWORD*)(a1 + 852) = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 64LL))(a2);
    *(_DWORD*)(a1 + 856) = a3;
    *(_DWORD*)(a1 + 860) = a4;
    *(_DWORD*)(a1 + 864) = 1;
  }
  return a1;
}

__int64 BattleInfo_790a40(__int64 a1, char a2, char a3)
{
  __int64 v3;
  _BYTE v6[3];
  __int16 v7;
  char v8;
  __int16 v9;
  int v10;

  v3 = a1 + 0x2000;
  v6[0] = 0;
  v10 = 0;
  v8 = 0;
  v6[1] = a2;
  v6[2] = a3;
  v9 = -1;
  v7 = 9;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v3 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  GameRoutine_799880(a1 + 776, v6);
  if ((v7 & 0x100) != 0) {
    *(_DWORD*)(a1 + 11276) |= 0x1000u;
  }
  return a1;
}

__int64 BattleInfo_790b00(__int64 a1, __int64 a2)
{
  __int64 v2;

  v2 = a1 + 0x2000;
  if (*(_BYTE*)(a1 + 11273) != 0) {
    GameRoutine_7992e0(a1 + 16);
    GameRoutine_7992e0(a1 + 776);
    GameRoutine_7992e0(a1 + 1536);
    GameRoutine_7992e0(a1 + 2296);
    *(_DWORD*)(a1 + 11256) = 0;
    *(_WORD*)(v2 + 3080) = 0;
    *(_QWORD*)(a1 + 11276) = 0;
    *(_QWORD*)(a1 + 11282) = 0;
    GameRoutine_8b9d00(a1 + 11296);
  }
  GameRoutine_799880(a1 + 776, a2);
  if ((*(_BYTE*)(a2 + 4) & 1) != 0) {
    *(_DWORD*)(a1 + 11276) |= 0x1000u;
  }
  return a1;
}

__int64 BattleInfo_795920(__int64 result, _DWORD* a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned int v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int8* v23;
  __int64 v24;
  _QWORD v25[2];
  char v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;

  if ((*(_BYTE*)(result + 11276) & 0x22) != 0) {
    return result;
  }
  v29 = v4;
  v30 = v5;
  v6 = *(_QWORD*)(a3 + 24);
  v7 = result;
  if (v6 == 0 || *(_QWORD*)(v6 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a3 + 8) + 11277LL) & 0x80) != 0) {
      return result;
    }
    result = *(_QWORD*)(a3 + 32);
    if (result == 0) {
      return result;
    }
    v8 = a4;
    v9 = a2;
    v10 = a3;
    result = (**(__int64 (***)(__int64))result)(result);
    a3 = v10;
    a2 = v9;
    a4 = v8;
    if ((result & 1) == 0) {
      return result;
    }
  }
  v11 = *(_DWORD*)(a3 + 604);
  v12 = *a2;
  v23 = nullptr;
  v24 = 0;
  v22 = nullptr;
  if ((v12 & v11) != 0) {
    v13 = a4;
    v14 = a2;
    v25[0] = GameData_1fab650;
    v25[1] = &v22;
    v27 = a3;
    v28 = v25;
    v26 = 1;
    GameRoutine_7a2a60(a3, a2, 1, v25);
    result = (__int64)v28;
    if (v28 == v25) {
      v15 = 32;
    }
    else {
      if (v28 == nullptr) {
      LABEL_13:
        v12 = *v14;
        a2 = v14;
        a4 = v13;
        goto LABEL_14;
      }
      v15 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v28 + v15))((__int64)v28);
    goto LABEL_13;
  }

LABEL_14:
  if ((v12 & *(_DWORD*)(a4 + 604)) != 0) {
    v25[0] = GameData_1fab650;
    v25[1] = &v22;
    v27 = a4;
    v28 = v25;
    v26 = 2;
    GameRoutine_7a2a60(a4, a2, 2, v25);
    result = (__int64)v28;
    if (v28 == v25) {
      v16 = 32;
      goto LABEL_19;
    }
    if (v28 != nullptr) {
      v16 = 40;
    LABEL_19:
      result = (*(__int64 (**)(__int64))(*v28 + v16))((__int64)v28);
    }
  }
  v17 = v22;
  v18 = v23;
  if (v23 != v22) {
    result = GameRoutine_8e3d20(
        v22, v23, (2 * __clz(0xAAAAAAAAAAAAAAABLL * ((v23 - v22) >> 2))) ^ 0x7E,
        1);
    v17 = v22;
    v18 = v23;
  }
  if (v18 != v17) {
    v19 = v17;
    do {
      v20 = *v19;
      v19 += 12;
      result = GameRoutine_7960a0(v7, v20, v17 + 4);
      v17 = v19;
    } while (v19 != v18);
    v17 = v22;
  }
  if (v17 != nullptr) {
    v23 = v17;
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v17);
  }
  return result;
}

_QWORD* BattleInfo_795b40(_QWORD* result, __int64 a2, _WORD* a3, __int64 a4)
{
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 i;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;

  if (*a3 != 0) {
    v5 = result;
    v6 = GameData_212c878[0];
    v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                    8LL * (unsigned __int16)*a3);
    if (*(_BYTE*)(v7 + 73) == 4) {
      v8 = *(_QWORD*)(a2 + 24);
      if (v8 == 0) {
        return result;
      }
      result = v23;
      v23[2] = a2;
      v23[0] = GameData_1f98580;
      v23[1] = v5;
      v9 = *(_BYTE*)(v8 + 1440);
      v24 = v23;
      if (v9 < 0) {
        v10 = *(_QWORD*)(v8 + 1400);
        v11 = *(_QWORD*)(v8 + 1392);
        if ((int)((unsigned __int64)(v10 - v11) >> 2) < 1) {
          result = v23;
        }
        else {
          v12 = 0;
          v13 = 0;
          v14 = GameData_212c880[0];
          v15 = *GameData_212c880[0];
          do {
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                     8LL * (*(_DWORD*)(v11 + v12) & 0xFFF)) +
                          104LL) == 7) {
              if (v24 == nullptr) {
                GameRoutine_60a310(0, a2, a3, a4);
              }
              (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v11 + v12);
              v15 = *v14;
              v10 = *(_QWORD*)(v8 + 1400);
              v11 = *(_QWORD*)(v8 + 1392);
            }
            ++v13;
            v12 += 4;
          } while (v13 < (int)((unsigned __int64)(v10 - v11) >> 2));
          result = v24;
          if (v24 != v23) {
            if (v24 == nullptr) {
              return result;
            }
            v22 = 40;
            return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, _WORD*))(
                *result + v22))(result, a2, a3);
          }
        }
      }
      v22 = 32;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, _WORD*))(
          *result + v22))(result, a2, a3);
    }
    v16 = *(_QWORD**)(v7 + 24);
    v17 = v16[41];
    v18 = v16[42];
    if (v17 != v18) {
      do {
        result = (_QWORD*)GameRoutine_795d20(v5, a2, v17);
        v17 += 4;
      } while (v17 != v18);
      v16 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(*v6 + 64) +
                                   8LL * (unsigned __int16)*a3) +
                        24LL);
    }
    v20 = v16[53];
    for (i = v16[54]; v20 != i; v20 += 4) {
      result = (_QWORD*)BattleInfo_795fc0(v5, a2, v20);
    }
  }
  return result;
}

__int64 BattleInfo_795d20(__int64 result, __int64 a2, unsigned int* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64 v20;
  char v21;
  _BYTE v22[4];
  int v23;

  v3 = *a3;
  v4 = v3 & 0xFFF;
  if ((v3 & 0xFFF) != 0) {
    v5 = *(_QWORD*)(a2 + 520);
    v8 = result;
    if (((v3 >> 5) & 0x7F) + 1 > (*(_QWORD*)(a2 + 528) - v5) >> 2 ||
        ((*(_DWORD*)(v5 + 4 * ((v3 >> 5) & 0x7F)) >> v3) & 1) == 0) {
      goto LABEL_14;
    }
    v9 = *(_QWORD*)(a2 + 560);
    v10 = *(_QWORD*)(a2 + 552);
    if (v9 != v10) {
      v11 = (v9 - v10) >> 2;
      v12 = 0;
      while (((*(_DWORD*)(v10 + 4 * v12) ^ (unsigned int)v3) & 0xFFF) != 0) {
        if (v11 == ++v12) {
          return result;
        }
      }
      if ((v12 & 0x8000000000000000LL) == 0) {
        v13 = *(_DWORD*)(v10 + 4LL * (unsigned int)v12);
        v14 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                             8LL * (v13 & 0xFFF)) +
                                  281LL);
        if (v14 <= 1) {
          v14 = 1;
        }
        if ((v13 & 0x1F000000) != 0 || ((v13 >> 19) & 0x1F) < v14 - 1) {
        LABEL_14:
          v15 = *(
              _QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v4) +
                       536LL);
          if (v15 != 0) {
            v23 = *(_WORD*)(v15 + 16) & 0xFFF;
            if ((BattleInfo_79c940(a2, (unsigned int*)&v23) & 1) != 0) {
              v16 = *(_QWORD*)(v8 + 11264);
              v22[0] = *(_BYTE*)(a2 + 16);
              LOBYTE(v23) = *(_BYTE*)(v16 + 760LL * v22[0] + 33);
              *((_DWORD*)BattleScenes_7a7840(v8 + 3056, 18, v22, &v23) + 2) =
                  *a3;
              v17 = *(_QWORD*)(v8 + 11264);
              v22[0] = *(_BYTE*)(a2 + 16);
              LOBYTE(v23) = *(_BYTE*)(v17 + 760LL * v22[0] + 33);
              result = (__int64)BattleScenes_7a7840(v8 + 3056, 14, v22, &v23);
              *(_DWORD*)(result + 8) = GameData_21d9850 & 0xFFF;
              return result;
            }
          }
          if ((*(_BYTE*)(v8 + 11276) & 1) != 0 &&
              *(_WORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                   8LL * (*a3 & 0xFFF)) +
                        288LL) != 0) {
            v18 = v8 + 3056;
          }
          else {
            BattleSide_7a1a00(a2, a3);
            v18 = v8 + 3056;
            if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                     8LL * (*a3 & 0xFFF)) +
                          288LL) == 0) {
              v19 = *(unsigned __int8*)(a2 + 16);
              v20 = *(_QWORD*)(v8 + 11264);
              v21 = 16;
            LABEL_23:
              v22[0] = v19;
              LOBYTE(v23) = *(_BYTE*)(v20 + 760LL * v19 + 33);
              result = (__int64)BattleScenes_7a7840(v18, v21, v22, &v23);
              *(_DWORD*)(result + 8) = *a3;
              if (v15 != 0) {
                v23 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x14CLL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
                result = BattleInfo_79c940(a2, (unsigned int*)&v23);
                if ((result & 1) != 0) {
                  v23 = *(_WORD*)(v15 + 16) & 0xFFF;
                  return BattleInfo_795d20(v8, a2, (unsigned int*)&v23);
                }
              }
              return result;
            }
          }
          v19 = *(unsigned __int8*)(a2 + 16);
          v20 = *(_QWORD*)(v8 + 11264);
          v21 = 14;
          goto LABEL_23;
        }
      }
    }
  }
  return result;
}

__int64 BattleInfo_795fc0(__int64 a1, __int64 a2, _DWORD* a3)
{
  __int64 result;
  __int64 v7;
  __int64 v8;
  unsigned __int8* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int8 v13;
  unsigned __int8 v14;
  char v15;
  char v16;

  result = game_HasSkill(a2 + 520, a3);
  if ((result & 1) != 0) {
    if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*a3 & 0xFFF)) +
                  288LL) != 0) {
      v7 = *(_QWORD*)(a1 + 11264);
      v8 = a1 + 3056;
      v9 = &v13;
      v10 = &v16;
      v13 = *(_BYTE*)(a2 + 16);
      v11 = 15;
      v16 = *(_BYTE*)(v7 + 760LL * v13 + 33);
    }
    else {
      GameRoutine_7a1f40(a2, a3);
      v12 = *(_QWORD*)(a1 + 11264);
      v8 = a1 + 3056;
      v9 = &v14;
      v10 = &v15;
      v14 = *(_BYTE*)(a2 + 16);
      v11 = 17;
      v15 = *(_BYTE*)(v12 + 760LL * v14 + 33);
    }
    result = GameRoutine_7a7840(v8, v11, v9, v10);
    *(_DWORD*)(result + 8) = *a3;
  }
  return result;
}

__int64 BattleInfo_7960a0(__int64 result, unsigned __int8 a2, _WORD* a3)
{
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  _BOOL4 v9;
  unsigned __int8 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _DWORD* v28;
  unsigned __int8 v29;
  __int16* v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int* v45;
  __int64 v46;
  int v47;
  __int64 v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned int v55;
  int v56;
  int v57;
  __int64* v58;
  int v59;
  unsigned int v60;
  unsigned int v61;
  int v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  unsigned int* v66;
  unsigned int* i;
  __int64 v68;
  unsigned int* v69;
  unsigned int* j;
  char v71[4];
  char v72[4];
  char v73[4];
  char v74[4];
  unsigned int v75;

  v3 = result + 16;
  v5 = result;
  v6 = result + 16 + 760LL * a2;
  v7 = *(unsigned __int8*)(v6 + 17);
  v8 = *(_DWORD*)(*(_QWORD*)(v6 + 8) + 11276LL);
  v9 = (v8 & 1) == 0;
  if ((*(_DWORD*)a3 & 0xFFF) != 0) {
    if ((v8 & 1) == 0) {
      v10 = 0;
      goto LABEL_13;
    }
    v11 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                     8LL * (*(_DWORD*)a3 & 0xFFF));
    if (v11 == *(_QWORD*)(v6 + 56) && (*(_WORD*)(v11 + 754) & 0x4000) == 0) {
      goto LABEL_14;
    }
    v9 = false;
  }
  v12 = (~v8 & 0xC000000) == 0 || v9;
  if (v12 != 0) {
    v10 = 0;
  }
  else {
    v10 = 2;
  }
LABEL_13:
  result = BattleSide_7a17c0(result + 16 + 760LL * a2, a3, v10);
  if ((result & 1) == 0) {
    return result;
  }
LABEL_14:
  if (*(_QWORD*)(v6 + 24) == 0) {
    return result;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d3f78,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21d3f78);
    if ((_DWORD)result != 0) {
      GameData_21d3f70 = 1966592;
      result = __cxa_guard_release(&GameData_21d3f78);
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21d3f88,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21d3f88);
    if ((_DWORD)result != 0) {
      GameData_21d3f80 = 12312;
      result = __cxa_guard_release(&GameData_21d3f88);
    }
  }
  v13 = *(_DWORD*)a3;
  v14 = GameData_212c880[0];
  v15 = *GameData_212c880[0];
  if ((*(_BYTE*)(v5 + 11278) & 1) != 0) {
    v16 = *(_QWORD*)(*(_QWORD*)(v15 + 64) + 8LL * (v13 & 0xFFF));
    if ((((unsigned int)GameData_21d3f80 >> *(_BYTE*)(v16 + 115)) & 1) != 0) {
      v17 = *(_QWORD*)(v6 + 616);
      v18 = (v13 >> 5) & 0x7F;
      if (v18 + 1 <= (unsigned __int64)((*(_QWORD*)(v6 + 624) - v17) >> 2) &&
          ((*(_DWORD*)(v17 + 4LL * v18) >> v13) & 1) != 0) {
        return result;
      }
    }
  }
  else {
    v16 = *(_QWORD*)(*(_QWORD*)(v15 + 64) + 8LL * (v13 & 0xFFF));
  }
  if (*(_BYTE*)(v16 + 272) == 3) {
    v19 = v6;
  }
  else {
    v19 = v3 + 760LL * v7;
  }
  v20 = *(_QWORD*)(v19 + 24);
  if (v20 != 0 && *(_QWORD*)(v20 + 392) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(v19 + 8) + 11277LL) & 0x80) == 0 &&
          (result = *(_QWORD*)(v19 + 32)) != 0 &&
          ((result = (**(__int64 (***)(__int64))result)(result)) & 1) != 0) {
    result = BattleSide_79f000(v19, a3);
    if ((result & 1) != 0) {
      v73[0] = *(_BYTE*)(v6 + 16);
      v72[0] = *(_BYTE*)(v19 + 16);
      v21 = BattleScenes_7a7840(v5 + 3056, 13, v73, v72);
      v22 = *(_DWORD*)a3;
      v23 = *v14;
      v24 = GameData_21d3f70;
      v21[2] = *(_DWORD*)a3;
      v25 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (v22 & 0xFFF));
      if (((v24 >> *(_BYTE*)(v25 + 115)) & 1) == 0) {
        v26 = *(_QWORD*)(v19 + 24);
        if (v26 != 0 && *(_QWORD*)(v26 + 392) != 0 ||
            (*(_BYTE*)(*(_QWORD*)(v19 + 8) + 11277LL) & 0x80) == 0 &&
                (v27 = *(_QWORD**)(v19 + 32)) != nullptr &&
                (v28 = v21,
                 v29 = (unsigned __int8)X8CALL_X0(
                     _QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                  PSEUDO_X8, _QWORD))*v27)(
                                  (void*)v27, *(_QWORD*)(v19 + 32))),
                 v21 = v28, (v29 & 1) != 0)) {
          v30 = (__int16*)&v21[3 * *(unsigned __int8*)(v19 + 16)];
          v31 = BattleInfo_79c7f0(v19);
          v32 = v30[8];
          v30[9] = v31;
          if (v31 < v32) {
            LOWORD(v32) = v31;
          }
          v30[10] = v32;
          v30[8] = *(_DWORD*)(v19 + 96);
          v30[11] = *(_DWORD*)(v19 + 104);
          v30[12] = BattleInfo_7a3000();
          v30[13] = BattleInfo_7a3110();
        }
        v25 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * (*(_DWORD*)a3 & 0xFFF));
      }
      if (*(_BYTE*)(v25 + 250) == 12) {
        v33 = *(_QWORD*)(v5 + 11264);
        v71[0] = *(_BYTE*)(v19 + 16);
        v74[0] = *(_BYTE*)(v33 + 760LL * (unsigned __int8)v71[0] + 33);
        *((_DWORD*)BattleScenes_7a7840(v5 + 3056, 19, v71, v74) + 2) =
            *(_DWORD*)a3;
      }
      if ((UnitSkillList_84cc00((__int64*)(v6 + 616), a3, 1) & 1) != 0) {
        v34 = *(_QWORD*)(v6 + 656);
        v35 = *(_QWORD*)(v6 + 648);
        *(_QWORD*)(v6 + 704) = 0;
        v36 = v34 - v35;
        *(_QWORD*)(v6 + 696) = 0;
        if ((int)((unsigned __int64)(v34 - v35) >> 2) >= 1) {
          v37 = *v14;
          v38 = (int)(v36 >> 2);
          v39 = v38 <= 1 ? 1LL : (int)(v36 >> 2);
          if (v38 >= 2) {
            v45 = (int*)(v35 + 4);
            v40 = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            do {
              v44 += 2;
              v46 =
                  *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (*(v45 - 1) & 0xFFF));
              v47 = v43 | (1 << *(_BYTE*)(v46 + 104));
              *(_WORD*)(v6 + 696) = v47;
              v48 = (1LL << *(_BYTE*)(v46 + 250)) | v42;
              *(_QWORD*)(v6 + 704) = v48;
              v49 = (1 << *(_BYTE*)(v46 + 115)) | v41;
              *(_DWORD*)(v6 + 700) = v49;
              v50 = *(unsigned __int16*)(*(_QWORD*)(v46 + 24) + 1064LL) | v40;
              *(_WORD*)(v6 + 698) = v50;
              v51 = *v45;
              v45 += 2;
              v52 = *(_QWORD*)(*(_QWORD*)(v37 + 64) + 8LL * (v51 & 0xFFF));
              v43 = v47 | (1 << *(_BYTE*)(v52 + 104));
              *(_WORD*)(v6 + 696) = v43;
              v42 = (1LL << *(_BYTE*)(v52 + 250)) | v48;
              *(_QWORD*)(v6 + 704) = v42;
              v41 = (1 << *(_BYTE*)(v52 + 115)) | v49;
              *(_DWORD*)(v6 + 700) = v41;
              v40 = *(unsigned __int16*)(*(_QWORD*)(v52 + 24) + 1064LL) | v50;
              *(_WORD*)(v6 + 698) = v40;
            } while ((v39 & 0x7FFFFFFFFFFFFFFELL) != v44);
          }
          else {
            LOWORD(v40) = 0;
            v41 = 0;
            v42 = 0;
            LOWORD(v43) = 0;
            v44 = 0;
          }
          if ((v39 & 1) != 0) {
            v53 = *(_QWORD*)(*(_QWORD*)(v37 + 64) +
                             8LL * (*(_DWORD*)(v35 + 4 * v44) & 0xFFF));
            *(_WORD*)(v6 + 696) = v43 | (1 << *(_BYTE*)(v53 + 104));
            *(_QWORD*)(v6 + 704) = (1LL << *(_BYTE*)(v53 + 250)) | v42;
            *(_DWORD*)(v6 + 700) = (1 << *(_BYTE*)(v53 + 115)) | v41;
            *(_WORD*)(v6 + 698) =
                *(_WORD*)(*(_QWORD*)(v53 + 24) + 1064LL) | v40;
          }
        }
      }
      if ((*(_DWORD*)a3 & 0xFFF) != 0) {
        v54 = *(_QWORD*)(*(_QWORD*)(*v14 + 64) + 8LL * (*(_DWORD*)a3 & 0xFFF));
        v55 = *(unsigned __int16*)(v54 + 512);
        if (*(_WORD*)(v54 + 512) != 0) {
          v56 = *(unsigned __int8*)(v54 + 250);
          if (v56 == 31) {
            v65 = *(_QWORD*)(v54 + 24);
            v66 = *(unsigned int**)(v65 + 448);
            for (i = *(unsigned int**)(v65 + 456); v66 != i; ++v66) {
              BattleInfo_795fc0_alt2(v5, v19, v66);
            }
          }
          else if (v56 == 19) {
            v57 = *(_DWORD*)(v5 + 11276);
            if ((v57 & 1) == 0 || (v57 & 0xC000000) == 0xC000000) {
              nn_os_LockMutex(&game_g_random_mutex);
              v58 = game_map_MapRandom_instance__ptr[0];
              v59 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((__int128*)0x10LL) + 8);
              v60 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
              v61 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                               (unsigned __int64)((__int128*)0x10LL)) ^
                    (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                (unsigned __int64)((__int128*)0x10LL))
                     << 11);
              *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((__int128*)0x10LL)) =
                  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL) + 4);
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v58 + 4) = v59;
              v62 = (v61 >> 8) ^ (v60 >> 19) ^ v61 ^ v60;
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v58 + 8) = v60;
              *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v58 + 12) = v62;
              v63 = v62 & 0x7FFFFFFF;
              nn_os_UnlockMutex(&game_g_random_mutex);
              v64 = *(_QWORD*)(*(_QWORD*)(v54 + 520) + 16LL * (v63 % v55) + 8);
              if (v64 != 0) {
                LODWORD(v64) = *(_WORD*)(v64 + 16) & 0xFFF;
              }
              v75 = v64;
              BattleInfo_795d20(v5, v19, &v75);
            }
          }
          else {
            v68 = *(_QWORD*)(v54 + 24);
            v69 = *(unsigned int**)(v68 + 448);
            for (j = *(unsigned int**)(v68 + 456); v69 != j; ++v69) {
              BattleInfo_795d20(v5, v19, v69);
            }
          }
        }
      }
      game_map_BattleSide_CalculateTerrain(v3);
      game_map_BattleSide_CalculateTerrain(v5 + 776);
      game_map_BattleSide_CalculateTerrain(v5 + 1536);
      game_map_BattleSide_CalculateTerrain(v5 + 2296);
      game_map_BattleSide_GetHealPower(v3);
      game_map_BattleSide_GetHealPower(v5 + 776);
      game_map_BattleSide_GetHealPower(v5 + 1536);
      game_map_BattleSide_GetHealPower(v5 + 2296);
      return (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  return result;
}

__int64 BattleInfo_796720(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  unsigned int* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  int v23;
  __int64 v24;
  __int64 v25;
  _WORD v26[2];
  _WORD v27[2];
  int v28;
  int v29;

  v3 = (__int64*)(a1 + 40);
  v2 = *(_QWORD*)(a1 + 40);
  if (v2 != 0) {
    v27[0] = 32;
    Unit_6cef00(v2, (__int64)v27);
  }
  result = *(_QWORD*)(a1 + 800);
  if (result != 0) {
    v27[0] = 32;
    result = Unit_6cef00(result, (__int64)v27);
  }
  v5 = *(_QWORD*)(a1 + 40);
  if (v5 == 0 || *(_QWORD*)(v5 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11277LL) & 0x80) != 0) {
      goto LABEL_33;
    }
    result = *(_QWORD*)(a1 + 48);
    if (result == 0) {
      goto LABEL_33;
    }
    result = (**(__int64 (***)(__int64))result)(result);
    if ((result & 1) == 0) {
      goto LABEL_33;
    }
  }
  v6 = *(_QWORD*)(a1 + 800);
  if (v6 == 0 || *(_QWORD*)(v6 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11277LL) & 0x80) != 0) {
      goto LABEL_33;
    }
    result = *(_QWORD*)(a1 + 808);
    if (result == 0) {
      goto LABEL_33;
    }
    result = (**(__int64 (***)(__int64))result)(result);
    if ((result & 1) == 0) {
      goto LABEL_33;
    }
  }
  result = *v3;
  if (*v3 != 0 && (v7 = *(_QWORD*)(result + 440)) != 0) {
    v8 = *(unsigned __int8*)(v7 + 16);
    v9 = *(_QWORD*)(a1 + 800);
    if (v9 == 0) {
    LABEL_23:
      v11 = 9;
      if (v8 == 9) {
        goto LABEL_33;
      }
      goto LABEL_24;
    }
  }
  else {
    v8 = 9;
    v9 = *(_QWORD*)(a1 + 800);
    if (v9 == 0) {
      goto LABEL_23;
    }
  }
  v10 = *(_QWORD*)(v9 + 440);
  if (v10 == 0) {
    goto LABEL_23;
  }
  v11 = *(unsigned __int8*)(v10 + 16);
  if (v8 == v11) {
    goto LABEL_33;
  }
LABEL_24:
  if (v8 != 0) {
    if (v8 == 3 && v11 == 0) {
      goto LABEL_33;
    }
  }
  else if (v11 == 3) {
    goto LABEL_33;
  }
  if (result != 0) {
    v26[0] = 64;
    result = Unit_6cef00(result, (__int64)v26);
    v9 = *(_QWORD*)(a1 + 800);
  }
  if (v9 != 0) {
    v26[0] = 64;
    result = Unit_6cef00(v9, (__int64)v26);
  }
LABEL_33:
  v12 = *(unsigned int*)(a1 + 11256);
  if ((_DWORD)v12 != 0) {
    v13 = a1 + 16;
    v14 = GameData_212cec0;
    v15 = game_g_shared_system_skills_ptr;
    v16 = GameData_212c880[0];
    v17 = (unsigned int*)(a1 + 3072);
    do {
      if (*((_BYTE*)v17 - 6) != 4) {
        result = v3[95 * *((unsigned __int8*)v17 - 6)];
        if (result != 0) {
          v18 = *((unsigned __int8*)v17 - 4);
          switch (v18) {
          case 19:
            v23 = *(_DWORD*)(result + 416);
            if ((v23 & 1) != 0) {
              *(_DWORD*)(result + 416) = v23 & 0xFFFFFFFE;
              if (*(_WORD*)(result + 1964) != 0) {
                v24 = *v14;
                if (*(_QWORD*)(result + 1960) != *v14) {
                  *(_QWORD*)(result + 1960) = v24;
                  v25 = result;
                  v29 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) + v15) & 0xFFF;
                  Unit_6cd120(result, (v24 & 0xFFFF00000000LL) != 0, &v29);
                  result = v25;
                }
              }
              *(_WORD*)(result + 20) |= 4u;
            }
            break;
          case 15:
            result = Unit_6cb080(result, v17);
            break;
          case 14:
            v19 = v13 + 760LL * *((unsigned __int8*)v17 - 6);
            if ((*(_BYTE*)(*(_QWORD*)(v19 + 8) + 11276LL) & 1) != 0 ||
                (*(_BYTE*)(v19 + 124) & 1) == 0 ||
                (v20 = *(_QWORD*)(*(_QWORD*)(*v16 + 64) +
                                  8LL * (*v17 & 0xFFF))) == 0 ||
                *(_BYTE*)(v20 + 104) != 7 ||
                (v21 = v3[95 * *((unsigned __int8*)v17 - 6)],
                 v28 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v15) & 0xFFF,
                 v22 = game_HasSkill_alt1((_QWORD*)(result + 1744),
                                          (unsigned int*)&v28),
                 result = v21, (v22 & 1) != 0) ||
                *(_BYTE*)(v21 + 496) != 0) {
              result = Unit_6ca760(result, v17);
            }
            break;
          default:
            break;
          }
        }
      }
      --v12;
      v17 += 16;
    } while (v12 != 0);
  }
  return result;
}

__int64 BattleInfo_796a00(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  char v6;
  int v7;
  int v8;

  v1 = a1 + 16;
  GameRoutine_79eba0(a1 + 16);
  result = GameRoutine_79eba0(a1 + 776);
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 1) == 0 &&
          (*(_BYTE*)(a1 + 140) & 1) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11276LL) & 1) == 0 &&
          (v1 = a1 + 776, (*(_BYTE*)(a1 + 900) & 1) != 0)) {
    if (*(_BYTE*)(*(_QWORD*)(v1 + 8) + 760LL * *(unsigned __int8*)(v1 + 17) +
                  32) != 4) {
      v4 = *(_QWORD*)(a1 +
                      760LL *
                          *(unsigned __int8*)(*(_QWORD*)(v1 + 8) +
                                              760LL *
                                                  *(unsigned __int8*)(v1 + 17) +
                                              32) +
                      40);
      if (v4 != 0) {
        v5 = *(_QWORD*)(v4 + 440);
        v6 = v5 != 0 ? *(_BYTE*)(v5 + 16) : 9;
        if (((1 << v6) & 0xF1) != 0) {
          result = *(_QWORD*)(v1 + 24);
          if (result != 0) {
            v7 = *(unsigned __int16*)(v4 + 2096);
            result = GameRoutine_1211e40();
            v8 = (result + v7) & ~(((int)result + v7) >> 31);
            if (v8 >= 10000) {
              LOWORD(v8) = 10000;
            }
            *(_WORD*)(v4 + 2096) = v8;
          }
        }
      }
    }
  }
  return result;
}

__int64 BattleInfo_796b00(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 11273) & 2) == 0) {
    v1 = *(unsigned int*)(result + 11256);
    v2 = result;
    *(_BYTE*)(result + 11273) |= 2u;
    if ((_DWORD)v1 != 0) {
      v3 = result + 3064;
      do {
        GameRoutine_79e950(v2 + 16, v3);
        GameRoutine_79e950(v2 + 776, v3);
        GameRoutine_79e950(v2 + 1536, v3);
        GameRoutine_79e950(v2 + 2296, v3);
        --v1;
        v3 += 64;
      } while (v1 != 0);
    }
    GameRoutine_796720(v2);
    v4 = *(_QWORD*)(v2 + 40);
    if (v4 != 0) {
      game_Unit_CheckEquipment(v4);
    }
    v5 = *(_QWORD*)(v2 + 800);
    if (v5 != 0) {
      game_Unit_CheckEquipment(v5);
    }
    return BattleInfo_796a00(v2);
  }
  return result;
}

__int64 BattleInfo_796bc0(__int64 a1)
{
  char v1;
  __int64 v2;
  int v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  int v7;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  _DWORD* v13;
  __int64 v14;
  int v15;
  int v18;

  v2 = *(_QWORD*)(a1 + 40);
  v3 = *(unsigned __int8*)(a1 + 11272);
  if (v2 != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 0x80) != 0) {
      v1 = 0;
      goto LABEL_16;
    }
    v4 = a1;
    v5 = (_DWORD*)game_g_shared_system_skills_ptr;
    v18 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                     game_g_shared_system_skills_ptr) &
          0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)&v18) & 1) ==
        0) {
      v6 = *(_QWORD*)(v2 + 440);
      if (v6 != 0) {
        v7 = *(unsigned __int8*)(v6 + 16);
        if (((1 << v7) & 0xF1) != 0) {
          v18 = *v5 & 0xFFF;
          game_HasSkill_alt1((_QWORD*)(v2 + 1744), (unsigned int*)&v18);
          v1 = 1;
        LABEL_15:
          a1 = v4;
          goto LABEL_16;
        }
        if (v7 == 3 && *GameData_212ce90[0] != 0) {
          v1 = 1;
          goto LABEL_15;
        }
      }
    }
    v1 = 0;
    goto LABEL_15;
  }
LABEL_16:
  v9 = a1 + 16;
  v10 = (v2 != 0) & (unsigned __int8)v1;
  if (v3 == 1) {
    if ((v10 & 1) != 0) {
      return v9;
    }
    v11 = *(_QWORD*)(a1 + 800);
    v12 = a1 + 776;
    if (v11 != 0) {
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11276LL) & 0x80) != 0) {
        goto LABEL_33;
      }
      v13 = (_DWORD*)game_g_shared_system_skills_ptr;
      v18 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF;
      if ((game_HasSkill_alt1((_QWORD*)(v11 + 1744), (unsigned int*)&v18) &
           1) != 0) {
        goto LABEL_33;
      }
      v14 = *(_QWORD*)(v11 + 440);
      if (v14 == 0) {
        goto LABEL_33;
      }
      v15 = *(unsigned __int8*)(v14 + 16);
      if (((1 << v15) & 0xF1) != 0) {
        v18 = *v13 & 0xFFF;
        game_HasSkill_alt1((_QWORD*)(v11 + 1744), (unsigned int*)&v18);
        LOBYTE(v9) = 1;
        goto LABEL_34;
      }
      if (v15 != 3 || *GameData_212ce90[0] == 0) {
      LABEL_33:
        LOBYTE(v9) = 0;
      }
      else {
        LOBYTE(v9) = 1;
      }
    }
  LABEL_34:
    if (((v11 != 0) & (unsigned __int8)v9) != 0) {
      return v12;
    }
    else {
      return 0;
    }
  }
  if (v10 == 0) {
    return 0;
  }
  return v9;
}

bool BattleInfo_796d90(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  char v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if ((*(_BYTE*)(a1 + 11273) & 4) != 0) {
    return false;
  }
  v2 = *(_QWORD*)(a1 + 40);
  v3 = *(_QWORD*)(a1 + 800);
  *(_BYTE*)(a1 + 11273) |= 4u;
  if (*(_BYTE*)(a1 + 11272) != 3) {
    if (v2 != 0) {
      v5 = *(_QWORD*)(v2 + 440);
      if (v5 != 0) {
        v6 = *(_BYTE*)(v5 + 16);
        if (v3 != 0) {
          goto LABEL_6;
        }
      LABEL_9:
        v8 = 10;
        goto LABEL_13;
      }
      v6 = 9;
      if (v3 == 0) {
        goto LABEL_9;
      }
    }
    else {
      v6 = 10;
      if (v3 == 0) {
        goto LABEL_9;
      }
    }
  LABEL_6:
    v7 = *(_QWORD*)(v3 + 440);
    if (v7 != 0) {
      v8 = *(_BYTE*)(v7 + 16);
    }
    else {
      v8 = 9;
    }
  LABEL_13:
    if ((((1 << v6) & 0xF1) != 0 || ((1 << v8) & 0xF1) != 0) &&
        (GameRoutine_810fc0(v2, v3) & 1) != 0 && game_sound_g_game_sound != 0) {
      GameRoutine_a28e10(game_sound_g_game_sound, 0);
    }
  }
  if (GameData_21cd148 != 0) {
    if (v2 != 0) {
      v9 = *(unsigned __int16*)(*(_QWORD*)(v2 + 392) + 16LL);
      v10 = *(_QWORD*)(v2 + 440);
      if (v10 != 0) {
        v11 = *(unsigned __int8*)(v10 + 16);
        if (v3 != 0) {
          goto LABEL_22;
        }
      LABEL_25:
        v12 = 0xFFFFFFFFLL;
        v14 = 0xFFFFFFFFLL;
        goto LABEL_29;
      }
      v11 = 9;
      if (v3 == 0) {
        goto LABEL_25;
      }
    }
    else {
      v9 = 0xFFFFFFFFLL;
      v11 = 0xFFFFFFFFLL;
      if (v3 == 0) {
        goto LABEL_25;
      }
    }
  LABEL_22:
    v12 = *(unsigned __int16*)(*(_QWORD*)(v3 + 392) + 16LL);
    v13 = *(_QWORD*)(v3 + 440);
    if (v13 != 0) {
      v14 = *(unsigned __int8*)(v13 + 16);
    }
    else {
      v14 = 9;
    }
  LABEL_29:
    if ((GameRoutine_c8b5a0(a2, 24, v2, v9, v11, v12, v14) & 1) != 0) {
      return true;
    }
  }
  return GameData_21d3f90 != 0 &&
         (GameRoutine_eacc20(a2, 10, 0xFFFFFFFFLL, 0xFFFFFFFFLL) & 1) != 0;
}

__int64 BattleInfo_796f20(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;
  char v4;
  int v5;
  __int64 v6;
  int v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  _QWORD v19[2];

  if ((*(_BYTE*)(a1 + 11273) & 8) != 0) {
    return 0;
  }
  *(_BYTE*)(a1 + 11273) |= 8u;
  if ((((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 1) == 0) &
       *(_BYTE*)(a1 + 140)) != 0) {
    v2 = 16;
  }
  else {
    v4 = *(_BYTE*)(a1 + 900);
    v5 = *(_DWORD*)(*(_QWORD*)(a1 + 784) + 11276LL) & 1;
    if (v5 != 0 || (*(_BYTE*)(a1 + 900) & 1) == 0) {
      goto LABEL_12;
    }
    v2 = 776;
  }
  v6 = *(_QWORD*)(a1 + v2 + 24);
  if (v6 != 0 && *(_BYTE*)(v6 + 496) == 0) {
    v8 = *(unsigned __int8*)(*(_QWORD*)(v6 + 440) + 16LL);
    v9 = v8 == 3 || v8 == 0;
    if (v9 && game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 0) {
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) |= 2u;
    }
    v10 = game_g_shared_system_skills_ptr;
    LODWORD(v19[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                                 game_g_shared_system_skills_ptr + 4) &
                      0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(v6 + 1744), (unsigned int*)v19) & 1) !=
            0 &&
        *(_WORD*)(v6 + 1964) != 0) {
      v11 = *GameData_212cec0;
      if (*(_QWORD*)(v6 + 1960) != *GameData_212cec0) {
        *(_QWORD*)(v6 + 1960) = v11;
        LODWORD(v19[0]) =
            *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) + v10) & 0xFFF;
        Unit_6cd120(v6, (v11 & 0xFFFF00000000LL) != 0, v19);
      }
    }
    GameRoutine_80ecf0();
    if (GameData_21d3f90 != 0 &&
        ((v12 = *(_QWORD*)(v6 + 440)) == 0 ||
                 (unsigned __int64)(v13 = *(unsigned __int8*)(v12 + 16)) > 3
             ? (v14 = 3)
             : (v14 = GameData_1a83140[v13]),
         (GameRoutine_eacc20_alt1(a2, 8u, v14, 0xFFFFFFFF) & 1) != 0)) {
      v15 = GameData_22190b8;
      if (GameData_22190b8 != 0) {
        *(_BYTE*)(GameData_22190b8 + 32) = 0;
        *(_BYTE*)(v15 + 124) = 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 32LL))(
          GameData_221b2e8);
      (*(void (**)(__int64))(*(_QWORD*)GameData_22197d8 + 32LL))(
          GameData_22197d8);
      GameRoutine_1624930(1);
    }
    else {
      if (GameData_21cd148 == 0 ||
          ((v16 = *(_QWORD*)(v6 + 440)) == 0
               ? (v17 = 9)
               : (v17 = *(unsigned __int8*)(v16 + 16)),
           (GameRoutine_c8b5a0_alt1(
                a2, 0x10u, v6,
                *(unsigned __int16*)(*(_QWORD*)(v6 + 392) + 16LL), v17,
                0xFFFFFFFF, 0xFFFFFFFF) &
            1) == 0)) {
        v18 = *(_QWORD*)(v6 + 392);
        v19[0] = v6;
        v19[1] = v18;
        if ((game_97ec90(a2) & 1) == 0) {
          return 0;
        }
      }
      GameRoutine_810670(v6);
    }
    return 1;
  }
  if ((((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 1) == 0) &
       *(_BYTE*)(a1 + 140)) != 0) {
  LABEL_14:
    GameRoutine_80ecf0();
    return 0;
  }
  v4 = *(_BYTE*)(a1 + 900);
  v5 = *(_DWORD*)(*(_QWORD*)(a1 + 784) + 11276LL) & 1;
LABEL_12:
  result = 0;
  if (v5 == 0 && (v4 & 1) != 0) {
    goto LABEL_14;
  }
  return result;
}

__int64 BattleInfo_7971a0(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4;
  __int64 v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  char v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  char v17;
  _DWORD* v18;
  __int64 v19;
  int v20;
  __int64 result;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  char v28;
  _DWORD* v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  char v34;
  char v35;
  _DWORD* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  char v40;
  __int64 v42[12];

  if ((*(_BYTE*)(a1 + 11276) & 0x80) != 0) {
    return 0;
  }
  if (GameData_21ca2f8 != 0 && game_GameModeData_instance_ != 0) {
    v4 = a1;
    v5 = a2;
    v6 = a4;
    v7 = a3;
    v8 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&GameData_21d1f50);
    a3 = v7;
    a4 = v6;
    a2 = v5;
    v9 = v8;
    a1 = v4;
    if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
      return 0;
    }
  }
  v10 = a1;
  if ((*(_BYTE*)(a1 + 11273) & 0x10) != 0) {
    return 0;
  }
  v11 = *(unsigned __int8*)(a1 + 11272);
  v12 = *(_QWORD*)(a1 + 40);
  v13 = a1 + 16;
  *(_BYTE*)(a1 + 11273) |= 0x10u;
  if (v12 != 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 0x80) != 0) {
      v10 = 0;
      goto LABEL_23;
    }
    v14 = a1;
    v15 = a2;
    v16 = a3;
    v17 = a4;
    v18 = (_DWORD*)game_g_shared_system_skills_ptr;
    LODWORD(v42[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(v12 + 1744), (unsigned int*)v42) & 1) ==
        0) {
      v19 = *(_QWORD*)(v12 + 440);
      if (v19 != 0) {
        v20 = *(unsigned __int8*)(v19 + 16);
        if (((1 << v20) & 0xF1) != 0) {
          LODWORD(v42[0]) = *v18 & 0xFFF;
          game_HasSkill_alt1((_QWORD*)(v12 + 1744), (unsigned int*)v42);
          v10 = 1;
        LABEL_22:
          a2 = v15;
          a4 = v17;
          a3 = v16;
          a1 = v14;
          goto LABEL_23;
        }
        if (v20 == 3 && GameData_21ca2f8 != 0) {
          v10 = 1;
          goto LABEL_22;
        }
      }
    }
    v10 = 0;
    goto LABEL_22;
  }
LABEL_23:
  v23 = (v12 != 0) & (unsigned __int8)v10;
  if (v11 == 1) {
    if ((v23 & 1) == 0) {
      v24 = *(_QWORD*)(a1 + 800);
      if (v24 == 0) {
        return 0;
      }
      if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11276LL) & 0x80) != 0) {
        return 0;
      }
      v25 = a1;
      v26 = a2;
      v27 = a3;
      v28 = a4;
      v29 = (_DWORD*)game_g_shared_system_skills_ptr;
      LODWORD(v42[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                                   game_g_shared_system_skills_ptr) &
                        0xFFF;
      if ((game_HasSkill_alt1((_QWORD*)(v24 + 1744), (unsigned int*)v42) & 1) !=
          0) {
        return 0;
      }
      v30 = *(_QWORD*)(v24 + 440);
      if (v30 == 0) {
        return 0;
      }
      v31 = *(unsigned __int8*)(v30 + 16);
      v13 = v25 + 776;
      if (((1 << v31) & 0xF1) != 0) {
        LODWORD(v42[0]) = *v29 & 0xFFF;
        game_HasSkill_alt1((_QWORD*)(v24 + 1744), (unsigned int*)v42);
        a2 = v26;
        a4 = v28;
        a3 = v27;
      }
      else {
        result = 0;
        if (v31 != 3) {
          return result;
        }
        a2 = v26;
        a4 = v28;
        a3 = v27;
        if (GameData_21ca2f8 == 0) {
          return result;
        }
      }
    }
  }
  else if (v23 == 0) {
    return 0;
  }
  v32 = *(_QWORD*)(v13 + 24);
  if (v32 == 0) {
    return 0;
  }
  v33 = a2;
  v34 = a3;
  v35 = a4;
  v36 = (_DWORD*)game_g_shared_system_skills_ptr;
  LODWORD(v42[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(v32 + 1744), (unsigned int*)v42) & 1) !=
      0) {
    return 0;
  }
  v37 = *(_QWORD*)(v32 + 440);
  if (v37 == 0) {
    return 0;
  }
  v38 = *(unsigned __int8*)(v37 + 16);
  if (((1 << v38) & 0xF1) == 0) {
    if (v38 != 3 || GameData_21ca2f8 == 0) {
      return 0;
    }
    goto LABEL_46;
  }
  LODWORD(v42[0]) = *v36 & 0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(v32 + 1744), (unsigned int*)v42) & 1) !=
      0) {
    v39 = *(_QWORD*)(v32 + 440);
    v40 = v39 != 0 ? *(_BYTE*)(v39 + 16) : 9;
    if (((1 << v40) & 0xF1) != 0) {
    LABEL_46:
      BonusExpList_7ff8f0((__int64)v42, v13);
      if (GameData_21ca2f8 != 0 &&
          ((LOBYTE(v42[0]) >> 1) | (LODWORD(v42[0]) >> 8) & 0x7F) != 0 &&
          0xAAAAAAAAAAAAAAABLL *
                  ((__int64)(*(_QWORD*)(GameData_21ca2f8 + 304) -
                             *(_QWORD*)(GameData_21ca2f8 + 296)) >>
                   2) <=
              0x63) {
        game_map_BonusExpList_Add((__int64*)(GameData_21ca2f8 + 296), v42);
        if (GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 1 &&
            (*(_BYTE*)(GameData_22400f8 + 9) & 1) == 0) {
          *(_DWORD*)(GameData_22400f8 + 12) |= 0x80u;
        }
      }
      return 0;
    }
  }
  memset(v42, 0, 91);
  game_8007e0(v42, v13, 1);
  if ((v34 & 1) != 0) {
    BYTE2(v42[11]) = 1;
  }
  BYTE1(v42[11]) = v35 & 1;
  game_8c4fc0((__int64)v42, v33);
  return 1;
}

__int64 game_map_BattleInfo_TryRelianceBind(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  int v26;
  __int64 v28;
  unsigned int v29;
  int v30;
  char v32;
  __int64 v34;
  unsigned int* v35;
  __int64 v36;
  __int64 v37;
  unsigned int* v38;
  __int64 (**v39)();
  int v40;
  int v41;
  int v42;
  __int64 (***v43)();
  __int64 v44;
  __int64* v45;
  __int64 v46;
  unsigned int v47;
  int v48;
  __int64 v51;
  __int64 (***v52)();
  __int64 (**v53)();
  __int64 (***v54)();
  unsigned int* v55;
  __int64 v56;
  __int64 v57;
  struct {
    unsigned int v58[8];
    unsigned int* v59;
  } v58_;
  _BYTE v60[4];
  __int64 v61;
  __int64 v62;
  __int64 v63;

  v63 = a2;
  if ((*(_BYTE*)(a1 + 11277) & 1) != 0 ||
      *GameData_212ce90[0] != 0 && game_GameModeData_instance_ != 0 &&
          (v4 = a1,
           v5 = game_GameVariableTable_Find(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&GameData_21d1f50),
           a1 = v4, v5 != 0) &&
          *(_DWORD*)(v5 + 32) != 0 ||
      (*(_BYTE*)(a1 + 11273) & 0x20) != 0) {
  LABEL_49:
    v32 = 0;
    return v32 & 1;
  }
  *(_BYTE*)(a1 + 11273) |= 0x20u;
  if (*(_BYTE*)(a3 + 8) == 0) {
    goto LABEL_21;
  }
  v6 = game_UnitPool_Get_alt1((_BYTE*)(a3 + 8));
  if (v6 == nullptr) {
    goto LABEL_21;
  }
  if ((v6[52] & 8) != 0) {
    goto LABEL_21;
  }
  v7 = v6[49];
  if (v7 == 0 || *(_QWORD*)(v7 + 272) == 0) {
    goto LABEL_21;
  }
  v8 = v6[55];
  v9 = v8 != 0 ? *(_BYTE*)(v8 + 16) : 9;
  if (((1 << v9) & 0xF1) == 0) {
    goto LABEL_21;
  }
  v10 = v6;
  v11 = game_g_shared_system_skills_ptr;
  v58_.v58[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) +
                           game_g_shared_system_skills_ptr) &
                0xFFF;
  if ((game_HasSkill_alt1(v6 + 218, v58_.v58) & 1) != 0) {
    goto LABEL_21;
  }
  v12 = game_820d50(3);
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v12);
    if (v13 != 0 && *(_DWORD*)(v13 + 32) != 0) {
      goto LABEL_21;
    }
  }
  v58_.v58[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) + v11) & 0xFFF;
  if ((game_HasSkill_alt1(v10 + 218, v58_.v58) & 1) != 0) {
    goto LABEL_21;
  }
  v62 = (__int64)v10;
  v34 = ITarget_7730f0(a3);
  v61 = v34;
  if (v34 != 0) {
    if (GameRoutine_6fc3f0(v34)) {
      v60[0] = 0;
      v35 = (unsigned int*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v58_.v59 = v35;
      *(_QWORD*)v35 = GameData_1f98600;
      *((_QWORD*)v35 + 1) = v60;
      *((_QWORD*)v35 + 2) = &v63;
      *((_QWORD*)v35 + 3) = &v62;
      *((_QWORD*)v35 + 4) = &v61;
      BattleTarget_8fe0e0(a3, (__int64)v58_.v58);
      if (v58_.v59 == v58_.v58) {
        v36 = 32;
      }
      else {
        if (v58_.v59 == nullptr) {
        LABEL_81:
          v32 = v60[0];
          return v32 & 1;
        }
        v36 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v58_.v59 + v36))((__int64)v58_.v59);
      goto LABEL_81;
    }
    if (GameRoutine_6fc380(v61)) {
      v60[0] = 0;
      v37 = v62;
      v38 = (unsigned int*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v39 = GameData_1f98680;
      v58_.v59 = v38;
      *(_QWORD*)v38 = GameData_1f98680;
      *((_QWORD*)v38 + 1) = v60;
      *((_QWORD*)v38 + 2) = &v63;
      *((_QWORD*)v38 + 3) = &v62;
      *((_QWORD*)v38 + 4) = &v61;
      if (v37 == 0) {
      LABEL_87:
        ((void (*)(unsigned int*))v39[5])(v38);
        v32 = v60[0];
        return v32 & 1;
      }
      v40 = *(char*)(v37 + 584);
      v41 = *(char*)(v37 + 585);
      v42 = *(_DWORD*)(v37 + 592);
      v43 = (__int64 (***)(void))v38;
      v44 = v37;
    LABEL_86:
      GameRoutine_7570a0(v44, v40, v41, v42, (__int64)v58_.v58);
      v39 = *v43;
      v38 = (unsigned int*)v43;
      goto LABEL_87;
    }
  }
  if (*(_WORD*)(a3 + 32) != 0) {
    v45 = (__int64*)(a3 + 32);
  }
  else {
    v45 = &game_g_empty_item;
  }
  if (*(_WORD*)v45 == 0) {
    goto LABEL_21;
  }
  v46 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                   8LL * *(unsigned __int16*)v45);
  v47 = *(unsigned __int8*)(v46 + 72);
  v48 = *(unsigned __int8*)(v46 + 73);
  if (v47 <= 7 && ((1LL << v48) & 0x7DC) != 0) {
    LOBYTE(v61) = 0;
    v55 = (unsigned int*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    *((_QWORD*)v55 + 4) = v45;
    v58_.v59 = v55;
    *(_QWORD*)v55 = GameData_1f98700;
    *((_QWORD*)v55 + 1) = &v61;
    *((_QWORD*)v55 + 2) = &v63;
    *((_QWORD*)v55 + 3) = &v62;
    BattleTarget_8fe0e0(a3, (__int64)v58_.v58);
    if (v58_.v59 == v58_.v58) {
      v56 = 32;
    }
    else {
      if (v58_.v59 == nullptr) {
      LABEL_84:
        v32 = v61;
        return v32 & 1;
      }
      v56 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v58_.v59 + v56))((__int64)v58_.v59);
    goto LABEL_84;
  }
  if (v47 > 7 || v48 != 1) {
  LABEL_21:
    if (*(_BYTE*)(a3 + 57) == 0) {
      goto LABEL_49;
    }
    v14 = game_UnitPool_Get_alt1((_BYTE*)(a3 + 57));
    if (v14 == nullptr) {
      goto LABEL_49;
    }
    if ((v14[52] & 8) != 0) {
      goto LABEL_49;
    }
    v15 = v14[49];
    if (v15 == 0 || *(_QWORD*)(v15 + 272) == 0) {
      goto LABEL_49;
    }
    v16 = v14[55];
    v17 = v16 != 0 ? *(_BYTE*)(v16 + 16) : 9;
    if (((1 << v17) & 0xF1) == 0) {
      goto LABEL_49;
    }
    v18 = v14;
    v19 = game_g_shared_system_skills_ptr;
    v58_.v58[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) +
                             game_g_shared_system_skills_ptr) &
                  0xFFF;
    if ((game_HasSkill_alt1(v14 + 218, v58_.v58) & 1) != 0) {
      goto LABEL_49;
    }
    v20 = game_820d50(3);
    if (game_GameModeData_instance_ != 0) {
      v21 = game_GameVariableTable_Find(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)v20);
      if (v21 != 0 && *(_DWORD*)(v21 + 32) != 0) {
        goto LABEL_49;
      }
    }
    v58_.v58[0] = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x15CLL) + v19) & 0xFFF;
    if ((game_HasSkill_alt1(v18 + 218, v58_.v58) & 1) != 0) {
      goto LABEL_49;
    }
    v62 = (__int64)v18;
    v22 = *(unsigned __int16*)game_g_empty_item_ptr;
    if (*(_WORD*)(a3 + 32) != 0) {
      v22 = *(unsigned __int16*)(a3 + 32);
    }
    if (v22 == 0) {
      goto LABEL_49;
    }
    v23 = *(_QWORD*)(GameData_21c99b8 + 64);
    v24 = *(_QWORD*)(v23 + 8LL * v22);
    v25 = *(unsigned __int8*)(v24 + 72);
    v26 = *(unsigned __int8*)(v24 + 73);
    if (v25 > 7 || v26 != 1) {
      goto LABEL_49;
    }
    if (*((_WORD*)v18 + 976) == 0) {
      goto LABEL_49;
    }
    v28 = *(_QWORD*)(v23 + 8LL * *((unsigned __int16*)v18 + 976));
    v61 = v28;
    if (v28 == 0) {
      goto LABEL_49;
    }
    v29 = *(unsigned __int8*)(v28 + 72);
    v30 = *(unsigned __int8*)(v28 + 73);
    if (v29 > 7 || v30 != 1) {
      goto LABEL_49;
    }
    v60[0] = 0;
    v57 = (__int64)v18;
    v43 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    v58_.v59 = (unsigned int*)v43;
    *v43 = GameData_1f98800;
    v43[1] = (__int64 (**)(void))v60;
    v43[2] = (__int64 (**)(void))&v63;
    v43[3] = (__int64 (**)(void))&v62;
    v43[4] = (__int64 (**)(void))&v61;
    v44 = v57;
    v40 = *(char*)(v57 + 584);
    v41 = *(char*)(v57 + 585);
    v42 = *(_DWORD*)(v57 + 592);
    goto LABEL_86;
  }
  LOBYTE(v61) = 0;
  v51 = v62;
  v52 = (__int64 (***)(void))fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v53 = GameData_1f98780;
  v54 = v52;
  v52[4] = (__int64 (**)(void))v45;
  v58_.v59 = (unsigned int*)v52;
  *v52 = GameData_1f98780;
  v52[1] = (__int64 (**)(void))&v61;
  v52[2] = (__int64 (**)(void))&v63;
  v52[3] = (__int64 (**)(void))&v62;
  if (v51 != 0) {
    GameRoutine_7570a0(v51, *(char*)(v51 + 584), *(char*)(v51 + 585),
                       *(_DWORD*)(v51 + 592), (__int64)v58_.v58);
    v53 = *v54;
  }
  ((void (*)(__int64 (***)(void)))v53[5])(v54);
  v32 = v61;
  return v32 & 1;
}

bool BattleInfo_797b50(__int64 a1)
{
  __int64 v1;
  __int64 (***v3)(_QWORD);
  __int64 v4;
  __int64 (***v5)(_QWORD);
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  int v11;

  v1 = *(_QWORD*)(a1 + 40);
  if (v1 == 0 || *(_QWORD*)(v1 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11277LL) & 0x80) != 0) {
      return false;
    }
    v3 = *(__int64 (****)(_QWORD))(a1 + 48);
    if (v3 == nullptr || ((**v3)(v3) & 1) == 0) {
      return false;
    }
  }
  v4 = *(_QWORD*)(a1 + 800);
  if (v4 == 0 || *(_QWORD*)(v4 + 392) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11277LL) & 0x80) != 0) {
      return false;
    }
    v5 = *(__int64 (****)(_QWORD))(a1 + 808);
    if (v5 == nullptr || ((**v5)(v5) & 1) == 0) {
      return false;
    }
  }
  v6 = *(_QWORD*)(a1 + 40);
  if (v6 != 0 && (v7 = *(_QWORD*)(v6 + 440)) != 0) {
    v8 = *(unsigned __int8*)(v7 + 16);
    v9 = *(_QWORD*)(a1 + 800);
    if (v9 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v8 = 9;
    v9 = *(_QWORD*)(a1 + 800);
    if (v9 == 0) {
      goto LABEL_19;
    }
  }
  v10 = *(_QWORD*)(v9 + 440);
  if (v10 != 0) {
    v11 = *(unsigned __int8*)(v10 + 16);
    if (v8 == v11) {
      return false;
    }
    goto LABEL_20;
  }

LABEL_19:
  v11 = 9;
  if (v8 == 9) {
    return false;
  }

LABEL_20:
  if (v8 != 0) {
    if (v8 == 3 && v11 == 0) {
      return false;
    }
  }
  else if (v11 == 3) {
    return false;
  }
  return (*(_BYTE*)(a1 + 11276) & 2) == 0;
}

__int64 BattleInfo_797c80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  char v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  char v12;
  char v13;
  __int64 v14;
  _QWORD v15[2];
  _QWORD v16[2];
  __int64 v17;

  if ((*(_BYTE*)(*(_QWORD*)(a1 + 24) + 11276LL) & 1) != 0 ||
      (*(_BYTE*)(a1 + 140) & 1) == 0) {
    if ((*(_BYTE*)(*(_QWORD*)(a1 + 784) + 11276LL) & 1) != 0 ||
        (*(_BYTE*)(a1 + 900) & 1) == 0) {
      return 0;
    }
    v1 = 776;
  }
  else {
    v1 = 16;
  }
  v2 = *(_QWORD*)(a1 + v1 + 24);
  if (v2 == 0 || *(_BYTE*)(v2 + 496) != 0) {
    return 0;
  }
  v4 = *GameData_212d000[0];
  if (*GameData_212d000[0] != 0) {
    v5 = *(_QWORD*)(v2 + 440);
    if (v5 != 0) {
      v6 = *(unsigned __int8*)(v5 + 16);
    }
    else {
      v6 = 9;
    }
    v7 = *(unsigned __int16*)(*(_QWORD*)(v2 + 392) + 16LL);
    v8 = game_script_map_event_g_active_unit;
    game_script_map_event_g_active_unit = *(_BYTE*)(v2 + 2088);
    v9 = *(_QWORD**)(v4 + 424);
    if (*(_QWORD**)(v4 + 432) == v9) {
      goto LABEL_21;
    }
    while (((*(__int64 (**)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(
                *(_QWORD*)*v9 + 56LL))(*v9, v7, v6, 0, 0) &
            1) == 0) {
      if (++v9 == *(_QWORD**)(v4 + 432)) {
        goto LABEL_21;
      }
    }
    if (*v9 == 0) {
    LABEL_21:
      game_script_map_event_g_active_unit = v8;
    }
    else {
      v10 = __dynamic_cast(*v9, GameData_212d210[0], GameData_212d218[0], 0);
      game_script_map_event_g_active_unit = v8;
      if (v10 != 0) {
        return 1;
      }
    }
  }
  if ((GameRoutine_ec0f80(v2) & 1) == 0) {
    v11 = *(_QWORD*)(v2 + 392);
    v16[1] = 0;
    v17 = 0;
    v15[0] = v2;
    v15[1] = v11;
    v16[0] = 0;
    v12 = GameRoutine_97e390(v16, v15);
    if ((v16[0] & 1) != 0 && v17 != 0) {
      v13 = v12;
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v17);
      v12 = v13;
    }
    if ((v12 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

__int64 BattleInfo_797e40(__int64 a1, unsigned __int8* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  unsigned int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  unsigned __int64 v16;
  int v17;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  __int64 v23;
  unsigned int v24;
  int v25;

  v2 = *(unsigned int*)(a1 + 11256);
  if ((_DWORD)v2 == 0) {
    return 0;
  }
  v3 = *a2;
  v4 = a1 + 3064;
  v5 = (unsigned int*)(a1 + 3072);
  v6 = 0;
  v7 = *GameData_212c880[0];
  while (1) {
    v8 = v4 + (v6 << 6);
    if (*(unsigned __int8*)(v8 + 2) != v3) {
      goto LABEL_4;
    }
    v9 = *(unsigned __int8*)(v8 + 4);
    if ((unsigned int)(v9 - 3) < 2) {
      break;
    }
    if (v9 != 8 || (*(_DWORD*)(v8 + 8) & 0xFFF) == 0) {
      goto LABEL_4;
    }
    v20 = *(_QWORD*)(*(_QWORD*)(v7 + 64) + 8LL * (*(_DWORD*)(v8 + 8) & 0xFFF));
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v20 + 104)) &
         1) == 0) {
      return 1;
    }
    v21 = *(unsigned __int8*)(v20 + 106);
    if (*(_BYTE*)(v20 + 106) == 0 || v21 == 6) {
      v23 = *(_QWORD*)(v20 + 576);
      if (v23 == 0) {
        return 1;
      }
    }
    else {
      if (v21 != 1) {
        return 1;
      }
      v23 = *(_QWORD*)(v20 + 576);
      if (v23 == 0) {
        goto LABEL_4;
      }
    }
    v24 = *(unsigned __int8*)(v23 + 72);
    v25 = *(unsigned __int8*)(v23 + 73);
    if (v24 > 7 || v25 != 1) {
      return 1;
    }
  LABEL_4:
    if (++v6 == v2) {
      return 0;
    }
  }
  if ((*(_BYTE*)(v8 + 12) & 2) == 0) {
    goto LABEL_4;
  }
  v10 = *(unsigned __int8*)(v8 + 3);
  if (*(_WORD*)(v8 + 12LL * *(unsigned __int8*)(v8 + 3) + 18) != 0) {
    return 1;
  }
  v11 = *(_DWORD*)(v8 + 8) & 0xFFF;
  if ((_DWORD)v11 == 0 ||
      (v12 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v11) +
                         24LL))[56] == v12[57]) {
    if (v9 == 4) {
      return 1;
    }
    goto LABEL_4;
  }
  v13 = v12[52];
  v14 = v2;
  v15 = v5;
  v16 = (v12[53] - v13) >> 2;
  while (1) {
    if (*((unsigned __int8*)v15 - 6) == v10) {
      v17 = *((unsigned __int8*)v15 - 4);
      if (v17 == 16 || v17 == 14) {
        v19 = *v15;
        if (v16 >= ((v19 >> 5) & 0x7F) + 1 &&
            ((*(_DWORD*)(v13 + 4 * ((v19 >> 5) & 0x7F)) >> v19) & 1) != 0) {
          return 1;
        }
      }
    }
    --v14;
    v15 += 16;
    if (v14 == 0) {
      goto LABEL_4;
    }
  }
}

__int64 game_map_BattleInfo_GiveSkillFromItem_lambda0_Invoke(__int64 a1,
                                                             __int64 a2)
{
  return BattleInfo_795fc0_alt1(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), a2);
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda0_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 result;

  v3 = **(_QWORD**)(a1 + 16);
  v4 = **(_QWORD**)(a1 + 24);
  v6 = *(unsigned __int8*)(a2 + 5);
  v5 = a2 + 5;
  if (v6 != 0) {
    v7 = game_UnitPool_Get(v5);
  }
  else {
    v7 = 0;
  }
  result = GameRoutine_798a60(
      v3, v4, v7, *(unsigned __int8*)(**(_QWORD**)(a1 + 32) + 277LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 BattleInfo_798a60(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 (***v14)();
  _QWORD* v15;
  unsigned int v16;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  float v22;
  struct {
    __int64 v23;
    __int64 v24;
    __int64 v25;
  } v23_;
  struct {
    float32x4_t v26;
    unsigned __int64 v27;
  } v26_;

  if (a4 == 0) {
    return 0;
  }
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v26_.v26 = COERCE_AS(float32x4_t, (unsigned __int64)a2);
    v26_.v27 = 0;
    if (a2 != 0) {
      v7 = *(_QWORD*)(a2 + 392);
      LANES128(v26_.v26).n128_u64[1] = v7;
      if (v7 != 0) {
        v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 1784LL) + 272LL);
      }
      v26_.v27 = v7;
    }
    v23_.v23 = a3;
    v23_.v24 = 0;
    v23_.v25 = 0;
    if (a3 != 0) {
      v8 = *(_QWORD*)(a3 + 392);
      v23_.v24 = v8;
      if (v8 != 0) {
        v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 1784LL) + 272LL);
      }
      v23_.v25 = v8;
    }
    if ((GameReliance_8e18b0(*(_QWORD*)(game_GameModeData_instance_ + 128),
                             &v26_.v26, &v23_.v23) &
         1) != 0) {
      v26_.v26 = COERCE_AS(float32x4_t, (unsigned __int64)a2);
      v26_.v27 = 0;
      if (a2 != 0) {
        v11 = *(_QWORD*)(a2 + 392);
        LANES128(v26_.v26).n128_u64[1] = v11;
        if (v11 != 0) {
          v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
        }
        v26_.v27 = v11;
      }
      v23_.v23 = a3;
      v23_.v24 = 0;
      v23_.v25 = 0;
      if (a3 != 0) {
        v12 = *(_QWORD*)(a3 + 392);
        v23_.v24 = v12;
        if (v12 != 0) {
          v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v12 + 24) + 1784LL) + 272LL);
        }
        v23_.v25 = v12;
      }
      if ((GameReliance_8e18b0(*(_QWORD*)(v4 + 128), &v26_.v26, &v23_.v23) &
           1) != 0) {
        v13 = a4;
        v14 = GameData_212dae8;
        if (v26_.v27 != 0 && v23_.v25 != 0) {
          v15 = *(_QWORD**)(v4 + 128);
          v16 =
              GameReliance_8e17a0(v15, (__int64)&v26_.v26, (__int64)&v23_.v23);
          if ((v16 & 0x80000000) != 0) {
            v14 = &game_GameReliance_Impl_Data_vtable_ptr;
          }
          else {
            v14 = (__int64 (***)(void))(v15[1] + 56LL * v16);
          }
          v13 = a4;
        }
        if (*((_BYTE*)v14 + 10) != 0) {
          ((void (*)(__int64 (***)(void), __int64))(*v14)[4])(v14, v13);
        }
      }
      if (a2 != 0) {
        v18 = *(_QWORD*)(a2 + 392);
        if (a3 != 0) {
        LABEL_33:
          v19 = *(_QWORD*)(a3 + 392);
          goto LABEL_36;
        }
      }
      else {
        v18 = 0;
        if (a3 != 0) {
          goto LABEL_33;
        }
      }
      v19 = 0;
    LABEL_36:
      LANES128(v26_.v26).n128_u64[0] = v18;
      v23_.v23 = v19;
      if ((UnitUtil_12122d0((__int64*)&v26_.v26) & 1) != 0 &&
          (UnitUtil_12122d0(&v23_.v23) & 1) != 0) {
        if (a2 != 0) {
          UnitActor_81d2c0((void*)(&v26_.v26), a2);
          GameRoutine_9a4ec0(a1, (__int64)"UI_Deco_Bmap_Icon_Reliance",
                             (long double*)LANES128(v26_.v26).n128_u64);
        }
        if (a3 != 0) {
          UnitActor_81d2c0((void*)(&v26_.v26), a3);
          GameRoutine_9a4ec0(a1, (__int64)"UI_Deco_Bmap_Icon_Reliance",
                             (long double*)LANES128(v26_.v26).n128_u64);
        }
        if (game_ProcGameSkipView_instance_ == 0 ||
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
            (((v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) !=
                     0
                 ? (v21 = 2)
                 : (v21 = 3),
             (v21 & v20) != 0)) {
          v22 = *(float*)(a1 + 144);
          *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
          if (v22 < 0x1.e000000000000p+4f) {
            v22 = 0x1.e000000000000p+4f;
          }
          *(float*)(a1 + 144) = v22;
        }
      }
      return 1;
    }
  }
  return 0;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda1_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;

  result = GameRoutine_798a60_alt1(
      **(_QWORD**)(a1 + 16), **(_QWORD**)(a1 + 24), *a2,
      *(unsigned __int8*)(**(_QWORD**)(a1 + 32) + 277LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda2_Invoke(__int64 a1,
                                                           __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 result;

  v3 = **(_QWORD**)(a1 + 16);
  v4 = **(_QWORD**)(a1 + 24);
  v6 = *(unsigned __int8*)(a2 + 5);
  v5 = a2 + 5;
  if (v6 != 0) {
    v7 = game_UnitPool_Get(v5);
  }
  else {
    v7 = 0;
  }
  result = GameRoutine_798a60_alt1(
      v3, v4, v7,
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * **(unsigned __int16**)(a1 + 32)) +
                          91LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda3_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;

  result = GameRoutine_798a60_alt1(
      **(_QWORD**)(a1 + 16), **(_QWORD**)(a1 + 24), *a2,
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * **(unsigned __int16**)(a1 + 32)) +
                          91LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64 game_map_BattleInfo_TryRelianceBind_lambda4_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 result;

  result = GameRoutine_798a60_alt1(
      **(_QWORD**)(a1 + 16), **(_QWORD**)(a1 + 24), *a2,
      *(unsigned __int8*)(**(_QWORD**)(a1 + 32) + 91LL));
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

#pragma GCC visibility pop
