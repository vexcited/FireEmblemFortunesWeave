#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
_QWORD* GameRoutine_d58e20(_QWORD* result, int, __int64*, int);
_QWORD* GameRoutine_dfba20(_QWORD* result, __int64);
_QWORD* GameRoutine_e1cd00(_QWORD*, _QWORD*);
_QWORD* GameRoutine_eb7720(unsigned __int16*);
_QWORD* HubCharacterNatives_ceca80(_QWORD* result, __int64, char);
__attribute__((swiftcall)) void AreaEvent_d59720(PSEUDO_X8, _QWORD* result,
                                                 int);
__attribute__((swiftcall)) void EventManager_cbc0c0(PSEUDO_X8, __int64, __int64,
                                                    __int64, __int64);
__attribute__((swiftcall)) void FastTravelManager_ee05e0(PSEUDO_X8, _QWORD,
                                                         _QWORD, _QWORD, _QWORD,
                                                         _QWORD, _QWORD,
                                                         _QWORD);
__attribute__((swiftcall)) void GameRoutine_cac400(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_d6d640(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void GameRoutine_f643c0(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD, float);
__attribute__((swiftcall)) void LocatorDispos_db1840(PSEUDO_X8);
__attribute__((swiftcall)) void LocatorDispos_db1f30(PSEUDO_X8,
                                                     unsigned __int8*);
__attribute__((swiftcall)) void
LocatorDispos_db2180(PSEUDO_X8, unsigned __int8*, unsigned __int8*);
__attribute__((swiftcall)) void Manager_d9b810(PSEUDO_X8, __int64, __int64,
                                               __int64, __int64, unsigned int);
__attribute__((swiftcall)) void Manager_d9bf20(PSEUDO_X8, __int64,
                                               unsigned __int8*,
                                               unsigned __int64, __int64*);
__attribute__((swiftcall)) void Shape_f63ef0(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                                             float);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void
    game_hub_cb8620_alt1(PSEUDO_X8, _QWORD, _QWORD) __asm__("game_hub_cb8620");
__attribute__((swiftcall)) void
    game_hub_cb8f20_alt1(PSEUDO_X8, _QWORD, _QWORD,
                         _QWORD) __asm__("game_hub_cb8f20");
__attribute__((swiftcall)) void math_Mtx43_MakeRotation(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64** game_8aef60(__int64**, unsigned __int16*, __n128);
__int64* GameRoutine_6b7aa0(__int64* result, __int64*, __int64*,
                            unsigned __int64);
__int64* GameRoutine_d6d880(__int64*, __int64);
__int64*
GameRoutine_e07e20_alt1(unsigned __int8*) __asm__("GameRoutine_e07e20");
__int64* HandlePtr_d5bf40(__int64* result, __int64, __int64*);
__int64* Manager_bc6460(float*, float32x4_t*, char);
unsigned __int128 Manager_bc6460_pair(float*, float32x4_t*,
                                      char) __asm__("Manager_bc6460");
__int64* SpineModel_64dde0_alt1(__int64*, __int64,
                                unsigned __int64) __asm__("SpineModel_64dde0");
__int64* game_ff5c20(__int64, unsigned __int8*);
__int64 CharacterModel_cf5c00(__int64);
__int64 Character_ca9280(__int64 result);
__int64 Config_bc7520(__int64, _BYTE*);
__int64 GameRoutine_1017b90(_QWORD, _QWORD);
__int64 GameRoutine_10182e0(_QWORD, _QWORD);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameRoutine_14a1b00(__int64*, float);
__int64 GameRoutine_14a3920(__int64 result);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0a8e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_60a020_alt1(__int64, __int64) __asm__("GameRoutine_60a020");
__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20_alt1(_QWORD, _QWORD, _QWORD,
                                long double) __asm__("GameRoutine_64df20");
__int64 GameRoutine_64df20_alt2(_QWORD, _QWORD,
                                _QWORD) __asm__("GameRoutine_64df20");
__int64 GameRoutine_989dc0(__int64, int);
__int64 GameRoutine_9db7e0(unsigned int);
__int64 GameRoutine_a51280(_QWORD, _QWORD);
__int64 GameRoutine_ca8780(__int64, __int64, __int64, __int64, __int64,
                           __int64);
__int64 GameRoutine_cac090(_QWORD*);
__int64 GameRoutine_cacc00(__int64 result);
__int64 GameRoutine_cae2c0(__int64, __int64*);
__int64 GameRoutine_cb8a30(_QWORD, _QWORD);
__int64 GameRoutine_cb8b80(_QWORD, _QWORD);
__int64 GameRoutine_cb8b80_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_cb8b80");
__int64 GameRoutine_cebf00(_QWORD, _QWORD);
__int64 GameRoutine_d6c500(_QWORD, _QWORD);
__int64 GameRoutine_d799f0(__int64);
__int64 GameRoutine_d7ad40(__int64*);
__int64 GameRoutine_d7ba80(_QWORD);
__int64 GameRoutine_d7c300(__int64);
__int64 GameRoutine_d80fa0(__int64 result, unsigned __int64, __int64, char);
__int64 GameRoutine_d8d080(_QWORD);
__int64 GameRoutine_d8d3a0(_QWORD, _QWORD);
__int64 GameRoutine_d8d760(_QWORD);
__int64 GameRoutine_d90ae0(__int64 result, __int64*);
__int64 GameRoutine_d977e0(_QWORD*);
__int64 GameRoutine_dfa900_alt1(_QWORD) __asm__("GameRoutine_dfa900");
__int64 GameRoutine_e02840(__int64);
__int64 GameRoutine_e02a40(__int64 result);
__int64 GameRoutine_e07e20(_QWORD);
__int64 GameRoutine_ecb40(void);
__int64 GameRoutine_efb460(__int64, __int64*);
__int64 GameRoutine_f71cb0(__int64, int);
__int64 GameRoutine_f71d40(__int64, __int64, __int64);
__int64 GameRoutine_f72090(__int64);
__int64 GameRoutine_f8eee0(_QWORD);
__int64 HandlePtr_cb3600(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_ca9ec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 HubCharacterNatives_cabfc0(__int64 result, char);
__int64 HubCharacterNatives_cac2c0(__int64 result, int);
__int64 HubCharacterNatives_cada30(__int64 result);
__int64 HubCharacterNatives_cadba0(__int64);
__int64 HubCharacterNatives_cb3e60(__int64*, __int64);
__int64 HubCharacterNatives_cb83a0(__int64, __int64*);
__int64 HubCharacterNatives_cea6b0(__int64 result);
__int64 HubCharacterNatives_cf7b40(__int64 result, char);
__int64 HubCharacterNatives_df4e10(__int64 result);
__int64 HubCharacterNatives_df4ed0(__int64);
__int64 HubCharacterNatives_df5530(__int64, int, __int64*);
__int64 HubEventNatives_d5bb40(__int64*, __int64);
__int64 Manager_66cc20(_QWORD, _QWORD);
__int64 Manager_a51640(_QWORD, _QWORD, _QWORD);
__int64 MapObjectModule_a7d120(__int64 result);
__int64 ObjectBuildCreate_c13700(_QWORD, _QWORD, _QWORD);
__int64 ObjectBuildCreate_c21360(void);
__int64 ObjectTransparentModule_f3cec0(__int64 result, float, float);
__int64 ObjectTransparent_f38800(__int64, __int64);
__int64 PopupController_d7c000(__int64 result);
__int64 Registration_a4da40(_QWORD, _QWORD);
__int64 Registration_a4f6c0(_QWORD, _QWORD);
__int64 Registration_a4f800(_QWORD, _QWORD, _QWORD);
__int64 Registration_a4fa80(_QWORD, _QWORD, _QWORD);
__int64 Shape_f64760(_QWORD);
__int64 SpineModel_64dde0(_QWORD, _QWORD, _QWORD, long double);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __cxa_guard_release_alt1(_QWORD, float) __asm__("__cxa_guard_release");
__int64 fw_containers_BalanceAfterInsert(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 fw_text_String_CopyTerminated_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "fw_text_String_CopyTerminated");
__int64 game_1023ae0(__int64 result);
__int64 game_1023ae0_alt1(_QWORD) __asm__("game_1023ae0");
__int64 game_HashString(_QWORD);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_ItemSeq_GainBind(__int64, __int64**, __int64, __int64*, __int64*);
__int64 game_d8e140(_QWORD);
__int64 game_d8ec60(_QWORD);
__int64 game_fb78c0(__int64 result);
__int64 game_hub_Character_RebuildAppearance(__int64);
__int64 game_hub_f5d880(__int64 result);
__int64 game_hub_f71fc0(__int64, __int64, __int64);
__int64 game_zview_d12d30(__int64 result, int32x2_t*, char);
__int64 game_zview_d1ff20(_QWORD, _QWORD, _QWORD);
__int64 memchr(_QWORD, _QWORD, _QWORD);
__int64 memcmp(_QWORD, _QWORD);
__int64 memcmp_alt1(_QWORD, _QWORD, _QWORD) __asm__("memcmp");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt9(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_mem_StandardAllocator_Free_alt2(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 sprintf(_QWORD, const char*, ...);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_Crc32_alt1(int, unsigned __int8*,
                       unsigned __int64) __asm__("wld_Crc32");
__n128 GameRoutine_df9ca0(__int64);
__n128 GameRoutine_efaca0(__int64, __int64*, __n128 result);
__n128 GameRoutine_efb030(__int64, _QWORD*, __int64, float);
__n128 Object_df9f60(_QWORD*);
__n128 game_hub_efb2d0_alt1(__int64, _QWORD*,
                            __int64) __asm__("game_hub_efb2d0");
__n128 nn_mem_StandardAllocator_Free_alt3(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_LockMutex(_QWORD);
__n128 nn_os_UnlockMutex(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
bool GameRoutine_d2d4e0(__int64);
bool Manager_d9af70(__int64, __int64, __int64, __int64, unsigned int);
bool TransporterConst_89ca00(unsigned __int16*);
char* GameRoutine_60a060_alt1(char*, __int64,
                              unsigned __int64) __asm__("GameRoutine_60a060");
double cos(double);
double sin(double);
extern _DWORD* GameData_212d168;
extern _DWORD GameData_1b01468[8];
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern _UNKNOWN* GameData_212c550;
extern _UNKNOWN* GameData_212c560;
extern _UNKNOWN* GameData_212d498;
extern _UNKNOWN* GameData_212d4b8;
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* as_g_context_slots_ptr;
extern _UNKNOWN GameData_1a9180c;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21a6150;
extern _UNKNOWN GameData_21a6170;
extern _UNKNOWN GameData_21a61b0;
extern _UNKNOWN GameData_22110c8;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a829d0;
extern __int128 GameData_1a82e70;
extern __int128 GameData_1a82f60;
extern __int128 GameData_1a83040;
extern __int128 GameData_1a832d0;
extern __int128 GameData_1a837f0;
extern __int128 GameData_1a83800;
extern __int128 GameData_21a6120;
extern __int128 GameData_21a6140;
extern __int128 GameData_21a6160;
extern __int128 GameData_21a61a0;
extern __int128 GameData_2210d80;
extern __int64 (*GameData_1fadca0[])();
extern __int64 (*GameData_1fd4838[])();
extern __int64 (*GameData_1fd4d30[14])();
extern __int64 (*GameData_1fd4db0[])();
extern __int64 (*GameData_1fdce28[8])();
extern __int64 (*GameData_1fdd228[])();
extern __int64 (*GameData_1fddab0[])();
extern __int64 (*GameData_1fe1bd0[14])();
extern __int64 (*GameData_1fe22c0[7])();
extern __int64 (*GameData_1fe30f0[])();
extern __int64 (*GameData_1fe3140[])();
extern __int64 (*GameData_1ff0650[])();
extern __int64 (*HandlePtr_Unknown21_cb39c0_ptr[7])();
extern __int64 (*HandlePtr_Unknown23_d5be90_ptr[6])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d458[7];
extern __int64* GameData_212ebb0[7];
extern __int64* GameData_212ebc0[5];
extern __int64* GameData_212ebe0;
extern __int64* as_g_script_manager_ptr;
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212c7d8[6];
extern __int64 GameData_212ccc0[47];
extern __int64 GameData_212d310;
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_212dc38[7];
extern __int64 GameData_212dc60[2];
extern __int64 GameData_212dc68;
extern __int64 GameData_212ef90[7];
extern __int64 GameData_212fae0[2];
extern __int64 GameData_2167700;
extern __int64 GameData_2167708;
extern __int64 GameData_2167718;
extern __int64 GameData_2167720;
extern __int64 GameData_21c9710;
extern __int64 GameData_21c9d20;
extern __int64 GameData_21ec7c0;
extern __int64 GameData_21f3c98;
extern __int64 GameData_21f3cb0;
extern __int64 GameData_21f3cb8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_220b6d0;
extern __int64 GameData_220b6e0;
extern __int64 GameData_220d620;
extern __int64 GameData_22110c0;
extern __int64 GameData_22127a8;
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern char GameData_1a9f09e;
extern char GameData_21676f8[6];
extern char GameData_2167710[6];
extern int* GameData_212d490;
extern int* GameData_212d4b0;
extern int* GameData_212df08;
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
float32x4_t* PopupController_d7bf00(float32x4_t* result);
float32x4_t* game_hub_fb6600(float32x4_t* result, unsigned __int32,
                             float32x4_t*, float32x4_t*);
unsigned __int64 GameRoutine_cadc90(__int64);
void CharacterRotate_d519c0(int8x16_t*);
void GameRoutine_62bec0(__int64, __int64, unsigned __int8);
void GameRoutine_cdeee0(__int64, __int64);
void GameRoutine_d80dc0(__int64, __int64*);
void GameRoutine_d9bc80(__int64, __int64, __int64*);
void GameRoutine_dfa900(__int64);
void GameRoutine_e2a160(__int64, unsigned int, unsigned __int16*);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) GameRoutine_919020();
void __attribute__((noreturn)) GameRoutine_cba660(_QWORD);
void __attribute__((noreturn)) GameRoutine_d80f60(_QWORD);
void __attribute__((noreturn)) GameRoutine_d80f80();
void __attribute__((noreturn)) GameRoutine_e01f60();
void __attribute__((noreturn)) GameRoutine_e01f80();
void __attribute__((noreturn)) GameRoutine_e1aa70(_QWORD);
void __attribute__((noreturn)) GameRoutine_e1aa90(_QWORD);
void __attribute__((noreturn)) GameRoutine_e1d170();
void __attribute__((noreturn)) String_60a1d0(void);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a250(const char*);
void game_zview_d20430(float32x4_t*, unsigned __int64*, char);
void game_hub_cabb20(__int64 a1);
unsigned __int64 game_hub_cad680(__int64 a1, __int64 a2, __int64 a3);
__int64 game_hub_cae040(__int64 a1, __int128* a2, __int128* a3, float a4);
__int64 game_hub_cb7460(__int64 a1);
__int64 game_hub_cb76a0(__int64 result);
__attribute__((swiftcall)) void game_hub_cb8030(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2);
__attribute__((swiftcall)) void game_hub_cb8120(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, unsigned int a3,
                                                __int64 a4);
__attribute__((swiftcall)) void
game_hub_cb8620(PSEUDO_X8 x8_, __int64 unused_int0, _QWORD* a1);
__attribute__((swiftcall)) void game_hub_cb8930(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, __int64 a3);
__attribute__((swiftcall)) void game_hub_cb8f20(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2, __int64 a3);
__attribute__((swiftcall)) void game_hub_cb9480(PSEUDO_X8 x8_, __int64 a1,
                                                unsigned __int8* a2);
__int64 game_hub_cb9a30(__int64 result);
__int64 game_hub_cb9e40(__int64 result, double a2, double a3);
void __attribute__((noreturn)) game_hub_cdcc30();
__int64 game_hub_cdd040(__int64 a1, __int64 a2);
__int64* game_hub_cdd140(_QWORD* a1, __int64* a2);
__attribute__((swiftcall)) void game_hub_cdf140(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, char a3);
__attribute__((swiftcall)) void game_hub_cdf420(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, float a4, float a5,
                                                float a6);
bool game_hub_d5ae40(__int64 a1, float32x4_t* a2, __int64 a3, double a4,
                     double a5);
double game_hub_d5b190(__int64 a1, float32x4_t* a2, char a3, float a4,
                       double a5, double a6);
bool game_hub_d5b4e0(__int64 a1);
__int64 game_hub_d69940(__int64 a1, __int64 a2);
__int64 game_hub_d6a700(unsigned __int64* a1, __int64 a2);
__int64 game_hub_d6a8e0(__int64 a1);
__attribute__((swiftcall)) void game_hub_d6abb0(PSEUDO_X8 x8_, __int64 a1,
                                                float a3);
__attribute__((swiftcall)) void game_hub_d6ae60(PSEUDO_X8 x8_, float* a1,
                                                float* a2, float a4);
__int64 game_hub_d6b900(__int64 result, double a2, double a3);
float32x4_t* game_hub_d6d160(__int64 a1, int a2, double a3, double a4);
__attribute__((swiftcall)) void game_hub_d6fba0(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, unsigned __int64 a3,
                                                __int64 a4);
__int64 game_hub_d7b370(__int64 a1);
__int64 game_hub_d7b960(__int64 a1);
__int64 game_hub_d804a0(__int64 a1);
__int64 game_hub_d806e0(__int64 result);
__attribute__((swiftcall)) void game_hub_d80c00(PSEUDO_X8 x8_, _QWORD* a1);
__n128 game_hub_d96f00(__int64 a1, __int64* a2);
__n128 game_hub_d97940(_QWORD* a1);
void game_hub_d97a00(__int64 a1, float a2);
void game_hub_dfa180(float32x4_t* result);
void game_hub_dfa520(__int64 a1);
void game_hub_dfa7a0(__int64 a1, float a2);
__int64 game_hub_dfb3f0(_QWORD* a1);
__int64 game_hub_dfb5e0(__int64 a1);
__attribute__((swiftcall)) void game_hub_dfbc80(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, __int64* a3,
                                                unsigned int a4);
void game_hub_dfc000(__int64 a1);
__int64 game_hub_dfc1e0(__int64 a1);
__attribute__((swiftcall)) void game_hub_e01a40(PSEUDO_X8 x8_, __int64 result);
__int64* game_hub_e023c0(__int64 a1, __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void game_hub_e032c0(PSEUDO_X8 x8_);
__n128 game_hub_e04ae0_alt1(__int64 a1,
                            __n128 result) __asm__("game_hub_e04ae0");
void game_hub_e08150(__int64 a1, __int64 a2, _QWORD* a3);
__attribute__((swiftcall)) void
game_hub_e1a260(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, float a3);
__attribute__((swiftcall)) void game_hub_e1a340(PSEUDO_X8 x8_, _QWORD* a1,
                                                _QWORD* a2, __n128* a3);
__attribute__((swiftcall)) void
game_hub_e1a7e0_alt1(PSEUDO_X8 x8_, _QWORD* a1,
                     __int64 a2) __asm__("game_hub_e1a7e0");
void game_hub_e1ba40(__int64** result);
__attribute__((swiftcall)) void
game_hub_e1be60_alt1(PSEUDO_X8 x8_, _QWORD* a1,
                     char* a2) __asm__("game_hub_e1be60");
__attribute__((swiftcall)) void
game_hub_e1bfe0_alt1(PSEUDO_X8 x8_, _QWORD* a1, __int64 a2,
                     __int64* a3) __asm__("game_hub_e1bfe0");
__attribute__((swiftcall)) void game_hub_e1c160(PSEUDO_X8 x8_, _QWORD* a1,
                                                char* a2, __int64* a3);
_QWORD* game_hub_e1cee0(_QWORD* a1, _QWORD* a2);
__int64 game_hub_e1dce0();
unsigned __int64 game_hub_e286a0(__int64 a1, __int64* a2);
__attribute__((swiftcall)) void game_hub_e28d20(PSEUDO_X8 x8_,
                                                __int64 unused_int0, __int64 a1,
                                                double unused_float0,
                                                double a3);
__n128 game_hub_e29f60(__int64 a1);
__int64 game_hub_e2a4a0(__int64 a1, int a2, __int64* a3, int* a4,
                        unsigned __int64 a5);
__attribute__((swiftcall)) void
game_hub_ee2c50(PSEUDO_X8 x8_, __int64 a1, unsigned __int8* a2, __int64 a3);
__n128 game_hub_efa9a0(__int64 a1, char a2, __n128 result);
float game_hub_efb160(__int64 a1, __int64* a2);
__n128 game_hub_efb2d0(__int64 a1, __int64* a2, __int64 a3);
float game_hub_efc240(__int64 a1, __int64* a2);
void game_hub_efc3b0(__int64 a1, __int64* a2, char a3, __int64 a4);
void game_hub_efc680(__int64 a1, __int64* a2, __int64 a3);
__attribute__((swiftcall)) void
game_hub_efca60_alt1(PSEUDO_X8 x8_, char* result, _QWORD* a2,
                     __int64 a3) __asm__("game_hub_efca60");
__attribute__((swiftcall)) void game_hub_efcf80(PSEUDO_X8 x8_, char* a1);
float32x4_t* game_hub_f2c8c0(__int64 a1);
void game_hub_f2e8e0(__int64 a1);
__attribute__((swiftcall)) void EventManager_cbbcc0(PSEUDO_X8, _QWORD, _QWORD,
                                                    _QWORD);
__attribute__((swiftcall)) void std___1_to_string_1a0abd0(PSEUDO_X8, _QWORD);
__int64* CharacterTrailVertex_d35160(__int64* result, _DWORD*);
__int64* GameRoutine_df8600(__int64, __int64, __int64*);
__int64 GameRoutine_60a020_alt2(_QWORD, _QWORD) __asm__("GameRoutine_60a020");
__int64 GameRoutine_cacc00_alt1(_QWORD) __asm__("GameRoutine_cacc00");
__int64 GameRoutine_d58680(__int64, _QWORD*, __int64*);
__int64 GameRoutine_d6aa20(__int64);
__int64 GameRoutine_e149a0(_QWORD, _QWORD, _QWORD);
__int64 Object_df8cc0(__int64 result);
__int64 RuntimeBuffer_8924a0(__int64 result, __int64, unsigned __int64,
                             unsigned __int8);
__n128 GameRoutine_df9600(__int64);
extern __int64 (*GameData_1fe2280[])();
extern __int64* GameData_212ebb8[6];
extern __int64 GameData_21676d8;
extern char* GameData_21676c9;
extern char GameData_21676c8;
void __attribute__((noreturn)) GameRoutine_64aa00();
void __attribute__((noreturn)) GameRoutine_65c760();
void __attribute__((noreturn)) GameRoutine_e01f40();
void game_hub_dfc300(__int64 a1, int a2, float a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7);
void game_hub_dff780(_QWORD* a1);
__attribute__((swiftcall)) void game_hub_e009e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                unsigned __int64* a2);
__attribute__((swiftcall)) void game_hub_e01240(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2);
_QWORD* GameRoutine_e1cd00_alt1(__int64*,
                                _QWORD*) __asm__("GameRoutine_e1cd00");
__attribute__((swiftcall)) void
EventManager_cbc0c0_alt1(PSEUDO_X8, __int64, __int64, unsigned __int64,
                         const char*) __asm__("EventManager_cbc0c0");
__attribute__((swiftcall)) void
game_hub_cb8f20_alt2(PSEUDO_X8, __int64 result, __int64,
                     unsigned __int64) __asm__("game_hub_cb8f20");
__int64* GameRoutine_1017b90_alt1(__int64*,
                                  __int64*) __asm__("GameRoutine_1017b90");
__int64* HandlePtr_cb3600_alt1(__int64* result, __int64, __int64,
                               unsigned __int64) __asm__("HandlePtr_cb3600");
__int64* Manager_bc6460_alt1(float*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(float*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameHr_10182e0(__int64*, __int64);
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64 GameHr_df9600(__int64);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64
GameRoutine_1a0a8e0_alt1(__int64, unsigned __int64, unsigned __int64,
                         const char*,
                         unsigned __int64) __asm__("GameRoutine_1a0a8e0");
__int64 GameRoutine_60a020_alt3(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_ca8780_alt1(__int64) __asm__("GameRoutine_ca8780");
__int64
HubCharacterNatives_ca9ec0_alt1(__int64, __int64, unsigned int,
                                __int64) __asm__("HubCharacterNatives_ca9ec0");
__int64 game_14a1b00(__int64*, float);
__int64 memchr_alt1(__int64, int, unsigned __int64) __asm__("memchr");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool Manager_d9af70_alt1(__int64) __asm__("Manager_d9af70");
int __cxa_guard_acquire_alt2(__int64) __asm__("__cxa_guard_acquire");
int memcmp_alt2(__int64, __int64, unsigned __int64) __asm__("memcmp");
int sprintf_alt1(__int64, const char*, ...) __asm__("sprintf");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void CharacterTrailVertex_d35160_alt1(__int64*, _DWORD*) __asm__(
    "CharacterTrailVertex_d35160");
void GameHr_d8d760(__int64);
void GameRoutine_d9bc80_alt1(__int64, __int64*,
                             __int64*) __asm__("GameRoutine_d9bc80");
void Object_df8cc0_alt1(__int64) __asm__("Object_df8cc0");
void __attribute__((noreturn))
GameRoutine_cba660_alt1() __asm__("GameRoutine_cba660");
void __attribute__((noreturn))
GameRoutine_e1aa90_alt1() __asm__("GameRoutine_e1aa90");
void __cxa_guard_release_alt2(__int64) __asm__("__cxa_guard_release");
void game_d8e140_alt1(__int64) __asm__("game_d8e140");
void game_d8ec60_alt1(__int64) __asm__("game_d8ec60");
void nn_mem_StandardAllocator_Free_alt4(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_hub_e04ae0(__int64 result);
__attribute__((swiftcall)) void game_hub_e1a7e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64* a2);
__attribute__((swiftcall)) void game_hub_e1be60(PSEUDO_X8 x8_, __int64* a1,
                                                char* a2);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8 x8_, __int64* a1,
                                                __int64 a2, __int64* a3);
__attribute__((swiftcall)) void game_hub_efca60(PSEUDO_X8 x8_, __int64 a1,
                                                _QWORD* a2, signed __int64 a3);

void game_hub_cabb20(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v3;
  float v4;
  __int64 v5;
  int v6;
  __int64 v7;
  unsigned __int64 v8;
  __int128 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  int v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  float v19;
  _QWORD* v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  bool v28;
  int v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  float32x4_t* v33;
  float32x4_t v34;
  int16x4_t v35;
  __int128 v36;
  __int64 v37;

  if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 512LL) == 2) {
    return;
  }
  v1 = *(_QWORD*)(a1 + 88);
  HubCharacterNatives_df4e10(v1);
  HubCharacterNatives_df4ed0(v1);
  if (*(_BYTE*)(a1 + 1060) == 1) {
    v3 = *(float*)(a1 + 1056);
    v4 = fabsf(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL) + 228LL));
    if (v3 <= 0x0.0p+0f) {
      if (v3 >= 0x0.0p+0f || (v3 = v3 + v4) <= 0x0.0p+0f) {
      LABEL_9:
        *(float*)(a1 + 1056) = v3;
        *(_BYTE*)(a1 + 1060) = 1;
        if (v3 > 0x0.0p+0f) {
          goto LABEL_13;
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
    *(_DWORD*)(a1 + 1056) = 0;
  LABEL_10:
    *(_BYTE*)(a1 + 1060) = 0;
    v5 = *(_QWORD*)(GameData_21f3d10 + 216);
    v6 = *(_DWORD*)(v5 + 232);
    if (v6 <= 1) {
      v6 = 1;
    }
    *(_DWORD*)(v5 + 232) = v6;
  }
LABEL_13:
  v7 = *(_QWORD*)(a1 + 56);
  if (v7 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
  }
  GameRoutine_d977e0(*(_QWORD**)(a1 + 72));
  if (game_ProcFadeView_instance_ != 0) {
    v8 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v8 + 172) == *(float*)(v8 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v8 + 160) + 16LL))(v8 + 160);
    }
    else {
      v9 = *(_OWORD*)(v8 + 208);
    }
    if (*((float*)&v9 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v8 + 160) + 16LL))(
                        v8 + 160, *((float*)&v9 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      *(_DWORD*)(a1 + 1064) = *(_DWORD*)(a1 + 1068);
    }
  }
  v10 = *(_QWORD*)(a1 + 24);
  v11 = *(_QWORD*)(v10 + 8);
  if (*GameData_212d168 == 1 || (*(_BYTE*)(v11 + 152) & 1) == 0 ||
      *(_BYTE*)(v11 + 145) == 1) {
    v12 = *(float*)(a1 + 1072);
    if (v12 == 0x0.0p+0f) {
      v13 = *(float*)(a1 + 1068);
    LABEL_27:
      v14 = *(unsigned __int8*)(a1 + 1080);
      v15 = *(float*)(a1 + 1076);
      *(float*)(a1 + 1064) = v13;
      if (v14 != 0) {
        v13 = v15;
      }
      if (vabds_f32(*(float*)(a1 + 1084), v13) > 0x1.0000000000000p-23f) {
        *(float*)(a1 + 1084) = v13;
        v16 = *(_QWORD*)(v10 + 8);
        v17 = *(_QWORD*)(v16 + 328);
        v18 = *(_QWORD*)(v17 + 360);
        *(_DWORD*)(v17 + 256) = 0;
        *(float*)(v17 + 240) = v13;
        *(float*)(v17 + 244) = v13;
        *(_BYTE*)(v17 + 260) = 1;
        *(_BYTE*)(v17 + 369) = 1;
        CharacterModel_cf5c00(v18);
        CharacterModel_cf5c00(v16);
      }
      goto LABEL_31;
    }
    v13 = *(float*)(a1 + 1064);
    v22 = *(float*)(a1 + 1068);
    v23 = fabsf(*(float*)(v11 + 228) / v12);
    if (v13 <= v22) {
      if (v13 >= v22) {
        goto LABEL_27;
      }
      v13 = v13 + v23;
      if (v13 <= v22) {
        goto LABEL_27;
      }
    }
    else {
      v13 = v13 - v23;
      if (v13 >= v22) {
        goto LABEL_27;
      }
    }
    v13 = *(float*)(a1 + 1068);
    goto LABEL_27;
  }
LABEL_31:
  v19 = *(float*)(a1 + 1120);
  if (v19 > 0x0.0p+0f) {
    v20 = *(_QWORD**)(a1 + 24);
    v21 = v19 - fabsf(*(float*)(v20[1] + 228LL));
    if (v21 >= 0x0.0p+0f) {
      *(float*)(a1 + 1120) = v21;
      if (v21 != 0x0.0p+0f) {
        goto LABEL_39;
      }
    }
    else {
      *(_DWORD*)(a1 + 1120) = 0;
    }
    HubCharacterNatives_ceca80(v20, 0x100000, 0);
  }
LABEL_39:
  if ((*(_BYTE*)(a1 + 186) & 0x20) != 0) {
    v24 = *(_QWORD*)(a1 + 128);
    if (v24 != 0) {
      v25 = std___1___shared_weak_count_lock(v24);
      if (v25 != 0) {
        v26 = *(_QWORD*)(a1 + 120);
        if (v26 != 0) {
          if (*(_DWORD*)(v26 + 1244) != 1) {
            v27 = *(_DWORD*)(a1 + 184);
            *(_DWORD*)(a1 + 184) = v27 & 0xFFDFFFFF;
            if ((v27 & 0xFFDFFFFF) != v27) {
              HubCharacterNatives_ceca80(*(_QWORD**)(a1 + 24), 512,
                                         (v27 & 0x40) != 0);
              if (*(_QWORD*)(a1 + 760) != 0) {
                v28 = false;
              }
              else {
                v37 = *(_QWORD*)(a1 + 112);
                v28 = v37 == 0 || *(_QWORD*)(v37 + 8) == -1;
                if (*(_DWORD*)(a1 + 1112) != 0) {
                  v28 = false;
                }
              }
              HubCharacterNatives_ceca80(
                  *(_QWORD**)(a1 + 24), 32,
                  v28 || (*(_DWORD*)(a1 + 184) & 0x400000) != 0);
              HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL),
                                         (*(_DWORD*)(a1 + 184) & 0x400020) ==
                                             0);
            }
          }
        LABEL_61:
          if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
            std___1___shared_weak_count___release_weak(v25);
          }
          goto LABEL_63;
        }
      }
    }
    else {
      v25 = 0;
    }
    v29 = *(_DWORD*)(a1 + 184);
    *(_DWORD*)(a1 + 184) = v29 & 0xFFDFFFFF;
    if ((v29 & 0xFFDFFFFF) != v29) {
      HubCharacterNatives_ceca80(*(_QWORD**)(a1 + 24), 512, (v29 & 0x40) != 0);
      if (*(_QWORD*)(a1 + 760) != 0) {
        v30 = false;
      }
      else {
        v31 = *(_QWORD*)(a1 + 112);
        v30 = v31 == 0 || *(_QWORD*)(v31 + 8) == -1;
        if (*(_DWORD*)(a1 + 1112) != 0) {
          v30 = false;
        }
      }
      HubCharacterNatives_ceca80(*(_QWORD**)(a1 + 24), 32,
                                 v30 || (*(_DWORD*)(a1 + 184) & 0x400000) != 0);
      HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL),
                                 (*(_DWORD*)(a1 + 184) & 0x400020) == 0);
    }
    if (v25 == 0) {
      goto LABEL_63;
    }
    goto LABEL_61;
  }
LABEL_63:
  v32 = *(_QWORD*)(a1 + 24);
  if (*(float*)(*(_QWORD*)(v32 + 8) + 228LL) > 0x0.0p+0f) {
    v33 = *(float32x4_t**)(v32 + 16);
    v34 = v33[35];
    LANES64(v35).n64_u64[0] =
        LANES64_OF(
            vmovn_s32(vmvnq_s8(vceqq_f32(*(float32x4_t*)(a1 + 1280), v34))))
            .n64_u64[0];
    if ((LANES64(v35).n64_u8[0] & 1) != 0 ||
        (LANES64(v35).n64_u8[2] & 1) != 0 ||
        (LANES64(v35).n64_u8[4] & 1) != 0) {
      *(_DWORD*)(a1 + 1280) = LANES128(v34).n128_u32[0];
      *(_DWORD*)(a1 + 1284) = LANES128(v33[35]).n128_u32[1];
      v36 = *(_OWORD*)(a1 + 1280);
      *((_QWORD*)&v36 + 1) = LANES128(v33[35]).n128_u32[2];
      *(_OWORD*)(a1 + 1280) = v36;
      *(_DWORD*)(a1 + 1296) = GameRoutine_f71d40(
          *GameData_212ebb0[0], (__int64)&v33[35], GameData_21f3d10 + 64);
    }
  }
  *(_BYTE*)(a1 + 1328) = 1;
}

unsigned __int64 game_hub_cad680(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
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
  __int64* v17;
  __int64* v18;
  unsigned __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 result;
  unsigned __int64 v31;
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
    __int64 v37[6];
    int v38;
  } v37_;
  unsigned __int64 v39;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a1 + 112);
  if (v4 != 0 && *(_QWORD*)(v4 + 8) != -1) {
    goto LABEL_58;
  }
  GameRoutine_cac400((void*)(v37_.v37), a1, 0),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = v37_.v37[1];
  v8 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 104) = v37_.v37[0];
  *(_QWORD*)(a1 + 112) = v7;
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v7 = *(_QWORD*)(a1 + 112);
  }
  if (v7 != 0) {
    v9 = std___1___shared_weak_count_lock(v7),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v9 != 0) {
      v10 = *(_QWORD*)(a1 + 104);
      v11 = v9;
      if (v10 != 0) {
        LOWORD(v37_.v37[0]) = 0;
        GameRoutine_d58e20((_QWORD*)v10, 0, v37_.v37, 0),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_DWORD*)(v10 + 1760) = *(_DWORD*)(v10 + 1760) & 0xFFFFFFBF |
                                 ((*(_BYTE*)(a1 + 1193) & 1) << 6);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        std___1___shared_weak_count___release_weak(v11),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
    }
  }
  HubCharacterNatives_cabfc0(a1, 1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  HubCharacterNatives_cada30(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v4 = *(_QWORD*)(a1 + 112);
  if (v4 != 0) {
  LABEL_58:
    v12 = std___1___shared_weak_count_lock(v4),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (v12 != 0) {
      v14 = *(_QWORD*)(a1 + 104);
      v15 = v12;
      if (v14 == 0) {
      LABEL_45:
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          std___1___shared_weak_count___release_weak(v15),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_47;
      }
      LOWORD(v32_.v32[0]) = 0;
      v34_.v34 = 0;
      v34_.v35 = 0;
      v34_.v36 = 0;
      if (v32_.v32 != (__int64*)a2) {
        if ((*(_BYTE*)a2 & 1) != 0) {
          GameRoutine_64df20(v32_.v32, *(_QWORD*)(a2 + 16), *(_QWORD*)(a2 + 8)),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          if (&v34_.v34 == (__int64*)a3) {
            goto LABEL_19;
          }
          goto LABEL_18;
        }
        v16 = *(_QWORD*)(a2 + 8);
        v32_.v32[0] = *(_QWORD*)a2;
        v32_.v32[1] = v16;
        v32_.v33 = *(_QWORD*)(a2 + 16);
      }
      if (&v34_.v34 == (__int64*)a3) {
      LABEL_19:
        v17 = (__int64*)(v14 + 24LL * *(int*)(a1 + 1160));
        v18 = v17 + 160;
        HandlePtr_d5bf40(v37_.v37, v13, v32_.v32),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v37_.v38 = 0;
        v19 = v17[161];
        if (v19 >= v17[162]) {
          v21 = HubEventNatives_d5bb40(v17 + 160, (__int64)v37_.v37),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          *(_BYTE*)v19 = 0;
          *(_DWORD*)(v19 + 48) = -1;
          v20 = v37_.v38;
          if (v37_.v38 != -1) {
            v39 = v19;
            ((void (*)(unsigned __int64*, __int64*))
                 HandlePtr_Unknown23_d5be90_ptr[v37_.v38])(&v39, v37_.v37),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_DWORD*)(v19 + 48) = v20;
          }
          v21 = v19 + 64;
        }
        v18[1] = v21;
        if (v37_.v38 != -1) {
          ((void (*)(unsigned __int64*, __int64*))GameData_1fdce28[v37_.v38])(
              &v39, v37_.v37),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v22 = v34_.v34;
        if (v34_.v34 != 0) {
          v23 = v34_.v35;
          v24 = fw_memory_g_heap_manager_ptr;
          if (v34_.v34 == v34_.v35) {
            goto LABEL_37;
          }
          v25 = v34_.v35;
          do {
            v26 = *(_BYTE*)(v25 - 24);
            v25 -= 24;
            if ((v26 & 1) != 0 && *(_QWORD*)(v23 - 8) != 0) {
              if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
                v27 = 128;
              }
              else {
                v27 = 56;
              }
              nn_mem_StandardAllocator_Free_alt9(*(_QWORD*)v24 + v27),
                  v13 = COERCE_AS(
                      __typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v23 = v25;
          } while (v25 != v22);
          v34_.v35 = v22;
          if (v34_.v34 != 0) {
          LABEL_37:
            v28 = 128;
            if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
              v28 = 56;
            }
            nn_mem_StandardAllocator_Free_alt9(*(_QWORD*)v24 + v28),
                v13 =
                    COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
        }
        if ((v32_.v32[0] & 1) != 0 && v32_.v33 != 0) {
          v29 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v29 = 56;
          }
          nn_mem_StandardAllocator_Free_alt9(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v29),
              v13 = COERCE_AS(__typeof__(v13),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        goto LABEL_45;
      }
    LABEL_18:
      GameRoutine_6b7aa0(
          &v34_.v34, *(__int64**)a3, *(__int64**)(a3 + 8),
          0xAAAAAAAAAAAAAAABLL *
              ((__int64)(*(_QWORD*)(a3 + 8) - *(_QWORD*)a3) >> 3)),
          v13 = COERCE_AS(__typeof__(v13),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      goto LABEL_19;
    }
  }
LABEL_47:
  HubCharacterNatives_cadba0(a1),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  result = GameRoutine_cadc90(a1),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*(_DWORD*)(a1 + 1160) == 4) {
    result = *(_QWORD*)(a1 + 200);
    if (result != 0 &&
        (result = std___1___shared_weak_count_lock(result)) != 0) {
      *(_BYTE*)(*(_QWORD*)(a1 + 192) + 217LL) = 1;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v31 = result;
        (*(void (**)(unsigned __int64))(*(_QWORD*)result + 16LL))(result),
            v13 = COERCE_AS(__typeof__(v13),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        return std___1___shared_weak_count___release_weak(v31);
      }
    }
    else {
      *(((_BYTE*)0xD8LL) + 1) = 1;
    }
  }
  return result;
}

__int64 game_hub_cae040(__int64 a1, __int128* a2, __int128* a3, float a4)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int128 v11;
  __int128 v12;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  float32x4_t v17;
  int v18;
  float32x4_t v19;
  __int64 v20;
  int v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  bool v26;
  __int64 v27;
  _DWORD v28[254];
  float32x4_t v29;
  float32x4_t v30;
  float32x4_t v31;

  result = *(_QWORD*)(a1 + 112);
  if (result != 0 && *(_QWORD*)(result + 8) != -1) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v9 = *(_QWORD*)(a1 + 104);
      v10 = result;
      if (v9 != 0) {
        GameRoutine_cae2c0((__int64)v28, (__int64*)(v9 + 120));
        v11 = *a2;
        *(float*)&v28[38] = a4;
        *(_QWORD*)&v28[35] = v11;
        v28[37] = DWORD2(v11);
        v12 = *a3;
        *(_QWORD*)&v28[39] = *(_QWORD*)a3;
        v28[41] = DWORD2(v12);
        GameRoutine_d6d880((__int64*)(v9 + 120), (__int64)v28);
        *(_DWORD*)(v9 + 1208) = 0;
        v13 = *(_QWORD*)GameData_212dbb8[0];
        v14 = GameData_212ebb0[0];
        if ((GameRoutine_f72090(*GameData_212ebb0[0]) & 1) != 0) {
          if (*(_BYTE*)(v9 + 80) == 1) {
            v16 = *(_QWORD*)(v9 + 72);
            LODWORD(v15) = *(_DWORD*)(v9 + 268);
            LANES128(v29).n128_u64[0] = *(_QWORD*)(v9 + 64);
            LANES128(v29).n128_u64[1] = v16;
            LANES128(v17).n128_u64[0] = *(_QWORD*)(v9 + 260);
            LANES128(v17).n128_u64[1] = v15;
          }
          else {
            LODWORD(v15) = *(_DWORD*)(v9 + 268);
            LANES128(v17).n128_u64[0] = *(_QWORD*)(v9 + 260);
            LANES128(v17).n128_u64[1] = v15;
            v29 = vaddq_f32(v17, *(float32x4_t*)(v9 + 16));
          }
          LANES128(v19).n128_u32[0] = 0;
          LANES128(v19).n128_u32[3] = 0;
          v20 = *v14;
          *(unsigned __int64*)((char*)LANES128(v19).n128_u64 + 4) =
              *(unsigned int*)(v9 + 280);
          v30 = v17;
          v31 = vaddq_f32(v17, v19);
          v21 = 1 << GameRoutine_f71d40(v20, (__int64)&v29, v13 + 64);
          v22 = *v14;
          *(_DWORD*)(v9 + 1208) |= v21;
          v23 = 1 << GameRoutine_f71d40(v22, (__int64)&v30, v13 + 64);
          v24 = *v14;
          *(_DWORD*)(v9 + 1208) |= v23;
          v18 = *(_DWORD*)(v9 + 1208) |
                (1 << GameRoutine_f71d40(v24, (__int64)&v31, v13 + 64));
        }
        else {
          v18 = *(_DWORD*)(v9 + 1208) | 1;
        }
        *(_DWORD*)(v9 + 1208) = v18;
        result = GameRoutine_cacc00((__int64)v28);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = std___1___shared_weak_count___release_weak(v10);
      }
    }
    v25 = *(_DWORD*)(a1 + 184);
    *(_DWORD*)(a1 + 184) = v25 | 0x100000;
    if ((v25 | 0x100000) != v25) {
      HubCharacterNatives_ceca80(*(_QWORD**)(a1 + 24), 512, (v25 & 0x40) != 0);
      if (*(_QWORD*)(a1 + 760) != 0) {
        v26 = false;
      }
      else {
        v27 = *(_QWORD*)(a1 + 112);
        v26 = v27 == 0 || *(_QWORD*)(v27 + 8) == -1;
        if (*(_DWORD*)(a1 + 1112) != 0) {
          v26 = false;
        }
      }
      HubCharacterNatives_ceca80(*(_QWORD**)(a1 + 24), 32,
                                 v26 || (*(_DWORD*)(a1 + 184) & 0x400000) != 0);
      return HubCharacterNatives_cf7b40(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8LL),
                                        (*(_DWORD*)(a1 + 184) & 0x400020) == 0);
    }
  }
  return result;
}

__int64 game_hub_cb7460(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t** v2;
  float32x4_t** i;
  unsigned __int32 v4;
  float32x4_t v5;
  float32x4_t* v6;
  float32x4_t v7;
  int16x4_t v8;
  __int64 v9;
  __int64 v15;
  __int64 j;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned __int64 v23;
  __int128 v24;
  __int64 v25;
  __int64 v26;
  __int64 result;
  float32x4_t v28;

  game_hub_f5d880(*(_QWORD*)(a1 + 88));
  game_hub_cb76a0(a1);
  v2 = *(float32x4_t***)(a1 + 24);
  for (i = *(float32x4_t***)(a1 + 32); v2 != i; v2 += 2) {
    v6 = *v2;
    if (LANES128((*v2)[83]).n128_u8[0] != 0) {
      v7 =
          *(float32x4_t*)(*(_QWORD*)(LANES128(v6[1]).n128_u64[1] + 16) + 560LL);
      LANES64(v8).n64_u64[0] =
          LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(v6[79], v7)))).n64_u64[0];
      if (((LANES64(v8).n64_u8[0] & 1) != 0 ||
           (LANES64(v8).n64_u8[2] & 1) != 0 ||
           (LANES64(v8).n64_u8[4] & 1) != 0) &&
          (LANES128(v6[83]).n128_u8[1] & 1) == 0) {
        LANES128(v6[83]).n128_u8[1] = 1;
      }
      v4 = LANES128(v7).n128_u32[1];
      v28 = v7;
      HubCharacterNatives_cabfc0((__int64)v6, 0);
      GameRoutine_cac090(v6);
      LANES128(v6[79]).n128_u32[1] = v4;
      LANES128(v6[79]).n128_u32[0] = LANES128(v28).n128_u32[0];
      v5 = v6[79];
      LANES128(v5).n128_u64[1] = LANES128(v28).n128_u32[2];
      v6[79] = v5;
    }
  }
  v9 = *(_QWORD*)(a1 + 104);
  game_fb78c0(v9);
  v15 = *(_QWORD*)(v9 + 8);
  for (j = *(_QWORD*)(v9 + 16); j != v15; j -= 16) {
    v25 = *(_QWORD*)(j - 8);
    if (v25 != 0) {
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  v17 = *(_DWORD*)(v9 + 92);
  *(_QWORD*)(v9 + 16) = v15;
  if (v17 == 0) {
    v18 = *(_QWORD*)(v9 + 32);
    v19 = *(_QWORD*)(v9 + 40);
    for (*(_QWORD*)(v9 + 72) = *(_QWORD*)(v9 + 64); v19 != v18; v19 -= 16) {
      v26 = *(_QWORD*)(v19 - 8);
      if (v26 != 0) {
        std___1___shared_weak_count___release_weak(v26);
      }
    }
    *(_QWORD*)(v9 + 40) = v18;
  }
  *(_DWORD*)(v9 + 92) = 0;
  v20 = *(_QWORD*)(a1 + 120);
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v21 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v22 = 2)
           : (v22 = 3),
       (v22 & v21) != 0)) {
    if (game_ProcFadeView_instance_ == 0) {
      goto LABEL_33;
    }
    v23 = game_ProcFadeView_instance_ +
          ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                 480)
           << 6);
    if (*(float*)(v23 + 172) == *(float*)(v23 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v23 + 160) + 16LL))(v23 + 160);
    }
    else {
      v24 = *(_OWORD*)(v23 + 208);
    }
    if (*((float*)&v24 + 3) != 0x1.0000000000000p+0f ||
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v23 + 160) + 16LL))(
                        v23 + 160, *((float*)&v24 + 3)))
                .n128_f32[3] != 0x1.0000000000000p+0f) {
    LABEL_33:
      if ((*(_BYTE*)(v20 + 12) & 1) == 0) {
        *(_BYTE*)(v20 + 12) = 1;
      }
    }
  }
  result = game_1023ae0(v20);
  *(_DWORD*)(a1 + 216) = 0;
  return result;
}

__int64 game_hub_cb76a0(__int64 result)
{
  __int64 v1;
  float32x4_t* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float v7;
  float v8;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  float v14;
  float v15;
  atomic_uchar* v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  __int64 v28;
  void* v29;
  float v30;
  float v31;
  float v32;
  _BOOL4 v33;
  _BOOL4 v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  float v41;
  void* v42;
  atomic_uchar* v43;
  float v44;
  float32x4_t v45;
  float v46;
  _BOOL4 v47;
  float v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  unsigned __int64 v53;
  float v54;
  float32x4_t v55;
  float v56;
  float32x4_t v57;
  float v58;
  unsigned __int64 v59;
  float32x4_t v60;
  float32x4_t v61;
  int8x16_t v62;
  float32x4_t v63;
  float v64;
  float v65;
  float v66;
  float32x4_t v67;
  float32x4_t v68;
  int8x16_t v69;
  float v70;
  __int64 v71;
  float32x4_t* v72;
  float v73;
  float v74;
  float32x4_t v75;
  float32x4_t v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  __int64 v93;
  atomic_uchar* v94;
  void* v95;
  int v96;
  float v97;
  float v98;
  float32x4_t v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float v109;
  float v110;
  float v111;
  float v112;
  float v113;
  float32x4_t v114;

  v1 = *(_QWORD*)(result + 80);
  if (v1 != 0) {
    v2 = *(float32x4_t**)(result + 72);
    v3 = result;
    v4 = *(_QWORD*)(result + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock(v4);
    result = std___1___shared_weak_count___release_weak(v1);
    if (v5 != 0) {
      if (v2 == nullptr ||
          (*(_BYTE*)((v6 = *(_QWORD*)(LANES128(v2[1]).n128_u64[1] + 16)) +
                     128) &
           0x80) == 0 &&
              sqrtf((float)(PSEUDO_UNFUSED(*(float*)(v6 + 672) *
                                           *(float*)(v6 + 672))) +
                    (float)(*(float*)(v6 + 668) * *(float*)(v6 + 668))) <=
                  (float)(*(float*)(v6 + 364) * 0x1.cccccc0000000p-1f)) {
      LABEL_71:
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
          return std___1___shared_weak_count___release_weak(v5);
        }
        return result;
      }
      v7 = (float)(*(float*)(*(_QWORD*)(v6 + 488) + 36LL) *
                   0x1.ca5dc20000000p+5f) *
           0x1.1df46a0000000p-6f;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                memory_order_acquire) &
           1) == 0) {
        result = __cxa_guard_acquire(&GameData_22110c8);
        if ((_DWORD)result != 0) {
          GameData_22110c0 = 0x3F80000000000000LL;
          result = __cxa_guard_release(&GameData_22110c8);
        }
      }
      v8 = v7 +
           (float)(roundf(v7 * 0x1.45f3060000000p-3f) * -0x1.921fb60000000p+2f);
      if (v8 <= 0x1.921fb60000000p+0f) {
        v10 = 0x1.0000000000000p+0f;
        if (v8 >= -0x1.921fb60000000p+0f) {
          goto LABEL_12;
        }
        v9 = -0x1.921fb60000000p+1f;
      }
      else {
        v9 = 0x1.921fb60000000p+1f;
      }
      v8 = v9 - v8;
      v10 = -0x1.0000000000000p+0f;
    LABEL_12:
      v11 = *(_QWORD*)(v3 + 24);
      v12 = *(_QWORD*)(v3 + 32);
      if (v11 != v12) {
        v13 = v8 * v8;
        v14 = 0x1.0000000000000p+0f;
        v15 = *((float*)GameData_212c190 + 1);
        v16 = (atomic_uchar*)&GameData_21a6130;
        v17 = -*(float*)GameData_212c190;
        v18 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 +
                        4);
        v19 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
        v20 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
        v21 = *((float*)GameData_212c188 + 1);
        v22 = -*(float*)GameData_212c188;
        v23 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 +
                        4);
        v24 = -*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
        v25 =
            v8 *
            (float)((float)((float)((float)((float)(v18 +
                                                    (float)((float)((float)((float)(v15 +
                                                                                    (float)(v17 *
                                                                                            (float)(v8 *
                                                                                                    v8))) *
                                                                            (float)(v8 *
                                                                                    v8)) -
                                                                    *(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190)) *
                                                            (float)(v8 * v8))) *
                                            (float)(v8 * v8)) -
                                    *(float*)((char*)((__int128*)0x10LL) +
                                              (_QWORD)GameData_212c190)) *
                            (float)(v8 * v8)) +
                    0x1.0000000000000p+0f);
        v26 = -*(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
        v27 =
            *(float*)(**(_QWORD**)(LANES128(v2[1]).n128_u64[1] + 632) + 528LL);
        v28 = GameData_212dbb8[0];
        v29 = GameData_212c540;
        v30 =
            v10 *
            (float)((float)((float)((float)((float)(v23 +
                                                    (float)((float)((float)((float)(v21 +
                                                                                    (float)(v22 *
                                                                                            v13)) *
                                                                            v13) -
                                                                    *(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c188)) *
                                                            v13)) *
                                            v13) -
                                    *(float*)((char*)((__int128*)0x10LL) +
                                              (_QWORD)GameData_212c188)) *
                            v13) +
                    0x1.0000000000000p+0f);
        v31 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v30)) -
              (float)(*(float*)&GameData_22110c0 * v25);
        v32 = (float)(PSEUDO_UNFUSED(v25 * *((float*)&GameData_22110c0 + 1))) +
              (float)(*(float*)&GameData_22110c0 * v30);
        v33 = v32 == 0x0.0p+0f;
        v34 = v31 == 0x0.0p+0f;
        v35 =
            (float)((float)((float)((float)((float)(v18 +
                                                    (float)((float)((float)((float)(v15 +
                                                                                    (float)(v17 *
                                                                                            0x1.3bd3ce0000000p+1f)) *
                                                                            0x1.3bd3ce0000000p+1f) -
                                                                    *(float*)((char*)((
                                                                                  _UNKNOWN**)0x8LL) +
                                                                              (_QWORD)
                                                                                  GameData_212c190)) *
                                                            0x1.3bd3ce0000000p+1f)) *
                                            0x1.3bd3ce0000000p+1f) -
                                    *(float*)((char*)((__int128*)0x10LL) +
                                              (_QWORD)GameData_212c190)) *
                            0x1.3bd3ce0000000p+1f) +
                    0x1.0000000000000p+0f) *
            0x1.921fb60000000p+0f;
        v36 =
            (float)((float)((float)((float)(v23 +
                                            (float)((float)((float)((float)(v21 +
                                                                            (float)(v22 *
                                                                                    0x1.3bd3ce0000000p+1f)) *
                                                                    0x1.3bd3ce0000000p+1f) -
                                                            *(float*)((char*)((
                                                                          _UNKNOWN**)0x8LL) +
                                                                      (_QWORD)
                                                                          GameData_212c188)) *
                                                    0x1.3bd3ce0000000p+1f)) *
                                    0x1.3bd3ce0000000p+1f) -
                            *(float*)((char*)((__int128*)0x10LL) +
                                      (_QWORD)GameData_212c188)) *
                    0x1.3bd3ce0000000p+1f) +
            0x1.0000000000000p+0f;
        v37 = sqrtf((float)(PSEUDO_UNFUSED(v31 * v31)) + (float)(v32 * v32));
        v38 = v32 / v37;
        v39 = v31 / v37;
        if (v33 && v34) {
          v40 = v32;
        }
        else {
          v40 = v38;
        }
        if (v33 && v34) {
          v41 = v31;
        }
        else {
          v41 = v39;
        }
        while (1) {
          if (*(_DWORD*)(*(_QWORD*)v28 + 136LL) == 1) {
            goto LABEL_30;
          }
          if (*(_BYTE*)(*(_QWORD*)v28 + 10LL) != 1) {
            goto LABEL_30;
          }
          v52 = *(_QWORD*)(*(_QWORD*)v11 + 24LL);
          if (*(_BYTE*)(v52 + 272) == 1 &&
              *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v52 + 8) + 344LL) + 352LL) ==
                  *(_QWORD*)(v52 + 264)) {
            goto LABEL_30;
          }
          if ((*(_BYTE*)(v52 + 568) & 2) == 0 ||
              (*(_BYTE*)(v52 + 385) & 1) != 0 ||
              (unsigned int)(*(_DWORD*)(v52 + 376) - 1) > 2 ||
              (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)v11 + 88LL) + 8LL) & 1) != 0) {
            goto LABEL_30;
          }
          v53 = LANES128(v2[1]).n128_u64[1];
          v54 = *(float*)(**(_QWORD**)(v52 + 632) + 528LL);
          if ((atomic_load_explicit(v16, memory_order_acquire) & 1) == 0) {
            v111 = v17;
            v113 = v15;
            v101 = v27;
            v103 = v41;
            v107 = v36;
            v109 = v35;
            v105 = v40;
            v98 = v54;
            result = __cxa_guard_acquire(v16);
            v54 = v98;
            v41 = v103;
            v40 = v105;
            v14 = 0x1.0000000000000p+0f;
            v29 = GameData_212c540;
            v36 = v107;
            v35 = v109;
            v27 = v101;
            v17 = v111;
            v15 = v113;
            v16 = (atomic_uchar*)&GameData_21a6130;
            if ((_DWORD)result != 0) {
              v93 = *((_QWORD*)GameData_212c540 + 1);
              *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
              *((_QWORD*)&GameData_21a6120 + 1) = v93;
              result = __cxa_guard_release(&GameData_21a6130);
              v54 = v98;
              v41 = v103;
              v40 = v105;
              v14 = 0x1.0000000000000p+0f;
              v29 = GameData_212c540;
              v36 = v107;
              v35 = v109;
              v27 = v101;
              v17 = v111;
              v15 = v113;
              v16 = (atomic_uchar*)&GameData_21a6130;
            }
          }
          if (v52 == v53) {
            goto LABEL_30;
          }
          v55 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v53 + 16) + 560LL),
                          COERCE_AS(float32x4_t, GameData_21a6120));
          LODWORD(v56) = HIDWORD(*(_QWORD*)(*(_QWORD*)(v52 + 16) + 560LL));
          if ((float)(v56 - *(float*)(v52 + 552)) > LANES128(v55).n128_f32[1]) {
            goto LABEL_30;
          }
          if (v56 < (float)(LANES128(v55).n128_f32[1] - *(float*)(v53 + 552))) {
            goto LABEL_30;
          }
          v57 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v52 + 16) + 560LL), v55);
          v58 = v27 + v54;
          if ((float)(LANES128_OF(vmulq_f32(v57, v57)).n128_f32[2] +
                      (float)(LANES128(v57).n128_f32[0] *
                              LANES128(v57).n128_f32[0])) >
              (float)((float)(v58 + v58) * (float)(v58 + v58))) {
            goto LABEL_30;
          }
          v59 = LANES128(v2[1]).n128_u64[1];
          v60 = v2[79];
          v61 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v59 + 16) + 560LL), v60);
          v62 = vmulq_f32(v61, v61);
          LANES128(v62).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v62, v62, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v63).n128_u64[0] =
              LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v62).n128_u64[0])))
                  .n64_u64[0];
          v64 = LANES64_OF(vsqrt_f32(COERCE_AS(float32x2_t,
                                               LANES128(v63).n128_u64[0])))
                    .n64_f32[0];
          if (v64 <= 0x0.0p+0f) {
            goto LABEL_30;
          }
          LANES128(v63).n128_u64[1] = LANES128(v63).n128_u64[0];
          v65 = v58 * v58;
          v66 = 0x0.0p+0f;
          v67 = vrsqrteq_f32(v63);
          v68 = vmulq_f32(v67, vrsqrtsq_f32(v67, vmulq_f32(v63, v67)));
          v69 = vbicq_s8(
              vmulq_f32(v61,
                        vmulq_f32(v68, vrsqrtsq_f32(v68, vmulq_f32(v63, v68)))),
              vceqzq_f32(v63));
          v70 = *(float*)(v59 + 552);
          v71 = *(_QWORD*)(*(_QWORD*)v11 + 24LL);
          v72 = *(float32x4_t**)(v71 + 16);
          v73 = LANES128(v72[35]).n128_f32[1];
          v74 = v73 - *(float*)(v71 + 552);
          while (1) {
            v75 = vaddq_f32(v60, vmulq_n_f32(v69, v66));
            v114 = v75;
            if ((float)(LANES128(v75).n128_f32[1] - v70) <= v73 &&
                LANES128(v75).n128_f32[1] >= v74) {
              v77 = vsubq_f32(v75, v72[35]);
              if ((float)(LANES128_OF(vmulq_f32(v77, v77)).n128_f32[2] +
                          (float)(LANES128(v77).n128_f32[0] *
                                  LANES128(v77).n128_f32[0])) <= v65) {
                break;
              }
            }
            v66 = v66 + 0x1.99999a0000000p-3f;
            if (v66 >= v64) {
              goto LABEL_30;
            }
          }
          v78 = *(float*)(LANES128(v72[30]).n128_u64[1] + 36);
          v110 = v17;
          v112 = v15;
          v100 = v27;
          v102 = v41;
          v106 = v36;
          v108 = v35;
          v104 = v40;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110c8,
                                    memory_order_acquire) &
               1) == 0) {
            v94 = v16;
            v95 = v29;
            v99 = v75;
            v97 = v78;
            v96 = __cxa_guard_acquire(&GameData_22110c8);
            v78 = v97;
            v75 = v99;
            v41 = v102;
            v40 = v104;
            v36 = v106;
            v35 = v108;
            v17 = v110;
            v15 = v112;
            v14 = 0x1.0000000000000p+0f;
            v29 = v95;
            v16 = v94;
            if (v96 != 0) {
              GameData_22110c0 = 0x3F80000000000000LL;
              __cxa_guard_release(&GameData_22110c8);
              v78 = v97;
              v75 = v99;
              v41 = v102;
              v40 = v104;
              v36 = v106;
              v35 = v108;
              v17 = v110;
              v15 = v112;
              v14 = 0x1.0000000000000p+0f;
              v29 = v95;
              v16 = v94;
            }
          }
          v79 = (float)(PSEUDO_UNFUSED((float)(v78 * 0x1.ca5dc20000000p+5f) *
                                       0x1.1df46a0000000p-6f)) +
                (float)(roundf((float)((float)(v78 * 0x1.ca5dc20000000p+5f) *
                                       0x1.1df46a0000000p-6f) *
                               0x1.45f3060000000p-3f) *
                        -0x1.921fb60000000p+2f);
          if (v79 <= 0x1.921fb60000000p+0f) {
            v81 = 0x1.0000000000000p+0f;
            if (v79 >= -0x1.921fb60000000p+0f) {
              goto LABEL_58;
            }
            v80 = -0x1.921fb60000000p+1f;
          }
          else {
            v80 = 0x1.921fb60000000p+1f;
          }
          v79 = v80 - v79;
          v81 = -0x1.0000000000000p+0f;
        LABEL_58:
          v82 = v79 * v79;
          v83 =
              v79 *
              (float)(v14 +
                      (float)((float)(v20 +
                                      (float)((float)(v18 +
                                                      (float)((float)(v19 +
                                                                      (float)((float)(v15 +
                                                                                      (float)(v17 *
                                                                                              (float)(v79 *
                                                                                                      v79))) *
                                                                              (float)(v79 *
                                                                                      v79))) *
                                                              (float)(v79 *
                                                                      v79))) *
                                              (float)(v79 * v79))) *
                              (float)(v79 * v79)));
          v84 =
              v81 *
              (float)(v14 +
                      (float)((float)(v26 +
                                      (float)((float)(v23 +
                                                      (float)((float)(v24 +
                                                                      (float)((float)(v21 +
                                                                                      (float)(v22 *
                                                                                              v82)) *
                                                                              v82)) *
                                                              v82)) *
                                              v82)) *
                              v82));
          v85 =
              (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v83)) +
              (float)(*(float*)&GameData_22110c0 * v84);
          v86 =
              (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) * v84)) -
              (float)(*(float*)&GameData_22110c0 * v83);
          if (v85 != 0x0.0p+0f ||
              (v87 = (float)(PSEUDO_UNFUSED(*((float*)&GameData_22110c0 + 1) *
                                            v83)) +
                     (float)(*(float*)&GameData_22110c0 * v84),
               v88 = v86, v86 != 0x0.0p+0f)) {
            v89 =
                sqrtf((float)(PSEUDO_UNFUSED(v86 * v86)) + (float)(v85 * v85));
            v87 = v85 / v89;
            v88 = v86 / v89;
          }
          v90 = (float)(PSEUDO_UNFUSED(v35 * v86)) + (float)(v85 * v36);
          v91 = (float)(PSEUDO_UNFUSED(v36 * v86)) - (float)(v85 * v35);
          if (v90 != 0x0.0p+0f || v91 != 0x0.0p+0f) {
            v92 =
                sqrtf((float)(PSEUDO_UNFUSED(v91 * v91)) + (float)(v90 * v90));
            v90 = v90 / v92;
            v91 = v91 / v92;
          }
          v45 = vsubq_f32(
              v75, *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v11 + 24LL) +
                                              16LL) +
                                   560LL));
          v46 = LANES128(v45).n128_f32[2];
          if (LANES128(v45).n128_f32[0] == 0x0.0p+0f &&
              LANES128(v45).n128_f32[2] == 0x0.0p+0f) {
            v42 = v29;
            v43 = v16;
          }
          else {
            v42 = v29;
            v43 = v16;
            v44 = sqrtf(
                (float)(PSEUDO_UNFUSED(LANES128(v45).n128_f32[2] *
                                       LANES128(v45).n128_f32[2])) +
                (float)(LANES128(v45).n128_f32[0] * LANES128(v45).n128_f32[0]));
            LANES128(v45).n128_f32[0] = LANES128(v45).n128_f32[0] / v44;
            v46 = LANES128(v45).n128_f32[2] / v44;
          }
          v47 = (float)((float)(PSEUDO_UNFUSED(v41 * v88)) +
                        (float)(v40 * v87)) > 0x0.0p+0f;
          v48 = (float)(PSEUDO_UNFUSED(v91 * v46)) +
                (float)(v90 * LANES128(v45).n128_f32[0]);
          v49 = v48 <= 0x0.0p+0f || v47;
          if (v47 && v48 <= 0x0.0p+0f) {
            v50 = -196253042;
          }
          else {
            v50 = -196253048;
          }
          if (v49 != 0) {
            v51 = v50;
          }
          else {
            v51 = -196253042;
          }
          result = HubCharacterNatives_df5530(*(_QWORD*)(*(_QWORD*)v11 + 88LL),
                                              v51, (__int64*)&v114);
          v41 = v102;
          v40 = v104;
          v17 = v110;
          v15 = v112;
          v27 = v100;
          v36 = v106;
          v35 = v108;
          v14 = 0x1.0000000000000p+0f;
          v16 = v43;
          v29 = v42;
        LABEL_30:
          v11 += 16;
          if (v11 == v12) {
            goto LABEL_71;
          }
        }
      }
      goto LABEL_71;
    }
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_cb8030(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8[2];
  struct {
    __int64 v9;
    __int64 v10;
  } v9_;

  result = X8CALL_X0(__int64, game_hub_cb8120((void*)(&v9_.v9), a1, a2, 3u, 0));
  v6 = v9_.v9;
  if (v9_.v9 != 0) {
    v7 = v9_.v10;
    *(_BYTE*)(v9_.v9 + 1132) = 1;
    v8[0] = v6;
    v8[1] = v7;
    if (v7 == 0) {
      result = HubCharacterNatives_cb83a0((__int64)a1, v8);
      *a3 = v6;
      a3[1] = 0;
      {
        result;
        return;
      }
    }
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    HubCharacterNatives_cb83a0((__int64)a1, v8);
    result = std___1___shared_weak_count___release_weak(v7);
    *a3 = v6;
    a3[1] = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v7 = v9_.v10;
    if (v9_.v10 == 0) {
      goto LABEL_10;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != 0) {
      result;
      return;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
    result = std___1___shared_weak_count___release_weak(v7);
    if (v6 != 0) {
      result;
      return;
    }
  }
LABEL_10:
  *a3 = 0;
  a3[1] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_cb8120(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, unsigned int a3,
                                                __int64 a4)
{
  __int64* a5 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v6;
  _QWORD* v7;
  __int64 v12;
  __int64 v13;
  __int64 result;
  __int64* v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned int v33;
  __int64 v34;
  __int64 v35[2];

  v6 = (_QWORD*)a1[3];
  v7 = (_QWORD*)a1[4];
  if (v6 == v7) {
    goto LABEL_8;
  }
  while (*(_QWORD*)(*v6 + 264LL) != *(_QWORD*)(a2 + 56)) {
    v6 += 2;
    if (v6 == v7) {
      goto LABEL_8;
    }
  }
  v12 = v6[1];
  if (v12 == 0 ||
      (atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                 memory_order_relaxed),
       v13 = *(_QWORD*)(v12 + 8),
       result = std___1___shared_weak_count___release_weak_alt2(v12),
       v13 == -1)) {
  LABEL_8:
    v15 = (__int64*)fw_memory_g_heap_manager_ptr;
    v16 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 1376, 16, 0);
    v17 = (__int64)(v16 + 4);
    v18 = (__int64)v16;
    v16[1] = 0;
    v16[2] = 0;
    *v16 = GameData_1fd4838;
    GameRoutine_ca8780_alt1((__int64)(v16 + 4));
    v19 = (__int64*)a1[4];
    v20 = a1[5];
    if ((unsigned __int64)v19 >= v20) {
      v34 = a4;
      v22 = a1[3];
      v33 = a3;
      v23 = (unsigned __int64)v19 - v22;
      v24 = ((__int64)v19 - v22) >> 4;
      v25 = v24 + 1;
      if ((unsigned __int64)(v24 + 1) >> 60 != 0) {
        GameRoutine_cba660_alt1();
      }
      v26 = v20 - v22;
      if (v26 >> 3 > v25) {
        v25 = v26 >> 3;
      }
      if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFF0LL) {
        v27 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v27 = v25;
      }
      if (v27 >> 60 != 0) {
        GameRoutine_60a210_alt1();
      }
      v28 = fw_memory_HeapManager_Allocate_alt1(*v15, 16 * v27, 16, 0);
      v29 = (__int64*)(v28 + v23);
      v30 = v28 + 16 * v27;
      *v29 = v17;
      v29[1] = v18;
      v31 = v28 + v23 - 16 * v24;
      v21 = v28 + v23 + 16;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      memcpy_alt1(v31, v22, v23);
      a1[3] = v31;
      a1[4] = v21;
      a1[5] = v30;
      if (v22 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt4(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v22);
      }
      a4 = v34;
      a3 = v33;
    }
    else {
      *v19 = v17;
      v19[1] = v18;
      v21 = (__int64)(v19 + 2);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
    }
    a1[4] = v21;
    result = HubCharacterNatives_ca9ec0_alt1(v17, a2, a3, a4);
    if ((result & 1) != 0) {
      *a5 = v17;
      a5[1] = v18;
    }
    else {
      v35[0] = v17;
      v35[1] = v18;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 16), 1u,
                                memory_order_relaxed);
      GameRoutine_cb8b80_alt1((__int64)a1, v35);
      result = std___1___shared_weak_count___release_weak_alt2(v18);
      *a5 = 0;
      a5[1] = 0;
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        {
          std___1___shared_weak_count___release_weak_alt2(v18);
          return;
        }
      }
    }
  }
  else {
    *a5 = 0;
    a5[1] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_cb8620(PSEUDO_X8 x8_,
                                                __int64 unused_int0, _QWORD* a1)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  const char* v14;
  char* v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _DWORD* v23;
  __int64 v24;
  _DWORD* v25;
  unsigned __int64 v26;
  bool v27;
  struct {
    __int64 v28[2];
    char* v29;
  } v28_;
  char v30[256];
  char v31[256];

  LocatorDispos_db1840((void*)(v28_.v28));
  *(_BYTE*)(a2 + 48) = 0;
  *(_QWORD*)(a2 + 32) = 0;
  *(_QWORD*)(a2 + 40) = 0;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_QWORD*)a2 = 0;
  *(_QWORD*)(a2 + 8) = 0;
  *(_BYTE*)(a2 + 664) = 0;
  *(_BYTE*)(a2 + 672) = 0;
  *(_BYTE*)(a2 + 736) = 0;
  *(_BYTE*)(a2 + 744) = 0;
  *(_BYTE*)(a2 + 808) = 0;
  *(_QWORD*)(a2 + 824) = 0;
  *(_QWORD*)(a2 + 832) = 0;
  *(_QWORD*)(a2 + 840) = 0;
  memset_alt1(a2 + 56, 0, 0x1ECu);
  v4 = (_QWORD*)(a2 + 88);
  *(_QWORD*)(a2 + 552) = 0;
  *(_QWORD*)(a2 + 560) = 0;
  *(_QWORD*)(a2 + 568) = 0;
  *(_QWORD*)(a2 + 576) = 0;
  *(_QWORD*)(a2 + 584) = 0;
  *(_QWORD*)(a2 + 592) = 0;
  *(_BYTE*)(a2 + 600) = 0;
  *(_DWORD*)(a2 + 816) = 0;
  if ((_QWORD*)(a2 + 88) != a1) {
    if ((*(_BYTE*)a1 & 1) != 0) {
      GameRoutine_64df20(v4, a1[2], a1[1]);
    }
    else {
      v5 = a1[1];
      *v4 = *a1;
      *(_QWORD*)(a2 + 96) = v5;
      *(_QWORD*)(a2 + 104) = a1[2];
    }
  }
  v6 = (_QWORD*)(a2 + 112);
  if ((_QWORD*)(a2 + 112) != a1) {
    v7 = *(unsigned __int8*)a1;
    if ((*(_BYTE*)v6 & 1) != 0) {
      v9 = (v7 & 1) == 0;
      v10 = v7 >> 1;
      if (v9) {
        v11 = (__int64)a1 + 1;
      }
      else {
        v11 = a1[2];
      }
      if (v9) {
        v12 = v10;
      }
      else {
        v12 = a1[1];
      }
      SpineModel_64dde0_alt1((__int64*)(a2 + 112), v11, v12);
    }
    else if ((v7 & 1) != 0) {
      GameRoutine_64df20((_QWORD*)(a2 + 112), a1[2], a1[1]);
    }
    else {
      v8 = a1[1];
      *v6 = *a1;
      *(_QWORD*)(a2 + 120) = v8;
      *(_QWORD*)(a2 + 128) = a1[2];
    }
  }
  v13 = GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v14 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v14 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
  }
  if ((v28_.v28[0] & 1) != 0) {
    v15 = v28_.v29;
  }
  else {
    v15 = (char*)v28_.v28 + 1;
  }
  sprintf_alt1((__int64)v30, "%s::%s", "Temporary", v15);
  sprintf_alt1((__int64)v31, "%s=%s", v14, v30);
  GameRoutine_60a020_alt3(a2, v31);
  v16 = *(unsigned __int8*)(a2 + 112);
  v17 = *(_QWORD*)(a2 + 120);
  if ((v16 & 1) == 0) {
    v17 = v16 >> 1;
  }
  if (v17 >= 4) {
    if ((v16 & 1) != 0) {
      v22 = *(_QWORD*)(a2 + 128);
    }
    else {
      v22 = a2 + 113;
    }
    v23 = (_DWORD*)(v22 + v17);
  LABEL_42:
    v24 = v22;
    do {
      v25 = (_DWORD*)memchr_alt1(v24, 80, v17 - 3);
      if (v25 == nullptr) {
        break;
      }
      if (*v25 == 1598310736) {
        if (v25 != v23 && (_DWORD*)((char*)v25 - v22) != (_DWORD*)-1LL) {
          GameRoutine_1a0a8e0_alt1(a2 + 112, (unsigned __int64)v25 - v22, 4u,
                                   &GameData_1a9f09e, 0);
          v26 = *(unsigned __int8*)(a2 + 112);
          v27 = (v26 & 1) == 0;
          v17 = v26 >> 1;
          if (v27) {
            v22 = a2 + 113;
          }
          else {
            v22 = *(_QWORD*)(a2 + 128);
          }
          if (!v27) {
            v17 = *(_QWORD*)(a2 + 120);
          }
          v23 = (_DWORD*)(v22 + v17);
          if (v17 > 3) {
            goto LABEL_42;
          }
        }
        break;
      }
      v24 = (__int64)v25 + 1;
      v17 = (__int64)v23 - v24;
    } while ((__int64)v23 - v24 >= 4);
  }
  v18 = *(unsigned __int8*)(*(_QWORD*)v13 + 64LL);
  if ((v18 & 1) != 0) {
    v19 = *(_QWORD*)(*(_QWORD*)v13 + 72LL);
  }
  else {
    v19 = v18 >> 1;
  }
  if ((v18 & 1) != 0) {
    v20 = *(_QWORD*)(*(_QWORD*)v13 + 80LL);
  }
  else {
    v20 = *(_QWORD*)v13 + 65LL;
  }
  GameRoutine_60a060_alt1((char*)(a2 + 824), v20, v19);
  GameHr_d8d760(a2);
  GameRoutine_e07e20_alt1((unsigned __int8*)a2);
  game_d8e140_alt1(a2);
  game_d8ec60_alt1(a2);
  if ((v28_.v28[0] & 1) != 0 && v28_.v29 != nullptr) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, (__int64)v28_.v29);
  }
}

__attribute__((swiftcall)) void game_hub_cb8930(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  result = X8CALL_X0(__int64, game_hub_cb8120((void*)(&v12), a1, a2, 0, a3));
  v7 = v12;
  if (v12 != 0) {
    v8 = v13;
    *(_BYTE*)(v12 + 1132) = 1;
    v10 = v7;
    v11 = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
    }
    GameRoutine_cb8a30(a1 + 6, &v10);
    result = v11;
    if (v11 != 0) {
      result = std___1___shared_weak_count___release_weak(v11);
    }
    *a4 = v7;
    a4[1] = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        {
          std___1___shared_weak_count___release_weak(v8);
          return;
        }
      }
    }
  }
  else {
    v9 = v13;
    if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = std___1___shared_weak_count___release_weak(v9);
    }
    *a4 = 0;
    a4[1] = 0;
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_cb8f20(PSEUDO_X8 x8_, __int64 result,
                                                __int64 a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v4;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  a4[1] = 0;
  a4[2] = 0;
  *a4 = 0;
  if (a3 != 0) {
    v4 = *(__int64**)(result + 24);
    for (i = *(__int64**)(result + 32); v4 != i; v4 += 2) {
      v9 = *v4;
      if (*v4 != 0) {
        v10 = *(_QWORD*)(v9 + 16);
        v11 = *(_QWORD*)(v10 + 8);
        result = strlen(v11);
        if (a3 == result) {
          result = memcmp(a2, v11);
          if ((_DWORD)result == 0) {
            goto LABEL_11;
          }
        }
        v12 = *(_QWORD*)(*(_QWORD*)(v10 + 24) + 1784LL);
        if (v12 != 0) {
          v13 = *(_QWORD*)(v12 + 8);
          result = strlen(v13);
          if (a3 == result) {
            result = memcmp(a2, v13);
            if ((_DWORD)result == 0) {
            LABEL_11:
              v15 = v9;
              v14 = v4[1];
              v16 = v14;
              if (v14 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16),
                                          1u, memory_order_relaxed);
              }
              GameRoutine_cb8a30(a4, &v15);
              result = v16;
              if (v16 != 0) {
                result = std___1___shared_weak_count___release_weak(v16);
              }
            }
          }
        }
      }
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_cb9480(PSEUDO_X8 x8_, __int64 a1,
                                                unsigned __int8* a2)
{

#pragma clang fp contract(off)
  float32x4_t** a3 = (float32x4_t**)PSEUDO_X8_VALUE(x8_);
  __int64 result;
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
  unsigned __int64 v17;
  unsigned __int8* v18;
  unsigned __int64 v19;
  bool v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  unsigned __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  float v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  float32x4_t* v41;
  __int64 v42;
  int32x2_t* v43;
  float32x4_t v44;
  int8x16_t v45;
  __int64 v46;
  float32x4_t v47;
  float v48;
  _QWORD* v49;
  float v50;
  __int64 v51;
  int8x16_t* v52;
  int v53;
  __int64 v54;
  float32x4_t** v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60[2];
  struct {
    float32x4_t* v61;
    __int64 v62;
  } v61_;
  _QWORD v63[14];
  struct {
    __int64 v64;
    char gap160_[744];
    float32x4_t** v65;
  } v64_;

  result = game_hub_cb9a30(a1);
  v7 = *(_QWORD*)(a1 + 80);
  if (v7 != 0 &&
      (v8 = *(_QWORD*)(a1 + 72), v9 = *(_QWORD*)(a1 + 80),
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                                 memory_order_relaxed),
       v10 = std___1___shared_weak_count_lock(v9),
       result = std___1___shared_weak_count___release_weak(v7), v10 != 0)) {
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                memory_order_relaxed);
      *(_BYTE*)(v8 + 1080) = 1;
      *(_DWORD*)(v8 + 1076) = 0;
      if (fabsf(*(float*)(v8 + 1084)) > 0x1.0000000000000p-23f) {
        v11 = *(_QWORD*)(v8 + 24);
        *(_DWORD*)(v8 + 1084) = 0;
        v12 = *(_QWORD*)(v11 + 8);
        v13 = *(_QWORD*)(v12 + 328);
        v14 = *(_QWORD*)(v13 + 360);
        *(_QWORD*)(v13 + 240) = 0;
        *(_DWORD*)(v13 + 256) = 0;
        *(_BYTE*)(v13 + 260) = 1;
        *(_BYTE*)(v13 + 369) = 1;
        CharacterModel_cf5c00(v14);
        CharacterModel_cf5c00(v12);
      }
      v15 = *(_QWORD*)(v8 + 24);
      *(_DWORD*)(v15 + 368) = 0;
      *(_BYTE*)(v15 + 372) = 1;
      v16 = HubCharacterNatives_cea6b0(v15);
      v17 = *a2;
      v19 = *((_QWORD*)a2 + 1);
      v18 = *((unsigned __int8**)a2 + 2);
      v20 = (v17 & 1) == 0;
      v21 = v17 >> 1;
      v64_.v65 = a3;
      if (v20) {
        v22 = a2 + 1;
      }
      else {
        v22 = v18;
      }
      if (v20) {
        v23 = v21;
      }
      else {
        v23 = v19;
      }
      if (v23 != 0) {
        v59 = v10;
        v25 = *(__int64**)(a1 + 24);
        v24 = *(__int64**)(a1 + 32);
        while (1) {
          if (v25 == v24) {
            goto LABEL_30;
          }
          v26 = *v25;
          if (*v25 != 0) {
            v27 = *(_QWORD*)(v26 + 16);
            v28 = *(_QWORD*)(v27 + 8);
            v16 = strlen(v28);
            if (v23 == v16) {
              v16 = memcmp_alt1(v22, v28, v23);
              if ((_DWORD)v16 == 0) {
                break;
              }
            }
            v29 = *(_QWORD*)(*(_QWORD*)(v27 + 24) + 1784LL);
            if (v29 != 0) {
              v30 = *(_QWORD*)(v29 + 8);
              v16 = strlen(v30);
              if (v23 == v16) {
                v16 = memcmp_alt1(v22, v30, v23);
                if ((_DWORD)v16 == 0) {
                  break;
                }
              }
            }
          }
          v25 += 2;
        }
        v31 = v25[1];
        if (v31 == 0) {
        LABEL_30:
          v10 = v59;
          goto LABEL_31;
        }
        v32 = v25[1];
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                  memory_order_relaxed);
        v33 = std___1___shared_weak_count_lock(v32);
        v16 = std___1___shared_weak_count___release_weak(v31);
        v10 = v59;
        if (v33 == 0) {
          goto LABEL_32;
        }
        v34 = *(float*)(v26 + 1084);
        *(_DWORD*)(v26 + 1076) = 0;
        *(_BYTE*)(v26 + 1080) = 1;
        if (fabsf(v34) > 0x1.0000000000000p-23f) {
          v35 = *(_QWORD*)(v26 + 24);
          *(_DWORD*)(v26 + 1084) = 0;
          v36 = *(_QWORD*)(v35 + 8);
          v37 = *(_QWORD*)(v36 + 328);
          v38 = *(_QWORD*)(v37 + 360);
          *(_QWORD*)(v37 + 240) = 0;
          *(_DWORD*)(v37 + 256) = 0;
          *(_BYTE*)(v37 + 260) = 1;
          *(_BYTE*)(v37 + 369) = 1;
          CharacterModel_cf5c00(v38);
          v16 = CharacterModel_cf5c00(v36);
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
          v16 = std___1___shared_weak_count___release_weak(v33);
        }
      }
      else {
      LABEL_31:
        v33 = 0;
      LABEL_32:
        v26 = 0;
      }
      game_hub_cb8620_alt1((void*)(v63), v16, a2);
      GameRoutine_60a020_alt1((__int64)&v64_.v64, (__int64)&GameData_1a9180c);
      game_hub_cb8930((void*)(&v61_.v61), (_QWORD*)a1, (__int64)v63,
                      0x100000000LL);
      v39 = v61_.v62;
      if (v61_.v62 != 0) {
        v40 = std___1___shared_weak_count_lock(v61_.v62);
        if (v40 != 0) {
          v41 = v61_.v61;
        }
        else {
          v41 = nullptr;
        }
        std___1___shared_weak_count___release_weak(v39);
      }
      else {
        v41 = nullptr;
        v40 = 0;
      }
      v42 = LANES128(v41[1]).n128_i64[1];
      *(_BYTE*)(v42 + 372) = 1;
      *(_DWORD*)(v42 + 368) = 5;
      HubCharacterNatives_cea6b0(v42);
      v43 = *(int32x2_t**)(*(_QWORD*)(v8 + 24) + 16LL);
      game_zview_d12d30(*(_QWORD*)(LANES128(v41[1]).n128_u64[1] + 16), v43 + 70,
                        1);
      v44 = vsubq_f32(
          v41[79],
          *(float32x4_t*)(*(_QWORD*)(LANES128(v41[1]).n128_u64[1] + 16) +
                          560LL));
      v45 = vmulq_f32(v44, v44);
      LANES128(v45).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v45, v45, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
              .n64_u64[0];
      if (LANES64_OF(
              vpadd_f32(COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v45).n128_u64[0])))
              .n64_f32[0] > 0x1.0000000000000p-23f) {
        v46 = *(_QWORD*)(GameData_21ec7c0 + 120);
        if ((*(_BYTE*)(v46 + 12) & 1) == 0) {
          *(_BYTE*)(v46 + 12) = 1;
        }
      }
      LANES128(v41[79]).n128_u32[0] = LANES64(v43[70]).n64_u32[0];
      LANES128(v41[79]).n128_u32[1] = LANES64(v43[70]).n64_u32[1];
      v47 = v41[79];
      LANES128(v47).n128_u64[1] = LANES64(v43[71]).n64_u32[0];
      v41[79] = v47;
      HubCharacterNatives_cabfc0((__int64)v41, 1);
      v48 =
          *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 16LL) + 488LL) +
                    36LL) *
          0x1.ca5dc20000000p+5f;
      if ((LANES128(v41[83]).n128_u8[1] & 1) == 0) {
        LANES128(v41[83]).n128_u8[1] = 1;
      }
      v49 = *(_QWORD**)(LANES128(v41[1]).n128_u64[1] + 16);
      v50 = v48 * 0x1.1df46a0000000p-6f;
      if (v49[107] != 0) {
        v51 = v49[108];
        v49[107] = 0;
        v49[108] = 0;
        if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
          std___1___shared_weak_count___release_weak(v51);
        }
      }
      v52 = (int8x16_t*)v49[61];
      v53 = LANES128(v52[11]).n128_u8[4];
      LANES128(v52[2]).n128_f32[0] = v50;
      LANES128(v52[2]).n128_f32[1] = v50;
      if (v53 == 1) {
        LANES128(v52[11]).n128_u8[4] = 0;
      }
      CharacterRotate_d519c0(v52);
      v60[0] = (__int64)v41;
      v60[1] = v40;
      if (v40 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                  memory_order_relaxed);
        HubCharacterNatives_cb83a0(a1, v60);
        std___1___shared_weak_count___release_weak(v40);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v40 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v40 + 16LL))(v40);
          std___1___shared_weak_count___release_weak(v40);
        }
      }
      else {
        HubCharacterNatives_cb83a0(a1, v60);
      }
      Character_ca9280((__int64)v63);
      if (*(_BYTE*)(a1 + 208) == 1) {
        if (v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                    memory_order_relaxed);
        }
        v54 = *(_QWORD*)(a1 + 168);
        *(_QWORD*)(a1 + 160) = v26;
        *(_QWORD*)(a1 + 168) = v33;
        if (v54 != 0) {
          std___1___shared_weak_count___release_weak(v54);
        }
        v55 = v64_.v65;
        if (v40 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                    memory_order_relaxed);
        }
        v56 = *(_QWORD*)(a1 + 184);
        *(_QWORD*)(a1 + 176) = v41;
        *(_QWORD*)(a1 + 184) = v40;
        if (v56 != 0) {
          std___1___shared_weak_count___release_weak(v56);
        }
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        v57 = *(_QWORD*)(a1 + 200);
        *(_QWORD*)(a1 + 192) = v8;
        *(_QWORD*)(a1 + 200) = v10;
        if (v57 != 0) {
          std___1___shared_weak_count___release_weak(v57);
        }
      }
      else {
        *(_QWORD*)(a1 + 160) = v26;
        *(_QWORD*)(a1 + 168) = v33;
        if (v33 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                                    memory_order_relaxed);
        }
        v55 = v64_.v65;
        *(_QWORD*)(a1 + 176) = v41;
        *(_QWORD*)(a1 + 184) = v40;
        if (v40 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                    memory_order_relaxed);
        }
        *(_QWORD*)(a1 + 192) = v8;
        *(_QWORD*)(a1 + 200) = v10;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                  memory_order_relaxed);
        *(_BYTE*)(a1 + 208) = 1;
      }
      *v55 = v41;
      v55[1] = (float32x4_t*)v40;
      v58 = v10;
      if (v40 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v40 + 16), 1u,
                                  memory_order_relaxed);
        std___1___shared_weak_count___release_weak(v10);
        v58 = v40;
      }
      result = std___1___shared_weak_count___release_weak(v58);
      if (v33 != 0) {
        result = std___1___shared_weak_count___release_weak(v33);
      }
    }
    else {
      *a3 = nullptr;
      a3[1] = nullptr;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      {
        std___1___shared_weak_count___release_weak(v10);
        return;
      }
    }
  }
  else {
    *a3 = nullptr;
    a3[1] = nullptr;
  }
  {
    result;
    return;
  }
}

__int64 game_hub_cb9a30(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t* v7;
  __int64 v8;
  float v9;
  float v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int32x2_t* v16;
  float32x4_t v17;
  int8x16_t v18;
  __int64 v19;
  float32x4_t v20;
  float v21;
  _QWORD* v22;
  float v23;
  __int64 v24;
  int8x16_t* v25;
  int v26;
  __int64 v27;
  __int64 v28;
  float v29;
  float v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37[2];
  __int64 v38[2];

  if (*(_BYTE*)(result + 208) != 1) {
    return result;
  }
  v1 = result;
  v2 = *(_QWORD*)(result + 184);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = *(_QWORD*)(v1 + 176);
    }
    else {
      v4 = 0;
    }
    v5 = *(_QWORD*)(v1 + 200);
    if (v5 == 0) {
      goto LABEL_29;
    }
  }
  else {
    v3 = 0;
    v4 = 0;
    v5 = *(_QWORD*)(v1 + 200);
    if (v5 == 0) {
      goto LABEL_29;
    }
  }
  v6 = std___1___shared_weak_count_lock(v5);
  if (v6 != 0) {
    v7 = *(float32x4_t**)(v1 + 192);
    v8 = v6;
    if (v7 != nullptr) {
      v9 = LANES128(v7[66]).n128_f32[2];
      v10 = LANES128(v7[67]).n128_f32[3];
      LANES128(v7[67]).n128_u8[8] = 0;
      LANES128(v7[67]).n128_u32[1] = 0;
      if (vabds_f32(v10, v9) > 0x1.0000000000000p-23f) {
        v11 = LANES128(v7[1]).n128_u64[1];
        LANES128(v7[67]).n128_f32[3] = v9;
        v12 = *(_QWORD*)(v11 + 8);
        v13 = *(_QWORD*)(v12 + 328);
        v14 = *(_QWORD*)(v13 + 360);
        *(_DWORD*)(v13 + 256) = 0;
        *(float*)(v13 + 240) = v9;
        *(float*)(v13 + 244) = v9;
        *(_BYTE*)(v13 + 260) = 1;
        *(_BYTE*)(v13 + 369) = 1;
        CharacterModel_cf5c00(v14);
        CharacterModel_cf5c00(v12);
      }
      v15 = LANES128(v7[1]).n128_i64[1];
      *(_BYTE*)(v15 + 372) = 0;
      *(_DWORD*)(v15 + 368) = 0;
      HubCharacterNatives_cea6b0(v15);
      if (v4 != 0) {
        v16 = *(int32x2_t**)(*(_QWORD*)(v4 + 24) + 16LL);
        game_zview_d12d30(*(_QWORD*)(LANES128(v7[1]).n128_u64[1] + 16),
                          v16 + 70, 1);
        v17 = vsubq_f32(
            v7[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v7[1]).n128_u64[1] + 16) +
                            560LL));
        v18 = vmulq_f32(v17, v17);
        LANES128(v18).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v18).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v19 = *(_QWORD*)(GameData_21ec7c0 + 120);
          if ((*(_BYTE*)(v19 + 12) & 1) == 0) {
            *(_BYTE*)(v19 + 12) = 1;
          }
        }
        LANES128(v7[79]).n128_u32[0] = LANES64(v16[70]).n64_u32[0];
        LANES128(v7[79]).n128_u32[1] = LANES64(v16[70]).n64_u32[1];
        v20 = v7[79];
        LANES128(v20).n128_u64[1] = LANES64(v16[71]).n64_u32[0];
        v7[79] = v20;
        HubCharacterNatives_cabfc0((__int64)v7, 1);
        v21 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 24) + 16LL) +
                                   488LL) +
                        36LL) *
              0x1.ca5dc20000000p+5f;
        if ((LANES128(v7[83]).n128_u8[1] & 1) == 0) {
          LANES128(v7[83]).n128_u8[1] = 1;
        }
        v22 = *(_QWORD**)(LANES128(v7[1]).n128_u64[1] + 16);
        v23 = v21 * 0x1.1df46a0000000p-6f;
        if (v22[107] != 0) {
          v24 = v22[108];
          v22[107] = 0;
          v22[108] = 0;
          if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            std___1___shared_weak_count___release_weak(v24);
          }
        }
        v25 = (int8x16_t*)v22[61];
        v26 = LANES128(v25[11]).n128_u8[4];
        LANES128(v25[2]).n128_f32[0] = v23;
        LANES128(v25[2]).n128_f32[1] = v23;
        if (v26 == 1) {
          LANES128(v25[11]).n128_u8[4] = 0;
        }
        CharacterRotate_d519c0(v25);
      }
      v38[0] = (__int64)v7;
      v38[1] = v8;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16), 1u,
                                memory_order_relaxed);
      HubCharacterNatives_cb83a0(v1, v38);
      std___1___shared_weak_count___release_weak(v8);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
  }
LABEL_29:
  if (v4 == 0) {
    goto LABEL_32;
  }
  v27 = *(_QWORD*)(v1 + 184);
  v37[0] = *(_QWORD*)(v1 + 176);
  v37[1] = v27;
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_cb8b80_alt1(v1, v37);
    std___1___shared_weak_count___release_weak(v27);
  LABEL_32:
    result = *(_QWORD*)(v1 + 168);
    if (result != 0) {
      goto LABEL_33;
    }
    goto LABEL_40;
  }
  GameRoutine_cb8b80_alt1(v1, v37);
  result = *(_QWORD*)(v1 + 168);
  if (result != 0) {
  LABEL_33:
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v28 = *(_QWORD*)(v1 + 160);
      if (v28 != 0) {
        v29 = *(float*)(v28 + 1064);
        v30 = *(float*)(v28 + 1084);
        *(_BYTE*)(v28 + 1080) = 0;
        *(_DWORD*)(v28 + 1076) = 0;
        if (vabds_f32(v30, v29) > 0x1.0000000000000p-23f) {
          *(float*)(v28 + 1084) = v29;
          v31 = result;
          v32 = *(_QWORD*)(*(_QWORD*)(v28 + 24) + 8LL);
          v33 = *(_QWORD*)(v32 + 328);
          *(_DWORD*)(v33 + 256) = 0;
          *(float*)(v33 + 240) = v29;
          *(float*)(v33 + 244) = v29;
          *(_BYTE*)(v33 + 260) = 1;
          *(_BYTE*)(v33 + 369) = 1;
          CharacterModel_cf5c00(*(_QWORD*)(v33 + 360));
          CharacterModel_cf5c00(v32);
          result = v31;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v34 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak(v34);
      }
    }
  }
LABEL_40:
  if (*(_BYTE*)(v1 + 208) == 1) {
    v35 = *(_QWORD*)(v1 + 200);
    if (v35 != 0) {
      std___1___shared_weak_count___release_weak(v35);
    }
    v36 = *(_QWORD*)(v1 + 184);
    if (v36 != 0) {
      std___1___shared_weak_count___release_weak(v36);
    }
    result = *(_QWORD*)(v1 + 168);
    if (result != 0) {
      result = std___1___shared_weak_count___release_weak(result);
    }
    *(_BYTE*)(v1 + 208) = 0;
  }
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 game_hub_cb9e40(__int64 result, double a2, double a3)
{

#pragma clang fp contract(off)
  __int64* v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  float32x4_t* v7;
  __int128 v8;
  __int64 v9;
  float32x4_t v10;
  int8x16_t v11;
  __int64 v12;
  unsigned int v13;
  float32x4_t v14;
  __int64 v15;
  float v16;
  _QWORD* v17;
  __int64 v18;
  int8x16_t* v19;
  int v20;
  __int64 v21;
  int v22;
  __int128 v23;

  v3 = *(__int64**)(result + 24);
  v4 = *(__int64**)(result + 32);
  if (v3 != v4) {
    v5 = GameData_212d458[0];
    do {
      v7 = (float32x4_t*)*v3;
      if (*(_DWORD*)(*v3 + 1216) == 0) {
        *(_QWORD*)&v8 = LANES128(v7[24]).n128_u64[1];
        LODWORD(a3) = LANES128(v7[25]).n128_u32[0];
        *((double*)&v8 + 1) = a3;
        v9 = *(_QWORD*)(LANES128(v7[1]).n128_u64[1] + 16);
        v23 = v8;
        game_zview_d12d30(v9, (int32x2_t*)&v23, 1);
        v10 = vsubq_f32(
            v7[79],
            *(float32x4_t*)(*(_QWORD*)(LANES128(v7[1]).n128_u64[1] + 16) +
                            560LL));
        v11 = vmulq_f32(v10, v10);
        LANES128(v11).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v11, v11, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                .n64_u64[0];
        if (LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v11).n128_u64[0])))
                .n64_f32[0] > 0x1.0000000000000p-23f) {
          v12 = *(_QWORD*)(*v5 + 120);
          if ((*(_BYTE*)(v12 + 12) & 1) == 0) {
            *(_BYTE*)(v12 + 12) = 1;
          }
        }
        v13 = DWORD2(v23);
        LANES128(v7[79]).n128_u64[0] = v23;
        v14 = v7[79];
        LANES128(v14).n128_u64[1] = v13;
        v7[79] = v14;
        HubCharacterNatives_cabfc0((__int64)v7, 1);
        v15 = *v3;
        v16 = *(float*)(*v3 + 404);
        if ((*(_BYTE*)(*v3 + 1329) & 1) == 0) {
          *(_BYTE*)(v15 + 1329) = 1;
        }
        v17 = *(_QWORD**)(*(_QWORD*)(v15 + 24) + 16LL);
        if (v17[107] != 0) {
          v18 = v17[108];
          v17[107] = 0;
          v17[108] = 0;
          if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
            std___1___shared_weak_count___release_weak(v18);
          }
        }
        v19 = (int8x16_t*)v17[61];
        v20 = LANES128(v19[11]).n128_u8[4];
        LANES128(v19[2]).n128_f32[0] = v16 * 0x1.1df46a0000000p-6f;
        LANES128(v19[2]).n128_f32[1] = v16 * 0x1.1df46a0000000p-6f;
        if (v20 == 1) {
          LANES128(v19[11]).n128_u8[4] = 0;
        }
        CharacterRotate_d519c0(v19);
        result = HubCharacterNatives_cac2c0(*v3, 0);
        v6 = *(_QWORD*)(*v5 + 120);
        if ((*(_BYTE*)(v6 + 12) & 1) == 0) {
          *(_BYTE*)(v6 + 12) = 1;
        }
      }
      v3 += 2;
    } while (v3 != v4);
  }
  v21 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 216LL);
  v22 = *(_DWORD*)(v21 + 232);
  if (v22 <= 2) {
    v22 = 2;
  }
  *(_DWORD*)(v21 + 232) = v22;
  return result;
}

void __attribute__((noreturn)) game_hub_cdcc30()
{
  String_60a250("basic_string");
}

__int64 game_hub_cdd040(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  struct {
    __int64 v14;
    unsigned int v15;
  } v14_;

  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v3 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v3 = 0;
  }
  if (GameData_22127a8 != 0) {
    v3 = GameData_22127a8;
  }
  v4 = *(unsigned __int8*)(a1 + 8);
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a1 + 9;
  }
  else {
    v7 = *(_QWORD*)(a1 + 24);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *(_QWORD*)(a1 + 16);
  }
  result = X8CALL_X0(__int64, Manager_d9b810((void*)((__int64)&v14_.v14), v3,
                                             v7, v8, a1 + 32, 0));
  v10 = v14_.v14;
  v11 = v14_.v15;
  *(_QWORD*)a2 = v14_.v14;
  *(_DWORD*)(a2 + 8) = v11;
  if ((_DWORD)v11 == 0x2000 ||
      (v12 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v11))[1] == 0) {
    v13 = 0;
  }
  else if (*v12 == v10) {
    v13 = v12[1];
  }
  else {
    v13 = 0;
  }
  *(_QWORD*)(a2 + 16) = v13;
  return result;
}

__int64* game_hub_cdd140(_QWORD* a1, __int64* a2)
{
  __int64* result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  __int64 (*v12)();
  __int64* v13;

  *a1 = GameData_1fd4db0;
  result = a1 + 1;
  if ((*(_BYTE*)a2 & 1) != 0) {
    result = (__int64*)fw_text_String_CopyTerminated(result, a2[2], a2[1]);
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    result[1] = a2[1];
    result[2] = v6;
    *result = v5;
  }
  a1[5] = 0;
  a1[6] = 0;
  a1[4] = 0;
  v7 = a2[3];
  v8 = a2[4];
  v9 = v8 - v7;
  if (v8 != v7) {
    if (v9 < 0) {
      GameRoutine_919020();
    }
    result = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8 - v7, 16, 0);
    v10 = result;
    a1[4] = result;
    a1[5] = result;
    a1[6] = (char*)result + v9;
    do {
      *(_BYTE*)v10 = 0;
      *((_DWORD*)v10 + 6) = -1;
      v11 = *(_DWORD*)(v7 + 24);
      if (v11 != -1) {
        v12 = GameData_1fd4d30[v11];
        v13 = v10;
        result = (__int64*)((__int64 (*)(__int64**, __int64))v12)(&v13, v7);
        *((_DWORD*)v10 + 6) = v11;
      }
      v7 += 32;
      v10 += 4;
    } while (v7 != v8);
    a1[5] = v10;
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_cdf140(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, char a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64* v9;
  __int64 v10;
  int v11;
  int v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  _DWORD* v18;
  unsigned int v19;
  __int128 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int128 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 result;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v5 = *(_QWORD*)(a1 + 32);
  v9 = (__int64*)GameData_212dc38[0];
  if (v5 == 0) {
    v10 = *(_QWORD*)GameData_212dc38[0];
    v11 = *(_DWORD*)(*(_QWORD*)GameData_212dc38[0] + 104LL);
    *(_BYTE*)(a1 + 52) = 1;
    *(_DWORD*)(a1 + 48) = v11;
    v12 = *(_DWORD*)(v10 + 100);
    *(_BYTE*)(a1 + 60) = 1;
    *(_DWORD*)(a1 + 56) = v12;
  }
  if (*(_DWORD*)(a1 + 64) != 1) {
    v13 = *(_BYTE*)(a1 + 68);
    *(_DWORD*)(a1 + 64) = 1;
    if ((v13 & 1) == 0) {
      *(_BYTE*)(a1 + 68) = 1;
      GameRoutine_d8d080(GameData_21f3cb8);
      v5 = *(_QWORD*)(a1 + 32);
    }
  }
  if (v5 != 0) {
    v14 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a1 + 32) = 0;
    *(_QWORD*)(a1 + 40) = 0;
    if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
      std___1___shared_weak_count___release_weak(v14);
    }
  }
  v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       96, 16, 0);
  *(_QWORD*)(v15 + 56) = 0;
  *(_QWORD*)(v15 + 64) = 0;
  v16 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(v15 + 80) = 0;
  *(_QWORD*)(v15 + 88) = 0;
  *(_QWORD*)(v15 + 8) = 0;
  *(_QWORD*)(v15 + 16) = 0;
  *(_QWORD*)(v15 + 40) = 0;
  *(_QWORD*)(v15 + 48) = 0;
  *(_QWORD*)(a1 + 40) = v15;
  *(_QWORD*)v15 = GameData_1fadca0;
  *(_DWORD*)(v15 + 68) = 1065353216;
  *(_QWORD*)(v15 + 72) = 0x3F8000003F800000LL;
  *(_DWORD*)(v15 + 80) = 1109393408;
  *(_BYTE*)(v15 + 84) = 1;
  *(_QWORD*)(v15 + 32) = 0;
  *(_QWORD*)(a1 + 32) = v15 + 32;
  if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    std___1___shared_weak_count___release_weak(v16);
  }
  *(_BYTE*)(*(_QWORD*)(a1 + 32) + 52LL) = 0;
  v17 = *(_DWORD*)(a2 + 4);
  v18 = *(_DWORD**)(a1 + 32);
  v19 = *(_DWORD*)(a2 + 8);
  *v18 = *(_DWORD*)a2;
  v18[1] = v17;
  v20 = *(_OWORD*)v18;
  *((_QWORD*)&v20 + 1) = v19;
  *(_OWORD*)v18 = v20;
  v21 = *(_DWORD*)(a2 + 12);
  v22 = *(_QWORD*)(a1 + 32);
  v23 = *v9;
  v24 = *(_DWORD*)(a2 + 20);
  *(float*)(v22 + 16) = *(float*)(a2 + 16) + 0x1.6800000000000p+7f;
  *(_DWORD*)(v22 + 20) = v21;
  v25 = *(_OWORD*)(v22 + 16);
  *((_QWORD*)&v25 + 1) = v24;
  *(_OWORD*)(v22 + 16) = v25;
  *(_DWORD*)(*(_QWORD*)(a1 + 32) + 32LL) = *(_DWORD*)(a2 + 24);
  *(_DWORD*)(*(_QWORD*)(a1 + 32) + 48LL) = *(_DWORD*)(a2 + 28);
  *(_DWORD*)(*(_QWORD*)(a1 + 32) + 36LL) = 0;
  v26 = *(_QWORD*)(a1 + 40);
  v33 = *(_QWORD*)(a1 + 32);
  v34 = v26;
  if (v26 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                              memory_order_relaxed);
  }
  game_zview_d1ff20(v23, &v33, 1);
  v27 = v34;
  if (v34 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v34 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  *(_DWORD*)(a1 + 8) = 0;
  v28 = *(_QWORD*)(GameData_21ec7c0 + 120);
  if ((*(_BYTE*)(v28 + 12) & 1) == 0) {
    *(_BYTE*)(v28 + 12) = 1;
  }
  result = game_1023ae0_alt1(v28);
  v30 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v31 = *(_QWORD*)(GameData_21ec7c0 + 32);
  while (v30 != v31) {
    result = *(_QWORD*)(*(_QWORD*)v30 + 24LL);
    if (*(_BYTE*)(result + 504) == 1) {
      result = GameRoutine_cebf00(result, *(unsigned int*)(result + 500));
    }
    v30 += 16;
  }
  if ((a3 & 1) != 0) {
    result = GameRoutine_f8eee0(GameData_21c9710);
  }
  v32 = *(_QWORD*)(a1 + 40);
  *a4 = *(_QWORD*)(a1 + 32);
  a4[1] = v32;
  if (v32 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_cdf420(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, float a4, float a5,
                                                float a6)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v11;
  __int64 v13;
  int v14;
  int v15;
  char v16;
  __int64 v17;
  __int64 v18;
  int v19;
  _DWORD* v20;
  unsigned int v21;
  __int128 v22;
  int v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int128 v27;
  __int64 v28;
  __int64 result;
  __int64 v30;
  int v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;

  v11 = (__int64*)GameData_212dc38[0];
  if (*(_QWORD*)(a1 + 32) == 0) {
    v13 = *(_QWORD*)GameData_212dc38[0];
    v14 = *(_DWORD*)(*(_QWORD*)GameData_212dc38[0] + 104LL);
    *(_BYTE*)(a1 + 52) = 1;
    *(_DWORD*)(a1 + 48) = v14;
    v15 = *(_DWORD*)(v13 + 100);
    *(_BYTE*)(a1 + 60) = 1;
    *(_DWORD*)(a1 + 56) = v15;
  }
  if (*(_DWORD*)(a1 + 64) != 1) {
    v16 = *(_BYTE*)(a1 + 68);
    *(_DWORD*)(a1 + 64) = 1;
    if ((v16 & 1) == 0) {
      *(_BYTE*)(a1 + 68) = 1;
      GameRoutine_d8d080(GameData_21f3cb8);
    }
  }
  v17 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       96, 16, 0);
  *(_QWORD*)(v17 + 56) = 0;
  *(_QWORD*)(v17 + 64) = 0;
  v18 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(v17 + 80) = 0;
  *(_QWORD*)(v17 + 88) = 0;
  *(_QWORD*)(v17 + 8) = 0;
  *(_QWORD*)(v17 + 16) = 0;
  *(_QWORD*)(v17 + 40) = 0;
  *(_QWORD*)(v17 + 48) = 0;
  *(_QWORD*)(a1 + 40) = v17;
  *(_QWORD*)v17 = GameData_1fadca0;
  *(_DWORD*)(v17 + 68) = 1065353216;
  *(_QWORD*)(v17 + 72) = 0x3F8000003F800000LL;
  *(_DWORD*)(v17 + 80) = 1109393408;
  *(_BYTE*)(v17 + 84) = 1;
  *(_QWORD*)(v17 + 32) = 0;
  *(_QWORD*)(a1 + 32) = v17 + 32;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  *(float*)(*(_QWORD*)(a1 + 32) + 40LL) = a5;
  *(float*)(*(_QWORD*)(a1 + 32) + 44LL) = a6;
  *(_BYTE*)(*(_QWORD*)(a1 + 32) + 52LL) = 0;
  v19 = *(_DWORD*)(a2 + 4);
  v20 = *(_DWORD**)(a1 + 32);
  v21 = *(_DWORD*)(a2 + 8);
  *v20 = *(_DWORD*)a2;
  v20[1] = v19;
  v22 = *(_OWORD*)v20;
  *((_QWORD*)&v22 + 1) = v21;
  *(_OWORD*)v20 = v22;
  v23 = *(_DWORD*)(a2 + 12);
  v24 = *(_QWORD*)(a1 + 32);
  v25 = *v11;
  v26 = *(_DWORD*)(a2 + 20);
  *(float*)(v24 + 16) = *(float*)(a2 + 16) + 0x1.6800000000000p+7f;
  *(_DWORD*)(v24 + 20) = v23;
  v27 = *(_OWORD*)(v24 + 16);
  *((_QWORD*)&v27 + 1) = v26;
  *(_OWORD*)(v24 + 16) = v27;
  *(_DWORD*)(*(_QWORD*)(a1 + 32) + 32LL) = *(_DWORD*)(a2 + 24);
  *(_DWORD*)(*(_QWORD*)(a1 + 32) + 48LL) = *(_DWORD*)(a2 + 28);
  *(float*)(*(_QWORD*)(a1 + 32) + 36LL) = a4;
  v28 = *(_QWORD*)(a1 + 40);
  v37 = *(_QWORD*)(a1 + 32);
  v38 = v28;
  if (v28 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                              memory_order_relaxed);
  }
  result = game_zview_d1ff20(v25, &v37, 1);
  v30 = v38;
  if (v38 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
    result = std___1___shared_weak_count___release_weak(v30);
  }
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
      (((v31 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v32 = 2)
           : (v32 = 3),
       (v32 & v31) == 0)) {
    *(_DWORD*)(a1 + 8) = 0;
  }
  else {
    *(float*)(a1 + 8) = a4;
    if (a4 > 0.0f) {
      goto LABEL_21;
    }
  }
  v34 = *(_QWORD*)(GameData_21ec7c0 + 120);
  if ((*(_BYTE*)(v34 + 12) & 1) == 0) {
    *(_BYTE*)(v34 + 12) = 1;
  }
  result = game_1023ae0_alt1(v34);
  v35 = *(_QWORD*)(GameData_21ec7c0 + 24);
  v36 = *(_QWORD*)(GameData_21ec7c0 + 32);
  while (v35 != v36) {
    result = *(_QWORD*)(*(_QWORD*)v35 + 24LL);
    if (*(_BYTE*)(result + 504) == 1) {
      result = GameRoutine_cebf00(result, *(unsigned int*)(result + 500));
    }
    v35 += 16;
  }
LABEL_21:
  v33 = *(_QWORD*)(a1 + 40);
  *a3 = *(_QWORD*)(a1 + 32);
  a3[1] = v33;
  if (v33 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v33 + 16), 1u,
                              memory_order_relaxed);
  }
  {
    result;
    return;
  }
}

bool game_hub_d5ae40(__int64 a1, float32x4_t* a2, __int64 a3, double a4,
                     double a5)
{
  float v5;
  float32x4_t v6;
  float32x4_t v7;
  float32x4_t v8;
  int8x16_t v9;
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  int8x16_t v13;
  float v14;
  float32x4_t v15;
  float32x4_t v16;
  double v17;
  double v18;
  double v19;
  unsigned int v20;
  float32x4_t v21;
  unsigned __int64 v22;
  unsigned int v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  int8x16_t v31;
  int8x16_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x4_t v36;
  float32x4_t v37;
  int8x16_t v38;
  float v39;
  __int64 v41;
  int8x16_t v42;
  float32x4_t v43;
  float32x4_t v44;

  if ((a3 & 0x100000000LL) != 0) {
    v5 = *(float*)&a3;
  }
  else {
    if ((*(_BYTE*)(a1 + 116) & 1) == 0) {
      return true;
    }
    v5 = *(float*)(a1 + 112);
  }
  if (*(_BYTE*)(a1 + 80) == 1) {
    v6 = *(float32x4_t*)(a1 + 64);
  }
  else {
    LODWORD(a5) = *(_DWORD*)(a1 + 268);
    LANES128(v7).n128_u64[0] = *(_QWORD*)(a1 + 260);
    LANES128(v7).n128_f64[1] = a5;
    v6 = vaddq_f32(*(float32x4_t*)(a1 + 16), v7);
  }
  v8 = vsubq_f32(*a2, v6);
  LANES128(v8).n128_u32[3] = 0;
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
  v10 = vrsqrteq_f32(v9);
  v11 = vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v9, v10)));
  v12 = vbicq_s8(
      vmulq_f32(v8, vmulq_f32(v11, vrsqrtsq_f32(v11, vmulq_f32(v9, v11)))),
      vceqzq_f32(v9));
  LANES128(v12).n128_u32[1] = 0;
  v13 = vmulq_f32(v12, v12);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v13).n128_f32[0] == 0x0.0p+0f) {
    v39 = 0x0.0p+0f;
  }
  else {
    LANES128(v13).n128_u64[1] = LANES128(v13).n128_u64[0];
    v14 = *(float*)(a1 + 272);
    v15 = vrsqrteq_f32(v13);
    v16 = vmulq_f32(v15, vrsqrtsq_f32(v15, vmulq_f32(v13, v15)));
    v42 = vbicq_s8(
        vmulq_f32(v12, vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v13, v16)))),
        vceqzq_f32(v13));
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a61b0) != 0) {
      v41 = *((_QWORD*)GameData_212c560 + 1);
      *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
      *((_QWORD*)&GameData_21a61a0 + 1) = v41;
      __cxa_guard_release(&GameData_21a61b0);
    }
    v17 = (float)(v14 * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
    v18 = cos(v17);
    v19 = sin(v17);
    *(float*)&v20 = v18 + PSEUDO_UNFUSED(v19 * 0x0.0p+0);
    LANES128(v21).n128_u64[0] = GameData_21a61a0;
    *(float*)&v22 = PSEUDO_UNFUSED(v19 * -0x0.0p+0) + v18 * 0x0.0p+0;
    *(float*)&v23 = v19 + PSEUDO_UNFUSED(v18 * 0x0.0p+0);
    LANES128(v24).n128_u64[0] = __PAIR64__(v23, v22);
    LANES128(v24).n128_u64[1] = __PAIR64__(v20, v22);
    v25 = vmulq_f32(v24, COERCE_AS(float32x4_t, GameData_1a829d0));
    LANES128(v24).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                             COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v26).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v24).n128_u64[1] = LANES128(v24).n128_u64[0];
    LANES128(v27).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                             COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v28).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v21).n128_u64[1] = LANES128(v27).n128_u64[0];
    *(int32x2_t*)&LANES128(v28).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1);
    *(int8x8_t*)&LANES128(v26).n128_i8[8] =
        vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    v29 =
        vmlaq_f32(vmulq_f32(v24, v25), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v21, v26));
    LANES128(v21).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                             COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v21).n128_u64[0];
    LANES128(v21).n128_u64[1] = GameData_21a61a0;
    LANES128(v30).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v30).n128_i8[8] =
        vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v31 = vmlsq_f32(vmlaq_f32(v29, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v21, v28)),
                    v30, v27);
    LANES128(v30).n128_u64[0] = __PAIR64__(v23, v22);
    HIDWORD(v22) = v20;
    LANES128(v32).n128_u64[0] = __PAIR64__(v23, v22);
    LANES128(v27).n128_u64[0] = __PAIR64__(v23, v22);
    LANES128(v32).n128_u64[1] = v22;
    LANES128(v33).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v34).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v35).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v32, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v36).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v33).n128_u64[1] = LANES128(v33).n128_u64[0];
    LANES128(v27).n128_u64[1] = LANES128(v34).n128_u64[0];
    *(int8x8_t*)&LANES128(v35).n128_i8[8] =
        vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v34).n128_u64[1] = LANES128(v32).n128_u64[0];
    LANES128(v32).n128_u64[1] = LANES128(v30).n128_u64[0];
    *(int32x2_t*)&LANES128(v36).n128_i8[8] =
        vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v31).n128_u64[0]), 1);
    v37 = vmlaq_f32(
        vmlaq_f32(vmulq_f32(v33, v31), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v27, v35)),
        COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v32, v36));
    LANES128(v32).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v32).n128_i8[8] =
        vqtbl1_s8(v31, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    v38 = vmlsq_f32(v37, v32, v34);
    LANES128(v31).n128_u64[0] = LANES128(v42).n128_u32[0];
    LANES128(v31).n128_u64[1] = LANES128_OF(vextq_s8(v42, v42, 8u)).n128_u32[0];
    v44 = v31;
    LANES128(v31).n128_u32[0] = LANES128_OF(vextq_s8(v38, v38, 8u)).n128_u32[0];
    LANES128(v38).n128_u32[1] = 0;
    LANES128(v38).n128_u64[1] = LANES128(v31).n128_u32[0];
    v43 = v38;
    v39 = fabsf(math_Vec3_Angle(&v44, &v43) * 0x1.ca5dc00000000p+5f);
  }
  return v39 <= (float)(v5 * 0x1.0000000000000p-1f);
}

double game_hub_d5b190(__int64 a1, float32x4_t* a2, char a3, float a4,
                       double a5, double a6)
{
  float32x4_t v10;
  float32x4_t v11;
  float32x4_t v12;
  float32x4_t v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  int8x16_t v19;
  float32x4_t v20;
  float32x4_t v21;
  double v22;
  double v23;
  double v24;
  unsigned int v25;
  float32x4_t v26;
  unsigned __int64 v27;
  unsigned int v28;
  float32x4_t v29;
  int8x16_t v30;
  float32x4_t v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  int8x16_t v36;
  int8x16_t v37;
  float32x4_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  double result;
  float v45;
  int v46;
  __int64 v47;
  int8x16_t v48;
  float32x4_t v49;
  float32x4_t v50;

  if ((a3 & 1) != 0) {
    if (*(_BYTE*)(a1 + 80) != 0) {
      v10 = *(float32x4_t*)(a1 + 64);
    }
    else {
      LODWORD(a6) = *(_DWORD*)(a1 + 268);
      LANES128(v12).n128_u64[0] = *(_QWORD*)(a1 + 260);
      LANES128(v12).n128_f64[1] = a6;
      v10 = vaddq_f32(*(float32x4_t*)(a1 + 16), v12);
    }
    v13 = vsubq_f32(*a2, v10);
  }
  else {
    if (*(_BYTE*)(a1 + 80) != 0) {
      v11 = *(float32x4_t*)(a1 + 64);
    }
    else {
      LODWORD(a6) = *(_DWORD*)(a1 + 268);
      LANES128(v14).n128_u64[0] = *(_QWORD*)(a1 + 260);
      LANES128(v14).n128_f64[1] = a6;
      v11 = vaddq_f32(*(float32x4_t*)(a1 + 16), v14);
    }
    v13 = vsubq_f32(v11, *a2);
  }
  LANES128(v13).n128_u32[3] = 0;
  v15 = vmulq_f32(v13, v13);
  LANES128(v15).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  v16 = vrsqrteq_f32(v15);
  v17 = vmulq_f32(v16, vrsqrtsq_f32(v16, vmulq_f32(v15, v16)));
  v18 = vbicq_s8(
      vmulq_f32(v13, vmulq_f32(v17, vrsqrtsq_f32(v17, vmulq_f32(v15, v17)))),
      vceqzq_f32(v15));
  LANES128(v18).n128_u32[1] = 0;
  v19 = vmulq_f32(v18, v18);
  LANES128(v19).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v19, v19, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_u64[0];
  LANES128(v19).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v19).n128_u64[0])))
          .n64_u64[0];
  if (LANES128(v19).n128_f32[0] == 0x0.0p+0f) {
    return 0x0.0p+0;
  }
  LANES128(v19).n128_u64[1] = LANES128(v19).n128_u64[0];
  v20 = vrsqrteq_f32(v19);
  v21 = vmulq_f32(v20, vrsqrtsq_f32(v20, vmulq_f32(v19, v20)));
  v48 = vbicq_s8(
      vmulq_f32(v18, vmulq_f32(v21, vrsqrtsq_f32(v21, vmulq_f32(v19, v21)))),
      vceqzq_f32(v19));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0) {
    v45 = a4;
    v46 = __cxa_guard_acquire(&GameData_21a61b0);
    a4 = v45;
    if (v46 != 0) {
      v47 = *((_QWORD*)GameData_212c560 + 1);
      *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
      *((_QWORD*)&GameData_21a61a0 + 1) = v47;
      __cxa_guard_release(&GameData_21a61b0);
      a4 = v45;
    }
  }
  v22 = (float)(a4 * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
  v23 = cos(v22);
  v24 = sin(v22);
  *(float*)&v25 = v23 + PSEUDO_UNFUSED(v24 * 0x0.0p+0);
  LANES128(v26).n128_u64[0] = GameData_21a61a0;
  *(float*)&v27 = PSEUDO_UNFUSED(v24 * -0x0.0p+0) + v23 * 0x0.0p+0;
  *(float*)&v28 = v24 + PSEUDO_UNFUSED(v23 * 0x0.0p+0);
  LANES128(v29).n128_u64[0] = __PAIR64__(v28, v27);
  LANES128(v29).n128_u64[1] = __PAIR64__(v25, v27);
  v30 = vmulq_f32(v29, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v31).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[1] = LANES128(v29).n128_u64[0];
  LANES128(v32).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v32).n128_u64[0];
  *(int32x2_t*)&LANES128(v33).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v30).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v31).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v34 = vmlaq_f32(vmulq_f32(v29, v30), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v26, v31));
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v26).n128_u64[1] = GameData_21a61a0;
  LANES128(v35).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v35).n128_i8[8] =
      vqtbl1_s8(v30, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v36 = vmlsq_f32(vmlaq_f32(v34, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v26, v33)),
                  v35, v32);
  LANES128(v35).n128_u64[0] = __PAIR64__(v28, v27);
  HIDWORD(v27) = v25;
  LANES128(v37).n128_u64[0] = __PAIR64__(v28, v27);
  LANES128(v32).n128_u64[0] = __PAIR64__(v28, v27);
  LANES128(v37).n128_u64[1] = v27;
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v41).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v38).n128_u64[1] = LANES128(v38).n128_u64[0];
  LANES128(v32).n128_u64[1] = LANES128(v39).n128_u64[0];
  *(int8x8_t*)&LANES128(v40).n128_i8[8] =
      vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v39).n128_u64[1] = LANES128(v37).n128_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v35).n128_u64[0];
  *(int32x2_t*)&LANES128(v41).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v36).n128_u64[0]), 1);
  v42 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v38, v36), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v32, v40)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v37, v41));
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v37).n128_i8[8] =
      vqtbl1_s8(v36, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v43 = vmlsq_f32(v42, v37, v39);
  LANES128(v36).n128_u64[0] = LANES128(v48).n128_u32[0];
  LANES128(v36).n128_u64[1] = LANES128_OF(vextq_s8(v48, v48, 8u)).n128_u32[0];
  v50 = v36;
  LANES128(v36).n128_u32[0] = LANES128_OF(vextq_s8(v43, v43, 8u)).n128_u32[0];
  LANES128(v43).n128_u32[1] = 0;
  LANES128(v43).n128_u64[1] = LANES128(v36).n128_u32[0];
  v49 = v43;
  *(float*)&result = fabsf(math_Vec3_Angle(&v50, &v49) * 0x1.ca5dc00000000p+5f);
  return result;
}

bool game_hub_d5b4e0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  char v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  float32x4_t v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  float32x4_t* v16;
  __int64 v17;
  float32x4_t v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  _QWORD* v23;
  _QWORD* v24;
  _QWORD* v25;
  bool v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  float32x4_t v35;
  __int64 v36;
  float32x4_t v37;
  int16x4_t v38;
  float32x4_t v39;
  __int64* v40;
  unsigned __int32 v41;
  unsigned __int8 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  bool v46;
  unsigned __int32 v48;
  float32x4_t v49;

  v1 = *(_QWORD*)(a1 + 1560);
  if (v1 != 0) {
    LOBYTE(v1) = *(_QWORD*)(v1 + 8) != -1;
  }
  v3 = v1 | *(_BYTE*)(a1 + 1764);
  if ((v3 & 1) == 0) {
    v4 = *(unsigned __int8*)(a1 + 1216);
    if ((v4 & 1) != 0) {
      v5 = *(_QWORD*)(a1 + 1224);
    }
    else {
      v5 = v4 >> 1;
    }
    v6 = *(unsigned __int8*)(GameData_21f3d10 + 88);
    v7 = *(_QWORD*)(GameData_21f3d10 + 96);
    if ((v6 & 1) == 0) {
      v7 = v6 >> 1;
    }
    if (v5 != v7 ||
        ((v4 & 1) != 0 ? (v8 = *(_QWORD*)(a1 + 1232)) : (v8 = a1 + 1217),
         (v6 & 1) != 0 ? (v9 = *(_QWORD*)(GameData_21f3d10 + 104))
                       : (v9 = GameData_21f3d10 + 89),
         (unsigned int)memcmp_alt1(v8, v9, v5) != 0)) {
      v10 = (__typeof__(v10)){0};
      goto LABEL_18;
    }
    v19 = *(_QWORD**)(GameData_21f3c98 + 152);
    if (v19 == (_QWORD*)(GameData_21f3c98 + 160)) {
    LABEL_47:
      v27 = 0;
      v28 = 0;
    }
    else {
      v20 = *(_QWORD*)(a1 + 176);
      while (1) {
        v21 = (_QWORD*)v19[7];
        v22 = (_QWORD*)v19[8];
        if (v21 != v22) {
          while (*(_QWORD*)(*v21 + 176LL) != v20) {
            v21 += 2;
            if (v21 == v22) {
              goto LABEL_34;
            }
          }
        }
        if (v21 != v22) {
          break;
        }
      LABEL_34:
        v21 = (_QWORD*)v19[10];
        v23 = (_QWORD*)v19[11];
        if (v21 != v23) {
          while (*(_QWORD*)(*v21 + 176LL) != v20) {
            v21 += 2;
            if (v21 == v23) {
              goto LABEL_39;
            }
          }
        }
        if (v21 != v23) {
          break;
        }
      LABEL_39:
        v24 = (_QWORD*)v19[1];
        if (v24 != nullptr) {
          do {
            v25 = v24;
            v24 = (_QWORD*)*v24;
          } while (v24 != nullptr);
        }
        else {
          do {
            v25 = (_QWORD*)v19[2];
            v26 = v19 == (_QWORD*)*v25;
            v19 = v25;
          } while (!v26);
        }
        v19 = v25;
        if (v25 == (_QWORD*)(GameData_21f3c98 + 160)) {
          goto LABEL_47;
        }
      }
      v28 = *v21;
      v27 = v21[1];
      if (v27 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                                  memory_order_relaxed);
      }
    }
    game_hub_d80c00((void*)(&v49), *(_QWORD**)(GameData_220b6e0 + 8));
    v10 = v49;
    if (LANES128(v49).n128_u64[1] != 0) {
      v29 = std___1___shared_weak_count_lock(LANES128(v49).n128_u64[1]);
      if (v29 != 0) {
        v30 = LANES128(v10).n128_u64[0];
      }
      else {
        v30 = 0;
      }
      if (v27 != 0) {
        goto LABEL_55;
      }
    }
    else {
      v30 = 0;
      v29 = 0;
      if (v27 != 0) {
      LABEL_55:
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                  memory_order_relaxed);
      }
    }
    v31 = *(_QWORD*)(v30 + 24);
    *(_QWORD*)(v30 + 16) = v28;
    *(_QWORD*)(v30 + 24) = v27;
    if (v31 != 0) {
      std___1___shared_weak_count___release_weak(v31);
    }
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak(v27);
    }
    if (*(_QWORD*)(a1 + 1384) != *(_QWORD*)(a1 + 1376)) {
      *(_BYTE*)(v30 + 217) = 1;
    }
    v32 = *(unsigned __int8*)(a1 + 232);
    if ((v32 & 1) != 0) {
      v33 = *(_QWORD*)(a1 + 240);
    }
    else {
      v33 = v32 >> 1;
    }
    if (v33 != 0) {
      if ((v32 & 1) != 0) {
        v34 = *(_QWORD*)(a1 + 248);
      }
      else {
        v34 = a1 + 233;
      }
      GameRoutine_60a060_alt1((char*)(v30 + 232), v34, v33);
    }
    if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak(v29);
    }
    if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak(v27);
    }
    if (LANES128(v10).n128_u64[1] != 0) {
      v11 = 0;
      atomic_fetch_add_explicit(
          (atomic_ullong* volatile)(LANES128(v10).n128_u64[1] + 16), 1u,
          memory_order_relaxed);
    LABEL_19:
      v12 = *(_QWORD*)(a1 + 1560);
      *(float32x4_t*)(a1 + 1552) = v10;
      v13 = LANES128(v10).n128_i64[1];
      if (v12 != 0) {
        std___1___shared_weak_count___release_weak(v12);
        v13 = *(_QWORD*)(a1 + 1560);
      }
      if (v13 == 0) {
        goto LABEL_99;
      }
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 == 0) {
        goto LABEL_99;
      }
      v16 = *(float32x4_t**)(a1 + 1552);
      v17 = v14;
      if (v16 != nullptr) {
        if (*(_BYTE*)(a1 + 48) == 1) {
          v18 = *(float32x4_t*)(a1 + 32);
        }
        else if (*(_BYTE*)(a1 + 80) == 1) {
          v18 = *(float32x4_t*)(a1 + 64);
        }
        else {
          LODWORD(v15) = *(_DWORD*)(a1 + 268);
          LANES128(v35).n128_u64[0] = *(_QWORD*)(a1 + 260);
          LANES128(v35).n128_u64[1] = v15;
          v18 = vaddq_f32(*(float32x4_t*)(a1 + 16), v35);
        }
        v36 = *(_QWORD*)(a1 + 1192);
        if (v36 != 0 && *(_QWORD*)(v36 + 16) != *(_QWORD*)(v36 + 8)) {
          v48 = LANES128(v18).n128_u32[1];
          GameRoutine_d6d640((void*)(&v49), a1 + 16);
          v37 = v49;
          LANES128(v37).n128_u32[1] = v48;
          LANES128(v37).n128_u32[3] = 0;
          v18 = v37;
        }
        if (LANES128(v16[4]).n128_u8[0] != 1) {
          v16[3] = v18;
          LANES128(v16[4]).n128_u8[0] = 1;
          goto LABEL_90;
        }
        LANES64(v38).n64_u64[0] =
            LANES64_OF(vmovn_s32(vceqq_f32(v16[3], v18))).n64_u64[0];
        if ((LANES64(v38).n64_u8[0] & 1) == 0 ||
            (LANES64(v38).n64_u8[2] & 1) == 0 ||
            (LANES64(v38).n64_u8[4] & 1) == 0) {
          LANES128(v16[3]).n128_u64[0] = LANES128(v18).n128_u64[0];
          v39 = v16[3];
          LANES128(v39).n128_u64[1] = LANES128(v18).n128_u32[2];
          v16[3] = v39;
        LABEL_90:
          v40 = GameData_212ebb0[0];
          v41 = GameRoutine_f71d40(*GameData_212ebb0[0], (__int64)&v16[3],
                                   GameData_21f3d10 + 64);
          v42 = LANES128(v16[4]).n128_u8[0];
          LANES128(v16[13]).n128_u32[1] = v41;
          if ((v42 & 1) == 0) {
            GameRoutine_8123d0();
          }
          v43 = GameData_21f3d10;
          v44 = *v40;
          v45 =
              GameRoutine_f71d40(v44, (__int64)&v16[3], GameData_21f3d10 + 64);
          v46 = (GameRoutine_f71cb0(v45, v45) & 1) != 0 &&
                ((unsigned int)game_hub_f71fc0(v44, (__int64)&v16[3],
                                               v43 + 64) == 0 ||
                 (*(_BYTE*)(v44 + 32) & 2) != 0);
          LANES128(v16[13]).n128_u8[8] = v46;
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak(v17);
      }
    LABEL_99:
      if ((v11 & 1) == 0) {
        std___1___shared_weak_count___release_weak(LANES128(v10).n128_u64[1]);
      }
      return (v3 & 1) == 0;
    }
  LABEL_18:
    v11 = 1;
    goto LABEL_19;
  }
  return (v3 & 1) == 0;
}

__int64 game_hub_d69940(__int64 a1, __int64 a2)
{
  __int64 v3;
  unsigned __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  struct {
    __int64 v14;
    unsigned int v15;
  } v14_;

  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v3 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v3 = 0;
  }
  if (GameData_22127a8 != 0) {
    v3 = GameData_22127a8;
  }
  v4 = *(unsigned __int8*)(a1 + 8);
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = a1 + 9;
  }
  else {
    v7 = *(_QWORD*)(a1 + 24);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *(_QWORD*)(a1 + 16);
  }
  result = X8CALL_X0(__int64, Manager_d9b810((void*)((__int64)&v14_.v14), v3,
                                             v7, v8, a1 + 32, 0));
  v10 = v14_.v14;
  v11 = v14_.v15;
  *(_QWORD*)a2 = v14_.v14;
  *(_DWORD*)(a2 + 8) = v11;
  if ((_DWORD)v11 == 0x2000 ||
      (v12 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v11))[1] == 0) {
    v13 = 0;
  }
  else if (*v12 == v10) {
    v13 = v12[1];
  }
  else {
    v13 = 0;
  }
  *(_QWORD*)(a2 + 16) = v13;
  return result;
}

__int64 game_hub_d6a700(unsigned __int64* a1, __int64 a2)
{

#pragma clang fp contract(off)
  unsigned __int64* v4;
  float v5;
  int v6;
  int v7;
  __int64 v8;
  __int64* v9;
  __int64 result;
  unsigned __int64 v11;
  float32x4_t v12;
  unsigned __int64 v13;
  int v14;
  float32x4_t v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  float32x4_t v21;
  float32x4_t v22;
  float32x4_t v23;

  *((_BYTE*)a1 + 32) = 0;
  *((_BYTE*)a1 + 64) = 0;
  *((_BYTE*)a1 + 100) = 0;
  *a1 = 0;
  a1[1] = 0;
  *((_BYTE*)a1 + 16) = 0;
  a1[10] = 0;
  a1[11] = 0;
  *((_BYTE*)a1 + 96) = 0;
  *((_BYTE*)a1 + 48) = 0;
  v4 = a1 + 6;
  GameRoutine_cae2c0((__int64)(a1 + 13), (__int64*)a2);
  v5 = *((float*)a1 + 66);
  *(_DWORD*)a1 = 0;
  *((_DWORD*)a1 + 280) = 0;
  *(unsigned __int64*)((char*)a1 + 1190) = 0;
  a1[148] = 0;
  a1[147] = 0;
  a1[146] = 0;
  a1[145] = 0;
  a1[144] = 0;
  a1[143] = 0;
  a1[142] = 0;
  a1[141] = 0;
  *((float*)a1 + 1) = v5 * 0x1.0000000000000p-1f;
  *(_OWORD*)a1 = *a1;
  v6 = *(_DWORD*)(a2 + 136);
  if (v6 == 3) {
    *((_DWORD*)a1 + 24) = 1124204544;
    *((_BYTE*)a1 + 100) = 1;
    v7 = 2;
  }
  else {
    v7 = v6 == 1;
  }
  *((_DWORD*)a1 + 280) = v7;
  *((_DWORD*)a1 + 298) = 0;
  v8 = *(_QWORD*)GameData_212dbb8[0];
  v9 = GameData_212ebb0[0];
  result = GameRoutine_f72090(*GameData_212ebb0[0]);
  if ((result & 1) != 0) {
    LANES128(v12).n128_u64[0] = *(unsigned __int64*)((char*)a1 + 244);
    LODWORD(v11) = *((_DWORD*)a1 + 63);
    if (*((_BYTE*)a1 + 64) == 1) {
      v13 = v4[1];
      LANES128(v12).n128_u64[1] = v11;
      LANES128(v21).n128_u64[0] = *v4;
      LANES128(v21).n128_u64[1] = v13;
    }
    else {
      LANES128(v12).n128_u64[1] = v11;
      v21 = vaddq_f32(v12, *(float32x4_t*)a1);
    }
    LANES128(v15).n128_u32[0] = 0;
    LANES128(v15).n128_u32[3] = 0;
    v16 = *v9;
    *(unsigned __int64*)((char*)LANES128(v15).n128_u64 + 4) =
        *((unsigned int*)a1 + 66);
    v22 = v12;
    v23 = vaddq_f32(v12, v15);
    v17 = 1 << GameRoutine_f71d40(v16, (__int64)&v21, v8 + 64);
    v18 = *v9;
    *((_DWORD*)a1 + 298) |= v17;
    v19 = 1 << GameRoutine_f71d40(v18, (__int64)&v22, v8 + 64);
    v20 = *v9;
    *((_DWORD*)a1 + 298) |= v19;
    result = GameRoutine_f71d40(v20, (__int64)&v23, v8 + 64);
    v14 = *((_DWORD*)a1 + 298) | (1 << result);
  }
  else {
    v14 = *((_DWORD*)a1 + 298) | 1;
  }
  *((_DWORD*)a1 + 298) = v14;
  return result;
}

__int64 game_hub_d6a8e0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  __int64 result;
  unsigned __int64 v5;
  float32x4_t v6;
  unsigned __int64 v7;
  int v8;
  float32x4_t v9;
  __int64 v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;

  *(_DWORD*)(a1 + 1192) = 0;
  v2 = *(_QWORD*)GameData_212dbb8[0];
  v3 = GameData_212ebb0[0];
  result = GameRoutine_f72090(*GameData_212ebb0[0]);
  if ((result & 1) != 0) {
    LANES128(v6).n128_u64[0] = *(_QWORD*)(a1 + 244);
    LODWORD(v5) = *(_DWORD*)(a1 + 252);
    if (*(_BYTE*)(a1 + 64) == 1) {
      v7 = *(_QWORD*)(a1 + 56);
      LANES128(v6).n128_u64[1] = v5;
      LANES128(v15).n128_u64[0] = *(_QWORD*)(a1 + 48);
      LANES128(v15).n128_u64[1] = v7;
    }
    else {
      LANES128(v6).n128_u64[1] = v5;
      v15 = vaddq_f32(v6, *(float32x4_t*)a1);
    }
    LANES128(v9).n128_u32[0] = 0;
    LANES128(v9).n128_u32[3] = 0;
    v10 = *v3;
    *(unsigned __int64*)((char*)LANES128(v9).n128_u64 + 4) =
        *(unsigned int*)(a1 + 264);
    v16 = v6;
    v17 = vaddq_f32(v6, v9);
    v11 = 1 << GameRoutine_f71d40(v10, (__int64)&v15, v2 + 64);
    v12 = *v3;
    *(_DWORD*)(a1 + 1192) |= v11;
    v13 = 1 << GameRoutine_f71d40(v12, (__int64)&v16, v2 + 64);
    v14 = *v3;
    *(_DWORD*)(a1 + 1192) |= v13;
    result = GameRoutine_f71d40(v14, (__int64)&v17, v2 + 64);
    v8 = *(_DWORD*)(a1 + 1192) | (1 << result);
  }
  else {
    v8 = *(_DWORD*)(a1 + 1192) | 1;
  }
  *(_DWORD*)(a1 + 1192) = v8;
  return result;
}

__attribute__((swiftcall)) void game_hub_d6abb0(PSEUDO_X8 x8_, __int64 a1,
                                                float a3)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  double v6;
  double v7;
  double v8;
  unsigned int v9;
  float32x4_t v10;
  unsigned int v11;
  int8x16_t v12;
  unsigned __int64 v13;
  int8x16_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  float32x4_t v21;
  float32x4_t v22;
  int8x8_t v23;
  unsigned int v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  unsigned __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float v35;
  float32x4_t v36;
  float32x4_t* result;
  float32x4_t v38;
  float32x4_t v39;
  __int64 v40;
  float32x4_t v41;
  float32x4_t v42;
  float32x4_t v43;
  struct {
    float32x4_t v44[5];
    char v45;
  } v44_;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt2((__int64)&GameData_21a61b0) != 0) {
    v40 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v40;
    __cxa_guard_release_alt2((__int64)&GameData_21a61b0);
  }
  v6 = (float)(*(float*)(a1 + 256) * 0x1.1df46a0000000p-6f) *
       0x1.0000000000000p-1;
  v7 = cos(v6);
  v8 = sin(v6);
  *(float*)&v9 = v7 + PSEUDO_UNFUSED(v8 * 0x0.0p+0);
  LANES128(v10).n128_u64[0] = GameData_21a61a0;
  *(float*)&v13 = PSEUDO_UNFUSED(v8 * -0x0.0p+0) + v7 * 0x0.0p+0;
  *(float*)&v11 = v8 + PSEUDO_UNFUSED(v7 * 0x0.0p+0);
  LANES128(v12).n128_u64[0] = __PAIR64__(v11, v13);
  LANES128(v12).n128_u64[1] = __PAIR64__(v9, v13);
  HIDWORD(v13) = v11;
  v14 = vmulq_f32(v12, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v10).n128_u64[1] = LANES128(v20).n128_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  LANES128(v18).n128_u64[1] = LANES128(v18).n128_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v17).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v14).n128_u64[0]), 1);
  v19 = vmlaq_f32(vmulq_f32(v15, v14), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v10, v16));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v20).n128_u64[1] = LANES128(v10).n128_u64[0];
  LANES128(v10).n128_u64[1] = GameData_21a61a0;
  v21 = vmlaq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v10, v17));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES64(v23).n64_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090803020100LL)))
          .n64_u64[0];
  if (*(_BYTE*)(a1 + 64) != 0) {
    v24 = -1;
  }
  else {
    v24 = 0;
  }
  *(int8x8_t*)&LANES128(v22).n128_i8[8] = v23;
  v25 = vmlsq_f32(v21, v22, v20);
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] = v13;
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v12, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v29).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v28).n128_u64[0];
  LANES128(v28).n128_u64[1] = v13;
  v31 = LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090803020100LL)))
            .n64_u64[0];
  *(int8x8_t*)&LANES128(v29).n128_i8[8] =
      vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  *(int32x2_t*)&LANES128(v30).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v25).n128_u64[0]), 1);
  v32 = vmlaq_f32(
      vmlaq_f32(vmulq_f32(v18, v25), COERCE_AS(float32x4_t, GameData_1a83800),
                vmulq_f32(v27, v29)),
      COERCE_AS(float32x4_t, GameData_1a83800), vmulq_f32(v28, v30));
  LANES128(v28).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[1] = v31;
  LODWORD(v31) = *(_DWORD*)(a1 + 252);
  v33 = vmlsq_f32(v32, v28, v26);
  LANES128(v34).n128_u64[0] = *(_QWORD*)(a1 + 244);
  LANES128(v34).n128_u64[1] = v31;
  LANES128(v34).n128_u32[1] =
      LANES128_OF(vbslq_s8(vdupq_n_s32(v24), *(int8x16_t*)(a1 + 48),
                           vaddq_f32(v34, *(float32x4_t*)a1)))
          .n128_u32[1];
  v35 = *(float*)(a1 + 268);
  if (v35 == 0x0.0p+0f) {
    v35 = *(float*)(a1 + 260);
  }
  v36 = vaddq_f32(v34,
                  vmulq_n_f32(v33, a3 + (float)(v35 * 0x1.0000000000000p-1f)));
  LANES128(v36).n128_u32[3] = 0;
  v41 = v36;
  v42 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a832d0));
  v43 = vaddq_f32(v36, COERCE_AS(float32x4_t, GameData_1a82f60));
  result = X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v44_.v44),
                                                    &v43, &v42, 0x100000001LL));
  if (v44_.v45 == 1) {
    v38 = v44_.v44[0];
    LANES128(v38).n128_u32[3] = 0;
    v39 = vaddq_f32(v38, COERCE_AS(float32x4_t, GameData_2210d80));
  }
  else {
    v39 = v41;
  }
  *a2 = v39;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_d6ae60(PSEUDO_X8 x8_, float* a1,
                                                float* a2, float a4)
{
  float32x4_t* a3 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  double v7;
  double v8;
  double v9;
  unsigned int v10;
  float32x4_t v11;
  unsigned __int64 v12;
  unsigned int v13;
  float32x4_t v14;
  int8x16_t v15;
  float32x4_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  __int64 v28;
  float32x4_t v29;
  float v30;
  float v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  float32x4_t v35;
  float32x2_t v36;
  float v37;
  float v38;
  float32x2_t v39;
  float v40;
  float v41;
  float32x2_t v42;
  float v43;
  float v44;
  float v45;
  float32x4_t v46;
  float32x4_t* result;
  float32x4_t v48;
  float32x4_t v49;
  __int64 v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  float32x4_t v54;
  struct {
    float32x4_t v55[5];
    char v56;
  } v55_;

  game_hub_d6abb0((void*)(&v52), (__int64)a1, a4);
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6170,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt2((__int64)&GameData_21a6170) != 0) {
    v50 = *((_QWORD*)GameData_212c550 + 1);
    *(_QWORD*)&GameData_21a6160 = *(_QWORD*)GameData_212c550;
    *((_QWORD*)&GameData_21a6160 + 1) = v50;
    __cxa_guard_release_alt2((__int64)&GameData_21a6170);
  }
  v7 = (float)(a1[64] * 0x1.1df46a0000000p-6f) * 0x1.0000000000000p-1;
  v8 = cos(v7);
  v9 = sin(v7);
  *(float*)&v10 = v8 + PSEUDO_UNFUSED(v9 * 0x0.0p+0);
  LANES128(v11).n128_u64[0] = GameData_21a6160;
  *(float*)&v12 = PSEUDO_UNFUSED(v9 * -0x0.0p+0) + v8 * 0x0.0p+0;
  *(float*)&v13 = v9 + PSEUDO_UNFUSED(v8 * 0x0.0p+0);
  LANES128(v14).n128_u64[0] = __PAIR64__(v13, v12);
  LANES128(v14).n128_u64[1] = __PAIR64__(v10, v12);
  v15 = vmulq_f32(v14, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v14).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v14).n128_u64[1] = LANES128(v14).n128_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v11).n128_u64[1] = LANES128(v17).n128_u64[0];
  *(int32x2_t*)&LANES128(v18).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v15).n128_u64[0]), 1);
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v19 = vmlaq_f32(vmulq_f32(v14, v15), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v11, v16));
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6160),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v11).n128_u64[0];
  LANES128(v11).n128_u64[1] = GameData_21a6160;
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v15, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v21 = vmlsq_f32(vmlaq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v11, v18)),
                  v20, v17);
  LANES128(v20).n128_u64[0] = __PAIR64__(v13, v12);
  HIDWORD(v12) = v10;
  LANES128(v22).n128_u64[0] = __PAIR64__(v13, v12);
  LANES128(v17).n128_u64[0] = __PAIR64__(v13, v12);
  LANES128(v22).n128_u64[1] = v12;
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  v25 = vmulq_f32(v23, v21);
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v23).n128_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v22).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v20).n128_u64[0];
  *(int32x2_t*)&LANES128(v26).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0]), 1);
  v27 = vmulq_f32(v22, v26);
  v28 = *(_QWORD*)a2;
  v29 = vmlaq_f32(vmlaq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v17, v24)),
                  COERCE_AS(float32x4_t, GameData_1a83800), v27);
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v27).n128_i8[8] =
      vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v30 = a1[65];
  v32 = vmlsq_f32(v29, v27, v23);
  v31 = a2[2];
  LANES128(v32).n128_u32[3] = 0;
  if (v30 < a1[67]) {
    v30 = a1[67];
  }
  v33 = vmulq_n_f32(v32, v30);
  v34 = vaddq_f32(v52, v33);
  v35 = vsubq_f32(v52, v33);
  LANES64(v36).n64_f32[0] = LANES128_OF(vsubq_f32(v35, v34)).n128_f32[0];
  v37 = LANES128(v35).n128_f32[2] - LANES128(v34).n128_f32[2];
  if (LANES64(v36).n64_f32[0] != 0x0.0p+0f || v37 != 0x0.0p+0f) {
    v38 = sqrtf((float)(PSEUDO_UNFUSED(v37 * v37)) +
                (float)(LANES64(v36).n64_f32[0] * LANES64(v36).n64_f32[0]));
    LANES64(v36).n64_f32[0] = LANES64(v36).n64_f32[0] / v38;
    v37 = v37 / v38;
  }
  LANES64(v36).n64_f32[1] = v37;
  LANES64(v39).n64_f32[0] = LANES128(v34).n128_f32[0] - *(float*)&v28;
  v40 = LANES128(v34).n128_f32[2] - v31;
  if ((float)(LANES128(v34).n128_f32[0] - *(float*)&v28) != 0x0.0p+0f ||
      v40 != 0x0.0p+0f) {
    v41 = sqrtf((float)(PSEUDO_UNFUSED(v40 * v40)) +
                (float)(LANES64(v39).n64_f32[0] * LANES64(v39).n64_f32[0]));
    LANES64(v39).n64_f32[0] = LANES64(v39).n64_f32[0] / v41;
    v40 = v40 / v41;
  }
  LANES64(v39).n64_f32[1] = v40;
  if ((float)(LANES64_OF(vmul_f32(v36, v39)).n64_f32[1] +
              (float)(LANES64(v36).n64_f32[0] * LANES64(v39).n64_f32[0])) <=
      0x0.0p+0f) {
    LANES64(v42).n64_f32[0] = LANES128(v35).n128_f32[0] - *(float*)&v28;
    v43 = LANES128(v35).n128_f32[2] - v31;
    if ((float)(LANES128(v35).n128_f32[0] - *(float*)&v28) != 0x0.0p+0f ||
        v43 != 0x0.0p+0f) {
      v44 = sqrtf((float)(PSEUDO_UNFUSED(v43 * v43)) +
                  (float)(LANES64(v42).n64_f32[0] * LANES64(v42).n64_f32[0]));
      LANES64(v42).n64_f32[0] = LANES64(v42).n64_f32[0] / v44;
      v43 = v43 / v44;
    }
    LANES64(v42).n64_f32[1] = v43;
    if ((float)(LANES64_OF(vmul_f32(v36, v42)).n64_f32[1] +
                (float)(LANES64(v36).n64_f32[0] * LANES64(v42).n64_f32[0])) >=
        0x0.0p+0f) {
      v45 = (float)(PSEUDO_UNFUSED((float)(v31 - LANES128(v34).n128_f32[2]) *
                                   LANES64(v36).n64_f32[1])) +
            (float)(LANES64(v36).n64_f32[0] *
                    (float)(*(float*)&v28 - LANES128(v34).n128_f32[0]));
      LANES128(v34).n128_f32[0] =
          LANES128(v34).n128_f32[0] +
          (float)(PSEUDO_UNFUSED(LANES64(v36).n64_f32[0] * v45));
      LANES128(v34).n128_f32[1] =
          LANES128(v34).n128_f32[2] +
          (float)(PSEUDO_UNFUSED(LANES64(v36).n64_f32[1] * v45));
    }
    else {
      LANES128(v34).n128_u64[0] =
          LANES64_OF(
              vzip1_s32(
                  COERCE_AS(int32x2_t, LANES128(v35).n128_u64[0]),
                  COERCE_AS(int32x2_t,
                            LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0])))
              .n64_u64[0];
    }
  }
  else {
    LANES128(v34).n128_u64[0] =
        LANES64_OF(
            vzip1_s32(
                COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]),
                COERCE_AS(int32x2_t,
                          LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0])))
            .n64_u64[0];
  }
  LANES128(v46).n128_u64[0] =
      __PAIR64__(LANES128(v52).n128_u32[1], LANES128(v34).n128_u32[0]);
  LANES128(v46).n128_u64[1] = LANES128(v34).n128_u32[1];
  v51 = v46;
  v53 = vaddq_f32(v46, COERCE_AS(float32x4_t, GameData_1a832d0));
  v54 = vaddq_f32(v46, COERCE_AS(float32x4_t, GameData_1a82f60));
  result = X8CALL_X0(float32x4_t*, collision_670c60((void*)((__int64)v55_.v55),
                                                    &v54, &v53, 0x100000001LL));
  if (v55_.v56 == 1) {
    v48 = v55_.v55[0];
    LANES128(v48).n128_u32[3] = 0;
    v49 = vaddq_f32(v48, COERCE_AS(float32x4_t, GameData_2210d80));
  }
  else {
    v49 = v51;
  }
  *a3 = v49;
  {
    result;
    return;
  }
}

__int64 game_hub_d6b900(__int64 result, double a2, double a3)
{
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  float v15;
  __int128 v16;
  float32x2_t v17;
  __int128 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  float32x2_t v23;
  __int128 v24;
  _QWORD v25[2];
  _QWORD v26[8];
  __int128 v27;
  __int128 v28;

  v3 = *(__int64**)(result + 1128);
  v4 = *(__int64**)(result + 1136);
  v5 = result;
  if (v3 != v4) {
    while (1) {
      result = v3[1];
      if (result == 0) {
        break;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                memory_order_relaxed);
      v6 = *(_QWORD*)(result + 8);
      result = std___1___shared_weak_count___release_weak(result);
      if (v6 == -1) {
        break;
      }
      v3 += 2;
      if (v3 == v4) {
        v3 = v4;
        goto LABEL_11;
      }
    }
  }
  v7 = v3 + 2;
  if (v3 != v4 && v7 != v4) {
    do {
      result = v7[1];
      if (result != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 16), 1u,
                                  memory_order_relaxed);
        v10 = *(_QWORD*)(result + 8);
        result = std___1___shared_weak_count___release_weak(result);
        if (v10 != -1) {
          v11 = *v7;
          v12 = v7[1];
          *v7 = 0;
          v7[1] = 0;
          result = v3[1];
          *v3 = v11;
          v3[1] = v12;
          if (result != 0) {
            result = std___1___shared_weak_count___release_weak(result);
          }
          v3 += 2;
        }
      }
      v7 += 2;
    } while (v7 != v4);
  }
LABEL_11:
  i = *(__int64**)(v5 + 1136);
  if (v3 != i) {
    v13 = *(__int64**)(v5 + 1136);
    for (i = v3; v13 != v3; v13 -= 2) {
      result = *(v13 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
    }
    *(_QWORD*)(v5 + 1136) = v3;
  }
  v14 = *(__int64**)(v5 + 1128);
  if (*(_BYTE*)(v5 + 1196) == 1) {
    if (i != v14) {
      return result;
    }
    if (*(float*)(v5 + 268) == 0.0) {
      v15 = *(float*)(v5 + 260) * 0.5;
      *(_QWORD*)&v16 = *(_QWORD*)(v5 + 244);
      LODWORD(a3) = *(_DWORD*)(v5 + 252);
      *((double*)&v16 + 1) = a3;
      v28 = v16;
      Shape_f63ef0((void*)(v26), &v28, 0x1000000000000LL, 0, v15);
      LANES64(v17).n64_u32[0] = 0;
      LANES64(v17).n64_u32[1] = *(_DWORD*)(v5 + 264);
      *(float32x2_t*)&v18 = vadd_f32(*(float32x2_t*)(v5 + 244), v17);
      *((_QWORD*)&v18 + 1) = COERCE_UNSIGNED_INT(*(float*)(v5 + 252) + 0.0);
      v27 = v18;
      Shape_f63ef0((void*)(&v28), &v27, 0x1000000000000LL, 0, v15);
      v27 = *(_OWORD*)v26;
      if (v26[1] != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v26[1] + 16LL), 1u,
                                  memory_order_relaxed);
      }
      GameRoutine_d6c500(v5 + 1128, &v27);
      if (*((_QWORD*)&v27 + 1) != 0) {
        std___1___shared_weak_count___release_weak(*((_QWORD*)&v27 + 1));
      }
      v27 = v28;
      if (*((_QWORD*)&v28 + 1) != 0) {
        atomic_fetch_add_explicit(
            (atomic_ullong* volatile)(*((_QWORD*)&v28 + 1) + 16LL), 1u,
            memory_order_relaxed);
      }
      GameRoutine_d6c500(v5 + 1128, &v27);
      result = *((_QWORD*)&v27 + 1);
      if (*((_QWORD*)&v27 + 1) != 0) {
        result =
            std___1___shared_weak_count___release_weak(*((_QWORD*)&v27 + 1));
      }
      v19 = *((_QWORD*)&v28 + 1);
      if (*((_QWORD*)&v28 + 1) != 0 &&
          atomic_fetch_add(
              (atomic_ullong* volatile)(*((_QWORD*)&v28 + 1) + 8LL),
              0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        result = std___1___shared_weak_count___release_weak(v19);
      }
      v20 = v26[1];
      if (v26[1] == 0) {
        return result;
      }
    LABEL_62:
      if (atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        return std___1___shared_weak_count___release_weak(v20);
      }
      return result;
    }
    LODWORD(v22) = 0;
    *((float*)&v22 + 1) = *(float*)(v5 + 256) * 0x1.1df46a0000000p-6;
    v28 = v22;
    math_Mtx43_MakeRotation((void*)(v26), &v28);
    LANES64(v23).n64_u32[0] = 0;
    LANES64(v23).n64_f32[1] = *(float*)(v5 + 264) * 0.5;
    *(float32x2_t*)&v24 = vadd_f32(*(float32x2_t*)(v5 + 244), v23);
    *((_QWORD*)&v24 + 1) = COERCE_UNSIGNED_INT(*(float*)(v5 + 252) + 0.0);
    *(_OWORD*)&v26[6] = v24;
    GameRoutine_f643c0((void*)(&v28), v26, 0x1000000000000LL, 0,
                       *(float*)(v5 + 260) * 0.5);
    v27 = v28;
    if (*((_QWORD*)&v28 + 1) != 0) {
      atomic_fetch_add_explicit(
          (atomic_ullong* volatile)(*((_QWORD*)&v28 + 1) + 16LL), 1u,
          memory_order_relaxed);
    }
    GameRoutine_d6c500(v5 + 1128, &v27);
    result = *((_QWORD*)&v27 + 1);
    if (*((_QWORD*)&v27 + 1) != 0) {
      result = std___1___shared_weak_count___release_weak(*((_QWORD*)&v27 + 1));
    }
    v20 = *((_QWORD*)&v28 + 1);
    if (*((_QWORD*)&v28 + 1) != 0) {
      goto LABEL_62;
    }
  }
  else {
    if (v14 != i) {
      do {
        result = v14[1];
        if (result != 0) {
          result = std___1___shared_weak_count_lock(result);
          if (result != 0) {
            v21 = result;
            if (*v14 != 0) {
              v25[0] = *v14;
              v25[1] = result;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(result + 8),
                                        1u, memory_order_relaxed);
              result = Shape_f64760(v25);
              if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
                result = std___1___shared_weak_count___release_weak(v21);
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
              result = std___1___shared_weak_count___release_weak(v21);
            }
          }
        }
        v14 += 2;
      } while (v14 != i);
      i = *(__int64**)(v5 + 1136);
      v14 = *(__int64**)(v5 + 1128);
    }
    for (; i != v14; i -= 2) {
      result = *(i - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
    }
    *(_QWORD*)(v5 + 1136) = v14;
  }
  return result;
}

float32x4_t* game_hub_d6d160(__int64 a1, int a2, double a3, double a4)
{
  float32x4_t v6;
  double v7;
  double v8;
  double v9;
  float32x4_t v10;
  unsigned int v11;
  unsigned int v12;
  float32x4_t v13;
  unsigned __int64 v14;
  float32x4_t v15;
  int8x16_t v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int8x16_t v21;
  int8x16_t v22;
  float32x4_t v23;
  float32x4_t v24;
  float32x4_t v25;
  float32x4_t v26;
  float32x4_t v27;
  double v28;
  double v29;
  double v30;
  __int64 v31;
  unsigned int v32;
  float32x4_t v33;
  float32x4_t v34;
  unsigned int v35;
  unsigned __int64 v36;
  float32x4_t v37;
  int8x16_t v38;
  float32x4_t v39;
  float32x4_t v40;
  float32x4_t v41;
  float32x4_t v42;
  int8x16_t v43;
  int8x16_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  float32x4_t v48;
  float32x4_t v49;
  float32x4_t v50;
  unsigned __int32 v51;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float32x4_t v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;

  LODWORD(a4) = *(_DWORD*)(a1 + 252);
  LANES128(v6).n128_u32[0] = *(_QWORD*)(a1 + 244);
  LANES128(v6).n128_f64[1] = a4;
  LANES128(v6).n128_f32[1] =
      COERCE_FLOAT(HIDWORD(*(_QWORD*)(a1 + 244))) + 0x1.99999a0000000p-1f;
  v58 = v6;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt2((__int64)&GameData_21a61b0) != 0) {
    v56 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v56;
    __cxa_guard_release_alt2((__int64)&GameData_21a61b0);
  }
  v7 = (float)(*(float*)(a1 + 256) * 0x1.1df46a0000000p-6f) *
       0x1.0000000000000p-1;
  v8 = cos(v7);
  v9 = sin(v7);
  LANES128(v10).n128_u64[0] = GameData_21a61a0;
  *(float*)&v11 = v9 + PSEUDO_UNFUSED(v8 * 0x0.0p+0);
  *(float*)&v12 = v8 + PSEUDO_UNFUSED(v9 * 0x0.0p+0);
  LANES128(v13).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(float*)&v14 = PSEUDO_UNFUSED(v9 * -0x0.0p+0) + v8 * 0x0.0p+0;
  LANES128(v15).n128_u64[0] = __PAIR64__(v11, v14);
  LANES128(v10).n128_u64[1] = LANES128(v13).n128_u64[0];
  LANES128(v15).n128_u64[1] = __PAIR64__(v12, v14);
  v16 = vmulq_f32(v15, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v15).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v15).n128_u64[1] = LANES128(v15).n128_u64[0];
  *(int8x8_t*)&LANES128(v17).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v18).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v19 = vmlaq_f32(vmulq_f32(v15, v16), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v10, v17));
  LANES128(v17).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v18).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v16).n128_u64[0]), 1);
  LANES128(v13).n128_u64[1] = LANES128(v17).n128_u64[0];
  LANES128(v17).n128_u64[1] = GameData_21a61a0;
  LANES128(v20).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v20).n128_i8[8] =
      vqtbl1_s8(v16, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v21 = vmlsq_f32(vmlaq_f32(v19, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v17, v18)),
                  v20, v13);
  LANES128(v20).n128_u64[0] = __PAIR64__(v11, v14);
  HIDWORD(v14) = v12;
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v16).n128_i8[8] =
      vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v22).n128_u64[0] = __PAIR64__(v11, v14);
  LANES128(v17).n128_u64[0] = __PAIR64__(v11, v14);
  LANES128(v22).n128_u64[1] = v14;
  LANES128(v23).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v22, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v23).n128_u64[0];
  LANES128(v17).n128_u64[1] = LANES128(v24).n128_u64[0];
  LANES128(v24).n128_u64[1] = LANES128(v22).n128_u64[0];
  LANES128(v22).n128_u64[1] = LANES128(v20).n128_u64[0];
  v25 = vmlaq_f32(vmulq_f32(v23, v21), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v17, v16));
  LANES128(v16).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v16).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v21).n128_u64[0]), 1);
  v26 = vmlaq_f32(v25, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v22, v16));
  LANES128(v22).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v22).n128_i8[8] =
      vqtbl1_s8(v21, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v27 = vmlsq_f32(v26, v22, v24);
  LANES128(v27).n128_u32[3] = 0;
  v59 = vaddq_f32(
      v58, vmulq_n_f32(v27, *(float*)(a1 + 268) * 0x1.0000000000000p-1f));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a61b0,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt2((__int64)&GameData_21a61b0) != 0) {
    v57 = *((_QWORD*)GameData_212c560 + 1);
    *(_QWORD*)&GameData_21a61a0 = *(_QWORD*)GameData_212c560;
    *((_QWORD*)&GameData_21a61a0 + 1) = v57;
    __cxa_guard_release_alt2((__int64)&GameData_21a61b0);
  }
  v28 = (float)((float)(*(float*)(a1 + 256) + 0x1.6800000000000p+6f) *
                0x1.1df46a0000000p-6f) *
        0x1.0000000000000p-1;
  v29 = cos(v28);
  v30 = sin(v28);
  v31 = *(_QWORD*)(a1 + 1176);
  *(float*)&v32 = v29 + PSEUDO_UNFUSED(v30 * 0x0.0p+0);
  LANES128(v33).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v34).n128_u64[0] = GameData_21a61a0;
  *(float*)&v35 = v30 + PSEUDO_UNFUSED(v29 * 0x0.0p+0);
  LANES128(v34).n128_u64[1] = LANES128(v33).n128_u64[0];
  *(float*)&v36 = PSEUDO_UNFUSED(v30 * -0x0.0p+0) + v29 * 0x0.0p+0;
  LANES128(v37).n128_u64[0] = __PAIR64__(v35, v36);
  LANES128(v37).n128_u64[1] = __PAIR64__(v32, v36);
  v38 = vmulq_f32(v37, COERCE_AS(float32x4_t, GameData_1a829d0));
  LANES128(v37).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v37).n128_u64[1] = LANES128(v37).n128_u64[0];
  *(int8x8_t*)&LANES128(v39).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v40).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  v41 = vmlaq_f32(vmulq_f32(v37, v38), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v34, v39));
  LANES128(v39).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a61a0),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v40).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v38).n128_u64[0]), 1);
  LANES128(v33).n128_u64[1] = LANES128(v39).n128_u64[0];
  LANES128(v39).n128_u64[1] = GameData_21a61a0;
  LANES128(v42).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v42).n128_i8[8] =
      vqtbl1_s8(v38, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v43 = vmlsq_f32(vmlaq_f32(v41, COERCE_AS(float32x4_t, GameData_1a83800),
                            vmulq_f32(v39, v40)),
                  v42, v33);
  LANES128(v42).n128_u64[0] = __PAIR64__(v35, v36);
  HIDWORD(v36) = v32;
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v38).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v44).n128_u64[0] = __PAIR64__(v35, v36);
  LANES128(v39).n128_u64[0] = __PAIR64__(v35, v36);
  LANES128(v44).n128_u64[1] = v36;
  LANES128(v45).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v46).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v44, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v45).n128_u64[1] = LANES128(v45).n128_u64[0];
  LANES128(v39).n128_u64[1] = LANES128(v46).n128_u64[0];
  LANES128(v46).n128_u64[1] = LANES128(v44).n128_u64[0];
  LANES128(v44).n128_u64[1] = LANES128(v42).n128_u64[0];
  v47 = vmlaq_f32(vmulq_f32(v45, v43), COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v39, v38));
  LANES128(v38).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v38).n128_i8[8] =
      vdup_lane_s32(COERCE_AS(int32x2_t, LANES128(v43).n128_u64[0]), 1);
  v48 = vmlaq_f32(v47, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v44, v38));
  LANES128(v44).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v44).n128_i8[8] =
      vqtbl1_s8(v43, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  v49 = vmlsq_f32(v48, v44, v46);
  LANES128(v49).n128_u32[3] = 0;
  v50 = vmulq_n_f32(v49, *(float*)(a1 + 260) * 0x1.0000000000000p-1f);
  v60 = vaddq_f32(v59, v50);
  v61 = vsubq_f32(v59, v50);
  if (v31 == 0) {
    v53 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
    *(_QWORD*)(v53 + 8) = 0;
    *(_QWORD*)(v53 + 16) = 0;
    *(_QWORD*)v53 = GameData_1fdd228;
    v54 = GameData_212fae0[0];
    v55 = *(_QWORD*)(a1 + 1184);
    *(_QWORD*)(v53 + 40) = 0;
    *(_QWORD*)(v53 + 48) = 0;
    *(_QWORD*)(v53 + 56) = 0;
    *(_QWORD*)(v53 + 64) = 0;
    *(_QWORD*)(v53 + 72) = 0;
    *(_QWORD*)(v53 + 80) = 0;
    *(_QWORD*)(v53 + 88) = 0;
    *(_DWORD*)(v53 + 96) = 6;
    *(_QWORD*)(a1 + 1184) = v53;
    *(_QWORD*)(v53 + 32) = v54 + 16;
    *(_QWORD*)(a1 + 1176) = v53 + 32;
    if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
      std___1___shared_weak_count___release_weak_alt2(v55);
    }
  }
  if (a2 == 1) {
    v51 = 7;
  }
  else {
    v51 = 6;
  }
  return game_hub_fb6600(*(float32x4_t**)(a1 + 1176), v51, &v61, &v60);
}

__attribute__((swiftcall)) void game_hub_d6fba0(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, unsigned __int64 a3,
                                                __int64 a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v6;
  __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  char v31;
  char* v32;
  char* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  unsigned __int64 v39;
  bool v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int8 explicit;
  int* v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  unsigned __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  int v63;
  __int64 v64;
  bool v65;
  unsigned __int64 v66;
  unsigned __int16* v67;
  __int64 v68;
  __int64 v69;
  __int128* v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int128 v79;
  __int128 v80;
  __int128 v81;
  __int128 v82;
  __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  unsigned int v95;
  float v96;
  __int128 v97;
  __int128 v98;
  __int128 v99;
  __int128 v100;
  _QWORD v101[2];
  char* v102;
  _QWORD v103[2];
  char* v104;

  v6 = *(unsigned __int8*)(a1 + 112);
  v11 = (__int64*)GameData_212c638;
  if ((v6 & 1) != 0) {
    v12 = *(_QWORD*)(a1 + 120);
  }
  else {
    v12 = v6 >> 1;
  }
  v13 = *(_QWORD*)GameData_212c638;
  if (v12 != 0) {
    v14 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 32) - 8LL) + 64LL) +
                     96LL);
    if (v14 != 0) {
      if ((v6 & 1) != 0) {
        v15 = *(_QWORD*)(a1 + 128);
      }
      else {
        v15 = a1 + 113;
      }
      result = ObjectBuildCreate_c13700(v14, v15, v12);
      if ((result & 1) == 0) {
        goto LABEL_21;
      }
      v13 = *v11;
    }
  }
  v17 = *(_QWORD*)(v13 + 32);
  if (*(_QWORD*)(v13 + 24) == v17) {
    v18 = 0;
    result = GameRoutine_ecb40();
    if ((result & 1) == 0) {
    LABEL_21:
      *(_BYTE*)a5 = 0;
      *(_BYTE*)(a5 + 64) = 0;
      {
        result;
        return;
      }
    }
  }
  else {
    v18 = *(_QWORD*)(v17 - 8);
    result = GameRoutine_ecb40();
    if ((result & 1) == 0) {
      goto LABEL_21;
    }
  }
  v19 = *(_QWORD*)(v18 + 64);
  if (v19 != 0) {
    v20 = *(_QWORD*)(v19 + 96);
    if (v20 == 0 || *(_DWORD*)(v20 + 240) != 5) {
      goto LABEL_21;
    }
    v21 = (_QWORD*)(v19 + 120);
    while (1) {
      v21 = (_QWORD*)*v21;
      if (v21 == nullptr) {
        break;
      }
      if (*(_DWORD*)(v21[5] + 240LL) != 5) {
        goto LABEL_21;
      }
    }
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v22 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v24 = 26;
    }
    else {
      v24 = (a3 | 7) + 1;
    }
    v23 = (char*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0);
    v101[1] = a3;
    v102 = v23;
    v101[0] = v24 | 1;
  }
  else {
    LOBYTE(v101[0]) = 2 * a3;
    v23 = (char*)v101 + 1;
    if (a3 == 0) {
      goto LABEL_32;
    }
  }
  memmove(v23, a2, a3);
LABEL_32:
  v23[a3] = 0;
  v25 = strlen(a4);
  v26 = (__int64*)GameRoutine_1a09ce0(v101, a4, v25);
  v27 = *v26;
  v28 = v26[1];
  *v26 = 0;
  v26[1] = 0;
  v103[0] = v27;
  v103[1] = v28;
  v29 = (char*)v26[2];
  v26[2] = 0;
  v104 = v29;
  if ((v101[0] & 1) != 0 && v102 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v22 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v22 + v30, v102);
  }
  v31 = v103[0];
  v32 = v104;
  if ((v103[0] & 1) != 0) {
    v33 = v104;
  }
  else {
    v33 = (char*)v103 + 1;
  }
  result = game_HashString(v33);
  v34 = result;
  if ((v31 & 1) != 0 && v32 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*v22 + 200LL) == 0) {
      v35 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt2(*v22 + v35, v32);
  }
  v37 = (__int64*)(a1 + 176);
  v36 = *(_QWORD*)(a1 + 176);
  if (v36 != 0) {
    v38 = a1 + 176;
    do {
      v39 = *(_QWORD*)(v36 + 32);
      v40 = v39 >= v34;
      if (v39 >= v34) {
        v41 = 0;
      }
      else {
        v41 = 8;
      }
      if (v40) {
        v38 = v36;
      }
      v36 = *(_QWORD*)(v36 + v41);
    } while (v36 != 0);
    if ((__int64*)v38 != v37 && v34 >= *(_QWORD*)(v38 + 32)) {
      v45 = *(unsigned __int8*)(v38 + 112);
      *(_BYTE*)a5 = 0;
      *(_BYTE*)(a5 + 64) = 0;
      if (v45 == 1) {
        v46 = *(_QWORD*)(v38 + 88);
        *(_QWORD*)(a5 + 32) = *(_QWORD*)(v38 + 80);
        *(_QWORD*)(a5 + 40) = v46;
        v47 = *(_QWORD*)(v38 + 104);
        *(_QWORD*)(a5 + 48) = *(_QWORD*)(v38 + 96);
        *(_QWORD*)(a5 + 56) = v47;
        v48 = *(_QWORD*)(v38 + 56);
        *(_QWORD*)a5 = *(_QWORD*)(v38 + 48);
        *(_QWORD*)(a5 + 8) = v48;
        v50 = *(_QWORD*)(v38 + 64);
        v49 = *(_QWORD*)(v38 + 72);
        *(_BYTE*)(a5 + 64) = 1;
        *(_QWORD*)(a5 + 16) = v50;
        *(_QWORD*)(a5 + 24) = v49;
      }
      {
        result;
        return;
      }
    }
  }
  v42 = *v11;
  strlen(a2);
  v100 = (__typeof__(v100)){0};
  result = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v42 + 32) - 8LL) + 64LL);
  if (result != 0) {
    v43 = *(_QWORD*)(result + 96);
    if (v43 != 0 && *(_DWORD*)(v43 + 240) == 5) {
      v44 = (_QWORD*)(result + 120);
      while (1) {
        v44 = (_QWORD*)*v44;
        if (v44 == nullptr) {
          break;
        }
        if (*(_DWORD*)(v44[5] + 240LL) != 5) {
          goto LABEL_89;
        }
      }
      result = ObjectBuildCreate_c21360();
      if (result != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212df10, memory_order_acquire);
        v52 = GameData_212df08;
        if ((explicit & 1) == 0) {
          v94 = result;
          v95 = __cxa_guard_acquire_alt2((__int64)GameData_212df10);
          result = v94;
          if (v95 != 0) {
            *v52 = wld_Crc32(0, "ModelModule", 11);
            __cxa_guard_release_alt1(GameData_212df10, v96);
            result = v94;
          }
        }
        v53 = *(_QWORD*)(result + 512);
        v54 = v53;
        while (v54 != *(_QWORD*)(result + 504)) {
          v55 = *(_DWORD*)(v54 - 16);
          v54 -= 16;
          v53 -= 16;
          if (v55 == *v52) {
            if (*(_QWORD*)(result + 512) != v53) {
              v56 = *(_QWORD*)(v53 + 8);
              if (v56 != 0) {
                v57 = *(_QWORD**)(*(_QWORD*)(v56 + 24) + 168LL);
                if (v57 == nullptr) {
                  goto LABEL_90;
                }
                v58 = *(_QWORD*)(*v57 + 8LL);
                if (v58 != 0) {
                  if (a4 != 0) {
                    result = strlen(a4);
                    v59 = result;
                  }
                  else {
                    v59 = 0;
                  }
                  v60 = v58 + 8;
                  v61 = *(unsigned __int16*)(v58 + 12);
                  v62 = v58 + 8 + 16 * v61;
                  v63 = *(_DWORD*)v62;
                  if (*(_DWORD*)(v58 + 8) < *(_DWORD*)v62) {
                    do {
                      v66 = (__int64)v63 >> 3;
                      if (v59 > v66) {
                        v64 = (*(unsigned __int8*)(a4 + v59 + ~v66) >>
                               (v63 & 7)) &
                              1;
                      }
                      else {
                        v64 = 0;
                      }
                      v61 = *(unsigned __int16*)(v58 + 12 + 16 * v61 + 2 * v64);
                      v65 = v63 < *(_DWORD*)(v60 + 16 * v61);
                      v63 = *(_DWORD*)(v60 + 16 * v61);
                    } while (v65);
                    v62 = v60 + 16 * v61;
                  }
                  v67 = *(unsigned __int16**)(v62 + 8);
                  if (v59 == *v67) {
                    result = memcmp_alt1(v67 + 1, a4, v59);
                    if ((_DWORD)result == 0) {
                      v68 = v62 - v58 - 24;
                      if ((~v68 & 0xFFFFFFFF0LL) != 0) {
                        v69 = v57[4];
                        if (v69 != 0) {
                          LODWORD(v57) = 1;
                          v70 = (__int128*)(v69 +
                                            ((__int64)(int)(v68 >> 4) << 6));
                          v97 = v70[1];
                          v98 = v70[2];
                          v99 = v70[3];
                          v100 = *v70;
                          goto LABEL_90;
                        }
                      }
                    }
                  }
                }
              }
            }
            break;
          }
        }
      }
    }
  }
LABEL_89:
  LODWORD(v57) = 0;
LABEL_90:
  v71 = *v37;
  v72 = (__int64*)(a1 + 176);
  v73 = a1 + 176;
  if (*v37 != 0) {
    while (1) {
      while (1) {
        v73 = v71;
        v74 = *(_QWORD*)(v71 + 32);
        if (v34 >= v74) {
          break;
        }
        v71 = *(_QWORD*)v73;
        v72 = (__int64*)v73;
        if (*(_QWORD*)v73 == 0) {
          goto LABEL_97;
        }
      }
      if (v74 >= v34) {
        break;
      }
      v71 = *(_QWORD*)(v73 + 8);
      if (v71 == 0) {
        v72 = (__int64*)(v73 + 8);
        goto LABEL_97;
      }
    }
  }
  else {
  LABEL_97:
    v75 = v73;
    v76 = fw_memory_HeapManager_Allocate(*v22, 128, 16, 0);
    *(_QWORD*)(v76 + 32) = v34;
    *(_BYTE*)(v76 + 48) = 0;
    v73 = v76;
    v77 = v76;
    *(_BYTE*)(v76 + 112) = 0;
    *(_QWORD*)v76 = 0;
    *(_QWORD*)(v76 + 8) = 0;
    *(_QWORD*)(v76 + 16) = v75;
    *v72 = v76;
    v78 = **(_QWORD**)(a1 + 168);
    if (v78 != 0) {
      *(_QWORD*)(a1 + 168) = v78;
      v77 = *v72;
    }
    result = fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 176), v77);
    ++*(_QWORD*)(a1 + 184);
  }
  if (*(unsigned __int8*)(v73 + 112) == (_DWORD)v57) {
    if (*(_BYTE*)(v73 + 112) != 0) {
      v79 = v100;
      v80 = v97;
      v81 = v98;
      v82 = v99;
    LABEL_106:
      *(_OWORD*)(v73 + 48) = v79;
      *(_OWORD*)(v73 + 64) = v80;
      *(_OWORD*)(v73 + 80) = v81;
      *(_OWORD*)(v73 + 96) = v82;
    }
  }
  else {
    if (*(_BYTE*)(v73 + 112) == 0) {
      v79 = v100;
      v80 = v97;
      v81 = v98;
      v82 = v99;
      *(_BYTE*)(v73 + 112) = 1;
      goto LABEL_106;
    }
    *(_BYTE*)(v73 + 112) = 0;
  }
  v83 = *v37;
  v84 = a1 + 176;
  if (*v37 != 0) {
    while (1) {
      while (1) {
        v84 = v83;
        v85 = *(_QWORD*)(v83 + 32);
        if (v34 >= v85) {
          break;
        }
        v83 = *(_QWORD*)v84;
        v37 = (__int64*)v84;
        if (*(_QWORD*)v84 == 0) {
          goto LABEL_114;
        }
      }
      if (v85 >= v34) {
        break;
      }
      v83 = *(_QWORD*)(v84 + 8);
      if (v83 == 0) {
        v37 = (__int64*)(v84 + 8);
        goto LABEL_114;
      }
    }
  }
  else {
  LABEL_114:
    v86 = v84;
    v87 = fw_memory_HeapManager_Allocate(*v22, 128, 16, 0);
    *(_QWORD*)(v87 + 32) = v34;
    *(_BYTE*)(v87 + 48) = 0;
    v84 = v87;
    v88 = v87;
    *(_BYTE*)(v87 + 112) = 0;
    *(_QWORD*)v87 = 0;
    *(_QWORD*)(v87 + 8) = 0;
    *(_QWORD*)(v87 + 16) = v86;
    *v37 = v87;
    v89 = **(_QWORD**)(a1 + 168);
    if (v89 != 0) {
      *(_QWORD*)(a1 + 168) = v89;
      v88 = *v37;
    }
    result = fw_containers_BalanceAfterInsert(*(_QWORD*)(a1 + 176), v88);
    ++*(_QWORD*)(a1 + 184);
  }
  *(_BYTE*)a5 = 0;
  *(_BYTE*)(a5 + 64) = 0;
  if (*(_BYTE*)(v84 + 112) == 1) {
    v90 = *(_QWORD*)(v84 + 104);
    *(_QWORD*)(a5 + 40) = *(_QWORD*)(v84 + 88);
    *(_QWORD*)(a5 + 56) = v90;
    v91 = *(_QWORD*)(v84 + 72);
    *(_QWORD*)(a5 + 8) = *(_QWORD*)(v84 + 56);
    *(_QWORD*)(a5 + 24) = v91;
    v92 = *(_QWORD*)(v84 + 48);
    *(_QWORD*)(a5 + 16) = *(_QWORD*)(v84 + 64);
    *(_QWORD*)a5 = v92;
    v93 = *(_QWORD*)(v84 + 96);
    *(_QWORD*)(a5 + 32) = *(_QWORD*)(v84 + 80);
    *(_QWORD*)(a5 + 48) = v93;
    *(_BYTE*)(a5 + 64) = 1;
  }
  {
    result;
    return;
  }
}

__int64 game_hub_d7b370(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v17[3];

  GameRoutine_d7ad40((__int64*)a1);
  v2 = *(_QWORD*)(a1 + 24);
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = *(_QWORD*)(a1 + 16);
    if (v4 == 0 ||
        (*(int*)(GameData_21f3cb8 + 32) <= 0
             ? (v5 = *(_DWORD*)(GameData_21f3cb8 + 16) <= 0)
             : (v5 = false),
         !v5 ||
             game_ProcGameSkipView_instance_ != 0 &&
                 (unsigned int)*(
                     unsigned __int8*)(game_ProcGameSkipView_instance_ + 152) -
                         1 <=
                     2 &&
                 (((v6 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                   8) != 0
                      ? (v7 = 2)
                      : (v7 = 3),
                  (v7 & v6) == 0)) ||
        game_hub_ProcHubSeqView_instance_ != 0 &&
            (v8 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 408)) != 0 &&
            *(_QWORD*)(v8 + 40) != 0 ||
        (v9 = *(_QWORD*)(game_hub_ProcHubSeqView_instance_ + 416)) != 0 &&
            *(_QWORD*)(v9 + 40) != 0 ||
        *(_BYTE*)(GameData_21f3d10 + 10) != 1) {
      v10 = 0;
    }
    else {
      v10 = 0;
      if (*(int*)(*(_QWORD*)GameData_212d310 + 24LL) <= 0 &&
          *(float*)(a1 + 72) <= 0.0f && (*(_BYTE*)(a1 + 76) & 1) == 0) {
        v11 = v3;
        if ((GameRoutine_d8d3a0(GameData_21f3cb8, 0) & 1) != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                    memory_order_relaxed);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                    memory_order_relaxed);
          v12 = *(_QWORD*)(a1 + 40);
          *(_QWORD*)(a1 + 32) = v4;
          *(_QWORD*)(a1 + 40) = v11;
          if (v12 != 0) {
            std___1___shared_weak_count___release_weak(v12);
          }
          AreaEvent_d59720((void*)(v17), (_QWORD*)v4, 4);
          v13 = *(_QWORD*)(a1 + 48);
          if (v13 != 0) {
            *(_QWORD*)(a1 + 56) = v13;
            v14 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v14 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
          }
          v3 = v11;
          qmemcpy((void*)(a1 + 48), v17, 24);
          if (*(_BYTE*)(v4 + 1752) == 1) {
            *(_BYTE*)(a1 + 76) = 1;
            *(float*)(a1 + 72) =
                fmaxf(*(float*)(a1 + 72), 0x1.99999a0000000p-3f);
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
            std___1___shared_weak_count___release_weak(v11);
            v3 = v11;
          }
          v10 = 1;
        }
        else {
          v10 = 0;
          v3 = v11;
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v15);
    }
  }
  else {
    return 0;
  }
  return v10;
}

__int64 game_hub_d7b960(__int64 a1)
{

#pragma clang fp contract(off)
  float32x4_t* v1;
  float32x4_t* v3;
  float32x4_t v4;
  int8x16_t v5;
  float32x2_t v6;
  __int64 v7;
  __int64 v8;

  v1 = *(float32x4_t**)(a1 + 48);
  if ((LANES128(v1[19]).n128_u8[1] & 1) != 0) {
    return 1;
  }
  if (LANES128(v1[5]).n128_f32[3] > 0x0.0p+0f) {
    if (LANES128(v1[4]).n128_u8[0] == 1) {
      v3 = v1 + 3;
    }
    else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                   memory_order_acquire) &
              1) != 0) {
      v3 = (float32x4_t*)&GameData_21a6120;
    }
    else {
      v8 = a1;
      v3 = (float32x4_t*)&GameData_21a6120;
      if ((unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v7 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v7;
        __cxa_guard_release(&GameData_21a6130);
      }
      a1 = v8;
    }
    v4 = vsubq_f32(*v3, *(float32x4_t*)(*(_QWORD*)GameData_212dc38[0] + 32LL));
    v5 = vmulq_f32(v4, v4);
    LANES128(v5).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v5, v5, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0])))
            .n64_u64[0];
    LANES64(v6).n64_u64[0] =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v5).n128_u64[0]))))
            .n64_u64[0];
    if (LANES64(v6).n64_f32[0] >= 0x1.0000000000000p+0f) {
      return (*(_DWORD*)(*GameData_212ebc0[0] +
                         16LL * (*(int (**)(__int64, double))(*(_QWORD*)a1 +
                                                              40LL))(
                                    a1, LANES64(v6).n64_f64[0]) +
                         176) < 1) &
             *(_BYTE*)(a1 + 8);
    }
  }
  return 0;
}

__int64 game_hub_d804a0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  float32x4_t** v4;
  float v5;
  int8x16_t v6;
  float32x4_t* v7;
  __int64 v8;
  float32x4_t* v9;
  float32x4_t v10;
  float v11;
  float32x4_t v12;
  int8x16_t v13;
  __int64 result;
  __int64* v15;
  __int64* i;
  __int64 v17;
  __int64 v18;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (v1 != v2) {
    v4 = (float32x4_t**)GameData_212dc68;
    while (1) {
      v7 = *(float32x4_t**)v1;
      v8 = *(_QWORD*)(v1 + 8);
      if (v8 != 0) {
        v9 = *(float32x4_t**)v1;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                  memory_order_relaxed);
        PopupController_d7bf00(v9);
        if (LANES128((*v4)[3]).n128_u8[0] == 1 &&
            (LANES128(v7[4]).n128_u8[0] & 1) != 0) {
          v10 = vsubq_f32((*v4)[1], v7[3]);
          v11 = LANES128(v10).n128_f32[1];
          if (LANES128(v10).n128_f32[1] > 0x0.0p+0f) {
            v11 = LANES128(v10).n128_f32[1] + -0x1.8000000000000p+1f;
            if ((float)(LANES128(v10).n128_f32[1] + -0x1.8000000000000p+1f) >=
                0x0.0p+0f) {
              goto LABEL_21;
            }
          LABEL_20:
            v11 = 0x0.0p+0f;
            goto LABEL_21;
          }
          if (LANES128(v10).n128_f32[1] < 0x0.0p+0f) {
            v11 = LANES128(v10).n128_f32[1] + 0x1.8000000000000p+1f;
            if ((float)(LANES128(v10).n128_f32[1] + 0x1.8000000000000p+1f) >
                0x0.0p+0f) {
              goto LABEL_20;
            }
          }
        LABEL_21:
          LANES128(v10).n128_f32[1] = v11;
          v13 = vmulq_f32(v10, v10);
          LANES128(v13).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(COERCE_AS(
                               float32x2_t,
                               LANES128_OF(vextq_s8(v13, v13, 8u)).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0])))
                  .n64_u64[0];
          LANES128(v7[6]).n128_u32[1] =
              LANES64_OF(
                  vsqrt_f32(vpadd_f32(
                      COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v13).n128_u64[0]))))
                  .n64_u32[0];
        }
        PopupController_d7c000((__int64)v7);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak(v8);
        }
        goto LABEL_6;
      }
      PopupController_d7bf00(*(float32x4_t**)v1);
      if (LANES128((*v4)[3]).n128_u8[0] == 1 &&
          (LANES128(v7[4]).n128_u8[0] & 1) != 0) {
        break;
      }
    LABEL_5:
      PopupController_d7c000((__int64)v7);
    LABEL_6:
      v1 += 16;
      if (v1 == v2) {
        goto LABEL_27;
      }
    }
    v12 = vsubq_f32((*v4)[1], v7[3]);
    v5 = LANES128(v12).n128_f32[1];
    if (LANES128(v12).n128_f32[1] <= 0x0.0p+0f) {
      if (LANES128(v12).n128_f32[1] >= 0x0.0p+0f) {
        goto LABEL_4;
      }
      v5 = LANES128(v12).n128_f32[1] + 0x1.8000000000000p+1f;
      if ((float)(LANES128(v12).n128_f32[1] + 0x1.8000000000000p+1f) <=
          0x0.0p+0f) {
        goto LABEL_4;
      }
    }
    else {
      v5 = LANES128(v12).n128_f32[1] + -0x1.8000000000000p+1f;
      if ((float)(LANES128(v12).n128_f32[1] + -0x1.8000000000000p+1f) >=
          0x0.0p+0f) {
        goto LABEL_4;
      }
    }
    v5 = 0x0.0p+0f;
  LABEL_4:
    LANES128(v12).n128_f32[1] = v5;
    v6 = vmulq_f32(v12, v12);
    LANES128(v6).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v6, v6, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0])))
            .n64_u64[0];
    LANES128(v7[6]).n128_u32[1] =
        LANES64_OF(vsqrt_f32(vpadd_f32(
                       COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]),
                       COERCE_AS(float32x2_t, LANES128(v6).n128_u64[0]))))
            .n64_u32[0];
    goto LABEL_5;
  }
LABEL_27:
  result = game_hub_d806e0(a1);
  v15 = *(__int64**)(a1 + 8);
  for (i = *(__int64**)(a1 + 16); v15 != i; v15 += 2) {
    v17 = *v15;
    v18 = v15[1];
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      result = GameRoutine_d7c300(v17);
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        result = std___1___shared_weak_count___release_weak(v18);
      }
    }
    else {
      result = GameRoutine_d7c300(v17);
    }
  }
  return result;
}

__int64 game_hub_d806e0(__int64 result)
{

#pragma clang fp contract(off)
  float32x4_t v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t v8;
  float32x4_t v9;
  __int64 v10;
  float32x4_t** v11;
  float32x4_t** v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  float32x4_t* v17;
  float32x4_t* v18;
  float32x4_t v19;
  int8x16_t v20;
  unsigned __int32 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  unsigned int v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  unsigned __int32 v49;
  float32x4_t v50;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v46 = result;
    v47 = __cxa_guard_acquire(&GameData_21a6130);
    result = v46;
    if (v47 != 0) {
      v48 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v48;
      __cxa_guard_release(&GameData_21a6130);
      result = v46;
    }
  }
  if (*(_QWORD*)(*(_QWORD*)GameData_212dc60[0] + 32LL) != 0) {
    v1 = *(float32x4_t*)(*(_QWORD*)GameData_212dc38[0] + 32LL);
    LANES128(v1).n128_u32[3] = 0;
    v50 = v1;
    goto LABEL_17;
  }
  v50 = COERCE_AS(float32x4_t, GameData_21a6120);
  v2 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v2 != 0) {
    v3 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v4 = result;
    v5 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    v6 = std___1___shared_weak_count_lock(v5);
    std___1___shared_weak_count___release_weak(v2);
    if (v6 != 0 && v3 != 0) {
      result = v4;
      v9 = *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v3 + 24) + 16LL) + 560LL);
      LANES128(v9).n128_u32[3] = 0;
      v50 = v9;
    LABEL_15:
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v10 = result;
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
        result = v10;
      }
      goto LABEL_17;
    }
    result = v4;
  }
  else {
    v6 = 0;
  }
  if (*(_BYTE*)(*(_QWORD*)GameData_212c6a0[0] + 40LL) == 1) {
    v8 = *(float32x4_t*)(*(_QWORD*)GameData_212c6a0[0] + 128LL);
    LANES128(v8).n128_u32[3] = 0;
    v50 = v8;
  }
  if (v6 != 0) {
    goto LABEL_15;
  }
LABEL_17:
  v12 = *(float32x4_t***)(result + 8);
  v11 = *(float32x4_t***)(result + 16);
  v13 = (char*)v11 - (char*)v12;
  if (v11 == v12) {
    return result;
  }
  if (v13 < 0) {
  LABEL_79:
    GameRoutine_d80f80();
  }
  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, (char*)v11 - (char*)v12, 16, 0);
  v14 = result + v13;
  v15 = result;
  v16 = result;
  do {
    v17 = *v12;
    if (LANES128((*v12)[4]).n128_u8[0] == 1) {
      v18 = v17 + 3;
    }
    else {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0) {
        result = __cxa_guard_acquire(&GameData_21a6130);
        if ((_DWORD)result != 0) {
          v30 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v30;
          result = __cxa_guard_release(&GameData_21a6130);
        }
      }
      v18 = (float32x4_t*)&GameData_21a6120;
    }
    v19 = vsubq_f32(v50, *v18);
    v20 = vmulq_f32(v19, v19);
    LANES128(v20).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v20, v20, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
            .n64_u64[0];
    v21 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v20).n128_u64[0])))
            .n64_u32[0];
    if (v16 < v14) {
      *(_QWORD*)v16 = v17;
      *(_DWORD*)(v16 + 8) = v21;
      v16 += 16LL;
    }
    else {
      v22 = v16 - v15;
      v23 = (__int64)(v16 - v15) >> 4;
      v24 = v23 + 1;
      if ((unsigned __int64)(v23 + 1) >> 60 != 0) {
        goto LABEL_79;
      }
      if ((__int64)(v14 - v15) >> 3 > v24) {
        v24 = (__int64)(v14 - v15) >> 3;
      }
      if (v14 - v15 >= 0x7FFFFFFFFFFFFFF0LL) {
        v25 = 0xFFFFFFFFFFFFFFFLL;
      }
      else {
        v25 = v24;
      }
      if (v25 != 0) {
        v49 = v21;
        if (v25 >> 60 != 0) {
          GameRoutine_60a210_alt1();
        }
        v26 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v25, 16, 0);
        v21 = v49;
      }
      else {
        v26 = 0;
      }
      v27 = v26 + v22;
      v14 = v26 + 16 * v25;
      *(_QWORD*)v27 = v17;
      v28 = v26 + v22 - 16 * v23;
      *(_DWORD*)(v27 + 8) = v21;
      v16 = v26 + v22 + 16;
      result = memcpy(v28, v15, v22);
      if (v15 != 0) {
        v29 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v29 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (_QWORD)(v15));
      }
      v15 = v28;
    }
    v12 += 2;
  } while (v12 != v11);
  if (v15 == v16) {
    if (v15 == 0) {
      return result;
    }
    goto LABEL_76;
  }
  v31 = (__int64)(v16 - v15) >> 4;
  GameRoutine_d80fa0(v15, v16, (2 * __clz(v31)) ^ 0x7E, 1);
  if (v16 - v15 == 16) {
    v32 = 0;
    v33 = 0x100000000LL;
  }
  else {
    v34 = (__int64*)(v15 + 16);
    v32 = 0;
    v35 = 0;
    do {
      v36 = *(v34 - 2);
      if (v36 != 0) {
        if (*(_BYTE*)(v36 + 88) == 1 &&
            (((v37 = *(unsigned __int8*)(v36 + 256)) & 1) != 0
                 ? (v38 = *(_QWORD*)(v36 + 264))
                 : (v38 = v37 >> 1),
             v38 != 0)) {
          *(_DWORD*)(v36 + 308) = v35;
          *(_BYTE*)(v36 + 312) = 1;
          ++v35;
        }
        else {
          *(_BYTE*)(v36 + 312) = 0;
          *(_DWORD*)(v36 + 308) = 0;
        }
      }
      v39 = *v34;
      if (*v34 != 0) {
        if (*(_BYTE*)(v39 + 88) == 1 &&
            (((v40 = *(unsigned __int8*)(v39 + 256)) & 1) != 0
                 ? (v41 = *(_QWORD*)(v39 + 264))
                 : (v41 = v40 >> 1),
             v41 != 0)) {
          *(_DWORD*)(v39 + 308) = v35;
          *(_BYTE*)(v39 + 312) = 1;
          ++v35;
        }
        else {
          *(_BYTE*)(v39 + 312) = 0;
          *(_DWORD*)(v39 + 308) = 0;
        }
      }
      v32 += 2;
      v34 += 4;
    } while ((v31 & 0xFFFFFFFFFFFFFFFELL) != v32);
    v33 = v35 | 0x100000000LL;
    if ((((_BYTE)v16 - (_BYTE)v15) & 0x10) == 0) {
      goto LABEL_76;
    }
  }
  v42 = *(_QWORD*)(v15 + 16 * v32);
  if (v42 != 0) {
    if (*(_BYTE*)(v42 + 88) == 1 &&
        (((v43 = *(unsigned __int8*)(v42 + 256)) & 1) != 0
             ? (v44 = *(_QWORD*)(v42 + 264))
             : (v44 = v43 >> 1),
         v44 != 0)) {
      *(_DWORD*)(v42 + 308) = v33;
      *(_BYTE*)(v42 + 312) = BYTE4(v33);
    }
    else {
      *(_BYTE*)(v42 + 312) = 0;
      *(_DWORD*)(v42 + 308) = 0;
    }
  }
LABEL_76:
  v45 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v45 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v45, (_QWORD)(v15));
}

__attribute__((swiftcall)) void game_hub_d80c00(PSEUDO_X8 x8_, _QWORD* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 result;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;

  v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 352, 16, 0);
  v6 = v5 + 4;
  v7 = v5;
  v5[1] = 0;
  v5[2] = 0;
  *v5 = GameData_1fddab0;
  result = GameRoutine_d7ba80(v5 + 4);
  v9 = (_QWORD*)a1[2];
  v10 = a1[3];
  if ((unsigned __int64)v9 >= v10) {
    v12 = a1[1];
    v13 = (char*)v9 - v12;
    v14 = ((__int64)v9 - v12) >> 4;
    v15 = v14 + 1;
    if ((unsigned __int64)(v14 + 1) >> 60 != 0) {
      GameRoutine_d80f60(result);
    }
    v16 = v10 - v12;
    if (v16 >> 3 > v15) {
      v15 = v16 >> 3;
    }
    if ((unsigned __int64)v16 >= 0x7FFFFFFFFFFFFFF0LL) {
      v17 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v15;
    }
    if (v17 >> 60 != 0) {
      GameRoutine_60a210(result);
    }
    v18 = fw_memory_HeapManager_Allocate(*v4, 16 * v17, 16, 0);
    v19 = &v13[v18];
    v20 = v18 + 16 * v17;
    *(_QWORD*)v19 = v6;
    *((_QWORD*)v19 + 1) = v7;
    v21 = (__int64)&v13[v18 + -16 * v14];
    v11 = (__int64)&v13[v18 + 16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                              memory_order_relaxed);
    result = memcpy(v21, v12, v13);
    a1[1] = v21;
    a1[2] = v11;
    a1[3] = v20;
    if (v12 != 0) {
      v22 = 128;
      if (*(_QWORD*)(*v4 + 200LL) == 0) {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free_alt2(*v4 + v22, v12);
    }
  }
  else {
    *v9 = v6;
    v9[1] = v7;
    v11 = (__int64)(v9 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                              memory_order_relaxed);
  }
  a1[2] = v11;
  *a2 = v6;
  a2[1] = v7;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 2), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*))(*v7 + 16LL))(v7);
    {
      std___1___shared_weak_count___release_weak(v7);
      return;
    }
  }
  {
    result;
    return;
  }
}

__n128 game_hub_d96f00(__int64 a1, __int64* a2)
{
  __int64 v3;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64* i;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  atomic_ullong* v17;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = a2[1];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v5 != 0) {
      v7 = *a2;
      v8 = v5;
      if (*a2 == 0) {
        goto LABEL_26;
      }
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      v9 = *(__int64**)(a1 + 8);
      v10 = *(__int64**)(a1 + 16);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      if (v9 != v10) {
        while (*v9 != v7) {
          v9 += 2;
          if (v9 == v10) {
            v9 = v10;
            goto LABEL_17;
          }
        }
      }
      if (v9 != v10) {
        for (i = v9 + 2; i != v10; i += 2) {
          v12 = *i;
          if (*i != v7) {
            v13 = i[1];
            *i = 0;
            i[1] = 0;
            v14 = v9[1];
            *v9 = v12;
            v9[1] = v13;
            if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14),
                  result = COERCE_AS(__typeof__(result),
                                     PSEUDO_REGISTER(__n128, "v0", "=w"));
              result = std___1___shared_weak_count___release_weak_alt1(v14);
            }
            v9 += 2;
          }
        }
      }
    LABEL_17:
      v15 = *(__int64**)(a1 + 16);
      if (v9 != v15) {
        do {
          v16 = *(v15 - 1);
          if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16),
                result = COERCE_AS(__typeof__(result),
                                   PSEUDO_REGISTER(__n128, "v0", "=w"));
            result = std___1___shared_weak_count___release_weak_alt1(v16);
          }
          v15 -= 2;
        } while (v15 != v9);
        *(_QWORD*)(a1 + 16) = v9;
      }
      v17 = (atomic_ullong*)(v8 + 8);
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_26;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v8);
        if (atomic_fetch_add(v17, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          goto LABEL_26;
        }
      }
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak_alt1(v8);
    LABEL_26:
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
  }
  return result;
}

__n128 game_hub_d97940(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __n128 result;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;
  struct {
    int v9;
    __int16 v10;
    char gap26_[2];
    int v11;
  } v9_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = a1[3];
  if (v2 != 0) {
    if (*(_QWORD*)(v2 + 8) == -1) {
      goto LABEL_8;
    }
    v3 = *(_QWORD*)GameData_212ef90[0];
    v7_.v7 = a1[2];
    v7_.v8 = v2;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v2 + 16), 1u,
                              memory_order_relaxed);
    game_hub_d96f00(v3, &v7_.v7),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v7_.v8 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v7_.v8),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v4 = a1[3];
    a1[2] = 0;
    a1[3] = 0;
    if (v4 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v4),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v9_.v11 = 1065353216;
    v9_.v9 = 0;
    v9_.v10 = 0;
    GameRoutine_cdeee0(*(_QWORD*)GameData_212dc60[0], (__int64)&v9_.v9),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v2 = a1[3];
    if (v2 != 0) {
    LABEL_8:
      result = std___1___shared_weak_count___release_weak_alt1(v2);
    }
  }
  v6 = a1[1];
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v6);
  }
  return result;
}

void game_hub_d97a00(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v8;
  __int64 v9;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;
  struct {
    float v12;
    __int16 v13;
    char gap26_[2];
    int v14;
  } v12_;

  v5 = *(_QWORD*)(a1 + 24);
  if (v5 != 0 && *(_QWORD*)(v5 + 8) != -1) {
    v8 = *(_QWORD*)GameData_212ef90[0];
    v10_.v10 = *(_QWORD*)(a1 + 16);
    v10_.v11 = v5;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    game_hub_d96f00(v8, &v10_.v10);
    if (v10_.v11 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v10_.v11);
    }
    v9 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v9);
    }
    v12_.v14 = 1065353216;
    v12_.v12 = a2;
    v12_.v13 = 0;
    GameRoutine_cdeee0(*(_QWORD*)GameData_212dc60[0], (__int64)&v12_.v12);
  }
}

void game_hub_dfa180(float32x4_t* result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  float32x4_t* v3;
  float32x4_t v4;
  float32x4_t* v5;
  float32x4_t* v6;
  int16x4_t v7;
  int16x4_t v8;
  float32x4_t v9;
  __int64 v10;
  float32x4_t* v11;
  float32x4_t* v12;
  float32x4_t v13;
  int16x4_t v14;
  int16x4_t v15;
  float32x4_t v16;
  __int64 v17;
  float32x4_t v18;
  float32x4_t* v19;
  float32x4_t* v20;
  int16x4_t v21;
  int16x4_t v22;
  float32x4_t v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  __int64 v32;
  float32x4_t v33;
  float32x4_t v34;

  v2 = *(_QWORD*)(LANES128(result[50]).n128_u64[0] + 8);
  v1 = *(_QWORD*)(LANES128(result[50]).n128_u64[0] + 16);
  if (v1 == v2) {
    return;
  }
  while (1) {
    v3 = *(float32x4_t**)(v2 + 8);
    if (LANES128(v3[17]).n128_u32[3] == 2) {
      break;
    }
    v2 += 32;
    if (v2 == v1) {
      return;
    }
  }
  v4 = v3[19];
  v5 = result + 60;
  v6 = result + 60;
  if ((LANES128(result[61]).n128_u8[0] & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v6 = (float32x4_t*)&GameData_21a6120;
    }
    else {
      v32 = (__int64)result;
      v31 = v4;
      v24 = __cxa_guard_acquire(&GameData_21a6130);
      v6 = (float32x4_t*)&GameData_21a6120;
      if (v24 != 0) {
        v25 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v25;
        __cxa_guard_release(&GameData_21a6130);
        v6 = (float32x4_t*)&GameData_21a6120;
      }
      v4 = v31;
      result = (float32x4_t*)v32;
    }
  }
  LANES64(v7).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(*v6, v4)))).n64_u64[0];
  if ((LANES64(v7).n64_u8[0] & 1) != 0 || (LANES64(v7).n64_u8[2] & 1) != 0 ||
      (LANES64(v7).n64_u8[4] & 1) != 0) {
    if (LANES128(result[61]).n128_u8[0] != 1) {
      result[60] = v4;
      LANES128(result[61]).n128_u8[0] = 1;
      goto LABEL_17;
    }
    LANES64(v8).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_f32(*v5, v4))).n64_u64[0];
    if ((LANES64(v8).n64_u8[0] & 1) == 0 || (LANES64(v8).n64_u8[2] & 1) == 0 ||
        (LANES64(v8).n64_u8[4] & 1) == 0) {
      LANES128(result[60]).n128_u64[0] = LANES128(v4).n128_u64[0];
      v9 = result[60];
      LANES128(v9).n128_u64[1] = LANES128(v4).n128_u32[2];
      result[60] = v9;
    LABEL_17:
      v10 = (__int64)result;
      GameRoutine_dfa900((__int64)result);
      result = (float32x4_t*)v10;
    }
  }
  v11 = result + 62;
  v12 = result + 62;
  v13 = vmulq_f32(v3[20], vdupq_n_s32(0x42652EE1u));
  if ((LANES128(result[63]).n128_u8[0] & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) != 0) {
      v12 = (float32x4_t*)&GameData_21a6120;
    }
    else {
      v26 = (__int64)result;
      v33 = v13;
      v27 = __cxa_guard_acquire(&GameData_21a6130);
      v12 = (float32x4_t*)&GameData_21a6120;
      if (v27 != 0) {
        v28 = *((_QWORD*)GameData_212c540 + 1);
        *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
        *((_QWORD*)&GameData_21a6120 + 1) = v28;
        __cxa_guard_release(&GameData_21a6130);
        v12 = (float32x4_t*)&GameData_21a6120;
      }
      v13 = v33;
      result = (float32x4_t*)v26;
    }
  }
  LANES64(v14).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(*v12, v13)))).n64_u64[0];
  if ((LANES64(v14).n64_u8[0] & 1) != 0 || (LANES64(v14).n64_u8[2] & 1) != 0 ||
      (LANES64(v14).n64_u8[4] & 1) != 0) {
    if (LANES128(result[63]).n128_u8[0] != 1) {
      result[62] = v13;
      LANES128(result[63]).n128_u8[0] = 1;
      goto LABEL_30;
    }
    LANES64(v15).n64_u64[0] =
        LANES64_OF(vmovn_s32(vceqq_f32(*v11, v13))).n64_u64[0];
    if ((LANES64(v15).n64_u8[0] & 1) == 0 ||
        (LANES64(v15).n64_u8[2] & 1) == 0 ||
        (LANES64(v15).n64_u8[4] & 1) == 0) {
      LANES128(result[62]).n128_u64[0] = LANES128(v13).n128_u64[0];
      v16 = result[62];
      LANES128(v16).n128_u64[1] = LANES128(v13).n128_u32[2];
      result[62] = v16;
    LABEL_30:
      v17 = (__int64)result;
      GameRoutine_dfa900((__int64)result);
      result = (float32x4_t*)v17;
    }
  }
  v18 = v3[22];
  v19 = result + 64;
  v20 = result + 64;
  if ((LANES128(result[65]).n128_u8[0] & 1) == 0) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                              memory_order_acquire) &
         1) != 0) {
      v20 = (float32x4_t*)&GameData_21a6140;
    }
    else {
      v29 = (__int64)result;
      v34 = v18;
      v20 = (float32x4_t*)&GameData_21a6140;
      if ((unsigned int)__cxa_guard_acquire(&GameData_21a6150) != 0) {
        v30 = *((_QWORD*)GameData_212c548 + 1);
        *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
        *((_QWORD*)&GameData_21a6140 + 1) = v30;
        __cxa_guard_release(&GameData_21a6150);
      }
      v18 = v34;
      result = (float32x4_t*)v29;
    }
  }
  LANES64(v21).n64_u64[0] =
      LANES64_OF(vmovn_s32(vmvnq_s8(vceqq_f32(*v20, v18)))).n64_u64[0];
  if ((LANES64(v21).n64_u8[0] & 1) != 0 || (LANES64(v21).n64_u8[2] & 1) != 0 ||
      (LANES64(v21).n64_u8[4] & 1) != 0) {
    if (LANES128(result[65]).n128_u8[0] == 1) {
      LANES64(v22).n64_u64[0] =
          LANES64_OF(vmovn_s32(vceqq_f32(*v19, v18))).n64_u64[0];
      if ((LANES64(v22).n64_u8[0] & 1) != 0 &&
          (LANES64(v22).n64_u8[2] & 1) != 0 &&
          (LANES64(v22).n64_u8[4] & 1) != 0) {
        return;
      }
      LANES128(result[64]).n128_u64[0] = LANES128(v18).n128_u64[0];
      v23 = result[64];
      LANES128(v23).n128_u64[1] = LANES128(v18).n128_u32[2];
      result[64] = v23;
    }
    else {
      result[64] = v18;
      LANES128(result[65]).n128_u8[0] = 1;
    }
    GameRoutine_dfa900((__int64)result);
  }
}

void game_hub_dfa520(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 i;
  _BYTE* v5;
  char v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  char v12;
  __int64 v13;
  char v14;
  unsigned __int64 v15;
  __int128 v16;
  float v17;
  _BOOL4 v18;
  float v19;
  __int64 v20;
  __int64 v21;
  __int64 j;
  __int64 v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  float v28;

  v2 = *(_QWORD*)(a1 + 800);
  if (v2 != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v2 + 24LL))(v2) & 1) != 0) {
    goto LABEL_10;
  }
  v3 = *(_QWORD*)(a1 + 824);
  for (i = *(_QWORD*)(a1 + 832); v3 != i; v3 += 24) {
    v5 = (*(_BYTE*)v3 & 1) != 0 ? *(_BYTE**)(v3 + 16) : (_BYTE*)(v3 + 1);
    if ((Config_bc7520(eft_g_effectSystem, v5) & 1) == 0) {
      goto LABEL_10;
    }
  }
  if ((*(_BYTE*)(a1 + 944) & 1) != 0) {
  LABEL_10:
    v6 = 0;
    v7 = 0;
    goto LABEL_12;
  }
  v6 = *(_BYTE*)(a1 + 945);
  v7 = *(_BYTE*)(a1 + 946);
LABEL_12:
  v8 = *(_QWORD*)(a1 + 800);
  v9 = *(_QWORD*)(v8 + 8);
  v10 = *(_QWORD*)(v8 + 16);
  if (v9 != v10) {
    v11 = v6 & 1;
    v12 = 0;
    do {
      v13 = *(_QWORD*)(v9 + 8);
      if (v11 == *(unsigned __int8*)(v13 + 288)) {
        v14 = 0;
      }
      else {
        *(_BYTE*)(v13 + 288) = v11;
        v14 = v6;
      }
      if ((v7 & 1) != *(_BYTE*)(v13 + 289)) {
        *(_BYTE*)(v13 + 289) = v7 & 1;
        v14 |= v7;
      }
      v9 += 32;
      v12 |= v14 & v6 & v7;
    } while (v9 != v10);
    if ((v12 & 1) != 0) {
      if (game_ProcFadeView_instance_ == 0) {
        goto LABEL_29;
      }
      v15 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v15 + 172) == *(float*)(v15 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v15 + 160) + 16LL))(v15 +
                                                                       160);
      }
      else {
        v16 = *(_OWORD*)(v15 + 208);
      }
      if (*((float*)&v16 + 3) == 0x1.0000000000000p+0f) {
        LODWORD(v17) = LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                    (_QWORD*)(*(_QWORD*)(v15 + 160) + 16LL))(
                                       v15 + 160, *((float*)&v16 + 3)))
                           .n128_u32[3];
        v18 = v17 == 0x1.0000000000000p+0f;
        v19 = v17 == 0x1.0000000000000p+0f ? 0x0.0p+0f : 0x1.99999a0000000p-3f;
      }
      else {
      LABEL_29:
        v18 = false;
        v19 = 0x1.99999a0000000p-3f;
      }
      v20 = *(_QWORD*)(a1 + 800);
      v21 = *(_QWORD*)(v20 + 8);
      for (j = *(_QWORD*)(v20 + 16); v21 != j; v21 += 32) {
        v23 = *(_QWORD*)(v21 + 16);
        if (v23 != 0) {
          v24 = *(_QWORD*)(v21 + 16);
          v25 = *(float*)(v23 + 72) * *(float*)(v23 + 44);
          v26 = 0x1.0000000000000p+0f - *(float*)(v23 + 60);
          *(_DWORD*)(v23 + 88) = 0;
          *(_QWORD*)(v23 + 80) = 0;
          ObjectTransparentModule_f3cec0(
              v24, v25 * 0x0.0p+0f,
              v26 * fminf(fmaxf(v25 * 0x0.0p+0f, 0x0.0p+0f),
                          0x1.0000000000000p+0f));
          *(_DWORD*)(v23 + 84) = 1065353216;
          *(float*)(v23 + 88) = v19;
          if (v18) {
            v27 = *(float*)(v23 + 72) * *(float*)(v23 + 44);
            v28 = 0x1.0000000000000p+0f - *(float*)(v23 + 60);
            *(_DWORD*)(v23 + 80) = 1065353216;
            ObjectTransparentModule_f3cec0(
                v23, v27,
                v28 * fminf(fmaxf(v27, 0x0.0p+0f), 0x1.0000000000000p+0f));
          }
        }
      }
    }
  }
}

void game_hub_dfa7a0(__int64 a1, float a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  __int128 v5;
  __int64 v6;
  __int64 v7;
  __int64 i;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;

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
    if (*((float*)&v5 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(
                        v4 + 160, *((float*)&v5 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      a2 = 0x0.0p+0f;
    }
  }
  v6 = *(_QWORD*)(a1 + 800);
  v7 = *(_QWORD*)(v6 + 8);
  for (i = *(_QWORD*)(v6 + 16); v7 != i; v7 += 32) {
    v9 = *(_QWORD*)(v7 + 16);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v7 + 16);
      v11 = *(float*)(v9 + 72) * *(float*)(v9 + 44);
      v12 = 0x1.0000000000000p+0f - *(float*)(v9 + 60);
      *(_DWORD*)(v9 + 88) = 0;
      *(_QWORD*)(v9 + 80) = 0;
      ObjectTransparentModule_f3cec0(
          v10, v11 * 0x0.0p+0f,
          v12 *
              fminf(fmaxf(v11 * 0x0.0p+0f, 0x0.0p+0f), 0x1.0000000000000p+0f));
      *(_DWORD*)(v9 + 84) = 1065353216;
      *(float*)(v9 + 88) = a2;
      if (a2 == 0x0.0p+0f) {
        v13 = *(float*)(v9 + 72) * *(float*)(v9 + 44);
        v14 = 0x1.0000000000000p+0f - *(float*)(v9 + 60);
        *(_DWORD*)(v9 + 80) = 1065353216;
        ObjectTransparentModule_f3cec0(
            v9, v13, v14 * fminf(fmaxf(v13, 0x0.0p+0f), 0x1.0000000000000p+0f));
      }
    }
  }
}

__int64 game_hub_dfb3f0(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __n128 v6;
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
  struct {
    __int64 v19;
    __int64 v20;
  } v19_;

  v2 = a1[91];
  if (v2 != 0 && *(_QWORD*)(v2 + 8) != -1) {
    v3 = 0;
    goto LABEL_7;
  }
  game_hub_d80c00((void*)(&v19_.v19), *(_QWORD**)(GameData_220b6e0 + 8));
  v2 = v19_.v20;
  a1[90] = v19_.v19;
  v4 = a1[91];
  a1[91] = v2;
  if (v4 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v4);
    v2 = a1[91];
  }
  v3 = 1;
  if (v2 != 0) {
  LABEL_7:
    v5 = std___1___shared_weak_count_lock(v2);
    if (v5 == 0) {
      goto LABEL_29;
    }
    v7 = a1[90];
    v8 = v5;
    if (v7 == 0) {
      goto LABEL_27;
    }
    v9 = a1[89];
    if (v9 != 0) {
      v10 = std___1___shared_weak_count_lock(v9);
      v11 = v10;
      if (v10 != 0) {
        v12 = a1[88];
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                    memory_order_relaxed);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                                    memory_order_relaxed);
          v13 = *(_QWORD*)(v7 + 24);
          *(_QWORD*)(v7 + 16) = v12;
          *(_QWORD*)(v7 + 24) = v11;
          if (v13 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v13);
          }
          v6 = std___1___shared_weak_count___release_weak_alt1(v11);
          *(_BYTE*)(v7 + 217) = 1;
          if ((*(_BYTE*)(v12 + 1764) & 1) == 0) {
            *(_BYTE*)(v12 + 1764) = 1;
            v14 = *(_QWORD*)(v12 + 1560);
            if (v14 != 0 && *(_QWORD*)(v14 + 8) != -1) {
              v15 = *(_QWORD*)(*GameData_212ebc0[0] + 8);
              v19_.v19 = *(_QWORD*)(v12 + 1552);
              v19_.v20 = v14;
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v14 + 16), 1u,
                                        memory_order_relaxed);
              GameRoutine_d80dc0(v15, &v19_.v19);
              if (v19_.v20 != 0) {
                v6 = std___1___shared_weak_count___release_weak_alt1(v19_.v20);
              }
              v16 = *(_QWORD*)(v12 + 1560);
              *(_QWORD*)(v12 + 1552) = 0;
              *(_QWORD*)(v12 + 1560) = 0;
              if (v16 != 0) {
                v6 = std___1___shared_weak_count___release_weak_alt1(v16);
              }
            }
          }
        LABEL_25:
          if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(
                v11, *(long double*)&v6);
            v6 = std___1___shared_weak_count___release_weak_alt1(v11);
          }
        LABEL_27:
          if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64, long double))(*(_QWORD*)v8 + 16LL))(
                v8, *(long double*)&v6);
            std___1___shared_weak_count___release_weak_alt1(v8);
          }
          goto LABEL_29;
        }
      }
    }
    else {
      v11 = 0;
    }
    v17 = *(_QWORD*)(v7 + 24);
    *(_QWORD*)(v7 + 16) = 0;
    *(_QWORD*)(v7 + 24) = 0;
    if (v17 != 0) {
      v6 = std___1___shared_weak_count___release_weak_alt1(v17);
    }
    *(_BYTE*)(v7 + 217) = 0;
    if (v11 == 0) {
      goto LABEL_27;
    }
    goto LABEL_25;
  }
LABEL_29:
  GameRoutine_dfa900((__int64)a1);
  return v3;
}

__int64 game_hub_dfb5e0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  atomic_uchar* v6;
  int* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64* v17;
  char v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v26;
  unsigned __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 result;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  _BYTE* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  char* v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  char* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64 v51[2];
    char* v52;
  } v51_;
  struct {
    __int64 v53;
    unsigned int v54;
    char gap36_[36];
    __int64 v55;
  } v53_;

  v1 = *(_QWORD*)(a1 + 800);
  v3 = *(_QWORD*)(v1 + 8);
  v4 = *(_QWORD*)(v1 + 16);
  if (v3 != v4) {
    v5 = (__int64*)GameData_212c7d8[0];
    v6 = (atomic_uchar*)GameData_212d4b8;
    v7 = GameData_212d4b0;
    do {
      ObjectTransparent_f38800(*v5, *(_QWORD*)(v3 + 8));
      v9 = *(_QWORD*)(v3 + 8);
      if ((atomic_load_explicit(v6, memory_order_acquire) & 1) == 0) {
        v53_.v55 = v9;
        v15 = __cxa_guard_acquire(v6);
        v9 = v53_.v55;
        if (v15 != 0) {
          *v7 = wld_Crc32_alt1(0, "ObjectTransparentModule", 0x17u);
          __cxa_guard_release(v6);
          v9 = v53_.v55;
        }
      }
      v11 = *(_QWORD*)(v9 + 504);
      v10 = *(_QWORD*)(v9 + 512);
      v12 = v10;
      v13 = v10;
      do {
        if (v13 == v11) {
          goto LABEL_3;
        }
        v14 = *(_DWORD*)(v13 - 16);
        v13 -= 16;
        v12 -= 16;
      } while (v14 != *v7);
      if (v10 == v12) {
      LABEL_3:
        v8 = 0;
        goto LABEL_4;
      }
      v8 = *(_QWORD*)(v12 + 8);
    LABEL_4:
      *(_QWORD*)(v3 + 16) = v8;
      v3 += 32;
    } while (v3 != v4);
  }
  *(_BYTE*)(a1 + 945) = 1;
  game_hub_dfa520(a1);
  v16 = *(_QWORD*)(a1 + 800);
  v18 = *(_BYTE*)(v16 + 32);
  v17 = (__int64*)(v16 + 32);
  if ((v18 & 1) != 0) {
    fw_text_String_CopyTerminated(v51_.v51,
                                  *(_QWORD*)(*(_QWORD*)(a1 + 800) + 48LL),
                                  *(_QWORD*)(*(_QWORD*)(a1 + 800) + 40LL));
  }
  else {
    v19 = *v17;
    v20 = v17[1];
    v21 = (char*)v17[2];
    v51_.v51[0] = v19;
    v51_.v51[1] = v20;
    v51_.v52 = v21;
  }
  if ((v51_.v51[0] & 1) != 0) {
    v22 = v51_.v52;
  }
  else {
    v22 = (char*)v51_.v51 + 1;
  }
  v23 = game_HashString_alt1((__int64)v22);
  if (v23 == 0) {
    goto LABEL_43;
  }
  v24 = *(_QWORD*)(*(_QWORD*)GameData_212ccc0[0] + 96LL);
  if (v24 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212ccc0[0] + 112LL) == 0) {
    goto LABEL_43;
  }
  v26 = v24 - 1;
  if ((v24 & (v24 - 1)) != 0) {
    v27 = v23;
    if (v23 >= v24) {
      v27 = v23 % v24;
    }
  }
  else {
    v27 = v26 & v23;
  }
  v28 = *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212ccc0[0] + 88LL) + 8 * v27);
  if (v28 == nullptr || (v29 = (_QWORD*)*v28) == nullptr) {
  LABEL_43:
    *(_QWORD*)(a1 + 816) = 0;
    goto LABEL_44;
  }
  if ((v24 & v26) == 0) {
    while (1) {
      v31 = v29[1];
      if (v31 == v23) {
        if (v29[2] == v23) {
          goto LABEL_77;
        }
      }
      else if ((v31 & v26) != v27) {
        goto LABEL_43;
      }
      v29 = (_QWORD*)*v29;
      if (v29 == nullptr) {
        goto LABEL_43;
      }
    }
  }
  while (1) {
    v30 = v29[1];
    if (v30 == v23) {
      break;
    }
    if (v30 >= v24) {
      v30 %= v24;
    }
    if (v30 != v27) {
      goto LABEL_43;
    }
  LABEL_33:
    v29 = (_QWORD*)*v29;
    if (v29 == nullptr) {
      goto LABEL_43;
    }
  }
  if (v29[2] != v23) {
    goto LABEL_33;
  }
LABEL_77:
  v47 = v29[3];
  *(_QWORD*)(a1 + 816) = v47;
  if (v47 != 0) {
    v48 = GameRoutine_989dc0(v47, 0);
    GameRoutine_dfba20((_QWORD*)a1, v48);
    v49 = GameRoutine_989dc0(*(_QWORD*)(a1 + 816), 1);
    GameRoutine_dfba20((_QWORD*)a1, v49);
    v50 = GameRoutine_989dc0(*(_QWORD*)(a1 + 816), 2);
    GameRoutine_dfba20((_QWORD*)a1, v50);
  }
LABEL_44:
  v32 = *(_QWORD*)(a1 + 800);
  if (v32 == 0 ||
      ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 24LL))(v32)) & 1) ==
          0) {
    v34 = *(_QWORD*)(a1 + 824);
    v35 = *(_QWORD*)(a1 + 832);
    if (v34 == v35) {
    LABEL_53:
      result = *(_QWORD*)(a1 + 736);
      if (result != 0 && (*(_BYTE*)(result + 16) & 1) == 0) {
        result = GameRoutine_e02a40(result);
      }
    }
    else {
      v36 = eft_g_effectSystem_ptr[0];
      while (1) {
        v37 =
            (*(_BYTE*)v34 & 1) != 0 ? *(_BYTE**)(v34 + 16) : (_BYTE*)(v34 + 1);
        result = Config_bc7520(*v36, v37);
        if ((result & 1) == 0) {
          break;
        }
        v34 += 24;
        if (v34 == v35) {
          goto LABEL_53;
        }
      }
    }
  }
  v38 = *(unsigned __int8*)(a1 + 392);
  if ((v38 & 1) != 0) {
    v39 = *(_QWORD*)(a1 + 400);
  }
  else {
    v39 = v38 >> 1;
  }
  if (v39 != 0) {
    game_hub_dfbc80((void*)((__int64)&v53_.v53), a1, a1 + 392,
                    (__int64*)(a1 + 416), 5u);
    v40 = *(_QWORD*)(a1 + 760);
    if (v40 >= *(_QWORD*)(a1 + 768)) {
      result =
          HubCharacterNatives_cb3e60((__int64*)(a1 + 752), (__int64)&v53_.v53);
    }
    else if (v53_.v54 != 0x2000 &&
             (v41 = (char*)as_g_context_slots_ptr,
              v42 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v53_.v54),
              (v43 = v42[1]) != 0) &&
             *v42 == v53_.v53) {
      *(_QWORD*)v40 = 0;
      *(_QWORD*)(v40 + 16) = 0;
      *(_DWORD*)(v40 + 8) = 0x2000;
      v44 = *(unsigned int*)(v43 + 8);
      if ((_DWORD)v44 != 0x2000) {
        v45 = &v41[16 * v44];
        if (*((_QWORD*)v45 + 1) == v43) {
          *(_DWORD*)(v40 + 8) = v44;
          *(_QWORD*)v40 = *(_QWORD*)v45;
        }
      }
      *(_QWORD*)(v40 + 16) = v43;
      result = v40 + 24;
    }
    else {
      *(_QWORD*)v40 = 0;
      *(_QWORD*)(v40 + 16) = 0;
      result = v40 + 24;
      *(_DWORD*)(v40 + 8) = 0x2000;
    }
    *(_QWORD*)(a1 + 760) = result;
  }
  if ((v51_.v51[0] & 1) != 0 && v51_.v52 != nullptr) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, (_QWORD)(v51_.v52));
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_dfbc80(PSEUDO_X8 x8_, __int64 a1,
                                                __int64 a2, __int64* a3,
                                                unsigned int a4)
{
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  const char* v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 (*v28)();
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  const char* v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  struct {
    __int64 v47;
    unsigned int v48;
    char gap28_[12];
    int v49;
  } v47_;
  struct {
    __int64 v50;
    __int64 v51;
    __int64 v52;
  } v50_;
  char v53;

  v6 = *(_QWORD*)(a1 + 72);
  v50_.v51 = 0;
  v50_.v52 = 0;
  v50_.v50 = 0;
  v47_.v47 = v6;
  v47_.v49 = 1;
  HandlePtr_cb3600_alt1(&v50_.v50, (__int64)&v47_.v47, (__int64)&v50_.v50, 1u);
  if (v47_.v49 != -1) {
    ((void (*)(char*, __int64*))GameData_1fe1bd0[v47_.v49])(&v53, &v47_.v47);
  }
  v10 = (__int64*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v11 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v11 = 0;
  }
  if (GameData_22127a8 != 0) {
    v12 = GameData_22127a8;
  }
  else {
    v12 = v11;
  }
  GameRoutine_d9bc80_alt1(v12, &v50_.v50, a3);
  v13 = *v10;
  v14 = GameData_22127a8;
  *(_QWORD*)a5 = 0;
  if (v13 != 0) {
    v15 = v13 + 248;
  }
  else {
    v15 = 0;
  }
  if (v14 != 0) {
    v16 = v14;
  }
  else {
    v16 = v15;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v17 = *(const char**)(a2 + 16);
  }
  else {
    v17 = (const char*)(a2 + 1);
  }
  strlen_alt1(v17);
  if (Manager_d9af70_alt1(v16)) {
    if (*v10 != 0) {
      v18 = *v10 + 248;
    }
    else {
      v18 = 0;
    }
    if (GameData_22127a8 != 0) {
      v19 = GameData_22127a8;
    }
    else {
      v19 = v18;
    }
    if ((*(_BYTE*)a2 & 1) != 0) {
      v20 = *(const char**)(a2 + 16);
    }
    else {
      v20 = (const char*)(a2 + 1);
    }
    v21 = strlen_alt1(v20);
    v22 = v19;
    v23 = (__int64)v20;
    v24 = a4;
    goto LABEL_53;
  }
  v26 = v50_.v50;
  v25 = v50_.v51;
  v27 = v50_.v50 + 32;
  if (v50_.v50 + 32 == v50_.v51) {
    goto LABEL_38;
  }
  do {
    v29 = *(unsigned int*)(v27 - 8);
    v30 = *(unsigned int*)(v27 + 24);
    if ((_DWORD)v29 == -1) {
      if ((_DWORD)v30 == -1) {
        goto LABEL_33;
      }
    LABEL_32:
      v28 = HandlePtr_Unknown21_cb39c0_ptr[v30];
      v47_.v47 = v27 - 32;
      ((void (*)(__int64*))v28)(&v47_.v47);
      goto LABEL_33;
    }
    if ((_DWORD)v30 != -1) {
      goto LABEL_32;
    }
    ((void (*)(__int64*, __int64))GameData_1fe1bd0[v29])(&v47_.v47, v27 - 32);
    *(_DWORD*)(v27 - 8) = -1;
  LABEL_33:
    v27 += 32;
  } while (v27 != v25);
  v25 = v50_.v51;
  v26 = v27 - 32;
LABEL_38:
  if (v26 != v25) {
    do {
      v31 = *(unsigned int*)(v25 - 8);
      v32 = v25 - 32;
      if ((_DWORD)v31 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fe1bd0[v31])(&v47_.v47,
                                                             v25 - 32);
      }
      *(_DWORD*)(v25 - 8) = -1;
      v25 -= 32;
    } while (v32 != v26);
  }
  v33 = *v10;
  v50_.v51 = v26;
  if (v33 != 0) {
    v34 = v33 + 248;
  }
  else {
    v34 = 0;
  }
  if (GameData_22127a8 != 0) {
    v35 = GameData_22127a8;
  }
  else {
    v35 = v34;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v36 = *(const char**)(a2 + 16);
  }
  else {
    v36 = (const char*)(a2 + 1);
  }
  v37 = strlen_alt1(v36);
  v24 = a4;
  v21 = v37;
  v22 = v35;
  v23 = (__int64)v36;
LABEL_53:
  Manager_d9b810((void*)((__int64)&v47_.v47), v22, v23, v21, (__int64)&v50_.v50,
                 v24);
  v38 = v47_.v47;
  v39 = v47_.v48;
  *(_QWORD*)a5 = v47_.v47;
  *(_DWORD*)(a5 + 8) = v39;
  if ((_DWORD)v39 == 0x2000 ||
      (v40 = (_QWORD*)((char*)as_g_context_slots_ptr + 16 * v39))[1] == 0) {
    v41 = 0;
  }
  else if (*v40 == v38) {
    v41 = v40[1];
  }
  else {
    v41 = 0;
  }
  *(_QWORD*)(a5 + 16) = v41;
  v42 = v50_.v50;
  if (v50_.v50 != 0) {
    v43 = v50_.v51;
    if (v50_.v50 == v50_.v51) {
      goto LABEL_66;
    }
    do {
      v44 = *(unsigned int*)(v43 - 8);
      v45 = v43 - 32;
      if ((_DWORD)v44 != -1) {
        ((void (*)(__int64*, __int64))GameData_1fe1bd0[v44])(&v47_.v47,
                                                             v43 - 32);
      }
      *(_DWORD*)(v43 - 8) = -1;
      v43 -= 32;
    } while (v45 != v42);
    v50_.v51 = v42;
    v42 = v50_.v50;
    if (v50_.v50 != 0) {
    LABEL_66:
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v42);
    }
  }
}

void game_hub_dfc000(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  atomic_uchar* v5;
  int* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  atomic_uchar* v12;
  __int64 v13;
  int* v14;
  int v15;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64* v20;
  __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;

  if ((*(_BYTE*)(a1 + 944) & 1) == 0) {
    v1 = *(_QWORD*)(a1 + 800);
    *(_BYTE*)(a1 + 944) = 1;
    v3 = *(_QWORD*)(v1 + 8);
    v4 = *(_QWORD*)(v1 + 16);
    if (v3 != v4) {
      v5 = (atomic_uchar*)GameData_212d498;
      v6 = GameData_212d490;
    LABEL_5:
      v7 = *(_QWORD*)(v3 + 8);
      if ((atomic_load_explicit(v5, memory_order_acquire) & 1) == 0) {
        v12 = v5;
        v24 = v3;
        v13 = v4;
        v14 = v6;
        v15 = __cxa_guard_acquire(v5);
        v3 = v24;
        v6 = v14;
        v4 = v13;
        v5 = v12;
        if (v15 != 0) {
          *v14 = wld_Crc32_alt1(0, "MapObjectModule", 0xFu);
          __cxa_guard_release(v12);
          v3 = v24;
          v6 = v14;
          v4 = v13;
          v5 = v12;
        }
      }
      v8 = *(_QWORD*)(v7 + 512);
      v9 = v8;
      do {
        if (v9 == *(_QWORD*)(v7 + 504)) {
        LABEL_4:
          v3 += 32;
          if (v3 == v4) {
            goto LABEL_14;
          }
          goto LABEL_5;
        }
        v10 = *(_DWORD*)(v9 - 16);
        v9 -= 16;
        v8 -= 16;
      } while (v10 != *v6);
      if (*(_QWORD*)(v7 + 512) == v8) {
        goto LABEL_4;
      }
      v11 = *(_QWORD*)(v8 + 8);
      if (v11 == 0) {
        goto LABEL_4;
      }
      *(_BYTE*)(v11 + 156) = 1;
      MapObjectModule_a7d120(v11);
    }
  LABEL_14:
    *(_BYTE*)(a1 + 945) = 0;
    game_hub_dfa520(a1);
    if (*(_BYTE*)(a1 + 848) != 0) {
      *(_BYTE*)(a1 + 848) = 0;
    }
    GameRoutine_df9ca0(a1);
    Object_df9f60((_QWORD*)a1);
    v17 = *(_QWORD*)(a1 + 752);
    v18 = *(_QWORD*)(a1 + 760);
    if (v17 != v18) {
      v19 = (char*)as_g_context_slots_ptr;
      v20 = as_g_script_manager_ptr;
      do {
        v21 = *(unsigned int*)(v17 + 8);
        if ((_DWORD)v21 != 0x2000) {
          v22 = &v19[16 * v21];
          v23 = *((_QWORD*)v22 + 1);
          if (v23 != 0 && *(_QWORD*)v22 == *(_QWORD*)v17 &&
              *(_DWORD*)(v23 + 52) == 1) {
            GameRoutine_62bec0(*v20, v17, 1u);
          }
        }
        v17 += 24;
      } while (v17 != v18);
      v17 = *(_QWORD*)(a1 + 752);
    }
    *(_QWORD*)(a1 + 760) = v17;
  }
}

__int64 game_hub_dfc1e0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  atomic_uchar* v4;
  int* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 result;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 800);
  v2 = *(_QWORD*)(v1 + 8);
  v3 = *(_QWORD*)(v1 + 16);
  if (v2 == v3) {
    return 0;
  }
  v4 = (atomic_uchar*)GameData_212d498;
  v5 = GameData_212d490;
LABEL_4:
  v6 = *(_QWORD*)(v2 + 8);
  if ((atomic_load_explicit(v4, memory_order_acquire) & 1) == 0) {
    v16 = v2;
    v14 = v6;
    v15 = v3;
    v13 = __cxa_guard_acquire(GameData_212d498);
    v6 = v14;
    v3 = v15;
    v5 = GameData_212d490;
    v2 = v16;
    v4 = (atomic_uchar*)GameData_212d498;
    if (v13 != 0) {
      *GameData_212d490 = wld_Crc32_alt1(0, "MapObjectModule", 0xFu);
      __cxa_guard_release(GameData_212d498);
      v6 = v14;
      v3 = v15;
      v5 = GameData_212d490;
      v2 = v16;
      v4 = (atomic_uchar*)GameData_212d498;
    }
  }
  v8 = *(_QWORD*)(v6 + 504);
  v7 = *(_QWORD*)(v6 + 512);
  v9 = v7;
  v10 = v7;
  do {
    if (v10 == v8) {
    LABEL_3:
      v2 += 32;
      if (v2 == v3) {
        return 0;
      }
      goto LABEL_4;
    }
    v11 = *(_DWORD*)(v10 - 16);
    v10 -= 16;
    v9 -= 16;
  } while (v11 != *v5);
  if (v7 == v9) {
    goto LABEL_3;
  }
  result = *(_QWORD*)(v9 + 8);
  if (result == 0) {
    goto LABEL_3;
  }
  return result;
}

void game_hub_dfc300(__int64 a1, int a2, float a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7)
{
  float v8;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  int* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  float32x4_t v28;
  float v29;
  int8x16_t v30;
  float32x2_t v31;
  _BYTE* v32;
  float v33;
  __int64 v34;
  int v35;
  __int64 v36;
  const char* v37;
  char* v38;
  _QWORD* v39;
  __int64 v40;
  unsigned __int64 v41;
  bool v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  atomic_ullong* v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  __n128 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _QWORD* v57;
  __int64 v58;
  float v59;
  _QWORD* v60;
  _QWORD* v61;
  unsigned __int64 v62[12];
  int v63;
  char v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  _QWORD v68[6];
  char v69;
  __int64 v70;
  _QWORD v71[3];
  char v72;
  _BYTE v73[607];
  __int64 v74;
  __int64 v75[2];
  __int64 v76;

  v8 = 0.5;
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 800) + 8LL);
  v11 = *(_QWORD*)(*(_QWORD*)(a1 + 800) + 16LL);
  if (v11 != v12) {
    while (1) {
      v13 = *(_QWORD*)(v12 + 8);
      if (*(_DWORD*)(v13 + 284) == 2) {
        break;
      }
      v12 += 32;
      if (v12 == v11) {
        goto LABEL_4;
      }
    }
    v22 = GameData_212df10;
    LOBYTE(v22) = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                       memory_order_acquire);
    v23 = GameData_212df08;
    if (((unsigned __int8)v22 & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_212df10) != 0) {
      *v23 = wld_Crc32(0, "ModelModule", 11);
      __cxa_guard_release_alt1(GameData_212df10, v59);
    }
    v24 = *(_QWORD*)(v13 + 512);
    v25 = v24;
    while (v25 != *(_QWORD*)(v13 + 504)) {
      v26 = *(_DWORD*)(v25 - 16);
      v25 -= 16;
      v24 -= 16;
      if (v26 == *v23) {
        if (*(_QWORD*)(v13 + 512) == v24) {
          break;
        }
        v27 = *(_QWORD*)(v24 + 8);
        if (v27 == 0) {
          break;
        }
        v28 = vsubq_f32(*(float32x4_t*)(*(_QWORD*)(v27 + 24) + 64LL),
                        *(float32x4_t*)(*(_QWORD*)(v27 + 24) + 48LL));
        v29 = LANES128(v28).n128_f32[1];
        LANES128(v28).n128_u32[1] = 0;
        v30 = vmulq_f32(v28, v28);
        LANES64(v31).n64_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                .n64_u64[0];
        if (v29 < 0.0) {
          v29 = 0.0;
        }
        v8 = 0.5 * LANES64_OF(vsqrt_f32(vpadd_f32(v31, v31))).n64_f32[0];
        v14 = v29 + 0x1.99999a0000000p-3;
        goto LABEL_5;
      }
    }
  }
LABEL_4:
  v14 = 0x1.3333340000000p+0;
LABEL_5:
  v69 = 0;
  __builtin_memset(v68, 0, sizeof(v68));
  v73[455] = 0;
  v73[463] = 0;
  v73[527] = 0;
  v73[535] = 0;
  v73[599] = 0;
  memset(&v70, 0, 449, a5, a6, a7);
  memset(&v74, 0, 296, v15, v16, v17);
  v18 = (__int64*)(a1 + 104);
  if (v71 == (_QWORD*)(a1 + 104)) {
    goto LABEL_18;
  }
  if ((*(_BYTE*)v18 & 1) == 0) {
    v19 = *v18;
    v20 = *(_QWORD*)(a1 + 112);
    v21 = *(_QWORD*)(a1 + 120);
    v71[0] = v19;
    v71[1] = v20;
    v71[2] = v21;
  LABEL_18:
    v72 = 0;
    v32 = v73;
    goto LABEL_19;
  }
  GameRoutine_64df20_alt2(v71, *(_QWORD*)(a1 + 120), *(_QWORD*)(a1 + 112));
  if ((v72 & 1) == 0) {
    goto LABEL_18;
  }
  v32 = *(_BYTE**)&v73[15];
  *(_QWORD*)&v73[7] = 0;
LABEL_19:
  *v32 = 0;
  v33 = 2.0;
  *(_DWORD*)&v73[23] = a2;
  v34 = *(_QWORD*)(a1 + 176);
  v35 = *(_DWORD*)(a1 + 184);
  *(_DWORD*)&v73[51] = 0;
  if (v14 >= 2.0) {
    v33 = v14;
  }
  *(_QWORD*)&v73[27] = v34;
  *(_DWORD*)&v73[35] = v35;
  *(float*)&v73[47] = v33;
  *(float*)&v73[43] = a3 + v8;
  v36 = GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v37 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v37 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
  }
  std___1_to_string_1a0abd0((void*)(&v65), *(_QWORD*)(a1 + 72));
  if ((v65 & 1) != 0) {
    v38 = v67;
  }
  else {
    v38 = (char*)&v65 + 1;
  }
  sprintf(v75, "%s::%s", "Object", v38);
  sprintf(v62, "%s=%s", v37, (const char*)v75);
  GameRoutine_60a020_alt2(v68, v62);
  v39 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if ((v65 & 1) != 0 && v67 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v67);
  }
  v41 = *(unsigned __int8*)(*(_QWORD*)v36 + 64LL);
  v42 = (v41 & 1) == 0;
  v43 = v41 >> 1;
  if (v42) {
    v44 = *(_QWORD*)v36 + 65LL;
  }
  else {
    v44 = *(_QWORD*)(*(_QWORD*)v36 + 80LL);
  }
  if (v42) {
    v45 = v43;
  }
  else {
    v45 = *(_QWORD*)(*(_QWORD*)v36 + 72LL);
  }
  GameRoutine_e149a0(v68, v44, v45);
  game_hub_d6a700(v62, (__int64)v68);
  LODWORD(v62[0]) = 0;
  *((float*)v62 + 1) = v14;
  *(_OWORD*)v62 = v62[0];
  if (a2 == 3) {
    v63 = 1130102784;
    v64 = 1;
  }
  if ((*(_BYTE*)(*(_QWORD*)v36 + 88LL) & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v75, *(_QWORD*)(*(_QWORD*)v36 + 104LL),
                                       *(_QWORD*)(*(_QWORD*)v36 + 96LL));
  }
  else {
    v46 = *(_QWORD*)(*(_QWORD*)v36 + 96LL);
    v47 = *(_QWORD*)(*(_QWORD*)v36 + 104LL);
    v75[0] = *(_QWORD*)(*(_QWORD*)v36 + 88LL);
    v75[1] = v46;
    v76 = v47;
  }
  v48 = (_QWORD*)fw_memory_HeapManager_Allocate(*v39, 1808, 16, 0);
  v48[1] = 0;
  v49 = (atomic_ullong*)(v48 + 1);
  v48[2] = 0;
  v50 = v48 + 4;
  v51 = v48;
  *v48 = GameData_212ebb8[0] + 2;
  GameRoutine_d58680((__int64)(v48 + 4), v62, v75);
  v60 = v50;
  v61 = v51;
  v52 = *(_QWORD*)GameData_212dc68;
  atomic_fetch_add_explicit(v49, 1u, memory_order_relaxed);
  EventManager_cbbcc0((void*)(&v65), v52, 1, &v60);
  v54 = v65;
  v55 = v66;
  if (v66 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v66 + 16), 1u,
                              memory_order_relaxed);
  }
  v56 = *(_QWORD*)(a1 + 712);
  *(_QWORD*)(a1 + 704) = v54;
  *(_QWORD*)(a1 + 712) = v55;
  if (v56 != 0) {
    v53 = std___1___shared_weak_count___release_weak_alt1(v56);
  }
  if (v55 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v55 + 16LL))(
        v55, *(long double*)&v53);
    v53 = std___1___shared_weak_count___release_weak_alt1(v55);
  }
  v57 = v61;
  if (v61 != nullptr && atomic_fetch_add((atomic_ullong* volatile)(v61 + 1),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(_QWORD*, long double))(*v57 + 16LL))(v57, *(long double*)&v53);
    v53 = std___1___shared_weak_count___release_weak_alt1(v57);
  }
  if (atomic_fetch_add(v49, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v75[0] & 1) == 0) {
      goto LABEL_61;
    }
  }
  else {
    (*(void (**)(_QWORD*, long double))(*v51 + 16LL))(v51, *(long double*)&v53);
    std___1___shared_weak_count___release_weak_alt1(v51);
    if ((v75[0] & 1) == 0) {
      goto LABEL_61;
    }
  }
  if (v76 != 0) {
    v58 = 128;
    if (*(_QWORD*)(*v39 + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v39 + v58, v76);
  }
LABEL_61:
  GameRoutine_d6aa20((__int64)v62);
  GameRoutine_cacc00_alt1(v68);
  GameRoutine_dfa900(a1);
}

void game_hub_dff780(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
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
  __int64 v17;
  __int64 v18;
  __int64* v19;
  unsigned __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  unsigned __int64 v27;
  bool v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  char v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  bool v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  const char* v46;
  __int64 v47;
  char* v48;
  unsigned __int64 v49;
  bool v50;
  unsigned __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  char* v54;
  _QWORD* v55;
  _QWORD* v56;
  _QWORD* v57;
  atomic_ullong* v58;
  _QWORD* v59;
  unsigned __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  char* v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  long double v74;
  char* i;
  __int64 v76;
  __int64* v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64* v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  atomic_ullong* v88;
  __int64 v89;
  __int64 v90;
  struct {
    _QWORD v91[6];
    char v92;
    char gap121_[7];
    __int64 v93;
    __int64 v94;
    __int64 v95;
    __int64 v96;
    __int64 v97;
    __int64 v98;
    __int64 v99;
  } v91_;
  struct {
    _QWORD v100[11];
    int v101;
    char gap276_[4];
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
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    char v129;
    char gap497_[63];
    char v130;
    char gap561_[7];
    char v131;
    char gap569_[63];
    char v132;
    char gap633_[7];
    char v133;
    char gap641_[63];
    char v134;
    char gap705_[7];
    __int64 v135;
    __int64 v136;
    __int64 v137;
  } v100_;
  struct {
    __int64 v138;
    __int64 v139;
    __int64 v140;
  } v138_;
  char v141[256];
  struct {
    __int64 v142;
    __int64 v143;
    __int64 v144;
  } v142_;

  v1 = a1[8];
  v2 = a1[9];
  if (v1 == v2) {
    v5 = nullptr;
    v4 = nullptr;
  }
  else {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    do {
      v7 = *(_QWORD*)(*(_QWORD*)v1 + 72LL);
      if ((unsigned __int64)v5 < v6) {
        *(_QWORD*)v5 = v7;
        v5 += 8;
      }
      else {
        v8 = (char*)(v5 - v4);
        v9 = (v5 - v4) >> 3;
        v10 = v9 + 1;
        if ((unsigned __int64)(v9 + 1) >> 61 != 0) {
          GameRoutine_65c760();
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
          LABEL_126:
            GameRoutine_60a210_alt1();
          }
          v12 = fw_memory_HeapManager_Allocate_alt1(
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
        memcpy(v14, v4, v13);
        if (v4 != nullptr) {
          v15 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v15 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v15, (_QWORD)(v4));
        }
        v4 = (char*)v14;
      }
      v1 += 16;
    } while (v1 != v2);
  }
  v16 = a1[1];
  v17 = *(_QWORD*)(v16 + 8);
  v18 = *(_QWORD*)(v16 + 16);
  if (v17 != v18) {
    v19 = (__int64*)fw_memory_g_heap_manager_ptr;
    v90 = *(_QWORD*)(v16 + 16);
    while (1) {
      v21 = (__int64*)(v17 + 120);
      v20 = *(unsigned __int8*)(v17 + 120);
      if ((v20 & 1) != 0) {
        v22 = *(_QWORD*)(v17 + 128);
      }
      else {
        v22 = v20 >> 1;
      }
      if (v22 != 0) {
        v23 = (__int64*)(v17 + 64);
        v91_.v92 = 0;
        __builtin_memset(v91_.v91, 0, sizeof(v91_.v91));
        v100_.v130 = 0;
        v100_.v131 = 0;
        v100_.v132 = 0;
        v100_.v133 = 0;
        v100_.v134 = 0;
        v91_.v93 = 0;
        v91_.v94 = 0;
        v91_.v95 = 0;
        v91_.v96 = 0;
        v91_.v97 = 0;
        v91_.v98 = 0;
        v91_.v99 = 0;
        __builtin_memset(v100_.v100, 0, 60);
        v100_.v101 = 0;
        __builtin_memset(&v100_.v100[8], 0, 24);
        v100_.v102 = 0;
        v100_.v103 = 0;
        v100_.v104 = 0;
        v100_.v105 = 0;
        v100_.v106 = 0;
        v100_.v107 = 0;
        v100_.v108 = 0;
        v100_.v109 = 0;
        v100_.v110 = 0;
        v100_.v111 = 0;
        v100_.v112 = 0;
        v100_.v113 = 0;
        v100_.v114 = 0;
        v100_.v115 = 0;
        v100_.v116 = 0;
        v100_.v117 = 0;
        v100_.v118 = 0;
        v100_.v119 = 0;
        v100_.v120 = 0;
        v100_.v121 = 0;
        v100_.v122 = 0;
        v100_.v123 = 0;
        v100_.v124 = 0;
        v100_.v125 = 0;
        v100_.v126 = 0;
        v100_.v127 = 0;
        v100_.v128 = 0;
        v100_.v129 = 0;
        v138_.v139 = 0;
        v138_.v140 = 0;
        v100_.v137 = 0;
        v138_.v138 = 0;
        v100_.v135 = 0;
        v100_.v136 = 0;
        if (v100_.v100 != (_QWORD*)(v17 + 64)) {
          if ((*(_BYTE*)v23 & 1) != 0) {
            GameRoutine_64df20(v100_.v100, *(_QWORD*)(v17 + 80),
                               *(_QWORD*)(v17 + 72));
          }
          else {
            v24 = *v23;
            v25 = *(_QWORD*)(v17 + 80);
            v100_.v100[1] = *(_QWORD*)(v17 + 72);
            v100_.v100[2] = v25;
            v100_.v100[0] = v24;
          }
        }
        v26 = *(unsigned __int8*)(v17 + 88);
        v142_.v144 = 0;
        v142_.v143 = 0;
        v142_.v142 = 0;
        v100_.v101 = v26;
        v27 = *(unsigned __int8*)(v17 + 96);
        v28 = (v27 & 1) == 0;
        v29 = v27 >> 1;
        if (v28) {
          v30 = v17 + 97;
        }
        else {
          v30 = *(_QWORD*)(v17 + 112);
        }
        if (v28) {
          v31 = v29;
        }
        else {
          v31 = *(_QWORD*)(v17 + 104);
        }
        RuntimeBuffer_8924a0((__int64)&v142_.v142, v30, v31, 0x2Cu);
        v32 = v100_.v102;
        if (v100_.v102 != 0) {
          v33 = v100_.v103;
          if (v100_.v102 == v100_.v103) {
            goto LABEL_51;
          }
          v34 = v100_.v103;
          do {
            v35 = *(_BYTE*)(v34 - 24);
            v34 -= 24;
            if ((v35 & 1) != 0 && *(_QWORD*)(v33 - 8) != 0) {
              v36 = 128;
              if (*(_QWORD*)(*v19 + 200) == 0) {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free(*v19 + v36,
                                            (_QWORD)(*(_QWORD*)(v33 - 8)));
            }
            v33 = v34;
          } while (v34 != v32);
          v18 = v90;
          v100_.v103 = v32;
          if (v100_.v102 != 0) {
          LABEL_51:
            v37 = 128;
            if (*(_QWORD*)(*v19 + 200) == 0) {
              v37 = 56;
            }
            nn_mem_StandardAllocator_Free(*v19 + v37, (_QWORD)(v100_.v102));
          }
        }
        v100_.v102 = v142_.v142;
        v100_.v103 = v142_.v143;
        v100_.v104 = v142_.v144;
        if (&v138_.v138 != v21) {
          v38 = *(unsigned __int8*)v21;
          if ((v138_.v138 & 1) != 0) {
            v41 = (v38 & 1) == 0;
            v42 = v38 >> 1;
            if (v41) {
              v43 = v17 + 121;
            }
            else {
              v43 = *(_QWORD*)(v17 + 136);
            }
            if (v41) {
              v44 = v42;
            }
            else {
              v44 = *(_QWORD*)(v17 + 128);
            }
            SpineModel_64dde0_alt1(&v138_.v138, v43, v44);
          }
          else if ((v38 & 1) != 0) {
            GameRoutine_64df20(&v138_.v138, *(_QWORD*)(v17 + 136),
                               *(_QWORD*)(v17 + 128));
          }
          else {
            v39 = *v21;
            v40 = *(_QWORD*)(v17 + 136);
            v138_.v139 = *(_QWORD*)(v17 + 128);
            v138_.v140 = v40;
            v138_.v138 = v39;
          }
        }
        v45 = GameData_212dbb8[0];
        if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
          v46 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
        }
        else {
          v46 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
        }
        if ((*(_BYTE*)(v17 + 120) & 1) != 0) {
          v47 = *(_QWORD*)(v17 + 136);
        }
        else {
          v47 = v17 + 121;
        }
        if ((GameData_21676c8 & 1) != 0) {
          v48 = (char*)GameData_21676d8;
        }
        else {
          v48 = GameData_21676c9;
        }
        sprintf(v141, "%s::%s", v48, v47);
        sprintf(&v142_.v142, "%s=%s", v46, v141);
        GameRoutine_60a020_alt1((__int64)v91_.v91, (__int64)&v142_.v142);
        v49 = *(unsigned __int8*)(*(_QWORD*)v45 + 64LL);
        v50 = (v49 & 1) == 0;
        v51 = v49 >> 1;
        if (v50) {
          v52 = *(_QWORD*)v45 + 65LL;
        }
        else {
          v52 = *(_QWORD*)(*(_QWORD*)v45 + 80LL);
        }
        if (v50) {
          v53 = v51;
        }
        else {
          v53 = *(_QWORD*)(*(_QWORD*)v45 + 72LL);
        }
        game_hub_e023c0((__int64)v91_.v91, v52, v53);
        if ((GameRoutine_e02840((__int64)v91_.v91) & 1) != 0) {
          v54 = v4;
          if (v4 != v5) {
            v54 = v4;
            while (*(_QWORD*)v54 != v91_.v93) {
              v54 += 8;
              if (v54 == v5) {
                goto LABEL_90;
              }
            }
          }
          if (v54 == v5) {
          LABEL_90:
            if ((GameRoutine_e02840((__int64)v91_.v91) & 1) != 0) {
              v55 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v19, 1088, 16,
                                                                 0);
              v56 = v55 + 4;
              v57 = v55;
              v55[2] = 0;
              *v55 = GameData_1fe2280;
              v55[1] = 0;
              v58 = (atomic_ullong*)(v55 + 1);
              GameRoutine_df8600((__int64)(v55 + 4), (__int64)v91_.v91,
                                 &v138_.v138);
              v59 = (_QWORD*)a1[9];
              v60 = a1[10];
              if ((unsigned __int64)v59 >= v60) {
                v63 = a1[8];
                v88 = v58;
                v89 = (__int64)v56;
                v64 = (char*)v59 - v63;
                v65 = ((__int64)v59 - v63) >> 4;
                v66 = v65 + 1;
                if ((unsigned __int64)(v65 + 1) >> 60 != 0) {
                  GameRoutine_e01f40();
                }
                v67 = v60 - v63;
                v87 = v65;
                if (v67 >> 3 > v66) {
                  v66 = v67 >> 3;
                }
                if ((unsigned __int64)v67 >= 0x7FFFFFFFFFFFFFF0LL) {
                  v68 = 0xFFFFFFFFFFFFFFFLL;
                }
                else {
                  v68 = v66;
                }
                if (v68 >> 60 != 0) {
                  goto LABEL_126;
                }
                v69 = fw_memory_HeapManager_Allocate_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v68, 16, 0);
                v70 = (__int64*)&v64[v69];
                *v70 = v89;
                v70[1] = (__int64)v57;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 1),
                                          1u, memory_order_relaxed);
                v85 = (__int64)&v64[v69 + 16];
                v86 = v69 + 16 * v68;
                v71 = (__int64)&v64[v69 + -16 * v87];
                memcpy(v71, v63, v64);
                v61 = (_QWORD*)v85;
                a1[8] = v71;
                a1[9] = v85;
                a1[10] = v86;
                if (v63 != 0) {
                  v72 = fw_memory_g_heap_manager_ptr;
                  v73 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v73 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v73,
                      (_QWORD)(v63));
                  v61 = (_QWORD*)v85;
                  v19 = (__int64*)v72;
                }
                else {
                  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
                }
                v62 = v89;
                v18 = v90;
                v58 = v88;
              }
              else {
                *v59 = v56;
                v59[1] = v57;
                v61 = v59 + 2;
                v62 = (__int64)v56;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 1),
                                          1u, memory_order_relaxed);
                v18 = v90;
              }
              a1[9] = v61;
              *(__n128*)&v74 = GameRoutine_df9600(v62);
              if (atomic_fetch_add(v58, 0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(_QWORD*, long double))(*v57 + 16LL))(v57, v74);
                std___1___shared_weak_count___release_weak_alt1(v57);
              }
            }
          }
          else {
            if (v5 != v54 + 8) {
              memmove(v54, v54 + 8, v5 - (v54 + 8));
            }
            v5 -= 8;
            v18 = v90;
          }
        }
        Object_df8cc0((__int64)v91_.v91);
      }
      v17 += 144;
      if (v17 == v18) {
        goto LABEL_109;
      }
    }
  }
  v19 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_109:
  if (v4 != v5) {
    for (i = v4; i != v5; i += 8) {
      v76 = *(_QWORD*)i;
      v77 = (__int64*)a1[5];
      v78 = (__int64*)a1[6];
      if (v77 == v78) {
      LABEL_116:
        v81 = (__int64*)a1[8];
        v82 = (__int64*)a1[9];
        if (v81 == v82) {
          continue;
        }
        while (1) {
          v83 = *v81;
          v81 += 2;
          v79 = v83;
          if (*(_QWORD*)(v83 + 72) == v76) {
            break;
          }
          if (v81 == v82) {
            goto LABEL_112;
          }
        }
      }
      else {
        while (1) {
          v80 = *v77;
          v77 += 2;
          v79 = v80;
          if (*(_QWORD*)(v80 + 72) == v76) {
            break;
          }
          if (v77 == v78) {
            goto LABEL_116;
          }
        }
      }
      game_hub_dfc000(v79);
    LABEL_112:;
    }
  }
  if (v4 != nullptr) {
    v84 = 128;
    if (*(_QWORD*)(*v19 + 200) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free(*v19 + v84, (_QWORD)(v4));
  }
}

__attribute__((swiftcall)) void game_hub_e009e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                unsigned __int64* a2)
{

#pragma clang fp contract(off)
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64 v24;
  char* v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  __int64 v38;
  char* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64* v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  char* v48;
  unsigned __int64 v49;
  __int64 v50;
  const char* v51;
  char* v52;
  char* v53;
  unsigned __int64 v54;
  bool v55;
  unsigned __int64 v56;
  __int64 v57;
  unsigned __int64 v58;
  __int64* v59;
  _QWORD* v60;
  __int64 v61;
  _QWORD* v62;
  __int64* v63;
  unsigned __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  __int64 v68;
  unsigned __int64 v69;
  __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  __int64* v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  long double v77;
  __int64 v78;
  __int64 result;
  __int64 v80;
  struct {
    __int64 v81;
    unsigned __int64 v82;
    char* v83;
  } v81_;
  struct {
    _QWORD v84[6];
    char v85;
    char gap81_[7];
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
  } v84_;
  struct {
    _QWORD v93[7];
    int v94;
    char gap204_[4];
    __int64 v95;
    __int64 v96;
    __int64 v97;
    int v98;
    char gap236_[4];
    __int64 v99;
    __int64* v100;
    unsigned __int64 v101;
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
    __int64 v116;
    __int64 v117;
    __int64 v118;
    __int64 v119;
    __int64 v120;
    __int64 v121;
    __int64 v122;
    __int64 v123;
    __int64 v124;
    __int64 v125;
    char v126;
    char gap457_[63];
    char v127;
    char gap521_[7];
    char v128;
    char gap529_[63];
    char v129;
    char gap593_[7];
    char v130;
    char gap601_[63];
    char v131;
    char gap665_[7];
    __int64 v132;
    __int64 v133;
    __int64 v134;
  } v93_;
  struct {
    __int64 v135;
    unsigned __int64 v136;
    __int64 v137;
  } v135_;
  struct {
    __int64 v138;
    unsigned __int64 v139;
    char* v140;
  } v138_;
  char v141[256];
  struct {
    __int64 v142;
    __int64 v143;
    char* v144;
  } v142_;

  std___1_to_string_1a0abd0((void*)(&v138_.v138), a2[1]);
  v84_.v85 = 0;
  __builtin_memset(v84_.v84, 0, sizeof(v84_.v84));
  v93_.v127 = 0;
  v93_.v128 = 0;
  v93_.v129 = 0;
  v93_.v130 = 0;
  v93_.v131 = 0;
  v84_.v86 = 0;
  v84_.v87 = 0;
  v84_.v88 = 0;
  v84_.v89 = 0;
  v84_.v90 = 0;
  v84_.v91 = 0;
  v84_.v92 = 0;
  __builtin_memset(v93_.v93, 0, sizeof(v93_.v93));
  v93_.v94 = 0;
  v93_.v98 = 0;
  v93_.v96 = 0;
  v93_.v97 = 0;
  v93_.v95 = 0;
  v93_.v99 = 0;
  v93_.v100 = nullptr;
  v93_.v101 = 0;
  v93_.v102 = 0;
  v93_.v103 = 0;
  v93_.v104 = 0;
  v93_.v105 = 0;
  v93_.v106 = 0;
  v93_.v107 = 0;
  v93_.v108 = 0;
  v93_.v109 = 0;
  v93_.v110 = 0;
  v93_.v111 = 0;
  v93_.v112 = 0;
  v93_.v113 = 0;
  v93_.v114 = 0;
  v93_.v115 = 0;
  v93_.v116 = 0;
  v93_.v117 = 0;
  v93_.v118 = 0;
  v93_.v119 = 0;
  v93_.v120 = 0;
  v93_.v121 = 0;
  v93_.v122 = 0;
  v93_.v123 = 0;
  v93_.v124 = 0;
  v93_.v125 = 0;
  v93_.v126 = 0;
  v135_.v137 = 0;
  v135_.v136 = 0;
  v135_.v135 = 0;
  v93_.v134 = 0;
  v93_.v133 = 0;
  v93_.v132 = 0;
  GameRoutine_60a020_alt1((__int64)v93_.v93,
                          (__int64)"Obj_Obj_Gmc_Hub_DropItem_Eff_A000");
  v93_.v98 = 7;
  v6 = *a2;
  if (*a2 == 0) {
    goto LABEL_51;
  }
  v7 = *GameData_212c878[0];
  v8 = *(_QWORD*)(*GameData_212c878[0] + 96);
  if (v8 == 0 || *(_QWORD*)(v7 + 112) == 0) {
    goto LABEL_51;
  }
  v9 = v8 - 1;
  if ((v8 & (v8 - 1)) != 0) {
    v10 = *a2;
    if (v6 >= v8) {
      v10 = v6 % v8;
    }
  }
  else {
    v10 = v9 & v6;
  }
  v11 = *(_QWORD**)(*(_QWORD*)(v7 + 88) + 8 * v10);
  if (v11 == nullptr) {
    goto LABEL_51;
  }
  v12 = (_QWORD*)*v11;
  if (v12 == nullptr) {
    goto LABEL_51;
  }
  if ((v8 & v9) == 0) {
    while (1) {
      v14 = v12[1];
      if (v14 == v6) {
        if (v12[2] == v6) {
          goto LABEL_24;
        }
      }
      else if ((v14 & v9) != v10) {
        goto LABEL_51;
      }
      v12 = (_QWORD*)*v12;
      if (v12 == nullptr) {
        goto LABEL_51;
      }
    }
  }
  while (1) {
    v13 = v12[1];
    if (v13 == v6) {
      break;
    }
    if (v13 >= v8) {
      v13 %= v8;
    }
    if (v13 != v10) {
      goto LABEL_51;
    }
  LABEL_13:
    v12 = (_QWORD*)*v12;
    if (v12 == nullptr) {
      goto LABEL_51;
    }
  }
  if (v12[2] != v6) {
    goto LABEL_13;
  }
LABEL_24:
  v15 = v12[3];
  if (v15 == 0) {
    goto LABEL_51;
  }
  v16 = *(_QWORD*)(v15 + 8);
  v17 = strlen(v16);
  if (v17 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v18 = v17;
  if (v17 >= 0x17) {
    if ((v17 | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (v17 | 7) + 1;
    }
    v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v20, 16, 0);
    v142_.v144 = v19;
    v142_.v143 = v18;
    v142_.v142 = v20 | 1;
    goto LABEL_33;
  }
  LOBYTE(v142_.v142) = 2 * v17;
  v19 = (char*)&v142_.v142 + 1;
  if (v17 != 0) {
  LABEL_33:
    memmove(v19, v16, v18);
  }
  v21 = v93_.v100;
  v22 = v93_.v101;
  v19[v18] = 0;
  if ((unsigned __int64)v21 < v22) {
    v23 = v21 + 3;
    *v21 = v142_.v142;
    v21[1] = v142_.v143;
    v21[2] = (__int64)v142_.v144;
    goto LABEL_50;
  }
  v24 = v93_.v99;
  v25 = (char*)v21 - v93_.v99;
  v26 = 1 - 0x5555555555555555LL * (((__int64)v21 - v93_.v99) >> 3);
  if (v26 <= 0xAAAAAAAAAAAAAAALL) {
    v27 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v22 - v93_.v99) >> 3);
    if (2 * v27 > v26) {
      v26 = 2 * v27;
    }
    if (v27 >= 0x555555555555555LL) {
      v28 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v28 = v26;
    }
    if (v28 != 0) {
      if (v28 <= 0xAAAAAAAAAAAAAAALL) {
        v29 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v28, 16, 0);
        goto LABEL_46;
      }
    LABEL_130:
      GameRoutine_60a210_alt1();
    }
    v29 = 0;
  LABEL_46:
    v30 = v142_.v143;
    v31 = (__int64*)&v25[v29];
    v32 = v29 + 24 * v28;
    v23 = (__int64*)&v25[v29 + 24];
    *v31 = v142_.v142;
    v31[1] = v30;
    v31[2] = (__int64)v142_.v144;
    memcpy(v29, v24, v25);
    v93_.v99 = v29;
    v93_.v100 = v23;
    v93_.v101 = v32;
    if (v24 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v33, (_QWORD)(v24));
    }
  LABEL_50:
    v93_.v100 = v23;
  LABEL_51:
    v34 = v93_.v100;
    if ((unsigned __int64)v93_.v100 < v93_.v101) {
      if ((v138_.v138 & 1) != 0) {
        fw_text_String_CopyTerminated(v93_.v100, (__int64)v138_.v140,
                                      v138_.v139);
        v37 = v34 + 3;
      }
      else {
        v35 = v138_.v138;
        v36 = (__int64)v138_.v140;
        v37 = v93_.v100 + 3;
        v93_.v100[1] = v138_.v139;
        v34[2] = v36;
        *v34 = v35;
      }
      goto LABEL_72;
    }
    v38 = v93_.v99;
    v39 = (char*)v93_.v100 - v93_.v99;
    v40 = 1 - 0x5555555555555555LL * (((__int64)v93_.v100 - v93_.v99) >> 3);
    if (v40 <= 0xAAAAAAAAAAAAAAALL) {
      if (0x5555555555555556LL * ((__int64)(v93_.v101 - v93_.v99) >> 3) > v40) {
        v40 = 0x5555555555555556LL * ((__int64)(v93_.v101 - v93_.v99) >> 3);
      }
      if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v93_.v101 - v93_.v99) >> 3) >=
          0x555555555555555LL) {
        v41 = 0xAAAAAAAAAAAAAAALL;
      }
      else {
        v41 = v40;
      }
      if (v41 != 0) {
        if (v41 > 0xAAAAAAAAAAAAAAALL) {
          goto LABEL_130;
        }
        v42 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v41, 16, 0);
      }
      else {
        v42 = 0;
      }
      v43 = (__int64*)&v39[v42];
      v44 = v42 + 24 * v41;
      if ((v138_.v138 & 1) != 0) {
        fw_text_String_CopyTerminated((__int64*)&v39[v42], (__int64)v138_.v140,
                                      v138_.v139);
        v38 = v93_.v99;
        v39 = (char*)v93_.v100 - v93_.v99;
      }
      else {
        v45 = v138_.v139;
        *v43 = v138_.v138;
        v43[1] = v45;
        v43[2] = (__int64)v138_.v140;
      }
      v37 = v43 + 3;
      v46 = (char*)v43 - v39;
      memcpy(v46, v38, v39);
      v93_.v99 = v46;
      v93_.v100 = v37;
      v93_.v101 = v44;
      if (v38 != 0) {
        v47 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v47 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v47, (_QWORD)(v38));
      }
    LABEL_72:
      v93_.v100 = v37;
      if ((v138_.v138 & 1) != 0) {
        fw_text_String_CopyTerminated(&v81_.v81, (__int64)v138_.v140,
                                      v138_.v139);
      }
      else {
        v81_.v81 = v138_.v138;
        v81_.v82 = v138_.v139;
        v81_.v83 = v138_.v140;
      }
      if ((v135_.v135 & 1) != 0) {
        if ((v81_.v81 & 1) != 0) {
          v48 = v81_.v83;
        }
        else {
          v48 = (char*)&v81_.v81 + 1;
        }
        if ((v81_.v81 & 1) != 0) {
          v49 = v81_.v82;
        }
        else {
          v49 = (unsigned __int64)(unsigned __int8)v81_.v81 >> 1;
        }
        SpineModel_64dde0_alt1(&v135_.v135, (__int64)v48, v49);
      }
      else if ((v81_.v81 & 1) != 0) {
        GameRoutine_64df20(&v135_.v135, (__int64)v81_.v83, v81_.v82);
      }
      else {
        v135_.v135 = v81_.v81;
        v135_.v136 = v81_.v82;
        v135_.v137 = (__int64)v81_.v83;
      }
      v50 = GameData_212dbb8[0];
      if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
        v51 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
      }
      else {
        v51 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
      }
      if ((v81_.v81 & 1) != 0) {
        v52 = v81_.v83;
      }
      else {
        v52 = (char*)&v81_.v81 + 1;
      }
      if ((GameData_21676c8 & 1) != 0) {
        v53 = (char*)GameData_21676d8;
      }
      else {
        v53 = GameData_21676c9;
      }
      sprintf(v141, "%s::%s", v53, v52);
      sprintf(&v142_.v142, "%s=%s", v51, v141);
      GameRoutine_60a020_alt1((__int64)v84_.v84, (__int64)&v142_.v142);
      v54 = *(unsigned __int8*)(*(_QWORD*)v50 + 64LL);
      v55 = (v54 & 1) == 0;
      v56 = v54 >> 1;
      if (v55) {
        v57 = *(_QWORD*)v50 + 65LL;
      }
      else {
        v57 = *(_QWORD*)(*(_QWORD*)v50 + 80LL);
      }
      if (v55) {
        v58 = v56;
      }
      else {
        v58 = *(_QWORD*)(*(_QWORD*)v50 + 72LL);
      }
      game_hub_e023c0((__int64)v84_.v84, v57, v58);
      if ((GameRoutine_e02840((__int64)v84_.v84) & 1) != 0) {
        v59 = (__int64*)fw_memory_g_heap_manager_ptr;
        v60 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 1088, 16, 0);
        v61 = (__int64)(v60 + 4);
        v62 = v60;
        v60[1] = 0;
        v60[2] = 0;
        *v60 = GameData_1fe2280;
        GameRoutine_df8600((__int64)(v60 + 4), (__int64)v84_.v84, &v135_.v135);
        v63 = (__int64*)a1[9];
        v64 = a1[10];
        if ((unsigned __int64)v63 >= v64) {
          v66 = a1[8];
          v67 = (char*)v63 - v66;
          v68 = ((__int64)v63 - v66) >> 4;
          v69 = v68 + 1;
          if ((unsigned __int64)(v68 + 1) >> 60 != 0) {
            GameRoutine_e01f40();
          }
          v70 = v64 - v66;
          if (v70 >> 3 > v69) {
            v69 = v70 >> 3;
          }
          if ((unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF0LL) {
            v71 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v71 = v69;
          }
          if (v71 >> 60 != 0) {
            goto LABEL_130;
          }
          v72 = fw_memory_HeapManager_Allocate_alt1(*v59, 16 * v71, 16, 0);
          v73 = (__int64*)&v67[v72];
          v74 = v72 + 16 * v71;
          *v73 = v61;
          v73[1] = (__int64)v62;
          v75 = (__int64)&v67[v72 + -16 * v68];
          v65 = (__int64)&v67[v72 + 16];
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 1), 1u,
                                    memory_order_relaxed);
          memcpy(v75, v66, v67);
          a1[8] = v75;
          a1[9] = v65;
          a1[10] = v74;
          if (v66 != 0) {
            v76 = 128;
            if (*(_QWORD*)(*v59 + 200) == 0) {
              v76 = 56;
            }
            nn_mem_StandardAllocator_Free(*v59 + v76, (_QWORD)(v66));
          }
        }
        else {
          *v63 = v61;
          v63[1] = (__int64)v62;
          v65 = (__int64)(v63 + 2);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 1), 1u,
                                    memory_order_relaxed);
        }
        a1[9] = v65;
        *(__n128*)&v77 = GameRoutine_df9600(v61);
        *a3 = v61;
        a3[1] = (__int64)v62;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v62 + 2), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v62 + 1),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if ((v81_.v81 & 1) != 0) {
            goto LABEL_119;
          }
        }
        else {
          (*(void (**)(_QWORD*, long double))(*v62 + 16LL))(v62, v77);
          std___1___shared_weak_count___release_weak_alt1(v62);
          if ((v81_.v81 & 1) != 0) {
            goto LABEL_119;
          }
        }
      }
      else {
        *a3 = 0;
        a3[1] = 0;
        if ((v81_.v81 & 1) != 0) {
        LABEL_119:
          if (v81_.v83 != nullptr) {
            v78 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v78 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v78,
                (_QWORD)(v81_.v83));
          }
        }
      }
      result = Object_df8cc0((__int64)v84_.v84);
      if ((v138_.v138 & 1) != 0 && v138_.v140 != nullptr) {
        v80 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v80 = 56;
        }
        {
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v80, (_QWORD)(v138_.v140));
          return;
        }
      }
      {
        result;
        return;
      }
    }
  }
  GameRoutine_64aa00();
}

__attribute__((swiftcall)) void game_hub_e01240(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64 a2)
{

#pragma clang fp contract(off)
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  __int128 v4;
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  char* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  unsigned __int64 v28;
  __int64 v29;
  const char* v30;
  char* v31;
  char* v32;
  unsigned __int64 v33;
  bool v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  _DWORD* v57;
  __int64 v58;
  _DWORD* v59;
  __int128 v60;
  __int128 v61;
  __int64 v62;
  struct {
    __int64 v63;
    unsigned __int64 v64;
    char* v65;
  } v63_;
  struct {
    _QWORD v66[6];
    char v67;
    char gap73_[7];
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
    int v82;
  } v66_;
  struct {
    __int64 v83;
    __int64 v84;
    __int64 v85;
    int v86;
    char gap228_[4];
    __int64 v87;
    __int64* v88;
    unsigned __int64 v89;
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
    char v114;
    char gap449_[63];
    char v115;
    char gap513_[7];
    char v116;
    char gap521_[63];
    char v117;
    char gap585_[7];
    char v118;
    char gap593_[63];
    char v119;
    char gap657_[7];
    __int64 v120;
    __int64 v121;
    __int64 v122;
  } v83_;
  struct {
    __int64 v123;
    unsigned __int64 v124;
    __int64 v125;
  } v123_;
  char v126[256];
  struct {
    float v127[66];
    char gap1232_[8];
    __int64* v128;
  } v127_;

  v3 = (_QWORD*)(a2 + 32);
  v4 = *(_OWORD*)(a2 + 32);
  v66_.v67 = 0;
  __builtin_memset(v66_.v66, 0, sizeof(v66_.v66));
  v66_.v82 = DWORD2(v4);
  v83_.v115 = 0;
  v83_.v116 = 0;
  v83_.v117 = 0;
  v83_.v118 = 0;
  v83_.v119 = 0;
  v83_.v83 = 0;
  v83_.v84 = 0;
  v83_.v85 = 0;
  v83_.v86 = 0;
  v83_.v87 = 0;
  v83_.v88 = nullptr;
  v83_.v89 = 0;
  v83_.v90 = 0;
  v83_.v91 = 0;
  v83_.v92 = 0;
  v83_.v93 = 0;
  v83_.v94 = 0;
  v83_.v95 = 0;
  v83_.v96 = 0;
  v83_.v97 = 0;
  v83_.v98 = 0;
  v83_.v99 = 0;
  v83_.v100 = 0;
  v83_.v101 = 0;
  v83_.v102 = 0;
  v83_.v103 = 0;
  v83_.v104 = 0;
  v83_.v105 = 0;
  v83_.v106 = 0;
  v83_.v107 = 0;
  v83_.v108 = 0;
  v83_.v109 = 0;
  v83_.v110 = 0;
  v83_.v111 = 0;
  v83_.v112 = 0;
  v83_.v113 = 0;
  v83_.v114 = 0;
  v123_.v125 = 0;
  v123_.v124 = 0;
  v123_.v123 = 0;
  v83_.v122 = 0;
  v83_.v121 = 0;
  v83_.v120 = 0;
  v66_.v68 = 0;
  v66_.v69 = 0;
  v66_.v70 = 0;
  v66_.v71 = 0;
  v66_.v72 = 0;
  v66_.v73 = 0;
  v66_.v74 = 0;
  v66_.v75 = 0;
  v66_.v76 = 0;
  v66_.v77 = 0;
  v66_.v78 = 0;
  v66_.v79 = 0;
  v66_.v80 = 0;
  v66_.v81 = v4;
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
  v83_.v84 = 0;
  v127_.v127[0] = 0x0.0p+0f;
  CharacterTrailVertex_d35160_alt1(&v83_.v83, v127_.v127);
  v127_.v127[0] =
      (float)((float)(unsigned __int16)v12 / 0x1.fffe000000000p+15f) *
      0x1.6800000000000p+8f;
  CharacterTrailVertex_d35160_alt1(&v83_.v83, v127_.v127);
  v127_.v127[0] = 0x0.0p+0f;
  CharacterTrailVertex_d35160_alt1(&v83_.v83, v127_.v127);
  v13 = v83_.v88;
  v83_.v86 = 6;
  if ((unsigned __int64)v83_.v88 >= v83_.v89) {
    v17 = v83_.v87;
    v18 = (char*)v83_.v88 - v83_.v87;
    v19 = 1 - 0x5555555555555555LL * (((__int64)v83_.v88 - v83_.v87) >> 3);
    if (v19 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_64aa00();
    }
    if (0x5555555555555556LL * ((__int64)(v83_.v89 - v83_.v87) >> 3) > v19) {
      v19 = 0x5555555555555556LL * ((__int64)(v83_.v89 - v83_.v87) >> 3);
    }
    if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v83_.v89 - v83_.v87) >> 3) >=
        0x555555555555555LL) {
      v20 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v20 = v19;
    }
    if (v20 != 0) {
      if (v20 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_82;
      }
      v21 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v20, 16, 0);
    }
    else {
      v21 = 0;
    }
    v22 = &v18[v21];
    v23 = v21 + 24 * v20;
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)&v18[v21], *(_QWORD*)(a2 + 16),
                                    *(_QWORD*)(a2 + 8));
      v17 = v83_.v87;
      v18 = (char*)v83_.v88 - v83_.v87;
    }
    else {
      v24 = *(_QWORD*)(a2 + 8);
      *(_QWORD*)v22 = *(_QWORD*)a2;
      *((_QWORD*)v22 + 1) = v24;
      *((_QWORD*)v22 + 2) = *(_QWORD*)(a2 + 16);
    }
    v16 = (__int64*)(v22 + 24);
    v25 = v22 - v18;
    memcpy_alt1(v25, v17, (unsigned __int64)v18);
    v83_.v87 = v25;
    v83_.v88 = v16;
    v83_.v89 = v23;
    if (v17 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v17);
    }
  }
  else if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v83_.v88, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
    v16 = v13 + 3;
  }
  else {
    v14 = *(_QWORD*)a2;
    v15 = *(_QWORD*)(a2 + 16);
    v16 = v83_.v88 + 3;
    v83_.v88[1] = *(_QWORD*)(a2 + 8);
    v13[2] = v15;
    *v13 = v14;
  }
  v83_.v88 = v16;
  LocatorDispos_db1840((void*)(&v63_.v63));
  if ((v123_.v123 & 1) != 0) {
    if ((v63_.v63 & 1) != 0) {
      v27 = v63_.v65;
    }
    else {
      v27 = (char*)&v63_.v63 + 1;
    }
    if ((v63_.v63 & 1) != 0) {
      v28 = v63_.v64;
    }
    else {
      v28 = (unsigned __int64)(unsigned __int8)v63_.v63 >> 1;
    }
    SpineModel_64dde0_alt1(&v123_.v123, (__int64)v27, v28);
  }
  else if ((v63_.v63 & 1) != 0) {
    GameRoutine_64df20(&v123_.v123, (__int64)v63_.v65, v63_.v64);
  }
  else {
    v123_.v123 = v63_.v63;
    v123_.v124 = v63_.v64;
    v123_.v125 = (__int64)v63_.v65;
  }
  v29 = GameData_212dbb8[0];
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 64LL) & 1) != 0) {
    v30 = *(const char**)(*(_QWORD*)GameData_212dbb8[0] + 80LL);
  }
  else {
    v30 = (const char*)(*(_QWORD*)GameData_212dbb8[0] + 65LL);
  }
  if ((v63_.v63 & 1) != 0) {
    v31 = v63_.v65;
  }
  else {
    v31 = (char*)&v63_.v63 + 1;
  }
  if ((GameData_21676c8 & 1) != 0) {
    v32 = (char*)GameData_21676d8;
  }
  else {
    v32 = GameData_21676c9;
  }
  sprintf_alt1((__int64)v126, "%s::%s", v32, v31);
  sprintf_alt1((__int64)v127_.v127, "%s=%s", v30, v126);
  GameRoutine_60a020_alt3((__int64)v66_.v66, (const char*)v127_.v127);
  v33 = *(unsigned __int8*)(*(_QWORD*)v29 + 64LL);
  v34 = (v33 & 1) == 0;
  v35 = v33 >> 1;
  if (v34) {
    v36 = *(_QWORD*)v29 + 65LL;
  }
  else {
    v36 = *(_QWORD*)(*(_QWORD*)v29 + 80LL);
  }
  if (v34) {
    v37 = v35;
  }
  else {
    v37 = *(_QWORD*)(*(_QWORD*)v29 + 72LL);
  }
  game_hub_e023c0((__int64)v66_.v66, v36, v37);
  if ((GameRoutine_e02840((__int64)v66_.v66) & 1) == 0) {
    *a3 = 0;
    a3[1] = 0;
    if ((v63_.v63 & 1) == 0) {
      goto LABEL_81;
    }
    goto LABEL_76;
  }
  v38 = (__int64*)fw_memory_g_heap_manager_ptr;
  v39 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 1088, 16, 0);
  v40 = (__int64)(v39 + 4);
  v41 = (__int64)v39;
  v39[1] = 0;
  v39[2] = 0;
  *v39 = GameData_1fe2280;
  GameRoutine_df8600((__int64)(v39 + 4), (__int64)v66_.v66, &v123_.v123);
  v42 = (__int64*)a1[9];
  v43 = a1[10];
  if ((unsigned __int64)v42 < v43) {
    *v42 = v40;
    v42[1] = v41;
    v44 = (__int64)(v42 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                              memory_order_relaxed);
    goto LABEL_65;
  }
  v45 = a1[8];
  v127_.v128 = a3;
  v46 = (unsigned __int64)v42 - v45;
  v47 = ((__int64)v42 - v45) >> 4;
  v48 = v47 + 1;
  if ((unsigned __int64)(v47 + 1) >> 60 != 0) {
    GameRoutine_e01f40();
  }
  v49 = v43 - v45;
  if (v49 >> 3 > v48) {
    v48 = v49 >> 3;
  }
  if ((unsigned __int64)v49 >= 0x7FFFFFFFFFFFFFF0LL) {
    v50 = 0xFFFFFFFFFFFFFFFLL;
  }
  else {
    v50 = v48;
  }
  if (v50 >> 60 != 0) {
  LABEL_82:
    GameRoutine_60a210_alt1();
  }
  v51 = fw_memory_HeapManager_Allocate_alt1(*v38, 16 * v50, 16, 0);
  v52 = (__int64*)(v51 + v46);
  v53 = v51 + 16 * v50;
  *v52 = v40;
  v52[1] = v41;
  v54 = v51 + v46 - 16 * v47;
  v44 = v51 + v46 + 16;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 8), 1u,
                            memory_order_relaxed);
  memcpy_alt1(v54, v45, v46);
  a1[8] = v54;
  a1[9] = v44;
  a1[10] = v53;
  if (v45 != 0) {
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v45);
  }
  a3 = v127_.v128;
LABEL_65:
  a1[9] = v44;
  GameHr_df9600(v40);
  v56 = *(_DWORD*)(v41 + 248);
  *(_BYTE*)(v41 + 980) = 1;
  v57 = *(_DWORD**)(v41 + 768);
  if (v56 == 6) {
    v58 = *(_QWORD*)(v41 + 768);
  }
  else {
    v58 = 0;
  }
  if (v58 != 0 && (*(_BYTE*)(a2 + 64) & 1) != 0) {
    v59 = (_DWORD*)(v58 + 32);
    if (*(_BYTE*)(v58 + 48) == 1) {
      *v59 = *(_DWORD*)(a2 + 32);
      v57[9] = *(_DWORD*)(a2 + 36);
      v60 = *(_OWORD*)v59;
      *((_QWORD*)&v60 + 1) = *(unsigned int*)(a2 + 40);
      *(_OWORD*)v59 = v60;
    }
    else {
      *(_QWORD*)(v58 + 40) = v3[1];
      *(_QWORD*)v59 = *v3;
      *(_BYTE*)(v58 + 48) = 1;
    }
    *(_DWORD*)(v58 + 64) = *(_DWORD*)(a2 + 48);
    v57[17] = *(_DWORD*)(a2 + 52);
    v61 = *(_OWORD*)(v58 + 64);
    *((_QWORD*)&v61 + 1) = *(unsigned int*)(a2 + 56);
    *(_OWORD*)(v58 + 64) = v61;
    v57[20] = 0;
  }
  *a3 = v40;
  a3[1] = v41;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if ((v63_.v63 & 1) == 0) {
      goto LABEL_81;
    }
  }
  else {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    std___1___shared_weak_count___release_weak_alt2(v41);
    if ((v63_.v63 & 1) == 0) {
      goto LABEL_81;
    }
  }
LABEL_76:
  if (v63_.v65 != nullptr) {
    v62 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v62, (__int64)v63_.v65);
  }
LABEL_81:
  Object_df8cc0_alt1((__int64)v66_.v66);
}

__attribute__((swiftcall)) void game_hub_e01a40(PSEUDO_X8 x8_, __int64 result)
{
  __int64** a2 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64* v21;
  bool v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  bool v27;
  bool v28;
  __int64* v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64* v40;
  unsigned __int64 v41;
  __int64* v42;
  __int64* v43;
  __int64* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  char v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  struct {
    __int64 v54;
    __int64 v55;
    __int64 v56;
  } v54_;

  a2[1] = nullptr;
  a2[2] = nullptr;
  *a2 = nullptr;
  v3 = *(__int64**)(result + 24);
  v4 = *v3;
  v5 = v3[1];
  v6 = v5 - *v3;
  if (v5 != *v3) {
    if (v6 < 0) {
      GameRoutine_e01f60();
    }
    v7 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v6, 16, 0);
    v8 = v7;
    v9 = 0;
    do {
      v10 = v4 + v9;
      v11 = (_QWORD*)(v7 + v9);
      *v11 = *(_QWORD*)(v4 + v9);
      v12 = *(_QWORD*)(v4 + v9 + 8);
      v11[1] = v12;
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
      }
      v9 += 16;
    } while (v10 + 16 != v5);
    v13 = nullptr;
    v14 = (__int64*)v7;
    v15 = v9 - 8;
    v16 = v7 + v9 - 16;
    do {
      v17 = *(unsigned __int8*)(*v14 + 136);
      if ((v17 & 1) != 0) {
        v18 = *(_QWORD*)(*v14 + 144);
      }
      else {
        v18 = v17 >> 1;
      }
      if (v18 != 0 && (GameRoutine_e02840(*v14) & 1) != 0) {
        v19 = (_QWORD*)*v14;
        v20 = *(_QWORD*)(*v14 + 384);
        if ((*(_BYTE*)(*v14 + 376) & 1) == 0) {
          v20 = *(_BYTE*)(*v14 + 376) >> 1;
        }
        if (v20 == 21) {
          v21 = (*(_BYTE*)(*v14 + 376) & 1) != 0 ? (__int64*)v19[49]
                                                 : (_QWORD*)((char*)v19 + 377);
          v22 = *v21 == 0x82E39683E3AA82E3LL && v21[1] == 0xE5A184E7A782E3B8LL;
          v23 = v22 && *(__int64*)((char*)v21 + 13) == 0x968CE5B98AE5A184LL;
          if (v23 ||
              ((v24 = *v21, v25 = v21[1], v26 = *(__int64*)((char*)v21 + 13),
                v24 == 0x82E39683E3AA82E3LL)
                   ? (v27 = v25 == 0xE89E9DE9A782E3B8LL)
                   : (v27 = false),
               v27 ? (v28 = v26 == 0xBAA4E7A8A1E89E9DLL) : (v28 = false),
               v28)) {
            v29 = v19 + 17;
            v54_.v55 = 0;
            v54_.v56 = 0;
            v54_.v54 = 0;
            if (&v54_.v54 != v19 + 17) {
              if ((*(_BYTE*)v29 & 1) != 0) {
                GameRoutine_64df20(&v54_.v54, v19[19], v19[18]);
              }
              else {
                v30 = v19[18];
                v54_.v54 = *v29;
                v54_.v55 = v30;
                v54_.v56 = v19[19];
              }
            }
            v31 = (unsigned __int64)a2[2];
            if ((unsigned __int64)v13 >= v31) {
              v34 = *a2;
              v35 = (char*)v13 - (char*)*a2;
              v36 = 1 - 0x5555555555555555LL * (v35 >> 3);
              if (v36 > 0xAAAAAAAAAAAAAAALL) {
                GameRoutine_e01f80();
              }
              v37 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v31 - (_QWORD)v34) >> 3);
              if (2 * v37 > v36) {
                v36 = 2 * v37;
              }
              if (v37 >= 0x555555555555555LL) {
                v38 = 0xAAAAAAAAAAAAAAALL;
              }
              else {
                v38 = v36;
              }
              if (v38 != 0) {
                if (v38 > 0xAAAAAAAAAAAAAAALL) {
                  GameRoutine_60a210_alt1();
                }
                v39 = fw_memory_HeapManager_Allocate_alt1(
                    fw_memory_g_heap_manager, 24 * v38, 16, 0);
              }
              else {
                v39 = 0;
              }
              v40 = (__int64*)(v39 + v35);
              v53 = v39;
              if ((v54_.v54 & 1) != 0) {
                fw_text_String_CopyTerminated((__int64*)(v39 + v35), v54_.v56,
                                              v54_.v55);
                v34 = *a2;
                v35 = (char*)v13 - (char*)*a2;
              }
              else {
                v41 = v54_.v55;
                *v40 = v54_.v54;
                v40[1] = v41;
                v40[2] = v54_.v56;
              }
              v42 = (__int64*)((char*)v40 - v35);
              if (v34 != v13) {
                v43 = v34;
                v44 = v42;
                do {
                  v45 = *v43;
                  v46 = v43[2];
                  v44[1] = v43[1];
                  v44[2] = v46;
                  *v44 = v45;
                  v44 += 3;
                  v43[1] = 0;
                  v43[2] = 0;
                  *v43 = 0;
                  v43 += 3;
                } while (v43 != v13);
                do {
                  if ((*(_BYTE*)v34 & 1) != 0 && v34[2] != 0) {
                    v47 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v47 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                        (_QWORD)(v34[2]));
                  }
                  v34 += 3;
                } while (v34 != v13);
                v34 = *a2;
              }
              v13 = v40 + 3;
              *a2 = v42;
              a2[1] = v40 + 3;
              a2[2] = (__int64*)(v53 + 24 * v38);
              if (v34 != nullptr) {
                v48 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v48 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                    (_QWORD)(v34));
              }
            }
            else {
              if ((v54_.v54 & 1) != 0) {
                fw_text_String_CopyTerminated(v13, v54_.v56, v54_.v55);
              }
              else {
                v32 = v54_.v54;
                v33 = v54_.v56;
                v13[1] = v54_.v55;
                v13[2] = v33;
                *v13 = v32;
              }
              v13 += 3;
            }
            v49 = v54_.v54;
            a2[1] = v13;
            if ((v49 & 1) != 0 && v54_.v56 != 0) {
              v50 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v50 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v50,
                  (_QWORD)(v54_.v56));
            }
          }
        }
      }
      v22 = v16 == (_QWORD)v14;
      v14 += 2;
    } while (!v22);
    do {
      v51 = *(_QWORD*)(v8 + v15);
      if (v51 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
        std___1___shared_weak_count___release_weak_alt1(v51);
      }
      v15 -= 16;
    } while (v15 != -8);
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v52 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v52, (_QWORD)(v8));
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64* game_hub_e023c0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64* v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int8* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  bool v24;
  unsigned __int64 v25;
  unsigned __int8* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  bool v37;
  unsigned __int64 v38;
  unsigned __int8* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  struct {
    __int64 v54[2];
    char v55;
    char gap17_[15];
    __int64 v56;
    __int64 v57;
    __int64 v58;
    char gap56_[8];
    char v59;
  } v54_;
  char v60;

  v6 = (__int64*)(a1 + 256);
  v7 = (_QWORD*)GameData_212dbb8[0];
  if (*(_QWORD*)GameData_212dbb8[0] != 0) {
    v8 = *(_QWORD*)GameData_212dbb8[0] + 248LL;
  }
  else {
    v8 = 0;
  }
  if (GameData_22127a8 != 0) {
    v9 = GameData_22127a8;
  }
  else {
    v9 = v8;
  }
  v10 = *(unsigned __int8*)(a1 + 232);
  v11 = (v10 & 1) == 0;
  v12 = v10 >> 1;
  if (v11) {
    v13 = (unsigned __int8*)(a1 + 233);
  }
  else {
    v13 = *(unsigned __int8**)(a1 + 248);
  }
  if (v11) {
    v14 = v12;
  }
  else {
    v14 = *(_QWORD*)(a1 + 240);
  }
  Manager_d9bf20((void*)(v54_.v54), v9, v13, v14, v6);
  GameRoutine_d90ae0(a1 + 424, v54_.v54);
  if (v54_.v59 == 1) {
    v15 = v54_.v57;
    if (v54_.v57 != 0) {
      v16 = v54_.v58;
      if (v54_.v57 == v54_.v58) {
        goto LABEL_21;
      }
      do {
        v17 = *(unsigned int*)(v16 - 8);
        v18 = v16 - 32;
        if ((_DWORD)v17 != -1) {
          ((void (*)(char*, __int64))GameData_1fe22c0[v17])(&v60, v16 - 32);
        }
        *(_DWORD*)(v16 - 8) = -1;
        v16 -= 32;
      } while (v18 != v15);
      v54_.v58 = v15;
      if (v54_.v57 != 0) {
      LABEL_21:
        v19 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v19 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v19, (_QWORD)(v54_.v57));
      }
    }
    if ((v54_.v55 & 1) != 0 && v54_.v56 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v20, (_QWORD)(v54_.v56));
    }
  }
  if (*v7 != 0) {
    v21 = *v7 + 248LL;
  }
  else {
    v21 = 0;
  }
  if (GameData_22127a8 != 0) {
    v22 = GameData_22127a8;
  }
  else {
    v22 = v21;
  }
  v23 = *(unsigned __int8*)(a1 + 280);
  v24 = (v23 & 1) == 0;
  v25 = v23 >> 1;
  if (v24) {
    v26 = (unsigned __int8*)(a1 + 281);
  }
  else {
    v26 = *(unsigned __int8**)(a1 + 296);
  }
  if (v24) {
    v27 = v25;
  }
  else {
    v27 = *(_QWORD*)(a1 + 288);
  }
  Manager_d9bf20((void*)(v54_.v54), v22, v26, v27, (__int64*)(a1 + 304));
  GameRoutine_d90ae0(a1 + 496, v54_.v54);
  if (v54_.v59 == 1) {
    v28 = v54_.v57;
    if (v54_.v57 != 0) {
      v29 = v54_.v58;
      if (v54_.v57 == v54_.v58) {
        goto LABEL_49;
      }
      do {
        v30 = *(unsigned int*)(v29 - 8);
        v31 = v29 - 32;
        if ((_DWORD)v30 != -1) {
          ((void (*)(char*, __int64))GameData_1fe22c0[v30])(&v60, v29 - 32);
        }
        *(_DWORD*)(v29 - 8) = -1;
        v29 -= 32;
      } while (v31 != v28);
      v54_.v58 = v28;
      if (v54_.v57 != 0) {
      LABEL_49:
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v32, (_QWORD)(v54_.v57));
      }
    }
    if ((v54_.v55 & 1) != 0 && v54_.v56 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v33, (_QWORD)(v54_.v56));
    }
  }
  if (*v7 != 0) {
    v34 = *v7 + 248LL;
  }
  else {
    v34 = 0;
  }
  if (GameData_22127a8 != 0) {
    v35 = GameData_22127a8;
  }
  else {
    v35 = v34;
  }
  v36 = *(unsigned __int8*)(a1 + 328);
  v37 = (v36 & 1) == 0;
  v38 = v36 >> 1;
  if (v37) {
    v39 = (unsigned __int8*)(a1 + 329);
  }
  else {
    v39 = *(unsigned __int8**)(a1 + 344);
  }
  if (v37) {
    v40 = v38;
  }
  else {
    v40 = *(_QWORD*)(a1 + 336);
  }
  Manager_d9bf20((void*)(v54_.v54), v35, v39, v40, (__int64*)(a1 + 352));
  GameRoutine_d90ae0(a1 + 568, v54_.v54);
  if (v54_.v59 == 1) {
    v41 = v54_.v57;
    if (v54_.v57 != 0) {
      v42 = v54_.v58;
      if (v54_.v57 == v54_.v58) {
        goto LABEL_77;
      }
      do {
        v43 = *(unsigned int*)(v42 - 8);
        v44 = v42 - 32;
        if ((_DWORD)v43 != -1) {
          ((void (*)(char*, __int64))GameData_1fe22c0[v43])(&v60, v42 - 32);
        }
        *(_DWORD*)(v42 - 8) = -1;
        v42 -= 32;
      } while (v44 != v41);
      v54_.v58 = v41;
      if (v54_.v57 != 0) {
      LABEL_77:
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v45, (_QWORD)(v54_.v57));
      }
    }
    if ((v54_.v55 & 1) != 0 && v54_.v56 != 0) {
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v46, (_QWORD)(v54_.v56));
    }
  }
  GameRoutine_60a060_alt1((char*)(a1 + 640), a2, a3);
  if ((*(_BYTE*)(a1 + 376) & 1) != 0 && *(_QWORD*)(a1 + 384) == 24) {
    v47 = *(__int64**)(a1 + 392);
    v48 = *v47;
    v49 = v47[1];
    v50 = v47[2];
    if (v48 == 0x82E3B383E38083E3LL && v49 == 0xE5B383E3A783E3B8LL &&
        v50 == 0xB4AEE597A5E98586LL) {
      *(_DWORD*)(a1 + 200) = 8;
    }
  }
  return GameRoutine_e07e20_alt1((unsigned __int8*)a1);
}

__attribute__((swiftcall)) void game_hub_e032c0(PSEUDO_X8 x8_)
{
  _BYTE* a1 = (_BYTE*)PSEUDO_X8_VALUE(x8_);
  *a1 = 0;
  a1[16] = 0;
}

__int64 game_hub_e04ae0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  float32x4_t* v7;
  float32x4_t* v8;
  float32x4_t v9;
  int8x16_t v10;
  float v11;
  float v12;
  bool v13;
  float v14;
  __int64 v15;

  v1 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v1 != 0) {
    v2 = *(_QWORD*)(*GameData_212d458[0] + 72);
    v3 = result;
    v4 = *(_QWORD*)(*GameData_212d458[0] + 80);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 16), 1u,
                              memory_order_relaxed);
    v5 = std___1___shared_weak_count_lock_alt1(v4);
    result = std___1___shared_weak_count___release_weak_alt2(v1);
    if (v5 == 0 || v2 == 0) {
      if (v5 == 0) {
        return result;
      }
    }
    else {
      v7 = *(float32x4_t**)(v3 + 8);
      if ((LANES128(v7[61]).n128_u8[0] & 1) != 0) {
        v8 = v7 + 60;
      }
      else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                     memory_order_acquire) &
                1) != 0) {
        v8 = (float32x4_t*)&GameData_21a6120;
      }
      else {
        v8 = (float32x4_t*)&GameData_21a6120;
        if (__cxa_guard_acquire_alt2((__int64)&GameData_21a6130) != 0) {
          v15 = *((_QWORD*)GameData_212c540 + 1);
          *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
          *((_QWORD*)&GameData_21a6120 + 1) = v15;
          __cxa_guard_release_alt2((__int64)&GameData_21a6130);
        }
      }
      v9 = vsubq_f32(
          *v8, *(float32x4_t*)(*(_QWORD*)(*(_QWORD*)(v2 + 24) + 16LL) + 560LL));
      v10 = vmulq_f32(v9, v9);
      LANES128(v10).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v10, v10, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0])))
              .n64_u64[0];
      v11 = (float)(LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v10).n128_u64[0]))))
                        .n64_f32[0] +
                    -0x1.9000000000000p+7f) /
            -0x1.4000000000000p+4f;
      v12 = 0x1.0000000000000p+0f;
      if (v11 <= 0x1.0000000000000p+0f) {
        v12 = v11;
      }
      v13 = v11 < 0x0.0p+0f;
      v14 = 0x0.0p+0f;
      if (!v13) {
        v14 = v12;
      }
      result = game_14a1b00(*(__int64**)(v3 + 56), v14);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak_alt2(v5);
    }
  }
  return result;
}

void game_hub_e08150(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  struct {
    __int64 v11;
    unsigned __int64 v12;
    char* v13;
  } v11_;

  v3 = *a3;
  if (*a3 == 0) {
    return;
  }
  v5 = strlen(*a3);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                    v8, 16, 0);
    v11_.v12 = v6;
    v11_.v13 = v7;
    v11_.v11 = v8 | 1;
    goto LABEL_10;
  }
  LOBYTE(v11_.v11) = 2 * v5;
  v7 = (char*)&v11_.v11 + 1;
  if (v5 != 0) {
  LABEL_10:
    memmove(v7, v3, v6);
  }
  v7[v6] = 0;
  if ((*(_BYTE*)a2 & 1) != 0 && *(_QWORD*)(a2 + 16) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (_QWORD)(*(_QWORD*)(a2 + 16)));
  }
  v10 = v11_.v12;
  *(_QWORD*)a2 = v11_.v11;
  *(_QWORD*)(a2 + 8) = v10;
  *(_QWORD*)(a2 + 16) = v11_.v13;
}

__attribute__((swiftcall)) void

game_hub_e1a260(PSEUDO_X8 x8_, __int64 unused_int0, __int64 a1, float a3)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v9[200];

  if ((*(_BYTE*)a1 & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 16);
  }
  else {
    v5 = a1 + 1;
  }
  if (v5 != 0) {
    snd_Fade_Fade_10c830(v9, 0.0f);
    snd_play_ff2d0((void*)((_QWORD*)a2), v5, v5, v9, 0, 65537, 0, 0.0f, 1.0f);
    snd_Fade_Destroy_Fade(v9);
  }
  else {
    *(_QWORD*)a2 = 0;
    *(_DWORD*)(a2 + 8) = 0x2000;
  }
  v6 = snd_fnd_WeakHandle_get(a2);
  if (v6 != 0) {
    v7 = v6 - 5592;
  }
  else {
    v7 = 0;
  }
  snd_Fade_Fade_10c830(v9, 0.0f);
  (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)(v7 + 40) + 72LL))(v7 + 40,
                                                                     v9, a3);
  {
    snd_Fade_Destroy_Fade(v9);
    return;
  }
}

__attribute__((swiftcall)) void game_hub_e1a340(PSEUDO_X8 x8_, _QWORD* a1,
                                                _QWORD* a2, __n128* a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __n128 result;
  __int64* v14;
  unsigned __int64 v15;
  __int128 v16;
  __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;

  v8 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  v10 = v9 + 32;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)v9 = GameData_1fe30f0;
  *(_DWORD*)(v9 + 40) = 0x2000;
  *(_QWORD*)(v9 + 48) = 0;
  v11 = (_QWORD*)(v9 + 48);
  if ((_QWORD*)(v9 + 48) != a2) {
    if ((*(_BYTE*)a2 & 1) != 0) {
      v11 = (_QWORD*)GameRoutine_64df20_alt2(v11, a2[2], a2[1]);
    }
    else {
      v12 = a2[1];
      *v11 = *a2;
      *(_QWORD*)(v9 + 56) = v12;
      *(_QWORD*)(v9 + 64) = a2[2];
    }
  }
  result = *a3;
  v14 = (__int64*)a1[2];
  v15 = a1[3];
  *(_QWORD*)(v9 + 80) = LANES128(*(a3)).n128_u64[0];
  v16 = *(_OWORD*)(v9 + 80);
  *((_QWORD*)&v16 + 1) = LANES128(result).n128_u32[2];
  *(_OWORD*)(v9 + 80) = v16;
  if ((unsigned __int64)v14 >= v15) {
    v18 = a1[1];
    v19 = (char*)v14 - v18;
    v20 = ((__int64)v14 - v18) >> 4;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 60 != 0) {
      GameRoutine_e1aa70(v11);
    }
    v22 = v15 - v18;
    if (v22 >> 3 > v21) {
      v21 = v22 >> 3;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF0LL) {
      v23 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 >> 60 != 0) {
      GameRoutine_60a210(v11);
    }
    v24 = fw_memory_HeapManager_Allocate(*v8, 16 * v23, 16, 0);
    v25 = (__int64*)&v19[v24];
    v26 = v24 + 16 * v23;
    *v25 = v10;
    v25[1] = v9;
    v27 = (__int64)&v19[v24 + -16 * v20];
    v17 = (__int64)&v19[v24 + 16];
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    memcpy(v27, v18, v19);
    a1[1] = v27;
    a1[2] = v17;
    a1[3] = v26;
    if (v18 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v8 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(*v8 + v28, v18);
    }
  }
  else {
    *v14 = v10;
    v14[1] = v9;
    v17 = (__int64)(v14 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[2] = v17;
  *a4 = v10;
  a4[1] = v9;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    {
      std___1___shared_weak_count___release_weak_alt1(v9);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_e1a7e0(PSEUDO_X8 x8_, _QWORD* a1,
                                                __int64* a2)
{
  __int64* a3 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  unsigned __int64 v11;
  int v12;
  int v13;
  unsigned __int64 v14;
  __int64* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64* v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  struct {
    __int64 v29;
    int v30;
  } v29_;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
  *(_WORD*)(v7 + 32) = 0;
  v8 = v7 + 32;
  v9 = v7;
  *(_QWORD*)(v7 + 8) = 0;
  *(_QWORD*)(v7 + 16) = 0;
  *(_QWORD*)(v7 + 96) = 0;
  *(_BYTE*)(v7 + 112) = 0;
  *(_QWORD*)(v7 + 128) = 0;
  *(_QWORD*)(v7 + 136) = 0;
  *(_QWORD*)v7 = GameData_1fe3140;
  *(_QWORD*)(v7 + 120) = 0;
  v10 = (__int64*)(v7 + 120);
  *(_DWORD*)(v7 + 144) = 0;
  *(_QWORD*)(v7 + 56) = 0x100000000LL;
  GameRoutine_1017b90_alt1((__int64*)(v7 + 32), a2);
  if (*(int*)(v9 + 60) >= 1) {
    v11 = *(_QWORD*)(v9 + 128);
    v12 = 0;
    do {
      v14 = *(_QWORD*)(v9 + 136);
      v29_.v29 = 0;
      v29_.v30 = 0x2000;
      if (v11 < v14) {
        *(_QWORD*)v11 = 0;
        *(_DWORD*)(v11 + 8) = 0x2000;
        GameRoutine_112180_alt1(v11, (__int64)&v29_.v29);
        v11 += 16LL;
      }
      else {
        v11 = GameHr_10182e0(v10, (__int64)&v29_.v29);
      }
      v13 = *(_DWORD*)(v9 + 60);
      ++v12;
      *(_QWORD*)(v9 + 128) = v11;
    } while (v12 < v13);
  }
  v15 = (__int64*)a1[5];
  v16 = a1[6];
  if ((unsigned __int64)v15 >= v16) {
    v18 = a1[4];
    v19 = (unsigned __int64)v15 - v18;
    v20 = ((__int64)v15 - v18) >> 4;
    v21 = v20 + 1;
    if ((unsigned __int64)(v20 + 1) >> 60 != 0) {
      GameRoutine_e1aa90_alt1();
    }
    v22 = v16 - v18;
    if (v22 >> 3 > v21) {
      v21 = v22 >> 3;
    }
    if ((unsigned __int64)v22 >= 0x7FFFFFFFFFFFFFF0LL) {
      v23 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v23 = v21;
    }
    if (v23 >> 60 != 0) {
      GameRoutine_60a210_alt1();
    }
    v24 = fw_memory_HeapManager_Allocate_alt1(*v6, 16 * v23, 16, 0);
    v25 = (__int64*)(v24 + v19);
    v26 = v24 + 16 * v23;
    *v25 = v8;
    v25[1] = v9;
    v27 = v24 + v19 - 16 * v20;
    v17 = v24 + v19 + 16;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
    memcpy_alt1(v27, v18, v19);
    a1[4] = v27;
    a1[5] = v17;
    a1[6] = v26;
    if (v18 != 0) {
      v28 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free_alt4(*v6 + v28, v18);
    }
  }
  else {
    *v15 = v8;
    v15[1] = v9;
    v17 = (__int64)(v15 + 2);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                              memory_order_relaxed);
  }
  a1[5] = v17;
  *a3 = v8;
  a3[1] = v9;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                            memory_order_relaxed);
  if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak_alt2(v9);
  }
}

void game_hub_e1ba40(__int64** result)
{
  __int64* v1;
  __int64* v2;
  __int64* v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v1 = result[4];
  v2 = result[5];
  v4 = v1;
  if (v1 != v2) {
    v4 = result[4];
    while (1) {
      v5 = *(_QWORD*)*v4;
      if (v5 == 0 || *(_DWORD*)(v5 + 16) != *(_DWORD*)(*v4 + 8)) {
        break;
      }
      v4 += 8;
      if (v4 == v2) {
        v4 = result[5];
        goto LABEL_51;
      }
    }
  }
  v6 = v4 + 8;
  if (v4 != v2 && v6 != v2) {
    while (1) {
      v8 = (_QWORD*)*v6;
      v9 = *(_QWORD*)*v6;
      if (v9 != 0 && *(_DWORD*)(v9 + 16) == *((_DWORD*)v8 + 2)) {
        break;
      }
    LABEL_14:
      v6 += 8;
      if (v6 == v2) {
        v1 = result[4];
        v2 = result[5];
        goto LABEL_36;
      }
    }
    v10 = v6[1];
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
    }
    v11 = v4[1];
    *v4 = (__int64)v8;
    v4[1] = v10;
    if (v11 != 0) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak_alt1(v11);
      }
      v10 = v4[1];
    }
    if (v10 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
    v12 = (__int64*)v4[6];
    v4[6] = 0;
    if (v12 == v4 + 2) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_31:
        v14 = v6[6];
        if (v14 != 0) {
          if (v6 + 2 == (__int64*)v14) {
            v4[6] = (__int64)(v4 + 2);
            (*(void (**)(__int64, __int64*))(*(_QWORD*)v6[6] + 24LL))(v6[6],
                                                                      v4 + 2);
          }
          else {
            v4[6] = v14;
            v6[6] = 0;
          }
        }
        else {
          v4[6] = 0;
        }
        v4 += 8;
        goto LABEL_14;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
    goto LABEL_31;
  }
LABEL_36:
  if (v4 != v2) {
    while (1) {
      v15 = (__int64*)*(v2 - 2);
      if (v2 - 6 == v15) {
        v16 = 32;
      }
      else {
        if (v15 == nullptr) {
          goto LABEL_44;
        }
        v16 = 40;
      }
      (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
    LABEL_44:
      v17 = *(v2 - 7);
      if (v17 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
        std___1___shared_weak_count___release_weak_alt1(v17);
      }
      v2 -= 8;
      if (v2 == v4) {
        v1 = result[4];
        result[5] = v4;
        goto LABEL_51;
      }
    }
  }
  v4 = v2;
LABEL_51:
  while (v1 != v4) {
    v18 = v1[6];
    if (v18 == 0) {
      GameRoutine_60a310();
    }
    (*(void (**)(__int64, __int64*))(*(_QWORD*)v18 + 48LL))(v18, v1);
    v1 += 8;
  }
}

__attribute__((swiftcall)) void game_hub_e1be60(PSEUDO_X8 x8_, __int64* a1,
                                                char* a2)
{

#pragma clang fp contract(off)
  __int64** a3 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  int v6;
  char v7;
  char* v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  unsigned int v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64** v22;
  __int64* v23;
  _QWORD* result;
  struct {
    _QWORD v25[3];
    int v26;
    char gap28_[4];
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v25_;

  v15 = COERCE_AS(__typeof__(v15),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v5 > 7) {
    v6 = 6;
  }
  else {
    v6 = GameData_1b01468[v5];
  }
  v7 = *a2;
  v8 = *((char**)a2 + 2);
  v25_.v25[0] = 0;
  v25_.v25[1] = 0;
  v25_.v26 = v6;
  if ((v7 & 1) != 0) {
    v9 = v8;
  }
  else {
    v9 = a2 + 1;
  }
  v11 = *(_QWORD*)GameData_212c540;
  v10 = *((_QWORD*)GameData_212c540 + 1);
  v13 = *(_QWORD*)GameData_212c548;
  v12 = *((_QWORD*)GameData_212c548 + 1);
  v25_.v25[2] = v9;
  v25_.v29 = v13;
  v25_.v30 = v12;
  v25_.v27 = v11;
  v25_.v28 = v10;
  v25_.v31 = v11;
  v25_.v32 = v10;
  v14 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(
        *(float**)eft_g_effectSystem_ptr[0], (__int64)v25_.v25, 0);
    v15 = COERCE_AS(__typeof__(v15), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameHr_14a10d0(a3, (__int64)v14, v15, (__int64)&GameData_1a9f09e),
      v15 = COERCE_AS(__typeof__(v15),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v16 = *a3;
  v17 = **a3;
  if (v17 != 0 && *(_DWORD*)(v17 + 16) == *((_DWORD*)v16 + 2)) {
    v18 = *(unsigned int*)(v17 + 36);
    if ((_DWORD)v18 != 0) {
      v19 = 0;
      v20 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
      do {
        v21 = *(_QWORD*)(v17 + 40 + 8 * v19);
        if (v21 != 0) {
          *(_QWORD*)(*(_QWORD*)(v21 + 224) + 24LL) = v20;
          v18 = *(unsigned int*)(v17 + 36);
        }
        ++v19;
      } while (v19 < v18);
    }
  }
  v22 = (__int64**)a1[2];
  if ((unsigned __int64)v22 >= a1[3]) {
    result = GameRoutine_e1cd00_alt1(a1 + 1, a3),
    v15 = COERCE_AS(__typeof__(v15),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *v22 = v16;
    v23 = a3[1];
    v22[1] = v23;
    if (v23 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 1), 1u,
                                memory_order_relaxed);
    }
    result = v22 + 2;
  }
  a1[2] = (__int64)result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8 x8_, __int64* a1,
                                                __int64 a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64** a4 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  int v7;
  __int64 v8;
  float* v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  unsigned int v13;
  __int64* v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64** v20;
  __int64* v21;
  _QWORD* result;
  struct {
    _QWORD v23[3];
    int v24;
    char gap28_[4];
    __int64 v25;
    __int64 v26;
    __int128 v27;
    __int64 v28;
    __int64 v29;
  } v23_;

  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v6 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v6 > 7) {
    v7 = 6;
  }
  else {
    v7 = GameData_1b01468[v6];
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v8 = *(_QWORD*)(a2 + 16);
  }
  else {
    v8 = a2 + 1;
  }
  v23_.v24 = v7;
  v23_.v23[0] = 0;
  v23_.v23[1] = 0;
  v9 = (float*)*eft_g_effectSystem_ptr[0];
  v10 = a3[1];
  v23_.v25 = *a3;
  v23_.v26 = v10;
  v23_.v27 = GameData_1a837f0;
  v23_.v23[2] = v8;
  v11 = *((_QWORD*)GameData_212c540 + 1);
  v23_.v28 = *(_QWORD*)GameData_212c540;
  v23_.v29 = v11;
  v12 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(v9, (__int64)v23_.v23, 1);
    v13 = COERCE_AS(__typeof__(v13), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameHr_14a10d0(a4, (__int64)v12, v13, (__int64)&GameData_1a9f09e),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *a4;
  v15 = **a4;
  if (v15 != 0 && *(_DWORD*)(v15 + 16) == *((_DWORD*)v14 + 2)) {
    v16 = *(unsigned int*)(v15 + 36);
    if ((_DWORD)v16 != 0) {
      v17 = 0;
      v18 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
      do {
        v19 = *(_QWORD*)(v15 + 40 + 8 * v17);
        if (v19 != 0) {
          *(_QWORD*)(*(_QWORD*)(v19 + 224) + 24LL) = v18;
          v16 = *(unsigned int*)(v15 + 36);
        }
        ++v17;
      } while (v17 < v16);
    }
  }
  v20 = (__int64**)a1[2];
  if ((unsigned __int64)v20 >= a1[3]) {
    result = GameRoutine_e1cd00_alt1(a1 + 1, a4),
    v13 = COERCE_AS(__typeof__(v13),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *v20 = v14;
    v21 = a4[1];
    v20[1] = v21;
    if (v21 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 1), 1u,
                                memory_order_relaxed);
    }
    result = v20 + 2;
  }
  a1[2] = (__int64)result;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_hub_e1c160(PSEUDO_X8 x8_, _QWORD* a1,
                                                char* a2, __int64* a3)
{

#pragma clang fp contract(off)
  __int64** a4 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  int v8;
  char v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  unsigned int v17;
  __int64* v18;
  __int64 v19;
  unsigned int v20;
  unsigned int i;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64** v33;
  __int64 v34;
  _QWORD* result;
  struct {
    float32x4_t v36;
    char* v37;
    int v38;
    char gap28_[4];
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v36_;

  v17 = COERCE_AS(__typeof__(v17),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v7 = (unsigned int)*GameData_212d168;
  if ((unsigned int)v7 > 7) {
    v8 = 6;
  }
  else {
    v8 = GameData_1b01468[v7];
  }
  v9 = *a2;
  v10 = *((char**)a2 + 2);
  v36_.v36 = (__typeof__(v36_.v36)){0};
  v36_.v38 = v8;
  if ((v9 & 1) != 0) {
    v11 = v10;
  }
  else {
    v11 = a2 + 1;
  }
  v13 = *(_QWORD*)GameData_212c540;
  v12 = *((_QWORD*)GameData_212c540 + 1);
  v15 = *(_QWORD*)GameData_212c548;
  v14 = *((_QWORD*)GameData_212c548 + 1);
  v36_.v37 = v11;
  v36_.v41 = v15;
  v36_.v42 = v14;
  v36_.v39 = v13;
  v36_.v40 = v12;
  v36_.v43 = v13;
  v36_.v44 = v12;
  v16 = ({
    unsigned __int128 r_ =
        Manager_bc6460_pair(*(float**)eft_g_effectSystem_ptr[0], &v36_.v36, 0);
    v17 = COERCE_AS(__typeof__(v17), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  GameRoutine_14a10d0(a4, (__int64)v16, v17, (__int64)&GameData_1a9f09e),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v18 = *a4;
  v19 = **a4;
  if (v19 != 0 && *(_DWORD*)(v19 + 16) == *((_DWORD*)v18 + 2)) {
    v20 = *(_DWORD*)(v19 + 36);
    if (v20 != 0) {
      for (i = 0; i < v20; ++i) {
        if ((int)v20 > (int)i) {
          v22 = *(_QWORD*)(v19 + 40 + 8LL * (int)i);
          if (v22 != 0) {
            v23 = a3[7];
            *(_QWORD*)(v22 + 104) = a3[5];
            *(_QWORD*)(v22 + 120) = v23;
            v24 = a3[3];
            *(_QWORD*)(v22 + 72) = a3[1];
            *(_QWORD*)(v22 + 88) = v24;
            v25 = *a3;
            *(_QWORD*)(v22 + 80) = a3[2];
            *(_QWORD*)(v22 + 64) = v25;
            v26 = a3[4];
            v27 = a3[6];
            *(_WORD*)(v22 + 128) = 257;
            *(_QWORD*)(v22 + 112) = v27;
            *(_QWORD*)(v22 + 96) = v26;
            v20 = *(_DWORD*)(v19 + 36);
          }
        }
      }
    }
  }
  GameRoutine_14a3920((__int64)v18),
      v17 = COERCE_AS(__typeof__(v17),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v28 = *v18;
  if (*v18 != 0 && *(_DWORD*)(v28 + 16) == *((_DWORD*)v18 + 2)) {
    v29 = *(unsigned int*)(v28 + 36);
    if ((_DWORD)v29 != 0) {
      v30 = 0;
      v31 = *(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 144LL;
      do {
        v32 = *(_QWORD*)(v28 + 40 + 8 * v30);
        if (v32 != 0) {
          *(_QWORD*)(*(_QWORD*)(v32 + 224) + 24LL) = v31;
          v29 = *(unsigned int*)(v28 + 36);
        }
        ++v30;
      } while (v30 < v29);
    }
  }
  v33 = (__int64**)a1[2];
  if ((unsigned __int64)v33 >= a1[3]) {
    result = GameRoutine_e1cd00(a1 + 1, a4),
    v17 = COERCE_AS(__typeof__(v17),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else {
    *v33 = v18;
    v34 = (__int64)a4[1];
    v33[1] = (__int64*)v34;
    if (v34 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 8), 1u,
                                memory_order_relaxed);
    }
    result = v33 + 2;
  }
  a1[2] = result;
  {
    result;
    return;
  }
}

_QWORD* game_hub_e1cee0(_QWORD* a1, _QWORD* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  char* v17;
  _QWORD* v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  v2 = a1[1] - *a1;
  v3 = (v2 >> 6) + 1;
  if (v3 >> 58 != 0) {
    GameRoutine_e1d170();
  }
  v6 = fw_memory_g_heap_manager_ptr;
  v7 = a1[2] - *a1;
  if (v7 >> 5 > v3) {
    v3 = v7 >> 5;
  }
  if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFC0LL) {
    v8 = 0x3FFFFFFFFFFFFFFLL;
  }
  else {
    v8 = v3;
  }
  if (v8 != 0) {
    if (v8 >> 58 != 0) {
      GameRoutine_60a210_alt1();
    }
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8 << 6, 16, 0);
  }
  else {
    v9 = 0;
  }
  v10 = a2[1];
  v11 = (_QWORD*)(v9 + v2);
  *v11 = *a2;
  v11[1] = v10;
  if (v10 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
  }
  v12 = (_QWORD*)a2[6];
  if (v12 != nullptr) {
    if (v12 == a2 + 2) {
      v11[6] = v11 + 2;
      (*(void (**)(_QWORD*))(*v12 + 24LL))(v12);
    }
    else {
      v11[6] = (*(__int64 (**)(_QWORD*))(*v12 + 16LL))(v12);
    }
  }
  else {
    v11[6] = 0;
  }
  v13 = v9 + (v8 << 6);
  v14 = (_QWORD*)*a1;
  v15 = (_QWORD*)a1[1];
  v16 = v11 + 8;
  v17 = (char*)((char*)v11 - ((char*)v15 - *a1));
  if (v15 != (_QWORD*)*a1) {
    v18 = (_QWORD*)*a1;
    v19 = (_QWORD*)(v2 - (((__int64)v15 - *a1) >> 6 << 6) + v9 + 48);
    do {
      *(v19 - 6) = *v18;
      v20 = v18[1];
      *(v19 - 5) = v20;
      if (v20 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 8), 1u,
                                  memory_order_relaxed);
      }
      v21 = (_QWORD*)v18[6];
      if (v21 != nullptr) {
        if (v18 + 2 == v21) {
          *v19 = v19 - 4;
          (*(void (**)(_QWORD))(*(_QWORD*)v18[6] + 24LL))(v18[6]);
        }
        else {
          *v19 = v21;
          v18[6] = 0;
        }
      }
      else {
        *v19 = 0;
      }
      v18 += 8;
      v19 += 8;
    } while (v18 != v15);
    while (1) {
      v22 = (_QWORD*)v14[6];
      if (v14 + 2 == v22) {
        v23 = 32;
      }
      else {
        if (v22 == nullptr) {
          goto LABEL_35;
        }
        v23 = 40;
      }
      (*(void (**)(__int64))(*v22 + v23))((__int64)v22);
    LABEL_35:
      v24 = v14[1];
      if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
        std___1___shared_weak_count___release_weak_alt1(v24);
      }
      v14 += 8;
      if (v14 == v15) {
        v14 = (_QWORD*)*a1;
        break;
      }
    }
  }
  *a1 = v17;
  a1[1] = v16;
  a1[2] = v13;
  if (v14 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v25, (_QWORD)(v14));
  }
  return v16;
}

__int64 game_hub_e1dce0()
{
  __int64* v0;
  __int64* i;
  __int64 v2;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v0 = *(__int64**)(GameData_21ec7c0 + 24);
  for (i = *(__int64**)(GameData_21ec7c0 + 32); v0 != i;
       result = game_hub_Character_RebuildAppearance(v2)) {
    v2 = *v0;
    v0 += 2;
  }
  return result;
}

unsigned __int64 game_hub_e286a0(__int64 a1, __int64* a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v7;
  char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  _BOOL4 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  bool v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  const char* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;
  struct {
    __int64 v37;
    char gap32_[8];
    const char* v38;
  } v37_;

  v2 = *a2;
  if (a2[1] == *a2) {
    goto LABEL_68;
  }
  v3 = *(unsigned __int8*)(v2 + 144);
  if ((v3 & 1) != 0) {
    v4 = *(_QWORD*)(v2 + 152);
  }
  else {
    v4 = v3 >> 1;
  }
  v5 = GameData_2167700;
  if ((GameData_21676f8[0] & 1) == 0) {
    v5 = (unsigned __int64)(unsigned __int8)GameData_21676f8[0] >> 1;
  }
  if (v4 == v5) {
    v7 = (v3 & 1) != 0 ? *(_QWORD*)(v2 + 160) : v2 + 145;
    v8 = (GameData_21676f8[0] & 1) != 0 ? (char*)GameData_2167708
                                        : &GameData_21676f8[1];
    if (memcmp_alt2(v7, (__int64)v8, v4) == 0) {
      if (*(_BYTE*)(a1 + 120) == 1) {
        v33 = *(_QWORD*)(a1 + 112);
        v24 = v33 & 0xFFFFFFFFFFFFFF00LL;
        return v24 | (unsigned __int8)v33;
      }
    LABEL_68:
      LOBYTE(v33) = 0;
      v24 = 0;
      return v24 | (unsigned __int8)v33;
    }
  }
  LocatorDispos_db1f30((void*)(&v37_.v37), (unsigned __int8*)v2);
  v9 = *(unsigned __int8*)(v2 + 48);
  if ((v9 & 1) != 0) {
    v10 = *(_QWORD*)(v2 + 56);
  }
  else {
    v10 = v9 >> 1;
  }
  if (v10 != 0) {
    v11 = game_ff5c20(*(_QWORD*)(*GameData_212ebe0 + 8) + 24LL,
                      (unsigned __int8*)&v37_.v37);
    v12 = *v11;
    v13 = v11[1];
    if (*v11 != v13) {
      if ((*(_BYTE*)(v2 + 48) & 1) != 0) {
        v14 = *(_QWORD*)(v2 + 56);
      }
      else {
        v14 = *(_BYTE*)(v2 + 48) >> 1;
      }
      if ((*(_BYTE*)(v2 + 48) & 1) != 0) {
        while (1) {
          v15 = *(_QWORD*)v12;
          v19 = *(unsigned __int8*)(*(_QWORD*)v12 + 112LL);
          v20 = *(_QWORD*)(*(_QWORD*)v12 + 120LL);
          if ((v19 & 1) == 0) {
            v20 = v19 >> 1;
          }
          if (v20 == v14) {
            v21 = (v19 & 1) != 0 ? *(_QWORD*)(v15 + 128) : v15 + 113;
            if (memcmp_alt2(v21, *(_QWORD*)(v2 + 64), v14) == 0) {
              break;
            }
          }
          v12 += 48;
          if (v12 == v13) {
            goto LABEL_43;
          }
        }
      }
      else {
        while (1) {
          v15 = *(_QWORD*)v12;
          v16 = *(unsigned __int8*)(*(_QWORD*)v12 + 112LL);
          v17 = *(_QWORD*)(*(_QWORD*)v12 + 120LL);
          if ((v16 & 1) == 0) {
            v17 = v16 >> 1;
          }
          if (v17 == v14) {
            v18 = (v16 & 1) != 0 ? *(_QWORD*)(v15 + 128) : v15 + 113;
            if (memcmp_alt2(v18, v2 + 49, v14) == 0) {
              break;
            }
          }
          v12 += 48;
          if (v12 == v13) {
            goto LABEL_43;
          }
        }
      }
      v22 = *(_QWORD*)(v15 + 56);
      v23 = false;
      v24 = v22 & 0xFFFFFFFFFFFFFF00LL;
      goto LABEL_58;
    }
  }
LABEL_43:
  v25 = *(unsigned __int8*)(v2 + 24);
  v26 = (v25 & 1) == 0;
  v27 = v25 >> 1;
  if (v26) {
    v28 = v27;
  }
  else {
    v28 = *(_QWORD*)(v2 + 32);
  }
  if (v26) {
    v29 = v2 + 25;
  }
  else {
    v29 = *(_QWORD*)(v2 + 40);
  }
  if ((v37_.v37 & 1) != 0) {
    v30 = v37_.v38;
  }
  else {
    v30 = (char*)&v37_.v37 + 1;
  }
  EventManager_cbc0c0_alt1((void*)(&v35_.v35), *(_QWORD*)GameData_212dc68, v29,
                           v28, v30);
  v23 = v35_.v35 == 0;
  if (v35_.v35 == 0) {
    LOBYTE(v22) = 0;
    v24 = 0;
    v31 = v35_.v36;
    if (v35_.v36 == 0) {
      goto LABEL_58;
    }
  LABEL_56:
    if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt2(v31);
    }
    goto LABEL_58;
  }
  v22 = *(_QWORD*)(v35_.v35 + 176);
  v24 = v22 & 0xFFFFFFFFFFFFFF00LL;
  v31 = v35_.v36;
  if (v35_.v36 != 0) {
    goto LABEL_56;
  }
LABEL_58:
  if ((v37_.v37 & 1) != 0 && v37_.v38 != nullptr) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt4(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (__int64)v37_.v38);
  }
  if (v23) {
    LOBYTE(v33) = 0;
  }
  else {
    LOBYTE(v33) = v22;
  }
  return v24 | (unsigned __int8)v33;
}

__attribute__((swiftcall)) void game_hub_e28d20(PSEUDO_X8 x8_,
                                                __int64 unused_int0, __int64 a1,
                                                double unused_float0, double a3)
{
  float32x4_t* a2 = (float32x4_t*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  bool v15;
  _QWORD* v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  float32x4_t v22;
  char v23;
  __int64 v24;
  __int64 v25;
  float32x4_t* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  bool v31;
  float32x4_t v32;
  float v33;
  float32x4_t* v34;
  float32x4_t v35;
  __int64 v36;
  __int64 v37;
  float32x4_t v38;
  float32x4_t v39;
  unsigned __int32 v40;
  float32x4_t* v41;
  __int64 v42;
  _QWORD* i;
  __int64 v44;
  float32x4_t v45;
  unsigned int v46;
  unsigned __int32 v47;

  v3 = *(_QWORD**)(GameData_21ec7c0 + 24);
  v4 = *(_QWORD**)(GameData_21ec7c0 + 32);
  if (v3 != v4) {
    while (1) {
      v5 = *v3;
      if (*(_QWORD*)(*v3 + 264LL) == a1) {
        break;
      }
      v3 += 2;
      if (v3 == v4) {
        goto LABEL_4;
      }
    }
    v24 = v3[1];
    if (v24 != 0) {
      v25 = v3[1];
      v26 = a2;
      v27 = a1;
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 16), 1u,
                                memory_order_relaxed);
      v28 = std___1___shared_weak_count_lock(v25);
      std___1___shared_weak_count___release_weak_alt1(v24);
      a1 = v27;
      a2 = v26;
      if (v28 != 0) {
        v29 = *(_QWORD*)(v5 + 24);
        v30 = *(float*)(v29 + 548);
        v31 = GameRoutine_d2d4e0(
            *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v29 + 8) + 344LL) + 360LL));
        LANES128(v32).n128_u32[0] = 0;
        LANES128(v32).n128_u64[1] = 0;
        LANES128(v26[2]).n128_u8[0] = 1;
        v33 = v30 * 0x1.3333340000000p-1;
        v34 = *(float32x4_t**)(*(_QWORD*)(v5 + 24) + 16LL);
        if (!v31) {
          v33 = v30;
        }
        LANES128(v32).n128_f32[1] = v33;
        v35 = vaddq_f32(v32, v34[35]);
        LANES128(v35).n128_u32[3] = 0;
        LANES128(v26[1]).n128_f32[0] =
            *(float*)(LANES128(v34[30]).n128_u64[1] + 36) *
            0x1.ca5dc20000000p+5;
        *v26 = v35;
      LABEL_39:
        if (atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak_alt1(v28);
        }
        return;
      }
    }
  }
LABEL_4:
  v6 = *(_QWORD*)(GameData_220b6d0 + 8);
  v7 = *(_QWORD**)(v6 + 24);
  v8 = (_QWORD*)(v6 + 32);
  if (v7 == v8) {
  LABEL_14:
    v16 = *(_QWORD**)(GameData_21f3c98 + 152);
    if (v16 == (_QWORD*)(GameData_21f3c98 + 160)) {
      goto LABEL_52;
    }
    while (1) {
      v17 = (_QWORD*)v16[7];
      v18 = (_QWORD*)v16[8];
      if (v17 != v18) {
        while (*(_QWORD*)(*v17 + 176LL) != a1) {
          v17 += 2;
          if (v17 == v18) {
            goto LABEL_22;
          }
        }
      }
      if (v17 != v18) {
        break;
      }
    LABEL_22:
      v17 = (_QWORD*)v16[10];
      v19 = (_QWORD*)v16[11];
      if (v17 != v19) {
        while (*(_QWORD*)(*v17 + 176LL) != a1) {
          v17 += 2;
          if (v17 == v19) {
            goto LABEL_27;
          }
        }
      }
      if (v17 != v19) {
        break;
      }
    LABEL_27:
      v20 = (_QWORD*)v16[1];
      if (v20 != nullptr) {
        do {
          v21 = v20;
          v20 = (_QWORD*)*v20;
        } while (v20 != nullptr);
      }
      else {
        do {
          v21 = (_QWORD*)v16[2];
          v15 = v16 == (_QWORD*)*v21;
          v16 = v21;
        } while (!v15);
      }
      v16 = v21;
      if (v21 == (_QWORD*)(GameData_21f3c98 + 160)) {
        goto LABEL_52;
      }
    }
    v37 = *v17;
    v36 = v17[1];
    if (v36 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v36 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v37 != 0) {
      if (*(_BYTE*)(v37 + 80) == 1) {
        v38 = *(float32x4_t*)(v37 + 64);
      }
      else {
        LODWORD(a3) = *(_DWORD*)(v37 + 268);
        LANES128(v39).n128_u64[0] = *(_QWORD*)(v37 + 260);
        LANES128(v39).n128_f64[1] = a3;
        v38 = vaddq_f32(*(float32x4_t*)(v37 + 16), v39);
      }
      LANES128(v38).n128_u32[3] = 0;
      v40 = *(_DWORD*)(v37 + 272);
      LANES128(a2[2]).n128_u8[0] = 1;
      *a2 = v38;
      LANES128(a2[1]).n128_u32[0] = v40;
    }
    if (v36 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v36 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v41 = a2;
      v42 = a1;
      (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
      std___1___shared_weak_count___release_weak_alt1(v36);
      a1 = v42;
      a2 = v41;
    }
    if (v37 == 0) {
    LABEL_52:
      for (i = *(_QWORD**)(GameData_220d620 + 8);; i += 2) {
        if (i == *(_QWORD**)(GameData_220d620 + 16)) {
          v23 = 0;
          LANES128(*(a2)).n128_u8[0] = 0;
          goto LABEL_62;
        }
        v44 = *i;
        if ((*(_BYTE*)(*i + 16LL) & 1) == 0 && *(_QWORD*)(v44 + 80) == a1) {
          break;
        }
      }
      v28 = i[1];
      if (v28 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                  memory_order_relaxed);
      }
      LANES128(v45).n128_u64[0] = *(_QWORD*)(v44 + 160);
      v46 = *(_DWORD*)(v44 + 168);
      v47 = *(_DWORD*)(v44 + 172);
      LANES128(a2[2]).n128_u8[0] = 1;
      LANES128(v45).n128_u64[1] = v46;
      LANES128(a2[1]).n128_u32[0] = v47;
      *a2 = v45;
      if (v28 != 0) {
        goto LABEL_39;
      }
    }
  }
  else {
    while (1) {
      v9 = (__int64*)v7[7];
      v10 = (__int64*)v7[8];
      if (v9 != v10) {
        break;
      }
    LABEL_8:
      v13 = (_QWORD*)v7[1];
      if (v13 != nullptr) {
        do {
          v14 = v13;
          v13 = (_QWORD*)*v13;
        } while (v13 != nullptr);
      }
      else {
        do {
          v14 = (_QWORD*)v7[2];
          v15 = v7 == (_QWORD*)*v14;
          v7 = v14;
        } while (!v15);
      }
      v7 = v14;
      if (v14 == v8) {
        goto LABEL_14;
      }
    }
    while (1) {
      v12 = *v9;
      v9 += 6;
      v11 = v12;
      if (*(_QWORD*)(v12 + 56) == a1) {
        break;
      }
      if (v9 == v10) {
        goto LABEL_8;
      }
    }
    LANES128(v22).n128_u64[0] = *(_QWORD*)(v11 + 184);
    LANES128(a2[1]).n128_u32[0] = *(_DWORD*)(v11 + 196);
    v23 = 1;
    LANES128(v22).n128_u64[1] = *(unsigned int*)(v11 + 192);
    *a2 = v22;
  LABEL_62:
    LANES128(a2[2]).n128_u8[0] = v23;
  }
}

__n128 game_hub_e29f60(__int64 a1)
{
  __int64 v2;
  char* v3;
  char* v4;
  unsigned __int64 v5;
  __n128 result;
  unsigned __int64 v7;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  struct {
    __int64 v19[2];
    char* v20;
  } v19_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((*(_BYTE*)(*(_QWORD*)GameData_212dbb8[0] + 40LL) & 1) != 0) {
    fw_text_String_CopyTerminated(
        v19_.v19, *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 56LL),
        *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 48LL)),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else {
    v2 = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 48LL);
    v3 = *(char**)(*(_QWORD*)GameData_212dbb8[0] + 56LL);
    v19_.v19[0] = *(_QWORD*)(*(_QWORD*)GameData_212dbb8[0] + 40LL);
    v19_.v19[1] = v2;
    v19_.v20 = v3;
  }
  if ((v19_.v19[0] & 1) != 0) {
    v4 = v19_.v20;
  }
  else {
    v4 = (char*)v19_.v19 + 1;
  }
  v5 = game_HashString_alt1((__int64)v4),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v5 != 0) {
    v7 = *(_QWORD*)(GameData_21c9d20 + 96);
    if (v7 != 0 && *(_QWORD*)(GameData_21c9d20 + 112) != 0) {
      v9 = v7 - 1;
      if ((v7 & (v7 - 1)) != 0) {
        v10 = v5;
        if (v5 >= v7) {
          v10 = v5 % v7;
        }
      }
      else {
        v10 = v9 & v5;
      }
      v11 = *(_QWORD**)(*(_QWORD*)(GameData_21c9d20 + 88) + 8 * v10);
      if (v11 != nullptr) {
        v12 = (_QWORD*)*v11;
        if (v12 != nullptr) {
          if ((v7 & v9) == 0) {
            while (1) {
              v14 = v12[1];
              if (v14 == v5) {
                if (v12[2] == v5) {
                  goto LABEL_32;
                }
              }
              else if ((v14 & v9) != v10) {
                goto LABEL_38;
              }
              v12 = (_QWORD*)*v12;
              if (v12 == nullptr) {
                goto LABEL_38;
              }
            }
          }
          do {
            v13 = v12[1];
            if (v13 == v5) {
              if (v12[2] == v5) {
              LABEL_32:
                v15 = v12[3];
                if (v15 != 0) {
                  if (game_GameModeData_instance_ != 0 &&
                      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
                    v16 = 232;
                    v17 = 136;
                  }
                  else {
                    v16 = 184;
                    v17 = 88;
                  }
                  GameRoutine_e2a160(a1, 0, (unsigned __int16*)(v15 + v17)),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
                  GameRoutine_e2a160(a1, 1u, (unsigned __int16*)(v15 + v16)),
                      result = COERCE_AS(__typeof__(result),
                                         PSEUDO_REGISTER(__n128, "v0", "=w"));
                }
                break;
              }
            }
            else {
              if (v13 >= v7) {
                v13 %= v7;
              }
              if (v13 != v10) {
                break;
              }
            }
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
      }
    }
  }
LABEL_38:
  if ((v19_.v19[0] & 1) != 0 && v19_.v20 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt3(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (_QWORD)(v19_.v20));
  }
  return result;
}

__int64 game_hub_e2a4a0(__int64 a1, int a2, __int64* a3, int* a4,
                        unsigned __int64 a5)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  float v16;
  __int64 result;
  int* v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64* v24;
  unsigned __int8* v25;
  char* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;

  v5 = *(_QWORD*)(a1 + 24LL * a2 + 8);
  v6 = *(_QWORD*)(a1 + 24LL * a2 + 16);
  if (v6 == v5) {
    return 0;
  }
  v7 = (v6 - v5) >> 5;
  v8 = 0;
  v9 = *(_QWORD*)(a1 + 24LL * a2 + 8);
  do {
    v10 = *(_DWORD*)(v9 + 28);
    v9 += 32;
    v8 += v10;
  } while (v9 != v6);
  if (v8 == 0) {
    return 0;
  }
  v11 = 0;
  v12 = 0;
  v13 = GameData_212c6a0[0];
  v14 = (1812433253 * (a5 ^ (a5 >> 30)) + 1) ^
        ((1812433253 * (a5 ^ (a5 >> 30)) + 1) << 11);
  v15 = 1812433253LL *
            (*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 312LL) ^
             (*(_QWORD*)(*(_QWORD*)GameData_212c6a0[0] + 312LL) >> 30)) +
        2;
  v16 = vcvts_n_f32_u64((unsigned __int16)(v14 ^ ((unsigned int)v14 >> 8) ^
                                           v15 ^ (v15 >> 19)),
                        0x10u) *
        (float)v8;
  while (1) {
    v12 += *(_DWORD*)(v5 + 28 + v11);
    if (v16 < (float)v12) {
      break;
    }
    v11 += 32;
    if (--v7 == 0) {
      return 0;
    }
  }
  v18 = a4;
  v19 = (__int64*)(v5 + (v11 & 0xFFFFFFFE0LL));
  v20 = *(unsigned __int8*)v19;
  v21 = v19[1];
  if ((v20 & 1) != 0) {
    v22 = v19[1];
  }
  else {
    v22 = v20 >> 1;
  }
  v23 = GameData_2167718;
  if ((GameData_2167710[0] & 1) == 0) {
    v23 = (unsigned __int64)(unsigned __int8)GameData_2167710[0] >> 1;
  }
  if (v22 != v23 ||
      ((v24 = a3, (v20 & 1) == 0) ? (v25 = (unsigned __int8*)v19 + 1)
                                  : (v25 = (unsigned __int8*)v19[2]),
       (GameData_2167710[0] & 1) != 0 ? (v26 = (char*)GameData_2167720)
                                      : (v26 = &GameData_2167710[1]),
       result = memcmp_alt1(v25, v26, v22), a3 = v24, a4 = v18,
       (_DWORD)result != 0)) {
    if (a3 != v19) {
      if ((*(_BYTE*)a3 & 1) != 0) {
        if ((v20 & 1) != 0) {
          v29 = v19[2];
        }
        else {
          v29 = (__int64)v19 + 1;
        }
        SpineModel_64dde0_alt1(a3, v29, v22);
      }
      else {
        if ((v20 & 1) == 0) {
          v27 = *v19;
          v28 = v19[2];
          a3[1] = v19[1];
          a3[2] = v28;
          *a3 = v27;
          goto LABEL_33;
        }
        GameRoutine_64df20(a3, v19[2], v21);
      }
      a4 = v18;
    }
  LABEL_33:
    v30 = *((_DWORD*)v19 + 6);
    *a4 = v30;
    if (v30 >= 1) {
      v31 = 1812433253LL * (*(_QWORD*)(*(_QWORD*)v13 + 312LL) ^
                            (*(_QWORD*)(*(_QWORD*)v13 + 312LL) >> 30)) +
            2;
      if (vcvts_n_f32_u64((unsigned __int16)(v14 ^ ((unsigned int)v14 >> 8) ^
                                             v31 ^ (v31 >> 19)),
                          0x10u) <
          (float)((float)(unsigned int)GameRoutine_9db7e0(0x19u) /
                  0x1.9000000000000p+6f)) {
        ++*v18;
      }
    }
    return 1;
  }
  return result;
}

__attribute__((swiftcall)) void game_hub_ee2c50(PSEUDO_X8 x8_, __int64 a1,
                                                unsigned __int8* a2, __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  unsigned int v9;
  __int64 v10;
  __n128 result;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  struct {
    __int64 v15;
    __int64 v16;
  } v15_;
  _QWORD v17[3];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LocatorDispos_db2180((void*)(v17),
                       (unsigned __int8*)(*(_QWORD*)GameData_212dbb8[0] + 40LL),
                       a2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v8 = GameData_212ebb0[0];
  v9 = GameRoutine_f71d40(*GameData_212ebb0[0], a3, (__int64)v17),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v10 = game_hub_f71fc0(*v8, a3, (__int64)v17),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  FastTravelManager_ee05e0((void*)(&v15_.v15), v10, a3, a2, v9,
                           (unsigned int)v10, a1 + 16, 1),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v15_.v15 != 0) {
    v12 = v15_.v16;
    *a4 = v15_.v15;
    a4[1] = v12;
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        result = std___1___shared_weak_count___release_weak_alt1(v12);
      }
    }
  }
  else {
    v13 = v15_.v16;
    if (v15_.v16 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      result = std___1___shared_weak_count___release_weak_alt1(v13);
    }
    *a4 = 0;
    a4[1] = 0;
  }
  if ((v17[0] & 1) != 0 && v17[2] != 0) {
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v14 = 56;
    }
    {
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (_QWORD)(v17[2])),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      return;
    }
  }
  {
    result;
    return;
  }
}

__n128 game_hub_efa9a0(__int64 a1, char a2, __n128 result)
{

#pragma clang fp contract(off)
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
  float v15;
  __int64 v16;
  __n128 v17;
  int v18;
  __int64 v19;
  float v20;
  float v21;
  __int64 v22;
  _QWORD v23[2];
  __int64 v24[2];
  _QWORD v25[2];
  __int64 v26[2];
  _QWORD v27[2];
  __int64 v28[2];
  __int64 v29[2];

  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v6 = *(_QWORD*)(*GameData_212d458[0] + 72);
  v5 = *(_QWORD*)(*GameData_212d458[0] + 80);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
  }
  v8 = *(_QWORD*)(a1 + 24);
  v7 = *(_QWORD*)(a1 + 32);
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  if (v5 != 0 && *(_QWORD*)(v5 + 8) != -1) {
    v29[0] = v6;
    v29[1] = v5;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_efaca0(a1, v29, result),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = std___1___shared_weak_count___release_weak_alt1(v5),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v7 != 0 && *(_QWORD*)(v7 + 8) != -1) {
    v28[0] = v8;
    v28[1] = v7;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    GameRoutine_efaca0(a1, v28, result),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    result = std___1___shared_weak_count___release_weak_alt1(v7),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  if (v5 == 0 || *(_QWORD*)(v5 + 8) == -1) {
    if (v7 == 0) {
      goto LABEL_25;
    }
    goto LABEL_24;
  }
  if (v7 == 0) {
    return std___1___shared_weak_count___release_weak_alt1(v5);
  }
  if (*(_QWORD*)(v7 + 8) == -1) {
    goto LABEL_24;
  }
  v9 = std___1___shared_weak_count_lock(v5),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v9 != 0) {
    v10 = v6;
  }
  else {
    v10 = 0;
  }
  v11 = std___1___shared_weak_count_lock(v7),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v12 = v11;
  v27[0] = v10;
  v27[1] = v9;
  if (v11 != 0) {
    v13 = v8;
  }
  else {
    v13 = 0;
  }
  v22 = v13;
  if (v9 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v14 = *(_QWORD*)(v8 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v14 = *(_QWORD*)(v8 + 24);
  }
  v26[0] = v10;
  v26[1] = v9;
  v15 = game_hub_efb160(v11, v26),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v17 = GameRoutine_efb030(a1, v27, v14, v15),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v9),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v17 = std___1___shared_weak_count___release_weak_alt1(v9),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v18 = *(_DWORD*)(v8 + 184);
  if ((a2 & 1) == 0 && (v18 & 2) != 0) {
    if (v12 == 0) {
      goto LABEL_47;
    }
    goto LABEL_45;
  }
  if ((v18 & 8) == 0) {
    v25[0] = v22;
    v25[1] = v12;
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                                memory_order_relaxed);
    }
    v19 = *(_QWORD*)(v6 + 24);
    v24[0] = v10;
    v24[1] = v9;
    if (v9 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                memory_order_relaxed);
      v20 = game_hub_efb160(v16, v24),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      GameRoutine_efb030(a1, v25, v19, v20),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v17 = std___1___shared_weak_count___release_weak_alt1(v9),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v12 == 0) {
        goto LABEL_47;
      }
    }
    else {
      v21 = game_hub_efb160(v16, v24),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v17 = GameRoutine_efb030(a1, v25, v19, v21),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v12 == 0) {
        goto LABEL_47;
      }
    }
    goto LABEL_44;
  }
  v23[0] = v22;
  v23[1] = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                              memory_order_relaxed);
    game_hub_efb2d0_alt1(a1, v23, *(_QWORD*)(v6 + 24)),
        v16 = COERCE_AS(__typeof__(v16),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LABEL_44:
    v17 = std___1___shared_weak_count___release_weak_alt1(v12),
    v16 = COERCE_AS(__typeof__(v16),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  LABEL_45:
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
          v12, *(long double*)&v17),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v17 = std___1___shared_weak_count___release_weak_alt1(v12),
      v16 = COERCE_AS(__typeof__(v16),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  LABEL_47:
    if (v9 != 0) {
      goto LABEL_48;
    }
    goto LABEL_24;
  }
  v17 = game_hub_efb2d0_alt1(a1, v23, *(_QWORD*)(v6 + 24)),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  if (v9 != 0) {
  LABEL_48:
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v9 + 16LL))(
          v9, *(long double*)&v17),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      std___1___shared_weak_count___release_weak_alt1(v9),
          v16 = COERCE_AS(__typeof__(v16),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
LABEL_24:
  result = std___1___shared_weak_count___release_weak_alt1(v7),
  v16 = COERCE_AS(__typeof__(v16),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
LABEL_25:
  if (v5 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v5);
  }
  return result;
}

float game_hub_efb160(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int128 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (game_ProcFadeView_instance_ != 0) {
    v3 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160);
    }
    else {
      v4 = *(_OWORD*)(v3 + 208);
    }
    if (*((float*)&v4 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(
                        v3 + 160, *((float*)&v4 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return 0x1.88b2f80000000p+11f;
    }
  }
  v6 = a2[1];
  if (v6 == 0) {
    return 0x1.2d97c80000000p+2f;
  }
  v7 = *a2;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v8 = std___1___shared_weak_count_lock(v6);
  if (v8 != 0) {
    if (v7 != 0) {
      v9 = *(_QWORD*)(v7 + 24);
      if (*(_BYTE*)(v9 + 272) == 1) {
        v10 = *(_QWORD*)(v9 + 264);
        v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 344LL) + 352LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v12 = v8;
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
        std___1___shared_weak_count___release_weak_alt1(v6);
        if (v11 == v10) {
          return 0x1.921fb60000000p+2f;
        }
        return 0x1.2d97c80000000p+2f;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v13 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
  }
  std___1___shared_weak_count___release_weak_alt1(v6);
  return 0x1.2d97c80000000p+2f;
}

__n128 game_hub_efb2d0(__int64 a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float32x4_t* v10;
  float32x4_t v11;
  unsigned __int64 v12;
  int v13;
  __int128 v14;
  __int128 v15;
  __int64 v16;
  __int64 v17[2];

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = a2[1];
  v17[0] = *a2;
  v17[1] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    v5 = GameRoutine_efb460(a1, v17),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    result = std___1___shared_weak_count___release_weak_alt1(v3);
    if (v5 == 0) {
      return result;
    }
  }
  else {
    v5 = GameRoutine_efb460(a1, v17),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v5 == 0) {
      return result;
    }
  }
  v7 = *(_QWORD*)(v5 + 8);
  if (v7 != 0) {
    v8 = std___1___shared_weak_count_lock(v7),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v8 != 0) {
      if (*(_QWORD*)v5 != 0) {
        v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 24LL) + 24LL);
        if (a3 != 0) {
          result = *(__n128*)(*(_QWORD*)(a3 + 16) + 560LL);
          v10 = *(float32x4_t**)(*(_QWORD*)(a3 + 8) + 240LL);
          if (v10 != nullptr) {
            v11 = v10[3];
          }
          else {
            LODWORD(v12) = 0;
            *((float*)&v12 + 1) = *(float*)(a3 + 544) * 0x1.99999a0000000p-1f;
            v11 = vaddq_f32(result, COERCE_AS(float32x4_t, v12));
          }
          LANES128(result).n128_u32[3] = 0;
          LANES128(v11).n128_u32[3] = 0;
        }
        else {
          result = (__typeof__(result)){0};
          v11 = (__typeof__(v11)){0};
        }
        v13 = *(unsigned __int8*)(v9 + 336);
        *(_QWORD*)(v9 + 272) = a3;
        if (v13 == 1) {
          *(_QWORD*)(v9 + 288) = LANES128(result).n128_u64[0];
          *(_QWORD*)(v9 + 304) = LANES128(v11).n128_u64[0];
          v14 = *(_OWORD*)(v9 + 288);
          v15 = *(_OWORD*)(v9 + 304);
          *((_QWORD*)&v14 + 1) = LANES128(result).n128_u32[2];
          *((_QWORD*)&v15 + 1) = LANES128(v11).n128_u32[2];
          *(_OWORD*)(v9 + 288) = v14;
          *(_OWORD*)(v9 + 304) = v15;
        }
        else {
          *(__n128*)(v9 + 288) = result;
          *(float32x4_t*)(v9 + 304) = v11;
          *(_BYTE*)(v9 + 336) = 1;
        }
        *(_DWORD*)(v9 + 320) = 1065353216;
        *(_DWORD*)(v5 + 24) |= 4u;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v16 = v8;
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak_alt1(v16);
      }
    }
  }
  return result;
}

float game_hub_efc240(__int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int128 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if (game_ProcFadeView_instance_ != 0) {
    v3 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160);
    }
    else {
      v4 = *(_OWORD*)(v3 + 208);
    }
    if (*((float*)&v4 + 3) == 0x1.0000000000000p+0f &&
        LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                     (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(
                        v3 + 160, *((float*)&v4 + 3)))
                .n128_f32[3] == 0x1.0000000000000p+0f) {
      return 0x1.88b2f80000000p+11f;
    }
  }
  v6 = a2[1];
  if (v6 == 0) {
    return 0x1.921fb60000000p+1f;
  }
  v7 = *a2;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                            memory_order_relaxed);
  v8 = std___1___shared_weak_count_lock(v6);
  if (v8 != 0) {
    if (v7 != 0) {
      v9 = *(_QWORD*)(v7 + 24);
      if (*(_BYTE*)(v9 + 272) == 1) {
        v10 = *(_QWORD*)(v9 + 264);
        v11 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 8) + 344LL) + 352LL);
        if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v12 = v8;
          (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
          std___1___shared_weak_count___release_weak_alt1(v12);
        }
        std___1___shared_weak_count___release_weak_alt1(v6);
        if (v11 == v10) {
          return 0x1.2d97c80000000p+2f;
        }
        return 0x1.921fb60000000p+1f;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v13 = v8;
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak_alt1(v13);
    }
  }
  std___1___shared_weak_count___release_weak_alt1(v6);
  return 0x1.921fb60000000p+1f;
}

void game_hub_efc3b0(__int64 a1, __int64* a2, char a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64 v5;
  __int64 v9;
  __n128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  float v15;
  float32x4_t** v16;
  __int64 v17;
  float v18;
  float v19;
  float v20;
  float v21;
  __int64 v22;
  atomic_ullong* v23;
  __int64 v24;
  unsigned __int64 v25;
  float32x4_t* v26;
  float32x4_t v27;
  unsigned __int64 v28;
  float32x4_t v29;
  __int128 v30;
  int v31;
  float v32;
  float v33;
  float32x4_t* v34;
  __int64 v35;
  struct {
    unsigned __int64 v36;
    __int64 v37;
  } v36_;

  v5 = a2[1];
  if (v5 != 0) {
    v9 = std___1___shared_weak_count_lock(v5);
    if (v9 != 0) {
      v11 = *a2;
      v12 = v9;
      if (*a2 != 0) {
        v13 = *(_QWORD*)(v11 + 16);
        if (v13 == 0 || (v14 = *(_BYTE**)(v13 + 40)) == nullptr ||
            (v15 = 0x0.0p+0f, *v14 == 0)) {
          v15 = 0x1.4000000000000p+3f;
        }
        v16 = (float32x4_t**)GameData_212dc38[0];
        v17 = *(_QWORD*)(v11 + 24);
        v18 = *(float*)(v17 + 528);
        v19 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 104LL) +
              -0x1.8000000000000p+1f;
        v20 = -v15;
        if (v15 >= v19) {
          v15 = *(float*)(*(_QWORD*)GameData_212dc38[0] + 104LL) +
                -0x1.8000000000000p+1f;
        }
        if (v19 < v20) {
          v15 = v20;
        }
        v21 = v15 + 0x1.8000000000000p+1f;
        v22 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, 112,
                                                  16, 0);
        *(_QWORD*)(v22 + 8) = 0;
        v23 = (atomic_ullong*)(v22 + 8);
        *(_QWORD*)(v22 + 16) = 0;
        *(_QWORD*)(v22 + 96) = 0;
        *(_QWORD*)(v22 + 104) = 0;
        v24 = v22;
        *(_QWORD*)v22 = GameData_1ff0650;
        *(_QWORD*)(v22 + 32) = 0;
        v25 = v22 + 32;
        *(_QWORD*)(v22 + 80) = 0;
        *(_QWORD*)(v22 + 88) = 0;
        *(_QWORD*)(v22 + 56) = 0;
        *(_QWORD*)(v22 + 64) = 0;
        *(_QWORD*)(v22 + 40) = 0;
        *(_QWORD*)(v22 + 48) = 0;
        *(_QWORD*)(v22 + 72) = 0x3F99999A3F800000LL;
        *(_DWORD*)(v22 + 80) = 1109393408;
        v26 = *(float32x4_t**)(*(_QWORD*)(v17 + 8) + 240LL);
        if (v26 != nullptr) {
          v27 = v26[3];
        }
        else {
          LODWORD(v28) = 0;
          *((float*)&v28 + 1) = *(float*)(v17 + 544) * 0x1.99999a0000000p-1f;
          v27 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v17 + 16) + 560LL),
                          COERCE_AS(float32x4_t, v28));
        }
        *(float*)(v22 + 64) = v21;
        *(_BYTE*)(v22 + 68) = 1;
        *(_BYTE*)(v22 + 96) = 1;
        v29 = vaddq_f32(v27, COERCE_AS(float32x4_t, GameData_1a82e70));
        *(_QWORD*)(v22 + 32) = LANES128(v29).n128_u64[0];
        v30 = *(_OWORD*)(v22 + 32);
        *((_QWORD*)&v30 + 1) = LANES128(v29).n128_u32[2];
        *(float*)(v22 + 52) = v18 + 0x1.0000000000000p+0f;
        *(_OWORD*)(v22 + 32) = v30;
        if ((a4 & 0x100000000LL) != 0) {
          *(_DWORD*)(v22 + 72) = a4;
        }
        if ((a3 & 1) == 0 && (*(_BYTE*)(v11 + 184) & 2) != 0) {
          v33 = *(float*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 16LL) +
                                     488LL) +
                          36LL);
          *(_BYTE*)(v22 + 92) = 1;
          *(_DWORD*)(v22 + 56) = 1097859072;
          v31 = 2;
          *(float*)(v22 + 88) = v33 * 0x1.ca5dc20000000p+5f;
          v32 = 0x0.0p+0f;
        }
        else {
          *(_DWORD*)(v22 + 56) = 1106247680;
          v31 = 1;
          v32 = v18 * 0x1.99999a0000000p-1f;
        }
        *(float*)(v22 + 48) = v32;
        *(_DWORD*)(a1 + 68) = v31;
        v34 = *v16;
        v36_.v36 = v25;
        v36_.v37 = v24;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                  memory_order_relaxed);
        game_zview_d20430(v34, &v36_.v36, 1);
        v35 = v36_.v37;
        if (v36_.v37 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v36_.v37 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
          v10 = std___1___shared_weak_count___release_weak_alt1(v35);
        }
        if (atomic_fetch_add(v23, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v24 + 16LL))(
              v24, *(long double*)&v10);
          v10 = std___1___shared_weak_count___release_weak_alt1(v24);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v12 + 16LL))(
            v12, *(long double*)&v10);
        std___1___shared_weak_count___release_weak_alt1(v12);
      }
    }
  }
}

void game_hub_efc680(__int64 a1, __int64* a2, __int64 a3)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 v7;
  __n128 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64 v15;
  float32x4_t* v16;
  float32x4_t v17;
  unsigned __int64 v18;
  float32x4_t v19;
  __int128 v20;
  float32x4_t* v21;
  __int64 v22;
  struct {
    __int64 v23;
    __int64 v24;
  } v23_;

  v4 = a2[1];
  if (v4 != 0) {
    v7 = std___1___shared_weak_count_lock(v4);
    if (v7 != 0) {
      v9 = *a2;
      v10 = v7;
      if (*a2 != 0 && *(_DWORD*)(a1 + 68) != 4) {
        *(_BYTE*)(a1 + 145) = 1;
        v11 = *(_QWORD*)(v9 + 24);
        v12 = *(float*)(v11 + 528);
        v13 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
        *(_QWORD*)(v13 + 8) = 0;
        v14 = (atomic_ullong*)(v13 + 8);
        *(_QWORD*)(v13 + 16) = 0;
        *(_QWORD*)(v13 + 96) = 0;
        *(_QWORD*)(v13 + 104) = 0;
        v15 = v13;
        *(_QWORD*)v13 = GameData_1ff0650;
        *(_QWORD*)(v13 + 32) = 0;
        *(_QWORD*)(v13 + 80) = 0;
        *(_QWORD*)(v13 + 88) = 0;
        *(_QWORD*)(v13 + 56) = 0;
        *(_QWORD*)(v13 + 64) = 0;
        *(_QWORD*)(v13 + 40) = 0;
        *(_QWORD*)(v13 + 48) = 0;
        *(_QWORD*)(v13 + 72) = 0x3F99999A3F800000LL;
        *(_DWORD*)(v13 + 80) = 1109393408;
        v16 = *(float32x4_t**)(*(_QWORD*)(v11 + 8) + 240LL);
        if (v16 != nullptr) {
          v17 = v16[3];
        }
        else {
          LODWORD(v18) = 0;
          *((float*)&v18 + 1) = *(float*)(v11 + 544) * 0x1.99999a0000000p-1f;
          v17 = vaddq_f32(*(float32x4_t*)(*(_QWORD*)(v11 + 16) + 560LL),
                          COERCE_AS(float32x4_t, v18));
        }
        v19 = vaddq_f32(v17, COERCE_AS(float32x4_t, GameData_1a83040));
        *(_QWORD*)(v13 + 32) = LANES128(v19).n128_u64[0];
        v20 = *(_OWORD*)(v13 + 32);
        *((_QWORD*)&v20 + 1) = LANES128(v19).n128_u32[2];
        *(_DWORD*)(v13 + 64) = 1077936128;
        *(_BYTE*)(v13 + 68) = 1;
        *(_DWORD*)(v13 + 84) = -1097229926;
        *(float*)(v13 + 52) = v12 + 0x1.4ccccc0000000p+0f;
        *(_WORD*)(v13 + 60) = 257;
        *(_OWORD*)(v13 + 32) = v20;
        if ((a3 & 0x100000000LL) != 0) {
          *(_DWORD*)(v13 + 72) = a3;
        }
        *(_DWORD*)(v13 + 48) = 0;
        *(_DWORD*)(v13 + 56) = 1106247680;
        *(_DWORD*)(a1 + 68) = 4;
        v23_.v23 = v13 + 32;
        v23_.v24 = v13;
        v21 = (float32x4_t*)GameData_21f3cb0;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                                  memory_order_relaxed);
        game_zview_d20430(v21, (unsigned __int64*)&v23_.v23, 1);
        v22 = v23_.v24;
        if (v23_.v24 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
          v8 = std___1___shared_weak_count___release_weak_alt1(v22);
        }
        if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64, long double))(*(_QWORD*)v15 + 16LL))(
              v15, *(long double*)&v8);
          v8 = std___1___shared_weak_count___release_weak_alt1(v15);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v10 + 16LL))(
            v10, *(long double*)&v8);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
    }
  }
}

__attribute__((swiftcall)) void game_hub_efca60(PSEUDO_X8 x8_, __int64 a1,
                                                _QWORD* a2, signed __int64 a3)
{
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64* v5;
  __int64 v6;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _DWORD* v16;
  signed __int64 v17;
  __int64 v18;
  _DWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  __int64 v26;
  const char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  struct {
    _QWORD* v49;
    __int64 v50;
  } v49_;

  v5 = GameData_212d458[0];
  v6 = *GameData_212d458[0];
  if (*GameData_212d458[0] == 0) {
  LABEL_81:
    *a4 = 0;
    a4[1] = 0;
    return;
  }
  if (a3 != 15) {
    if (a3 < 4) {
    LABEL_66:
      if (a3 != 0) {
        v40 = *(_QWORD**)(*v5 + 24);
        v41 = *(_QWORD**)(*v5 + 32);
        while (v40 != v41) {
          v42 = *v40;
          v43 = *(unsigned __int8*)(*v40 + 320LL);
          v44 = *(_QWORD*)(*v40 + 328LL);
          if ((v43 & 1) == 0) {
            v44 = v43 >> 1;
          }
          if (a3 == v44) {
            v45 = (v43 & 1) != 0 ? *(_QWORD*)(v42 + 336) : v42 + 321;
            if (memcmp_alt2((__int64)a2, v45, a3) == 0) {
              v46 = v40[1];
              if (v46 != 0) {
                v47 = v40[1];
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 16),
                                          1u, memory_order_relaxed);
                v48 = std___1___shared_weak_count_lock_alt1(v47);
                std___1___shared_weak_count___release_weak_alt2(v46);
                if (v48 != 0) {
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 16),
                                            1u, memory_order_relaxed);
                  std___1___shared_weak_count___release_weak_alt2(v48);
                  *a4 = v42;
                  a4[1] = v48;
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 16),
                                            1u, memory_order_relaxed);
                  if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
                    std___1___shared_weak_count___release_weak_alt2(v48);
                  }
                  return;
                }
              }
              goto LABEL_81;
            }
          }
          v40 += 2;
        }
      }
      goto LABEL_81;
    }
  LABEL_21:
    v16 = (_DWORD*)((char*)a2 + a3);
    v17 = a3;
    v18 = (__int64)a2;
    while (1) {
      v19 = (_DWORD*)memchr_alt1(v18, 80, v17 - 3);
      if (v19 == nullptr) {
        goto LABEL_66;
      }
      if (*v19 == 1598310736) {
        if (v19 == v16 || a2 != (_QWORD*)v19) {
          goto LABEL_66;
        }
        v20 = *(_QWORD*)(a1 + 32);
        if (v20 != 0) {
          v21 = *(_QWORD*)(a1 + 24);
          v22 = *(_QWORD*)(a1 + 32);
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                                    memory_order_relaxed);
          v23 = std___1___shared_weak_count_lock_alt1(v22);
          std___1___shared_weak_count___release_weak_alt2(v20);
          if (v23 != 0) {
            if (v21 != 0) {
              if ((v24 = *(_QWORD*)(v21 + 16), v25 = *(const char**)(v24 + 8),
                   a3 == strlen_alt1(v25)) &&
                      memcmp_alt2((__int64)a2, (__int64)v25, a3) == 0 ||
                  (v26 = *(_QWORD*)(*(_QWORD*)(v24 + 24) + 1784LL)) != 0 &&
                      (v27 = *(const char**)(v26 + 8),
                       a3 == strlen_alt1(v27)) &&
                      memcmp_alt2((__int64)a2, (__int64)v27, a3) == 0) {
                *a4 = v21;
                a4[1] = v23;
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 16),
                                          1u, memory_order_relaxed);
                if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
                  std___1___shared_weak_count___release_weak_alt2(v23);
                }
                return;
              }
            }
            if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
              std___1___shared_weak_count___release_weak_alt2(v23);
            }
          }
        }
        game_hub_cb8f20_alt2((void*)(&v49_.v49), *v5, (__int64)a2, a3);
        v28 = (__int64)v49_.v49;
        v29 = v49_.v50 - (_QWORD)v49_.v49;
        if (v49_.v50 - (_QWORD)v49_.v49 == 16) {
          v30 = v49_.v49[1];
          if (v30 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 16), 1u,
                                      memory_order_relaxed);
            std___1___shared_weak_count___release_weak_alt2(v30);
            v28 = (__int64)v49_.v49;
            v31 = v49_.v49[1];
            *a4 = *v49_.v49;
            a4[1] = v31;
            if (v31 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 16), 1u,
                                        memory_order_relaxed);
            }
          }
          else {
            *a4 = *v49_.v49;
            a4[1] = 0;
          }
        }
        else if (v49_.v49 == nullptr) {
          goto LABEL_66;
        }
        v37 = v49_.v50;
        if (v28 == v49_.v50) {
          goto LABEL_62;
        }
        do {
          v38 = *(_QWORD*)(v37 - 8);
          if (v38 != 0) {
            std___1___shared_weak_count___release_weak_alt2(v38);
          }
          v37 -= 16;
        } while (v37 != v28);
        v49_.v50 = v28;
        v28 = (__int64)v49_.v49;
        if (v49_.v49 != nullptr) {
        LABEL_62:
          v39 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free_alt4(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v39, v28);
        }
        if (v29 == 16) {
          return;
        }
        goto LABEL_66;
      }
      v18 = (__int64)v19 + 1;
      v17 = (signed __int64)v16 - v18;
      if ((__int64)v16 - v18 < 4) {
        goto LABEL_66;
      }
    }
  }
  if (*a2 == 0x82E3AC83E39783E3LL &&
      *(_QWORD*)((char*)a2 + 7) == 0xBC83E3A483E3A482LL) {
    v32 = *(_QWORD*)(v6 + 80);
    if (v32 != 0) {
      v33 = *(_QWORD*)(v6 + 72);
      v34 = *(_QWORD*)(v6 + 80);
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v32 + 16), 1u,
                                memory_order_relaxed);
      v35 = std___1___shared_weak_count_lock_alt1(v34);
      std___1___shared_weak_count___release_weak_alt2(v32);
      if (v35 != 0 && v33 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                  memory_order_relaxed);
        std___1___shared_weak_count___release_weak_alt2(v35);
        *a4 = v33;
        a4[1] = v35;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 16), 1u,
                                  memory_order_relaxed);
        goto LABEL_49;
      }
      if (v35 != 0) {
      LABEL_49:
        if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v35 + 16LL))(v35);
          std___1___shared_weak_count___release_weak_alt2(v35);
        }
        if (v33 != 0) {
          return;
        }
      }
    }
  }
  if (*a2 != 0x82E3AF82E3A282E3LL ||
      *(_QWORD*)((char*)a2 + 7) != 0x8885E5B982E3BB82LL) {
    goto LABEL_21;
  }
  v12 = *(_QWORD*)(a1 + 32);
  if (v12 == 0) {
    goto LABEL_21;
  }
  v13 = *(_QWORD*)(a1 + 24);
  v14 = *(_QWORD*)(a1 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 16), 1u,
                            memory_order_relaxed);
  v15 = std___1___shared_weak_count_lock_alt1(v14);
  std___1___shared_weak_count___release_weak_alt2(v12);
  if (v15 == 0) {
    goto LABEL_21;
  }
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
    std___1___shared_weak_count___release_weak_alt2(v15);
    *a4 = v13;
    a4[1] = v15;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt2(v15);
  }
  if (v13 == 0) {
    goto LABEL_21;
  }
}

__attribute__((swiftcall)) void game_hub_efcf80(PSEUDO_X8 x8_, char* a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  char* v4;
  __int64* v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  int v10;
  char v11;
  char* v12;
  int v13;
  __int64 v14;
  char* v15;
  unsigned int i;
  __int64 v17;
  __int64 v18;
  __int64 result;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v25;
  char* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  char* v30;
  char* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;

  v4 = a1 + 1;
  v5 = msg_MessageManager_instance__ptr[0];
  if ((*a1 & 1) != 0) {
    v6 = *((char**)a1 + 2);
  }
  else {
    v6 = a1 + 1;
  }
  v7 = Registration_a4f6c0(*msg_MessageManager_instance__ptr[0], v6);
  if ((*(_BYTE*)v7 & 1) != 0) {
    v8 = *(_QWORD*)(v7 + 16);
  }
  else {
    v8 = v7 + 1;
  }
  if ((*a1 & 1) != 0) {
    v9 = *((char**)a1 + 2);
  }
  else {
    v9 = a1 + 1;
  }
  v10 = Registration_a4fa80(*v5, v8, v9);
  v11 = *a1;
  v12 = *((char**)a1 + 2);
  v13 = v10;
  v14 = *v5;
  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  if ((v11 & 1) != 0) {
    v15 = v12;
  }
  else {
    v15 = a1 + 1;
  }
  if ((unsigned int)GameRoutine_a51280(v14, v15) - 1 > 2) {
    if ((*a1 & 1) != 0) {
      v30 = *((char**)a1 + 2);
    }
    else {
      v30 = v4;
    }
    result = Registration_a4da40(*v5, v30);
    if ((result & 1) != 0) {
      v31 = (*a1 & 1) != 0 ? *((char**)a1 + 2) : v4;
      result = Manager_a51640(*v5, v31, v31);
      if ((result & 1) != 0) {
        v32 = (_QWORD*)a2[1];
        if ((unsigned __int64)v32 >= a2[2]) {
          result = Manager_66cc20(a2, a1);
        }
        else if ((*a1 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(a2[1], *((_QWORD*)a1 + 2),
                                             *((_QWORD*)a1 + 1));
          result = (__int64)(v32 + 3);
        }
        else {
          v33 = *(_QWORD*)a1;
          v34 = *((_QWORD*)a1 + 2);
          result = (__int64)(v32 + 3);
          v32[1] = *((_QWORD*)a1 + 1);
          v32[2] = v34;
          *v32 = v33;
        }
        a2[1] = result;
      }
    }
  }
  else {
    for (i = v13 + 1;; ++i) {
      if ((*(_BYTE*)v7 & 1) != 0) {
        v18 = *(_QWORD*)(v7 + 16);
      }
      else {
        v18 = v7 + 1;
      }
      result = Registration_a4f800(*v5, v18, i);
      v20 = *(unsigned __int8*)result;
      v21 = *(_QWORD*)(result + 8);
      if ((v20 & 1) == 0) {
        v21 = v20 >> 1;
      }
      if (v21 == 0) {
        break;
      }
      v22 = result;
      v23 = (v20 & 1) != 0 ? *(_QWORD*)(result + 16) : result + 1;
      result = GameRoutine_a51280(*v5, v23);
      if ((unsigned int)result <= 0x13 && ((1 << result) & 0x8000E) != 0) {
        break;
      }
      if ((*(_BYTE*)v22 & 1) != 0) {
        v25 = *(_QWORD*)(v22 + 16);
      }
      else {
        v25 = v22 + 1;
      }
      if ((*a1 & 1) != 0) {
        v26 = *((char**)a1 + 2);
      }
      else {
        v26 = v4;
      }
      if ((Manager_a51640(*v5, v25, v26) & 1) != 0) {
        v27 = (_QWORD*)a2[1];
        if ((unsigned __int64)v27 >= a2[2]) {
          v17 = Manager_66cc20(a2, v22);
        }
        else if ((*(_BYTE*)v22 & 1) != 0) {
          fw_text_String_CopyTerminated_alt1(a2[1], *(_QWORD*)(v22 + 16),
                                             *(_QWORD*)(v22 + 8));
          v17 = (__int64)(v27 + 3);
        }
        else {
          v28 = *(_QWORD*)v22;
          v29 = *(_QWORD*)(v22 + 16);
          v17 = (__int64)(v27 + 3);
          v27[1] = *(_QWORD*)(v22 + 8);
          v27[2] = v29;
          *v27 = v28;
        }
        a2[1] = v17;
      }
    }
  }
  {
    result;
    return;
  }
}

float32x4_t* game_hub_f2c8c0(__int64 a1)
{
  __int64 v1;
  __int128 v3;
  float v4;
  float32x4_t* result;
  __int64 v8;
  __int64 v9;
  float32x4_t v10;
  int16x4_t v11;
  float32x4_t v12;
  float32x4_t* v13;
  unsigned int v14;
  int16x4_t v15;
  unsigned __int64 v16;
  float32x4_t v17;
  float32x4_t* v18;
  int v19;
  __int64 v20;

  v1 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)&v3 = *(_QWORD*)(v1 + 176);
  v4 = *(float*)(v1 + 184);
  if (*(_BYTE*)(v1 + 976) != 1) {
    *(_BYTE*)(v1 + 976) = 1;
    *((_QWORD*)&v3 + 1) = LODWORD(v4);
    goto LABEL_11;
  }
  result = *(float32x4_t**)(a1 + 56);
  if (COERCE_FLOAT(*(_OWORD*)(v1 + 960)) != *(float*)&v3 ||
      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v1 + 960))) != *((float*)&v3 + 1) ||
      COERCE_FLOAT(*(_QWORD*)(v1 + 968)) != v4) {
    *(_QWORD*)(v1 + 960) = v3;
    v3 = *(_OWORD*)(v1 + 960);
    *((_QWORD*)&v3 + 1) = LODWORD(v4);
  LABEL_11:
    *(_OWORD*)(v1 + 960) = v3;
    GameRoutine_dfa900_alt1(v1);
    result = *(float32x4_t**)(a1 + 56);
  }
  v8 = *(_QWORD*)(v1 + 192);
  v9 = (*(_QWORD*)(v1 + 200) - v8) >> 2;
  if (v9 == 3) {
    LANES128(v10).n128_u64[0] = *(_QWORD*)v8;
    LANES128(v10).n128_u64[1] = *(unsigned int*)(v8 + 8);
  }
  else {
    v10 = (__typeof__(v10)){0};
    if (v9 == 1) {
      LANES128(v10).n128_u32[1] = *(_DWORD*)v8;
    }
  }
  if (LANES128(result[63]).n128_u8[0] != 1) {
    result[62] = v10;
    LANES128(result[63]).n128_u8[0] = 1;
    goto LABEL_22;
  }
  LANES64(v11).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(result[62], v10))).n64_u64[0];
  if ((LANES64(v11).n64_u8[0] & 1) == 0 || (LANES64(v11).n64_u8[2] & 1) == 0 ||
      (LANES64(v11).n64_u8[4] & 1) == 0) {
    LANES128(result[62]).n128_u64[0] = LANES128(v10).n128_u64[0];
    v12 = result[62];
    LANES128(v12).n128_u64[1] = LANES128(v10).n128_u32[2];
    result[62] = v12;
  LABEL_22:
    GameRoutine_dfa900_alt1(result);
    result = *(float32x4_t**)(a1 + 56);
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6150,
                            memory_order_acquire) &
       1) == 0) {
    v18 = result;
    v19 = __cxa_guard_acquire(&GameData_21a6150);
    result = v18;
    if (v19 != 0) {
      v20 = *((_QWORD*)GameData_212c548 + 1);
      *(_QWORD*)&GameData_21a6140 = *(_QWORD*)GameData_212c548;
      *((_QWORD*)&GameData_21a6140 + 1) = v20;
      __cxa_guard_release(&GameData_21a6150);
      result = v18;
    }
  }
  v13 = result + 64;
  if (LANES128(result[65]).n128_u8[0] != 1) {
    v16 = *((_QWORD*)&GameData_21a6140 + 1);
    LANES128(*(v13)).n128_u64[0] = GameData_21a6140;
    LANES128(result[64]).n128_u64[1] = v16;
    LANES128(result[65]).n128_u8[0] = 1;
    return (float32x4_t*)GameRoutine_dfa900_alt1(result);
  }
  v14 = DWORD2(GameData_21a6140);
  LANES64(v15).n64_u64[0] =
      LANES64_OF(
          vmovn_s32(vceqq_f32(*v13, COERCE_AS(float32x4_t, GameData_21a6140))))
          .n64_u64[0];
  if ((LANES64(v15).n64_u8[0] & 1) == 0 || (LANES64(v15).n64_u8[2] & 1) == 0 ||
      (LANES64(v15).n64_u8[4] & 1) == 0) {
    LANES128(result[64]).n128_u64[0] = GameData_21a6140;
    v17 = result[64];
    LANES128(v17).n128_u64[1] = v14;
    result[64] = v17;
    return (float32x4_t*)GameRoutine_dfa900_alt1(result);
  }
  return result;
}

void game_hub_f2e8e0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  _QWORD* v13;
  __n128 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  int v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  int v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  struct {
    __int64* v41;
    __int64* v42;
    __int64 v43;
  } v41_;
  __int64 v44;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *GameData_212ebc0[0];
  if ((*(_BYTE*)(*GameData_212ebc0[0] + 161) & 1) == 0) {
    *(_BYTE*)(v2 + 161) = 1;
    v3 = *(_DWORD*)(v2 + 176);
    *(_DWORD*)(v2 + 176) = v3 + 1;
    if (v3 == 0) {
      (**(void (***)(__int64))(v2 + 168))(v2 + 168),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    GameRoutine_d799f0(v2),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v41_.v41 = nullptr;
  v4 = *(_QWORD*)(a1 + 152);
  v5 = GameData_212c878[0];
  if (v4 != 0) {
    v6 = *(unsigned __int16*)(v4 + 16);
    HIDWORD(v41_.v41) = 1;
    v7 = *GameData_212c878[0];
    LOWORD(v41_.v41) = v6;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) + 8 * v6) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
      nn_os_UnlockMutex(&game_g_random_mutex),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
      HIDWORD(v41_.v41) =
          (16 * ((_WORD)v12 -
                 1000 * (unsigned __int16)((v12 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v13 = GameRoutine_eb7720((unsigned __int16*)&v41_.v41),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v15 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)(a1 + 160) = v13;
  v16 = (__int64)v13;
  if ((((0x10000000000LL << *(_BYTE*)(v15 + 72)) |
        (1LL << *(_BYTE*)(v15 + 73))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v17 = *(unsigned __int16*)(v15 + 16);
    v44 = 0x100000000LL;
    v18 = *v5;
    LOWORD(v44) = v17;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v18 + 64) + 8 * v17) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v19 = game_map_MapRandom_instance__ptr[0];
      v20 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v22 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v19 + 1) = v20;
      v23 = (v22 >> 8) ^ (v21 >> 19) ^ v22 ^ v21;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19) = v21;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v19 + 4) = v23;
      v14 = nn_os_UnlockMutex(&game_g_random_mutex);
      v16 = *(_QWORD*)(a1 + 160);
      HIDWORD(v44) =
          (16 * ((_WORD)v23 -
                 1000 * (unsigned __int16)((v23 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v41_.v42 = nullptr;
    v41_.v43 = 0;
    v41_.v41 = nullptr;
    game_8aef60(&v41_.v41, (unsigned __int16*)&v44, v14),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    game_ItemSeq_GainBind(a1, &v41_.v41, v16, game_vstring_kEmpty_ptr[0],
                          game_vstring_kEmpty_ptr[0]),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v41_.v41 != nullptr) {
      v41_.v42 = v41_.v41;
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, (_QWORD)(v41_.v41)),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  else {
    v25 = *(unsigned __int16*)(v15 + 16);
    v44 = 0x100000000LL;
    v26 = *v5;
    LOWORD(v44) = v25;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v26 + 64) + 8 * v25) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
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
      v14 = nn_os_UnlockMutex(&game_g_random_mutex);
      v16 = *(_QWORD*)(a1 + 160);
      HIDWORD(v44) =
          (16 * ((_WORD)v31 -
                 1000 * (unsigned __int16)((v31 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
    v41_.v42 = nullptr;
    v41_.v43 = 0;
    v41_.v41 = nullptr;
    game_8aef60(&v41_.v41, (unsigned __int16*)&v44, v14),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    game_ItemSeq_GainBind(a1, &v41_.v41, v16, game_vstring_kEmpty_ptr[0],
                          game_vstring_kEmpty_ptr[0]),
        v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v41_.v41 != nullptr) {
      v41_.v42 = v41_.v41;
      v32 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free_alt3(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, (_QWORD)(v41_.v41)),
          v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v33 = *(_QWORD*)(a1 + 152);
    v41_.v41 = nullptr;
    if (v33 != 0) {
      v34 = *(unsigned __int16*)(v33 + 16);
      HIDWORD(v41_.v41) = 1;
      v35 = *v5;
      LOWORD(v41_.v41) = v34;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v35 + 64) + 8 * v34) + 73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v36 = game_map_MapRandom_instance__ptr[0];
        v37 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v38 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v39 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v36 + 1) = v37;
        v40 = (v39 >> 8) ^ (v38 >> 19) ^ v39 ^ v38;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v36) = v38;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v36 + 4) = v40;
        nn_os_UnlockMutex(&game_g_random_mutex),
            v14 =
                COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(__n128, "v0", "=w"));
        HIDWORD(v41_.v41) =
            (16 * ((_WORD)v40 -
                   1000 * (unsigned __int16)((v40 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    if (!TransporterConst_89ca00((unsigned __int16*)&v41_.v41)) {
      *(_BYTE*)(a1 + 168) = 1;
    }
  }
}

#pragma GCC visibility pop
