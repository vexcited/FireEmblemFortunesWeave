#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_7c51c0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_886c80(void);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _DWORD GameData_21d925c[32];
extern _DWORD* GameData_212d168;
extern __int64 (*GameData_1fa6ed0[])();
extern __int64 (*GameData_1fa6fb0[])();
extern __int64 (*game_gmap_ProcGmapSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21eea40;
extern __int64 GameData_21f1618;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d6d0;
extern int GameData_21d92dc;
__int64 ProcGmapSeq_Destructor(__int64 a1);
__int64 BladeResonance_14b7200(_QWORD);
__int64 Cursor_Unknown2(void);
__int64 GameGmapData_13601b0(_QWORD);
__int64 GameManager_a2c820(_QWORD, _QWORD);
__int64 GameManager_a2d080(_QWORD);
__int64 GameManager_a2f660(_QWORD);
__int64 GameRoutine_100c050(_QWORD);
__int64 GameRoutine_120dd60(void);
__int64 GameRoutine_120e900(void);
__int64 GameRoutine_1314240(void);
__int64 GameRoutine_1314ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1317f10(_QWORD, _QWORD);
__int64 GameRoutine_133e6e0(_QWORD);
__int64 GameRoutine_133f1d0(_QWORD, _QWORD);
__int64 GameRoutine_133f780(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_133fe00(_QWORD, _QWORD, float);
__int64 GameRoutine_1340560(_QWORD, _QWORD);
__int64 GameRoutine_1347e20(void);
__int64 GameRoutine_134be40(void);
__int64 GameRoutine_134c680(_QWORD);
__int64 GameRoutine_134d2e0(_QWORD);
__int64 GameRoutine_134fb00(_QWORD);
__int64 GameRoutine_13602c0(_QWORD);
__int64 GameRoutine_14ccc60(_QWORD);
__int64 GameRoutine_14db160(_QWORD);
__int64 GameRoutine_1522160(_QWORD);
__int64 GameRoutine_1522300(_QWORD, _QWORD);
__int64 GameRoutine_1522780(_QWORD);
__int64 GameRoutine_15255d0(void);
__int64 GameRoutine_152c1d0(_QWORD);
__int64 GameRoutine_1530500(_QWORD);
__int64 GameRoutine_15317a0(_QWORD);
__int64 GameRoutine_1535b30(void);
__int64 GameRoutine_1538620(void);
__int64 GameRoutine_1553130(_QWORD);
__int64 GameRoutine_15e1e60(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1738620(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_17b8e80(_QWORD, _QWORD);
__int64 GameRoutine_17b8f40(_QWORD, _QWORD);
__int64 GameRoutine_17bc0a0(void);
__int64 GameRoutine_17bcf90(void);
__int64 GameRoutine_17bd0e0(_QWORD);
__int64 GameRoutine_65a020(void);
__int64 GameRoutine_718280(void);
__int64 GameRoutine_8679c0(void);
__int64 GameRoutine_877400(__int64);
__int64 GameRoutine_887600(void);
__int64 GameRoutine_888970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_88cee0(void);
__int64 GameRoutine_ad7390(void);
__int64 GameRoutine_ecb40(void);
__int64 GmapSituation_14db030(void);
__int64 Impl_13261c0(_QWORD);
__int64 Impl_132a090(_QWORD);
__int64 InfoCursorBottomImpl_100d6e0(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 MiasmaManager_14a9960(_QWORD);
__int64 MiasmaManager_14a9bc0(_QWORD);
__int64 Seq_a85600(_QWORD);
__int64 SpotMgr_1333f20(_QWORD);
__int64 SpotMgr_1335280(_QWORD);
__int64 SpotMgr_1336ec0(_QWORD);
__int64 SpotMgr_13370c0(void);
__int64 TalkOtherClanMenuItem_14d01c0(_QWORD, _QWORD);
__int64 TroopMgr_13460a0(_QWORD);
__int64 TroopMgr_13485a0(_QWORD);
__int64 TroopMgr_13487a0(_QWORD);
__int64 TroopMgr_1349f40(void);
__int64 TroopMgr_134ebe0(_QWORD);
__int64 TroopMgr_1353fb0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_Unit_Unknown6c46e0(_QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_AcquireReadLock(_QWORD);
__int64 nn_os_ReleaseReadLock(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10cb00(_QWORD, _QWORD);
__int64 wmemchr(_QWORD, _QWORD);
extern _DWORD* GameData_212d710;
extern _DWORD* GameData_212d720;
extern _DWORD* GameData_212d738;
extern _UNKNOWN GameData_1a86d37;
extern _UNKNOWN GameData_1a9e43e;
extern _UNKNOWN GameData_1aa9eec;
extern _UNKNOWN GameData_1abbb2b;
extern _UNKNOWN GameData_1ade186;
extern _UNKNOWN GameData_1adfa87;
extern _UNKNOWN GameData_1ae1f1c;
extern _UNKNOWN GameData_1aed80c;
extern _UNKNOWN* GameData_1afe67f;
extern __int64 (*GameData_1fa6790[])();
extern __int64 (*GameData_1fa6810[])();
extern __int64 (*GameData_1fa6890[])();
extern __int64 (*GameData_1fa6c10[])();
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212d748[2];
extern __int64 GameData_21c6978;
extern __int64 GameData_21c9600;
extern __int64 GameData_21c9608;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21c9700;
extern __int64 GameData_21c9728;
extern __int64 GameData_21ca310;
extern __int64 GameData_21eea58;
extern __int64 GameData_21f1620;
extern __int64 GameData_21f1628;
extern __int64 GameData_21f1648;
extern __int64 GameData_21f1658;
extern __int64 GameData_21f1660;
extern __int64 GameData_22416b0;
extern __int64 GameData_22416c0;
extern __int64 game_GameModeData_instance_;
extern __int64 game_GameRestartData_unknown_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProgressEventView_instance_;
extern __int64 game_hub_ProgressEventView_instance__ptr[6];
extern __int64 game_map_MapColorPalette_g_texture_archives;
extern __int64 game_sound_g_game_sound;
extern __int64* GameData_212c790;
extern __int64* GameData_212d6f8[3];
extern __int64* GameData_212d700[2];
extern __int64* GameData_212d708;
extern __int64* GameData_212d718;
extern __int64* GameData_212d728[2];
extern __int64* GameData_212d730;
extern __int64* GameData_212d7c0[11];
extern __int64* GameData_212d7c8[10];
extern __int64* GameData_212d7d0[9];
extern __int64* GameData_2130e70;
extern __int64* GameData_2131870;
extern __int64* GameData_2131898;
extern int* GameData_2131878[13];
extern int* GameData_21318a0[8];
__int64 game_gmap_ProcGmapSeq_Initialize(__int64 a1);
__int64 ProcGmapSeq_8802a0();
__int64 ProcGmapSeq_8814e0(__int64 a1);
__int64 ProcGmapSeq_881560(__int64 a1);
__int64 ProcGmapSeq_8818a0(__int64 a1);
__int64 ProcGmapSeq_881f20(__int64 result);
__int64 ProcGmapSeq_882080();
__int64 ProcGmapSeq_8827e0(__int64 a1);
__int64 ProcGmapSeq_882cb0(__int64 a1);
__int64 ProcGmapSeq_882f10(__int64 result);
__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct(__int64 a1);
__int64 ProcGmapSeq_883220();
__int64 ProcGmapSeq_8832a0(__int64 result);
__int64 ProcGmapSeq_883400();
__int64 ProcGmapSeq_883510(__int64 a1);
__int64 ProcGmapSeq_883660(__int64 result);
__int64 ProcGmapSeq_883680(__int64 result);
__int64 ProcGmapSeq_883860(__int64 result);
__int64 ProcGmapSeq_8840d0(__int64 result);
__int64 ProcGmapSeq_884e80(__int64 result);
__int64 ProcGmapSeq_884eb0(__int64 a1);
__int64 ProcGmapSeq_884f00(__int64 result);
__int64 ProcGmapSeq_884fb0(__int64 a1);
__int64 ProcGmapSeq_884ff0(__int64 result);
__int64 ProcGmapSeq_885160(__int64 a1);
void ProcGmapSeq_8855f0();
__int64 ProcGmapSeq_885840(__int64 a1);
__int64 ProcGmapSeq_8866a0();
__int64 ProcGmapSeq_886770(__int64 a1);
__int64 ProcGmapSeq_886870();
__int64 ProcGmapSeq_8868e0(__int64 result);
__int64 ProcGmapSeq_886c20();
__int64 game_gmap_ProcGmapSeq_Initialize_closure0_Invoke(__int64 result,
                                                         unsigned __int8* a2);
bool game_gmap_ProcGmapSeq_Initialize_closure_Invoke();
bool game_gmap_ProcGmapSeq_PreExeCommand_closure_Invoke(__int64 a1,
                                                        __int64* a2);
__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct_closure_Invoke(__int64 a1,
                                                               __int64** a2);
__int64 game_gmap_ProcGmapSeq_LimitOver_closure_Invoke(__int64 a1, __int64* a2);
bool game_gmap_ProcGmapSeq_LimitOver_closure0_Invoke(__int64 a1, __int64 a2);
__int64 game_gmap_ProcGmapSeq_LimitOver_closure1_Invoke(__int64 result,
                                                        _QWORD* a2);
void ProcGmapSeq_Unknown7(__int64 a1, __int64 a2);
void ProcGmapSeq_Unknown8(__int64 a1, __int64* a2, int a3);
__attribute__((swiftcall)) void GameRoutine_134bbe0(PSEUDO_X8, _QWORD);
__int64 GameRoutine_104f0e0(_QWORD, _QWORD);
__int64 GameRoutine_1337000(void);
__int64 GameRoutine_13402f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1342b80(_QWORD);
__int64 GameRoutine_134c680_alt1(void) __asm__("GameRoutine_134c680");
__int64 GameRoutine_1377920(_QWORD);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_14b7400(_QWORD);
__int64 GameRoutine_1553220(_QWORD);
__int64 GameRoutine_15e2a60(_QWORD, _QWORD);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_175b880(_QWORD);
__int64 GameRoutine_175bde0(_QWORD);
__int64 GameRoutine_17bc360(_QWORD);
__int64 GameRoutine_17bce50(_QWORD);
__int64 GameRoutine_17bcef0(_QWORD);
__int64 GameRoutine_17bcf90_alt1(_QWORD) __asm__("GameRoutine_17bcf90");
__int64 GameRoutine_19a0e60(_QWORD);
__int64 GameRoutine_200();
__int64 GameRoutine_718130(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_887a40(_QWORD);
__int64 GameRoutine_888560();
__int64 GameRoutine_8885e0();
__int64 GameRoutine_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_995200(_QWORD);
__int64 GameRoutine_9d5430(_QWORD);
__int64 GameSubquestData_125a1a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GmapSituation_14dbd80(void);
__int64 GmapSituation_14dbe20(void);
__int64 MiasmaManager_14a91c0(_QWORD);
__int64 MiasmaManager_14a9f60(_QWORD);
__int64 SpotMgr_1335920(void);
__int64 TroopMgr_1341640(_QWORD);
__int64 TroopMgr_13486a0(void);
__int64 TroopMgr_1348ec0(_QWORD);
__int64 TroopMgr_134a720(_QWORD);
__int64 TroopMgr_134b560(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString_alt1(_QWORD, _QWORD) __asm__("game_HashString");
__int64 game_ProcInst_Register(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1ab7dd7;
extern _UNKNOWN GameData_1ae1f43;
extern _UNKNOWN GameData_21f1610;
extern __int64 (*GameData_1fa6ad8[])();
extern __int64 (*GameData_202ca88[])();
extern __int64 (*GameData_202cb08[])();
extern __int64 (*game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable[])();
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_21f1558;
extern __int64 GameData_21f1560;
extern __int64 GameData_21f1568;
extern __int64 GameData_21f1578;
extern __int64 GameData_21f1588;
extern __int64 GameData_21f1598;
extern __int64 GameData_21f15a0;
extern __int64 GameData_21f15a8;
extern __int64 GameData_21f15b8;
extern __int64 GameData_21f15c8;
extern __int64 GameData_21f15d8;
extern __int64 GameData_21f15e0;
extern __int64 GameData_21f15e8;
extern __int64 GameData_21f15f8;
extern __int64 GameData_21f1608;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_2130e60;
extern char GameData_21f1550;
extern char GameData_21f1590;
extern char GameData_21f15d0;
extern int GameData_21f1570;
extern int GameData_21f1580;
extern int GameData_21f15b0;
extern int GameData_21f15c0;
extern int GameData_21f15f0;
extern int GameData_21f1600;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_888610(_QWORD);
__int64 game_gmap_ProcGmapSeq_OpenEventBranch(__int64 a1);
__int64 ProcGmapSeq_882900(__int64 a1);
__int64 ProcGmapSeq_884100(__int64 result);
__int64 ProcGmapSeq_884920(__int64 result);
__int64 ProcGmapSeq_885880(__int64 result);
_BYTE* ProcGmapSeq_886c80(_BYTE* result, __int64 a2);
__int64 game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke(__int64 result,
                                                             __int64** a2);
_QWORD* CmdbtlPartyNatives_eba910(_QWORD*, __int64*);
_QWORD* GameRoutine_64df20_alt1(_QWORD*, __int64,
                                unsigned __int64) __asm__("GameRoutine_64df20");
_QWORD* Troop_133e4e0(__int64);
__attribute__((swiftcall)) void GameRoutine_134b980(PSEUDO_X8,
                                                    __int64(__fastcall*)());
__attribute__((swiftcall)) void GameRoutine_eb5940(PSEUDO_X8);
__attribute__((swiftcall)) void SpotMgr_13306e0(PSEUDO_X8, _QWORD, _QWORD,
                                                _QWORD);
__attribute__((swiftcall)) void TroopMgr_134bbe0(PSEUDO_X8, __int64);
__int16* game_8697c0(__int16* result, char, float);
__int64 (**GameRoutine_1318480(float32x4_t*, long double, double, long double,
                               long double, long double, long double,
                               long double))();
__int64* GameManager_a2c820_alt1(__int64, __int64,
                                 char) __asm__("GameManager_a2c820");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64 Camera_1315960(__int64);
__int64 Camera_1315b10(__int64);
__int64 CmdbtlPartyNatives_eb8a90(__int64, __int64, int);
__int64 CmdbtlPartyNatives_eb8c40(__int64);
__int64 CmdbtlPartyNatives_eba740(__int64*, __int64*);
__int64 GameRoutine_1317f10_alt1(float32x4_t*,
                                 float32x4_t*) __asm__("GameRoutine_1317f10");
__int64 GameRoutine_133e110(void);
__int64 GameRoutine_1340130(float32x4_t*);
__int64 GameRoutine_14a3920(__int64 result);
__int64 GameRoutine_1545120(_QWORD, _QWORD);
__int64 GameRoutine_18fa160(__int64, __int64, int);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_667c80(__int64 result);
__int64 GameRoutine_718280_alt1() __asm__("GameRoutine_718280");
__int64 GameRoutine_889be0(__int64);
__int64 GameRoutine_a84f30(__int64, __int64, unsigned __int64, __int64,
                           unsigned __int64, int, __int64, int);
__int64 GmapDrawer_1538c80(__int64*, __int64);
__int64 GmapSituation_14db4a0();
__int64 GmapSound_1530270(__int64);
__int64 Impl_1327400(_QWORD*);
__int64 Manager_c43b70(__int64, __int64);
__int64 MiasmaManager_14a9060(__int64 result);
__int64 ProcCmdBtlSeq_e61c90(__int64, __int64);
__int64 ProcGmapSeq_8866a0_alt1(void) __asm__("ProcGmapSeq_8866a0");
__int64 ProcInst_657b10(__int64);
__int64 RuntimeBuffer_8924a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD);
__int64 SpotMgr_13304c0(_QWORD);
__int64 TroopMgr_13460a0_alt1(__int64) __asm__("TroopMgr_13460a0");
__int64 TroopMgr_134ca00();
__int64 TroopMgr_134d2e0(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_809ba0(__int64, float);
__int64 game_809dc0(__int64, _QWORD*, long double);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString32_alt1(__int64 result) __asm__("game_HashString32");
__int64 game_HashString_alt2(__int64 result) __asm__("game_HashString");
__int64 game_gmap_13402f0(void);
__int64 game_gmap_13410a0(__int64 result, int);
__int64 game_gmap_1341d60(__int64, char);
__int64 game_gmap_1347b30(_QWORD, _QWORD);
__int64 game_gmap_1347cc0(_QWORD);
__int64
game_gmap_SpotMgr_FindSpot_alt1(void) __asm__("game_gmap_SpotMgr_FindSpot");
__int64 game_gmap_SpotMgr_GetCurrentSpot_alt1(void) __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
__int64 game_gmap_TroopMgr_CountTroop_134e600(_QWORD, _QWORD);
__int64 game_gmap_TroopMgr_EachReserveUnit(__int64);
__int64 game_gmap_TroopMgr_OnUpdateChapter();
__int64 game_map_100bdf0(__int64, __int64, unsigned __int64);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_1af8f10;
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_2216780;
extern __int128* GameData_212c670;
extern __int64 (*GameData_1fa6910[])();
extern __int64 (*GameData_1fa69a0[])();
extern __int64 (*GameData_202d7c8[])();
extern __int64 (*GameData_202dbc8[])();
extern __int64 (*GameData_202dcc8[])();
extern __int64 (*GameData_2044910[])();
extern __int64* game_sound_g_game_sound_ptr[5];
extern __int64 GameData_212c638;
extern __int64 GameData_21c6878;
extern __int64 GameData_21c6888;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9f00;
extern __int64 GameData_21ca090;
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_g_proc_registry;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 game_script_hub_g_frame_counter;
extern char* GameData_212fc50[12];
extern char GameData_1a9f09e;
float GameRoutine_135bea0();
float GameRoutine_17bc5a0(__int64);
float std___1_stof(_QWORD, _QWORD);
float32x4_t game_gmap_133ffb0(float32x4_t*, _QWORD*);
unsigned __int64 GameRoutine_1130770(__int64, char*, __int64*);
unsigned int* TroopMgr_134c680();
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt2() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void GmapHadesLoader_1535820(__int64, __int64, char);
void UnitActor_81d540(__int64);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) String_60a1d0();
void snd_Fade_Fade_10c830(__int64, float);
void game_gmap_ProcGmapSeq_LoadMap(__int64 a1, __int64 a2);
float ProcGmapSeq_8804e0(__int64 a1, long double a2, double a3, long double a4,
                         long double a5, long double a6, long double a7,
                         long double a8);
unsigned __int64 game_gmap_ProcGmapSeq_PreExeCommand(unsigned __int64 result,
                                                     int32x4_t a2);
__int64 ProcGmapSeq_882d60(__int64 a1);
__int64 ProcGmapSeq_883020(__int64 result);
__int64 ProcGmapSeq_883540(__int64 a1);
_QWORD* ProcGmapSeq_8836c0(__int64 a1);
__int64 ProcGmapSeq_8838a0(__int64 a1);
__int64 ProcGmapSeq_8846c0(__int64 result);
__int64 ProcGmapSeq_885750(__int64 result);
void ProcGmapSeq_885b00(__n128 a1);
void ProcGmapSeq_8865e0(__int64 a1);
void ProcGmapSeq_886a90();
void ProcGmapSeq_887600();

__int64 game_gmap_ProcGmapSeq_Initialize(__int64 a1)
{
  __int64 v2;
  int v3;
  float v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  __int64* v13;
  _QWORD* v14;
  __int64* v15;
  __int64* v16;
  _QWORD* v17;
  __int64* v18;
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  _QWORD* v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64** v41;
  __int64** v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  __int64** v49;
  __int64** v50;
  __int64* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64** v71;
  __int64** v72;
  __int64* v73;
  __int64* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  _BYTE* v79;
  __int64 v80;
  __int64 v81;
  __int64 result;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD v86[4];
  _QWORD* v87;
  _QWORD v88[4];
  _QWORD* v89;
  __int64 (**v90)();
  _UNKNOWN** v91;
  __int64 (***v92)();

  GameRoutine_8679c0();
  v2 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 0x10) == 0) {
      v4 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v3 & 0xFFFFFFE2 | 1;
      if (v4 > 0.0) {
        *(_DWORD*)(v2 + 224) = 0;
      }
    }
  }
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      16, 16, 0);
  v7 = (_QWORD*)v6;
  v8 = GameData_212d6f8[0];
  if (*GameData_212d6f8[0] == 0) {
    *GameData_212d6f8[0] = v6;
    *GameData_2131878[0] = 1;
  }
  v9 = *v5;
  *v7 = GameData_2131870 + 2;
  v10 = fw_memory_HeapManager_Allocate(v9, 64, 16, 0);
  *(_QWORD*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  v7[1] = v10;
  *v8 = (__int64)v7;
  *(_DWORD*)(v10 + 8) = 0x2000;
  *(_BYTE*)(v10 + 40) = 1;
  *(_DWORD*)(v10 + 44) = 1065353216;
  (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 16, 16, 0);
  v12 = GameData_212d700[0];
  if (*GameData_212d700[0] == 0) {
    *GameData_21318a0[0] = 1;
  }
  v13 = GameData_2131898;
  *v12 = (__int64)v11;
  *v11 = v13 + 2;
  v11[1] = 0;
  GameRoutine_1538620();
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 24, 16, 0);
  v14[2] = 0;
  v15 = GameData_212d708;
  if (*GameData_212d708 == 0) {
    *GameData_212d710 = 1;
  }
  v16 = GameData_212d7c0[0];
  *v15 = (__int64)v14;
  *v14 = v16 + 2;
  v14[1] = v16 + 12;
  Cursor_Unknown2();
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 24, 16, 0);
  v17[2] = 0;
  v18 = GameData_212d718;
  if (*GameData_212d718 == 0) {
    *GameData_212d720 = 1;
  }
  v19 = GameData_212d7c8[0];
  *v18 = (__int64)v17;
  *v17 = v19 + 2;
  v17[1] = v19 + 12;
  GameRoutine_1314240();
  v20 = fw_memory_HeapManager_Allocate(*v5, 16, 16, 0);
  GameRoutine_17bc0a0();
  v21 = GameData_212d728[0];
  v22 = *v5;
  *GameData_212d728[0] = v20;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate(v22, 16, 16, 0);
  v24 = GameData_212d730;
  if (*GameData_212d730 == 0) {
    *GameData_212d738 = 1;
  }
  v25 = GameData_212d7d0[0];
  *v24 = (__int64)v23;
  *v23 = v25 + 2;
  v23[1] = 0;
  v26 = GameRoutine_1535b30();
  GameGmapData_13601b0(v26);
  v27 = GameRoutine_1553130(11);
  v28 = GameData_212c790;
  if (GameData_21eea58 == 0 || *(_BYTE*)(GameData_21eea58 + 32) != 1) {
    v32 = *(_QWORD*)(*v21 + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v32 + 16), 0);
    if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
      GameRoutine_17b8f40(*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0],
                          1);
    }
    v33 = game_gameui_Footer_instance_;
    v34 = *(_DWORD*)(v32 + 5856) & 0xFFFEFFFF;
    *(_DWORD*)(v32 + 5856) = v34;
    if (v33 != 0) {
      LayoutAccessor_1567000(v33, 0);
      v34 = *(_DWORD*)(v32 + 5856);
    }
    *(_DWORD*)(v32 + 5856) = v34 & 0xFFFDFFFF;
    if (game_GameModeData_instance_ != 0) {
      v35 = *(_DWORD*)(game_GameModeData_instance_ + 92);
      v36 = 3;
      if ((v35 & 2) == 0) {
        if ((v35 & 0x40) != 0) {
          v36 = 3;
        }
        else {
          v36 = 4;
        }
      }
    }
    else {
      v36 = 4;
    }
    goto LABEL_32;
  }
  if (game_GameModeData_instance_ == 0 ||
      ((v29 = *(_DWORD*)(game_GameModeData_instance_ + 92)) & 2) == 0) {
    if (game_gmap_GmapClock_instance_ != 0 &&
        *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
            0) {
      v30 = *(_QWORD*)(*v21 + 8);
      v31 = 2;
    }
    else {
      v91 = (_UNKNOWN**)&GameData_1a86d37;
      v90 = (__int64 (**)())game_HashString(&GameData_1a86d37);
      if (game_GameModeData_instance_ != 0 &&
          (v53 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v90)) != 0) {
        v30 = *(_QWORD*)(*v21 + 8);
        if (*(_DWORD*)(v53 + 32) != 0) {
          v31 = 2;
        }
        else {
          v31 = 0;
        }
      }
      else {
        v31 = 0;
        v30 = *(_QWORD*)(*v21 + 8);
      }
    }
    v66 = *(_DWORD*)(v30 + 5856);
    *(_DWORD*)(v30 + 5856) = v66 & 0xFFFFFFFD | v31;
    v67 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if ((v66 & 0x10000) != 0) {
      if (v67 != 0) {
        GameRoutine_17b8e80(v67, 1);
      }
    }
    else if (v67 != 0) {
      GameRoutine_17b8f40(v67, 1);
    }
    if ((v66 & 0x20000) != 0) {
      GameRoutine_17bd0e0(v30);
    }
    else {
      if (game_gameui_Footer_instance_ != 0) {
        LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
      }
      *(_DWORD*)(v30 + 5856) &= ~0x20000u;
    }
    v27 = GameRoutine_877400(a1 + 208);
    *(_BYTE*)(a1 + 305) = 0;
    *(_BYTE*)(a1 + 310) = 1;
    v65 = 13;
  LABEL_88:
    *(_DWORD*)(a1 + 152) = v65;
    v68 = GameData_21eea58;
    if (GameData_21eea58 == 0) {
      goto LABEL_90;
    }
    goto LABEL_89;
  }
  if ((v29 & 0x1C) != 0) {
    v65 = 3;
    goto LABEL_88;
  }
  v84 = GameRoutine_877400(a1 + 208);
  *(_DWORD*)(a1 + 152) = 8;
  *(_BYTE*)(a1 + 310) = 1;
  v85 = GameRoutine_134c680(v84);
  v27 = GameRoutine_1522160(v85);
  v68 = GameData_21eea58;
  if (GameData_21eea58 != 0) {
  LABEL_89:
    *(_BYTE*)(v68 + 32) = 0;
  }
LABEL_90:
  *(_BYTE*)(*(_QWORD*)(*v12 + 8) + 56LL) = 1;
  v69 = *(_QWORD*)(*v28 + 8);
  v70 = *(_DWORD*)(v69 + 56);
  v71 = *(__int64***)(v69 + 8);
  v72 = *(__int64***)(v69 + 16);
  if ((v70 & 0x80000000) == 0) {
    while (v71 != v72) {
      v74 = *v71++;
      v73 = v74;
      if (*((_DWORD*)v74 + 21) == v70) {
        goto LABEL_101;
      }
    }
  LABEL_96:
    v75 = game_gmap_SpotMgr_GetCurrentSpot(v27);
    v76 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_33;
    }
    goto LABEL_102;
  }
  if (v71 == v72) {
    goto LABEL_96;
  }
  while (1) {
    v73 = *v71;
    if ((*v71)[12] == 0 && v73[69] == 0) {
      break;
    }
    if (++v71 == v72) {
      goto LABEL_96;
    }
  }
