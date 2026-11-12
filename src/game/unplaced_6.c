#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* ObeliskDestinyMenuItem_1a06060(_QWORD* result, int*, char);
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__attribute__((swiftcall)) void GameRoutine_113b050(PSEUDO_X8, const char*,
                                                    __n128 result);
__attribute__((swiftcall)) void GameRoutine_1225280(PSEUDO_X8, _QWORD* result);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__attribute__((swiftcall)) void Manager_a4fd20(PSEUDO_X8, __int64, __int64,
                                               __int64, char);
__attribute__((swiftcall)) void
RidePool_93c6a0(PSEUDO_X8, __int64 result, unsigned __int8*, __int64, char);
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__attribute__((swiftcall)) void game_112d860(PSEUDO_X8,
                                             unsigned __int8* result);
__int64** game_8aef60_alt1(__int64**, unsigned __int16*,
                           __n128) __asm__("game_8aef60");
__int64* GameRoutine_1152360(_QWORD*, unsigned __int8*);
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 AIThink_11eed80(void);
__int64 BattleInfo_7a3000(_QWORD);
__int64 BattleInfo_ec0e30(_QWORD, _QWORD);
__int64 BattleInfo_ec1080(void);
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_113ba00(_QWORD, _QWORD);
__int64 GameRoutine_1147d80(_QWORD, _QWORD);
__int64 GameRoutine_1148100(_QWORD, _QWORD);
__int64 GameRoutine_11e1ac0(__int64);
__int64 GameRoutine_11f3cd0();
__int64 GameRoutine_11f3d00();
__int64 GameRoutine_11f3d60();
__int64 GameRoutine_11f3d90();
__int64 GameRoutine_120f3d0(_QWORD);
__int64 GameRoutine_1210350(void);
__int64 GameRoutine_1210c00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1210f00(_QWORD);
__int64 GameRoutine_1214620(_QWORD, _QWORD);
__int64 GameRoutine_12148e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_126c140(void);
__int64 GameRoutine_1a05260(int**, __int64, char, __int64, char*);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6b7aa0(_QWORD);
__int64 GameRoutine_6c47b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c47b0_alt1(__int64, _BYTE*, char,
                                char) __asm__("GameRoutine_6c47b0");
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6c6da0_alt1(_QWORD) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_6e3b50(__int64 result, _QWORD*);
__int64 GameRoutine_6e56e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_717fc0(_QWORD, _QWORD);
__int64 GameRoutine_8301a0(_QWORD, _QWORD);
__int64 GameRoutine_8ef040(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_90d990(__int64 result);
__int64 GameRoutine_930b90(__int64, __int64);
__int64 GameRoutine_9db9e0(_QWORD, _QWORD);
__int64 GameRoutine_d8cf60(__int64 result);
__int64 GameSituation_906b70(_QWORD, _QWORD);
__int64 GameVariable_828dc0(_QWORD, _QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a062a0(__int64, int);
__int64 ObeliskDestinyMenuItem_1a06a40(_QWORD*, __int64, int);
__int64 ObeliskDestinyMenuItem_1a06b90(_QWORD*, __int64, int);
__int64 Pane_58f8a0(__int64);
__int64 Seq_1147f80(_QWORD);
__int64 Situation_7659e0(void);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 SpotMgr_13304c0(unsigned int*);
__int64 Troop_133ed80(__int64 result, __int64);
__int64 UnitItem_6e8e50(_QWORD, _QWORD);
__int64 Unit_6cf460(__int64);
__int64 Unit_6cf740(__int64);
__int64 Unit_6cfa20(__int64);
__int64 Unit_6cfde0(__int64);
__int64 Unit_6d00c0(__int64);
__int64 Unit_6d8180(_QWORD);
__int64 Unit_6d8390(_QWORD);
__int64 Unit_6e09a0(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_112daa0(unsigned __int8*);
__int64 game_112dfe0(__int64*, __int64);
__int64 game_1211020_alt1(_QWORD, _QWORD) __asm__("game_1211020");
__int64 game_1213640_alt1(_QWORD, _QWORD, _QWORD,
                          _QWORD) __asm__("game_1213640");
__int64 game_149e9e0(_QWORD);
__int64 game_68e4c0(_QWORD, _QWORD);
__int64 game_68e930(_QWORD, _QWORD);
__int64 game_68eb90(_QWORD, _QWORD);
__int64 game_68ece0(_QWORD, _QWORD);
__int64 game_68ee30(_QWORD, _QWORD);
__int64 game_6c51e0(__int64 result);
__int64 game_6c51e0_alt1(_QWORD) __asm__("game_6c51e0");
__int64 game_6c6ec0(__int64);
__int64 game_6c6ec0_alt1(_QWORD) __asm__("game_6c6ec0");
__int64 game_8aef60(_QWORD, _QWORD);
__int64 game_AIThink_CanSealMagic(__int64, int*);
__int64 game_GameConverge_Impl_TryJoin(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_GetHero(unsigned __int8);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64 game_HasSkill_alt1(_QWORD*, unsigned int*) __asm__("game_HasSkill");
__int64 game_HashString(__int64 result);
__int64 game_HashString_alt1(_QWORD) __asm__("game_HashString");
__int64 game_TransporterConst_List_Impl_EachData(_QWORD, _QWORD, _QWORD);
__int64 game_UnitItemList_FindEquipped_710140(_QWORD);
__int64 game_UnitItemList_Sort(__int64, unsigned int, int);
__int64 game_UnitItemList_Sort_alt1(_QWORD, _QWORD,
                                    _QWORD) __asm__("game_UnitItemList_Sort");
__int64 game_UnitPool_GetFirst(int*);
__int64 game_UnitPool_GetFirst_alt1(_QWORD) __asm__("game_UnitPool_GetFirst");
__int64 game_UnitSkillList_GetRangeAddImpl(_QWORD, _QWORD);
__int64 game_Unit_CheckEquipment(__int64);
__int64
    game_Unit_CheckEquipment_alt1(_QWORD) __asm__("game_Unit_CheckEquipment");
__int64 game_Unit_EquipItem_6d8f40(__int64, unsigned int);
__int64 game_Unit_EquipItem_6d8f40_alt1(_QWORD, _QWORD) __asm__(
    "game_Unit_EquipItem_6d8f40");
__int64 game_Unit_IsImmobile(_QWORD);
__int64 game_Unit_Unknown6c4610(__int64);
__int64 game_Unit_Unknown6c8f90(_QWORD);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_gmap_TroopMgr_EachPlayerTroop(__int64 result, __int64);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_findSound(__int64);
__int64 snd_resumeMute(__int64*, __int64);
__int64 snd_startSlotVolume_100b50(int*, __int64, float);
__int64 snd_startVolume_ffe30(__int64*, __int64, float);
__int64 std___1___next_prime(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strtof(_QWORD, _QWORD);
__int64 strtol(_QWORD, _QWORD, _QWORD);
__int64 tolower(_QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__n128 GameRoutine_113de80(char*, __int64, __int64**, __n128 result);
__n128 GameRoutine_1366ac0(__int64, __int64);
__n128 Unit_6d8180_alt1(__int64, __int64, int) __asm__("Unit_6d8180");
__n128 game_112ce60(__int64, __int64*, __int64);
__n128 game_112d580(char*, __int64, __int64);
__n128 game_evt_demo_114e5a0(__int64, _BYTE*);
__n128 game_evt_demo_114e680(__int64, _BYTE*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 nn_os_UnlockMutex_alt1(_QWORD) __asm__("nn_os_UnlockMutex");
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
bool GameRoutine_11ddc40(__int64);
bool GameRoutine_11dde90(__int64);
bool GameRoutine_1211600(_BOOL8 result, char);
bool game_8ae640(__int64*, __int64, char, long double);
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1a94a43;
extern _UNKNOWN GameData_1a95031;
extern _UNKNOWN GameData_1ab52cc;
extern _UNKNOWN GameData_21f4328;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*AI_Destructor_ptr[])();
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_2017518[])();
extern __int64 (*GameData_2017618[])();
extern __int64 (*GameData_20176a8[])();
extern __int64 (*GameData_2017718[])();
extern __int64 (*GameData_2017fa8[])();
extern __int64 (*GameData_2018058[])();
extern __int64 (*GameData_20181d8[])();
extern __int64 (*GameData_20184e8[])();
extern __int64 (*GameData_2019648[])();
extern __int64 (*GameData_201f9b8[])();
extern __int64 (*GameData_2044668[])();
extern __int64 (*GameData_216fdc8)();
extern __int64 (*GameData_216fec8)();
extern __int64 (*GameData_216ffc8)();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212ceb0;
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d7f0[5];
extern __int64* GameData_2130260[4];
extern __int64* GameData_2130928[4];
extern __int64* GameData_2130930[3];
extern __int64* GameData_21309c8[5];
extern __int64* game_g_empty_item_ptr;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_1a99a72;
extern __int64 GameData_212c060;
extern __int64 GameData_212c610;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_212cf88[4];
extern __int64 GameData_212d290;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbc8[7];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_21306c8[2];
extern __int64 GameData_21c6878;
extern __int64 GameData_21c6888;
extern __int64 GameData_21c99a8;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9a78;
extern __int64 GameData_21c9a80;
extern __int64 GameData_21c9c80;
extern __int64 GameData_21c9d80;
extern __int64 GameData_21c9da8;
extern __int64 GameData_21ca2f8;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd108;
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 GameData_21f4cc0;
extern __int64 GameData_22336e0;
extern __int64 GameData_22367f0;
extern __int64 GameData_22367f8;
extern __int64 GameData_2240088;
extern __int64 GameData_22407a8;
extern __int64 GameData_22407c8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_g_frame_clock;
extern __int64 game_g_proc_registry;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_map_UnitFlags_instance_;
extern __int64 game_talk_g_window_layout;
extern char GameData_1a9f09e;
extern char GameData_2166cf2;
extern int GameData_21f4320;
extern int GameData_2240080;
float Cursor_734120(int, int, float, float, float, float);
float ui_LayoutAccessor_SetTranslate(__int64*, __int64);
unsigned __int64* GameRoutine_12684a0(unsigned __int64* result, __int64*,
                                      unsigned __int64, unsigned __int64*);
unsigned __int64* game_12686a0(unsigned __int64* result, unsigned __int64*,
                               unsigned __int64*, __int64, __int64, __int64,
                               __int64);
unsigned __int64 GameRoutine_682bc0(_QWORD*, __int64);
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void GameRoutine_714fc0();
void __attribute__((noreturn)) GameRoutine_1147f50(_QWORD);
void __attribute__((noreturn)) GameRoutine_1286ae0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1(void) __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_60a210_alt2() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_688200(void);
void __attribute__((noreturn))
GameRoutine_688200_alt1() __asm__("GameRoutine_688200");
void __attribute__((noreturn)) GameRoutine_6e56b0(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) GameRoutine_6f26d0(void);
void __attribute__((noreturn)) GameRoutine_6f93f0(_QWORD);
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn)) String_60a230();
void __attribute__((noreturn)) String_60a250(_QWORD);
void snd_Fade_Fade_10c830(__int64, float);
void ui_LayoutAccessor_SetScale(__int64*, _QWORD*);
__int64 game_113a9b0(__int64 a1, __int64* a2);
__int64 game_113aaa0(__int64 a1, __int64* a2);
__int64 game_113ac00(__int64 a1, __int64* a2);
__int64 game_113ad60(__int64 a1, __int64 a2);
__int64 game_113ae10(__int64 a1, __int64 a2);
__n128 game_113af40(__int64 a1, const char* a2);
__int64 game_113b8c0_alt1(__int64 a1) __asm__("game_113b8c0");
__int64 game_113be80_alt1(__int64 a1) __asm__("game_113be80");
void game_113c060(unsigned __int8* a1);
__int64 game_113cca0();
__n128 game_113dca0(char* a1, __int64 a2, unsigned __int8* a3, __n128 a4);
void game_113f060(__int64 a1, double a2, double a3, long double a4);
__attribute__((swiftcall)) void game_1142cc0(PSEUDO_X8 x8_, __int64 result,
                                             unsigned __int8* a2, char a3);
__n128 game_1196c00(__int64 a1);
void game_1196e60(_QWORD* a1);
__n128 game_119cce0(_QWORD* a1);
void game_11ca9c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 game_11de320(__int64 a1);
__int64 game_11e1260(unsigned __int8* a1);
__int64 game_11e1ef0(__int64 a1, __int64* a2);
__int64 game_11e2180(__int64 a1, __int64* a2);
__int64 game_11e2410(__int64 a1, __int64* a2);
__int64 game_11eabf0(__int64 a1);
__int64 game_11ebf80(__int64 result);
__int64 game_11f2c20(__int64 a1, __int64 a2, char a3);
__int64 game_11f30c0(__int64 a1, unsigned __int16* a2, char a3);
__int64 game_11f3220(__int64 a1, __int64 a2, char a3);
__int64 game_11f3740(__int64 a1, unsigned __int16* a2, char a3);
__int64 game_11f3890(__int64 a1, unsigned __int16* a2, char a3);
__int64 game_11f3a10(__int64 a1, unsigned __int16* a2, char a3);
__int64 game_11f3b70(__int64 a1, unsigned __int16* a2, char a3);
bool game_11f44e0(__int64 a1, char a2);
__int64 game_11f4940(__int64 a1, char a2, char a3);
__int64 game_11f4a20(__int64 a1);
__int64 game_11f4c40(__int64 a1, char a2);
__int64 game_11f4e60(__int64 a1);
bool game_11f5070(__int64 a1);
bool game_11f5140(__int64 a1);
__int64 game_11f51f0(__int64 a1, int a2, int a3);
__int64 game_11f5940(__int64 result, int a2, int a3, unsigned __int8 a4,
                     bool* a5);
__int64 game_120c460();
__int64 game_120c6c0(__int64 a1, signed int a2, char a3);
__int64 game_120c9c0(__int64 result, char a2);
__int64 game_120cba0(__int64 a1, unsigned __int8 a2, char a3);
__int64 game_120d260(__int64 a1, __int64* a2);
bool game_120d470(unsigned __int16* a1);
__int64 game_120d600(unsigned __int16* a1, __int64 a2);
__int64 game_120dd60();
__int64 game_120dec0();
__int64 game_120e000();
__int64 game_120e140();
__int64 game_120e680();
__int64 game_120e7c0();
__int64 game_120f020(__int64* a1, char a2);
__int64 game_120f1e0(_QWORD* a1, __int64 a2, unsigned int a3, char a4);
__int64 game_120f4c0(__int64 a1, char a2);
__int64 game_120f710(__int64* a1);
__int64 game_120f960();
unsigned __int64 game_120faa0();
__attribute__((swiftcall)) void game_1210880(PSEUDO_X8 x8_, char a1);
__int64* game_1211020(__int64* a1, __int64* a2);
__attribute__((swiftcall)) void game_1211780(PSEUDO_X8 x8_);
__int64 game_1213640(__int64 result, char* a2, __int64 a3, char a4);
__int64 game_1225500(_QWORD* a1, _DWORD* a2, _DWORD* a3);
__int64 game_1254c80(__int64 result);
__n128 game_1255300(__int64 a1, long double a2);
void game_12645e0(__int64* a1, __n128 a2);
unsigned __int64* game_1268280(unsigned __int64* result, unsigned __int64* a2,
                               unsigned __int64 a3, unsigned __int64* a4,
                               __int64 a5);
void game_126e030();
__attribute__((swiftcall)) void game_127c260(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2);
__int64 game_1286480(__int64 result);
bool game_12866c0(__int64 a1, __int64 a2, __int64 a3);
__int64 game_1286b00(__int64 result, __int64 a2, unsigned __int16 a3,
                     unsigned __int16 a4, unsigned int a5);
__int64 game_128ce70(__int64 a1);
__int64 GameRoutine_747df0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_21306a0[7];
__int64 game_11f5d20(unsigned int a1, unsigned int a2, int a3, unsigned int* a4,
                     unsigned int* a5);
_QWORD* Seq_1147f80_alt1(__int64) __asm__("Seq_1147f80");
_QWORD* game_TransporterConst_List_Impl_EachData_alt1(
    _QWORD* result, __int64,
    __int64) __asm__("game_TransporterConst_List_Impl_EachData");
__attribute__((swiftcall)) void
TransporterConst_89b3d0_alt1(PSEUDO_X8, _QWORD*, _QWORD*,
                             int) __asm__("TransporterConst_89b3d0");
__attribute__((swiftcall)) void
game_112d860_alt1(PSEUDO_X8, __int64*) __asm__("game_112d860");
__int64*
GameRoutine_1148100_alt1(_QWORD*,
                         unsigned __int8*) __asm__("GameRoutine_1148100");
__int64* game_149e9e0_alt1(unsigned __int8) __asm__("game_149e9e0");
__int64 GameHr_113ba00(_QWORD*, unsigned __int8*);
__int64 GameRoutine_1147d80_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1147d80");
__int64 GameRoutine_9db9e0_alt1(unsigned int,
                                unsigned int) __asm__("GameRoutine_9db9e0");
__int64 GameVariable_828dc0_alt1(__int64, unsigned __int64*,
                                 int) __asm__("GameVariable_828dc0");
__int64 game_UnitSkillList_GetRangeAddImpl_alt1(__int64, __int64) __asm__(
    "game_UnitSkillList_GetRangeAddImpl");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt2(__int64) __asm__("nn_os_UnlockMutex");
bool UnitItem_6e8e50_alt1(unsigned __int16*,
                          __int64) __asm__("UnitItem_6e8e50");
float strtof_alt1(const char*, __int64) __asm__("strtof");
void GameRoutine_6b7aa0_alt1(__int64, __int64*, __int64*,
                             unsigned __int64) __asm__("GameRoutine_6b7aa0");
void __attribute__((noreturn))
GameRoutine_1147f50_alt1() __asm__("GameRoutine_1147f50");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_112daa0_alt1(unsigned __int8*) __asm__("game_112daa0");
void game_112dfe0_alt1(__int64, __int64*) __asm__("game_112dfe0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_113b8c0(_QWORD* a1);
__int64 game_113be80(_QWORD* a1);

__int64 game_113a9b0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  char* v4;
  float v6;
  float v7;
  char* v8;
  __int64 v9;
  struct {
    __int64 v11[2];
    char* v12;
  } v11_;
  _QWORD v13[25];
  __int64 v14;

  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v11_.v11, *(_QWORD*)(v2 + 40),
                                  *(_QWORD*)(v2 + 32)),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
    v2 = *a2;
  }
  else {
    v3 = *(_QWORD*)(*a2 + 32);
    v4 = *(char**)(*a2 + 40);
    v11_.v11[0] = *(_QWORD*)(*a2 + 24);
    v11_.v11[1] = v3;
    v11_.v12 = v4;
  }
  game_113c060((unsigned __int8*)(v2 + 48)),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = v6;
  if ((v11_.v11[0] & 1) != 0) {
    v8 = v11_.v12;
  }
  else {
    v8 = (char*)v11_.v11 + 1;
  }
  snd_findSound((__int64)v8),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Fade_10c830((__int64)v13, v7),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_resumeMute(&v14, (__int64)v13),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Destroy_Fade(v13),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9),
        v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return 1;
}

__int64 game_113aaa0(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  char* v15;
  __int64 v16;
  struct {
    __int64 v18[2];
    char* v19;
  } v18_;
  _QWORD v20[25];
  __int64 v21;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
  v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v18_.v18, *(_QWORD*)(v2 + 40),
                                  *(_QWORD*)(v2 + 32)),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
    v2 = *a2;
  }
  else {
    v4 = *(_QWORD*)(*a2 + 32);
    v5 = *(char**)(*a2 + 40);
    v18_.v18[0] = *(_QWORD*)(*a2 + 24);
    v18_.v18[1] = v4;
    v18_.v19 = v5;
  }
  v6 = *(unsigned __int8*)(v2 + 48);
  v7 = *(_QWORD*)(v2 + 56);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != 0) {
    v8 = *(_QWORD*)(v2 + 64);
    v9 = v2 + 49;
    v20[0] = 0;
    if ((v6 & 1) != 0) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    strtof(v10, v20),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
    v12 = v11;
    if (*(_BYTE*)v20[0] != 0) {
      if (*(_BYTE*)v20[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v20[0]) != 0) {
          v12 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v12 = 0x1.0000000000000p+0f;
      }
    }
    v2 = *a2;
  }
  else {
    v12 = 0x1.0000000000000p+0f;
  }
  game_113c060((unsigned __int8*)(v2 + 72)),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  v14 = v13;
  if ((v18_.v18[0] & 1) != 0) {
    v15 = v18_.v19;
  }
  else {
    v15 = (char*)v18_.v18 + 1;
  }
  snd_findSound((__int64)v15),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Fade_10c830((__int64)v20, v14),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_startVolume_ffe30(&v21, (__int64)v20, v12),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Destroy_Fade(v20),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
      v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((v18_.v18[0] & 1) != 0 && v18_.v19 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16),
        v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s0", "=w")),
        v13 = COERCE_AS(__typeof__(v13), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return 1;
}

__int64 game_113ac00(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  const char* v8;
  const char* v9;
  const char* v10;
  float v11;
  float v12;
  float v13;
  unsigned __int8* v14;
  __int64 v15;
  struct {
    __int64 v17[2];
    unsigned __int8* v18;
  } v17_;
  _QWORD v19[25];
  unsigned int v20;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 24) & 1) != 0) {
    fw_text_String_CopyTerminated(v17_.v17, *(_QWORD*)(v2 + 40),
                                  *(_QWORD*)(v2 + 32)),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
    v2 = *a2;
  }
  else {
    v4 = *(_QWORD*)(*a2 + 32);
    v5 = *(_QWORD*)(*a2 + 40);
    v17_.v17[0] = *(_QWORD*)(*a2 + 24);
    v17_.v17[1] = v4;
    v17_.v18 = (unsigned __int8*)v5;
  }
  v6 = *(unsigned __int8*)(v2 + 48);
  v7 = *(_QWORD*)(v2 + 56);
  if ((v6 & 1) == 0) {
    v7 = v6 >> 1;
  }
  if (v7 != 0) {
    v8 = *(const char**)(v2 + 64);
    v9 = (const char*)(v2 + 49);
    v19[0] = 0;
    if ((v6 & 1) != 0) {
      v10 = v8;
    }
    else {
      v10 = v9;
    }
    v11 = strtof_alt1(v10, (__int64)v19),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
    if (*(_BYTE*)v19[0] != 0) {
      if (*(_BYTE*)v19[0] == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v19[0]) != 0) {
          v11 = 0x1.0000000000000p+0f;
        }
      }
      else {
        v11 = 0x1.0000000000000p+0f;
      }
    }
    v2 = *a2;
  }
  else {
    v11 = 0x1.0000000000000p+0f;
  }
  game_113c060((unsigned __int8*)(v2 + 72)),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  v13 = v12;
  if ((v17_.v17[0] & 1) != 0) {
    v14 = v17_.v18;
  }
  else {
    v14 = (unsigned __int8*)v17_.v17 + 1;
  }
  v20 = (unsigned int)snd_fnd_calcCrc32(v14, 0),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Fade_10c830((__int64)v19, v13),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_startSlotVolume_100b50((int*)&v20, (__int64)v19, v11),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Fade_Destroy_Fade(v19),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((v17_.v17[0] & 1) != 0 && v17_.v18 != nullptr) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v17_.v18),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w"));
  }
  return 1;
}

__int64 game_113ad60(__int64 a1, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  _BYTE* v4;
  __int64 v5;
  struct {
    __int64 v7[2];
    _BYTE* v8;
  } v7_;

  if ((*(_BYTE*)(*(_QWORD*)a2 + 24LL) & 1) != 0) {
    fw_text_String_CopyTerminated(v7_.v7, *(_QWORD*)(*(_QWORD*)a2 + 40LL),
                                  *(_QWORD*)(*(_QWORD*)a2 + 32LL));
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
    v3 = *(_BYTE**)(*(_QWORD*)a2 + 40LL);
    v7_.v7[0] = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v7_.v7[1] = v2;
    v7_.v8 = v3;
  }
  if (GameData_22336e0 != 0) {
    if ((v7_.v7[0] & 1) != 0) {
      v4 = v7_.v8;
    }
    else {
      v4 = (char*)v7_.v7 + 1;
    }
    game_evt_demo_114e680(GameData_22336e0, v4);
  }
  if ((v7_.v7[0] & 1) != 0 && v7_.v8 != nullptr) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return 1;
}

__int64 game_113ae10(__int64 a1, __int64 a2)
{
  __int64 v2;
  _BYTE* v3;
  _BYTE* v4;
  __int64 v5;
  struct {
    __int64 v7[2];
    _BYTE* v8;
  } v7_;

  if ((*(_BYTE*)(*(_QWORD*)a2 + 24LL) & 1) != 0) {
    fw_text_String_CopyTerminated(v7_.v7, *(_QWORD*)(*(_QWORD*)a2 + 40LL),
                                  *(_QWORD*)(*(_QWORD*)a2 + 32LL));
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)a2 + 32LL);
    v3 = *(_BYTE**)(*(_QWORD*)a2 + 40LL);
    v7_.v7[0] = *(_QWORD*)(*(_QWORD*)a2 + 24LL);
    v7_.v7[1] = v2;
    v7_.v8 = v3;
  }
  if (GameData_22336e0 != 0) {
    if ((v7_.v7[0] & 1) != 0) {
      v4 = v7_.v8;
    }
    else {
      v4 = (char*)v7_.v7 + 1;
    }
    game_evt_demo_114e5a0(GameData_22336e0, v4);
  }
  if ((v7_.v7[0] & 1) != 0 && v7_.v8 != nullptr) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  return 1;
}

__n128 game_113af40(__int64 a1, const char* a2)
{
  __int64 v4;
  __n128 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  _QWORD v9[3];
  __int64 v10[3];

  GameRoutine_60a020(a1, (__int64)a2);
  if ((*(_BYTE*)a1 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
  }
  else {
    v4 = a1 + 1;
  }
  Manager_a4fd20((void*)(v10), *msg_MessageManager_instance__ptr[0] + 15176, v4,
                 (__int64)"Sound", 1);
  v5 = game_112d580((char*)v10, a1 + 48, a1 + 72);
  result = X8CALL_V0(__n128, GameRoutine_113b050((void*)((__int64)v9), a2, v5));
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  qmemcpy((void*)(a1 + 24), v9, 24);
  if ((v10[0] & 1) != 0 && v10[2] != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  return result;
}

__int64 game_113b8c0(_QWORD* a1)
{
  unsigned __int64 v1;
  __int64* v2;
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11[2];
    __int64 v12;
  } v11_;
  struct {
    __int64 v13;
    unsigned __int64 v14;
    __int64 v15;
  } v13_;

  v2 = a1 + 6;
  v1 = *((unsigned __int8*)a1 + 48);
  if ((v1 & 1) != 0) {
    v3 = a1[7];
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 != 0) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      game_112d860_alt1((void*)(&v13_.v13), v2);
      if ((v13_.v13 & 1) != 0) {
        fw_text_String_CopyTerminated(v11_.v11, v13_.v15, v13_.v14);
      }
      else {
        v11_.v11[0] = v13_.v13;
        v11_.v11[1] = v13_.v14;
        v11_.v12 = v13_.v15;
      }
      GameHr_113ba00(a1, (unsigned __int8*)v11_.v11);
      if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v8, v11_.v12);
      }
      if ((v13_.v13 & 1) != 0 && v13_.v15 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v9, v13_.v15);
      }
      v6 = *((unsigned __int8*)a1 + 48);
      if ((v6 & 1) != 0) {
        v7 = a1[7];
      }
      else {
        v7 = v6 >> 1;
      }
    } while (v7 != 0);
  }
  return 1;
}

__int64 game_113be80(_QWORD* a1)
{
  unsigned __int64 v1;
  __int64* v2;
  unsigned __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v11[2];
    __int64 v12;
  } v11_;
  struct {
    __int64 v13;
    unsigned __int64 v14;
    __int64 v15;
  } v13_;

  v2 = a1 + 9;
  v1 = *((unsigned __int8*)a1 + 72);
  if ((v1 & 1) != 0) {
    v3 = a1[10];
  }
  else {
    v3 = v1 >> 1;
  }
  if (v3 != 0) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      game_112d860_alt1((void*)(&v13_.v13), v2);
      if ((v13_.v13 & 1) != 0) {
        fw_text_String_CopyTerminated(v11_.v11, v13_.v15, v13_.v14);
      }
      else {
        v11_.v11[0] = v13_.v13;
        v11_.v11[1] = v13_.v14;
        v11_.v12 = v13_.v15;
      }
      GameHr_113ba00(a1, (unsigned __int8*)v11_.v11);
      if ((v11_.v11[0] & 1) != 0 && v11_.v12 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v8, v11_.v12);
      }
      if ((v13_.v13 & 1) != 0 && v13_.v15 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v5 + v9, v13_.v15);
      }
      v6 = *((unsigned __int8*)a1 + 72);
      if ((v6 & 1) != 0) {
        v7 = a1[10];
      }
      else {
        v7 = v6 >> 1;
      }
    } while (v7 != 0);
  }
  return 1;
}

void game_113c060(unsigned __int8* a1)
{
  unsigned __int64 v2;
  unsigned __int8 v3;
  __int64 v4;
  _BYTE* v5;
  unsigned __int64 v6;
  char v7;
  char* v8;
  int v9;
  int v10;
  __int64 v12;
  int v13;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  unsigned __int8* v18;
  __int64 v19;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    _BYTE* v22;
  } v20_;
  __int64 v23;

  if ((*a1 & 1) != 0) {
    fw_text_String_CopyTerminated(&v20_.v20, *((_QWORD*)a1 + 2),
                                  *((_QWORD*)a1 + 1));
  }
  else {
    v2 = *((_QWORD*)a1 + 1);
    v20_.v20 = *(_QWORD*)a1;
    v20_.v21 = v2;
    v20_.v22 = *((_BYTE**)a1 + 2);
  }
  v3 = v20_.v20;
  v4 = v20_.v21;
  if ((v20_.v20 & 1) != 0) {
    v5 = v20_.v22;
  }
  else {
    v5 = (char*)&v20_.v20 + 1;
  }
  if ((v20_.v20 & 1) != 0) {
    v6 = v20_.v21;
  }
  else {
    v6 = (unsigned __int64)(unsigned __int8)v20_.v20 >> 1;
  }
  if (v6 != 0) {
    do {
      *v5 = tolower((unsigned __int8)*v5);
      ++v5;
      --v6;
    } while (v6 != 0);
    v3 = v20_.v20;
    v4 = v20_.v21;
  }
  v7 = v3 & 1;
  v8 = (char*)&v20_.v20 + 1;
  if ((v3 & 1) == 0) {
    v4 = v3 >> 1;
  }
  if (v4 > 7) {
    if (v4 == 8) {
      if ((v3 & 1) != 0) {
        v8 = v20_.v22;
      }
      if (*(_QWORD*)v8 != 0x7473616679726576LL &&
          *(_QWORD*)v8 != 0x776F6C73796C6576LL) {
        goto LABEL_45;
      }
    }
    else {
      if (v4 != 9) {
        goto LABEL_45;
      }
      if ((v3 & 1) != 0) {
        v8 = v20_.v22;
      }
      v12 = *(_QWORD*)v8;
      v13 = (unsigned __int8)v8[8];
      if (v12 != 0x74616964656D6D69LL || v13 != 101) {
        goto LABEL_45;
      }
    }
  }
  else if (v4 == 4) {
    if ((v3 & 1) != 0) {
      v8 = v20_.v22;
    }
    if (*(_DWORD*)v8 != 1953718630 && *(_DWORD*)v8 != 2003790963) {
      goto LABEL_45;
    }
  }
  else {
    if (v4 != 6) {
      goto LABEL_45;
    }
    if ((v3 & 1) != 0) {
      v8 = v20_.v22;
    }
    v9 = *(_DWORD*)v8;
    v10 = *((unsigned __int16*)v8 + 2);
    if (v9 != 1836216174 || v10 != 27745) {
    LABEL_45:
      v15 = *a1;
      v16 = *((_QWORD*)a1 + 1);
      if ((v15 & 1) == 0) {
        v16 = v15 >> 1;
      }
      if (v16 != 0) {
        v17 = *((unsigned __int8**)a1 + 2);
        v23 = 0;
        if ((v15 & 1) != 0) {
          v18 = v17;
        }
        else {
          v18 = a1 + 1;
        }
        strtof(v18, &v23);
        v3 = v20_.v20;
      }
      v7 = v3 & 1;
    }
  }
  if (v7 != 0 && v20_.v22 != nullptr) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
}

__int64 game_113cca0()
{

#pragma clang fp contract(off)
  long double v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  long double v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    __int64 v12;
    __int64 v13;
  } v11_;

  *(__n128*)&v0 =
      GameRoutine_1366ac0((__int64)"Layout/Common.arc", (__int64)"Common_Talk");
  v1 = v11_.v12;
  v2 = v11_.v13;
  v11_.v12 = 0;
  v11_.v13 = 0;
  v3 = GameData_22367f8;
  GameData_22367f0 = v1;
  GameData_22367f8 = v2;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v3 + 16LL))(v3, v0);
    std___1___shared_weak_count___release_weak();
  }
  v4 = GameData_22367f8;
  v11_.v11[0] = GameData_22367f0;
  v11_.v11[1] = GameData_22367f8;
  if (GameData_22367f8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(GameData_22367f8 + 8),
                              1u, memory_order_relaxed);
    *(__n128*)&v5 =
        ui_LayoutAccessor_Setup_155dda0(&game_talk_g_window_layout, v11_.v11);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(v4, v5);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(&game_talk_g_window_layout, v11_.v11);
  }
  result =
      ui_LayoutAccessor_FindPane(&game_talk_g_window_layout, (__int64)"Face");
  if (result != 0) {
    result =
        __dynamic_cast(result, GameData_212d670[0], GameData_212d678[0], 0);
    if (result != 0) {
      v7 = result;
      *(_BYTE*)(result + 88) &= ~1u;
      v8 = Pane_58f8a0(result);
      v9 = (__int64*)(*(_QWORD*)(v8 + 24) + 16LL * (*(_DWORD*)(v8 + 16) & 3));
      v11_.v12 = *v9;
      v11_.v13 = v9[1];
      result = Pane_58f8a0(v7);
      v10 = *(_QWORD*)(result + 24) + 16LL * (*(_DWORD*)(result + 16) & 3);
      *(_QWORD*)(v10 + 8) = v11_.v13;
      *(_QWORD*)v10 = v11_.v12;
      *(_DWORD*)(v10 + 16) = -1082130432;
    }
  }
  return result;
}

__n128 game_113dca0(char* a1, __int64 a2, unsigned __int8* a3, __n128 a4)
{
  unsigned __int64 v4;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  _BYTE* v10;
  __int64 v11;
  __int64 v12;
  __n128 result;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  char v17;
  __int64 v18;
  __int64 v19;
  __int64 v20[3];
  struct {
    __int64 v21[2];
    __int64 v22;
  } v21_;
  struct {
    __int64* v23;
    __int64* v24;
    __int64 v25;
  } v23_;

  v4 = *a3;
  v23_.v24 = nullptr;
  v23_.v25 = 0;
  v23_.v23 = nullptr;
  v7 = v4 >> 1;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v4 & 1) != 0) {
    v7 = *((_QWORD*)a3 + 1);
  }
  if (v7 != 0) {
    if ((v4 & 1) != 0) {
      fw_text_String_CopyTerminated(v21_.v21, *((_QWORD*)a3 + 2),
                                    *((_QWORD*)a3 + 1));
    }
    else {
      v9 = *((_QWORD*)a3 + 1);
      v21_.v21[0] = *(_QWORD*)a3;
      v21_.v21[1] = v9;
      v21_.v22 = *((_QWORD*)a3 + 2);
    }
    v10 = (_BYTE*)fw_memory_HeapManager_Allocate(*v8, 1, 16, 0);
    v20[0] = (__int64)v10;
    *v10 = 44;
    v20[1] = (__int64)(v10 + 1);
    v20[2] = (__int64)(v10 + 1);
    game_112ce60((__int64)v21_.v21, v20, (__int64)&v23_.v23);
    v11 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v11 = 56;
    }
    a4 = nn_mem_StandardAllocator_Free(*v8 + v11);
    if ((v21_.v21[0] & 1) != 0 && v21_.v22 != 0) {
      v12 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v12 = 56;
      }
      a4 = nn_mem_StandardAllocator_Free(*v8 + v12);
    }
  }
  result = GameRoutine_113de80(a1, a2, &v23_.v23, a4);
  v14 = v23_.v23;
  if (v23_.v23 != nullptr) {
    v15 = v23_.v24;
    if (v23_.v23 == v23_.v24) {
      goto LABEL_25;
    }
    v16 = v23_.v24;
    do {
      v17 = *((_BYTE*)v16 - 24);
      v16 -= 3;
      if ((v17 & 1) != 0 && *(v15 - 1) != 0) {
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*v8 + v18);
      }
      v15 = v16;
    } while (v16 != v14);
    v23_.v24 = v14;
    if (v23_.v23 != nullptr) {
    LABEL_25:
      v19 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v19 = 56;
      }
      return nn_mem_StandardAllocator_Free(*v8 + v19);
    }
  }
  return result;
}

void game_113f060(__int64 a1, double a2, double a3, long double a4)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v5;
  __int64* v7;
  __int64* v8;
  __int64* v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64** v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  __int64 v37;
  float v38;
  float v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  _QWORD* v58;
  _QWORD* v59;
  __int64 v60;
  _QWORD* v61;
  __int64 v62;
  float v63[3];
  struct {
    _QWORD* v64;
    _QWORD* v65;
    __int64 v66;
  } v64_;
  __int64 v67;

  v4 = *(_QWORD*)(a1 + 56);
  v5 = a1 + 48;
  v64_.v66 = 0;
  v64_.v64 = &v64_.v64;
  v64_.v65 = &v64_.v64;
  if (v4 == a1 + 48) {
    return;
  }
  v7 = game_g_frame_clock_ptr[0];
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = GameData_2130260[0];
  do {
    v10 = 0x1.e000000000000p+5f / (float)*(int*)(*v7 + 476);
    if (v10 <= 0x0.0p+0f) {
      v11 = 0x1.119ce00000000p-6f;
    }
    else {
      v11 = v10 * 0x1.119ce00000000p-6f;
    }
    v12 = *(float*)(v4 + 64);
    v13 = *(float*)(v4 + 60) + v11;
    *(float*)(v4 + 60) = v13;
    if (v13 > v12) {
      v13 = v12;
      *(float*)(v4 + 60) = v12;
    }
    v14 = Cursor_734120(*(_DWORD*)(v4 + 68), 2, *(float*)(v4 + 52),
                        *(float*)(v4 + 56), v13, v12);
    v15 = *v7;
    *(float*)(v4 + 48) = v14;
    v16 = 0x1.e000000000000p+5f / (float)*(int*)(v15 + 476);
    if (v16 <= 0x0.0p+0f) {
      v17 = 0x1.119ce00000000p-6f;
    }
    else {
      v17 = v16 * 0x1.119ce00000000p-6f;
    }
    v18 = *(float*)(v4 + 88);
    v19 = *(float*)(v4 + 84) + v17;
    *(float*)(v4 + 84) = v19;
    if (v19 > v18) {
      v19 = v18;
      *(float*)(v4 + 84) = v18;
    }
    v20 = Cursor_734120(*(_DWORD*)(v4 + 92), 2, *(float*)(v4 + 76),
                        *(float*)(v4 + 80), v19, v18);
    v21 = *v7;
    *(float*)(v4 + 72) = v20;
    v22 = 0x1.e000000000000p+5f / (float)*(int*)(v21 + 476);
    if (v22 <= 0x0.0p+0f) {
      v23 = 0x1.119ce00000000p-6f;
    }
    else {
      v23 = v22 * 0x1.119ce00000000p-6f;
    }
    v24 = *(float*)(v4 + 112);
    v25 = *(float*)(v4 + 108) + v23;
    *(float*)(v4 + 108) = v25;
    if (v25 > v24) {
      v25 = v24;
      *(float*)(v4 + 108) = v24;
    }
    v26 = Cursor_734120(*(_DWORD*)(v4 + 116), 2, *(float*)(v4 + 100),
                        *(float*)(v4 + 104), v25, v24);
    v27 = GameData_21c6878;
    *(float*)(v4 + 96) = v26;
    if (v27 == 0 || GameData_21c6888 == 0) {
      goto LABEL_43;
    }
    v28 = *(unsigned int*)(v4 + 16);
    v29 = v27 - 1;
    if ((v27 & (v27 - 1)) != 0) {
      v30 = *(unsigned int*)(v4 + 16);
      if (v27 <= v28) {
        v30 = (unsigned int)v28 % (unsigned int)v27;
      }
    }
    else {
      v30 = ((_DWORD)v27 - 1) & (unsigned int)v28;
    }
    v31 = *(__int64***)(game_g_proc_registry + 8 * v30);
    if (v31 == nullptr) {
      goto LABEL_43;
    }
    v32 = *v31;
    if (v32 == nullptr) {
      goto LABEL_43;
    }
    if ((v27 & v29) == 0) {
      while (1) {
        v34 = v32[1];
        if (v34 == v28) {
          if (*((_DWORD*)v32 + 4) == (_DWORD)v28) {
            goto LABEL_40;
          }
        }
        else if ((v34 & v29) != v30) {
          goto LABEL_43;
        }
        v32 = (__int64*)*v32;
        if (v32 == nullptr) {
          goto LABEL_43;
        }
      }
    }
    while (1) {
      v33 = v32[1];
      if (v33 == v28) {
        break;
      }
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_43;
      }
    LABEL_29:
      v32 = (__int64*)*v32;
      if (v32 == nullptr) {
        goto LABEL_43;
      }
    }
    if (*((_DWORD*)v32 + 4) != (_DWORD)v28) {
      goto LABEL_29;
    }
  LABEL_40:
    v35 = v32[3];
    if (v35 != 0) {
      v36 = v26;
      v37 = __dynamic_cast(v35, GameData_212c610, v9, 0);
      if (v37 != 0) {
        v38 = *(float*)(v4 + 48);
        v39 = *(float*)(v4 + 72);
        v40 = v37;
        v63[2] = 0x0.0p+0f;
        v63[0] = -(float)(v38 * v36);
        v63[1] = v36 * v39;
        ui_LayoutAccessor_SetTranslate((__int64*)(v37 + 168), (__int64)v63);
        LODWORD(v67) = *(_DWORD*)(v4 + 96);
        HIDWORD(v67) = v67;
        ui_LayoutAccessor_SetScale((__int64*)(v40 + 168), &v67);
        goto LABEL_47;
      }
    }
  LABEL_43:
    v41 = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 40, 16, 0);
    *v41 = 0;
    v41[1] = 0;
    v42 = v41;
    if ((*(_BYTE*)(v4 + 24) & 1) != 0) {
      fw_text_String_CopyTerminated(v41 + 2, *(_QWORD*)(v4 + 40),
                                    *(_QWORD*)(v4 + 32));
    }
    else {
      v43 = *(_QWORD*)(v4 + 24);
      v44 = *(_QWORD*)(v4 + 40);
      v41[3] = *(_QWORD*)(v4 + 32);
      v41[4] = v44;
      v41[2] = v43;
    }
    v45 = v64_.v64;
    v64_.v64 = v42;
    *v42 = v45;
    v42[1] = &v64_.v64;
    v45[1] = v42;
    ++v64_.v66;
  LABEL_47:
    v4 = *(_QWORD*)(v4 + 8);
  } while (v4 != v5);
  v46 = v64_.v65;
  if (v64_.v65 != &v64_.v64 && *(_QWORD*)(a1 + 56) != v5) {
    do {
      v48 = *(_QWORD*)(a1 + 56);
      if (v48 != v5) {
        if ((v46[2] & 1) != 0) {
          v49 = v46[3];
        }
        else {
          v49 = *((_BYTE*)v46 + 16) >> 1;
        }
        if ((v46[2] & 1) != 0) {
          while (1) {
            v53 = *(unsigned __int8*)(v48 + 24);
            v54 = *(_QWORD*)(v48 + 32);
            if ((v53 & 1) == 0) {
              v54 = v53 >> 1;
            }
            if (v54 == v49) {
              v55 = (v53 & 1) != 0 ? *(_QWORD*)(v48 + 40) : v48 + 25;
              if ((unsigned int)memcmp(v55, v46[4], v49) == 0) {
                break;
              }
            }
            v48 = *(_QWORD*)(v48 + 8);
            if (v48 == v5) {
              goto LABEL_55;
            }
          }
        }
        else {
          while (1) {
            v50 = *(unsigned __int8*)(v48 + 24);
            v51 = *(_QWORD*)(v48 + 32);
            if ((v50 & 1) == 0) {
              v51 = v50 >> 1;
            }
            if (v51 == v49) {
              v52 = (v50 & 1) != 0 ? *(_QWORD*)(v48 + 40) : v48 + 25;
              if ((unsigned int)memcmp(v52, (char*)v46 + 17, v49) == 0) {
                break;
              }
            }
            v48 = *(_QWORD*)(v48 + 8);
            if (v48 == v5) {
              goto LABEL_55;
            }
          }
        }
        v56 = *(_QWORD**)(v48 + 8);
        *(_QWORD*)(*(_QWORD*)v48 + 8LL) = v56;
        *v56 = *(_QWORD*)v48;
        --*(_QWORD*)(a1 + 64);
        if ((*(_BYTE*)(v48 + 24) & 1) != 0 && *(_QWORD*)(v48 + 40) != 0) {
          if (*(_QWORD*)(*v8 + 200) != 0) {
            v57 = 128;
          }
          else {
            v57 = 56;
          }
          nn_mem_StandardAllocator_Free(*v8 + v57);
        }
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v47);
      }
    LABEL_55:
      v46 = (_QWORD*)v46[1];
    } while (v46 != &v64_.v64);
  }
  if (v64_.v66 != 0) {
    v58 = v64_.v65;
    v59 = (_QWORD*)v64_.v64[1];
    *(_QWORD*)(*v64_.v65 + 8LL) = v59;
    *v59 = *v58;
    v64_.v66 = 0;
    if (v58 != &v64_.v64) {
      do {
        v61 = (_QWORD*)v58[1];
        if ((v58[2] & 1) != 0 && v58[4] != 0) {
          if (*(_QWORD*)(*v8 + 200) != 0) {
            v62 = 128;
          }
          else {
            v62 = 56;
          }
          nn_mem_StandardAllocator_Free(*v8 + v62);
        }
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v60 = 128;
        }
        else {
          v60 = 56;
        }
        nn_mem_StandardAllocator_Free(*v8 + v60);
        v58 = v61;
      } while (v61 != &v64_.v64);
    }
  }
}

__attribute__((swiftcall)) void game_1142cc0(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned __int8* a2, char a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  bool v15;
  unsigned __int16* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  unsigned __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* v48;
  __int64* v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v89;
  __int64* v90;
  struct {
    __int64 v91;
    unsigned __int64 v92;
    unsigned __int16* v93;
  } v91_;
  struct {
    _BYTE v94[32];
    char* v95;
  } v94_;
  struct {
    _BYTE v96[32];
    char* v97;
  } v96_;
  struct {
    __int64 v98;
    __int64 v99;
    __int64 v100;
  } v98_;
  struct {
    __int64 v101;
    __int64 v102;
    __int64 v103;
    int v104;
    char v105;
  } v101_;
  struct {
    __int64 v106;
    unsigned __int64 v107;
    unsigned __int16* v108;
  } v106_;
  char v109;
  unsigned __int16 v110;
  char* v111;
  struct {
    __int64* v112;
    __int64* v113;
    __int64 v114;
  } v112_;

  v4 = a4;
  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  v5 = *a2;
  if ((v5 & 1) != 0) {
    v6 = *((_QWORD*)a2 + 1);
  }
  else {
    v6 = v5 >> 1;
  }
  if (v6 != 0) {
    v7 = (__int64*)a2;
    v8 = a1;
    v9 = 0;
    v89 = a3 & 1;
    v10 = (__int64*)fw_memory_g_heap_manager_ptr;
    v90 = v4;
    while (1) {
      game_112d860_alt1((void*)(&v106_.v106), v7);
      if ((v106_.v106 & 1) != 0) {
        fw_text_String_CopyTerminated(&v91_.v91, (__int64)v106_.v108,
                                      v106_.v107);
      }
      else {
        v91_.v91 = v106_.v106;
        v91_.v92 = v106_.v107;
        v91_.v93 = v106_.v108;
      }
      v94_.v95 = nullptr;
      v96_.v97 = nullptr;
      v98_.v98 = 0;
      v98_.v99 = 0;
      v98_.v100 = 0;
      v101_.v101 = 0;
      v101_.v102 = 0;
      v101_.v103 = 0;
      v110 = 12079;
      v13 = v91_.v91 & 1;
      v14 = (unsigned __int64)(unsigned __int8)v91_.v91 >> 1;
      if (v13 != 0) {
        v14 = v91_.v92;
      }
      if (v14 >= 2) {
        v16 = v91_.v93;
        if (v13 == 0) {
          v16 = (unsigned __int16*)((char*)&v91_.v91 + 1);
        }
        v15 = *v16 == v110;
      }
      else {
        v15 = false;
        if (v14 == 0) {
          goto LABEL_105;
        }
      }
      if (!v15) {
        break;
      }
    LABEL_105:
      if (v13 != 0 && v91_.v93 != nullptr) {
        v54 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v10 + v54, (__int64)v91_.v93);
      }
      v55 = v4[2];
      if (v9 >= v55) {
        v56 = v9 - *v4;
        v57 = 1 - 0x3333333333333333LL * (v56 >> 5);
        if (v57 > 0x199999999999999LL) {
          GameRoutine_1147f50_alt1();
        }
        v58 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v55 - *v4) >> 5);
        if (2 * v58 > v57) {
          v57 = 2 * v58;
        }
        if (v58 >= 0xCCCCCCCCCCCCCCLL) {
          v59 = 0x199999999999999LL;
        }
        else {
          v59 = v57;
        }
        if (v59 != 0) {
          if (v59 > 0x199999999999999LL) {
            GameRoutine_60a210_alt2();
          }
          v60 = fw_memory_HeapManager_Allocate(*v10, 160 * v59, 16, 0);
        }
        else {
          v60 = 0;
        }
        v61 = v60 + v56;
        GameRoutine_1147d80_alt1(v60 + v56, (__int64)v94_.v94);
        v62 = *v90;
        v63 = v60 + v56 + *v90 - v9;
        if (v9 == *v90) {
          v74 = v90;
        }
        else {
          v64 = 0;
          do {
            v68 = v62 + v64;
            v69 = v63 + v64;
            v70 = *(_QWORD*)(v62 + v64 + 32);
            if (v70 != 0) {
              if (v68 == v70) {
                *(_QWORD*)(v69 + 32) = v69;
                (*(void (**)(_QWORD))(**(_QWORD**)(v68 + 32) + 24LL))(
                    *(_QWORD*)(v68 + 32));
              }
              else {
                *(_QWORD*)(v69 + 32) = v70;
                *(_QWORD*)(v68 + 32) = 0;
              }
            }
            else {
              *(_QWORD*)(v69 + 32) = 0;
            }
            v71 = v62 + v64;
            v72 = v63 + v64;
            v73 = *(_QWORD*)(v62 + v64 + 80);
            if (v73 != 0) {
              if (v71 + 48 == v73) {
                *(_QWORD*)(v72 + 80) = v72 + 48;
                (*(void (**)(_QWORD))(**(_QWORD**)(v71 + 80) + 24LL))(
                    *(_QWORD*)(v71 + 80));
              }
              else {
                *(_QWORD*)(v72 + 80) = v73;
                *(_QWORD*)(v71 + 80) = 0;
              }
            }
            else {
              *(_QWORD*)(v72 + 80) = 0;
            }
            v65 = v62 + v64;
            v66 = v63 + v64;
            v64 += 160;
            *(_QWORD*)(v66 + 104) = *(_QWORD*)(v65 + 104);
            v67 = *(_QWORD*)(v65 + 96);
            *(_QWORD*)(v66 + 112) = *(_QWORD*)(v65 + 112);
            *(_QWORD*)(v66 + 96) = v67;
            *(_QWORD*)(v65 + 96) = 0;
            *(_QWORD*)(v65 + 104) = 0;
            *(_QWORD*)(v65 + 112) = 0;
            *(_QWORD*)(v66 + 128) = 0;
            *(_QWORD*)(v66 + 136) = 0;
            *(_QWORD*)(v66 + 120) = 0;
            *(_QWORD*)(v66 + 120) = *(_QWORD*)(v65 + 120);
            *(_QWORD*)(v66 + 128) = *(_QWORD*)(v65 + 128);
            *(_QWORD*)(v66 + 136) = *(_QWORD*)(v65 + 136);
            *(_QWORD*)(v65 + 128) = 0;
            *(_QWORD*)(v65 + 136) = 0;
            *(_QWORD*)(v65 + 120) = 0;
            LODWORD(v67) = *(_DWORD*)(v65 + 144);
            *(_BYTE*)(v66 + 148) = *(_BYTE*)(v65 + 148);
            *(_DWORD*)(v66 + 144) = v67;
          } while (v62 + v64 != v9);
          v7 = (__int64*)a2;
          do {
            Seq_1147f80_alt1(v62);
            v62 += 160;
          } while (v62 != v9);
          v74 = v90;
          v62 = *v90;
        }
        v9 = v61 + 160;
        *v74 = v63;
        v4 = v74;
        v74[2] = v60 + 160 * v59;
        if (v62 != 0) {
          v75 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v75 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v10 + v75, v62);
        }
        v8 = a1;
      }
      else {
        GameRoutine_1147d80_alt1(v9, (__int64)v94_.v94);
        v9 += 160LL;
      }
      v76 = v101_.v101;
      v4[1] = v9;
      if (v76 != 0) {
        v77 = v101_.v102;
        if (v76 == v101_.v102) {
          goto LABEL_154;
        }
        v78 = v101_.v102;
        do {
          v79 = *(_BYTE*)(v78 - 24);
          v78 -= 24;
          if ((v79 & 1) != 0) {
            v80 = *(_QWORD*)(v77 - 8);
            if (v80 != 0) {
              v81 = 128;
              if (*(_QWORD*)(*v10 + 200) == 0) {
                v81 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v10 + v81, v80);
            }
          }
          v77 = v78;
        } while (v78 != v76);
        v101_.v102 = v76;
        v76 = v101_.v101;
        if (v101_.v101 != 0) {
        LABEL_154:
          v82 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v82 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v10 + v82, v76);
        }
      }
      if ((v98_.v98 & 1) != 0 && v98_.v100 != 0) {
        v83 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v83 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v10 + v83, v98_.v100);
      }
      if (v96_.v97 == v96_.v96) {
        v84 = 32;
      }
      else {
        if (v96_.v97 == nullptr) {
          goto LABEL_167;
        }
        v84 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v96_.v97 + v84))((__int64)v96_.v97);
    LABEL_167:
      if (v94_.v95 == v94_.v94) {
        v85 = 32;
      }
      else {
        if (v94_.v95 == nullptr) {
          goto LABEL_172;
        }
        v85 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)v94_.v95 + v85))((__int64)v94_.v95);
    LABEL_172:
      if ((v106_.v106 & 1) != 0 && v106_.v108 != nullptr) {
        v86 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v86 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v10 + v86, (__int64)v106_.v108);
      }
      v11 = *(unsigned __int8*)v7;
      if ((v11 & 1) != 0) {
        v12 = v7[1];
      }
      else {
        v12 = v11 >> 1;
      }
      if (v12 == 0) {
        return;
      }
    }
    game_112daa0_alt1((unsigned __int8*)&v91_.v91);
    v112_.v113 = nullptr;
    v112_.v114 = 0;
    v112_.v112 = nullptr;
    game_112dfe0_alt1((__int64)&v91_.v91, (__int64*)&v112_.v112);
    if (&v98_.v98 != v112_.v112) {
      v17 = *(unsigned __int8*)v112_.v112;
      if ((v98_.v98 & 1) != 0) {
        if ((v17 & 1) != 0) {
          v20 = *(char**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v112_.v112 + 8);
        }
        else {
          v20 = (char*)v112_.v112 + 1;
        }
        if ((v17 & 1) != 0) {
          v21 = *(unsigned __int64*)((char*)((_UNKNOWN**)0x8LL) +
                                     (_QWORD)v112_.v112);
        }
        else {
          v21 = v17 >> 1;
        }
        SpineModel_64dde0_alt1(&v98_.v98, (__int64)v20, v21);
      }
      else if ((v17 & 1) != 0) {
        GameRoutine_64df20_alt1(
            &v98_.v98,
            *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v112_.v112 + 8),
            *(unsigned __int64*)((char*)((_UNKNOWN**)0x8LL) +
                                 (_QWORD)v112_.v112));
      }
      else {
        v18 = *v112_.v112;
        v19 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v112_.v112);
        v98_.v99 = v112_.v112[1];
        v98_.v100 = v19;
        v98_.v98 = v18;
      }
    }
    v23 = v112_.v112;
    v22 = v112_.v113;
    if (v112_.v112 + 3 == v112_.v113) {
      if (v112_.v112 == v112_.v113) {
        goto LABEL_51;
      }
    }
    else {
      do {
        if ((*(_BYTE*)v23 & 1) != 0) {
          v29 = v23[2];
          if (v29 != 0) {
            v30 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v30 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v10 + v30, v29);
          }
        }
        v24 = v23 + 3;
        v25 = v23[3];
        v26 = v23[4];
        v27 = v23[5];
        *((_WORD*)v23 + 12) = 0;
        *v23 = v25;
        v23[1] = v26;
        v28 = v23 + 6;
        v23[2] = v27;
        v23 += 3;
      } while (v28 != v22);
      v22 = v112_.v113;
      v23 = v24;
      if (v24 == v112_.v113) {
      LABEL_51:
        v112_.v113 = v23;
        GameRoutine_6b7aa0_alt1((__int64)&v101_.v101, v112_.v112, v23,
                                0xAAAAAAAAAAAAAAABLL * (v23 - v112_.v112));
        v35 = GameRoutine_1148100_alt1((_QWORD*)(v8 + 8),
                                       (unsigned __int8*)&v98_.v98);
        if (v35 != nullptr && (v36 = v35, (v37 = v35[10]) != 0)) {
          if ((__int64*)v37 == v36 + 6) {
            v111 = &v109;
            (*(void (**)(__int64, char*))(*(_QWORD*)v37 + 24LL))(v37, &v109);
          }
          else {
            v111 = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
          }
        }
        else {
          v111 = nullptr;
        }
        v38 = v94_.v95;
        v94_.v95 = nullptr;
        if (v38 == v94_.v94) {
          v39 = 32;
        }
        else {
          if (v38 == nullptr) {
            goto LABEL_61;
          }
          v39 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v38 + v39))((__int64)v38);
      LABEL_61:
        if (v111 != nullptr) {
          if (v111 == &v109) {
            v94_.v95 = v94_.v94;
            (*(void (**)(__int64))(*(_QWORD*)v111 + 24LL))((__int64)v111);
            if (v111 == &v109) {
              v40 = 32;
            }
            else {
              if (v111 == nullptr) {
                goto LABEL_71;
              }
              v40 = 40;
            }
            (*(void (**)(__int64))(*(_QWORD*)v111 + v40))((__int64)v111);
            goto LABEL_71;
          }
          v94_.v95 = v111;
        }
        else {
          v94_.v95 = nullptr;
        }
      LABEL_71:
        v41 = GameRoutine_1148100_alt1((_QWORD*)(v8 + 48),
                                       (unsigned __int8*)&v98_.v98);
        if (v41 != nullptr && (v42 = v41, (v43 = v41[10]) != 0)) {
          if ((__int64*)v43 == v42 + 6) {
            v111 = &v109;
            (*(void (**)(__int64, char*))(*(_QWORD*)v43 + 24LL))(v43, &v109);
          }
          else {
            v111 = (char*)(*(__int64 (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
          }
        }
        else {
          v111 = nullptr;
        }
        v44 = v96_.v97;
        v96_.v97 = nullptr;
        if (v44 == v96_.v96) {
          v45 = 32;
        }
        else {
          if (v44 == nullptr) {
            goto LABEL_81;
          }
          v45 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v44 + v45))((__int64)v44);
      LABEL_81:
        if (v111 == nullptr) {
          v96_.v97 = nullptr;
          goto LABEL_91;
        }
        if (v111 != &v109) {
          v96_.v97 = v111;
          goto LABEL_91;
        }
        v96_.v97 = v96_.v96;
        (*(void (**)(__int64))(*(_QWORD*)v111 + 24LL))((__int64)v111);
        if (v111 == &v109) {
          v46 = 32;
        }
        else {
          if (v111 == nullptr) {
            goto LABEL_91;
          }
          v46 = 40;
        }
        (*(void (**)(__int64))(*(_QWORD*)v111 + v46))((__int64)v111);
      LABEL_91:
        v47 = v112_.v112;
        v101_.v104 = 0;
        v101_.v105 = v89;
        if (v112_.v112 != nullptr) {
          v48 = v112_.v113;
          if (v112_.v112 == v112_.v113) {
            goto LABEL_101;
          }
          v49 = v112_.v113;
          do {
            v50 = *((_BYTE*)v49 - 24);
            v49 -= 3;
            if ((v50 & 1) != 0) {
              v51 = *(v48 - 1);
              if (v51 != 0) {
                v52 = 128;
                if (*(_QWORD*)(*v10 + 200) == 0) {
                  v52 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v10 + v52, v51);
              }
            }
            v48 = v49;
          } while (v49 != v47);
          v112_.v113 = v47;
          v47 = v112_.v112;
          if (v112_.v112 != nullptr) {
          LABEL_101:
            v53 = 128;
            if (*(_QWORD*)(*v10 + 200) == 0) {
              v53 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v10 + v53, (__int64)v47);
          }
        }
        v13 = v91_.v91 & 1;
        goto LABEL_105;
      }
    }
    v31 = v22;
    do {
      v32 = *((_BYTE*)v31 - 24);
      v31 -= 3;
      if ((v32 & 1) != 0) {
        v33 = *(v22 - 1);
        if (v33 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*v10 + 200) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v10 + v34, v33);
        }
      }
      v22 = v31;
    } while (v31 != v23);
    goto LABEL_51;
  }
}

__n128 game_1196c00(__int64 a1)
{

#pragma clang fp contract(off)
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_1196e60((_QWORD*)a1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *(_QWORD*)(a1 + 168);
  v4 = fw_memory_g_heap_manager_ptr;
  if (v3 != 0) {
    v5 = *(_QWORD*)(a1 + 176);
    if (v3 == v5) {
      goto LABEL_9;
    }
    do {
      v6 = *(_QWORD*)(v5 - 8);
      if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak();
      }
      v5 -= 16;
    } while (v5 != v3);
    v7 = *(_QWORD*)(a1 + 168);
    *(_QWORD*)(a1 + 176) = v3;
    if (v7 != 0) {
    LABEL_9:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8);
    }
  }
  if (*(_BYTE*)(a1 + 160) == 1 && *(_QWORD*)(a1 + 144) != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  if (*(_QWORD*)(a1 + 120) != 0) {
    result = std___1___shared_weak_count___release_weak();
  }
  v9 = *(_QWORD**)(a1 + 88);
  while (v9 != nullptr) {
    v11 = v9;
    v9 = (_QWORD*)*v9;
    v12 = (_QWORD*)v11[10];
    if (v12 == v11 + 6) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
        goto LABEL_28;
      }
      v13 = 40;
    }
    (*(void (**)(void*))(*v12 + v13))(v12),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_28:
    if ((v11[2] & 1) != 0 && v11[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v14 = 128;
      }
      else {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
      v10 = 128;
    }
    else {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
  }
  v15 = *(_QWORD*)(a1 + 72);
  *(_QWORD*)(a1 + 72) = 0;
  if (v15 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v16 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16);
  }
  if ((*(_BYTE*)(a1 + 48) & 1) != 0 && *(_QWORD*)(a1 + 64) != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v17);
  }
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v18 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v18);
  }
  if ((*(_BYTE*)a1 & 1) != 0 && *(_QWORD*)(a1 + 16) != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19);
  }
  return result;
}

void game_1196e60(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  bool v4;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 v16;
  __int64 v19;

  LOBYTE(v2) = 0;
  v3 = (_QWORD*)GameData_212dbb8[0];
  if (game_hub_ProcHubSeqView_instance_ != 0) {
    v4 = *(_QWORD*)GameData_212dbb8[0] == 0 ||
         *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) == 0;
    if (!v4 && *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0 &&
        (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
      v2 = *(_QWORD*)GameData_212dbf0[0];
      if (*(_QWORD*)GameData_212dbf0[0] != 0) {
        LOBYTE(v2) = *(_BYTE*)(v2 + 144) ^ 1;
      }
    }
  }
  v6 = (_QWORD*)a1[21];
  v7 = (_QWORD*)a1[22];
  if (v6 != v7) {
    if ((v2 & 1) != 0) {
      do {
        v8 = *v6;
        v9 = *(_QWORD**)(*v6 + 64LL);
        if (v9 != nullptr) {
          *(_QWORD*)(v8 + 64) = 0;
          if (v9 == (_QWORD*)(v8 + 32)) {
            v10 = 32;
          }
          else {
            v10 = 40;
          }
          (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
        }
        v11 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak();
        }
        v6 += 2;
      } while (v6 != v7);
    }
    else {
      do {
        v12 = v6[1];
        *v6 = 0;
        v6[1] = 0;
        if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak();
        }
        v6 += 2;
      } while (v6 != v7);
    }
  }
  v13 = a1[21];
  for (i = a1[22]; i != v13; i -= 16) {
    v15 = *(_QWORD*)(i - 8);
    if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak();
    }
  }
  v16 = a1[15];
  a1[22] = v13;
  a1[14] = 0;
  a1[15] = 0;
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak();
  }
  if (game_hub_ProcHubSeqView_instance_ != 0 && *v3 != 0 &&
      *(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 218) != 0 &&
      *(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <= 0 &&
      (*(_BYTE*)(game_hub_ProcHubSeqView_instance_ + 240) & 1) == 0) {
    v19 = *(_QWORD*)GameData_212dbf0[0];
    if (*(_QWORD*)GameData_212dbf0[0] != 0 && *(_BYTE*)(v19 + 136) != 0) {
      *(_BYTE*)(v19 + 136) = 0;
      GameRoutine_d8cf60(*(_QWORD*)GameData_212dbc8[0]);
    }
  }
}

__n128 game_119cce0(_QWORD* a1)
{
  __int64 v2;
  __n128 result;
  _QWORD* v4;
  __int64 v5;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a1[12];
  if (v2 != 0) {
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v2 + 48LL))(v2, a1 + 4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v4 = (_QWORD*)a1[12];
    if (v4 == a1 + 8) {
      v5 = 32;
    }
    else {
      if (v4 == nullptr) {
        goto LABEL_7;
      }
      v5 = 40;
    }
    (*(void (**)(__int64))(*v4 + v5))((__int64)v4),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_7:
  if (a1[7] != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

void game_11ca9c0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _BYTE* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  char* v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  char* v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  struct {
    __int64 v54;
    unsigned __int64 v55;
    char* v56;
  } v54_;

  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = 0;
  v8 = strlen(a2);
  if (v8 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_104;
  }
  v9 = v8;
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v8 >= 0x17) {
    if ((v8 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v8 | 7) + 1;
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v12, 16, 0);
    *(_QWORD*)(a1 + 32) = v9;
    *(_QWORD*)(a1 + 40) = v11;
    *(_QWORD*)(a1 + 24) = v12 | 1;
  }
  else {
    v11 = a1 + 25;
    *(_BYTE*)(a1 + 24) = 2 * v8;
    if (v8 == 0) {
      goto LABEL_10;
    }
  }
  memmove(v11, a2, v9);
LABEL_10:
  *(_BYTE*)(v11 + v9) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  v13 = (_BYTE*)(a1 + 96);
  v14 = *v10;
  *(_QWORD*)(a1 + 48) = 0;
  v15 = (_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  v16 = fw_memory_HeapManager_Allocate(v14, 296, 16, 0);
  *(_DWORD*)(v16 + 48) = 0x2000;
  *(_QWORD*)(v16 + 8) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_DWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_DWORD*)(v16 + 104) = 0;
  *(_WORD*)(v16 + 108) = 256;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_WORD*)(v16 + 80) = 0;
  *(_WORD*)(v16 + 116) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_BYTE*)(v16 + 160) = 0;
  *(_BYTE*)(v16 + 288) = 0;
  *(_QWORD*)(v16 + 272) = 0;
  *(_QWORD*)(v16 + 280) = 0;
  *(_QWORD*)(v16 + 256) = 0;
  *(_QWORD*)(v16 + 264) = 0;
  *(_QWORD*)(v16 + 240) = 0;
  *(_QWORD*)(v16 + 248) = 0;
  *(_QWORD*)(v16 + 224) = 0;
  *(_QWORD*)(v16 + 232) = 0;
  *(_QWORD*)(v16 + 208) = 0;
  *(_QWORD*)(v16 + 216) = 0;
  *(_QWORD*)(v16 + 192) = 0;
  *(_QWORD*)(v16 + 200) = 0;
  *(_QWORD*)(v16 + 176) = 0;
  *(_QWORD*)(v16 + 184) = 0;
  *(_QWORD*)(v16 + 168) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_DWORD*)(v16 + 127) = 0;
  *(_QWORD*)(a1 + 128) = v16;
  *(_DWORD*)(a1 + 136) = 0;
  *(_QWORD*)v16 = GameData_2044668;
  *(_DWORD*)(v16 + 112) = -1082130432;
  *(_DWORD*)(v16 + 292) = 2;
  *(_QWORD*)(v16 + 24) = 0;
  *(_QWORD*)(a1 + 120) = v16 + 24;
  v17 = game_HashString(a3);
  if (v17 == 0) {
    goto LABEL_32;
  }
  v18 = *(_QWORD*)(GameData_21c9da8 + 96);
  if (v18 == 0 || *(_QWORD*)(GameData_21c9da8 + 112) == 0) {
    goto LABEL_32;
  }
  v19 = v18 - 1;
  if ((v18 & (v18 - 1)) != 0) {
    v20 = v17;
    if (v17 >= v18) {
      v20 = v17 % v18;
    }
  }
  else {
    v20 = v19 & v17;
  }
  v21 = *(_QWORD**)(*(_QWORD*)(GameData_21c9da8 + 88) + 8 * v20);
  if (v21 == nullptr || (v22 = (_QWORD*)*v21) == nullptr) {
  LABEL_32:
    *v15 = 0;
    return;
  }
  if ((v18 & v19) == 0) {
    while (1) {
      v24 = v22[1];
      if (v24 == v17) {
        if (v22[2] == v17) {
          goto LABEL_34;
        }
      }
      else if ((v24 & v19) != v20) {
        goto LABEL_32;
      }
      v22 = (_QWORD*)*v22;
      if (v22 == nullptr) {
        goto LABEL_32;
      }
    }
  }
  while (1) {
    v23 = v22[1];
    if (v23 == v17) {
      break;
    }
    if (v23 >= v18) {
      v23 %= v18;
    }
    if (v23 != v20) {
      goto LABEL_32;
    }
  LABEL_22:
    v22 = (_QWORD*)*v22;
    if (v22 == nullptr) {
      goto LABEL_32;
    }
  }
  if (v22[2] != v17) {
    goto LABEL_22;
  }
LABEL_34:
  v25 = v22[3];
  *v15 = v25;
  if (v25 == 0) {
    return;
  }
  v26 = game_HashString(a4);
  if (v26 == 0) {
    goto LABEL_59;
  }
  v27 = *(_QWORD*)(GameData_21c9d80 + 96);
  if (v27 == 0 || *(_QWORD*)(GameData_21c9d80 + 112) == 0) {
    goto LABEL_59;
  }
  v29 = v27 - 1;
  if ((v27 & (v27 - 1)) != 0) {
    v30 = v26;
    if (v26 >= v27) {
      v30 = v26 % v27;
    }
  }
  else {
    v30 = v29 & v26;
  }
  v31 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d80 + 88) + 8 * v30);
  if (v31 == nullptr || (v32 = (_QWORD*)*v31) == nullptr) {
  LABEL_59:
    *(_QWORD*)(a1 + 56) = 0;
    goto LABEL_60;
  }
  if ((v27 & v29) == 0) {
    while (1) {
      v34 = v32[1];
      if (v34 == v26) {
        if (v32[2] == v26) {
          goto LABEL_102;
        }
      }
      else if ((v34 & v29) != v30) {
        goto LABEL_59;
      }
      v32 = (_QWORD*)*v32;
      if (v32 == nullptr) {
        goto LABEL_59;
      }
    }
  }
  while (2) {
    v33 = v32[1];
    if (v33 != v26) {
      if (v33 >= v27) {
        v33 %= v27;
      }
      if (v33 != v30) {
        goto LABEL_59;
      }
    }
    else if (v32[2] == v26) {
      break;
    }
    v32 = (_QWORD*)*v32;
    if (v32 == nullptr) {
      goto LABEL_59;
    }
    continue;
  }
LABEL_102:
  v53 = v32[3];
  *(_QWORD*)(a1 + 56) = v53;
  if (v53 != 0) {
    return;
  }
LABEL_60:
  v35 = GameData_22336e0;
  if (GameData_22336e0 == 0) {
    *(_QWORD*)(a1 + 64) = 0;
    goto LABEL_81;
  }
  v36 = strlen(a4);
  if (v36 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_104:
    String_60a1d0();
  }
  v37 = v36;
  if (v36 >= 0x17) {
    if ((v36 | 7) == 0x17) {
      v39 = 26;
    }
    else {
      v39 = (v36 | 7) + 1;
    }
    v38 = (char*)fw_memory_HeapManager_Allocate(*v10, v39, 16, 0);
    v54_.v55 = v37;
    v54_.v56 = v38;
    v54_.v54 = v39 | 1;
    goto LABEL_70;
  }
  LOBYTE(v54_.v54) = 2 * v36;
  v38 = (char*)&v54_.v54 + 1;
  if (v36 != 0) {
  LABEL_70:
    memcpy(v38, a4, v37);
  }
  v38[v37] = 0;
  v40 = GameRoutine_1152360((_QWORD*)(v35 + 560), (unsigned __int8*)&v54_.v54);
  if (v40 != nullptr) {
    v41 = v40[5];
  }
  else {
    v41 = 0;
  }
  v42 = v54_.v54;
  *(_QWORD*)(a1 + 64) = v41;
  if ((v42 & 1) != 0 && v54_.v56 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v43 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v43);
    v41 = *(_QWORD*)(a1 + 64);
  }
  if (v41 != 0) {
    GameRoutine_60a020(a1 + 72, a4);
  }
LABEL_81:
  if (*(_QWORD*)(a1 + 56) != 0) {
    return;
  }
  if (*(_QWORD*)(a1 + 64) == 0) {
    *(_DWORD*)(a1 + 136) = 3;
    return;
  }
  v44 = *(_QWORD*)(a1 + 48);
  *(_DWORD*)(a1 + 136) = *(char*)(v44 + 48);
  v45 = *(char**)(v44 + 40);
  if (v45 != nullptr) {
    v46 = v45;
  }
  else {
    v46 = &GameData_1a9f09e;
  }
  v47 = strlen(v46);
  if (v47 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_104;
  }
  v48 = v47;
  if (v47 >= 0x17) {
    if ((v47 | 7) == 0x17) {
      v50 = 26;
    }
    else {
      v50 = (v47 | 7) + 1;
    }
    v49 = (char*)fw_memory_HeapManager_Allocate(*v10, v50, 16, 0);
    v54_.v55 = v48;
    v54_.v56 = v49;
    v54_.v54 = v50 | 1;
  }
  else {
    LOBYTE(v54_.v54) = 2 * v47;
    v49 = (char*)&v54_.v54 + 1;
    if (v47 == 0) {
      goto LABEL_96;
    }
  }
  memmove(v49, v46, v48);
LABEL_96:
  v49[v48] = 0;
  if ((*v13 & 1) != 0 && *(_QWORD*)(a1 + 112) != 0) {
    v51 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free(*v10 + v51);
  }
  v52 = v54_.v55;
  *(_QWORD*)v13 = v54_.v54;
  *(_QWORD*)(a1 + 104) = v52;
  *(_QWORD*)(a1 + 112) = v54_.v56;
}

__int64 game_11de320(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 (**v14)();
    __int64* v15;
    char* v16;
    char gap24_[8];
    __int64 (***v17)();
  } v14_;
  __int64 v18;
  char v19;

  if (GameRoutine_11dde90(a1) && GameRoutine_11ddc40(a1)) {
    goto LABEL_33;
  }
  v19 = 0;
  GameRoutine_682bc0(&v14_.v14, a1);
  if (v14_.v14 == nullptr) {
    goto LABEL_33;
  }
  v2 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v2 == 0) {
    goto LABEL_33;
  }
  v3 = 250;
  while (1) {
    v4 = *(_QWORD*)(v2 + 440);
    if (v4 != 0 && *(_BYTE*)(v4 + 16) != 9 &&
        *(__int64 (***)(void))(v2 + 392) == v14_.v14) {
      break;
    }
    v5 = *(_QWORD*)(v2 + 2664);
    if (v5 != 0 && *(_BYTE*)(v5 + 16) != 9 &&
        *(__int64 (***)(void))(v2 + 2616) == v14_.v14) {
      v2 += 2224;
      break;
    }
    v6 = *(_QWORD*)(v2 + 4888);
    if (v6 != 0 && *(_BYTE*)(v6 + 16) != 9 &&
        *(__int64 (***)(void))(v2 + 4840) == v14_.v14) {
      v9 = 4448;
      goto LABEL_26;
    }
    v7 = *(_QWORD*)(v2 + 7112);
    if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 &&
        *(__int64 (***)(void))(v2 + 7064) == v14_.v14) {
      v9 = 6672;
      goto LABEL_26;
    }
    v8 = *(_QWORD*)(v2 + 9336);
    if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 &&
        *(__int64 (***)(void))(v2 + 9288) == v14_.v14) {
      v9 = 8896;
    LABEL_26:
      v2 += v9;
      break;
    }
    v2 += 11120;
    v3 -= 5;
    if (v3 == 0) {
      goto LABEL_33;
    }
  }
  v18 = v2;
  if ((*(_BYTE*)(v2 + 418) & 0x10) != 0) {
    v14_.v15 = (__int64*)&GameData_1a95031;
    v14_.v14 = (__int64 (**)(void))game_HashString((__int64)&GameData_1a95031);
    v11 = SpotMgr_13304c0((unsigned int*)&v14_.v14);
    if (v11 != 0) {
      v14_.v17 = &v14_.v14;
      v14_.v14 = GameData_20176a8;
      v14_.v15 = &v18;
      v14_.v16 = &v19;
      game_gmap_TroopMgr_EachPlayerTroop(v11, (__int64)&v14_.v14);
      if (v14_.v17 == &v14_.v14) {
        v12 = 4;
      }
      else {
        if (v14_.v17 == nullptr) {
        LABEL_37:
          v10 = v19;
          return v10 & 1;
        }
        v12 = 5;
      }
      ((__int64 (*)(__int64))(*v14_.v17)[v12])((__int64)v14_.v17);
      goto LABEL_37;
    }
  LABEL_33:
    v10 = 0;
    return v10 & 1;
  }
  v10 = 1;
  return v10 & 1;
}

__int64 game_11e1260(unsigned __int8* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v3;
  __int64* v4;
  unsigned __int8* v5;
  char* v6;
  unsigned int v7;
  __int64 v9;
  char v10;
  _BYTE* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 v18;
  unsigned __int8 v19;
  bool v20;
  int v21;
  int v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    _BYTE* v29;
    _BYTE* v30;
    _BYTE* v31;
  } v29_;
  struct {
    __int64 v32[2];
    __int64 v33;
  } v32_;
  struct {
    __int64 v34;
    __int64 v35;
    __int64 v36;
  } v34_;
  struct {
    __int64 v37;
    __int64 v38;
    char* v39;
  } v37_;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
    return 0;
  }
  v1 = *a1;
  v2 = *((_QWORD*)a1 + 1);
  if ((v1 & 1) == 0) {
    v2 = v1 >> 1;
  }
  if (v2 <= 0x2B) {
    String_60a230();
  }
  v3 = v2 - 44;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if ((v1 & 1) != 0) {
    v5 = *((unsigned __int8**)a1 + 2);
  }
  else {
    v5 = a1 + 1;
  }
  if (v3 >= 0x17) {
    if ((v3 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v3 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v9, 16, 0);
    v37_.v38 = v3;
    v37_.v39 = v6;
    v37_.v37 = v9 | 1;
    goto LABEL_18;
  }
  LOBYTE(v37_.v37) = 2 * v3;
  v6 = (char*)&v37_.v37 + 1;
  if (v2 != 44) {
  LABEL_18:
    memmove(v6, v5 + 44, v3);
  }
  v6[v3] = 0;
  v34_.v35 = 0;
  v34_.v36 = 0;
  v10 = v37_.v37;
  v34_.v34 = 0;
  if ((v37_.v37 & 1) != 0) {
    fw_text_String_CopyTerminated(v32_.v32, (__int64)v37_.v39, v37_.v38);
  }
  else {
    v32_.v32[0] = v37_.v37;
    v32_.v32[1] = v37_.v38;
    v32_.v33 = (__int64)v37_.v39;
  }
  v11 = (_BYTE*)fw_memory_HeapManager_Allocate(*v4, 1, 16, 0);
  v29_.v29 = v11;
  *v11 = 95;
  v29_.v30 = v11 + 1;
  v29_.v31 = v11 + 1;
  game_112ce60((__int64)v32_.v32, (__int64*)&v29_.v29, (__int64)&v34_.v34);
  v12 = *v4;
  v29_.v30 = v11;
  v13 = 128;
  if (*(_QWORD*)(v12 + 200) == 0) {
    v13 = 56;
  }
  nn_mem_StandardAllocator_Free(v12 + v13);
  if ((v32_.v32[0] & 1) != 0 && v32_.v33 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v14);
  }
  v15 = v34_.v34;
  if (v34_.v35 - v34_.v34 == 48) {
    if ((*(_BYTE*)v34_.v34 & 1) != 0) {
      v16 = *(_QWORD*)(v34_.v34 + 16);
    }
    else {
      v16 = v34_.v34 + 1;
    }
    if ((*(_BYTE*)(v34_.v34 + 24) & 1) != 0) {
      v17 = *(_QWORD*)(v34_.v34 + 40);
    }
    else {
      v17 = v34_.v34 + 25;
    }
    v18 = GameRoutine_11e1ac0(v16);
    v19 = GameRoutine_11e1ac0(v17);
    v21 = v18;
    v20 = v18 == 0;
    v15 = v34_.v34;
    v22 = v20;
    if (v19 == 0) {
      v22 = 1;
    }
    if (v21 == v19) {
      v7 = v22;
    }
    else {
      v7 = 1;
    }
    if (v34_.v34 == 0) {
      goto LABEL_60;
    }
    goto LABEL_47;
  }
  v7 = 0;
  if (v34_.v34 != 0) {
  LABEL_47:
    v23 = v34_.v35;
    if (v15 == v34_.v35) {
      goto LABEL_57;
    }
    v24 = v34_.v35;
    do {
      v25 = *(_BYTE*)(v24 - 24);
      v24 -= 24;
      if ((v25 & 1) != 0 && *(_QWORD*)(v23 - 8) != 0) {
        if (*(_QWORD*)(*v4 + 200) != 0) {
          v26 = 128;
        }
        else {
          v26 = 56;
        }
        nn_mem_StandardAllocator_Free(*v4 + v26);
      }
      v23 = v24;
    } while (v24 != v15);
    v34_.v35 = v15;
    if (v34_.v34 != 0) {
    LABEL_57:
      v27 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v27 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v27);
    }
  }
LABEL_60:
  if ((v10 & 1) != 0 && v37_.v39 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*v4 + v28);
  }
  return v7;
}

__int64 game_11e1ef0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v7_.v8 = v7_.v7;
  v7_.v7[0] = GameData_2017518;
  v7_.v7[1] = v2;
  v7_.v7[2] = v3;
  Troop_133ed80(v4, (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

__int64 game_11e2180(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v7_.v8 = v7_.v7;
  v7_.v7[0] = GameData_2017618;
  v7_.v7[1] = v2;
  v7_.v7[2] = v3;
  Troop_133ed80(v4, (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

__int64 game_11e2410(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v7_.v8 = v7_.v7;
  v7_.v7[0] = GameData_2017718;
  v7_.v7[1] = v2;
  v7_.v7[2] = v3;
  Troop_133ed80(v4, (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

__int64 game_11eabf0(__int64 a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  if (*(_QWORD*)GameData_212d290 == 0) {
    *(_QWORD*)GameData_212d290 = a1;
    GameData_2240080 = 1;
  }
  *(_QWORD*)a1 = AI_Destructor_ptr;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 832, 16, 0);
  v4 = v3 + 100;
  v3[100] = 0;
  v3[101] = 0;
  v3[102] = 0;
  *(_QWORD*)(a1 + 8) = v3;
  v5 = *v2;
  *(_QWORD*)((char*)v4 + 21) = 0;
  v6 = fw_memory_HeapManager_Allocate_alt1(v5, 23440, 16, 0);
  AIThink_11eed80();
  *(_QWORD*)(a1 + 16) = v6;
  *(_DWORD*)(a1 + 24) = 0;
  *(_BYTE*)(a1 + 30) = 0;
  *(_WORD*)(a1 + 28) = 1;
  result = GameData_2240088;
  if (*(_BYTE*)(GameData_2240088 + 8) == 1) {
    result = GameRoutine_126c140();
    *(_BYTE*)(GameData_2240088 + 8) = 0;
  }
  else if (*GameData_212ce90[0] != 0 &&
           *(_BYTE*)(*GameData_212ce90[0] + 24) != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                    24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                    556000);
    if (v8 != 0) {
      v9 = game_map_MapRandom_instance__ptr[0];
      v10 = GameData_21309c8[0];
      do {
        nn_os_LockMutex(&game_g_random_mutex);
        v11 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8);
        v12 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12);
        v13 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 4) = v11;
        v14 = (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 8) = v12;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v9 + 12) = v14;
        result = nn_os_UnlockMutex(&game_g_random_mutex);
        v15 = *v10;
        *(_BYTE*)(v8 + 1980) = v14;
        if (v15 != 0 && *(_BYTE*)(v15 + 8) == 1 &&
            (*(_BYTE*)(v15 + 9) & 1) == 0) {
          v16 = *(_QWORD*)(v8 + 440);
          if (v16 != 0 && *(unsigned __int8*)(v16 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v17 = *(unsigned __int8*)(v8 + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v17) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v17) |= 2u;
            }
          }
        }
        v8 = *(_QWORD*)(v8 + 432);
      } while (v8 != 0);
    }
  }
  return result;
}

__int64 game_11ebf80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 (**v3)();
  __int64 v4;
  __int64 (**v5)();
  unsigned __int64 v6;
  __int64 v7;
  __int64 (**v8)();
  __int64 (*v9)();
  __int64 v10;
  unsigned __int64 v11;
  bool v12;
  int v13;
  bool v14;
  _QWORD* v15;

  v1 = result;
  v2 = *(_QWORD*)GameData_212d290;
  *(_DWORD*)(v2 + 24) = 2;
  *(_BYTE*)(*(_QWORD*)(v2 + 16) + 2240LL) = 0;
  *(_DWORD*)(result + 800) = 0;
  *(_DWORD*)(result + 808) = 0;
  if (*(_BYTE*)(GameData_21ca2f8 + *(unsigned __int8*)(GameData_21ca2f8 + 24) +
                16) == 1) {
    v3 = &GameData_216fec8;
    if (*(_BYTE*)(v2 + 30) != 0) {
      v3 = &GameData_216ffc8;
    }
  }
  else {
    v3 = &GameData_216fdc8;
  }
  v4 = *(unsigned int*)(result + 804);
  if ((int)v4 < 1) {
    v6 = 0;
    v7 = 0;
  }
  else {
    v5 = &v3[2 * v4];
    v6 = (unsigned __int64)*(v5 - 2);
    v7 = (__int64)*(v5 - 1);
  }
  v8 = &v3[2 * (int)v4];
  v9 = *v8;
  v10 = (__int64)v8[1];
  if ((*(_BYTE*)(result + 828) & 1) != 0 ||
      ((v12 = v7 == v10,
        v11 = ((unsigned __int8)v10 | (unsigned __int8)v7) & 1 | v6, !v12)
           ? (v12 = v11 == 0)
           : (v12 = true),
       v12 ? (v13 = 0) : (v13 = 1),
       (__int64 (*)())v6 == v9 ? (v14 = v13 == 0) : (v14 = false), !v14)) {
    v15 = (_QWORD*)(result + (v10 >> 1));
    if ((v10 & 1) != 0) {
      v9 = *(__int64 (**)(void))((char*)v9 + *v15);
    }
    result = ((__int64 (*)(_QWORD*))v9)(v15);
    LODWORD(v4) = *(_DWORD*)(v1 + 804);
  }
  *(_BYTE*)(v1 + 828) = 0;
  *(_DWORD*)(v1 + 804) = v4 + 1;
  return result;
}

__int64 game_11f2c20(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8* v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  __int64 v21;
  __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8* v28;
  int v29;
  __int64 v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  bool v40;
  struct {
    _QWORD v41[4];
    _QWORD* v42;
  } v41_;
  int v43;

  v19 = COERCE_AS(__typeof__(v19),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = 876;
  v5 = GameData_212c878[0];
  if ((a3 & 1) != 0) {
    if ((a2 & 1) != 0) {
      while (1) {
        v17 = *(unsigned __int16*)(a1 + v3);
        v41_.v41[0] = GameData_2017fa8;
        v41_.v41[1] = GameRoutine_11f3cd0;
        v41_.v42 = v41_.v41;
        if (v17 == 0) {
          goto LABEL_22;
        }
        v18 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v17);
        if ((unsigned int)*(unsigned __int8*)(v18 + 72) - 5 > 1 ||
            *(_BYTE*)(v18 + 73) != 2) {
          goto LABEL_22;
        }
        v20 = UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
        v19 = COERCE_AS(__typeof__(v19),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v41_.v42 == v41_.v41) {
          break;
        }
        if (v41_.v42 != nullptr) {
          v21 = 40;
        LABEL_30:
          (*(void (**)(_QWORD*, __int64))(*v41_.v42 + v21))(v41_.v42, v19),
              v19 = COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v9 = COERCE_AS(__typeof__(v9),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        if (v20) {
          if (*(_WORD*)(a1 + v3) == 0) {
            return 1;
          }
          v22 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) +
                           8LL * *(unsigned __int16*)(a1 + v3));
          v12 = *(_QWORD*)(v22 + 192);
          v23 = v12 == 0 || *(unsigned __int8*)(v22 + 72) > 7u;
          if (v23 || *(_BYTE*)(v12 + 105) == 0) {
            v12 = 0;
          }
          else if (*(_BYTE*)(v12 + 104) == 2) {
            v12 = 0;
          }
          v13 = v22 + 93;
          v14 = *(_QWORD*)(v22 + 24);
          v15 = (unsigned __int8*)(v12 != 0 ? v12 + 279 : v13);
          v16 = *v15;
          if ((unsigned int)game_UnitSkillList_GetRangeAddImpl_alt1(a1 + 1744,
                                                                    v14 + 8) +
                  v16 !=
              255) {
            return 1;
          }
        }
      LABEL_22:
        v3 += 8;
        if (v3 == 1068) {
          return 0;
        }
      }
      v21 = 32;
      goto LABEL_30;
    }
    v24 = game_g_shared_system_skills_ptr;
    while (1) {
      v30 = *(unsigned __int16*)(a1 + v3);
      v41_.v41[0] = GameData_2017fa8;
      v41_.v41[1] = GameRoutine_11f3cd0;
      v41_.v42 = v41_.v41;
      if (v30 == 0) {
        goto LABEL_47;
      }
      v32 = (unsigned int)*(
                unsigned __int8*)((v31 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) +
                                                    8 * v30)) +
                                  72) -
                    5 <=
                1 &&
            *(_BYTE*)(v31 + 73) == 2 &&
            (v43 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v24) & 0xFFF,
             (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v43) &
              1) == 0) &&
            (*(_WORD*)(a1 + 492) != 0 || *(_BYTE*)(a1 + 496) != 0 ||
             (v43 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v24) & 0xFFF,
              (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v43) &
               1) == 0)) &&
            (v43 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v24 + 4) & 0xFFF,
             (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v43) &
              1) == 0) &&
            UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
      v19 = COERCE_AS(__typeof__(v19),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v41_.v42 == v41_.v41) {
        break;
      }
      if (v41_.v42 != nullptr) {
        v33 = 40;
      LABEL_61:
        (*(void (**)(_QWORD*, __int64))(*v41_.v42 + v33))(v41_.v42, a2),
            v19 = COERCE_AS(__typeof__(v19),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v9 = COERCE_AS(__typeof__(v9),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (v32) {
        if (*(_WORD*)(a1 + v3) == 0) {
          return 1;
        }
        v34 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) +
                         8LL * *(unsigned __int16*)(a1 + v3));
        v25 = *(_QWORD*)(v34 + 192);
        v35 = v25 == 0 || *(unsigned __int8*)(v34 + 72) > 7u;
        if (v35 || *(_BYTE*)(v25 + 105) == 0) {
          v25 = 0;
        }
        else if (*(_BYTE*)(v25 + 104) == 2) {
          v25 = 0;
        }
        v26 = v34 + 93;
        v27 = *(_QWORD*)(v34 + 24);
        v28 = (unsigned __int8*)(v25 != 0 ? v25 + 279 : v26);
        v29 = *v28;
        if ((unsigned int)game_UnitSkillList_GetRangeAddImpl_alt1(a1 + 1744,
                                                                  v27 + 8) +
                v29 !=
            255) {
          return 1;
        }
      }
    LABEL_47:
      v3 += 8;
      if (v3 == 1068) {
        return 0;
      }
    }
    v33 = 32;
    goto LABEL_61;
  }
  if ((a2 & 1) != 0) {
    while (1) {
      v7 = *(unsigned __int16*)(a1 + v3);
      v41_.v41[0] = GameData_2017fa8;
      v41_.v41[1] = GameRoutine_11f3cd0;
      v41_.v42 = v41_.v41;
      if (v7 != 0) {
        v8 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v7);
        if ((unsigned int)*(unsigned __int8*)(v8 + 72) - 5 <= 1 &&
            *(_BYTE*)(v8 + 73) == 2) {
          v10 = UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (v41_.v42 == v41_.v41) {
            v6 = 32;
            goto LABEL_7;
          }
          if (v41_.v42 != nullptr) {
            v6 = 40;
          LABEL_7:
            (*(void (**)(_QWORD*, __int64))(*v41_.v42 + v6))(v41_.v42, v9),
                v19 =
                    COERCE_AS(__typeof__(v19),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v9 = COERCE_AS(__typeof__(v9),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            if (v10) {
              return 1;
            }
            goto LABEL_8;
          }
          if (v10) {
            return 1;
          }
        }
      }
    LABEL_8:
      v3 += 8;
      if (v3 == 1068) {
        return 0;
      }
    }
  }
  v36 = game_g_shared_system_skills_ptr;
  do {
    v38 = *(unsigned __int16*)(a1 + v3);
    v41_.v41[0] = GameData_2017fa8;
    v41_.v41[1] = GameRoutine_11f3cd0;
    v41_.v42 = v41_.v41;
    if (v38 == 0) {
      goto LABEL_76;
    }
    v39 = *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v38);
    v40 =
        (unsigned int)*(unsigned __int8*)(v39 + 72) - 5 <= 1 &&
        *(_BYTE*)(v39 + 73) == 2 &&
        (v43 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v36) & 0xFFF,
         (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v43) & 1) ==
             0) &&
        (*(_WORD*)(a1 + 492) != 0 || *(_BYTE*)(a1 + 496) != 0 ||
         (v43 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v36) & 0xFFF,
          (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v43) & 1) ==
              0)) &&
        (v43 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v36 + 4) & 0xFFF,
         (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v43) & 1) ==
             0) &&
        UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
    v19 = COERCE_AS(__typeof__(v19),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v41_.v42 == v41_.v41) {
      v37 = 32;
      goto LABEL_75;
    }
    if (v41_.v42 != nullptr) {
      v37 = 40;
    LABEL_75:
      (*(void (**)(_QWORD*, __int64))(*v41_.v42 + v37))(v41_.v42, a2),
          v19 = COERCE_AS(__typeof__(v19),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v9 = COERCE_AS(__typeof__(v9),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v40) {
        return 1;
      }
      goto LABEL_76;
    }
    if (v40) {
      return 1;
    }
  LABEL_76:
    v3 += 8;
  } while (v3 != 1068);
  return 0;
}

__int64 game_11f30c0(__int64 a1, unsigned __int16* a2, char a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  int v16;

  v14[0] = GameData_2017fa8;
  v14[1] = GameRoutine_11f3cd0;
  v4 = *a2;
  v5 = v14;
  v15 = v14;
  if (v4 == 0) {
    v7 = 0;
  LABEL_16:
    v12 = 32;
    goto LABEL_17;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v4);
  if ((unsigned int)*(unsigned __int8*)(v6 + 72) - 5 > 1 ||
      *(_BYTE*)(v6 + 73) != 2) {
    goto LABEL_12;
  }
  if ((a3 & 1) != 0) {
    goto LABEL_5;
  }
  v8 = a2;
  v9 = a1;
  v10 = game_g_shared_system_skills_ptr;
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill(a1 + 1744, &v16) & 1) != 0) {
    goto LABEL_12;
  }
  if (*(_WORD*)(v9 + 492) == 0 && *(_BYTE*)(v9 + 496) == 0) {
    v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
    if ((game_HasSkill(v9 + 1744, &v16) & 1) != 0) {
      goto LABEL_12;
    }
  }
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v10 + 4) & 0xFFF;
  v11 = game_HasSkill(v9 + 1744, &v16);
  a1 = v9;
  a2 = v8;
  if ((v11 & 1) == 0) {
  LABEL_5:
    v7 = UnitItem_6e8e50(a2, a1);
  }
  else {
  LABEL_12:
    v7 = 0;
  }
  v5 = v15;
  if (v15 == v14) {
    goto LABEL_16;
  }
  if (v15 != nullptr) {
    v12 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*, unsigned __int16*))(*v5 + v12))(v5, a2);
  }
  return v7 & 1;
}

__int64 game_11f3220(__int64 a1, __int64 a2, char a3)
{
  __int64 v3;
  int v5;
  unsigned __int8 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _BYTE* v21;
  bool v22;
  unsigned __int8* v23;
  __int64 v24;
  unsigned __int8* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v35;
  bool v36;
  unsigned __int8* v37;
  __int64 v38;
  unsigned __int8* v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  bool v44;
  __int64 v45;
  struct {
    _QWORD v47[4];
    _QWORD* v48;
  } v47_;
  int v49;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = 876;
  v5 = 0;
  v6 = 0;
  v7 = GameData_212c878[0];
  if ((a3 & 1) != 0) {
    if ((a2 & 1) != 0) {
      while (1) {
        v13 = *(unsigned __int16*)(a1 + v3);
        v47_.v47[0] = GameData_2017fa8;
        v47_.v47[1] = GameRoutine_11f3cd0;
        v47_.v48 = v47_.v47;
        if (v13 == 0) {
          goto LABEL_22;
        }
        v14 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v13);
        if ((unsigned int)*(unsigned __int8*)(v14 + 72) - 5 > 1 ||
            *(_BYTE*)(v14 + 73) != 2) {
          goto LABEL_22;
        }
        v16 = UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (v47_.v48 == v47_.v47) {
          v17 = 32;
        }
        else {
          if (v47_.v48 == nullptr) {
            goto LABEL_31;
          }
          v17 = 40;
        }
        (*(void (**)(_QWORD*, __int64))(*v47_.v48 + v17))(v47_.v48, v15),
            v10 = COERCE_AS(__typeof__(v10),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v15 = COERCE_AS(__typeof__(v15),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      LABEL_31:
        if (v16) {
          v18 = *(unsigned __int16*)(a1 + v3);
          v19 = *v7;
          if (*(_WORD*)(a1 + v3) != 0) {
            v20 = *(_QWORD*)(*(_QWORD*)(v19 + 64) + 8 * v18);
            v21 = *(_BYTE**)(v20 + 192);
            v22 = v21 == nullptr || *(unsigned __int8*)(v20 + 72) > 7u;
            if (v22 || v21[105] == 0) {
              v21 = nullptr;
            }
            else if (v21[104] == 2) {
              v21 = nullptr;
            }
            v23 = (unsigned __int8*)(v20 + 93);
            v24 = *(_QWORD*)(v20 + 24);
            if (v21 != nullptr) {
              v25 = v21 + 279;
            }
            else {
              v25 = v23;
            }
            v26 = *v25;
            if ((unsigned int)game_UnitSkillList_GetRangeAddImpl_alt1(a1 + 1744,
                                                                      v24 + 8) +
                    v26 ==
                255) {
              goto LABEL_22;
            }
            v18 = *(unsigned __int16*)(a1 + v3);
            v19 = *v7;
          }
          if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v19 + 64) + 8 * v18) + 336LL) &
               0x40) != 0) {
            v6 = 1;
          }
          else {
            v5 = 1;
          }
        }
      LABEL_22:
        v3 += 8;
        if (v3 == 1068) {
          return v6 | (unsigned int)(v5 << 8);
        }
      }
    }
    v27 = game_g_shared_system_skills_ptr;
    while (1) {
      v28 = *(unsigned __int16*)(a1 + v3);
      v47_.v47[0] = GameData_2017fa8;
      v47_.v47[1] = GameRoutine_11f3cd0;
      v47_.v48 = v47_.v47;
      if (v28 == 0) {
        goto LABEL_51;
      }
      v29 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v28);
      v30 = (unsigned int)*(unsigned __int8*)(v29 + 72) - 5 <= 1 &&
            *(_BYTE*)(v29 + 73) == 2 &&
            (v49 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v27) & 0xFFF,
             (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v49) &
              1) == 0) &&
            (*(_WORD*)(a1 + 492) != 0 || *(_BYTE*)(a1 + 496) != 0 ||
             (v49 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v27) & 0xFFF,
              (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v49) &
               1) == 0)) &&
            (v49 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v27 + 4) & 0xFFF,
             (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v49) &
              1) == 0) &&
            UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v47_.v48 == v47_.v47) {
        v31 = 32;
      }
      else {
        if (v47_.v48 == nullptr) {
          goto LABEL_66;
        }
        v31 = 40;
      }
      (*(void (**)(_QWORD*, __int64))(*v47_.v48 + v31))(v47_.v48, a2),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    LABEL_66:
      if (v30) {
        v32 = *(unsigned __int16*)(a1 + v3);
        v33 = *v7;
        if (*(_WORD*)(a1 + v3) != 0) {
          v34 = *(_QWORD*)(*(_QWORD*)(v33 + 64) + 8 * v32);
          v35 = *(_BYTE**)(v34 + 192);
          v36 = v35 == nullptr || *(unsigned __int8*)(v34 + 72) > 7u;
          if (v36 || v35[105] == 0) {
            v35 = nullptr;
          }
          else if (v35[104] == 2) {
            v35 = nullptr;
          }
          v37 = (unsigned __int8*)(v34 + 93);
          v38 = *(_QWORD*)(v34 + 24);
          if (v35 != nullptr) {
            v39 = v35 + 279;
          }
          else {
            v39 = v37;
          }
          v40 = *v39;
          if ((unsigned int)game_UnitSkillList_GetRangeAddImpl_alt1(a1 + 1744,
                                                                    v38 + 8) +
                  v40 ==
              255) {
            goto LABEL_51;
          }
          v32 = *(unsigned __int16*)(a1 + v3);
          v33 = *v7;
        }
        if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) + 8 * v32) + 336LL) &
             0x40) != 0) {
          v6 = 1;
        }
        else {
          v5 = 1;
        }
      }
    LABEL_51:
      v3 += 8;
      if (v3 == 1068) {
        return v6 | (unsigned int)(v5 << 8);
      }
    }
  }
  if ((a2 & 1) != 0) {
    while (1) {
      v8 = *(unsigned __int16*)(a1 + v3);
      v47_.v47[0] = GameData_2017fa8;
      v47_.v47[1] = GameRoutine_11f3cd0;
      v47_.v48 = v47_.v47;
      if (v8 != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v8);
        if ((unsigned int)*(unsigned __int8*)(v9 + 72) - 5 <= 1 &&
            *(_BYTE*)(v9 + 73) == 2) {
          break;
        }
      }
    LABEL_6:
      v3 += 8;
      if (v3 == 1068) {
        return v6 | (unsigned int)(v5 << 8);
      }
    }
    v11 = UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v47_.v48 == v47_.v47) {
      v12 = 32;
    }
    else {
      if (v47_.v48 == nullptr) {
        goto LABEL_15;
      }
      v12 = 40;
    }
    (*(void (**)(_QWORD*, __int64))(*v47_.v48 + v12))(v47_.v48, v10),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_15:
    if (v11) {
      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v7 + 64) +
                                8LL * *(unsigned __int16*)(a1 + v3)) +
                     336LL) &
           0x40) != 0) {
        v6 = 1;
      }
      else {
        v5 = 1;
      }
    }
    goto LABEL_6;
  }
  v41 = game_g_shared_system_skills_ptr;
  do {
    v42 = *(unsigned __int16*)(a1 + v3);
    v47_.v47[0] = GameData_2017fa8;
    v47_.v47[1] = GameRoutine_11f3cd0;
    v47_.v48 = v47_.v47;
    if (v42 == 0) {
      goto LABEL_84;
    }
    v43 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * v42);
    v44 =
        (unsigned int)*(unsigned __int8*)(v43 + 72) - 5 <= 1 &&
        *(_BYTE*)(v43 + 73) == 2 &&
        (v49 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) + v41) & 0xFFF,
         (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v49) & 1) ==
             0) &&
        (*(_WORD*)(a1 + 492) != 0 || *(_BYTE*)(a1 + 496) != 0 ||
         (v49 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v41) & 0xFFF,
          (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v49) & 1) ==
              0)) &&
        (v49 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v41 + 4) & 0xFFF,
         (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v49) & 1) ==
             0) &&
        UnitItem_6e8e50_alt1((unsigned __int16*)(a1 + v3), a1),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v47_.v48 == v47_.v47) {
      v45 = 32;
    }
    else {
      if (v47_.v48 == nullptr) {
        goto LABEL_99;
      }
      v45 = 40;
    }
    (*(void (**)(_QWORD*, __int64))(*v47_.v48 + v45))(v47_.v48, a2),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  LABEL_99:
    if (v44) {
      if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v7 + 64) +
                                8LL * *(unsigned __int16*)(a1 + v3)) +
                     336LL) &
           0x40) != 0) {
        v6 = 1;
      }
      else {
        v5 = 1;
      }
    }
  LABEL_84:
    v3 += 8;
  } while (v3 != 1068);
  return v6 | (unsigned int)(v5 << 8);
}

__int64 game_11f3740(__int64 a1, unsigned __int16* a2, char a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  int v16;

  v4 = v14;
  v14[0] = GameData_2018058;
  v5 = *a2;
  v15 = v14;
  if (v5 == 0) {
    v7 = 0;
  LABEL_16:
    v12 = 32;
    goto LABEL_17;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v5);
  if ((unsigned int)*(unsigned __int8*)(v6 + 72) - 5 > 1 ||
      *(_BYTE*)(v6 + 73) != 7) {
    goto LABEL_12;
  }
  if ((a3 & 1) != 0) {
    goto LABEL_5;
  }
  v8 = a2;
  v9 = a1;
  v10 = game_g_shared_system_skills_ptr;
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill(a1 + 1744, &v16) & 1) != 0) {
    goto LABEL_12;
  }
  if (*(_WORD*)(v9 + 492) == 0 && *(_BYTE*)(v9 + 496) == 0) {
    v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
    if ((game_HasSkill(v9 + 1744, &v16) & 1) != 0) {
      goto LABEL_12;
    }
  }
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v10 + 4) & 0xFFF;
  v11 = game_HasSkill(v9 + 1744, &v16);
  a1 = v9;
  a2 = v8;
  if ((v11 & 1) == 0) {
  LABEL_5:
    v7 = UnitItem_6e8e50(a2, a1);
  }
  else {
  LABEL_12:
    v7 = 0;
  }
  v4 = v15;
  if (v15 == v14) {
    goto LABEL_16;
  }
  if (v15 != nullptr) {
    v12 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*))(*v4 + v12))(v4);
  }
  return v7 & 1;
}

__int64 game_11f3890(__int64 a1, unsigned __int16* a2, char a3)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  char v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  int v16;

  v14[0] = GameData_2017fa8;
  v14[1] = GameRoutine_11f3d00;
  v3 = *a2;
  v4 = v14;
  v15 = v14;
  if (v3 == 0) {
    v7 = 0;
  LABEL_17:
    v12 = 32;
    goto LABEL_18;
  }
  v5 = *(_QWORD*)(GameData_21c99b8 + 64);
  v6 = *(_QWORD*)(v5 + 8 * v3);
  if ((unsigned int)*(unsigned __int8*)(v6 + 72) - 5 > 1 ||
      v6 != *(_QWORD*)(v5 + 8LL * (int)GameData_22407c8) &&
          v6 != *(_QWORD*)(v5 + 8LL * SHIDWORD(GameData_22407c8))) {
    goto LABEL_13;
  }
  if ((a3 & 1) != 0) {
    goto LABEL_6;
  }
  v8 = a2;
  v9 = a1;
  v10 = game_g_shared_system_skills_ptr;
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill(a1 + 1744, &v16) & 1) != 0) {
    goto LABEL_13;
  }
  if (*(_WORD*)(v9 + 492) == 0 && *(_BYTE*)(v9 + 496) == 0) {
    v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
    if ((game_HasSkill(v9 + 1744, &v16) & 1) != 0) {
      goto LABEL_13;
    }
  }
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v10 + 4) & 0xFFF;
  v11 = game_HasSkill(v9 + 1744, &v16);
  a1 = v9;
  a2 = v8;
  if ((v11 & 1) == 0) {
  LABEL_6:
    v7 = UnitItem_6e8e50(a2, a1);
  }
  else {
  LABEL_13:
    v7 = 0;
  }
  v4 = v15;
  if (v15 == v14) {
    goto LABEL_17;
  }
  if (v15 != nullptr) {
    v12 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v4 + v12))(v4);
  }
  return v7 & 1;
}

__int64 game_11f3a10(__int64 a1, unsigned __int16* a2, char a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  int v16;

  v14[0] = GameData_2017fa8;
  v14[1] = GameRoutine_11f3d60;
  v4 = *a2;
  v5 = v14;
  v15 = v14;
  if (v4 == 0) {
    v7 = 0;
  LABEL_16:
    v12 = 32;
    goto LABEL_17;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v4);
  if ((unsigned int)*(unsigned __int8*)(v6 + 72) - 5 > 1 ||
      *(_BYTE*)(v6 + 73) != 8) {
    goto LABEL_12;
  }
  if ((a3 & 1) != 0) {
    goto LABEL_5;
  }
  v8 = a2;
  v9 = a1;
  v10 = game_g_shared_system_skills_ptr;
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill(a1 + 1744, &v16) & 1) != 0) {
    goto LABEL_12;
  }
  if (*(_WORD*)(v9 + 492) == 0 && *(_BYTE*)(v9 + 496) == 0) {
    v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
    if ((game_HasSkill(v9 + 1744, &v16) & 1) != 0) {
      goto LABEL_12;
    }
  }
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v10 + 4) & 0xFFF;
  v11 = game_HasSkill(v9 + 1744, &v16);
  a1 = v9;
  a2 = v8;
  if ((v11 & 1) == 0) {
  LABEL_5:
    v7 = UnitItem_6e8e50(a2, a1);
  }
  else {
  LABEL_12:
    v7 = 0;
  }
  v5 = v15;
  if (v15 == v14) {
    goto LABEL_16;
  }
  if (v15 != nullptr) {
    v12 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*, unsigned __int16*))(*v5 + v12))(v5, a2);
  }
  return v7 & 1;
}

__int64 game_11f3b70(__int64 a1, unsigned __int16* a2, char a3)
{
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  _QWORD v14[4];
  _QWORD* v15;
  int v16;

  v14[0] = GameData_2017fa8;
  v14[1] = GameRoutine_11f3d90;
  v4 = *a2;
  v5 = v14;
  v15 = v14;
  if (v4 == 0) {
    v7 = 0;
  LABEL_16:
    v12 = 32;
    goto LABEL_17;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v4);
  if ((unsigned int)*(unsigned __int8*)(v6 + 72) - 5 > 1 ||
      *(_BYTE*)(v6 + 73) != 9) {
    goto LABEL_12;
  }
  if ((a3 & 1) != 0) {
    goto LABEL_5;
  }
  v8 = a2;
  v9 = a1;
  v10 = game_g_shared_system_skills_ptr;
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                   game_g_shared_system_skills_ptr) &
        0xFFF;
  if ((game_HasSkill(a1 + 1744, &v16) & 1) != 0) {
    goto LABEL_12;
  }
  if (*(_WORD*)(v9 + 492) == 0 && *(_BYTE*)(v9 + 496) == 0) {
    v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v10) & 0xFFF;
    if ((game_HasSkill(v9 + 1744, &v16) & 1) != 0) {
      goto LABEL_12;
    }
  }
  v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v10 + 4) & 0xFFF;
  v11 = game_HasSkill(v9 + 1744, &v16);
  a1 = v9;
  a2 = v8;
  if ((v11 & 1) == 0) {
  LABEL_5:
    v7 = UnitItem_6e8e50(a2, a1);
  }
  else {
  LABEL_12:
    v7 = 0;
  }
  v5 = v15;
  if (v15 == v14) {
    goto LABEL_16;
  }
  if (v15 != nullptr) {
    v12 = 40;
  LABEL_17:
    (*(void (**)(_QWORD*, unsigned __int16*))(*v5 + v12))(v5, a2);
  }
  return v7 & 1;
}

bool game_11f44e0(__int64 a1, char a2)
{
  __int64 v4;
  __int64 v6;
  _QWORD* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  _QWORD* v15;
  char v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    _QWORD v39[4];
    _QWORD* v40;
  } v39_;
  _BYTE v41[4];
  struct {
    _QWORD v42[2];
    _QWORD* v43;
    char gap88_[8];
    _QWORD* v44;
  } v42_;
  __int64 v45;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = game_g_shared_system_skills_ptr;
  LODWORD(v42_.v42[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v42_.v42) & 1) !=
      0) {
    return false;
  }
  if (*(_WORD*)(a1 + 492) == 0 && *(_BYTE*)(a1 + 496) == 0) {
    LODWORD(v42_.v42[0]) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v4) & 0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v42_.v42) &
         1) != 0) {
      return false;
    }
  }
  LODWORD(v42_.v42[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4CLL) + v4) & 0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v42_.v42) & 1) !=
      0) {
    return false;
  }
  if ((a2 & 1) == 0) {
    v15 = v42_.v42;
    v41[0] = 0;
    v45 = a1;
    v42_.v42[0] = GameData_20184e8;
    v42_.v42[1] = &v45;
    v16 = *(_BYTE*)(a1 + 1536);
    v39_.v39[0] = GameData_20181d8;
    v39_.v39[1] = v41;
    v42_.v44 = v42_.v42;
    v39_.v40 = v39_.v39;
    v42_.v43 = v39_.v39;
    if ((v16 & 8) != 0) {
      v17 = *(_QWORD*)(a1 + 1496);
      v18 = *(_QWORD*)(a1 + 1488);
      if ((int)((unsigned __int64)(v17 - v18) >> 2) < 1) {
        v15 = v42_.v42;
      }
      else {
        v19 = 0;
        v20 = 0;
        v21 = GameData_212c880[0];
        v22 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v22 + 64) +
                                   8LL * (*(_DWORD*)(v18 + v19) & 0xFFF)) +
                        104LL) == 3) {
            if (v42_.v44 == nullptr) {
            LABEL_46:
              GameRoutine_60a310_alt1(),
                  v6 = COERCE_AS(
                      __typeof__(v6),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            (*(void (**)(_QWORD*, __int64))(*v42_.v44 + 48LL))(v42_.v44,
                                                               v18 + v19),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v22 = *v21;
            v17 = *(_QWORD*)(a1 + 1496);
            v18 = *(_QWORD*)(a1 + 1488);
          }
          ++v20;
          v19 += 4;
        } while (v20 < (int)((unsigned __int64)(v17 - v18) >> 2));
        v15 = v42_.v44;
        if (v42_.v44 != v42_.v42) {
          if (v42_.v44 != nullptr) {
            v24 = 40;
          LABEL_49:
            (*(void (**)(_QWORD*, __int64))(*v15 + v24))(v15, v6),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if (v39_.v40 == v39_.v39) {
            v34 = 32;
          }
          else {
            if (v39_.v40 == nullptr) {
              goto LABEL_55;
            }
            v34 = 40;
          }
          (*(void (**)(_QWORD*, __int64))(*v39_.v40 + v34))(v39_.v40, v6),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_55:
          if ((v41[0] & 1) == 0) {
            return false;
          }
          goto LABEL_69;
        }
      }
    }
    v24 = 32;
    goto LABEL_49;
  }
  v7 = v42_.v42;
  v41[0] = 0;
  v45 = a1;
  v42_.v42[0] = GameData_20184e8;
  v42_.v42[1] = &v45;
  v8 = *(_BYTE*)(a1 + 1536);
  v39_.v39[0] = GameData_20181d8;
  v39_.v39[1] = v41;
  v42_.v44 = v42_.v42;
  v39_.v40 = v39_.v39;
  v42_.v43 = v39_.v39;
  if ((v8 & 8) == 0) {
  LABEL_31:
    v23 = 32;
    goto LABEL_32;
  }
  v9 = *(_QWORD*)(a1 + 1496);
  v10 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v9 - v10) >> 2) < 1) {
    v7 = v42_.v42;
    goto LABEL_31;
  }
  v11 = 0;
  v12 = 0;
  v13 = GameData_212c880[0];
  v14 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                             8LL * (*(_DWORD*)(v10 + v11) & 0xFFF)) +
                  104LL) == 3) {
      if (v42_.v44 == nullptr) {
        goto LABEL_46;
      }
      (*(void (**)(_QWORD*, __int64))(*v42_.v44 + 48LL))(v42_.v44, v10 + v11),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v14 = *v13;
      v9 = *(_QWORD*)(a1 + 1496);
      v10 = *(_QWORD*)(a1 + 1488);
    }
    ++v12;
    v11 += 4;
  } while (v12 < (int)((unsigned __int64)(v9 - v10) >> 2));
  v7 = v42_.v44;
  if (v42_.v44 == v42_.v42) {
    goto LABEL_31;
  }
  if (v42_.v44 != nullptr) {
    v23 = 40;
  LABEL_32:
    (*(void (**)(_QWORD*, __int64))(*v7 + v23))(v7, v6),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v39_.v40 == v39_.v39) {
    v25 = 32;
  }
  else {
    if (v39_.v40 == nullptr) {
      goto LABEL_38;
    }
    v25 = 40;
  }
  (*(void (**)(_QWORD*, __int64))(*v39_.v40 + v25))(v39_.v40, v6),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_38:
  if ((v41[0] & 1) == 0) {
    v26 = v42_.v42;
    v41[0] = 0;
    v45 = a1;
    v42_.v42[0] = GameData_20184e8;
    v42_.v42[1] = &v45;
    v27 = *(_BYTE*)(a1 + 1536);
    v39_.v39[0] = GameData_20181d8;
    v39_.v39[1] = v41;
    v42_.v44 = v42_.v42;
    v39_.v40 = v39_.v39;
    v42_.v43 = v39_.v39;
    if ((v27 & 4) != 0) {
      v28 = *(_QWORD*)(a1 + 1496);
      v29 = *(_QWORD*)(a1 + 1488);
      if ((int)((unsigned __int64)(v28 - v29) >> 2) < 1) {
        v26 = v42_.v42;
      }
      else {
        v30 = 0;
        v31 = 0;
        v32 = GameData_212c880[0];
        v33 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v33 + 64) +
                                   8LL * (*(_DWORD*)(v29 + v30) & 0xFFF)) +
                        104LL) == 2) {
            if (v42_.v44 == nullptr) {
              goto LABEL_46;
            }
            (*(void (**)(_QWORD*, __int64))(*v42_.v44 + 48LL))(v42_.v44,
                                                               v29 + v30),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v33 = *v32;
            v28 = *(_QWORD*)(a1 + 1496);
            v29 = *(_QWORD*)(a1 + 1488);
          }
          ++v31;
          v30 += 4;
        } while (v31 < (int)((unsigned __int64)(v28 - v29) >> 2));
        v26 = v42_.v44;
        if (v42_.v44 != v42_.v42) {
          if (v42_.v44 != nullptr) {
            v35 = 40;
          LABEL_62:
            (*(void (**)(_QWORD*, __int64))(*v26 + v35))(v26, v6),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          if (v39_.v40 == v39_.v39) {
            v36 = 32;
          }
          else {
            if (v39_.v40 == nullptr) {
              goto LABEL_68;
            }
            v36 = 40;
          }
          (*(void (**)(_QWORD*, __int64))(*v39_.v40 + v36))(v39_.v40, v6),
              v6 = COERCE_AS(__typeof__(v6),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        LABEL_68:
          if (v41[0] != 1) {
            return false;
          }
          goto LABEL_69;
        }
      }
    }
    v35 = 32;
    goto LABEL_62;
  }
LABEL_69:
  v37 = *(_QWORD*)(a1 + 440);
  return v37 != 0 && *(_BYTE*)(v37 + 16) == 0 || *(_BYTE*)(a1 + 2010) == 0;
}

__int64 game_11f4940(__int64 a1, char a2, char a3)
{
  __int64 v7;
  int v8;
  int v9;
  int v10;

  if ((a2 & 1) != 0) {
    return game_11f2c20(a1, a2 & 1, a3 & 1);
  }
  if ((v7 = game_g_shared_system_skills_ptr,
       v9 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                       game_g_shared_system_skills_ptr) &
            0xFFF,
       (game_HasSkill(a1 + 1744, &v9) & 1) == 0) &&
      (*(_WORD*)(a1 + 492) != 0 || *(_BYTE*)(a1 + 496) != 0 ||
       (v10 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v7) & 0xFFF,
        (game_HasSkill(a1 + 1744, &v10) & 1) == 0)) &&
      (v8 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xB0LL) + v7 + 4) & 0xFFF,
       (game_HasSkill(a1 + 1744, &v8) & 1) == 0)) {
    return game_11f2c20(a1, a2 & 1, a3 & 1);
  }
  else {
    return 0;
  }
}

__int64 game_11f4a20(__int64 a1)
{
  __int64 v2;
  __int16 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  char v20;
  struct {
    _QWORD v21[4];
    _QWORD* v22;
  } v21_;
  __int64 v23;

  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = game_g_shared_system_skills_ptr;
  LODWORD(v21_.v21[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v21_.v21) & 1) !=
      0) {
    return 0;
  }
  if (*(_WORD*)(a1 + 492) == 0 && *(_BYTE*)(a1 + 496) == 0) {
    LODWORD(v21_.v21[0]) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v2) & 0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v21_.v21) &
         1) != 0) {
      return 0;
    }
  }
  v4 = *(_DWORD*)((char*)((_UNKNOWN*)0x4CLL) + v2);
  v5 = v21_.v21;
  LODWORD(v21_.v21[0]) = v4 & 0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v21_.v21) & 1) !=
      0) {
    return 0;
  }
  v20 = 0;
  v23 = a1;
  v21_.v22 = v21_.v21;
  v18_.v18[0] = GameData_20181d8;
  v18_.v18[1] = &v20;
  v21_.v21[0] = GameData_20184e8;
  v21_.v21[1] = &v23;
  v7 = *(_BYTE*)(a1 + 1536);
  v18_.v19 = v18_.v18;
  v21_.v21[2] = v18_.v18;
  if ((v7 & 4) == 0) {
    goto LABEL_20;
  }
  v8 = *(_QWORD*)(a1 + 1496);
  v9 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v8 - v9) >> 2) < 1) {
    v5 = v21_.v21;
  LABEL_20:
    v14 = 32;
    goto LABEL_21;
  }
  v10 = 0;
  v11 = 0;
  v12 = GameData_212c880[0];
  v13 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                             8LL * (*(_DWORD*)(v9 + v10) & 0xFFF)) +
                  104LL) == 2) {
      if (v21_.v22 == nullptr) {
        GameRoutine_60a310_alt1(),
            v6 = COERCE_AS(__typeof__(v6),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64))(*v21_.v22 + 48LL))(v21_.v22, v9 + v10),
          v6 = COERCE_AS(__typeof__(v6),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v13 = *v12;
      v8 = *(_QWORD*)(a1 + 1496);
      v9 = *(_QWORD*)(a1 + 1488);
    }
    ++v11;
    v10 += 4;
  } while (v11 < (int)((unsigned __int64)(v8 - v9) >> 2));
  v5 = v21_.v22;
  if (v21_.v22 == v21_.v21) {
    goto LABEL_20;
  }
  if (v21_.v22 != nullptr) {
    v14 = 40;
  LABEL_21:
    (*(void (**)(_QWORD*))(*v5 + v14))(v5),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v18_.v19 == v18_.v18) {
    v15 = 32;
    goto LABEL_26;
  }
  if (v18_.v19 != nullptr) {
    v15 = 40;
  LABEL_26:
    (*(void (**)(_QWORD*, __int64))(*v18_.v19 + v15))(v18_.v19, v6),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v20 == 1) {
    v16 = *(_QWORD*)(a1 + 440);
    if (v16 != 0 && *(_BYTE*)(v16 + 16) == 0) {
      return 1;
    }
    if (*(_BYTE*)(a1 + 2011) == 0) {
      return 1;
    }
  }
  return 0;
}

__int64 game_11f4c40(__int64 a1, char a2)
{
  __int64 v4;
  __int16 v6;
  _QWORD* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  char v22;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;
  __int64 v25;

  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = game_g_shared_system_skills_ptr;
  LODWORD(v23_.v23[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v23_.v23) & 1) !=
      0) {
    return 0;
  }
  if (*(_WORD*)(a1 + 492) == 0 && *(_BYTE*)(a1 + 496) == 0) {
    LODWORD(v23_.v23[0]) =
        *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v4) & 0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v23_.v23) &
         1) != 0) {
      return 0;
    }
  }
  v6 = *(_DWORD*)((char*)((_UNKNOWN*)0x4CLL) + v4);
  v7 = v23_.v23;
  LODWORD(v23_.v23[0]) = v6 & 0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)v23_.v23) & 1) !=
      0) {
    return 0;
  }
  v22 = 0;
  v25 = a1;
  v23_.v24 = v23_.v23;
  v20_.v20[0] = GameData_20181d8;
  v20_.v20[1] = &v22;
  v23_.v23[0] = GameData_20184e8;
  v23_.v23[1] = &v25;
  v9 = *(_BYTE*)(a1 + 1536);
  v20_.v21 = v20_.v20;
  v23_.v23[2] = v20_.v20;
  if ((v9 & 0x20) == 0) {
    goto LABEL_19;
  }
  v10 = *(_QWORD*)(a1 + 1496);
  v11 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v10 - v11) >> 2) < 1) {
    goto LABEL_19;
  }
  v12 = 0;
  v13 = 0;
  v14 = GameData_212c880[0];
  v15 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                             8LL * (*(_DWORD*)(v11 + v12) & 0xFFF)) +
                  104LL) == 5) {
      if (v23_.v24 == nullptr) {
        GameRoutine_60a310_alt1(),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*, __int64))(*v23_.v24 + 48LL))(v23_.v24, v11 + v12),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v15 = *v14;
      v10 = *(_QWORD*)(a1 + 1496);
      v11 = *(_QWORD*)(a1 + 1488);
    }
    ++v13;
    v12 += 4;
  } while (v13 < (int)((unsigned __int64)(v10 - v11) >> 2));
  v7 = v23_.v24;
  if (v23_.v24 == v23_.v23) {
  LABEL_19:
    v16 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_21;
    }
    v16 = 40;
  }
  (*(void (**)(_QWORD*))(*v7 + v16))(v7),
      v8 = COERCE_AS(__typeof__(v8),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_21:
  if (v20_.v21 == v20_.v20) {
    v17 = 32;
    goto LABEL_25;
  }
  if (v20_.v21 != nullptr) {
    v17 = 40;
  LABEL_25:
    (*(void (**)(_QWORD*, __int64))(*v20_.v21 + v17))(v20_.v21, v8),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  if (v22 == 1) {
    if ((a2 & 1) != 0) {
      return 1;
    }
    v18 = *(_QWORD*)(a1 + 440);
    if (v18 != 0 && *(_BYTE*)(v18 + 16) == 0) {
      return 1;
    }
    if (*(_BYTE*)(a1 + 2012) == 0) {
      return 1;
    }
  }
  return 0;
}

__int64 game_11f4e60(__int64 a1)
{
  __int64 v2;
  __int16 v4;
  _QWORD* v5;
  __int64 v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v18[4];
  _QWORD* v19;
  char v20;
  _QWORD v21[4];
  _QWORD* v22;
  __int64 v23;

  v2 = game_g_shared_system_skills_ptr;
  LODWORD(v21[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
  if ((game_HasSkill(a1 + 1744, v21) & 1) != 0) {
    return 0;
  }
  if (*(_WORD*)(a1 + 492) == 0 && *(_BYTE*)(a1 + 496) == 0) {
    LODWORD(v21[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v2) & 0xFFF;
    if ((game_HasSkill(a1 + 1744, v21) & 1) != 0) {
      return 0;
    }
  }
  v4 = *(_DWORD*)((char*)((_UNKNOWN*)0x4CLL) + v2);
  v5 = v21;
  LODWORD(v21[0]) = v4 & 0xFFF;
  if ((game_HasSkill(a1 + 1744, v21) & 1) != 0) {
    return 0;
  }
  v20 = 0;
  v23 = a1;
  v22 = v21;
  v18[0] = GameData_20181d8;
  v18[1] = &v20;
  v21[0] = GameData_20184e8;
  v21[1] = &v23;
  v7 = *(_BYTE*)(a1 + 1536);
  v19 = v18;
  v21[2] = v18;
  if ((v7 & 0x40) == 0) {
    goto LABEL_20;
  }
  v8 = *(_QWORD*)(a1 + 1496);
  v9 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v8 - v9) >> 2) < 1) {
    v5 = v21;
  LABEL_20:
    v14 = 32;
    goto LABEL_21;
  }
  v10 = 0;
  v11 = 0;
  v12 = GameData_212c880[0];
  v13 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                             8LL * (*(_DWORD*)(v9 + v10) & 0xFFF)) +
                  104LL) == 6) {
      if (v22 == nullptr) {
        GameRoutine_60a310(0, v6);
      }
      (*(void (**)(_QWORD*, __int64))(*v22 + 48LL))(v22, v9 + v10);
      v13 = *v12;
      v8 = *(_QWORD*)(a1 + 1496);
      v9 = *(_QWORD*)(a1 + 1488);
    }
    ++v11;
    v10 += 4;
  } while (v11 < (int)((unsigned __int64)(v8 - v9) >> 2));
  v5 = v22;
  if (v22 == v21) {
    goto LABEL_20;
  }
  if (v22 != nullptr) {
    v14 = 40;
  LABEL_21:
    (*(void (**)(_QWORD*))(*v5 + v14))(v5);
  }
  if (v19 == v18) {
    v15 = 32;
    goto LABEL_26;
  }
  if (v19 != nullptr) {
    v15 = 40;
  LABEL_26:
    (*(void (**)(_QWORD*, __int64))(*v19 + v15))(v19, v6);
  }
  if (v20 == 1) {
    v16 = *(_QWORD*)(a1 + 440);
    if (v16 != 0 && *(_BYTE*)(v16 + 16) == 0) {
      return 1;
    }
    if ((*(char*)(a1 + 2008) & 0x80000000) == 0 && *(_BYTE*)(a1 + 2009) == 0) {
      return 1;
    }
  }
  return 0;
}

bool game_11f5070(__int64 a1)
{
  __int64 v5;
  int v6;
  int v7;
  int v8;

  if (*(int*)(a1 + 592) > 1) {
    return false;
  }
  v5 = game_g_shared_system_skills_ptr;
  v7 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                  game_g_shared_system_skills_ptr) &
       0xFFF;
  if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v7) & 1) != 0) {
    return false;
  }
  if (*(_WORD*)(a1 + 492) == 0 && *(_BYTE*)(a1 + 496) == 0) {
    v8 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v5) & 0xFFF;
    if ((game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v8) & 1) !=
        0) {
      return false;
    }
  }
  if ((*(_BYTE*)(a1 + 416) & 4) != 0) {
    return false;
  }
  v6 = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v5) & 0xFFF;
  return (game_HasSkill_alt1((_QWORD*)(a1 + 1744), (unsigned int*)&v6) & 1) ==
             0 &&
         (signed __int32)*(_DWORD*)(GameData_21cd108 + 52) > 0;
}

bool game_11f5140(__int64 a1)
{
  __int64 v2;
  int v5;
  int v6;
  int v7;

  v2 = game_g_shared_system_skills_ptr;
  v6 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x44LL) +
                  game_g_shared_system_skills_ptr) &
       0xFFF;
  if ((game_HasSkill(a1 + 1744, &v6) & 1) != 0) {
    return true;
  }
  if (*(_WORD*)(a1 + 492) == 0 && *(_BYTE*)(a1 + 496) == 0) {
    v7 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + v2) & 0xFFF;
    if ((game_HasSkill(a1 + 1744, &v7) & 1) != 0) {
      return true;
    }
  }
  if ((*(_BYTE*)(a1 + 416) & 4) != 0) {
    return true;
  }
  v5 = *(_DWORD*)((_BYTE*)((char*)0x40LL) + v2) & 0xFFF;
  return (game_HasSkill(a1 + 1744, &v5) & 1) != 0 ||
         (*(_BYTE*)(a1 + 1976) & 0x40) != 0;
}

__int64 game_11f51f0(__int64 a1, int a2, int a3)
{
  unsigned int v3;
  __int64 v5;
  __int64* v6;
  int v7;
  __int16 v8;
  __int16 v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  char v20;
  __int16 v21;
  int v22;
  int v23;
  __int64 v24;
  char v25;
  __int16 v26;
  int v27;
  __int16 v28;
  __int64 v29;
  __int16 v30;
  unsigned int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int16 v47;
  __int16 v48;
  __int16 v49;
  __int16 v50;
  __int64 v51;
  __int16 v52;
  int v53;
  int v54;

  v3 = a2 + 32 * a3;
  if (v3 >= 0x400) {
    v5 = 0;
  }
  else {
    v5 = v3;
  }
  if (*(int*)(a1 + 592) > 1) {
    v6 = GameData_212c930;
  LABEL_6:
    v7 = 0;
    v49 = 0;
    v50 = 0;
    v47 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v51 = 0;
    v52 = 0;
    v48 = 0;
    v46 = 0;
    goto LABEL_7;
  }
  v6 = GameData_212c930;
  v19 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2LL * (unsigned int)v5 + 8));
  v53 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x7CLL) +
                   game_g_shared_system_skills_ptr + 4) &
        0xFFF;
  v20 = game_HasSkill(a1 + 1744, &v53);
  v7 = 0;
  if (v19 == 0) {
    v49 = 0;
    v50 = 0;
    v47 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    LOWORD(v51) = 0;
    WORD2(v51) = 0;
    v52 = 0;
    v48 = 0;
    v46 = 0;
    goto LABEL_7;
  }
  v49 = 0;
  v50 = 0;
  v47 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  LOWORD(v51) = 0;
  WORD2(v51) = 0;
  v52 = 0;
  v48 = 0;
  v46 = 0;
  if ((v20 & 1) == 0) {
    if ((game_68e4c0(v19, a1) & 1) == 0) {
      goto LABEL_6;
    }
    v8 = *(_WORD*)(v19 + 84);
    v21 = *(_WORD*)(v19 + 92);
    v49 = *(_WORD*)(v19 + 80);
    v50 = *(_WORD*)(v19 + 78);
    v47 = *(_WORD*)(v19 + 82);
    LOWORD(v51) = *(_WORD*)(v19 + 86);
    WORD2(v51) = *(_WORD*)(v19 + 88);
    v52 = *(_WORD*)(v19 + 90);
    v48 = *(_WORD*)(v19 + 94);
    v22 = game_68eb90(v19, a1);
    v23 = game_68ece0(v19, a1);
    v24 = *(_QWORD*)(a1 + 440);
    v10 = v22 - v23;
    if (v24 != 0 && *(_BYTE*)(v24 + 16) == 0) {
      v9 = v21;
      v46 = game_68ee30(v19, a1);
    }
    else {
      v9 = v21;
      v46 = 0;
    }
    v11 = *(unsigned __int8*)(v19 + 71);
    v12 = *(unsigned __int8*)(v19 + 75);
    v7 = 1;
  }
LABEL_7:
  v13 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v14 = *(__int16*)(v13 + 2 * v5 + 104);
  if (v14 < 0 || (v15 = *(_QWORD*)(v13 + 8)) == 0 ||
      (v16 = v15 + 144LL * (unsigned int)v14,
       (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16) != 2) ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16) & 1) == 0 ||
      (v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 224LL))(v16)) == 0) {
    v17 = **(_QWORD**)(*v6 + 64);
  }
  if (*(int*)(a1 + 592) <= 1 &&
      (v54 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x7CLL) +
                        game_g_shared_system_skills_ptr + 4) &
             0xFFF,
       v25 = game_HasSkill(a1 + 1744, &v54), v17 != 0) &&
      (v25 & 1) == 0 && (game_68e4c0(v17, a1) & 1) != 0) {
    v50 += *(_WORD*)(v17 + 78);
    v49 += *(_WORD*)(v17 + 80);
    v47 += *(_WORD*)(v17 + 82);
    v8 += *(_WORD*)(v17 + 84);
    LOWORD(v51) = *(_WORD*)(v17 + 86) + v51;
    WORD2(v51) += *(_WORD*)(v17 + 88);
    v52 += *(_WORD*)(v17 + 90);
    v26 = *(_WORD*)(v17 + 92) + v9;
    v48 += *(_WORD*)(v17 + 94);
    v27 = v10 + game_68eb90(v17, a1);
    v28 = game_68ece0(v17, a1);
    v29 = *(_QWORD*)(a1 + 440);
    LOWORD(v10) = v27 - v28;
    if (v29 != 0 && *(_BYTE*)(v29 + 16) == 0) {
      v9 = v26;
      v46 += game_68ee30(v17, a1);
    }
    else {
      v9 = v26;
    }
    v11 += *(unsigned __int8*)(v17 + 71);
    v12 += *(unsigned __int8*)(v17 + 75);
  }
  else if (v7 == 0) {
    return 0;
  }
  v30 = v47;
  if (v47 <= v8) {
    v30 = v8;
  }
  if (((unsigned __int16)(v50 | v48 | v49 | v47 | v8 | v51 | WORD2(v51)) |
       (unsigned __int16)(v52 | v9 | v10 | v46)) == 0 &&
      v11 == 0 && v12 == 0) {
    return 5;
  }
  v33 = v49;
  if (v50 > v49) {
    v33 = v50;
  }
  if (v33 == 0) {
  LABEL_47:
    if (v30 != 0) {
      goto LABEL_48;
    }
  LABEL_64:
    v34 = 0;
    if ((_WORD)v51 != 0) {
      goto LABEL_50;
    }
  LABEL_65:
    v35 = 0;
    if (WORD2(v51) == 0) {
      goto LABEL_66;
    }
    goto LABEL_52;
  }
  if ((__int16)v33 >= 1) {
    v33 = (v33 + 1) >> 1;
    goto LABEL_47;
  }
  v33 = -((1 - v33) >> 1);
  if (v30 == 0) {
    goto LABEL_64;
  }
LABEL_48:
  if (v30 < 1) {
    v34 = -((unsigned int)(1 - v30) >> 1);
    if ((_WORD)v51 != 0) {
      goto LABEL_50;
    }
    goto LABEL_65;
  }
  v34 = (unsigned int)(v30 + 1) >> 1;
  if ((_WORD)v51 == 0) {
    goto LABEL_65;
  }
LABEL_50:
  if ((__int16)v51 >= 1) {
    v35 = (((9363 * (unsigned int)(unsigned __int16)(v51 + 6)) >> 16) +
           ((unsigned __int16)((v51 + 6 -
                                ((9363 *
                                  (unsigned int)(unsigned __int16)(v51 + 6)) >>
                                 16)) &
                               0xFFFE) >>
            1)) >>
          2;
    if (WORD2(v51) != 0) {
      goto LABEL_52;
    }
  LABEL_66:
    v36 = 0;
    if (v52 != 0) {
      goto LABEL_54;
    }
  LABEL_67:
    v37 = 0;
    if (v9 == 0) {
      goto LABEL_68;
    }
    goto LABEL_56;
  }
  v35 = -((((9363 * (unsigned int)(unsigned __int16)(6 - v51)) >> 16) +
           ((unsigned __int16)((6 - v51 -
                                ((9363 *
                                  (unsigned int)(unsigned __int16)(6 - v51)) >>
                                 16)) &
                               0xFFFE) >>
            1)) >>
          2);
  if (WORD2(v51) == 0) {
    goto LABEL_66;
  }
LABEL_52:
  if (SWORD2(v51) < 1) {
    v36 = -(
        (((9363 * (unsigned int)(unsigned __int16)(6 - WORD2(v51))) >> 16) +
         ((unsigned __int16)((6 - WORD2(v51) -
                              ((9363 *
                                (unsigned int)(unsigned __int16)(6 -
                                                                 WORD2(v51))) >>
                               16)) &
                             0xFFFE) >>
          1)) >>
        2);
    if (v52 != 0) {
      goto LABEL_54;
    }
    goto LABEL_67;
  }
  v36 = (((9363 * (unsigned int)(unsigned __int16)(WORD2(v51) + 6)) >> 16) +
         ((unsigned __int16)((WORD2(v51) + 6 -
                              ((9363 *
                                (unsigned int)(unsigned __int16)(WORD2(v51) +
                                                                 6)) >>
                               16)) &
                             0xFFFE) >>
          1)) >>
        2;
  if (v52 == 0) {
    goto LABEL_67;
  }
LABEL_54:
  if (v52 >= 1) {
    v37 = (((9363 * (unsigned int)(unsigned __int16)(v52 + 6)) >> 16) +
           ((unsigned __int16)((v52 + 6 -
                                ((9363 *
                                  (unsigned int)(unsigned __int16)(v52 + 6)) >>
                                 16)) &
                               0xFFFE) >>
            1)) >>
          2;
    if (v9 != 0) {
      goto LABEL_56;
    }
  LABEL_68:
    v38 = 0;
    if ((_WORD)v10 != 0) {
      goto LABEL_58;
    }
  LABEL_69:
    v39 = 0;
    if (v11 == 0) {
      goto LABEL_70;
    }
    goto LABEL_60;
  }
  v37 = -((((9363 * (unsigned int)(unsigned __int16)(6 - v52)) >> 16) +
           ((unsigned __int16)((6 - v52 -
                                ((9363 *
                                  (unsigned int)(unsigned __int16)(6 - v52)) >>
                                 16)) &
                               0xFFFE) >>
            1)) >>
          2);
  if (v9 == 0) {
    goto LABEL_68;
  }
LABEL_56:
  if (v9 < 1) {
    v38 = -((((9363 * (unsigned int)(unsigned __int16)(6 - v9)) >> 16) +
             ((unsigned __int16)((6 - v9 -
                                  ((9363 *
                                    (unsigned int)(unsigned __int16)(6 - v9)) >>
                                   16)) &
                                 0xFFFE) >>
              1)) >>
            2);
    if ((_WORD)v10 != 0) {
      goto LABEL_58;
    }
    goto LABEL_69;
  }
  v38 = (((9363 * (unsigned int)(unsigned __int16)(v9 + 6)) >> 16) +
         ((unsigned __int16)((v9 + 6 -
                              ((9363 *
                                (unsigned int)(unsigned __int16)(v9 + 6)) >>
                               16)) &
                             0xFFFE) >>
          1)) >>
        2;
  if ((_WORD)v10 == 0) {
    goto LABEL_69;
  }
LABEL_58:
  if ((__int16)v10 >= 1) {
    v39 = (unsigned __int16)(v10 + 9) / 0xAu;
    if (v11 != 0) {
      goto LABEL_60;
    }
  LABEL_70:
    LODWORD(v40) = 0;
    if (v12 != 0) {
      goto LABEL_61;
    }
  LABEL_71:
    LODWORD(v41) = 0;
    goto LABEL_72;
  }
  v39 = -((unsigned __int16)(9 - v10) / 0xAu);
  if (v11 == 0) {
    goto LABEL_70;
  }
LABEL_60:
  v40 = (429496730 * (unsigned __int64)(unsigned int)(v11 + 9)) >> 32;
  if (v12 == 0) {
    goto LABEL_71;
  }
LABEL_61:
  v41 = (1431655766 * (unsigned __int64)(unsigned int)(v12 + 2)) >> 32;
LABEL_72:
  v42 = v33 + v34 + v35;
  if ((__int16)v46 > 0) {
    v43 = 4;
  }
  else {
    v43 = 5;
  }
  v44 = v42 + v36 + v43 + v37 + v38 + v39 - (v40 + v41);
  v45 = v44 & ~(v44 >> 31);
  if (v45 >= 15) {
    return 15;
  }
  else {
    return (unsigned int)v45;
  }
}

__int64 game_11f5940(__int64 result, int a2, int a3, unsigned __int8 a4,
                     bool* a5)
{
  __int64 v5;
  int v6;
  __int64 v7;
  char v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8 v18;
  char v19;
  bool* v20;
  __int64 v21;
  bool v22;
  int v23;

  if (*(_BYTE*)(*GameData_212ce90[0] +
                *(unsigned __int8*)(*GameData_212ce90[0] + 24) + 16) != 1 ||
      *(_QWORD*)GameData_212d290 != 0 &&
          (*(_BYTE*)(*(_QWORD*)GameData_212d290 + 30LL) & 1) != 0 ||
      (v5 = *(_QWORD*)(result + 440)) == 0 || *(_BYTE*)(v5 + 16) != 0) {
    *(_WORD*)a5 = 0;
    a5[2] = false;
  }
  else {
    v6 = a2 + 32 * a3;
    v7 = result;
    v10 = a2;
    v11 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
    if ((unsigned int)v6 >= 0x400) {
      v12 = 0;
    }
    else {
      v12 = a2 + 32 * a3;
    }
    v13 = *(__int16*)(v11 + 2LL * v12 + 104);
    v14 = GameData_212c930;
    if (v13 < 0 || (v15 = *(_QWORD*)(v11 + 8)) == 0 ||
        (v16 = v15 + 144LL * (unsigned int)v13,
         (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v16 + 40LL))(v16) != 2) ||
        ((*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16) & 1) == 0 ||
        (v17 = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 224LL))(v16)) == 0) {
      v17 = **(_QWORD**)(*v14 + 64);
    }
    result = game_68e930(v17, v7);
    if (result != 0) {
      v18 = a4;
      v19 = v10;
      v20 = a5;
      if (*(_BYTE*)(result + 57) == 9) {
        v21 = *(_QWORD*)(*v14 + 64);
        v22 =
            result == *(_QWORD*)(v21 + 8LL * *(int*)GameData_2130930[0]) ||
            result ==
                *(_QWORD*)(v21 + 8LL * *((int*)GameData_2130930[0] + 1)) ||
            result ==
                *(_QWORD*)(v21 + 8LL * *(int*)((char*)GameData_2130930[0] +
                                               (unsigned __int64)((
                                                   _UNKNOWN**)0x8LL))) ||
            result ==
                *(_QWORD*)(v21 +
                           8LL * *(int*)((char*)GameData_2130930[0] +
                                         (unsigned __int64)((_UNKNOWN**)0x8LL) +
                                         4)) ||
            result ==
                *(_QWORD*)(v21 + 8LL * *(int*)((char*)GameData_2130930[0] +
                                               (unsigned __int64)((
                                                   __int128*)0x10LL))) ||
            result ==
                *(_QWORD*)(v21 +
                           8LL * *(int*)((char*)GameData_2130930[0] +
                                         (unsigned __int64)((__int128*)0x10LL) +
                                         4)) ||
            result ==
                *(_QWORD*)(v21 +
                           8LL * *(int*)((char*)GameData_2130930[0] +
                                         (unsigned __int64)((__int128*)0x10LL) +
                                         8)) ||
            result ==
                *(_QWORD*)(v21 +
                           8LL * *(int*)((char*)GameData_2130930[0] +
                                         (unsigned __int64)((__int128*)0x10LL) +
                                         12)) ||
            result ==
                *(_QWORD*)(v21 +
                           8LL * *(int*)((char*)GameData_2130930[0] +
                                         (unsigned __int64)((char*)0x20LL)));
      }
      else {
        v22 = false;
      }
    }
    else {
      v22 = false;
      v20 = a5;
      v18 = a4;
      v19 = v10;
    }
    *v20 = v22;
    v20[1] = (*(_DWORD*)(*(_QWORD*)GameData_21306c8[0] + 4LL * (v6 >> 5) + 8) >>
              v19) &
             1;
    v23 = 3 * *(__int16*)(v7 + 492) / 4;
    if (v23 <= 1) {
      v23 = 1;
    }
    v20[2] = v23 <= (unsigned int)v18;
  }
  return result;
}

__int64 game_11f5d20(unsigned int a1, unsigned int a2, int a3, unsigned int* a4,
                     unsigned int* a5)
{
  unsigned int v5;
  unsigned int v6;
  __int64 v8;
  int v9;
  unsigned int v10;
  __int64* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  bool v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  bool v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  int v35;
  unsigned int v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  __int64* v41;
  int v42;
  unsigned int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v49;
  __int64 v50;
  unsigned int* v51;
  int v52;
  unsigned int* v53;
  int v54;
  unsigned int v55;
  unsigned int v56;
  unsigned int v57;
  unsigned int v58;
  int v59;
  int v60;
  unsigned int* v61;
  unsigned int* v62;
  unsigned int v63;
  int v64;

  v5 = a1 + 32 * a2;
  v6 = a2;
  v8 = GameData_21306a0[0];
  if (a3 <= 0) {
    v49 = v5 >= 0x400 ? 0LL : v5;
    v50 = *(_QWORD*)(*(_QWORD*)GameData_21306a0[0] + 8LL);
    if (*(unsigned __int8*)(v50 + v49 + 64) != 255) {
      v51 = a4;
      v52 = a3;
      v53 = a5;
      v54 = GameRoutine_747df0(v50, a1, a2, *(unsigned __int8*)(v50 + 5));
      a4 = v51;
      a5 = v53;
      a3 = v52;
      if (v54 != 255) {
        if (v51 != nullptr) {
          *v51 = a1;
        }
        if (v53 != nullptr) {
          *v53 = v6;
        }
        return *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v8 + 12880LL) + v49 +
                                   64);
      }
    }
  }
  v61 = a4;
  v62 = a5;
  if (a3 <= 1) {
    v9 = 1;
  }
  else {
    v9 = a3;
  }
  v10 = v5 - v9;
  v59 = -v9;
  v57 = v5 + v9;
  v58 = v5 - 32 * v9;
  v56 = a1 + 32 * (v6 + v9);
  v11 = GameData_212ce98[0];
  do {
    v12 = -v9;
    v60 = v9;
    v55 = v10;
    v13 = v10;
    v14 = v6;
    v15 = -v9;
    v64 = 100;
    do {
      v17 = a1 + v15;
      if (*(unsigned __int8*)(*v11 + 26) >
              (unsigned int)(unsigned __int8)(a1 + v15 -
                                              *(_BYTE*)(*v11 + 24)) &&
          *(unsigned __int8*)(*v11 + 27) >
              (unsigned int)(unsigned __int8)(v14 - *(_BYTE*)(*v11 + 25))) {
        v18 = v13 >= 0x400 ? 0LL : v13;
        v19 = *(_QWORD*)(*(_QWORD*)v8 + 8LL);
        if (*(unsigned __int8*)(v19 + v18 + 64) != 255 &&
            (unsigned int)GameRoutine_747df0(
                v19, v17, v14, *(unsigned __int8*)(v19 + 5)) != 255) {
          v20 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v8 + 12880LL) + v18 +
                                    64);
          if (v64 >= v20) {
            if (v61 != nullptr) {
              *v61 = v17;
            }
            if (v62 != nullptr) {
              *v62 = v14;
            }
            v64 = v20;
          }
        }
      }
      --v14;
      v13 -= 31;
      v16 = __CFADD__(v15++, 1);
    } while (!v16);
    v21 = v58;
    v22 = v59;
    v23 = a1;
    do {
      if (*(unsigned __int8*)(*v11 + 26) >
          (unsigned int)(unsigned __int8)(v23 - *(_BYTE*)(*v11 + 24))) {
        v24 = v6 + v22;
        if (*(unsigned __int8*)(*v11 + 27) >
            (unsigned int)(unsigned __int8)(v6 + v22 - *(_BYTE*)(*v11 + 25))) {
          v25 = v21 >= 0x400 ? 0LL : v21;
          v26 = *(_QWORD*)(*(_QWORD*)v8 + 8LL);
          if (*(unsigned __int8*)(v26 + v25 + 64) != 255 &&
              (unsigned int)GameRoutine_747df0(
                  v26, v23, v24, *(unsigned __int8*)(v26 + 5)) != 255) {
            v27 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v8 + 12880LL) + v25 +
                                      64);
            if (v64 >= v27) {
              if (v61 != nullptr) {
                *v61 = v23;
              }
              if (v62 != nullptr) {
                *v62 = v24;
              }
              v64 = v27;
            }
          }
        }
      }
      v16 = __CFADD__(v22++, 1);
      v21 += 33;
      ++v23;
    } while (!v16);
    v28 = v57;
    v29 = v60;
    v30 = v6;
    do {
      v32 = a1 + v29;
      if (*(unsigned __int8*)(*v11 + 26) >
              (unsigned int)(unsigned __int8)(a1 + v29 -
                                              *(_BYTE*)(*v11 + 24)) &&
          *(unsigned __int8*)(*v11 + 27) >
              (unsigned int)(unsigned __int8)(v30 - *(_BYTE*)(*v11 + 25))) {
        v33 = v28 >= 0x400 ? 0LL : v28;
        v34 = *(_QWORD*)(*(_QWORD*)v8 + 8LL);
        if (*(unsigned __int8*)(v34 + v33 + 64) != 255 &&
            (unsigned int)GameRoutine_747df0(
                v34, v32, v30, *(unsigned __int8*)(v34 + 5)) != 255) {
          v35 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)v8 + 12880LL) + v33 +
                                    64);
          if (v64 >= v35) {
            if (v61 != nullptr) {
              *v61 = v32;
            }
            if (v62 != nullptr) {
              *v62 = v30;
            }
            v64 = v35;
          }
        }
      }
      v31 = __OFSUB__(v29--, 1);
      ++v30;
      v28 += 31;
    } while (!((v29 < 0) ^ v31 | (v29 == 0)));
    v36 = v56;
    v37 = 0;
    v38 = v6 + v60;
    v63 = v6 + v60;
    do {
      v39 = a1 + v37;
      if (*(unsigned __int8*)(*v11 + 26) >
          (unsigned int)(unsigned __int8)(a1 + v37 - *(_BYTE*)(*v11 + 24))) {
        v40 = v38 + v37;
        if (*(unsigned __int8*)(*v11 + 27) >
            (unsigned int)(unsigned __int8)(v38 + v37 - *(_BYTE*)(*v11 + 25))) {
          v41 = v11;
          v42 = v12;
          v43 = v6;
          if (v36 >= 0x400) {
            v44 = 0;
          }
          else {
            v44 = v36;
          }
          v45 = *(_QWORD*)(*(_QWORD*)v8 + 8LL);
          if (*(unsigned __int8*)(v45 + v44 + 64) == 255) {
            goto LABEL_53;
          }
          if ((unsigned int)GameRoutine_747df0(
                  v45, v39, v40, *(unsigned __int8*)(v45 + 5)) == 255) {
            v38 = v63;
          LABEL_53:
            v6 = v43;
            v12 = v42;
            v11 = v41;
            goto LABEL_54;
          }
          v38 = v63;
          v46 = *(_QWORD*)(*(_QWORD*)v8 + 12880LL) + v44;
          v6 = v43;
          v12 = v42;
          v11 = v41;
          v47 = *(unsigned __int8*)(v46 + 64);
          if (v64 >= v47) {
            if (v61 != nullptr) {
              *v61 = v39;
            }
            if (v62 != nullptr) {
              *v62 = v40;
            }
            v64 = v47;
          }
        }
      }
    LABEL_54:
      --v37;
      v36 -= 33;
    } while (v37 > v12);
    if (v64 != 100) {
      return (unsigned int)(v64 + v60);
    }
    v9 = v60 + 1;
    --v59;
    v58 -= 32;
    v10 = v55 - 1;
    ++v57;
    v56 += 32;
  } while (v60 + 1 < *(unsigned __int8*)(*v11 + 19) +
                         (unsigned int)*(unsigned __int8*)(*v11 + 18));
  if (v61 != nullptr) {
    *v61 = a1;
  }
  if (v62 != nullptr) {
    *v62 = v6;
  }
  return 100;
}

__int64 game_120c460()
{
  __int64 v0;
  __int64* v1;
  __int64* v2;
  int v3;
  unsigned int v4;
  unsigned int v5;
  int v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (*GameData_212ce90[0] != 0 && *(_BYTE*)(*GameData_212ce90[0] + 24) == 0) {
    v0 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556000LL);
    if (v0 != 0) {
      v1 = game_map_MapRandom_instance__ptr[0];
      v2 = GameData_21309c8[0];
      do {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
        v3 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1 + 8);
        v4 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1 + 12);
        v5 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1) ^
             (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1 + 4) = v3;
        v6 = (v5 >> 8) ^ (v4 >> 19) ^ v5 ^ v4;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1 + 8) = v4;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1 + 12) = v6;
        result = nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
        v8 = *v2;
        *(_BYTE*)(v0 + 1980) = v6;
        if (v8 != 0 && *(_BYTE*)(v8 + 8) == 1 && (*(_BYTE*)(v8 + 9) & 1) == 0) {
          v9 = *(_QWORD*)(v0 + 440);
          if (v9 != 0 && *(unsigned __int8*)(v9 + 16) <= 8u &&
              game_map_UnitFlags_instance_ != 0) {
            v10 = *(unsigned __int8*)(v0 + 2088);
            if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v10) & 1) != 0) {
              *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v10) |= 2u;
            }
          }
        }
        v0 = *(_QWORD*)(v0 + 432);
      } while (v0 != 0);
    }
  }
  return result;
}

__int64 game_120c6c0(__int64 a1, signed int a2, char a3)
{
  _WORD* v3;
  __int64 v4;
  __int64 v5;
  __int64* v9;
  _QWORD* v10;
  char v11;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  char v23;
  char v24;
  int v25;
  struct {
    _QWORD v26[4];
    _QWORD* v27;
  } v26_;
  char v28;
  __int64 v29;
  struct {
    _QWORD v30[4];
    _QWORD* v31;
  } v30_;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;

  v3 = (_WORD*)(a1 + 828);
  v4 = *(_QWORD*)(a1 + 828 + 8LL * a2);
  v29 = v4;
  if ((_WORD)v4 == 0) {
    goto LABEL_3;
  }
  v5 = (unsigned __int16)v4;
  v9 = GameData_212c878[0];
  v10 = (_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * (unsigned __int16)v4) +
                             24LL) +
                  8LL);
  LODWORD(v32_.v32[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C0LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF;
  if ((game_HasSkill_alt1(v10, (unsigned int*)v32_.v32) & 1) != 0) {
    goto LABEL_3;
  }
  v11 = game_Unit_CheckEquipment(a1);
  v13 = *v9;
  v14 = 0;
  while (1) {
    v15 = a1 + v14;
    if (*(_WORD*)(a1 + v14 + 828) != 0 && (*(_BYTE*)(v15 + 831) & 1) != 0) {
      v16 = *(_QWORD*)(v13 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v16 +
                                         8LL * *(unsigned __int16*)(a1 + v14 +
                                                                    828)) +
                              72LL) < 8u) {
        break;
      }
    }
    v17 = *(unsigned __int16*)(v15 + 836);
    if (v17 != 0 && (*(_BYTE*)(a1 + v14 + 839) & 1) != 0) {
      v16 = *(_QWORD*)(v13 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v16 + 8 * v17) + 72LL) < 8u) {
        break;
      }
    }
    if (*(_WORD*)(a1 + v14 + 844) != 0 &&
        (*(_BYTE*)(a1 + v14 + 847) & 1) != 0) {
      v16 = *(_QWORD*)(v13 + 64);
      if (*(unsigned __int8*)(*(_QWORD*)(v16 +
                                         8LL * *(unsigned __int16*)(a1 + v14 +
                                                                    844)) +
                              72LL) < 8u) {
        break;
      }
    }
    v14 += 24;
    if (v14 == 240) {
      v18 =
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) + 8 * v5) + 72LL);
      if (v18 > 7) {
        goto LABEL_20;
      }
      v11 = game_Unit_EquipItem_6d8f40(a1, a2);
      v16 = *(_QWORD*)(*v9 + 64);
      break;
    }
  }
  v18 = *(unsigned __int8*)(*(_QWORD*)(v16 + 8 * v5) + 72LL);
LABEL_20:
  if (v18 != 13) {
    goto LABEL_38;
  }
  v28 = 0;
  v26_.v26[1] = &v28;
  v26_.v26[2] = &v29;
  v26_.v26[0] = GameData_2019648;
  v26_.v27 = v26_.v26;
  v30_.v30[0] = GameData_1f93088;
  v30_.v30[1] = v26_.v26;
  v30_.v31 = v30_.v30;
  v32_.v32[2] = v30_.v30;
  v32_.v33 = v32_.v32;
  v32_.v32[0] = GameData_1f92f88;
  v32_.v32[1] = 13;
  game_UnitItemList_EachItem(v3, (__int64)v32_.v32);
  if (v32_.v33 == v32_.v32) {
    v19 = 32;
  }
  else {
    if (v32_.v33 == nullptr) {
      goto LABEL_26;
    }
    v19 = 40;
  }
  (*(void (**)(__int64))(*v32_.v33 + v19))((__int64)v32_.v33);
LABEL_26:
  if (v30_.v31 == v30_.v30) {
    v20 = 32;
  }
  else {
    if (v30_.v31 == nullptr) {
      goto LABEL_31;
    }
    v20 = 40;
  }
  (*(void (**)(__int64))(*v30_.v31 + v20))((__int64)v30_.v31);
LABEL_31:
  if (v26_.v27 == v26_.v26) {
    v21 = 32;
    goto LABEL_35;
  }
  if (v26_.v27 != nullptr) {
    v21 = 40;
  LABEL_35:
    (*(void (**)(__int64))(*v26_.v27 + v21))((__int64)v26_.v27);
  }
  if (v28 == 1) {
  LABEL_3:
    v11 = 0;
    return v11 & 1;
  }
  v11 = game_Unit_EquipItem_6d8f40(a1, a2);
LABEL_38:
  if ((a3 & 1) != 0) {
    v22 = v11;
    v23 = game_UnitItemList_Sort((__int64)v3, 0, 6);
    v24 = game_UnitItemList_Sort((__int64)v3, 6u, 24);
    if ((v23 & 1) != 0 || (v24 & 1) != 0) {
      v25 = *(_DWORD*)(a1 + 416);
      if ((v25 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v25 | 0x10000000;
        game_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        game_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
    }
    v11 = v22;
  }
  return v11 & 1;
}

__int64 game_120c9c0(__int64 result, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  int v16;

  v3 = result;
  v4 = 0;
  v5 = GameData_212c878[0];
  v6 = *GameData_212c878[0];
  while (1) {
    v7 = result + v4;
    if (*(_WORD*)(result + v4 + 828) != 0 && (*(_BYTE*)(v7 + 831) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                       8LL * *(unsigned __int16*)(result + v4 +
                                                                  828)) +
                            72LL) < 8u) {
      break;
    }
    v8 = *(unsigned __int16*)(v7 + 836);
    if (v8 != 0 && (*(_BYTE*)(result + v4 + 839) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) + 8 * v8) + 72LL) <
            8u) {
      break;
    }
    if (*(_WORD*)(result + v4 + 844) != 0 &&
        (*(_BYTE*)(result + v4 + 847) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v6 + 64) +
                                       8LL * *(unsigned __int16*)(result + v4 +
                                                                  844)) +
                            72LL) < 8u) {
      break;
    }
    v4 += 24;
    if (v4 == 240) {
      v9 = 0;
      v10 = game_g_shared_system_skills_ptr;
      while (1) {
        v11 = v3 + 8 * v9;
        v12 = *(unsigned __int16*)(v11 + 828);
        if (*(_WORD*)(v11 + 828) != 0) {
          v13 = *(_QWORD*)(*v5 + 64);
          v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C0LL) + v10) & 0xFFF;
          result = game_HasSkill(
              *(_QWORD*)(*(_QWORD*)(v13 + 8 * v12) + 24LL) + 8LL, &v16);
          if ((result & 1) == 0 &&
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8 * v12) +
                                  72LL) <= 7u) {
            result = game_Unit_EquipItem_6d8f40_alt1(v3, (unsigned int)v9);
            if ((result & 1) != 0) {
              break;
            }
          }
        }
        if (v9 == 29) {
          break;
        }
        ++v9;
      }
      if ((a2 & 1) != 0) {
        v14 = game_UnitItemList_Sort_alt1(v3 + 828, 0, 6);
        result = game_UnitItemList_Sort_alt1(v3 + 828, 6, 24);
        if ((v14 & 1) != 0 || (result & 1) != 0) {
          v15 = *(_DWORD*)(v3 + 416);
          if ((v15 & 0x10000000) == 0) {
            *(_DWORD*)(v3 + 416) = v15 | 0x10000000;
            game_6c51e0_alt1(v3);
            GameRoutine_6c6da0_alt1(v3);
            result = game_6c6ec0_alt1(v3);
            *(_DWORD*)(v3 + 416) &= ~0x10000000u;
          }
        }
      }
      return result;
    }
  }
  return result;
}

__int64 game_120cba0(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 result;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  int v15;
  int v16;

  result = game_UnitItemList_FindEquipped_710140(a1 + 828);
  if ((result & 0x80000000) != 0) {
    v7 = 0;
    v8 = GameData_212c878[0];
    v9 = game_g_shared_system_skills_ptr;
    while (1) {
      v10 = a1 + 8 * v7;
      v11 = *(unsigned __int16*)(v10 + 828);
      if (*(_WORD*)(v10 + 828) != 0) {
        v12 = *(_QWORD*)(*v8 + 64);
        v16 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1C0LL) + v9) & 0xFFF;
        result = game_HasSkill(
            *(_QWORD*)(*(_QWORD*)(v12 + 8 * v11) + 24LL) + 8LL, &v16);
        if ((result & 1) == 0) {
          v13 = *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8 * v11);
          if (*(_BYTE*)(v13 + 72) == 13 &&
              *(unsigned __int8*)(v13 + 73) == a2) {
            result = game_Unit_EquipItem_6d8f40_alt1(a1, (unsigned int)v7);
            if ((result & 1) != 0) {
              break;
            }
          }
        }
      }
      if (v7 == 29) {
        break;
      }
      ++v7;
    }
    if ((a3 & 1) != 0) {
      v14 = game_UnitItemList_Sort_alt1(a1 + 828, 0, 6);
      result = game_UnitItemList_Sort_alt1(a1 + 828, 6, 24);
      if ((v14 & 1) != 0 || (result & 1) != 0) {
        v15 = *(_DWORD*)(a1 + 416);
        if ((v15 & 0x10000000) == 0) {
          *(_DWORD*)(a1 + 416) = v15 | 0x10000000;
          game_6c51e0_alt1(a1);
          GameRoutine_6c6da0_alt1(a1);
          result = game_6c6ec0_alt1(a1);
          *(_DWORD*)(a1 + 416) &= ~0x10000000u;
        }
      }
    }
  }
  return result;
}

__int64 game_120d260(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _DWORD* v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;
  int v19;
  int* v20;
  int v21;
  __int64 v22;
  unsigned __int8** v23;
  unsigned __int8** v24;
  unsigned __int8* v25;
  int v26;
  bool v27;
  int v28;

  v3 = *a2;
  v2 = a2[1];
  v5 = v2 - *a2;
  if (v2 == *a2) {
    goto LABEL_25;
  }
  if ((v5 & 0x8000000000000000LL) != 0) {
    GameRoutine_6e5a20();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v2 - *a2, 16, 0);
  memcpy(v7, v3, v5);
  v8 = v5 >> 2;
  if ((int)(v5 >> 2) >= 10) {
    v9 = 10;
  }
  else {
    v9 = v5 >> 2;
  }
  game_1213640_alt1(v7, v7 + v5, (2 * __clz(v8)) ^ 0x7E, 1);
  if ((int)v8 < 1) {
    v13 = 0;
    goto LABEL_19;
  }
  if (v9 <= 1) {
    v10 = 1;
  }
  else {
    v10 = v9;
  }
  v11 = v10 & 7;
  if ((int)v8 < 8) {
    v12 = 0;
    v13 = 0;
    if ((v10 & 7) == 0) {
      goto LABEL_19;
    }
    goto LABEL_17;
  }
  v14 = (_DWORD*)(v7 + 16);
  v15 = 0;
  v13 = 0;
  v16 = -(__int64)(v10 & 0xFFFFFFF8);
  do {
    v15 -= 8;
    v17 =
        v14[1] + *v14 + *(v14 - 1) + *(v14 - 2) + *(v14 - 3) + *(v14 - 4) + v13;
    v18 = v14[2];
    v19 = v14[3];
    v14 += 8;
    v13 = v19 + v18 + v17;
  } while (v16 != v15);
  v12 = -v15;
  if (v11 != 0) {
  LABEL_17:
    v20 = (int*)(v7 + 4 * v12);
    do {
      v21 = *v20++;
      --v11;
      v13 += v21;
    } while (v11 != 0);
  }
LABEL_19:
  if (v13 / v9 <= 1) {
    LODWORD(v5) = 1;
  }
  else {
    LODWORD(v5) = v13 / v9;
  }
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v6 + v22);
LABEL_25:
  if (a1 != 0) {
    v23 = *(unsigned __int8***)(GameData_21c9c80 + 64);
    v24 = *(unsigned __int8***)(GameData_21c9c80 + 72);
    if (v23 != v24) {
      while (1) {
        v25 = *v23;
        v26 = (*v23)[32];
        v27 =
            v26 == *(unsigned __int8*)(*(_QWORD*)(a1 + 24) + 33LL) || v26 == 0;
        if (v27 && *(char*)(a1 + 88) == v25[33] &&
            *(char*)(a1 + 89) == v25[34]) {
          break;
        }
        if (++v23 == v24) {
          return (unsigned int)v5;
        }
      }
      if (v25[35] != 0) {
        v28 = v25[36];
        if ((int)v5 < v28) {
          v28 = v5;
        }
        if ((unsigned int)v5 >= v25[35]) {
          LODWORD(v5) = v28;
        }
        else {
          LODWORD(v5) = v25[35];
        }
      }
    }
  }
  return (unsigned int)v5;
}

bool game_120d470(unsigned __int16* a1)
{
  __int64 v3;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  int v20;

  v3 = *a1;
  if (*a1 == 0 || (*((_BYTE*)a1 + 3) & 8) == 0 && *((_BYTE*)a1 + 2) == 0) {
    return false;
  }
  v5 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v3) + 24LL);
  if (*(_QWORD*)(v5 + 512) == 0) {
    return false;
  }
  v6 = game_GameModeData_instance_ != 0
           ? *(_DWORD*)(game_GameModeData_instance_ + 72)
           : 0;
  if (v6 < (int)GameRoutine_9db9e0_alt1(0x16u, *(_DWORD*)(v5 + 524))) {
    return false;
  }
  v7 = *(_QWORD*)(v5 + 512);
  v8 = GameData_21c99b8;
  if (v7 != 0) {
    v9 = *(unsigned __int16*)(v7 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v9) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v10 = game_map_MapRandom_instance__ptr[0];
      v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v13 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v10 + 1) = v11;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) = v12;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4) =
          (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
      nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
      v8 = GameData_21c99b8;
    }
  }
  else {
    LODWORD(v9) = 0;
  }
  v14 = *(_QWORD*)(v8 + 64);
  v20 = 0;
  v15 = *(_QWORD*)(v14 + 8LL * (unsigned int)v9);
  v16 =
      *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v18_.v19 = v18_.v18;
  v18_.v18[0] = GameData_212d7f0[0] + 2;
  v18_.v18[1] = &v20;
  game_TransporterConst_List_Impl_EachData_alt1(v16, v15, (__int64)v18_.v18);
  if (v18_.v19 == v18_.v18) {
    v17 = 32;
    goto LABEL_19;
  }
  if (v18_.v19 != nullptr) {
    v17 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v18_.v19 + v17))((__int64)v18_.v19);
  }
  return v20 >= (signed __int32)*(_DWORD*)(v5 + 520);
}

__int64 game_120d600(unsigned __int16* a1, __int64 a2)
{
  __int64 v4;
  __int64 v6;
  int v7;
  unsigned __int16* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  char v32;
  __int64* v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;
  int v38;

  v4 = *a1;
  if (*a1 == 0 || (*((_BYTE*)a1 + 3) & 8) == 0 && *((_BYTE*)a1 + 2) == 0) {
    return 0;
  }
  v6 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v4) + 24LL);
  if (*(_QWORD*)(v6 + 512) == 0) {
    return 0;
  }
  if (game_GameModeData_instance_ != 0) {
    v7 = *(_DWORD*)(game_GameModeData_instance_ + 72);
    v8 = a1;
    v9 = a2;
  }
  else {
    v8 = a1;
    v9 = a2;
    v7 = 0;
  }
  if (v7 < (int)GameRoutine_9db9e0_alt1(0x16u, *(_DWORD*)(v6 + 524))) {
    return 0;
  }
  v10 = *(_QWORD*)(v6 + 512);
  v11 = GameData_21c99b8;
  if (v10 != 0) {
    v12 = *(unsigned __int16*)(v10 + 16);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v12) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
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
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13) = v15;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 4) =
          (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
      nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
      v11 = GameData_21c99b8;
    }
  }
  else {
    LODWORD(v12) = 0;
  }
  v17 = game_TransporterConst_List_instance__ptr[0];
  v18 = *(_QWORD*)(v11 + 64);
  v38 = 0;
  v19 = *(_QWORD*)(v18 + 8LL * (unsigned int)v12);
  v20 =
      *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v34_.v35 = v34_.v34;
  v34_.v34[0] = GameData_212d7f0[0] + 2;
  v34_.v34[1] = &v38;
  game_TransporterConst_List_Impl_EachData_alt1(v20, v19, (__int64)v34_.v34);
  if (v34_.v35 == v34_.v34) {
    v21 = 32;
  }
  else {
    if (v34_.v35 == nullptr) {
      goto LABEL_19;
    }
    v21 = 40;
  }
  (*(void (**)(__int64))(*v34_.v35 + v21))((__int64)v34_.v35);
LABEL_19:
  if (v38 < (signed __int32)*(_DWORD*)(v6 + 520)) {
    return 0;
  }
  v22 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *v8) +
                   24LL);
  if ((int)GameRoutine_9db9e0_alt1(0x16u, *(_DWORD*)(v22 + 524)) >= 1) {
    v23 = GameRoutine_9db9e0_alt1(0x16u, *(_DWORD*)(v22 + 524));
    if (game_GameModeData_instance_ != 0) {
      v24 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v23) &
            ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v23) >> 31);
      if (v24 >= 9999999) {
        v24 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v24;
    }
  }
  v25 = *(_QWORD*)(v22 + 512);
  if (v25 != 0) {
    v26 = *(unsigned __int16*)(v25 + 16);
    v34_.v34[0] = 0x100000000LL;
    LOWORD(v34_.v34[0]) = v26;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v26) +
                  73LL) == 17) {
      nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
      v27 = game_map_MapRandom_instance__ptr[0];
      v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v30 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v27 + 1) = v28;
      v31 = (v30 >> 8) ^ (v29 >> 19) ^ v30 ^ v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27) = v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27 + 4) = v31;
      nn_os_UnlockMutex_alt2((__int64)&game_g_random_mutex);
      HIDWORD(v34_.v34[0]) =
          (16 * ((_WORD)v31 -
                 1000 * (unsigned __int16)((v31 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    TransporterConst_89b3d0_alt1((void*)((__int64)&v38),
                                 *(_QWORD**)(*(_QWORD*)v17 + 8LL), v34_.v34,
                                 *(_DWORD*)(v22 + 520));
  }
  v32 = *((_BYTE*)v8 + 3);
  if (((v32 & 8) != 0 || *((_BYTE*)v8 + 2) != 0) &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *v8) +
                            24LL) +
                 512LL) != 0) {
    *((_BYTE*)v8 + 2) = 0;
    *((_BYTE*)v8 + 3) = v32 & 0xF7;
  }
  if (v9 != 0) {
    game_Unit_CheckEquipment(v9);
  }
  v33 = game_149e9e0_alt1(1u);
  if (game_GameModeData_instance_ != 0) {
    GameVariable_828dc0_alt1(*(_QWORD*)(game_GameModeData_instance_ + 48),
                             (unsigned __int64*)v33, 1);
  }
  return 1;
}

__int64 game_120dd60()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v7;
  int v8;
  int v9;
  int v10;

  v10 = 241;
  v0 = game_UnitPool_GetFirst(&v10);
  if (v0 != 0) {
    v1 = *(_QWORD*)(v0 + 432);
    if (v1 == 0) {
      v7 = *(_QWORD*)(v0 + 440);
      if (v7 == 0 || (unsigned int)(v8 = *(unsigned __int8*)(v7 + 16)) > 8) {
      LABEL_12:
        Unit_6cfa20(v0);
        return GameRoutine_90d990(game_GameModeData_instance_ + 152);
      }
      while (1) {
        v9 = v8 + 1;
        if (((2 << v8) & 0xF0) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v8 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v8 = v9;
        if (v9 == 9) {
          goto LABEL_12;
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        Unit_6cfa20(v0);
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
        if (((2 << v4) & 0xF0) != 0) {
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
  return GameRoutine_90d990(game_GameModeData_instance_ + 152);
}

__int64 game_120dec0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 241;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return Unit_6cfde0(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return Unit_6cfde0(result);
      }
      while (1) {
        v8 = v7 + 1;
        if (((2 << v7) & 0xF0) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          return Unit_6cfde0(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        Unit_6cfde0(result);
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
        if (((2 << v4) & 0xF0) != 0) {
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
    return Unit_6cfde0(result);
  }
  return result;
}

__int64 game_120e000()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 241;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return Unit_6cf460(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return Unit_6cf460(result);
      }
      while (1) {
        v8 = v7 + 1;
        if (((2 << v7) & 0xF0) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          return Unit_6cf460(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        Unit_6cf460(result);
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
        if (((2 << v4) & 0xF0) != 0) {
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
    return Unit_6cf460(result);
  }
  return result;
}

__int64 game_120e140()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 241;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return Unit_6d00c0(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return Unit_6d00c0(result);
      }
      while (1) {
        v8 = v7 + 1;
        if (((2 << v7) & 0xF0) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          return Unit_6d00c0(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        Unit_6d00c0(result);
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
        if (((2 << v4) & 0xF0) != 0) {
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
    return Unit_6d00c0(result);
  }
  return result;
}

__int64 game_120e680()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 241;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return Unit_6e09a0(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return Unit_6e09a0(result);
      }
      while (1) {
        v8 = v7 + 1;
        if (((2 << v7) & 0xF0) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          return Unit_6e09a0(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        Unit_6e09a0(result);
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
        if (((2 << v4) & 0xF0) != 0) {
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
    return Unit_6e09a0(result);
  }
  return result;
}

__int64 game_120e7c0()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 241;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return Unit_6cf740(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return Unit_6cf740(result);
      }
      while (1) {
        v8 = v7 + 1;
        if (((2 << v7) & 0xF0) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          return Unit_6cf740(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        Unit_6cf740(result);
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
        if (((2 << v4) & 0xF0) != 0) {
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
    return Unit_6cf740(result);
  }
  return result;
}

__int64 game_120f020(__int64* a1, char a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL8 v14;
  _BYTE v16[4];
  int v17;

  v3 = *a1;
  v4 = *(_QWORD*)(GameData_21ca310 + 56);
  if (*a1 != 0) {
    v5 = 250;
    v6 = *(_QWORD*)(GameData_21ca310 + 56);
    while (1) {
      v7 = *(_QWORD*)(v6 + 440);
      if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 && *(_QWORD*)(v6 + 392) == v3) {
        break;
      }
      v8 = *(_QWORD*)(v6 + 2664);
      if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && *(_QWORD*)(v6 + 2616) == v3) {
        v6 += 2224;
        return v6;
      }
      v9 = *(_QWORD*)(v6 + 4888);
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && *(_QWORD*)(v6 + 4840) == v3) {
        v6 += 4448;
        return v6;
      }
      v10 = *(_QWORD*)(v6 + 7112);
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && *(_QWORD*)(v6 + 7064) == v3) {
        v6 += 6672;
        return v6;
      }
      v11 = *(_QWORD*)(v6 + 9336);
      if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 && *(_QWORD*)(v6 + 9288) == v3) {
        v6 += 8896;
        return v6;
      }
      v6 += 11120;
      v5 -= 5;
      if (v5 == 0) {
        goto LABEL_20;
      }
    }
  }
  else {
  LABEL_20:
    v6 = *(_QWORD*)(v4 + 556216);
    if (v6 != 0) {
      Unit_6d8180(*(_QWORD*)(v4 + 556216));
      v12 = *(_QWORD*)(v6 + 392);
      v16[0] = a2;
      v13 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0) {
        v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v14 = v12 != v13 && (*(_BYTE*)(v6 + 418) & 8) == 0 &&
                (v17 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                  game_g_shared_system_skills_ptr) &
                       0xFFF,
                 (game_HasSkill(v6 + 1744, &v17) & 1) == 0) ||
            a2 == 9;
      GameRoutine_6c47b0(v6, v16, v14, 0);
    }
  }
  return v6;
}

__int64 game_120f1e0(_QWORD* a1, __int64 a2, unsigned int a3, char a4)
{
  char v4;
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
  _BOOL8 v17;
  _BYTE v19[4];
  int v20;

  v4 = a3;
  if ((_BYTE)a2 == 0 || (v6 = game_GameConverge_Impl_TryJoin(
                             *(_QWORD*)(game_GameModeData_instance_ + 176), a2,
                             *a1, a3, a4 & 1)) == 0) {
    v7 = *a1;
    v8 = *(_QWORD*)(GameData_21ca310 + 56);
    if (*a1 != 0) {
      v9 = 250;
      v6 = *(_QWORD*)(GameData_21ca310 + 56);
      while (1) {
        v10 = *(_QWORD*)(v6 + 440);
        if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 &&
            *(_QWORD*)(v6 + 392) == v7) {
          break;
        }
        v11 = *(_QWORD*)(v6 + 2664);
        if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 &&
            *(_QWORD*)(v6 + 2616) == v7) {
          v6 += 2224;
          break;
        }
        v12 = *(_QWORD*)(v6 + 4888);
        if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 &&
            *(_QWORD*)(v6 + 4840) == v7) {
          v6 += 4448;
          break;
        }
        v13 = *(_QWORD*)(v6 + 7112);
        if (v13 != 0 && *(_BYTE*)(v13 + 16) != 9 &&
            *(_QWORD*)(v6 + 7064) == v7) {
          v6 += 6672;
          break;
        }
        v14 = *(_QWORD*)(v6 + 9336);
        if (v14 != 0 && *(_BYTE*)(v14 + 16) != 9 &&
            *(_QWORD*)(v6 + 9288) == v7) {
          v6 += 8896;
          break;
        }
        v6 += 11120;
        v9 -= 5;
        if (v9 == 0) {
          goto LABEL_22;
        }
      }
    }
    else {
    LABEL_22:
      v6 = *(_QWORD*)(v8 + 556216);
      if (v6 != 0) {
        Unit_6d8390(*(_QWORD*)(v8 + 556216));
        v15 = *(_QWORD*)(v6 + 392);
        v19[0] = v4;
        v16 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ != 0) {
          v16 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        }
        v17 = v15 != v16 && (*(_BYTE*)(v6 + 418) & 8) == 0 &&
                  (v20 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                    game_g_shared_system_skills_ptr) &
                         0xFFF,
                   (game_HasSkill(v6 + 1744, &v20) & 1) == 0) ||
              v4 == 9;
        GameRoutine_6c47b0(v6, v19, v17, 0);
      }
    }
  }
  GameRoutine_120f3d0(v6);
  return v6;
}

__int64 game_120f4c0(__int64 a1, char a2)
{
  __int64 v4;
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
  char v15;
  __int64* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  bool v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  _BYTE v25[4];
  int v26;

  v4 = game_GetHero(9u);
  v5 = *(_QWORD*)(GameData_21ca310 + 56);
  if (v4 != 0) {
    v6 = 250;
    v7 = *(_QWORD*)(GameData_21ca310 + 56);
    while (1) {
      v8 = *(_QWORD*)(v7 + 440);
      if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 && *(_QWORD*)(v7 + 392) == v4) {
        break;
      }
      v9 = *(_QWORD*)(v7 + 2664);
      if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 && *(_QWORD*)(v7 + 2616) == v4) {
        v7 += 2224;
        break;
      }
      v10 = *(_QWORD*)(v7 + 4888);
      if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 && *(_QWORD*)(v7 + 4840) == v4) {
        v7 += 4448;
        break;
      }
      v11 = *(_QWORD*)(v7 + 7112);
      if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 && *(_QWORD*)(v7 + 7064) == v4) {
        v7 += 6672;
        break;
      }
      v12 = *(_QWORD*)(v7 + 9336);
      if (v12 != 0 && *(_BYTE*)(v12 + 16) != 9 && *(_QWORD*)(v7 + 9288) == v4) {
        v7 += 8896;
        break;
      }
      v7 += 11120;
      v6 -= 5;
      if (v6 == 0) {
        goto LABEL_20;
      }
    }
  }
  else {
  LABEL_20:
    v7 = *(_QWORD*)(v5 + 556216);
    if (v7 == 0) {
      return v7;
    }
    Unit_6d8180_alt1(*(_QWORD*)(v5 + 556216), v4, 0);
    v13 = *(_QWORD*)(v7 + 392);
    v25[0] = a2;
    v14 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v14 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v15 = v13 != v14 && (*(_BYTE*)(v7 + 418) & 8) == 0 &&
              (v26 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) +
                                game_g_shared_system_skills_ptr) &
                     0xFFF,
               (game_HasSkill_alt1((_QWORD*)(v7 + 1744), (unsigned int*)&v26) &
                1) == 0) ||
          a2 == 9;
    GameRoutine_6c47b0_alt1(v7, v25, v15, 0);
  }
  if (v7 + 2104 != a1) {
    v16 = (__int64*)(v7 + 2112);
    v17 = *(unsigned __int8*)(a1 + 8);
    if ((*(_BYTE*)(v7 + 2112) & 1) != 0) {
      v20 = (v17 & 1) == 0;
      v21 = v17 >> 1;
      if (v20) {
        v22 = a1 + 9;
      }
      else {
        v22 = *(_QWORD*)(a1 + 24);
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = *(_QWORD*)(a1 + 16);
      }
      SpineModel_64dde0_alt1(v16, v22, v23);
    }
    else if ((v17 & 1) != 0) {
      GameRoutine_64df20_alt1(v16, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
    }
    else {
      v18 = *(_QWORD*)(a1 + 8);
      v19 = *(_QWORD*)(a1 + 24);
      *(_QWORD*)(v7 + 2120) = *(_QWORD*)(a1 + 16);
      *(_QWORD*)(v7 + 2128) = v19;
      *v16 = v18;
    }
  }
  *(_BYTE*)(v7 + 2136) = *(_BYTE*)(a1 + 32);
  *(_BYTE*)(v7 + 2137) = *(_BYTE*)(a1 + 33);
  *(_BYTE*)(v7 + 2138) = *(_BYTE*)(a1 + 34);
  *(_BYTE*)(v7 + 2139) = *(_BYTE*)(a1 + 35);
  *(_BYTE*)(v7 + 2140) = *(_BYTE*)(a1 + 36);
  GameRoutine_714fc0();
  return v7;
}

__int64 game_120f710(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  int v4;
  int v5;
  unsigned int v6;
  unsigned __int16 v7;
  int v8;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  _QWORD v18[2];

  v1 = *a1;
  if (*a1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 392);
  if (v2 == 0) {
    return 0;
  }
  if (*GameData_212ce90[0] != 0) {
    v4 = (unsigned __int8)Situation_7659e0();
    v1 = *a1;
    if (v4 == 1) {
      v5 = 128;
    }
    else {
      v5 = 0;
    }
    if (v4 == 2) {
      v6 = 256;
    }
    else {
      v6 = v5;
    }
  }
  else {
    v6 = 0;
  }
  if (GameData_21f4cc0 != 0) {
    v7 = BattleInfo_ec0e30(GameData_21f4cc0, v1);
    v1 = *a1;
    v6 |= v7;
  }
  LODWORD(v18[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) +
                               game_g_shared_system_skills_ptr) &
                    0xFFF;
  if ((game_HasSkill(v1 + 1744, v18) & 1) != 0 || *(_BYTE*)(*a1 + 496) != 0) {
    v6 |= 0x40u;
    goto LABEL_17;
  }
  if (GameData_21f4cc0 != 0) {
    v11 = BattleInfo_ec1080();
    if (v11 > 1) {
      if (v11 == 2) {
        v6 |= 0x32u;
        goto LABEL_17;
      }
    }
    else if (v11 == 0) {
      goto LABEL_27;
    }
    v6 |= 0x1Fu;
    goto LABEL_17;
  }
LABEL_27:
  v12 = *(unsigned __int8*)(v2 + 50);
  if (v12 != 12) {
    if (v12 == 11) {
      goto LABEL_29;
    }
    v13 = *a1;
    if (*a1 != 0) {
      v14 = *(_QWORD*)(v13 + 440);
      if (v14 != 0 &&
          (((1 << *(_BYTE*)(v14 + 16)) & 0xF1) != 0 ||
           (v17 = *(unsigned __int8*)(v14 + 16)) == 3 || v17 == 0)) {
        v15 = *(_QWORD*)(v13 + 392);
        v18[0] = *a1;
        v18[1] = v15;
        v16 = (unsigned __int8)GameSituation_906b70(
            game_GameModeData_instance_ + 136, v18);
        if ((unsigned int)(v16 - 1) >= 2) {
          if (v16 == 0) {
            v6 |= 0x21Fu;
          }
        }
        else {
          v6 |= 0x32u;
        }
        goto LABEL_17;
      }
    }
    if (*(unsigned __int8*)(v2 + 50) <= 3u) {
      switch (v12) {
      case 1:
        v6 |= 0xFu;
        break;
      case 2:
        v6 |= 0xBu;
        break;
      case 3:
        v6 |= 0xAu;
        break;
      default:
        break;
      }
      goto LABEL_17;
    }
    if (*(unsigned __int8*)(v2 + 50) > 5u) {
      if (v12 == 6 || v12 == 7) {
        v6 |= 0x20u;
      }
      goto LABEL_17;
    }
    if (v12 == 4) {
    LABEL_29:
      v6 |= 2u;
    }
    else {
      v6 |= 0x22u;
    }
  }
LABEL_17:
  v8 = *(unsigned __int8*)(v2 + 50);
  if (v8 == 6 || v8 == 1) {
    v6 |= 0x410u;
  }
  return v6;
}

__int64 game_120f960()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned int v4;
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  int v9;

  v9 = 241;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return game_Unit_Unknown6c4610(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return game_Unit_Unknown6c4610(result);
      }
      while (1) {
        v8 = v7 + 1;
        if (((2 << v7) & 0xF0) != 0) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                          24LL * (unsigned __int8)(v7 + 1) + 556000);
          if (v1 != 0) {
            break;
          }
        }
        v7 = v8;
        if (v8 == 9) {
          return game_Unit_Unknown6c4610(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        game_Unit_Unknown6c4610(result);
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
        if (((2 << v4) & 0xF0) != 0) {
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
    return game_Unit_Unknown6c4610(result);
  }
  return result;
}

unsigned __int64 game_120faa0()
{
  unsigned __int64 result;
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned int v3;
  _DWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  char v7;
  __int64 v8;
  _QWORD* v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  unsigned __int64 v16;
  __int64 v17;
  float v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  float v21;
  _BOOL8 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  unsigned __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64** v50;
  __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64* v56;
  unsigned __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  _QWORD* v61;
  _QWORD* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int64 v65;
  unsigned int v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  _QWORD* v69;
  unsigned __int64 v70;
  float v71;
  int v72;

  v69 = nullptr;
  v70 = 0;
  v67 = 0;
  v68 = 0;
  v71 = 1.0f;
  v72 = 241;
  result = game_UnitPool_GetFirst_alt1(&v72);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    v2 = result;
    if (v1 == 0) {
      v1 = *(_QWORD*)(result + 440);
      if (v1 != 0) {
        v3 = *(unsigned __int8*)(v1 + 16);
        if (v3 <= 8) {
          while (1) {
            v66 = v3 + 1;
            if (((2 << v3) & 0xF0) != 0) {
              v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v3 + 1) + 556000);
              if (v1 != 0) {
                break;
              }
            }
            v3 = v66;
            if (v66 == 9) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v1 = 0;
        }
      }
    }
    v4 = (_DWORD*)game_g_shared_system_skills_ptr;
  LABEL_8:
    v5 = v1;
    v72 = *v4 & 0xFFF;
    result = game_HasSkill(v2 + 1744, &v72);
    if ((result & 1) != 0) {
      v6 = *(_QWORD*)(v2 + 440);
      v7 = v6 != 0 ? *(_BYTE*)(v6 + 16) : 9;
      if (((1 << v7) & 0xF1) != 0) {
        goto LABEL_92;
      }
    }
    v8 = *(_QWORD*)(v2 + 392);
    if (v8 == 0 || (*(_BYTE*)(v8 + 49) & 1) == 0) {
      goto LABEL_92;
    }
    result = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 32,
                                                 16, 0);
    *(_QWORD*)result = 0;
    v9 = (_QWORD*)result;
    v10 = *(_QWORD*)v8;
    v11 = v68;
    *(_QWORD*)(result + 16) = v10;
    *(_QWORD*)(result + 24) = v2;
    *(_QWORD*)(result + 8) = v10;
    if (v68 == 0) {
      goto LABEL_35;
    }
    v12 = v68 - 1;
    if ((v68 & (v68 - 1)) != 0) {
      v13 = v10;
      if (v10 >= v68) {
        v13 = v10 % v68;
      }
    }
    else {
      v13 = v12 & v10;
    }
    v14 = *(_QWORD**)(v67 + 8 * v13);
    if (v14 == nullptr || (v15 = (_QWORD*)*v14) == nullptr) {
    LABEL_35:
      v18 = (float)(v70 + 1);
      if (v68 == 0 || (float)(v71 * (float)v68) < v18) {
        v21 = v18 / v71;
        v22 = (v68 & (v68 - 1)) != 0;
        if (v68 < 3) {
          v22 = true;
        }
        v23 = v22 | (2 * v68);
        v24 = vcvtps_u64_f32(v21);
        if (v23 <= v24) {
          v25 = v24;
        }
        else {
          v25 = v23;
        }
        if (v25 == 1) {
          v25 = 2;
        }
        else if ((v25 & (v25 - 1)) != 0) {
          result = std___1___next_prime(v25);
          v11 = v68;
          v25 = result;
        }
        if (v25 <= v11) {
          if (v25 >= v11) {
            goto LABEL_37;
          }
          result = vcvtps_u64_f32((float)v70 / v71);
          if (v11 < 3 || (v11 & (v11 - 1)) != 0) {
            result = std___1___next_prime(result);
          }
          else {
            v32 = 1LL << -(char)__clz(result - 1);
            if (result >= 2) {
              result = v32;
            }
          }
          if (v25 <= result) {
            v25 = result;
          }
          if (v25 >= v11) {
            goto LABEL_37;
          }
          if (v25 == 0) {
            v48 = v67;
            v67 = 0;
            if (v48 != 0) {
              v49 = 128;
              if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
                v49 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(
                  fw_memory_g_heap_manager + v49);
            }
            v68 = 0;
            goto LABEL_37;
          }
        }
        if (v25 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        result = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     8 * v25, 16, 0);
        v29 = v67;
        v67 = result;
        if (v29 != 0) {
          v30 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v30 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager +
                                                      v30);
        }
        v68 = v25;
        if (v25 >= 8) {
          v31 = 0;
          do {
            *(_QWORD*)(v67 + 8 * v31) = 0;
            *(_QWORD*)(v67 + 8 * v31 + 8) = 0;
            *(_QWORD*)(v67 + 8 * v31 + 16) = 0;
            *(_QWORD*)(v67 + 8 * v31 + 24) = 0;
            *(_QWORD*)(v67 + 8 * v31 + 32) = 0;
            *(_QWORD*)(v67 + 8 * v31 + 40) = 0;
            *(_QWORD*)(v67 + 8 * v31 + 48) = 0;
            v33 = v67 + 8 * v31;
            v31 += 8;
            *(_QWORD*)(v33 + 56) = 0;
          } while ((v25 & 0x1FFFFFFFFFFFFFF8LL) != v31);
        }
        else {
          v31 = 0;
        }
        v34 = v25 & 7;
        if ((v25 & 7) != 0) {
          v35 = 8 * v31;
          do {
            --v34;
            *(_QWORD*)(v67 + v35) = 0;
            v35 += 8;
          } while (v34 != 0);
        }
        v36 = v69;
        if (v69 != nullptr) {
          v37 = v69[1];
          v38 = v25 - 1;
          if ((v25 & (v25 - 1)) != 0) {
            if (v37 >= v25) {
              v37 %= v25;
            }
            *(_QWORD*)(v67 + 8 * v37) = &v69;
            v39 = (_QWORD*)*v36;
            if (*v36 == 0) {
              goto LABEL_37;
            }
            while (2) {
              v40 = v39[1];
              if (v40 >= v25) {
                v40 %= v25;
              }
              if (v40 != v37) {
                if (*(_QWORD*)(v67 + 8 * v40) == 0) {
                  *(_QWORD*)(v67 + 8 * v40) = v36;
                LABEL_83:
                  v36 = v39;
                  v39 = (_QWORD*)*v39;
                  v37 = v40;
                  if (v39 == nullptr) {
                    goto LABEL_37;
                  }
                  continue;
                }
                *v36 = *v39;
                *v39 = **(_QWORD**)(v67 + 8 * v40);
                **(_QWORD**)(v67 + 8 * v40) = v39;
                v39 = v36;
              }
              break;
            }
            v40 = v37;
            goto LABEL_83;
          }
          v44 = v37 & v38;
          *(_QWORD*)(v67 + 8 * v44) = &v69;
          while (1) {
            v45 = (_QWORD*)*v36;
            if (*v36 == 0) {
              break;
            }
            v46 = v45[1] & v38;
            if (v46 == v44) {
              v36 = (_QWORD*)*v36;
            }
            else if (*(_QWORD*)(v67 + 8 * v46) != 0) {
              *v36 = *v45;
              *v45 = **(_QWORD**)(v67 + 8 * v46);
              **(_QWORD**)(v67 + 8 * v46) = v45;
            }
            else {
              *(_QWORD*)(v67 + 8 * v46) = v36;
              v36 = v45;
              v44 = v46;
            }
          }
        }
      }
    LABEL_37:
      v19 = v9[1];
      v20 = v68 - 1;
      if ((v68 & (v68 - 1)) != 0) {
        if (v19 >= v68) {
          v19 %= v68;
        }
      }
      else {
        v19 &= v20;
      }
      v26 = *(_QWORD**)(v67 + 8 * v19);
      if (v26 != nullptr) {
        *v9 = *v26;
        *v26 = v9;
      }
      else {
        v27 = v69;
        v69 = v9;
        *v9 = v27;
        *(_QWORD*)(v67 + 8 * v19) = &v69;
        if (*v9 != 0) {
          v28 = *(_QWORD*)(*v9 + 8LL);
          if ((v68 & v20) != 0) {
            if (v28 >= v68) {
              v28 %= v68;
            }
          }
          else {
            v28 &= v20;
          }
          *(_QWORD*)(v67 + 8 * v28) = v9;
        }
      }
      ++v70;
      goto LABEL_92;
    }
    if ((v68 & v12) == 0) {
      while (1) {
        v17 = v15[1];
        if (v17 == v10) {
          if (v15[2] == v10) {
            goto LABEL_108;
          }
        }
        else if ((v17 & v12) != v13) {
          goto LABEL_35;
        }
        v15 = (_QWORD*)*v15;
        if (v15 == nullptr) {
          goto LABEL_35;
        }
      }
    }
    while (1) {
      v16 = v15[1];
      if (v16 == v10) {
        if (v15[2] == v10) {
        LABEL_108:
          v47 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v47 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager +
                                                      v47);
        LABEL_92:
          if (v5 == 0) {
            break;
          }
          v1 = *(_QWORD*)(v5 + 432);
          v2 = v5;
          if (v1 == 0) {
            v41 = *(_QWORD*)(v5 + 440);
            v2 = v5;
            if (v41 != 0) {
              v42 = *(unsigned __int8*)(v41 + 16);
              v1 = 0;
              v2 = v5;
              if (v42 <= 8) {
                while (1) {
                  v43 = v42 + 1;
                  if (((2 << v42) & 0xF0) != 0) {
                    v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                    24LL * (unsigned __int8)(v42 + 1) + 556000);
                    if (v1 != 0) {
                      break;
                    }
                  }
                  ++v42;
                  if (v43 == 9) {
                    v1 = 0;
                    v2 = v5;
                    goto LABEL_8;
                  }
                }
                v2 = v5;
              }
            }
          }
          goto LABEL_8;
        }
      }
      else {
        if (v16 >= v68) {
          v16 %= v68;
        }
        if (v16 != v13) {
          goto LABEL_35;
        }
      }
      v15 = (_QWORD*)*v15;
      if (v15 == nullptr) {
        goto LABEL_35;
      }
    }
  }
  v50 = (unsigned __int64**)GameData_21c9a78;
  v51 = GameData_21c9a80;
  if (GameData_21c9a78 != GameData_21c9a80) {
  LABEL_133:
    while (1) {
      v56 = *v50;
      if (v68 != 0 && v70 != 0) {
        v58 = *v56;
        v59 = v68 - 1;
        if ((v68 & (v68 - 1)) != 0) {
          v60 = *v56;
          if (v58 >= v68) {
            v60 = v58 % v68;
          }
        }
        else {
          v60 = v59 & v58;
        }
        v61 = *(_QWORD**)(v67 + 8 * v60);
        if (v61 != nullptr) {
          v62 = (_QWORD*)*v61;
          if (v62 != nullptr) {
            break;
          }
        }
      }
    LABEL_156:
      v65 = *(_QWORD*)(v56[3] + 1784);
      if (v65 == 0) {
        goto LABEL_132;
      }
      GameRoutine_717fc0(*(_QWORD*)(v65 + 24) + 1032LL, 0);
      GameRoutine_717fc0(*(_QWORD*)(v65 + 24) + 1072LL, 0);
      result = GameRoutine_717fc0(*(_QWORD*)(v65 + 24) + 1192LL, 0);
      if (++v50 == (unsigned __int64**)v51) {
        goto LABEL_122;
      }
    }
    if ((v68 & v59) == 0) {
      while (1) {
        v64 = v62[1];
        if (v64 == v58) {
          if (v62[2] == v58) {
            goto LABEL_159;
          }
        }
        else if ((v64 & v59) != v60) {
          goto LABEL_156;
        }
        v62 = (_QWORD*)*v62;
        if (v62 == nullptr) {
          goto LABEL_156;
        }
      }
    }
    while (1) {
      v63 = v62[1];
      if (v63 == v58) {
        if (v62[2] == v58) {
        LABEL_159:
          result = v62[3];
          if (result != 0) {
            result = GameRoutine_1210350();
          }
        LABEL_132:
          if (++v50 == (unsigned __int64**)v51) {
            break;
          }
          goto LABEL_133;
        }
      }
      else {
        if (v63 >= v68) {
          v63 %= v68;
        }
        if (v63 != v60) {
          goto LABEL_156;
        }
      }
      v62 = (_QWORD*)*v62;
      if (v62 == nullptr) {
        goto LABEL_156;
      }
    }
  }
LABEL_122:
  v52 = v69;
  if (v69 != nullptr) {
    do {
      v53 = (_QWORD*)*v52;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v54 = 128;
      }
      else {
        v54 = 56;
      }
      result =
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v54);
      v52 = v53;
    } while (v53 != nullptr);
  }
  if (v67 != 0) {
    v55 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v55 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v55);
  }
  return result;
}

__attribute__((swiftcall)) void game_1210880(PSEUDO_X8 x8_, char a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;
  _QWORD* v7;
  __int64 v8;
  unsigned int v9;
  unsigned int v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64* result;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  _QWORD* v29;
  int v30;
  _QWORD v31[2];
  _QWORD* v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;

  v36 = 0;
  v37 = 0;
  v35 = 0;
  v32 = nullptr;
  v33 = 0;
  v31[0] = 0;
  v31[1] = 0;
  v34 = 1065353216;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4328) != 0) {
    GameData_21f4320 = 81;
    __cxa_guard_release(&GameData_21f4328);
  }
  v4 = (_QWORD*)game_UnitPool_GetFirst_alt1(&GameData_21f4320);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                            memory_order_acquire) &
       1) == 0) {
    v29 = v4;
    v30 = __cxa_guard_acquire(&GameData_21f4328);
    v4 = v29;
    if (v30 != 0) {
      GameData_21f4320 = 81;
      __cxa_guard_release(&GameData_21f4328);
      v4 = v29;
    }
  }
  if (v4 != nullptr) {
    v5 = v4[54];
    if (v5 == 0) {
      v5 = v4[55];
      if (v5 != 0) {
        v6 = *(unsigned __int8*)(v5 + 16);
        if (v6 < 9) {
          while (1) {
            v28 = v6 + 1;
            if ((((unsigned int)GameData_21f4320 >> v6) & 2) != 0) {
              v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                              24LL * (unsigned __int8)(v6 + 1) + 556000);
              if (v5 != 0) {
                break;
              }
            }
            v6 = v28;
            if (v28 == 9) {
              goto LABEL_7;
            }
          }
        }
        else {
        LABEL_7:
          v5 = 0;
        }
      }
    }
    while (1) {
    LABEL_10:
      v7 = (_QWORD*)v5;
      GameRoutine_1210c00(v31, &v35, v4[49]);
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4328,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21f4328) != 0) {
        GameData_21f4320 = 81;
        __cxa_guard_release(&GameData_21f4328);
      }
      if (v7 == nullptr) {
        break;
      }
      v5 = v7[54];
      v4 = v7;
      if (v5 == 0) {
        v8 = v7[55];
        v4 = v7;
        if (v8 != 0) {
          v9 = *(unsigned __int8*)(v8 + 16);
          v5 = 0;
          v4 = v7;
          if (v9 <= 8) {
            while (1) {
              v10 = v9 + 1;
              if ((((unsigned int)GameData_21f4320 >> v9) & 2) != 0) {
                v5 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                24LL * (unsigned __int8)(v9 + 1) + 556000);
                if (v5 != 0) {
                  break;
                }
              }
              ++v9;
              if (v10 == 9) {
                v5 = 0;
                v4 = v7;
                goto LABEL_10;
              }
            }
            v4 = v7;
          }
        }
      }
    }
  }
  if ((a1 & 1) != 0) {
    v11 = (_QWORD*)GameData_21c9a78;
    v12 = GameData_21c9a80;
    while (v11 != (_QWORD*)v12) {
      v13 = *v11;
      if ((GameRoutine_1210f00(*v11) & 1) != 0) {
        GameRoutine_1210c00(v31, &v35, v13);
      }
      ++v11;
    }
  }
  result = (__int64*)game_1211020_alt1(v31, &v35);
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v16 = *result;
  v15 = result[1];
  v17 = v15 - *result;
  v18 = fw_memory_g_heap_manager_ptr;
  if (v15 != *result) {
    if (v17 < 0) {
      GameRoutine_688200();
    }
    v19 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
    v20 = v19 + v17;
    *a2 = v19;
    a2[2] = v19 + v17;
    result = (__int64*)memcpy(v19, v16, v17);
    a2[1] = v20;
  }
  v21 = v32;
  if (v32 != nullptr) {
    do {
      v22 = (_QWORD*)*v21;
      if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
        v23 = 128;
      }
      else {
        v23 = 56;
      }
      result =
          (__int64*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v23);
      v21 = v22;
    } while (v22 != nullptr);
  }
  v24 = v31[0];
  v31[0] = 0;
  if (v24 != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
      v25 = 56;
    }
    result = (__int64*)nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v25);
  }
  if (v35 != 0) {
    v26 = *(_QWORD*)v18;
    v36 = v35;
    v27 = 128;
    if (*(_QWORD*)(v26 + 200) == 0) {
      v27 = 56;
    }
    {
      (__int64*)nn_mem_StandardAllocator_Free_alt1(v26 + v27);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64* game_1211020(__int64* a1, __int64* a2)
{
  unsigned __int64 v2;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  unsigned int v17;
  __int64 v18;
  __int64* v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int64* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  _BOOL8 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 primeEm;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned int v47;
  unsigned int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  bool v57;
  __int64 v58;
  unsigned int v60;
  __int64* v61;
  int v62;
  __int64* v63;

  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (a1[3] != 0) {
    v6 = (_QWORD*)a1[2];
    if (v6 != nullptr) {
      do {
        v7 = (_QWORD*)*v6;
        if (*(_QWORD*)(*v5 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v5 + v8);
        v6 = v7;
      } while (v7 != nullptr);
    }
    v9 = a1[1];
    a1[2] = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(*a1 + 8 * v11) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 8) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 16) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 24) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 32) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 40) = 0;
          *(_QWORD*)(*a1 + 8 * v11 + 48) = 0;
          v13 = *a1 + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(*a1 + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    a1[3] = 0;
  }
  v61 = a2;
  v62 = 17;
  v15 = (_QWORD*)game_UnitPool_GetFirst_alt1(&v62);
  if (v15 != nullptr) {
    v16 = v15[54];
    if (v16 == 0) {
      v16 = v15[55];
      if (v16 != 0) {
        v17 = *(unsigned __int8*)(v16 + 16);
        if (v17 <= 8) {
          v60 = v17 - 3;
          while (1) {
            if (v60 == 0) {
              v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v16 != 0) {
                break;
              }
            }
            if (++v60 == 6) {
              goto LABEL_20;
            }
          }
        }
        else {
        LABEL_20:
          v16 = 0;
        }
      }
    }
    v18 = a1[3];
    v19 = a1 + 2;
    while (1) {
    LABEL_23:
      v20 = (_QWORD*)v16;
      v21 = a1[1];
      v22 = *(unsigned __int64**)(*(_QWORD*)(v15[49] + 24LL) + 1784LL);
      v23 = *v22;
      if (v21 != 0) {
        v24 = v21 - 1;
        if ((v21 & (v21 - 1)) != 0) {
          v2 = *v22;
          if (v23 >= v21) {
            v2 = v23 % v21;
          }
        }
        else {
          v2 = v24 & v23;
        }
        v25 = *(_QWORD**)(*a1 + 8 * v2);
        if (v25 != nullptr) {
          v26 = (_QWORD*)*v25;
          if (v26 != nullptr) {
            if ((v21 & v24) == 0) {
              while (1) {
                v28 = v26[1];
                if (v28 == v23) {
                  if (v26[2] == v23) {
                    goto LABEL_80;
                  }
                }
                else if ((v28 & v24) != v2) {
                  goto LABEL_43;
                }
                v26 = (_QWORD*)*v26;
                if (v26 == nullptr) {
                  goto LABEL_43;
                }
              }
            }
            do {
              v27 = v26[1];
              if (v27 == v23) {
                if (v26[2] == v23) {
                  goto LABEL_80;
                }
              }
              else {
                if (v27 >= v21) {
                  v27 %= v21;
                }
                if (v27 != v2) {
                  break;
                }
              }
              v26 = (_QWORD*)*v26;
            } while (v26 != nullptr);
          }
        }
      }
    LABEL_43:
      v29 = fw_memory_HeapManager_Allocate_alt1(*v5, 32, 16, 0);
      v30 = a1[3];
      v31 = *((float*)a1 + 8);
      v32 = v29;
      *(_QWORD*)v29 = 0;
      *(_QWORD*)(v29 + 8) = v23;
      *(_QWORD*)(v29 + 16) = v23;
      *(_DWORD*)(v29 + 24) = v18;
      v33 = (float)(unsigned __int64)(v30 + 1);
      if (v21 == 0 || (float)(v31 * (float)v21) < v33) {
        v34 = v33 / v31;
        v35 = (v21 & (v21 - 1)) != 0;
        if (v21 < 3) {
          v35 = true;
        }
        v36 = v35 | (2 * v21);
        v37 = vcvtps_u64_f32(v34);
        if (v36 <= v37) {
          v38 = v37;
        }
        else {
          v38 = v36;
        }
        if (v38 == 1) {
          v38 = 2;
        }
        else if ((v38 & (v38 - 1)) != 0) {
          primeEm = std___1___next_prime(v38);
          v21 = a1[1];
          v38 = primeEm;
        }
        if (v38 > v21) {
          goto LABEL_55;
        }
        if (v38 < v21) {
          v40 = vcvtps_u64_f32((float)(unsigned __int64)a1[3] /
                               *((float*)a1 + 8));
          if (v21 < 3 || (v21 & (v21 - 1)) != 0) {
            v40 = std___1___next_prime(v40);
          }
          else {
            v41 = 1LL << -(char)__clz(v40 - 1);
            if (v40 >= 2) {
              v40 = v41;
            }
          }
          if (v38 <= v40) {
            v38 = v40;
          }
          if (v38 < v21) {
          LABEL_55:
            GameRoutine_8301a0(a1, v38);
          }
        }
        v21 = a1[1];
        if ((v21 & (v21 - 1)) != 0) {
          if (v23 >= v21) {
            v2 = v23 % v21;
          }
          else {
            v2 = v23;
          }
        }
        else {
          v2 = (v21 - 1) & v23;
        }
      }
      v42 = *a1;
      v43 = *(__int64**)(*a1 + 8 * v2);
      if (v43 != nullptr) {
        *(_QWORD*)v32 = *v43;
        *v43 = v32;
      }
      else {
        v44 = *v19;
        *v19 = v32;
        *(_QWORD*)v32 = v44;
        *(_QWORD*)(v42 + 8 * v2) = v19;
        if (*(_QWORD*)v32 != 0) {
          v45 = *(_QWORD*)(*(_QWORD*)v32 + 8LL);
          if ((v21 & (v21 - 1)) != 0) {
            if (v45 >= v21) {
              v45 %= v21;
            }
          }
          else {
            v45 &= v21 - 1;
          }
          *(_QWORD*)(*a1 + 8 * v45) = v32;
        }
      }
      v18 = a1[3] + 1;
      a1[3] = v18;
    LABEL_80:
      if (v20 == nullptr) {
        break;
      }
      v16 = v20[54];
      v15 = v20;
      if (v16 == 0) {
        v46 = v20[55];
        v15 = v20;
        if (v46 != 0) {
          v47 = *(unsigned __int8*)(v46 + 16);
          v16 = 0;
          v15 = v20;
          if (v47 <= 8) {
            v48 = v47 - 3;
            while (1) {
              if (v48 == 0) {
                v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v16 != 0) {
                  break;
                }
              }
              if (++v48 == 6) {
                v16 = 0;
                v15 = v20;
                goto LABEL_23;
              }
            }
            v15 = v20;
          }
        }
      }
    }
  }
  v63 = a1;
  v49 = *v61;
  v50 = v61[1];
  v51 = v50 - *v61;
  v52 = v51 >> 3;
  if (v51 >> 3 < 129) {
    v56 = 0;
  LABEL_95:
    GameRoutine_12148e0(v49, v50, &v63, v52, 0, v56);
  }
  else {
    v53 = v51 >> 3;
    v54 = GameData_212c060;
    while (1) {
      v55 = GameRoutine_1a09d20(8 * v53, v54);
      if (v55 != 0) {
        break;
      }
      v56 = v53 >> 1;
      v57 = v53 > 1;
      v53 >>= 1;
      if (!v57) {
        goto LABEL_95;
      }
    }
    GameRoutine_12148e0(v49, v50, &v63, v52, v55, v53);
    v58 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v5 + v58);
  }
  return v61;
}

__attribute__((swiftcall)) void game_1211780(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  char* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned int v32;
  _QWORD* v33;
  _QWORD* v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  unsigned __int64 v49[2];

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  LODWORD(v49[0]) = 17;
  v2 = game_UnitPool_GetFirst((int*)v49);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 432);
    v4 = v2;
    if (v3 == 0) {
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 != 0) {
        v5 = *(unsigned __int8*)(v3 + 16);
        if (v5 <= 8) {
          v32 = v5 - 3;
          while (1) {
            if (v32 == 0) {
              v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
              if (v3 != 0) {
                break;
              }
            }
            if (++v32 == 6) {
              goto LABEL_5;
            }
          }
        }
        else {
        LABEL_5:
          v3 = 0;
        }
      }
    }
    v6 = nullptr;
    v7 = 0;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
    LABEL_8:
      v9 = v3;
      if (GameRoutine_1211600(*(_QWORD*)(v4 + 392), 0)) {
        v10 = *(_QWORD*)(v4 + 392);
        v11 = a1[2];
        if ((unsigned __int64)v6 >= v11) {
          v12 = &v6[-v7];
          v13 = (__int64)&v6[-v7] >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
            goto LABEL_88;
          }
          v15 = v11 - v7;
          if (v15 >> 2 > v14) {
            v14 = v15 >> 2;
          }
          if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
            v16 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v16 = v14;
          }
          if (v16 != 0) {
            if (v16 >> 61 != 0) {
              goto LABEL_89;
            }
            v17 = fw_memory_HeapManager_Allocate(*v8, 8 * v16, 16, 0);
          }
          else {
            v17 = 0;
          }
          v18 = v17 + 8 * v16;
          v19 = &v6[-v7];
          v20 = (__int64)&v12[v17 + -8 * v13];
          *(_QWORD*)&v12[v17] = v10;
          v6 = &v12[v17 + 8];
          memcpy(v20, v7, v19);
          *a1 = v20;
          a1[1] = (__int64)v6;
          a1[2] = v18;
          if (v7 != 0) {
            v21 = 128;
            if (*(_QWORD*)(*v8 + 200) == 0) {
              v21 = 56;
            }
            nn_mem_StandardAllocator_Free(*v8 + v21);
          }
          v7 = v20;
        }
        else {
          *(_QWORD*)v6 = v10;
          v6 += 8;
        }
        a1[1] = (__int64)v6;
      }
      if (v9 == 0) {
        break;
      }
      v3 = *(_QWORD*)(v9 + 432);
      v4 = v9;
      if (v3 == 0) {
        v22 = *(_QWORD*)(v9 + 440);
        v4 = v9;
        if (v22 != 0) {
          v23 = *(unsigned __int8*)(v22 + 16);
          v3 = 0;
          v4 = v9;
          if (v23 <= 8) {
            v24 = v23 - 3;
            while (1) {
              if (v24 == 0) {
                v3 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556096LL);
                if (v3 != 0) {
                  break;
                }
              }
              if (++v24 == 6) {
                v3 = 0;
                v4 = v9;
                goto LABEL_8;
              }
            }
            v4 = v9;
          }
        }
      }
    }
  }
  else {
    v6 = nullptr;
  }
  v25 = game_GameModeData_instance_;
  v49[1] = (unsigned __int64)&GameData_1ab52cc;
  v49[0] = game_HashString((__int64)&GameData_1ab52cc);
  v26 = game_GameVariableTable_Find(*(_QWORD**)(v25 + 48), v49);
  if (v26 == 0) {
    return;
  }
  if (*(_DWORD*)(v26 + 32) == 0) {
    return;
  }
  v27 = game_HashString((__int64)&GameData_1a99a72);
  if (v27 == 0) {
    return;
  }
  v28 = *(_QWORD*)(GameData_21c99c8 + 96);
  if (v28 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
    return;
  }
  v30 = v28 - 1;
  if ((v28 & (v28 - 1)) != 0) {
    v31 = v27;
    if (v27 >= v28) {
      v31 = v27 % v28;
    }
  }
  else {
    v31 = v30 & v27;
  }
  v33 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v31);
  if (v33 == nullptr) {
    return;
  }
  v34 = (_QWORD*)*v33;
  if (v34 == nullptr) {
    return;
  }
  if ((v28 & v30) == 0) {
    while (1) {
      v36 = v34[1];
      if (v36 == v27) {
        if (v34[2] == v27) {
          goto LABEL_69;
        }
      }
      else if ((v36 & v30) != v31) {
        return;
      }
      v34 = (_QWORD*)*v34;
      if (v34 == nullptr) {
        return;
      }
    }
  }
  while (1) {
    v35 = v34[1];
    if (v35 == v27) {
      break;
    }
    if (v35 >= v28) {
      v35 %= v28;
    }
    if (v35 != v31) {
      return;
    }
  LABEL_58:
    v34 = (_QWORD*)*v34;
    if (v34 == nullptr) {
      return;
    }
  }
  if (v34[2] != v27) {
    goto LABEL_58;
  }
LABEL_69:
  v37 = v34[3];
  if (v37 == 0) {
    return;
  }
  v38 = a1[2];
  if ((unsigned __int64)v6 < v38) {
    *(_QWORD*)v6 = v37;
    v39 = (__int64)(v6 + 8);
    goto LABEL_86;
  }
  v40 = *a1;
  v41 = (__int64)&v6[-*a1];
  v42 = (v41 >> 3) + 1;
  if (v42 >> 61 != 0) {
  LABEL_88:
    GameRoutine_688200_alt1();
  }
  v43 = v38 - v40;
  if (v43 >> 2 > v42) {
    v42 = v43 >> 2;
  }
  if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
    v44 = 0x1FFFFFFFFFFFFFFFLL;
  }
  else {
    v44 = v42;
  }
  if (v44 != 0) {
    if (v44 >> 61 == 0) {
      v45 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
      goto LABEL_82;
    }
  LABEL_89:
    GameRoutine_60a210_alt2();
  }
  v45 = 0;
LABEL_82:
  v46 = v45 + 8 * v44;
  v47 = v45 + v41 - 8 * (v41 >> 3);
  *(_QWORD*)(v45 + v41) = v37;
  v39 = v45 + v41 + 8;
  memcpy(v47, v40, v41);
  *a1 = v47;
  a1[2] = v46;
  if (v40 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48);
  }
LABEL_86:
  a1[1] = v39;
}

__int64 game_1213640(__int64 result, char* a2, __int64 a3, char a4)
{
  char* v7;
  char* v8;
  __int64 v9;
  int v10;
  int* v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  bool v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  bool v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  bool v50;
  char* v51;
  int v52;
  char* v53;
  char* v54;
  int v55;
  char* v56;
  int v57;
  char* v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  _BOOL4 v64;
  __int64 i;
  char* v66;
  unsigned __int64 v67;
  char v68;
  __int64 v69;
  char* v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  unsigned __int64 v73;
  int v74;
  int v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  unsigned __int64 v79;
  int v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  char* v88;
  unsigned __int64 v89;
  int v90;
  int v91;
  char v92;
  __int64 v93;
  char v94;
  __int64 v95;
  __int64 v96;
  __int64 k;
  int v98;
  unsigned __int64 v99;
  __int64 v100;
  int* v101;
  unsigned __int64 v102;
  int v103;
  int v104;
  char v105;
  __int64 v106;
  char v107;
  __int64 v108;
  __int64 v109;
  __int64 j;
  int v111;
  unsigned __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  int v116;
  char* v117;
  __int64 v118;
  __int64 v119;
  int* v120;
  unsigned __int64 v121;
  int* v122;
  int v123;
  unsigned __int64 v124;
  char* v125;
  int v126;
  char* v127;
  char v128;
  int v129;
  char* v130;
  char* v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  char* v137;
  int v138;
  int v139;
  int v140;
  int v141;
  int v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  int v152;
  int v153;
  int v154;
  int v155;
  int v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  int v163;
  int v164;
  int v165;
  int v166;
  int v167;
  int v168;
  int v169;
  int v170;
  int v171;
  int v172;
  int v173;
  int v174;
  int v175;
  int v176;
  int v177;
  int v178;
  char* v179;
  bool v181;
  __int64 v182;
  int* v183;
  char* v184;
  int v185;
  int v186;
  __int64 v187;
  __int64 v188;
  char* v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  __int64 v192;
  char* v193;
  int v194;
  bool v195;
  int* v196;
  int v197;
  int v198;
  __int64 v199;
  int v200;
  __int64 v201;
  char* v202;
  int v203;
  char* v204;
  int v205;
  int v206;
  bool v207;
  char* v208;
  char* v209;
  __int64 v210;
  __int64 v211;
  unsigned __int64 v212;
  unsigned __int64 v213;
  int v214;
  char* v215;
  int v216;
  int v217;
  int v218;

  v7 = (char*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        while (1) {
          v7 = v8;
          v9 = (a2 - v8) >> 2;
          if (v9 > 2) {
            switch (v9) {
            case 3LL:
              v160 = *((_DWORD*)v8 + 1);
              v161 = *((_DWORD*)a2 - 1);
              if (v160 <= v161) {
                v162 = *((_DWORD*)a2 - 1);
              }
              else {
                v162 = *((_DWORD*)v8 + 1);
              }
              if (v160 >= v161) {
                v160 = *((_DWORD*)a2 - 1);
              }
              *((_DWORD*)a2 - 1) = v160;
              *((_DWORD*)v8 + 1) = v162;
              v163 = *((_DWORD*)a2 - 1);
              if (v163 <= *(_DWORD*)v8) {
                v164 = *(_DWORD*)v8;
              }
              else {
                v164 = *((_DWORD*)a2 - 1);
              }
              if (v163 >= *(_DWORD*)v8) {
                v163 = *(_DWORD*)v8;
              }
              *((_DWORD*)a2 - 1) = v163;
              v166 = *(_DWORD*)v8;
              v165 = *((_DWORD*)v8 + 1);
              if (v164 <= v165) {
                v166 = *((_DWORD*)v8 + 1);
              }
              if (v164 < v165) {
                v165 = v164;
              }
              *(_DWORD*)v8 = v166;
              *((_DWORD*)v8 + 1) = v165;
              return result;
            case 4LL:
              v168 = *((_DWORD*)v8 + 1);
              v167 = *((_DWORD*)v8 + 2);
              if (*(_DWORD*)v8 <= v167) {
                v169 = *((_DWORD*)v8 + 2);
              }
              else {
                v169 = *(_DWORD*)v8;
              }
              if (*(_DWORD*)v8 < v167) {
                v167 = *(_DWORD*)v8;
              }
              *((_DWORD*)v8 + 2) = v167;
              *(_DWORD*)v8 = v169;
              v170 = *((_DWORD*)a2 - 1);
              if (v168 <= v170) {
                v171 = *((_DWORD*)a2 - 1);
              }
              else {
                v171 = v168;
              }
              if (v168 < v170) {
                v170 = v168;
              }
              *((_DWORD*)a2 - 1) = v170;
              v172 = *(_DWORD*)v8;
              if (*(_DWORD*)v8 <= v171) {
                v173 = v171;
              }
              else {
                v173 = *(_DWORD*)v8;
              }
              if (v172 >= v171) {
                v172 = v171;
              }
              *(_DWORD*)v8 = v173;
              *((_DWORD*)v8 + 1) = v172;
              v174 = *((_DWORD*)v8 + 2);
              v175 = *((_DWORD*)a2 - 1);
              if (v174 <= v175) {
                v176 = *((_DWORD*)a2 - 1);
              }
              else {
                v176 = *((_DWORD*)v8 + 2);
              }
              if (v174 >= v175) {
                v174 = *((_DWORD*)a2 - 1);
              }
              *((_DWORD*)a2 - 1) = v174;
              v177 = *((_DWORD*)v8 + 1);
              if (v177 <= v176) {
                v178 = v176;
              }
              else {
                v178 = *((_DWORD*)v8 + 1);
              }
              if (v177 >= v176) {
                v177 = v176;
              }
              *((_DWORD*)v8 + 1) = v178;
              *((_DWORD*)v8 + 2) = v177;
              return result;
            case 5LL:
              v138 = *(_DWORD*)v8;
              v139 = *((_DWORD*)v8 + 1);
              if (*(_DWORD*)v8 <= v139) {
                v140 = *((_DWORD*)v8 + 1);
              }
              else {
                v140 = *(_DWORD*)v8;
              }
              if (v138 >= v139) {
                v138 = *((_DWORD*)v8 + 1);
              }
              *(_DWORD*)v8 = v140;
              *((_DWORD*)v8 + 1) = v138;
              v141 = *((_DWORD*)v8 + 3);
              v142 = *((_DWORD*)a2 - 1);
              if (v141 <= v142) {
                v143 = *((_DWORD*)a2 - 1);
              }
              else {
                v143 = *((_DWORD*)v8 + 3);
              }
              if (v141 >= v142) {
                v141 = *((_DWORD*)a2 - 1);
              }
              *((_DWORD*)a2 - 1) = v141;
              *((_DWORD*)v8 + 3) = v143;
              v144 = *((_DWORD*)a2 - 1);
              v145 = *((_DWORD*)v8 + 2);
              if (v144 <= v145) {
                v146 = *((_DWORD*)v8 + 2);
              }
              else {
                v146 = *((_DWORD*)a2 - 1);
              }
              if (v144 >= v145) {
                v144 = *((_DWORD*)v8 + 2);
              }
              *((_DWORD*)a2 - 1) = v144;
              v148 = *((_DWORD*)v8 + 2);
              v147 = *((_DWORD*)v8 + 3);
              v149 = *((_DWORD*)v8 + 1);
              if (v146 <= v147) {
                v148 = *((_DWORD*)v8 + 3);
              }
              if (v146 < v147) {
                v147 = v146;
              }
              *((_DWORD*)v8 + 2) = v148;
              *((_DWORD*)v8 + 3) = v147;
              v150 = *((_DWORD*)a2 - 1);
              if (v149 <= v150) {
                v151 = *((_DWORD*)a2 - 1);
              }
              else {
                v151 = v149;
              }
              if (v149 < v150) {
                v150 = v149;
              }
              *((_DWORD*)a2 - 1) = v150;
              v152 = *(_DWORD*)v8;
              v154 = *((_DWORD*)v8 + 2);
              v153 = *((_DWORD*)v8 + 3);
              if (v153 <= *(_DWORD*)v8) {
                v155 = *(_DWORD*)v8;
              }
              else {
                v155 = *((_DWORD*)v8 + 3);
              }
              if (v153 >= v152) {
                v153 = *(_DWORD*)v8;
              }
              if (v155 <= v154) {
                v152 = *((_DWORD*)v8 + 2);
              }
              if (v155 < v154) {
                v154 = v155;
              }
              if (v153 <= v151) {
                v156 = v151;
              }
              else {
                v156 = v153;
              }
              if (v153 >= v151) {
                v153 = v151;
              }
              if (v156 <= v154) {
                v151 = v154;
              }
              *(_DWORD*)v8 = v152;
              *((_DWORD*)v8 + 1) = v151;
              if (v156 >= v154) {
                v157 = v154;
              }
              else {
                v157 = v156;
              }
              *((_DWORD*)v8 + 2) = v157;
              *((_DWORD*)v8 + 3) = v153;
              return result;
            default:
              break;
            }
          }
          else {
            if ((unsigned __int64)v9 < 2) {
              return result;
            }
            if (v9 == 2) {
              v158 = *((_DWORD*)a2 - 1);
              v159 = *(_DWORD*)v8;
              if (v158 > *(_DWORD*)v8) {
                *(_DWORD*)v8 = v158;
                *((_DWORD*)a2 - 1) = v159;
              }
              return result;
            }
          }
          if (v9 <= 23) {
            v179 = v8 + 4;
            v181 = v8 == a2 || v179 == a2;
            if ((a4 & 1) != 0) {
              if (!v181) {
                v182 = 4;
                v183 = (int*)v8;
                do {
                  v186 = *v183;
                  v185 = v183[1];
                  v183 = (int*)v179;
                  if (v185 > v186) {
                    v187 = v182;
                    do {
                      v188 = v187 - 4;
                      *(_DWORD*)&v8[v187] = v186;
                      if (v187 == 4) {
                        v184 = v8;
                        goto LABEL_302;
                      }
                      v189 = &v8[v187];
                      v187 -= 4;
                      v186 = *((_DWORD*)v189 - 2);
                    } while (v185 > v186);
                    v184 = &v8[v188];
                  LABEL_302:
                    *(_DWORD*)v184 = v185;
                  }
                  v179 = (char*)(v183 + 1);
                  v182 += 4;
                } while (v183 + 1 != (int*)a2);
              }
            }
            else if (!v181) {
              do {
                v218 = *(_DWORD*)v7;
                v217 = *((_DWORD*)v7 + 1);
                v7 = v179;
                if (v217 > v218) {
                  do {
                    *(_DWORD*)v179 = v218;
                    v218 = *((_DWORD*)v179 - 2);
                    v179 -= 4;
                  } while (v217 > v218);
                  *(_DWORD*)v179 = v217;
                }
                v179 = v7 + 4;
              } while (v7 + 4 != a2);
            }
            return result;
          }
          if (a3 == 0) {
            if (v8 != a2) {
              v190 = (unsigned __int64)(v9 - 2) >> 1;
              v191 = v190;
              do {
                if (v190 >= v191) {
                  v192 = (2 * (v191 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                  v193 = &v8[4 * v192];
                  if ((__int64)(2 * v191 + 2) >= v9) {
                    v194 = *(_DWORD*)v193;
                  }
                  else {
                    v194 = *((_DWORD*)v193 + 1);
                    v195 = *(_DWORD*)v193 <= v194;
                    if (*(_DWORD*)v193 < v194) {
                      v194 = *(_DWORD*)v193;
                    }
                    if (!v195) {
                      v193 += 4;
                      v192 = 2 * v191 + 2;
                    }
                  }
                  v196 = (int*)&v8[4 * v191];
                  v197 = *v196;
                  if (v194 <= *v196) {
                    while (1) {
                      *v196 = v194;
                      v196 = (int*)v193;
                      if ((__int64)v190 < v192) {
                        break;
                      }
                      v199 = (2 * (v192 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                      v192 = 2 * v192 + 2;
                      v193 = &v8[4 * v199];
                      if (v192 < v9) {
                        v194 = *(_DWORD*)v193;
                        v198 = *((_DWORD*)v193 + 1);
                        if (*(_DWORD*)v193 >= v198) {
                          v194 = *((_DWORD*)v193 + 1);
                        }
                        if (*(_DWORD*)v193 <= v198) {
                          v192 = v199;
                        }
                        else {
                          v193 += 4;
                        }
                        if (v194 > v197) {
                          break;
                        }
                      }
                      else {
                        v194 = *(_DWORD*)v193;
                        v192 = v199;
                        if (*(_DWORD*)v193 > v197) {
                          break;
                        }
                      }
                    }
                    *v196 = v197;
                  }
                }
                v17 = (__int64)v191-- <= 0;
              } while (!v17);
              do {
                v200 = *(_DWORD*)v8;
                v201 = 0;
                v202 = v8;
                do {
                  v209 = &v202[4 * v201];
                  v210 = (2 * v201) | 1;
                  v208 = v209 + 4;
                  v201 = 2 * v201 + 2;
                  if (v201 < v9) {
                    v205 = *((_DWORD*)v209 + 2);
                    v204 = v209 + 8;
                    v203 = v205;
                    v206 = *((_DWORD*)v204 - 1);
                    v207 = v206 <= v205;
                    if (v206 < v205) {
                      v203 = *((_DWORD*)v204 - 1);
                    }
                    if (v207) {
                      v201 = v210;
                    }
                    else {
                      v208 = v204;
                    }
                  }
                  else {
                    v203 = *(_DWORD*)v208;
                    v201 = v210;
                  }
                  *(_DWORD*)v202 = v203;
                  v202 = v208;
                } while (v201 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
                a2 -= 4;
                if (v208 == a2) {
                  *(_DWORD*)v208 = v200;
                }
                else {
                  *(_DWORD*)v208 = *(_DWORD*)a2;
                  *(_DWORD*)a2 = v200;
                  v211 = (v208 - v8 + 4) >> 2;
                  v17 = v211 < 2;
                  v212 = v211 - 2;
                  if (!v17) {
                    v213 = v212 >> 1;
                    v214 = *(_DWORD*)v208;
                    v215 = &v8[4 * v213];
                    v216 = *(_DWORD*)v215;
                    if (*(_DWORD*)v215 > *(_DWORD*)v208) {
                      do {
                        *(_DWORD*)v208 = v216;
                        v208 = v215;
                        if (v213 == 0) {
                          break;
                        }
                        v213 = (v213 - 1) >> 1;
                        v215 = &v8[4 * v213];
                        v216 = *(_DWORD*)v215;
                      } while (*(_DWORD*)v215 > v214);
                      *(_DWORD*)v208 = v214;
                    }
                  }
                }
                v17 = v9-- <= 2;
              } while (!v17);
            }
            return result;
          }
          v10 = *((_DWORD*)a2 - 1);
          v11 = (int*)&v8[4 * ((unsigned __int64)v9 >> 1)];
          if ((unsigned __int64)v9 < 0x81) {
            break;
          }
          v12 = *v11;
          if (*v11 <= v10) {
            v13 = *((_DWORD*)a2 - 1);
          }
          else {
            v13 = *v11;
          }
          if (v12 >= v10) {
            v12 = *((_DWORD*)a2 - 1);
          }
          *((_DWORD*)a2 - 1) = v12;
          *v11 = v13;
          v14 = *((_DWORD*)a2 - 1);
          if (v14 <= *(_DWORD*)v8) {
            v15 = *(_DWORD*)v8;
          }
          else {
            v15 = *((_DWORD*)a2 - 1);
          }
          if (v14 >= *(_DWORD*)v8) {
            v14 = *(_DWORD*)v8;
          }
          *((_DWORD*)a2 - 1) = v14;
          v16 = *v11;
          v17 = v15 <= *v11;
          if (v15 > *v11) {
            v16 = *(_DWORD*)v8;
          }
          *(_DWORD*)v8 = v16;
          v18 = *v11;
          if (v17) {
            v18 = v15;
          }
          *v11 = v18;
          v19 = *(v11 - 1);
          v20 = *((_DWORD*)a2 - 2);
          if (v19 <= v20) {
            v21 = *((_DWORD*)a2 - 2);
          }
          else {
            v21 = *(v11 - 1);
          }
          if (v19 >= v20) {
            v19 = *((_DWORD*)a2 - 2);
          }
          *((_DWORD*)a2 - 2) = v19;
          *(v11 - 1) = v21;
          v22 = *((_DWORD*)a2 - 2);
          v23 = *((_DWORD*)v8 + 1);
          if (v22 <= v23) {
            v24 = *((_DWORD*)v8 + 1);
          }
          else {
            v24 = *((_DWORD*)a2 - 2);
          }
          if (v22 >= v23) {
            v22 = *((_DWORD*)v8 + 1);
          }
          *((_DWORD*)a2 - 2) = v22;
          v25 = *(v11 - 1);
          v26 = v24 <= v25;
          if (v24 > v25) {
            v25 = *((_DWORD*)v8 + 1);
          }
          *((_DWORD*)v8 + 1) = v25;
          v27 = *(v11 - 1);
          if (v26) {
            v27 = v24;
          }
          *(v11 - 1) = v27;
          v28 = v11[1];
          v29 = *((_DWORD*)a2 - 3);
          if (v28 <= v29) {
            v30 = *((_DWORD*)a2 - 3);
          }
          else {
            v30 = v11[1];
          }
          if (v28 >= v29) {
            v28 = *((_DWORD*)a2 - 3);
          }
          *((_DWORD*)a2 - 3) = v28;
          v11[1] = v30;
          v31 = *((_DWORD*)a2 - 3);
          v32 = *((_DWORD*)v8 + 2);
          if (v31 <= v32) {
            v33 = *((_DWORD*)v8 + 2);
          }
          else {
            v33 = *((_DWORD*)a2 - 3);
          }
          if (v31 >= v32) {
            v31 = *((_DWORD*)v8 + 2);
          }
          *((_DWORD*)a2 - 3) = v31;
          v34 = v11[1];
          v35 = v33 <= v34;
          if (v33 > v34) {
            v34 = *((_DWORD*)v8 + 2);
          }
          *((_DWORD*)v8 + 2) = v34;
          v37 = *v11;
          v36 = v11[1];
          if (v35) {
            v36 = v33;
          }
          if (v37 <= v36) {
            v38 = v36;
          }
          else {
            v38 = *v11;
          }
          if (v37 < v36) {
            v36 = *v11;
          }
          v39 = *(v11 - 1);
          if (v36 <= v39) {
            v40 = *(v11 - 1);
          }
          else {
            v40 = v36;
          }
          if (v36 >= v39) {
            v36 = *(v11 - 1);
          }
          v11[1] = v36;
          if (v39 <= v38) {
            v41 = v38;
          }
          else {
            v41 = v39;
          }
          if (v39 <= v38) {
            v42 = v40;
          }
          else {
            v42 = v38;
          }
          *(v11 - 1) = v41;
          *v11 = v42;
          v43 = *(_DWORD*)v8;
          *(_DWORD*)v8 = v42;
          *v11 = v43;
          v44 = *(_DWORD*)v8;
          --a3;
          if ((a4 & 1) != 0) {
            goto LABEL_93;
          }
        LABEL_92:
          if (*((_DWORD*)v8 - 1) > v44) {
            goto LABEL_93;
          }
          if (v44 <= *((_DWORD*)a2 - 1)) {
            v130 = v8 + 4;
            do {
              v8 = v130;
              if (v130 >= a2) {
                break;
              }
              v130 += 4;
            } while (v44 <= *(_DWORD*)v8);
          }
          else {
            do {
              v129 = *((_DWORD*)v8 + 1);
              v8 += 4;
            } while (v44 <= v129);
          }
          v131 = a2;
          if (v8 < a2) {
            v131 = a2;
            do {
              v132 = *((_DWORD*)v131 - 1);
              v131 -= 4;
            } while (v44 > v132);
          }
          if (v8 < v131) {
            v133 = *(_DWORD*)v8;
            v134 = *(_DWORD*)v131;
            do {
              *(_DWORD*)v8 = v134;
              *(_DWORD*)v131 = v133;
              do {
                v135 = *((_DWORD*)v8 + 1);
                v8 += 4;
                v133 = v135;
              } while (v44 <= v135);
              do {
                v136 = *((_DWORD*)v131 - 1);
                v131 -= 4;
                v134 = v136;
              } while (v44 > v136);
            } while (v8 < v131);
          }
          v137 = v8 - 4;
          if (v7 != v8 - 4) {
            *(_DWORD*)v7 = *(_DWORD*)v137;
          }
          a4 = 0;
          *(_DWORD*)v137 = v44;
        }
        v45 = *(_DWORD*)v8;
        if (*(_DWORD*)v8 <= v10) {
          v46 = *((_DWORD*)a2 - 1);
        }
        else {
          v46 = *(_DWORD*)v8;
        }
        if (v45 >= v10) {
          v45 = *((_DWORD*)a2 - 1);
        }
        *((_DWORD*)a2 - 1) = v45;
        *(_DWORD*)v8 = v46;
        v47 = *((_DWORD*)a2 - 1);
        if (v47 <= *v11) {
          v48 = *v11;
        }
        else {
          v48 = *((_DWORD*)a2 - 1);
        }
        if (v47 >= *v11) {
          v47 = *v11;
        }
        *((_DWORD*)a2 - 1) = v47;
        v49 = *(_DWORD*)v8;
        v50 = v48 <= *(_DWORD*)v8;
        if (v48 > *(_DWORD*)v8) {
          v49 = *v11;
        }
        *v11 = v49;
        v44 = *(_DWORD*)v8;
        if (v50) {
          v44 = v48;
        }
        *(_DWORD*)v8 = v44;
        --a3;
        if ((a4 & 1) == 0) {
          goto LABEL_92;
        }
      LABEL_93:
        if (v44 <= *((_DWORD*)a2 - 1)) {
          v53 = v8 + 4;
          do {
            v51 = v53;
            if (v53 >= a2) {
              break;
            }
            v53 += 4;
          } while (v44 <= *(_DWORD*)v51);
        }
        else {
          v51 = v8;
          do {
            v52 = *((_DWORD*)v51 + 1);
            v51 += 4;
          } while (v44 <= v52);
        }
        v54 = a2;
        if (v51 < a2) {
          v54 = a2;
          do {
            v55 = *((_DWORD*)v54 - 1);
            v54 -= 4;
          } while (v44 > v55);
        }
        v56 = v51;
        if (v51 < v54) {
          v57 = *(_DWORD*)v51;
          *(_DWORD*)v51 = *(_DWORD*)v54;
          v56 = v51 + 4;
          *(_DWORD*)v54 = v57;
        }
        v58 = v54 - 4;
        v59 = v54 - 4 - v56;
        if (v59 < 505) {
          v82 = v59 >> 2;
          v64 = true;
          v60 = 0;
        LABEL_130:
          v86 = v82 + 1;
          v83 = (v82 + 1) / 2;
          v84 = v86 - v83;
          goto LABEL_131;
        }
        v60 = 0;
        v61 = 0;
        do {
          if (v61 == 0) {
            for (i = 0; i != 64; i += 16) {
              v66 = &v56[4 * i];
              v67 = ((unsigned __int64)(*((_DWORD*)v66 + 14) <= v44)
                     << ((unsigned __int8)i + 14)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 13) <= v44)
                     << ((unsigned __int8)i + 13)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 12) <= v44)
                     << ((unsigned __int8)i + 12)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 11) <= v44)
                     << ((unsigned __int8)i + 11)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 10) <= v44)
                     << ((unsigned __int8)i + 10)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 9) <= v44)
                     << ((unsigned __int8)i + 9)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 8) <= v44)
                     << ((unsigned __int8)i + 8)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 7) <= v44)
                     << ((unsigned __int8)i + 7)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 6) <= v44)
                     << ((unsigned __int8)i + 6)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 5) <= v44)
                     << ((unsigned __int8)i + 5)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 4) <= v44)
                     << ((unsigned __int8)i + 4)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 3) <= v44)
                     << ((unsigned __int8)i + 3)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 2) <= v44)
                     << ((unsigned __int8)i + 2)) |
                    ((unsigned __int64)(*((_DWORD*)v66 + 1) <= v44)
                     << ((unsigned __int8)i + 1)) |
                    ((unsigned __int64)(*(_DWORD*)v66 <= v44) << i) | v61;
              v68 = i + 15;
              v61 = ((unsigned __int64)(*((_DWORD*)v66 + 15) <= v44) << v68) |
                    v67;
            }
          }
          if (v60 == 0) {
            v69 = 0;
            v70 = v58;
            do {
              v71 = ((unsigned __int64)(*((_DWORD*)v70 - 9) > v44)
                     << ((unsigned __int8)v69 + 9)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 8) > v44)
                     << ((unsigned __int8)v69 + 8)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 7) > v44)
                     << ((unsigned __int8)v69 + 7)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 6) > v44)
                     << ((unsigned __int8)v69 + 6)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 5) > v44)
                     << ((unsigned __int8)v69 + 5)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 4) > v44)
                     << ((unsigned __int8)v69 + 4)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 3) > v44)
                     << ((unsigned __int8)v69 + 3)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 2) > v44)
                     << ((unsigned __int8)v69 + 2)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 1) > v44)
                     << ((unsigned __int8)v69 + 1)) |
                    ((unsigned __int64)(*(_DWORD*)v70 > v44) << v69) | v60;
              v72 = ((unsigned __int64)(*((_DWORD*)v70 - 12) > v44)
                     << ((unsigned __int8)v69 + 12)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 11) > v44)
                     << ((unsigned __int8)v69 + 11)) |
                    ((unsigned __int64)(*((_DWORD*)v70 - 10) > v44)
                     << ((unsigned __int8)v69 + 10));
              v73 = (unsigned __int64)(*((_DWORD*)v70 - 13) > v44)
                    << ((unsigned __int8)v69 + 13);
              v75 = *((_DWORD*)v70 - 15);
              v74 = *((_DWORD*)v70 - 14);
              v70 -= 64;
              v76 = ((unsigned __int64)(v74 > v44)
                     << ((unsigned __int8)v69 + 14)) |
                    v73 | v72 | v71;
              LOBYTE(v73) = v69 + 15;
              v69 += 16;
              v60 = ((unsigned __int64)(v75 > v44) << v73) | v76;
            } while (v69 != 64);
          }
          if (v61 != 0 && v60 != 0) {
            do {
              v77 = __rbit64(v61);
              v61 &= v61 - 1;
              v78 = __rbit64(v60);
              v79 = __clz(v77);
              v60 &= v60 - 1;
              v80 = *(_DWORD*)&v56[4 * v79];
              v81 = &v58[-4 * __clz(v78)];
              *(_DWORD*)&v56[4 * v79] = *(_DWORD*)v81;
              *(_DWORD*)v81 = v80;
            } while (v60 != 0 && v61 != 0);
          }
          if (v61 != 0) {
            v62 = 0;
          }
          else {
            v62 = 256;
          }
          v56 += v62;
          if (v60 != 0) {
            v63 = 0;
          }
          else {
            v63 = -256;
          }
          v64 = v60 == 0;
          v58 += v63;
        } while (v58 - v56 > 504);
        v82 = (v58 - v56) >> 2;
        if ((v60 | v61) == 0) {
          goto LABEL_130;
        }
        v83 = v82 - 63;
        v84 = 64;
        v85 = 64;
        if (v61 != 0) {
          if (v60 != 0) {
            goto LABEL_159;
          }
        LABEL_146:
          if (v83 >= 1) {
            if ((unsigned __int64)v83 >= 8) {
              v60 = 0;
              v100 = 0;
              v101 = (int*)v58;
              do {
                v102 = ((unsigned __int64)(*(v101 - 5) > v44)
                        << ((unsigned __int8)v100 + 5)) |
                       ((unsigned __int64)(*(v101 - 4) > v44)
                        << ((unsigned __int8)v100 + 4)) |
                       ((unsigned __int64)(*(v101 - 3) > v44)
                        << ((unsigned __int8)v100 + 3)) |
                       ((unsigned __int64)(*(v101 - 2) > v44)
                        << ((unsigned __int8)v100 + 2)) |
                       ((unsigned __int64)(*(v101 - 1) > v44)
                        << ((unsigned __int8)v100 + 1)) |
                       ((unsigned __int64)(*v101 > v44) << v100) | v60;
                v104 = *(v101 - 7);
                v103 = *(v101 - 6);
                v101 -= 8;
                v17 = v103 <= v44;
                v105 = v100 + 6;
                v106 = !v17;
                v17 = v104 <= v44;
                v107 = v100 + 7;
                v100 += 8;
                v108 = v106 << v105;
                v109 = !v17;
                v60 = (v109 << v107) | v108 | v102;
              } while (v100 != (v83 & 0x7FFFFFFFFFFFFFF8LL));
            }
            else {
              v60 = 0;
              v100 = 0;
              v101 = (int*)v58;
            }
            for (j = v83 & 7; j != 0; v60 |= v112) {
              v111 = *v101--;
              --j;
              v112 = (unsigned __int64)(v111 > v44) << v100++;
            }
          }
          goto LABEL_159;
        }
      LABEL_131:
        if (v83 < 1) {
          v61 = 0;
        }
        else {
          if ((unsigned __int64)v83 >= 8) {
            v61 = 0;
            v87 = 0;
            v88 = v56;
            do {
              v89 = ((unsigned __int64)(*((_DWORD*)v88 + 5) <= v44)
                     << ((unsigned __int8)v87 + 5)) |
                    ((unsigned __int64)(*((_DWORD*)v88 + 4) <= v44)
                     << ((unsigned __int8)v87 + 4)) |
                    ((unsigned __int64)(*((_DWORD*)v88 + 3) <= v44)
                     << ((unsigned __int8)v87 + 3)) |
                    ((unsigned __int64)(*((_DWORD*)v88 + 2) <= v44)
                     << ((unsigned __int8)v87 + 2)) |
                    ((unsigned __int64)(*((_DWORD*)v88 + 1) <= v44)
                     << ((unsigned __int8)v87 + 1)) |
                    ((unsigned __int64)(*(_DWORD*)v88 <= v44) << v87) | v61;
              v90 = *((_DWORD*)v88 + 6);
              v91 = *((_DWORD*)v88 + 7);
              v88 += 32;
              v17 = v90 <= v44;
              v92 = v87 + 6;
              v93 = v17;
              v17 = v91 <= v44;
              v94 = v87 + 7;
              v87 += 8;
              v95 = v93 << v92;
              v96 = v17;
              v61 = (v96 << v94) | v95 | v89;
            } while (v87 != (v83 & 0x7FFFFFFFFFFFFFF8LL));
          }
          else {
            v61 = 0;
            v87 = 0;
            v88 = v56;
          }
          for (k = v83 & 7; k != 0; v61 |= v99) {
            v98 = *(_DWORD*)v88;
            v88 += 4;
            --k;
            v99 = (unsigned __int64)(v98 <= v44) << v87++;
          }
        }
        v85 = v83;
        v83 = v84;
        if (v64) {
          goto LABEL_146;
        }
      LABEL_159:
        if (v61 != 0 && v60 != 0) {
          do {
            v113 = __rbit64(v61);
            v61 &= v61 - 1;
            v114 = __rbit64(v60);
            v115 = __clz(v113);
            v60 &= v60 - 1;
            v116 = *(_DWORD*)&v56[4 * v115];
            v117 = &v58[-4 * __clz(v114)];
            *(_DWORD*)&v56[4 * v115] = *(_DWORD*)v117;
            *(_DWORD*)v117 = v116;
          } while (v60 != 0 && v61 != 0);
        }
        v118 = v61 != 0 ? 0LL : v85;
        v8 = &v56[4 * v118];
        v119 = v60 != 0 ? 0LL : v83;
        v120 = (int*)&v58[-4 * v119];
        if (v61 != 0) {
          do {
            v121 = __clz(v61) ^ 0x3F;
            v122 = (int*)&v8[4 * v121];
            if (v120 != v122) {
              v123 = *v122;
              *v122 = *v120;
              *v120 = v123;
            }
            --v120;
            v61 &= ~(-1LL << v121);
          } while (v61 != 0);
          v8 = (char*)(v120 + 1);
        }
        else {
          for (; v60 != 0; v60 &= ~(-1LL << v124)) {
            v124 = __clz(v60) ^ 0x3F;
            v125 = (char*)&v120[-v124];
            if (v8 != v125) {
              v126 = *(_DWORD*)v125;
              *(_DWORD*)v125 = *(_DWORD*)v8;
              *(_DWORD*)v8 = v126;
            }
            v8 += 4;
          }
        }
        v127 = v8 - 4;
        if (v7 != v8 - 4) {
          *(_DWORD*)v7 = *(_DWORD*)v127;
        }
        *(_DWORD*)v127 = v44;
        if (v51 >= v54) {
          break;
        }
      LABEL_184:
        result = game_1213640(v7, v8 - 4, a3, a4 & 1);
        a4 = 0;
      }
      v128 = GameRoutine_1214620(v7, v8 - 4);
      result = GameRoutine_1214620(v8, a2);
      if ((result & 1) != 0) {
        break;
      }
      if ((v128 & 1) == 0) {
        goto LABEL_184;
      }
    }
    a2 = v8 - 4;
    if ((v128 & 1) == 0) {
      continue;
    }
    return result;
  }
}

__int64 game_1225500(_QWORD* a1, _DWORD* a2, _DWORD* a3)
{
  unsigned __int64 v3;
  __int64 v4;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 result;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  int v17;
  unsigned __int8* v18;
  _BYTE* v19;
  char v20;
  int v21;
  int v22;
  int v23;
  unsigned __int8* v24;
  _BYTE* v25;
  char v26;
  int v27;
  int v28;
  unsigned __int8* v29;
  unsigned __int64 v30;
  unsigned __int8* v31;
  unsigned __int64 v32;
  _QWORD v33[2];
  _BYTE* v34;
  _BYTE v35[32];

  v3 = a1[1];
  if (v3 != 0) {
    v4 = *a1;
    v7 = memchr(*a1, 40, a1[1]);
    v8 = v7 - v4;
    v9 = -(__int64)v3;
    v10 = v4 - 1;
    if (v7 == 0) {
      v8 = -1;
    }
    while (v9 != 0) {
      v11 = *(unsigned __int8*)(v10 + v3);
      ++v9;
      --v10;
      if (v11 == 41) {
        result = 0;
        if (v8 == -1 || v9 == 1) {
          return result;
        }
        if (v8 >= v3) {
          String_60a250("string_view::substr");
        }
        v13 = v8 + 1;
        v14 = ~v8 - v9;
        v15 = v4 + v13;
        v16 = v3 - v13;
        if (v16 < v14) {
          v14 = v16;
        }
        v33[0] = v15;
        v33[1] = v14;
        GameRoutine_1225280((void*)(&v31), v33);
        v17 = v32;
        if (v32 != 0) {
          if (v32 <= 0x1F) {
            v18 = v31;
            v19 = v35;
            do {
              v21 = *v18++;
              v20 = v21;
              if (v21 == 0) {
                break;
              }
              *v19++ = v20;
              --v17;
            } while (v17 != 0);
            *v19 = 0;
          }
          v22 = strtol(v35, &v29, 10);
          if (v35 != v29 && v29 - v35 == v32) {
            *a2 = v22;
            GameRoutine_1225280((void*)(&v29), v33);
            v23 = v30;
            if (v30 != 0) {
              if (v30 <= 0x1F) {
                v24 = v29;
                v25 = v35;
                do {
                  v27 = *v24++;
                  v26 = v27;
                  if (v27 == 0) {
                    break;
                  }
                  *v25++ = v26;
                  --v23;
                } while (v23 != 0);
                *v25 = 0;
              }
              v28 = strtol(v35, &v34, 10);
              if (v35 != v34 && v34 - v35 == v30) {
                *a3 = v28;
                return 1;
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

__int64 game_1254c80(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* v4;
  __int64* v5;
  int v6;
  _QWORD* v7;
  unsigned __int64 v8;
  char* v9;
  char* v10;
  signed __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  char* v39;
  int i;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64* v64;
  __int64* v65;
  char* v66;
  int j;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  unsigned __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  char* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  _BYTE* v83;
  __int64* v84;
  __int64* v85;
  __int64 v86;

  v1 = *(_QWORD*)(result + 152);
  v81 = *(_QWORD*)(result + 160);
  if (v1 != v81) {
    v2 = result;
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v4 = GameData_212c878[0];
    v5 = game_map_MapRandom_instance__ptr[0];
    do {
      v82 = v1;
      v6 = *(_DWORD*)(v2 + 180);
      v83 = *(_BYTE**)v1;
      *(_DWORD*)(v2 + 176) += *(unsigned __int16*)(**(_QWORD**)v1 + 426LL);
      *(_DWORD*)(v2 + 180) = v6 + *(unsigned __int16*)(*(_QWORD*)v83 + 428LL);
      v7 = *(_QWORD**)(*(_QWORD*)v83 + 24LL);
      v8 = v7[12] - v7[11];
      if ((int)(v8 >> 4) >= 1) {
        v9 = *(char**)(v2 + 184);
        v10 = *(char**)(v2 + 192);
        v11 = v10 - v9;
        v12 = (v10 - v9) >> 3;
        v13 = v12 + ((v8 >> 4) & 0x7FFFFFFF);
        if (v13 > (__int64)(*(_QWORD*)(v2 + 200) - (_QWORD)v9) >> 3) {
          if (v13 >> 61 != 0) {
            GameRoutine_6f26d0();
          }
          result = fw_memory_HeapManager_Allocate_alt1(*v3, 8 * v13, 16, 0);
          if (v9 != v10) {
            v14 = (_QWORD*)(result + v11 - 8 * v12);
            do {
              *v14 = 0;
              v15 = *(_QWORD*)v9;
              v9 += 8;
              *v14++ = v15;
            } while (v9 != v10);
            v9 = *(char**)(v2 + 184);
          }
          *(_QWORD*)(v2 + 184) = result + v11 - 8 * v12;
          *(_QWORD*)(v2 + 192) = result + v11;
          *(_QWORD*)(v2 + 200) = result + 8 * v13;
          if (v9 != nullptr) {
            v16 = 128;
            if (*(_QWORD*)(*v3 + 200LL) == 0) {
              v16 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v3 + v16);
          }
        }
        v7 = *(_QWORD**)(*(_QWORD*)v83 + 24LL);
        v17 = (__int64*)v7[11];
        v18 = (__int64*)v7[12];
        if (v17 != v18) {
          do {
            v19 = *v17;
            v86 = 0x100000000LL;
            if (v19 != 0) {
              v20 = *(unsigned __int16*)(v19 + 16);
              v21 = *(_QWORD*)(*v4 + 64);
              LOWORD(v86) = v20;
              if (*(_BYTE*)(*(_QWORD*)(v21 + 8LL * v20) + 73LL) == 17) {
                nn_os_LockMutex(&game_g_random_mutex);
                v22 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
                v23 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
                v24 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
                *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
                *((_DWORD*)v5 + 1) = v22;
                v25 = (v24 >> 8) ^ (v23 >> 19) ^ v24 ^ v23;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v23;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v25;
                result = nn_os_UnlockMutex(&game_g_random_mutex);
                v20 = (unsigned __int16)v86;
                HIDWORD(v86) =
                    HIDWORD(v86) & 0xFFFFC00F |
                    (16 * (((16 * (v25 - 1000 * ((v25 & 0x7FFFFFFFu) / 0x3E8)) +
                             16) >>
                            4) &
                           0x3FF));
              }
              v26 = *((_DWORD*)v17 + 2);
              v27 = v26 - 1;
              if (v26 >= 1 && v20 != 0) {
                if (v20 != 0) {
                LABEL_26:
                  result = game_8aef60(v2 + 184, &v86);
                }
                while (v27 != 0) {
                  --v27;
                  if ((_WORD)v86 != 0) {
                    goto LABEL_26;
                  }
                }
              }
            }
            v17 += 2;
          } while (v17 != v18);
          v7 = *(_QWORD**)(*(_QWORD*)v83 + 24LL);
        }
      }
      v29 = v7[15] - v7[14];
      if ((int)(v29 >> 4) >= 1) {
        v30 = *(_QWORD*)(v2 + 208);
        v31 = *(_QWORD*)(v2 + 216) - v30;
        v32 = (v31 >> 3) + ((v29 >> 4) & 0x7FFFFFFF);
        if (v32 > (*(_QWORD*)(v2 + 224) - v30) >> 3) {
          if (v32 >> 61 != 0) {
          LABEL_92:
            GameRoutine_6f93f0(result);
          }
          v33 = fw_memory_HeapManager_Allocate_alt1(*v3, 8 * v32, 16, 0);
          v34 = v33 + v31;
          v35 = v33 + 8 * v32;
          v36 = v33 + v31 - 8 * (v31 >> 3);
          result = memcpy(v36, v30, v31);
          *(_QWORD*)(v2 + 208) = v36;
          *(_QWORD*)(v2 + 216) = v34;
          *(_QWORD*)(v2 + 224) = v35;
          if (v30 != 0) {
            v37 = 128;
            if (*(_QWORD*)(*v3 + 200LL) == 0) {
              v37 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v3 + v37);
          }
        }
        v7 = *(_QWORD**)(*(_QWORD*)v83 + 24LL);
        v38 = (__int64*)v7[14];
        v84 = (__int64*)v7[15];
        if (v38 != v84) {
          do {
            if (*((int*)v38 + 2) >= 1) {
              v39 = *(char**)(v2 + 216);
              for (i = 0; i < *((_DWORD*)v38 + 2); ++i) {
                v41 = *v38;
                v42 = *(_QWORD*)(v2 + 224);
                if ((unsigned __int64)v39 < v42) {
                  *(_QWORD*)v39 = v41;
                  v39 += 8;
                }
                else {
                  v43 = *(_QWORD*)(v2 + 208);
                  v44 = &v39[-v43];
                  v45 = (__int64)&v39[-v43] >> 3;
                  v46 = v45 + 1;
                  if ((unsigned __int64)(v45 + 1) >> 61 != 0) {
                    goto LABEL_92;
                  }
                  v47 = v42 - v43;
                  if (v47 >> 2 > v46) {
                    v46 = v47 >> 2;
                  }
                  if ((unsigned __int64)v47 >= 0x7FFFFFFFFFFFFFF8LL) {
                    v48 = 0x1FFFFFFFFFFFFFFFLL;
                  }
                  else {
                    v48 = v46;
                  }
                  if (v48 != 0) {
                    if (v48 >> 61 != 0) {
                    LABEL_91:
                      GameRoutine_60a210(result);
                    }
                    v49 = fw_memory_HeapManager_Allocate_alt1(*v3, 8 * v48, 16,
                                                              0);
                  }
                  else {
                    v49 = 0;
                  }
                  v50 = v49 + 8 * v48;
                  v51 = &v39[-v43];
                  v52 = (__int64)&v44[v49 + -8 * v45];
                  *(_QWORD*)&v44[v49] = v41;
                  v39 = &v44[v49 + 8];
                  result = memcpy(v52, v43, v51);
                  *(_QWORD*)(v2 + 208) = v52;
                  *(_QWORD*)(v2 + 216) = v39;
                  *(_QWORD*)(v2 + 224) = v50;
                  if (v43 != 0) {
                    v53 = 128;
                    if (*(_QWORD*)(*v3 + 200LL) == 0) {
                      v53 = 56;
                    }
                    result = nn_mem_StandardAllocator_Free_alt1(*v3 + v53);
                  }
                }
                *(_QWORD*)(v2 + 216) = v39;
              }
            }
            v38 += 2;
          } while (v38 != v84);
          v7 = *(_QWORD**)(*(_QWORD*)v83 + 24LL);
        }
      }
      v54 = v7[18] - v7[17];
      if ((int)(v54 >> 4) >= 1) {
        v55 = *(_QWORD*)(v2 + 232);
        v56 = *(_QWORD*)(v2 + 240) - v55;
        v57 = (v56 >> 3) + ((v54 >> 4) & 0x7FFFFFFF);
        if (v57 > (*(_QWORD*)(v2 + 248) - v55) >> 3) {
          if (v57 >> 61 != 0) {
          LABEL_93:
            GameRoutine_6e56b0(result);
          }
          v58 = fw_memory_HeapManager_Allocate_alt1(*v3, 8 * v57, 16, 0);
          v59 = v58 + v56;
          v60 = v58 + 8 * v57;
          v61 = v58 + v56 - 8 * (v56 >> 3);
          result = memcpy(v61, v55, v56);
          *(_QWORD*)(v2 + 232) = v61;
          *(_QWORD*)(v2 + 240) = v59;
          *(_QWORD*)(v2 + 248) = v60;
          if (v55 != 0) {
            v62 = 128;
            if (*(_QWORD*)(*v3 + 200LL) == 0) {
              v62 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v3 + v62);
          }
        }
        v63 = *(_QWORD*)(*(_QWORD*)v83 + 24LL);
        v65 = *(__int64**)(v63 + 136);
        v64 = *(__int64**)(v63 + 144);
        v85 = v64;
        while (v65 != v64) {
          if (*((int*)v65 + 2) >= 1) {
            v66 = *(char**)(v2 + 240);
            for (j = 0; j < *((_DWORD*)v65 + 2); ++j) {
              v68 = *v65;
              v69 = *(_QWORD*)(v2 + 248);
              if ((unsigned __int64)v66 < v69) {
                *(_QWORD*)v66 = v68;
                v66 += 8;
              }
              else {
                v70 = *(_QWORD*)(v2 + 232);
                v71 = &v66[-v70];
                v72 = (__int64)&v66[-v70] >> 3;
                v73 = v72 + 1;
                if ((unsigned __int64)(v72 + 1) >> 61 != 0) {
                  goto LABEL_93;
                }
                v74 = v69 - v70;
                if (v74 >> 2 > v73) {
                  v73 = v74 >> 2;
                }
                if ((unsigned __int64)v74 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v75 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v75 = v73;
                }
                if (v75 != 0) {
                  if (v75 >> 61 != 0) {
                    goto LABEL_91;
                  }
                  v76 =
                      fw_memory_HeapManager_Allocate_alt1(*v3, 8 * v75, 16, 0);
                }
                else {
                  v76 = 0;
                }
                v77 = v76 + 8 * v75;
                v78 = &v66[-v70];
                v79 = (__int64)&v71[v76 + -8 * v72];
                *(_QWORD*)&v71[v76] = v68;
                v66 = &v71[v76 + 8];
                result = memcpy(v79, v70, v78);
                *(_QWORD*)(v2 + 232) = v79;
                *(_QWORD*)(v2 + 240) = v66;
                *(_QWORD*)(v2 + 248) = v77;
                if (v70 != 0) {
                  v80 = 128;
                  if (*(_QWORD*)(*v3 + 200LL) == 0) {
                    v80 = 56;
                  }
                  result = nn_mem_StandardAllocator_Free_alt1(*v3 + v80);
                }
              }
              *(_QWORD*)(v2 + 240) = v66;
            }
          }
          v64 = v85;
          v65 += 2;
        }
      }
      v83[11] |= 4u;
      v4 = GameData_212c878[0];
      v5 = game_map_MapRandom_instance__ptr[0];
      v1 = v82 + 8;
    } while (v82 + 8 != v81);
  }
  return result;
}

__n128 game_1255300(__int64 a1, long double a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  int v4;
  __int64* v5;
  unsigned __int16* v6;
  unsigned __int16* v7;
  int v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64* v11;
  __int64* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* v21;
  __int64 v22;
  __int64* v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  _QWORD* v30;
  __int64 v31;
  int v32;
  unsigned int v33;
  unsigned int v34;
  int v35;
  __int64 v36;
  __n128 result;
  int* v38;
  int* v39;
  __int64 v40;
  _QWORD* v41;
  int* v42;
  char v43;
  char v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  unsigned __int8 v49[12];
  _DWORD v50[3];
  struct {
    _QWORD* v51;
    __int64 v52;
  } v51_;
  _QWORD** v53;
  struct {
    _QWORD* v54;
    _BYTE* v55;
    __int64 v56;
    __int64 v57;
    _BYTE* v58;
    __int64 v59;
    int v60;
  } v54_;
  struct {
    int* v61;
    int* v62;
    __int64 v63;
  } v61_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_DWORD*)(a1 + 176);
  v61_.v62 = nullptr;
  v61_.v63 = 0;
  v61_.v61 = nullptr;
  if (v2 >= 1) {
    if (game_GameModeData_instance_ != 0) {
      v3 = a1;
      v4 = (*(_DWORD*)(game_GameModeData_instance_ + 72) + v2) &
           ~((*(_DWORD*)(game_GameModeData_instance_ + 72) + v2) >> 31);
      if (v4 >= 9999999) {
        v4 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
      v2 = *(_DWORD*)(a1 + 176);
    }
    else {
      v3 = a1;
    }
    ObeliskDestinyMenuItem_1a062a0((__int64)&v61_.v61, v2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    a1 = v3;
  }
  v47 = (_QWORD*)a1;
  v6 = *(unsigned __int16**)(a1 + 184);
  v7 = *(unsigned __int16**)(a1 + 192);
  v5 = (__int64*)(a1 + 184);
  if (v7 != v6) {
    while (1) {
      v8 = *v6;
      v6 += 4;
      if (v8 != 0) {
        break;
      }
      if (v6 == v7) {
        goto LABEL_27;
      }
    }
    game_8ae640(v5, 0, 0, a2),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v9 = (_QWORD*)v47[23];
    v10 = (_QWORD*)v47[24];
    if (v9 != v10) {
      v11 = GameData_212ceb0;
      v12 = GameData_212c8b0[0];
      do {
        *(_DWORD*)v49 = 8;
        *(_QWORD*)&v49[4] = *v9;
        if (*(_BYTE*)v11 != 0) {
          v14 = *v11;
        }
        else {
          v14 = 0;
        }
        *(_QWORD*)v50 = v14;
        WORD1(v51_.v51) = 0;
        HIDWORD(v51_.v51) = 0;
        v54_.v54 = nullptr;
        v54_.v55 = nullptr;
        v53 = &v54_.v54;
        v54_.v56 = 0;
        v54_.v57 = 0;
        v54_.v58 = nullptr;
        GameRoutine_930b90((__int64)&v51_.v51, (__int64)v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v54_.v59 = 0x100000000LL;
        v54_.v60 = -1;
        ObeliskDestinyMenuItem_1a06060(&v61_.v61, (int*)v49, 0),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        LODWORD(v51_.v52) = 0;
        v51_.v51 = nullptr;
        if ((v54_.v56 & 1) != 0) {
          *v54_.v58 = 0;
          v54_.v57 = 0;
        }
        else {
          LOWORD(v54_.v56) = 0;
        }
        GameRoutine_6e3b50((__int64)&v53, v54_.v54),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v54_.v54 = nullptr;
        v54_.v55 = nullptr;
        v53 = &v54_.v54;
        if ((v54_.v56 & 1) != 0) {
          v13 = v54_.v58;
          if (v54_.v58 != nullptr) {
            v15 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v15 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v15),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            v13 = v54_.v54;
          }
        }
        else {
          v13 = nullptr;
        }
        GameRoutine_6e3b50((__int64)&v53, v13),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        ++v9;
      } while (v9 != v10);
    }
  }
LABEL_27:
  v16 = (__int64*)v47[26];
  v17 = (__int64*)v47[27];
  if (v16 != v17) {
    v18 = GameData_212cf80[0];
    do {
      v19 = *v16;
      *(_QWORD*)v49 = 0;
      if (v19 != 0) {
        v49[0] = *(_BYTE*)(v19 + 16);
      }
      LegionPool_936f60((void*)((__int64)&v48), *(_QWORD*)(*(_QWORD*)v18 + 8LL),
                        v49, 0),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      ObeliskDestinyMenuItem_1a06a40(&v61_.v61, v19, 1),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      ++v16;
    } while (v16 != v17);
  }
  v20 = (__int64*)v47[29];
  v21 = (__int64*)v47[30];
  if (v20 != v21) {
    v22 = GameData_212cf88[0];
    v23 = game_map_MapRandom_instance__ptr[0];
    do {
      v25 = *v20;
      memset(v49, 0, sizeof(v49));
      v51_.v52 = 0;
      v53 = nullptr;
      v54_.v54 = nullptr;
      v54_.v55 = nullptr;
      *(_QWORD*)&v50[1] = &v51_.v51;
      v51_.v51 = nullptr;
      if (v25 != 0) {
        v49[0] = *(_BYTE*)(v25 + 16);
        nn_os_LockMutex(&game_g_random_mutex),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v26 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 8);
        v27 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 12);
        v28 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 4) = v26;
        v29 = (v28 >> 8) ^ (v27 >> 19) ^ v28 ^ v27;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 8) = v27;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 12) = v29;
        nn_os_UnlockMutex_alt1(&game_g_random_mutex),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(_WORD*)&v49[1] = __PAIR16__(v49[2], v29) & 0xFEFF;
      }
      RidePool_93c6a0((void*)((__int64)&v48), *(_QWORD*)(*(_QWORD*)v22 + 8LL),
                      v49, 0, 1),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      memset(v49, 0, sizeof(v49));
      if (((unsigned __int8)v53 & 1) != 0) {
        *v54_.v55 = 0;
        v54_.v54 = nullptr;
      }
      else {
        LOWORD(v53) = 0;
      }
      GameRoutine_6e3b50((__int64)&v50[1], v51_.v51),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v51_.v51 = nullptr;
      v51_.v52 = 0;
      *(_QWORD*)&v50[1] = &v51_.v51;
      if (((unsigned __int8)v53 & 1) != 0) {
        v30 = v54_.v55;
        if (v54_.v55 != nullptr) {
          v31 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v31 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v31),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v30 = v51_.v51;
        }
      }
      else {
        v30 = nullptr;
      }
      GameRoutine_6e3b50((__int64)&v50[1], v30),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      memset(v49, 0, sizeof(v49));
      v51_.v52 = 0;
      v53 = nullptr;
      v54_.v54 = nullptr;
      v54_.v55 = nullptr;
      *(_QWORD*)&v50[1] = &v51_.v51;
      v51_.v51 = nullptr;
      if (v25 != 0) {
        v49[0] = *(_BYTE*)(v25 + 16);
        nn_os_LockMutex(&game_g_random_mutex),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        v32 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 8);
        v33 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 12);
        v34 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23) ^
              (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23) << 11);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23) =
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 4);
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 4) = v32;
        v35 = (v34 >> 8) ^ (v33 >> 19) ^ v34 ^ v33;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 8) = v33;
        *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v23 + 12) = v35;
        nn_os_UnlockMutex_alt1(&game_g_random_mutex),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        *(_WORD*)&v49[1] = __PAIR16__(v49[2], v35) & 0xFEFF;
      }
      ObeliskDestinyMenuItem_1a06b90(&v61_.v61, (__int64)v49, 1),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      memset(v49, 0, sizeof(v49));
      if (((unsigned __int8)v53 & 1) != 0) {
        *v54_.v55 = 0;
        v54_.v54 = nullptr;
      }
      else {
        LOWORD(v53) = 0;
      }
      GameRoutine_6e3b50((__int64)&v50[1], v51_.v51),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v51_.v51 = nullptr;
      v51_.v52 = 0;
      *(_QWORD*)&v50[1] = &v51_.v51;
      if (((unsigned __int8)v53 & 1) != 0) {
        v24 = v54_.v55;
        if (v54_.v55 != nullptr) {
          v36 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v36 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v36),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v24 = v51_.v51;
        }
      }
      else {
        v24 = nullptr;
      }
      GameRoutine_6e3b50((__int64)&v50[1], v24),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      ++v20;
    } while (v20 != v21);
  }
  GameRoutine_1a05260(&v61_.v61, (__int64)v47, 0,
                      (__int64)"MID_Subquest_ChapterReward_Message", nullptr),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v38 = v61_.v61;
  if (v61_.v61 != nullptr) {
    if (v61_.v61 == v61_.v62) {
      goto LABEL_72;
    }
    v39 = v61_.v62 - 10;
    v40 = fw_memory_g_heap_manager_ptr;
    do {
      v43 = *((_BYTE*)v39 - 8);
      *(v39 - 10) = 0;
      *((_QWORD*)v39 - 6) = 0;
      if ((v43 & 1) != 0) {
        **((_BYTE**)v39 + 1) = 0;
        *(_QWORD*)v39 = 0;
      }
      else {
        *((_WORD*)v39 - 4) = 0;
      }
      GameRoutine_6e3b50((__int64)(v39 - 8), *((_QWORD**)v39 - 3)),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v44 = *((_BYTE*)v39 - 8);
      *((_QWORD*)v39 - 3) = 0;
      *((_QWORD*)v39 - 2) = 0;
      *((_QWORD*)v39 - 4) = v39 - 6;
      if ((v44 & 1) != 0) {
        v41 = *((_QWORD**)v39 + 1);
        if (v41 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) != 0) {
            v45 = 128;
          }
          else {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v45),
              result = COERCE_AS(__typeof__(result),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
          v41 = *((_QWORD**)v39 - 3);
        }
      }
      else {
        v41 = nullptr;
      }
      GameRoutine_6e3b50((__int64)(v39 - 8), v41),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v42 = v39 - 18;
      v39 -= 28;
    } while (v42 != v38);
    v61_.v62 = v38;
    if (v61_.v61 != nullptr) {
    LABEL_72:
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
    }
  }
  return result;
}

void game_12645e0(__int64* a1, __n128 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  int v4;
  _QWORD* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  unsigned int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v32;
  __int64* v33;
  int v34;
  _QWORD* v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v47;
  struct {
    __int64* v48;
    __int64* v49;
  } v48_;
  __int64* v50;
  struct {
    _QWORD* v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    _BYTE* v55;
  } v51_;
  __int64 v56;

  v2 = *a1;
  v3 = a1;
  if (*(_WORD*)(*a1 + 426) != 0 && game_GameModeData_instance_ != 0) {
    v4 = (*(_DWORD*)(game_GameModeData_instance_ + 72) +
          *(unsigned __int16*)(*a1 + 426)) &
         ~((*(_DWORD*)(game_GameModeData_instance_ + 72) +
            *(unsigned __int16*)(*a1 + 426)) >>
           31);
    if (v4 >= 9999999) {
      v4 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
    v2 = *a1;
  }
  v5 = *(_QWORD**)(v2 + 24);
  v6 = (__int64*)v5[11];
  v7 = (__int64*)v5[12];
  if ((int)((unsigned __int64)((char*)v7 - (char*)v6) >> 4) >= 1) {
    v8 = ((unsigned __int64)((char*)v7 - (char*)v6) >> 4) & 0x7FFFFFFF;
    v48_.v49 = nullptr;
    v50 = nullptr;
    v48_.v48 = nullptr;
    if (v8 != 0) {
      v48_.v48 = (__int64*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v8, 16, 0);
      v48_.v49 = v48_.v48;
      v50 = &v48_.v48[v8];
      v9 = *(_QWORD*)(*v3 + 24);
      v6 = *(__int64**)(v9 + 88);
      v7 = *(__int64**)(v9 + 96);
    }
    if (v6 != v7) {
      v10 = GameData_212c878[0];
      v11 = game_map_MapRandom_instance__ptr[0];
      do {
        v12 = *v6;
        v56 = 0x100000000LL;
        if (v12 != 0) {
          v13 = *(unsigned __int16*)(v12 + 16);
          v14 = *(_QWORD*)(*v10 + 64);
          LOWORD(v56) = v13;
          if (*(_BYTE*)(*(_QWORD*)(v14 + 8LL * v13) + 73LL) == 17) {
            nn_os_LockMutex(&game_g_random_mutex);
            v15 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11);
            v16 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4);
            v17 = *(_DWORD*)v11 ^ (*(_DWORD*)v11 << 11);
            *(_DWORD*)v11 = *((_DWORD*)v11 + 1);
            *((_DWORD*)v11 + 1) = v15;
            v18 = (v17 >> 8) ^ (v16 >> 19) ^ v17 ^ v16;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v16;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4) = v18;
            a2 = nn_os_UnlockMutex_alt1(&game_g_random_mutex);
            v13 = (unsigned __int16)v56;
            HIDWORD(v56) =
                HIDWORD(v56) & 0xFFFFC00F |
                (16 *
                 (((16 * (v18 - 1000 * ((v18 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                   4) &
                  0x3FF));
          }
          v19 = *((_DWORD*)v6 + 2);
          v20 = v19 - 1;
          if (v19 >= 1 && v13 != 0) {
            if (v13 != 0) {
            LABEL_20:
              game_8aef60_alt1(&v48_.v48, (unsigned __int16*)&v56, a2);
            }
            while (v20 != 0) {
              --v20;
              if ((_WORD)v56 != 0) {
                goto LABEL_20;
              }
            }
          }
        }
        v6 += 2;
      } while (v6 != v7);
    }
    game_8ae640((__int64*)&v48_.v48, 0, 0, *(long double*)&a2);
    if (v48_.v48 != nullptr) {
      v48_.v49 = v48_.v48;
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v22);
    }
    v3 = a1;
    v2 = *a1;
    v5 = *(_QWORD**)(*a1 + 24);
  }
  v24 = (__int64*)v5[14];
  v23 = (__int64*)v5[15];
  if ((int)((unsigned __int64)((char*)v23 - (char*)v24) >> 4) >= 1 &&
      v24 != v23) {
    v26 = GameData_212cf80[0];
    do {
      if (*((int*)v24 + 2) >= 1) {
        v27 = 0;
        do {
          v28 = *v24;
          v48_.v48 = nullptr;
          if (v28 != 0) {
            LOBYTE(v48_.v48) = *(_BYTE*)(v28 + 16);
          }
          LegionPool_936f60((void*)((__int64)&v56),
                            *(_QWORD*)(*(_QWORD*)v26 + 8LL),
                            (unsigned __int8*)&v48_.v48, 0);
          ++v27;
        } while (v27 < *((_DWORD*)v24 + 2));
      }
      v24 += 2;
    } while (v24 != v23);
    v2 = *v3;
    v5 = *(_QWORD**)(*v3 + 24);
  }
  v30 = (__int64*)v5[17];
  v29 = (__int64*)v5[18];
  if ((int)((unsigned __int64)((char*)v29 - (char*)v30) >> 4) >= 1 &&
      v30 != v29) {
    v32 = GameData_212cf88[0];
    v33 = game_map_MapRandom_instance__ptr[0];
    v47 = (__int64*)v5[18];
    do {
      if (*((int*)v30 + 2) >= 1) {
        v34 = 0;
        do {
          v36 = *v30;
          LODWORD(v48_.v49) = 0;
          v48_.v48 = nullptr;
          v51_.v52 = 0;
          v51_.v53 = 0;
          v51_.v54 = 0;
          v51_.v55 = nullptr;
          v50 = (__int64*)&v51_.v51;
          v51_.v51 = nullptr;
          if (v36 != 0) {
            LOBYTE(v48_.v48) = *(_BYTE*)(v36 + 16);
            nn_os_LockMutex(&game_g_random_mutex);
            v37 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 8);
            v38 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 12);
            v39 = *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33) ^
                  (*(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33) << 11);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33) =
                *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 4);
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 4) = v37;
            v40 = (v39 >> 8) ^ (v38 >> 19) ^ v39 ^ v38;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 8) = v38;
            *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v33 + 12) = v40;
            nn_os_UnlockMutex_alt1(&game_g_random_mutex);
            *(_WORD*)((char*)&v48_.v48 + 1) =
                __PAIR16__(BYTE2(v48_.v48), v40) & 0xFEFF;
          }
          RidePool_93c6a0((void*)((__int64)&v56),
                          *(_QWORD*)(*(_QWORD*)v32 + 8LL),
                          (unsigned __int8*)&v48_.v48, 0, 1);
          v48_.v48 = nullptr;
          LODWORD(v48_.v49) = 0;
          if ((v51_.v53 & 1) != 0) {
            *v51_.v55 = 0;
            v51_.v54 = 0;
          }
          else {
            LOWORD(v51_.v53) = 0;
          }
          GameRoutine_6e3b50((__int64)&v50, v51_.v51);
          v51_.v51 = nullptr;
          v51_.v52 = 0;
          v50 = (__int64*)&v51_.v51;
          if ((v51_.v53 & 1) != 0) {
            v35 = v51_.v55;
            if (v51_.v55 != nullptr) {
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                  0) {
                v41 = 128;
              }
              else {
                v41 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v41);
              v35 = v51_.v51;
            }
          }
          else {
            v35 = nullptr;
          }
          GameRoutine_6e3b50((__int64)&v50, v35);
          ++v34;
        } while (v34 < *((_DWORD*)v30 + 2));
      }
      v30 += 2;
    } while (v30 != v47);
    v3 = a1;
    v2 = *a1;
  }
  if (*(_WORD*)(v2 + 480) != 0) {
    v42 = 8LL * *(unsigned __int16*)(v2 + 480);
    v43 = 0;
    do {
      v48_.v49 = *(__int64**)(*(_QWORD*)(v2 + 488) + v43);
      v48_.v48 = (__int64*)game_HashString((__int64)v48_.v49);
      game_VariableManager_SetFlag((__int64)&v48_.v48, 1);
      v43 += 8;
    } while (v42 != v43);
    v2 = *v3;
  }
  if (*(_WORD*)(v2 + 304) != 0) {
    v44 = 8LL * *(unsigned __int16*)(v2 + 304);
    v45 = 0;
    do {
      v48_.v49 = *(__int64**)(*(_QWORD*)(v2 + 312) + v45);
      v48_.v48 = (__int64*)game_HashString((__int64)v48_.v49);
      game_VariableManager_SetFlag((__int64)&v48_.v48, 0);
      v45 += 8;
    } while (v44 != v45);
  }
}

unsigned __int64* game_1268280(unsigned __int64* result, unsigned __int64* a2,
                               unsigned __int64 a3, unsigned __int64* a4,
                               __int64 a5)
{
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64* v7;
  __int64 v8;
  unsigned __int64* v9;
  unsigned __int64* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v16;
  unsigned __int64* v17;
  unsigned __int64* v20;
  unsigned __int64* v22;
  unsigned __int64* v23;
  unsigned __int64* v24;
  unsigned __int64* v25;
  unsigned __int64 v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;

  if (a3 >= 2) {
    if (a3 == 2) {
      v5 = *(a2 - 1);
      v6 = *result;
      if (v5 < *result) {
        *result = v5;
        *(a2 - 1) = v6;
      }
    }
    else if ((__int64)a3 > 128) {
      v14 = a3 >> 1;
      v16 = a3 - (a3 >> 1);
      if ((__int64)a3 <= a5) {
        v20 = result;
        v22 = a4;
        GameRoutine_12684a0(result, (__int64*)&result[v14], a3 >> 1, a4);
        v23 = &v22[v14];
        result = GameRoutine_12684a0(&v20[v14], (__int64*)a2, v16, v23);
        v24 = &v22[a3];
        v25 = v23;
        while (v25 != v24) {
          v26 = *v25;
          v27 = *v25 >= *v22;
          if (*v25 < *v22) {
            v28 = 0;
          }
          else {
            v26 = *v22;
            v28 = 8;
          }
          v22 = (unsigned __int64*)((char*)v22 + v28);
          if (v27) {
            v29 = 0;
          }
          else {
            v29 = 8;
          }
          *v20++ = v26;
          v25 = (unsigned __int64*)((char*)v25 + v29);
          if (v22 == v23) {
            while (v25 != v24) {
              v31 = *v25++;
              *v20++ = v31;
            }
            return result;
          }
        }
        while (v22 != v23) {
          v30 = *v22++;
          *v20++ = v30;
        }
      }
      else {
        v17 = result;
        game_1268280(result, (__int64*)&result[v14], a3 >> 1, a4, a5);
        game_1268280(&v17[v14], (__int64*)a2, v16, a4, a5);
        return game_12686a0(v17, &v17[v14], a2, v14, v16, (__int64)a4, a5);
      }
    }
    else if (result != a2) {
      v7 = result + 1;
      if (result + 1 != a2) {
        v8 = 0;
        v9 = result;
        do {
          v12 = *v9;
          v11 = v9[1];
          v9 = v7;
          if (v11 < v12) {
            v13 = v8;
            do {
              *(unsigned __int64*)((char*)result + v13 + 8) = v12;
              if (v13 == 0) {
                v10 = result;
                goto LABEL_11;
              }
              v12 = *(unsigned __int64*)((char*)result + v13 - 8);
              v13 -= 8;
            } while (v11 < v12);
            v10 = (unsigned __int64*)((char*)result + v13 + 8);
          LABEL_11:
            *v10 = v11;
          }
          v7 = v9 + 1;
          v8 += 8;
        } while (v9 + 1 != a2);
      }
    }
  }
  return result;
}

unsigned __int64* game_12686a0(unsigned __int64* result, unsigned __int64* a2,
                               unsigned __int64* a3, __int64 a4, __int64 a5,
                               __int64 a6, __int64 a7)
{
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64* v12;
  unsigned __int64* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64* v16;
  unsigned __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64* v22;
  unsigned __int64* v23;
  unsigned __int64 v24;
  unsigned __int64* v25;
  unsigned __int64* v26;
  unsigned __int64* v27;
  signed __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  signed __int64 v33;
  unsigned __int64* v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64* v45;
  unsigned __int64* v46;
  unsigned __int64* v47;
  unsigned __int64* v48;
  __int64 v49;
  bool v50;
  char v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64* v55;
  unsigned __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64* v60;
  __int64 v61;
  _QWORD* v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  bool v65;
  __int64 v66;
  _QWORD* v67;
  __int64* v68;
  __int64 v69;
  unsigned __int64 v70;
  bool v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  unsigned __int64* v77;
  unsigned __int64* v78;
  unsigned __int64* v79;

  if (a5 != 0) {
    while (a4 > a7 && a5 > a7) {
      if (a4 == 0) {
        return result;
      }
      v9 = *a2;
      while (1) {
        v10 = *result;
        if (v9 < *result) {
          break;
        }
        ++result;
        if (--a4 == 0) {
          return result;
        }
      }
      if (a4 >= a5) {
        if (a4 == 1) {
          *result = v9;
          *a2 = v10;
          return result;
        }
        v19 = a4 / 2;
        v13 = &result[a4 / 2];
        if (a3 == a2) {
          v12 = a3;
        }
        else {
          v20 = a3 - a2;
          v12 = a2;
          do {
            v21 = v20 >> 1;
            v22 = &v12[v20 >> 1];
            v24 = *v22;
            v23 = v22 + 1;
            v20 += ~(v20 >> 1);
            if (v24 < *v13) {
              v12 = v23;
            }
            else {
              v20 = v21;
            }
          } while (v20 != 0);
        }
        v11 = v12 - a2;
      }
      else {
        v11 = a5 / 2;
        v12 = &a2[a5 / 2];
        if (result == a2) {
          v13 = a2;
        }
        else {
          v13 = result;
          v14 = a2 - result;
          do {
            v15 = v14 >> 1;
            v16 = &v13[v14 >> 1];
            v18 = *v16;
            v17 = v16 + 1;
            v14 += ~(v14 >> 1);
            if (*v12 < v18) {
              v14 = v15;
            }
            else {
              v13 = v17;
            }
          } while (v14 != 0);
        }
        v19 = v13 - result;
      }
      v25 = v12;
      if (v13 != a2) {
        v25 = v13;
        if (a2 != v12) {
          v26 = v13 + 1;
          if (v13 + 1 == a2) {
            v33 = (char*)v12 - (char*)a2;
            v34 = a3;
            v35 = a5;
            v36 = a4;
            v76 = *v13;
            v78 = result;
            memmove(v13, v13 + 1, (char*)v12 - (char*)a2);
            result = v78;
            v25 = (unsigned __int64*)((char*)v13 + v33);
            a4 = v36;
            a5 = v35;
            a3 = v34;
            *v25 = v76;
          }
          else {
            v27 = a2 + 1;
            if (a2 + 1 == v12) {
              v37 = *(v12 - 1);
              v25 = v13 + 1;
              if (v12 - 1 != v13) {
                v77 = a3;
                v79 = result;
                v38 = a5;
                v39 = a4;
                memmove(v13 + 1, v13, (char*)(v12 - 1) - (char*)v13);
                a3 = v77;
                result = v79;
                a4 = v39;
                a5 = v38;
              }
              *v13 = v37;
            }
            else {
              v28 = (char*)a2 - (char*)v13;
              v29 = a2 - v13;
              v30 = v12 - a2;
              if (v29 == v30) {
                do {
                  v31 = *(v26 - 1);
                  *(v26 - 1) = *(v27 - 1);
                  *(v27 - 1) = v31;
                  if (v26 == a2) {
                    break;
                  }
                  ++v26;
                } while (v27++ != v12);
                v25 = a2;
              }
              else {
                v40 = a2 - v13;
                do {
                  v41 = v40;
                  v40 = v30;
                  v30 = v41 % v30;
                } while (v30 != 0);
                if (8 * v40 != 0) {
                  v42 = &v13[v40];
                  do {
                    v44 = *--v42;
                    v43 = v44;
                    v45 = (unsigned __int64*)((char*)v42 + v28);
                    v46 = v42;
                    do {
                      v47 = v45;
                      *v46 = *v45;
                      v48 = (unsigned __int64*)((char*)v45 + v28);
                      v49 = v12 - v45;
                      v50 = __OFSUB__(v29, v49);
                      v52 = v29 - v49;
                      v51 = (v52 < 0) ^ v50;
                      v45 = &v13[v52];
                      if (v51) {
                        v45 = v48;
                      }
                      v46 = v47;
                    } while (v45 != v42);
                    *v47 = v43;
                  } while (v42 != v13);
                }
                v25 =
                    (unsigned __int64*)((char*)v13 + ((char*)v12 - (char*)a2));
              }
            }
          }
        }
      }
      v53 = a4 - v19;
      v54 = a5 - v11;
      if (v19 + v11 >= v53 + v54) {
        v60 = result;
        game_12686a0(v25, v12, a3, v53, v54, a6, a7);
        result = v60;
        a5 = v11;
        a4 = v19;
        a3 = v25;
        a2 = v13;
        if (v11 == 0) {
          return result;
        }
      }
      else {
        v55 = v13;
        v56 = a3;
        v57 = v53;
        v58 = v19;
        v59 = v54;
        game_12686a0(result, v55, v25, v58, v11, a6, a7);
        a4 = v57;
        a5 = v59;
        a3 = v56;
        result = v25;
        a2 = v12;
        if (v59 == 0) {
          return result;
        }
      }
    }
    if (a4 <= a5) {
      if (result != a2) {
        v66 = -a6;
        v67 = (_QWORD*)a6;
        v68 = (__int64*)result;
        do {
          v69 = *v68++;
          v66 -= 8;
          *v67++ = v69;
        } while (v68 != (__int64*)a2);
        while (a2 != a3) {
          v70 = *a2;
          v71 = *a2 >= *(_QWORD*)a6;
          if (*a2 < *(_QWORD*)a6) {
            v72 = 8;
          }
          else {
            v70 = *(_QWORD*)a6;
            v72 = 0;
          }
          a2 = (unsigned __int64*)((char*)a2 + v72);
          if (v71) {
            v73 = 8;
          }
          else {
            v73 = 0;
          }
          *result++ = v70;
          a6 += v73;
          if (v67 == (_QWORD*)a6) {
            return result;
          }
        }
        return (unsigned __int64*)memmove(result, a6, -(a6 + v66));
      }
    }
    else if (a2 != a3) {
      v61 = 0;
      do {
        *(_QWORD*)(a6 + v61 * 8) = a2[v61];
        ++v61;
      } while (&a2[v61] != a3);
      v62 = (_QWORD*)(a6 + v61 * 8);
      while (a2 != result) {
        v63 = *(a2 - 1);
        v64 = *(v62 - 1);
        v65 = v64 >= v63;
        if (v64 > v63) {
          v63 = *(v62 - 1);
        }
        if (v65) {
          --v62;
        }
        else {
          --a2;
        }
        *--a3 = v63;
        if (v62 == (_QWORD*)a6) {
          return result;
        }
      }
      if ((_QWORD*)a6 != v62) {
        v74 = 0x1FFFFFFFFFFFFFFFLL;
        do {
          v75 = *--v62;
          a3[v74--] = v75;
        } while (v62 != (_QWORD*)a6);
      }
    }
  }
  return result;
}

void game_126e030()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v0 = *(_QWORD*)(game_g_frame_clock + 13224);
  v1 = *(_QWORD*)(v0 + 48);
  v2 = *(_QWORD*)(v0 + 56);
  if (v2 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 8), 1u,
                              memory_order_relaxed);
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 288LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak();
    }
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(v1 + 8) + 288LL);
  }
  if (*(_BYTE*)(v3 + 90) == 1) {
    *(_WORD*)(v3 + 89) = 0;
  }
  if (*(_BYTE*)(v3 + 712) == 1) {
    *(_DWORD*)(v3 + 708) = 0;
    *(_BYTE*)(v3 + 712) = 0;
  }
}

__attribute__((swiftcall)) void game_127c260(PSEUDO_X8 x8_, __int64 a1,
                                             unsigned int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
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
  unsigned __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 result;
  __int64 v37;
  _QWORD* v38;
  _QWORD v39[4];
  _QWORD* v40;
  _QWORD v41[10];

  v3 = a3;
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v4 = *(_QWORD*)a1;
  LODWORD(v5) = a2;
  v39[0] = GameData_201f9b8;
  v40 = v39;
  if (v4 != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 24) + 8LL);
    v3[1] = 0;
    v7 = v3 + 1;
    if (a2 == 0) {
      goto LABEL_62;
    }
    if ((a2 & 0x80000000) != 0) {
    LABEL_69:
      GameRoutine_6e56b0(a1);
    }
  }
  else {
    v3[1] = 0;
    v7 = v3 + 1;
    if (a2 == 0) {
      goto LABEL_62;
    }
    v6 = 0;
    if ((a2 & 0x80000000) != 0) {
      goto LABEL_69;
    }
  }
  a1 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * a2, 16, 0);
  *v3 = a1;
  v3[1] = a1;
  v3[2] = a1 + 8LL * (unsigned int)v5;
  if ((unsigned int)v5 >= 0x50) {
    v5 = 80;
  }
  else {
    v5 = (unsigned int)v5;
  }
  if (v6 != 0) {
    v8 = v6 + 40;
    v9 = (_QWORD*)a1;
    v10 = 0;
    v11 = 0;
    v38 = v7;
    while (1) {
      v12 = *(const char**)(v8 + 8 * v10);
      if (v12 == nullptr) {
        goto LABEL_44;
      }
      if ((unsigned int)strcmp(*(_QWORD*)(v8 + 8 * v10), &GameData_1a94a43) ==
          0) {
        goto LABEL_40;
      }
      nn_util_SNPrintf(v41, 80, "%s%s", "RID_", v12);
      v14 = game_HashString_alt1(v41);
      if (v14 == 0) {
        goto LABEL_40;
      }
      v15 = *(_QWORD*)(GameData_21c99a8 + 96);
      if (v15 == 0 || *(_QWORD*)(GameData_21c99a8 + 112) == 0) {
        goto LABEL_40;
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
      LABEL_40:
        v22 = 0;
        goto LABEL_41;
      }
      if ((v15 & v17) == 0) {
        while (1) {
          v23 = v20[1];
          if (v23 == v14) {
            if (v20[2] == v14) {
              goto LABEL_60;
            }
          }
          else if ((v23 & v17) != v18) {
            goto LABEL_40;
          }
          v20 = (_QWORD*)*v20;
          v22 = 0;
          if (v20 == nullptr) {
            goto LABEL_41;
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
          goto LABEL_40;
        }
      LABEL_30:
        v20 = (_QWORD*)*v20;
        if (v20 == nullptr) {
          goto LABEL_40;
        }
      }
      if (v20[2] != v14) {
        goto LABEL_30;
      }
    LABEL_60:
      v22 = v20[3];
    LABEL_41:
      v41[0] = v22;
      if (v40 == nullptr) {
        GameRoutine_60a310(0, v13);
      }
      a1 = (*(__int64 (**)(_QWORD*, _QWORD*))(*v40 + 48LL))(v40, v41);
      if ((a1 & 1) != 0) {
        v11 = v22;
      }
    LABEL_44:
      v24 = v3[2];
      if ((unsigned __int64)v9 < v24) {
        *v9++ = v11;
        goto LABEL_13;
      }
      v25 = *v3;
      v26 = v3;
      v27 = (__int64)v9 - *v3;
      v28 = (v27 >> 3) + 1;
      if (v28 >> 61 != 0) {
        goto LABEL_69;
      }
      v29 = v24 - v25;
      v30 = v5;
      if (v29 >> 2 > v28) {
        v28 = v29 >> 2;
      }
      if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF8LL) {
        v31 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v31 = v28;
      }
      if (v31 != 0) {
        if (v31 >> 61 != 0) {
          GameRoutine_60a210(a1);
        }
        v32 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v31, 16, 0);
      }
      else {
        v32 = 0;
      }
      v33 = v32 + 8 * v31;
      v34 = v32 + v27 - 8 * (v27 >> 3);
      *(_QWORD*)(v32 + v27) = v11;
      v9 = (_QWORD*)(v32 + v27 + 8);
      a1 = memcpy(v34, v25, v27);
      *v26 = v34;
      v26[1] = (__int64)v9;
      v3 = v26;
      v26[2] = v33;
      if (v25 != 0) {
        v35 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v35 = 56;
        }
        a1 = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v35);
      }
      v7 = v38;
      v5 = v30;
    LABEL_13:
      ++v10;
      *v7 = v9;
      if (v10 == v5) {
        goto LABEL_62;
      }
    }
  }
  v41[0] = 0;
  GameRoutine_6e56e0(v3, v5, v41);
LABEL_62:
  result = (__int64)v40;
  if (v40 == v39) {
    v37 = 32;
  }
  else {
    if (v40 == nullptr) {
      result;
      return;
    }
    v37 = 40;
  }
  {
    (*(__int64 (**)(__int64))(*v40 + v37))((__int64)v40);
    return;
  }
}

__int64 game_1286480(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 i;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int16 v15;
  unsigned __int16 v16;
  __int16 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int16 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int16 v29;
  unsigned __int16 v30;
  __int16 v31;
  unsigned __int16 v32;
  int v33;
  int v34;
  int v35;

  v1 = GameData_22407a8;
  if (GameData_22407a8 != 0) {
    v2 = *(_QWORD*)(GameData_22407a8 + 8);
    v3 = *(_QWORD*)(GameData_22407a8 + 16);
    for (i = result; v2 != v3; v2 += 24) {
      result =
          game_1286b00(*(_QWORD*)v2, *(_QWORD*)(v2 + 8), *(_WORD*)(v2 + 16),
                       *(_WORD*)(v2 + 18), *(_DWORD*)(v2 + 20));
    }
    v5 = *(int*)(i + 20);
    v6 = *(_QWORD*)(i + 8);
    *(_DWORD*)(i + 20) = v5 + 1;
    v7 = *(unsigned __int8*)(v6 + v5);
    *(_DWORD*)(i + 20) = v5 + 2;
    v8 = *(unsigned __int8*)(v6 + v5 + 1);
    *(_DWORD*)(i + 20) = v5 + 3;
    v9 = v8 | (*(unsigned __int8*)(v6 + v5 + 2) << 8);
    if ((_DWORD)v9 != 0) {
      if (v7 != 0) {
        if (v7 == 1) {
          v10 = 0;
          v11 = 24 * v9;
          do {
            v12 = *(int*)(i + 20);
            v13 = *(_QWORD*)(i + 8);
            v14 = (__int64*)(*(_QWORD*)(v1 + 8) + v10);
            *(_DWORD*)(i + 20) = v12 + 1;
            v15 = *(unsigned __int8*)(v13 + v12);
            *(_DWORD*)(i + 20) = v12 + 2;
            v16 = v15 | (*(unsigned __int8*)(v13 + v12 + 1) << 8);
            *(_DWORD*)(i + 20) = v12 + 3;
            v17 = *(unsigned __int8*)(v13 + v12 + 2);
            *(_DWORD*)(i + 20) = v12 + 4;
            result = game_1286b00(
                *v14, v14[1], v16,
                v17 |
                    (unsigned __int16)(*(unsigned __int8*)(v13 + v12 + 3) << 8),
                0);
            v10 += 24;
          } while (v11 != v10);
        }
        else {
          v24 = 0;
          v25 = 24 * v9;
          do {
            v26 = *(int*)(i + 20);
            v27 = *(_QWORD*)(i + 8);
            v28 = (__int64*)(*(_QWORD*)(v1 + 8) + v24);
            *(_DWORD*)(i + 20) = v26 + 1;
            v29 = *(unsigned __int8*)(v27 + v26);
            *(_DWORD*)(i + 20) = v26 + 2;
            v30 = v29 | (*(unsigned __int8*)(v27 + v26 + 1) << 8);
            *(_DWORD*)(i + 20) = v26 + 3;
            v31 = *(unsigned __int8*)(v27 + v26 + 2);
            *(_DWORD*)(i + 20) = v26 + 4;
            v32 = v31 | (*(unsigned __int8*)(v27 + v26 + 3) << 8);
            *(_DWORD*)(i + 20) = v26 + 5;
            v33 = *(unsigned __int8*)(v27 + v26 + 4);
            *(_DWORD*)(i + 20) = v26 + 6;
            v34 = v33 | (*(unsigned __int8*)(v27 + v26 + 5) << 8);
            *(_DWORD*)(i + 20) = v26 + 7;
            v35 = *(unsigned __int8*)(v27 + v26 + 6);
            *(_DWORD*)(i + 20) = v26 + 8;
            result = game_1286b00(
                *v28, v28[1], v30, v32,
                v34 | (v35 << 16) | (*(unsigned __int8*)(v27 + v26 + 7) << 24));
            v24 += 24;
          } while (v25 != v24);
        }
      }
      else {
        v18 = 0;
        v19 = 24 * v9;
        do {
          v20 = *(int*)(i + 20);
          v21 = *(_QWORD*)(i + 8);
          v22 = (__int64*)(*(_QWORD*)(v1 + 8) + v18);
          *(_DWORD*)(i + 20) = v20 + 1;
          v23 = *(unsigned __int8*)(v21 + v20);
          *(_DWORD*)(i + 20) = v20 + 2;
          result = game_1286b00(
              *v22, v22[1],
              v23 | (unsigned __int16)(*(unsigned __int8*)(v21 + v20 + 1) << 8),
              0, 0);
          v18 += 24;
        } while (v19 != v18);
      }
    }
  }
  return result;
}

bool game_12866c0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 (***v8)();
  __int64 v9;
  int v10;
  bool v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned int v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64** v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int16 v27;
  __int16 v28;
  int v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  unsigned int v45;
  int v46;
  unsigned __int64 v47;
  int v49;
  int v50;
  _QWORD v51[3];
  _QWORD v52[3];

  v5 = (_QWORD*)a1;
  v52[0] = 0;
  v52[1] = a2;
  if (a2 != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
  }
  else {
    v6 = 0;
  }
  v52[2] = v6;
  v51[0] = 0;
  v51[1] = a3;
  if (a3 != 0) {
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a3 + 24) + 1784LL) + 272LL);
    v51[2] = v7;
    v8 = GameData_212dae8;
    if (v6 != 0 && v7 != 0) {
      v9 = *(_QWORD*)(game_GameModeData_instance_ + 128);
      a1 = GameReliance_8e17a0(v9, v52, v51);
      if ((a1 & 0x80000000) != 0) {
        v8 = &game_GameReliance_Impl_Data_vtable_ptr;
        v10 = (unsigned __int8)GameData_2166cf2;
        if (GameData_2166cf2 == 0) {
          return v10 != 0;
        }
      }
      else {
        v8 = (__int64 (***)())(*(_QWORD*)(v9 + 8) + 56LL * (unsigned int)a1);
        v10 = *((unsigned __int8*)v8 + 10);
        if (*((_BYTE*)v8 + 10) == 0) {
          return v10 != 0;
        }
      }
      goto LABEL_12;
    }
  }
  else {
    v8 = &game_GameReliance_Impl_Data_vtable_ptr;
  }
  v10 = *((unsigned __int8*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 2);
  if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 2) == 0) {
    return v10 != 0;
  }
LABEL_12:
  v11 = a2 == 0 || a3 == 0;
  v12 = !v11;
  if (!v11) {
    v13 = *(unsigned __int16*)(a2 + 16);
    v14 = *(unsigned __int16*)(a3 + 16);
    HIDWORD(v16) = v13 | (v14 << 16);
    LODWORD(v16) = HIDWORD(v16);
    v15 = v16 >> 16;
    if (v13 >= v14) {
      v17 = v15;
    }
    else {
      v17 = v13 | (v14 << 16);
    }
    v18 = v5[5];
    if (v18 == 0) {
      goto LABEL_47;
    }
  LABEL_25:
    if (v5[7] != 0) {
      v19 = v18 - 1;
      if ((v18 & (v18 - 1)) != 0) {
        v20 = v17;
        if (v18 <= v17) {
          v20 = v17 % (unsigned int)v18;
        }
      }
      else {
        v20 = ((_DWORD)v18 - 1) & v17;
      }
      v21 = *(__int64***)(v5[4] + 8 * v20);
      if (v21 != nullptr) {
        v22 = *v21;
        if (v22 != nullptr) {
          if ((v18 & v19) == 0) {
            while (1) {
              v24 = v22[1];
              if (v24 == v17) {
                if (*((_DWORD*)v22 + 4) == v17) {
                  return v10 != 0;
                }
              }
              else if ((v24 & v19) != v20) {
                goto LABEL_47;
              }
              v22 = (__int64*)*v22;
              if (v22 == nullptr) {
                goto LABEL_47;
              }
            }
          }
          while (1) {
            v23 = v22[1];
            if (v23 == v17) {
              if (*((_DWORD*)v22 + 4) == v17) {
                return v10 != 0;
              }
            }
            else {
              if (v23 >= v18) {
                v23 %= v18;
              }
              if (v23 != v20) {
                goto LABEL_47;
              }
            }
            v22 = (__int64*)*v22;
            if (v22 == nullptr) {
              goto LABEL_47;
            }
          }
        }
      }
    }
    goto LABEL_47;
  }
  v17 = -1;
  v18 = v5[5];
  if (v18 != 0) {
    goto LABEL_25;
  }
LABEL_47:
  v25 = v5[1];
  v26 = v5[2];
  v27 = *((_WORD*)v8 + 6);
  v28 = *((_WORD*)v8 + 7);
  v29 = *((_DWORD*)v8 + 4);
  v30 = v5[3];
  LODWORD(v52[0]) = -1431655765 * ((__int64)(v26 - v25) >> 3);
  if (v26 >= v30) {
    v31 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v26 - v25) >> 3) + 1;
    v50 = v10;
    if (v31 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_1286ae0();
    }
    v32 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v30 - v25) >> 3);
    if (2 * v32 > v31) {
      v31 = 2 * v32;
    }
    if (v32 >= 0x555555555555555LL) {
      v33 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v33 = v31;
    }
    if (v33 != 0) {
      v49 = v12;
      if (v33 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210(a1);
      }
      v34 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                24 * v33, 16, 0);
      v12 = v49;
    }
    else {
      v34 = 0;
    }
    v35 = v34 + v26 - v25;
    if (v12 != 0 && *(unsigned __int16*)(a2 + 16) >=
                        (unsigned int)*(unsigned __int16*)(a3 + 16)) {
      *(_QWORD*)v35 = a3;
      *(_QWORD*)(v35 + 8) = a2;
    }
    else {
      *(_QWORD*)v35 = a2;
      *(_QWORD*)(v35 + 8) = a3;
    }
    v37 = v34 + 24 * v33;
    v36 = v35 + 24;
    *(_WORD*)(v35 + 16) = v27;
    *(_WORD*)(v35 + 18) = v28;
    *(_DWORD*)(v35 + 20) = v29;
    if (v25 == v26) {
      v10 = v50;
    }
    else {
      v10 = v50;
      v38 = v34;
      do {
        *(_QWORD*)v38 = *(_QWORD*)v25;
        *(_QWORD*)(v38 + 8) = *(_QWORD*)(v25 + 8);
        *(_WORD*)(v38 + 16) = *(_WORD*)(v25 + 16);
        *(_WORD*)(v38 + 18) = *(_WORD*)(v25 + 18);
        v39 = *(_DWORD*)(v25 + 20);
        v25 += 24;
        *(_DWORD*)(v38 + 20) = v39;
        v38 += 24;
      } while (v25 != v26);
      v25 = v5[1];
    }
    v5[1] = v34;
    v5[2] = v36;
    v5[3] = v37;
    if (v25 != 0) {
      v40 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
    }
  }
  else {
    if (v12 != 0 && *(unsigned __int16*)(a2 + 16) >=
                        (unsigned int)*(unsigned __int16*)(a3 + 16)) {
      *(_QWORD*)v26 = a3;
      *(_QWORD*)(v26 + 8) = a2;
    }
    else {
      *(_QWORD*)v26 = a2;
      *(_QWORD*)(v26 + 8) = a3;
    }
    *(_WORD*)(v26 + 16) = v27;
    *(_WORD*)(v26 + 18) = v28;
    v36 = v26 + 24;
    *(_DWORD*)(v26 + 20) = v29;
  }
  v5[2] = v36;
  v41 = -1;
  v42 = *(_QWORD*)(v36 - 24);
  if (v42 != 0) {
    v43 = *(_QWORD*)(v36 - 16);
    if (v43 != 0) {
      v44 = *(unsigned __int16*)(v42 + 16);
      v45 = *(unsigned __int16*)(v43 + 16);
      HIDWORD(v47) = v44 | (v45 << 16);
      LODWORD(v47) = HIDWORD(v47);
      v46 = v47 >> 16;
      if (v44 >= v45) {
        v41 = v46;
      }
      else {
        v41 = v44 | (v45 << 16);
      }
    }
  }
  LODWORD(v51[0]) = v41;
  GameRoutine_8ef040(v5 + 4, v51, v51, v52);
  return v10 != 0;
}

__int64 game_1286b00(__int64 result, __int64 a2, unsigned __int16 a3,
                     unsigned __int16 a4, unsigned int a5)
{
  __int64 v5;
  __int64 v6;
  __int64 (***v7)();
  __int64 v8;
  unsigned __int16 v9;
  unsigned __int16 v10;
  unsigned int v11;
  unsigned __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  __int16 v18;
  int v19;
  _QWORD v20[3];
  _QWORD v21[3];

  v21[0] = 0;
  v21[1] = result;
  if (result != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 24) + 1784LL) + 272LL);
  }
  else {
    v5 = 0;
  }
  v21[2] = v5;
  v20[0] = 0;
  v20[1] = a2;
  if (a2 != 0) {
    v6 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 24) + 1784LL) + 272LL);
    v20[2] = v6;
    v7 = GameData_212dae8;
    if (v5 != 0 && v6 != 0) {
      v8 = *(_QWORD*)(game_GameModeData_instance_ + 128);
      v9 = a3;
      v10 = a4;
      v11 = a5;
      result = GameReliance_8e17a0(v8, v21, v20);
      if ((result & 0x80000000) != 0) {
        v7 = &game_GameReliance_Impl_Data_vtable_ptr;
      }
      else {
        v7 =
            (__int64 (***)())(*(_QWORD*)(v8 + 8) + 56LL * (unsigned int)result);
      }
      a5 = v11;
      a4 = v10;
      a3 = v9;
      if (*((_BYTE*)v7 + 10) == 0) {
        return result;
      }
      goto LABEL_14;
    }
  }
  else {
    v7 = &game_GameReliance_Impl_Data_vtable_ptr;
  }
  if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 2) == 0) {
    return result;
  }
LABEL_14:
  if (a3 != *((unsigned __int16*)v7 + 6)) {
    *((_WORD*)v7 + 6) = a3;
    v12 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
    if ((int)v12 < 1) {
      LOBYTE(v13) = 0;
    }
    else {
      v13 = 0;
      v14 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v12 - 1));
      if (v14 >= a3) {
        v14 = a3;
      }
      if (*(_DWORD*)GameData_21d99c8 <= (int)a3) {
        v15 = v14;
      }
      else {
        v15 = *(_DWORD*)GameData_21d99c8;
      }
      while (1) {
        v16 = (unsigned int)(v13 + v12) >> 1;
        v17 = *(_DWORD*)(GameData_21d99c8 + 4LL * v16);
        if (v15 == v17) {
          break;
        }
        if (v15 < v17) {
          LODWORD(v12) = (unsigned int)(v13 + v12) >> 1;
        }
        else {
          v13 = v16 + 1;
        }
        if (v13 >= (int)v12) {
          goto LABEL_29;
        }
      }
      LOBYTE(v13) = v16 + 1;
    }
  LABEL_29:
    *((_BYTE*)v7 + 11) = v13;
  }
  v18 = a4;
  if (a4 >= 0x2710u) {
    v18 = 10000;
  }
  *((_WORD*)v7 + 7) = v18;
  if (a5 >= 0xF4240) {
    v19 = 1000000;
  }
  else {
    v19 = a5;
  }
  *((_DWORD*)v7 + 4) = v19;
  return result;
}

__int64 game_128ce70(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  char v8;
  __int64 result;
  char v10;
  char v11;
  int v12;

  *(_DWORD*)(a1 + 15784) = 0;
  *(_BYTE*)(a1 + 15792) = 1;
  if (*(_WORD*)(a1 + 4532) != 0) {
    v2 = (__int64*)(a1 + 4532);
  }
  else {
    v3 = *(unsigned int*)(a1 + 4528);
    if ((v3 & 0x80000000) != 0) {
      v2 = game_g_empty_item_ptr;
    }
    else {
      v2 = (__int64*)(*(_QWORD*)(a1 + 4512) + 8 * v3 + 828);
    }
  }
  v4 = *(unsigned __int16*)v2;
  v12 = 0;
  v5 = *(_QWORD*)(*GameData_212c878[0] + 64);
  v6 = *(_QWORD*)(v5 + 8 * v4);
  if (v6 ==
      *(_QWORD*)(v5 + 8LL * *(int*)((char*)GameData_2130928[0] +
                                    (unsigned __int64)((__int128*)0x10LL)))) {
    v8 = game_Unit_Unknown6c8f90(a1 + 2240);
    v7 = 49152;
    if ((v8 & 1) != 0) {
      goto LABEL_12;
    }
  LABEL_11:
    *(_BYTE*)(a1 + 15792) = 0;
    goto LABEL_12;
  }
  if (v6 ==
      *(_QWORD*)(v5 + 8LL * *(int*)((char*)GameData_2130928[0] +
                                    (unsigned __int64)((_UNKNOWN**)0x8LL)))) {
    v10 = game_AIThink_CanSealMagic(a1 + 2240, &v12);
    v7 = 0x8000;
    if ((v10 & 1) != 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  if (v6 ==
      *(_QWORD*)(v5 +
                 8LL * *(int*)((char*)GameData_2130928[0] +
                               (unsigned __int64)((_UNKNOWN**)0x8LL) + 4))) {
    v11 = game_Unit_IsImmobile(a1 + 2240);
    v7 = 0x4000;
    if ((v11 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v7 = 0;
LABEL_12:
  *(_DWORD*)(a1 + 15784) =
      (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)GameData_212d290 + 16LL) +
                           *(int*)(a1 + 15788) + 22656LL)
       << 24) +
      ((v12 + v7) << 7);
  result = BattleInfo_7a3000(a1 + 4488);
  *(_DWORD*)(a1 + 15784) += result;
  return result;
}

#pragma GCC visibility pop
