#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result, __int64);
__attribute__((swiftcall)) void GameRoutine_104fe60(PSEUDO_X8);
__attribute__((swiftcall)) void TroopActor_Unknown4(PSEUDO_X8, __int64, float);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, _QWORD, _QWORD,
                                                 _QWORD, _QWORD, _QWORD, _QWORD,
                                                 _QWORD, double, float);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64 Camera_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 CorpsManager_9726e0(_QWORD);
__int64 Dir_70d7a0(_QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(float32x4_t*, float32x4_t*);
__int64 GameRoutine_1317f10_alt1(_QWORD, _QWORD) __asm__("GameRoutine_1317f10");
__int64 GameRoutine_131a9b0(_QWORD, _QWORD);
__int64 GameRoutine_131b050(_QWORD, _QWORD);
__int64 GameRoutine_131b280(_QWORD);
__int64 GameRoutine_132c1c0(_QWORD, _QWORD);
__int64 GameRoutine_133f780(_QWORD, _QWORD, _QWORD, long double);
__int64 GameRoutine_13412c0(_QWORD, _QWORD, float);
__int64 GameRoutine_135f5a0();
__int64 GameRoutine_14a10d0_alt1(_QWORD, _QWORD, _QWORD,
                                 _QWORD) __asm__("GameRoutine_14a10d0");
__int64 GameRoutine_14a3920(__int64 result);
__int64 GameRoutine_14b4cf0(__int64, unsigned int, __int64);
__int64 GameRoutine_1530b00(_QWORD, long double);
__int64 GameRoutine_16aec40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_609140(__int64, __int64, ...);
__int64 GameRoutine_609260(float*, __int64, char);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_887e60();
__int64 GameRoutine_887ec0();
__int64 GameRoutine_888030();
__int64 GameRoutine_995200_alt1(_QWORD) __asm__("GameRoutine_995200");
__int64 Impl_13261c0(_QWORD);
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 Impl_1328300(_QWORD);
__int64 Manager_bc6460_alt1(_QWORD, _QWORD, _QWORD) __asm__("Manager_bc6460");
__int64 ProcGmapExploreSeq_135ece0();
__int64 ProcGmapExploreSeq_135ed00();
__int64 ProcGmapExploreSeq_135f000();
__int64 ProcGmapExploreSeq_135f2a0();
__int64 ProcGmapExploreSeq_135f500();
__int64 ProcGmapExploreSeq_135f540();
__int64 ProcInst_657850(__int64, __int64, __int64, char, __int64);
__int64 ProcTroopAction_14b4f80(__int64);
__int64 Spot_132ba80(_QWORD, _QWORD);
__int64 Spot_132c460(_QWORD, _QWORD);
__int64 Spot_132c920(_QWORD);
__int64 TroopMgr_1345be0(void);
__int64 TroopMgr_134a4a0(_QWORD);
__int64 TroopMgr_134d2e0(__int64);
__int64 TroopMgr_1351170(__int64*);
__int64 Troop_133e6e0(__int64);
__int64 UnitActor_819f40(_QWORD);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81a540_alt1(__int64, int,
                              __int64) __asm__("UnitActor_81a540");
__int64 UnitActor_81a540_alt2(_QWORD, _QWORD,
                              _QWORD) __asm__("UnitActor_81a540");
__int64 UnitActor_81ab40(_QWORD, float, float);
__int64 UnitActor_81ab40_alt1(__int64, float,
                              float) __asm__("UnitActor_81ab40");
__int64 UnitActor_81ae00(_QWORD, long double);
__int64 UnitActor_81aee0(_QWORD, double);
__int64 UnitActor_81b040(_QWORD, double);
__int64 UnitActor_81b040_alt1(__int64, float) __asm__("UnitActor_81b040");
__int64 UnitActor_81cda0(__int64, __int128*, float);
__int64 Unit_6cd120(_QWORD, _QWORD, _QWORD);
__int64 Unit_6df260(__int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_CorpsManager_EachUnit(__int64 result, __int64);
__int64 game_CorpsManager_EachUnit_alt1(_QWORD, _QWORD) __asm__(
    "game_CorpsManager_EachUnit");
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(_QWORD);
__int64 game_HashString32(__int64 result);
__int64 game_HashString32_alt1(_QWORD, _QWORD) __asm__("game_HashString32");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ProcInst_Register(__int64);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_gmap_131a870_alt1(_QWORD) __asm__("game_gmap_131a870");
__int64 game_gmap_1326c80(_QWORD, _QWORD);
__int64 game_gmap_133de90_alt1(_QWORD, _QWORD) __asm__("game_gmap_133de90");
__int64 game_gmap_133de90_alt2(__int64 result,
                               char) __asm__("game_gmap_133de90");
__int64 game_gmap_133fe00_alt1(_QWORD, _QWORD,
                               float) __asm__("game_gmap_133fe00");
__int64 game_gmap_1340560_alt1(_QWORD, _QWORD) __asm__("game_gmap_1340560");
__int64 game_gmap_SpotAttachmentRecruit_GetData();
__int64 game_gmap_SpotMgr_EachSpotAttachment(char, __int64);
__int64 game_gmap_SpotMgr_GetCurrentSpot(void);
__int64 game_gmap_TroopMgr_CountTroop_134e600(__int64, __int64);
__int64 game_gmap_TroopUnitList_CreateReinforce(__int64 result, __int64,
                                                __int64);
__int64 game_gmap_anonymous_1523820(_QWORD, _QWORD, float);
__int64 game_gmap_anonymous_ProcGmapExploreSeq_Initialize();
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_LockMutex(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 sscanf(_QWORD, const char*, ...);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 strlen(_QWORD);
__n128 GameRoutine_133cc40(__int64);
__n128 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__n128 GameRoutine_14a1520(_QWORD*, char);
__n128 GameRoutine_175bde0(__int64);
__n128 GameRoutine_17b8e80(__int64, char);
__n128 GameRoutine_17b8f40(__int64, char);
__n128 TroopMgr_1348160(__n128 result);
__n128 nn_mem_StandardAllocator_Free_alt2(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, long double);
__n128 snd_Fade_Fade_10c830_alt1(_QWORD,
                                 double) __asm__("snd_Fade_Fade_10c830");
__n128 std___1___shared_weak_count___release_weak();
__n64 GameRoutine_a6c440(__int128*, __int128*, __int128*);
bool GameRoutine_995200(__int64);
extern _DWORD game_script_hub_schedule_kHourCycles[24];
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN* GameData_1adf7b0;
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c2f0;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212ceb8;
extern _UNKNOWN GameData_1a86cf1;
extern _UNKNOWN GameData_1a8afc6;
extern _UNKNOWN GameData_1a92617;
extern _UNKNOWN GameData_1abd4b3;
extern _UNKNOWN GameData_1acc6e7;
extern _UNKNOWN GameData_1ad0522;
extern _UNKNOWN GameData_1ada5b4;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_1af689f;
extern _UNKNOWN GameData_1b45704;
extern _UNKNOWN GameData_1fb27c0;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21f1548;
extern _UNKNOWN GameData_2241698;
extern _UNKNOWN game_g_random_mutex;
extern __int128* GameData_212c680;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83390;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21c9630;
extern __int64 (*GameData_1fb0cb0[])();
extern __int64 (*GameData_1fb0d30[])();
extern __int64 (*GameData_202bb48[])();
extern __int64 (*GameData_202c0e8[])();
extern __int64 (*GameData_212c6d0[11])();
extern __int64 (*GameData_212c720)();
extern __int64 (*GameData_212d060[8])();
extern __int64 (*game_gmap_SpotAttachmentRecruit_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcGmapExploreSeq_vtable[])();
extern __int64 (*game_gmap_anonymous_ProcPlayConvergeDemo_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212cec0;
extern __int64* GameData_212d1e0[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
extern __int64* GameData_21309c8[5];
extern __int64* GameData_21316e0[15];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212d750;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9ef0;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_21f1350;
extern __int64 GameData_21f1358;
extern __int64 GameData_21f1370;
extern __int64 GameData_21f1380;
extern __int64 GameData_21f1390;
extern __int64 GameData_21f1398;
extern __int64 GameData_21f13b0;
extern __int64 GameData_21f13c0;
extern __int64 GameData_21f13d0;
extern __int64 GameData_21f13d8;
extern __int64 GameData_21f13e0;
extern __int64 GameData_21f13f0;
extern __int64 GameData_21f1400;
extern __int64 GameData_21f1410;
extern __int64 GameData_21f1418;
extern __int64 GameData_21f1420;
extern __int64 GameData_21f1430;
extern __int64 GameData_21f1440;
extern __int64 GameData_21f1450;
extern __int64 GameData_21f1458;
extern __int64 GameData_21f1460;
extern __int64 GameData_21f1470;
extern __int64 GameData_21f1480;
extern __int64 GameData_21f1490;
extern __int64 GameData_21f1498;
extern __int64 GameData_21f14b0;
extern __int64 GameData_21f14c0;
extern __int64 GameData_21f14d0;
extern __int64 GameData_21f14d8;
extern __int64 GameData_21f14f0;
extern __int64 GameData_21f1500;
extern __int64 GameData_21f1510;
extern __int64 GameData_21f1518;
extern __int64 GameData_21f1520;
extern __int64 GameData_21f1530;
extern __int64 GameData_21f1540;
extern __int64 GameData_21f1618;
extern __int64 GameData_21f1648;
extern __int64 GameData_21f1658;
extern __int64 GameData_22400f8;
extern __int64 GameData_2241428;
extern __int64 GameData_2241460;
extern __int64 GameData_2241468;
extern __int64 GameData_2241470;
extern __int64 GameData_2241480;
extern __int64 GameData_2241490;
extern __int64 GameData_22414a0;
extern __int64 GameData_22414a8;
extern __int64 GameData_22414b0;
extern __int64 GameData_22414c0;
extern __int64 GameData_22414d0;
extern __int64 GameData_22414e0;
extern __int64 GameData_22414e8;
extern __int64 GameData_22414f0;
extern __int64 GameData_2241500;
extern __int64 GameData_2241510;
extern __int64 GameData_2241520;
extern __int64 GameData_2241528;
extern __int64 GameData_2241530;
extern __int64 GameData_2241540;
extern __int64 GameData_2241550;
extern __int64 GameData_2241560;
extern __int64 GameData_2241568;
extern __int64 GameData_2241570;
extern __int64 GameData_2241580;
extern __int64 GameData_2241590;
extern __int64 GameData_22415a0;
extern __int64 GameData_22415a8;
extern __int64 GameData_22415b0;
extern __int64 GameData_22415c0;
extern __int64 GameData_22415d0;
extern __int64 GameData_22415e0;
extern __int64 GameData_22415e8;
extern __int64 GameData_22415f0;
extern __int64 GameData_2241600;
extern __int64 GameData_2241610;
extern __int64 GameData_2241620;
extern __int64 GameData_2241628;
extern __int64 GameData_2241630;
extern __int64 GameData_2241640;
extern __int64 GameData_2241650;
extern __int64 GameData_2241660;
extern __int64 GameData_2241668;
extern __int64 GameData_2241670;
extern __int64 GameData_2241680;
extern __int64 GameData_2241690;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_g_game_setting_ptr;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_204a2a0;
extern char* GameData_204a350;
extern char GameData_1a9f09e;
extern char GameData_21f1348;
extern char GameData_21f1388;
extern char GameData_21f13c8;
extern char GameData_21f1408;
extern char GameData_21f1448;
extern char GameData_21f1488;
extern char GameData_21f14c8;
extern char GameData_21f1508;
extern char GameData_2241458;
extern char GameData_2241498;
extern char GameData_22414d8;
extern char GameData_2241518;
extern char GameData_2241558;
extern char GameData_2241598;
extern char GameData_22415d8;
extern char GameData_2241618;
extern char GameData_2241658;
extern int GameData_21f1368;
extern int GameData_21f1378;
extern int GameData_21f13a8;
extern int GameData_21f13b8;
extern int GameData_21f13e8;
extern int GameData_21f13f8;
extern int GameData_21f1428;
extern int GameData_21f1438;
extern int GameData_21f1468;
extern int GameData_21f1478;
extern int GameData_21f14a8;
extern int GameData_21f14b8;
extern int GameData_21f14e8;
extern int GameData_21f14f8;
extern int GameData_21f1528;
extern int GameData_21f1538;
extern int GameData_2241478;
extern int GameData_2241488;
extern int GameData_22414b8;
extern int GameData_22414c8;
extern int GameData_22414f8;
extern int GameData_2241508;
extern int GameData_2241538;
extern int GameData_2241548;
extern int GameData_2241578;
extern int GameData_2241588;
extern int GameData_22415b8;
extern int GameData_22415c8;
extern int GameData_22415f8;
extern int GameData_2241608;
extern int GameData_2241638;
extern int GameData_2241648;
extern int GameData_2241678;
extern int GameData_2241688;
float Camera_1315570(__int64, double, double, long double);
float GameRoutine_135bea0();
float GameRoutine_135bea0_alt1(void) __asm__("GameRoutine_135bea0");
float GameRoutine_752d30_alt1(int8x16_t*,
                              int8x16_t*) __asm__("GameRoutine_752d30");
long double Camera_b3bb60(_QWORD);
long double GameRoutine_752d30(_QWORD, _QWORD);
unsigned __int16*
Dir_70d7a0_alt1(unsigned __int16* result) __asm__("Dir_70d7a0");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void CharacterObservable_10cd4e0(__int64);
void GameRoutine_133f780_alt1(__int64, _DWORD*,
                              char) __asm__("GameRoutine_133f780");
void GameRoutine_14a1e70(__int64**, float);
void LayoutAccessor_155e830(__int64*, char);
void LayoutAccessor_1567000(__int64, char);
void __attribute__((noreturn)) GameRoutine_132c900(void);
void __attribute__((noreturn)) GameRoutine_13549e0();
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610();
void __attribute__((noreturn)) String_60a1d0(void);
void game_19a0e60(__int64);
void game_gmap_133ce20(__int64, __int64, __int64);
void game_gmap_anonymous_1523820_alt1(__int64, char) __asm__(
    "game_gmap_anonymous_1523820");
bool game_gmap_887a40(__int64 a1);
__int64 game_gmap_888560(__int64 a1);
float32x4_t* game_gmap_1318260();
__int64 game_gmap_1319ce0(__int64 result);
__int64 game_gmap_1319f40_alt1(__int64 result) __asm__("game_gmap_1319f40");
float game_gmap_131a870(float32x4_t* a1, double a2, double a3, long double a4);
__int64 game_gmap_1327670(float32x4_t* a1, float32x4_t* a2);
__attribute__((swiftcall)) void game_gmap_13288f0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int16* a2);
__n128 game_gmap_1329000(__int64 a1, unsigned __int8 a2, __n128 result);
void game_gmap_1329500(__int64 a1, char* a2, char a3, char a4);
bool game_gmap_132a430(__int64 a1);
__int64 game_gmap_133d680_alt1(__int64 a1, __int64 a2,
                               __int64 a3) __asm__("game_gmap_133d680");
__int64 game_gmap_133dba0(__int64 a1, char a2, long double a3, long double a4);
__int64 game_gmap_133de90(__int64 result, char a2, __n128 a3, long double a4);
void game_gmap_133f280(__int64 a1);
__n128 game_gmap_133fe00(__int64 a1, unsigned __int8 a2, float a3);
float32x4_t game_gmap_133ffb0(float32x4_t* a1, _QWORD* a2);
__int64 game_gmap_13402f0(__int64 a1, char a2, char a3, __n128 a4,
                          long double a5);
__int64 game_gmap_1340560(__int64 result, char a2, __n128 a3, long double a4);
__attribute__((swiftcall)) void
game_gmap_13408e0(PSEUDO_X8 x8_, __int64 a1, double unused_float0, float a3);
__int64 game_gmap_1340cb0(__int64 result, long double a2, long double a3);
__int64 game_gmap_13410a0(__int64 result, int a2);
void game_gmap_1341ac0(__int64 a1);
__int64 game_gmap_1341d60(__int64 a1, char a2);
__int64 game_gmap_1341ed0(__int64 result);
__int64 game_gmap_1347960(__int64 a1, __int64 a2, __int64 a3);
__int64 game_gmap_1347b30(__int64 a1, __int64 a2, __int64 a3);
__int64 game_gmap_1347cc0(__int64 a1, __int64 a2);
__n128 game_gmap_1347e20(__n128 a1);
__int64 game_gmap_135e7e0(__int64 a1);
void game_gmap_14b6560(__int64 a1);
__int64 game_gmap_14c4e00();
__int64 game_gmap_14c50c0();
void game_gmap_14d2400();
void game_gmap_14d24a0();
__int64 game_gmap_14d5220();
__int64 game_gmap_14d5d20(__int64 a1);
void game_gmap_14d6b00();
__n128 game_gmap_14d6b80();
__int64 game_gmap_1517ac0(__int64 a1, __int64 a2);
void game_gmap_151e2a0(__int64 a1, __int64 a2, char a3);
__int64 game_gmap_151e620(__int64 a1, __int64 a2, char a3);
__n128 game_gmap_151fdd0(__int64 a1, __int64 a2, char a3);
_BYTE* game_gmap_1520240(__int64 a1, __int64 a2, char a3);
__int64 game_gmap_1520ea0(__int64 a1);
__int64 game_gmap_1522160(__int64 result, long double a2);
void game_gmap_15230c0_alt1(__int64 a1,
                            long double a2) __asm__("game_gmap_15230c0");
__int64 game_gmap_1523240(__int64 result);
__int64 game_gmap_1523320(__int64 result, __n128 a2);
void game_gmap_1523f70(__int64 a1);
void game_gmap_1524170();
__n128 game_gmap_15241d0_alt1(float32x4_t** a1,
                              __n128 result) __asm__("game_gmap_15241d0");
void game_gmap_1524f30(__int64 a1);
__int64 game_gmap_1528ab0(__int64 result);
void game_gmap_1529760(__int64 a1);
void game_gmap_152b340(__int64 a1);
__int64 game_gmap_152b740(__int64 a1);
__int64 game_gmap_152b970(__int64 a1);
__int64 game_gmap_152ba90(__int64 result);
__int64 game_gmap_152bb80_alt1(__int64 a1) __asm__("game_gmap_152bb80");
__int64 GameRoutine_1522300(_QWORD, _QWORD);
__int64 GameRoutine_714b20(_QWORD*);
__int64 GameRoutine_889be0(__int64);
__int64 GameRoutine_ae4320(__int64);
__int64 GameRoutine_ae4320_alt1(_QWORD) __asm__("GameRoutine_ae4320");
__int64
    GameSideStoryData_12b50c0_alt1(_QWORD,
                                   _QWORD) __asm__("GameSideStoryData_12b50c0");
__int64 SpotMgr_1333f20(_QWORD);
__int64 SpotMgr_1334560(_QWORD);
__int64 game_HashString32_alt2(void) __asm__("game_HashString32");
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot_alt1(_QWORD) __asm__(
    "game_gmap_SpotMgr_FindSpot");
__int64 game_gmap_SpotMgr_GetCurrentSpot_alt2(_QWORD, _QWORD) __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
bool GmapSituation_14db600();
bool game_gmap_Spot_CanPopTroop(__int64, char);
extern _UNKNOWN* GameData_2130228;
extern __int128 GameData_22532c0;
extern __int64* GameData_212c780;
extern __int64* GameData_212d460[6];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_21316c8;
extern __int64 GameData_21c9600;
float BladeResonance_14b7750();
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
void GameSideStoryData_12b50c0(__int64, __int64*);
bool game_gmap_132a900(float32x4_t* a1, __int64 a2);
void game_gmap_14d5780(__int64 a1);
__int64 game_gmap_14d60a0(__int64 result);
_QWORD* GameHr_14a10d0_alt1(_QWORD*, __int64, __int64,
                            __int64) __asm__("GameHr_14a10d0");
__int64* Manager_bc6460_alt2(float*, __int64, char) __asm__("Manager_bc6460");
__int64* Manager_bc6460_alt3(_QWORD*, __int64, char) __asm__("Manager_bc6460");
__int64 CorpsManager_9726e0_alt1(__int64) __asm__("CorpsManager_9726e0");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_16aec40(__int64, __int64, __int64*);
__int64 GameRoutine_131a9b0_alt1(float32x4_t*,
                                 float32x4_t*) __asm__("GameRoutine_131a9b0");
__int64 GameRoutine_131b280_alt1(__int64) __asm__("GameRoutine_131b280");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GmapSound_1530b00(__int64 result, __int64);
__int64 TroopMgr_1345be0_alt1() __asm__("TroopMgr_1345be0");
__int64 UnitActor_81aee0_alt1(__int64, float) __asm__("UnitActor_81aee0");
__int64 fs_609260(__int64, const char*, char);
__int64 game_14a3920(__int64 result);
__int64 game_gmap_1326c80_alt1(float32x4_t*, int) __asm__("game_gmap_1326c80");
__int64 game_gmap_133f780(__int64 result, _DWORD*, char);
__int64 game_gmap_133fe00_alt2(__int64, unsigned __int8,
                               float) __asm__("game_gmap_133fe00");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_playAt_ff5f0_alt1(__int64, __int64, __int64, __int64, unsigned int,
                              unsigned int, int, float,
                              float) __asm__("snd_playAt_ff5f0");
__int64 snd_play_ff2d0_alt1(__int64, __int64, __int64, unsigned int,
                            unsigned int, int, float,
                            float) __asm__("snd_play_ff2d0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__n64 GameRoutine_a6c440_alt1(float32x4_t*, __int128*,
                              float32x4_t*) __asm__("GameRoutine_a6c440");
bool Impl_1328300_alt1(__int64) __asm__("Impl_1328300");
const char*
game_HashString32_alt3(const char* result) __asm__("game_HashString32");
float MapUtil_752d30(int8x16_t*, int8x16_t*);
float game_gmap_131a870_alt2(float32x4_t*) __asm__("game_gmap_131a870");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int sscanf_alt1(const char*, const char*, ...) __asm__("sscanf");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_131b050_alt1(__int64,
                              __int128*) __asm__("GameRoutine_131b050");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt3(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt2(__int64, float) __asm__("snd_Fade_Fade_10c830");
void game_gmap_1319f40(float32x4_t* a1);
unsigned __int64 game_gmap_133d680(__int64 a1, __int64 a2, __int64 a3);
void game_gmap_15230c0(__int64 a1);
__int64 game_gmap_15241d0(__int64 result);
__int64 game_gmap_152bb80(__int64 a1, __n128 a2, long double a3);

bool game_gmap_887a40(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  char v16;
  __int64* v17;
  __int64* v18;
  __int64* v19;
  char v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  struct {
    __int64* v25;
    __int64* v26;
  } v25_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f1548,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f1548) != 0) {
    GameData_21f1348 = 19;
    GameData_21f1368 = 500;
    GameData_21f1370 = 0;
    GameData_21f13d0 = 0;
    GameData_21f13d8 = (__int64)GameRoutine_887e60;
    GameData_21f1378 = 0;
    GameData_21f1380 = 0;
    GameData_21f1388 = 10;
    GameData_21f13a8 = 0;
    GameData_21f13b0 = 0;
    GameData_21f13b8 = 0;
    GameData_21f13c0 = 0;
    GameData_21f13e0 = 0;
    GameData_21f13e8 = 0;
    GameData_21f13f0 = 0;
    GameData_21f13f8 = 0;
    GameData_21f1400 = 0;
    GameData_21f1420 = 0;
    GameData_21f1428 = 0;
    GameData_21f1430 = 0;
    GameData_21f1438 = 0;
    GameData_21f1440 = 0;
    GameData_21f1460 = 0;
    GameData_21f1468 = 0;
    GameData_21f1470 = 0;
    GameData_21f1478 = 0;
    GameData_21f1480 = 0;
    GameData_21f1488 = 19;
    GameData_21f1408 = 14;
    GameData_21f1410 = 0;
    GameData_21f1418 = (__int64)GameRoutine_887ec0;
    GameData_21f1350 = 0;
    GameData_21f1358 = (__int64)GameData_212c6d0[0];
    GameData_21f13c8 = 13;
    GameData_21f1448 = 13;
    GameData_21f1390 = 0;
    GameData_21f1398 = (__int64)GameData_212c720;
    GameData_21f1450 = 0;
    GameData_21f1458 = (__int64)GameRoutine_888030;
    GameData_21f14a8 = 500;
    GameData_21f14b0 = 0;
    GameData_21f14b8 = 0;
    GameData_21f14c0 = 0;
    GameData_21f14c8 = 10;
    GameData_21f14d0 = 0;
    GameData_21f14d8 = (__int64)GameData_212c720;
    GameData_21f14e8 = 0;
    GameData_21f14f0 = 0;
    GameData_21f14f8 = 0;
    GameData_21f1500 = 0;
    GameData_21f1508 = 0;
    GameData_21f1530 = 0;
    GameData_21f1538 = 0;
    GameData_21f1540 = 0;
    GameData_21f1528 = 0;
    GameData_21f1518 = 0;
    GameData_21f1520 = 0;
    GameData_21f1510 = 0;
    GameData_21f1490 = 0;
    GameData_21f1498 = (__int64)GameData_212d060[0];
    __cxa_guard_release(&GameData_21f1548);
  }
  GameRoutine_104fe60((void*)(&v25_.v25));
  v3 = v25_.v25;
  v2 = v25_.v26;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v25_.v26 == v25_.v25) {
    v17 = v25_.v25;
    if (v25_.v25 == nullptr) {
      return v2 != v3;
    }
    goto LABEL_21;
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  v6 = GameData_212c608[0];
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_QWORD*)(v5 + 104) = 0;
  *(_QWORD*)(v5 + 112) = 0;
  *(_QWORD*)(v5 + 120) = 0;
  *(_QWORD*)(v5 + 128) = 0;
  *(_WORD*)(v5 + 136) = 0;
  *(_QWORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 24) = "NULL";
  *(_QWORD*)(v5 + 32) = 0;
  v7 = (_QWORD*)(v5 + 32);
  *(_QWORD*)(v5 + 138) = 0;
  *(_QWORD*)(v5 + 144) = 0;
  *(_QWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 80) = 0;
  *(_QWORD*)v5 = v6 + 16;
  *(_QWORD*)(v5 + 8) = 0;
  game_ProcInst_Register(v5);
  v8 = v25_.v25;
  v9 = v25_.v26;
  *(_QWORD*)(v5 + 152) = 0;
  *(_QWORD*)(v5 + 160) = 0;
  v10 = (char*)v9 - (char*)v8;
  *(_QWORD*)v5 = game_gmap_anonymous_ProcPlayConvergeDemo_vtable;
  *(_QWORD*)(v5 + 168) = 0;
  if (v9 != v8) {
    if (0xAAAAAAAAAAAAAAABLL * (v10 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
      GameRoutine_64aa00();
    }
    v11 = (__int64*)fw_memory_HeapManager_Allocate(*v4, (char*)v9 - (char*)v8,
                                                   16, 0);
    *(_QWORD*)(v5 + 152) = v11;
    *(_QWORD*)(v5 + 160) = v11;
    *(_QWORD*)(v5 + 168) = (char*)v11 + v10;
    do {
      if ((*(_BYTE*)v8 & 1) != 0) {
        fw_text_String_CopyTerminated(v11, v8[2], v8[1]);
      }
      else {
        v12 = *v8;
        v13 = v8[2];
        v11[1] = v8[1];
        v11[2] = v13;
        *v11 = v12;
      }
      v8 += 3;
      v11 += 3;
    } while (v8 != v9);
    *(_QWORD*)(v5 + 160) = v11;
  }
  v14 = *(_QWORD*)(a1 + 40);
  if (v14 != 0) {
    *(_QWORD*)(v14 + 48) = v5;
    *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
  }
  *(_QWORD*)(a1 + 40) = v5;
  *(_QWORD*)(v5 + 24) = "ProcPlayConvergeDemo";
  *(_QWORD*)(v5 + 32) = a1;
  *(_DWORD*)(v5 + 140) = game_HashString32((__int64)"ProcPlayConvergeDemo");
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 24;
  *(_QWORD*)(v5 + 80) = 1;
  *(_QWORD*)(v5 + 8) = &GameData_21f1348;
  *(_QWORD*)(v5 + 16) = &GameData_21f1348;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
      (*(_WORD*)(v5 + 136) & 0x100) == 0) {
    *(_WORD*)(v5 + 136) |= 0x100u;
  }
  v15 = (_BYTE*)*v7;
  v16 = *(_BYTE*)(*v7 + 138LL);
  if (v16 == 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v15 + 64LL))(*v7);
    v16 = v15[138];
  }
  v15[138] = v16 + 1;
  v17 = v25_.v25;
  *(_WORD*)(v5 + 136) |= 2u;
  if (v17 != nullptr) {
  LABEL_21:
    v18 = v25_.v26;
    if (v17 == v25_.v26) {
      goto LABEL_31;
    }
    v19 = v25_.v26;
    do {
      v20 = *((_BYTE*)v19 - 24);
      v19 -= 3;
      if ((v20 & 1) != 0) {
        v21 = *(v18 - 1);
        if (v21 != 0) {
          if (*(_QWORD*)(*v4 + 200) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v22, v21);
        }
      }
      v18 = v19;
    } while (v19 != v17);
    v25_.v26 = v17;
    v17 = v25_.v25;
    if (v25_.v25 != nullptr) {
    LABEL_31:
      v23 = 128;
      if (*(_QWORD*)(*v4 + 200) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(*v4 + v23, v17);
    }
  }
  return v2 != v3;
}

__int64 game_gmap_888560(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  while (v3 != v4) {
    v5 = *v3++;
    UnitActor_81a540(v5 + 112, 0x723D4B8u, (__int64)&GameData_1b45704);
  }
  return GameRoutine_14b4cf0(a1, 2u, a1 + 152);
}

float32x4_t* game_gmap_1318260()
{

#pragma clang fp contract(off)
  unsigned int* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v4;
  float32x4_t*** v5;
  float32x4_t*** v6;
  float32x4_t** v7;
  float32x4_t** v8;
  float32x4_t* result;
  __int64 v10;
  __int64 v11;
  int v12;
  struct {
    __int64 (**v13)();
    int* v14;
    char gap32_[16];
    unsigned __int64* v15;
  } v13_;

  v0 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
  v13_.v14 = (int*)&GameData_1ade186;
  v13_.v13 =
      (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186);
  if (game_GameModeData_instance_ == 0 ||
      (v1 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v13_.v13)) == 0 ||
      *(_DWORD*)(v1 + 32) == 0) {
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(float32x4_t****)(v3 + 8);
    v6 = *(float32x4_t****)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v6; ++v5) {
        v7 = *v5;
        if ((*v5)[12] == nullptr && v7[69] == nullptr) {
          goto LABEL_17;
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
          goto LABEL_13;
        }
      }
    LABEL_17:
      result = *v7;
      goto LABEL_23;
    }
  LABEL_13:
    result = (float32x4_t*)game_gmap_SpotMgr_GetCurrentSpot_alt1();
    goto LABEL_23;
  }
  v12 = 0;
  v13_.v13 = GameData_1fb0cb0;
  v13_.v14 = &v12;
  v13_.v15 = (unsigned __int64*)&v13_.v13;
  CorpsManager_9726e0_alt1((__int64)&v13_.v13);
  if (v13_.v15 == (unsigned __int64*)&v13_.v13) {
    v2 = 32;
  }
  else {
    if (v13_.v15 == nullptr) {
      goto LABEL_20;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v13_.v15 + v2))((__int64)v13_.v15);
