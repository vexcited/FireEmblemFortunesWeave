#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_906320(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_13261c0(__int64);
__int64 GameRoutine_133cc40(__int64);
__int64 GameRoutine_133d560(_QWORD, _QWORD);
__int64 GameRoutine_1340cb0(__int64 result, long double, long double);
__int64 GameRoutine_1341640(__int64 result);
__int64 GameRoutine_1345d80(char);
__int64 GameRoutine_134aaa0(_QWORD);
__int64 GameRoutine_1351170(_QWORD);
__int64 GameRoutine_1353fb0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_13542e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9728b0(void);
__int64 GameRoutine_995200(_QWORD);
__int64 GameRoutine_ae0560(void);
__int64 GameSubquestData_125b8e0(_QWORD);
__int64 TroopMgr_134a4a0_alt1(_QWORD) __asm__("TroopMgr_134a4a0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(void);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 game_gmap_TroopMgr_CountPlayerTroop_1349100(_QWORD, _QWORD);
__int64 game_gmap_TroopMgr_CountTroop_134e600(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 wmemchr(void);
extern _UNKNOWN GameData_1a86cf1;
extern _UNKNOWN GameData_1a8ab96;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_202bb48[])();
extern __int64 (*GameData_202ceb8[])();
extern __int64 (*GameData_202d0c8[])();
extern __int64 (*game_gmap_TroopMgr_Impl_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_21c96e8;
extern __int64 GameData_21eea40;
extern __int64 GameData_21eea50;
extern __int64 GameData_21f1618;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212ca68[122];
extern __int64* GameData_212d728[2];
void __attribute__((noreturn)) GameRoutine_13549e0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_888610(void);
__int64 TroopMgr_Unknown2(__int64 a1);
__int64 TroopMgr_1345b40();
__int64 TroopMgr_1345be0();
__int64 TroopMgr_1345d00();
__int64 TroopMgr_13460a0(__int64 a1);
__int64 TroopMgr_13461e0();
__int64 TroopMgr_1346380(__int64 a1);
__int64 TroopMgr_13463f0(__int64 result);
unsigned __int64 TroopMgr_13464c0(unsigned __int64 result, long double a2,
                                  long double a3);
__int64 TroopMgr_1347360(__int64 result);
__int64 TroopMgr_1347760();
__int64 TroopMgr_1347860();
void TroopMgr_13486a0();
unsigned __int64 TroopMgr_1348ec0();
__int64 TroopMgr_1349260(unsigned __int8 a1);
__int64 TroopMgr_134a480();
__int64 TroopMgr_134a9e0();
__int64 TroopMgr_134aa80();
__int64 TroopMgr_134b0e0(__int64 result, __int64 a2);
__int64 TroopMgr_134b560(__int64 a1, __int64 a2);
__int64 GameRoutine_1332940(__int64, __int64, __int64, int);
__int64 GameRoutine_133f780(__int64 result, _DWORD*, char);
__int64 GameRoutine_6e5900(_QWORD, _QWORD);
__int64 GameRoutine_ae4560(_QWORD);
__int64 TroopMgr_1341640(__int64 result);
__int64 TroopMgr_1351170(__int64*);
__int64 UnitActor_819400(_QWORD);
char* TroopMgr_1353fb0(signed __int64*, char*, char*);
extern _UNKNOWN GameData_1ad7cf2;
extern __int64 (*GameData_202d048[])();
extern __int64 (*GameData_202db48[])();
extern __int64 GameData_21c9e80;
void __attribute__((noreturn))
GameRoutine_13549e0_alt1(_QWORD) __asm__("GameRoutine_13549e0");
void __attribute__((noreturn))
GameRoutine_888610_alt1(_QWORD) __asm__("GameRoutine_888610");
__int64 game_gmap_TroopMgr_RequestEscapeSpecial(__int64 result);
__int64 TroopMgr_1349f40(__int64 result);
__int64 TroopMgr_134a200(__int64 result, __int64 a2);
__int64 TroopMgr_134a4a0(__int64 result);
void TroopMgr_134a720();
__int64 TroopMgr_134e920(__int64 result);
__int64 TroopMgr_134ebe0(__int64 result);
__int64 game_gmap_TroopMgr_OnUpdateChapter(__int64 a1);
__int64 game_gmap_TroopMgr_Impl_OnDeserialize_closure_Invoke(__int64 a1,
                                                             __int64 a2);
__int64 game_gmap_TroopMgr_Impl_EndMovePlayer_closure_Invoke(__int64 a1,
                                                             __int64* a2);
__int64 TroopMgr_1354a00(__int64 result, __int64 a2);
char* game_gmap_TroopMgr_Impl_UpdateCorps_closure_Invoke_1354fc0(__int64 a1,
                                                                 int* a2);
__int64 game_gmap_TroopMgr_GetAroundTroop_lambda0_Invoke(__int64 result,
                                                         __int64* a2);
bool game_gmap_TroopMgr_TryDisposOtherClan_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
__int64 game_gmap_TroopMgr_RequestEscapeSpecial_lambda0_Invoke(__int64 result,
                                                               __int64 a2);
__int64 game_gmap_TroopMgr_GetCorpsList_lambda0_Invoke(__int64 result,
                                                       __int64* a2);
__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda0_Invoke(__int64 result,
                                                              __int64* a2);
__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda1_Invoke(__int64 result,
                                                              __int64* a2);
bool game_gmap_TroopMgr_HasFixedPlayer_lambda0_Invoke(__int64 a1, __int64 a2);
bool game_gmap_TroopMgr_HasNotFixedPlayer_lambda0_Invoke(__int64 a1,
                                                         __int64 a2);
__int64 game_gmap_TroopMgr_OnUpdateChapter_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);
__int64 game_gmap_TroopMgr_DisposResonanceEnemy_lambda0_Invoke(__int64 result,
                                                               __int64** a2);
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__attribute__((swiftcall)) void
TroopMgr_134b820_alt1(PSEUDO_X8, __int64) __asm__("TroopMgr_134b820");
__int64 CorpsManager_972290(_QWORD);
__int64 CorpsManager_972960(__int64);
__int64 GameRoutine_133cc40_alt2(_QWORD) __asm__("GameRoutine_133cc40");
__int64 GameRoutine_1342210(__int64, long double, long double);
__int64 GameRoutine_1349320(__int64*);
__int64 GameRoutine_1355e40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1356160(_QWORD, _QWORD);
__int64 GameRoutine_888970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Impl_1328670(_QWORD);
__int64 ProcTroopAction_14b4920(_QWORD);
__int64 RuntimeBuffer_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SpotMgr_1332940(__int64, __int64, __int64, int);
__int64 TroopMgr_13460a0_alt1(_QWORD) __asm__("TroopMgr_13460a0");
__int64 TroopMgr_134c680_alt1(void) __asm__("TroopMgr_134c680");
__int64 TroopMgr_134e920_alt1(void) __asm__("TroopMgr_134e920");
__int64 TroopMgr_1351170_alt1(_QWORD) __asm__("TroopMgr_1351170");
__int64 TroopMgr_13512c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 TroopMgr_1352160(void);
__int64 TroopMgr_1353fb0_alt1(_QWORD, _QWORD,
                              _QWORD) __asm__("TroopMgr_1353fb0");
__int64 TroopMgr_1355080_alt1(_QWORD, _QWORD) __asm__("TroopMgr_1355080");
__int64 Troop_133e6e0(__int64);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 Troop_1342e60(_QWORD);
__int64 UnitActor_81a540(__int64, int, __int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_gmap_133d680(__int64, __int64, __int64);
__int64 game_gmap_13402f0(__int64, char, char, __n128, long double);
__int64 game_gmap_1341ed0(__int64 result);
__int64 game_gmap_TroopMgr_CountTroop_134e600_alt1(__int64, __int64) __asm__(
    "game_gmap_TroopMgr_CountTroop_134e600");
__int64 game_gmap_TroopMgr_EachBattleCorps(_QWORD*, __int64);
__int64 game_gmap_TroopMgr_EachEncountTroop_alt1(
    __int64 (*)(), __int64) __asm__("game_gmap_TroopMgr_EachEncountTroop");
__int64 game_gmap_TroopMgr_EachPlayerTroop(__int64 result, __int64);
__int64 game_gmap_TroopMgr_EachReserveUnit(__int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 GameRoutine_133cc40_alt1(__int64) __asm__("GameRoutine_133cc40");
__n128 Impl_13261c0(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
bool game_gmap_132a430(__int64);
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1a8eb23;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_21c9610;
extern __int64 (*GameData_202cb88[])();
extern __int64 (*GameData_202cc08[])();
extern __int64 (*GameData_202cc88[])();
extern __int64 (*GameData_202cd08[])();
extern __int64 (*GameData_202cd88[])();
extern __int64 (*GameData_202ce38[])();
extern __int64 (*GameData_202cfb8[])();
extern __int64 (*GameData_202d148[])();
extern __int64 (*GameData_202d1c8[])();
extern __int64 (*GameData_202d548[])();
extern __int64 (*GameData_202d6c8[])();
extern __int64 (*GameData_202d748[])();
extern __int64 (*GameData_202d848[])();
extern __int64 (*GameData_202dc38[])();
extern __int64 (*GameData_202dd48[])();
extern __int64 (*GameData_202ddc8[])();
extern __int64* GameData_212ca10[133];
extern __int64* GameData_212ca58[124];
extern __int64* GameData_212cb08[102];
extern __int64* GameData_212d708;
extern __int64* GameData_2130e70;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d740[3];
extern __int64 GameData_212d748[2];
extern __int64 GameData_212d750;
extern __int64 GameData_21ca000;
extern __int64 GameData_22416c0;
float GameRoutine_135bea0();
unsigned int* game_gmap_SpotMgr_FindSpot_alt1(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void __attribute__((noreturn))
GameRoutine_13549e0_alt2() __asm__("GameRoutine_13549e0");
void __attribute__((noreturn))
GameRoutine_13549e0_alt3(_QWORD, _QWORD) __asm__("GameRoutine_13549e0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
__int64 game_gmap_TroopMgr_GetAroundTroop(char a1);
__n128 game_gmap_TroopMgr_Impl_UpdateCorps(__int64 a1, __int64 a2);
__int64 game_gmap_TroopMgr_CanCreateCorps();
__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8 x8_, _QWORD* a1);
__attribute__((swiftcall)) void TroopMgr_134bbe0(PSEUDO_X8 x8_, __int64 a1);
void TroopMgr_134be40();
__int64 TroopMgr_134c680(__int64 a1);
__int64 TroopMgr_134ca00(__int64 a1);
__int64 game_gmap_TroopMgr_EachEncountTroop(__int64 (*a1)(), __int64 a2);
bool TroopMgr_134d080(__int64 (*a1)());
__int64 TroopMgr_134d2e0(__int64 a1);
__int64 TroopMgr_134e220(__int64 a1);
bool TroopMgr_134efc0(__int64 a1, __int64 a2);
__int64 TroopMgr_134fb00();
_QWORD* TroopMgr_13542e0(float* a1, __int64* a2, _QWORD** a3);
__int64 TroopMgr_1355080(__int64 result, __int64** a2, __n128 a3,
                         long double a4);
long double game_gmap_TroopMgr_DisposSpecial_lambda0_Invoke(__int64 a1,
                                                            __int64 a2);
void game_gmap_TroopMgr_PlayEncountMotion_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);
__int64 game_gmap_TroopMgr_HealAllUnits_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_gmap_TroopMgr_PlayEncountMotion(__int64 a1);
_QWORD*
game_gmap_TroopMgr_Impl_UpdateVisibleTroops_closure_Invoke(_QWORD* result,
                                                           __int64* a2);
__int64
game_gmap_TroopMgr_Impl_UpdateVisibleTroops_closure0_Invoke(__int64 result,
                                                            __int64 a2);

__int64 TroopMgr_Unknown2(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      64, 16, 0);
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  v4 = (__int64*)fw_memory_HeapManager_Allocate(*v2, 24, 16, 0);
  v5 = GameData_21eea40;
  v4[1] = (__int64)&GameData_21eea40;
  v4[2] = v3;
  GameData_21eea40 = (__int64)v4;
  *v4 = v5;
  *(_QWORD*)(v5 + 8) = v4;
  *(_QWORD*)v3 = game_gmap_TroopMgr_Impl_vtable;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 24) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_BYTE*)(v3 + 60) = 0;
  *(_QWORD*)(v3 + 8) = 0;
  ++GameData_21eea50;
  *(_QWORD*)(a1 + 8) = v3;
  *(_DWORD*)(v3 + 56) = -1;
  return GameRoutine_1351170(v3 + 8);
}

__int64 TroopMgr_1345b40()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 result;
  __int64 v5;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if (v1 < 0) {
    if (v2 == v3) {
      return 0;
    }
    else {
      while (1) {
        result = *v2;
        if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
          break;
        }
        if (++v2 == v3) {
          return 0;
        }
      }
    }
  }
  else if (v2 == v3) {
    return 0;
  }
  else {
    while (1) {
      v5 = *v2++;
      result = v5;
      if (*(_DWORD*)(v5 + 84) == v1) {
        break;
      }
      if (v2 == v3) {
        return 0;
      }
    }
  }
  return result;
}

__int64 TroopMgr_1345be0()
{
  __int64 v0;
  __int64 v1;
  int* v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;
  _QWORD v12[2];

  v0 = *(_QWORD*)(*GameData_212c790 + 8);
  v12[1] = &GameData_1ade186;
  v12[0] = game_HashString(&GameData_1ade186);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v12)) == 0 ||
      *(int*)(v1 + 32) < 1 ||
      (v2 = *(int**)(v0 + 32), *(int**)(v0 + 40) == v2) || (v3 = *v2) < 0 ||
      (v4 = *(__int64**)(v0 + 8), v5 = *(__int64**)(v0 + 16), v4 == v5)) {
  LABEL_9:
    v8 = *(__int64**)(v0 + 8);
    v9 = *(__int64**)(v0 + 16);
    v10 = *(_DWORD*)(v0 + 56);
    if (v10 < 0) {
      if (v8 != v9) {
        while (1) {
          result = *v8;
          if (*(_QWORD*)(*v8 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
            break;
          }
          if (++v8 == v9) {
            return 0;
          }
        }
        return result;
      }
    }
    else if (v8 != v9) {
      while (1) {
        v11 = *v8++;
        result = v11;
        if (*(_DWORD*)(v11 + 84) == v10) {
          break;
        }
        if (v8 == v9) {
          return 0;
        }
      }
      return result;
    }
    return 0;
  }
  while (1) {
    v7 = *v4++;
    result = v7;
    if (*(_DWORD*)(v7 + 84) == v3) {
      return result;
    }
    if (v4 == v5) {
      goto LABEL_9;
    }
  }
}

__int64 TroopMgr_1345d00()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 result;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v0 = *(_QWORD*)(GameData_21c96e8 + 8);
    v1 = *(__int64**)(v0 + 8);
    v2 = *(__int64**)(v0 + 16);
    while (v1 != v2) {
      result = *v1;
      if ((*(_QWORD*)(*v1 + 96) | *(_QWORD*)(*v1 + 552)) == 0 &&
          *(_DWORD*)(result + 84) == -1) {
        return result;
      }
      ++v1;
    }
  }
  return 0;
}

__int64 game_gmap_TroopMgr_GetAroundTroop(char a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _BOOL4 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  __int64* v26;
  __int64* v27;
  _QWORD v28[4];
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;

  v31 = nullptr;
  v32 = 0;
  v30 = nullptr;
  v28[0] = GameData_202ce38;
  v28[1] = &v30;
  v29 = v28;
  TroopMgr_13460a0_alt1(v28);
  if (v29 == v28) {
    v2 = 32;
  }
  else {
    if (v29 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v29 + v2))((__int64)v29);
LABEL_6:
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        goto LABEL_13;
      }
    }
  LABEL_12:
    v7 = 0;
    goto LABEL_13;
  }
  if (v5 == v6) {
    goto LABEL_12;
  }
  while (1) {
    v7 = *v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_12;
    }
  }
LABEL_13:
  v9 = v30;
  v10 = v31;
  v11 = v30;
  if (v30 != v31) {
    v12 = v30;
    v13 = (char*)v31 - (char*)v30 - 8;
    if ((~(_BYTE)v13 & 0x18) != 0) {
      v14 = ((unsigned __int8)((unsigned int)v13 >> 3) + 1) & 3;
      v12 = v30;
      while (*v12 != v7) {
        ++v12;
        if (--v14 == 0) {
          goto LABEL_18;
        }
      }
      v11 = v12;
    }
    else {
    LABEL_18:
      v11 = v31;
      if (v13 >= 0x18) {
        v11 = v12 + 2;
        while (1) {
          if (*(v11 - 2) == v7) {
            v11 -= 2;
            goto LABEL_34;
          }
          if (*(v11 - 1) == v7) {
            --v11;
            goto LABEL_34;
          }
          if (*v11 == v7) {
            goto LABEL_34;
          }
          if (v11[1] == v7) {
            break;
          }
          v15 = v11 + 2;
          v11 += 4;
          if (v15 == v31) {
            v11 = v31;
            goto LABEL_34;
          }
        }
        ++v11;
      }
    }
  }
LABEL_34:
  v16 = 0;
  v18 = (char*)v31 - (char*)v30 != 8 || v11 == v31;
  if (v31 == v30 || !v18) {
  LABEL_56:
    if (v9 == nullptr) {
      return v16;
    }
    goto LABEL_57;
  }
  TroopMgr_13512c0(v30, v31, (2 * __clz(v31 - v30)) ^ 0x7E, 1);
  if (v30 != v31) {
    TroopMgr_1352160();
  }
  if (v7 == 0) {
    v9 = v30;
    v16 = 0;
    if (v30 == nullptr) {
      return v16;
    }
    goto LABEL_57;
  }
  if (v11 == v10) {
    v9 = v30;
    v23 = v31 - 1;
    if ((a1 & 1) != 0) {
      v23 = v30;
    }
    v16 = *v23;
    goto LABEL_56;
  }
  v9 = v30;
  v19 = v31;
  if (v31 == v30) {
    v16 = 0;
    if (v30 == nullptr) {
      return v16;
    }
  }
  else {
    v20 = v31 - v30;
    v21 = 0;
    v22 = v30;
    while (*v22 != v7) {
      ++v21;
      ++v22;
      if (v20 == v21) {
        v16 = 0;
        goto LABEL_57;
      }
    }
    if ((a1 & 1) != 0) {
      v26 = v22 + 1;
      if (v20 - 1 == v21) {
        v27 = v30;
      }
      else {
        v27 = v26;
      }
      v16 = *v27;
    }
    else {
      if (v21 != 0) {
        v19 = v22;
      }
      v16 = *(v19 - 1);
    }
  }
LABEL_57:
  v31 = v9;
  v24 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v24 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  return v16;
}

__int64 TroopMgr_13460a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];

  v11[1] = &GameData_1ade186;
  result = game_HashString(&GameData_1ade186);
  v11[0] = result;
  v4 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
    v4 = result != 0 && *(_DWORD*)(result + 32) > 0;
  }
  v5 = *(_QWORD*)(GameData_21c96e8 + 8);
  v6 = *(__int64**)(v5 + 8);
  v7 = *(__int64**)(v5 + 16);
  if (v6 != v7) {
    if ((v4 & 1) != 0) {
      while (1) {
        v10 = *v6;
        if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0 &&
            (*(_DWORD*)(v10 + 84) & 0x80000000) == 0) {
          v9 = *(_QWORD*)(a1 + 32);
          v11[0] = *v6;
          if (v9 == 0) {
            goto LABEL_20;
          }
          result =
              (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v11);
        }
        if (++v6 == v7) {
          return result;
        }
      }
    }
    do {
      v8 = *v6;
      if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0 &&
          (*(_DWORD*)(v8 + 84) & 0x80000000) != 0) {
        v9 = *(_QWORD*)(a1 + 32);
        v11[0] = *v6;
        if (v9 == 0) {
        LABEL_20:
          GameRoutine_60a310(v9, v3);
        }
        result =
            (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 48LL))(v9, v11);
      }
      ++v6;
    } while (v6 != v7);
  }
  return result;
}

__int64 TroopMgr_13461e0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64 result;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  int v15;
  __int64 v16;
  _QWORD v17[2];

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      result = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
        break;
      }
      ++v2;
    }
    if ((*(_DWORD*)(result + 84) & 0x80000000) != 0) {
      v17[1] = &GameData_1ade186;
      v17[0] = game_HashString(&GameData_1ade186);
      if (game_GameModeData_instance_ != 0) {
        v7 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), v17);
        if (v7 != 0 && *(int*)(v7 + 32) >= 1) {
          v8 = *(int**)(v0 + 32);
          if (*(int**)(v0 + 40) != v8) {
            v9 = *v8;
            if ((v9 & 0x80000000) == 0) {
              v10 = *(__int64**)(v0 + 8);
              v11 = *(__int64**)(v0 + 16);
              while (v10 != v11) {
                v12 = *v10++;
                result = v12;
                if (*(_DWORD*)(v12 + 84) == v9) {
                  goto LABEL_9;
                }
              }
            }
          }
        }
      }
      v13 = *(__int64**)(v0 + 8);
      v14 = *(__int64**)(v0 + 16);
      v15 = *(_DWORD*)(v0 + 56);
      if (v15 < 0) {
        if (v13 != v14) {
          while (1) {
            result = *v13;
            if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(result + 552) == 0) {
              break;
            }
            if (++v13 == v14) {
              return 0;
            }
          }
          goto LABEL_9;
        }
      }
      else if (v13 != v14) {
        while (1) {
          v16 = *v13++;
          result = v16;
          if (*(_DWORD*)(v16 + 84) == v15) {
            break;
          }
          if (v13 == v14) {
            return 0;
          }
        }
        goto LABEL_9;
      }
      return 0;
    }
  }
  else {
    v5 = *v2;
    v4 = v2 + 1;
    result = v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v4++;
        result = v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }

LABEL_9:
  if ((*(_WORD*)(result + 544) & 0x10) != 0) {
    return GameRoutine_1345d80(1);
  }
  return result;
}

__int64 TroopMgr_1346380(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if (v2 < 0) {
    if (v3 != v4) {
      while (1) {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*v3 + 96) == 0 && v5[69] == 0) {
          break;
        }
        if (++v3 == v4) {
          return game_gmap_SpotMgr_GetCurrentSpot(a1);
        }
      }
      return *v5;
    }
    return game_gmap_SpotMgr_GetCurrentSpot(a1);
  }
  if (v3 == v4) {
    return game_gmap_SpotMgr_GetCurrentSpot(a1);
  }
  while (1) {
    v6 = *v3++;
    v5 = (_QWORD*)v6;
    if (*(_DWORD*)(v6 + 84) == v2) {
      break;
    }
    if (v3 == v4) {
      return game_gmap_SpotMgr_GetCurrentSpot(a1);
    }
  }
  return *v5;
}

__int64 TroopMgr_13463f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;

  v7 = result;
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  *(_DWORD*)(v1 + 56) = result;
  if ((result & 0x80000000) != 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
  }
  else {
    v2 = *(_QWORD*)(v1 + 40);
    v3 = wmemchr();
    v4 = *(_QWORD*)(v1 + 32);
    v5 = *(_QWORD*)(v1 + 40);
    if (v3 != 0) {
      v2 = v3;
    }
    if (v2 != v5) {
      v6 = v5 - (v2 + 4);
      if (v5 != v2 + 4) {
        memmove(v2, v2 + 4, v5 - (v2 + 4));
        v4 = *(_QWORD*)(v1 + 32);
      }
      *(_QWORD*)(v1 + 40) = v2 + v6;
    }
    return GameRoutine_1353fb0(v1 + 32, v4, &v7);
  }
  return result;
}

