#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

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
__int64 ProcGmapSeq_881560_alt1(__int64 a1) __asm__("ProcGmapSeq_881560");
__int64 ProcGmapSeq_8818a0_alt1(__int64 a1) __asm__("ProcGmapSeq_8818a0");
__int64 ProcGmapSeq_881f20(__int64 result);
__int64 ProcGmapSeq_882080();
__int64 ProcGmapSeq_8827e0(__int64 a1);
__int64 ProcGmapSeq_882cb0(__int64 a1);
__int64 ProcGmapSeq_882f10(__int64 result);
__int64 game_gmap_ProcGmapSeq_TryGetFarmProduct(__int64 a1);
__int64 ProcGmapSeq_883220_alt1() __asm__("ProcGmapSeq_883220");
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
__int64 ProcGmapSeq_8866a0_alt2() __asm__("ProcGmapSeq_8866a0");
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
__int64 ProcGmapSeq_882900_alt1(__int64 a1) __asm__("ProcGmapSeq_882900");
__int64 ProcGmapSeq_884100(__int64 result);
__int64 ProcGmapSeq_884920(__int64 result);
__int64 ProcGmapSeq_885880_alt1(__int64 result) __asm__("ProcGmapSeq_885880");
_BYTE* ProcGmapSeq_886c80_alt1(_BYTE* result,
                               __int64 a2) __asm__("ProcGmapSeq_886c80");
__int64 game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke_alt1(
    __int64 result,
    __int64**
        a2) __asm__("game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke");
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
unsigned __int64 game_gmap_ProcGmapSeq_PreExeCommand_alt1(
    unsigned __int64 result,
    int32x4_t a2) __asm__("game_gmap_ProcGmapSeq_PreExeCommand");
__int64 ProcGmapSeq_882d60(__int64 a1);
__int64 ProcGmapSeq_883020(__int64 result);
__int64 ProcGmapSeq_883540_alt1(__int64 a1) __asm__("ProcGmapSeq_883540");
_QWORD* ProcGmapSeq_8836c0(__int64 a1);
__int64 ProcGmapSeq_8838a0(__int64 a1);
__int64 ProcGmapSeq_8846c0(__int64 result);
__int64 ProcGmapSeq_885750(__int64 result);
void ProcGmapSeq_885b00(__n128 a1);
void ProcGmapSeq_8865e0(__int64 a1);
void ProcGmapSeq_886a90();
void ProcGmapSeq_887600();
bool GameHr_995200(__int64);
char** GameRoutine_888970_alt1(char** result, __int64, __int64,
                               unsigned __int64) __asm__("GameRoutine_888970");
__attribute__((swiftcall)) void
SpotMgr_13306e0_alt1(PSEUDO_X8, char**, char,
                     char**) __asm__("SpotMgr_13306e0");
__int64 (***ProcGmapSeq_887600_alt1(__int64 (***result)(),
                                    __int64))() __asm__("ProcGmapSeq_887600");
__int64 (**game_gmap_TroopActor_SetIsSilhouette(float32x4_t*, long double,
                                                double, long double,
                                                long double, long double,
                                                long double, long double))();
__int64 BladeResonance_14b7200_alt1(__int64) __asm__("BladeResonance_14b7200");
__int64 Camera_1314ec0(__int64 result, __int128*, char);
__int64 GameHr_162aea0(__int64, _QWORD*);
__int64 GameRoutine_1377920_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1377920");
__int64 GameRoutine_14ccc60_alt1(__int64) __asm__("GameRoutine_14ccc60");
__int64 GameRoutine_15255d0_alt1(__int64) __asm__("GameRoutine_15255d0");
__int64 GameRoutine_152c1d0_alt1(__int64) __asm__("GameRoutine_152c1d0");
__int64 GameRoutine_1538620_alt1(__int64) __asm__("GameRoutine_1538620");
__int64
GameRoutine_1545120_alt1(unsigned __int8**,
                         unsigned __int8*) __asm__("GameRoutine_1545120");
__int64 GameRoutine_1553130_alt1(__int64 result) __asm__("GameRoutine_1553130");
__int64 GameRoutine_175b880_alt1(__int64) __asm__("GameRoutine_175b880");
__int64 GameRoutine_175bde0_alt1(__int64) __asm__("GameRoutine_175bde0");
__int64 GameRoutine_17b8e80_alt1(__int64, char) __asm__("GameRoutine_17b8e80");
__int64 GameRoutine_17b8f40_alt1(__int64, char) __asm__("GameRoutine_17b8f40");
__int64 GameRoutine_17bce50_alt1(unsigned int) __asm__("GameRoutine_17bce50");
__int64 GameRoutine_17bcef0_alt1(int) __asm__("GameRoutine_17bcef0");
__int64 GmapDrawer_1538c80_alt1(__int64***, char) __asm__("GmapDrawer_1538c80");
__int64 GmapSituation_14db030_alt1() __asm__("GmapSituation_14db030");
__int64 GmapSituation_14db160();
__int64 GmapSituation_14dbe20_alt1() __asm__("GmapSituation_14dbe20");
__int64 Impl_13261c0_alt1(__int64) __asm__("Impl_13261c0");
__int64 Impl_132a090_alt1(__int64) __asm__("Impl_132a090");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_1567000_alt1(__int64,
                                    char) __asm__("LayoutAccessor_1567000");
__int64 MiasmaManager_14a91c0_alt1(__int64) __asm__("MiasmaManager_14a91c0");
__int64 ProcGameUIFade_15e1e60(__int64, __int64, __int64);
__int64
RuntimeBuffer_8924a0_alt1(__int64 result, __int64, unsigned __int64,
                          unsigned __int8) __asm__("RuntimeBuffer_8924a0");
__int64 SpotMgr_13304c0_alt1(unsigned int*) __asm__("SpotMgr_13304c0");
__int64 SpotMgr_1335920_alt1() __asm__("SpotMgr_1335920");
__int64 SpotMgr_1336ec0_alt1() __asm__("SpotMgr_1336ec0");
__int64 TroopMgr_134b560_alt1(__int64, __int64) __asm__("TroopMgr_134b560");
__int64 Troop_133e6e0(__int64);
__int64 game_14a3920(__int64 result);
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 game_gmap_133f780(__int64 result, _DWORD*, char);
__int64 game_gmap_13402f0_alt1(__int64, char,
                               char) __asm__("game_gmap_13402f0");
__int64 game_gmap_1347b30_alt1(__int64, __int64,
                               __int64) __asm__("game_gmap_1347b30");
__int64 game_gmap_1347cc0_alt1(_DWORD*, __int64) __asm__("game_gmap_1347cc0");
__int64 game_gmap_1522160(__int64 result);
__int64 game_gmap_TroopMgr_CountTroop_134e600_alt1(__int64, __int64) __asm__(
    "game_gmap_TroopMgr_CountTroop_134e600");
__int64 game_map_100c050(__int64 result);
bool ConvergeImpl_104f0e0(__int64, __int64);
bool GameRoutine_133e110_alt1(__int64) __asm__("GameRoutine_133e110");
bool GameRoutine_9d5430_alt1(__int64) __asm__("GameRoutine_9d5430");
bool GmapSituation_14dbd80_alt1() __asm__("GmapSituation_14dbd80");
bool game_gmap_887a40(__int64);
float Camera_Unknown2_1314240(__int64);
float Cursor_Unknown2_alt1(__int64) __asm__("Cursor_Unknown2");
float GameRoutine_17bc5a0_alt1(float32x4_t*) __asm__("GameRoutine_17bc5a0");
float std___1_stof_alt1(__int64, __int64) __asm__("std___1_stof");
long double GameRoutine_1535b30_alt1(void) __asm__("GameRoutine_1535b30");
unsigned __int64 GameRoutine_887920_alt1(_QWORD*,
                                         __int64) __asm__("GameRoutine_887920");
unsigned __int64 game_19a0e60(__int64);
unsigned int* game_gmap_SpotMgr_FindSpot_alt2(unsigned int* result) __asm__(
    "game_gmap_SpotMgr_FindSpot");
void GameGmapData_13601b0_alt1(long double) __asm__("GameGmapData_13601b0");
void GameGmapData_13602c0(__int64);
void GameHr_8679c0();
void GameRoutine_17bcf90_alt2() __asm__("GameRoutine_17bcf90");
void GameRoutine_17bd0e0_alt1(__int64) __asm__("GameRoutine_17bd0e0");
void GmapUI_17bc0a0(_QWORD*);
void MiasmaManager_14a9960_alt1(__int64) __asm__("MiasmaManager_14a9960");
void SpotMgr_1335280_alt1(char) __asm__("SpotMgr_1335280");
void SpotMgr_13370c0_alt1() __asm__("SpotMgr_13370c0");
void TroopMgr_13487a0_alt1() __asm__("TroopMgr_13487a0");
void TroopMgr_134ebe0_alt1(__int64) __asm__("TroopMgr_134ebe0");
void TroopMgr_134fb00();
void game_gmap_1347e20();
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_gmap_ProcGmapSeq_PreExeCommand(__int64 a1, int32x4_t a2);
unsigned __int64 ProcGmapSeq_881560(unsigned __int64 a1, __int64 a2);
void ProcGmapSeq_8818a0(__int64 a1);
__int64 ProcGmapSeq_883220(__int64 a1);
void ProcGmapSeq_883540(__int64 a1);
_QWORD* GameManager_a2c820_alt2(__int64, __int64,
                                char) __asm__("GameManager_a2c820");
__int64
snd_Fade_Fade_10cb00_alt1(__int64,
                          unsigned __int8*) __asm__("snd_Fade_Fade_10cb00");