LABEL_20:
  if (((((v12 & 2) != 0) + (v12 & 1) + ((v12 & 4) != 0) + ((v12 & 8) != 0) +
        ((v12 & 0x10) != 0) + ((v12 & 0x20) != 0) + ((v12 & 0x40) != 0) +
        ((v12 & 0x80) != 0)) |
       ((v12 & 0x100) != 0)) != 0) {
    result = *(float32x4_t**)TroopMgr_1345be0_alt1();
  }
  else {
    result = (float32x4_t*)v0;
  }
LABEL_23:
  v10 = GameData_21f1658;
  v11 = *(_QWORD*)(GameData_21f1658 + 16);
  if (result != *(float32x4_t**)(v11 + 96)) {
    *(_BYTE*)(v11 + 176) = 1;
    if (result != nullptr) {
      GameRoutine_1317f10(*(float32x4_t**)(v10 + 16), result + 2);
    }
    snd_Fade_Fade_10c830_alt2((__int64)&v13_.v13, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"SE_SYS_GMAP_Cancel_Spot",
                        (__int64)"SE_SYS_GMAP_Cancel_Spot", (__int64)&v13_.v13,
                        0, 0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
    return (float32x4_t*)snd_Fade_Destroy_Fade_alt1(&v13_.v13);
  }
  return result;
}

__int64 game_gmap_1319ce0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  float32x4_t* v3;
  __int64 v4;
  __int64 v5;
  float32x4_t** v6;
  float32x4_t** v7;
  float32x4_t* v8;
  float v9;
  float32x4_t v10;
  float32x4_t* v11;
  float32x4_t v12;
  int8x16_t v13;
  float v14;
  __int64 v16;
  long double v17;
  const char* v18;
  __int64 v19;
  __int64 v20;
  _BYTE v21[200];
  __int64 v22;
  __int64 v23;

  v3 = *(float32x4_t**)(result + 96);
  *(_QWORD*)(result + 96) = 0;
  if (*(_BYTE*)(game_g_game_setting + 807) == 1 &&
      ((*(_BYTE*)(game_g_game_setting + 804) & 1) != 0 ||
       *(_BYTE*)(game_g_game_setting + 940) == 1 &&
           (*(_BYTE*)(game_g_game_setting + 805) & 1) != 0 &&
           (*(_BYTE*)(game_g_game_setting + 806) & 1) != 0)) {
    goto LABEL_8;
  }
  if (*(_BYTE*)(game_g_game_setting + 903) != 1) {
  LABEL_12:
    v4 = 80;
    goto LABEL_13;
  }
  if ((*(_BYTE*)(game_g_game_setting + 900) & 1) != 0) {
  LABEL_8:
    v4 = 336;
    goto LABEL_13;
  }
  v4 = 80;
  if (*(_BYTE*)(game_g_game_setting + 940) == 1 &&
      (*(_BYTE*)(game_g_game_setting + 901) & 1) != 0) {
    if (*(_BYTE*)(game_g_game_setting + 902) == 1) {
      goto LABEL_8;
    }
    goto LABEL_12;
  }
LABEL_13:
  v22 = v1;
  v23 = v2;
  v5 = *(_QWORD*)(GameData_21c9700 + 8);
  v6 = *(float32x4_t***)(v5 + 48);
  v7 = *(float32x4_t***)(v5 + 56);
  if (v6 == v7) {
    v8 = nullptr;
  }
  else {
    v10 = *(float32x4_t*)(result + v4);
    v8 = nullptr;
    v9 = 0x1.f400000000000p+9;
    LANES128(v10).n128_u32[1] = 0;
    do {
      v11 = *v6;
      if (LANES128((*v6)[11]).n128_u8[0] != 1) {
        v12 = vsubq_f32(v10, v11[2]);
        v13 = vmulq_f32(v12, v12);
        LANES128(v13).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                .n64_u64[0];
        v14 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]))))
                .n64_f32[0];
        if (v14 < 10.0 && v14 < v9) {
          v9 = v14;
          *(_QWORD*)(result + 96) = v11;
          v8 = v11;
        }
      }
      ++v6;
    } while (v6 != v7);
  }
  if (v3 != v8) {
    if ((*(_BYTE*)(result + 176) & 1) == 0 && v8 != nullptr &&
        (*(_BYTE*)(result + 169) & 1) != 0) {
      v16 = result;
      if ((unsigned __int8)Impl_13261c0(v8) != 0 &&
          (unsigned __int8)Impl_13261c0(*(_QWORD*)(v16 + 96)) != 1) {
        v19 = *(_QWORD*)(v16 + 96);
        if (*(_QWORD*)(v19 + 120) == 0 ||
            (unsigned __int8)Impl_13261c0(*(_QWORD*)(v16 + 96)) == 13 ||
            (unsigned __int8)Impl_13261c0(v19) == 12 ||
            (unsigned __int8)Impl_13261c0(v19) == 11) {
          *(_QWORD*)&v17 = 0;
          snd_Fade_Fade_10c830(v21, v17);
          v18 = "SE_SYS_GMAP_CursorGrip_L";
        }
        else {
          *(_QWORD*)&v17 = 0;
          snd_Fade_Fade_10c830(v21, v17);
          v18 = "SE_SYS_GMAP_CursorGrip_M";
        }
      }
      else {
        *(_QWORD*)&v17 = 0;
        snd_Fade_Fade_10c830(v21, v17);
        v18 = "SE_SYS_GMAP_CursorGrip_H";
      }
      snd_play_ff2d0((void*)(&v20), v18, v18, v21, 0, 65537, 0, 0.0, 1.0);
      snd_Fade_Destroy_Fade(v21);
      result = v16;
    }
    *(_BYTE*)(result + 172) = 0;
  }
  return result;
}

void game_gmap_1319f40(float32x4_t* a1)
{

#pragma clang fp contract(off)
  _BYTE* v2;
  int16x4_t v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  float32x4_t v9;
  int v10;
  int16x4_t v11;
  __int128 v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float32x4_t* v17;
  __int64 v18;
  int v19;
  float32x4_t v20;
  float32x4_t v21;
  int16x4_t v22;
  float32x4_t* v23;
  float32x4_t v24;
  int v25;
  int16x4_t v26;
  int v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  float32x4_t* v31;
  float32x4_t* v32;
  int16x4_t v33;
  int v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  __int128 v52;
  struct {
    __int128 v53;
    char gap64_[16];
    __int64 v54;
    __int64 v55;
  } v53_;

  v2 = *(_BYTE**)game_g_game_setting_ptr;
  if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) == 1 &&
          ((v2[804] & 1) != 0 ||
           v2[940] == 1 && (v2[805] & 1) != 0 && (v2[806] & 1) != 0) ||
      v2[903] == 1 && ((v2[900] & 1) != 0 ||
                       v2[940] == 1 && (v2[901] & 1) != 0 && v2[902] == 1)) {
    if ((LANES128(a1[10]).n128_u8[10] & 1) == 0) {
      if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0 &&
          ((v2[804] & 1) != 0 ||
           v2[940] == 1 && (v2[805] & 1) != 0 && (v2[806] & 1) != 0)) {
        goto LABEL_26;
      }
      if (v2[903] != 1 ||
          (v2[900] & 1) == 0 &&
              (v2[940] != 1 || (v2[901] & 1) == 0 || v2[902] != 1)) {
        goto LABEL_38;
      }
      if (*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 0) {
      LABEL_26:
        if ((v2[804] & 1) != 0 ||
            v2[940] == 1 && v2[805] == 1 && (v2[806] & 1) != 0) {
          if ((v2[760] & 1) != 0) {
            return;
          }
          goto LABEL_38;
        }
      }
      if (v2[903] == 1 &&
          ((v2[900] & 1) != 0 ||
           v2[940] == 1 && v2[901] == 1 && v2[902] == 1) &&
          (v2[856] & 1) != 0) {
        return;
      }
    }
  LABEL_38:
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v4 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v4;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    v53_.v53 = GameData_21a6120;
    GameRoutine_131b050_alt1((__int64)a1, &v53_.v53);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v5 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v5;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    LANES64(v3).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(
                       vceqq_f32(COERCE_AS(float32x4_t, v53_.v53),
                                 COERCE_AS(float32x4_t, GameData_21a6120)))))
            .n64_u64[0];
    if ((LANES64(v3).n64_u8[0] & 1) != 0 || (LANES64(v3).n64_u8[2] & 1) != 0 ||
        (LANES64(v3).n64_u8[4] & 1) != 0) {
      v52 = v53_.v53;
      GameRoutine_131a9b0_alt1(a1, (float32x4_t*)&v52);
    }
    game_gmap_1319ce0((__int64)a1);
    return;
  }
  v53_.v55 = v53_.v54;
  v7 = game_g_game_setting_ptr;
  v8 = *(_QWORD*)game_g_game_setting_ptr;
  if ((*(_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 807LL) != 1 ||
       (*(_BYTE*)(v8 + 804) & 1) == 0 &&
           (*(_BYTE*)(v8 + 940) != 1 || (*(_BYTE*)(v8 + 805) & 1) == 0 ||
            (*(_BYTE*)(v8 + 806) & 1) == 0)) &&
      (*(_BYTE*)(v8 + 903) != 1 ||
       (*(_BYTE*)(v8 + 900) & 1) == 0 &&
           (*(_BYTE*)(v8 + 940) != 1 || (*(_BYTE*)(v8 + 901) & 1) == 0 ||
            *(_BYTE*)(v8 + 902) != 1))) {
    v10 = *(_DWORD*)(v8 + 944);
    LANES128(v9).n128_u32[1] = 0;
    LANES128(v9).n128_u32[3] = 0;
    LANES128(v9).n128_f32[0] =
        (float)(((v10 & 0x40000) != 0) + (v10 << 14 >> 31));
    LANES128(v9).n128_f32[2] =
        (float)(((v10 & 0x10000) != 0) + ((__int16)v10 >> 15));
    v53_.v53 = (__int128)v9;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      goto LABEL_64;
    }
    goto LABEL_146;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v39 = v7;
    v40 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
    v7 = v39;
    if (v40 != 0) {
      v41 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v41;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      v7 = v39;
    }
  }
  v53_.v53 = GameData_21a6120;
  v9 = COERCE_AS(float32x4_t, GameData_21a6120);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
  LABEL_146:
    v36 = v7;
    v49 = v9;
    v37 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
    v9 = v49;
    v7 = v36;
    if (v37 != 0) {
      v38 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v38;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      v9 = v49;
      v7 = v36;
    }
  }
LABEL_64:
  LANES64(v11).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(
                     vceqq_f32(v9, COERCE_AS(float32x4_t, GameData_21a6120)))))
          .n64_u64[0];
  if ((LANES64(v11).n64_u8[0] & 1) == 0 && (LANES64(v11).n64_u8[2] & 1) == 0 &&
      (LANES64(v11).n64_u8[4] & 1) == 0) {
    v12 = *(_OWORD*)(*(_QWORD*)v7 + 960LL);
    v13 = 0x0.0p+0f;
    v14 =
        (float)(*(float*)&v12 + 0x1.0000000000000p-2f) * 0x1.5555560000000p+0f;
    if (*(float*)&v12 >= -0x1.0000000000000p-2f) {
      v14 = 0x0.0p+0f;
    }
    if (*(float*)&v12 > 0x1.0000000000000p-2f) {
      v15 = (float)(*(float*)&v12 + -0x1.0000000000000p-2f) *
            0x1.5555560000000p+0f;
    }
    else {
      v15 = v14;
    }
    if (*((float*)&v12 + 1) <= 0x1.0000000000000p-2f) {
      if (*((float*)&v12 + 1) >= -0x1.0000000000000p-2f) {
        goto LABEL_99;
      }
      v16 = *((float*)&v12 + 1) + 0x1.0000000000000p-2f;
    }
    else {
      v16 = *((float*)&v12 + 1) + -0x1.0000000000000p-2f;
    }
    v13 = v16 * 0x1.5555560000000p+0f;
  LABEL_99:
    LANES128(v21).n128_u64[0] = LODWORD(v15);
    LANES128(v21).n128_u64[1] = COERCE_UNSIGNED_INT(-v13);
    v53_.v53 = (__int128)v21;
    game_gmap_131a870_alt2((float32x4_t*)&v53_.v53);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v42 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v42;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    LANES64(v22).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(
                       vceqq_f32(COERCE_AS(float32x4_t, v53_.v53),
                                 COERCE_AS(float32x4_t, GameData_21a6120)))))
            .n64_u64[0];
    if ((LANES64(v22).n64_u8[0] & 1) == 0 &&
        (LANES64(v22).n64_u8[2] & 1) == 0 &&
        (LANES64(v22).n64_u8[4] & 1) == 0) {
      goto LABEL_141;
    }
    v23 = &v51;
    v51 = COERCE_AS(float32x4_t, v53_.v53);
    goto LABEL_140;
  }
  v17 = (float32x4_t*)LANES128(a1[6]).n128_u64[0];
  if (v17 == nullptr) {
  LABEL_135:
    game_gmap_131a870_alt2((float32x4_t*)&v53_.v53);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
      v43 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v43;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
    }
    LANES64(v33).n64_u64[0] =
        LANES64_OF(vmovn_s32(vmvnq_s8(
                       vceqq_f32(COERCE_AS(float32x4_t, v53_.v53),
                                 COERCE_AS(float32x4_t, GameData_21a6120)))))
            .n64_u64[0];
    if ((LANES64(v33).n64_u8[0] & 1) != 0 ||
        (LANES64(v33).n64_u8[2] & 1) != 0 ||
        (LANES64(v33).n64_u8[4] & 1) != 0) {
      v23 = (float32x4_t*)&v52;
      v52 = v53_.v53;
    LABEL_140:
      GameRoutine_131a9b0_alt1(a1, v23);
    }
  LABEL_141:
    game_gmap_1319ce0((__int64)a1);
    return;
  }
  v18 = *(_QWORD*)v7;
  if (*(_BYTE*)(*(_QWORD*)v7 + 807LL) == 1 &&
      ((*(_BYTE*)(v18 + 804) & 1) != 0 ||
       *(_BYTE*)(v18 + 940) == 1 && (*(_BYTE*)(v18 + 805) & 1) != 0 &&
           (*(_BYTE*)(v18 + 806) & 1) != 0)) {
    goto LABEL_133;
  }
  if (*(_BYTE*)(v18 + 903) == 1 &&
      ((*(_BYTE*)(v18 + 900) & 1) != 0 ||
       *(_BYTE*)(v18 + 940) == 1 && (*(_BYTE*)(v18 + 901) & 1) != 0 &&
           (*(_BYTE*)(v18 + 902) & 1) != 0)) {
    goto LABEL_133;
  }
  v19 = *(_DWORD*)(v18 + 952);
  if ((v19 & 0x78000) == 0) {
    goto LABEL_133;
  }
  if (*(_BYTE*)(*(_QWORD*)v7 + 807LL) != 0 &&
          ((*(_BYTE*)(v18 + 804) & 1) != 0 ||
           *(_BYTE*)(v18 + 940) == 1 && (*(_BYTE*)(v18 + 805) & 1) != 0 &&
               (*(_BYTE*)(v18 + 806) & 1) != 0) ||
      *(_BYTE*)(v18 + 903) != 0 &&
          ((*(_BYTE*)(v18 + 900) & 1) != 0 ||
           *(_BYTE*)(v18 + 940) == 1 && (*(_BYTE*)(v18 + 901) & 1) != 0 &&
               *(_BYTE*)(v18 + 902) == 1)) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0) {
      v44 = v7;
      v45 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
      v7 = v44;
      if (v45 != 0) {
        v46 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v46;
        __cxa_guard_release_alt1((__int64)&GameData_21a6130);
        v7 = v44;
      }
    }
    v18 = *(_QWORD*)v7;
    v20 = COERCE_AS(float32x4_t, GameData_21a6120);
    if ((*(_BYTE*)(*(_QWORD*)v7 + 807LL) & 1) != 0) {
    LABEL_108:
      if ((*(_BYTE*)(v18 + 804) & 1) != 0 ||
          *(_BYTE*)(v18 + 940) == 1 && (*(_BYTE*)(v18 + 805) & 1) != 0 &&
              (*(_BYTE*)(v18 + 806) & 1) != 0) {
        goto LABEL_114;
      }
    }
  }
  else {
    LANES128(v20).n128_u32[1] = 0;
    LANES128(v20).n128_u32[3] = 0;
    LANES128(v20).n128_f32[0] =
        (float)(((v19 & 0x40000) != 0) + (v19 << 14 >> 31));
    LANES128(v20).n128_f32[2] =
        (float)(((v19 & 0x10000) != 0) + ((__int16)v19 >> 15));
    if (*(_BYTE*)(*(_QWORD*)v7 + 807LL) != 0) {
      goto LABEL_108;
    }
  }
  if (*(_BYTE*)(v18 + 903) != 1 ||
      (*(_BYTE*)(v18 + 900) & 1) == 0 &&
          (*(_BYTE*)(v18 + 940) != 1 || (*(_BYTE*)(v18 + 901) & 1) == 0 ||
           *(_BYTE*)(v18 + 902) != 1)) {
    v25 = *(_DWORD*)(v18 + 944);
    LANES128(v24).n128_u32[1] = 0;
    LANES128(v24).n128_u32[3] = 0;
    LANES128(v24).n128_f32[0] =
        (float)(((v25 & 0x40000) != 0) + (v25 << 14 >> 31));
    LANES128(v24).n128_f32[2] =
        (float)(((v25 & 0x10000) != 0) + ((__int16)v25 >> 15));
    goto LABEL_120;
  }
LABEL_114:
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v50 = v20;
    v47 = __cxa_guard_acquire_alt1((__int64)&GameData_21a6130);
    v20 = v50;
    if (v47 != 0) {
      v48 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v48;
      __cxa_guard_release_alt1((__int64)&GameData_21a6130);
      v20 = v50;
    }
  }
  v24 = COERCE_AS(float32x4_t, GameData_21a6120);
LABEL_120:
  v17 = (float32x4_t*)LANES128(a1[6]).n128_u64[0];
  LANES64(v26).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(v20, v24))).n64_u64[0];
  if ((LANES64(v26).n64_u8[0] & 1) != 0 && (LANES64(v26).n64_u8[2] & 1) != 0 &&
      (LANES64(v26).n64_u8[4] & 1) != 0) {
    v27 = GameRoutine_131b280_alt1((__int64)&a1[17]);
    v28 = LANES128(v17[3]).n128_u64[0];
    v29 = LANES128(v17[3]).n128_u64[1];
    if (v28 == v29) {
    LABEL_143:
      v34 = GameRoutine_131b280_alt1((__int64)&a1[17]);
      v35 = game_gmap_1326c80_alt1(v17, v34);
      if (v35 == 0) {
        goto LABEL_141;
      }
      v32 = (float32x4_t*)(v35 + 32);
    }
    else {
      v30 = LANES128(v17[3]).n128_u64[0];
      while (1) {
        if (*(_DWORD*)(*(_QWORD*)v30 + 116LL) == v27) {
          v31 = *(float32x4_t**)(*(_QWORD*)v30 + 8LL);
          if (LANES128(v31[11]).n128_u8[0] != 1) {
            break;
          }
        }
        v30 += 8LL;
        if (v30 == v29) {
          while (1) {
            if (*(_DWORD*)(*(_QWORD*)v28 + 120LL) == v27) {
              v31 = *(float32x4_t**)(*(_QWORD*)v28 + 8LL);
              if (LANES128(v31[11]).n128_u8[0] != 1) {
                goto LABEL_132;
              }
            }
            v28 += 8LL;
            if (v28 == v29) {
              goto LABEL_143;
            }
          }
        }
      }
    LABEL_132:
      v32 = v31 + 2;
    }
    GameRoutine_1317f10(a1, v32);
    goto LABEL_141;
  }
LABEL_133:
  if (v17 == nullptr || LANES128(a1[20]).n128_i32[0] >= 8) {
    goto LABEL_135;
  }
}

float game_gmap_131a870(float32x4_t* a1, double a2, double a3, long double a4)
{
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float32x4_t v11;
  float v12;
  float result;
  float32x4_t v14;

  v5 = Camera_1315570(*(_QWORD*)(*GameData_212d718 + 16), a2, a3, a4);
  v6 = (float)(v5 * 0x1.1df46a0000000p-6) +
       (float)(roundf((float)(v5 * 0x1.1df46a0000000p-6) *
                      0x1.45f3060000000p-3) *
               -0x1.921fb60000000p+2);
  if (v6 > 0x1.921fb60000000p+0) {
    v7 = 0x1.921fb60000000p+1;
  LABEL_5:
    v6 = v7 - v6;
    v8 = -1.0;
    goto LABEL_6;
  }
  v8 = 1.0;
  if (v6 < -0x1.921fb60000000p+0) {
    v7 = -0x1.921fb60000000p+1;
    goto LABEL_5;
  }
LABEL_6:
  v9 =
      v8 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c188) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c188 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c188 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c188 *
                                                                                            (float)(v6 *
                                                                                                    v6))) *
                                                                            (float)(v6 *
                                                                                    v6))) *
                                                         (float)(v6 * v6))) *
                                         (float)(v6 * v6))) *
                      (float)(v6 * v6)) +
              1.0);
  v10 =
      v6 *
      (float)((float)((float)-(
                          float)(*(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c190) -
                                 (float)((float)(*(float*)((char*)((
                                                               _UNKNOWN**)0x8LL) +
                                                           (_QWORD)
                                                               GameData_212c190 +
                                                           4) +
                                                 (float)((float)-(
                                                             float)(*(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190) -
                                                                    (float)((float)(*((float*)
                                                                                          GameData_212c190 +
                                                                                      1) -
                                                                                    (float)(*(float*)
                                                                                                GameData_212c190 *
                                                                                            (float)(v6 *
                                                                                                    v6))) *
                                                                            (float)(v6 *
                                                                                    v6))) *
                                                         (float)(v6 * v6))) *
                                         (float)(v6 * v6))) *
                      (float)(v6 * v6)) +
              1.0);
  v11 = *a1;
  LANES128(*(a1)).n128_u32[1] = 0;
  v12 = vmuls_lane_f32(v10, v11, 2) + (float)(v9 * LANES128(v11).n128_f32[0]);
  result =
      vmuls_lane_f32(v9, v11, 2) - (float)(LANES128(v11).n128_f32[0] * v10);
  LANES128(*(a1)).n128_f32[0] = v12;
  v14 = *a1;
  LANES128(v14).n128_u64[1] = LODWORD(result);
  *a1 = v14;
  return result;
}

__int64 game_gmap_1327670(float32x4_t* a1, float32x4_t* a2)
{
  float32x4_t v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v2 = vsubq_f32(*a2, a1[2]);
  if (LANES128(v2).n128_f32[2] == 0.0f) {
    v3 = 0.0f;
    if (LANES128(v2).n128_f32[0] == 0.0f) {
      goto LABEL_20;
    }
  }
  v4 = -LANES128(v2).n128_f32[2];
  v5 = *(float*)GameData_212c2f0;
  v6 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c2f0);
  v7 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0);
  v8 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c2f0 + 8);
  if (LANES128(v2).n128_f32[2] > 0.0f) {
    if (LANES128(v2).n128_f32[0] >= 0.0f) {
      if (LANES128(v2).n128_f32[0] <= LANES128(v2).n128_f32[2]) {
        v9 = LANES128(v2).n128_f32[0] / LANES128(v2).n128_f32[2];
        v10 = 0x1.921fb60000000p+1f;
        goto LABEL_18;
      }
      v11 = LANES128(v2).n128_f32[2] / LANES128(v2).n128_f32[0];
      v12 = 0x1.921fb60000000p+0f;
    }
    else {
      if (LANES128(v2).n128_f32[0] < v4) {
        v9 = v4 / LANES128(v2).n128_f32[0];
        v10 = -0x1.921fb60000000p+0f;
      LABEL_18:
        v3 =
            v10 -
            (float)(v9 *
                    (float)((float)((float)((float)((float)(v8 +
                                                            (float)((float)((float)((float)(v7 + (float)((
                                                                                                             float)((
                                                                                                                        float)((
                                                                                                                                   float)(v6 + (float)((
                                                                                                                                                           float)((float)(v5 * (float)(v9 * v9)) - *((float*)GameData_212c2f0 + 1)) *
                                                                                                                                                       (float)(v9 *
                                                                                                                                                               v9))) *
                                                                                                                               (float)(v9 *
                                                                                                                                       v9)) -
                                                                                                                    *(float*)((char*)((
                                                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                                                              (_QWORD)
                                                                                                                                  GameData_212c2f0 +
                                                                                                                              4)) *
                                                                                                         (float)(v9 *
                                                                                                                 v9))) *
                                                                                    (float)(v9 *
                                                                                            v9)) -
                                                                            *(float*)((char*)((
                                                                                          __int128*)0x10LL) +
                                                                                      (_QWORD)
                                                                                          GameData_212c2f0 +
                                                                                      4)) *
                                                                    (float)(v9 *
                                                                            v9))) *
                                                    (float)(v9 * v9)) -
                                            *(float*)((char*)((
                                                          __int128*)0x10LL) +
                                                      (_QWORD)GameData_212c2f0 +
                                                      12)) *
                                    (float)(v9 * v9)) +
                            1.0f));
        goto LABEL_20;
      }
      v11 = LANES128(v2).n128_f32[0] / v4;
      v12 = -0x1.921fb60000000p+1f;
    }
  LABEL_15:
    v3 =
        (float)(v11 *
                (float)((float)((float)((float)((float)(v8 +
                                                        (float)((float)((float)((float)(v7 + (float)((float)((
                                                                                                                 float)((float)(v6 + (float)((float)((float)(v5 * (float)(v11 * v11)) - *((float*)GameData_212c2f0 + 1)) * (float)(v11 *
                                                                                                                                                                                                                                   v11))) *
                                                                                                                        (float)(v11 *
                                                                                                                                v11)) -
                                                                                                             *(float*)((char*)((
                                                                                                                           _UNKNOWN**)0x8LL) +
                                                                                                                       (_QWORD)
                                                                                                                           GameData_212c2f0 +
                                                                                                                       4)) *
                                                                                                     (float)(v11 *
                                                                                                             v11))) *
                                                                                (float)(v11 *
                                                                                        v11)) -
                                                                        *(float*)((char*)((
                                                                                      __int128*)0x10LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c2f0 +
                                                                                  4)) *
                                                                (float)(v11 *
                                                                        v11))) *
                                                (float)(v11 * v11)) -
                                        *(float*)((char*)((__int128*)0x10LL) +
                                                  (_QWORD)GameData_212c2f0 +
                                                  12)) *
                                (float)(v11 * v11)) +
                        1.0f)) +
        v12;
    goto LABEL_20;
  }
  if (LANES128(v2).n128_f32[0] < 0.0f) {
    if (LANES128(v2).n128_f32[2] <= LANES128(v2).n128_f32[0]) {
      v13 = LANES128(v2).n128_f32[0] / LANES128(v2).n128_f32[2];
      v3 = -(float)(v13 * (float)((float)((float)((float)((float)(v8 + (float)((float)((
                                                                                           float)((
                                                                                                      float)(v7 + (float)((
                                                                                                                              float)((float)((float)(v6 + (float)((float)((float)(v5 * (float)(v13 * v13)) - *((float*)GameData_212c2f0 + 1)) * (float)(v13 * v13))) * (float)(v13 * v13)) - *(float*)((char*)((
                                                                                                                                                                                                                                                                                                           _UNKNOWN**)0x8LL) +
                                                                                                                                                                                                                                                                                                       (_QWORD)
                                                                                                                                                                                                                                                                                                           GameData_212c2f0 +
                                                                                                                                                                                                                                                                                                       4)) *
                                                                                                                          (float)(v13 *
                                                                                                                                  v13))) *
                                                                                                  (float)(v13 *
                                                                                                          v13)) -
                                                                                       *(float*)((char*)((
                                                                                                     __int128*)0x10LL) +
                                                                                                 (_QWORD)
                                                                                                     GameData_212c2f0 +
                                                                                                 4)) *
                                                                               (float)(v13 *
                                                                                       v13))) *
                                                          (float)(v13 * v13)) -
                                                  *(float*)((char*)((
                                                                __int128*)0x10LL) +
                                                            (_QWORD)
                                                                GameData_212c2f0 +
                                                            12)) *
                                          (float)(v13 * v13)) +
                                  1.0f));
      goto LABEL_20;
    }
    v11 = LANES128(v2).n128_f32[2] / LANES128(v2).n128_f32[0];
    v12 = -0x1.921fb60000000p+0f;
    goto LABEL_15;
  }
  if (LANES128(v2).n128_f32[0] > v4) {
    v9 = v4 / LANES128(v2).n128_f32[0];
    v10 = 0x1.921fb60000000p+0f;
    goto LABEL_18;
  }
  v14 = LANES128(v2).n128_f32[0] / v4;
  v3 =
      v14 *
      (float)((
                  float)((float)((float)((float)(v8 +
                                                 (float)((float)((float)((float)(v7 +
                                                                                 (float)((
                                                                                             float)((float)((float)(v6 + (float)((float)((float)(v5 * (float)(v14 * v14)) - *((float*)GameData_212c2f0 + 1)) * (float)(v14 * v14))) * (float)(v14 *
                                                                                                                                                                                                                                              v14)) -
                                                                                                    *(float*)((char*)((
                                                                                                                  _UNKNOWN**)0x8LL) +
                                                                                                              (_QWORD)GameData_212c2f0 +
                                                                                                              4)) *
                                                                                         (float)(v14 *
                                                                                                 v14))) *
                                                                         (float)(v14 *
                                                                                 v14)) -
                                                                 *(float*)((char*)((
                                                                               __int128*)0x10LL) +
                                                                           (_QWORD)
                                                                               GameData_212c2f0 +
                                                                           4)) *
                                                         (float)(v14 * v14))) *
                                         (float)(v14 * v14)) -
                                 *(float*)((char*)((__int128*)0x10LL) +
                                           (_QWORD)GameData_212c2f0 + 12)) *
                         (float)(v14 * v14)) +
              1.0f);
LABEL_20:
  v15 = v3 * 0x1.ca5dc00000000p+5f;
  if (v15 > -0x1.6800000000000p+5f && v15 <= 0x1.6800000000000p+5f) {
    return 1;
  }
  if (v15 > 0x1.0e00000000000p+7f || v15 <= -0x1.0e00000000000p+7f) {
    return 2;
  }
  if (v15 > -0x1.6800000000000p+5f || v15 <= -0x1.0e00000000000p+7f) {
    return 4;
  }
  else {
    return 3;
  }
}

__attribute__((swiftcall)) void game_gmap_13288f0(PSEUDO_X8 x8_, __int64 a1,
                                                  __int16* a2)
{
  unsigned int* a3 = (unsigned int*)PSEUDO_X8_VALUE(x8_);
  int v3;
  int v4;
  int v5;
  int v7;
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;

  v3 = *a2;
  v4 = a2[1];
  v5 = a2[2];
  if (v4 * v3 * v5 != 0) {
    v7 = game_script_hub_schedule_kHourCycles[a2[3] % 24];
  }
  else {
    v7 = -1;
  }
  v8 = *(_DWORD*)(a1 + 96) + 40000 * v3 + 400 * v4 + 4 * v5 + v7;
  nn_os_LockMutex(&game_g_random_mutex);
  v9 = 1812433253 * (v8 ^ (v8 >> 30));
  v10 = 1812433253 * (v9 ^ (v9 >> 30)) + 1;
  *a3 = v9;
  a3[1] = v10;
  v11 = 1812433253 * (v10 ^ (v10 >> 30)) + 2;
  a3[2] = v11;
  a3[3] = 1812433253 * (v11 ^ (v11 >> 30)) + 3;
  {
    nn_os_UnlockMutex(&game_g_random_mutex);
    return;
  }
}

__n128 game_gmap_1329000(__int64 a1, unsigned __int8 a2, __n128 result)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v4;
  unsigned __int64* v5;
  _QWORD* v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64* v14;
  unsigned int v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  struct {
    float32x4_t v20;
    char* v21;
    int v22;
    char gap28_[4];
    __int64 v23;
    __int64 v24;
    __int128 v25;
    __int64 v26;
    __int64 v27;
  } v20_;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1 + 16LL * a2;
  v6 = *(_QWORD**)(v3 + 184);
  v5 = (unsigned __int64*)(v3 + 184);
  v4 = v6;
  v7 = *v6;
  if (*v6 != 0 && *(_DWORD*)(v7 + 16) == *((_DWORD*)v4 + 2)) {
    return result;
  }
  if (a2 <= 2u) {
    if (a2 == 1) {
      v8 = "Gmap_Quest_Main";
      goto LABEL_15;
    }
    if (a2 == 2) {
      v8 = "Gmap_Quest_Sub";
      goto LABEL_15;
    }
  LABEL_14:
    v8 = &GameData_1a9f09e;
    goto LABEL_15;
  }
  if (a2 == 3) {
    v9 = a1;
    game_HashString_alt1((__int64)&GameData_1abd4b3),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    a1 = v9;
    v8 = "Gmap_Spot_Smoke_BlackA";
    goto LABEL_15;
  }
  if (a2 == 4) {
    v8 = "Gmap_Dgs_Damage";
    goto LABEL_15;
  }
  if (a2 != 5) {
    goto LABEL_14;
  }
  v8 = "Gmap_RareSpot";
LABEL_15:
  v20_.v22 = 5;
  v10 = *(_QWORD*)(a1 + 32);
  v11 = *(_QWORD*)(a1 + 40);
  v20_.v20 = (__typeof__(v20_.v20)){0};
  v20_.v23 = v10;
  v20_.v24 = v11;
  v12 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v20_.v25 = GameData_1a837f0;
  v20_.v21 = v8;
  v13 = *((_QWORD*)GameData_212c540 + 1);
  v20_.v26 = *(_QWORD*)GameData_212c540;
  v20_.v27 = v13;
  v14 = Manager_bc6460(v12, &v20_.v20, 1),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameRoutine_14a10d0(&v20_.v20, (__int64)v14, v15,
                               (__int64)&GameData_1a9f09e),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = LANES128(v20_.v20).n128_u64[1];
  v16 = LANES128(v20_.v20).n128_u64[0];
  if (LANES128(v20_.v20).n128_u64[1] != 0) {
    atomic_fetch_add_explicit(
        (atomic_ullong* volatile)(LANES128(v20_.v20).n128_u64[1] + 8), 1u,
        memory_order_relaxed);
  }
  v18 = v5[1];
  *v5 = v16;
  v5[1] = v17;
  if (v18 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v18 + 16LL))(
          v18, *(long double*)&result),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v17 = v5[1];
  }
  if (v17 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v17 + 16LL))(
          v17, *(long double*)&result),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v19 = LANES128(v20_.v20).n128_u64[1];
  if (LANES128(v20_.v20).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v20_.v20).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v19 + 16LL))(
        v19, *(long double*)&result),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