unsigned __int64 TroopMgr_13464c0(unsigned __int64 result, long double a2,
                                  long double a3)
{
  __int64 v3;
  unsigned __int64* v4;
  unsigned __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64* v11;
  unsigned __int64* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  bool v30;
  __int16 v31;
  __int16 v32;
  _BOOL4 v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v39;
  unsigned __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int16 v53;
  __int64* v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v59;
  unsigned __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  unsigned __int64 v67;
  char* v68;
  char* v69;
  __int64 v70;
  __int64 v71;
  char* v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  char* v77;
  __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int16 v81;
  __int16 v82;
  __int64* v83;
  __int64* v84;
  char* v85;
  __int64* v86;
  __int64 v87;
  __int64 v88;
  _QWORD* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  bool v93;
  __int64* v94;
  unsigned __int64 v95;
  __int64 v96;
  bool v97;
  char* v98;
  __int64 v99;
  __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  bool v107;
  __int16 v108;
  __int64 v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int16 v113;
  _BOOL4 v114;
  _QWORD* v115;
  _QWORD* v116;
  __int64 v117;
  __int16 v118;
  _QWORD* v119;
  __int64 v120;
  _QWORD* v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  __int64 v126;
  unsigned __int64 v127;
  _QWORD* v128;
  __int64 v129;
  int v130;
  _QWORD v131[4];
  _QWORD* v132;

  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v128 = nullptr;
  v129 = 0;
  v126 = 0;
  v127 = 0;
  v130 = 1065353216;
  v4 = *(unsigned __int64**)(v3 + 8);
  v5 = *(unsigned __int64**)(v3 + 16);
  if (v4 != v5) {
    do {
      v6 = (__int64*)*v4;
      v7 = *(_QWORD*)(*v4 + 96);
      v8 = *(_QWORD*)(*v4 + 552);
      v125 = *v4;
      if ((v7 | v8) == 0) {
        v9 = *v6;
        v131[0] = &v125;
        result = GameRoutine_13542e0(&v126, &v125, v131);
        *(_QWORD*)(result + 24) = v9;
      }
      ++v4;
    } while (v4 != v5);
    v4 = *(unsigned __int64**)(v3 + 8);
    v5 = *(unsigned __int64**)(v3 + 16);
  }
  if (GameData_21f1618 == 0 || v4 == v5) {
    goto LABEL_106;
  }
  do {
    v10 = *v4;
    if ((*(_QWORD*)(*v4 + 96) | *(_QWORD*)(*v4 + 552)) == 0) {
      v11 = *(unsigned __int64**)(v3 + 8);
      v12 = *(unsigned __int64**)(v3 + 16);
      while (1) {
        if (v11 == v12) {
          goto LABEL_10;
        }
        v14 = (__int64*)*v11;
        v15 = *(_QWORD*)(*v11 + 96);
        v16 = *(_QWORD*)(*v11 + 552);
        v125 = *v11;
        if ((v15 | v16) == 0) {
          goto LABEL_15;
        }
        v17 = (__int64*)v10;
        if (*(_QWORD*)(v10 + 32) != *(_QWORD*)(v10 + 24)) {
          if ((v18 = *(_QWORD*)(v10 + 96), v19 = *(_QWORD*)(v10 + 552),
               (v18 | v19) == 0) ||
              v18 == 0 && v19 != 0 && *(_QWORD*)(v10 + 104) == 0 &&
                  *(__int16*)(v10 + 642) * *(__int16*)(v10 + 640) *
                          *(__int16*)(v10 + 644) ==
                      0 &&
                  *(_QWORD*)(v19 + 352) == 0 ||
              (v17 = (__int64*)v10, (*(_WORD*)(v10 + 544) & 3) != 2)) {
            v17 = *(__int64**)(v10 + 24);
          }
        }
        v20 = *v17;
        v13 = *v14;
        v21 = *(_QWORD*)v10;
        if (v20 == *v14) {
          v29 = (__int64*)v14[3];
          if ((__int64*)v14[4] == v29) {
            if (v21 != v20) {
              goto LABEL_24;
            }
            goto LABEL_55;
          }
          if (v15 == 0 && (v16 != 0 ? (v30 = v14[13] == 0) : (v30 = false),
                           v30 &&
                               *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                                       *((__int16*)v14 + 322) ==
                                   0 &&
                               *(_QWORD*)(v16 + 352) == 0) ||
              (v14[68] & 3) != 2) {
            v20 = *v29;
          }
          if (v21 == v20) {
            break;
          }
        }
      LABEL_24:
        if (v21 == v13) {
          v22 = *(__int64**)(v10 + 24);
          v23 = v13;
          if (*(__int64**)(v10 + 32) != v22) {
            if ((v24 = *(_QWORD*)(v10 + 96), v25 = *(_QWORD*)(v10 + 552),
                 (v24 | v25) == 0) ||
                v24 == 0 && v25 != 0 && *(_QWORD*)(v10 + 104) == 0 &&
                    *(__int16*)(v10 + 642) * *(__int16*)(v10 + 640) *
                            *(__int16*)(v10 + 644) ==
                        0 &&
                    *(_QWORD*)(v25 + 352) == 0 ||
                (v23 = v13, (*(_WORD*)(v10 + 544) & 3) != 2)) {
              v23 = *v22;
            }
          }
          v26 = (__int64*)v14[3];
          if ((__int64*)v14[4] == v26) {
            if (v23 == v13) {
              goto LABEL_14;
            }
          }
          else {
            v27 = v14[12];
            v28 = v14[69];
            if ((v27 | v28) != 0) {
              if ((v27 != 0 || v28 == 0 || v14[13] != 0 ||
                   *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                           *((__int16*)v14 + 322) !=
                       0 ||
                   *(_QWORD*)(v28 + 352) != 0) &&
                  (v14[68] & 3) == 2) {
                if (v23 == v13) {
                  goto LABEL_75;
                }
              }
              else if (v23 == *v26) {
              LABEL_75:
                if (v27 != 0 || v28 == 0 || v14[13] != 0 ||
                    *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                            *((__int16*)v14 + 322) !=
                        0 ||
                    *(_QWORD*)(v28 + 352) != 0) {
                  v32 = *((_WORD*)v14 + 272);
                  if ((v32 & 3) == 2) {
                    goto LABEL_80;
                  }
                }
              LABEL_77:
                v32 = *((_WORD*)v14 + 272);
                if ((v32 & 3) != 2) {
                  v32 = ~v32 & 2 | v32 & 0xFFFE;
                  *((_WORD*)v14 + 272) = v32;
                }
                if ((v27 | v28) != 0) {
                LABEL_80:
                  if (v27 == 0 && v28 != 0 && v14[13] == 0 &&
                          *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                                  *((__int16*)v14 + 322) ==
                              0 &&
                          *(_QWORD*)(v28 + 352) == 0 ||
                      (v32 & 3) != 2) {
                    goto LABEL_13;
                  }
                }
                else {
                LABEL_13:
                  v13 = *v26;
                }
              LABEL_14:
                v131[0] = &v125;
                result = GameRoutine_13542e0(&v126, &v125, v131);
                *(_QWORD*)(result + 24) = v13;
              }
            }
            else if (v23 == *v26) {
              goto LABEL_77;
            }
          }
        }
      LABEL_15:
        ++v11;
      }
      if (v15 != 0 || v16 == 0 || v14[13] != 0 ||
          *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                  *((__int16*)v14 + 322) !=
              0 ||
          *(_QWORD*)(v16 + 352) != 0) {
        v31 = *((_WORD*)v14 + 272);
        if ((v31 & 3) == 2) {
          goto LABEL_49;
        }
      }
      else {
        v31 = *((_WORD*)v14 + 272);
        if ((v31 & 3) == 2) {
          v33 = true;
        LABEL_90:
          if (v16 != 0 && v33 &&
              *((__int16*)v14 + 321) * *((__int16*)v14 + 320) *
                      *((__int16*)v14 + 322) ==
                  0 &&
              *(_QWORD*)(v16 + 352) == 0) {
          LABEL_51:
            v13 = *v29;
            goto LABEL_55;
          }
        LABEL_50:
          if ((v31 & 3) != 2) {
            goto LABEL_51;
          }
        LABEL_55:
          v131[0] = &v125;
          result = GameRoutine_13542e0(&v126, &v125, v131);
          v14 = (__int64*)v125;
          *(_QWORD*)(result + 24) = v13;
          v21 = *(_QWORD*)v10;
          v13 = *v14;
          goto LABEL_24;
        }
      }
      v31 = ~v31 & 2 | v31 & 0xFFFE;
      *((_WORD*)v14 + 272) = v31;
    LABEL_49:
      if (v15 == 0) {
        v33 = v14[13] == 0;
        goto LABEL_90;
      }
      goto LABEL_50;
    }
  LABEL_10:
    ++v4;
  } while (v4 != v5);
  v4 = *(unsigned __int64**)(v3 + 8);
  v5 = *(unsigned __int64**)(v3 + 16);

LABEL_106:
  if (v4 == v5) {
    goto LABEL_162;
  }
  while (2) {
    v36 = v127;
    v37 = *v4;
    v125 = *v4;
    if (v127 != 0 && v129 != 0) {
      v131[0] = v37;
      result = std___1___hash_memory(v131, 8);
      v39 = v36 - 1;
      if ((v36 & (v36 - 1)) != 0) {
        v40 = result;
        if (result >= v36) {
          v40 = result % v36;
        }
      }
      else {
        v40 = result & v39;
      }
      v41 = *(_QWORD**)(v126 + 8 * v40);
      if (v41 != nullptr) {
        v42 = (_QWORD*)*v41;
        if (v42 != nullptr) {
          if ((v36 & v39) == 0) {
            while (1) {
              v44 = v42[1];
              if (result == v44) {
                if (v42[2] == v37) {
                  goto LABEL_110;
                }
              }
              else if ((v44 & v39) != v40) {
                goto LABEL_134;
              }
              v42 = (_QWORD*)*v42;
              if (v42 == nullptr) {
                goto LABEL_134;
              }
            }
          }
          do {
            v43 = v42[1];
            if (result == v43) {
              if (v42[2] == v37) {
                goto LABEL_110;
              }
            }
            else {
              if (v43 >= v36) {
                v43 %= v36;
              }
              if (v43 != v40) {
                break;
              }
            }
            v42 = (_QWORD*)*v42;
          } while (v42 != nullptr);
        }
      }
    }
  LABEL_134:
    v45 = *(_QWORD*)(v37 + 96);
    if (v45 != 0 && *(_BYTE*)(v45 + 32) == 1) {
      if (*(_QWORD*)(v37 + 32) != *(_QWORD*)(v37 + 24) &&
          (*(_WORD*)(v37 + 544) & 3) != 2) {
        v37 = *(_QWORD*)(v37 + 24);
      }
      v46 = *(_QWORD*)v37;
      v131[0] = GameData_202bb48;
      v132 = v131;
      v47 = game_gmap_TroopMgr_CountTroop_134e600(v46, v131);
      if (v132 == v131) {
        v48 = 32;
      LABEL_143:
        (*(void (**)(void*))(*v132 + v48))(v132);
      }
      else if (v132 != nullptr) {
        v48 = 40;
        goto LABEL_143;
      }
      v131[1] = &GameData_1a86cf1;
      v131[0] = game_HashString(&GameData_1a86cf1);
      if (game_GameModeData_instance_ != 0 &&
          (v49 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v131)) != 0) {
        v50 = *(_DWORD*)(v49 + 32);
      }
      else {
        v50 = 0;
      }
      v34 = (__int64*)v125;
      if (v47 >= v50) {
        v53 = *(_WORD*)(v125 + 544);
        if ((v53 & 3) != 2) {
          *(_WORD*)(v125 + 544) = ~v53 & 2 | v53 & 0xFFFE;
        }
      }
      else if (*(_QWORD*)(v125 + 32) != *(_QWORD*)(v125 + 24)) {
        if ((v51 = *(_QWORD*)(v125 + 96), v52 = *(_QWORD*)(v125 + 552),
             (v51 | v52) == 0) ||
            v51 == 0 && v52 != 0 && *(_QWORD*)(v125 + 104) == 0 &&
                *(__int16*)(v125 + 642) * *(__int16*)(v125 + 640) *
                        *(__int16*)(v125 + 644) ==
                    0 &&
                *(_QWORD*)(v52 + 352) == 0 ||
            (*(_WORD*)(v125 + 544) & 3) != 2) {
          v34 = *(__int64**)(v125 + 24);
        }
      }
      v35 = *v34;
      v131[0] = &v125;
      result = GameRoutine_13542e0(&v126, &v125, v131);
      *(_QWORD*)(result + 24) = v35;
    }
  LABEL_110:
    if (++v4 != v5) {
      continue;
    }
    break;
  }
  v4 = *(unsigned __int64**)(v3 + 8);
  v5 = *(unsigned __int64**)(v3 + 16);

LABEL_162:
  if (v4 != v5) {
    do {
      v56 = v127;
      v57 = *v4;
      v125 = *v4;
      if (v127 != 0 && v129 != 0) {
        v131[0] = v57;
        result = std___1___hash_memory(v131, 8);
        v59 = v56 - 1;
        if ((v56 & (v56 - 1)) != 0) {
          v60 = result;
          if (result >= v56) {
            v60 = result % v56;
          }
        }
        else {
          v60 = result & v59;
        }
        v61 = *(_QWORD**)(v126 + 8 * v60);
        if (v61 != nullptr) {
          v62 = (_QWORD*)*v61;
          if (v62 != nullptr) {
            if ((v56 & v59) == 0) {
              while (1) {
                v64 = v62[1];
                if (result == v64) {
                  if (v62[2] == v57) {
                    goto LABEL_166;
                  }
                }
                else if ((v64 & v59) != v60) {
                  goto LABEL_190;
                }
                v62 = (_QWORD*)*v62;
                if (v62 == nullptr) {
                  goto LABEL_190;
                }
              }
            }
            do {
              v63 = v62[1];
              if (result == v63) {
                if (v62[2] == v57) {
                  goto LABEL_166;
                }
              }
              else {
                if (v63 >= v56) {
                  v63 %= v56;
                }
                if (v63 != v60) {
                  break;
                }
              }
              v62 = (_QWORD*)*v62;
            } while (v62 != nullptr);
          }
        }
      }
    LABEL_190:
      v65 = *(_QWORD*)(v57 + 96);
      if (v65 != 0 && *(_BYTE*)(v65 + 32) == 2) {
        v66 = v128;
        if (v128 != nullptr) {
          v67 = 0;
          v68 = nullptr;
          v69 = nullptr;
          do {
            v70 = v66[2];
            v71 = *(_QWORD*)(v70 + 96);
            if (v71 != 0 && *(_BYTE*)(v71 + 32) == 1 &&
                *(_QWORD*)v125 == v66[3]) {
              if ((unsigned __int64)v68 < v67) {
                *(_QWORD*)v68 = v70;
                v68 += 8;
              }
              else {
                v72 = (char*)(v68 - v69);
                v73 = (v68 - v69) >> 3;
                v74 = v73 + 1;
                if ((unsigned __int64)(v73 + 1) >> 61 != 0) {
                  GameRoutine_888610();
                }
                if ((__int64)(v67 - (_QWORD)v69) >> 2 > v74) {
                  v74 = (__int64)(v67 - (_QWORD)v69) >> 2;
                }
                if (v67 - (unsigned __int64)v69 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v75 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v75 = v74;
                }
                if (v75 != 0) {
                  if (v75 >> 61 != 0) {
                    GameRoutine_60a210(result);
                  }
                  v76 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       8 * v75, 16, 0);
                  v70 = v66[2];
                }
                else {
                  v76 = 0;
                }
                v67 = v76 + 8 * v75;
                v77 = (char*)(v68 - v69);
                v78 = (__int64)&v72[v76 + -8 * v73];
                *(_QWORD*)&v72[v76] = v70;
                v68 = &v72[v76 + 8];
                result = memcpy(v78, v69, v77);
                if (v69 != nullptr) {
                  v79 = 128;
                  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                    v79 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      fw_memory_g_heap_manager + v79);
                }
                v69 = (char*)v78;
              }
            }
            v66 = (_QWORD*)*v66;
          } while (v66 != nullptr);
          if (v68 != v69) {
            v80 = v125;
            v81 = *(_WORD*)(v125 + 544);
            if ((v81 & 3) != 1) {
              if ((v81 & 2) != 0) {
                v82 = v81 & 0xFFFC | 1;
              }
              else {
                v82 = v81 | 1;
              }
              *(_WORD*)(v125 + 544) = v82;
            }
            v83 = *(__int64**)(v80 + 24);
            v84 = *(__int64**)(v80 + 32);
            v85 = v69;
            if (v84 == v83) {
              v86 = (__int64*)v80;
            }
            else {
              v86 = *(__int64**)(v80 + 24);
            }
            v87 = *v86;
            while (1) {
              v89 = *(_QWORD**)v85;
              if (v87 == **(_QWORD**)v85) {
                v90 = (__int64*)v89[3];
                v88 = v87;
                if ((__int64*)v89[4] != v90) {
                  if ((v91 = v89[12], v92 = v89[69], (v91 | v92) == 0) ||
                      v91 == 0 &&
                          (v92 != 0 ? (v93 = v89[13] == 0) : (v93 = false),
                           v93 &&
                               *((__int16*)v89 + 321) * *((__int16*)v89 + 320) *
                                       *((__int16*)v89 + 322) ==
                                   0 &&
                               *(_QWORD*)(v92 + 352) == 0) ||
                      (v88 = v87, (v89[68] & 3) != 2)) {
                    v88 = *v90;
                  }
                }
                if (*(_QWORD*)v80 == v88) {
                  break;
                }
              }
              v85 += 8;
              if (v85 == v68) {
                goto LABEL_248;
              }
            }
            if (v84 != v83) {
              *(_QWORD*)(v80 + 32) = v84 - 1;
              if (v83 != v84 - 1) {
                v94 = v84 - 2;
                if (v83 < v94) {
                  v95 = (unsigned __int64)(v83 + 1);
                  do {
                    v96 = *(_QWORD*)(v95 - 8);
                    *(_QWORD*)(v95 - 8) = *v94;
                    *v94-- = v96;
                    v97 = v95 >= (unsigned __int64)v94;
                    v95 += 8LL;
                  } while (!v97);
                }
              }
              GameRoutine_133d560(v80 + 24, v80);
              v80 = v125;
              v83 = *(__int64**)(v125 + 24);
              v84 = *(__int64**)(v125 + 32);
            }
          LABEL_248:
            v98 = v69;
            while (1) {
              v100 = *(_QWORD*)v98;
              v101 = (__int64*)v80;
              if (v84 != v83) {
                if ((v102 = *(_QWORD*)(v80 + 96), v103 = *(_QWORD*)(v80 + 552),
                     (v102 | v103) == 0) ||
                    v102 == 0 && v103 != 0 && *(_QWORD*)(v80 + 104) == 0 &&
                        *(__int16*)(v80 + 642) * *(__int16*)(v80 + 640) *
                                *(__int16*)(v80 + 644) ==
                            0 &&
                        *(_QWORD*)(v103 + 352) == 0 ||
                    (v101 = (__int64*)v80, (*(_WORD*)(v80 + 544) & 3) != 2)) {
                  v101 = v83;
                }
              }
              v99 = *v101;
              if (v99 == *(_QWORD*)v100) {
                v104 = *(__int64**)(v100 + 24);
                if (*(__int64**)(v100 + 32) != v104) {
                  if ((v105 = *(_QWORD*)(v100 + 96),
                       v106 = *(_QWORD*)(v100 + 552), (v105 | v106) == 0) ||
                      v105 == 0 &&
                          (v106 != 0 ? (v107 = *(_QWORD*)(v100 + 104) == 0)
                                     : (v107 = false),
                           v107 &&
                               *(__int16*)(v100 + 642) *
                                       *(__int16*)(v100 + 640) *
                                       *(__int16*)(v100 + 644) ==
                                   0 &&
                               *(_QWORD*)(v106 + 352) == 0) ||
                      (*(_WORD*)(v100 + 544) & 3) != 2) {
                    v99 = *v104;
                  }
                }
                if (*(_QWORD*)v80 == v99) {
                  break;
                }
              }
              v98 += 8;
              if (v98 == v68) {
                goto LABEL_277;
              }
            }
            v108 = *(_WORD*)(v80 + 544);
            if ((v108 & 3) != 2) {
              *(_WORD*)(v80 + 544) = ~v108 & 2 | v108 & 0xFFFE;
            }
          }
        LABEL_277:
          if (v69 != nullptr) {
            v109 = 128;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
              v109 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v109);
          }
        }
        v54 = (__int64*)v125;
        v110 = *(__int64**)(v125 + 24);
        if (*(__int64**)(v125 + 32) != v110) {
          v111 = *(_QWORD*)(v125 + 96);
          v112 = *(_QWORD*)(v125 + 552);
          if ((v111 | v112) == 0 ||
              v111 == 0 && v112 != 0 && *(_QWORD*)(v125 + 104) == 0 &&
                  *(__int16*)(v125 + 642) * *(__int16*)(v125 + 640) *
                          *(__int16*)(v125 + 644) ==
                      0 &&
                  *(_QWORD*)(v112 + 352) == 0 ||
              (((v113 = *(_WORD*)(v125 + 544)) & 1) == 0
                   ? (v114 = (v113 & 2) == 0)
                   : (v114 = true),
               v114)) {
            v115 = v128;
            if (v128 != nullptr) {
              while (1) {
                v117 = *(_QWORD*)(v115[2] + 96LL);
                if (v117 != 0 && *(_BYTE*)(v117 + 32) == 1) {
                  if ((v111 | v112) == 0 ||
                      v111 == 0 && v112 != 0 && *(_QWORD*)(v125 + 104) == 0 &&
                          *(__int16*)(v125 + 642) * *(__int16*)(v125 + 640) *
                                  *(__int16*)(v125 + 644) ==
                              0 &&
                          *(_QWORD*)(v112 + 352) == 0 ||
                      (v116 = (_QWORD*)v125,
                       (*(_WORD*)(v125 + 544) & 3) != 2)) {
                    v116 = *(_QWORD**)(v125 + 24);
                  }
                  if (*v116 == v115[3]) {
                    break;
                  }
                }
                v115 = (_QWORD*)*v115;
                if (v115 == nullptr) {
                  goto LABEL_289;
                }
              }
              v118 = *(_WORD*)(v125 + 544);
              if ((v118 & 3) != 2) {
                *(_WORD*)(v125 + 544) = ~v118 & 2 | v118 & 0xFFFE;
              }
            }
          }
        LABEL_289:
          if ((v111 | v112) == 0 ||
              v111 == 0 && v112 != 0 && v54[13] == 0 &&
                  *((__int16*)v54 + 321) * *((__int16*)v54 + 320) *
                          *((__int16*)v54 + 322) ==
                      0 &&
                  *(_QWORD*)(v112 + 352) == 0 ||
              (v54[68] & 3) != 2) {
            v54 = v110;
          }
        }
        v55 = *v54;
        v131[0] = &v125;
        result = GameRoutine_13542e0(&v126, &v125, v131);
        *(_QWORD*)(result + 24) = v55;
      }
    LABEL_166:
      ++v4;
    } while (v4 != v5);
    v4 = *(unsigned __int64**)(v3 + 8);
    v5 = *(unsigned __int64**)(v3 + 16);
  }
  while (v4 != v5) {
    result = *v4;
    if ((*(_QWORD*)(*v4 + 96) | *(_QWORD*)(*v4 + 552)) != 0) {
      result = GameRoutine_1340cb0(result, a2, a3);
    }
    ++v4;
  }
  v119 = v128;
  *(_BYTE*)(v3 + 60) = 1;
  if (v119 != nullptr) {
    v120 = fw_memory_g_heap_manager_ptr;
    do {
      v121 = (_QWORD*)*v119;
      if (*(_QWORD*)(*(_QWORD*)v120 + 200LL) != 0) {
        v122 = 128;
      }
      else {
        v122 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v120 + v122);
      v119 = v121;
    } while (v121 != nullptr);
  }
  v123 = v126;
  v126 = 0;
  if (v123 != 0) {
    v124 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v124 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v124);
  }
  return result;
}

__int64 TroopMgr_1347360(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  __int64* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64* v13;
  char* v14;
  char* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 i;
  __int64 v21;
  char* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  v4 = *(_DWORD*)(v1 + 56);
  if (v4 < 0) {
    if (v2 == v3) {
      goto LABEL_34;
    }
    v13 = *(__int64**)(v1 + 8);
    while (1) {
      v6 = (_QWORD*)*v13;
      if (*(_QWORD*)(*v13 + 96) == 0 && v6[69] == 0) {
        break;
      }
      if (++v13 == v3) {
      LABEL_6:
        v6 = nullptr;
        break;
      }
    }
  }
  else {
    if (v2 == v3) {
      goto LABEL_34;
    }
    v5 = *(__int64**)(v1 + 8);
    while (1) {
      v7 = *v5++;
      v6 = (_QWORD*)v7;
      if (*(_DWORD*)(v7 + 84) == v4) {
        break;
      }
      if (v5 == v3) {
        goto LABEL_6;
      }
    }
  }
  if (v2 != v3) {
    do {
      v8 = *v2;
      if ((*(_QWORD*)(*v2 + 96) | *(_QWORD*)(*v2 + 552)) != 0) {
        if ((result = GameRoutine_1341640(*v2), v6[4] == v6[3]) ||
            *(_QWORD*)(v8 + 32) == *(_QWORD*)(v8 + 24) ||
            (v9 = *(_QWORD*)(v8 + 96), v10 = *(_QWORD*)(v8 + 552),
             (v9 | v10) != 0) &&
                (v9 != 0 ||
                 (v10 != 0 ? (v11 = *(_QWORD*)(v8 + 104) == 0) : (v11 = false),
                  !v11 ||
                      *(__int16*)(v8 + 642) * *(__int16*)(v8 + 640) *
                              *(__int16*)(v8 + 644) !=
                          0 ||
                      *(_QWORD*)(v10 + 352) != 0)) &&
                (*(_WORD*)(v8 + 544) & 3) == 2) {
          if (*(_BYTE*)(*(_QWORD*)v8 + 113LL) == 1 &&
              *(_BYTE*)(v8 + 512) != 0) {
            v12 = GameData_21f1618;
            *(_BYTE*)(v8 + 512) = 0;
            if (v12 != 0) {
              result = GameRoutine_995200(v8 + 112);
            }
          }
        }
      }
      ++v2;
    } while (v2 != v3);
    v2 = *(__int64**)(v1 + 8);
    v3 = *(__int64**)(v1 + 16);
  }

LABEL_34:
  if (v2 != v3) {
    v14 = nullptr;
    v15 = nullptr;
    v16 = 0;
    v17 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v18 = (_QWORD*)*v2;
      v19 = *(_QWORD*)(*v2 + 96);
      if (v19 != 0 && *(_BYTE*)(v19 + 32) == 2) {
        for (i = *(_QWORD*)(v1 + 8); i != *(_QWORD*)(v1 + 16); i += 8) {
          v21 = *(_QWORD*)(*(_QWORD*)i + 96LL);
          if (v21 != 0 && *(_BYTE*)(v21 + 32) == 1 && *v18 == **(_QWORD**)i) {
            if ((unsigned __int64)v15 < v16) {
              *(_QWORD*)v15 = v18;
              v15 += 8;
            }
            else {
              v22 = (char*)(v15 - v14);
              v23 = (v15 - v14) >> 3;
              v24 = v23 + 1;
              if ((unsigned __int64)(v23 + 1) >> 61 != 0) {
                GameRoutine_888610();
              }
              if ((__int64)(v16 - (_QWORD)v14) >> 2 > v24) {
                v24 = (__int64)(v16 - (_QWORD)v14) >> 2;
              }
              if (v16 - (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
                v25 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v25 = v24;
              }
              if (v25 != 0) {
                if (v25 >> 61 != 0) {
                  GameRoutine_60a210(result);
                }
                v26 = fw_memory_HeapManager_Allocate(*v17, 8 * v25, 16, 0);
              }
              else {
                v26 = 0;
              }
              v16 = v26 + 8 * v25;
              v27 = (char*)(v15 - v14);
              v28 = (__int64)&v22[v26 + -8 * v23];
              *(_QWORD*)&v22[v26] = v18;
              v15 = &v22[v26 + 8];
              result = memcpy(v28, v14, v27);
              if (v14 != nullptr) {
                v29 = 128;
                if (*(_QWORD*)(*v17 + 200LL) == 0) {
                  v29 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v17 + v29);
              }
              v14 = (char*)v28;
            }
            break;
          }
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v14 != v15) {
      v30 = *(_QWORD*)(v1 + 16);
      if (v30 != *(_QWORD*)(v1 + 8)) {
        v31 = v14;
        do {
          v32 = *(_QWORD*)(v1 + 8);
          if (v30 != v32) {
            v33 = (v30 - v32) >> 3;
            v34 = 0;
            while (*(_QWORD*)(v32 + 8 * v34) != *(_QWORD*)v31) {
              if (v33 == ++v34) {
                goto LABEL_66;
              }
            }
            if ((v34 & 0x8000000000000000LL) == 0) {
              v35 = (unsigned int)v34;
              if ((unsigned int)v34 >= v33) {
                GameRoutine_13549e0();
              }
              if (*(_QWORD*)(v32 + 8LL * (unsigned int)v34) != 0) {
                GameRoutine_133cc40(*(_QWORD*)(v32 + 8LL * (unsigned int)v34));
                if (*(_QWORD*)(*v17 + 200LL) != 0) {
                  v36 = 128;
                }
                else {
                  v36 = 56;
                }
                result = nn_mem_StandardAllocator_Free(*v17 + v36);
                v32 = *(_QWORD*)(v1 + 8);
                v30 = *(_QWORD*)(v1 + 16);
              }
              v37 = v32 + 8 * v35;
              v38 = v30 - (v37 + 8);
              if (v30 != v37 + 8) {
                result = memmove(v37, v37 + 8, v30 - (v37 + 8));
              }
              v30 = v37 + v38;
              *(_QWORD*)(v1 + 16) = v37 + v38;
            }
          }
        LABEL_66:
          v31 += 8;
        } while (v31 != v15);
      }
    }
    if (v14 != nullptr) {
      v39 = 128;
      if (*(_QWORD*)(*v17 + 200LL) == 0) {
        v39 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*v17 + v39);
    }
  }
  *(_BYTE*)(v1 + 60) = 0;
  return result;
}

__int64 TroopMgr_1347760()
{
  __int64 v0;
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_QWORD**)(v0 + 8);
  v2 = *(_QWORD**)(v0 + 16);
  if (v1 == v2) {
    return 0;
  }
  v3 = *(_QWORD**)(v0 + 8);
  while (1) {
    v4 = *v3;
    v5 = *(_QWORD*)(*v3 + 96LL);
    if (v5 != 0 && *(_BYTE*)(v5 + 32) == 1) {
      v6 = *(__int64**)(v4 + 24);
      if (*(__int64**)(v4 + 32) != v6 && (*(_WORD*)(v4 + 544) & 3) != 2) {
        v7 = *v6;
        if (*v6 != 0) {
          break;
        }
      }
    }
  LABEL_3:
    if (++v3 == v2) {
      return 0;
    }
  }
  v8 = *(_QWORD*)(v7 + 120);
  if (v8 != GameRoutine_ae0560()) {
    v9 = v1;
    while (1) {
      v10 = (_QWORD*)*v9;
      if (*(_QWORD*)*v9 == v7 && v10[12] == 0 && v10[69] == 0) {
        break;
      }
      if (++v9 == v2) {
        goto LABEL_3;
      }
    }
  }
  return 1;
}

__int64 TroopMgr_1347860()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(__int64**)(v0 + 8);
  v2 = *(__int64**)(v0 + 16);
  while (v1 != v2) {
    v3 = *v1;
    v4 = *(_QWORD*)(*v1 + 96);
    if (v4 != 0 && *(_BYTE*)(v4 + 32) == 1) {
      v5 = *(__int64**)(v3 + 24);
      if (*(__int64**)(v3 + 32) != v5 && (*(_WORD*)(v3 + 544) & 3) != 2) {
        v6 = *v5;
        if (*v5 != 0 && (unsigned __int8)GameRoutine_13261c0(*v5) == 8) {
          v7 = *(_QWORD*)(v6 + 280);
          if (v7 != 0 &&
              ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7) !=
                   1 ||
               ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 280) + 112LL))(
                    *(_QWORD*)(v6 + 280)) &
                1) == 0)) {
            v8 = *(_QWORD*)(v6 + 280);
            if (v8 != 0 && (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v8 +
                                                             24LL))(v8) == 4) {
              return v6;
            }
          }
        }
      }
    }
    ++v1;
  }
  return 0;
}

void TroopMgr_13486a0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int16* v3;
  _WORD* v4;
  __int16 v5;

  v0 = *(_QWORD*)(*GameData_212c790 + 8);
  v1 = *(_QWORD*)(v0 + 8);
  v2 = *(_QWORD*)(v0 + 16);
  if (v1 != v2) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v3 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    do {
      v4 = *(_WORD**)v1;
      if (*(__int16*)(*(_QWORD*)v1 + 642LL) *
                  *(__int16*)(*(_QWORD*)v1 + 640LL) *
                  *(__int16*)(*(_QWORD*)v1 + 644LL) !=
              0 &&
          ((__int64)*(__int16*)(*(_QWORD*)v1 + 642LL) << 24) +
                  ((__int64)*(__int16*)(*(_QWORD*)v1 + 640LL) << 32) +
                  ((__int64)*(__int16*)(*(_QWORD*)v1 + 644LL) << 18) +
                  ((__int64)(__int16)v4[323] << 12) +
                  ((__int64)(__int16)v4[324] << 6) + (__int16)v4[325] <
              (unsigned __int64)(((__int64)v3[1] << 24) + ((__int64)*v3 << 32) +
                                 ((__int64)v3[2] << 18) +
                                 ((__int64)v3[3] << 12) +
                                 ((__int64)v3[4] << 6) + v3[5])) {
        v5 = v4[272];
        if ((v5 & 0x40) == 0) {
          v4[272] = v5 | 0x40;
        }
      }
      v1 += 8;
    } while (v1 != v2);
  }
}