LABEL_101:
  v75 = *v73;
  v76 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
  LABEL_102:
    v77 = *(_QWORD*)(v76 + 24);
    if (v77 != 0 && *(_BYTE*)(v77 + 152) == 4 &&
        *(_QWORD*)(v77 + 168) == *(_QWORD*)(v75 + 120)) {
      v36 = 18;
    LABEL_32:
      *(_DWORD*)(a1 + 152) = v36;
    }
  }
LABEL_33:
  v37 = GmapSituation_14db030();
  v38 = GameData_212c7a0[0];
  if ((v37 & 1) == 0 || (*(_BYTE*)(a1 + 310) & 1) != 0) {
    goto LABEL_66;
  }
  v39 = *(_QWORD*)(*v28 + 8);
  v40 = *(_DWORD*)(v39 + 56);
  v41 = *(__int64***)(v39 + 8);
  v42 = *(__int64***)(v39 + 16);
  if (v40 < 0) {
    for (; v41 != v42; ++v41) {
      v43 = *v41;
      if ((*v41)[12] == 0 && v43[69] == 0) {
        goto LABEL_45;
      }
    }
  LABEL_41:
    v45 = game_gmap_SpotMgr_GetCurrentSpot(v37);
    goto LABEL_46;
  }
  if (v41 == v42) {
    goto LABEL_41;
  }
  while (1) {
    v44 = *v41++;
    v43 = v44;
    if (*((_DWORD*)v44 + 21) == v40) {
      break;
    }
    if (v41 == v42) {
      goto LABEL_41;
    }
  }
LABEL_45:
  v45 = *v43;
LABEL_46:
  v46 = Impl_13261c0(v45);
  if ((_BYTE)v46 != 0) {
    v47 = *(_QWORD*)(*v28 + 8);
    v48 = *(_DWORD*)(v47 + 56);
    v49 = *(__int64***)(v47 + 8);
    v50 = *(__int64***)(v47 + 16);
    if (v48 < 0) {
      for (; v49 != v50; ++v49) {
        v51 = *v49;
        if ((*v49)[12] == 0 && v51[69] == 0) {
          goto LABEL_62;
        }
      }
    }
    else if (v49 != v50) {
      while (1) {
        v52 = *v49++;
        v51 = v52;
        if (*((_DWORD*)v52 + 21) == v48) {
          break;
        }
        if (v49 == v50) {
          goto LABEL_58;
        }
      }
    LABEL_62:
      v54 = *v51;
    LABEL_63:
      if ((unsigned __int8)Impl_13261c0(v54) != 2) {
        goto LABEL_66;
      }
      goto LABEL_64;
    }
  LABEL_58:
    v54 = game_gmap_SpotMgr_GetCurrentSpot(v46);
    goto LABEL_63;
  }
LABEL_64:
  if (**(_QWORD**)(*(_QWORD*)v38 + 16LL) == 0) {
    v91 = (_UNKNOWN**)&GameData_1a9e43e;
    v90 = (__int64 (**)())game_HashString(&GameData_1a9e43e);
    game_VariableManager_SetFlag(&v90, 0);
  }
LABEL_66:
  v55 = *v28;
  *(_DWORD*)(*(_QWORD*)(*v28 + 8) + 56LL) = -1;
  *(_BYTE*)(*(_QWORD*)(*v21 + 8) + 5844LL) = 0;
  v56 = *(_QWORD*)(v55 + 8);
  v57 = *(__int64**)(v56 + 8);
  v58 = *(__int64**)(v56 + 16);
  while (v57 != v58) {
    v59 = *v57++;
    GameRoutine_133e6e0(v59);
  }
  SpotMgr_1335280(1);
  v91 = (_UNKNOWN**)&GameData_1abbb2b;
  v90 = (__int64 (**)())game_HashString(&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v60 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v90);
    if (v60 != 0 && *(_DWORD*)(v60 + 32) != 0) {
      v61 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
      v91 = &GameData_1afe67f;
      v62 = game_HashString(&GameData_1afe67f);
      v63 = game_GameModeData_instance_;
      v90 = (__int64 (**)())v62;
      if (game_GameModeData_instance_ != 0) {
        v64 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v90);
        if (v64 != 0) {
          v63 = *(_DWORD*)(v64 + 32);
        }
        else {
          v63 = 0;
        }
      }
      *(_DWORD*)(v61 + 36) = v63;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v78 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    if ((v78 & 2) != 0) {
      *(_BYTE*)(a1 + 305) = 0;
      *(_BYTE*)(a1 + 308) = 1;
    }
    else if ((v78 & 0x40) == 0) {
      *(_DWORD*)(game_GameModeData_instance_ + 92) = v78 & 0xFFFFFBA1;
    }
  }
  *(_DWORD*)(a1 + 276) = 0;
  *(_BYTE*)(a1 + 304) = 1;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v79 = *(_BYTE**)(a1 + 240);
    *(_QWORD*)(a1 + 232) = 0;
  }
  else {
    v79 = (_BYTE*)(a1 + 225);
    *(_BYTE*)(a1 + 224) = 0;
  }
  *v79 = 0;
  GameRoutine_13602c0(*(_QWORD*)(*(_QWORD*)v38 + 16LL));
  v90 = GameData_1fa6790;
  v91 = (_UNKNOWN**)a1;
  v92 = &v90;
  v88[0] = GameData_1fa6810;
  v88[1] = a1;
  v89 = v88;
  v87 = v86;
  v86[0] = GameData_1fa6890;
  GameRoutine_15e1e60(&v90, v88, v86);
  if (v87 == v86) {
    v80 = 32;
  }
  else {
    if (v87 == nullptr) {
      goto LABEL_121;
    }
    v80 = 40;
  }
  (*(void (**)(void*))(*v87 + v80))(v87);
LABEL_121:
  if (v89 == v88) {
    v81 = 32;
  }
  else {
    if (v89 == nullptr) {
      goto LABEL_126;
    }
    v81 = 40;
  }
  (*(void (**)(void*))(*v89 + v81))(v89);
LABEL_126:
  result = (__int64)v92;
  if (v92 == &v90) {
    v83 = 4;
  }
  else {
    if (v92 == nullptr) {
      return result;
    }
    v83 = 5;
  }
  return (*v92)[v83]();
}

void game_gmap_ProcGmapSeq_LoadMap(__int64 a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v3 = (__int64*)GameData_212c638;
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
  if ((Manager_c43b70(*(_QWORD*)(v4 + 56), a2) & 1) != 0 &&
      (v5 = *(_QWORD*)(v4 + 64)) != 0 && (v6 = *(_QWORD*)(v5 + 96)) != 0 &&
      *(_DWORD*)(v6 + 240) == 5) {
    v7 = (_QWORD*)(v5 + 120);
    while (1) {
      v7 = (_QWORD*)*v7;
      if (v7 == nullptr) {
        break;
      }
      if (*(_DWORD*)(v7[5] + 240LL) != 5) {
        goto LABEL_8;
      }
    }
  }
  else {
  LABEL_8:
    v8 = *v3;
    v19_.v19[0] = GameData_1fa6910;
    v19_.v20 = v19_.v19;
    v9 = game_GameModeData_instance_ != 0 &&
         *(unsigned __int8*)(game_GameModeData_instance_ + 15) == 9;
    GameRoutine_a84f30(v8, (__int64)"Map/Gmp/Gmp_000/Gmp_000", 0x17u,
                       (__int64)&GameData_1a9f09e, 0, 1, (__int64)v19_.v19, v9);
    if (v19_.v20 == v19_.v19) {
      v10 = 32;
    }
    else {
      if (v19_.v20 == nullptr) {
        goto LABEL_16;
      }
      v10 = 40;
    }
    (*(void (**)(_QWORD*))(*v19_.v20 + v10))(v19_.v20);
  }
LABEL_16:
  v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212d708 + 16) + 48LL);
  *(_QWORD*)(v11 + 8) = *(_QWORD*)(*(_QWORD*)(*GameData_212d700[0] + 8) + 32LL);
  v12 = GameData_212fc50[0];
  if ((*GameData_212fc50[0] & 1) != 0) {
    v13 = *(char**)&GameData_212fc50[0][(unsigned __int64)((__int128*)0x10LL)];
  }
  else {
    v13 = GameData_212fc50[0] + 1;
  }
  v14 = strlen(v13);
  game_map_100bdf0(v11, (__int64)v13, v14);
  if ((*((_BYTE*)((__int128*)0x10LL) + (_QWORD)v12 + 8) & 1) != 0) {
    v15 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v12);
  }
  else {
    v15 = (__int64)(v12 + 25);
  }
  v16 = strlen(v15);
  game_map_100bdf0(v11, v15, v16);
  if ((*((_BYTE*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v12) & 1) != 0) {
    v17 = *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v12);
  }
  else {
    v17 = (__int64)(v12 + 49);
  }
  v18 = strlen(v17);
  game_map_100bdf0(v11, v17, v18);
  GmapHadesLoader_1535820(*GameData_212d730, a1, 0);
}

__int64 ProcGmapSeq_8802a0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  bool v14;
  bool v15;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  char* v24;
  char* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;

  v0 = *(_QWORD*)(GameData_21c6978 + 32);
  if (*(_QWORD*)(GameData_21c6978 + 24) == v0) {
    v1 = 0;
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  else {
    v1 = *(_QWORD*)(v0 - 8);
    if ((GameRoutine_ecb40() & 1) == 0) {
      return 1;
    }
  }
  v2 = *(_QWORD*)(v1 + 64);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 96);
    if (v3 == 0 || *(_DWORD*)(v3 + 240) != 5) {
      return 1;
    }
    v4 = (_QWORD*)(v2 + 120);
    while (1) {
      v4 = (_QWORD*)*v4;
      if (v4 == nullptr) {
        break;
      }
      if (*(_DWORD*)(v4[5] + 240LL) != 5) {
        return 1;
      }
    }
  }
  v5 = *(__int64**)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                    248632LL);
  v6 = *(__int64**)(*(_QWORD*)game_map_MapColorPalette_g_texture_archives +
                    248640LL);
  if (v5 != v6) {
    while (1) {
      v7 = *((unsigned __int8*)v5 + 32);
      v8 = v5[5];
      if ((v7 & 1) == 0) {
        v8 = v7 >> 1;
      }
      if (v8 == 26) {
        v9 = (v7 & 1) != 0 ? (__int64*)v5[6] : (__int64*)((char*)v5 + 33);
        v10 = *v9;
        v11 = v9[1];
        v12 = v9[2];
        v13 = *((unsigned __int16*)v9 + 12);
        v14 = v10 == 0x2F70616D472F4955LL && v11 == 0x7865745F70616D67LL;
        v15 = v14 && v12 == 0x6E622E7365727574LL;
        if (v15 && v13 == 30836) {
          break;
        }
      }
      v5 += 11;
      if (v5 == v6) {
        return 1;
      }
    }
  }
  if (v5 != v6) {
    v17 = *v5;
    nn_os_AcquireReadLock(*v5 + 696);
    v18 = *(_DWORD*)(v17 + 656);
    nn_os_ReleaseReadLock(v17 + 696);
    if ((v18 & 8) != 0) {
      v19 = *(_QWORD*)(GameData_21c96e8 + 8);
      v20 = *(_QWORD*)(v19 + 8);
      v21 = *(_QWORD*)(v19 + 16);
      while (v20 != v21) {
        v22 = *(_QWORD**)v20;
        if (*(_QWORD*)(*(_QWORD*)v20 + 344LL) != 0) {
          if (v22[47] == 0) {
            return 1;
          }
          v23 = v22[45] - v22[44];
          v26 = v22 + 48;
          v25 = (char*)v22[48];
          v24 = (char*)v26[1];
          if (v23 != v24 - v25) {
            return 1;
          }
          while (v25 != v24) {
            v27 = *(_QWORD*)v25;
            v25 += 8;
            if ((*(_BYTE*)(v27 + 342) & 1) == 0) {
              return 1;
            }
          }
        }
        v20 += 8;
      }
      v29 = *(_QWORD*)(*(_QWORD*)(GameData_21f1658 + 16) + 48LL);
      v30 = *(_QWORD*)(v29 + 88);
      v31 = *(_QWORD*)(v29 + 96);
      if (v30 == v31) {
      LABEL_51:
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) -
                                        8LL) +
                             40LL) +
                  225LL) = 1;
        return 0;
      }
      v32 = v30 + 40;
      while (*(_BYTE*)(*(_QWORD*)(v32 - 16) + 165LL) == 1) {
        v33 = GameRoutine_ad7390();
        if ((v33 & 1) != 0) {
          v14 = v32 == v31;
          v32 += 40;
          if (!v14) {
            continue;
          }
        }
        if ((v33 & 1) == 0) {
          return 1;
        }
        goto LABEL_51;
      }
    }
  }
  return 1;
}

float ProcGmapSeq_8804e0(__int64 a1, long double a2, double a3, long double a4,
                         long double a5, long double a6, long double a7,
                         long double a8)
{

#pragma clang fp contract(off)
  __int64 v17;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64** v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int16* v27;
  __int64 v28;
  __int16* v29;
  float v30;
  __int64 v31;
  float32x4_t** v32;
  float32x4_t** v33;
  float32x4_t* v34;
  __int64 v36;
  float32x4_t*** v37;
  float32x4_t*** i;
  float32x4_t** v39;
  float32x4_t* v40;
  unsigned __int64 v41;
  float32x4_t v42;
  float32x4_t v43;
  __int64 v44;
  __int64 v45;
  unsigned int v46;
  unsigned int v47;
  float32x4_t v48;
  float32x4_t* v49;
  float32x4_t v51;

  if (*(int*)(a1 + 256) <= 0) {
    GameRoutine_1318480(*(float32x4_t**)(*GameData_212d708 + 16), a2, a3, a4,
                        a5, a6, a7, a8);
    Camera_1315b10(*(_QWORD*)(*GameData_212d718 + 16));
    GmapDrawer_1538c80(*(__int64**)(*GameData_212d700[0] + 8),
                       *(unsigned __int8*)(a1 + 305));
    GmapSound_1530270(*(_QWORD*)(*GameData_212d6f8[0] + 8));
    v17 = game_gmap_GmapClock_kDefaultTime_ptr;
    if (GameData_21c6878 != 0 && GameData_21c6888 != 0) {
      v19 = *(unsigned int*)(a1 + 288);
      v20 = GameData_21c6878 - 1;
      if ((GameData_21c6878 & (GameData_21c6878 - 1)) != 0) {
        v21 = *(unsigned int*)(a1 + 288);
        if (GameData_21c6878 <= v19) {
          v21 = (unsigned int)v19 % (unsigned int)GameData_21c6878;
        }
      }
      else {
        v21 = ((_DWORD)GameData_21c6878 - 1) & (unsigned int)v19;
      }
      v22 = *(__int64***)(game_g_proc_registry + 8 * v21);
      if (v22 != nullptr) {
        v23 = *v22;
        if (v23 != nullptr) {
          if ((GameData_21c6878 & v20) == 0) {
            while (1) {
              v25 = v23[1];
              if (v25 == v19) {
                if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
                  goto LABEL_26;
                }
              }
              else if ((v25 & v20) != v21) {
                goto LABEL_34;
              }
              v23 = (__int64*)*v23;
              if (v23 == nullptr) {
                goto LABEL_34;
              }
            }
          }
          do {
            v24 = v23[1];
            if (v24 == v19) {
              if (*((_DWORD*)v23 + 4) == (_DWORD)v19) {
              LABEL_26:
                v26 = v23[3];
                if (v26 != 0) {
                  v27 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                                       ? game_gmap_GmapClock_instance_ + 32
                                       : game_gmap_GmapClock_kDefaultTime_ptr);
                  v28 = ((__int64)v27[1] << 24) + ((__int64)*v27 << 32) +
                        ((__int64)v27[2] << 18) + ((__int64)v27[3] << 12) +
                        ((__int64)v27[4] << 6) + v27[5];
                  if ((v28 == ((__int64)*(__int16*)(a1 + 266) << 24) +
                                  ((__int64)*(__int16*)(a1 + 264) << 32) +
                                  ((__int64)*(__int16*)(a1 + 268) << 18) +
                                  ((__int64)*(__int16*)(a1 + 270) << 12) +
                                  ((__int64)*(__int16*)(a1 + 272) << 6) +
                                  *(__int16*)(a1 + 274) ||
                       v28 ==
                           ((__int64)*(
                                __int16*)(game_gmap_GmapClock_kDefaultTime_ptr +
                                          2)
                            << 24) +
                               ((__int64)*(__int16*)
                                    game_gmap_GmapClock_kDefaultTime_ptr
                                << 32) +
                               ((__int64)*(
                                    __int16*)(game_gmap_GmapClock_kDefaultTime_ptr +
                                              4)
                                << 18) +
                               ((__int64)*(
                                    __int16*)(game_gmap_GmapClock_kDefaultTime_ptr +
                                              6)
                                << 12) +
                               ((__int64)*(
                                    __int16*)((char*)((_UNKNOWN**)0x8LL) +
                                              game_gmap_GmapClock_kDefaultTime_ptr)
                                << 6) +
                               *(__int16*)((char*)((_UNKNOWN**)0x8LL) +
                                           game_gmap_GmapClock_kDefaultTime_ptr +
                                           2)) &&
                      *(_BYTE*)(v26 + 139) != 0) {
                    ProcInst_657b10(v26);
                  }
                }
                break;
              }
            }
            else {
              if (v24 >= GameData_21c6878) {
                v24 %= (unsigned __int64)GameData_21c6878;
              }
              if (v24 != v21) {
                break;
              }
            }
            v23 = (__int64*)*v23;
          } while (v23 != nullptr);
        }
      }
    }
  LABEL_34:
    if (game_gmap_GmapClock_instance_ != 0) {
      v29 = (__int16*)(game_gmap_GmapClock_instance_ + 32);
    }
    else {
      v29 = (__int16*)v17;
    }
    if (v29[1] * *v29 * v29[2] != 0 ||
        (game_gmap_GmapClock_instance_ != 0
             ? (v29 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
             : (v29 = (__int16*)v17),
         game_gmap_GmapClock_instance_ == 0)) {
      v30 = 0x0.0p+0f;
    }
    else {
      v30 = *(float*)(game_gmap_GmapClock_instance_ + 44);
    }
    game_8697c0(v29, 0, v30);
    v31 = *(_QWORD*)(*GameData_212c790 + 8);
    v32 = *(float32x4_t***)(v31 + 8);
    v33 = *(float32x4_t***)(v31 + 16);
    while (v32 != v33) {
      v34 = *v32++;
      GameRoutine_1340130(v34);
      UnitActor_81d540((__int64)&v34[7]);
    }
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v36 = *(_QWORD*)(*GameData_2130e60 + 8);
      v37 = *(float32x4_t****)(v36 + 48);
      for (i = *(float32x4_t****)(v36 + 56); v37 != i; ++v37) {
        v39 = *v37;
        v51 = (__typeof__(v51)){0};
        game_gmap_133ffb0(*v39, &v51);
        v40 = *v39;
        v41 = LANES128((*v39)[6]).n128_u64[0];
        LANES128(v42).n128_u32[0] = *(_DWORD*)(v41 + 120);
        LANES128(v42).n128_f32[2] =
            *(float*)(v41 + 124) + 0x1.4000000000000p+2f;
        v43 = vaddq_f32(vaddq_f32(v51, (*v39)[4]), v42);
        v51 = v43;
        v44 = (__int64)v39[1];
        v45 = *(_QWORD*)v44;
        if (*(_QWORD*)v44 != 0 && *(_DWORD*)(v45 + 16) == *(_DWORD*)(v44 + 8)) {
          v46 = *(_DWORD*)(v45 + 36);
          if (v46 != 0) {
            v47 = 0;
            v48 = vaddq_f32(v40[3], v43);
            do {
              if ((int)v46 > (int)v47) {
                v49 = *(float32x4_t**)(v45 + 40 + 8LL * (int)v47);
                if (v49 != nullptr) {
                  v49[1] = v48;
                  LANES128(v49[8]).n128_u8[0] = 1;
                  v46 = *(_DWORD*)(v45 + 36);
                }
              }
              ++v47;
            } while (v47 < v46);
          }
        }
        GameRoutine_14a3920(v44);
      }
    }
    *(float*)&a2 = GameRoutine_17bc5a0(*(_QWORD*)(*GameData_212d728[0] + 8));
  }
  return *(float*)&a2;
}