void game_gmap_1329500(__int64 a1, char* a2, char a3, char a4)
{
  unsigned __int64 v4;
  char* v5;
  char* v6;
  char* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  char v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  char v19;
  char* v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64** v26;
  __int64* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  unsigned __int64 v39;
  float v40;
  _QWORD* v41;
  char* v42;
  float v43;
  _BOOL8 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 primeEm;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  char* v58;
  signed __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  char* v63;
  char* v64;
  __int64 v65;
  unsigned __int64 v66;
  char* v67;
  char* v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  char* v73;
  char* v74;
  char* v75;
  signed __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  char* v80;
  bool v81;
  unsigned __int64 v82;
  unsigned __int64 v83;
  char* v84;
  char* v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  _QWORD* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  char* v101;
  __int64* v102;
  __int64* v103;
  int v104;
  int v105;
  int v106;
  int v107;
  int v108;
  __int64* v109;
  _BYTE* v110;
  int v111;
  int v112;
  unsigned __int8 v113;
  char v114;
  char v115;
  bool v116;
  char v117;
  bool v118;
  float v119;
  __int64 v120;
  char v121;
  float v122;
  int v123;
  __int64 v124;
  char* v127;
  unsigned __int64 v128;
  char* v129;
  char* v130;
  _QWORD* v131;
  __int64 v132;
  __int64 v133;
  unsigned __int64 v135;
  char* v136;
  __int64 v137;
  unsigned __int64 v138;
  _QWORD* v139;
  unsigned __int64 v140;
  float v141;
  char* v142;
  char* v143;
  _QWORD* v144;
  __int64 v145;
  unsigned __int64 v146;
  char* v147;

  if (a2 == nullptr) {
    return;
  }
  v4 = *((_QWORD*)a2 + 6);
  v5 = a2;
  v131 = *((_QWORD**)a2 + 7);
  if ((_QWORD*)v4 == v131) {
    return;
  }
  v6 = nullptr;
  v7 = nullptr;
  v128 = 0;
  v129 = a2 + 1;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  while (2) {
    v9 = *v8;
    v10 = *(_QWORD*)v4;
    v139 = nullptr;
    v140 = 0;
    v137 = 0;
    v138 = 0;
    v141 = 0x1.0000000000000p+0f;
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(v9, 8, 16, 0);
    v12 = *v5;
    v13 = *((char**)v5 + 2);
    v142 = v11;
    *(_QWORD*)v11 = v5;
    v143 = v11 + 8;
    v144 = v11 + 8;
    if ((v12 & 1) != 0) {
      v14 = v13;
    }
    else {
      v14 = v129;
    }
    v15 = strlen(v14);
    if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    v16 = v15;
    v135 = v4;
    v136 = v7;
    if (v15 >= 0x17) {
      if ((v15 | 7) == 0x17) {
        v18 = 26;
      }
      else {
        v18 = (v15 | 7) + 1;
      }
      v17 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       v18, 16, 0);
      v146 = v16;
      v147 = v17;
      v145 = v18 | 1;
      goto LABEL_16;
    }
    v17 = (char*)&v145 + 1;
    LOBYTE(v145) = 2 * v15;
    if (v15 != 0) {
    LABEL_16:
      memmove(v17, v14, v16);
    }
    v17[v16] = 0;
    v19 = v145;
    v130 = v147;
    if ((v145 & 1) != 0) {
      v20 = v147;
    }
    else {
      v20 = (char*)&v145 + 1;
    }
    if ((v145 & 1) != 0) {
      v21 = v146;
    }
    else {
      v21 = (unsigned __int64)(unsigned __int8)v145 >> 1;
    }
    v22 = std___1___hash_memory(v20, v21);
    v23 = v138;
    v24 = v22;
    if (v138 == 0) {
      goto LABEL_65;
    }
    v132 = v10;
    v25 = v138 - 1;
    if ((v138 & (v138 - 1)) != 0) {
      v4 = v22;
      if (v22 >= v138) {
        v4 = v22 % v138;
      }
    }
    else {
      v4 = v25 & v22;
    }
    v26 = *(__int64***)(v137 + 8 * v4);
    if (v26 == nullptr) {
      v10 = v132;
      goto LABEL_65;
    }
    v127 = v6;
    v27 = *v26;
    if (*v26 == nullptr) {
    LABEL_63:
      v6 = v127;
      v10 = v132;
    LABEL_65:
      v8 = (__int64*)fw_memory_g_heap_manager_ptr;
      v37 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
      v38 = v145;
      v39 = v146;
      v40 = v141;
      v41 = v37;
      v37[5] = 0;
      v37[1] = v24;
      v37[2] = v38;
      v42 = v147;
      v37[3] = v39;
      v37[4] = v42;
      v43 = (float)(v140 + 1);
      if (v23 == 0 || (float)(v40 * (float)v23) < v43) {
        v44 = v23 < 3 || (v23 & (v23 - 1)) != 0;
        v45 = v44 | (2 * v23);
        v46 = vcvtps_u64_f32(v43 / v40);
        if (v45 <= v46) {
          primeEm = v46;
        }
        else {
          primeEm = v45;
        }
        if (primeEm == 1) {
          primeEm = 2;
        }
        else if ((primeEm & (primeEm - 1)) != 0) {
          primeEm = std___1___next_prime(primeEm);
        }
        v48 = v138;
        if (primeEm > v138) {
          goto LABEL_78;
        }
        if (primeEm < v138) {
          v49 = vcvtps_u64_f32((float)v140 / v141);
          if (v138 < 3 || (v138 & (v138 - 1)) != 0) {
            v49 = std___1___next_prime(v49);
          }
          else {
            v50 = 1LL << -(char)__clz(v49 - 1);
            if (v49 >= 2) {
              v49 = v50;
            }
          }
          if (primeEm <= v49) {
            primeEm = v49;
          }
          if (primeEm < v48) {
          LABEL_78:
            GameRoutine_132c1c0(&v137, primeEm);
          }
        }
        v23 = v138;
        if ((v138 & (v138 - 1)) != 0) {
          if (v24 >= v138) {
            v4 = v24 % v138;
          }
          else {
            v4 = v24;
          }
        }
        else {
          v4 = (v138 - 1) & v24;
        }
      }
      v51 = v137;
      v52 = *(_QWORD**)(v137 + 8 * v4);
      if (v52 != nullptr) {
        *v41 = *v52;
        *v52 = v41;
      }
      else {
        v53 = v139;
        v139 = v41;
        *v41 = v53;
        *(_QWORD*)(v51 + 8 * v4) = &v139;
        if (v53 != nullptr) {
          v54 = v53[1];
          if ((v23 & (v23 - 1)) != 0) {
            if (v54 >= v23) {
              v54 %= v23;
            }
          }
          else {
            v54 &= v23 - 1;
          }
          *(_QWORD*)(v137 + 8 * v54) = v41;
        }
      }
      v5 = a2;
      v7 = v136;
      v55 = v140 + 1;
      v41[5] = a2;
      v140 = v55;
      goto LABEL_103;
    }
    if ((v138 & v25) != 0) {
      v10 = v132;
      while (1) {
        v28 = v27[1];
        if (v28 == v24) {
          v29 = *((unsigned __int8*)v27 + 16);
          v30 = v27[3];
          if ((v29 & 1) == 0) {
            v30 = v29 >> 1;
          }
          if (v30 == v21) {
            v31 =
                (v29 & 1) != 0 ? (__int64*)v27[4] : (__int64*)((char*)v27 + 17);
            if ((unsigned int)memcmp(v31, v20, v21) == 0) {
              goto LABEL_56;
            }
          }
        }
        else {
          if (v28 >= v23) {
            v28 %= v23;
          }
          if (v28 != v4) {
          LABEL_64:
            v6 = v127;
            goto LABEL_65;
          }
        }
        v27 = (__int64*)*v27;
        if (v27 == nullptr) {
          goto LABEL_64;
        }
      }
    }
    while (1) {
      v32 = v27[1];
      if (v32 != v24) {
        if ((v32 & v25) != v4) {
          goto LABEL_63;
        }
        goto LABEL_46;
      }
      v33 = *((unsigned __int8*)v27 + 16);
      v34 = v27[3];
      if ((v33 & 1) == 0) {
        v34 = v33 >> 1;
      }
      if (v34 == v21) {
        v35 = (v33 & 1) != 0 ? (__int64*)v27[4] : (__int64*)((char*)v27 + 17);
        if ((unsigned int)memcmp(v35, v20, v21) == 0) {
          break;
        }
      }
    LABEL_46:
      v27 = (__int64*)*v27;
      if (v27 == nullptr) {
        goto LABEL_63;
      }
    }
    v10 = v132;
  LABEL_56:
    v5 = a2;
    v7 = v136;
    v27[5] = (__int64)a2;
    v6 = v127;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    if ((v19 & 1) != 0 && v130 != nullptr) {
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v36);
    }
  LABEL_103:
    v56 = Spot_132ba80(&v137, *(_QWORD*)(v10 + 8));
    if ((v56 & 1) == 0) {
      goto LABEL_139;
    }
    if ((unsigned __int64)v7 >= v128) {
      v63 = (char*)(v7 - v6);
      v64 = v6;
      v65 = (v7 - v6) >> 6;
      v66 = v65 + 1;
      if ((unsigned __int64)(v65 + 1) >> 58 != 0) {
        GameRoutine_132c900();
      }
      v67 = v64;
      v68 = v7;
      v69 = v128 - (_QWORD)v64;
      v70 = (__int64)(v128 - (_QWORD)v64) >> 5;
      if (v70 > v66) {
        v66 = v70;
      }
      if (v69 >= 0x7FFFFFFFFFFFFFC0LL) {
        v71 = 0x3FFFFFFFFFFFFFFLL;
      }
      else {
        v71 = v66;
      }
      if (v71 != 0) {
        if (v71 >> 58 != 0) {
          GameRoutine_60a210(v56);
        }
        v72 = fw_memory_HeapManager_Allocate_alt1(*v8, v71 << 6, 16, 0);
      }
      else {
        v72 = 0;
      }
      v73 = &v63[v72];
      v133 = v72;
      v57 = Spot_132c460(&v63[v72], &v137);
      v75 = v142;
      v74 = v143;
      *((_QWORD*)v73 + 6) = 0;
      *((_QWORD*)v73 + 7) = 0;
      v76 = v74 - v75;
      *((_QWORD*)v73 + 5) = 0;
      if (v74 != v75) {
        if (v76 < 0) {
          goto LABEL_222;
        }
        v77 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v74 - v75, 16, 0);
        v78 = v77 + v76;
        *((_QWORD*)v73 + 5) = v77;
        *((_QWORD*)v73 + 6) = v77;
        *((_QWORD*)v73 + 7) = v77 + v76;
        memcpy(v77, v75, v76);
        *((_QWORD*)v73 + 6) = v78;
      }
      v79 = &v73[-64 * v65];
      v80 = v67;
      v81 = v67 == v68;
      v5 = a2;
      if (!v81) {
        v82 = 0;
        do {
          v84 = &v80[v82];
          v85 = &v79[v82];
          v86 = *(_QWORD*)&v80[v82];
          *(_QWORD*)v84 = 0;
          *(_QWORD*)v85 = v86;
          *((_QWORD*)v85 + 1) = *(_QWORD*)&v80[v82 + 8];
          *((_QWORD*)v84 + 1) = 0;
          v87 = *(_QWORD*)&v80[v82 + 16];
          *((_QWORD*)v85 + 2) = v87;
          v88 = *(_QWORD*)&v80[v82 + 24];
          *((_QWORD*)v85 + 3) = v88;
          *((_DWORD*)v85 + 8) = *(_DWORD*)&v80[v82 + 32];
          if (v88 != 0) {
            v89 = *((_QWORD*)v85 + 1);
            v83 = *(_QWORD*)(v87 + 8);
            if ((v89 & (v89 - 1)) != 0) {
              if (v83 >= v89) {
                v83 %= v89;
              }
            }
            else {
              v83 &= v89 - 1;
            }
            *(_QWORD*)(*(_QWORD*)&v79[v82] + 8 * v83) = &v79[v82 + 16];
            *(_QWORD*)&v80[v82 + 16] = 0;
            *(_QWORD*)&v80[v82 + 24] = 0;
          }
          *((_QWORD*)v85 + 6) = 0;
          *((_QWORD*)v85 + 7) = 0;
          *((_QWORD*)v85 + 5) = 0;
          v82 += 64LL;
          *((_QWORD*)v85 + 5) = *((_QWORD*)v84 + 5);
          *((_QWORD*)v85 + 6) = *((_QWORD*)v84 + 6);
          *((_QWORD*)v85 + 7) = *((_QWORD*)v84 + 7);
          *((_QWORD*)v84 + 6) = 0;
          *((_QWORD*)v84 + 7) = 0;
          *((_QWORD*)v84 + 5) = 0;
        } while (&v80[v82] != v68);
        v90 = v80;
        do {
          Spot_132c920(v90);
          v90 += 64;
        } while (v90 != v68);
      }
      v7 = v73 + 64;
      v128 = v133 + (v71 << 6);
      if (v80 == nullptr) {
        v6 = &v73[-64 * v65];
        v8 = &fw_memory_g_heap_manager;
        v62 = v142;
        if (v142 == nullptr) {
          goto LABEL_144;
        }
        goto LABEL_140;
      }
      v91 = fw_memory_g_heap_manager_ptr;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) != 0) {
        v92 = 128;
      }
      else {
        v92 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v92);
      v6 = &v73[-64 * v65];
      v8 = (__int64*)v91;
    LABEL_139:
      v62 = v142;
      if (v142 == nullptr) {
        goto LABEL_144;
      }
      goto LABEL_140;
    }
    v57 = Spot_132c460(v7, &v137);
    *((_QWORD*)v7 + 6) = 0;
    *((_QWORD*)v7 + 7) = 0;
    *((_QWORD*)v7 + 5) = 0;
    v58 = v142;
    v59 = v143 - v142;
    if (v143 != v142) {
      if (v59 < 0) {
      LABEL_222:
        GameRoutine_8875e0(v57);
      }
      v60 = fw_memory_HeapManager_Allocate_alt1(*v8, v143 - v142, 16, 0);
      v61 = v60 + v59;
      *((_QWORD*)v7 + 5) = v60;
      *((_QWORD*)v7 + 6) = v60;
      *((_QWORD*)v7 + 7) = v60 + v59;
      memcpy(v60, v58, v59);
      *((_QWORD*)v7 + 6) = v61;
    }
    v7 += 64;
    v62 = v142;
    if (v142 != nullptr) {
    LABEL_140:
      v93 = *v8;
      v143 = v62;
      if (*(_QWORD*)(v93 + 200) != 0) {
        v94 = 128;
      }
      else {
        v94 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v93 + v94);
    }
  LABEL_144:
    v95 = v139;
    while (v95 != nullptr) {
      v99 = v95;
      v95 = (_QWORD*)*v95;
      if ((v99[2] & 1) != 0 && v99[4] != 0) {
        if (*(_QWORD*)(*v8 + 200) != 0) {
          v100 = 128;
        }
        else {
          v100 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v8 + v100);
      }
      if (*(_QWORD*)(*v8 + 200) != 0) {
        v98 = 128;
      }
      else {
        v98 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v98);
    }
    v96 = v137;
    v137 = 0;
    if (v96 != 0) {
      if (*(_QWORD*)(*v8 + 200) != 0) {
        v97 = 128;
      }
      else {
        v97 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v8 + v97);
    }
    v4 = v135 + 8;
    if ((_QWORD*)(v135 + 8) != v131) {
      continue;
    }
    break;
  }
  if (v6 != v7) {
    v101 = v6;
    while (1) {
      v103 = *((__int64**)v101 + 5);
      v102 = *((__int64**)v101 + 6);
      if (v102 != v103) {
        break;
      }
    LABEL_164:
      v101 += 64;
      if (v101 == v7) {
        if (v6 != nullptr) {
          do {
            v7 -= 64;
            Spot_132c920(v7);
          } while (v7 != v6);
          goto LABEL_217;
        }
        return;
      }
    }
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v107 = 0;
    v108 = 0;
    v109 = *((__int64**)v101 + 5);
    do {
      v110 = (_BYTE*)*v109;
      if (*(_QWORD*)(*v109 + 120) != 0) {
        v111 = (unsigned __int8)v110[176];
        v112 = v111 == 3;
        if (v110[112] != 0) {
          v112 = 0;
        }
        if (v111 == 3) {
          v105 += v110[112] & 1;
        }
        else if (v111 == 2) {
          ++v105;
        }
        v104 += v112;
        ++v106;
        v107 += (unsigned __int8)v110[113];
        v108 += (unsigned __int8)v110[115];
      }
      ++v109;
    } while (v109 != v102);
    if (v106 <= 0) {
      v114 = 0;
      v113 = 1;
    }
    else if (v106 == v104) {
      v113 = 3;
      v114 = 1;
    }
    else {
      v114 = 0;
      if (v106 == v104 + v105) {
        v113 = 2;
      }
      else {
        v113 = 1;
      }
    }
    v115 = v114 ^ 1;
    v116 = v106 == v107;
    v117 = !v116;
    v118 = v108 > 0;
    while (2) {
      v120 = *v103;
      if ((a3 & 1) != 0) {
        v121 = *(_BYTE*)(v120 + 176) == 1 ? v115 : 1;
        if ((v121 & 1) == 0) {
          *(_DWORD*)(v120 + 288) = 0;
        }
      }
      if (*(_QWORD*)(v120 + 120) != 0) {
        if ((a3 & 1) != 0) {
          goto LABEL_199;
        }
      LABEL_205:
        if (*(_BYTE*)(v120 + 176) == 1) {
          v122 = 0.0f;
        }
        else {
          v122 = 0x1.0000000000000p+0f;
        }
        *(float*)(v120 + 288) = v122;
        if ((a4 & 1) != 0) {
          goto LABEL_209;
        }
      }
      else {
        if (*(unsigned __int8*)(v120 + 176) != v113) {
          *(_BYTE*)(v120 + 176) = v113;
          if (v113 == 2) {
            *(_BYTE*)(v120 + 177) = 3;
          }
        }
        *(_BYTE*)(v120 + 113) = v116;
        *(_BYTE*)(v120 + 114) = v117;
        *(_BYTE*)(v120 + 115) = v118;
        if ((a3 & 1) == 0) {
          goto LABEL_205;
        }
      LABEL_199:
        if ((a4 & 1) != 0) {
        LABEL_209:
          v123 = *(unsigned __int8*)(v120 + 176);
          if (v123 == 2 || (v119 = 0x1.0000000000000p+0f, v123 == 3) &&
                               *(_BYTE*)(v120 + 112) == 1) {
            v119 = 0x1.99999a0000000p-3f;
          }
          *(float*)(v120 + 292) = v119;
        }
      }
      if (++v103 == v102) {
        goto LABEL_164;
      }
      continue;
    }
  }
  if (v6 != nullptr) {
  LABEL_217:
    v124 = 128;
    if (*(_QWORD*)(*v8 + 200) == 0) {
      v124 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v8 + v124);
  }
}

bool game_gmap_132a430(__int64 a1)
{
  int v1;
  __int64 v2;
  int v3;
  __int64 v4;
  struct {
    unsigned __int64 v6[4];
    unsigned __int64* v7;
  } v6_;

  v6_.v6[0] = (unsigned __int64)GameData_202bb48;
  v6_.v7 = v6_.v6;
  v1 = game_gmap_TroopMgr_CountTroop_134e600(a1, (__int64)v6_.v6);
  if (v6_.v7 == v6_.v6) {
    v2 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v2))((__int64)v6_.v7);
LABEL_6:
  v6_.v6[1] = (unsigned __int64)&GameData_1a86cf1;
  v6_.v6[0] = game_HashString_alt1((__int64)&GameData_1a86cf1);
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v6_.v6);
    if (v4 != 0) {
      v3 = *(_DWORD*)(v4 + 32);
    }
    else {
      v3 = 0;
    }
  }
  return v1 < v3;
}

bool game_gmap_132a900(float32x4_t* a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  float32x4_t** v5;
  int v6;
  float32x4_t** v7;
  bool v8;
  unsigned __int64 v9;
  float32x4_t* v10;
  __int64 v11;
  float32x4_t** v12;
  float v13;
  int v14;
  unsigned __int64 v15;
  float32x4_t* v16;
  __int64 v17;
  float32x4_t** v18;
  float32x4_t v19;
  int8x16_t v20;
  _BOOL8 result;

  if (LANES128(a1[11]).n128_u8[0] != 3 || LANES128(a1[7]).n128_u8[0] != 0) {
    goto LABEL_18;
  }
  v4 = LANES128(a1[7]).n128_u64[1];
  if (v4 != 0 && (*(_WORD*)(v4 + 258) & 0x40) != 0) {
    goto LABEL_18;
  }
  v5 = (float32x4_t**)a2;
  if (!game_gmap_Spot_CanPopTroop((__int64)a1, *(_DWORD*)(a2 + 540) > 0)) {
    goto LABEL_18;
  }
  v6 = *((_DWORD*)v5 + 135);
  v7 = v5;
  v8 = __OFSUB__(v6, 1);
  v9 = (unsigned int)(v6 - 1);
  if (((v9 & 0x80000000) != 0LL) == v8) {
    v10 = v5[3];
    v11 = (char*)v5[4] - (char*)v10;
    v12 = (float32x4_t**)&LANES128(*(v10)).n128_u64[(unsigned int)v9];
    if (v9 >= v11 >> 3) {
      v7 = v5;
    }
    else {
      v7 = v12;
    }
  }
  if (*v7 == a1) {
  LABEL_18:
    LANES128(a1[7]).n128_u8[5] = 0;
    return false;
  }
  else {
    v13 = BladeResonance_14b7750();
    v14 = *((_DWORD*)v5 + 135);
    v8 = __OFSUB__(v14, 1);
    v15 = (unsigned int)(v14 - 1);
    if (((v15 & 0x80000000) != 0LL) == v8) {
      v16 = v5[3];
      v17 = (char*)v5[4] - (char*)v16;
      v18 = (float32x4_t**)&LANES128(*(v16)).n128_u64[(unsigned int)v15];
      if (v15 < v17 >> 3) {
        v5 = v18;
      }
    }
    v19 = vsubq_f32((*v5)[2], a1[2]);
    v20 = vmulq_f32(v19, v19);
    LANES128(v20).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
            .n64_u64[0];
    result =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
            .n64_f32[0] <= (float)(v13 * v13);
    LANES128(a1[7]).n128_u8[5] = result;
  }
  return result;
}

unsigned __int64 game_gmap_133d680(__int64 a1, __int64 a2, __int64 a3)
{

#pragma clang fp contract(off)
  long double v4;
  long double v5;
  int v6;
  int v7;
  unsigned __int64 v8;
  __int128 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  long double v14;
  long double v15;
  int v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  unsigned __int64 v22;
  long double v23;
  long double v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  unsigned __int64 result;
  int v33;
  unsigned int v34;
  __int16 v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  long double v39;
  long double v40;
  unsigned __int64 v41[2];

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
  game_gmap_TroopUnitList_CreateReinforce(a1, a2, a3),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(a1 + 546) & 0x20) == 0) {
    *(_BYTE*)(a1 + 546) |= 0x20u;
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v7 = 2)
             : (v7 = 3),
         (v7 & v6) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_16;
      }
      v8 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v9 = *(_OWORD*)(v8 + 208);
      }
      if (*((float*)&v9 + 3) != 0x1.0000000000000p+0f ||
          (*((_QWORD*)&v4 + 1) =
               LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                            (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                               v8 + 160, *((float*)&v9 + 3)))
                   .n128_u64[1],
           *((float*)&v4 + 3) != 0x1.0000000000000p+0f)) {
      LABEL_16:
        UnitActor_81b040_alt1(a1 + 112, 0x0.0p+0f),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
        goto LABEL_21;
      }
    }
    v10 = *(unsigned __int8*)(a1 + 288);
    LODWORD(v41[0]) = 0;
    if (v10 == 1) {
      v11 = *(_QWORD*)(a1 + 264);
      *(_QWORD*)&v4 = 0;
    LABEL_19:
      *(_QWORD*)&v5 = 0;
      (*(void (**)(__int64, long double, long double))(v11 + 24))(a1 + 264, v4,
                                                                  v5),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_20:
      *(_QWORD*)(a1 + 272) = 0;
      *(_WORD*)(a1 + 288) = 256;
      *(_WORD*)(a1 + 132) |= 8u;
      goto LABEL_21;
    }
    if (*(float*)(a1 + 272) > 0x0.0p+0f) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v11 = *(_QWORD*)(a1 + 264);
      goto LABEL_19;
    }
    if (((*(__int64 (**)(__int64, unsigned __int64*, __int64))(
             *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, v41, a1 + 296) &
         1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v39) = v41[0];
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(a1 + 264) + 24LL))(a1 + 264, v40, v39),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_20;
    }
  }