unsigned __int64 TroopMgr_1348ec0()
{
  unsigned __int64 result;
  __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  _QWORD* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  _BYTE* v12;
  int v13;
  bool v14;
  __int64 v15;
  __int64** v16;
  __int64** v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int16 v23;
  _QWORD v24[4];
  _QWORD* v25;

  result = game_HashString(&GameData_1a8ab96);
  v1 = *GameData_212ca68[0];
  v2 = *(_QWORD*)(*GameData_212ca68[0] + 96);
  if ((v2 & (v2 - 1)) != 0) {
    v3 = result;
    if (result >= v2) {
      v3 = result % v2;
    }
    v4 = *(_QWORD**)(*(_QWORD*)(v1 + 88) + 8 * v3);
    do {
      do {
        v4 = (_QWORD*)*v4;
      } while (v4[1] != result);
    } while (v4[2] != result);
  }
  else {
    v4 = *(_QWORD**)(*(_QWORD*)(v1 + 88) + 8 * ((v2 - 1) & result));
    do {
      do {
        v4 = (_QWORD*)*v4;
      } while (v4[1] != result);
    } while (v4[2] != result);
  }
  v5 = *(__int64***)(v4[3] + 40LL);
  v6 = *v5;
  v7 = v5[1];
  if (*v5 != v7) {
    v8 = (_QWORD*)GameData_212c7b0[0];
    v9 = GameData_212c780;
    v10 = GameData_212c790;
    do {
      v11 = *v6;
      v12 = *(_BYTE**)(*v6 + 48);
      if (v12 == nullptr) {
        goto LABEL_13;
      }
      if (*v12 == 0) {
        goto LABEL_13;
      }
      result = GameSubquestData_125b8e0(*v8);
      if (result == 0) {
        goto LABEL_13;
      }
      v13 = *(unsigned __int8*)(*(_QWORD*)result + 112LL);
      v14 = v13 == 3 || v13 == 0;
      if (v14 && *(_BYTE*)(result + 9) == 2 &&
          *(_BYTE*)(*(_QWORD*)(*v9 + 8) + 208LL) != 1) {
        goto LABEL_13;
      }
      v15 = *(_QWORD*)(*v10 + 8);
      v16 = *(__int64***)(v15 + 8);
      v17 = *(__int64***)(v15 + 16);
      if (v16 == v17) {
        goto LABEL_13;
      }
      while (1) {
        v19 = *v16++;
        v18 = v19;
        if (v19[11] == v11) {
          break;
        }
        if (v16 == v17) {
          goto LABEL_13;
        }
      }
      v20 = *v18;
      v24[0] = GameData_202ceb8;
      v25 = v24;
      v21 = game_gmap_TroopMgr_CountPlayerTroop_1349100(v20, v24);
      result = (unsigned __int64)v25;
      if (v25 == v24) {
        v22 = 32;
      }
      else {
        if (v25 == nullptr) {
          goto LABEL_33;
        }
        v22 = 40;
      }
      result = (*(__int64 (**)(void*))(*v25 + v22))(v25);
    LABEL_33:
      if (v21 <= 0) {
        v23 = *((_WORD*)v18 + 272);
        if ((v23 & 0x40) == 0) {
          *((_WORD*)v18 + 272) = v23 | 0x40;
        }
      }
    LABEL_13:
      ++v6;
    } while (v6 != v7);
  }
  return result;
}

__int64 TroopMgr_1349260(unsigned __int8 a1)
{
  int v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  _QWORD v5[2];
  _QWORD v6[4];
  __int64 v7;

  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
      0) {
    return 0;
  }
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
  }
  if (v1 == a1) {
    return 0;
  }
  result = game_GetHero();
  if (result != 0) {
    v5[0] = 0;
    v5[1] = result;
    GameRoutine_906320((void*)v6, game_GameModeData_instance_ + 136, v5);
    if (v7 == 0) {
      return 0;
    }
    result = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v7 + 64));
    if (result != 0) {
      v3 = *(_QWORD*)(result + 120);
      v4 = result;
      if (v3 == GameRoutine_ae0560()) {
        return 0;
      }
      else {
        return v4;
      }
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_RequestEscapeSpecial(__int64 result)
{
  __int64* v1;
  __int64* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 (*v12)(_QWORD);
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char* i;
  __int64 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  _QWORD v33[4];
  _QWORD* v34;
  char v35;
  __int64 v36;

  v1 = *(__int64**)(GameData_21c9e80 + 64);
  v2 = *(__int64**)(GameData_21c9e80 + 72);
  if (v1 != v2) {
    v3 = nullptr;
    v4 = nullptr;
    v5 = 0;
    do {
      v6 = *v1;
      v7 = *(__int64**)(*v1 + 24);
      v8 = *v7;
      v9 = v7[1];
      if (v9 != *v7) {
        while (1) {
          if (*(_QWORD*)v8 != 0) {
            v10 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v11 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v8);
              if (v11 != 0) {
                v12 = *(__int64 (**)(_QWORD))(v11 + 72);
                v13 = *(_QWORD*)(v11 + 80);
                v14 = (_QWORD*)(v11 + (v13 >> 1));
                if ((v13 & 1) != 0) {
                  v12 = *(__int64 (**)(_QWORD))((char*)v12 + *v14);
                }
                result = v12(v14);
              }
              else {
                result = 1;
              }
            }
            if (*(_BYTE*)(v8 + 16) != ((v10 == 0) | result & 1)) {
              break;
            }
          }
          v8 += 24;
          if (v8 == v9) {
            goto LABEL_4;
          }
        }
        result = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v6 + 48));
        if (result != 0) {
          v15 = *(_QWORD*)(v6 + 64);
          if (v15 != 0) {
            v16 = *(_QWORD*)(GameData_21c96e8 + 8);
            v17 = *(_QWORD**)(v16 + 8);
            v18 = *(_QWORD**)(v16 + 16);
            while (v17 != v18) {
              v19 = (_QWORD*)*v17;
              if (*(_QWORD*)*v17 == result && v19[69] == v15) {
                if ((unsigned __int64)v4 < v5) {
                  *(_QWORD*)v4 = v19;
                  v4 += 8;
                }
                else {
                  v20 = (char*)(v4 - v3);
                  v21 = (v4 - v3) >> 3;
                  v22 = v21 + 1;
                  if ((unsigned __int64)(v21 + 1) >> 61 != 0) {
                    GameRoutine_888610_alt1(result);
                  }
                  if ((__int64)(v5 - (_QWORD)v3) >> 2 > v22) {
                    v22 = (__int64)(v5 - (_QWORD)v3) >> 2;
                  }
                  if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v23 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v23 = v22;
                  }
                  if (v23 != 0) {
                    if (v23 >> 61 != 0) {
                      GameRoutine_60a210(result);
                    }
                    v24 = fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
                  }
                  else {
                    v24 = 0;
                  }
                  v5 = v24 + 8 * v23;
                  v25 = (char*)(v4 - v3);
                  v26 = (__int64)&v20[v24 + -8 * v21];
                  *(_QWORD*)&v20[v24] = v19;
                  v4 = &v20[v24 + 8];
                  result = memcpy(v26, v3, v25);
                  if (v3 != nullptr) {
                    v27 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v27 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
                  }
                  v3 = (char*)v26;
                }
                break;
              }
              ++v17;
            }
          }
        }
      }
    LABEL_4:
      ++v1;
    } while (v1 != v2);
    if (v3 != v4) {
      for (i = v3; i != v4; i += 8) {
        v29 = *(_QWORD*)i;
        v35 = 0;
        v33[0] = GameData_202d048;
        v33[1] = &v35;
        v33[2] = &v36;
        v34 = v33;
        v36 = v29;
        GameRoutine_ae4560(v33);
        result = (__int64)v34;
        if (v34 == v33) {
          v30 = 32;
        }
        else {
          if (v34 == nullptr) {
            goto LABEL_47;
          }
          v30 = 40;
        }
        result = (*(__int64 (**)(void*))(*v34 + v30))(v34);
      LABEL_47:
        if ((v35 & 1) == 0) {
          v31 = *(_WORD*)(v36 + 544);
          if ((v31 & 0x40) == 0) {
            *(_WORD*)(v36 + 544) = v31 | 0x40;
          }
        }
      }
    }
    if (v3 != nullptr) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
    }
  }
  return result;
}

__int64 TroopMgr_1349f40(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v2;
      if ((*(_WORD*)(*v2 + 544) & 0x40) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != v5) {
      v16 = GameData_21c96e8;
      if (GameData_21c96e8 != 0) {
        v17 = v4;
      LABEL_25:
        v18 = *(_QWORD*)(v16 + 8);
        v20 = *(_QWORD*)(v18 + 8);
        v19 = *(_QWORD*)(v18 + 16);
        if (v19 == v20) {
          goto LABEL_40;
        }
        v21 = (v19 - v20) >> 3;
        v22 = 0;
        while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v17) {
          if (v21 == ++v22) {
            goto LABEL_40;
          }
        }
        if ((v22 & 0x8000000000000000LL) == 0) {
          v23 = (unsigned int)v22;
          if ((unsigned int)v22 >= v21) {
            GameRoutine_13549e0_alt1(result);
          }
          if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
            GameRoutine_133cc40(*(_QWORD*)(v20 + 8LL * (unsigned int)v22));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            else {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            v20 = *(_QWORD*)(v18 + 8);
            v19 = *(_QWORD*)(v18 + 16);
          }
          v25 = v20 + 8 * v23;
          v26 = v19 - (v25 + 8);
          if (v19 != v25 + 8) {
            result = memmove(v25, v25 + 8, v19 - (v25 + 8));
          }
          *(_QWORD*)(v18 + 16) = v25 + v26;
        }
      LABEL_40:
        while (1) {
          v17 += 8;
          if (v17 == v5) {
            break;
          }
          v16 = GameData_21c96e8;
          if (GameData_21c96e8 != 0) {
            goto LABEL_25;
          }
        }
      }
    }
    if (v4 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
  }
  return result;
}

__int64 TroopMgr_134a200(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (a2 != 0) {
    v2 = *(__int64**)(result + 8);
    v3 = *(__int64**)(result + 16);
    v4 = result;
    if (v2 != v3) {
      v6 = nullptr;
      v7 = nullptr;
      v8 = 0;
      do {
        v9 = *v2;
        if (*(_QWORD*)(*v2 + 96) == a2) {
          if ((unsigned __int64)v7 < v8) {
            *(_QWORD*)v7 = v9;
            v7 += 8;
          }
          else {
            v10 = (char*)(v7 - v6);
            v11 = (v7 - v6) >> 3;
            v12 = v11 + 1;
            if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
              GameRoutine_888610_alt1(result);
            }
            if ((__int64)(v8 - (_QWORD)v6) >> 2 > v12) {
              v12 = (__int64)(v8 - (_QWORD)v6) >> 2;
            }
            if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF8LL) {
              v13 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v13 = v12;
            }
            if (v13 != 0) {
              if (v13 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v14 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
            }
            else {
              v14 = 0;
            }
            v8 = v14 + 8 * v13;
            v15 = (char*)(v7 - v6);
            v16 = (__int64)&v10[v14 + -8 * v11];
            *(_QWORD*)&v10[v14] = v9;
            v7 = &v10[v14 + 8];
            result = memcpy(v16, v6, v15);
            if (v6 != nullptr) {
              v17 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v17 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
            }
            v6 = (char*)v16;
          }
        }
        ++v2;
      } while (v2 != v3);
      if (v6 != v7) {
        v18 = *(_QWORD*)(v4 + 16);
        if (v18 != *(_QWORD*)(v4 + 8)) {
          v19 = v6;
          do {
            v20 = *(_QWORD*)(v4 + 8);
            if (v18 != v20) {
              v21 = (v18 - v20) >> 3;
              v22 = 0;
              while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v19) {
                if (v21 == ++v22) {
                  goto LABEL_27;
                }
              }
              if ((v22 & 0x8000000000000000LL) == 0) {
                v23 = (unsigned int)v22;
                if ((unsigned int)v22 >= v21) {
                  GameRoutine_13549e0_alt1(result);
                }
                if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
                  GameRoutine_133cc40(
                      *(_QWORD*)(v20 + 8LL * (unsigned int)v22));
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v24 = 128;
                  }
                  else {
                    v24 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
                  v20 = *(_QWORD*)(v4 + 8);
                  v18 = *(_QWORD*)(v4 + 16);
                }
                v25 = v20 + 8 * v23;
                v26 = v18 - (v25 + 8);
                if (v18 != v25 + 8) {
                  result = memmove(v25, v25 + 8, v18 - (v25 + 8));
                }
                v18 = v25 + v26;
                *(_QWORD*)(v4 + 16) = v25 + v26;
              }
            }
          LABEL_27:
            v19 += 8;
          } while (v19 != v7);
        }
      }
      if (v6 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
      }
    }
  }
  return result;
}

__int64 TroopMgr_134a480()
{
  __int64 result;

  if (GameData_21c96e8 != 0) {
    return TroopMgr_134a4a0_alt1(*(_QWORD*)(GameData_21c96e8 + 8));
  }
  return result;
}

__int64 TroopMgr_134a4a0(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v1 = *(__int64**)(result + 8);
  v2 = *(__int64**)(result + 16);
  if (v1 != v2) {
    v3 = result;
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v1;
      if ((*(_BYTE*)(*v1 + 546) & 8) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v1;
    } while (v1 != v2);
    if (v4 != v5) {
      v16 = *(_QWORD*)(v3 + 16);
      if (v16 != *(_QWORD*)(v3 + 8)) {
        v17 = v4;
        do {
          v18 = *(_QWORD*)(v3 + 8);
          if (v16 != v18) {
            v19 = (v16 - v18) >> 3;
            v20 = 0;
            while (*(_QWORD*)(v18 + 8 * v20) != *(_QWORD*)v17) {
              if (v19 == ++v20) {
                goto LABEL_26;
              }
            }
            if ((v20 & 0x8000000000000000LL) == 0) {
              v21 = (unsigned int)v20;
              if ((unsigned int)v20 >= v19) {
                GameRoutine_13549e0_alt1(result);
              }
              if (*(_QWORD*)(v18 + 8LL * (unsigned int)v20) != 0) {
                GameRoutine_133cc40(*(_QWORD*)(v18 + 8LL * (unsigned int)v20));
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) != 0) {
                  v22 = 128;
                }
                else {
                  v22 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
                v18 = *(_QWORD*)(v3 + 8);
                v16 = *(_QWORD*)(v3 + 16);
              }
              v23 = v18 + 8 * v21;
              v24 = v16 - (v23 + 8);
              if (v16 != v23 + 8) {
                result = memmove(v23, v23 + 8, v16 - (v23 + 8));
              }
              v16 = v23 + v24;
              *(_QWORD*)(v3 + 16) = v23 + v24;
            }
          }
        LABEL_26:
          v17 += 8;
        } while (v17 != v5);
      }
    }
    if (v4 != nullptr) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
    }
  }
  return result;
}

void TroopMgr_134a720()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(__int64**)(v0 + 8);
  v2 = *(__int64**)(v0 + 16);
  if (v1 != v2) {
    v3 = nullptr;
    v4 = nullptr;
    v5 = 0;
    v6 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v7 = *v1;
      v8 = UnitActor_819400(*v1 + 112);
      v9 = *(_QWORD*)(v7 + 96);
      *(_QWORD*)(v7 + 120) = 0;
      if (v9 == 0) {
        v10 = *(_QWORD*)(v7 + 552);
        v11 = v10 != 0 && *(_QWORD*)(v7 + 104) == 0;
        if (v11 &&
            *(__int16*)(v7 + 642) * *(__int16*)(v7 + 640) *
                    *(__int16*)(v7 + 644) ==
                0 &&
            *(_QWORD*)(v10 + 352) == 0) {
          if ((unsigned __int64)v4 < v5) {
            *(_QWORD*)v4 = v7;
            v4 += 8;
          }
          else {
            v12 = (char*)(v4 - v3);
            v13 = (v4 - v3) >> 3;
            v14 = v13 + 1;
            if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
              GameRoutine_888610_alt1(v8);
            }
            if ((__int64)(v5 - (_QWORD)v3) >> 2 > v14) {
              v14 = (__int64)(v5 - (_QWORD)v3) >> 2;
            }
            if (v5 - (unsigned __int64)v3 >= 0x7FFFFFFFFFFFFFF8LL) {
              v15 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v15 = v14;
            }
            if (v15 != 0) {
              if (v15 >> 61 != 0) {
                GameRoutine_60a210(v8);
              }
              v16 = fw_memory_HeapManager_Allocate(*v6, 8 * v15, 16, 0);
            }
            else {
              v16 = 0;
            }
            v5 = v16 + 8 * v15;
            v17 = (char*)(v4 - v3);
            v18 = (__int64)&v12[v16 + -8 * v13];
            *(_QWORD*)&v12[v16] = v7;
            v4 = &v12[v16 + 8];
            v8 = memcpy(v18, v3, v17);
            if (v3 != nullptr) {
              v19 = 128;
              if (*(_QWORD*)(*v6 + 200LL) == 0) {
                v19 = 56;
              }
              v8 = nn_mem_StandardAllocator_Free(*v6 + v19);
            }
            v3 = (char*)v18;
          }
        }
      }
      ++v1;
    } while (v1 != v2);
    if (v3 != v4 && *(_QWORD*)(*(_QWORD*)(GameData_21c96e8 + 8) + 16LL) !=
                        *(_QWORD*)(*(_QWORD*)(GameData_21c96e8 + 8) + 8LL)) {
      v20 = v3;
      do {
        v21 = *(_QWORD*)(GameData_21c96e8 + 8);
        v23 = *(_QWORD*)(v21 + 8);
        v22 = *(_QWORD*)(v21 + 16);
        if (v22 != v23) {
          v24 = (v22 - v23) >> 3;
          v25 = 0;
          while (*(_QWORD*)(v23 + 8 * v25) != *(_QWORD*)v20) {
            if (v24 == ++v25) {
              goto LABEL_33;
            }
          }
          if ((v25 & 0x8000000000000000LL) == 0) {
            v26 = (unsigned int)v25;
            if ((unsigned int)v25 >= v24) {
              GameRoutine_13549e0_alt1(v8);
            }
            if (*(_QWORD*)(v23 + 8LL * (unsigned int)v25) != 0) {
              GameRoutine_133cc40(*(_QWORD*)(v23 + 8LL * (unsigned int)v25));
              if (*(_QWORD*)(*v6 + 200LL) != 0) {
                v27 = 128;
              }
              else {
                v27 = 56;
              }
              v8 = nn_mem_StandardAllocator_Free(*v6 + v27);
              v23 = *(_QWORD*)(v21 + 8);
              v22 = *(_QWORD*)(v21 + 16);
            }
            v28 = v23 + 8 * v26;
            v29 = v22 - (v28 + 8);
            if (v22 != v28 + 8) {
              v8 = memmove(v28, v28 + 8, v22 - (v28 + 8));
            }
            *(_QWORD*)(v21 + 16) = v28 + v29;
          }
        }
      LABEL_33:
        v20 += 8;
      } while (v20 != v4);
    }
    if (v3 != nullptr) {
      v30 = 128;
      if (*(_QWORD*)(*v6 + 200LL) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v30);
    }
  }
}

__int64 TroopMgr_134a9e0()
{
  __int64 v0;
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;

  if (GameData_21c96e8 == 0) {
    goto LABEL_7;
  }
  v3[0] = GameData_202d0c8;
  v4 = v3;
  TroopMgr_13460a0((__int64)v3);
  if (v4 == v3) {
    v0 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_7;
    }
    v0 = 40;
  }
  (*(void (**)(void*))(*v4 + v0))(v4);

LABEL_7:
  result = GameRoutine_9728b0();
  if (GameData_21c96e8 != 0) {
    v2 = *(_QWORD*)(GameData_21c96e8 + 8);
    *(_DWORD*)(v2 + 56) = -1;
    *(_QWORD*)(v2 + 40) = *(_QWORD*)(v2 + 32);
  }
  return result;
}

__int64 TroopMgr_134aa80()
{
  __int64 result;

  if (GameData_21c96e8 != 0) {
    return GameRoutine_134aaa0(*(_QWORD*)(GameData_21c96e8 + 8));
  }
  return result;
}

__n128 game_gmap_TroopMgr_Impl_UpdateCorps(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* i;
  char* v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  signed __int64 v24;
  __n128 result;
  __int64 v26;
  __int64 v27;
  struct {
    _QWORD v28[4];
    _QWORD* v29;
  } v28_;
  struct {
    _QWORD* v30;
    _QWORD* v31;
    __int64 v32;
  } v30_;
  __int64 v33;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(__int64**)(a1 + 8);
  v4 = *(__int64**)(a1 + 16);
  v5 = v28_.v28;
  v30_.v31 = nullptr;
  v30_.v32 = 0;
  v30_.v30 = nullptr;
  v28_.v28[0] = GameData_202cb88;
  v28_.v28[1] = &v30_.v30;
  v28_.v29 = v28_.v28;
  if (v3 != v4) {
    do {
      if ((*(_DWORD*)(*v3 + 84) & 0x80000000) == 0) {
        v33 = *v3;
        if (v28_.v29 == nullptr) {
          GameRoutine_60a310_alt1(),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        (*(void (**)(_QWORD*, __int64*))(*v28_.v29 + 48LL))(v28_.v29, &v33),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      ++v3;
    } while (v3 != v4);
    v5 = v28_.v29;
    if (v28_.v29 != v28_.v28) {
      if (v28_.v29 != nullptr) {
        v6 = 40;
      LABEL_11:
        (*(void (**)(_QWORD*, __int64))(*v5 + v6))(v5, a2),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      v7 = v30_.v30;
      v8 = v30_.v31;
      if (v30_.v30 != v30_.v31) {
        v9 = *(_QWORD*)(a1 + 16);
        if (v9 != *(_QWORD*)(a1 + 8)) {
          v10 = fw_memory_g_heap_manager_ptr;
          do {
            v11 = *(_QWORD*)(a1 + 8);
            if (v9 != v11) {
              v12 = (v9 - v11) >> 3;
              v13 = 0;
              while (*(_QWORD*)(v11 + 8 * v13) != *v7) {
                if (v12 == ++v13) {
                  goto LABEL_16;
                }
              }
              if ((v13 & 0x8000000000000000LL) == 0) {
                v14 = (unsigned int)v13;
                if ((unsigned int)v13 >= v12) {
                  GameRoutine_13549e0_alt2(),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
                }
                if (*(_QWORD*)(v11 + 8LL * (unsigned int)v13) != 0) {
                  GameRoutine_133cc40_alt1(
                      *(_QWORD*)(v11 + 8LL * (unsigned int)v13)),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
                  if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
                    v15 = 128;
                  }
                  else {
                    v15 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v15),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
                  v11 = *(_QWORD*)(a1 + 8);
                  v9 = *(_QWORD*)(a1 + 16);
                }
                v16 = v11 + 8 * v14;
                v17 = v9 - (v16 + 8);
                if (v9 != v16 + 8) {
                  memmove(v16, v16 + 8, v9 - (v16 + 8)),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
                }
                v9 = v16 + v17;
                *(_QWORD*)(a1 + 16) = v16 + v17;
              }
            }
          LABEL_16:
            ++v7;
          } while (v7 != v8);
        }
      }
      v19 = *(char**)(a1 + 32);
      for (i = *(char**)(a1 + 40); v19 != i; v19 += 4) {
        while (1) {
          v20 = *(_DWORD*)v19;
          if ((*(_DWORD*)v19 & 0x80000000) == 0) {
            v21 = *(__int64**)(a1 + 8);
            v22 = *(__int64**)(a1 + 16);
            if (v21 != v22) {
              break;
            }
          }
        LABEL_38:
          if (v20 == *(_DWORD*)(a1 + 56)) {
            *(_DWORD*)(a1 + 56) = -1;
          }
          v24 = i - (v19 + 4);
          if (i != v19 + 4) {
            memmove(v19, v19 + 4, i - (v19 + 4)),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          i = &v19[v24];
          *(_QWORD*)(a1 + 40) = &v19[v24];
          if (v19 == &v19[v24]) {
            goto LABEL_43;
          }
        }
        while (1) {
          v23 = *v21++;
          if (*(_DWORD*)(v23 + 84) == v20) {
            break;
          }
          if (v21 == v22) {
            goto LABEL_38;
          }
        }
      }
    LABEL_43:
      v28_.v28[0] = GameData_202cc08;
      v28_.v28[1] = a1;
      v28_.v29 = v28_.v28;
      CorpsManager_972960((__int64)v28_.v28),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v28_.v29 == v28_.v28) {
        v26 = 32;
      }
      else {
        if (v28_.v29 == nullptr) {
          goto LABEL_48;
        }
        v26 = 40;
      }
      (*(void (**)(__int64))(*v28_.v29 + v26))((__int64)v28_.v29),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_48:
      if (v30_.v30 != nullptr) {
        v30_.v31 = v30_.v30;
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        return nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
      }
      return result;
    }
  }
  v6 = 32;
  goto LABEL_11;
}

__int64 game_gmap_TroopMgr_CanCreateCorps()
{
  unsigned int* v0;
  __int64 v1;
  char v2;
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;
  _BYTE v7[4];

  v7[0] = 0;
  v0 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  v5_.v5[0] = GameData_202d148;
  v5_.v5[1] = v7;
  v5_.v6 = v5_.v5;
  game_gmap_TroopMgr_EachPlayerTroop((__int64)v0, (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v1 = 32;
  }
  else {
    if (v5_.v6 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*v5_.v6 + v1))((__int64)v5_.v6);
LABEL_6:
  if ((v7[0] & 1) == 0) {
    v5_.v5[0] = GameData_202d1c8;
    v5_.v5[1] = v7;
    v5_.v6 = v5_.v5;
    game_gmap_TroopMgr_EachReserveUnit((__int64)v5_.v5);
    if (v5_.v6 == v5_.v5) {
      v3 = 32;
    }
    else {
      if (v5_.v6 == nullptr) {
      LABEL_13:
        v2 = v7[0];
        return v2 & 1;
      }
      v3 = 40;
    }
    (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
    goto LABEL_13;
  }
  v2 = 1;
  return v2 & 1;
}

__int64 TroopMgr_134b0e0(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  if (v3 != v4) {
    v5 = result;
    do {
      v6 = *v3++;
      v7 = *(_QWORD*)(v5 + 32);
      v8 = v6;
      if (v7 == 0) {
        GameRoutine_60a310(0, a2);
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 48LL))(v7, &v8);
    } while (v3 != v4);
  }
  return result;
}

__int64 TroopMgr_134b560(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 result;
  _DWORD* v6;
  _DWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  int v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[2];

  v18[1] = &GameData_1ade186;
  v18[0] = game_HashString(&GameData_1ade186);
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v18);
    if (result != 0 && *(int*)(result + 32) >= 1) {
      v6 = *(_DWORD**)(a1 + 32);
      v7 = *(_DWORD**)(a1 + 40);
      while (v6 != v7) {
        if ((*v6 & 0x80000000) == 0) {
          v8 = *(__int64**)(a1 + 8);
          v9 = *(__int64**)(a1 + 16);
          if (v8 != v9) {
            while (1) {
              v11 = *v8++;
              v10 = v11;
              if (*(_DWORD*)(v11 + 84) == *v6) {
                break;
              }
              if (v8 == v9) {
                goto LABEL_5;
              }
            }
            v12 = *(_QWORD*)(a2 + 32);
            v18[0] = v10;
            if (v12 == 0) {
              goto LABEL_28;
            }
            result = (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(
                v12, v18);
          }
        }
      LABEL_5:
        ++v6;
      }
      return result;
    }
  }
  v13 = *(__int64**)(a1 + 8);
  v14 = *(__int64**)(a1 + 16);
  v15 = *(_DWORD*)(a1 + 56);
  if (v15 < 0) {
    for (; v13 != v14; ++v13) {
      v16 = *v13;
      if (*(_QWORD*)(*v13 + 96) == 0 && *(_QWORD*)(v16 + 552) == 0) {
        goto LABEL_21;
      }
    }
  }
  else {
    while (v13 != v14) {
      v17 = *v13++;
      v16 = v17;
      if (*(_DWORD*)(v17 + 84) == v15) {
        goto LABEL_21;
      }
    }
  }
  v16 = 0;

LABEL_21:
  v12 = *(_QWORD*)(a2 + 32);
  v18[0] = v16;
  if (v12 == 0) {
  LABEL_28:
    GameRoutine_60a310(v12, v4);
  }
  return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)v12 + 48LL))(v12, v18);
}

