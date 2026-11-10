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
__int64 nn_mem_StandardAllocator_Free(_QWORD);
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
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
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
__attribute__((swiftcall)) void game_ec1260(PSEUDO_X8 x8_, __int64 result);
float game_ede020(_QWORD* a1);
void game_ede740(float32x4_t* a1);
__int64 game_edea70(__int64 a1, float a2, float a3);
__int64 game_edede0(__int64 a1, float a2, float a3, float a4);
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
void game_f45e20(__int64 a1, __n128 a2);
void game_f464a0(__int64 a1);
__int64 game_f46660(__int64 a1);
void game_f469c0(__int64 a1);
void game_f5ab60(__int64 a1);
__n128 game_f5b140(__int64 a1);
__n128 game_f5bb00(__int64 a1);
__n128 game_f86460(__int64 a1, int a2, _QWORD* a3);
bool game_f86d10(__int64 a1, __int64* a2, char a3);
bool game_f86e80(__int64 a1, __int64* a2, char a3);
bool game_f86f50(__int64 a1, __int64* a2, char a3);
__int64 game_f87cd0(__int64 a1, __int64 a2);
void game_f8eb50(__int64 a1);
__int64 game_f917e0(__int64 a1);
void game_f9ce00(__int64 a1);
unsigned __int8* game_f9f860(unsigned __int8* result);
__attribute__((swiftcall)) void game_fa4b80(PSEUDO_X8 x8_);
__int64* game_fa7fe0(__int64* result);
__attribute__((swiftcall)) void game_fb1fe0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            char a4);
__attribute__((swiftcall)) void game_fb22c0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            char a4);
void game_fb78c0(__int64 a1, __n128 a2);
__int64* game_fb9500(__int64 a1);
__int64 game_fbb5a0(__int64 a1, __int128* a2, float a3);
__int64 game_fbc6b0(unsigned int a1);
__attribute__((swiftcall)) void game_fbce70(PSEUDO_X8 x8_, unsigned int a1,
                                            unsigned int a2);
void game_fbd7a0(__int64 a1);
_QWORD* game_fbdc20(__int64 a1);
__int64* game_fbe060(__int64 a1);
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
unsigned __int64 game_fd58e0(unsigned __int64 result, int* a2, __int64 a3,
                             char a4);
__int64 game_fdccb0(__int64 a1);
__attribute__((swiftcall)) void game_febfc0(PSEUDO_X8 x8_, __int64 a1);
__int64 game_ff0ea0(int8x16_t* a1, float32x4_t* a2, float32x4_t* a3,
                    __int64* a4, float a5);
float32x4_t* game_ff1940(float32x4_t* result, __int64* a2, float32x4_t* a3,
                         __int64 a4, float32x4_t* a5, __int64 a6,
                         float32x4_t* a7, int8x16_t* a8, float a9);
void game_ff33e0(__int64 a1, int* a2);
__int64* game_ff5c20(__int64 a1, unsigned __int8* a2);
__attribute__((swiftcall)) void game_ff60c0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_ff6680(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, long double a4);
bool game_ffbf60(_BYTE* a1);
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
__n128 game_fdd0d0(__int64 a1);
__n128 game_fdd2c0(__int64 a1);
void game_ff7720(unsigned __int8** a1, __int64* a2);
__n128 game_1007c80(__int64 a1);

__attribute__((swiftcall)) void game_ec1260(PSEUDO_X8 x8_, __int64 result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  unsigned __int64 v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  __int64 v19;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = *(_QWORD*)(GameData_2203490 + 712);
  v4 = *(_QWORD*)(GameData_2203490 + 720);
  if (v3 == v4) {
    v6 = 0;
  }
  else {
    v5 = nullptr;
    v6 = 0;
    v7 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v8 = *(_QWORD*)(*(_QWORD*)v3 + 16LL);
      v9 = a2[2];
      if ((unsigned __int64)v5 < v9) {
        *(_QWORD*)v5 = v8;
        v5 += 8;
      }
      else {
        v10 = &v5[-v6];
        v11 = (__int64)&v5[-v6] >> 3;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 61 != 0) {
          *a2 = v6;
          GameRoutine_6c1f60();
        }
        v13 = v9 - v6;
        if (v13 >> 2 > v12) {
          v12 = v13 >> 2;
        }
        if ((unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL) {
          v14 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v14 = v12;
        }
        if (v14 != 0) {
          if (v14 >> 61 != 0) {
            *a2 = v6;
            GameRoutine_60a210(result);
          }
          v15 = fw_memory_HeapManager_Allocate(*v7, 8 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + 8 * v14;
        v17 = &v5[-v6];
        v18 = (__int64)&v10[v15 + -8 * v11];
        *(_QWORD*)&v10[v15] = v8;
        v5 = &v10[v15 + 8];
        result = memcpy(v18, v6, v17);
        a2[1] = (__int64)v5;
        a2[2] = v16;
        if (v6 != 0) {
          v19 = 128;
          if (*(_QWORD*)(*v7 + 200LL) == 0) {
            v19 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*v7 + v19);
        }
        v6 = v18;
      }
      v3 += 16;
      a2[1] = (__int64)v5;
    } while (v3 != v4);
  }
  *a2 = v6;
  {
    result;
    return;
  }
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

__int64 game_edea70(__int64 a1, float a2, float a3)
{
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
  __int64 v30;
  float v32[4];
  int8x16_t v33;

  nn_os_LockMutex(&game_g_random_mutex);
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
  nn_os_UnlockMutex(&game_g_random_mutex);
  nn_os_LockMutex(&game_g_random_mutex);
  v10 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  v11 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
  v12 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
  *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
  *((_DWORD*)v5 + 1) = v10;
  v13 = (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v11;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v13;
  nn_os_UnlockMutex(&game_g_random_mutex);
  nn_os_LockMutex(&game_g_random_mutex);
  v14 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5);
  v15 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4);
  v16 = *(_DWORD*)v5 ^ (*(_DWORD*)v5 << 11);
  *(_DWORD*)v5 = *((_DWORD*)v5 + 1);
  *((_DWORD*)v5 + 1) = v14;
  v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5) = v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v5 + 4) = v17;
  nn_os_UnlockMutex(&game_g_random_mutex);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v30 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v30;
    __cxa_guard_release(&GameData_21a6130);
  }
  v32[0] = a3;
  v32[1] = a3;
  v18 = vcvts_n_f32_u32((unsigned __int16)v9, 0x10u);
  v19 = vcvts_n_f32_u32((unsigned __int16)v13, 0x10u);
  v20 = vcvts_n_f32_u32((unsigned __int16)v17, 0x10u);
  *(float*)&v21 = (float)(v20 + -0.5f) + (float)(v20 + -0.5f);
  LANES128(v22).n128_f32[0] = (float)(v18 + -0.5f) + (float)(v18 + -0.5f);
  LANES128(v22).n128_f32[1] = (float)(v19 + -0.5f) + (float)(v19 + -0.5f);
  LANES128(v22).n128_u64[1] = v21;
  v23 = vmulq_f32(v22, v22);
  v24 = vextq_s8(v23, v23, 8u);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vadd_f32(COERCE_AS(float32x2_t, LANES128(v24).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v23).n128_u64[0])))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] = 0;
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
  v33 = v25;
  return GameRoutine_edec80(a1 + 8, v32);
}

__int64 game_edede0(__int64 a1, float a2, float a3, float a4)
{
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
  __int64 v25;
  _DWORD v26[4];
  __int128 v27;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v25 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v25;
    __cxa_guard_release(&GameData_21a6130);
  }
  v27 = GameData_21a6120;
  nn_os_LockMutex(&game_g_random_mutex);
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
  nn_os_UnlockMutex(&game_g_random_mutex);
  *(float*)&v13 = (float)(unsigned __int16)v12;
  nn_os_LockMutex(&game_g_random_mutex);
  v14 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
  v15 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4);
  v16 = *(_DWORD*)v8 ^ (*(_DWORD*)v8 << 11);
  *(_DWORD*)v8 = *((_DWORD*)v8 + 1);
  *((_DWORD*)v8 + 1) = v14;
  v17 = (v16 >> 8) ^ (v15 >> 19) ^ v16 ^ v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v15;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v17;
  nn_os_UnlockMutex(&game_g_random_mutex);
  *(float*)&v18 = (float)(unsigned __int16)v17;
  nn_os_LockMutex(&game_g_random_mutex);
  v19 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
  v20 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4);
  v21 = *(_DWORD*)v8 ^ (*(_DWORD*)v8 << 11);
  *(_DWORD*)v8 = *((_DWORD*)v8 + 1);
  *((_DWORD*)v8 + 1) = v19;
  v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v20;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v22;
  nn_os_UnlockMutex(&game_g_random_mutex);
  *(float*)&v26[2] = a3;
  *(float*)&v26[3] = a4;
  *(_QWORD*)&v23 = __PAIR64__(v18, v13);
  *(float*)v26 = a2;
  *(float*)&v26[1] = a2;
  *((float*)&v23 + 2) = (float)(unsigned __int16)v22;
  HIDWORD(v23) = 0;
  v27 = v23;
  return GameRoutine_edef80(a1 + 32, v26);
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
  unsigned __int64 v19;
  unsigned __int64 v20;
  char* v21;
  __int64 v22;
  __int64* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v37;
  unsigned __int64 v38;
  char* v39;

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
      v9 = *(_QWORD*)(v8 + 32);
      v10 = strlen(v9);
      v11 = *(_BYTE*)v6 >> 1;
      if ((*(_BYTE*)v6 & 1) != 0) {
        v11 = *(_QWORD*)(v6 + 8);
      }
      if (v10 == v11) {
        v12 = v10;
        if (v10 == -1) {
          String_60a230();
        }
        v13 = (*(_BYTE*)v6 & 1) != 0 ? *(_QWORD*)(v6 + 16) : v5;
        if ((unsigned int)memcmp(v13, v9, v12) == 0 &&
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
      v18 = *(_QWORD*)(*(_QWORD*)(v8 + 48) + v15);
      v19 = strlen(v18);
      if (v19 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v20 = v19;
      if (v19 >= 0x17) {
        if ((v19 | 7) == 0x17) {
          v22 = 26;
        }
        else {
          v22 = (v19 | 7) + 1;
        }
        v21 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v22, 16, 0);
        v38 = v20;
        v39 = v21;
        v37 = v22 | 1;
      }
      else {
        v21 = (char*)&v37 + 1;
        LOBYTE(v37) = 2 * v19;
        if (v19 == 0) {
          goto LABEL_26;
        }
      }
      v19 = memmove(v21, v18, v20);
    LABEL_26:
      v23 = (__int64*)a2[1];
      v24 = a2[2];
      v21[v20] = 0;
      if ((unsigned __int64)v23 < v24) {
        v16 = v38;
        v17 = (__int64)(v23 + 3);
        *v23 = v37;
        v23[1] = v16;
        v23[2] = (__int64)v39;
      }
      else {
        v25 = *a2;
        v26 = (__int64)v23 - *a2;
        v27 = 1 - 0x5555555555555555LL * (v26 >> 3);
        if (v27 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00(v19);
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
            GameRoutine_60a210(v19);
          }
          v30 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               24 * v29, 16, 0);
        }
        else {
          v30 = 0;
        }
        v31 = (__int64*)(v30 + v26);
        v32 = v30 + 24 * v29;
        v33 = v38;
        v17 = v30 + v26 + 24;
        *v31 = v37;
        v31[1] = v33;
        v31[2] = (__int64)v39;
        memcpy(v30, v25, v26);
        *a2 = v30;
        a2[2] = v32;
        if (v25 != 0) {
          v34 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v34 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v34);
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

__attribute__((swiftcall)) void game_eecb60(PSEUDO_X8 x8_,
                                            unsigned __int64 result, __int64 a2)
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
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  char* v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;

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
                v14 = game_GameVariableTable_Find(
                    *(_QWORD*)(game_GameModeData_instance_ + 48), v12);
                if (v14 != 0) {
                  v15 = *(__int64 (**)(_QWORD))(v14 + 72);
                  v16 = *(_QWORD*)(v14 + 80);
                  v17 = (_QWORD*)(v14 + (v16 >> 1));
                  if ((v16 & 1) != 0) {
                    v15 = *(__int64 (**)(_QWORD))((char*)v15 + *v17);
                  }
                  result = v15(v17);
                }
                else {
                  result = 1;
                }
              }
              if (*(_BYTE*)(v12 + 16) != ((v13 == 0) | result & 1)) {
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
        v19 = *(_QWORD*)(v18 + 32);
        result = strlen(v19);
        v20 = *(_BYTE*)a2 >> 1;
        if ((*(_BYTE*)a2 & 1) != 0) {
          v20 = *(_QWORD*)(a2 + 8);
        }
        if (result == v20) {
          v21 = result;
          if (result == -1) {
            String_60a230();
          }
          v22 = (*(_BYTE*)a2 & 1) != 0 ? *(_QWORD*)(a2 + 16) : v43;
          result = memcmp(v22, v19, v21);
          if ((_DWORD)result == 0 && *(_WORD*)(v18 + 56) != 0) {
            break;
          }
        }
      }
    LABEL_4:
      v5 = *(_QWORD*)(v4 + 64);
      if (++v6 >= (int)((unsigned __int64)(*(_QWORD*)(v4 + 72) - v5) >> 3)) {
        result;
        return;
      }
    }
    v23 = 0;
    v45 = 8LL * *(unsigned __int16*)(v18 + 56);
    v24 = (__int64*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v27 = *(_QWORD*)(*(_QWORD*)(v18 + 64) + v23);
      result = strlen(v27);
      if (result >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v28 = result;
      if (result >= 0x17) {
        if ((result | 7) == 0x17) {
          v30 = 26;
        }
        else {
          v30 = (result | 7) + 1;
        }
        v29 = (char*)fw_memory_HeapManager_Allocate(*v24, v30, 16, 0);
        v47 = v28;
        v48 = v29;
        v46 = v30 | 1;
      }
      else {
        v29 = (char*)&v46 + 1;
        LOBYTE(v46) = 2 * result;
        if (result == 0) {
          goto LABEL_42;
        }
      }
      result = memmove(v29, v27, v28);
    LABEL_42:
      v31 = (__int64*)a3[1];
      v32 = a3[2];
      v29[v28] = 0;
      if ((unsigned __int64)v31 < v32) {
        v25 = v47;
        v26 = (__int64)(v31 + 3);
        *v31 = v46;
        v31[1] = v25;
        v31[2] = (__int64)v48;
      }
      else {
        v33 = *a3;
        v34 = (__int64)v31 - *a3;
        v35 = 1 - 0x5555555555555555LL * (v34 >> 3);
        if (v35 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_64aa00(result);
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
            GameRoutine_60a210(result);
          }
          v38 = fw_memory_HeapManager_Allocate(*v24, 24 * v37, 16, 0);
        }
        else {
          v38 = 0;
        }
        v39 = (__int64*)(v38 + v34);
        v40 = v38 + 24 * v37;
        v41 = v47;
        v26 = v38 + v34 + 24;
        *v39 = v46;
        v39[1] = v41;
        v39[2] = (__int64)v48;
        result = memcpy(v38, v33, v34);
        *a3 = v38;
        a3[2] = v40;
        v24 = &fw_memory_g_heap_manager;
        if (v33 != 0) {
          v42 = 128;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
            v42 = 56;
          }
          result =
              nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v42);
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
  {
    result;
    return;
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
    GameRoutine_14a4be0((void*)(v44), &GameData_224b668, v37,
                        GameData_1ff3b68[v31], &GameData_1a9f09e);
    game_f2f2e0((void*)(v45), v9, v44);
    GameRoutine_f2f380((__int64)v45);
    GameRoutine_f2f380((__int64)v44);
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
      GameRoutine_14a1b00(*(__int64**)(v34 + 8), 0x0.0p+0f);
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
    return GameRoutine_14a3920(v10);
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
    result = GameRoutine_14a3920(v10);
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
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  char* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  _QWORD* v24;
  unsigned __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  __int128 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  float v38;
  float v39;
  _DWORD* result;
  float32x4_t* v41;
  __int64* v42;

  if (a2 >= 0xC) {
    String_60a250("array::at");
  }
  v10 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v11 = (_QWORD*)(a1 + 24LL * a2);
  v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       224, 16, 0);
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
  v14 = fw_memory_HeapManager_Allocate(*v10, 296, 16, 0);
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
  v17 = v14 + 24;
  *(_QWORD*)(v12 + 200) = v17;
  if ((unsigned __int64)v15 >= v16) {
    v19 = v11[4];
    v41 = a3;
    v42 = a5;
    v20 = (char*)v15 - v19;
    v21 = ((__int64)v15 - v19) >> 4;
    v22 = v21 + 1;
    if ((unsigned __int64)(v21 + 1) >> 60 != 0) {
      GameRoutine_f31de0();
    }
    v23 = v16 - v19;
    v24 = v10;
    if (v23 >> 3 > v22) {
      v22 = v23 >> 3;
    }
    if ((unsigned __int64)v23 >= 0x7FFFFFFFFFFFFFF0LL) {
      v25 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v25 = v22;
    }
    if (v25 >> 60 != 0) {
      GameRoutine_60a210(v17);
    }
    v26 = v24;
    v27 = fw_memory_HeapManager_Allocate(*v24, 16 * v25, 16, 0);
    v28 = (__int64*)&v20[v27];
    v29 = v27 + 16 * v25;
    *v28 = v13;
    v28[1] = v12;
    v30 = (__int64)&v20[v27 + -16 * v21];
    v18 = (__int64)&v20[v27 + 16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
    memcpy(v30, v19, v20);
    v11[4] = v30;
    v11[5] = v18;
    v11[6] = v29;
    if (v19 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v26 + 200LL) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free(*v26 + v31);
    }
    a3 = v41;
    a5 = v42;
  }
  else {
    *v15 = v13;
    v15[1] = v12;
    v18 = (__int64)(v15 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v11[5] = v18;
  LANES128(v32).n128_u32[0] = 0;
  LANES128(v32).n128_u32[3] = 0;
  *(unsigned __int64*)((char*)LANES128(v32).n128_u64 + 4) =
      *(unsigned int*)(*GameData_212f878 + 1424);
  v33 = vaddq_f32(*a3, v32);
  v34 = *a4;
  *(_QWORD*)(v12 + 64) = LANES128(v33).n128_u64[0];
  *(_QWORD*)(v12 + 80) = v34;
  v35 = *(_OWORD*)(v12 + 64);
  v36 = *(_OWORD*)(v12 + 80);
  *((_QWORD*)&v35 + 1) = LANES128(v33).n128_u32[2];
  *((_QWORD*)&v36 + 1) = DWORD2(v34);
  *(_OWORD*)(v12 + 64) = v35;
  *(_OWORD*)(v12 + 80) = v36;
  game_f2f4e0(v13);
  *(_BYTE*)(v12 + 184) = 1;
  v37 = *(_QWORD*)(v12 + 192);
  if (v37 != 0) {
    v38 = *(float*)(v12 + 176);
    v39 = *(float*)(v12 + 180);
    result = *(_DWORD**)(v37 + 8);
  }
  else {
    result = *(_DWORD**)(v12 + 200);
    if (*(_QWORD*)result == 0 ||
        *(_DWORD*)(*(_QWORD*)result + 16LL) != result[2]) {
      goto LABEL_19;
    }
    v38 = *(float*)(v12 + 176);
    v39 = *(float*)(v12 + 180);
  }
  result = (_DWORD*)GameRoutine_14a1b00_alt1(result, v38 * v39);
LABEL_19:
  *a5 = v13;
  a5[1] = v12;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    {
      (_DWORD*)std___1___shared_weak_count___release_weak(v12);
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
      (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
    v44 = *((_QWORD*)GameData_212c540 + 1);
    *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
    *((_QWORD*)&GameData_21a6120 + 1) = v44;
    __cxa_guard_release(&GameData_21a6130);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
    v45 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v45;
    __cxa_guard_release(&GameData_21a61b0);
  }
  GameRoutine_6222e0((void*)(&v48_.v48), (float32x4_t*)&GameData_21a6120, &v52,
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
  GameRoutine_624bc0((void*)(&v47), (__int64)&v48_.v48);
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
  char* v6;
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
  _QWORD v33[2];
  char* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int16* v37;

  v0 = *(_QWORD*)(*GameData_212ea58 + 752);
  v1 = *(_QWORD*)(*GameData_212ea58 + 760);
  if (v1 != 0 && (v2 = *(_QWORD*)(*GameData_212ea58 + 760),
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16),
                                            1u, memory_order_relaxed),
                  (v3 = std___1___shared_weak_count_lock(v2)) != 0)) {
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
    CmdBtlUnit_e7ada0(v0);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
    }
  }
  else {
    if (((*(_UNKNOWN*)0xACLL) & 1) == 0) {
      (*(_UNKNOWN*)0xACLL) = 1;
    }
    (*(_DWORD*)0x88LL) = 1985855274;
    (*(_UNKNOWN*)0x8CLL) = 1;
    *(((_BYTE*)0x90LL) + 4) = 0;
    (*(_BYTE*)0x90LL) = 0;
    (*(_UNKNOWN*)0x98LL) = 0;
    (*(_BYTE*)0x9CLL) = 0;
    (*(_BYTE*)0xA0LL) = 0;
    (*(_BYTE*)0xA4LL) = 0;
    *(((_BYTE*)0xA4LL) + 4) = 0;
    CmdBtlUnit_e7ada0(0);
  }
  v5 = std___1___shared_weak_count_lock(v1);
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v0 + 16) + 392LL) + 40LL) != 0) {
    v6 = *(char**)(*(_QWORD*)(*(_QWORD*)(v0 + 16) + 392LL) + 40LL);
  }
  else {
    v6 = &GameData_1a9f09e;
  }
  v7 = strlen(v6);
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
    v9 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v10,
                                               16, 0);
    v36 = v8;
    v37 = (unsigned __int16*)v9;
    v35 = v10 | 1;
    goto LABEL_21;
  }
  LOBYTE(v35) = 2 * v7;
  v9 = (char*)&v35 + 1;
  if (v7 != 0) {
  LABEL_21:
    memmove(v9, v6, v8);
  }
  v9[v8] = 0;
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v11 = v36;
  if ((v35 & 1) == 0) {
    v11 = (unsigned __int8)v35 >> 1;
  }
  if (v11 == 3) {
    if ((v35 & 1) != 0) {
      v12 = v37;
    }
    else {
      v12 = (unsigned __int16*)((char*)&v35 + 1);
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
      v17 = std___1___shared_weak_count_lock(v1);
      if (v17 != 0) {
        v18 = *(_QWORD*)(v0 + 16) + 2104LL;
        if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v19 = v17;
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          std___1___shared_weak_count___release_weak(v19);
        }
      }
      else {
        v18 = 2104;
      }
      v21 = *(unsigned __int8*)(v18 + 32);
      if (v21 == 0) {
        v30 = std___1___shared_weak_count_lock(v1);
        if (v30 != 0) {
          v21 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v0 + 16) + 392LL) +
                                    441LL);
          if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v31 = v30;
            (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
            std___1___shared_weak_count___release_weak(v31);
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
    v22 = std___1___shared_weak_count_lock(v1);
    v23 = strlen(v20);
    if (v23 < 0xFFFFFFFFFFFFFFF7LL) {
      v24 = v23;
      if (v23 >= 0x17) {
        if ((v23 | 7) == 0x17) {
          v26 = 26;
        }
        else {
          v26 = (v23 | 7) + 1;
        }
        v25 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                    v26, 16, 0);
        v33[1] = v24;
        v34 = v25;
        v33[0] = v26 | 1;
      }
      else {
        LOBYTE(v33[0]) = 2 * v23;
        v25 = (char*)v33 + 1;
        if (v23 == 0) {
        LABEL_59:
          v25[v24] = 0;
          CmdBtlUnit_e7de70((void*)(&v32), v0, v33);
          if ((v33[0] & 1) != 0 && v34 != nullptr) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v27);
          }
          if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
            std___1___shared_weak_count___release_weak(v22);
          }
          goto LABEL_67;
        }
      }
      memcpy(v25, v20, v24);
      goto LABEL_59;
    }
  LABEL_77:
    String_60a1d0();
  }
LABEL_67:
  if ((v35 & 1) != 0 && v37 != nullptr) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
  }
  return std___1___shared_weak_count___release_weak(v1);
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

void game_f45e20(__int64 a1, __n128 a2)
{
  _QWORD* v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  bool v14;
  _BOOL4 v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64* v27;
  unsigned __int64 v28;
  char* v29;
  char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  char* v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64* v47;
  int v48;
  unsigned int v49;
  unsigned int v50;
  int v51;
  int v52;
  char* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  bool v58;
  char v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int16 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;

  v2 = (_QWORD*)a1;
  v3 = GameData_212ea58;
  v4 = (_QWORD*)*GameData_212ea58;
  v5 = *(_QWORD*)(*GameData_212ea58 + 888);
  if (v5 != 0) {
    v6 = v4[110];
    v7 = *(_QWORD*)(*GameData_212ea58 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    if (v8 != 0) {
      v9 = v6;
    }
    else {
      v9 = 0;
    }
    a1 = std___1___shared_weak_count___release_weak(v5);
    v10 = v4[113];
    if (v10 != 0) {
    LABEL_6:
      v11 = v4[112];
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      v12 = std___1___shared_weak_count_lock(v10);
      if (v12 != 0) {
        v13 = v11;
      }
      else {
        v13 = 0;
      }
      a1 = std___1___shared_weak_count___release_weak(v10);
      v14 = v9 == 0;
      v15 = v13 != 0;
      if (v13 == 0) {
        v14 = true;
      }
      v16 = v9 == v13 || v14;
      if ((v16 & 1) == 0) {
        if (v8 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                    memory_order_relaxed);
        }
        v17 = v2[20];
        v2[19] = v9;
        v2[20] = v8;
        if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
          a1 = std___1___shared_weak_count___release_weak(v17);
        }
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
        }
        v18 = v2[22];
        v2[21] = v13;
        v2[22] = v12;
        if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
          a1 = std___1___shared_weak_count___release_weak(v18);
        }
      }
      LOBYTE(v10) = v16 ^ 1;
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        a1 = std___1___shared_weak_count___release_weak(v12);
      }
      if (v8 == 0) {
        goto LABEL_33;
      }
      goto LABEL_32;
    }
  }
  else {
    v8 = 0;
    v9 = 0;
    v10 = v4[113];
    if (v10 != 0) {
      goto LABEL_6;
    }
  }
  v15 = false;
  if (v8 != 0) {
  LABEL_32:
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      a1 = std___1___shared_weak_count___release_weak(v8);
      if (!v15) {
        goto LABEL_35;
      }
      goto LABEL_34;
    }
  }
LABEL_33:
  if (v15) {
  LABEL_34:
    *(_DWORD*)(*v3 + 1204) &= ~2u;
  }
LABEL_35:
  if ((v10 & 1) != 0) {
    goto LABEL_36;
  }
  v20 = *v3;
  v21 = *(_DWORD*)(*v3 + 1204);
  if ((v21 & 2) == 0) {
    goto LABEL_116;
  }
  v22 = *(_QWORD*)(v20 + 888);
  v68 = v2;
  *(_DWORD*)(v20 + 1204) = v21 & 0xFFFFFFFD;
  if (v22 != 0) {
    v23 = *(_QWORD*)(v20 + 880);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
    v24 = std___1___shared_weak_count_lock(v22);
    if (v24 != 0) {
      v25 = v23;
    }
    else {
      v25 = 0;
    }
    v66 = v25;
    v67 = v24;
    a1 = std___1___shared_weak_count___release_weak(v22);
  }
  else {
    v66 = 0;
    v67 = 0;
  }
  v26 = *(__int64**)(v20 + 840);
  v27 = *(__int64**)(v20 + 848);
  if (v26 == v27) {
    v2 = v68;
    v56 = v67;
    v59 = 0;
    goto LABEL_113;
  }
  v28 = 0;
  v29 = nullptr;
  v30 = nullptr;
  do {
    v31 = *(_QWORD*)(v20 + 888);
    if (v31 == 0) {
      if (*v26 == 0) {
        goto LABEL_49;
      }
      goto LABEL_59;
    }
    v32 = *(_QWORD*)(v20 + 880);
    v33 = *(_QWORD*)(v20 + 888);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                              memory_order_relaxed);
    v34 = std___1___shared_weak_count_lock(v33);
    v35 = *v26;
    if (v34 == 0) {
      a1 = std___1___shared_weak_count___release_weak(v31);
      if (v35 == 0) {
        goto LABEL_49;
      }
    LABEL_59:
      if ((unsigned __int64)v29 >= v28) {
        v38 = (char*)(v29 - v30);
        v39 = (v29 - v30) >> 4;
        v40 = v39 + 1;
        if ((unsigned __int64)(v39 + 1) >> 60 != 0) {
          GameRoutine_e77e10(a1);
        }
        if ((__int64)(v28 - (_QWORD)v30) >> 3 > v40) {
          v40 = (__int64)(v28 - (_QWORD)v30) >> 3;
        }
        if (v28 - (unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF0LL) {
          v41 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v41 = v40;
        }
        if (v41 >> 60 != 0) {
          GameRoutine_60a210(a1);
        }
        v42 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v41, 16, 0);
        v43 = &v38[v42];
        *(_QWORD*)v43 = *v26;
        v44 = v26[1];
        *((_QWORD*)v43 + 1) = v44;
        if (v44 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v44 + 8), 1u,
                                    memory_order_relaxed);
        }
        v45 = &v43[-16 * v39];
        v28 = v42 + 16 * v41;
        v29 = v43 + 16;
        a1 = memcpy(v45, v30, v38);
        if (v30 != nullptr) {
          v46 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v46 = 56;
          }
          a2 = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46);
        }
        v30 = v45;
      }
      else {
        *(_QWORD*)v29 = *v26;
        v37 = v26[1];
        *((_QWORD*)v29 + 1) = v37;
        if (v37 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v37 + 8), 1u,
                                    memory_order_relaxed);
        }
        v29 += 16;
      }
      goto LABEL_49;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v36 = v34;
      (*(void (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      std___1___shared_weak_count___release_weak(v36);
    }
    a1 = std___1___shared_weak_count___release_weak(v31);
    if (v32 != v35) {
      goto LABEL_59;
    }
  LABEL_49:
    v26 += 2;
  } while (v26 != v27);
  if (v29 == v30) {
    v2 = v68;
    v56 = v67;
    v59 = 0;
    if (v30 == nullptr) {
      goto LABEL_113;
    }
    goto LABEL_110;
  }
  nn_os_LockMutex(&game_g_random_mutex);
  v47 = game_map_MapRandom_instance__ptr[0];
  v48 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8);
  v49 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL) + 8 + 4);
  v50 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                   (unsigned __int64)((__int128*)0x10LL)) ^
        (*(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                    (unsigned __int64)((__int128*)0x10LL))
         << 11);
  *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
             (unsigned __int64)((__int128*)0x10LL)) =
      *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                 (unsigned __int64)((__int128*)0x10LL) + 4);
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 4) = v48;
  v51 = (v50 >> 8) ^ (v49 >> 19) ^ v50 ^ v49;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 8) = v49;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v47 + 12) = v51;
  v52 = v51 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  v2 = v68;
  v53 = &v30[16 * (v52 % (int)((unsigned __int64)(v29 - v30) >> 4))];
  v55 = *(_QWORD*)v53;
  v54 = *((_QWORD*)v53 + 1);
  if (v54 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                              memory_order_relaxed);
  }
  v56 = v67;
  v58 = v66 == 0 || v55 == 0 || v66 == v55;
  v59 = !v58;
  if (!v58) {
    if (v67 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 8), 1u,
                                memory_order_relaxed);
    }
    v60 = v68[20];
    v68[19] = v66;
    v68[20] = v67;
    if (v60 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v60 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v60 + 16LL))(v60);
      std___1___shared_weak_count___release_weak(v60);
    }
    if (v54 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v54 + 8), 1u,
                                memory_order_relaxed);
    }
    v61 = v68[22];
    v68[21] = v55;
    v68[22] = v54;
    if (v61 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v61 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v61 + 16LL))(v61);
      std___1___shared_weak_count___release_weak(v61);
    }
  }
  if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    std___1___shared_weak_count___release_weak(v54);
  }
  do {
    v62 = *((_QWORD*)v29 - 1);
    if (v62 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v62 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v62 + 16LL))(v62);
      std___1___shared_weak_count___release_weak(v62);
    }
    v29 -= 16;
  } while (v29 != v30);
  if (v30 != nullptr) {
  LABEL_110:
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v63 = 56;
    }
    a2 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v63);
  }