LABEL_21:
  v12 = *(unsigned __int8*)(a1 + 288);
  LODWORD(v41[0]) = 0;
  if (v12 == 1) {
    v13 = *(_QWORD*)(a1 + 264);
    *(_QWORD*)&v4 = 0;
  LABEL_25:
    *(_QWORD*)&v5 = 0;
    (*(void (**)(__int64, long double, long double))(v13 + 24))(a1 + 264, v4,
                                                                v5),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_26:
    *(_QWORD*)(a1 + 272) = 0;
    *(_WORD*)(a1 + 288) = 256;
    *(_WORD*)(a1 + 132) |= 8u;
    goto LABEL_27;
  }
  if (*(float*)(a1 + 272) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v13 = *(_QWORD*)(a1 + 264);
    goto LABEL_25;
  }
  if (((*(__int64 (**)(__int64, unsigned __int64*, __int64))(
           *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, v41, a1 + 296) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LODWORD(v23) = v41[0];
    (*(void (**)(__int64, long double, long double))(*(_QWORD*)(a1 + 264) +
                                                     24LL))(a1 + 264, v24, v23),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_26;
  }
LABEL_27:
  v16 = *(unsigned __int8*)(a1 + 546);
  if ((v16 & 0x20) == 0) {
    goto LABEL_63;
  }
  v17 = v16 & 0xFFFFFFDF;
  v18 = game_ProcGameSkipView_instance_;
  *(_BYTE*)(a1 + 546) = v17;
  if (v18 == 0 || *(_BYTE*)(v18 + 152) != 3 ||
      (((v19 = *(_DWORD*)(v18 + 156)) & 8) != 0 ? (v20 = 2) : (v20 = 3),
       (v20 & v19) != 0)) {
    v21 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v22 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v22 + 172) == *(float*)(v22 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v22 + 160) + 16LL))(v22 +
                                                                       160),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v24 =
                COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v40 =
                COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v14 = *(long double*)(v22 + 208);
      }
      if (*((float*)&v14 + 3) != 0x1.0000000000000p+0f) {
        v21 = 0;
        if (v17 != 0) {
        LABEL_43:
          if (v21 == 0) {
            UnitActor_81b040_alt1(a1 + 112, 0x0.0p+0f),
                v14 = COERCE_AS(__typeof__(v14),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v24 = COERCE_AS(__typeof__(v24),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v4 = COERCE_AS(__typeof__(v4),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v40 = COERCE_AS(__typeof__(v40),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            goto LABEL_63;
          }
          goto LABEL_49;
        }
        goto LABEL_46;
      }
      *(__n128*)&v14 = ((__n128 (*)(unsigned __int64, float)) *
                        (_QWORD*)(*(_QWORD*)(v22 + 160) + 16LL))(
          v22 + 160, *((float*)&v14 + 3)),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v21 = *((float*)&v14 + 3) == 0x1.0000000000000p+0f;
    }
    if (v17 != 0) {
      goto LABEL_43;
    }
  LABEL_46:
    if (v21 == 0) {
      UnitActor_81aee0_alt1(a1 + 112, 0x0.0p+0f),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_63;
    }
    goto LABEL_51;
  }
  if (v17 != 0) {
  LABEL_49:
    v25 = *(unsigned __int8*)(a1 + 288);
    LODWORD(v41[0]) = 0;
    if (v25 == 1) {
      v26 = *(_QWORD*)(a1 + 264);
      v27 = a1 + 264;
      *(_QWORD*)&v14 = 0;
    LABEL_55:
      *(_QWORD*)&v15 = 0;
    LABEL_61:
      (*(void (**)(__int64, long double, long double))(v26 + 24))(v27, v14,
                                                                  v15),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_62;
    }
    if (*(float*)(a1 + 272) > 0x0.0p+0f) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v26 = *(_QWORD*)(a1 + 264);
      v27 = a1 + 264;
      goto LABEL_55;
    }
  LABEL_59:
    if (((*(__int64 (**)(__int64, unsigned __int64*, __int64))(
             *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, v41, a1 + 296) &
         1) == 0) {
      goto LABEL_63;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v26 = *(_QWORD*)(a1 + 264);
    LODWORD(v15) = v41[0];
    v27 = a1 + 264;
    goto LABEL_61;
  }
LABEL_51:
  LODWORD(v41[0]) = 1065353216;
  if (*(_BYTE*)(a1 + 288) == 1) {
    v28 = *(_QWORD*)(a1 + 264);
    LODWORD(v14) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  }
  else {
    if (*(float*)(a1 + 272) <= 0x0.0p+0f) {
      goto LABEL_59;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v28 = *(_QWORD*)(a1 + 264);
  }
  LODWORD(v15) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  (*(void (**)(__int64, long double, long double))(v28 + 24))(a1 + 264, v14,
                                                              v15),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_62:
  *(_QWORD*)(a1 + 272) = 0;
  *(_WORD*)(a1 + 288) = 256;
  *(_WORD*)(a1 + 132) |= 8u;
LABEL_63:
  if (game_gmap_GmapClock_instance_ != 0) {
    v29 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v29 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v30 = *(_DWORD*)(v29 + 8);
  v31 = *(_QWORD*)v29;
  v41[1] = (unsigned __int64)&GameData_1a92617;
  *(_QWORD*)(a1 + 528) = v31;
  *(_DWORD*)(a1 + 536) = v30;
  result = game_HashString_alt1((__int64)&GameData_1a92617),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v41[0] = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v41),
    v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (result != 0) {
      v33 = *(_DWORD*)(result + 32);
      if (v33 != 0) {
        v34 = 6 * v33;
        if (v33 < 1) {
          v35 = *(_WORD*)(a1 + 534);
          v36 = -6 * v33 / 0x18u;
          *(_WORD*)(a1 + 532) -= v36;
          LOWORD(v34) = v35 + v34 + 24 * v36;
        }
        else {
          *(_WORD*)(a1 + 532) += v34 / 0x18;
          v34 = *(unsigned __int16*)(a1 + 534) + v34 % 0x18;
        }
        *(_WORD*)(a1 + 534) = v34;
        *(_DWORD*)(a1 + 536) = 0;
        result =
            (unsigned __int64)Dir_70d7a0_alt1((unsigned __int16*)(a1 + 528)),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v24 = COERCE_AS(__typeof__(v24), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v4 = COERCE_AS(__typeof__(v4), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v40 = COERCE_AS(__typeof__(v40), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  if ((*(_WORD*)(a1 + 544) & 0x100) == 0) {
    *(_WORD*)(a1 + 544) |= 0x100u;
  }
  v37 = *(_QWORD*)(a1 + 96);
  if (v37 != 0) {
    v38 = *(unsigned __int8*)(v37 + 128);
    if (v38 <= 2) {
      return game_gmap_133fe00_alt2(a1, (unsigned __int8)v38 + 1,
                                    0x1.0000000000000p+0f);
    }
  }
  return result;
}

__int64 game_gmap_133dba0(__int64 a1, char a2, long double a3, long double a4)
{

#pragma clang fp contract(off)
  int v4;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 result;
  long double v19;
  long double v20;
  int v21;
  int v22;
  int v23;

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = *(unsigned __int8*)(a1 + 546);
  v6 = (unsigned __int8)(1 << a2);
  if ((v4 & v6) == 0) {
    v7 = v4 | v6;
    *(_BYTE*)(a1 + 546) = v4 | v6;
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v9 = (v8 & 8) != 0 ? 2 : 3;
      if ((v9 & v8) == 0) {
        if (v7 != 0) {
        LABEL_21:
          v12 = *(unsigned __int8*)(a1 + 288);
          v22 = 0;
          if (v12 == 1) {
            v13 = *(_QWORD*)(a1 + 264);
            v14 = a1 + 264;
            *(_QWORD*)&a3 = 0;
          LABEL_27:
            *(_QWORD*)&a4 = 0;
          LABEL_36:
            (*(void (**)(__int64, long double, long double))(v13 + 24))(v14, a3,
                                                                        a4),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            goto LABEL_37;
          }
          if (*(float*)(a1 + 272) > 0x0.0p+0f) {
            (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v13 = *(_QWORD*)(a1 + 264);
            v14 = a1 + 264;
            goto LABEL_27;
          }
          if (((*(__int64 (**)(__int64, int*, __int64))(
                   *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, &v22, a1 + 296) &
               1) == 0) {
            goto LABEL_38;
          }
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          LODWORD(a4) = v22;
        LABEL_35:
          v13 = *(_QWORD*)(a1 + 264);
          v14 = a1 + 264;
          goto LABEL_36;
        }
      LABEL_23:
        v21 = 1065353216;
        if (*(_BYTE*)(a1 + 288) == 1) {
          v15 = *(_QWORD*)(a1 + 264);
          LODWORD(a3) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        }
        else {
          if (*(float*)(a1 + 272) <= 0x0.0p+0f) {
            if (((*(__int64 (**)(__int64, int*, __int64))(
                     *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, &v21, a1 + 296) &
                 1) == 0) {
              goto LABEL_38;
            }
            (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            LODWORD(a4) = v21;
            goto LABEL_35;
          }
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v15 = *(_QWORD*)(a1 + 264);
        }
        LODWORD(a4) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
        (*(void (**)(__int64, long double, long double))(v15 + 24))(a1 + 264,
                                                                    a3, a4),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LABEL_37:
        *(_QWORD*)(a1 + 272) = 0;
        *(_WORD*)(a1 + 288) = 256;
        *(_WORD*)(a1 + 132) |= 8u;
        goto LABEL_38;
      }
    }
    v10 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v11 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 +
                                                                       160),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        a3 = *(long double*)(v11 + 208);
      }
      if (*((float*)&a3 + 3) != 0x1.0000000000000p+0f) {
        v10 = 0;
        if (v7 != 0) {
        LABEL_15:
          if (v10 == 0) {
            UnitActor_81b040_alt1(a1 + 112, 0x0.0p+0f),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            goto LABEL_38;
          }
          goto LABEL_21;
        }
        goto LABEL_18;
      }
      *(__n128*)&a3 = ((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(
          v11 + 160, *((float*)&a3 + 3)),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v10 = *((float*)&a3 + 3) == 0x1.0000000000000p+0f;
    }
    if (v7 != 0) {
      goto LABEL_15;
    }
  LABEL_18:
    if (v10 == 0) {
      UnitActor_81aee0_alt1(a1 + 112, 0x0.0p+0f),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_38;
    }
    goto LABEL_23;
  }
LABEL_38:
  v16 = *(unsigned __int8*)(a1 + 288);
  v23 = 0;
  if (v16 == 1) {
    v17 = *(_QWORD*)(a1 + 264);
    *(_QWORD*)&a3 = 0;
  LABEL_42:
    *(_QWORD*)&a4 = 0;
    result = (*(__int64 (**)(__int64, long double, long double))(v17 + 24))(
        a1 + 264, a3, a4),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_43:
    *(_QWORD*)(a1 + 272) = 0;
    *(_WORD*)(a1 + 288) = 256;
    *(_WORD*)(a1 + 132) |= 8u;
    return result;
  }
  if (*(float*)(a1 + 272) > 0x0.0p+0f) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v17 = *(_QWORD*)(a1 + 264);
    goto LABEL_42;
  }
  result = (*(__int64 (**)(__int64, int*, __int64))(
      *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, &v23, a1 + 296),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((result & 1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LODWORD(v19) = v23;
    result = (*(__int64 (**)(__int64, long double, long double))(
        *(_QWORD*)(a1 + 264) + 24LL))(a1 + 264, v20, v19),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_43;
  }
  return result;
}

__int64 game_gmap_133de90(__int64 result, char a2, __n128 a3, long double a4)
{
  int v4;
  int v5;
  __int64 v6;
  int v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  int v18;

  v4 = *(unsigned __int8*)(result + 546);
  v5 = (unsigned __int8)(1 << a2);
  if ((v4 & v5) != 0) {
    v6 = result;
    v7 = v4 & (v5 ^ 0xFF);
    v8 = game_ProcGameSkipView_instance_;
    *(_BYTE*)(result + 546) = v7;
    if (v8 != 0 && *(_BYTE*)(v8 + 152) == 3) {
      v9 = *(_DWORD*)(v8 + 156);
      v10 = (v9 & 8) != 0 ? 2 : 3;
      if ((v10 & v9) == 0) {
        if (v7 != 0) {
        LABEL_21:
          v13 = *(unsigned __int8*)(v6 + 288);
          v18 = 0;
          if (v13 == 1) {
            v14 = *(_QWORD*)(v6 + 264);
            v15 = v6 + 264;
            LANES128(a3).n128_u64[0] = 0;
          LABEL_27:
            *(_QWORD*)&a4 = 0;
          LABEL_36:
            result = (*(__int64 (**)(__int64, long double, long double))(
                v14 + 24))(v15, *(long double*)&a3, a4);
            goto LABEL_37;
          }
          if (*(float*)(v6 + 272) > 0.0) {
            (*(void (**)(__int64))(*(_QWORD*)(v6 + 264) + 16LL))(v6 + 264);
            v14 = *(_QWORD*)(v6 + 264);
            v15 = v6 + 264;
            goto LABEL_27;
          }
          result = (*(__int64 (**)(__int64, int*, __int64))(
              *(_QWORD*)(v6 + 264) + 8LL))(v6 + 264, &v18, v6 + 296);
          if ((result & 1) == 0) {
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)(v6 + 264) + 16LL))(v6 + 264);
          LODWORD(a4) = v18;
        LABEL_35:
          v14 = *(_QWORD*)(v6 + 264);
          v15 = v6 + 264;
          goto LABEL_36;
        }
      LABEL_23:
        v17 = 1065353216;
        if (*(_BYTE*)(v6 + 288) == 1) {
          v16 = *(_QWORD*)(v6 + 264);
          LANES128(a3).n128_u32[0] = 0x1.0000000000000p+0;
        }
        else {
          if (*(float*)(v6 + 272) <= 0.0) {
            result = (*(__int64 (**)(__int64, int*, __int64))(
                *(_QWORD*)(v6 + 264) + 8LL))(v6 + 264, &v17, v6 + 296);
            if ((result & 1) == 0) {
              return result;
            }
            (*(void (**)(__int64))(*(_QWORD*)(v6 + 264) + 16LL))(v6 + 264);
            LODWORD(a4) = v17;
            goto LABEL_35;
          }
          (*(void (**)(__int64))(*(_QWORD*)(v6 + 264) + 16LL))(v6 + 264);
          v16 = *(_QWORD*)(v6 + 264);
        }
        LODWORD(a4) = 0x1.0000000000000p+0;
        result = (*(__int64 (**)(__int64, long double, long double))(v16 + 24))(
            v6 + 264, *(long double*)&a3, a4);
      LABEL_37:
        *(_QWORD*)(v6 + 272) = 0;
        *(_WORD*)(v6 + 288) = 256;
        *(_WORD*)(v6 + 132) |= 8u;
        return result;
      }
    }
    v11 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v12 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v12 + 172) == *(float*)(v12 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v12 + 160) + 16LL))(v12 +
                                                                       160);
      }
      else {
        a3 = *(__n128*)(v12 + 208);
      }
      if (LANES128(a3).n128_f32[3] != 0x1.0000000000000p+0) {
        v11 = 0;
        if (v7 != 0) {
        LABEL_15:
          if (v11 == 0) {
            return UnitActor_81b040(v6 + 112, 0.0);
          }
          goto LABEL_21;
        }
        goto LABEL_18;
      }
      a3 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160,
                                                     LANES128(a3).n128_f32[3]);
      v11 = LANES128(a3).n128_f32[3] == 0x1.0000000000000p+0;
    }
    if (v7 != 0) {
      goto LABEL_15;
    }
  LABEL_18:
    if (v11 == 0) {
      return UnitActor_81aee0(v6 + 112, 0.0);
    }
    goto LABEL_23;
  }
  return result;
}

void game_gmap_133f280(__int64 a1)
{

#pragma clang fp contract(off)
  _DWORD* v2;
  __int128 v3;
  _DWORD* v4;
  __int64** v5;
  int v6;
  int v7;
  __int64 v9;
  __int64 v10;
  __int64* v12;
  __int64 v13;
  unsigned int v14;
  float32x4_t v15;
  unsigned int i;
  float32x4_t* v17;
  float32x4_t v18;

  *(_DWORD*)(a1 + 540) = 0;
  v2 = *(_DWORD**)a1;
  UnitActor_81cda0(a1 + 112, (__int128*)(*(_QWORD*)a1 + 32LL), 0x0.0p+0f);
  *(_DWORD*)(a1 + 48) = v2[8];
  *(_DWORD*)(a1 + 52) = v2[9];
  v3 = *(_OWORD*)(a1 + 48);
  *((_QWORD*)&v3 + 1) = (unsigned int)v2[10];
  *(_OWORD*)(a1 + 48) = v3;
  UnitActor_81a540_alt1(a1 + 112, 119788728, (__int64)GameData_212ceb8);
  v4 = *(_DWORD**)(a1 + 656);
  v5 = (__int64**)(a1 + 656);
  if (*(_QWORD*)v4 == 0) {
  LABEL_7:
    GameRoutine_14a1520((_QWORD*)(a1 + 656), 1);
    *(_BYTE*)(a1 + 652) = 0;
  LABEL_8:
    v9 = *(_QWORD*)(a1 + 376);
    if (v9 == 0) {
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v6 = *(_DWORD*)(*(_QWORD*)v4 + 16LL);
  v7 = v4[2];
  if (v6 != v7 || *(_BYTE*)(a1 + 652) != 5) {
    if (v6 == v7) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  UnitActor_81d430((void*)(&v18), a1 + 112);
  v12 = *v5;
  v13 = **v5;
  if (v13 != 0 && *(_DWORD*)(v13 + 16) == *((_DWORD*)v12 + 2)) {
    v14 = *(_DWORD*)(v13 + 36);
    if (v14 != 0) {
      v15 = v18;
      for (i = 0; i < v14; ++i) {
        if ((int)v14 > (int)i) {
          v17 = *(float32x4_t**)(v13 + 40 + 8LL * (int)i);
          if (v17 != nullptr) {
            v17[1] = v15;
            LANES128(v17[8]).n128_u8[0] = 1;
            v14 = *(_DWORD*)(v13 + 36);
          }
        }
      }
    }
  }
  GameRoutine_14a3920((__int64)v12);
  v9 = *(_QWORD*)(a1 + 376);
  if (v9 != 0) {
  LABEL_9:
    *(_DWORD*)(*(_QWORD*)(v9 + 304) + 12LL) = 1065353216;
  }
LABEL_10:
  if (*(_BYTE*)(*(_QWORD*)a1 + 113LL) == 1) {
    if (*(_BYTE*)(a1 + 512) == 0) {
      return;
    }
    *(_BYTE*)(a1 + 512) = 0;
    goto LABEL_32;
  }
  v10 = *(_QWORD*)(a1 + 96);
  if (v10 == 0) {
    if (*(_BYTE*)(a1 + 512) == 2) {
      return;
    }
    goto LABEL_31;
  }
  if (*(_BYTE*)(v10 + 130) == 0 && *(_BYTE*)(a1 + 512) != 2) {
  LABEL_31:
    *(_BYTE*)(a1 + 512) = 2;
  LABEL_32:
    if (GameData_21f1618 != 0) {
      GameRoutine_995200(a1 + 112);
    }
  }
}

__n128 game_gmap_133fe00(__int64 a1, unsigned __int8 a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  _QWORD* v6;
  float32x4_t v7;
  __int64 v8;
  __int64* v9;
  unsigned int v10;
  __n128 result;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  struct {
    float32x4_t v16;
    __int64 v17;
    int v18;
  } v16_;
  struct {
    float32x4_t v19[2];
    __int64 v20;
    __int64 v21;
  } v19_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_BYTE*)(a1 + 652) = a2;
  v5 = *((_QWORD*)&GameData_1fb27c0 + a2);
  UnitActor_81d430((void*)(v19_.v19), a1 + 112),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16_.v16 = (__typeof__(v16_.v16)){0};
  v6 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  LANES128(v7).n128_u64[0] =
      LODWORD(a3) | ((unsigned __int64)LODWORD(a3) << 32);
  v16_.v18 = 5;
  LANES128(v7).n128_u64[1] = LODWORD(a3);
  v19_.v19[1] = v7;
  v16_.v17 = v5;
  v8 = *((_QWORD*)GameData_212c540 + 1);
  v19_.v20 = *(_QWORD*)GameData_212c540;
  v19_.v21 = v8;
  v9 = Manager_bc6460(v6, &v16_.v16, 1),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameRoutine_14a10d0(&v16_.v16, (__int64)v9, v10,
                               (__int64)&GameData_1a9f09e),
  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = LANES128(v16_.v16).n128_u64[1];
  v12 = LANES128(v16_.v16).n128_u64[0];
  if (LANES128(v16_.v16).n128_u64[1] != 0) {
    atomic_fetch_add_explicit(
        (atomic_ullong* volatile)(LANES128(v16_.v16).n128_u64[1] + 8), 1u,
        memory_order_relaxed);
  }
  v14 = *(_QWORD*)(a1 + 664);
  *(_QWORD*)(a1 + 656) = v12;
  *(_QWORD*)(a1 + 664) = v13;
  if (v14 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
          v14, *(long double*)&result),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak(),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v13 = *(_QWORD*)(a1 + 664);
  }
  if (v13 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v13 + 16LL))(
        v13, *(long double*)&result),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak(),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v15 = LANES128(v16_.v16).n128_u64[1];
    if (LANES128(v16_.v16).n128_u64[1] == 0) {
      return result;
    }
  }
  else {
    v15 = LANES128(v16_.v16).n128_u64[1];
    if (LANES128(v16_.v16).n128_u64[1] == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v15 + 16LL))(
        v15, *(long double*)&result),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

float32x4_t game_gmap_133ffb0(float32x4_t* a1, _QWORD* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  _UNKNOWN** v8;
  char* v9;
  __int64 v10;
  float v11;
  __int64 v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t result;
  __int128 v18;
  float32x4_t v19;
  float32x4_t v20;
  char v21;
  char v22;

  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v5 = *(_QWORD*)(v4 + 24);
  v6 = *(_QWORD*)(v4 + 32);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    v20 = COERCE_FLOAT32X4_T(Camera_b3bb60(v5));
    v19 = a1[3];
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
    v7 = LANES128(a1[6]).n128_u64[0];
    if (v7 == 0) {
      goto LABEL_9;
    }
  }
  else {
    v20 = COERCE_FLOAT32X4_T(Camera_b3bb60(v5));
    v19 = a1[3];
    v7 = LANES128(a1[6]).n128_u64[0];
    if (v7 == 0) {
    LABEL_9:
      v8 = &GameData_1adf7b0;
      v9 = &v21;
      goto LABEL_10;
    }
  }
  if ((unsigned int)*(unsigned __int8*)(v7 + 32) - 3 >= 2) {
    goto LABEL_9;
  }
  v8 = (_UNKNOWN**)&GameData_1af689f;
  v9 = &v22;
LABEL_10:
  *((_QWORD*)v9 + 1) = v8;
  v10 = game_HashString(v8);
  v11 = 0.0f;
  *(_QWORD*)v9 = v10;
  if (game_GameModeData_instance_ != 0) {
    v12 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v9);
    v11 = 0.0f;
    if (v12 != 0) {
      v11 = (float)*(int*)(v12 + 32);
    }
  }
  v13 = vsubq_f32(v20, v19);
  v14 = vmulq_f32(v13, v13);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v14, v14, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v14).n128_u64[0])))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  v15 = vrsqrteq_f32(v14);
  v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v14, v15)));
  result = vmulq_n_f32(
      vbicq_s8(vmulq_f32(
                   v13, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v14, v16)))),
               vceqzq_f32(v14)),
      v11);
  *a2 = LANES128(result).n128_u64[0];
  v18 = *(_OWORD*)a2;
  *((_QWORD*)&v18 + 1) = LANES128(result).n128_u32[2];
  *(_OWORD*)a2 = v18;
  return result;
}

__int64 game_gmap_13402f0(__int64 a1, char a2, char a3, __n128 a4,
                          long double a5)
{
  int v5;
  int v7;
  int v8;
  int v9;
  int v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;

  v5 = *(unsigned __int8*)(a1 + 546);
  v7 = (unsigned __int8)(1 << a2);
  v8 = v5 & v7;
  if ((a3 & 1) != 0) {
    if (v8 != 0) {
      v9 = v5 & (v7 ^ 0xFF);
      goto LABEL_7;
    }
    return 0;
  }
  if (v8 != 0) {
    return 0;
  }
  v9 = v5 | v7;
LABEL_7:
  *(_BYTE*)(a1 + 546) = v9;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v11 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v12 = (v11 & 8) != 0 ? 2 : 3;
    if ((v12 & v11) == 0) {
      if (v9 != 0) {
        goto LABEL_26;
      }
    LABEL_28:
      v19 = 1065353216;
      if (*(_BYTE*)(a1 + 288) == 1) {
        v18 = *(_QWORD*)(a1 + 264);
        LANES128(a4).n128_u32[0] = 0x1.0000000000000p+0;
      }
      else {
        if (*(float*)(a1 + 272) <= 0.0) {
          if (((*(__int64 (**)(__int64, int*, __int64))(
                   *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, &v19, a1 + 296) &
               1) == 0) {
            return 1;
          }
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
          LODWORD(a5) = v19;
          goto LABEL_40;
        }
        (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
        v18 = *(_QWORD*)(a1 + 264);
      }
      LODWORD(a5) = 0x1.0000000000000p+0;
      (*(void (**)(__int64, long double, long double))(v18 + 24))(
          a1 + 264, *(long double*)&a4, a5);
    LABEL_42:
      *(_QWORD*)(a1 + 272) = 0;
      *(_WORD*)(a1 + 288) = 256;
      *(_WORD*)(a1 + 132) |= 8u;
      return 1;
    }
  }
  v13 = game_ProcFadeView_instance_;
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_19;
  }
  v14 =
      game_ProcFadeView_instance_ +
      ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
       << 6);
  if (*(float*)(v14 + 172) == *(float*)(v14 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v14 + 160) + 16LL))(v14 + 160);
  }
  else {
    a4 = *(__n128*)(v14 + 208);
  }
  if (LANES128(a4).n128_f32[3] == 0x1.0000000000000p+0) {
    a4 = ((__n128 (*)(unsigned __int64, float)) *
          (_QWORD*)(*(_QWORD*)(v14 + 160) + 16LL))(v14 + 160,
                                                   LANES128(a4).n128_f32[3]);
    v13 = LANES128(a4).n128_f32[3] == 0x1.0000000000000p+0;
  LABEL_19:
    if (v9 != 0) {
      goto LABEL_20;
    }
    goto LABEL_23;
  }
  v13 = 0;
  if (v9 == 0) {
  LABEL_23:
    if (v13 == 0) {
      UnitActor_81aee0(a1 + 112, 0.0);
      return 1;
    }
    goto LABEL_28;
  }
LABEL_20:
  if (v13 != 0) {
  LABEL_26:
    v15 = *(unsigned __int8*)(a1 + 288);
    v20 = 0;
    if (v15 == 1) {
      v16 = *(_QWORD*)(a1 + 264);
      v17 = a1 + 264;
      LANES128(a4).n128_u64[0] = 0;
    LABEL_32:
      *(_QWORD*)&a5 = 0;
    LABEL_41:
      (*(void (**)(__int64, long double, long double))(v16 + 24))(
          v17, *(long double*)&a4, a5);
      goto LABEL_42;
    }
    if (*(float*)(a1 + 272) > 0.0) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
      v16 = *(_QWORD*)(a1 + 264);
      v17 = a1 + 264;
      goto LABEL_32;
    }
    if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(a1 + 264) + 8LL))(
             a1 + 264, &v20, a1 + 296) &
         1) == 0) {
      return 1;
    }
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
    LODWORD(a5) = v20;
  LABEL_40:
    v16 = *(_QWORD*)(a1 + 264);
    v17 = a1 + 264;
    goto LABEL_41;
  }
  UnitActor_81b040(a1 + 112, 0.0);
  return 1;
}

__int64 game_gmap_1340560(__int64 result, char a2, __n128 a3, long double a4)
{
  int v4;
  int v5;
  int v6;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;

  v4 = *(unsigned __int8*)(result + 546);
  v5 = (unsigned __int8)(1 << a2);
  if ((v4 & v5) == 0) {
    v6 = v4 | v5;
    v7 = result;
    *(_BYTE*)(result + 546) = v4 | v5;
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v9 = (v8 & 8) != 0 ? 2 : 3;
      if ((v9 & v8) == 0) {
        if (v6 != 0) {
        LABEL_21:
          v12 = *(unsigned __int8*)(v7 + 288);
          v17 = 0;
          if (v12 == 1) {
            v13 = *(_QWORD*)(v7 + 264);
            v14 = v7 + 264;
            LANES128(a3).n128_u64[0] = 0;
          LABEL_27:
            *(_QWORD*)&a4 = 0;
          LABEL_36:
            result = (*(__int64 (**)(__int64, long double, long double))(
                v13 + 24))(v14, *(long double*)&a3, a4);
            goto LABEL_37;
          }
          if (*(float*)(v7 + 272) > 0.0) {
            (*(void (**)(__int64))(*(_QWORD*)(v7 + 264) + 16LL))(v7 + 264);
            v13 = *(_QWORD*)(v7 + 264);
            v14 = v7 + 264;
            goto LABEL_27;
          }
          result = (*(__int64 (**)(__int64, int*, __int64))(
              *(_QWORD*)(v7 + 264) + 8LL))(v7 + 264, &v17, v7 + 296);
          if ((result & 1) == 0) {
            return result;
          }
          (*(void (**)(__int64))(*(_QWORD*)(v7 + 264) + 16LL))(v7 + 264);
          LODWORD(a4) = v17;
        LABEL_35:
          v13 = *(_QWORD*)(v7 + 264);
          v14 = v7 + 264;
          goto LABEL_36;
        }
      LABEL_23:
        v16 = 1065353216;
        if (*(_BYTE*)(v7 + 288) == 1) {
          v15 = *(_QWORD*)(v7 + 264);
          LANES128(a3).n128_u32[0] = 0x1.0000000000000p+0;
        }
        else {
          if (*(float*)(v7 + 272) <= 0.0) {
            result = (*(__int64 (**)(__int64, int*, __int64))(
                *(_QWORD*)(v7 + 264) + 8LL))(v7 + 264, &v16, v7 + 296);
            if ((result & 1) == 0) {
              return result;
            }
            (*(void (**)(__int64))(*(_QWORD*)(v7 + 264) + 16LL))(v7 + 264);
            LODWORD(a4) = v16;
            goto LABEL_35;
          }
          (*(void (**)(__int64))(*(_QWORD*)(v7 + 264) + 16LL))(v7 + 264);
          v15 = *(_QWORD*)(v7 + 264);
        }
        LODWORD(a4) = 0x1.0000000000000p+0;
        result = (*(__int64 (**)(__int64, long double, long double))(v15 + 24))(
            v7 + 264, *(long double*)&a3, a4);
      LABEL_37:
        *(_QWORD*)(v7 + 272) = 0;
        *(_WORD*)(v7 + 288) = 256;
        *(_WORD*)(v7 + 132) |= 8u;
        return result;
      }
    }
    v10 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v11 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v11 + 160) + 16LL))(v11 +
                                                                       160);
      }
      else {
        a3 = *(__n128*)(v11 + 208);
      }
      if (LANES128(a3).n128_f32[3] != 0x1.0000000000000p+0) {
        v10 = 0;
        if (v6 != 0) {
        LABEL_15:
          if (v10 == 0) {
            return UnitActor_81b040(v7 + 112, 0.0);
          }
          goto LABEL_21;
        }
        goto LABEL_18;
      }
      a3 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160,
                                                     LANES128(a3).n128_f32[3]);
      v10 = LANES128(a3).n128_f32[3] == 0x1.0000000000000p+0;
    }
    if (v6 != 0) {
      goto LABEL_15;
    }
  LABEL_18:
    if (v10 == 0) {
      return UnitActor_81aee0(v7 + 112, 0.0);
    }
    goto LABEL_23;
  }
  return result;
}

__attribute__((swiftcall)) void