__attribute__((swiftcall)) void TroopMgr_134b820(PSEUDO_X8 x8_, _QWORD* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  struct {
    __int64 (**v14)();
    void* v15;
    char gap16_[16];
    unsigned __int64* v16;
  } v14_;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v14_.v15 = &GameData_1ade186;
  v14_.v14 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ == 0 ||
      (v4 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v14_.v14)) == 0 ||
      *(int*)(v4 + 32) < 1) {
    v7 = *(_QWORD*)(GameData_21c96e8 + 8);
    v8 = *(_DWORD*)(v7 + 56);
    v9 = *(__int64**)(v7 + 8);
    v10 = *(__int64**)(v7 + 16);
    if (v8 < 0) {
      for (; v9 != v10; ++v9) {
        v11 = *v9;
        if (*(_QWORD*)(*v9 + 96) == 0 && *(_QWORD*)(v11 + 552) == 0) {
          goto LABEL_14;
        }
      }
    }
    else {
      while (v9 != v10) {
        v12 = *v9++;
        v11 = v12;
        if (*(_DWORD*)(v12 + 84) == v8) {
          goto LABEL_14;
        }
      }
    }
    v11 = 0;
  LABEL_14:
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
    *a2 = v13;
    *v13 = v11;
    result = (__int64)(v13 + 1);
    a2[1] = result;
    a2[2] = result;
    {
      result;
      return;
    }
  }
  v14_.v14 = GameData_202d548;
  v14_.v15 = a2;
  v14_.v16 = (unsigned __int64*)&v14_.v14;
  game_gmap_TroopMgr_EachBattleCorps(a1, (__int64)&v14_.v14);
  result = (__int64)v14_.v16;
  if (v14_.v16 == (unsigned __int64*)&v14_.v14) {
    v6 = 32;
    {
      (*(__int64 (**)(__int64))(*v14_.v16 + v6))((__int64)v14_.v16);
      return;
    }
  }
  if (v14_.v16 != nullptr) {
    v6 = 40;
    {
      (*(__int64 (**)(__int64))(*v14_.v16 + v6))((__int64)v14_.v16);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void TroopMgr_134bbe0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64** v5;
  __int64** v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64** v29;
  __int64** v30;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  result = X8CALL_X0(__int64, TroopMgr_134b820_alt1((void*)(&v29), a1));
  v5 = v29;
  v6 = v30;
  if (v29 == v30) {
    *a2 = 0;
    if (v5 == nullptr) {
      result;
      return;
    }
    goto LABEL_38;
  }
  v7 = nullptr;
  v8 = 0;
  do {
    v9 = *v5;
    v10 = **v5;
    if (v10 == a1) {
    LABEL_21:
      v17 = a2[2];
      if ((unsigned __int64)v7 < v17) {
        *(_QWORD*)v7 = v9;
        v7 += 8;
      }
      else {
        v18 = &v7[-v8];
        v19 = (__int64)&v7[-v8] >> 3;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
          *a2 = v8;
          GameRoutine_888610_alt1(result);
        }
        v21 = v17 - v8;
        if (v21 >> 2 > v20) {
          v20 = v21 >> 2;
        }
        if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
          v22 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v22 = v20;
        }
        if (v22 != 0) {
          if (v22 >> 61 != 0) {
            *a2 = v8;
            GameRoutine_60a210(result);
          }
          v23 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
        }
        else {
          v23 = 0;
        }
        v24 = v23 + 8 * v22;
        v25 = &v7[-v8];
        v26 = (__int64)&v18[v23 + -8 * v19];
        *(_QWORD*)&v18[v23] = v9;
        v7 = &v18[v23 + 8];
        result = memcpy(v26, v8, v25);
        a2[1] = (__int64)v7;
        a2[2] = v24;
        if (v8 != 0) {
          v27 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v27 = 56;
          }
          result = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
        }
        v8 = v26;
      }
      a2[1] = (__int64)v7;
    }
    else if (v10 != 0 && v9[12] == 0 && v9[69] == 0) {
      v13 = *(_QWORD*)(GameData_21c96e8 + 8);
      v14 = *(_QWORD*)(v13 + 8);
      v15 = *(_QWORD*)(v13 + 16);
      while (v14 != v15) {
        if (**(_QWORD**)v14 == v10) {
          v16 = *(_QWORD*)(*(_QWORD*)v14 + 96LL);
          if (v16 != 0 && *(_BYTE*)(v16 + 32) == 1) {
            goto LABEL_21;
          }
        }
        v14 += 8;
      }
    }
    ++v5;
  } while (v5 != v6);
  v5 = v29;
  *a2 = v8;
  if (v5 != nullptr) {
  LABEL_38:
    v30 = v5;
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v28);
      return;
    }
  }
  {
    result;
    return;
  }
}

void TroopMgr_134be40()
{
  __int64 (*v0)();
  __int64 v1;
  int v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 (*v11)();
  __int64 (*v12)();
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  signed __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  int v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  char v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64* v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char* v54;
  __int64* v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  char* v63;
  char* v64;
  char* v65;
  char* v66;
  __int64 v67;
  unsigned __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  char v78;
  char* v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  char* v84;
  char* v85;
  unsigned __int64 v86;
  char* v87;
  __int64 (*v88)();
  __int64 (*v89)();
  __int64 v90;
  __int64 v91;
  int v92;

  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    v0 = (__int64 (*)())TroopMgr_134c680_alt1();
    TroopMgr_134b820_alt1((void*)(&v90), (__int64)v0);
    v1 = X8CALL_X0(__int64, GameRoutine_134b980((void*)(&v88), v0));
    v2 = *(_DWORD*)(*(_QWORD*)v90 + 84LL);
    v3 = GameData_212c790;
    v4 = *GameData_212c790;
    v92 = v2;
    v5 = *(_QWORD*)(v4 + 8);
    *(_DWORD*)(v5 + 56) = v2;
    if (v2 < 0) {
      *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
    }
    else {
      v6 = *(_QWORD*)(v5 + 40);
      v7 = wmemchr();
      v8 = *(_QWORD*)(v5 + 32);
      v9 = *(_QWORD*)(v5 + 40);
      if (v7 != 0) {
        v6 = v7;
      }
      if (v6 != v9) {
        v10 = v9 - (v6 + 4);
        if (v9 != v6 + 4) {
          memmove(v6, v6 + 4, v9 - (v6 + 4));
          v8 = *(_QWORD*)(v5 + 32);
        }
        *(_QWORD*)(v5 + 40) = v6 + v10;
      }
      v1 = TroopMgr_1353fb0_alt1(v5 + 32, v8, &v92);
    }
    v11 = v88;
    v12 = v89;
    if (v88 == v89) {
      v13 = nullptr;
      v87 = nullptr;
      v27 = nullptr;
    }
    else {
      v13 = nullptr;
      v14 = nullptr;
      v15 = 0;
      do {
        v16 = *(_QWORD*)(*(_QWORD*)v11 + 8LL);
        if (v16 != 0) {
          if ((unsigned __int64)v14 < v15) {
            *(_QWORD*)v14 = v16;
            v14 += 8;
          }
          else {
            v17 = (char*)(v14 - v13);
            v18 = (v14 - v13) >> 3;
            v19 = v18 + 1;
            if ((unsigned __int64)(v18 + 1) >> 61 != 0) {
              goto LABEL_148;
            }
            if ((__int64)(v15 - (_QWORD)v13) >> 2 > v19) {
              v19 = (__int64)(v15 - (_QWORD)v13) >> 2;
            }
            if (v15 - (unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
              v20 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v20 = v19;
            }
            if (v20 != 0) {
              if (v20 >> 61 != 0) {
              LABEL_149:
                GameRoutine_60a210(v1);
              }
              v21 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v20, 16, 0);
            }
            else {
              v21 = 0;
            }
            v15 = v21 + 8 * v20;
            v22 = (char*)(v14 - v13);
            v23 = (__int64)&v17[v21 + -8 * v18];
            *(_QWORD*)&v17[v21] = v16;
            v14 = &v17[v21 + 8];
            v1 = memcpy(v23, v13, v22);
            if (v13 != nullptr) {
              v24 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v24 = 56;
              }
              v1 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            }
            v13 = (char*)v23;
          }
        }
        v11 = (__int64 (*)())((char*)v11 + 8);
      } while (v11 != v12);
      v25 = v14 - v13;
      if (v14 == v13) {
        v87 = nullptr;
        v27 = nullptr;
        v3 = GameData_212c790;
      }
      else {
        v3 = &GameData_21c96e8;
        if (v25 < 0) {
        LABEL_148:
          GameRoutine_8875e0(v1);
        }
        v26 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v14 - v13, 16, 0);
        v27 = (char*)(v26 + v25);
        v87 = (char*)v26;
        memcpy(v26, v13, v14 - v13);
      }
    }
    v28 = v90;
    v29 = v91;
    while (v28 != v29) {
      v38 = *(_QWORD**)v28;
      if ((*(_QWORD*)(*(_QWORD*)v28 + 96LL) |
           *(_QWORD*)(*(_QWORD*)v28 + 552LL)) == 0) {
        v39 = *v38;
        if (*v38 != 0) {
          v40 = *(_QWORD*)(*v3 + 8);
          v41 = *(_QWORD*)(v40 + 8);
          v42 = *(_QWORD*)(v40 + 16);
          while (v41 != v42) {
            if (**(_QWORD**)v41 == v39) {
              v43 = *(_QWORD*)(*(_QWORD*)v41 + 96LL);
              if (v43 != 0 && *(_BYTE*)(v43 + 32) == 1) {
                v44 = v38[1];
                if (v44 != 0) {
                  Impl_13261c0(*v38);
                  if (v45 == 4 && (*(_BYTE*)(v39 + 178) & 2) == 0) {
                    v46 = fw_memory_g_heap_manager_ptr;
                    v47 = (_QWORD*)fw_memory_HeapManager_Allocate(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
                    *v47 = v44;
                    GameRoutine_888970(v38 + 3, v47, v47 + 1, 1);
                    v48 = 128;
                    if (*(_QWORD*)(*(_QWORD*)v46 + 200LL) == 0) {
                      v48 = 56;
                    }
                    nn_mem_StandardAllocator_Free(*(_QWORD*)v46 + v48);
                  }
                  v49 = *(__int64**)(*v38 + 48LL);
                  v50 = *(__int64**)(*v38 + 56LL);
                  if (v49 == v50) {
                    goto LABEL_63;
                  }
                  while (1) {
                    v51 = *v49++;
                    if (*(_QWORD*)(v51 + 8) == v44) {
                      break;
                    }
                    if (v49 == v50) {
                      goto LABEL_63;
                    }
                  }
                  v74 = *(_QWORD*)(*v3 + 8);
                  v75 = *(_QWORD*)(v74 + 8);
                  v76 = *(_QWORD*)(v74 + 16);
                  while (v75 != v76) {
                    if (**(_QWORD**)v75 == v44) {
                      v77 = *(_QWORD*)(*(_QWORD*)v75 + 96LL);
                      if (v77 != 0 && *(_BYTE*)(v77 + 32) == 1) {
                        goto LABEL_63;
                      }
                    }
                    v75 += 8;
                  }
                  if (*(_BYTE*)(v44 + 176) != 3) {
                    goto LABEL_63;
                  }
                  if ((*(_BYTE*)(v44 + 112) & 1) != 0) {
                    goto LABEL_63;
                  }
                  Impl_13261c0(v44);
                  if (v78 == 4 && (Impl_1328670(v44) & 1) == 0) {
                    goto LABEL_63;
                  }
                  if ((*(_BYTE*)(GameData_22416c0 + 54) & 1) != 0) {
                    goto LABEL_129;
                  }
                  v79 = v87;
                  if (v87 != v27) {
                    v79 = v87;
                    while (*(_QWORD*)v79 != v44) {
                      v79 += 8;
                      if (v79 == v27) {
                        goto LABEL_129;
                      }
                    }
                  }
                  if (v79 == v27) {
                  LABEL_129:
                    if (v38[1] != 0) {
                      break;
                    }
                  }
                  else {
                  LABEL_63:
                    v38[1] = 0;
                  }
                }
                v52 = *(_QWORD*)(*v38 + 48LL);
                v53 = *(_QWORD*)(*v38 + 56LL);
                if (v52 == v53) {
                  break;
                }
                v85 = nullptr;
                v86 = 0;
                v54 = nullptr;
                v84 = v27;
                do {
                  v55 = *(__int64**)(*v38 + 48LL);
                  v56 = *(__int64**)(*v38 + 56LL);
                  if (v55 != v56) {
                    v57 = *(_QWORD*)(*(_QWORD*)v52 + 8LL);
                    while (1) {
                      v58 = *v55++;
                      if (*(_QWORD*)(v58 + 8) == v57) {
                        break;
                      }
                      if (v55 == v56) {
                        goto LABEL_67;
                      }
                    }
                    if (v57 != 0) {
                      v59 = *(_QWORD*)(*v3 + 8);
                      v60 = *(_QWORD*)(v59 + 8);
                      v61 = *(_QWORD*)(v59 + 16);
                      while (v60 != v61) {
                        if (**(_QWORD**)v60 == v57) {
                          v62 = *(_QWORD*)(*(_QWORD*)v60 + 96LL);
                          if (v62 != 0 && *(_BYTE*)(v62 + 32) == 1) {
                            goto LABEL_67;
                          }
                        }
                        v60 += 8;
                      }
                    }
                    if (*(_BYTE*)(v57 + 176) == 3 &&
                        (*(_BYTE*)(v57 + 112) & 1) == 0) {
                      v63 = v27;
                      v64 = v54;
                      Impl_13261c0(*(_QWORD*)(*(_QWORD*)v52 + 8LL));
                      if ((unsigned __int8)v1 == 4 &&
                          ((v1 = Impl_1328670(v57)) & 1) == 0) {
                        v54 = v64;
                        v27 = v63;
                      }
                      else {
                        v54 = v64;
                        v27 = v63;
                        if ((*(_BYTE*)(*GameData_2130e70 + 54) & 1) != 0) {
                          goto LABEL_92;
                        }
                        v65 = v87;
                        if (v87 != v63) {
                          v65 = v87;
                          while (*(_QWORD*)v65 != v57) {
                            v65 += 8;
                            if (v65 == v63) {
                              goto LABEL_92;
                            }
                          }
                        }
                        if (v65 == v63) {
                        LABEL_92:
                          if ((unsigned __int64)v54 < v86) {
                            *(_QWORD*)v54 = v57;
                            v54 += 8;
                          }
                          else {
                            v66 = (char*)(v54 - v85);
                            v67 = (v54 - v85) >> 3;
                            v68 = v67 + 1;
                            if ((unsigned __int64)(v67 + 1) >> 61 != 0) {
                              goto LABEL_148;
                            }
                            if ((__int64)(v86 - (_QWORD)v85) >> 2 > v68) {
                              v68 = (__int64)(v86 - (_QWORD)v85) >> 2;
                            }
                            if (v86 - (unsigned __int64)v85 >=
                                0x7FFFFFFFFFFFFFF8LL) {
                              v69 = 0x1FFFFFFFFFFFFFFFLL;
                            }
                            else {
                              v69 = v68;
                            }
                            if (v69 != 0) {
                              if (v69 >> 61 != 0) {
                                goto LABEL_149;
                              }
                              v70 = fw_memory_HeapManager_Allocate(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr,
                                  8 * v69, 16, 0);
                            }
                            else {
                              v70 = 0;
                            }
                            v71 = (__int64)&v66[v70 + -8 * v67];
                            *(_QWORD*)&v66[v70] = v57;
                            v86 = v70 + 8 * v69;
                            v72 = (__int64)&v66[v70 + 8];
                            memcpy(v71, v85, v66);
                            if (v85 != nullptr) {
                              v73 = 128;
                              if (*(_QWORD*)(*(_QWORD*)
                                                 fw_memory_g_heap_manager_ptr +
                                             200LL) == 0) {
                                v73 = 56;
                              }
                              nn_mem_StandardAllocator_Free(
                                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v73);
                            }
                            v85 = (char*)v71;
                            v54 = (char*)v72;
                            v3 = GameData_212c790;
                            v27 = v84;
                          }
                        }
                      }
                    }
                  }
                LABEL_67:
                  v52 += 8;
                } while (v52 != v53);
                if (v54 == v85) {
                  if (v85 == nullptr) {
                    break;
                  }
                }
                else {
                  v30 = (unsigned __int64)(v54 - v85) >> 3;
                  nn_os_LockMutex(&game_g_random_mutex);
                  v31 = game_map_MapRandom_instance__ptr[0];
                  v32 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((__int128*)0x10LL) + 8);
                  v33 =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
                  v34 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((__int128*)0x10LL)) ^
                        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                    (unsigned __int64)((__int128*)0x10LL))
                         << 11);
                  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((__int128*)0x10LL)) =
                      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((__int128*)0x10LL) + 4);
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v31 + 4) =
                      v32;
                  v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v31 + 8) =
                      v33;
                  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v31 + 12) =
                      v35;
                  v36 = v35 & 0x7FFFFFFF;
                  nn_os_UnlockMutex(&game_g_random_mutex);
                  v38[1] = *(_QWORD*)&v85[8 * (v36 % (int)v30)];
                }
                v37 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v37 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v37);
                break;
              }
            }
            v41 += 8;
          }
        }
      }
      v28 += 8;
    }
    if (v87 != nullptr) {
      v80 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v80 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v80);
    }
    if (v13 != nullptr) {
      v81 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v81 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v81);
    }
    if (v88 != nullptr) {
      v89 = v88;
      v82 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v82 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v82);
    }
    if (v90 != 0) {
      v91 = v90;
      v83 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v83 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v83);
    }
  }
}

__int64 TroopMgr_134c680(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  char* v10;
  char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 (*v17)();
  __int64 v18;
  signed __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float32x4_t* v27;
  float v28;
  float32x4_t** v29;
  float32x4_t v30;
  float32x4_t* v31;
  float32x4_t* v32;
  float32x4_t v33;
  int8x16_t v34;
  float v35;
  __int64 v36;
  __int64 (*v38)();
  __int64 (*v39)();

  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0 ||
      GameData_21f1618 != 0) {
    v7 = *(_QWORD*)(GameData_21c96e8 + 8);
    v8 = *(__int64**)(v7 + 8);
    v9 = *(__int64**)(v7 + 16);
    if (v8 != v9) {
      v10 = nullptr;
      v11 = nullptr;
      v12 = 0;
      while (1) {
        v13 = (__int64*)*v8;
        if ((*(_QWORD*)(*v8 + 96) | *(_QWORD*)(*v8 + 552)) == 0) {
          if (game_GameModeData_instance_ == 0) {
            v14 = *v13;
          LABEL_19:
            v16 = X8CALL_X0(__int64, GameRoutine_134b980((void*)(&v38),
                                                         (__int64 (*)())v14));
            v17 = v38;
            if (v39 != v38) {
              v18 = *v13;
              if ((unsigned __int64)v11 >= v12) {
                v19 = v11 - v10;
                v20 = (v11 - v10) >> 3;
                v21 = v20 + 1;
                if ((unsigned __int64)(v20 + 1) >> 61 != 0) {
                  GameRoutine_8875e0(v16);
                }
                if ((__int64)(v12 - (_QWORD)v10) >> 2 > v21) {
                  v21 = (__int64)(v12 - (_QWORD)v10) >> 2;
                }
                if (v12 - (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v22 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v22 = v21;
                }
                if (v22 != 0) {
                  if (v22 >> 61 != 0) {
                    GameRoutine_60a210(v16);
                  }
                  v23 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
                }
                else {
                  v23 = 0;
                }
                v11 = (char*)(v23 + v19);
                v12 = v23 + 8 * v22;
                *(_QWORD*)(v23 + v19) = v18;
                v24 = v23 + v19 - 8 * v20;
                memcpy(v24, v10, v19);
                if (v10 != nullptr) {
                  v25 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v25 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
                }
                v10 = (char*)v24;
              }
              else {
                *(_QWORD*)v11 = v18;
              }
              v17 = v38;
              v11 += 8;
            }
            if (v17 != nullptr) {
              v39 = v17;
              v26 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v26 = 56;
              }
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v26);
            }
            goto LABEL_11;
          }
          v14 = *v13;
          if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
            goto LABEL_19;
          }
          if ((*((_DWORD*)v13 + 21) & 0x80000000) == 0) {
            goto LABEL_19;
          }
          v15 = *(_QWORD*)(v14 + 120);
          if (v15 == GameRoutine_ae0560()) {
            goto LABEL_19;
          }
        }
      LABEL_11:
        if (++v8 == v9) {
          goto LABEL_43;
        }
      }
    }
    v11 = nullptr;
    v10 = nullptr;
  LABEL_43:
    if ((unsigned __int64)(v11 - v10) <= 8) {
      if (v11 - v10 == 8) {
        v27 = *(float32x4_t**)v10;
        goto LABEL_54;
      }
    }
    else if (v10 != v11) {
      v27 = nullptr;
      v30 = *(float32x4_t*)(*(_QWORD*)(*GameData_212d708 + 16) + 80LL);
      v28 = 0x1.e848000000000p+19f;
      v29 = (float32x4_t**)v10;
      LANES128(v30).n128_u32[3] = 0;
      do {
        v32 = *v29++;
        v31 = v32;
        v33 = vsubq_f32(v30, v32[2]);
        v34 = vmulq_f32(v33, v33);
        LANES128(v34).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                .n64_u64[0];
        v35 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                  .n64_f32[0];
        if (v28 > v35) {
          v28 = v35;
          v27 = v31;
        }
      } while (v29 != (float32x4_t**)v11);
      if (v10 == nullptr) {
        return (__int64)v27;
      }
      goto LABEL_54;
    }
    v27 = nullptr;
    if (v10 == nullptr) {
      return (__int64)v27;
    }
  LABEL_54:
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
    return (__int64)v27;
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if (v2 < 0) {
    if (v3 != v4) {
      while (1) {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*v3 + 96) == 0 && v5[69] == 0) {
          break;
        }
        if (++v3 == v4) {
          return game_gmap_SpotMgr_GetCurrentSpot(a1);
        }
      }
      return *v5;
    }
  }
  else if (v3 != v4) {
    while (1) {
      v6 = *v3++;
      v5 = (_QWORD*)v6;
      if (*(_DWORD*)(v6 + 84) == v2) {
        break;
      }
      if (v3 == v4) {
        return game_gmap_SpotMgr_GetCurrentSpot(a1);
      }
    }
    return *v5;
  }
  return game_gmap_SpotMgr_GetCurrentSpot(a1);
}

__int64 TroopMgr_134ca00(__int64 a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  __int64 result;
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
  __int64** v21;
  __int64** v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  int v26;
  __int64** v27;
  __int64** v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64** v40;
  __int64** v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  bool v47;
  unsigned int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
      0) {
    return 0;
  }
  v1 = *(__int64**)(*(_QWORD*)GameData_212d748[0] + 8LL);
  v2 = GameData_212c790;
  if (v1[2] == 0) {
    goto LABEL_17;
  }
  v3 = *v1;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64***)(v4 + 8);
  v7 = *(__int64***)(v4 + 16);
  if ((v5 & 0x80000000) == 0) {
    while (v6 != v7) {
      v9 = *v6++;
      v8 = v9;
      if (*((_DWORD*)v9 + 21) == v5) {
        goto LABEL_16;
      }
    }
  LABEL_11:
    a1 = game_gmap_SpotMgr_GetCurrentSpot(a1);
    if (v3 == a1) {
      return 0;
    }
    goto LABEL_17;
  }
  if (v6 == v7) {
    goto LABEL_11;
  }
  while (1) {
    v8 = *v6;
    if ((*v6)[12] == 0 && v8[69] == 0) {
      break;
    }
    if (++v6 == v7) {
      goto LABEL_11;
    }
  }
LABEL_16:
  a1 = *v8;
  if (v3 == *v8) {
    return 0;
  }
LABEL_17:
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 129LL) &
       1) != 0) {
    return 1;
  }
  v11 = *v2;
  v12 = *(_QWORD*)(*v2 + 8);
  v13 = *(_DWORD*)(v12 + 56);
  v14 = *(__int64***)(v12 + 8);
  v15 = *(__int64***)(v12 + 16);
  if (v13 < 0) {
    if (v14 != v15) {
      while (1) {
        v16 = *v14;
        if ((*v14)[12] == 0 && v16[69] == 0) {
          break;
        }
        if (++v14 == v15) {
          goto LABEL_25;
        }
      }
    LABEL_30:
      v18 = *v16;
      if (*(_QWORD*)(*v16 + 120) == 0) {
        goto LABEL_44;
      }
    LABEL_31:
      v19 = *(_QWORD*)(v11 + 8);
      v20 = *(_DWORD*)(v19 + 56);
      v21 = *(__int64***)(v19 + 8);
      v22 = *(__int64***)(v19 + 16);
      if (v20 < 0) {
        for (; v21 != v22; ++v21) {
          v23 = *v21;
          if ((*v21)[12] == 0 && v23[69] == 0) {
            goto LABEL_41;
          }
        }
      }
      else if (v21 != v22) {
        while (1) {
          v24 = *v21++;
          v23 = v24;
          if (*((_DWORD*)v24 + 21) == v20) {
            break;
          }
          if (v21 == v22) {
            goto LABEL_37;
          }
        }
      LABEL_41:
        v18 = *v23;
      LABEL_42:
        if ((*(_WORD*)(*(_QWORD*)(v18 + 120) + 258LL) & 0x10) == 0) {
          v11 = *v2;
          goto LABEL_44;
        }
        return 0;
      }
    LABEL_37:
      v18 = game_gmap_SpotMgr_GetCurrentSpot(v18);
      goto LABEL_42;
    }
  }
  else {
    while (v14 != v15) {
      v17 = *v14++;
      v16 = v17;
      if (*((_DWORD*)v17 + 21) == v13) {
        goto LABEL_30;
      }
    }
  }
LABEL_25:
  v18 = game_gmap_SpotMgr_GetCurrentSpot(a1);
  v11 = *v2;
  if (*(_QWORD*)(v18 + 120) != 0) {
    goto LABEL_31;
  }
LABEL_44:
  v25 = *(_QWORD*)(v11 + 8);
  v26 = *(_DWORD*)(v25 + 56);
  v27 = *(__int64***)(v25 + 8);
  v28 = *(__int64***)(v25 + 16);
  if (v26 < 0) {
    for (; v27 != v28; ++v27) {
      v29 = *v27;
      if ((*v27)[12] == 0 && v29[69] == 0) {
        goto LABEL_54;
      }
    }
  LABEL_50:
    v31 = game_gmap_SpotMgr_GetCurrentSpot(v18);
    goto LABEL_55;
  }
  if (v27 == v28) {
    goto LABEL_50;
  }
  while (1) {
    v30 = *v27++;
    v29 = v30;
    if (*((_DWORD*)v30 + 21) == v26) {
      break;
    }
    if (v27 == v28) {
      goto LABEL_50;
    }
  }
LABEL_54:
  v31 = *v29;
LABEL_55:
  v32 = X8CALL_X0(__int64, TroopMgr_134b820_alt1((void*)(&v50), v31));
  v33 = v50;
  v34 = v51;
  v35 = fw_memory_g_heap_manager_ptr;
  if (v50 != 0) {
    v36 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v51 = v50;
    v37 = 128;
    if (*(_QWORD*)(v36 + 200) == 0) {
      v37 = 56;
    }
    v32 = nn_mem_StandardAllocator_Free(v36 + v37);
  }
  if (v34 == v33) {
    return 0;
  }
  v38 = *(_QWORD*)(*v2 + 8);
  v39 = *(_DWORD*)(v38 + 56);
  v40 = *(__int64***)(v38 + 8);
  v41 = *(__int64***)(v38 + 16);
  if (v39 < 0) {
    for (; v40 != v41; ++v40) {
      v42 = *v40;
      if ((*v40)[12] == 0 && v42[69] == 0) {
        goto LABEL_72;
      }
    }
  LABEL_68:
    v44 = game_gmap_SpotMgr_GetCurrentSpot(v32);
    goto LABEL_73;
  }
  if (v40 == v41) {
    goto LABEL_68;
  }
  while (1) {
    v43 = *v40++;
    v42 = v43;
    if (*((_DWORD*)v43 + 21) == v39) {
      break;
    }
    if (v40 == v41) {
      goto LABEL_68;
    }
  }
LABEL_72:
  v44 = *v42;
LABEL_73:
  TroopMgr_134bbe0((void*)(&v50), v44);
  if (v50 == v51) {
    result = 1;
    if (v50 == 0) {
      return result;
    }
    goto LABEL_83;
  }
  v45 = v50 + 8;
  do {
    v46 = *(_QWORD*)(*(_QWORD*)(v45 - 8) + 8LL);
    result = v46 != 0;
    v47 = v46 == 0 || v45 == v51;
    v45 += 8;
  } while (!v47);
  if (v50 != 0) {
  LABEL_83:
    v48 = result;
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)v35 + 200LL) == 0) {
      v49 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v35 + v49);
    return v48;
  }
  return result;
}

__int64 game_gmap_TroopMgr_EachEncountTroop(__int64 (*a1)(), __int64 a2)
{
  __int64 v4;
  __int64 (*v5)();
  __int64 (*v6)();
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 (*v10)();
  __int64 (*v11)();
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 (**v20)();
  __int64 (**v21)();
  __int64 result;
  __int64 v23;
  _BYTE v24[32];
  _BYTE* v25;
  __int64 (*v26)();
  __int64 (*v27)();
  __int64 v28;

  TroopMgr_134b820_alt1((void*)(&v26), (__int64)a1);
  v5 = v26;
  v6 = v27;
  if (v26 != v27) {
    do {
      v7 = *(_QWORD*)v5;
      v5 = (__int64 (*)())((char*)v5 + 8);
      v8 = *(_QWORD*)(a2 + 32);
      v28 = v7;
      if (v8 == 0) {
      LABEL_41:
        GameRoutine_60a310(v8, v4);
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v8 + 48LL))(v8, &v28);
    } while (v5 != v6);
    v5 = v26;
  }
  if (v5 != nullptr) {
    v27 = v5;
    v9 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v9);
  }
  GameRoutine_134b980((void*)(&v26), a1);
  v10 = v26;
  v11 = v27;
  if (v26 != v27) {
    do {
      v12 = *(_QWORD*)v10;
      v10 = (__int64 (*)())((char*)v10 + 8);
      v8 = *(_QWORD*)(a2 + 32);
      v28 = v12;
      if (v8 == 0) {
        goto LABEL_41;
      }
      (*(void (**)(__int64, __int64*))(*(_QWORD*)v8 + 48LL))(v8, &v28);
    } while (v10 != v11);
    v10 = v26;
  }
  if (v10 != nullptr) {
    v27 = v10;
    v13 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v13);
  }
  v14 = *(_QWORD*)(a2 + 32);
  if (v14 != 0) {
    if (v14 == a2) {
      v25 = v24;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v14 + 24LL))(v14, v24);
      v15 = v25;
    }
    else {
      v15 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      v25 = v15;
    }
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 64,
                                                  16, 0);
    v16 = v17;
    *v17 = GameData_202d748;
    v18 = v17 + 2;
    if (v15 != nullptr) {
      if (v15 == v24) {
        v17[6] = v18;
        (*(void (**)(_BYTE*))(*(_QWORD*)v15 + 24LL))(v15);
        if (a1 == nullptr) {
          goto LABEL_35;
        }
      }
      else {
        v17[6] =
            (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v15 + 16LL))(v15, v18);
        if (a1 == nullptr) {
          goto LABEL_35;
        }
      }
    }
    else {
      v17[6] = 0;
      if (a1 == nullptr) {
        goto LABEL_35;
      }
    }
  }
  else {
    v25 = nullptr;
    v16 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 64,
                                                  16, 0);
    v16[6] = 0;
    *v16 = GameData_202d748;
    if (a1 == nullptr) {
      goto LABEL_35;
    }
  }
  v19 = *(_QWORD*)(GameData_21c96e8 + 8);
  v20 = *(__int64 (***)())(v19 + 8);
  v21 = *(__int64 (***)())(v19 + 16);
  while (v20 != v21) {
    if (*(__int64 (**)())*v20 == a1) {
      v26 = *v20;
      (*(void (**)(_QWORD*, __int64 (**)()))(*v16 + 48LL))(v16, &v26);
    }
    ++v20;
  }