LABEL_113:
  if (v56 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v56 + 16LL))(
        v56, *(long double*)&a2);
    std___1___shared_weak_count___release_weak(v56);
    if ((v59 & 1) != 0) {
      goto LABEL_36;
    }
  LABEL_116:
    v19 = 4;
  }
  else {
    if ((v59 & 1) == 0) {
      goto LABEL_116;
    }
  LABEL_36:
    v19 = 1;
  }
  v64 = v2[1];
  if (v64 != 0) {
    while (1) {
      if (*(_BYTE*)v64 == 2) {
        if (*(_DWORD*)(v64 + 32) == v19) {
          v65 = *((_WORD*)v2 + 68);
          v2[2] = v64;
          *((_WORD*)v2 + 68) = v65 & 0xFF7F;
          return;
        }
      }
      else if (*(_BYTE*)v64 == 0) {
        return;
      }
      v64 += 64;
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

__int64 game_f46660(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t v7;
  long double v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];
  _QWORD v27[2];

  v2 = GameData_212ea58;
  v3 = *(_QWORD*)(a1 + 176);
  v4 = *GameData_212ea58;
  v24 = *(_QWORD*)(a1 + 168);
  v25 = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
  }
  CmdbtlPartyNatives_e73070(v4 + 800, &v24);
  v5 = v25;
  if (v25 != 0) {
    v5 = std___1___shared_weak_count___release_weak(v25);
  }
  if ((GameData_2216858 & 1) == 0) {
    GameRoutine_8123d0(v5);
  }
  v6 = GameRoutine_eb9120(&GameData_2216780);
  if (v6 != 0) {
    LANES128(v7).n128_u64[0] = *(_QWORD*)(v6 + 96);
    LANES128(v7).n128_u32[2] = *(_DWORD*)(v6 + 104);
  }
  else {
    v7 = (__typeof__(v7)){0};
  }
  v8 = COERCE_LONG_DOUBLE(
      vsubq_f32(*(float32x4_t*)(*(_QWORD*)(a1 + 168) + 112LL), v7));
  v9 = atan2f(v6, v8, *((float*)&v8 + 2));
  v10 = *(float*)(*(_QWORD*)(a1 + 168) + 132LL);
  *(float*)(a1 + 184) = v10;
  v11 = fmodf(
      (float)((float)(v9 * 0x1.ca5dc20000000p+5) + 0x1.6800000000000p+7) - v10,
      0x1.6800000000000p+8);
  if (v11 >= 0.0) {
    v12 = v11 + 0.0;
  }
  else {
    v12 = (float)(v11 + 0.0) + 0x1.6800000000000p+8;
  }
  if (v12 > 0x1.6800000000000p+7) {
    v12 = v12 + -0x1.6800000000000p+8;
  }
  v13 = v10 + v12;
  if (v10 > v13) {
    v10 = v10 + -5.0;
    if (v10 >= v13) {
      goto LABEL_20;
    }
  LABEL_19:
    v10 = v13;
    goto LABEL_20;
  }
  if (v10 < v13) {
    v10 = v10 + 5.0;
    if (v10 > v13) {
      goto LABEL_19;
    }
  }
LABEL_20:
  v14 = fmodf(v10 + 0x1.6800000000000p+7, 0x1.6800000000000p+8);
  v15 = *(_QWORD*)(a1 + 168);
  v16 = v14 + -0x1.6800000000000p+7;
  v17 = *(_QWORD*)(v15 + 304);
  *(_BYTE*)(v15 + 80) = 1;
  *(_QWORD*)(v15 + 296) = 0;
  *(_QWORD*)(v15 + 304) = 0;
  if (v16 < -0x1.6800000000000p+7) {
    v16 = v16 + 0x1.6800000000000p+8;
  }
  *(float*)(v15 + 132) = v16;
  *(float*)(v15 + 32) = v16;
  if (v17 != 0) {
    std___1___shared_weak_count___release_weak(v17);
  }
  GameRoutine_e7bed0(v15, 1);
  CmdBtlUnit_e7df20(*(_QWORD*)(a1 + 168), 0, 1.0);
  CmdbtlPartyNatives_e9cce0(*v2);
  v18 = *v2;
  v19 = *(_QWORD*)(*v2 + 752);
  v20 = *(_QWORD*)(*v2 + 760);
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
  }
  v21 = *(_QWORD*)(v18 + 880);
  v22 = *(_QWORD*)(v18 + 888);
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
  }
  v27[0] = v19;
  v27[1] = v20;
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
  }
  v26[0] = v21;
  v26[1] = v22;
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_e7fde0(v18 + 16, v27, v26, 1, 0x1.99999a0000000p-2, 0.0);
    result = std___1___shared_weak_count___release_weak(v22);
    if (v20 == 0) {
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  result = GameRoutine_e7fde0(v18 + 16, v27, v26, 1, 0x1.99999a0000000p-2, 0.0);
  if (v20 != 0) {
  LABEL_32:
    result = std___1___shared_weak_count___release_weak(v20);
  }
LABEL_33:
  if (v22 != 0) {
    result = std___1___shared_weak_count___release_weak(v22);
  }
  if (v20 != 0) {
    return std___1___shared_weak_count___release_weak(v20);
  }
  return result;
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

__n128 game_f5b140(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
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
  unsigned __int64 v22;
  unsigned __int64 v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  _QWORD v37[2];
  _QWORD v38[2];
  char* v39;

  if ((GameRoutine_f5c790() & 1) == 0) {
    return result;
  }
  v3 = GameData_2203490;
  v4 = *(_QWORD*)(GameData_2203490 + 640);
  v5 = *(_QWORD*)(GameData_2203490 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    if (v4 != 0) {
      goto LABEL_5;
    }
  }
  else if (v4 != 0) {
    goto LABEL_5;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v13 = *(_QWORD*)(v3 + 664);
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
    }
  }
LABEL_5:
  v6 = *(_QWORD*)(v4 + 40);
  v7 = (__int64*)(v4 + 32);
  if (v6 == 0 || *(_QWORD*)(v6 + 8) == -1) {
    v9 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    v8 = *(_QWORD*)(v9 + 80);
    v6 = *(_QWORD*)(v9 + 88);
    if (v6 == 0) {
      goto LABEL_10;
    }
  }
  else {
    v8 = *v7;
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
LABEL_10:
  if ((*(_DWORD*)(v4 + 48) & 0x80000000) != 0) {
    v12 = 0;
    v11 = 0;
    if (v6 == 0) {
      goto LABEL_26;
    }
  }
  else {
    v10 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(
                                    v4) +
                                40) +
                     16LL * *(int*)(v4 + 48));
    v12 = *v10;
    v11 = v10[1];
    if (v11 != 0 &&
        (atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
      if (v6 == 0) {
        goto LABEL_26;
      }
    }
    else if (v6 == 0) {
      goto LABEL_26;
    }
  }
  v14 = std___1___shared_weak_count_lock(v6);
  if (v14 != 0) {
    v15 = *(_QWORD*)(*(_QWORD*)(v8 + 16) + 392LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v11 == 0) {
        goto LABEL_31;
      }
    }
    else {
      v19 = v14;
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v19);
      if (v11 == 0) {
        goto LABEL_31;
      }
    }
    goto LABEL_27;
  }
LABEL_26:
  v15 = (*(_QWORD*)0x188LL);
  if (v11 == 0) {
  LABEL_31:
    v17 = (*(_QWORD*)0x188LL);
    goto LABEL_32;
  }
LABEL_27:
  v16 = std___1___shared_weak_count_lock(v11);
  if (v16 == 0) {
    goto LABEL_31;
  }
  v17 = *(_QWORD*)(*(_QWORD*)(v12 + 16) + 392LL);
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v18 = v16;
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v18);
  }
LABEL_32:
  v20 = GameRoutine_f64a20(*GameData_212cc98[0], v15, v17);
  if (v20 == 0) {
    if (v15 != 0 && v17 != 0 && *(_QWORD*)(v15 + 288) != 0 &&
        (v30 = GameRoutine_975940()) != 0 &&
        (v31 = v30, *(_QWORD*)(v17 + 288) != 0) &&
        (v32 = GameRoutine_975940()) != 0 &&
        (v33 = *(unsigned __int16*)(v31 + 312), *(_WORD*)(v31 + 312) != 0)) {
      v34 = (__int64*)(*(_QWORD*)(v31 + 320) + 8LL);
      while (1) {
        v35 = *v34;
        v34 += 2;
        if (v35 == v32) {
          break;
        }
        if (--v33 == 0) {
          goto LABEL_66;
        }
      }
      LOBYTE(v38[0]) = 22;
      strcpy((char*)v38 + 1, "Call_Senior");
      if (v11 == 0) {
        goto LABEL_38;
      }
    }
    else {
    LABEL_66:
      LOBYTE(v38[0]) = 8;
      strcpy((char*)v38 + 1, "Call");
      if (v11 == 0) {
        goto LABEL_38;
      }
    }
  LABEL_37:
    std___1___shared_weak_count___release_weak(v11);
    goto LABEL_38;
  }
  v21 = v20;
  v22 = strlen(v20);
  if (v22 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v23 = v22;
  if (v22 >= 0x17) {
    if ((v22 | 7) == 0x17) {
      v36 = 26;
    }
    else {
      v36 = (v22 | 7) + 1;
    }
    v24 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v36,
                                                16, 0);
    v38[1] = v23;
    v39 = v24;
    v38[0] = v36 | 1;
  }
  else {
    LOBYTE(v38[0]) = 2 * v22;
    v24 = (char*)v38 + 1;
    if (v22 == 0) {
      BYTE1(v38[0]) = 0;
      if (v11 == 0) {
        goto LABEL_38;
      }
      goto LABEL_37;
    }
  }
  memmove(v24, v21, v23);
  v24[v23] = 0;
  if (v11 != 0) {
    goto LABEL_37;
  }
LABEL_38:
  if (v6 != 0) {
    std___1___shared_weak_count___release_weak(v6);
  }
  v25 = *(_QWORD*)(v4 + 40);
  if (v25 == 0 || *(_QWORD*)(v25 + 8) == -1) {
    v26 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
    v25 = *(_QWORD*)(v26 + 88);
    if (v25 == 0) {
      goto LABEL_50;
    }
    v7 = (__int64*)(v26 + 80);
  }
  v27 = *v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 16), 1u,
                            memory_order_relaxed);
  v28 = std___1___shared_weak_count_lock(v25);
  std___1___shared_weak_count___release_weak(v25);
  if (v28 != 0 && v27 != 0) {
    CmdBtlUnit_e7dd50((void*)(v37), v27, v38);
    GameRoutine_112180(a1 + 152, v37);
  }
  else if (v28 == 0) {
  LABEL_50:
    if ((v38[0] & 1) != 0 && v39 != nullptr) {
      v29 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v29 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
    }
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  goto LABEL_50;
}

__n128 game_f5bb00(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
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
  __int64* v23;
  __int64* v24;
  __int64 v25;
  char v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v32;
  _QWORD v33[2];
  char v34;
  _BYTE v35[15];
  __int64 v36;

  if ((GameRoutine_f5c790() & 1) == 0) {
    return result;
  }
  v3 = GameData_2203490;
  v4 = *(_QWORD*)(GameData_2203490 + 640);
  v5 = *(_QWORD*)(GameData_2203490 + 648);
  if (v5 != 0 && (atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8),
                                            1u, memory_order_relaxed),
                  atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0)) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    if (v4 != 0) {
      goto LABEL_5;
    }
  }
  else if (v4 != 0) {
    goto LABEL_5;
  }
  v4 = *(_QWORD*)(v3 + 656);
  v10 = *(_QWORD*)(v3 + 664);
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      std___1___shared_weak_count___release_weak(v10);
    }
  }
LABEL_5:
  if ((*(_DWORD*)(v4 + 48) & 0x80000000) != 0) {
    v8 = 0;
    v7 = 0;
    v9 = *(_QWORD*)(v4 + 40);
    if (v9 == 0) {
      goto LABEL_19;
    }
  }
  else {
    v6 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(
                                   v4) +
                               40) +
                    16LL * *(int*)(v4 + 48));
    v8 = *v6;
    v7 = v6[1];
    if (v7 != 0 &&
        (atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                   memory_order_relaxed),
         atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                          0xFFFFFFFFFFFFFFFFLL) == 0)) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      v9 = *(_QWORD*)(v4 + 40);
      if (v9 == 0) {
        goto LABEL_19;
      }
    }
    else {
      v9 = *(_QWORD*)(v4 + 40);
      if (v9 == 0) {
        goto LABEL_19;
      }
    }
  }
  if (*(_QWORD*)(v9 + 8) != -1) {
    v11 = *(_QWORD*)(v4 + 32);
  LABEL_20:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    goto LABEL_21;
  }
LABEL_19:
  v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
  v11 = *(_QWORD*)(v12 + 80);
  v9 = *(_QWORD*)(v12 + 88);
  if (v9 != 0) {
    goto LABEL_20;
  }
LABEL_21:
  if (v7 != 0 && (v13 = std___1___shared_weak_count_lock(v7)) != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(v8 + 16) + 392LL);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v9 == 0) {
        goto LABEL_31;
      }
    }
    else {
      v18 = v13;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v18);
      if (v9 == 0) {
        goto LABEL_31;
      }
    }
  }
  else {
    v14 = (*(_QWORD*)0x188LL);
    if (v9 == 0) {
    LABEL_31:
      v16 = (*(_QWORD*)0x188LL);
      goto LABEL_32;
    }
  }
  v15 = std___1___shared_weak_count_lock(v9);
  if (v15 == 0) {
    goto LABEL_31;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(v11 + 16) + 392LL);
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v17 = v15;
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak(v17);
  }
LABEL_32:
  if (v14 != 0 && v16 != 0 && *(_QWORD*)(v14 + 288) != 0 &&
      (v19 = GameRoutine_975940()) != 0 &&
      (v20 = v19, *(_QWORD*)(v16 + 288) != 0) &&
      (v21 = GameRoutine_975940()) != 0 &&
      (v22 = *(unsigned __int16*)(v20 + 312), *(_WORD*)(v20 + 312) != 0)) {
    v23 = &v36;
    v24 = (__int64*)(*(_QWORD*)(v20 + 320) + 8LL);
    while (1) {
      v25 = *v24;
      v24 += 2;
      if (v25 == v21) {
        break;
      }
      if (--v22 == 0) {
        goto LABEL_42;
      }
    }
    qmemcpy(v35, "Response_Senior", sizeof(v35));
    v26 = 30;
  }
  else {
  LABEL_42:
    v23 = (__int64*)&v35[8];
    *(_QWORD*)v35 = 0x65736E6F70736552LL;
    v26 = 16;
  }
  *(_BYTE*)v23 = 0;
  v34 = v26;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  if ((*(_DWORD*)(v4 + 48) & 0x80000000) != 0) {
    goto LABEL_59;
  }
  v27 = (__int64*)(*(_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 32LL))(
                                  v4) +
                              40) +
                   16LL * *(int*)(v4 + 48));
  v28 = v27[1];
  if (v28 == 0) {
    goto LABEL_59;
  }
  v29 = *v27;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                            memory_order_relaxed);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
    std___1___shared_weak_count___release_weak(v28);
  }
  v30 = std___1___shared_weak_count_lock(v28);
  std___1___shared_weak_count___release_weak(v28);
  if (v30 != 0 && v29 != 0) {
    CmdBtlUnit_e7dd50((void*)(v33), v29, &v34);
    GameRoutine_112180(a1 + 152, v33);
  }
  else if (v30 == 0) {
  LABEL_59:
    if ((v34 & 1) != 0 && v36 != 0) {
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      return nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
    }
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    std___1___shared_weak_count___release_weak(v30);
  }
  goto LABEL_59;
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
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21);
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
  __int64* v16;
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
              CmdBtlUnit_e7ca80((__int64)v19_.v19, 0x0.0p+0f);
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
                  v16 = (__int64*)v19_.v19[49];
                  v21_.v21 = v14;
                  v21_.v22 = v15;
                  v21_.v23 = v16;
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
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
              }
            }
          }
          v18 = v19_.v20;
          if (v19_.v20 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak_alt1(v18);
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

__int64 game_f917e0(__int64 a1)
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
  __int64 result;
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
  __int64 v32;
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

  GameRoutine_f92170(a1);
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
    result = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v17,
                                                 16, 0);
    v65_.v65 = v12 + 12;
    v65_.v66 = (char*)result;
    v64 = v17 | 1;
    v15 = v17 | 1;
  }
  else {
    v15 = 2 * v14;
    result = 0;
    v65_.v65 = 0;
    v65_.v66 = nullptr;
    v64 = (unsigned __int8)(2 * v14);
  }
  v18 = (v15 & 1) == 0;
  if ((v15 & 1) != 0) {
    v19 = (char*)result;
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
    v20 = (char*)(result + 12);
  }
  if (v12 != 0) {
    result = memmove(v20, v13, v12);
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
        result = memcmp(v21, v28, v22);
        if ((_DWORD)result == 0) {
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
    v31 = std___1___shared_weak_count_lock(v30);
    result = std___1___shared_weak_count___release_weak(v29);
    if (v31 == 0) {
      goto LABEL_67;
    }
    v63[0] = v25;
    v63[1] = v31;
    v32 = *(_QWORD*)GameData_212dbf0[0];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_efbb60(v32, v63, 1);
    v33 = std___1___shared_weak_count___release_weak(v31);
    v34 = 0x0.0p+0f;
    v35 = 0x0.0p+0f;
    v36 = *(_QWORD*)(GameData_21ec7c0 + 80);
    v37 = 0x0.0p+0f;
    if (v36 != 0) {
      v38 = *(_QWORD*)(GameData_21ec7c0 + 72);
      v39 = *(_QWORD*)(GameData_21ec7c0 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 16), 1u,
                                memory_order_relaxed);
      v40 = std___1___shared_weak_count_lock(v39);
      v33 = std___1___shared_weak_count___release_weak(v36);
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
          v33 = std___1___shared_weak_count___release_weak(v40);
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
      v34 = atan2f_alt1(v33, v37, v35) * 0x1.ca5dc00000000p+5f;
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
    result = game_zview_d20430(v56, &v61_.v61, 1);
    v59 = v61_.v62;
    if (v61_.v62 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v61_.v62 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v59 + 16LL))(v59);
      result = std___1___shared_weak_count___release_weak(v59);
    }
    if (atomic_fetch_add(v48, 0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
      result = std___1___shared_weak_count___release_weak(v49);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      result = std___1___shared_weak_count___release_weak(v31);
    }
  }
LABEL_67:
  if ((v64 & 1) != 0 && v65_.v66 != nullptr) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v60);
  }
  return result;
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
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int16* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __n128 result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  int v21;
  int v23;
  __int64 v25;
  __int64 v26;
  _BYTE v27[24];

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
    v27[13] = 0;
    v27[0] = 24;
    *(_DWORD*)&v27[9] = -1785993844;
    *(_QWORD*)&v27[1] = 0xA1E8B194E7AA87E8LL;
    GameRoutine_7a8220(a1, v27);
    v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if ((v27[0] & 1) != 0 && *(_QWORD*)&v27[16] != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    }
    v5 = fw_memory_HeapManager_Allocate(*v3, 32, 16, 0);
    *(_BYTE*)(v5 + 27) = 0;
    *(_QWORD*)v27 = 33;
    *(_QWORD*)&v27[8] = 27;
    *(_QWORD*)&v27[16] = v5;
    *(_DWORD*)(v5 + 23) = -1181292905;
    *(_QWORD*)v5 = 0xA1E8B194E7AA87E8LL;
    *(_QWORD*)(v5 + 8) = 0xE9AE81E3958BE58CLL;
    *(_QWORD*)(v5 + 16) = 0x9781E39481E38E81LL;
    GameRoutine_7a8220(a1, v27);
    if ((v27[0] & 1) != 0 && *(_QWORD*)&v27[16] != 0) {
      v6 = 128;
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v3 + v6);
    }
    v27[13] = 0;
    v27[0] = 24;
    *(_DWORD*)&v27[9] = -1719474794;
    *(_QWORD*)&v27[1] = 0xBAE68DBBE8B280E9LL;
    GameRoutine_7a8220(a1, v27);
    if ((v27[0] & 1) != 0 && *(_QWORD*)&v27[16] != 0) {
      v8 = 128;
      if (*(_QWORD*)(*v3 + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt1(*v3 + v8);
    }
    v2 = (__int16*)game_gmap_GmapClock_instance_;
    if (game_gmap_GmapClock_instance_ != 0) {
    LABEL_22:
      if (v2[11] * v2[10] * v2[12] == 0 || game_GameModeData_instance_ == 0 ||
          *(_DWORD*)(game_GameModeData_instance_ + 60) != 1 ||
          *(_DWORD*)(game_GameModeData_instance_ + 64) != 12) {
        goto LABEL_65;
      }
      v27[0] = 12;
      v27[7] = 0;
      *(_DWORD*)&v27[1] = -425810457;
      *(_WORD*)&v27[5] = -16466;
      GameRoutine_7a8220(a1, v27);
      if ((v27[0] & 1) != 0 && *(_QWORD*)&v27[16] != 0) {
        v9 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v9 = 56;
        }
        result = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
      }
      v2 = (__int16*)game_gmap_GmapClock_instance_;
      if (game_gmap_GmapClock_instance_ != 0) {
      LABEL_65:
        v10 = v2[10];
        v11 = v2[11];
        v12 = v2[12];
        if (v11 * v10 * v12 != 0) {
          v13 = *(__int64**)(GameData_21ca020 + 64);
          v14 = *(_QWORD*)(GameData_21ca020 + 72) - (_QWORD)v13;
          if ((int)((unsigned __int64)v14 >> 3) >= 1) {
            v15 = (int)(v14 >> 3);
            if (v15 <= 1) {
              v15 = 1;
            }
            while (1) {
              v17 = *v13++;
              v16 = v17;
              if (v17 != 0 && game_GameModeData_instance_ != 0) {
                v19 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
                if (*(_BYTE*)(game_GameModeData_instance_ + 15) != 0 &&
                    ((*(unsigned __int8*)(v16 + 144) >> (v19 - 1)) & 1) != 0) {
                  v20 = *(_QWORD*)(v16 + 24);
                  v21 = *(
                      unsigned __int8*)(v20 +
                                        4LL *
                                            *(unsigned __int8*)(game_GameModeData_instance_ +
                                                                15) +
                                        4);
                  if (v21 <= v11 &&
                      *(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
                    v23 = *(unsigned __int8*)(v20 + 4 * v19 + 5);
                    if (v21 != v11 || v23 <= v12) {
                      break;
                    }
                  }
                }
              }
              if (--v15 == 0) {
                goto LABEL_56;
              }
            }
            v27[7] = 0;
            v27[0] = 12;
            *(_DWORD*)&v27[1] = -459889435;
            *(_WORD*)&v27[5] = -25156;
            GameRoutine_7a8220(a1, v27);
            if ((v27[0] & 1) != 0 && *(_QWORD*)&v27[16] != 0) {
              v25 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v25 = 56;
              }
              result = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
            }
          }
        }
      }
    }
  }
LABEL_56:
  if (*(_QWORD*)(GameData_21f3d10 + 200) != 0 && DungeonController_f5f760()) {
    v27[22] = 0;
    v27[0] = 42;
    *(_QWORD*)&v27[1] = 0x83E3A382E39583E3LL;
    *(_QWORD*)&v27[9] = 0xE38983E3AB83E3BCLL;
    *(_QWORD*)&v27[14] = 0xAB83E3AD82E38983LL;
    GameRoutine_7a8220(a1, v27);
    if ((v27[0] & 1) != 0 && *(_QWORD*)&v27[16] != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      {
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64* game_fa7fe0(__int64* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = (_QWORD*)*result;
  if (*result == 0) {
    return result;
  }
  v2 = (_QWORD*)result[1];
  v3 = result;
  v4 = fw_memory_g_heap_manager_ptr;
  if (v1 == v2) {
    goto LABEL_22;
  }
  v5 = v2 - 8;
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
    result = (__int64*)*(v5 - 2);
    if (v5 - 6 == result) {
      v9 = 32;
      goto LABEL_14;
    }
    if (result != nullptr) {
      v9 = 40;
    LABEL_14:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v9))((__int64)result);
    }
    if ((*(_BYTE*)(v5 - 10) & 1) != 0 && *(v5 - 8) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v10 = 128;
      }
      else {
        v10 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10);
    }
    v6 = v5 - 10;
    v5 -= 18;
  } while (v6 != v1);
  v11 = *v3;
  v3[1] = (__int64)v1;
  if (v11 != 0) {
  LABEL_22:
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v12 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12);
  }
  return result;
}

__attribute__((swiftcall)) void game_fb1fe0(PSEUDO_X8 x8_, __int64 a1,
                                            float32x4_t* a2, float32x4_t* a3,
                                            char a4)
{
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
  __n128 result;
  __int64 v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float32x4_t* v32;
  float32x4_t v33;
  __int32 v34;
  float32x4_t v35;
  float32x4_t* v36;
  float32x4_t v37;
  float32x4_t v38;
  unsigned __int64 v39;
  char v40;
  char v41;
  char v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x2_t v45;
  float32x4_t* v46;
  float32x4_t* v47;
  __int64 v48;
  _QWORD v49[4];
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int32 v55;
  char v56;
  char v57;

  v5 = *a2;
  v6 = *a3;
  v49[3] = 0;
  v8 = *(_QWORD*)(a1 + 24);
  LOBYTE(v54) = 0;
  BYTE4(v51) = 0;
  LOBYTE(v52) = 0;
  LOBYTE(v50) = 0;
  v56 = a4;
  v10 = *(_QWORD*)(v8 + 312);
  v9 = *(_QWORD*)(v8 + 320);
  v57 = 1;
  v11 = *(_QWORD*)(v8 + 288);
  v12 = *(_QWORD*)(v8 + 296);
  v47 = nullptr;
  v48 = 0;
  v46 = nullptr;
  *(_OWORD*)v49 = LANES128(v5).n128_u64[0];
  v49[2] = LANES128(v6).n128_u64[0];
  v53 = v10;
  v54 = v9;
  *(_QWORD*)&v13 = LANES128(v5).n128_u64[0];
  *(_QWORD*)&v14 = LANES128(v6).n128_u64[0];
  v15 = *(_QWORD*)(v8 + 304);
  v50 = v11;
  *((_QWORD*)&v14 + 1) = LANES128(v6).n128_u32[2];
  *((_QWORD*)&v13 + 1) = LANES128(v5).n128_u32[2];
  LANES128(v6).n128_u32[0] = *(_DWORD*)(v8 + 528);
  v51 = v12;
  v52 = v15;
  v55 = LANES128(v6).n128_u32[0];
  *(_OWORD*)v49 = v13;
  *(_OWORD*)&v49[2] = v14;
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
          ((v57 & 1) != 0 || *(_QWORD*)(v16 + 8) != v22) &&
          ((*(__int64 (**)(__int64, _QWORD*, float32x4_t**))(
               *(_QWORD*)v22 + 24LL))(v22, v49, &v46) &
           1) != 0) {
        break;
      }
      if (++v17 == v18) {
        v5 = *a2;
        goto LABEL_10;
      }
    }
    v30 = v46;
    v31 = v47;
    if ((unsigned __int64)((char*)v47 - (char*)v46) >= 0x11) {
      if (&v46[1] == v47) {
        v36 = v46;
      }
      else {
        do {
          v32 = v30;
          v33 = v30[1];
          ++v30;
          v34 = LANES128(v32[1]).n128_i32[1];
          LANES128(*(v32)).n128_u32[0] = LANES128(v33).n128_u32[0];
          LANES128(*(v32)).n128_u32[1] = v34;
          v35 = *v32;
          LANES128(v35).n128_u64[1] = LANES128(v32[1]).n128_u32[2];
          *v32 = v35;
        } while (&v32[2] != v31);
        v36 = v46;
      }
      v47 = v30;
      v31 = v30;
      v30 = v36;
    }
    v5 = *a2;
    LANES128(v27).n128_u64[0] = 0;
    LANES128(v27).n128_u32[2] = 0;
    v23 = HIDWORD(LANES128(*(a2)).n128_u64[0]);
    v26 = LANES128(*(a2)).n128_u64[1];
    if (v30 == v31) {
      v24 = 0;
    LABEL_34:
      v25 = 0;
    }
    else {
      while (1) {
        v37 = *v30++;
        v38 = v37;
        v39 = LANES64_OF(vmovn_s32(vceqq_f32(v37, *a3))).n64_u64[0];
        v40 = v39;
        v41 = BYTE2(v39);
        v42 = BYTE4(v39);
        v43 = vsubq_f32(v37, v5);
        if ((v41 & 1) != 0) {
          v25 = v42;
        }
        else {
          v25 = 0;
        }
        v44 = vmulq_f32(v43, v43);
        if ((v40 & 1) == 0) {
          v25 = 0;
        }
        LANES64(v45).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v44, v44, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v44).n128_u64[0])))
                .n64_u64[0];
        v24 =
            (LANES64_OF(vpadd_f32(v45, v45)).n64_f32[0] >=
             (float)((float)(*(float*)(*(_QWORD*)(a1 + 24) + 528LL) * 0.5f) *
                     (float)(*(float*)(*(_QWORD*)(a1 + 24) + 528LL) * 0.5f))) |
            v25;
        if ((v24 & 1) != 0) {
          break;
        }
        if (v30 == v31) {
          goto LABEL_34;
        }
      }
      v27 = v38;
    }
  }
  *(_QWORD*)(a5 + 32) = 0;
  *(_QWORD*)(a5 + 40) = 0;
  *(_DWORD*)(a5 + 32) = LANES128(v5).n128_u32[0];
  *(_DWORD*)(a5 + 36) = v23;
  result = *(__n128*)(a5 + 32);
  *(_BYTE*)a5 = v24 & 1;
  *(_QWORD*)(a5 + 16) = 0;
  *(_QWORD*)(a5 + 24) = 0;
  LANES128(result).n128_u64[1] = v26;
  *(_BYTE*)(a5 + 1) = v25 & 1;
  *(__n128*)(a5 + 32) = result;
  if ((v24 & 1) != 0) {
    *(_QWORD*)(a5 + 16) = LANES128(v27).n128_u64[0];
    result = *(__n128*)(a5 + 16);
    LANES128(result).n128_u64[1] = LANES128(v27).n128_u32[2];
    *(__n128*)(a5 + 16) = result;
  }
  if (v46 != nullptr) {
    v47 = v46;
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v29);
      return;
    }
  }
  {
    result;
    return;
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
  _QWORD* result;
  __int64 v22;
  float32x4_t v23;
  float32x4_t v24;
  int8x16_t v25;
  __int64 v26;
  unsigned __int32 v27;
  float32x4_t* v28;
  float32x4_t v29;
  int8x16_t v30;
  __int128 v31;
  float32x4_t v34;
  float32x4_t v35;
  float v36;
  float32x4_t v37;
  float32x4_t v38;
  float32x4_t v39;
  struct {
    _QWORD v40[10];
    char v41;
    char gap193_[63];
    char v42;
  } v40_;

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
  LODWORD(v36) =
      LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t, LANES128(v9).n128_u64[0])))
          .n64_u32[0];
  v10 = vrsqrteq_f32(v9);
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
  v35 = vbicq_s8(
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
  v34 = vmulq_n_f32(v35, v36);
  v19 = GameData_212ebd0[0];
  do {
    v37 = vaddq_f32(*a3, vmulq_n_f32(v34, (float)v15 / 0x1.4000000000000p+4f));
    v38 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a82e80));
    v39 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a838e0));
    result =
        X8CALL_X0(float32x4_t*,
                  collision_670c60((void*)((__int64)v40_.v40), &v39, &v38, 1)),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
    if ((v40_.v41 & 1) != 0) {
      v22 = *v13;
      LANES128(v23).n128_u64[0] = v40_.v40[0];
      LANES128(v23).n128_u64[1] = LODWORD(v40_.v40[1]);
      v37 = v23;
      result = (_QWORD*)GameRoutine_f71d40(v22, (__int64)&v37, v12 + 64),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
      if (v16 == (_DWORD)result) {
        v24 = vsubq_f32(v37, *a3);
        v25 = vmulq_f32(v24, v24);
        LANES128(v25).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v25, v25, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v25).n128_u64[0])))
                .n64_f32[0] >= 0x1.2000000000000p+3f) {
          v26 = *v19;
          v38 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a82e80));
          v39 = vaddq_f32(v37, COERCE_AS(float32x4_t, GameData_1a838e0));
          result =
              X8CALL_X0(void*, game_zview_d163f0((void*)(v40_.v40), v26, &v39,
                                                 &v38, 0x1000000000000LL, 0,
                                                 0x1.cccccc0000000p-2f)),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
          if ((v40_.v42 & 1) == 0) {
            result =
                X8CALL_X0(void*, game_zview_d163f0((void*)(v40_.v40), *v19,
                                                   &v37, a3, 0x1000000000000LL,
                                                   0, 0x1.cccccc0000000p-2f)),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s0", "=w"));
            if ((v40_.v42 & 1) == 0) {
              result = X8CALL_X0(void*,
                                 game_zview_d163f0((void*)(v40_.v40), *v19, a3,
                                                   &v37, 0x1000000000000LL, 0,
                                                   0x1.cccccc0000000p-2f)),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s0", "=w"));
              if ((v40_.v42 & 1) == 0) {
                result = (_QWORD*)X8CALL_X0(
                    __int64,
                    game_fb1fe0((void*)((__int64)v40_.v40), a1, &v37, a3, 1)),
                v20 = COERCE_AS(__typeof__(v20),
                                PSEUDO_REGISTER(float, "s0", "=w"));
                if (LOBYTE(v40_.v40[0]) == 1 &&
                    ((v27 = LANES128(v37).n128_u32[2], (a4 & 1) == 0)
                         ? (v28 = a3)
                         : (v28 = a2),
                     v29 = vsubq_f32(*v28, v37),
                     LANES128(v29).n128_u32[1] = vmuls_lane_f32(
                         0x1.0000000000000p+2f,
                         COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]), 1),
                     v30 = vmulq_f32(v29, v29),
                     LANES128(v30).n128_u64[0] =
                         LANES64_OF(
                             vadd_f32(
                                 COERCE_AS(float32x2_t,
                                           LANES128_OF(vextq_s8(v30, v30, 8u))
                                               .n128_u64[0]),
                                 COERCE_AS(float32x2_t,
                                           LANES128(v30).n128_u64[0])))
                             .n64_u64[0],
                     (v20 = LANES64_OF(
                                vpadd_f32(COERCE_AS(float32x2_t,
                                                    LANES128(v30).n128_u64[0]),
                                          COERCE_AS(float32x2_t,
                                                    LANES128(v30).n128_u64[0])))
                                .n64_f32[0]) < v17)) {
                  if ((v18 & 1) != 0) {
                    *(_QWORD*)a5 = LANES128(v37).n128_u64[0];
                    v31 = *(_OWORD*)a5;
                    *((_QWORD*)&v31 + 1) = v27;
                    *(_OWORD*)a5 = v31;
                  }
                  else {
                    *(float32x4_t*)a5 = v37;
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
  {
    result;
    return;
  }
}

void game_fb78c0(__int64 a1, __n128 a2)
{
  __int64 v2;
  float v3;
  _QWORD* v4;
  _QWORD* v5;
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
  char* v17;
  __int64 v18;
  char* v19;
  char* v20;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  int v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  char* v51;
  __int64 v52;
  char* v53;
  __int64 v54;
  unsigned __int64 v55;
  char* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;

  LANES128(a2).n128_u32[0] = *(_DWORD*)(a1 + 88);
  v2 = a1;
  v3 =
      fabsf((float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                              160LL) *
                    0x1.0aef000000000p+4) /
            0x1.f400000000000p+9);
  if (LANES128(a2).n128_f32[0] > 0.0) {
    LANES128(a2).n128_f32[0] = LANES128(a2).n128_f32[0] - v3;
    if (LANES128(a2).n128_f32[0] >= 0.0) {
      goto LABEL_7;
    }
  LABEL_6:
    *(_DWORD*)(a1 + 88) = 0;
    goto LABEL_8;
  }
  if (LANES128(a2).n128_f32[0] < 0.0) {
    LANES128(a2).n128_f32[0] = LANES128(a2).n128_f32[0] + v3;
    if (LANES128(a2).n128_f32[0] > 0.0) {
      goto LABEL_6;
    }
  }
LABEL_7:
  *(_DWORD*)(a1 + 88) = LANES128(a2).n128_u32[0];
  if (LANES128(a2).n128_f32[0] > 0.0) {
    return;
  }
LABEL_8:
  v4 = *(_QWORD**)(a1 + 8);
  v5 = *(_QWORD**)(a1 + 16);
  if (v4 == v5) {
    v6 = nullptr;
    v7 = nullptr;
    v8 = 0;
  LABEL_33:
    v19 = *(char**)(v2 + 32);
    v20 = *(char**)(v2 + 40);
    if ((unsigned __int64)(v20 - v19) <= 0x20 && v19 != v20) {
      while (1) {
        a1 = GameRoutine_fb7e20(v2, v19);
        if ((a1 & 1) != 0) {
          if ((unsigned __int64)v7 >= v8) {
            v46 = (char*)(v7 - v6);
            v47 = (v7 - v6) >> 4;
            v48 = v47 + 1;
            if ((unsigned __int64)(v47 + 1) >> 60 != 0) {
              goto LABEL_93;
            }
            if ((__int64)(v8 - (_QWORD)v6) >> 3 > v48) {
              v48 = (__int64)(v8 - (_QWORD)v6) >> 3;
            }
            if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF0LL) {
              v49 = 0xFFFFFFFFFFFFFFFLL;
            }
            else {
              v49 = v48;
            }
            if (v49 >> 60 != 0) {
              goto LABEL_92;
            }
            v50 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v49, 16, 0);
            v51 = &v46[v50];
            *(_QWORD*)v51 = *(_QWORD*)v19;
            v52 = *((_QWORD*)v19 + 1);
            *((_QWORD*)v51 + 1) = v52;
            if (v52 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v52 + 16), 1u,
                                        memory_order_relaxed);
            }
            v53 = &v51[-16 * v47];
            v8 = v50 + 16 * v49;
            v7 = v51 + 16;
            a1 = memcpy(v53, v6, v46);
            if (v6 != nullptr) {
              v54 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v54 = 56;
              }
              a2 = nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v54);
            }
            v6 = v53;
          }
          else {
            *(_QWORD*)v7 = *(_QWORD*)v19;
            v45 = *((_QWORD*)v19 + 1);
            *((_QWORD*)v7 + 1) = v45;
            if (v45 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 16), 1u,
                                        memory_order_relaxed);
            }
            v7 += 16;
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
  v6 = nullptr;
  v7 = nullptr;
  v8 = 0;
  do {
    a1 = GameRoutine_fb7e20(v2, v4);
    if ((a1 & 1) != 0) {
      if ((unsigned __int64)v7 >= v8) {
        v10 = (char*)(v7 - v6);
        v11 = (v7 - v6) >> 4;
        v12 = v11 + 1;
        if ((unsigned __int64)(v11 + 1) >> 60 != 0) {
        LABEL_93:
          GameRoutine_cb48b0(*(long double*)&a2);
        }
        if ((__int64)(v8 - (_QWORD)v6) >> 3 > v12) {
          v12 = (__int64)(v8 - (_QWORD)v6) >> 3;
        }
        if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFF0LL) {
          v13 = 0xFFFFFFFFFFFFFFFLL;
        }
        else {
          v13 = v12;
        }
        if (v13 >> 60 != 0) {
          goto LABEL_92;
        }
        v14 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v13, 16, 0);
        v15 = &v10[v14];
        *(_QWORD*)v15 = *v4;
        v16 = v4[1];
        *((_QWORD*)v15 + 1) = v16;
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 16), 1u,
                                    memory_order_relaxed);
        }
        v17 = &v15[-16 * v11];
        v8 = v14 + 16 * v13;
        v7 = v15 + 16;
        a1 = memcpy(v17, v6, v10);
        if (v6 != nullptr) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          a2 = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
        }
        v6 = v17;
      }
      else {
        *(_QWORD*)v7 = *v4;
        v9 = v4[1];
        *((_QWORD*)v7 + 1) = v9;
        if (v9 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                    memory_order_relaxed);
        }
        v7 += 16;
      }
    }
    v4 += 2;
  } while (v4 != v5);
  if (v7 == v6) {
    goto LABEL_33;
  }