void GameManager_a2f660_alt1(__int64) __asm__("GameManager_a2f660");
void TroopMgr_1349f40_alt1() __asm__("TroopMgr_1349f40");
void ProcGmapSeq_8866a0();
__int64*
GameRoutine_888970_alt2(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_888970");
__int64 BladeResonance_14b7400(__int64);
__int64 GameHr_14a1390(__int64*, char);
__int64 GameHr_14a1520(__int64*, char);
__int64 GameRoutine_1553220_alt1(__int64 result) __asm__("GameRoutine_1553220");
__int64 GameRoutine_15e2a60_alt1() __asm__("GameRoutine_15e2a60");
__int64 SpotMgr_1337000();
__int64 Troop_1342b80(__int64);
__int64 game_ProcInst_Register_alt1(__int64) __asm__("game_ProcInst_Register");
__int64 game_gmap_888560();
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 wmemchr_alt1(__int64, unsigned int,
                     unsigned __int64) __asm__("wmemchr");
char* TroopMgr_1353fb0_alt1(__int64*, __int64,
                            char*) __asm__("TroopMgr_1353fb0");
const char*
game_HashString32_alt2(const char* result) __asm__("game_HashString32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 TroopMgr_1348ec0_alt1() __asm__("TroopMgr_1348ec0");
void GameSubquestData_125a1a0_alt1(__int64, __int64*, __int64,
                                   char) __asm__("GameSubquestData_125a1a0");
void GmapUI_Destructor(_QWORD*);
void TroopMgr_13486a0_alt1() __asm__("TroopMgr_13486a0");
void TroopMgr_134a720_alt1() __asm__("TroopMgr_134a720");
void __attribute__((noreturn))
GameRoutine_888610_alt1() __asm__("GameRoutine_888610");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void ProcGmapSeq_882900(__int64 a1);
void ProcGmapSeq_885880(__int64 a1);
void ProcGmapSeq_886c80(__int64 a1);
void game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke(__int64 a1,
                                                          __int64** a2);

__int64 game_gmap_ProcGmapSeq_Initialize(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  float v4;
  __int64* v5;
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
  _QWORD* v20;
  __int64* v21;
  __int64 v22;
  _QWORD* v23;
  __int64* v24;
  __int64* v25;
  long double v26;
  __int64* v28;
  int v29;
  __int64 v30;
  int v31;
  __int64 v32;
  __int64 v33;
  unsigned int v34;
  int v35;
  int v36;
  char v37;
  __int64 v38;
  __int64 v39;
  int v40;
  __int64* v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  unsigned int* v45;
  __int64 v46;
  int v47;
  __int64* v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned int* v53;
  __int64 v54;
  __int64 v55;
  __int64* v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 (**v61)();
  int v62;
  __int64 v63;
  int v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  unsigned int*** v70;
  unsigned int*** v71;
  unsigned int** v72;
  unsigned int** v73;
  unsigned int* v74;
  __int64 v75;
  __int64 v76;
  int v77;
  _BYTE* v78;
  __int64 v79;
  __int64 v80;
  __int64 result;
  __int64 v82;
  unsigned int* v83;
  struct {
    _QWORD v84[4];
    _QWORD* v85;
  } v84_;
  struct {
    _QWORD v86[4];
    _QWORD* v87;
  } v86_;
  struct {
    __int64 (**v88)();
    _UNKNOWN** v89;
    char gap112_[16];
    unsigned __int64* v90;
  } v88_;

  GameHr_8679c0();
  v2 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v3 & 0x10) == 0) {
      v4 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v3 & 0xFFFFFFE2 | 1;
      if (v4 > 0x0.0p+0f) {
        *(_DWORD*)(v2 + 224) = 0;
      }
    }
  }
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 16, 16, 0);
  v7 = (_QWORD*)v6;
  v8 = GameData_212d6f8[0];
  if (*GameData_212d6f8[0] == 0) {
    *GameData_212d6f8[0] = v6;
    *GameData_2131878[0] = 1;
  }
  v9 = *v5;
  *v7 = GameData_2131870 + 2;
  v10 = fw_memory_HeapManager_Allocate_alt1(v9, 64, 16, 0);
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
  v11 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 16, 16, 0);
  v12 = GameData_212d700[0];
  if (*GameData_212d700[0] == 0) {
    *GameData_21318a0[0] = 1;
  }
  v13 = GameData_2131898;
  *v12 = (__int64)v11;
  *v11 = v13 + 2;
  v11[1] = 0;
  GameRoutine_1538620_alt1((__int64)v11);
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 24, 16, 0);
  v14[2] = 0;
  v15 = GameData_212d708;
  if (*GameData_212d708 == 0) {
    *GameData_212d710 = 1;
  }
  v16 = GameData_212d7c0[0];
  *v15 = (__int64)v14;
  *v14 = v16 + 2;
  v14[1] = v16 + 12;
  Cursor_Unknown2_alt1((__int64)v14);
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 24, 16, 0);
  v17[2] = 0;
  v18 = GameData_212d718;
  if (*GameData_212d718 == 0) {
    *GameData_212d720 = 1;
  }
  v19 = GameData_212d7c8[0];
  *v18 = (__int64)v17;
  *v17 = v19 + 2;
  v17[1] = v19 + 12;
  Camera_Unknown2_1314240((__int64)v17);
  v20 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v5, 16, 16, 0);
  GmapUI_17bc0a0(v20);
  v21 = GameData_212d728[0];
  v22 = *v5;
  *GameData_212d728[0] = (__int64)v20;
  v23 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v22, 16, 16, 0);
  v24 = GameData_212d730;
  if (*GameData_212d730 == 0) {
    *GameData_212d738 = 1;
  }
  v25 = GameData_212d7d0[0];
  *v24 = (__int64)v23;
  *v23 = v25 + 2;
  v23[1] = 0;
  v26 = GameRoutine_1535b30_alt1();
  GameGmapData_13601b0_alt1(v26);
  GameRoutine_1553130_alt1(11);
  v28 = GameData_212c790;
  if (GameData_21eea58 == 0 || *(_BYTE*)(GameData_21eea58 + 32) != 1) {
    v32 = *(_QWORD*)(*v21 + 8);
    LayoutAccessor_155e830_alt1(*(_QWORD*)(v32 + 16), 0);
    if (*(_QWORD*)game_hub_ProgressEventView_instance__ptr[0] != 0) {
      GameRoutine_17b8f40_alt1(
          *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0], 1);
    }
    v33 = game_gameui_Footer_instance_;
    v34 = *(_DWORD*)(v32 + 5856) & 0xFFFEFFFF;
    *(_DWORD*)(v32 + 5856) = v34;
    if (v33 != 0) {
      LayoutAccessor_1567000_alt1(v33, 0);
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
      v88_.v89 = (_UNKNOWN**)&GameData_1a86d37;
      v88_.v88 =
          (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1a86d37);
      if (game_GameModeData_instance_ != 0 &&
          (v52 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v88_.v88)) != 0) {
        v30 = *(_QWORD*)(*v21 + 8);
        if (*(_DWORD*)(v52 + 32) != 0) {
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
    v65 = *(_DWORD*)(v30 + 5856);
    *(_DWORD*)(v30 + 5856) = v65 & 0xFFFFFFFD | v31;
    v66 = *(_QWORD*)game_hub_ProgressEventView_instance__ptr[0];
    if ((v65 & 0x10000) != 0) {
      if (v66 != 0) {
        GameRoutine_17b8e80_alt1(v66, 1);
      }
    }
    else if (v66 != 0) {
      GameRoutine_17b8f40_alt1(v66, 1);
    }
    if ((v65 & 0x20000) != 0) {
      GameRoutine_17bd0e0_alt1(v30);
    }
    else {
      if (game_gameui_Footer_instance_ != 0) {
        LayoutAccessor_1567000_alt1(game_gameui_Footer_instance_, 0);
      }
      *(_DWORD*)(v30 + 5856) &= ~0x20000u;
    }
    GameRoutine_877400(a1 + 208);
    *(_BYTE*)(a1 + 305) = 0;
    *(_BYTE*)(a1 + 310) = 1;
    v64 = 13;
  LABEL_88:
    *(_DWORD*)(a1 + 152) = v64;
    v67 = GameData_21eea58;
    if (GameData_21eea58 == 0) {
      goto LABEL_90;
    }
    goto LABEL_89;
  }
  if ((v29 & 0x1C) != 0) {
    v64 = 3;
    goto LABEL_88;
  }
  GameRoutine_877400(a1 + 208);
  *(_DWORD*)(a1 + 152) = 8;
  *(_BYTE*)(a1 + 310) = 1;
  v83 = TroopMgr_134c680();
  game_gmap_1522160((__int64)v83);
  v67 = GameData_21eea58;
  if (GameData_21eea58 != 0) {
  LABEL_89:
    *(_BYTE*)(v67 + 32) = 0;
  }
LABEL_90:
  *(_BYTE*)(*(_QWORD*)(*v12 + 8) + 56LL) = 1;
  v68 = *(_QWORD*)(*v28 + 8);
  v69 = *(_DWORD*)(v68 + 56);
  v70 = *(unsigned int****)(v68 + 8);
  v71 = *(unsigned int****)(v68 + 16);
  if ((v69 & 0x80000000) == 0) {
    while (v70 != v71) {
      v73 = *v70++;
      v72 = v73;
      if (*((_DWORD*)v73 + 21) == v69) {
        goto LABEL_101;
      }
    }
  LABEL_96:
    v74 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
    v75 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_33;
    }
    goto LABEL_102;
  }
  if (v70 == v71) {
    goto LABEL_96;
  }
  while (1) {
    v72 = *v70;
    if ((*v70)[12] == nullptr && v72[69] == nullptr) {
      break;
    }
    if (++v70 == v71) {
      goto LABEL_96;
    }
  }
LABEL_101:
  v74 = *v72;
  v75 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
  LABEL_102:
    v76 = *(_QWORD*)(v75 + 24);
    if (v76 != 0 && *(_BYTE*)(v76 + 152) == 4 &&
        *(_QWORD*)(v76 + 168) == *((_QWORD*)v74 + 15)) {
      v36 = 18;
    LABEL_32:
      *(_DWORD*)(a1 + 152) = v36;
    }
  }
LABEL_33:
  v37 = GmapSituation_14db030_alt1();
  v38 = GameData_212c7a0[0];
  if ((v37 & 1) == 0 || (*(_BYTE*)(a1 + 310) & 1) != 0) {
    goto LABEL_66;
  }
  v39 = *(_QWORD*)(*v28 + 8);
  v40 = *(_DWORD*)(v39 + 56);
  v41 = *(__int64**)(v39 + 8);
  v42 = *(__int64**)(v39 + 16);
  if (v40 < 0) {
    for (; v41 != v42; ++v41) {
      v43 = *v41;
      if (*(_QWORD*)(*v41 + 96) == 0 && *(_QWORD*)(v43 + 552) == 0) {
        goto LABEL_45;
      }
    }
  LABEL_41:
    v45 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
    goto LABEL_46;
  }
  if (v41 == v42) {
    goto LABEL_41;
  }
  while (1) {
    v44 = *v41++;
    v43 = v44;
    if (*(_DWORD*)(v44 + 84) == v40) {
      break;
    }
    if (v41 == v42) {
      goto LABEL_41;
    }
  }
LABEL_45:
  v45 = *(unsigned int**)v43;
LABEL_46:
  if ((unsigned __int8)Impl_13261c0_alt1((__int64)v45) != 0) {
    v46 = *(_QWORD*)(*v28 + 8);
    v47 = *(_DWORD*)(v46 + 56);
    v48 = *(__int64**)(v46 + 8);
    v49 = *(__int64**)(v46 + 16);
    if (v47 < 0) {
      for (; v48 != v49; ++v48) {
        v50 = *v48;
        if (*(_QWORD*)(*v48 + 96) == 0 && *(_QWORD*)(v50 + 552) == 0) {
          goto LABEL_62;
        }
      }
    }
    else if (v48 != v49) {
      while (1) {
        v51 = *v48++;
        v50 = v51;
        if (*(_DWORD*)(v51 + 84) == v47) {
          break;
        }
        if (v48 == v49) {
          goto LABEL_58;
        }
      }
    LABEL_62:
      v53 = *(unsigned int**)v50;
    LABEL_63:
      if ((unsigned __int8)Impl_13261c0_alt1((__int64)v53) != 2) {
        goto LABEL_66;
      }
      goto LABEL_64;
    }
  LABEL_58:
    v53 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
    goto LABEL_63;
  }
LABEL_64:
  if (**(_QWORD**)(*(_QWORD*)v38 + 16LL) == 0) {
    v88_.v89 = (_UNKNOWN**)&GameData_1a9e43e;
    v88_.v88 =
        (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1a9e43e);
    game_VariableManager_SetFlag_alt1((__int64)&v88_.v88, 0);
  }