LABEL_35:
  (*(void (**)(_QWORD*))(*v16 + 40LL))(v16);
  result = (__int64)v25;
  if (v25 == v24) {
    v23 = 32;
  }
  else {
    if (v25 == nullptr) {
      return result;
    }
    v23 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v25 + v23))((__int64)v25);
}

bool TroopMgr_134d080(__int64 (*a1)())
{
  __int64 (*v2)();
  __int64 v3;
  _BOOL4 v5;
  __int64 v6;
  __int64 (*v7)();
  __int64 v8;
  _BOOL4 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v16;
  __int64 v17;
  __int64 (*v19)();
  __int64 (*v20)();

  TroopMgr_134b820_alt1((void*)(&v19), (__int64)a1);
  if (v19 == v20) {
    v5 = true;
    if (v19 == nullptr) {
      goto LABEL_18;
    }
    goto LABEL_15;
  }
  v2 = (__int64 (*)())((char*)v19 + 8);
  do {
    v3 = *(_QWORD*)(*((_QWORD*)v2 - 1) + 376LL);
    if (v3 != 0) {
      LODWORD(v3) = *(_DWORD*)(*(_QWORD*)(v3 + 72) + 120LL);
    }
    if (v2 == v20) {
      break;
    }
    if ((_DWORD)v3 == 2017201876) {
      break;
    }
    v2 = (__int64 (*)())((char*)v2 + 8);
  } while ((_DWORD)v3 != -1193575777);
  v5 = (_DWORD)v3 != 2017201876 && (_DWORD)v3 != -1193575777;
  if (v19 != nullptr) {
  LABEL_15:
    v20 = v19;
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
  }
LABEL_18:
  if (!v5) {
    return true;
  }
  GameRoutine_134b980((void*)(&v19), a1);
  if (v19 == v20) {
    v10 = true;
    if (v19 == nullptr) {
      goto LABEL_36;
    }
    goto LABEL_33;
  }
  v7 = (__int64 (*)())((char*)v19 + 8);
  do {
    v8 = *(_QWORD*)(*((_QWORD*)v7 - 1) + 376LL);
    if (v8 != 0) {
      LODWORD(v8) = *(_DWORD*)(*(_QWORD*)(v8 + 72) + 120LL);
    }
    if (v7 == v20) {
      break;
    }
    if ((_DWORD)v8 == 2017201876) {
      break;
    }
    v7 = (__int64 (*)())((char*)v7 + 8);
  } while ((_DWORD)v8 != -1193575777);
  v10 = (_DWORD)v8 != 2017201876 && (_DWORD)v8 != -1193575777;
  if (v19 != nullptr) {
  LABEL_33:
    v20 = v19;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
LABEL_36:
  if (!v10) {
    return true;
  }
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return false;
  }
  v12 = *(_QWORD*)(GameData_21c96e8 + 8);
  v13 = *(__int64**)(v12 + 8);
  v14 = *(__int64**)(v12 + 16);
  if (v13 == v14) {
    return false;
  }
  while (1) {
    v16 = *v13;
    if ((*(_QWORD*)(*v13 + 96) | *(_QWORD*)(*v13 + 552)) == 0 &&
        *(_DWORD*)(v16 + 84) == -1) {
      break;
    }
    if (++v13 == v14) {
      return false;
    }
  }
  v17 = *(_QWORD*)(v16 + 376);
  if (v17 != 0) {
    LODWORD(v17) = *(_DWORD*)(*(_QWORD*)(v17 + 72) + 120LL);
  }
  return (_DWORD)v17 == -1193575777 || (_DWORD)v17 == 2017201876;
}

__int64 TroopMgr_134d2e0(__int64 a1)
{
  __int64 (****v1)();
  __int64 (****v2)();
  __int64* v3;
  __int64 v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  _QWORD* v8;
  __int64 (***v9)();
  __int64 (**v10)();
  char* v11;
  unsigned __int64 v12;
  __int64 v13;
  char* v14;
  __int64 (**v15)();
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 (***v25)();
  __int64 (**v26)();
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 (**v30)();
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  signed __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __n128 v59;
  long double v60;
  __int64* v61;
  __int64* v62;
  __int64 v63;
  char v64;
  __int64 v65;
  char* v66;
  _BOOL4 v67;
  __int64* v68;
  __int64* v69;
  int v70;
  __int64 v71;
  __int64 v72;
  char* v73;
  char* v74;
  unsigned __int64 v75;
  __int64 v76;
  char* v77;
  unsigned int* v78;
  unsigned int* v79;
  int v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64* v84;
  __int64* v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  int v93;
  __int64* v94;
  unsigned int v95;
  __int64* i;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  bool v101;
  __int64 v102;
  __int64 v104;
  int* v105;
  int v106;
  unsigned int* v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  int v116;
  __int64 v117;
  __int64 v118;
  int v119;
  __int64 v120;
  __int64 (***v121)();
  __int64 (**v122)();
  __int64 (***v123)();
  __int64 v124;
  __int64* v125;
  __int64 (***v126)();
  _QWORD* v127;
  __int64 v128;
  __int64 (****v129)();
  __int64 (****v130)();
  __int64 (**v131)();
  __int64 v132;
  int v133;
  __int64* v134;
  __int64* v135;
  __int64* v136;
  __int64 v137;
  __int64 v138;
  __n128 v139;
  long double v140;
  __int64 v141;
  int v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  char v147;
  __int64* v148;
  __int64 v149;
  int v150;
  __int64* v151;
  __int64* v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  unsigned int v165;
  __int64 v166;
  __int64 (****v168)();
  __int64 v169;
  unsigned __int64 v170;
  char* v171;
  __int64 (****v172)();
  __int64 (**v173)();
  _QWORD v174[4];
  _QWORD* v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  _QWORD* v185;
  _QWORD* v186;
  __int64 v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  char* v191;
  char* v192;
  __int64 v193;
  unsigned __int8 v194;
  _QWORD v195[2];
  __int64 (**v196)();
  _QWORD* v197;
  __int64 (***v198)();
  int v199;
  __int64 (***v200)();

  v2 = *(__int64 (*****)())(a1 + 8);
  v1 = *(__int64 (*****)())(a1 + 16);
  v194 = 0;
  v168 = v1;
  if (v2 == v1) {
    return 0;
  }
  v3 = &GameData_21ca000;
  v4 = a1;
  v5 = nullptr;
  v6 = nullptr;
  v7 = 0;
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = &v196;
  do {
    v10 = **v2;
    v11 = v5;
    if (v5 == v6) {
      goto LABEL_21;
    }
    v12 = v6 - v5 - 8;
    v11 = v5;
    if ((~(_BYTE)v12 & 0x18) != 0) {
      v13 = ((unsigned __int8)((unsigned int)v12 >> 3) + 1) & 3;
      v11 = v5;
      while (*(__int64 (***)())v11 != v10) {
        v11 += 8;
        if (--v13 == 0) {
          goto LABEL_10;
        }
      }
      goto LABEL_21;
    }
  LABEL_10:
    if (v12 < 0x18) {
      goto LABEL_22;
    }
    v11 += 16;
    while (1) {
      if (*((__int64 (***)())v11 - 2) == v10) {
        if (v11 - 16 == v6) {
          goto LABEL_22;
        }
        goto LABEL_4;
      }
      if (*((__int64 (***)())v11 - 1) == v10) {
        v11 -= 8;
      LABEL_21:
        if (v11 == v6) {
          goto LABEL_22;
        }
        goto LABEL_4;
      }
      if (*(__int64 (***)())v11 == v10) {
        goto LABEL_21;
      }
      if (*((__int64 (***)())v11 + 1) == v10) {
        break;
      }
      v14 = v11 + 16;
      v11 += 32;
      if (v14 == v6) {
        goto LABEL_22;
      }
    }
    if (v11 + 8 != v6) {
      goto LABEL_4;
    }
  LABEL_22:
    v172 = v2;
    v173 = **v2;
    if ((unsigned __int64)v6 >= v7) {
      v16 = (char*)(v6 - v5);
      v17 = (v6 - v5) >> 3;
      v18 = v17 + 1;
      if ((unsigned __int64)(v17 + 1) >> 61 != 0) {
        GameRoutine_8875e0(a1);
      }
      if ((__int64)(v7 - (_QWORD)v5) >> 2 > v18) {
        v18 = (__int64)(v7 - (_QWORD)v5) >> 2;
      }
      if (v7 - (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
        v19 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v18;
      }
      if (v19 != 0) {
        if (v19 >> 61 != 0) {
          GameRoutine_60a210(a1);
        }
        v20 = fw_memory_HeapManager_Allocate(*v8, 8 * v19, 16, 0);
        v10 = v173;
      }
      else {
        v20 = 0;
      }
      v21 = v20 + 8 * v19;
      v22 = (__int64)&v16[v20 + -8 * v17];
      *(_QWORD*)&v16[v20] = v10;
      v169 = (__int64)&v16[v20 + 8];
      v170 = v21;
      memcpy(v22, v5, v16);
      if (v5 != nullptr) {
        v23 = 128;
        if (*(_QWORD*)(*v8 + 200LL) == 0) {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v23);
      }
      v15 = v173;
      v5 = (char*)v22;
    }
    else {
      *(_QWORD*)v6 = v10;
      v15 = v10;
      v169 = (__int64)(v6 + 8);
      v170 = v7;
    }
    v24 = *v8;
    v192 = nullptr;
    v193 = 0;
    v190 = 0;
    v191 = nullptr;
    v188 = 0;
    v189 = 0;
    v186 = nullptr;
    v187 = 0;
    v184 = 0;
    v185 = nullptr;
    v182 = 0;
    v183 = 0;
    v25 = (__int64 (***)())fw_memory_HeapManager_Allocate(v24, 48, 16, 0);
    *v25 = GameData_202cc88;
    v25[1] = (__int64 (**)())&v191;
    v25[2] = (__int64 (**)())&v188;
    v25[3] = (__int64 (**)())&v185;
    v25[4] = (__int64 (**)())&v182;
    v25[5] = v15;
    if (v15 != nullptr &&
        (v26 = v15, v27 = *(_QWORD*)(*GameData_212c790 + 8),
         v28 = *(_QWORD**)(v27 + 8), v29 = *(_QWORD**)(v27 + 16), v28 != v29)) {
      do {
        if (*(__int64 (***)())*v28 == v26) {
          v195[0] = *v28;
          ((void (*)(__int64 (***)(), _QWORD*))(*v25)[6])(v25, v195);
          v26 = v173;
        }
        ++v28;
      } while (v28 != v29);
      v30 = *v25;
    }
    else {
      v30 = GameData_202cc88;
    }
    ((void (*)(__int64 (***)()))v30[5])(v25);
    v195[0] = GameData_202cd08;
    v195[1] = &v191;
    v197 = v195;
    v196 = v173;
    TroopMgr_13460a0_alt1(v195);
    v32 = (__int64)v197;
    if (v197 == v195) {
      v33 = 32;
    LABEL_50:
      v32 = (*(__int64 (**)(__int64))(*v197 + v33))((__int64)v197);
    }
    else if (v197 != nullptr) {
      v33 = 40;
      goto LABEL_50;
    }
    v35 = v188;
    v34 = v189;
    v171 = v5;
    if (v189 != v188) {
      v37 = v185;
      v36 = v186;
      if (v186 != v185) {
        v38 = *(_QWORD*)(v4 + 16);
        do {
          v39 = *(_QWORD*)(v4 + 8);
          if (v38 != v39) {
            v40 = (v38 - v39) >> 3;
            v41 = 0;
            while (*(_QWORD*)(v39 + 8 * v41) != *v37) {
              if (v40 == ++v41) {
                goto LABEL_55;
              }
            }
            if ((v41 & 0x8000000000000000LL) == 0) {
              v42 = (unsigned int)v41;
              if ((unsigned int)v41 >= v40) {
                GameRoutine_13549e0_alt3(v32, v31);
              }
              if (*(_QWORD*)(v39 + 8LL * (unsigned int)v41) != 0) {
                GameRoutine_133cc40_alt2(
                    *(_QWORD*)(v39 + 8LL * (unsigned int)v41));
                v43 = 128;
                if (*(_QWORD*)(*v8 + 200LL) == 0) {
                  v43 = 56;
                }
                v32 = nn_mem_StandardAllocator_Free(*v8 + v43);
                v39 = *(_QWORD*)(v4 + 8);
                v38 = *(_QWORD*)(v4 + 16);
              }
              v44 = v39 + 8 * v42;
              v31 = v44 + 8;
              v45 = v38 - (v44 + 8);
              if (v38 != v44 + 8) {
                v32 = memmove(v44, v31, v38 - (v44 + 8));
              }
              v38 = v44 + v45;
              *(_QWORD*)(v4 + 16) = v44 + v45;
            }
          }
        LABEL_55:
          ++v37;
        } while (v37 != v36);
        v186 = v185;
        v35 = v188;
        v34 = v189;
      }
    }
    v46 = v34 - v35;
    v179 = 0;
    v180 = 0;
    v181 = 0;
    v195[0] = v4;
    v195[1] = &v194;
    if (v34 == v35) {
      v32 = TroopMgr_1355080_alt1(v195, &v179);
      goto LABEL_76;
    }
    if (v46 < 0) {
      goto LABEL_298;
    }
    v47 = fw_memory_HeapManager_Allocate(*v8, v34 - v35, 16, 0);
    v48 = v47 + v46;
    v49 = v47;
    v179 = v47;
    v181 = v47 + v46;
    memcpy(v47, v35, v46);
    v180 = v48;
    TroopMgr_1355080_alt1(v195, &v179);
    v50 = *v8;
    v180 = v49;
    v51 = 128;
    if (*(_QWORD*)(v50 + 200) == 0) {
      v51 = 56;
    }
    v32 = nn_mem_StandardAllocator_Free(v50 + v51);
  LABEL_76:
    v52 = v185;
    v177 = 0;
    v178 = 0;
    v53 = (char*)v186 - (char*)v185;
    v176 = 0;
    if (v186 == v185) {
      TroopMgr_1355080_alt1(v195, &v176);
      goto LABEL_82;
    }
    if (v53 < 0) {
    LABEL_298:
      GameRoutine_888610_alt1(v32);
    }
    v54 = fw_memory_HeapManager_Allocate(*v8, (char*)v186 - (char*)v185, 16, 0);
    v55 = v54 + v53;
    v56 = v54;
    v176 = v54;
    v178 = v54 + v53;
    memcpy(v54, v52, v53);
    v177 = v55;
    TroopMgr_1355080_alt1(v195, &v176);
    v57 = *v8;
    v177 = v56;
    v58 = 128;
    if (*(_QWORD*)(v57 + 200) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(v57 + v58);
  LABEL_82:
    v61 = v185;
    v62 = v186;
    while (v61 != v62) {
      if (v183 != v182) {
        v63 = *v61;
        v59 = Impl_13261c0(v173);
        if (v64 == 6) {
          game_gmap_13402f0(v63, 4, 0, v59, v60);
        }
      }
      ++v61;
    }
    if ((*(_BYTE*)(v4 + 60) & 1) == 0) {
      v65 = v3[342];
      if (v65 == 0 || (*(_BYTE*)(v65 + 92) & 2) == 0) {
        v66 = v191;
        v67 = false;
        a1 = v192 - v191;
        if (v192 == v191) {
          goto LABEL_275;
        }
      LABEL_124:
        v78 = *(unsigned int**)(v4 + 32);
        v79 = *(unsigned int**)(v4 + 40);
        v80 = *(_DWORD*)(v4 + 56);
        v81 = a1 >> 3;
        v82 = 0xFFFFFFFFLL;
        v83 = 0;
        v84 = *(__int64**)(v4 + 8);
        v85 = *(__int64**)(v4 + 16);
        v86 = v79 - v78;
        if (v86 <= 1) {
          v87 = 1;
        }
        else {
          v87 = v79 - v78;
        }
        while (2) {
          if (v79 != v78) {
            if (v67) {
              v88 = 0;
              while (1) {
                if ((v82 & 0x80000000) == 0 &&
                    *(_DWORD*)(*(_QWORD*)&v66[8 * v82] + 84LL) == v78[v88]) {
                  goto LABEL_128;
                }
                v89 = *(_QWORD*)&v66[8 * v83];
                if (v80 < 0) {
                  if (v84 == v85) {
                    if (v89 == 0) {
                      goto LABEL_153;
                    }
                    goto LABEL_152;
                  }
                  v94 = *(__int64**)(v4 + 8);
                  do {
                    v91 = *v94;
                    if (*(_QWORD*)(*v94 + 96) == 0 &&
                        *(_QWORD*)(v91 + 552) == 0) {
                      goto LABEL_140;
                    }
                    ++v94;
                  } while (v94 != v85);
                LABEL_139:
                  v91 = 0;
                }
                else {
                  if (v84 == v85) {
                    v93 = *(_DWORD*)(v4 + 56);
                    if (v89 == 0) {
                      goto LABEL_158;
                    }
                    goto LABEL_152;
                  }
                  v90 = *(__int64**)(v4 + 8);
                  while (1) {
                    v92 = *v90++;
                    v91 = v92;
                    if (*(_DWORD*)(v92 + 84) == v80) {
                      break;
                    }
                    if (v90 == v85) {
                      goto LABEL_139;
                    }
                  }
                }
              LABEL_140:
                if (v89 == v91) {
                  v93 = *(_DWORD*)(v4 + 56);
                  if (v80 < 0) {
                  LABEL_153:
                    for (i = *(__int64**)(v4 + 8);; ++i) {
                      v97 = *i;
                      if (*(_QWORD*)(*i + 96) == 0 &&
                          *(_QWORD*)(v97 + 552) == 0) {
                        break;
                      }
                    }
                    v93 = *(_DWORD*)(v97 + 84);
                  }
                LABEL_158:
                  v95 = v78[v88];
                  if (v93 == v95) {
                    goto LABEL_128;
                  }
                  goto LABEL_159;
                }
              LABEL_152:
                v95 = v78[v88];
              LABEL_159:
                if (*(_DWORD*)(v89 + 84) == v95) {
                  goto LABEL_127;
                }
                if (++v88 == v87) {
                  goto LABEL_128;
                }
              }
            }
            if ((v82 & 0x80000000) != 0) {
              v104 = v79 - v78;
              v105 = *(int**)(v4 + 32);
              while (1) {
                v106 = *v105++;
                if (*(_DWORD*)(*(_QWORD*)&v66[8 * v83] + 84LL) == v106) {
                  break;
                }
                if (--v104 == 0) {
                  goto LABEL_128;
                }
              }
            LABEL_127:
              v82 = v83;
            }
            else {
              v98 = *v78;
              v99 = *(unsigned int*)(*(_QWORD*)&v66[8 * v82] + 84LL);
              if (v99 != v98) {
                v100 = *(unsigned int*)(*(_QWORD*)&v66[8 * v83] + 84LL);
                v101 = v100 == v98;
                if (v100 == v98) {
                  v102 = v83;
                }
                else {
                  v102 = v82;
                }
                if (!v101 && v86 >= 2) {
                  v107 = v78 + 1;
                  v108 = v86 - 1;
                  do {
                    v110 = *v107++;
                    v109 = v110;
                    if (v99 == v110) {
                      break;
                    }
                    if (v100 == v109) {
                      goto LABEL_127;
                    }
                    --v108;
                  } while (v108 != 0);
                }
                else {
                  v82 = v102;
                }
              }
            }
          }
        LABEL_128:
          if (v81 > ++v83) {
            continue;
          }
          break;
        }
        v111 = 0;
        while (2) {
          v112 = v3[342];
          if (v112 != 0) {
            v113 = *(_QWORD*)&v66[8 * v111];
            if (*(_DWORD*)(v112 + 60) == 1) {
              a1 = game_gmap_13402f0(v113, 4, 1, v59, v60);
            }
            else {
              if ((*(_DWORD*)(v113 + 84) & 0x80000000) == 0) {
                goto LABEL_187;
              }
            LABEL_195:
              v119 = *(unsigned __int8*)(v113 + 546);
              v120 = *v8;
              v175 = v174;
              v199 = 0;
              v198 = v9;
              v174[0] = GameData_202cd88;
              v195[0] = &v199;
              v196 = GameData_202cd88;
              v121 = (__int64 (***)())fw_memory_HeapManager_Allocate(v120, 80,
                                                                     16, 0);
              v122 = v173;
              v121[4] = GameData_202cd88;
              v123 = v121;
              v121[2] = (__int64 (**)())&v199;
              *v121 = GameData_202d848;
              v121[8] = (__int64 (**)())(v121 + 4);
              if (v173 != nullptr) {
                v124 = v4;
                v125 = v3;
                v126 = v9;
                v127 = v8;
                v128 = *(_QWORD*)(*GameData_212c790 + 8);
                v130 = *(__int64 (*****)())(v128 + 8);
                v129 = *(__int64 (*****)())(v128 + 16);
                if (v130 == v129) {
                  v131 = GameData_202d848;
                }
                else {
                  do {
                    if (**v130 == v122) {
                      v200 = *v130;
                      ((void (*)(__int64 (***)(), __int64 (****)()))(*v123)[6])(
                          v123, &v200);
                      v122 = v173;
                    }
                    ++v130;
                  } while (v130 != v129);
                  v131 = *v123;
                }
                v8 = v127;
                v9 = v126;
                v3 = v125;
                v4 = v124;
              }
              else {
                v131 = GameData_202d848;
              }
              ((void (*)(__int64 (***)()))v131[5])(v123);
              if (v198 == v9) {
                v141 = 4;
              LABEL_224:
                (*v198)[v141]();
              }
              else if (v198 != nullptr) {
                v141 = 5;
                goto LABEL_224;
              }
              v142 = v199;
              v143 = (__int64)v175;
              if (v175 == v174) {
                v144 = 32;
              LABEL_229:
                v143 = (*(__int64 (**)(__int64))(*v175 + v144))((__int64)v175);
              }
              else if (v175 != nullptr) {
                v144 = 40;
                goto LABEL_229;
              }
              if (v142 == 1 ||
                  (v145 = v3[342]) != 0 && (*(_BYTE*)(v145 + 92) & 2) != 0 ||
                  v173 !=
                      (__int64 (**)())game_gmap_SpotMgr_GetCurrentSpot(v143)) {
                v146 = *(_QWORD*)&v191[8 * v111];
                goto LABEL_235;
              }
              if ((*(_BYTE*)(*(_QWORD*)(*GameData_212d708 + 16) + 170LL) & 1) ==
                  0) {
                v146 = *(_QWORD*)&v191[8 * v111];
                goto LABEL_270;
              }
              v149 = *(_QWORD*)(*GameData_212c790 + 8);
              v150 = *(_DWORD*)(v149 + 56);
              v151 = *(__int64**)(v149 + 8);
              v152 = *(__int64**)(v149 + 16);
              if ((v150 & 0x80000000) == 0) {
                while (v151 != v152) {
                  v154 = *v151++;
                  v153 = v154;
                  if (*(_DWORD*)(v154 + 84) == v150) {
                    goto LABEL_269;
                  }
                }
              LABEL_268:
                v153 = 0;
                goto LABEL_269;
              }
              if (v151 == v152) {
                goto LABEL_268;
              }
              while (1) {
                v153 = *v151;
                if (*(_QWORD*)(*v151 + 96) == 0 &&
                    *(_QWORD*)(v153 + 552) == 0) {
                  break;
                }
                if (++v151 == v152) {
                  goto LABEL_268;
                }
              }
            LABEL_269:
              v146 = *(_QWORD*)&v191[8 * v111];
              if (v153 == v146) {
              LABEL_235:
                v147 = 1;
              }
              else {
              LABEL_270:
                v147 = 0;
              }
              a1 = game_gmap_13402f0(v146, 4, v147, v139, v140);
              if (((*(unsigned __int8*)(*(_QWORD*)&v191[8 * v111] + 546LL) ^
                    v119) &
                   0x10) != 0) {
              LABEL_259:
                v194 = 1;
              }
            }
          LABEL_183:
            v66 = v191;
            if (++v111 >= (unsigned __int64)((v192 - v191) >> 3)) {
              goto LABEL_275;
            }
            continue;
          }
          break;
        }
        v113 = *(_QWORD*)&v66[8 * v111];
        if ((*(_DWORD*)(v113 + 84) & 0x80000000) != 0) {
          goto LABEL_195;
        }
      LABEL_187:
        v114 = *(__int64**)(v4 + 8);
        v115 = *(__int64**)(v4 + 16);
        v116 = *(_DWORD*)(v4 + 56);
        if ((v116 & 0x80000000) == 0) {
          if (v114 != v115) {
            while (1) {
              v118 = *v114++;
              v117 = v118;
              if (*(_DWORD*)(v118 + 84) == v116) {
                goto LABEL_192;
              }
              if (v114 == v115) {
                goto LABEL_191;
              }
            }
          }
          goto LABEL_202;
        }
        if (v114 != v115) {
          while (1) {
            v117 = *v114;
            if (*(_QWORD*)(*v114 + 96) == 0 && *(_QWORD*)(v117 + 552) == 0) {
              break;
            }
            if (++v114 == v115) {
            LABEL_191:
              v117 = 0;
              break;
            }
          }
        LABEL_192:
          if (v113 == v117) {
          LABEL_258:
            a1 = game_gmap_13402f0(v113, 4, 1, v59, v60);
            if ((a1 & 1) != 0) {
              goto LABEL_259;
            }
            goto LABEL_183;
          }
        }
      LABEL_202:
        if ((v82 & 0x80000000) == 0 && v111 != v82 &&
            (*(_WORD*)(v113 + 544) & 0x1000) == 0) {
        LABEL_205:
          a1 = game_gmap_13402f0(v113, 4, 0, v59, v60);
          if ((a1 & 1) != 0) {
            goto LABEL_259;
          }
          goto LABEL_183;
        }
        if (*(_BYTE*)(*(_QWORD*)(*GameData_212d708 + 16) + 170LL) == 1) {
          v132 = *(_QWORD*)(*GameData_212c790 + 8);
          v133 = *(_DWORD*)(v132 + 56);
          v134 = *(__int64**)(v132 + 8);
          v135 = *(__int64**)(v132 + 16);
          if ((v133 & 0x80000000) == 0) {
            v136 = v134;
            if (v134 == v135) {
              v137 = 0;
            }
            else {
              while (1) {
                v138 = *v136++;
                v137 = v138;
                if (*(_DWORD*)(v138 + 84) == v133) {
                  break;
                }
                if (v136 == v135) {
                  goto LABEL_239;
                }
              }
            }
            goto LABEL_252;
          }
          v148 = v134;
          if (v134 == v135) {
          LABEL_239:
            v137 = 0;
            if (v112 == 0) {
              goto LABEL_255;
            }
          LABEL_253:
            if (*(_DWORD*)(v112 + 60) == 3) {
              while (v134 != v135) {
                v112 = *v134;
                if ((*(_QWORD*)(*v134 + 96) | *(_QWORD*)(*v134 + 552)) == 0 &&
                    *(_DWORD*)(v112 + 84) == -1) {
                  goto LABEL_255;
                }
                ++v134;
              }
            }
            v112 = 0;
            goto LABEL_255;
          }
          while (1) {
            v137 = *v148;
            if (*(_QWORD*)(*v148 + 96) == 0 && *(_QWORD*)(v137 + 552) == 0) {
              break;
            }
            if (++v148 == v135) {
              goto LABEL_239;
            }
          }
        LABEL_252:
          if (v112 != 0) {
            goto LABEL_253;
          }
        LABEL_255:
          if (v137 == v112) {
            v155 = *(_QWORD*)v113;
            v156 = game_gmap_SpotMgr_GetCurrentSpot(v113);
            v66 = v191;
            if (v155 == v156) {
              v113 = *(_QWORD*)&v191[8 * v111];
              goto LABEL_205;
            }
          }
        }
        v113 = *(_QWORD*)&v66[8 * v111];
        goto LABEL_258;
      }
    }
    v68 = *(__int64**)(v4 + 8);
    v69 = *(__int64**)(v4 + 16);
    v70 = *(_DWORD*)(v4 + 56);
    if (v70 < 0) {
      for (; v68 != v69; ++v68) {
        v71 = *v68;
        if (*(_QWORD*)(*v68 + 96) == 0 && *(_QWORD*)(v71 + 552) == 0) {
          goto LABEL_100;
        }
      }
    }
    else {
      while (v68 != v69) {
        v72 = *v68++;
        v71 = v72;
        if (*(_DWORD*)(v72 + 84) == v70) {
          goto LABEL_100;
        }
      }
    }
    v71 = 0;
  LABEL_100:
    v66 = v191;
    v73 = v191;
    if (v191 != v192) {
      v74 = v191;
      v75 = v192 - v191 - 8;
      if ((~(_BYTE)v75 & 0x18) != 0) {
        v74 = v191;
        v76 = ((unsigned __int8)((unsigned int)v75 >> 3) + 1) & 3;
        while (*(_QWORD*)v74 != v71) {
          v74 += 8;
          if (--v76 == 0) {
            goto LABEL_105;
          }
        }
        v73 = v74;
      }
      else {
      LABEL_105:
        v73 = v192;
        if (v75 >= 0x18) {
          v73 = v74 + 16;
          while (1) {
            if (*((_QWORD*)v73 - 2) == v71) {
              v73 -= 16;
              goto LABEL_123;
            }
            if (*((_QWORD*)v73 - 1) == v71) {
              v73 -= 8;
              goto LABEL_123;
            }
            if (*(_QWORD*)v73 == v71) {
              goto LABEL_123;
            }
            if (*((_QWORD*)v73 + 1) == v71) {
              break;
            }
            v77 = v73 + 16;
            v73 += 32;
            if (v77 == v192) {
              v73 = v192;
              goto LABEL_123;
            }
          }
          v73 += 8;
        }
      }
    }
  LABEL_123:
    v67 = v73 != v192;
    a1 = v192 - v191;
    if (v192 != v191) {
      goto LABEL_124;
    }
  LABEL_275:
    if (v182 != 0) {
      v157 = *v8;
      v183 = v182;
      v158 = 128;
      if (*(_QWORD*)(v157 + 200) == 0) {
        v158 = 56;
      }
      a1 = nn_mem_StandardAllocator_Free(v157 + v158);
    }
    v5 = v171;
    if (v185 != nullptr) {
      v159 = *v8;
      v186 = v185;
      v160 = 128;
      if (*(_QWORD*)(v159 + 200) == 0) {
        v160 = 56;
      }
      a1 = nn_mem_StandardAllocator_Free(v159 + v160);
    }
    if (v188 != 0) {
      v161 = *v8;
      v189 = v188;
      v162 = 128;
      if (*(_QWORD*)(v161 + 200) == 0) {
        v162 = 56;
      }
      a1 = nn_mem_StandardAllocator_Free(v161 + v162);
    }
    if (v191 != nullptr) {
      v163 = *v8;
      v192 = v191;
      v164 = 128;
      if (*(_QWORD*)(v163 + 200) == 0) {
        v164 = 56;
      }
      a1 = nn_mem_StandardAllocator_Free(v163 + v164);
    }
    v2 = v172;
    v6 = (char*)v169;
    v7 = v170;
  LABEL_4:
    ++v2;
  } while (v2 != v168);
  v165 = v194;
  if (v5 != nullptr) {
    v166 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v166 = 56;
    }
    nn_mem_StandardAllocator_Free(*v8 + v166);
  }
  return v165;
}

__int64 TroopMgr_134e220(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  char v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return 0;
  }
  result = game_gmap_SpotMgr_GetCurrentSpot(a1);
  if (result == 0) {
    return result;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_QWORD*)(v2 + 8);
  v4 = *(_QWORD*)(v2 + 16);
  if (v3 == v4) {
    return 0;
  }
  while (1) {
    if (**(_QWORD**)v3 == result) {
      v5 = *(_QWORD*)(*(_QWORD*)v3 + 96LL);
      if (v5 != 0 && *(_BYTE*)(v5 + 32) == 1) {
        break;
      }
    }
    v3 += 8;
    if (v3 == v4) {
      return 0;
    }
  }
  v6 = game_gmap_SpotMgr_GetCurrentSpot(result);
  v7 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v8 = *(_QWORD*)(v6 + 128);
    v9 = *(_DWORD*)(game_GameModeData_instance_ + 92) & 0xFFFFFC7F;
    *(_QWORD*)(game_GameModeData_instance_ + 16) = v8;
    *(_DWORD*)(v7 + 92) = v9;
    if (v8 != 0) {
      v10 = *(_DWORD*)(v8 + 184);
      if ((v10 & 0x800) != 0) {
        v9 |= 0x100u;
        *(_DWORD*)(v7 + 92) = v9;
        v10 = *(_DWORD*)(v8 + 184);
      }
      if ((v10 & 0x40) != 0) {
        v9 |= 0x80u;
        *(_DWORD*)(v7 + 92) = v9;
        v10 = *(_DWORD*)(v8 + 184);
      }
      v9 |= (4 * (_WORD)v10) & 0x200;
    }
    v11 = *(_BYTE*)(v7 + 56);
    *(_DWORD*)(v7 + 92) = v9 | 2;
    *(_BYTE*)(v7 + 57) = v11;
  }
  v12 = game_gmap_SpotMgr_GetCurrentSpot(v6);
  TroopMgr_134b820_alt1((void*)(&v18), v12);
  v13 = v18;
  v14 = v19;
  if (v18 != v19) {
    v15 = v18;
    do {
      v16 = *v15++;
      *(_QWORD*)(v16 + 8) = 0;
    } while (v15 != v14);
  }
  if (v13 != nullptr) {
    v19 = v13;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
  }
  return 1;
}

