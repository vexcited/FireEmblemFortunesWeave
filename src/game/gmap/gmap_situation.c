#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_134ad70(void);
__int64 GameRoutine_15446c0(_QWORD, _QWORD);
__int64 GameRoutine_1544c00(_QWORD, _QWORD);
__int64 GameRoutine_827070(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_82e5c0(void);
__int64 GameRoutine_9724a0(void);
__int64 GameRoutine_ae3e80(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern _UNKNOWN GameData_1a86d37;
extern _UNKNOWN GameData_1a86f9b;
extern _UNKNOWN GameData_1a86fa8;
extern _UNKNOWN GameData_1a8ee0e;
extern _UNKNOWN GameData_1a96743;
extern _UNKNOWN GameData_1a9e43e;
extern _UNKNOWN GameData_1aa9eec;
extern _UNKNOWN GameData_1adfa87;
extern __int64 (*GameData_2047628[])();
extern __int64 GameData_212d740[3];
extern __int64 GameData_21c96e8;
extern __int64 GameData_22416c0;
extern __int64 GameData_224e750;
extern __int64 GameData_224e758;
extern __int64 GameData_224e768;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64* GameData_2130e70;
extern char GameData_1aeb3a4[];
void __attribute__((noreturn)) GameRoutine_14c2010(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_667c50(void);
__int64 GmapSituation_14d7f60();
__int64 GmapSituation_14daf80();
__int64 GmapSituation_14db030();
__int64 GmapSituation_14db100();
bool GmapSituation_14db2f0();
__int64 GmapSituation_14db3b0();
__int64 GmapSituation_14db4a0();
bool GmapSituation_14dbd80(__int64 a1, __int64 a2);
__int64 GmapSituation_14dbe20();
__int64 GmapSituation_14dc120(unsigned int a1);
__int64 GmapSituation_14dc210_alt1() __asm__("GmapSituation_14dc210");
__int64 GmapSituation_14dc380(__int64 result, __int64 a2);
__int64 GmapSituation_14dc4f0();
__int64 GmapSituation_14dc560(__int64 result, __int64 a2);
__int64 GmapSituation_14dc720_alt1(__int64 result,
                                   __int64 a2) __asm__("GmapSituation_14dc720");
__int64 GmapSituation_14dbeb0(__int64 result);
__int64 GameRoutine_995200(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f1618;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212c878[6];
__int64 game_gmap_GmapSituation_CalcBanquet_lambda0_Invoke(__int64 result,
                                                           int* a2);
bool game_gmap_GmapSituation_CalcDestroyMiasma_lambda0_Invoke(__int64 a1,
                                                              __int64 a2);
bool game_gmap_GmapSituation_CalcTalk_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_gmap_GmapSituation_CalcCallAnimal_lambda0_Invoke(__int64 result,
                                                              int* a2);
__int64 game_gmap_GmapSituation_CalcMakeFarm_lambda0_Invoke(__int64 result,
                                                            int* a2);
__int64 game_gmap_GmapSituation_CalcBoostFarm_lambda0_Invoke(__int64 a1,
                                                             int* a2);
__int64
game_gmap_GmapSituation_CalcBladeResonance_lambda0_Invoke(__int64 result,
                                                          unsigned __int16* a2);
__int64
game_gmap_GmapSituation_CalcBladeResonance_lambda1_Invoke(__int64 result,
                                                          int* a2);
__int64 game_gmap_GmapSituation_CheckHellGate_lambda0_Invoke_alt1(
    __int64 a1,
    __int64*
        a2) __asm__("game_gmap_GmapSituation_CheckHellGate_lambda0_Invoke");
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void game_ae0900(PSEUDO_X8, _QWORD);
__int64 GameRoutine_14cd330(_QWORD, _QWORD);
__int64 GameRoutine_89aac0(_QWORD, _QWORD);
__int64 Impl_13261c0(_QWORD);
__int64 SpotMgr_13388c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 TroopMgr_13460a0(__int64);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gmap_1341d60(__int64, char);
__int64 game_gmap_1536e70(int);
__int64 game_gmap_1544280(__int64**);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_gmap_Troop_CountUnit(__int64, __int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 SpotMgr_1336300();
bool game_CorpsManager_GetEmptyIndex();
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ac495e;
extern _UNKNOWN GameData_1ac87d2;
extern _UNKNOWN GameData_1aed6ab;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_202c698[])();
extern __int64 (*GameData_202d7c8[])();
extern __int64 (*GameData_2047228[])();
extern __int64 (*GameData_20474a8[])();
extern __int64 (*GameData_2047518[])();
extern __int64 (*GameData_20475a8[])();
extern __int64* GameData_212c780;
extern __int64* GameData_212c790;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c890[3];
extern __int64* GameData_212ca18[132];
extern __int64* GameData_212d800[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d748[2];
extern __int64 GameData_21316c8;
extern const char GameData_1a990db[];
unsigned int* BladeResonance_14b7a80(__int64);
void __attribute__((noreturn)) GameRoutine_14bec90(void);
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_8875e0(void);
__int64 game_gmap_GmapSituation_CalcDivideCorps();
__int64 GmapSituation_14da880();
__int64 GmapSituation_14db160();
__int64 GmapSituation_14db740(__int64 result);
__int64 game_gmap_GmapSituation_CalcBladeResonance_lambda0_Invoke_14ddaf0(
    __int64 result, __int64* a2);
__int64 BanquetManager_96a680(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1518560(_QWORD);
__int64 GameRoutine_1518fe0(_QWORD);
__int64 GameRoutine_15190c0(_QWORD);
__int64 GameRoutine_15191b0(_QWORD);
__int64 GameRoutine_715440(void);
__int64 GameRoutine_8a1ae0(_QWORD);
__int64 GameRoutine_ae0560(void);
__int64 Impl_13262e0(_QWORD);
__int64 Impl_1326560(_QWORD);
__int64 Impl_1328300(_QWORD);
__int64 Impl_1328460(_QWORD);
__int64 Impl_13287c0(_QWORD);
__int64 Impl_132a360(_QWORD);
__int64 SpotAttachmentAnimal_14d28c0();
__int64 SpotAttachmentAnimal_14d29e0(_QWORD);
__int64 SpotAttachmentExplore_151a540(void);
__int64 SpotAttachmentFarm_1515d80(void);
__int64 SpotAttachmentFarm_1516610(_QWORD);
__int64 SpotAttachmentRecruit_1517ee0(void);
__int64 UnitItem_6e8800(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_821090(_QWORD);
__int64 game_TransporterConst_List_Impl_EachData(_QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_HasStockUses(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_gmap_1536e70_alt1(_QWORD) __asm__("game_gmap_1536e70");
__int64 game_gmap_SpotAttachmentAnimal_GetData(void);
__int64 game_gmap_SpotAttachmentExplore_GetData(void);
__int64 game_gmap_SpotAttachmentFarm_GetGrowthData(void);
__int64 game_gmap_SpotMgr_CountDispatchLegion(void);
__int64 game_gmap_SpotMgr_CountSpotAttachment(_QWORD);
__int64 game_gmap_TroopMgr_CountPlayerTroop_134e7b0(_QWORD);
__int64 game_gmap_TroopMgr_CountTroop_134e600(_QWORD, _QWORD);
__int64
    game_gmap_Troop_CountUnit_alt1(_QWORD,
                                   _QWORD) __asm__("game_gmap_Troop_CountUnit");
extern _UNKNOWN GameData_1a8ad12;
extern _UNKNOWN GameData_1ac4744;
extern _UNKNOWN GameData_1ade171;
extern _UNKNOWN GameData_1aee5d5;
extern _UNKNOWN GameData_21f4970;
extern __int64 (*GameData_1fa80c0[])();
extern __int64 (*GameData_2047028[])();
extern __int64 (*GameData_20470a8[])();
extern __int64 (*GameData_2047128[])();
extern __int64 (*GameData_20471a8[])();
extern __int64 (*GameData_20472a8[])();
extern __int64 (*GameData_2047328[])();
extern __int64 (*GameData_20473a8[])();
extern __int64 (*GameData_2047428[])();
extern __int64* GameData_212ca48[126];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_212d7f8[4];
extern __int64* GameData_2130e60;
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21f4960;
extern __int64 GameData_21f4968;
extern __int64 GameData_22416b0;
void __attribute__((noreturn))
GameRoutine_60a310_alt2(_QWORD, _QWORD) __asm__("GameRoutine_60a310");
__int64 game_gmap_GmapSituation_CalcExplore();
__int64 game_gmap_GmapSituation_CalcBanquet(__int64 a1, __int64 a2);
__int64 GmapSituation_14d7700();
__int64 GmapSituation_14d7ae0();
__int64 game_gmap_GmapSituation_CalcDestroyMiasma();
__int64 GmapSituation_14d80a0(__int64 a1, __int64 a2);
__int64 game_gmap_GmapSituation_CalcExchangeCorps();
__int64 game_gmap_GmapSituation_CalcTalk();
__int64 GmapSituation_14d8840();
__int64 GmapSituation_14d8ae0();
__int64 game_gmap_GmapSituation_CalcCallAnimal();
__int64 GmapSituation_14d91e0();
__int64 game_gmap_GmapSituation_CalcMakeFarm();
__int64 game_gmap_GmapSituation_CalcBoostFarm();
__int64 GmapSituation_14d9a80();
__int64 GmapSituation_14d9ce0();
__int64 GmapSituation_14d9ea0();
bool GmapSituation_14db600();
bool GmapSituation_14dbfe0();
bool game_gmap_GmapSituation_CalcExchangeCorps_lambda0_Invoke(__int64 a1,
                                                              __int64 a2);
_QWORD* GameVariable_827070(__int64, unsigned int, unsigned __int64*, __int64*,
                            int, char);
__int64 SpotAttachmentFarm_1515d80_alt1() __asm__("SpotAttachmentFarm_1515d80");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gmap_TroopMgr_CanCreateCorps();
__int64 game_gmap_TroopMgr_CountPlayerTroop_134e7b0_alt1(__int64) __asm__(
    "game_gmap_TroopMgr_CountPlayerTroop_134e7b0");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
bool GameHr_995200(__int64);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void GameRoutine_15446c0_alt1(__int64*,
                              const char***) __asm__("GameRoutine_15446c0");
void __attribute__((noreturn))
GameRoutine_14c2010_alt1() __asm__("GameRoutine_14c2010");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_667c50_alt1() __asm__("GameRoutine_667c50");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GmapSituation_14dc210();
_QWORD* GmapSituation_14dc720(_QWORD* result, __int64 a2);
bool game_gmap_GmapSituation_CheckHellGate_lambda0_Invoke(__int64 a1,
                                                          __int64* a2);

__int64 game_gmap_GmapSituation_CalcExplore()
{
  __int64 v0;
  __int64 v1;
  int v2;
  int v3;
  __int64* v6;
  int v7;
  __int64 v8;
  int v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  bool v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  __int64 v24;
  __int64** v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  _BOOL4 v30;
  __int64 v31;
  _QWORD* v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  unsigned int v39;
  _QWORD v41[4];
  _QWORD* v42;

  v0 = game_821090(4);
  if (game_GameModeData_instance_ != 0) {
    v1 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v0);
    v2 = 16385;
    if (v1 != 0) {
      if (*(int*)(v1 + 32) <= 0) {
        v2 = 16385;
      }
      else {
        v2 = 0;
      }
    }
  }
  else {
    v2 = 16385;
  }
  v3 = game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  }
  v6 = GameData_212c790;
  if (*(_BYTE*)(*GameData_2130e70 + 52) == 1) {
    v3 = 1;
  }
  if (v3 == 0) {
    v2 |= 0x4002u;
  }
  if ((*(_BYTE*)(*GameData_2130e70 + 52) & 0xFE) != 0) {
    v7 = v2 | 4;
  }
  else {
    v7 = v2;
  }
  v8 = *(_QWORD*)(*GameData_212c790 + 8);
  v9 = *(_DWORD*)(v8 + 56);
  v10 = *(__int64**)(v8 + 8);
  v11 = *(__int64**)(v8 + 16);
  if ((v9 & 0x80000000) == 0) {
    while (v10 != v11) {
      v13 = *v10++;
      v12 = v13;
      if (*(_DWORD*)(v13 + 84) == v9) {
        goto LABEL_31;
      }
    }
  LABEL_30:
    v12 = 0;
    goto LABEL_31;
  }
  if (v10 == v11) {
    goto LABEL_30;
  }
  while (1) {
    v12 = *v10;
    if (*(_QWORD*)(*v10 + 96) == 0 && *(_QWORD*)(v12 + 552) == 0) {
      break;
    }
    if (++v10 == v11) {
      goto LABEL_30;
    }
  }
LABEL_31:
  v14 = *(_DWORD*)(v12 + 540);
  v15 = (_QWORD*)v12;
  v16 = __OFSUB__(v14, 1);
  v17 = (unsigned int)(v14 - 1);
  if (((v17 & 0x80000000) != 0LL) == v16) {
    v18 = *(_QWORD*)(v12 + 24);
    v19 = *(_QWORD*)(v12 + 32) - v18;
    v20 = (_QWORD*)(v18 + 8LL * (unsigned int)v17);
    if (v17 >= v19 >> 3) {
      v15 = (_QWORD*)v12;
    }
    else {
      v15 = v20;
    }
  }
  v21 = *v15;
  if (*(_BYTE*)(*v15 + 176LL) == 3 && (*(_BYTE*)(v21 + 112) & 1) == 0 &&
      (unsigned __int8)Impl_13261c0(*v15) == 5) {
    v22 = (unsigned __int8)Impl_13261c0(v21);
    if (*(_QWORD*)(v21 + 144) == 0 || v22 != 5) {
      v7 |= 0x4008u;
    }
    v24 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_56;
    }
  }
  else {
    v7 |= 0x4008u;
    v24 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_56:
      v30 = false;
      goto LABEL_57;
    }
  }
  if (*(_DWORD*)(v24 + 60) != 3) {
    goto LABEL_56;
  }
  v25 = *(__int64***)(*GameData_2130e60 + 8);
  v26 = *v25;
  v27 = v25[1];
  if (v26 == v27) {
    goto LABEL_56;
  }
  while (1) {
    v29 = *v26++;
    v28 = v29;
    if (*(_QWORD*)(*(_QWORD*)(v29 + 112) + 48LL) == *(_QWORD*)(v21 + 120)) {
      break;
    }
    if (v26 == v27) {
      v28 = 0;
      break;
    }
  }
  v30 = v28 != 0;
LABEL_57:
  v31 = *(_QWORD*)(*v6 + 8);
  v32 = *(_QWORD**)(v31 + 8);
  v33 = *(_QWORD**)(v31 + 16);
  while (v32 != v33) {
    v34 = (_QWORD*)*v32;
    if (*(_QWORD*)*v32 == v21) {
      v35 = v34[12];
      if (v35 != 0 && (unsigned int)*(unsigned __int8*)(v35 + 32) - 3 < 2) {
        v36 = 1;
        LODWORD(v6) = (v34[68] & 8) != 0;
        goto LABEL_65;
      }
    }
    ++v32;
  }
  v36 = 0;
LABEL_65:
  v41[0] = GameData_2047028;
  v42 = v41;
  v37 = game_gmap_Troop_CountUnit_alt1(v12, v41);
  if (v42 == v41) {
    v38 = 32;
  }
  else {
    if (v42 == nullptr) {
      goto LABEL_70;
    }
    v38 = 40;
  }
  (*(void (**)(__int64))(*v42 + v38))((__int64)v42);
LABEL_70:
  v39 = v7 | 0x4010;
  if (!v30) {
    v39 = v7;
  }
  if ((v36 & (unsigned int)v6) != 0) {
    v39 |= 0x4400u;
  }
  if (v37 >= 1) {
    return v39;
  }
  else {
    return v39 | 0x40;
  }
}

__int64 game_gmap_GmapSituation_CalcBanquet(__int64 a1, __int64 a2)
{
  __int64 (***v2)();
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64* v12;
  int v13;
  __int64 v14;
  int v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  int v20;
  bool v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64 (**v27)();
  __int64 (**v28)();
  char v29;
  int v30;
  __int64 (*v31)();
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64** v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  _QWORD v48[4];
  _QWORD* v49;
  __int64 (**v50)();
  __int64 v51;
  _QWORD* v52;
  __int64 (***v53)();
  int v54;

  v54 = 0;
  v48[0] = GameData_20470a8;
  v48[1] = &v54;
  v2 = &v50;
  v49 = v48;
  v3 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v52 = v48;
  v53 = &v50;
  v4 = *(unsigned int*)(v3 + 80);
  v50 = GameData_1fa80c0;
  v51 = 20;
  if ((int)v4 < 1) {
    goto LABEL_11;
  }
  v5 = 0;
  v6 = 12 * v4;
  do {
    a2 = *(_QWORD*)(v3 + 8) + v5;
    if (*(_WORD*)(a2 + 2) != 0) {
      if (v53 == nullptr) {
        GameRoutine_60a310_alt2(0, a2);
      }
      ((void (*)(__int64 (***)()))(*v53)[6])(v53);
    }
    v5 += 12;
  } while (v6 != v5);
  v2 = v53;
  if (v53 == &v50) {
  LABEL_11:
    v7 = 4;
  }
  else {
    if (v53 == nullptr) {
      goto LABEL_13;
    }
    v7 = 5;
  }
  ((void (*)(__int64 (***)(), __int64))(*v2)[v7])(v2, a2);
LABEL_13:
  if (v49 == v48) {
    v8 = 32;
    goto LABEL_17;
  }
  if (v49 != nullptr) {
    v8 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*, __int64))(*v49 + v8))(v49, a2);
  }
  v9 = v54;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4970,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4970) != 0) {
    GameData_21f4968 = (__int64)&GameData_1ade171;
    GameData_21f4960 = game_HashString(&GameData_1ade171);
    __cxa_guard_release(&GameData_21f4970);
  }
  v10 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f4960);
    if (v11 != 0) {
      v10 = *(_DWORD*)(v11 + 32);
    }
    else {
      v10 = 0;
    }
  }
  v12 = GameData_212c790;
  if (v9 >= v10) {
    v13 = 0;
  }
  else {
    v13 = 128;
  }
  v14 = *(_QWORD*)(*GameData_212c790 + 8);
  v15 = *(_DWORD*)(v14 + 56);
  v16 = *(__int64**)(v14 + 8);
  v17 = *(__int64**)(v14 + 16);
  if ((v15 & 0x80000000) == 0) {
    while (v16 != v17) {
      v19 = (__int64*)*v16++;
      v18 = v19;
      if (*((_DWORD*)v19 + 21) == v15) {
        goto LABEL_33;
      }
    }
  LABEL_32:
    v18 = nullptr;
    goto LABEL_33;
  }
  if (v16 == v17) {
    goto LABEL_32;
  }
  while (1) {
    v18 = (__int64*)*v16;
    if (*(_QWORD*)(*v16 + 96) == 0 && v18[69] == 0) {
      break;
    }
    if (++v16 == v17) {
      goto LABEL_32;
    }
  }