LABEL_38:
  if (v7 == v6) {
    if (v7 == nullptr) {
      return;
    }
    v31 = 0;
  }
  else {
    nn_os_LockMutex(&game_g_random_mutex);
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
    nn_os_UnlockMutex(&game_g_random_mutex);
    v28 = &v6[16 * (v27 % (int)((unsigned __int64)(v7 - v6) >> 4))];
    v29 = *((_QWORD*)v28 + 1);
    if (v29 != 0 && (v30 = std___1___shared_weak_count_lock(v29)) != 0) {
      v31 = *(_QWORD*)v28;
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v32 = v30;
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        a2 = std___1___shared_weak_count___release_weak_alt1(v32);
      }
    }
    else {
      v31 = 0;
    }
    do {
      a1 = *((_QWORD*)v7 - 1);
      if (a1 != 0) {
        a2 = std___1___shared_weak_count___release_weak_alt1(a1);
      }
      v7 -= 16;
    } while (v7 != v6);
  }
  if (v6 != nullptr) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    a2 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
  }
  if (v31 != 0) {
    *(_DWORD*)(v2 + 88) = 1065353216;
    v35 = *(_QWORD**)(v2 + 72);
    v34 = *(_QWORD*)(v2 + 80);
    v36 = *(_QWORD*)(v31 + 264);
    *(_QWORD*)(v2 + 56) = v36;
    if ((unsigned __int64)v35 >= v34) {
      v38 = *(_QWORD*)(v2 + 64);
      v39 = (char*)v35 - v38;
      v40 = ((__int64)v35 - v38) >> 3;
      v41 = v40 + 1;
      if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
        GameRoutine_65c760(*(long double*)&a2);
      }
      v42 = v34 - v38;
      if (v42 >> 2 > v41) {
        v41 = v42 >> 2;
      }
      if ((unsigned __int64)v42 >= 0x7FFFFFFFFFFFFFF8LL) {
        v43 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v43 = v41;
      }
      if (v43 != 0) {
        if (v43 >> 61 != 0) {
        LABEL_92:
          GameRoutine_60a210(a1);
        }
        v44 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v43, 16, 0);
      }
      else {
        v44 = 0;
      }
      v55 = v44 + 8 * v43;
      v56 = (char*)v35 - v38;
      v57 = (__int64)&v39[v44 + -8 * v40];
      *(_QWORD*)&v39[v44] = v36;
      v37 = (__int64)&v39[v44 + 8];
      memcpy(v57, v38, v56);
      *(_QWORD*)(v2 + 64) = v57;
      *(_QWORD*)(v2 + 72) = v37;
      *(_QWORD*)(v2 + 80) = v55;
      if (v38 != 0) {
        v58 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v58 = 56;
        }
        a2 = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v58);
      }
    }
    else {
      *v35 = v36;
      v37 = (__int64)(v35 + 1);
    }
    *(_QWORD*)(v2 + 72) = v37;
    Character_cafca0((void*)(&v59), v31, *(long double*)&a2);
  }
}

__int64* game_fb9500(__int64 a1)
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
    __int64 v22;
    __int64 v23;
  } v22_;
  struct {
    __int64 v24;
    __int64 v25;
  } v24_;
  float v26[5];
  __int64 v27;
  int v28;
  struct {
    __int64 v29;
    void* v30;
    float v31;
  } v29_;

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
    v29_.v30 = &GameData_1a95d15;
    v29_.v29 = game_HashString((__int64)&GameData_1a95d15);
    if (game_GameModeData_instance_ != 0 &&
        (v8 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v29_.v29)) != 0) {
      v7 = 8;
      v6 = *(_DWORD*)(v8 + 32) > 0;
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
  GameRoutine_fb48a0((void*)(&v29_.v29), GameData_21f3ca0, a1 + 160);
  v28 = 1109393408;
  LODWORD(v26[2]) = (_DWORD)v29_.v30;
  v26[3] = 0x1.8000000000000p+1f;
  v27 = 0x40F0000000000000LL;
  LODWORD(v26[0]) = v29_.v29;
  v26[1] = *((float*)&v29_.v29 + 1) + 0x1.6666660000000p+1f;
  v26[4] = v29_.v31;
  v12 = (__int64*)GameData_212dc60[0];
  game_hub_cdf140((void*)(&v24_.v24), *(_QWORD*)GameData_212dc60[0],
                  (__int64)v26, 1);
  if (v24_.v25 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v24_.v25);
  }
  v13 = *v12;
  *((float*)&v27 + 1) = *((float*)&v27 + 1) + -0x1.99999a0000000p-3f;
  game_hub_cdf420((void*)(&v22_.v22), v13, (__int64)v26, 0x1.4000000000000p+3f,
                  0x1.0000000000000p+0f, 0x1.0000000000000p+0f);
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v22_.v23);
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
    ProcHubSeqObeliskCleared_fba300((__int64*)(a1 + 192), 3);
    v14 = *(_DWORD*)(a1 + 164);
  }
  if (v14 == 2 && (GameVariable_82e3a0(2) & 1) != 0) {
    v29_.v30 = &GameData_1af6166;
    v29_.v29 = game_HashString((__int64)&GameData_1af6166);
    if (game_GameModeData_instance_ != 0) {
      v15 = game_GameVariableTable_Find_alt1(
          *(_QWORD**)(game_GameModeData_instance_ + 48),
          (unsigned __int64*)&v29_.v29);
      if (v15 != 0 && *(_DWORD*)(v15 + 32) != 0) {
        goto LABEL_32;
      }
    }
    v29_.v30 = &GameData_1af6166;
    v29_.v29 = game_HashString((__int64)&GameData_1af6166);
    game_VariableManager_SetFlag((__int64)&v29_.v29, 1);
    ProcHubSeqObeliskCleared_fba300((__int64*)(a1 + 192), 3);
  }
LABEL_34:
  v16 = *(_DWORD*)(a1 + 164);
  v17 = v16 == 1 && *(_BYTE*)(a1 + 160) == 7;
  if (v17 || v16 == 2) {
    ProcHubSeqObeliskCleared_fba300((__int64*)(a1 + 192), 4);
  }
  ProcHubSeqObeliskCleared_fba300((__int64*)(a1 + 192), 5);
  v29_.v30 = *(void**)(a1 + 152);
  v29_.v29 = game_HashString((__int64)v29_.v30);
  v19 = game_GameModeData_instance_ == 0 ||
        (v18 = game_GameVariableTable_Find_alt1(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v29_.v29)) == 0 ||
        *(_DWORD*)(v18 + 32) < 1;
  if (*(_BYTE*)(a1 + 160) == 7) {
    v19 = false;
  }
  if (v19 && *(_DWORD*)(a1 + 164) == 1) {
    v20 = 6;
  }
  else {
    v20 = 7;
  }
  return ProcHubSeqObeliskCleared_fba300((__int64*)(a1 + 192), v20);
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
  char* v5;
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
    v5 = (char*)*(&GameData_1ffce00 + a1);
  }
  v6 = strlen(v5),
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
    memcpy(v8, v5, v7),
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
  sprintf(&v30_.v30, GameData_1a91e0c, v14),
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
  game_fbce70_alt1((void*)((__int64)&v30_.v30), a1, v14),
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
        (unsigned int)__cxa_guard_acquire(&GameData_21ed530) != 0) {
      GameData_21ed528 = 1598310733;
      __cxa_guard_release(&GameData_21ed530),
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
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v26),
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
    if ((unsigned int)GameRoutine_fbcd00(a1) != 0) {
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
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v29),
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
  char* v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  char* v8;
  __int64 v9;
  char* v10;
  __n128 result;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;
  _BYTE v18[256];
  _QWORD v19[2];
  char* v20;

  if (a2 == 0) {
    *(_WORD*)a3 = 0;
    {
      result;
      return;
    }
  }
  if (a1 > 3) {
    v5 = &GameData_1a9f09e;
  }
  else {
    v5 = GameData_1ffce20[a1];
  }
  v6 = strlen(v5);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_33:
    String_60a1d0_alt2(v6);
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0);
    v19[1] = v7;
    v20 = v8;
    v19[0] = v9 | 1;
    goto LABEL_14;
  }
  LOBYTE(v19[0]) = 2 * v6;
  v8 = (char*)v19 + 1;
  if (v6 != 0) {
  LABEL_14:
    memcpy(v8, v5, v7);
  }
  v8[v7] = 0;
  if ((v19[0] & 1) != 0) {
    v10 = v20;
  }
  else {
    v10 = (char*)v19 + 1;
  }
  sprintf(v18, "MID_LGV_Audience_Talk1_%s_m%02d", v10, a2);
  v6 = strlen(v18);
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_33;
  }
  v12 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v14 = 26;
    }
    else {
      v14 = (v6 | 7) + 1;
    }
    v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v14, 16, 0);
    *(_QWORD*)(a3 + 8) = v12;
    *(_QWORD*)(a3 + 16) = v15;
    *(_QWORD*)a3 = v14 | 1;
    v13 = v15;
  }
  else {
    *(_BYTE*)a3 = 2 * v6;
    v13 = a3 + 1;
    if (v6 == 0) {
      goto LABEL_27;
    }
  }
  memcpy(v13, v18, v12);
LABEL_27:
  v16 = v19[0];
  *(_BYTE*)(v13 + v12) = 0;
  if ((v16 & 1) != 0 && v20 != nullptr) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
      return;
    }
  }
  {
    result;
    return;
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

_QWORD* game_fbdc20(__int64 a1)
{
  unsigned int v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  int v7;
  __int64 v8;
  struct {
    __int64 v9;
    unsigned __int64 v10;
    __int64 v11;
  } v9_;

  v2 = GameRoutine_fbcd00(*(_DWORD*)(a1 + 152));
  game_fbce70_alt1((void*)((__int64)&v9_.v9), *(unsigned int*)(a1 + 152), v2);
  GameRoutine_efb6f0(*(_QWORD*)GameData_212dbf0[0], a1, &v9_.v9);
  v3 = *(_QWORD**)(a1 + 168);
  if ((unsigned __int64)v3 >= *(_QWORD*)(a1 + 176)) {
    result = Manager_66cc20((__int64*)(a1 + 160), &v9_.v9);
    v7 = v9_.v9 & 1;
    *(_QWORD*)(a1 + 168) = result;
    if (v7 == 0) {
      return result;
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
      return v3 + 3;
    }
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 168), v9_.v11, v9_.v10);
    result = v3 + 3;
    *(_QWORD*)(a1 + 168) = v3 + 3;
  }
  if (v9_.v11 != 0) {
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
  }
  return result;
}

__int64* game_fbe060(__int64 a1)
{
  unsigned int v2;
  __int64 v3;
  unsigned int v4;
  char* v5;
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
  __int64* result;
  int v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
    char* v25;
  } v23_;
  _BYTE v26[256];
  struct {
    _QWORD v27[2];
    char* v28;
  } v27_;

  v2 = GameRoutine_fbcd00(*(_DWORD*)(a1 + 152));
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
  v6 = strlen(v5);
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
    memcpy(v8, v5, v7);
  }
  v8[v7] = 0;
  if ((v27_.v27[0] & 1) != 0) {
    v10 = v27_.v28;
  }
  else {
    v10 = (char*)v27_.v27 + 1;
  }
  sprintf(v26, "MID_LGV_Audience_Talk2_%s_m%02d", v10, v4);
  v11 = strlen(v26);
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
  memcpy(v13, v26, v12);
LABEL_27:
  v15 = v27_.v27[0];
  v13[v12] = 0;
  if ((v15 & 1) != 0 && v27_.v28 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v16);
  }
LABEL_32:
  GameRoutine_efb6f0(*(_QWORD*)GameData_212dbf0[0], a1, &v23_.v23);
  v17 = *(__int64**)(a1 + 168);
  if ((unsigned __int64)v17 >= *(_QWORD*)(a1 + 176)) {
    result = Manager_66cc20((__int64*)(a1 + 160), &v23_.v23);
    v21 = v23_.v23 & 1;
    *(_QWORD*)(a1 + 168) = result;
    if (v21 == 0) {
      return result;
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
      return v17 + 3;
    }
    fw_text_String_CopyTerminated(*(__int64**)(a1 + 168), (__int64)v23_.v25,
                                  v23_.v24);
    result = v17 + 3;
    *(_QWORD*)(a1 + 168) = v17 + 3;
  }
  if (v23_.v25 != nullptr) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    return (__int64*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
  }
  return result;
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
  __int64 v2;
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
  char* v18;
  signed __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  char* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  signed __int64 v36;
  bool v37;
  signed __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  signed __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  char* v47;
  __int64 v48;
  unsigned __int64 v49;
  signed __int64 v50;
  char* v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  signed __int64 v59;
  unsigned __int64 v60;
  _QWORD* v61;
  __int64* v62;
  __int64 v63;
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
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64* v78;
  __int64* v79;
  __int64* v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  __int64* v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  __int64 v88;
  __int64 v89;
  bool v90;
  __int64 v91;
  long double v92;
  __int64 v93;
  unsigned int* v94;
  unsigned int* v95;
  __int64 v96;
  long double v97;
  unsigned __int64 v98;
  __int64* v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  _QWORD v113[2];
  char v114;
  _QWORD v115[2];

  if ((*(_BYTE*)(a1 + 92) & 1) != 0 ||
      (v2 = a1, (*(_BYTE*)(a1 + 93) & 1) != 0)) {
    a2[1] = 0;
    a2[2] = 0;
    *a2 = 0;
    return;
  }
  v111 = *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 56LL);
  if (*(_WORD*)(*(_QWORD*)(a1 + 8) + 56LL) == 0) {
  LABEL_97:
    v78 = *(__int64**)(v2 + 16);
    v77 = *(__int64**)(v2 + 24);
    v79 = a2;
    v80 = v78;
    if (v78 != v77) {
      v80 = *(__int64**)(v2 + 16);
      while (*((_DWORD*)v80 + 1) != -2) {
        v80 = (__int64*)((char*)v80 + 12);
        if (v80 == v77) {
          goto LABEL_113;
        }
      }
    }
    if (v80 == v77) {
      goto LABEL_113;
    }
    v81 = (__int64*)((char*)v80 + 12);
    if ((__int64*)((char*)v80 + 12) == v77) {
      v82 = *(__int64**)(v2 + 24);
      if (v80 == v77) {
      LABEL_105:
        v77 = v82;
      LABEL_113:
        v86 = 0;
        v113[0] = GameRoutine_fc5000;
        v113[1] = 0;
        v115[0] = &v114;
        v115[1] = v113;
        if ((char*)v77 - (char*)v78 < 1537) {
        LABEL_117:
          v91 = GameRoutine_fc6fa0(
              v78, v77, v115,
              0xAAAAAAAAAAAAAAABLL * (((char*)v77 - (char*)v78) >> 2), 0, v86);
        }
        else {
          v87 = 0xAAAAAAAAAAAAAAABLL * (((char*)v77 - (char*)v78) >> 2);
          v88 = GameData_212c060;
          while (1) {
            v89 = GameRoutine_1a09d20(12 * v87, v88);
            if (v89 != 0) {
              break;
            }
            v86 = v87 >> 1;
            v90 = v87 > 1;
            v87 >>= 1;
            if (!v90) {
              goto LABEL_117;
            }
          }
          GameRoutine_fc6fa0(v78, v77, v115,
                             0xAAAAAAAAAAAAAAABLL *
                                 (((char*)v77 - (char*)v78) >> 2),
                             v89, v87);
          v93 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v93 = 56;
          }
          *(__n128*)&v92 = nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v93);
        }
        v94 = *(unsigned int**)(v2 + 16);
        v95 = *(unsigned int**)(v2 + 24);
        a2[1] = 0;
        a2[2] = 0;
        *a2 = 0;
        if (v95 == v94) {
          v98 = 0;
        }
        else {
          if ((0xAAAAAAAAAAAAAAABLL * (v95 - v94)) >> 61 != 0) {
            GameRoutine_fc6e20(v91, v92);
          }
          v96 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr,
              0x5555555555555558LL * (v95 - v94), 16, 0);
          v79 = a2;
          v98 = v96 + 0x5555555555555558LL * (v95 - v94);
          v99 = (__int64*)v96;
          *a2 = v96;
          do {
            v100 = *v94;
            v101 = *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(v2 + 8) + 16LL) +
                                        96LL * (int)*v94 + 42);
            if ((unsigned __int64)v99 < v98) {
              *v99++ = v101 | (v100 << 32);
            }
            else {
              v102 = *v79;
              v103 = (__int64)v99 - *v79;
              v104 = (v103 >> 3) + 1;
              if (v104 >> 61 != 0) {
                a2[1] = (__int64)v99;
                a2[2] = v98;
                GameRoutine_fc6e20(v96, v97);
              }
              if ((__int64)(v98 - v102) >> 2 > v104) {
                v104 = (__int64)(v98 - v102) >> 2;
              }
              if (v98 - v102 >= 0x7FFFFFFFFFFFFFF8LL) {
                v105 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v105 = v104;
              }
              if (v105 != 0) {
                if (v105 >> 61 != 0) {
                  a2[1] = (__int64)v99;
                  a2[2] = v98;
                  GameRoutine_60a210(v96);
                }
                v106 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v105, 16, 0);
              }
              else {
                v106 = 0;
              }
              v107 = v101 | (v100 << 32);
              v108 = v106 + 8 * v105;
              v109 = v106 + v103 - 8 * (v103 >> 3);
              *(_QWORD*)(v106 + v103) = v107;
              v99 = (__int64*)(v106 + v103 + 8);
              v96 = memcpy(v109, v102, v103);
              v79 = a2;
              *a2 = v109;
              if (v102 != 0) {
                v110 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v110 = 56;
                }
                *(__n128*)&v97 = nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v110);
              }
              v98 = v108;
            }
            v94 += 3;
          } while (v94 != v95);
          v79[1] = (__int64)v99;
        }
        v79[2] = v98;
        *(_BYTE*)(v2 + 92) = 1;
        return;
      }
    }
    else {
      do {
        if (*((_DWORD*)v81 + 1) != -2) {
          v83 = *v81;
          *((_DWORD*)v80 + 2) = *((_DWORD*)v81 + 2);
          *v80 = v83;
          v80 = (__int64*)((char*)v80 + 12);
        }
        v81 = (__int64*)((char*)v81 + 12);
      } while (v81 != v77);
      v78 = *(__int64**)(v2 + 16);
      v82 = *(__int64**)(v2 + 24);
      if (v80 == v77) {
        goto LABEL_105;
      }
    }
    v84 = v77;
    v85 = (char*)v82 - (char*)v77;
    if (v85 != 0) {
      memmove(v80, v84, v85);
      v78 = *(__int64**)(v2 + 16);
    }
    v77 = (__int64*)((char*)v80 + v85);
    *(_QWORD*)(v2 + 24) = v77;
    goto LABEL_113;
  }
  v3 = 0;
  while (1) {
    *(_DWORD*)(*(_QWORD*)(v2 + 16) + 12 * v3) = v3;
    v4 = *(_QWORD*)(v2 + 16) + 12LL * (int)v3;
    v5 = *(_QWORD*)(v2 + 80);
    if (*(_DWORD*)(v4 + 4) == -1) {
      break;
    }
  LABEL_84:
    while (v5 != 0) {
      v69 = *(
          _QWORD*)(*(_QWORD*)(*(_QWORD*)(v2 + 48) +
                              8 * ((unsigned __int64)(v5 + *(_QWORD*)(v2 + 72) -
                                                      1) >>
                                   9)) +
                   8 * ((v5 + *(_QWORD*)(v2 + 72) - 1) & 0x1FF));
      *(_DWORD*)(v69 + 4) = *(_DWORD*)(v4 + 4);
      *(_DWORD*)(v69 + 8) = *(_DWORD*)(v4 + 8) + 1;
      v70 = *(_QWORD*)(v2 + 48);
      v71 = *(_QWORD*)(v2 + 56);
      v72 = *(_QWORD*)(v2 + 80);
      v73 = v71 - v70;
      v37 = v71 == v70;
      v5 = v72 - 1;
      v74 = v72 + *(_QWORD*)(v2 + 72);
      *(_QWORD*)(v2 + 80) = v5;
      v75 = (v73 << 6) - 1;
      if (v37) {
        v75 = 0;
      }
      if ((unsigned __int64)(v75 - v74 + 1) >= 0x400) {
        if (*(_QWORD*)(v71 - 8) != 0) {
          v76 = 56;
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v76 = 128;
          }
          nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v76);
          v71 = *(_QWORD*)(v2 + 56);
          v5 = *(_QWORD*)(v2 + 80);
        }
        *(_QWORD*)(v2 + 56) = v71 - 8;
      }
      v4 = v69;
    }
    if (++v3 == v111) {
      goto LABEL_97;
    }
  }
  while (1) {
    v6 = *(char**)(v2 + 48);
    v7 = *(char**)(v2 + 56);
    v8 = v7 - v6;
    if (v7 == v6) {
      v9 = 0;
    }
    else {
      v9 = ((v7 - v6) << 6) - 1;
    }
    v10 = *(_QWORD*)(v2 + 72);
    v11 = v10 + v5;
    if (v9 == v11) {
      if (v10 < 0x200) {
        v13 = *(char**)(v2 + 64);
        v14 = *(char**)(v2 + 40);
        if (v8 >= (unsigned __int64)(v13 - v14)) {
          if (v13 == v14) {
            v22 = 1;
          }
          else {
            v22 = (v13 - v14) >> 2;
          }
          if (v22 >> 61 != 0) {
          LABEL_145:
            GameRoutine_60a210(a1);
          }
          v23 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v22, 16, 0);
          v24 = (__int64*)(v23 + v8);
          v25 = (__int64*)(v23 + 8 * v22);
          a1 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
          if (v8 == 8 * v22) {
            if (v7 == v6) {
              v28 = a1;
              v29 = fw_memory_g_heap_manager_ptr;
              v24 = (__int64*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
              v25 = v24 + 1;
              v30 = 128;
              if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) == 0) {
                v30 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v29 + v30);
              a1 = v28;
              v6 = *(char**)(v2 + 48);
              v7 = *(char**)(v2 + 56);
              v23 = (__int64)v24;
            }
            else {
              v24 -=
                  ((v8 >> 3) + 1 + ((unsigned __int64)((v8 >> 3) + 1) >> 63)) >>
                  1;
            }
          }
          *v24 = a1;
          v31 = v24 + 1;
          if (v7 != v6) {
            do {
              if (v24 == (__int64*)v23) {
                if (v31 >= v25) {
                  if (v25 == v24) {
                    v39 = 1;
                  }
                  else {
                    v39 = ((char*)v25 - (char*)v24) >> 2;
                  }
                  if (v39 >> 61 != 0) {
                    goto LABEL_145;
                  }
                  v40 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v39, 16, 0);
                  v41 = v40;
                  v34 =
                      (__int64*)(v40 + ((2 * v39 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v42 = (char*)v31 - (char*)v24;
                  v37 = v31 == v24;
                  v31 = v34;
                  if (!v37) {
                    v31 = (__int64*)((char*)v34 + v42);
                    v43 =
                        (_QWORD*)(v40 + ((2 * v39 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                    do {
                      v44 = *v24++;
                      v42 -= 8LL;
                      *v43++ = v44;
                    } while (v42 != 0);
                  }
                  v25 = (__int64*)(v40 + 8 * v39);
                  v45 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v45 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
                  v23 = v41;
                }
                else {
                  v36 = (char*)v31 - (char*)v24;
                  v38 = (char*)v31 - (char*)v24;
                  v37 = v31 == v24;
                  v31 += (v25 - v31 + 1 +
                          ((unsigned __int64)(v25 - v31 + 1) >> 63)) >>
                         1;
                  v34 = (__int64*)((char*)v31 - v36);
                  if (!v37) {
                    a1 = memmove((char*)v31 - v36, v24, v38);
                  }
                }
              }
              else {
                v34 = v24;
              }
              v35 = *((_QWORD*)v7 - 1);
              v7 -= 8;
              *(v34 - 1) = v35;
              v24 = v34 - 1;
            } while (v7 != *(char**)(v2 + 48));
          }
          v32 = *(_QWORD*)(v2 + 40);
          *(_QWORD*)(v2 + 40) = v23;
          *(_QWORD*)(v2 + 48) = v24;
          *(_QWORD*)(v2 + 56) = v31;
          *(_QWORD*)(v2 + 64) = v25;
          if (v32 != 0) {
            v33 = 56;
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v33 = 128;
            }
            nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v33);
          }
        }
        else {
          a1 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4096, 16, 0);
          v15 = a1;
          if (v13 == v7) {
            v26 = *(char**)(v2 + 48);
            if (v26 == *(char**)(v2 + 40)) {
              v47 = *(char**)(v2 + 56);
              v46 = *(_QWORD*)(v2 + 64);
              if ((unsigned __int64)v47 >= v46) {
                v55 = v46 - (_QWORD)v26;
                v37 = v55 == 0;
                v56 = v55 >> 2;
                if (v37) {
                  v57 = 1;
                }
                else {
                  v57 = v56;
                }
                if (v57 >> 61 != 0) {
                  goto LABEL_145;
                }
                v58 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v57, 16, 0);
                v59 = v47 - v26;
                v27 = v58 + ((2 * v57 + 6) & 0xFFFFFFFFFFFFFFF8LL);
                v60 = v27;
                if (v47 != v26) {
                  v60 = v27 + v59;
                  v61 = (_QWORD*)(v58 + ((2 * v57 + 6) & 0xFFFFFFFFFFFFFFF8LL));
                  v62 = (__int64*)v26;
                  do {
                    v63 = *v62++;
                    v59 -= 8LL;
                    *v61++ = v63;
                  } while (v59 != 0);
                }
                *(_QWORD*)(v2 + 40) = v58;
                *(_QWORD*)(v2 + 48) = v27;
                *(_QWORD*)(v2 + 56) = v60;
                *(_QWORD*)(v2 + 64) = v58 + 8 * v57;
                if (v26 != nullptr) {
                  v64 = 56;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v64 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
                  v27 = *(_QWORD*)(v2 + 48);
                }
              }
              else {
                v48 = (((__int64)(v46 - (_QWORD)v47) >> 3) + 1) / 2;
                v27 = (unsigned __int64)&v26[8 * v48];
                if (v47 != v26) {
                  memmove(&v26[8 * v48], *(_QWORD*)(v2 + 48), v47 - v26);
                  v47 = *(char**)(v2 + 56);
                }
                *(_QWORD*)(v2 + 48) = v27;
                *(_QWORD*)(v2 + 56) = &v47[8 * v48];
              }
            }
            else {
              v27 = *(_QWORD*)(v2 + 48);
            }
            *(_QWORD*)(v27 - 8) = v15;
            v65 = *(_QWORD*)(v2 + 48);
            *(_QWORD*)(v2 + 48) = v65 - 8;
            v66 = *(_QWORD*)(v65 - 8);
            *(_QWORD*)(v2 + 48) = v65;
            v115[0] = v66;
            a1 = GameRoutine_fc6e40(v2 + 40, v115);
          }
          else {
            v16 = *(char**)(v2 + 56);
            if (v16 == *(char**)(v2 + 64)) {
              v18 = *(char**)(v2 + 40);
              v17 = *(char**)(v2 + 48);
              if (v17 <= v18) {
                if (v16 == v18) {
                  v49 = 1;
                }
                else {
                  v49 = (v16 - v18) >> 2;
                }
                if (v49 >> 61 != 0) {
                  goto LABEL_145;
                }
                a1 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v49, 16, 0);
                v50 = v16 - v17;
                v37 = v16 == v17;
                v51 = (char*)(a1 + 8 * (v49 >> 2));
                v16 = v51;
                if (!v37) {
                  v16 = &v51[v50];
                  v52 = (_QWORD*)(a1 + 8 * (v49 >> 2));
                  do {
                    v53 = *(_QWORD*)v17;
                    v17 += 8;
                    v50 -= 8LL;
                    *v52++ = v53;
                  } while (v50 != 0);
                }
                *(_QWORD*)(v2 + 40) = a1;
                *(_QWORD*)(v2 + 48) = v51;
                *(_QWORD*)(v2 + 56) = v16;
                *(_QWORD*)(v2 + 64) = a1 + 8 * v49;
                if (v18 != nullptr) {
                  v54 = 56;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) != 0) {
                    v54 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v54);
                  v16 = *(char**)(v2 + 56);
                }
              }
              else {
                v19 = v16 - v17;
                v20 = ((v17 - v18) >> 3) + 1;
                v21 = &v17[-8 * (v20 / 2)];
                if (v19 != 0) {
                  a1 = memmove(&v17[-8 * (v20 / 2)], *(_QWORD*)(v2 + 48), v19);
                  v17 = *(char**)(v2 + 48);
                }
                v16 = &v21[v19];
                *(_QWORD*)(v2 + 48) = &v17[-8 * (v20 / 2)];
                *(_QWORD*)(v2 + 56) = v16;
              }
            }
            *(_QWORD*)v16 = v15;
            *(_QWORD*)(v2 + 56) += 8LL;
          }
        }
      }
      else {
        *(_QWORD*)(v2 + 72) = v10 - 512;
        v12 = *(_QWORD*)v6;
        *(_QWORD*)(v2 + 48) = v6 + 8;
        v115[0] = v12;
        a1 = GameRoutine_fc6e40(v2 + 40, v115);
      }
      v6 = *(char**)(v2 + 48);
      v11 = *(_QWORD*)(v2 + 80) + *(_QWORD*)(v2 + 72);
    }
    *(_QWORD*)(*(_QWORD*)&v6[8 * (v11 >> 9)] + 8 * (v11 & 0x1FF)) = v4;
    v67 = *(_QWORD*)(v2 + 8);
    v5 = *(_QWORD*)(v2 + 80) + 1LL;
    *(_QWORD*)(v2 + 80) = v5;
    v68 = *(unsigned __int16*)(*(_QWORD*)(v67 + 16) + 96LL * (int)v3 + 42);
    if (v68 == 0xFFFF) {
      break;
    }
    v4 = *(_QWORD*)(v2 + 16) + 12LL * (unsigned int)v68;
    if (*(_DWORD*)(v4 + 4) != -1) {
      goto LABEL_84;
    }
  }
  *(_BYTE*)(v2 + 93) = 1;
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
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
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
  __int64* v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  char v26;
  char* v27;
  char** v28;
  char* v29;
  __int64* v30;
  char* v31;
  char* v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  char v41;
  __int64 v42;
  char* v43;
  char v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  char v54;
  __int64 v55;
  char* v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  unsigned __int64 v72;
  __int64* v73;
  __int64* v74;
  __int64 v75;
  struct {
    __int64 v76;
    unsigned __int64 v77;
    char* v78;
  } v76_;
  struct {
    __int64 v79;
    __int64* v80;
    char* v81;
  } v79_;
  struct {
    __int64* v82;
    __int64* v83;
    __int64* v84;
    __int64 v85;
    char v86;
    char gap145_[7];
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
  } v82_;
  struct {
    __int64 v114;
    __int64 v115;
    __int64 v116;
  } v114_;

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
      v70 = result;
      v82_.v83 = (__int64*)&GameData_1ac05bb;
      v82_.v82 = (__int64*)game_HashString((__int64)&GameData_1ac05bb);
      if (game_GameModeData_instance_ == 0 ||
          (v6 = game_GameVariableTable_Find_alt1(
               *(_QWORD**)(game_GameModeData_instance_ + 48),
               (unsigned __int64*)&v82_.v82)) == 0 ||
          *(int*)(v6 + 32) < 1) {
      LABEL_36:
        v114_.v115 = 0;
        v114_.v116 = 0;
        v114_.v114 = 0;
        GameRoutine_dc0d60(*GameData_212cbe8[0], &v114_.v114);
        v16 = v114_.v114;
        v75 = v114_.v115;
        if (v114_.v115 == v114_.v114) {
          v63 = 0;
          v72 = 0;
          v73 = nullptr;
          if (v114_.v114 != 0) {
          LABEL_127:
            v64 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v64 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
          }
        LABEL_130:
          result = v70;
          v65 = *(_QWORD*)(v70 + 176);
          if (v65 != 0) {
            *(_QWORD*)(v70 + 184) = v65;
            v66 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v66 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v66);
            result = v70;
          }
          *(_QWORD*)(result + 176) = v63;
          *(_QWORD*)(result + 184) = v73;
          *(_QWORD*)(result + 192) = v72;
          goto LABEL_135;
        }
        v82_.v87 = 0;
        v82_.v88 = 0;
        v82_.v89 = 0;
        v82_.v90 = 0;
        v82_.v91 = 0;
        v82_.v92 = 0;
        v82_.v93 = 0;
        v82_.v94 = 0;
        v82_.v95 = 0;
        v82_.v96 = 0;
        v82_.v97 = 0;
        v82_.v98 = 0;
        v82_.v99 = 0;
        v82_.v100 = 0;
        v82_.v101 = 0;
        v82_.v102 = 0;
        v82_.v103 = 0;
        v82_.v104 = 0;
        v82_.v105 = 0;
        v82_.v106 = 0;
        v82_.v107 = 0;
        v82_.v108 = 0;
        v82_.v109 = 0;
        v82_.v110 = 0;
        v82_.v111 = 0;
        v82_.v112 = 0;
        v82_.v113 = 0;
        v82_.v84 = nullptr;
        v82_.v85 = 0;
        v82_.v82 = GameData_212fd50[0] + 2;
        v82_.v83 = (_QWORD*)&GameRoutine_314104;
        v82_.v86 = 1;
        GameRoutine_102abb0((__int64)&v82_.v82);
        v71 = 0;
        v72 = 0;
        v73 = nullptr;
        v17 = (__int64*)fw_memory_g_heap_manager_ptr;
        while (1) {
          v19 = *(_QWORD*)(*(_QWORD*)v16 + 32LL);
          v20 = strlen(v19);
          if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
            String_60a1d0_alt1();
          }
          v21 = v20;
          v22 = (__int64*)v16;
          if (v20 >= 0x17) {
            break;
          }
          v23 = (char*)&v79_.v79 + 1;
          LOBYTE(v79_.v79) = 2 * v20;
          if (v20 != 0) {
            goto LABEL_51;
          }
        LABEL_52:
          v23[v21] = 0;
          v25 = 0;
          v26 = v79_.v79;
          v27 = v79_.v81;
          v28 = GameData_212fbf8;
          if ((v79_.v79 & 1) != 0) {
            v29 = v79_.v81;
          }
          else {
            v29 = (char*)&v79_.v79 + 1;
          }
          if ((v79_.v79 & 1) != 0) {
            v30 = v79_.v80;
          }
          else {
            v30 = (__int64*)((unsigned __int8)v79_.v79 >> 1);
          }
          do {
            v32 = *v28;
            v28 += 2;
            v31 = v32;
            v33 = strlen(v32);
            if ((__int64*)v33 == v30) {
              if (v33 == -1) {
                String_60a230_alt1();
              }
              if ((unsigned int)memcmp(v29, v31, v33) == 0) {
                v34 = 0x100000000LL - v25;
                v35 = v22;
                if ((v26 & 1) == 0) {
                  goto LABEL_69;
                }
                goto LABEL_65;
              }
            }
            --v25;
          } while (v25 != -32);
          v34 = 0;
          v35 = v22;
          if ((v26 & 1) != 0) {
          LABEL_65:
            if (v27 != nullptr) {
              v36 = 128;
              if (*(_QWORD*)(*v17 + 200) == 0) {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free(*v17 + v36);
            }
          }
        LABEL_69:
          if (HIDWORD(v34) != 0) {
            game_dc0960((void*)(&v79_.v79), *v35);
            v37 = v82_.v102;
            v38 = v82_.v103;
            if (v82_.v102 != v82_.v103) {
              v74 = v35;
              while (1) {
                if (*(_DWORD*)(v37 + 88) == (_DWORD)v34) {
                  v39 = (__int64*)v79_.v79;
                  v40 = v79_.v80;
                  if ((__int64*)v79_.v79 != v79_.v80) {
                    v41 = 0;
                    do {
                      if ((*(_BYTE*)v39 & 1) != 0) {
                        fw_text_String_CopyTerminated(&v76_.v76, v39[2],
                                                      v39[1]);
                      }
                      else {
                        v42 = *v39;
                        v43 = (char*)v39[2];
                        v76_.v77 = v39[1];
                        v76_.v78 = v43;
                        v76_.v76 = v42;
                      }
                      v44 = v76_.v76;
                      if ((v76_.v76 & 1) != 0) {
                        v45 = v76_.v77;
                      }
                      else {
                        v45 = (unsigned __int64)(unsigned __int8)v76_.v76 >> 1;
                      }
                      v46 = *(unsigned __int8*)(v37 + 96);
                      v47 = *(_QWORD*)(v37 + 104);
                      if ((v46 & 1) == 0) {
                        v47 = v46 >> 1;
                      }
                      if (v45 == v47) {
                        if ((v76_.v76 & 1) != 0) {
                          v48 = v76_.v78;
                        }
                        else {
                          v48 = (char*)&v76_.v76 + 1;
                        }
                        if ((v46 & 1) != 0) {
                          v49 = *(_QWORD*)(v37 + 112);
                        }
                        else {
                          v49 = v37 + 97;
                        }
                        v41 |= (unsigned int)memcmp(v48, v49, v45) == 0;
                      }
                      if ((v44 & 1) != 0 && v76_.v78 != nullptr) {
                        v50 = 128;
                        if (*(_QWORD*)(*v17 + 200) == 0) {
                          v50 = 56;
                        }
                        nn_mem_StandardAllocator_Free(*v17 + v50);
                      }
                      v39 += 3;
                    } while (v39 != v40);
                    if ((v41 & 1) != 0) {
                      break;
                    }
                  }
                }
                v37 += 128;
                if (v37 == v38) {
                  v35 = v74;
                  goto LABEL_100;
                }
              }
              if ((unsigned __int64)v73 >= v72) {
                v35 = v74;
                v56 = (char*)v73 - v71;
                v57 = ((__int64)v73 - v71) >> 3;
                v58 = v57 + 1;
                if ((unsigned __int64)(v57 + 1) >> 61 != 0) {
                  GameRoutine_dc8470();
                }
                if ((__int64)(v72 - v71) >> 2 > v58) {
                  v58 = (__int64)(v72 - v71) >> 2;
                }
                if (v72 - v71 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v59 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v59 = v58;
                }
                if (v59 != 0) {
                  if (v59 >> 61 != 0) {
                    GameRoutine_60a210_alt1();
                  }
                  v60 =
                      fw_memory_HeapManager_Allocate_alt1(*v17, 8 * v59, 16, 0);
                }
                else {
                  v60 = 0;
                }
                v61 = (__int64)&v56[v60 + -8 * v57];
                *(_QWORD*)&v56[v60] = *v74;
                v72 = v60 + 8 * v59;
                v73 = (__int64*)&v56[v60 + 8];
                memcpy(v61, v71, v56);
                if (v71 != 0) {
                  v62 = 128;
                  if (*(_QWORD*)(*v17 + 200) == 0) {
                    v62 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v17 + v62);
                }
                v71 = v61;
              }
              else {
                v35 = v74;
                *v73++ = *v74;
              }
            }
          LABEL_100:
            v51 = v79_.v79;
            if (v79_.v79 != 0) {
              v52 = v79_.v80;
              if ((__int64*)v79_.v79 == v79_.v80) {
                goto LABEL_39;
              }
              v53 = v79_.v80;
              do {
                v54 = *((_BYTE*)v53 - 24);
                v53 -= 3;
                if ((v54 & 1) != 0 && *(v52 - 1) != 0) {
                  v55 = 128;
                  if (*(_QWORD*)(*v17 + 200) == 0) {
                    v55 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v17 + v55);
                }
                v52 = v53;
              } while (v53 != (__int64*)v51);
              v79_.v80 = (__int64*)v51;
              if (v79_.v79 != 0) {
              LABEL_39:
                v18 = 128;
                if (*(_QWORD*)(*v17 + 200) == 0) {
                  v18 = 56;
                }
                nn_mem_StandardAllocator_Free(*v17 + v18);
              }
            }
          }
          v16 = (__int64)(v35 + 1);
          if (v16 == v75) {
            MapSimulator_Destructor((__int64)&v82_.v82);
            v63 = v71;
            if (v114_.v114 != 0) {
              goto LABEL_127;
            }
            goto LABEL_130;
          }
        }
        if ((v20 | 7) == 0x17) {
          v24 = 26;
        }
        else {
          v24 = (v20 | 7) + 1;
        }
        v23 = (char*)fw_memory_HeapManager_Allocate_alt1(*v17, v24, 16, 0);
        v79_.v80 = (__int64*)v21;
        v79_.v81 = v23;
        v79_.v79 = v24 | 1;
      LABEL_51:
        memmove(v23, v19, v21);
        goto LABEL_52;
      }
      v82_.v83 = (__int64*)&GameData_1ac05bb;
      v82_.v82 = (__int64*)game_HashString((__int64)&GameData_1ac05bb);
      game_VariableManager_SetFlag((__int64)&v82_.v82, 0);
      v7 = v70;
      LOWORD(v82_.v82) = 0;
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
          GameRoutine_60a020((__int64)&v82_.v82, (__int64)v12);
          v7 = v70;
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
      if ((*(_BYTE*)(v7 + 152) & 1) != 0 && *(_QWORD*)(v7 + 168) != 0) {
        v14 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v14 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v14);
      }
      v15 = v82_.v83;
      *v13 = v82_.v82;
      v13[1] = v15;
      v13[2] = v82_.v84;
      goto LABEL_36;
    }
  }