__int64 TroopMgr_134e920(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v2;
      if ((*(_WORD*)(*v2 + 544) & 0x200) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != v5) {
      v16 = GameData_21c96e8;
      if (GameData_21c96e8 != 0) {
        v17 = v4;
      LABEL_25:
        v18 = *(_QWORD*)(v16 + 8);
        v20 = *(_QWORD*)(v18 + 8);
        v19 = *(_QWORD*)(v18 + 16);
        if (v19 == v20) {
          goto LABEL_40;
        }
        v21 = (v19 - v20) >> 3;
        v22 = 0;
        while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v17) {
          if (v21 == ++v22) {
            goto LABEL_40;
          }
        }
        if ((v22 & 0x8000000000000000LL) == 0) {
          v23 = (unsigned int)v22;
          if ((unsigned int)v22 >= v21) {
            GameRoutine_13549e0_alt1(result);
          }
          if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
            GameRoutine_133cc40(*(_QWORD*)(v20 + 8LL * (unsigned int)v22));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            else {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            v20 = *(_QWORD*)(v18 + 8);
            v19 = *(_QWORD*)(v18 + 16);
          }
          v25 = v20 + 8 * v23;
          v26 = v19 - (v25 + 8);
          if (v19 != v25 + 8) {
            result = memmove(v25, v25 + 8, v19 - (v25 + 8));
          }
          *(_QWORD*)(v18 + 16) = v25 + v26;
        }
      LABEL_40:
        while (1) {
          v17 += 8;
          if (v17 == v5) {
            break;
          }
          v16 = GameData_21c96e8;
          if (GameData_21c96e8 != 0) {
            goto LABEL_25;
          }
        }
      }
    }
    if (v4 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
  }
  return result;
}

__int64 TroopMgr_134ebe0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64* v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  if (v2 != v3) {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *v2;
      if ((*(_WORD*)(*v2 + 544) & 0x700) != 0) {
        if ((unsigned __int64)v5 < v6) {
          *(_QWORD*)v5 = v7;
          v5 += 8;
        }
        else {
          v8 = (char*)(v5 - v4);
          v9 = (v5 - v4) >> 3;
          v10 = v9 + 1;
          if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          if ((__int64)(v6 - (_QWORD)v4) >> 2 > v10) {
            v10 = (__int64)(v6 - (_QWORD)v4) >> 2;
          }
          if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFF8LL) {
            v11 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v11 = v10;
          }
          if (v11 != 0) {
            if (v11 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v12 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
          }
          else {
            v12 = 0;
          }
          v6 = v12 + 8 * v11;
          v13 = (char*)(v5 - v4);
          v14 = (__int64)&v8[v12 + -8 * v9];
          *(_QWORD*)&v8[v12] = v7;
          v5 = &v8[v12 + 8];
          result = memcpy(v14, v4, v13);
          if (v4 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15);
          }
          v4 = (char*)v14;
        }
      }
      ++v2;
    } while (v2 != v3);
    if (v4 != v5) {
      v16 = GameData_21c96e8;
      if (GameData_21c96e8 != 0) {
        v17 = v4;
      LABEL_25:
        v18 = *(_QWORD*)(v16 + 8);
        v20 = *(_QWORD*)(v18 + 8);
        v19 = *(_QWORD*)(v18 + 16);
        if (v19 == v20) {
          goto LABEL_40;
        }
        v21 = (v19 - v20) >> 3;
        v22 = 0;
        while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v17) {
          if (v21 == ++v22) {
            goto LABEL_40;
          }
        }
        if ((v22 & 0x8000000000000000LL) == 0) {
          v23 = (unsigned int)v22;
          if ((unsigned int)v22 >= v21) {
            GameRoutine_13549e0_alt1(result);
          }
          if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
            GameRoutine_133cc40(*(_QWORD*)(v20 + 8LL * (unsigned int)v22));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v24 = 128;
            }
            else {
              v24 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
            v20 = *(_QWORD*)(v18 + 8);
            v19 = *(_QWORD*)(v18 + 16);
          }
          v25 = v20 + 8 * v23;
          v26 = v19 - (v25 + 8);
          if (v19 != v25 + 8) {
            result = memmove(v25, v25 + 8, v19 - (v25 + 8));
          }
          *(_QWORD*)(v18 + 16) = v25 + v26;
        }
      LABEL_40:
        while (1) {
          v17 += 8;
          if (v17 == v5) {
            break;
          }
          v16 = GameData_21c96e8;
          if (GameData_21c96e8 != 0) {
            goto LABEL_25;
          }
        }
      }
    }
    if (v4 != nullptr) {
      v27 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v27 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_OnUpdateChapter(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  _QWORD v9[4];
  _QWORD* v10;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v9[0] = GameData_202db48;
    v10 = v9;
    TroopMgr_13460a0((__int64)v9);
    a1 = (__int64)v10;
    if (v10 == v9) {
      v1 = 32;
    }
    else {
      if (v10 == nullptr) {
        goto LABEL_8;
      }
      v1 = 40;
    }
    a1 = (*(__int64 (**)(void*))(*v10 + v1))(v10);
  }
LABEL_8:
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    if (v4 == v5) {
      return TroopMgr_134ebe0(a1);
    }
    while (1) {
      v6 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        break;
      }
      if (++v4 == v5) {
        return TroopMgr_134ebe0(a1);
      }
    }
  }
  else {
    if (v4 == v5) {
      return TroopMgr_134ebe0(a1);
    }
    while (1) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        break;
      }
      if (v4 == v5) {
        return TroopMgr_134ebe0(a1);
      }
    }
  }
  if (*(_BYTE*)(v6 + 512) != 0) {
    *(_BYTE*)(v6 + 512) = 0;
    if (GameData_21f1618 != 0) {
      a1 = GameRoutine_995200(v6 + 112);
    }
  }
  return TroopMgr_134ebe0(a1);
}

bool TroopMgr_134efc0(__int64 a1, __int64 a2)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  int* v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int8* v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  __int64 (*v15)();
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 (***v27)();
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64* v44;
  int v45;
  unsigned int v46;
  unsigned int v47;
  int v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  __int64* v54;
  __int64 v55;
  int v56;
  __int64* v57;
  __int64* v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int v62;
  unsigned int v63;
  unsigned int v64;
  int v65;
  unsigned int v66;
  __int64* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64* v79;
  __int64 v80;
  __int64 v81;
  char v82;
  int v84;
  unsigned int v85;
  unsigned int v86;
  int v87;
  __int64 v88;
  unsigned int v89;
  unsigned __int8* v90;
  __int64 v91;
  int v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  int v96;
  __int64 v97;
  __int64 v98;
  int v99;
  __int64 v100;
  bool v101;
  __int64 v102;
  __int64 v103;
  _QWORD* v105;
  _QWORD* v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 (*v110)();
  unsigned __int64 v111;
  unsigned __int64 v112;
  unsigned __int64 v114;
  unsigned __int64 v115;
  _QWORD* v116;
  _QWORD* v117;
  unsigned __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 (**v126)();
  __int64 (**v127)();
  __int64 (**v128)();
  __int64 v129;
  char v130;
  __int64 v131;
  __int64 v132;
  unsigned __int64 v133;
  signed int v134;
  __int64* v135;
  _BOOL4 v136;
  __int64* v137;
  __int64 v138;
  char v139;
  __int64 v140;
  __int64 (**v141)();
  __int64 (**v142)();
  __int64 v143;
  __int64 (***v144)();

  v2 = GameData_2130e70;
  if (*(_BYTE*)(*GameData_2130e70 + 52) != 10) {
    v21 = *(_QWORD*)(*GameData_212c780 + 8);
    v22 = *(__int64**)(v21 + 48);
    v23 = *(__int64**)(v21 + 56);
    if (v22 == v23) {
      return false;
    }
    v135 = nullptr;
    v24 = nullptr;
    v25 = 0;
    while (1) {
      v26 = *v22;
      if (*(_BYTE*)(*v22 + 117) == 1) {
        break;
      }
    LABEL_25:
      if (++v22 == v23) {
        v40 = (char*)v24 - (char*)v135;
        if (v24 == v135) {
          if (v24 != nullptr) {
            goto LABEL_208;
          }
          return false;
        }
        v41 = v40 >> 3;
        v42 = game_map_MapRandom_instance__ptr[0];
        if ((int)(v40 >> 3) >= 1) {
          v43 = (v40 >> 3) & 0x7FFFFFFF;
          v44 = v135;
          do {
            nn_os_LockMutex(&game_g_random_mutex);
            v45 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8);
            v46 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12);
            v47 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) << 11);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) =
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4) = v45;
            v48 = (v47 >> 8) ^ (v46 >> 19) ^ v47 ^ v46;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8) = v46;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12) = v48;
            v49 = v48 & 0x7FFFFFFF;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v50 = *v44;
            --v43;
            *v44++ = v135[v49 % (unsigned int)v41];
            v135[v49 % (unsigned int)v41] = v50;
          } while (v43 != 0);
        }
        v142 = (__int64 (**)())&GameData_1a8eb23;
        v141 = (__int64 (**)())game_HashString(&GameData_1a8eb23);
        if (game_GameModeData_instance_ != 0 &&
            (v51 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), &v141)) != 0) {
          v134 = *(_DWORD*)(v51 + 32);
        }
        else {
          v134 = 0;
        }
        v52 = v135;
        v53 = nullptr;
        v54 = nullptr;
        v133 = 0;
        v137 = v24;
        do {
          v55 = *v52;
          if (v53 == v54) {
            goto LABEL_216;
          }
          v56 = 0;
          v57 = v53;
          v58 = v53;
          do {
            v60 = *v58;
            v142 = (__int64 (**)())&GameData_1ad7cf2;
            v141 = (__int64 (**)())game_HashString(&GameData_1ad7cf2);
            if (game_GameModeData_instance_ != 0 &&
                (v61 = game_GameVariableTable_Find(
                     *(_QWORD*)(game_GameModeData_instance_ + 48), &v141)) !=
                    0) {
              v59 = *(_DWORD*)(v61 + 32);
            }
            else {
              v59 = 0;
            }
            ++v58;
            v56 |= SpotMgr_1332940(v60, 0, v55, v59);
          } while (v58 != v54);
          v53 = v57;
          v24 = v137;
          if ((v56 & 1) == 0) {
          LABEL_216:
            nn_os_LockMutex(&game_g_random_mutex);
            v62 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8);
            v63 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12);
            v64 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) << 11);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) =
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4) = v62;
            v65 = (v64 >> 8) ^ (v63 >> 19) ^ v64 ^ v63;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8) = v63;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12) = v65;
            v66 = v65 & 0x7FFFFFFF;
            nn_os_UnlockMutex(&game_g_random_mutex);
            if ((int)(v66 % 0x64) < v134) {
              if ((unsigned __int64)v54 < v133) {
                *v54++ = v55;
              }
              else {
                v67 = v53;
                v68 = (char*)v54 - (char*)v53;
                v69 = (v68 >> 3) + 1;
                if (v69 >> 61 != 0) {
                  goto LABEL_212;
                }
                v70 = v67;
                v71 = v133 - (_QWORD)v67;
                v72 = (__int64)(v133 - (_QWORD)v67) >> 2;
                if (v72 > v69) {
                  v69 = v72;
                }
                if (v71 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v73 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v73 = v69;
                }
                if (v73 != 0) {
                  if (v73 >> 61 != 0) {
                    goto LABEL_213;
                  }
                  v74 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v73, 16, 0);
                }
                else {
                  v74 = 0;
                }
                v75 = v74 + 8 * v73;
                v76 = v74 + v68 - 8 * (v68 >> 3);
                v133 = v75;
                *(_QWORD*)(v74 + v68) = v55;
                v54 = (__int64*)(v74 + v68 + 8);
                memcpy(v76, v70, v68);
                if (v70 != nullptr) {
                  v77 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v77 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v77);
                }
                v24 = v137;
                v53 = (__int64*)v76;
              }
            }
          }
          ++v52;
        } while (v52 != v24);
        if (v135 != nullptr) {
          v78 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v78 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v78);
        }
        v136 = v54 != v53;
        if (v54 == v53) {
        LABEL_128:
          if (v53 != nullptr) {
            v103 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v103 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v103);
          }
          return v136;
        }
        v79 = v53;
        while (2) {
          v80 = *v79;
          Impl_13261c0(*v79);
          v81 = *(_QWORD*)(v80 + 136);
          if (v82 != 4 && v81 != 0) {
            nn_os_LockMutex(&game_g_random_mutex);
            v84 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8);
            v85 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12);
            v86 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) << 11);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42) =
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 4) = v84;
            v87 = (v86 >> 8) ^ (v85 >> 19) ^ v86 ^ v85;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 8) = v85;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v42 + 12) = v87;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v88 = *(unsigned __int16*)(v81 + 128);
            if (*(_WORD*)(v81 + 128) != 0) {
              v89 = 0;
              v90 = *(unsigned __int8**)(v81 + 152);
              v91 = 8;
              while (1) {
                v92 = *v90++;
                v89 += v92;
                if ((v87 & 0x7FFFFFFFu) % 0x64 < v89) {
                  break;
                }
                v91 += 16;
                if (--v88 == 0) {
                  goto LABEL_103;
                }
              }
              v93 = *(_QWORD*)(*(_QWORD*)(v81 + 136) + v91);
            }
            else {
            LABEL_103:
              v93 = 0;
            }
            if (*GameData_212c790 != 0 && v93 != 0) {
              if ((v138 = *(_QWORD*)(*GameData_212c790 + 8),
                   game_GameModeData_instance_ == 0) ||
                  (v94 = *(_QWORD*)(game_GameModeData_instance_ + 24)) == 0 ||
                  (*(_BYTE*)(v94 + 152) != 4 ||
                   *(_QWORD*)(v94 + 168) != *(_QWORD*)(v80 + 120)) &&
                      (*(_BYTE*)(v94 + 152) != 6 ||
                       *(_QWORD*)(v94 + 168) != *(_QWORD*)(v80 + 120)) ||
                  *(_BYTE*)(v93 + 32) != 1 ||
                  *(_BYTE*)(*GameData_2130e70 + 52) != 0) {
                v95 = v53;
                v141 = GameData_202bb48;
                v144 = &v141;
                v96 = game_gmap_TroopMgr_CountTroop_134e600(v80, &v141);
                if (v144 == &v141) {
                  v97 = 4;
                LABEL_119:
                  (*v144)[v97]();
                }
                else if (v144 != nullptr) {
                  v97 = 5;
                  goto LABEL_119;
                }
                v142 = (__int64 (**)())&GameData_1a86cf1;
                v98 = game_HashString(&GameData_1a86cf1);
                v99 = game_GameModeData_instance_;
                v141 = (__int64 (**)())v98;
                if (game_GameModeData_instance_ != 0) {
                  v100 = game_GameVariableTable_Find(
                      *(_QWORD*)(game_GameModeData_instance_ + 48), &v141);
                  if (v100 != 0) {
                    v99 = *(_DWORD*)(v100 + 32);
                  }
                  else {
                    v99 = 0;
                  }
                }
                v101 = v96 < v99;
                v53 = v95;
                if (v101) {
                  v102 = TroopMgr_1351170_alt1(v138 + 8);
                  if (v102 != 0) {
                    game_gmap_133d680(v102, v80, v93);
                  }
                }
              }
            }
          }
          if (++v79 == v54) {
            goto LABEL_128;
          }
          continue;
        }
      }
    }
    v27 = &v141;
    v139 = 0;
    v141 = GameData_202dd48;
    v142 = (__int64 (**)())&v139;
    v143 = v26;
    v144 = &v141;
    v28 = *(_QWORD*)(*GameData_212c790 + 8);
    v29 = *(__int64**)(v28 + 8);
    v30 = *(__int64**)(v28 + 16);
    if (v29 == v30) {
      goto LABEL_33;
    }
    do {
      v31 = *v29++;
      v140 = v31;
      if (v144 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      ((void (*)(__int64 (***)(), __int64*))(*v144)[6])(v144, &v140);
    } while (v29 != v30);
    v27 = v144;
    if (v144 == &v141) {
    LABEL_33:
      v32 = 4;
    }
    else {
      if (v144 == nullptr) {
        goto LABEL_35;
      }
      v32 = 5;
    }
    v27 = (__int64 (***)())(*v27)[v32]();
  LABEL_35:
    if ((v139 & 1) == 0) {
      if ((unsigned __int64)v24 < v25) {
        *v24++ = v26;
      }
      else {
        v33 = (char*)((char*)v24 - (char*)v135);
        v34 = v24 - v135;
        v35 = v34 + 1;
        if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
        LABEL_212:
          GameRoutine_8875e0(v27);
        }
        if ((__int64)(v25 - (_QWORD)v135) >> 2 > v35) {
          v35 = (__int64)(v25 - (_QWORD)v135) >> 2;
        }
        if (v25 - (unsigned __int64)v135 >= 0x7FFFFFFFFFFFFFF8LL) {
          v36 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v36 = v35;
        }
        if (v36 != 0) {
          if (v36 >> 61 != 0) {
          LABEL_213:
            GameRoutine_60a210(v27);
          }
          v37 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v36, 16, 0);
        }
        else {
          v37 = 0;
        }
        v25 = v37 + 8 * v36;
        v38 = (__int64)&v33[v37 + -8 * v34];
        *(_QWORD*)&v33[v37] = v26;
        v24 = (__int64*)&v33[v37 + 8];
        memcpy(v38, v135, v33);
        if (v135 != nullptr) {
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v39);
        }
        v135 = (__int64*)v38;
      }
    }
    goto LABEL_25;
  }
  v142 = nullptr;
  v143 = 0;
  v141 = nullptr;
  v3 = *(_QWORD**)(*(_QWORD*)GameData_212d740[0] + 8LL);
  v5 = v3[3];
  v4 = v3[4];
  v6 = (int*)(v3 + 6);
  v9 = *v3;
  v7 = (int*)v3 + 13;
  v8 = v9;
  if (v4 == v5) {
    v7 = v6;
    v10 = v8;
  }
  else {
    v10 = v5;
  }
  v11 = (unsigned __int8*)(v10 + 24LL * *v7);
  v12 = *v11;
  if ((v12 & 1) != 0) {
    v13 = *((unsigned __int8**)v11 + 2);
  }
  else {
    v13 = v11 + 1;
  }
  if ((v12 & 1) != 0) {
    v14 = *((_QWORD*)v11 + 1);
  }
  else {
    v14 = v12 >> 1;
  }
  RuntimeBuffer_8924a0(&v141, v13, v14, 47);
  if (((_BYTE)v141[6] & 1) != 0) {
    v15 = v141[8];
  }
  else {
    v15 = (__int64 (*)())((char*)v141 + 49);
  }
  v16 = game_HashString(v15);
  if (v16 == 0) {
    goto LABEL_197;
  }
  v17 = *(_QWORD*)(*GameData_212ca58[0] + 96);
  if (v17 == 0 || *(_QWORD*)(*GameData_212ca58[0] + 112) == 0) {
    goto LABEL_197;
  }
  v19 = v17 - 1;
  if ((v17 & (v17 - 1)) != 0) {
    v20 = v16;
    if (v16 >= v17) {
      v20 = v16 % v17;
    }
  }
  else {
    v20 = v19 & v16;
  }
  v105 = *(_QWORD**)(*(_QWORD*)(*GameData_212ca58[0] + 88) + 8 * v20);
  if (v105 == nullptr) {
    goto LABEL_197;
  }
  v106 = (_QWORD*)*v105;
  if (v106 == nullptr) {
    goto LABEL_197;
  }
  if ((v17 & v19) == 0) {
    while (1) {
      v108 = v106[1];
      if (v108 == v16) {
        if (v106[2] == v16) {
          goto LABEL_152;
        }
      }
      else if ((v108 & v19) != v20) {
        goto LABEL_197;
      }
      v106 = (_QWORD*)*v106;
      if (v106 == nullptr) {
        goto LABEL_197;
      }
    }
  }
  while (1) {
    v107 = v106[1];
    if (v107 == v16) {
      break;
    }
    if (v107 >= v17) {
      v107 %= v17;
    }
    if (v107 != v20) {
      goto LABEL_197;
    }
  LABEL_141:
    v106 = (_QWORD*)*v106;
    if (v106 == nullptr) {
      goto LABEL_197;
    }
  }
  if (v106[2] != v16) {
    goto LABEL_141;
  }
LABEL_152:
  v109 = v106[3];
  if (v109 == 0) {
    goto LABEL_197;
  }
  v110 =
      ((_BYTE)v141[9] & 1) != 0 ? v141[11] : (__int64 (*)())((char*)v141 + 73);
  v111 = game_HashString(v110);
  if (v111 == 0) {
    goto LABEL_197;
  }
  v112 = *(_QWORD*)(*GameData_212ca10[0] + 96);
  if (v112 == 0 || *(_QWORD*)(*GameData_212ca10[0] + 112) == 0) {
    goto LABEL_197;
  }
  v114 = v112 - 1;
  if ((v112 & (v112 - 1)) != 0) {
    v115 = v111;
    if (v111 >= v112) {
      v115 = v111 % v112;
    }
  }
  else {
    v115 = v114 & v111;
  }
  v116 = *(_QWORD**)(*(_QWORD*)(*GameData_212ca10[0] + 88) + 8 * v115);
  if (v116 == nullptr) {
    goto LABEL_197;
  }
  v117 = (_QWORD*)*v116;
  if (v117 == nullptr) {
    goto LABEL_197;
  }
  if ((v112 & v114) == 0) {
    while (1) {
      v119 = v117[1];
      if (v119 == v111) {
        if (v117[2] == v111) {
          goto LABEL_181;
        }
      }
      else if ((v119 & v114) != v115) {
        goto LABEL_197;
      }
      v117 = (_QWORD*)*v117;
      if (v117 == nullptr) {
        goto LABEL_197;
      }
    }
  }
  while (2) {
    v118 = v117[1];
    if (v118 != v111) {
      if (v118 >= v112) {
        v118 %= v112;
      }
      if (v118 != v115) {
        goto LABEL_197;
      }
    }
    else if (v117[2] == v111) {
    LABEL_181:
      v120 = v117[3];
      if (v120 == 0) {
        goto LABEL_197;
      }
      v121 = game_gmap_SpotMgr_FindSpot(v120);
      if (*GameData_212c790 == 0) {
        goto LABEL_197;
      }
      v122 = *(_QWORD*)(*GameData_212c790 + 8);
      v123 = v121;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_193;
      }
      v124 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v124 == 0) {
        goto LABEL_193;
      }
      if (*(_BYTE*)(v124 + 152) == 4 &&
          *(_QWORD*)(v124 + 168) == *(_QWORD*)(v121 + 120)) {
      LABEL_189:
        if (*(_BYTE*)(v109 + 32) != 1 || *(_BYTE*)(*v2 + 52) != 0) {
          goto LABEL_194;
        }
        goto LABEL_197;
      }
      if (*(_BYTE*)(v124 + 152) == 6) {
        if (*(_QWORD*)(v124 + 168) == *(_QWORD*)(v121 + 120)) {
          goto LABEL_189;
        }
      LABEL_194:
        if (game_gmap_132a430(v121)) {
          v125 = TroopMgr_1351170_alt1(v122 + 8);
          if (v125 != 0) {
            game_gmap_133d680(v125, v123, v109);
          }
        }
      }
      else {
      LABEL_193:
        if (v121 != 0) {
          goto LABEL_194;
        }
      }
    LABEL_197:
      v126 = v141;
      if (v141 != nullptr) {
        v127 = v142;
        if (v141 == v142) {
          goto LABEL_208;
        }
        v128 = v142;
        v129 = fw_memory_g_heap_manager_ptr;
        do {
          v130 = *((_BYTE*)v128 - 24);
          v128 -= 3;
          if ((v130 & 1) != 0 && *(v127 - 1) != nullptr) {
            if (*(_QWORD*)(*(_QWORD*)v129 + 200LL) != 0) {
              v131 = 128;
            }
            else {
              v131 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v129 + v131);
          }
          v127 = v128;
        } while (v128 != v126);
        v142 = v126;
        if (v141 != nullptr) {
        LABEL_208:
          v132 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v132 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v132);
        }
      }
      return false;
    }
    v117 = (_QWORD*)*v117;
    if (v117 == nullptr) {
      goto LABEL_197;
    }
    continue;
  }
}