LABEL_66:
  v54 = *v28;
  *(_DWORD*)(*(_QWORD*)(*v28 + 8) + 56LL) = -1;
  *(_BYTE*)(*(_QWORD*)(*v21 + 8) + 5844LL) = 0;
  v55 = *(_QWORD*)(v54 + 8);
  v56 = *(__int64**)(v55 + 8);
  v57 = *(__int64**)(v55 + 16);
  while (v56 != v57) {
    v58 = *v56++;
    Troop_133e6e0(v58);
  }
  SpotMgr_1335280_alt1(1);
  v88_.v89 = (_UNKNOWN**)&GameData_1abbb2b;
  v88_.v88 =
      (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1abbb2b);
  if (game_GameModeData_instance_ != 0) {
    v59 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v88_.v88);
    if (v59 != 0 && *(_DWORD*)(v59 + 32) != 0) {
      v60 = *(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL);
      v88_.v89 = &GameData_1afe67f;
      v61 =
          (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1afe67f);
      v62 = game_GameModeData_instance_;
      v88_.v88 = v61;
      if (game_GameModeData_instance_ != 0) {
        v63 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v88_.v88);
        if (v63 != 0) {
          v62 = *(_DWORD*)(v63 + 32);
        }
        else {
          v62 = 0;
        }
      }
      *(_DWORD*)(v60 + 36) = v62;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v77 = *(_DWORD*)(game_GameModeData_instance_ + 92);
    if ((v77 & 2) != 0) {
      *(_BYTE*)(a1 + 305) = 0;
      *(_BYTE*)(a1 + 308) = 1;
    }
    else if ((v77 & 0x40) == 0) {
      *(_DWORD*)(game_GameModeData_instance_ + 92) = v77 & 0xFFFFFBA1;
    }
  }
  *(_DWORD*)(a1 + 276) = 0;
  *(_BYTE*)(a1 + 304) = 1;
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v78 = *(_BYTE**)(a1 + 240);
    *(_QWORD*)(a1 + 232) = 0;
  }
  else {
    v78 = (_BYTE*)(a1 + 225);
    *(_BYTE*)(a1 + 224) = 0;
  }
  *v78 = 0;
  GameGmapData_13602c0(*(_QWORD*)(*(_QWORD*)v38 + 16LL));
  v88_.v88 = GameData_1fa6790;
  v88_.v89 = (_UNKNOWN**)a1;
  v88_.v90 = (unsigned __int64*)&v88_.v88;
  v86_.v86[0] = GameData_1fa6810;
  v86_.v86[1] = a1;
  v86_.v87 = v86_.v86;
  v84_.v85 = v84_.v84;
  v84_.v84[0] = GameData_1fa6890;
  ProcGameUIFade_15e1e60((__int64)&v88_.v88, (__int64)v86_.v86,
                         (__int64)v84_.v84);
  if (v84_.v85 == v84_.v84) {
    v79 = 32;
  }
  else {
    if (v84_.v85 == nullptr) {
      goto LABEL_121;
    }
    v79 = 40;
  }
  (*(void (**)(__int64))(*v84_.v85 + v79))((__int64)v84_.v85);
LABEL_121:
  if (v86_.v87 == v86_.v86) {
    v80 = 32;
  }
  else {
    if (v86_.v87 == nullptr) {
      goto LABEL_126;
    }
    v80 = 40;
  }
  (*(void (**)(__int64))(*v86_.v87 + v80))((__int64)v86_.v87);