LABEL_135:
  v67 = *(unsigned __int8*)(result + 152);
  if ((v67 & 1) != 0) {
    v68 = *(_QWORD*)(result + 160);
  }
  else {
    v68 = v67 >> 1;
  }
  if (v68 != 0 || *(_QWORD*)(result + 184) != *(_QWORD*)(result + 176)) {
    v69 = *(_QWORD*)(result + 8);
    if (v69 != 0) {
      while (1) {
        if (*(_BYTE*)v69 == 2) {
          if (*(_DWORD*)(v69 + 32) == 2) {
            *(_QWORD*)(result + 16) = v69;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v69 == 0) {
          return result;
        }
        v69 += 64;
      }
    }
  }
  return result;
}

unsigned __int64 game_fd58e0(unsigned __int64 result, int* a2, __int64 a3,
                             char a4)
{
  unsigned __int64 v6;
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
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  char* v25;
  unsigned __int64 v26;
  int v27;
  int v28;
  __int64 v29;
  unsigned __int64 v30;
  char* v31;
  int v32;
  int v33;
  __int64 v34;
  unsigned __int64 v35;
  char* v36;
  unsigned __int64 v37;
  unsigned int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  unsigned __int64 v45;
  char* v46;
  int v47;
  int v48;
  __int64 v49;
  unsigned __int64 v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  _QWORD* v54;
  __int64 v55;
  char v56;
  __int64 v57;
  __int64 v58;
  char* v59;
  bool v60;
  bool v61;
  char* v62;
  __int64 v63;
  int v64;
  char* v65;
  unsigned __int64 v66;
  __int64 v67;
  char* v68;
  unsigned __int64 v69;
  int v70;
  int v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  char* v78;
  unsigned __int64 v79;
  int v80;
  int v81;
  __int64 v82;
  unsigned int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  unsigned __int64 v88;
  int v89;
  int v90;
  __int64 v91;
  char* v92;
  unsigned __int64 v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  char v101;
  __int64 v102;
  __int64 v103;
  char* v104;
  int* v105;
  __int64 v106;
  __int64* v107;
  unsigned __int64 v108;
  __int64 v109;
  unsigned int v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  int* v116;
  __int64 v117;
  int* v118;
  __int64 v119;
  char* v120;
  int* v121;
  __int64* v122;
  __int64 v123;
  unsigned __int64 v124;
  __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  __int64 v128;
  char* v129;
  __int64 v130;
  _QWORD* v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  char* v138;
  unsigned __int64 v139;
  __int64 v140;
  unsigned __int64 v141;
  unsigned __int64 v142;
  __int64 v143;
  __int64 v144;
  signed __int64 v145;
  __int64 v146;
  char* v147;
  signed __int64 v148;
  __int64 v149;
  unsigned __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  unsigned __int64 v154;
  __int64 v155;
  __int64* v156;
  unsigned __int64 v157;
  __int64 v158;
  __int64 v159;
  char* v160;
  __int64 v161;
  unsigned __int64 v162;
  char* v163;
  unsigned __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  unsigned __int64 v170;
  __int64 v171;
  unsigned __int64 v172;
  char v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  _QWORD* v179;
  __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  __int64 v183;
  unsigned __int64 v184;
  __int64 v185;
  __int64 v186;
  unsigned __int64 v187;
  __int64 v188;
  unsigned __int64 v189;
  __int64 v190;
  bool v191;
  __int64 v192;
  char v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  unsigned __int64 v200;
  __int64 v201;
  unsigned __int64 v202;
  __int64 v203;
  char* v204;
  __int64 v205;
  unsigned __int64 v206;
  __int64 v207;
  __int64 v208;
  __int64 v209;
  __int64 v210;
  unsigned __int64 v211;
  char* v212;
  char v213;
  __int64 v214;
  __int64 v215;
  char* v216;
  int* v217;
  _QWORD* v218;
  __int64 v219;
  char* v220;
  unsigned __int64 v221;
  int* v222;
  int v223;
  __int64* v224;
  char v225;
  __int64 v226;
  unsigned __int64 v227;
  __int64 v228;
  _QWORD* v229;
  __int64 v230;
  __int64 v231;
  char* v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  char* v236;
  unsigned __int64 v237;
  __int64 v238;
  char v239;
  _QWORD* v240;
  __int64 v241;
  char v242;
  __int64 v243;
  __int64 v244;
  __int64 v245;
  __int64 v246;
  int v247;
  unsigned int* v248;
  signed __int64 v249;
  unsigned __int64 v251;
  __int64 v252;
  __int64 v253;
  __int64 v254;
  __int64 v255;
  int v256;
  int v257;
  int v258;
  int v259;
  int v260;
  int v261;
  struct {
    __int64 v262;
    __int64 v263;
    char* v264;
  } v262_;

  v6 = result;
  while (2) {
    v7 = (unsigned __int64)a2;
    v8 = v6;
    v248 = (unsigned int*)(a2 - 8);
    while (1) {
      while (1) {
        while (1) {
          v6 = v8;
          v9 = (__int64)(v7 - v8) >> 5;
          if (v9 > 2) {
            switch (v9) {
            case 3LL:
              return GameRoutine_fd6b40((unsigned int*)v8,
                                        (unsigned int*)(v8 + 32), v248);
            case 4LL:
              return GameRoutine_fd6db0(v8, v8 + 32, v8 + 64, (__int64)v248);
            case 5LL:
              return GameRoutine_fd6f70(v8, v8 + 32, v8 + 64, v8 + 96,
                                        (__int64)v248);
            default:
              break;
            }
          }
          else {
            if ((unsigned __int64)v9 < 2) {
              return result;
            }
            v7 = (unsigned __int64)a2;
            if (v9 == 2) {
              v105 = a2 - 6;
              if ((*(_BYTE*)(a2 - 6) & 1) != 0) {
                v106 = *((_QWORD*)a2 - 1);
              }
              else {
                v106 = (__int64)a2 - 23;
              }
              v107 = (__int64*)(v8 + 8);
              v108 = GameRoutine_ffd180(*(a2 - 8), v106);
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v109 = *(_QWORD*)(v8 + 24);
              }
              else {
                v109 = v8 + 9;
              }
              result = GameRoutine_ffd180(*(_DWORD*)v8, v109);
              if (v108 > result) {
                v110 = *(_DWORD*)v8;
                *(_DWORD*)v8 = *(a2 - 8);
                *(a2 - 8) = v110;
                v111 = *v107;
                v262_.v262 = *(_QWORD*)(v8 + 16);
                v262_.v263 = *(_QWORD*)(v8 + 24);
                v113 = *((_QWORD*)a2 - 2);
                v112 = *((_QWORD*)a2 - 1);
                *v107 = *(_QWORD*)v105;
                *(_QWORD*)(v8 + 16) = v113;
                *(_QWORD*)(v8 + 24) = v112;
                v114 = v262_.v262;
                v115 = v262_.v263;
                *(_QWORD*)v105 = v111;
                *((_QWORD*)a2 - 2) = v114;
                *((_QWORD*)a2 - 1) = v115;
              }
              return result;
            }
          }
          v251 = v8;
          if (v9 <= 23) {
            if ((a4 & 1) != 0) {
              if (v8 != v7) {
                v116 = (int*)(v8 + 32);
                if ((int*)(v8 + 32) != a2) {
                  v117 = 0;
                  v118 = (int*)v8;
                  do {
                    v121 = v118;
                    v118 = v116;
                    v122 = (__int64*)(v121 + 10);
                    if ((v121[10] & 1) != 0) {
                      v123 = *((_QWORD*)v121 + 7);
                    }
                    else {
                      v123 = (__int64)v121 + 41;
                    }
                    v124 = GameRoutine_ffd180(v121[8], v123);
                    if ((v121[2] & 1) != 0) {
                      v125 = *((_QWORD*)v121 + 3);
                    }
                    else {
                      v125 = (__int64)v121 + 9;
                    }
                    result = GameRoutine_ffd180(*v121, v125);
                    if (v124 > result) {
                      v126 = v8;
                      v258 = *v118;
                      v127 = *v122;
                      v128 = *((_QWORD*)v121 + 6);
                      *v122 = 0;
                      *((_QWORD*)v121 + 6) = 0;
                      v262_.v262 = v127;
                      v262_.v263 = v128;
                      v129 = *((char**)v121 + 7);
                      *((_QWORD*)v121 + 7) = 0;
                      v262_.v264 = v129;
                      v130 = v117;
                      while (1) {
                        v131 = (_QWORD*)(v126 + v130);
                        v132 = v130;
                        *(_DWORD*)(v126 + v130 + 32) = *(_DWORD*)(v126 + v130);
                        v133 = v126 + v130 + 40;
                        if ((*(_BYTE*)v133 & 1) != 0 && v131[7] != 0) {
                          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                            v134 = 128;
                          }
                          else {
                            v134 = 56;
                          }
                          result = nn_mem_StandardAllocator_Free(
                              fw_memory_g_heap_manager + v134);
                        }
                        v135 = v131[1];
                        v136 = v131[2];
                        *((_WORD*)v131 + 4) = 0;
                        *(_QWORD*)v133 = v135;
                        *(_QWORD*)(v133 + 8) = v136;
                        *(_QWORD*)(v133 + 16) = v131[3];
                        if (v132 == 0) {
                          break;
                        }
                        v126 = v8;
                        v137 = v8 + v132;
                        if ((v262_.v262 & 1) != 0) {
                          v138 = v262_.v264;
                        }
                        else {
                          v138 = (char*)&v262_.v262 + 1;
                        }
                        v139 = GameRoutine_ffd180(v258, (__int64)v138);
                        if ((*(_BYTE*)(v137 - 24) & 1) != 0) {
                          v140 = *(_QWORD*)(v137 - 8);
                        }
                        else {
                          v140 = v137 - 23;
                        }
                        result =
                            GameRoutine_ffd180(*(_DWORD*)(v137 - 32), v140);
                        v130 = v132 - 32;
                        if (v139 <= result) {
                          v141 = v8;
                          v142 = v8 + v132;
                          goto LABEL_191;
                        }
                      }
                      v141 = v8;
                      v142 = v8;
                    LABEL_191:
                      *(_DWORD*)v142 = v258;
                      v143 = v141 + v132 + 8;
                      if ((*(_BYTE*)v143 & 1) != 0 &&
                          *(_QWORD*)(v142 + 24) != 0) {
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                          v144 = 128;
                        }
                        else {
                          v144 = 56;
                        }
                        result = nn_mem_StandardAllocator_Free(
                            fw_memory_g_heap_manager + v144);
                      }
                      v119 = v262_.v262;
                      v120 = v262_.v264;
                      *(_QWORD*)(v143 + 8) = v262_.v263;
                      *(_QWORD*)(v143 + 16) = v120;
                      *(_QWORD*)v143 = v119;
                    }
                    v116 = v118 + 8;
                    v117 += 32;
                  } while (v118 + 8 != a2);
                }
              }
            }
            else if (v8 != v7) {
              v217 = (int*)(v8 + 32);
              if ((int*)(v8 + 32) != a2) {
                v218 = (_QWORD*)(v8 + 56);
                do {
                  v221 = v6;
                  v222 = v217;
                  v223 = *(_DWORD*)(v6 + 32);
                  v225 = *(_BYTE*)(v6 + 40);
                  v224 = (__int64*)(v6 + 40);
                  if ((v225 & 1) != 0) {
                    v226 = *(_QWORD*)(v221 + 56);
                  }
                  else {
                    v226 = v221 + 41;
                  }
                  v227 = GameRoutine_ffd180(v223, v226);
                  if ((*(_BYTE*)(v221 + 8) & 1) != 0) {
                    v228 = *(_QWORD*)(v221 + 24);
                  }
                  else {
                    v228 = v221 + 9;
                  }
                  result = GameRoutine_ffd180(*(_DWORD*)v221, v228);
                  if (v227 > result) {
                    v229 = v218;
                    v261 = *v222;
                    v230 = *v224;
                    v231 = v224[1];
                    *v224 = 0;
                    v224[1] = 0;
                    v262_.v262 = v230;
                    v262_.v263 = v231;
                    v232 = (char*)v224[2];
                    v224[2] = 0;
                    v262_.v264 = v232;
                    do {
                      v240 = v229 - 2;
                      v239 = *((_BYTE*)v229 - 16);
                      *((_DWORD*)v229 - 6) = *((_DWORD*)v229 - 14);
                      if ((v239 & 1) != 0 && *v229 != 0) {
                        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                          v241 = 128;
                        }
                        else {
                          v241 = 56;
                        }
                        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager +
                                                      v241);
                      }
                      v233 = *(v229 - 4);
                      v229 -= 4;
                      v234 = *(v229 - 2);
                      v235 = *(v229 - 1);
                      *((_WORD*)v229 - 8) = 0;
                      *v240 = v234;
                      v240[1] = v235;
                      v240[2] = v233;
                      if ((v262_.v262 & 1) != 0) {
                        v236 = v262_.v264;
                      }
                      else {
                        v236 = (char*)&v262_.v262 + 1;
                      }
                      v237 = GameRoutine_ffd180(v261, (__int64)v236);
                      if ((*(_BYTE*)(v229 - 6) & 1) != 0) {
                        v238 = *(v229 - 4);
                      }
                      else {
                        v238 = (__int64)v229 - 47;
                      }
                      result = GameRoutine_ffd180(*((_DWORD*)v229 - 14), v238);
                    } while (v237 > result);
                    v242 = *((_BYTE*)v229 - 16);
                    *((_DWORD*)v229 - 6) = v261;
                    if ((v242 & 1) != 0 && *v229 != 0) {
                      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
                        v243 = 128;
                      }
                      else {
                        v243 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          fw_memory_g_heap_manager + v243);
                    }
                    v219 = v262_.v262;
                    v220 = v262_.v264;
                    *(v229 - 1) = v262_.v263;
                    *v229 = v220;
                    *(v229 - 2) = v219;
                  }
                  v217 = v222 + 8;
                  v218 += 4;
                  v6 = (unsigned __int64)v222;
                } while (v222 + 8 != a2);
              }
            }
            return result;
          }
          if (a3 == 0) {
            if (v8 != v7) {
              v145 = (unsigned __int64)(v9 - 2) >> 1;
              v249 = v145;
              do {
                v148 = v145;
                if (v249 >= v145) {
                  v149 = (2 * (v145 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                  v150 = v6 + 32 * v149;
                  if (2 * v145 + 2 < v9) {
                    v151 = (*(_BYTE*)(v150 + 8) & 1) != 0
                               ? *(_QWORD*)(v150 + 24)
                               : v150 + 9;
                    v152 = GameRoutine_ffd180(*(_DWORD*)v150, v151);
                    v153 = (*(_BYTE*)(v150 + 40) & 1) != 0
                               ? *(_QWORD*)(v150 + 56)
                               : v150 + 41;
                    if (v152 >
                        GameRoutine_ffd180(*(_DWORD*)(v150 + 32), v153)) {
                      v150 += 32LL;
                      v149 = 2 * v148 + 2;
                    }
                  }
                  v154 = v6 + 32 * v148;
                  v155 = (*(_BYTE*)(v150 + 8) & 1) != 0 ? *(_QWORD*)(v150 + 24)
                                                        : v150 + 9;
                  v156 = (__int64*)(v154 + 8);
                  v157 = GameRoutine_ffd180(*(_DWORD*)v150, v155);
                  v158 = (*(_BYTE*)(v154 + 8) & 1) != 0 ? *(_QWORD*)(v154 + 24)
                                                        : v154 + 9;
                  result = GameRoutine_ffd180(*(_DWORD*)v154, v158);
                  if (v157 <= result) {
                    v259 = *(_DWORD*)v154;
                    v159 = *v156;
                    v160 = *(char**)(v154 + 24);
                    v262_.v263 = *(_QWORD*)(v154 + 16);
                    v262_.v264 = v160;
                    v262_.v262 = v159;
                    *(_QWORD*)(v154 + 16) = 0;
                    *(_QWORD*)(v154 + 24) = 0;
                    *v156 = 0;
                    do {
                      v164 = v150;
                      *(_DWORD*)v154 = *(_DWORD*)v150;
                      if ((*(_BYTE*)(v154 + 8) & 1) != 0 &&
                          *(_QWORD*)(v154 + 24) != 0) {
                        v165 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v165 = 56;
                        }
                        result = nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v165);
                      }
                      v166 = *(_QWORD*)(v150 + 16);
                      v167 = *(_QWORD*)(v150 + 24);
                      *(_QWORD*)(v154 + 8) = *(_QWORD*)(v150 + 8);
                      *(_QWORD*)(v154 + 16) = v166;
                      *(_QWORD*)(v154 + 24) = v167;
                      *(_WORD*)(v150 + 8) = 0;
                      if (v249 < v149) {
                        *(_DWORD*)v150 = v259;
                        goto LABEL_200;
                      }
                      v168 = (2 * v149) | 1;
                      v150 = v6 + 32 * v168;
                      if (2 * v149 + 2 < v9) {
                        if ((*(_BYTE*)(v150 + 8) & 1) != 0) {
                          v169 = *(_QWORD*)(v150 + 24);
                        }
                        else {
                          v169 = v150 + 9;
                        }
                        v170 = GameRoutine_ffd180(*(_DWORD*)v150, v169);
                        if ((*(_BYTE*)(v150 + 40) & 1) != 0) {
                          v171 = *(_QWORD*)(v150 + 56);
                        }
                        else {
                          v171 = v150 + 41;
                        }
                        v172 = GameRoutine_ffd180(*(_DWORD*)(v150 + 32), v171);
                        if (v170 > v172) {
                          v150 += 32LL;
                        }
                        v6 = v251;
                        if (v170 > v172) {
                          v168 = 2 * v149 + 2;
                        }
                      }
                      if ((*(_BYTE*)(v150 + 8) & 1) != 0) {
                        v161 = *(_QWORD*)(v150 + 24);
                      }
                      else {
                        v161 = v150 + 9;
                      }
                      v162 = GameRoutine_ffd180(*(_DWORD*)v150, v161);
                      if ((v262_.v262 & 1) != 0) {
                        v163 = v262_.v264;
                      }
                      else {
                        v163 = (char*)&v262_.v262 + 1;
                      }
                      result = GameRoutine_ffd180(v259, (__int64)v163);
                      v154 = v164;
                      v149 = v168;
                    } while (v162 <= result);
                    v173 = *(_BYTE*)(v164 + 8);
                    *(_DWORD*)v164 = v259;
                    if ((v173 & 1) != 0 && *(_QWORD*)(v164 + 24) != 0) {
                      v174 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v174 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v174);
                    }
                  LABEL_200:
                    v146 = v262_.v262;
                    v147 = v262_.v264;
                    *(_QWORD*)(v164 + 16) = v262_.v263;
                    *(_QWORD*)(v164 + 24) = v147;
                    *(_QWORD*)(v164 + 8) = v146;
                  }
                }
                v145 = v148 - 1;
              } while (v148 != 0);
              do {
                v175 = 0;
                v247 = *(_DWORD*)v6;
                v177 = *(_QWORD*)(v6 + 8);
                v176 = *(_QWORD*)(v6 + 16);
                *(_QWORD*)(v6 + 8) = 0;
                *(_QWORD*)(v6 + 16) = 0;
                v245 = v176;
                v246 = v177;
                v178 = *(_QWORD*)(v6 + 24);
                *(_QWORD*)(v6 + 24) = 0;
                v244 = v178;
                do {
                  v184 = v6 + 32 * v175;
                  v185 = (2 * v175) | 1;
                  v186 = 2 * v175 + 2;
                  v187 = v184 + 32;
                  if (v186 >= v9) {
                    v175 = (2 * v175) | 1;
                    *(_DWORD*)v6 = *(_DWORD*)v187;
                    v179 = (_QWORD*)(v6 + 8);
                  }
                  else {
                    if ((*(_BYTE*)(v184 + 40) & 1) != 0) {
                      v188 = *(_QWORD*)(v184 + 56);
                    }
                    else {
                      v188 = v184 + 41;
                    }
                    v189 = GameRoutine_ffd180(*(_DWORD*)(v184 + 32), v188);
                    if ((*(_BYTE*)(v184 + 72) & 1) != 0) {
                      v190 = *(_QWORD*)(v184 + 88);
                    }
                    else {
                      v190 = v184 + 73;
                    }
                    result = GameRoutine_ffd180(*(_DWORD*)(v184 + 64), v190);
                    v191 = v189 > result;
                    v192 = 32;
                    if (v189 <= result) {
                      v175 = v185;
                    }
                    else {
                      v192 = 64;
                      v175 = v186;
                    }
                    v179 = (_QWORD*)(v6 + 8);
                    v193 = *(_BYTE*)(v6 + 8);
                    if (v191) {
                      v187 = v184 + 64;
                    }
                    *(_DWORD*)v6 = *(_DWORD*)(v184 + v192);
                    if ((v193 & 1) != 0 && *(_QWORD*)(v6 + 24) != 0) {
                      v194 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v194 = 56;
                      }
                      result = nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v194);
                    }
                  }
                  v6 = v187;
                  v180 = *(_QWORD*)(v187 + 8);
                  v181 = *(_QWORD*)(v187 + 16);
                  v182 = v187 + 8;
                  v183 = *(_QWORD*)(v182 + 16);
                  *v179 = v180;
                  v179[1] = v181;
                  v179[2] = v183;
                  *(_WORD*)v182 = 0;
                } while (v175 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
                if ((int*)v6 == a2 - 8) {
                  *(_DWORD*)v6 = v247;
                  *(_QWORD*)(v6 + 8) = v246;
                  *(_QWORD*)(v6 + 16) = v245;
                  *(_QWORD*)(v6 + 24) = v244;
                }
                else {
                  *(_DWORD*)v6 = *(a2 - 8);
                  v195 = *((_QWORD*)a2 - 2);
                  v196 = *((_QWORD*)a2 - 1);
                  *(_QWORD*)v182 = *((_QWORD*)a2 - 3);
                  *(_QWORD*)(v182 + 8) = v195;
                  *(_QWORD*)(v182 + 16) = v196;
                  *(a2 - 8) = v247;
                  *((_QWORD*)a2 - 3) = v246;
                  *((_QWORD*)a2 - 2) = v245;
                  *((_QWORD*)a2 - 1) = v244;
                  v197 = (__int64)(v6 - v251 + 32) >> 5;
                  v191 = v197 < 2;
                  v198 = v197 - 2;
                  if (!v191) {
                    v199 = v198 >> 1;
                    v200 = v251 + 32 * (v198 >> 1);
                    v201 = (*(_BYTE*)(v200 + 8) & 1) != 0
                               ? *(_QWORD*)(v200 + 24)
                               : v200 + 9;
                    v202 = GameRoutine_ffd180(*(_DWORD*)v200, v201);
                    v203 = (*(_BYTE*)(v6 + 8) & 1) != 0 ? *(_QWORD*)(v6 + 24)
                                                        : v6 + 9;
                    result = GameRoutine_ffd180(*(_DWORD*)v6, v203);
                    if (v202 > result) {
                      v260 = *(_DWORD*)v6;
                      v205 = *(_QWORD*)(v182 + 8);
                      v204 = *(char**)(v182 + 16);
                      v262_.v262 = *(_QWORD*)v182;
                      v262_.v263 = v205;
                      v262_.v264 = v204;
                      *(_QWORD*)(v182 + 8) = 0;
                      *(_QWORD*)(v182 + 16) = 0;
                      *(_QWORD*)v182 = 0;
                      do {
                        v206 = v200;
                        *(_DWORD*)v6 = *(_DWORD*)v200;
                        if ((*(_BYTE*)(v6 + 8) & 1) != 0 &&
                            *(_QWORD*)(v6 + 24) != 0) {
                          v207 = 128;
                          if (*(_QWORD*)(*(_QWORD*)
                                             fw_memory_g_heap_manager_ptr +
                                         200LL) == 0) {
                            v207 = 56;
                          }
                          result = nn_mem_StandardAllocator_Free(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr + v207);
                        }
                        v208 = *(_QWORD*)(v200 + 16);
                        v209 = *(_QWORD*)(v200 + 24);
                        *(_QWORD*)(v6 + 8) = *(_QWORD*)(v200 + 8);
                        *(_QWORD*)(v6 + 16) = v208;
                        *(_QWORD*)(v6 + 24) = v209;
                        *(_WORD*)(v200 + 8) = 0;
                        if (v199 == 0) {
                          *(_DWORD*)v200 = v260;
                          goto LABEL_302;
                        }
                        v199 = (v199 - 1) >> 1;
                        v200 = v251 + 32 * v199;
                        if ((*(_BYTE*)(v200 + 8) & 1) != 0) {
                          v210 = *(_QWORD*)(v200 + 24);
                        }
                        else {
                          v210 = v200 + 9;
                        }
                        v211 = GameRoutine_ffd180(*(_DWORD*)v200, v210);
                        if ((v262_.v262 & 1) != 0) {
                          v212 = v262_.v264;
                        }
                        else {
                          v212 = (char*)&v262_.v262 + 1;
                        }
                        result = GameRoutine_ffd180(v260, (__int64)v212);
                        v6 = v206;
                      } while (v211 > result);
                      v213 = *(_BYTE*)(v206 + 8);
                      *(_DWORD*)v206 = v260;
                      if ((v213 & 1) != 0 && *(_QWORD*)(v206 + 24) != 0) {
                        v214 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v214 = 56;
                        }
                        result = nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v214);
                      }
                    LABEL_302:
                      v215 = v262_.v262;
                      v216 = v262_.v264;
                      *(_QWORD*)(v206 + 16) = v262_.v263;
                      *(_QWORD*)(v206 + 24) = v216;
                      *(_QWORD*)(v206 + 8) = v215;
                    }
                  }
                }
                v6 = v251;
                a2 -= 8;
                v191 = v9-- <= 2;
              } while (!v191);
            }
            return result;
          }
          v10 = v8 + 32 * ((unsigned __int64)v9 >> 1);
          if ((unsigned __int64)v9 < 0x81) {
            break;
          }
          GameRoutine_fd6b40(
              (unsigned int*)v6,
              (unsigned int*)(v6 + 32 * ((unsigned __int64)v9 >> 1)), v248);
          GameRoutine_fd6b40((unsigned int*)(v6 + 32),
                             (unsigned int*)(v10 - 32), (unsigned int*)a2 - 16);
          GameRoutine_fd6b40((unsigned int*)(v6 + 64),
                             (unsigned int*)(v10 + 32), (unsigned int*)a2 - 24);
          GameRoutine_fd6b40(
              (unsigned int*)(v10 - 32),
              (unsigned int*)(v6 + 32 * ((unsigned __int64)v9 >> 1)),
              (unsigned int*)(v10 + 32));
          v11 = *(_DWORD*)v6;
          *(_DWORD*)v6 = *(_DWORD*)v10;
          *(_DWORD*)v10 = v11;
          v12 = *(_QWORD*)(v6 + 8);
          v262_.v262 = *(_QWORD*)(v6 + 16);
          v262_.v263 = *(_QWORD*)(v6 + 24);
          v14 = *(_QWORD*)(v10 + 16);
          v13 = *(_QWORD*)(v10 + 24);
          *(_QWORD*)(v6 + 8) = *(_QWORD*)(v10 + 8);
          *(_QWORD*)(v6 + 16) = v14;
          *(_QWORD*)(v6 + 24) = v13;
          v15 = v262_.v262;
          v16 = v262_.v263;
          *(_QWORD*)(v10 + 8) = v12;
          *(_QWORD*)(v10 + 16) = v15;
          *(_QWORD*)(v10 + 24) = v16;
          --a3;
          if ((a4 & 1) != 0) {
            goto LABEL_23;
          }
        LABEL_16:
          if ((*(_BYTE*)(v6 - 24) & 1) != 0) {
            v17 = *(_QWORD*)(v6 - 8);
          }
          else {
            v17 = v6 - 23;
          }
          v18 = GameRoutine_ffd180(*(_DWORD*)(v6 - 32), v17);
          if ((*(_BYTE*)(v6 + 8) & 1) != 0) {
            v19 = *(_QWORD*)(v6 + 24);
          }
          else {
            v19 = v6 + 9;
          }
          if (v18 > GameRoutine_ffd180(*(_DWORD*)v6, v19)) {
            goto LABEL_23;
          }
          v63 = *(_QWORD*)(v6 + 16);
          v62 = *(char**)(v6 + 24);
          v64 = *(_DWORD*)v6;
          v262_.v262 = *(_QWORD*)(v6 + 8);
          v262_.v263 = v63;
          v262_.v264 = v62;
          *(_QWORD*)(v6 + 16) = 0;
          *(_QWORD*)(v6 + 24) = 0;
          *(_QWORD*)(v6 + 8) = 0;
          v257 = v64;
          if ((v262_.v262 & 1) != 0) {
            v65 = v262_.v264;
          }
          else {
            v65 = (char*)&v262_.v262 + 1;
          }
          v66 = GameRoutine_ffd180(v64, (__int64)v65);
          if ((*(_BYTE*)(v7 - 24) & 1) != 0) {
            v67 = *(_QWORD*)(v7 - 8);
          }
          else {
            v67 = (__int64)a2 - 23;
          }
          result = GameRoutine_ffd180(*(_DWORD*)(v7 - 32), v67);
          if (v66 <= result) {
            v73 = v6 + 32;
            do {
              v8 = v73;
              if (v73 >= v7) {
                break;
              }
              v74 = (v262_.v262 & 1) != 0 ? v262_.v264 : (char*)&v262_.v262 + 1;
              v75 = GameRoutine_ffd180(v257, (__int64)v74);
              v76 = (*(_BYTE*)(v8 + 8) & 1) != 0 ? *(_QWORD*)(v8 + 24) : v8 + 9;
              result = GameRoutine_ffd180(*(_DWORD*)v8, v76);
              v73 = v8 + 32;
            } while (v75 <= result);
          }
          else {
            v8 = v6;
            do {
              if ((v262_.v262 & 1) != 0) {
                v68 = v262_.v264;
              }
              else {
                v68 = (char*)&v262_.v262 + 1;
              }
              v69 = GameRoutine_ffd180(v257, (__int64)v68);
              v71 = *(_DWORD*)(v8 + 32);
              v8 += 32LL;
              v70 = v71;
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v72 = *(_QWORD*)(v8 + 24);
              }
              else {
                v72 = v8 + 9;
              }
              result = GameRoutine_ffd180(v70, v72);
            } while (v69 <= result);
          }
          v77 = v7;
          if (v8 < v7) {
            v77 = v7;
            do {
              if ((v262_.v262 & 1) != 0) {
                v78 = v262_.v264;
              }
              else {
                v78 = (char*)&v262_.v262 + 1;
              }
              v79 = GameRoutine_ffd180(v257, (__int64)v78);
              v81 = *(_DWORD*)(v77 - 32);
              v77 -= 32LL;
              v80 = v81;
              if ((*(_BYTE*)(v77 + 8) & 1) != 0) {
                v82 = *(_QWORD*)(v77 + 24);
              }
              else {
                v82 = v77 + 9;
              }
              result = GameRoutine_ffd180(v80, v82);
            } while (v79 > result);
          }
          while (v8 < v77) {
            v83 = *(_DWORD*)v8;
            *(_DWORD*)v8 = *(_DWORD*)v77;
            *(_DWORD*)v77 = v83;
            v84 = *(_QWORD*)(v8 + 8);
            v253 = *(_QWORD*)(v8 + 16);
            v255 = *(_QWORD*)(v8 + 24);
            v86 = *(_QWORD*)(v77 + 16);
            v85 = *(_QWORD*)(v77 + 24);
            *(_QWORD*)(v8 + 8) = *(_QWORD*)(v77 + 8);
            *(_QWORD*)(v8 + 16) = v86;
            *(_QWORD*)(v8 + 24) = v85;
            *(_QWORD*)(v77 + 8) = v84;
            *(_QWORD*)(v77 + 16) = v253;
            *(_QWORD*)(v77 + 24) = v255;
            do {
              if ((v262_.v262 & 1) != 0) {
                v87 = v262_.v264;
              }
              else {
                v87 = (char*)&v262_.v262 + 1;
              }
              v88 = GameRoutine_ffd180(v257, (__int64)v87);
              v90 = *(_DWORD*)(v8 + 32);
              v8 += 32LL;
              v89 = v90;
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v91 = *(_QWORD*)(v8 + 24);
              }
              else {
                v91 = v8 + 9;
              }
            } while (v88 <= GameRoutine_ffd180(v89, v91));
            do {
              if ((v262_.v262 & 1) != 0) {
                v92 = v262_.v264;
              }
              else {
                v92 = (char*)&v262_.v262 + 1;
              }
              v93 = GameRoutine_ffd180(v257, (__int64)v92);
              v95 = *(_DWORD*)(v77 - 32);
              v77 -= 32LL;
              v94 = v95;
              if ((*(_BYTE*)(v77 + 8) & 1) != 0) {
                v96 = *(_QWORD*)(v77 + 24);
              }
              else {
                v96 = v77 + 9;
              }
              result = GameRoutine_ffd180(v94, v96);
            } while (v93 > result);
          }
          if (v6 == v8 - 32) {
            v99 = (_QWORD*)(v8 - 24);
            v101 = *(_BYTE*)(v8 - 24);
            *(_DWORD*)(v8 - 32) = v257;
            if ((v101 & 1) != 0 && *(_QWORD*)(v8 - 8) != 0) {
              v102 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v102 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v102);
            }
          }
          else {
            *(_DWORD*)v6 = *(_DWORD*)(v8 - 32);
            if ((*(_BYTE*)(v6 + 8) & 1) != 0 && *(_QWORD*)(v6 + 24) != 0) {
              v97 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v97 = 56;
              }
              result = nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v97);
            }
            v98 = *(_QWORD*)(v8 - 16);
            v99 = (_QWORD*)(v8 - 24);
            v100 = *(_QWORD*)(v8 - 8);
            *(_QWORD*)(v6 + 8) = *(_QWORD*)(v8 - 24);
            *(_QWORD*)(v6 + 16) = v98;
            *(_QWORD*)(v6 + 24) = v100;
            *(_WORD*)(v8 - 24) = 0;
            *(_DWORD*)(v8 - 32) = v257;
          }
          a4 = 0;
          v103 = v262_.v262;
          v104 = v262_.v264;
          v99[1] = v262_.v263;
          v99[2] = v104;
          *v99 = v103;
        }
        GameRoutine_fd6b40(
            (unsigned int*)(v6 + 32 * ((unsigned __int64)v9 >> 1)),
            (unsigned int*)v6, v248);
        --a3;
        if ((a4 & 1) == 0) {
          goto LABEL_16;
        }
      LABEL_23:
        v20 = *(_QWORD*)(v6 + 16);
        v21 = 0;
        v256 = *(_DWORD*)v6;
        v22 = *(_QWORD*)(v6 + 8);
        v262_.v264 = *(char**)(v6 + 24);
        v262_.v262 = v22;
        v262_.v263 = v20;
        *(_QWORD*)(v6 + 16) = 0;
        *(_QWORD*)(v6 + 24) = 0;
        *(_QWORD*)(v6 + 8) = 0;
        do {
          if ((*(_BYTE*)(v6 + v21 + 40) & 1) != 0) {
            v23 = *(_QWORD*)(v6 + v21 + 56);
          }
          else {
            v23 = v6 + v21 + 41;
          }
          v24 = GameRoutine_ffd180(*(_DWORD*)(v6 + v21 + 32), v23);
          if ((v262_.v262 & 1) != 0) {
            v25 = v262_.v264;
          }
          else {
            v25 = (char*)&v262_.v262 + 1;
          }
          v21 += 32;
        } while (v24 > GameRoutine_ffd180(v256, (__int64)v25));
        v26 = v6 + v21;
        if (v21 == 32) {
          v7 = (unsigned __int64)a2;
          do {
            if (v26 >= v7) {
              break;
            }
            v33 = *(_DWORD*)(v7 - 32);
            v7 -= 32LL;
            v32 = v33;
            v34 = (*(_BYTE*)(v7 + 8) & 1) != 0 ? *(_QWORD*)(v7 + 24) : v7 + 9;
            v35 = GameRoutine_ffd180(v32, v34);
            v36 = (v262_.v262 & 1) != 0 ? v262_.v264 : (char*)&v262_.v262 + 1;
          } while (v35 <= GameRoutine_ffd180(v256, (__int64)v36));
        }
        else {
          do {
            v28 = *(_DWORD*)(v7 - 32);
            v7 -= 32LL;
            v27 = v28;
            if ((*(_BYTE*)(v7 + 8) & 1) != 0) {
              v29 = *(_QWORD*)(v7 + 24);
            }
            else {
              v29 = v7 + 9;
            }
            v30 = GameRoutine_ffd180(v27, v29);
            if ((v262_.v262 & 1) != 0) {
              v31 = v262_.v264;
            }
            else {
              v31 = (char*)&v262_.v262 + 1;
            }
          } while (v30 <= GameRoutine_ffd180(v256, (__int64)v31));
        }
        v8 = v6 + v21;
        if (v26 < v7) {
          v37 = v7;
          do {
            v38 = *(_DWORD*)v8;
            *(_DWORD*)v8 = *(_DWORD*)v37;
            *(_DWORD*)v37 = v38;
            v39 = *(_QWORD*)(v8 + 8);
            v252 = *(_QWORD*)(v8 + 16);
            v254 = *(_QWORD*)(v8 + 24);
            v41 = *(_QWORD*)(v37 + 16);
            v40 = *(_QWORD*)(v37 + 24);
            *(_QWORD*)(v8 + 8) = *(_QWORD*)(v37 + 8);
            *(_QWORD*)(v8 + 16) = v41;
            *(_QWORD*)(v8 + 24) = v40;
            *(_QWORD*)(v37 + 8) = v39;
            *(_QWORD*)(v37 + 16) = v252;
            *(_QWORD*)(v37 + 24) = v254;
            do {
              v43 = *(_DWORD*)(v8 + 32);
              v8 += 32LL;
              v42 = v43;
              if ((*(_BYTE*)(v8 + 8) & 1) != 0) {
                v44 = *(_QWORD*)(v8 + 24);
              }
              else {
                v44 = v8 + 9;
              }
              v45 = GameRoutine_ffd180(v42, v44);
              if ((v262_.v262 & 1) != 0) {
                v46 = v262_.v264;
              }
              else {
                v46 = (char*)&v262_.v262 + 1;
              }
            } while (v45 > GameRoutine_ffd180(v256, (__int64)v46));
            do {
              v48 = *(_DWORD*)(v37 - 32);
              v37 -= 32LL;
              v47 = v48;
              if ((*(_BYTE*)(v37 + 8) & 1) != 0) {
                v49 = *(_QWORD*)(v37 + 24);
              }
              else {
                v49 = v37 + 9;
              }
              v50 = GameRoutine_ffd180(v47, v49);
              if ((v262_.v262 & 1) != 0) {
                v51 = v262_.v264;
              }
              else {
                v51 = (char*)&v262_.v262 + 1;
              }
            } while (v50 <= GameRoutine_ffd180(v256, (__int64)v51));
          } while (v8 < v37);
        }
        if (v6 == v8 - 32) {
          v54 = (_QWORD*)(v8 - 24);
          v56 = *(_BYTE*)(v8 - 24);
          *(_DWORD*)(v8 - 32) = v256;
          if ((v56 & 1) != 0 && *(_QWORD*)(v8 - 8) != 0) {
            v57 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v57 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v57);
          }
        }
        else {
          *(_DWORD*)v6 = *(_DWORD*)(v8 - 32);
          if ((*(_BYTE*)(v6 + 8) & 1) != 0 && *(_QWORD*)(v6 + 24) != 0) {
            v52 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v52 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v52);
          }
          v53 = *(_QWORD*)(v8 - 16);
          v54 = (_QWORD*)(v8 - 24);
          v55 = *(_QWORD*)(v8 - 8);
          *(_QWORD*)(v6 + 8) = *(_QWORD*)(v8 - 24);
          *(_QWORD*)(v6 + 16) = v53;
          *(_QWORD*)(v6 + 24) = v55;
          *(_WORD*)(v8 - 24) = 0;
          *(_DWORD*)(v8 - 32) = v256;
        }
        v58 = v262_.v262;
        v59 = v262_.v264;
        v54[1] = v262_.v263;
        v54[2] = v59;
        *v54 = v58;
        v60 = v26 >= v7;
        v7 = (unsigned __int64)a2;
        if (v60) {
          break;
        }
      LABEL_83:
        result = game_fd58e0(v6, v8 - 32, a3, a4 & 1);
        a4 = 0;
      }
      v61 = GameRoutine_fd71c0(v6, v8 - 32);
      result = GameRoutine_fd71c0(v8, (__int64)a2);
      if ((result & 1) != 0) {
        break;
      }
      if (!v61) {
        goto LABEL_83;
      }
    }
    a2 = (int*)(v8 - 32);
    if (!v61) {
      continue;
    }
    return result;
  }
}