game_gmap_13408e0(PSEUDO_X8 x8_, __int64 a1, double unused_float0, float a3)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  float v9;
  int8x16_t v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int8x16_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float32x4_t result;
  __int64 v25;
  unsigned __int64 v26;
  float32x4_t v27;
  float v28;
  float32x4_t v29;

  v4 = *(_QWORD*)(a1 + 376);
  if (v4 == 0) {
    goto LABEL_10;
  }
  v6 = *(_QWORD*)(v4 + 392);
  v5 = *(_QWORD*)(v4 + 400);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
  }
  if (v6 != 0) {
    a3 = *(float*)(*(_QWORD*)(v6 + 11792) + 32LL) *
         (float)(*(float*)(v6 + 32) *
                 (float)(*(float*)(v6 + 40) +
                         (float)((float)(0x1.0000000000000p+0f -
                                         *(float*)(v6 + 40)) *
                                 *(float*)(v4 + 336))));
    if (v5 == 0) {
      goto LABEL_9;
    }
  }
  else if (v5 == 0) {
    goto LABEL_9;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v25 = a1;
    v28 = a3;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak();
    a3 = v28;
    a1 = v25;
    if (v6 != 0) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
LABEL_9:
  if (v6 == 0) {
  LABEL_10:
    a3 = 0x1.8000000000000p+0f;
  }
LABEL_11:
  LODWORD(v7) = 0;
  v8 = a1;
  *((float*)&v7 + 1) = a3;
  v26 = v7;
  v9 = (*(float (**)(__int64))(*(_QWORD*)(a1 + 224) + 16LL))(a1 + 224);
  TroopActor_Unknown4((void*)(&v29), v8 + 112, v9);
  LANES128(v10).n128_u64[0] = v26;
  LANES128(v11).n128_u64[0] = v26;
  v12 = vmulq_f32(v29, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
  LANES128(v11).n128_u64[1] = LANES128(v14).n128_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v16 = vmulq_f32(v11, v15);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v11).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v12).n128_u64[0]), 1);
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v10, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v10).n128_u64[0];
  LANES128(v10).n128_u64[1] = v26;
  v17 =
      vmlaq_f32(vmlaq_f32(vmulq_f32(v12, v13),
                          COERCE_AS(float32x4_t, GameData_1a83800), v16),
                COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v10, v11));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
  v18 = vmlsq_f32(v17, v10, v14);
  LANES128(v14).n128_u64[0] = LANES128(v29).n128_u64[0];
  v19 = vmulq_f32(v12, v18);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v12).n128_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v20).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 1);
  v21 = vmlaq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v14, v10));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v29, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] = LANES128(v10).n128_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v29).n128_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v23 = vmlsq_f32(vmlaq_f32(v21, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v10, v20)),
                  v22, v12);
  LANES128(v23).n128_u32[3] = 0;
  v27 = v23;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(v8 + 160) + 16LL))((void*)(&v29), v8 + 160);
  result = vaddq_f32(v29, v27);
  *a2 = result;
  {
    result;
    return;
  }
}

__int64 game_gmap_1340cb0(__int64 result, long double a2, long double a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  int v18;
  int v19;
  unsigned __int64 v20;
  __int128 v21;
  int v22;
  __int64 v23;
  long double v24;
  long double v25;
  int v26;

  v3 = *(_QWORD*)(result + 24);
  v4 = result;
  if (*(_QWORD*)(result + 32) == v3) {
    goto LABEL_76;
  }
  v5 = *(_QWORD*)(result + 96);
  v6 = *(_QWORD*)(result + 552);
  if ((v5 | v6) != 0 &&
      (v5 != 0 || v6 == 0 || *(_QWORD*)(result + 104) != 0 ||
       *(__int16*)(result + 642) * *(__int16*)(result + 640) *
               *(__int16*)(result + 644) !=
           0 ||
       *(_QWORD*)(v6 + 352) != 0) &&
      (*(_WORD*)(result + 544) & 3) == 2) {
    goto LABEL_76;
  }
  v7 = *(_QWORD*)result;
  if (*(_BYTE*)(*(_QWORD*)result + 113LL) != 1 ||
      (*(_BYTE*)(*(_QWORD*)v3 + 113LL) & 1) == 0) {
    if (v5 != 0) {
      if (*(_BYTE*)(v5 + 130) != 0 || *(_BYTE*)(result + 512) == 2) {
        goto LABEL_17;
      }
    }
    else if (*(_BYTE*)(result + 512) == 2) {
      goto LABEL_17;
    }
    *(_BYTE*)(result + 512) = 2;
    if (GameData_21f1618 != 0) {
      result = GameRoutine_995200_alt1(result + 112);
      v7 = *(_QWORD*)v4;
    }
  }
LABEL_17:
  if (*(_BYTE*)(v7 + 113) == 1 &&
      *(_BYTE*)(**(_QWORD**)(v4 + 24) + 113LL) == 1 &&
      *(_BYTE*)(v4 + 512) != 0) {
    *(_BYTE*)(v4 + 512) = 0;
    if (GameData_21f1618 != 0) {
      result = GameRoutine_995200_alt1(v4 + 112);
      v7 = *(_QWORD*)v4;
    }
  }
  if (*(_BYTE*)(v7 + 176) == 1 &&
      *(_BYTE*)(**(_QWORD**)(v4 + 24) + 176LL) != 1) {
    v10 = *(unsigned __int8*)(v4 + 546);
    if ((v10 & 2) != 0) {
      v11 = v10 & 0xFFFFFFFD;
      v12 = game_ProcGameSkipView_instance_;
      *(_BYTE*)(v4 + 546) = v11;
      if (v12 != 0 && *(_BYTE*)(v12 + 152) == 3 &&
          (((v13 = *(_DWORD*)(v12 + 156)) & 8) != 0 ? (v14 = 2) : (v14 = 3),
           (v14 & v13) == 0)) {
        v17 = v4 + 112;
        if (v11 != 0) {
        LABEL_51:
          *(_QWORD*)&a2 = 0;
        LABEL_53:
          result = UnitActor_81ae00(v17, a2);
          goto LABEL_54;
        }
      }
      else {
        v15 = game_ProcFadeView_instance_;
        if (game_ProcFadeView_instance_ != 0) {
          v16 = game_ProcFadeView_instance_ +
                ((unsigned __int64)*(
                     unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                 << 6);
          if (*(float*)(v16 + 172) == *(float*)(v16 + 168)) {
            (*(void (**)(unsigned __int64))(*(_QWORD*)(v16 + 160) + 16LL))(v16 +
                                                                           160);
          }
          else {
            a2 = *(long double*)(v16 + 208);
          }
          if (*((float*)&a2 + 3) == 1.0) {
            *(__n128*)&a2 = ((__n128 (*)(unsigned __int64, float)) *
                             (_QWORD*)(*(_QWORD*)(v16 + 160) + 16LL))(
                v16 + 160, *((float*)&a2 + 3));
            v15 = *((float*)&a2 + 3) == 1.0;
          }
          else {
            v15 = 0;
          }
        }
        v17 = v4 + 112;
        if (v11 != 0) {
          if (v15 == 0) {
            result = UnitActor_81b040(v17, 0.0);
            goto LABEL_54;
          }
          goto LABEL_51;
        }
        if (v15 == 0) {
          result = UnitActor_81aee0(v17, 0.0);
          goto LABEL_54;
        }
      }
      LODWORD(a2) = 1.0;
      goto LABEL_53;
    }
  }
LABEL_54:
  if (*(_BYTE*)(*(_QWORD*)v4 + 176LL) != 1 &&
      *(_BYTE*)(**(_QWORD**)(v4 + 24) + 176LL) == 1 &&
      (*(_BYTE*)(v4 + 546) & 2) == 0) {
    *(_BYTE*)(v4 + 546) |= 2u;
    if (game_ProcGameSkipView_instance_ != 0 &&
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
      v18 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
      v19 = (v18 & 8) != 0 ? 2 : 3;
      if ((v19 & v18) == 0) {
        goto LABEL_69;
      }
    }
    if (game_ProcFadeView_instance_ != 0) {
      v20 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v20 + 172) == *(float*)(v20 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v20 + 160) + 16LL))(v20 +
                                                                       160);
      }
      else {
        v21 = *(_OWORD*)(v20 + 208);
      }
      if (*((float*)&v21 + 3) == 1.0) {
        *((_QWORD*)&a2 + 1) =
            LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                         (_QWORD*)(*(_QWORD*)(v20 + 160) + 16LL))(
                            v20 + 160, *((float*)&v21 + 3)))
                .n128_u64[1];
        if (*((float*)&a2 + 3) == 1.0) {
        LABEL_69:
          v22 = *(unsigned __int8*)(v4 + 288);
          v26 = 0;
          if (v22 == 1) {
            v23 = *(_QWORD*)(v4 + 264);
            *(_QWORD*)&a2 = 0;
          }
          else {
            if (*(float*)(v4 + 272) <= 0.0) {
              result = (*(__int64 (**)(__int64, int*, __int64))(
                  *(_QWORD*)(v4 + 264) + 8LL))(v4 + 264, &v26, v4 + 296);
              if ((result & 1) == 0) {
                goto LABEL_76;
              }
              (*(void (**)(__int64))(*(_QWORD*)(v4 + 264) + 16LL))(v4 + 264);
              LODWORD(v24) = v26;
              result = (*(__int64 (**)(__int64, long double, long double))(
                  *(_QWORD*)(v4 + 264) + 24LL))(v4 + 264, v25, v24);
              goto LABEL_75;
            }
            (*(void (**)(__int64))(*(_QWORD*)(v4 + 264) + 16LL))(v4 + 264);
            v23 = *(_QWORD*)(v4 + 264);
          }
          *(_QWORD*)&a3 = 0;
          result = (*(__int64 (**)(__int64, long double, long double))(
              v23 + 24))(v4 + 264, a2, a3);
        LABEL_75:
          *(_QWORD*)(v4 + 272) = 0;
          *(_WORD*)(v4 + 288) = 256;
          *(_WORD*)(v4 + 132) |= 8u;
          goto LABEL_76;
        }
      }
    }
    result = UnitActor_81b040(v4 + 112, 0.0);
  }
LABEL_76:
  *(_QWORD*)(v4 + 8) = 0;
  return result;
}

__int64 game_gmap_13410a0(__int64 result, int a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  float32x4_t** v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  float v14;
  float v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float v19;
  float v20;
  float32x4_t* v21;
  float32x4_t v22;
  __int128 v23;
  __int128 v24;
  __int64 v25;
  void* v26;

  v2 = *(_QWORD**)(result + 24);
  v3 = result;
  if (*(_QWORD**)(result + 32) == v2 ||
      (v4 = *(_QWORD*)(result + 96), v5 = *(_QWORD*)(result + 552),
       (v4 | v5) != 0) &&
          (v4 != 0 || v5 == 0 || *(_QWORD*)(result + 104) != 0 ||
           *(__int16*)(result + 642) * *(__int16*)(result + 640) *
                   *(__int16*)(result + 644) !=
               0 ||
           *(_QWORD*)(v5 + 352) != 0) &&
          (*(_WORD*)(result + 544) & 3) == 2) {
    v6 = *(_QWORD*)(result + 120);
    BYTE4(v26) = 0;
    v25 = 0xBF800000BF800000LL;
    LODWORD(v26) = 1065353216;
    result = UnitActor_819f40(v6);
    if ((_DWORD)result != *(_DWORD*)(v3 + 128)) {
      return UnitActor_81a540_alt2(v3 + 112, (unsigned int)result, &v25);
    }
  }
  else {
    v7 = *(__int64**)(*(_QWORD*)result + 48LL);
    v8 = *(__int64**)(*(_QWORD*)result + 56LL);
    if (v7 == v8) {
    LABEL_14:
      *(_QWORD*)(result + 32) = v2;
    }
    else {
      while (1) {
        v10 = *v7++;
        v9 = (float32x4_t**)v10;
        if (*(_QWORD*)(v10 + 8) == *v2) {
          break;
        }
        if (v7 == v8) {
          goto LABEL_14;
        }
      }
      v24 = (__typeof__(v24)){0};
      v11 = (float)a2;
      v26 = &GameData_1acc6e7;
      v12 = 0.0f;
      v25 = game_HashString(&GameData_1acc6e7);
      if (game_GameModeData_instance_ != 0) {
        v13 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v25);
        if (v13 != 0) {
          v12 = (float)*(int*)(v13 + 32);
        }
      }
      v14 = v11 / v12;
      if ((float)(v11 / v12) >= 0.5f) {
        v17 = *((float32x4_t*)v9 + 5);
        v18 = *((float32x4_t*)v9 + 6);
        v16 = *((float32x4_t*)v9 + 4);
        v15 = (float)(v14 + -0.5f) + (float)(v14 + -0.5f);
        v21 = v9[1] + 2;
        v19 = 0x1.0000000000000p+0f - v15;
        v20 = v19 * v19;
      }
      else {
        v15 = v14 + v14;
        v16 = *((float32x4_t*)v9 + 2);
        v17 = *((float32x4_t*)v9 + 3);
        v18 = (*v9)[2];
        v19 = 0x1.0000000000000p+0f - (float)(v14 + v14);
        v20 = v19 * v19;
        v21 = (float32x4_t*)(v9 + 12);
      }
      v22 = vaddq_f32(
          vaddq_f32(
              vaddq_f32(
                  vmulq_n_f32(v18, v19 * v20),
                  vmulq_n_f32(v16, v15 * (float)(v19 * (float)(v19 * 3.0f)))),
              vmulq_n_f32(v17, v15 * (float)(v15 * (float)(v19 * 3.0f)))),
          vmulq_n_f32(*v21, v15 * (float)(v15 * v15)));
      *(_QWORD*)&v23 = LANES128(v22).n128_u64[0];
      *((_QWORD*)&v23 + 1) = LANES128(v22).n128_u32[2];
      v24 = v23;
      return GameRoutine_13412c0(v3, &v24, 0x1.0000000000000p+0f);
    }
  }
  return result;
}

void game_gmap_1341ac0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  long double v4;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  char v13;
  char v14;
  int v15;
  int v16;
  unsigned __int64 v17;
  __int128 v18;
  int v19;
  __int64 v20;
  long double v21;
  long double v22;
  unsigned __int64 v23[2];

  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v23[1] = (unsigned __int64)&GameData_1ad0522;
  v2 = 0x0.0p+0f;
  v23[0] = game_HashString_alt1((__int64)&GameData_1ad0522),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48), v23),
    v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v2 = (float)*(int*)(v3 + 32);
    }
  }
  *(float*)&v4 = GameRoutine_135bea0(),
  v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = *(_QWORD*)(a1 + 376);
  if (v6 != 0) {
    *(float*)(*(_QWORD*)(v6 + 304) + 12LL) =
        (float)(v2 * *(float*)&v4) / 0x1.9000000000000p+6f;
  }
  if (*(_DWORD*)(a1 + 128) != -1080537169 &&
      (UnitActor_81a540(a1 + 112, 0xBF984FAF, (__int64)GameData_212ceb8) & 1) !=
          0) {
    v7 = *(_QWORD*)(a1 + 376);
    if (v7 != 0) {
      v8 = *(_QWORD*)(v7 + 392);
      v9 = *(_QWORD*)(v7 + 400);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      v10 = *(unsigned int*)(v8 + 11784);
      v11 = v10 > 0x21;
      v12 = 0x17FEFFFCFuLL >> v10;
      v13 = v11;
      v14 = v13 | v12;
      if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt2(v9),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v14 & 1) != 0) {
        CharacterObservable_10cd4e0(*(_QWORD*)(*(_QWORD*)(a1 + 376) + 120LL)),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  if ((*(_BYTE*)(a1 + 546) & 8) == 0) {
    *(_BYTE*)(a1 + 546) |= 8u;
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v15 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v16 = 2)
             : (v16 = 3),
         (v16 & v15) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_34;
      }
      v17 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v17 + 172) == *(float*)(v17 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v17 + 160) + 16LL))(v17 +
                                                                       160),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        v18 = *(_OWORD*)(v17 + 208);
      }
      if (*((float*)&v18 + 3) != 0x1.0000000000000p+0f ||
          (*((_QWORD*)&v4 + 1) =
               LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                            (_QWORD*)(*(_QWORD*)(v17 + 160) + 16LL))(
                               v17 + 160, *((float*)&v18 + 3)))
                   .n128_u64[1],
           *((float*)&v4 + 3) != 0x1.0000000000000p+0f)) {
      LABEL_34:
        UnitActor_81b040_alt1(a1 + 112, 0x0.0p+0f),
            v22 =
                COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
        return;
      }
    }
    v19 = *(unsigned __int8*)(a1 + 288);
    LODWORD(v23[0]) = 0;
    if (v19 == 1) {
      v20 = *(_QWORD*)(a1 + 264);
      *(_QWORD*)&v4 = 0;
    LABEL_37:
      *(_QWORD*)&v5 = 0;
      (*(void (**)(__int64, long double, long double))(v20 + 24))(a1 + 264, v4,
                                                                  v5),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_38:
      *(_QWORD*)(a1 + 272) = 0;
      *(_WORD*)(a1 + 288) = 256;
      *(_WORD*)(a1 + 132) |= 8u;
      return;
    }
    if (*(float*)(a1 + 272) > 0x0.0p+0f) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v20 = *(_QWORD*)(a1 + 264);
      goto LABEL_37;
    }
    if (((*(__int64 (**)(__int64, unsigned __int64*, __int64))(
             *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, v23, a1 + 296) &
         1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      LODWORD(v21) = v23[0];
      (*(void (**)(__int64, long double, long double))(
          *(_QWORD*)(a1 + 264) + 24LL))(a1 + 264, v22, v21),
          v22 = COERCE_AS(__typeof__(v22), PSEUDO_REGISTER(__n128, "v0", "=w"));
      goto LABEL_38;
    }
  }
}

__int64 game_gmap_1341d60(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v3;
  __int16 v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  unsigned int v9;
  __int64 v11;
  __int64 v12;
  int v13;
  __int16 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  __int64 v18[3];

  v4 = *(_WORD*)(a1 + 544);
  if ((a2 & 1) == 0) {
    if ((v4 & 0x80) != 0) {
      v6 = v4 & 0xFF7F;
      *(_WORD*)(a1 + 544) = v4 & 0xFF7F;
      if ((v4 & 0x10) == 0) {
        return 0;
      }
    }
    else {
      v6 = *(_WORD*)(a1 + 544);
      if ((v4 & 0x10) == 0) {
        return 0;
      }
    }
    v7 = v6 & 0xFF6F;
    goto LABEL_13;
  }
  if ((v4 & 0x80) == 0) {
    v5 = v4 | 0x80;
    *(_WORD*)(a1 + 544) = v4 | 0x80;
    if ((v4 & 0x10) == 0) {
      goto LABEL_9;
    }
    return 0;
  }
  v5 = *(_WORD*)(a1 + 544);
  if ((v4 & 0x10) != 0) {
    return 0;
  }
LABEL_9:
  v7 = v5 | 0x10;
LABEL_13:
  *(_WORD*)(a1 + 544) = v7;
  if ((*(_QWORD*)(a1 + 96) | *(_QWORD*)(a1 + 552)) != 0 ||
      game_GameModeData_instance_ == 0) {
    return 1;
  }
  v18[1] = v2;
  v18[2] = v3;
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v9 = *(_DWORD*)(a1 + 84);
    v18[0] = 0;
    if ((v9 & 0x80000000) == 0) {
      v16_.v16[0] = GameData_1fb0d30;
      v16_.v16[1] = v18;
      v16_.v17 = v16_.v16;
      game_CorpsManager_EachUnit(v9, (__int64)v16_.v16);
      if (v16_.v17 == v16_.v16) {
        v11 = 32;
      }
      else {
        if (v16_.v17 == nullptr) {
        LABEL_23:
          v12 = v18[0];
          if (v18[0] != 0) {
            v13 = *(_DWORD*)(v18[0] + 416);
            v14 = *(_WORD*)(a1 + 544);
            if ((v13 & 1) != ((v14 & 0x10) != 0)) {
              if ((v14 & 0x10) != 0) {
                v15 = a1;
                if ((v13 & 1) == 0) {
                  *(_DWORD*)(v18[0] + 416) = v13 & 0xFFFEFFFE | 1;
                  *(_WORD*)(v12 + 20) |= 4u;
                }
              }
              else {
                Unit_6df260(v18[0]);
                v15 = a1;
              }
              *(_WORD*)(v15 + 132) |= 4u;
            }
          }
          return 1;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v16_.v17 + v11))((__int64)v16_.v17);
      goto LABEL_23;
    }
  }
  return 1;
}

__int64 game_gmap_1341ed0(__int64 result)
{
  __int64 v1;
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;

  if ((*(_QWORD*)(result + 96) | *(_QWORD*)(result + 552)) != 0) {
    return result;
  }
  v1 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return result;
  }
  v2 = *(_DWORD*)(result + 84);
  v12 = 0;
  if ((v2 & 0x80000000) != 0) {
    v5 = 0;
    goto LABEL_13;
  }
  v3 = result;
  v10[0] = GameData_1fb0d30;
  v10[1] = &v12;
  v11 = v10;
  game_CorpsManager_EachUnit_alt1(v2, v10);
  if (v11 == v10) {
    v4 = 32;
    goto LABEL_10;
  }
  if (v11 != nullptr) {
    v4 = 40;
  LABEL_10:
    (*(void (**)(__int64))(*v11 + v4))((__int64)v11);
  }
  v5 = v12;
  result = v3;
  if ((*(_DWORD*)(v3 + 84) & 0x80000000) != 0) {
    v1 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
    LABEL_13:
      if (*(_DWORD*)(v1 + 60) == 3) {
        v6 = result;
        v10[0] = *(_QWORD*)(v1 + 96);
        LODWORD(v12) = 241;
        v5 = game_UnitPool_Find_6ead60(v10, &v12);
        result = v6;
      }
    }
  }
  if (v5 != 0) {
    v7 = *(_DWORD*)(v5 + 416);
    if ((v7 & 1) != 0) {
      *(_DWORD*)(v5 + 416) = v7 & 0xFFFFFFFE;
      if (*(_WORD*)(v5 + 1964) != 0) {
        v8 = *GameData_212cec0;
        if (*(_QWORD*)(v5 + 1960) != *GameData_212cec0) {
          *(_QWORD*)(v5 + 1960) = v8;
          v9 = result;
          LODWORD(v10[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                                       game_g_shared_system_skills_ptr) &
                            0xFFF;
          Unit_6cd120(v5, (v8 & 0xFFFF00000000LL) != 0, v10);
          result = v9;
        }
      }
      *(_WORD*)(v5 + 20) |= 4u;
      *(_WORD*)(result + 132) |= 4u;
    }
  }
  return result;
}

__int64 game_gmap_1347960(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 result;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  struct {
    unsigned __int64 v17[4];
    unsigned __int64* v18;
  } v17_;

  if (a3 == 0) {
    return 0;
  }
  if (game_GameModeData_instance_ != 0 &&
      (v4 = *(_QWORD*)(game_GameModeData_instance_ + 24)) != 0 &&
      (*(_BYTE*)(v4 + 152) == 4 &&
           *(_QWORD*)(v4 + 168) == *(_QWORD*)(a2 + 120) ||
       *(_BYTE*)(v4 + 152) == 6 &&
           *(_QWORD*)(v4 + 168) == *(_QWORD*)(a2 + 120))) {
    if (*(_BYTE*)(*(_QWORD*)(a3 + 40) + 32LL) == 1) {
      return 0;
    }
  }
  else if (*(_BYTE*)(*(_QWORD*)(a3 + 40) + 32LL) == 1) {
    if (a2 == 0) {
      return 0;
    }
    v5 = *(_QWORD**)(a1 + 8);
    v6 = *(_QWORD**)(a1 + 16);
    if (v5 != v6) {
      while (1) {
        v7 = (_QWORD*)*v5;
        if (*(_QWORD*)*v5 == a2 && v7[12] == 0 && v7[69] == 0) {
          return 0;
        }
        if (++v5 == v6) {
          goto LABEL_18;
        }
      }
    }
  }
  else {
  LABEL_18:
    if (a2 == 0) {
      return 0;
    }
  }
  v17_.v17[0] = (unsigned __int64)GameData_202bb48;
  v17_.v18 = v17_.v17;
  v11 = game_gmap_TroopMgr_CountTroop_134e600(a2, (__int64)v17_.v17);
  if (v17_.v18 == v17_.v17) {
    v12 = 32;
  }
  else {
    if (v17_.v18 == nullptr) {
      goto LABEL_24;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v17_.v18 + v12))((__int64)v17_.v18);
LABEL_24:
  v17_.v17[1] = (unsigned __int64)&GameData_1a86cf1;
  v13 = game_HashString_alt1((__int64)&GameData_1a86cf1);
  v14 = game_GameModeData_instance_;
  v17_.v17[0] = v13;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_27;
  }
  v15 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v17_.v17);
  if (v15 != 0) {
    v14 = *(_DWORD*)(v15 + 32);
  LABEL_27:
    if (v11 < v14) {
      goto LABEL_28;
    }
    return 0;
  }
  if (v11 >= 0) {
    return 0;
  }
LABEL_28:
  result = TroopMgr_1351170((__int64*)(a1 + 8));
  if (result != 0) {
    v16 = result;
    game_gmap_133ce20(result, a2, a3);
    return v16;
  }
  return result;
}

__int64 game_gmap_1347b30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5;
  int v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  struct {
    unsigned __int64 v14[4];
    unsigned __int64* v15;
  } v14_;

  if (a3 == 0) {
    return 0;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0 &&
      game_GameModeData_instance_ != 0) {
    v5 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v5 != 0) {
      if (*(_BYTE*)(v5 + 152) == 4 &&
          *(_QWORD*)(v5 + 168) == *(_QWORD*)(a2 + 120)) {
      LABEL_10:
        if (*(_BYTE*)(a3 + 32) == 1) {
          return 0;
        }
        goto LABEL_13;
      }
      if (*(_BYTE*)(v5 + 152) == 6) {
        if (*(_QWORD*)(v5 + 168) != *(_QWORD*)(a2 + 120)) {
          goto LABEL_13;
        }
        goto LABEL_10;
      }
    }
  }
  if (a2 == 0) {
    return 0;
  }
LABEL_13:
  v14_.v14[0] = (unsigned __int64)GameData_202bb48;
  v14_.v15 = v14_.v14;
  v7 = game_gmap_TroopMgr_CountTroop_134e600(a2, (__int64)v14_.v14);
  if (v14_.v15 == v14_.v14) {
    v8 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_19;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v8))((__int64)v14_.v15);
LABEL_19:
  v14_.v14[1] = (unsigned __int64)&GameData_1a86cf1;
  v10 = game_HashString_alt1((__int64)&GameData_1a86cf1);
  v11 = game_GameModeData_instance_;
  v14_.v14[0] = v10;
  if (game_GameModeData_instance_ == 0) {
    goto LABEL_22;
  }
  v12 = game_GameVariableTable_Find_alt1(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v14_.v14);
  if (v12 != 0) {
    v11 = *(_DWORD*)(v12 + 32);
  LABEL_22:
    if (v7 < v11) {
      goto LABEL_23;
    }
    return 0;
  }
  if (v7 >= 0) {
    return 0;
  }
LABEL_23:
  result = TroopMgr_1351170((__int64*)(a1 + 8));
  if (result != 0) {
    v13 = result;
    game_gmap_TroopUnitList_CreateReinforce(result, a2, a3);
    return v13;
  }
  return result;
}

__int64 game_gmap_1347cc0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  _DWORD* v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int128 v11;
  __int64 v12;
  struct {
    unsigned __int64 v13[4];
    unsigned __int64* v14;
  } v13_;

  if (GameData_21c96e8 == 0) {
    return 0;
  }
  result = 0;
  if (a1 != 0 && a2 != 0) {
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    v6 = (_DWORD*)a1;
    v13_.v13[0] = (unsigned __int64)GameData_202bb48;
    v13_.v14 = v13_.v13;
    v7 = game_gmap_TroopMgr_CountTroop_134e600(a1, (__int64)v13_.v13);
    if (v13_.v14 == v13_.v13) {
      v8 = 32;
    }
    else {
      if (v13_.v14 == nullptr) {
        goto LABEL_11;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v13_.v14 + v8))((__int64)v13_.v14);
  LABEL_11:
    v13_.v13[1] = (unsigned __int64)&GameData_1a86cf1;
    v13_.v13[0] = game_HashString_alt1((__int64)&GameData_1a86cf1);
    v9 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v10 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48), v13_.v13);
      if (v10 == 0) {
        if (v7 < 0) {
          goto LABEL_15;
        }
        return 0;
      }
      v9 = *(_DWORD*)(v10 + 32);
    }
    if (v7 < v9) {
    LABEL_15:
      result = TroopMgr_1351170((__int64*)(v4 + 8));
      if (result != 0) {
        *(_QWORD*)(result + 552) = a2;
        *(_QWORD*)result = v6;
        *(_DWORD*)(result + 48) = v6[8];
        *(_DWORD*)(result + 52) = v6[9];
        v11 = *(_OWORD*)(result + 48);
        *((_QWORD*)&v11 + 1) = (unsigned int)v6[10];
        *(_OWORD*)(result + 48) = v11;
        if (*(_QWORD*)GameData_212d750 != 0 && *(_QWORD*)(result + 344) == 0) {
          v12 = result;
          Troop_133e6e0(result);
          return v12;
        }
      }
      return result;
    }
    return 0;
  }
  return result;
}

