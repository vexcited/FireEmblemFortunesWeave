#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__attribute__((swiftcall)) void GameRoutine_936f60(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__attribute__((swiftcall)) void GameRoutine_93c6a0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, _QWORD);
__int64 GameRoutine_12c0bc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c16e0(_QWORD);
__int64 GameRoutine_12c1f80(_QWORD);
__int64 GameRoutine_12c20f0(_QWORD);
__int64 GameRoutine_12c2260(_QWORD);
__int64 GameRoutine_12c2aa0(_QWORD);
__int64 GameRoutine_12c4be0(_QWORD);
__int64 GameRoutine_12c4de0(_QWORD);
__int64 GameRoutine_12c5000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c51b0(_QWORD, _QWORD);
__int64 GameRoutine_12c56a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c5890(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c59a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c5be0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12fdee0(_QWORD);
__int64 GameRoutine_67ed20(_QWORD*);
__int64 GameRoutine_6c3050(_QWORD);
__int64 GameRoutine_6c3050_alt1(__int64, __int64, __int64, __int64, __int64,
                                __int64) __asm__("GameRoutine_6c3050");
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c51e0_alt1(__int64 result) __asm__("GameRoutine_6c51e0");
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6c6da0_alt1(_QWORD) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_6c6ec0(__int64);
__int64 GameRoutine_6c6ec0_alt1(_QWORD) __asm__("GameRoutine_6c6ec0");
__int64 GameRoutine_6ca260(__int64);
__int64 GameRoutine_6cab80(__int64);
__int64 GameRoutine_6cb640(void);
__int64 GameRoutine_6cc0a0(_QWORD);
__int64 GameRoutine_6ce1c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6d1740(_QWORD, _QWORD);
__int64 GameRoutine_6d1740_alt1(__int64,
                                __int64*) __asm__("GameRoutine_6d1740");
__int64 GameRoutine_6ddce0(_QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6e4de0(_QWORD);
__int64 GameRoutine_6e50e0(_QWORD);
__int64 GameRoutine_6e5480(_QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 GameRoutine_6fcb20(_QWORD, _QWORD);
__int64 GameRoutine_7152e0(void);
__int64 GameRoutine_7152e0_alt1(_QWORD) __asm__("GameRoutine_7152e0");
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74cd60(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_850ce0(_QWORD, _QWORD);
__int64 GameRoutine_851060(_QWORD, _QWORD);
__int64 GameRoutine_8c5700(_QWORD, _QWORD);
__int64 GameRoutine_8c5c60(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_96de20(void);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 LegionPool_937de0(_QWORD, _QWORD);
__int64 LegionPool_938460(_QWORD);
__int64 RidePool_93d1e0(_QWORD, _QWORD);
__int64 RidePool_93d8e0(_QWORD);
__int64 UnitHeroes_6d2b90(_QWORD, _QWORD);
__int64 UnitHeroes_6d2c90(_QWORD, _QWORD);
__int64 UnitHeroes_6d3800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitHeroes_6d5120(_QWORD, _QWORD, _QWORD);
__int64 UnitItemList_710ea0(_QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cf20(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d7e0(_QWORD, _QWORD);
__int64 UnitSkillList_84d980(_QWORD, _QWORD);
__int64 UnitSkillList_84dea0(_QWORD, _QWORD, _QWORD);
__int64 UnitVariables_930e20(_QWORD);
__int64 Unit_6c8a80_alt1(_QWORD, _QWORD, _QWORD, _QWORD) __asm__("Unit_6c8a80");
__int64 Unit_6c9ef0_alt1(_QWORD) __asm__("Unit_6c9ef0");
__int64 Unit_6cb490_alt1(_QWORD) __asm__("Unit_6cb490");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_GetHeroIndex(_QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitActor_TryReload(_QWORD);
__int64 game_UnitAutoGrowSkillUpdater_Update(_QWORD);
__int64 game_UnitItemList_ClearStockUses(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_UnitItemList_HasStockUses(_QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_UnitSkillList_Remove(_QWORD);
__int64 game_Unit_CheckEquipment(_QWORD);
__int64 game_Unit_EquipFirstWeapon(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetUnknown6cba30(_QWORD);
__int64 game_Unit_GetUnknown6cbca0(void);
__int64 game_Unit_SetPollution(_QWORD, _QWORD);
__int64 game_Unit_SkillList_Replace(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 game_Unit_Unknown6c8630(_QWORD);
__int64 game_Unit_Unknown6cd010(void);
__int64 game_Unit_Unknown6cd8f0(_QWORD);
__int64 game_Unit_Unknown6d2380(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1acaa0c;
extern _UNKNOWN GameData_1ad27ed;
extern _UNKNOWN GameData_1ada150;
extern _UNKNOWN GameData_1ae1c3a;
extern _UNKNOWN GameData_1ae9402;
extern _UNKNOWN GameData_1f920c0;
extern _UNKNOWN GameData_21ca298;
extern _UNKNOWN GameData_21ca2c0;
extern _UNKNOWN GameData_21ca2d0;
extern _UNKNOWN GameData_21ca2e0;
extern _UNKNOWN game_g_random_mutex;
extern _UNKNOWN* GameData_212c8a8;
extern __int16 GameData_21ca2b8;
extern __int16 GameData_21ca2c8;
extern __int16 GameData_21ca2d8;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f914e8[])();
extern __int64 (*GameData_1f915e8[])();
extern __int64 (*GameData_1f91668[])();
extern __int64 (*GameData_1f916e8[])();
extern __int64 (*GameData_1f91ee8[])();
extern __int64 (*GameData_1f91f68[])();
extern __int64 (*GameData_1f91ff8[])();
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_1f94310[])();
extern __int64 GameData_21c99a8;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca060;
extern __int64 GameData_21ca288;
extern __int64 GameData_21ca290;
extern __int64 GameData_21ca300;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f4280;
extern __int64 GameData_21f42d0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212ceb0;
extern __int64* GameData_2130cd0[6];
extern __int64* GameData_2130cd8[5];
extern int GameData_21d9860;
extern int game_g_shared_system_skills;
struct PseudoSret GameRoutine_127cec0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD, _QWORD,
                        _QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6e3e20(void);
__int64 Unit_6c82e0(__int64 a1);
__int64 Unit_6c8300(_QWORD* a1, char a2);
__int64 Unit_6c8a80(__int64 result, int a2, int a3, __int64 a4);
__int64 Unit_6c9cf0(__int64 a1, __int64 a2);
__int64 Unit_6c9ef0(__int64 a1);
__int64 Unit_6ca760(__int64 a1, _WORD* a2);
__int64 Unit_6cb080(__int64 a1, _WORD* a2);
__int64 Unit_6cb490(__int64 a1);
_DWORD* Unit_6cbb60(__int64 a1);
__int64 Unit_6cbdc0(_QWORD* a1, _DWORD* a2, unsigned __int16* a3, int a4);
__int64 Unit_6cc580(__int64 a1, _DWORD* a2);
__int64 Unit_6cc7e0(__int64 a1, __int64 a2);
__int64 Unit_6cc9e0(__int64 a1, _DWORD* a2);
__int64 Unit_6ccca0(__int64 a1, __int64 a2);
__int64 Unit_6cd120(__int64 a1, char a2, _DWORD* a3);
__int64 Unit_6cd9c0(__int64 a1);
__int64 Unit_6cdd40_alt1(__int64 a1, char a2) __asm__("Unit_6cdd40");
__int64 Unit_6cdf80_alt1(__int64 a1, char a2) __asm__("Unit_6cdf80");
__int64 Unit_6ce660(__int64 a1);
__int64 Unit_6cef00(__int64 a1, __int64 a2);
__int64 Unit_6cf1c0(__int64 a1, __int64 a2);
__int64 Unit_6cf460(__int64 a1);
__int64 Unit_6cf740(__int64 a1);
__int64 Unit_6cfa20(__int64 a1);
__int64 Unit_6cfde0(__int64 a1);
__int64 Unit_6d00c0(__int64 a1);
bool Unit_6d0400(__int64 a1);
__int64 Unit_6d0700(__int64 result, _DWORD* a2, char a3);
__int64 Unit_6d09e0(__int64 a1, __int64 a2, __int64 a3);
_QWORD* Unit_6d0b20(_QWORD* result, _DWORD* a2, char a3);
__int64 game_Unit_EachEducateTargetSkill(__int64 a1, __int64 a2, __int64 a3);
__int64 Unit_6d8180(__int64 a1, __int64 a2, int a3);
__int64 Unit_6d8390_alt1(__int64 a1, __int64 a2, int a3) __asm__("Unit_6d8390");
__int64 Unit_6db740_alt1(__int64 a1, char a2, char a3) __asm__("Unit_6db740");
__int64 Unit_6de340(__int64 a1);
bool Unit_6de520(__int64 a1, __int64 a2);
__int64 Unit_6df300(__int64 result, _BYTE* a2);
__int64 game_Unit_GetMorphSkill(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 Unit_6e0810(__int64 result);
__int64 Unit_6e09a0(__int64 a1);
__int64 game_Unit_LevelUp(__int64 a1, char a2);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* GameRoutine_66dd60(_QWORD* result, unsigned __int64, _DWORD*);
_QWORD* UnitItemList_712a40(_QWORD* result);
_QWORD*
game_UnitPool_Find_6ead60_alt1(__int64*,
                               _DWORD*) __asm__("game_UnitPool_Find_6ead60");
_WORD* GameRoutine_70d370(_WORD* result, __int64);
_WORD*
game_UnitItemList_EachItem_alt1(_WORD* result,
                                __int64) __asm__("game_UnitItemList_EachItem");
__attribute__((swiftcall)) void
    game_UnitUtil_UniqueMap_Commit_89abc0(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64* GameRoutine_12c23e0(__int64*);
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64* game_820d50(int);
__int64* game_9a28e0(int);
__int64 CharacterBuilder_1084780(__int64 result);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_11ea590(__int64, __int64*);
__int64 GameRoutine_12c2260_alt1(__int64) __asm__("GameRoutine_12c2260");
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_2b0();
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_60a020_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a020");
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_682660(_QWORD);
__int64 GameRoutine_6c3050_alt2(__int64) __asm__("GameRoutine_6c3050");
__int64 GameRoutine_6e2a20(__int64);
__int64 GameRoutine_6e2b60(__int64);
__int64 GameRoutine_6e3e40(__int64 result, int*, _QWORD*, __int64, char);
__int64 GameRoutine_6e5480_alt1(__int64 result) __asm__("GameRoutine_6e5480");
__int64 GameRoutine_6e5c80(__int64);
__int64 GameRoutine_6e5dc0(__int64);
__int64 GameRoutine_6e5dc0_alt1(_QWORD) __asm__("GameRoutine_6e5dc0");
__int64 GameRoutine_6fc510_alt1(__int64) __asm__("GameRoutine_6fc510");
__int64 GameRoutine_70f2d0(__int64 result, __int64);
__int64 GameRoutine_7c8860(__int64);
__int64 GameRoutine_7fbcc0(_QWORD, _QWORD);
__int64 GameRoutine_851480(__int64*, __int64*);
__int64 GameRoutine_8517e0(__int64 result, int*, __int64, char);
__int64 GameRoutine_8f76e0(__int64 result, __int64);
__int64 GameRoutine_932c10(_QWORD, _QWORD);
__int64 GameRoutine_935d00(__int64 result, _QWORD*, unsigned __int64, _QWORD*);
__int64 GameRoutine_97b9e0(__int64 result, __int64);
__int64 GameRoutine_9a28a0(int);
__int64 GameRoutine_9ae660(__int64 result, __int64);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 UnitHeroes_6d3800_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("UnitHeroes_6d3800");
__int64 UnitHeroes_6d46e0(_QWORD, _QWORD);
__int64 UnitItemList_713a00(_QWORD*, __int64*);
__int64 UnitItem_6e8bc0_alt1(_QWORD, _QWORD) __asm__("UnitItem_6e8bc0");
__int64 UnitMastery_7fd6e0(__int64, __int64, int);
__int64 UnitSkillList_84cc00_alt1(__int64*, _DWORD*,
                                  __int64) __asm__("UnitSkillList_84cc00");
__int64 UnitSkillList_84cf20_alt1(__int64, __int64,
                                  char) __asm__("UnitSkillList_84cf20");
__int64
UnitSkillList_84d980_alt1(__int64*,
                          unsigned int*) __asm__("UnitSkillList_84d980");
__int64 UnitVariables_931520(_QWORD, _QWORD, _QWORD);
__int64 Unit_6cc580_alt1(_QWORD, _QWORD, _QWORD) __asm__("Unit_6cc580");
__int64 Unit_6d2480_alt1(_QWORD, _QWORD, _QWORD, _QWORD) __asm__("Unit_6d2480");
__int64 Unit_6ddce0_alt1(_QWORD) __asm__("Unit_6ddce0");
__int64 Unit_930d50_alt1(_QWORD, _QWORD) __asm__("Unit_930d50");
__int64 Unit_934e20_alt1(_QWORD, _QWORD, _QWORD, _QWORD) __asm__("Unit_934e20");
__int64 Unit_935180_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD) __asm__("Unit_935180");
__int64 Unit_935400_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD) __asm__("Unit_935400");
__int64 Unit_935740_alt1(_QWORD, _QWORD, _QWORD) __asm__("Unit_935740");
__int64 Unit_935ac0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD) __asm__("Unit_935ac0");
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_6c51e0(__int64 result);
__int64 game_6c6ec0(__int64);
__int64 game_6e50e0(__int64 result);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_GetHero_alt1(unsigned __int8) __asm__("game_GetHero");
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_UnitActor_TryReload_alt1(_QWORD*) __asm__("game_UnitActor_TryReload");
__int64 game_UnitAutoGrowSkillUpdater_Update_alt1(__int64*) __asm__(
    "game_UnitAutoGrowSkillUpdater_Update");
__int64 game_UnitItemList_Add(_WORD*, _DWORD*, _WORD*, char);
__int64 game_UnitItemList_Add_alt1(_QWORD, _QWORD, _QWORD,
                                   _QWORD) __asm__("game_UnitItemList_Add");
__int64 game_UnitItemList_Equip(__int64, unsigned int);
__int64 game_UnitItemList_Sort_alt1(__int64, unsigned int,
                                    int) __asm__("game_UnitItemList_Sort");
__int64 game_UnitPool_Count(int*);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitSkill_Deserialize(__int64 result, __int64);
__int64
game_Unit_CheckEquipment_alt1(__int64) __asm__("game_Unit_CheckEquipment");
__int64
game_Unit_EquipFirstWeapon_alt1(__int64) __asm__("game_Unit_EquipFirstWeapon");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64
game_Unit_GetUnknown6cba30_alt1(__int64) __asm__("game_Unit_GetUnknown6cba30");
__int64 game_Unit_OnHpChanged(__int64);
__int64
game_Unit_Unknown6c4610_alt1(__int64) __asm__("game_Unit_Unknown6c4610");
__int64
game_Unit_Unknown6c8630_alt1(__int64) __asm__("game_Unit_Unknown6c8630");
__int64 game_Unit_Unknown6cd8f0_alt1(_WORD*) __asm__("game_Unit_Unknown6cd8f0");
__int64
game_Unit_Unknown6d2380_alt1(__int64) __asm__("game_Unit_Unknown6d2380");
__int64 game_Unit_UpdateShape(__int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
bool GameRoutine_6fc7a0_alt1(__int64, _QWORD*) __asm__("GameRoutine_6fc7a0");
bool Signal_Shoot_820d00(int);
bool UnitItem_6e8bc0(unsigned __int16*, __int64);
bool UnitSkillList_843ae0(_DWORD*, __int64, _WORD*);
bool game_HasActiveSkill_843420_alt1(_DWORD*, __int64) __asm__(
    "game_HasActiveSkill_843420");
bool game_Unit_CanPollute(_QWORD*);
bool game_Unit_Unknown6c9980(__int64);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
char* GameRoutine_a51530(__int64, char*);
char* Unit_935f40_alt1(char* result, char*, __int64*, __int64, __int64, __int64,
                       __int64) __asm__("Unit_935f40");
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a89036;
extern _UNKNOWN GameData_1ac6923;
extern _UNKNOWN GameData_1aed5ad;
extern _UNKNOWN GameData_21f4209;
extern _UNKNOWN GameData_21f4220;
extern __int64 (*GameData_1f91b68[])();
extern __int64 (*GameData_1f91d68[])();
extern __int64* GameData_212c998[148];
extern __int64* GameData_212cd78[24];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c060;
extern __int64 GameData_21c9f70;
extern __int64 GameData_21ca000;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca420;
extern __int64 GameData_21ca428;
extern __int64 GameData_21ca438;
extern __int64 GameData_21d9968;
extern __int64 GameData_21d9970;
extern __int64 GameData_21d99a8;
extern __int64 GameData_21d99b0;
extern __int64 GameData_21f4218;
extern __int64 GameData_21f49b8;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 msg_MessageManager_instance_;
extern char GameData_1b38ee8[2];
extern char GameData_21f4208;
extern int GameData_21d97e0;
float Height_7c4d10(__int64, float, float);
long double UnitActor_81ba20(__int64);
unsigned __int64* game_6e4de0(unsigned __int64* result);
unsigned __int64 GameRoutine_7155c0();
void __attribute__((noreturn)) GameRoutine_6e5c60();
void __attribute__((noreturn)) GameRoutine_935a90(void);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a250(_QWORD);
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
float Unit_6c7fa0(__int64 a1, _OWORD* a2);
__int64 Unit_6c91f0(_QWORD* a1, _QWORD* a2);
__int64 Unit_6c9540(__int64 a1, _DWORD* a2);
bool Unit_6c9ab0(_QWORD* a1, _DWORD* a2, unsigned __int16* a3);
__int64 Unit_6ca260(__int64 a1);
__int64 Unit_6cab80(__int64 a1);
__int64 Unit_6cb640(__int64 a1);
__int64 Unit_6cc0a0(__int64 a1);
__int64 Unit_6ce1c0(__int64* a1, __int64 a2, __int64 a3, int a4, char a5);
__int64 Unit_6d1530_alt1(__int64 a1, __int64 a2, __int64 a3,
                         int a4) __asm__("Unit_6d1530");
__int64 game_Unit_AutoGrowMasteryLevel(__int64 a1, __int64* a2);
__int64 Unit_6d2480(__int64 result, __int64 a2, char a3, char a4);
__int64 Unit_6d86a0(__int64 a1, __int64 a2, int a3);
__int64 Unit_6d9000(__int64 a1);
__int64 Unit_6dacc0(__int64 a1);
__int64 Unit_6dcb40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6);
__int64 Unit_6dcf40(__int64 a1, int a2, char a3);
__int64 Unit_6ddce0(__int64 a1);
bool Unit_6de0b0(__int64 a1, unsigned int a2, __int64 a3);
__int64 Unit_6dfe00(__int64 result, __int64 a2);
__int64 Unit_6e1e20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6);
_QWORD* Unit_84e240(_QWORD* result, __int64* a2);
void Unit_930ca0(__int64 a1, __int64 a2);
__int64 Unit_930d50(__int64 a1, __int64 a2);
unsigned __int8* Unit_931120(unsigned __int8* a1);
unsigned __int64 Unit_9313d0(unsigned __int64 result, char* a2);
__attribute__((swiftcall)) void Unit_932880(PSEUDO_X8 x8_, __int64 a1);
void Unit_9331a0(__int64 a1, __int64 a2);
__int64 Unit_933800(__int64 result, unsigned __int8* a2, unsigned __int8** a3,
                    __int64 a4, char a5);
_BYTE* Unit_934e20(_BYTE* result, _BYTE* a2, _BYTE* a3, unsigned __int8** a4);
_BYTE* Unit_935180(_BYTE* a1, _BYTE* a2, _BYTE* a3, _BYTE* a4,
                   unsigned __int8** a5);
_BYTE* Unit_935400(_BYTE* a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, _BYTE* a5,
                   unsigned __int8** a6);
bool Unit_935740(unsigned __int8* a1, unsigned __int8* a2,
                 unsigned __int8** a3);
char* Unit_935ac0(char* result, char* a2, unsigned __int64 a3, _QWORD* a4,
                  __int64 a5);
char* Unit_935f40(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7);
_BYTE* GameHr_12c51b0(_BYTE* result, char);
_QWORD*
GameRoutine_12fdee0_alt1(unsigned __int8) __asm__("GameRoutine_12fdee0");
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64, unsigned __int8*, __int64, char);
__attribute__((swiftcall)) void game_127cec0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
    PSEUDO_X8, __int64, unsigned __int16*,
    int) __asm__("game_UnitUtil_UniqueMap_Commit_89abc0");
__int64 GameHr_12c4be0(__int64);
__int64 GameHr_12c59a0(__int64 result, _QWORD*, char);
__int64 GameHr_6d5120(__int64 result, int, __int64);
__int64 GameHr_84cf20(__int64, __int64, char);
__int64
GameRoutine_12c1f80_alt1(unsigned __int8*) __asm__("GameRoutine_12c1f80");
__int64 GameRoutine_12c5000_alt1(_BYTE*, __int64,
                                 char) __asm__("GameRoutine_12c5000");
__int64 GameRoutine_7152e0_alt2() __asm__("GameRoutine_7152e0");
__int64 GameRoutine_930b90_alt1(__int64, __int64) __asm__("GameRoutine_930b90");
__int64 LegionPool_937de0_alt1(__int64, __int64) __asm__("LegionPool_937de0");
__int64 LegionPool_938460_alt1(__int64) __asm__("LegionPool_938460");
__int64 RidePool_93d1e0_alt1(__int64, __int64) __asm__("RidePool_93d1e0");
__int64 RidePool_93d8e0_alt1(__int64) __asm__("RidePool_93d8e0");
__int64 UnitHeroes_6d2b90_alt1(__int64,
                               unsigned __int8*) __asm__("UnitHeroes_6d2b90");
__int64 Unit_6ce1c0_alt1(_QWORD*, __int64, __int64, int,
                         char) __asm__("Unit_6ce1c0");
__int64 game_12c4de0(__int64);
__int64 game_12c56a0(__int64 result, __int64, char);
__int64 game_12c5890(__int64, _QWORD*, char);
__int64 game_12c5be0(_WORD*, __int64);
__int64 game_GetHeroIndex_alt1(__int64) __asm__("game_GetHeroIndex");
__int64 game_UnitSkillList_GetMaxValue_alt1(_QWORD*, __int64*, __int64) __asm__(
    "game_UnitSkillList_GetMaxValue");
__int64 game_Unit_AutoGrowMasteryLevel_alt1(unsigned __int64, __int64*) __asm__(
    "game_Unit_AutoGrowMasteryLevel");
__int64
game_Unit_Unknown6cd010_alt1(__int64) __asm__("game_Unit_Unknown6cd010");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
bool UnitHeroes_6d2c90_alt1(__int64, __int64*) __asm__("UnitHeroes_6d2c90");
unsigned __int64 UnitHeroes_6d3800_alt2(__int64, int, int,
                                        char) __asm__("UnitHeroes_6d3800");
void AutoGrowJobFile_12c0bc0(__int64, __int64, char**);
void GameRoutine_12c20f0_alt1(_QWORD*) __asm__("GameRoutine_12c20f0");
void GameRoutine_12c2aa0_alt1(_QWORD*) __asm__("GameRoutine_12c2aa0");
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void GameRoutine_6e5480_alt2(__int64*) __asm__("GameRoutine_6e5480");
void UnitVariables_930e20_alt1(__int64) __asm__("UnitVariables_930e20");
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
void game_12c16e0(_QWORD*);
void game_6e4de0_alt1(unsigned __int64*,
                      unsigned __int64*) __asm__("game_6e4de0");
void game_6e4de0_alt2(unsigned __int64*) __asm__("game_6e4de0");
void game_6e50e0_alt1(__int64) __asm__("game_6e50e0");
void game_UnitAutoGrowSkillUpdater_Update_alt2(__int64*) __asm__(
    "game_UnitAutoGrowSkillUpdater_Update");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Unit_6cdd40(__int64 a1, char a2);
void Unit_6cdf80(__int64 a1, char a2, __int64 a3);
void Unit_6d1530(__int64 a1, __int64 a2, __int64 a3, int a4);
void Unit_6d8390(unsigned __int64 a1, __int64 a2, int a3);
void Unit_6db740(__int64 a1, char a2, char a3);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* GameRoutine_6e7840(char*, char*, char*);
char* Unit_6e7460_alt1(char* result, char*, int*, _QWORD*, __int64, __int64,
                       __int64, __int64) __asm__("Unit_6e7460");
int* Unit_6e6fa0(int* result, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                 __int64 a6);
int* Unit_6e7200(int* result, int* a2, _QWORD* a3, unsigned __int64 a4,
                 int* a5);
char* Unit_6e7460(char* result, char* a2, char* a3, _QWORD* a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8);
__int64 Unit_6c9c00(_QWORD* a1, __int64 a2);

float Unit_6c7fa0(__int64 a1, _OWORD* a2)
{
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  _OWORD* v6;
  bool v7;
  float v8;
  __int64 v9;
  __int64 v10;
  int v11;
  float v12;
  float v13;
  char* v14;
  char* v15;
  float v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  _OWORD* v21;
  _QWORD* v22;
  __int64* v23;
  __int64 v24;
  int v26;
  __int128 v27;
  int v28;

  v3 = *(_QWORD*)(a1 + 1744);
  v4 = *(unsigned int*)((char*)((_UNKNOWN*)0x1E0LL) +
                        game_g_shared_system_skills_ptr);
  v5 = *(_QWORD*)(a1 + 1752) - v3;
  v28 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1E0LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if (((v4 >> 5) & 0x7F) + 1 <= v5 >> 2 &&
      ((*(_DWORD*)(v3 + 4 * ((v4 >> 5) & 0x7F)) >> v4) & 1) != 0) {
    v6 = a2;
    v7 = game_HasActiveSkill_843420_alt1(&v28, a1 + 1744);
    v8 = 0x0.0p+0f;
    a2 = v6;
    if (v7) {
      return v8;
    }
  }
  if (*(int*)(a1 + 592) < 2) {
    goto LABEL_25;
  }
  v9 = *(_QWORD*)(a1 + 408);
  if (v9 == 0) {
    v9 = *(_QWORD*)(a1 + 400);
    if (v9 == 0) {
      goto LABEL_25;
    }
    if (*(_QWORD*)(v9 + 88) != 0) {
      v21 = a2;
      v22 = (_QWORD*)(a1 + 400);
      v23 = game_9a28e0(1);
      if (game_GameModeData_instance_ == 0 ||
          (v24 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v23)) == 0 ||
          *(_DWORD*)(v24 + 32) == 0) {
        if ((unsigned int)GameRoutine_9a28a0(2) != 0) {
          v22 = (_QWORD*)(*v22 + 88LL);
        }
        else {
          v26 = (unsigned __int8)GameRoutine_7155c0();
          if (v26 != 3) {
            a2 = v21;
            if (v26 == 2) {
              v22 = (_QWORD*)(*v22 + 88LL);
            }
          LABEL_24:
            v9 = *v22;
            if (*v22 == 0) {
              goto LABEL_25;
            }
            goto LABEL_6;
          }
          if ((*(_BYTE*)(a1 + 418) & 4) != 0) {
            v22 = (_QWORD*)(*(_QWORD*)(a1 + 400) + 88LL);
          }
        }
      }
      a2 = v21;
      goto LABEL_24;
    }
  }
LABEL_6:
  if (*(_BYTE*)(v9 + 48) == 8) {
    v10 = GameData_21ca2e8;
    if (GameData_21ca2e8 != 0) {
      v11 = *(_DWORD*)(a1 + 592);
      LODWORD(v12) = *((_QWORD*)a2 + 1);
      v27 = *a2;
      v13 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61464),
                          COERCE_FLOAT(*a2), v12);
      v14 = *(char**)(a1 + 600);
      v15 = *(char**)(a1 + 608);
      v8 = v13;
      if (v14 != v15) {
        v16 = (float)(v11 - 1);
        v17 = v10;
        v18 = v12 - (float)(v16 * 0x1.4000000000000p+1f);
        v19 = *(float*)&v27 - (float)(v16 * 0x1.4000000000000p+1f);
        do {
          if (v17 != 0) {
            v20 = Height_7c4d10(
                *(_QWORD*)(v17 + 61464),
                v19 + (float)((float)*v14 * 0x1.4000000000000p+2f),
                v18 + (float)((float)v14[1] * 0x1.4000000000000p+2f));
            v17 = v10;
          }
          else {
            v20 = 0x0.0p+0f;
          }
          v14 += 4;
          if (v8 < v20) {
            v8 = v20;
          }
        } while (v14 != v15);
      }
      return v8;
    }
    return 0x0.0p+0f;
  }
LABEL_25:
  if (GameData_21ca2e8 != 0) {
    return Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61464),
                         COERCE_FLOAT(*a2), COERCE_FLOAT(*((_QWORD*)a2 + 1)));
  }
  return 0x0.0p+0f;
}

__int64 Unit_6c82e0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 2136) != 0) {
    return GameRoutine_97b2f0(a1 + 2104);
  }
  else {
    return GameRoutine_67ed20(*(_QWORD**)(a1 + 392));
  }
}

__int64 Unit_6c8300(_QWORD* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  char v10;
  __int64 v11;
  int v13;

  v2 = a1[49];
  if (v2 == 0) {
    return 0;
  }
  if ((a2 & 1) != 0) {
    goto LABEL_16;
  }
  v3 = a1[55];
  v4 = v3 != 0 ? *(_BYTE*)(v3 + 16) : 9;
  if (((1 << v4) & 0xF1) != 0) {
    if ((v5 = a1[218], v6 = a1[219] - v5,
         v13 = game_g_shared_system_skills & 0xFFF,
         (v7 = ((unsigned __int64)(unsigned int)game_g_shared_system_skills >>
                5) &
               0x7F) +
                 1 >
             v6 >> 2) ||
        ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >>
          game_g_shared_system_skills) &
         1) == 0 ||
        (game_HasActiveSkill_843420(&v13, a1 + 218) & 1) == 0 ||
        ((v9 = a1[55]) == 0 ? (v10 = 9) : (v10 = *(_BYTE*)(v9 + 16)),
         ((1 << v10) & 0xF1) == 0)) {
    LABEL_16:
      if (game_GameModeData_instance_ != 0) {
        v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        if (v11 != 0 && *(_QWORD*)(v11 + 336) != 0) {
          return GameRoutine_96de20();
        }
      }
    }
  }
  if (*(_QWORD*)(v2 + 336) != 0) {
    return GameRoutine_96de20();
  }
  else {
    return 0;
  }
}

__int64 Unit_6c8a80(__int64 result, int a2, int a3, __int64 a4)
{
  _BYTE* v4;
  char* v8;
  char* v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;

  v4 = (_BYTE*)GameData_21ca300;
  if (GameData_21ca300 != 0) {
    if (*(int*)(result + 592) < 2) {
      if (*(unsigned __int8*)(GameData_21ca300 + 18) >
              (unsigned int)(unsigned __int8)(a2 - *(_BYTE*)(GameData_21ca300 +
                                                             16)) &&
          *(unsigned __int8*)(GameData_21ca300 + 19) >
              (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(GameData_21ca300 +
                                                             17))) {
        v11 = *(_QWORD*)(a4 + 32);
        v13 = a2;
        v12 = a3;
        if (v11 == 0) {
        LABEL_10:
          GameRoutine_60a310(v11);
        }
        return (*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v11 + 48LL))(
            v11, &v13, &v12);
      }
    }
    else {
      v8 = *(char**)(result + 600);
      v9 = *(char**)(result + 608);
      while (v8 != v9) {
        if ((unsigned __int8)v4[18] >
            (unsigned int)(unsigned __int8)(a2 + *v8 - v4[16])) {
          v10 = a3 + v8[1];
          if ((unsigned __int8)v4[19] >
              (unsigned int)(unsigned __int8)(a3 + v8[1] - v4[17])) {
            v11 = *(_QWORD*)(a4 + 32);
            v13 = a2 + *v8;
            v12 = v10;
            if (v11 == 0) {
              goto LABEL_10;
            }
            result = (*(__int64 (**)(__int64, int*, int*))(
                *(_QWORD*)v11 + 48LL))(v11, &v13, &v12);
          }
        }
        v8 += 4;
      }
    }
  }
  return result;
}

__int64 Unit_6c91f0(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  char v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _BOOL4 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v24;
  int v25;

  v2 = a1[49];
  if (v2 == 0 || *(_QWORD*)(v2 + 272) == 0) {
    return 0;
  }
  v3 = a1[55];
  v5 = v3 != 0 ? *(_BYTE*)(v3 + 16) : 9;
  if (((1 << v5) & 0xF1) == 0) {
    return 0;
  }
  v7 = game_g_shared_system_skills_ptr;
  v8 = a1[218];
  v9 = *(unsigned int*)((char*)((_UNKNOWN*)0x168LL) +
                        game_g_shared_system_skills_ptr);
  v10 = a1[219] - v8;
  v24 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if (((v9 >> 5) & 0x7F) + 1 <= v10 >> 2 &&
      ((*(_DWORD*)(v8 + 4 * ((v9 >> 5) & 0x7F)) >> v9) & 1) != 0 &&
      game_HasActiveSkill_843420_alt1(&v24, (__int64)(a1 + 218))) {
    return 0;
  }
  v11 = game_820d50(3);
  if (game_GameModeData_instance_ != 0 &&
      (v12 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)v11)) != 0) {
    v13 = *(_DWORD*)(v12 + 32) == 0;
    v14 = a2;
    if (a2 == nullptr) {
      return 0;
    }
  }
  else {
    v13 = true;
    v14 = a2;
    if (a2 == nullptr) {
      return 0;
    }
  }
  if (!v13) {
    return 0;
  }
  v15 = v14[49];
  if (v15 == 0 || *(_QWORD*)(v15 + 272) == 0) {
    return 0;
  }
  v16 = v14[55];
  v17 = v16 != 0 ? *(_BYTE*)(v16 + 16) : 9;
  if (((1 << v17) & 0xF1) == 0) {
    return 0;
  }
  v25 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) + v7) & 0xFFF;
  if ((game_HasSkill(v14 + 218, (unsigned int*)&v25) & 1) != 0 ||
      !Signal_Shoot_820d00(3)) {
    return 0;
  }
  v18 = a1[49];
  if (v18 != 0) {
    v19 = a2[49];
    if (v19 == 0) {
      return 0;
    }
    v20 = *(_QWORD*)(v18 + 272);
  }
  else {
    v19 = a2[49];
    if (v19 == 0) {
      return 0;
    }
    v20 = 0;
  }
  v21 = *(_QWORD*)(v19 + 272);
  if (v20 != v21 && v21 != 0) {
    v22 = *(_QWORD*)(v18 + 272);
    if (*(_BYTE*)(*(_QWORD*)(v22 + 40) + *(unsigned __int16*)(v21 + 16)) != 0 ||
        *(_BYTE*)(*(_QWORD*)(v21 + 40) + *(unsigned __int16*)(v22 + 16)) != 0) {
      return 1;
    }
  }
  return 0;
}

__int64 Unit_6c9540(__int64 a1, _DWORD* a2)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int8* v19;
  int v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 result;
  signed int v36;
  __int64 v37;
  signed int v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  char v42;
  unsigned int v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;

  v50 = COERCE_AS(__typeof__(v50),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v4 = game_g_shared_system_skills_ptr;
  v5 = *(_QWORD*)(a1 + 1744);
  v6 = *(unsigned int*)((char*)((_UNKNOWN*)0x44LL) +
                        game_g_shared_system_skills_ptr);
  v7 = *(_QWORD*)(a1 + 1752) - v5;
  v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if (((v6 >> 5) & 0x7F) + 1 <= v7 >> 2 &&
      ((*(_DWORD*)(v5 + 4 * ((v6 >> 5) & 0x7F)) >> v6) & 1) != 0 &&
      game_HasActiveSkill_843420_alt1(&v51, a1 + 1744)) {
    return 0;
  }
  if (*(_WORD*)(a1 + 492) == 0 && *(_BYTE*)(a1 + 496) == 0) {
    v9 = *(unsigned int*)((char*)((_UNKNOWN*)0x144LL) + v4);
    v10 = *(_QWORD*)(a1 + 1744);
    v11 = *(_QWORD*)(a1 + 1752) - v10;
    v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v4) & 0xFFF;
    if (((v9 >> 5) & 0x7F) + 1 <= v11 >> 2 &&
        ((*(_DWORD*)(v10 + 4 * ((v9 >> 5) & 0x7F)) >> v9) & 1) != 0 &&
        game_HasActiveSkill_843420_alt1(&v51, a1 + 1744)) {
      return 0;
    }
  }
  if ((*a2 & 0xFFF) == 0) {
    return 0;
  }
  v12 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
  if ((GameRoutine_6fc510_alt1(v12) & 1) != 0) {
    return 0;
  }
  if (*(_BYTE*)(v12 + 273) != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * (*a2 & 0xFFFLL));
    v14 = *(unsigned __int8*)(v13 + 104);
    v15 = *(unsigned __int8*)(v13 + 273);
    v16 = (unsigned int)(v14 - 5) >= 2 ? 0 : (*a2 >> 19) & 0x1F;
    if ((int)(v16 - (int)((*a2 >> 12) & 0x7F) + v15) < 1) {
      return 0;
    }
  }
  if (!GameRoutine_6fc7a0_alt1(v12, (_QWORD*)(a1 + 1840))) {
    return 0;
  }
  v17 = *(_QWORD*)(GameData_21c99b0 + 64);
  v18 = *a2 & 0xFFF;
  v19 = *(unsigned __int8**)(v17 + 8 * v18);
  v20 = v19[104];
  if (v20 == 5) {
    v21 = *(unsigned int*)((char*)((_UNKNOWN*)0xB8LL) + v4);
    v22 = *(_QWORD*)(a1 + 1744);
    v23 = *(_QWORD*)(a1 + 1752) - v22;
    v51 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB8LL) + v4) & 0xFFF;
    if (((v21 >> 5) & 0x7F) + 1 <= v23 >> 2 &&
        ((*(_DWORD*)(v22 + 4 * ((v21 >> 5) & 0x7F)) >> v21) & 1) != 0) {
      if (game_HasActiveSkill_843420_alt1(&v51, a1 + 1744)) {
        return 0;
      }
      v17 = *(_QWORD*)(GameData_21c99b0 + 64);
      v18 = *a2 & 0xFFF;
    }
    v19 = *(unsigned __int8**)(v17 + 8 * v18);
    v20 = v19[104];
  }
  if (v20 == 9) {
    if (!game_Unit_Unknown6c9980(a1)) {
      return 0;
    }
    v19 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                               8LL * (*a2 & 0xFFF));
  }
  if (v19[250] == 28) {
    v51 = 15;
    if ((int)game_UnitPool_Count(&v51) > 159) {
      return 0;
    }
    v19 = *(unsigned __int8**)(*(_QWORD*)(GameData_21c99b0 + 64) +
                               8LL * (*a2 & 0xFFF));
  }
  if (v19[275] == 0) {
    goto LABEL_58;
  }
  v24 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) + v4);
  v25 = *(_QWORD*)(a1 + 1744);
  if (((v24 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(a1 + 1752) - v25) >> 2 &&
      ((*(_DWORD*)(v25 + 4 * ((v24 >> 5) & 0x7F)) >> v24) & 1) != 0) {
    goto LABEL_58;
  }
  v26 = *(_QWORD*)(a1 + 440);
  v27 = v26 != 0 ? *(_BYTE*)(v26 + 16) : 9;
  if (((1 << v27) & 6) != 0) {
    goto LABEL_58;
  }
  LOBYTE(v51) = 0;
  if ((int)game_Unit_GetParam_alt1(a1) < 1 || v19[275] == 0) {
    goto LABEL_58;
  }
  v36 = *(__int16*)(a1 + 492);
  v37 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
  v38 = *(unsigned __int8*)(v37 + 275);
  if (*(_BYTE*)(v37 + 275) != 0) {
    v39 = *(unsigned int*)((char*)((_UNKNOWN*)0x164LL) + v4);
    v40 = *(_QWORD*)(a1 + 1744);
    if (((v39 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(a1 + 1752) - v40) >> 2 &&
            ((*(_DWORD*)(v40 + 4 * ((v39 >> 5) & 0x7F)) >> v39) & 1) != 0 ||
        ((v41 = *(_QWORD*)(a1 + 440)) == 0 ? (v42 = 9)
                                           : (v42 = *(_BYTE*)(v41 + 16)),
         ((1 << v42) & 6) != 0 ||
             (LOBYTE(v51) = 0, (v50 = game_Unit_GetParam_alt1(a1)) < 1))) {
      v38 = 0;
    }
    else {
      v38 = (v50 * (unsigned int)*(unsigned __int8*)(v37 + 275) + 99) / 0x64;
    }
  }
  if (v38 < v36) {
  LABEL_58:
    v28 = (unsigned int)*a2;
    v29 = *(_QWORD*)(GameData_21c99b0 + 64);
    if (*(_BYTE*)(*(_QWORD*)(v29 + 8 * (v28 & 0xFFF)) + 273LL) == 0) {
      return 1;
    }
    v30 = *(_QWORD*)(a1 + 1456);
    if (((v28 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(a1 + 1464) - v30) >> 2 &&
        ((*(_DWORD*)(v30 + 4 * ((v28 >> 5) & 0x7F)) >> v28) & 1) != 0) {
      v31 = *(_QWORD*)(a1 + 1496);
      v32 = *(_QWORD*)(a1 + 1488);
      if (v31 != v32) {
        v33 = (v31 - v32) >> 2;
        v34 = 0;
        while (((*(_DWORD*)(v32 + 4 * v34) ^ (unsigned int)v28) & 0xFFF) != 0) {
          ++v34;
          result = 0;
          if (v33 == v34) {
            return result;
          }
        }
        if ((v34 & 0x8000000000000000LL) == 0) {
          v43 = *(_DWORD*)(v32 + 4LL * (unsigned int)v34);
          v44 = v43 & 0xFFF;
          v45 = (v43 >> 19) & 0x1F;
          v46 = (v43 >> 12) & 0x7F;
          v47 = *(_QWORD*)(v29 + 8 * v44);
          LODWORD(v44) = *(unsigned __int8*)(v47 + 104);
          v48 = *(unsigned __int8*)(v47 + 273);
          v49 = (unsigned int)(v44 - 5) >= 2 ? 0 : v45;
          if (v49 - v46 + v48 >= 1) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

bool Unit_6c9ab0(_QWORD* a1, _DWORD* a2, unsigned __int16* a3)
{
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v13;
  char v14;
  int v15;

  if ((Unit_6c9540((__int64)a1, a2) & 1) == 0 ||
      !UnitItem_6e8bc0(a3, (__int64)a1) ||
      !UnitSkillList_843ae0(a2, (__int64)a1, a3)) {
    return false;
  }
  v6 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*a2 & 0xFFF)) +
                           274LL);
  v7 = *a3;
  v8 = *GameData_212c878[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*a2 & 0xFFF)) +
                274LL) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8 * v7);
    if (*(unsigned __int8*)(v9 + 72) <= 7u &&
        (v10 = a1[218],
         (((v11 = *(unsigned int*)((char*)((_UNKNOWN*)0xBCLL) +
                                   game_g_shared_system_skills_ptr)) >>
           5) &
          0x7F) + 1 <=
             (a1[219] - v10) >> 2) &&
        ((*(_DWORD*)(v10 + 4 * ((v11 >> 5) & 0x7F)) >> v11) & 1) != 0) {
      v6 = 0;
    }
    else {
      v13 = a1[55];
      if (v13 != 0) {
        v14 = *(_BYTE*)(v13 + 16);
      }
      else {
        v14 = 9;
      }
      v6 = (0xFFFFFFF9 >> v14) & 1;
    }
  }
  else {
    v9 = *(_QWORD*)(*(_QWORD*)(v8 + 64) + 8 * v7);
  }
  v15 = (*((_DWORD*)a3 + 1) & 0xF) * *(unsigned __int8*)(v9 + 87) -
        *((unsigned __int8*)a3 + 2);
  return v6 <= (v15 & (unsigned int)~(v15 >> 31));
}

__int64 Unit_6c9c00(_QWORD* a1, __int64 a2)
{
  unsigned int* v2;
  unsigned int* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;

  {
    v2 = *(unsigned int**)(a2 + 32);
    __asm__ volatile("" ::"r"(v2));
  }
  {
    v3 = *(unsigned int**)(a2 + 40);
    __asm__ volatile("" ::"r"(v3));
  }
  if (v2 != v3) {
    {
      v4 = a1[170];
      __asm__ volatile("" ::"r"(v4));
    }
    {
      v5 = a1[175];
      __asm__ volatile("" ::"r"(v5));
    }
    {
      v6 = a1[171] - v4;
      __asm__ volatile("" ::"r"(v6));
    }
    {
      v7 = a1[174];
      __asm__ volatile("" ::"r"(v7));
    }
    result = 1;
    v9 = v6 >> 2;
    do {
      {
        v10 = *v2;
        __asm__ volatile("" ::"r"(v10));
      }
      if ((v10 & 0xFFF) != 0) {
        if (v9 < ((v10 >> 5) & 0x7F) + 1 ||
            ((*(_DWORD*)(v4 + 4 * ((v10 >> 5) & 0x7F)) >> v10) & 1) == 0) {
          return 1;
        }
        if (v5 != v7) {
          v11 = 0;
          while (((*(_DWORD*)(v7 + 4 * v11) ^ (unsigned int)v10) & 0xFFF) !=
                 0) {
            if ((v5 - v7) >> 2 == ++v11) {
              goto LABEL_3;
            }
          }
          if ((v11 & 0x8000000000000000LL) == 0) {
            {
              v12 = *(_DWORD*)(v7 + 4LL * (unsigned int)v11);
              __asm__ volatile("" ::"r"(v12));
            }
            {
              v13 = *(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] +
                                                          64) +
                                               8LL * (v12 & 0xFFF)) +
                                    281LL);
              __asm__ volatile("" ::"r"(v13));
            }
            if (v13 <= 1) {
              v13 = 1;
            }
            if ((v12 & 0x1F000000) != 0 || ((v12 >> 19) & 0x1F) < v13 - 1) {
              return result;
            }
          }
        }
      }
    LABEL_3:
      ++v2;
    } while (v2 != v3);
  }
  return 0;
}

__int64 Unit_6c9cf0(__int64 a1, __int64 a2)
{
  __int64 v4;
  int v5;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  char v16;

  if (a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a2 + 440);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 16);
  }
  else {
    v5 = 9;
  }
  v7 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if ((_DWORD)v7 == v5) {
    return 1;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
    if (v5 == 0 && (_DWORD)v7 == 3) {
      return 1;
    }
  }
  else if (v5 == 3) {
    return 1;
  }
  if (*GameData_212ce90[0] == 0 ||
      (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    return 1;
  }
  v8 = *(char*)(a2 + 585);
  v16 = 0;
  v12_.v13 = v12_.v12;
  v9 = *(_QWORD*)(*GameData_212ce98[0] + 160) + (v7 << 7) + 8;
  v10 = *(char*)(a2 + 584);
  v12_.v12[0] = GameData_1f94310;
  v12_.v12[1] = v9;
  v12_.v12[2] = &v16;
  Unit_6c8a80(a2, v10, v8, (__int64)v12_.v12);
  if (v12_.v13 == v12_.v12) {
    v11 = 32;
    goto LABEL_19;
  }
  if (v12_.v13 != nullptr) {
    v11 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v12_.v13 + v11))((__int64)v12_.v13);
  }
  return v16 & 1;
}

__int64 Unit_6c9ef0(__int64 a1)
{
  __int64 v1;
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  int v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca298,
                            memory_order_acquire) &
       1) == 0) {
    v6 = a1;
    v7 = __cxa_guard_acquire(&GameData_21ca298);
    a1 = v6;
    if (v7 != 0) {
      GameData_21ca290 = (__int64)&GameData_1ada150;
      GameData_21ca288 = game_HashString(&GameData_1ada150);
      __cxa_guard_release(&GameData_21ca298);
      a1 = v6;
    }
  }
  v1 = *(_QWORD*)(a1 + 440);
  if (v1 != 0) {
    v2 = *(_BYTE*)(v1 + 16);
  }
  else {
    v2 = 9;
  }
  if (((1 << v2) & 0xF1) == 0) {
    return 0;
  }
  v3 = GameRoutine_820d50(2);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v4 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v3);
  if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
    return 0;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21ca288);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

__int64 Unit_6ca260(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  unsigned int v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _BYTE* v14;
  _DWORD* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  __int64 v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  int v32;
  __int64 v33;
  int* v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  _BYTE* v49;
  _DWORD* v50;
  __int64 v51;
  _BYTE* v52;
  _BYTE* v53;
  __int64 v54;
  _BYTE* v55;
  _BYTE* v56;
  _BYTE* v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v65;
  struct {
    int v66;
    char v67;
    char gap21_[3];
    char v68;
    char gap25_[3];
    char v69;
  } v66_;

  v2 = game_g_shared_system_skills_ptr;
  v3 = *(_QWORD*)(a1 + 1744);
  v4 = *(unsigned int*)((char*)((_UNKNOWN*)0xE0LL) +
                        game_g_shared_system_skills_ptr);
  v5 = *(_QWORD*)(a1 + 1752) - v3;
  v66_.v66 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE0LL) +
                        game_g_shared_system_skills_ptr) &
             0xFFF;
  if (((v4 >> 5) & 0x7F) + 1 <= v5 >> 2 &&
      ((*(_DWORD*)(v3 + 4 * ((v4 >> 5) & 0x7F)) >> v4) & 1) != 0 &&
      game_HasActiveSkill_843420_alt1(&v66_.v66, a1 + 1744)) {
    return 0;
  }
  else {
    v66_.v67 = 0;
    v7 = game_Unit_GetParam_alt1(a1);
    v65 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE0LL) + v2) & 0xFFF;
    if (v65 != 0) {
      v8 = *(_QWORD*)(a1 + 1776);
      v9 = *(_QWORD*)(a1 + 1784) - v8;
      if ((int)(v9 >> 2) < 1) {
        v12 = 0;
      }
      else {
        v10 = *(_QWORD*)(GameData_21c99b0 + 64);
        if ((v9 & 0x1FFFFFFFCLL) == 4) {
          v11 = 0;
          v12 = 0;
        }
        else {
          v15 = (_DWORD*)(v8 + 4);
          v11 = 0;
          v12 = 0;
          do {
            v16 = *(_QWORD*)(v10 + 8LL * (*(v15 - 1) & 0xFFF));
            v17 = *(_BYTE**)(v16 + 864);
            if (v17 != nullptr && *v17 != 0) {
              ++v12;
            }
            else {
              v18 = *(_BYTE**)(v16 + 872);
              if (v18 != nullptr && *v18 != 0) {
                ++v12;
              }
            }
            v19 = *(_QWORD*)(v10 + 8LL * (*v15 & 0xFFF));
            v20 = *(_BYTE**)(v19 + 864);
            if (v20 != nullptr && *v20 != 0) {
              ++v12;
            }
            else {
              v21 = *(_BYTE**)(v19 + 872);
              if (v21 != nullptr && *v21 != 0) {
                ++v12;
              }
            }
            v11 += 2;
            v15 += 2;
          } while (((v9 >> 2) & 0x7FFFFFFE) != v11);
        }
        if ((v9 & 4) != 0) {
          v13 = *(_QWORD*)(v10 + 8LL * (*(_DWORD*)(v8 + 4 * v11) & 0xFFF));
          v14 = *(_BYTE**)(v13 + 864);
          if (v14 != nullptr && *v14 != 0) {
            ++v12;
          }
          else {
            v22 = *(_BYTE**)(v13 + 872);
            if (v22 != nullptr && *v22 != 0) {
              ++v12;
            }
          }
        }
      }
      if ((UnitSkillList_84cc00_alt1((__int64*)(a1 + 1360), &v65, 1) & 1) !=
          0) {
        v23 = *(_QWORD*)(a1 + 1400);
        v24 = *(_QWORD*)(a1 + 1392);
        *(_QWORD*)(a1 + 1448) = 0;
        v25 = v23 - v24;
        *(_QWORD*)(a1 + 1440) = 0;
        if ((int)((unsigned __int64)(v23 - v24) >> 2) >= 1) {
          v26 = GameData_21c99b0;
          v27 = (int)(v25 >> 2);
          v28 = v27 <= 1 ? 1LL : (int)(v25 >> 2);
          if (v27 >= 2) {
            v34 = (int*)(v24 + 4);
            v29 = 0;
            v30 = 0;
            v31 = 0;
            v32 = 0;
            v33 = 0;
            do {
              v33 += 2;
              v35 =
                  *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (*(v34 - 1) & 0xFFF));
              v36 = v32 | (1 << *(_BYTE*)(v35 + 104));
              *(_WORD*)(a1 + 1440) = v36;
              v37 = (1LL << *(_BYTE*)(v35 + 250)) | v31;
              *(_QWORD*)(a1 + 1448) = v37;
              v38 = (1 << *(_BYTE*)(v35 + 115)) | v30;
              *(_DWORD*)(a1 + 1444) = v38;
              v39 = *(unsigned __int16*)(*(_QWORD*)(v35 + 24) + 1064LL) | v29;
              *(_WORD*)(a1 + 1442) = v39;
              v40 = *v34;
              v34 += 2;
              v41 = *(_QWORD*)(*(_QWORD*)(v26 + 64) + 8LL * (v40 & 0xFFF));
              v32 = v36 | (1 << *(_BYTE*)(v41 + 104));
              *(_WORD*)(a1 + 1440) = v32;
              v31 = (1LL << *(_BYTE*)(v41 + 250)) | v37;
              *(_QWORD*)(a1 + 1448) = v31;
              v30 = (1 << *(_BYTE*)(v41 + 115)) | v38;
              *(_DWORD*)(a1 + 1444) = v30;
              v29 = *(unsigned __int16*)(*(_QWORD*)(v41 + 24) + 1064LL) | v39;
              *(_WORD*)(a1 + 1442) = v29;
            } while ((v28 & 0x7FFFFFFFFFFFFFFELL) != v33);
          }
          else {
            LOWORD(v29) = 0;
            v30 = 0;
            v31 = 0;
            LOWORD(v32) = 0;
            v33 = 0;
          }
          if ((v28 & 1) != 0) {
            v42 = *(_QWORD*)(*(_QWORD*)(v26 + 64) +
                             8LL * (*(_DWORD*)(v24 + 4 * v33) & 0xFFF));
            *(_WORD*)(a1 + 1440) = v32 | (1 << *(_BYTE*)(v42 + 104));
            *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v42 + 250)) | v31;
            *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v42 + 115)) | v30;
            *(_WORD*)(a1 + 1442) =
                *(_WORD*)(*(_QWORD*)(v42 + 24) + 1064LL) | v29;
          }
        }
        game_Unit_Unknown6cd8f0_alt1((_WORD*)a1);
      }
      v43 = *(_QWORD*)(a1 + 1776);
      v44 = *(_QWORD*)(a1 + 1784) - v43;
      if ((int)(v44 >> 2) < 1) {
        v47 = 0;
      }
      else {
        v45 = *(_QWORD*)(GameData_21c99b0 + 64);
        if ((v44 & 0x1FFFFFFFCLL) == 4) {
          v46 = 0;
          v47 = 0;
        }
        else {
          v50 = (_DWORD*)(v43 + 4);
          v46 = 0;
          v47 = 0;
          do {
            v51 = *(_QWORD*)(v45 + 8LL * (*(v50 - 1) & 0xFFF));
            v52 = *(_BYTE**)(v51 + 864);
            if (v52 != nullptr && *v52 != 0) {
              ++v47;
            }
            else {
              v53 = *(_BYTE**)(v51 + 872);
              if (v53 != nullptr && *v53 != 0) {
                ++v47;
              }
            }
            v54 = *(_QWORD*)(v45 + 8LL * (*v50 & 0xFFF));
            v55 = *(_BYTE**)(v54 + 864);
            if (v55 != nullptr && *v55 != 0) {
              ++v47;
            }
            else {
              v56 = *(_BYTE**)(v54 + 872);
              if (v56 != nullptr && *v56 != 0) {
                ++v47;
              }
            }
            v46 += 2;
            v50 += 2;
          } while (((v44 >> 2) & 0x7FFFFFFE) != v46);
        }
        if ((v44 & 4) != 0) {
          v48 = *(_QWORD*)(v45 + 8LL * (*(_DWORD*)(v43 + 4 * v46) & 0xFFF));
          v49 = *(_BYTE**)(v48 + 864);
          if (v49 != nullptr && *v49 != 0) {
            ++v47;
          }
          else {
            v57 = *(_BYTE**)(v48 + 872);
            if (v57 != nullptr && *v57 != 0) {
              ++v47;
            }
          }
        }
      }
      if (v47 != v12) {
        *(_WORD*)(a1 + 20) |= 0x44u;
      }
    }
    v66_.v68 = 0;
    v6 = 1;
    v58 = game_Unit_GetParam_alt1(a1);
    v59 = v58 - v7;
    if (v58 != v7) {
      v60 = *(__int16*)(a1 + 492);
      if (v58 <= v7) {
        v59 = 0;
      }
      v66_.v69 = 0;
      v61 = v59 + v60;
      v62 = game_Unit_GetParam_alt1(a1);
      if (*(_WORD*)(a1 + 494) != 0 && v61 != *(__int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v62 >= v61) {
        v63 = v61;
      }
      else {
        v63 = v62;
      }
      if (v61 < 0) {
        v63 = 0;
      }
      if (v63 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v63;
      }
    }
  }
  return v6;
}

__int64 Unit_6ca760(__int64 a1, _WORD* a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  _DWORD* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  _BYTE* v46;
  _DWORD* v47;
  __int64 v48;
  _BYTE* v49;
  _BYTE* v50;
  __int64 v51;
  _BYTE* v52;
  _BYTE* v53;
  _BYTE* v54;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(a1 + 1776);
    v4 = GameData_212c880[0];
    v5 = *(_QWORD*)(a1 + 1784) - v2;
    if ((int)(v5 >> 2) < 1) {
      v8 = 0;
    }
    else {
      v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
      if ((v5 & 0x1FFFFFFFCLL) == 4) {
        v7 = 0;
        v8 = 0;
      }
      else {
        v12 = (_DWORD*)(v2 + 4);
        v7 = 0;
        v8 = 0;
        do {
          v13 = *(_QWORD*)(v6 + 8LL * (*(v12 - 1) & 0xFFF));
          v14 = *(_BYTE**)(v13 + 864);
          if (v14 != nullptr && *v14 != 0) {
            ++v8;
          }
          else {
            v15 = *(_BYTE**)(v13 + 872);
            if (v15 != nullptr && *v15 != 0) {
              ++v8;
            }
          }
          v16 = *(_QWORD*)(v6 + 8LL * (*v12 & 0xFFF));
          v17 = *(_BYTE**)(v16 + 864);
          if (v17 != nullptr && *v17 != 0) {
            ++v8;
          }
          else {
            v18 = *(_BYTE**)(v16 + 872);
            if (v18 != nullptr && *v18 != 0) {
              ++v8;
            }
          }
          v7 += 2;
          v12 += 2;
        } while (((v5 >> 2) & 0x7FFFFFFE) != v7);
      }
      if ((v5 & 4) != 0) {
        v9 = *(_QWORD*)(v6 + 8LL * (*(_DWORD*)(v2 + 4 * v7) & 0xFFF));
        v10 = *(_BYTE**)(v9 + 864);
        if (v10 != nullptr && *v10 != 0) {
          ++v8;
        }
        else {
          v19 = *(_BYTE**)(v9 + 872);
          if (v19 != nullptr && *v19 != 0) {
            ++v8;
          }
        }
      }
    }
    v11 = UnitSkillList_84cc00(a1 + 1360, a2, 1);
    if ((v11 & 1) != 0) {
      v20 = *(_QWORD*)(a1 + 1400);
      v21 = *(_QWORD*)(a1 + 1392);
      *(_QWORD*)(a1 + 1448) = 0;
      v22 = v20 - v21;
      *(_QWORD*)(a1 + 1440) = 0;
      if ((int)((unsigned __int64)(v20 - v21) >> 2) >= 1) {
        v23 = *v4;
        v24 = (int)(v22 >> 2);
        v25 = v24 <= 1 ? 1LL : (int)(v22 >> 2);
        if (v24 >= 2) {
          v31 = (int*)(v21 + 4);
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          do {
            v30 += 2;
            v32 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (*(v31 - 1) & 0xFFF));
            v33 = v29 | (1 << *(_BYTE*)(v32 + 104));
            *(_WORD*)(a1 + 1440) = v33;
            v34 = (1LL << *(_BYTE*)(v32 + 250)) | v28;
            *(_QWORD*)(a1 + 1448) = v34;
            v35 = (1 << *(_BYTE*)(v32 + 115)) | v27;
            *(_DWORD*)(a1 + 1444) = v35;
            v36 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v26;
            *(_WORD*)(a1 + 1442) = v36;
            v37 = *v31;
            v31 += 2;
            v38 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (v37 & 0xFFF));
            v29 = v33 | (1 << *(_BYTE*)(v38 + 104));
            *(_WORD*)(a1 + 1440) = v29;
            v28 = (1LL << *(_BYTE*)(v38 + 250)) | v34;
            *(_QWORD*)(a1 + 1448) = v28;
            v27 = (1 << *(_BYTE*)(v38 + 115)) | v35;
            *(_DWORD*)(a1 + 1444) = v27;
            v26 = *(unsigned __int16*)(*(_QWORD*)(v38 + 24) + 1064LL) | v36;
            *(_WORD*)(a1 + 1442) = v26;
          } while ((v25 & 0x7FFFFFFFFFFFFFFELL) != v30);
        }
        else {
          LOWORD(v26) = 0;
          v27 = 0;
          v28 = 0;
          LOWORD(v29) = 0;
          v30 = 0;
        }
        if ((v25 & 1) != 0) {
          v39 = *(_QWORD*)(*(_QWORD*)(v23 + 64) +
                           8LL * (*(_DWORD*)(v21 + 4 * v30) & 0xFFF));
          *(_WORD*)(a1 + 1440) = v29 | (1 << *(_BYTE*)(v39 + 104));
          *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v39 + 250)) | v28;
          *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v39 + 115)) | v27;
          *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v39 + 24) + 1064LL) | v26;
        }
      }
      game_Unit_Unknown6cd8f0(a1);
    }
    v40 = *(_QWORD*)(a1 + 1776);
    v41 = *(_QWORD*)(a1 + 1784) - v40;
    if ((int)(v41 >> 2) < 1) {
      v44 = 0;
    }
    else {
      v42 = *(_QWORD*)(*v4 + 64);
      if ((v41 & 0x1FFFFFFFCLL) == 4) {
        v43 = 0;
        v44 = 0;
      }
      else {
        v47 = (_DWORD*)(v40 + 4);
        v43 = 0;
        v44 = 0;
        do {
          v48 = *(_QWORD*)(v42 + 8LL * (*(v47 - 1) & 0xFFF));
          v49 = *(_BYTE**)(v48 + 864);
          if (v49 != nullptr && *v49 != 0) {
            ++v44;
          }
          else {
            v50 = *(_BYTE**)(v48 + 872);
            if (v50 != nullptr && *v50 != 0) {
              ++v44;
            }
          }
          v51 = *(_QWORD*)(v42 + 8LL * (*v47 & 0xFFF));
          v52 = *(_BYTE**)(v51 + 864);
          if (v52 != nullptr && *v52 != 0) {
            ++v44;
          }
          else {
            v53 = *(_BYTE**)(v51 + 872);
            if (v53 != nullptr && *v53 != 0) {
              ++v44;
            }
          }
          v43 += 2;
          v47 += 2;
        } while (((v41 >> 2) & 0x7FFFFFFE) != v43);
      }
      if ((v41 & 4) != 0) {
        v45 = *(_QWORD*)(v42 + 8LL * (*(_DWORD*)(v40 + 4 * v43) & 0xFFF));
        v46 = *(_BYTE**)(v45 + 864);
        if (v46 != nullptr && *v46 != 0) {
          ++v44;
        }
        else {
          v54 = *(_BYTE**)(v45 + 872);
          if (v54 != nullptr && *v54 != 0) {
            ++v44;
          }
        }
      }
    }
    if (v44 != v8) {
      *(_WORD*)(a1 + 20) |= 0x44u;
    }
  }
  else {
    v11 = 0;
  }
  return v11 & 1;
}

__int64 Unit_6cab80(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  _BYTE* v12;
  __int64 result;
  _DWORD* v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  __int64 v18;
  _BYTE* v19;
  _BYTE* v20;
  _BYTE* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  _BYTE* v48;
  _DWORD* v49;
  __int64 v50;
  _BYTE* v51;
  _BYTE* v52;
  __int64 v53;
  _BYTE* v54;
  _BYTE* v55;
  _BYTE* v56;
  int v57;
  bool v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  struct {
    int v65;
    char v66;
    char gap21_[3];
    char v67;
    char gap25_[3];
    char v68;
  } v65_;

  v1 = *(_QWORD*)(a1 + 1744);
  v2 = *(_QWORD*)(a1 + 1752) - v1;
  v65_.v65 = GameData_21d97e0 & 0xFFF;
  v3 = ((unsigned __int64)(unsigned int)GameData_21d97e0 >> 5) & 0x7F;
  if (v3 + 1 > v2 >> 2 ||
      ((*(_DWORD*)(v1 + 4LL * (unsigned int)v3) >> GameData_21d97e0) & 1) ==
          0 ||
      !game_HasActiveSkill_843420_alt1(&v65_.v65, a1 + 1744)) {
    return 0;
  }
  v65_.v66 = 0;
  v5 = game_Unit_GetParam_alt1(a1);
  v64 = GameData_21d97e0 & 0xFFF;
  if ((GameData_21d97e0 & 0xFFF) != 0) {
    v6 = *(_QWORD*)(a1 + 1776);
    v7 = *(_QWORD*)(a1 + 1784) - v6;
    if ((int)(v7 >> 2) < 1) {
      v10 = 0;
    }
    else {
      v8 = *(_QWORD*)(GameData_21c99b0 + 64);
      if ((v7 & 0x1FFFFFFFCLL) == 4) {
        v9 = 0;
        v10 = 0;
      }
      else {
        v14 = (_DWORD*)(v6 + 4);
        v9 = 0;
        v10 = 0;
        do {
          v15 = *(_QWORD*)(v8 + 8LL * (*(v14 - 1) & 0xFFF));
          v16 = *(_BYTE**)(v15 + 864);
          if (v16 != nullptr && *v16 != 0) {
            ++v10;
          }
          else {
            v17 = *(_BYTE**)(v15 + 872);
            if (v17 != nullptr && *v17 != 0) {
              ++v10;
            }
          }
          v18 = *(_QWORD*)(v8 + 8LL * (*v14 & 0xFFF));
          v19 = *(_BYTE**)(v18 + 864);
          if (v19 != nullptr && *v19 != 0) {
            ++v10;
          }
          else {
            v20 = *(_BYTE**)(v18 + 872);
            if (v20 != nullptr && *v20 != 0) {
              ++v10;
            }
          }
          v9 += 2;
          v14 += 2;
        } while (((v7 >> 2) & 0x7FFFFFFE) != v9);
      }
      if ((v7 & 4) != 0) {
        v11 = *(_QWORD*)(v8 + 8LL * (*(_DWORD*)(v6 + 4 * v9) & 0xFFF));
        v12 = *(_BYTE**)(v11 + 864);
        if (v12 != nullptr && *v12 != 0) {
          ++v10;
        }
        else {
          v21 = *(_BYTE**)(v11 + 872);
          if (v21 != nullptr && *v21 != 0) {
            ++v10;
          }
        }
      }
    }
    if ((UnitSkillList_84d980_alt1((__int64*)(a1 + 1360), (unsigned int*)&v64) &
         1) != 0) {
      v22 = *(_QWORD*)(a1 + 1400);
      v23 = *(_QWORD*)(a1 + 1392);
      *(_QWORD*)(a1 + 1448) = 0;
      v24 = v22 - v23;
      *(_QWORD*)(a1 + 1440) = 0;
      if ((int)((unsigned __int64)(v22 - v23) >> 2) >= 1) {
        v25 = GameData_21c99b0;
        v26 = (int)(v24 >> 2);
        v27 = v26 <= 1 ? 1LL : (int)(v24 >> 2);
        if (v26 >= 2) {
          v33 = (int*)(v23 + 4);
          v28 = 0;
          v29 = 0;
          v30 = 0;
          v31 = 0;
          v32 = 0;
          do {
            v32 += 2;
            v34 = *(_QWORD*)(*(_QWORD*)(v25 + 64) + 8LL * (*(v33 - 1) & 0xFFF));
            v35 = v31 | (1 << *(_BYTE*)(v34 + 104));
            *(_WORD*)(a1 + 1440) = v35;
            v36 = (1LL << *(_BYTE*)(v34 + 250)) | v30;
            *(_QWORD*)(a1 + 1448) = v36;
            v37 = (1 << *(_BYTE*)(v34 + 115)) | v29;
            *(_DWORD*)(a1 + 1444) = v37;
            v38 = *(unsigned __int16*)(*(_QWORD*)(v34 + 24) + 1064LL) | v28;
            *(_WORD*)(a1 + 1442) = v38;
            v39 = *v33;
            v33 += 2;
            v40 = *(_QWORD*)(*(_QWORD*)(v25 + 64) + 8LL * (v39 & 0xFFF));
            v31 = v35 | (1 << *(_BYTE*)(v40 + 104));
            *(_WORD*)(a1 + 1440) = v31;
            v30 = (1LL << *(_BYTE*)(v40 + 250)) | v36;
            *(_QWORD*)(a1 + 1448) = v30;
            v29 = (1 << *(_BYTE*)(v40 + 115)) | v37;
            *(_DWORD*)(a1 + 1444) = v29;
            v28 = *(unsigned __int16*)(*(_QWORD*)(v40 + 24) + 1064LL) | v38;
            *(_WORD*)(a1 + 1442) = v28;
          } while ((v27 & 0x7FFFFFFFFFFFFFFELL) != v32);
        }
        else {
          LOWORD(v28) = 0;
          v29 = 0;
          v30 = 0;
          LOWORD(v31) = 0;
          v32 = 0;
        }
        if ((v27 & 1) != 0) {
          v41 = *(_QWORD*)(*(_QWORD*)(v25 + 64) +
                           8LL * (*(_DWORD*)(v23 + 4 * v32) & 0xFFF));
          *(_WORD*)(a1 + 1440) = v31 | (1 << *(_BYTE*)(v41 + 104));
          *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v41 + 250)) | v30;
          *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v41 + 115)) | v29;
          *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v41 + 24) + 1064LL) | v28;
        }
      }
      game_Unit_Unknown6cd8f0_alt1((_WORD*)a1);
    }
    v42 = *(_QWORD*)(a1 + 1776);
    v43 = *(_QWORD*)(a1 + 1784) - v42;
    if ((int)(v43 >> 2) < 1) {
      v46 = 0;
    }
    else {
      v44 = *(_QWORD*)(GameData_21c99b0 + 64);
      if ((v43 & 0x1FFFFFFFCLL) == 4) {
        v45 = 0;
        v46 = 0;
      }
      else {
        v49 = (_DWORD*)(v42 + 4);
        v45 = 0;
        v46 = 0;
        do {
          v50 = *(_QWORD*)(v44 + 8LL * (*(v49 - 1) & 0xFFF));
          v51 = *(_BYTE**)(v50 + 864);
          if (v51 != nullptr && *v51 != 0) {
            ++v46;
          }
          else {
            v52 = *(_BYTE**)(v50 + 872);
            if (v52 != nullptr && *v52 != 0) {
              ++v46;
            }
          }
          v53 = *(_QWORD*)(v44 + 8LL * (*v49 & 0xFFF));
          v54 = *(_BYTE**)(v53 + 864);
          if (v54 != nullptr && *v54 != 0) {
            ++v46;
          }
          else {
            v55 = *(_BYTE**)(v53 + 872);
            if (v55 != nullptr && *v55 != 0) {
              ++v46;
            }
          }
          v45 += 2;
          v49 += 2;
        } while (((v43 >> 2) & 0x7FFFFFFE) != v45);
      }
      if ((v43 & 4) != 0) {
        v47 = *(_QWORD*)(v44 + 8LL * (*(_DWORD*)(v42 + 4 * v45) & 0xFFF));
        v48 = *(_BYTE**)(v47 + 864);
        if (v48 != nullptr && *v48 != 0) {
          ++v46;
        }
        else {
          v56 = *(_BYTE**)(v47 + 872);
          if (v56 != nullptr && *v56 != 0) {
            ++v46;
          }
        }
      }
    }
    if (v46 != v10) {
      *(_WORD*)(a1 + 20) |= 0x44u;
    }
  }
  v65_.v67 = 0;
  v57 = game_Unit_GetParam_alt1(a1);
  result = 1;
  v58 = __OFSUB__(v57, v5);
  v59 = v57 - v5;
  if (v59 != 0) {
    v60 = *(__int16*)(a1 + 492);
    if ((v59 < 0) ^ v58 | (v59 == 0)) {
      v59 = 0;
    }
    v65_.v68 = 0;
    v61 = v59 + v60;
    v62 = game_Unit_GetParam_alt1(a1);
    if (*(_WORD*)(a1 + 494) != 0 && v61 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v62 >= v61) {
      v63 = v61;
    }
    else {
      v63 = v62;
    }
    if (v61 < 0) {
      v63 = 0;
    }
    if (v63 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v63;
    }
    return 1;
  }
  return result;
}

__int64 Unit_6cb080(__int64 a1, _WORD* a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  _DWORD* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  _BYTE* v46;
  _DWORD* v47;
  __int64 v48;
  _BYTE* v49;
  _BYTE* v50;
  __int64 v51;
  _BYTE* v52;
  _BYTE* v53;
  _BYTE* v54;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(a1 + 1776);
    v4 = GameData_212c880[0];
    v5 = *(_QWORD*)(a1 + 1784) - v2;
    if ((int)(v5 >> 2) < 1) {
      v8 = 0;
    }
    else {
      v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
      if ((v5 & 0x1FFFFFFFCLL) == 4) {
        v7 = 0;
        v8 = 0;
      }
      else {
        v12 = (_DWORD*)(v2 + 4);
        v7 = 0;
        v8 = 0;
        do {
          v13 = *(_QWORD*)(v6 + 8LL * (*(v12 - 1) & 0xFFF));
          v14 = *(_BYTE**)(v13 + 864);
          if (v14 != nullptr && *v14 != 0) {
            ++v8;
          }
          else {
            v15 = *(_BYTE**)(v13 + 872);
            if (v15 != nullptr && *v15 != 0) {
              ++v8;
            }
          }
          v16 = *(_QWORD*)(v6 + 8LL * (*v12 & 0xFFF));
          v17 = *(_BYTE**)(v16 + 864);
          if (v17 != nullptr && *v17 != 0) {
            ++v8;
          }
          else {
            v18 = *(_BYTE**)(v16 + 872);
            if (v18 != nullptr && *v18 != 0) {
              ++v8;
            }
          }
          v7 += 2;
          v12 += 2;
        } while (((v5 >> 2) & 0x7FFFFFFE) != v7);
      }
      if ((v5 & 4) != 0) {
        v9 = *(_QWORD*)(v6 + 8LL * (*(_DWORD*)(v2 + 4 * v7) & 0xFFF));
        v10 = *(_BYTE**)(v9 + 864);
        if (v10 != nullptr && *v10 != 0) {
          ++v8;
        }
        else {
          v19 = *(_BYTE**)(v9 + 872);
          if (v19 != nullptr && *v19 != 0) {
            ++v8;
          }
        }
      }
    }
    v11 = UnitSkillList_84d980(a1 + 1360, a2);
    if ((v11 & 1) != 0) {
      v20 = *(_QWORD*)(a1 + 1400);
      v21 = *(_QWORD*)(a1 + 1392);
      *(_QWORD*)(a1 + 1448) = 0;
      v22 = v20 - v21;
      *(_QWORD*)(a1 + 1440) = 0;
      if ((int)((unsigned __int64)(v20 - v21) >> 2) >= 1) {
        v23 = *v4;
        v24 = (int)(v22 >> 2);
        v25 = v24 <= 1 ? 1LL : (int)(v22 >> 2);
        if (v24 >= 2) {
          v31 = (int*)(v21 + 4);
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          do {
            v30 += 2;
            v32 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (*(v31 - 1) & 0xFFF));
            v33 = v29 | (1 << *(_BYTE*)(v32 + 104));
            *(_WORD*)(a1 + 1440) = v33;
            v34 = (1LL << *(_BYTE*)(v32 + 250)) | v28;
            *(_QWORD*)(a1 + 1448) = v34;
            v35 = (1 << *(_BYTE*)(v32 + 115)) | v27;
            *(_DWORD*)(a1 + 1444) = v35;
            v36 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v26;
            *(_WORD*)(a1 + 1442) = v36;
            v37 = *v31;
            v31 += 2;
            v38 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (v37 & 0xFFF));
            v29 = v33 | (1 << *(_BYTE*)(v38 + 104));
            *(_WORD*)(a1 + 1440) = v29;
            v28 = (1LL << *(_BYTE*)(v38 + 250)) | v34;
            *(_QWORD*)(a1 + 1448) = v28;
            v27 = (1 << *(_BYTE*)(v38 + 115)) | v35;
            *(_DWORD*)(a1 + 1444) = v27;
            v26 = *(unsigned __int16*)(*(_QWORD*)(v38 + 24) + 1064LL) | v36;
            *(_WORD*)(a1 + 1442) = v26;
          } while ((v25 & 0x7FFFFFFFFFFFFFFELL) != v30);
        }
        else {
          LOWORD(v26) = 0;
          v27 = 0;
          v28 = 0;
          LOWORD(v29) = 0;
          v30 = 0;
        }
        if ((v25 & 1) != 0) {
          v39 = *(_QWORD*)(*(_QWORD*)(v23 + 64) +
                           8LL * (*(_DWORD*)(v21 + 4 * v30) & 0xFFF));
          *(_WORD*)(a1 + 1440) = v29 | (1 << *(_BYTE*)(v39 + 104));
          *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v39 + 250)) | v28;
          *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v39 + 115)) | v27;
          *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v39 + 24) + 1064LL) | v26;
        }
      }
      game_Unit_Unknown6cd8f0(a1);
    }
    v40 = *(_QWORD*)(a1 + 1776);
    v41 = *(_QWORD*)(a1 + 1784) - v40;
    if ((int)(v41 >> 2) < 1) {
      v44 = 0;
    }
    else {
      v42 = *(_QWORD*)(*v4 + 64);
      if ((v41 & 0x1FFFFFFFCLL) == 4) {
        v43 = 0;
        v44 = 0;
      }
      else {
        v47 = (_DWORD*)(v40 + 4);
        v43 = 0;
        v44 = 0;
        do {
          v48 = *(_QWORD*)(v42 + 8LL * (*(v47 - 1) & 0xFFF));
          v49 = *(_BYTE**)(v48 + 864);
          if (v49 != nullptr && *v49 != 0) {
            ++v44;
          }
          else {
            v50 = *(_BYTE**)(v48 + 872);
            if (v50 != nullptr && *v50 != 0) {
              ++v44;
            }
          }
          v51 = *(_QWORD*)(v42 + 8LL * (*v47 & 0xFFF));
          v52 = *(_BYTE**)(v51 + 864);
          if (v52 != nullptr && *v52 != 0) {
            ++v44;
          }
          else {
            v53 = *(_BYTE**)(v51 + 872);
            if (v53 != nullptr && *v53 != 0) {
              ++v44;
            }
          }
          v43 += 2;
          v47 += 2;
        } while (((v41 >> 2) & 0x7FFFFFFE) != v43);
      }
      if ((v41 & 4) != 0) {
        v45 = *(_QWORD*)(v42 + 8LL * (*(_DWORD*)(v40 + 4 * v43) & 0xFFF));
        v46 = *(_BYTE**)(v45 + 864);
        if (v46 != nullptr && *v46 != 0) {
          ++v44;
        }
        else {
          v54 = *(_BYTE**)(v45 + 872);
          if (v54 != nullptr && *v54 != 0) {
            ++v44;
          }
        }
      }
    }
    if (v44 != v8) {
      *(_WORD*)(a1 + 20) |= 0x44u;
    }
  }
  else {
    v11 = 0;
  }
  return v11 & 1;
}

__int64 Unit_6cb490(__int64 a1)
{
  int v2;
  __int64 result;
  int v4;
  int v5;
  unsigned __int8 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned __int8 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  _BYTE v17[4];
  _BYTE v18[4];

  v2 = (unsigned __int8)GameRoutine_6cb640();
  result = 0;
  *(_DWORD*)(a1 + 416) &= ~0x8000u;
  if (v2 > 2) {
    switch (v2) {
    case 3:
      v4 = *(unsigned __int8*)(a1 + 500);
      v5 = Unit_6c9ef0(a1);
      if (v5 >= v4 + 1) {
        v6 = v4 + 1;
      }
      else {
        v6 = v5;
      }
      *(_BYTE*)(a1 + 500) = v6;
      if (v4 != v6) {
        v7 = *(unsigned __int16*)(a1 + 492);
        v17[0] = 0;
        v8 = game_Unit_GetParam(a1, v17, 1);
        if (*(_WORD*)(a1 + 494) != 0 && v7 != *(unsigned __int16*)(a1 + 494)) {
          *(_WORD*)(a1 + 494) = 0;
        }
        if (v8 >= (__int16)v7) {
          v9 = (__int16)v7;
        }
        else {
          v9 = v8;
        }
        if ((v7 & 0x8000u) != 0) {
          v9 = 0;
        }
        if (v9 != *(__int16*)(a1 + 492)) {
          *(_WORD*)(a1 + 492) = v9;
        }
      }
      break;
    case 4:
      v10 = *(unsigned __int8*)(a1 + 500);
      v11 = Unit_6c9ef0(a1);
      if (v11 >= v10 + 1) {
        v12 = v10 + 1;
      }
      else {
        v12 = v11;
      }
      *(_BYTE*)(a1 + 500) = v12;
      if (v10 != v12) {
        v13 = *(unsigned __int16*)(a1 + 492);
        v18[0] = 0;
        v14 = game_Unit_GetParam(a1, v18, 1);
        if (*(_WORD*)(a1 + 494) != 0 && v13 != *(unsigned __int16*)(a1 + 494)) {
          *(_WORD*)(a1 + 494) = 0;
        }
        if (v14 >= (__int16)v13) {
          v15 = (__int16)v13;
        }
        else {
          v15 = v14;
        }
        if ((v13 & 0x8000u) != 0) {
          v15 = 0;
        }
        if (v15 != *(__int16*)(a1 + 492)) {
          *(_WORD*)(a1 + 492) = v15;
        }
      }
      if ((unsigned __int8)game_Unit_GetUnknown6cba30(a1) == 3) {
        v16 = 1;
      }
      else {
        v16 = 6;
      }
      game_Unit_SetPollution(a1, v16);
      return 1;
    case 5:
      break;
    default:
      return result;
    }
    game_Unit_SetPollution(a1, 0);
    goto LABEL_24;
  }
  if (v2 == 1) {
    GameRoutine_6ca260(a1);
    return 1;
  }
  if (v2 == 2) {
  LABEL_24:
    GameRoutine_6cab80(a1);
    return 1;
  }
  return result;
}

__int64 Unit_6cb640(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  bool v6;
  unsigned int v7;
  __int64 v8;
  char v9;
  char v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64* v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  char v28;
  __int64* v29;
  __int64 v30;
  unsigned int v31;
  unsigned int v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  int v40;

  if ((*(_BYTE*)(a1 + 417) & 0x80) == 0) {
    return 0;
  }
  v2 = game_g_shared_system_skills_ptr;
  v3 = *(_QWORD*)(a1 + 1744);
  v4 = *(unsigned int*)((char*)((_UNKNOWN*)0xDCLL) +
                        game_g_shared_system_skills_ptr);
  v5 = *(_QWORD*)(a1 + 1752) - v3;
  v40 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if (((v4 >> 5) & 0x7F) + 1 > v5 >> 2 ||
      ((*(_DWORD*)(v3 + 4 * ((v4 >> 5) & 0x7F)) >> v4) & 1) == 0) {
    v7 = *(unsigned __int8*)(a1 + 499);
    v8 = a1 + 440;
  LABEL_9:
    if (*(_QWORD*)v8 != 0) {
      v10 = *(_BYTE*)(*(_QWORD*)v8 + 16LL);
    }
    else {
      v10 = 9;
    }
    if (((1 << v10) & 0xF1) != 0) {
      v11 = game_820d50(2);
      if (game_GameModeData_instance_ == 0 ||
          (v12 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v11)) == 0 ||
          *(_DWORD*)(v12 + 32) == 0) {
        v13 = *(unsigned int*)((char*)((_UNKNOWN*)0xDCLL) + v2);
        v14 = *(_QWORD*)(a1 + 1744);
        v15 = *(_QWORD*)(a1 + 1752) - v14;
        v40 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) + v2) & 0xFFF;
        if (((v13 >> 5) & 0x7F) + 1 <= v15 >> 2 &&
            ((*(_DWORD*)(v14 + 4 * ((v13 >> 5) & 0x7F)) >> v13) & 1) != 0) {
          if (game_HasActiveSkill_843420_alt1(&v40, a1 + 1744)) {
            v16 = 12;
          }
          else {
            v16 = 6;
          }
          if (v16 > v7) {
          LABEL_54:
            v33 = *(unsigned int*)((char*)((_UNKNOWN*)0xE0LL) + v2);
            v34 = *(_QWORD*)(a1 + 1744);
            v35 = *(_QWORD*)(a1 + 1752) - v34;
            v40 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE0LL) + v2) & 0xFFF;
            if (((v33 >> 5) & 0x7F) + 1 <= v35 >> 2 &&
                ((*(_DWORD*)(v34 + 4 * ((v33 >> 5) & 0x7F)) >> v33) & 1) != 0 &&
                game_HasActiveSkill_843420_alt1(&v40, a1 + 1744)) {
              return 2;
            }
            return 0;
          }
        }
        else if (v7 < 6) {
          goto LABEL_54;
        }
      }
    }
    if (game_Unit_CanPollute((_QWORD*)a1)) {
      return 3;
    }
    goto LABEL_54;
  }
  v6 = game_HasActiveSkill_843420_alt1(&v40, a1 + 1744);
  v7 = *(unsigned __int8*)(a1 + 499);
  v8 = a1 + 440;
  if (!v6 || *(_QWORD*)(a1 + 408) != 0) {
    goto LABEL_9;
  }
  if (*(_QWORD*)v8 != 0) {
    v9 = *(_BYTE*)(*(_QWORD*)v8 + 16LL);
  }
  else {
    v9 = 9;
  }
  if (((1 << v9) & 0xF1) != 0 &&
          ((v18 = game_820d50(2), game_GameModeData_instance_ == 0) ||
           (v19 = game_GameVariableTable_Find_alt1(
                *(_QWORD**)(game_GameModeData_instance_ + 48),
                (unsigned __int64*)v18)) == 0 ||
           *(_DWORD*)(v19 + 32) == 0) &&
          ((v20 = *(unsigned int*)((char*)((_UNKNOWN*)0xDCLL) + v2),
            v21 = *(_QWORD*)(a1 + 1744), v22 = *(_QWORD*)(a1 + 1752) - v21,
            v40 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xDCLL) + v2) & 0xFFF,
            ((v20 >> 5) & 0x7F) + 1 > v22 >> 2) ||
                   ((*(_DWORD*)(v21 + 4 * ((v20 >> 5) & 0x7F)) >> v20) & 1) == 0
               ? (v23 = 6)
           : !game_HasActiveSkill_843420_alt1(&v40, a1 + 1744) ? (v23 = 6)
                                                               : (v23 = 12),
           v23 > v7) ||
      !game_Unit_CanPollute((_QWORD*)a1)) {
    if (*(_QWORD*)v8 != 0) {
      v28 = *(_BYTE*)(*(_QWORD*)v8 + 16LL);
    }
    else {
      v28 = 9;
    }
    if (((1 << v28) & 0xF1) != 0) {
      v29 = game_820d50(2);
      if (game_GameModeData_instance_ == 0 ||
          (v30 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)v29)) == 0 ||
          *(_DWORD*)(v30 + 32) == 0) {
        v31 = *(unsigned __int8*)(a1 + 499);
        if ((unsigned __int8)game_Unit_GetUnknown6cba30_alt1(a1) == 3) {
          v32 = 1;
        }
        else {
          v32 = 6;
        }
        if (v32 <= v31) {
          v36 = *(unsigned int*)((char*)((_UNKNOWN*)0xE0LL) + v2);
          v37 = *(_QWORD*)(a1 + 1744);
          v38 = *(_QWORD*)(a1 + 1752) - v37;
          v40 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE0LL) + v2) & 0xFFF;
          return ((v36 >> 5) & 0x7F) + 1 > v38 >> 2 ||
                 ((*(_DWORD*)(v37 + 4 * ((v36 >> 5) & 0x7F)) >> v36) & 1) ==
                     0 ||
                 !game_HasActiveSkill_843420_alt1(&v40, a1 + 1744);
        }
        goto LABEL_54;
      }
    }
    return 0;
  }
  v24 = *(unsigned int*)((char*)((_UNKNOWN*)0xC8LL) + v2);
  v25 = *(_QWORD*)(a1 + 1752);
  v40 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xC8LL) + v2) & 0xFFF;
  v26 = *(_QWORD*)(a1 + 1744);
  v27 = (v25 - v26) >> 2;
  if (v27 >= ((v24 >> 5) & 0x7F) + 1 &&
      ((*(_DWORD*)(v26 + 4 * ((v24 >> 5) & 0x7F)) >> v24) & 1) != 0) {
    if (game_HasActiveSkill_843420_alt1(&v40, a1 + 1744)) {
      return 4;
    }
    v26 = *(_QWORD*)(a1 + 1744);
    v27 = (*(_QWORD*)(a1 + 1752) - v26) >> 2;
  }
  v39 = *(unsigned int*)((char*)((_UNKNOWN*)0xC4LL) + v2);
  v40 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xC4LL) + v2) & 0xFFF;
  if (v27 < ((v39 >> 5) & 0x7F) + 1 ||
      ((*(_DWORD*)(v26 + 4 * ((v39 >> 5) & 0x7F)) >> v39) & 1) == 0) {
    return 3;
  }
  if (game_HasActiveSkill_843420_alt1(&v40, a1 + 1744)) {
    return 5;
  }
  else {
    return 3;
  }
}

_DWORD* Unit_6cbb60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  _DWORD* v14;

  if ((*(_BYTE*)(a1 + 1837) & 0x40) == 0 ||
      (v2 = *(_QWORD*)(a1 + 1784), v3 = *(_QWORD*)(a1 + 1776), v2 == v3)) {
    v6 = GameData_212c8a8;
  }
  else {
    v4 = (v2 - v3) >> 2;
    v5 = 0;
    v6 = GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v3 + 4 * v5) & 0xFFF)) +
                     250LL) != 46) {
      if (v4 == ++v5) {
        goto LABEL_8;
      }
    }
    v14 = (_DWORD*)(v3 + 4LL * (unsigned int)v5);
    if (v5 > -1) {
      v6 = v14;
    }
  }
LABEL_8:
  if ((*v6 & 0xFFF) == 0) {
    return GameData_212c8a8;
  }
  v7 = GameData_212c880[0];
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*v6 & 0xFFF));
  if ((GameRoutine_6fc510(v8) & 1) != 0) {
    return GameData_212c8a8;
  }
  if (*(_BYTE*)(v8 + 273) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * (*v6 & 0xFFFLL));
    v10 = *(unsigned __int8*)(v9 + 104);
    v11 = *(unsigned __int8*)(v9 + 273);
    v12 = (unsigned int)(v10 - 5) >= 2 ? 0 : (*v6 >> 19) & 0x1F;
    if ((int)(v12 - ((*v6 >> 12) & 0x7F) + v11) < 1) {
      return GameData_212c8a8;
    }
  }
  if ((GameRoutine_6fc7a0(v8, a1 + 1744) & 1) == 0) {
    return GameData_212c8a8;
  }
  return v6;
}

__int64 Unit_6cbdc0(_QWORD* a1, _DWORD* a2, unsigned __int16* a3, int a4)
{
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v18;
  char v19;
  bool v20;
  bool v22;
  __int64 v24;
  int v25;
  bool v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD v32[4];
  _QWORD* v33;
  unsigned int v34;
  _QWORD v35[4];
  _QWORD* v36;
  _QWORD v37[4];
  _QWORD* v38;

  v34 = 0;
  v8 = game_Unit_GetUnknown6cbca0();
  v9 = *a2 & 0xFFFLL;
  if ((*a2 & 0xFFF) != 0) {
    v10 = *(char*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v9) +
                   276LL);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v9) +
                  276LL) != 0) {
      v11 = a1[218];
      v12 = ((unsigned __int64)(unsigned int)GameData_21d9860 >> 5) & 0x7F;
      if (v12 + 1 <= (a1[219] - v11) >> 2 &&
          ((*(_DWORD*)(v11 + 4LL * (unsigned int)v12) >> GameData_21d9860) &
           1) != 0) {
        v10 = 0;
      }
      else {
        v13 = a1[55];
        if (v13 != 0) {
          v14 = *(_BYTE*)(v13 + 16);
        }
        else {
          v14 = 9;
        }
        if (((1 << v14) & 6) != 0) {
          v10 = 0;
        }
      }
    }
    v34 = v10;
  }
  else {
    v10 = 0;
  }
  if (a4 >= 1) {
    v10 += v8 * a4 *
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8LL * *a3) +
                               90LL);
    v34 = v10;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (unsigned int)v9);
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v15 + 104)) & 1) ==
      0) {
    goto LABEL_22;
  }
  v16 = *(unsigned __int8*)(v15 + 106);
  if (*(_BYTE*)(v15 + 106) == 0 || v16 == 6) {
    v18 = *(_QWORD*)(v15 + 576);
    if (v18 != 0) {
      goto LABEL_25;
    }
  LABEL_22:
    v19 = 0;
    v20 = false;
    goto LABEL_38;
  }
  if (v16 != 1) {
    v18 = *(_QWORD*)(v15 + 576);
    v22 = false;
    v19 = 0;
    v20 = false;
    if (v18 == 0) {
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  v18 = *(_QWORD*)(v15 + 576);
  if (v18 == 0) {
    v20 = false;
    v19 = 1;
    goto LABEL_38;
  }
LABEL_25:
  v22 = *(unsigned __int8*)(v18 + 72) < 8u && *(_BYTE*)(v18 + 73) == 1;
LABEL_32:
  v19 = v22;
  v20 = *(unsigned __int8*)(v18 + 72) < 8u && *(_BYTE*)(v18 + 73) == 7;
LABEL_38:
  v24 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a3);
  v25 = *(unsigned __int8*)(v24 + 73);
  v26 = *(unsigned __int8*)(v24 + 72) < 8u;
  v27 = v25 == 1 && *(unsigned __int8*)(v24 + 72) < 8u;
  if (v25 != 7) {
    v26 = false;
  }
  if (v26 || (v19 & 1) != 0 || v20 || v27) {
    v32[1] = v8;
    v32[2] = &v34;
    v32[0] = GameData_1f915e8;
    v33 = v32;
    v35[0] = GameData_1f93088;
    v35[1] = v32;
    v36 = v35;
    v37[2] = v35;
    v38 = v37;
    v37[0] = GameData_1f92f88;
    v37[1] = 13;
    game_UnitItemList_EachItem((char*)a1 + 828, v37);
    if (v38 == v37) {
      v28 = 32;
    }
    else {
      if (v38 == nullptr) {
        goto LABEL_52;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v38 + v28))((__int64)v38);
  LABEL_52:
    if (v36 == v35) {
      v29 = 32;
    }
    else {
      if (v36 == nullptr) {
        goto LABEL_57;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v36 + v29))((__int64)v36);
  LABEL_57:
    if (v33 == v32) {
      v30 = 32;
    }
    else {
      if (v33 == nullptr) {
        return v34;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*v33 + v30))((__int64)v33);
    return v34;
  }
  return v10;
}

__int64 Unit_6cc0a0(__int64 a1)
{
  int v2;
  __int64 result;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  float v9;
  __int128 v10;
  __int128 v11;
  __int64 v13;
  unsigned int v14;
  __int128 v15;

  game_Unit_UpdateShape(a1);
  game_Unit_Unknown6c4610_alt1(a1);
  game_Unit_CheckEquipment_alt1(a1);
  v2 = *(_DWORD*)(a1 + 416);
  if ((v2 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v2 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  result = *(_QWORD*)(a1 + 8);
  if (result != 0) {
    v4 = *(char*)(result + 584);
    if ((v4 & 0x80000000) == 0) {
      v5 = *(char*)(result + 585);
      if ((v5 & 0x80000000) == 0) {
        v6 = *(_DWORD*)(result + 592);
        v7 = v4 | 0x100;
        v8 = v5 | 0x100;
        v9 = (float)(unsigned int)(v6 - 1) * 0x1.4000000000000p+1f;
        if (v6 <= 0) {
          v9 = 0x0.0p+0f;
        }
        *(_QWORD*)&v10 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v7 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v9);
        v13 = COERCE_UNSIGNED_INT(
            (float)((float)((float)((float)v8 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v9);
        *(float*)&v14 =
            (float)((float)((float)((float)v7 * 0x1.4000000000000p+2f) +
                            0x1.4000000000000p+1f) +
                    -0x1.4000000000000p+10f) +
            v9;
        *((_QWORD*)&v10 + 1) = v13;
        v15 = v10;
        *(_QWORD*)&v11 =
            __PAIR64__(COERCE_UNSIGNED_INT(Unit_6c7fa0(result, &v15)), v14);
        *((_QWORD*)&v11 + 1) = v13;
        v15 = v11;
        Cursor_734a80(a1 + 48, (__int64*)&v15);
        UnitActor_81ba20(a1);
      }
    }
    result = *(_QWORD*)(a1 + 264);
    if (result != 0) {
      result = CharacterBuilder_1084780(result);
    }
  }
  *(_WORD*)(a1 + 20) |= 1u;
  return result;
}

__int64 Unit_6cc580(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*a2 & 0xFFF)) +
                104LL) != 2) {
    return 0;
  }
  v5 = (*(_QWORD*)(a1 + 1208) - *(_QWORD*)(a1 + 1200)) >> 2;
  v28 = 32;
  if ((int)(game_UnitSkillList_GetMaxValue(a1 + 1744, &v28) + 3) <= (int)v5 ||
      (UnitSkillList_84cc00(a1 + 1168, a2, 1) & 1) == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 1208);
  v7 = *(_QWORD*)(a1 + 1200);
  *(_QWORD*)(a1 + 1256) = 0;
  v8 = v6 - v7;
  *(_QWORD*)(a1 + 1248) = 0;
  if ((int)((unsigned __int64)(v6 - v7) >> 2) >= 1) {
    v9 = *v2;
    v10 = (int)(v8 >> 2);
    v11 = v10 <= 1 ? 1LL : (int)(v8 >> 2);
    if (v10 >= 2) {
      v18 = (int*)(v7 + 4);
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      do {
        v16 += 2;
        v19 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v18 - 1) & 0xFFF));
        v20 = v15 | (1 << *(_BYTE*)(v19 + 104));
        *(_WORD*)(a1 + 1248) = v20;
        v21 = (1LL << *(_BYTE*)(v19 + 250)) | v14;
        *(_QWORD*)(a1 + 1256) = v21;
        v22 = (1 << *(_BYTE*)(v19 + 115)) | v13;
        *(_DWORD*)(a1 + 1252) = v22;
        v23 = *(unsigned __int16*)(*(_QWORD*)(v19 + 24) + 1064LL) | v12;
        *(_WORD*)(a1 + 1250) = v23;
        v24 = *v18;
        v18 += 2;
        v25 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v24 & 0xFFF));
        v15 = v20 | (1 << *(_BYTE*)(v25 + 104));
        *(_WORD*)(a1 + 1248) = v15;
        v14 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
        *(_QWORD*)(a1 + 1256) = v14;
        v13 = (1 << *(_BYTE*)(v25 + 115)) | v22;
        *(_DWORD*)(a1 + 1252) = v13;
        v12 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v23;
        *(_WORD*)(a1 + 1250) = v12;
      } while ((v11 & 0x7FFFFFFFFFFFFFFELL) != v16);
    }
    else {
      LOWORD(v12) = 0;
      v13 = 0;
      v14 = 0;
      LOWORD(v15) = 0;
      v16 = 0;
    }
    if ((v11 & 1) != 0) {
      v26 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                       8LL * (*(_DWORD*)(v7 + 4 * v16) & 0xFFF));
      *(_WORD*)(a1 + 1248) = v15 | (1 << *(_BYTE*)(v26 + 104));
      *(_QWORD*)(a1 + 1256) = (1LL << *(_BYTE*)(v26 + 250)) | v14;
      *(_DWORD*)(a1 + 1252) = (1 << *(_BYTE*)(v26 + 115)) | v13;
      *(_WORD*)(a1 + 1250) = *(_WORD*)(*(_QWORD*)(v26 + 24) + 1064LL) | v12;
    }
  }
  v27 = *(_DWORD*)(a1 + 416);
  if ((v27 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v27 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return 1;
}

__int64 Unit_6cc7e0(__int64 a1, __int64 a2)
{
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char v25;

  v3 = UnitSkillList_84d980(a1 + 1168, a2);
  if ((v3 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1208);
    v5 = *(_QWORD*)(a1 + 1200);
    *(_QWORD*)(a1 + 1256) = 0;
    v6 = v4 - v5;
    *(_QWORD*)(a1 + 1248) = 0;
    if ((int)((unsigned __int64)(v4 - v5) >> 2) >= 1) {
      v7 = (int)(v6 >> 2);
      v8 = v7 <= 1 ? 1LL : (int)(v6 >> 2);
      v9 = *GameData_212c880[0];
      if (v7 >= 2) {
        v15 = (int*)(v5 + 4);
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do {
          v14 += 2;
          v16 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v15 - 1) & 0xFFF));
          v17 = v13 | (1 << *(_BYTE*)(v16 + 104));
          *(_WORD*)(a1 + 1248) = v17;
          v18 = (1LL << *(_BYTE*)(v16 + 250)) | v12;
          *(_QWORD*)(a1 + 1256) = v18;
          v19 = (1 << *(_BYTE*)(v16 + 115)) | v11;
          *(_DWORD*)(a1 + 1252) = v19;
          v20 = *(unsigned __int16*)(*(_QWORD*)(v16 + 24) + 1064LL) | v10;
          *(_WORD*)(a1 + 1250) = v20;
          v21 = *v15;
          v15 += 2;
          v22 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v21 & 0xFFF));
          v13 = v17 | (1 << *(_BYTE*)(v22 + 104));
          *(_WORD*)(a1 + 1248) = v13;
          v12 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
          *(_QWORD*)(a1 + 1256) = v12;
          v11 = (1 << *(_BYTE*)(v22 + 115)) | v19;
          *(_DWORD*)(a1 + 1252) = v11;
          v10 = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL) | v20;
          *(_WORD*)(a1 + 1250) = v10;
        } while ((v8 & 0x7FFFFFFFFFFFFFFELL) != v14);
      }
      else {
        LOWORD(v10) = 0;
        v11 = 0;
        v12 = 0;
        LOWORD(v13) = 0;
        v14 = 0;
      }
      if ((v8 & 1) != 0) {
        v23 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                         8LL * (*(_DWORD*)(v5 + 4 * v14) & 0xFFF));
        *(_WORD*)(a1 + 1248) = v13 | (1 << *(_BYTE*)(v23 + 104));
        *(_QWORD*)(a1 + 1256) = (1LL << *(_BYTE*)(v23 + 250)) | v12;
        *(_DWORD*)(a1 + 1252) = (1 << *(_BYTE*)(v23 + 115)) | v11;
        *(_WORD*)(a1 + 1250) = *(_WORD*)(*(_QWORD*)(v23 + 24) + 1064LL) | v10;
      }
    }
    v24 = *(_DWORD*)(a1 + 416);
    if ((v24 & 0x10000000) == 0) {
      v25 = v3;
      *(_DWORD*)(a1 + 416) = v24 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      v3 = v25;
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  return v3 & 1;
}

__int64 Unit_6cc9e0(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  char v4;
  int v6;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  _BYTE v34[4];
  _BYTE v35[4];

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*a2 & 0xFFF)) +
                104LL) == 1 &&
      (int)((*(_QWORD*)(a1 + 1304) - *(_QWORD*)(a1 + 1296)) >> 2) <= 4) {
    v6 = *(__int16*)(a1 + 492);
    v34[0] = 0;
    v8 = game_Unit_GetParam(a1, v34, 1);
    v4 = UnitSkillList_84cc00(a1 + 1264, a2, 1);
    if ((v4 & 1) != 0) {
      v9 = *(_QWORD*)(a1 + 1304);
      v10 = *(_QWORD*)(a1 + 1296);
      *(_QWORD*)(a1 + 1352) = 0;
      v11 = v9 - v10;
      *(_QWORD*)(a1 + 1344) = 0;
      if ((int)((unsigned __int64)(v9 - v10) >> 2) >= 1) {
        v12 = *v2;
        v13 = (int)(v11 >> 2);
        v14 = v13 <= 1 ? 1LL : (int)(v11 >> 2);
        if (v13 >= 2) {
          v20 = (int*)(v10 + 4);
          v15 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          do {
            v19 += 2;
            v21 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (*(v20 - 1) & 0xFFF));
            v22 = v18 | (1 << *(_BYTE*)(v21 + 104));
            *(_WORD*)(a1 + 1344) = v22;
            v23 = (1LL << *(_BYTE*)(v21 + 250)) | v17;
            *(_QWORD*)(a1 + 1352) = v23;
            v24 = (1 << *(_BYTE*)(v21 + 115)) | v16;
            *(_DWORD*)(a1 + 1348) = v24;
            v25 = *(unsigned __int16*)(*(_QWORD*)(v21 + 24) + 1064LL) | v15;
            *(_WORD*)(a1 + 1346) = v25;
            v26 = *v20;
            v20 += 2;
            v27 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v26 & 0xFFF));
            v18 = v22 | (1 << *(_BYTE*)(v27 + 104));
            *(_WORD*)(a1 + 1344) = v18;
            v17 = (1LL << *(_BYTE*)(v27 + 250)) | v23;
            *(_QWORD*)(a1 + 1352) = v17;
            v16 = (1 << *(_BYTE*)(v27 + 115)) | v24;
            *(_DWORD*)(a1 + 1348) = v16;
            v15 = *(unsigned __int16*)(*(_QWORD*)(v27 + 24) + 1064LL) | v25;
            *(_WORD*)(a1 + 1346) = v15;
          } while ((v14 & 0x7FFFFFFFFFFFFFFELL) != v19);
        }
        else {
          LOWORD(v15) = 0;
          v16 = 0;
          v17 = 0;
          LOWORD(v18) = 0;
          v19 = 0;
        }
        if ((v14 & 1) != 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(v12 + 64) +
                           8LL * (*(_DWORD*)(v10 + 4 * v19) & 0xFFF));
          *(_WORD*)(a1 + 1344) = v18 | (1 << *(_BYTE*)(v28 + 104));
          *(_QWORD*)(a1 + 1352) = (1LL << *(_BYTE*)(v28 + 250)) | v17;
          *(_DWORD*)(a1 + 1348) = (1 << *(_BYTE*)(v28 + 115)) | v16;
          *(_WORD*)(a1 + 1346) = *(_WORD*)(*(_QWORD*)(v28 + 24) + 1064LL) | v15;
        }
      }
      v29 = *(_DWORD*)(a1 + 416);
      if ((v29 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v29 | 0x10000000;
        GameRoutine_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        GameRoutine_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
    }
    v35[0] = 0;
    v30 = game_Unit_GetParam(a1, v35, 1);
    if (v30 != v8) {
      v31 = v30 - v8 + v6;
      if (*(_WORD*)(a1 + 494) != 0 && v31 != *(__int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v30 >= v31) {
        v32 = v30 - v8 + v6;
      }
      else {
        v32 = v30;
      }
      if (v31 < 1) {
        v33 = 1;
      }
      else {
        v33 = v32;
      }
      if (v33 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v33;
      }
    }
  }
  else {
    v4 = 0;
  }
  return v4 & 1;
}

__int64 Unit_6ccca0(__int64 a1, __int64 a2)
{
  int v2;
  int v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  _BYTE v33[4];
  _BYTE v34[4];

  v2 = *(__int16*)(a1 + 492);
  v33[0] = 0;
  v5 = game_Unit_GetParam(a1, v33, 1);
  v6 = UnitSkillList_84d980(a1 + 1264, a2);
  if ((v6 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 1304);
    v8 = *(_QWORD*)(a1 + 1296);
    *(_QWORD*)(a1 + 1352) = 0;
    v9 = v7 - v8;
    *(_QWORD*)(a1 + 1344) = 0;
    if ((int)((unsigned __int64)(v7 - v8) >> 2) >= 1) {
      v10 = (int)(v9 >> 2);
      v11 = v10 <= 1 ? 1LL : (int)(v9 >> 2);
      v12 = *GameData_212c880[0];
      if (v10 >= 2) {
        v18 = (int*)(v8 + 4);
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        do {
          v17 += 2;
          v19 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (*(v18 - 1) & 0xFFF));
          v20 = v16 | (1 << *(_BYTE*)(v19 + 104));
          *(_WORD*)(a1 + 1344) = v20;
          v21 = (1LL << *(_BYTE*)(v19 + 250)) | v15;
          *(_QWORD*)(a1 + 1352) = v21;
          v22 = (1 << *(_BYTE*)(v19 + 115)) | v14;
          *(_DWORD*)(a1 + 1348) = v22;
          v23 = *(unsigned __int16*)(*(_QWORD*)(v19 + 24) + 1064LL) | v13;
          *(_WORD*)(a1 + 1346) = v23;
          v24 = *v18;
          v18 += 2;
          v25 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v24 & 0xFFF));
          v16 = v20 | (1 << *(_BYTE*)(v25 + 104));
          *(_WORD*)(a1 + 1344) = v16;
          v15 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
          *(_QWORD*)(a1 + 1352) = v15;
          v14 = (1 << *(_BYTE*)(v25 + 115)) | v22;
          *(_DWORD*)(a1 + 1348) = v14;
          v13 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v23;
          *(_WORD*)(a1 + 1346) = v13;
        } while ((v11 & 0x7FFFFFFFFFFFFFFELL) != v17);
      }
      else {
        LOWORD(v13) = 0;
        v14 = 0;
        v15 = 0;
        LOWORD(v16) = 0;
        v17 = 0;
      }
      if ((v11 & 1) != 0) {
        v26 = *(_QWORD*)(*(_QWORD*)(v12 + 64) +
                         8LL * (*(_DWORD*)(v8 + 4 * v17) & 0xFFF));
        *(_WORD*)(a1 + 1344) = v16 | (1 << *(_BYTE*)(v26 + 104));
        *(_QWORD*)(a1 + 1352) = (1LL << *(_BYTE*)(v26 + 250)) | v15;
        *(_DWORD*)(a1 + 1348) = (1 << *(_BYTE*)(v26 + 115)) | v14;
        *(_WORD*)(a1 + 1346) = *(_WORD*)(*(_QWORD*)(v26 + 24) + 1064LL) | v13;
      }
    }
    v27 = *(_DWORD*)(a1 + 416);
    if ((v27 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v27 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  v34[0] = 0;
  v28 = game_Unit_GetParam(a1, v34, 1);
  if (v28 != v5) {
    v29 = v28 - v5 + v2;
    if (*(_WORD*)(a1 + 494) != 0 && v29 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v28 >= v29) {
      v30 = v28 - v5 + v2;
    }
    else {
      v30 = v28;
    }
    if (v29 < 1) {
      v31 = 1;
    }
    else {
      v31 = v30;
    }
    if (v31 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v31;
    }
  }
  return v6 & 1;
}

__int64 Unit_6cd120(__int64 a1, char a2, _DWORD* a3)
{
  int v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  char v18;
  _DWORD* v19;
  __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  __int64 v23;
  _BYTE* v24;
  _BYTE* v25;
  _DWORD* v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  _BYTE* v33;
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
  _BYTE* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int* v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  _BYTE* v72;
  _DWORD* v73;
  __int64 v74;
  _BYTE* v75;
  _BYTE* v76;
  __int64 v77;
  _BYTE* v78;
  _BYTE* v79;
  int* v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  _BYTE* v94;
  _DWORD* v96;
  __int64 v97;
  _BYTE* v98;
  _BYTE* v99;
  __int64 v100;
  _BYTE* v101;
  _BYTE* v102;

  v4 = *a3 & 0xFFF;
  if ((a2 & 1) != 0) {
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 1776);
      v6 = *(_QWORD*)(a1 + 1784) - v5;
      if ((int)(v6 >> 2) < 1) {
        v9 = 0;
      }
      else {
        v7 = *(_QWORD*)(*GameData_212c880[0] + 64);
        if ((v6 & 0x1FFFFFFFCLL) == 4) {
          v8 = 0;
          v9 = 0;
        }
        else {
          v19 = (_DWORD*)(v5 + 4);
          v8 = 0;
          v9 = 0;
          do {
            v20 = *(_QWORD*)(v7 + 8LL * (*(v19 - 1) & 0xFFF));
            v21 = *(_BYTE**)(v20 + 864);
            if (v21 != nullptr && *v21 != 0) {
              ++v9;
            }
            else {
              v22 = *(_BYTE**)(v20 + 872);
              if (v22 != nullptr && *v22 != 0) {
                ++v9;
              }
            }
            v23 = *(_QWORD*)(v7 + 8LL * (*v19 & 0xFFF));
            v24 = *(_BYTE**)(v23 + 864);
            if (v24 != nullptr && *v24 != 0) {
              ++v9;
            }
            else {
              v25 = *(_BYTE**)(v23 + 872);
              if (v25 != nullptr && *v25 != 0) {
                ++v9;
              }
            }
            v8 += 2;
            v19 += 2;
          } while (((v6 >> 2) & 0x7FFFFFFE) != v8);
        }
        if ((v6 & 4) != 0) {
          v10 = *(_QWORD*)(v7 + 8LL * (*(_DWORD*)(v5 + 4 * v8) & 0xFFF));
          v11 = *(_BYTE**)(v10 + 864);
          if (v11 != nullptr && *v11 != 0) {
            ++v9;
          }
          else {
            v33 = *(_BYTE**)(v10 + 872);
            if (v33 != nullptr && *v33 != 0) {
              ++v9;
            }
          }
        }
      }
      v18 = UnitSkillList_84cc00(a1 + 1360, a3, 1);
      if ((v18 & 1) != 0) {
        v34 = *(_QWORD*)(a1 + 1400);
        v35 = *(_QWORD*)(a1 + 1392);
        *(_QWORD*)(a1 + 1448) = 0;
        v36 = v34 - v35;
        *(_QWORD*)(a1 + 1440) = 0;
        if ((int)((unsigned __int64)(v34 - v35) >> 2) >= 1) {
          v37 = (int)(v36 >> 2);
          v38 = v37 <= 1 ? 1LL : (int)(v36 >> 2);
          v39 = *GameData_212c880[0];
          if (v37 >= 2) {
            v57 = (int*)(v35 + 4);
            v40 = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            do {
              v44 += 2;
              v58 =
                  *(_QWORD*)(*(_QWORD*)(v39 + 64) + 8LL * (*(v57 - 1) & 0xFFF));
              v59 = v43 | (1 << *(_BYTE*)(v58 + 104));
              *(_WORD*)(a1 + 1440) = v59;
              v60 = (1LL << *(_BYTE*)(v58 + 250)) | v42;
              *(_QWORD*)(a1 + 1448) = v60;
              v61 = (1 << *(_BYTE*)(v58 + 115)) | v41;
              *(_DWORD*)(a1 + 1444) = v61;
              v62 = *(unsigned __int16*)(*(_QWORD*)(v58 + 24) + 1064LL) | v40;
              *(_WORD*)(a1 + 1442) = v62;
              v63 = *v57;
              v57 += 2;
              v64 = *(_QWORD*)(*(_QWORD*)(v39 + 64) + 8LL * (v63 & 0xFFF));
              v43 = v59 | (1 << *(_BYTE*)(v64 + 104));
              *(_WORD*)(a1 + 1440) = v43;
              v42 = (1LL << *(_BYTE*)(v64 + 250)) | v60;
              *(_QWORD*)(a1 + 1448) = v42;
              v41 = (1 << *(_BYTE*)(v64 + 115)) | v61;
              *(_DWORD*)(a1 + 1444) = v41;
              v40 = *(unsigned __int16*)(*(_QWORD*)(v64 + 24) + 1064LL) | v62;
              *(_WORD*)(a1 + 1442) = v40;
            } while ((v38 & 0x7FFFFFFFFFFFFFFELL) != v44);
          }
          else {
            LOWORD(v40) = 0;
            v41 = 0;
            v42 = 0;
            LOWORD(v43) = 0;
            v44 = 0;
          }
          if ((v38 & 1) != 0) {
            v65 = *(_QWORD*)(*(_QWORD*)(v39 + 64) +
                             8LL * (*(_DWORD*)(v35 + 4 * v44) & 0xFFF));
            *(_WORD*)(a1 + 1440) = v43 | (1 << *(_BYTE*)(v65 + 104));
            *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v65 + 250)) | v42;
            *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v65 + 115)) | v41;
            *(_WORD*)(a1 + 1442) =
                *(_WORD*)(*(_QWORD*)(v65 + 24) + 1064LL) | v40;
          }
        }
        game_Unit_Unknown6cd8f0(a1);
      }
      v66 = *(_QWORD*)(a1 + 1776);
      v67 = *(_QWORD*)(a1 + 1784) - v66;
      if ((int)(v67 >> 2) >= 1) {
        v68 = *(_QWORD*)(GameData_21c99b0 + 64);
        if ((v67 & 0x1FFFFFFFCLL) == 4) {
          v69 = 0;
          v70 = 0;
        }
        else {
          v73 = (_DWORD*)(v66 + 4);
          v69 = 0;
          v70 = 0;
          do {
            v74 = *(_QWORD*)(v68 + 8LL * (*(v73 - 1) & 0xFFF));
            v75 = *(_BYTE**)(v74 + 864);
            if (v75 != nullptr && *v75 != 0) {
              ++v70;
            }
            else {
              v76 = *(_BYTE**)(v74 + 872);
              if (v76 != nullptr && *v76 != 0) {
                ++v70;
              }
            }
            v77 = *(_QWORD*)(v68 + 8LL * (*v73 & 0xFFF));
            v78 = *(_BYTE**)(v77 + 864);
            if (v78 != nullptr && *v78 != 0) {
              ++v70;
            }
            else {
              v79 = *(_BYTE**)(v77 + 872);
              if (v79 != nullptr && *v79 != 0) {
                ++v70;
              }
            }
            v69 += 2;
            v73 += 2;
          } while (((v67 >> 2) & 0x7FFFFFFE) != v69);
        }
        if ((v67 & 4) == 0) {
          goto LABEL_114;
        }
        v71 = *(_QWORD*)(v68 + 8LL * (*(_DWORD*)(v66 + 4 * v69) & 0xFFF));
        v72 = *(_BYTE**)(v71 + 864);
        if (v72 == nullptr || *v72 == 0) {
          goto LABEL_111;
        }
      LABEL_109:
        ++v70;
        goto LABEL_114;
      }
      goto LABEL_110;
    }
  LABEL_18:
    v18 = 0;
    return v18 & 1;
  }
  if (v4 == 0) {
    goto LABEL_18;
  }
  v12 = *(_QWORD*)(a1 + 1776);
  v13 = *(_QWORD*)(a1 + 1784) - v12;
  if ((int)(v13 >> 2) < 1) {
    v9 = 0;
  }
  else {
    v14 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v13 & 0x1FFFFFFFCLL) == 4) {
      v15 = 0;
      v9 = 0;
    }
    else {
      v26 = (_DWORD*)(v12 + 4);
      v15 = 0;
      v9 = 0;
      do {
        v27 = *(_QWORD*)(v14 + 8LL * (*(v26 - 1) & 0xFFF));
        v28 = *(_BYTE**)(v27 + 864);
        if (v28 != nullptr && *v28 != 0) {
          ++v9;
        }
        else {
          v29 = *(_BYTE**)(v27 + 872);
          if (v29 != nullptr && *v29 != 0) {
            ++v9;
          }
        }
        v30 = *(_QWORD*)(v14 + 8LL * (*v26 & 0xFFF));
        v31 = *(_BYTE**)(v30 + 864);
        if (v31 != nullptr && *v31 != 0) {
          ++v9;
        }
        else {
          v32 = *(_BYTE**)(v30 + 872);
          if (v32 != nullptr && *v32 != 0) {
            ++v9;
          }
        }
        v15 += 2;
        v26 += 2;
      } while (((v13 >> 2) & 0x7FFFFFFE) != v15);
    }
    if ((v13 & 4) != 0) {
      v16 = *(_QWORD*)(v14 + 8LL * (*(_DWORD*)(v12 + 4 * v15) & 0xFFF));
      v17 = *(_BYTE**)(v16 + 864);
      if (v17 != nullptr && *v17 != 0) {
        ++v9;
      }
      else {
        v45 = *(_BYTE**)(v16 + 872);
        if (v45 != nullptr && *v45 != 0) {
          ++v9;
        }
      }
    }
  }
  v18 = UnitSkillList_84d980(a1 + 1360, a3);
  if ((v18 & 1) != 0) {
    v46 = *(_QWORD*)(a1 + 1400);
    v47 = *(_QWORD*)(a1 + 1392);
    *(_QWORD*)(a1 + 1448) = 0;
    v48 = v46 - v47;
    *(_QWORD*)(a1 + 1440) = 0;
    if ((int)((unsigned __int64)(v46 - v47) >> 2) >= 1) {
      v49 = GameData_21c99b0;
      v50 = (int)(v48 >> 2);
      v51 = v50 <= 1 ? 1LL : (int)(v48 >> 2);
      if (v50 >= 2) {
        v80 = (int*)(v47 + 4);
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v56 = 0;
        do {
          v56 += 2;
          v81 = *(_QWORD*)(*(_QWORD*)(v49 + 64) + 8LL * (*(v80 - 1) & 0xFFF));
          v82 = v55 | (1 << *(_BYTE*)(v81 + 104));
          *(_WORD*)(a1 + 1440) = v82;
          v83 = (1LL << *(_BYTE*)(v81 + 250)) | v54;
          *(_QWORD*)(a1 + 1448) = v83;
          v84 = (1 << *(_BYTE*)(v81 + 115)) | v53;
          *(_DWORD*)(a1 + 1444) = v84;
          v85 = *(unsigned __int16*)(*(_QWORD*)(v81 + 24) + 1064LL) | v52;
          *(_WORD*)(a1 + 1442) = v85;
          v86 = *v80;
          v80 += 2;
          v87 = *(_QWORD*)(*(_QWORD*)(v49 + 64) + 8LL * (v86 & 0xFFF));
          v55 = v82 | (1 << *(_BYTE*)(v87 + 104));
          *(_WORD*)(a1 + 1440) = v55;
          v54 = (1LL << *(_BYTE*)(v87 + 250)) | v83;
          *(_QWORD*)(a1 + 1448) = v54;
          v53 = (1 << *(_BYTE*)(v87 + 115)) | v84;
          *(_DWORD*)(a1 + 1444) = v53;
          v52 = *(unsigned __int16*)(*(_QWORD*)(v87 + 24) + 1064LL) | v85;
          *(_WORD*)(a1 + 1442) = v52;
        } while ((v51 & 0x7FFFFFFFFFFFFFFELL) != v56);
      }
      else {
        LOWORD(v52) = 0;
        v53 = 0;
        v54 = 0;
        LOWORD(v55) = 0;
        v56 = 0;
      }
      if ((v51 & 1) != 0) {
        v88 = *(_QWORD*)(*(_QWORD*)(v49 + 64) +
                         8LL * (*(_DWORD*)(v47 + 4 * v56) & 0xFFF));
        *(_WORD*)(a1 + 1440) = v55 | (1 << *(_BYTE*)(v88 + 104));
        *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v88 + 250)) | v54;
        *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v88 + 115)) | v53;
        *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v88 + 24) + 1064LL) | v52;
      }
    }
    game_Unit_Unknown6cd8f0(a1);
  }
  v89 = *(_QWORD*)(a1 + 1776);
  v90 = *(_QWORD*)(a1 + 1784) - v89;
  if ((int)(v90 >> 2) >= 1) {
    v91 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v90 & 0x1FFFFFFFCLL) == 4) {
      v92 = 0;
      v70 = 0;
    }
    else {
      v96 = (_DWORD*)(v89 + 4);
      v92 = 0;
      v70 = 0;
      do {
        v97 = *(_QWORD*)(v91 + 8LL * (*(v96 - 1) & 0xFFF));
        v98 = *(_BYTE**)(v97 + 864);
        if (v98 != nullptr && *v98 != 0) {
          ++v70;
        }
        else {
          v99 = *(_BYTE**)(v97 + 872);
          if (v99 != nullptr && *v99 != 0) {
            ++v70;
          }
        }
        v100 = *(_QWORD*)(v91 + 8LL * (*v96 & 0xFFF));
        v101 = *(_BYTE**)(v100 + 864);
        if (v101 != nullptr && *v101 != 0) {
          ++v70;
        }
        else {
          v102 = *(_BYTE**)(v100 + 872);
          if (v102 != nullptr && *v102 != 0) {
            ++v70;
          }
        }
        v92 += 2;
        v96 += 2;
      } while (((v90 >> 2) & 0x7FFFFFFE) != v92);
    }
    if ((v90 & 4) == 0) {
      goto LABEL_114;
    }
    v71 = *(_QWORD*)(v91 + 8LL * (*(_DWORD*)(v89 + 4 * v92) & 0xFFF));
    v93 = *(_BYTE**)(v71 + 864);
    if (v93 == nullptr || *v93 == 0) {
    LABEL_111:
      v94 = *(_BYTE**)(v71 + 872);
      if (v94 != nullptr && *v94 != 0) {
        ++v70;
      }
      goto LABEL_114;
    }
    goto LABEL_109;
  }
LABEL_110:
  v70 = 0;
LABEL_114:
  if (v70 != v9) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v18 & 1;
}

__int64 Unit_6cd9c0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _BYTE* v9;
  _DWORD* v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  _BYTE* v17;
  char v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  _BYTE* v25;
  _DWORD* v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  _BYTE* v33;

  v1 = *(_QWORD*)(a1 + 1776);
  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(a1 + 1784) - v1;
  if ((int)(v4 >> 2) < 1) {
    v7 = 0;
  }
  else {
    v5 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v4 & 0x1FFFFFFFCLL) == 4) {
      v6 = 0;
      v7 = 0;
    }
    else {
      v10 = (_DWORD*)(v1 + 4);
      v6 = 0;
      v7 = 0;
      do {
        v11 = *(_QWORD*)(v5 + 8LL * (*(v10 - 1) & 0xFFF));
        v12 = *(_BYTE**)(v11 + 864);
        if (v12 != nullptr && *v12 != 0) {
          ++v7;
        }
        else {
          v13 = *(_BYTE**)(v11 + 872);
          if (v13 != nullptr && *v13 != 0) {
            ++v7;
          }
        }
        v14 = *(_QWORD*)(v5 + 8LL * (*v10 & 0xFFF));
        v15 = *(_BYTE**)(v14 + 864);
        if (v15 != nullptr && *v15 != 0) {
          ++v7;
        }
        else {
          v16 = *(_BYTE**)(v14 + 872);
          if (v16 != nullptr && *v16 != 0) {
            ++v7;
          }
        }
        v6 += 2;
        v10 += 2;
      } while (((v4 >> 2) & 0x7FFFFFFE) != v6);
    }
    if ((v4 & 4) != 0) {
      v8 = *(_QWORD*)(v5 + 8LL * (*(_DWORD*)(v1 + 4 * v6) & 0xFFF));
      v9 = *(_BYTE**)(v8 + 864);
      if (v9 != nullptr && *v9 != 0) {
        ++v7;
      }
      else {
        v17 = *(_BYTE**)(v8 + 872);
        if (v17 != nullptr && *v17 != 0) {
          ++v7;
        }
      }
    }
  }
  v18 = game_UnitSkillList_Remove(a1 + 1360);
  if ((v18 & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v19 = *(_QWORD*)(a1 + 1776);
  v20 = *(_QWORD*)(a1 + 1784) - v19;
  if ((int)(v20 >> 2) < 1) {
    v23 = 0;
  }
  else {
    v21 = *(_QWORD*)(*v3 + 64);
    if ((v20 & 0x1FFFFFFFCLL) == 4) {
      v22 = 0;
      v23 = 0;
    }
    else {
      v26 = (_DWORD*)(v19 + 4);
      v22 = 0;
      v23 = 0;
      do {
        v27 = *(_QWORD*)(v21 + 8LL * (*(v26 - 1) & 0xFFF));
        v28 = *(_BYTE**)(v27 + 864);
        if (v28 != nullptr && *v28 != 0) {
          ++v23;
        }
        else {
          v29 = *(_BYTE**)(v27 + 872);
          if (v29 != nullptr && *v29 != 0) {
            ++v23;
          }
        }
        v30 = *(_QWORD*)(v21 + 8LL * (*v26 & 0xFFF));
        v31 = *(_BYTE**)(v30 + 864);
        if (v31 != nullptr && *v31 != 0) {
          ++v23;
        }
        else {
          v32 = *(_BYTE**)(v30 + 872);
          if (v32 != nullptr && *v32 != 0) {
            ++v23;
          }
        }
        v22 += 2;
        v26 += 2;
      } while (((v20 >> 2) & 0x7FFFFFFE) != v22);
    }
    if ((v20 & 4) != 0) {
      v24 = *(_QWORD*)(v21 + 8LL * (*(_DWORD*)(v19 + 4 * v22) & 0xFFF));
      v25 = *(_BYTE**)(v24 + 864);
      if (v25 != nullptr && *v25 != 0) {
        ++v23;
      }
      else {
        v33 = *(_BYTE**)(v24 + 872);
        if (v33 != nullptr && *v33 != 0) {
          ++v23;
        }
      }
    }
  }
  if (v23 != v7) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v18 & 1;
}

void Unit_6cdd40(__int64 a1, char a2)
{
  int v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v20_;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;

  game_Unit_Unknown6cd010_alt1(a1);
  v4 = *(__int16*)(a1 + 492);
  v20_.v22 = 0;
  v20_.v20 = 0;
  v5 = v23_.v23;
  LOBYTE(v23_.v23[0]) = 0;
  v6 = game_Unit_GetParam_alt1(a1);
  v20_.v21 = 0;
  v23_.v23[2] = a1;
  v23_.v24 = v23_.v23;
  v23_.v23[0] = GameData_1f914e8;
  v23_.v23[1] = &v20_.v20;
  if ((*(_BYTE*)(a1 + 1152) & 2) == 0) {
    goto LABEL_12;
  }
  v7 = *(_QWORD*)(a1 + 1112);
  v8 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v7 - v8) >> 2) < 1) {
    v5 = v23_.v23;
  LABEL_12:
    v13 = 32;
    goto LABEL_13;
  }
  v9 = 0;
  v10 = 0;
  v11 = GameData_212c880[0];
  v12 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                             8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                  104LL) == 1) {
      if (v23_.v24 == nullptr) {
        GameRoutine_60a310_alt2();
      }
      (*(void (**)(_QWORD*, __int64))(*v23_.v24 + 48LL))(v23_.v24, v8 + v9);
      v12 = *v11;
      v7 = *(_QWORD*)(a1 + 1112);
      v8 = *(_QWORD*)(a1 + 1104);
    }
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(v7 - v8) >> 2));
  v5 = v23_.v24;
  if (v23_.v24 == v23_.v23) {
    goto LABEL_12;
  }
  if (v23_.v24 != nullptr) {
    v13 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*))(*v5 + v13))(v5);
  }
  if ((Unit_6ce1c0_alt1(&v20_.v20, a1, a1 + 1264, 5, a2 & 1) & 1) != 0) {
    v14 = *(_DWORD*)(a1 + 416);
    if ((v14 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v14 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  LOBYTE(v23_.v23[0]) = 0;
  v15 = game_Unit_GetParam_alt1(a1);
  if (v15 != v6) {
    v16 = v15 - v6 + v4;
    if (*(_WORD*)(a1 + 494) != 0 && v16 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v15 >= v16) {
      v17 = v15 - v6 + v4;
    }
    else {
      v17 = v15;
    }
    if (v16 < 1) {
      v18 = 1;
    }
    else {
      v18 = v17;
    }
    if (v18 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v18;
    }
  }
  if (v20_.v20 != 0) {
    v20_.v21 = v20_.v20;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v20_.v20);
  }
}

void Unit_6cdf80(__int64 a1, char a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;
  int v7;
  __int64* v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
  } v20_;
  struct {
    __int64 v23[4];
    __int64* v24;
  } v23_;

  v3 = *(_QWORD*)(a1 + 1200);
  if ((int)((unsigned __int64)(*(_QWORD*)(a1 + 1208) - v3) >> 2) >= 1) {
    v6 = *(_QWORD*)(a1 + 1168);
    *(_QWORD*)(a1 + 1208) = v3;
    v7 = *(_DWORD*)(a1 + 416);
    *(_DWORD*)(a1 + 1192) = 0;
    *(_QWORD*)(a1 + 1248) = 0;
    *(_QWORD*)(a1 + 1256) = 0;
    *(_QWORD*)(a1 + 1176) = v6;
    if ((v7 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v7 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  v8 = v23_.v23;
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v20 = 0;
  v23_.v23[2] = a1;
  v23_.v23[0] = (__int64)GameData_1f914e8;
  v23_.v23[1] = (__int64)&v20_.v20;
  v9 = *(_BYTE*)(a1 + 1152);
  v23_.v24 = v23_.v23;
  if ((v9 & 4) == 0) {
    goto LABEL_15;
  }
  v10 = *(_QWORD*)(a1 + 1112);
  v11 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v10 - v11) >> 2) < 1) {
    v8 = v23_.v23;
  LABEL_15:
    v16 = 32;
    goto LABEL_16;
  }
  v12 = 0;
  v13 = 0;
  v14 = GameData_212c880[0];
  v15 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                             8LL * (*(_DWORD*)(v11 + v12) & 0xFFF)) +
                  104LL) == 2) {
      if (v23_.v24 == nullptr) {
        GameRoutine_60a310_alt2();
      }
      (*(void (**)(__int64*, __int64))(*v23_.v24 + 48))(v23_.v24, v11 + v12);
      v15 = *v14;
      v10 = *(_QWORD*)(a1 + 1112);
      v11 = *(_QWORD*)(a1 + 1104);
    }
    ++v13;
    v12 += 4;
  } while (v13 < (int)((unsigned __int64)(v10 - v11) >> 2));
  v8 = v23_.v24;
  if (v23_.v24 == v23_.v23) {
    goto LABEL_15;
  }
  if (v23_.v24 != nullptr) {
    v16 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v8 + v16))((__int64)v8);
  }
  v23_.v23[0] = 32;
  v17 = game_UnitSkillList_GetMaxValue_alt1((_QWORD*)(a1 + 1744), v23_.v23, a3);
  if ((Unit_6ce1c0_alt1(&v20_.v20, a1, a1 + 1168, v17 + 3, a2 & 1) & 1) != 0) {
    v18 = *(_DWORD*)(a1 + 416);
    if ((v18 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v18 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  if (v20_.v20 != 0) {
    v20_.v21 = v20_.v20;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v20_.v20);
  }
}

__int64 Unit_6ce1c0(__int64* a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  __int64 v21;
  int* v22;
  _DWORD* v23;
  _DWORD* v24;
  char v25;
  __int64* v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  _DWORD* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  __int64 v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  __int64 v54;
  int v55;
  int v56;
  __int64 v57;
  int* v58;
  int v59;
  __int64 v60;
  __int64 v61;
  int* v62;
  __int64 v64;

  if ((a5 & 1) != 0) {
    v8 = a1[1] - *a1;
    v9 = v8 >> 2;
    if ((int)(v8 >> 2) >= 1) {
      v10 = (v8 >> 2) & 0x7FFFFFFF;
      v11 = 0;
      v12 = game_map_MapRandom_instance__ptr[0];
      do {
        nn_os_LockMutex(&game_g_random_mutex);
        v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12);
        v14 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4);
        v15 = *(_DWORD*)v12 ^ (*(_DWORD*)v12 << 11);
        *(_DWORD*)v12 = *((_DWORD*)v12 + 1);
        *((_DWORD*)v12 + 1) = v13;
        v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) = v14;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4) = v16;
        v17 = v16 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1(&game_g_random_mutex);
        v18 = *a1;
        v19 = *(_DWORD*)(*a1 + 4 * v11);
        *(_DWORD*)(v18 + 4 * v11++) =
            *(_DWORD*)(*a1 + 4LL * (v17 % (unsigned int)v9));
        *(_DWORD*)(v18 + 4LL * (v17 % (unsigned int)v9)) = v19;
      } while (v10 != v11);
    }
  }
  else {
    v21 = *a1;
    v22 = (int*)a1[1];
    v64 = a2;
    if ((int*)v21 != v22) {
      GameRoutine_6e3e40(v21, v22, &v64,
                         (2 * __clz(((__int64)v22 - v21) >> 2)) ^ 0x7E, 1);
    }
  }
  v23 = (_DWORD*)*a1;
  v24 = (_DWORD*)a1[1];
  if ((_DWORD*)*a1 != v24) {
    v25 = 0;
    v26 = GameData_212c880[0];
    while (1) {
      if (a4 <= (int)((*(_QWORD*)(a3 + 40) - *(_QWORD*)(a3 + 32)) >> 2)) {
        goto LABEL_11;
      }
      v27 = UnitSkillList_84cc00_alt1((__int64*)a3, v23, 1);
      if ((v27 & 1) != 0) {
        v29 = *(_QWORD*)(a3 + 32);
        v28 = *(_QWORD*)(a3 + 40);
        *(_QWORD*)(a3 + 80) = 0;
        *(_QWORD*)(a3 + 88) = 0;
        v30 = v28 - v29;
        if ((int)((unsigned __int64)(v28 - v29) >> 2) >= 1) {
          v31 = *v26;
          v32 = (int)(v30 >> 2);
          if (v32 <= 1) {
            v33 = 1;
          }
          else {
            v33 = (int)(v30 >> 2);
          }
          if (v32 >= 4) {
            v40 = (_DWORD*)(v29 + 8);
            v41 = 0;
            v34 = 0;
            v35 = 0;
            v36 = 0;
            v37 = 0;
            do {
              v41 -= 4;
              v42 =
                  *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v40 - 2) & 0xFFF));
              v43 = v37 | (1 << *(_BYTE*)(v42 + 104));
              *(_WORD*)(a3 + 80) = v43;
              v44 = (1LL << *(_BYTE*)(v42 + 250)) | v36;
              *(_QWORD*)(a3 + 88) = v44;
              v45 = (1 << *(_BYTE*)(v42 + 115)) | v35;
              *(_DWORD*)(a3 + 84) = v45;
              v46 = *(unsigned __int16*)(*(_QWORD*)(v42 + 24) + 1064LL) | v34;
              *(_WORD*)(a3 + 82) = v46;
              v47 =
                  *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*(v40 - 1) & 0xFFF));
              v48 = v43 | (1 << *(_BYTE*)(v47 + 104));
              *(_WORD*)(a3 + 80) = v48;
              v49 = (1LL << *(_BYTE*)(v47 + 250)) | v44;
              *(_QWORD*)(a3 + 88) = v49;
              v50 = (1 << *(_BYTE*)(v47 + 115)) | v45;
              *(_DWORD*)(a3 + 84) = v50;
              v51 = *(unsigned __int16*)(*(_QWORD*)(v47 + 24) + 1064LL) | v46;
              *(_WORD*)(a3 + 82) = v51;
              v52 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (*v40 & 0xFFF));
              v53 = v48 | (1 << *(_BYTE*)(v52 + 104));
              *(_WORD*)(a3 + 80) = v53;
              v54 = (1LL << *(_BYTE*)(v52 + 250)) | v49;
              *(_QWORD*)(a3 + 88) = v54;
              v55 = (1 << *(_BYTE*)(v52 + 115)) | v50;
              *(_DWORD*)(a3 + 84) = v55;
              v56 = *(unsigned __int16*)(*(_QWORD*)(v52 + 24) + 1064LL) | v51;
              *(_WORD*)(a3 + 82) = v56;
              LOWORD(v52) = v40[1];
              v40 += 4;
              v57 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8 * (v52 & 0xFFF));
              v37 = v53 | (1 << *(_BYTE*)(v57 + 104));
              *(_WORD*)(a3 + 80) = v37;
              v36 = (1LL << *(_BYTE*)(v57 + 250)) | v54;
              *(_QWORD*)(a3 + 88) = v36;
              v35 = (1 << *(_BYTE*)(v57 + 115)) | v55;
              *(_DWORD*)(a3 + 84) = v35;
              v34 = *(unsigned __int16*)(*(_QWORD*)(v57 + 24) + 1064LL) | v56;
              *(_WORD*)(a3 + 82) = v34;
            } while (-(__int64)(v33 & 0xFFFFFFFFFFFFFFFCLL) != v41);
            v38 = -v41;
            v39 = v33 & 3;
            if (v39 == 0) {
              goto LABEL_10;
            }
          LABEL_24:
            v58 = (int*)(v29 + 4 * v38);
            do {
              v59 = *v58++;
              --v39;
              v60 = *(_QWORD*)(*(_QWORD*)(v31 + 64) + 8LL * (v59 & 0xFFF));
              v37 |= 1 << *(_BYTE*)(v60 + 104);
              *(_WORD*)(a3 + 80) = v37;
              v36 |= 1LL << *(_BYTE*)(v60 + 250);
              *(_QWORD*)(a3 + 88) = v36;
              v35 |= 1 << *(_BYTE*)(v60 + 115);
              *(_DWORD*)(a3 + 84) = v35;
              v34 |= *(unsigned __int16*)(*(_QWORD*)(v60 + 24) + 1064LL);
              *(_WORD*)(a3 + 82) = v34;
            } while (v39 != 0);
            goto LABEL_10;
          }
          v34 = 0;
          v35 = 0;
          v36 = 0;
          v37 = 0;
          v38 = 0;
          v39 = v33 & 3;
          if (v39 != 0) {
            goto LABEL_24;
          }
        }
      }
    LABEL_10:
      v25 |= v27;
    LABEL_11:
      if (++v23 == v24) {
        goto LABEL_28;
      }
    }
  }
  v25 = 0;
LABEL_28:
  v61 = *(_QWORD*)(a3 + 32);
  v62 = *(int**)(a3 + 40);
  if ((int*)v61 != v62) {
    GameRoutine_8517e0(v61, v62, (2 * __clz(((__int64)v62 - v61) >> 2)) ^ 0x7E,
                       1);
  }
  return v25 & 1;
}

__int64 Unit_6ce660(__int64 a1)
{
  char* v1;
  char* v2;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  int v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int* v48;
  int v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  int v54;
  char* v56;
  char* v57;
  unsigned __int64 v58;
  int v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  char v69;
  char* v70;
  char* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  _DWORD* v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  int v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  int v98;
  __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  int* v103;
  int v104;
  __int64 v105;
  char v106;
  __int64 v107;
  int v108;
  int v110;
  __int64 v111;

  v1 = *(char**)(a1 + 1304);
  v2 = *(char**)(a1 + 1296);
  v3 = a1;
  if ((int)((unsigned __int64)(v1 - v2) >> 2) < 6 || v2 == v1) {
    v15 = 0;
  }
  else {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    do {
      if (v7 <= 4) {
        ++v7;
      }
      else if ((unsigned __int64)v5 >= v6) {
        v8 = (char*)(v5 - v4);
        v9 = (v5 - v4) >> 2;
        v10 = v9 + 1;
        if ((unsigned __int64)(v9 + 1) >> 62 != 0) {
        LABEL_102:
          GameRoutine_6e3e20();
        }
        if ((__int64)(v6 - (_QWORD)v4) >> 1 > v10) {
          v10 = (__int64)(v6 - (_QWORD)v4) >> 1;
        }
        if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFFCLL) {
          v11 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v11 = v10;
        }
        if (v11 != 0) {
          if (v11 >> 62 != 0) {
          LABEL_103:
            GameRoutine_60a210(a1);
          }
          v12 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
        }
        else {
          v12 = 0;
        }
        v6 = v12 + 4 * v11;
        v13 = (__int64)&v8[v12 + -4 * v9];
        *(_DWORD*)&v8[v12] = *(_DWORD*)v2;
        v5 = &v8[v12 + 4];
        a1 = memcpy(v13, v4, v8);
        if (v4 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          a1 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v4);
        }
        v4 = (char*)v13;
      }
      else {
        *(_DWORD*)v5 = *(_DWORD*)v2;
        v5 += 4;
      }
      v2 += 4;
    } while (v2 != v1);
    if (v5 != v4) {
      v15 = 0;
      v16 = v4;
      v17 = GameData_212c880[0];
      while (1) {
        if ((UnitSkillList_84d980(v3 + 1264, v16) & 1) != 0) {
          v18 = *(_QWORD*)(v3 + 1304);
          v19 = *(_QWORD*)(v3 + 1296);
          *(_QWORD*)(v3 + 1344) = 0;
          *(_QWORD*)(v3 + 1352) = 0;
          v20 = v18 - v19;
          if ((int)((unsigned __int64)(v18 - v19) >> 2) >= 1) {
            v21 = *v17;
            v22 = (int)(v20 >> 2);
            if (v22 <= 1) {
              v23 = 1;
            }
            else {
              v23 = (int)(v20 >> 2);
            }
            if (v22 >= 4) {
              v30 = (_DWORD*)(v19 + 8);
              v31 = 0;
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              do {
                v31 -= 4;
                v32 = *(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                 8LL * (*(v30 - 2) & 0xFFF));
                v33 = v27 | (1 << *(_BYTE*)(v32 + 104));
                *(_WORD*)(v3 + 1344) = v33;
                v34 = (1LL << *(_BYTE*)(v32 + 250)) | v26;
                *(_QWORD*)(v3 + 1352) = v34;
                v35 = (1 << *(_BYTE*)(v32 + 115)) | v25;
                *(_DWORD*)(v3 + 1348) = v35;
                v36 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v24;
                *(_WORD*)(v3 + 1346) = v36;
                v37 = *(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                 8LL * (*(v30 - 1) & 0xFFF));
                v38 = v33 | (1 << *(_BYTE*)(v37 + 104));
                *(_WORD*)(v3 + 1344) = v38;
                v39 = (1LL << *(_BYTE*)(v37 + 250)) | v34;
                *(_QWORD*)(v3 + 1352) = v39;
                v40 = (1 << *(_BYTE*)(v37 + 115)) | v35;
                *(_DWORD*)(v3 + 1348) = v40;
                v41 = *(unsigned __int16*)(*(_QWORD*)(v37 + 24) + 1064LL) | v36;
                *(_WORD*)(v3 + 1346) = v41;
                v42 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (*v30 & 0xFFF));
                v43 = v38 | (1 << *(_BYTE*)(v42 + 104));
                *(_WORD*)(v3 + 1344) = v43;
                v44 = (1LL << *(_BYTE*)(v42 + 250)) | v39;
                *(_QWORD*)(v3 + 1352) = v44;
                v45 = (1 << *(_BYTE*)(v42 + 115)) | v40;
                *(_DWORD*)(v3 + 1348) = v45;
                v46 = *(unsigned __int16*)(*(_QWORD*)(v42 + 24) + 1064LL) | v41;
                *(_WORD*)(v3 + 1346) = v46;
                LOWORD(v42) = v30[1];
                v30 += 4;
                v47 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8 * (v42 & 0xFFF));
                v27 = v43 | (1 << *(_BYTE*)(v47 + 104));
                *(_WORD*)(v3 + 1344) = v27;
                v26 = (1LL << *(_BYTE*)(v47 + 250)) | v44;
                *(_QWORD*)(v3 + 1352) = v26;
                v25 = (1 << *(_BYTE*)(v47 + 115)) | v45;
                *(_DWORD*)(v3 + 1348) = v25;
                v24 = *(unsigned __int16*)(*(_QWORD*)(v47 + 24) + 1064LL) | v46;
                *(_WORD*)(v3 + 1346) = v24;
              } while (-(__int64)(v23 & 0xFFFFFFFFFFFFFFFCLL) != v31);
              v28 = -v31;
              v29 = v23 & 3;
              if (v29 != 0) {
              LABEL_40:
                v48 = (int*)(v19 + 4 * v28);
                do {
                  v49 = *v48++;
                  v15 = 1;
                  --v29;
                  v50 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (v49 & 0xFFF));
                  v27 |= 1 << *(_BYTE*)(v50 + 104);
                  *(_WORD*)(v3 + 1344) = v27;
                  v26 |= 1LL << *(_BYTE*)(v50 + 250);
                  *(_QWORD*)(v3 + 1352) = v26;
                  v25 |= 1 << *(_BYTE*)(v50 + 115);
                  *(_DWORD*)(v3 + 1348) = v25;
                  v24 |= *(unsigned __int16*)(*(_QWORD*)(v50 + 24) + 1064LL);
                  *(_WORD*)(v3 + 1346) = v24;
                } while (v29 != 0);
                goto LABEL_28;
              }
            }
            else {
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              v28 = 0;
              v29 = v23 & 3;
              if (v29 != 0) {
                goto LABEL_40;
              }
            }
          }
          v15 = 1;
        }
      LABEL_28:
        v16 += 4;
        if (v16 == v5) {
          goto LABEL_44;
        }
      }
    }
    v15 = 0;
  LABEL_44:
    if (v4 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v4);
    }
  }
  v111 = 32;
  a1 = game_UnitSkillList_GetMaxValue(v3 + 1744, &v111);
  v52 = *(char**)(v3 + 1208);
  v53 = *(char**)(v3 + 1200);
  v54 = a1 + 3;
  if ((int)a1 + 3 >= (int)((unsigned __int64)(v52 - v53) >> 2) || v53 == v52) {
    if ((v15 & 1) == 0) {
      return 1;
    }
    goto LABEL_99;
  }
  v56 = nullptr;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  v110 = a1 + 3;
  do {
    if (v59 < v54) {
      ++v59;
    }
    else if ((unsigned __int64)v57 >= v58) {
      v60 = (char*)(v57 - v56);
      v61 = (v57 - v56) >> 2;
      v62 = v61 + 1;
      if ((unsigned __int64)(v61 + 1) >> 62 != 0) {
        goto LABEL_102;
      }
      if ((__int64)(v58 - (_QWORD)v56) >> 1 > v62) {
        v62 = (__int64)(v58 - (_QWORD)v56) >> 1;
      }
      if (v58 - (unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFFCLL) {
        v63 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v63 = v62;
      }
      if (v63 != 0) {
        if (v63 >> 62 != 0) {
          goto LABEL_103;
        }
        v64 = v56;
        v65 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v63, 16, 0);
        v56 = v64;
      }
      else {
        v65 = 0;
      }
      v58 = v65 + 4 * v63;
      v66 = v56;
      v67 = (__int64)&v60[v65 + -4 * v61];
      *(_DWORD*)&v60[v65] = *(_DWORD*)v53;
      v57 = &v60[v65 + 4];
      a1 = memcpy(v67, v56, v60);
      if (v66 != nullptr) {
        v68 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v68 = 56;
        }
        a1 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v66);
      }
      v54 = v110;
      v56 = (char*)v67;
    }
    else {
      *(_DWORD*)v57 = *(_DWORD*)v53;
      v57 += 4;
    }
    v53 += 4;
  } while (v53 != v52);
  if (v57 != v56) {
    v69 = 0;
    v70 = v56;
    v71 = v56;
    v72 = GameData_212c880[0];
    while (1) {
      if ((UnitSkillList_84d980(v3 + 1168, v71) & 1) != 0) {
        v73 = *(_QWORD*)(v3 + 1208);
        v74 = *(_QWORD*)(v3 + 1200);
        *(_QWORD*)(v3 + 1248) = 0;
        *(_QWORD*)(v3 + 1256) = 0;
        v75 = v73 - v74;
        if ((int)((unsigned __int64)(v73 - v74) >> 2) >= 1) {
          v76 = *v72;
          v77 = (int)(v75 >> 2);
          if (v77 <= 1) {
            v78 = 1;
          }
          else {
            v78 = (int)(v75 >> 2);
          }
          if (v77 >= 4) {
            v85 = (_DWORD*)(v74 + 8);
            v86 = 0;
            v79 = 0;
            v80 = 0;
            v81 = 0;
            v82 = 0;
            do {
              v86 -= 4;
              v87 =
                  *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*(v85 - 2) & 0xFFF));
              v88 = v82 | (1 << *(_BYTE*)(v87 + 104));
              *(_WORD*)(v3 + 1248) = v88;
              v89 = (1LL << *(_BYTE*)(v87 + 250)) | v81;
              *(_QWORD*)(v3 + 1256) = v89;
              v90 = (1 << *(_BYTE*)(v87 + 115)) | v80;
              *(_DWORD*)(v3 + 1252) = v90;
              v91 = *(unsigned __int16*)(*(_QWORD*)(v87 + 24) + 1064LL) | v79;
              *(_WORD*)(v3 + 1250) = v91;
              v92 =
                  *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*(v85 - 1) & 0xFFF));
              v93 = v88 | (1 << *(_BYTE*)(v92 + 104));
              *(_WORD*)(v3 + 1248) = v93;
              v94 = (1LL << *(_BYTE*)(v92 + 250)) | v89;
              *(_QWORD*)(v3 + 1256) = v94;
              v95 = (1 << *(_BYTE*)(v92 + 115)) | v90;
              *(_DWORD*)(v3 + 1252) = v95;
              v96 = *(unsigned __int16*)(*(_QWORD*)(v92 + 24) + 1064LL) | v91;
              *(_WORD*)(v3 + 1250) = v96;
              v97 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*v85 & 0xFFF));
              v98 = v93 | (1 << *(_BYTE*)(v97 + 104));
              *(_WORD*)(v3 + 1248) = v98;
              v99 = (1LL << *(_BYTE*)(v97 + 250)) | v94;
              *(_QWORD*)(v3 + 1256) = v99;
              v100 = (1 << *(_BYTE*)(v97 + 115)) | v95;
              *(_DWORD*)(v3 + 1252) = v100;
              v101 = *(unsigned __int16*)(*(_QWORD*)(v97 + 24) + 1064LL) | v96;
              *(_WORD*)(v3 + 1250) = v101;
              LOWORD(v97) = v85[1];
              v85 += 4;
              v102 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8 * (v97 & 0xFFF));
              v82 = v98 | (1 << *(_BYTE*)(v102 + 104));
              *(_WORD*)(v3 + 1248) = v82;
              v81 = (1LL << *(_BYTE*)(v102 + 250)) | v99;
              *(_QWORD*)(v3 + 1256) = v81;
              v80 = (1 << *(_BYTE*)(v102 + 115)) | v100;
              *(_DWORD*)(v3 + 1252) = v80;
              v79 = *(unsigned __int16*)(*(_QWORD*)(v102 + 24) + 1064LL) | v101;
              *(_WORD*)(v3 + 1250) = v79;
            } while (-(__int64)(v78 & 0xFFFFFFFFFFFFFFFCLL) != v86);
            v83 = -v86;
            v84 = v78 & 3;
            if (v84 != 0) {
            LABEL_90:
              v103 = (int*)(v74 + 4 * v83);
              do {
                v104 = *v103++;
                v69 = 1;
                --v84;
                v105 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (v104 & 0xFFF));
                v82 |= 1 << *(_BYTE*)(v105 + 104);
                *(_WORD*)(v3 + 1248) = v82;
                v81 |= 1LL << *(_BYTE*)(v105 + 250);
                *(_QWORD*)(v3 + 1256) = v81;
                v80 |= 1 << *(_BYTE*)(v105 + 115);
                *(_DWORD*)(v3 + 1252) = v80;
                v79 |= *(unsigned __int16*)(*(_QWORD*)(v105 + 24) + 1064LL);
                *(_WORD*)(v3 + 1250) = v79;
              } while (v84 != 0);
              goto LABEL_78;
            }
          }
          else {
            v79 = 0;
            v80 = 0;
            v81 = 0;
            v82 = 0;
            v83 = 0;
            v84 = v78 & 3;
            if (v84 != 0) {
              goto LABEL_90;
            }
          }
        }
        v69 = 1;
      }
    LABEL_78:
      v71 += 4;
      if (v71 == v57) {
        goto LABEL_94;
      }
    }
  }
  v70 = v56;
  v69 = 0;
LABEL_94:
  v106 = v15 | v69;
  if (v70 != nullptr) {
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v107 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v107,
                                  v70);
  }
  if ((v106 & 1) != 0) {
  LABEL_99:
    v108 = *(_DWORD*)(v3 + 416);
    if ((v108 & 0x10000000) == 0) {
      *(_DWORD*)(v3 + 416) = v108 | 0x10000000;
      GameRoutine_6c51e0(v3);
      GameRoutine_6c6da0(v3);
      GameRoutine_6c6ec0(v3);
      *(_DWORD*)(v3 + 416) &= ~0x10000000u;
    }
  }
  return 1;
}

__int64 Unit_6cef00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _BYTE* v11;
  _DWORD* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  char v20;
  char v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  _BYTE* v28;
  _DWORD* v29;
  __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  _BYTE* v36;

  v2 = *(_QWORD*)(a1 + 1776);
  v5 = GameData_212c880[0];
  v6 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v6 >> 2) < 1) {
    v9 = 0;
  }
  else {
    v7 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v6 & 0x1FFFFFFFCLL) == 4) {
      v8 = 0;
      v9 = 0;
    }
    else {
      v12 = (_DWORD*)(v2 + 4);
      v8 = 0;
      v9 = 0;
      do {
        v13 = *(_QWORD*)(v7 + 8LL * (*(v12 - 1) & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v9;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v9;
          }
        }
        v16 = *(_QWORD*)(v7 + 8LL * (*v12 & 0xFFF));
        v17 = *(_BYTE**)(v16 + 864);
        if (v17 != nullptr && *v17 != 0) {
          ++v9;
        }
        else {
          v18 = *(_BYTE**)(v16 + 872);
          if (v18 != nullptr && *v18 != 0) {
            ++v9;
          }
        }
        v8 += 2;
        v12 += 2;
      } while (((v6 >> 2) & 0x7FFFFFFE) != v8);
    }
    if ((v6 & 4) != 0) {
      v10 = *(_QWORD*)(v7 + 8LL * (*(_DWORD*)(v2 + 4 * v8) & 0xFFF));
      v11 = *(_BYTE**)(v10 + 864);
      if (v11 != nullptr && *v11 != 0) {
        ++v9;
      }
      else {
        v19 = *(_BYTE**)(v10 + 872);
        if (v19 != nullptr && *v19 != 0) {
          ++v9;
        }
      }
    }
  }
  v20 = GameRoutine_850ce0(a1 + 1360, a2);
  v21 = v20 | GameRoutine_850ce0(a1 + 1456, a2);
  if ((v21 & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v22 = *(_QWORD*)(a1 + 1776);
  v23 = *(_QWORD*)(a1 + 1784) - v22;
  if ((int)(v23 >> 2) < 1) {
    v26 = 0;
  }
  else {
    v24 = *(_QWORD*)(*v5 + 64);
    if ((v23 & 0x1FFFFFFFCLL) == 4) {
      v25 = 0;
      v26 = 0;
    }
    else {
      v29 = (_DWORD*)(v22 + 4);
      v25 = 0;
      v26 = 0;
      do {
        v30 = *(_QWORD*)(v24 + 8LL * (*(v29 - 1) & 0xFFF));
        v31 = *(_BYTE**)(v30 + 864);
        if (v31 != nullptr && *v31 != 0) {
          ++v26;
        }
        else {
          v32 = *(_BYTE**)(v30 + 872);
          if (v32 != nullptr && *v32 != 0) {
            ++v26;
          }
        }
        v33 = *(_QWORD*)(v24 + 8LL * (*v29 & 0xFFF));
        v34 = *(_BYTE**)(v33 + 864);
        if (v34 != nullptr && *v34 != 0) {
          ++v26;
        }
        else {
          v35 = *(_BYTE**)(v33 + 872);
          if (v35 != nullptr && *v35 != 0) {
            ++v26;
          }
        }
        v25 += 2;
        v29 += 2;
      } while (((v23 >> 2) & 0x7FFFFFFE) != v25);
    }
    if ((v23 & 4) != 0) {
      v27 = *(_QWORD*)(v24 + 8LL * (*(_DWORD*)(v22 + 4 * v25) & 0xFFF));
      v28 = *(_BYTE**)(v27 + 864);
      if (v28 != nullptr && *v28 != 0) {
        ++v26;
      }
      else {
        v36 = *(_BYTE**)(v27 + 872);
        if (v36 != nullptr && *v36 != 0) {
          ++v26;
        }
      }
    }
  }
  if (v26 != v9) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v21 & 1;
}

__int64 Unit_6cf1c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _BYTE* v10;
  _DWORD* v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  char v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  _BYTE* v26;
  _DWORD* v27;
  __int64 v28;
  _BYTE* v29;
  _BYTE* v30;
  __int64 v31;
  _BYTE* v32;
  _BYTE* v33;
  _BYTE* v34;

  v2 = *(_QWORD*)(a1 + 1776);
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v5 >> 2) < 1) {
    v8 = 0;
  }
  else {
    v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v5 & 0x1FFFFFFFCLL) == 4) {
      v7 = 0;
      v8 = 0;
    }
    else {
      v11 = (_DWORD*)(v2 + 4);
      v7 = 0;
      v8 = 0;
      do {
        v12 = *(_QWORD*)(v6 + 8LL * (*(v11 - 1) & 0xFFF));
        v13 = *(_BYTE**)(v12 + 864);
        if (v13 != nullptr && *v13 != 0) {
          ++v8;
        }
        else {
          v14 = *(_BYTE**)(v12 + 872);
          if (v14 != nullptr && *v14 != 0) {
            ++v8;
          }
        }
        v15 = *(_QWORD*)(v6 + 8LL * (*v11 & 0xFFF));
        v16 = *(_BYTE**)(v15 + 864);
        if (v16 != nullptr && *v16 != 0) {
          ++v8;
        }
        else {
          v17 = *(_BYTE**)(v15 + 872);
          if (v17 != nullptr && *v17 != 0) {
            ++v8;
          }
        }
        v7 += 2;
        v11 += 2;
      } while (((v5 >> 2) & 0x7FFFFFFE) != v7);
    }
    if ((v5 & 4) != 0) {
      v9 = *(_QWORD*)(v6 + 8LL * (*(_DWORD*)(v2 + 4 * v7) & 0xFFF));
      v10 = *(_BYTE**)(v9 + 864);
      if (v10 != nullptr && *v10 != 0) {
        ++v8;
      }
      else {
        v18 = *(_BYTE**)(v9 + 872);
        if (v18 != nullptr && *v18 != 0) {
          ++v8;
        }
      }
    }
  }
  v19 = GameRoutine_851060(a1 + 1360, a2);
  if ((v19 & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v20 = *(_QWORD*)(a1 + 1776);
  v21 = *(_QWORD*)(a1 + 1784) - v20;
  if ((int)(v21 >> 2) < 1) {
    v24 = 0;
  }
  else {
    v22 = *(_QWORD*)(*v4 + 64);
    if ((v21 & 0x1FFFFFFFCLL) == 4) {
      v23 = 0;
      v24 = 0;
    }
    else {
      v27 = (_DWORD*)(v20 + 4);
      v23 = 0;
      v24 = 0;
      do {
        v28 = *(_QWORD*)(v22 + 8LL * (*(v27 - 1) & 0xFFF));
        v29 = *(_BYTE**)(v28 + 864);
        if (v29 != nullptr && *v29 != 0) {
          ++v24;
        }
        else {
          v30 = *(_BYTE**)(v28 + 872);
          if (v30 != nullptr && *v30 != 0) {
            ++v24;
          }
        }
        v31 = *(_QWORD*)(v22 + 8LL * (*v27 & 0xFFF));
        v32 = *(_BYTE**)(v31 + 864);
        if (v32 != nullptr && *v32 != 0) {
          ++v24;
        }
        else {
          v33 = *(_BYTE**)(v31 + 872);
          if (v33 != nullptr && *v33 != 0) {
            ++v24;
          }
        }
        v23 += 2;
        v27 += 2;
      } while (((v21 >> 2) & 0x7FFFFFFE) != v23);
    }
    if ((v21 & 4) != 0) {
      v25 = *(_QWORD*)(v22 + 8LL * (*(_DWORD*)(v20 + 4 * v23) & 0xFFF));
      v26 = *(_BYTE**)(v25 + 864);
      if (v26 != nullptr && *v26 != 0) {
        ++v24;
      }
      else {
        v34 = *(_BYTE**)(v25 + 872);
        if (v34 != nullptr && *v34 != 0) {
          ++v24;
        }
      }
    }
  }
  if (v24 != v8) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v19 & 1;
}

__int64 Unit_6cf460(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 result;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  _BYTE* v24;
  _DWORD* v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  _BYTE* v31;
  _BYTE* v32;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2d0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ca2d0) != 0) {
    GameData_21ca2c8 = 1022;
    __cxa_guard_release(&GameData_21ca2d0);
  }
  v2 = *(_QWORD*)(a1 + 1776);
  v3 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v3 >> 2) < 1) {
    v6 = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v3 & 0x1FFFFFFFCLL) == 4) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v9 = (_DWORD*)(v2 + 4);
      v5 = 0;
      v6 = 0;
      do {
        v10 = *(_QWORD*)(v4 + 8LL * (*(v9 - 1) & 0xFFF));
        v11 = *(_BYTE**)(v10 + 864);
        if (v11 != nullptr && *v11 != 0) {
          ++v6;
        }
        else {
          v12 = *(_BYTE**)(v10 + 872);
          if (v12 != nullptr && *v12 != 0) {
            ++v6;
          }
        }
        v13 = *(_QWORD*)(v4 + 8LL * (*v9 & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v6;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v6;
          }
        }
        v5 += 2;
        v9 += 2;
      } while (((v3 >> 2) & 0x7FFFFFFE) != v5);
    }
    if ((v3 & 4) != 0) {
      v7 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v2 + 4 * v5) & 0xFFF));
      v8 = *(_BYTE**)(v7 + 864);
      if (v8 != nullptr && *v8 != 0) {
        ++v6;
      }
      else {
        v16 = *(_BYTE**)(v7 + 872);
        if (v16 != nullptr && *v16 != 0) {
          ++v6;
        }
      }
    }
  }
  result = GameRoutine_851060(a1 + 1360, &GameData_21ca2c8);
  if ((result & 1) != 0) {
    result = game_Unit_Unknown6cd8f0(a1);
  }
  v18 = *(_QWORD*)(a1 + 1776);
  v19 = *(_QWORD*)(a1 + 1784) - v18;
  if ((int)(v19 >> 2) < 1) {
    v22 = 0;
  }
  else {
    v20 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v19 & 0x1FFFFFFFCLL) == 4) {
      v21 = 0;
      v22 = 0;
    }
    else {
      v25 = (_DWORD*)(v18 + 4);
      v21 = 0;
      v22 = 0;
      do {
        v26 = *(_QWORD*)(v20 + 8LL * (*(v25 - 1) & 0xFFF));
        v27 = *(_BYTE**)(v26 + 864);
        if (v27 != nullptr && *v27 != 0) {
          ++v22;
        }
        else {
          v28 = *(_BYTE**)(v26 + 872);
          if (v28 != nullptr && *v28 != 0) {
            ++v22;
          }
        }
        v29 = *(_QWORD*)(v20 + 8LL * (*v25 & 0xFFF));
        v30 = *(_BYTE**)(v29 + 864);
        if (v30 != nullptr && *v30 != 0) {
          ++v22;
        }
        else {
          v31 = *(_BYTE**)(v29 + 872);
          if (v31 != nullptr && *v31 != 0) {
            ++v22;
          }
        }
        v21 += 2;
        v25 += 2;
      } while (((v19 >> 2) & 0x7FFFFFFE) != v21);
    }
    if ((v19 & 4) != 0) {
      v23 = *(_QWORD*)(v20 + 8LL * (*(_DWORD*)(v18 + 4 * v21) & 0xFFF));
      v24 = *(_BYTE**)(v23 + 864);
      if (v24 != nullptr && *v24 != 0) {
        ++v22;
      }
      else {
        v32 = *(_BYTE**)(v23 + 872);
        if (v32 != nullptr && *v32 != 0) {
          ++v22;
        }
      }
    }
  }
  if (v22 != v6) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return result;
}

__int64 Unit_6cf740(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 result;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  _BYTE* v24;
  _DWORD* v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  _BYTE* v31;
  _BYTE* v32;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2e0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ca2e0) != 0) {
    GameData_21ca2d8 = 2046;
    __cxa_guard_release(&GameData_21ca2e0);
  }
  v2 = *(_QWORD*)(a1 + 1776);
  v3 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v3 >> 2) < 1) {
    v6 = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v3 & 0x1FFFFFFFCLL) == 4) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v9 = (_DWORD*)(v2 + 4);
      v5 = 0;
      v6 = 0;
      do {
        v10 = *(_QWORD*)(v4 + 8LL * (*(v9 - 1) & 0xFFF));
        v11 = *(_BYTE**)(v10 + 864);
        if (v11 != nullptr && *v11 != 0) {
          ++v6;
        }
        else {
          v12 = *(_BYTE**)(v10 + 872);
          if (v12 != nullptr && *v12 != 0) {
            ++v6;
          }
        }
        v13 = *(_QWORD*)(v4 + 8LL * (*v9 & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v6;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v6;
          }
        }
        v5 += 2;
        v9 += 2;
      } while (((v3 >> 2) & 0x7FFFFFFE) != v5);
    }
    if ((v3 & 4) != 0) {
      v7 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v2 + 4 * v5) & 0xFFF));
      v8 = *(_BYTE**)(v7 + 864);
      if (v8 != nullptr && *v8 != 0) {
        ++v6;
      }
      else {
        v16 = *(_BYTE**)(v7 + 872);
        if (v16 != nullptr && *v16 != 0) {
          ++v6;
        }
      }
    }
  }
  result = GameRoutine_851060(a1 + 1360, &GameData_21ca2d8);
  if ((result & 1) != 0) {
    result = game_Unit_Unknown6cd8f0(a1);
  }
  v18 = *(_QWORD*)(a1 + 1776);
  v19 = *(_QWORD*)(a1 + 1784) - v18;
  if ((int)(v19 >> 2) < 1) {
    v22 = 0;
  }
  else {
    v20 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v19 & 0x1FFFFFFFCLL) == 4) {
      v21 = 0;
      v22 = 0;
    }
    else {
      v25 = (_DWORD*)(v18 + 4);
      v21 = 0;
      v22 = 0;
      do {
        v26 = *(_QWORD*)(v20 + 8LL * (*(v25 - 1) & 0xFFF));
        v27 = *(_BYTE**)(v26 + 864);
        if (v27 != nullptr && *v27 != 0) {
          ++v22;
        }
        else {
          v28 = *(_BYTE**)(v26 + 872);
          if (v28 != nullptr && *v28 != 0) {
            ++v22;
          }
        }
        v29 = *(_QWORD*)(v20 + 8LL * (*v25 & 0xFFF));
        v30 = *(_BYTE**)(v29 + 864);
        if (v30 != nullptr && *v30 != 0) {
          ++v22;
        }
        else {
          v31 = *(_BYTE**)(v29 + 872);
          if (v31 != nullptr && *v31 != 0) {
            ++v22;
          }
        }
        v21 += 2;
        v25 += 2;
      } while (((v19 >> 2) & 0x7FFFFFFE) != v21);
    }
    if ((v19 & 4) != 0) {
      v23 = *(_QWORD*)(v20 + 8LL * (*(_DWORD*)(v18 + 4 * v21) & 0xFFF));
      v24 = *(_BYTE**)(v23 + 864);
      if (v24 != nullptr && *v24 != 0) {
        ++v22;
      }
      else {
        v32 = *(_BYTE**)(v23 + 872);
        if (v32 != nullptr && *v32 != 0) {
          ++v22;
        }
      }
    }
  }
  if (v22 != v6) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return result;
}

__int64 Unit_6cfa20(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  int v27;
  __int64 result;
  int v42;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  __int64 v37;
  int v38;
  char v39[4];
  char v40[4];
  char v41[4];

  game_Unit_SetPollution(a1, 0);
  v2 = *(unsigned __int8*)(a1 + 500);
  if (*(_BYTE*)(a1 + 500) != 0) {
    v3 = Unit_6c9ef0_alt1(a1);
    *(_BYTE*)(a1 + 500) = v3 & (v3 >> 31);
    if (v2 != (unsigned __int8)(v3 & (v3 >> 31))) {
      v4 = *(unsigned __int16*)(a1 + 492);
      v39[0] = 0;
      v5 = game_Unit_GetParam(a1, v39, 1);
      if (*(_WORD*)(a1 + 494) != 0 && v4 != *(unsigned __int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v5 >= (__int16)v4) {
        v6 = (__int16)v4;
      }
      else {
        v6 = v5;
      }
      if ((v4 & 0x8000u) != 0) {
        v6 = 0;
      }
      if (v6 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v6;
      }
    }
  }
  Unit_6cb490_alt1(a1);
  v7 = *(unsigned int**)(a1 + 1488);
  v8 = *(unsigned int**)(a1 + 1496);
  v9 = GameData_212c880[0];
  while (v7 != v8) {
    v10 = *v7;
    if ((*v7 & 0x7F000) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (v10 & 0xFFF)) +
                  104LL) != 9) {
      *v7 = v10 & 0xFFF80FFF;
    }
    ++v7;
  }
  game_UnitItemList_ClearStockUses(a1 + 828);
  v11 = *(_DWORD*)(a1 + 1872);
  v12 = v11 & 0xFFF;
  if ((v11 & 0xFFF) == 0) {
    goto LABEL_53;
  }
  v13 = *(char**)(a1 + 608);
  v14 = *(char**)(a1 + 600);
  v15 = v13 - v14;
  if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
    v18 = 0;
    goto LABEL_48;
  }
  v16 = (v15 >> 2) & 7;
  if (((v15 >> 2) & 0x7FFFFFFF) - 1 < 7) {
    v17 = 0;
    v18 = 255;
    if (v16 == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v19 = v14 + 18;
  v20 = 0;
  v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
  v18 = 255;
  do {
    v20 -= 8;
    if (v18 >= *(v19 - 16)) {
      v18 = *(v19 - 16);
    }
    if (v18 >= *(v19 - 12)) {
      v18 = *(v19 - 12);
    }
    if (v18 >= *(v19 - 8)) {
      v18 = *(v19 - 8);
    }
    if (v18 >= *(v19 - 4)) {
      v18 = *(v19 - 4);
    }
    if (v18 >= *v19) {
      v18 = *v19;
    }
    if (v18 >= v19[4]) {
      v18 = v19[4];
    }
    if (v18 >= v19[8]) {
      v18 = v19[8];
    }
    v22 = v19[12];
    v19 += 32;
    if (v18 >= v22) {
      v18 = v22;
    }
  } while (v21 != v20);
  v17 = -v20;
  if (v16 != 0) {
  LABEL_44:
    v23 = &v14[4 * v17 + 2];
    do {
      v25 = *v23;
      v23 += 4;
      v24 = v25;
      if (v18 >= v25) {
        v18 = v24;
      }
      --v16;
    } while (v16 != 0);
  }
LABEL_48:
  v42 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v12) + 273LL);
  __asm__ volatile("" ::"r"(v42));
  if (v18 < v42 && v14 != v13) {
    do {
      if ((*(_DWORD*)(a1 + 1872) & 0xFFF) == 0) {
        goto LABEL_70;
      }
      v32 = *v14;
      v33 = v14[1];
      if ((v33 | v32) < 0 ||
          ((v34 = *(_DWORD*)(a1 + 592)) > v32 ? (v35 = v34 <= v33)
                                              : (v35 = true),
           v35)) {
        LOBYTE(v36) =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                 8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                      273LL);
        if ((_BYTE)v36 == 0) {
          goto LABEL_69;
        }
        v37 = -1;
      }
      else {
        LODWORD(v37) = v32 + v34 * v33;
        if ((v37 & 0x80000000) != 0) {
          v38 = 0;
        }
        else {
          v38 = *(char*)(*(_QWORD*)(a1 + 600) + 4LL * (unsigned int)v37 + 2);
        }
        v36 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                             8LL * (*(_DWORD*)(a1 + 1872) &
                                                    0xFFF)) +
                                  273LL);
        if (v38 >= v36) {
          goto LABEL_69;
        }
        v37 = (int)v37;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v37 + 2) = v36;
    LABEL_69:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_70:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  v40[0] = 0;
  v27 = game_Unit_GetParam(a1, v40, 1);
  v41[0] = 0;
  result = game_Unit_GetParam(a1, v41, 1);
  v29 = *(unsigned __int16*)(a1 + 494);
  if (*(_WORD*)(a1 + 494) != 0 && v27 != *(__int16*)(a1 + 494)) {
    v29 = 0;
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v27) {
    v30 = v27;
  }
  else {
    v30 = result;
  }
  if (v27 < 0) {
    v30 = 0;
  }
  if (v30 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v30;
  }
  if (v29 != 0) {
    *(_WORD*)(a1 + 494) = 0;
  }
  v31 = *(_DWORD*)(a1 + 416);
  *(_BYTE*)(a1 + 2093) = 0;
  if ((v31 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v31 | 0x10000000;
    GameRoutine_6c51e0_alt1(a1);
    GameRoutine_6c6da0_alt1(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

__int64 Unit_6cfde0(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  _BYTE* v23;
  _DWORD* v24;
  __int64 v25;
  _BYTE* v26;
  _BYTE* v27;
  __int64 v28;
  _BYTE* v29;
  _BYTE* v30;
  _BYTE* v31;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ca2c0) != 0) {
    GameData_21ca2b8 = 1020;
    __cxa_guard_release(&GameData_21ca2c0);
  }
  v2 = *(_QWORD*)(a1 + 1776);
  v3 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v3 >> 2) < 1) {
    v6 = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v3 & 0x1FFFFFFFCLL) == 4) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v9 = (_DWORD*)(v2 + 4);
      v5 = 0;
      v6 = 0;
      do {
        v10 = *(_QWORD*)(v4 + 8LL * (*(v9 - 1) & 0xFFF));
        v11 = *(_BYTE**)(v10 + 864);
        if (v11 != nullptr && *v11 != 0) {
          ++v6;
        }
        else {
          v12 = *(_BYTE**)(v10 + 872);
          if (v12 != nullptr && *v12 != 0) {
            ++v6;
          }
        }
        v13 = *(_QWORD*)(v4 + 8LL * (*v9 & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v6;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v6;
          }
        }
        v5 += 2;
        v9 += 2;
      } while (((v3 >> 2) & 0x7FFFFFFE) != v5);
    }
    if ((v3 & 4) != 0) {
      v7 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v2 + 4 * v5) & 0xFFF));
      v8 = *(_BYTE**)(v7 + 864);
      if (v8 != nullptr && *v8 != 0) {
        ++v6;
      }
      else {
        v16 = *(_BYTE**)(v7 + 872);
        if (v16 != nullptr && *v16 != 0) {
          ++v6;
        }
      }
    }
  }
  if ((GameRoutine_851060(a1 + 1360, &GameData_21ca2b8) & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v17 = *(_QWORD*)(a1 + 1776);
  v18 = *(_QWORD*)(a1 + 1784) - v17;
  if ((int)(v18 >> 2) < 1) {
    v21 = 0;
  }
  else {
    v19 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v18 & 0x1FFFFFFFCLL) == 4) {
      v20 = 0;
      v21 = 0;
    }
    else {
      v24 = (_DWORD*)(v17 + 4);
      v20 = 0;
      v21 = 0;
      do {
        v25 = *(_QWORD*)(v19 + 8LL * (*(v24 - 1) & 0xFFF));
        v26 = *(_BYTE**)(v25 + 864);
        if (v26 != nullptr && *v26 != 0) {
          ++v21;
        }
        else {
          v27 = *(_BYTE**)(v25 + 872);
          if (v27 != nullptr && *v27 != 0) {
            ++v21;
          }
        }
        v28 = *(_QWORD*)(v19 + 8LL * (*v24 & 0xFFF));
        v29 = *(_BYTE**)(v28 + 864);
        if (v29 != nullptr && *v29 != 0) {
          ++v21;
        }
        else {
          v30 = *(_BYTE**)(v28 + 872);
          if (v30 != nullptr && *v30 != 0) {
            ++v21;
          }
        }
        v20 += 2;
        v24 += 2;
      } while (((v18 >> 2) & 0x7FFFFFFE) != v20);
    }
    if ((v18 & 4) != 0) {
      v22 = *(_QWORD*)(v19 + 8LL * (*(_DWORD*)(v17 + 4 * v20) & 0xFFF));
      v23 = *(_BYTE**)(v22 + 864);
      if (v23 != nullptr && *v23 != 0) {
        ++v21;
      }
      else {
        v31 = *(_BYTE**)(v22 + 872);
        if (v31 != nullptr && *v31 != 0) {
          ++v21;
        }
      }
    }
  }
  if (v21 != v6) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return Unit_6cfa20(a1);
}

__int64 Unit_6d00c0(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  int v27;
  int v28;
  __int64 result;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  __int64 v37;
  int v38;
  char v39[4];
  char v40[4];

  game_Unit_SetPollution(a1, 0);
  v2 = *(unsigned __int8*)(a1 + 500);
  if (*(_BYTE*)(a1 + 500) != 0) {
    v3 = Unit_6c9ef0_alt1(a1);
    *(_BYTE*)(a1 + 500) = v3 & (v3 >> 31);
    if (v2 != (unsigned __int8)(v3 & (v3 >> 31))) {
      v4 = *(unsigned __int16*)(a1 + 492);
      v39[0] = 0;
      v5 = game_Unit_GetParam(a1, v39, 1);
      if (*(_WORD*)(a1 + 494) != 0 && v4 != *(unsigned __int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v5 >= (__int16)v4) {
        v6 = (__int16)v4;
      }
      else {
        v6 = v5;
      }
      if ((v4 & 0x8000u) != 0) {
        v6 = 0;
      }
      if (v6 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v6;
      }
    }
  }
  Unit_6cb490_alt1(a1);
  v7 = *(unsigned int**)(a1 + 1488);
  v8 = *(unsigned int**)(a1 + 1496);
  v9 = GameData_212c880[0];
  while (v7 != v8) {
    v10 = *v7;
    if ((*v7 & 0x7F000) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (v10 & 0xFFF)) +
                  104LL) != 9) {
      *v7 = v10 & 0xFFF80FFF;
    }
    ++v7;
  }
  UnitItemList_710ea0(a1 + 828);
  v11 = *(_DWORD*)(a1 + 1872);
  v12 = v11 & 0xFFF;
  if ((v11 & 0xFFF) == 0) {
    goto LABEL_53;
  }
  v13 = *(char**)(a1 + 608);
  v14 = *(char**)(a1 + 600);
  v15 = v13 - v14;
  if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
    v18 = 0;
    goto LABEL_48;
  }
  v16 = (v15 >> 2) & 7;
  if (((v15 >> 2) & 0x7FFFFFFF) - 1 < 7) {
    v17 = 0;
    v18 = 255;
    if (v16 == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v19 = v14 + 18;
  v20 = 0;
  v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
  v18 = 255;
  do {
    v20 -= 8;
    if (v18 >= *(v19 - 16)) {
      v18 = *(v19 - 16);
    }
    if (v18 >= *(v19 - 12)) {
      v18 = *(v19 - 12);
    }
    if (v18 >= *(v19 - 8)) {
      v18 = *(v19 - 8);
    }
    if (v18 >= *(v19 - 4)) {
      v18 = *(v19 - 4);
    }
    if (v18 >= *v19) {
      v18 = *v19;
    }
    if (v18 >= v19[4]) {
      v18 = v19[4];
    }
    if (v18 >= v19[8]) {
      v18 = v19[8];
    }
    v22 = v19[12];
    v19 += 32;
    if (v18 >= v22) {
      v18 = v22;
    }
  } while (v21 != v20);
  v17 = -v20;
  if (v16 != 0) {
  LABEL_44:
    v23 = &v14[4 * v17 + 2];
    do {
      v25 = *v23;
      v23 += 4;
      v24 = v25;
      if (v18 >= v25) {
        v18 = v24;
      }
      --v16;
    } while (v16 != 0);
  }
LABEL_48:
  if (v18 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v12) +
                                273LL) &&
      v14 != v13) {
    do {
      if ((*(_DWORD*)(a1 + 1872) & 0xFFF) == 0) {
        goto LABEL_69;
      }
      v32 = *v14;
      v33 = v14[1];
      if ((v33 | v32) < 0 ||
          ((v34 = *(_DWORD*)(a1 + 592)) > v32 ? (v35 = v34 <= v33)
                                              : (v35 = true),
           v35)) {
        LOBYTE(v36) =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                 8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                      273LL);
        if ((_BYTE)v36 == 0) {
          goto LABEL_68;
        }
        v37 = -1;
      }
      else {
        LODWORD(v37) = v32 + v34 * v33;
        if ((v37 & 0x80000000) != 0) {
          v38 = 0;
        }
        else {
          v38 = *(char*)(*(_QWORD*)(a1 + 600) + 4LL * (unsigned int)v37 + 2);
        }
        v36 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                             8LL * (*(_DWORD*)(a1 + 1872) &
                                                    0xFFF)) +
                                  273LL);
        if (v38 >= v36) {
          goto LABEL_68;
        }
        v37 = (int)v37;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v37 + 2) = v36;
    LABEL_68:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_69:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  v27 = *(__int16*)(a1 + 492);
  v40[0] = 0;
  if (v27 <= 1) {
    v28 = 1;
  }
  else {
    v28 = v27;
  }
  result = game_Unit_GetParam(a1, v40, 1);
  if (*(_WORD*)(a1 + 494) != 0 &&
      *(unsigned __int16*)(a1 + 494) != (unsigned __int16)v28) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v28) {
    v30 = v28;
  }
  else {
    v30 = result;
  }
  if (v30 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v30;
  }
  v31 = *(_DWORD*)(a1 + 416);
  if ((v31 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v31 | 0x10000000;
    GameRoutine_6c51e0_alt1(a1);
    GameRoutine_6c6da0_alt1(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

bool Unit_6d0400(__int64 a1)
{
  _DWORD* v1;
  _DWORD* v2;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  char* v15;
  int v16;
  int v17;
  int v18;
  char v19;

  if ((*(unsigned __int8*)(a1 + 499) | *(unsigned __int8*)(a1 + 500)) != 0) {
    return true;
  }
  v1 = *(_DWORD**)(a1 + 1488);
  v2 = *(_DWORD**)(a1 + 1496);
  if (v1 != v2) {
    while ((*v1 & 0x7F000) == 0 ||
           *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                8 * (*v1 & 0xFFFLL)) +
                     104LL) == 9) {
      if (++v1 == v2) {
        goto LABEL_9;
      }
    }
    return true;
  }
LABEL_9:
  if ((game_UnitItemList_HasStockUses(a1 + 828) & 1) != 0) {
    return true;
  }
  v5 = a1;
  if ((*(_DWORD*)(a1 + 1872) & 0xFFF) != 0) {
    v6 = *(_QWORD*)(a1 + 600);
    v7 = *(_QWORD*)(a1 + 608) - v6;
    if ((int)(v7 >> 2) < 1) {
      v10 = 0;
    }
    else {
      v8 = (v7 >> 2) & 7;
      if (((v7 >> 2) & 0x7FFFFFFF) - 1 >= 7) {
        v11 = (char*)(v6 + 18);
        v12 = 0;
        v13 = -8LL * ((v7 >> 5) & 0xFFFFFFF);
        v10 = 255;
        do {
          v12 -= 8;
          if (v10 >= *(v11 - 16)) {
            v10 = *(v11 - 16);
          }
          if (v10 >= *(v11 - 12)) {
            v10 = *(v11 - 12);
          }
          if (v10 >= *(v11 - 8)) {
            v10 = *(v11 - 8);
          }
          if (v10 >= *(v11 - 4)) {
            v10 = *(v11 - 4);
          }
          if (v10 >= *v11) {
            v10 = *v11;
          }
          if (v10 >= v11[4]) {
            v10 = v11[4];
          }
          if (v10 >= v11[8]) {
            v10 = v11[8];
          }
          v14 = v11[12];
          v11 += 32;
          if (v10 >= v14) {
            v10 = v14;
          }
        } while (v13 != v12);
        v9 = -v12;
      }
      else {
        v9 = 0;
        v10 = 255;
      }
      if (v8 != 0) {
        v15 = (char*)(v6 + 4 * v9 + 2);
        do {
          v17 = *v15;
          v15 += 4;
          v16 = v17;
          if (v10 >= v17) {
            v10 = v16;
          }
          --v8;
        } while (v8 != 0);
      }
    }
    if (v10 <
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                       8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                            273LL)) {
      return true;
    }
  }
  v18 = *(__int16*)(a1 + 492);
  v19 = 0;
  return (int)game_Unit_GetParam(v5, &v19, 1) > v18;
}

__int64 Unit_6d0700(__int64 result, _DWORD* a2, char a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int* v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned int v34;
  unsigned int v35;

  if ((*a2 & 0xFFF) != 0) {
    v3 = *(_QWORD*)(GameData_21c99b0 + 64);
    v4 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * (*a2 & 0xFFFLL)) + 24LL);
    v35 = *(_DWORD*)(v4 + 8);
    if ((v35 & 0xFFF) != 0) {
      v34 = *(_DWORD*)(v4 + 12);
      if ((v34 & 0xFFF) != 0) {
        v5 = *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v3 + 8LL * (v35 & 0xFFF)) +
                                         24LL) +
                              8LL);
        if ((v5 & 0xFFF) != 0 &&
            (v6 = *(_QWORD*)(result + 1552),
             ((v5 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(result + 1560) - v6) >> 2)) {
          if ((a3 & 1) ==
              ((*(_DWORD*)(v6 + 4 * ((v5 >> 5) & 0x7F)) >> v5) & 1)) {
            return result;
          }
          if ((a3 & 1) == 0) {
            v7 = result;
            UnitSkillList_84d7e0(result + 1552, &v35);
            game_Unit_SkillList_Replace(v7 + 1168, &v34, &v35);
            goto LABEL_26;
          }
        }
        else if ((a3 & 1) == 0) {
          return result;
        }
        v7 = result;
        v8 = UnitSkillList_84cc00(result + 1552, &v35, 1);
        v9 = v7;
        if ((v8 & 1) != 0) {
          v10 = *(_QWORD*)(v7 + 1592);
          v11 = *(_QWORD*)(v7 + 1584);
          *(_QWORD*)(v7 + 1640) = 0;
          v12 = v10 - v11;
          *(_QWORD*)(v7 + 1632) = 0;
          if ((int)((unsigned __int64)(v10 - v11) >> 2) >= 1) {
            v13 = GameData_21c99b0;
            v14 = (int)(v12 >> 2);
            if (v14 <= 1) {
              v15 = 1;
            }
            else {
              v15 = (int)(v12 >> 2);
            }
            if (v14 >= 2) {
              v21 = (int*)(v11 + 4);
              v16 = 0;
              v17 = 0;
              v18 = 0;
              v19 = 0;
              v20 = 0;
              do {
                v20 += 2;
                v22 = *(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                 8LL * (*(v21 - 1) & 0xFFF));
                v23 = v19 | (1 << *(_BYTE*)(v22 + 104));
                *(_WORD*)(v7 + 1632) = v23;
                v24 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
                *(_QWORD*)(v7 + 1640) = v24;
                v25 = (1 << *(_BYTE*)(v22 + 115)) | v17;
                *(_DWORD*)(v7 + 1636) = v25;
                v26 = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL) | v16;
                *(_WORD*)(v7 + 1634) = v26;
                v27 = *v21;
                v21 += 2;
                v28 = *(_QWORD*)(*(_QWORD*)(v13 + 64) + 8LL * (v27 & 0xFFF));
                v19 = v23 | (1 << *(_BYTE*)(v28 + 104));
                *(_WORD*)(v7 + 1632) = v19;
                v18 = (1LL << *(_BYTE*)(v28 + 250)) | v24;
                *(_QWORD*)(v7 + 1640) = v18;
                v17 = (1 << *(_BYTE*)(v28 + 115)) | v25;
                *(_DWORD*)(v7 + 1636) = v17;
                v16 = *(unsigned __int16*)(*(_QWORD*)(v28 + 24) + 1064LL) | v26;
                *(_WORD*)(v7 + 1634) = v16;
              } while ((v15 & 0x7FFFFFFFFFFFFFFELL) != v20);
            }
            else {
              LOWORD(v16) = 0;
              v17 = 0;
              v18 = 0;
              LOWORD(v19) = 0;
              v20 = 0;
            }
            if ((v15 & 1) != 0) {
              v29 = *(_QWORD*)(*(_QWORD*)(v13 + 64) +
                               8LL * (*(_DWORD*)(v11 + 4 * v20) & 0xFFF));
              *(_WORD*)(v7 + 1632) = v19 | (1 << *(_BYTE*)(v29 + 104));
              *(_QWORD*)(v7 + 1640) = (1LL << *(_BYTE*)(v29 + 250)) | v18;
              *(_DWORD*)(v7 + 1636) = (1 << *(_BYTE*)(v29 + 115)) | v17;
              *(_WORD*)(v7 + 1634) =
                  *(_WORD*)(*(_QWORD*)(v29 + 24) + 1064LL) | v16;
            }
          }
        }
        v30 = *(_QWORD*)(v7 + 1168);
        v31 = ((unsigned __int64)v35 >> 5) & 0x7F;
        v32 = (*(_QWORD*)(v7 + 1176) - v30) >> 2;
        if (v32 < v31 + 1) {
          return game_Unit_Unknown6c4610(v9);
        }
        if (((*(_DWORD*)(v30 + 4LL * (unsigned int)v31) >> v35) & 1) == 0) {
          return game_Unit_Unknown6c4610(v9);
        }
        v33 = ((unsigned __int64)v34 >> 5) & 0x7F;
        if (v32 >= v33 + 1 &&
            ((*(_DWORD*)(v30 + 4LL * (unsigned int)v33) >> v34) & 1) != 0) {
          return game_Unit_Unknown6c4610(v9);
        }
        UnitSkillList_84dea0(v7 + 1168, &v35, &v34);
      LABEL_26:
        v9 = v7;
        return game_Unit_Unknown6c4610(v9);
      }
    }
  }
  return result;
}

__int64 Unit_6d09e0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned int v15;

  v4 = v13;
  v15 = 0;
  v13[0] = GameData_1f91668;
  v13[1] = a2;
  v14 = v13;
  v13[2] = &v15;
  if ((*(_BYTE*)(a1 + 1152) & 4) == 0) {
    goto LABEL_12;
  }
  v5 = *(_QWORD*)(a1 + 1112);
  v6 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
    v4 = v13;
  LABEL_12:
    v11 = 32;
    goto LABEL_13;
  }
  v7 = 0;
  v8 = 0;
  v9 = GameData_212c880[0];
  v10 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                             8LL * (*(_DWORD*)(v6 + v7) & 0xFFF)) +
                  104LL) == 2) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v6 + v7);
      v10 = *v9;
      v5 = *(_QWORD*)(a1 + 1112);
      v6 = *(_QWORD*)(a1 + 1104);
    }
    ++v8;
    v7 += 4;
  } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
  v4 = v14;
  if (v14 == v13) {
    goto LABEL_12;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64, __int64))(*v4 + v11))(v4, a2, a3);
  }
  return v15;
}

_QWORD* Unit_6d0b20(_QWORD* result, _DWORD* a2, char a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _BYTE* v22;
  _DWORD* v23;
  __int64 v24;
  _BYTE* v25;
  _BYTE* v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  _BYTE* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  _BYTE* v57;
  _DWORD* v58;
  __int64 v59;
  _BYTE* v60;
  _BYTE* v61;
  __int64 v62;
  _BYTE* v63;
  _BYTE* v64;
  _BYTE* v65;
  __int16 v66;
  __int64 v67;
  int v68;
  _DWORD* v69;
  __int64 v70;
  _BYTE* v71;
  _BYTE* v72;
  __int64 v73;
  _BYTE* v74;
  _BYTE* v75;
  _BYTE* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  __int64 v85;
  int v86;
  __int64 v87;
  int* v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  _BYTE* v103;
  _DWORD* v104;
  __int64 v105;
  _BYTE* v106;
  _BYTE* v107;
  __int64 v108;
  _BYTE* v109;
  _BYTE* v110;
  _BYTE* v111;
  int v112;
  int v113;
  int v114;

  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8LL * (*a2 & 0xFFF)) + 24LL) +
                  1088LL);
  if (v5 != 0) {
    v6 = (__int64)result;
    v7 = *(_WORD*)(v5 + 16) & 0xFFF;
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8 * v7) + 24LL) + 1088LL);
    if (v8 == 0) {
    LABEL_16:
      if ((a3 & 1) == 0) {
        return result;
      }
      v113 = *(_WORD*)(v5 + 16) & 0xFFF;
      if ((_DWORD)v7 != 0) {
        v17 = result[222];
        v18 = result[223] - v17;
        if ((int)(v18 >> 2) < 1) {
          v20 = 0;
        }
        else {
          if ((v18 & 0x1FFFFFFFCLL) == 4) {
            v19 = 0;
            v20 = 0;
          }
          else {
            v23 = (_DWORD*)(v17 + 4);
            v19 = 0;
            v20 = 0;
            do {
              v24 = *(_QWORD*)(v4 + 8LL * (*(v23 - 1) & 0xFFF));
              v25 = *(_BYTE**)(v24 + 864);
              if (v25 != nullptr && *v25 != 0) {
                ++v20;
              }
              else {
                v26 = *(_BYTE**)(v24 + 872);
                if (v26 != nullptr && *v26 != 0) {
                  ++v20;
                }
              }
              v27 = *(_QWORD*)(v4 + 8LL * (*v23 & 0xFFF));
              v28 = *(_BYTE**)(v27 + 864);
              if (v28 != nullptr && *v28 != 0) {
                ++v20;
              }
              else {
                v29 = *(_BYTE**)(v27 + 872);
                if (v29 != nullptr && *v29 != 0) {
                  ++v20;
                }
              }
              v19 += 2;
              v23 += 2;
            } while (((v18 >> 2) & 0x7FFFFFFE) != v19);
          }
          if ((v18 & 4) != 0) {
            v21 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v17 + 4 * v19) & 0xFFF));
            v22 = *(_BYTE**)(v21 + 864);
            if (v22 != nullptr && *v22 != 0) {
              ++v20;
            }
            else {
              v30 = *(_BYTE**)(v21 + 872);
              if (v30 != nullptr && *v30 != 0) {
                ++v20;
              }
            }
          }
        }
        if ((UnitSkillList_84cc00(result + 170, &v113, 1) & 1) != 0) {
          v31 = *(_QWORD*)(v6 + 1400);
          v32 = *(_QWORD*)(v6 + 1392);
          *(_QWORD*)(v6 + 1448) = 0;
          v33 = v31 - v32;
          *(_QWORD*)(v6 + 1440) = 0;
          if ((int)((unsigned __int64)(v31 - v32) >> 2) >= 1) {
            v34 = *v3;
            v35 = (int)(v33 >> 2);
            v36 = v35 <= 1 ? 1LL : (int)(v33 >> 2);
            if (v35 >= 2) {
              v42 = (int*)(v32 + 4);
              v37 = 0;
              v38 = 0;
              v39 = 0;
              v40 = 0;
              v41 = 0;
              do {
                v41 += 2;
                v43 = *(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                 8LL * (*(v42 - 1) & 0xFFF));
                v44 = v40 | (1 << *(_BYTE*)(v43 + 104));
                *(_WORD*)(v6 + 1440) = v44;
                v45 = (1LL << *(_BYTE*)(v43 + 250)) | v39;
                *(_QWORD*)(v6 + 1448) = v45;
                v46 = (1 << *(_BYTE*)(v43 + 115)) | v38;
                *(_DWORD*)(v6 + 1444) = v46;
                v47 = *(unsigned __int16*)(*(_QWORD*)(v43 + 24) + 1064LL) | v37;
                *(_WORD*)(v6 + 1442) = v47;
                v48 = *v42;
                v42 += 2;
                v49 = *(_QWORD*)(*(_QWORD*)(v34 + 64) + 8LL * (v48 & 0xFFF));
                v40 = v44 | (1 << *(_BYTE*)(v49 + 104));
                *(_WORD*)(v6 + 1440) = v40;
                v39 = (1LL << *(_BYTE*)(v49 + 250)) | v45;
                *(_QWORD*)(v6 + 1448) = v39;
                v38 = (1 << *(_BYTE*)(v49 + 115)) | v46;
                *(_DWORD*)(v6 + 1444) = v38;
                v37 = *(unsigned __int16*)(*(_QWORD*)(v49 + 24) + 1064LL) | v47;
                *(_WORD*)(v6 + 1442) = v37;
              } while ((v36 & 0x7FFFFFFFFFFFFFFELL) != v41);
            }
            else {
              LOWORD(v37) = 0;
              v38 = 0;
              v39 = 0;
              LOWORD(v40) = 0;
              v41 = 0;
            }
            if ((v36 & 1) != 0) {
              v50 = *(_QWORD*)(*(_QWORD*)(v34 + 64) +
                               8LL * (*(_DWORD*)(v32 + 4 * v41) & 0xFFF));
              *(_WORD*)(v6 + 1440) = v40 | (1 << *(_BYTE*)(v50 + 104));
              *(_QWORD*)(v6 + 1448) = (1LL << *(_BYTE*)(v50 + 250)) | v39;
              *(_DWORD*)(v6 + 1444) = (1 << *(_BYTE*)(v50 + 115)) | v38;
              *(_WORD*)(v6 + 1442) =
                  *(_WORD*)(*(_QWORD*)(v50 + 24) + 1064LL) | v37;
            }
          }
          game_Unit_Unknown6cd8f0(v6);
        }
        v51 = *(_QWORD*)(v6 + 1776);
        v52 = *(_QWORD*)(v6 + 1784) - v51;
        if ((int)(v52 >> 2) < 1) {
          v55 = 0;
        }
        else {
          v53 = *(_QWORD*)(*v3 + 64);
          if ((v52 & 0x1FFFFFFFCLL) == 4) {
            v54 = 0;
            v55 = 0;
          }
          else {
            v58 = (_DWORD*)(v51 + 4);
            v54 = 0;
            v55 = 0;
            do {
              v59 = *(_QWORD*)(v53 + 8LL * (*(v58 - 1) & 0xFFF));
              v60 = *(_BYTE**)(v59 + 864);
              if (v60 != nullptr && *v60 != 0) {
                ++v55;
              }
              else {
                v61 = *(_BYTE**)(v59 + 872);
                if (v61 != nullptr && *v61 != 0) {
                  ++v55;
                }
              }
              v62 = *(_QWORD*)(v53 + 8LL * (*v58 & 0xFFF));
              v63 = *(_BYTE**)(v62 + 864);
              if (v63 != nullptr && *v63 != 0) {
                ++v55;
              }
              else {
                v64 = *(_BYTE**)(v62 + 872);
                if (v64 != nullptr && *v64 != 0) {
                  ++v55;
                }
              }
              v54 += 2;
              v58 += 2;
            } while (((v52 >> 2) & 0x7FFFFFFE) != v54);
          }
          if ((v52 & 4) != 0) {
            v56 = *(_QWORD*)(v53 + 8LL * (*(_DWORD*)(v51 + 4 * v54) & 0xFFF));
            v57 = *(_BYTE**)(v56 + 864);
            if (v57 != nullptr && *v57 != 0) {
              ++v55;
            }
            else {
              v65 = *(_BYTE**)(v56 + 872);
              if (v65 != nullptr && *v65 != 0) {
                ++v55;
              }
            }
          }
        }
        if (v55 != v20) {
          *(_WORD*)(v6 + 20) |= 0x44u;
        }
      }
      v66 = *(_WORD*)(v5 + 16);
      v67 = v66 & 0xFFF;
      v114 = v66 & 0xFFF;
      if ((v66 & 0xFFF) != 0 &&
          (GameRoutine_6fcb20(*(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v67),
                              v6 + 1840) &
           1) != 0) {
        v68 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * (unsigned int)v67) +
                                  104LL);
        if (v68 == 2) {
          Unit_6cc580(v6, &v114);
        }
        else if (v68 == 1) {
          Unit_6cc9e0(v6, &v114);
        }
      }
      return (_QWORD*)game_Unit_Unknown6c4610(v6);
    }
    v9 = result[134];
    while (1) {
      v10 = *(unsigned __int16*)(v8 + 16);
      if ((result[135] - v9) >> 2 >= ((v10 >> 5) & 0x7F) + 1 &&
          ((*(_DWORD*)(v9 + 4 * ((v10 >> 5) & 0x7F)) >> v10) & 1) != 0) {
        break;
      }
      v8 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 1080LL);
      if (v8 == 0) {
        goto LABEL_16;
      }
    }
    if ((a3 & 1) == 0) {
      v112 = *(_WORD*)(v5 + 16) & 0xFFF;
      if ((_DWORD)v7 != 0) {
        v11 = result[222];
        v12 = result[223] - v11;
        if ((int)(v12 >> 2) < 1) {
          v14 = 0;
        }
        else {
          if ((v12 & 0x1FFFFFFFCLL) == 4) {
            v13 = 0;
            v14 = 0;
          }
          else {
            v69 = (_DWORD*)(v11 + 4);
            v13 = 0;
            v14 = 0;
            do {
              v70 = *(_QWORD*)(v4 + 8LL * (*(v69 - 1) & 0xFFF));
              v71 = *(_BYTE**)(v70 + 864);
              if (v71 != nullptr && *v71 != 0) {
                ++v14;
              }
              else {
                v72 = *(_BYTE**)(v70 + 872);
                if (v72 != nullptr && *v72 != 0) {
                  ++v14;
                }
              }
              v73 = *(_QWORD*)(v4 + 8LL * (*v69 & 0xFFF));
              v74 = *(_BYTE**)(v73 + 864);
              if (v74 != nullptr && *v74 != 0) {
                ++v14;
              }
              else {
                v75 = *(_BYTE**)(v73 + 872);
                if (v75 != nullptr && *v75 != 0) {
                  ++v14;
                }
              }
              v13 += 2;
              v69 += 2;
            } while (((v12 >> 2) & 0x7FFFFFFE) != v13);
          }
          if ((v12 & 4) != 0) {
            v15 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v11 + 4 * v13) & 0xFFF));
            v16 = *(_BYTE**)(v15 + 864);
            if (v16 != nullptr && *v16 != 0) {
              ++v14;
            }
            else {
              v76 = *(_BYTE**)(v15 + 872);
              if (v76 != nullptr && *v76 != 0) {
                ++v14;
              }
            }
          }
        }
        if ((UnitSkillList_84d980(result + 170, &v112) & 1) != 0) {
          v77 = *(_QWORD*)(v6 + 1400);
          v78 = *(_QWORD*)(v6 + 1392);
          *(_QWORD*)(v6 + 1448) = 0;
          v79 = v77 - v78;
          *(_QWORD*)(v6 + 1440) = 0;
          if ((int)((unsigned __int64)(v77 - v78) >> 2) >= 1) {
            v80 = *v3;
            v81 = (int)(v79 >> 2);
            v82 = v81 <= 1 ? 1LL : (int)(v79 >> 2);
            if (v81 >= 2) {
              v88 = (int*)(v78 + 4);
              v83 = 0;
              v84 = 0;
              v85 = 0;
              v86 = 0;
              v87 = 0;
              do {
                v87 += 2;
                v89 = *(_QWORD*)(*(_QWORD*)(v80 + 64) +
                                 8LL * (*(v88 - 1) & 0xFFF));
                v90 = v86 | (1 << *(_BYTE*)(v89 + 104));
                *(_WORD*)(v6 + 1440) = v90;
                v91 = (1LL << *(_BYTE*)(v89 + 250)) | v85;
                *(_QWORD*)(v6 + 1448) = v91;
                v92 = (1 << *(_BYTE*)(v89 + 115)) | v84;
                *(_DWORD*)(v6 + 1444) = v92;
                v93 = *(unsigned __int16*)(*(_QWORD*)(v89 + 24) + 1064LL) | v83;
                *(_WORD*)(v6 + 1442) = v93;
                v94 = *v88;
                v88 += 2;
                v95 = *(_QWORD*)(*(_QWORD*)(v80 + 64) + 8LL * (v94 & 0xFFF));
                v86 = v90 | (1 << *(_BYTE*)(v95 + 104));
                *(_WORD*)(v6 + 1440) = v86;
                v85 = (1LL << *(_BYTE*)(v95 + 250)) | v91;
                *(_QWORD*)(v6 + 1448) = v85;
                v84 = (1 << *(_BYTE*)(v95 + 115)) | v92;
                *(_DWORD*)(v6 + 1444) = v84;
                v83 = *(unsigned __int16*)(*(_QWORD*)(v95 + 24) + 1064LL) | v93;
                *(_WORD*)(v6 + 1442) = v83;
              } while ((v82 & 0x7FFFFFFFFFFFFFFELL) != v87);
            }
            else {
              LOWORD(v83) = 0;
              v84 = 0;
              v85 = 0;
              LOWORD(v86) = 0;
              v87 = 0;
            }
            if ((v82 & 1) != 0) {
              v96 = *(_QWORD*)(*(_QWORD*)(v80 + 64) +
                               8LL * (*(_DWORD*)(v78 + 4 * v87) & 0xFFF));
              *(_WORD*)(v6 + 1440) = v86 | (1 << *(_BYTE*)(v96 + 104));
              *(_QWORD*)(v6 + 1448) = (1LL << *(_BYTE*)(v96 + 250)) | v85;
              *(_DWORD*)(v6 + 1444) = (1 << *(_BYTE*)(v96 + 115)) | v84;
              *(_WORD*)(v6 + 1442) =
                  *(_WORD*)(*(_QWORD*)(v96 + 24) + 1064LL) | v83;
            }
          }
          game_Unit_Unknown6cd8f0(v6);
        }
        v97 = *(_QWORD*)(v6 + 1776);
        v98 = *(_QWORD*)(v6 + 1784) - v97;
        if ((int)(v98 >> 2) < 1) {
          v101 = 0;
        }
        else {
          v99 = *(_QWORD*)(*v3 + 64);
          if ((v98 & 0x1FFFFFFFCLL) == 4) {
            v100 = 0;
            v101 = 0;
          }
          else {
            v104 = (_DWORD*)(v97 + 4);
            v100 = 0;
            v101 = 0;
            do {
              v105 = *(_QWORD*)(v99 + 8LL * (*(v104 - 1) & 0xFFF));
              v106 = *(_BYTE**)(v105 + 864);
              if (v106 != nullptr && *v106 != 0) {
                ++v101;
              }
              else {
                v107 = *(_BYTE**)(v105 + 872);
                if (v107 != nullptr && *v107 != 0) {
                  ++v101;
                }
              }
              v108 = *(_QWORD*)(v99 + 8LL * (*v104 & 0xFFF));
              v109 = *(_BYTE**)(v108 + 864);
              if (v109 != nullptr && *v109 != 0) {
                ++v101;
              }
              else {
                v110 = *(_BYTE**)(v108 + 872);
                if (v110 != nullptr && *v110 != 0) {
                  ++v101;
                }
              }
              v100 += 2;
              v104 += 2;
            } while (((v98 >> 2) & 0x7FFFFFFE) != v100);
          }
          if ((v98 & 4) != 0) {
            v102 = *(_QWORD*)(v99 + 8LL * (*(_DWORD*)(v97 + 4 * v100) & 0xFFF));
            v103 = *(_BYTE**)(v102 + 864);
            if (v103 != nullptr && *v103 != 0) {
              ++v101;
            }
            else {
              v111 = *(_BYTE**)(v102 + 872);
              if (v111 != nullptr && *v111 != 0) {
                ++v101;
              }
            }
          }
        }
        if (v101 != v14) {
          *(_WORD*)(v6 + 20) |= 0x44u;
        }
      }
      return (_QWORD*)game_Unit_Unknown6c4610(v6);
    }
  }
  return result;
}

__int64 game_Unit_EachEducateTargetSkill(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned int v15;

  v4 = v13;
  v15 = 0;
  v13[0] = GameData_1f916e8;
  v13[1] = a2;
  v14 = v13;
  v13[2] = &v15;
  if ((*(_BYTE*)(a1 + 1152) & 4) == 0) {
    goto LABEL_12;
  }
  v5 = *(_QWORD*)(a1 + 1112);
  v6 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
    v4 = v13;
  LABEL_12:
    v11 = 32;
    goto LABEL_13;
  }
  v7 = 0;
  v8 = 0;
  v9 = GameData_212c880[0];
  v10 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                             8LL * (*(_DWORD*)(v6 + v7) & 0xFFF)) +
                  104LL) == 2) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v6 + v7);
      v10 = *v9;
      v5 = *(_QWORD*)(a1 + 1112);
      v6 = *(_QWORD*)(a1 + 1104);
    }
    ++v8;
    v7 += 4;
  } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
  v4 = v14;
  if (v14 == v13) {
    goto LABEL_12;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64, __int64))(*v4 + v11))(v4, a2, a3);
  }
  return v15;
}

void Unit_6d1530(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v20[0] = a2;
  v20[1] = a3;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0x3F80000000000000LL;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v5 = 0;
  }
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v32 = v5;
  v33 = 67072;
  if (a4 != 0) {
    goto LABEL_18;
  }
  if (game_GameModeData_instance_ == 0) {
    v6 = 0;
    a4 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) != 0) {
      goto LABEL_18;
    }
    goto LABEL_11;
  }
  v6 = *(_DWORD*)(game_GameModeData_instance_ + 68);
  v7 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v7 != 0) {
    v6 += *(char*)(v7 + 128);
  }
  a4 = *(unsigned __int8*)(a2 + 442);
  if (*(_BYTE*)(a2 + 442) == 0) {
  LABEL_11:
    if (*(_BYTE*)(a2 + 443) != 0) {
      v8 = v6 + *(char*)(a2 + 443);
      if (v8 <= 1) {
        v8 = 1;
      }
      if (v8 >= 99) {
        a4 = 99;
      }
      else {
        a4 = v8;
      }
    }
    else {
      a4 = v6;
    }
  }
LABEL_18:
  v9 = *(unsigned __int8*)(a2 + 444);
  if (a4 > v9) {
    v9 = a4;
  }
  v30 = v9;
  game_6e4de0_alt1(v20, (unsigned __int64*)a2);
  game_6e50e0_alt1((__int64)v20);
  GameRoutine_6e5480_alt2(v20);
  GameRoutine_6c3050_alt2(a1);
  game_Unit_AutoGrowMasteryLevel(a1, v20);
  game_Unit_Unknown6d2380_alt1(a1);
  v10 = *(_DWORD*)(a1 + 416);
  if ((v10 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v10 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v35 != 0) {
    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v36 = v35;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v12 + v13, v35);
  }
  if (v27 != 0) {
    v14 = *v11;
    v28 = v27;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v14 + v15, v27);
  }
  if (v24 != 0) {
    v16 = *v11;
    v25 = v24;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v16 + v17, v24);
  }
  if (v21 != 0) {
    v18 = *v11;
    v22 = v21;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v18 + v19, v21);
  }
}

__int64 game_Unit_AutoGrowMasteryLevel(__int64 a1, __int64* a2)
{
  __int64 v2;
  int v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 i;
  __int64 v11;
  __int64 (**v12)();
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64* v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;
  unsigned int v31;
  unsigned int v32;
  int v33;
  int v34;
  char v35;
  unsigned int v36;
  char v37;
  unsigned int v38;
  int v39;
  int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  __int64 v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned int v54;
  int v55;
  unsigned int v56;
  int v57;
  __int64 v58;
  _BYTE* v59;
  __int64 v60;
  _BYTE* v61;
  int v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char v67;
  int v68;
  unsigned int v69;
  unsigned int v70;
  int v71;
  _BYTE* v72;
  __int64 v73;
  unsigned __int64 v74;
  _DWORD* v75;
  __int64 v76;
  __int64 v77;
  __int64 j;
  int v79;
  __int64 v80;
  __int64 v81;
  int v82;
  int* v84;
  unsigned __int64 v85;
  int v86;
  int v87;
  int v88;
  int v89;
  int v90;
  int v91;
  unsigned int v92;
  int v93;
  __int64 v94;
  int v95;
  char v96;
  __int64 v97;
  int v98;
  int* v100;
  unsigned __int64 v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  int v107;
  unsigned int v108;
  int v109;
  _WORD* v110;
  __int64 k;
  __int64 v112;
  __int64 (**v114)();
  unsigned __int64 v115;
  int* v116;
  _BYTE* v117;
  __int64 (***v118)();
  __int64* v119;
  __int64 v120;
  _BYTE* v121;
  int v122;

  v2 = *a2;
  v3 = *((_DWORD*)a2 + 22);
  v6 = *(_QWORD*)(a2[3] - 8);
  if (*(_QWORD*)(a1 + 392) == *a2) {
    goto LABEL_34;
  }
  *(_QWORD*)(a1 + 392) = v2;
  v7 = *(_QWORD*)(v2 + 624);
  if (v7 == 0) {
    goto LABEL_34;
  }
  do {
    v8 = v7;
    v7 = *(_QWORD*)(v7 + 624);
  } while (v7 != 0);
  if (*(_BYTE*)(v8 + 441) != 3) {
    goto LABEL_34;
  }
  v9 = game_GetHero(9);
  if (v9 == 0) {
    goto LABEL_15;
  }
  for (i = v9; i != 0; i = *(_QWORD*)(i + 624)) {
    v11 = i;
  }
  if (*(_BYTE*)(v11 + 441) != 3) {
    goto LABEL_15;
  }
  v12 = *(__int64 (***)())(v9 + 624);
  if (v12 == nullptr) {
    v12 = (__int64 (**)())v9;
  }
  v114 = v12;
  v122 = 241;
  v13 = game_UnitPool_Find_6ead60(&v114, &v122);
  if (v13 != 0) {
    v14 = (__int64*)(v13 + 2104);
    goto LABEL_16;
  }
  v15 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  if (*(_BYTE*)(v15 + 144) != 0) {
    v14 = (__int64*)(v15 + 112);
  }
  else {
  LABEL_15:
    v14 = &GameData_21f49b8;
  }
LABEL_16:
  if (*((_BYTE*)v14 + 32) != 0) {
    if ((__int64*)(a1 + 2104) != v14) {
      v16 = (__int64*)(a1 + 2112);
      v17 = *((unsigned __int8*)v14 + 8);
      if ((*(_BYTE*)(a1 + 2112) & 1) != 0) {
        v20 = (v17 & 1) == 0;
        v21 = v17 >> 1;
        if (v20) {
          v22 = (char*)v14 + 9;
        }
        else {
          v22 = (char*)v14[3];
        }
        if (v20) {
          v23 = v21;
        }
        else {
          v23 = v14[2];
        }
        SpineModel_64dde0(v16, v22, v23);
      }
      else if ((v17 & 1) != 0) {
        GameRoutine_64df20(v16, v14[3], v14[2]);
      }
      else {
        v18 = v14[1];
        v19 = v14[3];
        *(_QWORD*)(a1 + 2120) = v14[2];
        *(_QWORD*)(a1 + 2128) = v19;
        *v16 = v18;
      }
    }
    *(_BYTE*)(a1 + 2136) = *((_BYTE*)v14 + 32);
    *(_BYTE*)(a1 + 2137) = *((_BYTE*)v14 + 33);
    *(_BYTE*)(a1 + 2138) = *((_BYTE*)v14 + 34);
    *(_BYTE*)(a1 + 2139) = *((_BYTE*)v14 + 35);
    *(_BYTE*)(a1 + 2140) = *((_BYTE*)v14 + 36);
  }
  else {
    if ((*(_BYTE*)(a1 + 2112) & 1) != 0) {
      **(_BYTE**)(a1 + 2128) = 0;
      *(_QWORD*)(a1 + 2120) = 0;
    }
    else {
      *(_WORD*)(a1 + 2112) = 0;
    }
    *(_BYTE*)(a1 + 2140) = 0;
    *(_DWORD*)(a1 + 2136) = 0;
  }
LABEL_34:
  if (v6 != 0) {
    Unit_930d50_alt1(a1 + 1880, *(_QWORD*)(v6 + 112));
    if (*(_QWORD*)(a1 + 400) != v6) {
      *(_QWORD*)(a1 + 400) = v6;
      game_Unit_Unknown6c8630(a1);
    }
  }
  GameRoutine_7fbcc0(a1 + 512, v2 + 584);
  nn_os_LockMutex(&game_g_random_mutex);
  v24 = game_map_MapRandom_instance__ptr[0];
  v25 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v26 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v27 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 4) = v25;
  v28 = (v27 >> 8) ^ (v26 >> 19) ^ v27 ^ v26;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = v26;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 12) = v28;
  v29 = v28 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  *(_DWORD*)(a1 + 448) = v29;
  nn_os_LockMutex(&game_g_random_mutex);
  v30 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8);
  v31 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 12);
  v32 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) ^
        (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) << 11);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) =
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 4) = v30;
  v33 = (v32 >> 8) ^ (v31 >> 19) ^ v32 ^ v31;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = v31;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 12) = v33;
  v34 = v33 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  *(_DWORD*)(a1 + 452) = v34;
  *(_BYTE*)(a1 + 456) =
      3 * *(_WORD*)(v2 + 540) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 540)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 540)) >> 32) &
             0x80000000) != 0LL));
  *(_BYTE*)(a1 + 457) =
      3 * *(_WORD*)(v2 + 542) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 542)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 542)) >> 32) &
             0x80000000) != 0LL));
  *(_BYTE*)(a1 + 458) =
      3 * *(_WORD*)(v2 + 544) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 544)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 544)) >> 32) &
             0x80000000) != 0LL));
  *(_BYTE*)(a1 + 459) =
      3 * *(_WORD*)(v2 + 546) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 546)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 546)) >> 32) &
             0x80000000) != 0LL));
  *(_BYTE*)(a1 + 460) =
      3 * *(_WORD*)(v2 + 548) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 548)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 548)) >> 32) &
             0x80000000) != 0LL));
  *(_BYTE*)(a1 + 461) =
      3 * *(_WORD*)(v2 + 550) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 550)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 550)) >> 32) &
             0x80000000) != 0LL));
  *(_BYTE*)(a1 + 462) =
      3 * *(_WORD*)(v2 + 552) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 552)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 552)) >> 32) &
             0x80000000) != 0LL));
  *(_BYTE*)(a1 + 463) = 3 * *(__int16*)(v2 + 554) % 100;
  *(_BYTE*)(a1 + 464) =
      3 * *(_WORD*)(v2 + 556) -
      100 *
          (((4123168605LL * *(__int16*)(v2 + 556)) >> 37) +
           ((((unsigned __int64)(4123168605LL * *(__int16*)(v2 + 556)) >> 32) &
             0x80000000) != 0LL));
  v35 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v35 = *(_BYTE*)(game_GameModeData_instance_ + 13);
  }
  *(_BYTE*)(a1 + 624) = v35;
  v36 = *((_DWORD*)a2 + 24);
  v37 = *((_BYTE*)a2 + 106);
  v114 = (__int64 (**)())__PAIR64__(*((_DWORD*)a2 + 23), v3);
  v38 = *((_DWORD*)a2 + 25);
  LOBYTE(v116) = v37;
  v115 = __PAIR64__(v38, v36);
  v39 = a2[13] & 0xFB;
  if (v3 <= 1) {
    v40 = 1;
  }
  else {
    v40 = v3;
  }
  if (v40 >= 99) {
    v41 = 99;
  }
  else {
    v41 = v40;
  }
  v117 = a2 + 2;
  v118 = (__int64 (***)())(a2 + 5);
  v119 = a2 + 8;
  *(_QWORD*)(a1 + 468) = 0;
  *(_QWORD*)(a1 + 476) = 0;
  *(_QWORD*)(a1 + 482) = 0;
  v42 = 1;
  BYTE2(v116) = 1;
  *(_BYTE*)(a1 + 498) = 1;
  BYTE1(v116) = v39 != 1;
  if (v39 != 1) {
    UnitHeroes_6d3800_alt1(a1, 1, v41);
    UnitHeroes_6d46e0(a1, *(_QWORD*)(a1 + 400));
    v42 = *(unsigned __int8*)(a1 + 498);
  }
  UnitHeroes_6d5120(a1, v41 - v42, &v114);
  v43 = *((unsigned __int8*)a2 + 104);
  if (v43 <= 5 && ((1 << v43) & 0x32) != 0) {
    v44 = *(_QWORD*)(*a2 + 64);
    if (v44 != 0) {
      Unit_930d50_alt1(a1 + 1880, *(_QWORD*)(v44 + 112));
      if (*(_QWORD*)(a1 + 400) != v44) {
        *(_QWORD*)(a1 + 400) = v44;
        game_Unit_Unknown6c8630(a1);
      }
    }
  }
  if (*((_BYTE*)a2 + 107) == 1) {
    v45 = (__int64*)a2[14];
    v46 = (__int64*)a2[15];
    while (v45 != v46) {
      v47 = *v45++;
      Unit_6d2480_alt1(a1, v47, (a2[13] & 0xFB) != 1, 0);
    }
  }
  else {
    v48 = *(unsigned __int16*)(v2 + 120);
    if (*(_WORD*)(v2 + 120) != 0) {
      v49 = 8;
      do {
        Unit_6d2480_alt1(a1, *(_QWORD*)(*(_QWORD*)(v2 + 128) + v49),
                         (a2[13] & 0xFB) != 1, 0);
        --v48;
        v49 += 16;
      } while (v48 != 0);
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v50 = 360;
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v50 = 376;
    }
  }
  else {
    v50 = 360;
  }
  v51 = v2 + v50;
  v52 = *(unsigned __int16*)(v2 + v50);
  if (*(_WORD*)(v2 + v50) != 0) {
    v53 = 8;
    do {
      Unit_6d2480_alt1(a1, *(_QWORD*)(*(_QWORD*)(v51 + 8) + v53),
                       (a2[13] & 0xFB) != 1, 1);
      --v52;
      v53 += 16;
    } while (v52 != 0);
  }
  v54 = *(unsigned __int8*)(a1 + 498);
  v55 = *(unsigned __int8*)(v2 + 445);
  if (*(_BYTE*)(v2 + 445) == 0) {
    if (*(_BYTE*)(v2 + 446) != 0) {
      v55 = *(char*)(v2 + 446) + v54;
      if (v55 <= 1) {
        v55 = 1;
      }
      if (v55 >= 99) {
        v55 = 99;
      }
    }
    else {
      if (v54 <= 1) {
        v55 = 1;
      }
      else {
        v55 = *(unsigned __int8*)(a1 + 498);
      }
      if ((unsigned int)v55 >= 0x63) {
        v55 = 99;
      }
    }
  }
  if ((unsigned int)v55 >= 0x63) {
    v55 = 99;
  }
  if (v55 != v54) {
    *(_BYTE*)(a1 + 498) = v55;
    if (v55 >=
        (int)((unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2)) {
      v55 = (unsigned __int64)(GameData_21d9970 - GameData_21d9968) >> 2;
    }
    *(_DWORD*)(a1 + 504) = *(_DWORD*)(GameData_21d9968 + 4LL * v55 - 4);
  }
  game_Unit_Unknown6c4610(a1);
  v56 = *((unsigned __int8*)a2 + 104);
  if (v56 > 5) {
    goto LABEL_118;
  }
  v57 = 1 << v56;
  if ((v57 & 5) != 0) {
  LABEL_88:
    v58 = a2[6];
    if (a2[5] == v58) {
      v59 = nullptr;
    }
    else {
      v59 = *(_BYTE**)(v58 - 8);
    }
    v63 = a2[9];
    if (a2[8] == v63) {
      v62 = 0;
    }
    else {
      v62 = *(_DWORD*)(v63 - 4);
    }
    goto LABEL_113;
  }
  if ((v57 & 0xA) != 0) {
    if (*(_QWORD*)(*a2 + 112) == 0) {
    LABEL_118:
      UnitHeroes_6d2b90(a1, GameData_212c8b0[0]);
      goto LABEL_134;
    }
    goto LABEL_88;
  }
  v60 = a2[18];
  if (v60 != 0) {
    v61 = *(_BYTE**)(v60 + 88);
    v62 = *(unsigned __int8*)(v60 + 96);
    if (v61 != nullptr) {
      if (*(_BYTE*)(v60 + 96) != 0) {
        goto LABEL_106;
      }
      goto LABEL_103;
    }
  }
  else {
    v62 = 0;
  }
  v64 = a2[6];
  if (a2[5] == v64) {
    v61 = nullptr;
    if (v62 != 0) {
      goto LABEL_106;
    }
  }
  else {
    v61 = *(_BYTE**)(v64 - 8);
    if (v62 != 0) {
      goto LABEL_106;
    }
  }
LABEL_103:
  v65 = a2[9];
  if (a2[8] == v65) {
    v62 = 0;
  }
  else {
    v62 = *(_DWORD*)(v65 - 4);
  }
LABEL_106:
  v66 = *(_QWORD*)(a1 + 400);
  v59 = *(_BYTE**)(v66 + 112);
  if (v61 != nullptr && *(_BYTE*)(v66 + 96) == 2) {
    if (v59 == nullptr) {
      goto LABEL_118;
    }
    if (v61[32] == v59[32]) {
      v59 = v61;
    }
    if (v59[109] == 0) {
      goto LABEL_118;
    }
    goto LABEL_115;
  }
LABEL_113:
  if (v59 == nullptr || v59[109] == 0) {
    goto LABEL_118;
  }
LABEL_115:
  if (v62 < 1) {
    goto LABEL_118;
  }
  v67 = *(_BYTE*)(a1 + 1920);
  *(_DWORD*)(a1 + 1888) = 0;
  *(_QWORD*)(a1 + 1880) = 0;
  if ((v67 & 1) != 0) {
    **(_BYTE**)(a1 + 1936) = 0;
    *(_QWORD*)(a1 + 1928) = 0;
  }
  else {
    *(_WORD*)(a1 + 1920) = 0;
  }
  GameRoutine_6e3b50(a1 + 1896, *(_QWORD*)(a1 + 1904));
  *(_QWORD*)(a1 + 1896) = a1 + 1904;
  *(_QWORD*)(a1 + 1912) = 0;
  *(_QWORD*)(a1 + 1904) = 0;
  v118 = nullptr;
  v119 = nullptr;
  v120 = 0;
  v121 = nullptr;
  v114 = nullptr;
  LODWORD(v115) = 0;
  v116 = (int*)&v117;
  v117 = nullptr;
  LOBYTE(v114) = v59[16];
  nn_os_LockMutex(&game_g_random_mutex);
  v68 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8);
  v69 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 12);
  v70 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) ^
        (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) << 11);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24) =
      *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 4) = v68;
  v71 = (v70 >> 8) ^ (v69 >> 19) ^ v70 ^ v69;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 8) = v69;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v24 + 12) = v71;
  nn_os_UnlockMutex(&game_g_random_mutex);
  *(_WORD*)((char*)&v114 + 1) = __PAIR16__(BYTE2(v114), v71) & 0xFEFF;
  UnitHeroes_6d2b90(a1, &v114);
  LODWORD(v115) = 0;
  v114 = nullptr;
  if (((unsigned __int8)v119 & 1) != 0) {
    *v121 = 0;
    v120 = 0;
  }
  else {
    LOWORD(v119) = 0;
  }
  GameRoutine_6e3b50(&v116, v117);
  v117 = nullptr;
  v118 = nullptr;
  v116 = (int*)&v117;
  if (((unsigned __int8)v119 & 1) != 0) {
    v72 = v121;
    if (v121 != nullptr) {
      v73 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v73 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v121);
      v72 = v117;
    }
  }
  else {
    v72 = nullptr;
  }
  GameRoutine_6e3b50(&v116, v72);
  v114 = *(__int64 (***)())(a1 + 392);
  v115 = a1;
  v74 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
  if (v62 < (int)v74) {
    LODWORD(v74) = v62;
  }
  UnitVariables_931520(a1 + 1880, &v114,
                       *(unsigned int*)(GameData_21d9988 + 4LL * (int)v74 - 4));
  v75 = *(_DWORD**)(a1 + 392);
  if (v75 != nullptr) {
    LODWORD(v75) = **(_DWORD**)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                8LL * *(unsigned __int8*)(a1 + 1880)) ^
                   *v75;
  }
  *(_BYTE*)(a1 + 1881) = (_BYTE)v75;
LABEL_134:
  v76 = *(_QWORD*)(v2 + 24);
  v77 = *(_QWORD*)(v76 + 224);
  for (j = *(_QWORD*)(v76 + 232); v77 != j; v77 += 4) {
    Unit_6cc580_alt1(a1, v77, 0);
  }
  v79 = *((unsigned __int8*)a2 + 104);
  if (((v79 & 0xFE) == 4 && (v80 = a2[18]) != 0 &&
           (v81 = *(_QWORD*)(v80 + 72)) != 0 ||
       (v81 = a2[17]) != 0) &&
      *(_BYTE*)(*(_QWORD*)(a1 + 400) + 96LL) == 1) {
    if ((v79 & 0xFFFFFFFB) != 1) {
      v82 = *(unsigned __int8*)(v81 + 50);
      if (*(_BYTE*)(v81 + 50) != 0 &&
          *(unsigned __int8*)(a1 + 552) < (unsigned int)v82) {
        v84 = (int*)GameData_21d99a8;
        v85 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if (v82 >= (int)v85) {
          v82 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        if ((int)v85 >= 12) {
          v86 = 12;
        }
        else {
          v86 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        v87 = *(_DWORD*)(GameData_21d99a8 + 4LL * v82 - 4);
        v88 = *(_DWORD*)(GameData_21d99a8 + 4LL * v86 - 4);
        if (v88 >= v87) {
          v88 = v87;
        }
        if (v87 < 0) {
          v88 = 0;
        }
        *(_WORD*)(a1 + 538) = v88;
        if ((int)v85 < 1) {
          LOBYTE(v89) = 0;
        }
        else {
          v89 = 0;
          v90 = v84[(unsigned int)(v85 - 1)];
          if (v90 >= v88) {
            v90 = v88;
          }
          if (v88 >= *v84) {
            v91 = v90;
          }
          else {
            v91 = *v84;
          }
          while (1) {
            v92 = (unsigned int)(v89 + v85) >> 1;
            v93 = v84[v92];
            if (v91 == v93) {
              break;
            }
            if (v91 < v93) {
              LODWORD(v85) = (unsigned int)(v89 + v85) >> 1;
            }
            else {
              v89 = v92 + 1;
            }
            if (v89 >= (int)v85) {
              goto LABEL_169;
            }
          }
          LOBYTE(v89) = v92 + 1;
        }
      LABEL_169:
        *(_BYTE*)(a1 + 552) = v89;
      }
    }
    v94 = *(unsigned __int8*)(v81 + 16);
    if (*(_QWORD*)(a1 + 1944) != v94) {
      *(_WORD*)(a1 + 1944) = v94;
      *(_BYTE*)(a1 + 1946) = 0;
      *(_BYTE*)(a1 + 1951) = 0;
      *(_DWORD*)(a1 + 1947) = 0;
      v95 = *(_DWORD*)(a1 + 416);
      if ((v95 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v95 | 0x10000000;
        game_6c51e0(a1);
        GameRoutine_6c6da0_alt1(a1);
        game_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
      *(_WORD*)(a1 + 20) |= 1u;
    }
    v79 = *((unsigned __int8*)a2 + 104);
  }
  if ((v79 & 0xFFFFFFFB) != 1) {
    v96 = UnitHeroes_6d46e0(a1, *(_QWORD*)(a1 + 400));
    v97 = *(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                     8LL * *(unsigned __int8*)(a1 + 1944));
    if (v97 != 0) {
      v98 = *(unsigned __int8*)(v97 + 50);
      if (*(_BYTE*)(v97 + 50) == 0 ||
          *(unsigned __int8*)(a1 + 552) >= (unsigned int)v98) {
        LOBYTE(v97) = 0;
      }
      else {
        v100 = (int*)GameData_21d99a8;
        v101 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if (v98 >= (int)v101) {
          v98 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        if ((int)v101 >= 12) {
          v102 = 12;
        }
        else {
          v102 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        v103 = *(_DWORD*)(GameData_21d99a8 + 4LL * v98 - 4);
        v104 = *(_DWORD*)(GameData_21d99a8 + 4LL * v102 - 4);
        if (v104 >= v103) {
          v104 = v103;
        }
        if (v103 < 0) {
          v104 = 0;
        }
        *(_WORD*)(a1 + 538) = v104;
        if ((int)v101 < 1) {
          LOBYTE(v105) = 0;
        }
        else {
          v105 = 0;
          v106 = v100[(unsigned int)(v101 - 1)];
          if (v106 >= v104) {
            v106 = v104;
          }
          if (v104 >= *v100) {
            v107 = v106;
          }
          else {
            v107 = *v100;
          }
          while (1) {
            v108 = (unsigned int)(v105 + v101) >> 1;
            v109 = v100[v108];
            if (v107 == v109) {
              break;
            }
            if (v107 < v109) {
              LODWORD(v101) = (unsigned int)(v105 + v101) >> 1;
            }
            else {
              v105 = v108 + 1;
            }
            if (v105 >= (int)v101) {
              goto LABEL_206;
            }
          }
          LOBYTE(v105) = v108 + 1;
        }
      LABEL_206:
        LOBYTE(v97) = 1;
        *(_BYTE*)(a1 + 552) = v105;
      }
    }
    LOBYTE(v122) = (v96 | v97) & 1;
    v118 = &v114;
    v114 = GameData_1f91b68;
    v115 = a1;
    v116 = &v122;
    game_UnitItemList_EachItem(a1 + 828, &v114);
    v110 = (_WORD*)(a1 + 876);
    for (k = 24; k != 0; --k) {
      if (*v110 != 0) {
        if (v118 == nullptr) {
          GameRoutine_60a310(0);
        }
        ((void (*)(__int64 (***)(), _WORD*))(*v118)[6])(v118, v110);
      }
      v110 += 4;
    }
    if (v118 == &v114) {
      v112 = 4;
      goto LABEL_216;
    }
    if (v118 != nullptr) {
      v112 = 5;
    LABEL_216:
      (*v118)[v112]();
    }
  }
  game_Unit_Unknown6c4610(a1);
  game_Unit_CheckEquipment(a1);
  game_Unit_EquipFirstWeapon(a1);
  return Unit_6ddce0_alt1(a1);
}

__int64 Unit_6d2480(__int64 result, __int64 a2, char a3, char a4)
{
  __int64* v4;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  char v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned __int8* v22;
  char* v23;
  int* v24;
  __int64 v25;
  unsigned __int64 v26;
  int v27;
  __int64 v28;
  signed int v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  int v34;
  signed int v35;
  unsigned int v36;
  int v37;
  _QWORD* v38;
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  char v48;
  __int64 v49;
  __int64 v50;
  _BYTE* v51;
  _DWORD* v52;
  __int64 v53;
  _BYTE* v54;
  _BYTE* v55;
  __int64 v56;
  _BYTE* v57;
  _BYTE* v58;
  _BYTE* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  int v66;
  int v67;
  __int64 v68;
  int v69;
  __int64 v70;
  int* v71;
  __int64 v72;
  int v73;
  __int64 v74;
  int v75;
  int v76;
  int v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  _BYTE* v86;
  _DWORD* v87;
  __int64 v88;
  _BYTE* v89;
  _BYTE* v90;
  __int64 v91;
  _BYTE* v92;
  _BYTE* v93;
  _BYTE* v94;
  unsigned __int64 v95;
  int v96;

  if (a2 != 0) {
    v4 = (__int64*)result;
    if ((unsigned int)*(unsigned __int8*)(a2 + 72) - 5 > 1) {
      v9 = *(unsigned __int16*)(a2 + 16);
      v10 = a3;
      v11 = a2;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v9) +
                    73LL) == 17) {
        v12 = a4;
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
        nn_os_UnlockMutex_alt1(&game_g_random_mutex);
        a4 = v12;
        v18 =
            (unsigned __int64)((16 * ((_WORD)v17 -
                                      1000 * (unsigned __int16)((v17 &
                                                                 0x7FFFFFFFu) /
                                                                0x3E8)) +
                                16) &
                                   0x3FF0 |
                               1u)
            << 32;
      }
      else {
        v18 = 0x100000000LL;
      }
      v19 = 0x2000000;
      if ((a4 & 1) == 0) {
        v19 = 0;
      }
      v95 = v19 | v18 | v9;
      result = game_UnitItemList_Add((_WORD*)v4 + 414, &v96, &v95, 0);
      a2 = v11;
      a3 = v10;
      goto LABEL_16;
    }
    if (GameData_21ca428 != 0 && GameData_21ca438 != 0) {
      v6 = *(_QWORD*)a2;
      v7 = GameData_21ca428 - 1;
      if ((GameData_21ca428 & (GameData_21ca428 - 1)) != 0) {
        v8 = *(_QWORD*)a2;
        if (v6 >= GameData_21ca428) {
          v8 = v6 % GameData_21ca428;
        }
      }
      else {
        v8 = v7 & v6;
      }
      v38 = *(_QWORD**)(GameData_21ca420 + 8 * v8);
      if (v38 != nullptr) {
        v39 = (_QWORD*)*v38;
        if (v39 != nullptr) {
          if ((GameData_21ca428 & v7) == 0) {
            while (1) {
              v41 = v39[1];
              if (v41 == v6) {
                if (v39[2] == v6) {
                  goto LABEL_66;
                }
              }
              else if ((v41 & v7) != v8) {
                goto LABEL_16;
              }
              v39 = (_QWORD*)*v39;
              if (v39 == nullptr) {
                goto LABEL_16;
              }
            }
          }
          do {
            v40 = v39[1];
            if (v40 == v6) {
              if (v39[2] == v6) {
              LABEL_66:
                v42 = v39[3];
                if (v42 != 0) {
                  LODWORD(v95) = *(_WORD*)(v42 + 16) & 0xFFF;
                  if ((_DWORD)v95 != 0) {
                    v43 = *(_QWORD*)(result + 1776);
                    v44 = *(_QWORD*)(result + 1784) - v43;
                    if ((int)(v44 >> 2) < 1) {
                      v48 = a3;
                      v49 = a2;
                      v47 = 0;
                    }
                    else {
                      v45 = *(_QWORD*)(GameData_21c99b0 + 64);
                      if ((v44 & 0x1FFFFFFFCLL) == 4) {
                        v46 = 0;
                        v47 = 0;
                      }
                      else {
                        v52 = (_DWORD*)(v43 + 4);
                        v46 = 0;
                        v47 = 0;
                        do {
                          v53 = *(_QWORD*)(v45 + 8LL * (*(v52 - 1) & 0xFFF));
                          v54 = *(_BYTE**)(v53 + 864);
                          if (v54 != nullptr && *v54 != 0) {
                            ++v47;
                          }
                          else {
                            v55 = *(_BYTE**)(v53 + 872);
                            if (v55 != nullptr && *v55 != 0) {
                              ++v47;
                            }
                          }
                          v56 = *(_QWORD*)(v45 + 8LL * (*v52 & 0xFFF));
                          v57 = *(_BYTE**)(v56 + 864);
                          if (v57 != nullptr && *v57 != 0) {
                            ++v47;
                          }
                          else {
                            v58 = *(_BYTE**)(v56 + 872);
                            if (v58 != nullptr && *v58 != 0) {
                              ++v47;
                            }
                          }
                          v46 += 2;
                          v52 += 2;
                        } while (((v44 >> 2) & 0x7FFFFFFE) != v46);
                      }
                      v48 = a3;
                      v49 = a2;
                      if ((v44 & 4) != 0) {
                        v50 =
                            *(_QWORD*)(v45 + 8LL * (*(_DWORD*)(v43 + 4 * v46) &
                                                    0xFFF));
                        v51 = *(_BYTE**)(v50 + 864);
                        if (v51 != nullptr && *v51 != 0) {
                          ++v47;
                        }
                        else {
                          v59 = *(_BYTE**)(v50 + 872);
                          if (v59 != nullptr && *v59 != 0) {
                            ++v47;
                          }
                        }
                      }
                    }
                    result = UnitSkillList_84cc00_alt1(
                        (__int64*)(result + 1360), &v95, 1);
                    if ((result & 1) != 0) {
                      v60 = v4[175];
                      v61 = v4[174];
                      v4[181] = 0;
                      v62 = v60 - v61;
                      v4[180] = 0;
                      if ((int)((unsigned __int64)(v60 - v61) >> 2) >= 1) {
                        v63 = GameData_21c99b0;
                        v64 = (int)(v62 >> 2);
                        v65 = v64 <= 1 ? 1LL : (int)(v62 >> 2);
                        if (v64 >= 2) {
                          v71 = (int*)(v61 + 4);
                          v66 = 0;
                          v67 = 0;
                          v68 = 0;
                          v69 = 0;
                          v70 = 0;
                          do {
                            v70 += 2;
                            v72 = *(_QWORD*)(*(_QWORD*)(v63 + 64) +
                                             8LL * (*(v71 - 1) & 0xFFF));
                            v73 = v69 | (1 << *(_BYTE*)(v72 + 104));
                            *((_WORD*)v4 + 720) = v73;
                            v74 = (1LL << *(_BYTE*)(v72 + 250)) | v68;
                            v4[181] = v74;
                            v75 = (1 << *(_BYTE*)(v72 + 115)) | v67;
                            *((_DWORD*)v4 + 361) = v75;
                            v76 = *(unsigned __int16*)(*(_QWORD*)(v72 + 24) +
                                                       1064LL) |
                                  v66;
                            *((_WORD*)v4 + 721) = v76;
                            v77 = *v71;
                            v71 += 2;
                            v78 = *(_QWORD*)(*(_QWORD*)(v63 + 64) +
                                             8LL * (v77 & 0xFFF));
                            v69 = v73 | (1 << *(_BYTE*)(v78 + 104));
                            *((_WORD*)v4 + 720) = v69;
                            v68 = (1LL << *(_BYTE*)(v78 + 250)) | v74;
                            v4[181] = v68;
                            v67 = (1 << *(_BYTE*)(v78 + 115)) | v75;
                            *((_DWORD*)v4 + 361) = v67;
                            v66 = *(unsigned __int16*)(*(_QWORD*)(v78 + 24) +
                                                       1064LL) |
                                  v76;
                            *((_WORD*)v4 + 721) = v66;
                          } while ((v65 & 0x7FFFFFFFFFFFFFFELL) != v70);
                        }
                        else {
                          LOWORD(v66) = 0;
                          v67 = 0;
                          v68 = 0;
                          LOWORD(v69) = 0;
                          v70 = 0;
                        }
                        if ((v65 & 1) != 0) {
                          v79 = *(_QWORD*)(*(_QWORD*)(v63 + 64) +
                                           8LL * (*(_DWORD*)(v61 + 4 * v70) &
                                                  0xFFF));
                          *((_WORD*)v4 + 720) =
                              v69 | (1 << *(_BYTE*)(v79 + 104));
                          v4[181] = (1LL << *(_BYTE*)(v79 + 250)) | v68;
                          *((_DWORD*)v4 + 361) =
                              (1 << *(_BYTE*)(v79 + 115)) | v67;
                          *((_WORD*)v4 + 721) =
                              *(_WORD*)(*(_QWORD*)(v79 + 24) + 1064LL) | v66;
                        }
                      }
                      result = game_Unit_Unknown6cd8f0_alt1(v4);
                    }
                    v80 = v4[222];
                    a2 = v49;
                    a3 = v48;
                    v81 = v4[223] - v80;
                    if ((int)(v81 >> 2) < 1) {
                      v84 = 0;
                    }
                    else {
                      v82 = *(_QWORD*)(GameData_21c99b0 + 64);
                      if ((v81 & 0x1FFFFFFFCLL) == 4) {
                        v83 = 0;
                        v84 = 0;
                      }
                      else {
                        v87 = (_DWORD*)(v80 + 4);
                        v83 = 0;
                        v84 = 0;
                        do {
                          v88 = *(_QWORD*)(v82 + 8LL * (*(v87 - 1) & 0xFFF));
                          v89 = *(_BYTE**)(v88 + 864);
                          if (v89 != nullptr && *v89 != 0) {
                            ++v84;
                          }
                          else {
                            v90 = *(_BYTE**)(v88 + 872);
                            if (v90 != nullptr && *v90 != 0) {
                              ++v84;
                            }
                          }
                          v91 = *(_QWORD*)(v82 + 8LL * (*v87 & 0xFFF));
                          v92 = *(_BYTE**)(v91 + 864);
                          if (v92 != nullptr && *v92 != 0) {
                            ++v84;
                          }
                          else {
                            v93 = *(_BYTE**)(v91 + 872);
                            if (v93 != nullptr && *v93 != 0) {
                              ++v84;
                            }
                          }
                          v83 += 2;
                          v87 += 2;
                        } while (((v81 >> 2) & 0x7FFFFFFE) != v83);
                      }
                      if ((v81 & 4) != 0) {
                        v85 =
                            *(_QWORD*)(v82 + 8LL * (*(_DWORD*)(v80 + 4 * v83) &
                                                    0xFFF));
                        v86 = *(_BYTE**)(v85 + 864);
                        if (v86 != nullptr && *v86 != 0) {
                          ++v84;
                        }
                        else {
                          v94 = *(_BYTE**)(v85 + 872);
                          if (v94 != nullptr && *v94 != 0) {
                            ++v84;
                          }
                        }
                      }
                    }
                    if (v84 != v47) {
                      *((_WORD*)v4 + 10) |= 0x44u;
                    }
                  }
                }
                break;
              }
            }
            else {
              if (v40 >= GameData_21ca428) {
                v40 %= (unsigned __int64)GameData_21ca428;
              }
              if (v40 != v8) {
                break;
              }
            }
            v39 = (_QWORD*)*v39;
          } while (v39 != nullptr);
        }
      }
    }
  LABEL_16:
    if ((a3 & 1) != 0 && *(unsigned __int8*)(a2 + 72) <= 7u) {
      v20 = *(_QWORD*)(a2 + 24);
      v21 = *(unsigned __int8**)(v20 + 488);
      v22 = *(unsigned __int8**)(v20 + 496);
      if (v21 != v22) {
        v23 = (char*)v4 + 540;
        v24 = (int*)GameData_21d99a8;
        v25 = GameData_21d99a8 - 4;
        v26 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        if ((int)v26 >= 12) {
          v27 = 12;
        }
        else {
          v27 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
        }
        v28 = GameData_21d99a8 + 4LL * v27;
        do {
          v30 = *v21;
          v31 = v21[1];
          result = (unsigned __int8)v23[v30];
          if ((unsigned int)result < v31) {
            LODWORD(result) = *(_DWORD*)(v28 - 4);
            if (v31 >= (int)v26) {
              v31 = v26;
            }
            v32 = *(_DWORD*)(v25 + 4LL * v31);
            if ((int)result >= v32) {
              LODWORD(result) = v32;
            }
            if (v32 >= 0) {
              result = (unsigned int)result;
            }
            else {
              result = 0;
            }
            *((_WORD*)v4 + v30 + 257) = result;
            if ((int)v26 < 1) {
              LOBYTE(v29) = 0;
            }
            else {
              v33 = v24[(unsigned int)(v26 - 1)];
              v34 = *v24;
              v29 = 0;
              if (v33 >= (int)result) {
                v33 = result;
              }
              if ((int)result >= v34) {
                result = (unsigned int)v33;
              }
              else {
                result = (unsigned int)v34;
              }
              v35 = v26;
              while (1) {
                v36 = (unsigned int)(v29 + v35) >> 1;
                v37 = v24[v36];
                if ((_DWORD)result == v37) {
                  break;
                }
                if ((int)result < v37) {
                  v35 = (unsigned int)(v29 + v35) >> 1;
                }
                else {
                  v29 = v36 + 1;
                }
                if (v29 >= v35) {
                  goto LABEL_24;
                }
              }
              LOBYTE(v29) = v36 + 1;
            }
          LABEL_24:
            v23[v30] = v29;
          }
          v21 += 2;
        } while (v21 != v22);
      }
    }
  }
  return result;
}

__int64 Unit_6d8180(__int64 a1, __int64 a2, int a3)
{
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 result;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct __attribute__((packed, aligned(8))) {
    _QWORD v20[2];
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    int v30;
    __int64 v31;
    int v32;
    char v33;
    int v34;
    char gap109_[3];
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
  } v20_;

  v20_.v20[0] = a2;
  v20_.v20[1] = 0;
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v23 = 0;
  v20_.v24 = 0;
  v20_.v25 = 0;
  v20_.v26 = 0;
  v20_.v27 = 0;
  v20_.v28 = 0;
  v20_.v29 = 0;
  v20_.v31 = 0x3F80000000000000LL;
  if (game_GameModeData_instance_ != 0) {
    v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v4 = 0;
  }
  v20_.v32 = v4;
  v20_.v35 = 0;
  v20_.v36 = 0;
  v20_.v37 = 0;
  v20_.v38 = 0;
  v20_.v39 = 0;
  v20_.v34 = 262;
  if (a3 != 0) {
    goto LABEL_18;
  }
  if (game_GameModeData_instance_ == 0) {
    v5 = 0;
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) != 0) {
      goto LABEL_18;
    }
    goto LABEL_11;
  }
  v5 = *(_DWORD*)(game_GameModeData_instance_ + 68);
  v6 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v6 != 0) {
    v5 += *(char*)(v6 + 128);
  }
  a3 = *(unsigned __int8*)(a2 + 442);
  if (*(_BYTE*)(a2 + 442) == 0) {
  LABEL_11:
    if (*(_BYTE*)(a2 + 443) != 0) {
      v7 = v5 + *(char*)(a2 + 443);
      if (v7 <= 1) {
        v7 = 1;
      }
      if (v7 >= 99) {
        a3 = 99;
      }
      else {
        a3 = v7;
      }
    }
    else {
      a3 = v5;
    }
  }
LABEL_18:
  v8 = *(unsigned __int8*)(a2 + 444);
  if (a3 > v8) {
    v8 = a3;
  }
  v20_.v30 = v8;
  v20_.v33 = 1;
  GameRoutine_6e4de0(v20_.v20);
  GameRoutine_6e50e0(v20_.v20);
  GameRoutine_6e5480(v20_.v20);
  GameRoutine_6c3050(a1);
  GameRoutine_6d1740(a1, v20_.v20);
  result = game_Unit_Unknown6d2380(a1);
  v10 = *(_DWORD*)(a1 + 416);
  if ((v10 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v10 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0_alt1(a1);
    result = GameRoutine_6c6ec0_alt1(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v20_.v35 != 0) {
    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v20_.v36 = v20_.v35;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v12 + v13, v20_.v35);
  }
  if (v20_.v27 != 0) {
    v14 = *v11;
    v20_.v28 = v20_.v27;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v14 + v15, v20_.v27);
  }
  if (v20_.v24 != 0) {
    v16 = *v11;
    v20_.v25 = v20_.v24;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v16 + v17, v20_.v24);
  }
  if (v20_.v21 != 0) {
    v18 = *v11;
    v20_.v22 = v20_.v21;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(v18 + v19, v20_.v21);
  }
  return result;
}

void Unit_6d8390(unsigned __int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  __int64 v16;
  int v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    _QWORD v28[2];
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    int v38;
    int v39;
    int v40;
    int v41;
    char v42;
    char v43;
    __int16 v44;
    char v45;
    char gap109_[3];
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
  } v28_;
  struct {
    __int64 v51;
    void* v52;
    __int64 v53;
  } v51_;
  __int64 v54;

  if (a3 == 0) {
    a3 = GameRoutine_7152e0_alt2();
  }
  v28_.v28[0] = a2;
  v28_.v28[1] = 0;
  v28_.v29 = 0;
  v28_.v30 = 0;
  v28_.v31 = 0;
  v28_.v32 = 0;
  v28_.v33 = 0;
  v28_.v34 = 0;
  v28_.v35 = 0;
  v28_.v36 = 0;
  v28_.v37 = 0;
  v28_.v40 = 1065353216;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v5 = 0;
  }
  v28_.v41 = v5;
  v28_.v45 = 0;
  v28_.v46 = 0;
  v28_.v47 = 0;
  v28_.v48 = 0;
  v28_.v49 = 0;
  v28_.v50 = 0;
  v28_.v44 = 1;
  if (a3 == 0) {
    if (game_GameModeData_instance_ == 0) {
      v6 = 0;
      a3 = *(unsigned __int8*)(a2 + 442);
      if (*(_BYTE*)(a2 + 442) != 0) {
        goto LABEL_20;
      }
      goto LABEL_13;
    }
    v6 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    v7 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v7 != 0) {
      v6 += *(char*)(v7 + 128);
    }
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) == 0) {
    LABEL_13:
      if (*(_BYTE*)(a2 + 443) != 0) {
        v8 = v6 + *(char*)(a2 + 443);
        if (v8 <= 1) {
          v8 = 1;
        }
        if (v8 >= 99) {
          a3 = 99;
        }
        else {
          a3 = v8;
        }
      }
      else {
        a3 = v6;
      }
    }
  }
LABEL_20:
  if (a3 <= *(unsigned __int8*)(a2 + 444)) {
    v9 = *(unsigned __int8*)(a2 + 444);
  }
  else {
    v9 = a3;
  }
  v28_.v38 = v9;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
      v10 = 2;
    }
    else {
      v10 = 3;
    }
  }
  else {
    v10 = 3;
  }
  v11 = *(_QWORD*)(a2 + 304);
  v28_.v43 = v10;
  v28_.v42 = 2;
  v51_.v52 = &GameData_1ad27ed;
  v12 = game_HashString_alt1((__int64)&GameData_1ad27ed);
  v13 = game_GameModeData_instance_;
  v51_.v51 = v12;
  if (game_GameModeData_instance_ != 0) {
    v14 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v51_.v51);
    if (v14 != 0) {
      v13 = *(_DWORD*)(v14 + 32);
    }
    else {
      v13 = 0;
    }
  }
  v28_.v39 = v13;
  v51_.v52 = &GameData_1ae1c3a;
  v15 = 0x0.0p+0f;
  v51_.v51 = game_HashString_alt1((__int64)&GameData_1ae1c3a);
  if (game_GameModeData_instance_ != 0) {
    v16 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v51_.v51);
    if (v16 != 0) {
      v15 = (float)*(int*)(v16 + 32) * 0x1.47ae140000000p-7f;
    }
  }
  v28_.v40 = LODWORD(v15);
  v54 = v11;
  game_127cec0((void*)(&v51_.v51), (__int64)&v54, v9);
  v28_.v48 = v51_.v53;
  v28_.v46 = v51_.v51;
  v28_.v47 = (__int64)v51_.v52;
  HIBYTE(v28_.v44) = 1;
  game_6e4de0_alt2(v28_.v28);
  game_6e50e0_alt1((__int64)v28_.v28);
  GameRoutine_6e5480_alt2(v28_.v28);
  GameRoutine_6c3050_alt2(a1);
  game_Unit_AutoGrowMasteryLevel_alt1(a1, v28_.v28);
  game_Unit_Unknown6d2380_alt1(a1);
  v18 = *(_DWORD*)(a1 + 416);
  if ((v18 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v18 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v28_.v46 != 0) {
    v20 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v28_.v47 = v28_.v46;
    v21 = 128;
    if (*(_QWORD*)(v20 + 200) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v20 + v21, v28_.v46);
  }
  if (v28_.v35 != 0) {
    v22 = *v19;
    v28_.v36 = v28_.v35;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v22 + v23, v28_.v35);
  }
  if (v28_.v32 != 0) {
    v24 = *v19;
    v28_.v33 = v28_.v32;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v24 + v25, v28_.v32);
  }
  if (v28_.v29 != 0) {
    v26 = *v19;
    v28_.v30 = v28_.v29;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v26 + v27, v28_.v29);
  }
}

__int64 Unit_6d86a0(__int64 a1, __int64 a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  float v14;
  __int64 v15;
  void* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _WORD* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  unsigned __int8* v42;
  unsigned __int8* v43;
  int* v44;
  __int64 v45;
  unsigned __int64 v46;
  int v47;
  __int64 v48;
  signed int v49;
  __int64 v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  signed int v56;
  unsigned int v57;
  int v58;
  int v59;
  unsigned int v60;
  int v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  char v70;
  char v71;
  int v72;
  __int64 result;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  struct {
    __int64 v80;
    void* v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    int v91;
    int v92;
    float v93;
    int v94;
    __int16 v95;
    __int16 v96;
    char v97;
    char gap117_[3];
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
    __int64 v102;
  } v80_;
  __int64 v103;
  struct {
    __int64 v104;
    _BYTE* v105;
    _BYTE* v106;
    __int64 v107;
    __int64 v108;
    __int64 v109;
    __int64 v110;
    __int64 v111;
    __int64 v112;
    __int64 v113;
  } v104_;
  int v114;

  if (a3 == 0) {
    v4 = a2;
    v80_.v81 = &GameData_1aed5ad;
    v80_.v80 = game_HashString_alt1((__int64)&GameData_1aed5ad);
    if (game_GameModeData_instance_ != 0 &&
        (v5 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v80_.v80)) != 0) {
      a3 = *(_DWORD*)(v5 + 32);
    }
    else {
      a3 = 0;
    }
    a2 = v4;
  }
  v80_.v80 = a2;
  v80_.v81 = nullptr;
  v80_.v82 = 0;
  v80_.v83 = 0;
  v80_.v84 = 0;
  v80_.v85 = 0;
  v80_.v86 = 0;
  v80_.v87 = 0;
  v80_.v88 = 0;
  v80_.v89 = 0;
  v80_.v90 = 0;
  if (game_GameModeData_instance_ == 0) {
    v80_.v94 = 0;
    v80_.v98 = 0;
    v80_.v99 = 0;
    v80_.v100 = 0;
    v80_.v101 = 0;
    v80_.v102 = 0;
    v80_.v96 = 1;
    if (a3 != 0) {
      goto LABEL_22;
    }
    v7 = 0;
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) != 0) {
      goto LABEL_22;
    }
    goto LABEL_15;
  }
  v6 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  v80_.v98 = 0;
  v80_.v99 = 0;
  v80_.v100 = 0;
  v80_.v101 = 0;
  v80_.v102 = 0;
  v80_.v94 = v6;
  v80_.v96 = 1;
  if (a3 == 0) {
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    v8 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v8 != 0) {
      v7 += *(char*)(v8 + 128);
    }
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) == 0) {
    LABEL_15:
      if (*(_BYTE*)(a2 + 443) != 0) {
        v9 = v7 + *(char*)(a2 + 443);
        if (v9 <= 1) {
          v9 = 1;
        }
        if (v9 >= 99) {
          a3 = 99;
        }
        else {
          a3 = v9;
        }
      }
      else {
        a3 = v7;
      }
    }
  }
LABEL_22:
  v10 = *(unsigned __int8*)(a2 + 444);
  v104_.v105 = &GameData_1a89036;
  if (a3 > v10) {
    v10 = a3;
  }
  v80_.v91 = v10;
  v80_.v95 = 771;
  v11 = game_HashString_alt1((__int64)&GameData_1a89036);
  v12 = game_GameModeData_instance_;
  v104_.v104 = v11;
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v104_.v104);
    if (v13 != 0) {
      v12 = *(_DWORD*)(v13 + 32);
    }
    else {
      v12 = 0;
    }
  }
  v80_.v92 = v12;
  v104_.v105 = &GameData_1ac6923;
  v14 = 0x0.0p+0f;
  v104_.v104 = game_HashString_alt1((__int64)&GameData_1ac6923);
  if (game_GameModeData_instance_ != 0) {
    v15 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v104_.v104);
    if (v15 != 0) {
      v14 = (float)*(int*)(v15 + 32) * 0x1.47ae140000000p-7f;
    }
  }
  v80_.v93 = v14;
  v80_.v97 = 1;
  game_6e4de0((unsigned __int64*)&v80_.v80);
  game_6e50e0((__int64)&v80_.v80);
  GameRoutine_6e5480_alt1((__int64)&v80_.v80);
  GameRoutine_6c3050_alt2(a1);
  game_Unit_AutoGrowMasteryLevel(a1, &v80_.v80);
  v104_.v104 = a1;
  v104_.v105 = nullptr;
  v104_.v106 = nullptr;
  v104_.v107 = 0;
  v104_.v108 = 0;
  v104_.v109 = 0;
  v104_.v110 = 0;
  v104_.v111 = 0;
  v104_.v112 = 0;
  v104_.v113 = 0;
  GameRoutine_12c23e0(&v104_.v104);
  v21 = v104_.v105;
  v22 = v104_.v106 - v104_.v105;
  if (v104_.v106 == v104_.v105) {
    v24 = 0;
    v23 = 0;
  }
  else {
    if (v22 < 0) {
      GameRoutine_6e5c60();
    }
    v23 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v22, 16,
                                              0);
    v24 = v23 + v22;
    memcpy(v23, v21, v22);
  }
  v25 = (_WORD*)(a1 + 828);
  *(_QWORD*)(a1 + 1052) = 0;
  *(_QWORD*)(a1 + 1060) = 0;
  *(_QWORD*)(a1 + 1036) = 0;
  *(_QWORD*)(a1 + 1044) = 0;
  *(_QWORD*)(a1 + 1020) = 0;
  *(_QWORD*)(a1 + 1028) = 0;
  *(_QWORD*)(a1 + 1004) = 0;
  *(_QWORD*)(a1 + 1012) = 0;
  *(_QWORD*)(a1 + 988) = 0;
  *(_QWORD*)(a1 + 996) = 0;
  *(_QWORD*)(a1 + 972) = 0;
  *(_QWORD*)(a1 + 980) = 0;
  *(_QWORD*)(a1 + 956) = 0;
  *(_QWORD*)(a1 + 964) = 0;
  *(_QWORD*)(a1 + 940) = 0;
  *(_QWORD*)(a1 + 948) = 0;
  *(_QWORD*)(a1 + 924) = 0;
  *(_QWORD*)(a1 + 932) = 0;
  *(_QWORD*)(a1 + 908) = 0;
  *(_QWORD*)(a1 + 916) = 0;
  *(_QWORD*)(a1 + 892) = 0;
  *(_QWORD*)(a1 + 900) = 0;
  *(_QWORD*)(a1 + 876) = 0;
  *(_QWORD*)(a1 + 884) = 0;
  *(_QWORD*)(a1 + 860) = 0;
  *(_QWORD*)(a1 + 868) = 0;
  *(_QWORD*)(a1 + 844) = 0;
  *(_QWORD*)(a1 + 852) = 0;
  v26 = GameData_212c878[0];
  *(_QWORD*)(a1 + 828) = 0;
  *(_QWORD*)(a1 + 836) = 0;
  if ((int)((unsigned __int64)(v24 - v23) >> 3) >= 1) {
    v27 = a1 + 540;
    v28 = ((unsigned __int64)(v24 - v23) >> 3) & 0x7FFFFFFF;
    v29 = a1 + 514;
    v30 = 0;
    v79 = a1;
    do {
      v31 = *(_QWORD*)(v23 + 8 * v30);
      v103 = 0;
      if (v31 != 0) {
        v32 = *v26;
        v33 = *(unsigned __int16*)(v31 + 16);
        HIDWORD(v103) = 1;
        v34 = *(_QWORD*)(v32 + 64);
        LOWORD(v103) = v33;
        if (*(_BYTE*)(*(_QWORD*)(v34 + 8 * v33) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v35 = game_map_MapRandom_instance__ptr[0];
          a1 = v79;
          v36 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          v37 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v38 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v35 + 1) = v37;
          v39 = (v36 >> 8) ^ (v38 >> 19) ^ v36 ^ v38;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35) = v38;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v35 + 4) = v39;
          nn_os_UnlockMutex_alt1(&game_g_random_mutex);
          HIDWORD(v103) =
              HIDWORD(v103) & 0xFFFFC00F |
              (16 *
               (((16 * (v39 - 1000 * ((v39 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      game_UnitItemList_Add(v25, &v114, &v103, 0);
      if ((*(_QWORD*)(v104_.v108 + 8 * (v30 >> 6)) & (1LL << v30)) != 0) {
        v40 = *(_QWORD*)(v23 + 8 * v30);
        if (v40 != 0 && *(unsigned __int8*)(v40 + 72) <= 7u) {
          v41 = *(_QWORD*)(v40 + 24);
          v42 = *(unsigned __int8**)(v41 + 488);
          v43 = *(unsigned __int8**)(v41 + 496);
          if (v42 != v43) {
            v44 = (int*)GameData_21d99a8;
            v45 = GameData_21d99a8 - 4;
            v46 = (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
            if ((int)v46 >= 12) {
              v47 = 12;
            }
            else {
              v47 =
                  (unsigned __int64)(GameData_21d99b0 - GameData_21d99a8) >> 2;
            }
            v48 = GameData_21d99a8 + 4LL * v47;
            do {
              v50 = *v42;
              v51 = v42[1];
              if (*(unsigned __int8*)(v27 + v50) < (unsigned int)v51) {
                v52 = *(_DWORD*)(v48 - 4);
                if (v51 >= (int)v46) {
                  v51 = v46;
                }
                v53 = *(_DWORD*)(v45 + 4LL * v51);
                if (v52 >= v53) {
                  v52 = v53;
                }
                if (v53 < 0) {
                  v52 = 0;
                }
                *(_WORD*)(v29 + 2 * v50) = v52;
                if ((int)v46 < 1) {
                  LOBYTE(v49) = 0;
                }
                else {
                  v54 = v44[(unsigned int)(v46 - 1)];
                  v49 = 0;
                  if (v54 >= v52) {
                    v54 = v52;
                  }
                  if (v52 >= *v44) {
                    v55 = v54;
                  }
                  else {
                    v55 = *v44;
                  }
                  v56 = v46;
                  while (1) {
                    v57 = (unsigned int)(v49 + v56) >> 1;
                    v58 = v44[v57];
                    if (v55 == v58) {
                      break;
                    }
                    if (v55 < v58) {
                      v56 = (unsigned int)(v49 + v56) >> 1;
                    }
                    else {
                      v49 = v57 + 1;
                    }
                    if (v49 >= v56) {
                      goto LABEL_51;
                    }
                  }
                  LOBYTE(v49) = v57 + 1;
                }
              LABEL_51:
                *(_BYTE*)(v27 + v50) = v49;
              }
              v42 += 2;
            } while (v42 != v43);
          }
        }
      }
      if ((*(_QWORD*)(v104_.v111 + 8 * (v30 >> 6)) & (1LL << v30)) != 0) {
        v59 = *(_WORD*)(a1 + 828) != 0;
        if (*(_WORD*)(a1 + 836) != 0) {
          ++v59;
        }
        if (*(_WORD*)(a1 + 844) != 0) {
          ++v59;
        }
        if (*(_WORD*)(a1 + 852) != 0) {
          ++v59;
        }
        if (*(_WORD*)(a1 + 860) != 0) {
          ++v59;
        }
        if (*(_WORD*)(a1 + 868) != 0) {
          ++v59;
        }
        if (v59 != 0) {
          v60 = v59 - 1;
          if (UnitItem_6e8bc0(&v25[4 * (v59 - 1)], a1) &&
              (game_UnitItemList_Equip((__int64)v25, v60) & 1) != 0) {
            v61 = *(_DWORD*)(a1 + 416);
            if ((v61 & 0x10000000) == 0) {
              *(_DWORD*)(a1 + 416) = v61 | 0x10000000;
              game_6c51e0(a1);
              GameRoutine_6c6da0(a1);
              game_6c6ec0(a1);
              *(_DWORD*)(a1 + 416) &= ~0x10000000u;
            }
            game_UnitActor_TryReload_alt1((_QWORD*)a1);
          }
        }
      }
      ++v30;
    } while (v30 != v28);
  }
  if (v23 != 0) {
    v62 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v62, v23);
  }
  if (v104_.v111 != 0) {
    v63 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v63, v104_.v111);
  }
  if (v104_.v108 != 0) {
    v64 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v64, v104_.v108);
  }
  if (v104_.v105 != nullptr) {
    v104_.v106 = v104_.v105;
    v65 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v65, v104_.v105);
  }
  v66 = *v26;
  v67 = 0;
  while (1) {
    v68 = a1 + v67;
    if (*(_WORD*)(a1 + v67 + 828) != 0 && (*(_BYTE*)(v68 + 831) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v66 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v67 +
                                                                  828)) +
                            72LL) < 8u) {
      break;
    }
    v69 = *(unsigned __int16*)(v68 + 836);
    if (v69 != 0 && (*(_BYTE*)(a1 + v67 + 839) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v66 + 64) + 8 * v69) + 72LL) <
            8u) {
      break;
    }
    if (*(_WORD*)(a1 + v67 + 844) != 0 &&
        (*(_BYTE*)(a1 + v67 + 847) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v66 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v67 +
                                                                  844)) +
                            72LL) < 8u) {
      break;
    }
    v67 += 24;
    if (v67 == 240) {
      game_Unit_CheckEquipment_alt1(a1);
      game_Unit_EquipFirstWeapon_alt1(a1);
      Unit_6ddce0(a1);
      break;
    }
  }
  v70 = game_UnitItemList_Sort_alt1((__int64)v25, 0, 6);
  v71 = game_UnitItemList_Sort_alt1((__int64)v25, 6u, 24);
  if ((v70 & 1) != 0 || (v71 & 1) != 0) {
    v72 = *(_DWORD*)(a1 + 416);
    if ((v72 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v72 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  result = game_Unit_Unknown6d2380_alt1(a1);
  v74 = *(_DWORD*)(a1 + 416);
  if ((v74 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v74 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  if (v80_.v98 != 0) {
    v80_.v99 = v80_.v98;
    v75 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v75 = 56;
    }
    result =
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v75, v80_.v98);
  }
  if (v80_.v88 != 0) {
    v80_.v89 = v80_.v88;
    v76 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v76 = 56;
    }
    result =
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v76, v80_.v88);
  }
  if (v80_.v85 != 0) {
    v80_.v86 = v80_.v85;
    v77 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v77 = 56;
    }
    result =
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v77, v80_.v85);
  }
  if (v80_.v82 != 0) {
    v80_.v83 = v80_.v82;
    v78 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v78 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v78,
                                         v80_.v82);
  }
  return result;
}

__int64 Unit_6d9000(__int64 a1)
{
  int v1;
  int v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64* v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  char v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  unsigned __int8* v29;
  int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  __int64* v38;
  int v39;
  unsigned int v40;
  unsigned int v41;
  int v42;
  unsigned int v43;
  char v44;
  unsigned __int64 v46;
  char v47;
  bool v48;
  int v49;
  unsigned __int64 v50;
  char v51;
  int v52;
  int v54;
  char v55;
  int v56;
  int v58;
  int v59;
  int v61;
  unsigned __int64 v62;
  unsigned __int64* v63;
  __int64* v64;
  unsigned __int64 v65;
  unsigned __int64* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  unsigned __int64* v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int8* v73;
  __int64 v74;
  bool v75;
  __int64 v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  unsigned __int8* v81;
  int v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  unsigned int v88;
  __int64 v89;
  __int64* v90;
  int v91;
  unsigned int v92;
  unsigned int v93;
  int v94;
  __int64 v95;
  __int64 v97;
  __int64* v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  unsigned __int8* v102;
  int v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  int v108;
  unsigned int v109;
  __int64 v110;
  __int64* v111;
  int v112;
  unsigned int v113;
  unsigned int v114;
  int v115;
  unsigned int v116;
  unsigned int v117;
  unsigned int v118;
  __int64 v119;
  int v120;
  __int64* v121;
  int v122;
  unsigned int v123;
  unsigned int v124;
  int v125;
  unsigned int v126;
  char v127;
  unsigned int v128;
  __int64 v129;
  int v130;
  __int64* v131;
  int v132;
  unsigned int v133;
  unsigned int v134;
  int v135;
  unsigned int v136;
  char v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  unsigned int v141;
  char v142;
  bool v143;
  unsigned int v144;
  char v146;
  char v147;
  char v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  unsigned int v152;
  char v153;
  unsigned int v154;
  char v156;
  char v157;
  char v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned int v162;
  char v163;
  unsigned int v164;
  char v166;
  char v167;
  char v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  unsigned int v172;
  char v173;
  unsigned int v174;
  char v176;
  char v177;
  char v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned int v182;
  char v183;
  unsigned int v184;
  char v186;
  char v187;
  char v188;
  __int64 v189;
  __int64 v190;
  __int64 v191;
  unsigned int v192;
  char v193;
  unsigned int v194;
  char v196;
  char v197;
  char v198;
  __int64 result;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  char v204;
  int v205;
  int v206;
  int v207;
  char* v208;
  unsigned __int16* v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  int v214;
  int v215;
  __int64 v216;
  __int64 v217;
  __int16 v218;
  unsigned __int64 v219;
  unsigned __int64 v220;
  unsigned __int64 v221;
  unsigned __int64 v222;
  unsigned __int64 v223;

  if (game_GameModeData_instance_ != 0) {
    v214 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  }
  else {
    v214 = 0;
  }
  v209 = (unsigned __int16*)(a1 + 828);
  if ((*(_BYTE*)(a1 + 831) & 0x41) == 0x40) {
    *(_QWORD*)v209 = 0;
  }
  if ((*(_BYTE*)(a1 + 839) & 0x41) == 0x40) {
    *(_QWORD*)(a1 + 836) = 0;
  }
  if ((*(_BYTE*)(a1 + 847) & 0x41) == 0x40) {
    *(_QWORD*)(a1 + 844) = 0;
  }
  if ((*(_BYTE*)(a1 + 855) & 0x41) == 0x40) {
    *(_QWORD*)(a1 + 852) = 0;
  }
  if ((*(_BYTE*)(a1 + 863) & 0x41) == 0x40) {
    *(_QWORD*)(a1 + 860) = 0;
  }
  if ((*(_BYTE*)(a1 + 871) & 0x41) == 0x40) {
    *(_QWORD*)(a1 + 868) = 0;
  }
  game_UnitItemList_Sort_alt1((__int64)v209, 0, 6);
  game_UnitItemList_Sort_alt1((__int64)v209, 6u, 24);
  if (*(_WORD*)(a1 + 828) != 0) {
    v1 = (*(_WORD*)(a1 + 836) != 0) + 1;
  }
  else {
    v1 = *(_WORD*)(a1 + 836) != 0;
  }
  if (*(_WORD*)(a1 + 844) != 0) {
    ++v1;
  }
  if (*(_WORD*)(a1 + 852) != 0) {
    ++v1;
  }
  if (*(_WORD*)(a1 + 860) != 0) {
    ++v1;
  }
  if (*(_WORD*)(a1 + 868) != 0) {
    v2 = v1 + 1;
  }
  else {
    v2 = v1;
  }
  if (GameData_21c9f70 != 0) {
    v3 = *(__int64**)(GameData_21c9f70 + 432);
    v4 = *(__int64**)(GameData_21c9f70 + 440);
    if (v3 != v4) {
    LABEL_30:
      v5 = *v3;
      v6 = *(unsigned __int16*)(*v3 + 40);
      if (*(_WORD*)(*v3 + 40) != 0) {
        v7 = *(unsigned __int8**)(v5 + 48);
        while (1) {
          v8 = *v7++;
          if (v214 == v8) {
            break;
          }
          if (--v6 == 0) {
            if (++v3 != v4) {
              goto LABEL_30;
            }
            goto LABEL_52;
          }
        }
        if (v5 == 0) {
          goto LABEL_52;
        }
      }
      v210 = *(unsigned __int16*)(v5 + 56);
      if (*(_WORD*)(v5 + 56) != 0) {
        v9 = 0;
        v10 = *v3;
        do {
          v11 = *(_QWORD*)(*(_QWORD*)(v5 + 64) + 16 * v9 + 8);
          if ((((0x10000000000LL << *(_BYTE*)(v11 + 72)) |
                (1LL << *(_BYTE*)(v11 + 73))) &
               0xFFBFFFFFFFA39FFFLL) != 0) {
            v12 = *(_QWORD*)(v5 + 80);
            v13 = *(unsigned __int16*)(v5 + 72) - 1;
            if ((int)v9 < v13) {
              v13 = v9;
            }
            v14 = *(unsigned __int8*)(v12 + v13);
            if (*(_BYTE*)(v12 + v13) != 0) {
              do {
                while (1) {
                  v15 = *(unsigned __int16*)(v11 + 16);
                  v219 = 0x100000000LL;
                  LOWORD(v219) = v15;
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8 * v15) +
                                73LL) == 17) {
                    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                    v16 = v2;
                    v17 = game_map_MapRandom_instance__ptr[0];
                    v18 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v19 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v20 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v17 + 1) = v18;
                    v21 = (v20 >> 8) ^ (v19 >> 19) ^ v20 ^ v19;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17) = v19;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v17 + 4) =
                        v21;
                    nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
                    v22 = v21 - 1000 * ((v21 & 0x7FFFFFFFu) / 0x3E8);
                    v2 = v16;
                    HIDWORD(v219) = HIDWORD(v219) & 0xFFFFC00F |
                                    (16 * (((16 * v22 + 16) >> 4) & 0x3FF));
                    v23 = BYTE3(v219) | 0x40;
                  }
                  else {
                    v23 = 64;
                  }
                  BYTE3(v219) = v23;
                  if (v2 <= 5) {
                    break;
                  }
                  game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
                      (void*)((__int64)&v217),
                      *(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL),
                      (unsigned __int16*)&v219, 1);
                  if (--v14 == 0) {
                    goto LABEL_39;
                  }
                }
                game_UnitItemList_Add(v209, &v217, &v219, 0);
                ++v2;
                --v14;
              } while (v14 != 0);
            }
          }
        LABEL_39:
          ++v9;
          v5 = v10;
        } while (v9 != v210);
      }
    }
  }
LABEL_52:
  if (game_GameModeData_instance_ != 0 &&
      (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) - 1) <=
          7u &&
      ((0xBFu >> (*(_BYTE*)(game_GameModeData_instance_ + 15) - 1)) & 1) != 0 &&
      GameData_21c9f70 != 0) {
    v24 =
        GameData_21c9f70 +
        24LL *
            *(_QWORD*)&GameData_1b38ee8
                [8 *
                 (unsigned __int8)(*(_BYTE*)(game_GameModeData_instance_ + 15) -
                                   1)];
    v25 = *(__int64**)(v24 + 264);
    v26 = *(__int64**)(v24 + 272);
    if (v25 != v26) {
    LABEL_57:
      v27 = *v25;
      v28 = *(unsigned __int16*)(*v25 + 40);
      if (*(_WORD*)(*v25 + 40) != 0) {
        v29 = *(unsigned __int8**)(v27 + 48);
        while (1) {
          v30 = *v29++;
          if (v214 == v30) {
            break;
          }
          if (--v28 == 0) {
            if (++v25 != v26) {
              goto LABEL_57;
            }
            goto LABEL_79;
          }
        }
        if (v27 == 0) {
          goto LABEL_79;
        }
      }
      v211 = *(unsigned __int16*)(v27 + 56);
      if (*(_WORD*)(v27 + 56) != 0) {
        v31 = 0;
        do {
          v32 = *(_QWORD*)(*(_QWORD*)(v27 + 64) + 16 * v31 + 8);
          if ((((0x10000000000LL << *(_BYTE*)(v32 + 72)) |
                (1LL << *(_BYTE*)(v32 + 73))) &
               0xFFBFFFFFFFA39FFFLL) != 0) {
            v33 = *(_QWORD*)(v27 + 80);
            v34 = *(unsigned __int16*)(v27 + 72) - 1;
            if ((int)v31 < v34) {
              v34 = v31;
            }
            v35 = *(unsigned __int8*)(v33 + v34);
            if (*(_BYTE*)(v33 + v34) != 0) {
              do {
                while (1) {
                  v36 = *(unsigned __int16*)(v32 + 16);
                  v219 = 0x100000000LL;
                  LOWORD(v219) = v36;
                  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                      64) +
                                           8 * v36) +
                                73LL) == 17) {
                    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                    v37 = v2;
                    v38 = game_map_MapRandom_instance__ptr[0];
                    v39 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v40 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v41 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v38 + 1) = v39;
                    v42 = (v41 >> 8) ^ (v40 >> 19) ^ v41 ^ v40;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v38) = v40;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v38 + 4) =
                        v42;
                    nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
                    v43 = v42 - 1000 * ((v42 & 0x7FFFFFFFu) / 0x3E8);
                    v2 = v37;
                    HIDWORD(v219) = HIDWORD(v219) & 0xFFFFC00F |
                                    (16 * (((16 * v43 + 16) >> 4) & 0x3FF));
                    v44 = BYTE3(v219) | 0x40;
                  }
                  else {
                    v44 = 64;
                  }
                  BYTE3(v219) = v44;
                  if (v2 <= 5) {
                    break;
                  }
                  game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
                      (void*)((__int64)&v217),
                      *(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL),
                      (unsigned __int16*)&v219, 1);
                  if (--v35 == 0) {
                    goto LABEL_66;
                  }
                }
                game_UnitItemList_Add(v209, &v217, &v219, 0);
                ++v2;
                --v35;
              } while (v35 != 0);
            }
          }
        LABEL_66:
          ++v31;
        } while (v31 != v211);
      }
    }
  }
LABEL_79:
  LOBYTE(v219) = 0;
  LOBYTE(v220) = 1;
  if (*(_BYTE*)(a1 + 540) == 0 || *(char*)(a1 + 812) < 0) {
    LODWORD(v46) = -1;
  }
  else {
    LODWORD(v46) = *(unsigned __int16*)(a1 + 514);
  }
  v47 = *(_BYTE*)(a1 + 542);
  v48 = *(_BYTE*)(a1 + 541) == 0 || *(char*)(a1 + 813) < 0;
  v49 = *(unsigned __int16*)(a1 + 516);
  HIDWORD(v219) = v46;
  if (v48) {
    LODWORD(v50) = -1;
  }
  else {
    LODWORD(v50) = v49;
  }
  v75 = v47 == 0;
  v51 = *(_BYTE*)(a1 + 543);
  LOBYTE(v221) = 2;
  v52 = *(char*)(a1 + 814);
  HIDWORD(v220) = v50;
  if (v75 || v52 < 0) {
    v54 = -1;
  }
  else {
    v54 = *(unsigned __int16*)(a1 + 518);
  }
  v75 = v51 == 0;
  v55 = *(_BYTE*)(a1 + 544);
  LOBYTE(v222) = 3;
  v56 = *(char*)(a1 + 815);
  HIDWORD(v221) = v54;
  if (v75 || v56 < 0) {
    v58 = -1;
  }
  else {
    v58 = *(unsigned __int16*)(a1 + 520);
  }
  LOBYTE(v223) = 4;
  v59 = *(char*)(a1 + 816);
  HIDWORD(v222) = v58;
  if (v55 == 0 || v59 < 0) {
    v61 = -1;
  }
  else {
    v61 = *(unsigned __int16*)(a1 + 522);
  }
  HIDWORD(v223) = v61;
  if ((int)v50 > (int)v46) {
    v62 = v219;
    v50 = HIDWORD(v219);
    v219 = v220;
    v220 = v62;
    v46 = HIDWORD(v219);
  }
  v63 = &v221;
  v64 = GameData_212cd78[0];
  if (v54 <= (int)v50) {
    if (v58 <= v54) {
      goto LABEL_115;
    }
  LABEL_118:
    v68 = v222;
    v69 = &v221;
    v70 = HIDWORD(v222);
    v222 = v221;
    v71 = HIDWORD(v221);
    if (SHIDWORD(v220) < SHIDWORD(v68)) {
      v221 = v220;
      v69 = &v220;
      if (SHIDWORD(v219) < (int)v70) {
        v69 = &v219;
        v220 = v219;
      }
    }
    *v69 = v68;
    if (v61 <= (int)v71) {
      goto LABEL_128;
    }
    goto LABEL_122;
  }
  v65 = v221;
  v66 = &v220;
  v221 = v220;
  v67 = HIDWORD(v220);
  if ((int)v46 < SHIDWORD(v65)) {
    v66 = &v219;
    v220 = v219;
  }
  *v66 = v65;
  if (v58 > (int)v67) {
    goto LABEL_118;
  }
LABEL_115:
  if (v61 > v58) {
  LABEL_122:
    v72 = v223;
    v223 = v222;
    if (SHIDWORD(v221) >= SHIDWORD(v72)) {
      v63 = &v222;
    }
    else {
      v222 = v221;
      if (SHIDWORD(v220) < SHIDWORD(v72)) {
        v63 = &v220;
        v221 = v220;
        if (SHIDWORD(v219) < SHIDWORD(v72)) {
          v63 = &v219;
          v220 = v219;
        }
      }
    }
    *v63 = v72;
  }
LABEL_128:
  v212 = 0;
  v217 = 0xF03060205010F00LL;
  v218 = 3844;
  do {
    if ((*(_DWORD*)((_BYTE*)&v219 + v212 + 4) & 0x80000000) == 0) {
      v73 = (unsigned __int8*)&v217 + 2 * *((unsigned __int8*)&v219 + v212);
      v74 = *v64;
      v75 = *v73 > 0xEuLL || v74 == 0;
      if (!v75) {
        v76 = v74 + 24LL * *v73;
        v77 = *(__int64**)(v76 + 264);
        v78 = *(__int64**)(v76 + 272);
        if (v77 != v78) {
        LABEL_136:
          v79 = *v77;
          v80 = *(unsigned __int16*)(*v77 + 40);
          if (*(_WORD*)(*v77 + 40) != 0) {
            v81 = *(unsigned __int8**)(v79 + 48);
            while (1) {
              v82 = *v81++;
              if (v214 == v82) {
                break;
              }
              if (--v80 == 0) {
                if (++v77 != v78) {
                  goto LABEL_136;
                }
                goto LABEL_153;
              }
            }
            if (v79 == 0) {
              goto LABEL_153;
            }
          }
          v83 = *(unsigned __int16*)(v79 + 56);
          if (*(_WORD*)(v79 + 56) != 0) {
            v84 = 8;
            v208 = (char*)&v217 + 2 * *((unsigned __int8*)&v219 + v212);
            v206 = v2;
            v85 = 0;
            while (1) {
              v86 = *(_QWORD*)(*(_QWORD*)(v79 + 64) + v84);
              v87 = *(unsigned __int16*)(v79 + 72) - 1;
              if ((int)v85 < v87) {
                v87 = v85;
              }
              v88 = *(unsigned __int8*)(*(_QWORD*)(v79 + 80) + v87);
              v216 = 0;
              if (v86 != 0) {
                v89 = *(unsigned __int16*)(v86 + 16);
                HIDWORD(v216) = 1;
                LOWORD(v216) = v89;
                if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v89) +
                              73LL) == 17) {
                  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                  v90 = game_map_MapRandom_instance__ptr[0];
                  v91 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                  v92 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                  v93 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                  *((_DWORD*)v90 + 1) = v91;
                  v94 = (v93 >> 8) ^ (v92 >> 19) ^ v93 ^ v92;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v90) = v92;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v90 + 4) =
                      v94;
                  nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
                  HIDWORD(v216) =
                      (16 * ((_WORD)v94 -
                             1000 * (unsigned __int16)((v94 & 0x7FFFFFFFu) /
                                                       0x3E8)) +
                       16) &
                          0x3FF0 |
                      1;
                }
              }
              if (UnitItem_6e8bc0((unsigned __int16*)&v216, a1)) {
                break;
              }
              ++v85;
              v84 += 16;
              if (v83 == v85) {
                v2 = v206;
                v64 = GameData_212cd78[0];
                v73 = (unsigned __int8*)v208;
                goto LABEL_154;
              }
            }
            v117 = (*(_BYTE*)(a1 + 831) & 0x40) != 0 &&
                   *v209 == *(unsigned __int16*)(v86 + 16);
            v2 = v206;
            v64 = GameData_212cd78[0];
            v73 = (unsigned __int8*)v208;
            if ((*(_BYTE*)(a1 + 839) & 0x40) != 0 &&
                v209[4] == *(unsigned __int16*)(v86 + 16)) {
              ++v117;
            }
            if ((*(_BYTE*)(a1 + 847) & 0x40) != 0 &&
                v209[8] == *(unsigned __int16*)(v86 + 16)) {
              ++v117;
            }
            if ((*(_BYTE*)(a1 + 855) & 0x40) != 0 &&
                v209[12] == *(unsigned __int16*)(v86 + 16)) {
              ++v117;
            }
            if ((*(_BYTE*)(a1 + 863) & 0x40) != 0 &&
                v209[16] == *(unsigned __int16*)(v86 + 16)) {
              ++v117;
            }
            if ((*(_BYTE*)(a1 + 871) & 0x40) != 0 &&
                v209[20] == *(unsigned __int16*)(v86 + 16)) {
              ++v117;
            }
            if (v117 < v88) {
              v128 = v88 - v117;
              do {
                while (1) {
                  v216 = 0;
                  if (v86 != 0 &&
                      (v129 = *(unsigned __int16*)(v86 + 16), HIDWORD(v216) = 1,
                       LOWORD(v216) = v129,
                       *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8 * v129) +
                                 73LL) == 17)) {
                    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                    v130 = v2;
                    v131 = game_map_MapRandom_instance__ptr[0];
                    v132 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v133 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v134 =
                        *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v131 + 1) = v132;
                    v135 = (v134 >> 8) ^ (v133 >> 19) ^ v134 ^ v133;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v131) =
                        v133;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v131 + 4) =
                        v135;
                    nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
                    v73 = (unsigned __int8*)v208;
                    v136 = v135 - 1000 * ((v135 & 0x7FFFFFFFu) / 0x3E8);
                    v2 = v130;
                    HIDWORD(v216) = HIDWORD(v216) & 0xFFFFC00F |
                                    (16 * (((16 * v136 + 16) >> 4) & 0x3FF));
                    v137 = BYTE3(v216) | 0x40;
                  }
                  else {
                    v137 = 64;
                  }
                  BYTE3(v216) = v137;
                  if (v2 <= 5) {
                    break;
                  }
                  game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
                      (void*)((__int64)&v215),
                      *(_QWORD*)(*(_QWORD*)
                                     game_TransporterConst_List_instance__ptr
                                         [0] +
                                 8LL),
                      (unsigned __int16*)&v216, 1);
                  if (--v128 == 0) {
                    goto LABEL_154;
                  }
                }
                game_UnitItemList_Add(v209, &v215, &v216, 0);
                ++v2;
                --v128;
              } while (v128 != 0);
            }
          }
          else {
          LABEL_153:
            v64 = &GameData_21c9f70;
          }
        }
      }
    LABEL_154:
      v95 = *v64;
      if (v73[1] <= 0xEuLL && v95 != 0) {
        v97 = v95 + 24LL * v73[1];
        v98 = *(__int64**)(v97 + 264);
        v99 = *(__int64**)(v97 + 272);
        if (v98 != v99) {
        LABEL_159:
          v100 = *v98;
          v101 = *(unsigned __int16*)(*v98 + 40);
          if (*(_WORD*)(*v98 + 40) != 0) {
            v102 = *(unsigned __int8**)(v100 + 48);
            while (1) {
              v103 = *v102++;
              if (v214 == v103) {
                break;
              }
              if (--v101 == 0) {
                if (++v98 != v99) {
                  goto LABEL_159;
                }
                goto LABEL_129;
              }
            }
            if (v100 == 0) {
              goto LABEL_129;
            }
          }
          v104 = *(unsigned __int16*)(v100 + 56);
          if (*(_WORD*)(v100 + 56) != 0) {
            v105 = 8;
            v207 = v2;
            v106 = 0;
            while (1) {
              v107 = *(_QWORD*)(*(_QWORD*)(v100 + 64) + v105);
              v108 = *(unsigned __int16*)(v100 + 72) - 1;
              if ((int)v106 < v108) {
                v108 = v106;
              }
              v109 = *(unsigned __int8*)(*(_QWORD*)(v100 + 80) + v108);
              v216 = 0;
              if (v107 != 0) {
                v110 = *(unsigned __int16*)(v107 + 16);
                HIDWORD(v216) = 1;
                LOWORD(v216) = v110;
                if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8 * v110) +
                              73LL) == 17) {
                  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                  v111 = game_map_MapRandom_instance__ptr[0];
                  v112 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                    (unsigned __int64)((_UNKNOWN**)0x8LL));
                  v113 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                    (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                  v114 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                         (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                  *((_DWORD*)v111 + 1) = v112;
                  v115 = (v114 >> 8) ^ (v113 >> 19) ^ v114 ^ v113;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v111) = v113;
                  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v111 + 4) =
                      v115;
                  nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
                  HIDWORD(v216) =
                      (16 * ((_WORD)v115 -
                             1000 * (unsigned __int16)((v115 & 0x7FFFFFFFu) /
                                                       0x3E8)) +
                       16) &
                          0x3FF0 |
                      1;
                }
              }
              if (UnitItem_6e8bc0((unsigned __int16*)&v216, a1)) {
                break;
              }
              ++v106;
              v105 += 16;
              if (v104 == v106) {
                v2 = v207;
                v64 = GameData_212cd78[0];
                goto LABEL_129;
              }
            }
            v116 = (*(_BYTE*)(a1 + 831) & 0x40) != 0 &&
                   *v209 == *(unsigned __int16*)(v107 + 16);
            v2 = v207;
            v64 = GameData_212cd78[0];
            if ((*(_BYTE*)(a1 + 839) & 0x40) != 0 &&
                v209[4] == *(unsigned __int16*)(v107 + 16)) {
              ++v116;
            }
            if ((*(_BYTE*)(a1 + 847) & 0x40) != 0 &&
                v209[8] == *(unsigned __int16*)(v107 + 16)) {
              ++v116;
            }
            if ((*(_BYTE*)(a1 + 855) & 0x40) != 0 &&
                v209[12] == *(unsigned __int16*)(v107 + 16)) {
              ++v116;
            }
            if ((*(_BYTE*)(a1 + 863) & 0x40) != 0 &&
                v209[16] == *(unsigned __int16*)(v107 + 16)) {
              ++v116;
            }
            if ((*(_BYTE*)(a1 + 871) & 0x40) != 0 &&
                v209[20] == *(unsigned __int16*)(v107 + 16)) {
              ++v116;
            }
            if (v116 < v109) {
              v118 = v109 - v116;
              do {
                while (1) {
                  v216 = 0;
                  if (v107 != 0 &&
                      (v119 = *(unsigned __int16*)(v107 + 16),
                       HIDWORD(v216) = 1, LOWORD(v216) = v119,
                       *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                       64) +
                                            8 * v119) +
                                 73LL) == 17)) {
                    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
                    v120 = v2;
                    v121 = game_map_MapRandom_instance__ptr[0];
                    v122 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL));
                    v123 =
                        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                    v124 =
                        *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                    *((_DWORD*)v121 + 1) = v122;
                    v125 = (v124 >> 8) ^ (v123 >> 19) ^ v124 ^ v123;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v121) =
                        v123;
                    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v121 + 4) =
                        v125;
                    nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
                    v126 = v125 - 1000 * ((v125 & 0x7FFFFFFFu) / 0x3E8);
                    v2 = v120;
                    HIDWORD(v216) = HIDWORD(v216) & 0xFFFFC00F |
                                    (16 * (((16 * v126 + 16) >> 4) & 0x3FF));
                    v127 = BYTE3(v216) | 0x40;
                  }
                  else {
                    v127 = 64;
                  }
                  BYTE3(v216) = v127;
                  if (v2 >= 6) {
                    break;
                  }
                  game_UnitItemList_Add(v209, &v215, &v216, 0);
                  ++v2;
                  if (--v118 == 0) {
                    goto LABEL_129;
                  }
                }
                game_UnitUtil_UniqueMap_Commit_89abc0_alt1(
                    (void*)((__int64)&v215),
                    *(_QWORD*)(*(_QWORD*)
                                   game_TransporterConst_List_instance__ptr[0] +
                               8LL),
                    (unsigned __int16*)&v216, 1);
                --v118;
              } while (v118 != 0);
            }
          }
        }
      }
    }
  LABEL_129:
    v212 += 8;
  } while (v212 != 40);
  v138 = *v209;
  if (*v209 != 0) {
    v139 = GameData_21c99b8;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8 * v138) +
                            72LL) <= 7u) {
      *(_BYTE*)(a1 + 830) = 0;
      v140 = *(_QWORD*)(*(_QWORD*)(v139 + 64) + 8 * v138);
      if (*(_BYTE*)(v140 + 87) != 0) {
        v141 = *(unsigned __int8*)(v140 + 72);
        v142 = *(_BYTE*)(a1 + 831);
        v143 = v141 >= 7;
        v144 = v141 - 7;
        if ((v144 == 0 || !v143) && v144 <= 0xFFFFFFFD) {
          v146 = v142 & 0xF7;
          if ((*(_DWORD*)(a1 + 832) & 0xF) != 0) {
            v147 = 0;
          }
          else {
            v147 = 8;
          }
          v148 = v146 | v147;
          goto LABEL_245;
        }
      }
      else {
        v142 = *(_BYTE*)(a1 + 831);
      }
      v148 = v142 & 0xF7;
    LABEL_245:
      *(_BYTE*)(a1 + 831) = v148;
    }
  }
  v149 = v209[4];
  if (v209[4] != 0) {
    v150 = GameData_21c99b8;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8 * v149) +
                            72LL) <= 7u) {
      *(_BYTE*)(a1 + 838) = 0;
      v151 = *(_QWORD*)(*(_QWORD*)(v150 + 64) + 8 * v149);
      if (*(_BYTE*)(v151 + 87) != 0) {
        v152 = *(unsigned __int8*)(v151 + 72);
        v153 = *(_BYTE*)(a1 + 839);
        v143 = v152 >= 7;
        v154 = v152 - 7;
        if ((v154 == 0 || !v143) && v154 <= 0xFFFFFFFD) {
          v156 = v153 & 0xF7;
          if ((*(_DWORD*)(a1 + 840) & 0xF) != 0) {
            v157 = 0;
          }
          else {
            v157 = 8;
          }
          v158 = v156 | v157;
          goto LABEL_259;
        }
      }
      else {
        v153 = *(_BYTE*)(a1 + 839);
      }
      v158 = v153 & 0xF7;
    LABEL_259:
      *(_BYTE*)(a1 + 839) = v158;
    }
  }
  v159 = v209[8];
  if (v209[8] != 0) {
    v160 = GameData_21c99b8;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8 * v159) +
                            72LL) <= 7u) {
      *(_BYTE*)(a1 + 846) = 0;
      v161 = *(_QWORD*)(*(_QWORD*)(v160 + 64) + 8 * v159);
      if (*(_BYTE*)(v161 + 87) != 0) {
        v162 = *(unsigned __int8*)(v161 + 72);
        v163 = *(_BYTE*)(a1 + 847);
        v143 = v162 >= 7;
        v164 = v162 - 7;
        if ((v164 == 0 || !v143) && v164 <= 0xFFFFFFFD) {
          v166 = v163 & 0xF7;
          if ((*(_DWORD*)(a1 + 848) & 0xF) != 0) {
            v167 = 0;
          }
          else {
            v167 = 8;
          }
          v168 = v166 | v167;
          goto LABEL_273;
        }
      }
      else {
        v163 = *(_BYTE*)(a1 + 847);
      }
      v168 = v163 & 0xF7;
    LABEL_273:
      *(_BYTE*)(a1 + 847) = v168;
    }
  }
  v169 = v209[12];
  if (v209[12] != 0) {
    v170 = GameData_21c99b8;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8 * v169) +
                            72LL) <= 7u) {
      *(_BYTE*)(a1 + 854) = 0;
      v171 = *(_QWORD*)(*(_QWORD*)(v170 + 64) + 8 * v169);
      if (*(_BYTE*)(v171 + 87) != 0) {
        v172 = *(unsigned __int8*)(v171 + 72);
        v173 = *(_BYTE*)(a1 + 855);
        v143 = v172 >= 7;
        v174 = v172 - 7;
        if ((v174 == 0 || !v143) && v174 <= 0xFFFFFFFD) {
          v176 = v173 & 0xF7;
          if ((*(_DWORD*)(a1 + 856) & 0xF) != 0) {
            v177 = 0;
          }
          else {
            v177 = 8;
          }
          v178 = v176 | v177;
          goto LABEL_287;
        }
      }
      else {
        v173 = *(_BYTE*)(a1 + 855);
      }
      v178 = v173 & 0xF7;
    LABEL_287:
      *(_BYTE*)(a1 + 855) = v178;
    }
  }
  v179 = v209[16];
  if (v209[16] != 0) {
    v180 = GameData_21c99b8;
    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8 * v179) +
                            72LL) <= 7u) {
      *(_BYTE*)(a1 + 862) = 0;
      v181 = *(_QWORD*)(*(_QWORD*)(v180 + 64) + 8 * v179);
      if (*(_BYTE*)(v181 + 87) != 0) {
        v182 = *(unsigned __int8*)(v181 + 72);
        v183 = *(_BYTE*)(a1 + 863);
        v143 = v182 >= 7;
        v184 = v182 - 7;
        if ((v184 == 0 || !v143) && v184 <= 0xFFFFFFFD) {
          v186 = v183 & 0xF7;
          if ((*(_DWORD*)(a1 + 864) & 0xF) != 0) {
            v187 = 0;
          }
          else {
            v187 = 8;
          }
          v188 = v186 | v187;
          goto LABEL_301;
        }
      }
      else {
        v183 = *(_BYTE*)(a1 + 863);
      }
      v188 = v183 & 0xF7;
    LABEL_301:
      *(_BYTE*)(a1 + 863) = v188;
    }
  }
  v189 = v209[20];
  if (v209[20] == 0) {
    goto LABEL_316;
  }
  v190 = GameData_21c99b8;
  if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                     8 * v189) +
                          72LL) > 7u) {
    goto LABEL_316;
  }
  *(_BYTE*)(a1 + 870) = 0;
  v191 = *(_QWORD*)(*(_QWORD*)(v190 + 64) + 8 * v189);
  if (*(_BYTE*)(v191 + 87) != 0) {
    v192 = *(unsigned __int8*)(v191 + 72);
    v193 = *(_BYTE*)(a1 + 871);
    v143 = v192 >= 7;
    v194 = v192 - 7;
    if ((v194 == 0 || !v143) && v194 <= 0xFFFFFFFD) {
      v196 = v193 & 0xF7;
      if ((*(_DWORD*)(a1 + 872) & 0xF) != 0) {
        v197 = 0;
      }
      else {
        v197 = 8;
      }
      v198 = v196 | v197;
      goto LABEL_315;
    }
  }
  else {
    v193 = *(_BYTE*)(a1 + 871);
  }
  v198 = v193 & 0xF7;
LABEL_315:
  *(_BYTE*)(a1 + 871) = v198;
LABEL_316:
  result = game_Unit_Unknown6c4610_alt1(a1);
  v200 = 0;
  v201 = *GameData_212c878[0];
  while (1) {
    v202 = a1 + v200;
    if (*(_WORD*)(a1 + v200 + 828) != 0 && (*(_BYTE*)(v202 + 831) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v201 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v200 +
                                                                  828)) +
                            72LL) < 8u) {
      break;
    }
    v203 = *(unsigned __int16*)(v202 + 836);
    if (v203 != 0 && (*(_BYTE*)(a1 + v200 + 839) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v201 + 64) + 8 * v203) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(a1 + v200 + 844) != 0 &&
        (*(_BYTE*)(a1 + v200 + 847) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v201 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v200 +
                                                                  844)) +
                            72LL) < 8u) {
      break;
    }
    v200 += 24;
    if (v200 == 240) {
      game_Unit_CheckEquipment_alt1(a1);
      game_Unit_EquipFirstWeapon_alt1(a1);
      Unit_6ddce0(a1);
      v204 = game_UnitItemList_Sort_alt1((__int64)v209, 0, 6);
      result = game_UnitItemList_Sort_alt1((__int64)v209, 6u, 24);
      if ((v204 & 1) != 0 || (result & 1) != 0) {
        v205 = *(_DWORD*)(a1 + 416);
        if ((v205 & 0x10000000) == 0) {
          *(_DWORD*)(a1 + 416) = v205 | 0x10000000;
          game_6c51e0(a1);
          GameRoutine_6c6da0(a1);
          result = game_6c6ec0(a1);
          *(_DWORD*)(a1 + 416) &= ~0x10000000u;
        }
      }
      return result;
    }
  }
  return result;
}

__int64 Unit_6dacc0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  int v8;
  __int64 result;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    __int64 v20;
    __int64 v21;
    __int64 v22;
    int v23;
    char gap52_[4];
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
  } v20_;
  int v32;

  v19 = a1;
  v20_.v20 = 0;
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v23 = 0;
  v20_.v24 = 0;
  v20_.v25 = 0;
  v20_.v26 = 0;
  v20_.v27 = 0;
  v20_.v28 = 0;
  v20_.v29 = 0;
  v20_.v30 = 0;
  v20_.v31 = 0;
  UnitSkillList_84cf20_alt1((__int64)&v20_.v20, a1 + 1072, 1);
  UnitItemList_712a40((_QWORD*)(a1 + 828));
  v2 = GameRoutine_12c2260_alt1(a1);
  if (v2 != 0) {
    v18 = 0x100000000LL;
    LOWORD(v18) = *(_WORD*)(v2 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                             8LL * (unsigned __int16)v18) +
                  73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v3 = game_map_MapRandom_instance__ptr[0];
      v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL));
      v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v6 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
           (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v3 + 1) = v4;
      v7 = (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) = v5;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3 + 4) = v7;
      nn_os_UnlockMutex_alt1(&game_g_random_mutex);
      HIDWORD(v18) =
          (16 * ((_WORD)v7 -
                 1000 * (unsigned __int16)((v7 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    game_UnitItemList_Add((_WORD*)(a1 + 828), &v32, &v18, 0);
    game_Unit_CheckEquipment_alt1(a1);
    game_Unit_EquipFirstWeapon_alt1(a1);
    Unit_6ddce0(a1);
  }
  game_Unit_Unknown6c4610_alt1(a1);
  game_UnitAutoGrowSkillUpdater_Update_alt1(&v19);
  LOBYTE(v18) = 0;
  v8 = game_Unit_GetParam_alt1(a1);
  LOBYTE(v18) = 0;
  result = game_Unit_GetParam_alt1(a1);
  if (*(_WORD*)(a1 + 494) != 0 && v8 != *(__int16*)(a1 + 494)) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v8) {
    v10 = v8;
  }
  else {
    v10 = result;
  }
  if (v8 < 0) {
    v10 = 0;
  }
  if (v10 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v10;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v20_.v27 != 0) {
    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v20_.v28 = v20_.v27;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v12 + v13, v20_.v27);
  }
  if (v20_.v24 != 0) {
    v14 = *v11;
    v20_.v25 = v20_.v24;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v14 + v15, v20_.v24);
  }
  if (v20_.v20 != 0) {
    v16 = *v11;
    v20_.v21 = v20_.v20;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    return nn_mem_StandardAllocator_Free(v16 + v17, v20_.v20);
  }
  return result;
}

void Unit_6db740(__int64 a1, char a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  int v7;
  _BYTE* v8;
  __int64 v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  _QWORD* v25;
  __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  unsigned __int64 i;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  _QWORD* j;
  __int64 v36;
  int v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _DWORD* v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  char* v48;
  int v49;
  __int64 v50;
  __int64 v51;
  char v52;
  __int64 v53;
  int v54;
  __int64 v55;
  _QWORD* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  unsigned __int64* v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  int v81;
  int v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  __int64 v88;
  unsigned int v89;
  bool v90;
  __int64 v91;
  int v92;
  unsigned __int64 v93;
  int v94;
  int v95;
  int v96;
  unsigned int v97;
  int v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  char* v103;
  unsigned __int64 v104;
  unsigned __int64 k;
  _QWORD* v106;
  unsigned __int64 v107;
  _QWORD* m;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  int* v112;
  __int64 v113;
  __int64 v114;
  unsigned int v115;
  __int64* v116;
  int v117;
  __int64 v118;
  __int64 v119;
  unsigned int v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  char v127;
  char v128;
  int v129;
  int v130;
  int v131;
  int v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  struct {
    char* v136;
    char* v137;
    __int64 v138;
    __int64* v139;
    __int64* v140;
    __int64* v141;
  } v136_;
  struct {
    __int64 v142;
    __int64 v143;
    __int64 v144;
  } v142_;
  struct {
    _QWORD* v145;
    __int64 v146;
    _QWORD* v147;
  } v145_;
  struct {
    _QWORD* v148;
    __int64 v149;
    __int64 v150;
  } v148_;
  __int64 v151;
  struct {
    __int64 v152;
    __int64 v153;
    __int64 v154;
    int v155;
    char gap164_[4];
    __int64 v156;
    __int64 v157;
    __int64 v158;
    __int64 v159;
    __int64 v160;
    __int64 v161;
    __int64 v162;
    __int64 v163;
  } v152_;
  struct {
    __int64* v164;
    void* v165;
    char*** v166;
    char** v167;
    __int64* v168;
    __int64* v169;
    __int64 v170;
    __int64 v171;
    __int64 v172;
    __int64 v173;
    __int64 v174;
    _QWORD* v175;
    __int64 v176;
    _BYTE v177[13];
    char gap349_[1];
    __int16 v178;
  } v164_;

  v6 = a1 + 828;
  v151 = a1;
  v152_.v152 = 0;
  v152_.v153 = 0;
  v152_.v154 = 0;
  v152_.v155 = 0;
  v152_.v156 = 0;
  v152_.v157 = 0;
  v152_.v158 = 0;
  v152_.v159 = 0;
  v152_.v160 = 0;
  v152_.v161 = 0;
  v152_.v162 = 0;
  v152_.v163 = 0;
  GameHr_84cf20((__int64)&v152_.v152, a1 + 1072, 1);
  if ((a2 & 1) != 0) {
    if (*(_WORD*)v6 != 0) {
      *(_QWORD*)v6 = 0;
    }
    if (*(_WORD*)(v6 + 8) != 0) {
      *(_QWORD*)(v6 + 8) = 0;
    }
    if (*(_WORD*)(v6 + 16) != 0) {
      *(_QWORD*)(v6 + 16) = 0;
    }
    if (*(_WORD*)(v6 + 24) != 0) {
      *(_QWORD*)(v6 + 24) = 0;
    }
    if (*(_WORD*)(v6 + 32) != 0) {
      *(_QWORD*)(v6 + 32) = 0;
    }
    if (*(_WORD*)(v6 + 40) != 0) {
      *(_QWORD*)(v6 + 40) = 0;
    }
    v7 = *(_DWORD*)(a1 + 416);
    if ((v7 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v7 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
    game_UnitActor_TryReload_alt1((_QWORD*)a1);
    v8 = (_BYTE*)(a1 + 847);
    v9 = 2;
    while (1) {
      if (*(_WORD*)(v8 - 19) != 0 && (*(v8 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v8 - 19)) +
                              72LL) < 8u) {
        LODWORD(v9) = v9 - 2;
        goto LABEL_64;
      }
      if (*(_WORD*)(v8 - 11) != 0 && (*(v8 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v8 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v8 - 3) != 0 && (*v8 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v8 - 3)) +
                              72LL) < 8u) {
        goto LABEL_64;
      }
      v9 += 3;
      v8 += 24;
      if (v9 == 32) {
        goto LABEL_68;
      }
    }
    LODWORD(v9) = v9 - 1;
  LABEL_64:
    v18 = v6 + 8LL * (unsigned int)v9;
    if ((*(_BYTE*)(v18 + 3) & 1) != 0) {
      *(_BYTE*)(v18 + 3) &= ~1u;
      v19 = *(_DWORD*)(a1 + 416);
      if ((v19 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v19 | 0x10000000;
        game_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        game_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
      game_UnitActor_TryReload_alt1((_QWORD*)a1);
    }
  LABEL_68:
    if ((unsigned __int8)game_GetHeroIndex_alt1(*(_QWORD*)(a1 + 392)) != 0) {
      v164_.v166 = nullptr;
      v164_.v167 = nullptr;
      v164_.v168 = nullptr;
      v164_.v169 = nullptr;
      v164_.v170 = 0;
      v164_.v171 = 0;
      v164_.v172 = 0;
      v164_.v173 = 0;
      v164_.v174 = 0;
      v164_.v175 = nullptr;
      v164_.v178 = 0;
      v164_.v176 = 0;
      memset(v164_.v177, 0, sizeof(v164_.v177));
      v164_.v164 = GameData_2130cd8[0] + 2;
      v164_.v165 = (void*)a1;
      game_12c4de0((__int64)&v164_.v164);
      if (*(_QWORD*)(a1 + 400) != v164_.v176) {
        *(_QWORD*)(a1 + 400) = v164_.v176;
        game_Unit_Unknown6c8630_alt1(a1);
      }
      GameRoutine_12c5000_alt1((_BYTE*)a1, (__int64)&v164_.v164, a3 & 1);
      v20 = GameRoutine_7152e0_alt2();
      if ((int)v20 <= *(unsigned __int8*)(a1 + 498)) {
        goto LABEL_143;
      }
      v21 = v20;
      v22 = v20;
      v23 = 8LL * v20;
      v24 = (__int64*)fw_memory_g_heap_manager_ptr;
      v25 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v23, 16, 0);
      v26 = *(_QWORD*)(a1 + 400);
      v27 = v23 - 8;
      v28 = &v25[(unsigned __int64)v23 / 8];
      v148_.v148 = v25;
      v148_.v150 = (__int64)&v25[(unsigned __int64)v23 / 8];
      v29 = ((unsigned __int64)(v23 - 8) >> 3) + 1;
      for (i = v29 & 7; i != 0; --i) {
        *v25++ = v26;
      }
      if (v27 >= 0x38) {
        do {
          *v25 = v26;
          v25[1] = v26;
          v25[2] = v26;
          v25[3] = v26;
          v25[4] = v26;
          v25[5] = v26;
          v25[6] = v26;
          v25[7] = v26;
          v25 += 8;
        } while (v25 != v28);
      }
      v31 = *v24;
      v32 = *(_QWORD*)v164_.v177;
      v148_.v149 = (__int64)v28;
      v33 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v31, v23, 16, 0);
      v34 = v29 & 7;
      v145_.v145 = v33;
      v145_.v147 = &v33[v22];
      for (j = &v33[(unsigned __int64)v23 / 8]; v34 != 0; --v34) {
        *v33++ = v32;
      }
      if (v27 >= 0x38) {
        do {
          *v33 = v32;
          v33[1] = v32;
          v33[2] = v32;
          v33[3] = v32;
          v33[4] = v32;
          v33[5] = v32;
          v33[6] = v32;
          v33[7] = v32;
          v33 += 8;
        } while (v33 != j);
      }
      v36 = *v24;
      v37 = *(_DWORD*)&v164_.v177[8];
      v145_.v146 = (__int64)j;
      v38 = fw_memory_HeapManager_Allocate_alt1(v36, 4 * v22, 16, 0);
      v39 = 4 * v22 - 4;
      v40 = v38;
      v142_.v142 = v38;
      v41 = (_DWORD*)v38;
      v142_.v144 = v38 + 4 * v22;
      if ((~(4 * (_BYTE)v22 - 4) & 0x1C) != 0) {
        v42 = ((unsigned __int8)((unsigned int)v39 >> 2) + 1) & 7;
        v41 = (_DWORD*)v38;
        do {
          *v41++ = v37;
          --v42;
        } while (v42 != 0);
      }
      if (v39 >= 0x1C) {
        do {
          *v41 = v37;
          v41[1] = v37;
          v41[2] = v37;
          v41[3] = v37;
          v41[4] = v37;
          v41[5] = v37;
          v41[6] = v37;
          v41[7] = v37;
          v41 += 8;
        } while (v41 != (_DWORD*)(v38 + 4 * v22));
      }
      v142_.v143 = v38 + 4 * v22;
      v136_.v137 = (char*)&GameData_1acaa0c;
      v136_.v136 = (char*)game_HashString_alt1((__int64)&GameData_1acaa0c);
      if (game_GameModeData_instance_ != 0 &&
          (v43 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v136_.v136)) != 0) {
        v44 = *(_DWORD*)(v43 + 32);
      }
      else {
        v44 = 0;
      }
      v136_.v137 = (char*)&GameData_1ae9402;
      v48 = (char*)game_HashString_alt1((__int64)&GameData_1ae9402);
      v49 = game_GameModeData_instance_;
      v136_.v136 = v48;
      if (game_GameModeData_instance_ == 0) {
        LODWORD(v51) = 0;
        goto LABEL_128;
      }
      v50 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v136_.v136);
      if (v50 != 0) {
        v49 = *(_DWORD*)(v50 + 32);
        v51 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
        LABEL_128:
          v63 = *(unsigned __int8*)(a1 + 498);
          HIDWORD(v136_.v137) = v51;
          v136_.v136 = (char*)__PAIR64__(v44, v21);
          BYTE2(v136_.v138) = 0;
          LOWORD(v136_.v138) = 256;
          v136_.v139 = (__int64*)&v148_.v148;
          v136_.v140 = (__int64*)&v145_.v145;
          v136_.v141 = &v142_.v142;
          *(float*)&v136_.v137 = (float)v49 * 0x1.47ae140000000p-7f;
          if (v21 <= v63) {
            goto LABEL_132;
          }
          if (v21 >= 0x63) {
            v21 = 99;
          }
          UnitHeroes_6d3800_alt2(a1, v63, v21, 0);
          GameHr_6d5120(a1, v21 - *(unsigned __int8*)(a1 + 498),
                        (__int64)&v136_.v136);
          v40 = v142_.v142;
          if (v142_.v142 != 0) {
          LABEL_132:
            v64 = *v24;
            v142_.v143 = v40;
            v65 = 128;
            if (*(_QWORD*)(v64 + 200) == 0) {
              v65 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v64 + v65, v40);
          }
          if (v145_.v145 != nullptr) {
            v66 = *v24;
            v145_.v146 = (__int64)v145_.v145;
            v67 = 128;
            if (*(_QWORD*)(v66 + 200) == 0) {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v66 + v67, (__int64)v145_.v145);
          }
          if (v148_.v148 != nullptr) {
            v68 = *v24;
            v148_.v149 = (__int64)v148_.v148;
            v69 = 128;
            if (*(_QWORD*)(v68 + 200) == 0) {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(v68 + v69, (__int64)v148_.v148);
          }
        LABEL_143:
          GameRoutine_12c2aa0_alt1(&v164_.v164);
          v70 = *((_QWORD*)v164_.v165 + 49);
          if (v70 == game_GetHero_alt1(3u) &&
              *(_BYTE*)(*((_QWORD*)v164_.v165 + 50) + 96LL) == 1) {
            v164_.v175 = GameRoutine_12fdee0_alt1(*((_BYTE*)v164_.v165 + 552));
          }
          GameHr_12c59a0(a1, &v164_.v164, a3 & 1);
          v71 = v164_.v175;
          game_12c56a0(a1, (__int64)&v164_.v164, a3 & 1);
          if (v71 != nullptr) {
            game_12c5890(a1, &v164_.v164, a3 & 1);
          }
          v164_.v164 = (__int64*)&GameData_1f920c0;
          if (v164_.v172 != 0) {
            v72 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v72 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v72, v164_.v172);
          }
          if (v164_.v169 != nullptr) {
            v164_.v170 = (__int64)v164_.v169;
            v73 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v73 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v73,
                (__int64)v164_.v169);
          }
          v61 = (__int64)v164_.v166;
          if (v164_.v166 == nullptr) {
            goto LABEL_251;
          }
          v164_.v167 = (char**)v164_.v166;
          v62 = fw_memory_g_heap_manager;
          goto LABEL_158;
        }
      }
      else {
        v49 = 0;
        v51 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_128;
        }
      }
      LODWORD(v51) = *(_DWORD*)(v51 + 60);
      goto LABEL_128;
    }
    v148_.v148 = (_QWORD*)a1;
    v148_.v150 = 0;
    v136_.v137 = nullptr;
    v136_.v138 = 0;
    v136_.v136 = nullptr;
    AutoGrowJobFile_12c0bc0((__int64)&v164_.v164, a1, &v136_.v136);
    game_12c16e0(&v164_.v164);
    v45 = GameRoutine_12c1f80_alt1((unsigned __int8*)&v164_.v164);
    v148_.v149 = v45;
    GameRoutine_12c20f0_alt1(&v164_.v164);
    if (*(_QWORD*)(a1 + 400) != v45) {
      *(_QWORD*)(a1 + 400) = v45;
      game_Unit_Unknown6c8630_alt1(a1);
    }
    v46 = (_QWORD*)(a1 + 1880);
    if (*(_BYTE*)(a1 + 1880) == 0 ||
        *(_BYTE*)((v47 = *(_QWORD*)(a1 + 400)) + 96) == 2 &&
            *(unsigned __int8*)(*(_QWORD*)(v47 + 112) + 32LL) ==
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                          64) +
                                               8LL *
                                                   *(unsigned __int8*)(a1 +
                                                                       1880)) +
                                    32LL)) {
      GameHr_12c51b0((_BYTE*)a1, a3 & 1);
    }
    else {
      if ((a3 & 1) != 0) {
        v52 = *(_BYTE*)(a1 + 1920);
        *(_DWORD*)(a1 + 1888) = 0;
        *v46 = 0;
        if ((v52 & 1) != 0) {
          **(_BYTE**)(a1 + 1936) = 0;
          *(_QWORD*)(a1 + 1928) = 0;
        }
        else {
          *(_WORD*)(a1 + 1920) = 0;
        }
        GameRoutine_6e3b50_alt1(a1 + 1896, *(_QWORD**)(a1 + 1904));
        v75 = *(unsigned __int8*)(a1 + 1944);
        *(_QWORD*)(a1 + 1912) = 0;
        *(_QWORD*)(a1 + 1896) = a1 + 1904;
        *(_QWORD*)(a1 + 1904) = 0;
        if (v75 != 0) {
          v76 = (unsigned __int64*)(a1 + 1944);
          if (*(_BYTE*)(*(_QWORD*)(a1 + 400) + 96LL) != 1 ||
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                             8 * v75) +
                                  50LL) >
                  (unsigned int)*(unsigned __int8*)(a1 + 552)) {
            goto LABEL_171;
          }
        }
        goto LABEL_181;
      }
      if ((RidePool_93d8e0_alt1(a1) & 0x80000000) != 0) {
        WORD1(v164_.v164) = 0;
        HIDWORD(v164_.v164) = 0;
        v164_.v168 = nullptr;
        v164_.v169 = nullptr;
        v164_.v170 = 0;
        v164_.v171 = 0;
        v164_.v166 = &v164_.v167;
        v164_.v167 = nullptr;
        GameRoutine_930b90_alt1((__int64)&v164_.v164, a1 + 1880);
        BYTE3(v164_.v164) = 0;
        UnitHeroes_6d2b90_alt1(a1, (unsigned __int8*)GameData_212c8b0[0]);
        RidePool_93c6a0((void*)((__int64)&v136_.v136),
                        *(_QWORD*)(GameData_21f42d0 + 8),
                        (unsigned __int8*)&v164_.v164, 0, 1);
        UnitVariables_930e20_alt1((__int64)&v164_.v164);
      }
      else {
        RidePool_93d1e0_alt1(*(_QWORD*)(GameData_21f42d0 + 8), a1);
      }
    }
    if (*(_BYTE*)(a1 + 1944) == 0) {
      goto LABEL_181;
    }
    v76 = (unsigned __int64*)(a1 + 1944);
    if (*(_BYTE*)(*(_QWORD*)(a1 + 400) + 96LL) == 1 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                       8LL * *(unsigned __int8*)(a1 + 1944)) +
                            50LL) <=
            (unsigned int)*(unsigned __int8*)(a1 + 552)) {
      if ((a3 & 1) == 0 &&
          *(unsigned __int8*)(a1 + 1945) != *(unsigned __int8*)(a1 + 2088)) {
        v77 = *v76;
        v78 = v77 & 0xFFFFFFFFFFFF00FFLL |
              ((unsigned __int64)*(unsigned __int8*)(a1 + 2088) << 8);
        if (v77 != v78) {
          v79 = v77 >> 16;
          v80 = v77 >> 24;
          *(_WORD*)(a1 + 1944) = v78;
          *(_BYTE*)(v6 + 1123) = HIBYTE(v77);
          v81 = *(_DWORD*)(a1 + 416);
          *(_BYTE*)(a1 + 1946) = v79;
          *(_DWORD*)(v6 + 1119) = v80;
          if ((v81 & 0x10000000) == 0) {
            *(_DWORD*)(a1 + 416) = v81 | 0x10000000;
            game_6c51e0(a1);
            GameRoutine_6c6da0(a1);
            game_6c6ec0(a1);
            *(_DWORD*)(a1 + 416) &= ~0x10000000u;
          }
          *(_WORD*)(a1 + 20) |= 1u;
        }
      }
    }
    else {
      if ((a3 & 1) != 0) {
      LABEL_171:
        *v76 = 0;
        goto LABEL_181;
      }
      if ((LegionPool_938460_alt1(a1) & 0x80000000) != 0) {
        v164_.v164 = *(__int64**)(a1 + 1944);
        BYTE1(v164_.v164) = 0;
        UnitHeroes_6d2c90_alt1(a1, GameData_212ceb0);
        LegionPool_936f60((void*)((__int64)&v136_.v136),
                          *(_QWORD*)(GameData_21f4280 + 8),
                          (unsigned __int8*)&v164_.v164, 0);
      }
      else {
        LegionPool_937de0_alt1(*(_QWORD*)(GameData_21f4280 + 8), a1);
      }
    }
  LABEL_181:
    v82 = GameRoutine_7152e0_alt2();
    if (v82 <= *(unsigned __int8*)(a1 + 498)) {
    LABEL_250:
      v148_.v150 = GameRoutine_12c2260_alt1(a1);
      game_12c5be0((_WORD*)a1, (__int64)&v148_.v148);
      goto LABEL_251;
    }
    v83 = v82;
    if (*(_BYTE*)v46 != 0) {
      v84 = *(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                       8LL * *(unsigned __int8*)v46);
      v85 = *(_QWORD*)(a1 + 392);
      if (v85 == 0) {
        goto LABEL_195;
      }
      v86 = *(_QWORD*)(a1 + 1904);
      if (v86 == 0) {
        goto LABEL_195;
      }
      v87 = *(unsigned __int8*)(v85 + 48);
      v88 = a1 + 1904;
      do {
        v89 = *(unsigned __int8*)(v86 + 26);
        v90 = v89 >= v87;
        if (v89 >= v87) {
          v91 = 0;
        }
        else {
          v91 = 8;
        }
        if (v90) {
          v88 = v86;
        }
        v86 = *(_QWORD*)(v86 + v91);
      } while (v86 != 0);
      if (v88 != a1 + 1904 && v87 >= *(unsigned __int8*)(v88 + 26)) {
        v92 = *(_WORD*)(v88 + 28) & 0xFFF;
      }
      else {
      LABEL_195:
        v92 = 0;
      }
      v93 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
      if ((int)v93 >= 1) {
        v94 = 0;
        v95 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v93 - 1));
        if (v95 >= v92) {
          v95 = v92;
        }
        if (v92 >= (signed __int32)*(_DWORD*)GameData_21d9988) {
          v96 = v95;
        }
        else {
          v96 = *(_DWORD*)GameData_21d9988;
        }
        while (1) {
          v97 = (unsigned int)(v94 + v93) >> 1;
          v98 = *(_DWORD*)(GameData_21d9988 + 4LL * v97);
          if (v96 == v98) {
            break;
          }
          if (v96 < v98) {
            LODWORD(v93) = (unsigned int)(v94 + v93) >> 1;
          }
          else {
            v94 = v97 + 1;
          }
          if (v94 >= (int)v93) {
            goto LABEL_211;
          }
        }
        v94 = v97 + 1;
      LABEL_211:
        v99 = 8LL * (unsigned int)v82;
        v100 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v99, 16, 0);
        v101 = *(_QWORD*)(a1 + 400);
        v102 = v99 - 8;
        v103 = (char*)(v100 + v99);
        v136_.v136 = (char*)v100;
        v136_.v138 = v100 + v99;
        v104 = ((unsigned __int64)(v99 - 8) >> 3) + 1;
        for (k = v104 & 7; k != 0; --k) {
          *(_QWORD*)v100 = v101;
          v100 += 8;
        }
        if (v102 >= 0x38) {
          do {
            *(_QWORD*)v100 = v101;
            *(_QWORD*)(v100 + 8) = v101;
            *(_QWORD*)(v100 + 16) = v101;
            *(_QWORD*)(v100 + 24) = v101;
            *(_QWORD*)(v100 + 32) = v101;
            *(_QWORD*)(v100 + 40) = v101;
            *(_QWORD*)(v100 + 48) = v101;
            *(_QWORD*)(v100 + 56) = v101;
            v100 += 64;
          } while ((char*)v100 != v103);
        }
        v136_.v137 = v103;
        v106 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * v83, 16, 0);
        v107 = v104 & 7;
        v145_.v145 = v106;
        v145_.v147 = &v106[v83];
        for (m = &v106[(unsigned __int64)v99 / 8]; v107 != 0; --v107) {
          *v106++ = v84;
        }
        if (v102 >= 0x38) {
          do {
            *v106 = v84;
            v106[1] = v84;
            v106[2] = v84;
            v106[3] = v84;
            v106[4] = v84;
            v106[5] = v84;
            v106[6] = v84;
            v106[7] = v84;
            v106 += 8;
          } while (v106 != m);
        }
        v145_.v146 = (__int64)m;
        v109 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4LL * v83, 16, 0);
        v110 = 4LL * v83 - 4;
        v111 = v109;
        v142_.v142 = v109;
        v112 = (int*)v109;
        v142_.v144 = v109 + 4LL * v83;
        if ((~(4 * (_BYTE)v83 - 4) & 0x1C) != 0) {
          v113 = ((unsigned __int8)((unsigned int)v110 >> 2) + 1) & 7;
          v112 = (int*)v109;
          do {
            *v112++ = v94;
            --v113;
          } while (v113 != 0);
        }
        if (v110 >= 0x1C) {
          do {
            *v112 = v94;
            v112[1] = v94;
            v112[2] = v94;
            v112[3] = v94;
            v112[4] = v94;
            v112[5] = v94;
            v112[6] = v94;
            v112[7] = v94;
            v112 += 8;
          } while (v112 != (int*)(v109 + 4LL * v83));
        }
        v142_.v143 = v109 + 4LL * v83;
        v164_.v165 = &GameData_1acaa0c;
        v164_.v164 = (__int64*)game_HashString_alt1((__int64)&GameData_1acaa0c);
        if (game_GameModeData_instance_ != 0 &&
            (v114 = game_GameVariableTable_Find_alt1(
                 *(_QWORD**)(game_GameModeData_instance_ + 48),
                 (unsigned __int64*)&v164_.v164)) != 0) {
          v115 = *(_DWORD*)(v114 + 32);
        }
        else {
          v115 = 0;
        }
        v164_.v165 = &GameData_1ae9402;
        v116 = (__int64*)game_HashString_alt1((__int64)&GameData_1ae9402);
        v117 = game_GameModeData_instance_;
        v164_.v164 = v116;
        if (game_GameModeData_instance_ == 0) {
          LODWORD(v119) = 0;
          goto LABEL_235;
        }
        v118 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v164_.v164);
        if (v118 != 0) {
          v117 = *(_DWORD*)(v118 + 32);
          v119 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
          LABEL_235:
            v120 = *(unsigned __int8*)(a1 + 498);
            HIDWORD(v164_.v165) = v119;
            v164_.v164 = (__int64*)__PAIR64__(v115, v83);
            BYTE2(v164_.v166) = 0;
            LOWORD(v164_.v166) = 256;
            v164_.v167 = &v136_.v136;
            v164_.v168 = (__int64*)&v145_.v145;
            v164_.v169 = &v142_.v142;
            *(float*)&v164_.v165 = (float)v117 * 0x1.47ae140000000p-7f;
            if (v83 <= v120) {
              goto LABEL_239;
            }
            if (v83 >= 0x63) {
              v83 = 99;
            }
            UnitHeroes_6d3800_alt2(a1, v120, v83, 0);
            GameHr_6d5120(a1, v83 - *(unsigned __int8*)(a1 + 498),
                          (__int64)&v164_.v164);
            v111 = v142_.v142;
            if (v142_.v142 != 0) {
            LABEL_239:
              v142_.v143 = v111;
              v121 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v121 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, v111);
            }
            if (v145_.v145 != nullptr) {
              v145_.v146 = (__int64)v145_.v145;
              v122 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v122 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v122,
                  (__int64)v145_.v145);
            }
            if (v136_.v136 != nullptr) {
              v136_.v137 = v136_.v136;
              v123 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v123 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v123,
                  (__int64)v136_.v136);
            }
            goto LABEL_250;
          }
        }
        else {
          v117 = 0;
          v119 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_235;
          }
        }
        LODWORD(v119) = *(_DWORD*)(v119 + 60);
        goto LABEL_235;
      }
    }
    else {
      v84 = 0;
    }
    v94 = 0;
    goto LABEL_211;
  }
  if ((unsigned __int8)game_GetHeroIndex_alt1(*(_QWORD*)(a1 + 392)) == 0) {
    GameHr_12c51b0((_BYTE*)a1, a3 & 1);
    if ((a3 & 1) == 0 && *(_BYTE*)(a1 + 1944) != 0 &&
        *(unsigned __int8*)(a1 + 1945) != *(unsigned __int8*)(a1 + 2088)) {
      v13 = *(_QWORD*)(a1 + 1944);
      v14 = v13 & 0xFFFFFFFFFFFF00FFLL |
            ((unsigned __int64)*(unsigned __int8*)(a1 + 2088) << 8);
      if (v13 != v14) {
        v15 = v13 >> 16;
        v16 = v13 >> 24;
        *(_WORD*)(a1 + 1944) = v14;
        *(_BYTE*)(v6 + 1123) = HIBYTE(v13);
        v17 = *(_DWORD*)(a1 + 416);
        *(_BYTE*)(a1 + 1946) = v15;
        *(_DWORD*)(v6 + 1119) = v16;
        if ((v17 & 0x10000000) == 0) {
          *(_DWORD*)(a1 + 416) = v17 | 0x10000000;
          game_6c51e0(a1);
          GameRoutine_6c6da0(a1);
          game_6c6ec0(a1);
          *(_DWORD*)(a1 + 416) &= ~0x10000000u;
        }
        *(_WORD*)(a1 + 20) |= 1u;
      }
    }
    goto LABEL_251;
  }
  if (*(_WORD*)v6 != 0) {
    *(_QWORD*)v6 = 0;
  }
  if (*(_WORD*)(v6 + 8) != 0) {
    *(_QWORD*)(v6 + 8) = 0;
  }
  if (*(_WORD*)(v6 + 16) != 0) {
    *(_QWORD*)(v6 + 16) = 0;
  }
  if (*(_WORD*)(v6 + 24) != 0) {
    *(_QWORD*)(v6 + 24) = 0;
  }
  if (*(_WORD*)(v6 + 32) != 0) {
    *(_QWORD*)(v6 + 32) = 0;
  }
  if (*(_WORD*)(v6 + 40) != 0) {
    *(_QWORD*)(v6 + 40) = 0;
  }
  v10 = *(_DWORD*)(a1 + 416);
  if ((v10 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v10 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  game_UnitActor_TryReload_alt1((_QWORD*)a1);
  v11 = (_BYTE*)(a1 + 847);
  v12 = 2;
  while (1) {
    if (*(_WORD*)(v11 - 19) != 0 && (*(v11 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(v11 - 19)) +
                            72LL) < 8u) {
      LODWORD(v12) = v12 - 2;
      goto LABEL_105;
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
      goto LABEL_105;
    }
    v12 += 3;
    v11 += 24;
    if (v12 == 32) {
      goto LABEL_109;
    }
  }
  LODWORD(v12) = v12 - 1;
LABEL_105:
  v53 = v6 + 8LL * (unsigned int)v12;
  if ((*(_BYTE*)(v53 + 3) & 1) != 0) {
    *(_BYTE*)(v53 + 3) &= ~1u;
    v54 = *(_DWORD*)(a1 + 416);
    if ((v54 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v54 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
    game_UnitActor_TryReload_alt1((_QWORD*)a1);
  }
LABEL_109:
  v164_.v166 = nullptr;
  v164_.v167 = nullptr;
  v164_.v168 = nullptr;
  v164_.v169 = nullptr;
  v164_.v170 = 0;
  v164_.v171 = 0;
  v164_.v172 = 0;
  v164_.v173 = 0;
  v164_.v174 = 0;
  v164_.v175 = nullptr;
  v164_.v176 = 0;
  *(_DWORD*)v164_.v177 = 0;
  v164_.v177[4] = 0;
  *(_WORD*)&v164_.v177[6] = 0;
  v164_.v164 = GameData_2130cd0[0] + 2;
  v164_.v165 = (void*)a1;
  GameHr_12c4be0((__int64)&v164_.v164);
  GameRoutine_12c2aa0_alt1(&v164_.v164);
  v55 = *((_QWORD*)v164_.v165 + 49);
  if (v55 == game_GetHero_alt1(3u) &&
      *(_BYTE*)(*((_QWORD*)v164_.v165 + 50) + 96LL) == 1) {
    v164_.v175 = GameRoutine_12fdee0_alt1(*((_BYTE*)v164_.v165 + 552));
  }
  GameHr_12c59a0(a1, &v164_.v164, a3 & 1);
  GameRoutine_12c5000_alt1((_BYTE*)a1, (__int64)&v164_.v164, a3 & 1);
  v56 = v164_.v175;
  game_12c56a0(a1, (__int64)&v164_.v164, a3 & 1);
  if (v56 != nullptr) {
    game_12c5890(a1, &v164_.v164, a3 & 1);
  }
  v164_.v164 = (__int64*)&GameData_1f920c0;
  v57 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v164_.v172 != 0) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v164_.v172);
  }
  if (v164_.v169 != nullptr) {
    v59 = *v57;
    v164_.v170 = (__int64)v164_.v169;
    v60 = 128;
    if (*(_QWORD*)(v59 + 200) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v59 + v60, (__int64)v164_.v169);
  }
  v61 = (__int64)v164_.v166;
  if (v164_.v166 != nullptr) {
    v62 = *v57;
    v164_.v167 = (char**)v164_.v166;
  LABEL_158:
    v74 = 128;
    if (*(_QWORD*)(v62 + 200) == 0) {
      v74 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v62 + v74, v61);
  }
LABEL_251:
  game_Unit_Unknown6c4610_alt1(a1);
  game_UnitAutoGrowSkillUpdater_Update_alt2(&v151);
  v124 = 0;
  while (1) {
    v125 = a1 + v124;
    if (*(_WORD*)(a1 + v124 + 828) != 0 && (*(_BYTE*)(v125 + 831) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v124 +
                                                                  828)) +
                            72LL) < 8u) {
      break;
    }
    v126 = *(unsigned __int16*)(v125 + 836);
    if (v126 != 0 && (*(_BYTE*)(a1 + v124 + 839) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8 * v126) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(a1 + v124 + 844) != 0 &&
        (*(_BYTE*)(a1 + v124 + 847) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v124 +
                                                                  844)) +
                            72LL) < 8u) {
      break;
    }
    v124 += 24;
    if (v124 == 240) {
      game_Unit_CheckEquipment_alt1(a1);
      game_Unit_EquipFirstWeapon_alt1(a1);
      Unit_6ddce0(a1);
      break;
    }
  }
  v127 = game_UnitItemList_Sort_alt1(a1 + 828, 0, 6);
  v128 = game_UnitItemList_Sort_alt1(a1 + 828, 6u, 24);
  if ((v127 & 1) != 0 || (v128 & 1) != 0) {
    v129 = *(_DWORD*)(a1 + 416);
    if ((v129 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v129 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  LOBYTE(v164_.v164) = 0;
  v130 = game_Unit_GetParam_alt1(a1);
  LOBYTE(v164_.v164) = 0;
  v131 = game_Unit_GetParam_alt1(a1);
  if (*(_WORD*)(a1 + 494) != 0 && v130 != *(__int16*)(a1 + 494)) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if (v131 >= v130) {
    v132 = v130;
  }
  else {
    v132 = v131;
  }
  if (v130 < 0) {
    v132 = 0;
  }
  if (v132 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v132;
  }
  if (v152_.v159 != 0) {
    v152_.v160 = v152_.v159;
    v133 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v133 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v133, v152_.v159);
  }
  if (v152_.v156 != 0) {
    v152_.v157 = v152_.v156;
    v134 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v134 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v134, v152_.v156);
  }
  if (v152_.v152 != 0) {
    v152_.v153 = v152_.v152;
    v135 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v135 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v135, v152_.v152);
  }
}

__int64 Unit_6dcb40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6)
{
  char v6;
  __int64* v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 i;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64* v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 j;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64* v37;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  int v47;
  __int64 result;
  int v49;
  int v50;
  int v51;
  __int64 v52;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v6 = a4;
  v10 = game_map_MapRandom_instance__ptr[0];
  v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL));
  v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
  v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v14 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  GameRoutine_6c3050_alt1(a1, a2, a3, a4, a5, a6),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (*(_QWORD*)(a1 + 392) == a2) {
    goto LABEL_34;
  }
  *(_QWORD*)(a1 + 392) = a2;
  v15 = *(_QWORD*)(a2 + 624);
  if (v15 == 0) {
    goto LABEL_34;
  }
  do {
    v16 = v15;
    v15 = *(_QWORD*)(v15 + 624);
  } while (v15 != 0);
  if (*(_BYTE*)(v16 + 441) != 3) {
    goto LABEL_34;
  }
  v17 = game_GetHero_alt1(9u),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v17 == 0) {
    goto LABEL_15;
  }
  for (i = v17; i != 0; i = *(_QWORD*)(i + 624)) {
    v19 = i;
  }
  if (*(_BYTE*)(v19 + 441) != 3) {
    goto LABEL_15;
  }
  v20 = *(_QWORD*)(v17 + 624);
  if (v20 == 0) {
    v20 = v17;
  }
  v52 = v20;
  v51 = 241;
  v21 = game_UnitPool_Find_6ead60_alt1(&v52, &v51),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v21 != nullptr) {
    v22 = v21 + 263;
    goto LABEL_16;
  }
  v23 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  if (*(_BYTE*)(v23 + 144) != 0) {
    v22 = (__int64*)(v23 + 112);
  }
  else {
  LABEL_15:
    v22 = &GameData_21f49b8;
  }
LABEL_16:
  if (*((_BYTE*)v22 + 32) != 0) {
    if ((__int64*)(a1 + 2104) != v22) {
      v24 = (__int64*)(a1 + 2112);
      v25 = *((unsigned __int8*)v22 + 8);
      if ((*(_BYTE*)(a1 + 2112) & 1) != 0) {
        v28 = (v25 & 1) == 0;
        v29 = v25 >> 1;
        if (v28) {
          v30 = (__int64)v22 + 9;
        }
        else {
          v30 = v22[3];
        }
        if (v28) {
          v31 = v29;
        }
        else {
          v31 = v22[2];
        }
        SpineModel_64dde0_alt1(v24, v30, v31),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      else if ((v25 & 1) != 0) {
        GameRoutine_64df20_alt1(v24, v22[3], v22[2]),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
            v34 = COERCE_AS(__typeof__(v34),
                            PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
      }
      else {
        v26 = v22[1];
        v27 = v22[3];
        *(_QWORD*)(a1 + 2120) = v22[2];
        *(_QWORD*)(a1 + 2128) = v27;
        *v24 = v26;
      }
    }
    *(_BYTE*)(a1 + 2136) = *((_BYTE*)v22 + 32);
    *(_BYTE*)(a1 + 2137) = *((_BYTE*)v22 + 33);
    *(_BYTE*)(a1 + 2138) = *((_BYTE*)v22 + 34);
    *(_BYTE*)(a1 + 2139) = *((_BYTE*)v22 + 35);
    *(_BYTE*)(a1 + 2140) = *((_BYTE*)v22 + 36);
  }
  else {
    if ((*(_BYTE*)(a1 + 2112) & 1) != 0) {
      **(_BYTE**)(a1 + 2128) = 0;
      *(_QWORD*)(a1 + 2120) = 0;
    }
    else {
      *(_WORD*)(a1 + 2112) = 0;
    }
    *(_BYTE*)(a1 + 2140) = 0;
    *(_DWORD*)(a1 + 2136) = 0;
  }
LABEL_34:
  if (a3 != 0) {
    Unit_930d50(a1 + 1880, *(_QWORD*)(a3 + 112)),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
        v34 = COERCE_AS(__typeof__(v34),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (*(_QWORD*)(a1 + 400) != a3) {
      *(_QWORD*)(a1 + 400) = a3;
      game_Unit_Unknown6c8630_alt1(a1),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
          v34 = COERCE_AS(__typeof__(v34),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
  if (a2 == game_GetHero_alt1(9u)) {
    v32 = game_GetHero_alt1(9u),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v32 == 0) {
      goto LABEL_48;
    }
    for (j = v32; j != 0; j = *(_QWORD*)(j + 624)) {
      v34 = j;
    }
    if (*(_BYTE*)(v34 + 441) != 3) {
      goto LABEL_48;
    }
    v35 = *(_QWORD*)(v32 + 624);
    if (v35 == 0) {
      v35 = v32;
    }
    v52 = v35;
    v51 = 241;
    v36 = game_UnitPool_Find_6ead60_alt1(&v52, &v51),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
    v34 = COERCE_AS(__typeof__(v34),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v36 != nullptr) {
      v37 = v36 + 263;
      goto LABEL_49;
    }
    v38 = *(_QWORD*)(game_GameModeData_instance_ + 176);
    if (*(_BYTE*)(v38 + 144) != 0) {
      v37 = (__int64*)(v38 + 112);
    }
    else {
    LABEL_48:
      v37 = &GameData_21f49b8;
    }
  LABEL_49:
    if (*((_BYTE*)v37 + 32) != 0) {
      if ((__int64*)(a1 + 2104) != v37) {
        v39 = (__int64*)(a1 + 2112);
        v40 = *((unsigned __int8*)v37 + 8);
        if ((*(_BYTE*)(a1 + 2112) & 1) != 0) {
          v43 = (v40 & 1) == 0;
          v44 = v40 >> 1;
          if (v43) {
            v45 = (__int64)v37 + 9;
          }
          else {
            v45 = v37[3];
          }
          if (v43) {
            v46 = v44;
          }
          else {
            v46 = v37[2];
          }
          SpineModel_64dde0_alt1(v39, v45, v46),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        else if ((v40 & 1) != 0) {
          GameRoutine_64df20_alt1(v39, v37[3], v37[2]),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
        }
        else {
          v41 = v37[1];
          v42 = v37[3];
          *(_QWORD*)(a1 + 2120) = v37[2];
          *(_QWORD*)(a1 + 2128) = v42;
          *v39 = v41;
        }
      }
      *(_BYTE*)(a1 + 2136) = *((_BYTE*)v37 + 32);
      *(_BYTE*)(a1 + 2137) = *((_BYTE*)v37 + 33);
      *(_BYTE*)(a1 + 2138) = *((_BYTE*)v37 + 34);
      *(_BYTE*)(a1 + 2139) = *((_BYTE*)v37 + 35);
      *(_BYTE*)(a1 + 2140) = *((_BYTE*)v37 + 36);
    }
    else {
      if ((*(_BYTE*)(a1 + 2112) & 1) != 0) {
        **(_BYTE**)(a1 + 2128) = 0;
        *(_QWORD*)(a1 + 2120) = 0;
      }
      else {
        *(_WORD*)(a1 + 2112) = 0;
      }
      *(_BYTE*)(a1 + 2136) = 1;
      *(_DWORD*)(a1 + 2137) = 0;
    }
  }
  LOBYTE(v52) = 0;
  v47 = game_Unit_GetParam_alt1(a1),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  LOBYTE(v52) = 0;
  result = game_Unit_GetParam_alt1(a1),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (*(_WORD*)(a1 + 494) != 0 && v47 != *(__int16*)(a1 + 494)) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v47) {
    v49 = v47;
  }
  else {
    v49 = result;
  }
  if (v47 < 0) {
    v49 = 0;
  }
  if (v49 == *(__int16*)(a1 + 492)) {
    v50 = *(_DWORD*)(a1 + 416);
    if ((v50 & 0x10000000) != 0) {
      goto LABEL_77;
    }
  }
  else {
    *(_WORD*)(a1 + 492) = v49;
    v50 = *(_DWORD*)(a1 + 416);
    if ((v50 & 0x10000000) != 0) {
    LABEL_77:
      if ((v6 & 1) == 0) {
        return result;
      }
      goto LABEL_78;
    }
  }
  *(_DWORD*)(a1 + 416) = v50 | 0x10000000;
  game_6c51e0(a1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  GameRoutine_6c6da0(a1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
      v34 = COERCE_AS(__typeof__(v34),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  result = game_6c6ec0(a1),
  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r")),
  v34 = COERCE_AS(__typeof__(v34),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  if ((v6 & 1) == 0) {
    return result;
  }
LABEL_78:
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10) = v11;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 4) = v12;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 8) = v13;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v10 + 12) = v14;
  return result;
}

__int64 Unit_6dcf40(__int64 a1, int a2, char a3)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  bool v10;
  __int64 result;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  bool v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  struct {
    int v23;
    char v24;
  } v23_;

  v6 = game_g_shared_system_skills_ptr;
  v7 = *(_QWORD*)(a1 + 1744);
  v8 = *(unsigned int*)((char*)((_UNKNOWN*)0x168LL) +
                        game_g_shared_system_skills_ptr + 4);
  v9 = *(_QWORD*)(a1 + 1752) - v7;
  v23_.v23 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x168LL) +
                        game_g_shared_system_skills_ptr + 4) &
             0xFFF;
  if (((v8 >> 5) & 0x7F) + 1 <= v9 >> 2 &&
      ((*(_DWORD*)(v7 + 4 * ((v8 >> 5) & 0x7F)) >> v8) & 1) != 0) {
    v10 = game_HasActiveSkill_843420_alt1(&v23_.v23, a1 + 1744);
    result = 0;
    if (a2 == 0) {
      return result;
    }
  }
  else {
    v10 = false;
    result = 0;
    if (a2 == 0) {
      return result;
    }
  }
  if (!v10) {
    if (*(_WORD*)(a1 + 494) != 0) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (a2 < 1 || *(__int16*)(a1 + 492) < 1) {
      return 0;
    }
    else {
      v23_.v24 = 0;
      v12 = game_Unit_GetParam_alt1(a1);
      v13 = *(unsigned int*)((char*)((_UNKNOWN*)0x154LL) + v6);
      v14 = *(_QWORD*)(a1 + 1744);
      v15 = *(_QWORD*)(a1 + 1752) - v14;
      v22 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x154LL) + v6) & 0xFFF;
      if (((v13 >> 5) & 0x7F) + 1 <= v15 >> 2 &&
              ((*(_DWORD*)(v14 + 4 * ((v13 >> 5) & 0x7F)) >> v13) & 1) != 0 &&
              (v16 = v12,
               v17 = game_HasActiveSkill_843420_alt1(&v22, a1 + 1744),
               v12 = v16, v17) ||
          a3 == 0) {
        v18 = 1;
      }
      else {
        v18 = a3 == 1 && *(__int16*)(a1 + 492) > 1;
      }
      v19 = *(__int16*)(a1 + 492);
      v20 = v19 - a2;
      if (*(_WORD*)(a1 + 494) != 0 && v20 != *(__int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v12 >= v20) {
        v21 = v19 - a2;
      }
      else {
        v21 = v12;
      }
      if (v20 >= v18) {
        v18 = v21;
      }
      if (v18 != v19) {
        *(_WORD*)(a1 + 492) = v18;
        game_Unit_OnHpChanged(a1);
      }
      return (unsigned int)-a2;
    }
  }
  return result;
}

__int64 Unit_6ddce0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char v7;
  unsigned __int16* v8;
  __int64* v9;
  __int64 v10;
  int v11;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  unsigned int v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;

  v15 = 0;
  v13_.v14 = v13_.v13;
  v2 = a1 + 828;
  v13_.v13[0] = GameData_1f91d68;
  v13_.v13[1] = &v15;
  v16_.v16[0] = GameData_1f93088;
  v16_.v16[1] = v13_.v13;
  v16_.v17 = v16_.v16;
  v18_.v18[0] = GameData_1f92f88;
  v18_.v18[1] = 13;
  v18_.v18[2] = v16_.v16;
  v18_.v19 = v18_.v18;
  game_UnitItemList_EachItem_alt1((_WORD*)(a1 + 828), (__int64)v18_.v18);
  if (v18_.v19 == v18_.v18) {
    v3 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v18_.v19 + v3))((__int64)v18_.v19);
LABEL_6:
  if (v16_.v17 == v16_.v16) {
    v4 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      goto LABEL_11;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v16_.v17 + v4))((__int64)v16_.v17);
LABEL_11:
  if (v13_.v14 == v13_.v13) {
    v5 = 32;
    goto LABEL_15;
  }
  if (v13_.v14 != nullptr) {
    v5 = 40;
  LABEL_15:
    (*(void (**)(__int64))(*v13_.v14 + v5))((__int64)v13_.v14);
  }
  v6 = 0;
  v7 = 0;
  v8 = (unsigned __int16*)v2;
  v9 = GameData_212c878[0];
  do {
    v10 = *(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * *v8);
    if (*(_BYTE*)(v10 + 72) == 13 && ((v15 >> *(_BYTE*)(v10 + 73)) & 1) == 0 &&
        UnitItem_6e8bc0(v8, a1) && (game_UnitItemList_Equip(v2, v6) & 1) != 0) {
      v11 = *(_DWORD*)(a1 + 416);
      if ((v11 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v11 | 0x10000000;
        game_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        game_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
      game_UnitActor_TryReload_alt1((_QWORD*)a1);
      v7 = 1;
      v15 |= *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * *v8) +
                                 73LL);
    }
    ++v6;
    v8 += 4;
  } while (v6 != 30);
  return v7 & 1;
}

bool Unit_6de0b0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  int v15;

  if ((a2 & 0x80000000) == 0) {
    v4 = a1 + 828;
    v6 = a1 + 828 + 8LL * a2;
    v7 = *(_BYTE*)(v6 + 3);
    *(_QWORD*)v6 = 0;
    if (a3 != 0) {
      v8 = *(unsigned __int16*)(a3 + 16);
      *(_DWORD*)(v6 + 4) = 1;
      *(_WORD*)v6 = v8;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8 * v8) +
                    73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v9 = game_map_MapRandom_instance__ptr[0];
        v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v9 + 1) = v10;
        v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) = v13;
        nn_os_UnlockMutex_alt1(&game_g_random_mutex);
        *(_DWORD*)(v6 + 4) =
            *(_DWORD*)(v6 + 4) & 0xFFFFC00F |
            (16 *
             (((16 * (v13 - 1000 * ((v13 & 0x7FFFFFFFu) / 0x3E8)) + 16) >> 4) &
              0x3FF));
      }
    }
    if ((v7 & 1) != 0 && UnitItem_6e8bc0((unsigned __int16*)v6, a1) &&
        (game_UnitItemList_Equip(v4, a2) & 1) != 0) {
      v14 = *(_DWORD*)(a1 + 416);
      if ((v14 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v14 | 0x10000000;
        game_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        game_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
      game_UnitActor_TryReload_alt1((_QWORD*)a1);
    }
    v15 = *(_DWORD*)(a1 + 416);
    if ((v15 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v15 | 0x10000000;
      game_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      game_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  return (a2 & 0x80000000) == 0;
}

__int64 Unit_6de340(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 (*v7)(_QWORD);
  __int64 v8;
  _QWORD* v9;

  v1 = *(_QWORD*)(a1 + 392);
  if (v1 == 0) {
    return 0;
  }
  if (*(_WORD*)(v1 + 408) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 24);
  v3 = *(_QWORD*)(v2 + 1792);
  v4 = *(_QWORD*)(v2 + 1800);
  if (v3 == v4) {
    return 0;
  }
  while (*(_QWORD*)(v3 + 8) != 0) {
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v3 + 8);
      if (v6 != 0) {
        v7 = *(__int64 (**)(_QWORD))(v6 + 72);
        v8 = *(_QWORD*)(v6 + 80);
        v9 = (_QWORD*)(v6 + (v8 >> 1));
        if ((v8 & 1) != 0) {
          v7 = *(__int64 (**)(_QWORD))((char*)v7 + *v9);
        }
        LOBYTE(a1) = v7(v9);
      }
      else {
        LOBYTE(a1) = 1;
      }
    }
    if (*(_BYTE*)(v3 + 24) == ((v5 == 0) | a1 & 1)) {
      break;
    }
    v3 += 32;
    if (v3 == v4) {
      return 0;
    }
  }
  return *(_QWORD*)v3;
}

bool Unit_6de520(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _BOOL8 result;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;

  v2 = *(_QWORD*)(a1 + 400);
  v3 = *(_QWORD*)(a1 + 408);
  if (v3 != 0) {
    goto LABEL_2;
  }
  if (v2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(a1 + 400);
  if (*(_QWORD*)(v2 + 88) == 0) {
    goto LABEL_2;
  }
  v13 = (__int64*)(a1 + 400);
  v14 = a2;
  v15 = GameRoutine_9a28e0(1);
  if (game_GameModeData_instance_ == 0 ||
      (v16 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v15)) == 0 ||
      (v17 = v13, *(_DWORD*)(v16 + 32) == 0)) {
    v18 = GameRoutine_9a28e0(2);
    v17 = v13;
    if (game_GameModeData_instance_ != 0) {
      v19 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v18);
      if (v19 != 0 && *(_DWORD*)(v19 + 32) != 0) {
        goto LABEL_25;
      }
      v17 = v13;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_26;
      }
      v20 = *(unsigned __int8*)(game_GameModeData_instance_ + 56);
      if ((unsigned int)(v20 - 6) < 2) {
      LABEL_25:
        v17 = (__int64*)(*v13 + 88);
      }
      else {
        v17 = v13;
        if (v20 == 2) {
          v17 = (__int64*)(*(_QWORD*)(a1 + 400) + 88LL);
          if ((*(_BYTE*)(a1 + 418) & 4) == 0) {
            v17 = v13;
          }
        }
      }
    }
  }
LABEL_26:
  v3 = *v17;
  v2 = *v13;
  a2 = v14;
  if (v3 == 0) {
    goto LABEL_6;
  }
LABEL_2:
  v4 = *(unsigned __int16*)(v3 + 128);
  if (*(_WORD*)(v3 + 128) == 0) {
  LABEL_6:
    if (v2 != 0 && *(_WORD*)(v2 + 128) != 0) {
      v7 = *(unsigned __int16*)(v2 + 128) - 1LL;
      v8 = (__int64*)(*(_QWORD*)(v2 + 136) + 8LL);
      do {
        v9 = *v8;
        v8 += 2;
        result = v9 == a2;
      } while (v9 != a2 && v7-- != 0);
      return result;
    }
    return false;
  }
  v5 = (__int64*)(*(_QWORD*)(v3 + 136) + 8LL);
  while (1) {
    v6 = *v5;
    v5 += 2;
    if (v6 == a2) {
      return true;
    }
    if (--v4 == 0) {
      goto LABEL_6;
    }
  }
}

__int64 Unit_6df300(__int64 result, _BYTE* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int16 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _BYTE* v14;
  _DWORD* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  __int64 v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  char v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  _BYTE* v30;
  _DWORD* v31;
  __int64 v32;
  _BYTE* v33;
  _BYTE* v34;
  __int64 v35;
  _BYTE* v36;
  _BYTE* v37;
  _BYTE* v38;
  _WORD v39[2];

  v2 = (unsigned __int8)*a2;
  v3 = *(_QWORD*)(result + 440);
  v4 = result;
  if (v3 != 0) {
    v5 = *(unsigned __int8*)(v3 + 16);
    if (v2 == v5) {
      goto LABEL_3;
    }
  }
  else {
    v5 = 9;
    if (v2 == 9) {
    LABEL_3:
      if (*a2 != 0) {
        v6 = 8;
      }
      else {
        v6 = 520;
      }
      goto LABEL_9;
    }
  }
  if (*a2 != 0) {
    return result;
  }
  v6 = 512;
LABEL_9:
  v39[0] = v6;
  v7 = *(_QWORD*)(result + 1776);
  v8 = *(_QWORD*)(result + 1784) - v7;
  v9 = GameData_212c880[0];
  if ((int)(v8 >> 2) < 1) {
    v12 = 0;
  }
  else {
    v10 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v8 & 0x1FFFFFFFCLL) == 4) {
      v11 = 0;
      v12 = 0;
    }
    else {
      v15 = (_DWORD*)(v7 + 4);
      v11 = 0;
      v12 = 0;
      do {
        v16 = *(_QWORD*)(v10 + 8LL * (*(v15 - 1) & 0xFFF));
        v17 = *(_BYTE**)(v16 + 864);
        if (v17 != nullptr && *v17 != 0) {
          ++v12;
        }
        else {
          v18 = *(_BYTE**)(v16 + 872);
          if (v18 != nullptr && *v18 != 0) {
            ++v12;
          }
        }
        v19 = *(_QWORD*)(v10 + 8LL * (*v15 & 0xFFF));
        v20 = *(_BYTE**)(v19 + 864);
        if (v20 != nullptr && *v20 != 0) {
          ++v12;
        }
        else {
          v21 = *(_BYTE**)(v19 + 872);
          if (v21 != nullptr && *v21 != 0) {
            ++v12;
          }
        }
        v11 += 2;
        v15 += 2;
      } while (((v8 >> 2) & 0x7FFFFFFE) != v11);
    }
    if ((v8 & 4) != 0) {
      v13 = *(_QWORD*)(v10 + 8LL * (*(_DWORD*)(v7 + 4 * v11) & 0xFFF));
      v14 = *(_BYTE**)(v13 + 864);
      if (v14 != nullptr && *v14 != 0) {
        ++v12;
      }
      else {
        v22 = *(_BYTE**)(v13 + 872);
        if (v22 != nullptr && *v22 != 0) {
          ++v12;
        }
      }
    }
  }
  v23 = GameRoutine_850ce0(result + 1360, v39);
  result = GameRoutine_850ce0(v4 + 1456, v39);
  if ((v23 & 1) != 0 || (result & 1) != 0) {
    result = game_Unit_Unknown6cd8f0(v4);
  }
  v24 = *(_QWORD*)(v4 + 1776);
  v25 = *(_QWORD*)(v4 + 1784) - v24;
  if ((int)(v25 >> 2) < 1) {
    v28 = 0;
  }
  else {
    v26 = *(_QWORD*)(*v9 + 64);
    if ((v25 & 0x1FFFFFFFCLL) == 4) {
      v27 = 0;
      v28 = 0;
    }
    else {
      v31 = (_DWORD*)(v24 + 4);
      v27 = 0;
      v28 = 0;
      do {
        v32 = *(_QWORD*)(v26 + 8LL * (*(v31 - 1) & 0xFFF));
        v33 = *(_BYTE**)(v32 + 864);
        if (v33 != nullptr && *v33 != 0) {
          ++v28;
        }
        else {
          v34 = *(_BYTE**)(v32 + 872);
          if (v34 != nullptr && *v34 != 0) {
            ++v28;
          }
        }
        v35 = *(_QWORD*)(v26 + 8LL * (*v31 & 0xFFF));
        v36 = *(_BYTE**)(v35 + 864);
        if (v36 != nullptr && *v36 != 0) {
          ++v28;
        }
        else {
          v37 = *(_BYTE**)(v35 + 872);
          if (v37 != nullptr && *v37 != 0) {
            ++v28;
          }
        }
        v27 += 2;
        v31 += 2;
      } while (((v25 >> 2) & 0x7FFFFFFE) != v27);
    }
    if ((v25 & 4) != 0) {
      v29 = *(_QWORD*)(v26 + 8LL * (*(_DWORD*)(v24 + 4 * v27) & 0xFFF));
      v30 = *(_BYTE**)(v29 + 864);
      if (v30 != nullptr && *v30 != 0) {
        ++v28;
      }
      else {
        v38 = *(_BYTE**)(v29 + 872);
        if (v38 != nullptr && *v38 != 0) {
          ++v28;
        }
      }
    }
  }
  if (v28 != v12) {
    *(_WORD*)(v4 + 20) |= 0x44u;
  }
  if (v2 == v5 && *(_WORD*)(v4 + 494) != 0) {
    *(_WORD*)(v4 + 494) = 0;
  }
  return result;
}

__int64 Unit_6dfe00(__int64 result, __int64 a2)
{
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  _BYTE* v21;
  _DWORD* v22;
  __int64 v23;
  _BYTE* v24;
  _BYTE* v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  _BYTE* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  int v37;
  __int64 v38;
  int v39;
  __int64 v40;
  _DWORD* v41;
  __int64 v42;
  _BYTE* v43;
  _BYTE* v44;
  __int64 v45;
  _BYTE* v46;
  _BYTE* v47;
  int* v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  int v53;
  int v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  __int64 v60;
  int v61;
  __int64 v62;
  _BYTE* v63;
  _DWORD* v64;
  __int64 v65;
  _BYTE* v66;
  _BYTE* v67;
  __int64 v68;
  _BYTE* v69;
  _BYTE* v70;
  _BYTE* v71;
  char v72;
  _BYTE* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  int v80;
  int v81;
  __int64 v82;
  int v83;
  __int64 v84;
  int* v85;
  __int64 v86;
  int v87;
  __int64 v88;
  int v89;
  int v90;
  int v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  __int64 v97;
  int v98;
  __int64 v99;
  _BYTE* v100;
  _DWORD* v101;
  __int64 v102;
  _BYTE* v103;
  _BYTE* v104;
  __int64 v105;
  _BYTE* v106;
  _BYTE* v107;
  _BYTE* v108;
  __int16 v109;
  int v110;
  int v111;
  int v112;
  int v113;
  int v114;
  struct {
    int v115;
    char v116;
  } v115_;
  char v119;
  char v120;

  if (*(_QWORD*)(result + 408) != a2) {
    v5 = result;
    v115_.v116 = 0;
    v6 = game_Unit_GetParam_alt1(result);
    *(_QWORD*)(v5 + 408) = a2;
    v7 = v6;
    if (a2 != 0) {
      v115_.v115 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x114LL) +
                              game_g_shared_system_skills_ptr + 4) &
                   0xFFF;
      if (v115_.v115 != 0) {
        v8 = *(_QWORD*)(v5 + 1776);
        v9 = *(_QWORD*)(v5 + 1784) - v8;
        if ((int)(v9 >> 2) < 1) {
          v12 = 0;
        }
        else {
          v10 = *(_QWORD*)(GameData_21c99b0 + 64);
          if ((v9 & 0x1FFFFFFFCLL) == 4) {
            v11 = 0;
            v12 = 0;
          }
          else {
            v22 = (_DWORD*)(v8 + 4);
            v11 = 0;
            v12 = 0;
            do {
              v23 = *(_QWORD*)(v10 + 8LL * (*(v22 - 1) & 0xFFF));
              v24 = *(_BYTE**)(v23 + 864);
              if (v24 != nullptr && *v24 != 0) {
                ++v12;
              }
              else {
                v25 = *(_BYTE**)(v23 + 872);
                if (v25 != nullptr && *v25 != 0) {
                  ++v12;
                }
              }
              v26 = *(_QWORD*)(v10 + 8LL * (*v22 & 0xFFF));
              v27 = *(_BYTE**)(v26 + 864);
              if (v27 != nullptr && *v27 != 0) {
                ++v12;
              }
              else {
                v28 = *(_BYTE**)(v26 + 872);
                if (v28 != nullptr && *v28 != 0) {
                  ++v12;
                }
              }
              v11 += 2;
              v22 += 2;
            } while (((v9 >> 2) & 0x7FFFFFFE) != v11);
          }
          if ((v9 & 4) != 0) {
            v13 = *(_QWORD*)(v10 + 8LL * (*(_DWORD*)(v8 + 4 * v11) & 0xFFF));
            v14 = *(_BYTE**)(v13 + 864);
            if (v14 != nullptr && *v14 != 0) {
              ++v12;
            }
            else {
              v29 = *(_BYTE**)(v13 + 872);
              if (v29 != nullptr && *v29 != 0) {
                ++v12;
              }
            }
          }
        }
        if ((UnitSkillList_84cc00_alt1((__int64*)(v5 + 1360), &v115_.v115, 1) &
             1) != 0) {
          v30 = *(_QWORD*)(v5 + 1400);
          v31 = *(_QWORD*)(v5 + 1392);
          *(_QWORD*)(v5 + 1448) = 0;
          v32 = v30 - v31;
          *(_QWORD*)(v5 + 1440) = 0;
          if ((int)((unsigned __int64)(v30 - v31) >> 2) >= 1) {
            v33 = GameData_21c99b0;
            v34 = (int)(v32 >> 2);
            v35 = v34 <= 1 ? 1LL : (int)(v32 >> 2);
            if (v34 >= 2) {
              v48 = (int*)(v31 + 4);
              v36 = 0;
              v37 = 0;
              v38 = 0;
              v39 = 0;
              v40 = 0;
              do {
                v40 += 2;
                v49 = *(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                 8LL * (*(v48 - 1) & 0xFFF));
                v50 = v39 | (1 << *(_BYTE*)(v49 + 104));
                *(_WORD*)(v5 + 1440) = v50;
                v51 = (1LL << *(_BYTE*)(v49 + 250)) | v38;
                *(_QWORD*)(v5 + 1448) = v51;
                v52 = (1 << *(_BYTE*)(v49 + 115)) | v37;
                *(_DWORD*)(v5 + 1444) = v52;
                v53 = *(unsigned __int16*)(*(_QWORD*)(v49 + 24) + 1064LL) | v36;
                *(_WORD*)(v5 + 1442) = v53;
                v54 = *v48;
                v48 += 2;
                v55 = *(_QWORD*)(*(_QWORD*)(v33 + 64) + 8LL * (v54 & 0xFFF));
                v39 = v50 | (1 << *(_BYTE*)(v55 + 104));
                *(_WORD*)(v5 + 1440) = v39;
                v38 = (1LL << *(_BYTE*)(v55 + 250)) | v51;
                *(_QWORD*)(v5 + 1448) = v38;
                v37 = (1 << *(_BYTE*)(v55 + 115)) | v52;
                *(_DWORD*)(v5 + 1444) = v37;
                v36 = *(unsigned __int16*)(*(_QWORD*)(v55 + 24) + 1064LL) | v53;
                *(_WORD*)(v5 + 1442) = v36;
              } while ((v35 & 0x7FFFFFFFFFFFFFFELL) != v40);
            }
            else {
              LOWORD(v36) = 0;
              v37 = 0;
              v38 = 0;
              LOWORD(v39) = 0;
              v40 = 0;
            }
            if ((v35 & 1) != 0) {
              v56 = *(_QWORD*)(*(_QWORD*)(v33 + 64) +
                               8LL * (*(_DWORD*)(v31 + 4 * v40) & 0xFFF));
              *(_WORD*)(v5 + 1440) = v39 | (1 << *(_BYTE*)(v56 + 104));
              *(_QWORD*)(v5 + 1448) = (1LL << *(_BYTE*)(v56 + 250)) | v38;
              *(_DWORD*)(v5 + 1444) = (1 << *(_BYTE*)(v56 + 115)) | v37;
              *(_WORD*)(v5 + 1442) =
                  *(_WORD*)(*(_QWORD*)(v56 + 24) + 1064LL) | v36;
            }
          }
          game_Unit_Unknown6cd8f0_alt1((_WORD*)v5);
        }
        v57 = *(_QWORD*)(v5 + 1776);
        v58 = *(_QWORD*)(v5 + 1784) - v57;
        if ((int)(v58 >> 2) < 1) {
          v61 = 0;
        }
        else {
          v59 = *(_QWORD*)(GameData_21c99b0 + 64);
          if ((v58 & 0x1FFFFFFFCLL) == 4) {
            v60 = 0;
            v61 = 0;
          }
          else {
            v64 = (_DWORD*)(v57 + 4);
            v60 = 0;
            v61 = 0;
            do {
              v65 = *(_QWORD*)(v59 + 8LL * (*(v64 - 1) & 0xFFF));
              v66 = *(_BYTE**)(v65 + 864);
              if (v66 != nullptr && *v66 != 0) {
                ++v61;
              }
              else {
                v67 = *(_BYTE**)(v65 + 872);
                if (v67 != nullptr && *v67 != 0) {
                  ++v61;
                }
              }
              v68 = *(_QWORD*)(v59 + 8LL * (*v64 & 0xFFF));
              v69 = *(_BYTE**)(v68 + 864);
              if (v69 != nullptr && *v69 != 0) {
                ++v61;
              }
              else {
                v70 = *(_BYTE**)(v68 + 872);
                if (v70 != nullptr && *v70 != 0) {
                  ++v61;
                }
              }
              v60 += 2;
              v64 += 2;
            } while (((v58 >> 2) & 0x7FFFFFFE) != v60);
          }
          if ((v58 & 4) != 0) {
            v62 = *(_QWORD*)(v59 + 8LL * (*(_DWORD*)(v57 + 4 * v60) & 0xFFF));
            v63 = *(_BYTE**)(v62 + 864);
            if (v63 != nullptr && *v63 != 0) {
              ++v61;
            }
            else {
              v71 = *(_BYTE**)(v62 + 872);
              if (v71 != nullptr && *v71 != 0) {
                ++v61;
              }
            }
          }
        }
        if (v61 != v12) {
          *(_WORD*)(v5 + 20) |= 0x44u;
        }
      }
      v72 = *(_BYTE*)(a2 + 416);
    }
    else {
      v114 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x114LL) +
                        game_g_shared_system_skills_ptr + 4) &
             0xFFF;
      if (v114 != 0) {
        v15 = *(_QWORD*)(v5 + 1776);
        v16 = *(_QWORD*)(v5 + 1784) - v15;
        if ((int)(v16 >> 2) < 1) {
          v19 = 0;
        }
        else {
          v17 = *(_QWORD*)(*GameData_212c880[0] + 64);
          if ((v16 & 0x1FFFFFFFCLL) == 4) {
            v18 = 0;
            v19 = 0;
          }
          else {
            v41 = (_DWORD*)(v15 + 4);
            v18 = 0;
            v19 = 0;
            do {
              v42 = *(_QWORD*)(v17 + 8LL * (*(v41 - 1) & 0xFFF));
              v43 = *(_BYTE**)(v42 + 864);
              if (v43 != nullptr && *v43 != 0) {
                ++v19;
              }
              else {
                v44 = *(_BYTE**)(v42 + 872);
                if (v44 != nullptr && *v44 != 0) {
                  ++v19;
                }
              }
              v45 = *(_QWORD*)(v17 + 8LL * (*v41 & 0xFFF));
              v46 = *(_BYTE**)(v45 + 864);
              if (v46 != nullptr && *v46 != 0) {
                ++v19;
              }
              else {
                v47 = *(_BYTE**)(v45 + 872);
                if (v47 != nullptr && *v47 != 0) {
                  ++v19;
                }
              }
              v18 += 2;
              v41 += 2;
            } while (((v16 >> 2) & 0x7FFFFFFE) != v18);
          }
          if ((v16 & 4) != 0) {
            v20 = *(_QWORD*)(v17 + 8LL * (*(_DWORD*)(v15 + 4 * v18) & 0xFFF));
            v21 = *(_BYTE**)(v20 + 864);
            if (v21 != nullptr && *v21 != 0) {
              ++v19;
            }
            else {
              v73 = *(_BYTE**)(v20 + 872);
              if (v73 != nullptr && *v73 != 0) {
                ++v19;
              }
            }
          }
        }
        if ((UnitSkillList_84d980_alt1((__int64*)(v5 + 1360),
                                       (unsigned int*)&v114) &
             1) != 0) {
          v74 = *(_QWORD*)(v5 + 1400);
          v75 = *(_QWORD*)(v5 + 1392);
          *(_QWORD*)(v5 + 1448) = 0;
          v76 = v74 - v75;
          *(_QWORD*)(v5 + 1440) = 0;
          if ((int)((unsigned __int64)(v74 - v75) >> 2) >= 1) {
            v77 = (int)(v76 >> 2);
            v78 = v77 <= 1 ? 1LL : (int)(v76 >> 2);
            v79 = *GameData_212c880[0];
            if (v77 >= 2) {
              v85 = (int*)(v75 + 4);
              v80 = 0;
              v81 = 0;
              v82 = 0;
              v83 = 0;
              v84 = 0;
              do {
                v84 += 2;
                v86 = *(_QWORD*)(*(_QWORD*)(v79 + 64) +
                                 8LL * (*(v85 - 1) & 0xFFF));
                v87 = v83 | (1 << *(_BYTE*)(v86 + 104));
                *(_WORD*)(v5 + 1440) = v87;
                v88 = (1LL << *(_BYTE*)(v86 + 250)) | v82;
                *(_QWORD*)(v5 + 1448) = v88;
                v89 = (1 << *(_BYTE*)(v86 + 115)) | v81;
                *(_DWORD*)(v5 + 1444) = v89;
                v90 = *(unsigned __int16*)(*(_QWORD*)(v86 + 24) + 1064LL) | v80;
                *(_WORD*)(v5 + 1442) = v90;
                v91 = *v85;
                v85 += 2;
                v92 = *(_QWORD*)(*(_QWORD*)(v79 + 64) + 8LL * (v91 & 0xFFF));
                v83 = v87 | (1 << *(_BYTE*)(v92 + 104));
                *(_WORD*)(v5 + 1440) = v83;
                v82 = (1LL << *(_BYTE*)(v92 + 250)) | v88;
                *(_QWORD*)(v5 + 1448) = v82;
                v81 = (1 << *(_BYTE*)(v92 + 115)) | v89;
                *(_DWORD*)(v5 + 1444) = v81;
                v80 = *(unsigned __int16*)(*(_QWORD*)(v92 + 24) + 1064LL) | v90;
                *(_WORD*)(v5 + 1442) = v80;
              } while ((v78 & 0x7FFFFFFFFFFFFFFELL) != v84);
            }
            else {
              LOWORD(v80) = 0;
              v81 = 0;
              v82 = 0;
              LOWORD(v83) = 0;
              v84 = 0;
            }
            if ((v78 & 1) != 0) {
              v93 = *(_QWORD*)(*(_QWORD*)(v79 + 64) +
                               8LL * (*(_DWORD*)(v75 + 4 * v84) & 0xFFF));
              *(_WORD*)(v5 + 1440) = v83 | (1 << *(_BYTE*)(v93 + 104));
              *(_QWORD*)(v5 + 1448) = (1LL << *(_BYTE*)(v93 + 250)) | v82;
              *(_DWORD*)(v5 + 1444) = (1 << *(_BYTE*)(v93 + 115)) | v81;
              *(_WORD*)(v5 + 1442) =
                  *(_WORD*)(*(_QWORD*)(v93 + 24) + 1064LL) | v80;
            }
          }
          game_Unit_Unknown6cd8f0_alt1((_WORD*)v5);
        }
        v94 = *(_QWORD*)(v5 + 1776);
        v95 = *(_QWORD*)(v5 + 1784) - v94;
        if ((int)(v95 >> 2) < 1) {
          v98 = 0;
        }
        else {
          v96 = *(_QWORD*)(GameData_21c99b0 + 64);
          if ((v95 & 0x1FFFFFFFCLL) == 4) {
            v97 = 0;
            v98 = 0;
          }
          else {
            v101 = (_DWORD*)(v94 + 4);
            v97 = 0;
            v98 = 0;
            do {
              v102 = *(_QWORD*)(v96 + 8LL * (*(v101 - 1) & 0xFFF));
              v103 = *(_BYTE**)(v102 + 864);
              if (v103 != nullptr && *v103 != 0) {
                ++v98;
              }
              else {
                v104 = *(_BYTE**)(v102 + 872);
                if (v104 != nullptr && *v104 != 0) {
                  ++v98;
                }
              }
              v105 = *(_QWORD*)(v96 + 8LL * (*v101 & 0xFFF));
              v106 = *(_BYTE**)(v105 + 864);
              if (v106 != nullptr && *v106 != 0) {
                ++v98;
              }
              else {
                v107 = *(_BYTE**)(v105 + 872);
                if (v107 != nullptr && *v107 != 0) {
                  ++v98;
                }
              }
              v97 += 2;
              v101 += 2;
            } while (((v95 >> 2) & 0x7FFFFFFE) != v97);
          }
          if ((v95 & 4) != 0) {
            v99 = *(_QWORD*)(v96 + 8LL * (*(_DWORD*)(v94 + 4 * v97) & 0xFFF));
            v100 = *(_BYTE**)(v99 + 864);
            if (v100 != nullptr && *v100 != 0) {
              ++v98;
            }
            else {
              v108 = *(_BYTE**)(v99 + 872);
              if (v108 != nullptr && *v108 != 0) {
                ++v98;
              }
            }
          }
        }
        if (v98 != v19) {
          *(_WORD*)(v5 + 20) |= 0x44u;
        }
      }
      v72 = 0;
    }
    *(_BYTE*)(v5 + 806) = v72;
    game_Unit_Unknown6c8630_alt1(v5);
    v109 = *(_WORD*)(v5 + 20);
    v119 = 0;
    *(_WORD*)(v5 + 20) = v109 | 1;
    result = game_Unit_GetParam_alt1(v5);
    v110 = result - v7;
    if ((_DWORD)result != v7) {
      v111 = *(__int16*)(v5 + 492);
      if ((int)result <= v7) {
        v110 = 0;
      }
      v120 = 0;
      v112 = v110 + v111;
      result = game_Unit_GetParam_alt1(v5);
      if (*(_WORD*)(v5 + 494) != 0 && v112 != *(__int16*)(v5 + 494)) {
        *(_WORD*)(v5 + 494) = 0;
      }
      if ((int)result >= v112) {
        v113 = v112;
      }
      else {
        v113 = result;
      }
      if (v112 < 0) {
        v113 = 0;
      }
      if (v113 != *(__int16*)(v5 + 492)) {
        *(_WORD*)(v5 + 492) = v113;
      }
    }
  }
  return result;
}

__int64 game_Unit_GetMorphSkill(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  __int64 v17;

  v4 = *(_QWORD*)(a1 + 408);
  if (v4 == 0) {
    return 0;
  }
  v6 = v15;
  v17 = 0;
  v15[0] = GameData_1f91ee8;
  v15[1] = v4;
  v16 = v15;
  v15[2] = &v17;
  if ((*(_BYTE*)(a1 + 1537) & 2) == 0) {
    goto LABEL_15;
  }
  v7 = *(_QWORD*)(a1 + 1496);
  v8 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v7 - v8) >> 2) < 1) {
    v6 = v15;
  LABEL_15:
    v14 = 32;
    goto LABEL_16;
  }
  v9 = 0;
  v10 = 0;
  v11 = GameData_212c880[0];
  v12 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                             8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                  104LL) == 9) {
      if (v16 == nullptr) {
        GameRoutine_60a310_alt1(0, a2, a3, a4);
      }
      (*(void (**)(_QWORD*, __int64))(*v16 + 48LL))(v16, v8 + v9);
      v12 = *v11;
      v7 = *(_QWORD*)(a1 + 1496);
      v8 = *(_QWORD*)(a1 + 1488);
    }
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(v7 - v8) >> 2));
  v6 = v16;
  if (v16 == v15) {
    goto LABEL_15;
  }
  if (v16 != nullptr) {
    v14 = 40;
  LABEL_16:
    (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v14))(v6, a2, a3);
  }
  return v17;
}

__int64 Unit_6e0810(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;

  v1 = *(_QWORD*)(result + 2200);
  if (v1 != 0) {
    v2 = result;
    v3 = GameData_212ce88[0];
    v4 = (_QWORD*)*GameData_212ce88[0];
    v5 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
    v6 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
    v7 = ((v5 - v6) << 6) - 1;
    if (v5 == v6) {
      v7 = 0;
    }
    v8 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
         *(_QWORD*)(*GameData_212ce88[0] + 10768);
    if (v7 == v8) {
      GameRoutine_74cd60(v4 + 1342);
      v6 = v4[1343];
      v8 = v4[1347] + v4[1346];
    }
    *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v8 >> 9)) + 8 * (v8 & 0x1FF)) = v4[1];
    v4[1] = v1;
    v9 = *v3;
    ++v4[1347];
    v10 = (unsigned int)*(char*)(v2 + 584);
    v11 = (unsigned int)*(char*)(v2 + 585);
    v26 = 370413570;
    result = GameRoutine_748f80(v9, v2, v10, v11, 0xFFFFFFFFLL, &v26);
    v12 = (_QWORD*)*v3;
    v13 = *(_QWORD*)(*v3 + 10776);
    v14 = *(_QWORD*)(*v3 + 10768);
    v15 = *(_QWORD*)(*v3 + 10744);
    v16 = *(_QWORD*)(*v3 + 10752);
    v17 = v16 == v15;
    v18 = v13 - 1 + v14;
    v19 = v18 >> 9;
    v20 = v18 & 0x1FF;
    v21 = ((v16 - v15) << 6) - 1;
    v22 = *(_QWORD*)(v15 + 8 * v19);
    if (v17) {
      v21 = 0;
    }
    v23 = *(_QWORD*)(v22 + 8 * v20);
    v12[1347] = v13 - 1;
    v12[1] = v23;
    if ((unsigned __int64)(v21 - (v13 + v14) + 1) >= 0x400) {
      v24 = *(_QWORD*)(v16 - 8);
      if (v24 != 0) {
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
        v16 = v12[1344];
      }
      v12[1344] = v16 - 8;
    }
  }
  return result;
}

__int64 Unit_6e09a0(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  char v10;
  int v11;

  v1 = (_BYTE*)(a1 + 847);
  v2 = 2;
  v4 = GameData_212c878[0];
  v5 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v1 - 19) != 0 && (*(v1 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                       8LL * *(unsigned __int16*)(v1 - 19)) +
                            72LL) < 8u) {
      LODWORD(v2) = v2 - 2;
      goto LABEL_16;
    }
    if (*(_WORD*)(v1 - 11) != 0 && (*(v1 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                       8LL * *(unsigned __int16*)(v1 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v1 - 3) != 0 && (*v1 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                       8LL * *(unsigned __int16*)(v1 - 3)) +
                            72LL) < 8u) {
      goto LABEL_16;
    }
    v2 += 3;
    v1 += 24;
    if (v2 == 32) {
      LODWORD(v2) = -1;
      goto LABEL_16;
    }
  }
  LODWORD(v2) = v2 - 1;
LABEL_16:
  result = GameRoutine_6cc0a0(a1);
  v7 = *v4;
  v8 = (_BYTE*)(a1 + 847);
  v9 = 2;
  while (1) {
    if (*(_WORD*)(v8 - 19) != 0 && (*(v8 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v8 - 19)) +
                            72LL) < 8u) {
      LODWORD(v9) = v9 - 2;
    LABEL_31:
      if ((_DWORD)v2 == (_DWORD)v9) {
        return result;
      }
      goto LABEL_32;
    }
    if (*(_WORD*)(v8 - 11) != 0 && (*(v8 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v8 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v8 - 3) != 0 && (*v8 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v8 - 3)) +
                            72LL) < 8u) {
      goto LABEL_31;
    }
    v9 += 3;
    v8 += 24;
    if (v9 == 32) {
      if ((_DWORD)v2 == -1) {
        return result;
      }
      goto LABEL_32;
    }
  }
  if ((_DWORD)v2 == (_DWORD)v9 - 1) {
    return result;
  }
LABEL_32:
  result = game_Unit_EquipFirstWeapon(a1);
  if ((result & 1) != 0) {
    v10 = game_UnitItemList_Sort(a1 + 828, 0, 6);
    result = game_UnitItemList_Sort(a1 + 828, 6, 24);
    if ((v10 & 1) != 0 || (result & 1) != 0) {
      v11 = *(_DWORD*)(a1 + 416);
      if ((v11 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v11 | 0x10000000;
        GameRoutine_6c51e0(a1);
        GameRoutine_6c6da0_alt1(a1);
        result = GameRoutine_6c6ec0_alt1(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
    }
  }
  return result;
}

__int64 game_Unit_LevelUp(__int64 a1, char a2)
{
  int v4;
  char v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 result;
  _QWORD v20[4];
  _QWORD* v21;

  LOBYTE(v20[0]) = 0;
  v4 = game_Unit_GetParam(a1, v20, 1);
  v5 = *(_BYTE*)(a1 + 498);
  v6 = v4;
  *(_BYTE*)(a1 + 498) = a2;
  v7 = GameRoutine_9a28e0(47);
  if (game_GameModeData_instance_ != 0 &&
      (v8 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v7)) != 0 &&
      *(_DWORD*)(v8 + 32) != 0) {
    v20[0] = GameData_1f91f68;
    v20[1] = a1;
    v21 = v20;
    GameRoutine_8c5700(a1, v20);
  }
  else {
    v20[0] = GameData_1f91ff8;
    v20[1] = a1;
    v21 = v20;
    GameRoutine_8c5c60(a1, v20);
  }
  if (v21 == v20) {
    v9 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_11;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v21 + v9))((__int64)v21);
LABEL_11:
  *(_BYTE*)(a1 + 498) = v5;
  LOBYTE(v20[0]) = 0;
  v10 = game_Unit_GetParam(a1, v20, 1);
  if (v10 > v6) {
    v11 = *(__int16*)(a1 + 492);
    LOBYTE(v20[0]) = 0;
    v12 = v10 - v6 + v11;
    v13 = game_Unit_GetParam(a1, v20, 1);
    if (*(_WORD*)(a1 + 494) != 0 && v12 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v13 >= v12) {
      v14 = v12;
    }
    else {
      v14 = v13;
    }
    if (v12 < 0) {
      v14 = 0;
    }
    if (v14 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v14;
    }
  }
  v15 = *(_DWORD*)(a1 + 448);
  nn_os_LockMutex(&game_g_random_mutex);
  v16 = v15 ^ (v15 >> 30);
  v17 =
      1812433253 * ((1812433253 * ((1812433253 * v16) ^
                                   ((unsigned int)(1812433253 * v16) >> 30)) +
                     1) ^
                    ((1812433253 * ((1812433253 * v16) ^
                                    ((unsigned int)(1812433253 * v16) >> 30)) +
                      1) >>
                     30)) +
      2;
  v18 = 1812433253 * (v17 ^ (v17 >> 30)) + 3;
  nn_os_UnlockMutex(&game_g_random_mutex);
  nn_os_LockMutex(&game_g_random_mutex);
  result = nn_os_UnlockMutex(&game_g_random_mutex);
  *(_DWORD*)(a1 + 448) =
      ((((1011558400 * v16) ^ (unsigned int)(1812433253 * v16)) >> 8) ^
       (v18 >> 19) ^ (1011558400 * v16) ^ (1812433253 * v16) ^ v18) &
      0x7FFFFFFF;
  return result;
}

__int64 Unit_6e1e20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                    __int64 a6)
{

#pragma clang fp contract(off)
  unsigned int v6;
  char v7;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  __int64 v46;
  int v47;
  int v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 result;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int16 v98;
  __int64 v99;
  __int64 v100;
  __int16 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int16 v112;
  __int64 v113;
  __int64 v114;
  int v115;
  float v116;
  int v117;
  struct {
    __int64 v118;
    __int64 v119;
    __int64 v120;
    int v121;
    char gap28_[4];
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
  } v118_;

  v6 = a4;
  v7 = a3;
  GameRoutine_6c3050_alt1(a1, a2, a3, a4, a5, a6);
  v10 = *(int*)(a2 + 20);
  v11 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  v12 = *(unsigned __int8*)(v11 + v10);
  *(_DWORD*)(a2 + 20) = v10 + 2;
  v13 = v12 | (*(unsigned __int8*)(v11 + v10 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v10 + 3;
  v14 = *(unsigned __int8*)(v11 + v10 + 2);
  *(_DWORD*)(a2 + 20) = v10 + 4;
  *(_DWORD*)(a1 + 416) =
      v13 | (v14 << 16) | (*(unsigned __int8*)(v11 + v10 + 3) << 24);
  if ((int)v6 < 34) {
    *(_QWORD*)(a1 + 392) = GameRoutine_6e5dc0(a2);
    v15 = GameRoutine_6e2b60(a2);
  }
  else {
    *(_QWORD*)(a1 + 392) = GameRoutine_6e5c80(a2);
    v15 = GameRoutine_6e2a20(a2);
  }
  *(_QWORD*)(a1 + 400) = v15;
  v16 = *(int*)(a2 + 20);
  v17 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  v18 = *(unsigned __int8*)(v17 + v16);
  *(_DWORD*)(a2 + 20) = v16 + 2;
  v19 = v18 | (*(unsigned __int8*)(v17 + v16 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v16 + 3;
  v20 = *(unsigned __int8*)(v17 + v16 + 2);
  *(_DWORD*)(a2 + 20) = v16 + 4;
  *(_DWORD*)(a1 + 448) =
      v19 | (v20 << 16) | (*(unsigned __int8*)(v17 + v16 + 3) << 24);
  if ((int)v6 < 24) {
    GameRoutine_70d370((_WORD*)(a1 + 468), a2);
    v40 = *(_DWORD*)(a2 + 20);
    if (v6 == 5) {
      v40 += 11;
    }
  }
  else {
    v21 = *(int*)(a2 + 20);
    v22 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v21 + 1;
    v23 = *(unsigned __int8*)(v22 + v21);
    *(_DWORD*)(a2 + 20) = v21 + 2;
    v24 = v23 | (*(unsigned __int8*)(v22 + v21 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v21 + 3;
    v25 = *(unsigned __int8*)(v22 + v21 + 2);
    *(_DWORD*)(a2 + 20) = v21 + 4;
    *(_DWORD*)(a1 + 452) =
        v24 | (v25 << 16) | (*(unsigned __int8*)(v22 + v21 + 3) << 24);
    if (v6 >= 0x23) {
      v26 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v26 + 1;
      *(_BYTE*)(a1 + 456) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26);
      v27 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v27 + 1;
      *(_BYTE*)(a1 + 457) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27);
      v28 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v28 + 1;
      *(_BYTE*)(a1 + 458) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28);
      v29 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v29 + 1;
      *(_BYTE*)(a1 + 459) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29);
      v30 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v30 + 1;
      *(_BYTE*)(a1 + 460) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30);
      v31 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v31 + 1;
      *(_BYTE*)(a1 + 461) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31);
      v32 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v32 + 1;
      *(_BYTE*)(a1 + 462) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32);
      v33 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v33 + 1;
      *(_BYTE*)(a1 + 463) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33);
      v34 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v34 + 1;
      *(_BYTE*)(a1 + 464) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34);
      v35 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v35 + 1;
      *(_BYTE*)(a1 + 465) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35);
      v36 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v36 + 1;
      *(_BYTE*)(a1 + 466) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36);
    }
    GameRoutine_70d370((_WORD*)(a1 + 468), a2);
    v40 = *(_DWORD*)(a2 + 20);
  }
  *(_DWORD*)(a2 + 20) = v40 + 1;
  *(_BYTE*)(a1 + 498) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40);
  v41 = *(int*)(a2 + 20);
  v42 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v41 + 1;
  v43 = *(unsigned __int8*)(v42 + v41);
  *(_DWORD*)(a2 + 20) = v41 + 2;
  v44 = v43 | (*(unsigned __int8*)(v42 + v41 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v41 + 3;
  v45 = *(unsigned __int8*)(v42 + v41 + 2);
  *(_DWORD*)(a2 + 20) = v41 + 4;
  LODWORD(v41) = *(unsigned __int8*)(v42 + v41 + 3);
  v46 = GameData_21d9968;
  v47 = v44 | (v45 << 16) | ((_DWORD)v41 << 24);
  v48 = *(unsigned __int8*)(a1 + 498);
  v49 = GameData_21d9970 - GameData_21d9968;
  *(_DWORD*)(a1 + 504) = v47;
  v50 = v49 >> 2;
  if (v48 >= (int)(v49 >> 2)) {
    v51 = v49 >> 2;
  }
  else {
    v51 = v48;
  }
  if (v48 != 0) {
    v52 = v51 - 1;
  }
  else {
    v51 = 1;
    v52 = 0;
  }
  v53 = *(_DWORD*)(v46 + 4 * v52);
  if (v51 == (_DWORD)v50) {
    v54 = 0;
  }
  else {
    v54 = *(_DWORD*)(v46 + 4LL * v51);
  }
  if (v53 <= v47) {
    v55 = v47;
  }
  else {
    v55 = v53;
  }
  if (v47 >= v54) {
    v56 = v53;
  }
  else {
    v56 = v55;
  }
  if (v47 != v56) {
    *(_DWORD*)(a1 + 504) = v53;
  }
  v57 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v57 + 1;
  *(_WORD*)(a1 + 492) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v57);
  if ((int)v6 >= 17) {
    v58 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v58 + 1;
    *(_WORD*)(a1 + 494) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v58);
  }
  v59 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v59 + 1;
  *(_BYTE*)(a1 + 496) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59);
  v60 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v60 + 1;
  *(_BYTE*)(a1 + 497) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v60);
  if ((int)v6 >= 15) {
    v61 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v61 + 1;
    *(_BYTE*)(a1 + 499) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61);
    v62 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v62 + 1;
    *(_BYTE*)(a1 + 500) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v62);
    if (v6 >= 0x15) {
      v63 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v63 + 1;
      *(_BYTE*)(a1 + 501) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v63);
    }
    goto LABEL_37;
  }
  if ((int)v6 < 4) {
    v64 = *(_DWORD*)(a2 + 20) + 6;
    goto LABEL_36;
  }
  if (v6 <= 0xB) {
    v64 = *(_DWORD*)(a2 + 20) + 8;
  LABEL_36:
    *(_DWORD*)(a2 + 20) = v64;
  }
LABEL_37:
  UnitMastery_7fd6e0(a1 + 512, a2, v6);
  v65 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v65 + 1;
  *(_BYTE*)(a1 + 584) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v65);
  v66 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v66 + 1;
  *(_BYTE*)(a1 + 585) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v66);
  v67 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v67 + 1;
  *(_BYTE*)(a1 + 586) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v67);
  v68 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v68 + 1;
  *(_BYTE*)(a1 + 587) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v68);
  v69 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v69 + 1;
  *(_BYTE*)(a1 + 624) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v69);
  UnitItemList_713a00((_QWORD*)(a1 + 828), (__int64*)a2);
  GameRoutine_851480((__int64*)(a1 + 1168), (__int64*)a2);
  GameRoutine_851480((__int64*)(a1 + 1264), (__int64*)a2);
  GameRoutine_851480((__int64*)(a1 + 1360), (__int64*)a2);
  if ((int)v6 < 3) {
    goto LABEL_54;
  }
  GameRoutine_851480((__int64*)(a1 + 1456), (__int64*)a2);
  if (v6 == 31) {
    v118_.v121 = 0;
    v118_.v119 = 0;
    v118_.v120 = 0;
    v118_.v118 = 0;
    v118_.v122 = 0;
    v118_.v123 = 0;
    v118_.v124 = 0;
    v118_.v125 = 0;
    v118_.v126 = 0;
    v118_.v127 = 0;
    v118_.v128 = 0;
    v118_.v129 = 0;
    GameRoutine_851480(&v118_.v118, (__int64*)a2);
    v70 = (__int64*)fw_memory_g_heap_manager_ptr;
    if (v118_.v125 != 0) {
      v71 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v118_.v126 = v118_.v125;
      v72 = 128;
      if (*(_QWORD*)(v71 + 200) == 0) {
        v72 = 56;
      }
      nn_mem_StandardAllocator_Free(v71 + v72, v118_.v125);
    }
    if (v118_.v122 != 0) {
      v73 = *v70;
      v118_.v123 = v118_.v122;
      v74 = 128;
      if (*(_QWORD*)(v73 + 200) == 0) {
        v74 = 56;
      }
      nn_mem_StandardAllocator_Free(v73 + v74, v118_.v122);
    }
    if (v118_.v118 != 0) {
      v75 = *v70;
      v118_.v119 = v118_.v118;
      v76 = 128;
      if (*(_QWORD*)(v75 + 200) == 0) {
        v76 = 56;
      }
      nn_mem_StandardAllocator_Free(v75 + v76, v118_.v118);
    }
    GameRoutine_851480((__int64*)(a1 + 1552), (__int64*)a2);
    goto LABEL_52;
  }
  if (v6 >= 0x1E) {
    GameRoutine_851480((__int64*)(a1 + 1552), (__int64*)a2);
    if (v6 >= 0x21) {
      GameRoutine_851480((__int64*)(a1 + 1072), (__int64*)a2);
      game_UnitSkill_Deserialize(a1 + 1872, a2);
    }
  LABEL_52:
    Unit_9331a0(a1 + 1880, a2);
    GameRoutine_70f2d0(a1 + 1944, a2);
    if (v6 > 0x16) {
      goto LABEL_55;
    }
  LABEL_53:
    v77 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v77 + 1;
    if (*(_BYTE*)(*(_QWORD*)(a2 + 8) + v77) == 0) {
      goto LABEL_55;
    }
    goto LABEL_54;
  }
  if (v6 >= 0x12) {
    goto LABEL_52;
  }
  if (v6 < 0xE) {
  LABEL_54:
    v78 = *(_QWORD*)a2;
    LODWORD(v118_.v118) = 0;
    (*(void (**)(__int64, __int64*))(v78 + 16))(a2, &v118_.v118);
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
    goto LABEL_55;
  }
  v89 = *(_QWORD*)a2;
  LODWORD(v118_.v118) = 0;
  (*(void (**)(__int64, __int64*))(v89 + 16))(a2, &v118_.v118);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  v90 = *(_QWORD*)a2;
  LODWORD(v118_.v118) = 0;
  (*(void (**)(__int64, __int64*))(v90 + 16))(a2, &v118_.v118);
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  if (v6 >= 0x10) {
    goto LABEL_53;
  }
LABEL_55:
  if ((v7 & 1) != 0) {
    GameRoutine_11ea590(a1 + 1968, (__int64*)a2);
  }
  if (v6 - 1 <= 7) {
    ++*(_DWORD*)(a2 + 20);
  }
  if ((int)v6 <= 6) {
    *(_WORD*)(a1 + 2088) = 0;
    goto LABEL_63;
  }
  v79 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v79 + 1;
  *(_BYTE*)(a1 + 2089) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v79);
  if (v6 == 7) {
    *(_BYTE*)(a1 + 2088) = 0;
    goto LABEL_63;
  }
  v86 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v86 + 1;
  *(_BYTE*)(a1 + 2088) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v86);
  if ((int)v6 >= 34) {
    v87 = *(int*)(a2 + 20);
    v88 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v87 + 1;
    if (*(_BYTE*)(v88 + v87) != 0) {
      *(_DWORD*)(a2 + 20) = v87 + 2;
      *(_BYTE*)(a1 + 806) = *(_BYTE*)(v88 + v87 + 1);
      *(_QWORD*)(a1 + 408) = GameRoutine_6e2a20(a2);
    }
    goto LABEL_81;
  }
  if (v6 < 0xB) {
    goto LABEL_63;
  }
  *(_QWORD*)(a1 + 408) = GameRoutine_6e2b60(a2);
  v91 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v91 + 1;
  *(_BYTE*)(a1 + 806) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91);
  if (v6 > 0x1C) {
  LABEL_81:
    v92 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v92 + 1;
    *(_BYTE*)(a1 + 2090) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92);
    v93 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v93 + 1;
    *(_BYTE*)(a1 + 2091) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v93);
    v94 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v94 + 1;
    *(_WORD*)(a1 + 2094) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v94);
    v95 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v95 + 1;
    *(_BYTE*)(a1 + 2092) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95);
    v96 = *(int*)(a2 + 20);
    v97 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v96 + 1;
    v98 = *(unsigned __int8*)(v97 + v96);
    if (v6 < 0x24) {
      *(_DWORD*)(a2 + 20) = v96 + 2;
      *(_WORD*)(a1 + 2096) = v98 | (*(unsigned __int8*)(v97 + v96 + 1) << 8);
      if (v6 < 0x21) {
        goto LABEL_63;
      }
    }
    else {
      *(_BYTE*)(a1 + 2093) = v98;
      v99 = *(int*)(a2 + 20);
      v100 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v99 + 1;
      v101 = *(unsigned __int8*)(v100 + v99);
      *(_DWORD*)(a2 + 20) = v99 + 2;
      *(_WORD*)(a1 + 2096) = v101 | (*(unsigned __int8*)(v100 + v99 + 1) << 8);
    }
    result = GameRoutine_8f76e0(a1 + 592, a2);
    v102 = *(int*)(a2 + 20);
    v103 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v102 + 1;
    if (*(_BYTE*)(v103 + v102) != 0) {
      *(_DWORD*)(a2 + 20) = v102 + 2;
      *(_BYTE*)(a1 + 1960) = *(_BYTE*)(v103 + v102 + 1);
      v104 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v104 + 1;
      *(_BYTE*)(a1 + 1961) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v104);
      v105 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v105 + 1;
      *(_BYTE*)(a1 + 1962) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v105);
      v106 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v106 + 1;
      *(_BYTE*)(a1 + 1963) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v106);
      result = GameRoutine_7c8860(a2);
      if (result != 0) {
        *(_WORD*)(a1 + 1964) = *(_WORD*)(result + 16) & 0xFFF;
      }
      else {
        *(_WORD*)(a1 + 1964) = 0;
      }
    }
    else {
      *(_QWORD*)(a1 + 1960) = 0;
    }
    v113 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v113 + 1;
    *(_BYTE*)(a1 + 805) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v113);
    goto LABEL_99;
  }
  if (v6 >= 0x13) {
    v108 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v108 + 1;
    *(_BYTE*)(a1 + 2091) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v108);
    if (v6 != 19) {
      v109 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v109 + 1;
      *(_WORD*)(a1 + 2094) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v109);
      if (v6 >= 0x1B) {
        v110 = *(int*)(a2 + 20);
        v111 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v110 + 1;
        v112 = *(unsigned __int8*)(v111 + v110);
        *(_DWORD*)(a2 + 20) = v110 + 2;
        *(_WORD*)(a1 + 2096) =
            v112 | (*(unsigned __int8*)(v111 + v110 + 1) << 8);
      }
    }
  }
LABEL_63:
  game_Unit_UpdateShape(a1);
  result = game_Unit_Unknown6c4610_alt1(a1);
  if ((int)v6 < 2) {
    goto LABEL_121;
  }
  result = GameRoutine_8f76e0(a1 + 592, a2);
  if (v6 < 6) {
    goto LABEL_121;
  }
  v81 = *(int*)(a2 + 20);
  v82 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v81 + 1;
  if (*(_BYTE*)(v82 + v81) != 0) {
    *(_DWORD*)(a2 + 20) = v81 + 2;
    *(_BYTE*)(a1 + 1960) = *(_BYTE*)(v82 + v81 + 1);
    v83 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v83 + 1;
    *(_BYTE*)(a1 + 1961) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83);
    v84 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v84 + 1;
    *(_BYTE*)(a1 + 1962) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v84);
    v85 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v85 + 1;
    *(_BYTE*)(a1 + 1963) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85);
    result = GameRoutine_7c8860(a2);
    if (result != 0) {
      *(_WORD*)(a1 + 1964) = *(_WORD*)(result + 16) & 0xFFF;
      if (v6 < 0xA) {
        goto LABEL_121;
      }
    }
    else {
      *(_WORD*)(a1 + 1964) = 0;
      if (v6 < 0xA) {
        goto LABEL_121;
      }
    }
  }
  else {
    *(_QWORD*)(a1 + 1960) = 0;
    if (v6 < 0xA) {
      goto LABEL_121;
    }
  }
  v107 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v107 + 1;
  *(_BYTE*)(a1 + 805) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v107);
  if (v6 >= 0xD) {
  LABEL_99:
    v114 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v114 + 1;
    v115 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v114);
    if (v115 > 5) {
      if (v115 > 8) {
        if (v115 == 9) {
          v116 = 0x1.0e00000000000p+7f;
          goto LABEL_117;
        }
        if (v115 == 12) {
          v116 = 0x1.6800000000000p+5f;
          goto LABEL_117;
        }
      }
      else {
        if (v115 == 6) {
          v116 = 0x1.3b00000000000p+8f;
          goto LABEL_117;
        }
        if (v115 == 8) {
          v116 = 0x1.6800000000000p+6f;
          goto LABEL_117;
        }
      }
    }
    else {
      if (v115 <= 1) {
        if (v115 == 0) {
        LABEL_118:
          if (v6 >= 0x16) {
            result = GameRoutine_97b9e0(a1 + 2104, a2);
            if (v6 >= 0x1C) {
              result = GameRoutine_9ae660(a1 + 2144, a2);
            }
          }
          goto LABEL_121;
        }
        v116 = 0x1.6800000000000p+7f;
      LABEL_117:
        result = UnitActor_81ab40(a1, v116, 0x0.0p+0f);
        goto LABEL_118;
      }
      if (v115 == 2) {
        v116 = 0x1.0e00000000000p+8f;
        goto LABEL_117;
      }
      if (v115 == 3) {
        v116 = 0x1.c200000000000p+7f;
        goto LABEL_117;
      }
    }
    v116 = 0x0.0p+0f;
    goto LABEL_117;
  }
LABEL_121:
  v117 = *(_DWORD*)(a1 + 416);
  if ((v117 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v117 | 0x10000000;
    game_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    result = game_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

int* Unit_6e6fa0(int* result, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5,
                 __int64 a6)
{
  __int64 v6;
  __int64 v7;
  int* v8;
  __int64 v9;
  int* v10;
  int* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  char* v18;
  int* v22;
  int* v25;
  int* v26;
  int* v27;
  int* v28;
  __int64 v29;
  int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;

  if (a4 >= 2) {
    if (a4 == 2) {
      v6 = *(a2 - 1);
      v7 = *result;
      if ((signed __int32)*(_DWORD*)(*a3 + 4 * v6) >
          (signed __int32)*(_DWORD*)(*a3 + 4 * v7)) {
        *result = v6;
        *(a2 - 1) = v7;
      }
    }
    else if ((__int64)a4 > 128) {
      v15 = a4 >> 1;
      v17 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v22 = result;
        v25 = a5;
        Unit_6e7200(result, &result[v15], a3, a4 >> 1, a5);
        v26 = &v25[v15];
        result = Unit_6e7200(&v22[v15], a2, a3, v17, v26);
        v27 = &v25[a4];
        v28 = v26;
        while (v28 != v27) {
          v29 = *v28;
          v30 = *(_DWORD*)(*a3 + 4 * v29);
          v31 = *(_DWORD*)(*a3 + 4LL * *v25);
          if (v30 > v31) {
            v32 = 0;
          }
          else {
            LODWORD(v29) = *v25;
            v32 = 4;
          }
          v25 = (int*)((char*)v25 + v32);
          if (v30 <= v31) {
            v33 = 0;
          }
          else {
            v33 = 4;
          }
          *v22++ = v29;
          v28 = (int*)((char*)v28 + v33);
          if (v25 == v26) {
            while (v28 != v27) {
              v35 = *v28++;
              *v22++ = v35;
            }
            return result;
          }
        }
        while (v25 != v26) {
          v34 = *v25++;
          *v22++ = v34;
        }
      }
      else {
        v18 = (char*)result;
        Unit_6e6fa0(result, &result[v15], a3, a4 >> 1, a5, a6);
        Unit_6e6fa0((int*)&v18[4 * v15], a2, a3, v17, a5, a6);
        return (int*)Unit_6e7460_alt1(v18, &v18[4 * v15], a2, a3, v15, v17,
                                      (__int64)a5, a6);
      }
    }
    else if (result != a2) {
      v8 = result + 1;
      if (result + 1 != a2) {
        v9 = 0;
        v10 = result;
        do {
          LODWORD(v13) = *v10;
          v12 = v10[1];
          v10 = v8;
          if ((signed __int32)*(_DWORD*)(*a3 + 4LL * v12) >
              (signed __int32)*(_DWORD*)(*a3 + 4LL * (int)v13)) {
            v14 = v9;
            do {
              *(int*)((char*)result + v14 + 4) = v13;
              if (v14 == 0) {
                v11 = result;
                goto LABEL_11;
              }
              v13 = *(int*)((char*)result + v14 - 4);
              v14 -= 4;
            } while ((signed __int32)*(_DWORD*)(*a3 + 4LL * v12) >
                     (signed __int32)*(_DWORD*)(*a3 + 4 * v13));
            v11 = (int*)((char*)result + v14 + 4);
          LABEL_11:
            *v11 = v12;
          }
          v8 = v10 + 1;
          v9 += 4;
        } while (v10 + 1 != a2);
      }
    }
  }
  return result;
}

int* Unit_6e7200(int* result, int* a2, _QWORD* a3, unsigned __int64 a4, int* a5)
{
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  int* v10;
  int* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int* v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  int* v19;
  int* v24;
  unsigned __int64 v25;
  int* v26;
  int* v27;
  int* v28;
  int* v29;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;

  if (a4 != 0) {
    if (a4 == 2) {
      v5 = *(a2 - 1);
      v6 = *result;
      if ((signed __int32)*(_DWORD*)(*a3 + 4 * v5) <=
          (signed __int32)*(_DWORD*)(*a3 + 4 * v6)) {
        *a5 = v6;
        v7 = *(a2 - 1);
      }
      else {
        *a5 = v5;
        v7 = *result;
      }
      a5[1] = v7;
    }
    else if (a4 == 1) {
      *a5 = *result;
    }
    else if ((__int64)a4 > 8) {
      v18 = a4 >> 1;
      v19 = result;
      v24 = &result[a4 >> 1];
      v25 = 4 * (a4 >> 1);
      Unit_6e6fa0(result, v24, a3, v18, a5, v18);
      result = Unit_6e6fa0(v24, a2, a3, a4 - v18, &a5[v18], a4 - v18);
      if (v25 != 0) {
        v26 = v24;
        v27 = a5;
        v28 = a2;
        v29 = v19;
        while (v26 != a2) {
          v30 = *v26;
          v31 = *(_DWORD*)(*a3 + 4 * v30);
          v32 = *(_DWORD*)(*a3 + 4LL * *v29);
          if (v31 > v32) {
            v33 = 4;
          }
          else {
            LODWORD(v30) = *v29;
            v33 = 0;
          }
          v26 = (int*)((char*)v26 + v33);
          if (v31 <= v32) {
            v34 = 4;
          }
          else {
            v34 = 0;
          }
          *v27++ = v30;
          v29 = (int*)((char*)v29 + v34);
          if (v29 == v24) {
            goto LABEL_38;
          }
        }
        while (v29 != v24) {
          v35 = *v29++;
          *v27++ = v35;
        }
      }
      else {
        v26 = v24;
        v27 = a5;
        v28 = a2;
      LABEL_38:
        while (v26 != v28) {
          v36 = *v26++;
          *v27++ = v36;
        }
      }
    }
    else if (result != a2) {
      v8 = *result++;
      *a5 = v8;
      if (result != a2) {
        v9 = 0;
        v10 = a5;
        v11 = a5;
        do {
          v13 = *v11++;
          v12 = v13;
          v14 = *result;
          if ((signed __int32)*(_DWORD*)(*a3 + 4 * v14) <=
              (signed __int32)*(_DWORD*)(*a3 + 4 * v13)) {
            *v11 = v14;
          }
          else {
            v10[1] = v12;
            v15 = a5;
            if (v10 != a5) {
              v16 = v9;
              while (1) {
                v15 = (int*)((char*)a5 + v16);
                v17 = *(int*)((char*)a5 + v16 - 4);
                if ((signed __int32)*(_DWORD*)(*a3 + 4LL * *result) <=
                    (signed __int32)*(_DWORD*)(*a3 + 4 * v17)) {
                  break;
                }
                v16 -= 4;
                *v15 = v17;
                if (v16 == 0) {
                  v15 = a5;
                  break;
                }
              }
            }
            *v15 = *result;
          }
          ++result;
          v9 += 4;
          v10 = v11;
        } while (result != a2);
      }
    }
  }
  return result;
}

char* Unit_6e7460(char* result, char* a2, char* a3, _QWORD* a4, __int64 a5,
                  __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  char* v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  char* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  char* v29;
  char* v30;
  __int64 v31;
  char* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _DWORD* v43;
  char* v44;
  int v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  char* v53;
  __int64 v54;
  _QWORD* v55;
  char* v56;
  __int64 v57;

  if (a6 != 0) {
    while (a5 > a8 && a6 > a8) {
      if (a5 == 0) {
        return result;
      }
      v10 = *(int*)a2;
      v11 = *a4;
      v12 = 0;
      v13 = 0;
      while (1) {
        v14 = *(int*)&result[4 * v13];
        if ((signed __int32)*(_DWORD*)(*a4 + 4 * v10) >
            (signed __int32)*(_DWORD*)(v11 + 4 * v14)) {
          break;
        }
        ++v13;
        v12 -= 4;
        if (a5 == v13) {
          return result;
        }
      }
      v15 = a5 - v13;
      v56 = a3;
      v57 = a7;
      v54 = a8;
      v55 = a4;
      v53 = &result[-v12];
      if (a5 - v13 >= a6) {
        if (a5 - 1 == v13) {
          *(_DWORD*)&result[4 * v13] = v10;
          *(_DWORD*)a2 = v14;
          return result;
        }
        v25 = v15 / 2;
        v26 = &result[4 * (v15 / 2)];
        if (a3 == a2) {
          v17 = a3;
          v32 = a3;
        }
        else {
          v27 = (a3 - a2) >> 2;
          v17 = a2;
          do {
            v28 = v27 >> 1;
            v29 = &v17[4 * (v27 >> 1)];
            v31 = *(int*)v29;
            v30 = v29 + 4;
            v27 += ~(v27 >> 1);
            if ((signed __int32)*(_DWORD*)(v11 + 4 * v31) >
                (signed __int32)*(_DWORD*)(v11 + 4LL * *(int*)&v26[4 * v13])) {
              v17 = v30;
            }
            else {
              v27 = v28;
            }
          } while (v27 != 0);
          v32 = a2;
        }
        v18 = &v26[-v12];
        v16 = (v17 - v32) >> 2;
      }
      else {
        v16 = a6 / 2;
        v17 = &a2[4 * (a6 / 2)];
        if (&result[-v12] == a2) {
          v18 = a2;
          v24 = a2;
        }
        else {
          v18 = &result[-v12];
          v19 = (a2 - result + v12) >> 2;
          do {
            v20 = v19 >> 1;
            v21 = &v18[4 * (v19 >> 1)];
            v23 = *(int*)v21;
            v22 = v21 + 4;
            v19 += ~(v19 >> 1);
            if ((signed __int32)*(_DWORD*)(v11 + 4LL * *(int*)v17) >
                (signed __int32)*(_DWORD*)(v11 + 4 * v23)) {
              v19 = v20;
            }
            else {
              v18 = v22;
            }
          } while (v19 != 0);
          v24 = &result[-v12];
        }
        v25 = (v18 - v24) >> 2;
      }
      v33 = a6 - v16;
      v34 = a5;
      v35 = a6;
      v36 = a5 - v25 - v13;
      v37 = GameRoutine_6e7840(v18, a2, v17);
      v38 = v37;
      if (v25 + v16 >= v35 + v34 - (v25 + v16) - v13) {
        a7 = v57;
        a4 = v55;
        Unit_6e7460(v37, v17, v56, v55, v36, v33, v57, v54);
        result = v53;
        v17 = v18;
        v33 = v16;
        v36 = v25;
        a8 = v54;
        a3 = v38;
      }
      else {
        a4 = v55;
        a7 = v57;
        Unit_6e7460(v53, v18, v37, v55, v25, v16, v57, v54);
        a3 = v56;
        a8 = v54;
        result = v38;
      }
      a5 = v36;
      a6 = v33;
      a2 = v17;
      if (v33 == 0) {
        return result;
      }
    }
    if (a5 <= a6) {
      if (result != a2) {
        v42 = -a7;
        v43 = (_DWORD*)a7;
        v44 = result;
        do {
          v45 = *(_DWORD*)v44;
          v44 += 4;
          v42 -= 4;
          *v43++ = v45;
        } while (v44 != a2);
        while (a2 != a3) {
          v46 = *(int*)a2;
          v47 = *(_DWORD*)(*a4 + 4 * v46);
          v48 = *(_DWORD*)(*a4 + 4LL * *(int*)a7);
          if (v47 > v48) {
            v49 = 4;
          }
          else {
            LODWORD(v46) = *(_DWORD*)a7;
            v49 = 0;
          }
          a2 += v49;
          if (v47 <= v48) {
            v50 = 4;
          }
          else {
            v50 = 0;
          }
          *(_DWORD*)result = v46;
          result += 4;
          a7 += v50;
          if (v43 == (_DWORD*)a7) {
            return result;
          }
        }
        return (char*)memmove_alt1((__int64)result, a7, -(a7 + v42));
      }
    }
    else if (a2 != a3) {
      v39 = 0;
      do {
        *(_DWORD*)(a7 + v39) = *(_DWORD*)&a2[v39];
        v39 += 4;
      } while (&a2[v39] != a3);
      v40 = a7 + v39;
      while (a2 != result) {
        v41 = *((int*)a2 - 1);
        if ((signed __int32)*(_DWORD*)(*a4 + 4LL * *(int*)(v40 - 4)) >
            (signed __int32)*(_DWORD*)(*a4 + 4 * v41)) {
          a2 -= 4;
        }
        else {
          LODWORD(v41) = *(_DWORD*)(v40 - 4);
          v40 -= 4;
        }
        *((_DWORD*)a3 - 1) = v41;
        a3 -= 4;
        if (v40 == a7) {
          return result;
        }
      }
      if (a7 != v40) {
        v51 = -4;
        do {
          v52 = *(_DWORD*)(v40 - 4);
          v40 -= 4;
          *(_DWORD*)&a3[v51] = v52;
          v51 -= 4;
        } while (v40 != a7);
      }
    }
  }
  return result;
}

_QWORD* Unit_84e240(_QWORD* result, __int64* a2)
{
  char* v2;
  char* v3;
  _QWORD* v4;
  __int64 v6;
  unsigned int v7;
  __int64* v8;
  int v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  char* v26;
  signed __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  __int64 v37;
  int v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  int v51;

  v2 = (char*)result[4];
  v3 = (char*)result[5];
  v4 = result;
  if (v3 == v2) {
    result[10] = 0;
    result[11] = 0;
    return result;
  }
  v6 = 0;
  v7 = 0;
  v8 = GameData_212c880[0];
  do {
    v11 = *(unsigned int*)&v2[4 * v6];
    v12 = *a2;
    v13 = (a2[1] - *a2) >> 2;
    if (v13 < ((v11 >> 5) & 0x7F) + 1 ||
        ((*(_DWORD*)(v12 + 4 * ((v11 >> 5) & 0x7F)) >> v11) & 1) == 0) {
      v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                             8 * (v11 & 0xFFF)) +
                                  24LL) +
                       1080LL);
      if (v14 == 0 ||
          (v15 = *(unsigned __int16*)(v14 + 16), v16 = (v15 >> 5) & 0x7F,
           v17 = v16 + 1, v13 < v16 + 1) ||
          (v18 = v15 & 0xFFF, v19 = 1 << v15,
           (*(_DWORD*)(v12 + 4 * ((v15 >> 5) & 0x7F)) & (1 << v15)) == 0) ||
          (v20 = *v4, (v21 = (__int64)(v4[1] - *v4) >> 2) >= v17) &&
              (*(_DWORD*)(v20 + 4 * ((v15 >> 5) & 0x7F)) & v19) != 0) {
        if ((v7 & 0x80000000) != 0) {
        LABEL_3:
          v9 = 0;
        }
        else {
          v20 = *v4;
          v21 = (__int64)(v4[1] - *v4) >> 2;
        LABEL_15:
          v22 = *(unsigned int*)&v2[4 * v7];
          v23 = (v22 >> 5) & 0x7F;
          if (v21 >= v23 + 1) {
            v24 = *(_DWORD*)(v20 + 4 * ((v22 >> 5) & 0x7F));
            v25 = 1 << v22;
            if ((v24 & v25) != 0) {
              *(_DWORD*)(v20 + 4LL * (unsigned int)v23) = v24 & ~v25;
              --*((_DWORD*)v4 + 6);
              v2 = (char*)v4[4];
              v3 = (char*)v4[5];
            }
          }
          v26 = &v2[4 * v7];
          v27 = v3 - (v26 + 4);
          if (v3 != v26 + 4) {
            result = (_QWORD*)memmove(&v2[4 * v7], v26 + 4, v3 - (v26 + 4));
          }
          v3 = &v26[v27];
          v9 = -1;
          v4[5] = &v26[v27];
        }
        v7 += v9;
        goto LABEL_5;
      }
      if ((v7 & 0x80000000) != 0) {
        goto LABEL_3;
      }
      if ((v15 & 0xFFF) == 0) {
        goto LABEL_15;
      }
      v28 = *(unsigned int*)&v2[4 * v7];
      v29 = (v28 >> 5) & 0x7F;
      if (v21 >= v29 + 1) {
        v30 = *(_DWORD*)(v20 + 4 * ((v28 >> 5) & 0x7F));
        v31 = 1 << v28;
        if ((v30 & v31) != 0) {
          *(_DWORD*)(v20 + 4LL * (unsigned int)v29) = v30 & ~v31;
          --*((_DWORD*)v4 + 6);
          v20 = *v4;
          v21 = (__int64)(v4[1] - *v4) >> 2;
        }
      }
      if (v17 <= v21) {
        v32 = *(_DWORD*)(v20 + 4LL * (unsigned int)v16);
        if ((v32 & v19) != 0) {
        LABEL_30:
          *(_DWORD*)(v4[4] + 4LL * v7) = v18;
          v3 = (char*)v4[5];
          goto LABEL_5;
        }
      }
      else {
        v51 = 0;
        result = GameRoutine_66dd60(v4, v17 - v21, &v51);
        v20 = *v4;
        v32 = *(_DWORD*)(*v4 + 4LL * (unsigned int)v16);
      }
      *(_DWORD*)(v20 + 4LL * (unsigned int)v16) = v32 | v19;
      ++*((_DWORD*)v4 + 6);
      goto LABEL_30;
    }
  LABEL_5:
    v2 = (char*)v4[4];
    v6 = (int)++v7;
    v10 = v3 - v2;
  } while ((int)v7 < (unsigned __int64)((v3 - v2) >> 2));
  v4[10] = 0;
  v4[11] = 0;
  if ((int)((unsigned __int64)v10 >> 2) >= 1) {
    v33 = *v8;
    v34 = (int)(v10 >> 2);
    v35 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*(_DWORD*)v2 & 0xFFF));
    v36 = 1 << *(_BYTE*)(v35 + 104);
    *((_WORD*)v4 + 40) = v36;
    v37 = 1LL << *(_BYTE*)(v35 + 250);
    v4[11] = v37;
    v38 = 1 << *(_BYTE*)(v35 + 115);
    *((_DWORD*)v4 + 21) = v38;
    v39 = *(unsigned __int16*)(*(_QWORD*)(v35 + 24) + 1064LL);
    *((_WORD*)v4 + 41) = v39;
    if (v34 >= 2) {
      v40 = v34 - 1;
      if (v34 == 2) {
        v41 = 1;
      }
      else {
        v42 = (int*)(v2 + 8);
        v41 = 1;
        do {
          v41 += 2;
          v43 = *(_QWORD*)(*(_QWORD*)(v33 + 64) + 8LL * (*(v42 - 1) & 0xFFF));
          v44 = v36 | (1 << *(_BYTE*)(v43 + 104));
          *((_WORD*)v4 + 40) = v44;
          v45 = (1LL << *(_BYTE*)(v43 + 250)) | v37;
          v4[11] = v45;
          v46 = (1 << *(_BYTE*)(v43 + 115)) | v38;
          *((_DWORD*)v4 + 21) = v46;
          v47 = v39 | *(unsigned __int16*)(*(_QWORD*)(v43 + 24) + 1064LL);
          *((_WORD*)v4 + 41) = v47;
          v48 = *v42;
          v42 += 2;
          v49 = *(_QWORD*)(*(_QWORD*)(v33 + 64) + 8LL * (v48 & 0xFFF));
          v36 = v44 | (1 << *(_BYTE*)(v49 + 104));
          *((_WORD*)v4 + 40) = v36;
          v37 = (1LL << *(_BYTE*)(v49 + 250)) | v45;
          v4[11] = v37;
          v38 = (1 << *(_BYTE*)(v49 + 115)) | v46;
          *((_DWORD*)v4 + 21) = v38;
          v39 = v47 | *(unsigned __int16*)(*(_QWORD*)(v49 + 24) + 1064LL);
          result = (_QWORD*)(v41 - (v40 & 0xFFFFFFFFFFFFFFFELL));
          *((_WORD*)v4 + 41) = v39;
        } while (result != (_QWORD*)((char*)((_UNKNOWN*)0x0LL) + 1));
      }
      if ((v40 & 1) != 0) {
        v50 = *(_QWORD*)(*(_QWORD*)(v33 + 64) +
                         8LL * (*(_DWORD*)&v2[4 * v41] & 0xFFF));
        *((_WORD*)v4 + 40) = v36 | (1 << *(_BYTE*)(v50 + 104));
        v4[11] = (1LL << *(_BYTE*)(v50 + 250)) | v37;
        *((_DWORD*)v4 + 21) = (1 << *(_BYTE*)(v50 + 115)) | v38;
        *((_WORD*)v4 + 41) = v39 | *(_WORD*)(*(_QWORD*)(v50 + 24) + 1064LL);
      }
    }
  }
  return result;
}

void Unit_930ca0(__int64 a1, __int64 a2)
{
  __int64* v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  int v7;
  char v8;

  *(_QWORD*)(a1 + 24) = 0;
  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 16) = a1 + 24;
  if (a2 != 0) {
    *(_BYTE*)a1 = *(_BYTE*)(a2 + 16);
    nn_os_LockMutex(&game_g_random_mutex);
    v3 = game_map_MapRandom_instance__ptr[0];
    v4 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8);
    v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL)) ^
         (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL))
          << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 4) = v4;
    v7 = (v6 >> 8) ^ (v5 >> 19) ^ v6 ^ v5;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 8) = v5;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3 + 12) = v7;
    nn_os_UnlockMutex_alt1(&game_g_random_mutex);
    v8 = *(_BYTE*)(a1 + 2);
    *(_BYTE*)(a1 + 1) = v7;
    *(_BYTE*)(a1 + 2) = v8 & 0xFE;
  }
}

__int64 Unit_930d50(__int64 a1, __int64 a2)
{
  char v2;
  _QWORD* v5;
  __int64* v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  char v11;

  v2 = *(_BYTE*)(a1 + 40);
  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)a1 = 0;
  if ((v2 & 1) != 0) {
    **(_BYTE**)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 48) = 0;
  }
  else {
    *(_WORD*)(a1 + 40) = 0;
  }
  v5 = (_QWORD*)(a1 + 24);
  GameRoutine_6e3b50(a1 + 16, *(_QWORD*)(a1 + 24));
  *v5 = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 16) = a1 + 24;
  if (a2 != 0) {
    *(_BYTE*)a1 = *(_BYTE*)(a2 + 16);
    nn_os_LockMutex(&game_g_random_mutex);
    v6 = game_map_MapRandom_instance__ptr[0];
    v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8);
    v8 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL)) ^
         (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL))
          << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 4) = v7;
    v10 = (v9 >> 8) ^ (v8 >> 19) ^ v9 ^ v8;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 8) = v8;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6 + 12) = v10;
    nn_os_UnlockMutex_alt1(&game_g_random_mutex);
    v11 = *(_BYTE*)(a1 + 2);
    *(_BYTE*)(a1 + 1) = v10;
    *(_BYTE*)(a1 + 2) = v11 & 0xFE;
  }
  return a1;
}

unsigned __int8* Unit_931120(unsigned __int8* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64 v3;
  _BYTE* v4;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int8* v9;
  int v10;

  v1 = a1[40];
  v2 = *((_QWORD*)a1 + 6);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 != 0) {
    if (v2 != 1) {
      v3 = *((_QWORD*)a1 + 7);
    LABEL_14:
      if ((v1 & 1) != 0) {
        return (unsigned __int8*)v3;
      }
      else {
        return a1 + 41;
      }
    }
    v3 = *((_QWORD*)a1 + 7);
    v4 = a1 + 41;
    if ((v1 & 1) != 0) {
      v4 = *((_BYTE**)a1 + 7);
    }
    if (*v4 != 7) {
      goto LABEL_14;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4220,
                            memory_order_acquire) &
       1) == 0) {
    v9 = a1;
    v10 = __cxa_guard_acquire(&GameData_21f4220);
    a1 = v9;
    if (v10 != 0) {
      GameRoutine_2b0();
      __cxa_guard_release(&GameData_21f4220);
      a1 = v9;
    }
  }
  v5 = *msg_MessageManager_instance__ptr[0];
  v6 = GameRoutine_a4dbe0(
      *msg_MessageManager_instance__ptr[0],
      *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) + 8LL * *a1) +
                 40LL),
      0);
  v7 = GameRoutine_a51530(v5, v6);
  GameRoutine_60a020((__int64)&GameData_21f4208, (__int64)v7);
  if ((GameData_21f4208 & 1) != 0) {
    return (unsigned __int8*)GameData_21f4218;
  }
  else {
    return (unsigned __int8*)&GameData_21f4209;
  }
}

unsigned __int64 Unit_9313d0(unsigned __int64 result, char* a2)
{
  unsigned __int64 v2;
  char* v3;
  unsigned __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  struct {
    __int64 v10;
    unsigned __int64 v11;
    char* v12;
  } v10_;

  v2 = result;
  if (a2 == nullptr) {
    if ((*(_BYTE*)(result + 40) & 1) != 0) {
      **(_BYTE**)(result + 56) = 0;
      *(_QWORD*)(result + 48) = 0;
    }
    else {
      *(_WORD*)(result + 40) = 0;
    }
    return result;
  }
  v3 = GameRoutine_a51530(msg_MessageManager_instance_, a2);
  result = strlen(v3);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v4 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v6 = 26;
    }
    else {
      v6 = (result | 7) + 1;
    }
    v5 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v6, 16, 0);
    v10_.v11 = v4;
    v10_.v12 = v5;
    v10_.v10 = v6 | 1;
    goto LABEL_12;
  }
  LOBYTE(v10_.v10) = 2 * result;
  v5 = (char*)&v10_.v10 + 1;
  if (result != 0) {
  LABEL_12:
    result = memmove(v5, v3, v4);
  }
  v5[v4] = 0;
  if ((*(_BYTE*)(v2 + 40) & 1) != 0) {
    v7 = *(_QWORD*)(v2 + 56);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  v9 = v10_.v11;
  *(_QWORD*)(v2 + 40) = v10_.v10;
  *(_QWORD*)(v2 + 48) = v9;
  *(_QWORD*)(v2 + 56) = v10_.v12;
  return result;
}

__attribute__((swiftcall)) void Unit_932880(PSEUDO_X8 x8_, __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  unsigned int v14;
  _QWORD* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  bool v31;
  unsigned __int64 v32;
  __int64 v33;
  _QWORD* v34;
  __int64 v35;
  unsigned __int64 v36;
  bool v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v44;

  v2 = *(_QWORD**)(a1 + 16);
  v3 = (_QWORD*)(a1 + 24);
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  if (v2 != (_QWORD*)(a1 + 24)) {
    v4 = &GameData_21ca000;
    v5 = a1;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while (1) {
      v9 = GameRoutine_682660(*((unsigned __int8*)v2 + 26));
      if (v9 == 0) {
        goto LABEL_18;
      }
      v10 = v9;
      v11 = v4[342];
      v12 = ((*((unsigned __int16*)v2 + 14) >> 12) |
             ((*((_WORD*)v2 + 14) & 0xFFF) << 10)) ^
            0xFF;
      if (v11 != 0) {
        v9 = game_GameVariableTable_Find(*(_QWORD*)(v11 + 48),
                                         *(_QWORD*)(v9 + 24) + 1032LL);
        if (v9 != 0 && *(_DWORD*)(v9 + 32) != 0) {
          v12 |= 0x40000000u;
        }
      }
      if (*(_BYTE*)(v5 + 3) != 0 && (v9 = game_UnitPool_Get(v5 + 3)) != 0) {
        v13 = *(_QWORD*)(v9 + 392);
      }
      else {
        v13 = 0;
      }
      v14 = v10 == v13 ? v12 | 0x80000000 : v12;
      if (v7 < v8) {
        break;
      }
      v16 = v7 - v6;
      v17 = v8;
      v18 = v5;
      v19 = v3;
      v20 = v4;
      v21 = (__int64)(v7 - v6) >> 4;
      v22 = v21 + 1;
      if ((unsigned __int64)(v21 + 1) >> 60 != 0) {
        GameRoutine_935a90();
      }
      v23 = v17 - v6;
      v24 = (__int64)(v17 - v6) >> 3;
      if (v24 > v22) {
        v22 = v24;
      }
      if (v23 >= 0x7FFFFFFFFFFFFFF0LL) {
        v25 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v25 = v22;
      }
      if (v25 != 0) {
        if (v25 >> 60 != 0) {
          GameRoutine_60a210(v9);
        }
        v26 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v25, 16, 0);
      }
      else {
        v26 = 0;
      }
      v27 = v26 + v16;
      *(_QWORD*)v27 = v10;
      v28 = v26 + v16 - 16 * v21;
      v44 = v26 + 16 * v25;
      *(_DWORD*)(v27 + 8) = v14;
      v7 = v26 + v16 + 16;
      memcpy(v28, v6, v16);
      if (v6 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v6);
      }
      v4 = v20;
      v3 = v19;
      v5 = v18;
      v8 = v44;
      v6 = v28;
      v15 = (_QWORD*)v2[1];
      if (v15 != nullptr) {
        do {
        LABEL_35:
          v30 = v15;
          v15 = (_QWORD*)*v15;
        } while (v15 != nullptr);
        goto LABEL_3;
      }
      do {
      LABEL_37:
        v30 = (_QWORD*)v2[2];
        v31 = v2 == (_QWORD*)*v30;
        v2 = v30;
      } while (!v31);
    LABEL_3:
      v2 = v30;
      if (v30 == v3) {
        goto LABEL_41;
      }
    }
    *(_QWORD*)v7 = v10;
    *(_DWORD*)(v7 + 8) = v14;
    v7 += 16LL;
  LABEL_18:
    v15 = (_QWORD*)v2[1];
    if (v15 != nullptr) {
      goto LABEL_35;
    }
    goto LABEL_37;
  }
  v7 = 0;
  v6 = 0;
LABEL_41:
  if ((__int64)(v7 - v6) >> 4 < 129) {
    v34 = a2;
    v36 = 0;
  LABEL_47:
    result = Unit_935ac0_alt1(v6, v7, (__int64)(v7 - v6) >> 4, 0, v36);
    if (v6 != v7) {
      goto LABEL_52;
    }
  }
  else {
    v32 = (__int64)(v7 - v6) >> 4;
    v33 = GameData_212c060;
    v34 = a2;
    while (1) {
      v35 = GameRoutine_1a09d20(16 * v32, v33);
      if (v35 != 0) {
        break;
      }
      v36 = v32 >> 1;
      v37 = v32 > 1;
      v32 >>= 1;
      if (!v37) {
        goto LABEL_47;
      }
    }
    v39 = v35;
    Unit_935ac0_alt1(v6, v7, (__int64)(v7 - v6) >> 4, v35, v32);
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v39);
    if (v6 != v7) {
    LABEL_52:
      v41 = v6;
      do {
        result = GameRoutine_932c10(v34, v41);
        v41 += 16;
      } while (v41 != v7);
    }
  }
  if (v6 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v6);
      return;
    }
  }
  {
    result;
    return;
  }
}

void Unit_9331a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  unsigned int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  int v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  int v43;
  int v44;
  int v45;
  int j;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  unsigned int v51;
  __int16 v52;
  __int16 v53;
  __int64 v54;
  unsigned int v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  _QWORD* v59;
  int v60;
  int i;
  __int64 v62;
  unsigned int v63;
  __int64 v64;
  __int64 v65;
  __int64* v66;
  __int64 v67;
  __int16 v68;
  __int16 v69;
  __int64 v70;
  unsigned int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  __int64* v76;
  int v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  char v81;
  char v82;
  _QWORD* v83;
  __int64 v84;
  __int64 v85;
  unsigned int v86;
  __int64 v87;
  _QWORD** v88;
  int v89;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  v5 = *(unsigned __int8*)(v3 + v2);
  if (*(_BYTE*)(v3 + v2) == 0) {
    goto LABEL_71;
  }
  *(_DWORD*)(a2 + 20) = v2 + 2;
  v7 = *(unsigned __int8*)(v3 + v2 + 1);
  *(_DWORD*)(a2 + 20) = v2 + 3;
  v8 = *(unsigned __int8*)(v3 + v2 + 2);
  *(_DWORD*)(a2 + 20) = v2 + 4;
  v9 = *(unsigned __int8*)(v3 + v2 + 3);
  *(_DWORD*)(a2 + 20) = v2 + 5;
  v10 = *(unsigned __int8*)(v3 + v2 + 4);
  *(_DWORD*)(a2 + 20) = v2 + 6;
  v11 = *(unsigned __int8*)(v3 + v2 + 5);
  *(_DWORD*)(a2 + 20) = v2 + 7;
  v12 = *(unsigned __int8*)(v3 + v2 + 6);
  *(_DWORD*)(a2 + 20) = v2 + 8;
  v13 = *(unsigned __int8*)(v3 + v2 + 7);
  *(_DWORD*)(a2 + 20) = v2 + 9;
  v14 = v7 | (v8 << 8) | (v9 << 16) | (v10 << 24) | (v11 << 32) | (v12 << 40) |
        (v13 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v3 + v2 + 8) << 56);
  if (v14 == 0) {
    goto LABEL_26;
  }
  v15 = *(_QWORD*)(GameData_21c99a8 + 96);
  if (v15 == 0 || *(_QWORD*)(GameData_21c99a8 + 112) == 0) {
    goto LABEL_26;
  }
  v17 = v15 - 1;
  if ((v15 & (v15 - 1)) != 0) {
    v18 = v14;
    if (v14 >= v15) {
      v18 = v14 % v15;
    }
  }
  else {
    v18 = v17 & v14;
  }
  v19 = *(_QWORD**)(*(_QWORD*)(GameData_21c99a8 + 88) + 8 * v18);
  if (v19 == nullptr || (v20 = (_QWORD*)*v19) == nullptr) {
  LABEL_26:
    v22 = 0;
    goto LABEL_27;
  }
  if ((v15 & v17) == 0) {
    while (1) {
      v23 = v20[1];
      if (v23 == v14) {
        if (v20[2] == v14) {
          goto LABEL_77;
        }
      }
      else if ((v23 & v17) != v18) {
        goto LABEL_26;
      }
      v20 = (_QWORD*)*v20;
      v22 = 0;
      if (v20 == nullptr) {
        goto LABEL_27;
      }
    }
  }
  while (1) {
    v21 = v20[1];
    if (v21 == v14) {
      break;
    }
    if (v21 >= v15) {
      v21 %= v15;
    }
    if (v21 != v18) {
      goto LABEL_26;
    }
  LABEL_16:
    v20 = (_QWORD*)*v20;
    if (v20 == nullptr) {
      goto LABEL_26;
    }
  }
  if (v20[2] != v14) {
    goto LABEL_16;
  }
LABEL_77:
  v22 = v20[3];
LABEL_27:
  *(_DWORD*)(a2 + 20) = v2 + 10;
  *(_BYTE*)(a1 + 3) = *(_BYTE*)(v3 + v2 + 9);
  if (v5 >= 6) {
    v24 = *(int*)(a2 + 20);
    v25 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v24 + 1;
    v26 = *(unsigned __int8*)(v25 + v24);
    *(_DWORD*)(a2 + 20) = v24 + 2;
    v27 = v26 | (*(unsigned __int8*)(v25 + v24 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v24 + 3;
    v28 = *(unsigned __int8*)(v25 + v24 + 2);
    *(_DWORD*)(a2 + 20) = v24 + 4;
    *(_DWORD*)(a1 + 4) =
        v27 | (v28 << 16) | (*(unsigned __int8*)(v25 + v24 + 3) << 24);
    goto LABEL_30;
  }
  *(_DWORD*)(a1 + 4) = 0;
  if (v5 == 5) {
  LABEL_30:
    v29 = *(int*)(a2 + 20);
    v30 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v29 + 1;
    v31 = *(unsigned __int8*)(v30 + v29);
    *(_DWORD*)(a2 + 20) = v29 + 2;
    v32 = v31 | (*(unsigned __int8*)(v30 + v29 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v29 + 3;
    v33 = *(unsigned __int8*)(v30 + v29 + 2);
    *(_DWORD*)(a2 + 20) = v29 + 4;
    *(_DWORD*)(a1 + 8) =
        v32 | (v33 << 16) | (*(unsigned __int8*)(v30 + v29 + 3) << 24);
    goto LABEL_31;
  }
  *(_DWORD*)(a1 + 8) = 0;
  if (v5 == 1) {
  LABEL_70:
    nn_os_LockMutex(&game_g_random_mutex);
    v76 = game_map_MapRandom_instance__ptr[0];
    v77 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8);
    v78 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
    v79 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((__int128*)0x10LL)) ^
          (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                      (unsigned __int64)((__int128*)0x10LL))
           << 11);
    *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
               (unsigned __int64)((__int128*)0x10LL)) =
        *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 4);
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v76 + 4) = v77;
    v80 = (v79 >> 8) ^ (v78 >> 19) ^ v79 ^ v78;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v76 + 8) = v78;
    *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v76 + 12) = v80;
    nn_os_UnlockMutex_alt1(&game_g_random_mutex);
    v81 = *(_BYTE*)(a1 + 2);
    *(_BYTE*)(a1 + 1) = v80;
    *(_BYTE*)(a1 + 2) = v81 & 0xFE;
    if (v22 == 0) {
      goto LABEL_71;
    }
  LABEL_76:
    *(_BYTE*)a1 = *(_BYTE*)(v22 + 16);
    return;
  }
LABEL_31:
  v34 = *(int*)(a2 + 20);
  v35 = *(_QWORD*)(a2 + 8);
  v36 = v34 + 1;
  *(_DWORD*)(a2 + 20) = v34 + 1;
  v37 = *(unsigned __int8*)(v35 + v34);
  v38 = v34 + 2;
  *(_DWORD*)(a2 + 20) = v38;
  v39 = v37 | (*(unsigned __int8*)(v35 + v36) << 8);
  if (v39 != 0) {
    *(_DWORD*)(a2 + 20) = v38 + v39;
    GameRoutine_60a020_alt1(a1 + 40, v35 + v38);
  }
  else if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    **(_BYTE**)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 48) = 0;
  }
  else {
    *(_WORD*)(a1 + 40) = 0;
  }
  v40 = (__int64*)(a1 + 24);
  v87 = v22;
  v88 = (_QWORD**)(a1 + 16);
  GameRoutine_6e3b50(a1 + 16, *(_QWORD*)(a1 + 24));
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 16) = a1 + 24;
  v41 = *(int*)(a2 + 20);
  v42 = *(_QWORD*)(a2 + 8);
  v43 = v41 + 1;
  *(_DWORD*)(a2 + 20) = v41 + 1;
  v44 = *(unsigned __int8*)(v42 + v41);
  v89 = v44;
  if (v5 < 4) {
    v86 = v5;
    if (v44 != 0) {
      v60 = v44;
      for (i = 0; i != v60; ++i) {
        v62 = GameRoutine_6e5dc0_alt1(a2);
        if (v62 != 0) {
          v63 = *(unsigned __int8*)(v62 + 48);
        }
        else {
          v63 = 0;
        }
        v64 = *(int*)(a2 + 20);
        v65 = *(_QWORD*)(a2 + 8);
        v66 = (__int64*)(a1 + 24);
        v67 = a1 + 24;
        *(_DWORD*)(a2 + 20) = v64 + 1;
        v68 = *(unsigned __int8*)(v65 + v64);
        *(_DWORD*)(a2 + 20) = v64 + 2;
        v69 = *(unsigned __int8*)(v65 + v64 + 1);
        v70 = *v40;
        if (*v40 != 0) {
          while (1) {
            while (1) {
              v67 = v70;
              v71 = *(unsigned __int8*)(v70 + 26);
              if (v63 >= v71) {
                break;
              }
              v70 = *(_QWORD*)v67;
              v66 = (__int64*)v67;
              if (*(_QWORD*)v67 == 0) {
                goto LABEL_66;
              }
            }
            if (v71 >= v63) {
              break;
            }
            v70 = *(_QWORD*)(v67 + 8);
            if (v70 == 0) {
              v66 = (__int64*)(v67 + 8);
              goto LABEL_66;
            }
          }
        }
        else {
        LABEL_66:
          v72 = v67;
          v73 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
          *(_BYTE*)(v73 + 26) = v63;
          *(_WORD*)(v73 + 28) = 0;
          v67 = v73;
          v74 = v73;
          *(_QWORD*)v73 = 0;
          *(_QWORD*)(v73 + 8) = 0;
          *(_QWORD*)(v73 + 16) = v72;
          *v66 = v73;
          v75 = (_QWORD*)**v88;
          if (v75 != nullptr) {
            *v88 = v75;
            v74 = *v66;
          }
          fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 24), v74);
          v60 = v89;
          ++*(_QWORD*)(a1 + 32);
        }
        *(_WORD*)(v67 + 28) = v68 | (v69 << 8);
      }
    }
  LABEL_68:
    v22 = v87;
    if (v86 < 3) {
      goto LABEL_70;
    }
    v43 = *(_DWORD*)(a2 + 20);
    v42 = *(_QWORD*)(a2 + 8);
  }
  else if (v44 != 0) {
    v45 = v44;
    v86 = v5;
    for (j = 0; j != v45; ++j) {
      v47 = *(int*)(a2 + 20);
      v48 = *(_QWORD*)(a2 + 8);
      v49 = (__int64*)(a1 + 24);
      v50 = a1 + 24;
      *(_DWORD*)(a2 + 20) = v47 + 1;
      v51 = *(unsigned __int8*)(v48 + v47);
      *(_DWORD*)(a2 + 20) = v47 + 2;
      v52 = *(unsigned __int8*)(v48 + v47 + 1);
      *(_DWORD*)(a2 + 20) = v47 + 3;
      v53 = *(unsigned __int8*)(v48 + v47 + 2);
      v54 = *v40;
      if (*v40 != 0) {
        while (1) {
          while (1) {
            v50 = v54;
            v55 = *(unsigned __int8*)(v54 + 26);
            if (v51 >= v55) {
              break;
            }
            v54 = *(_QWORD*)v50;
            v49 = (__int64*)v50;
            if (*(_QWORD*)v50 == 0) {
              goto LABEL_50;
            }
          }
          if (v55 >= v51) {
            break;
          }
          v54 = *(_QWORD*)(v50 + 8);
          if (v54 == 0) {
            v49 = (__int64*)(v50 + 8);
            goto LABEL_50;
          }
        }
      }
      else {
      LABEL_50:
        v56 = v50;
        v57 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        *(_BYTE*)(v57 + 26) = v51;
        *(_WORD*)(v57 + 28) = 0;
        v50 = v57;
        v58 = v57;
        *(_QWORD*)v57 = 0;
        *(_QWORD*)(v57 + 8) = 0;
        *(_QWORD*)(v57 + 16) = v56;
        *v49 = v57;
        v59 = (_QWORD*)**v88;
        if (v59 != nullptr) {
          *v88 = v59;
          v58 = *v49;
        }
        fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 24), v58);
        v45 = v89;
        ++*(_QWORD*)(a1 + 32);
      }
      *(_WORD*)(v50 + 28) = v52 | (v53 << 8);
    }
    goto LABEL_68;
  }
  *(_DWORD*)(a2 + 20) = v43 + 1;
  *(_BYTE*)(a1 + 1) = *(_BYTE*)(v42 + v43);
  v85 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v85 + 1;
  *(_BYTE*)(a1 + 2) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85);
  if (v22 != 0) {
    goto LABEL_76;
  }
LABEL_71:
  v82 = *(_BYTE*)(a1 + 40);
  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)a1 = 0;
  if ((v82 & 1) != 0) {
    **(_BYTE**)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 48) = 0;
  }
  else {
    *(_WORD*)(a1 + 40) = 0;
  }
  v84 = *(_QWORD*)(a1 + 24);
  v83 = (_QWORD*)(a1 + 24);
  GameRoutine_6e3b50(v83 - 1, v84);
  *v83 = 0;
  v83[1] = 0;
  *(v83 - 1) = v83;
}

__int64 Unit_933800(__int64 result, unsigned __int8* a2, unsigned __int8** a3,
                    __int64 a4, char a5)
{
  unsigned __int8* v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned __int8* v13;
  unsigned __int8 v14;
  unsigned __int8* v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  __int64** v19;
  __int64** v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  unsigned __int8* v24;
  unsigned int v25;
  int v26;
  unsigned __int8* v27;
  unsigned int v28;
  unsigned __int8* v29;
  int v30;
  unsigned int v31;
  __int64** v32;
  __int64** v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned __int8* v37;
  unsigned __int8* v38;
  int v39;
  bool v40;
  unsigned int v41;
  unsigned int v42;
  __int64** v43;
  __int64** v44;
  unsigned int v45;
  unsigned int v46;
  unsigned int v47;
  __int64** v48;
  __int64** v49;
  unsigned int v50;
  __int64** v51;
  unsigned int v52;
  unsigned int v53;
  unsigned int v54;
  int v55;
  unsigned __int8* v56;
  int v57;
  int v58;
  int v59;
  unsigned __int8* v60;
  unsigned int v61;
  __int64** v62;
  __int64** v63;
  unsigned int v64;
  __int64** v65;
  unsigned int v66;
  unsigned int v67;
  unsigned int v68;
  unsigned int v69;
  __int64** v70;
  unsigned int v71;
  __int64** v72;
  unsigned int v73;
  unsigned int v74;
  unsigned __int8* v75;
  char v76;
  unsigned int v77;
  __int64** v78;
  unsigned int v79;
  __int64** v80;
  unsigned int v81;
  unsigned int v82;
  unsigned int v83;
  unsigned int v84;
  __int64** v85;
  unsigned int v86;
  __int64** v87;
  unsigned int v88;
  unsigned int v89;
  unsigned int v90;
  __int64** v91;
  __int64** v92;
  unsigned int v93;
  unsigned int v94;
  unsigned int v95;
  unsigned __int8* v96;
  __int64** v97;
  __int64** v98;
  unsigned int v99;
  __int64** v100;
  unsigned int v101;
  unsigned int v102;
  unsigned int v103;
  int v104;
  unsigned int v105;
  unsigned int v106;
  __int64** v107;
  unsigned int v108;
  __int64** v109;
  unsigned int v110;
  unsigned int v111;
  unsigned int v112;
  unsigned int v113;
  __int64** v114;
  unsigned int v115;
  __int64** v116;
  unsigned int v117;
  unsigned int v118;
  unsigned __int8* v119;
  unsigned int v120;
  unsigned int v121;
  int v122;
  unsigned __int8* v123;
  bool v125;
  unsigned __int8* v126;
  unsigned __int8* v127;
  unsigned __int8* v128;
  unsigned int v129;
  unsigned int v130;
  int v131;
  unsigned __int8* v132;
  unsigned int v133;
  unsigned int v134;
  int v135;
  __int64** v136;
  __int64** v137;
  unsigned int v138;
  unsigned int v139;
  unsigned int v140;
  __int64** v141;
  __int64** v142;
  unsigned int v143;
  unsigned int v144;
  unsigned int v145;
  signed __int64 v146;
  signed __int64 v147;
  unsigned __int8* v148;
  signed __int64 v149;
  unsigned __int8* v150;
  __int64 v151;
  __int64 v152;
  unsigned __int8* v153;
  unsigned int v154;
  unsigned int v155;
  unsigned __int8* v156;
  int v157;
  unsigned int v158;
  unsigned int v159;
  __int64* v160;
  __int64** v161;
  unsigned int v162;
  unsigned int v163;
  unsigned int v164;
  __int64 v165;
  unsigned __int8* v166;
  int v167;
  unsigned int v168;
  unsigned int v169;
  __int64** v170;
  unsigned int v171;
  unsigned int v172;
  unsigned int v173;
  unsigned int v174;
  __int64* v175;
  __int64** v176;
  unsigned int v177;
  unsigned int v178;
  unsigned int v179;
  __int64** v180;
  __int64** v181;
  unsigned int v182;
  unsigned int v183;
  unsigned __int8* v184;
  unsigned int v186;
  __int64 v187;
  unsigned __int8* v188;
  unsigned __int8* v189;
  __int64 v190;
  unsigned __int8* v191;
  unsigned int v192;
  unsigned int v193;
  unsigned int v194;
  int v195;
  __int64** v196;
  __int64** v197;
  unsigned int v198;
  unsigned int v199;
  unsigned __int64 v200;
  unsigned __int64 v201;
  unsigned __int8* v202;
  unsigned int v203;
  int v204;
  unsigned __int64 v205;
  unsigned int v206;
  int v207;
  __int64** v208;
  __int64** v209;
  unsigned int v210;
  unsigned int v211;
  unsigned int v212;
  __int64** v213;
  __int64** v214;
  unsigned int v215;
  unsigned int v216;
  unsigned int v217;
  __int64** v218;
  __int64** v219;
  unsigned int v220;
  unsigned __int8* v221;
  unsigned int v222;
  unsigned int v223;
  int v224;
  unsigned __int8* v225;
  unsigned int v226;
  int v227;
  __int64** v228;
  __int64** v229;
  unsigned int v230;
  unsigned int v231;
  unsigned int v232;
  __int64** v233;
  __int64** v234;
  unsigned int v235;
  unsigned int v236;
  unsigned int v237;
  unsigned int v238;
  unsigned int v239;

  v9 = (unsigned __int8*)result;
LABEL_2:
  v10 = a2 - 1;
  v11 = v9;
  while (1) {
    v12 = a2 - v11;
    v9 = v11;
    if (a2 - v11 > 2) {
      switch (v12) {
      case 3LL:
        return Unit_934e20_alt1(v11, v11 + 1, a2 - 1, a3);
      case 4LL:
        return Unit_935180_alt1(v11, v11 + 1, v11 + 2, a2 - 1, a3);
      case 5LL:
        return Unit_935400_alt1(v11, v11 + 1, v11 + 2, v11 + 3, a2 - 1, a3);
      default:
        break;
      }
      goto LABEL_10;
    }
    if ((unsigned __int64)(a2 - v11) < 2) {
      return result;
    }
    if (v12 == 2) {
      break;
    }
  LABEL_10:
    if (v12 <= 23) {
      v123 = v11 + 1;
      v125 = v11 == a2 || v123 == a2;
      if ((a5 & 1) != 0) {
        if (!v125) {
          v126 = v11;
          while (1) {
            v128 = v126;
            v126 = v123;
            v129 = v128[1];
            v130 = *v128;
            v131 = **a3;
            if (v129 == v131) {
              goto LABEL_270;
            }
            if (v130 != v131) {
              v141 = *((__int64***)a3[1] + 3);
              if (v141 == nullptr) {
                goto LABEL_499;
              }
              v142 = *((__int64***)a3[1] + 3);
              while (1) {
                while (1) {
                  v143 = *((unsigned __int8*)v142 + 26);
                  if (v129 >= v143) {
                    break;
                  }
                  v142 = (__int64**)*v142;
                  if (v142 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v143 >= v129) {
                  break;
                }
                v142 = (__int64**)v142[1];
                if (v142 == nullptr) {
                  goto LABEL_499;
                }
              }
              v144 = *((unsigned __int16*)v142 + 14) >> 12;
              while (1) {
                while (1) {
                  v145 = *((unsigned __int8*)v141 + 26);
                  if (v130 >= v145) {
                    break;
                  }
                  v141 = (__int64**)*v141;
                  if (v141 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v145 >= v130) {
                  break;
                }
                v141 = (__int64**)v141[1];
                if (v141 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v144 < *((unsigned __int16*)v141 + 14) >> 12) {
              LABEL_270:
                v128[1] = v130;
                v127 = v11;
                if (v128 != v11) {
                  v132 = v128;
                  do {
                    v134 = *--v132;
                    v133 = v134;
                    v135 = **a3;
                    if (v129 != v135) {
                      if (v133 == v135) {
                        goto LABEL_266;
                      }
                      v136 = *((__int64***)a3[1] + 3);
                      if (v136 == nullptr) {
                        goto LABEL_499;
                      }
                      v137 = *((__int64***)a3[1] + 3);
                      while (1) {
                        while (1) {
                          v138 = *((unsigned __int8*)v137 + 26);
                          if (v129 >= v138) {
                            break;
                          }
                          v137 = (__int64**)*v137;
                          if (v137 == nullptr) {
                            goto LABEL_499;
                          }
                        }
                        if (v138 >= v129) {
                          break;
                        }
                        v137 = (__int64**)v137[1];
                        if (v137 == nullptr) {
                          goto LABEL_499;
                        }
                      }
                      v139 = *((unsigned __int16*)v137 + 14) >> 12;
                      while (1) {
                        while (1) {
                          v140 = *((unsigned __int8*)v136 + 26);
                          if (v133 >= v140) {
                            break;
                          }
                          v136 = (__int64**)*v136;
                          if (v136 == nullptr) {
                            goto LABEL_499;
                          }
                        }
                        if (v140 >= v133) {
                          break;
                        }
                        v136 = (__int64**)v136[1];
                        if (v136 == nullptr) {
                          goto LABEL_499;
                        }
                      }
                      if (v139 >= *((unsigned __int16*)v136 + 14) >> 12) {
                      LABEL_266:
                        v127 = v128;
                        goto LABEL_267;
                      }
                    }
                    *v128 = v133;
                    v128 = v132;
                  } while (v132 != v11);
                  v127 = v11;
                }
              LABEL_267:
                *v127 = v129;
              }
            }
            v123 = v126 + 1;
            if (v126 + 1 == a2) {
              return result;
            }
          }
        }
      }
      else if (!v125) {
        while (1) {
          v221 = v9;
          v9 = v123;
          v222 = v221[1];
          v223 = *v221;
          v224 = **a3;
          if (v222 == v224) {
            goto LABEL_461;
          }
          if (v223 != v224) {
            v233 = *((__int64***)a3[1] + 3);
            if (v233 == nullptr) {
              goto LABEL_499;
            }
            v234 = *((__int64***)a3[1] + 3);
            while (1) {
              while (1) {
                v235 = *((unsigned __int8*)v234 + 26);
                if (v222 >= v235) {
                  break;
                }
                v234 = (__int64**)*v234;
                if (v234 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v235 >= v222) {
                break;
              }
              v234 = (__int64**)v234[1];
              if (v234 == nullptr) {
                goto LABEL_499;
              }
            }
            v236 = *((unsigned __int16*)v234 + 14) >> 12;
            while (1) {
              while (1) {
                v237 = *((unsigned __int8*)v233 + 26);
                if (v223 >= v237) {
                  break;
                }
                v233 = (__int64**)*v233;
                if (v233 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v237 >= v223) {
                break;
              }
              v233 = (__int64**)v233[1];
              if (v233 == nullptr) {
                goto LABEL_499;
              }
            }
            if (v236 < *((unsigned __int16*)v233 + 14) >> 12) {
            LABEL_461:
              v225 = v9;
              do {
                do {
                  *v225 = v223;
                  v225 = v221;
                  v226 = *--v221;
                  v223 = v226;
                  v227 = **a3;
                } while (v222 == v227);
                if (v223 == v227) {
                  break;
                }
                v228 = *((__int64***)a3[1] + 3);
                if (v228 == nullptr) {
                  goto LABEL_499;
                }
                v229 = *((__int64***)a3[1] + 3);
                while (1) {
                  while (1) {
                    v230 = *((unsigned __int8*)v229 + 26);
                    if (v222 >= v230) {
                      break;
                    }
                    v229 = (__int64**)*v229;
                    if (v229 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  if (v230 >= v222) {
                    break;
                  }
                  v229 = (__int64**)v229[1];
                  if (v229 == nullptr) {
                    goto LABEL_499;
                  }
                }
                v231 = *((unsigned __int16*)v229 + 14) >> 12;
                while (1) {
                  while (1) {
                    v232 = *((unsigned __int8*)v228 + 26);
                    if (v223 >= v232) {
                      break;
                    }
                    v228 = (__int64**)*v228;
                    if (v228 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  if (v232 >= v223) {
                    break;
                  }
                  v228 = (__int64**)v228[1];
                  if (v228 == nullptr) {
                    goto LABEL_499;
                  }
                }
              } while (v231 < *((unsigned __int16*)v228 + 14) >> 12);
              *v225 = v222;
            }
          }
          v123 = v9 + 1;
          if (v9 + 1 == a2) {
            return result;
          }
        }
      }
      return result;
    }
    if (a4 == 0) {
      if (v11 == a2) {
        return result;
      }
      v146 = (unsigned __int64)(a2 - v11 - 2) >> 1;
      v147 = v146;
      while (2) {
        v149 = v147;
        if (v146 < v147) {
          goto LABEL_310;
        }
        v150 = *a3;
        v151 = (2 * v147) | 1;
        v152 = 2 * v147 + 2;
        v153 = &v11[v151];
        if (v152 >= v12) {
          v156 = a3[1];
          v157 = *v150;
          goto LABEL_316;
        }
        v154 = *v153;
        v155 = v153[1];
        v156 = a3[1];
        v157 = *v150;
        if (v154 == v157) {
          goto LABEL_314;
        }
        if (v155 == v157) {
          v157 = v153[1];
          goto LABEL_316;
        }
        v180 = *((__int64***)v156 + 3);
        if (v180 != nullptr) {
          v181 = *((__int64***)v156 + 3);
          while (1) {
            while (1) {
              v182 = *((unsigned __int8*)v181 + 26);
              if (v154 >= v182) {
                break;
              }
              v181 = (__int64**)*v181;
              if (v181 == nullptr) {
                goto LABEL_499;
              }
            }
            if (v182 >= v154) {
              break;
            }
            v181 = (__int64**)v181[1];
            if (v181 == nullptr) {
              goto LABEL_499;
            }
          }
          v183 = *((unsigned __int16*)v181 + 14) >> 12;
          while (1) {
            while (1) {
              result = *((unsigned __int8*)v180 + 26);
              if (v155 >= (unsigned int)result) {
                break;
              }
              v180 = (__int64**)*v180;
              if (v180 == nullptr) {
                goto LABEL_499;
              }
            }
            if ((unsigned int)result >= v155) {
              break;
            }
            v180 = (__int64**)v180[1];
            if (v180 == nullptr) {
              goto LABEL_499;
            }
          }
          if (v183 < *((unsigned __int16*)v180 + 14) >> 12) {
          LABEL_314:
            ++v153;
            v151 = 2 * v149 + 2;
          }
        LABEL_316:
          v158 = *v153;
          if (v158 == v157) {
            goto LABEL_310;
          }
          v159 = v11[v149];
          if (v159 == v157) {
            goto LABEL_334;
          }
          v160 = *((__int64**)v156 + 3);
          if (v160 != nullptr) {
            v161 = (__int64**)v160;
            while (1) {
              while (1) {
                v162 = *((unsigned __int8*)v161 + 26);
                if (v158 >= v162) {
                  break;
                }
                v161 = (__int64**)*v161;
                if (v161 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v162 >= v158) {
                break;
              }
              v161 = (__int64**)v161[1];
              if (v161 == nullptr) {
                goto LABEL_499;
              }
            }
            v163 = *((unsigned __int16*)v161 + 14) >> 12;
            while (1) {
              while (1) {
                v164 = *((unsigned __int8*)v160 + 26);
                if (v159 >= v164) {
                  break;
                }
                v160 = (__int64*)*v160;
                if (v160 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v164 >= v159) {
                break;
              }
              v160 = (__int64*)v160[1];
              if (v160 == nullptr) {
                goto LABEL_499;
              }
            }
            if (v163 >= *((unsigned __int16*)v160 + 14) >> 12) {
            LABEL_334:
              v11[v149] = v158;
              if (v146 >= v151) {
                while (1) {
                  v165 = 2 * v151 + 2;
                  v166 = a3[1];
                  v151 = (2 * v151) | 1;
                  v148 = &v11[v151];
                  v167 = **a3;
                  if (v165 < v12) {
                    v168 = *v148;
                    v169 = v148[1];
                    if (v168 == v167) {
                      goto LABEL_340;
                    }
                    if (v169 != v167) {
                      result = *((_QWORD*)v166 + 3);
                      if (result == 0) {
                        goto LABEL_499;
                      }
                      v170 = *((__int64***)v166 + 3);
                      while (1) {
                        while (1) {
                          v171 = *((unsigned __int8*)v170 + 26);
                          if (v168 >= v171) {
                            break;
                          }
                          v170 = (__int64**)*v170;
                          if (v170 == nullptr) {
                            goto LABEL_499;
                          }
                        }
                        if (v171 >= v168) {
                          break;
                        }
                        v170 = (__int64**)v170[1];
                        if (v170 == nullptr) {
                          goto LABEL_499;
                        }
                      }
                      v172 = *((unsigned __int16*)v170 + 14) >> 12;
                      while (1) {
                        while (1) {
                          v173 = *(unsigned __int8*)(result + 26);
                          if (v169 >= v173) {
                            break;
                          }
                          result = *(_QWORD*)result;
                          if (result == 0) {
                            goto LABEL_499;
                          }
                        }
                        if (v173 >= v169) {
                          break;
                        }
                        result = *(_QWORD*)(result + 8);
                        if (result == 0) {
                          goto LABEL_499;
                        }
                      }
                      if (v172 < *(unsigned __int16*)(result + 28) >> 12) {
                      LABEL_340:
                        ++v148;
                        v151 = v165;
                      }
                    }
                  }
                  v174 = *v148;
                  if (v174 == v167) {
                    break;
                  }
                  if (v159 != v167) {
                    v175 = *((__int64**)v166 + 3);
                    if (v175 == nullptr) {
                      goto LABEL_499;
                    }
                    v176 = (__int64**)v175;
                    while (1) {
                      while (1) {
                        v177 = *((unsigned __int8*)v176 + 26);
                        if (v174 >= v177) {
                          break;
                        }
                        v176 = (__int64**)*v176;
                        if (v176 == nullptr) {
                          goto LABEL_499;
                        }
                      }
                      if (v177 >= v174) {
                        break;
                      }
                      v176 = (__int64**)v176[1];
                      if (v176 == nullptr) {
                        goto LABEL_499;
                      }
                    }
                    v178 = *((unsigned __int16*)v176 + 14) >> 12;
                    while (1) {
                      while (1) {
                        v179 = *((unsigned __int8*)v175 + 26);
                        if (v159 >= v179) {
                          break;
                        }
                        v175 = (__int64*)*v175;
                        if (v175 == nullptr) {
                          goto LABEL_499;
                        }
                      }
                      if (v179 >= v159) {
                        break;
                      }
                      v175 = (__int64*)v175[1];
                      if (v175 == nullptr) {
                        goto LABEL_499;
                      }
                    }
                    if (v178 < *((unsigned __int16*)v175 + 14) >> 12) {
                      break;
                    }
                  }
                  *v153 = v174;
                  v153 = v148;
                  if (v146 < v151) {
                    goto LABEL_309;
                  }
                }
              }
              v148 = v153;
            LABEL_309:
              *v148 = v159;
            }
          LABEL_310:
            v147 = v149 - 1;
            if (v149 != 0) {
              continue;
            }
          LABEL_389:
            LOBYTE(v186) = *v11;
            v187 = 0;
            v184 = v11;
            do {
              v188 = &v184[v187];
              v189 = v184;
              v184 += v187 + 1;
              v190 = 2 * v187 + 2;
              v187 = (2 * v187) | 1;
              if (v190 < v12) {
                v193 = v188[2];
                v191 = v188 + 2;
                v192 = v193;
                v194 = *(v191 - 1);
                v195 = **a3;
                if (v194 == v195) {
                  goto LABEL_390;
                }
                if (v192 != v195) {
                  v196 = *((__int64***)a3[1] + 3);
                  if (v196 == nullptr) {
                    goto LABEL_499;
                  }
                  v197 = *((__int64***)a3[1] + 3);
                  while (1) {
                    while (1) {
                      result = *((unsigned __int8*)v197 + 26);
                      if (v194 >= (unsigned int)result) {
                        break;
                      }
                      v197 = (__int64**)*v197;
                      if (v197 == nullptr) {
                        goto LABEL_499;
                      }
                    }
                    if ((unsigned int)result >= v194) {
                      break;
                    }
                    v197 = (__int64**)v197[1];
                    if (v197 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  v198 = *((unsigned __int16*)v197 + 14) >> 12;
                  while (1) {
                    while (1) {
                      v199 = *((unsigned __int8*)v196 + 26);
                      if (v192 >= v199) {
                        break;
                      }
                      v196 = (__int64**)*v196;
                      if (v196 == nullptr) {
                        goto LABEL_499;
                      }
                    }
                    if (v199 >= v192) {
                      break;
                    }
                    v196 = (__int64**)v196[1];
                    if (v196 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  if (v198 < *((unsigned __int16*)v196 + 14) >> 12) {
                  LABEL_390:
                    v184 = v191;
                    v187 = v190;
                  }
                }
              }
              *v189 = *v184;
            } while (v187 <= (__int64)((unsigned __int64)(v12 - 2) >> 1));
            if (v184 == --a2) {
            LABEL_387:
              *v184 = v186;
            }
            else {
              *v184 = *a2;
              *a2 = v186;
              v200 = v184 - v11 - 1;
              if (v184 - v11 + 1 >= 2) {
                v201 = v200 >> 1;
                v186 = *v184;
                v202 = &v11[v200 >> 1];
                v203 = *v202;
                v204 = **a3;
                if (v203 == v204) {
                  goto LABEL_413;
                }
                if (v186 != v204) {
                  v213 = *((__int64***)a3[1] + 3);
                  if (v213 == nullptr) {
                    break;
                  }
                  v214 = *((__int64***)a3[1] + 3);
                  while (1) {
                    while (1) {
                      v215 = *((unsigned __int8*)v214 + 26);
                      if (v203 >= v215) {
                        break;
                      }
                      v214 = (__int64**)*v214;
                      if (v214 == nullptr) {
                        goto LABEL_499;
                      }
                    }
                    if (v215 >= v203) {
                      break;
                    }
                    v214 = (__int64**)v214[1];
                    if (v214 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  v216 = *((unsigned __int16*)v214 + 14) >> 12;
                  while (1) {
                    while (1) {
                      v217 = *((unsigned __int8*)v213 + 26);
                      if (v186 >= v217) {
                        break;
                      }
                      v213 = (__int64**)*v213;
                      if (v213 == nullptr) {
                        goto LABEL_499;
                      }
                    }
                    if (v217 >= v186) {
                      break;
                    }
                    v213 = (__int64**)v213[1];
                    if (v213 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  if (v216 < *((unsigned __int16*)v213 + 14) >> 12) {
                  LABEL_413:
                    *v184 = v203;
                    if (v200 >= 2) {
                      while (1) {
                        v205 = v201 - 1;
                        v201 = (v201 - 1) >> 1;
                        v184 = &v11[v201];
                        v206 = v11[v201];
                        v207 = **a3;
                        if (v206 != v207) {
                          if (v186 == v207) {
                            break;
                          }
                          v208 = *((__int64***)a3[1] + 3);
                          if (v208 == nullptr) {
                            goto LABEL_499;
                          }
                          v209 = *((__int64***)a3[1] + 3);
                          while (1) {
                            while (1) {
                              v210 = *((unsigned __int8*)v209 + 26);
                              if (v206 >= v210) {
                                break;
                              }
                              v209 = (__int64**)*v209;
                              if (v209 == nullptr) {
                                goto LABEL_499;
                              }
                            }
                            if (v210 >= v206) {
                              break;
                            }
                            v209 = (__int64**)v209[1];
                            if (v209 == nullptr) {
                              goto LABEL_499;
                            }
                          }
                          v211 = *((unsigned __int16*)v209 + 14) >> 12;
                          while (1) {
                            while (1) {
                              v212 = *((unsigned __int8*)v208 + 26);
                              if (v186 >= v212) {
                                break;
                              }
                              v208 = (__int64**)*v208;
                              if (v208 == nullptr) {
                                goto LABEL_499;
                              }
                            }
                            if (v212 >= v186) {
                              break;
                            }
                            v208 = (__int64**)v208[1];
                            if (v208 == nullptr) {
                              goto LABEL_499;
                            }
                          }
                          if (v211 >= *((unsigned __int16*)v208 + 14) >> 12) {
                            break;
                          }
                        }
                        *v202 = v206;
                        v202 = &v11[v201];
                        if (v205 <= 1) {
                          goto LABEL_387;
                        }
                      }
                    }
                    v184 = v202;
                    goto LABEL_387;
                  }
                }
              }
            }
            if (v12-- <= 2) {
              return result;
            }
            goto LABEL_389;
          }
        }
        break;
      }
    LABEL_499:
      String_60a250("map::at:  key not found");
    }
    v13 = &v11[(unsigned __int64)v12 >> 1];
    if ((unsigned __int64)v12 < 0x81) {
      result =
          Unit_934e20_alt1(&v9[(unsigned __int64)v12 >> 1], v9, a2 - 1, a3);
    }
    else {
      Unit_934e20_alt1(v9, &v9[(unsigned __int64)v12 >> 1], a2 - 1, a3);
      Unit_934e20_alt1(v9 + 1, v13 - 1, a2 - 2, a3);
      Unit_934e20_alt1(v9 + 2, v13 + 1, a2 - 3, a3);
      result = Unit_934e20_alt1(v13 - 1, &v9[(unsigned __int64)v12 >> 1],
                                v13 + 1, a3);
      v14 = *v9;
      *v9 = *v13;
      *v13 = v14;
    }
    v15 = a3[1];
    v16 = *v9;
    --a4;
    v17 = **a3;
    if ((a5 & 1) != 0) {
      goto LABEL_32;
    }
    v18 = *(v9 - 1);
    if (v18 == v17) {
      goto LABEL_32;
    }
    if (v16 == v17) {
      goto LABEL_144;
    }
    v19 = *((__int64***)v15 + 3);
    if (v19 == nullptr) {
      goto LABEL_499;
    }
    v20 = *((__int64***)v15 + 3);
    while (1) {
      while (1) {
        v21 = *((unsigned __int8*)v20 + 26);
        if (v18 >= v21) {
          break;
        }
        v20 = (__int64**)*v20;
        if (v20 == nullptr) {
          goto LABEL_499;
        }
      }
      if (v21 >= v18) {
        break;
      }
      v20 = (__int64**)v20[1];
      if (v20 == nullptr) {
        goto LABEL_499;
      }
    }
    v22 = *((unsigned __int16*)v20 + 14) >> 12;
    while (1) {
      while (1) {
        v23 = *((unsigned __int8*)v19 + 26);
        if (v16 >= v23) {
          break;
        }
        v19 = (__int64**)*v19;
        if (v19 == nullptr) {
          goto LABEL_499;
        }
      }
      if (v23 >= v16) {
        break;
      }
      v19 = (__int64**)v19[1];
      if (v19 == nullptr) {
        goto LABEL_499;
      }
    }
    if (v22 < *((unsigned __int16*)v19 + 14) >> 12) {
    LABEL_32:
      v24 = v9;
      if (v16 != v17) {
        while (1) {
          do {
            v27 = v24;
            v31 = *++v24;
            v25 = v31;
          } while (v31 == v17);
          v32 = *((__int64***)v15 + 3);
          if (v32 == nullptr) {
            goto LABEL_499;
          }
          v33 = *((__int64***)v15 + 3);
          while (1) {
            while (1) {
              v34 = *((unsigned __int8*)v33 + 26);
              if (v25 >= v34) {
                break;
              }
              v33 = (__int64**)*v33;
              if (v33 == nullptr) {
                goto LABEL_499;
              }
            }
            if (v34 >= v25) {
              break;
            }
            v33 = (__int64**)v33[1];
            if (v33 == nullptr) {
              goto LABEL_499;
            }
          }
          v35 = *((unsigned __int16*)v33 + 14) >> 12;
          while (1) {
            while (1) {
              v36 = *((unsigned __int8*)v32 + 26);
              if (v16 >= v36) {
                break;
              }
              v32 = (__int64**)*v32;
              if (v32 == nullptr) {
                goto LABEL_499;
              }
            }
            if (v36 >= v16) {
              break;
            }
            v32 = (__int64**)v32[1];
            if (v32 == nullptr) {
              goto LABEL_499;
            }
          }
          if (v35 >= *((unsigned __int16*)v32 + 14) >> 12) {
            goto LABEL_36;
          }
        }
      }
      v24 = v9;
      do {
        v26 = *++v24;
        LOBYTE(v25) = v26;
      } while (v26 == v17);
      v27 = v24 - 1;
    LABEL_36:
      if (v9 == v27) {
        v29 = a2;
        if (v24 < a2) {
          v29 = a2;
          if (v16 == v17) {
            v37 = a2 - 1;
            v38 = a2 - 1;
            do {
              v39 = *v38--;
              v40 = v39 == v17 || v24 >= v37;
              v37 = v38;
            } while (!v40);
            v29 = v38 + 1;
          }
          else {
            do {
              v42 = *--v29;
              v41 = v42;
              if (v42 == v17) {
                break;
              }
              v43 = *((__int64***)v15 + 3);
              if (v43 == nullptr) {
                goto LABEL_499;
              }
              v44 = *((__int64***)v15 + 3);
              while (1) {
                while (1) {
                  v45 = *((unsigned __int8*)v44 + 26);
                  if (v41 >= v45) {
                    break;
                  }
                  v44 = (__int64**)*v44;
                  if (v44 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v45 >= v41) {
                  break;
                }
                v44 = (__int64**)v44[1];
                if (v44 == nullptr) {
                  goto LABEL_499;
                }
              }
              v46 = *((unsigned __int16*)v44 + 14) >> 12;
              while (1) {
                while (1) {
                  v47 = *((unsigned __int8*)v43 + 26);
                  if (v16 >= v47) {
                    break;
                  }
                  v43 = (__int64**)*v43;
                  if (v43 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v47 >= v16) {
                  break;
                }
                v43 = (__int64**)v43[1];
                if (v43 == nullptr) {
                  goto LABEL_499;
                }
              }
            } while (v24 < v29 && v46 >= *((unsigned __int16*)v43 + 14) >> 12);
          }
        }
      }
      else {
        v28 = *v10;
        v29 = a2 - 1;
        if (v28 != v17) {
          if (v16 == v17) {
            v29 = a2 - 1;
            do {
              v30 = *--v29;
            } while (v30 != v16);
          }
          else {
            v48 = *((__int64***)v15 + 3);
            if (v48 == nullptr) {
              goto LABEL_499;
            }
            v29 = a2 - 1;
            do {
              v49 = v48;
              while (1) {
                while (1) {
                  v50 = *((unsigned __int8*)v49 + 26);
                  if (v28 >= v50) {
                    break;
                  }
                  v49 = (__int64**)*v49;
                  if (v49 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v50 >= v28) {
                  break;
                }
                v49 = (__int64**)v49[1];
                if (v49 == nullptr) {
                  goto LABEL_499;
                }
              }
              v51 = v48;
              v52 = *((unsigned __int16*)v49 + 14) >> 12;
              while (1) {
                while (1) {
                  v53 = *((unsigned __int8*)v51 + 26);
                  if (v16 >= v53) {
                    break;
                  }
                  v51 = (__int64**)*v51;
                  if (v51 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v53 >= v16) {
                  break;
                }
                v51 = (__int64**)v51[1];
                if (v51 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v52 < *((unsigned __int16*)v51 + 14) >> 12) {
                break;
              }
              v54 = *--v29;
              v28 = v54;
            } while (v54 != v17);
          }
        }
      }
      v11 = v24;
      if (v24 < v29) {
        LOBYTE(v55) = *v29;
        v11 = v24;
        v56 = v29;
        do {
          *v11 = v55;
          *v56 = v25;
          v55 = **a3;
          if (v16 == v55) {
            do {
              v57 = *++v11;
              LOBYTE(v25) = v57;
            } while (v57 == v55);
            v58 = *--v56;
            if (v58 != v55) {
              do {
                v59 = *--v56;
              } while (v59 != v16);
              LOBYTE(v55) = v16;
            }
          }
          else {
            do {
              do {
                v61 = *++v11;
                v25 = v61;
              } while (v61 == v55);
              v60 = a3[1];
              v62 = *((__int64***)v60 + 3);
              if (v62 == nullptr) {
                goto LABEL_499;
              }
              v63 = *((__int64***)v60 + 3);
              while (1) {
                while (1) {
                  v64 = *((unsigned __int8*)v63 + 26);
                  if (v25 >= v64) {
                    break;
                  }
                  v63 = (__int64**)*v63;
                  if (v63 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v64 >= v25) {
                  break;
                }
                v63 = (__int64**)v63[1];
                if (v63 == nullptr) {
                  goto LABEL_499;
                }
              }
              v65 = *((__int64***)v60 + 3);
              v66 = *((unsigned __int16*)v63 + 14) >> 12;
              while (1) {
                while (1) {
                  v67 = *((unsigned __int8*)v65 + 26);
                  if (v16 >= v67) {
                    break;
                  }
                  v65 = (__int64**)*v65;
                  if (v65 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v67 >= v16) {
                  break;
                }
                v65 = (__int64**)v65[1];
                if (v65 == nullptr) {
                  goto LABEL_499;
                }
              }
            } while (v66 < *((unsigned __int16*)v65 + 14) >> 12);
            while (1) {
              v69 = *--v56;
              v68 = v69;
              if (v69 == v55) {
                break;
              }
              v70 = v62;
              while (1) {
                while (1) {
                  v71 = *((unsigned __int8*)v70 + 26);
                  if (v68 >= v71) {
                    break;
                  }
                  v70 = (__int64**)*v70;
                  if (v70 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v71 >= v68) {
                  break;
                }
                v70 = (__int64**)v70[1];
                if (v70 == nullptr) {
                  goto LABEL_499;
                }
              }
              v72 = v62;
              v73 = *((unsigned __int16*)v70 + 14) >> 12;
              while (1) {
                while (1) {
                  v74 = *((unsigned __int8*)v72 + 26);
                  if (v16 >= v74) {
                    break;
                  }
                  v72 = (__int64**)*v72;
                  if (v72 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v74 >= v16) {
                  break;
                }
                v72 = (__int64**)v72[1];
                if (v72 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v73 < *((unsigned __int16*)v72 + 14) >> 12) {
                LOBYTE(v55) = v68;
                break;
              }
            }
          }
        } while (v11 < v56);
      }
      v75 = v11 - 1;
      if (v9 != v11 - 1) {
        *v9 = *v75;
      }
      *v75 = v16;
      if (v24 < v29) {
        goto LABEL_143;
      }
      v76 = Unit_935740_alt1(v9, v11 - 1, a3);
      result = Unit_935740_alt1(v11, a2, a3);
      if ((result & 1) != 0) {
        a2 = v11 - 1;
        if ((v76 & 1) != 0) {
          return result;
        }
        goto LABEL_2;
      }
      if ((v76 & 1) == 0) {
      LABEL_143:
        result = Unit_933800(v9, v11 - 1, a3, a4, a5 & 1);
        a5 = 0;
      }
    }
    else {
    LABEL_144:
      v77 = *v10;
      if (v16 == v17) {
        v11 = v9 + 1;
      }
      else {
        if (v77 == v17) {
          goto LABEL_176;
        }
        if (*((_QWORD*)v15 + 3) == 0) {
          goto LABEL_499;
        }
        v78 = *((__int64***)v15 + 3);
        while (1) {
          while (1) {
            v79 = *((unsigned __int8*)v78 + 26);
            if (v16 >= v79) {
              break;
            }
            v78 = (__int64**)*v78;
            if (v78 == nullptr) {
              goto LABEL_499;
            }
          }
          if (v79 >= v16) {
            break;
          }
          v78 = (__int64**)v78[1];
          if (v78 == nullptr) {
            goto LABEL_499;
          }
        }
        v80 = *((__int64***)v15 + 3);
        v81 = *((unsigned __int16*)v78 + 14) >> 12;
        while (1) {
          while (1) {
            v82 = *((unsigned __int8*)v80 + 26);
            if (v77 >= v82) {
              break;
            }
            v80 = (__int64**)*v80;
            if (v80 == nullptr) {
              goto LABEL_499;
            }
          }
          if (v82 >= v77) {
            break;
          }
          v80 = (__int64**)v80[1];
          if (v80 == nullptr) {
            goto LABEL_499;
          }
        }
        if (v81 >= *((unsigned __int16*)v80 + 14) >> 12) {
        LABEL_176:
          v11 = v9 + 1;
          if (v9 + 1 < a2) {
            while (1) {
              v90 = *v11;
              if (v90 != v17) {
                v91 = *((__int64***)v15 + 3);
                if (v91 == nullptr) {
                  goto LABEL_499;
                }
                v92 = *((__int64***)v15 + 3);
                while (1) {
                  while (1) {
                    v93 = *((unsigned __int8*)v92 + 26);
                    if (v16 >= v93) {
                      break;
                    }
                    v92 = (__int64**)*v92;
                    if (v92 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  if (v93 >= v16) {
                    break;
                  }
                  v92 = (__int64**)v92[1];
                  if (v92 == nullptr) {
                    goto LABEL_499;
                  }
                }
                v94 = *((unsigned __int16*)v92 + 14) >> 12;
                while (1) {
                  while (1) {
                    v95 = *((unsigned __int8*)v91 + 26);
                    if (v90 >= v95) {
                      break;
                    }
                    v91 = (__int64**)*v91;
                    if (v91 == nullptr) {
                      goto LABEL_499;
                    }
                  }
                  if (v95 >= v90) {
                    break;
                  }
                  v91 = (__int64**)v91[1];
                  if (v91 == nullptr) {
                    goto LABEL_499;
                  }
                }
                if (v94 < *((unsigned __int16*)v91 + 14) >> 12) {
                  break;
                }
              }
              if (++v11 == a2) {
                v11 = &v9[v12];
                break;
              }
            }
          }
        }
        else {
          v11 = v9;
          do {
            do {
              v84 = *++v11;
              v83 = v84;
            } while (v84 == v17);
            v85 = *((__int64***)v15 + 3);
            while (1) {
              while (1) {
                v86 = *((unsigned __int8*)v85 + 26);
                if (v16 >= v86) {
                  break;
                }
                v85 = (__int64**)*v85;
                if (v85 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v86 >= v16) {
                break;
              }
              v85 = (__int64**)v85[1];
              if (v85 == nullptr) {
                goto LABEL_499;
              }
            }
            v87 = *((__int64***)v15 + 3);
            v88 = *((unsigned __int16*)v85 + 14) >> 12;
            while (1) {
              while (1) {
                v89 = *((unsigned __int8*)v87 + 26);
                if (v83 >= v89) {
                  break;
                }
                v87 = (__int64**)*v87;
                if (v87 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v89 >= v83) {
                break;
              }
              v87 = (__int64**)v87[1];
              if (v87 == nullptr) {
                goto LABEL_499;
              }
            }
          } while (v88 >= *((unsigned __int16*)v87 + 14) >> 12);
        }
      }
      v96 = a2;
      if (v11 < a2) {
        v96 = a2 - 1;
        if (v77 != v17) {
          v97 = *((__int64***)v15 + 3);
          if (v97 == nullptr) {
            goto LABEL_499;
          }
          v96 = a2 - 1;
          do {
            v98 = v97;
            while (1) {
              while (1) {
                v99 = *((unsigned __int8*)v98 + 26);
                if (v16 >= v99) {
                  break;
                }
                v98 = (__int64**)*v98;
                if (v98 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v99 >= v16) {
                break;
              }
              v98 = (__int64**)v98[1];
              if (v98 == nullptr) {
                goto LABEL_499;
              }
            }
            v100 = v97;
            v101 = *((unsigned __int16*)v98 + 14) >> 12;
            while (1) {
              while (1) {
                v102 = *((unsigned __int8*)v100 + 26);
                if (v77 >= v102) {
                  break;
                }
                v100 = (__int64**)*v100;
                if (v100 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v102 >= v77) {
                break;
              }
              v100 = (__int64**)v100[1];
              if (v100 == nullptr) {
                goto LABEL_499;
              }
            }
            if (v101 >= *((unsigned __int16*)v100 + 14) >> 12) {
              break;
            }
            v103 = *--v96;
            v77 = v103;
          } while (v103 != v17);
        }
      }
      if (v11 < v96) {
        LOBYTE(v104) = *v96;
        LOBYTE(v105) = *v11;
        do {
          *v11 = v104;
          *v96 = v105;
          v104 = **a3;
          do {
            do {
              v106 = *++v11;
              v105 = v106;
            } while (v106 == v104);
            if (*((_QWORD*)a3[1] + 3) == 0) {
              goto LABEL_499;
            }
            v107 = *((__int64***)a3[1] + 3);
            while (1) {
              while (1) {
                v108 = *((unsigned __int8*)v107 + 26);
                if (v16 >= v108) {
                  break;
                }
                v107 = (__int64**)*v107;
                if (v107 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v108 >= v16) {
                break;
              }
              v107 = (__int64**)v107[1];
              if (v107 == nullptr) {
                goto LABEL_499;
              }
            }
            v109 = *((__int64***)a3[1] + 3);
            v110 = *((unsigned __int16*)v107 + 14) >> 12;
            while (1) {
              while (1) {
                v111 = *((unsigned __int8*)v109 + 26);
                if (v105 >= v111) {
                  break;
                }
                v109 = (__int64**)*v109;
                if (v109 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v111 >= v105) {
                break;
              }
              v109 = (__int64**)v109[1];
              if (v109 == nullptr) {
                goto LABEL_499;
              }
            }
          } while (v110 >= *((unsigned __int16*)v109 + 14) >> 12);
          while (1) {
            v113 = *--v96;
            v112 = v113;
            if (v113 == v104) {
              break;
            }
            v114 = *((__int64***)a3[1] + 3);
            while (1) {
              while (1) {
                v115 = *((unsigned __int8*)v114 + 26);
                if (v16 >= v115) {
                  break;
                }
                v114 = (__int64**)*v114;
                if (v114 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v115 >= v16) {
                break;
              }
              v114 = (__int64**)v114[1];
              if (v114 == nullptr) {
                goto LABEL_499;
              }
            }
            v116 = *((__int64***)a3[1] + 3);
            v117 = *((unsigned __int16*)v114 + 14) >> 12;
            while (1) {
              while (1) {
                v118 = *((unsigned __int8*)v116 + 26);
                if (v112 >= v118) {
                  break;
                }
                v116 = (__int64**)*v116;
                if (v116 == nullptr) {
                  goto LABEL_499;
                }
              }
              if (v118 >= v112) {
                break;
              }
              v116 = (__int64**)v116[1];
              if (v116 == nullptr) {
                goto LABEL_499;
              }
            }
            if (v117 >= *((unsigned __int16*)v116 + 14) >> 12) {
              LOBYTE(v104) = v112;
              break;
            }
          }
        } while (v11 < v96);
      }
      v119 = v11 - 1;
      if (v9 != v11 - 1) {
        *v9 = *v119;
      }
      a5 = 0;
      *v119 = v16;
    }
  }
  v120 = *(a2 - 1);
  v121 = *v11;
  v122 = **a3;
  if (v120 == v122) {
    goto LABEL_256;
  }
  if (v121 != v122) {
    v218 = *((__int64***)a3[1] + 3);
    if (v218 == nullptr) {
      goto LABEL_499;
    }
    v219 = *((__int64***)a3[1] + 3);
    while (1) {
      while (1) {
        v220 = *((unsigned __int8*)v219 + 26);
        if (v120 >= v220) {
          break;
        }
        v219 = (__int64**)*v219;
        if (v219 == nullptr) {
          goto LABEL_499;
        }
      }
      if (v220 >= v120) {
        break;
      }
      v219 = (__int64**)v219[1];
      if (v219 == nullptr) {
        goto LABEL_499;
      }
    }
    v238 = *((unsigned __int16*)v219 + 14) >> 12;
    while (1) {
      while (1) {
        v239 = *((unsigned __int8*)v218 + 26);
        if (v121 >= v239) {
          break;
        }
        v218 = (__int64**)*v218;
        if (v218 == nullptr) {
          goto LABEL_499;
        }
      }
      if (v239 >= v121) {
        break;
      }
      v218 = (__int64**)v218[1];
      if (v218 == nullptr) {
        goto LABEL_499;
      }
    }
    if (v238 < *((unsigned __int16*)v218 + 14) >> 12) {
    LABEL_256:
      *v11 = v120;
      *(a2 - 1) = v121;
    }
  }
  return result;
}

_BYTE* Unit_934e20(_BYTE* result, _BYTE* a2, _BYTE* a3, unsigned __int8** a4)
{
  unsigned int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned __int8* v7;
  unsigned int v8;
  __int64* v9;
  __int64** v10;
  unsigned int v11;
  unsigned int v12;
  __int64** v13;
  unsigned int v14;
  unsigned int v15;
  __int64** v16;
  unsigned int v17;
  __int64** v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64** v25;
  __int64** v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  bool v31;
  unsigned int v32;
  int v33;
  __int64** v34;
  __int64** v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;

  v4 = (unsigned __int8)*a2;
  v5 = (unsigned __int8)*result;
  v6 = **a4;
  if (v4 == v6) {
    if ((unsigned __int8)*a3 == v4) {
      *result = v4;
    LABEL_71:
      *a3 = v5;
      return result;
    }
    goto LABEL_69;
  }
  v7 = a4[1];
  if (v5 == v6) {
    v8 = (unsigned __int8)*a3;
    LOBYTE(v6) = *result;
    if (v8 == v5) {
      goto LABEL_43;
    }
    v9 = *((__int64**)v7 + 3);
  LABEL_29:
    if (v9 == nullptr) {
      goto LABEL_86;
    }
    v18 = (__int64**)v9;
    while (1) {
      while (1) {
        v19 = *((unsigned __int8*)v18 + 26);
        if (v8 >= v19) {
          break;
        }
        v18 = (__int64**)*v18;
        if (v18 == nullptr) {
          goto LABEL_86;
        }
      }
      if (v19 >= v8) {
        break;
      }
      v18 = (__int64**)v18[1];
      if (v18 == nullptr) {
        goto LABEL_86;
      }
    }
    v20 = *((unsigned __int16*)v18 + 14) >> 12;
    while (1) {
      while (1) {
        v21 = *((unsigned __int8*)v9 + 26);
        if (v4 >= v21) {
          break;
        }
        v9 = (__int64*)*v9;
        if (v9 == nullptr) {
          goto LABEL_86;
        }
      }
      if (v21 >= v4) {
        break;
      }
      v9 = (__int64*)v9[1];
      if (v9 == nullptr) {
        goto LABEL_86;
      }
    }
    LOBYTE(v6) = v8;
    if (v20 >= *((unsigned __int16*)v9 + 14) >> 12) {
      return result;
    }
  LABEL_43:
    *a2 = v6;
    *a3 = v4;
    v22 = (unsigned __int8)*a2;
    v23 = (unsigned __int8)*result;
    v24 = **a4;
    if (v22 != v24) {
      if (v23 == v24) {
        return result;
      }
      v25 = *((__int64***)a4[1] + 3);
      if (v25 == nullptr) {
        goto LABEL_86;
      }
      v26 = *((__int64***)a4[1] + 3);
      while (1) {
        while (1) {
          v27 = *((unsigned __int8*)v26 + 26);
          if (v22 >= v27) {
            break;
          }
          v26 = (__int64**)*v26;
          if (v26 == nullptr) {
            goto LABEL_86;
          }
        }
        if (v27 >= v22) {
          break;
        }
        v26 = (__int64**)v26[1];
        if (v26 == nullptr) {
          goto LABEL_86;
        }
      }
      v28 = *((unsigned __int16*)v26 + 14) >> 12;
      while (1) {
        while (1) {
          v29 = *((unsigned __int8*)v25 + 26);
          if (v23 >= v29) {
            break;
          }
          v25 = (__int64**)*v25;
          if (v25 == nullptr) {
            goto LABEL_86;
          }
        }
        if (v29 >= v23) {
          break;
        }
        v25 = (__int64**)v25[1];
        if (v25 == nullptr) {
          goto LABEL_86;
        }
      }
      if (v28 >= *((unsigned __int16*)v25 + 14) >> 12) {
        return result;
      }
    }
    *result = v22;
    *a2 = v23;
    return result;
  }
  v9 = *((__int64**)v7 + 3);
  if (v9 == nullptr) {
    goto LABEL_86;
  }
  v10 = (__int64**)v9;
  while (1) {
    while (1) {
      v11 = *((unsigned __int8*)v10 + 26);
      if (v4 >= v11) {
        break;
      }
      v10 = (__int64**)*v10;
      if (v10 == nullptr) {
        goto LABEL_86;
      }
    }
    if (v11 >= v4) {
      break;
    }
    v10 = (__int64**)v10[1];
    if (v10 == nullptr) {
      goto LABEL_86;
    }
  }
  v12 = *((unsigned __int16*)v10 + 14) >> 12;
  v13 = (__int64**)v9;
  while (1) {
    while (1) {
      v14 = *((unsigned __int8*)v13 + 26);
      if (v5 >= v14) {
        break;
      }
      v13 = (__int64**)*v13;
      if (v13 == nullptr) {
        goto LABEL_86;
      }
    }
    if (v14 >= v5) {
      break;
    }
    v13 = (__int64**)v13[1];
    if (v13 == nullptr) {
      goto LABEL_86;
    }
  }
  v15 = *((unsigned __int16*)v13 + 14);
  v8 = (unsigned __int8)*a3;
  if (v12 >= v15 >> 12) {
    if (v8 == v6) {
      goto LABEL_43;
    }
    goto LABEL_29;
  }
  if (v8 != v6) {
    v16 = (__int64**)v9;
    while (1) {
      while (1) {
        v17 = *((unsigned __int8*)v16 + 26);
        if (v8 >= v17) {
          break;
        }
        v16 = (__int64**)*v16;
        if (v16 == nullptr) {
          goto LABEL_86;
        }
      }
      if (v17 >= v8) {
        break;
      }
      v16 = (__int64**)v16[1];
      if (v16 == nullptr) {
        goto LABEL_86;
      }
    }
    v6 = *((unsigned __int16*)v16 + 14) >> 12;
    while (1) {
      while (1) {
        v30 = *((unsigned __int8*)v9 + 26);
        if (v4 >= v30) {
          break;
        }
        v9 = (__int64*)*v9;
        if (v9 == nullptr) {
          goto LABEL_86;
        }
      }
      if (v30 >= v4) {
        break;
      }
      v9 = (__int64*)v9[1];
      if (v9 == nullptr) {
        goto LABEL_86;
      }
    }
    v31 = v6 >= *((unsigned __int16*)v9 + 14) >> 12;
    LOBYTE(v6) = *a3;
    if (v31) {
    LABEL_69:
      *result = v4;
      *a2 = v5;
      v32 = (unsigned __int8)*a3;
      v33 = **a4;
      if (v32 == v33) {
      LABEL_70:
        *a2 = v32;
        goto LABEL_71;
      }
      if (v5 != v33) {
        v34 = *((__int64***)a4[1] + 3);
        if (v34 != nullptr) {
          v35 = *((__int64***)a4[1] + 3);
          while (1) {
            while (1) {
              v36 = *((unsigned __int8*)v35 + 26);
              if (v32 >= v36) {
                break;
              }
              v35 = (__int64**)*v35;
              if (v35 == nullptr) {
                goto LABEL_86;
              }
            }
            if (v36 >= v32) {
              break;
            }
            v35 = (__int64**)v35[1];
            if (v35 == nullptr) {
              goto LABEL_86;
            }
          }
          v37 = *((unsigned __int16*)v35 + 14) >> 12;
          while (1) {
            while (1) {
              v38 = *((unsigned __int8*)v34 + 26);
              if (v5 >= v38) {
                break;
              }
              v34 = (__int64**)*v34;
              if (v34 == nullptr) {
                goto LABEL_86;
              }
            }
            if (v38 >= v5) {
              break;
            }
            v34 = (__int64**)v34[1];
            if (v34 == nullptr) {
              goto LABEL_86;
            }
          }
          if (v37 < *((unsigned __int16*)v34 + 14) >> 12) {
            goto LABEL_70;
          }
          return result;
        }
      LABEL_86:
        String_60a250_alt1("map::at:  key not found");
      }
      return result;
    }
  }
  *result = v6;
  goto LABEL_71;
}

_BYTE* Unit_935180(_BYTE* a1, _BYTE* a2, _BYTE* a3, _BYTE* a4,
                   unsigned __int8** a5)
{
  _BYTE* result;
  unsigned int v11;
  unsigned int v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  __int64** v20;
  __int64** v21;
  unsigned int v22;
  __int64** v23;
  __int64** v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  __int64** v28;
  __int64** v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  unsigned int v34;

  result = Unit_934e20(a1, a2, a3, a5);
  v11 = (unsigned __int8)*a4;
  v12 = (unsigned __int8)*a3;
  v13 = **a5;
  if (v11 != v13) {
    if (v12 == v13) {
      return result;
    }
    v20 = *((__int64***)a5[1] + 3);
    if (v20 == nullptr) {
      goto LABEL_50;
    }
    v21 = *((__int64***)a5[1] + 3);
    while (1) {
      while (1) {
        v22 = *((unsigned __int8*)v21 + 26);
        if (v11 >= v22) {
          break;
        }
        v21 = (__int64**)*v21;
        if (v21 == nullptr) {
          goto LABEL_50;
        }
      }
      if (v22 >= v11) {
        break;
      }
      v21 = (__int64**)v21[1];
      if (v21 == nullptr) {
        goto LABEL_50;
      }
    }
    v26 = *((unsigned __int16*)v21 + 14) >> 12;
    while (1) {
      while (1) {
        v27 = *((unsigned __int8*)v20 + 26);
        if (v12 >= v27) {
          break;
        }
        v20 = (__int64**)*v20;
        if (v20 == nullptr) {
          goto LABEL_50;
        }
      }
      if (v27 >= v12) {
        break;
      }
      v20 = (__int64**)v20[1];
      if (v20 == nullptr) {
        goto LABEL_50;
      }
    }
    if (v26 >= *((unsigned __int16*)v20 + 14) >> 12) {
      return result;
    }
  }
  *a3 = v11;
  *a4 = v12;
  v14 = (unsigned __int8)*a3;
  v15 = (unsigned __int8)*a2;
  v16 = **a5;
  if (v14 != v16) {
    if (v15 == v16) {
      return result;
    }
    v23 = *((__int64***)a5[1] + 3);
    if (v23 == nullptr) {
      goto LABEL_50;
    }
    v24 = *((__int64***)a5[1] + 3);
    while (1) {
      while (1) {
        v25 = *((unsigned __int8*)v24 + 26);
        if (v14 >= v25) {
          break;
        }
        v24 = (__int64**)*v24;
        if (v24 == nullptr) {
          goto LABEL_50;
        }
      }
      if (v25 >= v14) {
        break;
      }
      v24 = (__int64**)v24[1];
      if (v24 == nullptr) {
        goto LABEL_50;
      }
    }
    v31 = *((unsigned __int16*)v24 + 14) >> 12;
    while (1) {
      while (1) {
        v32 = *((unsigned __int8*)v23 + 26);
        if (v15 >= v32) {
          break;
        }
        v23 = (__int64**)*v23;
        if (v23 == nullptr) {
          goto LABEL_50;
        }
      }
      if (v32 >= v15) {
        break;
      }
      v23 = (__int64**)v23[1];
      if (v23 == nullptr) {
        goto LABEL_50;
      }
    }
    if (v31 >= *((unsigned __int16*)v23 + 14) >> 12) {
      return result;
    }
  }
  *a2 = v14;
  *a3 = v15;
  v17 = (unsigned __int8)*a2;
  v18 = (unsigned __int8)*a1;
  v19 = **a5;
  if (v17 == v19) {
  LABEL_4:
    *a1 = v17;
    *a2 = v18;
    return result;
  }
  if (v18 != v19) {
    v28 = *((__int64***)a5[1] + 3);
    if (v28 != nullptr) {
      v29 = *((__int64***)a5[1] + 3);
      while (1) {
        while (1) {
          v30 = *((unsigned __int8*)v29 + 26);
          if (v17 >= v30) {
            break;
          }
          v29 = (__int64**)*v29;
          if (v29 == nullptr) {
            goto LABEL_50;
          }
        }
        if (v30 >= v17) {
          break;
        }
        v29 = (__int64**)v29[1];
        if (v29 == nullptr) {
          goto LABEL_50;
        }
      }
      v33 = *((unsigned __int16*)v29 + 14) >> 12;
      while (1) {
        while (1) {
          v34 = *((unsigned __int8*)v28 + 26);
          if (v18 >= v34) {
            break;
          }
          v28 = (__int64**)*v28;
          if (v28 == nullptr) {
            goto LABEL_50;
          }
        }
        if (v34 >= v18) {
          break;
        }
        v28 = (__int64**)v28[1];
        if (v28 == nullptr) {
          goto LABEL_50;
        }
      }
      if (v33 < *((unsigned __int16*)v28 + 14) >> 12) {
        goto LABEL_4;
      }
      return result;
    }
  LABEL_50:
    String_60a250_alt1("map::at:  key not found");
  }
  return result;
}

_BYTE* Unit_935400(_BYTE* a1, _BYTE* a2, _BYTE* a3, _BYTE* a4, _BYTE* a5,
                   unsigned __int8** a6)
{
  _BYTE* result;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64** v25;
  __int64** v26;
  unsigned int v27;
  __int64** v28;
  __int64** v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  __int64** v33;
  __int64** v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  __int64** v38;
  __int64** v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  unsigned int v44;

  result = Unit_935180(a1, a2, a3, a4, a6);
  v13 = (unsigned __int8)*a5;
  v14 = (unsigned __int8)*a4;
  v15 = **a6;
  if (v13 != v15) {
    if (v14 == v15) {
      return result;
    }
    v25 = *((__int64***)a6[1] + 3);
    if (v25 == nullptr) {
      goto LABEL_67;
    }
    v26 = *((__int64***)a6[1] + 3);
    while (1) {
      while (1) {
        v27 = *((unsigned __int8*)v26 + 26);
        if (v13 >= v27) {
          break;
        }
        v26 = (__int64**)*v26;
        if (v26 == nullptr) {
          goto LABEL_67;
        }
      }
      if (v27 >= v13) {
        break;
      }
      v26 = (__int64**)v26[1];
      if (v26 == nullptr) {
        goto LABEL_67;
      }
    }
    v31 = *((unsigned __int16*)v26 + 14) >> 12;
    while (1) {
      while (1) {
        v32 = *((unsigned __int8*)v25 + 26);
        if (v14 >= v32) {
          break;
        }
        v25 = (__int64**)*v25;
        if (v25 == nullptr) {
          goto LABEL_67;
        }
      }
      if (v32 >= v14) {
        break;
      }
      v25 = (__int64**)v25[1];
      if (v25 == nullptr) {
        goto LABEL_67;
      }
    }
    if (v31 >= *((unsigned __int16*)v25 + 14) >> 12) {
      return result;
    }
  }
  *a4 = v13;
  *a5 = v14;
  v16 = (unsigned __int8)*a4;
  v17 = (unsigned __int8)*a3;
  v18 = **a6;
  if (v16 != v18) {
    if (v17 == v18) {
      return result;
    }
    v28 = *((__int64***)a6[1] + 3);
    if (v28 == nullptr) {
      goto LABEL_67;
    }
    v29 = *((__int64***)a6[1] + 3);
    while (1) {
      while (1) {
        v30 = *((unsigned __int8*)v29 + 26);
        if (v16 >= v30) {
          break;
        }
        v29 = (__int64**)*v29;
        if (v29 == nullptr) {
          goto LABEL_67;
        }
      }
      if (v30 >= v16) {
        break;
      }
      v29 = (__int64**)v29[1];
      if (v29 == nullptr) {
        goto LABEL_67;
      }
    }
    v36 = *((unsigned __int16*)v29 + 14) >> 12;
    while (1) {
      while (1) {
        v37 = *((unsigned __int8*)v28 + 26);
        if (v17 >= v37) {
          break;
        }
        v28 = (__int64**)*v28;
        if (v28 == nullptr) {
          goto LABEL_67;
        }
      }
      if (v37 >= v17) {
        break;
      }
      v28 = (__int64**)v28[1];
      if (v28 == nullptr) {
        goto LABEL_67;
      }
    }
    if (v36 >= *((unsigned __int16*)v28 + 14) >> 12) {
      return result;
    }
  }
  *a3 = v16;
  *a4 = v17;
  v19 = (unsigned __int8)*a3;
  v20 = (unsigned __int8)*a2;
  v21 = **a6;
  if (v19 != v21) {
    if (v20 == v21) {
      return result;
    }
    v33 = *((__int64***)a6[1] + 3);
    if (v33 == nullptr) {
      goto LABEL_67;
    }
    v34 = *((__int64***)a6[1] + 3);
    while (1) {
      while (1) {
        v35 = *((unsigned __int8*)v34 + 26);
        if (v19 >= v35) {
          break;
        }
        v34 = (__int64**)*v34;
        if (v34 == nullptr) {
          goto LABEL_67;
        }
      }
      if (v35 >= v19) {
        break;
      }
      v34 = (__int64**)v34[1];
      if (v34 == nullptr) {
        goto LABEL_67;
      }
    }
    v41 = *((unsigned __int16*)v34 + 14) >> 12;
    while (1) {
      while (1) {
        v42 = *((unsigned __int8*)v33 + 26);
        if (v20 >= v42) {
          break;
        }
        v33 = (__int64**)*v33;
        if (v33 == nullptr) {
          goto LABEL_67;
        }
      }
      if (v42 >= v20) {
        break;
      }
      v33 = (__int64**)v33[1];
      if (v33 == nullptr) {
        goto LABEL_67;
      }
    }
    if (v41 >= *((unsigned __int16*)v33 + 14) >> 12) {
      return result;
    }
  }
  *a2 = v19;
  *a3 = v20;
  v22 = (unsigned __int8)*a2;
  v23 = (unsigned __int8)*a1;
  v24 = **a6;
  if (v22 == v24) {
  LABEL_5:
    *a1 = v22;
    *a2 = v23;
    return result;
  }
  if (v23 != v24) {
    v38 = *((__int64***)a6[1] + 3);
    if (v38 != nullptr) {
      v39 = *((__int64***)a6[1] + 3);
      while (1) {
        while (1) {
          v40 = *((unsigned __int8*)v39 + 26);
          if (v22 >= v40) {
            break;
          }
          v39 = (__int64**)*v39;
          if (v39 == nullptr) {
            goto LABEL_67;
          }
        }
        if (v40 >= v22) {
          break;
        }
        v39 = (__int64**)v39[1];
        if (v39 == nullptr) {
          goto LABEL_67;
        }
      }
      v43 = *((unsigned __int16*)v39 + 14) >> 12;
      while (1) {
        while (1) {
          v44 = *((unsigned __int8*)v38 + 26);
          if (v23 >= v44) {
            break;
          }
          v38 = (__int64**)*v38;
          if (v38 == nullptr) {
            goto LABEL_67;
          }
        }
        if (v44 >= v23) {
          break;
        }
        v38 = (__int64**)v38[1];
        if (v38 == nullptr) {
          goto LABEL_67;
        }
      }
      if (v43 < *((unsigned __int16*)v38 + 14) >> 12) {
        goto LABEL_5;
      }
      return result;
    }
  LABEL_67:
    String_60a250_alt1("map::at:  key not found");
  }
  return result;
}

bool Unit_935740(unsigned __int8* a1, unsigned __int8* a2, unsigned __int8** a3)
{
  signed __int64 v3;
  unsigned int v5;
  unsigned int v6;
  int v7;
  unsigned __int8* v8;
  unsigned __int8* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned __int8* v16;
  unsigned int v17;
  unsigned int v18;
  int v19;
  __int64** v20;
  __int64** v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  __int64** v25;
  __int64** v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  __int64** v31;
  __int64** v32;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;

  v3 = a2 - a1;
  if (a2 - a1 <= 2) {
    if ((unsigned __int64)(a2 - a1) >= 2) {
      if (v3 == 2) {
        v5 = *(a2 - 1);
        v6 = *a1;
        v7 = **a3;
        if (v5 == v7) {
          goto LABEL_5;
        }
        if (v6 != v7) {
          v31 = *((__int64***)a3[1] + 3);
          if (v31 == nullptr) {
          LABEL_66:
            String_60a250_alt1("map::at:  key not found");
          }
          v32 = *((__int64***)a3[1] + 3);
          while (1) {
            while (1) {
              v33 = *((unsigned __int8*)v32 + 26);
              if (v5 >= v33) {
                break;
              }
              v32 = (__int64**)*v32;
              if (v32 == nullptr) {
                goto LABEL_66;
              }
            }
            if (v33 >= v5) {
              break;
            }
            v32 = (__int64**)v32[1];
            if (v32 == nullptr) {
              goto LABEL_66;
            }
          }
          v34 = *((unsigned __int16*)v32 + 14) >> 12;
          while (1) {
            while (1) {
              v35 = *((unsigned __int8*)v31 + 26);
              if (v6 >= v35) {
                break;
              }
              v31 = (__int64**)*v31;
              if (v31 == nullptr) {
                goto LABEL_66;
              }
            }
            if (v35 >= v6) {
              break;
            }
            v31 = (__int64**)v31[1];
            if (v31 == nullptr) {
              goto LABEL_66;
            }
          }
          if (v34 < *((unsigned __int16*)v31 + 14) >> 12) {
          LABEL_5:
            *a1 = v5;
            *(a2 - 1) = v6;
          }
        }
        return true;
      }
      goto LABEL_11;
    }
    return true;
  }
  switch (v3) {
  case 3LL:
    Unit_934e20(a1, a1 + 1, a2 - 1, a3);
    return true;
  case 4LL:
    Unit_935180(a1, a1 + 1, a1 + 2, a2 - 1, a3);
    return true;
  case 5LL:
    Unit_935400(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1, a3);
    return true;
  default:
    break;
  }
LABEL_11:
  v8 = a1 + 2;
  Unit_934e20(a1, a1 + 1, a1 + 2, a3);
  v11 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v12 = 0;
  while (1) {
    v13 = *v11;
    v14 = *v8;
    v15 = **a3;
    if (v13 == v15) {
      goto LABEL_72;
    }
    if (v14 != v15) {
      v25 = *((__int64***)a3[1] + 3);
      if (v25 == nullptr) {
        goto LABEL_66;
      }
      v26 = *((__int64***)a3[1] + 3);
      while (1) {
        while (1) {
          v27 = *((unsigned __int8*)v26 + 26);
          if (v13 >= v27) {
            break;
          }
          v26 = (__int64**)*v26;
          if (v26 == nullptr) {
            goto LABEL_66;
          }
        }
        if (v27 >= v13) {
          break;
        }
        v26 = (__int64**)v26[1];
        if (v26 == nullptr) {
          goto LABEL_66;
        }
      }
      v28 = *((unsigned __int16*)v26 + 14) >> 12;
      while (1) {
        while (1) {
          v29 = *((unsigned __int8*)v25 + 26);
          if (v14 >= v29) {
            break;
          }
          v25 = (__int64**)*v25;
          if (v25 == nullptr) {
            goto LABEL_66;
          }
        }
        if (v29 >= v14) {
          break;
        }
        v25 = (__int64**)v25[1];
        if (v25 == nullptr) {
          goto LABEL_66;
        }
      }
      if (v28 < *((unsigned __int16*)v25 + 14) >> 12) {
      LABEL_72:
        *v11 = v14;
        v16 = v8;
        do {
          v18 = *--v16;
          v17 = v18;
          v19 = **a3;
          if (v13 != v19) {
            if (v17 == v19) {
              goto LABEL_14;
            }
            v20 = *((__int64***)a3[1] + 3);
            if (v20 == nullptr) {
              goto LABEL_66;
            }
            v21 = *((__int64***)a3[1] + 3);
            while (1) {
              while (1) {
                v22 = *((unsigned __int8*)v21 + 26);
                if (v13 >= v22) {
                  break;
                }
                v21 = (__int64**)*v21;
                if (v21 == nullptr) {
                  goto LABEL_66;
                }
              }
              if (v22 >= v13) {
                break;
              }
              v21 = (__int64**)v21[1];
              if (v21 == nullptr) {
                goto LABEL_66;
              }
            }
            v23 = *((unsigned __int16*)v21 + 14) >> 12;
            while (1) {
              while (1) {
                v24 = *((unsigned __int8*)v20 + 26);
                if (v17 >= v24) {
                  break;
                }
                v20 = (__int64**)*v20;
                if (v20 == nullptr) {
                  goto LABEL_66;
                }
              }
              if (v24 >= v17) {
                break;
              }
              v20 = (__int64**)v20[1];
              if (v20 == nullptr) {
                goto LABEL_66;
              }
            }
            if (v23 >= *((unsigned __int16*)v20 + 14) >> 12) {
              goto LABEL_14;
            }
          }
          *v8 = v17;
          v8 = v16;
        } while (v16 != a1);
        v8 = a1;
      LABEL_14:
        ++v12;
        *v8 = v13;
        if (v12 == 8) {
          return v11 + 1 == a2;
        }
      }
    }
    v8 = v11++;
    if (v11 == a2) {
      return true;
    }
  }
}

char* Unit_935ac0(char* result, char* a2, unsigned __int64 a3, _QWORD* a4,
                  __int64 a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  char* v11;
  char* v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  char* v22;
  char* v25;
  _QWORD* v27;
  _QWORD* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;

  if (a3 >= 2) {
    if (a3 == 2) {
      if (*((_DWORD*)a2 - 2) > *((_DWORD*)result + 2)) {
        v6 = *(_QWORD*)result;
        v5 = *((_QWORD*)result + 1);
        v7 = *((_QWORD*)a2 - 1);
        *(_QWORD*)result = *((_QWORD*)a2 - 2);
        *((_QWORD*)result + 1) = v7;
        *((_QWORD*)a2 - 2) = v6;
        *((_QWORD*)a2 - 1) = v5;
      }
    }
    else if ((__int64)a3 > 128) {
      v19 = a3 >> 1;
      v21 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v25 = result;
        v27 = a4;
        GameRoutine_935d00((__int64)result, &result[16 * v19], a3 >> 1, a4);
        v28 = &v27[2 * v19];
        result =
            (char*)GameRoutine_935d00((__int64)&v25[16 * v19], a2, v21, v28);
        v29 = &v27[2 * a3];
        v30 = v28;
        while (v30 != v29) {
          if (*((_DWORD*)v30 + 2) <= *((_DWORD*)v27 + 2)) {
            v31 = *v27;
            v32 = v27[1];
            v27 += 2;
          }
          else {
            v31 = *v30;
            v32 = v30[1];
            v30 += 2;
          }
          *(_QWORD*)v25 = v31;
          *((_QWORD*)v25 + 1) = v32;
          v25 += 16;
          if (v27 == v28) {
            while (v30 != v29) {
              v35 = *v30;
              v36 = v30[1];
              v30 += 2;
              *(_QWORD*)v25 = v35;
              *((_QWORD*)v25 + 1) = v36;
              v25 += 16;
            }
            return result;
          }
        }
        while (v27 != v28) {
          v33 = *v27;
          v34 = v27[1];
          v27 += 2;
          *(_QWORD*)v25 = v33;
          *((_QWORD*)v25 + 1) = v34;
          v25 += 16;
        }
      }
      else {
        v22 = result;
        Unit_935ac0(result, &result[16 * v19], a3 >> 1, a4, a5);
        Unit_935ac0(&v22[16 * v19], a2, v21, a4, a5);
        return Unit_935f40_alt1(v22, &v22[16 * v19], (__int64*)a2, v19, v21,
                                (__int64)a4, a5);
      }
    }
    else if (result != a2) {
      v8 = result + 16;
      if (result + 16 != a2) {
        v9 = 0;
        v10 = result;
        do {
          v12 = v8;
          v13 = *((_DWORD*)v10 + 6);
          if (v13 > *((_DWORD*)v10 + 2)) {
            v14 = *(_QWORD*)v12;
            v15 = *((_DWORD*)v10 + 7);
            v16 = v9;
            do {
              v17 = &result[v16];
              v18 = *(_QWORD*)&result[v16 + 8];
              *((_QWORD*)v17 + 2) = *(_QWORD*)&result[v16];
              *((_QWORD*)v17 + 3) = v18;
              if (v16 == 0) {
                v11 = result;
                goto LABEL_11;
              }
              v16 -= 16;
            } while (v13 > *((_DWORD*)v17 - 2));
            v11 = &result[v16 + 16];
          LABEL_11:
            *(_QWORD*)v11 = v14;
            *((_DWORD*)v11 + 2) = v13;
            *((_DWORD*)v11 + 3) = v15;
          }
          v8 = v12 + 16;
          v9 += 16;
          v10 = v12;
        } while (v12 + 16 != a2);
      }
    }
  }
  return result;
}

char* Unit_935f40(char* result, char* a2, char* a3, __int64 a4, __int64 a5,
                  __int64 a6, __int64 a7)
{
  __int64 v9;
  __int64 i;
  char* v11;
  __int64 v13;
  __int64 v14;
  char* v15;
  char* v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  unsigned int v20;
  char* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  unsigned int v26;
  char* v27;
  char* v28;
  char* v29;
  char* v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  _QWORD* v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  bool v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  char* v55;
  char* v56;
  __int64 v57;
  char* v58;
  _QWORD* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned int v63;
  unsigned int v64;
  char v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  char* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char* v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  char* v80;
  char* v81;
  char* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = -a4;
      for (i = 0;; i += 16) {
        v11 = &result[i];
        if (*((_DWORD*)a2 + 2) > *(_DWORD*)&result[i + 8]) {
          break;
        }
        if (__CFADD__(v9++, 1)) {
          return result;
        }
      }
      v13 = -v9;
      if (-v9 >= a5) {
        if (v9 == -1) {
          v75 = &result[i];
          v87 = *(_QWORD*)v75;
          v92 = *((_QWORD*)v75 + 1);
          v76 = *((_QWORD*)a2 + 1);
          *(_QWORD*)v75 = *(_QWORD*)a2;
          *((_QWORD*)v75 + 1) = v76;
          *(_QWORD*)a2 = v87;
          *((_QWORD*)a2 + 1) = v92;
          return result;
        }
        v22 = v13 / 2;
        v16 = &result[16 * (v13 / 2) + i];
        if (a3 == a2) {
          v15 = a3;
        }
        else {
          v23 = (a3 - a2) >> 4;
          v15 = a2;
          do {
            v24 = v23 >> 1;
            v25 = &v15[16 * (v23 >> 1)];
            v26 = *((_DWORD*)v25 + 2);
            v27 = v25 + 16;
            v23 += ~(v23 >> 1);
            if (v26 > *((_DWORD*)v16 + 2)) {
              v15 = v27;
            }
            else {
              v23 = v24;
            }
          } while (v23 != 0);
        }
        v14 = (v15 - a2) >> 4;
      }
      else {
        v14 = a5 / 2;
        v15 = &a2[16 * (a5 / 2)];
        if (v11 == a2) {
          v16 = a2;
        }
        else {
          v16 = &result[i];
          v17 = (a2 - result - i) >> 4;
          do {
            v18 = v17 >> 1;
            v19 = &v16[16 * (v17 >> 1)];
            v20 = *((_DWORD*)v19 + 2);
            v21 = v19 + 16;
            v17 += ~(v17 >> 1);
            if (*((_DWORD*)v15 + 2) > v20) {
              v17 = v18;
            }
            else {
              v16 = v21;
            }
          } while (v17 != 0);
        }
        v22 = (v16 - result - i) >> 4;
      }
      v28 = v15;
      if (v16 != a2) {
        v28 = v16;
        if (a2 != v15) {
          v29 = v16 + 16;
          if (v16 + 16 == a2) {
            v36 = v15 - a2;
            v81 = a3;
            v37 = a6;
            v38 = a5;
            v84 = *(_QWORD*)v16;
            v89 = *((_QWORD*)v16 + 1);
            memmove(v16, v16 + 16, v15 - a2);
            a3 = v81;
            v28 = &v16[v36];
            a5 = v38;
            a6 = v37;
            *(_QWORD*)v28 = v84;
            *((_QWORD*)v28 + 1) = v89;
          }
          else {
            v30 = a2 + 16;
            if (a2 + 16 == v15) {
              v28 = v16 + 16;
              v85 = *((_QWORD*)v15 - 2);
              v90 = *((_QWORD*)v15 - 1);
              if (v15 - 16 != v16) {
                v82 = a3;
                v39 = a6;
                v40 = a5;
                memmove(v16 + 16, v16, v15 - 16 - v16);
                a3 = v82;
                a5 = v40;
                a6 = v39;
              }
              *(_QWORD*)v16 = v85;
              *((_QWORD*)v16 + 1) = v90;
            }
            else {
              v31 = (char*)(a2 - v16);
              v32 = (a2 - v16) >> 4;
              v33 = (v15 - a2) >> 4;
              if (v32 == v33) {
                do {
                  v83 = *((_QWORD*)v29 - 2);
                  v88 = *((_QWORD*)v29 - 1);
                  v34 = *((_QWORD*)v30 - 1);
                  *((_QWORD*)v29 - 2) = *((_QWORD*)v30 - 2);
                  *((_QWORD*)v29 - 1) = v34;
                  *((_QWORD*)v30 - 2) = v83;
                  *((_QWORD*)v30 - 1) = v88;
                  if (v29 == a2) {
                    break;
                  }
                  v29 += 16;
                  v35 = v30 == v15;
                  v30 += 16;
                } while (!v35);
                v28 = a2;
              }
              else {
                v41 = (a2 - v16) >> 4;
                do {
                  v42 = v41;
                  v41 = v33;
                  v33 = v42 % v33;
                } while (v33 != 0);
                if (16 * v41 != 0) {
                  v43 = &v16[16 * v41];
                  do {
                    v44 = *((_QWORD*)v43 - 2);
                    v45 = *((_QWORD*)v43 - 1);
                    v43 -= 16;
                    v46 = &v43[(_QWORD)v31];
                    v86 = v44;
                    v91 = v45;
                    v47 = v43;
                    do {
                      v48 = v46;
                      v49 = *((_QWORD*)v46 + 1);
                      *v47 = *(_QWORD*)v46;
                      v47[1] = v49;
                      v50 = v15 - v46;
                      v46 = &v31[(_QWORD)v46];
                      v50 >>= 4;
                      v51 = __OFSUB__(v32, v50);
                      v52 = v32 - v50;
                      v65 = (v52 < 0) ^ v51;
                      v53 = &v16[16 * v52];
                      if (!v65) {
                        v46 = v53;
                      }
                      v47 = v48;
                    } while (v46 != v43);
                    *v48 = v86;
                    v48[1] = v91;
                  } while (v43 != v16);
                }
                v28 = &v16[v15 - a2];
              }
            }
          }
        }
      }
      v54 = a5 - v14;
      if (v22 + v14 >= a5 - (v22 + v14) - v9) {
        Unit_935f40(v28, v15, a3, -(v22 + v9), a5 - v14, a6, a7);
        v15 = v16;
        v54 = v14;
        a4 = v22;
        a3 = v28;
      }
      else {
        v55 = v11;
        v56 = a3;
        Unit_935f40(v55, v16, v28, v22, v14, a6, a7);
        a4 = -(v22 + v9);
        a3 = v56;
        v11 = v28;
      }
      a5 = v54;
      result = v11;
      a2 = v15;
      if (v54 == 0) {
        return result;
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v68 = -a6;
        v69 = (_QWORD*)a6;
        v70 = result;
        do {
          v71 = *(_QWORD*)v70;
          v72 = *((_QWORD*)v70 + 1);
          v70 += 16;
          v68 -= 16;
          *v69 = v71;
          v69[1] = v72;
          v69 += 2;
        } while (v70 != a2);
        while (a2 != a3) {
          if (*((_DWORD*)a2 + 2) <= *(_DWORD*)(a6 + 8)) {
            v73 = *(_QWORD*)a6;
            v74 = *(_QWORD*)(a6 + 8);
            a6 += 16;
          }
          else {
            v73 = *(_QWORD*)a2;
            v74 = *((_QWORD*)a2 + 1);
            a2 += 16;
          }
          *(_QWORD*)result = v73;
          *((_QWORD*)result + 1) = v74;
          result += 16;
          if (v69 == (_QWORD*)a6) {
            return result;
          }
        }
        return (char*)memmove(result, a6, -(a6 + v68));
      }
    }
    else if (a2 != a3) {
      v57 = 0;
      do {
        v58 = &a2[v57];
        v59 = (_QWORD*)(a6 + v57);
        v57 += 16;
        v61 = *(_QWORD*)v58;
        v60 = *((_QWORD*)v58 + 1);
        *v59 = v61;
        v59[1] = v60;
      } while (&a2[v57] != a3);
      v62 = a6 + v57;
      while (a2 != result) {
        v63 = *((_DWORD*)a2 - 2);
        v64 = *(_DWORD*)(v62 - 8);
        v65 = v64 > v63;
        if (v64 <= v63) {
          v66 = (char*)(v62 - 16);
        }
        else {
          v66 = a2 - 16;
        }
        if (v65) {
          a2 -= 16;
        }
        else {
          v62 -= 16;
        }
        v67 = *((_QWORD*)v66 + 1);
        *((_QWORD*)a3 - 2) = *(_QWORD*)v66;
        *((_QWORD*)a3 - 1) = v67;
        a3 -= 16;
        if (v62 == a6) {
          return result;
        }
      }
      if (a6 != v62) {
        v77 = -16;
        do {
          v78 = *(_QWORD*)(v62 - 16);
          v79 = *(_QWORD*)(v62 - 8);
          v62 -= 16;
          v80 = &a3[v77];
          v77 -= 16;
          *(_QWORD*)v80 = v78;
          *((_QWORD*)v80 + 1) = v79;
        } while (v62 != a6);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