LABEL_126:
  result = (__int64)v88_.v90;
  if (v88_.v90 == (unsigned __int64*)&v88_.v88) {
    v82 = 32;
  }
  else {
    if (v88_.v90 == nullptr) {
      return result;
    }
    v82 = 40;
  }
  return (*(__int64 (**)(__int64))(*v88_.v90 + v82))((__int64)v88_.v90);
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
  __int64 v13;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64** v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  __int16* v23;
  __int64 v24;
  __int16* v25;
  float v26;
  __int64 v27;
  float32x4_t** v28;
  float32x4_t** v29;
  float32x4_t* v30;
  __int64 v32;
  float32x4_t*** v33;
  float32x4_t*** i;
  float32x4_t** v35;
  float32x4_t* v36;
  unsigned __int64 v37;
  float32x4_t v38;
  float32x4_t v39;
  __int64 v40;
  __int64 v41;
  unsigned int v42;
  unsigned int v43;
  float32x4_t v44;
  float32x4_t* v45;
  float32x4_t v47;

  if (*(int*)(a1 + 256) <= 0) {
    game_gmap_TroopActor_SetIsSilhouette(
        *(float32x4_t**)(*GameData_212d708 + 16), a2, a3, a4, a5, a6, a7, a8);
    Camera_1315b10(*(_QWORD*)(*GameData_212d718 + 16));
    GmapDrawer_1538c80_alt1(*(__int64****)(*GameData_212d700[0] + 8),
                            *(_BYTE*)(a1 + 305));
    GmapSound_1530270(*(_QWORD*)(*GameData_212d6f8[0] + 8));
    v13 = game_gmap_GmapClock_kDefaultTime_ptr;
    if (GameData_21c6878 != 0 && GameData_21c6888 != 0) {
      v15 = *(unsigned int*)(a1 + 288);
      v16 = GameData_21c6878 - 1;
      if ((GameData_21c6878 & (GameData_21c6878 - 1)) != 0) {
        v17 = *(unsigned int*)(a1 + 288);
        if (GameData_21c6878 <= v15) {
          v17 = (unsigned int)v15 % (unsigned int)GameData_21c6878;
        }
      }
      else {
        v17 = ((_DWORD)GameData_21c6878 - 1) & (unsigned int)v15;
      }
      v18 = *(__int64***)(game_g_proc_registry + 8 * v17);
      if (v18 != nullptr) {
        v19 = *v18;
        if (v19 != nullptr) {
          if ((GameData_21c6878 & v16) == 0) {
            while (1) {
              v21 = v19[1];
              if (v21 == v15) {
                if (*((_DWORD*)v19 + 4) == (_DWORD)v15) {
                  goto LABEL_26;
                }
              }
              else if ((v21 & v16) != v17) {
                goto LABEL_34;
              }
              v19 = (__int64*)*v19;
              if (v19 == nullptr) {
                goto LABEL_34;
              }
            }
          }
          do {
            v20 = v19[1];
            if (v20 == v15) {
              if (*((_DWORD*)v19 + 4) == (_DWORD)v15) {
              LABEL_26:
                v22 = v19[3];
                if (v22 != 0) {
                  v23 = (__int16*)(game_gmap_GmapClock_instance_ != 0
                                       ? game_gmap_GmapClock_instance_ + 32
                                       : game_gmap_GmapClock_kDefaultTime_ptr);
                  v24 = ((__int64)v23[1] << 24) + ((__int64)*v23 << 32) +
                        ((__int64)v23[2] << 18) + ((__int64)v23[3] << 12) +
                        ((__int64)v23[4] << 6) + v23[5];
                  if ((v24 == ((__int64)*(__int16*)(a1 + 266) << 24) +
                                  ((__int64)*(__int16*)(a1 + 264) << 32) +
                                  ((__int64)*(__int16*)(a1 + 268) << 18) +
                                  ((__int64)*(__int16*)(a1 + 270) << 12) +
                                  ((__int64)*(__int16*)(a1 + 272) << 6) +
                                  *(__int16*)(a1 + 274) ||
                       v24 ==
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
                      *(_BYTE*)(v22 + 139) != 0) {
                    ProcInst_657b10(v22);
                  }
                }
                break;
              }
            }
            else {
              if (v20 >= GameData_21c6878) {
                v20 %= (unsigned __int64)GameData_21c6878;
              }
              if (v20 != v17) {
                break;
              }
            }
            v19 = (__int64*)*v19;
          } while (v19 != nullptr);
        }
      }
    }
  LABEL_34:
    if (game_gmap_GmapClock_instance_ != 0) {
      v25 = (__int16*)(game_gmap_GmapClock_instance_ + 32);
    }
    else {
      v25 = (__int16*)v13;
    }
    if (v25[1] * *v25 * v25[2] != 0 ||
        (game_gmap_GmapClock_instance_ != 0
             ? (v25 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
             : (v25 = (__int16*)v13),
         game_gmap_GmapClock_instance_ == 0)) {
      v26 = 0x0.0p+0f;
    }
    else {
      v26 = *(float*)(game_gmap_GmapClock_instance_ + 44);
    }
    game_8697c0(v25, 0, v26);
    v27 = *(_QWORD*)(*GameData_212c790 + 8);
    v28 = *(float32x4_t***)(v27 + 8);
    v29 = *(float32x4_t***)(v27 + 16);
    while (v28 != v29) {
      v30 = *v28++;
      GameRoutine_1340130(v30);
      UnitActor_81d540((__int64)&v30[7]);
    }
    if (game_GameModeData_instance_ != 0 &&
        *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
      v32 = *(_QWORD*)(*GameData_2130e60 + 8);
      v33 = *(float32x4_t****)(v32 + 48);
      for (i = *(float32x4_t****)(v32 + 56); v33 != i; ++v33) {
        v35 = *v33;
        v47 = (__typeof__(v47)){0};
        game_gmap_133ffb0(*v35, &v47);
        v36 = *v35;
        v37 = LANES128((*v35)[6]).n128_u64[0];
        LANES128(v38).n128_u32[0] = *(_DWORD*)(v37 + 120);
        LANES128(v38).n128_f32[2] =
            *(float*)(v37 + 124) + 0x1.4000000000000p+2f;
        v39 = vaddq_f32(vaddq_f32(v47, (*v35)[4]), v38);
        v47 = v39;
        v40 = (__int64)v35[1];
        v41 = *(_QWORD*)v40;
        if (*(_QWORD*)v40 != 0 && *(_DWORD*)(v41 + 16) == *(_DWORD*)(v40 + 8)) {
          v42 = *(_DWORD*)(v41 + 36);
          if (v42 != 0) {
            v43 = 0;
            v44 = vaddq_f32(v36[3], v39);
            do {
              if ((int)v42 > (int)v43) {
                v45 = *(float32x4_t**)(v41 + 40 + 8LL * (int)v43);
                if (v45 != nullptr) {
                  v45[1] = v44;
                  LANES128(v45[8]).n128_u8[0] = 1;
                  v42 = *(_DWORD*)(v41 + 36);
                }
              }
              ++v43;
            } while (v43 < v42);
          }
        }
        game_14a3920(v40);
      }
    }
    *(float*)&a2 =
        GameRoutine_17bc5a0_alt1(*(float32x4_t**)(*GameData_212d728[0] + 8));
  }
  return *(float*)&a2;
}

void game_gmap_ProcGmapSeq_PreExeCommand(__int64 a1, int32x4_t a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  char* v9;
  __int64* v10;
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
  __int64 v24;
  unsigned __int64 v25;
  __int64 v28;
  __int64 v29;
  __int64 v32;
  int v33;
  bool v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _DWORD* v38;
  __int64* v39;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  unsigned __int64 v54;
  unsigned __int64 v55;
  __int64* v56;
  __int64 v57;
  __int64 v58;
  __int64 v60;
  __int64 v61;
  __int64* v62;
  __int64 v63;
  __int64 v64;
  __int64 v66;
  __int64* v67;
  __int64 v68;
  int v69;
  __int64* v71;
  __int64* v72;
  int* v73;
  int v74;
  int v75;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64* v80;
  __int64* v81;
  __int64 v82;
  _BYTE* v83;
  char v84;
  __int64 v85;
  __int64 v86;
  _DWORD* v87;
  __int64 v88;
  unsigned __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int64 v93;
  unsigned __int64 v94;
  _QWORD* v95;
  _QWORD* v96;
  unsigned __int64 v97;
  __int64 v98;
  _QWORD* v99;
  _QWORD* v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned int* v103;
  unsigned int* v104;
  unsigned int* v105;
  unsigned int* v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  char* v112;
  char v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  unsigned __int32 v118;
  int32x4_t v119;
  __int64 v120;
  __int64 v121;
  unsigned __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v125;
  unsigned __int64 v126;
  _QWORD* v127;
  _QWORD* v128;
  unsigned __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  __int16 v133;
  int8x16_t v134;
  int8x16_t v135;
  __int128 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  char v140;
  __int64 v141;
  __int64 v142;
  int32x4_t v143;
  __int64* v144;
  struct {
    char* v145;
    char* v146;
    __int64 v147;
  } v145_;
  struct {
    char* v148;
    char* v149;
    __int64 v150;
  } v148_;
  struct {
    char* v151;
    char* v152;
    char gap96_[16];
    char** v153;
  } v151_;
  struct {
    __int64 v154;
    __int64 v155;
    __int64 v156;
    char gap152_[16];
    __int64 v157;
  } v154_;

  v154_.v157 = a1;
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
      v144 = (__int64*)(v154_.v157 + 224);
      v10 = (__int64*)fw_memory_g_heap_manager_ptr;
      PSEUDO_LOW_LANE128(a2, n128_u32, 2);
      v143 = a2;
      do {
        v13 = *(_QWORD**)(v2 + 8);
        v15 = v13[3];
        v14 = v13[4];
        v16 = *v13;
        v17 = v14 == v15 && v13[1] == v16;
        if (v17) {
          return;
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
          return;
        }
        v154_.v155 = 0;
        v154_.v156 = 0;
        v154_.v154 = 0;
        v21 = *v13;
        if (v14 != v15) {
          v21 = v15;
        }
        v22 = (unsigned __int8*)(v21 + 24LL * (int)v20);
        v23 = *v22;
        if ((v23 & 1) != 0) {
          v24 = *((_QWORD*)v22 + 2);
        }
        else {
          v24 = (__int64)(v22 + 1);
        }
        if ((v23 & 1) != 0) {
          v25 = *((_QWORD*)v22 + 1);
        }
        else {
          v25 = v23 >> 1;
        }
        RuntimeBuffer_8924a0_alt1((__int64)&v154_.v154, v24, v25, 0x2Fu);
        v28 = *(_QWORD*)(v154_.v154 + 8);
        if ((*(_BYTE*)v154_.v154 & 1) == 0) {
          v28 = *(_BYTE*)v154_.v154 >> 1;
        }
        if (v28 <= 11) {
          if (v28 != 1) {
            if (v28 == 4) {
              v38 = (*(_BYTE*)v154_.v154 & 1) != 0
                        ? *(_DWORD**)(v154_.v154 + 16)
                        : (_DWORD*)(v154_.v154 + 1);
              v17 = *v38 == 2036427856;
              v39 = (__int64*)(v154_.v154 + 24);
              if (v17 && v144 != v39) {
                v41 = *(unsigned __int8*)v39;
                if ((*(_BYTE*)v144 & 1) != 0) {
                  if ((v41 & 1) != 0) {
                    v93 = *(_QWORD*)(v154_.v154 + 40);
                  }
                  else {
                    v93 = v154_.v154 + 25;
                  }
                  if ((v41 & 1) != 0) {
                    v94 = *(_QWORD*)(v154_.v154 + 32);
                  }
                  else {
                    v94 = v41 >> 1;
                  }
                  SpineModel_64dde0_alt1(v144, v93, v94);
                }
                else if ((v41 & 1) != 0) {
                  GameRoutine_64df20_alt1(v144, *(_QWORD*)(v154_.v154 + 40),
                                          *(_QWORD*)(v154_.v154 + 32));
                }
                else {
                  v42 = *v39;
                  v43 = *(_QWORD*)(v154_.v154 + 40);
                  v144[1] = *(_QWORD*)(v154_.v154 + 32);
                  v144[2] = v43;
                  *v144 = v42;
                }
              }
            }
            goto LABEL_287;
          }
          if ((*(_BYTE*)v154_.v154 & 1) != 0) {
            v83 = *(_BYTE**)(v154_.v154 + 16);
          }
          else {
            v83 = (_BYTE*)(v154_.v154 + 1);
          }
          if (*v83 != 42) {
            goto LABEL_287;
          }
          v84 = 0;
          goto LABEL_288;
        }
        if (v28 == 18) {
          if ((*(_BYTE*)v154_.v154 & 1) != 0) {
            v44 = *(_QWORD*)(v154_.v154 + 16);
          }
          else {
            v44 = v154_.v154 + 1;
          }
          v45 = *(_QWORD*)v44;
          v46 = *(_QWORD*)(v44 + 8);
          v47 = *(unsigned __int16*)(v44 + 16);
          if (v45 != 0x83E39481E9B088E5LL || v46 != 0xE38383E3A782E381LL ||
              v47 != 44930) {
            goto LABEL_287;
          }
          v50 = (*(_BYTE*)(v154_.v154 + 24) & 1) != 0
                    ? *(_QWORD*)(v154_.v154 + 40)
                    : v154_.v154 + 25;
          v51 = game_HashString_alt2(v50);
          if (v51 == 0) {
            goto LABEL_287;
          }
          v52 = *(_QWORD*)(GameData_21ca090 + 96);
          if (v52 == 0 || *(_QWORD*)(GameData_21ca090 + 112) == 0) {
            goto LABEL_287;
          }
          v54 = v52 - 1;
          if ((v52 & (v52 - 1)) != 0) {
            v55 = v51;
            if (v51 >= v52) {
              v55 = v51 % v52;
            }
          }
          else {
            v55 = v54 & v51;
          }
          v95 = *(_QWORD**)(*(_QWORD*)(GameData_21ca090 + 88) + 8 * v55);
          if (v95 == nullptr) {
            goto LABEL_287;
          }
          v96 = (_QWORD*)*v95;
          if (v96 == nullptr) {
            goto LABEL_287;
          }
          if ((v52 & v54) == 0) {
            while (1) {
              v98 = v96[1];
              if (v98 == v51) {
                if (v96[2] == v51) {
                  goto LABEL_225;
                }
              }
              else if ((v98 & v54) != v55) {
                goto LABEL_287;
              }
              v96 = (_QWORD*)*v96;
              if (v96 == nullptr) {
                goto LABEL_287;
              }
            }
          }
          while (1) {
            v97 = v96[1];
            if (v97 == v51) {
              if (v96[2] == v51) {
              LABEL_225:
                v103 = (unsigned int*)v96[3];
                if (v103 != nullptr) {
                  v104 = game_gmap_SpotMgr_FindSpot_alt2(v103);
                  if (v104 != nullptr) {
                    v105 = v104;
                    v106 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
                    v107 = fw_memory_HeapManager_Allocate_alt1(*v10, 16, 16, 0);
                    *(_QWORD*)v107 = v106;
                    *(_QWORD*)(v107 + 8) = v105;
                    v145_.v147 = 0;
                    v148_.v148 = (char*)v107;
                    v145_.v145 = nullptr;
                    v145_.v146 = nullptr;
                    v148_.v149 = (char*)(v107 + 16);
                    v148_.v150 = v107 + 16;
                    SpotMgr_13306e0_alt1((void*)(&v151_.v151), &v148_.v148, 17,
                                         &v145_.v145);
                    if (v145_.v145 != nullptr) {
                      v108 = *v10;
                      v145_.v146 = v145_.v145;
                      if (*(_QWORD*)(v108 + 200) != 0) {
                        v109 = 128;
                      }
                      else {
                        v109 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v108 + v109,
                                                         (__int64)v145_.v145);
                    }
                    if (v148_.v148 != nullptr) {
                      v110 = *v10;
                      v148_.v149 = v148_.v148;
                      if (*(_QWORD*)(v110 + 200) != 0) {
                        v111 = 128;
                      }
                      else {
                        v111 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v110 + v111,
                                                         (__int64)v148_.v148);
                    }
                    v112 = v151_.v151;
                    v113 = *((_BYTE*)v105 + 178) & 0xFE;
                    if (v151_.v152 != v151_.v151) {
                      ++v113;
                    }
                    *((_BYTE*)v105 + 178) = v113;
                    if (v112 != nullptr) {
                      v114 = *v10;
                      v151_.v152 = v112;
                      if (*(_QWORD*)(v114 + 200) != 0) {
                        v115 = 128;
                      }
                      else {
                        v115 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(v114 + v115,
                                                         (__int64)v112);
                    }
                  }
                }
                goto LABEL_287;
              }
            }
            else {
              if (v97 >= v52) {
                v97 %= v52;
              }
              if (v97 != v55) {
                goto LABEL_287;
              }
            }
            v96 = (_QWORD*)*v96;
            if (v96 == nullptr) {
              goto LABEL_287;
            }
          }
        }
        if (v28 == 15) {
          if ((*(_BYTE*)v154_.v154 & 1) != 0) {
            v56 = *(__int64**)(v154_.v154 + 16);
          }
          else {
            v56 = (__int64*)(v154_.v154 + 1);
          }
          v57 = *v56;
          v58 = *(__int64*)((char*)v56 + 7);
          if (v57 == 0x9DE99B8AE5A28BE5LL && v58 == 0xBAA4E7A8A1E89E9DLL) {
            v60 = v154_.v154 + 24;
            if (v154_.v155 != v154_.v154 + 24) {
              v61 = *(_QWORD*)(GameData_21c96e8 + 8);
              do {
                v66 = *(_QWORD*)(v60 + 8);
                if ((*(_BYTE*)v60 & 1) == 0) {
                  v66 = *(_BYTE*)v60 >> 1;
                }
                switch (v66) {
                case 6LL:
                  if ((*(_BYTE*)v60 & 1) != 0) {
                    v73 = *(int**)(v60 + 16);
                  }
                  else {
                    v73 = (int*)(v60 + 1);
                  }
                  v74 = *v73;
                  v75 = *((unsigned __int16*)v73 + 2);
                  if (v74 == -374831643 && v75 == 43139) {
                    v77 = *(__int64**)(v61 + 8);
                    v78 = *(__int64**)(v61 + 16);
                    while (v77 != v78) {
                      v79 = *(_QWORD*)(*v77 + 96);
                      if (v79 == 0 ||
                          (unsigned int)*(unsigned __int8*)(v79 + 32) - 3 >=
                              2) {
                        game_gmap_13402f0_alt1(*v77, 0, 0);
                      }
                      ++v77;
                    }
                  }
                  break;
                case 15LL:
                  if ((*(_BYTE*)v60 & 1) != 0) {
                    v62 = *(__int64**)(v60 + 16);
                  }
                  else {
                    v62 = (__int64*)(v60 + 1);
                  }
                  v63 = *v62;
                  v64 = *(__int64*)((char*)v62 + 7);
                  if (v63 == 0x85E5BABAE4BBB8E4LL &&
                      v64 == 0x96A4E5A5BBE4AC85LL) {
                    v81 = *(__int64**)(v61 + 8);
                    v80 = *(__int64**)(v61 + 16);
                    while (v81 != v80) {
                      v82 = *(_QWORD*)(*v81 + 96);
                      if ((v82 | *(_QWORD*)(*v81 + 552)) != 0 &&
                          (v82 == 0 ||
                           (unsigned int)*(unsigned __int8*)(v82 + 32) - 3 >=
                               2)) {
                        game_gmap_13402f0_alt1(*v81, 0, 0);
                      }
                      ++v81;
                    }
                  }
                  break;
                case 9LL:
                  v67 = (*(_BYTE*)v60 & 1) != 0 ? *(__int64**)(v60 + 16)
                                                : (__int64*)(v60 + 1);
                  v68 = *v67;
                  v69 = *((unsigned __int8*)v67 + 8);
                  if (v68 == 0x85E5BABAE4BBB8E4LL && v69 == 172) {
                    v71 = *(__int64**)(v61 + 8);
                    v72 = *(__int64**)(v61 + 16);
                    while (v71 != v72) {
                      if ((*(_QWORD*)(*v71 + 96) | *(_QWORD*)(*v71 + 552)) ==
                          0) {
                        game_gmap_13402f0_alt1(*v71, 0, 0);
                      }
                      ++v71;
                    }
                  }
                  break;
                default:
                  break;
                }
                v60 += 24;
              } while (v60 != v154_.v155);
            }
          }
          goto LABEL_287;
        }
        if (v28 != 12) {
          goto LABEL_287;
        }
        if ((*(_BYTE*)v154_.v154 & 1) != 0) {
          v29 = *(_QWORD*)(v154_.v154 + 16);
        }
        else {
          v29 = v154_.v154 + 1;
        }
        if (*(_QWORD*)v29 == 0x81E3BA87E594BCE6LL &&
            *(_DWORD*)(v29 + 8) == -1082006610) {
          *(_BYTE*)(v154_.v157 + 306) = 1;
          goto LABEL_287;
        }
        if (*(_QWORD*)v29 != 0x85E99B8AE5A28BE5LL ||
            *(_DWORD*)(v29 + 8) != -1363286131) {
          v32 = *(_QWORD*)v29;
          v33 = *(_DWORD*)(v29 + 8);
          v34 = v32 == 0x94E79F9CE69D88E5LL && v33 == -1834489669;
          if (v34 && v154_.v155 - v154_.v154 == 48) {
            LODWORD(v151_.v151) = std___1_stof_alt1(v154_.v154 + 24, 0);
            v35 = *(_QWORD*)(*GameData_212d718 + 16);
            if (*(_BYTE*)(v35 + 680) == 1) {
              v36 = *(_QWORD*)(v35 + 656);
              v37 = v35 + 656;
            }
            else {
              if (*(float*)(v35 + 664) <= 0x0.0p+0f &&
                  ((*(__int64 (**)(__int64, char**, __int64))(
                       *(_QWORD*)(v35 + 656) + 8LL))(v35 + 656, &v151_.v151,
                                                     v35 + 688) &
                   1) == 0) {
                goto LABEL_287;
              }
              (*(void (**)(__int64))(*(_QWORD*)(v35 + 656) + 16LL))(v35 + 656);
              v36 = *(_QWORD*)(v35 + 656);
              v37 = v35 + 656;
            }
            (*(void (**)(__int64))(v36 + 24))(v37);
            *(_QWORD*)(v35 + 664) = 0;
            *(_WORD*)(v35 + 680) = 256;
            goto LABEL_287;
          }
          goto LABEL_287;
        }
        if ((*(_BYTE*)(v154_.v154 + 48) & 1) != 0) {
          v85 = *(_QWORD*)(v154_.v154 + 64);
        }
        else {
          v85 = v154_.v154 + 49;
        }
        v151_.v152 = (char*)v85;
        v151_.v151 = (char*)game_HashString_alt2(v85);
        v86 = SpotMgr_13304c0_alt1((unsigned int*)&v151_.v151);
        if (v86 == 0) {
          goto LABEL_287;
        }
        v87 = (_DWORD*)v86;
        if ((*(_BYTE*)(v154_.v154 + 24) & 1) != 0) {
          v88 = *(_QWORD*)(v154_.v154 + 40);
        }
        else {
          v88 = v154_.v154 + 25;
        }
        v89 = game_HashString_alt2(v88);
        if (v89 == 0) {
          goto LABEL_250;
        }
        v90 = *(_QWORD*)(GameData_21c99c8 + 96);
        if (v90 == 0 || *(_QWORD*)(GameData_21c99c8 + 112) == 0) {
          goto LABEL_250;
        }
        v91 = v90 - 1;
        if ((v90 & (v90 - 1)) != 0) {
          v92 = v89;
          if (v89 >= v90) {
            v92 = v89 % v90;
          }
        }
        else {
          v92 = v91 & v89;
        }
        v99 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v92);
        if (v99 == nullptr) {
          goto LABEL_250;
        }
        v100 = (_QWORD*)*v99;
        if (v100 == nullptr) {
          goto LABEL_250;
        }
        if ((v90 & v91) == 0) {
          while (1) {
            v102 = v100[1];
            if (v102 == v89) {
              if (v100[2] == v89) {
                goto LABEL_244;
              }
            }
            else if ((v102 & v91) != v92) {
              goto LABEL_250;
            }
            v100 = (_QWORD*)*v100;
            if (v100 == nullptr) {
              goto LABEL_250;
            }
          }
        }
        while (1) {
          v101 = v100[1];
          if (v101 == v89) {
            break;
          }
          if (v101 >= v90) {
            v101 %= v90;
          }
          if (v101 != v92) {
            goto LABEL_250;
          }
        LABEL_214:
          v100 = (_QWORD*)*v100;
          if (v100 == nullptr) {
            goto LABEL_250;
          }
        }
        if (v100[2] != v89) {
          goto LABEL_214;
        }
      LABEL_244:
        v116 = v100[3];
        if (v116 != 0) {
          v117 = game_gmap_1347cc0_alt1(v87, v116);
          if (!GameRoutine_133e110_alt1(v117) ||
              (GameRoutine_1545120_alt1(*(unsigned __int8***)(v2 + 8),
                                        (unsigned __int8*)(v154_.v154 + 24)) &
               1) != 0) {
            goto LABEL_287;
          }
          v151_.v151 = (char*)GameData_1fa69a0;
          v151_.v153 = &v151_.v151;
          v118 = game_gmap_TroopMgr_CountTroop_134e600_alt1(
              (__int64)v87, (__int64)&v151_.v151);
          if (v151_.v153 == &v151_.v151) {
            v120 = 32;
          LABEL_285:
            (*(void (**)(void)) & (*v151_.v153)[v120])();
          }
          else if (v151_.v153 != nullptr) {
            v120 = 40;
            goto LABEL_285;
          }
          PSEUDO_LOW_LANE128(v119, n128_u32, v118);
          v134 = COERCE_AS(int8x16_t, *GameData_212c670);
          LANES128(v134).n128_f32[0] = -COERCE_FLOAT(*GameData_212c670);
          v135 = vbslq_s8(
              vdupq_lane_s32(
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vceqq_s32(v119, v143)).n128_u64[0]),
                  0),
              v134, *(int8x16_t*)GameData_212c670);
          *(_QWORD*)(v117 + 64) = LANES128(v135).n128_u64[0];
          v136 = *(_OWORD*)(v117 + 64);
          *((_QWORD*)&v136 + 1) = LANES128(v135).n128_u32[2];
          *(_OWORD*)(v117 + 64) = v136;
          goto LABEL_287;
        }
      LABEL_250:
        if ((*(_BYTE*)(v154_.v154 + 24) & 1) != 0) {
          v121 = *(_QWORD*)(v154_.v154 + 40);
        }
        else {
          v121 = v154_.v154 + 25;
        }
        v122 = game_HashString_alt2(v121);
        if (v122 != 0) {
          v123 = *(_QWORD*)(GameData_21c9f00 + 96);
          if (v123 != 0 && *(_QWORD*)(GameData_21c9f00 + 112) != 0) {
            v125 = v123 - 1;
            if ((v123 & (v123 - 1)) != 0) {
              v126 = v122;
              if (v122 >= v123) {
                v126 = v122 % v123;
              }
            }
            else {
              v126 = v125 & v122;
            }
            v127 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f00 + 88) + 8 * v126);
            if (v127 != nullptr) {
              v128 = (_QWORD*)*v127;
              if (v128 != nullptr) {
                if ((v123 & v125) == 0) {
                  while (1) {
                    v130 = v128[1];
                    if (v130 == v122) {
                      if (v128[2] == v122) {
                        goto LABEL_278;
                      }
                    }
                    else if ((v130 & v125) != v126) {
                      goto LABEL_287;
                    }
                    v128 = (_QWORD*)*v128;
                    if (v128 == nullptr) {
                      goto LABEL_287;
                    }
                  }
                }
                do {
                  v129 = v128[1];
                  if (v129 == v122) {
                    if (v128[2] == v122) {
                    LABEL_278:
                      v131 = v128[3];
                      if (v131 != 0) {
                        v132 = GameData_21c96e8 != 0
                                   ? game_gmap_1347b30_alt1(
                                         *(_QWORD*)(GameData_21c96e8 + 8),
                                         (__int64)v87, v131)
                                   : 0LL;
                        v133 = *(_WORD*)(v132 + 544);
                        if ((v133 & 0x40) == 0) {
                          *(_WORD*)(v132 + 544) = v133 | 0x40;
                        }
                      }
                      break;
                    }
                  }
                  else {
                    if (v129 >= v123) {
                      v129 %= v123;
                    }
                    if (v129 != v126) {
                      break;
                    }
                  }
                  v128 = (_QWORD*)*v128;
                } while (v128 != nullptr);
              }
            }
          }
        }
      LABEL_287:
        v84 = 1;
      LABEL_288:
        v137 = *(_QWORD*)(v2 + 8);
        if (*(_QWORD*)(v137 + 32) == *(_QWORD*)(v137 + 24)) {
          ++*(_DWORD*)(v137 + 48);
          v11 = v154_.v154;
          if (v154_.v154 == 0) {
            continue;
          }
        }
        else {
          ++*(_DWORD*)(v137 + 52);
          v11 = v154_.v154;
          if (v154_.v154 == 0) {
            continue;
          }
        }
        v138 = v154_.v155;
        if (v11 == v154_.v155) {
          goto LABEL_17;
        }
        v139 = v154_.v155;
        do {
          v140 = *(_BYTE*)(v139 - 24);
          v139 -= 24;
          if ((v140 & 1) != 0) {
            v141 = *(_QWORD*)(v138 - 8);
            if (v141 != 0) {
              if (*(_QWORD*)(*v10 + 200) != 0) {
                v142 = 128;
              }
              else {
                v142 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v10 + v142, v141);
            }
          }
          v138 = v139;
        } while (v139 != v11);
        v154_.v155 = v11;
        v11 = v154_.v154;
        if (v154_.v154 != 0) {
        LABEL_17:
          if (*(_QWORD*)(*v10 + 200) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v10 + v12, v11);
        }
      } while ((v84 & 1) != 0);
    }
  }
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