__n128 game_gmap_1347e20(__n128 a1)
{
  __n128 result;
  __int64 v2;
  __int16** v3;
  __int16** v4;
  char* v5;
  __int16** v6;
  unsigned __int64 v7;
  __int64 v8;
  __int16* v9;
  __int16* v10;
  char* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  result = TroopMgr_1348160(a1);
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int16***)(v2 + 8);
  v4 = *(__int16***)(v2 + 16);
  if (v3 != v4) {
    v5 = nullptr;
    v6 = nullptr;
    v7 = 0;
    v8 = game_gmap_GmapClock_kDefaultTime_ptr;
    do {
      v9 = *v3;
      if ((*v3)[321] * (*v3)[320] * (*v3)[322] != 0) {
        v10 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                             ? game_gmap_GmapClock_instance_ + 8
                             : v8);
        if (((__int64)(*v3)[321] << 24) + ((__int64)(*v3)[320] << 32) +
                ((__int64)(*v3)[322] << 18) + ((__int64)v9[323] << 12) +
                ((__int64)v9[324] << 6) + v9[325] <
            (unsigned __int64)(((__int64)v10[1] << 24) + ((__int64)*v10 << 32) +
                               ((__int64)v10[2] << 18) +
                               ((__int64)v10[3] << 12) +
                               ((__int64)v10[4] << 6) + v10[5])) {
          if ((unsigned __int64)v6 < v7) {
            *v6++ = v9;
          }
          else {
            v11 = (char*)((char*)v6 - v5);
            v12 = ((char*)v6 - v5) >> 3;
            v13 = v12 + 1;
            if ((unsigned __int64)(v12 + 1) >> 61 != 0) {
              GameRoutine_888610();
            }
            if ((__int64)(v7 - (_QWORD)v5) >> 2 > v13) {
              v13 = (__int64)(v7 - (_QWORD)v5) >> 2;
            }
            if (v7 - (unsigned __int64)v5 >= 0x7FFFFFFFFFFFFFF8LL) {
              v14 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v14 = v13;
            }
            if (v14 != 0) {
              if (v14 >> 61 != 0) {
                GameRoutine_60a210_alt1();
              }
              v15 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v14, 16, 0);
            }
            else {
              v15 = 0;
            }
            v7 = v15 + 8 * v14;
            v16 = (char*)((char*)v6 - v5);
            v17 = (__int64)&v11[v15 + -8 * v12];
            *(_QWORD*)&v11[v15] = v9;
            v6 = (__int16**)&v11[v15 + 8];
            memcpy(v17, v5, v16);
            if (v5 != nullptr) {
              v18 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v18 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
            }
            v5 = (char*)v17;
          }
        }
      }
      ++v3;
    } while (v3 != v4);
    v19 = GameData_212c790;
    if (v5 != (char*)v6) {
      v20 = *GameData_212c790;
      if (*GameData_212c790 != 0) {
        v21 = v5;
      LABEL_29:
        v22 = *(_QWORD*)(v20 + 8);
        v24 = *(_QWORD*)(v22 + 8);
        v23 = *(_QWORD*)(v22 + 16);
        if (v23 == v24) {
          goto LABEL_44;
        }
        v25 = (v23 - v24) >> 3;
        v26 = 0;
        while (*(_QWORD*)(v24 + 8 * v26) != *(_QWORD*)v21) {
          if (v25 == ++v26) {
            goto LABEL_44;
          }
        }
        if ((v26 & 0x8000000000000000LL) == 0) {
          v27 = (unsigned int)v26;
          if ((unsigned int)v26 >= v25) {
            GameRoutine_13549e0();
          }
          if (*(_QWORD*)(v24 + 8LL * (unsigned int)v26) != 0) {
            GameRoutine_133cc40(*(_QWORD*)(v24 + 8LL * (unsigned int)v26));
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v28 = 128;
            }
            else {
              v28 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
            v24 = *(_QWORD*)(v22 + 8);
            v23 = *(_QWORD*)(v22 + 16);
          }
          v29 = v24 + 8 * v27;
          v30 = v23 - (v29 + 8);
          if (v23 != v29 + 8) {
            memmove(v29, v29 + 8, v23 - (v29 + 8));
          }
          *(_QWORD*)(v22 + 16) = v29 + v30;
        }
      LABEL_44:
        while (1) {
          v21 += 8;
          if (v21 == (char*)v6) {
            break;
          }
          v20 = *v19;
          if (*v19 != 0) {
            goto LABEL_29;
          }
        }
      }
    }
    if (v5 != nullptr) {
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
    }
  }
  return result;
}

__int64 game_gmap_135e7e0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  unsigned int* v10;
  __int64 v11;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2241698,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2241698) != 0) {
    GameData_2241460 = 0;
    GameData_2241468 =
        (__int64)game_gmap_anonymous_ProcGmapExploreSeq_Initialize;
    GameData_2241458 = 13;
    GameData_2241498 = 13;
    GameData_22414d8 = 13;
    GameData_2241518 = 13;
    GameData_2241558 = 13;
    GameData_2241598 = 13;
    GameData_22415d8 = 13;
    GameData_2241618 = 13;
    GameData_2241470 = 0;
    GameData_2241478 = 0;
    GameData_2241480 = 0;
    GameData_2241488 = 0;
    GameData_22414a0 = 0;
    GameData_22414a8 = (__int64)ProcGmapExploreSeq_135ece0;
    GameData_2241490 = 0;
    GameData_22414b0 = 0;
    GameData_22414b8 = 0;
    GameData_22414c0 = 0;
    GameData_22414c8 = 0;
    GameData_22414d0 = 0;
    GameData_22414f0 = 0;
    GameData_22414f8 = 0;
    GameData_2241500 = 0;
    GameData_22414e0 = 0;
    GameData_22414e8 = (__int64)ProcGmapExploreSeq_135ed00;
    GameData_2241508 = 0;
    GameData_2241510 = 0;
    GameData_2241530 = 0;
    GameData_2241538 = 0;
    GameData_2241540 = 0;
    GameData_2241548 = 0;
    GameData_2241550 = 0;
    GameData_2241570 = 0;
    GameData_2241578 = 0;
    GameData_2241520 = 0;
    GameData_2241528 = (__int64)ProcGmapExploreSeq_135f000;
    GameData_2241580 = 0;
    GameData_2241588 = 0;
    GameData_2241590 = 0;
    GameData_22415b0 = 0;
    GameData_22415b8 = 0;
    GameData_22415c0 = 0;
    GameData_22415c8 = 0;
    GameData_22415d0 = 0;
    GameData_22415f0 = 0;
    GameData_2241560 = 0;
    GameData_2241568 = (__int64)ProcGmapExploreSeq_135f2a0;
    GameData_22415f8 = 0;
    GameData_2241600 = 0;
    GameData_2241608 = 0;
    GameData_2241610 = 0;
    GameData_2241620 = 0;
    GameData_2241628 = (__int64)GameRoutine_135f5a0;
    GameData_2241630 = 0;
    GameData_2241638 = 0;
    GameData_2241640 = 0;
    GameData_2241648 = 0;
    GameData_22415a0 = 0;
    GameData_22415a8 = (__int64)ProcGmapExploreSeq_135f500;
    GameData_2241650 = 0;
    GameData_2241658 = 0;
    GameData_2241680 = 0;
    GameData_2241688 = 0;
    GameData_2241690 = 0;
    GameData_2241678 = 0;
    GameData_2241670 = 0;
    GameData_2241668 = 0;
    GameData_2241660 = 0;
    GameData_22415e0 = 0;
    GameData_22415e8 = (__int64)ProcGmapExploreSeq_135f540;
    __cxa_guard_release(&GameData_2241698);
  }
  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      208, 16, 0);
  v3 = GameData_212c608[0];
  *(_QWORD*)(v2 + 96) = 0;
  *(_QWORD*)(v2 + 104) = 0;
  *(_QWORD*)(v2 + 112) = 0;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 128) = 0;
  *(_WORD*)(v2 + 136) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = "NULL";
  *(_QWORD*)(v2 + 138) = 0;
  *(_QWORD*)(v2 + 144) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = v3 + 16;
  *(_QWORD*)(v2 + 8) = 0;
  game_ProcInst_Register(v2);
  *(_QWORD*)(v2 + 160) = 0;
  *(_QWORD*)(v2 + 168) = 0;
  *(_QWORD*)(v2 + 176) = 0;
  *(_QWORD*)(v2 + 184) = 0;
  *(_QWORD*)(v2 + 192) = 0;
  *(_QWORD*)(v2 + 200) = 0;
  *(_QWORD*)v2 = game_gmap_anonymous_ProcGmapExploreSeq_vtable;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64**)(v4 + 8);
  v7 = *(__int64**)(v4 + 16);
  if (v5 < 0) {
    for (; v6 != v7; ++v6) {
      v8 = *v6;
      if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
        goto LABEL_12;
      }
    }
  LABEL_8:
    v10 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
    goto LABEL_13;
  }
  if (v6 == v7) {
    goto LABEL_8;
  }
  while (1) {
    v9 = *v6++;
    v8 = v9;
    if (*(_DWORD*)(v9 + 84) == v5) {
      break;
    }
    if (v6 == v7) {
      goto LABEL_8;
    }
  }
LABEL_12:
  v10 = *(unsigned int**)v8;
LABEL_13:
  if ((unsigned __int8)Impl_13261c0_alt1((__int64)v10) == 5) {
    v11 = *((_QWORD*)v10 + 18);
  }
  else {
    v11 = 0;
  }
  *(_QWORD*)(v2 + 152) = v11;
  return ProcInst_657850(v2, (__int64)&GameData_2241458,
                         (__int64)"ProcGmapExploreSeq", 1, a1);
}

void game_gmap_14b6560(__int64 a1)
{
  float v2;
  float v3;
  float v4;
  __int64 v5;
  float v6;
  int v7;
  int v8;
  int v9;
  float32x4_t* v10;
  float32x4_t* v11;
  float v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64* v15;
  float32x4_t* v16;
  float32x4_t* v17;
  float v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64* v21;
  __int64* v22;
  void* v23;
  __int64 v24;
  __int64 v25;
  float32x4_t* v26;
  float32x4_t* v27;
  float v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64* v31;
  void* v32;
  __int64 v33;
  __int64 v34;
  float32x4_t* v35;
  float32x4_t* v36;
  float v37;
  unsigned __int64 v38;
  __int64* v39;
  __int64* v40;
  __int64 v41;
  void* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  long double v46;
  unsigned __int8* v47;
  unsigned int v48;
  bool v49;
  int v50;
  float v52;
  float v53;
  float v54;
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  __int128 v60;
  float32x4_t v61;

  v2 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  v3 = GameRoutine_135bea0_alt1();
  v4 = *(float*)(a1 + 188);
  v5 = game_ProcGameSkipView_instance_;
  v6 = *(float*)(a1 + 184) + (float)(v2 * v3);
  if (v6 >= v4) {
    v6 = *(float*)(a1 + 188);
  }
  *(float*)(a1 + 184) = v6;
  if (v5 != 0 && *(_BYTE*)(v5 + 152) == 3) {
    v7 = *(_DWORD*)(v5 + 156);
    v8 = (v7 & 8) != 0 ? 2 : 3;
    if ((v8 & v7) == 0) {
      v6 = v4;
      *(float*)(a1 + 184) = v4;
    }
  }
  v9 = *(_DWORD*)(a1 + 152);
  if (v9 > 1) {
    if (v9 == 2) {
      v35 = *(float32x4_t**)(a1 + 160);
      v36 = *(float32x4_t**)(a1 + 168);
      if (v35 != v36) {
        v37 = v6 / v4;
        v55 = 0x1.0000000000000p+0 - v37;
        v59 = v37;
        do {
          v38 = LANES128(*(v35)).n128_u64[0];
          v61 = vaddq_f32(vmulq_n_f32(v35[1], v55), vmulq_n_f32(v35[2], v59));
          GameRoutine_13412c0(v38, &v61, 0x1.0000000000000p+0);
          v35 += 3;
        } while (v35 != v36);
        v6 = *(float*)(a1 + 184);
        v4 = *(float*)(a1 + 188);
      }
      if (v6 >= (float)(v4 * 0.5)) {
        v39 = *(__int64**)(a1 + 160);
        v40 = *(__int64**)(a1 + 168);
        if (v39 != v40) {
          do {
            v41 = *v39;
            v39 += 6;
            game_gmap_1340560_alt1(v41, 3);
          } while (v39 != v40);
          v6 = *(float*)(a1 + 184);
          v4 = *(float*)(a1 + 188);
        }
      }
      if (v6 >= v4) {
        if (GameData_21c96e8 != 0) {
          TroopMgr_134a4a0(*(_QWORD*)(GameData_21c96e8 + 8));
        }
        goto LABEL_67;
      }
      return;
    }
    if (v9 == 3) {
      v16 = *(float32x4_t**)(a1 + 160);
      v17 = *(float32x4_t**)(a1 + 168);
      if (v16 != v17) {
        v18 = v6 / v4;
        v53 = 0x1.0000000000000p+0 - v18;
        v57 = v18;
        do {
          v19 = LANES128(*(v16)).n128_u64[0];
          v61 = vaddq_f32(vmulq_n_f32(v16[1], v53), vmulq_n_f32(v16[2], v57));
          GameRoutine_13412c0(v19, &v61, 0x1.0000000000000p+0);
          v16 += 3;
        } while (v16 != v17);
        v16 = *(float32x4_t**)(a1 + 160);
        v17 = *(float32x4_t**)(a1 + 168);
      }
      while (v16 != v17) {
        v20 = LANES128(*(v16)).n128_u64[0];
        v16 += 3;
        game_gmap_133de90_alt1(v20, 2);
      }
      if (*(float*)(a1 + 184) >= *(float*)(a1 + 188)) {
        v21 = *(__int64**)(a1 + 160);
        v22 = *(__int64**)(a1 + 168);
        if (v21 != v22) {
          v23 = GameData_212ceb8;
          do {
            v24 = *v21;
            v25 = *(_QWORD*)(*v21 + 376);
            if (v25 != 0) {
              *(_DWORD*)(*(_QWORD*)(v25 + 304) + 12LL) = 1065353216;
              v24 = *v21;
            }
            UnitActor_81a540_alt2(v24 + 112, 119788728, v23);
            v21 += 6;
          } while (v21 != v22);
          v21 = *(__int64**)(a1 + 160);
          v22 = *(__int64**)(a1 + 168);
        }
        while (v21 != v22) {
          v45 = *v21;
          v21 += 6;
          v61 = COERCE_AS(float32x4_t, GameData_1a83090);
          v60 = GameData_1a83090;
          v46 = GameRoutine_752d30(&v61, &v60);
          UnitActor_81ab40(v45 + 112, *(float*)&v46 * 0x1.ca5dc00000000p+5,
                           -0x1.0000000000000p+0);
        }
        goto LABEL_67;
      }
      return;
    }
    goto LABEL_67;
  }
  if (v9 == 0) {
    v26 = *(float32x4_t**)(a1 + 160);
    v27 = *(float32x4_t**)(a1 + 168);
    if (v26 != v27) {
      v28 = v6 / v4;
      v54 = 0x1.0000000000000p+0 - v28;
      v58 = v28;
      do {
        v29 = LANES128(*(v26)).n128_u64[0];
        v61 = vaddq_f32(vmulq_n_f32(v26[1], v54), vmulq_n_f32(v26[2], v58));
        GameRoutine_13412c0(v29, &v61, 0x1.0000000000000p+0);
        v26 += 3;
      } while (v26 != v27);
      v6 = *(float*)(a1 + 184);
      v4 = *(float*)(a1 + 188);
    }
    if (v6 >= v4) {
      ProcTroopAction_14b4f80(a1);
      v30 = *(__int64**)(a1 + 160);
      v31 = *(__int64**)(a1 + 168);
      if (v30 != v31) {
        v32 = GameData_212ceb8;
        do {
          v33 = *v30;
          v34 = *(_QWORD*)(*v30 + 376);
          if (v34 != 0) {
            *(_DWORD*)(*(_QWORD*)(v34 + 304) + 12LL) = 1065353216;
            v33 = *v30;
          }
          UnitActor_81a540_alt2(v33 + 112, 119788728, v32);
          v30 += 6;
        } while (v30 != v31);
      }
      goto LABEL_67;
    }
    return;
  }
  if (v9 != 1) {
  LABEL_67:
    v47 = *(unsigned __int8**)(a1 + 16);
    if (v47 != nullptr) {
      v48 = *v47;
      v49 = v48 > 0x10;
      v50 = (1 << v48) & 0x1CE00;
      if (!v49 && v50 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
    return;
  }
  v10 = *(float32x4_t**)(a1 + 160);
  v11 = *(float32x4_t**)(a1 + 168);
  if (v10 != v11) {
    v12 = v6 / v4;
    v52 = 0x1.0000000000000p+0 - v12;
    v56 = v12;
    do {
      v13 = LANES128(*(v10)).n128_u64[0];
      v61 = vaddq_f32(vmulq_n_f32(v10[1], v52), vmulq_n_f32(v10[2], v56));
      GameRoutine_13412c0(v13, &v61, 0x1.0000000000000p+0);
      v10 += 3;
    } while (v10 != v11);
    v6 = *(float*)(a1 + 184);
    v4 = *(float*)(a1 + 188);
  }
  if (v6 >= v4) {
    v14 = *(__int64**)(a1 + 160);
    v15 = *(__int64**)(a1 + 168);
    if (v14 != v15) {
      do {
        if ((*(_WORD*)(*v14 + 544) & 0x1000) != 0) {
          *(_WORD*)(*v14 + 544) &= ~0x1000u;
        }
        v14 += 6;
      } while (v14 != v15);
      v14 = *(__int64**)(a1 + 160);
      v15 = *(__int64**)(a1 + 168);
    }
    if (v14 != v15) {
      v42 = GameData_212ceb8;
      do {
        v43 = *v14;
        v44 = *(_QWORD*)(*v14 + 376);
        if (v44 != 0) {
          *(_DWORD*)(*(_QWORD*)(v44 + 304) + 12LL) = 1065353216;
          v43 = *v14;
        }
        UnitActor_81a540_alt2(v43 + 112, 119788728, v42);
        v14 += 6;
      } while (v14 != v15);
    }
    goto LABEL_67;
  }
}

__int64 game_gmap_14c4e00()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        break;
      }
      ++v2;
    }
  }
  else {
    v5 = *v2;
    v3 = v2 + 1;
    v4 = v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v3++;
        v4 = v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }
  return UnitActor_81a540_alt1(v4 + 112, 119788728, (__int64)GameData_212ceb8);
}

__int64 game_gmap_14c50c0()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v0 = *(_QWORD*)(GameData_21c96e8 + 8);
  v1 = *(_DWORD*)(v0 + 56);
  v2 = *(__int64**)(v0 + 8);
  if (v1 < 0) {
    while (1) {
      v4 = *v2;
      if (*(_QWORD*)(*v2 + 96) == 0 && *(_QWORD*)(v4 + 552) == 0) {
        break;
      }
      ++v2;
    }
  }
  else {
    v5 = *v2;
    v3 = v2 + 1;
    v4 = v5;
    if (*(_DWORD*)(v5 + 84) != v1) {
      do {
        v6 = *v3++;
        v4 = v6;
      } while (*(_DWORD*)(v6 + 84) != v1);
    }
  }
  return UnitActor_81a540_alt1(v4 + 112, 119788728, (__int64)GameData_212ceb8);
}

void game_gmap_14d2400()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(__int64**)(v0 + 16), 0);
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
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
}

void game_gmap_14d24a0()
{
  __int64 v0;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(__int64**)(v0 + 16), 1);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  *(_DWORD*)(v0 + 5856) |= 0x10000u;
}

__int64 game_gmap_14d5220()
{
  __int64 result;
  __int64 v1;
  struct {
    _QWORD v2[4];
    _QWORD* v3;
  } v2_;
  int v4;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (GameData_21f1618 != 0) {
    v4 = 0;
    v2_.v2[0] = GameData_202c0e8;
    v2_.v2[1] = GameData_21f1618;
    v2_.v3 = v2_.v2;
    v2_.v2[2] = &v4;
    game_gmap_SpotMgr_EachSpotAttachment(0, (__int64)v2_.v2),
        result = COERCE_AS(__typeof__(result),
                           PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = (__int64)v2_.v3;
    if (v2_.v3 == v2_.v2) {
      v1 = 32;
    }
    else {
      if (v2_.v3 == nullptr) {
        return result;
      }
      v1 = 40;
    }
    return (*(__int64 (**)(__int64))(*v2_.v3 + v1))((__int64)v2_.v3);
  }
  return result;
}

void game_gmap_14d5780(__int64 a1)
{
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
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  unsigned int* v23;
  __int64 v24;
  struct {
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v25_;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if ((v3 & 0x80000000) == 0) {
    while (v4 != v5) {
      v7 = *v4++;
      v6 = v7;
      if (*(_DWORD*)(v7 + 84) == v3) {
        goto LABEL_8;
      }
    }
  LABEL_7:
    v6 = 0;
    goto LABEL_8;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v6 = *v4;
    if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
      break;
    }
    if (++v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_8:
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
  v14 = *(_QWORD*)v6;
  if (game_GameModeData_instance_ != 0) {
    v15 = GameRoutine_714b20((_QWORD*)game_GameModeData_instance_);
    if (v15 != 0) {
      v16 = v15;
      while (*(_BYTE*)(v16 + 33) != 18) {
        if ((GameRoutine_889be0(v16) & 1) != 0 || *(_BYTE*)(v16 + 32) != 0) {
          v16 = *(_QWORD*)(*(_QWORD*)(v16 + 24) + 16LL);
          if (v16 != 0) {
            continue;
          }
        }
        goto LABEL_27;
      }
      if (game_GameModeData_instance_ != 0) {
        v17 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        if (v17 != 0 && *(_BYTE*)(v17 + 152) == 6 &&
            *(_QWORD*)(v17 + 168) == *(_QWORD*)(v14 + 120)) {
          goto LABEL_28;
        }
      }
    }
  }
LABEL_27:
  if (GameRoutine_ae4320(v14) != 0) {
  LABEL_28:
    v18 = 2;
    *(_DWORD*)(a1 + 224) = 2;
    goto LABEL_47;
  }
  v25_.v26 = 0;
  v25_.v27 = 0;
  v25_.v25 = 0;
  GameSideStoryData_12b50c0(*(_QWORD*)GameData_212c7b8[0], &v25_.v25);
  v19 = v25_.v25;
  v20 = v25_.v26;
  if (v25_.v25 == v25_.v26) {
    v21 = 0;
    if (v25_.v25 == 0) {
      goto LABEL_42;
    }
    goto LABEL_39;
  }
  do {
    v22 = *(_QWORD*)v19;
    v23 = *(unsigned int**)(**(_QWORD**)v19 + 200LL);
    if (v23 != nullptr &&
        game_gmap_SpotMgr_FindSpot(v23) == (unsigned int*)v14 &&
        *(_BYTE*)(v22 + 8) == 3) {
      v21 = 1;
      goto LABEL_38;
    }
    v19 += 8;
  } while (v19 != v20);
  v21 = 0;
LABEL_38:
  v19 = v25_.v25;
  if (v25_.v25 != 0) {
  LABEL_39:
    v25_.v26 = v19;
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v24);
  }
LABEL_42:
  if (v21 != 0) {
    v18 = 1;
    *(_DWORD*)(a1 + 224) = 1;
  }
  else if (GmapSituation_14db600()) {
    v18 = 3;
    *(_DWORD*)(a1 + 224) = 3;
  }
  else {
    v18 = *(_DWORD*)(a1 + 224);
    if (v18 == 0) {
      return;
    }
  }
LABEL_47:
  *(_DWORD*)(a1 + 152) = v18;
}

__int64 game_gmap_14d5d20(__int64 a1)
{
  int v1;
  __int64 result;
  __int64 v3;
  int v4;

  v1 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) +
                  game_gmap_GmapClock_kDefaultTime_ptr);
  v3 = *(_QWORD*)game_gmap_GmapClock_kDefaultTime_ptr;
  v4 = v1;
  result = GameHr_16aec40(a1, (__int64)&GameData_1a9f09e, &v3);
  *(_BYTE*)(result + 248) = 1;
  return result;
}

__int64 game_gmap_14d60a0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64* v8;
  int v9;
  bool v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  int v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  char v35;
  int v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64** v45;
  __int64** v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64* v52;
  __int64* v53;
  __int64 v54;
  __int64 v55;
  int v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _BYTE* v62;
  __int64 v64;
  __int64 v65;
  void* v66;
  _BYTE* v67;
  char v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;

  if (*(_BYTE*)(result + 222) != 1) {
    *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 6;
    return result;
  }
  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  v6 = *(__int64**)(v3 + 16);
  if ((v4 & 0x80000000) == 0) {
    while (v5 != v6) {
      v8 = (__int64*)*v5++;
      v7 = v8;
      if (*((_DWORD*)v8 + 21) == v4) {
        goto LABEL_10;
      }
    }
  LABEL_9:
    v7 = nullptr;
    goto LABEL_10;
  }
  if (v5 == v6) {
    goto LABEL_9;
  }
  while (1) {
    v7 = (__int64*)*v5;
    if (*(_QWORD*)(*v5 + 96) == 0 && v7[69] == 0) {
      break;
    }
    if (++v5 == v6) {
      goto LABEL_9;
    }
  }
LABEL_10:
  v9 = *((_DWORD*)v7 + 135);
  v10 = __OFSUB__(v9, 1);
  v11 = (unsigned int)(v9 - 1);
  if (((v11 & 0x80000000) != 0LL) == v10) {
    v12 = v7[3];
    v13 = v7[4] - v12;
    v14 = (__int64*)(v12 + 8LL * (unsigned int)v11);
    if (v11 < v13 >> 3) {
      v7 = v14;
    }
  }
  v15 = *v7;
  v70 = 0;
  v71 = 0;
  v69 = 0;
  v16 = GameSideStoryData_12b50c0_alt1(*(_QWORD*)GameData_212c7b8[0], &v69);
  v18 = v69;
  v19 = v70;
  if (v69 == v70) {
    v20 = nullptr;
    if (v69 != 0) {
    LABEL_21:
      v70 = v18;
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      v16 = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
    }
  }
  else {
    do {
      v20 = *(__int64**)v18;
      v16 = *(_QWORD*)(**(_QWORD**)v18 + 200LL);
      if (v16 != 0) {
        v16 = game_gmap_SpotMgr_FindSpot_alt1(v16);
        if (v16 == v15 && *((_BYTE*)v20 + 8) == 3) {
          v18 = v69;
          if (v69 == 0) {
            goto LABEL_24;
          }
          goto LABEL_21;
        }
      }
      v18 += 8;
    } while (v18 != v19);
    v20 = nullptr;
    v18 = v69;
    if (v69 != 0) {
      goto LABEL_21;
    }
  }
LABEL_24:
  v22 = *(_DWORD*)(v1 + 224);
  if (v22 == 3) {
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 8;
    }
    *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = 19;
    v24 = *(_QWORD*)(*v2 + 8);
    v25 = *(__int64**)(v24 + 8);
    v26 = *(__int64**)(v24 + 16);
    v27 = *(_DWORD*)(v24 + 56);
    if (v27 < 0) {
      for (; v25 != v26; ++v25) {
        v28 = (__int64*)*v25;
        if (*(_QWORD*)(*v25 + 96) == 0 && v28[69] == 0) {
          goto LABEL_56;
        }
      }
    }
    else {
      while (v25 != v26) {
        v29 = (__int64*)*v25++;
        v28 = v29;
        if (*((_DWORD*)v29 + 21) == v27) {
          goto LABEL_56;
        }
      }
    }
    v28 = nullptr;
  LABEL_56:
    v36 = *((_DWORD*)v28 + 135);
    v10 = __OFSUB__(v36, 1);
    v37 = (unsigned int)(v36 - 1);
    if (((v37 & 0x80000000) != 0LL) == v10) {
      v38 = v28[3];
      v39 = v28[4] - v38;
      v40 = (__int64*)(v38 + 8LL * (unsigned int)v37);
      if (v37 < v39 >> 3) {
        v28 = v40;
      }
    }
    v41 = *(_QWORD*)GameData_21316c8;
    if (*(_QWORD*)GameData_21316c8 != 0 && game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
        GameData_22532c0 == 0) {
      v42 = *v28;
      v16 = game_gmap_SpotMgr_GetCurrentSpot_alt2(v16, v17);
      if (v42 != v16) {
        v16 = GameRoutine_1522300(v41, v42);
      }
    }
    goto LABEL_65;
  }
  if (v22 == 2) {
    v23 = 18;
  LABEL_27:
    *(_DWORD*)(*(_QWORD*)GameData_212d750 + 152LL) = v23;
    goto LABEL_65;
  }
  if (v20 != nullptr) {
    v30 = *v20;
    if (*v20 != 0) {
      v31 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ != 0 && *(_QWORD*)(v30 + 56) != 0) {
        *(_QWORD*)(game_GameModeData_instance_ + 32) = v30;
        v32 = *(_QWORD*)(v30 + 56);
        v33 = *(_DWORD*)(v31 + 92) & 0xFFFFFC7F;
        *(_QWORD*)(v31 + 16) = v32;
        *(_DWORD*)(v31 + 92) = v33;
        if (v32 != 0) {
          v34 = *(_DWORD*)(v32 + 184);
          if ((v34 & 0x800) != 0) {
            v33 |= 0x100u;
            *(_DWORD*)(v31 + 92) = v33;
            v34 = *(_DWORD*)(v32 + 184);
          }
          if ((v34 & 0x40) != 0) {
            v33 |= 0x80u;
            *(_DWORD*)(v31 + 92) = v33;
            v34 = *(_DWORD*)(v32 + 184);
          }
          v33 |= (4 * (_WORD)v34) & 0x200;
        }
        v35 = *(_BYTE*)(v31 + 56);
        *(_DWORD*)(v31 + 92) = v33 | 0x40;
        *(_BYTE*)(v31 + 57) = v35;
        if (GameData_21c9600 != 0) {
          *(_DWORD*)(GameData_21c9600 + 152) = 2;
        }
        v23 = 19;
        goto LABEL_27;
      }
    }
  }
LABEL_65:
  v43 = *(_QWORD*)(*v2 + 8);
  v44 = *(_DWORD*)(v43 + 56);
  v45 = *(__int64***)(v43 + 8);
  v46 = *(__int64***)(v43 + 16);
  if (v44 < 0) {
    for (; v45 != v46; ++v45) {
      v47 = *v45;
      if ((*v45)[12] == 0 && v47[69] == 0) {
        goto LABEL_79;
      }
    }
  LABEL_75:
    v49 = game_gmap_SpotMgr_GetCurrentSpot_alt2(v16, v17);
    goto LABEL_80;
  }
  if (v45 == v46) {
    goto LABEL_75;
  }
  while (1) {
    v48 = *v45++;
    v47 = v48;
    if (*((_DWORD*)v48 + 21) == v44) {
      break;
    }
    if (v45 == v46) {
      goto LABEL_75;
    }
  }
LABEL_79:
  v49 = *v47;
LABEL_80:
  SpotMgr_1333f20(v49);
  SpotMgr_1334560(*(_QWORD*)(*GameData_212c780 + 8));
  *(_DWORD*)(*(_QWORD*)GameData_21316c8 + 152LL) = 7;
  v50 = *(_QWORD*)(*v2 + 8);
  v51 = *(_DWORD*)(v50 + 56);
  v52 = *(__int64**)(v50 + 8);
  v53 = *(__int64**)(v50 + 16);
  if (v51 < 0) {
    for (; v52 != v53; ++v52) {
      v54 = *v52;
      if (*(_QWORD*)(*v52 + 96) == 0 && *(_QWORD*)(v54 + 552) == 0) {
        goto LABEL_87;
      }
    }
  }
  else {
    while (v52 != v53) {
      v55 = *v52++;
      v54 = v55;
      if (*(_DWORD*)(v55 + 84) == v51) {
        goto LABEL_87;
      }
    }
  }
  v54 = 0;