unsigned __int64 game_gmap_ProcGmapSeq_PreExeCommand(unsigned __int64 result,
                                                     int32x4_t a2)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  char* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  int* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v31;
  int v32;
  bool v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _DWORD* v37;
  unsigned __int8* v38;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v49;
  unsigned __int64 v50;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  __int64 v55;
  __int64 v56;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v64;
  __int64* v65;
  __int64 v66;
  int v67;
  unsigned __int64* v69;
  unsigned __int64* v70;
  int* v71;
  int v72;
  int v73;
  unsigned __int64* v75;
  unsigned __int64* v76;
  __int64 v77;
  unsigned __int64* v78;
  unsigned __int64* v79;
  __int64 v80;
  _BYTE* v81;
  char v82;
  __int64 (**v83)();
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  _QWORD* v94;
  _QWORD* v95;
  unsigned __int64 v96;
  __int64 v97;
  _QWORD* v98;
  _QWORD* v99;
  unsigned __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 (**v109)();
  char v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  unsigned __int32 v114;
  int32x4_t v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v120;
  unsigned __int64 v121;
  _QWORD* v122;
  _QWORD* v123;
  unsigned __int64 v124;
  __int64 v125;
  __int16 v126;
  int8x16_t v127;
  int8x16_t v128;
  __int128 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  char v133;
  __int64 v134;
  __int64 v135;
  int32x4_t v136;
  unsigned __int8* v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64* v141;
  __int64* v142;
  _QWORD* v143;
  __int64 (**v144)();
  __int64 (**v145)();
  __int64 (***v146)();
  __int64 v147;
  __int64 v148;
  __int64 v149;
  unsigned __int64 v150;

  v150 = result;
  v2 = GameData_21f1660;
  v3 = *(_QWORD*)(GameData_21f1660 + 8);
  v4 = *(_QWORD**)(v3 + 8);
  if (*(_QWORD**)v3 != v4) {
    v5 = (_QWORD*)(*(_QWORD*)v3 + 16LL);
    v6 = 0;
    do {
      v7 = v5 - 2;
      v8 = *(v5 - 1);
      if ((*(_BYTE*)(v5 - 2) & 1) == 0) {
        v8 = *((_BYTE*)v5 - 16) >> 1;
      }
      if (v8 == 1) {
        v9 = (*(_BYTE*)(v5 - 2) & 1) != 0 ? (char*)*v5 : (char*)v5 - 15;
        if (*v9 == 42) {
          ++v6;
        }
      }
      v5 += 3;
    } while (v7 + 3 != v4);
    if (v6 == 2 && *(_DWORD*)(v3 + 48) == 0) {
      v137 = (unsigned __int8*)(v150 + 224);
      v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      LANES128(a2).n128_u32[0] = 2;
      v136 = a2;
      do {
        v13 = *(_QWORD**)(v2 + 8);
        v15 = v13[3];
        v14 = v13[4];
        v16 = *v13;
        v17 = v14 == v15 && v13[1] == v16;
        if (v17) {
          return result;
        }
        v18 = v14 == v15 ? v13[1] : v13[4];
        if (v14 == v15) {
          v19 = (int*)(v13 + 6);
        }
        else {
          v16 = v13[3];
          v19 = (int*)v13 + 13;
        }
        v20 = *v19;
        if (0xAAAAAAAAAAAAAAABLL * ((v18 - v16) >> 3) <= v20) {
          return result;
        }
        v148 = 0;
        v149 = 0;
        v147 = 0;
        v21 = *v13;
        if (v14 != v15) {
          v21 = v15;
        }
        v22 = (unsigned __int8*)(v21 + 24LL * (int)v20);
        v23 = *v22;
        if ((v23 & 1) != 0) {
          v24 = *((unsigned __int8**)v22 + 2);
        }
        else {
          v24 = v22 + 1;
        }
        if ((v23 & 1) != 0) {
          v25 = *((_QWORD*)v22 + 1);
        }
        else {
          v25 = v23 >> 1;
        }
        result = RuntimeBuffer_8924a0(&v147, v24, v25, 47);
        v27 = *(_QWORD*)(v147 + 8);
        if ((*(_BYTE*)v147 & 1) == 0) {
          v27 = *(_BYTE*)v147 >> 1;
        }
        if (v27 <= 11) {
          if (v27 != 1) {
            if (v27 == 4) {
              v37 = (*(_BYTE*)v147 & 1) != 0 ? *(_DWORD**)(v147 + 16)
                                             : (_DWORD*)(v147 + 1);
              v17 = *v37 == 2036427856;
              v38 = (unsigned __int8*)(v147 + 24);
              if (v17 && v137 != v38) {
                result = (unsigned __int64)v137;
                v40 = *v38;
                if ((*v137 & 1) != 0) {
                  if ((v40 & 1) != 0) {
                    v92 = *(_QWORD*)(v147 + 40);
                  }
                  else {
                    v92 = v147 + 25;
                  }
                  if ((v40 & 1) != 0) {
                    v93 = *(_QWORD*)(v147 + 32);
                  }
                  else {
                    v93 = v40 >> 1;
                  }
                  result = SpineModel_64dde0(v137, v92, v93);
                }
                else if ((v40 & 1) != 0) {
                  result = GameRoutine_64df20(v137, *(_QWORD*)(v147 + 40),
                                              *(_QWORD*)(v147 + 32));
                }
                else {
                  v41 = *(_QWORD*)v38;
                  v42 = *(_QWORD*)(v147 + 40);
                  *((_QWORD*)v137 + 1) = *(_QWORD*)(v147 + 32);
                  *((_QWORD*)v137 + 2) = v42;
                  *(_QWORD*)v137 = v41;
                }
              }
            }
            goto LABEL_287;
          }
          if ((*(_BYTE*)v147 & 1) != 0) {
            v81 = *(_BYTE**)(v147 + 16);
          }
          else {
            v81 = (_BYTE*)(v147 + 1);
          }
          if (*v81 != 42) {
            goto LABEL_287;
          }
          v82 = 0;
          goto LABEL_288;
        }
        if (v27 == 18) {
          if ((*(_BYTE*)v147 & 1) != 0) {
            v43 = *(__int64**)(v147 + 16);
          }
          else {
            v43 = (__int64*)(v147 + 1);
          }
          v44 = *v43;
          v45 = v43[1];
          v46 = *((unsigned __int16*)v43 + 8);
          if (v44 != 0x83E39481E9B088E5LL || v45 != 0xE38383E3A782E381LL ||
              v46 != 44930) {
            goto LABEL_287;
          }
          v49 = (*(_BYTE*)(v147 + 24) & 1) != 0 ? *(_QWORD*)(v147 + 40)
                                                : v147 + 25;
          result = game_HashString_alt1(v49, v26);
          if (result == 0) {
            goto LABEL_287;
          }
          v50 = *(_QWORD*)(GameData_21ca090 + 96);
          if (v50 == 0 || *(_QWORD*)(GameData_21ca090 + 112) == 0) {
            goto LABEL_287;
          }
          v52 = v50 - 1;
          if ((v50 & (v50 - 1)) != 0) {
            v53 = result;
            if (result >= v50) {
              v53 = result % v50;
            }
          }
          else {
            v53 = v52 & result;
          }
          v94 = *(_QWORD**)(*(_QWORD*)(GameData_21ca090 + 88) + 8 * v53);
          if (v94 == nullptr) {
            goto LABEL_287;
          }
          v95 = (_QWORD*)*v94;
          if (v95 == nullptr) {
            goto LABEL_287;
          }
          if ((v50 & v52) == 0) {
            while (1) {
              v97 = v95[1];
              if (v97 == result) {
                if (v95[2] == result) {
                  goto LABEL_225;
                }
              }
              else if ((v97 & v52) != v53) {
                goto LABEL_287;
              }
              v95 = (_QWORD*)*v95;
              if (v95 == nullptr) {
                goto LABEL_287;
              }
            }
          }
          while (1) {
            v96 = v95[1];
            if (v96 == result) {
              if (v95[2] == result) {
              LABEL_225:
                result = v95[3];
                if (result != 0) {
                  result = game_gmap_SpotMgr_FindSpot_alt1();
                  if (result != 0) {
                    v102 = result;
                    v103 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
                    v104 = (__int64*)fw_memory_HeapManager_Allocate(*v10, 16,
                                                                    16, 0);
                    *v104 = v103;
                    v104[1] = v102;
                    v140 = 0;
                    v141 = v104;
                    v138 = 0;
                    v139 = 0;
                    v142 = v104 + 2;
                    v143 = v104 + 2;
                    result =
                        (unsigned __int64)(SpotMgr_13306e0((void*)(&v144),
                                                           &v141, 17, &v138),
                                           (void*)(&v144));
                    if (v138 != 0) {
                      v105 = *v10;
                      v139 = v138;
                      if (*(_QWORD*)(v105 + 200) != 0) {
                        v106 = 128;
                      }
                      else {
                        v106 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(v105 + v106, v138);
                    }
                    if (v141 != nullptr) {
                      v107 = *v10;
                      v142 = v141;
                      if (*(_QWORD*)(v107 + 200) != 0) {
                        v108 = 128;
                      }
                      else {
                        v108 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(v107 + v108, v141);
                    }
                    v109 = v144;
                    v110 = *(_BYTE*)(v102 + 178) & 0xFE;
                    if (v145 != v144) {
                      ++v110;
                    }
                    *(_BYTE*)(v102 + 178) = v110;
                    if (v109 != nullptr) {
                      v111 = *v10;
                      v145 = v109;
                      if (*(_QWORD*)(v111 + 200) != 0) {
                        v112 = 128;
                      }
                      else {
                        v112 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(v111 + v112, v109);
                    }
                  }
                }
                goto LABEL_287;
              }
            }
            else {
              if (v96 >= v50) {
                v96 %= v50;
              }
              if (v96 != v53) {
                goto LABEL_287;
              }
            }
            v95 = (_QWORD*)*v95;
            if (v95 == nullptr) {
              goto LABEL_287;
            }
          }
        }
        if (v27 == 15) {
          if ((*(_BYTE*)v147 & 1) != 0) {
            v54 = *(__int64**)(v147 + 16);
          }
          else {
            v54 = (__int64*)(v147 + 1);
          }
          v55 = *v54;
          v56 = *(__int64*)((char*)v54 + 7);
          if (v55 == 0x9DE99B8AE5A28BE5LL && v56 == 0xBAA4E7A8A1E89E9DLL) {
            v58 = v147 + 24;
            if (v148 != v147 + 24) {
              v59 = *(_QWORD*)(GameData_21c96e8 + 8);
              do {
                v64 = *(_QWORD*)(v58 + 8);
                if ((*(_BYTE*)v58 & 1) == 0) {
                  v64 = *(_BYTE*)v58 >> 1;
                }
                switch (v64) {
                case 6LL:
                  if ((*(_BYTE*)v58 & 1) != 0) {
                    v71 = *(int**)(v58 + 16);
                  }
                  else {
                    v71 = (int*)(v58 + 1);
                  }
                  v72 = *v71;
                  v73 = *((unsigned __int16*)v71 + 2);
                  if (v72 == -374831643 && v73 == 43139) {
                    v75 = *(unsigned __int64**)(v59 + 8);
                    v76 = *(unsigned __int64**)(v59 + 16);
                    while (v75 != v76) {
                      result = *v75;
                      v77 = *(_QWORD*)(*v75 + 96);
                      if (v77 == 0 ||
                          (unsigned int)*(unsigned __int8*)(v77 + 32) - 3 >=
                              2) {
                        result = game_gmap_13402f0();
                      }
                      ++v75;
                    }
                  }
                  break;
                case 15LL:
                  if ((*(_BYTE*)v58 & 1) != 0) {
                    v60 = *(__int64**)(v58 + 16);
                  }
                  else {
                    v60 = (__int64*)(v58 + 1);
                  }
                  v61 = *v60;
                  v62 = *(__int64*)((char*)v60 + 7);
                  if (v61 == 0x85E5BABAE4BBB8E4LL &&
                      v62 == 0x96A4E5A5BBE4AC85LL) {
                    v79 = *(unsigned __int64**)(v59 + 8);
                    v78 = *(unsigned __int64**)(v59 + 16);
                    while (v79 != v78) {
                      result = *v79;
                      v80 = *(_QWORD*)(*v79 + 96);
                      if ((v80 | *(_QWORD*)(*v79 + 552)) != 0 &&
                          (v80 == 0 ||
                           (unsigned int)*(unsigned __int8*)(v80 + 32) - 3 >=
                               2)) {
                        result = game_gmap_13402f0();
                      }
                      ++v79;
                    }
                  }
                  break;
                case 9LL:
                  v65 = (*(_BYTE*)v58 & 1) != 0 ? *(__int64**)(v58 + 16)
                                                : (__int64*)(v58 + 1);
                  v66 = *v65;
                  v67 = *((unsigned __int8*)v65 + 8);
                  if (v66 == 0x85E5BABAE4BBB8E4LL && v67 == 172) {
                    v69 = *(unsigned __int64**)(v59 + 8);
                    v70 = *(unsigned __int64**)(v59 + 16);
                    while (v69 != v70) {
                      result = *v69;
                      if ((*(_QWORD*)(*v69 + 96) | *(_QWORD*)(*v69 + 552)) ==
                          0) {
                        result = game_gmap_13402f0();
                      }
                      ++v69;
                    }
                  }
                  break;
                default:
                  break;
                }
                v58 += 24;
              } while (v58 != v148);
            }
          }
          goto LABEL_287;
        }
        if (v27 != 12) {
          goto LABEL_287;
        }
        if ((*(_BYTE*)v147 & 1) != 0) {
          v28 = *(__int64**)(v147 + 16);
        }
        else {
          v28 = (__int64*)(v147 + 1);
        }
        if (*v28 == 0x81E3BA87E594BCE6LL &&
            *((_DWORD*)v28 + 2) == -1082006610) {
          *(_BYTE*)(v150 + 306) = 1;
          goto LABEL_287;
        }
        if (*v28 != 0x85E99B8AE5A28BE5LL ||
            *((_DWORD*)v28 + 2) != -1363286131) {
          v31 = *v28;
          v32 = *((_DWORD*)v28 + 2);
          v33 = v31 == 0x94E79F9CE69D88E5LL && v32 == -1834489669;
          if (v33 && v148 - v147 == 48) {
            LODWORD(v144) = std___1_stof(v147 + 24, 0);
            v34 = *(_QWORD*)(*GameData_212d718 + 16);
            if (*(_BYTE*)(v34 + 680) == 1) {
              v35 = *(_QWORD*)(v34 + 656);
              v36 = v34 + 656;
            }
            else {
              if (*(float*)(v34 + 664) <= 0.0f) {
                result = (*(__int64 (**)(__int64, __int64 (***)(), __int64))(
                    *(_QWORD*)(v34 + 656) + 8LL))(v34 + 656, &v144, v34 + 688);
                if ((result & 1) == 0) {
                  goto LABEL_287;
                }
              }
              (*(void (**)(__int64))(*(_QWORD*)(v34 + 656) + 16LL))(v34 + 656);
              v35 = *(_QWORD*)(v34 + 656);
              v36 = v34 + 656;
            }
            result = (*(__int64 (**)(__int64))(v35 + 24))(v36);
            *(_QWORD*)(v34 + 664) = 0;
            *(_WORD*)(v34 + 680) = 256;
            goto LABEL_287;
          }
          goto LABEL_287;
        }
        if ((*(_BYTE*)(v147 + 48) & 1) != 0) {
          v83 = *(__int64 (***)())(v147 + 64);
        }
        else {
          v83 = (__int64 (**)())(v147 + 49);
        }
        v145 = v83;
        v144 = (__int64 (**)())game_HashString_alt1(v83, v26);
        result = SpotMgr_13304c0(&v144);
        if (result == 0) {
          goto LABEL_287;
        }
        v85 = result;
        if ((*(_BYTE*)(v147 + 24) & 1) != 0) {
          v86 = *(_QWORD*)(v147 + 40);
        }
        else {
          v86 = v147 + 25;
        }
        v87 = game_HashString_alt1(v86, v84);
        if (v87 == 0) {
          goto LABEL_250;
        }
        v89 = *(_QWORD*)(GameData_21c99c8 + 96);
        if (v89 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
          goto LABEL_250;
        }
        v90 = v89 - 1;
        if ((v89 & (v89 - 1)) != 0) {
          v91 = v87;
          if (v87 >= v89) {
            v91 = v87 % v89;
          }
        }
        else {
          v91 = v90 & v87;
        }
        v98 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v91);
        if (v98 == nullptr) {
          goto LABEL_250;
        }
        v99 = (_QWORD*)*v98;
        if (v99 == nullptr) {
          goto LABEL_250;
        }
        if ((v89 & v90) == 0) {
          while (1) {
            v101 = v99[1];
            if (v101 == v87) {
              if (v99[2] == v87) {
                goto LABEL_244;
              }
            }
            else if ((v101 & v90) != v91) {
              goto LABEL_250;
            }
            v99 = (_QWORD*)*v99;
            if (v99 == nullptr) {
              goto LABEL_250;
            }
          }
        }
        while (1) {
          v100 = v99[1];
          if (v100 == v87) {
            break;
          }
          if (v100 >= v89) {
            v100 %= v89;
          }
          if (v100 != v91) {
            goto LABEL_250;
          }
        LABEL_214:
          v99 = (_QWORD*)*v99;
          if (v99 == nullptr) {
            goto LABEL_250;
          }
        }
        if (v99[2] != v87) {
          goto LABEL_214;
        }
      LABEL_244:
        v88 = v99[3];
        if (v88 != 0) {
          v113 = game_gmap_1347cc0(v85);
          result = GameRoutine_133e110();
          if ((result & 1) == 0) {
            goto LABEL_287;
          }
          result = GameRoutine_1545120(*(_QWORD*)(v2 + 8), v147 + 24);
          if ((result & 1) != 0) {
            goto LABEL_287;
          }
          v144 = GameData_1fa69a0;
          v146 = &v144;
          v114 = game_gmap_TroopMgr_CountTroop_134e600(v85, &v144);
          result = (unsigned __int64)v146;
          if (v146 == &v144) {
            v116 = 4;
          LABEL_285:
            result = (*v146)[v116]();
          }
          else if (v146 != nullptr) {
            v116 = 5;
            goto LABEL_285;
          }
          LANES128(v115).n128_u32[0] = v114;
          v127 = COERCE_AS(int8x16_t, *GameData_212c670);
          LANES128(v127).n128_f32[0] = -COERCE_FLOAT(*GameData_212c670);
          v128 = vbslq_s8(
              vdupq_lane_s32(
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vceqq_s32(v115, v136)).n128_u64[0]),
                  0),
              v127, *(int8x16_t*)GameData_212c670);
          *(_QWORD*)(v113 + 64) = LANES128(v128).n128_u64[0];
          v129 = *(_OWORD*)(v113 + 64);
          *((_QWORD*)&v129 + 1) = LANES128(v128).n128_u32[2];
          *(_OWORD*)(v113 + 64) = v129;
          goto LABEL_287;
        }
      LABEL_250:
        if ((*(_BYTE*)(v147 + 24) & 1) != 0) {
          v117 = *(_QWORD*)(v147 + 40);
        }
        else {
          v117 = v147 + 25;
        }
        result = game_HashString_alt1(v117, v88);
        if (result != 0) {
          v118 = *(_QWORD*)(GameData_21c9f00 + 96);
          if (v118 != 0 && *(_QWORD*)(GameData_21c9f00 + 112) != 0) {
            v120 = v118 - 1;
            if ((v118 & (v118 - 1)) != 0) {
              v121 = result;
              if (result >= v118) {
                v121 = result % v118;
              }
            }
            else {
              v121 = v120 & result;
            }
            v122 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f00 + 88) + 8 * v121);
            if (v122 != nullptr) {
              v123 = (_QWORD*)*v122;
              if (v123 != nullptr) {
                if ((v118 & v120) == 0) {
                  while (1) {
                    v125 = v123[1];
                    if (v125 == result) {
                      if (v123[2] == result) {
                        goto LABEL_278;
                      }
                    }
                    else if ((v125 & v120) != v121) {
                      goto LABEL_287;
                    }
                    v123 = (_QWORD*)*v123;
                    if (v123 == nullptr) {
                      goto LABEL_287;
                    }
                  }
                }
                do {
                  v124 = v123[1];
                  if (v124 == result) {
                    if (v123[2] == result) {
                    LABEL_278:
                      if (v123[3] != 0) {
                        result =
                            GameData_21c96e8 != 0
                                ? game_gmap_1347b30(
                                      *(_QWORD*)(GameData_21c96e8 + 8), v85)
                                : 0LL;
                        v126 = *(_WORD*)(result + 544);
                        if ((v126 & 0x40) == 0) {
                          *(_WORD*)(result + 544) = v126 | 0x40;
                        }
                      }
                      break;
                    }
                  }
                  else {
                    if (v124 >= v118) {
                      v124 %= v118;
                    }
                    if (v124 != v121) {
                      break;
                    }
                  }
                  v123 = (_QWORD*)*v123;
                } while (v123 != nullptr);
              }
            }
          }
        }
      LABEL_287:
        v82 = 1;
      LABEL_288:
        v130 = *(_QWORD*)(v2 + 8);
        if (*(_QWORD*)(v130 + 32) == *(_QWORD*)(v130 + 24)) {
          ++*(_DWORD*)(v130 + 48);
          v11 = v147;
          if (v147 == 0) {
            continue;
          }
        }
        else {
          ++*(_DWORD*)(v130 + 52);
          v11 = v147;
          if (v147 == 0) {
            continue;
          }
        }
        v131 = v148;
        if (v11 == v148) {
          goto LABEL_17;
        }
        v132 = v148;
        do {
          v133 = *(_BYTE*)(v132 - 24);
          v132 -= 24;
          if ((v133 & 1) != 0) {
            v134 = *(_QWORD*)(v131 - 8);
            if (v134 != 0) {
              if (*(_QWORD*)(*v10 + 200LL) != 0) {
                v135 = 128;
              }
              else {
                v135 = 56;
              }
              result = nn_mem_StandardAllocator_Free(*v10 + v135, v134);
            }
          }
          v131 = v132;
        } while (v132 != v11);
        v148 = v11;
        v11 = v147;
        if (v147 != 0) {
        LABEL_17:
          if (*(_QWORD*)(*v10 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v10 + v12, v11);
        }
      } while ((v82 & 1) != 0);
    }
  }
  return result;
}