LABEL_33:
  v20 = *((_DWORD*)v18 + 135);
  v21 = __OFSUB__(v20, 1);
  v22 = (unsigned int)(v20 - 1);
  if (((v22 & 0x80000000) != 0LL) == v21) {
    v23 = v18[3];
    v24 = v18[4] - v23;
    v25 = (__int64*)(v23 + 8LL * (unsigned int)v22);
    if (v22 < v24 >> 3) {
      v18 = v25;
    }
  }
  v26 = *v18;
  v51 = 0;
  v52 = nullptr;
  v50 = nullptr;
  BanquetManager_96a680(*(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL) + 16LL,
                        v26, &v50);
  v27 = v50;
  v28 = (__int64 (**)())v51;
  if (v50 == (__int64 (**)())v51) {
    v32 = v13 | 0x2000;
  }
  else {
    v29 = 0;
    do {
      v31 = *v27;
      if ((game_UnitItemList_HasStockUses((char*)*v27 + 828) & 1) != 0) {
        v29 = 1;
      }
      else {
        v30 = *((__int16*)v31 + 246);
        LOBYTE(v48[0]) = 0;
        v29 |= (int)game_Unit_GetParam(v31, v48, 1) > v30;
      }
      ++v27;
    } while (v27 != v28);
    if ((v29 & 1) != 0) {
      v32 = v13;
    }
    else {
      v32 = v13 | 0x2000;
    }
  }
  if (GameData_21f1618 == 0) {
    goto LABEL_91;
  }
  v33 = game_821090(8);
  if (game_GameModeData_instance_ != 0 &&
      (v34 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v33)) != 0) {
    if (*(int*)(v34 + 32) <= 0) {
      v35 = v32 | 0x4001;
    }
    else {
      v35 = v32;
    }
  }
  else {
    v35 = v32 | 0x4001;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
        0) {
      v35 |= 0x4002u;
    }
  }
  else {
    v35 |= 0x4002u;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 52) != 0) {
    v32 = v35 | 4;
  }
  else {
    v32 = v35;
  }
  if (*(_BYTE*)(v26 + 176) != 3 || (*(_BYTE*)(v26 + 112) & 1) != 0 ||
      (unsigned __int8)Impl_13261c0(v26) != 7) {
    v32 |= 0x4008u;
  }
  if ((*(_BYTE*)(v26 + 178) & 4) != 0) {
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_81;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v32 |= 0x4020u;
    }
  LABEL_75:
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v36 = *(__int64***)(GameData_22416b0 + 8);
      v37 = *v36;
      v38 = v36[1];
      if (v37 != v38) {
        while (1) {
          v39 = *v37++;
          if (*(_QWORD*)(*(_QWORD*)(v39 + 112) + 48LL) ==
              *(_QWORD*)(v26 + 120)) {
            break;
          }
          if (v37 == v38) {
            goto LABEL_81;
          }
        }
        v32 |= 0x4010u;
      }
    }
    goto LABEL_81;
  }
  if (game_GameModeData_instance_ != 0) {
    goto LABEL_75;
  }
LABEL_81:
  v40 = *(_QWORD*)(*v12 + 8);
  v41 = *(_QWORD**)(v40 + 8);
  v42 = *(_QWORD**)(v40 + 16);
  while (v41 != v42) {
    v43 = (_QWORD*)*v41;
    if (*(_QWORD*)*v41 == v26) {
      v44 = v43[12];
      if (v44 != 0 && (unsigned int)*(unsigned __int8*)(v44 + 32) - 3 < 2) {
        LODWORD(v42) = (v43[68] & 8) != 0;
        v45 = 1;
        goto LABEL_89;
      }
    }
    ++v41;
  }
  v45 = 0;
LABEL_89:
  if ((v45 & (unsigned int)v42) != 0) {
    v32 |= 0x4400u;
  }
LABEL_91:
  if (v50 != nullptr) {
    v51 = (__int64)v50;
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v46);
  }
  return v32;
}

__int64 GmapSituation_14d7700()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64* v21;
  int v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64** v39;
  __int64* v40;
  __int64* v41;
  __int64 v42;
  _QWORD v44[2];

  v0 = GameData_212c790;
  if (game_GameModeData_instance_ != 0 &&
      *(_BYTE*)(game_GameModeData_instance_ + 15) == 1) {
    v44[1] = &GameData_1a8ad12;
    v44[0] = game_HashString(&GameData_1a8ad12);
    if (game_GameModeData_instance_ == 0 ||
        (v1 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), v44)) == 0 ||
        *(_DWORD*)(v1 + 32) == 0) {
      v14 = 1;
      goto LABEL_24;
    }
  }
  v2 = *(_QWORD*)(*v0 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        goto LABEL_13;
      }
    }
  }
  else {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_13;
      }
    }
  }
  v6 = 0;
LABEL_13:
  v8 = *(_DWORD*)(v6 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v6 + 24);
    v12 = *(_QWORD*)(v6 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v6 = v13;
    }
  }
  if ((Impl_13287c0(*(_QWORD*)v6) & 1) != 0) {
    v14 = 0;
  }
  else {
    v14 = 16392;
  }
LABEL_24:
  if (game_gmap_GmapClock_instance_ != 0) {
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
        0) {
      v14 |= 0x4002u;
    }
  }
  else {
    v14 |= 0x4002u;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 52) != 0) {
    v15 = v14 | 0x4004;
  }
  else {
    v15 = v14;
  }
  v16 = *(_QWORD*)(*v0 + 8);
  v17 = *(_DWORD*)(v16 + 56);
  v18 = *(__int64**)(v16 + 8);
  v19 = *(__int64**)(v16 + 16);
  if (v17 < 0) {
    for (; v18 != v19; ++v18) {
      v20 = (__int64*)*v18;
      if (*(_QWORD*)(*v18 + 96) == 0 && v20[69] == 0) {
        goto LABEL_39;
      }
    }
  }
  else {
    while (v18 != v19) {
      v21 = (__int64*)*v18++;
      v20 = v21;
      if (*((_DWORD*)v21 + 21) == v17) {
        goto LABEL_39;
      }
    }
  }
  v20 = nullptr;
LABEL_39:
  v22 = *((_DWORD*)v20 + 135);
  v9 = __OFSUB__(v22, 1);
  v23 = (unsigned int)(v22 - 1);
  if (((v23 & 0x80000000) != 0LL) == v9) {
    v24 = v20[3];
    v25 = v20[4] - v24;
    v26 = (__int64*)(v24 + 8LL * (unsigned int)v23);
    if (v23 < v25 >> 3) {
      v20 = v26;
    }
  }
  v27 = *v20;
  if ((unsigned __int8)Impl_13261c0(*v20) == 3) {
    v28 = v15;
  }
  else {
    v28 = v15 | 0x4008;
  }
  if ((*(_BYTE*)v27 & 1) != 0) {
    v29 = *(_QWORD*)(v27 + 16);
  }
  else {
    v29 = v27 + 1;
  }
  v30 = game_HashString(v29);
  if (v30 == 0) {
    goto LABEL_78;
  }
  v31 = *(_QWORD*)(*GameData_212ca48[0] + 96);
  if (v31 == 0 || *(_QWORD*)(*GameData_212ca48[0] + 112) == 0) {
    goto LABEL_78;
  }
  v33 = v31 - 1;
  if ((v31 & (v31 - 1)) != 0) {
    v34 = v30;
    if (v30 >= v31) {
      v34 = v30 % v31;
    }
  }
  else {
    v34 = v33 & v30;
  }
  v35 = *(_QWORD**)(*(_QWORD*)(*GameData_212ca48[0] + 88) + 8 * v34);
  if (v35 == nullptr || (v36 = (_QWORD*)*v35) == nullptr) {
  LABEL_78:
    v28 = v15 | 0x4008;
    goto LABEL_79;
  }
  if ((v31 & v33) == 0) {
    while (1) {
      v38 = v36[1];
      if (v38 == v30) {
        if (v36[2] == v30) {
          goto LABEL_77;
        }
      }
      else if ((v38 & v33) != v34) {
        goto LABEL_78;
      }
      v36 = (_QWORD*)*v36;
      if (v36 == nullptr) {
        goto LABEL_78;
      }
    }
  }
  while (1) {
    v37 = v36[1];
    if (v37 == v30) {
      break;
    }
    if (v37 >= v31) {
      v37 %= v31;
    }
    if (v37 != v34) {
      goto LABEL_78;
    }
  LABEL_66:
    v36 = (_QWORD*)*v36;
    if (v36 == nullptr) {
      goto LABEL_78;
    }
  }
  if (v36[2] != v30) {
    goto LABEL_66;
  }
LABEL_77:
  if (v36[3] == 0) {
    goto LABEL_78;
  }
LABEL_79:
  if ((*(_BYTE*)(v27 + 178) & 4) != 0) {
    if (game_GameModeData_instance_ != 0) {
      if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
        v28 |= 0x4020u;
      }
      goto LABEL_85;
    }
  }
  else {
    if (game_GameModeData_instance_ == 0) {
      return v28;
    }
  LABEL_85:
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v39 = *(__int64***)(*GameData_2130e60 + 8);
      v40 = *v39;
      v41 = v39[1];
      if (v40 != v41) {
        while (1) {
          v42 = *v40++;
          if (*(_QWORD*)(*(_QWORD*)(v42 + 112) + 48LL) ==
              *(_QWORD*)(v27 + 120)) {
            break;
          }
          if (v40 == v41) {
            return v28;
          }
        }
        v28 |= 0x4010u;
      }
    }
  }
  return v28;
}

__int64 GmapSituation_14d7ae0()
{
  int v0;
  __int64 v1;
  int v2;
  __int64** v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64** v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v35;
  __int64 v36;
  int* v37;
  __int64* v38;
  int v39;

  v0 = 16385;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v0 = 0;
    }
    else {
      v0 = 16385;
    }
  }
  v1 = *(_QWORD*)(*GameData_212c790 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64***)(v1 + 8);
  v4 = *(__int64***)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    if (v3 != v4) {
      v5 = v3;
      do {
        v7 = *v5++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v2) {
          goto LABEL_18;
        }
      } while (v5 != v4);
    }
  LABEL_17:
    v6 = nullptr;
    goto LABEL_18;
  }
  if (v3 == v4) {
    goto LABEL_17;
  }
  v8 = v3;
  while (1) {
    v6 = *v8;
    if ((*v8)[12] == 0 && v6[69] == 0) {
      break;
    }
    if (++v8 == v4) {
      goto LABEL_17;
    }
  }
LABEL_18:
  v9 = *((_DWORD*)v6 + 135);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = v6[3];
    v13 = v6[4] - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v11);
    if (v11 < v13 >> 3) {
      v6 = v14;
    }
  }
  v15 = *v6;
  if (game_GameModeData_instance_ != 0 && (*(_BYTE*)(v15 + 178) & 4) != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      v0 |= 0x4008u;
    }
  }
  else {
    v0 |= 0x4008u;
  }
  while (v3 != v4) {
    v16 = *v3;
    if (**v3 == v15) {
      v17 = v16[12];
      if (v17 != 0 && (unsigned int)*(unsigned __int8*)(v17 + 32) - 3 < 2) {
        LODWORD(v4) = (v16[68] & 8) != 0;
        v18 = 1;
        goto LABEL_33;
      }
    }
    ++v3;
  }
  v18 = 0;
LABEL_33:
  v19 = *(_QWORD*)(v15 + 280);
  if ((v18 & (unsigned int)v4) != 0) {
    v20 = v0 | 0x4400;
  }
  else {
    v20 = v0;
  }
  if (v19 == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v19 + 24LL))(v19) == 1 &&
          ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v15 + 280) + 112LL))(
               *(_QWORD*)(v15 + 280)) &
           1) != 0) {
    v21 = v20 | 0x4008;
  }
  else {
    v21 = v20 | 0x4008;
    if (*(_QWORD*)(v15 + 280) != 0) {
      v20 |= 0x4008u;
    }
  }
  v22 = Impl_1326560(v15);
  if (v22 != 0) {
    v23 = v22;
    if (*(_WORD*)(v22 + 32) != 0) {
      v24 = 0;
      v25 = (__int64*)game_TransporterConst_List_instance__ptr[0];
      v26 = GameData_212c878[0];
      v27 = GameData_212d7f0[0] + 2;
      do {
        v28 = *(_QWORD*)(v23 + 40);
        v35 = 0;
        v37 = *(int**)(v28 + 8 * v24);
        v36 = game_HashString(v37);
        UnitItem_6e8800(&v35, &v36);
        v29 = *v25;
        v30 = *v26;
        v39 = 0;
        v31 = *(_QWORD*)(v29 + 8);
        v32 = *(_QWORD*)(*(_QWORD*)(v30 + 64) + 8LL * (unsigned __int16)v35);
        v36 = (__int64)v27;
        v37 = &v39;
        v38 = &v36;
        game_TransporterConst_List_Impl_EachData(v31, v32, &v36);
        if (v38 == &v36) {
          v33 = 32;
        }
        else {
          if (v38 == nullptr) {
            goto LABEL_50;
          }
          v33 = 40;
        }
        (*(void (**)(__int64))(*v38 + v33))((__int64)v38);
      LABEL_50:
        if (v39 < *(unsigned __int8*)(*(_QWORD*)(v23 + 56) + v24)) {
          return v20 | 0x80;
        }
        ++v24;
      } while (v24 < *(unsigned __int16*)(v23 + 32));
    }
    return v20;
  }
  return v21;
}

__int64 game_gmap_GmapSituation_CalcDestroyMiasma()
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
  __int64** v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  int v19;
  __int64 v20;
  _QWORD v22[4];
  _QWORD* v23;

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
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (v13 = *(__int64***)(GameData_22416b0 + 8), v14 = *v13, v15 = v13[1],
       v14 != v15)) {
    while (1) {
      v17 = *v14++;
      v16 = v17;
      if (*(_QWORD*)(*(_QWORD*)(v17 + 112) + 48LL) == *(_QWORD*)(v12 + 120)) {
        break;
      }
      if (v14 == v15) {
        v16 = 0;
        break;
      }
    }
    if (v16 != 0) {
      v18 = 0;
    }
    else {
      v18 = 16392;
    }
  }
  else {
    v18 = 16392;
  }
  v22[0] = GameData_2047128;
  v23 = v22;
  v19 = game_gmap_TroopMgr_CountTroop_134e600(v12, v22);
  if (v23 == v22) {
    v20 = 32;
  }
  else {
    if (v23 == nullptr) {
      goto LABEL_30;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v23 + v20))((__int64)v23);
LABEL_30:
  if (v19 != 0) {
    return v18 | 0x4400;
  }
  else {
    return v18;
  }
}

__int64 GmapSituation_14d7f60()
{
  int v0;
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned int* v7;
  unsigned int* v8;
  int v9;
  unsigned int v11;

  v0 = 16385;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v0 = 0;
    }
    else {
      v0 = 16385;
    }
  }
  if (!game_CorpsManager_GetEmptyIndex()) {
    v0 |= 0x800u;
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    while (v3 != v4) {
      v6 = *v3++;
      v5 = v6;
      if (*(_DWORD*)(v6 + 84) == v2) {
        goto LABEL_14;
      }
    }
  LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  if (v3 == v4) {
    goto LABEL_13;
  }
  while (1) {
    v5 = *v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v7 = *(unsigned int**)v5;
  v8 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  v9 = v0 | 0x4008;
  if (v7 == v8) {
    v9 = v0;
  }
  if ((*(_QWORD*)(v5 + 96) | *(_QWORD*)(v5 + 552)) != 0 ||
      game_GameModeData_instance_ == 0) {
    v11 = v9 | 0x4200;
  }
  else if (*(int*)(v5 + 84) < 0 &&
           *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v11 = v9;
  }
  else {
    v11 = v9 | 0x4200;
  }
  if ((game_gmap_TroopMgr_CanCreateCorps() & 1) != 0) {
    return v11;
  }
  else {
    return v11 | 0x40;
  }
}

__int64 GmapSituation_14d80a0(__int64 a1, __int64 a2)
{
  _BOOL4 v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64* v10;
  bool v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;

  v2 = game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 3;
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = *v5++;
      v7 = v8;
      if (*(_DWORD*)(v8 + 84) == v4) {
        goto LABEL_11;
      }
    }
  LABEL_10:
    v7 = 0;
    goto LABEL_11;
  }
  if (v5 == v6) {
    goto LABEL_10;
  }
  while (1) {
    v7 = *v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_10;
    }
  }