LABEL_87:
  v56 = *(_DWORD*)(v54 + 540);
  v10 = __OFSUB__(v56, 1);
  v57 = (unsigned int)(v56 - 1);
  if (((v57 & 0x80000000) != 0LL) == v10) {
    v58 = *(_QWORD*)(v54 + 24);
    v59 = *(_QWORD*)(v54 + 32) - v58;
    v60 = v58 + 8LL * (unsigned int)v57;
    if (v57 < v59 >> 3) {
      v54 = v60;
    }
  }
  result = GameRoutine_ae4320_alt1(*(_QWORD*)v54);
  if (result != 0) {
    v61 = result;
    v70 = *(_QWORD*)(result + 104);
    v69 = game_HashString(v70);
    result = game_VariableManager_SetFlag(&v69, 1);
    v62 = *(_BYTE**)(v61 + 96);
    if (v62 != nullptr && *v62 != 0 && *GameData_212d460[0] == 0) {
      v64 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
      GameRoutine_1130770(v64, v62, 0);
      v65 = *(_QWORD*)(v1 + 40);
      if (v65 != 0) {
        *(_QWORD*)(v65 + 48) = v64;
        *(_QWORD*)(v64 + 56) = *(_QWORD*)(v1 + 40);
      }
      *(_QWORD*)(v1 + 40) = v64;
      *(_QWORD*)(v64 + 24) = "talk::Seq";
      *(_QWORD*)(v64 + 32) = v1;
      *(_DWORD*)(v64 + 140) = game_HashString32_alt2();
      *(_QWORD*)(v64 + 64) = 0;
      *(_QWORD*)(v64 + 72) = 24;
      *(_QWORD*)(v64 + 80) = 1;
      v66 = GameData_2130228;
      *(_QWORD*)(v64 + 8) = GameData_2130228;
      *(_QWORD*)(v64 + 16) = v66;
      (*(void (**)(__int64))(*(_QWORD*)v64 + 32LL))(v64);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v64 + 136LL))(v64);
      if ((result & 1) != 0 && (*(_WORD*)(v64 + 136) & 0x100) == 0) {
        *(_WORD*)(v64 + 136) |= 0x100u;
      }
      v67 = *(_BYTE**)(v64 + 32);
      v68 = v67[138];
      if (v68 == 0) {
        result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v67 + 64LL))(
            *(_QWORD*)(v64 + 32));
        v68 = v67[138];
      }
      v67[138] = v68 + 1;
      *(_WORD*)(v64 + 136) |= 2u;
    }
  }
  return result;
}

void game_gmap_14d6b00()
{
  __int64 v0;
  __int64 v1;
  unsigned int v2;

  v0 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(__int64**)(v0 + 16), 0);
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
  *(_DWORD*)(v0 + 5856) = v2 & 0xFFFDFFFF;
}

__n128 game_gmap_14d6b80()
{
  __n128 result;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_hub_ProgressEventView_instance_ != 0) {
    return GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
  }
  return result;
}

__int64 game_gmap_1517ac0(__int64 a1, __int64 a2)
{
  __int64* v4;
  unsigned __int16* v5;
  __int64 v6;
  __int16 v7;
  int v8;
  __int64 v9;
  __int64 result;
  unsigned int v11;
  __int16 v12;
  int v13;
  __int128 v14;

  v4 = GameData_21316e0[0];
  *(_QWORD*)(a1 + 8) = 0;
  v5 = (unsigned __int16*)(a1 + 8);
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = v4 + 2;
  if (game_gmap_GmapClock_instance_ != 0) {
    v6 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v6 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  LOWORD(v14) = *(_WORD*)v6;
  *(_DWORD*)((char*)&v14 + 2) = *(_DWORD*)(v6 + 2);
  v7 = *(_WORD*)(v6 + 6);
  WORD5(v14) = 0;
  *(_DWORD*)((char*)&v14 + 6) = (unsigned __int16)(v7 + 6);
  Dir_70d7a0_alt1((unsigned __int16*)&v14);
  Dir_70ea50((void*)(a1 + 20), (__int16*)v6, (__int64)&v14);
  v8 = *(_DWORD*)(a1 + 28);
  *(_QWORD*)(a1 + 32) = a2;
  *(_BYTE*)(a1 + 42) = 0;
  *(_DWORD*)(a1 + 44) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_BYTE*)(a1 + 56) = 0;
  *(_WORD*)(a1 + 40) = 256;
  *(_QWORD*)a1 = game_gmap_SpotAttachmentRecruit_vtable;
  v9 = *(_QWORD*)(a1 + 20);
  *(_DWORD*)(a1 + 16) = v8;
  *(_QWORD*)v5 = v9;
  result = game_gmap_SpotAttachmentRecruit_GetData();
  v11 = *(unsigned __int8*)(result + 66);
  if (*(_BYTE*)(result + 66) != 0) {
    v12 = *(_WORD*)(a1 + 12);
    *(_DWORD*)(a1 + 16) = 0;
    *(_WORD*)(a1 + 12) = v12 + (v11 >> 2);
    *(_WORD*)(a1 + 14) += 6 * v11 - 24 * (v11 >> 2);
    result = (__int64)Dir_70d7a0_alt1(v5);
  }
  if (*(_BYTE*)(a2 + 116) == 1) {
    *((_QWORD*)&v14 + 1) = &GameData_1a8afc6;
    result = game_HashString_alt1((__int64)&GameData_1a8afc6);
    *(_QWORD*)&v14 = result;
    v13 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v14);
      if (result != 0) {
        v13 = *(_DWORD*)(result + 32);
      }
      else {
        v13 = 0;
      }
    }
    *(_DWORD*)(a1 + 44) = v13;
  }
  return result;
}

void game_gmap_151e2a0(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int128 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int128 v25;
  _QWORD* v26;
  __int64 v27;
  struct {
    __int64 v28;
    __int64 v29;
    char* v30;
  } v28_;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;

  v3 = *(_QWORD*)(GameData_21c9ef0 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21c9ef0 + 72) - v3) >> 3) <
      1) {
    return;
  }
  v4 = 16;
  v8 = 0;
  do {
    v28_.v29 = 0;
    v28_.v30 = nullptr;
    v28_.v28 = 0;
    v10 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v8) + 32LL);
    if (v10 != 0) {
      GameRoutine_60a020((__int64)&v28_.v28, v10);
    }
    else {
      BYTE5(v28_.v28) = 0;
      LOBYTE(v28_.v28) = 8;
      *(_DWORD*)((char*)&v28_.v28 + 1) = 1701736270;
    }
    GameRoutine_1a09ce0(&v28_.v28, "_Pos", 4);
    if ((v28_.v28 & 1) != 0) {
      v11 = v28_.v30;
    }
    else {
      v11 = (char*)&v28_.v28 + 1;
    }
    v12 = GameRoutine_609260((float*)(a2 + 800), (__int64)v11, 1);
    v13 = *(_QWORD*)(a1 + 312);
    if ((a3 & 1) != 0) {
      v14 = *(_QWORD*)(v12 + 24);
      if (v14 != 0) {
        sscanf(v14, "%f,%f,%f", &v33, &v32, &v31);
        *(_QWORD*)&v15 = v33 | ((unsigned __int64)v32 << 32);
        *((_QWORD*)&v15 + 1) = v31;
        *(_OWORD*)(v13 + v4) = v15;
        if ((v28_.v28 & 1) == 0) {
          goto LABEL_3;
        }
      }
      else {
        v16 = (_QWORD*)(v13 + v4);
        *v16 = 0;
        v16[1] = 0;
        if ((v28_.v28 & 1) == 0) {
          goto LABEL_3;
        }
      }
    }
    else {
      GameRoutine_609140(v12, (__int64)"%f,%f,%f",
                         COERCE_FLOAT(*(_OWORD*)(v13 + v4)),
                         COERCE_FLOAT(HIDWORD(*(_QWORD*)(v13 + v4))),
                         COERCE_FLOAT(*(_QWORD*)(v13 + v4 + 8)));
      if ((v28_.v28 & 1) == 0) {
        goto LABEL_3;
      }
    }
    if (v28_.v30 != nullptr) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
    }
  LABEL_3:
    ++v8;
    v4 += 48;
    v3 = *(_QWORD*)(GameData_21c9ef0 + 64);
    v9 = (unsigned __int64)(*(_QWORD*)(GameData_21c9ef0 + 72) - v3) >> 3;
  } while (v8 < (int)v9);
  if ((int)v9 >= 1) {
    v18 = 32;
    v19 = 0;
    do {
      v28_.v29 = 0;
      v28_.v30 = nullptr;
      v28_.v28 = 0;
      v20 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * v19) + 32LL);
      if (v20 != 0) {
        GameRoutine_60a020((__int64)&v28_.v28, v20);
      }
      else {
        BYTE5(v28_.v28) = 0;
        LOBYTE(v28_.v28) = 8;
        *(_DWORD*)((char*)&v28_.v28 + 1) = 1701736270;
      }
      GameRoutine_1a09ce0(&v28_.v28, "_Size", 5);
      if ((v28_.v28 & 1) != 0) {
        v21 = v28_.v30;
      }
      else {
        v21 = (char*)&v28_.v28 + 1;
      }
      v22 = GameRoutine_609260((float*)(a2 + 800), (__int64)v21, 1);
      v23 = *(_QWORD*)(a1 + 312);
      if ((a3 & 1) != 0) {
        v24 = *(_QWORD*)(v22 + 24);
        if (v24 != 0) {
          sscanf(v24, "%f,%f,%f", &v33, &v32, &v31);
          *(_QWORD*)&v25 = v33 | ((unsigned __int64)v32 << 32);
          *((_QWORD*)&v25 + 1) = v31;
          *(_OWORD*)(v23 + v18) = v25;
          if ((v28_.v28 & 1) != 0) {
            goto LABEL_37;
          }
        }
        else {
          v26 = (_QWORD*)(v23 + v18);
          *v26 = 0;
          v26[1] = 0;
          if ((v28_.v28 & 1) != 0) {
          LABEL_37:
            if (v28_.v30 != nullptr) {
              v27 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
            }
          }
        }
      }
      else {
        GameRoutine_609140(v22, (__int64)"%f,%f,%f",
                           COERCE_FLOAT(*(_OWORD*)(v23 + v18)),
                           COERCE_FLOAT(HIDWORD(*(_QWORD*)(v23 + v18))),
                           COERCE_FLOAT(*(_QWORD*)(v23 + v18 + 8)));
        if ((v28_.v28 & 1) != 0) {
          goto LABEL_37;
        }
      }
      ++v19;
      v18 += 48;
      v3 = *(_QWORD*)(GameData_21c9ef0 + 64);
    } while (
        v19 <
        (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9ef0 + 72) - v3) >> 3));
  }
}

__int64 game_gmap_151e620(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64 v6;
  int v7;
  const char* v8;
  float* v9;
  __int64 i;
  const char* v11;
  unsigned __int64 v12;
  const char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int128 v19;
  struct {
    _DWORD v20[4];
    const char* v21;
  } v20_;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;

  v6 = fs_609260(a2 + 800, "BlinkPattern", 1);
  v7 = *(_DWORD*)(a1 + 656);
  v20_.v20[0] = v7;
  if ((a3 & 1) != 0) {
    v8 = *(const char**)(v6 + 24);
    if (v8 != nullptr) {
      sscanf_alt1(v8, "%d", v20_.v20);
      v7 = v20_.v20[0];
    }
  }
  else {
    GameRoutine_609140(v6, (__int64)"%d", v7);
  }
  *(_DWORD*)(a1 + 656) = v7;
  v9 = (float*)(a1 + 272);
  for (i = 0; i != 20; i += 2) {
    v11 = (&GameData_204a2a0)[i];
    LOBYTE(v20_.v20[0]) = 24;
    strcpy((char*)v20_.v20 + 1, "RegionBlink_");
    v12 = strlen_alt1(v11);
    GameRoutine_1a09ce0_alt1((__int64)v20_.v20, v11, v12);
    if ((v20_.v20[0] & 1) != 0) {
      v13 = v20_.v21;
    }
    else {
      v13 = (char*)v20_.v20 + 1;
    }
    v14 = fs_609260(a2 + 800, v13, 1);
    if ((a3 & 1) != 0) {
      v15 = *(_QWORD*)(v14 + 24);
      if (v15 != 0) {
        if (*(_BYTE*)v15 == 48 && *(_BYTE*)(v15 + 1) == 120) {
          sscanf_alt1((const char*)v15, "%x", v9);
        }
        else {
          sscanf_alt1((const char*)v15, "%f", v9);
        }
        if ((v20_.v20[0] & 1) == 0) {
          goto LABEL_6;
        }
      }
      else {
        *v9 = 0x0.0p+0f;
        if ((v20_.v20[0] & 1) == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
      GameRoutine_609140(v14, (__int64)"0x%x (%f)", *(_DWORD*)v9, *v9);
      if ((v20_.v20[0] & 1) == 0) {
        goto LABEL_6;
      }
    }
    if (v20_.v21 != nullptr) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v20_.v21);
    }
  LABEL_6:
    ++v9;
  }
  v17 = fs_609260(a2 + 800, "RegionBlink_Color ", 1);
  if ((a3 & 1) == 0) {
    return GameRoutine_609140(v17, (__int64)"%f,%f,%f,%f",
                              COERCE_FLOAT(*(_OWORD*)(a1 + 640)),
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 640))),
                              COERCE_FLOAT(*(_QWORD*)(a1 + 648)),
                              COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 640))));
  }
  result = *(_QWORD*)(v17 + 24);
  if (result != 0) {
    result = sscanf_alt1((const char*)result, "%f,%f,%f,%f", v20_.v20, &v24,
                         &v23, &v22);
    *(_QWORD*)&v19 = __PAIR64__(v24, v20_.v20[0]);
    *((_QWORD*)&v19 + 1) = __PAIR64__(v22, v23);
  }
  else {
    v19 = (__typeof__(v19)){0};
  }
  *(_OWORD*)(a1 + 640) = v19;
  return result;
}

__n128 game_gmap_151fdd0(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  float* v6;
  char* v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  float* v13;
  _BYTE* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int128 v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __n128 result;
  __int64 v25;
  char v26;
  char v27[31];
  unsigned int v28;
  unsigned int v29;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v6 = (float*)(a1 + 496);
  v26 = 20;
  strcpy(v27, "SpotBlink_");
  GameRoutine_1a09ce0(&v26, "MIN_SIZE", 8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26 & 1) != 0) {
    v7 = *(char**)&v27[15];
  }
  else {
    v7 = v27;
  }
  v8 = GameRoutine_609260((float*)(a2 + 800), (__int64)v7, 1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((a3 & 1) != 0) {
    v9 = *(_BYTE**)(v8 + 24);
    if (v9 != nullptr) {
      if (*v9 == 48 && v9[1] == 120) {
        sscanf(v9, "%x", v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf(v9, "%f", v6),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v26 & 1) == 0) {
        goto LABEL_19;
      }
    }
    else {
      *v6 = 0x0.0p+0f;
      if ((v26 & 1) == 0) {
        goto LABEL_19;
      }
    }
  }
  else {
    GameRoutine_609140(v8, (__int64)"0x%x (%f)", *(_DWORD*)v6, *v6),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v26 & 1) == 0) {
      goto LABEL_19;
    }
  }
  if (*(_QWORD*)&v27[15] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v10),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_19:
  strcpy(v27, "SpotBlink_");
  v26 = 20;
  GameRoutine_1a09ce0(&v26, "MAX_SIZE", 8),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26 & 1) != 0) {
    v11 = *(char**)&v27[15];
  }
  else {
    v11 = v27;
  }
  v12 = GameRoutine_609260((float*)(a2 + 800), (__int64)v11, 1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v13 = (float*)(a1 + 500);
  if ((a3 & 1) != 0) {
    v14 = *(_BYTE**)(v12 + 24);
    if (v14 != nullptr) {
      if (*v14 == 48 && v14[1] == 120) {
        sscanf(v14, "%x", v13),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else {
        sscanf(v14, "%f", v13),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if ((v26 & 1) == 0) {
        goto LABEL_37;
      }
    }
    else {
      *v13 = 0x0.0p+0f;
      if ((v26 & 1) == 0) {
        goto LABEL_37;
      }
    }
  }
  else {
    GameRoutine_609140(v12, (__int64)"0x%x (%f)", *(_DWORD*)v13, *v13),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v26 & 1) == 0) {
      goto LABEL_37;
    }
  }
  if (*(_QWORD*)&v27[15] != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v15),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_37:
  v26 = 30;
  strcpy(v27, "SpotBlinkColor_");
  GameRoutine_1a09ce0(&v26, "RESONANCE_MIN", 13),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26 & 1) != 0) {
    v16 = *(char**)&v27[15];
  }
  else {
    v16 = v27;
  }
  v17 = GameRoutine_609260((float*)(a2 + 800), (__int64)v16, 1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((a3 & 1) != 0) {
    v18 = *(_QWORD*)(v17 + 24);
    if (v18 != 0) {
      sscanf(v18, "%f,%f,%f,%f", &v29, &v28, &v27[27], &v27[23]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(_QWORD*)&v19 = __PAIR64__(v28, v29);
      *((_QWORD*)&v19 + 1) =
          __PAIR64__(*(unsigned int*)&v27[23], *(unsigned int*)&v27[27]);
    }
    else {
      v19 = (__typeof__(v19)){0};
    }
    *(_OWORD*)(a1 + 512) = v19;
    if ((v26 & 1) == 0) {
      goto LABEL_51;
    }
  }
  else {
    GameRoutine_609140(v17, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 512)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 512))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 520)),
                       COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 512)))),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v26 & 1) == 0) {
      goto LABEL_51;
    }
  }
  if (*(_QWORD*)&v27[15] != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_51:
  strcpy(v27, "SpotBlinkColor_");
  v26 = 30;
  GameRoutine_1a09ce0(&v26, "RESONANCE_MAX", 13),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v26 & 1) != 0) {
    v21 = *(char**)&v27[15];
  }
  else {
    v21 = v27;
  }
  v22 = GameRoutine_609260((float*)(a2 + 800), (__int64)v21, 1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((a3 & 1) != 0) {
    v23 = *(_QWORD*)(v22 + 24);
    if (v23 != 0) {
      sscanf(v23, "%f,%f,%f,%f", &v29, &v28, &v27[27], &v27[23]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      LANES128(result).n128_u64[0] = __PAIR64__(v28, v29);
      LANES128(result).n128_u64[1] =
          __PAIR64__(*(unsigned int*)&v27[23], *(unsigned int*)&v27[27]);
    }
    else {
      result = (__typeof__(result)){0};
    }
    *(__n128*)(a1 + 528) = result;
    if ((v26 & 1) == 0) {
      return result;
    }
  }
  else {
    GameRoutine_609140(v22, (__int64)"%f,%f,%f,%f",
                       COERCE_FLOAT(*(_OWORD*)(a1 + 528)),
                       COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 528))),
                       COERCE_FLOAT(*(_QWORD*)(a1 + 536)),
                       COERCE_FLOAT(HIDWORD(*(_OWORD*)(a1 + 528)))),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((v26 & 1) == 0) {
      return result;
    }
  }
  if (*(_QWORD*)&v27[15] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  return result;
}

_BYTE* game_gmap_1520240(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  _DWORD* v3;
  __int64 i;
  char* v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float* v14;
  _BYTE* result;
  char v17;
  struct {
    char gap8_[1];
    char v18[15];
    char* v19;
  } v18_;

  v3 = (_DWORD*)(a1 + 544);
  for (i = 0; i != 26; i += 2) {
    v7 = (&GameData_204a350)[i];
    v17 = 12;
    strcpy(v18_.v18, "Layer_");
    v8 = strlen(v7);
    GameRoutine_1a09ce0(&v17, v7, v8);
    if ((v17 & 1) != 0) {
      v9 = v18_.v19;
    }
    else {
      v9 = v18_.v18;
    }
    v10 = GameRoutine_609260((float*)(a2 + 800), (__int64)v9, 1);
    if ((a3 & 1) != 0) {
      v11 = *(_QWORD*)(v10 + 24);
      if (v11 != 0) {
        sscanf(v11, "%d", v3);
        if ((v17 & 1) == 0) {
          goto LABEL_2;
        }
      }
      else {
        *v3 = 0;
        if ((v17 & 1) == 0) {
          goto LABEL_2;
        }
      }
    }
    else {
      GameRoutine_609140(v10, (__int64)"%d", *v3);
      if ((v17 & 1) == 0) {
        goto LABEL_2;
      }
    }
    if (v18_.v19 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    }
  LABEL_2:
    ++v3;
  }
  v13 = GameRoutine_609260((float*)(a2 + 800), (__int64)"LayerHeight", 1);
  v14 = (float*)(a1 + 668);
  if ((a3 & 1) == 0) {
    return (_BYTE*)GameRoutine_609140(v13, (__int64)"0x%x (%f)", *(_DWORD*)v14,
                                      *v14);
  }
  result = *(_BYTE**)(v13 + 24);
  if (result != nullptr) {
    if (*result == 48 && result[1] == 120) {
      return (_BYTE*)sscanf(result, "%x", v14);
    }
    else {
      return (_BYTE*)sscanf(result, "%f", v14);
    }
  }
  else {
    *v14 = 0x0.0p+0f;
  }
  return result;
}

__int64 game_gmap_1520ea0(__int64 a1)
{
  __int64 v1;
  char* v2;
  char* v3;
  unsigned __int64 v4;
  __int64 v5;
  char* v6;
  __int64 result;
  signed __int64 v8;
  __int64 v9;
  __int128 v10;
  struct {
    _QWORD v11[2];
    int v12;
  } v11_;
  _QWORD v13[25];

  v1 = GameData_2241428;
  v3 = *(char**)(GameData_2241428 + 8);
  v2 = *(char**)(GameData_2241428 + 16);
  if (v3 != v2) {
    v4 = v2 - v3 - 8;
    if ((~(_BYTE)v4 & 0x18) == 0) {
    LABEL_6:
      if (v4 >= 0x18) {
        for (v3 += 16;; v3 += 32) {
          if (*((_QWORD*)v3 - 2) == a1) {
            v3 -= 16;
            if (v3 != v2) {
              goto LABEL_18;
            }
            return 0;
          }
          if (*((_QWORD*)v3 - 1) == a1) {
            v3 -= 8;
            goto LABEL_17;
          }
          if (*(_QWORD*)v3 == a1) {
            goto LABEL_17;
          }
          if (*((_QWORD*)v3 + 1) == a1) {
            break;
          }
          v6 = v3 + 16;
          if (v6 == v2) {
            return 0;
          }
        }
        v3 += 8;
        if (v3 != v2) {
          goto LABEL_18;
        }
      }
      return 0;
    }
    v5 = ((unsigned __int8)((unsigned int)v4 >> 3) + 1) & 3;
    while (*(_QWORD*)v3 != a1) {
      v3 += 8;
      if (--v5 == 0) {
        goto LABEL_6;
      }
    }
  }
LABEL_17:
  if (v3 == v2) {
    return 0;
  }
LABEL_18:
  v8 = v2 - (v3 + 8);
  if (v2 != v3 + 8) {
    v9 = a1;
    memmove_alt1((__int64)v3, (__int64)(v3 + 8), v2 - (v3 + 8));
    a1 = v9;
  }
  *(_QWORD*)(v1 + 16) = &v3[v8];
  if (GameData_21f1618 != 0) {
    v10 = *(_OWORD*)(a1 + 32);
    v11_.v11[1] = *(_QWORD*)(a1 + 32);
    v11_.v12 = DWORD2(v10);
    v11_.v11[0] = GameData_212d1e0[0] + 2;
    snd_Fade_Fade_10c830_alt2((__int64)v13, 0x0.0p+0f);
    snd_playAt_ff5f0_alt1((__int64)"SE_SYS_GMAP_GoalPin_Remove",
                          (__int64)"SE_SYS_GMAP_GoalPin_Remove",
                          (__int64)v11_.v11, (__int64)v13, 0, 0x10001u, 0,
                          0x0.0p+0f, 0x1.0000000000000p+0f);
  }
  else {
    snd_Fade_Fade_10c830_alt2((__int64)v13, 0x0.0p+0f);
    snd_play_ff2d0_alt1((__int64)"SE_SYS_GMAP_GoalPin_Remove",
                        (__int64)"SE_SYS_GMAP_GoalPin_Remove", (__int64)v13, 0,
                        0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
  }
  snd_Fade_Destroy_Fade_alt1(v13);
  result = 1;
  if (*GameData_212d728[0] != 0) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  }
  return result;
}

__int64 game_gmap_1522160(__int64 result, long double a2)
{
  __int64 v2;
  __int64* v3;
  __int64* i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* j;
  __int64 v9;
  float32x4_t v10;
  __int128 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int128 v16;
  float32x4_t v17;
  long double v18;
  __int128 v19;
  __int128 v20;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v2 = result;
    v3 = GameData_212c790;
    for (i = *(__int64**)(*(_QWORD*)(*GameData_212c790 + 8) + 8LL);; ++i) {
      v5 = *i;
      if ((*(_QWORD*)(*i + 96) | *(_QWORD*)(*i + 552)) == 0 &&
          *(_DWORD*)(v5 + 84) == -1) {
        break;
      }
    }
    result = GameRoutine_133f780(v5, v2, 1, a2);
    v6 = *v3;
    v7 = game_GameModeData_instance_;
    for (j = *(__int64**)(*(_QWORD*)(*v3 + 8) + 8LL);; ++j) {
      v9 = *j;
      if ((*(_QWORD*)(*j + 96) | *(_QWORD*)(*j + 552)) == 0 &&
          *(_DWORD*)(v9 + 84) == -1) {
        break;
      }
    }
    v10 = COERCE_AS(float32x4_t, GameData_21c9630);
    *(_QWORD*)(v9 + 64) = GameData_21c9630;
    v11 = *(_OWORD*)(v9 + 64);
    *((_QWORD*)&v11 + 1) = LANES128(v10).n128_u32[2];
    *(_OWORD*)(v9 + 64) = v11;
    if (*(_DWORD*)(v7 + 60) == 3) {
      v12 = *(_QWORD*)(v6 + 8);
      v13 = *(__int64**)(v12 + 8);
      v14 = *(__int64**)(v12 + 16);
      while (v13 != v14) {
        v15 = *v13;
        if ((*(_QWORD*)(*v13 + 96) | *(_QWORD*)(*v13 + 552)) == 0 &&
            *(_DWORD*)(v15 + 84) == -1) {
          goto LABEL_19;
        }
        ++v13;
      }
    }
    v15 = 0;
  LABEL_19:
    DWORD1(v16) = 0;
    HIDWORD(v16) = 0;
    v17 = vsubq_f32(COERCE_AS(float32x4_t, 0), v10);
    if ((float)(vmuls_lane_f32(LANES128(v17).n128_f32[2], v17, 2) +
                (float)(LANES128(v17).n128_f32[0] *
                        LANES128(v17).n128_f32[0])) >= 0x1.0000000000000p-4) {
      LODWORD(v16) = LANES128(v17).n128_u32[0];
      DWORD2(v16) = LANES128(v17).n128_u32[2];
      v19 = v16;
      v20 = GameData_1a83090;
      v18 = GameRoutine_752d30(&v20, &v19);
      return UnitActor_81ab40(v15 + 112, *(float*)&v18 * 0x1.ca5dc00000000p+5,
                              -0x1.0000000000000p+0);
    }
  }
  return result;
}

void game_gmap_15230c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __n128 v3;
  long double v4;
  __n128 v5;
  long double v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int128 v10;
  __int64 v11;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w"));
  game_gmap_133f780(*(_QWORD*)(a1 + 152), *(_DWORD**)(a1 + 160), 1),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v2 = *(_QWORD*)(a1 + 152);
  v3 = COERCE_AS(__n128, *GameData_212c680);
  *(_QWORD*)(v2 + 64) = *(_QWORD*)GameData_212c680;
  v4 = *(long double*)(v2 + 64);
  *((_QWORD*)&v4 + 1) = LANES128(v3).n128_u32[2];
  *(long double*)(v2 + 64) = v4;
  game_gmap_133de90(*(_QWORD*)(a1 + 152), 0, v3, v4),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w"));
  game_gmap_133de90(*(_QWORD*)(a1 + 152), 4, v5, v6),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w"));
  game_gmap_anonymous_1523820_alt1(a1, 1),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0 &&
      (*(_BYTE*)(a1 + 188) & 1) == 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v7 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v8 = 2)
             : (v8 = 3),
         (v8 & v7) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_22;
      }
      v9 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v9 + 172) == *(float*)(v9 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v9 + 160) + 16LL))(v9 + 160),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v6 = COERCE_AS(__typeof__(v6), PSEUDO_REGISTER(__n128, "v1", "=w"));
      }
      else {
        v10 = *(_OWORD*)(v9 + 208);
      }
      if (*((float*)&v10 + 3) != 0x1.0000000000000p+0f ||
          LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                       (_QWORD*)(*(_QWORD*)(v9 + 160) + 16LL))(
                          v9 + 160, *((float*)&v10 + 3)))
                  .n128_f32[3] != 0x1.0000000000000p+0f) {
      LABEL_22:
        if (game_GameModeData_instance_ != 0) {
          v11 = *(_QWORD*)(a1 + 152);
          if (v11 != 0 && *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
            GmapSound_1530b00(*(_QWORD*)(GameData_21f1648 + 8), v11),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v6 = COERCE_AS(__typeof__(v6),
                               PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
      }
    }
  }
}

__int64 game_gmap_1523240(__int64 result)
{
  int8x16_t v3;
  float32x4_t v4;
  __int64 v5;
  float v6;
  int8x16_t v7;
  __int128 v8;

  LANES128(v3).n128_u32[1] = 0;
  LANES128(v3).n128_u32[3] = 0;
  v4 = vsubq_f32(COERCE_AS(float32x4_t, 0), *(float32x4_t*)GameData_212c680);
  if ((float)(vmuls_lane_f32(LANES128(v4).n128_f32[2], v4, 2) +
              (float)(LANES128(v4).n128_f32[0] * LANES128(v4).n128_f32[0])) >=
      0x1.0000000000000p-4f) {
    LANES128(v3).n128_u32[0] = LANES128(v4).n128_u32[0];
    v5 = *(_QWORD*)(result + 152);
    LANES128(v3).n128_u32[2] = LANES128(v4).n128_u32[2];
    v7 = v3;
    v8 = GameData_1a83090;
    v6 = MapUtil_752d30((int8x16_t*)&v8, &v7);
    return UnitActor_81ab40_alt1(v5 + 112, v6 * 0x1.ca5dc00000000p+5f,
                                 -0x1.0000000000000p+0f);
  }
  return result;
}

__int64 game_gmap_1523320(__int64 result, __n128 a2)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;

  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0 &&
      (*(_BYTE*)(result + 188) & 1) != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v3 = 2)
             : (v3 = 3),
         (v3 & v2) != 0)) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_17;
      }
      v4 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
        v5 = result;
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
        result = v5;
      }
      else {
        a2 = *(__n128*)(v4 + 208);
      }
      LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3];
      if (LANES128(a2).n128_f32[3] != 1.0 ||
          (v6 = result,
           a2 = ((__n128 (*)(unsigned __int64, float)) *
                 (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
               v4 + 160, LANES128(a2).n128_f32[3]),
           LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3], result = v6,
           LANES128(a2).n128_f32[3] != 1.0)) {
      LABEL_17:
        if (game_GameModeData_instance_ != 0 && *(_QWORD*)(result + 152) != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          return GameRoutine_1530b00(*(_QWORD*)(GameData_21f1648 + 8),
                                     *(long double*)&a2);
        }
      }
    }
  }
  return result;
}