__int64 TroopMgr_134fb00()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 (*v6)();
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  long double v34;
  long double v35;
  __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  char* v42;
  unsigned __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  char* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64* v67;
  char* v68;
  char* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 (*v77)(_QWORD);
  __int64 v78;
  _QWORD* v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  _QWORD* v83;
  _QWORD* v84;
  char* v85;
  __int64 v86;
  unsigned __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  char* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 result;
  __int64 v107;
  __int64 v108;
  _QWORD* v109;
  _QWORD* v110;
  __int64 v111;
  _QWORD* v112;
  _QWORD* v113;
  __int64 v114;
  __int64 (**v115)();
  __int64 (*v116)();
  _QWORD* v117;
  __int64 (**v118)();

  v116 = (__int64 (*)())&GameData_1abbb2b;
  v0 = game_HashString(&GameData_1abbb2b);
  v115 = (__int64 (**)())v0;
  if (game_GameModeData_instance_ != 0) {
    v0 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v115);
    if (v0 != 0 && *(_DWORD*)(v0 + 32) != 0) {
      v0 = TroopMgr_134e920_alt1();
    }
  }
  v1 = GameData_212c790;
  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    v6 = (__int64 (*)())TroopMgr_134c680(v0);
    TroopMgr_134b820_alt1((void*)(&v115), (__int64)v6);
    ProcTroopAction_14b4920(&v115);
    v7 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v115 != nullptr) {
      v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v116 = (__int64 (*)())v115;
      v9 = 128;
      if (*(_QWORD*)(v8 + 200) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(v8 + v9);
    }
    GameRoutine_134b980((void*)((__int64 (**)())&v115), v6);
    ProcTroopAction_14b4920(&v115);
    if (v115 != nullptr) {
      v10 = *v7;
      v116 = (__int64 (*)())v115;
      v11 = 128;
      if (*(_QWORD*)(v10 + 200) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v10 + v11);
    }
    TroopMgr_134b820_alt1((void*)(&v115), (__int64)v6);
    v12 = (__int64*)v115;
    v13 = (__int64*)v116;
    if (v115 == (__int64 (**)())v116) {
      if (v115 == nullptr) {
        goto LABEL_66;
      }
    }
    else {
      do {
        if ((*(_DWORD*)(*v12 + 84) & 0x80000000) == 0) {
          game_gmap_1341ed0(*v12);
        }
        ++v12;
      } while (v12 != v13);
      v12 = (__int64*)v115;
      if (v115 == nullptr) {
        goto LABEL_66;
      }
    }
    v14 = *v7;
    v116 = (__int64 (*)())v12;
  LABEL_63:
    v33 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(v14 + v33);
    goto LABEL_66;
  }
  v116 = (__int64 (*)())&GameData_1ade186;
  v115 = (__int64 (**)())game_HashString(&GameData_1ade186);
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_66;
  }
  v2 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   &v115);
  if (v2 == 0 || *(int*)(v2 + 32) < 1) {
    goto LABEL_66;
  }
  v113 = nullptr;
  v114 = 0;
  v111 = 0;
  v112 = nullptr;
  v109 = nullptr;
  v110 = nullptr;
  v115 = GameData_202ddc8;
  v116 = (__int64 (*)())&v112;
  v118 = (__int64 (**)())&v115;
  v117 = &v109;
  TroopMgr_13460a0_alt1(&v115);
  v4 = (__int64)v118;
  if (v118 == (__int64 (**)())&v115) {
    v5 = 32;
    goto LABEL_30;
  }
  if (v118 != nullptr) {
    v5 = 40;
  LABEL_30:
    v4 = (*(__int64 (**)(__int64))((char*)*v118 + v5))((__int64)v118);
  }
  v15 = v112;
  v16 = v113;
  if (v112 != v113) {
    v17 = *v1;
    if (*v1 != 0) {
      v18 = fw_memory_g_heap_manager_ptr;
    LABEL_35:
      v19 = *(_QWORD*)(v17 + 8);
      v21 = *(_QWORD*)(v19 + 8);
      v20 = *(_QWORD*)(v19 + 16);
      if (v20 == v21) {
        goto LABEL_50;
      }
      v22 = (v20 - v21) >> 3;
      v23 = 0;
      while (*(_QWORD*)(v21 + 8 * v23) != *v15) {
        if (v22 == ++v23) {
          goto LABEL_50;
        }
      }
      if (v23 < 0) {
        goto LABEL_50;
      }
      v24 = (unsigned int)v23;
      if ((unsigned int)v23 >= v22) {
        goto LABEL_185;
      }
      if (*(_QWORD*)(v21 + 8LL * (unsigned int)v23) != 0) {
        GameRoutine_133cc40_alt2(*(_QWORD*)(v21 + 8LL * (unsigned int)v23));
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v25);
        v21 = *(_QWORD*)(v19 + 8);
        v20 = *(_QWORD*)(v19 + 16);
      }
      v26 = v21 + 8 * v24;
      v3 = v26 + 8;
      v27 = v20 - (v26 + 8);
      if (v20 != v26 + 8) {
        v4 = memmove(v26, v3, v20 - (v26 + 8));
      }
      *(_QWORD*)(v19 + 16) = v26 + v27;
    LABEL_50:
      while (++v15 != v16) {
        v17 = *v1;
        if (*v1 != 0) {
          goto LABEL_35;
        }
      }
    }
  }
  CorpsManager_972290(0);
  CorpsManager_972290(1);
  CorpsManager_972290(2);
  CorpsManager_972290(3);
  CorpsManager_972290(4);
  CorpsManager_972290(5);
  CorpsManager_972290(6);
  CorpsManager_972290(7);
  CorpsManager_972290(8);
  v28 = v109;
  v29 = v110;
  if (v109 != v110) {
    v30 = (__int64*)GameData_212d750;
    v31 = *(_QWORD*)GameData_212d750;
    do {
      if (v31 != 0) {
        GameRoutine_995200(*v28 + 112LL);
        v31 = *v30;
      }
      ++v28;
    } while (v28 != v29);
    v28 = v109;
  }
  if (v28 != nullptr) {
    v110 = v28;
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
  }
  if (v112 != nullptr) {
    v113 = v112;
    v14 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    goto LABEL_63;
  }
LABEL_66:
  TroopMgr_134d2e0(*(_QWORD*)(*v1 + 8));
  v36 = *(_QWORD*)(*v1 + 8);
  v37 = *(__int64**)(v36 + 8);
  v38 = *(__int64**)(v36 + 16);
  if (v37 != v38) {
    do {
      v39 = *v37++;
      GameRoutine_1342210(v39, v34, v35);
    } while (v37 != v38);
    v40 = *(_QWORD*)(*GameData_212c790 + 8);
    v37 = *(__int64**)(v40 + 8);
    v38 = *(__int64**)(v40 + 16);
  }
  if (v37 != v38) {
    v41 = nullptr;
    v42 = nullptr;
    v43 = 0;
    do {
      v44 = *v37;
      v4 = Troop_1342e60(*v37);
      if ((v4 & 1) != 0) {
        if ((unsigned __int64)v42 < v43) {
          *(_QWORD*)v42 = v44;
          v42 += 8;
        }
        else {
          v45 = (char*)(v42 - v41);
          v46 = (v42 - v41) >> 3;
          v47 = v46 + 1;
          if ((unsigned __int64)(v46 + 1) >> 61 != 0) {
          LABEL_183:
            GameRoutine_888610_alt1(v4);
          }
          if ((__int64)(v43 - (_QWORD)v41) >> 2 > v47) {
            v47 = (__int64)(v43 - (_QWORD)v41) >> 2;
          }
          if (v43 - (unsigned __int64)v41 >= 0x7FFFFFFFFFFFFFF8LL) {
            v48 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v48 = v47;
          }
          if (v48 != 0) {
            if (v48 >> 61 != 0) {
            LABEL_184:
              GameRoutine_60a210(v4);
            }
            v49 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v48, 16, 0);
          }
          else {
            v49 = 0;
          }
          v43 = v49 + 8 * v48;
          v50 = (char*)(v42 - v41);
          v51 = (__int64)&v45[v49 + -8 * v46];
          *(_QWORD*)&v45[v49] = v44;
          v42 = &v45[v49 + 8];
          v4 = memcpy(v51, v41, v50);
          if (v41 != nullptr) {
            v52 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v52 = 56;
            }
            v4 = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
          }
          v41 = (char*)v51;
        }
      }
      ++v37;
    } while (v37 != v38);
    v53 = GameData_212c790;
    if (v41 != v42) {
      v54 = *GameData_212c790;
      if (*GameData_212c790 != 0) {
        v55 = v41;
      LABEL_94:
        v56 = *(_QWORD*)(v54 + 8);
        v58 = *(_QWORD*)(v56 + 8);
        v57 = *(_QWORD*)(v56 + 16);
        if (v57 == v58) {
          goto LABEL_109;
        }
        v59 = (v57 - v58) >> 3;
        v60 = 0;
        while (*(_QWORD*)(v58 + 8 * v60) != *(_QWORD*)v55) {
          if (v59 == ++v60) {
            goto LABEL_109;
          }
        }
        if (v60 < 0) {
          goto LABEL_109;
        }
        v61 = (unsigned int)v60;
        if ((unsigned int)v60 >= v59) {
          goto LABEL_185;
        }
        if (*(_QWORD*)(v58 + 8LL * (unsigned int)v60) != 0) {
          GameRoutine_133cc40_alt2(*(_QWORD*)(v58 + 8LL * (unsigned int)v60));
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
            v62 = 128;
          }
          else {
            v62 = 56;
          }
          v4 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v62);
          v58 = *(_QWORD*)(v56 + 8);
          v57 = *(_QWORD*)(v56 + 16);
        }
        v63 = v58 + 8 * v61;
        v3 = v63 + 8;
        v64 = v57 - (v63 + 8);
        if (v57 != v63 + 8) {
          v4 = memmove(v63, v3, v57 - (v63 + 8));
        }
        *(_QWORD*)(v56 + 16) = v63 + v64;
      LABEL_109:
        while (1) {
          v55 += 8;
          if (v55 == v42) {
            break;
          }
          v54 = *v53;
          if (*v53 != 0) {
            goto LABEL_94;
          }
        }
      }
    }
    if (v41 != nullptr) {
      v65 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v65 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v65);
    }
  }
  v4 = GameRoutine_1349320(nullptr);
  v66 = *(__int64**)(*GameData_212cb08[0] + 64);
  v67 = *(__int64**)(*GameData_212cb08[0] + 72);
  if (v66 == v67) {
    v68 = nullptr;
    goto LABEL_173;
  }
  v68 = nullptr;
  v69 = nullptr;
  v70 = 0;
  do {
    v71 = *v66;
    v72 = *(__int64**)(*v66 + 24);
    v73 = *v72;
    v74 = v72[1];
    if (v74 != *v72) {
      while (1) {
        if (*(_QWORD*)v73 != 0) {
          v75 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ != 0) {
            v76 = game_GameVariableTable_Find(
                *(_QWORD*)(game_GameModeData_instance_ + 48), v73);
            if (v76 != 0) {
              v77 = *(__int64 (**)(_QWORD))(v76 + 72);
              v78 = *(_QWORD*)(v76 + 80);
              v79 = (_QWORD*)(v76 + (v78 >> 1));
              if ((v78 & 1) != 0) {
                v77 = *(__int64 (**)(_QWORD))((char*)v77 + *v79);
              }
              v4 = v77(v79);
            }
            else {
              v4 = 1;
            }
          }
          if (*(_BYTE*)(v73 + 16) != ((v75 == 0) | v4 & 1)) {
            break;
          }
        }
        v73 += 24;
        if (v73 == v74) {
          goto LABEL_118;
        }
      }
      v4 = game_gmap_SpotMgr_FindSpot(*(_QWORD*)(v71 + 48));
      if (v4 != 0) {
        v80 = *(_QWORD*)(v71 + 64);
        if (v80 != 0) {
          v81 = *(_QWORD*)(*GameData_212c790 + 8);
          v82 = *(_QWORD**)(v81 + 8);
          v83 = *(_QWORD**)(v81 + 16);
          while (1) {
            if (v82 == v83) {
              goto LABEL_118;
            }
            v84 = (_QWORD*)*v82;
            if (*(_QWORD*)*v82 == v4 && v84[69] == v80) {
              break;
            }
            ++v82;
          }
          if ((unsigned __int64)v69 < v70) {
            *(_QWORD*)v69 = v84;
            v69 += 8;
          }
          else {
            v85 = (char*)(v69 - v68);
            v86 = (v69 - v68) >> 3;
            v87 = v86 + 1;
            if ((unsigned __int64)(v86 + 1) >> 61 != 0) {
              goto LABEL_183;
            }
            if ((__int64)(v70 - (_QWORD)v68) >> 2 > v87) {
              v87 = (__int64)(v70 - (_QWORD)v68) >> 2;
            }
            if (v70 - (unsigned __int64)v68 >= 0x7FFFFFFFFFFFFFF8LL) {
              v88 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v88 = v87;
            }
            if (v88 != 0) {
              if (v88 >> 61 != 0) {
                goto LABEL_184;
              }
              v89 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v88, 16, 0);
            }
            else {
              v89 = 0;
            }
            v70 = v89 + 8 * v88;
            v90 = (char*)(v69 - v68);
            v91 = (__int64)&v85[v89 + -8 * v86];
            *(_QWORD*)&v85[v89] = v84;
            v69 = &v85[v89 + 8];
            v4 = memcpy(v91, v68, v90);
            if (v68 != nullptr) {
              v92 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v92 = 56;
              }
              v4 = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v92);
            }
            v68 = (char*)v91;
          }
        }
      }
    }
  LABEL_118:
    ++v66;
  } while (v66 != v67);
  if (v68 != v69) {
    v93 = GameData_212c790;
    v94 = *GameData_212c790;
    if (*GameData_212c790 != 0) {
      v95 = v68;
      v96 = fw_memory_g_heap_manager_ptr;
    LABEL_157:
      v97 = *(_QWORD*)(v94 + 8);
      v99 = *(_QWORD*)(v97 + 8);
      v98 = *(_QWORD*)(v97 + 16);
      if (v98 == v99) {
        goto LABEL_172;
      }
      v100 = (v98 - v99) >> 3;
      v101 = 0;
      while (*(_QWORD*)(v99 + 8 * v101) != *(_QWORD*)v95) {
        if (v100 == ++v101) {
          goto LABEL_172;
        }
      }
      if (v101 < 0) {
        goto LABEL_172;
      }
      v102 = (unsigned int)v101;
      if ((unsigned int)v101 < v100) {
        if (*(_QWORD*)(v99 + 8LL * (unsigned int)v101) != 0) {
          GameRoutine_133cc40_alt2(*(_QWORD*)(v99 + 8LL * (unsigned int)v101));
          if (*(_QWORD*)(*(_QWORD*)v96 + 200LL) != 0) {
            v103 = 128;
          }
          else {
            v103 = 56;
          }
          v4 = nn_mem_StandardAllocator_Free(*(_QWORD*)v96 + v103);
          v99 = *(_QWORD*)(v97 + 8);
          v98 = *(_QWORD*)(v97 + 16);
        }
        v104 = v99 + 8 * v102;
        v3 = v104 + 8;
        v105 = v98 - (v104 + 8);
        if (v98 != v104 + 8) {
          v4 = memmove(v104, v3, v98 - (v104 + 8));
        }
        *(_QWORD*)(v97 + 16) = v104 + v105;
      LABEL_172:
        while (1) {
          v95 += 8;
          if (v95 == v69) {
            goto LABEL_173;
          }
          v94 = *v93;
          if (*v93 != 0) {
            goto LABEL_157;
          }
        }
      }
    LABEL_185:
      GameRoutine_13549e0_alt3(v4, v3);
    }
  }
LABEL_173:
  v115 = GameData_202cfb8;
  v118 = (__int64 (**)())&v115;
  GameRoutine_ae4560(&v115);
  result = (__int64)v118;
  if (v118 == (__int64 (**)())&v115) {
    v107 = 32;
  }
  else {
    if (v118 == nullptr) {
      goto LABEL_178;
    }
    v107 = 40;
  }
  result = (*(__int64 (**)(__int64))((char*)*v118 + v107))((__int64)v118);
LABEL_178:
  if (v68 != nullptr) {
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v108 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v108);
  }
  return result;
}

__int64 game_gmap_TroopMgr_Impl_OnDeserialize_closure_Invoke(__int64 a1,
                                                             __int64 a2)
{
  __int64 v2;
  int v4;

  v2 = *(_QWORD*)(a1 + 8) + 32LL;
  v4 = *(_DWORD*)(*(_QWORD*)a2 + 84LL);
  return GameRoutine_6e5900(v2, &v4);
}

_QWORD* TroopMgr_13542e0(float* a1, __int64* a2, _QWORD** a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD** v11;
  _QWORD* result;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  _QWORD* v16;
  float v17;
  float v18;
  float v19;
  _BOOL8 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 primeEm;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  _QWORD* v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;

  v4 = *a2;
  v52 = *a2;
  v7 = std___1___hash_memory(&v52, 8);
  v8 = *((_QWORD*)a1 + 1);
  v9 = v7;
  if (v8 != 0) {
    v10 = v8 - 1;
    if ((v8 & (v8 - 1)) != 0) {
      v3 = v7;
      if (v7 >= v8) {
        v3 = v7 % v8;
      }
    }
    else {
      v3 = v10 & v7;
    }
    v11 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v3);
    if (v11 != nullptr) {
      result = *v11;
      if (*v11 != nullptr) {
        if ((v8 & v10) == 0) {
          while (1) {
            v14 = result[1];
            if (v14 == v9) {
              if (result[2] == v4) {
                return result;
              }
            }
            else if ((v14 & v10) != v3) {
              goto LABEL_22;
            }
            result = (_QWORD*)*result;
            if (result == nullptr) {
              goto LABEL_22;
            }
          }
        }
        do {
          v13 = result[1];
          if (v13 == v9) {
            if (result[2] == v4) {
              return result;
            }
          }
          else {
            if (v13 >= v8) {
              v13 %= v8;
            }
            if (v13 != v3) {
              break;
            }
          }
          result = (_QWORD*)*result;
        } while (result != nullptr);
      }
    }
  }
LABEL_22:
  v15 = (__int64*)fw_memory_g_heap_manager_ptr;
  result = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v16 = *a3;
  *result = 0;
  result[1] = v9;
  v17 = a1[8];
  result[2] = *v16;
  result[3] = 0;
  v18 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v8 == 0 || (float)(v17 * (float)v8) < v18) {
    v19 = v18 / v17;
    v20 = true;
    if (v8 >= 3) {
      v20 = (v8 & (v8 - 1)) != 0;
    }
    v21 = v20 | (2 * v8);
    v22 = vcvtps_u64_f32(v19);
    if (v21 <= v22) {
      primeEm = v22;
    }
    else {
      primeEm = v21;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      v24 = result;
      primeEm = std___1___next_prime(primeEm);
      result = v24;
      v8 = *((_QWORD*)a1 + 1);
    }
    if (primeEm <= v8) {
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      v31 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v8 < 3 || (v8 & (v8 - 1)) != 0) {
        v44 = result;
        v31 = std___1___next_prime(v31);
        result = v44;
      }
      else {
        v32 = 1LL << -(char)__clz(v31 - 1);
        if (v31 >= 2) {
          v31 = v32;
        }
      }
      if (primeEm <= v31) {
        primeEm = v31;
      }
      if (primeEm >= v8) {
        goto LABEL_83;
      }
      if (primeEm == 0) {
        v45 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v45 != 0) {
          v46 = result;
          v47 = 128;
          if (*(_QWORD*)(*v15 + 200) == 0) {
            v47 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v15 + v47);
          result = v46;
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_83;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210_alt1();
    }
    v25 = result;
    v26 = fw_memory_HeapManager_Allocate_alt1(*v15, 8 * primeEm, 16, 0);
    v27 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v26;
    if (v27 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v15 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v15 + v28);
    }
    v29 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v30 = 0;
      result = v25;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v30 + 48) = 0;
        v33 = *(_QWORD*)a1 + 8 * v30;
        v30 += 8;
        *(_QWORD*)(v33 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v30);
    }
    else {
      v30 = 0;
      result = v25;
    }
    if ((primeEm & 7) != 0) {
      v34 = 8 * v30;
      do {
        --v29;
        *(_QWORD*)(*(_QWORD*)a1 + v34) = 0;
        v34 += 8;
      } while (v29 != 0);
    }
    v36 = (__int64*)(a1 + 4);
    v35 = *((_QWORD**)a1 + 2);
    if (v35 != nullptr) {
      v37 = v35[1];
      v38 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v37 >= primeEm) {
          v37 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v37) = v36;
        v39 = (_QWORD*)*v35;
        if (*v35 == 0) {
          goto LABEL_83;
        }
        while (1) {
          v40 = v39[1];
          if (v40 >= primeEm) {
            v40 %= primeEm;
          }
          if (v40 != v37) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v40) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v35;
              goto LABEL_60;
            }
            *v35 = *v39;
            *v39 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v40);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v40) = v39;
            v39 = v35;
          }
          v40 = v37;
        LABEL_60:
          v35 = v39;
          v39 = (_QWORD*)*v39;
          v37 = v40;
          if (v39 == nullptr) {
            goto LABEL_83;
          }
        }
      }
      v41 = v37 & v38;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v41) = v36;
      while (1) {
        v42 = (_QWORD*)*v35;
        if (*v35 == 0) {
          break;
        }
        v43 = v42[1] & v38;
        if (v43 == v41) {
          v35 = (_QWORD*)*v35;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) != 0) {
          *v35 = *v42;
          *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v35;
          v35 = v42;
          v41 = v43;
        }
      }
    }
  LABEL_83:
    v8 = *((_QWORD*)a1 + 1);
    if ((v8 & (v8 - 1)) != 0) {
      if (v9 >= v8) {
        v3 = v9 % v8;
      }
      else {
        v3 = v9;
      }
    }
    else {
      v3 = (v8 - 1) & v9;
    }
  }
  v48 = *(_QWORD*)a1;
  v49 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v3);
  if (v49 != nullptr) {
    *result = *v49;
    *v49 = result;
  }
  else {
    v50 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = result;
    *result = v50;
    *(_QWORD*)(v48 + 8 * v3) = a1 + 4;
    if (*result != 0) {
      v51 = *(_QWORD*)(*result + 8LL);
      if ((v8 & (v8 - 1)) != 0) {
        if (v51 >= v8) {
          v51 %= v8;
        }
      }
      else {
        v51 &= v8 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v51) = result;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return result;
}

__int64 game_gmap_TroopMgr_Impl_EndMovePlayer_closure_Invoke(__int64 a1,
                                                             __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  bool v6;

  v2 = *a2;
  result = TroopMgr_1341640(*a2);
  if (*(_QWORD*)(v2 + 32) == *(_QWORD*)(v2 + 24) ||
      (v4 = *(_QWORD*)(v2 + 96), v5 = *(_QWORD*)(v2 + 552), (v4 | v5) != 0) &&
          (v4 != 0 ||
           (v5 != 0 ? (v6 = *(_QWORD*)(v2 + 104) == 0) : (v6 = false),
            !v6 ||
                *(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) *
                        *(__int16*)(v2 + 644) !=
                    0 ||
                *(_QWORD*)(v5 + 352) != 0)) &&
          (*(_WORD*)(v2 + 544) & 3) == 2) {
    if (*(_BYTE*)(*(_QWORD*)v2 + 113LL) == 1 && *(_BYTE*)(v2 + 512) == 2) {
      *(_BYTE*)(v2 + 512) = 0;
      if (GameData_21f1618 != 0) {
        return GameRoutine_995200(v2 + 112);
      }
    }
  }
  return result;
}

__int64 TroopMgr_1354a00(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (a2 != 0) {
    v2 = *(__int64**)(result + 8);
    v3 = *(__int64**)(result + 16);
    v4 = result;
    if (v2 != v3) {
      v6 = nullptr;
      v7 = nullptr;
      v8 = 0;
      do {
        v9 = *v2;
        if (*(_QWORD*)(*v2 + 88) == a2) {
          if ((unsigned __int64)v7 < v8) {
            *(_QWORD*)v7 = v9;
            v7 += 8;
          }
          else {
            v10 = (char*)(v7 - v6);
            v11 = (v7 - v6) >> 3;
            v12 = v11 + 1;
            if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
              GameRoutine_888610_alt1(result);
            }
            if ((__int64)(v8 - (_QWORD)v6) >> 2 > v12) {
              v12 = (__int64)(v8 - (_QWORD)v6) >> 2;
            }
            if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF8LL) {
              v13 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v13 = v12;
            }
            if (v13 != 0) {
              if (v13 >> 61 != 0) {
                GameRoutine_60a210(result);
              }
              v14 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
            }
            else {
              v14 = 0;
            }
            v8 = v14 + 8 * v13;
            v15 = (char*)(v7 - v6);
            v16 = (__int64)&v10[v14 + -8 * v11];
            *(_QWORD*)&v10[v14] = v9;
            v7 = &v10[v14 + 8];
            result = memcpy(v16, v6, v15);
            if (v6 != nullptr) {
              v17 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v17 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
            }
            v6 = (char*)v16;
          }
        }
        ++v2;
      } while (v2 != v3);
      if (v6 != v7) {
        v18 = *(_QWORD*)(v4 + 16);
        if (v18 != *(_QWORD*)(v4 + 8)) {
          v19 = v6;
          do {
            v20 = *(_QWORD*)(v4 + 8);
            if (v18 != v20) {
              v21 = (v18 - v20) >> 3;
              v22 = 0;
              while (*(_QWORD*)(v20 + 8 * v22) != *(_QWORD*)v19) {
                if (v21 == ++v22) {
                  goto LABEL_27;
                }
              }
              if ((v22 & 0x8000000000000000LL) == 0) {
                v23 = (unsigned int)v22;
                if ((unsigned int)v22 >= v21) {
                  GameRoutine_13549e0_alt1(result);
                }
                if (*(_QWORD*)(v20 + 8LL * (unsigned int)v22) != 0) {
                  GameRoutine_133cc40(
                      *(_QWORD*)(v20 + 8LL * (unsigned int)v22));
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v24 = 128;
                  }
                  else {
                    v24 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
                  v20 = *(_QWORD*)(v4 + 8);
                  v18 = *(_QWORD*)(v4 + 16);
                }
                v25 = v20 + 8 * v23;
                v26 = v18 - (v25 + 8);
                if (v18 != v25 + 8) {
                  result = memmove(v25, v25 + 8, v18 - (v25 + 8));
                }
                v18 = v25 + v26;
                *(_QWORD*)(v4 + 16) = v25 + v26;
              }
            }
          LABEL_27:
            v19 += 8;
          } while (v19 != v7);
        }
      }
      if (v6 != nullptr) {
        v27 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v27 = 56;
        }
        return nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
      }
    }
  }
  return result;
}

char* game_gmap_TroopMgr_Impl_UpdateCorps_closure_Invoke_1354fc0(__int64 a1,
                                                                 int* a2)
{
  int v2;
  _QWORD* v3;
  char* result;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 8);
  v8 = v2;
  if (v2 < 0) {
    return TroopMgr_1353fb0(v3 + 4, (char*)v3[4], (char*)&v8);
  }
  v5 = (__int64*)v3[1];
  v6 = (__int64*)v3[2];
  result = (char*)(v3 + 1);
  if (v5 == v6) {
  LABEL_5:
    *(_DWORD*)(TroopMgr_1351170((__int64*)result) + 84) = v2;
    return TroopMgr_1353fb0(v3 + 4, (char*)v3[4], (char*)&v8);
  }
  while (1) {
    v7 = *v5++;
    if (*(_DWORD*)(v7 + 84) == v2) {
      return result;
    }
    if (v5 == v6) {
      goto LABEL_5;
    }
  }
}