unsigned __int64 ProcGmapSeq_881560(unsigned __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  int v12;
  __int64 v13;
  unsigned __int64 result;
  float32x4_t* v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  unsigned int* v20;
  struct {
    __int64 v21;
    void* v22;
  } v21_;

  v2 = a1;
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0 &&
      (*(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 128LL) & 1) == 0 &&
      (*(_BYTE*)(a1 + 306) & 1) == 0) {
    v3 = GameData_21c9728;
    v4 = *(_QWORD*)(GameData_21c9728 + 80);
    v5 = *(_QWORD*)(GameData_21c9728 + 88);
    if (v4 == v5) {
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_14;
      }
    }
    else {
      do {
        a1 = *(_QWORD*)(**(_QWORD**)(v4 + 16) + 328LL);
        if (a1 != 0 && *(_BYTE*)a1 != 0) {
          v21_.v22 = *(void**)(**(_QWORD**)(v4 + 16) + 328LL);
          v21_.v21 = game_HashString_alt2(a1);
          a1 = game_VariableManager_SetFlag_alt1((__int64)&v21_.v21, 1);
        }
        v4 += 24;
      } while (v4 != v5);
      *(_QWORD*)(v3 + 88) = *(_QWORD*)(v3 + 80);
      v6 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_14;
      }
    }
    if ((*(_BYTE*)(v6 + 92) & 2) == 0) {
    LABEL_14:
      game_gmap_1347e20();
      TroopMgr_13487a0_alt1();
    }
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    if ((*(_BYTE*)(GameData_22416c0 + 55) & 1) == 0) {
      SpotMgr_13370c0_alt1();
      v21_.v22 = &GameData_1aa9eec;
      a1 = game_HashString_alt2((__int64)&GameData_1aa9eec);
      v7 = game_GameModeData_instance_;
      v21_.v21 = a1;
      if (game_GameModeData_instance_ != 0) {
        a1 = game_GameVariableTable_Find_alt1(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v21_.v21);
        if (a1 != 0) {
          v7 = *(_DWORD*)(a1 + 32);
        }
        else {
          v7 = 0;
        }
      }
      *(_DWORD*)(GameData_22416c0 + 48) = v7;
    }
    ProcGmapSeq_887600_alt1((__int64 (***)(void))a1, a2);
  }
  v8 = *(_QWORD*)(GameData_21f1658 + 16);
  game_map_100c050(*(_QWORD*)(v8 + 48));
  *(_BYTE*)(v8 + 175) = 1;
  MiasmaManager_14a9960_alt1(*(_QWORD*)(GameData_22416b0 + 8));
  TroopMgr_134fb00();
  SpotMgr_1336ec0_alt1();
  v9 = *(_QWORD*)(GameData_21c9700 + 8);
  v10 = *(__int64**)(v9 + 48);
  v11 = *(__int64**)(v9 + 56);
  if (v10 != v11) {
    v12 = 0;
    do {
      v13 = *v10++;
      v12 |= Impl_132a090_alt1(v13);
    } while (v10 != v11);
    if ((v12 & 1) != 0) {
      GameRoutine_17bcf90_alt2();
    }
  }
  GmapSituation_14db160();
  BladeResonance_14b7200_alt1(*(_QWORD*)(GameData_21f1620 + 8));
  result = GameRoutine_14ccc60_alt1(v2);
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      *(_DWORD*)(game_GameModeData_instance_ + 64) == 6) {
    v21_.v22 = &GameData_1aed80c;
    result = game_HashString_alt2((__int64)&GameData_1aed80c);
    v21_.v21 = result;
    if (game_GameModeData_instance_ != 0) {
      result = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v21_.v21);
      if (result != 0 && *(_DWORD*)(result + 32) != 0) {
        v15 = (float32x4_t*)game_gmap_SpotMgr_GetCurrentSpot_alt2();
        if (v15 != nullptr) {
          GameRoutine_1317f10_alt1(*(float32x4_t**)(GameData_21f1658 + 16),
                                   v15 + 2);
        }
        Camera_1314ec0(*(_QWORD*)(*GameData_212d718 + 16),
                       (__int128*)(*(_QWORD*)(GameData_21f1658 + 16) + 80LL),
                       0);
        game_VariableManager_SetFlag_alt1((__int64)&v21_.v21, 0);
        if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
          v16 = *(_QWORD*)(GameData_21c96e8 + 8);
          v17 = *(__int64**)(v16 + 8);
          v18 = *(__int64**)(v16 + 16);
          while (v17 != v18) {
            v19 = *v17;
            if ((*(_QWORD*)(*v17 + 96) | *(_QWORD*)(*v17 + 552)) == 0 &&
                *(_DWORD*)(v19 + 84) == -1) {
              goto LABEL_46;
            }
            ++v17;
          }
        }
        v19 = 0;
      LABEL_46:
        v20 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
        game_gmap_133f780(v19, v20, 1);
        return TroopMgr_134d2e0(*(_QWORD*)(GameData_21c96e8 + 8));
      }
    }
  }
  return result;
}