void game_gmap_1523f70(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  unsigned int* v3;
  __int64 v6;
  float v7;
  __int64 v8;
  unsigned int v9;
  __int128 v10;
  float32x4_t* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int8x16_t v15;
  int8x16_t v16;
  int8x16_t v17;
  int8x16_t v18;
  int8x16_t v19;
  int8x16_t v20;
  __n64 v21;
  float v22;
  float v23;
  __int64 v24;
  unsigned __int64 v25;
  int8x16_t v26[4];
  int8x16_t v27[4];

  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v1 = *(_QWORD*)(a1 + 152);
  v3 = game_gmap_SpotMgr_GetCurrentSpot_alt1(),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  game_gmap_133f780(v1, v3, 1),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  game_gmap_133de90_alt2(*(_QWORD*)(a1 + 152), 0),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v6 = *(_QWORD*)(a1 + 152);
  v27[0] = COERCE_AS(int8x16_t, GameData_1a83090);
  v26[0] = COERCE_AS(int8x16_t, GameData_1a83090);
  v7 = MapUtil_752d30(v27, v26),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  UnitActor_81ab40_alt1(v6 + 112, v7 * 0x1.ca5dc00000000p+5f,
                        -0x1.0000000000000p+0f),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v8 = *(_QWORD*)(a1 + 152);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v24 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v24;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
  v9 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v8 + 64) = GameData_21a6120;
  v10 = *(_OWORD*)(v8 + 64);
  *((_QWORD*)&v10 + 1) = v9;
  *(_OWORD*)(v8 + 64) = v10;
  v11 = (float32x4_t*)game_gmap_SpotMgr_GetCurrentSpot_alt1(),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  v14 = *(_QWORD*)(v12 + 24);
  v13 = *(_QWORD*)(v12 + 32);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v27[0] = COERCE_INT8X16_T(
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v14 + 16LL))(v14)),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v27[1] = v15;
  v27[2] = v16;
  v27[3] = v17;
  v26[0] = COERCE_INT8X16_T(
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v14 + 24LL))(v14)),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v26[1] = v18;
  v26[2] = v19;
  v26[3] = v20;
  LANES64(v21).n64_u64[0] =
      LANES64_OF(GameRoutine_a6c440_alt1(v11 + 2, (__int128*)v27, v26))
          .n64_u64[0],
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  v23 = v22;
  if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    v25 = LANES64(v21).n64_u64[0];
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    std___1___shared_weak_count___release_weak_alt2(v13),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
    LANES64(v21).n64_u64[0] = v25;
    if (v23 > 0x0.0p+0f) {
      return;
    }
  }
  else if (v22 > 0x0.0p+0f) {
    return;
  }
  if (LANES64(v21).n64_f32[0] >= 0x0.0p+0f &&
      LANES64(v21).n64_f32[0] <= 0x1.e000000000000p+10f &&
      LANES64(v21).n64_f32[1] >= 0x0.0p+0f &&
      LANES64(v21).n64_f32[1] <= 0x1.0e00000000000p+10f) {
    game_gmap_anonymous_1523820_alt1(a1, 1),
        v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v3", "=w")),
        v18 = COERCE_AS(__typeof__(v18), PSEUDO_REGISTER(__n128, "v1", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(__n128, "v2", "=w")),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(__n128, "v3", "=w"));
  }
}

void game_gmap_1524170()
{
  __int64* v0;

  TroopMgr_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
  v0 = GameData_212d728[0];
  GameRoutine_175bde0(*(_QWORD*)(*GameData_212d728[0] + 8) + 5800LL);
  game_19a0e60(*(_QWORD*)(*v0 + 8) + 32LL);
}

__int64 game_gmap_15241d0(__int64 result)
{

#pragma clang fp contract(off)
  _DWORD* v1;
  float32x4_t** v2;
  float32x4_t* v3;
  float32x4_t* v4;
  const char* v5;
  unsigned __int64 v6;
  float32x4_t v7;
  unsigned int v8;
  float32x4_t v9;
  int v10;
  __int64 v11;
  int v12;
  bool v13;
  float32x4_t v14;
  float* v15;
  __int64 v16;
  __int64* v17;
  unsigned int v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  float32x4_t v23;
  float32x4_t v24;
  struct {
    __int64 v25;
    char* v26;
    const char* v27;
    int v28;
    char gap60_[4];
    float32x4_t v29;
    __int128 v30;
    __int64 v31;
    __int64 v32;
  } v25_;

  v18 = COERCE_AS(__typeof__(v18),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v1 = *(_DWORD**)(result + 8);
  v2 = (float32x4_t**)result;
  if (*(_QWORD*)v1 == 0 || *(_DWORD*)(*(_QWORD*)v1 + 16LL) != v1[2]) {
    v3 = *(float32x4_t**)result;
    v24 = (__typeof__(v24)){0};
    game_gmap_133ffb0(v3, &v24),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = *v2;
    v5 = "Gmap_HadesDoor_Barrier_S";
    v6 = LANES128((*v2)[6]).n128_u64[0];
    LANES128(v7).n128_u32[0] = *(_DWORD*)(v6 + 120);
    v8 = *(unsigned __int8*)(v6 + 32) - 3;
    LANES128(v7).n128_f32[2] = *(float*)(v6 + 124) + 0x1.4000000000000p+2f;
    v9 = vaddq_f32(vaddq_f32(v24, (*v2)[4]), v7);
    v24 = v9;
    if (v8 <= 1) {
      v10 = *(unsigned __int8*)(v6 + 131);
      v23 = v9;
      v25_.v26 = (char*)&GameData_1ada5b4;
      v25_.v25 = game_HashString_alt1((__int64)&GameData_1ada5b4),
      v18 = COERCE_AS(__typeof__(v18),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (game_GameModeData_instance_ != 0 &&
          (v11 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v25_.v25)) != 0) {
        v12 = *(_DWORD*)(v11 + 32) + 1;
      }
      else {
        v12 = 1;
      }
      v9 = v23;
      v13 = v12 < v10;
      v4 = *v2;
      if (v13) {
        v5 = "Gmap_HadesDoor_Barrier";
      }
    }
    v14 = v4[3];
    v25_.v25 = 0;
    v25_.v26 = nullptr;
    v15 = (float*)*eft_g_effectSystem_ptr[0];
    v25_.v28 = 5;
    v25_.v29 = vaddq_f32(v9, v14);
    v25_.v30 = GameData_1a837f0;
    v25_.v27 = v5;
    v16 = *((_QWORD*)GameData_212c540 + 1);
    v25_.v31 = *(_QWORD*)GameData_212c540;
    v25_.v32 = v16;
    v17 = Manager_bc6460_alt2(v15, (__int64)&v25_.v25, 1),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = GameHr_14a10d0(&v25_.v25, (__int64)v17, v18,
                            (__int64)&GameData_1a9f09e),
    v18 = COERCE_AS(__typeof__(v18),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v19 = v25_.v25;
    v20 = (__int64)v25_.v26;
    if (v25_.v26 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v25_.v26 + 8), 1u,
                                memory_order_relaxed);
    }
    v21 = (__int64)v2[2];
    v2[1] = (float32x4_t*)v19;
    v2[2] = (float32x4_t*)v20;
    if (v21 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak_alt2(v21),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      v20 = (__int64)v2[2];
    }
    if (v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20),
            v18 = COERCE_AS(__typeof__(v18),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        result = std___1___shared_weak_count___release_weak_alt2(v20),
        v18 = COERCE_AS(__typeof__(v18),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
    v22 = (__int64)v25_.v26;
    if (v25_.v26 != nullptr &&
        atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
          v18 = COERCE_AS(__typeof__(v18),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return std___1___shared_weak_count___release_weak_alt2(v22);
    }
  }
  return result;
}

void game_gmap_1524f30(__int64 a1)
{
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  __int64* v6;
  unsigned __int8* v7;
  unsigned int v8;
  bool v9;
  int v10;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_14;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 1.0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 1.0f) {
      goto LABEL_14;
    }
  }
  v6 = GameData_212d718;
  Camera_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                 *(_QWORD*)(*GameData_212d708 + 16) + 80LL, 0);
  if (*(float*)(*(_QWORD*)(*v6 + 16) + 796LL) ==
      *(float*)(*(_QWORD*)(*v6 + 16) + 792LL)) {
  LABEL_14:
    v7 = *(unsigned __int8**)(a1 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      v9 = v8 > 0x10;
      v10 = (1 << v8) & 0x1CE00;
      if (!v9 && v10 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
  }
}

__int64 game_gmap_1528ab0(__int64 result)
{
  const char* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;

  if ((*(_BYTE*)(result + 240) & 1) != 0) {
    v1 = *(const char**)(result + 256);
  }
  else {
    v1 = (const char*)(result + 241);
  }
  if (GameData_21ec7b8 == 0 && v1 != nullptr) {
    v3 = result;
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v1, nullptr);
    v5 = *(_QWORD*)(v3 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt3("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

void game_gmap_1529760(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  __int64 v3;
  __int64* v4;
  unsigned int v5;
  long double v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  _QWORD v11[2];
  struct {
    float32x4_t v12;
    const char* v13;
    int v14;
    char gap44_[4];
    __int64 v15;
    __int64 v16;
    __int128 v17;
    __int64 v18;
    __int64 v19;
  } v12_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(*(_QWORD*)(a1 + 264) + 160LL) + 16LL))(
      (void*)(v11), *(_QWORD*)(a1 + 264) + 160LL),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12_.v12 = (__typeof__(v12_.v12)){0};
  v2 = (_QWORD*)*eft_g_effectSystem_ptr[0];
  v12_.v14 = 5;
  v12_.v15 = v11[0];
  v12_.v16 = v11[1];
  v12_.v17 = GameData_1a837f0;
  v3 = *((_QWORD*)GameData_212c540 + 1);
  v12_.v18 = *(_QWORD*)GameData_212c540;
  v12_.v19 = v3;
  v12_.v13 = "Gmap_Event_Date_Done";
  v4 = Manager_bc6460(v2, &v12_.v12, 1),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(__n128*)&v6 = GameRoutine_14a10d0(&v12_.v12, (__int64)v4, v5,
                                      (__int64)&GameData_1a9f09e),
  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = LANES128(v12_.v12).n128_u64[1];
  v7 = LANES128(v12_.v12).n128_u64[0];
  if (LANES128(v12_.v12).n128_u64[1] != 0) {
    atomic_fetch_add_explicit(
        (atomic_ullong* volatile)(LANES128(v12_.v12).n128_u64[1] + 8), 1u,
        memory_order_relaxed);
  }
  v9 = *(_QWORD*)(a1 + 296);
  *(_QWORD*)(a1 + 288) = v7;
  *(_QWORD*)(a1 + 296) = v8;
  if (v9 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(v9, v6),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(__n128*)&v6 = std___1___shared_weak_count___release_weak(),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v8 = *(_QWORD*)(a1 + 296);
  }
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v8 + 16LL))(v8,
                                                                         v6),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      *(__n128*)&v6 = std___1___shared_weak_count___release_weak(),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v10 = LANES128(v12_.v12).n128_u64[1];
  if (LANES128(v12_.v12).n128_u64[1] != 0 &&
      atomic_fetch_add(
          (atomic_ullong* volatile)(LANES128(v12_.v12).n128_u64[1] + 8),
          0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(unsigned __int64, long double))(*(_QWORD*)v10 + 16LL))(v10,
                                                                        v6),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak(),
        v5 = COERCE_AS(__typeof__(v5),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  GameRoutine_14a1e70((__int64**)(a1 + 288), 0x1.e000000000000p+4f),
      v5 = COERCE_AS(__typeof__(v5),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(a1 + 276) = 0;
}

void game_gmap_152b340(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  unsigned __int8* v6;
  unsigned int v7;
  bool v8;
  int v9;
  __int16 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  unsigned int i;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  __int128 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 j;
  __int64 v34;
  _BYTE* v35;
  unsigned __int8 v36;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;
  struct {
    _QWORD v39[3];
    int v40;
    char gap44_[4];
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
  } v39_;

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_15;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    else {
      v5 = *(_OWORD*)(v4 + 208);
    }
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      goto LABEL_15;
    }
  }
  if (*GameData_21309c8[0] != 0 && *(_BYTE*)(*GameData_21309c8[0] + 8) == 2) {
  LABEL_15:
    v6 = *(unsigned __int8**)(a1 + 16);
    if (v6 != nullptr) {
      v7 = *v6;
      v8 = v7 > 0x10;
      v9 = (1 << v7) & 0x1CE00;
      if (!v8 && v9 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    v11 = 8;
    goto LABEL_22;
  }
  v12 = *(_QWORD*)(a1 + 152);
  v13 = *(_QWORD*)v12;
  if (*(_QWORD*)v12 != 0 && *(_DWORD*)(v13 + 16) == *(_DWORD*)(v12 + 8)) {
    goto LABEL_56;
  }
  v14 = Impl_1328300_alt1(*(_QWORD*)(a1 + 176)),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = "Bmap_Summon_Conron_Start";
  if (v14) {
    v15 = "Gmap_Summon_GodGate_Start";
  }
  v39_.v39[0] = 0;
  v39_.v39[1] = 0;
  v39_.v39[2] = v15;
  v16 = *((_QWORD*)GameData_212c540 + 1);
  v18 = *(_QWORD*)GameData_212c548;
  v17 = *((_QWORD*)GameData_212c548 + 1);
  v39_.v41 = *(_QWORD*)GameData_212c540;
  v39_.v42 = v16;
  v39_.v45 = v39_.v41;
  v39_.v46 = v16;
  v39_.v43 = v18;
  v39_.v44 = v17;
  v39_.v40 = 5;
  v19 = Manager_bc6460_alt3(*(_QWORD**)eft_g_effectSystem_ptr[0],
                            (__int64)v39_.v39, 0),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameHr_14a10d0_alt1(&v37_.v37, (__int64)v19, v20, (__int64)&GameData_1a9f09e),
      v20 = COERCE_AS(__typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v21 = v37_.v37;
  v22 = v37_.v38;
  if (v37_.v38 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v37_.v38 + 8), 1u,
                              memory_order_relaxed);
  }
  v23 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = v21;
  *(_QWORD*)(a1 + 160) = v22;
  if (v23 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v23),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v22 = *(_QWORD*)(a1 + 160);
  }
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      std___1___shared_weak_count___release_weak_alt2(v22),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v24 = v37_.v38;
  if (v37_.v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37_.v38 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt2(v24),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v12 = *(_QWORD*)(a1 + 152);
  v13 = *(_QWORD*)v12;
  if (*(_QWORD*)v12 != 0) {
    if (*(_DWORD*)(v13 + 16) != *(_DWORD*)(v12 + 8)) {
      goto LABEL_56;
    }
    v25 = *(_DWORD*)(v13 + 36);
    if (v25 == 0) {
      goto LABEL_69;
    }
    for (i = 0; i < v25; ++i) {
      if ((int)v25 > (int)i) {
        v27 = *(_QWORD*)(v13 + 40 + 8LL * (int)i);
        if (v27 != 0) {
          *(_OWORD*)(v27 + 32) = GameData_1a83390;
          *(_BYTE*)(v27 + 128) = 1;
          v25 = *(_DWORD*)(v13 + 36);
        }
      }
    }
    v12 = *(_QWORD*)(a1 + 152);
    v13 = *(_QWORD*)v12;
    if (*(_QWORD*)v12 != 0) {
    LABEL_69:
      if (*(_DWORD*)(v13 + 16) == *(_DWORD*)(v12 + 8)) {
        v28 = *(_DWORD*)(v13 + 36);
        if (v28 != 0) {
          v29 = 0;
          v30 = *(_OWORD*)(*(_QWORD*)(a1 + 176) + 32LL);
          do {
            if ((int)v28 > (int)v29) {
              v31 = *(_QWORD*)(v13 + 40 + 8LL * (int)v29);
              if (v31 != 0) {
                *(_OWORD*)(v31 + 16) = v30;
                *(_BYTE*)(v31 + 128) = 1;
                v28 = *(_DWORD*)(v13 + 36);
              }
            }
            ++v29;
          } while (v29 < v28);
        }
      }
    }
    game_14a3920(v12),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v12 = *(_QWORD*)(a1 + 152);
    v13 = *(_QWORD*)v12;
    if (*(_QWORD*)v12 != 0) {
    LABEL_56:
      if (*(_DWORD*)(v13 + 16) == *(_DWORD*)(v12 + 8)) {
        v32 = *(unsigned int*)(v13 + 36);
        if ((_DWORD)v32 != 0) {
          for (j = 0; j < v32; ++j) {
            v34 = *(_QWORD*)(v13 + 40 + 8 * j);
            if (v34 != 0) {
              if (((*(__int64 (**)(__int64))(*(_QWORD*)v34 + 96LL))(v34) & 1) !=
                  0) {
                return;
              }
              v32 = *(unsigned int*)(v13 + 36);
            }
          }
        }
        v35 = *(_BYTE**)(a1 + 16);
        if (v35 != nullptr) {
          v36 = *v35 - 9;
          if (v36 <= 7u && ((0xE7u >> v36) & 1) != 0) {
            v11 = 128;
          LABEL_22:
            *(_WORD*)(a1 + 136) |= v11;
          }
        }
      }
    }
  }
}

__int64 game_gmap_152b740(__int64 a1)
{
  float v1;
  int v2;
  int v3;
  unsigned __int64 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  float v8;
  _DWORD* v9;
  _DWORD* v10;
  __int64 v11;
  __int128 v12;
  __int128 v13;

  v1 = *(float*)(game_script_hub_g_frame_counter + 160) + *(float*)(a1 + 192);
  *(float*)(a1 + 192) = v1;
  if (v1 < 10.0f) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v3 = 2)
             : (v3 = 3),
         (v3 & v2) != 0)) {
      if (game_ProcFadeView_instance_ == 0 ||
          (*(float*)((v4 = game_ProcFadeView_instance_ +
                           ((unsigned __int64)*(
                                unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
                            << 6)) +
                     172) != *(float*)(v4 + 168)
               ? (v6 = *(_OWORD*)(v4 + 208))
               : (v5 = a1,
                  (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(
                      v4 + 160),
                  a1 = v5),
           *((float*)&v6 + 3) != 1.0f ||
               (v7 = a1,
                LODWORD(v8) =
                    LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                 (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                                    v4 + 160, *((float*)&v6 + 3)))
                        .n128_u32[3],
                a1 = v7, v8 != 1.0f))) {
        if (GameData_22400f8 == 0 || *(_BYTE*)(GameData_22400f8 + 8) != 2) {
          return 1;
        }
      }
    }
  }
  *(_DWORD*)(a1 + 192) = 0;
  v9 = *(_DWORD**)(a1 + 168);
  v10 = *(_DWORD**)(a1 + 184);
  v11 = *(_QWORD*)(*GameData_212d708 + 16);
  *(_DWORD*)(v11 + 224) = v9[12];
  *(_DWORD*)(v11 + 228) = v9[13];
  v12 = *(_OWORD*)(v11 + 224);
  DWORD2(v12) = v9[14];
  LODWORD(v9) = *(unsigned __int8*)(v11 + 208);
  *((_QWORD*)&v12 + 1) = DWORD2(v12);
  *(_OWORD*)(v11 + 224) = v12;
  if ((_DWORD)v9 == 1) {
    *(_DWORD*)(v11 + 192) = v10[8];
    *(_DWORD*)(v11 + 196) = v10[9];
    v13 = *(_OWORD*)(v11 + 192);
    *((_QWORD*)&v13 + 1) = (unsigned int)v10[10];
    *(_OWORD*)(v11 + 192) = v13;
  }
  else {
    *(_QWORD*)(v11 + 200) = *((_QWORD*)v10 + 5);
    *(_QWORD*)(v11 + 192) = *((_QWORD*)v10 + 4);
    *(_BYTE*)(v11 + 208) = 1;
  }
  *(_QWORD*)(v11 + 240) = 1106247680;
  game_gmap_1340560_alt1(*(_QWORD*)(a1 + 168), 2);
  return 0;
}

__int64 game_gmap_152b970(__int64 a1)
{
  float v1;
  int v2;
  int v3;
  unsigned __int64 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  float v8;
  unsigned int v9;

  v1 = *(float*)(game_script_hub_g_frame_counter + 160) + *(float*)(a1 + 192);
  *(float*)(a1 + 192) = v1;
  if (v1 >= 30.0f) {
    goto LABEL_16;
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_16;
    }
  }
  if (game_ProcFadeView_instance_ != 0 &&
          (*(float*)((v4 = game_ProcFadeView_instance_ +
                           ((unsigned __int64)*(
                                unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
                            << 6)) +
                     172) != *(float*)(v4 + 168)
               ? (v6 = *(_OWORD*)(v4 + 208))
               : (v5 = a1,
                  (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(
                      v4 + 160),
                  a1 = v5),
           *((float*)&v6 + 3) == 1.0f &&
               (v7 = a1,
                LODWORD(v8) =
                    LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                 (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                                    v4 + 160, *((float*)&v6 + 3)))
                        .n128_u32[3],
                a1 = v7, v8 == 1.0f)) ||
      GameData_22400f8 != 0 && *(_BYTE*)(GameData_22400f8 + 8) == 2) {
  LABEL_16:
    v9 = 0;
    *(_DWORD*)(a1 + 192) = 0;
  }
  else {
    return 1;
  }
  return v9;
}

__int64 game_gmap_152ba90(__int64 result)
{
  __int64 v1;
  float32x4_t* v2;
  __int64 v3;
  float v4;
  float v5;
  float32x4_t v6;
  float v7;
  float v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  float v14;
  float32x4_t v15;

  v1 = result;
  v2 = *(float32x4_t**)(*GameData_212d708 + 16);
  if (LANES128(v2[13]).n128_u8[0] == 1) {
    v3 = *(_QWORD*)(*GameData_212d708 + 16);
    v4 = LANES128(v2[15]).n128_f32[0];
    v5 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL) +
         LANES128(v2[15]).n128_f32[1];
    v6 = v2[14];
    LANES128(v2[15]).n128_f32[1] = v5;
    v7 = v5 / v4;
    if (v7 <= 1.0f) {
      v8 = v7;
    }
    else {
      v8 = 1.0f;
    }
    v14 = v8;
    v15 = vaddq_f32(vmulq_n_f32(v2[12], v8), vmulq_n_f32(v6, 1.0f - v8));
    result = GameRoutine_1317f10_alt1(v3, &v15);
    if (v14 != 1.0f) {
      return result;
    }
    if (LANES128(v2[13]).n128_u8[0] == 1) {
      LANES128(v2[13]).n128_u8[0] = 0;
    }
  }
  v9 = *(unsigned __int8**)(v1 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v11 = v10 > 0x10;
    v12 = (1 << v10) & 0x1CE00;
    if (!v11 && v12 != 0) {
      *(_WORD*)(v1 + 136) |= 0x80u;
    }
  }
  return result;
}

__int64 game_gmap_152bb80(__int64 a1, __n128 a2, long double a3)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  unsigned __int64 v6;
  __int64 result;
  unsigned __int8* v8;
  unsigned int v9;
  bool v10;
  int v11;
  __int16 v13;
  bool v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  unsigned int i;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  __int128 v31;
  __int64 v32;
  __n128 v33;
  long double v34;
  __int64* v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 j;
  __int64 v39;
  _BYTE* v40;
  unsigned __int8 v41;
  struct {
    __int64 v42;
    __int64 v43;
  } v42_;
  struct {
    _QWORD v44[3];
    int v45;
    char gap44_[4];
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
  } v44_;

  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v1", "=w"));
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v5 = 2)
           : (v5 = 3),
       (v5 & v4) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_14;
    }
    v6 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    LODWORD(a3) = *(_DWORD*)(v6 + 168);
    if (*(float*)(v6 + 172) == *(float*)&a3) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) + 16LL))(v6 + 160),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v1", "=w"));
    }
    else {
      a2 = *(__n128*)(v6 + 208);
    }
    LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3];
    if (LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0f ||
        (a2 = ((__n128 (*)(unsigned __int64, float)) *
               (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
             v6 + 160, LANES128(a2).n128_f32[3]),
         LANES128(a2).n128_u32[0] = LANES128(a2).n128_u32[3],
         LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0f)) {
    LABEL_14:
      if (*GameData_21309c8[0] == 0 ||
          *(_BYTE*)(*GameData_21309c8[0] + 8) != 2) {
        v14 = Impl_1328300_alt1(*(_QWORD*)(a1 + 176)),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v15 = "Bmap_Summon_Conron_Hit";
        if (v14) {
          v15 = "Gmap_Summon_GodGate_Hit";
        }
        v44_.v44[0] = 0;
        v44_.v44[1] = 0;
        v44_.v44[2] = v15;
        v16 = *((_QWORD*)GameData_212c540 + 1);
        v18 = *(_QWORD*)GameData_212c548;
        v17 = *((_QWORD*)GameData_212c548 + 1);
        v44_.v46 = *(_QWORD*)GameData_212c540;
        v44_.v47 = v16;
        v44_.v50 = v44_.v46;
        v44_.v51 = v16;
        v44_.v48 = v18;
        v44_.v49 = v17;
        v44_.v45 = 5;
        v19 = Manager_bc6460_alt3(*(_QWORD**)eft_g_effectSystem_ptr[0],
                                  (__int64)v44_.v44, 0),
        v20 = COERCE_AS(__typeof__(v20),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v1", "=w"));
        GameHr_14a10d0_alt1(&v42_.v42, (__int64)v19, v20,
                            (__int64)&GameData_1a9f09e),
            v20 = COERCE_AS(__typeof__(v20),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v33 =
                COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v34 =
                COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v1", "=w"));
        v21 = v42_.v42;
        v22 = v42_.v43;
        if (v42_.v43 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v42_.v43 + 8), 1u,
                                    memory_order_relaxed);
        }
        v23 = *(_QWORD*)(a1 + 160);
        *(_QWORD*)(a1 + 152) = v21;
        *(_QWORD*)(a1 + 160) = v22;
        if (v23 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
            std___1___shared_weak_count___release_weak_alt2(v23),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
          v22 = *(_QWORD*)(a1 + 160);
        }
        if (v22 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
            std___1___shared_weak_count___release_weak_alt2(v22),
                v20 =
                    COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v33 = COERCE_AS(__typeof__(v33),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v34 = COERCE_AS(__typeof__(v34),
                                PSEUDO_REGISTER(__n128, "v1", "=w"));
          }
        }
        v24 = v42_.v43;
        if (v42_.v43 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v42_.v43 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          std___1___shared_weak_count___release_weak_alt2(v24),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
        }
        result = *(_QWORD*)(a1 + 152);
        v25 = *(_QWORD*)result;
        if (*(_QWORD*)result != 0 &&
            *(_DWORD*)(v25 + 16) == *(_DWORD*)(result + 8)) {
          v26 = *(_DWORD*)(v25 + 36);
          if (v26 == 0) {
            goto LABEL_67;
          }
          for (i = 0; i < v26; ++i) {
            if ((int)v26 > (int)i) {
              v28 = *(_QWORD*)(v25 + 40 + 8LL * (int)i);
              if (v28 != 0) {
                *(_OWORD*)(v28 + 32) = GameData_1a83390;
                *(_BYTE*)(v28 + 128) = 1;
                v26 = *(_DWORD*)(v25 + 36);
              }
            }
          }
          result = *(_QWORD*)(a1 + 152);
          v25 = *(_QWORD*)result;
          if (*(_QWORD*)result != 0) {
          LABEL_67:
            if (*(_DWORD*)(v25 + 16) == *(_DWORD*)(result + 8)) {
              v29 = *(_DWORD*)(v25 + 36);
              if (v29 != 0) {
                v30 = 0;
                v31 = *(_OWORD*)(*(_QWORD*)(a1 + 168) + 48LL);
                do {
                  if ((int)v29 > (int)v30) {
                    v32 = *(_QWORD*)(v25 + 40 + 8LL * (int)v30);
                    if (v32 != 0) {
                      *(_OWORD*)(v32 + 16) = v31;
                      *(_BYTE*)(v32 + 128) = 1;
                      v29 = *(_DWORD*)(v25 + 36);
                    }
                  }
                  ++v30;
                } while (v30 < v29);
              }
            }
          }
          game_14a3920(result),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v33 = COERCE_AS(__typeof__(v33),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v34 = COERCE_AS(__typeof__(v34),
                              PSEUDO_REGISTER(__n128, "v1", "=w"));
          v35 = *(__int64**)(a1 + 152);
          v36 = *v35;
          if (*v35 != 0 && *(_DWORD*)(v36 + 16) == *((_DWORD*)v35 + 2)) {
            v37 = *(unsigned int*)(v36 + 36);
            if ((_DWORD)v37 != 0) {
              for (j = 0; j < v37; ++j) {
                v39 = *(_QWORD*)(v36 + 40 + 8 * j);
                if (v39 != 0) {
                  result =
                      (*(__int64 (**)(__int64))(*(_QWORD*)v39 + 96LL))(v39),
                  v20 = COERCE_AS(
                      __typeof__(v20),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v33 = COERCE_AS(__typeof__(v33),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v34 = COERCE_AS(__typeof__(v34),
                                  PSEUDO_REGISTER(__n128, "v1", "=w"));
                  if ((result & 1) != 0) {
                    return result;
                  }
                  v37 = *(unsigned int*)(v36 + 36);
                }
              }
            }
          }
          result = game_gmap_133de90(*(_QWORD*)(a1 + 168), 2, v33, v34),
          v20 = COERCE_AS(__typeof__(v20),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v1", "=w"));
          v40 = *(_BYTE**)(a1 + 16);
          if (v40 != nullptr) {
            v41 = *v40 - 9;
            if (v41 <= 7u && ((0xE7u >> v41) & 1) != 0) {
              v13 = 128;
            LABEL_22:
              *(_WORD*)(a1 + 136) |= v13;
            }
          }
        }
        return result;
      }
    }
  }
  result = game_gmap_133de90(*(_QWORD*)(a1 + 168), 2, a2, a3),
  v20 = COERCE_AS(__typeof__(v20),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v33 = COERCE_AS(__typeof__(v33), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v34 = COERCE_AS(__typeof__(v34), PSEUDO_REGISTER(__n128, "v1", "=w"));
  v8 = *(unsigned __int8**)(a1 + 16);
  if (v8 != nullptr) {
    v9 = *v8;
    v10 = v9 > 0x10;
    v11 = (1 << v9) & 0x1CE00;
    if (!v10 && v11 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
  v13 = 8;
  goto LABEL_22;
}

#pragma GCC visibility pop