__int64 game_fdccb0(__int64 a1)
{
  _QWORD* v2;
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
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Sim_m01");
  if (*GameData_212d460[0] == 0) {
    v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32("talk::Seq");
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
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v2 + v9);
}

void game_fdce40(__int64 a1)
{
  _QWORD* v2;
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
    v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v3 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Sim_m03");
    if (GameData_21ec7b8 == 0) {
      v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
      GameRoutine_1130770(v4, v3, 0);
      v5 = *(_QWORD*)(a1 + 40);
      if (v5 != 0) {
        *(_QWORD*)(v5 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "talk::Seq";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = game_HashString32_alt1();
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
    if (*(_QWORD*)(*v2 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v2 + v8);
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

__n128 game_fdd0d0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_Sim_m02");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32_alt1();
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
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(*v2 + v8);
}

__n128 game_fdd2c0(__int64 a1)
{
  _QWORD* v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  _BYTE* v6;
  char v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (char*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  strcpy(v3, "MID_LGV_Scout_Negotiation_SP_NoMoney_Sim_m01");
  if (GameData_21ec7b8 == 0) {
    v4 = fw_memory_HeapManager_Allocate(*v2, 1376, 16, 0);
    GameRoutine_1130770(v4, v3, 0);
    v5 = *(_QWORD*)(a1 + 40);
    if (v5 != 0) {
      *(_QWORD*)(v5 + 48) = v4;
      *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v4;
    *(_QWORD*)(v4 + 24) = "talk::Seq";
    *(_QWORD*)(v4 + 32) = a1;
    *(_DWORD*)(v4 + 140) = game_HashString32_alt1();
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
  if (*(_QWORD*)(*v2 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(*v2 + v8);
}

__attribute__((swiftcall)) void game_febfc0(PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v3 = GameData_21ca010;
  v4 = *(_QWORD*)(GameData_21ca010 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21ca010 + 72) - v4) >> 3) >=
      1) {
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    do {
      v8 = *(_QWORD*)(v4 + 8 * v7);
      v9 = *(unsigned __int16*)(v8 + 32);
      if (*(_WORD*)(v8 + 32) != 0) {
        v10 = 8;
        v23 = v7;
        do {
          v11 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + v10);
          v12 = a2[2];
          if ((unsigned __int64)v5 < v12) {
            *(_QWORD*)v5 = v11;
            v5 += 8;
          }
          else {
            v13 = &v5[-v6];
            v14 = (__int64)&v5[-v6] >> 3;
            v15 = v14 + 1;
            if ((unsigned __int64)(v14 + 1) >> 61 != 0) {
              *a2 = v6;
              GameRoutine_6e5c60(a1);
            }
            v16 = v12 - v6;
            if (v16 >> 2 > v15) {
              v15 = v16 >> 2;
            }
            if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF8LL) {
              v17 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v17 = v15;
            }
            if (v17 != 0) {
              if (v17 >> 61 != 0) {
                *a2 = v6;
                GameRoutine_60a210(a1);
              }
              v18 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
            }
            else {
              v18 = 0;
            }
            v19 = v18 + 8 * v17;
            v20 = &v5[-v6];
            v21 = (__int64)&v13[v18 + -8 * v14];
            *(_QWORD*)&v13[v18] = v11;
            v5 = &v13[v18 + 8];
            a1 = memcpy(v21, v6, v20);
            a2[1] = (__int64)v5;
            a2[2] = v19;
            if (v6 != 0) {
              v22 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v22 = 56;
              }
              nn_mem_StandardAllocator_Free_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v22);
            }
            v6 = v21;
          }
          --v9;
          v10 += 16;
          a2[1] = (__int64)v5;
        } while (v9 != 0);
        v7 = v23;
        v3 = GameData_21ca010;
      }
      *a2 = v6;
      ++v7;
      v4 = *(_QWORD*)(v3 + 64);
    } while (v7 < (int)((unsigned __int64)(*(_QWORD*)(v3 + 72) - v4) >> 3));
  }
}

__int64 game_ff0ea0(int8x16_t* a1, float32x4_t* a2, float32x4_t* a3,
                    __int64* a4, float a5)
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
  __int64 v25;
  __int64 v26;
  float v27;
  void (***v28)(_QWORD, long double);
  float v29;
  unsigned int v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v42;
  int8x16_t v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int* v55;
  int v56;
  __int64 v57;
  signed __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  int8x16_t v71;
  int v72;
  unsigned int v73;
  _QWORD* v74;
  int v75;
  int v76;
  void (***v77)(_QWORD, long double);
  void (***v78)(_QWORD, long double);
  float v79;
  float32x4_t v80;
  float32x4_t v81;
  float32x4_t v82;
  float32x4_t v83;
  unsigned __int32 v84;
  unsigned __int32 v85;
  unsigned __int32 v86;
  __int64 v87;
  int v90;
  float v91;
  float32x4_t* v92;
  _QWORD* v93;
  float v94;
  unsigned int v95;
  __int64* v96;
  int8x16_t v97;
  float32x4_t v98;
  float32x4_t v99;
  float v100;
  float32x4_t v101;
  __int64 v102;
  unsigned __int64 v103;
  __int64 v104;
  __int64 (**v105)();
  __int64 (**v106)();
  void (***v107)(_QWORD, long double);
  void (***v108)(_QWORD, long double);
  _QWORD v109[2];
  float v110;
  __int128 v111;
  __int128 v112;
  __int128 v113;
  float32x4_t v114;
  __int128 v115;
  unsigned __int64 v116;
  unsigned __int64 v117;
  char v118;
  char v119;
  int8x16_t v120[2];

  nn_os_LockMutex(&GameData_2167780);
  v9 = (atomic_uchar*)GameData_212c840;
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212c840,
                                  memory_order_acquire);
  v11 = GameData_212c838;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
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
    GameRoutine_14a0820(v11);
    GameRoutine_2b0(GameData_212c848[0], v11, &GameData_1f50948);
    __cxa_guard_release(GameData_212c840);
  }
  v93 = *(_QWORD**)(*v11 + 32);
  (*(void (**)(_QWORD, _QWORD, _QWORD))(*(_QWORD*)*v93 + 936LL))(*v93, 0, 0);
  v12 = LANES128(*(a2)).n128_u64[1];
  v13 = vsubq_f32(*a3, *a2);
  LANES128(v114).n128_u64[0] = LANES128(*(a2)).n128_u64[0];
  LANES128(v114).n128_u64[1] = v12;
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
    v90 = 40;
    *(float*)&v18 = 0x1.47ae140000000p-7;
  }
  else if (v14 == 1) {
    v17 = 3;
    v90 = 10;
    *(float*)&v18 = 0x1.99999a0000000p-4;
  }
  else {
    v17 = 1;
    v90 = 5;
    *(float*)&v18 = 0x1.99999a0000000p-3;
  }
  v91 = *(float*)&v18;
  v108 = nullptr;
  v109[0] = 0;
  v109[1] = 0;
  v110 = 0.0;
  v111 = (__typeof__(v111)){0};
  v112 = (__typeof__(v112)){0};
  v113 = (__typeof__(v113)){0};
  v105 = game_zview_ExtrusionEntryShape_vtable;
  v106 = game_zview_ExtrusionEntryShape_Result_vtable;
  v107 = nullptr;
  LODWORD(v94) = LANES64_OF(vsqrt_f32(v16)).n64_u32[0];
  if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
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
    GameRoutine_14a0820(v11);
    GameRoutine_2b0(GameData_212c848[0], v11, &GameData_1f50948);
    __cxa_guard_release(GameData_212c840);
  }
  v19 = *v11;
  v20 = *((float*)a4 + 2);
  v92 = a2;
  LODWORD(v116) = 0;
  *(float*)&v117 = a5;
  v21 = *(_QWORD*)(v19 + 24);
  v22 = atomic_load_explicit(v9, memory_order_acquire);
  v23 = (float)(0x1.cccccc0000000p+0 - v20) + (float)(a5 * -2.0);
  if (v23 < 0.0) {
    v23 = 0.0;
  }
  v24 = v23 * 0.5;
  if ((v22 & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
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
    GameRoutine_14a0820(v11);
    GameRoutine_2b0(GameData_212c848[0], v11, &GameData_1f50948);
    __cxa_guard_release(GameData_212c840);
  }
  v25 = v11[4];
  LANES128(v120[0]).n128_u8[0] = 11;
  v102 = v25;
  v26 = (*(__int64 (**)(__int64, unsigned __int64*, __int64*, __int64, __int64,
                        int8x16_t*))(*(_QWORD*)v21 + 248LL))(v21, &v116, &v102,
                                                             1, 1, v120);
  v27 = *((float*)a4 + 2);
  v103 = __PAIR64__(LODWORD(v24), LODWORD(a5));
  v28 = (void (***)(_QWORD, long double))v26;
  LODWORD(v102) = 2;
  if ((atomic_load_explicit(v9, memory_order_acquire) & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212c840) != 0) {
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
    GameRoutine_14a0820(v11);
    GameRoutine_2b0(GameData_212c848[0], v11, &GameData_1f50948);
    __cxa_guard_release(GameData_212c840);
  }
  LANES128(v120[0]).n128_u8[0] = 11;
  v29 = v24 + (float)(a5 + v27);
  v30 = 1;
  v31 = (float)(a5 + v20) + 0x1.47ae140000000p-7;
  v116 = v11[4];
  if ((float)((float)(0x1.cccccc0000000p+0 - a5) + -0x1.47ae140000000p-7) >=
      v31) {
    v32 = (float)(0x1.cccccc0000000p+0 - a5) + -0x1.47ae140000000p-7;
  }
  else {
    v32 = (float)(a5 + v20) + 0x1.47ae140000000p-7;
  }
  v33 = (*(__int64 (**)(__int64, __int64*, unsigned __int64*, __int64, __int64,
                        int8x16_t*))(*(_QWORD*)v21 + 248LL))(v21, &v102, &v116,
                                                             1, 1, v120);
  v115 = GameData_1a82980;
  math_Mtx43_MakeRotation((void*)(&v116), &v115);
  GameRoutine_624bc0_alt1((void*)(v120), &v116);
  LODWORD(v111) = 0;
  *((float*)&v111 + 1) = v31;
  LODWORD(v112) = 0;
  *((float*)&v112 + 1) = v32;
  LODWORD(v113) = 0;
  *((float*)&v113 + 1) = v29;
  v107 = v28;
  v108 = (void (***)(_QWORD, long double))v33;
  v110 = v24;
  v109[0] = LANES128(v120[0]).n128_u64[0];
  v109[1] = LANES128_OF(vextq_s8(v120[0], v120[0], 8u)).n128_u64[0];
  v111 = (unsigned __int64)v111;
  v112 = (unsigned __int64)v112;
  v113 = (unsigned __int64)v113;
  v34 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       640, 16, 0);
  v35 = a5 + v24;
  v36 = (float)v17;
  v37 = v34 + 640;
  v38 = v34;
  v102 = v34;
  v103 = v34;
  v39 = v34;
  v96 = a4;
  v95 = v17;
  v104 = v34 + 640;
  v100 = (float)(v94 + (float)(v35 * 2.0)) + 0x1.0000000000000p+0;
  LODWORD(v40) = 0;
  *((float*)&v40 + 1) = *((float*)a4 + 2) + 0x1.cccccc0000000p-1;
  v98 = COERCE_AS(float32x4_t, v40);
  do {
    v42 = *a4;
    v120[0] = vaddq_f32(v98, v114);
    collision_672120((void*)(&v116), v120, v42,
                     v100 * (float)((float)v30 / v36));
    if (v119 == 1) {
      v44 = v116;
      v45 = v117;
      if (v116 != v117) {
        do {
          v46 = *(_QWORD*)(v44 + 8);
          if (v46 != 0) {
            if (v38 == v39) {
            LABEL_37:
              v49 = *(_DWORD*)(v44 + 32);
              v48 = *(_DWORD*)(v44 + 36);
              v50 = *(_DWORD*)(v44 + 40);
              v52 = *(_DWORD*)(v44 + 16);
              v51 = *(_DWORD*)(v44 + 20);
              v54 = *(_DWORD*)(v44 + 24);
              v53 = *(_DWORD*)(v44 + 28);
              v55 = (int*)(*(__int64 (**)(__int64))(*(_QWORD*)v46 + 80LL))(v46);
              v56 = *v55;
              v57 = *(_QWORD*)(v44 + 8);
              if (v39 < v37) {
                *(_DWORD*)(v39 + 16) = v49;
                *(_DWORD*)(v39 + 20) = v48;
                *(_DWORD*)(v39 + 24) = v50;
                *(_DWORD*)v39 = v52;
                *(_DWORD*)(v39 + 4) = v51;
                *(_DWORD*)(v39 + 8) = v54;
                *(_DWORD*)(v39 + 12) = v53;
                *(_DWORD*)(v39 + 28) = v56;
                *(_QWORD*)(v39 + 32) = v57;
                v39 += 40LL;
              }
              else {
                v58 = v39 - v38;
                v59 = 1 - 0x3333333333333333LL * ((__int64)(v39 - v38) >> 3);
                if (v59 > 0x666666666666666LL) {
                  GameRoutine_ff1e40();
                }
                if (0x999999999999999ALL * ((__int64)(v37 - v38) >> 3) > v59) {
                  v59 = 0x999999999999999ALL * ((__int64)(v37 - v38) >> 3);
                }
                if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v37 - v38) >> 3) >=
                    0x333333333333333LL) {
                  v59 = 0x666666666666666LL;
                }
                if (v59 > 0x666666666666666LL) {
                  GameRoutine_60a210(v55);
                }
                v60 = 5 * v59;
                v61 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v59, 16, 0);
                v62 = v61 + v58;
                *(_DWORD*)(v62 + 16) = v49;
                *(_DWORD*)(v62 + 20) = v48;
                *(_DWORD*)(v62 + 24) = v50;
                *(_DWORD*)v62 = v52;
                *(_DWORD*)(v62 + 4) = v51;
                *(_DWORD*)(v62 + 8) = v54;
                *(_DWORD*)(v62 + 12) = v53;
                *(_DWORD*)(v62 + 28) = v56;
                *(_QWORD*)(v62 + 32) = v57;
                v63 = v58 / -40;
                if (v38 != v39) {
                  v64 = v38;
                  v65 = v61 + v39 + 40 * v63 - v38 + 16;
                  do {
                    *(_DWORD*)v65 = *(_DWORD*)(v64 + 16);
                    *(_DWORD*)(v65 + 4) = *(_DWORD*)(v64 + 20);
                    *(_DWORD*)(v65 + 8) = *(_DWORD*)(v64 + 24);
                    *(_DWORD*)(v65 - 16) = *(_DWORD*)v64;
                    *(_DWORD*)(v65 - 12) = *(_DWORD*)(v64 + 4);
                    *(_DWORD*)(v65 - 8) = *(_DWORD*)(v64 + 8);
                    LANES128(v43).n128_u32[0] = *(_DWORD*)(v64 + 12);
                    *(_DWORD*)(v65 - 4) = LANES128(v43).n128_u32[0];
                    v66 = *(_QWORD*)(v64 + 28);
                    v67 = *(_DWORD*)(v64 + 36);
                    v64 += 40;
                    *(_DWORD*)(v65 + 20) = v67;
                    *(_QWORD*)(v65 + 12) = v66;
                    v65 += 40;
                  } while (v64 != v39);
                }
                v37 = v61 + 8 * v60;
                v39 = v62 + 40;
                v68 = v62 + 40 * v63;
                v104 = v37;
                v102 = v68;
                v103 = v62 + 40;
                if (v38 != 0) {
                  v69 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v69 = 56;
                  }
                  v43 = nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v69);
                }
                v38 = v68;
              }
              v103 = v39;
            }
            else {
              v47 = v38;
              while (1) {
                if (*(_QWORD*)(v47 + 32) == v46 &&
                    *(float*)(v47 + 16) == *(float*)(v44 + 32) &&
                    *(float*)(v47 + 20) == *(float*)(v44 + 36) &&
                    *(float*)(v47 + 24) == *(float*)(v44 + 40) &&
                    *(float*)v47 == *(float*)(v44 + 16) &&
                    *(float*)(v47 + 4) == *(float*)(v44 + 20) &&
                    *(float*)(v47 + 8) == *(float*)(v44 + 24)) {
                  LANES128(v43).n128_u32[0] = *(_DWORD*)(v47 + 12);
                  if (LANES128(v43).n128_f32[0] == *(float*)(v44 + 28)) {
                    break;
                  }
                }
                v47 += 40;
                if (v47 == v39) {
                  goto LABEL_37;
                }
              }
            }
          }
          v44 += 48LL;
        } while (v44 != v45);
        if (v119 != 1) {
          a4 = v96;
          v17 = v95;
          continue;
        }
        v44 = v116;
      }
      a4 = v96;
      v17 = v95;
      if (v44 != 0) {
        v117 = v44;
        v70 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v70 = 56;
        }
        v43 = nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v70);
      }
    }
  } while (v30++ != v17);
  if (v39 == v38) {
    v74 = v93;
    v73 = 0;
    if (v38 == 0) {
      goto LABEL_84;
    }
    goto LABEL_81;
  }
  v43 = vsubq_f32(*a3, *v92);
  v71 = vmulq_f32(v43, v43);
  LANES128(v71).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v71, v71, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
          .n64_u64[0];
  LANES128(v71).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v71).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v71).n128_f32[0] == 0.0) {
    game_ff1940_alt1(&v116, &v102, &v114, v107, &v111, v108, &v113, v109, v91,
                     LANES128(v71).n128_f64[0]);
    v74 = v93;
    if (v118 != 1) {
      goto LABEL_89;
    }
    v84 = v117;
    LANES128(v114).n128_u64[0] = v116;
    v85 = HIDWORD(v116);
    LANES128(v82).n128_u32[0] = v116;
  LABEL_76:
    v86 = v84;
  LABEL_79:
    v73 = 1;
    LANES128(*(a1)).n128_u32[0] = LANES128(v82).n128_u32[0];
    LANES128(*(a1)).n128_u32[1] = v85;
    v43 = *a1;
    LANES128(v43).n128_u64[1] = v86;
    *a1 = v43;
  LABEL_80:
    if (v38 == 0) {
      goto LABEL_84;
    }
    goto LABEL_81;
  }
  v72 = v90;
  v73 = 0;
  v74 = v93;
  v75 = vcvtps_s32_f32(v94 / v91);
  if (v90 >= v75) {
    v72 = v75;
  }
  if (v75 < 1) {
    v76 = 1;
  }
  else {
    v76 = v72;
  }
  if (v94 <= 0.0) {
    goto LABEL_80;
  }
  LANES128(v71).n128_u64[1] = LANES128(v71).n128_u64[0];
  v77 = v107;
  v78 = v108;
  v79 = 0.0;
  v80 = vrsqrteq_f32(v71);
  v81 = vmulq_f32(v80, vrsqrtsq_f32(v80, vmulq_f32(v71, v80)));
  v82 = v114;
  v43 = vmulq_f32(v43, vmulq_f32(v81, vrsqrtsq_f32(v81, vmulq_f32(v71, v81))));
  v83 = vbicq_s8(v43, vceqzq_f32(v71));
  LANES128(v43).n128_f32[0] = v94 / (float)v76;
  v97 = v43;
  v99 = vmulq_n_f32(v83, LANES128(v43).n128_f32[0]);
  do {
    while (1) {
      v101 = vaddq_f32(v99, v82);
      v114 = v101;
      game_ff1940_alt1(&v116, &v102, &v114, v77, &v111, v78, &v113, v109,
                       LANES128(v43).n128_f32[0], LANES128(v99).n128_f64[0]);
      if ((v118 & 1) == 0) {
        break;
      }
      v84 = v117;
      LANES128(v43).n128_u32[0] = LANES128(v97).n128_u32[0];
      LOBYTE(v73) = 1;
      v79 = LANES128(v97).n128_f32[0] + v79;
      LANES128(v82).n128_u64[0] = v116;
      LANES128(v82).n128_u64[1] = (unsigned int)v117;
      v114 = v82;
      if (v79 >= v94) {
        v85 = HIDWORD(v116);
        goto LABEL_76;
      }
    }
    v82 = v101;
    v79 = LANES128(v97).n128_f32[0] + v79;
    v43 = v97;
  } while (v79 < v94);
  if ((v73 & 1) != 0) {
    v86 = LANES128(v101).n128_u32[2];
    v85 = LANES128(v101).n128_u32[1];
    goto LABEL_79;
  }