void ProcGmapSeq_8818a0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  struct {
    __int64 v13;
    void* v14;
  } v13_;

  if ((GmapSituation_14db030_alt1() & 1) != 0) {
    v13_.v14 = &GameData_1a9e43e;
    v13_.v13 = game_HashString_alt2((__int64)&GameData_1a9e43e);
    if (game_GameModeData_instance_ == 0 ||
        (v2 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v13_.v13)) == 0 ||
        *(_DWORD*)(v2 + 32) == 0) {
      GameRoutine_152c1d0_alt1(a1);
    }
    return;
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
    v10 = *(unsigned __int8*)(GameData_22416c0 + 53);
    goto LABEL_17;
  }
  v4 = GameData_2130e70;
  v5 = *GameData_2130e70;
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    v10 = *(unsigned __int8*)(v5 + 53);
    goto LABEL_20;
  }
  v6 = *(unsigned __int8*)(v5 + 56);
  v13_.v14 = &GameData_1adfa87;
  v7 = game_HashString_alt2((__int64)&GameData_1adfa87);
  v8 = game_GameModeData_instance_;
  v13_.v13 = v7;
  if (game_GameModeData_instance_ != 0) {
    v9 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v13_.v13);
    if (v9 == 0) {
      if (v6 != 0) {
        goto LABEL_23;
      }
      goto LABEL_14;
    }
    v8 = *(_DWORD*)(v9 + 32) != 0;
  }
  if (v6 == v8) {
  LABEL_14:
    v5 = *v4;
    v3 = game_GameModeData_instance_;
    v10 = *(unsigned __int8*)(*v4 + 53);
    if (game_GameModeData_instance_ == 0) {
    LABEL_17:
      if (v10 == 0) {
        v11 = 0;
        goto LABEL_22;
      }
      goto LABEL_23;
    }
  LABEL_20:
    if (v10 == *(unsigned __int8*)(v3 + 15)) {
      v11 = *(_DWORD*)(v3 + 64);
    LABEL_22:
      if (*(_DWORD*)(v5 + 44) == v11) {
        return;
      }
    }
  }
LABEL_23:
  v13_.v14 = &GameData_1ae1f1c;
  v12 = game_HashString_alt2((__int64)&GameData_1ae1f1c);
  v13_.v13 = v12;
  if (game_GameModeData_instance_ == 0 ||
      (v12 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v13_.v13)) == 0 ||
      *(_DWORD*)(v12 + 32) == 0) {
    TroopMgr_134ebe0_alt1(v12);
  }
}

__int64 game_gmap_ProcGmapSeq_OpenEventBranch(__int64 a1)
{
  __int64 result;
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64* v12;
  int v13;
  char v14;
  struct {
    __int64 (**v15)();
    void* v16;
    char* v17;
    char gap40_[8];
    unsigned __int64* v18;
  } v15_;

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
  result = MiasmaManager_14a91c0_alt1(*(_QWORD*)(GameData_22416b0 + 8));
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  if (**(_QWORD**)(GameData_21c96f8 + 16) != 0) {
    v4 = 11;
    goto LABEL_9;
  }
  result = SpotMgr_1335920_alt1();
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  v15_.v16 = &GameData_1ab7dd7;
  v15_.v15 =
      (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1ab7dd7);
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v15_.v15);
    if (v6 != 0 && *(_DWORD*)(v6 + 32) != 0 &&
        game_GameModeData_instance_ != 0) {
      v7 = *(_QWORD*)(game_GameModeData_instance_ + 24);
      if (v7 != 0) {
        result = GameRoutine_1377920_alt1(a1, v7);
        v4 = 2;
        goto LABEL_9;
      }
    }
  }
  if (*(_BYTE*)(a1 + 308) == 1) {
    GameRoutine_887920_alt1(&v15_.v15, (__int64)&GameData_1ae1f43);
    result = GameHr_162aea0(a1, &v15_.v15);
    if (result != 0) {
    LABEL_6:
      v4 = 2;
    LABEL_9:
      *(_DWORD*)(a1 + 152) = v4;
      return result;
    }
  }
  v15_.v18 = nullptr;
  v8 = ConvergeImpl_104f0e0(a1, (__int64)&v15_.v15);
  result = (__int64)v15_.v18;
  if (v15_.v18 == (unsigned __int64*)&v15_.v15) {
    v9 = 32;
  }
  else {
    if (v15_.v18 == nullptr) {
      goto LABEL_35;
    }
    v9 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v15_.v18 + v9))((__int64)v15_.v18);
LABEL_35:
  if (v8) {
    goto LABEL_6;
  }
  if (game_gmap_GmapClock_instance_ != 0 &&
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
          0) {
    result = GameRoutine_9d5430_alt1(a1);
    if ((result & 1) != 0) {
      goto LABEL_6;
    }
  }
  result = game_gmap_887a40(a1);
  if ((result & 1) != 0) {
    goto LABEL_6;
  }
  result = GmapSituation_14dbd80_alt1();
  if ((result & 1) != 0) {
    v4 = 4;
    goto LABEL_9;
  }
  v14 = 0;
  v15_.v15 = GameData_1fa6ad8;
  v15_.v16 = (void*)a1;
  v15_.v18 = (unsigned __int64*)&v15_.v15;
  v15_.v17 = &v14;
  TroopMgr_134b560_alt1(*(_QWORD*)(GameData_21c96e8 + 8), (__int64)&v15_.v15);
  result = (__int64)v15_.v18;
  if (v15_.v18 == (unsigned __int64*)&v15_.v15) {
    v10 = 32;
  }
  else {
    if (v15_.v18 == nullptr) {
      goto LABEL_47;
    }
    v10 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v15_.v18 + v10))((__int64)v15_.v18);
LABEL_47:
  if ((v14 & 1) == 0) {
    *(_BYTE*)(a1 + 305) = 0;
    *(_BYTE*)(*(_QWORD*)(*GameData_212d700[0] + 8) + 56LL) = 1;
    v11 = GmapSituation_14dbe20_alt1();
    v12 = GameData_212d728[0];
    if ((v11 & 1) != 0) {
      v13 = 2;
    }
    else {
      v13 = 0;
    }
    GameRoutine_17bcef0_alt1(
        *(_DWORD*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5856LL) & 0xFFFFFFFD |
        v13);
    game_19a0e60(*(_QWORD*)(*v12 + 8) + 32LL);
    GameRoutine_17bcf90_alt2();
    GameRoutine_175bde0_alt1(*(_QWORD*)(*v12 + 8) + 5800LL);
    GameRoutine_175b880_alt1(*(_QWORD*)(*v12 + 8) + 5800LL);
    result = GameRoutine_17bce50_alt1(1u);
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

void ProcGmapSeq_882900(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  char* v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  _BYTE* v24;
  char v25;
  __int64 v26;
  __int64 v27;

  TroopMgr_13486a0_alt1();
  TroopMgr_1348ec0_alt1();
  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(__int64**)(v2 + 8);
  v4 = *(__int64**)(v2 + 16);
  if (v3 != v4) {
    v27 = a1;
    v5 = 0;
    v6 = nullptr;
    v7 = 0;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v9 = *v3;
      if ((*(_WORD*)(*v3 + 544) & 0x40) != 0) {
        if ((unsigned __int64)v6 < v7) {
          *(_QWORD*)v6 = v9;
          v6 += 8;
        }
        else {
          v10 = &v6[-v5];
          v11 = (__int64)&v6[-v5] >> 3;
          v12 = v11 + 1;
          if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
            goto LABEL_38;
          }
          if ((__int64)(v7 - v5) >> 2 > v12) {
            v12 = (__int64)(v7 - v5) >> 2;
          }
          if (v7 - v5 >= 0x7FFFFFFFFFFFFFF8LL) {
            v13 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v13 = v12;
          }
          if (v13 != 0) {
            if (v13 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v14 = fw_memory_HeapManager_Allocate_alt1(*v8, 8 * v13, 16, 0);
          }
          else {
            v14 = 0;
          }
          v7 = v14 + 8 * v13;
          v15 = (unsigned __int64)&v6[-v5];
          v16 = (__int64)&v10[v14 + -8 * v11];
          *(_QWORD*)&v10[v14] = v9;
          v6 = &v10[v14 + 8];
          memcpy_alt1(v16, v5, v15);
          if (v5 != 0) {
            v17 = 128;
            if (*(_QWORD*)(*v8 + 200) == 0) {
              v17 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v8 + v17, v5);
          }
          v5 = v16;
        }
      }
      ++v3;
    } while (v3 != v4);
    v18 = (unsigned __int64)&v6[-v5];
    if (v6 != (char*)v5) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f1610,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)&GameData_21f1610) != 0) {
        GameData_21f1550 = 13;
        GameData_21f1590 = 13;
        GameData_21f1558 = 0;
        GameData_21f1560 = (__int64)game_gmap_888560;
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
        __cxa_guard_release_alt1((__int64)&GameData_21f1610);
      }
      v19 = fw_memory_HeapManager_Allocate_alt1(*v8, 176, 16, 0);
      v20 = GameData_212c608[0];
      *(_QWORD*)(v19 + 88) = 0;
      *(_QWORD*)(v19 + 96) = 0;
      *(_QWORD*)(v19 + 104) = 0;
      *(_QWORD*)(v19 + 112) = 0;
      *(_QWORD*)(v19 + 120) = 0;
      *(_QWORD*)(v19 + 128) = 0;
      *(_WORD*)(v19 + 136) = 0;
      *(_QWORD*)(v19 + 16) = 0;
      *(_QWORD*)(v19 + 24) = "NULL";
      *(_QWORD*)(v19 + 32) = 0;
      *(_QWORD*)(v19 + 138) = 0;
      *(_QWORD*)(v19 + 144) = 0;
      *(_QWORD*)(v19 + 40) = 0;
      *(_QWORD*)(v19 + 48) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_QWORD*)(v19 + 80) = 0;
      *(_QWORD*)v19 = v20 + 16;
      *(_QWORD*)(v19 + 8) = 0;
      game_ProcInst_Register_alt1(v19);
      *(_QWORD*)(v19 + 152) = 0;
      *(_QWORD*)(v19 + 160) = 0;
      *(_QWORD*)(v19 + 168) = 0;
      *(_QWORD*)v19 = game_gmap_anonymous_ProcGmapEscapeTroopSeq_vtable;
      if ((v18 & 0x8000000000000000LL) != 0) {
      LABEL_38:
        GameRoutine_888610_alt1();
      }
      v21 = fw_memory_HeapManager_Allocate_alt1(*v8, (__int64)&v6[-v5], 16, 0);
      v22 = (char*)(v21 + v18);
      *(_QWORD*)(v19 + 152) = v21;
      *(_QWORD*)(v19 + 160) = v21;
      *(_QWORD*)(v19 + 168) = v21 + v18;
      memcpy_alt1(v21, v5, (unsigned __int64)&v6[-v5]);
      *(_QWORD*)(v19 + 160) = v22;
      v23 = *(_QWORD*)(v27 + 40);
      if (v23 != 0) {
        *(_QWORD*)(v23 + 48) = v19;
        *(_QWORD*)(v19 + 56) = *(_QWORD*)(v27 + 40);
      }
      *(_QWORD*)(v27 + 40) = v19;
      *(_QWORD*)(v19 + 24) = "ProcGmapEscapeTroopSeq";
      *(_QWORD*)(v19 + 32) = v27;
      *(_DWORD*)(v19 + 140) =
          (unsigned int)game_HashString32_alt2("ProcGmapEscapeTroopSeq");
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 24;
      *(_QWORD*)(v19 + 80) = 1;
      *(_QWORD*)(v19 + 8) = &GameData_21f1550;
      *(_QWORD*)(v19 + 16) = &GameData_21f1550;
      (*(void (**)(__int64))(*(_QWORD*)v19 + 32LL))(v19);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v19 + 136LL))(v19) & 1) != 0 &&
          (*(_WORD*)(v19 + 136) & 0x100) == 0) {
        *(_WORD*)(v19 + 136) |= 0x100u;
      }
      v24 = *(_BYTE**)(v19 + 32);
      v25 = v24[138];
      if (v25 == 0) {
        (*(void (**)(_BYTE*))(*(_QWORD*)v24 + 64LL))(v24);
        v25 = v24[138];
      }
      v24[138] = v25 + 1;
      *(_WORD*)(v19 + 136) |= 2u;
    }
    if (v5 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*v8 + 200) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v8 + v26, v5);
    }
  }
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