__int64 ProcGmapSeq_8814e0(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    return GameRoutine_1530500(a1 + 224);
  }
  v2 = *(_QWORD*)(GameData_21f1648 + 8);
  GameManager_a2d080(game_sound_g_game_sound);
  v3 = GameData_21f1648;
  *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 1;
  result = GameRoutine_15317a0(*(_QWORD*)(v3 + 8) + 40LL);
  *(_BYTE*)(v2 + 56) = 0;
  return result;
}

__int64 ProcGmapSeq_881560(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  char v18;
  __int64 v19;
  __int64 result;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  void* v29;

  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0 &&
      (*(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 128LL) & 1) == 0 &&
      (*(_BYTE*)(a1 + 306) & 1) == 0) {
    v2 = GameData_21c9728;
    v3 = *(_QWORD*)(GameData_21c9728 + 80);
    v4 = *(_QWORD*)(GameData_21c9728 + 88);
    if (v3 == v4) {
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_14;
      }
    }
    else {
      do {
        v6 = *(_BYTE**)(**(_QWORD**)(v3 + 16) + 328LL);
        if (v6 != nullptr && *v6 != 0) {
          v29 = *(void**)(**(_QWORD**)(v3 + 16) + 328LL);
          v28 = game_HashString(v6);
          game_VariableManager_SetFlag(&v28, 1);
        }
        v3 += 24;
      } while (v3 != v4);
      *(_QWORD*)(v2 + 88) = *(_QWORD*)(v2 + 80);
      v5 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_14;
      }
    }
    if ((*(_BYTE*)(v5 + 92) & 2) == 0) {
    LABEL_14:
      v7 = GameRoutine_1347e20();
      TroopMgr_13487a0(v7);
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    if ((*(_BYTE*)(GameData_22416c0 + 55) & 1) == 0) {
      SpotMgr_13370c0();
      v29 = &GameData_1aa9eec;
      v8 = game_HashString(&GameData_1aa9eec);
      v9 = game_GameModeData_instance_;
      v28 = v8;
      if (game_GameModeData_instance_ != 0) {
        v10 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v28);
        if (v10 != 0) {
          v9 = *(_DWORD*)(v10 + 32);
        }
        else {
          v9 = 0;
        }
      }
      *(_DWORD*)(GameData_22416c0 + 48) = v9;
    }
    GameRoutine_887600();
  }
  v11 = *(_QWORD*)(GameData_21f1658 + 16);
  GameRoutine_100c050(*(_QWORD*)(v11 + 48));
  *(_BYTE*)(v11 + 175) = 1;
  v12 = MiasmaManager_14a9960(*(_QWORD*)(GameData_22416b0 + 8));
  v13 = GameRoutine_134fb00(v12);
  v14 = SpotMgr_1336ec0(v13);
  v15 = *(_QWORD*)(GameData_21c9700 + 8);
  v16 = *(__int64**)(v15 + 48);
  v17 = *(__int64**)(v15 + 56);
  if (v16 != v17) {
    v18 = 0;
    do {
      v19 = *v16++;
      v14 = Impl_132a090(v19);
      v18 |= v14;
    } while (v16 != v17);
    if ((v18 & 1) != 0) {
      v14 = GameRoutine_17bcf90();
    }
  }
  GameRoutine_14db160(v14);
  BladeResonance_14b7200(*(_QWORD*)(GameData_21f1620 + 8));
  result = GameRoutine_14ccc60(a1);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      *(_DWORD*)(game_GameModeData_instance_ + 64) == 6) {
    v29 = &GameData_1aed80c;
    result = game_HashString(&GameData_1aed80c);
    v28 = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v28);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        v21 = game_gmap_SpotMgr_GetCurrentSpot(result);
        if (v21 != 0) {
          GameRoutine_1317f10(*(_QWORD*)(GameData_21f1658 + 16), v21 + 32);
        }
        GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                            *(_QWORD*)(GameData_21f1658 + 16) + 80LL, 0);
        v22 = game_VariableManager_SetFlag(&v28, 0);
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v23 = *(_QWORD*)(GameData_21c96e8 + 8);
          v24 = *(__int64**)(v23 + 8);
          v25 = *(__int64**)(v23 + 16);
          while (v24 != v25) {
            v26 = *v24;
            if ((*(_QWORD*)(*v24 + 96) | *(_QWORD*)(*v24 + 552)) == 0 &&
                *(_DWORD*)(v26 + 84) == -1) {
              goto LABEL_46;
            }
            ++v24;
          }
        }
        v26 = 0;
      LABEL_46:
        v27 = game_gmap_SpotMgr_GetCurrentSpot(v22);
        GameRoutine_133f780(v26, v27, 1);
        return GameRoutine_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
      }
    }
  }
  return result;
}

__int64 ProcGmapSeq_8818a0(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  void* v11;

  result = GmapSituation_14db030();
  if ((result & 1) != 0) {
    v11 = &GameData_1a9e43e;
    v10 = game_HashString(&GameData_1a9e43e);
    if (game_GameModeData_instance_ == 0) {
      return GameRoutine_152c1d0(a1);
    }
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
    if (result == 0 || *(_DWORD*)(result + 32) == 0) {
      return GameRoutine_152c1d0(a1);
    }
    return result;
  }
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    goto LABEL_23;
  }
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ == 0) {
    v5 = GameData_22416c0;
    v8 = *(unsigned __int8*)(GameData_22416c0 + 53);
    goto LABEL_17;
  }
  v4 = GameData_2130e70;
  v5 = *GameData_2130e70;
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v8 = *(unsigned __int8*)(v5 + 53);
    goto LABEL_20;
  }
  v6 = *(unsigned __int8*)(v5 + 56);
  v11 = &GameData_1adfa87;
  result = game_HashString(&GameData_1adfa87);
  v7 = game_GameModeData_instance_;
  v10 = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
    if (result == 0) {
      if (v6 != 0) {
        goto LABEL_23;
      }
      goto LABEL_14;
    }
    v7 = *(_DWORD*)(result + 32) != 0;
  }
  if (v6 == v7) {
  LABEL_14:
    v5 = *v4;
    v3 = game_GameModeData_instance_;
    v8 = *(unsigned __int8*)(*v4 + 53);
    if (game_GameModeData_instance_ == 0) {
    LABEL_17:
      if (v8 == 0) {
        v9 = 0;
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  LABEL_20:
    if (v8 == *(unsigned __int8*)(v3 + 15)) {
      v9 = *(_DWORD*)(v3 + 64);
    LABEL_22:
      if (*(_DWORD*)(v5 + 44) == v9) {
        return result;
      }
    }
  }
LABEL_23:
  v11 = &GameData_1ae1f1c;
  result = game_HashString(&GameData_1ae1f1c);
  v10 = result;
  if (game_GameModeData_instance_ == 0) {
    return TroopMgr_134ebe0(result);
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &v10);
  if (result == 0 || *(_DWORD*)(result + 32) == 0) {
    return TroopMgr_134ebe0(result);
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_OpenEventBranch(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64* v12;
  int v13;
  __int64 v14;
  char v15;
  __int64 (**v16)();
  void* v17;
  char* v18;
  __int64 (***v19)();

  if (*(_BYTE*)(a1 + 306) == 1) {
    result = *(_QWORD*)(a1 + 192);
    *(_QWORD*)(a1 + 152) = 0;
    *(_QWORD*)(a1 + 192) = 0;
    if (result == a1 + 160) {
      v3 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_12;
      }
      v3 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v3))((__int64)result);
  LABEL_12:
    v5 = *(_QWORD*)(a1 + 8);
    if (v5 == 0) {
      return result;
    }
    while (1) {
      if (*(_BYTE*)v5 == 2) {
        if (*(_DWORD*)(v5 + 32) == 18) {
          *(_QWORD*)(a1 + 16) = v5;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v5 == 0) {
        return result;
      }
      v5 += 64;
    }
  }
  result = MiasmaManager_14a91c0(*(_QWORD*)(GameData_22416b0 + 8));
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  if (**(_QWORD**)(GameData_21c96f8 + 16) != 0) {
    v4 = 11;
    goto LABEL_9;
  }
  result = SpotMgr_1335920();
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  v17 = &GameData_1ab7dd7;
  v16 = (__int64 (**)())game_HashString_alt1(&GameData_1ab7dd7, v6);
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v16);
    if (v7 != 0 && *(_DWORD*)(v7 + 32) != 0 &&
        game_GameModeData_instance_ != 0 &&
        *(_QWORD*)(game_GameModeData_instance_ + 24) != 0) {
      result = GameRoutine_1377920(a1);
      v4 = 2;
      goto LABEL_9;
    }
  }
  if (*(_BYTE*)(a1 + 308) == 1) {
    GameRoutine_887920(&v16, &GameData_1ae1f43);
    result = GameRoutine_162aea0(a1, &v16);
    if (result != 0) {
    LABEL_6:
      v4 = 2;
    LABEL_9:
      *(_DWORD*)(a1 + 152) = v4;
      return result;
    }
  }
  v19 = nullptr;
  v8 = GameRoutine_104f0e0(a1, &v16);
  result = (__int64)v19;
  if (v19 == &v16) {
    v9 = 4;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_35;
    }
    v9 = 5;
  }
  result = (*v19)[v9]();
LABEL_35:
  if ((v8 & 1) != 0) {
    goto LABEL_6;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    result = GameRoutine_9d5430(a1);
    if ((result & 1) != 0) {
      goto LABEL_6;
    }
  }
  result = GameRoutine_887a40(a1);
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  result = GmapSituation_14dbd80();
  if ((result & 1) != 0) {
    v4 = 4;
    goto LABEL_9;
  }
  v15 = 0;
  v16 = GameData_1fa6ad8;
  v17 = (void*)a1;
  v19 = &v16;
  v18 = &v15;
  TroopMgr_134b560(*(_QWORD*)(GameData_21c96e8 + 8), &v16);
  result = (__int64)v19;
  if (v19 == &v16) {
    v10 = 4;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_47;
    }
    v10 = 5;
  }
  result = (*v19)[v10]();
LABEL_47:
  if ((v15 & 1) == 0) {
    *(_BYTE*)(a1 + 305) = 0;
    *(_BYTE*)(*(_QWORD*)(*GameData_212d700[0] + 8) + 56LL) = 1;
    v11 = GmapSituation_14dbe20();
    v12 = GameData_212d728[0];
    if ((v11 & 1) != 0) {
      v13 = 2;
    }
    else {
      v13 = 0;
    }
    GameRoutine_17bcef0(
        *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) & 0xFFFFFFFD |
        v13);
    v14 = GameRoutine_19a0e60(*(_QWORD*)(*v12 + 8) + 32LL);
    GameRoutine_17bcf90_alt1(v14);
    GameRoutine_175bde0(*(_QWORD*)(*v12 + 8) + 5800LL);
    GameRoutine_175b880(*(_QWORD*)(*v12 + 8) + 5800LL);
    result = GameRoutine_17bce50(1);
    if (*(_QWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 8LL) != 0) {
      *(_DWORD*)(a1 + 276) = 7;
      v4 = 12;
    }
    else {
      v4 = 13;
    }
    goto LABEL_9;
  }
  return result;
}

__int64 ProcGmapSeq_881f20(__int64 result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  if (game_GameModeData_instance_ != 0 &&
          (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x42) != 0 ||
      game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0 ||
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
    return result;
  }
  v1 = *(_QWORD**)(result + 192);
  *(_QWORD*)(result + 152) = 0;
  *(_QWORD*)(result + 192) = 0;
  if (v1 == (_QWORD*)(result + 160)) {
    v3 = result;
    v2 = 32;
  }
  else {
    if (v1 == nullptr) {
      goto LABEL_11;
    }
    v2 = 40;
    v3 = result;
  }
  (*(void (**)(_QWORD*))(*v1 + v2))(v1);
  result = v3;
LABEL_11:
  v4 = *(_QWORD*)(result + 8);
  if (v4 != 0) {
    while (1) {
      if (*(_BYTE*)v4 == 2) {
        if (*(_DWORD*)(v4 + 32) == 15) {
          *(_QWORD*)(result + 16) = v4;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v4 == 0) {
        return result;
      }
      v4 += 64;
    }
  }
  return result;
}

__int64 ProcGmapSeq_882080()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  _QWORD v3[2];

  v3[1] = &GameData_1ade186;
  result = game_HashString(&GameData_1ade186);
  v3[0] = result;
  if (game_GameModeData_instance_ != 0) {
    result = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), v3);
    if (result != 0 && *(int*)(result + 32) >= 1) {
      v1 = *(_QWORD*)(GameData_21ca310 + 56);
      LOBYTE(v3[0]) = 4;
      result = *(_QWORD*)(v1 + 556168);
      if (result != 0) {
        do {
          v2 = *(_QWORD*)(result + 432);
          game_Unit_Unknown6c46e0(result, v3);
          result = v2;
        } while (v2 != 0);
      }
    }
  }
  return result;
}

__int64 ProcGmapSeq_8827e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64** v11;
  __int64** v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;

  v1 = GameData_21c96e8;
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
    v8 = game_gmap_SpotMgr_GetCurrentSpot(a1);
    v1 = GameData_21c96e8;
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
  *(_BYTE*)(v8 + 178) |= 1u;
  v9 = *(_QWORD*)(v1 + 8);
  v10 = *(_DWORD*)(v9 + 56);
  v11 = *(__int64***)(v9 + 8);
  v12 = *(__int64***)(v9 + 16);
  if (v10 < 0) {
    for (; v11 != v12; ++v11) {
      v13 = *v11;
      if ((*v11)[12] == 0 && v13[69] == 0) {
        goto LABEL_22;
      }
    }
  }
  else if (v11 != v12) {
    while (1) {
      v14 = *v11++;
      v13 = v14;
      if (*((_DWORD*)v14 + 21) == v10) {
        break;
      }
      if (v11 == v12) {
        goto LABEL_18;
      }
    }
  LABEL_22:
    v15 = *v13;
    return SpotMgr_1333f20(v15);
  }
LABEL_18:
  v15 = game_gmap_SpotMgr_GetCurrentSpot(v8);
  return SpotMgr_1333f20(v15);
}

__int64 ProcGmapSeq_882900(__int64 a1)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  char* v7;
  char* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;
  signed __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  char* v24;
  __int64 v25;
  _BYTE* v26;
  char v27;
  __int64 v28;
  __int64 v29;

  v2 = TroopMgr_13486a0();
  result = TroopMgr_1348ec0(v2);
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(__int64**)(v4 + 8);
  v6 = *(__int64**)(v4 + 16);
  if (v5 != v6) {
    v29 = a1;
    v7 = nullptr;
    v8 = nullptr;
    v9 = 0;
    v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v11 = *v5;
      if ((*(_WORD*)(*v5 + 544) & 0x40) != 0) {
        if ((unsigned __int64)v8 < v9) {
          *(_QWORD*)v8 = v11;
          v8 += 8;
        }
        else {
          v12 = (char*)(v8 - v7);
          v13 = (v8 - v7) >> 3;
          v14 = v13 + 1;
          if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
            goto LABEL_38;
          }
          if ((__int64)(v9 - (_QWORD)v7) >> 2 > v14) {
            v14 = (__int64)(v9 - (_QWORD)v7) >> 2;
          }
          if (v9 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v15 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v15 = v14;
          }
          if (v15 != 0) {
            if (v15 >> 61 != 0) {
              GameRoutine_60a210(result);
            }
            v16 = fw_memory_HeapManager_Allocate(*v10, 8 * v15, 16, 0);
          }
          else {
            v16 = 0;
          }
          v9 = v16 + 8 * v15;
          v17 = (char*)(v8 - v7);
          v18 = (__int64)&v12[v16 + -8 * v13];
          *(_QWORD*)&v12[v16] = v11;
          v8 = &v12[v16 + 8];
          result = memcpy(v18, v7, v17);
          if (v7 != nullptr) {
            v19 = 128;
            if (*(_QWORD*)(*v10 + 200LL) == 0) {
              v19 = 56;
            }
            result = nn_mem_StandardAllocator_Free_alt1(*v10 + v19);
          }
          v7 = (char*)v18;
        }
      }
      ++v5;
    } while (v5 != v6);
    v20 = v8 - v7;
    if (v8 != v7) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f1610,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21f1610) != 0) {
        GameData_21f1550 = 13;
        GameData_21f1590 = 13;
        GameData_21f1558 = 0;
        GameData_21f1560 = (__int64)GameRoutine_888560;
        GameData_21f1568 = 0;
        GameData_21f1570 = 0;
        GameData_21f1578 = 0;
        GameData_21f1580 = 0;
        GameData_21f1588 = 0;
        GameData_21f15a8 = 0;
        GameData_21f15b0 = 0;
        GameData_21f15b8 = 0;
        GameData_21f15c0 = 0;
        GameData_21f15c8 = 0;
        GameData_21f15d0 = 0;
        GameData_21f15f8 = 0;
        GameData_21f1598 = 0;
        GameData_21f15a0 = (__int64)GameRoutine_8885e0;
        GameData_21f1600 = 0;
        GameData_21f1608 = 0;
        GameData_21f15f0 = 0;
        GameData_21f15e0 = 0;
        GameData_21f15e8 = 0;
        GameData_21f15d8 = 0;
        __cxa_guard_release(&GameData_21f1610);
      }
      v21 = fw_memory_HeapManager_Allocate(*v10, 176, 16, 0);
      v22 = GameData_212c608[0];
      *(_QWORD*)(v21 + 88) = 0;
      *(_QWORD*)(v21 + 96) = 0;
      *(_QWORD*)(v21 + 104) = 0;
      *(_QWORD*)(v21 + 112) = 0;
      *(_QWORD*)(v21 + 120) = 0;
      *(_QWORD*)(v21 + 128) = 0;
      *(_WORD*)(v21 + 136) = 0;
      *(_QWORD*)(v21 + 16) = 0;
      *(_QWORD*)(v21 + 24) = "NULL";
      *(_QWORD*)(v21 + 32) = 0;
      *(_QWORD*)(v21 + 138) = 0;
      *(_QWORD*)(v21 + 144) = 0;
      *(_QWORD*)(v21 + 40) = 0;
      *(_QWORD*)(v21 + 48) = 0;
      *(_QWORD*)(v21 + 56) = 0;
      *(_QWORD*)(v21 + 64) = 0;
      *(_QWORD*)(v21 + 72) = 0;
      *(_QWORD*)(v21 + 80) = 0;
      *(_QWORD*)v21 = v22 + 16;
      *(_QWORD*)(v21 + 8) = 0;
      result = game_ProcInst_Register(v21);
      *(_QWORD*)(v21 + 152) = 0;
      *(_QWORD*)(v21 + 160) = 0;
      *(_QWORD*)(v21 + 168) = 0;
      *(_QWORD*)v21 = game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable;
      if (v20 < 0) {
      LABEL_38:
        GameRoutine_888610(result);
      }
      v23 = fw_memory_HeapManager_Allocate(*v10, v8 - v7, 16, 0);
      v24 = (char*)(v23 + v20);
      *(_QWORD*)(v21 + 152) = v23;
      *(_QWORD*)(v21 + 160) = v23;
      *(_QWORD*)(v21 + 168) = v23 + v20;
      memcpy(v23, v7, v8 - v7);
      *(_QWORD*)(v21 + 160) = v24;
      v25 = *(_QWORD*)(v29 + 40);
      if (v25 != 0) {
        *(_QWORD*)(v25 + 48) = v21;
        *(_QWORD*)(v21 + 56) = *(_QWORD*)(v29 + 40);
      }
      *(_QWORD*)(v29 + 40) = v21;
      *(_QWORD*)(v21 + 24) = "ProcGmapEscapeTroopSeq";
      *(_QWORD*)(v21 + 32) = v29;
      *(_DWORD*)(v21 + 140) = game_HashString32("ProcGmapEscapeTroopSeq");
      *(_QWORD*)(v21 + 64) = 0;
      *(_QWORD*)(v21 + 72) = 24;
      *(_QWORD*)(v21 + 80) = 1;
      *(_QWORD*)(v21 + 8) = &GameData_21f1550;
      *(_QWORD*)(v21 + 16) = &GameData_21f1550;
      (*(void (**)(__int64))(*(_QWORD*)v21 + 32LL))(v21);
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 136LL))(v21);
      if ((result & 1) != 0 && (*(_WORD*)(v21 + 136) & 0x100) == 0) {
        *(_WORD*)(v21 + 136) |= 0x100u;
      }
      v26 = *(_BYTE**)(v21 + 32);
      v27 = v26[138];
      if (v27 == 0) {
        result = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v26 + 64LL))(v26);
        v27 = v26[138];
      }
      v26[138] = v27 + 1;
      *(_WORD*)(v21 + 136) |= 2u;
    }
    if (v7 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(*v10 + 200LL) == 0) {
        v28 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*v10 + v28);
    }
  }
  return result;
}

__int64 ProcGmapSeq_882cb0(__int64 a1)
{
  __int64* v2;
  __int64 result;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v2 = GameData_212d718;
  result = GameRoutine_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                               *(_QWORD*)(*GameData_212d708 + 16) + 80LL, 0);
  if (*(float*)(*(_QWORD*)(*v2 + 16) + 796LL) ==
      *(float*)(*(_QWORD*)(*v2 + 16) + 792LL)) {
    v4 = *(unsigned __int8**)(a1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapSeq_882d60(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  char v6;
  __int64 v7;
  __int64 v8;

  result = GameRoutine_718280_alt1();
  if ((result & 1) == 0) {
    return result;
  }
  if (GameData_21ec7b8 == 0) {
    v3 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    GameRoutine_1130770(v3, "MID_3_ISM_GameOver_e01", nullptr);
    v4 = *(_QWORD*)(a1 + 40);
    if (v4 != 0) {
      *(_QWORD*)(v4 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "talk::Seq";
    *(_QWORD*)(v3 + 32) = a1;
    *(_DWORD*)(v3 + 140) = game_HashString32_alt1((__int64)"talk::Seq");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_216de68;
    *(_QWORD*)(v3 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3) & 1) != 0 &&
        (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
    v5 = *(_BYTE**)(v3 + 32);
    v6 = v5[138];
    if (v6 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v5 + 64LL))(*(_QWORD*)(v3 + 32));
      v6 = v5[138];
    }
    v5[138] = v6 + 1;
    *(_WORD*)(v3 + 136) |= 2u;
  }
  result = *(_QWORD*)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == a1 + 160) {
    v7 = 32;
  }
  else {
    if (result == 0) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v7))((__int64)result);
LABEL_16:
  v8 = *(_QWORD*)(a1 + 8);
  if (v8 != 0) {
    while (1) {
      if (*(_BYTE*)v8 == 2) {
        if (*(_DWORD*)(v8 + 32) == 17) {
          *(_QWORD*)(a1 + 16) = v8;
          *(_WORD*)(a1 + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v8 == 0) {
        return result;
      }
      v8 += 64;
    }
  }
  return result;
}

__int64 ProcGmapSeq_882f10(__int64 result)
{
  __int64 v1;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = result;
    result = GameRoutine_134c680(result);
    if (result == 0) {
      return GameRoutine_1522780(v1);
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct(__int64 a1)
{
  __int64 result;
  __int64 v2;
  _QWORD v3[4];
  _QWORD* v4;
  char v5;

  v5 = 0;
  v3[0] = GameData_1fa6c10;
  v3[1] = a1;
  v4 = v3;
  v3[2] = &v5;
  TroopMgr_13460a0(v3);
  result = (__int64)v4;
  if (v4 == v3) {
    v2 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v4 + v2))((__int64)v4);
LABEL_6:
  if (v5 == 1) {
    *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5835LL) = 1;
  }
  return result;
}

__int64 ProcGmapSeq_883020(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64** v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  char* v10;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  char v15;
  __int64 v16;
  int v17;

  v1 = *(__int64**)(GameData_21f1620 + 8);
  if (v1[2] == 0) {
    return result;
  }
  v2 = *v1;
  v3 = result;
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
          goto LABEL_8;
        }
      }
    LABEL_13:
      result = *v8;
      if (v2 != *v8) {
        return result;
      }
      goto LABEL_14;
    }
  }
  else {
    while (v6 != v7) {
      v9 = *v6++;
      v8 = v9;
      if (*((_DWORD*)v9 + 21) == v5) {
        goto LABEL_13;
      }
    }
  }