LABEL_11:
  v9 = *(_DWORD*)(v7 + 540);
  v10 = (__int64*)v7;
  v11 = __OFSUB__(v9, 1);
  v12 = (unsigned int)(v9 - 1);
  if (((v12 & 0x80000000) != 0LL) == v11) {
    v13 = *(_QWORD*)(v7 + 24);
    v14 = *(_QWORD*)(v7 + 32) - v13;
    v15 = (__int64*)(v13 + 8LL * (unsigned int)v12);
    if (v12 >= v14 >> 3) {
      v10 = (__int64*)v7;
    }
    else {
      v10 = v15;
    }
  }
  v16 = *v10;
  v17 = game_gmap_SpotMgr_GetCurrentSpot(a1, a2);
  v18 = v2 | 8;
  if (v16 == v17) {
    v18 = v2;
  }
  if (*(int*)(v7 + 84) >= 0) {
    return v18;
  }
  else {
    return v18 | 0x200;
  }
}

__int64 game_gmap_GmapSituation_CalcExchangeCorps()
{
  _BOOL4 v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int* v14;
  int v15;
  __int64 v16;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;

  v0 = game_GameModeData_instance_ == 0 ||
       *(_DWORD*)(game_GameModeData_instance_ + 60) != 3;
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  v4 = *(_DWORD*)(v1 + 56);
  if ((v4 & 0x80000000) == 0) {
    while (v2 != v3) {
      v6 = *v2++;
      v5 = v6;
      if (*(_DWORD*)(v6 + 84) == v4) {
        goto LABEL_11;
      }
    }
  LABEL_10:
    v5 = 0;
    goto LABEL_11;
  }
  if (v2 == v3) {
    goto LABEL_10;
  }
  while (1) {
    v5 = *v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_10;
    }
  }
LABEL_11:
  v7 = *(int*)(v5 + 84) < 0 || v0;
  v8 = *(_DWORD*)(v5 + 540);
  v9 = __OFSUB__(v8, 1);
  v10 = (unsigned int)(v8 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v5 + 24);
    v12 = *(_QWORD*)(v5 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v5 = v13;
    }
  }
  v14 = *(unsigned int**)v5;
  v18_.v19 = v18_.v18;
  v18_.v18[0] = GameData_20471a8;
  v18_.v18[1] = v14;
  v15 = game_gmap_TroopMgr_CountPlayerTroop_134e7b0_alt1((__int64)v18_.v18);
  if (v18_.v19 == v18_.v18) {
    v16 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_26;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v16))((__int64)v18_.v19);
LABEL_26:
  if (v15 == 1) {
    if (v14 == game_gmap_SpotMgr_GetCurrentSpot_alt1()) {
      return v7;
    }
    else {
      return v7 | 0x200;
    }
  }
  else if (v15 != 0) {
    return v7;
  }
  else {
    return v7 | 0x200;
  }
}

__int64 game_gmap_GmapSituation_CalcDivideCorps()
{
  int v0;
  bool v1;
  __int64 v2;
  int v3;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  unsigned int v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v0 = 0x4000;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v0 = 0;
    }
    else {
      v0 = 0x4000;
    }
  }
  v1 = game_CorpsManager_GetEmptyIndex();
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  if (v3 < 0) {
    while (1) {
      v5 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
        break;
      }
      ++v4;
    }
    v9 = *(_DWORD*)(v5 + 84) >> 31;
  }
  else {
    v7 = *v4;
    v6 = v4 + 1;
    v5 = v7;
    if (*(_DWORD*)(v7 + 84) != v3) {
      do {
        v8 = *v6++;
        v5 = v8;
      } while (*(_DWORD*)(v8 + 84) != v3);
    }
    LOBYTE(v9) = 0;
  }
  v14_.v14[0] = GameData_2047228;
  v14_.v15 = v14_.v14;
  v10 = game_gmap_Troop_CountUnit(v5, (__int64)v14_.v14);
  if (v14_.v15 == v14_.v14) {
    v11 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_18;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v11))((__int64)v14_.v15);
LABEL_18:
  v12 = v0 | 0x800;
  if (v1) {
    v12 = v0;
  }
  if (((v10 < 2) | v9 & 1) != 0) {
    return v12 | 0x4200;
  }
  else {
    return v12;
  }
}

__int64 game_gmap_GmapSituation_CalcTalk()
{
  _BOOL4 v0;
  __int64 v1;
  int v2;
  __int64** v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64** v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  _BOOL4 v17;
  _BOOL4 v18;
  __int64** v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  _BOOL4 v33;
  _BOOL4 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  _BOOL4 v38;
  __int64 v39;
  __int64 v40;
  __int64 (*v41)(_QWORD);
  __int64 v42;
  _QWORD* v43;
  int v44;
  __int64 v45;
  unsigned int v46;
  int v47;
  __int64 v49;
  _BOOL4 v50;
  _QWORD v51[4];
  _QWORD* v52;

  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64***)(v1 + 8);
  v4 = *(__int64***)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    if (v3 != v4) {
      v5 = v3;
      do {
        v7 = *v5++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v2) {
          goto LABEL_14;
        }
      } while (v5 != v4);
    }
  LABEL_13:
    v6 = nullptr;
    goto LABEL_14;
  }
  if (v3 == v4) {
    goto LABEL_13;
  }
  v8 = v3;
  while (1) {
    v6 = *v8;
    if ((*v8)[12] == 0 && v6[69] == 0) {
      break;
    }
    if (++v8 == v4) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v9 = *((_DWORD*)v6 + 135);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = v6[3];
    v13 = v6[4] - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v11);
    if (v11 < v13 >> 3) {
      v6 = v14;
    }
  }
  v15 = *v6;
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v16 = 0;
  }
  else if (*(_BYTE*)(GameData_22416c0 + 52) == 2) {
    v16 = 0;
  }
  else {
    v16 = 16386;
  }
  if ((*(_BYTE*)(v15 + 178) & 4) != 0) {
    if (game_GameModeData_instance_ == 0) {
      v17 = false;
      v18 = false;
      goto LABEL_38;
    }
    v17 = *(_DWORD*)(game_GameModeData_instance_ + 60) == 3;
  LABEL_28:
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      v18 = false;
      goto LABEL_38;
    }
    v19 = *(__int64***)(GameData_22416b0 + 8);
    v20 = *v19;
    v21 = v19[1];
    if (v20 == v21) {
      v18 = false;
      goto LABEL_38;
    }
    do {
      v23 = *v20++;
      v22 = v23;
      if (*(_QWORD*)(*(_QWORD*)(v23 + 112) + 48LL) == *(_QWORD*)(v15 + 120)) {
        goto LABEL_33;
      }
    } while (v20 != v21);
    v22 = 0;
  LABEL_33:
    v18 = v22 != 0;
    goto LABEL_38;
  }
  v17 = false;
  v18 = false;
  if (game_GameModeData_instance_ != 0) {
    goto LABEL_28;
  }
LABEL_38:
  while (v3 != v4) {
    v24 = *v3;
    if (**v3 == v15) {
      v25 = v24[12];
      if (v25 != 0 && (unsigned int)*(unsigned __int8*)(v25 + 32) - 3 < 2) {
        v26 = 1;
        v0 = (v24[68] & 8) != 0;
        goto LABEL_44;
      }
    }
    ++v3;
  }
  v26 = 0;
LABEL_44:
  if ((unsigned __int8)Impl_13261c0(v15) == 1 &&
      (v27 = Impl_13262e0(v15)) != 0 &&
      (v28 = *(__int64**)(v27 + 24), v30 = *v28, v29 = v28[1], v30 != v29)) {
    v50 = v0;
    v49 = v29;
    while (2) {
      v31 = v26;
      v32 = v16;
      v33 = v18;
      v34 = v17;
      v35 = *(__int64**)(*(_QWORD*)v30 + 24LL);
      v36 = *v35;
      v37 = v35[1];
      v38 = v37 == *v35;
      if (v37 == *v35) {
      LABEL_80:
        v17 = v34;
        v18 = v33;
        v16 = v32;
        v26 = v31;
        v0 = v50;
      }
      else {
        while (1) {
          if (*(_QWORD*)v36 != 0) {
            v39 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v40 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48), v36);
              if (v40 != 0) {
                v41 = *(__int64 (**)(_QWORD))(v40 + 72);
                v42 = *(_QWORD*)(v40 + 80);
                v43 = (_QWORD*)(v40 + (v42 >> 1));
                if ((v42 & 1) != 0) {
                  v41 = *(__int64 (**)(_QWORD))((char*)v41 + *v43);
                }
                LOBYTE(v27) = v41(v43);
              }
              else {
                LOBYTE(v27) = 1;
              }
            }
            if (*(_BYTE*)(v36 + 16) != ((v39 == 0) | v27 & 1)) {
              break;
            }
          }
          v36 += 24;
          if (v36 == v37) {
            v38 = true;
            goto LABEL_80;
          }
        }
        v17 = v34;
        v18 = v33;
        v16 = v32;
        v26 = v31;
        v0 = v50;
        v30 += 8;
        if (v30 != v49) {
          continue;
        }
      }
      break;
    }
  }
  else {
    v38 = false;
  }
  v51[0] = GameData_20472a8;
  v52 = v51;
  v44 = game_gmap_TroopMgr_CountTroop_134e600(v15, v51);
  if (v52 == v51) {
    v45 = 32;
  }
  else {
    if (v52 == nullptr) {
      goto LABEL_67;
    }
    v45 = 40;
  }
  (*(void (**)(__int64))(*v52 + v45))((__int64)v52);
LABEL_67:
  v46 = v16 | 0x4020;
  if (!v17) {
    v46 = v16;
  }
  if (v18) {
    v46 |= 0x4010u;
  }
  if ((v26 & v0) != 0) {
    v46 |= 0x4400u;
  }
  v47 = v44 != 0 || v38;
  if (v47 != 0) {
    return v46;
  }
  else {
    return v46 | 0x4008;
  }
}

__int64 GmapSituation_14d8840()
{
  int v0;
  __int64 v1;
  int v2;
  __int64** v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64** v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64** v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned __int8 v29;
  __int64 v31;
  __int64 v32;

  v0 = 16386;
  if (game_gmap_GmapClock_instance_ != 0) {
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
        0) {
      v0 = 0;
    }
    else {
      v0 = 16386;
    }
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64***)(v1 + 8);
  v4 = *(__int64***)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    if (v3 != v4) {
      v5 = v3;
      do {
        v7 = *v5++;
        v6 = v7;
        if (*((_DWORD*)v7 + 21) == v2) {
          goto LABEL_18;
        }
      } while (v5 != v4);
    }
  LABEL_17:
    v6 = nullptr;
    goto LABEL_18;
  }
  if (v3 == v4) {
    goto LABEL_17;
  }
  v8 = v3;
  while (1) {
    v6 = *v8;
    if ((*v8)[12] == 0 && v6[69] == 0) {
      break;
    }
    if (++v8 == v4) {
      goto LABEL_17;
    }
  }
LABEL_18:
  v9 = *((_DWORD*)v6 + 135);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = v6[3];
    v13 = v6[4] - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v11);
    if (v11 < v13 >> 3) {
      v6 = v14;
    }
  }
  v15 = *v6;
  if ((*(_BYTE*)(*v6 + 178) & 4) != 0) {
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_34;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v0 |= 0x4020u;
    }
  }
  else if (game_GameModeData_instance_ == 0) {
    goto LABEL_34;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v16 = *(__int64***)(GameData_22416b0 + 8);
    v17 = *v16;
    v18 = v16[1];
    while (v17 != v18) {
      v19 = *v17++;
      if (*(_QWORD*)(*(_QWORD*)(v19 + 112) + 48LL) == *(_QWORD*)(v15 + 120)) {
        v0 |= 0x4010u;
        break;
      }
    }
  }
LABEL_34:
  while (v3 != v4) {
    v20 = *v3;
    if (**v3 == v15) {
      v21 = v20[12];
      if (v21 != 0 && (unsigned int)*(unsigned __int8*)(v21 + 32) - 3 < 2) {
        LODWORD(v4) = (v20[68] & 8) != 0;
        v22 = 1;
        goto LABEL_40;
      }
    }
    ++v3;
  }
  v22 = 0;
LABEL_40:
  if ((v22 & (unsigned int)v4) != 0) {
    v23 = v0 | 0x4400;
  }
  else {
    v23 = v0;
  }
  v24 = Impl_13262e0(v15);
  if (v24 != 0) {
    v25 = *(unsigned __int16*)(v24 + 32);
    v26 = v24;
    if (*(_WORD*)(v24 + 32) != 0) {
      v27 = *(__int64**)(v24 + 40);
      while (1) {
        v28 = *v27++;
        v29 = GameRoutine_8a1ae0(v28);
        if (v29 <= 4u && ((1 << v29) & 0x16) != 0) {
          break;
        }
        if (--v25 == 0) {
          goto LABEL_52;
        }
      }
    }
    else {
    LABEL_52:
      if (*(_BYTE*)(v26 + 48) != 1 ||
          (v31 = game_821090(9), game_GameModeData_instance_ == 0) ||
          (v32 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), v31)) == 0 ||
          *(int*)(v32 + 32) <= 0) {
        if (*(_WORD*)(v26 + 50) == 0) {
          v23 |= 0x4008u;
        }
      }
    }
  }
  else {
    v23 |= 0x4008u;
  }
  return v23;
}

__int64 GmapSituation_14d8ae0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  unsigned int v9;
  bool v10;
  __int64* v11;
  __int64* v12;
  int v13;
  bool v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  int v21;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  v3 = *(__int64**)(v0 + 16);
  if ((v1 & 0x80000000) == 0) {
    if (v2 != v3) {
      v4 = v2;
      do {
        v6 = *v4++;
        v5 = v6;
        if (*(_DWORD*)(v6 + 84) == v1) {
          goto LABEL_14;
        }
      } while (v4 != v3);
    }
  LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  if (v2 == v3) {
    goto LABEL_13;
  }
  v7 = v2;
  while (1) {
    v5 = *v7;
    if (*(_QWORD*)(*v7 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v7 == v3) {
      goto LABEL_13;
    }
  }
LABEL_14:
  if ((*(_QWORD*)(v5 + 96) | *(_QWORD*)(v5 + 552)) != 0 ||
      game_GameModeData_instance_ == 0) {
    v9 = 0;
    v10 = v2 == v3;
    if (v1 < 0) {
      goto LABEL_23;
    }
  }
  else {
    if (*(int*)(v5 + 84) < 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v9 = 16896;
    }
    else {
      v9 = 0;
    }
    v10 = v2 == v3;
    if (v1 < 0) {
    LABEL_23:
      if (!v10) {
        do {
          v11 = (__int64*)*v2;
          if (*(_QWORD*)(*v2 + 96) == 0 && v11[69] == 0) {
            goto LABEL_35;
          }
          ++v2;
        } while (v2 != v3);
      }
    LABEL_34:
      v11 = nullptr;
      goto LABEL_35;
    }
  }
  if (v10) {
    goto LABEL_34;
  }
  while (1) {
    v12 = (__int64*)*v2++;
    v11 = v12;
    if (*((_DWORD*)v12 + 21) == v1) {
      break;
    }
    if (v2 == v3) {
      goto LABEL_34;
    }
  }
LABEL_35:
  v13 = *((_DWORD*)v11 + 135);
  v14 = __OFSUB__(v13, 1);
  v15 = (unsigned int)(v13 - 1);
  if (((v15 & 0x80000000) != 0LL) == v14) {
    v16 = v11[3];
    v17 = v11[4] - v16;
    v18 = (__int64*)(v16 + 8LL * (unsigned int)v15);
    if (v15 < v17 >> 3) {
      v11 = v18;
    }
  }
  v19 = *v11;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      (v20 = *(_QWORD*)(v19 + 120)) != GameRoutine_ae0560()) {
    if ((Impl_1328300(v19) & 1) != 0) {
      if ((Impl_1328460(v19) & 1) == 0) {
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          if ((unsigned __int8)Impl_13261c0(v19) != 0) {
            v21 = 1;
          }
          else {
            v21 = 16385;
          }
          v9 |= v21;
          if ((*(_BYTE*)(v19 + 178) & 4) == 0) {
            goto LABEL_58;
          }
        LABEL_53:
          if (game_GameModeData_instance_ != 0 &&
              *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
            v9 |= 0x4020u;
          }
          goto LABEL_58;
        }
        v9 |= 0x4001u;
        if ((*(_BYTE*)(v19 + 178) & 4) != 0) {
          goto LABEL_53;
        }
      LABEL_58:
        if (game_gmap_GmapClock_instance_ != 0) {
          if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                  *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
              0) {
            v9 |= 0x4001u;
          }
        }
        else {
          v9 |= 0x4001u;
        }
        return v9;
      }
    }
    else if ((Impl_132a360(v19) & 1) == 0) {
      v9 |= 0x4008u;
    }
    if ((*(_BYTE*)(v19 + 178) & 4) != 0) {
      goto LABEL_53;
    }
    goto LABEL_58;
  }
  return v9;
}

__int64 game_gmap_GmapSituation_CalcCallAnimal()
{
  _BOOL4 v0;
  unsigned __int8 v1;
  unsigned __int8 v2;
  int v3;
  int v4;
  int v7;
  __int64* v8;
  int v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  int v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  char v24;
  int v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  unsigned __int8* v30;
  int v31;
  __int64** v32;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  _BOOL4 v37;
  __int64 v38;
  _QWORD* v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64 v42;
  int v43;
  _BOOL4 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  int v48;
  _BOOL4 v49;
  int v50;
  int v51;
  char v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned int v58;
  __int64 v60;
  __int64 v61;
  unsigned int v62;
  _BOOL4 v63;
  _QWORD v64[4];
  _QWORD* v65;
  int v66;
  _QWORD v67[4];
  _QWORD* v68;

  v1 = game_gmap_1536e70_alt1(0);
  v2 = SpotAttachmentAnimal_14d28c0();
  v3 = game_gmap_GmapClock_instance_;
  if ((v1 & v2 & 1) != 0) {
    v4 = 0;
  }
  else {
    v4 = 16385;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v3 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  }
  v7 = *(unsigned __int8*)(*GameData_2130e70 + 52);
  v8 = GameData_212c790;
  if (v7 == 3) {
    v3 = 1;
  }
  if (v3 == 0) {
    v4 |= 0x4002u;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 52) == 0 || v7 == 3) {
    v10 = v4;
  }
  else {
    v10 = v4 | 4;
  }
  v11 = *(_QWORD*)(*GameData_212c790 + 8);
  v12 = *(_DWORD*)(v11 + 56);
  v13 = *(__int64**)(v11 + 8);
  v14 = *(__int64**)(v11 + 16);
  if ((v12 & 0x80000000) == 0) {
    while (v13 != v14) {
      v16 = (__int64*)*v13++;
      v15 = v16;
      if (*((_DWORD*)v16 + 21) == v12) {
        goto LABEL_31;
      }
    }
  LABEL_30:
    v15 = nullptr;
    goto LABEL_31;
  }
  if (v13 == v14) {
    goto LABEL_30;
  }
  while (1) {
    v15 = (__int64*)*v13;
    if (*(_QWORD*)(*v13 + 96) == 0 && v15[69] == 0) {
      break;
    }
    if (++v13 == v14) {
      goto LABEL_30;
    }
  }