__int64 ProcGmapSeq_883220(__int64 a1)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int* v7;
  int* v8;

  v1 = *(_QWORD**)(GameData_21f1660 + 8);
  v3 = v1[3];
  v2 = v1[4];
  v5 = *v1;
  v4 = v1[1];
  if (v2 != v3 || v4 != v5) {
    v7 = (int*)(v1 + 6);
    v8 = (int*)v1 + 13;
    if (v2 == v3) {
      v2 = v4;
      v3 = v5;
      v8 = v7;
    }
    if (0xAAAAAAAAAAAAAAABLL * ((v2 - v3) >> 3) > *v8) {
      return GameRoutine_15255d0_alt1(a1);
    }
  }
  return a1;
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

void ProcGmapSeq_883540(__int64 a1)
{
  unsigned int* v2;
  __int64 (*v3)();
  __int64 v4;
  __int64 v5;
  unsigned __int8* v6;
  bool v7;
  int v8;
  __int64 v9;
  struct {
    __int64 (*v10)();
    __int64 (*v11)();
  } v10_;

  v2 = TroopMgr_134c680();
  GameRoutine_134b980((void*)(&v10_.v10), (__int64 (*)())v2);
  if (v10_.v10 == v10_.v11) {
    v8 = 1;
    if (v10_.v10 == nullptr) {
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  v3 = (__int64 (*)())((char*)v10_.v10 + 8);
  while (1) {
    v4 = *((_QWORD*)v3 - 1);
    v5 = *(_QWORD*)(v4 + 96);
    if (v5 != 0 && *(_BYTE*)(v5 + 129) != 0) {
      break;
    }
    if (game_GameModeData_instance_ != 0 &&
            *(_DWORD*)(game_GameModeData_instance_ + 60) == 1 ||
        (*(_WORD*)(v4 + 544) & 0x100) != 0) {
      break;
    }
    v6 = *(unsigned __int8**)(v4 + 88);
    if (v6 != nullptr) {
      v6 = *((unsigned __int8**)v6 + 6);
      if (v6 != nullptr) {
        LODWORD(v6) = *v6 != 0;
      }
    }
    if (((unsigned __int8)v6 & 1) == 0) {
      v7 = v3 == v10_.v11;
      v3 = (__int64 (*)())((char*)v3 + 8);
      if (!v7) {
        continue;
      }
    }
    goto LABEL_16;
  }
  LODWORD(v6) = 1;
LABEL_16:
  v8 = (unsigned int)v6 ^ 1;
  if (v10_.v10 != nullptr) {
  LABEL_17:
    v10_.v11 = v10_.v10;
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, (__int64)v10_.v10);
  }
LABEL_20:
  if (v8 != 0 &&
      (*(_BYTE*)(*(_QWORD*)(GameData_21c96f8 + 16) + 129LL) & 1) == 0) {
    *(_DWORD*)(a1 + 152) = 8;
  }
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
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
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
  unsigned int* v40;
  __int64 (**v41)();
  __int64* v42;
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
  __int64 v64;
  struct {
    __int64 (**v65)();
    __int64 (**v66)();
    char gap32_[16];
    __int64* v67;
  } v65_;

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
    v65_.v66 = (__int64 (**)(void))&GameData_1ade186;
    v65_.v65 =
        (__int64 (**)(void))game_HashString_alt2((__int64)&GameData_1ade186);
    if (game_GameModeData_instance_ == 0 ||
        (v12 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v65_.v65)) == 0 ||
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
      v33 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      *v33 = v31;
      GameRoutine_888970_alt2((__int64*)(v24 + 24), (__int64)v33,
                              (__int64)(v33 + 1), 1u);
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v32 + v34, (__int64)v33);
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
          GameHr_995200(v24 + 112);
        }
      }
    LABEL_94:
      v55 = *(_QWORD*)(*v2 + 8);
      v65_.v67 = (__int64*)&v65_.v65;
      v65_.v65 = GameData_202ca88;
      TroopMgr_13460a0_alt1((__int64)&v65_.v65);
      result = (__int64)v65_.v67;
      if (v65_.v67 == (__int64*)&v65_.v65) {
        v56 = 32;
      }
      else {
        if (v65_.v67 == nullptr) {
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
        v56 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v65_.v67 + v56))((__int64)v65_.v67);
      goto LABEL_99;
    }
    v13 = *(_QWORD*)(*v2 + 8);
    v14 = *(_DWORD*)(v13 + 56);
    v15 = *(__int64**)(v13 + 8);
    v16 = *(__int64**)(v13 + 16);
    if (v14 < 0) {
      for (; v15 != v16; ++v15) {
        v17 = *v15;
        if (*(_QWORD*)(*v15 + 96) == 0 && *(_QWORD*)(v17 + 552) == 0) {
          goto LABEL_60;
        }
      }
    }
    else if (v15 != v16) {
      while (1) {
        v18 = *v15++;
        v17 = v18;
        if (*(_DWORD*)(v18 + 84) == v14) {
          break;
        }
        if (v15 == v16) {
          goto LABEL_56;
        }
      }
    LABEL_60:
      v40 = *(unsigned int**)v17;
      goto LABEL_61;
    }
  LABEL_56:
    v40 = game_gmap_SpotMgr_GetCurrentSpot_alt2();
  LABEL_61:
    TroopMgr_134bbe0((void*)((__int64*)&v65_.v65), (__int64)v40);
    v41 = v65_.v66;
    v64 = (__int64)v65_.v65;
    if (v65_.v65 != v65_.v66) {
      v42 = (__int64*)fw_memory_g_heap_manager_ptr;
      for (j = v65_.v65; j != v41; ++j) {
        v44 = *j;
        v45 = *((_QWORD*)*j + 1);
        v46 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v42, 8, 16, 0);
        *v46 = v45;
        GameRoutine_888970_alt2((__int64*)v44 + 3, (__int64)v46,
                                (__int64)(v46 + 1), 1u);
        if (*(_QWORD*)(*v42 + 200) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v42 + v47, (__int64)v46);
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
            v48 = *((__int64 (**)(void))v44 + 3);
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
              GameHr_995200((__int64)v44 + 112);
            }
          }
        }
        else if (*((_BYTE*)v44 + 512) != 2) {
          goto LABEL_87;
        }
      }
    }
    if (v64 != 0) {
      v54 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v54 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v54, v64);
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
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;

  v1 = GameData_21c96f8;
  v2 = *(_QWORD*)(GameData_21c96f8 + 16);
  if (*(_BYTE*)(v2 + 128) == 1) {
    if (GameData_21c9600 != 0) {
      *(_DWORD*)(GameData_21c9600 + 152) = 5;
      v2 = *(_QWORD*)(v1 + 16);
    }
    v3 = *(_DWORD*)(v2 + 124);
    v11 = v3;
    v4 = *(_QWORD*)(GameData_21c96e8 + 8);
    *(_DWORD*)(v4 + 56) = v3;
    if ((v3 & 0x80000000) != 0) {
      *(_BYTE*)(*(_QWORD*)(*GameData_212d728[0] + 8) + 5844LL) = 0;
    }
    else {
      v5 = result;
      v6 = *(_QWORD*)(v4 + 40);
      v7 = wmemchr_alt1(*(_QWORD*)(v4 + 32), v3,
                        (v6 - *(_QWORD*)(v4 + 32)) >> 2);
      v8 = *(_QWORD*)(v4 + 32);
      v9 = *(_QWORD*)(v4 + 40);
      if (v7 != 0) {
        v6 = v7;
      }
      if (v6 != v9) {
        v10 = v9 - (v6 + 4);
        if (v9 != v6 + 4) {
          memmove_alt1(v6, v6 + 4, v9 - (v6 + 4));
          v8 = *(_QWORD*)(v4 + 32);
        }
        *(_QWORD*)(v4 + 40) = v6 + v10;
      }
      TroopMgr_1353fb0_alt1((__int64*)(v4 + 32), v8, (char*)&v11);
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

void ProcGmapSeq_885880(__int64 a1)
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
  __int64 v23;
  unsigned __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  struct {
    __int64 v38;
    __int64 v39;
    __int64 v40;
  } v38_;

  v1 = GameData_21f1660;
  v2 = *(_QWORD**)(GameData_21f1660 + 8);
  v4 = v2[3];
  v3 = v2[4];
  v6 = *v2;
  v5 = v2[1];
  if (v3 == v4 && v5 == v6) {
    v11 = (_BYTE*)(a1 + 307);
  LABEL_25:
    *v11 = 0;
    return;
  }
  v8 = (int*)(v2 + 6);
  v9 = (int*)v2 + 13;
  if (v3 == v4) {
    v3 = v5;
    v4 = v6;
    v9 = v8;
  }
  v10 = 0xAAAAAAAAAAAAAAABLL * ((v3 - v4) >> 3);
  v11 = (_BYTE*)(a1 + 307);
  if (v10 <= *v9) {
    goto LABEL_25;
  }
  v38_.v39 = 0;
  v38_.v40 = 0;
  v38_.v38 = 0;
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
    v23 = *((_QWORD*)v21 + 2);
  }
  else {
    v23 = (__int64)(v21 + 1);
  }
  if ((v22 & 1) != 0) {
    v24 = *((_QWORD*)v21 + 1);
  }
  else {
    v24 = v22 >> 1;
  }
  RuntimeBuffer_8924a0_alt1((__int64)&v38_.v38, v23, v24, 0x2Fu);
  if ((*(_BYTE*)v38_.v38 & 1) != 0) {
    v25 = *(_BYTE**)(v38_.v38 + 16);
  }
  else {
    v25 = (_BYTE*)(v38_.v38 + 1);
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
  LayoutAccessor_155e830_alt1(*(_QWORD*)(v27 + 16), 0);
  if (game_hub_ProgressEventView_instance_ != 0) {
    GameRoutine_17b8f40_alt1(game_hub_ProgressEventView_instance_, 1);
  }
  v28 = game_gameui_Footer_instance_;
  v29 = *(_DWORD*)(v27 + 5856) & 0xFFFEFFFF;
  *(_DWORD*)(v27 + 5856) = v29;
  if (v28 != 0) {
    LayoutAccessor_1567000_alt1(v28, 0);
    v29 = *(_DWORD*)(v27 + 5856);
  }
  *(_DWORD*)(v27 + 5856) = v29 & 0xFFFDFFFF;
  *(_DWORD*)(a1 + 152) = 4;
  *(_BYTE*)(a1 + 305) = 1;
  v30 = v38_.v38;
  if (v38_.v38 != 0) {
    v31 = v38_.v39;
    v32 = fw_memory_g_heap_manager_ptr;
    if (v38_.v38 == v38_.v39) {
      goto LABEL_43;
    }
    v33 = v38_.v39;
    do {
      v34 = *(_BYTE*)(v33 - 24);
      v33 -= 24;
      if ((v34 & 1) != 0) {
        v35 = *(_QWORD*)(v31 - 8);
        if (v35 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
            v36 = 128;
          }
          else {
            v36 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v32 + v36, v35);
        }
      }
      v31 = v33;
    } while (v33 != v30);
    v38_.v39 = v30;
    v30 = v38_.v38;
    if (v38_.v38 != 0) {
    LABEL_43:
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v32 + v37, v30);
    }
  }
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