LABEL_89:
  v73 = 0;
  if (v38 != 0) {
  LABEL_81:
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v87 = 56;
    }
    v43 = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v87);
  }
LABEL_84:
  if (v107 != nullptr) {
    (**v107)(v107, *(long double*)&v43);
  }
  if (v108 != nullptr) {
    (**v108)(v108, *(long double*)&v43);
  }
  (*(void (**)(_QWORD, long double))(*(_QWORD*)*v74 + 944LL))(
      *v74, *(long double*)&v43);
  nn_os_UnlockMutex(&GameData_2167780);
  return v73;
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

#pragma clang fp contract(off)
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
  __int64 v17;
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
  __int64 v33;
  __int64* v34;
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
  __int64 i;
  __int64 v50;
  __int64 v51;
  __int64 j;
  int* v53;
  int* v54;
  __int64* v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  _QWORD* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v65;
  unsigned __int64 v66;
  _QWORD* v67;
  _QWORD* v68;
  unsigned __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64** v72;
  __int64* v73;
  __int64 v74;
  _QWORD* v75;
  unsigned __int8* v76;
  char* v77;
  atomic_ullong* v78;
  unsigned __int64 v83;
  char* v84;
  int v85;
  unsigned __int64 v86;
  __int64 v87;
  __int64 v88;
  bool v89;
  unsigned __int64 v90;
  __int64 v91;
  unsigned __int64 v92;
  unsigned __int64 v93;
  __int64 v94;
  __int64 v95;
  bool v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  _QWORD* v106;
  _QWORD* v107;
  unsigned __int64 v108;
  __int64 v109;
  __int64* v110;
  char* v111;
  char* v112;
  _BYTE* v113;
  unsigned __int64 v114;
  __n128 v115;
  char* v116;
  __int64* v117;
  char* v118;
  char* v119;
  unsigned __int64 v120;
  __int64 v121;
  char* v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  int v125;
  char v126;
  __int64* v127;
  __int64* v128;
  __int64 v129;
  __int64* v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  unsigned __int64 v136;
  unsigned __int64 v137;
  __int64 v138;
  _QWORD* v139;
  __int64 v140;
  char* v141;
  __int64* v142;
  char* v143;
  unsigned __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  char* v149;
  char* v150;
  __int64 v151;
  __int64 v152;
  _QWORD* v153;
  int* v154;
  __int64 v155;
  char* v156;
  int* v157;
  char* v158;
  int v159;
  char v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  _QWORD* v168;
  __int64 v169;
  __int64 v170;
  __int64 v171;
  char* v172;
  char* v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64* v177;
  __int64* v178;
  char v179;
  __int64 v180;
  __int64 v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  _QWORD* v185;
  _QWORD* v186;
  __int64* v187;
  __int64 v188;
  __int64 v189;
  __int64 v190;
  _QWORD* v191;
  unsigned __int64 v192;
  unsigned __int64 v193;
  unsigned __int64 v194;
  unsigned __int64 v195;
  char* v196;
  __int64 v197;
  __int64 v198;
  char v199;
  char v200;
  __int64* v201;
  _QWORD* v202;
  __int64* v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  __int64 v207;
  __int64 v208;
  unsigned __int64 v209;
  _QWORD* v210;
  __int64 v211;
  char* v212;
  __int64 v213;
  unsigned __int64 v214;
  __int64 v215;
  unsigned __int64 v216;
  __int64 v217;
  unsigned __int64 v218;
  char* v219;
  __int64 v220;
  __int64 v221;
  unsigned __int64 v222;
  _QWORD* v223;
  __int64** v224;
  __int64 v225;
  __int64 v226;
  __int64 v227;
  __int128 v228;
  __int64* v229;
  _QWORD* v230;
  __int64* v231;
  char* v232;
  __int64 v233;
  __int64 v234;
  __int64 v235;
  char v236;
  __int64 v237;
  char* v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  _QWORD* v243;
  __int64* v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  int v248;
  __int64* v249;
  __int64 v250;
  bool v251;
  __int64 v252;
  atomic_ullong* v253;
  __int64 v254;
  __int64 v255;
  _QWORD* v256;
  __int64 v257;
  __int64 v258;
  atomic_ullong* v259;
  atomic_ullong* v260;
  atomic_ullong* v261;
  __int64 v262;
  atomic_ullong* v263;
  unsigned __int64 v264;
  bool v265;
  unsigned __int64 v266;
  __int64* v267;
  unsigned __int64 v268;
  unsigned __int64 v269;
  bool v270;
  unsigned __int64 v271;
  unsigned __int64 v272;
  char* v273;
  unsigned __int64 v274;
  int v275;
  int v276;
  __int64* v277;
  _QWORD* v278;
  __int64 v279;
  __int64 v280;
  _QWORD* v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  __int64 v285;
  __int64* v286;
  __int64* v287;
  __int64 v288;
  _QWORD* v289;
  __int64 v290;
  __int64* v291;
  __int64 v292;
  __int64** v293;
  __int64 v294;
  __int64** v295;
  unsigned __int64 v296;
  __int64* v297;
  __int64 v298;
  __int64 v299;
  __int64 v300;
  __int64 v301;
  __int64 v302;
  unsigned __int64 v303;
  __int64 v304;
  unsigned __int64 v305;
  unsigned __int64 v306;
  __int64 v307;
  _QWORD* v308;
  __int64* v309;
  __int64 v310;
  __int64 v311;
  __int64 v312;
  __int64 v313;
  __int64* v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  unsigned __int64 v319;
  _QWORD* v320;
  __int64 v321;
  char* v322;
  __int64 v323;
  unsigned __int64 v324;
  __int64 v325;
  unsigned __int64 v326;
  __int64 v327;
  unsigned __int64 v328;
  char* v329;
  __int64 v330;
  __int64 v331;
  _QWORD* v332;
  _QWORD* v333;
  __int64 v334;
  __int64 v335;
  __int64 v336;
  unsigned __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  _QWORD* v341;
  __int64 v342;
  __int64 v343;
  __int64 v344;
  __int64 v345;
  __int64 v346;
  __int64 v347;
  __int64 v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64* v352;
  __int64 v353;
  int* v354;
  __int64 v355;
  _QWORD* v356;
  __int64* v357;
  __int64 v358;
  atomic_ullong* v359;
  __int64 v360;
  __int64 v361;
  struct {
    __int64* v362;
    __int64* v363;
  } v362_;
  __int128 v364;
  unsigned __int64 v365;
  struct {
    _BYTE v366[24];
    _BYTE* v367;
    unsigned __int8* v368;
    char* v369;
    __int64 v370;
    __int64* v371;
    char* v372;
  } v366_;
  struct {
    __int64 v373;
    unsigned __int64 v374;
    char* v375;
    __int64 v376;
  } v373_;
  struct {
    __int64* v377;
    __int64* v378;
  } v377_;
  struct {
    __int64* v379;
    char* v380;
  } v379_;
  struct {
    __int64 v381;
    unsigned __int64 v382;
    char* v383;
    __int64 v384;
  } v381_;
  struct {
    _QWORD v385[2];
    char* v386;
  } v385_;

  v2 = *a2;
  v3 = a1;
  GameData_2232008 = a1;
  v4 = *((_WORD*)a2 + 2);
  *(_DWORD*)(a1 + 72) = v2;
  v5 = (_DWORD*)(a1 + 72);
  *(_WORD*)(a1 + 76) = v4;
  if ((int*)(a1 + 72) != a2) {
    GameRoutine_d5f8e0(
        (char**)(a1 + 80), *((_QWORD*)a2 + 1), *((_QWORD*)a2 + 2),
        0xCCCCCCCCCCCCCCCDLL *
            ((__int64)(*((_QWORD*)a2 + 2) - *((_QWORD*)a2 + 1)) >> 4));
  }
  v360 = v3;
  if ((unsigned int)(*v5 - 3) > 1) {
    goto LABEL_80;
  }
  GameRoutine_d5f370(v3, *(_QWORD**)(v3 + 8));
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)v3 = v3 + 8;
  v359 = (atomic_ullong*)(v3 + 8);
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
    v11 = (__int64*)(v6 + v10 * 8);
    v12 = (__int64*)(v9 + v10 * 8);
    if ((*(_BYTE*)(v6 + v10 * 8) & 1) != 0) {
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
    v10 += 3;
  } while (v6 + v10 * 8 != v7);
  v356 = (_QWORD*)v9;
  v16 = v9;
  v358 = v9 + v10 * 8 - 24;
  while (2) {
    if ((*(_BYTE*)v16 & 1) != 0) {
      fw_text_String_CopyTerminated(&v361, *(_QWORD*)(v16 + 16),
                                    *(_QWORD*)(v16 + 8));
    }
    else {
      v17 = *(_QWORD*)(v16 + 8);
      v361 = *(_QWORD*)v16;
      v362_.v362 = (__int64*)v17;
      v362_.v363 = *(__int64**)(v16 + 16);
    }
    v18 = v359;
    v365 = 0;
    v364 = (__typeof__(v364)){0};
    v19 = *(_QWORD*)v359;
    v20 = v359;
    if (*(_QWORD*)v359 == 0) {
      goto LABEL_43;
    }
    if ((v361 & 1) != 0) {
      v21 = (char*)v362_.v363;
    }
    else {
      v21 = (char*)&v361 + 1;
    }
    if ((v361 & 1) != 0) {
      v22 = (unsigned __int64)v362_.v362;
    }
    else {
      v22 = (unsigned __int64)(unsigned __int8)v361 >> 1;
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
        v29 = memcmp(v21, v27, v28);
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
      v30 = memcmp(v27, v21, v28);
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
    v32 = v361;
    v33 = (__int64)v362_.v362;
    v361 = 0;
    v362_.v362 = nullptr;
    *v31 = 0;
    v31[1] = 0;
    v31[2] = (__int64)v18;
    v31[4] = v32;
    v31[5] = v33;
    v34 = v362_.v363;
    v35 = v364;
    v362_.v363 = nullptr;
    *(_QWORD*)&v364 = 0;
    v31[6] = (__int64)v34;
    v31[7] = v35;
    v36 = *((_QWORD*)&v364 + 1);
    v37 = v365;
    *((_QWORD*)&v364 + 1) = 0;
    v365 = 0;
    v31[8] = v36;
    v31[9] = v37;
    *(_QWORD*)v20 = v31;
    v38 = **(_QWORD**)v360;
    if (v38 != 0) {
      *(_QWORD*)v360 = v38;
      v39 = *(__int64**)v20;
    }
    else {
      v39 = v31;
    }
    fw_containers_BalanceAfterInsert(*(__int64**)(v360 + 8), v39);
    ++*(_QWORD*)(v360 + 16);
    v40 = v364;
    if ((_QWORD)v364 != 0) {
      v41 = *((_QWORD*)&v364 + 1);
      if ((_QWORD)v364 == *((_QWORD*)&v364 + 1)) {
        goto LABEL_60;
      }
      do {
        if ((*(_BYTE*)(v41 - 32) & 1) != 0 && *(_QWORD*)(v41 - 16) != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v42 = 128;
          }
          else {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v42);
        }
        v43 = *(_QWORD*)(v41 - 40);
        if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
          std___1___shared_weak_count___release_weak_alt1(v43);
        }
        v41 -= 48;
      } while (v41 != v40);
      *((_QWORD*)&v364 + 1) = v40;
      if ((_QWORD)v364 != 0) {
      LABEL_60:
        v44 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v44);
      }
    }
  LABEL_63:
    if ((v361 & 1) != 0 && v362_.v363 != nullptr) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v45 = 128;
      }
      else {
        v45 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v45);
    }
    v3 = v360;
    v24 = v358 == v16;
    v16 += 24;
    if (!v24) {
      continue;
    }
    break;
  }
  do {
    if ((v356[v10 - 3] & 1) != 0 && v356[v10 - 1] != 0) {
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
        v46 = 128;
      }
      else {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v46);
    }
    v10 -= 3;
  } while (v10 != 0);
  v47 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v47 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v47);