LABEL_31:
  v17 = *((_DWORD*)v15 + 135);
  v18 = __OFSUB__(v17, 1);
  v19 = (unsigned int)(v17 - 1);
  if (((v19 & 0x80000000) != 0LL) == v18) {
    v20 = v15[3];
    v21 = v15[4] - v20;
    v22 = (__int64*)(v20 + 8LL * (unsigned int)v19);
    if (v19 < v21 >> 3) {
      v15 = v22;
    }
  }
  v23 = *v15;
  v24 = SpotAttachmentAnimal_14d29e0(*v15);
  v25 = game_gmap_SpotMgr_CountSpotAttachment(0);
  v26 = game_gmap_SpotAttachmentAnimal_GetData();
  if (*(_WORD*)(v26 + 88) != 0 &&
      (v27 = v26, v28 = GameRoutine_715440(),
       v29 = *(unsigned __int16*)(v27 + 72), *(_WORD*)(v27 + 72) != 0) &&
      (v30 = *(unsigned __int8**)(v27 + 80), v28 >= *v30)) {
    v60 = v29 - 1;
    v61 = 1;
    while (v29 != v61) {
      v62 = v30[v61++];
      if (v28 < v62) {
        v60 = v61 - 2;
        break;
      }
    }
    v31 = *(unsigned __int8*)(*(_QWORD*)(v27 + 96) + v60);
  }
  else {
    v31 = 0;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (v32 = *(__int64***)(*GameData_2130e60 + 8), v33 = *v32, v34 = v32[1],
       v33 != v34)) {
    while (1) {
      v36 = *v33++;
      v35 = v36;
      if (*(_QWORD*)(*(_QWORD*)(v36 + 112) + 48LL) == *(_QWORD*)(v23 + 120)) {
        break;
      }
      if (v33 == v34) {
        v35 = 0;
        break;
      }
    }
    v37 = v35 != 0;
  }
  else {
    v37 = false;
  }
  v38 = *(_QWORD*)(*v8 + 8);
  v39 = *(_QWORD**)(v38 + 8);
  v40 = *(_QWORD**)(v38 + 16);
  while (v39 != v40) {
    v41 = (_QWORD*)*v39;
    if (*(_QWORD*)*v39 == v23) {
      v42 = v41[12];
      if (v42 != 0 && (unsigned int)*(unsigned __int8*)(v42 + 32) - 3 < 2) {
        v43 = 1;
        v0 = (v41[68] & 8) != 0;
        v44 = false;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_61;
        }
        goto LABEL_59;
      }
    }
    ++v39;
  }
  v43 = 0;
  v44 = false;
  if (game_GameModeData_instance_ != 0) {
  LABEL_59:
    if ((*(_BYTE*)(v23 + 178) & 4) != 0) {
      v44 = *(_DWORD*)(game_GameModeData_instance_ + 60) == 3;
    }
  }
LABEL_61:
  v66 = 0;
  v64[0] = GameData_2047328;
  v64[1] = &v66;
  v45 = v67;
  v65 = v64;
  v46 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v67[2] = v64;
  v68 = v67;
  v47 = *(unsigned int*)(v46 + 80);
  v67[0] = GameData_212d7f8[0] + 2;
  v67[1] = 20;
  if ((int)v47 < 1) {
    goto LABEL_71;
  }
  v63 = v44;
  v48 = v43;
  v49 = v37;
  v50 = v10;
  v51 = v25;
  v52 = v24;
  v53 = 0;
  v54 = 12 * v47;
  do {
    v55 = *(_QWORD*)(v46 + 8) + v53;
    if (*(_WORD*)(v55 + 2) != 0) {
      if (v68 == nullptr) {
        GameRoutine_60a310_alt2(0, v55);
      }
      (*(void (**)(_QWORD*))(*v68 + 48LL))(v68);
    }
    v53 += 12;
  } while (v54 != v53);
  v45 = v68;
  if (v68 == v67) {
    v24 = v52;
    v25 = v51;
    v10 = v50;
    v37 = v49;
    v43 = v48;
    v44 = v63;
  LABEL_71:
    v56 = 32;
    goto LABEL_72;
  }
  v24 = v52;
  v25 = v51;
  v10 = v50;
  v37 = v49;
  v43 = v48;
  v44 = v63;
  if (v68 != nullptr) {
    v56 = 40;
  LABEL_72:
    (*(void (**)(__int64))(*v45 + v56))((__int64)v45);
  }
  if (v65 == v64) {
    v57 = 32;
  }
  else {
    if (v65 == nullptr) {
      goto LABEL_78;
    }
    v57 = 40;
  }
  (*(void (**)(__int64))(*v65 + v57))((__int64)v65);
LABEL_78:
  v58 = v10 | 0x4008;
  if ((v24 & 1) != 0) {
    v58 = v10;
  }
  if (v25 >= v31) {
    v58 |= 0x2000u;
  }
  if (v37) {
    v58 |= 0x4010u;
  }
  if ((v43 & v0) != 0) {
    v58 |= 0x4400u;
  }
  if (v44) {
    v58 |= 0x4020u;
  }
  if (v66 >= 1) {
    return v58;
  }
  else {
    return v58 | 0x80;
  }
}

__int64 GmapSituation_14d91e0()
{
  unsigned int v0;
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    v0 = 0;
  }
  else if (*(_BYTE*)(GameData_22416c0 + 52) == 4) {
    v0 = 0;
  }
  else {
    v0 = 16386;
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    while (v3 != v4) {
      v6 = (__int64*)*v3++;
      v5 = v6;
      if (*((_DWORD*)v6 + 21) == v2) {
        goto LABEL_14;
      }
    }
  LABEL_13:
    v5 = nullptr;
    goto LABEL_14;
  }
  if (v3 == v4) {
    goto LABEL_13;
  }
  while (1) {
    v5 = (__int64*)*v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && v5[69] == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_13;
    }
  }
LABEL_14:
  v7 = *((_DWORD*)v5 + 135);
  v8 = __OFSUB__(v7, 1);
  v9 = (unsigned int)(v7 - 1);
  if (((v9 & 0x80000000) != 0LL) == v8) {
    v10 = v5[3];
    v11 = v5[4] - v10;
    v12 = (__int64*)(v10 + 8LL * (unsigned int)v9);
    if (v9 < v11 >> 3) {
      v5 = v12;
    }
  }
  v13 = *v5;
  v14 = *(_QWORD*)(*v5 + 280);
  if (v14 == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14) == 1 &&
          ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v13 + 280) + 112LL))(
               *(_QWORD*)(v13 + 280)) &
           1) != 0 ||
      (v15 = *(_QWORD*)(v13 + 280)) == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15) != 0 ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v15 + 48LL))(v15) & 1) == 0) {
    v0 |= 0x4008u;
  }
  return v0;
}

__int64 game_gmap_GmapSituation_CalcMakeFarm()
{
  unsigned __int8 v0;
  unsigned __int8 v1;
  int v2;
  int v3;
  int v6;
  __int64* v7;
  int v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  bool v29;
  int v30;
  __int64 v31;
  unsigned __int8* v32;
  int v33;
  __int64** v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  _BOOL4 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  _QWORD* v43;
  __int64 v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int v53;
  __int64 v55;
  unsigned int v56;
  _QWORD v57[4];
  _QWORD* v58;
  _QWORD v59[4];
  _QWORD* v60;
  int v61;

  v0 = game_gmap_1536e70_alt1(1);
  v1 = SpotAttachmentFarm_1515d80();
  v2 = game_gmap_GmapClock_instance_;
  if ((v0 & v1 & 1) != 0) {
    v3 = 0;
  }
  else {
    v3 = 16385;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  }
  v6 = *(unsigned __int8*)(*GameData_2130e70 + 52);
  v7 = GameData_212c790;
  if (v6 == 5) {
    v2 = 1;
  }
  if (v2 == 0) {
    v3 |= 0x4002u;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 52) == 0 || v6 == 5) {
    v9 = v3;
  }
  else {
    v9 = v3 | 4;
  }
  v10 = *(_QWORD*)(*GameData_212c790 + 8);
  v11 = *(_DWORD*)(v10 + 56);
  v12 = *(__int64**)(v10 + 8);
  v13 = *(__int64**)(v10 + 16);
  if ((v11 & 0x80000000) == 0) {
    while (v12 != v13) {
      v15 = (__int64*)*v12++;
      v14 = v15;
      if (*((_DWORD*)v15 + 21) == v11) {
        goto LABEL_31;
      }
    }
  LABEL_30:
    v14 = nullptr;
    goto LABEL_31;
  }
  if (v12 == v13) {
    goto LABEL_30;
  }
  while (1) {
    v14 = (__int64*)*v12;
    if (*(_QWORD*)(*v12 + 96) == 0 && v14[69] == 0) {
      break;
    }
    if (++v12 == v13) {
      goto LABEL_30;
    }
  }
LABEL_31:
  v16 = *((_DWORD*)v14 + 135);
  v17 = __OFSUB__(v16, 1);
  v18 = (unsigned int)(v16 - 1);
  if (((v18 & 0x80000000) != 0LL) == v17) {
    v19 = v14[3];
    v20 = v14[4] - v19;
    v21 = (__int64*)(v19 + 8LL * (unsigned int)v18);
    if (v18 < v20 >> 3) {
      v14 = v21;
    }
  }
  v22 = *v14;
  if ((SpotAttachmentFarm_1516610(*v14) & 1) != 0) {
    v23 = v9;
  }
  else {
    v23 = v9 | 0x4008;
  }
  v24 = game_gmap_SpotMgr_CountSpotAttachment(1);
  v25 = game_gmap_SpotAttachmentFarm_GetGrowthData();
  v27 = v25;
  if (game_GameModeData_instance_ == 0 ||
      ((v28 = *(unsigned __int8*)(v25 + 88),
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3)
           ? (v29 = v28 == 0)
           : (v29 = true),
       v29)) {
    v30 = GameRoutine_715440();
    v31 = *(unsigned __int16*)(v27 + 56);
    if (*(_WORD*)(v27 + 56) != 0 &&
        (v32 = *(unsigned __int8**)(v27 + 64), v30 >= *v32)) {
      v33 = v31 - 1;
      v55 = 1;
      while (v31 != v55) {
        v56 = v32[v55++];
        if (v30 < v56) {
          v33 = v55 - 2;
          break;
        }
      }
    }
    else {
      v33 = 0;
    }
    v28 = *(unsigned __int8*)(*(_QWORD*)(v27 + 80) + v33);
  }
  if (v24 <= v28) {
    if (v24 == v28 && (unsigned __int8)Impl_13261c0(v22) != 14) {
      v23 |= 0x2000u;
    }
  }
  else {
    v23 |= 0x2000u;
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (v34 = *(__int64***)(*GameData_2130e60 + 8), v35 = *v34, v36 = v34[1],
       v35 != v36)) {
    while (1) {
      v38 = *v35++;
      v37 = v38;
      if (*(_QWORD*)(*(_QWORD*)(v38 + 112) + 48LL) == *(_QWORD*)(v22 + 120)) {
        break;
      }
      if (v35 == v36) {
        v37 = 0;
        break;
      }
    }
    v39 = v37 != 0;
  }
  else {
    v39 = false;
  }
  v40 = *(_QWORD*)(*v7 + 8);
  v41 = *(_QWORD**)(v40 + 8);
  v42 = *(_QWORD**)(v40 + 16);
  while (v41 != v42) {
    v43 = (_QWORD*)*v41;
    if (*(_QWORD*)*v41 == v22) {
      v44 = v43[12];
      if (v44 != 0 && (unsigned int)*(unsigned __int8*)(v44 + 32) - 3 < 2) {
        v45 = 1;
        LODWORD(v27) = (v43[68] & 8) != 0;
        goto LABEL_72;
      }
    }
    ++v41;
  }
  v45 = 0;
LABEL_72:
  v61 = 0;
  v57[0] = GameData_20473a8;
  v57[1] = &v61;
  v46 = v59;
  v58 = v57;
  v47 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v59[2] = v57;
  v60 = v59;
  v48 = *(unsigned int*)(v47 + 80);
  v59[0] = GameData_212d7f8[0] + 2;
  v59[1] = 20;
  if ((int)v48 < 1) {
    goto LABEL_81;
  }
  v49 = 0;
  v50 = 12 * v48;
  do {
    v26 = *(_QWORD*)(v47 + 8) + v49;
    if (*(_WORD*)(v26 + 2) != 0) {
      if (v60 == nullptr) {
        GameRoutine_60a310_alt2(0, v26);
      }
      (*(void (**)(_QWORD*))(*v60 + 48LL))(v60);
    }
    v49 += 12;
  } while (v50 != v49);
  v46 = v60;
  if (v60 == v59) {
  LABEL_81:
    v51 = 32;
  }
  else {
    if (v60 == nullptr) {
      goto LABEL_83;
    }
    v51 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v46 + v51))(v46, v26);
LABEL_83:
  if (v58 == v57) {
    v52 = 32;
  }
  else {
    if (v58 == nullptr) {
      goto LABEL_88;
    }
    v52 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v58 + v52))(v58, v26);
LABEL_88:
  v53 = v23 | 0x4010;
  if (!v39) {
    v53 = v23;
  }
  if ((v45 & (unsigned int)v27) != 0) {
    v53 |= 0x4400u;
  }
  if (v61 >= 1) {
    return v53;
  }
  else {
    return v53 | 0x80;
  }
}

__int64 game_gmap_GmapSituation_CalcBoostFarm()
{
  int v0;
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  char v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;
  int v34;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if ((SpotAttachmentFarm_1515d80_alt1() & 1) != 0) {
    v0 = 0;
  }
  else {
    v0 = 16896;
  }
  if ((game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
      *(_BYTE*)(*GameData_2130e70 + 52) != 6) {
    v0 |= 0x4002u;
  }
  if ((game_gmap_1536e70(1) & 1) == 0) {
    v0 |= 0x4001u;
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    while (v3 != v4) {
      v6 = (__int64*)*v3++;
      v5 = v6;
      if (*((_DWORD*)v6 + 21) == v2) {
        goto LABEL_17;
      }
    }
  LABEL_16:
    v5 = nullptr;
    goto LABEL_17;
  }
  if (v3 == v4) {
    goto LABEL_16;
  }
  while (1) {
    v5 = (__int64*)*v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && v5[69] == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_16;
    }
  }
LABEL_17:
  v7 = *((_DWORD*)v5 + 135);
  v8 = __OFSUB__(v7, 1);
  v9 = (unsigned int)(v7 - 1);
  if (((v9 & 0x80000000) != 0LL) == v8) {
    v10 = v5[3];
    v11 = v5[4] - v10;
    v12 = (__int64*)(v10 + 8LL * (unsigned int)v9);
    if (v9 < v11 >> 3) {
      v5 = v12;
    }
  }
  v13 = *v5;
  v14 = *(_QWORD*)(*v5 + 280);
  if (v14 == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14) == 1 &&
          ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v13 + 280) + 112LL))(
               *(_QWORD*)(v13 + 280)) &
           1) != 0) {
    return v0 | 0x4008u;
  }
  v15 = *(_QWORD*)(v13 + 280);
  if (v15 == 0) {
    return v0 | 0x4008u;
  }
  if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15) == 1) {
    v16 = v0;
  }
  else {
    v16 = v0 | 0x4008;
  }
  v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 144LL))(v15),
  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v34 = 0;
  v30_.v30[2] = v15;
  v20 = v17;
  v21 = v32_.v32;
  v30_.v30[0] = GameData_2047428;
  v30_.v30[1] = &v34;
  v30_.v31 = v30_.v30;
  v22 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v32_.v32[2] = v30_.v30;
  v32_.v33 = v32_.v32;
  v23 = *(unsigned int*)(v22 + 80);
  v32_.v32[0] = GameData_1fa80c0;
  v32_.v32[1] = 22;
  if ((int)v23 < 1) {
    goto LABEL_42;
  }
  v24 = 0;
  v25 = 12 * v23;
  do {
    v18 = *(_QWORD*)(v22 + 8) + v24;
    if (*(_WORD*)(v18 + 2) != 0) {
      if (v32_.v33 == nullptr) {
        GameRoutine_60a310_alt1(),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*))(*v32_.v33 + 48LL))(v32_.v33),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v24 += 12;
  } while (v25 != v24);
  v21 = v32_.v33;
  if (v32_.v33 == v32_.v32) {
  LABEL_42:
    v27 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      goto LABEL_44;
    }
    v27 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v21 + v27))(v21, v18, v19),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_44:
  v28 = v16 | ((v20 & 1) == 0);
  if (v30_.v31 == v30_.v30) {
    v29 = 32;
  }
  else {
    if (v30_.v31 == nullptr) {
      goto LABEL_49;
    }
    v29 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v30_.v31 + v29))(v30_.v31, v18,
                                                             v19),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_49:
  if (v34 != 0) {
    return v28;
  }
  else {
    return v28 | 0x80;
  }
}