__int64 TroopMgr_1355080(__int64 result, __int64** a2, __n128 a3,
                         long double a4)
{
  unsigned __int64 v4;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  unsigned __int64* v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __n128 v30;
  long double v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD** v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  _BOOL8 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 primeEm;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  unsigned __int64 v51;
  __int64* v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned int v57;
  int v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  bool v64;
  _QWORD* v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  _QWORD* v71;
  __int64 v72;
  int v73;
  bool v74;
  __int64 v75;
  int v76;
  bool v77;
  __int64 v78;
  int v79;
  bool v80;
  __int64 v81;
  int v82;
  bool v83;
  unsigned __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  _QWORD* v87;
  unsigned __int64 v88;
  float v89;
  _QWORD* v90;

  v6 = result;
  if ((*(_BYTE*)(*(_QWORD*)result + 60LL) & 1) == 0) {
    v52 = *a2;
    v53 = (char*)a2[1] - (char*)*a2;
    if (v53 == 0) {
      return result;
    }
    v54 = v53 >> 3;
    v55 = (v53 >> 3) & 3;
    if (v54 >= 4) {
      v70 = v54 & 0xFFFFFFFFFFFFFFFCLL;
      v71 = v52 + 2;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      do {
        v72 = *(_QWORD*)(*(v71 - 2) + 96LL);
        if (v72 != 0) {
          v73 = *(unsigned __int8*)(v72 + 132);
          v74 = v58 < v73;
          if (v58 <= v73) {
            v58 = v73;
          }
          if (v74) {
            v57 = v56;
          }
        }
        v75 = *(_QWORD*)(*(v71 - 1) + 96LL);
        if (v75 != 0) {
          v76 = *(unsigned __int8*)(v75 + 132);
          v77 = v58 < v76;
          if (v58 <= v76) {
            v58 = v76;
          }
          if (v77) {
            v57 = v56 + 1;
          }
        }
        v78 = *(_QWORD*)(*v71 + 96LL);
        if (v78 != 0) {
          v79 = *(unsigned __int8*)(v78 + 132);
          v80 = v58 < v79;
          if (v58 <= v79) {
            v58 = v79;
          }
          if (v80) {
            v57 = v56 + 2;
          }
        }
        v81 = *(_QWORD*)(v71[1] + 96LL);
        if (v81 != 0) {
          v82 = *(unsigned __int8*)(v81 + 132);
          v83 = v58 < v82;
          if (v58 <= v82) {
            v58 = v82;
          }
          if (v83) {
            v57 = v56 + 3;
          }
        }
        v71 += 4;
        v56 += 4;
      } while (v70 != v56);
    }
    else {
      v56 = 0;
      v57 = 0;
      v58 = 0;
    }
    for (; v55 != 0; --v55) {
      v62 = *(_QWORD*)(v52[v56] + 96);
      if (v62 != 0) {
        v63 = *(unsigned __int8*)(v62 + 132);
        v64 = v58 < v63;
        if (v58 <= v63) {
          v58 = v63;
        }
        if (v64) {
          v57 = v56;
        }
      }
      ++v56;
    }
    v59 = 0;
    v60 = v57;
    while (1) {
      if (v60 == v59) {
        v61 = v52[v60];
      }
      else {
        v61 = v52[v59];
        if ((*(_WORD*)(v61 + 544) & 0x1000) == 0 &&
            (*(_BYTE*)(*v52 + 546) & 0x20) == 0) {
          result = game_gmap_13402f0(v61, 4, 0, a3, a4);
          if ((result & 1) != 0) {
            goto LABEL_136;
          }
          goto LABEL_128;
        }
      }
      result = game_gmap_13402f0(v61, 4, 1, a3, a4);
      if ((result & 1) != 0) {
      LABEL_136:
        **(_BYTE**)(v6 + 8) = 1;
      }
    LABEL_128:
      v52 = *a2;
      if (++v59 >= (unsigned __int64)(a2[1] - *a2)) {
        return result;
      }
    }
  }
  v7 = *a2;
  v8 = a2[1];
  v87 = nullptr;
  v88 = 0;
  v85 = 0;
  v86 = 0;
  v89 = 0x1.0000000000000p+0;
  if (v7 == v8) {
    goto LABEL_45;
  }
  do {
    v9 = (unsigned __int64*)*v7;
    v10 = (unsigned __int64*)*v7;
    if (*(_QWORD*)(*v7 + 32) != *(_QWORD*)(*v7 + 24)) {
      if ((v11 = v9[12], v12 = v9[69], (v11 | v12) == 0) ||
          v11 == 0 && (v12 != 0 ? (v13 = v9[13] == 0) : (v13 = false),
                       v13 &&
                           *((__int16*)v9 + 321) * *((__int16*)v9 + 320) *
                                   *((__int16*)v9 + 322) ==
                               0 &&
                           *(_QWORD*)(v12 + 352) == 0) ||
          (v10 = (unsigned __int64*)*v7, (v9[68] & 3) != 2)) {
        v10 = *(unsigned __int64**)(*v7 + 24);
      }
    }
    v14 = v86;
    v4 = *v10;
    v84 = *v10;
    if (v86 == 0 || v88 == 0) {
      goto LABEL_42;
    }
    v90 = (_QWORD*)v4;
    v16 = std___1___hash_memory(&v90, 8);
    v17 = v14 - 1;
    if ((v14 & (v14 - 1)) != 0) {
      v18 = v16;
      if (v16 >= v14) {
        v18 = v16 % v14;
      }
    }
    else {
      v18 = v16 & v17;
    }
    v19 = *(_QWORD**)(v85 + 8 * v18);
    if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
    LABEL_42:
      v90 = &v84;
      result = GameRoutine_1355e40(&v85, &v84, &v90);
      *(_QWORD*)(result + 24) = v9;
      goto LABEL_43;
    }
    if ((v14 & v17) == 0) {
      while (1) {
        v22 = v20[1];
        if (v16 == v22) {
          if (v20[2] == v4) {
            goto LABEL_39;
          }
        }
        else if ((v22 & v17) != v18) {
          goto LABEL_42;
        }
        v20 = (_QWORD*)*v20;
        if (v20 == nullptr) {
          goto LABEL_42;
        }
      }
    }
    while (1) {
      v21 = v20[1];
      if (v16 == v21) {
        break;
      }
      if (v21 >= v14) {
        v21 %= v14;
      }
      if (v21 != v18) {
        goto LABEL_42;
      }
    LABEL_28:
      v20 = (_QWORD*)*v20;
      if (v20 == nullptr) {
        goto LABEL_42;
      }
    }
    if (v20[2] != v4) {
      goto LABEL_28;
    }
  LABEL_39:
    v90 = &v84;
    result = GameRoutine_1355e40(&v85, &v84, &v90);
    if (*(_QWORD*)(*(_QWORD*)(result + 24) + 96LL) != 0 && v9[12] != 0) {
      v90 = &v84;
      result = GameRoutine_1355e40(&v85, &v84, &v90);
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(result + 24) + 96LL) +
                              132LL) <
          (unsigned int)*(unsigned __int8*)(v9[12] + 132)) {
        goto LABEL_42;
      }
    }
  LABEL_43:
    ++v7;
  } while (v7 != v8);
  v7 = *a2;
  v8 = a2[1];
LABEL_45:
  if (v7 != v8) {
    while (2) {
      v23 = *v7;
      v24 = (_QWORD*)*v7;
      if (*(_QWORD*)(*v7 + 32) != *(_QWORD*)(*v7 + 24)) {
        if ((v25 = *(_QWORD*)(v23 + 96), v26 = *(_QWORD*)(v23 + 552),
             (v25 | v26) == 0) ||
            v25 == 0 &&
                (v26 != 0 ? (v27 = *(_QWORD*)(v23 + 104) == 0) : (v27 = false),
                 v27 &&
                     *(__int16*)(v23 + 642) * *(__int16*)(v23 + 640) *
                             *(__int16*)(v23 + 644) ==
                         0 &&
                     *(_QWORD*)(v26 + 352) == 0) ||
            (v24 = (_QWORD*)*v7, (*(_WORD*)(v23 + 544) & 3) != 2)) {
          v24 = *(_QWORD**)(*v7 + 24);
        }
      }
      v28 = (_QWORD*)*v24;
      v90 = (_QWORD*)*v24;
      v29 = std___1___hash_memory(&v90, 8);
      v32 = v86;
      v33 = v29;
      if (v86 != 0) {
        v34 = v86 - 1;
        if ((v86 & (v86 - 1)) != 0) {
          v4 = v29;
          if (v29 >= v86) {
            v4 = v29 % v86;
          }
        }
        else {
          v4 = v34 & v29;
        }
        v35 = *(_QWORD***)(v85 + 8 * v4);
        if (v35 != nullptr) {
          v36 = *v35;
          if (*v35 != nullptr) {
            if ((v86 & v34) == 0) {
              while (1) {
                v38 = v36[1];
                if (v38 == v29) {
                  if ((_QWORD*)v36[2] == v28) {
                    goto LABEL_118;
                  }
                }
                else if ((v38 & v34) != v4) {
                  goto LABEL_80;
                }
                v36 = (_QWORD*)*v36;
                if (v36 == nullptr) {
                  goto LABEL_80;
                }
              }
            }
            do {
              v37 = v36[1];
              if (v37 == v29) {
                if ((_QWORD*)v36[2] == v28) {
                  goto LABEL_118;
                }
              }
              else {
                if (v37 >= v86) {
                  v37 %= v86;
                }
                if (v37 != v4) {
                  break;
                }
              }
              v36 = (_QWORD*)*v36;
            } while (v36 != nullptr);
          }
        }
      }
    LABEL_80:
      v39 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    32, 16, 0);
      v40 = v88;
      *(float*)&v31 = v89;
      v36 = v39;
      *v39 = 0;
      v39[1] = v33;
      v39[2] = v28;
      v39[3] = 0;
      LANES128(v30).n128_f32[0] = (float)(v40 + 1);
      if (v32 == 0 ||
          (float)(*(float*)&v31 * (float)v32) < LANES128(v30).n128_f32[0]) {
        v41 = v32 < 3 || (v32 & (v32 - 1)) != 0;
        LANES128(v30).n128_f32[0] = LANES128(v30).n128_f32[0] / *(float*)&v31;
        v42 = v41 | (2 * v32);
        v43 = vcvtps_u64_f32(LANES128(v30).n128_f32[0]);
        if (v42 <= v43) {
          v44 = v43;
        }
        else {
          v44 = v42;
        }
        if (v44 == 1) {
          v44 = 2;
        }
        else if ((v44 & (v44 - 1)) != 0) {
          primeEm = std___1___next_prime(v44);
          v32 = v86;
          v44 = primeEm;
        }
        if (v44 > v32) {
          goto LABEL_93;
        }
        if (v44 < v32) {
          *(float*)&v31 = v89;
          LANES128(v30).n128_f32[0] = (float)v88 / v89;
          v46 = vcvtps_u64_f32(LANES128(v30).n128_f32[0]);
          if (v32 < 3 || (v32 & (v32 - 1)) != 0) {
            v46 = std___1___next_prime(v46);
          }
          else {
            v47 = 1LL << -(char)__clz(v46 - 1);
            if (v46 >= 2) {
              v46 = v47;
            }
          }
          if (v44 <= v46) {
            v44 = v46;
          }
          if (v44 < v32) {
          LABEL_93:
            GameRoutine_1356160(&v85, v44);
          }
        }
        v32 = v86;
        if ((v86 & (v86 - 1)) != 0) {
          if (v33 >= v86) {
            v4 = v33 % v86;
          }
          else {
            v4 = v33;
          }
        }
        else {
          v4 = (v86 - 1) & v33;
        }
      }
      v48 = v85;
      v49 = *(_QWORD**)(v85 + 8 * v4);
      if (v49 != nullptr) {
        *v36 = *v49;
        *v49 = v36;
      }
      else {
        v50 = v87;
        v87 = v36;
        *v36 = v50;
        *(_QWORD*)(v48 + 8 * v4) = &v87;
        if (*v36 != 0) {
          v51 = *(_QWORD*)(*v36 + 8LL);
          if ((v32 & (v32 - 1)) != 0) {
            if (v51 >= v32) {
              v51 %= v32;
            }
          }
          else {
            v51 &= v32 - 1;
          }
          *(_QWORD*)(v85 + 8 * v51) = v36;
        }
      }
      ++v88;
    LABEL_118:
      if (v36[3] == v23) {
        result = game_gmap_13402f0(v23, 4, 1, v30, v31);
        if ((result & 1) != 0) {
          goto LABEL_122;
        }
      }
      else {
        result = game_gmap_13402f0(v23, 4, 0, v30, v31);
        if ((result & 1) != 0) {
        LABEL_122:
          **(_BYTE**)(v6 + 8) = 1;
        }
      }
      if (++v7 == v8) {
        break;
      }
      continue;
    }
  }
  v65 = v87;
  if (v87 != nullptr) {
    do {
      v66 = (_QWORD*)*v65;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v67 = 128;
      }
      else {
        v67 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v67);
      v65 = v66;
    } while (v66 != nullptr);
  }
  v68 = v85;
  v85 = 0;
  if (v68 != 0) {
    v69 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v69 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v69);
  }
  return result;
}

_QWORD*

game_gmap_TroopMgr_Impl_UpdateVisibleTroops_closure_Invoke(_QWORD* result,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0) {
    v4 = *(unsigned __int8*)(v3 + 32);
    if (v4 != 1) {
      if (v4 != 2) {
        return result;
      }
      v5 = (__int64*)result[3];
      v7 = (_QWORD*)v5[1];
      v6 = v5[2];
      if ((unsigned __int64)v7 >= v6) {
        v8 = *v5;
        v9 = (__int64)v7 - *v5;
        v10 = (v9 >> 3) + 1;
        if (v10 >> 61 == 0) {
          v11 = v6 - v8;
          v12 = (__int64*)fw_memory_g_heap_manager_ptr;
          if (v11 >> 2 > v10) {
            v10 = v11 >> 2;
          }
          if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
            v13 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v13 = v10;
          }
          if (v13 == 0) {
            v14 = 0;
          LABEL_40:
            v33 = v14 + 8 * v13;
            v34 = v14 + v9 - 8 * (v9 >> 3);
            *(_QWORD*)(v14 + v9) = v2;
            v23 = v14 + v9 + 8;
            result = (_QWORD*)memcpy(v34, v8, v9);
            *v5 = v34;
            v5[1] = v23;
            v5[2] = v33;
            if (v8 != 0) {
              v32 = *v12;
              goto LABEL_42;
            }
            goto LABEL_45;
          }
          if (v13 >> 61 == 0) {
            v14 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
            goto LABEL_40;
          }
        LABEL_48:
          GameRoutine_60a210(result);
        }
        goto LABEL_47;
      }
      goto LABEL_26;
    }
    v5 = (__int64*)result[2];
  LABEL_25:
    v7 = (_QWORD*)v5[1];
    v22 = v5[2];
    if ((unsigned __int64)v7 >= v22) {
      v24 = *v5;
      v25 = (__int64)v7 - *v5;
      v26 = (v25 >> 3) + 1;
      if (v26 >> 61 == 0) {
        v27 = v22 - v24;
        if (v27 >> 2 > v26) {
          v26 = v27 >> 2;
        }
        if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
          v28 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v28 = v26;
        }
        if (v28 != 0) {
          if (v28 >> 61 != 0) {
            goto LABEL_48;
          }
          v29 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v28, 16, 0);
        }
        else {
          v29 = 0;
        }
        v30 = v29 + 8 * v28;
        v31 = v29 + v25 - 8 * (v25 >> 3);
        *(_QWORD*)(v29 + v25) = v2;
        v23 = v29 + v25 + 8;
        result = (_QWORD*)memcpy(v31, v24, v25);
        *v5 = v31;
        v5[1] = v23;
        v5[2] = v30;
        if (v24 != 0) {
          v32 = fw_memory_g_heap_manager;
        LABEL_42:
          v35 = 128;
          if (*(_QWORD*)(v32 + 200) == 0) {
            v35 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(v32 + v35);
        }
      LABEL_45:
        v5[1] = v23;
        return result;
      }
    LABEL_47:
      GameRoutine_888610_alt1(result);
    }
  LABEL_26:
    *v7 = v2;
    v23 = (__int64)(v7 + 1);
    goto LABEL_45;
  }
  if (*(_QWORD*)(v2 + 552) != 0) {
    if (*(_QWORD*)(v2 + 104) != 0 ||
        *(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) * *(__int16*)(v2 + 644) !=
            0) {
      v5 = (__int64*)result[4];
      goto LABEL_25;
    }
  }
  else {
    v15 = *(_DWORD*)(v2 + 540);
    v16 = (_QWORD*)*a2;
    v17 = __OFSUB__(v15, 1);
    v18 = (unsigned int)(v15 - 1);
    if (((v18 & 0x80000000) != 0LL) == v17) {
      v19 = *(_QWORD*)(v2 + 24);
      v20 = *(_QWORD*)(v2 + 32) - v19;
      v21 = (_QWORD*)(v19 + 8LL * (unsigned int)v18);
      if (v18 >= v20 >> 3) {
        v16 = (_QWORD*)*a2;
      }
      else {
        v16 = v21;
      }
    }
    if (*v16 == result[5]) {
      v5 = (__int64*)result[1];
      goto LABEL_25;
    }
  }
  return result;
}

__int64

game_gmap_TroopMgr_Impl_UpdateVisibleTroops_closure0_Invoke(__int64 result,
                                                            __int64 a2)
{
  _QWORD* v2;
  int v3;
  _QWORD* v4;
  bool v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;

  v2 = *(_QWORD**)a2;
  v3 = *(_DWORD*)(*(_QWORD*)a2 + 540LL);
  v4 = *(_QWORD**)a2;
  v5 = __OFSUB__(v3, 1);
  v6 = (unsigned int)(v3 - 1);
  if (((v6 & 0x80000000) != 0LL) == v5) {
    v7 = v2[3];
    v8 = v2[4] - v7;
    v9 = (_QWORD*)(v7 + 8LL * (unsigned int)v6);
    if (v6 >= v8 >> 3) {
      v4 = *(_QWORD**)a2;
    }
    else {
      v4 = v9;
    }
  }
  if (*v4 == *(_QWORD*)(result + 16) && *v2 != *v4) {
    v10 = *(__int64**)(result + 8);
    v12 = (_QWORD*)v10[1];
    v11 = v10[2];
    if ((unsigned __int64)v12 >= v11) {
      v14 = *v10;
      v15 = (__int64)v12 - *v10;
      v16 = (v15 >> 3) + 1;
      if (v16 >> 61 != 0) {
        GameRoutine_888610_alt1(result);
      }
      v17 = v11 - v14;
      v18 = fw_memory_g_heap_manager_ptr;
      if (v17 >> 2 > v16) {
        v16 = v17 >> 2;
      }
      if ((unsigned __int64)v17 >= 0x7FFFFFFFFFFFFFF8LL) {
        v19 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v19 = v16;
      }
      if (v19 != 0) {
        if (v19 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v20 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
      }
      else {
        v20 = 0;
      }
      v21 = v20 + 8 * v19;
      v22 = v20 + v15 - 8 * (v15 >> 3);
      *(_QWORD*)(v20 + v15) = v2;
      v13 = v20 + v15 + 8;
      result = memcpy(v22, v14, v15);
      *v10 = v22;
      v10[1] = v13;
      v10[2] = v21;
      if (v14 != 0) {
        v23 = 128;
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
          v23 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v23);
      }
    }
    else {
      *v12 = v2;
      v13 = (__int64)(v12 + 1);
    }
    v10[1] = v13;
  }
  return result;
}

__int64 game_gmap_TroopMgr_GetAroundTroop_lambda0_Invoke(__int64 result,
                                                         __int64* a2)
{
  __int64 v2;
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

  v2 = *a2;
  if ((*(_WORD*)(*a2 + 544) & 0x10) == 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_888610_alt1(result);
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
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
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

bool game_gmap_TroopMgr_TryDisposOtherClan_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  return *(_QWORD*)(*a2 + 552) == *(_QWORD*)(a1 + 8) &&
         (*(_BYTE*)(v2 + 546) & 8) == 0 && (*(_WORD*)(v2 + 544) & 0x40) == 0;
}

long double game_gmap_TroopMgr_DisposSpecial_lambda0_Invoke(__int64 a1,
                                                            __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int* v3;
  long double result;
  unsigned int* v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int128 v12;
  __int64 v13;
  __int128 v14;
  struct {
    unsigned __int64 v15[4];
    unsigned __int64* v16;
  } v15_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(*(_QWORD*)a2 + 64LL);
  if (v2 == 0) {
    return result;
  }
  v3 = game_gmap_SpotMgr_FindSpot_alt1(*(unsigned int**)(*(_QWORD*)a2 + 48LL)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (GameData_21c96e8 == 0) {
    return result;
  }
  v5 = v3;
  if (v3 == nullptr) {
    return result;
  }
  v6 = *(_QWORD*)(GameData_21c96e8 + 8);
  v15_.v15[0] = (unsigned __int64)GameData_202bb48;
  v15_.v16 = v15_.v15;
  v7 = game_gmap_TroopMgr_CountTroop_134e600_alt1((__int64)v3,
                                                  (__int64)v15_.v15),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15_.v16 == v15_.v15) {
    v8 = 32;
  }
  else {
    if (v15_.v16 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v15_.v16 + v8))((__int64)v15_.v16),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_9:
  v15_.v15[1] = (unsigned __int64)&GameData_1a86cf1;
  v15_.v15[0] = game_HashString_alt1((__int64)&GameData_1a86cf1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v9 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v10 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v15_.v15),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v10 == 0) {
      if (v7 >= 0) {
        return result;
      }
      goto LABEL_13;
    }
    v9 = *(_DWORD*)(v10 + 32);
  }
  if (v7 >= v9) {
    return result;
  }
LABEL_13:
  v11 = TroopMgr_1351170((__int64*)(v6 + 8)),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v11 != 0) {
    *(_QWORD*)(v11 + 552) = v2;
    *(_QWORD*)v11 = v5;
    *(_DWORD*)(v11 + 48) = v5[8];
    *(_DWORD*)(v11 + 52) = v5[9];
    v12 = *(_OWORD*)(v11 + 48);
    *((_QWORD*)&v12 + 1) = v5[10];
    *(_OWORD*)(v11 + 48) = v12;
    if (*(_QWORD*)GameData_212d750 != 0 && *(_QWORD*)(v11 + 344) == 0) {
      v13 = v11;
      Troop_133e6e0(v11),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v11 = v13;
    }
    result = *(long double*)&GameData_21c9610;
    *(_QWORD*)(v11 + 64) = GameData_21c9610;
    v14 = *(_OWORD*)(v11 + 64);
    *((_QWORD*)&v14 + 1) = DWORD2(result);
    *(_OWORD*)(v11 + 64) = v14;
  }
  return result;
}

__int64 game_gmap_TroopMgr_RequestEscapeSpecial_lambda0_Invoke(__int64 result,
                                                               __int64 a2)
{
  _QWORD* v2;

  v2 = **(_QWORD***)(result + 16);
  if (*(_QWORD*)(*(_QWORD*)a2 + 48LL) == *(_QWORD*)(*v2 + 120LL) &&
      *(_QWORD*)(*(_QWORD*)a2 + 64LL) == v2[69]) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

__int64 game_gmap_TroopMgr_GetCorpsList_lambda0_Invoke(__int64 result,
                                                       __int64* a2)
{
  __int64 v2;
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

  v2 = *a2;
  if ((*(_DWORD*)(*a2 + 84) & 0x80000000) == 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_888610_alt1(result);
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
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16);
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

__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda0_Invoke(__int64 result,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BYTE* v23;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96);
  if (v3 != 0 && *(_BYTE*)(v3 + 32) == 1 &&
      ((**(_BYTE**)(result + 16) & 1) == 0 && *(_BYTE*)(v3 + 129) == 0 &&
           (game_GameModeData_instance_ == 0 ||
            *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) &&
           (*(_WORD*)(v2 + 544) & 0x100) == 0 &&
           ((v16 = *(_QWORD*)(v2 + 88)) == 0 ||
            (v17 = *(_BYTE**)(v16 + 48)) == nullptr || *v17 == 0) ||
       *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL) - **(_QWORD**)(result + 8) <=
           8u)) {
    v4 = *(__int64**)(result + 24);
    v6 = (_QWORD*)v4[1];
    v5 = v4[2];
    if ((unsigned __int64)v6 >= v5) {
      v8 = *v4;
      v9 = (__int64)v6 - *v4;
      v10 = (v9 >> 3) + 1;
      if (v10 >> 61 != 0) {
        GameRoutine_888610_alt1(result);
      }
      v11 = v5 - v8;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v14 = result;
        v15 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = result;
        v15 = 0;
      }
      v18 = v15 + 8 * v13;
      v19 = v15 + v9 - 8 * (v9 >> 3);
      *(_QWORD*)(v15 + v9) = v2;
      v7 = v15 + v9 + 8;
      memcpy(v19, v8, v9);
      *v4 = v19;
      v4[1] = v7;
      v4[2] = v18;
      if (v8 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v20);
      }
      result = v14;
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[1] = v7;
    v21 = *(_QWORD*)(v2 + 96);
    if (v21 != 0 && *(_BYTE*)(v21 + 129) != 0 ||
        game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 1 ||
        (*(_WORD*)(v2 + 544) & 0x100) != 0 ||
        (v22 = *(_QWORD*)(v2 + 88)) != 0 &&
            (v23 = *(_BYTE**)(v22 + 48)) != nullptr && *v23 != 0) {
      **(_BYTE**)(result + 32) = 1;
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_GetEncountEnemyList_lambda1_Invoke(__int64 result,
                                                              __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;

  v2 = *(_QWORD*)(*(_QWORD*)(result + 8) + 8LL);
  if (*(_BYTE*)(v2 + 176) == 3 && (*(_BYTE*)(v2 + 112) & 1) == 0) {
    v3 = *a2;
    if ((*(_WORD*)(*a2 + 544) & 0x100) == 0) {
      v4 = *(_QWORD*)(v3 + 96);
      if (v4 != 0 && *(_BYTE*)(v4 + 32) == 1 &&
          ((**(_BYTE**)(result + 24) & 1) == 0 && *(_BYTE*)(v4 + 129) == 0 &&
               (game_GameModeData_instance_ == 0 ||
                *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) &&
               ((v17 = *(_QWORD*)(v3 + 88)) == 0 ||
                (v18 = *(_BYTE**)(v17 + 48)) == nullptr || *v18 == 0) ||
           *(_QWORD*)(*(_QWORD*)(result + 16) + 8LL) -
                   **(_QWORD**)(result + 16) <=
               8u)) {
        v5 = *(__int64**)(result + 32);
        v7 = (_QWORD*)v5[1];
        v6 = v5[2];
        if ((unsigned __int64)v7 >= v6) {
          v9 = *v5;
          v10 = (__int64)v7 - *v5;
          v11 = (v10 >> 3) + 1;
          if (v11 >> 61 != 0) {
            GameRoutine_888610_alt1(result);
          }
          v12 = v6 - v9;
          v13 = fw_memory_g_heap_manager_ptr;
          if (v12 >> 2 > v11) {
            v11 = v12 >> 2;
          }
          if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
            v14 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v11;
          }
          if (v14 != 0) {
            if (v14 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v15 = result;
            v16 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
          }
          else {
            v15 = result;
            v16 = 0;
          }
          v19 = v16 + 8 * v14;
          v20 = v16 + v10 - 8 * (v10 >> 3);
          *(_QWORD*)(v16 + v10) = v3;
          v8 = v16 + v10 + 8;
          memcpy(v20, v9, v10);
          *v5 = v20;
          v5[1] = v8;
          v5[2] = v19;
          if (v9 != 0) {
            v21 = 128;
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v21);
          }
          result = v15;
        }
        else {
          *v7 = v3;
          v8 = (__int64)(v7 + 1);
        }
        v5[1] = v8;
        v22 = *(_QWORD*)(v3 + 96);
        if (v22 != 0 && *(_BYTE*)(v22 + 129) != 0 ||
            game_GameModeData_instance_ != 0 &&
                *(_DWORD*)(game_GameModeData_instance_ + 60) == 1 ||
            (*(_WORD*)(v3 + 544) & 0x100) != 0 ||
            (v23 = *(_QWORD*)(v3 + 88)) != 0 &&
                (v24 = *(_BYTE**)(v23 + 48)) != nullptr && *v24 != 0) {
          **(_BYTE**)(result + 40) = 1;
        }
      }
    }
  }
  return result;
}

void game_gmap_TroopMgr_PlayEncountMotion_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  struct {
    unsigned __int64 v5;
    int v6;
    char v7;
  } v5_;

  v2 = *a2;
  if (*(_BYTE*)(*a2 + 512) != 2) {
    v5_.v5 = 0xBF800000BF800000LL;
    v5_.v6 = 1065353216;
    v5_.v7 = 1;
    if ((UnitActor_81a540(v2 + 112, 2017201876, (__int64)&v5_.v5) & 1) == 0) {
      UnitActor_81a540(v2 + 112, -1193575777, (__int64)&v5_.v5);
    }
  }
  v3 = GameRoutine_135bea0();
  v4 = *(_QWORD*)(v2 + 376);
  if (v4 != 0) {
    *(float*)(*(_QWORD*)(v4 + 304) + 12LL) = v3;
  }
}

bool game_gmap_TroopMgr_HasFixedPlayer_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) != 0;
}

bool game_gmap_TroopMgr_HasNotFixedPlayer_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return (*(_WORD*)(*(_QWORD*)a2 + 544LL) & 0x10) == 0;
}

__int64 game_gmap_TroopMgr_OnUpdateChapter_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  _DWORD* v3;
  __int64 result;

  v2 = *a2;
  v3 = (_DWORD*)game_gmap_SpotMgr_GetCurrentSpot(a1);
  result = GameRoutine_133f780(v2, v3, 1);
  if (*(_BYTE*)(v2 + 512) != 0) {
    *(_BYTE*)(v2 + 512) = 0;
    if (GameData_21f1618 != 0) {
      return GameRoutine_995200(v2 + 112);
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_HealAllUnits_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  struct {
    _QWORD v5[4];
    _QWORD* v6;
  } v5_;

  v2 = *a2;
  v5_.v5[0] = GameData_202dc38;
  v5_.v6 = v5_.v5;
  Troop_133ed80(v2, (__int64)v5_.v5);
  if (v5_.v6 == v5_.v5) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v5_.v6 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v5_.v6 + v3))((__int64)v5_.v6);
  }
  return UnitActor_81a540(v2 + 112, -574916402, (__int64)GameData_212ceb8);
}

__int64 game_gmap_TroopMgr_DisposResonanceEnemy_lambda0_Invoke(__int64 result,
                                                               __int64** a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD v8[2];

  if ((**(_BYTE**)(result + 8) & 1) == 0) {
    v2 = (*a2)[12];
    if (v2 != 0 && *(_BYTE*)(v2 + 32) == 1) {
      v3 = **a2;
      v4 = *(_QWORD*)(result + 16);
      v5 = result;
      v8[1] = &GameData_1ad7cf2;
      v8[0] = game_HashString(&GameData_1ad7cf2);
      if (game_GameModeData_instance_ != 0 &&
          (v6 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v8)) != 0) {
        v7 = *(_DWORD*)(v6 + 32);
      }
      else {
        v7 = 0;
      }
      result = GameRoutine_1332940(v3, 0, v4, v7);
      if ((result & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 1;
      }
    }
  }
  return result;
}

__int64 game_gmap_TroopMgr_PlayEncountMotion(__int64 a1)
{
  __int64 (*v1)();
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(__int64 (**)(void))(a1 + 152);
  v4_.v4[0] = GameData_202d6c8;
  v4_.v5 = v4_.v4;
  game_gmap_TroopMgr_EachEncountTroop_alt1(v1, (__int64)v4_.v4);
  result = (__int64)v4_.v5;
  if (v4_.v5 == v4_.v4) {
    v3 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4_.v5 + v3))((__int64)v4_.v5);
}

#pragma GCC visibility pop