LABEL_80:
  GameRoutine_d5e9a0((_QWORD*)(v3 + 24), *(_QWORD**)v3, (_QWORD*)(v3 + 8));
  *(_QWORD*)(v3 + 136) = *(_QWORD*)(v3 + 128);
  if (*(_DWORD*)(v3 + 72) == 1) {
    v48 = *(_QWORD*)(v3 + 104);
    for (i = *(_QWORD*)(v3 + 112); v48 != i; v48 += 152) {
      v50 = *(_QWORD*)(v48 + 80);
      game_d8e140(v50);
      game_d8ec60(v50);
    }
    goto LABEL_317;
  }
  v51 = *(_QWORD*)(v3 + 104);
  for (j = *(_QWORD*)(v3 + 112); j != v51; GameRoutine_d5fd80(j)) {
    j -= 152;
  }
  v54 = *(int**)(v3 + 80);
  v53 = *(int**)(v3 + 88);
  *(_QWORD*)(v3 + 112) = v51;
  if (v54 != v53) {
    v55 = (__int64*)fw_memory_g_heap_manager_ptr;
    v354 = v53;
    do {
      if (*v54 == 1) {
        v56 = GameData_212dbb8[0];
        LocatorDispos_db2180(
            (void*)(v385_.v385),
            (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL),
            (unsigned __int8*)v54 + 32);
        HubDisposFileReader_c98880(
            (void*)((__int64*)&v377_.v377),
            (_QWORD*)(*(_QWORD*)(*(_QWORD*)v56 + 216LL) + 8LL));
        v57 = v377_.v377;
        if (v377_.v378 != v377_.v377) {
          v58 = (__int64)v54 + 57;
          v59 = 0;
          while (1) {
            v60 = (_QWORD*)v57[v59];
            v61 = (v54[14] & 1) != 0 ? *((_QWORD*)v54 + 9) : v58;
            v62 = game_HashString(v61);
            if (v62 != 0) {
              v63 = v60[11];
              if (v63 != 0 && v60[13] != 0) {
                v65 = v63 - 1;
                if ((v63 & (v63 - 1)) != 0) {
                  v66 = v62;
                  if (v62 >= v63) {
                    v66 = v62 % v63;
                  }
                }
                else {
                  v66 = v65 & v62;
                }
                v67 = *(_QWORD**)(v60[10] + 8 * v66);
                if (v67 != nullptr) {
                  v68 = (_QWORD*)*v67;
                  if (v68 != nullptr) {
                    if ((v63 & v65) == 0) {
                      while (1) {
                        v70 = v68[1];
                        if (v70 == v62) {
                          if (v68[2] == v62) {
                            goto LABEL_122;
                          }
                        }
                        else if ((v70 & v65) != v66) {
                          goto LABEL_93;
                        }
                        v68 = (_QWORD*)*v68;
                        if (v68 == nullptr) {
                          goto LABEL_93;
                        }
                      }
                    }
                    while (1) {
                      v69 = v68[1];
                      if (v69 == v62) {
                        break;
                      }
                      if (v69 >= v63) {
                        v69 %= v63;
                      }
                      if (v69 != v66) {
                        goto LABEL_93;
                      }
                    LABEL_111:
                      v68 = (_QWORD*)*v68;
                      if (v68 == nullptr) {
                        goto LABEL_93;
                      }
                    }
                    if (v68[2] != v62) {
                      goto LABEL_111;
                    }
                  LABEL_122:
                    v71 = v68[3];
                    if (v71 != 0) {
                      v72 = *(__int64***)(v71 + 40);
                      v73 = *v72;
                      v357 = v72[1];
                      if (*v72 != v357) {
                        break;
                      }
                    }
                  }
                }
              }
            }
          LABEL_93:
            v57 = v377_.v377;
            if (++v59 >= (unsigned __int64)(v377_.v378 - v377_.v377)) {
              goto LABEL_308;
            }
          }
          v358 = v58;
          while (2) {
            v74 = *v73;
            v75 =
                (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v55, 872, 16, 0);
            v76 = (unsigned __int8*)(v75 + 3);
            v77 = (char*)v75;
            v75[1] = 0;
            v78 = (atomic_ullong*)(v75 + 1);
            v75[2] = 0;
            *v75 = GameData_1fffa98;
            GameRoutine_ff7060((__int64)(v75 + 3), v74);
            if ((v385_.v385[0] & 1) != 0) {
              v83 = v385_.v385[1];
            }
            else {
              v83 = (unsigned __int64)LOBYTE(v385_.v385[0]) >> 1;
            }
            if ((v385_.v385[0] & 1) != 0) {
              v84 = v385_.v386;
            }
            else {
              v84 = (char*)v385_.v385 + 1;
            }
            GameRoutine_60a060(v77 + 848, (__int64)v84, v83);
            GameRoutine_d8d760((__int64)v76);
            GameRoutine_e07e20(v76);
            game_d8e140((__int64)v76);
            game_d8ec60((__int64)v76);
            v373_.v375 = nullptr;
            v373_.v376 = 0;
            v373_.v373 = 0;
            v373_.v374 = 0;
            v366_.v371 = nullptr;
            v366_.v372 = nullptr;
            v366_.v369 = nullptr;
            v366_.v370 = 0;
            v366_.v367 = nullptr;
            v366_.v368 = nullptr;
            v365 = 0;
            memset(v366_.v366, 0, sizeof(v366_.v366));
            v364 = (__typeof__(v364)){0};
            v362_.v362 = nullptr;
            v362_.v363 = nullptr;
            v359 = v78;
            atomic_fetch_add_explicit(v78, 1u, memory_order_relaxed);
            v366_.v368 = v76;
            v366_.v369 = v77;
            v85 = *v54;
            BYTE4(v361) = *((_BYTE*)v54 + 4);
            LODWORD(v361) = v85;
            if (&v361 != (__int64*)v54) {
              GameRoutine_6b7aa0(
                  (__int64*)&v362_.v362, *((__int64**)v54 + 1),
                  *((__int64**)v54 + 2),
                  0xAAAAAAAAAAAAAAABLL *
                      ((__int64)(*((_QWORD*)v54 + 2) - *((_QWORD*)v54 + 1)) >>
                       3));
              v86 = *((unsigned __int8*)v54 + 32);
              if ((BYTE8(v364) & 1) != 0) {
                v89 = (v86 & 1) == 0;
                v90 = v86 >> 1;
                if (v89) {
                  v91 = (__int64)v54 + 33;
                }
                else {
                  v91 = *((_QWORD*)v54 + 6);
                }
                if (v89) {
                  v92 = v90;
                }
                else {
                  v92 = *((_QWORD*)v54 + 5);
                }
                SpineModel_64dde0((__int64*)&v364 + 1, v91, v92);
              }
              else if ((v86 & 1) != 0) {
                GameRoutine_64df20((_QWORD*)&v364 + 1, *((_QWORD*)v54 + 6),
                                   *((_QWORD*)v54 + 5));
              }
              else {
                v87 = *((_QWORD*)v54 + 4);
                v88 = *((_QWORD*)v54 + 6);
                v365 = *((_QWORD*)v54 + 5);
                *(_QWORD*)v366_.v366 = v88;
                *((_QWORD*)&v364 + 1) = v87;
              }
              v93 = *((unsigned __int8*)v54 + 56);
              if ((v366_.v366[8] & 1) != 0) {
                v96 = (v93 & 1) == 0;
                v97 = v93 >> 1;
                if (v96) {
                  v98 = v358;
                }
                else {
                  v98 = *((_QWORD*)v54 + 9);
                }
                if (v96) {
                  v99 = v97;
                }
                else {
                  v99 = *((_QWORD*)v54 + 8);
                }
                SpineModel_64dde0((__int64*)&v366_.v366[8], v98, v99);
              }
              else if ((v93 & 1) != 0) {
                GameRoutine_64df20(&v366_.v366[8], *((_QWORD*)v54 + 9),
                                   *((_QWORD*)v54 + 8));
              }
              else {
                v94 = *((_QWORD*)v54 + 7);
                v95 = *((_QWORD*)v54 + 9);
                *(_QWORD*)&v366_.v366[16] = *((_QWORD*)v54 + 8);
                v366_.v367 = (_BYTE*)v95;
                *(_QWORD*)&v366_.v366[8] = v94;
              }
            }
            if ((v366_.v368[88] & 1) != 0) {
              v100 = *((_QWORD*)v366_.v368 + 13);
            }
            else {
              v100 = (__int64)(v366_.v368 + 89);
            }
            v101 = game_HashString(v100);
            v3 = v360;
            v102 = 0;
            if (v101 != 0) {
              v103 = *(_QWORD*)(GameData_21c99c8 + 96);
              if (v103 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
                v104 = v103 - 1;
                if ((v103 & (v103 - 1)) != 0) {
                  v105 = v101;
                  if (v101 >= v103) {
                    v105 = v101 % v103;
                  }
                }
                else {
                  v105 = v104 & v101;
                }
                v106 =
                    *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v105);
                if (v106 == nullptr || (v107 = (_QWORD*)*v106) == nullptr) {
                LABEL_180:
                  v102 = 0;
                  goto LABEL_181;
                }
                if ((v103 & v104) == 0) {
                  while (1) {
                    v109 = v107[1];
                    if (v109 == v101) {
                      if (v107[2] == v101) {
                        goto LABEL_307;
                      }
                    }
                    else if ((v109 & v104) != v105) {
                      goto LABEL_180;
                    }
                    v107 = (_QWORD*)*v107;
                    v102 = 0;
                    if (v107 == nullptr) {
                      goto LABEL_181;
                    }
                  }
                }
                while (1) {
                  v108 = v107[1];
                  if (v108 == v101) {
                    if (v107[2] == v101) {
                    LABEL_307:
                      v102 = v107[3];
                      break;
                    }
                  }
                  else {
                    if (v108 >= v103) {
                      v108 %= v103;
                    }
                    if (v108 != v105) {
                      goto LABEL_180;
                    }
                  }
                  v107 = (_QWORD*)*v107;
                  if (v107 == nullptr) {
                    goto LABEL_180;
                  }
                }
              }
            }
          LABEL_181:
            v110 = (__int64*)v366_.v368;
            v111 = v366_.v369;
            v366_.v370 = v102;
            v381_.v383 = nullptr;
            v381_.v384 = 0;
            v381_.v381 = 0;
            v381_.v382 = 0;
            v379_.v379 = nullptr;
            v379_.v380 = nullptr;
            if (v366_.v369 != nullptr) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v366_.v369 + 8), 1u,
                  memory_order_relaxed);
              v112 = v379_.v380;
              v379_.v379 = v110;
              v379_.v380 = v111;
              if (v112 != nullptr &&
                  atomic_fetch_add((atomic_ullong* volatile)(v112 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(char*))(*(_QWORD*)v112 + 16LL))(v112);
                std___1___shared_weak_count___release_weak_alt1(v112);
              }
            }
            else {
              v379_.v379 = (__int64*)v366_.v368;
              v379_.v380 = nullptr;
            }
            if ((v381_.v381 & 1) != 0) {
              if ((v366_.v366[8] & 1) != 0) {
                v113 = v366_.v367;
              }
              else {
                v113 = &v366_.v366[9];
              }
              if ((v366_.v366[8] & 1) != 0) {
                v114 = *(_QWORD*)&v366_.v366[16];
              }
              else {
                v114 = (unsigned __int64)v366_.v366[8] >> 1;
              }
              SpineModel_64dde0(&v381_.v381, (__int64)v113, v114);
            }
            else if ((v366_.v366[8] & 1) != 0) {
              GameRoutine_64df20(&v381_.v381, (__int64)v366_.v367,
                                 *(unsigned __int64*)&v366_.v366[16]);
            }
            else {
              v381_.v381 = *(_QWORD*)&v366_.v366[8];
              v381_.v382 = *(_QWORD*)&v366_.v366[16];
              v381_.v383 = v366_.v367;
            }
            GameRoutine_e99900(&v379_.v379);
            v117 = v379_.v379;
            v116 = v379_.v380;
            if (v379_.v380 != nullptr) {
              atomic_fetch_add_explicit(
                  (atomic_ullong* volatile)(v379_.v380 + 8), 1u,
                  memory_order_relaxed);
            }
            v118 = v366_.v372;
            v366_.v371 = v117;
            v366_.v372 = v116;
            if (v118 != nullptr &&
                atomic_fetch_add((atomic_ullong* volatile)(v118 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(char*))(*(_QWORD*)v118 + 16LL))(v118);
              v115 = std___1___shared_weak_count___release_weak_alt1(v118);
            }
            if ((v373_.v373 & 1) != 0) {
              if ((v381_.v381 & 1) != 0) {
                v119 = v381_.v383;
              }
              else {
                v119 = (char*)&v381_.v381 + 1;
              }
              if ((v381_.v381 & 1) != 0) {
                v120 = v381_.v382;
              }
              else {
                v120 = (unsigned __int64)(unsigned __int8)v381_.v381 >> 1;
              }
              SpineModel_64dde0(&v373_.v373, (__int64)v119, v120);
            }
            else if ((v381_.v381 & 1) != 0) {
              GameRoutine_64df20(&v373_.v373, (__int64)v381_.v383, v381_.v382);
            }
            else {
              v373_.v373 = v381_.v381;
              v373_.v374 = v381_.v382;
              v373_.v375 = v381_.v383;
            }
            v373_.v376 = v381_.v384;
            if ((v381_.v381 & 1) != 0 && v381_.v383 != nullptr) {
              v121 = 128;
              if (*(_QWORD*)(*v55 + 200) == 0) {
                v121 = 56;
              }
              nn_mem_StandardAllocator_Free(*v55 + v121);
            }
            v122 = v379_.v380;
            if (v379_.v380 != nullptr &&
                atomic_fetch_add((atomic_ullong* volatile)(v379_.v380 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(char*, long double))(*(_QWORD*)v122 + 16LL))(
                  v122, *(long double*)&v115);
              v115 = std___1___shared_weak_count___release_weak_alt1(v122);
              if (v366_.v370 != 0) {
              LABEL_221:
                v124 = *(_QWORD*)(v360 + 112);
                v123 = *(_QWORD*)(v360 + 120);
                if (v124 >= v123) {
                  v133 = *(_QWORD*)(v360 + 104);
                  v134 = v124 - v133;
                  v135 =
                      1 - 0x79435E50D79435E5LL * ((__int64)(v124 - v133) >> 3);
                  if (v135 > 0x1AF286BCA1AF286LL) {
                    GameRoutine_d5ff80();
                  }
                  v136 = 0x86BCA1AF286BCA1BLL * ((__int64)(v123 - v133) >> 3);
                  if (2 * v136 > v135) {
                    v135 = 2 * v136;
                  }
                  if (v136 >= 0xD79435E50D7943LL) {
                    v137 = 0x1AF286BCA1AF286LL;
                  }
                  else {
                    v137 = v135;
                  }
                  if (v137 > 0x1AF286BCA1AF286LL) {
                  LABEL_608:
                    GameRoutine_60a210_alt1();
                  }
                  v355 = 152 * v137;
                  v138 = fw_memory_HeapManager_Allocate_alt1(
                      fw_memory_g_heap_manager, 152 * v137, 16, 0);
                  v139 = (_QWORD*)(v138 + v134);
                  v140 = v138;
                  GameRoutine_d5e840((__int64)v139, (int*)&v361);
                  v141 = v366_.v369;
                  v139[10] = v366_.v368;
                  v139[11] = v141;
                  if (v141 != nullptr) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v141 + 8), 1u,
                        memory_order_relaxed);
                  }
                  v142 = v366_.v371;
                  v139[12] = v366_.v370;
                  v139[13] = v142;
                  v143 = v366_.v372;
                  v139[14] = v366_.v372;
                  if (v143 != nullptr) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v143 + 8), 1u,
                        memory_order_relaxed);
                  }
                  if ((v373_.v373 & 1) != 0) {
                    fw_text_String_CopyTerminated(
                        v139 + 15, (__int64)v373_.v375, v373_.v374);
                  }
                  else {
                    v144 = v373_.v374;
                    v139[15] = v373_.v373;
                    v139[16] = v144;
                    v139[17] = v373_.v375;
                  }
                  v139[18] = v373_.v376;
                  v155 = *(_QWORD*)(v360 + 104);
                  v154 = *(int**)(v360 + 112);
                  v156 = (char*)v139 + v155 - (_QWORD)v154;
                  if ((int*)v155 == v154) {
                    v168 = (_QWORD*)v360;
                  }
                  else {
                    v157 = *(int**)(v360 + 104);
                    v158 = (char*)v139 + v155 - (_QWORD)v154;
                    do {
                      v159 = *v157;
                      v160 = *((_BYTE*)v157 + 4);
                      *((_QWORD*)v158 + 1) = 0;
                      *((_QWORD*)v158 + 2) = 0;
                      *((_QWORD*)v158 + 3) = 0;
                      v158[4] = v160;
                      *(_DWORD*)v158 = v159;
                      *((_QWORD*)v158 + 1) = *((_QWORD*)v157 + 1);
                      *((_QWORD*)v158 + 2) = *((_QWORD*)v157 + 2);
                      *((_QWORD*)v158 + 3) = *((_QWORD*)v157 + 3);
                      *((_QWORD*)v157 + 2) = 0;
                      *((_QWORD*)v157 + 3) = 0;
                      *((_QWORD*)v157 + 1) = 0;
                      v161 = *((_QWORD*)v157 + 4);
                      v162 = *((_QWORD*)v157 + 6);
                      *((_QWORD*)v158 + 5) = *((_QWORD*)v157 + 5);
                      *((_QWORD*)v158 + 6) = v162;
                      *((_QWORD*)v158 + 4) = v161;
                      *((_QWORD*)v157 + 5) = 0;
                      *((_QWORD*)v157 + 6) = 0;
                      *((_QWORD*)v157 + 4) = 0;
                      v163 = *((_QWORD*)v157 + 7);
                      v164 = *((_QWORD*)v157 + 9);
                      *((_QWORD*)v158 + 8) = *((_QWORD*)v157 + 8);
                      *((_QWORD*)v158 + 9) = v164;
                      *((_QWORD*)v158 + 7) = v163;
                      *((_QWORD*)v157 + 8) = 0;
                      *((_QWORD*)v157 + 9) = 0;
                      *((_QWORD*)v157 + 7) = 0;
                      *((_QWORD*)v158 + 10) = *((_QWORD*)v157 + 10);
                      *((_QWORD*)v158 + 11) = *((_QWORD*)v157 + 11);
                      *((_QWORD*)v157 + 10) = 0;
                      *((_QWORD*)v157 + 11) = 0;
                      *((_QWORD*)v158 + 12) = *((_QWORD*)v157 + 12);
                      *((_QWORD*)v158 + 13) = *((_QWORD*)v157 + 13);
                      *((_QWORD*)v158 + 14) = *((_QWORD*)v157 + 14);
                      *((_QWORD*)v157 + 13) = 0;
                      *((_QWORD*)v157 + 14) = 0;
                      v165 = *((_QWORD*)v157 + 15);
                      v166 = *((_QWORD*)v157 + 17);
                      *((_QWORD*)v158 + 16) = *((_QWORD*)v157 + 16);
                      *((_QWORD*)v158 + 17) = v166;
                      *((_QWORD*)v158 + 15) = v165;
                      *((_QWORD*)v157 + 16) = 0;
                      *((_QWORD*)v157 + 17) = 0;
                      *((_QWORD*)v157 + 15) = 0;
                      v167 = *((_QWORD*)v157 + 18);
                      v157 += 38;
                      *((_QWORD*)v158 + 18) = v167;
                      v158 += 152;
                    } while (v157 != v154);
                    do {
                      GameRoutine_d5fd80(v155);
                      v155 += 152;
                    } while ((int*)v155 != v154);
                    v168 = (_QWORD*)v360;
                    v155 = *(_QWORD*)(v360 + 104);
                  }
                  v169 = v140 + v355;
                  v153 = v139 + 19;
                  v3 = (__int64)v168;
                  v168[13] = v156;
                  v168[14] = v153;
                  v168[15] = v169;
                  v55 = (__int64*)fw_memory_g_heap_manager_ptr;
                  if (v155 != 0) {
                    v170 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v170 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v170);
                  }
                }
                else {
                  v125 = v361;
                  v126 = BYTE4(v361);
                  *(_QWORD*)(v124 + 8) = 0;
                  *(_QWORD*)(v124 + 16) = 0;
                  *(_QWORD*)(v124 + 24) = 0;
                  *(_BYTE*)(v124 + 4) = v126;
                  *(_DWORD*)v124 = v125;
                  v128 = v362_.v362;
                  v127 = v362_.v363;
                  v129 = (char*)v362_.v363 - (char*)v362_.v362;
                  if (v362_.v363 != v362_.v362) {
                    if (0xAAAAAAAAAAAAAAABLL * (v129 >> 3) >
                        0xAAAAAAAAAAAAAAALL) {
                      goto LABEL_612;
                    }
                    v130 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr,
                        (char*)v362_.v363 - (char*)v362_.v362, 16, 0);
                    *(_QWORD*)(v124 + 8) = v130;
                    *(_QWORD*)(v124 + 16) = v130;
                    *(_QWORD*)(v124 + 24) = (char*)v130 + v129;
                    do {
                      if ((*(_BYTE*)v128 & 1) != 0) {
                        fw_text_String_CopyTerminated(v130, v128[2], v128[1]);
                      }
                      else {
                        v131 = *v128;
                        v132 = v128[2];
                        v130[1] = v128[1];
                        v130[2] = v132;
                        *v130 = v131;
                      }
                      v128 += 3;
                      v130 += 3;
                    } while (v128 != v127);
                    *(_QWORD*)(v124 + 16) = v130;
                  }
                  if ((BYTE8(v364) & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)(v124 + 32),
                                                  *(__int64*)v366_.v366, v365);
                  }
                  else {
                    v145 = *((_QWORD*)&v364 + 1);
                    v146 = *(_QWORD*)v366_.v366;
                    *(_QWORD*)(v124 + 40) = v365;
                    *(_QWORD*)(v124 + 48) = v146;
                    *(_QWORD*)(v124 + 32) = v145;
                  }
                  v3 = v360;
                  if ((v366_.v366[8] & 1) != 0) {
                    fw_text_String_CopyTerminated(
                        (__int64*)(v124 + 56), (__int64)v366_.v367,
                        *(unsigned __int64*)&v366_.v366[16]);
                  }
                  else {
                    v147 = *(_QWORD*)&v366_.v366[8];
                    v148 = (__int64)v366_.v367;
                    *(_QWORD*)(v124 + 64) = *(_QWORD*)&v366_.v366[16];
                    *(_QWORD*)(v124 + 72) = v148;
                    *(_QWORD*)(v124 + 56) = v147;
                  }
                  *(_QWORD*)(v124 + 80) = v366_.v368;
                  v149 = v366_.v369;
                  *(_QWORD*)(v124 + 88) = v366_.v369;
                  if (v149 != nullptr) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v149 + 8), 1u,
                        memory_order_relaxed);
                  }
                  *(_QWORD*)(v124 + 96) = v366_.v370;
                  *(_QWORD*)(v124 + 104) = v366_.v371;
                  v150 = v366_.v372;
                  *(_QWORD*)(v124 + 112) = v366_.v372;
                  if (v150 != nullptr) {
                    atomic_fetch_add_explicit(
                        (atomic_ullong* volatile)(v150 + 8), 1u,
                        memory_order_relaxed);
                  }
                  if ((v373_.v373 & 1) != 0) {
                    fw_text_String_CopyTerminated((__int64*)(v124 + 120),
                                                  (__int64)v373_.v375,
                                                  v373_.v374);
                  }
                  else {
                    v151 = v373_.v373;
                    v152 = (__int64)v373_.v375;
                    *(_QWORD*)(v124 + 128) = v373_.v374;
                    *(_QWORD*)(v124 + 136) = v152;
                    *(_QWORD*)(v124 + 120) = v151;
                  }
                  v153 = (_QWORD*)(v124 + 152);
                  *(_QWORD*)(v124 + 144) = v373_.v376;
                  v55 = &fw_memory_g_heap_manager;
                }
                *(_QWORD*)(v3 + 112) = v153;
              }
            }
            else if (v366_.v370 != 0) {
              goto LABEL_221;
            }
            if ((v373_.v373 & 1) != 0 && v373_.v375 != nullptr) {
              v171 = 128;
              if (*(_QWORD*)(*v55 + 200) == 0) {
                v171 = 56;
              }
              nn_mem_StandardAllocator_Free(*v55 + v171);
            }
            v172 = v366_.v372;
            if (v366_.v372 != nullptr &&
                atomic_fetch_add((atomic_ullong* volatile)(v366_.v372 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(char*, long double))(*(_QWORD*)v172 + 16LL))(
                  v172, *(long double*)&v115);
              v115 = std___1___shared_weak_count___release_weak_alt1(v172);
              v173 = v366_.v369;
              if (v366_.v369 != nullptr) {
                goto LABEL_279;
              }
            }
            else {
              v173 = v366_.v369;
              if (v366_.v369 != nullptr) {
              LABEL_279:
                if (atomic_fetch_add((atomic_ullong* volatile)(v173 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(char*, long double))(*(_QWORD*)v173 + 16LL))(
                      v173, *(long double*)&v115);
                  v115 = std___1___shared_weak_count___release_weak_alt1(v173);
                }
              }
            }
            if ((v366_.v366[8] & 1) != 0 && v366_.v367 != nullptr) {
              v174 = 128;
              if (*(_QWORD*)(*v55 + 200) == 0) {
                v174 = 56;
              }
              nn_mem_StandardAllocator_Free(*v55 + v174);
            }
            if ((BYTE8(v364) & 1) != 0 && *(_QWORD*)v366_.v366 != 0) {
              v175 = 128;
              if (*(_QWORD*)(*v55 + 200) == 0) {
                v175 = 56;
              }
              nn_mem_StandardAllocator_Free(*v55 + v175);
            }
            v176 = (__int64)v362_.v362;
            if (v362_.v362 != nullptr) {
              v177 = v362_.v363;
              if (v362_.v362 == v362_.v363) {
                goto LABEL_302;
              }
              v178 = v362_.v363;
              do {
                v179 = *((_BYTE*)v178 - 24);
                v178 -= 3;
                if ((v179 & 1) != 0 && *(v177 - 1) != 0) {
                  v180 = 128;
                  if (*(_QWORD*)(*v55 + 200) == 0) {
                    v180 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v55 + v180);
                }
                v177 = v178;
              } while (v178 != (__int64*)v176);
              v362_.v363 = (__int64*)v176;
              if (v362_.v362 != nullptr) {
              LABEL_302:
                v181 = 128;
                if (*(_QWORD*)(*v55 + 200) == 0) {
                  v181 = 56;
                }
                nn_mem_StandardAllocator_Free(*v55 + v181);
              }
            }
            if (atomic_fetch_add(v359, 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(char*, long double))(*(_QWORD*)v77 + 16LL))(
                  v77, *(long double*)&v115);
              std___1___shared_weak_count___release_weak_alt1(v77);
            }
            v58 = v358;
            if (++v73 == v357) {
              goto LABEL_93;
            }
            continue;
          }
        }
      LABEL_308:
        if (v57 != nullptr) {
          v182 = *v55;
          v377_.v378 = v57;
          v183 = 128;
          if (*(_QWORD*)(v182 + 200) == 0) {
            v183 = 56;
          }
          nn_mem_StandardAllocator_Free(v182 + v183);
        }
        if ((v385_.v385[0] & 1) != 0 && v385_.v386 != nullptr) {
          v184 = 128;
          if (*(_QWORD*)(*v55 + 200) == 0) {
            v184 = 56;
          }
          nn_mem_StandardAllocator_Free(*v55 + v184);
        }
        v53 = v354;
      }
      v54 += 20;
    } while (v54 != v53);
  }
LABEL_317:
  v185 = *(_QWORD**)(v3 + 104);
  v186 = *(_QWORD**)(v3 + 112);
  if (v185 != v186) {
    v187 = v185 + 10;
    v188 = *(_QWORD*)GameData_212dbb8[0];
    v189 = *(_QWORD*)GameData_212dbb8[0] + 89LL;
    do {
      v192 = *((unsigned __int8*)v187 - 48);
      if ((v192 & 1) != 0) {
        v193 = *(v187 - 5);
      }
      else {
        v193 = v192 >> 1;
      }
      v194 = *(unsigned __int8*)(v188 + 88);
      v195 = *(_QWORD*)(v188 + 96);
      if ((v194 & 1) == 0) {
        v195 = v194 >> 1;
      }
      if (v193 == v195 &&
          ((v192 & 1) != 0 ? (v196 = (char*)*(v187 - 4))
                           : (v196 = (char*)v187 - 47),
           (v194 & 1) != 0 ? (v197 = *(_QWORD*)(v188 + 104)) : (v197 = v189),
           (unsigned int)memcmp(v196, v197, v193) == 0)) {
        if ((GameRoutine_d90760(*v187) & 1) == 0) {
          goto LABEL_321;
        }
      }
      else if (*(_BYTE*)(*v187 + 818) != 1 ||
               (GameRoutine_d90760(*v187) & 1) == 0) {
        goto LABEL_321;
      }
      v361 = *v187;
      v198 = v187[1];
      v362_.v362 = (__int64*)v198;
      if (v198 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v198 + 8), 1u,
                                  memory_order_relaxed);
        v199 = GameRoutine_ff5600(v3, &v361, v187[2]);
        if (atomic_fetch_add((atomic_ullong* volatile)(v198 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v199 & 1) == 0) {
            goto LABEL_321;
          }
        }
        else {
          v200 = v199;
          (*(void (**)(__int64))(*(_QWORD*)v198 + 16LL))(v198);
          std___1___shared_weak_count___release_weak_alt1(v198);
          if ((v200 & 1) == 0) {
            goto LABEL_321;
          }
        }
      }
      else if ((GameRoutine_ff5600(v3, &v361, v187[2]) & 1) == 0) {
        goto LABEL_321;
      }
      v379_.v379 = v187 - 6;
      v201 = GameRoutine_ff7280((__int64**)(v3 + 24),
                                (unsigned __int8*)v187 - 48, &v379_.v379);
      v202 = (_QWORD*)v201[8];
      v203 = v201;
      if ((unsigned __int64)v202 >= v201[9]) {
        v207 = GameRoutine_ff69e0(v201 + 7, v187 + 3);
      }
      else {
        *v202 = v187[3];
        v204 = v187[4];
        v202[1] = v204;
        if (v204 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v204 + 8), 1u,
                                    memory_order_relaxed);
        }
        if ((v187[5] & 1) != 0) {
          fw_text_String_CopyTerminated(v202 + 2, v187[7], v187[6]);
        }
        else {
          v205 = v187[5];
          v206 = v187[7];
          v202[3] = v187[6];
          v202[4] = v206;
          v202[2] = v205;
        }
        v207 = (__int64)(v202 + 6);
        v202[5] = v187[8];
      }
      v203[8] = v207;
      v208 = *(_QWORD*)(v187[3] + 56);
      v210 = *(_QWORD**)(v3 + 136);
      v209 = *(_QWORD*)(v3 + 144);
      if ((unsigned __int64)v210 < v209) {
        *v210 = v208;
        v190 = (__int64)(v210 + 1);
      }
      else {
        v211 = *(_QWORD*)(v3 + 128);
        v212 = (char*)v210 - v211;
        v213 = ((__int64)v210 - v211) >> 3;
        v214 = v213 + 1;
        if ((unsigned __int64)(v213 + 1) >> 61 != 0) {
        LABEL_609:
          GameRoutine_65c760_alt1();
        }
        v215 = v209 - v211;
        if (v215 >> 2 > v214) {
          v214 = v215 >> 2;
        }
        if ((unsigned __int64)v215 >= 0x7FFFFFFFFFFFFFF8LL) {
          v216 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v216 = v214;
        }
        if (v216 != 0) {
          if (v216 >> 61 != 0) {
            goto LABEL_608;
          }
          v217 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v216, 16, 0);
        }
        else {
          v217 = 0;
        }
        v218 = v217 + 8 * v216;
        v219 = (char*)v210 - v211;
        v220 = (__int64)&v212[v217 + -8 * v213];
        *(_QWORD*)&v212[v217] = v208;
        v190 = (__int64)&v212[v217 + 8];
        memcpy(v220, v211, v219);
        *(_QWORD*)(v360 + 128) = v220;
        *(_QWORD*)(v360 + 136) = v190;
        v3 = v360;
        *(_QWORD*)(v360 + 144) = v218;
        if (v211 != 0) {
          v221 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v221 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v221);
        }
      }
      *(_QWORD*)(v3 + 136) = v190;
    LABEL_321:
      v191 = v187 + 9;
      v187 += 19;
    } while (v191 != v186);
  }
  v222 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(GameData_21f3ce0 + 40) -
                                           *(_QWORD*)(GameData_21f3ce0 + 32)) >>
                                 5) +
         (*(_QWORD*)(GameData_21f3ce0 + 88) << 8);
  if (*(_DWORD*)(v3 + 72) != 1 || v222 != *(_QWORD*)(v360 + 160)) {
    v223 = *(_QWORD**)(v360 + 56);
    v224 = (__int64**)(v360 + 48);
    *(_QWORD*)(v360 + 160) = v222;
    GameRoutine_d5f370(v360 + 48, v223);
    *(_QWORD*)(v360 + 56) = 0;
    *(_QWORD*)(v360 + 64) = 0;
    *(_QWORD*)(v360 + 48) = v360 + 56;
    v225 = *(_QWORD*)(GameData_21f3ce0 + 32);
    v226 = *(_QWORD*)(GameData_21f3ce0 + 40);
    if (v225 != v226) {
      while (2) {
        v362_.v363 = nullptr;
        memset(v366_.v366, 0, 21);
        *((_QWORD*)&v364 + 1) = 28160;
        v365 = 0;
        v361 = 0;
        v362_.v362 = nullptr;
        *(_QWORD*)((char*)&v364 + 1) = *(_QWORD*)"Situation";
        LOBYTE(v364) = 18;
        if ((__int64*)v225 != &v361) {
          if ((*(_BYTE*)v225 & 1) != 0) {
            GameRoutine_64df20(&v361, *(_QWORD*)(v225 + 16),
                               *(_QWORD*)(v225 + 8));
          }
          else {
            v362_.v362 = *(__int64**)(v225 + 8);
            v227 = *(_QWORD*)v225;
            v362_.v363 = *(__int64**)(v225 + 16);
            v361 = v227;
          }
        }
        *(_QWORD*)v366_.v366 = *(_QWORD*)(v225 + 32);
        *(_QWORD*)&v228 = *(_QWORD*)v366_.v366;
        *((_QWORD*)&v228 + 1) = *(unsigned int*)(v225 + 40);
        *(_OWORD*)v366_.v366 = v228;
        LODWORD(v228) = *(_DWORD*)(v225 + 48);
        v366_.v366[20] = 1;
        *(_DWORD*)&v366_.v366[16] = v228;
        LocatorDispos_db2180(
            (void*)(v385_.v385),
            (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL),
            (unsigned __int8*)(v225 + 56));
        GameRoutine_ff57a0((void*)((__int64*)&v379_.v379), (__int64)&v361,
                           (unsigned __int8*)v385_.v385);
        v377_.v377 = (__int64*)(v225 + 56);
        *((_BYTE*)v379_.v379 + 816) = 1;
        v229 = GameRoutine_ff7280(v224, (unsigned __int8*)(v225 + 56),
                                  &v377_.v377);
        v230 = (_QWORD*)v229[8];
        v231 = v229;
        if ((unsigned __int64)v230 >= v229[9]) {
          v235 = GameRoutine_ff69e0(v229 + 7, &v379_.v379);
        }
        else {
          *v230 = v379_.v379;
          v232 = v379_.v380;
          v230[1] = v379_.v380;
          if (v232 != nullptr) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v232 + 8), 1u,
                                      memory_order_relaxed);
          }
          if ((v381_.v381 & 1) != 0) {
            fw_text_String_CopyTerminated(v230 + 2, (__int64)v381_.v383,
                                          v381_.v382);
          }
          else {
            v233 = v381_.v381;
            v234 = (__int64)v381_.v383;
            v230[3] = v381_.v382;
            v230[4] = v234;
            v230[2] = v233;
          }
          v235 = (__int64)(v230 + 6);
          v230[5] = v381_.v384;
        }
        v236 = v381_.v381;
        v231[8] = v235;
        if ((v236 & 1) != 0 && v381_.v383 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v237 = 128;
          }
          else {
            v237 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v237);
        }
        v238 = v379_.v380;
        if (v379_.v380 != nullptr &&
            atomic_fetch_add((atomic_ullong* volatile)(v379_.v380 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(char*))(*(_QWORD*)v238 + 16LL))(v238);
          std___1___shared_weak_count___release_weak_alt1(v238);
          if ((v385_.v385[0] & 1) != 0) {
            goto LABEL_396;
          }
        }
        else if ((v385_.v385[0] & 1) != 0) {
        LABEL_396:
          if (v385_.v386 != nullptr) {
            if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
              v239 = 128;
            }
            else {
              v239 = 56;
            }
            nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v239);
          }
        }
        if ((v364 & 1) != 0 && v365 != 0) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v240 = 128;
          }
          else {
            v240 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v240);
        }
        if ((v361 & 1) != 0 && v362_.v363 != nullptr) {
          if (*(_QWORD*)(fw_memory_g_heap_manager + 200) != 0) {
            v241 = 128;
          }
          else {
            v241 = 56;
          }
          nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v241);
        }
        v225 += 96;
        if (v225 == v226) {
          break;
        }
        continue;
      }
    }
  }
  v242 = v360;
  if ((*(_BYTE*)(v360 + 76) & 1) == 0 && CharacterSituation_f94550()) {
    v243 = *(_QWORD**)(v360 + 48);
    v356 = (_QWORD*)(v360 + 56);
    if (v243 != (_QWORD*)(v360 + 56)) {
      v359 = (atomic_ullong*)(v360 + 32);
      while (1) {
        v244 = (__int64*)v243[7];
        v358 = v243[8];
        if (v244 != (__int64*)v358) {
          break;
        }
      LABEL_592:
        v332 = (_QWORD*)v243[1];
        if (v332 != nullptr) {
          do {
            v333 = v332;
            v332 = (_QWORD*)*v332;
          } while (v332 != nullptr);
        }
        else {
          do {
            v333 = (_QWORD*)v243[2];
            v24 = v243 == (_QWORD*)*v333;
            v243 = v333;
          } while (!v24);
        }
        v243 = v333;
        if (v333 == v356) {
          goto LABEL_598;
        }
      }
      v357 = (_QWORD*)((char*)v243 + 33);
      while (2) {
        v246 = *v244;
        v247 = v244[1];
        if (v247 == 0) {
          v249 = v244 + 5;
          v250 = v244[5];
          if (*(_BYTE*)(v242 + 77) != 0) {
            goto LABEL_428;
          }
          goto LABEL_467;
        }
        v248 = 1;
        v249 = v244 + 5;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v247 + 8), 1u,
                                  memory_order_relaxed);
        if (*(_BYTE*)(v242 + 77) == 0) {
          goto LABEL_463;
        }
        v250 = *v249;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v247 + 8), 1u,
                                  memory_order_relaxed);
      LABEL_428:
        if (v246 != 0 && (*(_BYTE*)(v246 + 819) & 1) != 0) {
          v251 = true;
          if (v247 == 0) {
          LABEL_434:
            if (v251) {
              goto LABEL_435;
            }
          LABEL_438:
            v252 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v252 = *(_QWORD*)(game_GameModeData_instance_ + 96);
            }
            if (v252 == v250 ||
                !GameRoutine_f97e30(*(_QWORD*)GameData_212dc58[0], v250,
                                    true)) {
            LABEL_459:
              v248 = 0;
              v242 = v360;
              if (v247 != 0) {
                goto LABEL_463;
              }
            }
            else {
              v253 = *(atomic_ullong**)(v242 + 24);
              if (v253 == v359) {
                v248 = 1;
              }
              else {
                do {
                  v254 = *((_QWORD*)v253 + 7);
                  v255 = *((_QWORD*)v253 + 8);
                  while (v254 != v255) {
                    v256 = *(_QWORD**)(v254 + 40);
                    if (v256 != nullptr) {
                      v257 = v256[5];
                      if (v257 != 0) {
                        v258 = *(_QWORD*)(v250 + 40);
                        if (v258 != 0 &&
                            (unsigned int)strcmp(v257, v258) == 0) {
                          goto LABEL_459;
                        }
                      }
                      if (*v256 == *(_QWORD*)v250) {
                        goto LABEL_459;
                      }
                    }
                    v254 += 48;
                  }
                  v259 = *((atomic_ullong**)v253 + 1);
                  if (v259 != nullptr) {
                    do {
                      v260 = v259;
                      v259 = *(atomic_ullong**)v259;
                    } while (v259 != nullptr);
                  }
                  else {
                    do {
                      v260 = *((atomic_ullong**)v253 + 2);
                      v24 = v253 == *(atomic_ullong**)v260;
                      v253 = v260;
                    } while (!v24);
                  }
                  v248 = 1;
                  v253 = v260;
                } while (v260 != v359);
              }
              v242 = v360;
              if (v247 != 0) {
                goto LABEL_463;
              }
            }
          LABEL_464:
            if (v248 != 0) {
              goto LABEL_467;
            }
          LABEL_423:
            v244 += 6;
            if (v244 == (__int64*)v358) {
              goto LABEL_592;
            }
            continue;
          }
        }
        else {
          v251 = (*(_BYTE*)(v250 + 49) & 0x20) == 0;
          if (v247 == 0) {
            goto LABEL_434;
          }
        }
        break;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v247 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_434;
      }
      (*(void (**)(__int64))(*(_QWORD*)v247 + 16LL))(v247);
      std___1___shared_weak_count___release_weak_alt1(v247);
      if (!v251) {
        goto LABEL_438;
      }
    LABEL_435:
      v248 = 1;
      v242 = v360;
      if (v247 == 0) {
        goto LABEL_464;
      }
    LABEL_463:
      if (atomic_fetch_add((atomic_ullong* volatile)(v247 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        goto LABEL_464;
      }
      (*(void (**)(__int64))(*(_QWORD*)v247 + 16LL))(v247);
      std___1___shared_weak_count___release_weak_alt1(v247);
      if ((v248 & 1) == 0) {
        goto LABEL_423;
      }
    LABEL_467:
      v261 = v359;
      v262 = *(_QWORD*)v359;
      v263 = v359;
      if (*(_QWORD*)v359 == 0) {
      LABEL_494:
        v277 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
        v278 = v277;
        if ((v243[4] & 1) != 0) {
          fw_text_String_CopyTerminated(v277 + 4, v243[6], v243[5]);
        }
        else {
          v279 = v243[4];
          v280 = v243[6];
          v277[5] = v243[5];
          v277[6] = v280;
          v277[4] = v279;
        }
        v278[8] = 0;
        v278[9] = 0;
        v278[7] = 0;
        v281 = v278;
        *v278 = 0;
        v278[1] = 0;
        v278[2] = v261;
        *(_QWORD*)v263 = v278;
        v282 = **(_QWORD**)(v360 + 24);
        if (v282 != 0) {
          *(_QWORD*)(v360 + 24) = v282;
          v281 = *(_QWORD**)v263;
        }
        v283 = *(_QWORD*)v359;
        v24 = v281 == *(_QWORD**)v359;
        *((_BYTE*)v281 + 24) = v24;
        if (!v24) {
          do {
            v284 = v281[2];
            if ((*(_BYTE*)(v284 + 24) & 1) != 0) {
              break;
            }
            v285 = *(_QWORD*)(v284 + 16);
            v286 = *(__int64**)v285;
            if (v284 == *(_QWORD*)v285) {
              v286 = *(__int64**)(v285 + 8);
              if (v286 == nullptr || (v286[3] & 1) != 0) {
                if (v281 == *(_QWORD**)v284) {
                  v287 = (__int64*)v281[2];
                }
                else {
                  v287 = *(__int64**)(v284 + 8);
                  v288 = *v287;
                  *(_QWORD*)(v284 + 8) = *v287;
                  if (v288 != 0) {
                    *(_QWORD*)(v288 + 16) = v284;
                    v285 = *(_QWORD*)(v284 + 16);
                  }
                  v287[2] = v285;
                  if (v284 == *(_QWORD*)v285) {
                    *(_QWORD*)v285 = v287;
                  }
                  else {
                    *(_QWORD*)(v285 + 8) = v287;
                  }
                  *v287 = v284;
                  *(_QWORD*)(v284 + 16) = v287;
                  v285 = v287[2];
                }
                *((_BYTE*)v287 + 24) = 1;
                *(_BYTE*)(v285 + 24) = 0;
                v291 = *(__int64**)v285;
                v292 = *(_QWORD*)(*(_QWORD*)v285 + 8LL);
                *(_QWORD*)v285 = v292;
                if (v292 != 0) {
                  *(_QWORD*)(v292 + 16) = v285;
                }
                v293 = *(__int64***)(v285 + 16);
                v291[2] = (__int64)v293;
                if ((__int64*)v285 == *v293) {
                  *v293 = v291;
                }
                else {
                  v293[1] = v291;
                }
                v291[1] = v285;
                goto LABEL_539;
              }
            }
            else if (v286 == nullptr || (v286[3] & 1) != 0) {
              v289 = *(_QWORD**)v284;
              if (v281 == *(_QWORD**)v284) {
                v290 = v289[1];
                *(_QWORD*)v284 = v290;
                if (v290 != 0) {
                  *(_QWORD*)(v290 + 16) = v284;
                  v285 = *(_QWORD*)(v284 + 16);
                }
                v289[2] = v285;
                if (v284 == *(_QWORD*)v285) {
                  *(_QWORD*)v285 = v289;
                }
                else {
                  *(_QWORD*)(v285 + 8) = v289;
                }
                v289[1] = v284;
                *(_QWORD*)(v284 + 16) = v289;
                v285 = v289[2];
              }
              else {
                v289 = (_QWORD*)v281[2];
              }
              *((_BYTE*)v289 + 24) = 1;
              *(_BYTE*)(v285 + 24) = 0;
              v291 = *(__int64**)(v285 + 8);
              v294 = *v291;
              *(_QWORD*)(v285 + 8) = *v291;
              if (v294 != 0) {
                *(_QWORD*)(v294 + 16) = v285;
              }
              v295 = *(__int64***)(v285 + 16);
              v291[2] = (__int64)v295;
              if ((__int64*)v285 == *v295) {
                *v295 = v291;
              }
              else {
                v295[1] = v291;
              }
              *v291 = v285;
            LABEL_539:
              *(_QWORD*)(v285 + 16) = v291;
              break;
            }
            *(_BYTE*)(v284 + 24) = 1;
            v281 = (_QWORD*)v285;
            *(_BYTE*)(v285 + 24) = v285 == v283;
            *((_BYTE*)v286 + 24) = 1;
          } while (v285 != v283);
        }
        ++*(_QWORD*)(v360 + 40);
      LABEL_541:
        v296 = v278[9];
        v297 = (__int64*)v278[8];
        if ((unsigned __int64)v297 >= v296) {
          v301 = v278[7];
          v302 = (__int64)v297 - v301;
          v303 = 1 - 0x5555555555555555LL * (v302 >> 4);
          if (v303 > 0x555555555555555LL) {
            GameRoutine_d5f350();
          }
          *((_QWORD*)&v364 + 1) = v278 + 9;
          v304 = fw_memory_g_heap_manager_ptr;
          v305 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v296 - v301) >> 4);
          if (2 * v305 > v303) {
            v303 = 2 * v305;
          }
          if (v305 >= 0x2AAAAAAAAAAAAAALL) {
            v306 = 0x555555555555555LL;
          }
          else {
            v306 = v303;
          }
          if (v306 != 0) {
            if (v306 > 0x555555555555555LL) {
              goto LABEL_608;
            }
            v307 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 48 * v306, 16, 0);
          }
          else {
            v307 = 0;
          }
          v309 = (__int64*)(v307 + v302);
          v361 = v307;
          v362_.v362 = v309;
          *(_QWORD*)&v364 = v307 + 48 * v306;
          *v309 = *v244;
          v310 = v244[1];
          v309[1] = v310;
          if (v310 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v310 + 8), 1u,
                                      memory_order_relaxed);
          }
          if ((v244[2] & 1) != 0) {
            fw_text_String_CopyTerminated(v309 + 2, v244[4], v244[3]);
          }
          else {
            v311 = v244[2];
            v312 = v244[4];
            v309[3] = v244[3];
            v309[4] = v312;
            v309[2] = v311;
          }
          v309[5] = v244[5];
          v362_.v363 = v309 + 6;
          GameRoutine_ff6c00(v278 + 7, &v361);
          v308 = (_QWORD*)v278[8];
          v313 = (__int64)v362_.v362;
          while (1) {
            v314 = v362_.v363;
            if ((__int64*)v313 == v362_.v363) {
              break;
            }
            v362_.v363 -= 6;
            if ((*(_BYTE*)(v314 - 4) & 1) != 0 && *(v314 - 2) != 0) {
              v315 = 56;
              if (*(_QWORD*)(*(_QWORD*)v304 + 200LL) != 0) {
                v315 = 128;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v304 + v315);
            }
            v316 = *(v314 - 5);
            if (v316 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v316 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v316 + 16LL))(v316);
              std___1___shared_weak_count___release_weak_alt1(v316);
            }
          }
          if (v361 != 0) {
            v317 = 56;
            if (*(_QWORD*)(*(_QWORD*)v304 + 200LL) != 0) {
              v317 = 128;
            }
            nn_mem_StandardAllocator_Free(*(_QWORD*)v304 + v317);
          }
        }
        else {
          *v297 = *v244;
          v298 = v244[1];
          v297[1] = v298;
          if (v298 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v298 + 8), 1u,
                                      memory_order_relaxed);
          }
          if ((v244[2] & 1) != 0) {
            fw_text_String_CopyTerminated(v297 + 2, v244[4], v244[3]);
          }
          else {
            v299 = v244[2];
            v300 = v244[4];
            v297[3] = v244[3];
            v297[4] = v300;
            v297[2] = v299;
          }
          v308 = v297 + 6;
          v297[5] = *v249;
        }
        v278[8] = v308;
        v242 = v360;
        v318 = *(_QWORD*)(*v244 + 56);
        v320 = *(_QWORD**)(v360 + 136);
        v319 = *(_QWORD*)(v360 + 144);
        if ((unsigned __int64)v320 < v319) {
          *v320 = v318;
          v245 = (__int64)(v320 + 1);
        }
        else {
          v321 = *(_QWORD*)(v360 + 128);
          v322 = (char*)v320 - v321;
          v323 = ((__int64)v320 - v321) >> 3;
          v324 = v323 + 1;
          if ((unsigned __int64)(v323 + 1) >> 61 != 0) {
            goto LABEL_609;
          }
          v325 = v319 - v321;
          if (v325 >> 2 > v324) {
            v324 = v325 >> 2;
          }
          if ((unsigned __int64)v325 >= 0x7FFFFFFFFFFFFFF8LL) {
            v326 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v326 = v324;
          }
          if (v326 != 0) {
            if (v326 >> 61 != 0) {
              goto LABEL_608;
            }
            v327 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v326, 16, 0);
          }
          else {
            v327 = 0;
          }
          v328 = v327 + 8 * v326;
          v329 = (char*)v320 - v321;
          v330 = (__int64)&v322[v327 + -8 * v323];
          *(_QWORD*)&v322[v327] = v318;
          v245 = (__int64)&v322[v327 + 8];
          memcpy(v330, v321, v329);
          *(_QWORD*)(v360 + 128) = v330;
          *(_QWORD*)(v360 + 136) = v245;
          v242 = v360;
          *(_QWORD*)(v360 + 144) = v328;
          if (v321 != 0) {
            v331 = 56;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) !=
                0) {
              v331 = 128;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v331);
          }
        }
        *(_QWORD*)(v242 + 136) = v245;
        goto LABEL_423;
      }
      v264 = *((unsigned __int8*)v243 + 32);
      v265 = (v264 & 1) == 0;
      v266 = v264 >> 1;
      if (v265) {
        v267 = v357;
      }
      else {
        v267 = (__int64*)v243[6];
      }
      if (v265) {
        v268 = v266;
      }
      else {
        v268 = v243[5];
      }
      while (1) {
        v261 = (atomic_ullong*)v262;
        v269 = *(unsigned __int8*)(v262 + 32);
        v270 = (v269 & 1) == 0;
        v271 = v269 >> 1;
        if (v270) {
          v272 = v271;
        }
        else {
          v272 = *((_QWORD*)v261 + 5);
        }
        if (v270) {
          v273 = (char*)v261 + 33;
        }
        else {
          v273 = *((char**)v261 + 6);
        }
        if (v272 >= v268) {
          v274 = v268;
        }
        else {
          v274 = v272;
        }
        v275 = memcmp(v267, v273, v274);
        if (v275 != 0) {
          if (v275 < 0) {
            goto LABEL_474;
          }
        }
        else if (v268 < v272) {
        LABEL_474:
          v262 = *(_QWORD*)v261;
          v263 = v261;
          if (*(_QWORD*)v261 == 0) {
            goto LABEL_494;
          }
          continue;
        }
        v276 = memcmp(v273, v267, v274);
        if (v276 != 0) {
          if ((v276 & 0x80000000) == 0) {
            goto LABEL_515;
          }
        }
        else if (v272 >= v268) {
        LABEL_515:
          v278 = v261;
          goto LABEL_541;
        }
        v262 = *((_QWORD*)v261 + 1);
        if (v262 == 0) {
          v263 = (atomic_ullong*)((char*)v261 + 8);
          goto LABEL_494;
        }
      }
    }
  }