__int64 GmapSituation_14d9a80()
{
  int v0;
  char v1;
  int v2;
  int v3;
  int v6;
  __int64* v7;
  int v9;
  __int64 v10;
  int v11;
  __int64* v12;
  __int64* v13;
  __int64* v14;
  __int64* v15;
  int v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  char v23;
  unsigned int v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  int v30;
  __int64 result;
  int v32;
  __int64** v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  unsigned int v37;

  if ((game_gmap_1536e70_alt1(2) & 1) != 0) {
    v0 = 0;
  }
  else {
    v0 = 16385;
  }
  v1 = SpotAttachmentRecruit_1517ee0();
  v2 = game_gmap_GmapClock_instance_;
  v3 = v0 | 0x4200;
  if ((v1 & 1) != 0) {
    v3 = v0;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  }
  v6 = *(unsigned __int8*)(*GameData_2130e70 + 52);
  v7 = GameData_212c790;
  if (v6 == 7) {
    v2 = 1;
  }
  if (v2 == 0) {
    v3 |= 0x4002u;
  }
  if (*(_BYTE*)(*GameData_2130e70 + 52) == 0 || v6 == 7) {
    v9 = v3;
  }
  else {
    v9 = v3 | 4;
  }
  v10 = *(_QWORD*)(*GameData_212c790 + 8);
  v11 = *(_DWORD*)(v10 + 56);
  v12 = *(__int64**)(v10 + 8);
  v13 = *(__int64**)(v10 + 16);
  if ((v11 & 0x80000000) == 0) {
    while (v12 != v13) {
      v15 = (__int64*)*v12++;
      v14 = v15;
      if (*((_DWORD*)v15 + 21) == v11) {
        goto LABEL_33;
      }
    }
  LABEL_32:
    v14 = nullptr;
    goto LABEL_33;
  }
  if (v12 == v13) {
    goto LABEL_32;
  }
  while (1) {
    v14 = (__int64*)*v12;
    if (*(_QWORD*)(*v12 + 96) == 0 && v14[69] == 0) {
      break;
    }
    if (++v12 == v13) {
      goto LABEL_32;
    }
  }
LABEL_33:
  v16 = *((_DWORD*)v14 + 135);
  v17 = __OFSUB__(v16, 1);
  v18 = (unsigned int)(v16 - 1);
  if (((v18 & 0x80000000) != 0LL) == v17) {
    v19 = v14[3];
    v20 = v14[4] - v19;
    v21 = (__int64*)(v19 + 8LL * (unsigned int)v18);
    if (v18 < v20 >> 3) {
      v14 = v21;
    }
  }
  v22 = *v14;
  v23 = GameRoutine_1518560(*v14);
  v24 = v9 | 0x4008;
  if ((v23 & 1) != 0) {
    v24 = v9;
  }
  v25 = *(_QWORD*)(*v7 + 8);
  v26 = *(_QWORD**)(v25 + 8);
  v27 = *(_QWORD**)(v25 + 16);
  while (v26 != v27) {
    v28 = (_QWORD*)*v26;
    if (*(_QWORD*)*v26 == v22) {
      v29 = v28[12];
      if (v29 != 0 && (unsigned int)*(unsigned __int8*)(v29 + 32) - 3 < 2) {
        LODWORD(v27) = (v28[68] & 8) != 0;
        v30 = 1;
        goto LABEL_50;
      }
    }
    ++v26;
  }
  v30 = 0;
LABEL_50:
  if ((v30 & (unsigned int)v27) != 0) {
    result = v24 | 0x4400;
  }
  else {
    result = v24;
  }
  if (game_GameModeData_instance_ != 0) {
    v32 = *(_DWORD*)(game_GameModeData_instance_ + 60);
    if (v32 == 3) {
      v33 = *(__int64***)(*GameData_2130e60 + 8);
      v34 = *v33;
      v35 = v33[1];
      if (v34 != v35) {
        while (1) {
          v36 = *v34++;
          if (*(_QWORD*)(*(_QWORD*)(v36 + 112) + 48LL) ==
              *(_QWORD*)(v22 + 120)) {
            break;
          }
          if (v34 == v35) {
            goto LABEL_60;
          }
        }
        LODWORD(result) = result | 0x4010;
      }
    }
  LABEL_60:
    if (v32 == 3) {
      v37 = result | 0x4020;
    }
    else {
      v37 = result;
    }
    if ((*(_BYTE*)(v22 + 178) & 4) != 0) {
      return v37;
    }
    else {
      return (unsigned int)result;
    }
  }
  return result;
}

__int64 GmapSituation_14d9ce0()
{
  unsigned int v0;
  __int64 v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;

  if ((SpotAttachmentRecruit_1517ee0() & 1) != 0) {
    v0 = 0;
  }
  else {
    v0 = 16896;
  }
  if ((game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
      *(_BYTE*)(*GameData_2130e70 + 52) != 8) {
    v0 |= 0x4002u;
  }
  if ((game_gmap_1536e70_alt1(2) & 1) == 0) {
    v0 |= 0x4001u;
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(_DWORD*)(v1 + 56);
  v3 = *(__int64**)(v1 + 8);
  v4 = *(__int64**)(v1 + 16);
  if ((v2 & 0x80000000) == 0) {
    while (v3 != v4) {
      v6 = (__int64*)*v3++;
      v5 = v6;
      if (*((_DWORD*)v6 + 21) == v2) {
        goto LABEL_17;
      }
    }
  LABEL_16:
    v5 = nullptr;
    goto LABEL_17;
  }
  if (v3 == v4) {
    goto LABEL_16;
  }
  while (1) {
    v5 = (__int64*)*v3;
    if (*(_QWORD*)(*v3 + 96) == 0 && v5[69] == 0) {
      break;
    }
    if (++v3 == v4) {
      goto LABEL_16;
    }
  }
LABEL_17:
  v7 = *((_DWORD*)v5 + 135);
  v8 = __OFSUB__(v7, 1);
  v9 = (unsigned int)(v7 - 1);
  if (((v9 & 0x80000000) != 0LL) == v8) {
    v10 = v5[3];
    v11 = v5[4] - v10;
    v12 = (__int64*)(v10 + 8LL * (unsigned int)v9);
    if (v9 < v11 >> 3) {
      v5 = v12;
    }
  }
  v13 = *v5;
  v14 = *(_QWORD*)(*v5 + 280);
  if (v14 == 0 ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v14 + 24LL))(v14) == 1 &&
          ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v13 + 280) + 112LL))(
               *(_QWORD*)(v13 + 280)) &
           1) != 0 ||
      (v15 = *(_QWORD*)(v13 + 280)) == 0) {
    v0 |= 0x4008u;
  }
  else {
    if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15) != 3) {
      v0 |= 0x4008u;
    }
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v15 + 144LL))(v15) & 1) == 0) {
      if ((game_gmap_1536e70_alt1(4) & 1) != 0) {
        v16 = 1;
      }
      else {
        v16 = 16385;
      }
      v0 |= v16;
    }
  }
  return v0;
}

__int64 GmapSituation_14d9ea0()
{
  __int64* v0;
  int v1;
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
  char v17;
  __int64** v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  int v28;
  __int64* v29;
  unsigned int v30;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  int v37;
  unsigned __int8* v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;

  v0 = GameData_212c790;
  if (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) + 72LL) != 0) {
    v1 = 0;
  }
  else {
    v1 = 4096;
  }
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = (__int64*)*v4++;
      v6 = v7;
      if (*((_DWORD*)v7 + 21) == v3) {
        goto LABEL_11;
      }
    }
  LABEL_10:
    v6 = nullptr;
    goto LABEL_11;
  }
  if (v4 == v5) {
    goto LABEL_10;
  }
  while (1) {
    v6 = (__int64*)*v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && v6[69] == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_10;
    }
  }
LABEL_11:
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
  v15 = *(_QWORD*)(*v6 + 280);
  if (v15 != 0 &&
      ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15) != 1 ||
       ((*(__int64 (**)(_QWORD))(**(_QWORD**)(v14 + 280) + 112LL))(
            *(_QWORD*)(v14 + 280)) &
        1) == 0)) {
    v16 = *(_QWORD*)(v14 + 280);
    if (v16 != 0) {
      if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16) == 1) {
        (*(void (**)(_QWORD))(**(_QWORD**)(v14 + 280) + 112LL))(
            *(_QWORD*)(v14 + 280));
      }
      if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v14 + 280) + 24LL))(
              *(_QWORD*)(v14 + 280)) == 5) {
        if ((*(unsigned __int8 (**)(_QWORD))(**(_QWORD**)(v14 + 280) + 24LL))(
                *(_QWORD*)(v14 + 280)) == 1) {
          (*(void (**)(_QWORD))(**(_QWORD**)(v14 + 280) + 112LL))(
              *(_QWORD*)(v14 + 280));
        }
        v17 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v14 + 280) + 144LL))(
            *(_QWORD*)(v14 + 280));
        goto LABEL_35;
      }
    }
  }
  if ((*(_BYTE*)(v14 + 178) & 4) != 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 |= 0x4020u;
    goto LABEL_37;
  }
  if ((GameRoutine_15190c0(v14) & 1) == 0 &&
      (GameRoutine_1518fe0(v14) & 1) == 0) {
    v17 = GameRoutine_15191b0(v14);
  LABEL_35:
    if ((v17 & 1) == 0) {
      v1 |= 0x4008u;
    }
  }
LABEL_37:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v18 = *(__int64***)(*GameData_2130e60 + 8);
    v19 = *v18;
    v20 = v18[1];
    if (v19 != v20) {
      while (1) {
        v21 = *v19++;
        if (*(_QWORD*)(*(_QWORD*)(v21 + 112) + 48LL) == *(_QWORD*)(v14 + 120)) {
          break;
        }
        if (v19 == v20) {
          goto LABEL_44;
        }
      }
      v1 |= 0x4010u;
    }
  }
LABEL_44:
  v22 = *(_QWORD*)(*v0 + 8);
  v23 = *(_QWORD**)(v22 + 8);
  v24 = *(_QWORD**)(v22 + 16);
  while (v23 != v24) {
    v25 = (_QWORD*)*v23;
    if (*(_QWORD*)*v23 == v14) {
      v26 = v25[12];
      if (v26 != 0 && (unsigned int)*(unsigned __int8*)(v26 + 32) - 3 < 2) {
        LODWORD(v24) = (v25[68] & 8) != 0;
        v27 = 1;
        goto LABEL_52;
      }
    }
    ++v23;
  }
  v27 = 0;
LABEL_52:
  if ((v27 & (unsigned int)v24) != 0) {
    v28 = v1 | 0x4400;
  }
  else {
    v28 = v1;
  }
  if ((game_gmap_1536e70_alt1(3) & 1) == 0) {
    v28 |= 0x4001u;
  }
  v29 = GameData_2130e70;
  if ((game_gmap_GmapClock_instance_ == 0 ||
       *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
               *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
           0) &&
      *(_BYTE*)(*GameData_2130e70 + 52) != 9) {
    v28 |= 0x4002u;
  }
  if ((SpotAttachmentExplore_151a540() & 1) != 0) {
    v30 = v28;
  }
  else {
    v30 = v28 | 0x4040;
  }
  if (*(_BYTE*)(*v29 + 52) != 0 && *(_BYTE*)(*v29 + 52) != 9) {
    v30 |= 4u;
  }
  v32 = game_gmap_SpotMgr_CountDispatchLegion();
  v33 = game_gmap_SpotAttachmentExplore_GetData();
  v34 = v33;
  if (game_GameModeData_instance_ == 0 ||
      ((LODWORD(v35) = *(unsigned __int8*)(v33 + 104),
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3)
           ? (v36 = (_DWORD)v35 == 0)
           : (v36 = true),
       v36)) {
    LODWORD(v35) = *(unsigned __int16*)(v33 + 88);
    if (*(_WORD*)(v33 + 88) != 0) {
      v37 = GameRoutine_715440();
      v35 = *(unsigned __int16*)(v34 + 72);
      if (*(_WORD*)(v34 + 72) != 0) {
        v38 = *(unsigned __int8**)(v34 + 80);
        if (v37 >= *v38) {
          v39 = v35 - 1;
          v40 = 1;
          while (v35 != v40) {
            v41 = v38[v40++];
            if (v37 < v41) {
              v39 = v40 - 2;
              break;
            }
          }
          LODWORD(v35) = *(unsigned __int8*)(*(_QWORD*)(v34 + 96) + v39);
        }
        else {
          LODWORD(v35) = 0;
        }
      }
    }
  }
  if (v32 >= (int)v35) {
    return v30 | 0x6000;
  }
  else {
    return v30;
  }
}

__int64 GmapSituation_14da880()
{
  __int64 v0;
  __int64 v1;
  int v2;
  int v3;
  __int64 (**v4)();
  int v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64* v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  char v40;
  int v41;
  unsigned int v42;
  int v45;
  __int64 result;
  unsigned __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;
  _QWORD* v55;
  unsigned __int64 v56;
  _QWORD* v57;
  __int64 v58;
  __int64 v59;
  int v60;
  __int64* v61;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  char v69;
  __int64 (***v70)();
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  struct {
    _QWORD v77[4];
    _QWORD* v78;
  } v77_;
  _BYTE v79[4];
  struct {
    __int64 (**v80)();
    _BYTE* v81;
    _QWORD* v82;
    char gap88_[8];
    unsigned __int64* v83;
  } v80_;

  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v0 = GameData_212d748[0];
  v1 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
  if (((unsigned __int8)BladeResonance_14b7a80(v1) & 1) != 0) {
    goto LABEL_2;
  }
  if ((game_gmap_1536e70(5) & 1) == 0 || *(_QWORD*)(v1 + 16) != 0) {
    goto LABEL_9;
  }
  v3 = *(_DWORD*)(v1 + 36);
  v80_.v81 = &GameData_1ac87d2;
  v4 = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ac87d2),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v5 = game_GameModeData_instance_;
  v80_.v80 = v4;
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v80_.v80),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if (v6 == 0) {
      if (v3 >= 0) {
        goto LABEL_2;
      }
    LABEL_9:
      if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v0 + 8LL) + 16LL) != 0) {
        v2 = 1;
      }
      else {
        v2 = 0x2000;
      }
      goto LABEL_12;
    }
    v5 = *(_DWORD*)(v6 + 32);
  }
  if (v3 < v5) {
    goto LABEL_9;
  }
LABEL_2:
  v2 = 0;
LABEL_12:
  v7 = *(_QWORD*)(*GameData_212c780 + 8);
  v8 = *(__int64**)(v7 + 48);
  v9 = *(__int64**)(v7 + 56);
  v10 = GameData_2130e70;
  if (v8 == v9) {
    goto LABEL_19;
  }
  v11 = 0;
  do {
    v12 = *v8++;
    v11 += *(unsigned __int8*)(v12 + 117);
  } while (v8 != v9);
  if (v11 == 0) {
  LABEL_19:
    v80_.v81 = &GameData_1abbb2b;
    v80_.v80 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1abbb2b),
    v66 = COERCE_AS(__typeof__(v66),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    if ((game_GameModeData_instance_ == 0 ||
         (v13 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v80_.v80)) == 0 ||
         *(_DWORD*)(v13 + 32) == 0) &&
        *(_BYTE*)(*v10 + 52) != 10) {
      v2 |= 0x2000u;
    }
  }
  v14 = GameData_212c790;
  v15 = *(_QWORD*)(*GameData_212c790 + 8);
  v16 = *(_DWORD*)(v15 + 56);
  v17 = *(__int64**)(v15 + 8);
  v18 = *(__int64**)(v15 + 16);
  if (v16 < 0) {
    for (; v17 != v18; ++v17) {
      v19 = *v17;
      if (*(_QWORD*)(*v17 + 96) == 0 && *(_QWORD*)(v19 + 552) == 0) {
        goto LABEL_28;
      }
    }
  }
  else {
    while (v17 != v18) {
      v20 = *v17++;
      v19 = v20;
      if (*(_DWORD*)(v20 + 84) == v16) {
        goto LABEL_28;
      }
    }
  }
  v19 = 0;
LABEL_28:
  v21 = game_HashString_alt1((__int64)&GameData_1aed6ab),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v21 == 0) {
    goto LABEL_56;
  }
  v22 = *(_QWORD*)(*GameData_212c890[0] + 96);
  if (v22 == 0 || *(_QWORD*)(*GameData_212c890[0] + 112) == 0) {
    goto LABEL_56;
  }
  v24 = v22 - 1;
  if ((v22 & (v22 - 1)) != 0) {
    v25 = v21;
    if (v21 >= v22) {
      v25 = v21 % v22;
    }
  }
  else {
    v25 = v24 & v21;
  }
  v26 = *(_QWORD**)(*(_QWORD*)(*GameData_212c890[0] + 88) + 8 * v25);
  if (v26 == nullptr || (v27 = (_QWORD*)*v26) == nullptr) {
  LABEL_56:
    v29 = nullptr;
    goto LABEL_57;
  }
  if ((v22 & v24) == 0) {
    while (1) {
      v30 = v27[1];
      if (v30 == v21) {
        if (v27[2] == v21) {
          goto LABEL_172;
        }
      }
      else if ((v30 & v24) != v25) {
        goto LABEL_56;
      }
      v27 = (_QWORD*)*v27;
      v29 = nullptr;
      if (v27 == nullptr) {
        goto LABEL_57;
      }
    }
  }
  while (1) {
    v28 = v27[1];
    if (v28 == v21) {
      break;
    }
    if (v28 >= v22) {
      v28 %= v22;
    }
    if (v28 != v25) {
      goto LABEL_56;
    }
  LABEL_46:
    v27 = (_QWORD*)*v27;
    if (v27 == nullptr) {
      goto LABEL_56;
    }
  }
  if (v27[2] != v21) {
    goto LABEL_46;
  }
LABEL_172:
  v29 = (_QWORD*)v27[3];