LABEL_8:
  result = (__int64)game_gmap_SpotMgr_GetCurrentSpot_alt2();
  if (v2 != result) {
    return result;
  }
LABEL_14:
  v10 = *(char**)(v1[2] + 80);
  if (GameData_21ec7b8 == 0 && v10 != nullptr) {
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    GameRoutine_1130770(v12, v10, nullptr);
    v13 = *(_QWORD*)(v3 + 40);
    if (v13 != 0) {
      *(_QWORD*)(v13 + 48) = v12;
      *(_QWORD*)(v12 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v12;
    *(_QWORD*)(v12 + 24) = "talk::Seq";
    *(_QWORD*)(v12 + 32) = v3;
    *(_DWORD*)(v12 + 140) = game_HashString32_alt1((__int64)"talk::Seq");
    *(_QWORD*)(v12 + 64) = 0;
    *(_QWORD*)(v12 + 72) = 24;
    *(_QWORD*)(v12 + 80) = 1;
    *(_QWORD*)(v12 + 8) = &GameData_216de68;
    *(_QWORD*)(v12 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v12 + 32LL))(v12);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v12 + 136LL))(v12);
    if ((result & 1) != 0 && (*(_WORD*)(v12 + 136) & 0x100) == 0) {
      *(_WORD*)(v12 + 136) |= 0x100u;
    }
    v14 = *(_BYTE**)(v12 + 32);
    v15 = v14[138];
    if (v15 == 0) {
      result =
          (*(__int64 (**)(_QWORD))(*(_QWORD*)v14 + 64LL))(*(_QWORD*)(v12 + 32));
      v15 = v14[138];
    }
    v14[138] = v15 + 1;
    *(_WORD*)(v12 + 136) |= 2u;
  }
  v16 = *(_QWORD*)(GameData_21f1620 + 8);
  if (*(_QWORD*)(v16 + 16) != 0) {
    v17 = *(_DWORD*)(v16 + 32);
    *(_QWORD*)v16 = 0;
    *(_QWORD*)(v16 + 8) = 0;
    *(_QWORD*)(v16 + 16) = 0;
    *(_BYTE*)(v16 + 24) = 0;
    *(_DWORD*)(v16 + 32) = v17 + 1;
  }
  return result;
}

__int64 ProcGmapSeq_883220()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int* v6;
  int* v7;
  __int64 result;

  v0 = *(_QWORD**)(GameData_21f1660 + 8);
  v2 = v0[3];
  v1 = v0[4];
  v4 = *v0;
  v3 = v0[1];
  if (v1 != v2 || v3 != v4) {
    v6 = (int*)(v0 + 6);
    v7 = (int*)v0 + 13;
    if (v1 == v2) {
      v1 = v3;
      v2 = v4;
      v7 = v6;
    }
    if (0xAAAAAAAAAAAAAAABLL * ((v1 - v2) >> 3) > *v7) {
      return GameRoutine_15255d0();
    }
  }
  return result;
}

__int64 ProcGmapSeq_8832a0(__int64 result)
{
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[2];

  v1 = result;
  if (game_GameModeData_instance_ == 0 ||
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) == 0) {
    if (*(_BYTE*)(result + 307) == 1) {
    LABEL_4:
      v2 = 18;
    LABEL_25:
      *(_DWORD*)(v1 + 152) = v2;
      return result;
    }
    v11[1] = &GameData_1ade186;
    result = game_HashString(&GameData_1ade186);
    v11[0] = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v11);
      if (result != 0 && *(int*)(result + 32) > 0) {
      LABEL_23:
        if (*(_DWORD*)(v1 + 152) != 0) {
          return result;
        }
        v2 = 2;
        goto LABEL_25;
      }
    }
    v3 = *(_QWORD*)(GameData_21c96e8 + 8);
    v4 = *(_DWORD*)(v3 + 56);
    v5 = *(__int64***)(v3 + 8);
    v6 = *(__int64***)(v3 + 16);
    if (v4 < 0) {
      if (v5 != v6) {
        while (1) {
          v7 = *v5;
          if ((*v5)[12] == 0 && v7[69] == 0) {
            break;
          }
          if (++v5 == v6) {
            goto LABEL_14;
          }
        }
      LABEL_19:
        result = *v7;
        v9 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_23;
        }
        goto LABEL_20;
      }
    }
    else {
      while (v5 != v6) {
        v8 = *v5++;
        v7 = v8;
        if (*((_DWORD*)v8 + 21) == v4) {
          goto LABEL_19;
        }
      }
    }
  LABEL_14:
    result = game_gmap_SpotMgr_GetCurrentSpot(result);
    v9 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_23;
    }
  LABEL_20:
    v10 = *(_QWORD*)(v9 + 24);
    if (v10 != 0 && *(_BYTE*)(v10 + 152) == 4 &&
        *(_QWORD*)(v10 + 168) == *(_QWORD*)(result + 120)) {
      goto LABEL_4;
    }
    goto LABEL_23;
  }
  return result;
}

__int64 ProcGmapSeq_883400()
{
  __int64 v0;
  int v1;
  __int64* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64* v9;
  __int64* i;

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
  result = GameRoutine_888970(v4 + 24, 0, 0, 0);
  v8 = *(_QWORD*)(GameData_21c96e8 + 8);
  v9 = *(__int64**)(v8 + 8);
  for (i = *(__int64**)(v8 + 16); v9 != i; ++v9) {
    result = *v9;
    if ((*(_QWORD*)(*v9 + 96) | *(_QWORD*)(*v9 + 552)) != 0 ||
        game_GameModeData_instance_ == 0 ||
        *(_DWORD*)(game_GameModeData_instance_ + 60) != 3 ||
        (*(_DWORD*)(result + 84) & 0x80000000) == 0) {
      result = GameRoutine_133f780(result, *(_QWORD*)result, 1);
    }
  }
  return result;
}

__int64 ProcGmapSeq_883510(__int64 a1)
{
  __int64 result;

  result = GameRoutine_134be40();
  *(_BYTE*)(a1 + 305) = 1;
  return result;
}

__int64 ProcGmapSeq_883540(__int64 a1)
{
  unsigned int* v2;
  __int64 result;
  __int64 (*v4)();
  __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  bool v8;
  int v9;
  __int64 v10;
  struct {
    __int64 (*v11)();
    __int64 (*v12)();
  } v11_;

  v2 = TroopMgr_134c680();
  result = X8CALL_X0(
      __int64, GameRoutine_134b980((void*)(&v11_.v11), (__int64 (*)())v2));
  if (v11_.v11 == v11_.v12) {
    v9 = 1;
    if (v11_.v11 == nullptr) {
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  v4 = (__int64 (*)())((char*)v11_.v11 + 8);
  while (1) {
    v5 = *((_QWORD*)v4 - 1);
    v6 = *(_QWORD*)(v5 + 96);
    if (v6 != 0 && *(_BYTE*)(v6 + 129) != 0) {
      break;
    }
    if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 1 ||
        (*(_WORD*)(v5 + 544) & 0x100) != 0) {
      break;
    }
    v7 = *(unsigned __int8**)(v5 + 88);
    if (v7 != nullptr) {
      v7 = *((unsigned __int8**)v7 + 6);
      if (v7 != nullptr) {
        LODWORD(v7) = *v7 != 0;
      }
    }
    if (((unsigned __int8)v7 & 1) == 0) {
      v8 = v4 == v11_.v12;
      v4 = (__int64 (*)())((char*)v4 + 8);
      if (!v8) {
        continue;
      }
    }
    goto LABEL_16;
  }
  LODWORD(v7) = 1;
LABEL_16:
  v9 = (unsigned int)v7 ^ 1;
  if (v11_.v11 != nullptr) {
  LABEL_17:
    v11_.v12 = v11_.v11;
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v11_.v11);
  }
LABEL_20:
  if (v9 != 0 &&
      (*(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 129LL) & 1) == 0) {
    *(_DWORD*)(a1 + 152) = 8;
  }
  return result;
}

__int64 ProcGmapSeq_883660(__int64 result)
{
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 2;
  }
  *(_DWORD*)(result + 152) = 19;
  return result;
}

__int64 ProcGmapSeq_883680(__int64 result)
{
  if ((*(_BYTE*)(result + 310) & 1) == 0 && game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    return GameRoutine_120e900();
  }
  return result;
}

_QWORD* ProcGmapSeq_8836c0(__int64 a1)
{
  unsigned int* v2;
  _QWORD* result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  __int64 v8;
  __int64 (*v9)();
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    int v13;
    char gap12_[4];
    __int64 v14;
    __int64 v15;
    __int64 v16;
  } v13_;
  struct {
    __int64 (*v17)();
    __int64 (*v18)();
  } v17_;

  v2 = TroopMgr_134c680();
  result = (_QWORD*)X8CALL_X0(
      __int64, GameRoutine_134b980((void*)(&v17_.v17), (__int64 (*)())v2));
  if (v17_.v18 != v17_.v17) {
    v4 = *(_QWORD*)v17_.v17;
    v5 = *(_QWORD*)(*(_QWORD*)v17_.v17 + 96LL);
    if ((v5 == 0 || *(_BYTE*)(v5 + 129) == 0) &&
        (game_GameModeData_instance_ == 0 ||
         *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) &&
        (*(_WORD*)(v4 + 544) & 0x100) == 0) {
      v6 = *(_QWORD*)(v4 + 88);
      if (v6 == 0 || (v7 = *(_BYTE**)(v6 + 48)) == nullptr || *v7 == 0) {
        v13_.v14 = 0;
        v13_.v15 = 0;
        v13_.v16 = 0;
        v13_.v13 = 5;
        result = (_QWORD*)GameRoutine_18fa160(a1, (__int64)&v13_.v13, 0);
        if (v13_.v14 != 0) {
          v13_.v15 = v13_.v14;
          v8 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v8 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v13_.v14);
          v9 = v17_.v17;
          if (v17_.v17 != nullptr) {
            goto LABEL_27;
          }
          return result;
        }
      }
    }
  LABEL_26:
    v9 = v17_.v17;
    if (v17_.v17 != nullptr) {
      goto LABEL_27;
    }
    return result;
  }
  result = *(_QWORD**)(a1 + 192);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  if (result == (_QWORD*)(a1 + 160)) {
    v10 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_20;
    }
    v10 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))((__int64)result);
LABEL_20:
  v11 = *(_QWORD*)(a1 + 8);
  if (v11 == 0) {
    goto LABEL_26;
  }
  while (*(_BYTE*)v11 != 2) {
    if (*(_BYTE*)v11 == 0) {
      goto LABEL_26;
    }
  LABEL_23:
    v11 += 64;
  }
  if (*(_DWORD*)(v11 + 32) != 13) {
    goto LABEL_23;
  }
  *(_QWORD*)(a1 + 16) = v11;
  *(_WORD*)(a1 + 136) &= ~0x80u;
  v9 = v17_.v17;
  if (v17_.v17 == nullptr) {
    return result;
  }
LABEL_27:
  v17_.v18 = v9;
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v12 = 56;
  }
  return (_QWORD*)nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v9);
}

__int64 ProcGmapSeq_883860(__int64 result)
{
  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 0x10) != 0) {
    if (*(_DWORD*)(GameData_21c9608 + 308) != 5) {
      *(_DWORD*)(GameData_21c9608 + 308) = 5;
    }
    *(_DWORD*)(result + 152) = 3;
  }
  return result;
}

__int64 ProcGmapSeq_8838a0(__int64 a1)
{
  unsigned int* v1;
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  bool v7;
  unsigned __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 (*v21)();
  unsigned __int64 v22;
  int v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  _QWORD* v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  int v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64* v47;
  __int64* v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  _QWORD* v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 result;
  __int64 v62;
  __int64 v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int v71;
  char v72;
  int v73;
  __int128 v74;
  __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  char v82;
  char v83;
  __int64 v84;
  struct {
    __int64 v85;
    _QWORD* v86;
    unsigned __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    char* v91;
    __int64* v92;
    unsigned __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    char gap288_[24];
    char v99;
  } v85_;
  struct {
    __int64 (*v100)();
    __int64 (*v101)();
  } v100_;

  v1 = TroopMgr_134c680();
  GameRoutine_134b980((void*)(&v100_.v100), (__int64 (*)())v1);
  v85_.v99 = 0;
  v85_.v91 = nullptr;
  v85_.v92 = nullptr;
  v85_.v93 = 0;
  v85_.v94 = 0;
  v85_.v95 = 0;
  v85_.v96 = 0;
  LOBYTE(v85_.v97) = 0;
  v3 = *((_QWORD*)v1 + 16);
  v82 = 0;
  v83 = 0;
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v85_.v85 = 0;
  v85_.v86 = nullptr;
  v85_.v87 = 0;
  v85_.v88 = 0;
  v85_.v89 = 0;
  v85_.v90 = 0;
  LOWORD(v64) = 0;
  v84 = 0x500000005LL;
  if (v3 != 0) {
    GameRoutine_1a09ce0(&v64, "Field_", 6);
    v4 = *(_QWORD*)(v3 + 8);
    v5 = strlen(v4);
    GameRoutine_1a09ce0(&v64, v4, v5);
    v6 = (unsigned __int8)v64;
    v2 = v65;
  }
  else {
    v6 = 0;
  }
  if ((v6 & 1) == 0) {
    v2 = v6 >> 1;
  }
  if (v2 != 0) {
    if ((v75 & 1) == 0) {
      goto LABEL_8;
    }
  LABEL_12:
    v7 = (v6 & 1) == 0;
    v8 = v6 >> 1;
    if (v7) {
      v9 = (char*)&v64 + 1;
    }
    else {
      v9 = v66;
    }
    if (v7) {
      v10 = v8;
    }
    else {
      v10 = v65;
    }
    SpineModel_64dde0_alt1(&v75, (__int64)v9, v10);
    if ((v64 & 1) == 0) {
      goto LABEL_25;
    }
    goto LABEL_21;
  }
  GameRoutine_60a020((__int64)&v64, (__int64)&GameData_1af8f10);
  v6 = (unsigned __int8)v64;
  if ((v75 & 1) != 0) {
    goto LABEL_12;
  }
LABEL_8:
  if ((v6 & 1) != 0) {
    GameRoutine_64df20_alt1(&v75, (__int64)v66, v65);
    if ((v64 & 1) == 0) {
      goto LABEL_25;
    }
  }
  else {
    v75 = v64;
    v76 = v65;
    v77 = (__int64)v66;
    if ((v64 & 1) == 0) {
      goto LABEL_25;
    }
  }
LABEL_21:
  if (v66 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v66);
  }
LABEL_25:
  if ((Impl_1327400(v1) & 1) != 0) {
    v85_.v96 |= 0x200uLL;
  }
  v12 = TroopMgr_134ca00();
  v13 = v85_.v96;
  if ((v12 & 1) != 0) {
    v13 = v85_.v96 | 0x800;
  }
  v85_.v95 = *((_QWORD*)v1 + 15);
  v85_.v96 = v13 | 0x401000;
  if (GameData_21c9608 != 0) {
    if ((*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0) {
      v14 = 1;
    }
    else {
      v14 = *(_DWORD*)(GameData_21c9608 + 308);
    }
  }
  else {
    v14 = 5;
  }
  if (v14 <= 1) {
    v14 = 1;
  }
  if (v14 >= (int)v84) {
    v14 = v84;
  }
  if (v14 >= 5) {
    v15 = 5;
  }
  else {
    v15 = v14;
  }
  HIDWORD(v84) = v15;
  GameRoutine_eb5940((void*)(&v64));
  v17 = v64;
  v16 = v65;
  if (v64 != v65) {
    v18 = (__int64*)v64;
    do {
      v19 = *v18++;
      CmdbtlPartyNatives_eb8a90((__int64)&v75, v19, 0);
    } while (v18 != (__int64*)v16);
  }
  if (v17 != 0) {
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v20,
                                  v17);
  }
  v21 = v100_.v100;
  if (v100_.v101 != v100_.v100) {
    v22 = 0;
    v23 = 0;
    do {
      v24 = *((_QWORD**)v21 + v22);
      v25 = v24[12];
      if (*(_BYTE*)(v25 + 32) == 1) {
        v26 = *(unsigned __int16*)(v25 + 152);
        if (*(_WORD*)(v25 + 152) != 0) {
          v27 = 8;
          do {
            v28 = *(_QWORD*)(*(_QWORD*)(v25 + 160) + v27);
            v72 = 0;
            v65 = 0;
            v66 = nullptr;
            v67 = 0;
            v68 = 0;
            v69 = 0;
            v70 = 0;
            LOBYTE(v71) = 0;
            v73 = 3;
            v74 = (__typeof__(v74)){0};
            v64 = v28;
            v29 =
                *((unsigned __int8*)Troop_133e4e0(*((_QWORD*)v21 + v22)) + 498);
            v72 = 1;
            v73 = 1;
            LODWORD(v74) = v23;
            v71 = v29;
            v30 = v85_.v86;
            if ((unsigned __int64)v85_.v86 >= v85_.v87) {
              v31 = (_QWORD*)CmdbtlPartyNatives_eba740(&v85_.v85, &v64);
            }
            else {
              CmdbtlPartyNatives_eba910(v85_.v86, &v64);
              v31 = v30 + 11;
            }
            v85_.v86 = v31;
            CmdbtlPartyNatives_eb8c40((__int64)&v75);
            if (v68 != 0) {
              v69 = v68;
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v32 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v68);
            }
            if (v65 != 0) {
              v66 = (char*)v65;
              v33 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v33 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v65);
            }
            --v26;
            v27 += 16;
          } while (v26 != 0);
        }
        else {
          v34 = v24[71];
          v35 = v24[72];
          while (v34 != v35) {
            v69 = 0;
            v70 = 0;
            v67 = 0;
            v68 = 0;
            v65 = 0;
            v66 = nullptr;
            *(_QWORD*)((char*)&v74 + 4) = 0;
            HIDWORD(v74) = 0;
            v64 = *(_QWORD*)(v34 + 392);
            v36 = *(unsigned __int8*)(v34 + 498);
            v72 = 1;
            v73 = 1;
            LODWORD(v74) = v23;
            v71 = v36;
            v37 = v85_.v86;
            if ((unsigned __int64)v85_.v86 >= v85_.v87) {
              v38 = (_QWORD*)CmdbtlPartyNatives_eba740(&v85_.v85, &v64);
            }
            else {
              CmdbtlPartyNatives_eba910(v85_.v86, &v64);
              v38 = v37 + 11;
            }
            v85_.v86 = v38;
            CmdbtlPartyNatives_eb8c40((__int64)&v75);
            if (v68 != 0) {
              v69 = v68;
              v39 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v39 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v68);
            }
            if (v65 != 0) {
              v66 = (char*)v65;
              v40 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v40 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v65);
            }
            v34 += 2224;
          }
        }
        ++v23;
        v25 = *(_QWORD*)(*((_QWORD*)v21 + v22) + 96LL);
      }
      v41 = *(_QWORD*)(v25 + 40);
      v42 = strlen(v41);
      if (v42 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v43 = v42;
      if (v42 >= 0x17) {
        if ((v42 | 7) == 0x17) {
          v45 = 26;
        }
        else {
          v45 = (v42 | 7) + 1;
        }
        v44 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v45, 16, 0);
        v65 = v43;
        v66 = v44;
        v64 = v45 | 1;
      }
      else {
        v44 = (char*)&v64 + 1;
        LOBYTE(v64) = 2 * v42;
        if (v42 == 0) {
          goto LABEL_90;
        }
      }
      memmove(v44, v41, v43);
    LABEL_90:
      v47 = v85_.v92;
      v46 = v85_.v93;
      v44[v43] = 0;
      if ((unsigned __int64)v47 >= v46) {
        v49 = v85_.v91;
        v50 = (char*)v47 - v85_.v91;
        v51 = 1 - 0x5555555555555555LL * (v50 >> 3);
        if (v51 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00();
        }
        v52 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v46 - (_QWORD)v85_.v91) >> 3);
        if (2 * v52 > v51) {
          v51 = 2 * v52;
        }
        if (v52 >= 0x555555555555555LL) {
          v53 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v53 = v51;
        }
        if (v53 != 0) {
          if (v53 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210_alt1();
          }
          v54 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    24 * v53, 16, 0);
        }
        else {
          v54 = 0;
        }
        v55 = (_QWORD*)(v54 + v50);
        if ((v64 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)(v54 + v50), (__int64)v66,
                                        v65);
          v49 = v85_.v91;
          v50 = (char*)v85_.v92 - v85_.v91;
        }
        else {
          v56 = v65;
          *v55 = v64;
          v55[1] = v56;
          v55[2] = v66;
        }
        v57 = v54 + 24 * v53;
        v48 = v55 + 3;
        memcpy((char*)v55 - v50, v49, v50);
        v85_.v91 = (char*)v55 - v50;
        v85_.v92 = v55 + 3;
        v85_.v93 = v57;
        if (v49 != nullptr) {
          v58 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v58 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v49);
        }
      }
      else if ((v64 & 1) != 0) {
        fw_text_String_CopyTerminated(v47, (__int64)v66, v65);
        v48 = v47 + 3;
      }
      else {
        v48 = v47 + 3;
        *v47 = v64;
        v47[1] = v65;
        v47[2] = (__int64)v66;
      }
      v85_.v92 = v48;
      if ((v64 & 1) != 0 && v66 != nullptr) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v66);
      }
      v21 = v100_.v100;
      ++v22;
    } while (v22 < ((char*)v100_.v101 - (char*)v100_.v100) >> 3);
  }
  ProcCmdBtlSeq_e61c90((__int64)&GameData_2216780, (__int64)&v75);
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 9;
  }
  *(_DWORD*)(a1 + 152) = 19;
  if (v85_.v99 == 1 && v85_.v97 != 0) {
    v85_.v98 = v85_.v97;
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v60,
                                  v85_.v97);
  }
  result = GameRoutine_667c80((__int64)&v75);
  if (v100_.v100 != nullptr) {
    v100_.v101 = v100_.v100;
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v100_.v100);
  }
  return result;
}

__int64 ProcGmapSeq_8840d0(__int64 result)
{
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 2;
  }
  *(_DWORD*)(result + 152) = 19;
  return result;
}