void ProcGmapSeq_8866a0()
{
  __int64 v0;
  int v1;
  __int64 v2;
  _QWORD v3[25];

  if (game_GameModeData_instance_ != 0 &&
      (*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
    v2 = *(_QWORD*)(GameData_21f1648 + 8);
    GameManager_a2f660_alt1(game_sound_g_game_sound);
    *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
    *(_BYTE*)(v2 + 56) = 1;
  }
  else {
    TroopMgr_1349f40_alt1();
    snd_Fade_Fade_10cb00_alt1((__int64)v3, "FadeTime_BGM_Gmap_Out");
    v0 = game_sound_g_game_sound;
    v1 = *(_DWORD*)(game_sound_g_game_sound + 620);
    if (v1 != 0) {
      *(_DWORD*)(game_sound_g_game_sound + 620) = v1 - 1;
      GameManager_a2c820_alt2(v0, (__int64)v3, 1);
    }
    snd_Fade_Destroy_Fade_alt1(v3);
    *(_BYTE*)(*(_QWORD*)(GameData_21f1648 + 8) + 40LL) = 0;
  }
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

void ProcGmapSeq_886c80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  float v19;
  float v20;
  bool v21;
  float v22;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  __int64 v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  bool v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  if (*(_BYTE*)(a1 + 304) == 1) {
    GameRoutine_15e2a60_alt1();
    v2 = game_script_hub_g_frame_counter_ptr[0];
    if (((*(__int64 (**)(__int64))(
             *(_QWORD*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                        144LL) +
             16LL))(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL) &
         1) != 0) {
      *(_BYTE*)(*(_QWORD*)v2 + 177LL) = 0;
    }
    v3 = *(__int64***)(*GameData_2130e60 + 8);
    v4 = *v3;
    v5 = v3[1];
    if (*v3 != v5) {
      do {
        v6 = *v4++;
        GameHr_14a1390((__int64*)(v6 + 16), 1);
        GameHr_14a1390((__int64*)(v6 + 32), 1);
      } while (v4 != v5);
    }
    v8 = v3[6];
    v7 = v3[7];
    while (v8 != v7) {
      v9 = *v8++;
      GameHr_14a1520((__int64*)(v9 + 8), 1);
    }
    v10 = GameData_212c790;
    v11 = *(_QWORD*)(*GameData_212c790 + 8);
    v12 = *(__int64**)(v11 + 8);
    v13 = *(__int64**)(v11 + 16);
    while (v12 != v13) {
      v14 = *v12++;
      Troop_1342b80(v14);
    }
    BladeResonance_14b7400(*(_QWORD*)(*(_QWORD*)GameData_212d748[0] + 8LL));
    v15 = GameData_212d718;
    if (game_GameModeData_instance_ != 0) {
      v16 = *GameData_212d718;
      if ((*(_BYTE*)(game_GameModeData_instance_ + 92) & 2) != 0) {
        *(_BYTE*)(*(_QWORD*)(v16 + 16) + 965LL) = 0;
      }
    }
    else {
      v16 = *GameData_212d718;
    }
    v17 = (__int64*)GameData_212c7a0[0];
    v18 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
    v19 = (*(float (**)(__int64))(*(_QWORD*)(*(_QWORD*)(v16 + 16) + 656LL) +
                                  16LL))(*(_QWORD*)(v16 + 16) + 656LL);
    v20 = 0x1.0000000000000p+0f;
    if (v19 <= 0x1.0000000000000p+0f) {
      v20 = v19;
    }
    v21 = v19 < 0x0.0p+0f;
    v22 = 0x0.0p+0f;
    if (!v21) {
      v22 = v20;
    }
    *(float*)(v18 + 120) = v22;
    SpotMgr_1337000();
    v25 = *(_QWORD*)(*v10 + 8);
    v26 = *(__int64**)(v25 + 8);
    v27 = *(__int64**)(v25 + 16);
    while (v26 != v27) {
      v28 = *v26++;
      game_gmap_13402f0_alt1(v28, 0, 1);
    }
    TroopMgr_134a720_alt1();
    GameRoutine_1553220_alt1(11);
    v29 = GameData_212d730;
    (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212d730 + 24LL))(
        *GameData_212d730);
    if (*v29 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v29 + 8LL))(*v29);
    }
    *v29 = 0;
    v30 = GameData_212d728[0];
    v31 = *GameData_212d728[0];
    if (*GameData_212d728[0] != 0) {
      GmapUI_Destructor(*(_QWORD**)GameData_212d728[0]);
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
    }
    v33 = *v15;
    *v30 = 0;
    (*(void (**)(__int64))(*(_QWORD*)v33 + 24LL))(v33);
    if (*v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v15 + 8LL))(*v15);
    }
    *v15 = 0;
    v34 = GameData_212d708;
    (*(void (**)(_QWORD))(*(_QWORD*)*GameData_212d708 + 24LL))(
        *GameData_212d708);
    if (*v34 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v34 + 8LL))(*v34);
    }
    *v34 = 0;
    v35 = GameData_212d700[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d700[0] + 24LL))(
        *GameData_212d700[0]);
    if (*v35 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v35 + 8LL))(*v35);
    }
    *v35 = 0;
    v36 = GameData_212d6f8[0];
    (*(void (**)(_QWORD))(**(_QWORD**)GameData_212d6f8[0] + 24LL))(
        *GameData_212d6f8[0]);
    if (*v36 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v36 + 8LL))(*v36);
    }
    v37 = *v17;
    *v36 = 0;
    v38 = *(_QWORD*)(v37 + 16);
    *(_QWORD*)v38 = 0;
    *(_BYTE*)(v38 + 128) = 0;
    *(_DWORD*)(v38 + 124) = -1;
    v39 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v41 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v40 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v43 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v42 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v44 = v42 == v43;
      v45 = v40 - 1 + v41;
      v46 = v45 >> 7;
      v47 = v45 & 0x7F;
      v48 = 16 * (v42 - v43) - 1;
      v49 = *(_QWORD*)(v43 + 8 * v46);
      if (v44) {
        v48 = 0;
      }
      v50 = v49 + 32 * v47;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v50 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v39[21] = *(_QWORD*)(v50 + 24);
      v51 = *(_QWORD*)(v50 + 16);
      v39[27] = v40 - 1;
      v39[20] = v51;
      if ((unsigned __int64)(v48 - (v40 + v41) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v52 = *(_QWORD*)(v42 - 8);
        if (v52 != 0) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
          v42 = v39[24];
        }
        v39[24] = v42 - 8;
      }
    }
    *(_BYTE*)(a1 + 304) = 0;
  }
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

void game_gmap_ProcGmapSeq_OpenEventBranch_closure_Invoke(__int64 a1,
                                                          __int64** a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  int v7;
  _BOOL4 v8;
  bool v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64* v13;
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
  } v20_;

  if ((**(_BYTE**)(a1 + 16) & 1) != 0) {
    return;
  }
  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v5 = **a2;
  v20_.v21 = 0;
  v20_.v22 = 0;
  v20_.v20 = 0;
  GameSubquestData_125a1a0_alt1(*(_QWORD*)GameData_212c7b0[0], &v20_.v20, v5,
                                0);
  if (v20_.v20 == v20_.v21) {
    v8 = false;
    if (v20_.v20 != 0) {
    LABEL_10:
      v20_.v21 = v20_.v20;
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v20_.v20);
    }
  }
  else {
    v6 = v20_.v20 + 8;
    do {
      v7 = *(unsigned __int8*)(**(_QWORD**)(v6 - 8) + 112LL);
      v8 = v7 == 4;
      v9 = v7 == 4 || v6 == v20_.v21;
      v6 += 8;
    } while (!v9);
    if (v20_.v20 != 0) {
      goto LABEL_10;
    }
  }
  if (v8) {
    **(_BYTE**)(a1 + 16) = 1;
    *(_DWORD*)(v3 + 152) = 14;
    v11 = *((_DWORD*)v2 + 21);
    if ((v11 & 0x80000000) == 0) {
      LODWORD(v20_.v20) = *((_DWORD*)v2 + 21);
      v12 = *(_QWORD*)(GameData_21c96e8 + 8);
      v14 = *(_QWORD*)(v12 + 32);
      v13 = (__int64*)(v12 + 32);
      v15 = *(_QWORD*)(v12 + 40);
      *(_DWORD*)(v12 + 56) = v11;
      v16 = wmemchr_alt1(v14, v11, (v15 - v14) >> 2);
      v17 = *(_QWORD*)(v12 + 40);
      v18 = *(_QWORD*)(v12 + 32);
      if (v16 != 0) {
        v15 = v16;
      }
      if (v15 != v17) {
        v19 = v17 - (v15 + 4);
        if (v17 != v15 + 4) {
          memmove_alt1(v15, v15 + 4, v17 - (v15 + 4));
          v18 = *v13;
        }
        *(_QWORD*)(v12 + 40) = v15 + v19;
      }
      TroopMgr_1353fb0_alt1(v13, v18, (char*)&v20_.v20);
    }
  }
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