LABEL_57:
  LOBYTE(v77_.v77[0]) = 0;
  v80_.v82 = v29;
  v80_.v80 = GameData_202c698;
  v80_.v81 = v77_.v77;
  v80_.v83 = (unsigned __int64*)&v80_.v80;
  Troop_133ed80(v19, (__int64)&v80_.v80),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v80_.v83 == (unsigned __int64*)&v80_.v80) {
    v31 = 32;
  LABEL_61:
    (*(void (**)(__int64))(*v80_.v83 + v31))((__int64)v80_.v83),
        v66 = COERCE_AS(__typeof__(v66),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  else if (v80_.v83 != nullptr) {
    v31 = 40;
    goto LABEL_61;
  }
  if (LOBYTE(v77_.v77[0]) != 0) {
    v32 = v2;
  }
  else {
    v32 = v2 | 0x4200;
  }
  v33 = *(_QWORD*)(*v14 + 8);
  v34 = *(_DWORD*)(v33 + 56);
  v35 = *(__int64**)(v33 + 8);
  v36 = *(__int64**)(v33 + 16);
  if ((v34 & 0x80000000) == 0) {
    while (v35 != v36) {
      v38 = *v35++;
      v37 = v38;
      if (*(_DWORD*)(v38 + 84) == v34) {
        goto LABEL_72;
      }
    }
  LABEL_71:
    v37 = 0;
    goto LABEL_72;
  }
  if (v35 == v36) {
    goto LABEL_71;
  }
  while (1) {
    v37 = *v35;
    if (*(_QWORD*)(*v35 + 96) == 0 && *(_QWORD*)(v37 + 552) == 0) {
      break;
    }
    if (++v35 == v36) {
      goto LABEL_71;
    }
  }
LABEL_72:
  if ((*(_QWORD*)(v37 + 96) | *(_QWORD*)(v37 + 552)) == 0 &&
      game_GameModeData_instance_ != 0 && *(int*)(v37 + 84) < 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v32 = v2 | 0x4200;
  }
  v40 = game_gmap_1536e70(5),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v41 = game_gmap_GmapClock_instance_;
  v42 = v32 | 0x4001;
  if ((v40 & 1) != 0) {
    v42 = v32;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v41 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
          *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
          *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
  }
  v45 = *(unsigned __int8*)(*v10 + 52);
  if (v45 == 10) {
    v41 = 1;
  }
  if (v41 == 0) {
    v42 |= 0x4002u;
  }
  if (*(_BYTE*)(*v10 + 52) == 0 || v45 == 10) {
    result = v42;
  }
  else {
    result = v42 | 4;
  }
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
      (_DWORD)result != 0) {
    return result;
  }
  v79[0] = 0;
  v49 = game_HashString_alt1((__int64)&GameData_1ac495e),
  v66 = COERCE_AS(__typeof__(v66),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v49 == 0) {
    goto LABEL_137;
  }
  v50 = *(_QWORD*)(*GameData_212c880[0] + 96);
  if (v50 == 0 || *(_QWORD*)(*GameData_212c880[0] + 112) == 0) {
    goto LABEL_137;
  }
  v52 = v50 - 1;
  if ((v50 & (v50 - 1)) != 0) {
    v53 = v49;
    if (v49 >= v50) {
      v53 = v49 % v50;
    }
  }
  else {
    v53 = v52 & v49;
  }
  v54 = *(_QWORD**)(*(_QWORD*)(*GameData_212c880[0] + 88) + 8 * v53);
  if (v54 == nullptr || (v55 = (_QWORD*)*v54) == nullptr) {
  LABEL_137:
    v57 = nullptr;
    goto LABEL_138;
  }
  if ((v50 & v52) == 0) {
    while (1) {
      v58 = v55[1];
      if (v58 == v49) {
        if (v55[2] == v49) {
          goto LABEL_173;
        }
      }
      else if ((v58 & v52) != v53) {
        goto LABEL_137;
      }
      v55 = (_QWORD*)*v55;
      v57 = nullptr;
      if (v55 == nullptr) {
        goto LABEL_138;
      }
    }
  }
  while (2) {
    v56 = v55[1];
    if (v56 != v49) {
      if (v56 >= v50) {
        v56 %= v50;
      }
      if (v56 != v53) {
        goto LABEL_137;
      }
    }
    else if (v55[2] == v49) {
    LABEL_173:
      v57 = (_QWORD*)v55[3];
    LABEL_138:
      v59 = *(_QWORD*)(*v14 + 8);
      v60 = *(_DWORD*)(v59 + 56);
      v61 = *(__int64**)(v59 + 8);
      if (v60 < 0) {
        while (1) {
          v62 = *v61;
          if (*(_QWORD*)(*v61 + 96) == 0 && *(_QWORD*)(v62 + 552) == 0) {
            break;
          }
          ++v61;
        }
      }
      else {
        v64 = *v61;
        v63 = v61 + 1;
        v62 = v64;
        if (*(_DWORD*)(v64 + 84) != v60) {
          do {
            v65 = *v63++;
            v62 = v65;
          } while (*(_DWORD*)(v65 + 84) != v60);
        }
      }
      v80_.v82 = v57;
      v80_.v80 = GameData_20474a8;
      v80_.v81 = v79;
      v80_.v83 = (unsigned __int64*)&v80_.v80;
      Troop_133ed80(v62, (__int64)&v80_.v80),
          v66 = COERCE_AS(__typeof__(v66),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v80_.v83 == (unsigned __int64*)&v80_.v80) {
        v68 = 32;
      LABEL_149:
        (*(void (**)(__int64))(*v80_.v83 + v68))((__int64)v80_.v83),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      else if (v80_.v83 != nullptr) {
        v68 = 40;
        goto LABEL_149;
      }
      if ((v79[0] & 1) != 0) {
        v69 = 0;
        return v69 & 1;
      }
      v77_.v77[2] = v57;
      v70 = &v80_.v80;
      v77_.v77[0] = GameData_20475a8;
      v77_.v77[1] = v79;
      v77_.v78 = v77_.v77;
      v71 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                       8LL);
      v80_.v82 = v77_.v77;
      v80_.v83 = (unsigned __int64*)&v80_.v80;
      v72 = *(unsigned int*)(v71 + 80);
      v80_.v80 = (__int64 (**)(void))(GameData_212d800[0] + 2),
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v80_.v81 = nullptr;
      if ((int)v72 < 1) {
        goto LABEL_162;
      }
      v73 = 0;
      v74 = 12 * v72;
      do {
        v66 = *(_QWORD*)(v71 + 8) + v73;
        if (*(_WORD*)(v66 + 2) != 0) {
          if (v80_.v83 == nullptr) {
            GameRoutine_60a310_alt1(),
                v66 =
                    COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v67 =
                    COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
          }
          (*(void (**)(unsigned __int64*))(*v80_.v83 + 48))(v80_.v83),
              v66 = COERCE_AS(__typeof__(v66),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
        }
        v73 += 12;
      } while (v74 != v73);
      v70 = (__int64 (***)(void))v80_.v83,
      v66 = COERCE_AS(__typeof__(v66),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      if (v80_.v83 == (unsigned __int64*)&v80_.v80) {
      LABEL_162:
        v75 = 4;
      LABEL_163:
        ((void (*)(__int64 (***)(void), __int64, __int64))(*v70)[v75])(v70, v66,
                                                                       v67),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      else if (v80_.v83 != nullptr) {
        v75 = 5;
        goto LABEL_163;
      }
      if (v77_.v78 == v77_.v77) {
        v76 = 32;
      LABEL_168:
        (*(void (**)(_QWORD*, __int64, __int64))(*v77_.v78 + v76))(v77_.v78,
                                                                   v66, v67),
            v66 = COERCE_AS(__typeof__(v66),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v67 = COERCE_AS(__typeof__(v67),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      else if (v77_.v78 != nullptr) {
        v76 = 40;
        goto LABEL_168;
      }
      v69 = v79[0] ^ 1;
      return v69 & 1;
    }
    v55 = (_QWORD*)*v55;
    if (v55 == nullptr) {
      goto LABEL_137;
    }
    continue;
  }
}

__int64 GmapSituation_14daf80()
{
  __int64 result;
  _QWORD v1[2];

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 2) {
    return 0;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    return 1;
  }
  v1[1] = &GameData_1a86d37;
  v1[0] = game_HashString(&GameData_1a86d37);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GmapSituation_14db030()
{
  __int64 v0;
  __int64 v1;
  struct {
    __int64 v3;
    void* v4;
  } v3_;

  if (game_gmap_GmapClock_instance_ == 0) {
    return 0;
  }
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
      0) {
    v3_.v4 = &GameData_1adfa87;
    v3_.v3 = game_HashString_alt1((__int64)&GameData_1adfa87);
    if (game_GameModeData_instance_ == 0) {
      return 1;
    }
    v0 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v3_.v3);
    if (v0 == 0) {
      return 1;
    }
    if (*(_DWORD*)(v0 + 32) == 0) {
      return 1;
    }
    v3_.v4 = &GameData_1a86f9b;
    v3_.v3 = game_HashString_alt1((__int64)&GameData_1a86f9b);
    if (game_GameModeData_instance_ != 0) {
      v1 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v3_.v3);
      if (v1 != 0 && *(_DWORD*)(v1 + 32) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

__int64 GmapSituation_14db100()
{
  __int64 result;
  _QWORD v1[2];

  v1[1] = &GameData_1a86f9b;
  v1[0] = game_HashString(&GameData_1a86f9b);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GmapSituation_14db160()
{
  __int64* v0;
  int v1;
  __int64 v2;
  __int64* i;
  __int64 v4;
  __int64 result;
  struct {
    __int64 (**v6)();
    void* v7;
    char gap16_[16];
    unsigned __int64* v8;
  } v6_;

  game_gmap_1544280(*(__int64***)(*(_QWORD*)GameData_212d740[0] + 8LL));
  v0 = GameData_2130e70;
  v1 = *(unsigned __int8*)(*GameData_2130e70 + 53);
  if (game_GameModeData_instance_ != 0) {
    if (v1 != *(unsigned __int8*)(game_GameModeData_instance_ + 15)) {
      goto LABEL_6;
    }
    v1 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  else if (*(_BYTE*)(*GameData_2130e70 + 53) != 0) {
    goto LABEL_6;
  }
  if (*(_DWORD*)(*GameData_2130e70 + 44) == v1) {
    goto LABEL_19;
  }
LABEL_6:
  v6_.v6 = GameData_202d7c8;
  v6_.v8 = (unsigned __int64*)&v6_.v6;
  TroopMgr_13460a0((__int64)&v6_.v6);
  if (v6_.v8 == (unsigned __int64*)&v6_.v6) {
    v2 = 32;
  }
  else {
    if (v6_.v8 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v6_.v8 + v2))((__int64)v6_.v8);
LABEL_11:
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    for (i = *(__int64**)(*(_QWORD*)(*GameData_212c790 + 8) + 8LL);; ++i) {
      v4 = *i;
      if ((*(_QWORD*)(*i + 96) | *(_QWORD*)(*i + 552)) == 0 &&
          *(_DWORD*)(v4 + 84) == -1) {
        break;
      }
    }
    game_gmap_1341d60(v4, 0);
  }
  *(_BYTE*)(*v0 + 54) = 1;
LABEL_19:
  v6_.v7 = &GameData_1a8ee0e;
  v6_.v6 = (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a8ee0e);
  if (game_GameModeData_instance_ == 0 ||
      (result = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v6_.v6)) == 0 ||
      *(_DWORD*)(result + 32) == 0) {
    result = game_gmap_1536e70(4);
    if ((result & 1) != 0) {
      SpotMgr_1336300();
      v6_.v7 = &GameData_1a8ee0e;
      v6_.v6 =
          (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a8ee0e);
      return game_VariableManager_SetFlag_alt1((__int64)&v6_.v6, 1);
    }
  }
  return result;
}

bool GmapSituation_14db2f0()
{
  __int64 v0;
  __int64 v1;
  struct {
    __int64 v3;
    void* v4;
  } v3_;

  v3_.v4 = &GameData_1adfa87;
  v3_.v3 = game_HashString_alt1((__int64)&GameData_1adfa87);
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v0 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48),
      (unsigned __int64*)&v3_.v3);
  if (v0 == 0 || *(_DWORD*)(v0 + 32) == 0 || game_GameModeData_instance_ == 0 ||
      *(int*)(game_GameModeData_instance_ + 64) < 3) {
    return false;
  }
  v3_.v4 = &GameData_1a86f9b;
  v3_.v3 = game_HashString_alt1((__int64)&GameData_1a86f9b);
  return game_GameModeData_instance_ == 0 ||
         (v1 = game_GameVariableTable_Find_alt1(
              *(_QWORD**)(game_GameModeData_instance_ + 48),
              (unsigned __int64*)&v3_.v3)) == 0 ||
         *(_DWORD*)(v1 + 32) == 0;
}

__int64 GmapSituation_14db3b0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  struct {
    __int64 v4;
    void* v5;
  } v4_;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v4_.v5 = &GameData_1aa9eec;
    v0 = game_HashString_alt1((__int64)&GameData_1aa9eec);
    v1 = game_GameModeData_instance_;
    v4_.v4 = v0;
    if (game_GameModeData_instance_ != 0) {
      v2 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v4_.v4);
      if (v2 != 0) {
        v1 = *(_DWORD*)(v2 + 32);
      }
      else {
        v1 = 0;
      }
    }
    *(_DWORD*)(GameData_22416c0 + 48) = v1;
  }
  else {
    *(_QWORD*)(GameData_22416c0 + 16) = *(_QWORD*)(GameData_22416c0 + 8);
  }
  v4_.v5 = &GameData_1a9e43e;
  v4_.v4 = game_HashString_alt1((__int64)&GameData_1a9e43e);
  game_VariableManager_SetFlag_alt1((__int64)&v4_.v4, 0);
  v4_.v5 = &GameData_1a8ee0e;
  v4_.v4 = game_HashString_alt1((__int64)&GameData_1a8ee0e);
  return game_VariableManager_SetFlag_alt1((__int64)&v4_.v4, 0);
}

__int64 GmapSituation_14db4a0()
{
  __int64 v0;
  __int64 v1;
  int v2;
  __int64 (***v3)();
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  struct {
    __int64 (**v10)();
    void* v11;
    char gap16_[16];
    unsigned __int64* v12;
  } v10_;
  __int64 v13;

  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10_.v11 = &GameData_1adfa87;
  v10_.v10 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1adfa87),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v10_.v10)) == 0 ||
      *(_DWORD*)(v1 + 32) == 0) {
    if (game_GameModeData_instance_ != 0) {
      v2 = *(_DWORD*)(game_GameModeData_instance_ + 64);
    }
    else {
      v2 = 0;
    }
    v3 = &v10_.v10;
    v10_.v10 = GameData_2047628;
    v10_.v12 = (unsigned __int64*)&v10_.v10;
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v5 = *(__int64**)(v4 + 8);
    v6 = *(__int64**)(v4 + 16);
    if (v5 == v6) {
      goto LABEL_18;
    }
    do {
      v7 = *(_QWORD*)(*v5 + 96);
      if (v7 != 0 && (unsigned int)*(unsigned __int8*)(v7 + 32) - 3 <= 1 &&
          v2 == *(unsigned __int8*)(v7 + 64)) {
        v13 = *v5;
        if (v10_.v12 == nullptr) {
          GameRoutine_60a310_alt1(),
              v0 = COERCE_AS(__typeof__(v0),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        (*(void (**)(unsigned __int64*, __int64*))(*v10_.v12 + 48))(v10_.v12,
                                                                    &v13),
            v0 = COERCE_AS(__typeof__(v0),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      ++v5;
    } while (v5 != v6);
    v3 = (__int64 (***)(void))v10_.v12,
    v0 = COERCE_AS(__typeof__(v0),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v10_.v12 == (unsigned __int64*)&v10_.v10) {
    LABEL_18:
      v8 = 4;
      goto LABEL_19;
    }
    if (v10_.v12 != nullptr) {
      v8 = 5;
    LABEL_19:
      ((void (*)(__int64 (***)(void), __int64))(*v3)[v8])(v3, v0),
          v0 = COERCE_AS(__typeof__(v0),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v10_.v11 = &GameData_1a96743;
  v10_.v10 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1a96743),
  v0 = COERCE_AS(__typeof__(v0),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  return game_VariableManager_SetFlag_alt1((__int64)&v10_.v10, 0);
}

bool GmapSituation_14db600()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD v15[2];

  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return false;
  }
  v15[1] = &GameData_1ac4744;
  v15[0] = game_HashString(&GameData_1ac4744);
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v0 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v15);
  if (v0 == 0 || *(_DWORD*)(v0 + 32) == 0) {
    return false;
  }
  v1 = game_HashString(&GameData_1aee5d5);
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        goto LABEL_14;
      }
    }
  }
  else {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_14;
      }
    }
  }
  v6 = 0;
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
  return *(_QWORD*)(*(_QWORD*)v6 + 96LL) == v1;
}