__int64 ProcGmapSeq_884100(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64** v15;
  __int64** v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  _QWORD* i;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v40;
  __int64 (**v41)();
  _QWORD* v42;
  __int64 (**j)();
  __int64 (*v44)();
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 (*v48)();
  __int64 v49;
  __int64 v50;
  bool v51;
  __int64 v52;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 (**v64)();
  __int64 (**v65)();
  __int64 (**v66)();
  __int64 (***v67)();

  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v6 = v5 + 1;
    v7 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v6++;
        v7 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  v10 = *(_QWORD*)(v7 + 8);
  if (v10 != 0 || *(_BYTE*)(result + 309) != 0) {
    if (*(_BYTE*)(result + 309) == 0) {
      goto LABEL_94;
    }
    v66 = (__int64 (**)())&GameData_1ade186;
    v65 = (__int64 (**)())game_HashString(&GameData_1ade186);
    if (game_GameModeData_instance_ == 0 ||
        (v12 = game_GameVariableTable_Find(
             *(_QWORD*)(game_GameModeData_instance_ + 48), &v65)) == 0 ||
        *(int*)(v12 + 32) < 1) {
      v19 = *(_QWORD*)(*v2 + 8);
      v20 = *(_DWORD*)(v19 + 56);
      v21 = *(__int64**)(v19 + 8);
      v22 = *(__int64**)(v19 + 16);
      v23 = v21;
      if (v20 < 0) {
        while (1) {
          v24 = *v23;
          if (*(_QWORD*)(*v23 + 96) == 0 && *(_QWORD*)(v24 + 552) == 0) {
            break;
          }
          if (++v23 == v22) {
          LABEL_24:
            v24 = 0;
            break;
          }
        }
      }
      else {
        while (1) {
          v25 = *v23++;
          v24 = v25;
          if (*(_DWORD*)(v25 + 84) == v20) {
            break;
          }
          if (v23 == v22) {
            goto LABEL_24;
          }
        }
      }
      if (v20 < 0) {
        for (i = v21 + 1;; ++i) {
          v27 = (_QWORD*)*(i - 1);
          if (v27[12] == 0 && v27[69] == 0) {
            break;
          }
        }
      }
      else {
        v28 = *v21;
        v26 = v21 + 1;
        v27 = (_QWORD*)v28;
        if (*(_DWORD*)(v28 + 84) != v20) {
          do {
            v29 = *v26++;
            v27 = (_QWORD*)v29;
          } while (*(_DWORD*)(v29 + 84) != v20);
        }
      }
      v31 = v27[1];
      v32 = fw_memory_g_heap_manager_ptr;
      v33 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v33 = v31;
      GameRoutine_888970(v24 + 24, v33, v33 + 1, 1);
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v32 + v34);
      v35 = v24;
      if (*(_QWORD*)(v24 + 32) != *(_QWORD*)(v24 + 24)) {
        if ((v36 = *(_QWORD*)(v24 + 96), v37 = *(_QWORD*)(v24 + 552),
             (v36 | v37) == 0) ||
            v36 == 0 && v37 != 0 && *(_QWORD*)(v24 + 104) == 0 &&
                *(__int16*)(v24 + 642) * *(__int16*)(v24 + 640) *
                        *(__int16*)(v24 + 644) ==
                    0 &&
                *(_QWORD*)(v37 + 352) == 0 ||
            (v35 = v24, (*(_WORD*)(v24 + 544) & 3) != 2)) {
          v35 = *(_QWORD*)(v24 + 24);
        }
      }
      if ((*(_BYTE*)(*(_QWORD*)v35 + 113LL) & 1) == 0) {
        v38 = *(_QWORD*)(v24 + 96);
        if (v38 != 0) {
          if (*(_BYTE*)(v38 + 130) != 0 || *(_BYTE*)(v24 + 512) == 2) {
            goto LABEL_94;
          }
        }
        else if (*(_BYTE*)(v24 + 512) == 2) {
          goto LABEL_94;
        }
        *(_BYTE*)(v24 + 512) = 2;
        if (GameData_21f1618 != 0) {
          GameRoutine_995200(v24 + 112);
        }
      }
    LABEL_94:
      v55 = *(_QWORD*)(*v2 + 8);
      v67 = &v65;
      v65 = GameData_202ca88;
      TroopMgr_13460a0(&v65);
      result = (__int64)v67;
      if (v67 == &v65) {
        v56 = 4;
      }
      else {
        if (v67 == nullptr) {
        LABEL_99:
          *(_BYTE*)(v55 + 60) = 1;
          v57 = *(_QWORD*)(*v2 + 8);
          v58 = *(_DWORD*)(v57 + 56);
          v59 = *(__int64**)(v57 + 8);
          if (v58 < 0) {
            while (1) {
              v61 = *v59;
              if (*(_QWORD*)(*v59 + 96) == 0 && *(_QWORD*)(v61 + 552) == 0) {
                break;
              }
              ++v59;
            }
          }
          else {
            v62 = *v59;
            v60 = v59 + 1;
            v61 = v62;
            if (*(_DWORD*)(v62 + 84) != v58) {
              do {
                v63 = *v60++;
                v61 = v63;
              } while (*(_DWORD*)(v63 + 84) != v58);
            }
          }
          *(_QWORD*)(v61 + 8) = v10;
          *(_DWORD*)(v1 + 292) = 0;
          return result;
        }
        v56 = 5;
      }
      result = (*v67)[v56]();
      goto LABEL_99;
    }
    v13 = *(_QWORD*)(*v2 + 8);
    v14 = *(_DWORD*)(v13 + 56);
    v15 = *(__int64***)(v13 + 8);
    v16 = *(__int64***)(v13 + 16);
    if (v14 < 0) {
      for (; v15 != v16; ++v15) {
        v17 = *v15;
        if ((*v15)[12] == 0 && v17[69] == 0) {
          goto LABEL_60;
        }
      }
    }
    else if (v15 != v16) {
      while (1) {
        v18 = *v15++;
        v17 = v18;
        if (*((_DWORD*)v18 + 21) == v14) {
          break;
        }
        if (v15 == v16) {
          goto LABEL_56;
        }
      }
    LABEL_60:
      v40 = *v17;
      goto LABEL_61;
    }
  LABEL_56:
    v40 = game_gmap_SpotMgr_GetCurrentSpot(v12);
  LABEL_61:
    GameRoutine_134bbe0((void*)&v65, v40);
    v41 = v66;
    v64 = v65;
    if (v65 != v66) {
      v42 = (_QWORD*)fw_memory_g_heap_manager_ptr;
      for (j = v65; j != v41; ++j) {
        v44 = *j;
        v45 = *((_QWORD*)*j + 1);
        v46 = (_QWORD*)fw_memory_HeapManager_Allocate(*v42, 8, 16, 0);
        *v46 = v45;
        GameRoutine_888970((char*)v44 + 24, v46, v46 + 1, 1);
        if (*(_QWORD*)(*v42 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v42 + v47);
        v48 = v44;
        if (*((_QWORD*)v44 + 4) != *((_QWORD*)v44 + 3)) {
          if ((v49 = *((_QWORD*)v44 + 12), v50 = *((_QWORD*)v44 + 69),
               (v49 | v50) == 0) ||
              v49 == 0 &&
                  (v50 != 0 ? (v51 = *((_QWORD*)v44 + 13) == 0) : (v51 = false),
                   v51 &&
                       *((__int16*)v44 + 321) * *((__int16*)v44 + 320) *
                               *((__int16*)v44 + 322) ==
                           0 &&
                       *(_QWORD*)(v50 + 352) == 0) ||
              (v48 = v44, (*((_WORD*)v44 + 272) & 3) != 2)) {
            v48 = *((__int64 (**)())v44 + 3);
          }
        }
        if ((*(_BYTE*)(*(_QWORD*)v48 + 113LL) & 1) != 0) {
          continue;
        }
        v52 = *((_QWORD*)v44 + 12);
        if (v52 != 0) {
          if (*(_BYTE*)(v52 + 130) == 0 && *((_BYTE*)v44 + 512) != 2) {
          LABEL_87:
            *((_BYTE*)v44 + 512) = 2;
            if (GameData_21f1618 != 0) {
              GameRoutine_995200((char*)v44 + 112);
            }
          }
        }
        else if (*((_BYTE*)v44 + 512) != 2) {
          goto LABEL_87;
        }
      }
    }
    if (v64 != nullptr) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54);
    }
    v2 = &GameData_21c96e8;
    goto LABEL_94;
  }
  return result;
}

__int64 ProcGmapSeq_8846c0(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  float v11;
  int v12;
  float v13;
  int v14;
  __int64 v15;
  int v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned int v22;
  bool v23;
  int v24;
  __int16 v26;
  unsigned int* v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  _BYTE* v33;
  unsigned __int8 v34;
  __int64 v35[3];

  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    while (1) {
      v7 = *v5;
      if (*(_QWORD*)(*v5 + 96) == 0 && *(_QWORD*)(v7 + 552) == 0) {
        break;
      }
      ++v5;
    }
  }
  else {
    v8 = *v5;
    v6 = v5 + 1;
    v7 = v8;
    if (*(_DWORD*)(v8 + 84) != v4) {
      do {
        v9 = *v6++;
        v7 = v9;
      } while (*(_DWORD*)(v9 + 84) != v4);
    }
  }
  if (*(_QWORD*)(v7 + 8) == 0) {
    v21 = *(unsigned __int8**)(result + 16);
    if (v21 != nullptr) {
      v22 = *v21;
      v23 = v22 > 0x10;
      v24 = (1 << v22) & 0x1CE00;
      if (!v23 && v24 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    v26 = 8;
    goto LABEL_42;
  }
  v10 = *(float*)(game_script_hub_g_frame_counter + 160);
  v11 = GameRoutine_135bea0();
  v12 = *(_DWORD*)(v1 + 216);
  v13 = *(float*)(v1 + 292) + (float)(v10 * v11);
  *(float*)(v1 + 292) = v13;
  if (v12 >= (int)v13) {
    v14 = (int)v13;
  }
  else {
    v14 = v12;
  }
  v15 = *(_QWORD*)(*v2 + 8);
  v16 = *(_DWORD*)(v15 + 56);
  v17 = *(__int64**)(v15 + 8);
  v18 = *(__int64**)(v15 + 16);
  if (v16 < 0) {
    for (; v17 != v18; ++v17) {
      v19 = *v17;
      if (*(_QWORD*)(*v17 + 96) == 0 && *(_QWORD*)(v19 + 552) == 0) {
        goto LABEL_29;
      }
    }
  LABEL_25:
    v27 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
    goto LABEL_30;
  }
  if (v17 == v18) {
    goto LABEL_25;
  }
  while (1) {
    v20 = *v17++;
    v19 = v20;
    if (*(_DWORD*)(v20 + 84) == v16) {
      break;
    }
    if (v17 == v18) {
      goto LABEL_25;
    }
  }
LABEL_29:
  v27 = *(unsigned int**)v19;
LABEL_30:
  result = X8CALL_X0(__int64, TroopMgr_134bbe0((void*)(v35), (__int64)v27));
  v28 = v35[0];
  v29 = v35[1];
  if (v35[0] != v35[1]) {
    v30 = (__int64*)v35[0];
    do {
      v31 = *v30++;
      result = game_gmap_13410a0(v31, v14);
    } while (v30 != (__int64*)v29);
  }
  if (v28 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v28);
  }
  if ((float)v14 == (float)*(int*)(v1 + 216)) {
    v33 = *(_BYTE**)(v1 + 16);
    if (v33 != nullptr) {
      v34 = *v33 - 9;
      if (v34 <= 7u && ((0xE7u >> v34) & 1) != 0) {
        v26 = 128;
      LABEL_42:
        *(_WORD*)(v1 + 136) |= v26;
      }
    }
  }
  return result;
}

__int64 ProcGmapSeq_884920(__int64 result)
{
  __int64 v1;
  __int64* v2;
  __int64 v3;
  int v4;
  __int64* v5;
  _QWORD* v6;
  __int64* v7;
  __int64 v8;
  _QWORD* i;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 (**v25)();
  __int64 (**v26)();
  __int64 (**v27)();
  __int64 (*v28)();
  __int64 (*v29)();
  __int64 v30;
  __int64 v31;
  bool v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  __int64* v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64* v49;
  int v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  __int64 (**v55)();
  __int64 (**v56)();
  __int64 (***v57)();

  v1 = result;
  v2 = GameData_212c790;
  v3 = *(_QWORD*)(*GameData_212c790 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64**)(v3 + 8);
  if (v4 < 0) {
    for (i = v5 + 1;; ++i) {
      v6 = (_QWORD*)*(i - 1);
      if (v6[12] == 0 && v6[69] == 0) {
        break;
      }
    }
  }
  else {
    v6 = (_QWORD*)*v5;
    if (*(_DWORD*)(*v5 + 84) != v4) {
      v7 = v5 + 1;
      do {
        v8 = *v7++;
        v6 = (_QWORD*)v8;
      } while (*(_DWORD*)(v8 + 84) != v4);
    }
  }
  if (v6[1] == 0) {
    *(_DWORD*)(result + 152) = 13;
    return result;
  }
  if (*(_BYTE*)(result + 309) == 1) {
    v10 = *(__int64**)(v3 + 16);
    if (v4 < 0) {
      for (; v5 != v10; ++v5) {
        v11 = (__int64*)*v5;
        if (*(_QWORD*)(*v5 + 96) == 0 && v11[69] == 0) {
          goto LABEL_34;
        }
      }
    }
    else if (v5 != v10) {
      while (1) {
        v12 = *v5++;
        v11 = (__int64*)v12;
        if (*(_DWORD*)(v12 + 84) == v4) {
          break;
        }
        if (v5 == v10) {
          goto LABEL_30;
        }
      }
    LABEL_34:
      v24 = *v11;
      goto LABEL_35;
    }
  LABEL_30:
    v24 = game_gmap_SpotMgr_GetCurrentSpot(result);
  LABEL_35:
    GameRoutine_134bbe0((void*)&v55, v24);
    v25 = v55;
    v26 = v56;
    if (v55 != v56) {
      v27 = v55;
      do {
        v28 = *v27;
        TroopMgr_1341640(*v27);
        v29 = v28;
        if (*((_QWORD*)v28 + 4) != *((_QWORD*)v28 + 3)) {
          if ((v30 = *((_QWORD*)v28 + 12), v31 = *((_QWORD*)v28 + 69),
               (v30 | v31) == 0) ||
              v30 == 0 &&
                  (v31 != 0 ? (v32 = *((_QWORD*)v28 + 13) == 0) : (v32 = false),
                   v32 &&
                       *((__int16*)v28 + 321) * *((__int16*)v28 + 320) *
                               *((__int16*)v28 + 322) ==
                           0 &&
                       *(_QWORD*)(v31 + 352) == 0) ||
              (v29 = v28, (*((_WORD*)v28 + 272) & 3) != 2)) {
            v29 = *((__int64 (**)())v28 + 3);
          }
        }
        if (*(_BYTE*)(*(_QWORD*)v29 + 113LL) == 1 &&
            *((_BYTE*)v28 + 512) != 0) {
          v33 = GameData_21f1618;
          *((_BYTE*)v28 + 512) = 0;
          if (v33 != 0) {
            GameRoutine_995200((char*)v28 + 112);
          }
        }
        ++v27;
      } while (v27 != v26);
    }
    if (v25 != nullptr) {
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v25);
    }
    goto LABEL_81;
  }
  if (v4 < 0) {
    do {
      do {
        v16 = *v5++;
      } while (*(_QWORD*)(v16 + 96) != 0);
    } while (*(_QWORD*)(v16 + 552) != 0);
  }
  else {
    v14 = (__int64*)*v5;
    v13 = v5 + 1;
    if (*((_DWORD*)v14 + 21) != v4) {
      do {
        v15 = *v13++;
      } while (*(_DWORD*)(v15 + 84) != v4);
    }
  }
  v17 = ((__int64 (*)(void))TroopMgr_1341640)();
  v18 = *(_QWORD*)(*v2 + 8);
  v19 = *(_DWORD*)(v18 + 56);
  v20 = *(__int64***)(v18 + 8);
  v21 = *(__int64***)(v18 + 16);
  if (v19 < 0) {
    for (; v20 != v21; ++v20) {
      v22 = *v20;
      if ((*v20)[12] == 0 && v22[69] == 0) {
        goto LABEL_63;
      }
    }
  LABEL_59:
    v35 = game_gmap_SpotMgr_GetCurrentSpot(v17);
    goto LABEL_64;
  }
  if (v20 == v21) {
    goto LABEL_59;
  }
  while (1) {
    v23 = *v20++;
    v22 = v23;
    if (*((_DWORD*)v23 + 21) == v19) {
      break;
    }
    if (v20 == v21) {
      goto LABEL_59;
    }
  }
LABEL_63:
  v35 = *v22;
LABEL_64:
  if (*(_BYTE*)(v35 + 113) != 1) {
    goto LABEL_81;
  }
  v36 = *(_QWORD*)(*v2 + 8);
  v37 = *(_DWORD*)(v36 + 56);
  v38 = *(__int64**)(v36 + 8);
  v39 = *(__int64**)(v36 + 16);
  if (v37 < 0) {
    if (v38 == v39) {
    LABEL_71:
      v40 = 0;
      if (*(_BYTE*)GameRoutine_200 == 0) {
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    while (1) {
      v40 = *v38;
      if (*(_QWORD*)(*v38 + 96) == 0 && *(_QWORD*)(v40 + 552) == 0) {
        break;
      }
      if (++v38 == v39) {
        goto LABEL_71;
      }
    }
  }
  else if (v38 == v39) {
    v40 = 0;
  }
  else {
    while (1) {
      v41 = *v38++;
      v40 = v41;
      if (*(_DWORD*)(v41 + 84) == v37) {
        break;
      }
      if (v38 == v39) {
        goto LABEL_71;
      }
    }
  }
  if (*(_BYTE*)(v40 + 512) != 0) {
  LABEL_79:
    *(_BYTE*)(v40 + 512) = 0;
    if (GameData_21f1618 != 0) {
      GameRoutine_995200(v40 + 112);
    }
  }
LABEL_81:
  v42 = *(_QWORD*)(*v2 + 8);
  v57 = &v55;
  v55 = GameData_202cb08;
  TroopMgr_13460a0(&v55);
  if (v57 == &v55) {
    v43 = 4;
    goto LABEL_85;
  }
  if (v57 != nullptr) {
    v43 = 5;
  LABEL_85:
    (*v57)[v43]();
  }
  *(_BYTE*)(v42 + 60) = 0;
  v44 = GameRoutine_134c680_alt1();
  if (v44 != 0 && (GameRoutine_718130(v44, 0) & 1) != 0) {
    v45 = 5;
  }
  else if (*(_BYTE*)(v1 + 309) == 1) {
    v45 = 2;
  }
  else {
    v45 = 13;
  }
  *(_DWORD*)(v1 + 152) = v45;
  v46 = *v2;
  *(_DWORD*)(v1 + 292) = 0;
  v47 = *(_QWORD*)(v46 + 8);
  v48 = *(__int64**)(v47 + 8);
  v49 = *(__int64**)(v47 + 16);
  v50 = *(_DWORD*)(v47 + 56);
  if ((v50 & 0x80000000) == 0) {
    if (v48 == v49) {
      goto LABEL_103;
    }
    while (1) {
      v52 = *v48++;
      v51 = v52;
      if (*(_DWORD*)(v52 + 84) == v50) {
        goto LABEL_102;
      }
      if (v48 == v49) {
        goto LABEL_103;
      }
    }
  }
  if (v48 != v49) {
    while (1) {
      v51 = *v48;
      if (*(_QWORD*)(*v48 + 96) == 0 && *(_QWORD*)(v51 + 552) == 0) {
        break;
      }
      if (++v48 == v49) {
        goto LABEL_103;
      }
    }
  LABEL_102:
    GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v51 + 48);
    v47 = *(_QWORD*)(*v2 + 8);
  }
LABEL_103:
  result = GameRoutine_134d2e0(v47);
  v53 = GameData_212d728[0];
  v54 = *GameData_212d728[0];
  *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5837LL) = 1;
  *(_DWORD*)(*(_QWORD*)(v54 + 8) + 5856LL) |= 0x10u;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    result = MiasmaManager_14a9f60(result);
  }
  if (*(_BYTE*)(v1 + 309) == 1) {
    *(_DWORD*)(*(_QWORD*)(*v2 + 8) + 56LL) = -1;
    *(_BYTE*)(*(_QWORD*)(*v53 + 8) + 5844LL) = 0;
    *(_BYTE*)(v1 + 309) = 0;
  }
  return result;
}

__int64 ProcGmapSeq_884e80(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 280);
  if (v1 != 0) {
    return GameRoutine_1317f10(*(_QWORD*)(*GameData_212d708 + 16), v1 + 48);
  }
  return result;
}

__int64 ProcGmapSeq_884eb0(__int64 a1)
{
  GameRoutine_1340560(*(_QWORD*)(a1 + 280), 0);
  GameRoutine_133fe00(*(_QWORD*)(a1 + 280), 4, 1.0);
  return MiasmaManager_14a9bc0(*(_QWORD*)(a1 + 280));
}

__int64 ProcGmapSeq_884f00(__int64 result)
{
  int v1;
  int v2;
  __int64 v3;
  _DWORD* v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v1 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v2 = 2)
               : (v2 = 3),
           (v2 & v1) == 0) ||
      *(float*)((v3 = *(_QWORD*)(result + 280)) + 276) == *(float*)(v3 + 272) &&
          (*(_QWORD*)(v4 = *(_DWORD**)(v3 + 656)) == 0 ||
           *(_DWORD*)(*(_QWORD*)v4 + 16LL) != v4[2])) {
    v5 = *(unsigned __int8**)(result + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(result + 136) |= 0x80u;
      }
    }
    *(_WORD*)(result + 136) |= 8u;
  }
  return result;
}

__int64 ProcGmapSeq_884fb0(__int64 a1)
{
  __int64 result;

  result = TroopMgr_13485a0(*(_QWORD*)(a1 + 280));
  *(_DWORD*)(a1 + 152) = 15;
  return result;
}

__int64 ProcGmapSeq_884ff0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;

  v1 = GameData_21c96f8;
  v2 = *(_QWORD*)(GameData_21c96f8 + 16);
  if (*(_BYTE*)(v2 + 128) == 1) {
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 5;
      v2 = *(_QWORD*)(v1 + 16);
    }
    v3 = *(unsigned int*)(v2 + 124);
    v11 = v3;
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    *(_DWORD*)(v4 + 56) = v3;
    if ((v3 & 0x80000000) != 0) {
      *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
    }
    else {
      v5 = result;
      v6 = *(_QWORD*)(v4 + 40);
      v7 = wmemchr(*(_QWORD*)(v4 + 32), v3);
      v8 = *(_QWORD*)(v4 + 32);
      v9 = *(_QWORD*)(v4 + 40);
      if (v7 != 0) {
        v6 = v7;
      }
      if (v6 != v9) {
        v10 = v9 - (v6 + 4);
        if (v9 != v6 + 4) {
          memmove(v6, v6 + 4, v9 - (v6 + 4));
          v8 = *(_QWORD*)(v4 + 32);
        }
        *(_QWORD*)(v4 + 40) = v6 + v10;
      }
      TroopMgr_1353fb0(v4 + 32, v8, &v11);
      result = v5;
    }
    *(_DWORD*)(result + 152) = 19;
  }
  else {
    *(_DWORD*)(result + 152) = 2;
  }
  return result;
}