LABEL_598:
  v335 = *(_QWORD*)(v242 + 128);
  v334 = *(_QWORD*)(v242 + 136);
  *(_QWORD*)(v242 + 152) = 0;
  v336 = v334 - v335;
  if (v336 != 0) {
    v337 = v336 >> 3;
    v338 = (v336 >> 3) & 7;
    if (v337 >= 8) {
      v341 = (_QWORD*)(v335 + 32);
      v342 = 0;
      v340 = 0;
      v343 = -(__int64)(v337 & 0xFFFFFFFFFFFFFFF8LL);
      do {
        v342 -= 8;
        v344 = *(v341 - 4) + 3 * v340;
        *(_QWORD*)(v242 + 152) = v344 + 1;
        v345 = 3 * v344 + *(v341 - 3) + 4;
        *(_QWORD*)(v242 + 152) = v345;
        v346 = *(v341 - 2) + 3 * v345;
        *(_QWORD*)(v242 + 152) = v346 + 1;
        v347 = 3 * v346 + *(v341 - 1) + 4;
        *(_QWORD*)(v242 + 152) = v347;
        v348 = *v341 + 3 * v347;
        *(_QWORD*)(v242 + 152) = v348 + 1;
        v349 = 3 * v348 + v341[1] + 4;
        *(_QWORD*)(v242 + 152) = v349;
        v350 = v341[2] + 3 * v349;
        *(_QWORD*)(v242 + 152) = v350 + 1;
        v351 = v341[3];
        v341 += 8;
        v340 = 3 * v350 + v351 + 4;
        *(_QWORD*)(v242 + 152) = v340;
      } while (v343 != v342);
      v339 = -v342;
      if (v338 != 0) {
        goto LABEL_605;
      }
    }
    else {
      v339 = 0;
      v340 = 0;
      if (v338 == 0) {
        goto LABEL_607;
      }
    LABEL_605:
      v352 = (__int64*)(v335 + 8 * v339);
      do {
        v353 = *v352++;
        --v338;
        v340 = v353 + 3 * v340 + 1;
        *(_QWORD*)(v242 + 152) = v340;
      } while (v338 != 0);
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
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  signed __int64 v14;
  char* v15;
  char* v16;
  char* v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8* v23;
  unsigned __int64 v24;
  __int64 v25;
  _BOOL4 v26;
  char v27;
  char* v28;
  char* v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  int* v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int* v41;
  __int64 v42;
  int v43;
  char v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  int* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  char* v57;
  char* v58;
  char* v59;
  char v60;
  __int64 v61;
  unsigned __int8* v62;
  _BOOL4 v64;
  char v65;
  char* v66;
  char* v67;
  char* v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  v1 = *(_QWORD*)(GameData_21f3d10 + 216);
  v2 = *(unsigned __int8**)(v1 + 56);
  v62 = *(unsigned __int8**)(v1 + 64);
  if (v2 != v62) {
    v3 = 0;
    v4 = 0;
    v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    while (1) {
      v65 = 0;
      v66 = nullptr;
      v67 = nullptr;
      v68 = nullptr;
      v69 = 0;
      v70 = 0;
      v71 = 0;
      v72 = 0;
      v73 = 0;
      v74 = 0;
      v64 = *v2 == 1;
      v8 = (__int64*)(v2 + 56);
      v7 = v2[56];
      if ((v7 & 1) != 0) {
        v9 = *((_QWORD*)v2 + 8);
      }
      else {
        v9 = v7 >> 1;
      }
      if (v9 != 0) {
        v10 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, 24, 16, 0);
        v11 = v10;
        if ((*(_BYTE*)v8 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(v10, *((_QWORD*)v2 + 9),
                                             *((_QWORD*)v2 + 8));
          v15 = v66;
          v14 = v67 - v66;
        }
        else {
          v12 = *v8;
          v13 = *((_QWORD*)v2 + 9);
          v14 = 0;
          v15 = nullptr;
          v10[1] = *((_QWORD*)v2 + 8);
          v10[2] = v13;
          *v10 = v12;
        }
        v16 = (char*)(v11 + 3);
        v17 = (char*)v11 - v14;
        memcpy(v17, v15, v14);
        v66 = v17;
        v67 = v16;
        v68 = v16;
        if (v15 != nullptr) {
          if (*(_QWORD*)(*v5 + 200LL) != 0) {
            v18 = 128;
          }
          else {
            v18 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v18);
        }
        v67 = v16;
      }
      v19 = v2 + 8;
      if (&v72 != (__int64*)(v2 + 8)) {
        v20 = *v19;
        if ((v72 & 1) != 0) {
          if ((v20 & 1) != 0) {
            v23 = *((unsigned __int8**)v2 + 3);
          }
          else {
            v23 = v2 + 9;
          }
          if ((v20 & 1) != 0) {
            v24 = *((_QWORD*)v2 + 2);
          }
          else {
            v24 = v20 >> 1;
          }
          SpineModel_64dde0_alt1(&v72, v23, v24);
        }
        else if ((v20 & 1) != 0) {
          GameRoutine_64df20_alt1(&v72, *((_QWORD*)v2 + 3), *((_QWORD*)v2 + 2));
        }
        else {
          v21 = *(_QWORD*)v19;
          v22 = *((_QWORD*)v2 + 3);
          v73 = *((_QWORD*)v2 + 2);
          v74 = v22;
          v72 = v21;
        }
      }
      v25 = HubInitNatives_ff5d00(&v64);
      if (v4 < v3) {
        break;
      }
      v34 = (int*)*a1;
      v35 = v4 - *a1;
      v36 = 1 - 0x3333333333333333LL * (v35 >> 4);
      if (v36 > 0x333333333333333LL) {
        a1[1] = v4;
        a1[2] = v3;
        GameRoutine_d5e820(v25);
      }
      if (0x999999999999999ALL * ((__int64)(v3 - (_QWORD)v34) >> 4) > v36) {
        v36 = 0x999999999999999ALL * ((__int64)(v3 - (_QWORD)v34) >> 4);
      }
      if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v3 - (_QWORD)v34) >> 4) >=
          0x199999999999999LL) {
        v36 = 0x333333333333333LL;
      }
      if (v36 > 0x333333333333333LL) {
        a1[1] = v4;
        a1[2] = v3;
        GameRoutine_60a210(v25);
      }
      v37 = 5 * v36;
      v38 = fw_memory_HeapManager_Allocate(*v5, 80 * v36, 16, 0);
      v39 = v38 + v35;
      v40 = v38;
      GameRoutine_d5e840_alt1(v39, &v64);
      if (v34 != (int*)v4) {
        v41 = v34;
        v42 = v40;
        do {
          v43 = *v41;
          v44 = *((_BYTE*)v41 + 4);
          *(_QWORD*)(v42 + 8) = 0;
          *(_QWORD*)(v42 + 16) = 0;
          *(_QWORD*)(v42 + 24) = 0;
          *(_BYTE*)(v42 + 4) = v44;
          *(_DWORD*)v42 = v43;
          *(_QWORD*)(v42 + 8) = *((_QWORD*)v41 + 1);
          *(_QWORD*)(v42 + 16) = *((_QWORD*)v41 + 2);
          *(_QWORD*)(v42 + 24) = *((_QWORD*)v41 + 3);
          *((_QWORD*)v41 + 2) = 0;
          *((_QWORD*)v41 + 3) = 0;
          *((_QWORD*)v41 + 1) = 0;
          v45 = *((_QWORD*)v41 + 4);
          v46 = *((_QWORD*)v41 + 6);
          *(_QWORD*)(v42 + 40) = *((_QWORD*)v41 + 5);
          *(_QWORD*)(v42 + 48) = v46;
          *(_QWORD*)(v42 + 32) = v45;
          *((_QWORD*)v41 + 5) = 0;
          *((_QWORD*)v41 + 6) = 0;
          *((_QWORD*)v41 + 4) = 0;
          v47 = *((_QWORD*)v41 + 7);
          v48 = *((_QWORD*)v41 + 9);
          *(_QWORD*)(v42 + 64) = *((_QWORD*)v41 + 8);
          *(_QWORD*)(v42 + 72) = v48;
          *(_QWORD*)(v42 + 56) = v47;
          *((_QWORD*)v41 + 8) = 0;
          *((_QWORD*)v41 + 9) = 0;
          *((_QWORD*)v41 + 7) = 0;
          v41 += 20;
          v42 += 80;
        } while (v41 != (int*)v4);
        v49 = v34;
        do {
          GameRoutine_d5e6c0(v49);
          v49 += 20;
        } while (v49 != (int*)v4);
      }
      v3 = v40 + 16 * v37;
      v4 = v39 + 80;
      *a1 = v40;
      if (v34 != nullptr) {
        if (*(_QWORD*)(*v5 + 200LL) != 0) {
          v50 = 128;
        }
        else {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v5 + v50);
        if ((v72 & 1) != 0) {
          goto LABEL_69;
        }
      }
      else if ((v72 & 1) != 0) {
        goto LABEL_69;
      }
    LABEL_74:
      if ((v69 & 1) != 0 && v71 != 0) {
        if (*(_QWORD*)(*v5 + 200LL) != 0) {
          v56 = 128;
        }
        else {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v5 + v56);
      }
      v57 = v66;
      if (v66 != nullptr) {
        v58 = v67;
        if (v66 == v67) {
          goto LABEL_4;
        }
        v59 = v67;
        do {
          v60 = *(v59 - 24);
          v59 -= 24;
          if ((v60 & 1) != 0 && *((_QWORD*)v58 - 1) != 0) {
            if (*(_QWORD*)(*v5 + 200LL) != 0) {
              v61 = 128;
            }
            else {
              v61 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v5 + v61);
          }
          v58 = v59;
        } while (v59 != v57);
        v67 = v57;
        if (v66 != nullptr) {
        LABEL_4:
          if (*(_QWORD*)(*v5 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v5 + v6);
        }
      }
      v2 += 144;
      if (v2 == v62) {
        a1[1] = v4;
        a1[2] = v3;
        return;
      }
    }
    v26 = v64;
    v27 = v65;
    *(_QWORD*)(v4 + 8) = 0;
    *(_QWORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 24) = 0;
    *(_BYTE*)(v4 + 4) = v27;
    *(_DWORD*)v4 = v26;
    v28 = v66;
    v29 = v67;
    v30 = v67 - v66;
    if (v67 != v66) {
      if (0xAAAAAAAAAAAAAAABLL * (v30 >> 3) >= 0xAAAAAAAAAAAAAABLL) {
        a1[1] = v4;
        a1[2] = v3;
        GameRoutine_64aa00(v25);
      }
      v31 = (_QWORD*)fw_memory_HeapManager_Allocate(*v5, v67 - v66, 16, 0);
      *(_QWORD*)(v4 + 8) = v31;
      *(_QWORD*)(v4 + 16) = v31;
      *(_QWORD*)(v4 + 24) = (char*)v31 + v30;
      do {
        if ((*v28 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(v31, *((_QWORD*)v28 + 2),
                                             *((_QWORD*)v28 + 1));
        }
        else {
          v32 = *(_QWORD*)v28;
          v33 = *((_QWORD*)v28 + 2);
          v31[1] = *((_QWORD*)v28 + 1);
          v31[2] = v33;
          *v31 = v32;
        }
        v28 += 24;
        v31 += 3;
      } while (v28 != v29);
      *(_QWORD*)(v4 + 16) = v31;
    }
    if ((v69 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v4 + 32, v71, v70);
    }
    else {
      v51 = v69;
      v52 = v71;
      *(_QWORD*)(v4 + 40) = v70;
      *(_QWORD*)(v4 + 48) = v52;
      *(_QWORD*)(v4 + 32) = v51;
    }
    if ((v72 & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v4 + 56, v74, v73);
    }
    else {
      v53 = v72;
      v54 = v74;
      *(_QWORD*)(v4 + 64) = v73;
      *(_QWORD*)(v4 + 72) = v54;
      *(_QWORD*)(v4 + 56) = v53;
    }
    v4 += 80LL;
    if ((v72 & 1) == 0) {
      goto LABEL_74;
    }
  LABEL_69:
    if (v74 != 0) {
      if (*(_QWORD*)(*v5 + 200LL) != 0) {
        v55 = 128;
      }
      else {
        v55 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v5 + v55);
    }
    goto LABEL_74;
  }
}

__attribute__((swiftcall)) void game_ff6680(PSEUDO_X8 x8_, __int64 a1,
                                            __int64 a2, long double a4)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __n128 result;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;

  v6 = *(_QWORD*)(a1 + 128);
  v5 = *(_QWORD*)(a1 + 136);
  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = v5 - v6;
  if (v5 == v6) {
    v10 = 0;
    v11 = nullptr;
  }
  else {
    if (v9 < 0) {
      goto LABEL_52;
    }
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v5 - v6, 16, 0);
    v11 = (_QWORD*)(v10 + v9);
    memcpy(v10, v6, v9);
  }
  v13 = *(_QWORD*)(a2 + 128);
  v12 = *(_QWORD*)(a2 + 136);
  v14 = v12 - v13;
  if (v12 != v13) {
    if ((v14 & 0x8000000000000000LL) == 0) {
      v15 = fw_memory_HeapManager_Allocate(*v8, v12 - v13, 16, 0);
      v16 = (_QWORD*)(v15 + v14);
      memcpy(v15, v13, v14);
      goto LABEL_9;
    }
  LABEL_52:
    GameRoutine_65c760(a4);
  }
  v15 = 0;
  v16 = nullptr;
LABEL_9:
  GameRoutine_1a0a750(v10, v11, &v34);
  GameRoutine_1a0a750(v15, v16, &v34);
  a3[1] = 0;
  a3[2] = 0;
  *a3 = 0;
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v38 = (_QWORD*)v10;
  v37 = (_QWORD*)v15;
  if ((_QWORD*)v10 != v11) {
    v18 = 0;
    v19 = (_QWORD*)v10;
    while (v37 != v16) {
      if (*v19 < *v37) {
        v18 = GameRoutine_ff6d70(&v34, v18, v19) + 8;
        v20 = &v38;
      }
      else {
        if (*v37 >= *v19) {
          v38 = v19 + 1;
        }
        v20 = &v37;
        v19 = v37;
      }
      *v20 = v19 + 1;
      v19 = v38;
      if (v38 == v11) {
        goto LABEL_19;
      }
    }
    do {
      v18 = GameRoutine_ff6d70(&v34, v18, v19++) + 8;
    } while (v19 != v11);
  }
LABEL_19:
  v21 = v34;
  v22 = v35;
  if (v34 != v35) {
    v23 = v34;
    do {
      GameRoutine_7f3400(a3, v23);
      v23 += 8;
    } while (v23 != v22);
  }
  if (v21 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*v8 + v24);
  }
  v35 = 0;
  v36 = 0;
  v34 = 0;
  v38 = (_QWORD*)v15;
  v37 = (_QWORD*)v10;
  if ((_QWORD*)v15 != v16) {
    v25 = 0;
    v26 = (_QWORD*)v15;
    while (v37 != v11) {
      if (*v26 < *v37) {
        v25 = GameRoutine_ff6d70(&v34, v25, v26) + 8;
        v27 = &v38;
      }
      else {
        if (*v37 >= *v26) {
          v38 = v26 + 1;
        }
        v27 = &v37;
        v26 = v37;
      }
      *v27 = v26 + 1;
      v26 = v38;
      if (v38 == v16) {
        goto LABEL_36;
      }
    }
    do {
      v25 = GameRoutine_ff6d70(&v34, v25, v26++) + 8;
    } while (v26 != v16);
  }
LABEL_36:
  v28 = v34;
  v29 = v35;
  if (v34 != v35) {
    v30 = v34;
    do {
      GameRoutine_7f3400(a3, v30);
      v30 += 8;
    } while (v30 != v29);
  }
  if (v28 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v31 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*v8 + v31);
  }
  if (v15 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(*v8 + v32);
  }
  if (v10 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*v8 + 200LL) == 0) {
      v33 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt1(*v8 + v33);
      return;
    }
  }
  {
    result;
    return;
  }
}

void game_ff7720(unsigned __int8** a1, __int64* a2)
{
  unsigned __int8* v2;
  unsigned __int8* v3;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int8* v9;
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
  unsigned __int8* v20;
  char v21;
  __int64 v22;

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
        v9 = (v7 & 1) != 0 ? *((unsigned __int8**)v2 + 2) : v2 + 1;
        if ((unsigned int)memcmp(v6, v9, v5) == 0) {
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
          if ((*v2 & 1) != 0 && *((_QWORD*)v2 + 2) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v19 = 128;
            }
            else {
              v19 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v19);
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
        v20 = v12;
        do {
          v21 = *(v20 - 32);
          v20 -= 32;
          if ((v21 & 1) != 0 && *((_QWORD*)v12 - 2) != 0) {
            if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) != 0) {
              v22 = 128;
            }
            else {
              v22 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v22);
          }
          v12 = v20;
        } while (v20 != v2);
      }
      a1[1] = v2;
    }
  }
}

bool game_ffbf60(_BYTE* a1)
{
  __int64 v2;
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  char* v6;
  __int64 v7;
  unsigned __int8* v8;
  char* v9;
  char* v10;
  signed __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  char* v15;
  _BOOL4 v16;
  unsigned int v17;
  char* v18;
  __int64 v19;
  __int64 v21;
  struct {
    __int64 v23;
    signed __int64 v24;
    char* v25;
  } v23_;

  if (a1 != nullptr && *a1 != 0) {
    v2 = 0;
    while (1) {
      v4 = strlen(a1);
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
      v9 = v23_.v25;
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
      v12 = strlen(*(_UNKNOWN**)((char*)&GameData_1fffd08 + v2));
      if (v12 != 0) {
        v13 = &v10[v11];
        v14 = v12;
        if (v11 >= v12) {
          v17 = *v8;
          v18 = v10;
          do {
            v19 = memchr(v18, v17, v11 - v14 + 1);
            if (v19 == 0) {
              break;
            }
            v15 = (char*)v19;
            if ((unsigned int)memcmp(v19, v8, v14) == 0) {
              goto LABEL_33;
            }
            v18 = v15 + 1;
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
        if (v9 != nullptr) {
          v21 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v21 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v21);
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
    memcpy(v6, a1, v5);
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
                                     v16);
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
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
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

__n128 game_1007c80(__int64 a1)
{
  __int64 v1;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v22;
  __int64 v23;
  void* v24;
  _BYTE* v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  int v36;
  _QWORD* v37;
  const char* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  _WORD v44[8];
  char* v45;

  v1 = *(_QWORD*)(a1 + 208);
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_23;
  }
  if (*(_QWORD*)(v1 + 288) == 0 || (v4 = GameRoutine_975940()) == 0 ||
      *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                 8LL *
                     *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                    game_TransporterConst_List_instance__ptr
                                                                        [0] +
                                                                8LL) +
                                                     8LL) +
                                          12LL * GameData_2167728 + 4)) == 0 ||
      (game_gmap_GmapClock_instance_ != 0
           ? (v5 = game_gmap_GmapClock_instance_ + 8)
           : (v5 = game_gmap_GmapClock_kDefaultTime_ptr),
       *(unsigned __int8*)(v4 + 66) != *(__int16*)(v5 + 2) ||
           *(unsigned __int8*)(v4 + 67) != *(__int16*)(v5 + 4))) {
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_23;
    }
    v8 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48),
        *(_QWORD*)(v1 + 24) + 992LL);
    if (v8 == 0) {
      goto LABEL_23;
    }
    if (*(_DWORD*)(v8 + 32) == 0) {
      goto LABEL_23;
    }
    if (*(_QWORD*)(v1 + 288) == 0) {
      goto LABEL_23;
    }
    v9 = GameRoutine_975940();
    if (v9 == 0) {
      goto LABEL_23;
    }
    v10 = *(
        _QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                 8LL *
                     *(unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                    game_TransporterConst_List_instance__ptr
                                                                        [0] +
                                                                8LL) +
                                                     8LL) +
                                          12LL * GameData_2167728 + 4));
    if (v10 == 0) {
      goto LABEL_22;
    }
    v11 = game_gmap_GmapClock_instance_ != 0
              ? game_gmap_GmapClock_instance_ + 8
              : game_gmap_GmapClock_kDefaultTime_ptr;
    if (*(unsigned __int8*)(v9 + 66) == *(__int16*)(v11 + 2) &&
        *(unsigned __int8*)(v9 + 67) == *(__int16*)(v11 + 4)) {
      goto LABEL_22;
    }
    v30 = *(unsigned __int16*)(v9 + 240);
    if (*(_WORD*)(v9 + 240) != 0) {
      v31 = (__int64*)(*(_QWORD*)(v9 + 248) + 8LL);
      do {
        v32 = *v31;
        v31 += 2;
        if (v32 == v10) {
          goto LABEL_81;
        }
      } while (--v30 != 0);
    }
    v33 = *(unsigned __int16*)(v9 + 256);
    if (*(_WORD*)(v9 + 256) != 0) {
      v34 = (__int64*)(*(_QWORD*)(v9 + 264) + 8LL);
      while (1) {
        v35 = *v34;
        v34 += 2;
        if (v35 == v10) {
          break;
        }
        if (--v33 == 0) {
          goto LABEL_80;
        }
      }
    }
    else {
    LABEL_80:
      v36 = GameRoutine_9750e0();
      if (v36 > 0) {
      LABEL_81:
        v37 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 32, 16, 0);
        v38 = "MID_GiftReaction_Gratitude_MORE";
        v6 = (char*)v37;
      LABEL_84:
        v39 = *((_QWORD*)v38 + 1);
        *v37 = *(_QWORD*)v38;
        v37[1] = v39;
        v40 = *((_QWORD*)v38 + 2);
        v41 = *(_QWORD*)(v38 + 23);
        v37[2] = v40;
        *(_QWORD*)((char*)v37 + 23) = v41;
        v6[31] = 0;
      LABEL_24:
        v44[0] = 0;
        v42 = nullptr;
        v43 = v1;
        v7 = (char*)v44 + 1;
        if (v1 == 0) {
          goto LABEL_50;
        }
        goto LABEL_25;
      }
      if (v36 == 0) {
      LABEL_22:
        if ((GameRoutine_1008d20(*(_QWORD*)(a1 + 208)) & 1) == 0) {
        LABEL_23:
          v6 = (char*)fw_memory_HeapManager_Allocate(*v3, 40, 16, 0);
          strcpy(v6, "MID_GiftReaction_Gratitude_NORMAL");
          goto LABEL_24;
        }
        goto LABEL_81;
      }
    }
    v37 = (_QWORD*)fw_memory_HeapManager_Allocate(*v3, 32, 16, 0);
    v6 = (char*)v37;
    v38 = "MID_GiftReaction_Gratitude_LESS";
    goto LABEL_84;
  }
  v6 = (char*)fw_memory_HeapManager_Allocate(*v3, 40, 16, 0);
  v44[0] = 0;
  v43 = v1;
  strcpy(v6, "MID_GiftReaction_Gratitude_BIRTHDAY");
  v7 = (char*)v44 + 1;
LABEL_25:
  v12 = *(_QWORD**)(GameData_21ca310 + 56);
  if (v12 != nullptr) {
    v13 = 250;
    while (1) {
      v14 = v12[55];
      if (v14 != 0 && *(_BYTE*)(v14 + 16) != 9 && v12[49] == v1) {
        goto LABEL_49;
      }
      v15 = v12[333];
      if (v15 != 0 && *(_BYTE*)(v15 + 16) != 9 && v12[327] == v1) {
        v12 += 278;
        goto LABEL_49;
      }
      v16 = v12[611];
      if (v16 != 0 && *(_BYTE*)(v16 + 16) != 9 && v12[605] == v1) {
        break;
      }
      v17 = v12[889];
      if (v17 != 0 && *(_BYTE*)(v17 + 16) != 9 && v12[883] == v1) {
        v19 = 6672;
        goto LABEL_48;
      }
      v18 = v12[1167];
      if (v18 != 0 && *(_BYTE*)(v18 + 16) != 9 && v12[1161] == v1) {
        v19 = 8896;
      LABEL_48:
        v12 = (_QWORD*)((char*)v12 + v19);
        goto LABEL_49;
      }
      v12 += 1390;
      v13 -= 5;
      if (v13 == 0) {
        v12 = nullptr;
        goto LABEL_49;
      }
    }
    v19 = 4448;
    goto LABEL_48;
  }
LABEL_49:
  v42 = v12;
LABEL_50:
  game_97e570(v44, &v42, v6, "m01");
  v20 = v44[0] & 1;
  if ((v44[0] & 1) != 0) {
    v7 = v45;
  }
  if (*GameData_212d460[0] == 0 && v7 != nullptr) {
    v22 = fw_memory_HeapManager_Allocate(*v3, 1376, 16, 0);
    GameRoutine_1130770(v22, v7, 0);
    v23 = *(_QWORD*)(a1 + 40);
    if (v23 != 0) {
      *(_QWORD*)(v23 + 48) = v22;
      *(_QWORD*)(v22 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v22;
    *(_QWORD*)(v22 + 24) = "talk::Seq";
    *(_QWORD*)(v22 + 32) = a1;
    *(_DWORD*)(v22 + 140) = game_HashString32_alt1();
    *(_QWORD*)(v22 + 64) = 0;
    *(_QWORD*)(v22 + 72) = 24;
    *(_QWORD*)(v22 + 80) = 1;
    v24 = GameData_2130228;
    *(_QWORD*)(v22 + 8) = GameData_2130228;
    *(_QWORD*)(v22 + 16) = v24;
    (*(void (**)(__int64))(*(_QWORD*)v22 + 32LL))(v22);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 136LL))(v22) & 1) != 0 &&
        (*(_WORD*)(v22 + 136) & 0x100) == 0) {
      *(_WORD*)(v22 + 136) |= 0x100u;
    }
    v25 = *(_BYTE**)(v22 + 32);
    v26 = v25[138];
    if (v26 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v25 + 64LL))(*(_QWORD*)(v22 + 32));
      v26 = v25[138];
    }
    v25[138] = v26 + 1;
    *(_WORD*)(v22 + 136) |= 2u;
    v20 = v44[0] & 1;
  }
  if (v20 != 0 && v45 != nullptr) {
    v27 = 128;
    if (*(_QWORD*)(*v3 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v3 + v27);
  }
  v28 = 128;
  if (*(_QWORD*)(*v3 + 200LL) == 0) {
    v28 = 56;
  }
  return nn_mem_StandardAllocator_Free_alt1(*v3 + v28);
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