__int64 GmapSituation_14db740(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  char* v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v39;
  signed __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64* v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64* v54;
  unsigned __int64 v55;
  __int64* v56;
  __int64 v57;
  char* v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;

  if (game_gmap_GmapClock_instance_ == 0) {
    return result;
  }
  if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
          *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
      0) {
    return result;
  }
  v1 = *(__int64**)(*GameData_212ca18[0] + 64);
  v2 = *(__int64**)(*GameData_212ca18[0] + 72);
  if (v1 == v2) {
    return result;
  }
  v53 = result;
  v56 = nullptr;
  v3 = 0;
  v4 = nullptr;
  v5 = nullptr;
  v60 = 0;
  v55 = 0;
  v6 = game_TransporterConst_List_instance__ptr[0];
  v54 = *(__int64**)(*GameData_212ca18[0] + 72);
  do {
    v59 = *v1;
    v8 = *(_QWORD*)(*v1 + 56);
    if (v8 != 0) {
      v9 = *(_QWORD*)(v8 + 8);
      if (v9 != 0) {
        v10 = strchr(*(_QWORD*)(v8 + 8), 95);
        if (v10 != 0) {
          v9 = v10 + 1;
        }
      }
      v62 = game_util_Format(GameData_1a990db, v9);
      v61 = game_HashString(v62);
      if (game_GameModeData_instance_ == 0 ||
          (result = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v61)) == 0 ||
          *(_DWORD*)(result + 32) == 0) {
        v61 = 0;
        v11 = *(_QWORD*)(v59 + 56);
        if (v11 != 0) {
          v12 = *(unsigned __int16*)(v11 + 16);
          HIDWORD(v61) = 1;
          LOWORD(v61) = v12;
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v12) +
                        73LL) == 17) {
            nn_os_LockMutex(&game_g_random_mutex);
            v13 = game_map_MapRandom_instance__ptr[0];
            v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v15 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v16 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v13 + 1) = v14;
            v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) = v15;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 4) = v17;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v6 = game_TransporterConst_List_instance__ptr[0];
            HIDWORD(v61) =
                HIDWORD(v61) & 0xFFFFC00F |
                (16 *
                 (((16 * (v17 - 1000 * ((v17 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                   4) &
                  0x3FF));
          }
        }
        result = GameRoutine_89aac0(*(_QWORD*)(*(_QWORD*)v6 + 8LL), &v61);
        if ((result & 0x80000000) == 0 &&
            *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v6 + 8LL) + 8LL) +
                      12LL * (unsigned int)result + 2) != 0) {
          game_ae0900((void*)(&v61), v59);
          v19 = (_QWORD*)v61;
          v18 = (_QWORD*)v62;
          v20 = v56;
          if (v61 == v62) {
            if (v61 == 0) {
            LABEL_25:
              v56 = v20;
              v22 = *(_QWORD*)(v59 + 56);
              v6 = game_TransporterConst_List_instance__ptr[0];
              if (v22 != 0) {
                v23 = *(_QWORD*)(v22 + 8);
                v2 = v54;
                if (v23 != 0) {
                  v24 = strchr(*(_QWORD*)(v22 + 8), 95);
                  if (v24 != 0) {
                    v23 = v24 + 1;
                  }
                }
                v7 = game_util_Format(GameData_1a990db, v23);
              }
              else {
                v2 = v54;
                v7 = 0;
              }
              v62 = v7;
              v61 = game_HashString(v7);
              result = game_VariableManager_SetFlag(&v61, 1);
              goto LABEL_7;
            }
          }
          else {
            do {
              v25 = game_gmap_SpotMgr_FindSpot(*v19);
              if (v25 != 0) {
                v26 = v25;
                if (*(_BYTE*)(v25 + 176) != 3 || *(_BYTE*)(v25 + 112) != 0) {
                  if ((unsigned __int64)v20 >= v60) {
                    v28 = v4;
                    v29 = (char*)v20 - v3;
                    v30 = ((__int64)v20 - v3) >> 3;
                    v31 = v30 + 1;
                    if ((unsigned __int64)(v30 + 1) >> 61 != 0) {
                      GameRoutine_8875e0();
                    }
                    v57 = v3;
                    v32 = v60 - v3;
                    if ((__int64)(v60 - v3) >> 2 > v31) {
                      v31 = v32 >> 2;
                    }
                    v33 = (unsigned __int64)v32 >= 0x7FFFFFFFFFFFFFF8LL
                              ? 0x1FFFFFFFFFFFFFFFLL
                              : v31;
                    if (v33 != 0) {
                      if (v33 >> 61 != 0) {
                        goto LABEL_97;
                      }
                      v34 = fw_memory_HeapManager_Allocate(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v33, 16,
                          0);
                    }
                    else {
                      v34 = 0;
                    }
                    v35 = (__int64)&v29[v34 + -8 * v30];
                    v60 = v34 + 8 * v33;
                    *(_QWORD*)&v29[v34] = v26;
                    v20 = (__int64*)&v29[v34 + 8];
                    memcpy(v35, v57, v29);
                    if (v57 != 0) {
                      v36 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v36 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt1(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
                    }
                    v3 = v35;
                    v4 = v28;
                  }
                  else {
                    *v20++ = v25;
                  }
                  v25 = Impl_13261c0(v26);
                  v37 = *(_QWORD*)(v26 + 136);
                  if ((unsigned __int8)v25 != 4 && v37 != 0) {
                    v39 = v4;
                    if (v4 != v5) {
                      v39 = v4;
                      while (*(_QWORD*)v39 != v37) {
                        v39 += 8;
                        if (v39 == v5) {
                          goto LABEL_63;
                        }
                      }
                    }
                    if (v39 == v5) {
                    LABEL_63:
                      if ((unsigned __int64)v5 < v55) {
                        *(_QWORD*)v5 = v37;
                        v5 += 8;
                      }
                      else {
                        v40 = v5 - v4;
                        v41 = v4;
                        v42 = (v5 - v4) >> 3;
                        v43 = v42 + 1;
                        if ((unsigned __int64)(v42 + 1) >> 61 != 0) {
                          GameRoutine_14bec90();
                        }
                        v58 = v41;
                        v44 = v20;
                        v45 = v3;
                        v46 = v55 - (_QWORD)v41;
                        v47 = (__int64)(v55 - (_QWORD)v41) >> 2;
                        if (v47 > v43) {
                          v43 = v47;
                        }
                        if (v46 >= 0x7FFFFFFFFFFFFFF8LL) {
                          v48 = 0x1FFFFFFFFFFFFFFFLL;
                        }
                        else {
                          v48 = v43;
                        }
                        if (v48 != 0) {
                          if (v48 >> 61 != 0) {
                          LABEL_97:
                            GameRoutine_60a210(v25);
                          }
                          v49 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v48,
                              16, 0);
                        }
                        else {
                          v49 = 0;
                        }
                        v4 = (char*)(v49 + v40 - 8 * v42);
                        *(_QWORD*)(v49 + v40) = v37;
                        v5 = (char*)(v49 + v40 + 8);
                        v55 = v49 + 8 * v48;
                        memcpy(v4, v58, v40);
                        if (v58 != nullptr) {
                          v50 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v50 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt1(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v50);
                        }
                        v3 = v45;
                        v20 = v44;
                      }
                    }
                  }
                }
              }
              ++v19;
            } while (v19 != v18);
            if (v61 == 0) {
              goto LABEL_25;
            }
          }
          v21 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
          goto LABEL_25;
        }
      }
    }
  LABEL_7:
    ++v1;
  } while (v1 != v2);
  if (v56 != (__int64*)v3) {
    result =
        SpotMgr_13388c0(*(_QWORD*)(*GameData_212c780 + 8) + 144LL,
                        *(_QWORD*)(*(_QWORD*)(*GameData_212c780 + 8) + 152LL),
                        v3, v56, ((__int64)v56 - v3) >> 3);
    if (*(_QWORD*)GameData_21316c8 != 0) {
      if (v5 != v4) {
        GameRoutine_14cd330(v53, *(_QWORD*)v4);
        goto LABEL_88;
      }
      result = GameRoutine_14cd330(v53, 0);
    }
  }
  if (v4 != nullptr) {
  LABEL_88:
    v51 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v51 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
  }
  if (v3 != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
  }
  return result;
}

bool GmapSituation_14dbd80(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[2];

  v2 = GameRoutine_ae3e80(a1, a2);
  v3 = v2;
  if (v2 != 0) {
    GameRoutine_1544c00(*(_QWORD*)(*(_QWORD*)GameData_212d740[0] + 8LL), v2);
    v4 = *(_QWORD*)(v3 + 24);
    v5 = *(unsigned __int8*)(v4 + 96);
    v6 = *(_QWORD*)(v4 + 104);
    if ((v5 & 1) == 0) {
      v6 = v5 >> 1;
    }
    if (v6 != 0) {
      v7 = *(_QWORD*)(v4 + 112);
      v8 = v4 + 97;
      if ((v5 & 1) != 0) {
        v9 = v7;
      }
      else {
        v9 = v8;
      }
      v11[1] = v9;
      v11[0] = game_HashString(v9);
      game_VariableManager_SetFlag(v11, 1);
    }
  }
  return v3 != 0;
}

__int64 GmapSituation_14dbe20()
{
  unsigned __int64 v0;
  unsigned __int64 v1;
  __int64 result;
  unsigned __int64 v3[4];

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    return 1;
  }
  v3[2] = v0;
  v3[3] = v1;
  v3[1] = (unsigned __int64)&GameData_1a86d37;
  v3[0] = game_HashString_alt1((__int64)&GameData_1a86d37);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v3);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GmapSituation_14dbeb0(__int64 result)
{
  _QWORD* v1;
  unsigned __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = (_QWORD*)GameData_22416c0;
  v3 = *(__int64**)(GameData_22416c0 + 16);
  v2 = *(_QWORD*)(GameData_22416c0 + 24);
  if ((unsigned __int64)v3 >= v2) {
    v5 = *(_QWORD*)(GameData_22416c0 + 8);
    v6 = (char*)v3 - v5;
    v7 = ((__int64)v3 - v5) >> 3;
    v8 = v7 + 1;
    if ((unsigned __int64)(v7 + 1) >> 61 != 0) {
      GameRoutine_14c2010();
    }
    v9 = v2 - v5;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 2 > v8) {
      v8 = v9 >> 2;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL) {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v12 = result;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v11, 16, 0);
      result = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 8 * v11;
    v15 = (__int64)&v6[v13 + -8 * v7];
    *(_QWORD*)&v6[v13] = result;
    v4 = (__int64)&v6[v13 + 8];
    result = memcpy(v15, v5, v6);
    v1[1] = v15;
    v1[2] = v4;
    v1[3] = v14;
    if (v5 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v16, v5);
    }
  }
  else {
    *v3 = result;
    v4 = (__int64)(v3 + 1);
  }
  v1[2] = v4;
  return result;
}

bool GmapSituation_14dbfe0()
{
  __int64 v0;
  __int64 v1;
  __int64* v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[2];

  v15[1] = &GameData_1a86d37;
  v15[0] = game_HashString(&GameData_1a86d37);
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v0 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v15);
  if (v0 == 0 || *(_DWORD*)(v0 + 32) == 0) {
    return false;
  }
  v1 = *(_QWORD*)(GameData_21c96e8 + 8);
  v2 = *(__int64**)(v1 + 8);
  v3 = *(__int64**)(v1 + 16);
  v4 = *(_DWORD*)(v1 + 56);
  if ((v4 & 0x80000000) == 0) {
    while (v2 != v3) {
      v6 = *v2++;
      v5 = v6;
      if (*(_DWORD*)(v6 + 84) == v4) {
        goto LABEL_11;
      }
    }
  LABEL_10:
    v5 = 0;
    goto LABEL_11;
  }
  if (v2 == v3) {
    goto LABEL_10;
  }
  while (1) {
    v5 = *v2;
    if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v5 + 552) == 0) {
      break;
    }
    if (++v2 == v3) {
      goto LABEL_10;
    }
  }
LABEL_11:
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
  if (game_GameModeData_instance_ == 0) {
    return false;
  }
  v13 = *(_QWORD*)(game_GameModeData_instance_ + 24);
  return v13 != 0 && *(_BYTE*)(v13 + 152) == 6 &&
         *(_QWORD*)(v13 + 168) == *(_QWORD*)(*(_QWORD*)v5 + 120LL);
}

__int64 GmapSituation_14dc120(unsigned int a1)
{
  int v1;
  _QWORD* v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;

  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    return v1 == (unsigned __int8)a1;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v1 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    return v1 == (unsigned __int8)a1;
  }
  v3 = (_QWORD*)GameRoutine_82e5c0();
  if (*v3 != 0 && game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (result == 0) {
      return result;
    }
    if (*(_DWORD*)(result + 32) != 0) {
      result = game_GetHero(a1);
      if (result == 0) {
        return result;
      }
      v5 = *(_QWORD*)(result + 8);
      if (v5 != 0) {
        v6 = strchr(*(_QWORD*)(result + 8), 95);
        if (v6 != 0) {
          v5 = v6 + 1;
        }
      }
      v10 = game_util_Format(GameData_1aeb3a4, v5);
      v9 = game_HashString(v10);
      if (game_GameModeData_instance_ == 0) {
        return 1;
      }
      v7 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v9);
      if (v7 == 0) {
        return 1;
      }
      return *(_DWORD*)(v7 + 32) == 0;
    }
  }
  return 0;
}

void GmapSituation_14dc210()
{
  __int64 v0;
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  struct {
    _QWORD* v9;
    __int64 v10;
    _QWORD* v11;
  } v9_;
  struct {
    __int64 v12;
    void* v13;
  } v12_;

  v0 = game_GameModeData_instance_;
  v12_.v13 = &GameData_1a96743;
  v12_.v12 = game_HashString_alt1((__int64)&GameData_1a96743);
  v1 = (__int64*)fw_memory_g_heap_manager_ptr;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  v9_.v9 = v2;
  *v2 = "OFF";
  v2[1] = "ON";
  v9_.v10 = (__int64)(v2 + 2);
  v9_.v11 = v2 + 2;
  GameVariable_827070(v0 + 40, 4u, (unsigned __int64*)&v12_.v12,
                      (__int64*)&v9_.v9, 0, 1);
  if (v9_.v9 != nullptr) {
    v3 = *v1;
    v9_.v10 = (__int64)v9_.v9;
    v4 = 128;
    if (*(_QWORD*)(v3 + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v3 + v4, (__int64)v9_.v9);
  }
  v5 = game_GameModeData_instance_;
  v12_.v13 = &GameData_1a86fa8;
  v12_.v12 = game_HashString_alt1((__int64)&GameData_1a86fa8);
  v6 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v1, 16, 16, 0);
  *v6 = "OFF";
  v6[1] = "ON";
  v9_.v9 = v6;
  v9_.v10 = (__int64)(v6 + 2);
  v9_.v11 = v6 + 2;
  GameVariable_827070(v5 + 40, 4u, (unsigned __int64*)&v12_.v12,
                      (__int64*)&v9_.v9, 0, 1);
  if (v9_.v9 != nullptr) {
    v7 = *v1;
    v9_.v10 = (__int64)v9_.v9;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v7 + v8, (__int64)v9_.v9);
  }
}

__int64 GmapSituation_14dc380(__int64 result, __int64 a2)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD v13[2];

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return result;
  }
  v2 = *(_QWORD*)(GameData_21c96e8 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    if (v4 != v5) {
      v6 = v4;
      do {
        v8 = *v6++;
        v7 = v8;
        if (*(_DWORD*)(v8 + 84) == v3) {
          goto LABEL_16;
        }
      } while (v6 != v5);
    }
  LABEL_15:
    v7 = 0;
    goto LABEL_16;
  }
  if (v4 == v5) {
    goto LABEL_15;
  }
  v9 = v4;
  while (1) {
    v7 = *v9;
    if (*(_QWORD*)(*v9 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
      break;
    }
    if (++v9 == v5) {
      goto LABEL_15;
    }
  }

LABEL_16:
  if ((*(_QWORD*)(v7 + 96) | *(_QWORD*)(v7 + 552)) == 0 &&
      (*(_DWORD*)(v7 + 84) & 0x80000000) != 0) {
    if (v3 < 0) {
      for (; v4 != v5; ++v4) {
        v10 = (__int64*)*v4;
        if (*(_QWORD*)(*v4 + 96) == 0 && v10[69] == 0) {
          goto LABEL_28;
        }
      }
    }
    else if (v4 != v5) {
      while (1) {
        v11 = *v4++;
        v10 = (__int64*)v11;
        if (*(_DWORD*)(v11 + 84) == v3) {
          break;
        }
        if (v4 == v5) {
          goto LABEL_24;
        }
      }
    LABEL_28:
      v12 = *v10;
    LABEL_29:
      result = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
      if (v12 == result) {
        v13[1] = &GameData_1a96743;
        v13[0] = game_HashString(&GameData_1a96743);
        return game_VariableManager_SetFlag(v13, 1);
      }
      return result;
    }
  LABEL_24:
    result = game_gmap_SpotMgr_GetCurrentSpot(result, a2);
    v12 = result;
    goto LABEL_29;
  }
  return result;
}

__int64 GmapSituation_14dc4f0()
{
  __int64 result;
  _QWORD v1[2];

  v1[1] = &GameData_1a86fa8;
  v1[0] = game_HashString(&GameData_1a86fa8);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), v1);
  if (result != 0) {
    return *(_DWORD*)(result + 32) != 0;
  }
  return result;
}

__int64 GmapSituation_14dc560(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* i;
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

  v2 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = 12;
  v3 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 53);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v3) = v2;
  v4 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 44);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v2;
  v5 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 54);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v2;
  v6 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 55);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v2;
  v7 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_BYTE*)(result + 56);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v2;
  v8 = *(int*)(a2 + 20);
  LOBYTE(v2) = *(_DWORD*)(result + 48);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v2;
  v9 = *(int*)(a2 + 20);
  v10 = *(_QWORD*)(result + 16) - *(_QWORD*)(result + 8);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10 >> 3;
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = v10 >> 11;
  v12 = *(__int64**)(result + 8);
  for (i = *(__int64**)(result + 16); v12 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = HIBYTE(v16)) {
    v14 = *v12++;
    v15 = *(int*)(a2 + 20);
    v16 = **(_QWORD**)(v14 + 24);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = v16;
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE1(v16);
    v18 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v18 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE2(v16);
    v19 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v19 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE3(v16);
    v20 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v20 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE4(v16);
    v21 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE5(v16);
    v22 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v22 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE6(v16);
    v23 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v23 + 1;
  }
  return result;
}