__int64 ProcGmapSeq_885160(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 result;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
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
  }
  else if (v4 != v5) {
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
    goto LABEL_12;
  }
LABEL_7:
  v8 = game_gmap_SpotMgr_GetCurrentSpot(a1);
LABEL_12:
  result = TalkOtherClanMenuItem_14d01c0(a1, v8);
  *(_DWORD*)(a1 + 152) = 2;
  return result;
}

void ProcGmapSeq_8855f0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  __int64 v5;
  __int128 v6;
  int v7;
  __int128 v8;
  __int128 v9;

  if (game_GameModeData_instance_ == 0 ||
      *(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v0 = GameData_212d728[0];
    v1 = *(_QWORD*)(*GameData_212d728[0] + 8);
    LayoutAccessor_155e830(*(_QWORD*)(v1 + 16), 1);
    v2 = game_hub_ProgressEventView_instance_;
    if (game_hub_ProgressEventView_instance_ != 0) {
      GameRoutine_17b8e80(game_hub_ProgressEventView_instance_, 1);
      v2 = game_hub_ProgressEventView_instance_;
    }
    *(_DWORD*)(v1 + 5856) |= 0x10000u;
    v3 = *(_QWORD*)(*v0 + 8);
    *(_DWORD*)(v3 + 5856) = 65600;
    if (v2 != 0) {
      GameRoutine_17b8e80(v2, 1);
    }
    if (game_gameui_Footer_instance_ != 0) {
      LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
    }
    *(_DWORD*)(v3 + 5856) &= ~0x20000u;
    if (game_GameModeData_instance_ != 0) {
      v4 = *(_DWORD**)(game_GameModeData_instance_ + 24);
      if (v4 != nullptr) {
        v4 = (_DWORD*)GameRoutine_88cee0();
        if (v4 != nullptr) {
          v4 = (_DWORD*)game_gmap_SpotMgr_FindSpot(v4);
        }
      }
    }
    else {
      v4 = nullptr;
    }
    v5 = *(_QWORD*)(GameData_21f1658 + 16);
    v6 = *(_OWORD*)(v5 + 80);
    v7 = *(unsigned __int8*)(v5 + 208);
    *(_QWORD*)(v5 + 224) = v6;
    v8 = *(_OWORD*)(v5 + 224);
    *((_QWORD*)&v8 + 1) = DWORD2(v6);
    *(_OWORD*)(v5 + 224) = v8;
    if (v7 == 1) {
      *(_DWORD*)(v5 + 192) = v4[8];
      *(_DWORD*)(v5 + 196) = v4[9];
      v9 = *(_OWORD*)(v5 + 192);
      *((_QWORD*)&v9 + 1) = (unsigned int)v4[10];
      *(_OWORD*)(v5 + 192) = v9;
    }
    else {
      *(_QWORD*)(v5 + 200) = *((_QWORD*)v4 + 5);
      *(_QWORD*)(v5 + 192) = *((_QWORD*)v4 + 4);
      *(_BYTE*)(v5 + 208) = 1;
    }
    *(_QWORD*)(v5 + 240) = 1106247680;
  }
}

__int64 ProcGmapSeq_885750(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  float32x4_t* v2;
  float32x4_t* v3;
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
    v3 = *(float32x4_t**)(*GameData_212d708 + 16);
    v4 = LANES128(v2[15]).n128_f32[0];
    v5 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL) +
         LANES128(v2[15]).n128_f32[1];
    v6 = v2[14];
    LANES128(v2[15]).n128_f32[1] = v5;
    v7 = v5 / v4;
    if (v7 <= 0x1.0000000000000p+0f) {
      v8 = v7;
    }
    else {
      v8 = 0x1.0000000000000p+0f;
    }
    v14 = v8;
    v15 = vaddq_f32(vmulq_n_f32(v2[12], v8),
                    vmulq_n_f32(v6, 0x1.0000000000000p+0f - v8));
    result = GameRoutine_1317f10_alt1(v3, &v15);
    if (v14 != 0x1.0000000000000p+0f) {
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

__int64 ProcGmapSeq_885840(__int64 a1)
{
  __int64 result;

  result = GameRoutine_120dd60();
  *(_DWORD*)(a1 + 152) = 19;
  if (GameData_21c9600 != 0) {
    *(_DWORD*)(GameData_21c9600 + 152) = 27;
  }
  return result;
}

__int64 ProcGmapSeq_885880(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int* v8;
  int* v9;
  unsigned __int64 v10;
  _BYTE* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  int* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  unsigned __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v1 = GameData_21f1660;
  v2 = *(_QWORD**)(GameData_21f1660 + 8);
  v4 = v2[3];
  v3 = v2[4];
  v6 = *v2;
  v5 = v2[1];
  if (v3 == v4 && v5 == v6) {
    v11 = (_BYTE*)(result + 307);
  LABEL_25:
    *v11 = 0;
    return result;
  }
  v8 = (int*)(v2 + 6);
  v9 = (int*)v2 + 13;
  if (v3 == v4) {
    v3 = v5;
    v4 = v6;
    v9 = v8;
  }
  v10 = 0xAAAAAAAAAAAAAAABLL * ((v3 - v4) >> 3);
  v11 = (_BYTE*)(result + 307);
  if (v10 <= *v9) {
    goto LABEL_25;
  }
  v37 = 0;
  v38 = 0;
  v36 = 0;
  v12 = result;
  *v11 = 1;
  v13 = *(_QWORD**)(v1 + 8);
  v15 = v13[3];
  v14 = v13[4];
  v16 = (int*)(v13 + 6);
  v19 = *v13;
  v17 = (int*)v13 + 13;
  v18 = v19;
  if (v14 == v15) {
    v17 = v16;
    v20 = v18;
  }
  else {
    v20 = v15;
  }
  v21 = (unsigned __int8*)(v20 + 24LL * *v17);
  v22 = *v21;
  if ((v22 & 1) != 0) {
    v23 = *((unsigned __int8**)v21 + 2);
  }
  else {
    v23 = v21 + 1;
  }
  if ((v22 & 1) != 0) {
    v24 = *((_QWORD*)v21 + 1);
  }
  else {
    v24 = v22 >> 1;
  }
  GameRoutine_8924a0(&v36, v23, v24, 47);
  if ((*(_BYTE*)v36 & 1) != 0) {
    v25 = *(_BYTE**)(v36 + 16);
  }
  else {
    v25 = (_BYTE*)(v36 + 1);
  }
  if (*v25 == 42 && v25[1] == 0) {
    v26 = *(_QWORD*)(GameData_21f1660 + 8);
    if (*(_QWORD*)(v26 + 32) == *(_QWORD*)(v26 + 24)) {
      ++*(_DWORD*)(v26 + 48);
    }
    else {
      ++*(_DWORD*)(v26 + 52);
    }
  }
  v27 = *(_QWORD*)(*GameData_212d728[0] + 8);
  LayoutAccessor_155e830(*(_QWORD*)(v27 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40(game_hub_ProgressEventView_instance_, 1);
  }
  result = game_gameui_Footer_instance_;
  v28 = *(_DWORD*)(v27 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v27 + 5856) = v28;
  if (result != 0) {
    result = LayoutAccessor_1567000(result, 0);
    v28 = *(_DWORD*)(v27 + 5856);
  }
  *(_DWORD*)(v27 + 5856) = v28 & 0xFFFDFFFF;
  *(_DWORD*)(v12 + 152) = 4;
  *(_BYTE*)(v12 + 305) = 1;
  v29 = v36;
  if (v36 != 0) {
    v30 = v37;
    v31 = fw_memory_g_heap_manager_ptr;
    if (v36 == v37) {
      goto LABEL_43;
    }
    v32 = v37;
    do {
      v33 = *(_BYTE*)(v32 - 24);
      v32 -= 24;
      if ((v33 & 1) != 0 && *(_QWORD*)(v30 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
          v34 = 128;
        }
        else {
          v34 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v31 + v34);
      }
      v30 = v32;
    } while (v32 != v29);
    v37 = v29;
    if (v36 != 0) {
    LABEL_43:
      v35 = 128;
      if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
        v35 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v31 + v35);
    }
  }
  return result;
}

void ProcGmapSeq_885b00(__n128 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int16* v5;
  __int16* v6;
  __int64 v7;
  unsigned __int64 v8;
  __n128* v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __n128* v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  long double v17;
  unsigned __int64* v18;
  unsigned __int64* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  long double v23;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_GameModeData_instance_ != 0) {
    v1 = *(_QWORD*)(game_GameModeData_instance_ + 24);
    if (v1 != 0) {
      v2 = *(_QWORD*)(*(_QWORD*)(v1 + 24) + 16LL);
      while (1) {
        v3 = *(_QWORD*)(v1 + 24);
        v1 = *(_QWORD*)(v3 + 16);
        if (v1 == 0) {
          break;
        }
        if ((GameRoutine_889be0(*(_QWORD*)(v3 + 16)) & 1) == 0) {
        LABEL_9:
          if (*(_BYTE*)(v1 + 33) == 18 || *(_BYTE*)(v1 + 32) != 0) {
            while (1) {
              v4 = *(_QWORD*)(v1 + 24);
              v1 = *(_QWORD*)(v4 + 16);
              if (v1 == 0) {
                break;
              }
              if ((GameRoutine_889be0(*(_QWORD*)(v4 + 16)) & 1) == 0) {
                goto LABEL_9;
              }
            }
          }
          break;
        }
      }
      if (v2 != v1) {
        if (v1 != 0 && *(_BYTE*)(v1 + 33) == 16) {
          if (game_gmap_GmapClock_instance_ != 0) {
            v6 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
          }
          else {
            v6 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
          }
          v5 = *(__int16**)(v1 + 24);
          if (((__int64)v5[49] << 24) + ((__int64)v5[48] << 32) +
                  ((__int64)v5[50] << 18) + ((__int64)v5[51] << 12) +
                  ((__int64)v5[52] << 6) + v5[53] >
              (unsigned __int64)(((__int64)v6[1] << 24) + ((__int64)*v6 << 32) +
                                 ((__int64)v6[2] << 18) +
                                 ((__int64)v6[3] << 12) +
                                 ((__int64)v6[4] << 6) + v6[5])) {
            v7 = game_ProcFadeView_instance_;
            if (game_ProcFadeView_instance_ != 0) {
              v8 = game_ProcFadeView_instance_ +
                   ((unsigned __int64)*(
                        unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                    << 6);
              if (*(float*)(v8 + 172) == *(float*)(v8 + 168) &&
                  (v9 = (__n128*)(v8 + 160),
                   a1 = ((__n128 (*)(unsigned __int64)) *
                         (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160),
                   LANES128(a1).n128_f32[3] == 0x1.0000000000000p+0f)) {
                if (LANES128(*(v9)).n128_f32[3] ==
                    LANES128(*(v9)).n128_f32[2]) {
                  (*(void (**)(__n128*))(LANES128(*(v9)).n128_u64[0] + 16))(v9),
                      v17 = COERCE_AS(__typeof__(v17),
                                      PSEUDO_REGISTER(__n128, "v0", "=w"));
                }
                else {
                  a1 = v9[3];
                }
                v23 = *(long double*)&a1;
                LANES128(a1).n128_u32[0] = 0x1.0000000000000p-1f;
                v18 = (unsigned __int64*)&v23;
              }
              else {
                LANES128(a1).n128_u32[0] = 0x1.0000000000000p-1f;
                v18 = (unsigned __int64*)GameData_212c960;
              }
              game_809dc0(v7, v18, *(long double*)&a1),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            if (game_GameModeData_instance_ != 0 &&
                *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
              *((_QWORD*)&v23 + 1) = &GameData_1adfa87;
              *(_QWORD*)&v23 = game_HashString_alt2((__int64)&GameData_1adfa87),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
              if (game_GameModeData_instance_ == 0 ||
                  (v20 = game_GameVariableTable_Find_alt1(
                       *(_QWORD**)(game_GameModeData_instance_ + 48),
                       (unsigned __int64*)&v23)) == 0 ||
                  *(_DWORD*)(v20 + 32) == 0) {
                ProcGmapSeq_8866a0_alt1(),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
          }
        }
        else if (game_GameModeData_instance_ != 0 &&
                 *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
                 (*((_QWORD*)&v23 + 1) = &GameData_1adfa87,
                  *(_QWORD*)& v23 =
                      game_HashString_alt2((__int64)&GameData_1adfa87),
                  game_GameModeData_instance_ != 0) &&
                 (v10 = game_GameVariableTable_Find_alt1(
                      *(_QWORD**)(game_GameModeData_instance_ + 48),
                      (unsigned __int64*)&v23)) != 0 &&
                 *(_DWORD*)(v10 + 32) != 0) {
          v11 = game_ProcFadeView_instance_;
          if (game_ProcFadeView_instance_ != 0) {
            v12 = game_ProcFadeView_instance_ +
                  ((unsigned __int64)*(
                       unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                   << 6);
            if (*(float*)(v12 + 172) == *(float*)(v12 + 168) &&
                (v13 = (__n128*)(v12 + 160),
                 a1 = ((__n128 (*)(unsigned __int64)) *
                       (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160),
                 LANES128(a1).n128_f32[3] == 0x1.0000000000000p+0f)) {
              if (LANES128(*(v13)).n128_f32[3] ==
                  LANES128(*(v13)).n128_f32[2]) {
                (*(void (**)(__n128*))(LANES128(*(v13)).n128_u64[0] + 16))(v13),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              else {
                a1 = v13[3];
              }
              v23 = *(long double*)&a1;
              LANES128(a1).n128_u32[0] = 0x1.0000000000000p+1f;
              v19 = (unsigned __int64*)&v23;
            }
            else {
              LANES128(a1).n128_u32[0] = 0x1.0000000000000p+1f;
              v19 = (unsigned __int64*)GameData_212c960;
            }
            game_809dc0(v11, v19, *(long double*)&a1),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          snd_Fade_Fade_10c830((__int64)&v23, 0x1.f400000000000p+10f),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v21 = *game_sound_g_game_sound_ptr[0];
          v22 = *(_DWORD*)(*game_sound_g_game_sound_ptr[0] + 620);
          if (v22 != 0) {
            *(_DWORD*)(v21 + 620) = v22 - 1;
            GameManager_a2c820_alt1(v21, (__int64)&v23, 1),
                v17 = COERCE_AS(__typeof__(v17),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
          snd_Fade_Destroy_Fade_alt1(&v23),
              v17 = COERCE_AS(__typeof__(v17),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          *(_BYTE*)(*(_QWORD*)(*GameData_212d6f8[0] + 8) + 40LL) = 0;
        }
        else {
          v14 = game_ProcFadeView_instance_;
          if (game_ProcFadeView_instance_ != 0) {
            v15 = game_ProcFadeView_instance_ +
                  ((unsigned __int64)*(
                       unsigned __int8*)(game_ProcFadeView_instance_ + 480)
                   << 6);
            if (*(float*)(v15 + 172) == *(float*)(v15 + 168) &&
                (v16 = v15 + 160,
                 a1 = ((__n128 (*)(unsigned __int64)) *
                       (_QWORD*)(*(_QWORD*)(v15 + 160) + 16LL))(v15 + 160),
                 LANES128(a1).n128_f32[3] == 0x1.0000000000000p+0f)) {
              if (*(float*)(v16 + 12) == *(float*)(v16 + 8)) {
                (*(void (**)(unsigned __int64))(*(_QWORD*)v16 + 16LL))(v16),
                    v17 = COERCE_AS(__typeof__(v17),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
              else {
                v17 = *(long double*)(v16 + 48);
              }
              v23 = v17;
              LODWORD(v17) =
                  COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-1f));
              game_809dc0(v14, &v23, v17),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            else {
              LANES128(a1).n128_u32[0] = 0x1.0000000000000p-1f;
              game_809dc0(v14, GameData_212c960, *(long double*)&a1),
                  v17 = COERCE_AS(__typeof__(v17),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
        }
      }
    }
  }
}

void ProcGmapSeq_8865e0(__int64 a1)
{

#pragma clang fp contract(off)
  unsigned __int64 v2;
  __int128 v3;
  bool v4;

  if (game_ProcFadeView_instance_ != 0) {
    v2 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v2 + 172) == *(float*)(v2 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v2 + 160) + 16LL))(v2 + 160);
    }
    else {
      v3 = *(_OWORD*)(v2 + 208);
    }
    if (*((float*)&v3 + 3) == 0x1.0000000000000p+0f) {
      v4 = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                        (_QWORD*)(*(_QWORD*)(v2 + 160) + 16LL))(
                           v2 + 160, *((float*)&v3 + 3)))
                   .n128_f32[3] != 0x1.0000000000000p+0f ||
           *(_DWORD*)(a1 + 152) == 19;
      if (!v4 && game_ProcFadeView_instance_ != 0) {
        game_809ba0(game_ProcFadeView_instance_, 0x1.0000000000000p-1f);
      }
    }
  }
}

__int64 ProcGmapSeq_8866a0()
{
  __int64 v0;
  int v1;
  __int64 result;
  __int64 v3;
  _BYTE v4[200];

  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    v3 = *(_QWORD*)(GameData_21f1648 + 8);
    result = GameManager_a2f660(game_sound_g_game_sound);
    *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
    *(_BYTE*)(v3 + 56) = 1;
  }
  else {
    TroopMgr_1349f40();
    snd_Fade_Fade_10cb00(v4, "FadeTime_BGM_Gmap_Out");
    v0 = game_sound_g_game_sound;
    v1 = *(_DWORD*)(game_sound_g_game_sound + 620);
    if (v1 != 0) {
      *(_DWORD*)(game_sound_g_game_sound + 620) = v1 - 1;
      GameManager_a2c820(v0, v4);
    }
    result = snd_Fade_Destroy_Fade(v4);
    *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
  }
  return result;
}

__int64 ProcGmapSeq_886770(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;

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
    v3 = 1;
    return GameRoutine_1738620(a1, v3, 0);
  }
  if (*(_DWORD*)(GameData_22416c0 + 48) == 0) {
    v3 = 3;
    return GameRoutine_1738620(a1, v3, 0);
  }
  v1 = a1;
  result = GameRoutine_718280();
  if ((result & 1) != 0) {
    v3 = 3;
    a1 = v1;
    return GameRoutine_1738620(a1, v3, 0);
  }
  return result;
}

__int64 ProcGmapSeq_886870()
{
  __int64 result;
  __int64 v1;

  if ((game_GameRestartData_unknown_ == 0 ||
       *(_DWORD*)(game_GameRestartData_unknown_ + 8) == 0) &&
      *(_DWORD*)(game_GameRestartData_unknown_ + 284) != 0) {
    result = GameRoutine_65a020();
    v1 = game_GameRestartData_unknown_;
    if (*(_DWORD*)(game_GameRestartData_unknown_ + 284) != 0) {
      *(_DWORD*)(game_GameRestartData_unknown_ + 8) = 0;
      *(_BYTE*)(v1 + 16) = 0;
      if (GameData_21c9600 != 0) {
        *(_DWORD*)(GameData_21c9600 + 152) = 14;
      }
    }
  }
  return result;
}

__int64 ProcGmapSeq_8868e0(__int64 result)
{
  int v1;
  __int64 v2;
  int v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  int v12;
  __int64* v13;
  __int64* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      GameData_21c9600 != 0) {
    v1 = *(_DWORD*)(GameData_21c9600 + 152);
    if ((v1 & 0xFFFFFFFE) == 6) {
      goto LABEL_18;
    }
    if (v1 == 5) {
      v2 = *(_QWORD*)(GameData_21c96e8 + 8);
      v3 = *(_DWORD*)(v2 + 56);
      v4 = *(__int64***)(v2 + 8);
      v5 = *(__int64***)(v2 + 16);
      if (v3 < 0) {
        for (; v4 != v5; ++v4) {
          v6 = *v4;
          if ((*v4)[12] == 0 && v6[69] == 0) {
            goto LABEL_16;
          }
        }
      }
      else if (v4 != v5) {
        while (1) {
          v7 = (__int64)*v4++;
          v6 = (__int64*)v7;
          if (*(_DWORD*)(v7 + 84) == v3) {
            break;
          }
          if (v4 == v5) {
            goto LABEL_12;
          }
        }
      LABEL_16:
        v9 = *v6;
        v8 = result;
      LABEL_17:
        v10 = v9 == game_gmap_SpotMgr_GetCurrentSpot(result);
        result = v8;
        if (!v10) {
        LABEL_18:
          v11 = *(_QWORD*)(GameData_21c96e8 + 8);
          v12 = *(_DWORD*)(v11 + 56);
          v13 = *(__int64**)(v11 + 8);
          v14 = *(__int64**)(v11 + 16);
          if (v12 < 0) {
            for (; v13 != v14; ++v13) {
              v15 = (_QWORD*)*v13;
              if (*(_QWORD*)(*v13 + 96) == 0 && v15[69] == 0) {
                return GameRoutine_1522300(result, *v15);
              }
            }
          }
          else {
            while (v13 != v14) {
              v16 = *v13++;
              v15 = (_QWORD*)v16;
              if (*(_DWORD*)(v16 + 84) == v12) {
                return GameRoutine_1522300(result, *v15);
              }
            }
          }
          v17 = result;
          v18 = game_gmap_SpotMgr_GetCurrentSpot(result);
          return GameRoutine_1522300(v17, v18);
        }
        return result;
      }
    LABEL_12:
      v8 = result;
      result = game_gmap_SpotMgr_GetCurrentSpot(result);
      v9 = result;
      goto LABEL_17;
    }
  }
  return result;
}

void ProcGmapSeq_886a90()
{

#pragma clang fp contract(off)
  unsigned __int64 v0;
  __n128 v1;
  __int64 v2;
  unsigned __int64 v3;
  __n128* v4;
  _QWORD* v5;
  _QWORD v8[26];

  if (game_ProcFadeView_instance_ == 0) {
  LABEL_16:
    if (game_GameModeData_instance_ != 0 &&
        (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
      snd_Fade_Fade_10c830((__int64)v8, 0x0.0p+0f);
      snd_play_ff2d0((__int64)"SE_SYS_GMAP_Encount_Zoom",
                     (__int64)"SE_SYS_GMAP_Encount_Zoom", (__int64)v8, 0,
                     0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade_alt1(v8);
      Camera_1315960(*(_QWORD*)(GameData_21f1628 + 16));
    }
    return;
  }
  v0 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v0 + 172) == *(float*)(v0 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v0 + 160) + 16LL))(v0 + 160);
  }
  else {
    v1 = *(__n128*)(v0 + 208);
  }
  if (LANES128(v1).n128_f32[3] != 0x1.0000000000000p+0f ||
      (v1 = ((__n128 (*)(unsigned __int64, float)) *
             (_QWORD*)(*(_QWORD*)(v0 + 160) + 16LL))(v0 + 160,
                                                     LANES128(v1).n128_f32[3]),
       LANES128(v1).n128_f32[3] != 0x1.0000000000000p+0f)) {
    v2 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v3 = game_ProcFadeView_instance_ +
           ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                  480)
            << 6);
      if (*(float*)(v3 + 172) == *(float*)(v3 + 168) &&
          (v4 = (__n128*)(v3 + 160),
           v1 = ((__n128 (*)(unsigned __int64)) *
                 (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160),
           LANES128(v1).n128_f32[3] == 0x1.0000000000000p+0f)) {
        if (LANES128(*(v4)).n128_f32[3] == LANES128(*(v4)).n128_f32[2]) {
          (*(void (**)(__n128*))(LANES128(*(v4)).n128_u64[0] + 16))(v4);
        }
        else {
          v1 = v4[3];
        }
        *(__n128*)v8 = v1;
        LANES128(v1).n128_u32[0] = 0x1.0000000000000p-1f;
        v5 = v8;
      }
      else {
        LANES128(v1).n128_u32[0] = 0x1.0000000000000p-1f;
        v5 = GameData_212c960;
      }
      game_809dc0(v2, v5, *(long double*)&v1);
    }
    goto LABEL_16;
  }
}

__int64 ProcGmapSeq_886c20()
{
  __int64 v0;

  v0 = *(_QWORD*)(GameData_21f1658 + 16);
  InfoCursorBottomImpl_100d6e0(*(_QWORD*)(v0 + 48));
  *(_BYTE*)(v0 + 175) = 0;
  return Seq_a85600(GameData_21c6978);
}

_BYTE* ProcGmapSeq_886c80(_BYTE* result, __int64 a2)
{
  _BYTE* v2;
  __int64 v3;
  __int64** v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  float v20;
  float v21;
  bool v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* i;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  bool v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;

  if (result[304] == 1) {
    v2 = result;
    GameRoutine_15e2a60(result, a2);
    v3 = game_script_hub_g_frame_counter_ptr[0];
    if (((*(__int64 (**)(__int64))(
             *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                        144LL) +
             16LL))(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL) &
         1) != 0) {
      *(_BYTE*)(*(_QWORD*)v3 + 177LL) = 0;
    }
    v4 = *(__int64***)(*GameData_2130e60 + 8);
    v5 = *v4;
    v6 = v4[1];
    if (*v4 != v6) {
      do {
        v7 = *v5++;
        GameRoutine_14a1390(v7 + 16, 1);
        GameRoutine_14a1390(v7 + 32, 1);
      } while (v5 != v6);
    }
    v9 = v4[6];
    v8 = v4[7];
    while (v9 != v8) {
      v10 = *v9++;
      GameRoutine_14a1520(v10 + 8, 1);
    }
    v11 = GameData_212c790;
    v12 = *(_QWORD*)(*GameData_212c790 + 8);
    v13 = *(__int64**)(v12 + 8);
    v14 = *(__int64**)(v12 + 16);
    while (v13 != v14) {
      v15 = *v13++;
      GameRoutine_1342b80(v15);
    }
    GameRoutine_14b7400(*(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL));
    v16 = GameData_212d718;
    if (game_GameModeData_instance_ != 0) {
      v17 = *GameData_212d718;
      if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
        *(_BYTE*)(*(_QWORD*)(v17 + 16) + 965LL) = 0;
      }
    }
    else {
      v17 = *GameData_212d718;
    }
    v18 = (__int64*)GameData_212c7a0[0];
    v19 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
    v20 = (*(float (**)(__int64))(*(_QWORD*)(*(_QWORD*)(v17 + 16) + 656LL) +
                                  16LL))(*(_QWORD*)(v17 + 16) + 656LL);
    v21 = 1.0;
    if (v20 <= 1.0) {
      v21 = v20;
    }
    v22 = v20 < 0.0;
    v23 = 0.0;
    if (!v22) {
      v23 = v21;
    }
    *(float*)(v19 + 120) = v23;
    v24 = GameRoutine_1337000();
    v25 = *(_QWORD*)(*v11 + 8);
    v26 = *(__int64**)(v25 + 8);
    for (i = *(__int64**)(v25 + 16); v26 != i;
         v24 = GameRoutine_13402f0(v28, 0, 1)) {
      v28 = *v26++;
    }
    TroopMgr_134a720(v24);
    GameRoutine_1553220(11);
    v29 = GameData_212d730;
    (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212d730 + 24LL))(
        *GameData_212d730);
    if (*v29 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v29 + 8LL))(*v29);
    }
    *v29 = 0;
    v30 = GameData_212d728[0];
    if (*GameData_212d728[0] != 0) {
      GameRoutine_17bc360(*GameData_212d728[0]);
      v31 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v31);
    }
    v32 = *v16;
    *v30 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v32 + 24LL))(v32);
    if (*v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v16 + 8LL))(*v16);
    }
    *v16 = 0;
    v33 = GameData_212d708;
    (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212d708 + 24LL))(
        *GameData_212d708);
    if (*v33 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v33 + 8LL))(*v33);
    }
    *v33 = 0;
    v34 = GameData_212d700[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d700[0] + 24LL))(
        *GameData_212d700[0]);
    if (*v34 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v34 + 8LL))(*v34);
    }
    *v34 = 0;
    v35 = GameData_212d6f8[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d6f8[0] + 24LL))(
        *GameData_212d6f8[0]);
    result = (_BYTE*)*v35;
    if (*v35 != 0) {
      result =
          (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 8LL))(result);
    }
    v36 = *v18;
    *v35 = 0;
    v37 = *(_QWORD*)(v36 + 16);
    *(_QWORD*)v37 = 0;
    *(_BYTE*)(v37 + 128) = 0;
    *(_DWORD*)(v37 + 124) = -1;
    v38 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v40 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v39 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v42 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v41 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v43 = v41 == v42;
      v44 = v39 - 1 + v40;
      v45 = v44 >> 7;
      v46 = v44 & 0x7F;
      v47 = 16 * (v41 - v42) - 1;
      v48 = *(_QWORD*)(v42 + 8 * v45);
      if (v43) {
        v47 = 0;
      }
      v49 = v48 + 32 * v46;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v49 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v38[21] = *(_QWORD*)(v49 + 24);
      v50 = *(_QWORD*)(v49 + 16);
      v38[27] = v39 - 1;
      v38[20] = v50;
      if ((unsigned __int64)(v47 - (v39 + v40) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        if (*(_QWORD*)(v41 - 8) != 0) {
          v51 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v51 = 56;
          }
          result = (_BYTE*)nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v51);
          v41 = v38[24];
        }
        v38[24] = v41 - 8;
      }
    }
    v2[304] = 0;
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_Initialize_closure0_Invoke(__int64 result,
                                                         unsigned __int8* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;
  int v5;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  if (*(unsigned __int8*)(v2 + 312) != v3) {
    *(_BYTE*)(v2 + 312) = v3;
    v4 = *(_QWORD*)(GameData_21f1628 + 16);
    v5 = *(_DWORD*)(v4 + 920);
    if (v3 != 0) {
      *(_DWORD*)(v4 + 920) = v5 + 1;
      if (v5 == 0) {
        return (**(__int64 (***)(__int64))(v4 + 912))(v4 + 912);
      }
    }
    else {
      *(_DWORD*)(v4 + 920) = v5 - 1;
      if (v5 == 1) {
        return (*(__int64 (**)(__int64))(*(_QWORD*)(v4 + 912) + 8LL))(v4 + 912);
      }
    }
  }
  return result;
}

