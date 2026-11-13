#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_d5e9a0(_QWORD* result, _QWORD*, _QWORD*);
_QWORD* Manager_66cc20(__int64*, _QWORD*);
__attribute__((swiftcall)) void ChapterVariableFile_fcfea0(PSEUDO_X8, _QWORD,
                                                           _QWORD, _QWORD,
                                                           _QWORD, _QWORD);
__attribute__((swiftcall)) void Character_cafca0(PSEUDO_X8, _QWORD,
                                                 long double);
__attribute__((swiftcall)) void CmdBtlUnit_e7dd50(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void CmdBtlUnit_e7de70(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void DungeonController_f5f960(PSEUDO_X8);
__attribute__((swiftcall)) void GameRoutine_1085a10(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_14a4be0(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_6222e0(PSEUDO_X8, float32x4_t*,
                                                   float32x4_t*, int8x16_t*);
__attribute__((swiftcall)) void GameRoutine_622ac0(PSEUDO_X8, float32x2_t*);
__attribute__((swiftcall)) void GameRoutine_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
    GameRoutine_624bc0_alt1(PSEUDO_X8, _QWORD) __asm__("GameRoutine_624bc0");
__attribute__((swiftcall)) void GameRoutine_fb48a0(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_ff57a0(PSEUDO_X8, __int64,
                                                   unsigned __int8*);
__attribute__((swiftcall)) void HubDisposFileReader_c98880(PSEUDO_X8, _QWORD*);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void TransporterConst_89b3d0(PSEUDO_X8, _QWORD,
                                                        _QWORD, _QWORD);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void collision_672120(PSEUDO_X8, _QWORD, _QWORD,
                                                 float);
__attribute__((swiftcall)) void game_dc0960(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
game_fbce70_alt1(PSEUDO_X8, unsigned __int64 result,
                 unsigned int) __asm__("game_fbce70");
__attribute__((swiftcall)) void game_hub_cdf140(PSEUDO_X8, __int64, __int64,
                                                char);
__attribute__((swiftcall)) void game_hub_cdf420(PSEUDO_X8, __int64, __int64,
                                                float, float, float);
__attribute__((swiftcall)) void
game_zview_d163f0(PSEUDO_X8, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float);
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void math_Quat_FromYawPitchRoll(PSEUDO_X8, float,
                                                           float, float);
__int64** GameRoutine_14a18c0(__int64** result, long double);
__int64* GameRoutine_6b7aa0(__int64* result, __int64*, __int64*,
                            unsigned __int64);
__int64* GameRoutine_e07e20(unsigned __int8*);
__int64* GameRoutine_ff7280(__int64**, unsigned __int8*, __int64**);
__int64* Manager_bc6460(float*, float32x4_t*, char);
__int64* Manager_bc6460_alt1(_QWORD*, float32x4_t*,
                             char) __asm__("Manager_bc6460");
__int64* ProcHubSeqObeliskCleared_fba300(__int64* result, int);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64 BanquetManager_96a680(_QWORD, _QWORD, _QWORD);
__int64 CmdBtlUnit_e7ada0(_QWORD);
__int64 CmdBtlUnit_e7dc80(__int64 result, __int64*);
__int64 CmdBtlUnit_e7df20(_QWORD, _QWORD, float);
__int64 CmdbtlPartyNatives_e73070(_QWORD, _QWORD);
__int64 CmdbtlPartyNatives_e9cce0(_QWORD);
__int64 GameRoutine_102abb0(__int64);
__int64 GameRoutine_10c0c60(__int64);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_1130770(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a0820(_QWORD);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a17c0(__int64*, long double);
__int64 GameRoutine_14a1b00(__int64*, float);
__int64 GameRoutine_14a1b00_alt1(_QWORD, float) __asm__("GameRoutine_14a1b00");
__int64 GameRoutine_14a3920(__int64 result);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_1a0a750(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_60a020_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a020");
__int64 GameRoutine_64df20_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_64df20");
__int64 GameRoutine_715440();
__int64 GameRoutine_7a8220(_QWORD, _QWORD);
__int64 GameRoutine_7f3400(_QWORD, _QWORD);
__int64 GameRoutine_8b03f0(_QWORD);
__int64 GameRoutine_975940(void);
__int64 GameRoutine_cdeee0(__int64 result, __int64);
__int64 GameRoutine_d1fb60(__int64, char);
__int64 GameRoutine_d23780(__int64 result, __int64, __int64, __int64, float);
__int64 GameRoutine_d5e6c0(_QWORD);
__int64 GameRoutine_d5e840(__int64 result, int*);
__int64 GameRoutine_d5e840_alt1(_QWORD, _QWORD) __asm__("GameRoutine_d5e840");
__int64 GameRoutine_d5f370(__int64 result, _QWORD*);
__int64 GameRoutine_d799f0(__int64);
__int64 GameRoutine_d8cf60(__int64 result);
__int64 GameRoutine_d8d760(__int64);
__int64 GameRoutine_d90760(__int64);
__int64 GameRoutine_dbc1e0(_QWORD, _QWORD, long double);
__int64 GameRoutine_e7bed0(_QWORD, _QWORD);
__int64 GameRoutine_e7fde0(_QWORD, _QWORD, _QWORD, _QWORD, float, double);
__int64 GameRoutine_eaec10(__int64*, __int64);
__int64 GameRoutine_eb9120(_QWORD);
__int64 GameRoutine_edec80(_QWORD, _QWORD);
__int64 GameRoutine_edef80(_QWORD, _QWORD);
__int64 GameRoutine_efb6f0(__int64, __int64, _QWORD*);
__int64 GameRoutine_efbb60(__int64, __int64*, char);
__int64 GameRoutine_efbb60_alt1(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_efbb60");
__int64 GameRoutine_f2f3e0(__int64 result);
__int64 GameRoutine_f42400(__int64, _DWORD*, _DWORD*, bool*);
__int64 GameRoutine_f5c790(void);
__int64 GameRoutine_f64a20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f8eee0(__int64);
__int64 GameRoutine_fb7e20(_QWORD, _QWORD);
__int64 GameRoutine_fbcb00(int);
__int64 GameRoutine_fbcd00(unsigned int);
__int64 GameRoutine_fc5000();
__int64 GameRoutine_fc6e40(_QWORD, _QWORD);
__int64 GameRoutine_fc6fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ff5600(__int64, __int64*, __int64);
__int64 GameRoutine_ff69e0(__int64*, _QWORD*);
__int64 GameRoutine_ff6d70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ff7060(__int64, __int64);
__int64 GameRoutine_ffd180(int, __int64);
__int64 GameSideStoryData_12b56c0(_QWORD, _QWORD);
__int64 GameVariable_82e3a0(int);
__int64 HubInitNatives_ff5d00(_QWORD);
__int64 SpineModel_64dde0_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("SpineModel_64dde0");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 collision_672de0(__int64, int*, __int64, int*, _QWORD*, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_809ba0(float);
__int64 game_809dc0(float);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GameVariableTable_Find_alt1(_QWORD*, unsigned __int64*) __asm__(
    "game_GameVariableTable_Find");
__int64 game_HashString(__int64 result);
__int64 game_HashString32(_QWORD);
__int64 game_UnitItemList_HasStockUses(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_cmdbtl_Manager_UnitRelocationImpl(_QWORD*, __int64);
__int64 game_d8e140(__int64);
__int64 game_d8ec60(__int64 result);
__int64 game_ff1940_alt1(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         _QWORD, float, double) __asm__("game_ff1940");
__int64 game_gmap_GmapSituation_CalcBanquet(void);
__int64 game_gmap_SpotMgr_GetCurrentSpot(long double);
__int64 game_hub_d97a00(__int64 result, float);
__int64 game_zview_d20430(__int64 result, _QWORD*, char);
__int64 game_zview_d20430_alt1(_QWORD, _QWORD,
                               _QWORD) __asm__("game_zview_d20430");
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__n128 GameRoutine_14a10d0_alt1(_QWORD*, __int64, __int64,
                                __int64) __asm__("GameRoutine_14a10d0");
__n128 GameRoutine_14a1520(_QWORD*, char);
__n128 GameRoutine_f2f380(__int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool CharacterSituation_f94550();
bool DungeonController_f5f760();
bool GameRoutine_f875c0(__int64, __int64, __int64*);
bool GameRoutine_f97e30(__int64, __int64, bool);
bool GameRoutine_fd71c0(__int64, __int64);
bool nn_g3d_5eb5c0(__int64, float32x4_t*);
char** GameRoutine_d5f8e0(char** result, __int64, __int64, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _DWORD* GameData_212d168;
extern _DWORD GameData_1b01468[8];
extern _UNKNOWN* GameData_1f50948;
extern _UNKNOWN* GameData_1ffce00;
extern _UNKNOWN* GameData_1ffce40;
extern _UNKNOWN* GameData_1fffd08;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212c840;
extern _UNKNOWN* GameData_2130228;
extern _UNKNOWN GameData_1a8a4bd;
extern _UNKNOWN GameData_1a8e354;
extern _UNKNOWN GameData_1a95d15;
extern _UNKNOWN GameData_1a99bad;
extern _UNKNOWN GameData_1a9da0c;
extern _UNKNOWN GameData_1aa19d7;
extern _UNKNOWN GameData_1ac05bb;
extern _UNKNOWN GameData_1ac7eee;
extern _UNKNOWN GameData_1acbe0f;
extern _UNKNOWN GameData_1adf105;
extern _UNKNOWN GameData_1af6166;
extern _UNKNOWN GameData_1afde01;
extern _UNKNOWN GameData_1ba1414;
extern _UNKNOWN GameData_1ba1420;
extern _UNKNOWN GameData_1ba1430;
extern _UNKNOWN GameData_2167780;
extern _UNKNOWN GameData_21a60e8;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a6190;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_21ed530;
extern _UNKNOWN GameData_2216780;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82980;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82a60;
extern __int128 GameData_1a82e70;
extern __int128 GameData_1a82e80;
extern __int128 GameData_1a83050;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83380;
extern __int128 GameData_1a83480;
extern __int128 GameData_1a83590;
extern __int128 GameData_1a83800;
extern __int128 GameData_1a838e0;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a6180;
extern __int128 GameData_21a61a0;
extern __int64 (*GameData_1fec898[])();
extern __int64 (*GameData_1ff3c58[])();
extern __int64 (*GameData_1ff81d0[3])();
extern __int64 (*GameData_1fffa98[])();
extern __int64 (*GameData_2044668[])();
extern __int64 (*GameData_212c848[2])();
extern __int64 (*decltype_c81af0_ptr[6])();
extern __int64 (*game_cmdbtl_CmdBtlEventTalkCallback_vtable[])();
extern __int64 (*game_zview_ExtrusionEntryShape_Result_vtable[])();
extern __int64 (*game_zview_ExtrusionEntryShape_vtable[])();
extern __int64* GameData_212c838;
extern __int64* GameData_212c8a0;
extern __int64* GameData_212cbe8[74];
extern __int64* GameData_212cc98[52];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212d460[6];
extern __int64* GameData_212ea58;
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebd0[3];
extern __int64* GameData_212ee30[4];
extern __int64* GameData_212f840[3];
extern __int64* GameData_212f878;
extern __int64* GameData_212fd50[2];
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212c060;
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7a0[13];
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_212d020[5];
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dbf0[2];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc58[3];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_21a60e0;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c96e8;
extern __int64 GameData_21c99c8;
extern __int64 GameData_21c9f48;
extern __int64 GameData_21ca010;
extern __int64 GameData_21ca020;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3c98;
extern __int64 GameData_21f3ca0;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3cd8;
extern __int64 GameData_21f3ce0;
extern __int64 GameData_21f3d08;
extern __int64 GameData_21f3d10;
extern __int64 GameData_2203490;
extern __int64 GameData_220b6e0;
extern __int64 GameData_22127d0;
extern __int64 GameData_2232008;
extern __int64 GameData_224b668;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char* GameData_1ff3b68[12];
extern char* GameData_1ffce20[2];
extern char** GameData_212fbf8;
extern char GameData_1a91e0c[];
extern char GameData_1a9f09e;
extern char GameData_2216858;
extern char GameData_2262914;
extern int GameData_2167728;
extern int GameData_21d92e0;
extern int GameData_21ed528;
float GameRoutine_5eaef0(__int64, float32x4_t*, float, float, float, float,
                         double, double);
float HeightCellMap_1002e20(_QWORD, _QWORD, _QWORD);
float atan2f(_QWORD, long double, float);
float atan2f_alt1(_QWORD, float, float) __asm__("atan2f");
float fmodf(float, float);
float powf(float, float);
float strtof(_QWORD, _QWORD);
unsigned __int64 GameRoutine_dc0d60(unsigned __int64 result, __int64*);
unsigned __int64 GameRoutine_e99900(_QWORD*);
unsigned __int64 GameRoutine_fd6b40(unsigned int*, unsigned int*,
                                    unsigned int*);
unsigned __int64 GameRoutine_fd6db0(__int64, __int64, __int64, __int64);
unsigned __int64 GameRoutine_fd6f70(__int64, __int64, __int64, __int64,
                                    __int64);
void CmdBtlUnit_e7ca80(__int64, float);
void GameRoutine_314104();
void GameRoutine_d5fd80(__int64);
void GameRoutine_e7bed0_alt1(__int64, char) __asm__("GameRoutine_e7bed0");
void GameRoutine_e9f200(__int64);
void GameRoutine_efa7e0();
void GameRoutine_f92170(__int64);
void GameRoutine_ff6c00(_QWORD*, _QWORD*);
void MapSimulator_Destructor(__int64);
void MeshData_f555a0(float32x4_t*, float32x4_t*, unsigned __int64*,
                     unsigned __int64*);
void ProcChallengeBegin_fc3840(_QWORD*);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_64aa00(_QWORD);
void __attribute__((noreturn))
GameRoutine_64aa00_alt1() __asm__("GameRoutine_64aa00");
void __attribute__((noreturn)) GameRoutine_65c760(long double);
void __attribute__((noreturn))
GameRoutine_65c760_alt1() __asm__("GameRoutine_65c760");
void __attribute__((noreturn)) GameRoutine_6c1f60(void);
void __attribute__((noreturn)) GameRoutine_6e5c60(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");
void __attribute__((noreturn)) GameRoutine_cb48b0(long double);
void __attribute__((noreturn)) GameRoutine_d5e820(_QWORD);
void __attribute__((noreturn)) GameRoutine_d5f350();
void __attribute__((noreturn)) GameRoutine_d5ff80();
void __attribute__((noreturn)) GameRoutine_dc8470();
void __attribute__((noreturn)) GameRoutine_e77e10(_QWORD);
void __attribute__((noreturn)) GameRoutine_f31de0(void);
void __attribute__((noreturn)) GameRoutine_fc6e20(_QWORD, long double);
void __attribute__((noreturn)) GameRoutine_ff1e40(void);
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn))
String_60a1d0_alt2(_QWORD) __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230(void);
void __attribute__((noreturn)) String_60a230_alt1() __asm__("String_60a230");
void __attribute__((noreturn)) String_60a250(_QWORD);
void game_hub_efc3b0(__int64, __int64*, char, __int64);
__attribute__((swiftcall)) void
game_ec1260_alt1(PSEUDO_X8 x8_, __int64 result) __asm__("game_ec1260");
float game_ede020(_QWORD* a1);
void game_ede740(float32x4_t* a1);
__int64 game_edea70_alt1(__int64 a1, float a2, float a3) __asm__("game_edea70");
__int64 game_edede0_alt1(__int64 a1, float a2, float a3,
                         float a4) __asm__("game_edede0");
float game_edf4a0();
__attribute__((swiftcall)) void game_eec580(PSEUDO_X8 x8_, __int64 unused_int0,
                                            __int64 a1);
__attribute__((swiftcall)) void
game_eecb60(PSEUDO_X8 x8_, unsigned __int64 result, __int64 a2);
__attribute__((swiftcall)) void game_f2f2e0(PSEUDO_X8 x8_, _QWORD* result,
                                            __int64* a2);
__int64 game_f2f4e0(__int64 result);
void game_f30440(__int64 a1);
__attribute__((swiftcall)) void game_f31080(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned int a2, float32x4_t* a3,
                                            __int128* a4);
__attribute__((swiftcall)) void game_f31720(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned int a2);
__n128 game_f318a0(__int64 a1, _QWORD* a2, int a3);
__attribute__((swiftcall)) void game_f31a40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3);
__int64 game_f3e160();
float game_f3ec50();
__int64 game_f3feb0(__int64 a1);
__int64 game_f422a0(__int64 a1);
void game_f45e20_alt1(__int64 a1, __n128 a2) __asm__("game_f45e20");
void game_f464a0(__int64 a1);
__int64 game_f46660_alt1(__int64 a1) __asm__("game_f46660");
void game_f469c0(__int64 a1);
void game_f5ab60(__int64 a1);
__n128 game_f5b140_alt1(__int64 a1) __asm__("game_f5b140");
__n128 game_f5bb00_alt1(__int64 a1) __asm__("game_f5bb00");
__n128 game_f86460(__int64 a1, int a2, _QWORD* a3);
bool game_f86d10(__int64 a1, __int64* a2, char a3);
bool game_f86e80(__int64 a1, __int64* a2, char a3);
bool game_f86f50(__int64 a1, __int64* a2, char a3);
__int64 game_f87cd0(__int64 a1, __int64 a2);
void game_f8eb50(__int64 a1);
__int64 game_f917e0_alt1(__int64 a1) __asm__("game_f917e0");
void game_f9ce00(__int64 a1);
unsigned __int8* game_f9f860(unsigned __int8* result);
__attribute__((swiftcall)) void game_fa4b80(PSEUDO_X8 x8_);
__int64* game_fa7fe0_alt1(__int64* result) __asm__("game_fa7fe0");
__attribute__((swiftcall)) void game_fb1fe0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            char a4);
__attribute__((swiftcall)) void game_fb22c0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            char a4);
void game_fb78c0_alt1(__int64 a1, __n128 a2) __asm__("game_fb78c0");
__int64* game_fb9500_alt1(__int64 a1) __asm__("game_fb9500");
__int64 game_fbb5a0(__int64 a1, __int128* a2, float a3);
__int64 game_fbc6b0(unsigned int a1);
__attribute__((swiftcall)) void game_fbce70(PSEUDO_X8 x8_, unsigned int a1,
                                            unsigned int a2);
void game_fbd7a0(__int64 a1);
_QWORD* game_fbdc20_alt1(__int64 a1) __asm__("game_fbdc20");
__int64* game_fbe060_alt1(__int64 a1) __asm__("game_fbe060");
__int64 game_fbe660(__int64 a1);
__int64 game_fc4180();
__attribute__((swiftcall)) void game_fc45a0(PSEUDO_X8 x8_, __int64 a1);
__attribute__((swiftcall)) void game_fcb000(PSEUDO_X8 x8_, __int64 unused_int0,
                                            __int16 a1);
void game_fcb290(__int64 a1, float32x4_t* a2, int a3, int a4, int a5, int a6,
                 unsigned __int64* a7, unsigned __int64* a8);
__int64 game_fcfcc0(__int64 result, unsigned int a2, int a3, unsigned int a4,
                    char a5);
__int64 game_fd4180(__int64 result);
unsigned __int64 game_fd58e0_alt1(unsigned __int64 result, int* a2, __int64 a3,
                                  char a4) __asm__("game_fd58e0");
__int64 game_fdccb0_alt1(__int64 a1) __asm__("game_fdccb0");
__attribute__((swiftcall)) void
game_febfc0_alt1(PSEUDO_X8 x8_, __int64 a1) __asm__("game_febfc0");
__int64 game_ff0ea0_alt1(int8x16_t* a1, float32x4_t* a2, float32x4_t* a3,
                         __int64* a4, float a5) __asm__("game_ff0ea0");
float32x4_t* game_ff1940(float32x4_t* result, __int64* a2, float32x4_t* a3,
                         __int64 a4, float32x4_t* a5, __int64 a6,
                         float32x4_t* a7, int8x16_t* a8, float a9);
void game_ff33e0(__int64 a1, int* a2);
__int64* game_ff5c20(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_ff60c0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void
game_ff6680_alt1(PSEUDO_X8 x8_, __int64 a1, __int64 a2,
                 long double a4) __asm__("game_ff6680");
bool game_ffbf60_alt1(_BYTE* a1) __asm__("game_ffbf60");
__attribute__((swiftcall)) void game_ffd4e0(PSEUDO_X8 x8_, __int64 a1);
__int64 game_10001c0();
_QWORD* game_10027c0(_QWORD* a1, char* a2);
_QWORD* game_1008b50();
__int64 GameRoutine_1008d20(_QWORD);
__int64 GameRoutine_9750e0(void);
__int64 GameRoutine_f4a5e0();
__int64 ProcSeqStock_f4a980();
__int64 ProcSeqStock_f4ad30();
__int64 ProcSeqStock_f4add0();
__int64 ProcSeqStock_f4aee0();
__int64 game_97e570(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32_alt1(void) __asm__("game_HashString32");
__int64 game_ProcInst_Register(void);
__int64 game_cmdbtl_anonymous_ProcSeqStock_StockCamera();
extern _DWORD GameData_1a83140[4];
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN GameData_2222c88;
extern __int64 (*game_cmdbtl_anonymous_ProcSeqStock_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64 GameData_212c608[2];
extern __int64 GameData_21ca310;
extern __int64 GameData_21ec7b8;
extern __int64 GameData_2222a50;
extern __int64 GameData_2222a58;
extern __int64 GameData_2222a60;
extern __int64 GameData_2222a70;
extern __int64 GameData_2222a80;
extern __int64 GameData_2222a90;
extern __int64 GameData_2222a98;
extern __int64 GameData_2222aa0;
extern __int64 GameData_2222ab0;
extern __int64 GameData_2222ac0;
extern __int64 GameData_2222ad0;
extern __int64 GameData_2222ad8;
extern __int64 GameData_2222ae0;
extern __int64 GameData_2222af0;
extern __int64 GameData_2222b00;
extern __int64 GameData_2222b10;
extern __int64 GameData_2222b18;
extern __int64 GameData_2222b20;
extern __int64 GameData_2222b30;
extern __int64 GameData_2222b40;
extern __int64 GameData_2222b50;
extern __int64 GameData_2222b58;
extern __int64 GameData_2222b60;
extern __int64 GameData_2222b70;
extern __int64 GameData_2222b80;
extern __int64 GameData_2222b90;
extern __int64 GameData_2222b98;
extern __int64 GameData_2222ba0;
extern __int64 GameData_2222bb0;
extern __int64 GameData_2222bc0;
extern __int64 GameData_2222bd0;
extern __int64 GameData_2222bd8;
extern __int64 GameData_2222be0;
extern __int64 GameData_2222bf0;
extern __int64 GameData_2222c00;
extern __int64 GameData_2222c10;
extern __int64 GameData_2222c18;
extern __int64 GameData_2222c20;
extern __int64 GameData_2222c30;
extern __int64 GameData_2222c40;
extern __int64 GameData_2222c50;
extern __int64 GameData_2222c58;
extern __int64 GameData_2222c60;
extern __int64 GameData_2222c70;
extern __int64 GameData_2222c80;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_2222a48;
extern char GameData_2222a88;
extern char GameData_2222ac8;
extern char GameData_2222b08;
extern char GameData_2222b48;
extern char GameData_2222b88;
extern char GameData_2222bc8;
extern char GameData_2222c08;
extern char GameData_2222c48;
extern int GameData_2222a68;
extern int GameData_2222a78;
extern int GameData_2222aa8;
extern int GameData_2222ab8;
extern int GameData_2222ae8;
extern int GameData_2222af8;
extern int GameData_2222b28;
extern int GameData_2222b38;
extern int GameData_2222b68;
extern int GameData_2222b78;
extern int GameData_2222ba8;
extern int GameData_2222bb8;
extern int GameData_2222be8;
extern int GameData_2222bf8;
extern int GameData_2222c28;
extern int GameData_2222c38;
extern int GameData_2222c68;
extern int GameData_2222c78;
extern int game_script_hub_talk_g_choice_menu_result;
__int64 game_f4a180(__int64 result);
__int64 game_fc76e0(__int64 result, __int64* a2, char* a3, __int64 a4,
                    __int64 a5, __int64 a6, __int64 a7, __int64 a8);
void game_fdce40(__int64 a1);
__n128 game_fdd0d0_alt1(__int64 a1) __asm__("game_fdd0d0");
__n128 game_fdd2c0_alt1(__int64 a1) __asm__("game_fdd2c0");
void game_ff7720(unsigned __int8** a1, __int64* a2);
__n128 game_1007c80_alt1(__int64 a1) __asm__("game_1007c80");
__attribute__((swiftcall)) void
CmdBtlUnit_e7dd50_alt1(PSEUDO_X8, __int64,
                       __int64) __asm__("CmdBtlUnit_e7dd50");
__attribute__((swiftcall)) void
CmdBtlUnit_e7de70_alt1(PSEUDO_X8, __int64,
                       __int64) __asm__("CmdBtlUnit_e7de70");
__attribute__((swiftcall)) void Quat_624bc0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void
collision_672120_alt1(PSEUDO_X8, __int128*, __int64,
                      float) __asm__("collision_672120");
__attribute__((swiftcall)) void game_templates_14a4be0(PSEUDO_X8, _QWORD,
                                                       _QWORD, _QWORD, _QWORD);
__attribute__((swiftcall)) void math_6222e0(PSEUDO_X8, float32x4_t*,
                                            float32x4_t*, int8x16_t*);
__attribute__((swiftcall)) void
math_Mtx43_MakeRotation_alt1(PSEUDO_X8,
                             float32x4_t*) __asm__("math_Mtx43_MakeRotation");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_14a0820_alt1(_QWORD*) __asm__("GameRoutine_14a0820");
__int64 GameRoutine_2b0_alt1() __asm__("GameRoutine_2b0");
__int64 GameRoutine_975940_alt1(__int64) __asm__("GameRoutine_975940");
__int64 GameRoutine_f2f380_alt1(__int64 result) __asm__("GameRoutine_f2f380");
__int64 GameRoutine_f5c790_alt1() __asm__("GameRoutine_f5c790");
__int64 GameRoutine_f64a20_alt1(__int64, __int64,
                                __int64) __asm__("GameRoutine_f64a20");
__int64 game_14a1b00(__int64*, float);
__int64 game_14a3920(__int64 result);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
extern __int64 GameData_212cc98_alt1[52] __asm__("GameData_212cc98");
extern char* GameData_1ffce20_alt1[4] __asm__("GameData_1ffce20");
float32x4_t* game_ff1940_alt2(float32x4_t* result, float32x4_t**, float32x4_t*,
                              __int64, float32x4_t*, __int64, float32x4_t*,
                              int8x16_t*, float) __asm__("game_ff1940");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void CmdBtlUnit_e7ada0_alt1(__int64) __asm__("CmdBtlUnit_e7ada0");
void GameRoutine_edec80_alt1(__int64*, _QWORD*) __asm__("GameRoutine_edec80");
void GameRoutine_edef80_alt1(__int64*, _QWORD*) __asm__("GameRoutine_edef80");
void ProcHubSeqObeliskCleared_fba300_alt1(__int64*, int) __asm__(
    "ProcHubSeqObeliskCleared_fba300");
void __attribute__((noreturn))
GameRoutine_ff1e40_alt1() __asm__("GameRoutine_ff1e40");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_edea70(__int64 a1, float a2, float a3);
void game_edede0(__int64 a1, float a2, float a3, float a4);
void game_f5b140(__int64 a1);
void game_f5bb00(__int64 a1);
void game_fb9500(__int64 a1);
__int64 game_ff0ea0(_DWORD* a1, float32x4_t* a2, float32x4_t* a3, __int64* a4,
                    float a5);
_QWORD* GameRoutine_e07e20_alt1(unsigned __int8*) __asm__("GameRoutine_e07e20");
__attribute__((swiftcall)) void
Character_cafca0_alt1(PSEUDO_X8, __int64) __asm__("Character_cafca0");
__int64* GameHr_ff7280(__int64**, unsigned __int8*, __int64**);
__int64*
GameRoutine_d5f8e0_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_d5f8e0");
__int64*
HubInitNatives_ff5d00_alt1(__int64* result) __asm__("HubInitNatives_ff5d00");
__int64 CmdBtlUnit_e7df20_alt1(__int64 result, char,
                               float) __asm__("CmdBtlUnit_e7df20");
__int64 CmdbtlPartyNatives_e9cce0_alt1(__int64 result) __asm__(
    "CmdbtlPartyNatives_e9cce0");
__int64 GameHr_102abb0(__int64);
__int64 GameHr_9750e0(__int64, __int64);
__int64 GameHr_fbcd00(unsigned int);
__int64 GameHr_ff5600(__int64, __int64*, __int64);
__int64 GameHr_ff69e0(__int64*, _QWORD*);
__int64 GameHr_ff7060(__int64, __int64);
__int64 GameHr_ffd180(int, const char*);
__int64 GameRoutine_1a09d20_alt1(unsigned __int64,
                                 __int64) __asm__("GameRoutine_1a09d20");
__int64 GameRoutine_1a0a750_alt1(__int64, __int64,
                                 __int64) __asm__("GameRoutine_1a0a750");
__int64 GameRoutine_60a020_alt2(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_eb9120_alt1(__int64) __asm__("GameRoutine_eb9120");
__int64 GameRoutine_fb7e20_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_fb7e20");
__int64 GameRoutine_fc6fa0_alt1(__int64 result, __int64, __int64,
                                unsigned __int64, __int64*,
                                signed __int64) __asm__("GameRoutine_fc6fa0");
__int64 game_97e570_alt1(__int64, _QWORD*, __int64,
                         __int64) __asm__("game_97e570");
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
bool CmdbtlPartyNatives_e73070_alt1(_QWORD*, __int64*) __asm__(
    "CmdbtlPartyNatives_e73070");
bool GameHr_fd71c0(__int64, __int64);
bool GameRoutine_1008d20_alt1(__int64) __asm__("GameRoutine_1008d20");
char* GameHr_ff6d70(__int64*, __int64, char*);
const char*
game_HashString32_alt2(const char* result) __asm__("game_HashString32");
float atan2f_alt2(float, float) __asm__("atan2f");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64
GameRoutine_1130770_alt1(__int64, const char*,
                         __int64*) __asm__("GameRoutine_1130770");
void GameHr_d8d760(__int64);
void GameHr_dc0d60(unsigned __int64, __int64*);
void GameHr_e7ca80(__int64, float);
void GameHr_e7fde0(__int64, __int64*, __int64*, int, float, float);
void GameHr_ff6c00(_QWORD*, _QWORD*);
void GameRoutine_6b7aa0_alt1(__int64, __int64*, __int64*,
                             unsigned __int64) __asm__("GameRoutine_6b7aa0");
void GameRoutine_7a8220_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7a8220");
void GameRoutine_7f3400_alt1(__int64*, _QWORD*) __asm__("GameRoutine_7f3400");
void GameRoutine_d5e6c0_alt1(__int64) __asm__("GameRoutine_d5e6c0");
void GameRoutine_d5e9a0_alt1(__int64, __int64*,
                             __int64*) __asm__("GameRoutine_d5e9a0");
void GameRoutine_d5f370_alt1(__int64, _QWORD*) __asm__("GameRoutine_d5f370");
void GameRoutine_fc6e40_alt1(__int64*, _QWORD*) __asm__("GameRoutine_fc6e40");
void __attribute__((noreturn))
GameRoutine_6c1f60_alt1() __asm__("GameRoutine_6c1f60");
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void __attribute__((noreturn))
GameRoutine_cb48b0_alt1() __asm__("GameRoutine_cb48b0");
void __attribute__((noreturn))
GameRoutine_d5e820_alt1() __asm__("GameRoutine_d5e820");
void __attribute__((noreturn))
GameRoutine_e77e10_alt1() __asm__("GameRoutine_e77e10");
void __attribute__((noreturn))
GameRoutine_f31de0_alt1() __asm__("GameRoutine_f31de0");
void __attribute__((noreturn))
GameRoutine_fc6e20_alt1() __asm__("GameRoutine_fc6e20");
void __attribute__((noreturn))
String_60a250_alt1(const char*) __asm__("String_60a250");
void __attribute__((noreturn)) fs_60a230();
void game_d8e140_alt1(__int64) __asm__("game_d8e140");
void game_d8ec60_alt1(__int64) __asm__("game_d8ec60");
void game_f92170(__int64);
__attribute__((swiftcall)) void game_ec1260(PSEUDO_X8 x8_);
void game_f45e20(_QWORD* a1);
void game_f46660(__int64 a1);
void game_f917e0(__int64 a1);
void game_fa7fe0(__int64* a1);
void game_fb78c0(__int64 a1);
void game_fbdc20(__int64 a1);
void game_fbe060(__int64 a1);
void game_fd58e0(unsigned __int64 a1, int* a2, __int64 a3, char a4);
void game_fdccb0(__int64 a1);
void game_fdd0d0(__int64 a1);
void game_fdd2c0(__int64 a1);
__attribute__((swiftcall)) void game_febfc0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_ff6680(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2);
bool game_ffbf60(const char* a1);
void game_1007c80(__int64 a1);

__attribute__((swiftcall)) void game_ec1260(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v2 = *(_QWORD*)(GameData_2203490 + 712);
  v3 = *(_QWORD*)(GameData_2203490 + 720);
  if (v2 == v3) {
    v5 = 0;
  }
  else {
    v4 = nullptr;
    v5 = 0;
    v6 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v7 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
      v8 = a1[2];
      if ((unsigned __int64)v4 < v8) {
        *(_QWORD*)v4 = v7;
        v4 += 8;
      }
      else {
        v9 = &v4[-v5];
        v10 = (__int64)&v4[-v5] >> 3;
        v11 = v10 + 1;
        if ((unsigned __int64)(v10 + 1) >> 61 != 0) {
          *a1 = v5;
          GameRoutine_6c1f60_alt1();
        }
        v12 = v8 - v5;
        if (v12 >> 2 > v11) {
          v11 = v12 >> 2;
        }
        if ((unsigned __int64)v12 >= 0x7FFFFFFFFFFFFFF8LL) {
          v13 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v13 = v11;
        }
        if (v13 != 0) {
          if (v13 >> 61 != 0) {
            *a1 = v5;
            GameRoutine_60a210_alt1();
          }
          v14 = fw_memory_HeapManager_Allocate_alt1(*v6, 8 * v13, 16, 0);
        }
        else {
          v14 = 0;
        }
        v15 = v14 + 8 * v13;
        v16 = (unsigned __int64)&v4[-v5];
        v17 = (__int64)&v9[v14 + -8 * v10];
        *(_QWORD*)&v9[v14] = v7;
        v4 = &v9[v14 + 8];
        memcpy_alt1(v17, v5, v16);
        a1[1] = (__int64)v4;
        a1[2] = v15;
        if (v5 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*v6 + 200) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v6 + v18, v5);
        }
        v5 = v17;
      }
      v2 += 16;
      a1[1] = (__int64)v4;
    } while (v2 != v3);
  }
  *a1 = v5;
}

float game_ede020(_QWORD* a1)
{
  float32x4_t* v1;
  float32x4_t v3;
  int8x16_t v4;
  float32x4_t v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  int32x4_t v16;
  int32x4_t v17;
  int8x16_t v18;
  int8x16_t v19;
  int8x16_t v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  unsigned __int64 v24;
  int8x16_t v25;
  float32x4_t v26;
  int8x16_t v27;
  int8x16_t v28;
  int8x16_t v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int8x16_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  int8x8_t v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  __int128 v46;
  int8x16_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  int8x16_t v55;
  float32x4_t v56;
  float32x4_t v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  __int128 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  float result;
  int8x16_t v67;
  float32x4_t v68;
  int8x16_t v69;
  struct {
    int32x4_t v70;
    int8x16_t v71;
    int8x16_t v72;
    float32x4_t v73;
    char gap160_[40];
    __int64 v74;
  } v70_;

  v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = (float32x4_t*)a1[12];
  if (v1 != nullptr) {
    v3 = vsubq_f32(v1[1], v1[2]);
    v4 = vmulq_f32(v3, v3);
    LANES128(v4).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v4, v4, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
            .n64_u64[0];
    LANES128(v4).n128_u64[0] =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v4).n128_u64[0])))
            .n64_u64[0];
    LANES128(v4).n128_u64[1] = LANES128(v4).n128_u64[0];
    v5 = vrsqrteq_f32(v4);
    v6 = vmulq_f32(v5, vrsqrtsq_f32(v5, vmulq_f32(v4, v5)));
    v67 = v1[3];
    v68 = vbicq_s8(
        vmulq_f32(v3, vmulq_f32(v6, vrsqrtsq_f32(v6, vmulq_f32(v4, v6)))),
        vceqzq_f32(v4));
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v62 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v62;
      __cxa_guard_release(&GameData_21a6130),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    GameRoutine_6222e0((void*)(&v70_.v70), (float32x4_t*)&GameData_21a6120,
                       &v68, &v67),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    LANES128(v7).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v70_.v71, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v8).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v70_.v72, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v7).n128_i8[8] =
        vqtbl1_s8(v70_.v71, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    *(int8x8_t*)&LANES128(v8).n128_i8[8] =
        vqtbl1_s8(v70_.v72, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v9 = vmulq_f32(vmulq_f32(v70_.v70, v7), v8);
    LANES128(v8).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v70_.v71, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v8).n128_i8[8] =
        vqtbl1_s8(v70_.v71, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    LANES128(v10).n128_u64[0] =
        LANES64_OF(
            vqtbl1_s8(v70_.v72, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v10).n128_i8[8] =
        vqtbl1_s8(v70_.v72, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v11 = vsubq_f32(v9, vmulq_f32(vmulq_f32(v70_.v70, v8), v10));
    LANES128(v11).n128_u64[0] = LANES128_OF(vpaddq_f32(v11, v11)).n128_u64[0];
    v12 = vaddq_f32(
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]), 0),
        vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v11).n128_u64[0]), 1));
    v13 = vrecpeq_f32(v12);
    v14 = vmulq_f32(v13, vrecpsq_f32(v13, v12));
    v15 = vmulq_f32(v14, vrecpsq_f32(v14, v12));
    v16 = vzip1q_s32(v70_.v70, v70_.v72);
    v17 = vzip1q_s32(v70_.v71, COERCE_AS(int32x4_t, 0));
    v18 = vzip2q_s32(v16, v17);
    v19 = vzip1q_s32(vzip2q_s32(v70_.v70, v70_.v72),
                     vzip2q_s32(v70_.v71, COERCE_AS(int32x4_t, 0)));
    v20 = vzip1q_s32(v16, v17);
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v23).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v17).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v21).n128_i8[8] =
        vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v24 = LANES64_OF(vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
              .n64_u64[0];
    *(int8x8_t*)&LANES128(v23).n128_i8[8] =
        vqtbl1_s8(v19, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    LANES128(v19).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v22).n128_u64[1] = v24;
    *(int8x8_t*)&LANES128(v19).n128_i8[8] =
        vqtbl1_s8(v18, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    *(int8x8_t*)&LANES128(v17).n128_i8[8] =
        vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
    v25 = vmulq_f32(v15, vmlsq_f32(vmulq_f32(v21, v22), v19, v23));
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v26).n128_i8[8] =
        vqtbl1_s8(v20, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
    v27 = vmulq_f32(v15, vmlsq_f32(vmulq_f32(v23, v17), v22, v26));
    v28 = vmulq_f32(v15, vmlsq_f32(vmulq_f32(v19, v26), v17, v21));
    v29 = vceqzq_f32(v12);
    v70_.v70 = vbicq_s8(v25, v29);
    v70_.v71 = vbicq_s8(v27, v29);
    v70_.v72 = vbicq_s8(v28, v29);
    v70_.v73 = vbicq_s8(
        vmlsq_laneq_f32(
            vmlsq_lane_f32(
                vmulq_n_f32(vnegq_f32(v25), LANES128(v70_.v73).n128_f32[0]),
                v27, COERCE_AS(float32x2_t, LANES128(v70_.v73).n128_u64[0]), 1),
            v28, v70_.v73, 2),
        v29);
    GameRoutine_624bc0((void*)(&v69), (__int64)&v70_.v70),
        v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6170) != 0) {
      v63 = *((_QWORD*)GameData_212c550 + 1);
      *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
      *((_QWORD*)&GameData_21a6160 + 1) = v63;
      __cxa_guard_release(&GameData_21a6170),
          v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v30 = COERCE_AS(float32x4_t, GameData_1a829d0);
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] = GameData_21a6160;
    v33 = vmulq_f32(v69, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[1] = LANES128(v31).n128_u64[0];
    LANES128(v34).n128_u64[1] = LANES128(v34).n128_u64[0];
    v36 = COERCE_AS(float32x4_t, GameData_1a83800);
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v38 =
        vmlaq_f32(vmulq_f32(v33, v34), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v32, v35));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v37).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v33).n128_u64[0]), 1);
    LANES128(v32).n128_u64[0] = LANES128(v69).n128_u64[0];
    LANES128(v31).n128_u64[1] = LANES128(v35).n128_u64[0];
    LANES128(v35).n128_u64[1] = GameData_21a6160;
    v39 = vmulq_f32(v35, v37);
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    v40 = vmlaq_f32(v38, COERCE_AS(float32x4_t, GameData_1a83800), v39);
    PSEUDO_LOW_LANE64(v41, n64_u64, 0xB0A090803020100LL);
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v33, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
    v42 = vmlsq_f32(v40, v35, v31);
    LANES128(v31).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[1] = LANES128(v31).n128_u64[0];
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v37).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v43 =
        vmlaq_f32(vmulq_f32(v33, v42), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v32, v35));
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v37).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v42).n128_u64[0]), 1);
    LANES128(v31).n128_u64[1] = LANES128(v35).n128_u64[0];
    LANES128(v35).n128_u64[1] = LANES128(v69).n128_u64[0];
    LANES128(v44).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v44).n128_i8[8] =
        vqtbl1_s8(v42, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v45 = vmlsq_f32(vmlaq_f32(v43, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v35, v37)),
                    v44, v31);
    a1[16] = LANES128(v45).n128_u64[0];
    v46 = *((_OWORD*)a1 + 8);
    *((_QWORD*)&v46 + 1) = LANES128(v45).n128_u32[2];
    *((_OWORD*)a1 + 8) = v46;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                              memory_order_acquire) &
         1) == 0) {
      v70_.v74 = 0xB0A090803020100LL;
      v64 = __cxa_guard_acquire(&GameData_21a6190),
      v61 = COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v30 = COERCE_AS(float32x4_t, GameData_1a829d0);
      v36 = COERCE_AS(float32x4_t, GameData_1a83800);
      PSEUDO_LOW_LANE64(v41, n64_u64, v70_.v74);
      if (v64 != 0) {
        v65 = *((_QWORD*)GameData_212c558 + 1);
        *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
        *((_QWORD*)&GameData_21a6180 + 1) = v65;
        __cxa_guard_release(&GameData_21a6190),
            v61 =
                COERCE_AS(__typeof__(v61), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v30 = COERCE_AS(float32x4_t, GameData_1a829d0);
        v36 = COERCE_AS(float32x4_t, GameData_1a83800);
        PSEUDO_LOW_LANE64(v41, n64_u64, v70_.v74);
      }
    }
    v47 = vmulq_f32(v69, v30);
    LANES128(v48).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v50).n128_u64[0] = GameData_21a6180;
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v48).n128_u64[1] = LANES128(v48).n128_u64[0];
    LANES128(v50).n128_u64[1] = LANES128(v49).n128_u64[0];
    *(int8x8_t*)&LANES128(v51).n128_i8[8] =
        vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v52).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v53 = vmlaq_f32(vmulq_f32(v47, v48), v36, vmulq_f32(v50, v51));
    LANES128(v51).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v52).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v47).n128_u64[0]), 1);
    LANES128(v49).n128_u64[1] = LANES128(v51).n128_u64[0];
    LANES128(v51).n128_u64[1] = GameData_21a6180;
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v54).n128_i8[8] = vqtbl1_s8(v47, v41);
    LANES128(v47).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v55 = vmlsq_f32(vmlaq_f32(v53, v36, vmulq_f32(v51, v52)), v54, v49);
    LANES128(v54).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v49).n128_u64[0] = LANES128(v69).n128_u64[0];
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v54).n128_u64[1] = LANES128(v54).n128_u64[0];
    LANES128(v49).n128_u64[1] = LANES128(v47).n128_u64[0];
    *(int8x8_t*)&LANES128(v56).n128_i8[8] =
        vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v57).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    v58 = vmlaq_f32(vmulq_f32(v54, v55), v36, vmulq_f32(v49, v56));
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v69, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v57).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v55).n128_u64[0]), 1);
    LANES128(v47).n128_u64[1] = LANES128(v56).n128_u64[0];
    LANES128(v56).n128_u64[1] = LANES128(v69).n128_u64[0];
    v59 = vmlaq_f32(v58, v36, vmulq_f32(v56, v57));
    LANES128(v56).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v55, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v56).n128_i8[8] = vqtbl1_s8(v55, v41);
    v60 = vmlsq_f32(v59, v56, v47);
    a1[14] = LANES128(v60).n128_u64[0];
    v61 = *((_OWORD*)a1 + 7);
    *((_QWORD*)&v61 + 1) = LANES128(v60).n128_u32[2];
    *((_OWORD*)a1 + 7) = v61;
  }
  LODWORD(result) = v61;
  return result;
}

void game_ede740(float32x4_t* a1)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int128 v7;
  float v8;
  float v9;
  float32x4_t v10;
  __int64 v11;
  int8x16_t v12;
  float v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  int v18;
  int v19;
  float v20;
  float v21;
  int32x4_t v22;

  v2 = LANES128(*(a1)).n128_u64[1];
  v1 = LANES128(a1[1]).n128_u64[0];
  v4 = v2;
  if (v2 != v1) {
    v4 = LANES128(*(a1)).n128_u64[1];
    while (*(float*)(v4 + 4) != 0x0.0p+0f) {
      v4 += 32LL;
      if (v4 == v1) {
        goto LABEL_18;
      }
    }
  }
  v5 = v4 + 32;
  if (v4 == v1 || v5 == v1) {
    if (v4 != v1) {
    LABEL_17:
      LANES128(a1[1]).n128_u64[0] = v4;
      v1 = v4;
    }
  }
  else {
    do {
      if (*(float*)(v5 + 4) != 0x0.0p+0f) {
        *(_QWORD*)v4 = *(_QWORD*)v5;
        *(_DWORD*)(v4 + 16) = *(_DWORD*)(v5 + 16);
        *(_DWORD*)(v4 + 20) = *(_DWORD*)(v5 + 20);
        v7 = *(_OWORD*)(v4 + 16);
        *((_QWORD*)&v7 + 1) = *(unsigned int*)(v5 + 24);
        *(_OWORD*)(v4 + 16) = v7;
        v4 += 32LL;
      }
      v5 += 32LL;
    } while (v5 != v1);
    v2 = LANES128(*(a1)).n128_u64[1];
    v1 = LANES128(a1[1]).n128_u64[0];
    if (v4 != v1) {
      goto LABEL_17;
    }
  }
LABEL_18:
  if (v2 != v1) {
    v22 = vdupq_n_s32(0x3DCCCCCDu);
    do {
      v8 = *(float*)(v2 + 4);
      if (v8 <= 0x0.0p+0f) {
        goto LABEL_22;
      }
      v9 =
          powf(fminf(fmaxf(*(float*)v2 / v8, 0x0.0p+0f), 0x1.0000000000000p+0f),
               0x1.8000000000000p+0f);
      v10 = *(float32x4_t*)(v2 + 16);
      v11 = game_ProcGameSkipView_instance_;
      v12 = vmulq_f32(v10, v10);
      LANES128(v12).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v12, v12, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
              .n64_u64[0];
      LANES128(v12).n128_u64[0] =
          LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
              .n64_u64[0];
      v13 = LANES64_OF(
                vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v12).n128_u64[0])))
                .n64_f32[0];
      LANES128(v12).n128_u64[1] = LANES128(v12).n128_u64[0];
      v14 = vrsqrteq_f32(v12);
      v15 = vmulq_f32(v14, vrsqrtsq_f32(v14, vmulq_f32(v12, v14)));
      v16 = vbicq_s8(
          vmulq_f32(v10,
                    vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v12, v15)))),
          vceqzq_f32(v12));
      v17 = vmulq_f32(vsubq_f32(COERCE_AS(float32x4_t, 0), v16), v22);
      a1[10] = vaddq_f32(
          a1[10],
          vmulq_n_f32(vmlaq_n_f32(v17, vsubq_f32(v16, v17), v9), v9 * v13));
      if (v11 == 0 || *(_BYTE*)(v11 + 152) != 3 ||
          (((v18 = *(_DWORD*)(v11 + 156)) & 8) != 0 ? (v19 = 2) : (v19 = 3),
           (v19 & v18) != 0)) {
        v20 = *(float*)v2;
        v21 = fabsf(LANES128(a1[9]).n128_f32[0]);
        if (*(float*)v2 <= 0x0.0p+0f) {
          if (*(float*)v2 >= 0x0.0p+0f || (v20 = v20 + v21) <= 0x0.0p+0f) {
          LABEL_35:
            *(float*)v2 = v20;
            if (v20 != 0x0.0p+0f) {
              goto LABEL_22;
            }
            goto LABEL_21;
          }
        }
        else {
          v20 = v20 - v21;
          if (v20 >= 0x0.0p+0f) {
            goto LABEL_35;
          }
        }
      }
      *(_DWORD*)v2 = 0;
    LABEL_21:
      *(_DWORD*)(v2 + 4) = 0;
    LABEL_22:
      v2 += 32LL;
    } while (v2 != v1);
  }
}

void game_edea70(__int64 a1, float a2, float a3)
{

#pragma clang fp contract(off)
  __int64* v5;
  int v6;
  unsigned int v7;
  unsigned int v8;
  int v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  float v18;
  float v19;
  float v20;
  unsigned int v21;
  float32x4_t v22;
  int8x16_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  __int64 v29;
  _QWORD v31[4];

  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v5 = game_map_MapRandom_instance__ptr[0];
  v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v7 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v8 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v5 + 1) = v6;
  v9 = (v8 >> 8) ^ (v7 >> 19) ^ v8 ^ v7;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v7;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v9;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v10 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  v11 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
  v12 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
  *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
  *((_DWORD*)v5 + 1) = v10;
  v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v11;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v13;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v14 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  v15 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
  v16 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
  *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
  *((_DWORD*)v5 + 1) = v14;
  v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v17;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v29 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v29;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
  }
  *(float*)v31 = a3;
  *((float*)v31 + 1) = a3;
  v18 = vcvts_n_f32_u32((unsigned __int16)v9, 0x10u);
  v19 = vcvts_n_f32_u32((unsigned __int16)v13, 0x10u);
  v20 = vcvts_n_f32_u32((unsigned __int16)v17, 0x10u);
  *(float*)&v21 = (float)(v20 + -0x1.0000000000000p-1f) +
                  (float)(v20 + -0x1.0000000000000p-1f);
  LANES128(v22).n128_f32[0] = (float)(v18 + -0x1.0000000000000p-1f) +
                              (float)(v18 + -0x1.0000000000000p-1f);
  LANES128(v22).n128_f32[1] = (float)(v19 + -0x1.0000000000000p-1f) +
                              (float)(v19 + -0x1.0000000000000p-1f);
  LANES128(v22).n128_u64[1] = v21;
  v23 = vmulq_f32(v22, v22);
  v24 = vextq_s8(v23, v23, 8u);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  PSEUDO_LOW_LANE128(v24, n128_u64, 0);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  v25 = vceqq_f32(v23, v24);
  LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
  v26 = vrsqrteq_f32(v23);
  v27 = vmulq_f32(v26, vrsqrtsq_f32(v26, vmulq_f32(v23, v26)));
  v28 = vmulq_n_f32(
      vbslq_s8(
          vdupq_lane_s32(
              COERCE_AS(int32x2_t, LANES128_OF(vmvnq_s8(v25)).n128_u64[0]), 0),
          vbicq_s8(
              vmulq_f32(v22,
                        vmulq_f32(v27, vrsqrtsq_f32(v27, vmulq_f32(v23, v27)))),
              vceqzq_f32(v23)),
          COERCE_AS(int8x16_t, GameData_1a83090)),
      a2);
  LANES128(v25).n128_u64[0] = LANES128(v28).n128_u64[0];
  LANES128(v25).n128_u64[1] = LANES128(v28).n128_u32[2];
  *(int8x16_t*)&v31[2] = v25;
  GameRoutine_edec80_alt1((__int64*)(a1 + 8), v31);
}

void game_edede0(__int64 a1, float a2, float a3, float a4)
{

#pragma clang fp contract(off)
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  unsigned int v13;
  int v14;
  unsigned int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  __int128 v23;
  __int64 v24;
  struct {
    __int64 v25;
    float v26;
    float v27;
    __int128 v28;
  } v25_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v24 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v24;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
  }
  v25_.v28 = GameData_21a6120;
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v8 = game_map_MapRandom_instance__ptr[0];
  v9 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v11 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
        (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v8 + 1) = v9;
  v12 = (v11 >> 8) ^ (v10 >> 19) ^ v11 ^ v10;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v10;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v12;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  *(float*)&v13 = (float)(unsigned __int16)v12;
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v14 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
  v15 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4);
  v16 = *(_DWORD*)v8 ^ (*(_DWORD*)v8 << 11);
  *(_DWORD*)v8 = *((_DWORD*)v8 + 1);
  *((_DWORD*)v8 + 1) = v14;
  v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v17;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  *(float*)&v18 = (float)(unsigned __int16)v17;
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v19 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
  v20 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4);
  v21 = *(_DWORD*)v8 ^ (*(_DWORD*)v8 << 11);
  *(_DWORD*)v8 = *((_DWORD*)v8 + 1);
  *((_DWORD*)v8 + 1) = v19;
  v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v20;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v22;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  v25_.v26 = a3;
  v25_.v27 = a4;
  *(_QWORD*)&v23 = __PAIR64__(v18, v13);
  *(float*)&v25_.v25 = a2;
  *((float*)&v25_.v25 + 1) = a2;
  *((float*)&v23 + 2) = (float)(unsigned __int16)v22;
  HIDWORD(v23) = 0;
  v25_.v28 = v23;
  GameRoutine_edef80_alt1((__int64*)(a1 + 32), &v25_.v25);
}

float game_edf4a0()
{
  __int64* v0;
  int v1;
  unsigned int v2;
  unsigned int v3;
  int v4;

  nn_os_LockMutex(&game_g_random_mutex);
  v0 = game_map_MapRandom_instance__ptr[0];
  v1 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v2 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v3 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v0 + 1) = v1;
  v4 = (v3 >> 8) ^ (v2 >> 19) ^ v3 ^ v2;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v0) = v2;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v0 + 4) = v4;
  nn_os_UnlockMutex(&game_g_random_mutex);
  return vcvts_n_f32_u32((unsigned __int16)v4, 0x10u);
}

__attribute__((swiftcall)) void game_eec580(PSEUDO_X8 x8_, __int64 unused_int0,
                                            __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  const char* v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  const char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  signed __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    char* v39;
  } v37_;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = GameData_22127d0;
  v4 = *(_QWORD*)(GameData_22127d0 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_22127d0 + 72) - v4) >> 3) >=
      1) {
    v5 = a1 + 1;
    v6 = a1;
    v7 = 0;
    v35 = a1 + 1;
    while (1) {
      v8 = *(_QWORD*)(v4 + 8 * v7);
      v9 = *(const char**)(v8 + 32);
      v10 = strlen_alt1(v9);
      v11 = *(_BYTE*)v6 >> 1;
      if ((*(_BYTE*)v6 & 1) != 0) {
        v11 = *(_QWORD*)(v6 + 8);
      }
      if (v10 == v11) {
        v12 = v10;
        if (v10 == -1) {
          fs_60a230();
        }
        v13 = (*(_BYTE*)v6 & 1) != 0 ? *(_QWORD*)(v6 + 16) : v5;
        if (memcmp_alt1(v13, (__int64)v9, v12) == 0 &&
            *(_WORD*)(v8 + 40) != 0) {
          break;
        }
      }
    LABEL_4:
      v4 = *(_QWORD*)(v3 + 64);
      if (++v7 >= (int)((unsigned __int64)(*(_QWORD*)(v3 + 72) - v4) >> 3)) {
        return;
      }
    }
    v14 = 8LL * *(unsigned __int16*)(v8 + 40);
    v15 = 0;
    while (1) {
      v18 = *(const char**)(*(_QWORD*)(v8 + 48) + v15);
      v19 = strlen_alt1(v18);
      if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v20 = v19;
      if (v19 >= 0x17) {
        if ((v19 | 7) == 0x17) {
          v22 = 26;
        }
        else {
          v22 = (v19 | 7) + 1;
        }
        v21 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v22, 16, 0);
        v37_.v38 = v20;
        v37_.v39 = v21;
        v37_.v37 = v22 | 1;
      }
      else {
        v21 = (char*)&v37_.v37 + 1;
        LOBYTE(v37_.v37) = 2 * v19;
        if (v19 == 0) {
          goto LABEL_26;
        }
      }
      memmove_alt1((__int64)v21, (__int64)v18, v20);
    LABEL_26:
      v23 = (__int64*)a2[1];
      v24 = a2[2];
      v21[v20] = 0;
      if ((unsigned __int64)v23 < v24) {
        v16 = v37_.v38;
        v17 = (__int64)(v23 + 3);
        *v23 = v37_.v37;
        v23[1] = v16;
        v23[2] = (__int64)v37_.v39;
      }
      else {
        v25 = *a2;
        v26 = (signed __int64)v23 - *a2;
        v27 = 1 - 0x5555555555555555LL * (v26 >> 3);
        if (v27 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00_alt1();
        }
        v28 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v24 - v25) >> 3);
        if (2 * v28 > v27) {
          v27 = 2 * v28;
        }
        if (v28 >= 0x555555555555555LL) {
          v29 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v29 = v27;
        }
        if (v29 != 0) {
          if (v29 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210_alt1();
          }
          v30 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    24 * v29, 16, 0);
        }
        else {
          v30 = 0;
        }
        v31 = (__int64*)(v30 + v26);
        v32 = v30 + 24 * v29;
        v33 = v37_.v38;
        v17 = v30 + v26 + 24;
        *v31 = v37_.v37;
        v31[1] = v33;
        v31[2] = (__int64)v37_.v39;
        memcpy_alt1(v30, v25, v26);
        *a2 = v30;
        a2[2] = v32;
        if (v25 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v25);
        }
      }
      v15 += 8;
      a2[1] = v17;
      if (v14 == v15) {
        v5 = v35;
        v6 = a1;
        v3 = GameData_22127d0;
        goto LABEL_4;
      }
    }
  }
}

__attribute__((swiftcall)) void game_eecb60(PSEUDO_X8 x8_, unsigned __int64 a1,
                                            __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64** v7;
  __int64* v8;
  __int64* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 (*v15)(_QWORD);
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  const char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  signed __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;
  struct {
    __int64 v46;
    unsigned __int64 v47;
    char* v48;
  } v46_;

  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v4 = GameData_21c9f48;
  v5 = *(_QWORD*)(GameData_21c9f48 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21c9f48 + 72) - v5) >> 3) >=
      1) {
    v6 = 0;
    v43 = a2 + 1;
    while (1) {
      v7 = *(__int64***)(*(_QWORD*)(v5 + 8 * v6) + 24LL);
      v9 = *v7;
      v8 = v7[1];
      if (v8 == *v7) {
        goto LABEL_29;
      }
      v10 = 0;
      do {
        v12 = *v9;
        v11 = v9[1];
        if (v11 == *v9) {
        LABEL_7:
          ++v10;
        }
        else {
          while (1) {
            if (*(_QWORD*)v12 != 0) {
              v13 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v14 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v12);
                if (v14 != 0) {
                  v15 = *(__int64 (**)(_QWORD))(v14 + 72);
                  v16 = *(_QWORD*)(v14 + 80);
                  v17 = (_QWORD*)(v14 + (v16 >> 1));
                  if ((v16 & 1) != 0) {
                    v15 = *(__int64 (**)(_QWORD))((char*)v15 + *v17);
                  }
                  LOBYTE(a1) = v15(v17);
                }
                else {
                  LOBYTE(a1) = 1;
                }
              }
              if (*(_BYTE*)(v12 + 16) != ((v13 == 0) | a1 & 1)) {
                break;
              }
            }
            v12 += 24;
            if (v12 == v11) {
              goto LABEL_7;
            }
          }
        }
        v9 += 6;
      } while (v9 != v8);
      v4 = GameData_21c9f48;
      if (v10 != 0) {
      LABEL_29:
        v18 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v6);
        v19 = *(const char**)(v18 + 32);
        a1 = strlen_alt1(v19);
        v20 = *(_BYTE*)a2 >> 1;
        if ((*(_BYTE*)a2 & 1) != 0) {
          v20 = *(_QWORD*)(a2 + 8);
        }
        if (a1 == v20) {
          v21 = a1;
          if (a1 == -1) {
            fs_60a230();
          }
          v22 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : v43;
          LODWORD(a1) = memcmp_alt1(v22, (__int64)v19, v21);
          if ((_DWORD)a1 == 0 && *(_WORD*)(v18 + 56) != 0) {
            break;
          }
        }
      }
    LABEL_4:
      v5 = *(_QWORD*)(v4 + 64);
      if (++v6 >= (int)((unsigned __int64)(*(_QWORD*)(v4 + 72) - v5) >> 3)) {
        return;
      }
    }
    v23 = 0;
    v45 = 8LL * *(unsigned __int16*)(v18 + 56);
    v24 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v27 = *(const char**)(*(_QWORD*)(v18 + 64) + v23);
      a1 = strlen_alt1(v27);
      if (a1 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v28 = a1;
      if (a1 >= 0x17) {
        if ((a1 | 7) == 0x17) {
          v30 = 26;
        }
        else {
          v30 = (a1 | 7) + 1;
        }
        v29 = (char*)fw_memory_HeapManager_Allocate_alt1(*v24, v30, 16, 0);
        v46_.v47 = v28;
        v46_.v48 = v29;
        v46_.v46 = v30 | 1;
      }
      else {
        v29 = (char*)&v46_.v46 + 1;
        LOBYTE(v46_.v46) = 2 * a1;
        if (a1 == 0) {
          goto LABEL_42;
        }
      }
      LOBYTE(a1) = memmove_alt1((__int64)v29, (__int64)v27, v28);
    LABEL_42:
      v31 = (__int64*)a3[1];
      v32 = a3[2];
      v29[v28] = 0;
      if ((unsigned __int64)v31 < v32) {
        v25 = v46_.v47;
        v26 = (__int64)(v31 + 3);
        *v31 = v46_.v46;
        v31[1] = v25;
        v31[2] = (__int64)v46_.v48;
      }
      else {
        v33 = *a3;
        v34 = (signed __int64)v31 - *a3;
        v35 = 1 - 0x5555555555555555LL * (v34 >> 3);
        if (v35 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00_alt1();
        }
        v36 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v32 - v33) >> 3);
        if (2 * v36 > v35) {
          v35 = 2 * v36;
        }
        if (v36 >= 0x555555555555555LL) {
          v37 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v37 = v35;
        }
        if (v37 != 0) {
          if (v37 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210_alt1();
          }
          v38 = fw_memory_HeapManager_Allocate_alt1(*v24, 24 * v37, 16, 0);
        }
        else {
          v38 = 0;
        }
        v39 = (__int64*)(v38 + v34);
        v40 = v38 + 24 * v37;
        v41 = v46_.v47;
        v26 = v38 + v34 + 24;
        *v39 = v46_.v46;
        v39[1] = v41;
        v39[2] = (__int64)v46_.v48;
        LOBYTE(a1) = memcpy_alt1(v38, v33, v34);
        *a3 = v38;
        a3[2] = v40;
        v24 = &fw_memory_g_heap_manager;
        if (v33 != 0) {
          v42 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v42,
                                             v33);
        }
      }
      v23 += 8;
      a3[1] = v26;
      if (v45 == v23) {
        v4 = GameData_21c9f48;
        goto LABEL_4;
      }
    }
  }
}

__attribute__((swiftcall)) void game_f2f2e0(PSEUDO_X8 x8_, _QWORD* result,
                                            __int64* a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;

  v4 = *a2;
  v3 = a2[1];
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  v5 = result[1];
  *result = v4;
  result[1] = v3;
  if (v5 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = result;
      v7 = a3;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
      result = v6;
      a3 = v7;
    }
    v4 = *result;
    v3 = result[1];
  }
  *a3 = v4;
  a3[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__int64 game_f2f4e0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  __int128* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int j;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int128 v21;
  unsigned int k;
  __int64 v23;
  __int64 v24;
  unsigned int v25;
  __int128 v26;
  unsigned int m;
  __int64 v28;
  _DWORD* v29;
  __int64 v30;
  int v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  unsigned int v41;
  unsigned int i;
  __int64 v43;
  __int64 v44[2];
  _QWORD v45[2];
  struct {
    float32x4_t v46;
    int v47;
  } v46_;

  if ((*(_BYTE*)(result + 153) & 1) != 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v3 + 560) != 1) {
    return result;
  }
  v4 = *(_QWORD*)(result + 40);
  v5 = (__int128*)(result + 32);
  v6 = result;
  LANES128(v46_.v46).n128_u64[0] = *(_QWORD*)(result + 32);
  LANES128(v46_.v46).n128_u64[1] = v4;
  v46_.v47 = 1092616192;
  result = nn_g3d_5eb5c0(v3 + 320, &v46_.v46);
  if ((result & 1) == 0) {
    return GameRoutine_f2f3e0(v6);
  }
  v7 = *(_QWORD*)(v6 + 160);
  v8 = v6;
  if (v7 != 0) {
    goto LABEL_5;
  }
  v9 = (__int64*)(v6 + 168);
  v29 = *(_DWORD**)(v6 + 168);
  if (*(_QWORD*)v29 != 0 && *(_DWORD*)(*(_QWORD*)v29 + 16LL) == v29[2]) {
    goto LABEL_51;
  }
  v30 = *(_QWORD*)(v6 + 8);
  v31 = *(_DWORD*)(v6 + 16);
  v33 = *(__int64**)(v30 + 8);
  v32 = *(__int64**)(v30 + 16);
  if (v33 != v32) {
    while ((*(_BYTE*)(*v33 + 4) & 1) != 0 || *(_DWORD*)*v33 != v31) {
      v33 += 2;
      if (v33 == v32) {
        goto LABEL_47;
      }
    }
  }
  if (v33 == v32) {
  LABEL_47:
    if ((unsigned int)GameData_21d92e0 > 7) {
      v37 = 6;
    }
    else {
      v37 = (unsigned int)GameData_1b01468[GameData_21d92e0];
    }
    game_templates_14a4be0((void*)(v44), &GameData_224b668, v37,
                           GameData_1ff3b68[v31], &GameData_1a9f09e);
    game_f2f2e0((void*)(v45), v9, v44);
    GameRoutine_f2f380_alt1((__int64)v45);
    GameRoutine_f2f380_alt1((__int64)v44);
    GameRoutine_14a17c0(v9, *(long double*)(v6 + 32));
    result =
        (__int64)GameRoutine_14a18c0((__int64**)v9, *(long double*)(v6 + 48));
    v7 = *(_QWORD*)(v6 + 160);
    v8 = v6;
    if (v7 != 0) {
      goto LABEL_5;
    }
  LABEL_51:
    v38 = *(_QWORD*)*v9;
    if (v38 == 0 || *(_DWORD*)(v38 + 16) != *(_DWORD*)(*v9 + 8)) {
      return result;
    }
    goto LABEL_6;
  }
  v34 = *v33;
  v35 = *(__int64**)(*v33 + 8);
  *(_BYTE*)(*v33 + 4) = 1;
  v36 = *v35;
  if (*v35 != 0 && *(_DWORD*)(v36 + 16) == *((_DWORD*)v35 + 2)) {
    *(_BYTE*)(v36 + 33) = 1;
    if (*(_BYTE*)(v34 + 4) == 0) {
      game_14a1b00(*(__int64**)(v34 + 8), 0x0.0p+0f);
      v39 = *(__int64**)(v34 + 8);
      v8 = v6;
      v40 = *v39;
      if (*v39 != 0 && *(_DWORD*)(v40 + 16) == *((_DWORD*)v39 + 2)) {
        v41 = *(_DWORD*)(v40 + 36);
        if (v41 != 0) {
          for (i = 0; i < v41; ++i) {
            if ((int)v41 > (int)i) {
              v43 = *(_QWORD*)(v40 + 40 + 8LL * (int)i);
              if (v43 != 0) {
                *(_BYTE*)(v43 + 129) = 0;
                v41 = *(_DWORD*)(v40 + 36);
              }
            }
          }
        }
      }
    }
  }
  v7 = *v33;
  if (*v33 == 0) {
    v31 = *(_DWORD*)(v8 + 16);
    goto LABEL_47;
  }
  *(_QWORD*)(v8 + 160) = v7;
LABEL_5:
  v9 = (__int64*)(v7 + 8);
LABEL_6:
  v10 = *v9;
  v11 = *(_QWORD*)*v9;
  if (*(_BYTE*)(v8 + 128) == 1) {
    if (v11 != 0 && *(_DWORD*)(v11 + 16) == *(_DWORD*)(v10 + 8)) {
      v12 = *(_DWORD*)(v11 + 36);
      if (v12 != 0) {
        for (j = 0; j < v12; ++j) {
          if ((int)v12 > (int)j) {
            v14 = *(_QWORD*)(v11 + 40 + 8LL * (int)j);
            if (v14 != 0) {
              v15 = *(_QWORD*)(v8 + 120);
              *(_QWORD*)(v14 + 104) = *(_QWORD*)(v8 + 104);
              *(_QWORD*)(v14 + 120) = v15;
              v16 = *(_QWORD*)(v8 + 88);
              *(_QWORD*)(v14 + 72) = *(_QWORD*)(v8 + 72);
              *(_QWORD*)(v14 + 88) = v16;
              v17 = *(_QWORD*)(v8 + 64);
              *(_QWORD*)(v14 + 80) = *(_QWORD*)(v8 + 80);
              *(_QWORD*)(v14 + 64) = v17;
              v18 = *(_QWORD*)(v8 + 96);
              v19 = *(_QWORD*)(v8 + 112);
              *(_WORD*)(v14 + 128) = 257;
              *(_QWORD*)(v14 + 112) = v19;
              *(_QWORD*)(v14 + 96) = v18;
              v12 = *(_DWORD*)(v11 + 36);
            }
          }
        }
      }
    }
    return game_14a3920(v10);
  }
  else {
    if (v11 != 0 && *(_DWORD*)(v11 + 16) == *(_DWORD*)(v10 + 8)) {
      v20 = *(_DWORD*)(v11 + 36);
      if (v20 != 0) {
        v21 = *v5;
        for (k = 0; k < v20; ++k) {
          if ((int)v20 > (int)k) {
            v23 = *(_QWORD*)(v11 + 40 + 8LL * (int)k);
            if (v23 != 0) {
              *(_OWORD*)(v23 + 16) = v21;
              *(_BYTE*)(v23 + 128) = 1;
              v20 = *(_DWORD*)(v11 + 36);
            }
          }
        }
      }
    }
    result = game_14a3920(v10);
    v24 = *(_QWORD*)*v9;
    if (v24 != 0 && *(_DWORD*)(v24 + 16) == *(_DWORD*)(*v9 + 8)) {
      v25 = *(_DWORD*)(v24 + 36);
      if (v25 != 0) {
        v26 = *(_OWORD*)(v6 + 48);
        for (m = 0; m < v25; ++m) {
          if ((int)v25 > (int)m) {
            v28 = *(_QWORD*)(v24 + 40 + 8LL * (int)m);
            if (v28 != 0) {
              *(_OWORD*)(v28 + 48) = v26;
              *(_BYTE*)(v28 + 128) = 1;
              v25 = *(_DWORD*)(v24 + 36);
            }
          }
        }
      }
    }
  }
  return result;
}

void game_f30440(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float32x4_t v11;
  int8x16_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int32x4_t v25;
  int8x16_t v26;
  int8x16_t v27;
  int8x16_t v28;
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  float32x4_t v37;
  int8x16_t v38;
  int8x16_t v39;
  char v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64** v44;
  __int64* v45;
  __int64* v46;
  __int64 v47;
  float v48;
  float v49;
  __int64 v50;
  __int64 v51;
  float v52;
  float v53;
  float v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned int v59;
  __int128 v60;
  unsigned int i;
  __int64 v62;
  __int64* v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  float32x4_t v69[4];
  _BYTE v70[256];

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  if (*GameData_212d168 == 1 && *GameData_212cfc8[0] != 0) {
    v2 = *GameData_212cfc8[0] + 16;
  }
  else {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL);
    v2 = *(_QWORD*)(v3 + 24);
    v4 = *(_QWORD*)(v3 + 32);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v4),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      }
    }
  }
  v5 = (*(float (**)(__int64))(*(_QWORD*)v2 + 72LL))(v2),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  v6 = (*(float (**)(__int64))(*(_QWORD*)v2 + 80LL))(v2),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  (*(void (**)(__int64))(*(_QWORD*)v2 + 80LL))(v2),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  v8 = v6 / v7;
  v9 = (*(float (**)(__int64))(*(_QWORD*)v2 + 56LL))(v2),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  v10 = (*(float (**)(__int64))(*(_QWORD*)v2 + 64LL))(v2),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  *(long double*)&v11 =
      ((long double (*)(__int64)) * (_QWORD*)(*(_QWORD*)v2 + 16LL))(v2),
         v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
         v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
         v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v16 = vmulq_f32(vmulq_f32(v11, v13), v15);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v18 = vsubq_f32(v16, vmulq_f32(vmulq_f32(v11, v15), v17));
  LANES128(v18).n128_u64[0] = LANES128_OF(vpaddq_f32(v18, v18)).n128_u64[0];
  v19 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 1));
  v20 = vrecpeq_f32(v19);
  v21 = vmulq_f32(v20, vrecpsq_f32(v20, v19));
  v22 = vmulq_f32(v21, vrecpsq_f32(v21, v19));
  v23 = vzip1q_s32(v11, v14);
  v24 = vzip2q_s32(v11, v14);
  v25 = vzip1q_s32(v12, COERCE_AS(int32x4_t, 0));
  v26 = vzip2q_s32(v23, v25);
  v27 = vzip1q_s32(v24, vzip2q_s32(v12, COERCE_AS(int32x4_t, 0)));
  v28 = vzip1q_s32(v23, v25);
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v32 = LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  v33 = LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[1] = v32;
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[1] = v33;
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v13).n128_i8[8] =
      vqtbl1_s8(v28, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v34 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v29, v12), v27, v30));
  v35 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v30, v13), v12, v31));
  v36 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v27, v31), v13, v29));
  v38 = vmlsq_laneq_f32(
      vmlsq_lane_f32(vmulq_n_f32(vnegq_f32(v34), LANES128(v37).n128_f32[0]),
                     v35, COERCE_AS(float32x2_t, LANES128(v37).n128_u64[0]), 1),
      v36, v37, 2);
  v39 = vceqzq_f32(v19);
  v69[0] = vbicq_s8(v34, v39);
  v69[1] = vbicq_s8(v35, v39);
  v69[2] = vbicq_s8(v36, v39);
  v69[3] = vbicq_s8(v38, v39);
  GameRoutine_5eaef0((__int64)v70, v69, v5, v8, v9, v10,
                     LANES128(v38).n128_f64[0], *(double*)&v33),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  v40 = *(_BYTE*)(a1 + 560);
  memcpy(a1 + 320, v70, 240),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
      v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((v40 & 1) == 0) {
    *(_BYTE*)(a1 + 560) = 1;
  }
  v41 = 0;
  v68 = a1 + 32;
  v42 = GameData_212f878;
  v43 = game_script_hub_g_frame_counter_ptr[0];
  do {
    v44 = (__int64**)(v68 + 24 * v41);
    v45 = *v44;
    v46 = v44[1];
    if (*v44 == v46) {
      goto LABEL_51;
    }
    do {
      v51 = *v45;
      game_f2f4e0(*v45),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
      if ((*(_BYTE*)(v51 + 152) & 1) == 0) {
        *(_BYTE*)(v51 + 153) = 1;
        *(_QWORD*)v51 = 0;
      LABEL_26:
        v52 = 0x0.0p+0f;
        v53 = *(float*)(*v42 + 1440);
        if (v53 > 0x0.0p+0f) {
          v52 = *(float*)(v51 + 148);
          v54 = fabsf((float)((float)(*(float*)(*(_QWORD*)v43 + 160LL) *
                                      0x1.0aef000000000p+4f) /
                              0x1.f400000000000p+9f) /
                      v53);
          if (v52 <= 0x0.0p+0f) {
            if (v52 >= 0x0.0p+0f) {
              goto LABEL_33;
            }
            v52 = v52 + v54;
            if (v52 <= 0x0.0p+0f) {
              goto LABEL_33;
            }
          }
          else {
            v52 = v52 - v54;
            if (v52 >= 0x0.0p+0f) {
              goto LABEL_33;
            }
          }
          v52 = 0x0.0p+0f;
        }
      LABEL_33:
        *(float*)(v51 + 148) = v52;
        goto LABEL_34;
      }
      if (*(_BYTE*)(v51 + 153) == 1) {
        goto LABEL_26;
      }
    LABEL_34:
      v55 = *(_BYTE*)(v51 + 128);
      *(_BYTE*)(v51 + 152) = 0;
      if ((v55 & 1) == 0) {
        v56 = *(_QWORD*)(v51 + 160);
        if (v56 != 0) {
          v57 = *(_QWORD*)(v56 + 8);
          v58 = *(_QWORD*)v57;
          if (*(_QWORD*)v57 != 0) {
          LABEL_40:
            if (*(_DWORD*)(v58 + 16) == *(_DWORD*)(v57 + 8)) {
              v59 = *(_DWORD*)(v58 + 36);
              if (v59 != 0) {
                v60 = *(_OWORD*)(v51 + 32);
                for (i = 0; i < v59; ++i) {
                  if ((int)v59 > (int)i) {
                    v62 = *(_QWORD*)(v58 + 40 + 8LL * (int)i);
                    if (v62 != 0) {
                      *(_OWORD*)(v62 + 16) = v60;
                      *(_BYTE*)(v62 + 128) = 1;
                      v59 = *(_DWORD*)(v58 + 36);
                    }
                  }
                }
              }
            }
          }
          GameRoutine_14a3920(v57),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v7 =
                  COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
          goto LABEL_15;
        }
        v57 = *(_QWORD*)(v51 + 168);
        v58 = *(_QWORD*)v57;
        if (*(_QWORD*)v57 != 0 && *(_DWORD*)(v58 + 16) == *(_DWORD*)(v57 + 8)) {
          goto LABEL_40;
        }
      }
    LABEL_15:
      v47 = *(_QWORD*)(v51 + 160);
      if (v47 != 0) {
        v48 = *(float*)(v51 + 144);
        v49 = *(float*)(v51 + 148);
        v50 = *(_QWORD*)(v47 + 8);
      LABEL_17:
        GameRoutine_14a1b00((__int64*)v50, v48 * v49),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
        goto LABEL_18;
      }
      v50 = *(_QWORD*)(v51 + 168);
      if (*(_QWORD*)v50 != 0 &&
          *(_DWORD*)(*(_QWORD*)v50 + 16LL) == *(_DWORD*)(v50 + 8)) {
        v48 = *(float*)(v51 + 144);
        v49 = *(float*)(v51 + 148);
        goto LABEL_17;
      }
    LABEL_18:
      v45 += 2;
    } while (v45 != v46);
    v45 = *v44;
    v46 = v44[1];
    if (*v44 != v46) {
      while (*(float*)(*v45 + 148) > 0x0.0p+0f) {
        v45 += 2;
        if (v45 == v46) {
          goto LABEL_11;
        }
      }
    }
  LABEL_51:
    if (v45 != v46) {
      v63 = v45 + 2;
      if (v45 + 2 != v46) {
        do {
          v64 = *v63;
          if (*(float*)(*v63 + 148) > 0x0.0p+0f) {
            v65 = v63[1];
            *v63 = 0;
            v63[1] = 0;
            v66 = v45[1];
            *v45 = v64;
            v45[1] = v65;
            if (v66 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v66 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v66 + 16LL))(v66),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
              std___1___shared_weak_count___release_weak_alt1(v66),
                  v12 = COERCE_AS(__typeof__(v12),
                                  PSEUDO_REGISTER(__n128, "v1", "=w")),
                  v14 = COERCE_AS(__typeof__(v14),
                                  PSEUDO_REGISTER(__n128, "v2", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(float, "s1", "=w"));
            }
            v45 += 2;
          }
          v63 += 2;
        } while (v63 != v46);
        v46 = v44[1];
      }
      v43 = game_script_hub_g_frame_counter_ptr[0];
    }
    if (v45 != v46) {
      do {
        v67 = *(v46 - 1);
        if (v67 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v7 =
                  COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v67),
              v12 = COERCE_AS(__typeof__(v12),
                              PSEUDO_REGISTER(__n128, "v1", "=w")),
              v14 = COERCE_AS(__typeof__(v14),
                              PSEUDO_REGISTER(__n128, "v2", "=w")),
              v7 =
                  COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s1", "=w"));
        }
        v46 -= 2;
      } while (v46 != v45);
      v44[1] = v45;
    }
  LABEL_11:
    ++v41;
  } while (v41 != 12);
}

__attribute__((swiftcall)) void game_f31080(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned int a2, float32x4_t* a3,
                                            __int128* a4)
{

#pragma clang fp contract(off)
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64* v25;
  __int64 v26;
  __int64* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  float32x4_t v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  __int64 v36;
  float v37;
  float v38;
  __int64* result;
  float32x4_t* v40;
  __int64* v41;

  if (a2 >= 0xC) {
    String_60a250_alt1("array::at");
  }
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = (_QWORD*)(a1 + 24LL * a2);
  v12 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 224, 16, 0);
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 40) = a1;
  *(_DWORD*)(v12 + 48) = a2;
  *(_BYTE*)(v12 + 160) = 0;
  *(_QWORD*)(v12 + 64) = 0;
  *(_QWORD*)(v12 + 72) = 0;
  *(_QWORD*)v12 = GameData_1ff3c58;
  *(_QWORD*)(v12 + 80) = 0;
  *(_QWORD*)(v12 + 88) = 0;
  *(_BYTE*)(v12 + 96) = 0;
  *(_WORD*)(v12 + 184) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  v13 = v12 + 32;
  *(_QWORD*)(v12 + 192) = 0;
  *(_QWORD*)(v12 + 176) = 0x3F8000003F800000LL;
  v14 = fw_memory_HeapManager_Allocate_alt1(*v10, 296, 16, 0);
  *(_DWORD*)(v14 + 48) = 0x2000;
  *(_WORD*)(v14 + 108) = 256;
  *(_QWORD*)(v14 + 8) = 0;
  *(_QWORD*)(v14 + 16) = 0;
  *(_DWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  *(_DWORD*)(v14 + 104) = 0;
  *(_QWORD*)(v14 + 56) = 0;
  *(_QWORD*)(v14 + 64) = 0;
  *(_QWORD*)(v14 + 72) = 0;
  *(_WORD*)(v14 + 80) = 0;
  *(_WORD*)(v14 + 116) = 0;
  *(_WORD*)(v14 + 136) = 0;
  *(_BYTE*)(v14 + 160) = 0;
  *(_BYTE*)(v14 + 288) = 0;
  *(_QWORD*)(v14 + 272) = 0;
  *(_QWORD*)(v14 + 280) = 0;
  *(_QWORD*)(v14 + 256) = 0;
  *(_QWORD*)(v14 + 264) = 0;
  *(_QWORD*)(v14 + 240) = 0;
  *(_QWORD*)(v14 + 248) = 0;
  *(_QWORD*)(v14 + 224) = 0;
  *(_QWORD*)(v14 + 232) = 0;
  *(_QWORD*)(v14 + 208) = 0;
  *(_QWORD*)(v14 + 216) = 0;
  *(_QWORD*)(v14 + 192) = 0;
  *(_QWORD*)(v14 + 200) = 0;
  *(_QWORD*)(v14 + 176) = 0;
  *(_QWORD*)(v14 + 184) = 0;
  *(_QWORD*)(v14 + 168) = 0;
  *(_QWORD*)(v14 + 120) = 0;
  *(_DWORD*)(v14 + 127) = 0;
  *(_QWORD*)(v12 + 208) = v14;
  *(_QWORD*)v14 = GameData_2044668;
  *(_DWORD*)(v14 + 112) = -1082130432;
  *(_DWORD*)(v14 + 292) = 2;
  v15 = (__int64*)v11[5];
  v16 = v11[6];
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v12 + 200) = v14 + 24;
  if ((unsigned __int64)v15 >= v16) {
    v18 = v11[4];
    v40 = a3;
    v41 = a5;
    v19 = (unsigned __int64)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 4;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 60 != 0) {
      GameRoutine_f31de0_alt1();
    }
    v22 = v16 - v18;
    v23 = v10;
    if (v22 >> 3 > v21) {
      v21 = v22 >> 3;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF0LL) {
      v24 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v24 = v21;
    }
    if (v24 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v25 = v23;
    v26 = fw_memory_HeapManager_Allocate_alt1(*v23, 16 * v24, 16, 0);
    v27 = (__int64*)(v26 + v19);
    v28 = v26 + 16 * v24;
    *v27 = v13;
    v27[1] = v12;
    v29 = v26 + v19 - 16 * v20;
    v17 = v26 + v19 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    memcpy_alt1(v29, v18, v19);
    v11[4] = v29;
    v11[5] = v17;
    v11[6] = v28;
    if (v18 != 0) {
      v30 = 128;
      if (*(_QWORD*)(*v25 + 200) == 0) {
        v30 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v25 + v30, v18);
    }
    a3 = v40;
    a5 = v41;
  }
  else {
    *v15 = v13;
    v15[1] = v12;
    v17 = (__int64)(v15 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v11[5] = v17;
  LANES128(v31).n128_u32[0] = 0;
  LANES128(v31).n128_u32[3] = 0;
  *(unsigned __int64*)((char*)LANES128(v31).n128_u64 + 4) =
      *(unsigned int*)(*GameData_212f878 + 1424);
  v32 = vaddq_f32(*a3, v31);
  v33 = *a4;
  *(_QWORD*)(v12 + 64) = LANES128(v32).n128_u64[0];
  *(_QWORD*)(v12 + 80) = v33;
  v34 = *(_OWORD*)(v12 + 64);
  v35 = *(_OWORD*)(v12 + 80);
  *((_QWORD*)&v34 + 1) = LANES128(v32).n128_u32[2];
  *((_QWORD*)&v35 + 1) = DWORD2(v33);
  *(_OWORD*)(v12 + 64) = v34;
  *(_OWORD*)(v12 + 80) = v35;
  game_f2f4e0(v13);
  *(_BYTE*)(v12 + 184) = 1;
  v36 = *(_QWORD*)(v12 + 192);
  if (v36 != 0) {
    v37 = *(float*)(v12 + 176);
    v38 = *(float*)(v12 + 180);
    result = *(__int64**)(v36 + 8);
  }
  else {
    result = *(__int64**)(v12 + 200);
    if (*result == 0 || *(_DWORD*)(*result + 16) != *((_DWORD*)result + 2)) {
      goto LABEL_19;
    }
    v37 = *(float*)(v12 + 176);
    v38 = *(float*)(v12 + 180);
  }
  result = (__int64*)game_14a1b00(result, v37 * v38);
LABEL_19:
  *a5 = v13;
  a5[1] = v12;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    {
      (__int64*)std___1___shared_weak_count___release_weak_alt2(v12);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_f31720(PSEUDO_X8 x8_, __int64 a1,
                                            unsigned int a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _DWORD* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned int v9;
  int v10;
  __int64 v11;
  __int64 v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v17 = a1;
    v9 = a2;
    v10 = __cxa_guard_acquire(&GameData_21a6130);
    a1 = v17;
    a2 = v9;
    if (v10 != 0) {
      v11 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v11;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v17;
      a2 = v9;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v12 = a1;
    v13 = a2;
    v14 = __cxa_guard_acquire(&GameData_21a6130);
    a2 = v13;
    v15 = v14;
    a1 = v12;
    if (v15 != 0) {
      v16 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v16;
      __cxa_guard_release(&GameData_21a6130);
      a1 = v12;
      a2 = v13;
    }
  }
  result = X8CALL_X0(_DWORD*, game_f31080((void*)(&v18), a1, a2,
                                          (float32x4_t*)&GameData_21a6120,
                                          &GameData_21a6120));
  v5 = v19;
  if (v19 == 0) {
    goto LABEL_11;
  }
  v6 = std___1___shared_weak_count_lock(v19);
  if (v6 == 0) {
    result = (_DWORD*)std___1___shared_weak_count___release_weak(v5);
    goto LABEL_11;
  }
  v7 = v18;
  v8 = v6;
  result = (_DWORD*)std___1___shared_weak_count___release_weak(v5);
  if (v7 != 0) {
    *a3 = v7;
    a3[1] = v8;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != 0) {
      result;
      return;
    }
    goto LABEL_11;
  }
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  result = (_DWORD*)std___1___shared_weak_count___release_weak(v8);
  if (v7 == 0) {
  LABEL_11:
    *a3 = 0;
    a3[1] = 0;
  }
  {
    result;
    return;
  }
}

__n128 game_f318a0(__int64 a1, _QWORD* a2, int a3)
{

#pragma clang fp contract(off)
  char* v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned int v11;
  __n128 result;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    __int64 v18;
  } v17_;
  struct {
    float32x4_t v19;
    char* v20;
    int v21;
    char gap44_[4];
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
  } v19_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = GameData_1ff3b68[a3];
  v5 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v5 > 7) {
    v6 = 6;
  }
  else {
    v6 = GameData_1b01468[v5];
  }
  v19_.v19 = (__typeof__(v19_.v19)){0};
  v19_.v21 = v6;
  v19_.v20 = v4;
  v7 = *((_QWORD*)GameData_212c540 + 1);
  v9 = *(_QWORD*)GameData_212c548;
  v8 = *((_QWORD*)GameData_212c548 + 1);
  v19_.v22 = *(_QWORD*)GameData_212c540;
  v19_.v23 = v7;
  v19_.v24 = v9;
  v19_.v25 = v8;
  v19_.v26 = v19_.v22;
  v19_.v27 = v7;
  v10 = Manager_bc6460(*(float**)eft_g_effectSystem_ptr[0], &v19_.v19, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_14a10d0(&v17_.v17, (__int64)v10, v11, (__int64)&GameData_1a9f09e),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = v17_.v17;
  v14 = v17_.v18;
  if (v17_.v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17_.v18 + 8), 1u,
                              memory_order_relaxed);
  }
  v15 = a2[1];
  *a2 = v13;
  a2[1] = v14;
  if (v15 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      result = std___1___shared_weak_count___release_weak_alt1(v15),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v14 = a2[1];
  }
  if (v14 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 8),
                                             1u, memory_order_relaxed),
                   atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result = std___1___shared_weak_count___release_weak_alt1(v14),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v16 = v17_.v18;
    if (v17_.v18 == 0) {
      return result;
    }
  }
  else {
    v16 = v17_.v18;
    if (v17_.v18 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return std___1___shared_weak_count___release_weak_alt1(v16);
  }
  return result;
}

__attribute__((swiftcall)) void game_f31a40(PSEUDO_X8 x8_, float32x4_t* a1,
                                            float32x4_t* a2, float32x4_t* a3)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  int8x16_t v5;
  int8x16_t v6;
  float32x4_t v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int32x4_t v23;
  int32x4_t v24;
  int8x16_t v25;
  int8x16_t v26;
  int8x16_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  unsigned __int64 v31;
  int8x16_t v32;
  float32x4_t v33;
  int8x16_t v34;
  int8x16_t v35;
  int8x16_t v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  __int64 v44;
  __int64 v45;
  int8x16_t v46;
  int8x16_t v47;
  struct {
    int32x4_t v48;
    int8x16_t v49;
    int8x16_t v50;
    float32x4_t v51;
  } v48_;
  float32x4_t v52;

  v5 = vsubq_f32(*a2, *a1);
  v6 = vsubq_f32(*a3, *a2);
  LANES128(v7).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v7).n128_i8[8] =
      vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v8).n128_i8[8] =
      vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  *(int8x8_t*)&LANES128(v9).n128_i8[8] =
      vqtbl1_s8(v5, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v5).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v5).n128_i8[8] =
      vqtbl1_s8(v6, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v10 = vmlsq_f32(vmulq_f32(v7, v8), v5, v9);
  v11 = vmulq_f32(v10, v10);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
          .n64_u64[0];
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
          .n64_u64[0];
  LANES128(v11).n128_u64[1] = LANES128(v11).n128_u64[0];
  v12 = vrsqrteq_f32(v11);
  v13 = vmulq_f32(v12, vrsqrtsq_f32(v12, vmulq_f32(v11, v12)));
  v52 = vbicq_s8(
      vmulq_f32(v10, vmulq_f32(v13, vrsqrtsq_f32(v13, vmulq_f32(v11, v13)))),
      vceqzq_f32(v11));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a6130) != 0) {
    v44 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v44;
    __cxa_guard_release_alt1((__int64)&GameData_21a6130);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21a61b0) != 0) {
    v45 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v45;
    __cxa_guard_release_alt1((__int64)&GameData_21a61b0);
  }
  math_6222e0((void*)(&v48_.v48), (float32x4_t*)&GameData_21a6120, &v52,
              (int8x16_t*)&GameData_21a61a0);
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48_.v49, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v14).n128_i8[8] =
      vqtbl1_s8(v48_.v49, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48_.v50, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v48_.v50, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v16 = vmulq_f32(vmulq_f32(v48_.v48, v14), v15);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48_.v49, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v15).n128_i8[8] =
      vqtbl1_s8(v48_.v49, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v48_.v50, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v48_.v50, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v18 = vsubq_f32(v16, vmulq_f32(vmulq_f32(v48_.v48, v15), v17));
  LANES128(v18).n128_u64[0] = LANES128_OF(vpaddq_f32(v18, v18)).n128_u64[0];
  v19 = vaddq_f32(
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 0),
      vdupq_lane_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]), 1));
  v20 = vrecpeq_f32(v19);
  v21 = vmulq_f32(v20, vrecpsq_f32(v20, v19));
  v22 = vmulq_f32(v21, vrecpsq_f32(v21, v19));
  v23 = vzip1q_s32(v48_.v48, v48_.v50);
  v24 = vzip1q_s32(v48_.v49, COERCE_AS(int32x4_t, 0));
  v25 = vzip2q_s32(v23, v24);
  v26 = vzip1q_s32(vzip2q_s32(v48_.v48, v48_.v50),
                   vzip2q_s32(v48_.v49, COERCE_AS(int32x4_t, 0)));
  v27 = vzip1q_s32(v23, v24);
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v28).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v31 = LANES64_OF(vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v26, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = v31;
  *(int8x8_t*)&LANES128(v26).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v32 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v28, v29), v26, v30));
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v33 = vmulq_f32(v30, v24);
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v30).n128_i8[8] =
      vqtbl1_s8(v27, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v34 = vmulq_f32(v22, vmlsq_f32(v33, v29, v30));
  v35 = vmulq_f32(v22, vmlsq_f32(vmulq_f32(v26, v30), v24, v28));
  v36 = vceqzq_f32(v19);
  v48_.v48 = vbicq_s8(v32, v36);
  v48_.v49 = vbicq_s8(v34, v36);
  v48_.v50 = vbicq_s8(v35, v36);
  v48_.v51 = vbicq_s8(
      vmlsq_laneq_f32(
          vmlsq_lane_f32(
              vmulq_n_f32(vnegq_f32(v32), LANES128(v48_.v51).n128_f32[0]), v34,
              COERCE_AS(float32x2_t, LANES128(v48_.v51).n128_u64[0]), 1),
          v35, v48_.v51, 2),
      v36);
  Quat_624bc0((void*)(&v47), (__int64)&v48_.v48);
  math_Quat_FromYawPitchRoll((void*)(&v46), 0x0.0p+0f, -0x1.921fb60000000p+0f,
                             0x0.0p+0f);
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[0] = LANES128(v47).n128_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v37).n128_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v39).n128_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v41 = vmulq_f32(v38, v40);
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v42 = vmlaq_f32(vmulq_f32(v46, v39), COERCE_AS(float32x4_t, GameData_1a83800),
                  v41);
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v47, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v38).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v46).n128_u64[0]), 1);
  LANES128(v37).n128_u64[1] = LANES128(v41).n128_u64[0];
  LANES128(v41).n128_u64[1] = LANES128(v47).n128_u64[0];
  LANES128(v43).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v43).n128_i8[8] =
      vqtbl1_s8(v46, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v47 = vmlsq_f32(vmlaq_f32(v42, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v41, v38)),
                  v43, v37);
  GameRoutine_622ac0((void*)((_OWORD*)(a4 + 16)), (float32x2_t*)&v47);
  *(float32x4_t*)a4 = v52;
}

__int64 game_f3e160()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  char* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int16* v12;
  int v14;
  int v15;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  int v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    _QWORD v33[2];
    char* v34;
  } v33_;
  struct {
    __int64 v35;
    unsigned __int64 v36;
    unsigned __int16* v37;
  } v35_;

  v0 = *(_QWORD*)(*GameData_212ea58 + 752);
  v1 = *(_QWORD*)(*GameData_212ea58 + 760);
  if (v1 != 0 && (v2 = *(_QWORD*)(*GameData_212ea58 + 760),
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16),
                                            1u, memory_order_relaxed),
                  (v3 = std___1___shared_weak_count_lock_alt1(v2)) != 0)) {
    v4 = v3;
    if ((*(_BYTE*)(v0 + 172) & 1) == 0) {
      *(_BYTE*)(v0 + 172) = 1;
    }
    *(_DWORD*)(v0 + 136) = 1985855274;
    *(_BYTE*)(v0 + 148) = 0;
    *(_DWORD*)(v0 + 144) = 0;
    *(_BYTE*)(v0 + 152) = 0;
    *(_BYTE*)(v0 + 156) = 0;
    *(_BYTE*)(v0 + 160) = 0;
    *(_BYTE*)(v0 + 164) = 0;
    *(_BYTE*)(v0 + 168) = 0;
    *(_BYTE*)(v0 + 140) = 1;
    CmdBtlUnit_e7ada0_alt1(v0);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt2(v4);
    }
  }
  else {
    if (((*(_BYTE*)0xACLL) & 1) == 0) {
      (*(_BYTE*)0xACLL) = 1;
    }
    (*(_DWORD*)0x88LL) = 1985855274;
    (*(_BYTE*)0x8CLL) = 1;
    *(((_BYTE*)0x90LL) + 4) = 0;
    (*(_BYTE*)0x90LL) = 0;
    (*(_BYTE*)0x98LL) = 0;
    (*(_BYTE*)0x9CLL) = 0;
    (*(_BYTE*)0xA0LL) = 0;
    (*(_BYTE*)0xA4LL) = 0;
    *(((_BYTE*)0xA4LL) + 4) = 0;
    CmdBtlUnit_e7ada0_alt1(0);
  }
  v5 = std___1___shared_weak_count_lock_alt1(v1);
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v0 + 16) + 392LL) + 40LL) != 0) {
    v6 = *(const char**)(*(_QWORD*)(*(_QWORD*)(v0 + 16) + 392LL) + 40LL);
  }
  else {
    v6 = &GameData_1a9f09e;
  }
  v7 = strlen_alt1(v6);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_77;
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v10, 16, 0);
    v35_.v36 = v8;
    v35_.v37 = (unsigned __int16*)v9;
    v35_.v35 = v10 | 1;
    goto LABEL_21;
  }
  LOBYTE(v35_.v35) = 2 * v7;
  v9 = (char*)&v35_.v35 + 1;
  if (v7 != 0) {
  LABEL_21:
    memmove_alt1((__int64)v9, (__int64)v6, v8);
  }
  v9[v8] = 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  v11 = v35_.v36;
  if ((v35_.v35 & 1) == 0) {
    v11 = (unsigned __int8)v35_.v35 >> 1;
  }
  if (v11 == 3) {
    if ((v35_.v35 & 1) != 0) {
      v12 = v35_.v37;
    }
    else {
      v12 = (unsigned __int16*)((char*)&v35_.v35 + 1);
    }
    if (*v12 == 24907 && *((_BYTE*)v12 + 2) == 105) {
      if (game_GameModeData_instance_ == 0 ||
          *(_DWORD*)(game_GameModeData_instance_ + 60) != 1) {
        goto LABEL_67;
      }
      v20 = "V_AV_Kai0_Catching";
    }
    else {
      v14 = *v12;
      v15 = *((unsigned __int8*)v12 + 2);
      if (v14 != 29513 || v15 != 109) {
        goto LABEL_67;
      }
      v17 = std___1___shared_weak_count_lock_alt1(v1);
      if (v17 != 0) {
        v18 = *(_QWORD*)(v0 + 16) + 2104LL;
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v19 = v17;
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt2(v19);
        }
      }
      else {
        v18 = 2104;
      }
      v21 = *(unsigned __int8*)(v18 + 32);
      if (v21 == 0) {
        v30 = std___1___shared_weak_count_lock_alt1(v1);
        if (v30 != 0) {
          v21 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v0 + 16) + 392LL) +
                                    441LL);
          if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v31 = v30;
            (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
            std___1___shared_weak_count___release_weak_alt2(v31);
          }
        }
        else {
          v21 = *(unsigned __int8*)((*(_QWORD*)0x188LL) + 441LL);
        }
      }
      if (v21 == 2) {
        v20 = "V_AV_Ism0F_Catching";
      }
      else {
        v20 = "V_AV_Ism0M_Catching";
      }
    }
    v22 = std___1___shared_weak_count_lock_alt1(v1);
    v23 = strlen_alt1(v20);
    if (v23 < 0xFFFFFFFFFFFFFFF7LL) {
      v24 = v23;
      if (v23 >= 0x17) {
        if ((v23 | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (v23 | 7) + 1;
        }
        v25 = (char*)fw_memory_HeapManager_Allocate_alt1(
            fw_memory_g_heap_manager, v26, 16, 0);
        v33_.v33[1] = v24;
        v33_.v34 = v25;
        v33_.v33[0] = v26 | 1;
      }
      else {
        LOBYTE(v33_.v33[0]) = 2 * v23;
        v25 = (char*)v33_.v33 + 1;
        if (v23 == 0) {
        LABEL_59:
          v25[v24] = 0;
          CmdBtlUnit_e7de70_alt1((void*)((__int64)&v32), v0, (__int64)v33_.v33);
          if ((v33_.v33[0] & 1) != 0 && v33_.v34 != nullptr) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27,
                (__int64)v33_.v34);
          }
          if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            std___1___shared_weak_count___release_weak_alt2(v22);
          }
          goto LABEL_67;
        }
      }
      memcpy_alt1((__int64)v25, (__int64)v20, v24);
      goto LABEL_59;
    }
  LABEL_77:
    String_60a1d0_alt1();
  }
LABEL_67:
  if ((v35_.v35 & 1) != 0 && v35_.v37 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v35_.v37);
  }
  return std___1___shared_weak_count___release_weak_alt2(v1);
}

float game_f3ec50()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  float v12;
  __int64 v13;

  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
  v0 = *(_QWORD*)(GameData_2203490 + 888);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_2203490 + 880);
    v2 = *(_QWORD*)(GameData_2203490 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v3 == 0) {
      v10 = 0x1.0000000000000p-1f;
    LABEL_23:
      std___1___shared_weak_count___release_weak_alt1(v0),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      return v10;
    }
    if (v1 == 0) {
      v10 = 0x1.0000000000000p-1f;
    LABEL_21:
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v13 = v3;
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v13),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      goto LABEL_23;
    }
    v5 = *(_QWORD*)(v1 + 216);
    v4 = *(_QWORD*)(v1 + 224);
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v5 != 0) {
      v6 = v3;
      GameRoutine_e9f200(v5),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      v3 = v6;
      v8 = fmaxf(v7, 0x1.3333340000000p-1f);
      if ((*(_BYTE*)(v5 + 92) & (*(float*)(v5 + 88) < v8)) != 0) {
        v9 = *(float*)(v5 + 88);
      }
      else {
        v9 = v8;
      }
      if (v4 == 0) {
        goto LABEL_18;
      }
    }
    else {
      v9 = 0x1.0000000000000p-1f;
      if (v4 == 0) {
      LABEL_18:
        v12 = 0x0.0p+0f;
        if (v9 >= 0x0.0p+0f) {
          v12 = v9;
        }
        v10 = v12 + 0x1.0000000000000p-1f;
        goto LABEL_21;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v4),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(float, "s0", "=w"));
      v3 = v11;
    }
    goto LABEL_18;
  }
  return 0x1.0000000000000p-1f;
}

__int64 game_f3feb0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;

  v2 = *(_QWORD*)(*GameData_212ea58 + 880);
  v3 = *(_QWORD*)(*GameData_212ea58 + 888);
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  v4 = std___1___shared_weak_count_lock(v3);
  v5 = *(_QWORD*)(v2 + 320);
  v6 = v4;
  if (v5 != 0) {
    v7 = *(_QWORD*)(v2 + 312);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v5);
    if (v8 != 0) {
      v9 = (_QWORD*)(v7 + 8);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    else {
      v9 = ((_UNKNOWN**)0x8LL);
    }
    std___1___shared_weak_count___release_weak(v5);
  }
  else {
    v9 = ((_UNKNOWN**)0x8LL);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  if (*v9 != 0 && *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                                       8LL * *(unsigned __int8*)*v9) +
                            111LL) != 0) {
    GameRoutine_8b03f0(a1);
  }
  return std___1___shared_weak_count___release_weak(v3);
}

__int64 game_f422a0(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  float v3;
  float v4;
  float v5;
  __int64 result;
  __int128 v7;
  bool v8;
  float v9;

  v2 = (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                         160LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if ((*(_BYTE*)(a1 + 40) & 1) == 0) {
    v4 = fabsf(v2);
    goto LABEL_12;
  }
  v3 = *(float*)(a1 + 36);
  v4 = fabsf(v2);
  if (v3 <= 0x0.0p+0f) {
    if (v3 >= 0x0.0p+0f || (v3 = v4 + v3) <= 0x0.0p+0f) {
    LABEL_9:
      *(float*)(a1 + 36) = v3;
      if (v3 != 0x0.0p+0f) {
        goto LABEL_12;
      }
      goto LABEL_10;
    }
  }
  else {
    v3 = v3 - v4;
    if (v3 >= 0x0.0p+0f) {
      goto LABEL_9;
    }
  }
  *(_DWORD*)(a1 + 36) = 0;
LABEL_10:
  if (*(_BYTE*)(a1 + 28) == 1) {
    *(_BYTE*)(a1 + 28) = 0;
  }
LABEL_12:
  v5 = *(float*)(a1 + 32);
  if (v5 > 0x0.0p+0f) {
    v5 = v5 - v4;
    if (v5 >= 0x0.0p+0f) {
      goto LABEL_18;
    }
  LABEL_17:
    v5 = 0x0.0p+0f;
    goto LABEL_18;
  }
  if (v5 < 0x0.0p+0f) {
    v5 = v4 + v5;
    if (v5 > 0x0.0p+0f) {
      goto LABEL_17;
    }
  }
LABEL_18:
  *(float*)(a1 + 32) = v5;
  v7 = (__typeof__(v7)){0};
  result = GameRoutine_f42400(a1, &v7, &v9, &v8);
  if ((result & 1) != 0) {
    if (v8) {
      return game_fbb5a0(a1, &v7, v9 * 0x1.ca5dc20000000p+5f);
    }
  }
  else {
    if (*(_BYTE*)(a1 + 40) == 1) {
      *(_BYTE*)(a1 + 40) = 0;
    }
    if (*(_BYTE*)(a1 + 28) == 1) {
      *(_BYTE*)(a1 + 28) = 0;
    }
  }
  return result;
}

void game_f45e20(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  bool v13;
  _BOOL4 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  int v47;
  unsigned int v48;
  unsigned int v49;
  int v50;
  int v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  bool v57;
  char v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int16 v64;
  __int64 v65;
  __int64 v66;
  _QWORD* v67;

  v2 = GameData_212ea58;
  v3 = (_QWORD*)*GameData_212ea58;
  v4 = *(_QWORD*)(*GameData_212ea58 + 888);
  if (v4 != 0) {
    v5 = v3[110];
    v6 = *(_QWORD*)(*GameData_212ea58 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                              memory_order_relaxed);
    v7 = std___1___shared_weak_count_lock_alt1(v6);
    if (v7 != 0) {
      v8 = v5;
    }
    else {
      v8 = 0;
    }
    std___1___shared_weak_count___release_weak_alt2(v4);
    v9 = v3[113];
    if (v9 != 0) {
    LABEL_6:
      v10 = v3[112];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                memory_order_relaxed);
      v11 = std___1___shared_weak_count_lock_alt1(v9);
      if (v11 != 0) {
        v12 = v10;
      }
      else {
        v12 = 0;
      }
      std___1___shared_weak_count___release_weak_alt2(v9);
      v13 = v8 == 0;
      v14 = v12 != 0;
      if (v12 == 0) {
        v13 = true;
      }
      v15 = v8 == v12 || v13;
      if ((v15 & 1) == 0) {
        if (v7 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                    memory_order_relaxed);
        }
        v16 = a1[20];
        a1[19] = v8;
        a1[20] = v7;
        if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak_alt2(v16);
        }
        if (v11 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                    memory_order_relaxed);
        }
        v17 = a1[22];
        a1[21] = v12;
        a1[22] = v11;
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak_alt2(v17);
        }
      }
      LOBYTE(v9) = v15 ^ 1;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt2(v11);
      }
      if (v7 == 0) {
        goto LABEL_33;
      }
      goto LABEL_32;
    }
  }
  else {
    v7 = 0;
    v8 = 0;
    v9 = v3[113];
    if (v9 != 0) {
      goto LABEL_6;
    }
  }
  v14 = false;
  if (v7 != 0) {
  LABEL_32:
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak_alt2(v7);
      if (!v14) {
        goto LABEL_35;
      }
      goto LABEL_34;
    }
  }
LABEL_33:
  if (v14) {
  LABEL_34:
    *(_DWORD*)(*v2 + 1204) &= ~2u;
  }
LABEL_35:
  if ((v9 & 1) != 0) {
    goto LABEL_36;
  }
  v19 = *v2;
  v20 = *(_DWORD*)(*v2 + 1204);
  if ((v20 & 2) == 0) {
    goto LABEL_116;
  }
  v21 = *(_QWORD*)(v19 + 888);
  v67 = a1;
  *(_DWORD*)(v19 + 1204) = v20 & 0xFFFFFFFD;
  if (v21 != 0) {
    v22 = *(_QWORD*)(v19 + 880);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
    v23 = std___1___shared_weak_count_lock_alt1(v21);
    if (v23 != 0) {
      v24 = v22;
    }
    else {
      v24 = 0;
    }
    v65 = v24;
    v66 = v23;
    std___1___shared_weak_count___release_weak_alt2(v21);
  }
  else {
    v65 = 0;
    v66 = 0;
  }
  v25 = *(__int64**)(v19 + 840);
  v26 = *(__int64**)(v19 + 848);
  if (v25 == v26) {
    a1 = v67;
    v55 = v66;
    v58 = 0;
    goto LABEL_113;
  }
  v27 = 0;
  v28 = nullptr;
  v29 = 0;
  do {
    v30 = *(_QWORD*)(v19 + 888);
    if (v30 == 0) {
      if (*v25 == 0) {
        goto LABEL_49;
      }
      goto LABEL_59;
    }
    v31 = *(_QWORD*)(v19 + 880);
    v32 = *(_QWORD*)(v19 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                              memory_order_relaxed);
    v33 = std___1___shared_weak_count_lock_alt1(v32);
    v34 = *v25;
    if (v33 == 0) {
      std___1___shared_weak_count___release_weak_alt2(v30);
      if (v34 == 0) {
        goto LABEL_49;
      }
    LABEL_59:
      if ((unsigned __int64)v28 >= v27) {
        v37 = (unsigned __int64)v28 - v29;
        v38 = ((__int64)v28 - v29) >> 4;
        v39 = v38 + 1;
        if ((unsigned __int64)(v38 + 1) >> 60 != 0) {
          GameRoutine_e77e10_alt1();
        }
        if ((__int64)(v27 - v29) >> 3 > v39) {
          v39 = (__int64)(v27 - v29) >> 3;
        }
        if (v27 - v29 >= 0x7FFFFFFFFFFFFFF0LL) {
          v40 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v40 = v39;
        }
        if (v40 >> 60 != 0) {
          GameRoutine_60a210_alt1();
        }
        v41 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v40, 16, 0);
        v42 = (__int64*)(v41 + v37);
        *v42 = *v25;
        v43 = v25[1];
        v42[1] = v43;
        if (v43 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 8), 1u,
                                    memory_order_relaxed);
        }
        v44 = (__int64)&v42[-2 * v38];
        v27 = v41 + 16 * v40;
        v28 = v42 + 2;
        memcpy_alt1(v44, v29, v37);
        if (v29 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v29);
        }
        v29 = v44;
      }
      else {
        *v28 = *v25;
        v36 = v25[1];
        v28[1] = v36;
        if (v36 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                    memory_order_relaxed);
        }
        v28 += 2;
      }
      goto LABEL_49;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v35 = v33;
      (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
      std___1___shared_weak_count___release_weak_alt2(v35);
    }
    std___1___shared_weak_count___release_weak_alt2(v30);
    if (v31 != v34) {
      goto LABEL_59;
    }
  LABEL_49:
    v25 += 2;
  } while (v25 != v26);
  if (v28 == (__int64*)v29) {
    a1 = v67;
    v55 = v66;
    v58 = 0;
    if (v29 == 0) {
      goto LABEL_113;
    }
    goto LABEL_110;
  }
  nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
  v46 = game_map_MapRandom_instance__ptr[0];
  v47 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v48 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v49 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v46 + 4) = v47;
  v50 = (v49 >> 8) ^ (v48 >> 19) ^ v49 ^ v48;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v46 + 8) = v48;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v46 + 12) = v50;
  v51 = v50 & 0x7FFFFFFF;
  nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
  a1 = v67;
  v52 = (__int64*)(v29 +
                   16LL * (unsigned int)(v51 %
                                         (int)(((unsigned __int64)v28 - v29) >>
                                               4)));
  v54 = *v52;
  v53 = v52[1];
  if (v53 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                              memory_order_relaxed);
  }
  v55 = v66;
  v57 = v65 == 0 || v54 == 0 || v65 == v54;
  v58 = !v57;
  if (!v57) {
    if (v66 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v66 + 8), 1u,
                                memory_order_relaxed);
    }
    v59 = v67[20];
    v67[19] = v65;
    v67[20] = v66;
    if (v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
      std___1___shared_weak_count___release_weak_alt2(v59);
    }
    if (v53 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 8), 1u,
                                memory_order_relaxed);
    }
    v60 = v67[22];
    v67[21] = v54;
    v67[22] = v53;
    if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
      std___1___shared_weak_count___release_weak_alt2(v60);
    }
  }
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak_alt2(v53);
  }
  do {
    v61 = *(v28 - 1);
    if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
      std___1___shared_weak_count___release_weak_alt2(v61);
    }
    v28 -= 2;
  } while (v28 != (__int64*)v29);
  if (v29 != 0) {
  LABEL_110:
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, v29);
  }
LABEL_113:
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
    std___1___shared_weak_count___release_weak_alt2(v55);
    if ((v58 & 1) != 0) {
      goto LABEL_36;
    }
  LABEL_116:
    v18 = 4;
  }
  else {
    if ((v58 & 1) == 0) {
      goto LABEL_116;
    }
  LABEL_36:
    v18 = 1;
  }
  v63 = a1[1];
  if (v63 != 0) {
    while (1) {
      if (*(_BYTE*)v63 == 2) {
        if (*(_DWORD*)(v63 + 32) == v18) {
          v64 = *((_WORD*)a1 + 68);
          a1[2] = v63;
          *((_WORD*)a1 + 68) = v64 & 0xFF7F;
          return;
        }
      }
      else if (*(_BYTE*)v63 == 0) {
        return;
      }
      v63 += 64;
    }
  }
}

void game_f464a0(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  int v6;
  __int64 v7;
  __int16 v8;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_15;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160,
                                                           *((float*)&v5 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
  LABEL_13:
    v6 = 3;
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      goto LABEL_19;
    }
  }
  else {
  LABEL_15:
    v6 = 2;
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
      LABEL_19:
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == v6) {
            v8 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v7;
            *(_WORD*)(a1 + 136) = v8 & 0xFF7F;
            return;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          return;
        }
        v7 += 64;
      }
    }
  }
}

void game_f46660(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t v6;
  float32x4_t v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    __int64 v22;
    __int64 v23;
  } v22_;
  __int64 v24[2];
  __int64 v25[2];

  v2 = GameData_212ea58;
  v3 = *(_QWORD*)(a1 + 176);
  v4 = *GameData_212ea58;
  v22_.v22 = *(_QWORD*)(a1 + 168);
  v22_.v23 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  CmdbtlPartyNatives_e73070_alt1((_QWORD*)(v4 + 800), &v22_.v22);
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v22_.v23);
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0_alt1();
  }
  v5 = GameRoutine_eb9120_alt1((__int64)&GameData_2216780);
  if (v5 != 0) {
    LANES128(v6).n128_u64[0] = *(_QWORD*)(v5 + 96);
    LANES128(v6).n128_u32[2] = *(_DWORD*)(v5 + 104);
  }
  else {
    v6 = (__typeof__(v6)){0};
  }
  v7 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a1 + 168) + 112LL), v6);
  v8 = atan2f_alt2(LANES128(v7).n128_f32[0], LANES128(v7).n128_f32[2]);
  v9 = *(float*)(*(_QWORD*)(a1 + 168) + 132LL);
  *(float*)(a1 + 184) = v9;
  v10 = fmodf(
      (float)((float)(v8 * 0x1.ca5dc20000000p+5f) + 0x1.6800000000000p+7f) - v9,
      0x1.6800000000000p+8f);
  if (v10 >= 0x0.0p+0f) {
    v11 = v10 + 0x0.0p+0f;
  }
  else {
    v11 = (float)(v10 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
  }
  if (v11 > 0x1.6800000000000p+7f) {
    v11 = v11 + -0x1.6800000000000p+8f;
  }
  v12 = v9 + v11;
  if (v9 > v12) {
    v9 = v9 + -0x1.4000000000000p+2f;
    if (v9 >= v12) {
      goto LABEL_20;
    }
  LABEL_19:
    v9 = v12;
    goto LABEL_20;
  }
  if (v9 < v12) {
    v9 = v9 + 0x1.4000000000000p+2f;
    if (v9 > v12) {
      goto LABEL_19;
    }
  }
LABEL_20:
  v13 = fmodf(v9 + 0x1.6800000000000p+7f, 0x1.6800000000000p+8f);
  v14 = *(_QWORD*)(a1 + 168);
  v15 = v13 + -0x1.6800000000000p+7f;
  v16 = *(_QWORD*)(v14 + 304);
  *(_BYTE*)(v14 + 80) = 1;
  *(_QWORD*)(v14 + 296) = 0;
  *(_QWORD*)(v14 + 304) = 0;
  if (v15 < -0x1.6800000000000p+7f) {
    v15 = v15 + 0x1.6800000000000p+8f;
  }
  *(float*)(v14 + 132) = v15;
  *(float*)(v14 + 32) = v15;
  if (v16 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v16);
  }
  GameRoutine_e7bed0_alt1(v14, 1);
  CmdBtlUnit_e7df20_alt1(*(_QWORD*)(a1 + 168), 0, 0x1.0000000000000p+0f);
  CmdbtlPartyNatives_e9cce0_alt1(*v2);
  v17 = *v2;
  v18 = *(_QWORD*)(*v2 + 752);
  v19 = *(_QWORD*)(*v2 + 760);
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
  }
  v20 = *(_QWORD*)(v17 + 880);
  v21 = *(_QWORD*)(v17 + 888);
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
  }
  v25[0] = v18;
  v25[1] = v19;
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
  }
  v24[0] = v20;
  v24[1] = v21;
  if (v21 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                              memory_order_relaxed);
    GameHr_e7fde0(v17 + 16, v25, v24, 1, 0x1.99999a0000000p-2f, 0x0.0p+0f);
    std___1___shared_weak_count___release_weak_alt2(v21);
    if (v19 == 0) {
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  GameHr_e7fde0(v17 + 16, v25, v24, 1, 0x1.99999a0000000p-2f, 0x0.0p+0f);
  if (v19 != 0) {
  LABEL_32:
    std___1___shared_weak_count___release_weak_alt2(v19);
  }
LABEL_33:
  if (v21 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v21);
  }
  if (v19 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v19);
  }
}

void game_f469c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  _DWORD* v3;
  __int128 v4;
  unsigned int v5;
  __int128 v6;
  __int128 v7;
  int v8;
  __int128 v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  __int128 v13;
  int v14;
  unsigned int v15;
  struct {
    _QWORD v16[2];
    __int64 v17;
  } v16_;
  __int128 v18;
  __int128 v19;

  v1 = *(_QWORD*)(a1 + 152);
  if (*(_BYTE*)(v1 + 185) != 0) {
    v2 = *(_QWORD*)(v1 + 208);
    *(_BYTE*)(v1 + 185) = 0;
    if (v2 != 0) {
      v3 = *(_DWORD**)(v2 + 8);
      *(_DWORD*)(v1 + 112) = v3[76];
      *(_DWORD*)(v1 + 116) = v3[77];
      v4 = *(_OWORD*)(v1 + 112);
      v5 = v3[78];
      *(_QWORD*)(v1 + 96) = v4;
      *(_QWORD*)&v6 = v4;
      v14 = v4;
      v15 = v5;
      v7 = *(_OWORD*)(v1 + 96);
      *((_QWORD*)&v6 + 1) = v5;
      *((_QWORD*)&v7 + 1) = v5;
      *(_OWORD*)(v1 + 96) = v7;
      *(_OWORD*)(v1 + 112) = v6;
      *(_QWORD*)&v7 = (unsigned int)v4 | 0x4348000000000000LL;
      *(_QWORD*)&v6 = (unsigned int)v4 | 0xC2C8000000000000LL;
      *((_QWORD*)&v7 + 1) = v5;
      v19 = v7;
      *((_QWORD*)&v6 + 1) = v5;
      v18 = v6;
      GameRoutine_1085a10((void*)(v16_.v16), v2 + 160, &v19, &v18, 0);
      v8 = HIDWORD(v16_.v16[0]);
      *(_DWORD*)(v1 + 112) = v14;
      *(_DWORD*)(v1 + 116) = v8;
      v9 = *(_OWORD*)(v1 + 112);
      *(_DWORD*)(v1 + 100) = DWORD1(v9);
      *((_QWORD*)&v9 + 1) = v15;
      *(_OWORD*)(v1 + 112) = v9;
      GameRoutine_e7bed0_alt1(v1, 0);
    }
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v11 = (v10 & 8) != 0 ? 2 : 3;
    if ((v11 & v10) == 0) {
      goto LABEL_16;
    }
  }
  if (game_ProcFadeView_instance_ != 0) {
    v12 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v12 + 172) == *(float*)(v12 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v12 + 160) + 16LL))(v12 + 160);
    }
    else {
      v13 = *(_OWORD*)(v12 + 208);
    }
    if (*((float*)&v13 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v12 + 160) + 16LL))(
                        v12 + 160, *((float*)&v13 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
    LABEL_16:
      LOWORD(v16_.v16[0]) = 0;
      v16_.v16[1] = 0;
      v16_.v17 = 0;
      game_cmdbtl_Manager_UnitRelocationImpl((_QWORD*)*GameData_212ea58,
                                             (__int64)v16_.v16);
      if (v16_.v17 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v16_.v17);
      }
    }
  }
}

__int64 game_f4a180(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  int v9;
  bool v10;
  int v11;
  __int64 v12;
  _BYTE* v13;
  char v14;

  v1 = GameData_212ea58;
  if (*(int*)(*GameData_212ea58 + ((__int64)*(int*)(result + 152) << 7) +
              696) >= 1) {
    v2 = *(unsigned __int8*)(result + 156);
    v3 = result;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2222c88,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_2222c88) != 0) {
      GameData_2222a68 = 0;
      GameData_2222a70 = 0;
      GameData_2222a50 = 0;
      GameData_2222a78 = 0;
      GameData_2222a58 = (__int64)GameRoutine_f4a5e0;
      GameData_2222a60 = 0;
      GameData_2222a48 = 13;
      GameData_2222aa8 = 1;
      GameData_2222ac8 = 13;
      GameData_2222b28 = 1;
      GameData_2222b48 = 13;
      GameData_2222c08 = 13;
      GameData_2222a88 = 4;
      GameData_2222b08 = 4;
      GameData_2222a80 = 0;
      GameData_2222a90 = 0;
      GameData_2222a98 = 0;
      GameData_2222aa0 = 0;
      GameData_2222ab0 = 0;
      GameData_2222ab8 = 300;
      GameData_2222ac0 = 0;
      GameData_2222ad0 = 0;
      GameData_2222ad8 =
          (__int64)game_cmdbtl_anonymous_ProcSeqStock_StockCamera;
      GameData_2222b50 = 0;
      GameData_2222b58 = (__int64)ProcSeqStock_f4a980;
      GameData_2222ae0 = 0;
      GameData_2222ae8 = 0;
      GameData_2222af0 = 0;
      GameData_2222af8 = 0;
      GameData_2222b00 = 0;
      GameData_2222b18 = 0;
      GameData_2222b20 = 0;
      GameData_2222b10 = 0;
      GameData_2222b30 = 0;
      GameData_2222b38 = 300;
      GameData_2222b40 = 0;
      GameData_2222b88 = 14;
      GameData_2222bc8 = 14;
      GameData_2222b60 = 0;
      GameData_2222b68 = 0;
      GameData_2222b70 = 0;
      GameData_2222b78 = 0;
      GameData_2222b80 = 0;
      GameData_2222b90 = 0;
      GameData_2222b98 = (__int64)ProcSeqStock_f4ad30;
      GameData_2222ba0 = 0;
      GameData_2222ba8 = 0;
      GameData_2222bb0 = 0;
      GameData_2222bb8 = 0;
      GameData_2222bc0 = 0;
      GameData_2222bd0 = 0;
      GameData_2222bd8 = (__int64)ProcSeqStock_f4add0;
      GameData_2222be0 = 0;
      GameData_2222be8 = 0;
      GameData_2222bf0 = 0;
      GameData_2222bf8 = 0;
      GameData_2222c00 = 0;
      GameData_2222c10 = 0;
      GameData_2222c18 = (__int64)ProcSeqStock_f4aee0;
      GameData_2222c20 = 0;
      GameData_2222c28 = 0;
      GameData_2222c30 = 0;
      GameData_2222c38 = 0;
      GameData_2222c40 = 0;
      GameData_2222c48 = 0;
      GameData_2222c70 = 0;
      GameData_2222c78 = 0;
      GameData_2222c80 = 0;
      GameData_2222c68 = 0;
      GameData_2222c60 = 0;
      GameData_2222c58 = 0;
      GameData_2222c50 = 0;
      __cxa_guard_release(&GameData_2222c88);
    }
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        168, 16, 0);
    v5 = GameData_212c608[0];
    *(_QWORD*)(v4 + 88) = 0;
    *(_QWORD*)(v4 + 96) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = 0;
    *(_QWORD*)(v4 + 128) = 0;
    *(_WORD*)(v4 + 136) = 0;
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = "NULL";
    *(_QWORD*)(v4 + 32) = 0;
    v6 = (_QWORD*)(v4 + 32);
    *(_QWORD*)(v4 + 138) = 0;
    *(_QWORD*)(v4 + 144) = 0;
    *(_QWORD*)(v4 + 40) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 80) = 0;
    *(_QWORD*)v4 = v5 + 16;
    *(_QWORD*)(v4 + 8) = 0;
    game_ProcInst_Register();
    *(_QWORD*)(v4 + 160) = 0;
    *(_BYTE*)(v4 + 156) = v2;
    *(_QWORD*)v4 = game_cmdbtl_anonymous_ProcSeqStock_vtable;
    if ((unsigned int)v2 > 3) {
      v7 = 3;
    }
    else {
      v7 = GameData_1a83140[v2];
    }
    v8 = *v1;
    *(_DWORD*)(v4 + 152) = v7;
    v9 = *(_DWORD*)(v8 + (unsigned int)(v7 << 7) + 696);
    v10 = __OFSUB__(v9, 1);
    v11 = v9 - 1;
    if (v11 < 0 == v10) {
      *(_DWORD*)(v4 + 160) = v11;
    }
    v12 = *(_QWORD*)(v3 + 40);
    if (v12 != 0) {
      *(_QWORD*)(v12 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(v3 + 40);
    }
    *(_QWORD*)(v3 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "ProcSeqStock";
    *(_QWORD*)(v4 + 32) = v3;
    *(_DWORD*)(v4 + 140) = game_HashString32_alt1();
    *(_QWORD*)(v4 + 8) = &GameData_2222a48;
    *(_QWORD*)(v4 + 16) = &GameData_2222a48;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4);
    if ((result & 1) != 0 && (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v13 = (_BYTE*)*v6;
    v14 = *(_BYTE*)(*v6 + 138LL);
    if (v14 == 0) {
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)v13 + 64LL))(*v6);
      v14 = v13[138];
    }
    v13[138] = v14 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  return result;
}

void game_f5ab60(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  int v6;
  __int64 v7;
  __int16 v8;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_15;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160,
                                                           *((float*)&v5 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
  LABEL_13:
    v6 = 2;
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      goto LABEL_19;
    }
  }
  else {
  LABEL_15:
    v6 = 3;
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
      LABEL_19:
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == v6) {
            v8 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v7;
            *(_WORD*)(a1 + 136) = v8 & 0xFF7F;
            return;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          return;
        }
        v7 += 64;
      }
    }
  }
}

void game_f5b140(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  const char* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  _BYTE v38[16];
  struct {
    _QWORD v39[2];
    char* v40;
  } v39_;

  if ((GameRoutine_f5c790_alt1() & 1) == 0) {
    return;
  }
  v2 = GameData_2203490;
  v3 = *(_QWORD*)(GameData_2203490 + 640);
  v4 = *(_QWORD*)(GameData_2203490 + 648);
  if (v4 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
    if (v3 != 0) {
      goto LABEL_5;
    }
  }
  else if (v3 != 0) {
    goto LABEL_5;
  }
  v3 = *(_QWORD*)(v2 + 656);
  v12 = *(_QWORD*)(v2 + 664);
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt2(v12);
    }
  }
LABEL_5:
  v5 = *(_QWORD*)(v3 + 40);
  v6 = (__int64*)(v3 + 32);
  if (v5 == 0 || *(_QWORD*)(v5 + 8) == -1) {
    v8 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    v7 = *(_QWORD*)(v8 + 80);
    v5 = *(_QWORD*)(v8 + 88);
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  else {
    v7 = *v6;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
LABEL_10:
  if ((*(_DWORD*)(v3 + 48) & 0x80000000) != 0) {
    v11 = 0;
    v10 = 0;
    if (v5 == 0) {
      goto LABEL_26;
    }
  }
  else {
    v9 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(
                                   v3) +
                               40) +
                    16LL * *(int*)(v3 + 48));
    v11 = *v9;
    v10 = v9[1];
    if (v10 != 0 &&
        (atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak_alt2(v10);
      if (v5 == 0) {
        goto LABEL_26;
      }
    }
    else if (v5 == 0) {
      goto LABEL_26;
    }
  }
  v13 = std___1___shared_weak_count_lock_alt1(v5);
  if (v13 != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 392LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v10 == 0) {
        goto LABEL_31;
      }
    }
    else {
      v18 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak_alt2(v18);
      if (v10 == 0) {
        goto LABEL_31;
      }
    }
    goto LABEL_27;
  }
LABEL_26:
  v14 = (*(_QWORD*)0x188LL);
  if (v10 == 0) {
  LABEL_31:
    v16 = (*(_QWORD*)0x188LL);
    goto LABEL_32;
  }
LABEL_27:
  v15 = std___1___shared_weak_count_lock_alt1(v10);
  if (v15 == 0) {
    goto LABEL_31;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(v11 + 16) + 392LL);
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = v15;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt2(v17);
  }
LABEL_32:
  v19 = (const char*)GameRoutine_f64a20_alt1(*(_QWORD*)GameData_212cc98_alt1[0],
                                             v14, v16);
  if (v19 == nullptr) {
    if (v14 != 0 && v16 != 0 && (v29 = *(_QWORD*)(v14 + 288)) != 0 &&
        (v30 = GameRoutine_975940_alt1(v29)) != 0 &&
        (v31 = v30, (v32 = *(_QWORD*)(v16 + 288)) != 0) &&
        (v33 = GameRoutine_975940_alt1(v32)) != 0 &&
        (v34 = *(unsigned __int16*)(v31 + 312), *(_WORD*)(v31 + 312) != 0)) {
      v35 = (__int64*)(*(_QWORD*)(v31 + 320) + 8LL);
      while (1) {
        v36 = *v35;
        v35 += 2;
        if (v36 == v33) {
          break;
        }
        if (--v34 == 0) {
          goto LABEL_66;
        }
      }
      LOBYTE(v39_.v39[0]) = 22;
      strcpy((char*)v39_.v39 + 1, "Call_Senior");
      if (v10 == 0) {
        goto LABEL_38;
      }
    }
    else {
    LABEL_66:
      LOBYTE(v39_.v39[0]) = 8;
      strcpy((char*)v39_.v39 + 1, "Call");
      if (v10 == 0) {
        goto LABEL_38;
      }
    }
  LABEL_37:
    std___1___shared_weak_count___release_weak_alt2(v10);
    goto LABEL_38;
  }
  v20 = (__int64)v19;
  v21 = strlen_alt1(v19);
  if (v21 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v22 = v21;
  if (v21 >= 0x17) {
    if ((v21 | 7) == 0x17) {
      v37 = 26;
    }
    else {
      v37 = (v21 | 7) + 1;
    }
    v23 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v37, 16, 0);
    v39_.v39[1] = v22;
    v39_.v40 = v23;
    v39_.v39[0] = v37 | 1;
  }
  else {
    LOBYTE(v39_.v39[0]) = 2 * v21;
    v23 = (char*)v39_.v39 + 1;
    if (v21 == 0) {
      BYTE1(v39_.v39[0]) = 0;
      if (v10 == 0) {
        goto LABEL_38;
      }
      goto LABEL_37;
    }
  }
  memmove_alt1((__int64)v23, v20, v22);
  v23[v22] = 0;
  if (v10 != 0) {
    goto LABEL_37;
  }
LABEL_38:
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v5);
  }
  v24 = *(_QWORD*)(v3 + 40);
  if (v24 == 0 || *(_QWORD*)(v24 + 8) == -1) {
    v25 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    v24 = *(_QWORD*)(v25 + 88);
    if (v24 == 0) {
      goto LABEL_50;
    }
    v6 = (__int64*)(v25 + 80);
  }
  v26 = *v6;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                            memory_order_relaxed);
  v27 = std___1___shared_weak_count_lock_alt1(v24);
  std___1___shared_weak_count___release_weak_alt2(v24);
  if (v27 != 0 && v26 != 0) {
    CmdBtlUnit_e7dd50_alt1((void*)((__int64)v38), v26, (__int64)v39_.v39);
    GameRoutine_112180_alt1(a1 + 152, (__int64)v38);
    goto LABEL_48;
  }
  if (v27 != 0) {
  LABEL_48:
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak_alt2(v27);
    }
  }
LABEL_50:
  if ((v39_.v39[0] & 1) != 0 && v39_.v40 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, (__int64)v39_.v40);
  }
}

void game_f5bb00(__int64 a1)
{
  __int64 v2;
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
  __int64* v24;
  __int64* v25;
  __int64 v26;
  char v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v33;
  _BYTE v34[16];
  char v35;
  _BYTE v36[15];
  __int64 v37;

  if ((GameRoutine_f5c790_alt1() & 1) == 0) {
    return;
  }
  v2 = GameData_2203490;
  v3 = *(_QWORD*)(GameData_2203490 + 640);
  v4 = *(_QWORD*)(GameData_2203490 + 648);
  if (v4 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt2(v4);
    if (v3 != 0) {
      goto LABEL_5;
    }
  }
  else if (v3 != 0) {
    goto LABEL_5;
  }
  v3 = *(_QWORD*)(v2 + 656);
  v9 = *(_QWORD*)(v2 + 664);
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak_alt2(v9);
    }
  }
LABEL_5:
  if ((*(_DWORD*)(v3 + 48) & 0x80000000) != 0) {
    v7 = 0;
    v6 = 0;
    v8 = *(_QWORD*)(v3 + 40);
    if (v8 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v5 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(
                                   v3) +
                               40) +
                    16LL * *(int*)(v3 + 48));
    v7 = *v5;
    v6 = v5[1];
    if (v6 != 0 &&
        (atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt2(v6);
      v8 = *(_QWORD*)(v3 + 40);
      if (v8 == 0) {
        goto LABEL_19;
      }
    }
    else {
      v8 = *(_QWORD*)(v3 + 40);
      if (v8 == 0) {
        goto LABEL_19;
      }
    }
  }
  if (*(_QWORD*)(v8 + 8) != -1) {
    v10 = *(_QWORD*)(v3 + 32);
  LABEL_20:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_21;
  }
LABEL_19:
  v11 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
  v10 = *(_QWORD*)(v11 + 80);
  v8 = *(_QWORD*)(v11 + 88);
  if (v8 != 0) {
    goto LABEL_20;
  }
LABEL_21:
  if (v6 != 0 && (v12 = std___1___shared_weak_count_lock_alt1(v6)) != 0) {
    v13 = *(_QWORD*)(*(_QWORD*)(v7 + 16) + 392LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v8 == 0) {
        goto LABEL_31;
      }
    }
    else {
      v17 = v12;
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt2(v17);
      if (v8 == 0) {
        goto LABEL_31;
      }
    }
  }
  else {
    v13 = (*(_QWORD*)0x188LL);
    if (v8 == 0) {
    LABEL_31:
      v15 = (*(_QWORD*)0x188LL);
      goto LABEL_32;
    }
  }
  v14 = std___1___shared_weak_count_lock_alt1(v8);
  if (v14 == 0) {
    goto LABEL_31;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(v10 + 16) + 392LL);
  if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v16 = v14;
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    std___1___shared_weak_count___release_weak_alt2(v16);
  }
LABEL_32:
  if (v13 != 0 && v15 != 0 && (v18 = *(_QWORD*)(v13 + 288)) != 0 &&
      (v19 = GameRoutine_975940_alt1(v18)) != 0 &&
      (v20 = v19, (v21 = *(_QWORD*)(v15 + 288)) != 0) &&
      (v22 = GameRoutine_975940_alt1(v21)) != 0 &&
      (v23 = *(unsigned __int16*)(v20 + 312), *(_WORD*)(v20 + 312) != 0)) {
    v24 = &v37;
    v25 = (__int64*)(*(_QWORD*)(v20 + 320) + 8LL);
    while (1) {
      v26 = *v25;
      v25 += 2;
      if (v26 == v22) {
        break;
      }
      if (--v23 == 0) {
        goto LABEL_42;
      }
    }
    qmemcpy(v36, "Response_Senior", sizeof(v36));
    v27 = 30;
  }
  else {
  LABEL_42:
    v24 = (__int64*)&v36[8];
    *(_QWORD*)v36 = 0x65736E6F70736552LL;
    v27 = 16;
  }
  *(_BYTE*)v24 = 0;
  v35 = v27;
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v8);
  }
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v6);
  }
  if ((*(_DWORD*)(v3 + 48) & 0x80000000) != 0) {
    goto LABEL_59;
  }
  v28 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(
                                  v3) +
                              40) +
                   16LL * *(int*)(v3 + 48));
  v29 = v28[1];
  if (v29 == 0) {
    goto LABEL_59;
  }
  v30 = *v28;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak_alt2(v29);
  }
  v31 = std___1___shared_weak_count_lock_alt1(v29);
  std___1___shared_weak_count___release_weak_alt2(v29);
  if (v31 != 0 && v30 != 0) {
    CmdBtlUnit_e7dd50_alt1((void*)((__int64)v34), v30, (__int64)&v35);
    GameRoutine_112180_alt1(a1 + 152, (__int64)v34);
    goto LABEL_57;
  }
  if (v31 != 0) {
  LABEL_57:
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt2(v31);
    }
  }
LABEL_59:
  if ((v35 & 1) != 0 && v37 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v37);
  }
}

__n128 game_f86460(__int64 a1, int a2, _QWORD* a3)
{
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 i;
  int v10;
  __int64 (*v11)();
  __int64* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __n128 result;
  __int64 v21;
  __int64* v22;
  struct {
    __int64 v23[2];
    __int64 v24;
  } v23_;
  struct {
    _BYTE v25[24];
    int v26;
  } v25_;
  _BYTE* v27;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_WORD*)(a1 + 8) = 0;
  v4 = (_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 64) = 0;
  *(_WORD*)(a1 + 32) = 0;
  *(_DWORD*)(a1 + 56) = a2;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 88) = 0xFFFFFFFFLL;
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlEventTalkCallback_vtable;
  *(_QWORD*)(a1 + 96) = 0;
  v22 = (__int64*)(a1 + 96);
  if (v4 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(v4, a3[2], a3[1]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v6 = *a3;
      v7 = a3[2];
      v4[1] = a3[1];
      v4[2] = v7;
      *v4 = v6;
    }
  }
  v8 = a3[3];
  for (i = a3[4]; v8 != i; v8 += 32) {
    v25_.v25[0] = 0;
    v25_.v26 = -1;
    v10 = *(_DWORD*)(v8 + 24);
    if (v10 != -1) {
      v11 = GameData_1ff81d0[v10];
      v27 = v25_.v25;
      ((void (*)(_BYTE**, __int64))v11)(&v27, v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      v25_.v26 = v10;
    }
    GameRoutine_eaec10((__int64*)(a1 + 64), (__int64)v25_.v25),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v25_.v26 != -1) {
      ((void (*)(_BYTE**, _BYTE*))decltype_c81af0_ptr[v25_.v26])(&v27,
                                                                 v25_.v25),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v12 = a3 + 6;
  if (v22 != a3 + 6) {
    v13 = *(unsigned __int8*)v12;
    if ((*(_BYTE*)v22 & 1) != 0) {
      if ((v13 & 1) != 0) {
        v16 = (char*)a3[8];
      }
      else {
        v16 = (char*)a3 + 49;
      }
      if ((v13 & 1) != 0) {
        v17 = a3[7];
      }
      else {
        v17 = v13 >> 1;
      }
      SpineModel_64dde0(v22, (__int64)v16, v17),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if ((v13 & 1) != 0) {
      GameRoutine_64df20(v22, a3[8], a3[7]),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v14 = *v12;
      v15 = a3[8];
      *(_QWORD*)(a1 + 104) = a3[7];
      *(_QWORD*)(a1 + 112) = v15;
      *v22 = v14;
    }
  }
  if ((a3[9] & 1) != 0) {
    fw_text_String_CopyTerminated(v23_.v23, a3[11], a3[10]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v18 = a3[10];
    v19 = a3[11];
    v23_.v23[0] = a3[9];
    v23_.v23[1] = v18;
    v23_.v24 = v19;
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)a1 + 120LL))(a1, v23_.v23),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v23_.v23[0] & 1) != 0 && v23_.v24 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (_QWORD)(v23_.v24));
  }
  return result;
}

bool game_f86d10(__int64 a1, __int64* a2, char a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int128 v13;
  unsigned __int64 v14;
  __int128 v16;

  if ((a3 & 1) != 0) {
    v3 = *a2;
    v4 = *(unsigned __int8*)(*a2 + 24);
    v5 = *(_QWORD*)(*a2 + 32);
    if ((v4 & 1) == 0) {
      v5 = v4 >> 1;
    }
    if (v5 != 0) {
      v6 = *(_QWORD*)(v3 + 40);
      v7 = v3 + 25;
      *(_QWORD*)&v16 = 0;
      if ((v4 & 1) != 0) {
        v8 = v6;
      }
      else {
        v8 = v7;
      }
      v9 = strtof(v8, &v16);
      if (*(_BYTE*)v16 == 0) {
        goto LABEL_12;
      }
      if (*(_BYTE*)v16 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + v16) != 0) {
          v9 = 0.5f;
        }
      LABEL_12:
        v10 = game_ProcFadeView_instance_;
        if (game_ProcFadeView_instance_ == 0) {
          return true;
        }
      LABEL_15:
        v11 = v10 + ((unsigned __int64)*(unsigned __int8*)(v10 + 480) << 6);
        if (*(float*)(v11 + 172) == *(float*)(v11 + 168)) {
          v12 = v11 + 160;
          if (LANES128_OF(((__n128 (*)(unsigned __int64)) *
                           (_QWORD*)(*(_QWORD*)(v11 + 160) + 16LL))(v11 + 160))
                  .n128_f32[3] == 1.0f) {
            if (*(float*)(v12 + 12) == *(float*)(v12 + 8)) {
              (*(void (**)(unsigned __int64))(*(_QWORD*)v12 + 16LL))(v12);
            }
            else {
              v13 = *(_OWORD*)(v12 + 48);
            }
            v16 = v13;
          }
        }
        game_809dc0(0.0f);
        if (game_ProcFadeView_instance_ == 0) {
          return true;
        }
        game_809ba0(v9);
        goto LABEL_24;
      }
    }
    v9 = 0.5f;
    v10 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ == 0) {
      return true;
    }
    goto LABEL_15;
  }
LABEL_24:
  if (game_ProcFadeView_instance_ != 0) {
    v14 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    return *(float*)(v14 + 172) == *(float*)(v14 + 168);
  }
  return true;
}

bool game_f86e80(__int64 a1, __int64* a2, char a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  unsigned __int64 v10;
  _BYTE* v12;

  if ((a3 & 1) != 0) {
    v3 = *a2;
    v4 = *(unsigned __int8*)(*a2 + 24);
    v5 = *(_QWORD*)(*a2 + 32);
    if ((v4 & 1) == 0) {
      v5 = v4 >> 1;
    }
    if (v5 != 0) {
      v6 = *(_QWORD*)(v3 + 40);
      v7 = v3 + 25;
      v12 = nullptr;
      if ((v4 & 1) != 0) {
        v8 = v6;
      }
      else {
        v8 = v7;
      }
      v9 = strtof(v8, &v12);
      if (*v12 == 0) {
      LABEL_12:
        if (game_ProcFadeView_instance_ == 0) {
          return true;
        }
      LABEL_15:
        game_809dc0(v9);
        goto LABEL_16;
      }
      if (*v12 == 102) {
        if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v12) != 0) {
          v9 = 0.5f;
        }
        goto LABEL_12;
      }
    }
    v9 = 0.5f;
    if (game_ProcFadeView_instance_ == 0) {
      return true;
    }
    goto LABEL_15;
  }
LABEL_16:
  if (game_ProcFadeView_instance_ != 0) {
    v10 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    return *(float*)(v10 + 172) == *(float*)(v10 + 168);
  }
  return true;
}

bool game_f86f50(__int64 a1, __int64* a2, char a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  int v10;
  int v11;
  unsigned __int64 v12;
  _BYTE* v14;

  if ((a3 & 1) == 0) {
    goto LABEL_22;
  }
  v3 = *a2;
  v4 = *(unsigned __int8*)(*a2 + 24);
  v5 = *(_QWORD*)(*a2 + 32);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v5 != 0) {
    v6 = *(_QWORD*)(v3 + 40);
    v7 = v3 + 25;
    v14 = nullptr;
    if ((v4 & 1) != 0) {
      v8 = v6;
    }
    else {
      v8 = v7;
    }
    v9 = strtof(v8, &v14);
    if (*v14 == 0) {
      goto LABEL_14;
    }
    if (*v14 == 102) {
      if (*((_BYTE*)((_UNKNOWN*)0x0LL) + (_QWORD)v14) != 0) {
        v9 = 0.5f;
      }
      goto LABEL_14;
    }
  }
  v9 = 0.5f;
LABEL_14:
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
      (((v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v11 = 2)
           : (v11 = 3),
       (v11 & v10) == 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      return true;
    }
  }
  else if (game_ProcFadeView_instance_ == 0) {
    return true;
  }
  game_809dc0(v9);
LABEL_22:
  if (game_ProcFadeView_instance_ != 0) {
    v12 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    return *(float*)(v12 + 172) == *(float*)(v12 + 168);
  }
  return true;
}

__int64 game_f87cd0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  bool v12;
  __int64 (***v13)();
  __int64 (**v14)();
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    _QWORD* v19;
    __int64 v20;
  } v19_;
  struct {
    __int64 (**v21)();
    __int64* v22;
    __int64* v23;
    __int64 v24;
    __int64* v25;
  } v21_;
  __int64 v26;

  if (GameData_2203490 != 0) {
    if (!GameRoutine_f875c0(a1, a2, (__int64*)(a1 + 24))) {
      return 0;
    }
    if (*(_QWORD*)(a1 + 112) != 0) {
      v26 = *(_QWORD*)(a1 + 112);
      v19_.v19 = nullptr;
      v19_.v20 = 0;
      v21_.v21 = GameData_1fec898;
      v21_.v22 = &v26;
      v21_.v25 = (__int64*)&v21_.v21;
      v21_.v23 = (__int64*)&v19_.v19;
      CmdbtlPartyNatives_e9a800((_QWORD*)GameData_2203490, (__int64)&v21_.v21);
      if (v21_.v25 == (__int64*)&v21_.v21) {
        v3 = 32;
      }
      else {
        if (v21_.v25 == nullptr) {
        LABEL_10:
          v5 = (__int64)v19_.v19;
          if (v19_.v19 != nullptr) {
            v6 = *(_QWORD*)(a1 + 56);
            if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
              v6 = *(_BYTE*)(a1 + 48) >> 1;
            }
            if (v6 == 19 &&
                ((*(_BYTE*)(a1 + 48) & 1) != 0 ? (v7 = *(__int64**)(a1 + 64))
                                               : (v7 = (__int64*)(a1 + 49)),
                 (v8 = *v7, v9 = v7[1], v10 = *(__int64*)((char*)v7 + 11),
                  v8 == 0x323144425F44494DLL)
                     ? (v11 = v9 == 0x5F32306D5F37305FLL)
                     : (v11 = false),
                 v11 ? (v12 = v10 == 0x3130305F32306D5FLL) : (v12 = false),
                 v12)) {
              GameHr_e7ca80((__int64)v19_.v19, 0x0.0p+0f);
            }
            else {
              LOWORD(v21_.v21) = 0;
              v21_.v24 = 3212836864LL;
              v13 = (__int64 (***)(void))(v19_.v19 + 47);
              if (&v21_.v21 != v19_.v19 + 47) {
                if ((*(_BYTE*)v13 & 1) != 0) {
                  GameRoutine_64df20(&v21_.v21, v19_.v19[49], v19_.v19[48]);
                }
                else {
                  v14 = *v13;
                  v15 = (__int64*)v19_.v19[48];
                  v16 = v19_.v19[49];
                  v21_.v21 = v14;
                  v21_.v22 = v15;
                  v21_.v23 = (__int64*)v16;
                }
              }
              v21_.v24 = 0x3F800000BF800000LL;
              CmdBtlUnit_e7dc80(v5 + 488, (__int64*)&v21_.v21);
              if (((unsigned __int8)v21_.v21 & 1) != 0 && v21_.v23 != nullptr) {
                v17 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v17 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                    (__int64)v21_.v23);
              }
            }
          }
          v18 = v19_.v20;
          if (v19_.v20 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak_alt2(v18);
          }
          *(_QWORD*)(a1 + 112) = 0;
          return 1;
        }
        v3 = 40;
      }
      (*(void (**)(__int64))(*v21_.v25 + v3))((__int64)v21_.v25);
      goto LABEL_10;
    }
  }
  return 1;
}

void game_f8eb50(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float* v4;
  long double v7;
  float v8;
  float v9;
  int v10;
  int v11;
  float32x4_t* v12;
  unsigned __int64 v13;
  __int128 v14;
  float v15;
  _BOOL4 v16;
  float v17;
  float v18;
  float32x4_t v19;
  int8x16_t v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  long double v31;
  float v32;

  if (GameData_21c6978 != 0) {
    v1 = *(_QWORD*)(GameData_21c6978 + 32);
    if (*(_QWORD*)(GameData_21c6978 + 24) != v1) {
      v2 = *(_QWORD*)(v1 - 8);
      if (v2 != 0) {
        v4 = *(float**)(v2 + 24);
        v3 = *(_QWORD*)(v2 + 32);
        if (v3 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                                    memory_order_relaxed);
        }
        if (v4 == nullptr || *(_BYTE*)(a1 + 8) == 0) {
          goto LABEL_49;
        }
        v7 = ((long double (*)(float*)) * (_QWORD*)(*(_QWORD*)v4 + 40LL))(v4);
        v31 = v7;
        HIDWORD(v7) = 0;
        v9 = v4[21];
        v8 = v4[22];
        v30 = *(float32x4_t*)&v7;
        if (game_ProcGameSkipView_instance_ != 0 &&
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
          v10 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
          v11 = (v10 & 8) != 0 ? 2 : 3;
          if ((v11 & v10) == 0) {
            v16 = true;
            v12 = (float32x4_t*)a1;
            goto LABEL_43;
          }
        }
        v12 = (float32x4_t*)a1;
        if (game_ProcFadeView_instance_ != 0 &&
            (*(float*)((v13 =
                            game_ProcFadeView_instance_ +
                            ((unsigned __int64)*(
                                 unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
                             << 6)) +
                       172) != *(float*)(v13 + 168)
                 ? (float32x4_t*)(v14 = *(_OWORD*)(v13 + 208))
                 : ((*(void (**)(unsigned __int64))(*(_QWORD*)(v13 + 160) +
                                                    16LL))(v13 + 160),
                    v12 = (float32x4_t*)a1),
             *((float*)&v14 + 3) == 0x1.0000000000000p+0f)) {
          LODWORD(v15) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                      (_QWORD*)(*(_QWORD*)(v13 + 160) + 16LL))(
                                         v13 + 160, *((float*)&v14 + 3)))
                             .n128_u32[3];
          v16 = true;
          v12 = (float32x4_t*)a1;
          if (v15 == 0x1.0000000000000p+0f || (*(_BYTE*)(a1 + 80) & 1) == 0) {
          LABEL_43:
            if (LANES128(v12[5]).n128_u8[0] == 1) {
              LANES128(v12[4]).n128_f32[0] = v9;
              LANES128(v12[3]).n128_u64[0] = *(_QWORD*)&v31;
              v28 = v12[3];
              LANES128(v28).n128_u64[1] = DWORD2(v31);
            }
            else {
              v28 = v30;
              LANES128(v12[4]).n128_f32[0] = v9;
              LANES128(v12[5]).n128_u8[0] = 1;
            }
            v12[3] = v28;
            LANES128(v12[4]).n128_f32[1] = v8;
            if (v16) {
              GameRoutine_f8eee0(a1);
              v12 = (float32x4_t*)a1;
              if (*(_BYTE*)(a1 + 80) != 1) {
                *(float*)(a1 + 64) = v9;
                *(float*)(a1 + 68) = v8;
                *(_BYTE*)(a1 + 80) = 1;
                *(float32x4_t*)(a1 + 48) = v30;
                if (v3 == 0) {
                  return;
                }
              LABEL_50:
                if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
                  std___1___shared_weak_count___release_weak(v3);
                }
                return;
              }
            }
            LANES128(v12[4]).n128_f32[0] = v9;
            LANES128(v12[4]).n128_f32[1] = v8;
            LANES128(v12[3]).n128_u64[0] = *(_QWORD*)&v31;
            v29 = v12[3];
            LANES128(v29).n128_u64[1] = DWORD2(v31);
            v12[3] = v29;
          LABEL_49:
            if (v3 == 0) {
              return;
            }
            goto LABEL_50;
          }
        }
        else if (LANES128(v12[5]).n128_u8[0] != 1) {
          v16 = true;
          goto LABEL_43;
        }
        if (*GameData_212d168 == 1) {
          v17 = 0x1.e000000000000p+5f;
        }
        else {
          v17 = 0x1.e000000000000p+4f;
        }
        v18 = 0x1.4000000000000p+2f;
        if (*GameData_212d168 == 1) {
          v18 = 0x1.4000000000000p+4f;
        }
        v19 = vsubq_f32(v12[3], v30);
        v20 = vmulq_f32(v19, v19);
        LANES128(v20).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
                .n64_u64[0];
        v32 =
            LANES64_OF(vsqrt_f32(vpadd_f32(
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]))))
                .n64_f32[0] /
            v18;
        v21 = fmodf(LANES128(v12[4]).n128_f32[0] - v9, 0x1.6800000000000p+8f);
        if (v21 >= 0x0.0p+0f) {
          v22 = v21 + 0x0.0p+0f;
        }
        else {
          v22 = (float)(v21 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
        }
        if (v22 > 0x1.6800000000000p+7f) {
          v22 = v22 + -0x1.6800000000000p+8f;
        }
        v23 = fabsf(v22) / v17;
        v24 = fmodf(*(float*)(a1 + 68) - v8, 0x1.6800000000000p+8f);
        v12 = (float32x4_t*)a1;
        v25 = fmaxf(v23, 0x0.0p+0f);
        if (v24 >= 0x0.0p+0f) {
          v26 = v24 + 0x0.0p+0f;
        }
        else {
          v26 = (float)(v24 + 0x0.0p+0f) + 0x1.6800000000000p+8f;
        }
        v27 = fminf(v25, 0x1.0000000000000p+0f);
        if (v26 > 0x1.6800000000000p+7f) {
          v26 = v26 + -0x1.6800000000000p+8f;
        }
        v16 = (float)((float)((float)(fminf(fmaxf(v32, 0x0.0p+0f),
                                            0x1.0000000000000p+0f) +
                                      0x0.0p+0f) +
                              v27) +
                      fminf(fmaxf(fabsf(v26) / v17, 0x0.0p+0f),
                            0x1.0000000000000p+0f)) >= 0x1.0000000000000p+0f;
        goto LABEL_43;
      }
    }
  }
}

void game_f917e0(__int64 a1)
{
  __int64 v2;
  __int128 v3;
  __int128 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  bool v18;
  char* v19;
  char* v20;
  char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v33;
  float v34;
  float v35;
  __int64 v36;
  float v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v42;
  __int64 v43;
  float v44;
  float v45;
  float v46;
  __int64 v47;
  atomic_ullong* v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  float32x4_t* v53;
  float32x4_t v54;
  unsigned __int64 v55;
  __int64 v56;
  float32x4_t v57;
  __int128 v58;
  __int64 v59;
  __int64 v60;
  struct {
    __int64 v61;
    __int64 v62;
  } v61_;
  __int64 v63[2];
  __int64 v64;
  struct {
    unsigned __int64 v65;
    char* v66;
  } v65_;

  game_f92170(a1);
  v2 = *(_QWORD*)(GameData_21f3cb0 + 960);
  if (v2 != 0) {
    *(_DWORD*)(a1 + 176) = *(_DWORD*)v2;
    *(_DWORD*)(a1 + 180) = *(_DWORD*)(v2 + 4);
    v3 = *(_OWORD*)(a1 + 176);
    *((_QWORD*)&v3 + 1) = *(unsigned int*)(v2 + 8);
    *(_OWORD*)(a1 + 176) = v3;
    *(_DWORD*)(a1 + 192) = *(_DWORD*)(v2 + 16);
    *(_DWORD*)(a1 + 196) = *(_DWORD*)(v2 + 20);
    v4 = *(_OWORD*)(a1 + 192);
    *((_QWORD*)&v4 + 1) = *(unsigned int*)(v2 + 24);
    *(_OWORD*)(a1 + 192) = v4;
    v5 = *(_QWORD*)(v2 + 45);
    *(_QWORD*)(a1 + 216) = *(_QWORD*)(v2 + 40);
    v6 = *(_QWORD*)(v2 + 32);
    *(_QWORD*)(a1 + 221) = v5;
    *(_QWORD*)(a1 + 208) = v6;
  }
  v7 = *(unsigned __int8*)(a1 + 152);
  v8 = *(_QWORD*)(a1 + 168);
  v9 = a1 + 153;
  v10 = (v7 & 1) == 0;
  v11 = v7 >> 1;
  if (v10) {
    v12 = v11;
  }
  else {
    v12 = *(_QWORD*)(a1 + 160);
  }
  if (v10) {
    v13 = v9;
  }
  else {
    v13 = v8;
  }
  v14 = v12 + 12;
  if (v12 + 12 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  if (v14 > 0x16) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v17, 16,
                                              0);
    v65_.v65 = v12 + 12;
    v65_.v66 = (char*)v16;
    v64 = v17 | 1;
    v15 = v17 | 1;
  }
  else {
    v15 = 2 * v14;
    v16 = 0;
    v65_.v65 = 0;
    v65_.v66 = nullptr;
    v64 = (unsigned __int8)(2 * v14);
  }
  v18 = (v15 & 1) == 0;
  if ((v15 & 1) != 0) {
    v19 = (char*)v16;
  }
  else {
    v19 = (char*)&v64 + 1;
  }
  *(_QWORD*)v19 = 0x83E3A982E39583E3LL;
  *((_DWORD*)v19 + 2) = -1971068024;
  if (v18) {
    v20 = (char*)&v65_.v65 + 5;
  }
  else {
    v20 = (char*)(v16 + 12);
  }
  if (v12 != 0) {
    memmove_alt1((__int64)v20, v13, v12);
  }
  v20[v12] = 0;
  if ((v64 & 1) != 0) {
    v21 = v65_.v66;
  }
  else {
    v21 = (char*)&v64 + 1;
  }
  if ((v64 & 1) != 0) {
    v22 = v65_.v65;
  }
  else {
    v22 = (unsigned __int64)(unsigned __int8)v64 >> 1;
  }
  if (v22 != 0) {
    v23 = *(__int64**)(GameData_21ec7c0 + 24);
    v24 = *(__int64**)(GameData_21ec7c0 + 32);
    while (1) {
      if (v23 == v24) {
        goto LABEL_67;
      }
      v25 = *v23;
      v26 = *(unsigned __int8*)(*v23 + 320);
      v27 = *(_QWORD*)(*v23 + 328);
      if ((v26 & 1) == 0) {
        v27 = v26 >> 1;
      }
      if (v22 == v27) {
        v28 = (v26 & 1) != 0 ? *(_QWORD*)(v25 + 336) : v25 + 321;
        if (memcmp_alt1((__int64)v21, v28, v22) == 0) {
          break;
        }
      }
      v23 += 2;
    }
    v29 = v23[1];
    if (v29 == 0) {
      goto LABEL_67;
    }
    v30 = v23[1];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v29 + 16), 1u,
                              memory_order_relaxed);
    v31 = std___1___shared_weak_count_lock_alt1(v30);
    std___1___shared_weak_count___release_weak_alt2(v29);
    if (v31 == 0) {
      goto LABEL_67;
    }
    v63[0] = v25;
    v63[1] = v31;
    v33 = *(_QWORD*)GameData_212dbf0[0];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_efbb60(v33, v63, 1);
    std___1___shared_weak_count___release_weak_alt2(v31);
    v34 = 0x0.0p+0f;
    v35 = 0x0.0p+0f;
    v36 = *(_QWORD*)(GameData_21ec7c0 + 80);
    v37 = 0x0.0p+0f;
    if (v36 != 0) {
      v38 = *(_QWORD*)(GameData_21ec7c0 + 72);
      v39 = *(_QWORD*)(GameData_21ec7c0 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                memory_order_relaxed);
      v40 = std___1___shared_weak_count_lock_alt1(v39);
      std___1___shared_weak_count___release_weak_alt2(v36);
      if (v40 != 0 && v38 != 0) {
        v42 = *(_QWORD*)(*(_QWORD*)(v38 + 24) + 16LL);
        v43 = *(_QWORD*)(*(_QWORD*)(v25 + 24) + 16LL);
        v37 = *(float*)(v42 + 292) - *(float*)(v43 + 292);
        v35 = *(float*)(v42 + 296) - *(float*)(v43 + 296);
        goto LABEL_50;
      }
      if (v40 != 0) {
      LABEL_50:
        if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
          std___1___shared_weak_count___release_weak_alt2(v40);
        }
      }
    }
    v44 = (float)(PSEUDO_UNFUSED(v35 * v35)) + (float)(v37 * v37);
    if (v44 > 0x0.0p+0f) {
      if (v37 != 0x0.0p+0f || v35 != 0x0.0p+0f) {
        v45 = sqrtf(v44);
        v37 = v37 / v45;
        v35 = v35 / v45;
      }
      v34 = atan2f_alt2(v37, v35) * 0x1.ca5dc00000000p+5f;
    }
    v46 = *(float*)(*(_QWORD*)(v25 + 24) + 528LL);
    v47 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 112, 16,
                                              0);
    *(_QWORD*)(v47 + 8) = 0;
    v48 = (atomic_ullong*)(v47 + 8);
    *(_QWORD*)(v47 + 16) = 0;
    v49 = v47;
    v50 = GameData_212f840[0];
    *(_QWORD*)(v47 + 72) = 0;
    *(_QWORD*)(v47 + 80) = 0;
    *(_QWORD*)(v47 + 96) = 0;
    *(_QWORD*)(v47 + 104) = 0;
    *(_QWORD*)(v47 + 88) = 0;
    *(_QWORD*)(v47 + 56) = 0;
    *(_QWORD*)(v47 + 64) = 0;
    *(_QWORD*)(v47 + 40) = 0;
    *(_QWORD*)(v47 + 48) = 0;
    *(_DWORD*)(v47 + 76) = 1067030938;
    *(_DWORD*)(v47 + 80) = 1109393408;
    *(_QWORD*)v47 = v50 + 2;
    *(_QWORD*)(v47 + 32) = 0;
    v51 = v47 + 32;
    v52 = *(_QWORD*)(v25 + 24);
    v53 = *(float32x4_t**)(*(_QWORD*)(v52 + 8) + 240LL);
    if (v53 != nullptr) {
      v54 = v53[3];
    }
    else {
      LODWORD(v55) = 0;
      *((float*)&v55 + 1) = *(float*)(v52 + 544) * 0x1.99999a0000000p-1f;
      v54 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v52 + 16) + 560LL),
                      COERCE_AS(float32x4_t, v55));
    }
    *(float*)(v47 + 88) = v34;
    v56 = GameData_21f3cb0;
    v61_.v61 = v51;
    v61_.v62 = v49;
    *(_DWORD*)(v49 + 56) = 1106247680;
    *(_DWORD*)(v49 + 64) = 1090519040;
    *(_DWORD*)(v49 + 48) = 0x40000000;
    *(_BYTE*)(v49 + 68) = 1;
    *(_BYTE*)(v49 + 92) = 1;
    v57 = vaddq_f32(v54, COERCE_AS(float32x4_t, GameData_1a82e70));
    *(_QWORD*)(v49 + 32) = LANES128(v57).n128_u64[0];
    v58 = *(_OWORD*)(v49 + 32);
    *((_QWORD*)&v58 + 1) = LANES128(v57).n128_u32[2];
    *(float*)(v49 + 52) = v46 + 0x1.0000000000000p+1f;
    *(_OWORD*)(v49 + 32) = v58;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                              memory_order_relaxed);
    game_zview_d20430(v56, &v61_.v61, 1);
    v59 = v61_.v62;
    if (v61_.v62 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v61_.v62 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
      std___1___shared_weak_count___release_weak_alt2(v59);
    }
    if (atomic_fetch_add(v48, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
      std___1___shared_weak_count___release_weak_alt2(v49);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt2(v31);
    }
  }
LABEL_67:
  if ((v64 & 1) != 0 && v65_.v66 != nullptr) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, (__int64)v65_.v66);
  }
}

void game_f9ce00(__int64 a1)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  unsigned __int64 v4;
  __int128 v5;
  int v6;
  __int64 v7;
  __int16 v8;

  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3) {
    v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    v3 = (v2 & 8) != 0 ? 2 : 3;
    if ((v3 & v2) == 0) {
      goto LABEL_13;
    }
  }
  if (game_ProcFadeView_instance_ == 0) {
    goto LABEL_15;
  }
  v4 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v4 + 172) == *(float*)(v4 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160);
  }
  else {
    v5 = *(_OWORD*)(v4 + 208);
  }
  if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160,
                                                           *((float*)&v5 + 3)))
              .n128_f32[3] == 0x1.0000000000000p+0f) {
  LABEL_13:
    v6 = 3;
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      goto LABEL_19;
    }
  }
  else {
  LABEL_15:
    v6 = 2;
    v7 = *(_QWORD*)(a1 + 8);
    if (v7 != 0) {
      while (1) {
      LABEL_19:
        if (*(_BYTE*)v7 == 2) {
          if (*(_DWORD*)(v7 + 32) == v6) {
            v8 = *(_WORD*)(a1 + 136);
            *(_QWORD*)(a1 + 16) = v7;
            *(_WORD*)(a1 + 136) = v8 & 0xFF7F;
            return;
          }
        }
        else if (*(_BYTE*)v7 == 0) {
          return;
        }
        v7 += 64;
      }
    }
  }
}

unsigned __int8* game_f9f860(unsigned __int8* result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  unsigned __int8* v8;
  unsigned __int8* v9;
  _BOOL4 v10;
  int v11;
  __int64 v12;

  if (result != nullptr) {
    v1 = *(__int64**)(GameData_21ca020 + 64);
    v2 = *(__int64**)(GameData_21ca020 + 72);
    if (v1 == v2) {
    LABEL_5:
      if (game_GameModeData_instance_ != 0) {
        v5 = *(_QWORD*)(game_GameModeData_instance_ + 24);
        if (v5 != 0) {
          v6 = *(unsigned __int8*)(v5 + 88);
          v7 = *(unsigned __int8*)(v5 + 89);
          while (*(unsigned __int8*)(v5 + 88) == v6 &&
                 *(unsigned __int8*)(v5 + 89) == v7) {
            v8 = *(unsigned __int8**)(v5 + 136);
            if (v8 != nullptr && *(_BYTE*)(v5 + 32) == 0) {
              return (unsigned __int8*)(result == v8);
            }
            v5 = *(_QWORD*)(*(_QWORD*)(v5 + 24) + 16LL);
            if (v5 == 0) {
              break;
            }
          }
        }
      }
      v8 = nullptr;
      return (unsigned __int8*)(result == v8);
    }
    else {
      while (1) {
        v4 = *v1++;
        v3 = v4;
        if (*(unsigned __int8**)(v4 + 56) == result) {
          break;
        }
        if (v1 == v2) {
          goto LABEL_5;
        }
      }
      v12 = v3;
      result = (unsigned __int8*)GameSideStoryData_12b56c0(
          *(_QWORD*)GameData_212c7b8[0], &v12);
      if (result != nullptr) {
        v9 = *(unsigned __int8**)(*(_QWORD*)result + 24LL);
        v10 = *v9 == v9[2] && v9[1] == v9[3];
        v11 = result[8];
        if (v11 != 2) {
          v10 = false;
        }
        if (v11 == 3) {
          return (_BYTE*)(((_UNKNOWN*)0x0LL) + 1);
        }
        else {
          return (unsigned __int8*)v10;
        }
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_fa4b80(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int16* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v18;
  __int64 v19;
  int v20;
  int v22;
  __int64 v24;
  __int64 v25;
  _BYTE v26[24];

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v2 = (__int16*)game_gmap_GmapClock_instance_;
  if (game_gmap_GmapClock_instance_ != 0) {
    if (*(__int16*)(game_gmap_GmapClock_instance_ + 22) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
            *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
        0) {
      goto LABEL_22;
    }
    v26[13] = 0;
    v26[0] = 24;
    *(_DWORD*)&v26[9] = -1785993844;
    *(_QWORD*)&v26[1] = 0xA1E8B194E7AA87E8LL;
    GameRoutine_7a8220_alt1(a1, v26);
    v3 = (__int64*)fw_memory_g_heap_manager_ptr;
    if ((v26[0] & 1) != 0 && *(_QWORD*)&v26[16] != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, *(__int64*)&v26[16]);
    }
    v5 = fw_memory_HeapManager_Allocate_alt1(*v3, 32, 16, 0);
    *(_BYTE*)(v5 + 27) = 0;
    *(_QWORD*)v26 = 33;
    *(_QWORD*)&v26[8] = 27;
    *(_QWORD*)&v26[16] = v5;
    *(_DWORD*)(v5 + 23) = -1181292905;
    *(_QWORD*)v5 = 0xA1E8B194E7AA87E8LL;
    *(_QWORD*)(v5 + 8) = 0xE9AE81E3958BE58CLL;
    *(_QWORD*)(v5 + 16) = 0x9781E39481E38E81LL;
    GameRoutine_7a8220_alt1(a1, v26);
    if ((v26[0] & 1) != 0 && *(_QWORD*)&v26[16] != 0) {
      v6 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v3 + v6, *(__int64*)&v26[16]);
    }
    v26[13] = 0;
    v26[0] = 24;
    *(_DWORD*)&v26[9] = -1719474794;
    *(_QWORD*)&v26[1] = 0xBAE68DBBE8B280E9LL;
    GameRoutine_7a8220_alt1(a1, v26);
    if ((v26[0] & 1) != 0 && *(_QWORD*)&v26[16] != 0) {
      v7 = 128;
      if (*(_QWORD*)(*v3 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v3 + v7, *(__int64*)&v26[16]);
    }
    v2 = (__int16*)game_gmap_GmapClock_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
    LABEL_22:
      if (v2[11] * v2[10] * v2[12] == 0 || game_GameModeData_instance_ == 0 ||
          *(_DWORD*)(game_GameModeData_instance_ + 60) != 1 ||
          *(_DWORD*)(game_GameModeData_instance_ + 64) != 12) {
        goto LABEL_65;
      }
      v26[0] = 12;
      v26[7] = 0;
      *(_DWORD*)&v26[1] = -425810457;
      *(_WORD*)&v26[5] = -16466;
      GameRoutine_7a8220_alt1(a1, v26);
      if ((v26[0] & 1) != 0 && *(_QWORD*)&v26[16] != 0) {
        v8 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, *(__int64*)&v26[16]);
      }
      v2 = (__int16*)game_gmap_GmapClock_instance_;
      if (game_gmap_GmapClock_instance_ != 0) {
      LABEL_65:
        v9 = v2[10];
        v10 = v2[11];
        v11 = v2[12];
        if (v10 * v9 * v11 != 0) {
          v12 = *(__int64**)(GameData_21ca020 + 64);
          v13 = *(_QWORD*)(GameData_21ca020 + 72) - (_QWORD)v12;
          if ((int)((unsigned __int64)v13 >> 3) >= 1) {
            v14 = (int)(v13 >> 3);
            if (v14 <= 1) {
              v14 = 1;
            }
            while (1) {
              v16 = *v12++;
              v15 = v16;
              if (v16 != 0 && game_GameModeData_instance_ != 0) {
                v18 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
                if (*(_BYTE*)(game_GameModeData_instance_ + 15) != 0 &&
                    ((*(unsigned __int8*)(v15 + 144) >> (v18 - 1)) & 1) != 0) {
                  v19 = *(_QWORD*)(v15 + 24);
                  v20 = *(
                      unsigned __int8*)(v19 +
                                        4LL *
                                            *(unsigned __int8*)(game_GameModeData_instance_ +
                                                                15) +
                                        4);
                  if (v20 <= v10 &&
                      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
                    v22 = *(unsigned __int8*)(v19 + 4 * v18 + 5);
                    if (v20 != v10 || v22 <= v11) {
                      break;
                    }
                  }
                }
              }
              if (--v14 == 0) {
                goto LABEL_56;
              }
            }
            v26[7] = 0;
            v26[0] = 12;
            *(_DWORD*)&v26[1] = -459889435;
            *(_WORD*)&v26[5] = -25156;
            GameRoutine_7a8220_alt1(a1, v26);
            if ((v26[0] & 1) != 0 && *(_QWORD*)&v26[16] != 0) {
              v24 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v24 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v24,
                  *(__int64*)&v26[16]);
            }
          }
        }
      }
    }
  }
LABEL_56:
  if (*(_QWORD*)(GameData_21f3d10 + 200) != 0 && DungeonController_f5f760()) {
    v26[22] = 0;
    v26[0] = 42;
    *(_QWORD*)&v26[1] = 0x83E3A382E39583E3LL;
    *(_QWORD*)&v26[9] = 0xE38983E3AB83E3BCLL;
    *(_QWORD*)&v26[14] = 0xAB83E3AD82E38983LL;
    GameRoutine_7a8220_alt1(a1, v26);
    if ((v26[0] & 1) != 0 && *(_QWORD*)&v26[16] != 0) {
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, *(__int64*)&v26[16]);
    }
  }
}

void game_fa7fe0(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = *a1;
  if (*a1 == 0) {
    return;
  }
  v2 = a1[1];
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 == v2) {
    goto LABEL_22;
  }
  v5 = (_QWORD*)(v2 - 64);
  do {
    v7 = (_QWORD*)v5[4];
    if (v5 == v7) {
      v8 = 32;
    }
    else {
      if (v7 == nullptr) {
        goto LABEL_10;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  LABEL_10:
    v9 = (_QWORD*)*(v5 - 2);
    if (v5 - 6 == v9) {
      v10 = 32;
      goto LABEL_14;
    }
    if (v9 != nullptr) {
      v10 = 40;
    LABEL_14:
      (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
    }
    if ((*(_BYTE*)(v5 - 10) & 1) != 0) {
      v11 = *(v5 - 8);
      if (v11 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v12, v11);
      }
    }
    v6 = v5 - 10;
    v5 -= 18;
  } while (v6 != (_QWORD*)v1);
  v13 = *a1;
  a1[1] = v1;
  v1 = v13;
  if (v13 != 0) {
  LABEL_22:
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v4 + v14, v1);
  }
}

__attribute__((swiftcall)) void game_fb1fe0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            char a4)
{

#pragma clang fp contract(off)
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  float32x4_t v5;
  float32x4_t v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v22;
  unsigned __int32 v23;
  char v24;
  char v25;
  unsigned __int32 v26;
  float32x4_t v27;
  __int128 v28;
  __int128 v29;
  __int64 v30;
  float32x4_t* v31;
  float32x4_t* v32;
  float32x4_t* v33;
  float32x4_t v34;
  __int32 v35;
  float32x4_t v36;
  __int64 v37;
  float32x4_t v38;
  float32x4_t v39;
  unsigned __int64 v40;
  char v41;
  char v42;
  char v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x2_t v46;
  struct {
    float32x4_t* v47;
    float32x4_t* v48;
    __int64 v49;
  } v47_;
  struct {
    _QWORD v50[4];
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    unsigned __int32 v56;
    char v57;
    char v58;
  } v50_;

  v5 = *a2;
  v6 = *a3;
  v50_.v50[3] = 0;
  v8 = *(_QWORD*)(a1 + 24);
  LOBYTE(v50_.v55) = 0;
  BYTE4(v50_.v52) = 0;
  LOBYTE(v50_.v53) = 0;
  LOBYTE(v50_.v51) = 0;
  v50_.v57 = a4;
  v10 = *(_QWORD*)(v8 + 312);
  v9 = *(_QWORD*)(v8 + 320);
  v50_.v58 = 1;
  v11 = *(_QWORD*)(v8 + 288);
  v12 = *(_QWORD*)(v8 + 296);
  v47_.v48 = nullptr;
  v47_.v49 = 0;
  v47_.v47 = nullptr;
  *(_OWORD*)v50_.v50 = LANES128(v5).n128_u64[0];
  v50_.v50[2] = LANES128(v6).n128_u64[0];
  v50_.v54 = v10;
  v50_.v55 = v9;
  *(_QWORD*)&v13 = LANES128(v5).n128_u64[0];
  *(_QWORD*)&v14 = LANES128(v6).n128_u64[0];
  v15 = *(_QWORD*)(v8 + 304);
  v50_.v51 = v11;
  *((_QWORD*)&v14 + 1) = LANES128(v6).n128_u32[2];
  *((_QWORD*)&v13 + 1) = LANES128(v5).n128_u32[2];
  LANES128(v6).n128_u32[0] = *(_DWORD*)(v8 + 528);
  v50_.v52 = v12;
  v50_.v53 = v15;
  v50_.v56 = LANES128(v6).n128_u32[0];
  *(_OWORD*)v50_.v50 = v13;
  *(_OWORD*)&v50_.v50[2] = v14;
  v16 = *GameData_212ee30[0];
  v17 = *(_QWORD**)(*GameData_212ee30[0] + 56);
  v18 = *(_QWORD**)(*GameData_212ee30[0] + 64);
  if (v17 == v18) {
  LABEL_10:
    v23 = LANES128(v5).n128_u32[1];
    v24 = 0;
    v25 = 0;
    v26 = LANES128(v5).n128_u32[2];
    LANES128(v27).n128_u64[0] = 0;
    LANES128(v27).n128_u32[2] = 0;
  }
  else {
    while (1) {
      v22 = *v17;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v17 + 32LL))(*v17) & 1) != 0 &&
          ((v50_.v58 & 1) != 0 || *(_QWORD*)(v16 + 8) != v22) &&
          ((*(__int64 (**)(__int64, _QWORD*, float32x4_t**))(
               *(_QWORD*)v22 + 24LL))(v22, v50_.v50, &v47_.v47) &
           1) != 0) {
        break;
      }
      if (++v17 == v18) {
        v5 = *a2;
        goto LABEL_10;
      }
    }
    v31 = v47_.v47;
    v32 = v47_.v48;
    if ((unsigned __int64)((char*)v47_.v48 - (char*)v47_.v47) >= 0x11) {
      if (&v47_.v47[1] == v47_.v48) {
        v37 = (__int64)v47_.v47;
      }
      else {
        do {
          v33 = v31;
          v34 = v31[1];
          ++v31;
          v35 = LANES128(v33[1]).n128_i32[1];
          LANES128(*(v33)).n128_u32[0] = LANES128(v34).n128_u32[0];
          LANES128(*(v33)).n128_u32[1] = v35;
          v36 = *v33;
          LANES128(v36).n128_u64[1] = LANES128(v33[1]).n128_u32[2];
          *v33 = v36;
        } while (&v33[2] != v32);
        v37 = (__int64)v47_.v47;
      }
      v47_.v48 = v31;
      v32 = v31;
      v31 = (float32x4_t*)v37;
    }
    v5 = *a2;
    LANES128(v27).n128_u64[0] = 0;
    LANES128(v27).n128_u32[2] = 0;
    v23 = HIDWORD(LANES128(*(a2)).n128_u64[0]);
    v26 = LANES128(*(a2)).n128_u64[1];
    if (v31 == v32) {
      v24 = 0;
    LABEL_34:
      v25 = 0;
    }
    else {
      while (1) {
        v38 = *v31++;
        v39 = v38;
        v40 = LANES64_OF(vmovn_s32(vceqq_f32(v38, *a3))).n64_u64[0];
        v41 = v40;
        v42 = BYTE2(v40);
        v43 = BYTE4(v40);
        v44 = vsubq_f32(v38, v5);
        if ((v42 & 1) != 0) {
          v25 = v43;
        }
        else {
          v25 = 0;
        }
        v45 = vmulq_f32(v44, v44);
        if ((v41 & 1) == 0) {
          v25 = 0;
        }
        LANES64(v46).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
                .n64_u64[0];
        v24 = (LANES64_OF(vpadd_f32(v46, v46)).n64_f32[0] >=
               (float)((float)(*(float*)(*(_QWORD*)(a1 + 24) + 528LL) *
                               0x1.0000000000000p-1f) *
                       (float)(*(float*)(*(_QWORD*)(a1 + 24) + 528LL) *
                               0x1.0000000000000p-1f))) |
              v25;
        if ((v24 & 1) != 0) {
          break;
        }
        if (v31 == v32) {
          goto LABEL_34;
        }
      }
      v27 = v39;
    }
  }
  *(_QWORD*)(a5 + 32) = 0;
  *(_QWORD*)(a5 + 40) = 0;
  *(_DWORD*)(a5 + 32) = LANES128(v5).n128_u32[0];
  *(_DWORD*)(a5 + 36) = v23;
  v28 = *(_OWORD*)(a5 + 32);
  *(_BYTE*)a5 = v24 & 1;
  *(_QWORD*)(a5 + 16) = 0;
  *(_QWORD*)(a5 + 24) = 0;
  *((_QWORD*)&v28 + 1) = v26;
  *(_BYTE*)(a5 + 1) = v25 & 1;
  *(_OWORD*)(a5 + 32) = v28;
  if ((v24 & 1) != 0) {
    *(_QWORD*)(a5 + 16) = LANES128(v27).n128_u64[0];
    v29 = *(_OWORD*)(a5 + 16);
    *((_QWORD*)&v29 + 1) = LANES128(v27).n128_u32[2];
    *(_OWORD*)(a5 + 16) = v29;
  }
  if (v47_.v47 != nullptr) {
    v47_.v48 = v47_.v47;
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v30, (__int64)v47_.v47);
  }
}

__attribute__((swiftcall)) void game_fb22c0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            char a4)
{

#pragma clang fp contract(off)
  _BYTE* a5 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  __int64 v12;
  __int64* v13;
  int v14;
  unsigned int v15;
  int v16;
  float v17;
  char v18;
  __int64* v19;
  float v20;
  __int64 v21;
  float32x4_t v22;
  float32x4_t v23;
  int8x16_t v24;
  __int64 v25;
  unsigned __int32 v26;
  float32x4_t* v27;
  float32x4_t v28;
  int8x16_t v29;
  __int128 v30;
  float32x4_t v33;
  float32x4_t v34;
  float v35;
  float32x4_t v36;
  float32x4_t v37;
  float32x4_t v38;
  struct {
    _QWORD v39[10];
    char v40;
    char gap193_[63];
    char v41;
  } v39_;

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  v8 = vsubq_f32(*a2, *a3);
  LANES128(v8).n128_u32[1] = 0;
  v9 = vmulq_f32(v8, v8);
  LANES128(v9).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v9, v9, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v9).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u64[0];
  LANES128(v9).n128_u64[1] = LANES128(v9).n128_u64[0];
  LODWORD(v35) =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u32[0];
  v10 = vrsqrteq_f32(v9);
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
  v34 = vbicq_s8(
      vmulq_f32(v8, vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v9, v11)))),
      vceqzq_f32(v9));
  v12 = *(_QWORD*)GameData_212dbb8[0];
  v13 = GameData_212ebb0[0];
  v14 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)a3,
                           *(_QWORD*)GameData_212dbb8[0] + 64LL),
  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
  *a5 = 0;
  a5[16] = 0;
  v15 = 1;
  v16 = v14;
  v17 = 0x1.fffffe0000000p+127f;
  v18 = 0;
  v33 = vmulq_n_f32(v34, v35);
  v19 = GameData_212ebd0[0];
  do {
    v36 = vaddq_f32(*a3, vmulq_n_f32(v33, (float)v15 / 0x1.4000000000000p+4f));
    v37 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a82e80));
    v38 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a838e0));
    collision_670c60((void*)((__int64)v39_.v39), &v38, &v37, 1),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
    if ((v39_.v40 & 1) != 0) {
      v21 = *v13;
      LANES128(v22).n128_u64[0] = v39_.v39[0];
      LANES128(v22).n128_u64[1] = LODWORD(v39_.v39[1]);
      v36 = v22;
      if (v16 ==
          (unsigned int)GameRoutine_f71d40(v21, (__int64)&v36, v12 + 64)) {
        v23 = vsubq_f32(v36, *a3);
        v24 = vmulq_f32(v23, v23);
        LANES128(v24).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v24, v24, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0])))
                .n64_f32[0] >= 0x1.2000000000000p+3f) {
          v25 = *v19;
          v37 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a82e80));
          v38 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a838e0));
          game_zview_d163f0((void*)(v39_.v39), v25, &v38, &v37,
                            0x1000000000000LL, 0, 0x1.cccccc0000000p-2f),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          if ((v39_.v41 & 1) == 0) {
            game_zview_d163f0((void*)(v39_.v39), *v19, &v36, a3,
                              0x1000000000000LL, 0, 0x1.cccccc0000000p-2f),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            if ((v39_.v41 & 1) == 0) {
              game_zview_d163f0((void*)(v39_.v39), *v19, a3, &v36,
                                0x1000000000000LL, 0, 0x1.cccccc0000000p-2f),
                  v20 = COERCE_AS(__typeof__(v20),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              if ((v39_.v41 & 1) == 0) {
                game_fb1fe0((void*)((__int64)v39_.v39), a1, &v36, a3, 1),
                    v20 = COERCE_AS(__typeof__(v20),
                                    PSEUDO_REGISTER(float, "s0", "=w"));
                if (LOBYTE(v39_.v39[0]) == 1 &&
                    ((v26 = LANES128(v36).n128_u32[2], (a4 & 1) == 0)
                         ? (v27 = a3)
                         : (v27 = a2),
                     v28 = vsubq_f32(*v27, v36),
                     LANES128(v28).n128_u32[1] = vmuls_lane_f32(
                         0x1.0000000000000p+2f,
                         COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]), 1),
                     v29 = vmulq_f32(v28, v28),
                     LANES128(v29).n128_u64[0] =
                         LANES64_OF(
                             vadd_f32(
                                 COERCE_AS(float32x2_t,
                                           LANES128_OF(vextq_s8(v29, v29, 8u))
                                               .n128_u64[0]),
                                 COERCE_AS(float32x2_t,
                                           LANES128(v29).n128_u64[0])))
                             .n64_u64[0],
                     (v20 = LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v29).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v29).n128_u64[0])))
                                .n64_f32[0]) < v17)) {
                  if ((v18 & 1) != 0) {
                    *(_QWORD*)a5 = LANES128(v36).n128_u64[0];
                    v30 = *(_OWORD*)a5;
                    *((_QWORD*)&v30 + 1) = v26;
                    *(_OWORD*)a5 = v30;
                  }
                  else {
                    *(float32x4_t*)a5 = v36;
                  }
                  v18 = 1;
                }
                else {
                  v20 = v17;
                }
                v17 = v20;
              }
            }
          }
        }
      }
    }
    ++v15;
  } while (v15 != 21);
  a5[16] = v18;
}

void game_fb78c0(__int64 a1)
{

#pragma clang fp contract(off)
  float v1;
  float v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  unsigned __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;

  v1 = *(float*)(a1 + 88);
  v3 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f);
  if (v1 > 0x0.0p+0f) {
    v1 = v1 - v3;
    if (v1 >= 0x0.0p+0f) {
      goto LABEL_7;
    }
  LABEL_6:
    *(_DWORD*)(a1 + 88) = 0;
    goto LABEL_8;
  }
  if (v1 < 0x0.0p+0f) {
    v1 = v1 + v3;
    if (v1 > 0x0.0p+0f) {
      goto LABEL_6;
    }
  }
LABEL_7:
  *(float*)(a1 + 88) = v1;
  if (v1 > 0x0.0p+0f) {
    return;
  }
LABEL_8:
  v4 = *(_QWORD**)(a1 + 8);
  v5 = *(_QWORD**)(a1 + 16);
  if (v4 == v5) {
    v6 = 0;
    v7 = nullptr;
    v8 = 0;
  LABEL_33:
    v19 = *(char**)(a1 + 32);
    v20 = *(char**)(a1 + 40);
    if ((unsigned __int64)(v20 - v19) <= 0x20 && v19 != v20) {
      while (1) {
        if ((GameRoutine_fb7e20_alt1((_QWORD*)a1, v19) & 1) != 0) {
          if ((unsigned __int64)v7 >= v8) {
            v47 = (unsigned __int64)v7 - v6;
            v48 = ((__int64)v7 - v6) >> 4;
            v49 = v48 + 1;
            if ((unsigned __int64)(v48 + 1) >> 60 != 0) {
              goto LABEL_93;
            }
            if ((__int64)(v8 - v6) >> 3 > v49) {
              v49 = (__int64)(v8 - v6) >> 3;
            }
            if (v8 - v6 >= 0x7FFFFFFFFFFFFFF0LL) {
              v50 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v50 = v49;
            }
            if (v50 >> 60 != 0) {
              goto LABEL_92;
            }
            v51 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v50, 16, 0);
            v52 = (_QWORD*)(v51 + v47);
            *v52 = *(_QWORD*)v19;
            v53 = *((_QWORD*)v19 + 1);
            v52[1] = v53;
            if (v53 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v53 + 16), 1u,
                                        memory_order_relaxed);
            }
            v54 = (__int64)&v52[-2 * v48];
            v8 = v51 + 16 * v50;
            v7 = v52 + 2;
            memcpy_alt1(v54, v6, v47);
            if (v6 != 0) {
              v55 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v55 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v6);
            }
            v6 = v54;
          }
          else {
            *v7 = *(_QWORD*)v19;
            v46 = *((_QWORD*)v19 + 1);
            v7[1] = v46;
            if (v46 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16), 1u,
                                        memory_order_relaxed);
            }
            v7 += 2;
          }
        }
        v19 += 16;
        if (v19 == v20) {
          goto LABEL_38;
        }
      }
    }
    goto LABEL_38;
  }
  v6 = 0;
  v7 = nullptr;
  v8 = 0;
  do {
    if ((GameRoutine_fb7e20_alt1((_QWORD*)a1, v4) & 1) != 0) {
      if ((unsigned __int64)v7 >= v8) {
        v10 = (unsigned __int64)v7 - v6;
        v11 = ((__int64)v7 - v6) >> 4;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 60 != 0) {
        LABEL_93:
          GameRoutine_cb48b0_alt1();
        }
        if ((__int64)(v8 - v6) >> 3 > v12) {
          v12 = (__int64)(v8 - v6) >> 3;
        }
        if (v8 - v6 >= 0x7FFFFFFFFFFFFFF0LL) {
          v13 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v13 = v12;
        }
        if (v13 >> 60 != 0) {
          goto LABEL_92;
        }
        v14 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v13, 16, 0);
        v15 = (_QWORD*)(v14 + v10);
        *v15 = *v4;
        v16 = v4[1];
        v15[1] = v16;
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
        }
        v17 = (__int64)&v15[-2 * v11];
        v8 = v14 + 16 * v13;
        v7 = v15 + 2;
        memcpy_alt1(v17, v6, v10);
        if (v6 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v6);
        }
        v6 = v17;
      }
      else {
        *v7 = *v4;
        v9 = v4[1];
        v7[1] = v9;
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                    memory_order_relaxed);
        }
        v7 += 2;
      }
    }
    v4 += 2;
  } while (v4 != v5);
  if (v7 == (_QWORD*)v6) {
    goto LABEL_33;
  }
LABEL_38:
  if (v7 == (_QWORD*)v6) {
    if (v7 == nullptr) {
      return;
    }
    v31 = 0;
  }
  else {
    nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
    v22 = game_map_MapRandom_instance__ptr[0];
    v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL));
    v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                     (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
    v25 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
          (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
    *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
        *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
    *((_DWORD*)v22 + 1) = v23;
    v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22) = v24;
    *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4) = v26;
    v27 = v26 & 0x7FFFFFFF;
    nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
    v28 = (__int64*)(v6 +
                     16LL * (unsigned int)(v27 %
                                           (int)(((unsigned __int64)v7 - v6) >>
                                                 4)));
    v29 = v28[1];
    if (v29 != 0 && (v30 = std___1___shared_weak_count_lock_alt1(v29)) != 0) {
      v31 = *v28;
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v32 = v30;
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak_alt2(v32);
      }
    }
    else {
      v31 = 0;
    }
    do {
      v33 = *(v7 - 1);
      if (v33 != 0) {
        std___1___shared_weak_count___release_weak_alt2(v33);
      }
      v7 -= 2;
    } while (v7 != (_QWORD*)v6);
  }
  if (v6 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v6);
  }
  if (v31 != 0) {
    *(_DWORD*)(a1 + 88) = 1065353216;
    v36 = *(_QWORD**)(a1 + 72);
    v35 = *(_QWORD*)(a1 + 80);
    v37 = *(_QWORD*)(v31 + 264);
    *(_QWORD*)(a1 + 56) = v37;
    if ((unsigned __int64)v36 >= v35) {
      v39 = *(_QWORD*)(a1 + 64);
      v40 = (char*)v36 - v39;
      v41 = ((__int64)v36 - v39) >> 3;
      v42 = v41 + 1;
      if ((unsigned __int64)(v41 + 1) >> 61 != 0) {
        GameRoutine_65c760_alt1();
      }
      v43 = v35 - v39;
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
        if (v44 >> 61 != 0) {
        LABEL_92:
          GameRoutine_60a210_alt1();
        }
        v45 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
      }
      else {
        v45 = 0;
      }
      v56 = v45 + 8 * v44;
      v57 = (unsigned __int64)v36 - v39;
      v58 = (__int64)&v40[v45 + -8 * v41];
      *(_QWORD*)&v40[v45] = v37;
      v38 = (__int64)&v40[v45 + 8];
      memcpy_alt1(v58, v39, v57);
      *(_QWORD*)(a1 + 64) = v58;
      *(_QWORD*)(a1 + 72) = v38;
      *(_QWORD*)(a1 + 80) = v56;
      if (v39 != 0) {
        v59 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v59 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v39);
      }
    }
    else {
      *v36 = v37;
      v38 = (__int64)(v36 + 1);
    }
    *(_QWORD*)(a1 + 72) = v38;
    Character_cafca0_alt1((void*)((__int64)&v60), v31);
  }
}

void game_fb9500(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  int v3;
  bool v6;
  int v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  bool v17;
  __int64 v18;
  bool v19;
  int v20;
  struct {
    __int64 v21;
    __int64 v22;
  } v21_;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;
  float v25[5];
  __int64 v26;
  int v27;
  struct {
    __int64 v28;
    void* v29;
    float v30;
  } v28_;

  v1 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  v2 = *(unsigned __int8*)(v1 + 160);
  if (*(_BYTE*)(v1 + 160) == 0) {
    GameRoutine_8123d0_alt1();
  }
  v3 = *(_DWORD*)(v1 + 164);
  if (v2 == 9 || v3 == 3) {
    v6 = false;
    v7 = 9;
    LOBYTE(v2) = 9;
  }
  else if (v3 == 2) {
    v28_.v29 = &GameData_1a95d15;
    v28_.v28 = game_HashString((__int64)&GameData_1a95d15);
    if (game_GameModeData_instance_ != 0 &&
        (v8 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v28_.v28)) != 0) {
      v7 = 8;
      v6 = (signed __int32)*(_DWORD*)(v8 + 32) > 0;
    }
    else {
      v6 = false;
      v7 = 8;
    }
  }
  else if ((unsigned int)(v2 - 2) >= 7) {
    v7 = 0;
    v6 = false;
  }
  else {
    v6 = false;
    v7 = (unsigned __int8)(v2 - 1);
  }
  *(_BYTE*)(a1 + 160) = v2;
  v9 = (_BYTE*)(a1 + 160);
  *(_BYTE*)(a1 + 172) = v6;
  v10 = game_GameModeData_instance_;
  *(_DWORD*)(a1 + 164) = v3;
  *(_DWORD*)(a1 + 168) = v7;
  if (v10 != 0) {
    v11 = v10 + 168;
  }
  else {
    v11 = 0;
  }
  *(_QWORD*)(a1 + 176) = v11;
  GameRoutine_fb48a0((void*)(&v28_.v28), GameData_21f3ca0, a1 + 160);
  v27 = 1109393408;
  LODWORD(v25[2]) = (_DWORD)v28_.v29;
  v25[3] = 0x1.8000000000000p+1f;
  v26 = 0x40F0000000000000LL;
  LODWORD(v25[0]) = v28_.v28;
  v25[1] = *((float*)&v28_.v28 + 1) + 0x1.6666660000000p+1f;
  v25[4] = v28_.v30;
  v12 = (__int64*)GameData_212dc60[0];
  game_hub_cdf140((void*)(&v23_.v23), *(_QWORD*)GameData_212dc60[0],
                  (__int64)v25, 1);
  if (v23_.v24 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v23_.v24);
  }
  v13 = *v12;
  *((float*)&v26 + 1) = *((float*)&v26 + 1) + -0x1.99999a0000000p-3f;
  game_hub_cdf420((void*)(&v21_.v21), v13, (__int64)v25, 0x1.4000000000000p+3f,
                  0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
  if (v21_.v22 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v21_.v22);
  }
  *(_QWORD*)(a1 + 200) = *(_QWORD*)(a1 + 192);
  v14 = *(_DWORD*)(a1 + 164);
  if (v14 == 1) {
    if (*v9 != 0 && *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 176) + 8LL) +
                            216LL * (unsigned __int8)*v9 + 432) > 1) {
    LABEL_32:
      *(_DWORD*)(a1 + 184) = 1065353216;
      *(_BYTE*)(a1 + 188) = 1;
      goto LABEL_34;
    }
    ProcHubSeqObeliskCleared_fba300_alt1((__int64*)(a1 + 192), 3);
    v14 = *(_DWORD*)(a1 + 164);
  }
  if (v14 == 2 && (GameVariable_82e3a0(2) & 1) != 0) {
    v28_.v29 = &GameData_1af6166;
    v28_.v28 = game_HashString((__int64)&GameData_1af6166);
    if (game_GameModeData_instance_ != 0) {
      v15 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v28_.v28);
      if (v15 != 0 && *(_DWORD*)(v15 + 32) != 0) {
        goto LABEL_32;
      }
    }
    v28_.v29 = &GameData_1af6166;
    v28_.v28 = game_HashString((__int64)&GameData_1af6166);
    game_VariableManager_SetFlag((__int64)&v28_.v28, 1);
    ProcHubSeqObeliskCleared_fba300_alt1((__int64*)(a1 + 192), 3);
  }
LABEL_34:
  v16 = *(_DWORD*)(a1 + 164);
  v17 = v16 == 1 && *(_BYTE*)(a1 + 160) == 7;
  if (v17 || v16 == 2) {
    ProcHubSeqObeliskCleared_fba300_alt1((__int64*)(a1 + 192), 4);
  }
  ProcHubSeqObeliskCleared_fba300_alt1((__int64*)(a1 + 192), 5);
  v28_.v29 = *(void**)(a1 + 152);
  v28_.v28 = game_HashString((__int64)v28_.v29);
  v19 = game_GameModeData_instance_ == 0 ||
        (v18 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v28_.v28)) == 0 ||
        (signed __int32)*(_DWORD*)(v18 + 32) < 1;
  if (*(_BYTE*)(a1 + 160) == 7) {
    v19 = false;
  }
  if (v19 && *(_DWORD*)(a1 + 164) == 1) {
    v20 = 6;
  }
  else {
    v20 = 7;
  }
  ProcHubSeqObeliskCleared_fba300_alt1((__int64*)(a1 + 192), v20);
}

__int64 game_fbb5a0(__int64 a1, __int128* a2, float a3)
{

#pragma clang fp contract(off)
  float v7;
  float v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  unsigned int v15;
  __n128 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int128 v24;
  unsigned int i;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  unsigned int v29;
  unsigned int j;
  __int64 v31;
  struct {
    __int64 v32;
    __int64 v33;
  } v32_;
  struct {
    float32x4_t v34;
    const char* v35;
    int v36;
    char gap44_[4];
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
  } v34_;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(float*)(a1 + 32) > 0x0.0p+0f) {
    return 0;
  }
  if (*(_BYTE*)(a1 + 28) == 1) {
    v7 = fmodf(*(float*)(a1 + 24) - a3, 0x1.921fb60000000p+2f),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v7 >= 0x0.0p+0f) {
      v8 = v7 + 0x0.0p+0f;
    }
    else {
      v8 = (float)(v7 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v8 > 0x1.921fb60000000p+1f) {
      v8 = v8 + -0x1.921fb60000000p+2f;
    }
    if (v8 < 0x1.69e9560000000p+0f) {
      return 0;
    }
  }
  *(float*)(a1 + 24) = a3;
  *(_BYTE*)(a1 + 28) = 1;
  GameRoutine_14a1520((_QWORD*)(a1 + 8), 1),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v9 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v9 > 7) {
    v10 = 6;
  }
  else {
    v10 = GameData_1b01468[v9];
  }
  v34_.v36 = v10;
  v34_.v34 = (__typeof__(v34_.v34)){0};
  v34_.v35 = "Gim_Area_Barrier";
  v11 = *((_QWORD*)GameData_212c540 + 1);
  v13 = *(_QWORD*)GameData_212c548;
  v12 = *((_QWORD*)GameData_212c548 + 1);
  v34_.v37 = *(_QWORD*)GameData_212c540;
  v34_.v38 = v11;
  v34_.v39 = v13;
  v34_.v40 = v12;
  v34_.v41 = v34_.v37;
  v34_.v42 = v11;
  v14 = Manager_bc6460_alt1(*(_QWORD**)eft_g_effectSystem_ptr[0], &v34_.v34, 0),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = GameRoutine_14a10d0_alt1(&v32_.v32, (__int64)v14, v15,
                                 (__int64)&GameData_1a9f09e),
  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v17 = v32_.v32;
  v18 = v32_.v33;
  if (v32_.v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32_.v33 + 8), 1u,
                              memory_order_relaxed);
  }
  v19 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 8) = v17;
  *(_QWORD*)(a1 + 16) = v18;
  if (v19 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v19 + 16LL))(
          v19, *(long double*)&v16),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v16 = std___1___shared_weak_count___release_weak_alt1(v19),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v18 = *(_QWORD*)(a1 + 16);
  }
  if (v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v18 + 16LL))(
          v18, *(long double*)&v16),
          v15 = COERCE_AS(__typeof__(v15),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v16 = std___1___shared_weak_count___release_weak_alt1(v18),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  v20 = v32_.v33;
  if (v32_.v33 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32_.v33 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v20 + 16LL))(
        v20, *(long double*)&v16),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    std___1___shared_weak_count___release_weak_alt1(v20),
        v15 = COERCE_AS(__typeof__(v15),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v21 = *(_QWORD*)(a1 + 8);
  v22 = *(_QWORD*)v21;
  if (*(_QWORD*)v21 != 0 && *(_DWORD*)(v22 + 16) == *(_DWORD*)(v21 + 8)) {
    v23 = *(_DWORD*)(v22 + 36);
    if (v23 != 0) {
      v24 = *a2;
      for (i = 0; i < v23; ++i) {
        if ((int)v23 > (int)i) {
          v26 = *(_QWORD*)(v22 + 40 + 8LL * (int)i);
          if (v26 != 0) {
            *(_OWORD*)(v26 + 16) = v24;
            *(_BYTE*)(v26 + 128) = 1;
            v23 = *(_DWORD*)(v22 + 36);
          }
        }
      }
    }
  }
  GameRoutine_14a3920(v21),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v27 = *(__int64**)(a1 + 8);
  v28 = *v27;
  if (*v27 != 0 && *(_DWORD*)(v28 + 16) == *((_DWORD*)v27 + 2)) {
    v29 = *(_DWORD*)(v28 + 36);
    if (v29 != 0) {
      for (j = 0; j < v29; ++j) {
        if ((int)v29 > (int)j) {
          v31 = *(_QWORD*)(v28 + 40 + 8LL * (int)j);
          if (v31 != 0) {
            *(float*)(v31 + 52) = a3;
            *(_BYTE*)(v31 + 128) = 1;
            v29 = *(_DWORD*)(v28 + 36);
          }
        }
      }
    }
  }
  *(_BYTE*)(a1 + 40) = 1;
  *(_QWORD*)(a1 + 32) = 0x400000003F000000LL;
  return 1;
}

__int64 game_fbc6b0(unsigned int a1)
{
  unsigned int v2;
  __int64 v3;
  __int64 result;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  int v12;
  int v13;
  unsigned int v14;
  __int64 v15;
  int v16;
  int v17;
  int v18;
  unsigned __int64 v19;
  __int64* v20;
  __int64 v21;
  bool v22;
  __int64 v23;
  __int64 v24;
  char v25;
  __int64 v26;
  char v27;
  unsigned int v28;
  __int64 v29;
  struct {
    __int64 v30;
    void* v31;
    __int64* v32;
  } v30_;
  struct {
    _QWORD v33[2];
    char* v34;
  } v33_;
  struct {
    __int64 v35;
    __int64* v36;
  } v35_;

  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if ((GameRoutine_fbcb00(a1) & 1) == 0) {
    return 0;
  }
  v30_.v31 = &GameData_1a9da0c;
  v30_.v30 = game_HashString((__int64)&GameData_1a9da0c),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)&v30_.v30),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    if (v3 == 0) {
      goto LABEL_9;
    }
    v2 = *(_DWORD*)(v3 + 32);
  }
  if (((v2 >> a1) & 1) != 0) {
    return 4;
  }
LABEL_9:
  if (a1 > 3) {
    v5 = &GameData_1a9f09e;
  }
  else {
    v5 = (const char*)*(&GameData_1ffce00 + a1);
  }
  v6 = strlen_alt1(v5),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1(),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0),
    v22 = COERCE_AS(__typeof__(v22),
                    PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    v33_.v33[1] = v7;
    v33_.v34 = v8;
    v33_.v33[0] = v9 | 1;
    goto LABEL_20;
  }
  LOBYTE(v33_.v33[0]) = 2 * v6;
  v8 = (char*)v33_.v33 + 1;
  if (v6 != 0) {
  LABEL_20:
    memcpy_alt1((__int64)v8, (__int64)v5, v7),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  }
  v8[v7] = 0;
  if ((v33_.v33[0] & 1) != 0) {
    v10 = v33_.v34;
  }
  else {
    v10 = (char*)v33_.v33 + 1;
  }
  v30_.v31 = v10;
  v30_.v30 = game_HashString((__int64)v10),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (game_GameModeData_instance_ != 0 &&
      (v11 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v30_.v30)) != 0) {
    v12 = *(_DWORD*)(v11 + 32);
    if ((unsigned int)(v12 + 1) < 6) {
      v13 = v12 + 1;
    }
    else {
      v13 = 6;
    }
    if (v12 >= -1) {
      v14 = v13;
    }
    else {
      v14 = 0;
    }
  }
  else {
    v14 = 1;
  }
  sprintf_alt1((__int64)&v30_.v30, GameData_1a91e0c, v14),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v35_.v36 = &v30_.v30;
  v35_.v35 = game_HashString((__int64)&v30_.v30),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  if (game_GameModeData_instance_ != 0 &&
      (v15 = game_GameVariableTable_Find_alt1(
           *(_QWORD**)(game_GameModeData_instance_ + 48),
           (unsigned __int64*)&v35_.v35)) != 0) {
    v16 = *(_DWORD*)(v15 + 32);
  }
  else {
    v16 = 0;
  }
  v17 = GameRoutine_715440(),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  game_fbce70((void*)((__int64)&v30_.v30), a1, v14),
      v22 = COERCE_AS(__typeof__(v22),
                      PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v18 = v30_.v30 & 1;
  v19 = (unsigned __int64)(unsigned __int8)v30_.v30 >> 1;
  if (v18 != 0) {
    v19 = (unsigned __int64)v30_.v31;
  }
  if (v19 == 0) {
    v25 = 1;
    if (v18 == 0) {
      goto LABEL_57;
    }
    goto LABEL_53;
  }
  if (v18 != 0) {
    v20 = v30_.v32;
  }
  else {
    v20 = (__int64*)((char*)&v30_.v30 + 1);
  }
  v35_.v36 = v20;
  v21 = game_HashString((__int64)v20),
  v22 = COERCE_AS(__typeof__(v22),
                  PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
  v23 = game_GameModeData_instance_;
  v35_.v35 = v21;
  if (game_GameModeData_instance_ != 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ed530,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21ed530) != 0) {
      GameData_21ed528 = 1598310733;
      __cxa_guard_release_alt1((__int64)&GameData_21ed530),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
    v22 = v20 != nullptr && *(_DWORD*)v20 == GameData_21ed528 &&
          (v24 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(v23 + 48), (unsigned __int64*)&v35_.v35)) != 0 &&
          *(_DWORD*)(v24 + 32) != 0;
  }
  v25 = v23 != 0 && v22;
  if ((v30_.v30 & 1) != 0) {
  LABEL_53:
    if (v30_.v32 != nullptr) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, (__int64)v30_.v32),
          v22 = COERCE_AS(__typeof__(v22),
                          PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    }
  }
LABEL_57:
  v27 = v25 ^ 1;
  if (v17 < v16) {
    v27 = 0;
  }
  if ((v27 & 1) != 0) {
    result = 2;
    if ((v33_.v33[0] & 1) == 0) {
      return result;
    }
  }
  else {
    if ((unsigned int)GameHr_fbcd00(a1) != 0) {
      result = 3;
    }
    else {
      result = 1;
    }
    if ((v33_.v33[0] & 1) == 0) {
      return result;
    }
  }
  if (v33_.v34 != nullptr) {
    v28 = result;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v33_.v34),
        v22 = COERCE_AS(__typeof__(v22),
                        PSEUDO_REGISTER(unsigned long long, "x8", "=r"));
    return v28;
  }
  return result;
}

__attribute__((swiftcall)) void game_fbce70(PSEUDO_X8 x8_, unsigned int a1,
                                            unsigned int a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  char v18[256];
  struct {
    _QWORD v19[2];
    char* v20;
  } v19_;

  if (a2 == 0) {
    *(_WORD*)a3 = 0;
    return;
  }
  if (a1 > 3) {
    v5 = &GameData_1a9f09e;
  }
  else {
    v5 = GameData_1ffce20_alt1[a1];
  }
  v6 = strlen_alt1(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_33:
    String_60a1d0_alt1();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0);
    v19_.v19[1] = v7;
    v19_.v20 = v8;
    v19_.v19[0] = v9 | 1;
    goto LABEL_14;
  }
  LOBYTE(v19_.v19[0]) = 2 * v6;
  v8 = (char*)v19_.v19 + 1;
  if (v6 != 0) {
  LABEL_14:
    memcpy_alt1((__int64)v8, (__int64)v5, v7);
  }
  v8[v7] = 0;
  if ((v19_.v19[0] & 1) != 0) {
    v10 = v19_.v20;
  }
  else {
    v10 = (char*)v19_.v19 + 1;
  }
  sprintf_alt1((__int64)v18, "MID_LGV_Audience_Talk1_%s_m%02d", v10, a2);
  v11 = strlen_alt1(v18);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_33;
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v14, 16,
                                              0);
    *(_QWORD*)(a3 + 8) = v12;
    *(_QWORD*)(a3 + 16) = v15;
    *(_QWORD*)a3 = v14 | 1;
    v13 = v15;
  }
  else {
    *(_BYTE*)a3 = 2 * v11;
    v13 = a3 + 1;
    if (v11 == 0) {
      goto LABEL_27;
    }
  }
  memcpy_alt1(v13, (__int64)v18, v12);
LABEL_27:
  v16 = v19_.v19[0];
  *(_BYTE*)(v13 + v12) = 0;
  if ((v16 & 1) != 0 && v19_.v20 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, (__int64)v19_.v20);
  }
}

void game_fbd7a0(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  float32x4_t* v24;
  float32x4_t v25;
  unsigned __int64 v26;
  float32x4_t v27;
  __int128 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __n128 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  float32x4_t v40;
  __int64 v41;
  float32x4_t v42;
  __int128 v43;
  __int128 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD v49[2];
  atomic_ullong* v50;

  v2 = (__int64*)GameData_212dbf0[0];
  if (*(int*)(*(_QWORD*)GameData_212dbf0[0] + 16LL) <= 0) {
    ((void (*)(void))GameRoutine_efa7e0)();
  }
  v3 = *(unsigned int*)(a1 + 152);
  if ((unsigned int)v3 > 3) {
    v4 = &GameData_1a9f09e;
  }
  else {
    v4 = (char*)*(&GameData_1ffce40 + v3);
  }
  v5 = strlen(v4);
  if (v5 != 0) {
    v6 = GameData_212d458[0];
    v7 = *(_QWORD**)(*GameData_212d458[0] + 24);
    v8 = *(_QWORD**)(*GameData_212d458[0] + 32);
    if (v7 != v8) {
      v9 = v5;
      while (1) {
        v10 = *v7;
        v11 = *(unsigned __int8*)(*v7 + 320LL);
        v12 = *(_QWORD*)(*v7 + 328LL);
        if ((v11 & 1) == 0) {
          v12 = v11 >> 1;
        }
        if (v9 == v12) {
          v13 = (v11 & 1) != 0 ? *(_QWORD*)(v10 + 336) : v10 + 321;
          if ((unsigned int)memcmp(v4, v13, v9) == 0) {
            break;
          }
        }
        v7 += 2;
        if (v7 == v8) {
          return;
        }
      }
      v14 = v7[1];
      if (v14 != 0) {
        v15 = v7[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                  memory_order_relaxed);
        v16 = std___1___shared_weak_count_lock(v15);
        std___1___shared_weak_count___release_weak_alt1(v14);
        if (v16 != 0) {
          v17 = *v2;
          v49[0] = v10;
          v49[1] = v16;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_efbb60_alt1(v17, v49, 1);
          std___1___shared_weak_count___release_weak_alt1(v16);
          v18 = *(float*)(*(_QWORD*)(v10 + 24) + 528LL);
          v19 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
          *(_QWORD*)(v19 + 8) = 0;
          *(_QWORD*)(v19 + 16) = 0;
          v20 = v19;
          v50 = (atomic_ullong*)(v19 + 8);
          v21 = GameData_212f840[0];
          *(_QWORD*)(v19 + 32) = 0;
          v22 = v19 + 32;
          *(_QWORD*)(v19 + 96) = 0;
          *(_QWORD*)(v19 + 104) = 0;
          *(_QWORD*)(v19 + 80) = 0;
          *(_QWORD*)(v19 + 88) = 0;
          *(_QWORD*)(v19 + 64) = 0;
          *(_QWORD*)(v19 + 72) = 0;
          *(_QWORD*)(v19 + 48) = 0;
          *(_QWORD*)(v19 + 56) = 0;
          *(_QWORD*)(v19 + 40) = 0;
          *(_QWORD*)v19 = v21 + 2;
          *(_DWORD*)(v19 + 48) = 1048576000;
          v23 = *(_QWORD*)(v10 + 24);
          v24 = *(float32x4_t**)(*(_QWORD*)(v23 + 8) + 240LL);
          if (v24 != nullptr) {
            v25 = v24[3];
          }
          else {
            LODWORD(v26) = 0;
            *((float*)&v26 + 1) = *(float*)(v23 + 544) * 0x1.99999a0000000p-1;
            v25 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v23 + 16) + 560LL),
                            COERCE_AS(float32x4_t, v26));
          }
          *(_DWORD*)(v19 + 56) = 1065353216;
          *(_BYTE*)(v19 + 68) = 1;
          v27 = vaddq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83380));
          *(_QWORD*)(v19 + 76) = 0x422000003F800000LL;
          *(_DWORD*)(v19 + 64) = -1054867456;
          *(_QWORD*)(v19 + 32) = LANES128(v27).n128_u64[0];
          v28 = *(_OWORD*)(v19 + 32);
          *((_QWORD*)&v28 + 1) = LANES128(v27).n128_u32[2];
          *(float*)(v19 + 52) = v18 + 2.0;
          *(_OWORD*)(v19 + 32) = v28;
          v29 = (__int64*)GameData_212dc38[0];
          v47 = v19 + 32;
          v48 = v19;
          v30 = *(_QWORD*)GameData_212dc38[0];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                    memory_order_relaxed);
          game_zview_d20430_alt1(v30, &v47, 1);
          v31 = v48;
          if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
            std___1___shared_weak_count___release_weak_alt1(v31);
          }
          *(_BYTE*)(v20 + 68) = 1;
          *(_DWORD*)(v20 + 72) = 1065353216;
          v32 = *v29;
          *(_DWORD*)(v20 + 64) = -1069547520;
          v45 = v22;
          v46 = v20;
          *(float*)(v20 + 52) = v18 + 0x1.0000000000000p+0;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                    memory_order_relaxed);
          game_zview_d20430_alt1(v32, &v45, 1);
          v34 = v46;
          if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
            v33 = std___1___shared_weak_count___release_weak_alt1(v34);
          }
          v35 = *v6;
          v36 = *(_QWORD*)(*v6 + 80);
          if (v36 == 0) {
            goto LABEL_39;
          }
          v37 = *(_QWORD*)(v35 + 72);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                    memory_order_relaxed);
          v38 = std___1___shared_weak_count_lock(v36);
          v33 = std___1___shared_weak_count___release_weak_alt1(v36);
          if (v38 != 0 && v37 != 0) {
            v39 = *(_QWORD*)(v10 + 24);
            v40 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v37 + 24) + 16LL) +
                                  560LL);
            v41 = *(_QWORD*)(v39 + 24);
            v42 = *(float32x4_t*)(*(_QWORD*)(v39 + 16) + 560LL);
            LODWORD(v39) = *(unsigned __int8*)(v41 + 336);
            *(_QWORD*)(v41 + 272) = 0;
            v33 = vmlaq_f32(v40, vdupq_n_s32(0x3EB33333u), vsubq_f32(v42, v40));
            if ((_DWORD)v39 == 1) {
              *(_QWORD*)(v41 + 288) = __PAIR64__(LANES128(v40).n128_u32[1],
                                                 LANES128(v33).n128_u32[0]);
              *(_QWORD*)(v41 + 304) = __PAIR64__(LANES128(v40).n128_u32[1],
                                                 LANES128(v33).n128_u32[0]);
              v43 = *(_OWORD*)(v41 + 288);
              v44 = *(_OWORD*)(v41 + 304);
              *((_QWORD*)&v43 + 1) = LANES128(v33).n128_u32[2];
              *((_QWORD*)&v44 + 1) = LANES128(v33).n128_u32[2];
              *(_OWORD*)(v41 + 288) = v43;
              *(_OWORD*)(v41 + 304) = v44;
            }
            else {
              LANES128(v33).n128_u32[1] = LANES128(v40).n128_u32[1];
              *(_BYTE*)(v41 + 336) = 1;
              LANES128(v33).n128_u32[3] = 0;
              *(__n128*)(v41 + 288) = v33;
              *(__n128*)(v41 + 304) = v33;
            }
            *(_DWORD*)(v41 + 320) = 1065353216;
          }
          else if (v38 == 0) {
          LABEL_39:
            if (atomic_fetch_add(v50, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v20 + 16LL))(
                  v20, *(long double*)&v33);
              v33 = std___1___shared_weak_count___release_weak_alt1(v20);
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64, long double))(*(_QWORD*)v16 + 16LL))(
                  v16, *(long double*)&v33);
              std___1___shared_weak_count___release_weak_alt1(v16);
            }
            return;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v38 + 16LL))(
                v38, *(long double*)&v33);
            v33 = std___1___shared_weak_count___release_weak_alt1(v38);
          }
          goto LABEL_39;
        }
      }
    }
  }
}

void game_fbdc20(__int64 a1)
{
  unsigned int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  int v7;
  __int64 v8;
  struct {
    __int64 v9;
    unsigned __int64 v10;
    __int64 v11;
  } v9_;

  v2 = GameHr_fbcd00(*(_DWORD*)(a1 + 152));
  game_fbce70((void*)((__int64)&v9_.v9), *(_DWORD*)(a1 + 152), v2);
  GameRoutine_efb6f0(*(_QWORD*)GameData_212dbf0[0], a1, &v9_.v9);
  v3 = *(_QWORD**)(a1 + 168);
  if ((unsigned __int64)v3 >= *(_QWORD*)(a1 + 176)) {
    v6 = Manager_66cc20((__int64*)(a1 + 160), &v9_.v9);
    v7 = v9_.v9 & 1;
    *(_QWORD*)(a1 + 168) = v6;
    if (v7 == 0) {
      return;
    }
  }
  else {
    if ((v9_.v9 & 1) == 0) {
      v4 = v9_.v9;
      v5 = v9_.v11;
      v3[1] = v9_.v10;
      v3[2] = v5;
      *v3 = v4;
      *(_QWORD*)(a1 + 168) = v3 + 3;
      return;
    }
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 168), v9_.v11, v9_.v10);
    *(_QWORD*)(a1 + 168) = v3 + 3;
  }
  if (v9_.v11 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v9_.v11);
  }
}

void game_fbe060(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  const char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  int v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
    char* v25;
  } v23_;
  char v26[256];
  struct {
    _QWORD v27[2];
    char* v28;
  } v27_;

  v2 = GameHr_fbcd00(*(_DWORD*)(a1 + 152));
  if (v2 == 0) {
    LOWORD(v23_.v23) = 0;
    goto LABEL_32;
  }
  v3 = *(unsigned int*)(a1 + 152);
  v4 = v2;
  if ((unsigned int)v3 > 3) {
    v5 = &GameData_1a9f09e;
  }
  else {
    v5 = GameData_1ffce20[v3];
  }
  v6 = strlen_alt1(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_43:
    String_60a1d0_alt1();
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v9, 16, 0);
    v27_.v27[1] = v7;
    v27_.v28 = v8;
    v27_.v27[0] = v9 | 1;
    goto LABEL_14;
  }
  LOBYTE(v27_.v27[0]) = 2 * v6;
  v8 = (char*)v27_.v27 + 1;
  if (v6 != 0) {
  LABEL_14:
    memcpy_alt1((__int64)v8, (__int64)v5, v7);
  }
  v8[v7] = 0;
  if ((v27_.v27[0] & 1) != 0) {
    v10 = v27_.v28;
  }
  else {
    v10 = (char*)v27_.v27 + 1;
  }
  sprintf_alt1((__int64)v26, "MID_LGV_Audience_Talk2_%s_m%02d", v10, v4);
  v11 = strlen_alt1(v26);
  if (v11 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_43;
  }
  v12 = v11;
  if (v11 >= 0x17) {
    if ((v11 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v11 | 7) + 1;
    }
    v13 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v14, 16, 0);
    v23_.v24 = v12;
    v23_.v25 = v13;
    v23_.v23 = v14 | 1;
  }
  else {
    LOBYTE(v23_.v23) = 2 * v11;
    v13 = (char*)&v23_.v23 + 1;
    if (v11 == 0) {
      goto LABEL_27;
    }
  }
  memcpy_alt1((__int64)v13, (__int64)v26, v12);
LABEL_27:
  v15 = v27_.v27[0];
  v13[v12] = 0;
  if ((v15 & 1) != 0 && v27_.v28 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v27_.v28);
  }
LABEL_32:
  GameRoutine_efb6f0(*(_QWORD*)GameData_212dbf0[0], a1, &v23_.v23);
  v17 = *(__int64**)(a1 + 168);
  if ((unsigned __int64)v17 >= *(_QWORD*)(a1 + 176)) {
    v20 = Manager_66cc20((__int64*)(a1 + 160), &v23_.v23);
    v21 = v23_.v23 & 1;
    *(_QWORD*)(a1 + 168) = v20;
    if (v21 == 0) {
      return;
    }
  }
  else {
    if ((v23_.v23 & 1) == 0) {
      v18 = v23_.v23;
      v19 = (__int64)v23_.v25;
      v17[1] = v23_.v24;
      v17[2] = v19;
      *v17 = v18;
      *(_QWORD*)(a1 + 168) = v17 + 3;
      return;
    }
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 168), (__int64)v23_.v25,
                                  v23_.v24);
    *(_QWORD*)(a1 + 168) = v17 + 3;
  }
  if (v23_.v25 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v23_.v25);
  }
}

__int64 game_fbe660(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  char* v2;
  __int64 v3;
  __n128 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  struct {
    int v23;
    __int16 v24;
    char gap10_[2];
    int v25;
  } v23_;

  v1 = *(unsigned int*)(a1 + 152);
  if ((unsigned int)v1 > 3) {
    v2 = &GameData_1a9f09e;
  }
  else {
    v2 = (char*)*(&GameData_1ffce40 + v1);
  }
  v3 = strlen(v2);
  if (v3 != 0) {
    v5 = *(_QWORD**)(GameData_21ec7c0 + 24);
    v6 = *(_QWORD**)(GameData_21ec7c0 + 32);
    if (v5 != v6) {
      v7 = v3;
      while (1) {
        v8 = *v5;
        v9 = *(unsigned __int8*)(*v5 + 320LL);
        v10 = *(_QWORD*)(*v5 + 328LL);
        if ((v9 & 1) == 0) {
          v10 = v9 >> 1;
        }
        if (v7 == v10) {
          v11 = (v9 & 1) != 0 ? *(_QWORD*)(v8 + 336) : v8 + 321;
          if ((unsigned int)memcmp(v2, v11, v7) == 0) {
            break;
          }
        }
        v5 += 2;
        if (v5 == v6) {
          goto LABEL_21;
        }
      }
      v12 = v5[1];
      if (v12 != 0) {
        v13 = v5[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                  memory_order_relaxed);
        v14 = std___1___shared_weak_count_lock(v13);
        v4 = std___1___shared_weak_count___release_weak_alt1(v12);
        if (v14 != 0) {
          v15 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 24LL);
          if (*(_BYTE*)(v15 + 96) == 1) {
            *(_BYTE*)(v15 + 96) = 0;
          }
          *(_BYTE*)(v15 + 25) = 0;
          if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v14 + 16LL))(
                v14, *(long double*)&v4);
            v4 = std___1___shared_weak_count___release_weak_alt1(v14);
          }
        }
      }
    }
  }
LABEL_21:
  v16 = GameData_21f3d08;
  v17 = *(_DWORD*)(GameData_21f3d08 + 16) - 1;
  *(_DWORD*)(GameData_21f3d08 + 16) = v17;
  if (v17 != 0) {
    if (v17 > 0) {
      goto LABEL_29;
    }
  }
  else {
    (*(void (**)(__int64, long double))(*(_QWORD*)(v16 + 8) + 8LL))(
        v16 + 8, *(long double*)&v4);
    if (*(int*)(v16 + 16) > 0) {
      goto LABEL_29;
    }
  }
  if (*(_BYTE*)(v16 + 65) != 0) {
    *(_BYTE*)(v16 + 65) = 0;
    v18 = GameData_220b6e0;
    v19 = *(_DWORD*)(GameData_220b6e0 + 176) - 1;
    *(_DWORD*)(GameData_220b6e0 + 176) = v19;
    if (v19 == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)(v18 + 168) + 8LL))(
          v18 + 168, *(long double*)&v4);
    }
    GameRoutine_d799f0(v18);
  }
LABEL_29:
  GameRoutine_d8cf60(GameData_21f3cb8);
  v20 = *(_QWORD*)GameData_212dc60[0];
  game_hub_d97a00(*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 16LL), 0x0.0p+0f);
  v23_.v23 = 0;
  v23_.v24 = 0;
  v23_.v25 = 1065353216;
  GameRoutine_cdeee0(v20, (__int64)&v23_.v23);
  v21 = GameData_212dc38[0];
  GameRoutine_d1fb60(*(_QWORD*)GameData_212dc38[0], 1);
  result = *(_QWORD*)(*(_QWORD*)v21 + 1160LL);
  if (result != 0) {
    GameRoutine_d23780(result, 0x100000000LL, 0x1C0E00000LL, 0, 0x0.0p+0f);
    result = *(_QWORD*)(*(_QWORD*)v21 + 1160LL);
    if (result != 0) {
      return GameRoutine_d23780(result, 0x100000000LL, 0x1C0A00000LL, 0,
                                0x1.0000000000000p-1f);
    }
  }
  return result;
}

__int64 game_fc4180()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  struct {
    __int64 v4;
    __int64 v5;
  } v4_;
  struct {
    __int64 v6;
    __int64 v7;
  } v6_;

  v0 = (__int64*)GameData_212dbf0[0];
  v1 = *(_QWORD*)GameData_212dbf0[0];
  ProcChallengeBegin_fc3840(&v6_.v6);
  game_hub_efc3b0(v1, &v6_.v6, 0, 0x100000000LL);
  if (v6_.v7 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v6_.v7);
  }
  v2 = *v0;
  ProcChallengeBegin_fc3840(&v4_.v4);
  GameRoutine_efbb60(v2, &v4_.v4, 1);
  if (v4_.v5 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4_.v5);
  }
  return GameRoutine_10c0c60(GameData_21f3cd8);
}

__attribute__((swiftcall)) void game_fc45a0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;
  char* v16;
  char* v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  char* v24;
  char* v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  signed __int64 v38;
  bool v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  signed __int64 v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  char* v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  signed __int64 v53;
  char* v54;
  _QWORD* v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  __int64 v61;
  signed __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64* v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned __int64 v89;
  signed __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64* v93;
  bool v94;
  __int64 v95;
  __int64 v96;
  unsigned int* v97;
  unsigned int* v98;
  __int64 v99;
  unsigned __int64 v100;
  __int64* v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  signed __int64 v105;
  unsigned __int64 v106;
  unsigned __int64 v107;
  __int64 v108;
  __int64 v109;
  unsigned __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  _QWORD v115[2];
  char v116;
  _QWORD v117[2];

  if ((*(_BYTE*)(a1 + 92) & 1) != 0 || (*(_BYTE*)(a1 + 93) & 1) != 0) {
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    return;
  }
  v113 = *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 56LL);
  if (*(_WORD*)(*(_QWORD*)(a1 + 8) + 56LL) == 0) {
  LABEL_97:
    v82 = *(_QWORD*)(a1 + 16);
    v81 = *(_QWORD*)(a1 + 24);
    v83 = a2;
    v84 = v82;
    if (v82 != v81) {
      v84 = *(_QWORD*)(a1 + 16);
      while (*(_DWORD*)(v84 + 4) != -2) {
        v84 += 12;
        if (v84 == v81) {
          goto LABEL_113;
        }
      }
    }
    if (v84 == v81) {
      goto LABEL_113;
    }
    v85 = v84 + 12;
    if (v84 + 12 == v81) {
      v86 = *(_QWORD*)(a1 + 24);
      if (v84 == v81) {
      LABEL_105:
        v81 = v86;
      LABEL_113:
        v90 = 0;
        v115[0] = GameRoutine_fc5000;
        v115[1] = 0;
        v117[0] = &v116;
        v117[1] = v115;
        if (v81 - v82 < 1537) {
        LABEL_117:
          GameRoutine_fc6fa0_alt1(v82, v81, (__int64)v117,
                                  0xAAAAAAAAAAAAAAABLL * ((v81 - v82) >> 2),
                                  nullptr, v90);
        }
        else {
          v91 = 0xAAAAAAAAAAAAAAABLL * ((v81 - v82) >> 2);
          v92 = GameData_212c060;
          while (1) {
            v93 = (__int64*)GameRoutine_1a09d20_alt1(12 * v91, v92);
            if (v93 != nullptr) {
              break;
            }
            v90 = v91 >> 1;
            v94 = v91 > 1;
            v91 >>= 1;
            if (!v94) {
              goto LABEL_117;
            }
          }
          v95 = (__int64)v93;
          GameRoutine_fc6fa0_alt1(v82, v81, (__int64)v117,
                                  0xAAAAAAAAAAAAAAABLL * ((v81 - v82) >> 2),
                                  v93, v91);
          v96 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v96 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v96, v95);
        }
        v97 = *(unsigned int**)(a1 + 16);
        v98 = *(unsigned int**)(a1 + 24);
        a2[1] = 0;
        a2[2] = 0;
        *a2 = 0;
        if (v98 == v97) {
          v100 = 0;
        }
        else {
          if ((0xAAAAAAAAAAAAAAABLL * (v98 - v97)) >> 61 != 0) {
            GameRoutine_fc6e20_alt1();
          }
          v99 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr,
              0x5555555555555558LL * (v98 - v97), 16, 0);
          v83 = a2;
          v100 = v99 + 0x5555555555555558LL * (v98 - v97);
          v101 = (__int64*)v99;
          *a2 = v99;
          do {
            v102 = *v97;
            v103 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL) +
                                        96LL * (int)*v97 + 42);
            if ((unsigned __int64)v101 < v100) {
              *v101++ = v103 | (v102 << 32);
            }
            else {
              v104 = *v83;
              v105 = (signed __int64)v101 - *v83;
              v106 = (v105 >> 3) + 1;
              if (v106 >> 61 != 0) {
                a2[1] = (__int64)v101;
                a2[2] = v100;
                GameRoutine_fc6e20_alt1();
              }
              if ((__int64)(v100 - v104) >> 2 > v106) {
                v106 = (__int64)(v100 - v104) >> 2;
              }
              if (v100 - v104 >= 0x7FFFFFFFFFFFFFF8LL) {
                v107 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v107 = v106;
              }
              if (v107 != 0) {
                if (v107 >> 61 != 0) {
                  a2[1] = (__int64)v101;
                  a2[2] = v100;
                  GameRoutine_60a210_alt1();
                }
                v108 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v107, 16, 0);
              }
              else {
                v108 = 0;
              }
              v109 = v103 | (v102 << 32);
              v110 = v108 + 8 * v107;
              v111 = v108 + v105 - 8 * (v105 >> 3);
              *(_QWORD*)(v108 + v105) = v109;
              v101 = (__int64*)(v108 + v105 + 8);
              memcpy_alt1(v111, v104, v105);
              v83 = a2;
              *a2 = v111;
              if (v104 != 0) {
                v112 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v112 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, v104);
              }
              v100 = v110;
            }
            v97 += 3;
          } while (v97 != v98);
          v83[1] = (__int64)v101;
        }
        v83[2] = v100;
        *(_BYTE*)(a1 + 92) = 1;
        return;
      }
    }
    else {
      do {
        if (*(_DWORD*)(v85 + 4) != -2) {
          v87 = *(_QWORD*)v85;
          *(_DWORD*)(v84 + 8) = *(_DWORD*)(v85 + 8);
          *(_QWORD*)v84 = v87;
          v84 += 12;
        }
        v85 += 12;
      } while (v85 != v81);
      v82 = *(_QWORD*)(a1 + 16);
      v86 = *(_QWORD*)(a1 + 24);
      if (v84 == v81) {
        goto LABEL_105;
      }
    }
    v88 = v81;
    v89 = v86 - v81;
    if (v89 != 0) {
      memmove_alt1(v84, v88, v89);
      v82 = *(_QWORD*)(a1 + 16);
    }
    v81 = v84 + v89;
    *(_QWORD*)(a1 + 24) = v81;
    goto LABEL_113;
  }
  v3 = 0;
  while (1) {
    *(_DWORD*)(*(_QWORD*)(a1 + 16) + 12 * v3) = v3;
    v4 = *(_QWORD*)(a1 + 16) + 12LL * (int)v3;
    v5 = *(_QWORD*)(a1 + 80);
    if (*(_DWORD*)(v4 + 4) == -1) {
      break;
    }
  LABEL_84:
    while (v5 != 0) {
      v72 = *(
          _QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 48) +
                              8 * ((unsigned __int64)(v5 + *(_QWORD*)(a1 + 72) -
                                                      1) >>
                                   9)) +
                   8 * ((v5 + *(_QWORD*)(a1 + 72) - 1) & 0x1FF));
      *(_DWORD*)(v72 + 4) = *(_DWORD*)(v4 + 4);
      *(_DWORD*)(v72 + 8) = *(_DWORD*)(v4 + 8) + 1;
      v73 = *(_QWORD*)(a1 + 48);
      v74 = *(_QWORD*)(a1 + 56);
      v75 = *(_QWORD*)(a1 + 80);
      v76 = v74 - v73;
      v39 = v74 == v73;
      v5 = v75 - 1;
      v77 = v75 + *(_QWORD*)(a1 + 72);
      *(_QWORD*)(a1 + 80) = v5;
      v78 = (v76 << 6) - 1;
      if (v39) {
        v78 = 0;
      }
      if ((unsigned __int64)(v78 - v77 + 1) >= 0x400) {
        v79 = *(_QWORD*)(v74 - 8);
        if (v79 != 0) {
          v80 = 56;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v80 = 128;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v80,
                                             v79);
          v74 = *(_QWORD*)(a1 + 56);
          v5 = *(_QWORD*)(a1 + 80);
        }
        *(_QWORD*)(a1 + 56) = v74 - 8;
      }
      v4 = v72;
    }
    if (++v3 == v113) {
      goto LABEL_97;
    }
  }
  while (1) {
    v6 = *(char**)(a1 + 48);
    v7 = *(char**)(a1 + 56);
    v8 = v7 - v6;
    if (v7 == v6) {
      v9 = 0;
    }
    else {
      v9 = ((v7 - v6) << 6) - 1;
    }
    v10 = *(_QWORD*)(a1 + 72);
    v11 = v10 + v5;
    if (v9 == v11) {
      if (v10 < 0x200) {
        v13 = *(char**)(a1 + 64);
        v14 = *(char**)(a1 + 40);
        if (v8 >= (unsigned __int64)(v13 - v14)) {
          if (v13 == v14) {
            v22 = 1;
          }
          else {
            v22 = (v13 - v14) >> 2;
          }
          if (v22 >> 61 != 0) {
          LABEL_145:
            GameRoutine_60a210_alt1();
          }
          v23 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
          v24 = (char*)(v23 + v8);
          v25 = (char*)(v23 + 8 * v22);
          v26 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
          if (v8 == 8 * v22) {
            if (v7 == v6) {
              v30 = v26;
              v31 = fw_memory_g_heap_manager_ptr;
              v24 = (char*)fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              v25 = v24 + 8;
              v32 = 128;
              if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) == 0) {
                v32 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v31 + v32, v23);
              v26 = v30;
              v6 = *(char**)(a1 + 48);
              v7 = *(char**)(a1 + 56);
              v23 = (__int64)v24;
            }
            else {
              v24 -= 8 * (((v8 >> 3) + 1 +
                           ((unsigned __int64)((v8 >> 3) + 1) >> 63)) >>
                          1);
            }
          }
          *(_QWORD*)v24 = v26;
          v33 = v24 + 8;
          if (v7 != v6) {
            do {
              if (v24 == (char*)v23) {
                if (v33 >= v25) {
                  if (v25 == v24) {
                    v41 = 1;
                  }
                  else {
                    v41 = (v25 - v24) >> 2;
                  }
                  if (v41 >> 61 != 0) {
                    goto LABEL_145;
                  }
                  v42 = fw_memory_HeapManager_Allocate_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v41, 16, 0);
                  v43 = v42;
                  v36 = (char*)(v42 + ((2 * v41 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v44 = v33 - v24;
                  v39 = v33 == v24;
                  v33 = v36;
                  if (!v39) {
                    v33 = &v36[v44];
                    v45 =
                        (_QWORD*)(v42 + ((2 * v41 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v46 = *(_QWORD*)v24;
                      v24 += 8;
                      v44 -= 8LL;
                      *v45++ = v46;
                    } while (v44 != 0);
                  }
                  v25 = (char*)(v42 + 8 * v41);
                  v47 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v47 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v23);
                  v23 = v43;
                }
                else {
                  v38 = v33 - v24;
                  v40 = v33 - v24;
                  v39 = v33 == v24;
                  v33 +=
                      8 *
                      ((((v25 - v33) >> 3) + 1 +
                        ((unsigned __int64)(((v25 - v33) >> 3) + 1) >> 63)) >>
                       1);
                  v36 = &v33[-v38];
                  if (!v39) {
                    memmove_alt1((__int64)&v33[-v38], (__int64)v24, v40);
                  }
                }
              }
              else {
                v36 = v24;
              }
              v37 = *((_QWORD*)v7 - 1);
              v7 -= 8;
              *((_QWORD*)v36 - 1) = v37;
              v24 = v36 - 8;
            } while (v7 != *(char**)(a1 + 48));
          }
          v34 = *(_QWORD*)(a1 + 40);
          *(_QWORD*)(a1 + 40) = v23;
          *(_QWORD*)(a1 + 48) = v24;
          *(_QWORD*)(a1 + 56) = v33;
          *(_QWORD*)(a1 + 64) = v25;
          if (v34 != 0) {
            v35 = 56;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v35 = 128;
            }
            nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v35,
                                               v34);
          }
        }
        else {
          v15 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
          if (v13 == v7) {
            v28 = *(_QWORD*)(a1 + 40);
            v27 = *(char**)(a1 + 48);
            if (v27 == (char*)v28) {
              v49 = *(char**)(a1 + 56);
              v48 = *(_QWORD*)(a1 + 64);
              if ((unsigned __int64)v49 >= v48) {
                v58 = v48 - (_QWORD)v27;
                v39 = v58 == 0;
                v59 = v58 >> 2;
                if (v39) {
                  v60 = 1;
                }
                else {
                  v60 = v59;
                }
                if (v60 >> 61 != 0) {
                  goto LABEL_145;
                }
                v61 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v60, 16, 0);
                v62 = v49 - v27;
                v29 = v61 + ((2 * v60 + 6) & 0xFFFFFFFFFFFFFFF8LL);
                v63 = v29;
                if (v49 != v27) {
                  v63 = v29 + v62;
                  v64 = (_QWORD*)(v61 + ((2 * v60 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v65 = (__int64*)v27;
                  do {
                    v66 = *v65++;
                    v62 -= 8LL;
                    *v64++ = v66;
                  } while (v62 != 0);
                }
                *(_QWORD*)(a1 + 40) = v61;
                *(_QWORD*)(a1 + 48) = v29;
                *(_QWORD*)(a1 + 56) = v63;
                *(_QWORD*)(a1 + 64) = v61 + 8 * v60;
                if (v27 != nullptr) {
                  v67 = 56;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v67 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v28);
                  v29 = *(_QWORD*)(a1 + 48);
                }
              }
              else {
                v50 = (((__int64)(v48 - (_QWORD)v49) >> 3) + 1) / 2;
                v29 = (unsigned __int64)&v27[8 * v50];
                if (v49 != v27) {
                  memmove_alt1((__int64)&v27[8 * v50], *(_QWORD*)(a1 + 48),
                               v49 - v27);
                  v49 = *(char**)(a1 + 56);
                }
                *(_QWORD*)(a1 + 48) = v29;
                *(_QWORD*)(a1 + 56) = &v49[8 * v50];
              }
            }
            else {
              v29 = *(_QWORD*)(a1 + 48);
            }
            *(_QWORD*)(v29 - 8) = v15;
            v68 = *(_QWORD*)(a1 + 48);
            *(_QWORD*)(a1 + 48) = v68 - 8;
            v69 = *(_QWORD*)(v68 - 8);
            *(_QWORD*)(a1 + 48) = v68;
            v117[0] = v69;
            GameRoutine_fc6e40_alt1((__int64*)(a1 + 40), v117);
          }
          else {
            v16 = *(char**)(a1 + 56);
            if (v16 == *(char**)(a1 + 64)) {
              v18 = *(_QWORD*)(a1 + 40);
              v17 = *(char**)(a1 + 48);
              if ((unsigned __int64)v17 <= v18) {
                if (v16 == (char*)v18) {
                  v51 = 1;
                }
                else {
                  v51 = (__int64)&v16[-v18] >> 2;
                }
                if (v51 >> 61 != 0) {
                  goto LABEL_145;
                }
                v52 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v51, 16, 0);
                v53 = v16 - v17;
                v39 = v16 == v17;
                v54 = (char*)(v52 + 8 * (v51 >> 2));
                v16 = v54;
                if (!v39) {
                  v16 = &v54[v53];
                  v55 = (_QWORD*)(v52 + 8 * (v51 >> 2));
                  do {
                    v56 = *(_QWORD*)v17;
                    v17 += 8;
                    v53 -= 8LL;
                    *v55++ = v56;
                  } while (v53 != 0);
                }
                *(_QWORD*)(a1 + 40) = v52;
                *(_QWORD*)(a1 + 48) = v54;
                *(_QWORD*)(a1 + 56) = v16;
                *(_QWORD*)(a1 + 64) = v52 + 8 * v51;
                if (v18 != 0) {
                  v57 = 56;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v57 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v57, v18);
                  v16 = *(char**)(a1 + 56);
                }
              }
              else {
                v19 = v16 - v17;
                v20 = ((__int64)&v17[-v18] >> 3) + 1;
                v21 = &v17[-8 * (v20 / 2)];
                if (v19 != 0) {
                  memmove_alt1((__int64)&v17[-8 * (v20 / 2)],
                               *(_QWORD*)(a1 + 48), v19);
                  v17 = *(char**)(a1 + 48);
                }
                v16 = &v21[v19];
                *(_QWORD*)(a1 + 48) = &v17[-8 * (v20 / 2)];
                *(_QWORD*)(a1 + 56) = v16;
              }
            }
            *(_QWORD*)v16 = v15;
            *(_QWORD*)(a1 + 56) += 8LL;
          }
        }
      }
      else {
        *(_QWORD*)(a1 + 72) = v10 - 512;
        v12 = *(_QWORD*)v6;
        *(_QWORD*)(a1 + 48) = v6 + 8;
        v117[0] = v12;
        GameRoutine_fc6e40_alt1((__int64*)(a1 + 40), v117);
      }
      v6 = *(char**)(a1 + 48);
      v11 = *(_QWORD*)(a1 + 80) + *(_QWORD*)(a1 + 72);
    }
    *(_QWORD*)(*(_QWORD*)&v6[8 * (v11 >> 9)] + 8 * (v11 & 0x1FF)) = v4;
    v70 = *(_QWORD*)(a1 + 8);
    v5 = *(_QWORD*)(a1 + 80) + 1LL;
    *(_QWORD*)(a1 + 80) = v5;
    v71 = *(unsigned __int16*)(*(_QWORD*)(v70 + 16) + 96LL * (int)v3 + 42);
    if (v71 == 0xFFFF) {
      break;
    }
    v4 = *(_QWORD*)(a1 + 16) + 12LL * (unsigned int)v71;
    if (*(_DWORD*)(v4 + 4) != -1) {
      goto LABEL_84;
    }
  }
  *(_BYTE*)(a1 + 93) = 1;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
}

__int64 game_fc76e0(__int64 result, __int64* a2, char* a3, __int64 a4,
                    __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v12;
  __int64 v13;
  __int64 i;
  __int64 v15;
  __int64 (*v16)(_QWORD);
  __int64 v17;
  _QWORD* v18;
  int v19;
  __int64 v20;
  __int64 (*v21)(__int64);
  __int64 v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 (*v31)(char*);
  __int64 v32;
  char* v33;
  __int64 v34;
  int v35;
  __int64 v36;
  int (*v37)(void);
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  int v43;
  char* v44;
  __int64 (*v45)(__int64);
  __int64 v46;
  char* v47;
  int v48;
  __int64 (*v49)(__int64);
  __int64 v50;
  int v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  __int64* v61;
  int v62;
  __int64 v63;
  int v64;
  char* v65;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  _QWORD* v71;
  _QWORD* v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  int v87;
  __int64 v88;
  __int64 (*v89)(_QWORD);
  __int64 v90;
  _QWORD* v91;
  int v92;
  __int64 v93;
  __int64 (*v94)(void);
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  int v100;
  __int64 v101;
  int v102;
  __int64 v103;
  __int64 (*v104)(_QWORD);
  __int64 v105;
  _QWORD* v106;
  int v107;
  __int64 v108;
  __int64 (*v109)(_QWORD);
  __int64 v110;
  _QWORD* v111;
  __int64 v112;
  int v113;
  __int64 v114;
  int v115;
  __int64 v116;
  __int64 v117;
  char* v118;
  int v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  char* v123;
  __int64 v125;
  __int64 v126;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  int v133;

  v125 = a6;
  if (a6 != 0) {
    v12 = result;
    while (a5 > a8 && v125 > a8) {
      if (a5 == 0) {
        return result;
      }
      v13 = -a5;
      for (i = 0;; i += 12) {
        v15 = *(_QWORD*)(a4 + 8);
        v16 = *(__int64 (**)(_QWORD))v15;
        v17 = *(_QWORD*)(v15 + 8);
        v18 = (__int64*)((char*)a2 + (v17 >> 1));
        if ((v17 & 1) != 0) {
          v16 = *(__int64 (**)(_QWORD))((char*)v16 + *v18);
        }
        v19 = v16(v18);
        v20 = *(_QWORD*)(a4 + 8);
        v21 = *(__int64 (**)(__int64))v20;
        v22 = *(_QWORD*)(v20 + 8);
        v23 = v22 >> 1;
        if ((v22 & 1) != 0) {
          v21 =
              *(__int64 (**)(__int64))((char*)v21 + *(_QWORD*)(v12 + v23 + i));
        }
        result = v21(v12 + i + v23);
        if (v19 < (int)result) {
          break;
        }
        if (__CFADD__(v13++, 1)) {
          return result;
        }
      }
      result = v12 + i;
      v123 = a3;
      if (-v13 >= v125) {
        if (v13 == -1) {
          v112 = v12 + i;
          v113 = *((_DWORD*)a2 + 2);
          v114 = *(_QWORD*)(v12 + i);
          *(_QWORD*)v112 = *a2;
          v115 = *(_DWORD*)(v12 + i + 8);
          *(_DWORD*)(v112 + 8) = v113;
          *a2 = v114;
          *((_DWORD*)a2 + 2) = v115;
          return result;
        }
        v39 = -v13 / 2;
        v40 = a3 - (char*)a2;
        if (a3 == (char*)a2) {
          v53 = a3;
        }
        else {
          v122 = a7;
          a3 = (char*)a2;
          v41 = *(_QWORD*)(a4 + 8);
          v42 = 0xAAAAAAAAAAAAAAABLL * (v40 >> 2);
          v126 = v12 + i;
          do {
            v44 = &a3[12 * (v42 >> 1)];
            v45 = *(__int64 (**)(__int64))v41;
            v46 = *(_QWORD*)(v41 + 8);
            v47 = &v44[v46 >> 1];
            if ((v46 & 1) != 0) {
              v45 = *(__int64 (**)(__int64))((char*)v45 + *(_QWORD*)v47);
            }
            v48 = v45((__int64)v47);
            v49 = *(__int64 (**)(__int64))v41;
            v50 = *(_QWORD*)(v41 + 8);
            v51 = v48;
            v52 = 12 * v39 + (v50 >> 1);
            if ((v50 & 1) != 0) {
              v43 = (*(__int64 (**)(__int64))(
                  (char*)v49 + *(_QWORD*)(v12 + v52 + i)))(v126 + v52);
            }
            else {
              v43 = v49(v126 + v52);
            }
            if (v51 >= v43) {
              v42 >>= 1;
            }
            else {
              a3 = v44 + 12;
              v42 += ~(v42 >> 1);
            }
          } while (v42 != 0);
          result = v12 + i;
          a7 = v122;
          v39 = -v13 / 2;
          v53 = (char*)a2;
        }
        v28 = (__int64*)(v12 + 12 * v39 + i);
        v25 = 0xAAAAAAAAAAAAAAABLL * ((a3 - v53) >> 2);
      }
      else {
        v25 = v125 / 2;
        a3 = (char*)a2 + 12 * (v125 / 2);
        if ((__int64*)result == a2) {
          v28 = a2;
          v27 = (char*)a2;
        }
        else {
          v26 = (__int64)a2 - v12;
          v120 = v12 + i;
          v121 = a7;
          v27 = (char*)(v12 + i);
          v28 = (__int64*)(v12 + i);
          v29 = 0xAAAAAAAAAAAAAAABLL * ((v26 - i) >> 2);
          do {
            v30 = *(_QWORD*)(a4 + 8);
            v31 = *(__int64 (**)(char*))v30;
            v32 = *(_QWORD*)(v30 + 8);
            v33 = &a3[v32 >> 1];
            if ((v32 & 1) != 0) {
              v31 = *(__int64 (**)(char*))((char*)v31 + *(_QWORD*)v33);
            }
            v34 = (__int64)v28 + 12 * (v29 >> 1);
            v35 = v31(v33);
            v36 = *(_QWORD*)(a4 + 8);
            v37 = *(int (**)(void))v36;
            v38 = *(_QWORD*)(v36 + 8);
            if ((v38 & 1) != 0) {
              v37 =
                  *(int (**)(void))((char*)v37 + *(_QWORD*)(v34 + (v38 >> 1)));
            }
            if (v35 < v37()) {
              v29 >>= 1;
            }
            else {
              v28 = (__int64*)(v34 + 12);
              v29 += ~(v29 >> 1);
            }
          } while (v29 != 0);
          result = v120;
          a7 = v121;
        }
        v39 = 0xAAAAAAAAAAAAAAABLL * (((char*)v28 - v27) >> 2);
      }
      v54 = v125;
      v55 = (__int64)a3;
      if (v28 != a2) {
        v55 = (__int64)v28;
        if (a2 != (__int64*)a3) {
          if ((__int64*)((char*)v28 + 12) == a2) {
            v75 = a3 - (char*)a2;
            v76 = result;
            v132 = *((_DWORD*)v28 + 2);
            v129 = *v28;
            memmove(v28, (char*)v28 + 12, v75);
            v55 = (__int64)v28 + v75;
            result = v76;
            *(_QWORD*)v55 = v129;
            v54 = v125;
            *(_DWORD*)(v55 + 8) = v132;
          }
          else {
            if ((char*)a2 + 12 == a3) {
              v55 = (__int64)v28 + 12;
              v130 = *(_QWORD*)(a3 - 12);
              v133 = *((_DWORD*)a3 - 1);
              if (a3 - 12 != (char*)v28) {
                v77 = result;
                memmove((char*)v28 + 12, v28, a3 - 12 - (char*)v28);
                result = v77;
              }
              *((_DWORD*)v28 + 2) = v133;
              *v28 = v130;
            }
            else {
              v56 = (char*)a2 - (char*)v28;
              v57 = 0xAAAAAAAAAAAAAAABLL * (((char*)a2 - (char*)v28) >> 2);
              v58 = 0xAAAAAAAAAAAAAAABLL * ((a3 - (char*)a2) >> 2);
              if (v57 == v58) {
                v59 = 0;
                do {
                  v60 = (__int64*)((char*)a2 + v59);
                  v61 = (__int64*)((char*)v28 + v59);
                  v59 += 12;
                  v62 = *((_DWORD*)v60 + 2);
                  v63 = *v61;
                  v64 = *((_DWORD*)v61 + 2);
                  *v61 = *v60;
                  *((_DWORD*)v61 + 2) = v62;
                  *v60 = v63;
                  *((_DWORD*)v60 + 2) = v64;
                  v65 = (char*)v60 + 12;
                } while ((__int64*)((char*)v61 + 12) != a2 && v65 != a3);
                v55 = (__int64)a2;
              }
              else {
                do {
                  v67 = v57;
                  v57 = v58;
                  v58 = v67 % v58;
                } while (v58 != 0);
                v68 = 3 * v57;
                if (4 * v68 != 0) {
                  v69 = (__int64)v28 + 4 * v68;
                  do {
                    v70 = *(_QWORD*)(v69 - 12);
                    v69 -= 12;
                    v71 = (_QWORD*)(v56 + v69);
                    v72 = (_QWORD*)v69;
                    v128 = v70;
                    v131 = *(_DWORD*)(v69 + 8);
                    do {
                      v73 = v71;
                      v74 = *v71;
                      *((_DWORD*)v72 + 2) = *((_DWORD*)v73 + 2);
                      *v72 = v74;
                      v71 = (_QWORD*)((char*)v73 + v56);
                      v72 = v73;
                      if (v56 >= a3 - (char*)v73) {
                        v71 = (__int64*)((char*)a2 - (a3 - (char*)v73));
                      }
                    } while (v71 != (_QWORD*)v69);
                    *((_DWORD*)v73 + 2) = v131;
                    *v73 = v128;
                  } while ((__int64*)v69 != v28);
                }
                v55 = (__int64)v28 + a3 - (char*)a2;
              }
            }
            v54 = v125;
          }
        }
      }
      v78 = v54 - v25;
      a5 = -(v39 + v13);
      if (v39 + v25 >= v54 - (v39 + v25) - v13) {
        v80 = result;
        result = game_fc76e0(v55, a3, v123, a4, -(v39 + v13), v78, a7, a8);
        v79 = v80;
        a3 = (char*)v28;
        v78 = v25;
        a5 = v39;
        v123 = (char*)v55;
      }
      else {
        result = game_fc76e0(result, v28, v55, a4, v39, v25, a7, a8);
        v79 = v55;
      }
      a2 = (__int64*)a3;
      a3 = v123;
      v125 = v78;
      v12 = v79;
      if (v78 == 0) {
        return result;
      }
    }
    if (a5 <= v125) {
      if ((__int64*)v12 != a2) {
        v96 = -a7;
        v97 = a7;
        v98 = v12;
        do {
          v99 = *(_QWORD*)v98;
          v100 = *(_DWORD*)(v98 + 8);
          v98 += 12;
          v96 -= 12;
          *(_DWORD*)(v97 + 8) = v100;
          *(_QWORD*)v97 = v99;
          v97 += 12;
        } while ((__int64*)v98 != a2);
        while (a2 != (__int64*)a3) {
          v103 = *(_QWORD*)(a4 + 8);
          v104 = *(__int64 (**)(_QWORD))v103;
          v105 = *(_QWORD*)(v103 + 8);
          v106 = (__int64*)((char*)a2 + (v105 >> 1));
          if ((v105 & 1) != 0) {
            v104 = *(__int64 (**)(_QWORD))((char*)v104 + *v106);
          }
          v107 = v104(v106);
          v108 = *(_QWORD*)(a4 + 8);
          v109 = *(__int64 (**)(_QWORD))v108;
          v110 = *(_QWORD*)(v108 + 8);
          v111 = (_QWORD*)(a7 + (v110 >> 1));
          if ((v110 & 1) != 0) {
            v109 = *(__int64 (**)(_QWORD))((char*)v109 + *v111);
          }
          result = v109(v111);
          if (v107 >= (int)result) {
            v101 = *(_QWORD*)a7;
            v102 = *(_DWORD*)(a7 + 8);
            a7 += 12;
          }
          else {
            v101 = *a2;
            v102 = *((_DWORD*)a2 + 2);
            a2 = (__int64*)((char*)a2 + 12);
          }
          *(_DWORD*)(v12 + 8) = v102;
          *(_QWORD*)v12 = v101;
          v12 += 12;
          if (v97 == a7) {
            return result;
          }
        }
        return memmove(v12, a7, -(a7 + v96));
      }
    }
    else if (a2 != (__int64*)a3) {
      v81 = 0;
      do {
        v82 = (__int64*)((char*)a2 + v81);
        v83 = a7 + v81;
        v81 += 12;
        v84 = *v82;
        *(_DWORD*)(v83 + 8) = *((_DWORD*)v82 + 2);
        *(_QWORD*)v83 = v84;
      } while ((char*)a2 + v81 != a3);
      v85 = a7 + v81;
      while (a2 != (__int64*)v12) {
        v88 = *(_QWORD*)(a4 + 8);
        v89 = *(__int64 (**)(_QWORD))v88;
        v90 = *(_QWORD*)(v88 + 8);
        v91 = (_QWORD*)(v85 - 12 + (v90 >> 1));
        if ((v90 & 1) != 0) {
          v89 = *(__int64 (**)(_QWORD))((char*)v89 + *v91);
        }
        v92 = v89(v91);
        v93 = *(_QWORD*)(a4 + 8);
        v94 = *(__int64 (**)(void))v93;
        v95 = *(_QWORD*)(v93 + 8);
        if ((v95 & 1) != 0) {
          v94 = *(__int64 (**)(void))((char*)v94 +
                                      *(__int64*)((char*)a2 + (v95 >> 1) - 12));
        }
        result = v94();
        if (v92 >= (int)result) {
          v86 = v85 - 12;
        }
        else {
          v86 = (__int64)a2 - 12;
        }
        if (v92 >= (int)result) {
          v85 -= 12;
        }
        else {
          a2 = (__int64*)((char*)a2 - 12);
        }
        v87 = *(_DWORD*)(v86 + 8);
        *(_QWORD*)(a3 - 12) = *(_QWORD*)v86;
        a3 -= 12;
        *((_DWORD*)a3 + 2) = v87;
        if (v85 == a7) {
          return result;
        }
      }
      if (a7 != v85) {
        v116 = -12;
        do {
          v117 = *(_QWORD*)(v85 - 12);
          v85 -= 12;
          v118 = &a3[v116];
          v116 -= 12;
          v119 = *(_DWORD*)(v85 + 8);
          *(_QWORD*)v118 = v117;
          *((_DWORD*)v118 + 2) = v119;
        } while (v85 != a7);
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_fcb000(PSEUDO_X8 x8_, __int64 unused_int0,
                                            __int16 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v2;
  float v3;
  __int64 v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  __int16 v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v20 = a2;
    v15 = a1;
    v10 = __cxa_guard_acquire(&GameData_21a60e8);
    a1 = v15;
    a2 = v20;
    if (v10 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      a1 = v15;
      a2 = v20;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v21 = a2;
    v16 = a1;
    v11 = __cxa_guard_acquire(&GameData_21a60e8);
    a1 = v16;
    a2 = v21;
    if (v11 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      a1 = v16;
      a2 = v21;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v22 = a2;
    v17 = a1;
    v12 = __cxa_guard_acquire(&GameData_21a60e8);
    a1 = v17;
    a2 = v22;
    if (v12 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      a1 = v17;
      a2 = v22;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v23 = a2;
    v18 = a1;
    v13 = __cxa_guard_acquire(&GameData_21a60e8);
    a1 = v18;
    a2 = v23;
    if (v13 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      a1 = v18;
      a2 = v23;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                            memory_order_acquire) &
       1) == 0) {
    v24 = a2;
    v19 = a1;
    v14 = __cxa_guard_acquire(&GameData_21a60e8);
    a1 = v19;
    a2 = v24;
    if (v14 != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
      a1 = v19;
      a2 = v24;
    }
  }
  v2 = vcvts_n_f32_u32(16 * (a1 & 0xF), 8u);
  v3 = vcvts_n_f32_u32(a1 & 0xFFF0, 8u) + 0x1.0000000000000p-4f;
  *(float*)(a2 + 8) = v2 + 0x1.0000000000000p-4f;
  *(float*)(a2 + 12) = v3;
  *(float*)a2 = v2 + 0.0f;
  *(float*)(a2 + 4) = v3;
  *(float*)(a2 + 16) = v2 + 0x1.0000000000000p-4f;
  *(float*)(a2 + 20) = v3 + -0x1.0000000000000p-4f;
  *(float*)(a2 + 24) = v2 + 0.0f;
  *(float*)(a2 + 28) = v3 + -0x1.0000000000000p-4f;
  v4 = *(_QWORD*)(a2 + 16);
  v5 = *(_QWORD*)(a2 + 24);
  *(float*)(a2 + 32) = v2 + 0x1.0000000000000p-5f;
  *(float*)(a2 + 36) = v3 + -0x1.0000000000000p-5f;
  v6 = COERCE_FLOAT(*(_QWORD*)(a2 + 8)) + -0x1.0000000000000p-12f;
  v7 = COERCE_FLOAT(HIDWORD(*(_QWORD*)a2)) + -0x1.0000000000000p-12f;
  v8 = COERCE_FLOAT(HIDWORD(*(_QWORD*)(a2 + 8))) + -0x1.0000000000000p-12f;
  *(float*)a2 = COERCE_FLOAT(*(_QWORD*)a2) + 0x1.0000000000000p-12f;
  *(float*)(a2 + 4) = v7;
  *(float*)(a2 + 8) = v6;
  *(float*)(a2 + 12) = v8;
  *(float*)(a2 + 16) = *(float*)&v4 + -0x1.0000000000000p-12f;
  *(float*)(a2 + 20) = *((float*)&v4 + 1) + 0x1.0000000000000p-12f;
  *(float*)(a2 + 24) = *(float*)&v5 + 0x1.0000000000000p-12f;
  *(float*)(a2 + 28) = *((float*)&v5 + 1) + 0x1.0000000000000p-12f;
  {
    *((float*)&v5 + 1) + 0x1.0000000000000p-12f;
    return;
  }
}

void game_fcb290(__int64 a1, float32x4_t* a2, int a3, int a4, int a5, int a6,
                 unsigned __int64* a7, unsigned __int64* a8)
{
  __int64 v14;
  float v15;
  float32x2_t v16;
  int8x16_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;

  v14 = GameData_212d020[0];
  LANES128(v20).n128_u8[0] = a4;
  LANES128(v20).n128_u8[1] = a5;
  LANES128(v20).n128_u16[1] = 0;
  v15 = HeightCellMap_1002e20(*(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL) +
                                  56LL * a3 + 16,
                              &v20, (unsigned int)a6);
  LANES64(v16).n64_u32[0] = 0;
  LANES64(v16).n64_f32[1] = v15;
  LANES128(v17).n128_u64[0] = 0x8000000080000000LL;
  LANES128(v17).n128_u64[1] = 0x8000000080000000LL;
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t,
                                    COERCE_UNSIGNED_INT((float)a4 *
                                                        0x1.4000000000000p+2f)),
                          v16))
          .n64_u64[0];
  LANES128(v18).n128_u64[1] =
      COERCE_UNSIGNED_INT((float)((float)a5 * 0x1.4000000000000p+2f) + 0.0f);
  v19 = v18;
  v20 = vaddq_f32(
      vbslq_s8(v17, COERCE_AS(int8x16_t, 0),
               vdupq_lane_s32(
                   COERCE_AS(int32x2_t, COERCE_UNSIGNED_INT((float)a6)), 0)),
      v18);
  MeshData_f555a0(a2, &v20, a7, a8);
  v20 = vaddq_f32(
      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83480), (float)a6), v19);
  MeshData_f555a0(a2, &v20, a7 + 1, a8);
  v20 = vaddq_f32(
      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83050), (float)a6), v19);
  MeshData_f555a0(a2, &v20, a7 + 2, a8);
  v20 = vaddq_f32(
      vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a83590), (float)a6), v19);
  MeshData_f555a0(a2, &v20, a7 + 3, a8);
  if ((LANES128(a2[14]).n128_u8[12] & 1) == 0) {
    if (LANES128(a2[15]).n128_u32[0] != 2) {
      return;
    }
    goto LABEL_5;
  }
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)v14 + 8LL) + 9LL) == 1) {
  LABEL_5:
    v20 = vaddq_f32(
        vmulq_n_f32(COERCE_AS(float32x4_t, GameData_1a82a60), (float)a6), v19);
    MeshData_f555a0(a2, &v20, a7 + 4, a8);
  }
}

__int64 game_fcfcc0(__int64 result, unsigned int a2, int a3, unsigned int a4,
                    char a5)
{
  unsigned int v5;
  __int64* v8;
  __int64 v9;
  __int64* i;
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
  __int64 (*v22)(_QWORD);
  __int64 v23;
  _QWORD* v24;
  _QWORD v28[3];
  struct {
    __int64 v29;
    __int64 v30;
  } v29_;

  if (a3 >= 1) {
    v5 = 1;
    do {
      result = (__int64)X8CALL_X0(
          void*,
          ChapterVariableFile_fcfea0((void*)(v28), result, a2, v5, a4, a5 & 1));
      v9 = v28[0];
      v8 = (__int64*)v28[1];
      for (i = (__int64*)v28[0]; i != v8; ++i) {
        v12 = *i;
        v13 = *(__int64**)(*i + 24);
        v15 = *v13;
        v14 = v13[1];
        if (v14 == *v13) {
        LABEL_11:
          if (*(_WORD*)(v12 + 56) != 0) {
            v16 = 8LL * *(unsigned __int16*)(v12 + 56);
            v17 = 0;
            do {
              v29_.v30 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + v17);
              v29_.v29 = game_HashString(v29_.v30);
              result = game_VariableManager_SetFlag((__int64)&v29_.v29, 1);
              v17 += 8;
            } while (v16 != v17);
          }
          if (*(_WORD*)(v12 + 72) != 0) {
            v18 = 8LL * *(unsigned __int16*)(v12 + 72);
            v19 = 0;
            do {
              v29_.v30 = *(_QWORD*)(*(_QWORD*)(v12 + 80) + v19);
              v29_.v29 = game_HashString(v29_.v30);
              result = game_VariableManager_SetFlag((__int64)&v29_.v29, 1);
              v19 += 8;
            } while (v18 != v19);
          }
        }
        else {
          while (1) {
            if (*(_QWORD*)v15 != 0) {
              v20 = game_GameModeData_instance_;
              if (game_GameModeData_instance_ != 0) {
                v21 = game_GameVariableTable_Find_alt1(
                    *(_QWORD**)(game_GameModeData_instance_ + 48),
                    (unsigned __int64*)v15);
                if (v21 != 0) {
                  v22 = *(__int64 (**)(_QWORD))(v21 + 72);
                  v23 = *(_QWORD*)(v21 + 80);
                  v24 = (_QWORD*)(v21 + (v23 >> 1));
                  if ((v23 & 1) != 0) {
                    v22 = *(__int64 (**)(_QWORD))((char*)v22 + *v24);
                  }
                  result = v22(v24);
                }
                else {
                  result = 1;
                }
              }
              if (*(_BYTE*)(v15 + 16) != ((v20 == 0) | result & 1)) {
                break;
              }
            }
            v15 += 24;
            if (v15 == v14) {
              goto LABEL_11;
            }
          }
        }
      }
      if (v9 != 0) {
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (_QWORD)(v9));
      }
    } while (v5++ != a3);
  }
  return result;
}

__int64 game_fd4180(__int64 result)
{
  __int64 v1;
  int* v2;
  int v3;
  int v4;
  __int64 v6;
  __int64 v7;
  int v8;
  unsigned int v9;
  unsigned int v10;
  char* v11;
  const char* v12;
  __int64** v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  char* v25;
  __int64 v26;
  __int64 v27;
  char v28;
  __int64 v29;
  const char** v30;
  char* v31;
  unsigned __int64 v32;
  __int64 v33;
  const char* v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64* v42;
  char v43;
  __int64 v44;
  __int64 v45;
  char v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  unsigned __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64* v75;
  __int64* v76;
  __int64 v77;
  struct {
    __int64 v78;
    unsigned __int64 v79;
    char* v80;
  } v78_;
  struct {
    __int64 v81;
    unsigned __int64 v82;
    char* v83;
  } v81_;
  struct {
    __int64* v84;
    __int64* v85;
    __int64* v86;
    __int64 v87;
    char v88;
    char gap145_[7];
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
    __int64 v100;
    __int64 v101;
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
    __int64 v112;
    __int64 v113;
    __int64 v114;
    __int64 v115;
  } v84_;
  struct {
    __int64 v116;
    __int64 v117;
    __int64 v118;
  } v116_;

  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    return result;
  }
  v1 = *(_QWORD*)(GameData_21f3d10 + 48);
  if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) == 0) {
    v1 = *(_BYTE*)(GameData_21f3d10 + 40) >> 1;
  }
  if (v1 == 7) {
    v2 = (int*)(GameData_21f3d10 + 41);
    if ((*(_BYTE*)(GameData_21f3d10 + 40) & 1) != 0) {
      v2 = *(int**)(GameData_21f3d10 + 56);
    }
    v3 = *v2;
    v4 = *(int*)((char*)v2 + 3);
    if (v3 == *(_DWORD*)"Hub_000" && v4 == *(_DWORD*)"_000") {
      v72 = result;
      v84_.v85 = (__int64*)&GameData_1ac05bb;
      v84_.v84 = (__int64*)game_HashString((__int64)&GameData_1ac05bb);
      if (game_GameModeData_instance_ == 0 ||
          (v6 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v84_.v84)) == 0 ||
          *(int*)(v6 + 32) < 1) {
      LABEL_36:
        v116_.v117 = 0;
        v116_.v118 = 0;
        v116_.v116 = 0;
        GameHr_dc0d60(*GameData_212cbe8[0], &v116_.v116);
        v17 = v116_.v116;
        v77 = v116_.v117;
        if (v116_.v117 == v116_.v116) {
          v65 = 0;
          v74 = 0;
          v75 = nullptr;
          if (v116_.v116 != 0) {
          LABEL_127:
            v66 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v17);
          }
        LABEL_130:
          result = v72;
          v67 = *(_QWORD*)(v72 + 176);
          if (v67 != 0) {
            *(_QWORD*)(v72 + 184) = v67;
            v68 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v68 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v67);
            result = v72;
          }
          *(_QWORD*)(result + 176) = v65;
          *(_QWORD*)(result + 184) = v75;
          *(_QWORD*)(result + 192) = v74;
          goto LABEL_135;
        }
        v84_.v89 = 0;
        v84_.v90 = 0;
        v84_.v91 = 0;
        v84_.v92 = 0;
        v84_.v93 = 0;
        v84_.v94 = 0;
        v84_.v95 = 0;
        v84_.v96 = 0;
        v84_.v97 = 0;
        v84_.v98 = 0;
        v84_.v99 = 0;
        v84_.v100 = 0;
        v84_.v101 = 0;
        v84_.v102 = 0;
        v84_.v103 = 0;
        v84_.v104 = 0;
        v84_.v105 = 0;
        v84_.v106 = 0;
        v84_.v107 = 0;
        v84_.v108 = 0;
        v84_.v109 = 0;
        v84_.v110 = 0;
        v84_.v111 = 0;
        v84_.v112 = 0;
        v84_.v113 = 0;
        v84_.v114 = 0;
        v84_.v115 = 0;
        v84_.v86 = nullptr;
        v84_.v87 = 0;
        v84_.v84 = GameData_212fd50[0] + 2;
        v84_.v85 = (_QWORD*)&GameRoutine_314104;
        v84_.v88 = 1;
        GameHr_102abb0((__int64)&v84_.v84);
        v73 = 0;
        v74 = 0;
        v75 = nullptr;
        v18 = (__int64*)fw_memory_g_heap_manager_ptr;
        while (1) {
          v21 = *(const char**)(*(_QWORD*)v17 + 32LL);
          v22 = strlen_alt1(v21);
          if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0_alt1();
          }
          v23 = v22;
          v24 = (__int64*)v17;
          if (v22 >= 0x17) {
            break;
          }
          v25 = (char*)&v81_.v81 + 1;
          LOBYTE(v81_.v81) = 2 * v22;
          if (v22 != 0) {
            goto LABEL_51;
          }
        LABEL_52:
          v25[v23] = 0;
          v27 = 0;
          v28 = v81_.v81;
          v29 = (__int64)v81_.v83;
          v30 = (const char**)GameData_212fbf8;
          if ((v81_.v81 & 1) != 0) {
            v31 = v81_.v83;
          }
          else {
            v31 = (char*)&v81_.v81 + 1;
          }
          if ((v81_.v81 & 1) != 0) {
            v32 = v81_.v82;
          }
          else {
            v32 = (unsigned __int8)v81_.v81 >> 1;
          }
          do {
            v34 = *v30;
            v30 += 2;
            v33 = (__int64)v34;
            v35 = strlen_alt1(v34);
            if (v35 == v32) {
              if (v35 == -1) {
                fs_60a230();
              }
              if (memcmp_alt1((__int64)v31, v33, v35) == 0) {
                v36 = 0x100000000LL - v27;
                v37 = v24;
                if ((v28 & 1) == 0) {
                  goto LABEL_69;
                }
                goto LABEL_65;
              }
            }
            --v27;
          } while (v27 != -32);
          v36 = 0;
          v37 = v24;
          if ((v28 & 1) != 0) {
          LABEL_65:
            if (v29 != 0) {
              v38 = 128;
              if (*(_QWORD*)(*v18 + 200) == 0) {
                v38 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v18 + v38, v29);
            }
          }
        LABEL_69:
          if (HIDWORD(v36) != 0) {
            game_dc0960((void*)(&v81_.v81), *v37);
            v39 = v84_.v104;
            v40 = v84_.v105;
            if (v84_.v104 != v84_.v105) {
              v76 = v37;
              while (1) {
                if (*(_DWORD*)(v39 + 88) == (_DWORD)v36) {
                  v41 = (__int64*)v81_.v81;
                  v42 = (__int64*)v81_.v82;
                  if (v81_.v81 != v81_.v82) {
                    v43 = 0;
                    do {
                      if ((*(_BYTE*)v41 & 1) != 0) {
                        fw_text_String_CopyTerminated(&v78_.v78, v41[2],
                                                      v41[1]);
                      }
                      else {
                        v44 = *v41;
                        v45 = v41[2];
                        v78_.v79 = v41[1];
                        v78_.v80 = (char*)v45;
                        v78_.v78 = v44;
                      }
                      v46 = v78_.v78;
                      if ((v78_.v78 & 1) != 0) {
                        v47 = v78_.v79;
                      }
                      else {
                        v47 = (unsigned __int64)(unsigned __int8)v78_.v78 >> 1;
                      }
                      v48 = *(unsigned __int8*)(v39 + 96);
                      v49 = *(_QWORD*)(v39 + 104);
                      if ((v48 & 1) == 0) {
                        v49 = v48 >> 1;
                      }
                      if (v47 == v49) {
                        if ((v78_.v78 & 1) != 0) {
                          v50 = v78_.v80;
                        }
                        else {
                          v50 = (char*)&v78_.v78 + 1;
                        }
                        if ((v48 & 1) != 0) {
                          v51 = *(_QWORD*)(v39 + 112);
                        }
                        else {
                          v51 = v39 + 97;
                        }
                        v43 |= memcmp_alt1((__int64)v50, v51, v47) == 0;
                      }
                      if ((v46 & 1) != 0 && v78_.v80 != nullptr) {
                        v52 = 128;
                        if (*(_QWORD*)(*v18 + 200) == 0) {
                          v52 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(*v18 + v52,
                                                           (__int64)v78_.v80);
                      }
                      v41 += 3;
                    } while (v41 != v42);
                    if ((v43 & 1) != 0) {
                      break;
                    }
                  }
                }
                v39 += 128;
                if (v39 == v40) {
                  v37 = v76;
                  goto LABEL_100;
                }
              }
              if ((unsigned __int64)v75 >= v74) {
                v37 = v76;
                v58 = (unsigned __int64)v75 - v73;
                v59 = ((__int64)v75 - v73) >> 3;
                v60 = v59 + 1;
                if ((unsigned __int64)(v59 + 1) >> 61 != 0) {
                  GameRoutine_dc8470();
                }
                if ((__int64)(v74 - v73) >> 2 > v60) {
                  v60 = (__int64)(v74 - v73) >> 2;
                }
                if (v74 - v73 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v61 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v61 = v60;
                }
                if (v61 != 0) {
                  if (v61 >> 61 != 0) {
                    GameRoutine_60a210_alt1();
                  }
                  v62 =
                      fw_memory_HeapManager_Allocate_alt1(*v18, 8 * v61, 16, 0);
                }
                else {
                  v62 = 0;
                }
                v63 = v62 + v58 - 8 * v59;
                *(_QWORD*)(v62 + v58) = *v76;
                v74 = v62 + 8 * v61;
                v75 = (__int64*)(v62 + v58 + 8);
                memcpy_alt1(v63, v73, v58);
                if (v73 != 0) {
                  v64 = 128;
                  if (*(_QWORD*)(*v18 + 200) == 0) {
                    v64 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v18 + v64, v73);
                }
                v73 = v63;
              }
              else {
                v37 = v76;
                *v75++ = *v76;
              }
            }
          LABEL_100:
            v19 = v81_.v81;
            if (v81_.v81 != 0) {
              v53 = v81_.v82;
              if (v81_.v81 == v81_.v82) {
                goto LABEL_39;
              }
              v54 = v81_.v82;
              do {
                v55 = *(_BYTE*)(v54 - 24);
                v54 -= 24LL;
                if ((v55 & 1) != 0) {
                  v56 = *(_QWORD*)(v53 - 8);
                  if (v56 != 0) {
                    v57 = 128;
                    if (*(_QWORD*)(*v18 + 200) == 0) {
                      v57 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v18 + v57, v56);
                  }
                }
                v53 = v54;
              } while (v54 != v19);
              v81_.v82 = v19;
              v19 = v81_.v81;
              if (v81_.v81 != 0) {
              LABEL_39:
                v20 = 128;
                if (*(_QWORD*)(*v18 + 200) == 0) {
                  v20 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v18 + v20, v19);
              }
            }
          }
          v17 = (__int64)(v37 + 1);
          if (v17 == v77) {
            MapSimulator_Destructor((__int64)&v84_.v84);
            v17 = v116_.v116;
            v65 = v73;
            if (v116_.v116 != 0) {
              goto LABEL_127;
            }
            goto LABEL_130;
          }
        }
        if ((v22 | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (v22 | 7) + 1;
        }
        v25 = (char*)fw_memory_HeapManager_Allocate_alt1(*v18, v26, 16, 0);
        v81_.v82 = v23;
        v81_.v83 = v25;
        v81_.v81 = v26 | 1;
      LABEL_51:
        memmove_alt1((__int64)v25, (__int64)v21, v23);
        goto LABEL_52;
      }
      v84_.v85 = (__int64*)&GameData_1ac05bb;
      v84_.v84 = (__int64*)game_HashString((__int64)&GameData_1ac05bb);
      game_VariableManager_SetFlag((__int64)&v84_.v84, 0);
      v7 = v72;
      LOWORD(v84_.v84) = 0;
      if (game_GameModeData_instance_ != 0) {
        v8 = *(_DWORD*)(game_GameModeData_instance_ + 64);
        v9 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
        if (v9 <= 2) {
          if (v9 == 1) {
            v10 = v8 - 4;
            if (v10 >= 3) {
              goto LABEL_30;
            }
            v11 = (char*)&GameData_1ba1414;
          }
          else {
            if (v9 != 2) {
              goto LABEL_30;
            }
            v10 = v8 - 4;
            if (v10 >= 4) {
              goto LABEL_30;
            }
            v11 = (char*)&GameData_1ba1420;
          }
          goto LABEL_28;
        }
        if (v9 != 3) {
          if (v9 != 4) {
            goto LABEL_30;
          }
          v10 = v8 - 4;
          if (v10 >= 3) {
            goto LABEL_30;
          }
          v11 = (char*)&GameData_1ba1430;
        LABEL_28:
          v12 = &v11[*(int*)&v11[4 * v10]];
        LABEL_29:
          GameRoutine_60a020_alt2((__int64)&v84_.v84, v12);
          v7 = v72;
          goto LABEL_30;
        }
        if (v8 == 5) {
          v12 = "MID_LGV_1SEO_LG13_009_m01";
          goto LABEL_29;
        }
        if (v8 == 6) {
          v12 = "MID_LGV_1SEO_LG13_010_m02";
          goto LABEL_29;
        }
      }
    LABEL_30:
      v13 = (__int64**)(v7 + 152);
      if ((*(_BYTE*)(v7 + 152) & 1) != 0) {
        v14 = *(_QWORD*)(v7 + 168);
        if (v14 != 0) {
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v14);
        }
      }
      v16 = v84_.v85;
      *v13 = v84_.v84;
      v13[1] = v16;
      v13[2] = v84_.v86;
      goto LABEL_36;
    }
  }
LABEL_135:
  v69 = *(unsigned __int8*)(result + 152);
  if ((v69 & 1) != 0) {
    v70 = *(_QWORD*)(result + 160);
  }
  else {
    v70 = v69 >> 1;
  }
  if (v70 != 0 || *(_QWORD*)(result + 184) != *(_QWORD*)(result + 176)) {
    v71 = *(_QWORD*)(result + 8);
    if (v71 != 0) {
      while (1) {
        if (*(_BYTE*)v71 == 2) {
          if (*(_DWORD*)(v71 + 32) == 2) {
            *(_QWORD*)(result + 16) = v71;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v71 == 0) {
          return result;
        }
        v71 += 64;
      }
    }
  }
  return result;
}

void game_fd58e0(unsigned __int64 a1, int* a2, __int64 a3, char a4)
{
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  unsigned __int64 v18;
  const char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  const char* v23;
  unsigned __int64 v24;
  const char* v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  const char* v29;
  unsigned __int64 v30;
  const char* v31;
  int v32;
  int v33;
  const char* v34;
  unsigned __int64 v35;
  const char* v36;
  unsigned __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  const char* v44;
  unsigned __int64 v45;
  const char* v46;
  int v47;
  int v48;
  const char* v49;
  unsigned __int64 v50;
  const char* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  char v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  const char* v61;
  bool v62;
  bool v63;
  const char* v64;
  __int64 v65;
  int v66;
  const char* v67;
  unsigned __int64 v68;
  const char* v69;
  const char* v70;
  unsigned __int64 v71;
  int v72;
  int v73;
  const char* v74;
  unsigned __int64 v75;
  const char* v76;
  unsigned __int64 v77;
  const char* v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  const char* v81;
  unsigned __int64 v82;
  int v83;
  int v84;
  const char* v85;
  unsigned int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  const char* v90;
  unsigned __int64 v91;
  int v92;
  int v93;
  const char* v94;
  const char* v95;
  unsigned __int64 v96;
  int v97;
  int v98;
  const char* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  char v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  const char* v109;
  int* v110;
  const char* v111;
  __int64* v112;
  unsigned __int64 v113;
  const char* v114;
  unsigned int v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  int* v121;
  __int64 v122;
  int* v123;
  __int64 v124;
  const char* v125;
  int* v126;
  __int64* v127;
  const char* v128;
  unsigned __int64 v129;
  const char* v130;
  unsigned __int64 v131;
  __int64 v132;
  __int64 v133;
  const char* v134;
  __int64 v135;
  _QWORD* v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  const char* v144;
  unsigned __int64 v145;
  const char* v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  unsigned __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  signed __int64 v153;
  __int64 v154;
  const char* v155;
  signed __int64 v156;
  __int64 v157;
  unsigned __int64 v158;
  const char* v159;
  unsigned __int64 v160;
  const char* v161;
  unsigned __int64 v162;
  const char* v163;
  __int64* v164;
  unsigned __int64 v165;
  const char* v166;
  __int64 v167;
  const char* v168;
  const char* v169;
  unsigned __int64 v170;
  const char* v171;
  unsigned __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  const char* v178;
  unsigned __int64 v179;
  const char* v180;
  unsigned __int64 v181;
  char v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  _QWORD* v189;
  __int64 v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  unsigned __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  const char* v198;
  unsigned __int64 v199;
  const char* v200;
  unsigned __int64 v201;
  bool v202;
  __int64 v203;
  char v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  const char* v213;
  unsigned __int64 v214;
  const char* v215;
  const char* v216;
  __int64 v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  const char* v223;
  unsigned __int64 v224;
  const char* v225;
  char v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  const char* v230;
  int* v231;
  __int64* v232;
  __int64 v233;
  const char* v234;
  __int64 v235;
  int* v236;
  int v237;
  __int64* v238;
  char v239;
  const char* v240;
  unsigned __int64 v241;
  const char* v242;
  __int64* v243;
  __int64 v244;
  __int64 v245;
  const char* v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  const char* v250;
  unsigned __int64 v251;
  const char* v252;
  char v253;
  __int64* v254;
  __int64 v255;
  char v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  int v261;
  unsigned int* v262;
  signed __int64 v263;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  int v270;
  int v271;
  int v272;
  int v273;
  int v274;
  int v275;
  struct {
    __int64 v276;
    __int64 v277;
    const char* v278;
  } v276_;

  while (2) {
    v7 = (unsigned __int64)a2;
    v8 = a1;
    v262 = (unsigned int*)(a2 - 8);
    while (1) {
      while (1) {
        while (1) {
          a1 = v8;
          v9 = (__int64)(v7 - v8) >> 5;
          if (v9 > 2) {
            switch (v9) {
            case 3LL:
              GameRoutine_fd6b40((unsigned int*)v8, (unsigned int*)(v8 + 32),
                                 v262);
              return;
            case 4LL:
              GameRoutine_fd6db0(v8, v8 + 32, v8 + 64, (__int64)v262);
              return;
            case 5LL:
              GameRoutine_fd6f70(v8, v8 + 32, v8 + 64, v8 + 96, (__int64)v262);
              return;
            default:
              break;
            }
          }
          else {
            if ((unsigned __int64)v9 < 2) {
              return;
            }
            v7 = (unsigned __int64)a2;
            if (v9 == 2) {
              v110 = a2 - 6;
              if ((*(_BYTE*)(a2 - 6) & 1) != 0) {
                v111 = *((const char**)a2 - 1);
              }
              else {
                v111 = (char*)a2 - 23;
              }
              v112 = (__int64*)(v8 + 8);
              v113 = GameHr_ffd180(*(a2 - 8), v111);
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v114 = *(const char**)(v8 + 24);
              }
              else {
                v114 = (const char*)(v8 + 9);
              }
              if (v113 > GameHr_ffd180(*(_DWORD*)v8, v114)) {
                v115 = *(_DWORD*)v8;
                *(_DWORD*)v8 = *(a2 - 8);
                *(a2 - 8) = v115;
                v116 = *v112;
                v276_.v276 = *(_QWORD*)(v8 + 16);
                v276_.v277 = *(_QWORD*)(v8 + 24);
                v118 = *((_QWORD*)a2 - 2);
                v117 = *((_QWORD*)a2 - 1);
                *v112 = *(_QWORD*)v110;
                *(_QWORD*)(v8 + 16) = v118;
                *(_QWORD*)(v8 + 24) = v117;
                v119 = v276_.v276;
                v120 = v276_.v277;
                *(_QWORD*)v110 = v116;
                *((_QWORD*)a2 - 2) = v119;
                *((_QWORD*)a2 - 1) = v120;
              }
              return;
            }
          }
          v265 = v8;
          if (v9 <= 23) {
            if ((a4 & 1) != 0) {
              if (v8 != v7) {
                v121 = (int*)(v8 + 32);
                if ((int*)(v8 + 32) != a2) {
                  v122 = 0;
                  v123 = (int*)v8;
                  do {
                    v126 = v123;
                    v123 = v121;
                    v127 = (__int64*)(v126 + 10);
                    if ((v126[10] & 1) != 0) {
                      v128 = *((const char**)v126 + 7);
                    }
                    else {
                      v128 = (char*)v126 + 41;
                    }
                    v129 = GameHr_ffd180(v126[8], v128);
                    if ((v126[2] & 1) != 0) {
                      v130 = *((const char**)v126 + 3);
                    }
                    else {
                      v130 = (char*)v126 + 9;
                    }
                    if (v129 > GameHr_ffd180(*v126, v130)) {
                      v131 = v8;
                      v272 = *v123;
                      v132 = *v127;
                      v133 = *((_QWORD*)v126 + 6);
                      *v127 = 0;
                      *((_QWORD*)v126 + 6) = 0;
                      v276_.v276 = v132;
                      v276_.v277 = v133;
                      v134 = *((const char**)v126 + 7);
                      *((_QWORD*)v126 + 7) = 0;
                      v276_.v278 = v134;
                      v135 = v122;
                      while (1) {
                        v136 = (_QWORD*)(v131 + v135);
                        v137 = v135;
                        *(_DWORD*)(v131 + v135 + 32) = *(_DWORD*)(v131 + v135);
                        v138 = v131 + v135 + 40;
                        if ((*(_BYTE*)v138 & 1) != 0) {
                          v139 = v136[7];
                          if (v139 != 0) {
                            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) !=
                                0) {
                              v140 = 128;
                            }
                            else {
                              v140 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt2(
                                fw_memory_g_heap_manager + v140, v139);
                          }
                        }
                        v141 = v136[1];
                        v142 = v136[2];
                        *((_WORD*)v136 + 4) = 0;
                        *(_QWORD*)v138 = v141;
                        *(_QWORD*)(v138 + 8) = v142;
                        *(_QWORD*)(v138 + 16) = v136[3];
                        if (v137 == 0) {
                          break;
                        }
                        v131 = v8;
                        v143 = v8 + v137;
                        if ((v276_.v276 & 1) != 0) {
                          v144 = v276_.v278;
                        }
                        else {
                          v144 = (char*)&v276_.v276 + 1;
                        }
                        v145 = GameHr_ffd180(v272, v144);
                        if ((*(_BYTE*)(v143 - 24) & 1) != 0) {
                          v146 = *(const char**)(v143 - 8);
                        }
                        else {
                          v146 = (const char*)(v143 - 23);
                        }
                        v147 = GameHr_ffd180(*(_DWORD*)(v143 - 32), v146);
                        v135 = v137 - 32;
                        if (v145 <= v147) {
                          v148 = v8;
                          v149 = v8 + v137;
                          goto LABEL_190;
                        }
                      }
                      v148 = v8;
                      v149 = v8;
                    LABEL_190:
                      *(_DWORD*)v149 = v272;
                      v150 = v148 + v137 + 8;
                      if ((*(_BYTE*)v150 & 1) != 0) {
                        v151 = *(_QWORD*)(v149 + 24);
                        if (v151 != 0) {
                          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                            v152 = 128;
                          }
                          else {
                            v152 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              fw_memory_g_heap_manager + v152, v151);
                        }
                      }
                      v124 = v276_.v276;
                      v125 = v276_.v278;
                      *(_QWORD*)(v150 + 8) = v276_.v277;
                      *(_QWORD*)(v150 + 16) = v125;
                      *(_QWORD*)v150 = v124;
                    }
                    v121 = v123 + 8;
                    v122 += 32;
                  } while (v123 + 8 != a2);
                }
              }
            }
            else if (v8 != v7) {
              v231 = (int*)(v8 + 32);
              if ((int*)(v8 + 32) != a2) {
                v232 = (__int64*)(v8 + 56);
                do {
                  v235 = a1;
                  v236 = v231;
                  v237 = *(_DWORD*)(a1 + 32);
                  v239 = *(_BYTE*)(a1 + 40);
                  v238 = (__int64*)(a1 + 40);
                  if ((v239 & 1) != 0) {
                    v240 = *(const char**)(v235 + 56);
                  }
                  else {
                    v240 = (const char*)(v235 + 41);
                  }
                  v241 = GameHr_ffd180(v237, v240);
                  if ((*(_BYTE*)(v235 + 8) & 1) != 0) {
                    v242 = *(const char**)(v235 + 24);
                  }
                  else {
                    v242 = (const char*)(v235 + 9);
                  }
                  if (v241 > GameHr_ffd180(*(_DWORD*)v235, v242)) {
                    v243 = v232;
                    v275 = *v236;
                    v244 = *v238;
                    v245 = v238[1];
                    *v238 = 0;
                    v238[1] = 0;
                    v276_.v276 = v244;
                    v276_.v277 = v245;
                    v246 = (const char*)v238[2];
                    v238[2] = 0;
                    v276_.v278 = v246;
                    do {
                      v254 = v243 - 2;
                      v253 = *((_BYTE*)v243 - 16);
                      *((_DWORD*)v243 - 6) = *((_DWORD*)v243 - 14);
                      if ((v253 & 1) != 0 && *v243 != 0) {
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                          v255 = 128;
                        }
                        else {
                          v255 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            fw_memory_g_heap_manager + v255, *v243);
                      }
                      v247 = *(v243 - 4);
                      v243 -= 4;
                      v248 = *(v243 - 2);
                      v249 = *(v243 - 1);
                      *((_WORD*)v243 - 8) = 0;
                      *v254 = v248;
                      v254[1] = v249;
                      v254[2] = v247;
                      if ((v276_.v276 & 1) != 0) {
                        v250 = v276_.v278;
                      }
                      else {
                        v250 = (char*)&v276_.v276 + 1;
                      }
                      v251 = GameHr_ffd180(v275, v250);
                      if ((*(_BYTE*)(v243 - 6) & 1) != 0) {
                        v252 = (const char*)*(v243 - 4);
                      }
                      else {
                        v252 = (char*)v243 - 47;
                      }
                    } while (v251 > GameHr_ffd180(*((_DWORD*)v243 - 14), v252));
                    v256 = *((_BYTE*)v243 - 16);
                    *((_DWORD*)v243 - 6) = v275;
                    if ((v256 & 1) != 0 && *v243 != 0) {
                      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                        v257 = 128;
                      }
                      else {
                        v257 = 56;
                      }
                      nn_mem_StandardAllocator_Free_alt2(
                          fw_memory_g_heap_manager + v257, *v243);
                    }
                    v233 = v276_.v276;
                    v234 = v276_.v278;
                    *(v243 - 1) = v276_.v277;
                    *v243 = (__int64)v234;
                    *(v243 - 2) = v233;
                  }
                  v231 = v236 + 8;
                  v232 += 4;
                  a1 = (unsigned __int64)v236;
                } while (v236 + 8 != a2);
              }
            }
            return;
          }
          if (a3 == 0) {
            if (v8 != v7) {
              v153 = (unsigned __int64)(v9 - 2) >> 1;
              v263 = v153;
              do {
                v156 = v153;
                if (v263 >= v153) {
                  v157 = (2 * (v153 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                  v158 = a1 + 32 * v157;
                  if (2 * v153 + 2 < v9) {
                    v159 = (*(_BYTE*)(v158 + 8) & 1) != 0
                               ? *(const char**)(v158 + 24)
                               : (const char*)(v158 + 9);
                    v160 = GameHr_ffd180(*(_DWORD*)v158, v159);
                    v161 = (*(_BYTE*)(v158 + 40) & 1) != 0
                               ? *(const char**)(v158 + 56)
                               : (const char*)(v158 + 41);
                    if (v160 > GameHr_ffd180(*(_DWORD*)(v158 + 32), v161)) {
                      v158 += 32LL;
                      v157 = 2 * v156 + 2;
                    }
                  }
                  v162 = a1 + 32 * v156;
                  v163 = (*(_BYTE*)(v158 + 8) & 1) != 0
                             ? *(const char**)(v158 + 24)
                             : (const char*)(v158 + 9);
                  v164 = (__int64*)(v162 + 8);
                  v165 = GameHr_ffd180(*(_DWORD*)v158, v163);
                  v166 = (*(_BYTE*)(v162 + 8) & 1) != 0
                             ? *(const char**)(v162 + 24)
                             : (const char*)(v162 + 9);
                  if (v165 <= GameHr_ffd180(*(_DWORD*)v162, v166)) {
                    v273 = *(_DWORD*)v162;
                    v167 = *v164;
                    v168 = *(const char**)(v162 + 24);
                    v276_.v277 = *(_QWORD*)(v162 + 16);
                    v276_.v278 = v168;
                    v276_.v276 = v167;
                    *(_QWORD*)(v162 + 16) = 0;
                    *(_QWORD*)(v162 + 24) = 0;
                    *v164 = 0;
                    do {
                      v172 = v158;
                      *(_DWORD*)v162 = *(_DWORD*)v158;
                      if ((*(_BYTE*)(v162 + 8) & 1) != 0) {
                        v173 = *(_QWORD*)(v162 + 24);
                        if (v173 != 0) {
                          v174 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v174 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v174,
                              v173);
                        }
                      }
                      v175 = *(_QWORD*)(v158 + 16);
                      v176 = *(_QWORD*)(v158 + 24);
                      *(_QWORD*)(v162 + 8) = *(_QWORD*)(v158 + 8);
                      *(_QWORD*)(v162 + 16) = v175;
                      *(_QWORD*)(v162 + 24) = v176;
                      *(_WORD*)(v158 + 8) = 0;
                      if (v263 < v157) {
                        *(_DWORD*)v158 = v273;
                        goto LABEL_199;
                      }
                      v177 = (2 * v157) | 1;
                      v158 = a1 + 32 * v177;
                      if (2 * v157 + 2 < v9) {
                        if ((*(_BYTE*)(v158 + 8) & 1) != 0) {
                          v178 = *(const char**)(v158 + 24);
                        }
                        else {
                          v178 = (const char*)(v158 + 9);
                        }
                        v179 = GameHr_ffd180(*(_DWORD*)v158, v178);
                        if ((*(_BYTE*)(v158 + 40) & 1) != 0) {
                          v180 = *(const char**)(v158 + 56);
                        }
                        else {
                          v180 = (const char*)(v158 + 41);
                        }
                        v181 = GameHr_ffd180(*(_DWORD*)(v158 + 32), v180);
                        if (v179 > v181) {
                          v158 += 32LL;
                        }
                        a1 = v265;
                        if (v179 > v181) {
                          v177 = 2 * v157 + 2;
                        }
                      }
                      if ((*(_BYTE*)(v158 + 8) & 1) != 0) {
                        v169 = *(const char**)(v158 + 24);
                      }
                      else {
                        v169 = (const char*)(v158 + 9);
                      }
                      v170 = GameHr_ffd180(*(_DWORD*)v158, v169);
                      if ((v276_.v276 & 1) != 0) {
                        v171 = v276_.v278;
                      }
                      else {
                        v171 = (char*)&v276_.v276 + 1;
                      }
                      v162 = v172;
                      v157 = v177;
                    } while (v170 <= GameHr_ffd180(v273, v171));
                    v182 = *(_BYTE*)(v172 + 8);
                    *(_DWORD*)v172 = v273;
                    if ((v182 & 1) != 0) {
                      v183 = *(_QWORD*)(v172 + 24);
                      if (v183 != 0) {
                        v184 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v184 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v184,
                            v183);
                      }
                    }
                  LABEL_199:
                    v154 = v276_.v276;
                    v155 = v276_.v278;
                    *(_QWORD*)(v172 + 16) = v276_.v277;
                    *(_QWORD*)(v172 + 24) = v155;
                    *(_QWORD*)(v172 + 8) = v154;
                  }
                }
                v153 = v156 - 1;
              } while (v156 != 0);
              do {
                v185 = 0;
                v261 = *(_DWORD*)a1;
                v187 = *(_QWORD*)(a1 + 8);
                v186 = *(_QWORD*)(a1 + 16);
                *(_QWORD*)(a1 + 8) = 0;
                *(_QWORD*)(a1 + 16) = 0;
                v259 = v186;
                v260 = v187;
                v188 = *(_QWORD*)(a1 + 24);
                *(_QWORD*)(a1 + 24) = 0;
                v258 = v188;
                do {
                  v194 = a1 + 32 * v185;
                  v195 = (2 * v185) | 1;
                  v196 = 2 * v185 + 2;
                  v197 = v194 + 32;
                  if (v196 >= v9) {
                    v185 = (2 * v185) | 1;
                    *(_DWORD*)a1 = *(_DWORD*)v197;
                    v189 = (_QWORD*)(a1 + 8);
                  }
                  else {
                    if ((*(_BYTE*)(v194 + 40) & 1) != 0) {
                      v198 = *(const char**)(v194 + 56);
                    }
                    else {
                      v198 = (const char*)(v194 + 41);
                    }
                    v199 = GameHr_ffd180(*(_DWORD*)(v194 + 32), v198);
                    if ((*(_BYTE*)(v194 + 72) & 1) != 0) {
                      v200 = *(const char**)(v194 + 88);
                    }
                    else {
                      v200 = (const char*)(v194 + 73);
                    }
                    v201 = GameHr_ffd180(*(_DWORD*)(v194 + 64), v200);
                    v202 = v199 > v201;
                    v203 = 32;
                    if (v199 <= v201) {
                      v185 = v195;
                    }
                    else {
                      v203 = 64;
                      v185 = v196;
                    }
                    v189 = (_QWORD*)(a1 + 8);
                    v204 = *(_BYTE*)(a1 + 8);
                    if (v202) {
                      v197 = v194 + 64;
                    }
                    *(_DWORD*)a1 = *(_DWORD*)(v194 + v203);
                    if ((v204 & 1) != 0) {
                      v205 = *(_QWORD*)(a1 + 24);
                      if (v205 != 0) {
                        v206 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v206 = 56;
                        }
                        nn_mem_StandardAllocator_Free_alt2(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v206,
                            v205);
                      }
                    }
                  }
                  a1 = v197;
                  v190 = *(_QWORD*)(v197 + 8);
                  v191 = *(_QWORD*)(v197 + 16);
                  v192 = v197 + 8;
                  v193 = *(_QWORD*)(v192 + 16);
                  *v189 = v190;
                  v189[1] = v191;
                  v189[2] = v193;
                  *(_WORD*)v192 = 0;
                } while (v185 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
                if ((int*)a1 == a2 - 8) {
                  *(_DWORD*)a1 = v261;
                  *(_QWORD*)(a1 + 8) = v260;
                  *(_QWORD*)(a1 + 16) = v259;
                  *(_QWORD*)(a1 + 24) = v258;
                }
                else {
                  *(_DWORD*)a1 = *(a2 - 8);
                  v207 = *((_QWORD*)a2 - 2);
                  v208 = *((_QWORD*)a2 - 1);
                  *(_QWORD*)v192 = *((_QWORD*)a2 - 3);
                  *(_QWORD*)(v192 + 8) = v207;
                  *(_QWORD*)(v192 + 16) = v208;
                  *(a2 - 8) = v261;
                  *((_QWORD*)a2 - 3) = v260;
                  *((_QWORD*)a2 - 2) = v259;
                  *((_QWORD*)a2 - 1) = v258;
                  v209 = (__int64)(a1 - v265 + 32) >> 5;
                  v202 = v209 < 2;
                  v210 = v209 - 2;
                  if (!v202) {
                    v211 = v210 >> 1;
                    v212 = v265 + 32 * (v210 >> 1);
                    v213 = (*(_BYTE*)(v212 + 8) & 1) != 0
                               ? *(const char**)(v212 + 24)
                               : (const char*)(v212 + 9);
                    v214 = GameHr_ffd180(*(_DWORD*)v212, v213);
                    v215 = (*(_BYTE*)(a1 + 8) & 1) != 0
                               ? *(const char**)(a1 + 24)
                               : (const char*)(a1 + 9);
                    if (v214 > GameHr_ffd180(*(_DWORD*)a1, v215)) {
                      v274 = *(_DWORD*)a1;
                      v217 = *(_QWORD*)(v192 + 8);
                      v216 = *(const char**)(v192 + 16);
                      v276_.v276 = *(_QWORD*)v192;
                      v276_.v277 = v217;
                      v276_.v278 = v216;
                      *(_QWORD*)(v192 + 8) = 0;
                      *(_QWORD*)(v192 + 16) = 0;
                      *(_QWORD*)v192 = 0;
                      do {
                        v218 = v212;
                        *(_DWORD*)a1 = *(_DWORD*)v212;
                        if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
                          v219 = *(_QWORD*)(a1 + 24);
                          if (v219 != 0) {
                            v220 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v220 = 56;
                            }
                            nn_mem_StandardAllocator_Free_alt2(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v220,
                                v219);
                          }
                        }
                        v221 = *(_QWORD*)(v212 + 16);
                        v222 = *(_QWORD*)(v212 + 24);
                        *(_QWORD*)(a1 + 8) = *(_QWORD*)(v212 + 8);
                        *(_QWORD*)(a1 + 16) = v221;
                        *(_QWORD*)(a1 + 24) = v222;
                        *(_WORD*)(v212 + 8) = 0;
                        if (v211 == 0) {
                          *(_DWORD*)v212 = v274;
                          goto LABEL_301;
                        }
                        v211 = (v211 - 1) >> 1;
                        v212 = v265 + 32 * v211;
                        if ((*(_BYTE*)(v212 + 8) & 1) != 0) {
                          v223 = *(const char**)(v212 + 24);
                        }
                        else {
                          v223 = (const char*)(v212 + 9);
                        }
                        v224 = GameHr_ffd180(*(_DWORD*)v212, v223);
                        if ((v276_.v276 & 1) != 0) {
                          v225 = v276_.v278;
                        }
                        else {
                          v225 = (char*)&v276_.v276 + 1;
                        }
                        a1 = v218;
                      } while (v224 > GameHr_ffd180(v274, v225));
                      v226 = *(_BYTE*)(v218 + 8);
                      *(_DWORD*)v218 = v274;
                      if ((v226 & 1) != 0) {
                        v227 = *(_QWORD*)(v218 + 24);
                        if (v227 != 0) {
                          v228 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v228 = 56;
                          }
                          nn_mem_StandardAllocator_Free_alt2(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v228,
                              v227);
                        }
                      }
                    LABEL_301:
                      v229 = v276_.v276;
                      v230 = v276_.v278;
                      *(_QWORD*)(v218 + 16) = v276_.v277;
                      *(_QWORD*)(v218 + 24) = v230;
                      *(_QWORD*)(v218 + 8) = v229;
                    }
                  }
                }
                a1 = v265;
                a2 -= 8;
                v202 = v9-- <= 2;
              } while (!v202);
            }
            return;
          }
          v10 = v8 + 32 * ((unsigned __int64)v9 >> 1);
          if ((unsigned __int64)v9 < 0x81) {
            break;
          }
          GameRoutine_fd6b40(
              (unsigned int*)a1,
              (unsigned int*)(a1 + 32 * ((unsigned __int64)v9 >> 1)), v262);
          GameRoutine_fd6b40((unsigned int*)(a1 + 32),
                             (unsigned int*)(v10 - 32), (unsigned int*)a2 - 16);
          GameRoutine_fd6b40((unsigned int*)(a1 + 64),
                             (unsigned int*)(v10 + 32), (unsigned int*)a2 - 24);
          GameRoutine_fd6b40(
              (unsigned int*)(v10 - 32),
              (unsigned int*)(a1 + 32 * ((unsigned __int64)v9 >> 1)),
              (unsigned int*)(v10 + 32));
          v11 = *(_DWORD*)a1;
          *(_DWORD*)a1 = *(_DWORD*)v10;
          *(_DWORD*)v10 = v11;
          v12 = *(_QWORD*)(a1 + 8);
          v276_.v276 = *(_QWORD*)(a1 + 16);
          v276_.v277 = *(_QWORD*)(a1 + 24);
          v14 = *(_QWORD*)(v10 + 16);
          v13 = *(_QWORD*)(v10 + 24);
          *(_QWORD*)(a1 + 8) = *(_QWORD*)(v10 + 8);
          *(_QWORD*)(a1 + 16) = v14;
          *(_QWORD*)(a1 + 24) = v13;
          v15 = v276_.v276;
          v16 = v276_.v277;
          *(_QWORD*)(v10 + 8) = v12;
          *(_QWORD*)(v10 + 16) = v15;
          *(_QWORD*)(v10 + 24) = v16;
          --a3;
          if ((a4 & 1) != 0) {
            goto LABEL_22;
          }
        LABEL_15:
          if ((*(_BYTE*)(a1 - 24) & 1) != 0) {
            v17 = *(const char**)(a1 - 8);
          }
          else {
            v17 = (const char*)(a1 - 23);
          }
          v18 = GameHr_ffd180(*(_DWORD*)(a1 - 32), v17);
          if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
            v19 = *(const char**)(a1 + 24);
          }
          else {
            v19 = (const char*)(a1 + 9);
          }
          if (v18 > GameHr_ffd180(*(_DWORD*)a1, v19)) {
            goto LABEL_22;
          }
          v65 = *(_QWORD*)(a1 + 16);
          v64 = *(const char**)(a1 + 24);
          v66 = *(_DWORD*)a1;
          v276_.v276 = *(_QWORD*)(a1 + 8);
          v276_.v277 = v65;
          v276_.v278 = v64;
          *(_QWORD*)(a1 + 16) = 0;
          *(_QWORD*)(a1 + 24) = 0;
          *(_QWORD*)(a1 + 8) = 0;
          v271 = v66;
          if ((v276_.v276 & 1) != 0) {
            v67 = v276_.v278;
          }
          else {
            v67 = (char*)&v276_.v276 + 1;
          }
          v68 = GameHr_ffd180(v66, v67);
          if ((*(_BYTE*)(v7 - 24) & 1) != 0) {
            v69 = *(const char**)(v7 - 8);
          }
          else {
            v69 = (char*)a2 - 23;
          }
          if (v68 <= GameHr_ffd180(*(_DWORD*)(v7 - 32), v69)) {
            v75 = a1 + 32;
            do {
              v8 = v75;
              if (v75 >= v7) {
                break;
              }
              v76 = (v276_.v276 & 1) != 0 ? v276_.v278 : (char*)&v276_.v276 + 1;
              v77 = GameHr_ffd180(v271, v76);
              v78 = (*(_BYTE*)(v8 + 8) & 1) != 0 ? *(const char**)(v8 + 24)
                                                 : (const char*)(v8 + 9);
              v79 = GameHr_ffd180(*(_DWORD*)v8, v78);
              v75 = v8 + 32;
            } while (v77 <= v79);
          }
          else {
            v8 = a1;
            do {
              if ((v276_.v276 & 1) != 0) {
                v70 = v276_.v278;
              }
              else {
                v70 = (char*)&v276_.v276 + 1;
              }
              v71 = GameHr_ffd180(v271, v70);
              v73 = *(_DWORD*)(v8 + 32);
              v8 += 32LL;
              v72 = v73;
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v74 = *(const char**)(v8 + 24);
              }
              else {
                v74 = (const char*)(v8 + 9);
              }
            } while (v71 <= GameHr_ffd180(v72, v74));
          }
          v80 = v7;
          if (v8 < v7) {
            v80 = v7;
            do {
              if ((v276_.v276 & 1) != 0) {
                v81 = v276_.v278;
              }
              else {
                v81 = (char*)&v276_.v276 + 1;
              }
              v82 = GameHr_ffd180(v271, v81);
              v84 = *(_DWORD*)(v80 - 32);
              v80 -= 32LL;
              v83 = v84;
              if ((*(_BYTE*)(v80 + 8) & 1) != 0) {
                v85 = *(const char**)(v80 + 24);
              }
              else {
                v85 = (const char*)(v80 + 9);
              }
            } while (v82 > GameHr_ffd180(v83, v85));
          }
          while (v8 < v80) {
            v86 = *(_DWORD*)v8;
            *(_DWORD*)v8 = *(_DWORD*)v80;
            *(_DWORD*)v80 = v86;
            v87 = *(_QWORD*)(v8 + 8);
            v267 = *(_QWORD*)(v8 + 16);
            v269 = *(_QWORD*)(v8 + 24);
            v89 = *(_QWORD*)(v80 + 16);
            v88 = *(_QWORD*)(v80 + 24);
            *(_QWORD*)(v8 + 8) = *(_QWORD*)(v80 + 8);
            *(_QWORD*)(v8 + 16) = v89;
            *(_QWORD*)(v8 + 24) = v88;
            *(_QWORD*)(v80 + 8) = v87;
            *(_QWORD*)(v80 + 16) = v267;
            *(_QWORD*)(v80 + 24) = v269;
            do {
              if ((v276_.v276 & 1) != 0) {
                v90 = v276_.v278;
              }
              else {
                v90 = (char*)&v276_.v276 + 1;
              }
              v91 = GameHr_ffd180(v271, v90);
              v93 = *(_DWORD*)(v8 + 32);
              v8 += 32LL;
              v92 = v93;
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v94 = *(const char**)(v8 + 24);
              }
              else {
                v94 = (const char*)(v8 + 9);
              }
            } while (v91 <= GameHr_ffd180(v92, v94));
            do {
              if ((v276_.v276 & 1) != 0) {
                v95 = v276_.v278;
              }
              else {
                v95 = (char*)&v276_.v276 + 1;
              }
              v96 = GameHr_ffd180(v271, v95);
              v98 = *(_DWORD*)(v80 - 32);
              v80 -= 32LL;
              v97 = v98;
              if ((*(_BYTE*)(v80 + 8) & 1) != 0) {
                v99 = *(const char**)(v80 + 24);
              }
              else {
                v99 = (const char*)(v80 + 9);
              }
            } while (v96 > GameHr_ffd180(v97, v99));
          }
          if (a1 == v8 - 32) {
            v103 = (__int64*)(v8 - 24);
            v105 = *(_BYTE*)(v8 - 24);
            *(_DWORD*)(v8 - 32) = v271;
            if ((v105 & 1) != 0) {
              v106 = *(_QWORD*)(v8 - 8);
              if (v106 != 0) {
                v107 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v107 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v107, v106);
              }
            }
          }
          else {
            *(_DWORD*)a1 = *(_DWORD*)(v8 - 32);
            if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
              v100 = *(_QWORD*)(a1 + 24);
              if (v100 != 0) {
                v101 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v101 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v101, v100);
              }
            }
            v102 = *(_QWORD*)(v8 - 16);
            v103 = (__int64*)(v8 - 24);
            v104 = *(_QWORD*)(v8 - 8);
            *(_QWORD*)(a1 + 8) = *(_QWORD*)(v8 - 24);
            *(_QWORD*)(a1 + 16) = v102;
            *(_QWORD*)(a1 + 24) = v104;
            *(_WORD*)(v8 - 24) = 0;
            *(_DWORD*)(v8 - 32) = v271;
          }
          a4 = 0;
          v108 = v276_.v276;
          v109 = v276_.v278;
          v103[1] = v276_.v277;
          v103[2] = (__int64)v109;
          *v103 = v108;
        }
        GameRoutine_fd6b40(
            (unsigned int*)(a1 + 32 * ((unsigned __int64)v9 >> 1)),
            (unsigned int*)a1, v262);
        --a3;
        if ((a4 & 1) == 0) {
          goto LABEL_15;
        }
      LABEL_22:
        v20 = *(_QWORD*)(a1 + 16);
        v21 = 0;
        v270 = *(_DWORD*)a1;
        v22 = *(_QWORD*)(a1 + 8);
        v276_.v278 = *(const char**)(a1 + 24);
        v276_.v276 = v22;
        v276_.v277 = v20;
        *(_QWORD*)(a1 + 16) = 0;
        *(_QWORD*)(a1 + 24) = 0;
        *(_QWORD*)(a1 + 8) = 0;
        do {
          if ((*(_BYTE*)(a1 + v21 + 40) & 1) != 0) {
            v23 = *(const char**)(a1 + v21 + 56);
          }
          else {
            v23 = (const char*)(a1 + v21 + 41);
          }
          v24 = GameHr_ffd180(*(_DWORD*)(a1 + v21 + 32), v23);
          if ((v276_.v276 & 1) != 0) {
            v25 = v276_.v278;
          }
          else {
            v25 = (char*)&v276_.v276 + 1;
          }
          v21 += 32;
        } while (v24 > GameHr_ffd180(v270, v25));
        v26 = a1 + v21;
        if (v21 == 32) {
          v7 = (unsigned __int64)a2;
          do {
            if (v26 >= v7) {
              break;
            }
            v33 = *(_DWORD*)(v7 - 32);
            v7 -= 32LL;
            v32 = v33;
            v34 = (*(_BYTE*)(v7 + 8) & 1) != 0 ? *(const char**)(v7 + 24)
                                               : (const char*)(v7 + 9);
            v35 = GameHr_ffd180(v32, v34);
            v36 = (v276_.v276 & 1) != 0 ? v276_.v278 : (char*)&v276_.v276 + 1;
          } while (v35 <= GameHr_ffd180(v270, v36));
        }
        else {
          do {
            v28 = *(_DWORD*)(v7 - 32);
            v7 -= 32LL;
            v27 = v28;
            if ((*(_BYTE*)(v7 + 8) & 1) != 0) {
              v29 = *(const char**)(v7 + 24);
            }
            else {
              v29 = (const char*)(v7 + 9);
            }
            v30 = GameHr_ffd180(v27, v29);
            if ((v276_.v276 & 1) != 0) {
              v31 = v276_.v278;
            }
            else {
              v31 = (char*)&v276_.v276 + 1;
            }
          } while (v30 <= GameHr_ffd180(v270, v31));
        }
        v8 = a1 + v21;
        if (v26 < v7) {
          v37 = v7;
          do {
            v38 = *(_DWORD*)v8;
            *(_DWORD*)v8 = *(_DWORD*)v37;
            *(_DWORD*)v37 = v38;
            v39 = *(_QWORD*)(v8 + 8);
            v266 = *(_QWORD*)(v8 + 16);
            v268 = *(_QWORD*)(v8 + 24);
            v41 = *(_QWORD*)(v37 + 16);
            v40 = *(_QWORD*)(v37 + 24);
            *(_QWORD*)(v8 + 8) = *(_QWORD*)(v37 + 8);
            *(_QWORD*)(v8 + 16) = v41;
            *(_QWORD*)(v8 + 24) = v40;
            *(_QWORD*)(v37 + 8) = v39;
            *(_QWORD*)(v37 + 16) = v266;
            *(_QWORD*)(v37 + 24) = v268;
            do {
              v43 = *(_DWORD*)(v8 + 32);
              v8 += 32LL;
              v42 = v43;
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v44 = *(const char**)(v8 + 24);
              }
              else {
                v44 = (const char*)(v8 + 9);
              }
              v45 = GameHr_ffd180(v42, v44);
              if ((v276_.v276 & 1) != 0) {
                v46 = v276_.v278;
              }
              else {
                v46 = (char*)&v276_.v276 + 1;
              }
            } while (v45 > GameHr_ffd180(v270, v46));
            do {
              v48 = *(_DWORD*)(v37 - 32);
              v37 -= 32LL;
              v47 = v48;
              if ((*(_BYTE*)(v37 + 8) & 1) != 0) {
                v49 = *(const char**)(v37 + 24);
              }
              else {
                v49 = (const char*)(v37 + 9);
              }
              v50 = GameHr_ffd180(v47, v49);
              if ((v276_.v276 & 1) != 0) {
                v51 = v276_.v278;
              }
              else {
                v51 = (char*)&v276_.v276 + 1;
              }
            } while (v50 <= GameHr_ffd180(v270, v51));
          } while (v8 < v37);
        }
        if (a1 == v8 - 32) {
          v55 = (__int64*)(v8 - 24);
          v57 = *(_BYTE*)(v8 - 24);
          *(_DWORD*)(v8 - 32) = v270;
          if ((v57 & 1) != 0) {
            v58 = *(_QWORD*)(v8 - 8);
            if (v58 != 0) {
              v59 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v59 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v58);
            }
          }
        }
        else {
          *(_DWORD*)a1 = *(_DWORD*)(v8 - 32);
          if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
            v52 = *(_QWORD*)(a1 + 24);
            if (v52 != 0) {
              v53 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v53 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v53, v52);
            }
          }
          v54 = *(_QWORD*)(v8 - 16);
          v55 = (__int64*)(v8 - 24);
          v56 = *(_QWORD*)(v8 - 8);
          *(_QWORD*)(a1 + 8) = *(_QWORD*)(v8 - 24);
          *(_QWORD*)(a1 + 16) = v54;
          *(_QWORD*)(a1 + 24) = v56;
          *(_WORD*)(v8 - 24) = 0;
          *(_DWORD*)(v8 - 32) = v270;
        }
        v60 = v276_.v276;
        v61 = v276_.v278;
        v55[1] = v276_.v277;
        v55[2] = (__int64)v61;
        *v55 = v60;
        v62 = v26 >= v7;
        v7 = (unsigned __int64)a2;
        if (v62) {
          break;
        }
      LABEL_82:
        game_fd58e0(a1, v8 - 32, a3, a4 & 1);
        a4 = 0;
      }
      v63 = GameHr_fd71c0(a1, v8 - 32);
      if (GameHr_fd71c0(v8, (__int64)a2)) {
        break;
      }
      if (!v63) {
        goto LABEL_82;
      }
    }
    a2 = (int*)(v8 - 32);
    if (!v63) {
      continue;
    }
    break;
  }
}

void game_fdccb0(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  void* v6;
  _BYTE* v7;
  char v8;
  __int64 v9;

  *(_DWORD*)(a1 + 168) = 500;
  *(_BYTE*)(a1 + 172) = 1;
  GameData_2262914 = 1;
  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Sim_m01");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v3, nullptr);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    v6 = GameData_2130228;
    *(_QWORD*)(v4 + 8) = GameData_2130228;
    *(_QWORD*)(v4 + 16) = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v4 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v9 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v9 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v9, (__int64)v3);
}

void game_fdce40(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  unsigned int v12;

  if (game_script_hub_talk_g_choice_menu_result != 0) {
    v2 = (__int64*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Sim_m03");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
      GameRoutine_1130770_alt1(v4, v3, nullptr);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_216de68;
      *(_QWORD*)(v4 + 16) = &GameData_216de68;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v6 = *(_BYTE**)(v4 + 32);
      v7 = v6[138];
      if (v7 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
        v7 = v6[138];
      }
      v6[138] = v7 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
    v8 = 128;
    if (*(_QWORD*)(*v2 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v2 + v8, (__int64)v3);
    v9 = *(_QWORD*)(a1 + 8);
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 3) {
            goto LABEL_40;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return;
        }
        v9 += 64;
      }
    }
  }
  else {
    if (*(_BYTE*)(a1 + 172) == 1) {
      *(_BYTE*)(a1 + 172) = 0;
      GameData_2262914 = 0;
    }
    if (game_GameModeData_instance_ == 0 ||
        (v10 = *(_DWORD*)(game_GameModeData_instance_ + 72),
         v11 = __OFSUB__(v10, 500),
         (((v12 = v10 - 500) & 0x80000000) != 0) ^ v11)) {
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        while (1) {
          if (*(_BYTE*)v9 == 2) {
            if (*(_DWORD*)(v9 + 32) == 2) {
            LABEL_40:
              *(_QWORD*)(a1 + 16) = v9;
              *(_WORD*)(a1 + 136) &= ~0x80u;
              return;
            }
          }
          else if (*(_BYTE*)v9 == 0) {
            return;
          }
          v9 += 64;
        }
      }
    }
    else {
      if (v12 >= 0x98967F) {
        v12 = 9999999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 72) = v12;
      v9 = *(_QWORD*)(a1 + 8);
      if (v9 != 0) {
        while (1) {
          if (*(_BYTE*)v9 == 2) {
            if (*(_DWORD*)(v9 + 32) == 1) {
              goto LABEL_40;
            }
          }
          else if (*(_BYTE*)v9 == 0) {
            return;
          }
          v9 += 64;
        }
      }
    }
  }
}

void game_fdd0d0(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Sim_m02");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v3, nullptr);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v8, (__int64)v3);
}

void game_fdd2c0(__int64 a1)
{
  __int64* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_NoMoney_Sim_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(*v2, 1376, 16, 0);
    GameRoutine_1130770_alt1(v4, v3, nullptr);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 24;
    *(_QWORD*)(v4 + 80) = 1;
    *(_QWORD*)(v4 + 8) = &GameData_216de68;
    *(_QWORD*)(v4 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
        (*(_WORD*)(v4 + 136) & 0x100) == 0) {
      *(_WORD*)(v4 + 136) |= 0x100u;
    }
    v6 = *(_BYTE**)(v4 + 32);
    v7 = v6[138];
    if (v7 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v6 + 64LL))(*(_QWORD*)(v4 + 32));
      v7 = v6[138];
    }
    v6[138] = v7 + 1;
    *(_WORD*)(v4 + 136) |= 2u;
  }
  v8 = 128;
  if (*(_QWORD*)(*v2 + 200) == 0) {
    v8 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v2 + v8, (__int64)v3);
}

__attribute__((swiftcall)) void game_febfc0(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v2 = GameData_21ca010;
  v3 = *(_QWORD*)(GameData_21ca010 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21ca010 + 72) - v3) >> 3) >=
      1) {
    v4 = nullptr;
    v5 = 0;
    v6 = 0;
    do {
      v7 = *(_QWORD*)(v3 + 8 * v6);
      v8 = *(unsigned __int16*)(v7 + 32);
      if (*(_WORD*)(v7 + 32) != 0) {
        v9 = 8;
        v22 = v6;
        do {
          v10 = *(_QWORD*)(*(_QWORD*)(v7 + 40) + v9);
          v11 = a1[2];
          if ((unsigned __int64)v4 < v11) {
            *(_QWORD*)v4 = v10;
            v4 += 8;
          }
          else {
            v12 = &v4[-v5];
            v13 = (__int64)&v4[-v5] >> 3;
            v14 = v13 + 1;
            if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
              *a1 = v5;
              GameRoutine_6e5c60_alt1();
            }
            v15 = v11 - v5;
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
                *a1 = v5;
                GameRoutine_60a210_alt1();
              }
              v17 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
            }
            else {
              v17 = 0;
            }
            v18 = v17 + 8 * v16;
            v19 = (unsigned __int64)&v4[-v5];
            v20 = (__int64)&v12[v17 + -8 * v13];
            *(_QWORD*)&v12[v17] = v10;
            v4 = &v12[v17 + 8];
            memcpy_alt1(v20, v5, v19);
            a1[1] = (__int64)v4;
            a1[2] = v18;
            if (v5 != 0) {
              v21 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v21 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v5);
            }
            v5 = v20;
          }
          --v8;
          v9 += 16;
          a1[1] = (__int64)v4;
        } while (v8 != 0);
        v6 = v22;
        v2 = GameData_21ca010;
      }
      *a1 = v5;
      ++v6;
      v3 = *(_QWORD*)(v2 + 64);
    } while (v6 < (int)((unsigned __int64)(*(_QWORD*)(v2 + 72) - v3) >> 3));
  }
}

__int64 game_ff0ea0(_DWORD* a1, float32x4_t* a2, float32x4_t* a3, __int64* a4,
                    float a5)
{
  atomic_uchar* v9;
  unsigned __int8 explicit;
  __int64* v11;
  unsigned __int64 v12;
  float32x4_t v13;
  int v14;
  int8x16_t v15;
  float32x2_t v16;
  unsigned int v17;
  int v18;
  __int64 v19;
  float v20;
  __int64 v21;
  unsigned __int8 v22;
  float v23;
  float v24;
  float32x4_t* v25;
  __int64 v26;
  float v27;
  void (***v28)(_QWORD);
  float v29;
  unsigned int v30;
  float v31;
  float v32;
  void (***v33)(_QWORD);
  float32x4_t* v34;
  float v35;
  float v36;
  float32x4_t* v37;
  __int64 v38;
  float32x4_t* v39;
  unsigned __int64 v40;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int32 v47;
  unsigned __int32 v48;
  unsigned __int32 v49;
  unsigned __int32 v50;
  unsigned __int32 v51;
  unsigned __int32 v52;
  unsigned __int32 v53;
  unsigned __int32 v54;
  unsigned __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  float32x4_t* v66;
  __int64 v67;
  __int64 v68;
  float32x4_t v69;
  int8x16_t v70;
  int v71;
  unsigned int v72;
  _QWORD* v73;
  int v74;
  int v75;
  void (***v76)(_QWORD);
  void (***v77)(_QWORD);
  float v78;
  float32x4_t v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float v83;
  unsigned __int32 v84;
  unsigned __int32 v85;
  unsigned __int32 v86;
  __int128 v87;
  __int64 v88;
  int v91;
  float v92;
  float32x4_t* v93;
  _QWORD* v94;
  float v95;
  unsigned int v96;
  __int64* v97;
  float v98;
  float32x4_t v99;
  float32x4_t v100;
  float v101;
  float32x4_t v102;
  struct {
    float32x4_t* v103;
    unsigned __int64 v104;
    float32x4_t* v105;
    __int64 (**v106)();
    char gap168_[8];
    __int64 (**v107)();
    void (***v108)(_QWORD);
    void (***v109)(_QWORD);
  } v103_;
  struct {
    int8x16_t v110;
    float v111;
  } v110_;
  struct {
    float32x4_t v112;
    __int128 v113;
  } v112_;
  float32x4_t v114;
  float32x4_t v115;
  __int128 v116;
  struct {
    float32x4_t v117;
    char v118;
    char gap337_[7];
    char v119;
  } v117_;
  int8x16_t v120[2];

  nn_os_LockMutex_alt1((__int64)&GameData_2167780);
  v9 = (atomic_uchar*)GameData_212c840;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v11 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = 0;
    *v11 = 0;
    v11[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v11) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v11) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820_alt1(v11);
    GameRoutine_2b0_alt1();
    __cxa_guard_release_alt1((__int64)GameData_212c840);
  }
  v94 = *(_QWORD**)(*v11 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v94 + 936LL))(*v94, 0, 0);
  v12 = LANES128(*(a2)).n128_u64[1];
  v13 = vsubq_f32(*a3, *a2);
  LANES128(v115).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
  LANES128(v115).n128_u64[1] = v12;
  v14 = *((_DWORD*)a4 + 3);
  v15 = vmulq_f32(v13, v13);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES64(v16).n64_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  if (v14 == 2) {
    v17 = 10;
    v91 = 40;
    *(float*)&v18 = 0x1.47ae140000000p-7f;
  }
  else if (v14 == 1) {
    v17 = 3;
    v91 = 10;
    *(float*)&v18 = 0x1.99999a0000000p-4f;
  }
  else {
    v17 = 1;
    v91 = 5;
    *(float*)&v18 = 0x1.99999a0000000p-3f;
  }
  v92 = *(float*)&v18;
  v103_.v109 = nullptr;
  v110_.v110 = (__typeof__(v110_.v110)){0};
  v110_.v111 = 0x0.0p+0f;
  v112_.v112 = (__typeof__(v112_.v112)){0};
  v112_.v113 = (__typeof__(v112_.v113)){0};
  v114 = (__typeof__(v114)){0};
  v103_.v106 = game_zview_ExtrusionEntryShape_vtable;
  v103_.v107 = game_zview_ExtrusionEntryShape_Result_vtable;
  v103_.v108 = nullptr;
  LODWORD(v95) = LANES64_OF(vsqrt_f32(v16)).n64_u32[0];
  if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = 0;
    *v11 = 0;
    v11[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v11) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v11) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820_alt1(v11);
    GameRoutine_2b0_alt1();
    __cxa_guard_release_alt1((__int64)GameData_212c840);
  }
  v19 = *v11;
  v20 = *((float*)a4 + 2);
  v93 = a2;
  LANES128(v117_.v117).n128_u32[0] = 0;
  LANES128(v117_.v117).n128_f32[2] = a5;
  v21 = *(_QWORD*)(v19 + 24);
  v22 = atomic_load_explicit(v9, memory_order_acquire);
  v23 = (float)(0x1.cccccc0000000p+0f - v20) +
        (float)(a5 * -0x1.0000000000000p+1f);
  if (v23 < 0x0.0p+0f) {
    v23 = 0x0.0p+0f;
  }
  v24 = v23 * 0x1.0000000000000p-1f;
  if ((v22 & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = 0;
    *v11 = 0;
    v11[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v11) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v11) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820_alt1(v11);
    GameRoutine_2b0_alt1();
    __cxa_guard_release_alt1((__int64)GameData_212c840);
  }
  v25 = (float32x4_t*)v11[4];
  LANES128(v120[0]).n128_u8[0] = 11;
  v103_.v103 = v25;
  v26 = (*(__int64 (**)(__int64, float32x4_t*, float32x4_t**, __int64, __int64,
                        int8x16_t*))(*(_QWORD*)v21 + 248LL))(
      v21, &v117_.v117, &v103_.v103, 1, 1, v120);
  v27 = *((float*)a4 + 2);
  v103_.v104 = __PAIR64__(LODWORD(v24), LODWORD(a5));
  v28 = (void (***)(_QWORD))v26;
  LODWORD(v103_.v103) = 2;
  if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)GameData_212c840) != 0) {
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11) = 0;
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v11 + 8) = 0;
    *v11 = 0;
    v11[1] = 0;
    *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v11) = 0;
    *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v11) = 0;
    *((_BYTE*)((char*)0x40LL) + (_QWORD)v11) = 0;
    *((_BYTE*)((_UNKNOWN*)0x44LL) + (_QWORD)v11) = 0;
    *(_UNKNOWN**)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v11) =
        (_UNKNOWN*)1065353216;
    GameRoutine_14a0820_alt1(v11);
    GameRoutine_2b0_alt1();
    __cxa_guard_release_alt1((__int64)GameData_212c840);
  }
  LANES128(v120[0]).n128_u8[0] = 11;
  v29 = v24 + (float)(a5 + v27);
  v30 = 1;
  v31 = (float)(a5 + v20) + 0x1.47ae140000000p-7f;
  LANES128(v117_.v117).n128_u64[0] = v11[4];
  if ((float)((float)(0x1.cccccc0000000p+0f - a5) + -0x1.47ae140000000p-7f) >=
      v31) {
    v32 = (float)(0x1.cccccc0000000p+0f - a5) + -0x1.47ae140000000p-7f;
  }
  else {
    v32 = (float)(a5 + v20) + 0x1.47ae140000000p-7f;
  }
  v33 = (void (***)(_QWORD))(*(__int64 (**)(
      __int64, float32x4_t**, float32x4_t*, __int64, __int64, int8x16_t*))(
      *(_QWORD*)v21 + 248LL))(v21, &v103_.v103, &v117_.v117, 1, 1, v120);
  v116 = GameData_1a82980;
  math_Mtx43_MakeRotation_alt1((void*)(&v117_.v117), (float32x4_t*)&v116);
  Quat_624bc0((void*)(v120), (__int64)&v117_.v117);
  LANES128(v112_.v112).n128_u32[0] = 0;
  LANES128(v112_.v112).n128_f32[1] = v31;
  LODWORD(v112_.v113) = 0;
  *((float*)&v112_.v113 + 1) = v32;
  LANES128(v114).n128_u32[0] = 0;
  LANES128(v114).n128_f32[1] = v29;
  v103_.v108 = v28;
  v103_.v109 = v33;
  v110_.v111 = v24;
  LANES128(v110_.v110).n128_u64[0] = LANES128(v120[0]).n128_u64[0];
  LANES128(v110_.v110).n128_u64[1] =
      LANES128_OF(vextq_s8(v120[0], v120[0], 8u)).n128_u64[0];
  v112_.v112 = COERCE_AS(float32x4_t, LANES128(v112_.v112).n128_u64[0]);
  v112_.v113 = (unsigned __int64)v112_.v113;
  v114 = COERCE_AS(float32x4_t, LANES128(v114).n128_u64[0]);
  v34 = (float32x4_t*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 640, 16, 0);
  v35 = a5 + v24;
  v36 = (float)v17;
  v37 = v34 + 40;
  v38 = (__int64)v34;
  v103_.v103 = v34;
  v103_.v104 = (unsigned __int64)v34;
  v39 = v34;
  v97 = a4;
  v96 = v17;
  v103_.v105 = v34 + 40;
  v101 = (float)(v95 + (float)(v35 * 0x1.0000000000000p+1f)) +
         0x1.0000000000000p+0f;
  LODWORD(v40) = 0;
  *((float*)&v40 + 1) = *((float*)a4 + 2) + 0x1.cccccc0000000p-1f;
  v99 = COERCE_AS(float32x4_t, v40);
  do {
    v42 = *a4;
    v120[0] = vaddq_f32(v99, v115);
    collision_672120_alt1((void*)((__int64)&v117_.v117), (__int128*)v120, v42,
                          v101 * (float)((float)v30 / v36));
    if (v117_.v119 == 1) {
      v44 = LANES128(v117_.v117).n128_u64[1];
      v43 = LANES128(v117_.v117).n128_u64[0];
      if (LANES128(v117_.v117).n128_u64[0] !=
          LANES128(v117_.v117).n128_u64[1]) {
        do {
          v45 = *(_QWORD*)(v43 + 8);
          if (v45 != 0) {
            if ((float32x4_t*)v38 == v39) {
            LABEL_37:
              v48 = *(_DWORD*)(v43 + 32);
              v47 = *(_DWORD*)(v43 + 36);
              v49 = *(_DWORD*)(v43 + 40);
              v51 = *(_DWORD*)(v43 + 16);
              v50 = *(_DWORD*)(v43 + 20);
              v53 = *(_DWORD*)(v43 + 24);
              v52 = *(_DWORD*)(v43 + 28);
              v54 = *(_DWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v45 + 80LL))(
                  v45);
              v55 = *(_QWORD*)(v43 + 8);
              if (v39 < v37) {
                LANES128(v39[1]).n128_u32[0] = v48;
                LANES128(v39[1]).n128_u32[1] = v47;
                LANES128(v39[1]).n128_u32[2] = v49;
                LANES128(*(v39)).n128_u32[0] = v51;
                LANES128(*(v39)).n128_u32[1] = v50;
                LANES128(*(v39)).n128_u32[2] = v53;
                LANES128(*(v39)).n128_u32[3] = v52;
                LANES128(v39[1]).n128_u32[3] = v54;
                LANES128(v39[2]).n128_u64[0] = v55;
                v39 = (float32x4_t*)((char*)v39 + 40);
              }
              else {
                v56 = (__int64)v39 - v38;
                v57 = 1 - 0x3333333333333333LL * (((__int64)v39 - v38) >> 3);
                if (v57 > 0x666666666666666LL) {
                  GameRoutine_ff1e40_alt1();
                }
                if (0x999999999999999ALL * (((__int64)v37 - v38) >> 3) > v57) {
                  v57 = 0x999999999999999ALL * (((__int64)v37 - v38) >> 3);
                }
                if (0xCCCCCCCCCCCCCCCDLL * (((__int64)v37 - v38) >> 3) >=
                    0x333333333333333LL) {
                  v57 = 0x666666666666666LL;
                }
                if (v57 > 0x666666666666666LL) {
                  GameRoutine_60a210_alt1();
                }
                v58 = 5 * v57;
                v59 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v57, 16, 0);
                v60 = (char*)(v59 + v56);
                *((_DWORD*)v60 + 4) = v48;
                *((_DWORD*)v60 + 5) = v47;
                *((_DWORD*)v60 + 6) = v49;
                *(_DWORD*)v60 = v51;
                *((_DWORD*)v60 + 1) = v50;
                *((_DWORD*)v60 + 2) = v53;
                *((_DWORD*)v60 + 3) = v52;
                *((_DWORD*)v60 + 7) = v54;
                *((_QWORD*)v60 + 4) = v55;
                v61 = v56 / -40;
                if ((float32x4_t*)v38 != v39) {
                  v62 = v38;
                  v63 = (__int64)&v39[1] + 40 * v61 - v38 + v59;
                  do {
                    *(_DWORD*)v63 = *(_DWORD*)(v62 + 16);
                    *(_DWORD*)(v63 + 4) = *(_DWORD*)(v62 + 20);
                    *(_DWORD*)(v63 + 8) = *(_DWORD*)(v62 + 24);
                    *(_DWORD*)(v63 - 16) = *(_DWORD*)v62;
                    *(_DWORD*)(v63 - 12) = *(_DWORD*)(v62 + 4);
                    *(_DWORD*)(v63 - 8) = *(_DWORD*)(v62 + 8);
                    *(_DWORD*)(v63 - 4) = *(_DWORD*)(v62 + 12);
                    v64 = *(_QWORD*)(v62 + 28);
                    v65 = *(_DWORD*)(v62 + 36);
                    v62 += 40;
                    *(_DWORD*)(v63 + 20) = v65;
                    *(_QWORD*)(v63 + 12) = v64;
                    v63 += 40;
                  } while ((float32x4_t*)v62 != v39);
                }
                v37 = (float32x4_t*)(v59 + 8 * v58);
                v39 = (float32x4_t*)(v60 + 40);
                v66 = (float32x4_t*)&v60[40 * v61];
                v103_.v105 = v37;
                v103_.v103 = v66;
                v103_.v104 = (unsigned __int64)(v60 + 40);
                if (v38 != 0) {
                  v67 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v67 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt2(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v38);
                }
                v38 = (__int64)v66;
              }
              v103_.v104 = (unsigned __int64)v39;
            }
            else {
              v46 = v38;
              while (*(_QWORD*)(v46 + 32) != v45 ||
                     *(float*)(v46 + 16) != *(float*)(v43 + 32) ||
                     *(float*)(v46 + 20) != *(float*)(v43 + 36) ||
                     *(float*)(v46 + 24) != *(float*)(v43 + 40) ||
                     *(float*)v46 != *(float*)(v43 + 16) ||
                     *(float*)(v46 + 4) != *(float*)(v43 + 20) ||
                     *(float*)(v46 + 8) != *(float*)(v43 + 24) ||
                     *(float*)(v46 + 12) != *(float*)(v43 + 28)) {
                v46 += 40;
                if ((float32x4_t*)v46 == v39) {
                  goto LABEL_37;
                }
              }
            }
          }
          v43 += 48;
        } while (v43 != v44);
        if (v117_.v119 != 1) {
          a4 = v97;
          v17 = v96;
          continue;
        }
        v43 = LANES128(v117_.v117).n128_u64[0];
      }
      a4 = v97;
      v17 = v96;
      if (v43 != 0) {
        LANES128(v117_.v117).n128_u64[1] = v43;
        v68 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v68 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v43);
      }
    }
  } while (v30++ != v17);
  if (v39 == (float32x4_t*)v38) {
    v73 = v94;
    v72 = 0;
    if (v38 == 0) {
      goto LABEL_84;
    }
    goto LABEL_81;
  }
  v69 = vsubq_f32(*a3, *v93);
  v70 = vmulq_f32(v69, v69);
  LANES128(v70).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v70, v70, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
          .n64_u64[0];
  LANES128(v70).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v70).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v70).n128_f32[0] == 0x0.0p+0f) {
    game_ff1940_alt2(&v117_.v117, &v103_.v103, &v115, (__int64)v103_.v108,
                     &v112_.v112, (__int64)v103_.v109, &v114, &v110_.v110, v92);
    v73 = v94;
    if (v117_.v118 != 1) {
      goto LABEL_89;
    }
    v84 = LANES128(v117_.v117).n128_u32[2];
    LANES128(v115).n128_u64[0] = LANES128(v117_.v117).n128_u64[0];
    v85 = LANES128(v117_.v117).n128_u32[1];
    LANES128(v81).n128_u32[0] = LANES128(v117_.v117).n128_u32[0];
  LABEL_76:
    v86 = v84;
  LABEL_79:
    v72 = 1;
    *a1 = LANES128(v81).n128_u32[0];
    a1[1] = v85;
    v87 = *(_OWORD*)a1;
    *((_QWORD*)&v87 + 1) = v86;
    *(_OWORD*)a1 = v87;
  LABEL_80:
    if (v38 == 0) {
      goto LABEL_84;
    }
    goto LABEL_81;
  }
  v71 = v91;
  v72 = 0;
  v73 = v94;
  v74 = vcvtps_s32_f32(v95 / v92);
  if (v91 >= v74) {
    v71 = v74;
  }
  if (v74 < 1) {
    v75 = 1;
  }
  else {
    v75 = v71;
  }
  if (v95 <= 0x0.0p+0f) {
    goto LABEL_80;
  }
  LANES128(v70).n128_u64[1] = LANES128(v70).n128_u64[0];
  v76 = v103_.v108;
  v77 = v103_.v109;
  v78 = 0x0.0p+0f;
  v79 = vrsqrteq_f32(v70);
  v80 = vmulq_f32(v79, vrsqrtsq_f32(v79, vmulq_f32(v70, v79)));
  v81 = v115;
  v82 = vbicq_s8(
      vmulq_f32(v69, vmulq_f32(v80, vrsqrtsq_f32(v80, vmulq_f32(v70, v80)))),
      vceqzq_f32(v70));
  v83 = v95 / (float)v75;
  v98 = v83;
  v100 = vmulq_n_f32(v82, v83);
  do {
    while (1) {
      v102 = vaddq_f32(v100, v81);
      v115 = v102;
      game_ff1940_alt2(&v117_.v117, &v103_.v103, &v115, (__int64)v76,
                       &v112_.v112, (__int64)v77, &v114, &v110_.v110, v83);
      if ((v117_.v118 & 1) == 0) {
        break;
      }
      v84 = LANES128(v117_.v117).n128_u32[2];
      v83 = v98;
      LOBYTE(v72) = 1;
      v78 = v98 + v78;
      LANES128(v81).n128_u64[0] = LANES128(v117_.v117).n128_u64[0];
      LANES128(v81).n128_u64[1] = LANES128(v117_.v117).n128_u32[2];
      v115 = v81;
      if (v78 >= v95) {
        v85 = LANES128(v117_.v117).n128_u32[1];
        goto LABEL_76;
      }
    }
    v81 = v102;
    v78 = v98 + v78;
    v83 = v98;
  } while (v78 < v95);
  if ((v72 & 1) != 0) {
    v86 = LANES128(v102).n128_u32[2];
    v85 = LANES128(v102).n128_u32[1];
    goto LABEL_79;
  }
LABEL_89:
  v72 = 0;
  if (v38 != 0) {
  LABEL_81:
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v38);
  }
LABEL_84:
  if (v103_.v108 != nullptr) {
    (**v103_.v108)(v103_.v108);
  }
  if (v103_.v109 != nullptr) {
    (**v103_.v109)(v103_.v109);
  }
  (*(void (**)(_QWORD))(*(_QWORD*)*v73 + 944LL))(*v73);
  nn_os_UnlockMutex_alt1((__int64)&GameData_2167780);
  return v72;
}

float32x4_t* game_ff1940(float32x4_t* result, __int64* a2, float32x4_t* a3,
                         __int64 a4, float32x4_t* a5, __int64 a6,
                         float32x4_t* a7, int8x16_t* a8, float a9)
{

#pragma clang fp contract(off)
  float32x4_t v9;
  int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  char v19;
  float v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;
  float v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  unsigned __int64 v29;
  float32x4_t v30;
  float v31;
  float32x4_t v32;
  char v33;
  float32x4_t* v34;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  struct {
    float32x4_t v41;
    int v42;
    int v43;
    int v44;
  } v41_;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int32 v48;
  int v49;
  float v50;

  if (a2[1] != *a2) {
    v9 = *a3;
    v15 = 0;
    v16 = 0;
    v34 = result;
    while (1) {
      v18 = *a2;
      v17 = a2[1];
      v49 = v15;
      if (v18 == v17) {
        v19 = 0;
      }
      else {
        v19 = 0;
        do {
          v22 = *a5;
          v45 = 0;
          v46 = 0x3F80000000000000LL;
          v23 = vaddq_f32(v9, v22);
          v37 = v9;
          v47 = LANES128(v23).n128_u64[0];
          v48 = LANES128(v23).n128_u32[2];
          v41_.v42 = *(_DWORD*)(v18 + 16);
          v41_.v43 = *(_DWORD*)(v18 + 20);
          v41_.v44 = *(_DWORD*)(v18 + 24);
          v41_.v41 = *(float32x4_t*)v18;
          if (*(_DWORD*)(v18 + 28) == 0) {
            HIDWORD(v47) = 0;
            v41_.v43 = 0;
          }
          v40 = (__typeof__(v40)){0};
          if ((collision_672de0(a4, (int*)&v45, *(_QWORD*)(v18 + 32),
                                (int*)&v41_.v41, &v40, (__int64)&v50) &
               1) != 0) {
            v24 = v50;
            v19 = 1;
            if (a9 < v50) {
              v24 = a9;
            }
            v25 = vmulq_n_f32(v40, v24);
            LANES128(v25).n128_u32[1] = 0;
            v26 = vaddq_f32(v37, v25);
            LANES128(v26).n128_u32[3] = 0;
          }
          else {
            v26 = v37;
          }
          v27 = a5[1];
          v45 = 0;
          v46 = 0x3F80000000000000LL;
          v28 = vaddq_f32(v26, v27);
          v38 = v26;
          v47 = LANES128(v28).n128_u64[0];
          v48 = LANES128(v28).n128_u32[2];
          v41_.v42 = *(_DWORD*)(v18 + 16);
          v41_.v43 = *(_DWORD*)(v18 + 20);
          v41_.v44 = *(_DWORD*)(v18 + 24);
          v41_.v41 = *(float32x4_t*)v18;
          if (*(_DWORD*)(v18 + 28) == 0) {
            HIDWORD(v47) = 0;
            v41_.v43 = 0;
          }
          v40 = (__typeof__(v40)){0};
          if ((collision_672de0(a4, (int*)&v45, *(_QWORD*)(v18 + 32),
                                (int*)&v41_.v41, &v40, (__int64)&v50) &
               1) != 0) {
            v20 = v50;
            v19 = 1;
            if (a9 < v50) {
              v20 = a9;
            }
            v21 = vmulq_n_f32(v40, v20);
            LANES128(v21).n128_u32[1] = 0;
            v9 = vaddq_f32(v38, v21);
            LANES128(v9).n128_u32[3] = 0;
          }
          else {
            v9 = v38;
          }
          v18 += 40;
        } while (v18 != v17);
        v18 = *a2;
        v17 = a2[1];
      }
      v29 = LANES128_OF(vextq_s8(*a8, *a8, 8u)).n128_u64[0];
      v30 = vaddq_f32(v9, *a7);
      v45 = LANES128(*(a8)).n128_u64[0];
      v46 = v29;
      v47 = LANES128(v30).n128_u64[0];
      v48 = LANES128(v30).n128_u32[2];
      while (v18 != v17) {
        v41_.v41 = (__typeof__(v41_.v41)){0};
        v39 = v9;
        if ((collision_672de0(a6, (int*)&v45, *(_QWORD*)(v18 + 32), (int*)v18,
                              &v41_.v41, (__int64)&v40) &
             1) != 0) {
          v31 = LANES128(v40).n128_f32[0];
          v19 = 1;
          if (a9 < LANES128(v40).n128_f32[0]) {
            v31 = a9;
          }
          v32 = vmulq_n_f32(v41_.v41, v31);
          LANES128(v32).n128_u32[1] = 0;
          v9 = vaddq_f32(v39, v32);
          LANES128(v9).n128_u32[3] = 0;
        }
        else {
          v9 = v39;
        }
        v18 += 40;
      }
      if ((v19 & 1) == 0) {
        break;
      }
      ++v16;
      v15 = 1;
      if (v16 == 8) {
        goto LABEL_34;
      }
    }
    if ((v49 & 1) != 0) {
    LABEL_34:
      result = v34;
      v33 = 1;
      *v34 = v9;
      goto LABEL_37;
    }
    result = v34;
  }
  v33 = 0;
  LANES128(*(result)).n128_u8[0] = 0;
LABEL_37:
  LANES128(result[1]).n128_u8[0] = v33;
  return result;
}

void game_ff33e0(__int64 a1, int* a2)
{
  int v2;
  __int64 v3;
  __int16 v4;
  _DWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  atomic_ullong* v18;
  __int64 v19;
  atomic_ullong* v20;
  char* v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  int v29;
  int v30;
  __int64* v31;
  __int64 v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
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
  __int64 i;
  __int64 v52;
  __int64 v53;
  __int64 j;
  int* v55;
  int* v56;
  __int64* v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  unsigned __int64 v64;
  unsigned __int64 v65;
  unsigned __int64 v67;
  unsigned __int64 v68;
  _QWORD* v69;
  _QWORD* v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64** v74;
  __int64* v75;
  __int64 v76;
  _QWORD* v77;
  unsigned __int8* v78;
  char* v79;
  atomic_ullong* v80;
  unsigned __int64 v81;
  char* v82;
  int v83;
  unsigned __int64 v84;
  __int64 v85;
  __int64 v86;
  bool v87;
  unsigned __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  __int64 v93;
  bool v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  unsigned __int64 v102;
  unsigned __int64 v103;
  _QWORD* v104;
  _QWORD* v105;
  unsigned __int64 v106;
  __int64 v107;
  __int64* v108;
  char* v109;
  __int64 v110;
  _BYTE* v111;
  unsigned __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  char* v116;
  unsigned __int64 v117;
  __int64 v118;
  __int64 v119;
  unsigned __int64 v120;
  unsigned __int64 v121;
  int v122;
  char v123;
  __int64 v124;
  __int64* v125;
  __int64 v126;
  __int64* v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  unsigned __int64 v132;
  unsigned __int64 v133;
  unsigned __int64 v134;
  __int64 v135;
  _QWORD* v136;
  __int64 v137;
  char* v138;
  __int64* v139;
  __int64 v140;
  unsigned __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  char* v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  _QWORD* v150;
  int* v151;
  __int64 v152;
  char* v153;
  int* v154;
  char* v155;
  int v156;
  char v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  _QWORD* v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  char v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  _QWORD* v183;
  _QWORD* v184;
  __int64* v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  _QWORD* v189;
  unsigned __int64 v190;
  unsigned __int64 v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  char v197;
  char v198;
  __int64* v199;
  _QWORD* v200;
  __int64* v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  unsigned __int64 v207;
  _QWORD* v208;
  __int64 v209;
  char* v210;
  __int64 v211;
  unsigned __int64 v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  unsigned __int64 v216;
  unsigned __int64 v217;
  __int64 v218;
  __int64 v219;
  unsigned __int64 v220;
  _QWORD* v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  __int128 v225;
  __int64* v226;
  _QWORD* v227;
  __int64* v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  char v233;
  __int64 v234;
  __int64 v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  _QWORD* v240;
  __int64* v241;
  __int64 v242;
  __int64 v243;
  __int64 v244;
  int v245;
  __int64* v246;
  __int64 v247;
  bool v248;
  __int64 v249;
  atomic_ullong* v250;
  __int64 v251;
  __int64 v252;
  _QWORD* v253;
  const char* v254;
  const char* v255;
  atomic_ullong* v256;
  atomic_ullong* v257;
  __int64** v258;
  __int64* v259;
  __int64** v260;
  unsigned __int64 v261;
  bool v262;
  unsigned __int64 v263;
  __int64 v264;
  unsigned __int64 v265;
  unsigned __int64 v266;
  bool v267;
  unsigned __int64 v268;
  unsigned __int64 v269;
  __int64 v270;
  unsigned __int64 v271;
  int v272;
  int v273;
  __int64* v274;
  __int64* v275;
  __int64 v276;
  __int64 v277;
  __int64* v278;
  __int64 v279;
  __int64 v280;
  __int64 v281;
  __int64 v282;
  __int64* v283;
  __int64 v284;
  __int64 v285;
  __int64* v286;
  __int64 v287;
  __int64* v288;
  __int64 v289;
  __int64** v290;
  __int64 v291;
  __int64** v292;
  unsigned __int64 v293;
  __int64* v294;
  __int64 v295;
  __int64 v296;
  __int64 v297;
  __int64 v298;
  __int64 v299;
  unsigned __int64 v300;
  __int64 v301;
  unsigned __int64 v302;
  unsigned __int64 v303;
  __int64 v304;
  _QWORD* v305;
  __int64* v306;
  __int64 v307;
  __int64 v308;
  __int64 v309;
  char* v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  unsigned __int64 v317;
  _QWORD* v318;
  __int64 v319;
  char* v320;
  __int64 v321;
  unsigned __int64 v322;
  __int64 v323;
  unsigned __int64 v324;
  __int64 v325;
  unsigned __int64 v326;
  unsigned __int64 v327;
  __int64 v328;
  __int64 v329;
  _QWORD* v330;
  _QWORD* v331;
  __int64 v332;
  __int64 v333;
  __int64 v334;
  unsigned __int64 v335;
  __int64 v336;
  __int64 v337;
  __int64 v338;
  _QWORD* v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  __int64* v350;
  __int64 v351;
  int* v352;
  __int64 v353;
  __int64 v354;
  __int64* v355;
  __int64 v356;
  atomic_ullong* v357;
  __int64 v358;
  __int64 v359;
  struct {
    __int64* v360;
    __int64* v361;
  } v360_;
  __int128 v362;
  unsigned __int64 v363;
  struct {
    _BYTE v364[24];
    _BYTE* v365;
    unsigned __int8* v366;
    char* v367;
    __int64 v368;
    __int64* v369;
    __int64 v370;
  } v364_;
  struct {
    __int64 v371;
    unsigned __int64 v372;
    char* v373;
    __int64 v374;
  } v371_;
  struct {
    __int64* v375;
    __int64* v376;
  } v375_;
  struct {
    __int64* v377;
    __int64 v378;
  } v377_;
  struct {
    __int64 v379;
    unsigned __int64 v380;
    char* v381;
    __int64 v382;
  } v379_;
  struct {
    _QWORD v383[2];
    char* v384;
  } v383_;

  v2 = *a2;
  v3 = a1;
  GameData_2232008 = a1;
  v4 = *((_WORD*)a2 + 2);
  *(_DWORD*)(a1 + 72) = v2;
  v5 = (_DWORD*)(a1 + 72);
  *(_WORD*)(a1 + 76) = v4;
  if ((int*)(a1 + 72) != a2) {
    GameRoutine_d5f8e0_alt1(
        (__int64*)(a1 + 80), *((_QWORD*)a2 + 1), *((_QWORD*)a2 + 2),
        0xCCCCCCCCCCCCCCCDLL *
            ((__int64)(*((_QWORD*)a2 + 2) - *((_QWORD*)a2 + 1)) >> 4));
  }
  v358 = v3;
  if ((unsigned int)(*v5 - 3) > 1) {
    goto LABEL_80;
  }
  GameRoutine_d5f370_alt1(v3, *(_QWORD**)(v3 + 8));
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)v3 = v3 + 8;
  v357 = (atomic_ullong*)(v3 + 8);
  *(_QWORD*)(v3 + 8) = 0;
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 112LL);
  v7 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 120LL);
  v8 = v7 - v6;
  if (v7 == v6) {
    goto LABEL_80;
  }
  if (0xAAAAAAAAAAAAAAABLL * (v8 >> 3) > 0xAAAAAAAAAAAAAAALL) {
  LABEL_612:
    GameRoutine_64aa00_alt1();
  }
  v9 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0);
  v10 = 0;
  do {
    v11 = (__int64*)(v6 + v10);
    v12 = (__int64*)(v9 + v10);
    if ((*(_BYTE*)(v6 + v10) & 1) != 0) {
      fw_text_String_CopyTerminated(v12, v11[2], v11[1]);
    }
    else {
      v13 = *v11;
      v14 = v11[1];
      v15 = v11[2];
      v12[1] = v14;
      v12[2] = v15;
      *v12 = v13;
    }
    v10 += 24;
  } while (v6 + v10 != v7);
  v354 = v9;
  v16 = v9;
  v356 = v9 + v10 - 24;
  while (2) {
    if ((*(_BYTE*)v16 & 1) != 0) {
      fw_text_String_CopyTerminated(&v359, *(_QWORD*)(v16 + 16),
                                    *(_QWORD*)(v16 + 8));
    }
    else {
      v17 = *(__int64**)(v16 + 8);
      v359 = *(_QWORD*)v16;
      v360_.v360 = v17;
      v360_.v361 = *(__int64**)(v16 + 16);
    }
    v18 = v357;
    v363 = 0;
    v362 = (__typeof__(v362)){0};
    v19 = *(_QWORD*)v357;
    v20 = v357;
    if (*(_QWORD*)v357 == 0) {
      goto LABEL_43;
    }
    if ((v359 & 1) != 0) {
      v21 = (char*)v360_.v361;
    }
    else {
      v21 = (char*)&v359 + 1;
    }
    if ((v359 & 1) != 0) {
      v22 = (unsigned __int64)v360_.v360;
    }
    else {
      v22 = (unsigned __int64)(unsigned __int8)v359 >> 1;
    }
    do {
      while (1) {
        v18 = (atomic_ullong*)v19;
        v23 = *(unsigned __int8*)(v19 + 32);
        v24 = (v23 & 1) == 0;
        v25 = v23 >> 1;
        v26 = v24 ? v25 : *((_QWORD*)v18 + 5);
        v27 = v24 ? (__int64)v18 + 33 : *((_QWORD*)v18 + 6);
        v28 = v26 >= v22 ? v22 : v26;
        v29 = memcmp_alt1((__int64)v21, v27, v28);
        if (v29 != 0) {
          break;
        }
        if (v22 >= v26) {
          goto LABEL_37;
        }
      LABEL_23:
        v19 = *(_QWORD*)v18;
        v20 = v18;
        if (*(_QWORD*)v18 == 0) {
          goto LABEL_43;
        }
      }
      if (v29 < 0) {
        goto LABEL_23;
      }
    LABEL_37:
      v30 = memcmp_alt1(v27, (__int64)v21, v28);
      if (v30 != 0) {
        if ((v30 & 0x80000000) == 0) {
          goto LABEL_63;
        }
      }
      else if (v26 >= v22) {
        goto LABEL_63;
      }
      v19 = *((_QWORD*)v18 + 1);
    } while (v19 != 0);
    v20 = (atomic_ullong*)((char*)v18 + 8);
  LABEL_43:
    v31 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
    v32 = v359;
    v33 = v360_.v360;
    v359 = 0;
    v360_.v360 = nullptr;
    *v31 = 0;
    v31[1] = 0;
    v31[2] = (__int64)v18;
    v31[4] = v32;
    v31[5] = (__int64)v33;
    v34 = (__int64)v360_.v361;
    v35 = v362;
    v360_.v361 = nullptr;
    *(_QWORD*)&v362 = 0;
    v31[6] = v34;
    v31[7] = v35;
    v36 = *((_QWORD*)&v362 + 1);
    v37 = v363;
    *((_QWORD*)&v362 + 1) = 0;
    v363 = 0;
    v31[8] = v36;
    v31[9] = v37;
    *(_QWORD*)v20 = v31;
    v38 = **(_QWORD**)v358;
    if (v38 != 0) {
      *(_QWORD*)v358 = v38;
      v39 = *(__int64**)v20;
    }
    else {
      v39 = v31;
    }
    fw_containers_BalanceAfterInsert(*(__int64**)(v358 + 8), v39);
    ++*(_QWORD*)(v358 + 16);
    v40 = v362;
    if ((_QWORD)v362 != 0) {
      v41 = *((_QWORD*)&v362 + 1);
      if ((_QWORD)v362 == *((_QWORD*)&v362 + 1)) {
        goto LABEL_60;
      }
      do {
        if ((*(_BYTE*)(v41 - 32) & 1) != 0) {
          v42 = *(_QWORD*)(v41 - 16);
          if (v42 != 0) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v43 = 128;
            }
            else {
              v43 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v43,
                                               v42);
          }
        }
        v44 = *(_QWORD*)(v41 - 40);
        if (v44 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v44 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v44 + 16LL))(v44);
          std___1___shared_weak_count___release_weak_alt2(v44);
        }
        v41 -= 48;
      } while (v41 != v40);
      *((_QWORD*)&v362 + 1) = v40;
      v40 = v362;
      if ((_QWORD)v362 != 0) {
      LABEL_60:
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v40);
      }
    }
  LABEL_63:
    if ((v359 & 1) != 0 && v360_.v361 != nullptr) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v46 = 128;
      }
      else {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v46,
                                         (__int64)v360_.v361);
    }
    v3 = v358;
    v24 = v356 == v16;
    v16 += 24;
    if (!v24) {
      continue;
    }
    break;
  }
  do {
    if ((*(_BYTE*)(v354 + v10 - 24) & 1) != 0) {
      v47 = *(_QWORD*)(v354 + v10 - 8);
      if (v47 != 0) {
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v48, v47);
      }
    }
    v10 -= 24;
  } while (v10 != 0);
  v49 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v49 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v354);
LABEL_80:
  GameRoutine_d5e9a0_alt1(v3 + 24, *(__int64**)v3, (__int64*)(v3 + 8));
  *(_QWORD*)(v3 + 136) = *(_QWORD*)(v3 + 128);
  if (*(_DWORD*)(v3 + 72) == 1) {
    v50 = *(_QWORD*)(v3 + 104);
    for (i = *(_QWORD*)(v3 + 112); v50 != i; v50 += 152) {
      v52 = *(_QWORD*)(v50 + 80);
      game_d8e140_alt1(v52);
      game_d8ec60_alt1(v52);
    }
    goto LABEL_317;
  }
  v53 = *(_QWORD*)(v3 + 104);
  for (j = *(_QWORD*)(v3 + 112); j != v53; GameRoutine_d5fd80(j)) {
    j -= 152;
  }
  v56 = *(int**)(v3 + 80);
  v55 = *(int**)(v3 + 88);
  *(_QWORD*)(v3 + 112) = v53;
  if (v56 != v55) {
    v57 = (__int64*)fw_memory_g_heap_manager_ptr;
    v352 = v55;
    do {
      if (*v56 == 1) {
        v58 = GameData_212dbb8[0];
        LocatorDispos_db2180(
            (void*)(v383_.v383),
            (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL),
            (unsigned __int8*)v56 + 32);
        HubDisposFileReader_c98880(
            (void*)((__int64*)&v375_.v375),
            (_QWORD*)(*(_QWORD*)(*(_QWORD*)v58 + 216LL) + 8LL));
        v59 = v375_.v375;
        if (v375_.v376 != v375_.v375) {
          v60 = (__int64)v56 + 57;
          v61 = 0;
          while (1) {
            v62 = (_QWORD*)v59[v61];
            v63 = (v56[14] & 1) != 0 ? *((_QWORD*)v56 + 9) : v60;
            v64 = game_HashString(v63);
            if (v64 != 0) {
              v65 = v62[11];
              if (v65 != 0 && v62[13] != 0) {
                v67 = v65 - 1;
                if ((v65 & (v65 - 1)) != 0) {
                  v68 = v64;
                  if (v64 >= v65) {
                    v68 = v64 % v65;
                  }
                }
                else {
                  v68 = v67 & v64;
                }
                v69 = *(_QWORD**)(v62[10] + 8 * v68);
                if (v69 != nullptr) {
                  v70 = (_QWORD*)*v69;
                  if (v70 != nullptr) {
                    if ((v65 & v67) == 0) {
                      while (1) {
                        v72 = v70[1];
                        if (v72 == v64) {
                          if (v70[2] == v64) {
                            goto LABEL_122;
                          }
                        }
                        else if ((v72 & v67) != v68) {
                          goto LABEL_93;
                        }
                        v70 = (_QWORD*)*v70;
                        if (v70 == nullptr) {
                          goto LABEL_93;
                        }
                      }
                    }
                    while (1) {
                      v71 = v70[1];
                      if (v71 == v64) {
                        break;
                      }
                      if (v71 >= v65) {
                        v71 %= v65;
                      }
                      if (v71 != v68) {
                        goto LABEL_93;
                      }
                    LABEL_111:
                      v70 = (_QWORD*)*v70;
                      if (v70 == nullptr) {
                        goto LABEL_93;
                      }
                    }
                    if (v70[2] != v64) {
                      goto LABEL_111;
                    }
                  LABEL_122:
                    v73 = v70[3];
                    if (v73 != 0) {
                      v74 = *(__int64***)(v73 + 40);
                      v75 = *v74;
                      v355 = v74[1];
                      if (*v74 != v355) {
                        break;
                      }
                    }
                  }
                }
              }
            }
          LABEL_93:
            v59 = v375_.v375;
            if (++v61 >= (unsigned __int64)(v375_.v376 - v375_.v375)) {
              goto LABEL_308;
            }
          }
          v356 = v60;
          while (2) {
            v76 = *v75;
            v77 =
                (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v57, 872, 16, 0);
            v78 = (unsigned __int8*)(v77 + 3);
            v79 = (char*)v77;
            v77[1] = 0;
            v80 = (atomic_ullong*)(v77 + 1);
            v77[2] = 0;
            *v77 = GameData_1fffa98;
            GameHr_ff7060((__int64)(v77 + 3), v76);
            if ((v383_.v383[0] & 1) != 0) {
              v81 = v383_.v383[1];
            }
            else {
              v81 = (unsigned __int64)LOBYTE(v383_.v383[0]) >> 1;
            }
            if ((v383_.v383[0] & 1) != 0) {
              v82 = v383_.v384;
            }
            else {
              v82 = (char*)v383_.v383 + 1;
            }
            GameRoutine_60a060(v79 + 848, (__int64)v82, v81);
            GameHr_d8d760((__int64)v78);
            GameRoutine_e07e20_alt1(v78);
            game_d8e140_alt1((__int64)v78);
            game_d8ec60_alt1((__int64)v78);
            v371_.v373 = nullptr;
            v371_.v374 = 0;
            v371_.v371 = 0;
            v371_.v372 = 0;
            v364_.v369 = nullptr;
            v364_.v370 = 0;
            v364_.v367 = nullptr;
            v364_.v368 = 0;
            v364_.v365 = nullptr;
            v364_.v366 = nullptr;
            v363 = 0;
            memset(v364_.v364, 0, sizeof(v364_.v364));
            v362 = (__typeof__(v362)){0};
            v360_.v360 = nullptr;
            v360_.v361 = nullptr;
            v357 = v80;
            atomic_fetch_add_explicit(v80, 1u, memory_order_relaxed);
            v364_.v366 = v78;
            v364_.v367 = v79;
            v83 = *v56;
            BYTE4(v359) = *((_BYTE*)v56 + 4);
            LODWORD(v359) = v83;
            if (&v359 != (__int64*)v56) {
              GameRoutine_6b7aa0_alt1(
                  (__int64)&v360_.v360, *((__int64**)v56 + 1),
                  *((__int64**)v56 + 2),
                  0xAAAAAAAAAAAAAAABLL *
                      ((__int64)(*((_QWORD*)v56 + 2) - *((_QWORD*)v56 + 1)) >>
                       3));
              v84 = *((unsigned __int8*)v56 + 32);
              if ((BYTE8(v362) & 1) != 0) {
                v87 = (v84 & 1) == 0;
                v88 = v84 >> 1;
                if (v87) {
                  v89 = (__int64)v56 + 33;
                }
                else {
                  v89 = *((_QWORD*)v56 + 6);
                }
                if (v87) {
                  v90 = v88;
                }
                else {
                  v90 = *((_QWORD*)v56 + 5);
                }
                SpineModel_64dde0((__int64*)&v362 + 1, v89, v90);
              }
              else if ((v84 & 1) != 0) {
                GameRoutine_64df20((_QWORD*)&v362 + 1, *((_QWORD*)v56 + 6),
                                   *((_QWORD*)v56 + 5));
              }
              else {
                v85 = *((_QWORD*)v56 + 4);
                v86 = *((_QWORD*)v56 + 6);
                v363 = *((_QWORD*)v56 + 5);
                *(_QWORD*)v364_.v364 = v86;
                *((_QWORD*)&v362 + 1) = v85;
              }
              v91 = *((unsigned __int8*)v56 + 56);
              if ((v364_.v364[8] & 1) != 0) {
                v94 = (v91 & 1) == 0;
                v95 = v91 >> 1;
                if (v94) {
                  v96 = v356;
                }
                else {
                  v96 = *((_QWORD*)v56 + 9);
                }
                if (v94) {
                  v97 = v95;
                }
                else {
                  v97 = *((_QWORD*)v56 + 8);
                }
                SpineModel_64dde0((__int64*)&v364_.v364[8], v96, v97);
              }
              else if ((v91 & 1) != 0) {
                GameRoutine_64df20(&v364_.v364[8], *((_QWORD*)v56 + 9),
                                   *((_QWORD*)v56 + 8));
              }
              else {
                v92 = *((_QWORD*)v56 + 7);
                v93 = *((_QWORD*)v56 + 9);
                *(_QWORD*)&v364_.v364[16] = *((_QWORD*)v56 + 8);
                v364_.v365 = (_BYTE*)v93;
                *(_QWORD*)&v364_.v364[8] = v92;
              }
            }
            if ((v364_.v366[88] & 1) != 0) {
              v98 = *((_QWORD*)v364_.v366 + 13);
            }
            else {
              v98 = (__int64)(v364_.v366 + 89);
            }
            v99 = game_HashString(v98);
            v3 = v358;
            v100 = 0;
            if (v99 != 0) {
              v101 = *(_QWORD*)(GameData_21c99c8 + 96);
              if (v101 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
                v102 = v101 - 1;
                if ((v101 & (v101 - 1)) != 0) {
                  v103 = v99;
                  if (v99 >= v101) {
                    v103 = v99 % v101;
                  }
                }
                else {
                  v103 = v102 & v99;
                }
                v104 =
                    *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v103);
                if (v104 == nullptr || (v105 = (_QWORD*)*v104) == nullptr) {
                LABEL_180:
                  v100 = 0;
                  goto LABEL_181;
                }
                if ((v101 & v102) == 0) {
                  while (1) {
                    v107 = v105[1];
                    if (v107 == v99) {
                      if (v105[2] == v99) {
                        goto LABEL_307;
                      }
                    }
                    else if ((v107 & v102) != v103) {
                      goto LABEL_180;
                    }
                    v105 = (_QWORD*)*v105;
                    v100 = 0;
                    if (v105 == nullptr) {
                      goto LABEL_181;
                    }
                  }
                }
                while (1) {
                  v106 = v105[1];
                  if (v106 == v99) {
                    if (v105[2] == v99) {
                    LABEL_307:
                      v100 = v105[3];
                      break;
                    }
                  }
                  else {
                    if (v106 >= v101) {
                      v106 %= v101;
                    }
                    if (v106 != v103) {
                      goto LABEL_180;
                    }
                  }
                  v105 = (_QWORD*)*v105;
                  if (v105 == nullptr) {
                    goto LABEL_180;
                  }
                }
              }
            }
          LABEL_181:
            v108 = (__int64*)v364_.v366;
            v109 = v364_.v367;
            v364_.v368 = v100;
            v379_.v381 = nullptr;
            v379_.v382 = 0;
            v379_.v379 = 0;
            v379_.v380 = 0;
            v377_.v377 = nullptr;
            v377_.v378 = 0;
            if (v364_.v367 != nullptr) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v364_.v367 + 8), 1u,
                  memory_order_relaxed);
              v110 = v377_.v378;
              v377_.v377 = v108;
              v377_.v378 = (__int64)v109;
              if (v110 != 0 &&
                  atomic_fetch_add((atomic_ullong* volatile)(v110 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v110 + 16LL))(v110);
                std___1___shared_weak_count___release_weak_alt2(v110);
              }
            }
            else {
              v377_.v377 = (__int64*)v364_.v366;
              v377_.v378 = 0;
            }
            if ((v379_.v379 & 1) != 0) {
              if ((v364_.v364[8] & 1) != 0) {
                v111 = v364_.v365;
              }
              else {
                v111 = &v364_.v364[9];
              }
              if ((v364_.v364[8] & 1) != 0) {
                v112 = *(_QWORD*)&v364_.v364[16];
              }
              else {
                v112 = (unsigned __int64)v364_.v364[8] >> 1;
              }
              SpineModel_64dde0(&v379_.v379, (__int64)v111, v112);
            }
            else if ((v364_.v364[8] & 1) != 0) {
              GameRoutine_64df20(&v379_.v379, (__int64)v364_.v365,
                                 *(unsigned __int64*)&v364_.v364[16]);
            }
            else {
              v379_.v379 = *(_QWORD*)&v364_.v364[8];
              v379_.v380 = *(_QWORD*)&v364_.v364[16];
              v379_.v381 = v364_.v365;
            }
            GameRoutine_e99900(&v377_.v377);
            v114 = v377_.v377;
            v113 = v377_.v378;
            if (v377_.v378 != 0) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v377_.v378 + 8), 1u,
                  memory_order_relaxed);
            }
            v115 = v364_.v370;
            v364_.v369 = v114;
            v364_.v370 = v113;
            if (v115 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v115 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v115 + 16LL))(v115);
              std___1___shared_weak_count___release_weak_alt2(v115);
            }
            if ((v371_.v371 & 1) != 0) {
              if ((v379_.v379 & 1) != 0) {
                v116 = v379_.v381;
              }
              else {
                v116 = (char*)&v379_.v379 + 1;
              }
              if ((v379_.v379 & 1) != 0) {
                v117 = v379_.v380;
              }
              else {
                v117 = (unsigned __int64)(unsigned __int8)v379_.v379 >> 1;
              }
              SpineModel_64dde0(&v371_.v371, (__int64)v116, v117);
            }
            else if ((v379_.v379 & 1) != 0) {
              GameRoutine_64df20(&v371_.v371, (__int64)v379_.v381, v379_.v380);
            }
            else {
              v371_.v371 = v379_.v379;
              v371_.v372 = v379_.v380;
              v371_.v373 = v379_.v381;
            }
            v371_.v374 = v379_.v382;
            if ((v379_.v379 & 1) != 0 && v379_.v381 != nullptr) {
              v118 = 128;
              if (*(_QWORD*)(*v57 + 200) == 0) {
                v118 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v57 + v118,
                                                 (__int64)v379_.v381);
            }
            v119 = v377_.v378;
            if (v377_.v378 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v377_.v378 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v119 + 16LL))(v119);
              std___1___shared_weak_count___release_weak_alt2(v119);
              if (v364_.v368 != 0) {
              LABEL_221:
                v121 = *(_QWORD*)(v358 + 112);
                v120 = *(_QWORD*)(v358 + 120);
                if (v121 >= v120) {
                  v130 = *(_QWORD*)(v358 + 104);
                  v131 = v121 - v130;
                  v132 =
                      1 - 0x79435E50D79435E5LL * ((__int64)(v121 - v130) >> 3);
                  if (v132 > 0x1AF286BCA1AF286LL) {
                    GameRoutine_d5ff80();
                  }
                  v133 = 0x86BCA1AF286BCA1BLL * ((__int64)(v120 - v130) >> 3);
                  if (2 * v133 > v132) {
                    v132 = 2 * v133;
                  }
                  if (v133 >= 0xD79435E50D7943LL) {
                    v134 = 0x1AF286BCA1AF286LL;
                  }
                  else {
                    v134 = v132;
                  }
                  if (v134 > 0x1AF286BCA1AF286LL) {
                  LABEL_608:
                    GameRoutine_60a210_alt1();
                  }
                  v353 = 152 * v134;
                  v135 = fw_memory_HeapManager_Allocate_alt1(
                      fw_memory_g_heap_manager, 152 * v134, 16, 0);
                  v136 = (_QWORD*)(v135 + v131);
                  v137 = v135;
                  GameRoutine_d5e840((__int64)v136, (int*)&v359);
                  v138 = v364_.v367;
                  v136[10] = v364_.v366;
                  v136[11] = v138;
                  if (v138 != nullptr) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v138 + 8), 1u,
                        memory_order_relaxed);
                  }
                  v139 = v364_.v369;
                  v136[12] = v364_.v368;
                  v136[13] = v139;
                  v140 = v364_.v370;
                  v136[14] = v364_.v370;
                  if (v140 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v140 + 8), 1u,
                        memory_order_relaxed);
                  }
                  if ((v371_.v371 & 1) != 0) {
                    fw_text_String_CopyTerminated(
                        v136 + 15, (__int64)v371_.v373, v371_.v372);
                  }
                  else {
                    v141 = v371_.v372;
                    v136[15] = v371_.v371;
                    v136[16] = v141;
                    v136[17] = v371_.v373;
                  }
                  v136[18] = v371_.v374;
                  v152 = *(_QWORD*)(v358 + 104);
                  v151 = *(int**)(v358 + 112);
                  v153 = (char*)v136 + v152 - (_QWORD)v151;
                  if ((int*)v152 == v151) {
                    v165 = (_QWORD*)v358;
                  }
                  else {
                    v154 = *(int**)(v358 + 104);
                    v155 = (char*)v136 + v152 - (_QWORD)v151;
                    do {
                      v156 = *v154;
                      v157 = *((_BYTE*)v154 + 4);
                      *((_QWORD*)v155 + 1) = 0;
                      *((_QWORD*)v155 + 2) = 0;
                      *((_QWORD*)v155 + 3) = 0;
                      v155[4] = v157;
                      *(_DWORD*)v155 = v156;
                      *((_QWORD*)v155 + 1) = *((_QWORD*)v154 + 1);
                      *((_QWORD*)v155 + 2) = *((_QWORD*)v154 + 2);
                      *((_QWORD*)v155 + 3) = *((_QWORD*)v154 + 3);
                      *((_QWORD*)v154 + 2) = 0;
                      *((_QWORD*)v154 + 3) = 0;
                      *((_QWORD*)v154 + 1) = 0;
                      v158 = *((_QWORD*)v154 + 4);
                      v159 = *((_QWORD*)v154 + 6);
                      *((_QWORD*)v155 + 5) = *((_QWORD*)v154 + 5);
                      *((_QWORD*)v155 + 6) = v159;
                      *((_QWORD*)v155 + 4) = v158;
                      *((_QWORD*)v154 + 5) = 0;
                      *((_QWORD*)v154 + 6) = 0;
                      *((_QWORD*)v154 + 4) = 0;
                      v160 = *((_QWORD*)v154 + 7);
                      v161 = *((_QWORD*)v154 + 9);
                      *((_QWORD*)v155 + 8) = *((_QWORD*)v154 + 8);
                      *((_QWORD*)v155 + 9) = v161;
                      *((_QWORD*)v155 + 7) = v160;
                      *((_QWORD*)v154 + 8) = 0;
                      *((_QWORD*)v154 + 9) = 0;
                      *((_QWORD*)v154 + 7) = 0;
                      *((_QWORD*)v155 + 10) = *((_QWORD*)v154 + 10);
                      *((_QWORD*)v155 + 11) = *((_QWORD*)v154 + 11);
                      *((_QWORD*)v154 + 10) = 0;
                      *((_QWORD*)v154 + 11) = 0;
                      *((_QWORD*)v155 + 12) = *((_QWORD*)v154 + 12);
                      *((_QWORD*)v155 + 13) = *((_QWORD*)v154 + 13);
                      *((_QWORD*)v155 + 14) = *((_QWORD*)v154 + 14);
                      *((_QWORD*)v154 + 13) = 0;
                      *((_QWORD*)v154 + 14) = 0;
                      v162 = *((_QWORD*)v154 + 15);
                      v163 = *((_QWORD*)v154 + 17);
                      *((_QWORD*)v155 + 16) = *((_QWORD*)v154 + 16);
                      *((_QWORD*)v155 + 17) = v163;
                      *((_QWORD*)v155 + 15) = v162;
                      *((_QWORD*)v154 + 16) = 0;
                      *((_QWORD*)v154 + 17) = 0;
                      *((_QWORD*)v154 + 15) = 0;
                      v164 = *((_QWORD*)v154 + 18);
                      v154 += 38;
                      *((_QWORD*)v155 + 18) = v164;
                      v155 += 152;
                    } while (v154 != v151);
                    do {
                      GameRoutine_d5fd80(v152);
                      v152 += 152;
                    } while ((int*)v152 != v151);
                    v165 = (_QWORD*)v358;
                    v152 = *(_QWORD*)(v358 + 104);
                  }
                  v166 = v137 + v353;
                  v150 = v136 + 19;
                  v3 = (__int64)v165;
                  v165[13] = v153;
                  v165[14] = v150;
                  v165[15] = v166;
                  v57 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v152 != 0) {
                    v167 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v167 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v167, v152);
                  }
                }
                else {
                  v122 = v359;
                  v123 = BYTE4(v359);
                  *(_QWORD*)(v121 + 8) = 0;
                  *(_QWORD*)(v121 + 16) = 0;
                  *(_QWORD*)(v121 + 24) = 0;
                  *(_BYTE*)(v121 + 4) = v123;
                  *(_DWORD*)v121 = v122;
                  v125 = v360_.v360;
                  v124 = (__int64)v360_.v361;
                  v126 = (char*)v360_.v361 - (char*)v360_.v360;
                  if (v360_.v361 != v360_.v360) {
                    if (0xAAAAAAAAAAAAAAABLL * (v126 >> 3) >
                        0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_612;
                    }
                    v127 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr,
                        (char*)v360_.v361 - (char*)v360_.v360, 16, 0);
                    *(_QWORD*)(v121 + 8) = v127;
                    *(_QWORD*)(v121 + 16) = v127;
                    *(_QWORD*)(v121 + 24) = (char*)v127 + v126;
                    do {
                      if ((*(_BYTE*)v125 & 1) != 0) {
                        fw_text_String_CopyTerminated(v127, v125[2], v125[1]);
                      }
                      else {
                        v128 = *v125;
                        v129 = v125[2];
                        v127[1] = v125[1];
                        v127[2] = v129;
                        *v127 = v128;
                      }
                      v125 += 3;
                      v127 += 3;
                    } while (v125 != (__int64*)v124);
                    *(_QWORD*)(v121 + 16) = v127;
                  }
                  if ((BYTE8(v362) & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)(v121 + 32),
                                                  *(__int64*)v364_.v364, v363);
                  }
                  else {
                    v142 = *((_QWORD*)&v362 + 1);
                    v143 = *(_QWORD*)v364_.v364;
                    *(_QWORD*)(v121 + 40) = v363;
                    *(_QWORD*)(v121 + 48) = v143;
                    *(_QWORD*)(v121 + 32) = v142;
                  }
                  v3 = v358;
                  if ((v364_.v364[8] & 1) != 0) {
                    fw_text_String_CopyTerminated(
                        (__int64*)(v121 + 56), (__int64)v364_.v365,
                        *(unsigned __int64*)&v364_.v364[16]);
                  }
                  else {
                    v144 = *(_QWORD*)&v364_.v364[8];
                    v145 = (__int64)v364_.v365;
                    *(_QWORD*)(v121 + 64) = *(_QWORD*)&v364_.v364[16];
                    *(_QWORD*)(v121 + 72) = v145;
                    *(_QWORD*)(v121 + 56) = v144;
                  }
                  *(_QWORD*)(v121 + 80) = v364_.v366;
                  v146 = v364_.v367;
                  *(_QWORD*)(v121 + 88) = v364_.v367;
                  if (v146 != nullptr) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v146 + 8), 1u,
                        memory_order_relaxed);
                  }
                  *(_QWORD*)(v121 + 96) = v364_.v368;
                  *(_QWORD*)(v121 + 104) = v364_.v369;
                  v147 = v364_.v370;
                  *(_QWORD*)(v121 + 112) = v364_.v370;
                  if (v147 != 0) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v147 + 8), 1u,
                        memory_order_relaxed);
                  }
                  if ((v371_.v371 & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)(v121 + 120),
                                                  (__int64)v371_.v373,
                                                  v371_.v372);
                  }
                  else {
                    v148 = v371_.v371;
                    v149 = (__int64)v371_.v373;
                    *(_QWORD*)(v121 + 128) = v371_.v372;
                    *(_QWORD*)(v121 + 136) = v149;
                    *(_QWORD*)(v121 + 120) = v148;
                  }
                  v150 = (_QWORD*)(v121 + 152);
                  *(_QWORD*)(v121 + 144) = v371_.v374;
                  v57 = &fw_memory_g_heap_manager;
                }
                *(_QWORD*)(v3 + 112) = v150;
              }
            }
            else if (v364_.v368 != 0) {
              goto LABEL_221;
            }
            if ((v371_.v371 & 1) != 0 && v371_.v373 != nullptr) {
              v168 = 128;
              if (*(_QWORD*)(*v57 + 200) == 0) {
                v168 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v57 + v168,
                                                 (__int64)v371_.v373);
            }
            v169 = v364_.v370;
            if (v364_.v370 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v364_.v370 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v169 + 16LL))(v169);
              std___1___shared_weak_count___release_weak_alt2(v169);
              v170 = (__int64)v364_.v367;
              if (v364_.v367 != nullptr) {
                goto LABEL_279;
              }
            }
            else {
              v170 = (__int64)v364_.v367;
              if (v364_.v367 != nullptr) {
              LABEL_279:
                if (atomic_fetch_add((atomic_ullong* volatile)(v170 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v170 + 16LL))(v170);
                  std___1___shared_weak_count___release_weak_alt2(v170);
                }
              }
            }
            if ((v364_.v364[8] & 1) != 0 && v364_.v365 != nullptr) {
              v171 = 128;
              if (*(_QWORD*)(*v57 + 200) == 0) {
                v171 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v57 + v171,
                                                 (__int64)v364_.v365);
            }
            if ((BYTE8(v362) & 1) != 0 && *(_QWORD*)v364_.v364 != 0) {
              v172 = 128;
              if (*(_QWORD*)(*v57 + 200) == 0) {
                v172 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v57 + v172,
                                                 *(__int64*)v364_.v364);
            }
            v173 = (__int64)v360_.v360;
            if (v360_.v360 != nullptr) {
              v174 = (__int64)v360_.v361;
              if (v360_.v360 == v360_.v361) {
                goto LABEL_302;
              }
              v175 = (__int64)v360_.v361;
              do {
                v176 = *(_BYTE*)(v175 - 24);
                v175 -= 24;
                if ((v176 & 1) != 0) {
                  v177 = *(_QWORD*)(v174 - 8);
                  if (v177 != 0) {
                    v178 = 128;
                    if (*(_QWORD*)(*v57 + 200) == 0) {
                      v178 = 56;
                    }
                    nn_mem_StandardAllocator_Free_alt2(*v57 + v178, v177);
                  }
                }
                v174 = v175;
              } while (v175 != v173);
              v360_.v361 = (__int64*)v173;
              v173 = (__int64)v360_.v360;
              if (v360_.v360 != nullptr) {
              LABEL_302:
                v179 = 128;
                if (*(_QWORD*)(*v57 + 200) == 0) {
                  v179 = 56;
                }
                nn_mem_StandardAllocator_Free_alt2(*v57 + v179, v173);
              }
            }
            if (atomic_fetch_add(v357, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(char*))(*(_QWORD*)v79 + 16LL))(v79);
              std___1___shared_weak_count___release_weak_alt2((__int64)v79);
            }
            v60 = v356;
            if (++v75 == v355) {
              goto LABEL_93;
            }
            continue;
          }
        }
      LABEL_308:
        if (v59 != nullptr) {
          v180 = *v57;
          v375_.v376 = v59;
          v181 = 128;
          if (*(_QWORD*)(v180 + 200) == 0) {
            v181 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(v180 + v181, (__int64)v59);
        }
        if ((v383_.v383[0] & 1) != 0 && v383_.v384 != nullptr) {
          v182 = 128;
          if (*(_QWORD*)(*v57 + 200) == 0) {
            v182 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v57 + v182, (__int64)v383_.v384);
        }
        v55 = v352;
      }
      v56 += 20;
    } while (v56 != v55);
  }
LABEL_317:
  v183 = *(_QWORD**)(v3 + 104);
  v184 = *(_QWORD**)(v3 + 112);
  if (v183 != v184) {
    v185 = v183 + 10;
    v186 = *(_QWORD*)GameData_212dbb8[0];
    v187 = *(_QWORD*)GameData_212dbb8[0] + 89LL;
    do {
      v190 = *((unsigned __int8*)v185 - 48);
      if ((v190 & 1) != 0) {
        v191 = *(v185 - 5);
      }
      else {
        v191 = v190 >> 1;
      }
      v192 = *(unsigned __int8*)(v186 + 88);
      v193 = *(_QWORD*)(v186 + 96);
      if ((v192 & 1) == 0) {
        v193 = v192 >> 1;
      }
      if (v191 == v193 &&
          ((v190 & 1) != 0 ? (v194 = *(v185 - 4)) : (v194 = (__int64)v185 - 47),
           (v192 & 1) != 0 ? (v195 = *(_QWORD*)(v186 + 104)) : (v195 = v187),
           memcmp_alt1(v194, v195, v191) == 0)) {
        if ((GameRoutine_d90760(*v185) & 1) == 0) {
          goto LABEL_321;
        }
      }
      else if (*(_BYTE*)(*v185 + 818) != 1 ||
               (GameRoutine_d90760(*v185) & 1) == 0) {
        goto LABEL_321;
      }
      v359 = *v185;
      v196 = v185[1];
      v360_.v360 = (__int64*)v196;
      if (v196 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v196 + 8), 1u,
                                  memory_order_relaxed);
        v197 = GameHr_ff5600(v3, &v359, v185[2]);
        if (atomic_fetch_add((atomic_ullong* volatile)(v196 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v197 & 1) == 0) {
            goto LABEL_321;
          }
        }
        else {
          v198 = v197;
          (*(void (**)(__int64))(*(_QWORD*)v196 + 16LL))(v196);
          std___1___shared_weak_count___release_weak_alt2(v196);
          if ((v198 & 1) == 0) {
            goto LABEL_321;
          }
        }
      }
      else if ((GameHr_ff5600(v3, &v359, v185[2]) & 1) == 0) {
        goto LABEL_321;
      }
      v377_.v377 = v185 - 6;
      v199 = GameHr_ff7280((__int64**)(v3 + 24), (unsigned __int8*)v185 - 48,
                           &v377_.v377);
      v200 = (_QWORD*)v199[8];
      v201 = v199;
      if ((unsigned __int64)v200 >= v199[9]) {
        v205 = GameHr_ff69e0(v199 + 7, v185 + 3);
      }
      else {
        *v200 = v185[3];
        v202 = v185[4];
        v200[1] = v202;
        if (v202 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v202 + 8), 1u,
                                    memory_order_relaxed);
        }
        if ((v185[5] & 1) != 0) {
          fw_text_String_CopyTerminated(v200 + 2, v185[7], v185[6]);
        }
        else {
          v203 = v185[5];
          v204 = v185[7];
          v200[3] = v185[6];
          v200[4] = v204;
          v200[2] = v203;
        }
        v205 = (__int64)(v200 + 6);
        v200[5] = v185[8];
      }
      v201[8] = v205;
      v206 = *(_QWORD*)(v185[3] + 56);
      v208 = *(_QWORD**)(v3 + 136);
      v207 = *(_QWORD*)(v3 + 144);
      if ((unsigned __int64)v208 < v207) {
        *v208 = v206;
        v188 = (__int64)(v208 + 1);
      }
      else {
        v209 = *(_QWORD*)(v3 + 128);
        v210 = (char*)v208 - v209;
        v211 = ((__int64)v208 - v209) >> 3;
        v212 = v211 + 1;
        if ((unsigned __int64)(v211 + 1) >> 61 != 0) {
        LABEL_609:
          GameRoutine_65c760_alt1();
        }
        v213 = v207 - v209;
        if (v213 >> 2 > v212) {
          v212 = v213 >> 2;
        }
        if ((unsigned __int64)v213 >= 0x7FFFFFFFFFFFFFF8LL) {
          v214 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v214 = v212;
        }
        if (v214 != 0) {
          if (v214 >> 61 != 0) {
            goto LABEL_608;
          }
          v215 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v214, 16, 0);
        }
        else {
          v215 = 0;
        }
        v216 = v215 + 8 * v214;
        v217 = (unsigned __int64)v208 - v209;
        v218 = (__int64)&v210[v215 + -8 * v211];
        *(_QWORD*)&v210[v215] = v206;
        v188 = (__int64)&v210[v215 + 8];
        memcpy_alt1(v218, v209, v217);
        *(_QWORD*)(v358 + 128) = v218;
        *(_QWORD*)(v358 + 136) = v188;
        v3 = v358;
        *(_QWORD*)(v358 + 144) = v216;
        if (v209 != 0) {
          v219 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v219 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v219, v209);
        }
      }
      *(_QWORD*)(v3 + 136) = v188;
    LABEL_321:
      v189 = v185 + 9;
      v185 += 19;
    } while (v189 != v184);
  }
  v220 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(GameData_21f3ce0 + 40) -
                                           *(_QWORD*)(GameData_21f3ce0 + 32)) >>
                                 5) +
         (*(_QWORD*)(GameData_21f3ce0 + 88) << 8);
  if (*(_DWORD*)(v3 + 72) != 1 || v220 != *(_QWORD*)(v358 + 160)) {
    v221 = *(_QWORD**)(v358 + 56);
    *(_QWORD*)(v358 + 160) = v220;
    GameRoutine_d5f370_alt1(v358 + 48, v221);
    *(_QWORD*)(v358 + 56) = 0;
    *(_QWORD*)(v358 + 64) = 0;
    *(_QWORD*)(v358 + 48) = v358 + 56;
    v222 = *(_QWORD*)(GameData_21f3ce0 + 32);
    v223 = *(_QWORD*)(GameData_21f3ce0 + 40);
    if (v222 != v223) {
      while (2) {
        v360_.v361 = nullptr;
        memset(v364_.v364, 0, 21);
        *((_QWORD*)&v362 + 1) = 28160;
        v363 = 0;
        v359 = 0;
        v360_.v360 = nullptr;
        *(_QWORD*)((char*)&v362 + 1) = *(_QWORD*)"Situation";
        LOBYTE(v362) = 18;
        if ((__int64*)v222 != &v359) {
          if ((*(_BYTE*)v222 & 1) != 0) {
            GameRoutine_64df20(&v359, *(_QWORD*)(v222 + 16),
                               *(_QWORD*)(v222 + 8));
          }
          else {
            v360_.v360 = *(__int64**)(v222 + 8);
            v224 = *(_QWORD*)v222;
            v360_.v361 = *(__int64**)(v222 + 16);
            v359 = v224;
          }
        }
        *(_QWORD*)v364_.v364 = *(_QWORD*)(v222 + 32);
        *(_QWORD*)&v225 = *(_QWORD*)v364_.v364;
        *((_QWORD*)&v225 + 1) = *(unsigned int*)(v222 + 40);
        *(_OWORD*)v364_.v364 = v225;
        LODWORD(v225) = *(_DWORD*)(v222 + 48);
        v364_.v364[20] = 1;
        *(_DWORD*)&v364_.v364[16] = v225;
        LocatorDispos_db2180(
            (void*)(v383_.v383),
            (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL),
            (unsigned __int8*)(v222 + 56));
        GameRoutine_ff57a0((void*)((unsigned __int8**)&v377_.v377),
                           (__int64)&v359, (unsigned __int8*)v383_.v383);
        v375_.v375 = (__int64*)(v222 + 56);
        *((_BYTE*)v377_.v377 + 816) = 1;
        v226 = GameHr_ff7280((__int64**)(v358 + 48),
                             (unsigned __int8*)(v222 + 56), &v375_.v375);
        v227 = (_QWORD*)v226[8];
        v228 = v226;
        if ((unsigned __int64)v227 >= v226[9]) {
          v232 = GameHr_ff69e0(v226 + 7, &v377_.v377);
        }
        else {
          *v227 = v377_.v377;
          v229 = v377_.v378;
          v227[1] = v377_.v378;
          if (v229 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v229 + 8), 1u,
                                      memory_order_relaxed);
          }
          if ((v379_.v379 & 1) != 0) {
            fw_text_String_CopyTerminated(v227 + 2, (__int64)v379_.v381,
                                          v379_.v380);
          }
          else {
            v230 = v379_.v379;
            v231 = (__int64)v379_.v381;
            v227[3] = v379_.v380;
            v227[4] = v231;
            v227[2] = v230;
          }
          v232 = (__int64)(v227 + 6);
          v227[5] = v379_.v382;
        }
        v233 = v379_.v379;
        v228[8] = v232;
        if ((v233 & 1) != 0 && v379_.v381 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v234 = 128;
          }
          else {
            v234 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v234,
                                             (__int64)v379_.v381);
        }
        v235 = v377_.v378;
        if (v377_.v378 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v377_.v378 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v235 + 16LL))(v235);
          std___1___shared_weak_count___release_weak_alt2(v235);
          if ((v383_.v383[0] & 1) != 0) {
            goto LABEL_396;
          }
        }
        else if ((v383_.v383[0] & 1) != 0) {
        LABEL_396:
          if (v383_.v384 != nullptr) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v236 = 128;
            }
            else {
              v236 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v236,
                                               (__int64)v383_.v384);
          }
        }
        if ((v362 & 1) != 0 && v363 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v237 = 128;
          }
          else {
            v237 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v237,
                                             v363);
        }
        if ((v359 & 1) != 0 && v360_.v361 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v238 = 128;
          }
          else {
            v238 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(fw_memory_g_heap_manager + v238,
                                             (__int64)v360_.v361);
        }
        v222 += 96;
        if (v222 == v223) {
          break;
        }
        continue;
      }
    }
  }
  v239 = v358;
  if ((*(_BYTE*)(v358 + 76) & 1) == 0 && CharacterSituation_f94550()) {
    v240 = *(_QWORD**)(v358 + 48);
    if (v240 != (_QWORD*)(v358 + 56)) {
      v357 = (atomic_ullong*)(v358 + 32);
      while (1) {
        v241 = (__int64*)v240[7];
        v356 = v240[8];
        if (v241 != (__int64*)v356) {
          break;
        }
      LABEL_592:
        v330 = (_QWORD*)v240[1];
        if (v330 != nullptr) {
          do {
            v331 = v330;
            v330 = (_QWORD*)*v330;
          } while (v330 != nullptr);
        }
        else {
          do {
            v331 = (_QWORD*)v240[2];
            v24 = v240 == (_QWORD*)*v331;
            v240 = v331;
          } while (!v24);
        }
        v240 = v331;
        if (v331 == (_QWORD*)(v358 + 56)) {
          goto LABEL_598;
        }
      }
      while (2) {
        v243 = *v241;
        v244 = v241[1];
        if (v244 == 0) {
          v246 = v241 + 5;
          v247 = v241[5];
          if (*(_BYTE*)(v239 + 77) != 0) {
            goto LABEL_428;
          }
          goto LABEL_467;
        }
        v245 = 1;
        v246 = v241 + 5;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v244 + 8), 1u,
                                  memory_order_relaxed);
        if (*(_BYTE*)(v239 + 77) == 0) {
          goto LABEL_463;
        }
        v247 = *v246;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v244 + 8), 1u,
                                  memory_order_relaxed);
      LABEL_428:
        if (v243 != 0 && (*(_BYTE*)(v243 + 819) & 1) != 0) {
          v248 = true;
          if (v244 == 0) {
          LABEL_434:
            if (v248) {
              goto LABEL_435;
            }
          LABEL_438:
            v249 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v249 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            if (v249 == v247 ||
                !GameRoutine_f97e30(*(_QWORD*)GameData_212dc58[0], v247,
                                    true)) {
            LABEL_459:
              v245 = 0;
              v239 = v358;
              if (v244 != 0) {
                goto LABEL_463;
              }
            }
            else {
              v250 = *(atomic_ullong**)(v239 + 24);
              if (v250 == v357) {
                v245 = 1;
              }
              else {
                do {
                  v251 = *((_QWORD*)v250 + 7);
                  v252 = *((_QWORD*)v250 + 8);
                  while (v251 != v252) {
                    v253 = *(_QWORD**)(v251 + 40);
                    if (v253 != nullptr) {
                      v254 = (const char*)v253[5];
                      if (v254 != nullptr) {
                        v255 = *(const char**)(v247 + 40);
                        if (v255 != nullptr && strcmp_alt1(v254, v255) == 0) {
                          goto LABEL_459;
                        }
                      }
                      if (*v253 == *(_QWORD*)v247) {
                        goto LABEL_459;
                      }
                    }
                    v251 += 48;
                  }
                  v256 = *((atomic_ullong**)v250 + 1);
                  if (v256 != nullptr) {
                    do {
                      v257 = v256;
                      v256 = *(atomic_ullong**)v256;
                    } while (v256 != nullptr);
                  }
                  else {
                    do {
                      v257 = *((atomic_ullong**)v250 + 2);
                      v24 = v250 == *(atomic_ullong**)v257;
                      v250 = v257;
                    } while (!v24);
                  }
                  v245 = 1;
                  v250 = v257;
                } while (v257 != v357);
              }
              v239 = v358;
              if (v244 != 0) {
                goto LABEL_463;
              }
            }
          LABEL_464:
            if (v245 != 0) {
              goto LABEL_467;
            }
          LABEL_423:
            v241 += 6;
            if (v241 == (__int64*)v356) {
              goto LABEL_592;
            }
            continue;
          }
        }
        else {
          v248 = (*(_BYTE*)(v247 + 49) & 0x20) == 0;
          if (v244 == 0) {
            goto LABEL_434;
          }
        }
        break;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v244 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_434;
      }
      (*(void (**)(__int64))(*(_QWORD*)v244 + 16LL))(v244);
      std___1___shared_weak_count___release_weak_alt2(v244);
      if (!v248) {
        goto LABEL_438;
      }
    LABEL_435:
      v245 = 1;
      v239 = v358;
      if (v244 == 0) {
        goto LABEL_464;
      }
    LABEL_463:
      if (atomic_fetch_add((atomic_ullong* volatile)(v244 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_464;
      }
      (*(void (**)(__int64))(*(_QWORD*)v244 + 16LL))(v244);
      std___1___shared_weak_count___release_weak_alt2(v244);
      if ((v245 & 1) == 0) {
        goto LABEL_423;
      }
    LABEL_467:
      v258 = (__int64**)(v358 + 32);
      v259 = *(__int64**)v357;
      v260 = (__int64**)(v358 + 32);
      if (*(_QWORD*)v357 == 0) {
      LABEL_494:
        v274 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
        v275 = v274;
        if ((v240[4] & 1) != 0) {
          fw_text_String_CopyTerminated(v274 + 4, v240[6], v240[5]);
        }
        else {
          v276 = v240[4];
          v277 = v240[6];
          v274[5] = v240[5];
          v274[6] = v277;
          v274[4] = v276;
        }
        v275[8] = 0;
        v275[9] = 0;
        v275[7] = 0;
        v278 = v275;
        *v275 = 0;
        v275[1] = 0;
        v275[2] = (__int64)v258;
        *v260 = v275;
        v279 = **(_QWORD**)(v358 + 24);
        if (v279 != 0) {
          *(_QWORD*)(v358 + 24) = v279;
          v278 = *v260;
        }
        v280 = *(_QWORD*)v357;
        v24 = v278 == *(__int64**)v357;
        *((_BYTE*)v278 + 24) = v24;
        if (!v24) {
          do {
            v281 = v278[2];
            if ((*(_BYTE*)(v281 + 24) & 1) != 0) {
              break;
            }
            v282 = *(_QWORD*)(v281 + 16);
            v283 = *(__int64**)v282;
            if (v281 == *(_QWORD*)v282) {
              v283 = *(__int64**)(v282 + 8);
              if (v283 == nullptr || (v283[3] & 1) != 0) {
                if (v278 == *(__int64**)v281) {
                  v284 = v278[2];
                }
                else {
                  v284 = *(_QWORD*)(v281 + 8);
                  v285 = *(_QWORD*)v284;
                  *(_QWORD*)(v281 + 8) = *(_QWORD*)v284;
                  if (v285 != 0) {
                    *(_QWORD*)(v285 + 16) = v281;
                    v282 = *(_QWORD*)(v281 + 16);
                  }
                  *(_QWORD*)(v284 + 16) = v282;
                  if (v281 == *(_QWORD*)v282) {
                    *(_QWORD*)v282 = v284;
                  }
                  else {
                    *(_QWORD*)(v282 + 8) = v284;
                  }
                  *(_QWORD*)v284 = v281;
                  *(_QWORD*)(v281 + 16) = v284;
                  v282 = *(_QWORD*)(v284 + 16);
                }
                *(_BYTE*)(v284 + 24) = 1;
                *(_BYTE*)(v282 + 24) = 0;
                v288 = *(__int64**)v282;
                v289 = *(_QWORD*)(*(_QWORD*)v282 + 8LL);
                *(_QWORD*)v282 = v289;
                if (v289 != 0) {
                  *(_QWORD*)(v289 + 16) = v282;
                }
                v290 = *(__int64***)(v282 + 16);
                v288[2] = (__int64)v290;
                if ((__int64*)v282 == *v290) {
                  *v290 = v288;
                }
                else {
                  v290[1] = v288;
                }
                v288[1] = v282;
                goto LABEL_539;
              }
            }
            else if (v283 == nullptr || (v283[3] & 1) != 0) {
              v286 = *(__int64**)v281;
              if (v278 == *(__int64**)v281) {
                v287 = v286[1];
                *(_QWORD*)v281 = v287;
                if (v287 != 0) {
                  *(_QWORD*)(v287 + 16) = v281;
                  v282 = *(_QWORD*)(v281 + 16);
                }
                v286[2] = v282;
                if (v281 == *(_QWORD*)v282) {
                  *(_QWORD*)v282 = v286;
                }
                else {
                  *(_QWORD*)(v282 + 8) = v286;
                }
                v286[1] = v281;
                *(_QWORD*)(v281 + 16) = v286;
                v282 = v286[2];
              }
              else {
                v286 = (__int64*)v278[2];
              }
              *((_BYTE*)v286 + 24) = 1;
              *(_BYTE*)(v282 + 24) = 0;
              v288 = *(__int64**)(v282 + 8);
              v291 = *v288;
              *(_QWORD*)(v282 + 8) = *v288;
              if (v291 != 0) {
                *(_QWORD*)(v291 + 16) = v282;
              }
              v292 = *(__int64***)(v282 + 16);
              v288[2] = (__int64)v292;
              if ((__int64*)v282 == *v292) {
                *v292 = v288;
              }
              else {
                v292[1] = v288;
              }
              *v288 = v282;
            LABEL_539:
              *(_QWORD*)(v282 + 16) = v288;
              break;
            }
            *(_BYTE*)(v281 + 24) = 1;
            v278 = (__int64*)v282;
            *(_BYTE*)(v282 + 24) = v282 == v280;
            *((_BYTE*)v283 + 24) = 1;
          } while (v282 != v280);
        }
        ++*(_QWORD*)(v358 + 40);
      LABEL_541:
        v293 = v275[9];
        v294 = (__int64*)v275[8];
        if ((unsigned __int64)v294 >= v293) {
          v298 = v275[7];
          v299 = (__int64)v294 - v298;
          v300 = 1 - 0x5555555555555555LL * (v299 >> 4);
          if (v300 > 0x555555555555555LL) {
            GameRoutine_d5f350();
          }
          *((_QWORD*)&v362 + 1) = v275 + 9;
          v301 = fw_memory_g_heap_manager_ptr;
          v302 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v293 - v298) >> 4);
          if (2 * v302 > v300) {
            v300 = 2 * v302;
          }
          if (v302 >= 0x2AAAAAAAAAAAAAALL) {
            v303 = 0x555555555555555LL;
          }
          else {
            v303 = v300;
          }
          if (v303 != 0) {
            if (v303 > 0x555555555555555LL) {
              goto LABEL_608;
            }
            v304 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v303, 16, 0);
          }
          else {
            v304 = 0;
          }
          v306 = (__int64*)(v304 + v299);
          v359 = v304;
          v360_.v360 = v306;
          *(_QWORD*)&v362 = v304 + 48 * v303;
          *v306 = *v241;
          v307 = v241[1];
          v306[1] = v307;
          if (v307 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v307 + 8), 1u,
                                      memory_order_relaxed);
          }
          if ((v241[2] & 1) != 0) {
            fw_text_String_CopyTerminated(v306 + 2, v241[4], v241[3]);
          }
          else {
            v308 = v241[2];
            v309 = v241[4];
            v306[3] = v241[3];
            v306[4] = v309;
            v306[2] = v308;
          }
          v306[5] = v241[5];
          v360_.v361 = v306 + 6;
          GameHr_ff6c00(v275 + 7, &v359);
          v305 = (_QWORD*)v275[8];
          v310 = (char*)v360_.v360;
          while (1) {
            v311 = (__int64)v360_.v361;
            if (v310 == (char*)v360_.v361) {
              break;
            }
            v360_.v361 -= 6;
            if ((*(_BYTE*)(v311 - 32) & 1) != 0) {
              v312 = *(_QWORD*)(v311 - 16);
              if (v312 != 0) {
                v313 = 56;
                if (*(_QWORD*)(*(_QWORD*)v301 + 200LL) != 0) {
                  v313 = 128;
                }
                nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v301 + v313, v312);
              }
            }
            v314 = *(_QWORD*)(v311 - 40);
            if (v314 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v314 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v314 + 16LL))(v314);
              std___1___shared_weak_count___release_weak_alt2(v314);
            }
          }
          if (v359 != 0) {
            v315 = 56;
            if (*(_QWORD*)(*(_QWORD*)v301 + 200LL) != 0) {
              v315 = 128;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v301 + v315, v359);
          }
        }
        else {
          *v294 = *v241;
          v295 = v241[1];
          v294[1] = v295;
          if (v295 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v295 + 8), 1u,
                                      memory_order_relaxed);
          }
          if ((v241[2] & 1) != 0) {
            fw_text_String_CopyTerminated(v294 + 2, v241[4], v241[3]);
          }
          else {
            v296 = v241[2];
            v297 = v241[4];
            v294[3] = v241[3];
            v294[4] = v297;
            v294[2] = v296;
          }
          v305 = v294 + 6;
          v294[5] = *v246;
        }
        v275[8] = (__int64)v305;
        v239 = v358;
        v316 = *(_QWORD*)(*v241 + 56);
        v318 = *(_QWORD**)(v358 + 136);
        v317 = *(_QWORD*)(v358 + 144);
        if ((unsigned __int64)v318 < v317) {
          *v318 = v316;
          v242 = (__int64)(v318 + 1);
        }
        else {
          v319 = *(_QWORD*)(v358 + 128);
          v320 = (char*)v318 - v319;
          v321 = ((__int64)v318 - v319) >> 3;
          v322 = v321 + 1;
          if ((unsigned __int64)(v321 + 1) >> 61 != 0) {
            goto LABEL_609;
          }
          v323 = v317 - v319;
          if (v323 >> 2 > v322) {
            v322 = v323 >> 2;
          }
          if ((unsigned __int64)v323 >= 0x7FFFFFFFFFFFFFF8LL) {
            v324 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v324 = v322;
          }
          if (v324 != 0) {
            if (v324 >> 61 != 0) {
              goto LABEL_608;
            }
            v325 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v324, 16, 0);
          }
          else {
            v325 = 0;
          }
          v326 = v325 + 8 * v324;
          v327 = (unsigned __int64)v318 - v319;
          v328 = (__int64)&v320[v325 + -8 * v321];
          *(_QWORD*)&v320[v325] = v316;
          v242 = (__int64)&v320[v325 + 8];
          memcpy_alt1(v328, v319, v327);
          *(_QWORD*)(v358 + 128) = v328;
          *(_QWORD*)(v358 + 136) = v242;
          v239 = v358;
          *(_QWORD*)(v358 + 144) = v326;
          if (v319 != 0) {
            v329 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v329 = 128;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v329, v319);
          }
        }
        *(_QWORD*)(v239 + 136) = v242;
        goto LABEL_423;
      }
      v261 = *((unsigned __int8*)v240 + 32);
      v262 = (v261 & 1) == 0;
      v263 = v261 >> 1;
      if (v262) {
        v264 = (__int64)v240 + 33;
      }
      else {
        v264 = v240[6];
      }
      if (v262) {
        v265 = v263;
      }
      else {
        v265 = v240[5];
      }
      while (1) {
        v258 = (__int64**)v259;
        v266 = *((unsigned __int8*)v259 + 32);
        v267 = (v266 & 1) == 0;
        v268 = v266 >> 1;
        if (v267) {
          v269 = v268;
        }
        else {
          v269 = (unsigned __int64)v258[5];
        }
        if (v267) {
          v270 = (__int64)v258 + 33;
        }
        else {
          v270 = (__int64)v258[6];
        }
        if (v269 >= v265) {
          v271 = v265;
        }
        else {
          v271 = v269;
        }
        v272 = memcmp_alt1(v264, v270, v271);
        if (v272 != 0) {
          if (v272 < 0) {
            goto LABEL_474;
          }
        }
        else if (v265 < v269) {
        LABEL_474:
          v259 = *v258;
          v260 = v258;
          if (*v258 == nullptr) {
            goto LABEL_494;
          }
          continue;
        }
        v273 = memcmp_alt1(v270, v264, v271);
        if (v273 != 0) {
          if ((v273 & 0x80000000) == 0) {
            goto LABEL_515;
          }
        }
        else if (v269 >= v265) {
        LABEL_515:
          v275 = (__int64*)v258;
          goto LABEL_541;
        }
        v259 = v258[1];
        if (v259 == nullptr) {
          v260 = v258 + 1;
          goto LABEL_494;
        }
      }
    }
  }
LABEL_598:
  v333 = *(_QWORD*)(v239 + 128);
  v332 = *(_QWORD*)(v239 + 136);
  *(_QWORD*)(v239 + 152) = 0;
  v334 = v332 - v333;
  if (v334 != 0) {
    v335 = v334 >> 3;
    v336 = (v334 >> 3) & 7;
    if (v335 >= 8) {
      v339 = (_QWORD*)(v333 + 32);
      v340 = 0;
      v338 = 0;
      v341 = -(__int64)(v335 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v340 -= 8;
        v342 = *(v339 - 4) + 3 * v338;
        *(_QWORD*)(v239 + 152) = v342 + 1;
        v343 = 3 * v342 + *(v339 - 3) + 4;
        *(_QWORD*)(v239 + 152) = v343;
        v344 = *(v339 - 2) + 3 * v343;
        *(_QWORD*)(v239 + 152) = v344 + 1;
        v345 = 3 * v344 + *(v339 - 1) + 4;
        *(_QWORD*)(v239 + 152) = v345;
        v346 = *v339 + 3 * v345;
        *(_QWORD*)(v239 + 152) = v346 + 1;
        v347 = 3 * v346 + v339[1] + 4;
        *(_QWORD*)(v239 + 152) = v347;
        v348 = v339[2] + 3 * v347;
        *(_QWORD*)(v239 + 152) = v348 + 1;
        v349 = v339[3];
        v339 += 8;
        v338 = 3 * v348 + v349 + 4;
        *(_QWORD*)(v239 + 152) = v338;
      } while (v341 != v340);
      v337 = -v340;
      if (v336 != 0) {
        goto LABEL_605;
      }
    }
    else {
      v337 = 0;
      v338 = 0;
      if (v336 == 0) {
        goto LABEL_607;
      }
    LABEL_605:
      v350 = (__int64*)(v333 + 8 * v337);
      do {
        v351 = *v350++;
        --v336;
        v338 = v351 + 3 * v338 + 1;
        *(_QWORD*)(v239 + 152) = v338;
      } while (v336 != 0);
    }
  }
LABEL_607:
  GameData_2232008 = 0;
}

__int64* game_ff5c20(__int64 a1, unsigned __int8* a2)
{
  __int64* v2;
  unsigned __int64 v3;
  bool v4;
  unsigned __int64 v5;
  unsigned __int8* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;

  v2 = *(__int64**)(a1 + 8);
  if (v2 == nullptr) {
  LABEL_27:
    String_60a250("map::at:  key not found");
  }
  v3 = *a2;
  v4 = (v3 & 1) == 0;
  v5 = v3 >> 1;
  if (v4) {
    v6 = a2 + 1;
  }
  else {
    v6 = *((unsigned __int8**)a2 + 2);
  }
  if (v4) {
    v7 = v5;
  }
  else {
    v7 = *((_QWORD*)a2 + 1);
  }
  while (1) {
    while (1) {
      v8 = *((unsigned __int8*)v2 + 32);
      v9 = (v8 & 1) == 0;
      v10 = v8 >> 1;
      v11 = v9 ? v10 : v2[5];
      v12 = v9 ? (__int64)v2 + 33 : v2[6];
      v13 = v11 >= v7 ? v7 : v11;
      v14 = memcmp(v6, v12, v13);
      if (v14 != 0) {
        break;
      }
      if (v7 >= v11) {
        goto LABEL_22;
      }
    LABEL_8:
      v2 = (__int64*)*v2;
      if (v2 == nullptr) {
        goto LABEL_27;
      }
    }
    if (v14 < 0) {
      goto LABEL_8;
    }
  LABEL_22:
    v15 = memcmp(v12, v6, v13);
    if (v15 != 0) {
      if ((v15 & 0x80000000) == 0) {
        return v2 + 7;
      }
      goto LABEL_26;
    }
    if (v11 >= v7) {
      return v2 + 7;
    }
  LABEL_26:
    v2 = (__int64*)v2[1];
    if (v2 == nullptr) {
      goto LABEL_27;
    }
  }
}

__attribute__((swiftcall)) void game_ff60c0(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v1;
  unsigned __int8* v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  int v26;
  char v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  char v59;
  __int64 v60;
  __int64 v61;
  unsigned __int8* v62;
  struct {
    __int64 v64;
    __int64* v65;
    __int64 v66;
    __int64* v67;
    __int64 v68;
    unsigned __int64 v69;
    __int64 v70;
  } v64_;
  struct {
    __int64 v71;
    unsigned __int64 v72;
    __int64 v73;
  } v71_;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v1 = *(_QWORD*)(GameData_21f3d10 + 216);
  v2 = *(unsigned __int8**)(v1 + 56);
  v62 = *(unsigned __int8**)(v1 + 64);
  if (v2 != v62) {
    v3 = 0;
    v4 = 0;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      BYTE4(v64_.v64) = 0;
      v64_.v65 = nullptr;
      v64_.v66 = 0;
      v64_.v67 = nullptr;
      v64_.v68 = 0;
      v64_.v69 = 0;
      v64_.v70 = 0;
      v71_.v71 = 0;
      v71_.v72 = 0;
      v71_.v73 = 0;
      LODWORD(v64_.v64) = *v2 == 1;
      v9 = (__int64*)(v2 + 56);
      v8 = v2[56];
      if ((v8 & 1) != 0) {
        v10 = *((_QWORD*)v2 + 8);
      }
      else {
        v10 = v8 >> 1;
      }
      if (v10 != 0) {
        v11 = (__int64*)fw_memory_HeapManager_Allocate_alt1(*v5, 24, 16, 0);
        v12 = v11;
        if ((*(_BYTE*)v9 & 1) != 0) {
          fw_text_String_CopyTerminated(v11, *((_QWORD*)v2 + 9),
                                        *((_QWORD*)v2 + 8));
          v16 = (__int64)v64_.v65;
          v15 = v64_.v66 - (_QWORD)v64_.v65;
        }
        else {
          v13 = *v9;
          v14 = *((_QWORD*)v2 + 9);
          v15 = 0;
          v16 = 0;
          v11[1] = *((_QWORD*)v2 + 8);
          v11[2] = v14;
          *v11 = v13;
        }
        v17 = v12 + 3;
        v18 = (__int64)v12 - v15;
        memcpy_alt1(v18, v16, v15);
        v64_.v65 = (__int64*)v18;
        v64_.v66 = (__int64)v17;
        v64_.v67 = v17;
        if (v16 != 0) {
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v5 + v19, v16);
        }
        v64_.v66 = (__int64)v17;
      }
      v20 = v2 + 8;
      if (&v71_.v71 != (__int64*)(v2 + 8)) {
        v21 = *v20;
        if ((v71_.v71 & 1) != 0) {
          if ((v21 & 1) != 0) {
            v24 = *((_QWORD*)v2 + 3);
          }
          else {
            v24 = (__int64)(v2 + 9);
          }
          if ((v21 & 1) != 0) {
            v25 = *((_QWORD*)v2 + 2);
          }
          else {
            v25 = v21 >> 1;
          }
          SpineModel_64dde0(&v71_.v71, v24, v25);
        }
        else if ((v21 & 1) != 0) {
          GameRoutine_64df20(&v71_.v71, *((_QWORD*)v2 + 3), *((_QWORD*)v2 + 2));
        }
        else {
          v22 = *(_QWORD*)v20;
          v23 = *((_QWORD*)v2 + 3);
          v71_.v72 = *((_QWORD*)v2 + 2);
          v71_.v73 = v23;
          v71_.v71 = v22;
        }
      }
      HubInitNatives_ff5d00_alt1(&v64_.v64);
      if (v4 < v3) {
        break;
      }
      v34 = *a1;
      v35 = v4 - *a1;
      v36 = 1 - 0x3333333333333333LL * (v35 >> 4);
      if (v36 > 0x333333333333333LL) {
        a1[1] = v4;
        a1[2] = v3;
        GameRoutine_d5e820_alt1();
      }
      if (0x999999999999999ALL * ((__int64)(v3 - v34) >> 4) > v36) {
        v36 = 0x999999999999999ALL * ((__int64)(v3 - v34) >> 4);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3 - v34) >> 4) >=
          0x199999999999999LL) {
        v36 = 0x333333333333333LL;
      }
      if (v36 > 0x333333333333333LL) {
        a1[1] = v4;
        a1[2] = v3;
        GameRoutine_60a210_alt1();
      }
      v37 = 5 * v36;
      v38 = fw_memory_HeapManager_Allocate_alt1(*v5, 80 * v36, 16, 0);
      v39 = v38 + v35;
      v40 = v38;
      GameRoutine_d5e840(v39, (int*)&v64_.v64);
      if (v34 != v4) {
        v41 = v34;
        v42 = v40;
        do {
          v43 = *(_DWORD*)v41;
          v44 = *(_BYTE*)(v41 + 4);
          *(_QWORD*)(v42 + 8) = 0;
          *(_QWORD*)(v42 + 16) = 0;
          *(_QWORD*)(v42 + 24) = 0;
          *(_BYTE*)(v42 + 4) = v44;
          *(_DWORD*)v42 = v43;
          *(_QWORD*)(v42 + 8) = *(_QWORD*)(v41 + 8);
          *(_QWORD*)(v42 + 16) = *(_QWORD*)(v41 + 16);
          *(_QWORD*)(v42 + 24) = *(_QWORD*)(v41 + 24);
          *(_QWORD*)(v41 + 16) = 0;
          *(_QWORD*)(v41 + 24) = 0;
          *(_QWORD*)(v41 + 8) = 0;
          v45 = *(_QWORD*)(v41 + 32);
          v46 = *(_QWORD*)(v41 + 48);
          *(_QWORD*)(v42 + 40) = *(_QWORD*)(v41 + 40);
          *(_QWORD*)(v42 + 48) = v46;
          *(_QWORD*)(v42 + 32) = v45;
          *(_QWORD*)(v41 + 40) = 0;
          *(_QWORD*)(v41 + 48) = 0;
          *(_QWORD*)(v41 + 32) = 0;
          v47 = *(_QWORD*)(v41 + 56);
          v48 = *(_QWORD*)(v41 + 72);
          *(_QWORD*)(v42 + 64) = *(_QWORD*)(v41 + 64);
          *(_QWORD*)(v42 + 72) = v48;
          *(_QWORD*)(v42 + 56) = v47;
          *(_QWORD*)(v41 + 64) = 0;
          *(_QWORD*)(v41 + 72) = 0;
          *(_QWORD*)(v41 + 56) = 0;
          v41 += 80;
          v42 += 80;
        } while (v41 != v4);
        v49 = v34;
        do {
          GameRoutine_d5e6c0_alt1(v49);
          v49 += 80;
        } while (v49 != v4);
      }
      v3 = v40 + 16 * v37;
      v4 = v39 + 80;
      *a1 = v40;
      if (v34 != 0) {
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v50 = 128;
        }
        else {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v50, v34);
        if ((v71_.v71 & 1) != 0) {
          goto LABEL_69;
        }
      }
      else if ((v71_.v71 & 1) != 0) {
        goto LABEL_69;
      }
    LABEL_74:
      if ((v64_.v68 & 1) != 0 && v64_.v70 != 0) {
        if (*(_QWORD*)(*v5 + 200) != 0) {
          v56 = 128;
        }
        else {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*v5 + v56, v64_.v70);
      }
      v6 = (__int64)v64_.v65;
      if (v64_.v65 != nullptr) {
        v57 = v64_.v66;
        if (v64_.v65 == (__int64*)v64_.v66) {
          goto LABEL_4;
        }
        v58 = v64_.v66;
        do {
          v59 = *(_BYTE*)(v58 - 24);
          v58 -= 24;
          if ((v59 & 1) != 0) {
            v60 = *(_QWORD*)(v57 - 8);
            if (v60 != 0) {
              if (*(_QWORD*)(*v5 + 200) != 0) {
                v61 = 128;
              }
              else {
                v61 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*v5 + v61, v60);
            }
          }
          v57 = v58;
        } while (v58 != v6);
        v64_.v66 = v6;
        v6 = (__int64)v64_.v65;
        if (v64_.v65 != nullptr) {
        LABEL_4:
          if (*(_QWORD*)(*v5 + 200) != 0) {
            v7 = 128;
          }
          else {
            v7 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(*v5 + v7, v6);
        }
      }
      v2 += 144;
      if (v2 == v62) {
        a1[1] = v4;
        a1[2] = v3;
        return;
      }
    }
    v26 = v64_.v64;
    v27 = BYTE4(v64_.v64);
    *(_QWORD*)(v4 + 8) = 0;
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = 0;
    *(_BYTE*)(v4 + 4) = v27;
    *(_DWORD*)v4 = v26;
    v28 = v64_.v65;
    v29 = (__int64*)v64_.v66;
    v30 = v64_.v66 - (_QWORD)v64_.v65;
    if ((__int64*)v64_.v66 != v64_.v65) {
      if (0xAAAAAAAAAAAAAAABLL * (v30 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        a1[1] = v4;
        a1[2] = v3;
        GameRoutine_64aa00_alt1();
      }
      v31 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
          *v5, v64_.v66 - (_QWORD)v64_.v65, 16, 0);
      *(_QWORD*)(v4 + 8) = v31;
      *(_QWORD*)(v4 + 16) = v31;
      *(_QWORD*)(v4 + 24) = (char*)v31 + v30;
      do {
        if ((*(_BYTE*)v28 & 1) != 0) {
          fw_text_String_CopyTerminated(v31, v28[2], v28[1]);
        }
        else {
          v32 = *v28;
          v33 = v28[2];
          v31[1] = v28[1];
          v31[2] = v33;
          *v31 = v32;
        }
        v28 += 3;
        v31 += 3;
      } while (v28 != v29);
      *(_QWORD*)(v4 + 16) = v31;
    }
    if ((v64_.v68 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)(v4 + 32), v64_.v70, v64_.v69);
    }
    else {
      v51 = v64_.v68;
      v52 = v64_.v70;
      *(_QWORD*)(v4 + 40) = v64_.v69;
      *(_QWORD*)(v4 + 48) = v52;
      *(_QWORD*)(v4 + 32) = v51;
    }
    if ((v71_.v71 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)(v4 + 56), v71_.v73, v71_.v72);
    }
    else {
      v53 = v71_.v71;
      v54 = v71_.v73;
      *(_QWORD*)(v4 + 64) = v71_.v72;
      *(_QWORD*)(v4 + 72) = v54;
      *(_QWORD*)(v4 + 56) = v53;
    }
    v4 += 80LL;
    if ((v71_.v71 & 1) == 0) {
      goto LABEL_74;
    }
  LABEL_69:
    if (v71_.v73 != 0) {
      if (*(_QWORD*)(*v5 + 200) != 0) {
        v55 = 128;
      }
      else {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v5 + v55, v71_.v73);
    }
    goto LABEL_74;
  }
}

__attribute__((swiftcall)) void game_ff6680(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  __int64 v5;
  __int64* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  char* v17;
  char** v18;
  __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v22;
  char* v23;
  char* v24;
  char** v25;
  __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  struct {
    _QWORD* v32;
    _QWORD* v33;
    __int64 v34;
  } v32_;
  char* v35;
  char* v36;

  v5 = *(_QWORD*)(a1 + 128);
  v4 = *(_QWORD*)(a1 + 136);
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  v8 = v4 - v5;
  if (v4 == v5) {
    v9 = 0;
    v10 = 0;
  }
  else {
    if ((v8 & 0x8000000000000000LL) != 0) {
      goto LABEL_52;
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v4 - v5, 16, 0);
    v10 = v9 + v8;
    memcpy_alt1(v9, v5, v8);
  }
  v12 = *(_QWORD*)(a2 + 128);
  v11 = *(_QWORD*)(a2 + 136);
  v13 = v11 - v12;
  if (v11 != v12) {
    if ((v13 & 0x8000000000000000LL) == 0) {
      v14 = fw_memory_HeapManager_Allocate_alt1(*v7, v11 - v12, 16, 0);
      v15 = v14 + v13;
      memcpy_alt1(v14, v12, v13);
      goto LABEL_9;
    }
  LABEL_52:
    GameRoutine_65c760_alt1();
  }
  v14 = 0;
  v15 = 0;
LABEL_9:
  GameRoutine_1a0a750_alt1(v9, v10, (__int64)&v32_.v32);
  GameRoutine_1a0a750_alt1(v14, v15, (__int64)&v32_.v32);
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v32_.v33 = nullptr;
  v32_.v34 = 0;
  v32_.v32 = nullptr;
  v36 = (char*)v9;
  v35 = (char*)v14;
  if (v9 != v10) {
    v16 = nullptr;
    v17 = (char*)v9;
    while (v35 != (char*)v15) {
      if (*(_QWORD*)v17 < *(_QWORD*)v35) {
        v16 = GameHr_ff6d70((__int64*)&v32_.v32, (__int64)v16, v17) + 8;
        v18 = &v36;
      }
      else {
        if (*(_QWORD*)v35 >= *(_QWORD*)v17) {
          v36 = v17 + 8;
        }
        v18 = &v35;
        v17 = v35;
      }
      *v18 = v17 + 8;
      v17 = v36;
      if (v36 == (char*)v10) {
        goto LABEL_19;
      }
    }
    do {
      v16 = GameHr_ff6d70((__int64*)&v32_.v32, (__int64)v16, v17) + 8;
      v17 += 8;
    } while (v17 != (char*)v10);
  }
LABEL_19:
  v19 = (__int64)v32_.v32;
  v20 = v32_.v33;
  if (v32_.v32 != v32_.v33) {
    v21 = v32_.v32;
    do {
      GameRoutine_7f3400_alt1(a3, v21++);
    } while (v21 != v20);
  }
  if (v19 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v7 + v22, v19);
  }
  v32_.v33 = nullptr;
  v32_.v34 = 0;
  v32_.v32 = nullptr;
  v36 = (char*)v14;
  v35 = (char*)v9;
  if (v14 != v15) {
    v23 = nullptr;
    v24 = (char*)v14;
    while (v35 != (char*)v10) {
      if (*(_QWORD*)v24 < *(_QWORD*)v35) {
        v23 = GameHr_ff6d70((__int64*)&v32_.v32, (__int64)v23, v24) + 8;
        v25 = &v36;
      }
      else {
        if (*(_QWORD*)v35 >= *(_QWORD*)v24) {
          v36 = v24 + 8;
        }
        v25 = &v35;
        v24 = v35;
      }
      *v25 = v24 + 8;
      v24 = v36;
      if (v36 == (char*)v15) {
        goto LABEL_36;
      }
    }
    do {
      v23 = GameHr_ff6d70((__int64*)&v32_.v32, (__int64)v23, v24) + 8;
      v24 += 8;
    } while (v24 != (char*)v15);
  }
LABEL_36:
  v26 = (__int64)v32_.v32;
  v27 = v32_.v33;
  if (v32_.v32 != v32_.v33) {
    v28 = v32_.v32;
    do {
      GameRoutine_7f3400_alt1(a3, v28++);
    } while (v28 != v27);
  }
  if (v26 != 0) {
    v29 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v7 + v29, v26);
  }
  if (v14 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v7 + v30, v14);
  }
  if (v9 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*v7 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v7 + v31, v9);
  }
}

void game_ff7720(unsigned __int8** a1, __int64* a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  unsigned __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  bool v11;
  unsigned __int8* v12;
  __int64 v13;
  unsigned __int8* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int8* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int8* v21;
  char v22;
  __int64 v23;
  __int64 v24;

  v2 = *a1;
  v3 = a1[1];
  if (*a1 != v3) {
    v6 = *a2;
    v5 = a2[1];
    while (1) {
      v7 = *v2;
      v8 = *((_QWORD*)v2 + 1);
      if ((v7 & 1) == 0) {
        v8 = v7 >> 1;
      }
      if (v5 == v8) {
        v9 = (v7 & 1) != 0 ? *((_QWORD*)v2 + 2) : (__int64)(v2 + 1);
        if (memcmp_alt1(v6, v9, v5) == 0) {
          break;
        }
      }
      v2 += 32;
      if (v2 == v3) {
        return;
      }
    }
  }
  if (v2 != v3) {
    v10 = *((_DWORD*)v2 + 6);
    v11 = __OFSUB__(v10--, 1);
    *((_DWORD*)v2 + 6) = v10;
    if ((v10 < 0) ^ v11 | (v10 == 0)) {
      v12 = a1[1];
      v13 = fw_memory_g_heap_manager_ptr;
      if (v2 + 32 != v12) {
        do {
          if ((*v2 & 1) != 0) {
            v19 = *((_QWORD*)v2 + 2);
            if (v19 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
                v20 = 128;
              }
              else {
                v20 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v20, v19);
            }
          }
          v14 = v2 + 32;
          v15 = *((_QWORD*)v2 + 4);
          v16 = *((_QWORD*)v2 + 5);
          v17 = *((_QWORD*)v2 + 6);
          *((_WORD*)v2 + 16) = 0;
          *(_QWORD*)v2 = v15;
          *((_QWORD*)v2 + 1) = v16;
          LODWORD(v15) = *((_DWORD*)v2 + 14);
          *((_QWORD*)v2 + 2) = v17;
          *((_DWORD*)v2 + 6) = v15;
          v18 = v2 + 64;
          v2 += 32;
        } while (v18 != v12);
        v12 = a1[1];
        v2 = v14;
      }
      if (v2 != v12) {
        v21 = v12;
        do {
          v22 = *(v21 - 32);
          v21 -= 32;
          if ((v22 & 1) != 0) {
            v23 = *((_QWORD*)v12 - 2);
            if (v23 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
                v24 = 128;
              }
              else {
                v24 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v13 + v24, v23);
            }
          }
          v12 = v21;
        } while (v21 != v2);
      }
      a1[1] = v2;
    }
  }
}

bool game_ffbf60(const char* a1)
{
  __int64 v2;
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int8* v8;
  __int64 v9;
  char* v10;
  signed __int64 v11;
  signed __int64 v12;
  char* v13;
  signed __int64 v14;
  char* v15;
  _BOOL4 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    char* v25;
  } v23_;

  if (a1 != nullptr && *a1 != 0) {
    v2 = 0;
    while (1) {
      v4 = strlen_alt1(a1);
      if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v5 = v4;
      if (v4 >= 0x17) {
        break;
      }
      v6 = (char*)&v23_.v23 + 1;
      LOBYTE(v23_.v23) = 2 * v4;
      if (v4 != 0) {
        goto LABEL_16;
      }
    LABEL_17:
      v6[v5] = 0;
      v8 = *(unsigned __int8**)((char*)&GameData_1fffd08 + v2);
      v9 = (__int64)v23_.v25;
      if ((v23_.v23 & 1) != 0) {
        v10 = v23_.v25;
      }
      else {
        v10 = (char*)&v23_.v23 + 1;
      }
      if ((v23_.v23 & 1) != 0) {
        v11 = v23_.v24;
      }
      else {
        v11 = (unsigned __int64)(unsigned __int8)v23_.v23 >> 1;
      }
      v12 = strlen_alt1(*(const char**)((char*)&GameData_1fffd08 + v2));
      if (v12 != 0) {
        v13 = &v10[v11];
        v14 = v12;
        if (v11 >= v12) {
          v17 = *v8;
          v18 = (__int64)v10;
          do {
            v19 = memchr_alt1(v18, v17, v11 - v14 + 1);
            if (v19 == 0) {
              break;
            }
            v15 = (char*)v19;
            if (memcmp_alt1(v19, (__int64)v8, v14) == 0) {
              goto LABEL_33;
            }
            v18 = (__int64)(v15 + 1);
            v11 = v13 - (v15 + 1);
          } while (v11 >= v14);
          v15 = v13;
        }
        else {
          v15 = &v10[v11];
        }
      LABEL_33:
        v16 = v15 != v13 && v15 - v10 != -1;
        if ((v23_.v23 & 1) == 0) {
          goto LABEL_4;
        }
      LABEL_40:
        if (v9 != 0) {
          v21 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v9);
        }
        goto LABEL_4;
      }
      v16 = true;
      if ((v23_.v23 & 1) != 0) {
        goto LABEL_40;
      }
    LABEL_4:
      v2 += 8;
      v3 = v2 == 16 || v16;
      if (v3 == 1) {
        return v16;
      }
    }
    if ((v4 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (v4 | 7) + 1;
    }
    v6 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v7, 16, 0);
    v23_.v24 = v5;
    v23_.v25 = v6;
    v23_.v23 = v7 | 1;
  LABEL_16:
    memcpy_alt1((__int64)v6, (__int64)a1, v5);
    goto LABEL_17;
  }
  return false;
}

__attribute__((swiftcall)) void game_ffd4e0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  int v5;
  char* result;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  unsigned __int64 v12;
  bool v13;

  *(_QWORD*)(a2 + 8) = 0;
  v2 = a2 + 8;
  *(_DWORD*)a2 = 0;
  *(_BYTE*)(a2 + 4) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  GameRoutine_60a020_alt1(a2 + 8, a1);
  if (strstr(a1, &GameData_1aa19d7) != 0) {
    v5 = 1;
  }
  else if (strstr(a1, &GameData_1afde01) != 0) {
    v5 = 4;
  }
  else if (strstr(a1, &GameData_1a8e354) != 0) {
    v5 = 3;
  }
  else if (strstr(a1, &GameData_1acbe0f) != 0) {
    v5 = 5;
  }
  else if (strstr(a1, &GameData_1a8a4bd) != 0) {
    v5 = 6;
  }
  else if (strstr(a1, &GameData_1a99bad) != 0) {
    v5 = 7;
  }
  else {
    if (strstr(a1, &GameData_1ac7eee) == 0) {
      goto LABEL_16;
    }
    v5 = 2;
  }
  *(_DWORD*)a2 = v5;
LABEL_16:
  result = (char*)strstr(a1, &GameData_1adf105);
  if (result != nullptr) {
    v7 = *(unsigned __int8*)(a2 + 8);
    v8 = *(_QWORD*)(a2 + 16);
    if ((v7 & 1) == 0) {
      v8 = v7 >> 1;
    }
    if (v8 >= 7) {
      if ((v7 & 1) != 0) {
        v9 = *(_QWORD*)(a2 + 24);
      }
      else {
        v9 = a2 + 9;
      }
      v10 = (char*)(v9 + v8);
    LABEL_26:
      result = (char*)v9;
      do {
        result = (char*)memchr(result, 95, v8 - 6);
        if (result == nullptr) {
          break;
        }
        if (*(_DWORD*)result == -1399003553 &&
            *(_DWORD*)(result + 3) == -1079056724) {
          if (result != v10 && &result[-v9] != (char*)-1LL) {
            result = (char*)GameRoutine_1a0a8e0(v2, &result[-v9], 7,
                                                &GameData_1a9f09e, 0);
            v12 = *(unsigned __int8*)(a2 + 8);
            v13 = (v12 & 1) == 0;
            v8 = v12 >> 1;
            v9 = v13 ? a2 + 9 : *(_QWORD*)(a2 + 24);
            if (!v13) {
              v8 = *(_QWORD*)(a2 + 16);
            }
            v10 = (char*)(v9 + v8);
            if (v8 > 6) {
              goto LABEL_26;
            }
          }
          break;
        }
        ++result;
        v8 = v10 - result;
      } while (v10 - result >= 7);
    }
    *(_BYTE*)(a2 + 4) = 1;
  }
  {
    result;
    return;
  }
}

__int64 game_10001c0()
{
  unsigned int v0;
  long double v1;
  __int64 v2;
  __int64 v3;
  int v4;
  __int64** v5;
  __int64** v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  unsigned int v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __n128 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  bool v29;
  char v30;
  __int64 v31;
  __int64* v33;
  __int64* v34;
  __int64 v35;
  char v36[4];

  v34 = nullptr;
  v35 = 0;
  v33 = nullptr;
  v0 = (unsigned int)game_gmap_GmapSituation_CalcBanquet() >> 6;
  v2 = *(_QWORD*)(*(_QWORD*)GameData_212c7a0[0] + 16LL);
  v3 = *(_QWORD*)(GameData_21c96e8 + 8);
  v4 = *(_DWORD*)(v3 + 56);
  v5 = *(__int64***)(v3 + 8);
  v6 = *(__int64***)(v3 + 16);
  if (v4 < 0) {
    for (; v5 != v6; ++v5) {
      v7 = *v5;
      if ((*v5)[12] == 0 && v7[69] == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v9 = game_gmap_SpotMgr_GetCurrentSpot(v1);
    goto LABEL_12;
  }
  if (v5 == v6) {
    goto LABEL_7;
  }
  while (1) {
    v8 = *v5++;
    v7 = v8;
    if (*((_DWORD*)v8 + 21) == v4) {
      break;
    }
    if (v5 == v6) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v9 = *v7;
LABEL_12:
  v10 = v0 & 2;
  BanquetManager_96a680(v2 + 16, v9, &v33);
  v11 = v33;
  v12 = v34;
  if (v33 == v34) {
    v10 |= 4u;
    if (v33 == nullptr) {
      goto LABEL_22;
    }
  }
  else {
    while (1) {
      v14 = *v11++;
      v13 = v14;
      if ((game_UnitItemList_HasStockUses(v14 + 828) & 1) != 0) {
        break;
      }
      v15 = *(__int16*)(v13 + 492);
      v36[0] = 0;
      if ((int)game_Unit_GetParam(v13, v36, 1) > v15) {
        break;
      }
      if (v11 == v12) {
        v11 = v33;
        v10 |= 4u;
        if (v33 != nullptr) {
          goto LABEL_19;
        }
        goto LABEL_22;
      }
    }
    v11 = v33;
    if (v33 == nullptr) {
      goto LABEL_22;
    }
  }
LABEL_19:
  v34 = v11;
  v16 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v16 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     v16, (_QWORD)(v11));
LABEL_22:
  if (GameData_21f3d10 != 0 && *(_QWORD*)(GameData_21f3d10 + 200) != 0) {
    DungeonController_f5f960((void*)((__int64*)&v33));
    v17 = (__int64)v33;
    v18 = v34;
    if (v33 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, (_QWORD)(v33));
    }
    if (v18 != (__int64*)v17) {
      v10 |= 8u;
    }
  }
  if (GameData_21f3c98 != 0) {
    v20 = *(_QWORD*)(GameData_21f3c98 + 96);
    v21 = *(_QWORD*)(v20 + 40);
    if (v21 != 0) {
      v22 = *(_QWORD*)(v20 + 32);
      v23 = *(_QWORD*)(v20 + 40);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                memory_order_relaxed);
      v24 = std___1___shared_weak_count_lock(v23);
      v25 = std___1___shared_weak_count___release_weak_alt1(v21);
      if (v24 != 0) {
        if (v22 != 0 && (v26 = *(_QWORD*)(v22 + 1744)) != 0) {
          v27 = *(_DWORD*)(v26 + 216);
          v28 = *(_QWORD*)(v26 + 736);
          if (v27 == 8) {
            v21 = v28;
          }
          else {
            v21 = 0;
          }
          v29 = v21 == 0;
        }
        else {
          v29 = true;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v24 + 16LL))(
              v24, *(long double*)&v25);
          v25 = std___1___shared_weak_count___release_weak_alt1(v24);
        }
        v30 = v21 == 0 || v29;
        if ((v30 & 1) == 0) {
          v31 = GameRoutine_dbc1e0(*(_QWORD*)GameData_212c6a0[0],
                                   *(_QWORD*)(*(_QWORD*)(v21 + 8) + 72LL),
                                   *(long double*)&v25);
          if (v31 != 0 && *(_DWORD*)(v31 + 12) != 0) {
            v10 |= 0x10u;
          }
        }
      }
    }
  }
  return v10;
}

_QWORD* game_10027c0(_QWORD* a1, char* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;

  v2 = a1[1];
  if (v2 != 0 && a1[3] != 0) {
    v4 = a2[1] + ((__int64)*a2 << 8);
    v5 = v2 - 1;
    if ((v2 & (v2 - 1)) != 0) {
      v6 = a2[1] + ((__int64)*a2 << 8);
      if (v2 <= v4) {
        v6 = v4 % v2;
      }
    }
    else {
      v6 = v5 & v4;
    }
    v7 = *(_QWORD**)(*a1 + 8 * v6);
    if (v7 != nullptr) {
      v8 = (_QWORD*)*v7;
      if (v8 != nullptr) {
        if ((v2 & v5) == 0) {
          while (1) {
            v10 = v8[1];
            if (v10 == v4) {
              if (v8[2] == v4) {
                goto LABEL_26;
              }
            }
            else if ((v10 & v5) != v6) {
              return nullptr;
            }
            v8 = (_QWORD*)*v8;
            if (v8 == nullptr) {
              return nullptr;
            }
          }
        }
        do {
          v9 = v8[1];
          if (v9 == v4) {
            if (v8[2] == v4) {
            LABEL_26:
              if ((v2 & v5) != 0) {
                v12 = a2[1] + ((__int64)*a2 << 8);
                if (v2 <= v4) {
                  v12 = v4 % v2;
                }
              }
              else {
                v12 = v5 & v4;
              }
              v13 = *(_QWORD**)(*a1 + 8 * v12);
              if (v13 == nullptr || (v14 = (_QWORD*)*v13) == nullptr) {
              LABEL_46:
                String_60a250("unordered_map::at: key not found");
              }
              if ((v2 & v5) == 0) {
                while (1) {
                  v16 = v14[1];
                  if (v16 == v4) {
                    if (v14[2] == v4) {
                      return v14 + 4;
                    }
                  }
                  else if ((v16 & v5) != v12) {
                    goto LABEL_46;
                  }
                  v14 = (_QWORD*)*v14;
                  if (v14 == nullptr) {
                    goto LABEL_46;
                  }
                }
              }
              while (1) {
                v15 = v14[1];
                if (v15 == v4) {
                  if (v14[2] == v4) {
                    return v14 + 4;
                  }
                }
                else {
                  if (v15 >= v2) {
                    v15 %= v2;
                  }
                  if (v15 != v12) {
                    goto LABEL_46;
                  }
                }
                v14 = (_QWORD*)*v14;
                if (v14 == nullptr) {
                  goto LABEL_46;
                }
              }
            }
          }
          else {
            if (v9 >= v2) {
              v9 %= v2;
            }
            if (v9 != v6) {
              return nullptr;
            }
          }
          v8 = (_QWORD*)*v8;
        } while (v8 != nullptr);
      }
    }
  }
  return nullptr;
}

void game_1007c80(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v24;
  __int64 v25;
  void* v26;
  _BYTE* v27;
  char v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  int v37;
  _QWORD* v38;
  const char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    _QWORD* v43;
    __int64 v44;
  } v43_;
  struct {
    _WORD v45[8];
    const char* v46;
  } v45_;

  v1 = *(_QWORD*)(a1 + 208);
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_23;
  }
  v4 = *(_QWORD*)(v1 + 288);
  if (v4 == 0 || (v5 = GameRoutine_975940_alt1(v4)) == 0 ||
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                 8LL *
                     *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                    game_TransporterConst_List_instance__ptr
                                                                        [0] +
                                                                8LL) +
                                                     8LL) +
                                          12LL * GameData_2167728 + 4)) == 0 ||
      (game_gmap_GmapClock_instance_ != 0
           ? (v6 = game_gmap_GmapClock_instance_ + 8)
           : (v6 = game_gmap_GmapClock_kDefaultTime_ptr),
       *(unsigned __int8*)(v5 + 66) != *(__int16*)(v6 + 2) ||
           *(unsigned __int8*)(v5 + 67) != *(__int16*)(v6 + 4))) {
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_23;
    }
    v9 = game_GameVariableTable_Find_alt1(
        *(_QWORD**)(game_GameModeData_instance_ + 48),
        (unsigned __int64*)(*(_QWORD*)(v1 + 24) + 992LL));
    if (v9 == 0) {
      goto LABEL_23;
    }
    if (*(_DWORD*)(v9 + 32) == 0) {
      goto LABEL_23;
    }
    v10 = *(_QWORD*)(v1 + 288);
    if (v10 == 0) {
      goto LABEL_23;
    }
    v11 = GameRoutine_975940_alt1(v10);
    if (v11 == 0) {
      goto LABEL_23;
    }
    v12 = *(
        _QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                 8LL *
                     *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                    game_TransporterConst_List_instance__ptr
                                                                        [0] +
                                                                8LL) +
                                                     8LL) +
                                          12LL * GameData_2167728 + 4));
    if (v12 == 0) {
      goto LABEL_22;
    }
    v13 = game_gmap_GmapClock_instance_ != 0
              ? game_gmap_GmapClock_instance_ + 8
              : game_gmap_GmapClock_kDefaultTime_ptr;
    if (*(unsigned __int8*)(v11 + 66) == *(__int16*)(v13 + 2) &&
        *(unsigned __int8*)(v11 + 67) == *(__int16*)(v13 + 4)) {
      goto LABEL_22;
    }
    v31 = *(unsigned __int16*)(v11 + 240);
    if (*(_WORD*)(v11 + 240) != 0) {
      v32 = (__int64*)(*(_QWORD*)(v11 + 248) + 8LL);
      do {
        v33 = *v32;
        v32 += 2;
        if (v33 == v12) {
          goto LABEL_81;
        }
      } while (--v31 != 0);
    }
    v34 = *(unsigned __int16*)(v11 + 256);
    if (*(_WORD*)(v11 + 256) != 0) {
      v35 = (__int64*)(*(_QWORD*)(v11 + 264) + 8LL);
      while (1) {
        v36 = *v35;
        v35 += 2;
        if (v36 == v12) {
          break;
        }
        if (--v34 == 0) {
          goto LABEL_80;
        }
      }
    }
    else {
    LABEL_80:
      v37 = GameHr_9750e0(v11, v12);
      if (v37 > 0) {
      LABEL_81:
        v38 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v3, 32, 16, 0);
        v39 = "MID_GiftReaction_Gratitude_MORE";
        v7 = (char*)v38;
      LABEL_84:
        v40 = *((_QWORD*)v39 + 1);
        *v38 = *(_QWORD*)v39;
        v38[1] = v40;
        v41 = *((_QWORD*)v39 + 2);
        v42 = *(_QWORD*)(v39 + 23);
        v38[2] = v41;
        *(_QWORD*)((char*)v38 + 23) = v42;
        v7[31] = 0;
      LABEL_24:
        v45_.v45[0] = 0;
        v43_.v43 = nullptr;
        v43_.v44 = v1;
        v8 = (char*)v45_.v45 + 1;
        if (v1 == 0) {
          goto LABEL_50;
        }
        goto LABEL_25;
      }
      if (v37 == 0) {
      LABEL_22:
        if (!GameRoutine_1008d20_alt1(*(_QWORD*)(a1 + 208))) {
        LABEL_23:
          v7 = (char*)fw_memory_HeapManager_Allocate_alt1(*v3, 40, 16, 0);
          strcpy(v7, "MID_GiftReaction_Gratitude_NORMAL");
          goto LABEL_24;
        }
        goto LABEL_81;
      }
    }
    v38 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v3, 32, 16, 0);
    v7 = (char*)v38;
    v39 = "MID_GiftReaction_Gratitude_LESS";
    goto LABEL_84;
  }
  v7 = (char*)fw_memory_HeapManager_Allocate_alt1(*v3, 40, 16, 0);
  v45_.v45[0] = 0;
  v43_.v44 = v1;
  strcpy(v7, "MID_GiftReaction_Gratitude_BIRTHDAY");
  v8 = (char*)v45_.v45 + 1;
LABEL_25:
  v14 = *(_QWORD**)(GameData_21ca310 + 56);
  if (v14 != nullptr) {
    v15 = 250;
    while (1) {
      v16 = v14[55];
      if (v16 != 0 && *(_BYTE*)(v16 + 16) != 9 && v14[49] == v1) {
        goto LABEL_49;
      }
      v17 = v14[333];
      if (v17 != 0 && *(_BYTE*)(v17 + 16) != 9 && v14[327] == v1) {
        v14 += 278;
        goto LABEL_49;
      }
      v18 = v14[611];
      if (v18 != 0 && *(_BYTE*)(v18 + 16) != 9 && v14[605] == v1) {
        break;
      }
      v19 = v14[889];
      if (v19 != 0 && *(_BYTE*)(v19 + 16) != 9 && v14[883] == v1) {
        v21 = 6672;
        goto LABEL_48;
      }
      v20 = v14[1167];
      if (v20 != 0 && *(_BYTE*)(v20 + 16) != 9 && v14[1161] == v1) {
        v21 = 8896;
      LABEL_48:
        v14 = (_QWORD*)((char*)v14 + v21);
        goto LABEL_49;
      }
      v14 += 1390;
      v15 -= 5;
      if (v15 == 0) {
        v14 = nullptr;
        goto LABEL_49;
      }
    }
    v21 = 4448;
    goto LABEL_48;
  }
LABEL_49:
  v43_.v43 = v14;
LABEL_50:
  game_97e570_alt1((__int64)v45_.v45, &v43_.v43, (__int64)v7, (__int64)"m01");
  v22 = v45_.v45[0] & 1;
  if ((v45_.v45[0] & 1) != 0) {
    v8 = v45_.v46;
  }
  if (*GameData_212d460[0] == 0 && v8 != nullptr) {
    v24 = fw_memory_HeapManager_Allocate_alt1(*v3, 1376, 16, 0);
    GameRoutine_1130770_alt1(v24, v8, nullptr);
    v25 = *(_QWORD*)(a1 + 40);
    if (v25 != 0) {
      *(_QWORD*)(v25 + 48) = v24;
      *(_QWORD*)(v24 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v24;
    *(_QWORD*)(v24 + 24) = "talk::Seq";
    *(_QWORD*)(v24 + 32) = a1;
    *(_DWORD*)(v24 + 140) = (unsigned int)game_HashString32_alt2("talk::Seq");
    *(_QWORD*)(v24 + 64) = 0;
    *(_QWORD*)(v24 + 72) = 24;
    *(_QWORD*)(v24 + 80) = 1;
    v26 = GameData_2130228;
    *(_QWORD*)(v24 + 8) = GameData_2130228;
    *(_QWORD*)(v24 + 16) = v26;
    (*(void (**)(__int64))(*(_QWORD*)v24 + 32LL))(v24);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v24 + 136LL))(v24) & 1) != 0 &&
        (*(_WORD*)(v24 + 136) & 0x100) == 0) {
      *(_WORD*)(v24 + 136) |= 0x100u;
    }
    v27 = *(_BYTE**)(v24 + 32);
    v28 = v27[138];
    if (v28 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v27 + 64LL))(*(_QWORD*)(v24 + 32));
      v28 = v27[138];
    }
    v27[138] = v28 + 1;
    *(_WORD*)(v24 + 136) |= 2u;
    v22 = v45_.v45[0] & 1;
  }
  if (v22 != 0 && v45_.v46 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*v3 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v3 + v29, (__int64)v45_.v46);
  }
  v30 = 128;
  if (*(_QWORD*)(*v3 + 200) == 0) {
    v30 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(*v3 + v30, (__int64)v7);
}

_QWORD* game_1008b50()
{
  __int64 v1;

  return X8CALL_X0(
      void*,
      TransporterConst_89b3d0(
          (void*)(&v1),
          *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] +
                     8LL),
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                    game_TransporterConst_List_instance__ptr
                                        [0] +
                                8LL) +
                     8LL) +
              12LL * GameData_2167728 + 4,
          1));
}

#pragma GCC visibility pop