_QWORD* GmapSituation_14dc720(_QWORD* result, __int64 a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  const char** v15;
  bool v16;
  unsigned int i;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  const char* v25;
  const char** v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  const char** v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  int v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned __int64 v66;
  unsigned __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  unsigned __int64 v73;
  _QWORD* v74;
  __int64 v75;
  char* v76;
  __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  _QWORD* v88;
  _QWORD* v89;
  struct {
    const char** v90;
    const char** v91;
    unsigned __int64 v92;
  } v90_;

  v2 = result[1];
  result[4] = 0;
  *(_QWORD*)((char*)result + 44) = 0;
  *(_QWORD*)((char*)result + 49) = 0;
  result[2] = v2;
  *((_DWORD*)result + 10) = -1;
  *((_BYTE*)result + 59) = 1;
  v4 = *(int*)(a2 + 20);
  v5 = *(_QWORD*)(a2 + 8);
  v6 = v4 + 1;
  *(_DWORD*)(a2 + 20) = v4 + 1;
  v7 = *(unsigned __int8*)(v5 + v4);
  v8 = v4 + 2;
  if (v7 >= 8) {
    if (v7 < 0xB) {
      LODWORD(v6) = v8;
    }
  }
  else {
    *(_DWORD*)(a2 + 20) = v8;
    *((_BYTE*)result + 52) = *(_BYTE*)(v5 + v6);
    LODWORD(v6) = *(_DWORD*)(a2 + 20) + 1;
    *(_DWORD*)(a2 + 20) = v6;
    if (v7 == 0) {
      v45 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v46 = *GameData_2130e70;
        *(_BYTE*)(v46 + 53) = *(_BYTE*)(game_GameModeData_instance_ + 15);
        *(_DWORD*)(v46 + 44) = *(_DWORD*)(v45 + 64);
        if (*(_DWORD*)(v45 + 60) == 3) {
          *(_BYTE*)(v46 + 55) = 1;
        }
      }
      else {
        v53 = *GameData_2130e70;
        *(_BYTE*)(v53 + 53) = 0;
        *(_DWORD*)(v53 + 44) = 0;
      }
      *((_BYTE*)result + 54) = 1;
      return result;
    }
    v5 = *(_QWORD*)(a2 + 8);
  }
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *((_BYTE*)result + 53) = *(_BYTE*)(v5 + (int)v6);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *((_DWORD*)result + 11) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v9);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *((_BYTE*)result + 54) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) != 0;
  if (v7 >= 3) {
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *((_BYTE*)result + 55) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) != 0;
    if (v7 < 5) {
    LABEL_10:
      v13 = *(int*)(a2 + 20);
      v87 = v7;
      *(_DWORD*)(a2 + 20) = v13 + 1;
      v14 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v13);
      v90_.v91 = nullptr;
      v90_.v92 = 0;
      v88 = result;
      v90_.v90 = nullptr;
      if (v14 != 0) {
        v15 = nullptr;
        v16 = false;
        for (i = 0; i < v14; ++i) {
          v19 = *(int*)(a2 + 20);
          v20 = *(_QWORD*)(a2 + 8);
          v21 = v19 + 1;
          *(_DWORD*)(a2 + 20) = v19 + 1;
          v22 = *(unsigned __int8*)(v20 + v19);
          v23 = v19 + 2;
          *(_DWORD*)(a2 + 20) = v23;
          v24 = v22 | (*(unsigned __int8*)(v20 + v21) << 8);
          v18 = v24 == 0;
          if (v24 != 0) {
            *(_DWORD*)(a2 + 20) = v23 + v24;
            if (!v16) {
              v25 = (const char*)(v20 + v23);
              if ((unsigned __int64)v15 >= v90_.v92) {
                v26 = v90_.v90;
                v27 = (char*)v15 - (char*)v90_.v90;
                v28 = v15 - v90_.v90;
                v29 = v28 + 1;
                if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
                  GameRoutine_667c50_alt1();
                }
                v30 = v90_.v92 - (_QWORD)v90_.v90;
                if ((__int64)(v90_.v92 - (_QWORD)v90_.v90) >> 2 > v29) {
                  v29 = v30 >> 2;
                }
                if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v31 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v31 = v29;
                }
                if (v31 != 0) {
                  if (v31 >> 61 != 0) {
                    goto LABEL_99;
                  }
                  v32 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
                }
                else {
                  v32 = 0;
                }
                v33 = v32 + 8 * v31;
                v34 = (const char**)(v32 + v27 - 8 * v28);
                *(_QWORD*)(v32 + v27) = v25;
                v15 = (const char**)(v32 + v27 + 8);
                memcpy_alt1((__int64)v34, (__int64)v26, v27);
                v90_.v90 = v34;
                v90_.v92 = v33;
                if (v26 != nullptr) {
                  v35 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v35 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v35,
                      (__int64)v26);
                }
              }
              else {
                *v15++ = v25;
              }
              goto LABEL_34;
            }
          }
          else if (!v16) {
            v15 = v90_.v90;
          LABEL_34:
            v90_.v91 = v15;
            goto LABEL_13;
          }
          v18 = true;
        LABEL_13:
          v16 = v18;
        }
      }
      GameRoutine_15446c0_alt1(
          *(__int64**)(*(_QWORD*)GameData_212d740[0] + 8LL), &v90_.v90);
      if (v90_.v90 != nullptr) {
        v90_.v91 = v90_.v90;
        v36 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v36 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, (__int64)v90_.v90);
      }
      result = v88;
      v7 = v87;
      goto LABEL_40;
    }
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *((_BYTE*)result + 56) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) != 0;
  }
  if (v7 - 2 <= 9) {
    goto LABEL_10;
  }
LABEL_40:
  if (v7 < 4) {
    return result;
  }
  v37 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v37 + 1;
  *((_DWORD*)result + 12) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v37);
  if (v7 == 6) {
    v38 = *(_DWORD*)(a2 + 20) + 9;
    goto LABEL_43;
  }
  if (v7 < 0xA) {
    if (v7 != 9) {
      return result;
    }
    v47 = *(int*)(a2 + 20);
    v48 = *(_QWORD*)(a2 + 8);
    v49 = v47 + 1;
    *(_DWORD*)(a2 + 20) = v47 + 1;
    v50 = *(unsigned __int8*)(v48 + v47);
    v51 = v47 + 2;
    *(_DWORD*)(a2 + 20) = v51;
    v52 = v50 | (*(unsigned __int8*)(v48 + v49) << 8);
    if (v52 == 0) {
      return result;
    }
    v38 = v51 + 8 * v52;
  LABEL_43:
    *(_DWORD*)(a2 + 20) = v38;
    return result;
  }
  v39 = *(int*)(a2 + 20);
  v40 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  v41 = *(unsigned __int8*)(v40 + v39);
  *(_DWORD*)(a2 + 20) = v39 + 2;
  v42 = v41 | (*(unsigned __int8*)(v40 + v39 + 1) << 8);
  if (v42 == 0) {
    return result;
  }
  v43 = 0;
  v44 = (__int64*)fw_memory_g_heap_manager_ptr;
  while (2) {
    v55 = *(int*)(a2 + 20);
    v56 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v55 + 1;
    v57 = *(unsigned __int8*)(v56 + v55);
    *(_DWORD*)(a2 + 20) = v55 + 2;
    v58 = *(unsigned __int8*)(v56 + v55 + 1);
    *(_DWORD*)(a2 + 20) = v55 + 3;
    v59 = *(unsigned __int8*)(v56 + v55 + 2);
    *(_DWORD*)(a2 + 20) = v55 + 4;
    v60 = *(unsigned __int8*)(v56 + v55 + 3);
    *(_DWORD*)(a2 + 20) = v55 + 5;
    v61 = *(unsigned __int8*)(v56 + v55 + 4);
    *(_DWORD*)(a2 + 20) = v55 + 6;
    v62 = *(unsigned __int8*)(v56 + v55 + 5);
    *(_DWORD*)(a2 + 20) = v55 + 7;
    v63 = *(unsigned __int8*)(v56 + v55 + 6);
    *(_DWORD*)(a2 + 20) = v55 + 8;
    if (GameData_224e758 == 0 || GameData_224e768 == 0) {
      goto LABEL_58;
    }
    v64 = v57 | (v58 << 8) | (v59 << 16);
    v65 = GameData_224e758 - 1;
    v66 = v64 | (v60 << 24) | (v61 << 32) | (v62 << 40) | (v63 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v56 + v55 + 7) << 56);
    if ((GameData_224e758 & (GameData_224e758 - 1)) != 0) {
      v67 = v66;
      if (v66 >= GameData_224e758) {
        v67 = v66 % GameData_224e758;
      }
    }
    else {
      v67 = v66 & v65;
    }
    v68 = *(_QWORD**)(GameData_224e750 + 8 * v67);
    if (v68 == nullptr) {
      goto LABEL_58;
    }
    v69 = (_QWORD*)*v68;
    if (v69 == nullptr) {
      goto LABEL_58;
    }
    if ((GameData_224e758 & v65) == 0) {
      while (1) {
        v71 = v69[1];
        if (v71 == v66) {
          if (v69[2] == v66) {
            goto LABEL_81;
          }
        }
        else if ((v71 & v65) != v67) {
          goto LABEL_58;
        }
        v69 = (_QWORD*)*v69;
        if (v69 == nullptr) {
          goto LABEL_58;
        }
      }
    }
    while (1) {
      v70 = v69[1];
      if (v70 == v66) {
        break;
      }
      if (v70 >= GameData_224e758) {
        v70 %= (unsigned __int64)GameData_224e758;
      }
      if (v70 != v67) {
        goto LABEL_58;
      }
    LABEL_70:
      v69 = (_QWORD*)*v69;
      if (v69 == nullptr) {
        goto LABEL_58;
      }
    }
    if (v69[2] != v66) {
      goto LABEL_70;
    }
  LABEL_81:
    v72 = v69[3];
    if (v72 == 0) {
      goto LABEL_58;
    }
    v74 = (_QWORD*)result[2];
    v73 = result[3];
    if ((unsigned __int64)v74 < v73) {
      *v74 = v72;
      v54 = (__int64)(v74 + 1);
      goto LABEL_57;
    }
    v75 = result[1];
    v89 = result;
    v76 = (char*)v74 - v75;
    v77 = ((__int64)v74 - v75) >> 3;
    v78 = v77 + 1;
    if ((unsigned __int64)(v77 + 1) >> 61 != 0) {
      GameRoutine_14c2010_alt1();
    }
    v79 = v73 - v75;
    if (v79 >> 2 > v78) {
      v78 = v79 >> 2;
    }
    if ((unsigned __int64)v79 >= 0x7FFFFFFFFFFFFFF8LL) {
      v80 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v80 = v78;
    }
    if (v80 == 0) {
      v81 = 0;
      goto LABEL_93;
    }
    if (v80 >> 61 != 0) {
    LABEL_99:
      GameRoutine_60a210_alt1();
    }
    v81 = fw_memory_HeapManager_Allocate_alt1(*v44, 8 * v80, 16, 0);
  LABEL_93:
    v82 = v81 + 8 * v80;
    v83 = (unsigned __int64)v74 - v75;
    v84 = (__int64)&v76[v81 + -8 * v77];
    *(_QWORD*)&v76[v81] = v72;
    v54 = (__int64)&v76[v81 + 8];
    memcpy_alt1(v84, v75, v83);
    result = v89;
    v89[1] = v84;
    v89[2] = v54;
    v89[3] = v82;
    if (v75 != 0) {
      v85 = fw_memory_g_heap_manager_ptr;
      v86 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v86 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, v75);
      v44 = (__int64*)v85;
      result = v89;
    }
    else {
      v44 = (__int64*)fw_memory_g_heap_manager_ptr;
    }
  LABEL_57:
    result[2] = v54;
  LABEL_58:
    if (++v43 != v42) {
      continue;
    }
    return result;
  }
}

__int64 game_gmap_GmapSituation_CalcBanquet_lambda0_Invoke(__int64 result,
                                                           int* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                 game_TransporterConst_List_instance__ptr[0] +
                             8LL) +
                  8LL) +
       12LL * *a2;
  if (*(_WORD*)(v2 + 4) != 0) {
    **(_DWORD**)(result + 8) += *(unsigned __int16*)(v2 + 2);
  }
  return result;
}

bool game_gmap_GmapSituation_CalcDestroyMiasma_lambda0_Invoke(__int64 a1,
                                                              __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  return v2 != 0 && (unsigned int)*(unsigned __int8*)(v2 + 32) - 3 < 2;
}

bool game_gmap_GmapSituation_CalcExchangeCorps_lambda0_Invoke(__int64 a1,
                                                              __int64 a2)
{
  _QWORD* v2;
  int v3;
  bool v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;

  v2 = *(_QWORD**)a2;
  v3 = *(_DWORD*)(*(_QWORD*)a2 + 540LL);
  v4 = __OFSUB__(v3, 1);
  v5 = (unsigned int)(v3 - 1);
  if (((v5 & 0x80000000) != 0LL) == v4) {
    v6 = v2[3];
    v7 = v2[4] - v6;
    v8 = (_QWORD*)(v6 + 8LL * (unsigned int)v5);
    if (v5 < v7 >> 3) {
      v2 = v8;
    }
  }
  return *v2 == *(_QWORD*)(a1 + 8);
}

bool game_gmap_GmapSituation_CalcTalk_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  bool v3;
  int v4;
  int v5;
  int v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 96) != 0 || *(_QWORD*)(*a2 + 552) == 0;
  if (v3 || *(_QWORD*)(v2 + 104) == 0) {
    return false;
  }
  v4 = *(__int16*)(v2 + 642);
  v5 = *(__int16*)(v2 + 640);
  v6 = *(__int16*)(v2 + 644);
  return v4 == 0 || v5 == 0 || v6 == 0;
}

__int64 game_gmap_GmapSituation_CalcCallAnimal_lambda0_Invoke(__int64 result,
                                                              int* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                 game_TransporterConst_List_instance__ptr[0] +
                             8LL) +
                  8LL) +
       12LL * *a2;
  if (*(_WORD*)(v2 + 4) != 0) {
    **(_DWORD**)(result + 8) += *(unsigned __int16*)(v2 + 2);
  }
  return result;
}

__int64 game_gmap_GmapSituation_CalcMakeFarm_lambda0_Invoke(__int64 result,
                                                            int* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                 game_TransporterConst_List_instance__ptr[0] +
                             8LL) +
                  8LL) +
       12LL * *a2;
  if (*(_WORD*)(v2 + 4) != 0 &&
      *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                           8LL * *(unsigned __int16*)(v2 + 4)) +
                94LL) == 2) {
    **(_DWORD**)(result + 8) += *(unsigned __int16*)(v2 + 2);
  }
  return result;
}

__int64 game_gmap_GmapSituation_CalcBoostFarm_lambda0_Invoke(__int64 a1,
                                                             int* a2)
{
  __int64 v3;
  __int64 result;

  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                 game_TransporterConst_List_instance__ptr[0] +
                             8LL) +
                  8LL) +
       12LL * *a2;
  result = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 152LL))(
      *(_QWORD*)(a1 + 16), *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *(unsigned __int16*)(v3 + 4)));
  if ((result & 1) != 0 && *(_WORD*)(v3 + 4) != 0) {
    **(_DWORD**)(a1 + 8) += *(unsigned __int16*)(v3 + 2);
  }
  return result;
}

__int64 game_gmap_GmapSituation_CalcBladeResonance_lambda0_Invoke_14ddaf0(
    __int64 result, __int64* a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v2 = *(_BYTE**)(result + 8);
  if ((*v2 & 1) == 0) {
    v3 = *a2;
    v4 = *(_QWORD*)(result + 16);
    v6_.v6[0] = GameData_2047518;
    v6_.v6[1] = v2;
    v6_.v7 = v6_.v6;
    v6_.v6[2] = v4;
    game_UnitItemList_EachItem((_WORD*)(v3 + 828), (__int64)v6_.v6);
    result = (__int64)v6_.v7;
    if (v6_.v7 == v6_.v6) {
      v5 = 32;
    }
    else {
      if (v6_.v7 == nullptr) {
        return result;
      }
      v5 = 40;
    }
    return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
  }
  return result;
}

__int64

game_gmap_GmapSituation_CalcBladeResonance_lambda0_Invoke(__int64 result,
                                                          unsigned __int16* a2)
{
  _BYTE* v2;
  __int64 v3;
  int* v4;
  int* v5;
  int v6;

  v2 = *(_BYTE**)(result + 8);
  if ((*v2 & 1) == 0) {
    v3 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 24LL);
    v4 = *(int**)(v3 + 136);
    v5 = *(int**)(v3 + 144);
    if (v4 != v5) {
      while (1) {
        v6 = *v4++;
        if (*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                       8LL * (v6 & 0xFFF)) == *(_QWORD*)(result + 16)) {
          break;
        }
        if (v4 == v5) {
          return result;
        }
      }
      *v2 = 1;
    }
  }
  return result;
}

__int64

game_gmap_GmapSituation_CalcBladeResonance_lambda1_Invoke(__int64 result,
                                                          int* a2)
{
  _BYTE* v2;
  __int64 v3;
  int* v4;
  int* v5;
  int v6;

  v2 = *(_BYTE**)(result + 8);
  if ((*v2 & 1) == 0) {
    v3 = *(
        _QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                            8LL *
                                *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr
                                                                               [0] +
                                                                           8LL) +
                                                                8LL) +
                                                     12LL * *a2 + 4)) +
                 24LL);
    v4 = *(int**)(v3 + 136);
    v5 = *(int**)(v3 + 144);
    if (v4 != v5) {
      while (1) {
        v6 = *v4++;
        if (*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                       8LL * (v6 & 0xFFF)) == *(_QWORD*)(result + 16)) {
          break;
        }
        if (v4 == v5) {
          return result;
        }
      }
      *v2 = 1;
    }
  }
  return result;
}

bool game_gmap_GmapSituation_CheckHellGate_lambda0_Invoke(__int64 a1,
                                                          __int64* a2)
{
  __int64 v2;
  __int64 v3;
  _BOOL8 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *a2;
  if ((*(_WORD*)(*a2 + 544) & 0x800) == 0) {
    v3 = *(_QWORD*)(v2 + 96);
    if (v3 != 0 && (unsigned int)*(unsigned __int8*)(v3 + 32) - 3 <= 1) {
      *(_WORD*)(v2 + 544) = *(_WORD*)(*a2 + 544) | 0x800;
      if (GameData_21f1618 != 0) {
        return GameHr_995200(v2 + 112);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