bool game_gmap_ProcGmapSeq_Initialize_closure_Invoke()
{
  float* v0;

  v0 = *(float**)(GameData_21f1628 + 16);
  return v0[199] == v0[198] && v0[167] == v0[166];
}

bool game_gmap_ProcGmapSeq_PreExeCommand_closure_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  if (*(_QWORD*)(*a2 + 96) != 0) {
    return false;
  }
  v4 = *(_QWORD*)(v2 + 552);
  if (v4 == 0 || *(_QWORD*)(v2 + 104) != 0) {
    return false;
  }
  if (*(__int16*)(v2 + 642) * *(__int16*)(v2 + 640) * *(__int16*)(v2 + 644) !=
      0) {
    return false;
  }
  return *(_QWORD*)(v4 + 352) == 0;
}

void ProcGmapSeq_887600()
{
  __int64 v0;
  __int64* v1;
  __int64 v2;
  int v3;
  __int64 (**v4)();
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* i;
  __int64 v13;
  __int64 v14;
  __int64 (***v15)();
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  struct {
    __int64 (**v21)();
    void* v22;
    char gap16_[16];
    unsigned __int64* v23;
  } v21_;
  __int64 v24;

  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    return;
  }
  v0 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v1 = GameData_2130e70;
    v2 = *GameData_2130e70;
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      v7 = *(unsigned __int8*)(v2 + 53);
      goto LABEL_15;
    }
    v3 = *(unsigned __int8*)(v2 + 56);
    v21_.v22 = &GameData_1adfa87;
    v4 = (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1adfa87);
    v5 = game_GameModeData_instance_;
    v21_.v21 = v4;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v21_.v21);
      if (v6 == 0) {
        if (v3 != 0) {
          goto LABEL_18;
        }
      LABEL_9:
        v2 = *v1;
        v0 = game_GameModeData_instance_;
        v7 = *(unsigned __int8*)(*v1 + 53);
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_12;
        }
      LABEL_15:
        if (v7 != *(unsigned __int8*)(v0 + 15)) {
          goto LABEL_18;
        }
        v8 = *(_DWORD*)(v0 + 64);
        goto LABEL_17;
      }
      v5 = *(_DWORD*)(v6 + 32) != 0;
    }
    if (v3 != v5) {
      goto LABEL_18;
    }
    goto LABEL_9;
  }
  v2 = GameData_22416c0;
  v7 = *(unsigned __int8*)(GameData_22416c0 + 53);
LABEL_12:
  if (v7 == 0) {
    v8 = 0;
  LABEL_17:
    if (*(_DWORD*)(v2 + 44) == v8) {
      return;
    }
  }
LABEL_18:
  game_gmap_TroopMgr_OnUpdateChapter();
  v21_.v21 = GameData_202dbc8;
  v21_.v23 = (unsigned __int64*)&v21_.v21;
  TroopMgr_13460a0_alt1((__int64)&v21_.v21);
  if (v21_.v23 == (unsigned __int64*)&v21_.v21) {
    v9 = 32;
  }
  else {
    if (v21_.v23 == nullptr) {
      goto LABEL_23;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v21_.v23 + v9))((__int64)v21_.v23);
LABEL_23:
  v21_.v21 = GameData_202dcc8;
  v21_.v23 = (unsigned __int64*)&v21_.v21;
  game_gmap_TroopMgr_EachReserveUnit((__int64)&v21_.v21);
  if (v21_.v23 == (unsigned __int64*)&v21_.v21) {
    v10 = 32;
  }
  else {
    if (v21_.v23 == nullptr) {
      goto LABEL_28;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v21_.v23 + v10))((__int64)v21_.v23);
LABEL_28:
  TroopMgr_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
  v21_.v21 = GameData_202d7c8;
  v21_.v23 = (unsigned __int64*)&v21_.v21;
  TroopMgr_13460a0_alt1((__int64)&v21_.v21);
  if (v21_.v23 == (unsigned __int64*)&v21_.v21) {
    v11 = 32;
    goto LABEL_32;
  }
  if (v21_.v23 != nullptr) {
    v11 = 40;
  LABEL_32:
    (*(void (**)(__int64))(*v21_.v23 + v11))((__int64)v21_.v23);
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    for (i = *(__int64**)(*(_QWORD*)(GameData_21c96e8 + 8) + 8LL);; ++i) {
      v13 = *i;
      if ((*(_QWORD*)(*i + 96) | *(_QWORD*)(*i + 552)) == 0 &&
          *(_DWORD*)(v13 + 84) == -1) {
        break;
      }
    }
    game_gmap_1341d60(v13, 0);
  }
  GmapSituation_14db4a0();
  v21_.v22 = &GameData_1adfa87;
  v21_.v21 =
      (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1adfa87);
  if (game_GameModeData_instance_ != 0) {
    v14 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v21_.v21);
    if (v14 != 0 && *(_DWORD*)(v14 + 32) != 0) {
      MiasmaManager_14a9060(*(_QWORD*)(GameData_22416b0 + 8));
      v15 = &v21_.v21;
      v21_.v21 = GameData_2044910;
      v21_.v23 = (unsigned __int64*)&v21_.v21;
      v16 = *(_QWORD*)(GameData_21c96e8 + 8);
      v17 = *(__int64**)(v16 + 8);
      v18 = *(__int64**)(v16 + 16);
      if (v17 == v18) {
        goto LABEL_49;
      }
      do {
        v19 = *v17++;
        v24 = v19;
        if (v21_.v23 == nullptr) {
          GameRoutine_60a310();
        }
        (*(void (**)(unsigned __int64*, __int64*))(*v21_.v23 + 48))(v21_.v23,
                                                                    &v24);
      } while (v17 != v18);
      v15 = (__int64 (***)(void))v21_.v23;
      if (v21_.v23 == (unsigned __int64*)&v21_.v21) {
      LABEL_49:
        v20 = 4;
      }
      else {
        if (v21_.v23 == nullptr) {
          return;
        }
        v20 = 5;
      }
      ((void (*)(__int64 (***)(void)))(*v15)[v20])(v15);
    }
  }
}

__int64 game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke(__int64 result,
                                                             __int64** a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _BOOL4 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  if ((**(_BYTE**)(result + 16) & 1) != 0) {
    return result;
  }
  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  v4 = result;
  v5 = **a2;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  result = GameSubquestData_125a1a0(*(_QWORD*)GameData_212c7b0[0], &v20, v5, 0);
  if (v20 == v21) {
    v8 = false;
    if (v20 != 0) {
    LABEL_10:
      v21 = v20;
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
    }
  }
  else {
    v6 = v20 + 8;
    do {
      v7 = *(unsigned __int8*)(**(_QWORD**)(v6 - 8) + 112LL);
      v8 = v7 == 4;
      v9 = v7 == 4 || v6 == v21;
      v6 += 8;
    } while (!v9);
    if (v20 != 0) {
      goto LABEL_10;
    }
  }
  if (v8) {
    **(_BYTE**)(v4 + 16) = 1;
    *(_DWORD*)(v3 + 152) = 14;
    v11 = *((unsigned int*)v2 + 21);
    if ((v11 & 0x80000000) == 0) {
      LODWORD(v20) = *((_DWORD*)v2 + 21);
      v12 = *(_QWORD*)(GameData_21c96e8 + 8);
      v14 = *(_QWORD*)(v12 + 32);
      v13 = (__int64*)(v12 + 32);
      v15 = *(_QWORD*)(v12 + 40);
      *(_DWORD*)(v12 + 56) = v11;
      v16 = wmemchr(v14, v11);
      v17 = *(_QWORD*)(v12 + 40);
      v18 = *(_QWORD*)(v12 + 32);
      if (v16 != 0) {
        v15 = v16;
      }
      if (v15 != v17) {
        v19 = v17 - (v15 + 4);
        if (v17 != v15 + 4) {
          memmove(v15, v15 + 4, v17 - (v15 + 4));
          v18 = *v13;
        }
        *(_QWORD*)(v12 + 40) = v15 + v19;
      }
      return TroopMgr_1353fb0(v13, v18, &v20);
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct_closure_Invoke(__int64 a1,
                                                               __int64** a2)
{
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v3 = **a2;
  result = *(_QWORD*)(v3 + 280);
  if (result != 0) {
    v5 = *(_QWORD*)(a1 + 8);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    if ((unsigned __int8)result != 1 ||
        ((result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 280) + 112LL))(
              *(_QWORD*)(v3 + 280))) &
         1) == 0) {
      v6 = *(_QWORD*)(v3 + 280);
      if (v6 != 0) {
        result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v6 + 48LL))(
            *(_QWORD*)(v3 + 280));
        if ((result & 1) != 0) {
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v6 + 24LL))(v6);
          if ((unsigned __int8)result == 1) {
            (*(void (**)(_QWORD))(**(_QWORD**)(v3 + 280) + 72LL))(
                *(_QWORD*)(v3 + 280));
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v3 + 280) + 88LL))(
                *(_QWORD*)(v3 + 280), v5);
            result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v3 + 280) + 112LL))(
                *(_QWORD*)(v3 + 280));
            if ((result & 1) != 0) {
              result = *(_QWORD*)(v3 + 280);
              if (result != 0) {
                result =
                    (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
                *(_QWORD*)(v3 + 280) = 0;
              }
            }
            **(_BYTE**)(a1 + 16) = 1;
          }
        }
      }
    }
  }
  return result;
}

__int64 game_gmap_ProcGmapSeq_LimitOver_closure_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *a2;
  if ((*(_WORD*)(*a2 + 544) & 8) == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(v2 + 96);
  if (v4 != 0 && *(_BYTE*)(v4 + 32) == 4) {
    return 0;
  }
  else {
    return ((unsigned int)GameRoutine_133f1d0(v2, a2) ^ 1) & 1;
  }
}

bool game_gmap_ProcGmapSeq_LimitOver_closure0_Invoke(__int64 a1, __int64 a2)
{
  __int64 v3;

  if ((*(_WORD*)(*(_QWORD*)a2 + 544LL) & 8) == 0) {
    return false;
  }
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 96LL);
  return v3 == 0 || *(_BYTE*)(v3 + 32) != 4;
}

__int64 game_gmap_ProcGmapSeq_LimitOver_closure1_Invoke(__int64 result,
                                                        _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  v3 = *(_QWORD*)(result + 8);
  v4 = *(_QWORD*)(*a2 + 96LL);
  if (v4 == 0 || *(_BYTE*)(v4 + 32) != 4) {
    result = GameRoutine_133f1d0(*a2, a2);
    if ((result & 1) != 0) {
      *(_QWORD*)(v3 + 280) = v2;
    }
  }
  return result;
}

__int64 ProcGmapSeq_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;

  *(_QWORD*)a1 = game_gmap_ProcGmapSeq_vtable;
  *(_QWORD*)(a1 + 208) = GameData_1fa6ed0;
  v2 = a1 + 208;
  v3 = GameRoutine_886c80();
  v4 = --GameData_21d92dc;
  *GameData_212d168 = GameData_21d925c[v4];
  GameRoutine_7c51c0(v3);
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 240);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v6,
                                    v5);
    }
  }
  v10 = v2;
  *(_QWORD*)(a1 + 208) = GameData_212d6d0 + 2;
  GameRoutine_876a40(&GameData_21eea40, &v10);
  v7 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1fa6fb0;
  if (v7 == (_QWORD*)(a1 + 160)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);

LABEL_11:
  GameData_21f1618 = 0;
  *(_QWORD*)a1 = GameData_212c608[0] + 16;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcGmapSeq_Unknown7(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 (**v5)(__int64);
  __int64 v6;
  int v7;
  __int64 (**v8)(__int64, int*);
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 (**v14)(__int64, int*);
  char v15;
  __int64 v16;
  int v17;
  int v18;

  v3 = *GameData_212d708;
  if (*GameData_212d708 != 0) {
    v5 = *(__int64 (***)(__int64))(v3 + 8);
    v4 = v3 + 8;
    v6 = (*v5)(v4);
    v7 = game_HashString32(v6);
    v8 = *(__int64 (***)(__int64, int*))a2;
    v17 = v7;
    if (((*v8)(a2, &v17) & 1) != 0) {
      v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
      v10 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v10 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = v9;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 16LL))(v4, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
  if (GameData_21f1628 != 0) {
    v11 = GameData_21f1628 + 8;
    v12 = (**(__int64 (***)(__int64))(GameData_21f1628 + 8))(GameData_21f1628 +
                                                             8);
    v13 = game_HashString32(v12);
    v14 = *(__int64 (***)(__int64, int*))a2;
    v18 = v13;
    if (((*v14)(a2, &v18) & 1) != 0) {
      v15 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
      v16 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v16 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = v15;
      (*(void (**)(__int64, __int64))(*(_QWORD*)v11 + 16LL))(v11, a2);
    }
    (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
  }
}

void ProcGmapSeq_Unknown8(__int64 a1, __int64* a2, int a3)
{
  __int64 v5;
  __int64 v6;
  __int64 (**v7)(__int64);
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  int v26;
  __int64 v27;
  int v28;
  __int64 v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;

  v5 = *GameData_212d708;
  if (*GameData_212d708 != 0) {
    v7 = *(__int64 (***)(__int64))(v5 + 8);
    v6 = v5 + 8;
    v8 = (*v7)(v6);
    v9 = game_HashString32(v8);
    v10 = *a2;
    v32 = v9;
    if (((*(__int64 (**)(__int64*, int*))(v10 + 16))(a2, &v32) & 1) != 0) {
      v11 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v11 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v6 + 24LL))(
          v6, a2, *(unsigned __int8*)(a2[1] + v11));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if (GameData_21f1628 != 0) {
    v12 = GameData_21f1628 + 8;
    v13 = (**(__int64 (***)(__int64))(GameData_21f1628 + 8))(GameData_21f1628 +
                                                             8);
    v14 = game_HashString32(v13);
    v15 = *a2;
    v33 = v14;
    if (((*(__int64 (**)(__int64*, int*))(v15 + 16))(a2, &v33) & 1) != 0) {
      v16 = *((int*)a2 + 5);
      *((_DWORD*)a2 + 5) = v16 + 1;
      (*(void (**)(__int64, __int64*, _QWORD))(*(_QWORD*)v12 + 24LL))(
          v12, a2, *(unsigned __int8*)(a2[1] + v16));
    }
    (*(void (**)(__int64*, _QWORD))(*a2 + 24))(a2, 0);
  }
  if ((unsigned int)(a3 - 1) <= 1) {
    v17 = *((int*)a2 + 5);
    v18 = a2[1];
    v19 = v17 + 1;
    *((_DWORD*)a2 + 5) = v17 + 1;
    v20 = *(unsigned __int8*)(v18 + v17);
    if (v20 != 0) {
      if (v20 != 1) {
        v24 = 0;
        do {
          v25 = v19;
          v26 = v19 + 2;
          v27 = v25 + 1;
          *((_DWORD*)a2 + 5) = v25 + 1;
          LODWORD(v25) = *(unsigned __int8*)(v18 + v25);
          *((_DWORD*)a2 + 5) = v26;
          v28 = v25 | (*(unsigned __int8*)(v18 + v27) << 8);
          if (v28 != 0) {
            v26 += v28;
            *((_DWORD*)a2 + 5) = v26;
          }
          v29 = v26;
          v19 = v26 + 2;
          v30 = v29 + 1;
          *((_DWORD*)a2 + 5) = v29 + 1;
          LODWORD(v29) = *(unsigned __int8*)(v18 + v29);
          *((_DWORD*)a2 + 5) = v19;
          v31 = v29 | (*(unsigned __int8*)(v18 + v30) << 8);
          if (v31 != 0) {
            v19 += v31;
            *((_DWORD*)a2 + 5) = v19;
          }
          v24 += 2;
        } while ((v20 & 0xFE) != (unsigned __int8)v24);
      }
      if ((v20 & 1) != 0) {
        v21 = v19 + 1LL;
        *((_DWORD*)a2 + 5) = v21;
        v22 = *(unsigned __int8*)(v18 + v19);
        *((_DWORD*)a2 + 5) = v19 + 2;
        v23 = v22 | (*(unsigned __int8*)(v18 + v21) << 8);
        if (v23 != 0) {
          *((_DWORD*)a2 + 5) = v19 + 2 + v23;
        }
      }
    }
  }
}

#pragma GCC visibility pop
